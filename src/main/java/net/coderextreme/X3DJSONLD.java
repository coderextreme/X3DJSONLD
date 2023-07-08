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
	public String stripQuotes(String value, String where) {
		String y = value;
		if (y.charAt(0) == '"' && y.charAt(y.length()-1) == '"') {
			y = y.substring(1, y.length()-1);
		}
		if ("type".equals(where)) {
			y = y.replaceAll("\\\\", "");
			// y = y.replaceAll("\\\\", "\\");
			return y;
		} else if ("COMMENT".equals(where)) {
			System.err.println("SOURCE "+ value);
			y = " "+y+" ";
			/*
			y = y.replaceAll("\\\\", "");
			y = y.replaceAll("\\&quot;", "\\&quot;");
			y = y.replaceAll("\\&quot;", "&quot;");
			y = y.replaceAll("(alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, )([\\]+&quot;)(Immel did it!)([\\]+&quot;)[\\]+&quot;(.*)", "FOOBAR1 $1\\\\$2$3\\\\$4$5");
			y = y.replaceAll("(<.*String.*)\\\"(Immel did it!)\\\"", "FOOBAR2 $1\\\"$2\\\"");
			*/
			/*
			y = y.replaceAll("!&quot;\"'", "!\\\\\\&quot;\"'");
			y = y.replaceAll("!&quot;\" \"\"", "!\\\\\\&quot;\" \"\"");
			y = y.replaceAll("\\\\\"", "FOOBAR\\");
			*/
			/*
			y = y.replaceAll("\\\\", "");
			*/
			// y = y.replaceAll("&quot;", "\\&quot;");
			// y = y.replaceAll("&quot;", "&quot;");
			//y = y.replaceAll("\\\\&quot;", "BARFOO");
			//y = y.replaceAll("\\\\&quot;", "FOOBAR");
			// y = y.replaceAll("\\\"", "\"\"");
			// y = y.replaceAll("\\\\&;", "&");
			// y = y.replaceAll("\"", "&quot;");
			// y = y.replaceAll("\\\"", "\"\"");
			// y = y.replaceAll("\\\"", "\"\"");
			// y = y.replaceAll("\\\\\\\"", "FOOBAR");
			if (!value.substring(1, value.length()-1).equals(y.substring(1, y.length()-1))) {
				System.err.println("replacing "+where+"< "+value);
				System.err.println(" replaced "+where+"> "+y);
			}
			return y;
		} else {
			return y;
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
		System.err.println(element.getNodeName()+".setAttributeList("+key+", "+sb.toString()+")");
		element.setAttribute(key, sb.toString());
	}
	
	public void elementSetAttribute(Element element, String key, String value) {
		if (key.equals("SON schema")) {
			// JSON Schema
		} else if (key.equals("ncoding")) {
			// encoding, UTF-8, UTF-16 or UTF-32
			/*
			*/
		} else if (element.getNodeName().equals("NavigationInfo") && key.equals("type")) {
			if (value.contains("EXAMINE")) {
				value = value.replace("EXAMINE", "EXAMINE");
			}
			/*
			System.err.println("ELEMENT< "+element.getNodeName()+" "+key+"="+value);
			System.err.println(element.getNodeName()+".setAttributeString("+key+", "+value+");");
			element.setAttribute(key, value);
			System.err.println("ELEMENT> "+element.getNodeName()+" "+key+"="+value);
			*/
			System.err.println("ELEMENT< "+element.getNodeName()+" "+key+"="+value);
			System.err.println(element.getNodeName()+".setAttributeString("+key+", "+stripQuotes(value, key)+");");
			element.setAttribute(key, stripQuotes(value, key));
			System.err.println("ELEMENT> "+key+"="+stripQuotes(value, key)+");");
		} else {
			System.err.println("ELEMENT< "+element.getNodeName()+" "+key+"="+value);
			System.err.println(element.getNodeName()+".setAttributeStringSq(\""+key+"\", \""+stripQuotes(value, key)+"\");");
			element.setAttribute(key, stripQuotes(value, key));
			System.err.println("ELEMENT> "+key+"="+stripQuotes(value, key));
		}
	}

	public Element CreateElement(Document document, String key, String containerField) {
		System.err.println("CE  CFK "+key+"."+containerField);
		Element child = document.createElement(key);
		if (containerField != null) {
			try {
				if ( key.startsWith("Metadata") && ("children".equals(containerField) || containerField == null)) {
					// override empty and children container fields
					elementSetAttribute(child, "containerField", "metadata");
				} else if (
					(
					 containerField == null ||
					 "children".equals(containerField) ||
					 // "".equals(containerField) ||
					 false
					 )
					&&
					(
						key.equals("Script") ||
						key.equals("ImageCubeMapTexture") ||
						key.equals("ImageTexture") ||
						key.equals("ImageTexture3D") ||
						key.equals("PackagedShader") ||
						key.equals("MovieTexture") ||
						key.equals("ProgramShader") ||
						key.equals("AudioClip") ||
						false
					)) {
						// not legal
						child.removeAttribute("containerField");
				} else if (
					(key.startsWith("Metadata") && "metadata".equals(containerField)) ||
					(key.startsWith("Metadata") && "value".equals(containerField)) ||
					(key.equals("ProtoInstance") && "shaders".equals(containerField)) ||
					(key.equals("ProtoInstance") && "material".equals(containerField)) ||
					(key.equals("AudioClip") && !"children".equals(containerField)) ||
					(key.equals("ShaderProgram") && "children".equals(containerField)) ||
					(key.equals("ImageTexture") && containerField.endsWith("exture")) ||
					(key.equals("ShaderPart") && "parts".equals(containerField)) ||
					false
							) {
						elementSetAttribute(child, "containerField", containerField);
				} else if (
					!key.equals("Sound") &&
					!key.equals("AudioClip") &&
					!key.equals("Material") &&
					!key.equals("LoadSensor") &&
					!key.equals("GeoMetadata") &&
					!key.equals("WorldInfo") &&
					!key.equals("Transform") &&
					!key.equals("Group") &&
					!key.equals("fieldValue") &&
					!key.equals("CADAssembly") &&
					!key.equals("CADFace") &&
					!key.equals("CADLayer") &&
					!key.equals("CADPart") &&
					!key.equals("ReceiverPdu") &&
					!key.equals("SignalPdu") &&
					!key.equals("TransmitterPdu") &&
					!key.equals("EspduTransform") &&
					!key.equals("ProtoBody") &&
					!key.equals("ProtoDeclare") &&
					!key.equals("ProtoInterface") &&
					!key.equals("Inline") &&
					!key.equals("ComposedShader") &&
					!key.equals("ShaderPart") &&
					!key.equals("ProgramShader") &&
					(key.equals("ProtoInstance") && !"children".equals(containerField)) &&
					(key.equals("ImageTexture") && !"texture".equals(containerField)) &&
					(key.equals("Appearance") && !"texture".equals(containerField)) &&
					(key.equals("ShaderProgram") && !"programs".equals(containerField)) &&
					!key.startsWith("Metadata") &&
					true
					) {
						// elementSetAttribute(child, "containerField", containerField);
				}
			} catch (Exception e) {
				throw e;
			}
		} else {
			System.err.println("NULL containerField");
		}
		return child;
	}

	public void CDATACreateFunction(Document document, Element element, JsonArray value) {
		// System.err.println("GOT HERE IN CDATA");
		StringBuffer sb = new StringBuffer();
		for (int i = 0; i < value.size(); i++) {
			if (i > 0) {
				sb.append("\r\n");
			}
			sb.append(stripQuotes(value.get(i).toString(), "CDATA"));
		}
		String y = sb.toString();
		String str = y;
		str = str.replaceAll("\\\\t", "	");
		str = str.trim();
		/*
		str = str
			.replaceAll("&lt;", "<")
			.replaceAll("&gt;", ">")
			.replaceAll("&amp;", "&")
			.replaceAll("&quot;", "\"")
			.replaceAll("'([^'\r\n]*)\n([^']*)'", "'$1\\n$2'");
		if (!str.equals(y)) {
			System.err.println("CDATA Replacing "+y);
			System.err.println("with            "+str);
		} else {
			// System.err.println("ok");
		}
		*/

		CDATASection cdata = document.createCDATASection(str);
		element.appendChild(cdata);
	}


	public void convertProperty(Document document, String key, JsonObject object, Element element, String containerField) {
		System.err.println("CP  CFK "+key+"."+containerField);
		// System.err.println(key+"= P "+object.get(key));
		if (object != null && object.get(key) instanceof JsonObject) {
			if (key.equals("@sourceCode")) {
				// System.err.println("FOUND SOURCE 1");
				CDATACreateFunction(document, element, (JsonArray)object.get(key));
			} else if (key.substring(0,1).equals("@")) {
				convertJsonValue(document, object.get(key), key, element, containerField);
			} else if (key.substring(0,1).equals("-")) {
				// System.err.println("converting children at "+key);
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
				// System.err.println("FOUND SOURCE 2");
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
		str = stripQuotes(str, "COMMENT");
		/*
		String y = str;
		str = str.replace("^\"", " ");
		str = str.replace("\"$", " ");
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
			// System.err.println("X3DJSONLD comment replacing "+ y);
			// System.err.println("with                        "+ str);
		} else {
			// System.err.println("ok");
		}
		*/
		return str;
	}

	public String fixXML(String str, String version) {
		String y = str;
		str = str.replace("?>", "?>\n<!DOCTYPE X3D PUBLIC \"ISO//Web3D//DTD X3D "+version+"//EN\" \"http://www.web3d.org/specifications/x3d-"+version+".dtd\">\n");
		if (!y.equals(str)) {
			// System.err.println("fixXML replacing "+ y);
			// System.err.println("with             "+ str);
		} else {
		// System.err.println("ok");
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
		System.err.println("CJO "+kii+" CFP "+parentkey+"."+containerField);
		Element child;
		if (kii || parentkey.startsWith("-")) {
			child = element;
		} else {
			child = CreateElement(document, parentkey, containerField);
		}
		/*
		if (containerField != null && !containerField.equals("children")) {
			elementSetAttribute(child, "containerField", containerField);
		}
		*/
		Iterator<String> keyiter = object.keySet().iterator();
		while (keyiter.hasNext()) {
			String key = keyiter.next();
			JsonValue ok = object.get(key);
			if (ok instanceof JsonObject) {
				if (key.equals("@type") && parentkey.equals("NavigationInfo") && ok instanceof JsonString) {
					System.err.println(key+"= CJO MINE "+ok);
					elementSetAttribute(child, key.substring(1), ok.toString());
				} else if (key.substring(0,1).equals("@")) {
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
				if (key.equals("@type") && parentkey.equals("NavigationInfo")) {
					System.err.println(key+"= CJO MINE "+ok);
					elementSetAttribute(child, key.substring(1), ok.toString());
				} else if (key.equals("#comment")) {
					Comment comment = document.createComment(CommentStringToXML(ok.toString()));
					child.appendChild(comment);
				} else {
					// ordinary string attributes
					elementSetAttribute(child, key.substring(1), ok.toString());
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
		System.err.println("CJA CFP "+parentkey+"."+containerField);
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
			// System.err.println("FOUND SOURCE 3");
			CDATACreateFunction(document, element, array);
		} else if (parentkey.substring(0,1).equals("@")) {
			elementSetAttribute(element, parentkey.substring(1), localArray);
		} else if (parentkey.equals("#sourceCode")) {
			// System.err.println("FOUND SOURCE 4");
			CDATACreateFunction(document, element, array);
		}
	}

	public Element convertJsonValue(Document document, JsonValue object, String parentkey, Element element, String containerField) {
		System.err.println("CJV CFP "+parentkey+"."+containerField);
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
		String version = "4.0";
		if (jsobj != null) {
			version = ((JsonObject)jsobj.get("X3D")).get("@version").toString();
		}
		return stripQuotes(version, "VERSION");
	}
	public static void main(String args[]) {
		try {
			X3DJSONLD loader = new X3DJSONLD();
			JsonObject jsobj = loader.readJsonFile(new File(args[0]));
			Document document = loader.loadJsonIntoDocument(jsobj);
			System.err.println("Done loading DOM from JSON");
			// System.out.println(loader.serializeDOM(loader.getX3DVersion(jsobj), document));
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
