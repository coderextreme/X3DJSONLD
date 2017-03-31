"use strict";

function JavaSerializer() {
}

var code = [];
var codeno = 0;

JavaSerializer.prototype = {
	serializeToString : function(json, element, clazz, mapToMethod, fieldTypes, mapToMethod2) {
		code = [];
		codeno = 0;
		Object.assign(mapToMethod, {
		});

		for (map in mapToMethod2) {
			Object.assign(mapToMethod[map], mapToMethod2[map]);
		}

		/*
		for (let a in element.attributes) {
			let attrs = element.attributes;
			let attributeName = attrs[a].nodeName;
			if (attributeName === "version" && attrs[a].nodeValue !== "3.3") {
				console.log(clazz, attrs[a].nodeValue);
				return;
			}
		}
		*/

		let str = "";
		let pc = clazz.replace(/-|\.| /g, "$");
		let c = pc.lastIndexOf("/");
		if (pc.lastIndexOf("\\") > c) {
			c = pc.lastIndexOf("\\");
		}
		let clz = pc.substr(c+1);
		clz = clz.replace(/^([0-9].*|default$)/, "_$1")
		let pkg = pc.substr(0, c).replace(/[\/\\]/g, ".").trim();

		if (pkg.length > 0) {
			str += "package "+pkg+";\n";
		}
		str += "import org.web3d.x3d.jsail.*;\n";
		str += "import org.web3d.x3d.jsail.CADGeometry.*;\n";
		str += "import org.web3d.x3d.jsail.Core.*;\n";
		str += "import org.web3d.x3d.jsail.CubeMapTexturing.*;\n";
		str += "import org.web3d.x3d.jsail.DIS.*;\n";
		str += "import org.web3d.x3d.jsail.EnvironmentalEffects.*;\n";
		str += "import org.web3d.x3d.jsail.EnvironmentalSensor.*;\n";
		str += "import org.web3d.x3d.jsail.EventUtilities.*;\n";
		str += "import org.web3d.x3d.jsail.Followers.*;\n";
		str += "import org.web3d.x3d.jsail.Geometry2D.*;\n";
		str += "import org.web3d.x3d.jsail.Geometry3D.*;\n";
		str += "import org.web3d.x3d.jsail.Geospatial.*;\n";
		str += "import org.web3d.x3d.jsail.Grouping.*;\n";
		str += "import org.web3d.x3d.jsail.HAnim.*;\n";
		str += "import org.web3d.x3d.jsail.Interpolation.*;\n";
		str += "import org.web3d.x3d.jsail.KeyDeviceSensor.*;\n";
		str += "import org.web3d.x3d.jsail.Layering.*;\n";
		str += "import org.web3d.x3d.jsail.Layout.*;\n";
		str += "import org.web3d.x3d.jsail.Lighting.*;\n";
		str += "import org.web3d.x3d.jsail.NURBS.*;\n";
		str += "import org.web3d.x3d.jsail.Navigation.*;\n";
		str += "import org.web3d.x3d.jsail.Networking.*;\n";
		str += "import org.web3d.x3d.jsail.ParticleSystems.*;\n";
		str += "import org.web3d.x3d.jsail.Picking.*;\n";
		str += "import org.web3d.x3d.jsail.PointingDeviceSensor.*;\n";
		str += "import org.web3d.x3d.jsail.Rendering.*;\n";
		str += "import org.web3d.x3d.jsail.RigidBodyPhysics.*;\n";
		str += "import org.web3d.x3d.jsail.Scripting.*;\n";
		str += "import org.web3d.x3d.jsail.Shaders.*;\n";
		str += "import org.web3d.x3d.jsail.Shape.*;\n";
		str += "import org.web3d.x3d.jsail.Sound.*;\n";
		str += "import org.web3d.x3d.jsail.Text.*;\n";
		str += "import org.web3d.x3d.jsail.Texturing3D.*;\n";
		str += "import org.web3d.x3d.jsail.Texturing.*;\n";
		str += "import org.web3d.x3d.jsail.Time.*;\n";
		str += "import org.web3d.x3d.jsail.VolumeRendering.*;\n";
		str += "import org.web3d.x3d.jsail.fields.*;\n";
		str += "import org.web3d.x3d.sai.*;\n";
		str += "import org.web3d.x3d.sai.CADGeometry.*;\n";
		str += "import org.web3d.x3d.sai.Core.*;\n";
		str += "import org.web3d.x3d.sai.CubeMapTexturing.*;\n";
		str += "import org.web3d.x3d.sai.DIS.*;\n";
		str += "import org.web3d.x3d.sai.EnvironmentalEffects.*;\n";
		str += "import org.web3d.x3d.sai.EnvironmentalSensor.*;\n";
		str += "import org.web3d.x3d.sai.EventUtilities.*;\n";
		str += "import org.web3d.x3d.sai.Followers.*;\n";
		str += "import org.web3d.x3d.sai.Geometry2D.*;\n";
		str += "import org.web3d.x3d.sai.Geometry3D.*;\n";
		str += "import org.web3d.x3d.sai.Geospatial.*;\n";
		str += "import org.web3d.x3d.sai.Grouping.*;\n";
		str += "import org.web3d.x3d.sai.HAnim.*;\n";
		str += "import org.web3d.x3d.sai.Interpolation.*;\n";
		str += "import org.web3d.x3d.sai.KeyDeviceSensor.*;\n";
		str += "import org.web3d.x3d.sai.Layering.*;\n";
		str += "import org.web3d.x3d.sai.Layout.*;\n";
		str += "import org.web3d.x3d.sai.Lighting.*;\n";
		str += "import org.web3d.x3d.sai.NURBS.*;\n";
		str += "import org.web3d.x3d.sai.Navigation.*;\n";
		str += "import org.web3d.x3d.sai.Networking.*;\n";
		str += "import org.web3d.x3d.sai.ParticleSystems.*;\n";
		str += "import org.web3d.x3d.sai.Picking.*;\n";
		str += "import org.web3d.x3d.sai.PointingDeviceSensor.*;\n";
		str += "import org.web3d.x3d.sai.Rendering.*;\n";
		str += "import org.web3d.x3d.sai.RigidBodyPhysics.*;\n";
		str += "import org.web3d.x3d.sai.Scripting.*;\n";
		str += "import org.web3d.x3d.sai.Shaders.*;\n";
		str += "import org.web3d.x3d.sai.Shape.*;\n";
		str += "import org.web3d.x3d.sai.Sound.*;\n";
		str += "import org.web3d.x3d.sai.Text.*;\n";
		str += "import org.web3d.x3d.sai.Texturing3D.*;\n";
		str += "import org.web3d.x3d.sai.Texturing.*;\n";
		str += "import org.web3d.x3d.sai.Time.*;\n";
		str += "import org.web3d.x3d.sai.VolumeRendering.*;\n";
		str += "public class "+clz+" {\n";
		str += "	public static void main(String[] args) {\n";
		str += "        ConfigurationProperties.setShowDefaultAttributes(true);\n";
		str += "        ConfigurationProperties.setIndentCharacter(ConfigurationProperties.indentCharacter_DEFAULT);\n";
		str += "        ConfigurationProperties.setIndentIncrement(ConfigurationProperties.indentIncrement_DEFAULT);\n";
		str += "        ConfigurationProperties.setX3dCanonicalForm();\n";
		str += "        ConfigurationProperties.initialize();\n";

		str += "	ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_nativeJava);\n";
		str += "	ConfigurationProperties.setDeleteIntermediateFiles(false);\n";
		str += "new "+clz+"()."+element.nodeName+"_"+codeno+"()\n";
		str += "	.toFileJSON(\""+clazz+".new.json\");\n";
		printMethod(element, mapToMethod, fieldTypes, codeno);
		str += "	}\n";

		for (var co in code) {
			str += code[co];
		}
		str += "}\n";

		return str;
	}
}

