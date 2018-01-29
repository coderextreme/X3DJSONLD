package net.coderextreme;

import org.w3c.dom.*;
import javax.json.*;
import java.util.*;
import java.io.*;
import javax.xml.transform.stream.*;
import javax.xml.transform.*;
import javax.xml.transform.dom.DOMSource; 
import javax.xml.parsers.*;

public class X3DJSONLD {
	public void elementSetAttribute(Element element, String key, List<JsonValue> value) {
		StringBuffer sb = new StringBuffer();
		for (int i = 0; i < value.size(); i++) {
			if (i > 0) {
				sb.append(" ");
			}
			sb.append(value.get(i));
		}
		element.setAttribute(key, sb.toString());
	}
	public void elementSetAttribute(Element element, String key, String value) {
		if (key.equals("SON schema")) {
			// JSON Schema
		} else if (key.equals("ncoding")) {
			// encoding, UTF-8, UTF-16 or UTF-32
		} else {
			// System.err.println(key+"= SA "+value);
			if (value.charAt(0) == '"' && value.charAt(value.length()-1) == '"') {
				element.setAttribute(key, value.substring(1, value.length()-1));
			} else {
				element.setAttribute(key, value);
			}
		}
	}

	public Element CreateElement(Document document, String key, String containerField) {
		Element child = document.createElement(key);
		if (containerField != null) {
			elementSetAttribute(child, "containerField", containerField);
		}
		return child;
	}

	public void CDATACreateFunction(Document document, Element element, JsonArray value) {
		StringBuffer sb = new StringBuffer();
		for (int i = 0; i < value.size(); i++) {
			sb.append(value.get(i));
			sb.append("\r\n");
		}
		String str = sb.toString();
		String y = str.replaceAll("\\\"", "\\\"")
			.replaceAll("&lt;", "<")
			.replaceAll("&gt;", ">")
			.replaceAll("&amp;", "&");
		do {
			str = y;
			y = str.replaceAll("'([^'\r\n]*)\n([^']*)'", "'$1\\n$2'");
			if (!str.equals(y)) {
				System.err.println("CDATA Replacing "+str+" with "+y);
			}
		} while (!y.equals(str));
		CDATASection cdata = document.createCDATASection(y);
		element.appendChild(cdata);
	}


	public void convertProperty(Document document, String key, JsonObject object, Element element, String containerField) {
		// System.err.println(key+"= P "+object.get(key));
		if (object != null && object.get(key) instanceof JsonObject) {
			if (key.substring(0,1).equals("@")) {
				convertJsonValue(document, object.get(key), key, element, null);
			} else if (key.substring(0,1).equals("-")) {
				System.err.println("converting children at "+key);
				convertJsonValue(document, object.get(key), key, element, null);
			} else if (key.equals("#comment")) {
				if (object.get(key) instanceof JsonArray) {
					JsonArray array = (JsonArray)object.get(key);
					for (int childkey = 0; childkey <  array.size(); childkey++) {  // for each field
						Comment child = document.createComment(CommentStringToXML(array.get(childkey).toString()));
						element.appendChild(child);
					}
				} else {
						Comment child = document.createComment(CommentStringToXML(object.get(key).toString()));
						element.appendChild(child);
				}
			} else if (key.equals("#sourceText")) {
				CDATACreateFunction(document, element, (JsonArray)object.get(key));
			} else if (key.equals("connect") || key.equals("fieldValue") || key.equals("field") || key.equals("meta") || key.equals("component") || key.equals("unit")) {
				JsonArray array = (JsonArray)object.get(key);
				convertJsonArray(document, array, key, element, null);
			} else {
				convertJsonValue(document, object.get(key), key, element, null);
			}
		}
	}

	public String CommentStringToXML(String str) {
		String y = str;
		if (!y.equals(str)) {
			System.err.println("X3DJSONLD comment replacing "+ y+ " with "+ str);
		}
		return str;
	}

	public String  SFStringToXML(String str) {
		String y = str;
		if (!y.equals(str)) {
			System.err.println("X3DJSONLD sfstring replacing "+ y+ " with "+ str);
		}
		return str;
	}

