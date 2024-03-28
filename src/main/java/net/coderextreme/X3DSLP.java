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

    public void writeCode(String method, String advice, String code) {
	writeXML("\n\t\t<code op=\""+method+"\" advice=\""+advice+"\">");
	writeXML(code);
	writeXML("</code>\n");
    }
    public void startDocument() throws SAXException {
	writeXML("<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n");
    }

    public void endDocument() throws SAXException {
    }

    public void startElement(String uri, String localName, String qName, Attributes attributes) throws SAXException {
	final String [] advice = new String[] { "basestart", "base", "baseend", "start", "around", "end" };
	final String [] method = new String[] { "declare", "define", "initialize", "add", "get", "set", "remove", "grant", "revoke", "move", "draw", "method:findObjectsByInterface:Interface[] interfaces:interfaces", "method:applyMatrix:SFMatrix mat, integer depth:mat, depth-1", "method:reparentChildrenByParentClass:Class clazz, Object newParent, String[] ignoredFields:clazz, newParent, ignoredFields"};
	String concreteNode = "";
	writeXML("<"+qName+"\n");
	for (int i = 0; i < attributes.getLength(); i++) {
		String attributeName =  attributes.getLocalName(i);
		String attributeValue = attributes.getValue(i);
		if (qName.equals("ConcreteNode") && attributeName.equals("name")) {
			concreteNode = attributeValue;
		}
		if (i > 0) {
			writeXML("\n");

		}
		writeXML("\t"+attributeName+"=\""+attributeValue+"\"");
	}
	writeXML(">\n");
	writeXML("\t<advice node=\""+qName+"\"> <!-- add macro1, macro2, macro3, ... attributes and values for templating -->\n");
	for (int a = 0; a < advice.length; a++) {
		for (int m = 0; m < method.length; m++) {
			String [] methodInfo = method[m].split(":");
			String methodName = methodInfo[0];
			String formalParameters = "";
			String actualParameters = "";
			if (methodInfo.length == 4 && methodName.equals("method")) {
				methodName = methodInfo[1];
				formalParameters = methodInfo[2];
				actualParameters = methodInfo[3];
			}
			if (!concreteNode.equals("")) {
				if (advice[a].equals("basestart") && 	method[m].equals("declare")) {
					writeCode(advice[a], method[m], "public class "+concreteNode+" {");
				}
				if (advice[a].equals("basestart") && 	method[m].startsWith("method")) {
					writeCode(advice[a], method[m],
						"public Object[] "+methodName+"("+formalParameters+") {\n"+
							"Object[] array1 = new Object[];\n"+
							"Object[] array2 = new Object[];\n"+
							"Object[] result = null;\n"
						);
				}
			} else if (qName.equals("field") || qName.equals("fieldType")) {
				String fieldType = "";
				String fieldName = "";
				for (int i = 0; i < attributes.getLength(); i++) {
					String attributeName =  attributes.getLocalName(i);
					String attributeValue = attributes.getValue(i);
					if (qName.equals("field") && attributeName.equals("type")) {
						fieldType = attributeValue;
					}
					if (qName.equals("field") && attributeName.equals("name")) {
						fieldName = attributeValue;
					}
					if (qName.equals("FieldType") && attributeName.equals("type")) {
						fieldType = attributeValue;
					}
					if (!fieldType.equals("") && !fieldName.equals("")) {
						if (advice[a].equals("base") && 	method[m].equals("initialize")) {
							writeCode(advice[a], method[m],
								"private "+fieldType+" "+fieldName+" = new "+fieldType+"();");
						}
					}
				}
				if (advice[a].equals("base") &&	 method[m].startsWith("method") && !fieldType.equals("") && !fieldName.equals("")) {
					if (fieldType.startsWith("SF")) {
						writeCode(advice[a], method[m],
							"result = new Object[array1.length + array2.length];\n"+
							"array2 =  "+fieldName+"."+methodName+"("+actualParameters+");\n"+
							"System.arraycopy(array1, 0, result, 0, array1.length);\n"+
							"System.arraycopy(array2, 0, result, array1.length, array2.length);\n"+
							"array1 = result\n;"
						);
					} else if (fieldType.startsWith("MF")) {
						writeCode(advice[a], method[m],
								"for (int n = 0; n < "+fieldName+".size(); n++) {\n"+
									"result = new Object[array1.length + array2.length];\n"+
									"array2 =  "+fieldName+"[n]."+methodName+"("+actualParameters+");\n"+
									"System.arraycopy(array1, 0, result, 0, array1.length);\n"+
									"System.arraycopy(array2, 0, result, array1.length, array2.length);\n"+
									"array1 = result;\n"+
								"}");
					} else {
						writeCode(advice[a], method[m],
							"result = new Object[array1.length + array2.length];\n"+
							"array2 =  "+fieldName+"."+methodName+"("+actualParameters+");\n"+
							"System.arraycopy(array1, 0, result, 0, array1.length);\n"+
							"System.arraycopy(array2, 0, result, array1.length, array2.length);\n"+
							"array1 = result;"
						);
					}
				}
				if (advice[a].equals("baseend") && method[m].startsWith("method")) {
					writeCode(advice[a], method[m],
							"\treturn result;\n"+
						"}\n");
				}
			}
			if (!concreteNode.equals("")) {
				if (advice[a].equals("baseend") && 	method[m].equals("declare")) {
					writeCode(advice[a], method[m],
						"}\n");
				}
			}
		}
	}
	writeXML("\t</advice>\n");
	/*
	if (!fieldType.equals("") && !fieldName.equals("")) {
		for (int i = 0; i < attributes.getLength(); i++) {
			String attributeName =  attributes.getLocalName(i);
			writeXML("\t\t<advice attribute=\""+attributeName+"\" "+(!fieldType.equals("") ? "fieldtype=\""+fieldType+"\"" : "")+"> <!-- add macro1, macro2, macro3, ... attributes and values for templating -->\n");
			for (int m = 0; m < method.length; m++) {
				for (int a = 0; a < advice.length; a++) {
				}
			}
			writeXML("\t\t</advice>\n");
		}
	}
	*/
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
