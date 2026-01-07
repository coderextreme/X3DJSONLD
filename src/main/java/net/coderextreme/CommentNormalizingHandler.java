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

    // DTD suppression state
    private boolean insideDTD = false;

    public CommentNormalizingHandler(Writer writer) {
        this.writer = writer;
    }

    // --------------------------------------------------------------------------------
    // DTD Handling
    // --------------------------------------------------------------------------------

    @Override
    public InputSource resolveEntity(String publicId, String systemId) throws IOException, SAXException {
        // Return empty source to prevent downloading/parsing external DTDs
        return new InputSource(new StringReader(""));
    }

    @Override
    public void startDTD(String name, String publicId, String systemId) throws SAXException {
        try {
            // Preserve the DOCTYPE declaration
            writer.write("<!DOCTYPE ");
            writer.write(name);

            if (publicId != null) {
                writer.write(" PUBLIC \"");
                writer.write(publicId);
                writer.write("\" \"");
                if (systemId != null) {
                    writer.write(systemId);
                }
                writer.write("\"");
            } else if (systemId != null) {
                writer.write(" SYSTEM \"");
                writer.write(systemId);
                writer.write("\"");
            }
            writer.write(">");

            // Mark entry into DTD to suppress internal subset comments
            insideDTD = true;
        } catch (IOException e) {
            throw new SAXException("Error writing DTD", e);
        }
    }

    @Override
    public void endDTD() throws SAXException {
        insideDTD = false;
    }

    // --------------------------------------------------------------------------------
    // Content Writing - Pass-through mode
    // --------------------------------------------------------------------------------

    @Override
    public void startDocument() throws SAXException {
        try {
            writer.write("<?xml version='1.0' encoding='UTF-8'?>");
            // We do NOT add a newline here explicitly.
            // The SAX parser will usually send a 'characters' event with the newline
            // if it exists in the source.
        } catch (IOException e) {
            throw new SAXException("Error writing start document", e);
        }
    }

    @Override
    public void comment(char[] ch, int start, int length) throws SAXException {
        if (insideDTD) {
            return;
        }

        try {
            String commentText = new String(ch, start, length);

            // 1. Normalize logic:
            // Find tag-like structures <...> and replace newlines INSIDE them with spaces.
            String normalizedTags = normalizeTagNewlines(commentText);

            // 2. Split logic:
            // Split by remaining newlines.
            String[] lines = normalizedTags.split("\\n");

            // 3. Write logic
            // We track if we have written a comment to handle newlines between splits
            boolean first = true;

            for (String line : lines) {
                String trimmed = line.trim();

                // Filter out empty comments
                if (!trimmed.isEmpty()) {
                    if (!first) {
                        // If we split a multi-line comment into chunks,
                        // we add a newline to separate them.
                        writer.write("\n");
                    }

                    writer.write("<!-- ");
                    writer.write(trimmed);
                    writer.write(" -->");
                    first = false;
                }
            }
        } catch (IOException e) {
            throw new SAXException("Error writing comment", e);
        }
    }

    @Override
    public void startElement(String uri, String localName, String qName, Attributes attributes) throws SAXException {
        try {
            // No custom indentation. Write exactly what triggered this event.
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
        } catch (IOException e) {
            throw new SAXException("Error writing start element", e);
        }
    }

    @Override
    public void endElement(String uri, String localName, String qName) throws SAXException {
        try {
            // No custom indentation.
            writer.write("</");
            writer.write(qName);
            writer.write(">");
        } catch (IOException e) {
            throw new SAXException("Error writing end element", e);
        }
    }

    @Override
    public void characters(char[] ch, int start, int length) throws SAXException {
        try {
            // Write exact characters (whitespace, newlines, text) as received.
            // Do NOT trim.
            String text = new String(ch, start, length);
            writer.write(escapeXml(text));
        } catch (IOException e) {
            throw new SAXException("Error writing characters", e);
        }
    }

    @Override
    public void ignorableWhitespace(char[] ch, int start, int length) throws SAXException {
        // Treat ignorable whitespace (formatting from validation) exactly like content characters.
        characters(ch, start, length);
    }

    @Override
    public void processingInstruction(String target, String data) throws SAXException {
        try {
            writer.write("<?");
            writer.write(target);
            if (data != null && !data.isEmpty()) {
                writer.write(" ");
                writer.write(data);
            }
            writer.write("?>");
        } catch (IOException e) {
            throw new SAXException("Error writing processing instruction", e);
        }
    }

    // --------------------------------------------------------------------------------
    // Helpers
    // --------------------------------------------------------------------------------

    private String escapeXml(String text) {
        return text.replace("&", "&amp;")
            .replace("<", "&lt;")
            .replace(">", "&gt;")
            .replace("'", "&apos;")
            .replace("\"", "&quot;");
    }

    private String normalizeTagNewlines(String text) {
        Pattern tagPattern = Pattern.compile("<[^>]+>");
        Matcher matcher = tagPattern.matcher(text);
        StringBuffer sb = new StringBuffer();

        while (matcher.find()) {
            String tagContent = matcher.group();
            String normalized = tagContent.replaceAll("\\s*\\n\\s*", " ");
            matcher.appendReplacement(sb, Matcher.quoteReplacement(normalized));
        }
        matcher.appendTail(sb);

        return sb.toString();
    }

    // --------------------------------------------------------------------------------
    // Main
    // --------------------------------------------------------------------------------

    public static void main(String argv[]) throws Exception {
        SAXParserFactory factory = SAXParserFactory.newInstance();
        factory.setNamespaceAware(true);

        try {
            factory.setFeature("http://apache.org/xml/features/nonvalidating/load-external-dtd", false);
        } catch (Exception e) {
            // Feature might not be supported
        }

        SAXParser saxParser = factory.newSAXParser();
        XMLReader reader = saxParser.getXMLReader();

        StringWriter writer = new StringWriter();
        CommentNormalizingHandler handler = new CommentNormalizingHandler(writer);

        reader.setContentHandler(handler);
        reader.setProperty("http://xml.org/sax/properties/lexical-handler", handler);
        reader.setEntityResolver(handler);

        reader.parse(new InputSource(System.in));

        System.out.println(writer.toString());
    }
}
