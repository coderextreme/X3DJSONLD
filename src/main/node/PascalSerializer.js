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
		element.stacknumber = stack[0];
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
		let containerField = node.getAttribute("containerField");
		if (containerField !== null) {
			method = containerField.charAt(0).toUpperCase() + containerField.slice(1);
			if (method === "Shaders") {
				addpre = "Add";
				method = "Child";
			} else {
				if (containerField === "joints" 
					|| containerField === "sites" 
					|| containerField === "skeleton" 
					|| containerField === "segments" 
				) {
					method = containerField.charAt(0).toUpperCase() + containerField.slice(1);
					addpre = "Add";
				} else {
					method = containerField.charAt(0).toUpperCase() + containerField.slice(1);
					addpre = "Set";
				}
			}
		}
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
		if (element.nodeName === 'LayerSet' && addpre+method === "addLayers") {
			// console.log(element.nodeName, "0method", addpre, method);
			method = method.slice(3)+".Add"
			addpre = "fd";
			// console.log(element.nodeName, "1method", addpre, method);
		}
		if (element.nodeName === 'Layer' && addpre+method === "addChildren") {
			// console.log("element", element.nodeName, "2method", addpre, method);
			method = method.slice(3)+".Add"
			addpre = "fd";
			// console.log("element", element.nodeName, "3method", addpre, method);
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
			addpre = "fd";
		}
		if (element.nodeName === 'MetadataSet') {
			method = method+".Add"
			addpre = "fd";
		}
		if (element.nodeName.endsWith('Script')) {
			// console.log("element=", element ? element.nodeName : null, "addpre", addpre, "method", method, "node", node ? node.name : null);
			method = ".AddCustomField"
			addpre = "fd";
		}
		if ((element.nodeName === 'field' ||
			element.nodeName === 'MFNode') &&
			  (method === "Joints" ||
			   method === "Material" ||
			   method === "Coordinate" ||
			   method === "Transform" ||
			   method === "CylinderSensor" ||
			   method === "Segments")
		) {
			method = ".Add"
			addpre = "fd"; // stripped
		}
		if (element.nodeName === 'HAnimHumanoid' &&
			  (method === "Joints" ||
			   method === "Segments")
		) {
			method = method+".Add"
			addpre = "fd";
		}
		if (element.nodeName === 'HAnimHumanoid' &&
			  method === "SkinCoord") {
			method = method+".Set"
			addpre = "fd";
		}
		addpre = addpre.charAt(0).toUpperCase() + addpre.slice(1);
		method = method.charAt(0).toUpperCase() + method.slice(1);
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
		for (let cn in protoStatement.childNodes) {
			let protoName = protoStatement.getAttribute("DEF") || protoStatement.getAttribute('name');
			let proto = this.protos[protoName];
			if (typeof proto === 'undefined') {
				proto = {};
				this.protos[protoName] = proto;
				console.log("=============INFO, ProtoInstance name", protoName);
			}	
			// looking for ProtoInterface and ProtoBody
			var node = protoStatement.childNodes[cn];
			if (protoStatement.nodeName === "ProtoDeclare" && node.nodeName === 'ProtoInterface') {
				this.setInterface(node, protoName);
			}
		}
		if (protoStatement.nodeName === "ExternProtoDeclare") {
			this.setInterface(protoStatement, protoStatement.getAttribute("name"));
		}
		if (protoStatement.nodeName.endsWith("Script")) {
			let scriptName = protoStatement.getAttribute("DEF") || protoStatement.getAttribute("name");
			this.protos[scriptName]["id"] = Object.keys(this.protos).length;
			this.setInterface(protoStatement, scriptName)
		}
	},
	setInterface : function(interfaceStatement, protoName) {
		console.log("HEY", interfaceStatement.nodeName, protoName);
		for (let fieldStatement in interfaceStatement.childNodes) {
			let field = interfaceStatement.childNodes[fieldStatement]
			if (field.nodeType == 1) {
				const allAttributesString = Array.from(field.attributes)
					  .map(attr => `${attr.name}="${attr.value}"`)
					  .join(" ");
				// console.log("=============INFO 2, ProtoInstance name", protoName);
				// console.log(allAttributesString)
				if (protoName === null) {
					console.error("=============WARNING 1, protoName null", protoName);
				} else if (typeof protoName === 'undefined') {
					console.error("=============WARNING 2, protoName undefined", protoName);
				} else if (typeof this.protos === 'undefined') {
					console.error("=============WARNING 3, this.protos undefined", this.protos);
				} else if (typeof this.protos[protoName] == 'undefined') {
					console.error("=============WARNING 4, this.protos[protoName] undefined", protoName, this.protos[protoName]);
				} else if (typeof field.getAttribute !== 'function') {
					console.error("=============WARNING 5, field.getAttribute not a function", field.getAttribute);
				} else {
					let name = field.getAttribute('name');
					let type = field.getAttribute('type');
					let valu = field.getAttribute('value');
					let acce = field.getAttribute('accessType');
					this.protos[protoName][name] = {};
					this.protos[protoName][name]["name"] = name;
					this.protos[protoName][name]["type"] = type;
					this.protos[protoName][name]["accessType"] = acce;
					if (!type.endsWith("Node")) {
						this.protos[protoName][name]["default_value"] = valu;
					} else {
						this.protos[protoName][name]["children"] = field.childNodes;
						console.log("Setting children of", protoName, name);
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
					var strval = this.stringValue(attrsa.nodeValue, attr, attrType);
					var method = attr;
					method = method.charAt(0).toUpperCase() + method.slice(1);
					if (attr === "id") {
						method = "HtmlId";
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
						if (attr === "fromNode") {
							FromNode = strval;
							let DEF = this.DEFs[FromNode];
							if (typeof DEF === 'undefined') {
								console.error("Route: no DEF for:", FromNode);
							} else {
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
						str += stackname(element);
						str += '.Set'+method+"("+strval+");\n";
						*/
						let DEF = this.DEFs[strval];
						if (typeof DEF !== 'undefined') {
							console.error("Multiple DEFs with same value:", strval);
						}
						this.DEFs[strval] = stackname(element);
						this.DEFnumbers[strval] = element.stacknumber;
						str += stackname(element);
						str += '.X3DName := '+strval+";\n";
					} else	if (attr === "USE") {
						let DEF = this.DEFs[strval];
						if (typeof DEF === 'undefined') {
							console.error("USE without DEF:", strval, "DEFfing it");
							this.DEFs[strval] = stackname(element);
							this.DEFnumbers[strval] = element.stacknumber;
							str += stackname(element);
							str += ' := '+this.DEFs[strval]+";\n";
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
						/*
					} else	if ( attr === "type") {
						str += stackname(element);
						str += ".FdType.Value := "+strval+";\n";
						*/
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
						strval = strval.charAt(0).toUpperCase()+strval.slice(1).toLowerCase();
						str += ".AlphaMode := am"+strval+";\n";
					} else	if (
						attr === "style" && element.nodeName === "FontStyle"
						) {
						str += stackname(element);
						strval = strval.replaceAll("'", "");
						strval = strval.charAt(0).toUpperCase()+strval.slice(1).toLowerCase();
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
					} else if (method === "NameField") {
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
				console.error(e);
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
		if (element.nodeName === "X3DRoute") {
			str += parent_name+".AddRoute("+FromNode+"."+FromField+", "+ToNode+"."+ToField+");\n";
		}
		for (var cn in element.childNodes) {
			var node = element.childNodes[cn];
			if (element.childNodes.hasOwnProperty(cn) && node.nodeType == 1) {
				stack.unshift(this.preno);
				node.stacknumber = stack[0];
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
					if (node.nodeName === "field") {
						isNode = "";
						let aTYPE = node.getAttribute("type")
						if (aTYPE !== "") {
							node.nodeName = aTYPE;
						} else {
							node.nodeName = (node.nodeName.charAt(0).toUpperCase()) + node.nodeName.slice(1).toLowerCase();
							console.log("No type, using nodeName", node.nodeName);
						}
						let instanceName = element.nodeName;
						let instanceIndex = stack[1];
						let fieldName = node.getAttribute('name');
						let fieldValue = node.getAttribute('value');
						let fieldType = node.getAttribute('type');
						console.log("let strval = this.stringValue(", fieldValue, fieldName, fieldType,")");
						let strval = "nil"
						if (fieldValue !== null) {
							strval = this.stringValue(fieldValue, fieldName, fieldType);
							params = "("+instanceName+instanceIndex+", false, '"+fieldName+"', "+strval+")";
						}
					}
					*/
					if (node.nodeName === "fieldValue" ||
					    node.nodeName === "field") {
						isNode = "";
						let instanceName = element.getAttribute('DEF') || element.getAttribute('name');
						let aTYPE = node.getAttribute("type")
						if (aTYPE !== "") {
							node.nodeName = aTYPE;
						} else {
							node.nodeName = (node.nodeName.charAt(0).toUpperCase()) + node.nodeName.slice(1).toLowerCase();
							console.log("No type, using nodeName", node.nodeName);
						}
						let fieldName = node.getAttribute('name');
						// get the type of the node from the interface
						console.log("field", fieldName, node.nodeName, instanceName, fieldName);
						if (typeof this.protos !== 'undefined' &&
							typeof this.protos[instanceName] !== 'undefined' &&
							typeof this.protos[instanceName][fieldName] !== 'undefined' &&
							typeof this.protos[instanceName][fieldName]['type'] !== 'undefined') {
							let fieldType = this.protos[instanceName][fieldName]["type"];
							let instanceIndex = this.protos[instanceName]["id"];
							node.nodeName = fieldType;
							let strval = "nil";
							if (fieldType.endsWith("Node")) {
								console.log("Getting children of", instanceName, fieldName);
								let nodeList = [];
								for (const child of this.protos[instanceName][fieldName]['children']) {
									if (child.nodeName.toString() !== '#text') {
stackname(child, this.DEFnumbers["'"+child.getAttribute("USE")+"'"] || this.DEFnumbers["'"+child.getAttribute("DEF")+"'"]);
// console.log("Child", child.stacknumber, child.getAttribute("USE"), child.getAttribute("DEF"));
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
							params = "("+instanceName+instanceIndex+", false, '"+fieldName+"', "+strval+")";
							console.log("params", params);
						}
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
					if (node.nodeName === "ProtoDeclare") {
						isNode = "";
						this.setProto(node);
						node.nodeName = "X3DPrototype";
					}
					if (node.nodeName === "ProtoInstance") {
						node.nodeName = "X3DPrototype";
						const allAttributesString = Array.from(node.attributes)
						  .map(attr => `${attr.name}="${attr.value}"`)
						  .join(" ");
						if (typeof node.getAttribute !== 'function') {
							console.error("=============WARNING 9, field.getAttribute not a function", node.getAttribute);
						}
						let instanceName = node.getAttribute('DEF') || node.getAttribute('name');
						if (typeof this.protos === 'undefined') {
							console.error("=============WARNING 6, this.protos undefined", this.protos);
						} else if (typeof instanceName === 'undefined') {
							console.error("=============WARNING 7, instanceName undefined", instanceName);
						} else if (typeof this.protos[instanceName] === 'undefined') {
							console.error("=============WARNING 8, this.protos[instanceName] undefined", instanceName, this.protos[instanceName]);
							console.error(allAttributesString)
						} else {

							this.protos[instanceName]["id"] = Object.keys(this.protos).length;
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
					if ( node.nodeName !== "X3DRoute") {
						if (!node.hasAttribute("USE")) {
							ch += stackname(node)+" := T"+isCastle+node.nodeName+isNode+".Create"+params+";\n";
						}
						this.code.push(stackname(node)+": T"+isCastle+node.nodeName+isNode+";");
					}
				}
				var bodystr = this.subSerializeToString(node, mapToMethod, fieldTypes, n+1, stack, stackname(element));
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
						if ( method === ".AddRootNode" ) {
							method = ".SetRootNode";
							ch += stackname(element)+method+"(["+stackname(node)+"]);\n";
						} else if ( method.startsWith(".Fd.AddCustomField")) {
							ch += stackname(element)+method.slice(3)+"("+stackname(node)+");\n";
						} else if ( method === ".Fd.Add") {
							ch += stackname(element)+(method.slice(3))+"("+stackname(node)+");\n";
						} else if (
							method === ".AddChildren" ||
							method === ".SetDisplacers" ||
							method === ".AddDisplacements" ||
							method === ".AddJoints" ||
							method === ".AddSegments" ||
							method === ".AddSkin" ||
							method === ".SetSkeleton" ||
							method === ".SetSkin"
						) {
							ch += stackname(element)+method+"(["+stackname(node)+"]);\n";
						} else if ( method === ".FdChildren.Add") {
							ch += stackname(element)+method+"("+stackname(node)+");\n";

						} else if (
							method === ".SetSkinCoord"
						) {
							ch += stackname(element)+method+"("+stackname(node)+");\n";
						} else if ( method.startsWith(".Fd")) {
							ch += stackname(element)+method+"("+stackname(node)+");\n";
						} else {
							ch += stackname(element)+"."+method.slice(4)+" := "+stackname(node)+";\n";
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
					str += "// "+(node.nodeValue.replace(/[\r\n]+/g, " "))+"\n";
				}
			} else if (element.childNodes.hasOwnProperty(cn) && node.nodeType == 4) {
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
