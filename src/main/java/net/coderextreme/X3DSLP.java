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

    public void writeXML(String str) {
	    try {
	    	writer.write(str);
	    } catch (IOException ioe) {
		    ioe.printStackTrace(System.err);
	    }
    }

    public void startDocument() throws SAXException {
	writeXML("<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n");
    }

    public void endDocument() throws SAXException {
    }

    public void startElement(String uri, String localName, String qName, Attributes attributes) throws SAXException {
	final String [] advice = new String[] { "method", "start", "around", "end" };
	final String [] method = new String[] { "add", "get", "set", "remove", "grant", "revoke", "move", "draw" };
	String fieldType = "";
	writeXML("<"+qName+"\n");
	for (int i = 0; i < attributes.getLength(); i++) {
		String attributeName =  attributes.getLocalName(i);
		String attributeValue = attributes.getValue(i);
		if (qName.equals("field") && attributeName.equals("type")) {
			fieldType = attributeValue;
		}
		if (i > 0) {
			writeXML("\n");

		}
		writeXML("\t"+attributeName+"=\""+attributeValue+"\"");
	}
	writeXML(">\n");
	writeXML("\t<advice element=\""+qName+"\"> <!-- add macro1, macro2, macro3, ... attributes and values for templating -->\n");
	for (int a = 0; a < advice.length; a++) {
		for (int m = 0; m < method.length; m++) {
			writeXML("\t\t<code op=\""+method[m]+"\" advice=\""+advice[a]+"\"></code>\n");
		}
	}
	writeXML("\t</advice>\n");
	for (int i = 0; i < attributes.getLength(); i++) {
		writeXML("\t\t<advice attribute=\""+attributes.getLocalName(i)+"\" "+(!fieldType.equals("") ? "fieldtype=\""+fieldType+"\"" : "")+"> <!-- add macro1, macro2, macro3, ... attributes and values for templating -->\n");
		for (int a = 0; a < advice.length; a++) {
			for (int m = 0; m < method.length; m++) {
				writeXML("\t\t\t<code op=\""+method[m]+"\" advice=\""+advice[a]+"\"></code>\n");
			}
		}
		writeXML("\t\t</advice>\n");
	}
    }

    public void endElement(String uri, String localName, String qName) throws SAXException {
	writeXML("</"+qName+">\n");
    }

    public void characters(char ch[], int start, int length) throws SAXException {
	/*
	String value = new String(ch, start, length);
	writeXML(value);
	*/
    }

    public void comment(char ch[], int start, int length) throws SAXException {
	String value = new String(ch, start, length);
	writeXML("<!--"+value+"-->\n");
    }
}    

public class X3DSLP {
    public static void main (String argv []) throws Exception {
	    FileInputStream fr = new FileInputStream(new File("../../../../specifications/X3dUnifiedObjectModel-4.0.xml"));
	    FileOutputStream fw = new FileOutputStream(new File("../../../../specifications/X3dExtendedObjectModel-4.0.xml"));
	    SAXParserFactory factory = SAXParserFactory.newInstance();
	    SAXParser      saxParser = factory.newSAXParser();
	    XMLReader xmlReader = saxParser.getXMLReader();
	    OutputStreamWriter writer = new OutputStreamWriter(fw, "UTF-8");
	    X3DSLPHandler handler   = new X3DSLPHandler(writer);
	    xmlReader.setProperty("http://xml.org/sax/properties/lexical-handler",
		      handler); 
	    saxParser.parse(fr, handler);
	    writer.close();
	    fr.close();
	    fw.close();
    }
}
