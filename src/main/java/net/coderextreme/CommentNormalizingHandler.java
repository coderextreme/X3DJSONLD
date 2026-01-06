package net.coderextreme;

import java.io.IOException;
import java.io.Writer;
import java.io.StringWriter;
import java.io.StringReader;
import java.util.regex.Pattern;
import java.util.regex.Matcher;
import org.xml.sax.Attributes;
import org.xml.sax.XMLReader;
import org.xml.sax.InputSource;
import org.xml.sax.SAXException;
import org.xml.sax.ext.DefaultHandler2;
import javax.xml.parsers.SAXParserFactory;
import javax.xml.parsers.SAXParser;

public class CommentNormalizingHandler extends DefaultHandler2 {
    private Writer writer;

    // Formatting state
    private int depth = 0;
    private static final String INDENT_STRING = "  "; // 2 spaces
    private boolean lastEventWasCharacter = false;

    // DTD suppression state
    private boolean insideDTD = false;

    public CommentNormalizingHandler(Writer writer) {
        this.writer = writer;
    }

    // --- DTD Handling ---

    @Override
    public InputSource resolveEntity(String publicId, String systemId) throws IOException, SAXException {
        // Return empty source to prevent downloading external DTDs
        return new InputSource(new StringReader(""));
    }

    @Override
    public void startDTD(String name, String publicId, String systemId) throws SAXException {
        // Mark that we are inside the DTD so we can ignore comments from it
        insideDTD = true;
    }

    @Override
    public void endDTD() throws SAXException {
        insideDTD = false;
    }

    // --- Content Writing ---

    @Override
    public void startDocument() throws SAXException {
        try {
            writer.write("<?xml version='1.0' encoding='UTF-8'?>");
        } catch (IOException e) {
            throw new SAXException("Error writing start document", e);
        }
    }

    @Override
    public void comment(char[] ch, int start, int length) throws SAXException {
        // 1. IGNORE comments if we are inside the DTD (fixes the "DTD is still there" issue)
        if (insideDTD) {
            return;
        }

        try {
            // 2. Indent before the comment
            writeIndent();

            String commentText = new String(ch, start, length);

            // 3. User logic: Normalize tag newlines inside comments
            if (containsTagWithNewlines(commentText)) {
                String normalized = normalizeTagNewlines(commentText);
                String[] lines = normalized.split("\\n");
                for (String line : lines) {
                    String trimmed = line.trim();
                    if (!trimmed.isEmpty()) {
                        writer.write("<!--");
                        writer.write(trimmed);
                        writer.write("-->");
                        // If we split into multiple comments, ensure newline/indent between them
                         if (!line.equals(lines[lines.length-1])) {
                             writeIndent();
                         }
                    }
                }
            } else {
                String[] lines = commentText.split("\\n");
                for (String line : lines) {
                    String trimmed = line.trim();
                    if (!trimmed.isEmpty()) {
                        writer.write("<!--");
                        writer.write(trimmed);
                        writer.write("-->");
                    }
                }
            }

            lastEventWasCharacter = false;
        } catch (IOException e) {
            throw new SAXException("Error writing comment", e);
        }
    }

    @Override
    public void startElement(String uri, String localName, String qName, Attributes attributes) throws SAXException {
        try {
            // Newline and indent
            writeIndent();

            writer.write("<");
            writer.write(qName);

            for (int i = 0; i < attributes.getLength(); i++) {
                writer.write(" ");
                writer.write(attributes.getQName(i));
                writer.write("='");
                writer.write(escapeXml(attributes.getValue(i)));
                writer.write("'");
            }

            writer.write(">");

            depth++;
            lastEventWasCharacter = false;
        } catch (IOException e) {
            throw new SAXException("Error writing start element", e);
        }
    }

    @Override
    public void endElement(String uri, String localName, String qName) throws SAXException {
        try {
            depth--;

            // Only indent if the content wasn't just text (keeps <tag>text</tag> on one line)
            if (!lastEventWasCharacter) {
                writeIndent();
            }

            writer.write("</");
            writer.write(qName);
            writer.write(">");

            lastEventWasCharacter = false;
        } catch (IOException e) {
            throw new SAXException("Error writing end element", e);
        }
    }

