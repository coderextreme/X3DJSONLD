"use strict";

function JavaScriptSerializer () {
};


var code = [];
var codeno = 0;

JavaScriptSerializer.prototype = {
	serializeToString : function(json, element, clazz, mapToMethod, fieldTypes) {
		code = [];
		codeno = 0;
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

		str += "load('X3Dautoclass.js');\n";
		str += "var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;\n";
		str += "ConfigurationProperties.showDefaultAttributes = true;\n";
		str += "ConfigurationProperties.indentCharacter = ConfigurationProperties.indentCharacter_DEFAULT;\n";
		str += "ConfigurationProperties.indentIncrement = ConfigurationProperties.indentIncrement_DEFAULT;\n";
		str += "ConfigurationProperties.setX3dCanonicalForm();\n";
		str += "ConfigurationProperties.initialize();\n";

		str += "ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_nativeJava;\n";
		str += "ConfigurationProperties.deleteIntermediateFiles = false;\n";
		str += "ConfigurationProperties.setStripTrailingZeroes(true);\n";
		str += element.nodeName+"_"+codeno+"()\n";
		str += "	.toFileX3D(\""+clazz+".new.x3d\");\n";
		printMethod(element, mapToMethod, fieldTypes, codeno);

		for (var co in code) {
			str += code[co];
		}

		return str;
	}
}

function printSubArray(type, values, j, trail) {
	return 'Java.to(['+values.join(j)+trail+'], Java.type("'+type+'[]"))';
}

function printMethod(node, mapToMethod, fieldTypes, co) {
	codeno++;
	code[co] = "function "+node.nodeName+"_"+co+"() {\n";
	code[co] += "\treturn new "+node.nodeName+"Object()\n";
	code[co] += JavaScriptSerializer.subSerializeToString(node, mapToMethod, fieldTypes);
	code[co] += ";\n}\n";
}

function printParentChild(element, node, cn, mapToMethod) {
	let addpre = ".set";
	if (cn > 0 && node.nodeName !== 'IS') {
		addpre = ".add";
	}
	if (node.nodeName === 'field') {
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

JavaScriptSerializer.subSerializeToString = function(element, mapToMethod, fieldTypes) {
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
					let attrType = fieldTypes[element.nodeName][attr];

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
						str += attrs[a].nodeValue;
					} else if (attrType === "SFDouble") {
						str += attrs[a].nodeValue;
					} else if (attrType === "SFBool") {
						str += attrs[a].nodeValue;
					} else if (attrType === "MFString") {
						str += printSubArray("java.lang.String",
							attrs[a].nodeValue.
								replace(/([^\\]| )\\\\( |[^\\"])/g, "$1\\\\$2").
								replace(/([^\\]| )\\\\\\\\([^\\"]| )/g, "$1\\\\\\\\\\\\\\\\$2").
								replace(/\\\\\\\\"/g, '\\\\"').
								replace(/\\\\"/g, '\\\\\\"').
								replace(/&/g, "&amp;").
								split(/" "/),
							'","', '');
					} else if (
						attrType === "MFInt32"||
						attrType === "MFImage"||
						attrType === "SFImage") {
						str += printSubArray("int", attrs[a].nodeValue.split(' '), ',', '');
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
						str += printSubArray("float", attrs[a].nodeValue.split(' '), ',', '');
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
						str += printSubArray("double", attrs[a].nodeValue.split(' '), ',', '');
					} else if (attrType === "MFBool") {
						str += printSubArray("boolean", attrs[a].nodeValue.split(' '), ',', '');
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
			str += "\t.setSourceCode(\""+node.nodeValue.split("\r\n").map(function(x) { return x.replace(/"/g, '\\"'); }).join('\\n\"+\n\"')+'")\n';
		}
	}
	return str;
}


if (typeof module === 'object')  {
	module.exports = JavaScriptSerializer;
}
