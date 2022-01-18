package net.coderextreme;

import org.w3c.dom.*;
import org.w3c.dom.ls.*;
import javax.json.*;
import java.util.*;
import java.io.*;
/*
import javax.xml.transform.stream.*;
import javax.xml.transform.*;
import javax.xml.transform.dom.DOMSource; 
*/
import javax.xml.parsers.*;

public class X3DJSONLD {
	public String stripQuotes(String value) {
		if (value.charAt(0) == '"' && value.charAt(value.length()-1) == '"') {
			return value.substring(1, value.length()-1);
		} else {
			return value;
		}
	}
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
			element.setAttribute(key, stripQuotes(value));
		}
	}

	public Element CreateElement(Document document, String key, String containerField) {
		Element child = document.createElement(key);
		if (containerField != null && !containerField.equals("children")) {
			elementSetAttribute(child, "containerField", containerField);
		}
		return child;
	}

	public void CDATACreateFunction(Document document, Element element, JsonArray value) {
		System.err.println("GOT HERE IN CDATA");
		StringBuffer sb = new StringBuffer();
		for (int i = 0; i < value.size(); i++) {
			if (i > 0) {
				sb.append("\r\n");
			}
			sb.append(stripQuotes(value.get(i).toString()));
		}
		String y = sb.toString();
		System.err.println("CDATA Replacing "+y);
		String str = stripQuotes(y);
		str = str
			.replaceAll("&lt;", "<")
			.replaceAll("&gt;", ">")
			.replaceAll("&amp;", "&")
			.replaceAll("&quot;", "\"")
			.replaceAll("'([^'\r\n]*)\n([^']*)'", "'$1\\n$2'");
		if (!str.equals(y)) {
		System.err.println("with            "+y);
		} else {
		// System.err.println("ok");
		}

		CDATASection cdata = document.createCDATASection(str);
		element.appendChild(cdata);
	}


	public void convertProperty(Document document, String key, JsonObject object, Element element, String containerField) {
		// System.err.println(key+"= P "+object.get(key));
		if (object != null && object.get(key) instanceof JsonObject) {
			if (key.equals("@sourceCode")) {
				System.err.println("FOUND SOURCE 1");
				CDATACreateFunction(document, element, (JsonArray)object.get(key));
			} else if (key.substring(0,1).equals("@")) {
				convertJsonValue(document, object.get(key), key, element, containerField);
			} else if (key.substring(0,1).equals("-")) {
				System.err.println("converting children at "+key);
				convertJsonValue(document, object.get(key), key, element, key.substring(1));
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
			} else if (key.equals("#sourceCode")) {
				System.err.println("FOUND SOURCE 2");
				CDATACreateFunction(document, element, (JsonArray)object.get(key));
			} else if (key.equals("connect") || key.equals("fieldValue") || key.equals("field") || key.equals("meta") || key.equals("component") || key.equals("unit")) {
				JsonArray array = (JsonArray)object.get(key);
				convertJsonArray(document, array, key, element, containerField);
			} else {
				convertJsonValue(document, object.get(key), key, element, containerField);
			}
		}
	}

	public String CommentStringToXML(String str) {
		String y = str;
		System.err.println("X3DJSONLD comment replacing "+ y);
		str = stripQuotes(y);
		str = " "+str+" ";
		String x;
		do {
			x = str;
			str = x.replaceAll("(.*)\\\\\"(.*)\\\\\"(.*)", "$1\"$2\"$3");
		} while (!x.equals(str));
		do {
			x = str;
			str = x.replaceAll("(.*)\\\\\"(.*)", "$1\"$2");
		} while (!x.equals(str));
		do {
			x = str;
			str = x.replaceAll("\"\"", "\" \"");
		} while (!x.equals(str));
		if (!y.equals(str)) {
		System.err.println("with                        "+ str);
		} else {
		System.err.println("ok");
		}
		return str;
	}

	public String JSONStringToXML(String str) {
		String y = str;
		// System.err.println("X3DJSONLD jsonstring replacing "+ y);
		if (!y.equals(str)) {
		System.err.println("with                           "+ str);
		} else {
		// System.err.println("ok");
		}
		return str;
	}

	public String fixXML(String str, String version) {
		String y = str;
		System.err.println("fixXML replacing "+ y);
		str = str.replace("?>", "?>\n<!DOCTYPE X3D PUBLIC \"ISO//Web3D//DTD X3D "+version+"//EN\" \"http://www.web3d.org/specifications/x3d-"+version+".dtd\">\n");
		if (!y.equals(str)) {
		System.err.println("with             "+ str);
		} else {
		System.err.println("ok");
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
					convertProperty(document, key, (JsonObject)ok, child, containerField);
				} else if (key.substring(0,1).equals("-")) {
					convertJsonObject(document, (JsonObject)ok, key, child, key.substring(1));
				} else {
					convertJsonObject(document, (JsonObject)ok, key, child, containerField);
				}
			} else if (ok instanceof JsonArray) {
				convertJsonArray(document, (JsonArray)ok, key, child, containerField);
			} else if (ok instanceof JsonNumber) {
				elementSetAttribute(child, key.substring(1),ok.toString());
			} else if (ok instanceof JsonString) {
				if (key.equals("#comment")) {
					Comment comment = document.createComment(CommentStringToXML(ok.toString()));
					child.appendChild(comment);
				} else {
					// ordinary string attributes
					elementSetAttribute(child, key.substring(1), JSONStringToXML(ok.toString()));
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
					convertJsonValue(document, ok, parentkey, element, containerField);
				} else {
					convertJsonValue(document, ok, ""+key, element, parentkey.substring(1));
				}
			} else if (ok instanceof JsonArray) {
				convertJsonValue(document, ok, ""+key, element, containerField);
			} else if (ok == null) {
			} else {
			}
		}
		if (parentkey.equals("@sourceCode")) {
			System.err.println("FOUND SOURCE 3");
			CDATACreateFunction(document, element, array);
		} else if (parentkey.substring(0,1).equals("@")) {
			elementSetAttribute(element, parentkey.substring(1), localArray);
		} else if (parentkey.equals("#sourceCode")) {
			System.err.println("FOUND SOURCE 4");
			CDATACreateFunction(document, element, array);
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
			version = stripQuotes(version);
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

	public String serializeDOM(String x3dVersion, Document document) {
		DOMImplementationLS ls = (DOMImplementationLS)document.getImplementation();
		LSOutput output = ls.createLSOutput();
		LSSerializer ser = ls.createLSSerializer();
        	ser.getDomConfig().setParameter("format-pretty-print", true);
		StringWriter writer = new StringWriter();
		output.setCharacterStream(writer);
		output.setEncoding("UTF-8");
		ser.write(document, output);
		String xml = writer.toString();
		xml = fixXML(xml, x3dVersion);
		return xml;
	}
}
