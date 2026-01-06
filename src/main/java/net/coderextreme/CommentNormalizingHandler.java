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
// import javax.xml.transform.sax.SAXSource;
// import javax.xml.transform.stream.StreamSource;
// import javax.xml.transform.stream.StreamResult;
// import javax.xml.transform.OutputKeys;
// import javax.xml.transform.Transformer;
// import javax.xml.transform.TransformerFactory;

public class CommentNormalizingHandler extends DefaultHandler2 {
	private Writer writer;

	public CommentNormalizingHandler(Writer writer) {
		this.writer = writer;
	}

	@Override
	public void comment(char[] ch, int start, int length) throws SAXException {
		try {
			String commentText = new String(ch, start, length);

			// Check if comment contains XML tag-like structures with newlines
			if (containsTagWithNewlines(commentText)) {
				// Normalize newlines within tags but keep multi-line structure outside tags
				String normalized = normalizeTagNewlines(commentText);

				// Now split by remaining newlines (those outside tags)
				String[] lines = normalized.split("\\n");
				for (String line : lines) {
					String trimmed = line.trim();
					if (!trimmed.isEmpty()) {
						writer.write("<!--");
						writer.write(trimmed);
						writer.write("-->");
					}
				}
			} else {
				// No tags with newlines - safe to split normally
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
		} catch (IOException e) {
			throw new SAXException("Error writing comment", e);
		}
	}

	private boolean containsTagWithNewlines(String text) {
		// Check for start tags with newlines: <tag...newline...>
		Pattern startTagPattern = Pattern.compile("<[^/>][^>]*\\n[^>]*>", Pattern.DOTALL);
		if (startTagPattern.matcher(text).find()) {
			return true;
		}

		// Check for end tags with newlines: </tag...newline...>
		Pattern endTagPattern = Pattern.compile("</[^>]*\\n[^>]*>");
		if (endTagPattern.matcher(text).find()) {
			return true;
		}

		return false;
	}

	private String normalizeTagNewlines(String text) {
		// Replace newlines within start tags (between < and >)
		Pattern startTagPattern = Pattern.compile("<([^/>][^>]*)>", Pattern.DOTALL);
		Matcher startMatcher = startTagPattern.matcher(text);
		StringBuffer sb = new StringBuffer();

		while (startMatcher.find()) {
			String tagContent = startMatcher.group(1);
			String normalized = tagContent.replaceAll("\\s*\\n\\s*", " ");
			startMatcher.appendReplacement(sb, "<" + Matcher.quoteReplacement(normalized) + ">");
		}
		startMatcher.appendTail(sb);

		// Replace newlines within end tags
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

	@Override
	public void startElement(String uri, String localName, String qName, org.xml.sax.Attributes attributes) throws SAXException {
		try {
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
			writer.write(escapeXml(new String(ch, start, length)));
		} catch (IOException e) {
			throw new SAXException("Error writing characters", e);
		}
	}

	@Override
	public void startDocument() throws SAXException {
		try {
			writer.write("<?xml version='1.0' encoding='UTF-8'?>");
		} catch (IOException e) {
			throw new SAXException("Error writing start document", e);
		}
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

	private String escapeXml(String text) {
		return text.replace("&", "&amp;")
			.replace("<", "&lt;")
			.replace(">", "&gt;")
			.replace("'", "&apos;")
			.replace("\"", "&quot;");
	}
	public static void main (String argv []) throws Exception {
		// TransformerFactory transformerFactory = TransformerFactory.newInstance();
		// Transformer transformer = transformerFactory.newTransformer();
		// transformer.setOutputProperty(OutputKeys.OMIT_XML_DECLARATION, "yes");
		// transformer.setOutputProperty(OutputKeys.INDENT, "yes");
		// transformer.setOutputProperty(OutputKeys.STANDALONE, "no");
		// transformer.setOutputProperty(OutputKeys.METHOD, "xml");
		// transformer.setOutputProperty(OutputKeys.ENCODING, "UTF-8");
		// transformer.setOutputProperty(OutputKeys.VERSION, "1.0");
		// transformer.setOutputProperty(OutputKeys.DOCTYPE_SYSTEM, "");
		// transformer.setOutputProperty(OutputKeys.DOCTYPE_PUBLIC, "");
		// transformer.setOutputProperty("{http://xml.apache.org/xslt}indent-amount", "2");

		SAXParserFactory factory = SAXParserFactory.newInstance();
		SAXParser      saxParser = factory.newSAXParser();
		XMLReader reader = saxParser.getXMLReader();
		StringWriter writer = new StringWriter();
		CommentNormalizingHandler handler   = new CommentNormalizingHandler(writer);
		reader.setContentHandler(handler);
		reader.setProperty("http://xml.org/sax/properties/lexical-handler",
		      handler); 
		reader.setEntityResolver(handler);
		// transformer.transform(new SAXSource(reader, new InputSource(System.in)), new StreamResult(writer));
		reader.parse(new InputSource(System.in));
		System.out.println(writer.toString());
	}
}
