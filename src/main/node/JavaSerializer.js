"use strict";
/**
 * JavaSerializer.js
 * Serializes X3D Document Object Model (DOM) to Java (X3DJSAIL).
 * Enhanced with support for breaking up code generation into modular helper methods,
 * preventing JVM method bytecode size overflow (64KB limit, "error: code too large")
 * on large scenes such as Tufani8Final.
 */
const DOUBLE_SUFFIX = 'd';
const FLOAT_SUFFIX = 'f ';

export default function JavaSerializer(options) {
	this.code = [];
	this.codeno = 0;
	this.precode = [];
	this.preno = 0;
	this.postcode = [];
	this.methods = [];
	this.methodno = 0;
	this.options = Object.assign({
		breakUpMethods: true,
		maxChildrenPerMethod: 50,
		maxArrayChunksPerMethod: 50
	}, options);
}

JavaSerializer.prototype = {
	serializeToString : function(json, element, clazz, mapToMethod, fieldTypes, options) {
		try {
			if (options) {
				this.options = Object.assign({}, this.options, options);
			}
			this.code = [];
			this.codeno = 0;
			this.precode = [];
			this.preno = 0;
			this.postcode = [];
			this.methods = [];
			this.methodno = 0;
			var str = "";
			var pc = clazz.replace(/-|\.| /g, "$");
			var c = pc.lastIndexOf("/");
			if (pc.lastIndexOf("\\") > c) {
				c = pc.lastIndexOf("\\");
			}
			var clz = pc.substr(c+1);
			clz = clz.replace(/^([0-9].*|default$)/, "_$1");
			str += "package net.coderextreme"+clazz.substring(0, clazz.lastIndexOf('/')).replace(/^\.\./, "").replace(/\//g, '.')+";\n";
			str += "import org.web3d.x3d.jsail.*;\n";
			str += "import org.web3d.x3d.jsail.CADGeometry.*;\n";
			str += "import org.web3d.x3d.jsail.Core.*;\n";
			str += "import org.web3d.x3d.jsail.CubeMapTexturing.*;\n";
			str += "import org.web3d.x3d.jsail.DIS.*;\n";
			str += "import org.web3d.x3d.jsail.EnvironmentalEffects.*;\n";
			str += "import org.web3d.x3d.jsail.EnvironmentalSensor.*;\n";
			str += "import org.web3d.x3d.jsail.EventUtilities.*;\n";
			str += "import org.web3d.x3d.jsail.Followers.*;\n";
			str += "import org.web3d.x3d.jsail.Geometry2D.*;\n";
			str += "import org.web3d.x3d.jsail.Geometry3D.*;\n";
			str += "import org.web3d.x3d.jsail.Geospatial.*;\n";
			str += "import org.web3d.x3d.jsail.Grouping.*;\n";
			str += "import org.web3d.x3d.jsail.HAnim.*;\n";
			str += "import org.web3d.x3d.jsail.Interpolation.OrientationInterpolator;\n";
			str += "import org.web3d.x3d.jsail.Interpolation.*;\n";
			str += "import org.web3d.x3d.jsail.KeyDeviceSensor.*;\n";
			str += "import org.web3d.x3d.jsail.Layering.*;\n";
			str += "import org.web3d.x3d.jsail.Layout.*;\n";
			str += "import org.web3d.x3d.jsail.Lighting.*;\n";
			str += "import org.web3d.x3d.jsail.NURBS.*;\n";
			str += "import org.web3d.x3d.jsail.Navigation.*;\n";
			str += "import org.web3d.x3d.jsail.Networking.*;\n";
			str += "import org.web3d.x3d.jsail.ParticleSystems.*;\n";
			str += "import org.web3d.x3d.jsail.Picking.*;\n";
			str += "import org.web3d.x3d.jsail.PointingDeviceSensor.*;\n";
			str += "import org.web3d.x3d.jsail.Rendering.*;\n";
			str += "import org.web3d.x3d.jsail.RigidBodyPhysics.*;\n";
			str += "import org.web3d.x3d.jsail.Scripting.*;\n";
			str += "import org.web3d.x3d.jsail.Shaders.*;\n";
			str += "import org.web3d.x3d.jsail.Shape.*;\n";
			str += "import org.web3d.x3d.jsail.Sound.*;\n";
			str += "import org.web3d.x3d.jsail.Text.*;\n";
			str += "import org.web3d.x3d.jsail.Texturing3D.*;\n";
			str += "import org.web3d.x3d.jsail.Texturing.*;\n";
			str += "import org.web3d.x3d.jsail.Time.*;\n";
			str += "import org.web3d.x3d.jsail.VolumeRendering.*;\n";
			str += "import org.web3d.x3d.jsail.fields.*;\n";
			str += "import java.util.ArrayList;\n";
			str += "import java.util.List;\n";
			str += "import net.coderextreme.X3DRoots;\n";
			str += "public class "+clz+" implements X3DRoots {\n";
			str += "  public static void main(String[] args) {\n";
			str += "    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);\n";
			str += "    ConfigurationProperties.setDeleteIntermediateFiles(false);\n";
			str += "    ConfigurationProperties.setStripTrailingZeroes(true);\n";
			str += "    ConfigurationProperties.setStripDefaultAttributes(true);\n";
			str += "    "+element.nodeName+" model = new "+clz+"().getRootNodeList().get(0); // only get one root node\n";
			str += "    System.out.print(model.validationReport().trim());\n";
			str += "    model.toFileX3D(\""+clazz+".new.java.x3d\");\n";
			str += "    model.toFileJSON(\""+clazz+".new.java.x3dj\");\n";
			str += "    }\n";
			str += "    public List<X3D> getRootNodeList() {\n";
			str += "    	List<X3D> list = new ArrayList<X3D>(1);\n";
			str += "    	list.add(initialize());\n";
			str += "    	return list;\n";
			str += "    }\n";

			// We figure out the body first and print it out later
			var body = "      "+element.nodeName+" "+element.nodeName+0+" =  new "+element.nodeName+"()";
			body += this.subSerializeToString(element, mapToMethod, fieldTypes, 3, []);

			// Declare ProtoInstance variables at class level if breaking up methods,
			// or inline inside initialize() if monolithic.
			if (this.options && this.options.breakUpMethods) {
				for (var po in this.precode) {
					str += "  private " + this.precode[po];
				}
			}

			str += "    public "+element.nodeName+" initialize() {\n";
			if (!this.options || !this.options.breakUpMethods) {
				for (var po in this.precode) {
					str += this.precode[po];
				}
			}
			str += body;
			str += ";\n";
			for (var postno = 0;  postno < this.postcode.length; postno++) {
				if (typeof this.postcode[postno] !== 'undefined') {
					str += this.postcode[postno];
				}
			}
			str += "    return "+element.nodeName+0+";\n";
			str += "    }\n";

			// Print all modular helper methods generated when breaking up code
			if (this.methods && this.methods.length > 0) {
				for (var m = 0; m < this.methods.length; m++) {
					str += this.methods[m];
				}
			}

			// Print inner array classes
			for (var co in this.code) {
				str += this.code[co];
			}
			str += "}\n";
			return str;
		} catch (e) {
			console.error(e);
			return "";
		}
	},
	printSubArray : function (attrType, type, values, co, j, lead, trail) {
		if (attrType.startsWith("MF")) {
			var chunkRefs = [];
			for (var i = 0; i < values.length; i += 840) {
				var max = values.length;
				if (i + 840 < max) {
					max = i + 840;
				}
				var curId = this.codeno++;
				var chunkClassName = attrType + curId;
				var chunkCode = "private class " + chunkClassName + " {\n";
				chunkCode +=  "  private org.web3d.x3d.jsail.fields." + attrType + " getArray() {\n";
				chunkCode += "    return new org.web3d.x3d.jsail.fields." + attrType + "(new " + type + "[] {" + lead + values.slice(i, max).join(j) + trail + "});\n";
				chunkCode += "  }\n";
				chunkCode += "}\n";
				this.code.push(chunkCode);
				chunkRefs.push("new " + chunkClassName + "().getArray()");
			}
			var maxChunks = (this.options && this.options.maxArrayChunksPerMethod) || 50;
			if (chunkRefs.length <= maxChunks || !this.options || !this.options.breakUpMethods) {
				var str = "";
				for (var k = 0; k < chunkRefs.length; k++) {
					if (k === 0) {
						str += chunkRefs[k];
					} else {
						str += ".append("+chunkRefs[k]+")";
					}
				}
				return str;
			} else {
				// Group large arrays into intermediate combiner classes so no single method exceeds limits
				var groupRefs = [];
				for (var g = 0; g < chunkRefs.length; g += maxChunks) {
					var gEnd = Math.min(g + maxChunks, chunkRefs.length);
					var groupId = this.codeno++;
					var groupName = attrType + "Group" + groupId;
					var groupCode = "private class " + groupName + " {\n";
					groupCode += "  private org.web3d.x3d.jsail.fields." + attrType + " getArray() {\n";
					groupCode += "    return " + chunkRefs[g];
					for (var k = g + 1; k < gEnd; k++) {
						groupCode += "\n      .append(" + chunkRefs[k] + ")";
					}
					groupCode += ";\n";
					groupCode += "  }\n";
					groupCode += "}\n";
					this.code.push(groupCode);
					groupRefs.push("new " + groupName + "().getArray()");
				}
				var str = "";
				for (var k = 0; k < groupRefs.length; k++) {
					if (k === 0) {
						str += groupRefs[k];
					} else {
						str += ".append("+groupRefs[k]+")";
					}
				}
				return str;
			}
		} else {
			if (type === "int") {
				for (var v in values) {
					if (values[v] > 4200000000) {
						values[v] = "0x"+parseInt(values[v]).toString(16).toUpperCase();
					}
				}
			}
			return "new "+type+"[] {"+lead+values.join(j)+trail+"}";
		}
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
				if (attrs.hasOwnProperty(a) && attrs[a].nodeType === 2) {
					var attr = attrs[a].nodeName;
					if (attr === "containerField") {
						if (method === "setShaders") {
							method = "addShaders";
							addpre = "";
						} else {
							if (attrs[a].nodeValue === "joints" 
								|| attrs[a].nodeValue === "sites" 
								|| attrs[a].nodeValue === "segments" 
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
			method = "IS";
			addpre = "set";
		}
		if (addpre+method === "setPoses") {
			method = "Child";
			addpre = "add";
		}
		if (addpre+method === "setChildren") {
			method = "Child";
			addpre = "add";
		}
		if (addpre+method === "addPoses") {
			method = "Child";
			addpre = "add";
		}
		if (addpre+method === "setJoints") {
			method = "Joints";
			addpre = "add";
		}
		if (addpre+method === "setViewpoints") {
			method = "Viewpoints";
			addpre = "add";
		}
		if (addpre+method === "setSkeleton") {
			method = "Skeleton";
			addpre = "add";
		}
		if (addpre+method === "setSkin") {
			method = "Skin";
			addpre = "add";
		}
		if (element.nodeName === 'Transform' && addpre+method === "addSkin") {
			method = "Child";
			addpre = "add";
		}
		if (addpre+method === "setValue") {
			method = "Value";
			addpre = "add";
		}
		if (addpre+method === "setBack") {
			method = "BackTexture";
			addpre = "set";
		}
		if (addpre+method === "setFront") {
			method = "FrontTexture";
			addpre = "set";
		}
		if (addpre+method === "setLeft") {
			method = "LeftTexture";
			addpre = "set";
		}
		if (addpre+method === "setRight") {
			method = "RightTexture";
			addpre = "set";
		}
		if (addpre+method === "setTop") {
			method = "TopTexture";
			addpre = "set";
		}
		if (addpre+method === "setBottom") {
			method = "BottomTexture";
			addpre = "set";
		}
		if (element.nodeName === 'Scene' && addpre+method === "setMetadata") {
			method = "Metadata";
			addpre = "add";
		}
		if (node.nodeName === 'MetadataSet' && addpre+method === "addValue") {
			method = "Metadata";
			addpre = "set";
		}
		if (node.nodeName === 'MetadataString' && addpre+method === "addValue") {
			method = "Metadata";
			addpre = "set";
		}
		if (element.nodeName === 'HAnimHumanoid' && addpre+method === "addValue") {
			method = "Metadata";
			addpre = "set";
		}
		if (node.nodeName === 'LayerSet' && addpre+method === "addChild") {
			method = "LayerSet";
			addpre = "add";
		}
		if (element.nodeName === "field" && addpre+method === "addJoints") {
			method = "Child";
			addpre = "add";
		}
		return prepre+addpre+method;
	},
	getAttributesString : function(element, fieldTypes) {
		var str = "";
		var fieldAttrType = "";
		for (var a in element.attributes) {
			var attrs = element.attributes;
			try {
				parseInt(a);
				if (attrs.hasOwnProperty(a) && attrs[a].nodeType === 2) {
					var attr = attrs[a].nodeName;
					if (attr === "type") {
						fieldAttrType = attrs[a].nodeValue;
						var method = attr;
						var strval = "";
						if (element.nodeName === 'NavigationInfo' ) {
							strval = "\""+attrs[a].nodeValue.replace(/\"/g, '\\\"')+"\"";
						} else if (attrs[a].nodeValue !== "VERTEX" && attrs[a].nodeValue !== "FRAGMENT") {
							strval = '"'+attrs[a].nodeValue+'"';
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
		}
		var DEF = undefined;
		var USE = undefined;
		for (var a in element.attributes) {
			var attrs = element.attributes;
			try {
				parseInt(a);
				if (attrs.hasOwnProperty(a) && attrs[a].nodeType === 2) {
					var attr = attrs[a].nodeName;
					if (attr === "xmlns:xsd" || attr === "xsd:noNamespaceSchemaLocation" || attr === 'containerField' || attr === 'type') {
						continue;
					}
					if (attr === "DEF") {
						DEF = attrs[a].nodeValue;
					}
					if (attr === "USE") {
						USE = attrs[a].nodeValue;
					}
					var method = attr;
					var attrType = "SFString";
					if (typeof fieldTypes[element.nodeName] !== 'undefined') {
						attrType = fieldTypes[element.nodeName][attr];
					}
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
					} else if (attr === "readInterval") {
						strval = "new SFTime("+attrs[a].nodeValue+DOUBLE_SUFFIX+")";
					} else if (attrType === "SFString") {
						if (attr === "accessType") {
							strval = "field.ACCESSTYPE_"+attrs[a].nodeValue.toUpperCase();
						} else {
							strval = 'new SFString("'+attrs[a].nodeValue.
								replace(/(\\+)([^&\\"]|$)/g, '$1$1$2').
								replace(/\r\\\\n/g, ' ').
								replace(/\n/g, ' ').
								replace(/\r/g, ' ').
								replace(/\\?"/g, "\\\"")
								+'")';
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
									replace(/""/g, '\\"\\"').
									replace(/&quot;&quot;/g, '\\"\\"').
									replace(/\\n/g, '\\n');
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
					if (attr === "style" && element.nodeName != "FontStyle" ) {
						method = "setCssStyle";
					}
					str += '.'+method+"("+strval+")";
				}
			} catch (e) {
				console.error(e);
			}
		}
		return { str: str, DEF: DEF, USE: USE };
	},
	createNodeMethod : function(element, node, cn, mapToMethod, fieldTypes, parentDEF, parentUSE, stack) {
		this.methodno++;
		var methodId = this.methodno;
		var methodName = "get" + node.nodeName + "_" + methodId;

		var DEFpar = "";
		if (node.nodeName.startsWith("HAnim")) {
			if (typeof parentUSE === "undefined" && typeof parentDEF !== "undefined") {
				DEFpar = '"' + parentDEF + '"';
			}
		}

		var attrRes = this.getAttributesString(node, fieldTypes);
		var nodeDEF = attrRes.DEF;
		var nodeUSE = attrRes.USE;
		var attrStr = attrRes.str;

		var childElementNodes = [];
		for (var k in node.childNodes) {
			var chNode = node.childNodes[k];
			if (node.childNodes.hasOwnProperty(k) && chNode.nodeType === 1) {
				childElementNodes.push({ node: chNode, cn: k });
			}
		}

		var maxChildren = (this.options && this.options.maxChildrenPerMethod) || 50;

		var assign = "";
		if (node.nodeName === "ProtoInstance") {
			assign = node.nodeName + stack[0] + " = ";
		}

		if (childElementNodes.length > maxChildren) {
			// Chunk children additions into adder helper methods so container methods stay small
			var chunkAdders = [];
			for (var cStart = 0; cStart < childElementNodes.length; cStart += maxChildren) {
				var cEnd = Math.min(cStart + maxChildren, childElementNodes.length);
				this.methodno++;
				var adderId = this.methodno;
				var adderName = "add" + node.nodeName + "Children_" + adderId;
				var adderCode = "  private void " + adderName + "(" + node.nodeName + " parent) {\n";
				adderCode += "    parent";

				for (var i = cStart; i < cEnd; i++) {
					var chNode = childElementNodes[i].node;
					var chCn = childElementNodes[i].cn;

					if (chNode.nodeName === "ProtoInstance") {
						stack.unshift(this.preno);
						this.preno++;
						this.precode[stack[0]] = chNode.nodeName + " " + chNode.nodeName + stack[0] + " = null;\n";
					}

					var chCall = this.printParentChild(node, chNode, chCn, mapToMethod, 3);
					var chMethodName = this.createNodeMethod(node, chNode, chCn, mapToMethod, fieldTypes, nodeDEF, nodeUSE, stack);
					chCall += "(" + chMethodName + "())";
					adderCode += chCall;

					if (chNode.nodeName === "ProtoInstance") {
						stack.shift();
					}
				}
				adderCode += ";\n  }\n";
				this.methods.push(adderCode);
				chunkAdders.push(adderName);
			}

			var methodDef = "  public " + node.nodeName + " " + methodName + "() {\n";
			methodDef += "    " + node.nodeName + " node = " + assign + "new " + node.nodeName + "(" + DEFpar + ")" + attrStr + ";\n";
			for (var aIdx = 0; aIdx < chunkAdders.length; aIdx++) {
				methodDef += "    " + chunkAdders[aIdx] + "(node);\n";
			}
			methodDef += "    return node;\n  }\n";
			this.methods.push(methodDef);
		} else {
			// Normal node: chain its own attributes + children calls directly in return statement
			var methodDef = "  public " + node.nodeName + " " + methodName + "() {\n";
			methodDef += "    return " + assign + "new " + node.nodeName + "(" + DEFpar + ")";
			methodDef += attrStr;

			for (var i = 0; i < childElementNodes.length; i++) {
				var chNode = childElementNodes[i].node;
				var chCn = childElementNodes[i].cn;

				if (chNode.nodeName === "ProtoInstance") {
					stack.unshift(this.preno);
					this.preno++;
					this.precode[stack[0]] = chNode.nodeName + " " + chNode.nodeName + stack[0] + " = null;\n";
				}

				var chCall = this.printParentChild(node, chNode, chCn, mapToMethod, 3);
				if (node.nodeName === "ProtoInstance" && chNode.nodeName === "fieldValue") {
					var fvRes = this.getAttributesString(chNode, fieldTypes);
					var fvVal = "(new " + chNode.nodeName + "()" + fvRes.str + ")";
					if (typeof this.postcode[stack[0]] === "undefined") {
						this.postcode[stack[0]] = "";
					}
					this.postcode[stack[0]] += node.nodeName + stack[0] + chCall + fvVal + ";\n";
				} else {
					var chMethodName = this.createNodeMethod(node, chNode, chCn, mapToMethod, fieldTypes, nodeDEF, nodeUSE, stack);
					chCall += "(" + chMethodName + "())";
					methodDef += chCall;
				}

				if (chNode.nodeName === "ProtoInstance") {
					stack.shift();
				}
			}

			// Comments & CDATA
			for (var k in node.childNodes) {
				var chNode = node.childNodes[k];
				if (node.childNodes.hasOwnProperty(k) && chNode.nodeType === 8) {
					var y = chNode.nodeValue.replace(/\\/g, "\\\\").replace(/\"/g, "\\\"");
					methodDef += "\n      .addComments(new CommentsBlock(\"" + y.split("\n").join('\\n\"+\n\"') + "\"))";
				} else if (node.childNodes.hasOwnProperty(k) && chNode.nodeType === 4) {
					methodDef += "\n      .setSourceCode(\"" + chNode.nodeValue.split(/[\r\n][\r\n]?/).map(function(x) {
						return x.replace(/\\/g, "\\\\").replace(/\"/g, "\\\"");
					}).join('\\n\"+\n\"') + "\")";
				}
			}

			methodDef += ";\n  }\n";
			this.methods.push(methodDef);
		}

		return methodName;
	},
	subSerializeToString : function(element, mapToMethod, fieldTypes, n, stack) {
		if (!this.options || !this.options.breakUpMethods) {
			// Legacy monolithic behavior
			var str = "";
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
							var strval = "";
							if (element.nodeName === 'NavigationInfo' ) {
								strval = "\""+attrs[a].nodeValue.replace(/\"/g, '\\\"')+"\"";
							} else if (attrs[a].nodeValue !== "VERTEX" && attrs[a].nodeValue !== "FRAGMENT") {
								strval = '"'+attrs[a].nodeValue+'"';
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
			var DEF = undefined;
			var USE = undefined;
			for (var a in element.attributes) {
				var attrs = element.attributes;
				try {
					parseInt(a);
					if (attrs.hasOwnProperty(a) && attrs[a].nodeType === 2) {
						var attr = attrs[a].nodeName;
						if (attr === "xmlns:xsd" || attr === "xsd:noNamespaceSchemaLocation" || attr === 'containerField' || attr === 'type') {
							continue;
						}
						if (attr === "DEF") {
							DEF = attrs[a].nodeValue;
						}
						if (attr === "USE") {
							USE = attrs[a].nodeValue;
						}
						var method = attr;
						var attrType = "SFString";
						if (typeof fieldTypes[element.nodeName] !== 'undefined') {
							attrType = fieldTypes[element.nodeName][attr];
						}
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
						} else if (attr === "readInterval") {
							strval = "new SFTime("+attrs[a].nodeValue+DOUBLE_SUFFIX+")";
						} else if (attrType === "SFString") {
							if (attr === "accessType") {
								strval = "field.ACCESSTYPE_"+attrs[a].nodeValue.toUpperCase();
							} else {
								strval = 'new SFString("'+attrs[a].nodeValue.
									replace(/(\\+)([^&\\"]|$)/g, '$1$1$2').
									replace(/\r\\\\n/g, ' ').
									replace(/\n/g, ' ').
									replace(/\r/g, ' ').
									replace(/\\?"/g, "\\\"")
									+'")';
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
										replace(/""/g, '\\"\\"').
										replace(/&quot;&quot;/g, '\\"\\"').
										replace(/\\n/g, '\\n');
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
						if (attr === "style" && element.nodeName != "FontStyle" ) {
							method = "setCssStyle";
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
				if (element.childNodes.hasOwnProperty(cn) && node.nodeType === 1) {
					if (node.nodeName === "ProtoInstance") {
						stack.unshift(this.preno);
						this.preno++;
						this.precode[stack[0]] = node.nodeName+" "+node.nodeName+stack[0]+" = null;\n";
					}
					if (element.nodeName === "ProtoInstance" && node.nodeName === "fieldValue") {
						if (typeof this.postcode[stack[0]] === 'undefined') {
							this.postcode[stack[0]] = "";
						}
						this.postcode[stack[0]] += element.nodeName+stack[0];
					}
					var ch = this.printParentChild(element, node, cn, mapToMethod, n);
					ch += "(";
					if (node.nodeName === "ProtoInstance") {
						ch += node.nodeName+stack[0] + " = ";
					}
					var DEFpar = "";
					if (node.nodeName.startsWith("HAnim")) {
						if (typeof USE === 'undefined' && typeof DEF !== 'undefined') {
							DEFpar = '"'+DEF+'"';
						}
					}
					ch += "new "+node.nodeName+'('+DEFpar+')';
					ch += this.subSerializeToString(node, mapToMethod, fieldTypes, n+1, stack);
					ch += ")";
					if (element.nodeName === "ProtoInstance" && node.nodeName === "fieldValue") {
						this.postcode[stack[0]] += ch+";\n";
					} else {
						str += ch;
					}
					if (node.nodeName === "ProtoInstance") {
						stack.shift();
					}
				} else if (element.childNodes.hasOwnProperty(cn) && node.nodeType === 8) {
					var y = node.nodeValue.
						replace(/\\/g, '\\\\').
						replace(/"/g, '\\"');
					str += "\n"+("  ".repeat(n))+".addComments(new CommentsBlock(\""+y.split("\n").join('\\n\"+\n\"')+"\"))";
				} else if (element.childNodes.hasOwnProperty(cn) && node.nodeType === 4) {
					str += "\n"+("  ".repeat(n))+".setSourceCode(\""+node.nodeValue.split(/[\r\n][\r\n]?/).map(function(x) {
						return x.
						        replace(/\\/g, '\\\\').
							replace(/"/g, '\\"')
						;
						}).join('\\n\"+\n\"')+'")';
				}
			}
			return str;
		}

		// When breaking up methods: serialize root element attributes and route children to createNodeMethod
		var attrRes = this.getAttributesString(element, fieldTypes);
		var str = attrRes.str;
		var DEF = attrRes.DEF;
		var USE = attrRes.USE;

		for (var cn in element.childNodes) {
			var node = element.childNodes[cn];
			if (element.childNodes.hasOwnProperty(cn) && node.nodeType === 1) {
				var ch = this.printParentChild(element, node, cn, mapToMethod, n);
				var methodName = this.createNodeMethod(element, node, cn, mapToMethod, fieldTypes, DEF, USE, stack);
				ch += "(" + methodName + "())";
				str += ch;
			} else if (element.childNodes.hasOwnProperty(cn) && node.nodeType === 8) {
				var y = node.nodeValue.
					replace(/\\/g, '\\\\').
					replace(/"/g, '\\"');
				str += "\n"+("  ".repeat(n))+".addComments(new CommentsBlock(\""+y.split("\n").join('\\n\"+\n\"')+"\"))";
			} else if (element.childNodes.hasOwnProperty(cn) && node.nodeType === 4) {
				str += "\n"+("  ".repeat(n))+".setSourceCode(\""+node.nodeValue.split(/[\r\n][\r\n]?/).map(function(x) {
					return x.
					        replace(/\\/g, '\\\\').
						replace(/"/g, '\\"')
					;
					}).join('\\n\"+\n\"')+'")';
			}
		}
		return str;
	}
};