function printSubArray(attrType, type, values,  co, j, trail) {
	if (attrType.startsWith("MF")) {
		var str = "new "+attrType+"Object()";
		for (var i = 0; i < values.length; i += 840) {
			var max = values.length;
			if (i + 840 < max) {
				max = i + 840;
			}
			codeno++;
			code[co] = "private "+attrType+"Object "+attrType+co+"() {\n";
			code[co] += "\treturn new "+attrType+"Object( new "+type+"[] {"+values.slice(i, max).join(j)+trail+"})\n";
			code[co] += ";\n}\n";
			str += ".append("+attrType+co+"())";
			co = codeno;
		}
		return str;
	} else {
		return "new "+type+"[] {"+values.slice(i, max).join(j)+trail+"}";
	}
}

function printMethod(node, mapToMethod, fieldTypes, co) {
	codeno++;
	code[co] = "private "+node.nodeName+"Object "+node.nodeName+"_"+co+"() {\n";
	code[co] += "\treturn new "+node.nodeName+"Object()\n";
	code[co] += JavaSerializer.subSerializeToString(node, mapToMethod, fieldTypes);
	code[co] += ";\n}\n";
}

function printParentChild(element, node, cn, mapToMethod) {
	let addpre = ".set";
	if (cn > 0 && node.nodeName !== 'IS') {
		addpre = ".add";
	}

	let method = node.nodeName;
	if (typeof mapToMethod[element.nodeName] === 'object') {
		if (typeof mapToMethod[element.nodeName][node.nodeName] === 'string') {
			addpre = ".";
			method = mapToMethod[element.nodeName][node.nodeName];
		} else {
			method = method.charAt(0).toUpperCase() + method.slice(1);
		}
	} else if (typeof mapToMethod[element.nodeName] === 'string') {
		addpre = ".";
		method = mapToMethod[element.nodeName];
	} else {
		method = method.charAt(0).toUpperCase() + method.slice(1);
	}
	return "\t"+addpre+method+"(";
}