    @Override
    public void characters(char[] ch, int start, int length) throws SAXException {
        try {
            String text = new String(ch, start, length);

            // If text is purely whitespace, ignore it to prevent weird gaps (unless you want to preserve whitespace)
            if (text.trim().isEmpty()) {
                return;
            }

            writer.write(escapeXml(text));
            lastEventWasCharacter = true;
        } catch (IOException e) {
            throw new SAXException("Error writing characters", e);
        }
    }

    @Override
    public void processingInstruction(String target, String data) throws SAXException {
        try {
            writeIndent();
            writer.write("<?");
            writer.write(target);
            if (data != null && !data.isEmpty()) {
                writer.write(" ");
                writer.write(data);
            }
            writer.write("?>");
            lastEventWasCharacter = false;
        } catch (IOException e) {
            throw new SAXException("Error writing processing instruction", e);
        }
    }

    // --- Helpers ---

    private void writeIndent() throws IOException {
        writer.write("\n");
        for (int i = 0; i < depth; i++) {
            writer.write(INDENT_STRING);
        }
    }

    private String escapeXml(String text) {
        return text.replace("&", "&amp;")
            .replace("<", "&lt;")
            .replace(">", "&gt;")
            .replace("'", "&apos;")
            .replace("\"", "&quot;");
    }

    private boolean containsTagWithNewlines(String text) {
        Pattern startTagPattern = Pattern.compile("<[^/>][^>]*\\n[^>]*>", Pattern.DOTALL);
        if (startTagPattern.matcher(text).find()) return true;
        Pattern endTagPattern = Pattern.compile("</[^>]*\\n[^>]*>");
        return endTagPattern.matcher(text).find();
    }

    private String normalizeTagNewlines(String text) {
        Pattern startTagPattern = Pattern.compile("<([^/>][^>]*)>", Pattern.DOTALL);
        Matcher startMatcher = startTagPattern.matcher(text);
        StringBuffer sb = new StringBuffer();
        while (startMatcher.find()) {
            String tagContent = startMatcher.group(1);
            String normalized = tagContent.replaceAll("\\s*\\n\\s*", " ");
            startMatcher.appendReplacement(sb, "<" + Matcher.quoteReplacement(normalized) + ">");
        }
        startMatcher.appendTail(sb);

        Pattern endTagPattern = Pattern.compile("<(/[^>]*)>");
        Matcher endMatcher = endTagPattern.matcher(sb.toString());
        StringBuffer sb2 = new StringBuffer();
        while (endMatcher.find()) {
            String tagContent = endMatcher.group(1);
            String normalized = tagContent.replaceAll("\\s*\\n\\s*", " ");
            endMatcher.appendReplacement(sb2, "<" + Matcher.quoteReplacement(normalized) + ">");
        }
        endMatcher.appendTail(sb2);
        return sb2.toString();
    }

    public static void main(String argv[]) throws Exception {
        SAXParserFactory factory = SAXParserFactory.newInstance();
        factory.setNamespaceAware(true);

        // Disable DTD loading features for performance, though our Handler also catches it
        try {
            factory.setFeature("http://apache.org/xml/features/nonvalidating/load-external-dtd", false);
        } catch (Exception e) {
            // Feature not supported by this parser, ignore
        }

        SAXParser saxParser = factory.newSAXParser();
        XMLReader reader = saxParser.getXMLReader();

        StringWriter writer = new StringWriter();
        CommentNormalizingHandler handler = new CommentNormalizingHandler(writer);

        // Register handler for Content, Lexical, and Entity resolution
        reader.setContentHandler(handler);
        reader.setProperty("http://xml.org/sax/properties/lexical-handler", handler);
        reader.setEntityResolver(handler);

        reader.parse(new InputSource(System.in));

        System.out.println(writer.toString());
    }
}
