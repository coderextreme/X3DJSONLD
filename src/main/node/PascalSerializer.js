"use strict";

const DOUBLE_SUFFIX = "";
const FLOAT_SUFFIX = "";

export default function PascalSerializer() {
	this.code = [];
	this.preno = 0;
	this.DEFs = {};
	this.DEFnumbers = {};
	this.DEFvars = {};
	this.protos = {};
	this.nodeMeta = new WeakMap();
	this.statements = [];
	this.rootVarName = "X3D0";
	this.usesPrototypes = false;
	this.debug = false;
	// Limits for each generated Init procedure. Lower them if FPC still runs out of
	// registers / memory; raise them for fewer, larger procedures.
	this.maxStatementsPerProc = 40;
	this.maxCharsPerProc = 12000;
}

const logel = function (node) {
	if (node && node.hasAttributes && node.hasAttributes()) {
		console.log(
			"Attributes",
			Object.fromEntries(
				Array.from(node.attributes).map((attr) => [attr.name, attr.value])
			)
		);
	} else if (node) {
		console.log(node.nodeName, "has no attributes");
	}
};

const getAttribute = function (node, attributeName) {
	if (!node || !node.attributes) {
		return null;
	}
	for (const attr of Array.from(node.attributes)) {
		if (attr.nodeName === attributeName || attr.name === attributeName) {
			return attr.nodeValue !== undefined ? attr.nodeValue : attr.value;
		}
	}
	return null;
};

const upperCaseFirst = function (str) {
	if (!str) return "";
	return str.charAt(0).toUpperCase() + str.slice(1);
};

const sanitizeIdentifier = function (name) {
	let id = String(name || "GeneratedX3D")
		.replace(/^.*[\\/]/, "")
		.replace(/\.[^.]+$/, "")
		.replace(/[^A-Za-z0-9_]/g, "_");
	if (!/^[A-Za-z_]/.test(id)) {
		id = "Unit_" + id;
	}
	return id;
};

