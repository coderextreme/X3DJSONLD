"use strict";

const DOUBLE_SUFFIX = '';
const FLOAT_SUFFIX = '';

export default function PascalSerializer () {
this.code = [];
this.codeno = 0;
this.preno = 0;
this.DEFs = {};
this.DEFnumbers = {};
this.protos = {};
// Limits for each generated Init procedure. Lower them if FPC still runs out of
// registers / memory; raise them for fewer, larger procedures.
this.maxStatementsPerProc = 40;
this.maxCharsPerProc = 12000;
}

const upperCaseFirst = function (str) {
	return str.charAt(0).toUpperCase()+str.slice(1);
}

const getDeclarations = function(node) {
	let ns = [];
	if (typeof node.getAttribute === 'function') {
		if (node.getAttribute("name")) {
			ns.push(node.getAttribute("name"));
		}
		if (node.getAttribute("DEF")) {
			ns.push(node.getAttribute("DEF"));
		}
	} else {
		console.log("ERROR: GD node.getAtttribute is not a function");
		if (node.nodeName) {
			ns.push(node.nodeName);
		}
		if (node.name) {
			ns.push(node.name);
		}
	}
	// console.log("=============INFO, Proto names", ns);
	return ns;
}

const getDeclaration = function(node) {
	if (typeof node.getAttribute === 'function') {
		return (node.getAttribute("name") || node.getAttribute("DEF"));
	} else {
		console.log("ERROR: GD node.getAtttribute is not a function");
		return (node.nodeName || node.name);
	}
}

const getFieldName = function(field) {
	return (node.nodeName || node.name);
}

const getNames = function(node) {
	let ns = [];
	if (typeof node.getAttribute === 'function') {
		if (node.getAttribute("name")) {
			ns.push(node.getAttribute("name"));
		}
		if (node.getAttribute("USE")) {
			ns.push(node.getAttribute("USE"));
		}
		if (node.getAttribute("DEF")) {
			ns.push(node.getAttribute("DEF"));
		}
	} else {
		console.log("ERROR: GAN node.getAtttribute is not a function");
		if (node.nodeName) {
			ns.push(node.nodeName);
		}
		if (node.name) {
			ns.push(node.name);
		}
	}
	return ns;
}

const getAName = function(node) {
	if (typeof node.getAttribute === 'function') {
		return (node.getAttribute("name") || node.getAttribute("USE") || node.getAttribute("DEF"));
	} else {
		console.log("ERROR: GAN node.getAtttribute is not a function");
		return (node.nodeName || node.node.name);
	}
}

const stackname = function (element, override) {
	if (typeof override !== 'undefined') {
		// console.log("stack name was", stackname(element));
		element.stacknumber = override;
		// console.log("stack name becomes", stackname(element));
	}
	return element.nodeName+element.stacknumber;
}


