"use strict";

const DOUBLE_SUFFIX = '';
const FLOAT_SUFFIX = '';

export default function GraalPySerializer() {
this.code = [];
this.codeno = 0;
this.preno = 0;
}


GraalPySerializer.prototype = {
	serializeToString : function(json, element, clazz, mapToMethod, fieldTypes) {
		this.code = [];
		this.codeno = 0;
		this.preno = 0;
		var stack = [];

		var str = "";
		// str += "# -*- coding: "+json.X3D.encoding+" -*-\n";

		str += "import x3dpsail as x3d\n\n";

		stack.unshift(this.preno);
		this.preno++;
		var bodystr = "";
		bodystr += "x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA)\n";
		bodystr += "x3d.ConfigurationProperties.setDeleteIntermediateFiles(False)\n";
		bodystr += "x3d.ConfigurationProperties.setStripTrailingZeroes(True)\n";
		bodystr += "x3d.ConfigurationProperties.setStripDefaultAttributes(True)\n";
		bodystr += element.nodeName+stack[0]+" = x3d."+element.nodeName;
		bodystr += "()\n";
		bodystr += this.subSerializeToString(element, mapToMethod, fieldTypes, 3, stack);

		str += bodystr;
		str += element.nodeName+stack[0]+".toFileX3D(\""+clazz+".new.graalpy.x3d\")\n";
		str += element.nodeName+stack[0]+".toFileJSON(\""+clazz+".new.graalpy.x3dj\")\n";
		stack.shift();
		return str;
	},

	printSubArray : function (attrType, type, values, co, j, lead, trail) {
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
                if (type === "boolean") {
                        for (var v in values) {
				if (values[v] === 'true') {
					values[v] = "True";
				} else if (values[v] === 'false') {
					values[v] = "False";
				}
			}
		}
		if (values[0] === "" || values[v] === null) {
			values.shift();
		}
		if (values.length >= 0 && (values[values.length-1] === "" || values[values.length-1] === null)) {
			values.pop();
		}

		if (type === "float") {
			return 'x3d.doubleToFloat(['+lead+values.join(j)+trail+'])';
		} else if (type === "double") {
			return 'x3d.doubleToDouble(['+lead+values.join(j)+trail+'])';
		} else {
			return '['+lead+values.join(j)+trail+']';
		}
	},

	printParentChild : function (element, node, cn, mapToMethod, n) {
		var prepre = ".";
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
		for (var a in node.attributes) {
			var attrs = node.attributes;
			try {
				parseInt(a);
				var attrsa = attrs[a];
				var attr = attrsa.nodeName;
				if (attrs.hasOwnProperty(a) && attrsa.nodeType == 2) {
					if (attr === "containerField") {
						if (method === "setShaders") {
							method = "addShaders"
							addpre = "";
						} else {
							if (attrs[a].nodeValue === "joints" 
								|| attrs[a].nodeValue === "sites" 
								|| attrs[a].nodeValue === "skin" 
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
		if (addpre+method === "setSegments") {
			method = "Segments"
			addpre = "add";
		}
		if (method === "addChildren") {
			method = "addChild";
			addpre = "";
		}
		if (node.nodeName === "IS") {
			method = "IS";
			addpre = "set";
		}
		if (addpre+method === "setJoints") {
			method = "Joints"
			addpre = "add";
		}
		if (addpre+method === "setViewpoints") {
			method = "Viewpoints"
			addpre = "add";
		}
		if (addpre+method === "setSkeleton") {
			method = "Skeleton"
			addpre = "add";
		}
		if (addpre+method === "setSkin") {
			method = "Skin"
			addpre = "add";
		}
		if (element.nodeName === 'Transform' && addpre+method === "addSkin") {
			method = "Child"
			addpre = "add";
		}
		if (addpre+method === "setValue") {
			method = "Value"
			addpre = "add";
		}
		if (addpre+method === "setBack") {
			method = "BackTexture"
			addpre = "set";
		}
		if (addpre+method === "setFront") {
			method = "FrontTexture"
			addpre = "set";
		}
		if (addpre+method === "setLeft") {
			method = "LeftTexture"
			addpre = "set";
		}
		if (addpre+method === "setRight") {
			method = "RightTexture"
			addpre = "set";
		}
		if (addpre+method === "setTop") {
			method = "TopTexture"
			addpre = "set";
		}
		if (addpre+method === "setBottom") {
			method = "BottomTexture"
			addpre = "set";
		}
		if (element.nodeName === 'Scene' && addpre+method === "setMetadata") {
			method = "Metadata"
			addpre = "add";
		}
		if (node.nodeName === 'MetadataSet' && addpre+method === "addValue") {
			method = "Metadata"
			addpre = "set";
		}
		if (node.nodeName === 'MetadataString' && addpre+method === "addValue") {
			method = "Metadata"
			addpre = "set";
		}
		if (element.nodeName === 'HAnimHumanoid' && addpre+method === "addValue") {
			method = "Metadata"
			addpre = "set";
		}
		if (node.nodeName === 'LayerSet' && addpre+method === "addChild") {
			method = "LayerSet"
			addpre = "add";
		}
		if (element.nodeName === "field" && addpre+method === "addJoints") {
			method = "Child"
			addpre = "add";
		}
		return prepre+addpre+method;
	},
	stringValue : function(attrsa, attr, attrType, element) {
		var strval;
		var nodeValue = attrsa.nodeValue;
		if (nodeValue === 'NULL') {
			strval = "";
		} else if (attr === "readInterval") {
			strval = nodeValue+DOUBLE_SUFFIX;
			console.error(strval);
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
			strval = nodeValue+FLOAT_SUFFIX;
		} else if (attrType === "SFDouble") {
			strval = nodeValue+DOUBLE_SUFFIX;
		} else if (attrType === "SFBool") {
			if (nodeValue === 'true') {
				strval = "True";
			} else if (nodeValue === 'false') {
				strval = "False";
			} else {
				strval = nodeValue;
			}
		} else if (attrType === "SFTime") {
			strval = nodeValue+DOUBLE_SUFFIX;
		} else if (attrType === "MFTime") {
			strval = this.printSubArray(attrType, "double", nodeValue.split(/[ ,\t\r\n]+/), this.codeno, DOUBLE_SUFFIX+',', '', DOUBLE_SUFFIX);
		} else if (attrType === "MFString") {
			nodeValue = nodeValue.replace(/^ *(.*) *$/, "$1");
			strval = this.printSubArray(attrType, "java.lang.String",
				nodeValue.substr(1, nodeValue.length-2).split(/"[ ,\t\r\n]+"/).
				map(function(x) {
					var y = x.
					       replace(/(\\\\+)/g, '$1$1').
					       replace(/\\\\"/g, '\\\"').
					       replace(/""/g, '\\"\\"').
					       replace(/&quot;&quot;/g, '\\"\\"').
					       // replace(/&/g, "&amp;").
					       replace(/\\n/g, '\\n');
					if (y !== x) {
						// console.error("Graalpy Replacing "+x+" with "+y);
					}
					return y;
				}), this.codeno, '","', '"', '"');
		} else if (
			attrType === "MFInt32"||
			attrType === "MFImage"||
			attrType === "SFImage") {
			strval = this.printSubArray(attrType, "int", nodeValue.split(/[ ,\t\r\n]+/), this.codeno, ',', '', '');
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
			strval = this.printSubArray(attrType, "float", nodeValue.split(/[ ,\t\r\n]+/), this.codeno, FLOAT_SUFFIX+',', '', FLOAT_SUFFIX);
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
			strval = this.printSubArray(attrType, "double", nodeValue.split(/[ ,\t\r\n]+/), this.codeno, DOUBLE_SUFFIX+',', '', DOUBLE_SUFFIX);
		} else if (attrType === "MFBool") {
			strval = this.printSubArray(attrType, "boolean", nodeValue.split(/[ ,\t\r\n]+/), this.codeno, ',', '', '');
		} else {
			strval = '"'+nodeValue.replace(/\n/g, '\\\\n').replace(/\\?"/g, "\\\"")+'"';
		}
		return strval;
	},
	subSerializeToString : function(element, mapToMethod, fieldTypes, n, stack) {
		var str = "";
		var attrType = "";
		for (var a in element.attributes) {
			var attrs = element.attributes;
			try {
				parseInt(a);
				var attrsa = attrs[a];
				if (attrs.hasOwnProperty(a) && attrsa.nodeType == 2) {
					var attr = attrsa.nodeName;
					if (attr === 'containerField' && (
						attrs[a].nodeValue === "joints" ||
						attrs[a].nodeValue === "skeleton" ||
						attrs[a].nodeValue === "segments" ||
						attrs[a].nodeValue === "skin" ||
						attrs[a].nodeValue === "skinCoord" ||
						attrs[a].nodeValue === "sites")) {
						// console.log("################## FOUND", attr, attrs[a].nodeValue);
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
					attrType = "SFString";
					if (typeof fieldTypes[element.nodeName] !== 'undefined') {
						attrType = fieldTypes[element.nodeName][attr];
					}
					var strval = this.stringValue(attrsa, attr, attrType, element);
					var method = attr;
					method = method.charAt(0).toUpperCase() + method.slice(1);
					if (attr === "class") {
						method = "CssClass";
					}
					str += element.nodeName+stack[0];
					str += '.set'+method+"("+strval+")\n";
					if (attr === 'containerFieldOverride' && (attrs[a].nodeValue === "joints" || attrs[a].nodeValue === "segments" || attrs[a].nodeValue === "skinCoord" || attrs[a].nodeValue === "skin" || attrs[a].nodeValue === "sites")) {
						// str += ")"; // for cast
					}
				}
			} catch (e) {
				console.error(e);
			}
			attrType = "";
		}
		for (var cn in element.childNodes) {
			var node = element.childNodes[cn];
			if (element.childNodes.hasOwnProperty(cn) && node.nodeType == 1) {
				stack.unshift(this.preno);
				this.preno++;
				var ch = "";
				ch += node.nodeName+stack[0]+" = x3d."+node.nodeName;

				ch += "()\n";
				var bodystr = this.subSerializeToString(node, mapToMethod, fieldTypes, n+1, stack);
				ch += bodystr;
				ch += "\n"
				method = this.printParentChild(element, node, cn, mapToMethod, n);
				ch += element.nodeName+stack[1]+method+"("+node.nodeName+stack[0]+")\n";
				str += ch;
				stack.shift();
			} else if (element.childNodes.hasOwnProperty(cn) && node.nodeType == 8) {
				var y = node.nodeValue.
					replace(/\\/g, '\\\\').
					replace(/"/g, '\\"');
				str += "\n"+element.nodeName+stack[0];
				str += '.addComments(x3d.CommentsBlock("""'+y+'"""))\n';
			} else if (element.childNodes.hasOwnProperty(cn) && node.nodeType == 4) {
				var y = node.nodeValue.
					replace(/\\/g, '\\\\').
					replace(/"/g, '\\"');
				str += "\n"+element.nodeName+stack[0];
				str += ".setSourceCode('''"+y+"''')\n";
			}
	        		
		}
		str = str.replace("\n.addComments", ".addComments");
		return str;
	}
};
