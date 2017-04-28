"use strict";

const DOUBLE_SUFFIX = '';
const FLOAT_SUFFIX = '';

function JavaScriptSerializer () {
}

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
		str += "ConfigurationProperties.showDefaultAttributes = false;\n";
		str += "ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_nativeJava;\n";
		str += "ConfigurationProperties.deleteIntermediateFiles = false;\n";
		str += "ConfigurationProperties.setStripTrailingZeroes(true);\n";
		str += "      new "+element.nodeName+"Object()";
		str += this.subSerializeToString(element, mapToMethod, fieldTypes, 3);

		str += "        .toFileX3D(\""+clazz+".new.x3d\");\n";

		return str;
	},

	printSubArray : function (attrType, type, values, co, j, lead, trail) {
		return 'Java.to(['+lead+values.join(j)+trail+'], Java.type("'+type+'[]"))';
	},

	printParentChild : function (element, node, cn, mapToMethod, n) {
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
		for (let a in node.attributes) {
			let attrs = node.attributes;
			try {
				parseInt(a);
				if (attrs.hasOwnProperty(a) && attrs[a].nodeType == 2) {
					let attr = attrs[a].nodeName;
					if (attr === "containerField") {
						if (method === "setShaders") {
							method = "addShaders"
						} else {
							method = "set"+attrs[a].nodeValue.charAt(0).toUpperCase() + attrs[a].nodeValue.slice(1);
						}
					}
				}
			} catch (e) {
				console.error(e);
			}
		}
		if (method === "addChildren") {
			method = "addChild";
			addpre = ".";
		}
		if (node.nodeName === "IS") {
			method = "setIS";
			addpre = ".";
		}
		return "\n"+("  ".repeat(n))+addpre+method;
	},
	subSerializeToString : function(element, mapToMethod, fieldTypes, n) {
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
						let attrType = "SFString";
						if (typeof fieldTypes[element.nodeName] !== 'undefined') {
							attrType = fieldTypes[element.nodeName][attr];
						}
						// str += "attrType "+attrType+" FAT "+fieldAttrType+" "+attrs[a].nodeValue+"\n";
						// but if it's NULL, look at the field type
						if (attrs[a].nodeValue === 'NULL' &&
						   (fieldAttrType === "SFNode"  ||
						    fieldAttrType === "MFNode")) {
							method = "clearChildren";
						} else {
							method = "set"+method.charAt(0).toUpperCase() + method.slice(1);
						}
						let strval;
						if (attrs[a].nodeValue === 'NULL') {
							strval = "";
						} else if (attrType === "SFString") {
							if (attr === "type" && attrs[a].nodeValue !== "VERTEX" && attrs[a].nodeValue !== "FRAGMENT") {
								strval = "fieldObject.TYPE_"+attrs[a].nodeValue.toUpperCase();
							} else if (attr === "accessType") {
								strval = "fieldObject.ACCESSTYPE_"+attrs[a].nodeValue.toUpperCase();
							/*
							} else if (
								attrs[a].nodeValue.indexOf("_changed") > 0 &&

								((element.nodeName === 'field' ||
								attr === "name") ||
								attr === "fromField")) {
								strval = '"'+attrs[a].nodeValue.substr(0, attrs[a].nodeValue.indexOf("_changed")).replace(/\n/g, '\\\\n').replace(/\\?"/g, "\\\"")+'"';
							} else if (
								attrs[a].nodeValue.indexOf("set_") === 0 &&

								((element.nodeName === 'field' &&
								attr === "name") ||
								attr === "toField")) {
								strval = '"'+attrs[a].nodeValue.substr(4).replace(/\n/g, '\\\\n').replace(/\\?"/g, "\\\"")+'"';
							*/
							} else {
								strval = '"'+attrs[a].nodeValue.
									replace(/\\n/g, '\\\\n').
									replace(/\\?"/g, "\\\"")
									+'"';
							}
						} else if (attrType === "SFInt32") {
							strval = attrs[a].nodeValue;
						} else if (attrType === "SFFloat") {
							strval = attrs[a].nodeValue+FLOAT_SUFFIX;
						} else if (attrType === "SFDouble") {
							strval = attrs[a].nodeValue+DOUBLE_SUFFIX;
						} else if (attrType === "SFBool") {
							strval = attrs[a].nodeValue;
						} else if (attrType === "SFTime") {
							strval = attrs[a].nodeValue+DOUBLE_SUFFIX;
						} else if (attrType === "MFTime") {
							strval = this.printSubArray(attrType, "double", attrs[a].nodeValue.split(' '), codeno, DOUBLE_SUFFIX+',', '', DOUBLE_SUFFIX);
						} else if (attrType === "MFString") {
							strval = this.printSubArray(attrType, "java.lang.String",
								attrs[a].nodeValue.substr(1, attrs[a].nodeValue.length-2).split(/" "/).
								map(function(x) {
									let y = x.
										replace(/(\\+)([^&\\"])/g, '$1$1$2').
									       replace(/\\\\"/g, '\\\"').
									       replace(/(\\)+([&"])/g, '\\\\\\\$2').
									       replace(/""/g, '\\"\\"').
									       replace(/&quot;&quot;/g, '\\"\\"').
									       replace(/&/g, "&amp;").
									       replace(/\\n/g, '\\n');
									if (y !== x) {
										console.error("JavaScript Replacing "+x+" with "+y);
									}
									return y;
								}), codeno, '","', '"', '"');
						} else if (
							attrType === "MFInt32"||
							attrType === "MFImage"||
							attrType === "SFImage") {
							strval = this.printSubArray(attrType, "int", attrs[a].nodeValue.split(' '), codeno, ',', '', '');
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
							strval = this.printSubArray(attrType, "float", attrs[a].nodeValue.split(' '), codeno, FLOAT_SUFFIX+',', '', FLOAT_SUFFIX);
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
							strval = this.printSubArray(attrType, "double", attrs[a].nodeValue.split(' '), codeno, DOUBLE_SUFFIX+',', '', DOUBLE_SUFFIX);
						} else if (attrType === "MFBool") {
							strval = this.printSubArray(attrType, "boolean", attrs[a].nodeValue.split(' '), codeno, ',', '', '');
						} else {
							// strval = attrs[a].nodeValue;
							// not found in field types
							// Fixes for X3DOM
							if (attr === "class") {
								method = "setCssClass";
							} else if (attr === "id") {
								continue;
							} else if (element.nodeName === "Sphere" && attr === "subdivision") {
								continue;
							} else if (element.nodeName === "X3D" && attr === "showStat") {
								continue;
							} else if (element.nodeName === "X3D" && attr === "showLog") {
								continue;
							} else if (element.nodeName === "X3D" && attr === "width") {
								continue;
							} else if (element.nodeName === "X3D" && attr === "height") {
								continue;
							} else if (element.nodeName === "X3D" && attr === "backend") {
								continue;
							}
							strval = '"'+attrs[a].nodeValue.replace(/\n/g, '\\\\n').replace(/\\?"/g, "\\\"")+'"';
						}
						
						str += '.'+method+"("+strval+")";
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
				str += this.printParentChild(element, node, cn, mapToMethod, n);
				str += "(";
				if (element.nodeName === "Appearance" && node.NodeName === "ComposedShader") {
					str += "[";
				}
				str += "new "+node.nodeName+"Object()";
				str += this.subSerializeToString(node, mapToMethod, fieldTypes, n+1);
				if (element.nodeName === "Appearance" && node.NodeName === "ComposedShader") {
					str += "]";
				}
				str += ")";
			} else if (element.childNodes.hasOwnProperty(cn) && node.nodeType == 8) {
				let y = node.nodeValue.
					replace(/\\/g, '\\\\').
					replace(/"/g, '\\"');
				str += "\n"+("  ".repeat(n))+".addComments(new CommentsBlock(\""+y+"\"))";
				if (y !== node.nodeValue) {
					console.error("Java Comment Replacing "+node.nodeValue+" with "+y);
				}
			} else if (element.childNodes.hasOwnProperty(cn) && node.nodeType == 4) {
				str += "\n"+("  ".repeat(n))+".setSourceCode(\""+node.nodeValue.split("\r\n").map(function(x) {
					return x.replace(/\\"/g, '\\\\"').
						replace(/"/g, '\\"').
						replace(/\\n/g, "\\\\n");
					}).join('\\n\"+\n\"')+'")';
			}
		}
		return str;
	}
};


if (typeof module === 'object')  {
	module.exports = JavaScriptSerializer;
}
