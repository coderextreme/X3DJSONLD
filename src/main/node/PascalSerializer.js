"use strict";

const DOUBLE_SUFFIX = '';
const FLOAT_SUFFIX = '';

var fs = require("fs");

function PascalSerializer () {
this.code = [];
this.codeno = 0;
this.preno = 0;
this.DEFs = {};
}


PascalSerializer.prototype = {
	serializeToString : function(json, element, clazz, mapToMethod, fieldTypes) {
		this.code = [];
		this.codeno = 0;
		this.preno = 0;
		this.DEFs = {};
		var stack = [];

		var str = "";

		stack.unshift(this.preno);
		this.preno++;
		var bodystr = "";
        
		bodystr += "function "+clazz.replace(/.*\//, '')+": T"+element.nodeName+"RootNode;\n";
		bodystr += "var\n";
		var tailstr = "";
		let rootNodeName =element.nodeName+stack[0];
		this.code.push(rootNodeName+": T" + element.nodeName+"RootNode;");
		tailstr += "\nbegin\n";
		tailstr += rootNodeName+" := T"+element.nodeName+"RootNode.Create;\n";
		// tailstr += "Result := TX3DRootNode.Create('', Reader.BaseUrl);\n";
		tailstr += this.subSerializeToString(element, mapToMethod, fieldTypes, 3, stack, "");
		tailstr += "Result := "+rootNodeName+";\n";
		tailstr += "end;\n";

		str += bodystr;
		str += this.code.join("\n");
		str += tailstr;
		stack.shift();
		return str;
	},
	printSubObject : function (attrType, type, values) {
		if (attrType.startsWith("MF")) {
			var newArray = [];
			for (var j = 0; j < values.length;) {
				var newObject = {};
				for (var letter in type) {
					newObject[type[letter]] = parseFloat(values[j++]);
				}
				newArray.push(newObject);
			}
			return newArray;

		} else {
			var newObject = {};
			var j = 0;
			for (var letter in type) {
				newObject[type[letter]] = parseFloat(values[j++]);
			}
			return newObject;
		}
	},
	printSubArray : function (attrType, type, values, co, j, lead, trail, numpersub, attr) {
		let MFLead = "(";
		let MFTrail = ")";
		if (numpersub > 1 && attrType.startsWith("MF")) {
			var newArrays = [];
			for (var k = 0; k < values.length;) {
				var newArray = [];
				for (var i = 0; i < numpersub; i++) {
					newArray.push(values[k++]);
				}
				// newArrays.push(newArray);

				let params = "";
				if (attrType === "MFRotation" || attrType.endsWith("RGBA") || attrType.indexOf("4") > 0) {
					params = "Vector4("+(newArray.join(j))+")";
				} else if (attrType.endsWith("Color") || attrType.indexOf("3") > 0) {
					params = "Vector3("+(newArray.join(j))+")";
				} else if (attrType.endsWith("Color") || attrType.indexOf("2") > 0) {
					params = "Vector2("+(newArray.join(j))+")";
				}
				let SF = params;
				newArrays.push(SF);
			}
			MFLead =  "([";
			MFTrail = "])";
			values = newArrays;
		} else if ( attrType === "MFInt32" ) {
			MFLead =  "([";
			MFTrail = "])";
		} else if ( attrType === "MFFloat" ) {
			MFLead =  "([";
			MFTrail = "])";
		} else if ( attrType === "MFString") {
			// MFLead =  "T"+attrType+".Create(nil, True, '"+attr+"', [";
			if (attr === "family") {
				lead = "ff";
                        	for (var v in values) {
				    values[v] = values[v].charAt(0).toUpperCase() + values[v].slice(1).toLowerCase();
				}
				j = ", ff";
				trail = "";
				MFLead =  "";
				MFTrail = "";
			} else if (attr === "justify") {
				lead = "fj";
                        	for (var v in values) {
				    values[v] = values[v].charAt(0).toUpperCase() + values[v].slice(1).toLowerCase();
				}
				j = ", fj";
				trail = "";
				MFLead =  "";
				MFTrail = "";
			} else {
				MFLead =  "([";
				MFTrail = "])";
			}
		}
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
		return MFLead+lead+values.join(j)+trail+MFTrail;
	},

	printParentChild : function (element, node, cn, mapToMethod, n) {
		var prepre = ".";
		var addpre = "Set";
		if (cn > 0 && node.nodeName !== 'IS') {
			addpre = "Add";
		}
		if (node.nodeName === 'field') {
			addpre = "Add";
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
						method = attrsa.nodeValue.charAt(0).toUpperCase() + attrsa.nodeValue.slice(1);
						if (method === "Shaders") {
							addpre = "Add";
							method = "Child";
						} else {
							if (attrsa.nodeValue === "joints" 
								|| attrsa.nodeValue === "sites" 
								|| attrsa.nodeValue === "skeleton" 
								|| attrsa.nodeValue === "segments" 
							) {
								method = attrsa.nodeValue.charAt(0).toUpperCase() + attrsa.nodeValue.slice(1);
								addpre = "Add";
							} else {
								method = attrsa.nodeValue.charAt(0).toUpperCase() + attrsa.nodeValue.slice(1);
								addpre = "Set";
							}
						}
					}
				}
			} catch (e) {
				console.error(e);
			}
		}
		/*
		if (node.nodeName === "IS") {
			method = "IS";
			addpre = "Set";
		}
		if (addpre+method === "SetJoints") {
			method = "Joints"
			addpre = "Add";
		}
		if (element.nodeName === 'Scene' && addpre+method === "SetMetadata") {
			method = "Metadata"
			addpre = "Add";
		}
		if (node.nodeName === 'LayerSet' && addpre+method === "AddChild") {
			method = "LayerSet"
			addpre = "Add";
		}
		*/
		addpre = addpre.charAt(0).toUpperCase() + addpre.slice(1);
		method = method.charAt(0).toUpperCase() + method.slice(1);
		return prepre+addpre+method;
	},
	stringValue : function(attrsa, attr, attrType, element) {
		var strval = "";
		var nodeValue = attrsa.nodeValue;
		// console.log("Got", element.nodeName, attrType, attr, strval)
		if (nodeValue === 'NULL') {
			strval = "";
		} else if (attrType === "SFString") {
			if (attr === "accessType") {
				strval = "'"+nodeValue+"'";
			} else {
				strval = "'"+nodeValue.
					replace(/\\n/g, '\\\\n').
					replace(/\\?"/g, "\\\"")
					+"'";
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
			strval = this.printSubArray(attrType, "double", nodeValue.split(/[ ,\t\r\n]+/), this.codeno, DOUBLE_SUFFIX+',', '', DOUBLE_SUFFIX, 1, attr);
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
						// console.error("PascalSerializer Replacing "+x+" with "+y);
					}
					return y;
				}), this.codeno, "','", "'", "'", 1, attr);
		} else if (
			attrType === "MFInt32"||
			attrType === "MFImage"||
			attrType === "SFImage") {
			strval = this.printSubArray(attrType, "int", nodeValue.split(/[ ,\t\r\n]+/), this.codeno, ',', '', '', 1, attr);
		} else if (
			attrType === "MFColor") {
			strval = this.printSubArray(attrType, "float", nodeValue.split(/[ ,\t\r\n]+/), this.codeno, FLOAT_SUFFIX+',', '', FLOAT_SUFFIX, 3, attr);
			// console.log("Got", element.nodeName, attrType, attr, strval)
		} else if (
			attrType === "MFColorRGBA") {
			strval = this.printSubArray(attrType, "float", nodeValue.split(/[ ,\t\r\n]+/), this.codeno, FLOAT_SUFFIX+',', '', FLOAT_SUFFIX, 4, attr);
			// console.log("Got", element.nodeName, attrType, attr, strval)
		} else if (
			attrType === "SFVec3f"||
			attrType === "SFColor") {
			strval = this.printSubArray(attrType, "float", nodeValue.split(/[ ,\t\r\n]+/), this.codeno, FLOAT_SUFFIX+',', '', FLOAT_SUFFIX, 1, attr);
			strval  =  "Vector3"+strval;
			// console.log("Got", element.nodeName, attrType, attr, strval)
		} else if (
			attrType === "SFVec4f"||
			attrType === "SFRotation"||
			attrType === "SFColorRGBA") {
			strval = this.printSubArray(attrType, "float", nodeValue.split(/[ ,\t\r\n]+/), this.codeno, FLOAT_SUFFIX+',', '', FLOAT_SUFFIX, 1, attr);
			strval  =  "Vector4"+strval;
			// console.log("Got", element.nodeName, attrType, attr, strval)
		} else if (
			attrType === "SFVec2f") {
			strval = this.printSubArray(attrType, "float", nodeValue.split(/[ ,\t\r\n]+/), this.codeno, FLOAT_SUFFIX+',', '', FLOAT_SUFFIX, 1, attr);
			strval  =  "Vector2"+strval;
		} else if (
			attrType === "MFVec2f") {
			strval = this.printSubArray(attrType, "float", nodeValue.split(/[ ,\t\r\n]+/), this.codeno, FLOAT_SUFFIX+',', '', FLOAT_SUFFIX, 2, attr);
		} else if (
			attrType === "MFVec3f") {
			strval = this.printSubArray(attrType, "float", nodeValue.split(/[ ,\t\r\n]+/), this.codeno, FLOAT_SUFFIX+',', '', FLOAT_SUFFIX, 3, attr);
		} else if (
			attrType === "MFRotation"||
			attrType === "MFVec4f") {
			strval = this.printSubArray(attrType, "float", nodeValue.split(/[ ,\t\r\n]+/), this.codeno, FLOAT_SUFFIX+',', '', FLOAT_SUFFIX, 4, attr);
		} else if (
			attrType === "MFFloat") {
			strval = this.printSubArray(attrType, "float", nodeValue.split(/[ ,\t\r\n]+/), this.codeno, FLOAT_SUFFIX+',', '', FLOAT_SUFFIX, 1, attr);
		} else if (
			attrType === "SFMatrix3f"||
			attrType === "MFMatrix3f") {
			strval = this.printSubArray(attrType, "float", nodeValue.split(/[ ,\t\r\n]+/), this.codeno, FLOAT_SUFFIX+',', '', FLOAT_SUFFIX, 9, attr);
		} else if (
			attrType === "MFMatrix4f"||
			attrType === "SFMatrix4f") {
			strval = this.printSubArray(attrType, "float", nodeValue.split(/[ ,\t\r\n]+/), this.codeno, FLOAT_SUFFIX+',', '', FLOAT_SUFFIX, 16, attr);
		} else if (
			attrType === "SFVec2d"||
			attrType === "SFVec3d"||
			attrType === "SFVec4d"||
			attrType === "MFVec2d"||
			attrType === "MFVec3d"||
			attrType === "MFVec4d"||
			attrType === "MFDouble") {
			strval = this.printSubArray(attrType, "double", nodeValue.split(/[ ,\t\r\n]+/), this.codeno, DOUBLE_SUFFIX+',', '', DOUBLE_SUFFIX, 1, attr);
		} else if (
			attrType === "SFMatrix3d"||
			attrType === "MFMatrix3d") {
			strval = this.printSubArray(attrType, "double", nodeValue.split(/[ ,\t\r\n]+/), this.codeno, FLOAT_SUFFIX+',', '', FLOAT_SUFFIX, 9, attr);
		} else if (
			attrType === "SFMatrix4d"||
			attrType === "MFMatrix4d") {
			strval = this.printSubArray(attrType, "double", nodeValue.split(/[ ,\t\r\n]+/), this.codeno, FLOAT_SUFFIX+',', '', FLOAT_SUFFIX, 16, attr);
		} else if (attrType === "MFBool") {
			strval = this.printSubArray(attrType, "boolean", nodeValue.split(/[ ,\t\r\n]+/), this.codeno, ',', '', '', 1, attr);
		} else {
			strval = "'"+nodeValue.replace(/\n/g, '\\\\n').replace(/\\?"/g, "\\'")+"'";
		}
		return strval;
		/*
		var value = "";
		if (attrsa.nodeValue === 'NULL') {
			value = null;
		} else if (attrType === "SFString") {
			value = attrsa.nodeValue;
			if (attr === "accessType") {
				value = "'"+attrsa.nodeValue+"'";
			} else {
				value = "'"+attrsa.nodeValue.
					replace(/\\n/g, '\\\\n').
					replace(/\\?"/g, "\\\"")
					+"'";
			}
		} else if (attrType === "SFInt32") {
			value = attrsa.nodeValue;
		} else if (attrType === "SFFloat") {
			value = attrsa.nodeValue;
		} else if (attrType === "SFDouble") {
			value = attrsa.nodeValue;
		} else if (attrType === "SFBool") {
			value = attrsa.nodeValue;
		} else if (attrType === "MFString") {
			value = this.printSubArray(attrType, 1, attrsa.nodeValue.split(/"[ ,]+"/));
		} else if (
			attrType === "MFInt32"||
			attrType === "MFImage"||
			attrType === "SFImage") {
			value = this.printSubArray(attrType, 1, attrsa.nodeValue.split(/[ ,]+/));
		} else if (
			attrType === "SFColor"||
			attrType === "MFColor") {
			value = this.printSubObject(attrType, "rgb", attrsa.nodeValue.split(/[ ,]+/));
		} else if (
			attrType === "SFColorRGBA"||
			attrType === "MFColorRGBA") {
			value = this.printSubObject(attrType, "rgba", attrsa.nodeValue.split(/[ ,]+/));
		} else if (
			attrType === "SFVec2d"||
			attrType === "MFVec2d"||
			attrType === "SFVec2f"||
			attrType === "MFVec2f") {
			value = this.printSubObject(attrType, "xy", attrsa.nodeValue.split(/[ ,]+/));
		} else if (
			attrType === "SFVec3d"||
			attrType === "MFVec3d"||
			attrType === "SFVec3f"||
			attrType === "MFVec3f") {
			value = this.printSubObject(attrType, "xyz", attrsa.nodeValue.split(/[ ,]+/));
		} else if (
			attrType === "SFVec4d"||
			attrType === "MFVec4d"||
			attrType === "SFVec4f"||
			attrType === "MFVec4f") {
			value = this.printSubObject(attrType, "xyzw", attrsa.nodeValue.split(/[ ,]+/));
		} else if (
			attrType === "SFRotation"||
			attrType === "MFRotation") {
			value = this.printSubObject(attrType, "xyzw", attrsa.nodeValue.split(/[ ,]+/));
		} else if (
			attrType === "SFMatrix3d"||
			attrType === "MFMatrix3d"||
			attrType === "SFMatrix3f"||
			attrType === "MFMatrix3f") {
			value = this.printSubArray(attrType, 9, attrsa.nodeValue.split(/[ ,]+/));
		} else if (
			attrType === "SFMatrix4d"||
			attrType === "MFMatrix4d"||
			attrType === "SFMatrix4f"||
			attrType === "MFMatrix4f") {
			value = this.printSubArray(attrType, 16, attrsa.nodeValue.split(/[ ,]+/));
		} else if (
			attrType === "MFFloat") {
			value = this.printSubArray(attrType, 1, attrsa.nodeValue.split(/[ ,]+/));
		} else if (
			attrType === "MFDouble") {
			value = this.printSubArray(attrType, 1, attrsa.nodeValue.split(/[ ,]+/));
		} else if (attrType === "MFBool") {
			value = this.printSubArray(attrType, 1, attrsa.nodeValue.split(/[ ,]+/));
		} else {
			// value = attrsa.nodeValue;
			value = "'"+attrsa.nodeValue.replace(/\n/g, '\\\\n').replace(/\\?"/g, "\\'")+"'";
		}
		return value;
		*/
	},
	subSerializeToString : function(element, mapToMethod, fieldTypes, n, stack, parent_name) {
		let str = "";
		let attrType = "";
		let MetaName = "''";
		let MetaContent = "''";
		let ComponentName = "''";
		let ComponentLevel = "''";
		let FromNode = "''";
		let FromField = "''";
		let ToNode = "''";
		let ToField = "''";
		for (var a in element.attributes) {
			var attrs = element.attributes;
			try {
				parseInt(a);
				var attrsa = attrs[a];
				if (attrs.hasOwnProperty(a) && attrsa.nodeType == 2) {
					var attr = attrsa.nodeName;
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
					} else if (element.nodeName === "CastleColorRGBPersistent") {
						attrType = "MFColor";
					}
					var strval = this.stringValue(attrsa, attr, attrType, element);
					var method = attr;
					method = method.charAt(0).toUpperCase() + method.slice(1);
					if (attr === "class") {
						method = "CssClass";
					}
					if (attr === "name") {
						method = "NameField";
					}
					if (attr === "string") {
						method = "Text";
					}
					if (element.nodeName === 'X3D' && attr === "version") {
						let majorMinor = strval.replace(/'/g, "").split(".");
						str += "X3D0.ForceVersion.Major := "+majorMinor[0]+";\n";
						str += "X3D0.ForceVersion.Minor := "+majorMinor[1]+";\n";
						// DO NOTHING, Not suupported? TODO
					} else if (element.nodeName === 'meta') {
						if (attr === "name") {
							MetaName = strval;
						}
						if (attr === "content") {
							MetaContent = strval;
						}
					} else if (element.nodeName === 'component') {
						if (attr === "name") {
							ComponentName = strval;
						}
						if (attr === "level") {
							ComponentLevel = strval;
						}
					} else if (element.nodeName === 'X3DRoute') {
						// console.log("Setting", attr, "to", strval);
						if (attr === "fromNode") {
							FromNode = strval;
							let DEF = this.DEFs[FromNode];
							if (typeof DEF === 'undefined') {
								console.error("Route: no DEF for:", FromNode);
							} else {
								// console.log("Routing from DEF with value:", strval);
								FromNode = DEF;
							}
						} else	if (attr === "fromField") {
							FromField = strval.replace(/^'|'$/g, '');
							if (FromField.endsWith("_changed") || FromField === "touchTime") {
								FromField = "Event"+FromField.charAt(0).toUpperCase() + FromField.slice(1).toLowerCase();
							} else {
								FromField = "Fd"+FromField.charAt(0).toUpperCase() + FromField.slice(1).toLowerCase();
							}
						} else	if (attr === "toNode") {
							ToNode = strval;
							let DEF = this.DEFs[ToNode];
							if (typeof DEF === 'undefined') {
								console.error("Route: no DEF for:", ToNode);
							} else {
								// console.log("Routing to DEF with value:", strval);
								ToNode = DEF;
							}
						} else	if (attr === "toField") {
							ToField = strval.replace(/^'|'$/g, '');
							if ( ToField === "set_rotation") {
								ToField = "rotation";
							}
							if ( ToField === "set_translation") {
								ToField = "translation";
							}
							if ( ToField === "set_scale") {
								ToField = "scale";
							}
							if ( ToField === "set_stopTime") {
								ToField = "stopTime";
							}
							if ( ToField === "set_startTime") {
								ToField = "startTime";
							}
							if (ToField.startsWith("set_")) {
								ToField = "Event"+ToField.charAt(0).toUpperCase() + ToField.slice(1).toLowerCase();
							} else {
								ToField = "Fd"+ToField.charAt(0).toUpperCase() + ToField.slice(1).toLowerCase();
							}
						}
					} else	if (attr === "DEF") {
						/*
						str += element.nodeName+stack[0];
						str += '.Set'+method+"("+strval+");\n";
						*/
						let DEF = this.DEFs[strval];
						if (typeof DEF !== 'undefined') {
							console.error("Multiple DEFs with same value:", strval);
						} else {
							// console.log("Setting DEF with value:", strval);
						}
						this.DEFs[strval] = element.nodeName+stack[0];
						// DO NOT PRINT OUT
					} else	if (attr === "USE") {
						str += element.nodeName+stack[0];
						let USE = this.DEFs[strval];
						if (typeof USE === 'undefined') {
							console.error("USE without DEF:", strval, "DEFfing it");
							this.DEFs[strval] = element.nodeName+stack[0];
						} else {
							// console.log("Found USE with value:", strval);
						}
						str += ' := '+this.DEFs[strval]+";\n";
					} else	if (attrType.startsWith("MF") && attr !== "justify" && attr !== "family" 
						/*
						attr === "info" ||
						attr === "string" ||
						attr === "keyValue" ||
						attr === "key" ||
						attr === "coordIndex" ||
						attr === "colorIndex" ||
						attr === "skyColor" ||
						attr === "groundColor" ||
						attr === "point" ||
						attr === "displacements" ||
						attr === "url" ||
						attr === "skinCoordIndex" ||
						attr === "skinCoordWeight"
						*/
						) {
						str += element.nodeName+stack[0];
						str += '.Set'+method+strval+";\n";
					} else	if (
						attr === "color" && attrType === "MFColor"
						) {
						str += element.nodeName+stack[0];
						str += '.Set'+method+"("+strval+");\n";
					} else	if (attrType.startsWith("MFString") && attr === "justify") {
						str += element.nodeName+stack[0];
						str += '.'+method+" := "+(strval.replace(/, (.*)/, ";\n"+element.nodeName+stack[0]+"."+method+"Minor := $1"))+";\n";
					} else {
						str += element.nodeName+stack[0];
						str += '.'+method+" := "+strval+";\n";
					}
				}
			} catch (e) {
				console.error(e);
			}
			attrType = "";
		}
		if (element.nodeName === "meta") {
			str += "X3D0";
			str += ".Meta["+MetaName+"] := "+MetaContent+";\n";
		}
		if (element.nodeName === "component") {
			str += "X3D0";
			str += ".Components["+ComponentName+"] := "+ComponentLevel+";\n";
		}
		if (element.nodeName === "X3DRoute") {
			str += parent_name+".AddRoute("+FromNode+"."+FromField+", "+ToNode+"."+ToField+");\n";
		}
		for (var cn in element.childNodes) {
			var node = element.childNodes[cn];
			if (element.childNodes.hasOwnProperty(cn) && node.nodeType == 1) {
				stack.unshift(this.preno);
				this.preno++;
				var ch = "";
				if (node.nodeName !== "meta" && node.nodeName != "component" && node.nodeName != "head") {
					let isNode = "Node";
					let isCastle = "";
					let params = "";
					if (node.nodeName === "ROUTE") {
						isNode = "";
						node.nodeName = "X3D"+node.nodeName.charAt(0) + node.nodeName.slice(1).toLowerCase();
					}
					/*
					if (node.nodeName === "Color") {
						isNode = "";
						node.nodeName = "CastleColorRGBPersistent"
					}
					*/
					if (node.nodeName === "Scene") {
						node.nodeName = "Group"
						params = "";
					}
					if (node.nodeName.endsWith("Light")) {
						// isNode = "";
						// isCastle = "Castle";
						// params = "(nil)";
					}
					if ( node.nodeName !== "X3DRoute") {
						ch += node.nodeName+stack[0]+" := T"+isCastle+node.nodeName+isNode+".Create"+params+";\n";
						this.code.push(node.nodeName+stack[0]+": T"+isCastle+node.nodeName+isNode+";");
					}
				}
				var bodystr = this.subSerializeToString(node, mapToMethod, fieldTypes, n+1, stack, element.nodeName+stack[1]);
				ch += bodystr;
				method = this.printParentChild(element, node, cn, mapToMethod, n);
				if (node.nodeName !== "Scene" && node.nodeName !== "meta" && node.nodeName != "component" && node.nodeName != "head") {
					ch += '{ '+method+' }\n';
					if ( node.nodeName === "X3DRoute") {
					} else {
						if ( element.nodeName === "CastleScene") {
							method = ".AddRootNode";
						}
						if ( method === ".AddChild" ) {
							method = ".AddChildren";
						}
						if ( method === ".AddGroup" ) {
							method = ".AddChildren";
						}
						if ( method === ".AddSkeleton" ) {
							method = ".SetSkeleton";
						}
						if ( method === ".AddDisplacers" ) {
							method = ".SetDisplacers";
						}
						if (
							method === ".AddChildren" ||
							method === ".SetDisplacers" ||
							method === ".AddDisplacements" ||
							method === ".AddSkin" ||
							method === ".SetSkeleton" ||
							method === ".SetSkin"
						) {
							ch += element.nodeName+stack[1]+method+"(["+node.nodeName+stack[0]+"]);\n";

						} else if (
							method === ".SetSkinCoord"
						) {
							ch += element.nodeName+stack[1]+method+"("+node.nodeName+stack[0]+");\n";
						} else {
							ch += element.nodeName+stack[1]+"."+method.slice(4)+" := "+node.nodeName+stack[0]+";\n";
						}
					}
				}
				str += ch;
				stack.shift();
			} else if (element.childNodes.hasOwnProperty(cn) && node.nodeType == 8) {
				if (node.nodeValue.indexOf("}") < 0) {
					str += "{ "+node.nodeValue+" }\n";
				} else if (node.nodeValue.indexOf("*)") < 0) {
					str += "(* "+node.nodeValue+" *)\n";
				} else {
					str += "# "+(node.nodeValue.replace(/[\r\n]+/, " "))+"\n";
				}
			} else if (element.childNodes.hasOwnProperty(cn) && node.nodeType == 4) {
				str += "\n"+element.nodeName+stack[0];
				str += ".SetSourceCode('''"+node.nodeValue.split(/\r?\n/).map(function(x) {
					return x.
					        replace(/\\/g, '\\\\').
						replace(/"/g, '\\"')
						replace(/$/g, '\\')
						/*
						.replace(/\\n/g, "\\\\n")
						*/
					;
					}).join('\\n\"+\n\"')+"''');\n";
			}
	        		
		}
		return str;
	}
};


if (typeof module === 'object')  {
	module.exports = PascalSerializer;
}