	public String JSONStringToXML(String str) {
		String y = str;
		if (!y.equals(str)) {
			System.err.println("X3DJSONLD json replacing "+ y+ " with "+ str);
		}
		return str;
	}

	public void convertJsonObject(Document document, JsonObject object, String parentkey, Element element, String containerField) {
		Boolean kii;
		try {
			Integer.parseInt(parentkey);
			kii = true;
		} catch (Exception e) {
			kii = false;
		}
		Element child;
		if (kii || parentkey.startsWith("-")) {
			child = element;
		} else {
			child = CreateElement(document, parentkey, containerField);
		}
		Iterator<String> keyiter = object.keySet().iterator();
		while (keyiter.hasNext()) {
			String key = keyiter.next();
			JsonValue ok = object.get(key);
			// System.err.println(key+"= O "+ok);
			if (ok instanceof JsonObject) {
				if (key.substring(0,1).equals("@")) {
					convertProperty(document, key, (JsonObject)ok, child, null);
				} else {
					convertJsonObject(document, (JsonObject)ok, key, child, null);
				}
			} else if (ok instanceof JsonArray) {
				convertJsonArray(document, (JsonArray)ok, key, child, null);
			} else if (ok instanceof JsonNumber) {
				elementSetAttribute(child, key.substring(1),ok.toString());
			} else if (ok instanceof JsonString) {
				if (!key.equals("#comment")) {
					// ordinary string attributes
					elementSetAttribute(child, key.substring(1), JSONStringToXML(ok.toString()));
				} else {
					Comment comment = document.createComment(CommentStringToXML(ok.toString()));
					child.appendChild(comment);
				}
			} else if (ok == JsonValue.FALSE || ok == JsonValue.TRUE || ok == JsonValue.NULL) {
				elementSetAttribute(child, key.substring(1),ok.toString());
			} else if (ok == null) {
			} else {
			}
		}
		if (!kii && !parentkey.startsWith("-")) {
			element.appendChild(child);
			// element.appendChild(document.createTextNode("\n"));
		}
	}

	public void convertJsonArray(Document document, JsonArray array, String parentkey, Element element, String containerField) {
		Boolean arrayOfStrings = false;
		List<JsonValue> localArray = new ArrayList<JsonValue>();
		for (int key = 0; key < array.size(); key++) {
			JsonValue ok = array.get(key);
			// System.err.println(key+","+parentkey+"= A "+ok);
			if (ok instanceof JsonNumber) {
				localArray.add(ok);
			} else if (ok instanceof JsonString) {
				localArray.add(ok);
				arrayOfStrings = true;
			} else if (ok == JsonValue.TRUE || ok == JsonValue.FALSE || ok == JsonValue.NULL) {
				localArray.add(ok);
			} else if (ok instanceof JsonObject) {
				Boolean kii;
				try {
					Integer.parseInt(""+key);
					kii = true;
				} catch (Exception e) {
					kii = false;
				}
				if (!parentkey.startsWith("-") && kii) {
					convertJsonValue(document, ok, parentkey, element, null);
				} else {
					convertJsonValue(document, ok, ""+key, element, null);
				}
			} else if (ok instanceof JsonArray) {
				convertJsonValue(document, ok, ""+key, element, null);
			} else if (ok == null) {
			} else {
			}
		}
		if (parentkey.substring(0,1).equals("@")) {
			elementSetAttribute(element, parentkey.substring(1), localArray);
		}
	}

	public Element convertJsonValue(Document document, JsonValue object, String parentkey, Element element, String containerField) {
		// System.err.println(parentkey+"= V "+object);
		if (object instanceof JsonArray) {
			convertJsonArray(document, (JsonArray)object, parentkey, element, containerField);
		} else {
			convertJsonObject(document, (JsonObject)object, parentkey, element, containerField);
		}
		return element;
	}

