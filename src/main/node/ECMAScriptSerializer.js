"use strict";

var DOUBLE_SUFFIX = '';
var FLOAT_SUFFIX = '';

function ECMAScriptSerializer () {
this.code = [];
this.codeno = 0;
this.precode = {};
this.postcode = [];
}


ECMAScriptSerializer.prototype = {
	serializeToString : function(json, element, clazz, mapToMethod, fieldTypes) {
		this.code = [];
		this.codeno = 0;
		this.precode = {};
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

		str += "'use strict';\n";
		str += "var X3D = require('./x3d.mjs');\n";
		str += "try {\n";
		str += "	var fs = require('fs');\n";
		str += "} catch (e) {\n";
		str += 'console.log("Problems loading fs. On browser?",e);\n';
		str += "}\n";

		// we figure out body first and print it out later
		var body = "var "+element.nodeName+0+" =  new "+element.nodeName+"({\n";
		body += this.subSerializeToString(element, mapToMethod, fieldTypes, 3);
		for (var key in this.precode) {
			if (typeof key === 'undefined') {
				console.error("Warning, undefined key in this.precode");
			} else {
				str += "var "+key+" = require('./x3d.mjs');\n"
			}
			
		}
		str += body;
		str += "});\n";
		for (var postno = 0;  postno < this.postcode.length; postno++) {
			if (typeof this.postcode[postno] !== 'undefined') {
				str += this.postcode[postno];
			}
		}
		str += "console.log("+element.nodeName+0+".toXMLNode());\n";

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

	printSubArray : function (attrType, type, values, co, j, lead, trail) {
		return '['+lead+values.join(j)+trail+']';
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
		return prepre+method+" : ";
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
						if (element.nodeName === 'NavigationInfo' ) {
							strval = this.printSubArray("MFString", "MFString",
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
						var prepre = "\n"+("  ".repeat(n));
						method = this.filterProperty(method);
						childs.push(prepre+method+" : "+strval);
						if (method !== 'type') {
							this.precode[fieldAttrType] = true;
						}
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
							strval = "field.ACCESSTYPE_"+attrs[a].nodeValue.toUpperCase();
						} else {
							strval = '"'+attrs[a].nodeValue.
								replace(/(\\+)([^&\\"]|$)/g, '$1$1$2').
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
						strval = this.printSubArray(attrType, "MFString",
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
									// console.error("ECMAScript Replacing "+x+" with "+y);
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
						method = "cssClass";
					}
					
					var prepre = "\n"+("  ".repeat(n));
					childs.push(prepre+method+" : new "+attrType +"("+strval+")");
					if (method !== 'type') {
						this.precode[attrType] = true;
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
						ch += "new MFNode([";
						closeMFNode = true;
					} else {
						ch = "\n";
					}
					this.precode["MFNode"] = true;
				} else {
					ch += "new SFNode(";
					this.precode["SFNode"] = true;
				}

				ch += "\n"+("  ".repeat(n+1));
				ch += "new "+node.nodeName+"({";
				this.precode[node.nodeName] = true;
				ch += this.subSerializeToString(node, mapToMethod, fieldTypes, n+2);
				ch += "})";
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
					ch += ")";
				}
				childs.push(ch);
			} else if (element.childNodes.hasOwnProperty(cn) && node.nodeType === 8) {
				var y = node.nodeValue.
					replace(/\\/g, '\\\\').
					replace(/"/g, '\\"');
				childs.push("\n"+("  ".repeat(n))+'/*'+y.split("\n").join('\\n\"+\n\"')+'*/');
				// this.precode["CommentsBlock"] = true;
				if (y !== node.nodeValue) {
					// console.error("ECMAScript Comment Replacing "+node.nodeValue+" with "+y);
				}
			} else if (element.childNodes.hasOwnProperty(cn) && node.nodeType === 4) {
				let source = "";
				if (closeMFNode) {
					source += "]),";
					closeMFNode = false;
				}
				source += node.nodeValue;
				source = "\n"+("  ".repeat(n))+source.replace(/function/g, ", function").replace(/ecmascript:/, "\necmascript:eval (0")+")";
				childs.push(source);
			}
		}
		ch =  childs.join(",");
		if (closeMFNode) {
			ch += "])";
		}
		let exc = ch.indexOf(",])");
		while (exc > 0) {
			ch = ch.substring(0, exc)+"])"+ch.substring(exc+3);
			exc = ch.indexOf(",])");
		}
		let cmt = ch.indexOf("*/,");
		while (cmt > 0) {
			ch = ch.substring(0, cmt)+"*/"+ch.substring(cmt+3);
			cmt = ch.indexOf("*/,");
		}
		return ch;

	}
};
module.exports = ECMAScriptSerializer;
