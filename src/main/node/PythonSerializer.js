"use strict";

const DOUBLE_SUFFIX = '';
const FLOAT_SUFFIX = '';

export default function PythonSerializer () {
this.code = [];
this.codeno = 0;
this.preno = 0;
}


PythonSerializer.prototype = {
	serializeToString : function(json, element, clazz, mapToMethod, fieldTypes) {
		this.code = [];
		this.codeno = 0;
		this.preno = 0;
		let stack = [];

		let str = "";
		// str += "# -*- coding: "+json.X3D.encoding+" -*-\n";

		// str += "print('<?xml version=\"1.0\" encoding=\"UTF-8\"?>')\n";
		str += "print('<!--')\n";
		str += "import x3d\n";
		str += "print('-->')\n";

		stack.unshift(this.preno);
		this.preno++;
		let bodystr = "";
        
        // https://stackoverflow.com/questions/48469666/error-enoent-no-such-file-or-directory-open-moviedata-json
        // https://stackoverflow.com/questions/3151436/how-can-i-get-the-current-directory-name-in-javascript
        // console.log('Current directory: ' + process.cwd()); // Node.js method for current directory - not what is needed here
        // https://flaviocopes.com/node-get-current-folder/ use __dirname under Node.js
		bodystr += ""+element.nodeName+stack[0]+" = x3d."+element.nodeName;
		bodystr += "()\n";
		bodystr += this.subSerializeToString(element, mapToMethod, fieldTypes, 3, stack);

		str += bodystr;
		str += "f = open(\""+clazz+".new.python.x3d\", mode=\"w\", encoding=\"utf-8\")\n";
		str += "f.write("+element.nodeName+stack[0]+".XML())\n";
		str += "f.close()\n";
		str += "f = open(\""+clazz+".new.python.x3dv\", mode=\"w\", encoding=\"utf-8\")\n";
		str += "f.write("+element.nodeName+stack[0]+".VRML())\n";
		str += "f.close()\n";
		str += "f = open(\""+clazz+".new.python.json\", mode=\"w\", encoding=\"utf-8\")\n";
		str += "f.write("+element.nodeName+stack[0]+".JSON())\n";
		str += "f.close()\n";
		stack.shift();
		return str;
	},

	printSubArray : function (attrType, type, values, co, j, lead, trail) {
                if (type === "int") {
                        for (let v in values) {
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
                        for (let v in values) {
				if (values[v] === 'true') {
					values[v] = "True";
				} else if (values[v] === 'false') {
					values[v] = "False";
				}
			}
		}
		if (values[0] === "" || values[0] === null) {
			values.shift();
		}
		if (values.length >= 0 && (values[values.length-1] === "" || values[values.length-1] === null)) {
			values.pop();
		}
		if (attrType === "MFRotation") {
			let Dwhole = [];
			let TupleCount = 4;
                        for (let i=0; i < values.length; i+=TupleCount) {
				let Dpart = "(";
				Dpart += values[i];
				Dpart += ", ";
				Dpart += values[i+1];
				Dpart += ", ";
				Dpart += values[i+2];
				Dpart += ", ";
				Dpart += values[i+3];
				Dpart += ")";
				Dwhole[i/TupleCount] = Dpart;
			}
			// console.log("MFRotation", Dwhole);
			return '['+lead+Dwhole.join(j)+trail+']';
			// return '('+lead+values.map(a => parseFloat(a).toFixed(4)).join(j)+trail+')';
		// } else if (attrType === "SFString") {
			// let s =  '('+lead+values.join(',')+trail+')';
			// return s;
		} else if (attrType === "MFVec2f") {
			let Dwhole = [];
			let TupleCount = 2;
                        for (let i=0; i < values.length; i+=TupleCount) {
				let Dpart = "("+values[i]+", "+values[i+1]+")";
				Dwhole[i/TupleCount] = Dpart;
			}
			// console.log(Dwhole);
			return '['+lead+Dwhole.join(j)+trail+']';
		} else if (attrType === "MFVec2d") {
			let Dwhole = [];
			let TupleCount = 2;
                        for (let i=0; i < values.length; i+=TupleCount) {
				let Dpart = "("+values[i]+", "+values[i+1]+")";
				Dwhole[i/TupleCount] = Dpart;
			}
			// console.log(Dwhole);
			return '['+lead+Dwhole.join(j)+trail+']';
		} else if (attrType === "MFVec3d") {
			let Dwhole = [];
			let TupleCount = 3;
                        for (let i=0; i < values.length; i+=TupleCount) {
				let Dpart = "("+values[i]+", "+values[i+1]+", "+values[i+2]+")";
				Dwhole[i/TupleCount] = Dpart;
			}
			// console.log(Dwhole);
			return '['+lead+Dwhole.join(j)+trail+']';
		} else if (attrType === "MFVec3f") {
			let Dwhole = [];
			let TupleCount = 3;
                        for (let i=0; i < values.length; i+=TupleCount) {
				let Dpart = "("+values[i]+", "+values[i+1]+", "+values[i+2]+")";
				Dwhole[i/TupleCount] = Dpart;
			}
			// console.log(Dwhole);
			return '['+lead+Dwhole.join(j)+trail+']';
		} else if (attrType === "MFVec4d") {
			let Dwhole = [];
			let TupleCount = 4;
                        for (let i=0; i < values.length; i+=TupleCount) {
				let Dpart = "("+values[i]+", "+values[i+1]+", "+values[i+2]+", "+values[i+3]+")";
				Dwhole[i/TupleCount] = Dpart;
			}
			// console.log(Dwhole);
			return '['+lead+Dwhole.join(j)+trail+']';
		} else if (attrType === "MFVec4f") {
			let Dwhole = [];
			let TupleCount = 4;
                        for (let i=0; i < values.length; i+=TupleCount) {
				let Dpart = "("+values[i]+", "+values[i+1]+", "+values[i+2]+", "+values[i+3]+")";
				Dwhole[i/TupleCount] = Dpart;
			}
			// console.log(Dwhole);
			return '['+lead+Dwhole.join(j)+trail+']';
			// return '('+lead+values.map(a => parseFloat(a).toFixed(4)).join(j)+trail+')';
		} else if (attrType.startsWith("MFColor")) {
			let Dwhole = [];
			let TupleCount = attrType.endsWith("RGBA") ? 4 : 3;
                        for (let i=0; i < values.length; i+=TupleCount) {
				let Dpart = "(";
				Dpart += values[i];
				Dpart += ", ";
				Dpart += values[i+1];
				Dpart += ", ";
				Dpart += values[i+2];
				if (TupleCount > 3) {
					Dpart += ", ";
					Dpart += values[i+3];
				}
				Dpart += ")";
				Dwhole[i/TupleCount] = Dpart;
			}
			// console.log(Dwhole);
			return '['+lead+Dwhole.join(j)+trail+']';
		} else {
			return '['+lead+values.join(j)+trail+']';
		}
	},

	printParentChild : function (element, node, cn, mapToMethod, n) {
		let prepre = ".";
		let addpre = "";
		if (cn > 0 && node.nodeName !== 'IS') {
			addpre = "";
		}
		if (node.nodeName === 'field') {
			addpre = "";
		}

		let method = node.nodeName;
		if (typeof mapToMethod[element.nodeName] === 'object') {
			if (typeof mapToMethod[element.nodeName][node.nodeName] === 'string') {
				addpre = "";
				method = mapToMethod[element.nodeName][node.nodeName];
			}
		} else if (typeof mapToMethod[element.nodeName] === 'string') {
			addpre = "";
			method = mapToMethod[element.nodeName];
		}
		for (let a in node.attributes) {
			let attrs = node.attributes;
			try {
				parseInt(a);
				let attrsa = attrs[a];
				let attr = attrsa.nodeName;
				if (attrs.hasOwnProperty(a) && attrsa.nodeType == 2) {
					if (attr === "containerField") {
						method = attrsa;
						if (method === "Shaders") {
							addpre = "";
							method = "children";
						} else {
							if (attrs[a].nodeValue == "joints" 
								|| attrs[a].nodeValue == "sites" 
								|| attrs[a].nodeValue == "segments" 
							) {
								method = ""+attrs[a];
							} else {
								method = ""+attrs[a];
							}
							addpre = "";
						}
					}
				}
			} catch (e) {
			}
		}
		if (element.nodeName === 'Scene' && addpre+method === "setMetadata") {
			method = "metadata"
			addpre = "";
		}
		if (addpre+method === "addChild") {
			method = "addChildren"
			addpre = "";
		}
		if (method === "setShaders") {
			method = "shaders"
			addpre = "";
		}
		return prepre+addpre+method;
	},
	stringValue : function(attrsa, attr, attrType, element, attrs) {
		// console.log("-2 attr", attr, "attrType", attrType);
		let strval;
		let nodeValue = attrsa.nodeValue;
		if (nodeValue === 'NULL') {
			strval = "";
			return strval;
		}
		if (attrType === "SFString") {
			if (attr === "value") {
				for (let a in attrs) {
					if (attrs[a].nodeName === "type") {
						attrType = attrs[a].nodeValue;
						break;
					}
				}
			}
		}
		try {
			// console.log("-1 attr", attr, "attrType", attrType);
			if (attrType === "SFString") {
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
						let y = x.
						       replace(/(\\\\+)/g, '$1$1').
						       replace(/\\\\"/g, '\\\"').
						       replace(/""/g, '\\"\\"').
						       replace(/&quot;&quot;/g, '\\"\\"').
						       // replace(/&/g, "&amp;").
						       replace(/\\n/g, '\\n');
						if (y !== x) {
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
		} catch (e) {
			console.error(e);
		}
		// console.log("0 attr", attr, "attrType", attrType);
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
					// console.log("1 attr", attr, "attrType", attrType);
					let strval = this.stringValue(attrsa, attr, attrType, element, attrs);
					// console.log("1.1 attr", attr, "attrType", attrType);
					let method = attr;
					if (attr === "class") {
						method = "cssClass";
					}
					if (attr === "global") {
						method = "global_";
					}
					str += element.nodeName+stack[0];
					str += '.'+method+" = "+strval+"\n";
					// console.log("2 attr", attr, "attrType", attrType);
					/*
					if (attr === "keyValue") {
						console.log("method", method);
						console.log("Result", strval);
						console.log("3 attr", attr, "attrType", attrType);
					} else {
						console.log("4 attr", attr, "attrType", attrType);
					}
					*/
				}
			} catch (e) {
			}
			attrType = "";
		}
		for (let cn in element.childNodes) {
			let node = element.childNodes[cn];
			if (element.childNodes.hasOwnProperty(cn) && node.nodeType == 1) {
				stack.unshift(this.preno);
				this.preno++;
				let ch = "";
				if (node.nodeName === "#sourceCode") {
					ch += node.nodeName.substring(1)+stack[0]+" = ";
					ch += node.nodeValue;
				} else {
					ch += node.nodeName+stack[0]+" = x3d."+node.nodeName;
					ch += "()\n";
				}

				let bodystr = this.subSerializeToString(node, mapToMethod, fieldTypes, n+1, stack);
				ch += bodystr;
				ch += "\n"
				let method = this.printParentChild(element, node, cn, mapToMethod, n);
				if (method === ".global") {
					method = ".global_";
					console.log("Substituting", method);
				} else if (method === ".addMeta" || method === ".addComponent"|| method === ".addUnit") {
					method = ".children";
				} else if (method === ".setIS") {
					method = ".IS";
				} else if (method.indexOf(". containerField") === 0) {
					method = "."+method.substring(method.indexOf('"')+1, method.lastIndexOf('"'));
				} else if (method === ".setScene" ||
					method === ".setProtoInterface" ||
					method === ".setProtoBody") {
					method = method.substring(0,1) + method.substring(4);
				} else if (method === ".#sourceCode") {
					method = method.substring(0,1) + method.substring(2);
				} else if (method === ".shape") {
				} else if (method.toLowerCase() === ".hanimsite") {
				} else if (method.toLowerCase() === ".texturetransform") {
					method = method.substring(0,1) + method.substring(1,2).toLowerCase() + method.substr(2);
				} else {
					method = method.substring(0,1) + method.substring(4,5).toLowerCase() + method.substr(5);

				}
				if (method === ".Scene" ||
					method === ".IS" ||
					method === ".appearance" ||
					method === ".metadata" ||
					method === ".back" ||
					method === ".shape" ||
					method === ".color" ||
					method === ".skinCoord" ||
					method === ".controlPoint" ||
					(method === ".texCoord" && element.nodeName === "IndexedFaceSet") ||
					(method === ".texCoord" && element.nodeName !== "MultiTextureCoordinate") ||
					method === ".skinNormal" ||
					method === ".coord" ||
					method === ".normal" ||
					method === ".source" ||
					method === ".layerSet" ||
					(method === ".textureTransform" && element.nodeName === "Appearance") ||
					(method === ".baseTexture" && element.nodeName === "PhysicalMaterial") ||
  					((method === ".ambientTexture" || method === ".diffuseTexture" || method === ".emissiveTexture" || method === ".normalTexture" || method === ".occlusionTexture" || method === ".shininessTexture" || method === ".specularTexture") && element.nodeName === "Material") ||
					method === ".acousticProperties" ||
					method === ".topTexture" ||
					method === ".bottomTexture" ||
					method === ".rightTexture" ||
					method === ".leftTexture" ||
					method === ".frontTexture" ||
					method === ".backTexture" ||
					method === ".diffuseTexture" ||
					method === ".normalTexture" ||
					method === ".shininessTexture" ||
					method === ".specularTexture" ||
					method === ".texture" ||
					method === ".fontStyle" ||
					method === ".fillProperties" ||
					method === ".lineProperties" ||
					method === ".textureProperties" ||
					method === ".material" ||
					method === ".geometry" ||
					method === ".head" ||
					method === ".geoOrigin" ||
					method === ".emitter" ||
					method === '.viewport'||
					method === '.layout' ||
					method === ".proxy" ||
					method === ".ProtoInterface" ||
					method === ".ProtoBody") {
					ch += element.nodeName+stack[1]+method+" = "+node.nodeName+stack[0]+"\n";
				} else if (method === ".sourceCode") {
					ch += element.nodeName+stack[1]+method+" = "+node.nodeName.substring(1)+stack[0]+"\n";
				} else if ((element.nodeName === "Group" || element.nodeName === "Shape" || element.nodeName === "HAnimHumanoid") && method === ".value") {
					ch += element.nodeName+stack[1]+".metadata = "+node.nodeName+stack[0]+"\n";
				} else if (method === ".value") {
					ch += "if "+element.nodeName+stack[1]+method+" is None:\n";
					ch += "    "+element.nodeName+stack[1]+method+" = []\n";
					ch += element.nodeName+stack[1]+method+".append("+node.nodeName+stack[0]+")\n";
				} else if (method === ".skin" || method === ".skeleton") {
					let n = node;
					while (n && n.nodeName !== "HAnimHumanoid") {
						n = n.parent;
					}
					if (n) {
						if (n.nodeName !== node.nodeName) {
							ch += n.nodeName+stack[0]+method+".append("+node.nodeName+stack[0]+")\n";
						}
					} else {
						ch += element.nodeName+stack[1]+method+".append("+node.nodeName+stack[0]+")\n";
					}
				} else {

					ch += element.nodeName+stack[1]+method+".append("+node.nodeName+stack[0]+")\n";
				}
				str += ch;
				stack.shift();
			} else if (element.childNodes.hasOwnProperty(cn) && node.nodeType == 8) {
				let y = node.nodeValue.
					replace(/\\/g, '\\\\').
					replace(/"/g, '\\"');
				// str += ".addComments(CommentsBlock(\"\"\""+y+"\"\"\")) \\\n";
				str += y.split("\r\n").map(function(x) {
					return x.replace(/^/g, '"""');
					}).join("\r\n");
				str += '"""\r\n';
			} else if (element.childNodes.hasOwnProperty(cn) && node.nodeType == 4) {
				str += "\n"+element.nodeName+stack[0];
				str += ".sourceCode = '''"+node.nodeValue.split(/\r?\n/).map(function(x) {
					return x.
					        replace(/\\/g, '\\\\').
						replace(/"/g, '\\"')
						replace(/$/g, '\\')
						/*
						.replace(/\\n/g, "\\\\n")
						*/
					;
					}).join('\\n\"+\n\"')+"'''\n";
			}
	        		
		}
		return str;
	}
};


if (typeof module === 'object')  {
	module.exports = PythonSerializer;
}