const escapePascalString = function (str) {
	return "'" + String(str).replace(/'/g, "''") + "'";
};

const toPascalStringLiteral = function (str) {
	const s = String(str);
	if (!/[\r\n]/.test(s)) {
		return escapePascalString(s);
	}
	return s
		.split(/\r?\n/)
		.map(escapePascalString)
		.join(" + LineEnding +\n  ");
};

const stripQuotes = function (str) {
	return String(str).replace(/^'|'$/g, "");
};

const parseMFString = function (nodeValue) {
	const trimmed = String(nodeValue || "").trim();
	if (!trimmed) return [];
	const items = [];
	const re = /"((?:[^"\\]|\\.)*)"/g;
	let match;
	while ((match = re.exec(trimmed)) !== null) {
		items.push(match[1].replace(/\\"/g, '"').replace(/\\\\/g, "\\"));
	}
	if (items.length === 0) {
		return trimmed.split(/[ ,\t\r\n]+/).filter(Boolean);
	}
	return items;
};

const getDeclarations = function (node) {
	let cur = node;
	while (cur) {
		const ns = [];
		const nameAttr = getAttribute(cur, "name");
		const defAttr = getAttribute(cur, "DEF");
		const useAttr = getAttribute(cur, "USE");
		if (nameAttr) ns.push(nameAttr);
		if (defAttr) ns.push(defAttr);
		if (useAttr) ns.push(useAttr);
		if (ns.length > 0) {
			return ns;
		}
		cur = cur.parentNode;
	}
	return [];
};

const getDeclaration = function (node) {
	return getDeclarations(node)[0] || null;
};

const getFieldName = function (field) {
	return field ? field.nodeName || field.name : null;
};

const getNames = function (node) {
	const ns = [];
	if (getAttribute(node, "name")) ns.push(getAttribute(node, "name"));
	if (getAttribute(node, "USE")) ns.push(getAttribute(node, "USE"));
	if (getAttribute(node, "DEF")) ns.push(getAttribute(node, "DEF"));
	return ns;
};

const getAName = function (node) {
	return (
		getAttribute(node, "name") ||
		getAttribute(node, "USE") ||
		getAttribute(node, "DEF")
	);
};

PascalSerializer.prototype = {
	log: function (...args) {
		if (this.debug) {
			console.log(...args);
		}
	},

	getMeta: function (element) {
		if (!element || typeof element !== "object") {
			return null;
		}
		let meta = this.nodeMeta.get(element);
		if (!meta) {
			meta = {
				stacknumber: undefined,
				nodeNameOverride: null,
				varNameOverride: null,
				fieldVarName: null,
				isUse: false
			};
			this.nodeMeta.set(element, meta);
		}
		return meta;
	},

	effectiveNodeName: function (element) {
		if (!element) return "";
		const meta = this.nodeMeta.get(element);
		return (meta && meta.nodeNameOverride) || element.nodeName;
	},

	castleType: function (element, isNodeSuffix = "") {
		const name = this.effectiveNodeName(element);
		switch (name) {
			case "ProtoDeclare":
			case "ProtoBody":
				return "TX3DPrototype";
			case "ProtoInterface":
				return "TX3DInterfaceDeclaration";
			case "ProtoInstance":
				return "TX3DPrototypeNode";
			case "ExternProtoDeclare":
				return "TX3DExternalPrototype";
			case "IMPORT":
				return "TX3DImport";
			case "EXPORT":
				return "TX3DExport";
			case "ROUTE":
			case "X3DROUTE":
				return "TX3DRoute";
			default:
				return "T" + name + isNodeSuffix;
		}
	},

	stackname: function (element, override) {
		if (!element) return "nil";
		const meta = this.getMeta(element);
		if (typeof override !== "undefined") {
			meta.stacknumber = override;
		}
		if (meta.varNameOverride) {
			return meta.varNameOverride;
		}
		const name = this.effectiveNodeName(element);
		return name + meta.stacknumber;
	},

	chunkStatements: function (statements, maxStatements, maxChars) {
		const chunks = [];
		let current = [];
		let charCount = 0;

		for (const stmt of statements) {
			if (!stmt) continue;
			const trimmed = stmt.trim();
			if (!trimmed) continue;

			const line = stmt.endsWith("\n") ? stmt : stmt + "\n";
			if (
				current.length > 0 &&
				(current.length >= maxStatements || charCount + line.length >= maxChars)
			) {
				chunks.push(current.join(""));
				current = [];
				charCount = 0;
			}
			current.push(line);
			charCount += line.length;
		}
		if (current.length > 0) {
			chunks.push(current.join(""));
		}
		return chunks;
	},

	// Kept for external callers. Handles Pascal doubled quotes (''), comments, and brackets.
	splitStatements: function (body, maxStatements, maxChars) {
		const chunks = [];
		const n = body.length;
		let start = 0,
			count = 0,
			depth = 0,
			i = 0;
		while (i < n) {
			const c = body[i];
			const c2 = body[i + 1];
			if (c === "'") {
				i++;
				while (i < n) {
					if (body[i] === "'") {
						if (body[i + 1] === "'") {
							i += 2;
							continue;
						}
						i++;
						break;
					}
					i++;
				}
			} else if (c === "{") {
				const end = body.indexOf("}", i);
				if (end < 0) break;
				i = end + 1;
			} else if (c === "(" && c2 === "*") {
				const end = body.indexOf("*)", i + 2);
				if (end < 0) break;
				i = end + 2;
			} else if (c === "/" && c2 === "/") {
				const end = body.indexOf("\n", i);
				if (end < 0) break;
				i = end + 1;
			} else if (c === "(" || c === "[") {
				depth++;
				i++;
			} else if (c === ")" || c === "]") {
				if (depth > 0) depth--;
				i++;
			} else if (c === ";" && depth === 0) {
				i++;
				count++;
				if (count >= maxStatements || i - start >= maxChars) {
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

	serializeToString: function (json, element, clazz, mapToMethod, fieldTypes) {
		this.code = [];
		this.preno = 0;
		this.DEFs = {};
		this.DEFnumbers = {};
		this.DEFvars = {};
		this.protos = {};
		this.nodeMeta = new WeakMap();
		this.statements = [];
		this.usesPrototypes = false;

		const unitName = sanitizeIdentifier(clazz);
		const rootId = this.preno++;
		this.rootVarName = this.stackname(element, rootId);
		const rootType = "TX3DRootNode";

		this.code.push(this.rootVarName + ": " + rootType + ";");
		this.statements.push(this.rootVarName + " := " + rootType + ".Create;\n");

		this.subSerializeToString(
			element,
			mapToMethod || {},
			fieldTypes || {},
			3,
			[rootId],
			""
		);

		const chunks = this.chunkStatements(
			this.statements,
			this.maxStatementsPerProc,
			this.maxCharsPerProc
		);
		const procName = (k) => "Init" + unitName + "Part" + k;

		let str = "";
		str += "unit " + unitName + ";\n\n";
		str += "interface\n\n";
		str += "uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;\n\n";
		str += "function Create" + unitName + ": " + rootType + ";\n\n";
		str += "implementation\n\n";

		if (this.usesPrototypes) {
			str += "uses Classes, SysUtils, X3DLoad, CastleVectors;\n\n";
			str += [
				"function CreateEmptyPrototype(const AName: String): TX3DPrototype;",
				"var",
				"  Stream: TStringStream;",
				"  TempRoot: TX3DRootNode;",
				"  CopyState: TX3DNodeDeepCopyState;",
				"begin",
				"  Stream := TStringStream.Create('#X3D V4.0 utf8' + LineEnding + 'PROTO ' + AName + ' [] {}');",
				"  try",
				"    TempRoot := LoadNode(Stream, '', 'model/x3d+vrml');",
				"    try",
				"      CopyState := TX3DNodeDeepCopyState.Create;",
				"      try",
				"        Result := TempRoot.Prototypes[0].DeepCopy(CopyState) as TX3DPrototype;",
				"      finally",
				"        FreeAndNil(CopyState);",
				"      end;",
				"    finally",
				"      FreeAndNil(TempRoot);",
				"    end;",
				"  finally",
				"    FreeAndNil(Stream);",
				"  end;",
				"end;",
				""
			].join("\n") + "\n";
		} else {
			str += "uses CastleVectors;\n\n";
		}

		if (this.code.length > 0) {
			str += "var\n";
			str += "  " + this.code.join("\n  ") + "\n\n";
		}

		for (let k = 0; k < chunks.length; k++) {
			str += "procedure " + procName(k) + ";\n";
			str += "begin\n";
			str += chunks[k];
			if (!chunks[k].endsWith("\n")) {
				str += "\n";
			}
			str += "end;\n\n";
		}

		str += "function Create" + unitName + ": " + rootType + ";\n";
		str += "begin\n";
		for (let k = 0; k < chunks.length; k++) {
			str += "  " + procName(k) + ";\n";
		}
		str += "  Result := " + this.rootVarName + ";\n";
		str += "end;\n\n";
		str += "begin\n";
		str += "end.\n";

		return str;
	},

	printSubObject: function (attrType, type, values) {
		if (attrType.startsWith("MF")) {
			const newArray = [];
			for (let j = 0; j < values.length; ) {
				const newObject = {};
				for (const letter in type) {
					newObject[type[letter]] = parseFloat(values[j++]);
				}
				newArray.push(newObject);
			}
			return newArray;
		} else {
			const newObject = {};
			let j = 0;
			for (const letter in type) {
				newObject[type[letter]] = parseFloat(values[j++]);
			}
			return newObject;
		}
	},

	printSubArray: function (attrType, type, rawValues, j, lead, trail, numpersub, attr) {
		let values = rawValues.filter((v) => v !== "" && v !== null && v !== undefined);
		let MFLead = "(";
		let MFTrail = ")";

		if (numpersub > 1 && attrType.startsWith("MF")) {
			const newArrays = [];
			for (let k = 0; k + numpersub <= values.length; k += numpersub) {
				const newArray = values.slice(k, k + numpersub);
				let params = "";
				if (
					attrType === "MFRotation" ||
					attrType.endsWith("RGBA") ||
					attrType.indexOf("4") > 0
				) {
					params = "Vector4(" + newArray.join(j) + ")";
				} else if (attrType.endsWith("Color") || attrType.indexOf("3") > 0) {
					params = "Vector3(" + newArray.join(j) + ")";
				} else if (attrType.indexOf("2") > 0) {
					params = "Vector2(" + newArray.join(j) + ")";
				} else {
					params = "(" + newArray.join(j) + ")";
				}
				newArrays.push(params);
			}
			MFLead = "([";
			MFTrail = "])";
			values = newArrays;
		} else if (
			attrType === "MFInt32" ||
			attrType === "MFFloat" ||
			attrType === "MFDouble" ||
			attrType === "MFTime" ||
			attrType === "MFBool"
		) {
			MFLead = "([";
			MFTrail = "])";
		} else if (attrType === "MFString") {
			if (attr === "family") {
				const firstFamily = values[0] || "SERIF";
				return "ff" + upperCaseFirst(firstFamily.toLowerCase());
			} else if (attr === "justify") {
				values = values.map((v) => upperCaseFirst(v.toLowerCase()));
				lead = "fj";
				j = ", fj";
				trail = "";
				MFLead = "";
				MFTrail = "";
			} else {
				MFLead = "([";
				MFTrail = "])";
				return MFLead + values.map(escapePascalString).join(", ") + MFTrail;
			}
		} else if (attrType === "SFImage") {
			values = values.map((val) => {
				const n = Number(val);
				return Number.isInteger(n) && n > 0x7fffffff ? n - 4294967296 : val;
			});
			const w = values[0] !== undefined ? values[0] : 0;
			const h = values[1] !== undefined ? values[1] : 0;
			const pixels = values.slice(2).join(j);
			return "MakeRGBAImage(" + w + ", " + h + ", [" + pixels + "])";
		} else if (attrType === "SFMatrix4f" || attrType === "SFMatrix4d") {
			MFLead = "MakeMatrix4([";
			MFTrail = "])";
		} else if (attrType.startsWith("SFVec3") || attrType.startsWith("SFVec2")) {
			MFLead = "(";
			MFTrail = ")";
		}

		if (type === "int") {
			values = values.map((val) => {
				const n = Number(val);
				return Number.isInteger(n) && n > 0x7fffffff ? String(n - 4294967296) : val;
			});
		} else if (type === "boolean") {
			values = values.map((val) => {
				if (val === "true") return "True";
				if (val === "false") return "False";
				return val;
			});
		}

		if (values.length === 0) {
			return MFLead + MFTrail;
		}
		return MFLead + lead + values.join(j) + trail + MFTrail;
	},

	DEFassign: function (name, node) {
		const key = stripQuotes(name);
		this.log("assigning DEF", key);
		this.DEFs[key] = node;
	},

	DEFretrieve: function (name) {
		const key = typeof name === "string" ? stripQuotes(name) : getAName(name);
		this.log("retrieving DEF", key);
		return this.DEFs[key];
	},

	printParentChild: function (element, node, mapToMethod, n, oldNodeName) {
		const parentName = this.effectiveNodeName(element);
		const childName = this.effectiveNodeName(node);
		let prepre = ".";
		let addpre = childName !== "IS" ? "Add" : "Set";

		let method = childName || oldNodeName;
		if (mapToMethod && typeof mapToMethod[parentName] === "object") {
			if (typeof mapToMethod[parentName][childName] === "string") {
				method = mapToMethod[parentName][childName].slice(3);
				addpre = "";
			}
		} else if (mapToMethod && typeof mapToMethod[parentName] === "string") {
			method = mapToMethod[parentName].slice(3);
			addpre = "";
		}

		const containerField = getAttribute(node, "containerField");
		if (containerField !== null) {
			method = containerField;
			addpre = "Set";
		}
		method = upperCaseFirst(method);

		if (parentName === "LayerSet" && method === "Layers") {
			method = method + ".Add";
			addpre = "Fd";
		}
		if (method === "Child") {
			method = "Children";
		}
		if (method === "Children") {
			method = method + ".Add";
			addpre = "Fd";
		}
		if (parentName === "Appearance" && method === "Shaders") {
			method = "Shaders.Add";
			addpre = "Fd";
		}
		if ((parentName === "ComposedShader" || parentName === "Effect") && method === "Parts") {
			method = "Parts.Add";
			addpre = "Fd";
		}
		if (parentName === "ProtoBody") {
			method = "Children";
			addpre = "Add";
		}
		if (addpre + method === "SetJoints") {
			method = "Joints";
			addpre = "Add";
		}
		if (addpre + method === "SetViewpoints") {
			method = "Viewpoints";
			addpre = "Add";
		}
		if (addpre + method === "SetSegments") {
			method = "Segments";
			addpre = "Add";
		}
		if (
			(parentName === "MultiTextureTransform" && method.slice(3) === "TextureTransform") ||
			(parentName === "MultiTexture" && method.slice(3) === "Texture") ||
			(parentName === "MultiTextureCoordinate" && method.slice(3) === "TexCoord")
		) {
			method = method.slice(3) + ".Add";
			addpre = "Fd";
		}
		if (parentName === "MetadataSet") {
			method = method + ".Add";
			addpre = "Fd";
		}
		if (parentName && parentName.endsWith("Script")) {
			method = ".AddCustomField";
			addpre = "Fd";
		}
		if (parentName === "ProtoDeclare" && childName === "ProtoInterface") {
			method = ".Add";
			addpre = "InterfaceDeclarations";
		}
		if (parentName === "field" || parentName === "MFNode") {
			method = ".Add";
			addpre = "Fd";
		}
		if (
			(parentName === "field" || parentName === "SFNode") &&
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
			method = ".Value";
			addpre = "Fd";
		}
		if (
			parentName === "HAnimHumanoid" &&
			(method === "Joints" ||
				method === "Skeleton" ||
				method === "Viewpoints" ||
				method === "Segments")
		) {
			method = method + ".Add";
			addpre = "Fd";
		}
		if (parentName === "HAnimHumanoid" && method === "SkinCoord") {
			method = method + ".Set";
			addpre = "Fd";
		}

		addpre = upperCaseFirst(addpre);
		method = upperCaseFirst(method);
		return prepre + addpre + method;
	},

	stringValue: function (fieldValue, attr, attrType) {
		if (fieldValue === null || typeof fieldValue === "undefined") {
			return "nil";
		}
		const nodeValue = String(fieldValue);
		if (nodeValue === "NULL") {
			return "nil";
		}

		const splitTokens = () => nodeValue.trim().split(/[ ,\t\r\n]+/).filter(Boolean);

		if (attrType === "SFString") {
			return toPascalStringLiteral(nodeValue);
		} else if (attrType === "SFInt32") {
			return nodeValue.trim();
		} else if (attrType === "SFFloat") {
			return nodeValue.trim() + FLOAT_SUFFIX;
		} else if (attrType === "SFDouble" || attrType === "SFTime") {
			return nodeValue.trim() + DOUBLE_SUFFIX;
		} else if (attrType === "SFBool") {
			if (nodeValue === "true") return "True";
			if (nodeValue === "false") return "False";
			return nodeValue;
		} else if (attrType === "MFTime") {
			return this.printSubArray(attrType, "double", splitTokens(), DOUBLE_SUFFIX + ", ", "", DOUBLE_SUFFIX, 1, attr);
		} else if (attrType === "MFString") {
			return this.printSubArray(attrType, "string", parseMFString(nodeValue), ", ", "", "", 1, attr);
		} else if (attrType === "MFInt32" || attrType === "MFImage" || attrType === "SFImage") {
			return this.printSubArray(attrType, "int", splitTokens(), ", ", "", "", 1, attr);
		} else if (attrType === "MFColor") {
			return this.printSubArray(attrType, "float", splitTokens(), FLOAT_SUFFIX + ", ", "", FLOAT_SUFFIX, 3, attr);
		} else if (attrType === "MFColorRGBA") {
			return this.printSubArray(attrType, "float", splitTokens(), FLOAT_SUFFIX + ", ", "", FLOAT_SUFFIX, 4, attr);
		} else if (attrType === "SFVec3f" || attrType === "SFColor") {
			return "Vector3" + this.printSubArray(attrType, "float", splitTokens(), FLOAT_SUFFIX + ", ", "", FLOAT_SUFFIX, 1, attr);
		} else if (attrType === "SFVec4f" || attrType === "SFRotation" || attrType === "SFColorRGBA") {
			return "Vector4" + this.printSubArray(attrType, "float", splitTokens(), FLOAT_SUFFIX + ", ", "", FLOAT_SUFFIX, 1, attr);
		} else if (attrType === "SFVec2f") {
			return "Vector2" + this.printSubArray(attrType, "float", splitTokens(), FLOAT_SUFFIX + ", ", "", FLOAT_SUFFIX, 1, attr);
		} else if (attrType === "MFVec2f") {
			return this.printSubArray(attrType, "float", splitTokens(), FLOAT_SUFFIX + ", ", "", FLOAT_SUFFIX, 2, attr);
		} else if (attrType === "MFVec3f") {
			return this.printSubArray(attrType, "float", splitTokens(), FLOAT_SUFFIX + ", ", "", FLOAT_SUFFIX, 3, attr);
		} else if (attrType === "MFRotation" || attrType === "MFVec4f") {
			return this.printSubArray(attrType, "float", splitTokens(), FLOAT_SUFFIX + ", ", "", FLOAT_SUFFIX, 4, attr);
		} else if (attrType === "MFFloat") {
			return this.printSubArray(attrType, "float", splitTokens(), FLOAT_SUFFIX + ", ", "", FLOAT_SUFFIX, 1, attr);
		} else if (attrType === "SFMatrix3f" || attrType === "MFMatrix3f") {
			return this.printSubArray(attrType, "float", splitTokens(), FLOAT_SUFFIX + ", ", "", FLOAT_SUFFIX, 9, attr);
		} else if (attrType === "MFMatrix4f" || attrType === "SFMatrix4f") {
			return this.printSubArray(attrType, "float", splitTokens(), FLOAT_SUFFIX + ", ", "", FLOAT_SUFFIX, 16, attr);
		} else if (
			attrType === "SFVec2d" ||
			attrType === "SFVec3d" ||
			attrType === "SFVec4d" ||
			attrType === "MFVec2d" ||
			attrType === "MFVec3d" ||
			attrType === "MFVec4d" ||
			attrType === "MFDouble"
		) {
			const sub = this.printSubArray(attrType, "double", splitTokens(), DOUBLE_SUFFIX + ", ", "", DOUBLE_SUFFIX, 1, attr);
			switch (attrType) {
				case "SFVec2d":
					return "Vector2Double" + sub;
				case "SFVec3d":
					return "Vector3Double" + sub;
				case "SFVec4d":
					return "Vector4Double" + sub;
				default:
					return sub;
			}
		} else if (attrType === "SFMatrix3d" || attrType === "MFMatrix3d") {
			return this.printSubArray(attrType, "double", splitTokens(), DOUBLE_SUFFIX + ", ", "", DOUBLE_SUFFIX, 9, attr);
		} else if (attrType === "SFMatrix4d" || attrType === "MFMatrix4d") {
			return this.printSubArray(attrType, "double", splitTokens(), DOUBLE_SUFFIX + ", ", "", DOUBLE_SUFFIX, 16, attr);
		} else if (attrType === "MFBool") {
			return this.printSubArray(attrType, "boolean", splitTokens(), ", ", "", "", 1, attr);
		}

		return toPascalStringLiteral(nodeValue);
	},

	getInterfaceEntry: function (instanceName, fieldName) {
		const instance = this.protos[instanceName];
		if (!instance || !instance["$copies$"] || !instance["$copies$"][0]) {
			return null;
		}
		return instance["$copies$"][0][fieldName] || null;
	},

	getInterfaceChildren: function (instanceName, fieldName) {
		const entry = this.getInterfaceEntry(instanceName, fieldName);
		return entry ? entry["$children$"] : [];
	},

	getInterfaceType: function (instanceName, fieldName) {
		const entry = this.getInterfaceEntry(instanceName, fieldName);
		return entry ? entry["$type$"] : null;
	},

	getInterfaceAccessType: function (instanceName, fieldName) {
		const entry = this.getInterfaceEntry(instanceName, fieldName);
		return entry ? entry["$accessType$"] : null;
	},

	getInterfaceValue: function (instanceName, fieldName) {
		const entry = this.getInterfaceEntry(instanceName, fieldName);
		return entry ? entry["$value$"] : null;
	},

	getInterfaceName: function (instanceName, fieldName) {
		const entry = this.getInterfaceEntry(instanceName, fieldName);
		return entry ? entry["$name$"] : fieldName;
	},

	getInterfaceField: function (instanceName, fieldName) {
		const entry = this.getInterfaceEntry(instanceName, fieldName);
		return entry ? entry["$field$"] : null;
	},

	createCopy: function (instanceName) {
		const declaration = this.DEFretrieve(instanceName);
		const interfaceStatement = declaration ? declaration["$interface$"] : null;

		if (!this.protos[instanceName] || typeof this.protos[instanceName] !== "object") {
			this.protos[instanceName] = {};
		}
		const instance = this.protos[instanceName];
		if (!Array.isArray(instance["$copies$"])) {
			instance["$copies$"] = [];
		}

		const newItem = instance["$copies$"].length;
		instance["$copies$"][newItem] = {};
		instance["$copy$"] = instance["$copies$"][newItem];
		const inst = instance["$copy$"];

		if (newItem > 0 && interfaceStatement) {
			const intf = instance["$copies$"][0];
			for (const field of Array.from(interfaceStatement.childNodes || [])) {
				if (field.nodeType !== 1 || field.nodeName !== "field") continue;
				const fieldName = getAttribute(field, "name");
				if (fieldName && intf[fieldName]) {
					inst[fieldName] = {
						$type$: intf[fieldName]["$type$"],
						$accessType$: intf[fieldName]["$accessType$"],
						$name$: intf[fieldName]["$name$"],
						$field$: intf[fieldName]["$field$"],
						$value$: intf[fieldName]["$value$"],
						$children$: intf[fieldName]["$children$"]
					};
				}
			}
		}
		return inst;
	},

	setBody: function (body) {
		return body;
	},

	setProto: function (protoStatement) {
		for (const protoName of getDeclarations(protoStatement)) {
			this.DEFassign(protoName, protoStatement);
			for (const node of Array.from(protoStatement.childNodes || [])) {
				if (protoStatement.nodeName === "ProtoDeclare" && node.nodeName === "ProtoInterface") {
					protoStatement["$interface$"] = this.setInterface(node, protoName);
				}
				if (protoStatement.nodeName === "ProtoDeclare" && node.nodeName === "ProtoBody") {
					protoStatement["$body$"] = this.setBody(node, protoName);
				}
			}
			if (
				protoStatement.nodeName === "ExternProtoDeclare" ||
				(protoStatement.nodeName &&
					(protoStatement.nodeName.endsWith("Script") ||
						protoStatement.nodeName.endsWith("ComposedShader") ||
						protoStatement.nodeName === "Effect" ||
						protoStatement.nodeName === "PackagedShader" ||
						protoStatement.nodeName === "ShaderProgram"))
			) {
				protoStatement["$interface$"] = this.setInterface(protoStatement, protoName);
			}
		}
	},

	setInterface: function (interfaceStatement, protoName) {
		if (!protoName) {
			console.error("setInterface: protoName is null");
			return null;
		}
		const intf = this.createCopy(protoName);
		for (const field of Array.from(interfaceStatement.childNodes || [])) {
			if (field.nodeName === "field" && field.nodeType === 1) {
				const fieldName = getAttribute(field, "name");
				const fieldType = getAttribute(field, "type");
				const fieldValue = getAttribute(field, "value");
				const fieldAccess = getAttribute(field, "accessType");

				if (fieldName) {
					intf[fieldName] = {
						$name$: fieldName,
						$field$: field,
						$children$: field.childNodes,
						$type$: fieldType,
						$accessType$: fieldAccess,
						$value$: fieldValue
					};
				} else {
					console.error("setInterface: missing field name in", protoName);
				}
			}
		}
		return interfaceStatement;
	},

	emitFieldDeclaration: function (ownerElement, fieldNode) {
		const fieldName = getAttribute(fieldNode, "name");
		if (!fieldName) {
			throw new Error("fieldName is null in " + ownerElement.nodeName);
		}
		const ownerName = this.effectiveNodeName(ownerElement);
		const ownerVar = this.stackname(ownerElement);
		const isPrototype =
			ownerName === "ProtoDeclare" || ownerName === "ExternProtoDeclare";
		// TX3DPrototypeBase is not a TX3DNode, so prototype interface fields use nil as ParentNode
		const fieldParentArg = isPrototype ? "nil" : ownerVar;

		const parentName = getDeclaration(ownerElement);
		const fieldType =
			getAttribute(fieldNode, "type") ||
			(parentName ? this.getInterfaceType(parentName, fieldName) : null) ||
			"SFString";
		const accessType =
			getAttribute(fieldNode, "accessType") ||
			(parentName ? this.getInterfaceAccessType(parentName, fieldName) : null) ||
			"inputOutput";
		const rawValue = getAttribute(fieldNode, "value");

		const stackId = this.getMeta(fieldNode).stacknumber;
		const declVar = "FieldDecl" + stackId;
		const valVar = "FieldVal" + stackId;
		const pascalFieldType = "T" + fieldType;
		const isEvent = accessType === "inputOnly" || accessType === "outputOnly";
		const varType = isEvent ? "TX3DEvent" : pascalFieldType;

		if (isPrototype) {
			this.code.push(declVar + ": TX3DInterfaceDeclaration;");
			this.getMeta(fieldNode).varNameOverride = declVar;
		}
		this.code.push(valVar + ": " + varType + ";");
		this.getMeta(fieldNode).fieldVarName = valVar;

		if (accessType === "inputOnly") {
			this.statements.push(
				valVar + " := " + pascalFieldType + ".CreateEvent(" + fieldParentArg + ", " + escapePascalString(fieldName) + ", True);\n"
			);
		} else if (accessType === "outputOnly") {
			this.statements.push(
				valVar + " := " + pascalFieldType + ".CreateEvent(" + fieldParentArg + ", " + escapePascalString(fieldName) + ", False);\n"
			);
		} else {
			const exposed = accessType === "inputOutput" ? "True" : "False";
			if (fieldType === "SFNode" || fieldType === "MFNode" || rawValue === null) {
				this.statements.push(
					valVar + " := " + pascalFieldType + ".CreateUndefined(" + fieldParentArg + ", " + exposed + ", " + escapePascalString(fieldName) + ");\n"
				);
			} else {
				let sv = this.stringValue(rawValue, fieldName, fieldType);
				if (fieldType.startsWith("MF") && sv.startsWith("(") && sv.endsWith(")")) {
					sv = sv.slice(1, -1);
				}
				this.statements.push(
					valVar + " := " + pascalFieldType + ".Create(" + fieldParentArg + ", " + exposed + ", " + escapePascalString(fieldName) + ", " + sv + ");\n"
				);
			}
		}

		if (isPrototype) {
			this.statements.push(
				declVar + " := TX3DInterfaceDeclaration.Create(" + fieldParentArg + ");\n"
			);
			this.statements.push(declVar + ".FieldOrEvent := " + valVar + ";\n");
			this.statements.push(valVar + ".ParentInterfaceDeclaration := " + declVar + ";\n");
			this.statements.push(ownerVar + ".InterfaceDeclarations.Add(" + declVar + ");\n");
		} else {
			// Script / ComposedShader nodes register custom fields via AddCustomFieldOrEvent
			this.statements.push(ownerVar + ".AddCustomFieldOrEvent(" + valVar + ");\n");
		}
	},

	emitProtoFieldValue: function (protoInstanceEl, fieldValueNode) {
		const fieldName = getAttribute(fieldValueNode, "name");
		if (!fieldName) {
			throw new Error("fieldValue missing name in ProtoInstance");
		}
		const protoName = getAttribute(protoInstanceEl, "name") || getDeclaration(protoInstanceEl);
		const fieldType = protoName ? this.getInterfaceType(protoName, fieldName) : null;
		const rawValue = getAttribute(fieldValueNode, "value");
		const instVar = this.stackname(protoInstanceEl);

		if (rawValue !== null && fieldType) {
			let sv = this.stringValue(rawValue, fieldName, fieldType);
			const pascalType = "T" + fieldType;
			if (fieldType.startsWith("MF")) {
				if (sv.startsWith("(") && sv.endsWith(")")) {
					sv = sv.slice(1, -1);
				}
				this.statements.push(
					"(" + instVar + ".Field(" + escapePascalString(fieldName) + ") as " + pascalType + ").Send(" + sv + ");\n"
				);
			} else {
				this.statements.push(
					"(" + instVar + ".Field(" + escapePascalString(fieldName) + ") as " + pascalType + ").Value := " + sv + ";\n"
				);
			}
		}
	},

	getParams: function (element, node) {
		let isNode = "";
		let params = "";
		const nodeName = node.nodeName;
		const meta = this.getMeta(node);

		switch (nodeName) {
			case "ROUTE":
				meta.nodeNameOverride = "X3DROUTE";
				params = ".Create;";
				break;
			case "Scene":
				isNode = "Node";
				meta.nodeNameOverride = "Group";
				params = ".Create;";
				break;
			case "Light":
				params = ".Create(nil);";
				break;
			case "ProtoDeclare":
				this.usesPrototypes = true;
				this.setProto(node);
				params =
					"CreateEmptyPrototype(" +
					escapePascalString(getAttribute(node, "name") || "Proto") +
					");";
				break;
			case "ProtoBody":
				this.setBody(node, getDeclaration(node.parentNode));
				params = ".Create;";
				break;
			case "ProtoInterface":
				params = ".Create(nil);";
				break;
			case "ExternProtoDeclare":
				this.setProto(node);
				meta.nodeNameOverride = "X3DExternalPrototype";
				params = ".Create;";
				break;
			case "ProtoInstance":
				isNode = "";
				{
					const protoName = getAttribute(node, "name");
					const candidates = protoName ? [protoName, ...getDeclarations(node)] : getDeclarations(node);
					for (const declName of candidates) {
						const protoDecl = this.DEFretrieve(declName);
						if (protoDecl) {
							params =
								"TX3DPrototypeNode.CreatePrototypeNode('', '', " +
								this.stackname(protoDecl) +
								");";
							break;
						}
					}
					if (!params) {
						params = "TX3DPrototypeNode.CreatePrototypeNode('', '', nil);";
					}
				}
				break;
			case "Script":
			case "ComposedShader":
			case "Effect":
			case "PackagedShader":
			case "ShaderProgram":
				this.setProto(node);
				isNode = "Node";
				params = ".Create;";
				break;
			default:
				isNode = "Node";
				params = ".Create;";
				break;
		}
		return [isNode, params];
	},

	instantiateChildElement: function (parentEl, childEl, mapToMethod, fieldTypes, n, stack) {
		const childId = this.preno++;
		stack.unshift(childId);
		this.getMeta(childEl).stacknumber = childId;

		const useAttr = getAttribute(childEl, "USE");
		if (useAttr !== null) {
			const defTarget = this.DEFretrieve(useAttr);
			if (defTarget) {
				this.getMeta(childEl).varNameOverride = this.stackname(defTarget);
				this.getMeta(childEl).isUse = true;
			} else {
				console.error("USE without matching DEF:", useAttr);
			}
			stack.shift();
			return childEl;
		}

		const [fcIsNode, fcParams] = this.getParams(parentEl, childEl);
		const fcType = this.castleType(childEl, fcIsNode);
		const fcVar = this.stackname(childEl);
		this.code.push(fcVar + ": " + fcType + ";");

		const createExpr =
			childEl.nodeName === "ProtoInstance" || childEl.nodeName === "ProtoDeclare"
				? fcParams
				: fcType + fcParams;
		this.statements.push(fcVar + " := " + createExpr + "\n");

		this.subSerializeToString(
			childEl,
			mapToMethod,
			fieldTypes,
			n + 1,
			stack,
			this.stackname(parentEl)
		);
		stack.shift();
		return childEl;
	},

	subSerializeToString: function (element, mapToMethod, fieldTypes, n, stack, parentName) {
		const elName = this.effectiveNodeName(element);
		const elVar = this.stackname(element);

		if (elName === "X3DROUTE") {
			this.emitRoute(element, parentName);
			return;
		}
		if (elName === "IMPORT" || elName === "EXPORT") {
			return;
		}

		let MetaName = "''";
		let MetaContent = "''";
		let ComponentName = "''";
		let ComponentLevel = "0";

		for (const attrsa of Array.from(element.attributes || [])) {
			if (attrsa.nodeType !== 2) continue;
			const attr = attrsa.nodeName;
			const rawVal = attrsa.nodeValue;

			if (
				attr === "xmlns:xsd" ||
				attr === "xsd:noNamespaceSchemaLocation" ||
				attr === "containerField" ||
				attr === "id" ||
				(elName === "Sphere" && attr === "subdivision") ||
				(elName === "X3D" &&
					(attr === "showStat" ||
						attr === "showLog" ||
						attr === "width" ||
						attr === "height" ||
						attr === "backend")) ||
				(elName === "Background" &&
					(attr === "groundTransparency" || attr === "skyTransparency"))
			) {
				continue;
			}

			let attrType = "SFString";
			if (fieldTypes[elName] && fieldTypes[elName][attr]) {
				attrType = fieldTypes[elName][attr];
			}

			const strval = this.stringValue(rawVal, attr, attrType);
			let method = upperCaseFirst(attr);
			if (attr === "version") method = "Version";
			if (attr === "string") method = "Text";
			if (attr === "name") method = "X3DName";

			if (elName === "X3D" && attr === "version") {
				const majorMinor = rawVal.trim().split(".");
				const major = parseInt(majorMinor[0], 10);
				const minor = parseInt(majorMinor[1], 10);
				if (!Number.isNaN(major)) {
					this.statements.push(this.rootVarName + ".ForceVersion.Major := " + major + ";\n");
				}
				if (!Number.isNaN(minor)) {
					this.statements.push(this.rootVarName + ".ForceVersion.Minor := " + minor + ";\n");
				}
			} else if (elName === "meta") {
				if (attr === "name") MetaName = strval;
				if (attr === "content") MetaContent = strval;
			} else if (elName === "component") {
				if (attr === "name") ComponentName = strval;
				if (attr === "level") ComponentLevel = strval;
			} else if (elName === "unit") {
				// Unit conversion declarations in <head> have no CGE node properties
			} else if (elName === "ProtoInstance" && attr === "name") {
				// 'name' on ProtoInstance selects the prototype, not the node DEF name
			} else if (attr === "DEF") {
				const existing = this.DEFretrieve(rawVal);
				if (existing) {
					this.log("Multiple DEFs with same value:", rawVal);
				}
				this.DEFassign(rawVal, element);
				this.DEFnumbers[rawVal] = this.getMeta(element).stacknumber;
				this.DEFvars[rawVal] = elVar;
				this.statements.push(elVar + ".X3DName := " + strval + ";\n");
			} else if (attr === "USE") {
				// Handled on child traversal; nothing extra needed here.
			} else if (
				attrType &&
				attrType.startsWith("MF") &&
				attr !== "justify" &&
				attr !== "family"
			) {
				this.statements.push(elVar + ".Set" + method + strval + ";\n");
			} else if (attr === "bboxSize") {
				this.statements.push(elVar + ".FdBBoxSize.Value := " + strval + ";\n");
			} else if (attr === "bboxCenter") {
				this.statements.push(elVar + ".FdBBoxCenter.Value := " + strval + ";\n");
			} else if (attr === "type" && (elName === "ShaderPart" || elName === "EffectPart")) {
				const shaderTypeMap = {
					VERTEX: "stVertex",
					FRAGMENT: "stFragment",
					GEOMETRY: "stGeometry"
				};
				const stEnum = shaderTypeMap[rawVal.trim().toUpperCase()] || "stVertex";
				this.statements.push(elVar + ".ShaderType := " + stEnum + ";\n");
			} else if (attr === "language" && (elName === "ComposedShader" || elName === "Effect")) {
				const langMap = {
					GLSL: "slGLSL",
					CG: "slCG",
					HLSL: "slHLSL",
					DEFAULT: "slDefault"
				};
				const langEnum = langMap[rawVal.trim().toUpperCase()] || "slDefault";
				this.statements.push(elVar + ".Language := " + langEnum + ";\n");
			} else if (attr === "image" && attrType === "SFImage") {
				this.statements.push(elVar + ".FdImage.Value := " + strval + ";\n");
			} else if (attr === "alphaMode" && attrType === "SFString") {
				const mode = upperCaseFirst(rawVal.trim().toLowerCase());
				this.statements.push(elVar + ".AlphaMode := am" + mode + ";\n");
			} else if (attr === "style" && elName === "FontStyle") {
				const styleVal = upperCaseFirst(rawVal.trim().toLowerCase());
				this.statements.push(elVar + ".Style := fs" + styleVal + ";\n");
			} else if (attr === "style" || attr === "class") {
				// Ignored HTML/CSS attributes
			} else if (attr === "minificationFilter" && attrType === "SFString") {
				this.statements.push(elVar + ".FdMinificationFilter.Value := " + strval + ";\n");
			} else if (attr === "magnificationFilter" && attrType === "SFString") {
				this.statements.push(elVar + ".FdMagnificationFilter.Value := " + strval + ";\n");
			} else if (attrType === "MFString" && attr === "justify") {
				const parts = strval.split(", ");
				this.statements.push(elVar + "." + method + " := " + parts[0] + ";\n");
				if (parts[1]) {
					this.statements.push(elVar + "." + method + "Minor := " + parts[1] + ";\n");
				}
			} else if (method === "AccessType" || method === "Type") {
				// Handled in field declaration
			} else {
				this.statements.push(elVar + "." + method + " := " + strval + ";\n");
			}
		}

		if (elName === "meta") {
			this.statements.push(
				this.rootVarName + ".Meta[" + MetaName + "] := " + MetaContent + ";\n"
			);
		} else if (elName === "component") {
			this.statements.push(
				this.rootVarName + ".Components[" + ComponentName + "] := " + ComponentLevel + ";\n"
			);
		}

		for (const node of Array.from(element.childNodes || [])) {
			if (node.nodeType === 1) {
				const oldNodeName = node.nodeName;

				if (oldNodeName === "IS") {
					for (const conn of Array.from(node.childNodes || [])) {
						if (conn.nodeType === 1 && conn.nodeName === "connect") {
							const nodeField = getAttribute(conn, "nodeField");
							const protoField = getAttribute(conn, "protoField");
							if (nodeField && protoField) {
								this.statements.push(
									elVar +
										".FieldOrEvent(" +
										escapePascalString(nodeField) +
										", True).IsClauseNamesAdd(" +
										escapePascalString(protoField) +
										");\n"
								);
							}
						}
					}
					continue;
				}
				if (oldNodeName === "connect") {
					continue;
				}
				if (oldNodeName === "IMPORT") {
					this.getMeta(node).stacknumber = this.preno++;
					this.emitImport(node, element);
					continue;
				}
				if (oldNodeName === "EXPORT") {
					this.getMeta(node).stacknumber = this.preno++;
					this.emitExport(node);
					continue;
				}

				const childId = this.preno++;
				stack.unshift(childId);
				this.getMeta(node).stacknumber = childId;

				const useAttr = getAttribute(node, "USE");
				if (useAttr !== null) {
					const defTarget = this.DEFretrieve(useAttr);
					if (defTarget) {
						this.getMeta(node).varNameOverride = this.stackname(defTarget);
						this.getMeta(node).isUse = true;
						const method = this.printParentChild(element, node, mapToMethod, n, oldNodeName);
						this.dealWithMethod(element, node, method);
					} else {
						console.error("USE without matching DEF:", useAttr);
					}
					stack.shift();
					continue;
				}

				if (oldNodeName === "ProtoInterface") {
					// Transparent wrapper: attach <field> declarations directly to parent ProtoDeclare
					for (const fieldChild of Array.from(node.childNodes || [])) {
						if (fieldChild.nodeType === 1 && fieldChild.nodeName === "field") {
							this.getMeta(fieldChild).stacknumber = this.preno++;
							this.emitFieldDeclaration(element, fieldChild);
							const fVar = this.getMeta(fieldChild).fieldVarName;
							const fType = getAttribute(fieldChild, "type") || "";
							for (const fc of Array.from(fieldChild.childNodes || [])) {
								if (fc.nodeType === 1) {
									this.instantiateChildElement(fieldChild, fc, mapToMethod, fieldTypes, n, stack);
									let fcVar = this.stackname(fc);
									if (fc.nodeName === "ProtoInstance" && !this.getMeta(fc).isUse) {
										fcVar = fcVar + ".Instantiate";
									}
									if (fType === "SFNode") {
										this.statements.push(fVar + ".Value := " + fcVar + ";\n");
									} else {
										this.statements.push(fVar + ".Add(" + fcVar + ");\n");
									}
								}
							}
						}
					}
					stack.shift();
					continue;
				}

				if (oldNodeName === "field") {
					this.emitFieldDeclaration(element, node);
					const fVar = this.getMeta(node).fieldVarName;
					const fType = getAttribute(node, "type") || "";
					for (const fChild of Array.from(node.childNodes || [])) {
						if (fChild.nodeType === 1) {
							this.instantiateChildElement(node, fChild, mapToMethod, fieldTypes, n, stack);
							let fChildVar = this.stackname(fChild);
							if (fChild.nodeName === "ProtoInstance" && !this.getMeta(fChild).isUse) {
								fChildVar = fChildVar + ".Instantiate";
							}
							if (fType === "SFNode") {
								this.statements.push(fVar + ".Value := " + fChildVar + ";\n");
							} else {
								this.statements.push(fVar + ".Add(" + fChildVar + ");\n");
							}
						}
					}
					stack.shift();
					continue;
				}

				if (oldNodeName === "fieldValue") {
					this.emitProtoFieldValue(element, node);
					const fvName = getAttribute(node, "name");
					const protoName = getAttribute(element, "name") || getDeclaration(element);
					const fvType = protoName && fvName ? this.getInterfaceType(protoName, fvName) : null;
					let fvCleared = false;
					for (const fvChild of Array.from(node.childNodes || [])) {
						if (fvChild.nodeType === 1) {
							this.instantiateChildElement(node, fvChild, mapToMethod, fieldTypes, n, stack);
							if (fvName && fvType) {
								const instVar = this.stackname(element);
								// A <fieldValue> containing nodes REPLACES the field's default
								// value (X3D spec). TMFNode.Add only appends, so the PROTO's
								// default nodes (e.g. a default Sphere) would stay alongside
								// the supplied ones. Clear the default first, once per field.
								if (fvType !== "SFNode" && !fvCleared) {
									this.statements.push(
										"(" + instVar + ".Field(" + escapePascalString(fvName) + ") as TMFNode).Clear;\n"
									);
									fvCleared = true;
								}
								let fvChildVar = this.stackname(fvChild);
								if (fvChild.nodeName === "ProtoInstance" && !this.getMeta(fvChild).isUse) {
									fvChildVar = fvChildVar + ".Instantiate";
								}
								if (fvType === "SFNode") {
									this.statements.push(
										"(" + instVar + ".Field(" + escapePascalString(fvName) + ") as TSFNode).Value := " + fvChildVar + ";\n"
									);
								} else {
									this.statements.push(
										"(" + instVar + ".Field(" + escapePascalString(fvName) + ") as TMFNode).Add(" + fvChildVar + ");\n"
									);
								}
							}
						}
					}
					stack.shift();
					continue;
				}

				const [isNode, params] = this.getParams(element, node);
				const nodeEffName = this.effectiveNodeName(node);

				if (
					oldNodeName !== "meta" &&
					oldNodeName !== "component" &&
					oldNodeName !== "unit" &&
					oldNodeName !== "head" &&
					oldNodeName !== "ProtoBody" &&
					nodeEffName !== "X3DROUTE"
				) {
					const pascalType = this.castleType(node, isNode);
					const childVar = this.stackname(node);
					this.code.push(childVar + ": " + pascalType + ";");
					if (oldNodeName === "ProtoInstance" || oldNodeName === "ProtoDeclare") {
						this.statements.push(childVar + " := " + params + "\n");
					} else {
						this.statements.push(childVar + " := " + pascalType + params + "\n");
					}
				}

				this.subSerializeToString(
					node,
					mapToMethod,
					fieldTypes,
					n + 1,
					stack,
					elVar
				);
				const method = this.printParentChild(element, node, mapToMethod, n, oldNodeName);
				this.dealWithMethod(element, node, method);
				stack.shift();
			} else if (node.nodeType === 8) {
				const comment = node.nodeValue || "";
				if (!comment.includes("}")) {
					this.statements.push("{ " + comment + " }\n");
				} else if (!comment.includes("*)")) {
					this.statements.push("(* " + comment + " *)\n");
				} else {
					this.statements.push("// " + comment.replace(/[\r\n]+/g, " ") + "\n");
				}
			} else if (node.nodeType === 4) {
				const cdataLit = toPascalStringLiteral(node.nodeValue || "");
				if (elName === "ShaderPart" || elName === "EffectPart") {
					this.statements.push(elVar + ".Contents := " + cdataLit + ";\n");
				} else if (getAttribute(element, "url") !== null) {
					this.statements.push(elVar + ".FdUrl.Items.Add(" + cdataLit + ");\n");
				} else {
					this.statements.push(elVar + ".SetUrl([" + cdataLit + "]);\n");
				}
			}
		}
	},

	emitImport: function (element, parentElement) {
		const inlineDEF = getAttribute(element, "inlineDEF") || "";
		const importedDEF = getAttribute(element, "importedDEF") || "";
		const asAttr = getAttribute(element, "AS");
		const impVar = "Import" + this.getMeta(element).stacknumber;

		this.code.push(impVar + ": TX3DImport;");
		this.statements.push(impVar + " := TX3DImport.Create;\n");
		this.statements.push(impVar + ".InlineNodeName := " + escapePascalString(inlineDEF) + ";\n");
		this.statements.push(impVar + ".ImportedNodeName := " + escapePascalString(importedDEF) + ";\n");
		if (asAttr !== null && asAttr !== "") {
			this.statements.push(impVar + ".ImportedNodeAlias := " + escapePascalString(asAttr) + ";\n");
		}
		const targetVar =
			parentElement && parentElement.nodeName === "Scene"
				? this.rootVarName
				: this.stackname(parentElement);
		this.statements.push(targetVar + ".AddImport(" + impVar + ");\n");
	},

	emitExport: function (element) {
		const localDEF = getAttribute(element, "localDEF") || "";
		const asAttr = getAttribute(element, "AS");
		const localTarget = this.DEFretrieve(localDEF);
		const nodeExpr = localTarget
			? this.stackname(localTarget)
			: this.rootVarName + ".FindNode(" + escapePascalString(localDEF) + ")";

		if (asAttr !== null && asAttr !== "") {
			this.statements.push(
				this.rootVarName + ".ExportNode(" + nodeExpr + ", " + escapePascalString(asAttr) + ");\n"
			);
		} else {
			this.statements.push(
				this.rootVarName + ".ExportNode(" + nodeExpr + ");\n"
			);
		}
	},

	emitRoute: function (element, parentName) {
		const FromNode = getAttribute(element, "fromNode") || "";
		const rawFromField = getAttribute(element, "fromField") || "";
		const ToNode = getAttribute(element, "toNode") || "";
		const rawToField = getAttribute(element, "toField") || "";

		let FromField = rawFromField;
		let ToField = rawToField;

		const fromTarget = this.DEFretrieve(FromNode);
		const toTarget = this.DEFretrieve(ToNode);
		const FromDEF = fromTarget ? this.stackname(fromTarget) : this.DEFvars[FromNode] || FromNode;
		const ToDEF = toTarget ? this.stackname(toTarget) : this.DEFvars[ToNode] || ToNode;

		const routeParentVar =
			element.parentNode && this.effectiveNodeName(element.parentNode) === "ProtoBody"
				? this.stackname(element.parentNode.parentNode) + ".Node"
				: parentName;

		const isCustomFieldOwner = (target) =>
			target &&
			(target.nodeName === "Script" ||
				target.nodeName === "ComposedShader" ||
				target.nodeName === "Effect" ||
				target.nodeName === "PackagedShader" ||
				target.nodeName === "ShaderProgram");

		const resolveCustomFieldExpr = (ownerName, rawField, isSource) => {
			let fieldKey = rawField;
			let fNode = this.getInterfaceField(ownerName, fieldKey);
			if (!fNode && isSource && fieldKey.endsWith("_changed")) {
				fieldKey = fieldKey.slice(0, -"_changed".length);
				fNode = this.getInterfaceField(ownerName, fieldKey);
			} else if (!fNode && !isSource && fieldKey.startsWith("set_")) {
				fieldKey = fieldKey.slice("set_".length);
				fNode = this.getInterfaceField(ownerName, fieldKey);
			}
			if (!fNode || !this.nodeMeta.has(fNode)) {
				return null;
			}
			const varName = this.getMeta(fNode).fieldVarName || this.stackname(fNode);
			const accessType = this.getInterfaceAccessType(ownerName, fieldKey) || "inputOutput";
			if (accessType === "inputOnly" || accessType === "outputOnly") {
				return varName;
			}
			return varName + (isSource ? ".EventOut" : ".EventIn");
		};

		let fromExpr = null;
		if (isCustomFieldOwner(fromTarget)) {
			fromExpr = resolveCustomFieldExpr(FromNode, rawFromField, true);
		}
		if (!fromExpr) {
			const eventOutFields = new Set([
				"isOver", "finalText", "addedEntities", "removedEntities",
				"translation", "rotation", "fraction", "enteredText",
				"isLoaded", "isActive", "enabled", "keyValue",
				"visibilitySwitchSelection", "inputNegate", "inputFalse",
				"inputTrue", "values", "choice", "spine", "orientation",
				"enterTime", "pauseTime", "resumeTime", "startTime",
				"stopTime", "cycleTime", "triggerTime", "touchTime"
			]);
			if (FromField.endsWith("_changed") || eventOutFields.has(FromField)) {
				FromField = "Event" + upperCaseFirst(FromField);
			}
			fromExpr = FromDEF + "." + FromField;
		}

		let toExpr = null;
		if (isCustomFieldOwner(toTarget)) {
			toExpr = resolveCustomFieldExpr(ToNode, rawToField, false);
		}
		if (!toExpr) {
			if (ToField === "set_rotation") ToField = "FdRotation.EventIn";
			else if (ToField === "set_translation") ToField = "FdTranslation.EventIn";
			else if (ToField === "set_scale") ToField = "scale";
			else if (ToField === "stopTime" || ToField === "set_stopTime") ToField = "FdStopTime.EventIn";
			else if (ToField === "startTime" || ToField === "set_startTime") ToField = "FdStartTime.EventIn";
			else if (ToField === "weight") ToField = "FWeight";
			else if (ToField.startsWith("set_") || ToField.startsWith("Set")) {
				ToField = "Event" + upperCaseFirst(ToField);
			}
			toExpr = ToDEF + "." + ToField;
		}

		this.statements.push("{ ROUTE " + FromNode + "." + rawFromField + " TO " + ToNode + "." + rawToField + " }\n");
		this.statements.push(routeParentVar + ".AddRoute(" + fromExpr + ", " + toExpr + ");\n");
	},

	dealWithMethod: function (element, node, method) {
		const elName = this.effectiveNodeName(element);
		const nodeName = node.nodeName;
		if (
			nodeName === "meta" ||
			nodeName === "component" ||
			nodeName === "unit" ||
			nodeName === "head" ||
			this.effectiveNodeName(node) === "X3DROUTE"
		) {
			return;
		}

		if (elName === "CastleScene") {
			method = ".AddRootNode";
		}
		if (method === ".AddGroup") {
			method = ".AddChildren";
		}

		const elVar = this.stackname(element);
		let nodeVar = this.stackname(node);
		if (nodeName === "ProtoInstance" && !this.getMeta(node).isUse) {
			nodeVar = nodeVar + ".Instantiate";
		}

		if (nodeName === "ProtoDeclare") {
			this.statements.push(this.rootVarName + ".AddPrototype(" + nodeVar + ");\n");
		} else if (nodeName === "ProtoBody") {
			// ProtoBody is a structural wrapper for ProtoDeclare.Node
		} else if (elName === "ProtoBody") {
			const protoVar = this.stackname(element.parentNode);
			this.statements.push(protoVar + ".Node" + method + "([" + nodeVar + "]);\n");
		} else if (method.startsWith(".Fd.AddCustomField") || method === ".Fd.Add") {
			this.statements.push(elVar + method.slice(3) + "(" + nodeVar + ");\n");
		} else if (method === ".Fd.Value") {
			this.statements.push(elVar + method.slice(3) + " := " + nodeVar + ";\n");
		} else if (method.startsWith(".Fd")) {
			this.statements.push(elVar + method + "(" + nodeVar + ");\n");
		} else if (nodeName === "LayerSet") {
			this.statements.push(this.rootVarName + ".FdChildren.Add(" + nodeVar + ");\n");
		} else if (method === ".InterfaceDeclarations.Add") {
			this.statements.push(elVar + method + "(" + nodeVar + ");\n");
		} else if (method.endsWith(".Add") || method.startsWith(".Add")) {
			this.statements.push(elVar + method + "([" + nodeVar + "]);\n");
		} else if (method === ".SetSkinCoord") {
			this.statements.push(elVar + method + "(" + nodeVar + ");\n");
		} else if (method.startsWith(".Set")) {
			this.statements.push(elVar + "." + method.slice(4) + " := " + nodeVar + ";\n");
		} else {
			this.statements.push(elVar + method + " := " + nodeVar + ";\n");
		}
	}
};
