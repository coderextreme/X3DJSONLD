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

    // Self-closing tag logic
    private String pendingStartTag = null;

    public CommentNormalizingHandler(Writer writer) {
        this.writer = writer;
    }

    // --------------------------------------------------------------------------------
    // Helper: Flush Pending Start Tag
    // --------------------------------------------------------------------------------

    private void flushPendingStartTag() throws SAXException {
        if (pendingStartTag != null) {
            try {
                // Flushing means the element has content (text or children).
                // Close the start tag with ">"
                writer.write(pendingStartTag);
                writer.write(">");
                pendingStartTag = null;
            } catch (IOException e) {
                throw new SAXException("Error flushing pending start tag", e);
            }
        }
    }

    // --------------------------------------------------------------------------------
    // DTD Handling
    // --------------------------------------------------------------------------------

    @Override
    public InputSource resolveEntity(String publicId, String systemId) throws IOException, SAXException {
        return new InputSource(new StringReader(""));
    }

    @Override
    public void startDTD(String name, String publicId, String systemId) throws SAXException {
        try {
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
    // Content Writing
    // --------------------------------------------------------------------------------

    @Override
    public void startDocument() throws SAXException {
        try {
            writer.write("<?xml version='1.0' encoding='UTF-8'?>");
        } catch (IOException e) {
            throw new SAXException("Error writing start document", e);
        }
    }

    @Override
    public void startElement(String uri, String localName, String qName, Attributes attributes) throws SAXException {
        // Parent had a child, so flush parent's opening tag
        flushPendingStartTag();

        try {
            StringBuilder sb = new StringBuilder();
            sb.append("<").append(qName);

            for (int i = 0; i < attributes.getLength(); i++) {
                // Use smart quoting logic to avoid unnecessary escaping
                appendAttribute(sb, attributes.getQName(i), attributes.getValue(i));
            }

            // Store partial tag. We wait to see if it closes immediately.
            pendingStartTag = sb.toString();

        } catch (Exception e) {
            throw new SAXException("Error preparing start element", e);
        }
    }

    @Override
    public void endElement(String uri, String localName, String qName) throws SAXException {
        try {
            if (pendingStartTag != null) {
                // Immediate close after open -> Self-closing
                writer.write(pendingStartTag);
                writer.write("/>");
                pendingStartTag = null;
            } else {
                // Standard closing
                writer.write("</");
                writer.write(qName);
                writer.write(">");
            }
        } catch (IOException e) {
            throw new SAXException("Error writing end element", e);
        }
    }

    @Override
    public void characters(char[] ch, int start, int length) throws SAXException {
        flushPendingStartTag();

        try {
            String text = new String(ch, start, length);
            // Escape special chars for content, but do NOT escape quotes as it's not needed in PCDATA
            writer.write(escapeXmlContent(text));
        } catch (IOException e) {
            throw new SAXException("Error writing characters", e);
        }
    }

    @Override
    public void ignorableWhitespace(char[] ch, int start, int length) throws SAXException {
        characters(ch, start, length);
    }

    @Override
    public void processingInstruction(String target, String data) throws SAXException {
        flushPendingStartTag();

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

    @Override
    public void comment(char[] ch, int start, int length) throws SAXException {
        if (insideDTD) {
            return;
        }

        flushPendingStartTag();

        try {
            String commentText = new String(ch, start, length);

            // 1. Normalize logic
            String normalizedTags = normalizeTagNewlines(commentText);

            // 2. Split logic
            String[] lines = normalizedTags.split("\\n");

            // 3. Write logic
            boolean first = true;
            for (String line : lines) {
                String trimmed = line.trim();

                if (!trimmed.isEmpty()) {
                    if (!first) {
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

    // --------------------------------------------------------------------------------
    // Helpers
    // --------------------------------------------------------------------------------

    /**
     * Appends an attribute with smart quote handling.
     * Strategies:
     * 1. If value has " but no ', use ' delimiters. Don't escape ".
     * 2. If value has ' but no ", use " delimiters. Don't escape '.
     * 3. Else (Neither or Both), use " delimiters. Escape " to &quot;, leave ' alone.
     */
    private void appendAttribute(StringBuilder sb, String name, String value) {
        sb.append(" ").append(name).append("=");

        // Base escape: only & < > (newlines preserved)
        // We do NOT escape quotes yet.
        String baseSafe = value.replace("&", "&amp;")
                               .replace("<", "&lt;")
                               .replace(">", "&gt;");

        boolean hasDouble = baseSafe.contains("\"");
        boolean hasSingle = baseSafe.contains("'");

        if (hasDouble && !hasSingle) {
            // Case: value="foo"bar" -> use single quotes -> 'foo"bar'
            // No changes to content necessary.
            sb.append("'").append(baseSafe).append("'");
        } else if (hasSingle && !hasDouble) {
            // Case: value='foo'bar' -> use double quotes -> "foo'bar"
            // No changes to content necessary.
            sb.append("\"").append(baseSafe).append("\"");
        } else if (!hasSingle && !hasDouble) {
            sb.append("'").append(baseSafe).append("'");
        } else {
            // Case: neither (e.g. key="123") or both (e.g. "foo'bar"baz").
            // Default to double quotes.
            // If both are present, we must escape the double quote.
            if (hasDouble) {
                baseSafe = baseSafe.replace("\"", "&quot;");
            }
            sb.append("\"").append(baseSafe).append("\"");
        }
    }

    /**
     * Escape for Element Content (PCDATA).
     * Strictly minimal escaping.
     * Quotes (" and ') are valid in PCDATA and are NOT escaped.
     */
    private String escapeXmlContent(String text) {
        return text.replace("&", "&amp;")
                   .replace("<", "&lt;")
                   .replace(">", "&gt;");
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
