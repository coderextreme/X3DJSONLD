"use strict";

var DOUBLE_SUFFIX = '';
var FLOAT_SUFFIX = '';

function JavaScriptSerializer () {
this.code = [];
this.codeno = 0;
this.precode = [];
this.preno = 0;
this.postcode = [];
}


JavaScriptSerializer.prototype = {
	serializeToString : function(json, element, clazz, mapToMethod, fieldTypes) {
		this.code = [];
		this.codeno = 0;
		this.precode = [];
		this.preno = 0;
		this.postcode = [];

		var str = "";
		var pc = clazz.replace(/-|\.| /g, "$");
		var c = pc.lastIndexOf("/");
		if (pc.lastIndexOf("\\") > c) {
			c = pc.lastIndexOf("\\");
		}
		var clz = pc.substr(c+1);
		clz = clz.replace(/^([0-9].*|default$)/, "_$1")
		var pkg = pc.substr(0, c).replace(/[\/\\]/g, ".").trim();

		str += "load('X3Dautoclass.js');\n";
		str += "var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;\n";
		str += "ConfigurationProperties.showDefaultAttributes = false;\n";
		str += "ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;\n";
		str += "ConfigurationProperties.deleteIntermediateFiles = false;\n";
		str += "ConfigurationProperties.setStripTrailingZeroes(true);\n";
		// we figure out body first and print it out later
		var body = "      var "+element.nodeName+0+" =  new "+element.nodeName+"()";
		body += this.subSerializeToString(element, mapToMethod, fieldTypes, 3, []);
		for (var po in this.precode) {
			str += this.precode[po];
		}
		str += body;
		str += "      ;\n";
		for (var postno = 0;  postno < this.postcode.length; postno++) {
			if (typeof this.postcode[postno] !== 'undefined') {
				str += this.postcode[postno];
			}
		}
		str += "    "+element.nodeName+0+".toFileX3D(\""+clazz+".new.x3d\");\n";

		return str;
	},

	printSubArray : function (attrType, type, values, co, j, lead, trail) {
		return 'Java.to(['+lead+values.join(j)+trail+'], Java.type("'+type+'[]"))';
	},

	printParentChild : function (element, node, cn, mapToMethod, n) {
		var prepre = "\n"+("  ".repeat(n))+".";
		var addpre = "set";
		if (cn > 0 && node.nodeName !== 'IS') {
			addpre = "add";
		}
		if (node.nodeName === 'field') {
			addpre = "add";
		}

		var method = node.nodeName;
		if (typeof mapToMethod[element.nodeName] === 'object') {
			if (typeof mapToMethod[element.nodeName][node.nodeName] === 'string') {
				addpre = "";
				method = mapToMethod[element.nodeName][node.nodeName];
			} else {
				method = method.charAt(0).toUpperCase() + method.slice(1);
			}
		} else if (typeof mapToMethod[element.nodeName] === 'string') {
			addpre = "";
			method = mapToMethod[element.nodeName];
		} else {
			method = method.charAt(0).toUpperCase() + method.slice(1);
		}
		if (method === "setProxy") {
			method = "addChild";
			addpre = "";
		}
		for (var a in node.attributes) {
			var attrs = node.attributes;
			try {
				parseInt(a);
				if (attrs.hasOwnProperty(a) && attrs[a].nodeType == 2) {
					var attr = attrs[a].nodeName;
					if (attr === "containerField") {
						if (method === "setShaders") {
							method = "addShaders"
							addpre = "";
						} else {
							if (attrs[a].nodeValue == "joints" 
								|| attrs[a].nodeValue == "sites" 
								|| attrs[a].nodeValue == "segments" 
							) {
								method = "add"+attrs[a].nodeValue.charAt(0).toUpperCase() + attrs[a].nodeValue.slice(1);
							} else {
								method = "set"+attrs[a].nodeValue.charAt(0).toUpperCase() + attrs[a].nodeValue.slice(1);
							}
							addpre = "";
						}
					}
				}
			} catch (e) {
				console.error(e);
			}
		}
		if (method === "addChildren") {
			method = "addChild";
			addpre = "";
		}
		if (node.nodeName === "IS") {
			method = "setIS";
			addpre = "";
		}
		if (addpre+method === "setJoints") {
			method = "Joints"
			addpre = "add";
		}
		if (element.nodeName === 'Scene' && addpre+method === "setMetadata") {
			method = "Metadata"
			addpre = "add";
		}
		if (node.nodeName === 'LayerSet' && addpre+method === "addChild") {
			method = "LayerSet"
			addpre = "add";
		}
		return prepre+addpre+method;
	},
	subSerializeToString : function(element, mapToMethod, fieldTypes, n, stack) {
		var str = "";
		var fieldAttrType = "";
		var attrType = "";
		for (var a in element.attributes) {
			var attrs = element.attributes;
			try {
				parseInt(a);
				if (attrs.hasOwnProperty(a) && attrs[a].nodeType == 2) {
					var attr = attrs[a].nodeName;
					if (attr === "type") {
						fieldAttrType = attrs[a].nodeValue;
						var method = attr;
						if (element.nodeName === 'NavigationInfo' ) {
							strval = this.printSubArray(attrType, "java.lang.String",
								attrs[a].nodeValue.substr(1, attrs[a].nodeValue.length-2).split(/"[ ,]+"/).
								map(function(x) {
									var y = x.
										replace(/(\\+)([^&\\"])/g, '$1$1$2').
									       replace(/\\\\"/g, '\\\"').
									       replace(/(\\)+([&"])/g, '\\\\\\\$2').
									       replace(/""/g, '\\"\\"').
									       replace(/&quot;&quot;/g, '\\"\\"').
									       replace(/&/g, "&amp;").
									       replace(/\\n/g, '\\n');
									if (y !== x) {
										// console.error("Python Replacing "+x+" with "+y);
									}
									return y;
								}), this.codeno, '","', '"', '"');
						} else if (attrs[a].nodeValue !== "VERTEX" && attrs[a].nodeValue !== "FRAGMENT") {
							strval = "field.TYPE_"+attrs[a].nodeValue.toUpperCase();
						} else {
							strval = '"'+attrs[a].nodeValue.
								replace(/\\n/g, '\\\\n').
								replace(/\\?"/g, "\\\"")
								+'"';
						}
						method = "set"+method.charAt(0).toUpperCase() + method.slice(1);
						str += '.'+method+"("+strval+")";
					}
				}
			} catch (e) {
				console.error(e);
			}
			attrType = "";
		}
		attrType = "";
		for (var a in element.attributes) {
			var attrs = element.attributes;
			try {
				parseInt(a);
				if (attrs.hasOwnProperty(a) && attrs[a].nodeType == 2) {
					var attr = attrs[a].nodeName;
					if (attr === "xmlns:xsd" || attr === "xsd:noNamespaceSchemaLocation" || attr === 'containerField' || attr === 'type') {
						continue;
					}
					var method = attr;
					// look at object model
					var attrType = "SFString";
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
					var strval;
					if (attrs[a].nodeValue === 'NULL') {
						strval = "";
					} else if (attrType === "SFString") {
						if (attr === "accessType") {
							strval = "field.ACCESSTYPE_"+attrs[a].nodeValue.toUpperCase();
						} else {
							strval = '"'+attrs[a].nodeValue.
								replace(/(\\+)([^&\\"]|$)/g, '$1$1$2').
								/*
								replace(/\\/g, '\\\\').
								*/
								replace(/\n/g, '\\n').
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
						strval = this.printSubArray(attrType, "double", attrs[a].nodeValue.split(/[ ,]+/), this.codeno, DOUBLE_SUFFIX+',', '', DOUBLE_SUFFIX);
					} else if (attrType === "MFString") {
						strval = this.printSubArray(attrType, "java.lang.String",
							attrs[a].nodeValue.substr(1, attrs[a].nodeValue.length-2).split(/"[ ,]+"/).
							map(function(x) {
								var y = x.
								       replace(/(\\+)([^&\\"]|$)/g, '$1$1$2').
								       replace(/\\\\"/g, '\\\"').
								       replace(/""/g, '\\"\\"').
								       replace(/&quot;&quot;/g, '\\"\\"').
								       // replace(/&/g, "&amp;").
								       replace(/\\n/g, '\\n');
								if (y !== x) {
									// console.error("JavaScript Replacing "+x+" with "+y);
								}
								return y;
							}), this.codeno, '","', '"', '"');
					} else if (
						attrType === "MFInt32"||
						attrType === "MFImage"||
						attrType === "SFImage") {
						strval = this.printSubArray(attrType, "int", attrs[a].nodeValue.split(/[ ,]+/), this.codeno, ',', '', '');
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
						attrType === "SFMatrix4f"||
						attrType === "MFMatrix3f"||
						attrType === "MFMatrix4f"||
						attrType === "SFRotation"||
						attrType === "MFRotation"||
						attrType === "MFFloat") {
						strval = this.printSubArray(attrType, "float", attrs[a].nodeValue.split(/[ ,]+/), this.codeno, FLOAT_SUFFIX+',', '', FLOAT_SUFFIX);
					} else if (
						attrType === "SFVec2d"||
						attrType === "SFVec3d"||
						attrType === "SFVec4d"||
						attrType === "MFVec2d"||
						attrType === "MFVec3d"||
						attrType === "MFVec4d"||
						attrType === "SFMatrix3d"||
						attrType === "SFMatrix4d"||
						attrType === "MFMatrix3d"||
						attrType === "MFMatrix4d"||
						attrType === "MFDouble") {
						strval = this.printSubArray(attrType, "double", attrs[a].nodeValue.split(/[ ,]+/), this.codeno, DOUBLE_SUFFIX+',', '', DOUBLE_SUFFIX);
					} else if (attrType === "MFBool") {
						strval = this.printSubArray(attrType, "boolean", attrs[a].nodeValue.split(/[ ,]+/), this.codeno, ',', '', '');
					} else {
						// strval = attrs[a].nodeValue;
						// not found in field types
						// Fixes for X3DOM
						if (attr === "id") {
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
					if (attr === "class") {
						method = "setCssClass";
					}
					
					str += '.'+method+"("+strval+")";
				}
			} catch (e) {
				console.error(e);
			}
			attrType = "";
		}
		for (var cn in element.childNodes) {
			var node = element.childNodes[cn];
			if (element.childNodes.hasOwnProperty(cn) && node.nodeType == 1) {
				if (node.nodeName === "ProtoInstance") {
					stack.unshift(this.preno);
					this.preno++;
					this.precode[stack[0]] = "var "+node.nodeName+stack[0]+" = null;\n";
				}
				if (element.nodeName === "ProtoInstance" && node.nodeName === "fieldValue") {
					if (typeof this.postcode[stack[0]] === 'undefined') {
						this.postcode[stack[0]] = "";
					}
					this.postcode[stack[0]] += element.nodeName+stack[0];
				}
				var ch = this.printParentChild(element, node, cn, mapToMethod, n);
				ch += "(";
				if (element.nodeName === "Appearance" && node.NodeName === "ComposedShader") {
					ch += "new X3DNode [] {";
				}
				if (node.nodeName === "ProtoInstance") {
					ch += node.nodeName+stack[0] + " = ";
				}

				ch += "new "+node.nodeName+"()";
				ch += this.subSerializeToString(node, mapToMethod, fieldTypes, n+1, stack);
				if (element.nodeName === "Appearance" && node.NodeName === "ComposedShader") {
					ch += "}";
				}
				ch += ")";
				if (element.nodeName === "ProtoInstance" && node.nodeName === "fieldValue") {
					// ch goes to end of body
					this.postcode[stack[0]] += ch+";\n";
				} else {
					// ch is attached to body
					str += ch;
				}
				if (node.nodeName === "ProtoInstance") {
					stack.shift();
				}
			} else if (element.childNodes.hasOwnProperty(cn) && node.nodeType == 8) {
				var y = node.nodeValue.
					replace(/\\/g, '\\\\').
					replace(/"/g, '\\"');
				str += "\n"+("  ".repeat(n))+'.addComments(new CommentsBlock("'+y.split("\n").join('\\n\"+\n\"')+'"))';
				if (y !== node.nodeValue) {
					// console.error("JavaScript Comment Replacing "+node.nodeValue+" with "+y);
				}
			} else if (element.childNodes.hasOwnProperty(cn) && node.nodeType == 4) {
				str += "\n"+("  ".repeat(n))+".setSourceCode(\""+node.nodeValue.split("\r\n").map(function(x) {
					return x.
					        replace(/\\/g, '\\\\').
						replace(/"/g, '\\"');
						/*
						replace(/\\n/g, "\\\\n")
						*/
					;
					}).join('\\n\"+\n\"')+'")';
			}
		}
		return str;
	}
};


if (typeof module === 'object')  {
	module.exports = JavaScriptSerializer;
}
