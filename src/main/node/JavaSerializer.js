"use strict";

const DOUBLE_SUFFIX = 'd';
const FLOAT_SUFFIX = 'f';

export default function JavaSerializer() {
this.code = [];
this.codeno = 0;
this.precode = [];
this.preno = 0;
this.postcode = [];
}


JavaSerializer.prototype = {
	serializeToString : function(json, element, clazz, mapToMethod, fieldTypes) {
		try {
			// console.error(clazz);
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
			str += "package net.coderextreme"+clazz.substring(0, clazz.lastIndexOf('/')).replace(/^\.\./, "").replace(/\//g, '.')+";\n";
			// console.error(pkg, clz);
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
			/*
			str += "import org.web3d.x3d.sai.*;\n";
			str += "import org.web3d.x3d.sai.CADGeometry.*;\n";
			str += "import org.web3d.x3d.sai.Core.*;\n";
			str += "import org.web3d.x3d.sai.CubeMapTexturing.*;\n";
			str += "import org.web3d.x3d.sai.DIS.*;\n";
			str += "import org.web3d.x3d.sai.EnvironmentalEffects.*;\n";
			str += "import org.web3d.x3d.sai.EnvironmentalSensor.*;\n";
			str += "import org.web3d.x3d.sai.EventUtilities.*;\n";
			str += "import org.web3d.x3d.sai.Followers.*;\n";
			str += "import org.web3d.x3d.sai.Geometry2D.*;\n";
			str += "import org.web3d.x3d.sai.Geometry3D.*;\n";
			str += "import org.web3d.x3d.sai.Geospatial.*;\n";
			str += "import org.web3d.x3d.sai.Grouping.*;\n";
			str += "import org.web3d.x3d.sai.HAnim.*;\n";
			str += "import org.web3d.x3d.sai.Interpolation.*;\n";
			str += "import org.web3d.x3d.sai.KeyDeviceSensor.*;\n";
			str += "import org.web3d.x3d.sai.Layering.*;\n";
			str += "import org.web3d.x3d.sai.Layout.*;\n";
			str += "import org.web3d.x3d.sai.Lighting.*;\n";
			str += "import org.web3d.x3d.sai.NURBS.*;\n";
			str += "import org.web3d.x3d.sai.Navigation.*;\n";
			str += "import org.web3d.x3d.sai.Networking.*;\n";
			str += "import org.web3d.x3d.sai.ParticleSystems.*;\n";
			str += "import org.web3d.x3d.sai.Picking.*;\n";
			str += "import org.web3d.x3d.sai.PointingDeviceSensor.*;\n";
			str += "import org.web3d.x3d.sai.Rendering.*;\n";
			str += "import org.web3d.x3d.sai.RigidBodyPhysics.*;\n";
			str += "import org.web3d.x3d.sai.Scripting.*;\n";
			str += "import org.web3d.x3d.sai.Shaders.*;\n";
			str += "import org.web3d.x3d.sai.Shape.*;\n";
			str += "import org.web3d.x3d.sai.Sound.*;\n";
			str += "import org.web3d.x3d.sai.Text.*;\n";
			str += "import org.web3d.x3d.sai.Texturing3D.*;\n";
			str += "import org.web3d.x3d.sai.Texturing.*;\n";
			str += "import org.web3d.x3d.sai.Time.*;\n";
			str += "import org.web3d.x3d.sai.VolumeRendering.*;\n";
			*/
			str += "import java.util.ArrayList;\n";
			str += "import java.util.List;\n";
			str += "import net.coderextreme.X3DRoots;\n";
			str += "public class "+clz+" implements X3DRoots {\n";
			str += "  public static void main(String[] args) {\n";
			str += "    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);\n";
			str += "    ConfigurationProperties.setDeleteIntermediateFiles(false);\n";
			str += "    ConfigurationProperties.setStripTrailingZeroes(true);\n";
			str += "    ConfigurationProperties.setStripDefaultAttributes(true);\n";
			str += "    "+element.nodeName+" model = new "+clz+"().getRootNodeList().get(0); // only get one root node\n" 
			str += "    System.out.print(model.validationReport().trim());\n"
			str += "    model.toFileX3D(\""+clazz+".new.java.x3d\");\n";
			str += "    model.toFileJSON(\""+clazz+".new.java.json\");\n";
			str += "    }\n";
			str += "    public List<X3D> getRootNodeList() {\n";
			str += "    	List<X3D> list = new ArrayList<X3D>(1);\n";
			str += "    	list.add(initialize());\n";
			str += "    	return list;\n";
			str += "    }\n";
			str += "    public "+element.nodeName+" initialize() {\n";

			// we figure out body first and print it out later
			var body = "      "+element.nodeName+" "+element.nodeName+0+" =  new "+element.nodeName+"()";
						// console.error(body);
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
			str += "    return "+element.nodeName+0+";\n";
			str += "    }\n";
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
			var str = "";// "new org.web3d.x3d.jsail.fields."+attrType+"(";
			for (var i = 0; i < values.length; i += 840) {
				var max = values.length;
				if (i + 840 < max) {
					max = i + 840;
				}
				this.codeno++;
				this.code[co] = "private class "+attrType+co+" {\n";
				this.code[co] +=  "  private org.web3d.x3d.jsail.fields."+attrType+" getArray() {\n";
				this.code[co] += "    return new org.web3d.x3d.jsail.fields."+attrType+"(new "+type+"[] {"+lead+values.slice(i, max).join(j)+trail+"});\n";
				this.code[co] += "  }\n";
				this.code[co] += "}\n";
				if (i === 0) {
					str += "new "+attrType+co+"().getArray()";
				} else {
					str += ".append(new "+attrType+co+"().getArray())";
				}
				co = this.codeno;
			}
			return str;
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
	subSerializeToString : function(element, mapToMethod, fieldTypes, n, stack) {
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
						if (element.nodeName === 'NavigationInfo' ) {
							strval = "\""+attrs[a].nodeValue.replace(/\"/g, '\\\"')+"\""
							/* **** RESTORE if X3DJSAIL can take an array
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
										console.error("Python Replacing "+x+" with "+y);
									}
									console.error("value chopped", y);
									return y;
								}), this.codeno, '","', '"', '"');
							*/
							// console.error("chopped rejoined", strval);
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
					if (attr === 'containerField' && (
						attrs[a].nodeValue === "joints" ||
						attrs[a].nodeValue === "skeleton" ||
						attrs[a].nodeValue === "segments" ||
						attrs[a].nodeValue === "viewpoints" ||
						attrs[a].nodeValue === "skin" ||
						attrs[a].nodeValue === "skinCoord" ||
						attrs[a].nodeValue === "sites")) {
						// console.error("################## FOUND", attr, attrs[a].nodeValue);
						attr = "containerFieldOverride";

					} else if (attr === "xmlns:xsd" || attr === "xsd:noNamespaceSchemaLocation" || attr === 'containerField' || attr === 'type') {
						continue;
					}
					if (attr === "DEF") {
						DEF = attrs[a].nodeValue;
					}
					if (attr === "USE") {
						USE = attrs[a].nodeValue;
					}
					// console.error("DEF/USE", DEF, USE);
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
					} else if (attr === "readInterval") {
						strval = "new SFTime("+attrs[a].nodeValue+DOUBLE_SUFFIX+")";
						console.error(strval);
					} else if (attrType === "SFString") {
						if (attr === "accessType") {
							strval = "field.ACCESSTYPE_"+attrs[a].nodeValue.toUpperCase();
						} else {
							strval = '"'+attrs[a].nodeValue.
								replace(/(\\+)([^&\\"]|$)/g, '$1$1$2').
								/*
								replace(/\\/g, '\\\\').
								*/
								replace(/\r\\\\n/g, ' ').
								replace(/\n/g, ' ').
								replace(/\r/g, ' ').
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
									/*
								       replace(/(\\)+([&"])/g, '\\\\\\\$2').
								       */
								       replace(/""/g, '\\"\\"').
								       replace(/&quot;&quot;/g, '\\"\\"').
								       // replace(/&/g, "&amp;").
								       replace(/\\n/g, '\\n');
								if (y !== x) {
									// console.error("Java Replacing "+x+" with "+y);
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
						strval = this.printSubArray(attrType, "double", attrs[a].nodeValue.split(/[ ,]+/), this.codeno, FLOAT_SUFFIX+',', '', FLOAT_SUFFIX);
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

					if (attr === "style" && element.nodeName != "FontStyle" ) {
						method = "setCssStyle";
					}
					
					str += '.'+method+"("+strval+")";
					if (attr === 'containerFieldOverride' && (attrs[a].nodeValue === "joints" || attrs[a].nodeValue === "skeleton" || attrs[a].nodeValue === "segments" || attrs[a].nodeValue === "viewpoints" || attrs[a].nodeValue === "skinCoord" || attrs[a].nodeValue === "skin" || attrs[a].nodeValue === "sites")) {
					// console.error("################## FOUND", method, attrs[a].nodeValue);
						str += ')'; // for cast
					}
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
				let hAnimListFound = false;
				if (ch.indexOf(".addJoints") >= 0 ||
				    ch.indexOf(".addSites") >= 0 ||
				    ch.indexOf(".addSkin") >= 0 ||
				    ch.indexOf(".setSkinCoord") >= 0 ||
				    ch.indexOf(".addViewpoints") >= 0 ||
				    ch.indexOf(".addSkeleton") >= 0 ||
				    ch.indexOf(".addSegments") >= 0) {
					hAnimListFound = true;
				}
				ch += "(";
				if (element.nodeName === "Appearance" && node.NodeName === "ComposedShader") {
					ch += "new X3DNode [] {";
				}
				if (node.nodeName === "ProtoInstance") {
					ch += node.nodeName+stack[0] + " = ";
				}

				var DEFpar = "";
				// only use a DEF constructor parameter when USE is not present and DEF is present
				if (node.nodeName.startsWith("HAnim")) {
					if (typeof USE === 'undefined' && typeof DEF !== 'undefined') {
						DEFpar = '"'+DEF+'"';
					}
				}
				let construct = "new "+node.nodeName+'('+DEFpar+')';
				construct += this.subSerializeToString(node, mapToMethod, fieldTypes, n+1, stack);
				if (hAnimListFound) {
					ch += '(('+node.nodeName+')';
				}
				ch += construct;
				if (element.nodeName === "Appearance" && node.NodeName === "ComposedShader") {
					ch += "}";
				}
				ch += ")";
				/*
				if (hAnimListFound && ch.indexOf(".addViewpoints") >= 0) {
					ch += ")";
				}
				*/
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
			} else if (element.childNodes.hasOwnProperty(cn) && node.nodeType === 8) {
				var y = node.nodeValue.
					replace(/\\/g, '\\\\').
					replace(/"/g, '\\"');
				str += "\n"+("  ".repeat(n))+".addComments(\""+y.split("\n").join('\\n\"+\n\"')+"\")";
				if (y !== node.nodeValue) {
					// console.error("Java Comment Replacing "+node.nodeValue+" with "+y);
				}
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
