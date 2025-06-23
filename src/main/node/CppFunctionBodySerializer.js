"use strict";

const DOUBLE_SUFFIX = '';
const FLOAT_SUFFIX = '';
const OBJ = '.'; // ->
const NEW = ""; // new
const PTR = ""; // *
const REF = "&"; // *

import DOMSerializer from './DOMSerializer.js';
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
		var stack = [];

		var str = "";

		stack.unshift(this.preno);
		this.preno++;
		var bodystr = "";
        
        // https://stackoverflow.com/questions/48469666/error-enoent-no-such-file-or-directory-open-moviedata-json
        // https://stackoverflow.com/questions/3151436/how-can-i-get-the-current-directory-name-in-javascript
        // console.log('Current directory: ' + process.cwd()); // Node.js method for current directory - not what is needed here
        // https://flaviocopes.com/node-get-current-folder/ use __dirname under Node.js
		/*
		str += "#ifndef WIN32\n";
		str += "#define WINAPI\n";
		str += "#define AFX_EXT_CLASS\n";
		str += "#define EXPORT32\n";
		str += "#define WINGDIAPI\n";
		str += "#define APIENTRY\n";
		str += "#endif\n";
		str += "#define BOOL bool\n";
		*/
		str += "//#include \"C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h\"\n";
		str += "//#include \"C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h\"\n";
		str += "//#include \"C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h\"\n";
		str += "//#include \"C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h\"\n";
		str += "//int main(int argc, char ** argv) \n";
		str += "//{\n";
		bodystr += element.nodeName+REF+" "+element.nodeName+stack[0]+" = "+NEW+" "+element.nodeName+"();\n";
		bodystr += this.subSerializeToString(element, mapToMethod, fieldTypes, 3, stack);
		bodystr += "//}\n";
		// MFInt32 declarations (for now)
		for (var co in this.code) {
			str += this.code[co];
		}

		str += bodystr;
		stack.shift();
		return str;
	},

	printSubArray : function (attr, attrType, type, values, co, j, lead, trail, element) {
		let str;
		let shim = NEW;
                if (type === "int32_t" || type === "int") {
                        for (var v in values) {
				if (values[v] > 0x7fffffff) {
				    values[v] = values[v] - 4294967296;
				}

				/*
                                if (values[v] > 4200000000) {
                                        values[v] = "0x"+parseInt(values[v]).toString(16).toUpperCase();
                                }
				*/
                        }
                }
                if (type === "float" || type === 'double') {
                        for (var v in values) {
				if (values[v].indexOf(".") < 0) {
					values[v] += ".0";
				}
			}
		}
                if (type === "boolean") {
                        for (var v in values) {
				if (values[v] === 'True') {
					values[v] = "true";
				} else if (values[v] === 'False') {
					values[v] = "false";
				}
			}
		}
		if (values[0] === "" || values[v] === null) {
			values.shift();
		}
		if (values.length >= 0 && (values[values.length-1] === "" || values[values.length-1] === null)) {
			values.pop();
		}
		if (attrType === "SFImage" && element.nodeName !== "PixelTexture") {
			let length = values[0]*values[1]*values[2];
			str = values[0]+", "+values[1]+", "+values[2]+", "+NEW+" "+type+"["+""/*(values.length-3)*/+"]{"+(values.slice(3, length+1).join(', '))+"}";
			this.code[co] = attrType+PTR+' '+attrType+co+' = '+NEW+' '+attrType+'();\n'
			this.code[co] += attrType+co+OBJ+'setValue('+str+');\n';
			this.codeno++;
			return attrType+co;
		}
		switch (type) {
		case "float":
		case "int32_t":
		case "double":
		case "boolean":
		case "CString":
			shim = "new";
			break;
		}
		if (attrType === "MFInt32") {
			switch (attr) {
			case "colorIndex":
				type = "int";  // converted from int32_t
			case "texCoordIndex":
			case "index":
			case "normalIndex":
			case "skinCoordIndex":
			case "coordIndex":
			case "vertexCount":
			case "order":
				str = shim+' '+type+'['+""/*values.length*/+']{'+lead+values.join(j)+trail+'}, '+values.length;
				if (attr == "colorIndex") {
					if (element.nodeName === "IndexedFaceSet") {
						str = ""+str;
					} else if (element.nodeName === "IndexedLineSet") {
						str = ""+str;
					}
				}
				return str;
			default:
				str = values.length+", "+shim+" "+type+"["+""/*(values.length)*/+"]{"+values.join(', ')+"}";
				this.code[co] = attrType+PTR+' '+attrType+co+' = '+NEW+' '+attrType+'();\n'
				this.code[co] += attrType+co+OBJ+'setValue('+str+');\n';
				this.codeno++;
				return attrType+co;
			}
		} else {
			return shim+' '+type+'['+""/*values.length*/+']{'+lead+values.join(j)+trail+'}'+(attrType.startsWith("MF") && type !== "boolean" ? ', '+values.length : '');
		}
	},

	printParentChild : function (element, node, cn, mapToMethod, n) {
		let prepre = OBJ;
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
				if (attrs.hasOwnProperty(a) && attrsa.nodeType === 2) {
					if (attr === "containerField") {
						if (method.charAt(0) >= 'a') {
							method = attrsa.nodeValue.charAt(0).toUpperCase() + attrsa.nodeValue.slice(1);
						}
						if (method === "Shaders") {
							addpre = "add";
							method = "Children";
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
		if (element.nodeName === 'Scene' && addpre+method === "setMetadata") {
			method = "Metadata"
			addpre = "add";
		}
		/*
		if (node.nodeName === 'LayerSet' && addpre+method === "addChild") {
			method = "LayerSet"
			addpre = "add";
		}
		*/
		/*
		if (addpre === 'add' && addpre+method === "addChildren") {
			method = "Child";
			addpre = "add";
		}
		*/
		return prepre+addpre+method;
	},
	stringValue : function(attrsa, attr, attrType, element) {
		let strval = "";
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
			strval = "CString("+strval+")"
			/*
			if (
				(element.nodeName === "fieldValue"         && attrsa.nodeName === "name") ||
				(element.nodeName === 'ExternProtoDeclare' && attrsa.nodeName === "name")) {
				strval = "&"+strval;
			}
			*/
		} else if (attrType === "SFInt32") {
			strval = nodeValue;
		} else if (attrType === "SFFloat") {
			strval = nodeValue+FLOAT_SUFFIX;
		} else if (attrType === "SFDouble") {
			strval = nodeValue+DOUBLE_SUFFIX;
		} else if (attrType === "SFBool") {
			strval = nodeValue;
		} else if (attrType === "SFTime") {
			strval = nodeValue+DOUBLE_SUFFIX;
		} else if (attrType === "MFTime") {
			strval = this.printSubArray(attr, attrType, "double", nodeValue.split(/[ ,\t\r\n]+/), this.codeno, DOUBLE_SUFFIX+',', '', DOUBLE_SUFFIX, element);
		} else if (attrType === "MFString") {
			nodeValue = nodeValue.replace(/^ *(.*) *$/, "$1");
			strval = this.printSubArray(attr, attrType, "CString",
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
				}), this.codeno, '"), CString("', 'CString("', '")', element); // ... json, lead, tail
		} else if (attrType === "SFImage" && element.nodeName === "PixelTexture") {
			strval = '"'+nodeValue+'"';
			strval = "CString("+strval+")"
		} else if (attrType === "MFInt32") {
			strval = this.printSubArray(attr, attrType, "int32_t", nodeValue.split(/[ ,\t\r\n]+/), this.codeno, ',', '', '', element);
			if (attr !== "texCoordIndex") {
				strval.replace(/MFInt32/, PTR+"MFInt32");
			}
		} else if (attrType === "MFImage") {
			strval = this.printSubArray(attr, attrType, "int", nodeValue.split(/[ ,\t\r\n]+/), this.codeno, ',', '', '', element);
		} else if (attrType === "SFImage") {
			strval = this.printSubArray(attr, attrType, "int", nodeValue.split(/[ ,\t\r\n]+/), this.codeno, ',', '', '', element);
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
			strval = this.printSubArray(attr, attrType, "float", nodeValue.split(/[ ,\t\r\n]+/), this.codeno, FLOAT_SUFFIX+',', '', FLOAT_SUFFIX, element);
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
			strval = this.printSubArray(attr, attrType, "double", nodeValue.split(/[ ,\t\r\n]+/), this.codeno, DOUBLE_SUFFIX+',', '', DOUBLE_SUFFIX, element);
		} else if (attrType === "MFBool") {
			strval = this.printSubArray(attr, attrType, "boolean", nodeValue.split(/[ ,\t\r\n]+/), this.codeno, ',', '', '', element);
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
				if (attrs.hasOwnProperty(a) && attrsa.nodeType === 2) {
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
					let startshim = "";
					switch (element.nodeName) {
						case "head":
						case "component":
						case "unit":
						case "meta":
						case "field":
						case "fieldValue":
						case "ExternProtoDeclare":
						case "ProtoDeclare":
						case "ProtoInterface":
						case "ProtoInstance":
						case "IS":
							break;
						default:
							if (attr === "name" || attr === "reference") {
								startshim = "X3DNode::";
							}
							break;
					}
					str += OBJ+startshim+"set"+method+"("+strval+");\n";
				}
			} catch (e) {
				console.error(e);
			}
			attrType = "";
		}
		for (let cn in element.childNodes) {
			let node = element.childNodes[cn];
			if (element.childNodes.hasOwnProperty(cn) && node.nodeType === 1) {
				stack.unshift(this.preno);
				this.preno++;
				let ch = "";

				let nodeName = node.nodeName;
				if (node.nodeName === "connect") {
				    nodeName = "Connect";
				} else if (node.nodeName === "BooleanSequencer") {
				    nodeName = "CBooleanSequencer";
				} else if (node.nodeName === "FontStyle") {
				    nodeName = "CFontStyle";
				} else if (node.nodeName === "Color") {
				    nodeName = "CColor";
				}

				ch += nodeName+REF+" "+node.nodeName+stack[0]+" = "+NEW+" "+nodeName+"();\n";

				let bodystr = this.subSerializeToString(node, mapToMethod, fieldTypes, n+1, stack);
				ch += bodystr;
				method = this.printParentChild(element, node, cn, mapToMethod, n);
				if (method.startsWith(OBJ+"setadd")) {
					method = OBJ+method.substr(OBJ.length+3);
				} else if (method.startsWith(OBJ+"setset")) {
					method = OBJ+method.substr(OBJ.length+3);
				}
				/*
				if (method.indexOf("addChildren") >= 0) {
					method = method.replace("Children", "Child");
				}
				*/
				let startshim = "";
				let shim = "";
				let endshim = "";
				if (element.nodeName === "TextureBackground" && node.nodeName === "ImageTexture") {
					shim = PTR;
				}
				if (element.nodeName === "Sound" && node.nodeName ==="AudioClip") {
					shim = PTR;
				}
				if (element.nodeName === "Sound" && node.nodeName ==="Source") {
					shim = REF;
				}
				if (element.nodeName === "GeoLOD" && method.endsWith("setGeoOrigin") && node.nodeName === "GeoOrigin") {
					shim = PTR;
				}
				if (element.nodeName === "ComposedCubeMapTexture") {
					// TODO for V3.3, do not do for V4.0
					method = method.replace("setTopTexture", "setTop");
					method = method.replace("setBottomTexture", "setBottom");
					method = method.replace("setFrontTexture", "setFront");
					method = method.replace("setBackTexture", "setBack");
					method = method.replace("setLeftTexture", "setLeft");
					method = method.replace("setRightTexture", "setRight");
					shim = PTR;
				}
				if (element.nodeName === "LayoutLayer" && (
					node.nodeName === "Layout" ||
					node.nodeName === "Viewport")) {
					shim = PTR;
				}
				method = method.replace("addParts", "setParts");  // TODO, need addParts, or collect in array
				method = method.replace("addRootNode", "setRootNode");  // TODO, need addParts, or collect in array
				method = method.replace("addFieldValue", "addChild");
				method = method.replace("addField", "addChild");
				method = method.replace("addJoints", "setJoints");
				method = method.replace("addDisplacers", "setDisplacers");
				method = method.replace("addConnect", "addChildren");
				method = method.replace("addComponent", "addChildren");
				method = method.replace("addShaders", "addChildren");
				method = method.replace("addLayers", "addChildren");
				method = method.replace("addLayerSet", "addChildren");

				/*
				if (element.nodeName === "CADFace") {
					shim = REF;
					method = method.replace("addChildren", "setShape");
				} else {
					method = method.replace("setShape", "addChildren");
				}
				*/
				method = method.replace("setProtoInterface", "addChildren");
				method = method.replace("setProtoBody", "addChildren");
				method = method.replace("setIS", "addChildren");
				method = method.replace("setAppearance", "addChildren");
				method = method.replace("setProxy", "addChildren");
				method = method.replace("setMaterial", "addChildren");
				/*
				method = method.replace("setGeometry", "addChildren");
				method = method.replace("setCoord", "addChildren");
				method = method.replace("setColor", "addChildren");
				method = method.replace("setTextureTransform", "addChildren");
				*/
				if (method.endsWith("setTexture")) {
					method = method.replace("setTexture", "addChild");
					switch (node.nodeName) {
					case "ImageTexture":
					case "PixelTexture":
						shim = REF;
						break;
					}
				} else if (method.endsWith("setGeometry") || method.endsWith("setSkin")) {
					switch (node.nodeName) {
					case "Transform":
					case "Text":
					case "GeoElevationGrid":
					case "IndexedLineSet":
					case "IndexedFaceSet":
					case "LineSet":
					case "IndexedTriangleSet":
					case "Cone":
					case "Cylinder":
					case "Extrusion":
					case "Shape":
						shim = REF;
						break;
					}
				} else if (method.endsWith("setColor")) {
					switch (node.nodeName) {
					case "Color":
						shim = REF;
						break;
					case "ColorRGBA":
						method = OBJ+"addChild";
						shim = REF;
						break;
					}
				} else if (method.endsWith("setNormal")) {
					switch (node.nodeName) {
					case "Normal":
						shim = REF;
						break;
					}
				} else if (element.nodeName === "GeoElevationGrid") {
					switch (node.nodeName) {
					case "TextureCoordinate":
						shim = PTR;
						break;
					}
				} else if (method.endsWith("setTexCoord")) {
					switch (node.nodeName) {
					case "TextureCoordinate":
						shim = REF;
						break;
					}
				} else if (element.nodeName === "IndexedLineSet") {
					switch (node.nodeName) {
					case "Coordinate":
						shim = REF;
						break;
					}
				} else if (element.nodeName === "LineSet") {
					switch (node.nodeName) {
					case "Coordinate":
						shim = PTR;
						break;
					}
				} else if (method.endsWith("setSkinCoord")) {
					switch (node.nodeName) {
					case "Coordinate":
						shim = REF;
						break;
					}
				} else if (method.endsWith("setCoord")) {
					switch (node.nodeName) {
					case "Coordinate":
						shim = REF;
						break;
					}
				} else if (method.endsWith("setJoints")) {
					switch (node.nodeName) {
					case "HAnimJoint":
						shim = REF;
						break;
					}
				} else if (method.endsWith("setSkeleton")) {
					switch (node.nodeName) {
					case "HAnimJoint":
						shim = REF;
						break;
					}
				} else if (method.endsWith("addChildren")) {
					switch (element.nodeName) {
					case "DISEntityManager":
						method = method.replace("addChildren", "setMapping");
						shim = REF;
						break;
					case "Layer":
					case "LayoutLayer":
					case "LayerSet":
					case "Shape":
					case "ProtoBody":
					case "Appearance":
						shim = REF;
					case "head":
					case "field":
					case "fieldValue":
					case "ExternProtoDeclare":
					case "ProtoDeclare":
					case "ProtoInterface":
					case "ProtoInstance":
					case "IS":
					case "Scene":
					case "HAnimSegment":
					case "HAnimSite":
						method = method.replace("addChildren", "addChild");
						break;
					}
					switch (node.nodeName) {
					case "IS":
						method = method.replace("addChildren", "addChild");
						break;
					}
					switch (node.nodeName) {
					case "GeoLOD":
					case "GeoElevationGrid":
					case "HAnimHumanoid":
					case "HAnimJoint":
					case "Appearance":
					case "Group":
					case "Script":
					case "Transform":
						shim = REF;
						break;
					}
					switch (element.nodeName) {
					case "CADAssembly":
					case "Group":
					case "Transform":
					case "Switch":
					case "Anchor":
					case "Billboard":
					case "Scene":
						method = method.replace("addChildren", "addChild");
						shim = REF;
						break;
					}
				}
				switch (node.nodeName) {
				case "ROUTE":
				case "FontStyle":
					shim = REF;
					break;
				}
				switch (element.nodeName) {
					case "CADAssembly":
					case "Group":
					case "Transform":
					case "Switch":
					case "Anchor":
					case "Billboard":
					case "HAnimSegment":
					case "HAnimSite":
					case "field":
					case "fieldValue":
						switch (node.nodeName) {
						case "Shape":
						case "Extrusion":
						case "Coordinate":
							shim = REF;
							break;
						case "CADPart":
						case "CADAssembly":
							startshim = OBJ+"X3DGroupingNode::";
							shim = "static_cast<X3DGroupingNode*>("+REF;
							endshim = ")";
							break;
						}
						break;
					case "Scene":
						switch (node.nodeName) {
						case "Shape":
							shim = REF;
							break;
						case "CADPart":
						case "CADAssembly":
							startshim = OBJ+"X3DBaseNode::";
							shim = "static_cast<X3DGroupingNode*>("+REF;
							endshim = ")";
							break;
						}
						break;
				}
				ch += element.nodeName+stack[1];
				// console.log(method, node.nodeName, element.nodeName);
				/*
				if ((method.endsWith("setName") && element.nodeName === "fieldValue")) {
					shim = REF;
				}
				*/
				if (
					(method === OBJ+"setName" && element.nodeName === "fieldValue") ||
					node.nodeName === "Background" ||
					node.nodeName === "Box" ||
					node.nodeName === "ComposedCubeMapTexture" ||
					node.nodeName === "ComposedShader" ||
					node.nodeName === "connect" ||
					node.nodeName === "DirectionalLight" ||
					node.nodeName === "field" ||
					node.nodeName === "fieldValue" ||
					node.nodeName === "HAnimSegment" ||
					node.nodeName === "HAnimSite" ||
					node.nodeName === "head" ||
					node.nodeName === "IS" ||
					node.nodeName === "Material" ||
					node.nodeName === "meta" ||
					node.nodeName === "component" ||
					node.nodeName === "NavigationInfo" ||
					node.nodeName === "ExternProtoDeclare" ||
					node.nodeName === "ProtoDeclare" ||
					node.nodeName === "ProtoInterface" ||
					node.nodeName === "ProtoBody" ||
					node.nodeName === "ProtoInstance" ||
					node.nodeName === "PointLight" ||
					node.nodeName === "Scene" ||
					node.nodeName === "ShaderPart" ||
					node.nodeName === "Sphere" ||
					node.nodeName.endsWith("Sensor") ||
					node.nodeName === "Collision" ||
					node.nodeName.endsWith("Interpolator") ||
					node.nodeName === "Viewpoint" ||
					node.nodeName === "WorldInfo"
				) {
					shim = REF;
				}
				if ((method.endsWith("setValue") && node.nodeName.startsWith("Metadata") && element.nodeName === "MetadataSet")) {
					shim = "(X3DNode *)&";
				}
				if (method.endsWith("setMetadata")) {
					shim = REF;
				}
				if (startshim.startsWith(OBJ)) {
					method = method.substring(OBJ.length);
				}
				ch += startshim+method+"("+shim+node.nodeName+stack[0]+endshim+");\n\n";
				str += ch;
				stack.shift();
			} else if (element.childNodes.hasOwnProperty(cn) && node.nodeType === 8) {
				let y = node.nodeValue.
					replace(/\\/g, '\\\\').
					replace(/"/g, '\\"');
				// str += OBJ+"addComments(CommentsBlock(\"\"\""+y+"\"\"\")) \\\n";
				str += y.split("\r\n").map(function(x) {
					return x.replace(/^/g, '//');
					}).join("\r\n");
				str += "\r\n";
				if (y !== node.nodeValue) {
					// console.error("Cpp Comment Replacing "+node.nodeValue+" with "+y);
				}
			} else if (element.childNodes.hasOwnProperty(cn) && node.nodeType === 4) {
				str += "\n//"+element.nodeName+stack[0];
				str += OBJ+'setSourceCode(CString("'+node.nodeValue.split(/[\r\n]+/).map(function(x) {
					return x.
					        replace(/\\/g, '\\\\').
						replace(/"/g, '\\"')
						replace(/$/g, '\\')
					;
					}).join('")+\n//_T("')+'"));\n';
			}
	        		
		}
		return str;
	}
};
