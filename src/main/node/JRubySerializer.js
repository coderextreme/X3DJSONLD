"use strict";

const DOUBLE_SUFFIX = '';
const FLOAT_SUFFIX = '';

if (typeof window === 'undefined') {
  var fs = await import('fs');
}

export default function JRubySerializer () {
this.code = [];
this.codeno = 0;
this.preno = 0;
}


JRubySerializer.prototype = {
	loadTextArea : function(text, stack, json, element, clazz, mapToMethod, fieldTypes) {
		var str = text;
		stack.unshift(this.preno);
		this.preno++;
		var bodystr = "";
		bodystr += "ConfigurationProperties.setDeleteIntermediateFiles(false);\n";
		bodystr += "ConfigurationProperties.setStripTrailingZeroes(true);\n";
		bodystr += "ConfigurationProperties.setStripDefaultAttributes(true);\n";
		bodystr += "ConfigurationProperties.setXsltEngine(Java::OrgWeb3dX3dJsail::ConfigurationProperties::XSLT_ENGINE_NATIVE_JAVA);\n";
	
		const enn = element.nodeName.charAt(0).toLowerCase() + element.nodeName.slice(1);
		bodystr += enn+stack[0]+" = "+element.nodeName+".new\n";
		bodystr += this.subSerializeToString(element, mapToMethod, fieldTypes, 1, stack);

		str += bodystr;
		str += enn+stack[0]+".toFileX3D \""+clazz+".new.jruby.x3d\"\n";
		str += enn+stack[0]+".toFileJSON \""+clazz+".new.jruby.json\"\n";
		stack.shift();
		document.getElementById('jruby').value = str;
		return str;
	},
	serializeToString : function(json, element, clazz, mapToMethod, fieldTypes) {
		this.code = [];
		this.codeno = 0;
		this.preno = 0;
		var stack = [];

		var str = "";

		// java_import javax.swing.JFrame

		if (typeof fs === 'object') {
			str += this.loadTextArea(fs.readFileSync("../jruby/x3drsail.rb").toString(), stack, json, element, clazz, mapToMethod, fieldTypes);
			return str;
		} else {
		    (async function (serializer) {
		      try {
			const response = await fetch("../jruby/x3drsail.rb");
			if (!response.ok) {
			  throw new Error(`HTTP error! status: ${response.status}`);
			}
			str += serializer.loadTextArea(await response.text(), stack, json, element, clazz, mapToMethod, fieldTypes);
			return str;
		      } catch (error) {
			console.error('Error loading Ruby file:', error);
			document.getElementById('jruby').value = 'Error loading file: ' + error.message;
		      }
		    })(this);
		}
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
		/*
                if (type === "boolean") {
                        for (var v in values) {
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

		return '['+lead+values.join(j)+trail+'].to_java Java::'+type;
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
		/*
		if (node.nodeName === 'MetadataSet' && addpre+method === "addValue") {
			method = "Metadata"
			addpre = "set";
		}
		if (node.nodeName === 'MetadataString' && addpre+method === "addValue") {
			method = "Metadata"
			addpre = "set";
		}
		*/
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
			strval = this.printSubArray(attrType, "double", nodeValue.split(/[ ,\t\r\n]+/), this.codeno, DOUBLE_SUFFIX+', ', '', DOUBLE_SUFFIX);
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
						// console.error("JRuby Replacing "+x+" with "+y);
					}
					return y;
				}), this.codeno, '", "', '"', '"');
		} else if (
			attrType === "MFInt32"||
			attrType === "MFImage"||
			attrType === "SFImage") {
			strval = this.printSubArray(attrType, "int", nodeValue.split(/[ ,\t\r\n]+/), this.codeno, ', ', '', '');
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
			strval = this.printSubArray(attrType, "float", nodeValue.split(/[ ,\t\r\n]+/), this.codeno, FLOAT_SUFFIX+', ', '', FLOAT_SUFFIX);
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
			strval = this.printSubArray(attrType, "double", nodeValue.split(/[ ,\t\r\n]+/), this.codeno, DOUBLE_SUFFIX+', ', '', DOUBLE_SUFFIX);
		} else if (attrType === "MFBool") {
			strval = this.printSubArray(attrType, "boolean", nodeValue.split(/[ ,\t\r\n]+/), this.codeno, ',  ', '', '');
		} else {
			strval = '"'+nodeValue.replace(/\n/g, '\\\\n').replace(/\\?"/g, "\\\"")+'"';
		}
		return strval;
	},
	subSerializeToString : function(element, mapToMethod, fieldTypes, n, stack) {
		var str = "";
		var attrType = "";
		var nodename = "";
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
						attrs[a].nodeValue === "viewpoints" ||
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
					if (attr === "nodename") {
						nodename = attrs[a].nodeValue;
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
					str += "    ".repeat(n)+'.set'+method+"("+strval+")\n";
					if (attr === 'containerFieldOverride' && (attrs[a].nodeValue === "joints" || attrs[a].nodeValue === "segments" || attrs[a].nodeValue === "viewpoints" || attrs[a].nodeValue === "skinCoord" || attrs[a].nodeValue === "skin" || attrs[a].nodeValue === "sites")) {
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
				nodename = node.nodeName.substring(0,1).toUpperCase() + node.nodeName.substring(1);
				method = this.printParentChild(element, node, cn, mapToMethod, n);
				ch += "    ".repeat(n)+method+"("+nodename+".new()\n";

				ch += this.subSerializeToString(node, mapToMethod, fieldTypes, n+1, stack);
				ch += "    ".repeat(n)+")\n";
				str += ch;
				stack.shift();
			} else if (element.childNodes.hasOwnProperty(cn) && node.nodeType == 8) {
				var y = node.nodeValue.
					replace(/\\/g, '\\\\').
					replace(/"/g, '\\"');
				str += ("  ".repeat(n+2))+".addComments(CommentsBlock.new(\""+y.split("\n").join('\\n\"+\n\"')+"\"))\n";
				if (y !== node.nodeValue) {
					// console.error("Java Comment Replacing "+node.nodeValue+" with "+y);
				}
			} else if (element.childNodes.hasOwnProperty(cn) && node.nodeType == 4) {
				str += ("  ".repeat(n))+".setSourceCode(\""+node.nodeValue.split(/[\r\n][\r\n]?/).map(function(x) {
					return x.
					        replace(/\\/g, '\\\\').
						replace(/"/g, '\\"')
					;
					}).join('\\n\"+\n\"')+'")';
					/*
				str += ("  ".repeat(n+2))+'.setSourceCode "'+node.nodeValue.split(/\r?\n/).map(function(x) {
					return x.
					        replace(/\\/g, '\\\\').
						replace(/"/g, '\\"')
					}).join('\n')+'\n"';
					*/
			}
	        		
		}
		return str;
	}
};
