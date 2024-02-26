"use strict";

var DOUBLE_SUFFIX = '';
var FLOAT_SUFFIX = '';

function DartSerializer () {
	this.postcode = [];
}


DartSerializer.prototype = {
	serializeToString : function(json, element, clazz, mapToMethod, fieldTypes) {
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

		str += "// Copyright 2021 by John Carlson.  All rights reserved.\n";
		str += "import 'dart:io';\n";
		str += "import '../x3d.dart';\n";


		// we figure out body first and print it out later
		var body = "var "+element.nodeName+0+" =  "+element.nodeName+"(\n";
		body += this.subSerializeToString(element, mapToMethod, fieldTypes, 3);
		str += body;
		str += ");\n";
		for (var postno = 0;  postno < this.postcode.length; postno++) {
			if (typeof this.postcode[postno] !== 'undefined') {
				str += this.postcode[postno];
			}
		}
		str += "void main() { exit(0); }\n";

		return str;
	},

	filterProperty : function(method) {
		if (method !== "Scene"
		    && method !== "X3DScript"
		    && method !== "Script"
		    && method !== "DEF"
		    && method !== "USE"
		    && method !== "ProtoDeclare"
		    && method !== "ProtoInterface"
		    && method !== "ProtoBody"
		    && method !== "IS"
		    && method !== "ProtoInstance") {
			method = method.charAt(0).toLowerCase() + method.slice(1);
		}
		return method;
	},

	printSubArray : function (attrType, type, values) {
		if (attrType.indexOf("MFMatrix") >= 0 || attrType.indexOf("MFVec") >= 0) {
			var grouped = [];
			var tuple = parseInt(attrType.substring(attrType.length-2, attrType.length-1));
			for (var v = 0; v < values.length; v += tuple) {
				var group = [];
				for (var t = 0; t < tuple; t++) {
					group.push(values[v+t]);
				}
				var str = type+'(['+group.join(",")+'])';
				group = [];
				grouped.push(str);
			}
			var str2 = attrType+'(['+grouped.join(",")+'])';
			grouped = [];
			return str2;
		}
		
		if (type === "SFString") {
			return attrType+'(['+type+'("'+values.join('"), '+type+'("')+'")])';
		} else {
			return attrType+'(['+type+'('+values.join("), "+type+"(")+')])';
		}
	},

	printParentChild : function (element, node, cn, mapToMethod, n) {
		var method = node.nodeName;
		if (typeof mapToMethod[element.nodeName] === 'object') {
			if (typeof mapToMethod[element.nodeName][node.nodeName] === 'string') {
				method = mapToMethod[element.nodeName][node.nodeName];
			} else {
				method = method.charAt(0).toUpperCase() + method.slice(1);
			}
		} else if (typeof mapToMethod[element.nodeName] === 'string') {
			method = mapToMethod[element.nodeName];
		} else {
			method = method.charAt(0).toUpperCase() + method.slice(1);
		}
		if (method.startsWith("add") || method.startsWith("set")) {
			method = method.substr(3);
		}

		method = this.filterProperty(method);
		var prepre = "\n"+("  ".repeat(n));
		return prepre+method+"_ : ";
	},
	subSerializeToString : function(element, mapToMethod, fieldTypes, n) {
		var childs = [];
		var fieldAttrType = "";
		var attrType = "";
		for (var a in element.attributes) {
			var attrs = element.attributes;
			try {
				parseInt(a);
				if (attrs.hasOwnProperty(a) && attrs[a].nodeType === 2) {
					var attr = attrs[a].nodeName;
					if (attr === "type") {
						fieldAttrType = attrs[a].nodeValue;
						var method = attr;
						attrType = "SFString";
						if (typeof fieldTypes[element.nodeName] !== 'undefined') {
							attrType = fieldTypes[element.nodeName][attr];
						}
						var strval = "";
						if (element.nodeName === 'NavigationInfo' ) {
							strval = this.printSubArray(attrType, "SFString",
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
								}));
						} else if (attrs[a].nodeValue !== "VERTEX" && attrs[a].nodeValue !== "FRAGMENT") {
							strval = 'SFString("'+attrs[a].nodeValue+'")';
						} else {
							strval = 'SFString("'+attrs[a].nodeValue.
								replace(/\\n/g, '\\\\n').
								replace(/\\?"/g, "\\\"")
								+'"';
						}
						var prepre = "\n"+("  ".repeat(n));
						method = this.filterProperty(method);
						childs.push(prepre+method+"_ : "+strval);
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
				if (attrs.hasOwnProperty(a) && attrs[a].nodeType === 2) {
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
						method = this.filterProperty(method);
					}
					var strval;
					if (attrs[a].nodeValue === 'NULL') {
						strval = "";
					} else if (attrType === "SFString") {
						if (attr === "accessType") {
							strval = '"'+attrs[a].nodeValue+'"';
						} else {
							strval = '\''+attrs[a].nodeValue.
								replace(/(\\+)([^&\\"]|$)/g, '$1$1$2').
								replace(/\n/g, '\\n').
								replace(/\\?"/g, "\\\"")
								+'\'';
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
					} else if (attrType === "MFString") {
						strval = this.printSubArray(attrType, "SFString",
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
									// console.error("Dart Replacing "+x+" with "+y);
								}
								return y;
							}));
					} else if (attrType === "MFImage") {
						strval = this.printSubArray(attrType, "SFImage", attrs[a].nodeValue.split(/[ ,]+/));
					} else if (
						attrType === "SFColor"||
						attrType === "SFColorRGBA") {
						strval = this.printSubArray(attrType, "SFDouble", attrs[a].nodeValue.split(/[ ,]+/));
					} else if (
						attrType === "SFImage"||
						attrType === "MFInt32") {
						strval = this.printSubArray(attrType, "SFInt32", attrs[a].nodeValue.split(/[ ,]+/));
					} else if ( attrType === "MFColor") {
						strval = this.printSubArray(attrType, "SFColor", attrs[a].nodeValue.split(/[ ,]+/));
					} else if ( attrType === "MFColorRGBA") {
						strval = this.printSubArray(attrType, "SFColorRGBA", attrs[a].nodeValue.split(/[ ,]+/));
					} else if ( attrType === "MFDouble") {
						strval = this.printSubArray(attrType, "SFDouble", attrs[a].nodeValue.split(/[ ,]+/));
					} else if ( attrType === "MFVec2f") {
						strval = this.printSubArray(attrType, "SFVec2f", attrs[a].nodeValue.split(/[ ,]+/));
					} else if ( attrType === "MFVec3f") {
						strval = this.printSubArray(attrType, "SFVec3f", attrs[a].nodeValue.split(/[ ,]+/));
					} else if ( attrType === "MFVec4f") {
						strval = this.printSubArray(attrType, "SFVec4f", attrs[a].nodeValue.split(/[ ,]+/));
					} else if ( attrType === "MFVec2d") {
						strval = this.printSubArray(attrType, "SFVec2d", attrs[a].nodeValue.split(/[ ,]+/));
					} else if ( attrType === "MFVec3d") {
						strval = this.printSubArray(attrType, "SFVec3d", attrs[a].nodeValue.split(/[ ,]+/));
					} else if ( attrType === "MFVec4d") {
						strval = this.printSubArray(attrType, "SFVec4d", attrs[a].nodeValue.split(/[ ,]+/));
					} else if ( attrType === "MFRotation") {
						strval = this.printSubArray(attrType, "SFRotation", attrs[a].nodeValue.split(/[ ,]+/));
					} else if ( attrType === "MFFloat") {
						strval = this.printSubArray(attrType, "SFFloat", attrs[a].nodeValue.split(/[ ,]+/));
					} else if ( attrType === "MFTime") {
						strval = this.printSubArray(attrType, "SFTime", attrs[a].nodeValue.split(/[ ,]+/));
					} else if ( attrType === "MFMatrix3f") {
						strval = this.printSubArray(attrType, "SFMatrix3f", attrs[a].nodeValue.split(/[ ,]+/));
					} else if ( attrType === "MFMatrix4f") {
						strval = this.printSubArray(attrType, "SFMatrix4f", attrs[a].nodeValue.split(/[ ,]+/));
					} else if ( attrType === "MFMatrix3d") {
						strval = this.printSubArray(attrType, "SFMatrix3d", attrs[a].nodeValue.split(/[ ,]+/));
					} else if ( attrType === "MFMatrix4d") {
						strval = this.printSubArray(attrType, "SFMatrix4d", attrs[a].nodeValue.split(/[ ,]+/));
					} else if (
						attrType === "SFVec2f"||
						attrType === "SFVec3f"||
						attrType === "SFVec4f"||
						attrType === "SFVec2d"||
						attrType === "SFVec3d"||
						attrType === "SFVec4d"||
						attrType === "SFMatrix3f"||
						attrType === "SFMatrix4f"||
						attrType === "SFMatrix3d"||
						attrType === "SFMatrix4d"||
						attrType === "SFRotation") {
						strval = this.printSubArray(attrType, "SFDouble", attrs[a].nodeValue.split(/[ ,]+/));
					} else if (attrType === "MFBool") {
						strval = this.printSubArray(attrType, "SFBool", attrs[a].nodeValue.split(/[ ,]+/));
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
						method = "cssClass";
					}
					
					var prepre = "\n"+("  ".repeat(n));
					if (attrType === "SFString") {
						childs.push(prepre+method+"_ : "+attrType+"("+strval.replace(/.'./g, "\\'")+")");
					} else {
						childs.push(prepre+method+"_ : "+strval);
					}
				}
			} catch (e) {
				console.error(e);
			}
			attrType = "";
		}
		var alreadyFound = {};
		var closeMFNode = false;
		for (var cn in element.childNodes) {
			var node = element.childNodes[cn];
			if (element.childNodes.hasOwnProperty(cn) && node.nodeType === 1) {
				var ch = this.printParentChild(element, node, cn, mapToMethod, n);
				if (ch.indexOf("IS_") >= 0) {
					if (closeMFNode) {
						ch = "],\n"+ch;
						closeMFNode = false;
					}
				}
				var ppc = ch.trim();
				if (ppc.indexOf("children") >= 0
				   || ppc.indexOf("connect") >= 0
				   || ppc.indexOf("field") >= 0
				   || ppc.indexOf("fieldValue") >= 0
				   || ppc.indexOf("segments") >= 0
				   || ppc.indexOf("joints") >= 0
				   || ppc.indexOf("meta") >= 0) {
					if (!alreadyFound[ppc]) {
						alreadyFound[ppc] = true;
						ch += "[";
						closeMFNode = true;
					} else {
						ch = "\n";
					}
				} else {
					ch += "";
				}

				ch += "\n"+("  ".repeat(n+1));
				ch += node.nodeName+"(";
				ch += this.subSerializeToString(node, mapToMethod, fieldTypes, n+2);
				ch += ")";
				if (ppc.indexOf("children") >= 0
				   || ppc.indexOf("connect") >= 0
				   || ppc.indexOf("field") >= 0
				   || ppc.indexOf("fieldValue") >= 0
				   || ppc.indexOf("segments") >= 0
				   || ppc.indexOf("joints") >= 0
				   || ppc.indexOf("meta") >= 0) {
				} else {
					if (closeMFNode) {
						ch += "]";
						closeMFNode = false;
					}
				}
				childs.push(ch);
			} else if (element.childNodes.hasOwnProperty(cn) && node.nodeType === 8) {
				var y = node.nodeValue.
					replace(/\\/g, '\\\\').
					replace(/"/g, '\\"');
				childs.push("\n"+("  ".repeat(n))+'/*'+y.split("\n").join('\\n\"+\n\"')+'*/');
				if (y !== node.nodeValue) {
					// console.error("Dart Comment Replacing "+node.nodeValue+" with "+y);
				}
			} else if (element.childNodes.hasOwnProperty(cn) && node.nodeType === 4) {
				let source = "";
				if (closeMFNode) {
					source += "]";
					closeMFNode = false;
				}
				source += node.nodeValue;
				source = "\n"+("  ".repeat(n))+source.replace(/function/g, ", function").replace(/ecmascript:/, ",\necmascript:eval (0")+")";
				childs.push(source);
			}
		}
		if (closeMFNode) {
			childs.push("]");
			closeMFNode = false;
		}
		ch =  childs.join(",");
		let exc = ch.indexOf(",]");
		while (exc > 0) {
			ch = ch.substring(0, exc)+"]"+ch.substring(exc+2);
			exc = ch.indexOf(",]");
		}
		let cmt = ch.indexOf("*/,");
		while (cmt > 0) {
			ch = ch.substring(0, cmt)+"*/"+ch.substring(cmt+3);
			cmt = ch.indexOf("*/,");
		}
		return ch;

	}
};

module.exports = DartSerializer;
