"use strict";

const DOUBLE_SUFFIX = '';
const FLOAT_SUFFIX = '';

import DOMSerializer from './DOMSerializer.mjs';
let serializer = new DOMSerializer();

export default function CppScriptSerializer () {
this.code = [];
this.codeno = 0;
this.preno = 0;
}


CppScriptSerializer.prototype = {
	serializeToString : function(json, element, clazz, mapToMethod, fieldTypes) {
		this.code = [];
		this.codeno = 0;
		this.preno = 0;
		let stack = [];

		let str = "";

		stack.unshift(this.preno);
		this.preno++;
		let bodystr = "";
        
        // https://stackoverflow.com/questions/48469666/error-enoent-no-such-file-or-directory-open-moviedata-json
        // https://stackoverflow.com/questions/3151436/how-can-i-get-the-current-directory-name-in-javascript
        // console.log('Current directory: ' + process.cwd()); // Node.js method for current directory - not what is needed here
        // https://flaviocopes.com/node-get-current-folder/ use __dirname under Node.js
		bodystr += "/* delete next 5 lines for Visual Studio */\n";
		bodystr += "#define FALSE false\n";
		bodystr += "#define TRUE true\n";
		bodystr += "#define WINAPI\n";
		bodystr += "#define AFX_EXT_CLASS\n";
		bodystr += "#define EXPORT32\n";
		bodystr += "#include \"C:/x3d-code/www.web3d.org/x3d/stylesheets/cpp/concretes.h\"\n";
		bodystr += "int main(int argc, char ** argv) {\n";
		bodystr += "CX3DScene m_pScene;\n";
		bodystr += "CBrowser browser = X3D.getBrowser();\n";
		bodystr += "C"+element.nodeName+"* "+element.nodeName+stack[0]+" = new C"+element.nodeName+"();\n";
        	bodystr += 'CGroup* group = (CGroup*)(m_pScene.createNode("Group"));\n';
        	bodystr += "group->addChildren("+element.nodeName+stack[0]+");\n";
		bodystr += this.subSerializeToString(element, mapToMethod, fieldTypes, 3, stack);
        	bodystr += "m_pScene.addRootNode(group);\n";
        	bodystr += element.nodeName+stack[0]+"->toXMLString();\n";
		bodystr += "}\n";

		str += bodystr;
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

		return 'new '+type+'['+values.length+']{'+lead+values.join(j)+trail+'}'+(attrType === "MFString" || attrType === "MFFloat" ? ', '+values.length : '');
	},

	printParentChild : function (element, node, cn, mapToMethod, n) {
		let prepre = "->";
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
						if (method.charAt(0) >= 'a') {
							method = attrsa.nodeValue.charAt(0).toUpperCase() + attrsa.nodeValue.slice(1);
						}
						if (method === "Shaders") {
							addpre = "add";
							method = "Child";
						} else {
							addpre = "set";
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
			strval = this.printSubArray(attrType, "CString",
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
						// console.error("CppScriptSerializer Replacing "+x+" with "+y);
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
		let str = "";
		let attrType = "";
		for (let a in element.attributes) {
			let attrs = element.attributes;
			try {
				parseInt(a);
				let attrsa = attrs[a];
				if (attrs.hasOwnProperty(a) && attrsa.nodeType == 2) {
					let attr = attrsa.nodeName;
					if (attr === "xmlns:xsd") {
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
					let strval = this.stringValue(attrsa, attr, attrType, element);
					var method = attr;
					if (method.charAt(0) >= 'a') {
						method = method.charAt(0).toUpperCase() + method.slice(1);
					}
					if (attr === "class") {
						method = "CssClass";
					}
					str += element.nodeName+stack[0];
					str += '->set'+method+"("+strval+");\n";
				}
			} catch (e) {
				console.error(e);
			}
			attrType = "";
		}
		for (let cn in element.childNodes) {
			let node = element.childNodes[cn];
			if (element.childNodes.hasOwnProperty(cn) && node.nodeType == 1) {
				/*
				if (node.nodeName === "head") {
					continue;
				}
				*/
				stack.unshift(this.preno);
				this.preno++;
				let ch = "";
let statements = {
"component" : true,
"connect" : true,
"EXPORT" : true,
"ExternProtoDeclare" : true,
"field" : true,
"fieldValue" : true,
"head" : true,
"IMPORT" : true,
"IS" : true,
"meta" : true,
"ProtoBody" : true,
"ProtoDeclare" : true,
"ProtoInterface" : true,
"ROUTE" : true,
"Scene" : true,
"unit" : true,
"X3D" : true
};
				if (node.nodeName === "ProtoDeclare") {
					ch += "C"+node.nodeName+" "+node.nodeName+stack[0]+" = browser.createX3DFromString(R\"foo("+serializer.serializeToString({ "X3D" : { "version" : "4.0"}}, node)+")foo\");\n";

				} else if (statements[node.nodeName]) {
					ch += "C"+node.nodeName+"* "+node.nodeName+stack[0]+" = new C"+node.nodeName+"();\n";
				} else {
					ch += "C"+node.nodeName+"* "+node.nodeName+stack[0]+" = (C"+node.nodeName+" *)(m_pScene.createNode(\""+ node.nodeName+"\"));\n";
				}

				let bodystr = this.subSerializeToString(node, mapToMethod, fieldTypes, n+1, stack);
				ch += bodystr;
				method = this.printParentChild(element, node, cn, mapToMethod, n);
				if (method.startsWith("->setadd")) {
					method = "->"+method.substr(5);
				} else if (method.startsWith("->setset")) {
					method = "->"+method.substr(5);
				}
				// if (element.nodeName !== "X3D") {
					if (element.nodeName !== "Scene") {
						ch += element.nodeName+stack[1];
					} else {
						ch += "group";
					}
				// }
				// console.log(element.nodeName, node.nodeName, method, fieldTypes[element.nodeName][node.nodeName]);
				if (method === "->setGeometry") {
					ch += method+"("+node.nodeName+stack[0]+");\n\n";
				} else {
					ch += method+"(*"+node.nodeName+stack[0]+");\n\n";
				}
				str += ch;
				stack.shift();
			} else if (element.childNodes.hasOwnProperty(cn) && node.nodeType == 8) {
				let y = node.nodeValue.
					replace(/\\/g, '\\\\').
					replace(/"/g, '\\"');
				// str += ".addComments(CommentsBlock(\"\"\""+y+"\"\"\")) \\\n";
				str += y.split("\r\n").map(function(x) {
					return x.replace(/^/g, '//');
					}).join("\r\n");
				str += "\r\n";
				if (y !== node.nodeValue) {
					// console.error("Cpp Comment Replacing "+node.nodeValue+" with "+y);
				}
			} else if (element.childNodes.hasOwnProperty(cn) && node.nodeType == 4) {
				str += "\n"+element.nodeName+stack[0];
				str += ".setSourceCode(`"+node.nodeValue.split(/\r?\n/).map(function(x) {
					return x.
					        replace(/\\/g, '\\\\').
						replace(/"/g, '\\"')
						replace(/$/g, '\\')
						/*
						.replace(/\\n/g, "\\\\n")
						*/
					;
					}).join('\\n\"+\n\"')+"`)\n";
			}
	        		
		}
		return str;
	}
};