JavaSerializer.subSerializeToString = function(element, mapToMethod, fieldTypes) {
	let str = "";
	let fieldAttrType = "";
	for (let a in element.attributes) {
		let attrs = element.attributes;
		try {
			parseInt(a);
			if (attrs.hasOwnProperty(a) && attrs[a].nodeType == 2) {
				let attr = attrs[a].nodeName;
				if (attr == "type") {
					fieldAttrType = attrs[a].nodeValue;
				}
			}
		} catch (e) {
			console.error(e);
		}
	}
	let attrType = "";
	for (let a in element.attributes) {
		let attrs = element.attributes;
		try {
			parseInt(a);
			if (attrs.hasOwnProperty(a) && attrs[a].nodeType == 2) {
				let attr = attrs[a].nodeName;
				if (attr == "xmlns:xsd" || attr == "xsd:noNamespaceSchemaLocation") {
					continue;
				}
				if (attr !== 'containerField') {
					let method = attr;
					// look at object model
					attrType = fieldTypes[element.nodeName][attr];

					// str += "attrType "+attrType+" FAT "+fieldAttrType+" "+attrs[a].nodeValue+"\n";
					// but if it's NULL, look at the field type
					if (attrs[a].nodeValue === 'NULL' &&
					   (fieldAttrType === "SFNode"  ||
					    fieldAttrType === "MFNode")) {
						method = "clearChildren";
					} else {
						method = "set"+method.charAt(0).toUpperCase() + method.slice(1);
					}
					str += "\t."+method+"(";
					if (attrs[a].nodeValue === 'NULL') {
						str += "";
					} else if (attrType === "SFString") {
						str += '"'+attrs[a].nodeValue.replace(/\\?"/g, "\\\"")+'"';
					} else if (attrType === "SFInt32") {
						str += attrs[a].nodeValue;
					} else if (attrType === "SFFloat") {
						str += attrs[a].nodeValue+"f";
					} else if (attrType === "SFDouble") {
						str += attrs[a].nodeValue+"d";
					} else if (attrType === "SFBool") {
						str += attrs[a].nodeValue;
					} else if (attrType === "MFString") {
						str += printSubArray(attrType, "String",
							attrs[a].nodeValue.
								replace(/([^\\]| )\\\\( |[^\\"])/g, "$1\\\\$2").
								replace(/([^\\]| )\\\\\\\\([^\\"]| )/g, "$1\\\\\\\\\\\\\\\\$2").
								replace(/\\\\\\\\"/g, '\\\\"').
								replace(/\\\\"/g, '\\\\\\"').
								replace(/&/g, "&amp;").
								split(/" "/),
							codeno, '","', '');
					} else if (
						attrType === "MFInt32"||
						attrType === "MFImage"||
						attrType === "SFImage") {
						str += printSubArray(attrType, "int", attrs[a].nodeValue.split(' '), codeno, ',', '');
					} else if (
						attrType === "SFColor"||
						attrType === "MFColor"||
						attrType === "SFColorRGBA"||
						attrType === "MFColorRGBA"||
						attrType === "SFVec2f"||
						attrType === "SFVec3f"||
						attrType === "SFVec4f"||
						attrType === "MFVec2f"||
						attrType === "MFVec3f"||
						attrType === "MFVec4f"||
						attrType === "SFMatrix3f"||
						attrType === "SFMatrix4f"|
						attrType === "MFMatrix3f"||
						attrType === "MFMatrix4f"|
						attrType === "SFRotation"|
						attrType === "MFRotation"|
						attrType === "MFFloat") {
						str += printSubArray(attrType, "float", attrs[a].nodeValue.split(' '), codeno, 'f,', 'f');
					} else if (
						attrType === "SFVec2d"||
						attrType === "SFVec3d"||
						attrType === "SFVec4d"|
						attrType === "MFVec2d"||
						attrType === "MFVec3d"||
						attrType === "MFVec4d"|
						attrType === "SFMatrix3d"||
						attrType === "SFMatrix4d"|
						attrType === "MFMatrix3d"||
						attrType === "MFMatrix4d"|
						attrType === "MFDouble") {
						str += printSubArray(attrType, "double", attrs[a].nodeValue.split(' '), codeno, 'd,', 'd');
					} else if (attrType === "MFBool") {
						str += printSubArray(attrType, "boolean", attrs[a].nodeValue.split(' '), codeno, ',', '');
					} else {
						str += attrs[a].nodeValue;
					}
					str += ")\n";
				}
			}
		} catch (e) {
			console.error(e);
		}
		attrType = "";
	}
	for (let cn in element.childNodes) {
		let node = element.childNodes[cn];
		if (element.childNodes.hasOwnProperty(cn) && node.nodeType == 1) {
			str += printParentChild(element, node, cn, mapToMethod);
			str += node.nodeName+"_"+codeno+"())\n";
			printMethod(node, mapToMethod, fieldTypes, codeno);
		} else if (element.childNodes.hasOwnProperty(cn) && node.nodeType == 8) {
			str += "\t.addComments(new CommentsBlock(\""+node.nodeValue.replace(/"/g, '\\"')+"\"))\n";
		} else if (element.childNodes.hasOwnProperty(cn) && node.nodeType == 4) {
			str += "\t.setSourceCode(\""+node.nodeValue.split("\r\n").map(function(x) { return x.replace(/"/g, '\\\\"'); }).join('\\n\"+\n\"')+'")\n';
		}
	}
	return str;
}


if (typeof module === 'object')  {
	module.exports = JavaSerializer;
}
