package net.coderextreme;

import org.xml.sax.Attributes;
import org.xml.sax.SAXException;
import org.xml.sax.XMLReader;
import org.xml.sax.ext.DefaultHandler2;
import java.util.*;
import java.io.*;
import javax.xml.parsers.SAXParserFactory;
import javax.xml.parsers.SAXParser;

// Convert X3DUOM to X3D SAX-Like Parser (X3DSLP)

class X3DSLPHandler extends DefaultHandler2 {

    private OutputStreamWriter writer = null;

    public X3DSLPHandler(OutputStreamWriter writer) {
	this.writer = writer;
    }

    public void startDocument() throws SAXException {
	try {
		writer.write("<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n");
	} catch (IOException e) {
		e.printStackTrace();
	}
    }

    public void endDocument() throws SAXException {
	/*
	try {
	} catch (IOException e) {
		e.printStackTrace();
	}
	*/
    }

    public void startElement(String uri, String localName, String qName, Attributes attributes) throws SAXException {
	try {
		writer.write("\t<"+qName+"\n");
		for (int i = 0; i < attributes.getLength(); i++) {
			try {
				if (i > 0) {
					writer.write("\n");

				}
				writer.write("\t\t"+attributes.getLocalName(i)+"=\""+attributes.getValue(i)+"\"");
			} catch (IOException e) {
				e.printStackTrace();
			}
		}
		writer.write(">\n\t\t<advice element=\""+qName+"\"><start></start><around><around><end></end></advice>\n");
	} catch (IOException e) {
		e.printStackTrace();
	}
	for (int i = 0; i < attributes.getLength(); i++) {
		try {
			writer.write("\t\t\t<advice attribute=\""+attributes.getLocalName(i)+"\"><start></start><around><around><end></end></advice>\n");
		} catch (IOException e) {
			e.printStackTrace();
		}
	}
    }

    public void endElement(String uri, String localName, String qName) throws SAXException {
	try {
		writer.write("\t</"+qName+">\n");
	} catch (IOException e) {
		e.printStackTrace();
	}
    }

    public void characters(char ch[], int start, int length)
        throws SAXException {
	String value = new String(ch, start, length);
	/*
	try {
		writer.write(value);
	} catch (IOException e) {
		e.printStackTrace();
	}
	*/
    }

    public void comment(char ch[], int start, int length)
        throws SAXException {
	String value = new String(ch, start, length);
	try {
		writer.write("<!--"+value+"-->\n");
	} catch (IOException e) {
		e.printStackTrace();
	}
    }
}    

public class X3DSLP {
    public static void main (String argv []) {
        SAXParserFactory factory = SAXParserFactory.newInstance();
        try {
            SAXParser      saxParser = factory.newSAXParser();
	    XMLReader xmlReader = saxParser.getXMLReader();
	    OutputStreamWriter writer = new OutputStreamWriter(System.out, "UTF-8");
            X3DSLPHandler handler   = new X3DSLPHandler(writer);
	    xmlReader.setProperty("http://xml.org/sax/properties/lexical-handler",
                      handler); 
            saxParser.parse(System.in, handler);
        } catch (Throwable err) {
            err.printStackTrace ();
        }
    }
}