PascalSerializer.prototype = {
	// Split generated Pascal statements into chunks, each ending on a complete
	// top level statement.  Understands Pascal strings, { }, (* *) and // comments
	// and bracket nesting, so it never cuts inside an array literal or a string.
	splitStatements : function(body, maxStatements, maxChars) {
		const chunks = [];
		const n = body.length;
		let start = 0, count = 0, depth = 0, i = 0;
		while (i < n) {
			const c = body[i];
			const c2 = body[i+1];
			if (c === "'") {
				i++;
				while (i < n && body[i] !== "'" && body[i] !== "\n") {
					i++;
				}
				i++;
			} else if (c === "{") {
				i = body.indexOf("}", i);
				if (i < 0) break;
				i++;
			} else if (c === "(" && c2 === "*") {
				i = body.indexOf("*)", i+2);
				if (i < 0) break;
				i += 2;
			} else if (c === "/" && c2 === "/") {
				i = body.indexOf("\n", i);
				if (i < 0) break;
			} else if (c === "(" || c === "[") {
				depth++;
				i++;
			} else if (c === ")" || c === "]") {
				if (depth > 0) depth--;
				i++;
			} else if (c === ";" && depth === 0) {
				i++;
				count++;
				if (count >= maxStatements || (i - start) >= maxChars) {
					chunks.push(body.slice(start, i));
					start = i;
					count = 0;
				}
			} else {
				i++;
			}
		}
		if (body.slice(start).trim().length > 0) {
			chunks.push(body.slice(start));
		}
		return chunks;
	},
	serializeToString : function(json, element, clazz, mapToMethod, fieldTypes) {
		this.code = [];
		this.codeno = 0;
		this.preno = 0;
		this.DEFs = {};
		this.DEFnumbers = {};
		this.protos = {};
		var stack = [];

		stack.unshift(this.preno);
		this.preno++;
		clazz = clazz.replace(/.*\//, '');

		const rootType = "T"+element.nodeName+"RootNode";
		stackname(element, stack[0]);
		const rootNodeName = stackname(element);
		this.code.push(rootNodeName+": "+rootType+";");

		// All statements, in order.  Walking the tree also fills this.code with
		// the node variable declarations, so this must run before the header is built.
		let body = rootNodeName+" := "+rootType+".Create;\n";
		body += this.subSerializeToString(element, mapToMethod, fieldTypes, 3, stack, "");

		const chunks = this.splitStatements(body, this.maxStatementsPerProc, this.maxCharsPerProc);
		const procName = function(k) { return "Init"+clazz+"Part"+k; };

		let str = "";
		str += "unit "+clazz+";\n\n";
		str += "interface\n\n";
		str += "uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;\n\n";
		str += "function Create"+clazz+": TX3DRootNode;\n\n";
		str += "implementation\n\n";
		str += "uses CastleVectors;\n\n";

		// Node variables are unit level (global) rather than locals of one huge
		// function, so they take no stack slots or registers and every Init
		// procedure below can see them.
		str += "var\n";
		str += this.code.join("\n")+"\n\n";

		for (let k = 0; k < chunks.length; k++) {
			str += "procedure "+procName(k)+";\n";
			str += "begin\n";
			str += chunks[k];
			if (!chunks[k].endsWith("\n")) {
				str += "\n";
			}
			str += "end;\n\n";
		}

		str += "function Create"+clazz+": "+rootType+";\n";
		str += "begin\n";
		for (let k = 0; k < chunks.length; k++) {
			str += procName(k)+";\n";
		}
		str += "Result := "+rootNodeName+";\n";
		str += "end;\n\n";
		str += "begin\n";
		str += "end.\n";

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
			if (attr === "family") {
				lead = "ff";
                        	for (var v in values) {
				    values[v] = upperCaseFirst(values[v]);
				}
				j = ", ff";
				trail = "";
				MFLead =  "";
				MFTrail = "";
			} else if (attr === "justify") {
				lead = "fj";
                        	for (var v in values) {
				    values[v] = upperCaseFirst(values[v]);
				}
				j = ", fj";
				trail = "";
				MFLead =  "";
				MFTrail = "";
			} else if (attr === "type") {
				MFLead =  "([";
				MFTrail = "])";
			} else {
				MFLead =  "([";
				MFTrail = "])";
			}
		} else if ( attrType === "SFImage") {
                        for (var v in values) {
				if (values[v] > 0x7fffffff) {
				    values[v] = values[v] - 4294967296
				}
                        }
			MFLead = "MakeRGBAImage(";
			values = [ values[0], values[1], "["+ values.slice(2).join(j)+ "]" ];
			MFTrail = ")";
		} else if (attrType === "SFMatrix4f") {
			MFLead = "MakeMatrix4([";
			MFTrail = "])";
		} else if (attrType.startsWith("SFVec3")) {
			MFLead = "(";
			MFTrail = ")";
		} else if (attrType.startsWith("SFVec2")) {
			MFLead = "(";
			MFTrail = ")";
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

	printParentChild : function (element, node, mapToMethod, n, oldNodeName) {
		let prepre = ".";
		let addpre = "Set";
		if (node.nodeName !== 'IS') {
			addpre = "Add";
		}

		let method = node.nodeName;
		if (!method) {
			console.log("dotted", oldNodeName, method);
			method = oldNodeName;
		}
		if (typeof mapToMethod[element.nodeName] === 'object') {
			if (typeof mapToMethod[element.nodeName][node.nodeName] === 'string') {
				method = mapToMethod[element.nodeName][node.nodeName].slice(3);
				addpre = "";
			}
		} else if (typeof mapToMethod[element.nodeName] === 'string') {
			method = mapToMethod[element.nodeName].slice(3);
			addpre = "";
		}
		let containerField = node.getAttribute("containerField");
		if (containerField !== null) {
			method = containerField;
			addpre = "Set";
		}
		method = upperCaseFirst(method);
		/*
		if (node.nodeName === "IS") {
			method = "IS";
			addpre = "Set";
		}
		if (element.nodeName === 'Scene' && addpre+method === "SetMetadata") {
			method = "Metadata"
			addpre = "Add";
		}
		*/
		if (element.nodeName === 'LayerSet' && method === "Layers") {
			method = method+".Add"
			addpre = "Fd";
		}
		if ( method === "Child" ) {
			method = "Children";
		}
		if (method === "Children") {
			method = method+".Add"
			addpre = "Fd";
		}
		if (method === "Shaders") {
			method = "Children";
			addpre = "Add";
		}
		if (addpre+method === "SetJoints") {
			method = "Joints"
			addpre = "Add";
		}
		if (addpre+method === "SetSegments") {
			method = "Segments"
			addpre = "Add";
		}
		if ((element.nodeName === 'MultiTextureTransform' &&
			  method.slice(3) === "TextureTransform") ||
		    (element.nodeName === 'MultiTexture' &&
			  method.slice(3) === "Texture") ||
		    (element.nodeName === 'MultiTextureCoordinate' &&
			  method.slice(3) === "TexCoord")) {
			method = method.slice(3)+".Add"
			addpre = "Fd";
		}
		if (element.nodeName === 'MetadataSet') {
			method = method+".Add"
			addpre = "Fd";
		}
		if (element.nodeName && element.nodeName.endsWith('Script')) {
			method = ".AddCustomField"
			addpre = "Fd";
		}
		if ((element.nodeName === 'field' ||
			element.nodeName === 'MFNode') &&
			  (method === "Joints" ||
			   method === "Material" ||
			   method === "Text" ||
			   method === "StringSensor" ||
			   method === "PlaneSensor" ||
			   method === "Coordinate" ||
			   method === "Transform" ||
			   method === "CylinderSensor" ||
			   method === "Segments")
		) {
			method = ".Add"
			addpre = "Fd"; // stripped
		}
		if ((element.nodeName === 'field' ||
			element.nodeName === 'SFNode') &&
			  (method === "Material" ||
			   method === "Text" ||
			   method === "StringSensor" ||
			   method === "PlaneSensor" ||
			   method === "HAnimHumanoid" ||
			   method === "Switch" ||
			   method === "Coordinate" ||
			   method === "Transform" ||
			   method === "CylinderSensor")
		) {
			method = ".Value"
			addpre = "Fd"; // stripped
		}
		if (element.nodeName === 'HAnimHumanoid' &&
			  (method === "Joints" ||
			   method === "Skeleton" ||
			   method === "Segments")
		) {
			method = method+".Add"
			addpre = "Fd";
		}
		if (element.nodeName === 'HAnimHumanoid' &&
			  method === "SkinCoord") {
			method = method+".Set"
			addpre = "Fd";
		}
		if (!method) {
			method = node.nodeName;
			console.log("ERROR node name is empty", element.nodeName, method, node.nodeName);
		}
		addpre = upperCaseFirst(addpre);
		method = upperCaseFirst(method);
		return prepre+addpre+method;
	},
	stringValue : function(fieldValue, attr, attrType) {
		var strval = "";
		var nodeValue = fieldValue;// attrsa.nodeValue;
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
					       replace(/\\"/g, '"').
					       replace(/'/g, "''").
					       replace(/""/g, '\\"\\"').
					       replace(/&quot;&quot;/g, '\\"\\"').
					       // replace(/&/g, "&amp;").
					       replace(/\\n/g, '\\n');
					if (y !== x) {
						// console.log("PascalSerializer Replacing "+x+" with "+y);
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
		} else if (
			attrType === "MFColorRGBA") {
			strval = this.printSubArray(attrType, "float", nodeValue.split(/[ ,\t\r\n]+/), this.codeno, FLOAT_SUFFIX+',', '', FLOAT_SUFFIX, 4, attr);
		} else if (
			attrType === "SFVec3f"||
			attrType === "SFColor") {
			if (nodeValue === null || typeof nodeValue === 'undefined') {
				strval = "(0, 0, 0); { "+nodeValue+" }";
			} else {
				strval = this.printSubArray(attrType, "float", nodeValue.split(/[ ,\t\r\n]+/), this.codeno, FLOAT_SUFFIX+',', '', FLOAT_SUFFIX, 1, attr);
			}
			strval  =  "Vector3"+strval;
		} else if (
			attrType === "SFVec4f"||
			attrType === "SFRotation"||
			attrType === "SFColorRGBA") {
			strval = this.printSubArray(attrType, "float", nodeValue.split(/[ ,\t\r\n]+/), this.codeno, FLOAT_SUFFIX+',', '', FLOAT_SUFFIX, 1, attr);
			strval  =  "Vector4"+strval;
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
			switch (attrType) {
				case "SFVec2d":
					strval  =  "Vector2Double"+strval;
					break;
				case "SFVec3d":
					strval  =  "Vector3Double"+strval;
					break;
				case "SFVec4d":
					strval  =  "Vector4Double"+strval;
					break;
				case "MFDouble":
					strval  =  strval.substr(1,strval.length-2);
					break;
			}
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
	setProto : function(protoStatement) {
		for (const protoName of getDeclarations(protoStatement)) {
			for (let cn in protoStatement.childNodes) {
				// console.log("protoName", protoName);
				let proto = this.protos[protoName];
				if (typeof proto === 'undefined') {
					proto = {};
					this.protos[protoName] = proto;
				}	
				// looking for ProtoInterface and ProtoBody
				var node = protoStatement.childNodes[cn];
				if (protoStatement.nodeName === "ProtoDeclare" && node.nodeName === 'ProtoInterface') {
					console.log("=============INFO, ProtoDeclare name", protoName);
					this.setInterface(node, protoName);
				}
			}
			if (protoStatement.nodeName === "ExternProtoDeclare") {
				console.log("=============INFO, ExternProtoDeclare name", protoName);
				this.setInterface(protoStatement, protoName);
			}
			if (protoStatement.nodeName && protoStatement.nodeName.endsWith("Script")) {
				console.log("=============INFO, Script name", protoName);
				let scriptName = protoName;
				// console.log("scriptName", scriptName);
				this.protos[scriptName]["id"] = Object.keys(this.protos).length;
				this.setInterface(protoStatement, scriptName)
			}
		}
	},
	setInterface : function(interfaceStatement, protoName) {
		for (let fieldStatement in interfaceStatement.childNodes) {
			let field = interfaceStatement.childNodes[fieldStatement]
			// TDDO IS in a field
			if (field.nodeName === "field" && field.nodeType === 1) {
				const allAttributesString = Array.from(field.attributes)
				  .map(attr => `${attr.name}="${attr.value}"`)
				  .join(" ");
				// console.log("=============INFO 2, ProtoInstance name", protoName);
				// console.log(allAttributesString)
				if (protoName === null) {
					console.log("=============ERROR 1, protoName null", protoName);
				} else if (typeof protoName === 'undefined') {
					console.log("=============ERROR 2, protoName undefined", protoName);
				} else if (typeof this.protos === 'undefined') {
					console.log("=============ERROR 3, this.protos undefined", this.protos);
				} else if (typeof this.protos[protoName] === 'undefined') {
					console.log("=============ERROR 4, this.protos[protoName] undefined", protoName, this.protos[protoName]);
				} else if (typeof field.getAttribute !== 'function') {
					console.log("=============ERROR 5, field.getAttribute not a function", field.getAttribute);
				} else {
					let name = field.getAttribute('name');
					let type = field.getAttribute('type');
					let valu = field.getAttribute('value');
					let acce = field.getAttribute('accessType');
					this.protos[protoName][name] = {};
					this.protos[protoName][name]["name"] = name;
					this.protos[protoName][name]["field"] = field;
					this.protos[protoName][name]["type"] = type;
					this.protos[protoName][name]["accessType"] = acce;
					if (type === null) {
						console.log("=============ERROR 0, no type for", protoName, ", field:", allAttributesString);
					}
					if (type && !type.endsWith("Node")) {
						this.protos[protoName][name]["default_value"] = valu;
					} else {
						this.protos[protoName][name]["children"] = field.childNodes;
					}
				}
			}
		}
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
		let ToNode = "";
		let ToField = "";
		let FromDEF = "";
		let ToDEF = "";
		for (var a in element.attributes) {
			var attrs = element.attributes;
			try {
				parseInt(a);
				var attrsa = attrs[a];
				if (attrs.hasOwnProperty(a) && attrsa.nodeType === 2) {
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
					var strval = this.stringValue(attrsa.nodeValue, attr, attrType);
					let method = attr;
					method = upperCaseFirst(method);
					if (attr === "id") {
						method = "HtmlId";
					}
					if (attr === "version") {
						method = "Version";
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
					} else if (element.nodeName === 'X3DROUTE') {
						if (attr === "fromNode") {
							FromNode=strval.replace(/^'|'$/g, '');
							FromDEF = this.DEFs[strval];
							if (typeof FromDEF === 'undefined') {
								console.log("Route: no FromDEF for:", FromNode);
							}
						}
						if (attr === "fromField") {
							FromField = strval.replace(/^'|'$/g, '');
							// FromField = strval;
							// console.log("Before from ", FromField);
							if (
								FromField.endsWith("_changed") ||
								FromField === "isOver" ||
								FromField === "finalText" ||
								FromField === "addedEntities" ||
								FromField === "removedEntities" ||
								FromField === "translation" ||
								FromField === "rotation" ||
								FromField === "fraction" ||
								FromField === "enteredText" ||
								FromField === "isLoaded" ||
								FromField === "isActive" ||
								FromField === "enabled" ||
								FromField === "keyValue" ||
								FromField === "visibilitySwitchSelection" ||
								FromField === "inputNegate" ||
								FromField === "inputFalse" ||
								FromField === "inputTrue" ||
								FromField === "values" ||
								FromField === "choice" ||
								FromField === "spine" ||
								FromField === "orientation" ||
								FromField === "enterTime" ||
								FromField === "pauseTime" ||
								FromField === "resumeTime" ||
								FromField === "startTime" ||
								FromField === "stopTime" ||
								FromField === "cycleTime" ||
								FromField === "triggerTime" ||
								FromField === "touchTime"
							) {
								FromField = "Event"+upperCaseFirst(FromField);
							} else {
								// FromField = "Fd"+upperCaseFirst(FromField);
							}
						}
						if (attr === "toNode") {
							ToNode = strval.replace(/^'|'$/g, '');
							ToDEF = this.DEFs[strval];
							if (typeof ToDEF === 'undefined') {
								console.log("Route: no ToDEF for:", ToNode);
							}
						}
						if (attr === "toField") {
							ToField = strval.replace(/^'|'$/g, '');
							// ToField = strval;
							if ( ToField === "set_rotation") {
								ToField = "FdRotation.EventIn";
							}
							if ( ToField === "set_translation") {
								ToField = "FdTranslation.EventIn";
							}
							if ( ToField === "set_scale") {
								ToField = "scale";
							}
							if ( ToField === "set_stopTime") {
								ToField = "FdStopTime.EventIn";
							}
							if ( ToField === "set_startTime") {
								ToField = "FdStartTime.EventIn";
							}
							if ( ToField === "set_fraction") {
								// ToField = "FdFraction.EventIn";
							}
							if ( ToField === "weight") {
								ToField = "FWeight";
							}
							if (ToField.startsWith("set_") ||
							    ToField.startsWith("Set")) {
								ToField = "Event"+upperCaseFirst(ToField);
							} else {
								// ToField = "Fd"+upperCaseFirst(ToField);
							}
							// console.log("dotted ToField", ToField)
						}
					} else if (attr === "name") {
						method = "X3DName";
					} else	if (attr === "DEF") {
						/*
						str += stackname(element);
						str += '.Set'+method+"("+strval+");\n";
						*/
						// strval = strval.replace(/^'|'$/g, '');
						let DEF = this.DEFs[strval];
						if (typeof DEF !== 'undefined') {
							console.log("Multiple DEFs with same value:", strval);
							console.log("DEF", DEF);
						}
						// console.log("DEF strval", strval, stackname(element));
						this.DEFs[strval] = stackname(element);
						this.DEFnumbers[strval] = element.stacknumber;
						// str += stackname(element);
						// str += ".X3DName := "+strval+";\n";
					} else	if (attr === "USE") {
						// strval = strval.replace(/^'|'$/g, '');
						let DEF = this.DEFs[strval];
						if (typeof DEF === 'undefined') {
							console.log("USE without DEF:", strval, "DEFfing it");
							this.DEFs[strval] = stackname(element);
							this.DEFnumbers[strval] = element.stacknumber;
							str += stackname(element);
							str += " := '"+this.DEFs[strval]+"';\n";
						} else {
							// the USE node stack number becomes same as DEF
							stackname(element, this.DEFnumbers[strval]);
						}
					} else	if (typeof
						attrType !== 'undefined' &&
						attrType.startsWith("MF") &&
						attr !== "justify" &&
						attr !== "family" &&
						attr !== "height"
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
						str += stackname(element);
						str += '.Set'+method+strval+";\n";
					} else	if ( attr === "bboxSize") {
						str += stackname(element);
						str += ".FdBBoxSize.Value := ("+strval+");\n";
					} else	if ( attr === "type" && element.nodeName === "ShaderPart") {
						str += stackname(element);
						str += ".FdType.Value := "+strval+";\n";
					} else	if ( attr === "bboxCenter") {
						str += stackname(element);
						str += ".FdBBoxCenter.Value := ("+strval+");\n";
					} else	if (
						attr === "image" && attrType === "SFImage"
						) {
						str += stackname(element);
						str += ".FdImage.Value := "+strval+";\n";
					} else	if (
						attr === "alphaMode" && attrType === "SFString"
						) {
						str += stackname(element);
						strval = strval.replaceAll("'", "");
						strval = upperCaseFirst(strval);
						str += ".AlphaMode := am"+strval+";\n";
					} else	if (
						attr === "style" && element.nodeName === "FontStyle"
						) {
						str += stackname(element);
						strval = strval.replaceAll("'", "");
						strval = upperCaseFirst(strval);
						str += ".Style := fs"+strval+";\n";
					} else	if (attr === "style") {
						/* TODO
						str += stackname(element);
						str += ".Style := "+strval+";\n";
						*/
					} else	if (
						attr === "minificationFilter" &&
						    attrType === "SFString"
						) {
						str += stackname(element);
						str += ".FdMinificationFilter.Value := "+strval+";\n";

						str += '.Set'+method+"("+strval+");\n";
					} else	if (
						attr === "magnificationFilter" &&
						    attrType === "SFString"
						) {
						str += stackname(element);
						str += ".FdMagnificationFilter.Value := "+strval+";\n";

					} else	if (
						attr === "color" && attrType === "MFColor"
						) {
						str += stackname(element);
						str += '.Set'+method+"("+strval+");\n";
					} else	if (
						attr === "height" && attrType === "MFDouble"
						) {
						str += stackname(element);
						str += '.Set'+method+"(["+strval+"]);\n";
					} else	if (typeof attrType !== 'undefined' && attrType.startsWith("MFString") && attr === "justify") {
						str += stackname(element);
						str += '.'+method+" := "+(strval.replace(/, (.*)/, ";\n"+stackname(element)+"."+method+"Minor := $1"))+";\n";
					} else if (attr === "class") {
						/* TODO
						str += stackname(element);
						str += ".classList.add(";
						str += strval+");\n";
						*/
					} else if (method === "AccessType") {
						// console.log("method=", method, "strval", strval)
					} else if (method === "Type") {
						// console.log("method=", method, "strval", strval)
					} else {
						// console.log("element", element.nodeName, "method=", method, "strval", strval, "attr", attr, "attrType", attrType);
						str += stackname(element);
						str += '.'+method+" := "+strval+";\n";
					}
				}
			} catch (e) {
				console.error("ERROR CAUGHT", attrs[a], a, e);
			}
			attrType = "";
		}
		if (element.nodeName === "meta") {
			str += "X3D0";
			str += ".Meta["+MetaName+"] := '"+MetaContent.replaceAll("'", "")+"';\n";
		}
		if (element.nodeName === "component") {
			str += "X3D0";
			str += ".Components["+ComponentName+"] := "+ComponentLevel+";\n";
		}
		if (element.nodeName === "X3DROUTE") {
			str += `{ Original "${FromNode}.${FromField} TO ${ToNode}.${ToField} }\n`;
			console.log("ROUTE dotted before", FromNode, FromField, ToNode, ToField);
			// ToNode = ToNode.replace(/^'|'$/g, '');
			// let tof = this.protos[ToNode][ToField];
		        let ton = ToDEF;
			console.log("TO ton dotted", ton, ToField);
			let tofsn = ton+"."+ToField;
			try {
				let tof = this.protos[ToNode][ToField];
				tofsn = stackname(tof.field);
			} catch(e) {
				tofsn = ton+"."+ToField;
			}
			console.log("TO tofsn dotted", tofsn);

			let fromn = null;
			let fromf = null;
			let fromfsn = null;
			if (FromDEF && (
				FromField.startsWith("Event") ||
				FromField.startsWith("isOver") ||
				FromField.startsWith("finalText") ||
				FromField.startsWith("addedEntities") ||
				FromField.startsWith("removedEntities") ||
				FromField.startsWith("translation") ||
				FromField.startsWith("rotation") ||
				FromField.startsWith("fraction") |
				FromField.startsWith("enteredText") ||
				FromField.startsWith("isLoaded") ||
				FromField.startsWith("isActive") ||
				FromField.startsWith("enabled") ||
				FromField.startsWith("keyValue") ||
				FromField.startsWith("visibilitySwitchSelection") ||
				FromField.startsWith("inputNegate") ||
				FromField.startsWith("inputTrue") ||
				FromField.startsWith("inputFalse") ||
				FromField.startsWith("values") ||
				FromField.startsWith("choice") ||
				FromField.startsWith("spine") ||
				FromField.startsWith("orientation") ||
				FromField.startsWith("enterTime") ||
				FromField.startsWith("pauseTime") ||
				FromField.startsWith("resumeTime") ||
				FromField.startsWith("startTime") ||
				FromField.startsWith("stopTime") ||
				FromField.startsWith("cycleTime") ||
				FromField.startsWith("triggerTime") ||
				FromField.startsWith("touchTime")
			)) {
				fromn = FromDEF;
				fromf = FromField;
			} else {
				fromn = FromNode;
				if (this.protos[FromNode]) {
					fromf = this.protos[FromNode][FromField];
				} else {
					console.log("FIELD dotted", FromNode, FromField);
					fromf = FromField;
				}
			}
			fromfsn = fromn+"."+fromf;
			str += `{ Sample ${FromNode}.${FromField} TO ${ToNode}.${ToField}}\n`;

			// console.log("ROUTE after", FromNode, FromField, ToNode, ToField);
			console.log(parent_name+".AddRoute("+fromfsn+", "+tofsn+");\n");
			str += parent_name+".AddRoute("+fromfsn+", "+tofsn+");\n";
		}
		for (var cn in element.childNodes) {
			var node = element.childNodes[cn];
			let oldNodeName = node.nodeName;
			if (element.childNodes.hasOwnProperty(cn) && node.nodeType === 1) {
				stack.unshift(this.preno);
				stackname(node, stack[0]);
				this.preno++;
				let ch = "";
				if (node.nodeName !== "meta" && node.nodeName != "component" && node.nodeName != "head") {
					let isNode = "Node";
					let isCastle = "";
					let params = "";
					if (node.nodeName === "ROUTE") {
						isNode = "";
						node.nodeName = "X3D"+node.nodeName.toUpperCase();
					}
					if (node.nodeName === "fieldValue" ||
					    node.nodeName === "field") {
						let fieldName = node.getAttribute('name');
						params = "Undefined("+stackname(element)+", false, '"+fieldName+"')";
						isNode = "";
						let strval = "nil";
						let instanceName = getDeclaration(element);
						let aTYPE = node.getAttribute("type")
						if (aTYPE !== "") {
							node.nodeName = aTYPE;
						} else {
							node.nodeName = upperCaseFirst(node.nodeName);
							console.log("No type, using nodeName", node.nodeName);
						}
						// get the type of the node from the interface
						// console.log("field", fieldName, node.nodeName, instanceName, fieldName);
						if (typeof this.protos !== 'undefined' &&
							typeof this.protos[instanceName] !== 'undefined' &&
							typeof this.protos[instanceName][fieldName] !== 'undefined' &&
							typeof this.protos[instanceName][fieldName]['type'] !== 'undefined') {
							let fieldType = this.protos[instanceName][fieldName]["type"];
							let instanceIndex = this.protos[instanceName]["id"];
							node.nodeName = fieldType;
							if (fieldType && fieldType.endsWith("Node")) {
								// console.log("Getting children of", instanceName, fieldName);
								let nodeList = [];
								for (const child of this.protos[instanceName][fieldName]['children']) {
									if (child.nodeName.toString() !== '#text') {
stackname(child, this.DEFnumbers["'"+getAName(child)+"'"]);
nodeList.push(stackname(child));
									}
								}
								strval = nodeList.join(", ");
								strval = "(["+strval+"])";
							} else {
								let fieldValue = node.getAttribute('value') || this.protos[instanceName][fieldName]['default_value'];
								if (fieldValue !== null) {
									strval = this.stringValue(fieldValue, fieldName, fieldType);
								} else {
									strval = "nil";
								}
							}
							// let fieldVar = stackname(node);
							// params = "Undefined("+stackname(element)+", false, '"+fieldName+"')";
						}
						console.log("params", params);
					}
					/*
					if (node.nodeName === "Color") {
						isNode = "";
						node.nodeName = "CastleColorRGBPersistent"
					}
					*/
					if (node.nodeName === "Scene") {
						node.nodeName = "Group";
						stackname(node, node.stacknumber);
						params = "";
					}
					if (node.nodeName && node.nodeName.endsWith("Light")) {
						// isNode = "";
						// isCastle = "Castle";
						// params = "(nil)";
					}
					if (node.nodeName === "ProtoDeclare") {
						isNode = "";
						this.setProto(node);
						node.nodeName = "X3DPrototype";
					}
					if (node.nodeName === "ProtoInstance") {
						isNode = "Node";
						node.nodeName = "X3DPrototype";
						const allAttributesString = Array.from(node.attributes)
						  .map(attr => `${attr.name}="${attr.value}"`)
						  .join(" ");
						if (typeof node.getAttribute !== 'function') {
							console.log("=============ERROR 9, field.getAttribute not a function", node.getAttribute);
						}
						for (const instanceName of getNames(node)) {
							if (typeof this.protos === 'undefined') {
								console.log("=============ERROR 6, this.protos undefined", this.protos);
							} else if (typeof instanceName === 'undefined') {
								console.log("=============ERROR 7, instanceName undefined", instanceName);
							} else if (typeof this.protos[instanceName] === 'undefined') {
								console.log("=============ERROR 8, this.protos[instanceName] undefined", instanceName, getDeclaration(node), this.protos[instanceName]);
								console.log("ERROR", allAttributesString)
							} else {

								this.protos[instanceName]["id"] = Object.keys(this.protos).length;
								break;
							}
						}
					}
					if (node.nodeName === "ProtoBody") {
						isNode = "";
						node.nodeName = "X3DPrototype";
					}
					if (node.nodeName === "IS") {
						isNode = "";
					}
					if (node.nodeName === "connect") {
						isNode = "";
					}
					if (node.nodeName === "ProtoInterface") {
						isNode = "";
						params = "(nil)";
						node.nodeName = "X3DInterfaceDeclaration";
					}
					if (node.nodeName === "ExternProtoDeclare") {
						isNode = "";
						this.setProto(node);
						node.nodeName = "X3DExternalPrototype";
					}
					if (node.nodeName === "Script") {
						this.setProto(node); // it's similar to ProtoInterface
					}
					if ( node.nodeName !== "X3DROUTE") {
						if (!node.hasAttribute("USE")) {
							ch += stackname(node)+" := T"+isCastle+node.nodeName+isNode+".Create"+params+";\n";
						}
						this.code.push(stackname(node)+": T"+isCastle+node.nodeName+isNode+";");
					}
				}
				var bodystr = this.subSerializeToString(node, mapToMethod, fieldTypes, n+1, stack, stackname(element));
				ch += bodystr;
				let method = this.printParentChild(element, node, mapToMethod, n, oldNodeName);
				ch += '{ METHOD '+method+' }\n';
				if (node.nodeName !== "Scene" &&
					node.nodeName !== "meta" &&
					node.nodeName !== "component" &&
					node.nodeName !== "head" &&
					node.nodeName !== "X3DROUTE") {
					if ( element.nodeName === "CastleScene") {
						method = ".AddRootNode";
					}
					if ( method === ".AddGroup" ) {
						method = ".AddChildren";
					}

					if ( method === ".AddRootNode" ) {
						method = ".SetRootNode";
					}
					if ( method.startsWith(".Fd.AddCustomField")||
						method === ".Fd.Add") {
						ch += stackname(element)+method.slice(3)+"("+stackname(node)+");\n";
					} else if ( method === ".Fd.Value") {
						ch += stackname(element)+method.slice(3)+" := "+stackname(node)+";\n";
					} else if ( method.startsWith(".Fd")) {
						ch += stackname(element)+method+"("+stackname(node)+");\n";
					} else	if (node.nodeName === "LayerSet") {
						ch += "X3D0.FdChildren.Add("+stackname(node)+");\n";
					} else if (method.endsWith(".Add")) {
						console.log('{ METHOD.ADD '+method+' }');
						ch += stackname(element)+method+"(["+stackname(node)+"]);\n";
					} else if ( method.startsWith(".Add")) {
						ch += stackname(element)+method+"(["+stackname(node)+"]);\n";

					} else if ( method === ".SetSkinCoord") {
						ch += stackname(element)+method+"("+stackname(node)+");\n";
					} else if ( method.startsWith(".Set")) {
						ch += stackname(element)+"."+method.slice(4)+" := "+stackname(node)+";\n";
					} else {
						// console.log('{ METHOD.SET '+method+' }');
						ch += stackname(element)+method+" := "+stackname(node)+";\n";
					}
				}
				str += ch;
				stack.shift();
			} else if (element.childNodes.hasOwnProperty(cn) && node.nodeType === 8) {
				if (node.nodeValue.indexOf("}") < 0) {
					str += "{ "+node.nodeValue+" }\n";
				} else if (node.nodeValue.indexOf("*)") < 0) {
					str += "(* "+node.nodeValue+" *)\n";
				} else {
					str += "// "+(node.nodeValue.replace(/[\r\n]+/g, " "))+"\n";
				}
			} else if (element.childNodes.hasOwnProperty(cn) && node.nodeType === 4) {
				str += "\n"+stackname(element);
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
