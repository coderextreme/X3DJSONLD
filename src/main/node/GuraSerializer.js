"use strict";

const DOUBLE_SUFFIX = '';
const FLOAT_SUFFIX = '';

let fs = require("fs");

function GuraSerializer () {
}


GuraSerializer.prototype = {
	serializeToString : function(json, element, clazz, mapToMethod, fieldTypes) {
		let str = "";
		str += element.nodeName+':\n';
		str += this.subSerializeToString(element, mapToMethod, fieldTypes, 1);
		return str;
	},

	printSubArray : function (attrType, type, values, j, lead, trail) {
                if (type === "int") {
                        for (var v in values) {
				if (values[v] > 0x7fffffff) {
				    values[v] = values[v] - 4294967296
				}

				/*
                                if (values[v] > 4200000000) {
                                        values[v] = "0x"+parseInt(values[v]).toString(16).toUpperCase();
                                }
				*/
                        }
                }
		/*
                if (type === "boolean") {
                        for (let v in values) {
				if (values[v] === 'true') {
					values[v] = "True";
				} else if (values[v] === 'false') {
					values[v] = "False";
				}
			}
		}
		*/
		if (values[0] === "" || values[v] === null) {
			values.shift();
		}
		if (values.length >= 0 && (values[values.length-1] === "" || values[values.length-1] === null)) {
			values.pop();
		}

		return '['+lead+values.join(j)+trail+']';
	},

	printParentChild : function (element, node, cn, mapToMethod) {
		let prepre = ".";
		let addpre = "set";
		if (cn > 0 && node.nodeName !== 'IS') {
			addpre = "add";
		}
		if (node.nodeName === 'field') {
			addpre = "add";
		}

		let method = node.nodeName;
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
		for (let a in node.attributes) {
			let attrs = node.attributes;
			try {
				parseInt(a);
				let attrsa = attrs[a];
				let attr = attrsa.nodeName;
				if (attrs.hasOwnProperty(a) && attrsa.nodeType == 2) {
					if (attr === "containerField") {
						if (method === "setShaders") {
							method = "addShaders"
							addpre = "";
						} else {
							if (attrs[a].nodeValue === "joints" 
								|| attrs[a].nodeValue === "sites" 
								|| attrs[a].nodeValue === "skin" 
								|| attrs[a].nodeValue === "viewpoints" 
								|| attrs[a].nodeValue === "skeleton" 
								|| attrs[a].nodeValue === "segments" 
							) {
								method = "add"+attrs[a].nodeValue.charAt(0).toUpperCase() + attrs[a].nodeValue.slice(1);
							} else if (method === "addValue") {
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
		if (node.nodeName === "IS") {
			method = "IS";
			addpre = "set";
		}
		if (addpre+method === "setJoints") {
			method = "Joints"
			addpre = "add";
		}
		if (addpre+method === "setSegments") {
			method = "Segments"
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
	stringValue : function(attrsa, attr, attrType, element) {
		let strval;
		let nodeValue = attrsa.nodeValue;
		if (nodeValue === 'NULL') {
			strval = "";
		} else if (attrType === "SFString") {
			if (attr === "accessType") {
				strval = '"'+nodeValue+'"';
			} else {
				strval = '"'+nodeValue.
					replace(/\\n/g, '\\\\n').
					replace(/\\?"/g, "\\\"")
					+'"';
			}
		} else if (attrType === "SFInt32") {
			strval = nodeValue;
		} else if (attrType === "SFFloat") {
			if (nodeValue.indexOf('.') < 0) {
				nodeValue = nodeValue+".0";
			}
			strval = nodeValue+FLOAT_SUFFIX;
			if (strval.indexOf('.') < 0) {
				strval = strval+".0";
			}
		} else if (attrType === "SFDouble") {
			if (nodeValue.indexOf('.') < 0) {
				nodeValue = nodeValue+".0";
			}
			strval = nodeValue+DOUBLE_SUFFIX;
			if (strval.indexOf('.') < 0) {
				strval = strval+".0";
			}
		} else if (attrType === "SFBool") {
			/*
			if (nodeValue === 'true') {
				strval = "True";
			} else if (nodeValue === 'false') {
				strval = "False";
			} else {
			*/
				strval = nodeValue;
			/*
			}
			*/
		} else if (attrType === "SFTime") {
			if (nodeValue.indexOf('.') < 0) {
				nodeValue = nodeValue+".0";
			}
			strval = nodeValue+DOUBLE_SUFFIX;
		} else if (attrType === "MFTime") {
			strval = this.printSubArray(attrType, "double", nodeValue.split(/[ ,\t\r\n]+/), DOUBLE_SUFFIX+', ', '', DOUBLE_SUFFIX);
		} else if (attrType === "MFString") {
			nodeValue = nodeValue.replace(/^ *(.*) *$/, "$1");
			strval = this.printSubArray(attrType, "into",
				nodeValue.substr(1, nodeValue.length-2).split(/"[ ,\t\r\n]+"/).
				map(function(x) {
					let y = x.
					       replace(/(\\\\+)/g, '$1$1').
					       replace(/\\\\"/g, '\\\"').
					       replace(/""/g, '\\"\\"').
					       replace(/&quot;&quot;/g, '\\"\\"').
					       // replace(/&/g, "&amp;").
					       replace(/\\n/g, '\\n');
					if (y !== x) {
						// console.error("Gura Replacing "+x+" with "+y);
					}
					return y;
				}), '", "', '"', '"');
		} else if (
			attrType === "MFInt32"||
			attrType === "MFImage"||
			attrType === "SFImage") {
			strval = this.printSubArray(attrType, "int", nodeValue.split(/[ ,\t\r\n]+/), ', ', '', '');
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
			strval = this.printSubArray(attrType, "float", nodeValue.split(/[ ,\t\r\n]+/), FLOAT_SUFFIX+', ', '', FLOAT_SUFFIX);
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
			strval = this.printSubArray(attrType, "double", nodeValue.split(/[ ,\t\r\n]+/), DOUBLE_SUFFIX+', ', '', DOUBLE_SUFFIX);
		} else if (attrType === "MFBool") {
			strval = this.printSubArray(attrType, "boolean", nodeValue.split(/[ ,\t\r\n]+/), ', ', '', '');
		} else {
			strval = '"'+nodeValue.replace(/\n/g, '\\\\n').replace(/\\?"/g, "\\\"")+'"';
		}
		return strval;
	},
	subSerializeToString : function(element, mapToMethod, fieldTypes, n) {
		let str = "";
		let attrType = "";
		let nodename = "";
		for (let a in element.attributes) {
			let attrs = element.attributes;
			try {
				parseInt(a);
				let attrsa = attrs[a];
				if (attrs.hasOwnProperty(a) && attrsa.nodeType == 2) {
					let attr = attrsa.nodeName;
					if (attr === 'containerField' && (
						attrs[a].nodeValue === "joints" ||
						attrs[a].nodeValue === "skeleton" ||
						attrs[a].nodeValue === "segments" ||
						attrs[a].nodeValue === "viewpoints" ||
						attrs[a].nodeValue === "skin" ||
						attrs[a].nodeValue === "skinCoord" ||
						attrs[a].nodeValue === "sites")) {
						attr = "containerFieldOverride";
					} else if (attr === "xmlns:xsd") {
						continue;
					} else if (attr === "xsd:noNamespaceSchemaLocation" ) {
						continue;
					} else if (attr === 'containerField') {
						continue;
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
					} else if (element.nodeName === "Background" && attr === "groundTransparency") {
						continue;
					} else if (element.nodeName === "Background" && attr === "skyTransparency") {
						continue;
					}
					if (attr === "nodename") {
						nodename = attrs[a].nodeValue;
					}
					attrType = "SFString";
					if (typeof fieldTypes[element.nodeName] !== 'undefined') {
						attrType = fieldTypes[element.nodeName][attr];
					}
					let strval = this.stringValue(attrsa, attr, attrType, element);
					let method = attr;
					if (attr === "class") {
						method = "CssClass";
					}
					str += "    ".repeat(n)+method+": "+strval+"\n";
					if (attr === 'containerFieldOverride' && (attrs[a].nodeValue === "joints" || attrs[a].nodeValue === "segments" || attrs[a].nodeValue === "viewpoints" || attrs[a].nodeValue === "skinCoord" || attrs[a].nodeValue === "skin" || attrs[a].nodeValue === "sites")) {
						// str += ")"; // for cast
					}
				}
			} catch (e) {
				console.error(e);
			}
			attrType = "";
		}
		let childrenNodes = [];
		let first = true;
		for (let cn in element.childNodes) {
			let node = element.childNodes[cn];
			let ch = "";
			if (first) {
				first = false;
			} else {
				if (element.nodeName === 'Shape'
				    || element.nodeName === 'X3D') {
					ch += "    ".repeat(n);
				}
				ch +=  ",\n";
			}
			if (element.childNodes.hasOwnProperty(cn) && node.nodeType == 1) {
				let method = this.printParentChild(element, node, cn, mapToMethod);
				let begin = "";
				let end = "";
				if (method.startsWith(".add")) {
					begin = " [";
					end = "]";
				}
				ch += "    ".repeat(n)+node.nodeName+":"+begin+"\n";

				ch += this.subSerializeToString(node, mapToMethod, fieldTypes, n+1);
				if (end !== "") {
					ch += "    ".repeat(n)+end;
				}
				childrenNodes.push(ch);
			} else if (element.childNodes.hasOwnProperty(cn) && node.nodeType == 8) {
				let y = node.nodeValue.
					replace(/\\/g, '\\\\').
					replace(/"/g, '\\"');
				ch += y.split("\r\n").map(function(x) {
					return x.replace(/^/g, '\n#');
					}).join("\n")+"\n";
				// no commas for comments, don't print a comma
				first = true;
				childrenNodes.push(ch);
			} else if (element.childNodes.hasOwnProperty(cn) && node.nodeType == 4) {
				ch += '\n#sourceCode "'+node.nodeValue.split(/\r?\n/).map(function(x) {
					return x.
					        replace(/\\/g, '\\\\').
						replace(/"/g, '\\"').
						replace(/$/g, '\\').
						replace("ecmascript:", "");
					}).join('\\newline')+'\\newline"\n';
				if (cn === 0) {
					// if comment is first, don't print a comma
					first = true;
				}
				childrenNodes.push(ch);
			} else if (element.childNodes.hasOwnProperty(cn) && node.nodeType == 3 && node.nodeValue.trim() === '') {
			} else if (typeof node.nodeType === 'undefined') {
			} else {
				console.error("Unhandled", node.nodeType, node.nodeName, node.nodeValue);
			}
		}
		let newcn = childrenNodes.join("");
		if (newcn !== "") {
			str += newcn;
			if (!str.endsWith("\n")) {
				str += "\n";
			}
		}
		return str;
	}
};


if (typeof module === 'object')  {
	module.exports = GuraSerializer;
}