	public Document loadJsonIntoDocument(JsonObject jsobj) throws ParserConfigurationException {
		DocumentBuilderFactory dbf = DocumentBuilderFactory.newInstance();
		DocumentBuilder db = dbf.newDocumentBuilder();
		Document document = db.newDocument();
		Element element = CreateElement(document, "X3D", null);
		elementSetAttribute(element,  "xmlns:xsd",  "http://www.w3.org/2001/XMLSchema-instance");
		convertJsonObject(document, (JsonObject)jsobj.get("X3D"), "-", element, null);
		// convertProperty(document, "X3D", (JsonObject)(jsobj.get("X3D")), element, null);
		document.appendChild(element);
		return document;
	}

	public JsonObject readJsonFile(File jsonFile) throws FileNotFoundException {
		InputStream is = new FileInputStream(jsonFile);
		JsonReader reader = Json.createReader(is);
		JsonObject jsobj = reader.readObject();
		return jsobj;
	}

	public String getX3DVersion(JsonObject jsobj) {
		String version = "3.3";
		if (jsobj != null) {
			version = ((JsonObject)jsobj.get("X3D")).get("@version").toString();
			version = version.substring(1, version.length()-1);
		}
		return version;
	}
	public static void main(String args[]) {
		try {
			X3DJSONLD loader = new X3DJSONLD();
			JsonObject jsobj = loader.readJsonFile(new File(args[0]));
			Document document = loader.loadJsonIntoDocument(jsobj);
			System.out.println(loader.serializeDOM(loader.getX3DVersion(jsobj), document));
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

	public String fixXML(String xmlstr, String version) {
		// get rid of self-closing tags
		xmlstr = xmlstr.replaceAll("(<[ \t]*)([A-Za-z0-9]+)([^>]*)/>", "$1$2$3></$2>");
		// strip out namespace
		xmlstr = xmlstr.replaceAll("xmlns=\"[^\"]*\"", "");

		// strip out schema
		xmlstr = xmlstr.replaceAll("xsd:noNamespaceSchemaLocation=\"[^\"]*\"", "");


		// Fix CDATA sections
		xmlstr = xmlstr.replaceAll("&lt;!\\[CDATA\\[", "<![CDATA[");
		xmlstr = xmlstr.replaceAll("\\]\\]&gt;", "]]>");
		String xmlstr2;
		// xmlstr = xmlstr.replaceAll("(\\+)&quot;", "\\&quot;");
		do {
			xmlstr2 = xmlstr;
			xmlstr = xmlstr2.replaceAll("(<!\\[CDATA\\[(.|\n)*)&lt;((.|\n)*\\]\\]>)", "$1<$3");
		} while (!xmlstr.equals(xmlstr2));
		do {
			xmlstr2 = xmlstr;
			xmlstr = xmlstr2.replaceAll("(<!\\[CDATA\\[(.|\n)*)&gt;((.|\n)*\\]\\]>)", "$1>$3");
		} while (!xmlstr.equals(xmlstr2));
		do {
			xmlstr2 = xmlstr;
			xmlstr = xmlstr2.replaceAll("(<!\\[CDATA\\[(.|\n)*)&amp;((.|\n)*\\]\\]>)", "$1&$3");
		} while (!xmlstr.equals(xmlstr2));

		xmlstr = xmlstr.replace("?>", "?>\n<!DOCTYPE X3D PUBLIC \"ISO//Web3D//DTD X3D "+version+"//EN\" \"http://www.web3d.org/specifications/x3d-"+version+".dtd\">\n");

		return xmlstr;
	}

	public String serializeDOM(String x3dVersion, Document document) throws TransformerConfigurationException, TransformerException {
		TransformerFactory tFactory = TransformerFactory.newInstance();
		Transformer transformer = tFactory.newTransformer();
		transformer.setOutputProperty(OutputKeys.INDENT, "yes");
		transformer.setOutputProperty(OutputKeys.DOCTYPE_PUBLIC,"yes");
		transformer.setOutputProperty("{http://xml.apache.org/xslt}indent-amount", "2");
		DOMSource source = new DOMSource(document);
		StringWriter writer = new StringWriter();
		StreamResult result = new StreamResult(writer);
		transformer.transform(source, result);
		String xml = writer.toString();
		xml = fixXML(xml, x3dVersion);
		return xml;
	}
}
