package net.coderextreme;

import org.xml.sax.Attributes;
import org.xml.sax.SAXException;
import org.xml.sax.XMLReader;
import org.xml.sax.ext.DefaultHandler2;
import java.util.*;
import java.io.*;
import javax.xml.parsers.SAXParserFactory;
import javax.xml.parsers.SAXParser;

// Convert X3D XML to  RPN (Reverse Polish Notation)

class XML2RPN extends DefaultHandler2 {

    private OutputStreamWriter writer = null;
    private LinkedList<Attributes> hier = new LinkedList<Attributes>();

    public XML2RPN(OutputStreamWriter writer) {
	this.writer = writer;
    }

    /*
    public void startDocument() throws SAXException {
	try {
	} catch (IOException e) {
		e.printStackTrace();
	}
    }
    */

    public void endDocument() throws SAXException {
	try {
		writer.write("X3D\n");
	} catch (IOException e) {
		e.printStackTrace();
	}
    }

    public void startElement(String uri, String localName,
        String qName, Attributes attributes) throws SAXException {
	hier.addLast(attributes);
    }

    public void endElement(String uri, String localName,
        String qName) throws SAXException {
	Attributes attributes = hier.removeLast();
	for (int i = 0; i < attributes.getLength(); i++) {
		try {
			writer.write(attributes.getValue(i)+"\n");
		} catch (IOException e) {
			e.printStackTrace();
		}
		try {
			writer.write(attributes.getLocalName(i)+"\n");
		} catch (IOException e) {
			e.printStackTrace();
		}
	}
	try {
		writer.write(qName+"\n");
	} catch (IOException e) {
		e.printStackTrace();
	}
    }

    public void characters(char ch[], int start, int length)
        throws SAXException {
	String value = new String(ch, start, length);
	try {
		writer.write("#text#"+value+"\n");
	} catch (IOException e) {
		e.printStackTrace();
	}
    }

    public void comment(char ch[], int start, int length)
        throws SAXException {
	String value = new String(ch, start, length);
	try {
		writer.write("#comment#"+value+"\n");
	} catch (IOException e) {
		e.printStackTrace();
	}
    }
}    

public class XML2RPNParser {
    public static void main (String argv []) {
        SAXParserFactory factory = SAXParserFactory.newInstance();
        try {
            SAXParser      saxParser = factory.newSAXParser();
	    XMLReader xmlReader = saxParser.getXMLReader();
	    OutputStreamWriter writer = new OutputStreamWriter(System.out, "UTF-8");
            XML2RPN handler   = new XML2RPN(writer);
	    xmlReader.setProperty("http://xml.org/sax/properties/lexical-handler",
                      handler); 
            saxParser.parse(System.in, handler);
        } catch (Throwable err) {
            err.printStackTrace ();
        }
    }
}
