"use strict";

/**
 * JS2Pas.js
 * Converts X3D ECMAScript (<Script> CDATA / ecmascript:...) into
 * Castle Game Engine Object Pascal handlers using the `compiled:` script protocol.
 */

const PASCAL_KEYWORDS = new Set([
	"and", "array", "as", "asm", "begin", "case", "class", "const", "constructor",
	"destructor", "dispinterface", "div", "do", "downto", "else", "end", "except",
	"exports", "file", "finalization", "finally", "for", "function", "goto", "if",
	"implementation", "in", "inherited", "initialization", "inline", "interface",
	"is", "label", "library", "mod", "nil", "not", "object", "of", "or", "out",
	"packed", "procedure", "program", "property", "raise", "record", "repeat",
	"resourcestring", "result", "set", "shl", "shr", "string", "then",
	"threadvar", "to", "try", "type", "unit", "until", "uses", "var", "while",
	"with", "xor", "true", "false"
]);

const upperCaseFirst = (str) =>
	str ? str.charAt(0).toUpperCase() + str.slice(1) : "";

const sanitizeId = (name, fallback = "GeneratedScript") => {
	let id = String(name || fallback).replace(/[^A-Za-z0-9_]/g, "_");
	if (!/^[A-Za-z_]/.test(id)) {
		id = "S_" + id;
	}
	return PASCAL_KEYWORDS.has(id.toLowerCase()) ? "L_" + id : id;
};

const escapePascalString = (str) => {
	const s = String(str);
	let out = "";
	let inQuotes = false;
	for (let i = 0; i < s.length; i++) {
		const code = s.charCodeAt(i);
		if (code < 32 || code === 127) {
			if (inQuotes) {
				out += "'";
				inQuotes = false;
			}
			out += "#" + code;
		} else {
			if (!inQuotes) {
				out += "'";
				inQuotes = true;
			}
			out += s[i] === "'" ? "''" : s[i];
		}
	}
	if (inQuotes) {
		out += "'";
	}
	return out || "''";
};

const X3D_TYPE_TO_PASCAL = {
	SFBool: "Boolean",
	SFInt32: "Int32",
	SFFloat: "Single",
	SFDouble: "Double",
	SFTime: "Double",
	SFString: "String",
	SFVec2f: "TVector2",
	SFVec3f: "TVector3",
	SFVec4f: "TVector4",
	SFRotation: "TVector4",
	SFColor: "TVector3",
	SFColorRGBA: "TVector4",
	SFVec2d: "TVector2Double",
	SFVec3d: "TVector3Double",
	SFVec4d: "TVector4Double",
	SFNode: "TX3DNode",
	MFBool: "array of Boolean",
	MFInt32: "array of Int32",
	MFFloat: "array of Single",
	MFDouble: "array of Double",
	MFTime: "array of Double",
	MFString: "array of String",
	MFVec2f: "array of TVector2",
	MFVec3f: "array of TVector3",
	MFVec4f: "array of TVector4",
	MFRotation: "array of TVector4",
	MFColor: "array of TVector3",
	MFColorRGBA: "array of TVector4",
	MFNode: "array of TX3DNode"
};

const X3D_DEFAULT_VALUE = {
	SFBool: "False",
	SFInt32: "0",
	SFFloat: "0.0",
	SFDouble: "0.0",
	SFTime: "0.0",
	SFString: "''",
	SFVec2f: "Vector2(0, 0)",
	SFVec3f: "Vector3(0, 0, 0)",
	SFVec4f: "Vector4(0, 0, 0, 0)",
	SFRotation: "Vector4(0, 0, 1, 0)",
	SFColor: "Vector3(0, 0, 0)",
	SFColorRGBA: "Vector4(0, 0, 0, 1)",
	SFVec2d: "Vector2Double(0, 0)",
	SFVec3d: "Vector3Double(0, 0, 0)",
	SFVec4d: "Vector4Double(0, 0, 0, 0)",
	SFNode: "nil",
	MFBool: "nil",
	MFInt32: "nil",
	MFFloat: "nil",
	MFDouble: "nil",
	MFTime: "nil",
	MFString: "nil",
	MFVec2f: "nil",
	MFVec3f: "nil",
	MFVec4f: "nil",
	MFRotation: "nil",
	MFColor: "nil",
	MFColorRGBA: "nil",
	MFNode: "nil"
};

/* -------------------------------------------------------------------------- */
/* Tokenizer with 1-based Line & Column Tracking                              */
/* -------------------------------------------------------------------------- */

const MULTI_OPS = [
	"===", "!==", ">>>=", ">>>", "<<=", ">>=",
	"==", "!=", "<=", ">=", "&&", "||",
	"++", "--", "+=", "-=", "*=", "/=", "%=", "&=", "|=", "^=", "<<", ">>", "=>"
];

function tokenize(source, lineOffset = 0) {
	const tokens = [];
	let i = 0;
	let line = 1 + lineOffset;
	let col = 1;
	const n = source.length;

	const advance = (count = 1) => {
		for (let k = 0; k < count; k++) {
			if (source[i] === "\n") {
				line++;
				col = 1;
			} else {
				col++;
			}
			i++;
		}
	};

	while (i < n) {
		const ch = source[i];

		if (/\s/.test(ch)) {
			advance(1);
			continue;
		}
		if (ch === "/" && source[i + 1] === "/") {
			advance(2);
			while (i < n && source[i] !== "\n") advance(1);
			continue;
		}
		if (ch === "/" && source[i + 1] === "*") {
			const startLine = line;
			const startCol = col;
			advance(2);
			while (i < n && !(source[i] === "*" && source[i + 1] === "/")) {
				advance(1);
			}
			if (i >= n) {
				throw new Error("JS2Pas lex error at line " + startLine + ", col " + startCol + ": unterminated block comment");
			}
			advance(2);
			continue;
		}
		if (ch === "'" || ch === '"') {
			const quote = ch;
			const startLine = line;
			const startCol = col;
			let val = "";
			advance(1);
			while (i < n && source[i] !== quote) {
				if (source[i] === "\\" && i + 1 < n) {
					const esc = source[i + 1];
					if (esc === "n") val += "\n";
					else if (esc === "r") val += "\r";
					else if (esc === "t") val += "\t";
					else if (esc === "\n") { /* line continuation */ }
					else if (esc === "\r" && source[i + 2] === "\n") { advance(1); }
					else val += esc;
					advance(2);
				} else {
					val += source[i];
					advance(1);
				}
			}
			if (i >= n) {
				throw new Error("JS2Pas lex error at line " + startLine + ", col " + startCol + ": unterminated string literal");
			}
			advance(1);
			tokens.push({ type: "string", value: val, line: startLine, col: startCol });
			continue;
		}
		if (/[0-9]/.test(ch) || (ch === "." && /[0-9]/.test(source[i + 1] || ""))) {
			const start = i;
			const startLine = line;
			const startCol = col;
			if (ch === "0" && (source[i + 1] === "x" || source[i + 1] === "X")) {
				advance(2);
				while (i < n && /[0-9a-fA-F]/.test(source[i])) advance(1);
			} else {
				while (i < n && /[0-9]/.test(source[i])) advance(1);
				if (source[i] === ".") {
					advance(1);
					while (i < n && /[0-9]/.test(source[i])) advance(1);
				}
				if (source[i] === "e" || source[i] === "E") {
					advance(1);
					if (source[i] === "+" || source[i] === "-") advance(1);
					while (i < n && /[0-9]/.test(source[i])) advance(1);
				}
			}
			tokens.push({ type: "number", value: source.slice(start, i), line: startLine, col: startCol });
			continue;
		}
		if (/[A-Za-z_$]/.test(ch)) {
			const start = i;
			const startLine = line;
			const startCol = col;
			while (i < n && /[A-Za-z0-9_$]/.test(source[i])) advance(1);
			tokens.push({ type: "ident", value: source.slice(start, i), line: startLine, col: startCol });
			continue;
		}
		let matched = null;
		for (const op of MULTI_OPS) {
			if (source.startsWith(op, i)) {
				matched = op;
				break;
			}
		}
		if (matched) {
			tokens.push({ type: "punct", value: matched, line, col });
			advance(matched.length);
			continue;
		}
		tokens.push({ type: "punct", value: ch, line, col });
		advance(1);
	}

	tokens.push({ type: "eof", value: "", line, col });
	return tokens;
}

/* -------------------------------------------------------------------------- */
/* Recursive-Descent Parser                                                   */
/* -------------------------------------------------------------------------- */

function Parser(tokens, rawLines, scriptLabel) {
	this.tokens = tokens;
	this.rawLines = rawLines || [];
	this.scriptLabel = scriptLabel || "Script";
	this.pos = 0;
}

Parser.prototype = {
	formatError: function (msg, token) {
		const t = token || this.peek();
		const lineNum = t.line || 1;
		const colNum = t.col || 1;
		const srcLine = this.rawLines[lineNum - 1];
		let out =
			"JS2Pas parse error in " +
			this.scriptLabel +
			" at line " +
			lineNum +
			", col " +
			colNum +
			": " +
			msg;
		if (srcLine !== undefined) {
			const caret = " ".repeat(Math.max(0, colNum - 1)) + "^";
			out += "\n  " + lineNum + " | " + srcLine + "\n" + " ".repeat(String(lineNum).length + 5) + caret;
		}
		return new Error(out);
	},
	peek: function (offset = 0) {
		return this.tokens[Math.min(this.pos + offset, this.tokens.length - 1)];
	},
	consume: function () {
		return this.tokens[this.pos++];
	},
	match: function (type, value) {
		const t = this.peek();
		if (t.type === type && (value === undefined || t.value === value)) {
			this.pos++;
			return t;
		}
		return null;
	},
	expect: function (type, value) {
		const t = this.peek();
		if (t.type !== type || (value !== undefined && t.value !== value)) {
			throw this.formatError(
				"expected " + (value || type) + " but got " + t.type + " '" + t.value + "'",
				t
			);
		}
		return this.consume();
	},

	parseProgram: function () {
		const body = [];
		while (this.peek().type !== "eof") {
			body.push(this.parseStatement());
		}
		return { type: "Program", body };
	},

	parseStatement: function () {
		const t = this.peek();
		if (t.type === "punct" && t.value === ";") {
			this.consume();
			return { type: "Empty" };
		}
		if (t.type === "punct" && t.value === "{") {
			return this.parseBlock();
		}
		if (t.type === "ident") {
			switch (t.value) {
				case "function":
					return this.parseFunctionDecl();
				case "var":
				case "let":
				case "const":
					return this.parseVarDecl(true);
				case "if":
					return this.parseIf();
				case "while":
					return this.parseWhile();
				case "do":
					return this.parseDoWhile();
				case "for":
					return this.parseFor();
				case "switch":
					return this.parseSwitch();
				case "try":
					return this.parseTry();
				case "throw": {
					this.consume();
					const arg = this.parseExpression();
					this.match("punct", ";");
					return { type: "Throw", arg };
				}
				case "break":
					this.consume();
					this.match("punct", ";");
					return { type: "Break" };
				case "continue":
					this.consume();
					this.match("punct", ";");
					return { type: "Continue" };
				case "return":
					return this.parseReturn();
			}
		}
		const expr = this.parseExpression();
		this.match("punct", ";");
		return { type: "ExprStmt", expr };
	},

	parseBlock: function () {
		this.expect("punct", "{");
		const body = [];
		while (!(this.peek().type === "punct" && this.peek().value === "}") && this.peek().type !== "eof") {
			body.push(this.parseStatement());
		}
		this.expect("punct", "}");
		return { type: "Block", body };
	},

	parseFunctionDecl: function () {
		this.expect("ident", "function");
		const name = this.expect("ident").value;
		this.expect("punct", "(");
		const params = [];
		while (!(this.peek().type === "punct" && this.peek().value === ")")) {
			params.push(this.expect("ident").value);
			if (!this.match("punct", ",")) break;
		}
		this.expect("punct", ")");
		const body = this.parseBlock();
		return { type: "FunctionDecl", name, params, body };
	},

	parseVarDecl: function (consumeSemi) {
		const kind = this.consume().value;
		const decls = [];
		while (true) {
			const name = this.expect("ident").value;
			let init = null;
			if (this.match("punct", "=")) {
				init = this.parseAssignment();
			}
			decls.push({ name, init });
			if (!this.match("punct", ",")) break;
		}
		if (consumeSemi) {
			this.match("punct", ";");
		}
		return { type: "VarDecl", kind, decls };
	},

	parseIf: function () {
		this.expect("ident", "if");
		this.expect("punct", "(");
		const test = this.parseExpression();
		this.expect("punct", ")");
		const consequent = this.parseStatement();
		let alternate = null;
		if (this.match("ident", "else")) {
			alternate = this.parseStatement();
		}
		return { type: "If", test, consequent, alternate };
	},

	parseWhile: function () {
		this.expect("ident", "while");
		this.expect("punct", "(");
		const test = this.parseExpression();
		this.expect("punct", ")");
		const body = this.parseStatement();
		return { type: "While", test, body };
	},

	parseDoWhile: function () {
		this.expect("ident", "do");
		const body = this.parseStatement();
		this.expect("ident", "while");
		this.expect("punct", "(");
		const test = this.parseExpression();
		this.expect("punct", ")");
		this.match("punct", ";");
		return { type: "DoWhile", test, body };
	},

	parseFor: function () {
		this.expect("ident", "for");
		this.expect("punct", "(");
		let init = null;
		const pk = this.peek();
		const pk1 = this.peek(1);

		if (
			pk.type === "ident" &&
			(pk.value === "var" || pk.value === "let" || pk.value === "const")
		) {
			const kind = this.consume().value;
			const firstName = this.expect("ident").value;
			if (
				this.peek().type === "ident" &&
				(this.peek().value === "in" || this.peek().value === "of")
			) {
				const op = this.consume().value;
				const right = this.parseExpression();
				this.expect("punct", ")");
				const body = this.parseStatement();
				return { type: "ForInOf", op, declKind: kind, leftVar: firstName, right, body };
			}
			const decls = [];
			let firstInit = null;
			if (this.match("punct", "=")) {
				firstInit = this.parseAssignment();
			}
			decls.push({ name: firstName, init: firstInit });
			while (this.match("punct", ",")) {
				const name = this.expect("ident").value;
				let varInit = null;
				if (this.match("punct", "=")) {
					varInit = this.parseAssignment();
				}
				decls.push({ name, init: varInit });
			}
			init = { type: "VarDecl", kind, decls };
		} else if (
			pk.type === "ident" &&
			pk1.type === "ident" &&
			(pk1.value === "in" || pk1.value === "of")
		) {
			const leftVar = this.consume().value;
			const op = this.consume().value;
			const right = this.parseExpression();
			this.expect("punct", ")");
			const body = this.parseStatement();
			return { type: "ForInOf", op, declKind: null, leftVar, right, body };
		} else if (!(pk.type === "punct" && pk.value === ";")) {
			init = { type: "ExprStmt", expr: this.parseExpression() };
		}

		this.expect("punct", ";");
		let test = null;
		if (!(this.peek().type === "punct" && this.peek().value === ";")) {
			test = this.parseExpression();
		}
		this.expect("punct", ";");
		let update = null;
		if (!(this.peek().type === "punct" && this.peek().value === ")")) {
			update = this.parseExpression();
		}
		this.expect("punct", ")");
		const body = this.parseStatement();
		return { type: "For", init, test, update, body };
	},

	parseSwitch: function () {
		this.expect("ident", "switch");
		this.expect("punct", "(");
		const discriminant = this.parseExpression();
		this.expect("punct", ")");
		this.expect("punct", "{");
		const cases = [];
		while (!(this.peek().type === "punct" && this.peek().value === "}") && this.peek().type !== "eof") {
			let test = null;
			if (this.match("ident", "case")) {
				test = this.parseExpression();
				this.expect("punct", ":");
			} else if (this.match("ident", "default")) {
				this.expect("punct", ":");
			} else {
				break;
			}
			const consequent = [];
			while (
				!(this.peek().type === "punct" && this.peek().value === "}") &&
				!(this.peek().type === "ident" && (this.peek().value === "case" || this.peek().value === "default")) &&
				this.peek().type !== "eof"
			) {
				consequent.push(this.parseStatement());
			}
			cases.push({ test, consequent });
		}
		this.expect("punct", "}");
		return { type: "Switch", discriminant, cases };
	},

	parseTry: function () {
		this.expect("ident", "try");
		const block = this.parseBlock();
		let handler = null;
		if (this.match("ident", "catch")) {
			let param = null;
			if (this.match("punct", "(")) {
				param = this.expect("ident").value;
				this.expect("punct", ")");
			}
			const body = this.parseBlock();
			handler = { param, body };
		}
		let finalizer = null;
		if (this.match("ident", "finally")) {
			finalizer = this.parseBlock();
		}
		return { type: "Try", block, handler, finalizer };
	},

	parseReturn: function () {
		this.expect("ident", "return");
		let arg = null;
		if (!(this.peek().type === "punct" && (this.peek().value === ";" || this.peek().value === "}"))) {
			arg = this.parseExpression();
		}
		this.match("punct", ";");
		return { type: "Return", arg };
	},

	parseExpression: function () {
		let expr = this.parseAssignment();
		while (this.match("punct", ",")) {
			expr = { type: "Sequence", left: expr, right: this.parseAssignment() };
		}
		return expr;
	},

	parseAssignment: function () {
		const left = this.parseConditional();
		const t = this.peek();
		if (
			t.type === "punct" &&
			["=", "+=", "-=", "*=", "/=", "%=", "&=", "|=", "^=", "<<=", ">>=", ">>>="].includes(t.value)
		) {
			const op = this.consume().value;
			const right = this.parseAssignment();
			return { type: "Assign", op, left, right };
		}
		return left;
	},

	parseConditional: function () {
		const test = this.parseLogicalOr();
		if (this.match("punct", "?")) {
			const consequent = this.parseAssignment();
			this.expect("punct", ":");
			const alternate = this.parseAssignment();
			return { type: "Conditional", test, consequent, alternate };
		}
		return test;
	},

	parseLogicalOr: function () {
		let left = this.parseLogicalAnd();
		while (this.match("punct", "||")) {
			left = { type: "Binary", op: "||", left, right: this.parseLogicalAnd() };
		}
		return left;
	},

	parseLogicalAnd: function () {
		let left = this.parseBitwiseOr();
		while (this.match("punct", "&&")) {
			left = { type: "Binary", op: "&&", left, right: this.parseBitwiseOr() };
		}
		return left;
	},

	parseBitwiseOr: function () {
		let left = this.parseBitwiseXor();
		while (this.match("punct", "|")) {
			left = { type: "Binary", op: "|", left, right: this.parseBitwiseXor() };
		}
		return left;
	},

	parseBitwiseXor: function () {
		let left = this.parseBitwiseAnd();
		while (this.match("punct", "^")) {
			left = { type: "Binary", op: "^", left, right: this.parseBitwiseAnd() };
		}
		return left;
	},

	parseBitwiseAnd: function () {
		let left = this.parseEquality();
		while (this.match("punct", "&")) {
			left = { type: "Binary", op: "&", left, right: this.parseEquality() };
		}
		return left;
	},

	parseEquality: function () {
		let left = this.parseRelational();
		while (
			this.peek().type === "punct" &&
			["==", "!=", "===", "!=="].includes(this.peek().value)
		) {
			const op = this.consume().value;
			left = { type: "Binary", op, left, right: this.parseRelational() };
		}
		return left;
	},

	parseRelational: function () {
		let left = this.parseShift();
		while (
			(this.peek().type === "punct" && ["<", ">", "<=", ">="].includes(this.peek().value)) ||
			(this.peek().type === "ident" && (this.peek().value === "in" || this.peek().value === "instanceof"))
		) {
			const op = this.consume().value;
			left = { type: "Binary", op, left, right: this.parseShift() };
		}
		return left;
	},

	parseShift: function () {
		let left = this.parseAdditive();
		while (this.peek().type === "punct" && ["<<", ">>", ">>>"].includes(this.peek().value)) {
			const op = this.consume().value;
			left = { type: "Binary", op, left, right: this.parseAdditive() };
		}
		return left;
	},

	parseAdditive: function () {
		let left = this.parseMultiplicative();
		while (
			this.peek().type === "punct" &&
			(this.peek().value === "+" || this.peek().value === "-")
		) {
			const op = this.consume().value;
			left = { type: "Binary", op, left, right: this.parseMultiplicative() };
		}
		return left;
	},

	parseMultiplicative: function () {
		let left = this.parseUnary();
		while (
			this.peek().type === "punct" &&
			(this.peek().value === "*" || this.peek().value === "/" || this.peek().value === "%")
		) {
			const op = this.consume().value;
			left = { type: "Binary", op, left, right: this.parseUnary() };
		}
		return left;
	},

	parseUnary: function () {
		const t = this.peek();
		if (t.type === "punct" && ["!", "-", "+", "~"].includes(t.value)) {
			const op = this.consume().value;
			return { type: "Unary", op, arg: this.parseUnary() };
		}
		if (t.type === "ident" && ["typeof", "void", "delete"].includes(t.value)) {
			const op = this.consume().value;
			return { type: "Unary", op, arg: this.parseUnary() };
		}
		if (t.type === "punct" && (t.value === "++" || t.value === "--")) {
			const op = this.consume().value;
			return { type: "Update", op, prefix: true, arg: this.parseUnary() };
		}
		if (t.type === "ident" && t.value === "new") {
			this.consume();
			const callee = this.parseMemberChain(false);
			let args = [];
			if (this.match("punct", "(")) {
				args = this.parseArgList();
			}
			return { type: "New", callee, args };
		}
		return this.parsePostfix();
	},

	parsePostfix: function () {
		const expr = this.parseMemberChain(true);
		const t = this.peek();
		if (t.type === "punct" && (t.value === "++" || t.value === "--")) {
			const op = this.consume().value;
			return { type: "Update", op, prefix: false, arg: expr };
		}
		return expr;
	},

	parseArgList: function () {
		const args = [];
		while (!(this.peek().type === "punct" && this.peek().value === ")")) {
			args.push(this.parseAssignment());
			if (!this.match("punct", ",")) break;
		}
		this.expect("punct", ")");
		return args;
	},

	parseMemberChain: function (allowCalls) {
		let expr = this.parsePrimary();
		while (true) {
			if (this.match("punct", ".")) {
				const prop = this.expect("ident").value;
				expr = { type: "Member", object: expr, property: prop };
			} else if (this.match("punct", "[")) {
				const index = this.parseExpression();
				this.expect("punct", "]");
				expr = { type: "Index", object: expr, index };
			} else if (allowCalls && this.match("punct", "(")) {
				const args = this.parseArgList();
				expr = { type: "Call", callee: expr, args };
			} else {
				break;
			}
		}
		return expr;
	},

	parsePrimary: function () {
		const t = this.peek();
		if (t.type === "number") {
			this.consume();
			return { type: "Literal", kind: "number", value: t.value };
		}
		if (t.type === "string") {
			this.consume();
			return { type: "Literal", kind: "string", value: t.value };
		}
		if (t.type === "ident") {
			if (t.value === "function") {
				this.consume();
				let name = null;
				if (this.peek().type === "ident") name = this.consume().value;
				this.expect("punct", "(");
				const params = [];
				while (!(this.peek().type === "punct" && this.peek().value === ")")) {
					params.push(this.expect("ident").value);
					if (!this.match("punct", ",")) break;
				}
				this.expect("punct", ")");
				const body = this.parseBlock();
				return { type: "FunctionExpr", name, params, body };
			}
			this.consume();
			if (t.value === "true") return { type: "Literal", kind: "boolean", value: true };
			if (t.value === "false") return { type: "Literal", kind: "boolean", value: false };
			if (t.value === "null") {
				return { type: "Literal", kind: "null", value: null };
			}
			if (t.value === "undefined") {
				return { type: "Literal", kind: "undefined", value: null };
			}
			return { type: "Identifier", name: t.value };
		}
		if (this.match("punct", "(")) {
			const expr = this.parseExpression();
			this.expect("punct", ")");
			return expr;
		}
		if (this.match("punct", "[")) {
			const elements = [];
			while (!(this.peek().type === "punct" && this.peek().value === "]")) {
				elements.push(this.parseAssignment());
				if (!this.match("punct", ",")) break;
			}
			this.expect("punct", "]");
			return { type: "ArrayLiteral", elements };
		}
		if (this.match("punct", "{")) {
			const props = [];
			while (!(this.peek().type === "punct" && this.peek().value === "}")) {
				const kTok = this.peek();
				let key;
				if (kTok.type === "ident" || kTok.type === "string" || kTok.type === "number") {
					key = this.consume().value;
				} else {
					throw this.formatError("expected object property key", kTok);
				}
				this.expect("punct", ":");
				const value = this.parseAssignment();
				props.push({ key, value });
				if (!this.match("punct", ",")) break;
			}
			this.expect("punct", "}");
			return { type: "ObjectLiteral", props };
		}
		throw this.formatError("unexpected token " + t.type + " '" + t.value + "'", t);
	}
};

/* -------------------------------------------------------------------------- */
/* Pascal Code Generator for Castle Game Engine `compiled:` Scripts           */
/* -------------------------------------------------------------------------- */

function stripScriptProtocol(source) {
	const raw = String(source || "");
	const match = raw.match(/^\s*(ecmascript|javascript|vrmlscript):[ \t]*\r?\n?/i);
	if (!match) {
		return { code: raw, lineOffset: 0 };
	}
	const prefix = match[0];
	const lineOffset = (prefix.match(/\n/g) || []).length;
	return { code: raw.slice(prefix.length), lineOffset };
}

function getRootIdent(expr) {
	if (!expr) return null;
	if (expr.type === "Identifier") return expr.name;
	if (expr.type === "Member" || expr.type === "Index") return getRootIdent(expr.object);
	return null;
}

function isUnsupportedBrowserDomExpr(node, skippedVars) {
	if (!node || typeof node !== "object") return false;
	if (node.type === "ObjectLiteral" || node.type === "FunctionExpr") return true;
	if (
		node.type === "Identifier" &&
		(node.name === "Browser" || (skippedVars && skippedVars.has(node.name)))
	) {
		return true;
	}
	if (node.type === "Call" && node.callee && node.callee.type === "Member") {
		const obj = node.callee.object;
		const prop = node.callee.property;
		if (
			obj &&
			obj.type === "Identifier" &&
			obj.name === "Browser" &&
			(prop === "print" || prop === "println")
		) {
			return node.args.some((a) => isUnsupportedBrowserDomExpr(a, skippedVars));
		}
	}
	for (const k of Object.keys(node)) {
		const child = node[k];
		if (Array.isArray(child)) {
			if (child.some((c) => isUnsupportedBrowserDomExpr(c, skippedVars))) return true;
		} else if (child && typeof child === "object") {
			if (isUnsupportedBrowserDomExpr(child, skippedVars)) return true;
		}
	}
	return false;
}

function inferExprType(expr) {
	if (!expr) return "Single";
	if (expr.type === "Literal") {
		if (expr.kind === "boolean") return "Boolean";
		if (expr.kind === "string") return "String";
		if (expr.kind === "number") {
			return /[eE.]/.test(expr.value) ? "Single" : "Integer";
		}
	}
	if (expr.type === "New" && expr.callee && expr.callee.type === "Identifier") {
		const t = X3D_TYPE_TO_PASCAL[expr.callee.name];
		if (t) return t;
	}
	if (expr.type === "Member" && expr.property === "length") {
		return "Integer";
	}
	if (expr.type === "Call" && expr.callee && expr.callee.type === "Member") {
		const obj = expr.callee.object;
		const prop = expr.callee.property;
		if (obj && obj.type === "Identifier" && obj.name === "Math") {
			if (prop === "floor" || prop === "ceil" || prop === "round") return "Integer";
			return "Single";
		}
	}
	if (expr.type === "Binary") {
		if (["==", "!=", "===", "!==", "<", ">", "<=", ">=", "&&", "||"].includes(expr.op)) {
			return "Boolean";
		}
		if (expr.op === "+") {
			const lt = inferExprType(expr.left);
			const rt = inferExprType(expr.right);
			if (lt === "String" || rt === "String") return "String";
		}
	}
	return "Single";
}

function isSimpleForLoop(stmt) {
	if (!stmt || stmt.type !== "For" || !stmt.init || !stmt.test || !stmt.update) {
		return null;
	}
	let loopVar = null;
	let startExpr = null;
	if (stmt.init.type === "VarDecl" && stmt.init.decls.length === 1 && stmt.init.decls[0].init) {
		loopVar = stmt.init.decls[0].name;
		startExpr = stmt.init.decls[0].init;
	} else if (
		stmt.init.type === "ExprStmt" &&
		stmt.init.expr.type === "Assign" &&
		stmt.init.expr.op === "=" &&
		stmt.init.expr.left.type === "Identifier"
	) {
		loopVar = stmt.init.expr.left.name;
		startExpr = stmt.init.expr.right;
	}
	if (!loopVar) return null;

	const u = stmt.update;
	let stepDir = null;
	if (u.type === "Update" && u.arg.type === "Identifier" && u.arg.name === loopVar) {
		stepDir = u.op === "++" ? "to" : "downto";
	} else if (
		u.type === "Assign" &&
		u.left.type === "Identifier" &&
		u.left.name === loopVar &&
		u.right.type === "Literal" &&
		u.right.value === "1"
	) {
		if (u.op === "+=") stepDir = "to";
		else if (u.op === "-=") stepDir = "downto";
	}
	if (!stepDir) return null;

	const t = stmt.test;
	if (t.type !== "Binary" || t.left.type !== "Identifier" || t.left.name !== loopVar) {
		return null;
	}
	const endNode = t.right;
	if (stepDir === "to") {
		if (t.op === "<=") return { loopVar, startExpr, dir: "to", endNode, adjust: 0 };
		if (t.op === "<") return { loopVar, startExpr, dir: "to", endNode, adjust: -1 };
	} else {
		if (t.op === ">=") return { loopVar, startExpr, dir: "downto", endNode, adjust: 0 };
		if (t.op === ">") return { loopVar, startExpr, dir: "downto", endNode, adjust: 1 };
	}
	return null;
}

const JS_BIN_PREC = {
	"||": 1,
	"&&": 2,
	"|": 3,
	"^": 4,
	"&": 5,
	"==": 6,
	"!=": 6,
	"===": 6,
	"!==": 6,
	"<": 7,
	">": 7,
	"<=": 7,
	">=": 7,
	in: 7,
	instanceof: 7,
	"<<": 8,
	">>": 8,
	">>>": 8,
	"+": 9,
	"-": 9,
	"*": 10,
	"/": 10,
	"%": 10
};

export function convertECMAScriptToPascal(source, options = {}) {
	const scriptName = sanitizeId(options.scriptName || "X3DScript", "X3DScript");
	const scriptLabel = options.scriptDef ? 'Script "' + options.scriptDef + '"' : scriptName;
	const className = "T" + upperCaseFirst(scriptName) + "Script";
	const unitName = sanitizeId(options.unitName || scriptName + "ScriptUnit");
	const fields = Array.isArray(options.fields) ? options.fields : [];
	const schemaFieldTypes = options.fieldTypes || {};
	const protoFieldTypes = options.protoFieldTypes || {};

	const mfDeclTypeMap = {
		"array of Boolean": className + "_MFBoolArray",
		"array of Int32": className + "_MFInt32Array",
		"array of Single": className + "_MFFloatArray",
		"array of Double": className + "_MFDoubleArray",
		"array of String": className + "_MFStringArray",
		"array of TVector2": className + "_MFVec2Array",
		"array of TVector3": className + "_MFVec3Array",
		"array of TVector4": className + "_MFVec4Array",
		"array of TX3DNode": className + "_MFNodeArray"
	};
	const usedArrayTypes = new Set();
	const toPascalDeclType = (t) => {
		if (mfDeclTypeMap[t]) {
			usedArrayTypes.add(t);
			return mfDeclTypeMap[t];
		}
		return t;
	};

	const rawLines = String(source || "").split(/\r?\n/);
	const { code: cleanSource, lineOffset } = stripScriptProtocol(source);
	const tokens = tokenize(cleanSource, lineOffset);
	const ast = new Parser(tokens, rawLines, scriptLabel).parseProgram();

	const fieldMap = new Map();
	for (const f of fields) {
		if (f && f.name) {
			const x3dType = f.type || "SFFloat";
			fieldMap.set(f.name, {
				name: f.name,
				type: x3dType,
				isMF: x3dType.startsWith("MF"),
				accessType: f.accessType || "inputOutput",
				varName: f.varName || null,
				pascalType: X3D_TYPE_TO_PASCAL[x3dType] || "Single",
				defaultVal: X3D_DEFAULT_VALUE[x3dType] || (x3dType.startsWith("MF") ? "nil" : "0")
			});
		}
	}

	const functions = new Map();
	for (const stmt of ast.body) {
		if (stmt.type === "FunctionDecl") {
			functions.set(stmt.name, stmt);
		}
	}

	const isHandlerName = (fnName) => {
		if (fnName === "initialize" || fnName === "shutdown") return true;
		const f = fieldMap.get(fnName);
		if (f && (f.accessType === "inputOnly" || f.accessType === "inputOutput")) {
			return true;
		}
		if (fnName.startsWith("set_")) {
			const base = fieldMap.get(fnName.slice(4));
			if (base && base.accessType === "inputOutput") return true;
		}
		return false;
	};

	const isDirectIdent = (node, name) =>
		node && node.type === "Identifier" && node.name === name;

	const exprMentionsIdent = (node, name) => {
		if (!node || typeof node !== "object") return false;
		if (node.type === "Identifier" && node.name === name) return true;
		for (const k of Object.keys(node)) {
			const child = node[k];
			if (Array.isArray(child)) {
				if (child.some((c) => exprMentionsIdent(c, name))) return true;
			} else if (child && typeof child === "object") {
				if (exprMentionsIdent(child, name)) return true;
			}
		}
		return false;
	};

	const usesAsInteger = (node, paramName) => {
		if (!node || typeof node !== "object") return false;
		if (node.type === "For") {
			const simple = isSimpleForLoop(node);
			if (
				simple &&
				(isDirectIdent(simple.endNode, paramName) ||
					isDirectIdent(simple.startExpr, paramName))
			) {
				return true;
			}
		}
		if (node.type === "Index" && isDirectIdent(node.index, paramName)) {
			return true;
		}
		if (
			node.type === "Binary" &&
			["%", "<<", ">>", ">>>", "&", "|", "^"].includes(node.op) &&
			(isDirectIdent(node.left, paramName) || isDirectIdent(node.right, paramName))
		) {
			return true;
		}
		for (const k of Object.keys(node)) {
			const child = node[k];
			if (Array.isArray(child)) {
				if (child.some((c) => usesAsInteger(c, paramName))) return true;
			} else if (child && typeof child === "object" && child.type !== "FunctionDecl") {
				if (usesAsInteger(child, paramName)) return true;
			}
		}
		return false;
	};

	const containsStringLiteral = (node) => {
		if (!node || typeof node !== "object") return false;
		if (node.type === "Literal" && node.kind === "string") return true;
		for (const k of Object.keys(node)) {
			const child = node[k];
			if (Array.isArray(child)) {
				if (child.some((c) => containsStringLiteral(c))) return true;
			} else if (child && typeof child === "object") {
				if (containsStringLiteral(child)) return true;
			}
		}
		return false;
	};

	const usesAsString = (node, paramName) => {
		if (!node || typeof node !== "object") return false;
		if (
			node.type === "Binary" &&
			node.op === "+" &&
			((exprMentionsIdent(node.left, paramName) && containsStringLiteral(node.right)) ||
				(exprMentionsIdent(node.right, paramName) && containsStringLiteral(node.left)))
		) {
			return true;
		}
		if (node.type === "Call" && node.callee) {
			const c = node.callee;
			if (
				c.type === "Member" &&
				c.object &&
				c.object.type === "Identifier" &&
				((c.object.name === "Browser" && (c.property === "print" || c.property === "println")) ||
					(c.object.name === "console" && ["log", "info", "warn", "error"].includes(c.property))) &&
				node.args.some((a) => a.type === "Identifier" && a.name === paramName)
			) {
				return true;
			}
			if (
				c.type === "Member" &&
				c.object &&
				c.object.type === "Identifier" &&
				c.object.name === paramName &&
				["indexOf", "lastIndexOf", "substring", "substr", "slice", "charAt", "split", "toLowerCase", "toUpperCase", "trim"].includes(
					c.property
				)
			) {
				return true;
			}
		}
		for (const k of Object.keys(node)) {
			const child = node[k];
			if (Array.isArray(child)) {
				if (child.some((c) => usesAsString(c, paramName))) return true;
			} else if (child && typeof child === "object" && child.type !== "FunctionDecl") {
				if (usesAsString(child, paramName)) return true;
			}
		}
		return false;
	};

	const getReturnExprs = (node, out = []) => {
		if (!node || typeof node !== "object") return out;
		if (node.type === "Return" && node.arg) {
			out.push(node.arg);
		}
		for (const k of Object.keys(node)) {
			const child = node[k];
			if (Array.isArray(child)) {
				child.forEach((c) => {
					if (c && typeof c === "object" && c.type !== "FunctionDecl") {
						getReturnExprs(c, out);
					}
				});
			} else if (child && typeof child === "object" && child.type !== "FunctionDecl") {
				getReturnExprs(child, out);
			}
		}
		return out;
	};

	const FALLBACK_NODE_FIELD_TYPES = {
		metadata: "SFNode",
		avatarSize: "MFFloat",
		key: "MFFloat",
		position: "SFVec3f",
		center: "SFVec3f",
		scale: "SFVec3f",
		translation: "SFVec3f",
		bboxCenter: "SFVec3f",
		bboxSize: "SFVec3f",
		diffuseColor: "SFVec3f",
		emissiveColor: "SFVec3f",
		specularColor: "SFVec3f",
		orientation: "SFRotation",
		rotation: "SFRotation",
		scaleOrientation: "SFRotation",
		fieldOfView: "SFFloat",
		speed: "SFFloat",
		visibilityLimit: "SFFloat",
		cycleInterval: "SFTime",
		fraction: "SFFloat",
		transparency: "SFFloat",
		radius: "SFFloat",
		height: "SFFloat",
		enabled: "SFBool",
		loop: "SFBool",
		isActive: "SFBool",
		set_bind: "SFBool",
		headlight: "SFBool",
		description: "SFString",
		whichChoice: "SFInt32",
		children: "MFNode",
		url: "MFString",
		type: "MFString"
	};

	const resolveNodeFieldX3DType = (objExpr, propName) => {
		if (propName === "keyValue" || propName === "value_changed") {
			const ident =
				(objExpr && objExpr.type === "Identifier" ? objExpr.name : getRootIdent(objExpr)) || "";
			if (/orientation|oi$/i.test(ident)) return propName === "keyValue" ? "MFRotation" : "SFRotation";
			if (/color|ci$/i.test(ident)) return propName === "keyValue" ? "MFColor" : "SFColor";
			if (/scalar|si$/i.test(ident)) return propName === "keyValue" ? "MFFloat" : "SFFloat";
			if (/position|pi$/i.test(ident)) return propName === "keyValue" ? "MFVec3f" : "SFVec3f";
		}
		if (protoFieldTypes[propName]) {
			return protoFieldTypes[propName];
		}
		if (objExpr && objExpr.type === "Identifier") {
			const stripped = upperCaseFirst(objExpr.name.replace(/Node$/i, ""));
			if (schemaFieldTypes[stripped] && schemaFieldTypes[stripped][propName]) {
				return schemaFieldTypes[stripped][propName];
			}
		}
		const preferredNodes = [
			"Viewpoint",
			"NavigationInfo",
			"Transform",
			"PositionInterpolator",
			"OrientationInterpolator",
			"ScalarInterpolator",
			"ColorInterpolator",
			"TimeSensor",
			"Switch",
			"Material",
			"Group"
		];
		for (const nType of preferredNodes) {
			if (schemaFieldTypes[nType] && schemaFieldTypes[nType][propName]) {
				return schemaFieldTypes[nType][propName];
			}
		}
		if (FALLBACK_NODE_FIELD_TYPES[propName]) {
			return FALLBACK_NODE_FIELD_TYPES[propName];
		}
		for (const nType of Object.keys(schemaFieldTypes)) {
			if (schemaFieldTypes[nType] && schemaFieldTypes[nType][propName]) {
				return schemaFieldTypes[nType][propName];
			}
		}
		return null;
	};

	const helperReturnTypes = new Map();

	const inferPascalType = (expr, localScope, curParamTypeMap) => {
		if (!expr || !expr.type) return "Single";
		if (expr.type === "Literal") {
			if (expr.kind === "boolean") return "Boolean";
			if (expr.kind === "string") return "String";
			if (expr.kind === "null" || expr.kind === "undefined") return "TX3DNode";
			if (expr.kind === "number") return /[eE.]/.test(expr.value) ? "Single" : "Integer";
		}
		if (expr.type === "Identifier") {
			if (curParamTypeMap && curParamTypeMap.has(expr.name)) {
				return curParamTypeMap.get(expr.name);
			}
			if (localScope && localScope.has(expr.name)) {
				return localScope.get(expr.name);
			}
			if (fieldMap.has(expr.name)) {
				return fieldMap.get(expr.name).pascalType;
			}
		}
		if (expr.type === "Index") {
			if (
				expr.object &&
				expr.object.type === "Member" &&
				inferPascalType(expr.object.object, localScope, curParamTypeMap) === "TX3DNode"
			) {
				const x3dT = resolveNodeFieldX3DType(expr.object.object, expr.object.property);
				if (x3dT && x3dT.startsWith("MF")) {
					const sfT = "SF" + x3dT.slice(2);
					if (X3D_TYPE_TO_PASCAL[sfT]) return X3D_TYPE_TO_PASCAL[sfT];
				}
			}
			const objType = inferPascalType(expr.object, localScope, curParamTypeMap);
			if (objType.startsWith("array of ")) {
				return objType.slice("array of ".length);
			}
		}
		if (expr.type === "Member") {
			if (expr.property === "length") return "Integer";
			if (["x", "y", "z", "w", "r", "g", "b", "a", "angle"].includes(expr.property)) {
				return "Single";
			}
			if (inferPascalType(expr.object, localScope, curParamTypeMap) === "TX3DNode") {
				const x3dT = resolveNodeFieldX3DType(expr.object, expr.property);
				if (x3dT && X3D_TYPE_TO_PASCAL[x3dT]) {
					return X3D_TYPE_TO_PASCAL[x3dT];
				}
			}
		}
		if (expr.type === "Call" && expr.callee) {
			if (expr.callee.type === "Member") {
				const prop = expr.callee.property;
				if (prop === "toString" || prop === "toFixed") return "String";
				if (["normalize", "add", "subtract", "multiply", "divide", "negate", "slerp", "inverse"].includes(prop)) {
					return inferPascalType(expr.callee.object, localScope, curParamTypeMap);
				}
				if (["length", "dot"].includes(prop)) return "Single";
				if (prop === "cross" || prop === "multVec") return "TVector3";
				if (prop === "equals") return "Boolean";
			} else if (expr.callee.type === "Identifier" && helperReturnTypes.has(expr.callee.name)) {
				return helperReturnTypes.get(expr.callee.name) || "Single";
			}
		}
		if (expr.type === "Unary") {
			if (expr.op === "!") return "Boolean";
			if (expr.op === "typeof") return "String";
			return inferPascalType(expr.arg, localScope, curParamTypeMap);
		}
		if (expr.type === "Binary") {
			if (
				["==", "!=", "===", "!==", "<", ">", "<=", ">=", "&&", "||", "in", "instanceof"].includes(
					expr.op
				)
			) {
				return "Boolean";
			}
			if (expr.op === "+") {
				const lt = inferPascalType(expr.left, localScope, curParamTypeMap);
				const rt = inferPascalType(expr.right, localScope, curParamTypeMap);
				if (lt === "String" || rt === "String") return "String";
				if (lt.startsWith("TVector") || rt.startsWith("TVector")) {
					return lt.startsWith("TVector") ? lt : rt;
				}
			}
			if (["-", "*", "/"].includes(expr.op)) {
				const lt = inferPascalType(expr.left, localScope, curParamTypeMap);
				const rt = inferPascalType(expr.right, localScope, curParamTypeMap);
				if (lt.startsWith("TVector")) return lt;
				if (rt.startsWith("TVector")) return rt;
			}
		}
		if (expr.type === "New" && expr.callee && expr.callee.type === "Identifier") {
			const t = X3D_TYPE_TO_PASCAL[expr.callee.name];
			if (t) return t;
		}
		return inferExprType(expr);
	};

	const collectFnLocals = (node, locals, assigned, knownNonLocals, uninitVars, curParamTypeMap) => {
		if (!node || typeof node !== "object") return;
		if (node.type === "VarDecl") {
			for (const d of node.decls) {
				if (!knownNonLocals.has(d.name)) {
					if (d.init) {
						const inferred = inferPascalType(d.init, locals, curParamTypeMap);
						if (
							!locals.has(d.name) ||
							uninitVars.has(d.name) ||
							(locals.get(d.name) === "Single" && inferred !== "Single")
						) {
							locals.set(d.name, inferred);
						}
						uninitVars.delete(d.name);
					} else if (!locals.has(d.name)) {
						locals.set(d.name, "Single");
						uninitVars.add(d.name);
					}
				}
			}
		} else if (node.type === "ForInOf") {
			if (!knownNonLocals.has(node.leftVar) && !locals.has(node.leftVar)) {
				locals.set(node.leftVar, node.op === "in" ? "Integer" : "Single");
			}
		} else if (node.type === "For") {
			const simple = isSimpleForLoop(node);
			if (simple) {
				if (!knownNonLocals.has(simple.loopVar)) {
					locals.set(simple.loopVar, "Integer");
					uninitVars.delete(simple.loopVar);
				}
				if (
					simple.endNode &&
					simple.endNode.type === "Identifier" &&
					locals.get(simple.endNode.name) === "Single"
				) {
					locals.set(simple.endNode.name, "Integer");
				}
			}
		} else if (node.type === "Assign") {
			const rootId = getRootIdent(node.left);
			if (rootId) assigned.add(rootId);
			if (
				node.op === "=" &&
				node.left &&
				node.left.type === "Identifier" &&
				!knownNonLocals.has(node.left.name)
			) {
				const rhsType = inferPascalType(node.right, locals, curParamTypeMap);
				if (
					!locals.has(node.left.name) ||
					uninitVars.has(node.left.name) ||
					(locals.get(node.left.name) === "Single" && rhsType !== "Single")
				) {
					locals.set(node.left.name, rhsType);
					uninitVars.delete(node.left.name);
				}
			}
		} else if (node.type === "Update") {
			const rootId = getRootIdent(node.arg);
			if (rootId) assigned.add(rootId);
			if (
				node.arg &&
				node.arg.type === "Identifier" &&
				!knownNonLocals.has(node.arg.name) &&
				!locals.has(node.arg.name)
			) {
				locals.set(node.arg.name, "Integer");
			}
		}
		for (const k of Object.keys(node)) {
			const child = node[k];
			if (Array.isArray(child)) {
				child.forEach((c) => {
					if (c && typeof c === "object" && c.type !== "FunctionDecl") {
						collectFnLocals(c, locals, assigned, knownNonLocals, uninitVars, curParamTypeMap);
					}
				});
			} else if (child && typeof child === "object" && child.type !== "FunctionDecl") {
				collectFnLocals(child, locals, assigned, knownNonLocals, uninitVars, curParamTypeMap);
			}
		}
	};

	// Collect helper parameter types & overloads iteratively (propagating helper-to-helper calls)
	const helperCallArgTypes = new Map();
	const helperParamVariants = new Map();
	const scanCallSites = (node, localScope, curParamTypeMap) => {
		if (!node || typeof node !== "object") return;
		if (node.type === "Call" && node.callee && node.callee.type === "Identifier") {
			const fnName = node.callee.name;
			if (functions.has(fnName) && !isHandlerName(fnName)) {
				if (!helperCallArgTypes.has(fnName)) helperCallArgTypes.set(fnName, []);
				const arr = helperCallArgTypes.get(fnName);
				node.args.forEach((arg, idx) => {
					if (!arr[idx]) arr[idx] = new Set();
					arr[idx].add(inferPascalType(arg, localScope, curParamTypeMap));
				});
			}
		}
		for (const k of Object.keys(node)) {
			const child = node[k];
			if (Array.isArray(child)) {
				child.forEach((c) => scanCallSites(c, localScope, curParamTypeMap));
			} else if (child && typeof child === "object") {
				scanCallSites(child, localScope, curParamTypeMap);
			}
		}
	};

	for (let pass = 0; pass < 2; pass++) {
		for (const [fnName, fn] of functions.entries()) {
			let pMap = null;
			if (pass > 0 && !isHandlerName(fnName)) {
				const vars = helperParamVariants.get(fnName);
				if (vars && vars[0]) {
					pMap = new Map();
					fn.params.forEach((p, idx) => pMap.set(p, vars[0][idx] || "Single"));
				}
			}
			const tmpLocals = new Map();
			const tmpAssigned = new Set();
			const tmpUninit = new Set();
			const tmpNonLocals = new Set([...fieldMap.keys(), ...fn.params, "Math", "Browser", "console"]);
			collectFnLocals(fn.body, tmpLocals, tmpAssigned, tmpNonLocals, tmpUninit, pMap);
			collectFnLocals(fn.body, tmpLocals, tmpAssigned, tmpNonLocals, tmpUninit, pMap);
			scanCallSites(fn.body, tmpLocals, pMap);
		}

		for (const [fnName, fn] of functions.entries()) {
			if (!isHandlerName(fnName)) {
				const argTypeSets = helperCallArgTypes.get(fnName) || [];
				const perParamOptions = fn.params.map((p, idx) => {
					const callSet = argTypeSets[idx] || new Set();
					if (usesAsString(fn.body, p) || callSet.has("String")) return ["String"];
					if (usesAsInteger(fn.body, p)) return ["Integer"];
					const arrayCallTypes = Array.from(callSet).filter((t) => t.startsWith("array of "));
					if (arrayCallTypes.length > 0) return arrayCallTypes;
					if (callSet.has("TX3DNode")) return ["TX3DNode"];
					if (callSet.has("TVector4")) return ["TVector4"];
					if (callSet.has("TVector3")) return ["TVector3"];
					if (callSet.has("TVector2")) return ["TVector2"];
					if (callSet.has("Boolean")) return ["Boolean"];
					if (callSet.has("Integer") && !callSet.has("Single")) return ["Integer"];
					return ["Single"];
				});
				let variants = [[]];
				for (const opts of perParamOptions) {
					const next = [];
					for (const prefix of variants) {
						for (const opt of opts) {
							next.push([...prefix, opt]);
						}
					}
					variants = next;
				}
				helperParamVariants.set(fnName, variants);

				const retExprs = getReturnExprs(fn.body);
				if (retExprs.length > 0) {
					const firstVariant = variants[0] || [];
					const pMap = new Map();
					fn.params.forEach((p, idx) => pMap.set(p, firstVariant[idx] || "Single"));
					const retLocals = new Map();
					const retAssigned = new Set();
					const retUninit = new Set();
					const retNonLocals = new Set([...fieldMap.keys(), ...fn.params, "Math", "Browser", "console"]);
					collectFnLocals(fn.body, retLocals, retAssigned, retNonLocals, retUninit, pMap);
					collectFnLocals(fn.body, retLocals, retAssigned, retNonLocals, retUninit, pMap);
					helperReturnTypes.set(fnName, inferPascalType(retExprs[0], retLocals, pMap));
				} else {
					helperReturnTypes.set(fnName, null);
				}
			}
		}
	}

	const methodNames = new Map();
	for (const fnName of functions.keys()) {
		methodNames.set(fnName, upperCaseFirst(sanitizeId(fnName)));
	}

	const usedSendHelpers = new Set();
	const skippedBrowserVars = new Set();

	const getTypeofString = (arg, localScope, curParamTypeMap) => {
		if (!arg) return "'undefined'";
		if (arg.type === "Literal") {
			if (arg.kind === "boolean") return "'boolean'";
			if (arg.kind === "number") return "'number'";
			if (arg.kind === "string") return "'string'";
			if (arg.kind === "undefined") return "'undefined'";
			if (arg.kind === "null") return "'object'";
		}
		if (arg.type === "Identifier") {
			if (arg.name === "Math" || arg.name === "Browser" || arg.name === "console") {
				return "'object'";
			}
			const isDeclared =
				(curParamTypeMap && curParamTypeMap.has(arg.name)) ||
				(localScope && localScope.has(arg.name)) ||
				fieldMap.has(arg.name);
			if (!isDeclared || skippedBrowserVars.has(arg.name)) {
				return "'undefined'";
			}
		}
		const pt = inferPascalType(arg, localScope, curParamTypeMap);
		if (pt === "Boolean") return "'boolean'";
		if (pt === "Integer" || pt === "Int32" || pt === "Single" || pt === "Double") {
			return "'number'";
		}
		if (pt === "String") return "'string'";
		return "'object'";
	};

	const toBoolCode = (expr, code, localScope, curParamTypeMap) => {
		const t = inferPascalType(expr, localScope, curParamTypeMap);
		if (t === "Boolean") return code;
		if (t === "TX3DNode") return "((" + code + ") <> nil)";
		if (t === "String") return "((" + code + ") <> '')";
		return "((" + code + ") <> 0)";
	};

	const toStringCode = (expr, code, localScope, curParamTypeMap) => {
		const t = inferPascalType(expr, localScope, curParamTypeMap);
		if (t === "String") return code;
		if (t === "Integer" || t === "Int32") return "IntToStr(" + code + ")";
		if (t === "Single" || t === "Double") return "FloatToStr(" + code + ")";
		if (t === "Boolean") return "BoolToStr(" + code + ", True)";
		if (
			t === "TVector2" ||
			t === "TVector3" ||
			t === "TVector4" ||
			t === "TVector2Double" ||
			t === "TVector3Double" ||
			t === "TVector4Double"
		) {
			const needsParens =
				expr && (expr.type === "Binary" || expr.type === "Unary" || expr.type === "Conditional");
			return (needsParens ? "(" + code + ")" : code) + ".ToString";
		}
		if (t === "TX3DNode") {
			usedSendHelpers.add("NodeToStr");
			return "NodeToStr(" + code + ")";
		}
		if (t.startsWith("array of ")) {
			return "'[' + IntToStr(Length(" + code + ")) + ' items]'";
		}
		return code;
	};

	const emitIdent = (name, localScope, curParamMap) => {
		if (curParamMap && curParamMap.has(name)) {
			return curParamMap.get(name);
		}
		if (localScope && localScope.has(name)) {
			return sanitizeId(name);
		}
		if (fieldMap.has(name)) {
			return "F" + name;
		}
		return sanitizeId(name);
	};

	const markDirtyIfField = (rootId, fx) => {
		if (rootId && fieldMap.has(rootId)) {
			const fm = fieldMap.get(rootId);
			if (fm.accessType === "outputOnly" || fm.accessType === "inputOutput") {
				fx.post.push("FDirty_" + rootId + " := True;");
			}
		}
	};

	const emitExpr = (expr, localScope, curParamMap, curParamTypeMap, fx) => {
		if (!expr || !expr.type) return "0";
		switch (expr.type) {
			case "Literal":
				if (expr.kind === "number") return expr.value;
				if (expr.kind === "string") return escapePascalString(expr.value);
				if (expr.kind === "boolean") return expr.value ? "True" : "False";
				if (expr.kind === "null" || expr.kind === "undefined") return "nil";
				return "0";

			case "Identifier":
				return emitIdent(expr.name, localScope, curParamMap);

			case "ArrayLiteral":
				return (
					"[" +
					expr.elements
						.map((e) => emitExpr(e, localScope, curParamMap, curParamTypeMap, fx))
						.join(", ") +
					"]"
				);

			case "Member": {
				const obj = expr.object;
				const prop = expr.property;
				if (obj && obj.type === "Identifier" && obj.name === "Math") {
					if (prop === "PI") return "Pi";
					if (prop === "E") return "Exp(1.0)";
					if (prop === "SQRT2") return "Sqrt(2.0)";
				}
				if (prop === "length") {
					if (
						obj &&
						obj.type === "Member" &&
						inferPascalType(obj.object, localScope, curParamTypeMap) === "TX3DNode"
					) {
						const innerCode = emitExpr(obj.object, localScope, curParamMap, curParamTypeMap, fx);
						usedSendHelpers.add("GetNodeFieldCount");
						return "GetNodeFieldCount(" + innerCode + ", " + escapePascalString(obj.property) + ")";
					}
					const objCode = emitExpr(obj, localScope, curParamMap, curParamTypeMap, fx);
					return "Length(" + objCode + ")";
				}
				const objCode = emitExpr(obj, localScope, curParamMap, curParamTypeMap, fx);
				if (["x", "y", "z", "w"].includes(prop)) {
					return objCode + "." + prop.toUpperCase();
				}
				if (prop === "r") return objCode + ".X";
				if (prop === "g") return objCode + ".Y";
				if (prop === "b") return objCode + ".Z";
				if (prop === "a" || prop === "angle") return objCode + ".W";

				if (inferPascalType(obj, localScope, curParamTypeMap) === "TX3DNode") {
					const x3dT = resolveNodeFieldX3DType(obj, prop);
					let getter = "GetNodeFloat";
					if (x3dT === "SFNode") getter = "GetNodeSFNode";
					else if (x3dT === "SFBool") getter = "GetNodeBool";
					else if (x3dT === "SFInt32") getter = "GetNodeInt";
					else if (x3dT === "SFString") getter = "GetNodeString";
					else if (x3dT === "SFVec2f") getter = "GetNodeVec2";
					else if (x3dT === "SFVec3f" || x3dT === "SFColor") getter = "GetNodeVec3";
					else if (x3dT === "SFVec4f" || x3dT === "SFRotation" || x3dT === "SFColorRGBA") {
						getter = "GetNodeVec4";
					} else if (x3dT === "MFFloat") getter = "GetNodeMFFloat";
					else if (x3dT === "MFDouble" || x3dT === "MFTime") getter = "GetNodeMFDouble";
					else if (x3dT === "MFInt32") getter = "GetNodeMFInt32";
					else if (x3dT === "MFBool") getter = "GetNodeMFBool";
					else if (x3dT === "MFString") getter = "GetNodeMFString";
					else if (x3dT === "MFVec2f") getter = "GetNodeMFVec2";
					else if (x3dT === "MFVec3f" || x3dT === "MFColor") getter = "GetNodeMFVec3";
					else if (x3dT === "MFVec4f" || x3dT === "MFRotation" || x3dT === "MFColorRGBA") {
						getter = "GetNodeMFVec4";
					} else if (x3dT === "MFNode") getter = "GetNodeMFNode";
					usedSendHelpers.add(getter);
					return getter + "(" + objCode + ", " + escapePascalString(prop) + ")";
				}
				return objCode + "." + prop;
			}

			case "Index": {
				if (
					expr.object &&
					expr.object.type === "Member" &&
					inferPascalType(expr.object.object, localScope, curParamTypeMap) === "TX3DNode"
				) {
					const innerCode = emitExpr(
						expr.object.object,
						localScope,
						curParamMap,
						curParamTypeMap,
						fx
					);
					const idxCode = emitExpr(expr.index, localScope, curParamMap, curParamTypeMap, fx);
					const x3dT = resolveNodeFieldX3DType(expr.object.object, expr.object.property);
					let getter = "GetNodeMFFloatItem";
					if (x3dT === "MFNode") getter = "GetNodeMFNodeItem";
					else if (x3dT === "MFInt32") getter = "GetNodeMFInt32Item";
					else if (x3dT === "MFBool") getter = "GetNodeMFBoolItem";
					else if (x3dT === "MFString") getter = "GetNodeMFStringItem";
					else if (x3dT === "MFVec2f") getter = "GetNodeMFVec2Item";
					else if (x3dT === "MFVec3f" || x3dT === "MFColor") getter = "GetNodeMFVec3Item";
					else if (x3dT === "MFVec4f" || x3dT === "MFRotation" || x3dT === "MFColorRGBA") {
						getter = "GetNodeMFVec4Item";
					}
					usedSendHelpers.add(getter);
					return (
						getter +
						"(" +
						innerCode +
						", " +
						escapePascalString(expr.object.property) +
						", " +
						idxCode +
						")"
					);
				}
				return (
					emitExpr(expr.object, localScope, curParamMap, curParamTypeMap, fx) +
					"[" +
					emitExpr(expr.index, localScope, curParamMap, curParamTypeMap, fx) +
					"]"
				);
			}

			case "New": {
				const cname = expr.callee && expr.callee.type === "Identifier" ? expr.callee.name : "";
				const args = expr.args.map((a) =>
					emitExpr(a, localScope, curParamMap, curParamTypeMap, fx)
				);
				switch (cname) {
					case "SFVec2f":
						return args.length === 0 ? "Vector2(0, 0)" : "Vector2(" + args.join(", ") + ")";
					case "SFVec3f":
					case "SFColor":
						return args.length === 0 ? "Vector3(0, 0, 0)" : "Vector3(" + args.join(", ") + ")";
					case "SFVec4f":
					case "SFColorRGBA":
						return args.length === 0
							? "Vector4(0, 0, 0, 0)"
							: "Vector4(" + args.join(", ") + ")";
					case "SFRotation":
						if (args.length === 0) return "Vector4(0, 0, 1, 0)";
						if (
							args.length === 2 &&
							inferPascalType(expr.args[1], localScope, curParamTypeMap) === "TVector3"
						) {
							usedSendHelpers.add("RotationBetweenVectors");
							return "RotationBetweenVectors(" + args[0] + ", " + args[1] + ")";
						}
						return "Vector4(" + args.join(", ") + ")";
					case "SFVec2d":
						return args.length === 0
							? "Vector2Double(0, 0)"
							: "Vector2Double(" + args.join(", ") + ")";
					case "SFVec3d":
						return args.length === 0
							? "Vector3Double(0, 0, 0)"
							: "Vector3Double(" + args.join(", ") + ")";
					case "SFVec4d":
						return args.length === 0
							? "Vector4Double(0, 0, 0, 0)"
							: "Vector4Double(" + args.join(", ") + ")";
					default:
						return "[" + args.join(", ") + "]";
				}
			}

			case "Unary": {
				if (expr.op === "typeof") {
					return getTypeofString(expr.arg, localScope, curParamTypeMap);
				}
				const argCode = emitExpr(expr.arg, localScope, curParamMap, curParamTypeMap, fx);
				const needsParens = expr.arg && expr.arg.type === "Binary";
				const wrapped = needsParens ? "(" + argCode + ")" : argCode;
				if (expr.op === "!") {
					return "not (" + toBoolCode(expr.arg, argCode, localScope, curParamTypeMap) + ")";
				}
				if (expr.op === "~") return "not (" + argCode + ")";
				if (expr.op === "+") return wrapped;
				if (expr.op === "-") return "-" + wrapped;
				return wrapped;
			}

			case "Binary": {
				if (["==", "!=", "===", "!=="].includes(expr.op)) {
					const isEq = expr.op === "==" || expr.op === "===";
					const getStaticString = (n) => {
						if (!n) return null;
						if (n.type === "Literal" && n.kind === "string") return n.value;
						if (n.type === "Unary" && n.op === "typeof") {
							return getTypeofString(n.arg, localScope, curParamTypeMap).slice(1, -1);
						}
						return null;
					};
					const ls = getStaticString(expr.left);
					const rs = getStaticString(expr.right);
					if (ls !== null && rs !== null) {
						return (isEq ? ls === rs : ls !== rs) ? "True" : "False";
					}

					const lt = inferPascalType(expr.left, localScope, curParamTypeMap);
					const rt = inferPascalType(expr.right, localScope, curParamTypeMap);
					const isNullOrUndef = (n) =>
						n && n.type === "Literal" && (n.kind === "null" || n.kind === "undefined");
					const isUndefStr = (n) =>
						n && n.type === "Literal" && n.kind === "string" && n.value === "undefined";
					const canCompareNil = (t) => t === "TX3DNode" || t.startsWith("array of ");

					if (
						(isNullOrUndef(expr.right) && !canCompareNil(lt)) ||
						(isNullOrUndef(expr.left) && !canCompareNil(rt)) ||
						(isUndefStr(expr.right) && lt !== "String") ||
						(isUndefStr(expr.left) && rt !== "String")
					) {
						return isEq ? "False" : "True";
					}
				}
				const pPrec = JS_BIN_PREC[expr.op] || 0;
				let l = emitExpr(expr.left, localScope, curParamMap, curParamTypeMap, fx);
				let r = emitExpr(expr.right, localScope, curParamMap, curParamTypeMap, fx);
				if (expr.op === "+") {
					const lt = inferPascalType(expr.left, localScope, curParamTypeMap);
					const rt = inferPascalType(expr.right, localScope, curParamTypeMap);
					if (lt === "String" || rt === "String") {
						return (
							toStringCode(expr.left, l, localScope, curParamTypeMap) +
							" + " +
							toStringCode(expr.right, r, localScope, curParamTypeMap)
						);
					}
				}
				if (expr.op === "&&" || expr.op === "||") {
					const opKw = expr.op === "&&" ? "and" : "or";
					const lb = toBoolCode(expr.left, l, localScope, curParamTypeMap);
					const rb = toBoolCode(expr.right, r, localScope, curParamTypeMap);
					return "(" + lb + ") " + opKw + " (" + rb + ")";
				}
				if (expr.left && expr.left.type === "Binary") {
					const lPrec = JS_BIN_PREC[expr.left.op] || 0;
					if (lPrec < pPrec || pPrec <= 6) {
						l = "(" + l + ")";
					}
				}
				if (expr.right && expr.right.type === "Binary") {
					const rPrec = JS_BIN_PREC[expr.right.op] || 0;
					if (
						rPrec < pPrec ||
						pPrec <= 6 ||
						(rPrec === pPrec && ["-", "/", "%", "<<", ">>", ">>>"].includes(expr.op))
					) {
						r = "(" + r + ")";
					}
				}
				const opMap = {
					"===": "=",
					"==": "=",
					"!==": "<>",
					"!=": "<>",
					"&": "and",
					"|": "or",
					"^": "xor",
					"<<": "shl",
					">>": "shr",
					">>>": "shr",
					"%": "mod"
				};
				const op = opMap[expr.op] || expr.op;
				if (op === "and" || op === "or" || op === "xor") {
					return "(" + l + ") " + op + " (" + r + ")";
				}
				return l + " " + op + " " + r;
			}

			case "Conditional": {
				const rawTest = emitExpr(expr.test, localScope, curParamMap, curParamTypeMap, fx);
				const boolTest = toBoolCode(expr.test, rawTest, localScope, curParamTypeMap);
				return (
					"IfThen(" +
					boolTest +
					", " +
					emitExpr(expr.consequent, localScope, curParamMap, curParamTypeMap, fx) +
					", " +
					emitExpr(expr.alternate, localScope, curParamMap, curParamTypeMap, fx) +
					")"
				);
			}

			case "Call": {
				const c = expr.callee;
				const args = expr.args.map((a) =>
					emitExpr(a, localScope, curParamMap, curParamTypeMap, fx)
				);
				const formatWriteLnArgs = () =>
					expr.args
						.map((a, idx) => {
							const t = inferPascalType(a, localScope, curParamTypeMap);
							if (t === "TX3DNode" || t.startsWith("TVector")) {
								return toStringCode(a, args[idx], localScope, curParamTypeMap);
							}
							return args[idx];
						})
						.join(", ");
				if (c && c.type === "Member") {
					if (c.object && c.object.type === "Identifier" && c.object.name === "Math") {
						const mathMap = {
							random: () => "Random",
							floor: () => "Floor(" + args[0] + ")",
							ceil: () => "Ceil(" + args[0] + ")",
							round: () => "Round(" + args[0] + ")",
							abs: () => "Abs(" + args[0] + ")",
							sin: () => "Sin(" + args[0] + ")",
							cos: () => "Cos(" + args[0] + ")",
							tan: () => "Tan(" + args[0] + ")",
							asin: () => "ArcSin(" + args[0] + ")",
							acos: () => "ArcCos(" + args[0] + ")",
							atan: () => "ArcTan(" + args[0] + ")",
							atan2: () => "ArcTan2(" + args[0] + ", " + args[1] + ")",
							sqrt: () => "Sqrt(" + args[0] + ")",
							pow: () => "Power(" + args[0] + ", " + args[1] + ")",
							exp: () => "Exp(" + args[0] + ")",
							log: () => "Ln(" + args[0] + ")",
							min: () => "Min(" + args[0] + ", " + args[1] + ")",
							max: () => "Max(" + args[0] + ", " + args[1] + ")"
						};
						if (mathMap[c.property]) return mathMap[c.property]();
					}
					if (
						c.object &&
						c.object.type === "Identifier" &&
						((c.object.name === "Browser" && (c.property === "print" || c.property === "println")) ||
							(c.object.name === "console" &&
								["log", "info", "warn", "error"].includes(c.property)))
					) {
						return "WriteLn(" + formatWriteLnArgs() + ")";
					}
					const objType = inferPascalType(c.object, localScope, curParamTypeMap);
					const objCode = emitExpr(c.object, localScope, curParamMap, curParamTypeMap, fx);
					const wrappedObj =
						c.object &&
						(c.object.type === "Binary" ||
							c.object.type === "Unary" ||
							c.object.type === "Conditional")
							? "(" + objCode + ")"
							: objCode;
					if (c.property === "toString") {
						return toStringCode(c.object, objCode, localScope, curParamTypeMap);
					}
					if (c.property === "toFixed") {
						return "FloatToStr(" + objCode + ")";
					}
					if (c.property === "normalize") return wrappedObj + ".Normalize";
					if (c.property === "length") return wrappedObj + ".Length";
					if (c.property === "dot") return "TVector3.DotProduct(" + objCode + ", " + args[0] + ")";
					if (c.property === "cross") return "TVector3.CrossProduct(" + objCode + ", " + args[0] + ")";
					if (c.property === "add") return "(" + objCode + " + " + args[0] + ")";
					if (c.property === "subtract") return "(" + objCode + " - " + args[0] + ")";
					if (c.property === "multiply") return "(" + objCode + " * " + args[0] + ")";
					if (c.property === "divide") return "(" + objCode + " / " + args[0] + ")";
					if (c.property === "negate") return "(-" + wrappedObj + ")";
					if (c.property === "slerp") {
						usedSendHelpers.add("SlerpRotation");
						return "SlerpRotation(" + objCode + ", " + args[0] + ", " + args[1] + ")";
					}
					if (c.property === "inverse" && objType === "TVector4") {
						usedSendHelpers.add("InvertRotation");
						return "InvertRotation(" + objCode + ")";
					}
					if (c.property === "multVec") {
						usedSendHelpers.add("RotateVec3");
						return "RotateVec3(" + objCode + ", " + args[0] + ")";
					}
					if (c.property === "equals") {
						const vecCls = objType === "TVector4" ? "TVector4" : "TVector3";
						return vecCls + ".Equals(" + objCode + ", " + args[0] + ")";
					}
					return objCode + "." + c.property + "(" + args.join(", ") + ")";
				}
				if (c && c.type === "Identifier") {
					if (c.name === "print") {
						return "WriteLn(" + formatWriteLnArgs() + ")";
					}
					if (functions.has(c.name)) {
						const mName = methodNames.get(c.name);
						if (isHandlerName(c.name)) {
							return mName + "(nil, Time)";
						}
						const fnDecl = functions.get(c.name);
						const variants = helperParamVariants.get(c.name) || [[]];
						const pTypes = variants[0] || [];
						const padded = fnDecl.params.map((_, idx) => {
							if (idx < args.length) {
								if (pTypes[idx] === "String") {
									return toStringCode(expr.args[idx], args[idx], localScope, curParamTypeMap);
								}
								return args[idx];
							}
							if (pTypes[idx] === "String") return "''";
							if (pTypes[idx] === "Boolean") return "False";
							if (pTypes[idx] === "TX3DNode") return "nil";
							if (pTypes[idx] === "Integer") return "0";
							return "0.0";
						});
						padded.push("Time");
						return mName + "(" + padded.join(", ") + ")";
					}
				}
				return (
					emitExpr(c, localScope, curParamMap, curParamTypeMap, fx) + "(" + args.join(", ") + ")"
				);
			}

			case "Assign": {
				if (
					expr.op === "=" &&
					expr.left &&
					expr.left.type === "Index" &&
					expr.left.object &&
					expr.left.object.type === "Member" &&
					inferPascalType(expr.left.object.object, localScope, curParamTypeMap) === "TX3DNode"
				) {
					const innerCode = emitExpr(
						expr.left.object.object,
						localScope,
						curParamMap,
						curParamTypeMap,
						fx
					);
					const idxCode = emitExpr(expr.left.index, localScope, curParamMap, curParamTypeMap, fx);
					const rhsCode = emitExpr(expr.right, localScope, curParamMap, curParamTypeMap, fx);
					const x3dT = resolveNodeFieldX3DType(expr.left.object.object, expr.left.object.property);
					const rhsType = inferPascalType(expr.right, localScope, curParamTypeMap);
					let setter = "SetNodeMFFloatItem";
					if (x3dT === "MFInt32") setter = "SetNodeMFInt32Item";
					else if (x3dT === "MFBool" || rhsType === "Boolean") setter = "SetNodeMFBoolItem";
					else if (x3dT === "MFString" || rhsType === "String") setter = "SetNodeMFStringItem";
					else if (x3dT === "MFVec2f" || rhsType === "TVector2") setter = "SetNodeMFVec2Item";
					else if (x3dT === "MFVec3f" || x3dT === "MFColor" || rhsType === "TVector3") {
						setter = "SetNodeMFVec3Item";
					} else if (
						x3dT === "MFVec4f" ||
						x3dT === "MFRotation" ||
						x3dT === "MFColorRGBA" ||
						rhsType === "TVector4"
					) {
						setter = "SetNodeMFVec4Item";
					}
					usedSendHelpers.add(setter);
					return (
						setter +
						"(" +
						innerCode +
						", " +
						escapePascalString(expr.left.object.property) +
						", " +
						idxCode +
						", " +
						rhsCode +
						", Time)"
					);
				}
				if (
					expr.op === "=" &&
					expr.left &&
					expr.left.type === "Member" &&
					!["x", "y", "z", "w", "r", "g", "b", "a"].includes(expr.left.property) &&
					inferPascalType(expr.left.object, localScope, curParamTypeMap) === "TX3DNode"
				) {
					const objCode = emitExpr(
						expr.left.object,
						localScope,
						curParamMap,
						curParamTypeMap,
						fx
					);
					const rhsCode = emitExpr(expr.right, localScope, curParamMap, curParamTypeMap, fx);
					const rhsType = inferPascalType(expr.right, localScope, curParamTypeMap);
					const x3dT = resolveNodeFieldX3DType(expr.left.object, expr.left.property);
					let helper = "SendNodeFloat";
					if (x3dT === "SFBool" || rhsType === "Boolean") helper = "SendNodeBool";
					else if (x3dT === "SFString" || rhsType === "String") helper = "SendNodeString";
					else if (x3dT === "SFVec2f" || rhsType === "TVector2") helper = "SendNodeVec2";
					else if (x3dT === "SFVec3f" || x3dT === "SFColor" || rhsType === "TVector3") {
						helper = "SendNodeVec3";
					} else if (
						x3dT === "SFVec4f" ||
						x3dT === "SFRotation" ||
						x3dT === "SFColorRGBA" ||
						rhsType === "TVector4"
					) {
						helper = "SendNodeVec4";
					} else if (x3dT === "SFNode" || rhsType === "TX3DNode") helper = "SendNodeSFNode";
					else if (x3dT === "MFFloat" || rhsType === "array of Single") helper = "SendNodeMFFloat";
					else if (x3dT === "MFInt32" || rhsType === "array of Int32") helper = "SendNodeMFInt32";
					else if (x3dT === "MFBool" || rhsType === "array of Boolean") helper = "SendNodeMFBool";
					else if (x3dT === "MFString" || rhsType === "array of String") helper = "SendNodeMFString";
					else if (x3dT === "MFVec2f" || rhsType === "array of TVector2") helper = "SendNodeMFVec2";
					else if (x3dT === "MFVec3f" || x3dT === "MFColor" || rhsType === "array of TVector3") {
						helper = "SendNodeMFVec3";
					} else if (
						x3dT === "MFVec4f" ||
						x3dT === "MFRotation" ||
						x3dT === "MFColorRGBA" ||
						rhsType === "array of TVector4"
					) {
						helper = "SendNodeMFVec4";
					}
					usedSendHelpers.add(helper);
					return (
						helper +
						"(" +
						objCode +
						", " +
						escapePascalString(expr.left.property) +
						", " +
						rhsCode +
						", Time)"
					);
				}
				let lhs;
				if (expr.left && expr.left.type === "Index") {
					const arrType = inferPascalType(expr.left.object, localScope, curParamTypeMap);
					const arrCode = emitExpr(expr.left.object, localScope, curParamMap, curParamTypeMap, fx);
					const idxCode = emitExpr(expr.left.index, localScope, curParamMap, curParamTypeMap, fx);
					if (
						[
							"TVector2",
							"TVector3",
							"TVector4",
							"TVector2Double",
							"TVector3Double",
							"TVector4Double"
						].includes(arrType)
					) {
						lhs = arrCode + ".Data[" + idxCode + "]";
					} else {
						fx.pre.push(
							"if (" +
								idxCode +
								") >= Length(" +
								arrCode +
								") then SetLength(" +
								arrCode +
								", (" +
								idxCode +
								") + 1);"
						);
						lhs = arrCode + "[" + idxCode + "]";
					}
				} else {
					lhs = emitExpr(expr.left, localScope, curParamMap, curParamTypeMap, fx);
				}
				const rhs = emitExpr(expr.right, localScope, curParamMap, curParamTypeMap, fx);
				const rootId = getRootIdent(expr.left);
				markDirtyIfField(rootId, fx);
				if (expr.op === "=") {
					return lhs + " := " + rhs;
				}
				const baseOp = expr.op.slice(0, -1);
				return lhs + " := " + lhs + " " + baseOp + " (" + rhs + ")";
			}

			case "Update": {
				const target = emitExpr(expr.arg, localScope, curParamMap, curParamTypeMap, fx);
				const deltaOp = expr.op === "++" ? "+" : "-";
				const rootId = getRootIdent(expr.arg);
				const updStmt = target + " := " + target + " " + deltaOp + " 1;";
				if (expr.prefix) {
					fx.pre.push(updStmt);
				} else {
					fx.post.push(updStmt);
				}
				markDirtyIfField(rootId, fx);
				return target;
			}

			default:
				return "0";
		}
	};

	const emitExprWithFx = (expr, localScope, curParamMap, curParamTypeMap, pad, lines) => {
		const fx = { pre: [], post: [] };
		const code = emitExpr(expr, localScope, curParamMap, curParamTypeMap, fx);
		for (const p of fx.pre) lines.push(pad + p);
		return { code, post: fx.post };
	};

	const emitStmt = (stmt, indent, localScope, curParamMap, curParamTypeMap, lines) => {
		const pad = "  ".repeat(indent);
		if (!stmt || stmt.type === "Empty") return;

		switch (stmt.type) {
			case "Block":
				lines.push(pad + "begin");
				for (const s of stmt.body) {
					emitStmt(s, indent + 1, localScope, curParamMap, curParamTypeMap, lines);
				}
				lines.push(pad + "end;");
				break;

			case "VarDecl":
				for (const d of stmt.decls) {
					if (d.init) {
						if (isUnsupportedBrowserDomExpr(d.init, skippedBrowserVars)) {
							skippedBrowserVars.add(d.name);
							lines.push(
								pad + "{ Skipped unsupported JS Browser/DOM initializer for " + sanitizeId(d.name) + " }"
							);
						} else {
							const { code, post } = emitExprWithFx(
								d.init,
								localScope,
								curParamMap,
								curParamTypeMap,
								pad,
								lines
							);
							lines.push(pad + sanitizeId(d.name) + " := " + code + ";");
							for (const p of post) lines.push(pad + p);
						}
					}
				}
				break;

			case "ExprStmt":
				if (isUnsupportedBrowserDomExpr(stmt.expr, skippedBrowserVars)) {
					if (
						stmt.expr &&
						stmt.expr.type === "Assign" &&
						stmt.expr.left &&
						stmt.expr.left.type === "Identifier"
					) {
						skippedBrowserVars.add(stmt.expr.left.name);
					}
					lines.push(pad + "{ Skipped unsupported JS Browser/DOM statement }");
				} else if (stmt.expr && stmt.expr.type === "Update") {
					const fx = { pre: [], post: [] };
					const target = emitExpr(stmt.expr.arg, localScope, curParamMap, curParamTypeMap, fx);
					const deltaOp = stmt.expr.op === "++" ? "+" : "-";
					for (const p of fx.pre) lines.push(pad + p);
					lines.push(pad + target + " := " + target + " " + deltaOp + " 1;");
					markDirtyIfField(getRootIdent(stmt.expr.arg), fx);
					for (const p of fx.post) lines.push(pad + p);
				} else {
					const { code, post } = emitExprWithFx(
						stmt.expr,
						localScope,
						curParamMap,
						curParamTypeMap,
						pad,
						lines
					);
					lines.push(pad + code + ";");
					for (const p of post) lines.push(pad + p);
				}
				break;

			case "If": {
				const fx = { pre: [], post: [] };
				const rawTestCode = emitExpr(stmt.test, localScope, curParamMap, curParamTypeMap, fx);
				const testCode = toBoolCode(stmt.test, rawTestCode, localScope, curParamTypeMap);
				if (fx.pre.length === 0 && fx.post.length === 0) {
					if (testCode === "False") {
						if (stmt.alternate) {
							if (stmt.alternate.type === "Block") {
								for (const s of stmt.alternate.body) {
									emitStmt(s, indent, localScope, curParamMap, curParamTypeMap, lines);
								}
							} else {
								emitStmt(stmt.alternate, indent, localScope, curParamMap, curParamTypeMap, lines);
							}
						}
						break;
					}
					if (testCode === "True") {
						if (stmt.consequent.type === "Block") {
							for (const s of stmt.consequent.body) {
								emitStmt(s, indent, localScope, curParamMap, curParamTypeMap, lines);
							}
						} else {
							emitStmt(stmt.consequent, indent, localScope, curParamMap, curParamTypeMap, lines);
						}
						break;
					}
				}
				for (const p of fx.pre) lines.push(pad + p);
				const altLines = [];
				if (stmt.alternate) {
					if (stmt.alternate.type === "If") {
						emitStmt(stmt.alternate, indent, localScope, curParamMap, curParamTypeMap, altLines);
					} else if (stmt.alternate.type === "Block") {
						for (const s of stmt.alternate.body) {
							emitStmt(s, indent + 1, localScope, curParamMap, curParamTypeMap, altLines);
						}
					} else {
						emitStmt(stmt.alternate, indent + 1, localScope, curParamMap, curParamTypeMap, altLines);
					}
				}
				const hasAlt = altLines.length > 0;
				lines.push(pad + "if " + testCode + " then");
				if (stmt.consequent.type === "Block") {
					lines.push(pad + "begin");
					for (const s of stmt.consequent.body) {
						emitStmt(s, indent + 1, localScope, curParamMap, curParamTypeMap, lines);
					}
					lines.push(hasAlt ? pad + "end" : pad + "end;");
				} else if (hasAlt) {
					lines.push(pad + "begin");
					emitStmt(stmt.consequent, indent + 1, localScope, curParamMap, curParamTypeMap, lines);
					lines.push(pad + "end");
				} else {
					emitStmt(stmt.consequent, indent + 1, localScope, curParamMap, curParamTypeMap, lines);
				}
				if (hasAlt) {
					if (stmt.alternate.type === "If") {
						if (altLines[0].trimStart().startsWith("if ")) {
							altLines[0] = pad + "else " + altLines[0].trimStart();
							lines.push(...altLines);
						} else {
							lines.push(pad + "else");
							lines.push(pad + "begin");
							for (const l of altLines) lines.push("  " + l);
							lines.push(pad + "end;");
						}
					} else {
						lines.push(pad + "else");
						lines.push(pad + "begin");
						lines.push(...altLines);
						lines.push(pad + "end;");
					}
				}
				for (const p of fx.post) lines.push(pad + p);
				break;
			}

			case "While": {
				const fx = { pre: [], post: [] };
				const rawTest = emitExpr(stmt.test, localScope, curParamMap, curParamTypeMap, fx);
				const testCode = toBoolCode(stmt.test, rawTest, localScope, curParamTypeMap);
				lines.push(pad + "while " + testCode + " do");
				if (stmt.body.type === "Block") {
					emitStmt(stmt.body, indent, localScope, curParamMap, curParamTypeMap, lines);
				} else {
					lines.push(pad + "begin");
					emitStmt(stmt.body, indent + 1, localScope, curParamMap, curParamTypeMap, lines);
					lines.push(pad + "end;");
				}
				break;
			}

			case "DoWhile": {
				const fx = { pre: [], post: [] };
				const rawTest = emitExpr(stmt.test, localScope, curParamMap, curParamTypeMap, fx);
				const testCode = toBoolCode(stmt.test, rawTest, localScope, curParamTypeMap);
				lines.push(pad + "repeat");
				if (stmt.body.type === "Block") {
					for (const s of stmt.body.body) {
						emitStmt(s, indent + 1, localScope, curParamMap, curParamTypeMap, lines);
					}
				} else {
					emitStmt(stmt.body, indent + 1, localScope, curParamMap, curParamTypeMap, lines);
				}
				lines.push(pad + "until not (" + testCode + ");");
				break;
			}

			case "For": {
				const simple = isSimpleForLoop(stmt);
				if (simple) {
					const fx = { pre: [], post: [] };
					const vName = sanitizeId(simple.loopVar);
					const startCode = emitExpr(simple.startExpr, localScope, curParamMap, curParamTypeMap, fx);
					let endCode = emitExpr(simple.endNode, localScope, curParamMap, curParamTypeMap, fx);
					if (simple.adjust === -1) endCode = "(" + endCode + ") - 1";
					else if (simple.adjust === 1) endCode = "(" + endCode + ") + 1";
					lines.push(
						pad + "for " + vName + " := " + startCode + " " + simple.dir + " " + endCode + " do"
					);
					if (stmt.body.type === "Block") {
						emitStmt(stmt.body, indent, localScope, curParamMap, curParamTypeMap, lines);
					} else {
						lines.push(pad + "begin");
						emitStmt(stmt.body, indent + 1, localScope, curParamMap, curParamTypeMap, lines);
						lines.push(pad + "end;");
					}
				} else {
					if (stmt.init) {
						emitStmt(stmt.init, indent, localScope, curParamMap, curParamTypeMap, lines);
					}
					const fx = { pre: [], post: [] };
					const cond = stmt.test
						? toBoolCode(
								stmt.test,
								emitExpr(stmt.test, localScope, curParamMap, curParamTypeMap, fx),
								localScope,
								curParamTypeMap
							)
						: "True";
					lines.push(pad + "while " + cond + " do");
					lines.push(pad + "begin");
					if (stmt.body.type === "Block") {
						for (const s of stmt.body.body) {
							emitStmt(s, indent + 1, localScope, curParamMap, curParamTypeMap, lines);
						}
					} else {
						emitStmt(stmt.body, indent + 1, localScope, curParamMap, curParamTypeMap, lines);
					}
					if (stmt.update) {
						emitStmt(
							{ type: "ExprStmt", expr: stmt.update },
							indent + 1,
							localScope,
							curParamMap,
							curParamTypeMap,
							lines
						);
					}
					lines.push(pad + "end;");
				}
				break;
			}

			case "ForInOf": {
				const fx = { pre: [], post: [] };
				const vName = sanitizeId(stmt.leftVar);
				const rightCode = emitExpr(stmt.right, localScope, curParamMap, curParamTypeMap, fx);
				if (stmt.op === "in") {
					lines.push(pad + "for " + vName + " := 0 to High(" + rightCode + ") do");
				} else {
					lines.push(pad + "for " + vName + " in " + rightCode + " do");
				}
				if (stmt.body.type === "Block") {
					emitStmt(stmt.body, indent, localScope, curParamMap, curParamTypeMap, lines);
				} else {
					lines.push(pad + "begin");
					emitStmt(stmt.body, indent + 1, localScope, curParamMap, curParamTypeMap, lines);
					lines.push(pad + "end;");
				}
				break;
			}

			case "Switch": {
				const { code: discCode, post } = emitExprWithFx(
					stmt.discriminant,
					localScope,
					curParamMap,
					curParamTypeMap,
					pad,
					lines
				);
				lines.push(pad + "case " + discCode + " of");
				for (const c of stmt.cases) {
					const bodyStmts = c.consequent.filter((s) => s.type !== "Break");
					if (c.test) {
						const fxTest = { pre: [], post: [] };
						lines.push(
							pad +
								"  " +
								emitExpr(c.test, localScope, curParamMap, curParamTypeMap, fxTest) +
								":"
						);
					} else {
						lines.push(pad + "  else");
					}
					lines.push(pad + "  begin");
					for (const s of bodyStmts) {
						emitStmt(s, indent + 2, localScope, curParamMap, curParamTypeMap, lines);
					}
					lines.push(pad + "  end;");
				}
				lines.push(pad + "end;");
				for (const p of post) lines.push(pad + p);
				break;
			}

			case "Try":
				lines.push(pad + "try");
				for (const s of stmt.block.body) {
					emitStmt(s, indent + 1, localScope, curParamMap, curParamTypeMap, lines);
				}
				if (stmt.handler) {
					lines.push(pad + "except");
					for (const s of stmt.handler.body.body) {
						emitStmt(s, indent + 1, localScope, curParamMap, curParamTypeMap, lines);
					}
				}
				if (stmt.finalizer) {
					lines.push(pad + "finally");
					for (const s of stmt.finalizer.body) {
						emitStmt(s, indent + 1, localScope, curParamMap, curParamTypeMap, lines);
					}
				}
				lines.push(pad + "end;");
				break;

			case "Throw": {
				const { code, post } = emitExprWithFx(
					stmt.arg,
					localScope,
					curParamMap,
					curParamTypeMap,
					pad,
					lines
				);
				lines.push(pad + "raise Exception.Create(" + code + ");");
				for (const p of post) lines.push(pad + p);
				break;
			}

			case "Break":
				lines.push(pad + "Break;");
				break;

			case "Continue":
				lines.push(pad + "Continue;");
				break;

			case "Return":
				if (stmt.arg) {
					const { code, post } = emitExprWithFx(
						stmt.arg,
						localScope,
						curParamMap,
						curParamTypeMap,
						pad,
						lines
					);
					lines.push(pad + "Result := " + code + ";");
					for (const p of post) lines.push(pad + p);
				}
				lines.push(pad + "Exit;");
				break;
		}
	};

	const classFields = [
		"FScriptHandlerPrefix: String;",
		"FScriptInitialized: Boolean;"
	];
	const ctorLines = [
		"FScriptHandlerPrefix := AHandlerPrefix;",
		"FScriptInitialized := False;"
	];
	const dtorLines = [];
	// Lines run by Detach: unhook notifications from node fields while the scene is still alive.
	// Destroy must NEVER touch FField_*/FEvent_* (the nodes may already be freed).
	const detachLines = [];
	const flushLines = [];
	const methodDecls = [];
	const methodImpls = [];
	const compiledEntries = [];
	const handlerFnNames = [];
	const registerLines = [];
	const bindParams = ["const AHandlerPrefix: String"];
	const bindAssigns = [];
	const nodeLookupArgs = ["AHandlerPrefix"];
	const fieldBindArgs = [escapePascalString(scriptName + "_")];
	let ctorNeedsLoopIdx = false;
	let flushNeedsLoopIdx = false;

	const emitCopyFromFieldToArray = (pName, fm, targetArr) => {
		ctorNeedsLoopIdx = true;
		if (fm.type === "MFNode") {
			return [
				"  if " + pName + " <> nil then",
				"  begin",
				"    SetLength(" + targetArr + ", " + pName + ".Count);",
				"    for _i := 0 to " + pName + ".Count - 1 do",
				"      " + targetArr + "[_i] := " + pName + "[_i];",
				"  end;"
			];
		}
		return [
			"  if " + pName + " <> nil then",
			"  begin",
			"    SetLength(" + targetArr + ", " + pName + ".Items.Count);",
			"    for _i := 0 to " + pName + ".Items.Count - 1 do",
			"      " + targetArr + "[_i] := " + pName + ".Items[_i];",
			"  end;"
		];
	};

	for (const fm of fieldMap.values()) {
		if (fm.accessType === "inputOnly") continue;
		classFields.push("F" + fm.name + ": " + toPascalDeclType(fm.pascalType) + ";");
		ctorLines.push("F" + fm.name + " := " + fm.defaultVal + ";");

		if (fm.accessType === "initializeOnly" && fm.varName) {
			const pName = "AField_" + fm.name;
			bindParams.push("const " + pName + ": T" + fm.type);
			bindAssigns.push(
				fm.isMF
					? emitCopyFromFieldToArray(pName, fm, "F" + fm.name).join("\n")
					: "  if " + pName + " <> nil then F" + fm.name + " := " + pName + ".Value;"
			);
			fieldBindArgs.push(fm.varName);
			nodeLookupArgs.push(
				"AScriptNode.FieldOrEvent(" + escapePascalString(fm.name) + ") as T" + fm.type
			);
		} else if (fm.accessType === "inputOutput") {
			classFields.push("FField_" + fm.name + ": T" + fm.type + ";");
			classFields.push("FBack_" + fm.name + ": T" + fm.type + ";");
			classFields.push("FDirty_" + fm.name + ": Boolean;");
			ctorLines.push("FField_" + fm.name + " := nil;");
			if (fm.isMF || fm.type === "SFNode") {
				ctorLines.push(
					"FBack_" + fm.name + " := T" + fm.type + ".CreateUndefined(nil, False, " + escapePascalString(fm.name) + ");"
				);
			} else {
				ctorLines.push(
					"FBack_" +
						fm.name +
						" := T" +
						fm.type +
						".Create(nil, False, " +
						escapePascalString(fm.name) +
						", " +
						fm.defaultVal +
						");"
				);
			}
			ctorLines.push("FDirty_" + fm.name + " := False;");
			dtorLines.push("FreeAndNil(FBack_" + fm.name + ");");
			if (fm.type === "MFNode") {
				flushNeedsLoopIdx = true;
				flushLines.push(
					"  if FDirty_" + fm.name + " then",
					"  begin",
					"    FDirty_" + fm.name + " := False;",
					"    if FField_" + fm.name + " <> nil then",
					"    begin",
					"      FField_" + fm.name + ".Clear;",
					"      FBack_" + fm.name + ".Clear;",
					"      for _i := 0 to High(F" + fm.name + ") do",
					"      begin",
					"        FField_" + fm.name + ".Add(F" + fm.name + "[_i]);",
					"        FBack_" + fm.name + ".Add(F" + fm.name + "[_i]);",
					"      end;",
					"      if (FField_" + fm.name + ".ParentNode is TX3DNode) and (TX3DNode(FField_" + fm.name + ".ParentNode).Scene <> nil) then",
					"        FField_" + fm.name + ".EventOut.Send(FBack_" + fm.name + ", TX3DNode(FField_" + fm.name + ".ParentNode).Scene.NextEventTime)",
					"      else",
					"        FField_" + fm.name + ".EventOut.Send(FBack_" + fm.name + ", Time);",
					"    end;",
					"  end;"
				);
			} else if (fm.isMF) {
				flushNeedsLoopIdx = true;
				flushLines.push(
					"  if FDirty_" + fm.name + " then",
					"  begin",
					"    FDirty_" + fm.name + " := False;",
					"    if FField_" + fm.name + " <> nil then",
					"    begin",
					"      FField_" + fm.name + ".Items.Clear;",
					"      FBack_" + fm.name + ".Items.Clear;",
					"      for _i := 0 to High(F" + fm.name + ") do",
					"      begin",
					"        FField_" + fm.name + ".Items.Add(F" + fm.name + "[_i]);",
					"        FBack_" + fm.name + ".Items.Add(F" + fm.name + "[_i]);",
					"      end;",
					"      if (FField_" + fm.name + ".ParentNode is TX3DNode) and (TX3DNode(FField_" + fm.name + ".ParentNode).Scene <> nil) then",
					"        FField_" + fm.name + ".EventOut.Send(FBack_" + fm.name + ", TX3DNode(FField_" + fm.name + ".ParentNode).Scene.NextEventTime)",
					"      else",
					"        FField_" + fm.name + ".EventOut.Send(FBack_" + fm.name + ", Time);",
					"    end;",
					"  end;"
				);
			} else {
				flushLines.push(
					"  if FDirty_" + fm.name + " then",
					"  begin",
					"    FDirty_" + fm.name + " := False;",
					"    if FField_" + fm.name + " <> nil then",
					"    begin",
					"      FField_" + fm.name + ".Value := F" + fm.name + ";",
					"      FBack_" + fm.name + ".Value := F" + fm.name + ";",
					"      if (FField_" + fm.name + ".ParentNode is TX3DNode) and (TX3DNode(FField_" + fm.name + ".ParentNode).Scene <> nil) then",
					"        FField_" + fm.name + ".EventOut.Send(FBack_" + fm.name + ", TX3DNode(FField_" + fm.name + ".ParentNode).Scene.NextEventTime)",
					"      else",
					"        FField_" + fm.name + ".EventOut.Send(FBack_" + fm.name + ", Time);",
					"    end;",
					"  end;"
				);
			}
			const pName = "AField_" + fm.name;
			bindParams.push("const " + pName + ": T" + fm.type);
			bindAssigns.push("  FField_" + fm.name + " := " + pName + ";");
			if (fm.isMF) {
				bindAssigns.push(...emitCopyFromFieldToArray(pName, fm, "F" + fm.name));
			} else {
				bindAssigns.push("  if " + pName + " <> nil then F" + fm.name + " := " + pName + ".Value;");
			}
			fieldBindArgs.push(fm.varName || "nil");
			nodeLookupArgs.push(
				"AScriptNode.FieldOrEvent(" + escapePascalString(fm.name) + ") as T" + fm.type
			);
		} else if (fm.accessType === "outputOnly") {
			classFields.push("FEvent_" + fm.name + ": TX3DEvent;");
			classFields.push("FBack_" + fm.name + ": T" + fm.type + ";");
			classFields.push("FDirty_" + fm.name + ": Boolean;");
			ctorLines.push("FEvent_" + fm.name + " := nil;");
			if (fm.isMF || fm.type === "SFNode") {
				ctorLines.push(
					"FBack_" + fm.name + " := T" + fm.type + ".CreateUndefined(nil, False, " + escapePascalString(fm.name) + ");"
				);
			} else {
				ctorLines.push(
					"FBack_" +
						fm.name +
						" := T" +
						fm.type +
						".Create(nil, False, " +
						escapePascalString(fm.name) +
						", " +
						fm.defaultVal +
						");"
				);
			}
			ctorLines.push("FDirty_" + fm.name + " := False;");
			dtorLines.push("FreeAndNil(FBack_" + fm.name + ");");
			if (fm.type === "MFNode") {
				flushNeedsLoopIdx = true;
				flushLines.push(
					"  if FDirty_" + fm.name + " then",
					"  begin",
					"    FDirty_" + fm.name + " := False;",
					"    if FEvent_" + fm.name + " <> nil then",
					"    begin",
					"      FBack_" + fm.name + ".Clear;",
					"      for _i := 0 to High(F" + fm.name + ") do",
					"        FBack_" + fm.name + ".Add(F" + fm.name + "[_i]);",
					"      FEvent_" + fm.name + ".Send(FBack_" + fm.name + ", Time);",
					"    end;",
					"  end;"
				);
			} else if (fm.isMF) {
				flushNeedsLoopIdx = true;
				flushLines.push(
					"  if FDirty_" + fm.name + " then",
					"  begin",
					"    FDirty_" + fm.name + " := False;",
					"    if FEvent_" + fm.name + " <> nil then",
					"    begin",
					"      FBack_" + fm.name + ".Items.Clear;",
					"      for _i := 0 to High(F" + fm.name + ") do",
					"        FBack_" + fm.name + ".Items.Add(F" + fm.name + "[_i]);",
					"      FEvent_" + fm.name + ".Send(FBack_" + fm.name + ", Time);",
					"    end;",
					"  end;"
				);
			} else {
				flushLines.push(
					"  if FDirty_" + fm.name + " then",
					"  begin",
					"    FDirty_" + fm.name + " := False;",
					"    if FEvent_" + fm.name + " <> nil then",
					"    begin",
					"      FBack_" + fm.name + ".Value := F" + fm.name + ";",
					"      FEvent_" + fm.name + ".Send(FBack_" + fm.name + ", Time);",
					"    end;",
					"  end;"
				);
			}
			const pName = "AEvent_" + fm.name;
			bindParams.push("const " + pName + ": TX3DEvent");
			bindAssigns.push("  FEvent_" + fm.name + " := " + pName + ";");
			fieldBindArgs.push(fm.varName || "nil");
			nodeLookupArgs.push(
				"AScriptNode.AnyEvent(" + escapePascalString(fm.name) + ")"
			);
		}
	}

	const hasInitialize = functions.has("initialize");
	const registeredKeys = new Set();

	const mfFieldHelperMap = {
		MFBool: "FieldToMFBool",
		MFInt32: "FieldToMFInt32",
		MFFloat: "FieldToMFFloat",
		MFDouble: "FieldToMFDouble",
		MFTime: "FieldToMFDouble",
		MFString: "FieldToMFString",
		MFVec2f: "FieldToMFVec2",
		MFVec3f: "FieldToMFVec3",
		MFColor: "FieldToMFVec3",
		MFVec4f: "FieldToMFVec4",
		MFRotation: "FieldToMFVec4",
		MFColorRGBA: "FieldToMFVec4",
		MFNode: "FieldToMFNode"
	};

	for (const [fnName, fn] of functions.entries()) {
		const mName = methodNames.get(fnName);
		const isHandler = isHandlerName(fnName);

		if (isHandler) {
			const locals = new Map();
			const assigned = new Set();
			const uninitVars = new Set();
			const knownNonLocals = new Set([
				...fieldMap.keys(),
				...fn.params,
				"Math",
				"Browser",
				"console"
			]);
			const curParamMap = new Map();
			const curParamTypeMap = new Map();

			const sig = "procedure " + mName + "(Value: TX3DField; const Time: TX3DTime);";
			methodDecls.push(sig);

			const fInfo =
				fieldMap.get(fnName) ||
				(fnName.startsWith("set_") ? fieldMap.get(fnName.slice(4)) : null);
			let mfArgInitLine = null;
			if (fn.params.length > 0 && fInfo) {
				if (!fInfo.isMF) {
					const pType = "T" + fInfo.type;
					curParamMap.set(fn.params[0], "(Value as " + pType + ").Value");
					curParamTypeMap.set(fn.params[0], fInfo.pascalType);
				} else {
					const mfHelper = mfFieldHelperMap[fInfo.type] || "FieldToMFFloat";
					usedSendHelpers.add(mfHelper);
					const argVar = "_arg_" + sanitizeId(fn.params[0]);
					locals.set(argVar, fInfo.pascalType);
					curParamMap.set(fn.params[0], argVar);
					curParamTypeMap.set(fn.params[0], fInfo.pascalType);
					mfArgInitLine = "  " + argVar + " := " + mfHelper + "(Value);";
				}
			}
			if (fn.params.length > 1 && fnName !== "initialize" && fnName !== "shutdown") {
				curParamMap.set(fn.params[1], "Time.Seconds");
				curParamTypeMap.set(fn.params[1], "Double");
			}

			collectFnLocals(fn.body, locals, assigned, knownNonLocals, uninitVars, curParamTypeMap);
			collectFnLocals(fn.body, locals, assigned, knownNonLocals, uninitVars, curParamTypeMap);

			const bodyLines = [];
			if (fnName === "initialize") {
				bodyLines.push("  FScriptInitialized := True;");
			}

			// Fallback direct EventIn notification for inputOutput fields added via AddCustomFieldOrEvent
			if (fInfo && fInfo.accessType === "inputOutput") {
				const lastTimeVar = "FLastTime_" + sanitizeId(fnName);
				const notifName = "OnNotif_" + sanitizeId(fnName);
				classFields.push(lastTimeVar + ": TX3DTime;");
				ctorLines.push(lastTimeVar + " := TX3DTime.Oldest;");
				bindAssigns.push(
					"  if FField_" + fInfo.name + " <> nil then",
					"    FField_" + fInfo.name + ".EventIn.AddNotification({$ifdef FPC}@{$endif}" + notifName + ");"
				);
				detachLines.push(
					"if FField_" + fInfo.name + " <> nil then",
					"begin",
					"  FField_" + fInfo.name + ".EventIn.RemoveNotification({$ifdef FPC}@{$endif}" + notifName + ");",
					"  FField_" + fInfo.name + " := nil;",
					"end;"
				);
				methodDecls.push(
					"procedure " + notifName + "(const Event: TX3DEvent; const Value: TX3DField; const Time: TX3DTime);"
				);
				methodImpls.push(
					"procedure " + className + "." + notifName + "(const Event: TX3DEvent; const Value: TX3DField; const Time: TX3DTime);",
					"begin",
					"  " + mName + "(Value, Time);",
					"end;",
					""
				);
				bodyLines.push(
					"  if (Time.Seconds = " + lastTimeVar + ".Seconds) and (Time.PlusTicks = " + lastTimeVar + ".PlusTicks) then Exit;",
					"  " + lastTimeVar + " := Time;"
				);
			}

			if (mfArgInitLine) {
				bodyLines.push(mfArgInitLine);
			}

			for (const s of fn.body.body) {
				emitStmt(s, 1, locals, curParamMap, curParamTypeMap, bodyLines);
			}
			if (flushLines.length > 0) {
				bodyLines.push("  FlushOutputs(Time);");
			}

			const localVarLines = [];
			for (const [vName, vType] of locals.entries()) {
				if (skippedBrowserVars.has(vName)) continue;
				localVarLines.push("  " + sanitizeId(vName) + ": " + toPascalDeclType(vType) + ";");
			}

			methodImpls.push(
				"procedure " + className + "." + mName + "(Value: TX3DField; const Time: TX3DTime);",
				...(localVarLines.length > 0 ? ["var", ...localVarLines] : []),
				"begin",
				...bodyLines,
				"end;",
				""
			);

			const keysToRegister = [fnName];
			if (fInfo && fInfo.accessType === "inputOutput") {
				const baseName = fInfo.name;
				const setAlias = "set_" + baseName;
				if (!keysToRegister.includes(baseName)) keysToRegister.push(baseName);
				if (!keysToRegister.includes(setAlias)) keysToRegister.push(setAlias);
			}
			for (const regKey of keysToRegister) {
				if (registeredKeys.has(regKey)) continue;
				registeredKeys.add(regKey);
				compiledEntries.push(regKey + "=" + scriptName + "_" + regKey);
				handlerFnNames.push(regKey);
				registerLines.push(
					"  Scene.RegisterCompiledScript(FScriptHandlerPrefix + " +
						escapePascalString(regKey) +
						", {$ifdef FPC}@{$endif}" +
						mName +
						");"
				);
			}
		} else {
			const variants = helperParamVariants.get(fnName) || [[]];
			const retType = helperReturnTypes.get(fnName) || null;
			const overloadSuffix = variants.length > 1 ? " overload;" : "";

			for (const pTypes of variants) {
				const locals = new Map();
				const assigned = new Set();
				const uninitVars = new Set();
				const knownNonLocals = new Set([
					...fieldMap.keys(),
					...fn.params,
					"Math",
					"Browser",
					"console"
				]);
				const curParamMap = new Map();
				const curParamTypeMap = new Map();

				const sigParams = fn.params.map(
					(p, idx) => "const " + sanitizeId(p) + ": " + (pTypes[idx] || "Single")
				);
				fn.params.forEach((p, idx) => {
					curParamTypeMap.set(p, pTypes[idx] || "Single");
				});
				sigParams.push("const Time: TX3DTime");

				const declRetType = retType ? toPascalDeclType(retType) : null;
				const header = declRetType
					? "function " + mName + "(" + sigParams.join("; ") + "): " + declRetType + ";"
					: "procedure " + mName + "(" + sigParams.join("; ") + ");";
				methodDecls.push(header + overloadSuffix);

				collectFnLocals(fn.body, locals, assigned, knownNonLocals, uninitVars, curParamTypeMap);
				collectFnLocals(fn.body, locals, assigned, knownNonLocals, uninitVars, curParamTypeMap);

				const bodyLines = [];
				for (const s of fn.body.body) {
					emitStmt(s, 1, locals, curParamMap, curParamTypeMap, bodyLines);
				}

				const localVarLines = [];
				for (const [vName, vType] of locals.entries()) {
					if (skippedBrowserVars.has(vName)) continue;
					localVarLines.push("  " + sanitizeId(vName) + ": " + toPascalDeclType(vType) + ";");
				}

				const implHeader = declRetType
					? "function " + className + "." + mName + "(" + sigParams.join("; ") + "): " + declRetType + ";"
					: "procedure " + className + "." + mName + "(" + sigParams.join("; ") + ");";

				methodImpls.push(
					implHeader,
					...(localVarLines.length > 0 ? ["var", ...localVarLines] : []),
					"begin",
					...bodyLines,
					"end;",
					""
				);
			}
		}
	}

	const mfFloatArrType = mfDeclTypeMap["array of Single"];
	const mfDoubleArrType = mfDeclTypeMap["array of Double"];
	const mfInt32ArrType = mfDeclTypeMap["array of Int32"];
	const mfBoolArrType = mfDeclTypeMap["array of Boolean"];
	const mfStringArrType = mfDeclTypeMap["array of String"];
	const mfVec2ArrType = mfDeclTypeMap["array of TVector2"];
	const mfVec3ArrType = mfDeclTypeMap["array of TVector3"];
	const mfVec4ArrType = mfDeclTypeMap["array of TVector4"];
	const mfNodeArrType = mfDeclTypeMap["array of TX3DNode"];

	const sendHelperDefs = {
		SendNodeFloat: {
			decl: "procedure SendNodeFloat(const Node: TX3DNode; const EventName: String; const Val: Double; const Time: TX3DTime);",
			impl: [
				"procedure " + className + ".SendNodeFloat(const Node: TX3DNode; const EventName: String; const Val: Double; const Time: TX3DTime);",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"  E: TX3DEvent;",
				"begin",
				"  if Node = nil then Exit;",
				"  FOE := Node.FieldOrEvent(EventName);",
				"  if (FOE is TX3DField) and TX3DField(FOE).Exposed then",
				"    E := TX3DField(FOE).EventIn",
				"  else if FOE is TX3DEvent then",
				"    E := TX3DEvent(FOE)",
				"  else",
				"    Exit;",
				"  if E is TSFFloatEvent then",
				"    TSFFloatEvent(E).Send(Val, Time)",
				"  else if E is TSFDoubleEvent then",
				"    TSFDoubleEvent(E).Send(Val, Time)",
				"  else if E is TSFTimeEvent then",
				"    TSFTimeEvent(E).Send(Val, Time)",
				"  else if E is TSFInt32Event then",
				"    TSFInt32Event(E).Send(Round(Val), Time)",
				"  else if E is TSFBoolEvent then",
				"    TSFBoolEvent(E).Send(Val <> 0, Time);",
				"end;",
				""
			]
		},
		SendNodeBool: {
			decl: "procedure SendNodeBool(const Node: TX3DNode; const EventName: String; const Val: Boolean; const Time: TX3DTime);",
			impl: [
				"procedure " + className + ".SendNodeBool(const Node: TX3DNode; const EventName: String; const Val: Boolean; const Time: TX3DTime);",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"  E: TX3DEvent;",
				"begin",
				"  if Node = nil then Exit;",
				"  FOE := Node.FieldOrEvent(EventName);",
				"  if (FOE is TX3DField) and TX3DField(FOE).Exposed then",
				"    E := TX3DField(FOE).EventIn",
				"  else if FOE is TX3DEvent then",
				"    E := TX3DEvent(FOE)",
				"  else",
				"    Exit;",
				"  if E is TSFBoolEvent then",
				"    TSFBoolEvent(E).Send(Val, Time);",
				"end;",
				""
			]
		},
		SendNodeString: {
			decl: "procedure SendNodeString(const Node: TX3DNode; const EventName: String; const Val: String; const Time: TX3DTime);",
			impl: [
				"procedure " + className + ".SendNodeString(const Node: TX3DNode; const EventName: String; const Val: String; const Time: TX3DTime);",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"  E: TX3DEvent;",
				"begin",
				"  if Node = nil then Exit;",
				"  FOE := Node.FieldOrEvent(EventName);",
				"  if (FOE is TX3DField) and TX3DField(FOE).Exposed then",
				"    E := TX3DField(FOE).EventIn",
				"  else if FOE is TX3DEvent then",
				"    E := TX3DEvent(FOE)",
				"  else",
				"    Exit;",
				"  if E is TSFStringEvent then",
				"    TSFStringEvent(E).Send(Val, Time);",
				"end;",
				""
			]
		},
		SendNodeVec2: {
			decl: "procedure SendNodeVec2(const Node: TX3DNode; const EventName: String; const Val: TVector2; const Time: TX3DTime);",
			impl: [
				"procedure " + className + ".SendNodeVec2(const Node: TX3DNode; const EventName: String; const Val: TVector2; const Time: TX3DTime);",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"  E: TX3DEvent;",
				"begin",
				"  if Node = nil then Exit;",
				"  FOE := Node.FieldOrEvent(EventName);",
				"  if (FOE is TX3DField) and TX3DField(FOE).Exposed then",
				"    E := TX3DField(FOE).EventIn",
				"  else if FOE is TX3DEvent then",
				"    E := TX3DEvent(FOE)",
				"  else",
				"    Exit;",
				"  if E is TSFVec2fEvent then",
				"    TSFVec2fEvent(E).Send(Val, Time);",
				"end;",
				""
			]
		},
		SendNodeVec3: {
			decl: "procedure SendNodeVec3(const Node: TX3DNode; const EventName: String; const Val: TVector3; const Time: TX3DTime);",
			impl: [
				"procedure " + className + ".SendNodeVec3(const Node: TX3DNode; const EventName: String; const Val: TVector3; const Time: TX3DTime);",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"  E: TX3DEvent;",
				"begin",
				"  if Node = nil then Exit;",
				"  FOE := Node.FieldOrEvent(EventName);",
				"  if (FOE is TX3DField) and TX3DField(FOE).Exposed then",
				"    E := TX3DField(FOE).EventIn",
				"  else if FOE is TX3DEvent then",
				"    E := TX3DEvent(FOE)",
				"  else",
				"    Exit;",
				"  if E is TSFVec3fEvent then",
				"    TSFVec3fEvent(E).Send(Val, Time)",
				"  else if E is TSFColorEvent then",
				"    TSFColorEvent(E).Send(Val, Time);",
				"end;",
				""
			]
		},
		SendNodeVec4: {
			decl: "procedure SendNodeVec4(const Node: TX3DNode; const EventName: String; const Val: TVector4; const Time: TX3DTime);",
			impl: [
				"procedure " + className + ".SendNodeVec4(const Node: TX3DNode; const EventName: String; const Val: TVector4; const Time: TX3DTime);",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"  E: TX3DEvent;",
				"begin",
				"  if Node = nil then Exit;",
				"  FOE := Node.FieldOrEvent(EventName);",
				"  if (FOE is TX3DField) and TX3DField(FOE).Exposed then",
				"    E := TX3DField(FOE).EventIn",
				"  else if FOE is TX3DEvent then",
				"    E := TX3DEvent(FOE)",
				"  else",
				"    Exit;",
				"  if E is TSFVec4fEvent then",
				"    TSFVec4fEvent(E).Send(Val, Time)",
				"  else if E is TSFRotationEvent then",
				"    TSFRotationEvent(E).Send(Val, Time)",
				"  else if E is TSFColorRGBAEvent then",
				"    TSFColorRGBAEvent(E).Send(Val, Time);",
				"end;",
				""
			]
		},
		SendNodeSFNode: {
			decl: "procedure SendNodeSFNode(const Node: TX3DNode; const EventName: String; const Val: TX3DNode; const Time: TX3DTime);",
			impl: [
				"procedure " + className + ".SendNodeSFNode(const Node: TX3DNode; const EventName: String; const Val: TX3DNode; const Time: TX3DTime);",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"  E: TX3DEvent;",
				"begin",
				"  if Node = nil then Exit;",
				"  FOE := Node.FieldOrEvent(EventName);",
				"  if (FOE is TX3DField) and TX3DField(FOE).Exposed then",
				"    E := TX3DField(FOE).EventIn",
				"  else if FOE is TX3DEvent then",
				"    E := TX3DEvent(FOE)",
				"  else",
				"    Exit;",
				"  if E is TSFNodeEvent then",
				"    TSFNodeEvent(E).Send(Val, Time);",
				"end;",
				""
			]
		},
		SendNodeMFFloat: {
			decl: "procedure SendNodeMFFloat(const Node: TX3DNode; const EventName: String; const Val: array of Single; const Time: TX3DTime);",
			impl: [
				"procedure " + className + ".SendNodeMFFloat(const Node: TX3DNode; const EventName: String; const Val: array of Single; const Time: TX3DTime);",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"  E: TX3DEvent;",
				"  Tmp: TMFFloat;",
				"  _i: Integer;",
				"begin",
				"  if Node = nil then Exit;",
				"  FOE := Node.FieldOrEvent(EventName);",
				"  if (FOE is TX3DField) and TX3DField(FOE).Exposed then",
				"    E := TX3DField(FOE).EventIn",
				"  else if FOE is TX3DEvent then",
				"    E := TX3DEvent(FOE)",
				"  else",
				"  begin",
				"    if FOE is TMFFloat then",
				"    begin",
				"      TMFFloat(FOE).Items.Clear;",
				"      for _i := 0 to High(Val) do TMFFloat(FOE).Items.Add(Val[_i]);",
				"      TMFFloat(FOE).Changed;",
				"    end;",
				"    Exit;",
				"  end;",
				"  Tmp := TMFFloat.CreateUndefined(nil, False, EventName);",
				"  try",
				"    for _i := 0 to High(Val) do Tmp.Items.Add(Val[_i]);",
				"    E.Send(Tmp, Time);",
				"  finally",
				"    FreeAndNil(Tmp);",
				"  end;",
				"end;",
				""
			]
		},
		SendNodeMFInt32: {
			decl: "procedure SendNodeMFInt32(const Node: TX3DNode; const EventName: String; const Val: array of Int32; const Time: TX3DTime);",
			impl: [
				"procedure " + className + ".SendNodeMFInt32(const Node: TX3DNode; const EventName: String; const Val: array of Int32; const Time: TX3DTime);",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"  E: TX3DEvent;",
				"  Tmp: TMFInt32;",
				"  _i: Integer;",
				"begin",
				"  if Node = nil then Exit;",
				"  FOE := Node.FieldOrEvent(EventName);",
				"  if (FOE is TX3DField) and TX3DField(FOE).Exposed then",
				"    E := TX3DField(FOE).EventIn",
				"  else if FOE is TX3DEvent then",
				"    E := TX3DEvent(FOE)",
				"  else",
				"  begin",
				"    if FOE is TMFInt32 then",
				"    begin",
				"      TMFInt32(FOE).Items.Clear;",
				"      for _i := 0 to High(Val) do TMFInt32(FOE).Items.Add(Val[_i]);",
				"      TMFInt32(FOE).Changed;",
				"    end;",
				"    Exit;",
				"  end;",
				"  Tmp := TMFInt32.CreateUndefined(nil, False, EventName);",
				"  try",
				"    for _i := 0 to High(Val) do Tmp.Items.Add(Val[_i]);",
				"    E.Send(Tmp, Time);",
				"  finally",
				"    FreeAndNil(Tmp);",
				"  end;",
				"end;",
				""
			]
		},
		SendNodeMFBool: {
			decl: "procedure SendNodeMFBool(const Node: TX3DNode; const EventName: String; const Val: array of Boolean; const Time: TX3DTime);",
			impl: [
				"procedure " + className + ".SendNodeMFBool(const Node: TX3DNode; const EventName: String; const Val: array of Boolean; const Time: TX3DTime);",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"  E: TX3DEvent;",
				"  Tmp: TMFBool;",
				"  _i: Integer;",
				"begin",
				"  if Node = nil then Exit;",
				"  FOE := Node.FieldOrEvent(EventName);",
				"  if (FOE is TX3DField) and TX3DField(FOE).Exposed then",
				"    E := TX3DField(FOE).EventIn",
				"  else if FOE is TX3DEvent then",
				"    E := TX3DEvent(FOE)",
				"  else",
				"  begin",
				"    if FOE is TMFBool then",
				"    begin",
				"      TMFBool(FOE).Items.Clear;",
				"      for _i := 0 to High(Val) do TMFBool(FOE).Items.Add(Val[_i]);",
				"      TMFBool(FOE).Changed;",
				"    end;",
				"    Exit;",
				"  end;",
				"  Tmp := TMFBool.CreateUndefined(nil, False, EventName);",
				"  try",
				"    for _i := 0 to High(Val) do Tmp.Items.Add(Val[_i]);",
				"    E.Send(Tmp, Time);",
				"  finally",
				"    FreeAndNil(Tmp);",
				"  end;",
				"end;",
				""
			]
		},
		SendNodeMFString: {
			decl: "procedure SendNodeMFString(const Node: TX3DNode; const EventName: String; const Val: array of String; const Time: TX3DTime);",
			impl: [
				"procedure " + className + ".SendNodeMFString(const Node: TX3DNode; const EventName: String; const Val: array of String; const Time: TX3DTime);",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"  E: TX3DEvent;",
				"  Tmp: TMFString;",
				"  _i: Integer;",
				"begin",
				"  if Node = nil then Exit;",
				"  FOE := Node.FieldOrEvent(EventName);",
				"  if (FOE is TX3DField) and TX3DField(FOE).Exposed then",
				"    E := TX3DField(FOE).EventIn",
				"  else if FOE is TX3DEvent then",
				"    E := TX3DEvent(FOE)",
				"  else",
				"  begin",
				"    if FOE is TMFString then",
				"    begin",
				"      TMFString(FOE).Items.Clear;",
				"      for _i := 0 to High(Val) do TMFString(FOE).Items.Add(Val[_i]);",
				"      TMFString(FOE).Changed;",
				"    end;",
				"    Exit;",
				"  end;",
				"  Tmp := TMFString.CreateUndefined(nil, False, EventName);",
				"  try",
				"    for _i := 0 to High(Val) do Tmp.Items.Add(Val[_i]);",
				"    E.Send(Tmp, Time);",
				"  finally",
				"    FreeAndNil(Tmp);",
				"  end;",
				"end;",
				""
			]
		},
		SendNodeMFVec2: {
			decl: "procedure SendNodeMFVec2(const Node: TX3DNode; const EventName: String; const Val: array of TVector2; const Time: TX3DTime);",
			impl: [
				"procedure " + className + ".SendNodeMFVec2(const Node: TX3DNode; const EventName: String; const Val: array of TVector2; const Time: TX3DTime);",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"  E: TX3DEvent;",
				"  Tmp: TMFVec2f;",
				"  _i: Integer;",
				"begin",
				"  if Node = nil then Exit;",
				"  FOE := Node.FieldOrEvent(EventName);",
				"  if (FOE is TX3DField) and TX3DField(FOE).Exposed then",
				"    E := TX3DField(FOE).EventIn",
				"  else if FOE is TX3DEvent then",
				"    E := TX3DEvent(FOE)",
				"  else",
				"  begin",
				"    if FOE is TMFVec2f then",
				"    begin",
				"      TMFVec2f(FOE).Items.Clear;",
				"      for _i := 0 to High(Val) do TMFVec2f(FOE).Items.Add(Val[_i]);",
				"      TMFVec2f(FOE).Changed;",
				"    end;",
				"    Exit;",
				"  end;",
				"  Tmp := TMFVec2f.CreateUndefined(nil, False, EventName);",
				"  try",
				"    for _i := 0 to High(Val) do Tmp.Items.Add(Val[_i]);",
				"    E.Send(Tmp, Time);",
				"  finally",
				"    FreeAndNil(Tmp);",
				"  end;",
				"end;",
				""
			]
		},
		SendNodeMFVec3: {
			decl: "procedure SendNodeMFVec3(const Node: TX3DNode; const EventName: String; const Val: array of TVector3; const Time: TX3DTime);",
			impl: [
				"procedure " + className + ".SendNodeMFVec3(const Node: TX3DNode; const EventName: String; const Val: array of TVector3; const Time: TX3DTime);",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"  E: TX3DEvent;",
				"  Tmp: TMFVec3f;",
				"  _i: Integer;",
				"begin",
				"  if Node = nil then Exit;",
				"  FOE := Node.FieldOrEvent(EventName);",
				"  if (FOE is TX3DField) and TX3DField(FOE).Exposed then",
				"    E := TX3DField(FOE).EventIn",
				"  else if FOE is TX3DEvent then",
				"    E := TX3DEvent(FOE)",
				"  else",
				"  begin",
				"    if FOE is TMFVec3f then",
				"    begin",
				"      TMFVec3f(FOE).Items.Clear;",
				"      for _i := 0 to High(Val) do TMFVec3f(FOE).Items.Add(Val[_i]);",
				"      TMFVec3f(FOE).Changed;",
				"    end;",
				"    Exit;",
				"  end;",
				"  Tmp := TMFVec3f.CreateUndefined(nil, False, EventName);",
				"  try",
				"    for _i := 0 to High(Val) do Tmp.Items.Add(Val[_i]);",
				"    E.Send(Tmp, Time);",
				"  finally",
				"    FreeAndNil(Tmp);",
				"  end;",
				"end;",
				""
			]
		},
		SendNodeMFVec4: {
			decl: "procedure SendNodeMFVec4(const Node: TX3DNode; const EventName: String; const Val: array of TVector4; const Time: TX3DTime);",
			impl: [
				"procedure " + className + ".SendNodeMFVec4(const Node: TX3DNode; const EventName: String; const Val: array of TVector4; const Time: TX3DTime);",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"  E: TX3DEvent;",
				"  Tmp: TMFVec4f;",
				"  _i: Integer;",
				"begin",
				"  if Node = nil then Exit;",
				"  FOE := Node.FieldOrEvent(EventName);",
				"  if (FOE is TX3DField) and TX3DField(FOE).Exposed then",
				"    E := TX3DField(FOE).EventIn",
				"  else if FOE is TX3DEvent then",
				"    E := TX3DEvent(FOE)",
				"  else",
				"  begin",
				"    if FOE is TMFVec4f then",
				"    begin",
				"      TMFVec4f(FOE).Items.Clear;",
				"      for _i := 0 to High(Val) do TMFVec4f(FOE).Items.Add(Val[_i]);",
				"      TMFVec4f(FOE).Changed;",
				"    end;",
				"    Exit;",
				"  end;",
				"  Tmp := TMFVec4f.CreateUndefined(nil, False, EventName);",
				"  try",
				"    for _i := 0 to High(Val) do Tmp.Items.Add(Val[_i]);",
				"    E.Send(Tmp, Time);",
				"  finally",
				"    FreeAndNil(Tmp);",
				"  end;",
				"end;",
				""
			]
		},
		SetNodeMFFloatItem: {
			decl: "procedure SetNodeMFFloatItem(const Node: TX3DNode; const FieldName: String; const Idx: Integer; const Val: Single; const Time: TX3DTime);",
			impl: [
				"procedure " + className + ".SetNodeMFFloatItem(const Node: TX3DNode; const FieldName: String; const Idx: Integer; const Val: Single; const Time: TX3DTime);",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"  F, Tmp: TMFFloat;",
				"  _i: Integer;",
				"begin",
				"  if (Node = nil) or (Idx < 0) then Exit;",
				"  FOE := Node.FieldOrEvent(FieldName);",
				"  if not (FOE is TMFFloat) then Exit;",
				"  F := TMFFloat(FOE);",
				"  while F.Items.Count <= Idx do F.Items.Add(0);",
				"  F.Items[Idx] := Val;",
				"  if F.Exposed and (Node.Scene <> nil) then",
				"  begin",
				"    Tmp := TMFFloat.CreateUndefined(nil, False, FieldName);",
				"    try",
				"      for _i := 0 to F.Items.Count - 1 do Tmp.Items.Add(F.Items[_i]);",
				"      F.EventIn.Send(Tmp, Time);",
				"    finally",
				"      FreeAndNil(Tmp);",
				"    end;",
				"  end",
				"  else",
				"    F.Changed;",
				"end;",
				""
			]
		},
		SetNodeMFInt32Item: {
			decl: "procedure SetNodeMFInt32Item(const Node: TX3DNode; const FieldName: String; const Idx: Integer; const Val: Int32; const Time: TX3DTime);",
			impl: [
				"procedure " + className + ".SetNodeMFInt32Item(const Node: TX3DNode; const FieldName: String; const Idx: Integer; const Val: Int32; const Time: TX3DTime);",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"  F, Tmp: TMFInt32;",
				"  _i: Integer;",
				"begin",
				"  if (Node = nil) or (Idx < 0) then Exit;",
				"  FOE := Node.FieldOrEvent(FieldName);",
				"  if not (FOE is TMFInt32) then Exit;",
				"  F := TMFInt32(FOE);",
				"  while F.Items.Count <= Idx do F.Items.Add(0);",
				"  F.Items[Idx] := Val;",
				"  if F.Exposed and (Node.Scene <> nil) then",
				"  begin",
				"    Tmp := TMFInt32.CreateUndefined(nil, False, FieldName);",
				"    try",
				"      for _i := 0 to F.Items.Count - 1 do Tmp.Items.Add(F.Items[_i]);",
				"      F.EventIn.Send(Tmp, Time);",
				"    finally",
				"      FreeAndNil(Tmp);",
				"    end;",
				"  end",
				"  else",
				"    F.Changed;",
				"end;",
				""
			]
		},
		SetNodeMFBoolItem: {
			decl: "procedure SetNodeMFBoolItem(const Node: TX3DNode; const FieldName: String; const Idx: Integer; const Val: Boolean; const Time: TX3DTime);",
			impl: [
				"procedure " + className + ".SetNodeMFBoolItem(const Node: TX3DNode; const FieldName: String; const Idx: Integer; const Val: Boolean; const Time: TX3DTime);",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"  F, Tmp: TMFBool;",
				"  _i: Integer;",
				"begin",
				"  if (Node = nil) or (Idx < 0) then Exit;",
				"  FOE := Node.FieldOrEvent(FieldName);",
				"  if not (FOE is TMFBool) then Exit;",
				"  F := TMFBool(FOE);",
				"  while F.Items.Count <= Idx do F.Items.Add(False);",
				"  F.Items[Idx] := Val;",
				"  if F.Exposed and (Node.Scene <> nil) then",
				"  begin",
				"    Tmp := TMFBool.CreateUndefined(nil, False, FieldName);",
				"    try",
				"      for _i := 0 to F.Items.Count - 1 do Tmp.Items.Add(F.Items[_i]);",
				"      F.EventIn.Send(Tmp, Time);",
				"    finally",
				"      FreeAndNil(Tmp);",
				"    end;",
				"  end",
				"  else",
				"    F.Changed;",
				"end;",
				""
			]
		},
		SetNodeMFStringItem: {
			decl: "procedure SetNodeMFStringItem(const Node: TX3DNode; const FieldName: String; const Idx: Integer; const Val: String; const Time: TX3DTime);",
			impl: [
				"procedure " + className + ".SetNodeMFStringItem(const Node: TX3DNode; const FieldName: String; const Idx: Integer; const Val: String; const Time: TX3DTime);",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"  F, Tmp: TMFString;",
				"  _i: Integer;",
				"begin",
				"  if (Node = nil) or (Idx < 0) then Exit;",
				"  FOE := Node.FieldOrEvent(FieldName);",
				"  if not (FOE is TMFString) then Exit;",
				"  F := TMFString(FOE);",
				"  while F.Items.Count <= Idx do F.Items.Add('');",
				"  F.Items[Idx] := Val;",
				"  if F.Exposed and (Node.Scene <> nil) then",
				"  begin",
				"    Tmp := TMFString.CreateUndefined(nil, False, FieldName);",
				"    try",
				"      for _i := 0 to F.Items.Count - 1 do Tmp.Items.Add(F.Items[_i]);",
				"      F.EventIn.Send(Tmp, Time);",
				"    finally",
				"      FreeAndNil(Tmp);",
				"    end;",
				"  end",
				"  else",
				"    F.Changed;",
				"end;",
				""
			]
		},
		SetNodeMFVec2Item: {
			decl: "procedure SetNodeMFVec2Item(const Node: TX3DNode; const FieldName: String; const Idx: Integer; const Val: TVector2; const Time: TX3DTime);",
			impl: [
				"procedure " + className + ".SetNodeMFVec2Item(const Node: TX3DNode; const FieldName: String; const Idx: Integer; const Val: TVector2; const Time: TX3DTime);",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"  F, Tmp: TMFVec2f;",
				"  _i: Integer;",
				"begin",
				"  if (Node = nil) or (Idx < 0) then Exit;",
				"  FOE := Node.FieldOrEvent(FieldName);",
				"  if not (FOE is TMFVec2f) then Exit;",
				"  F := TMFVec2f(FOE);",
				"  while F.Items.Count <= Idx do F.Items.Add(Vector2(0, 0));",
				"  F.Items[Idx] := Val;",
				"  if F.Exposed and (Node.Scene <> nil) then",
				"  begin",
				"    Tmp := TMFVec2f.CreateUndefined(nil, False, FieldName);",
				"    try",
				"      for _i := 0 to F.Items.Count - 1 do Tmp.Items.Add(F.Items[_i]);",
				"      F.EventIn.Send(Tmp, Time);",
				"    finally",
				"      FreeAndNil(Tmp);",
				"    end;",
				"  end",
				"  else",
				"    F.Changed;",
				"end;",
				""
			]
		},
		SetNodeMFVec3Item: {
			decl: "procedure SetNodeMFVec3Item(const Node: TX3DNode; const FieldName: String; const Idx: Integer; const Val: TVector3; const Time: TX3DTime);",
			impl: [
				"procedure " + className + ".SetNodeMFVec3Item(const Node: TX3DNode; const FieldName: String; const Idx: Integer; const Val: TVector3; const Time: TX3DTime);",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"  F, Tmp: TMFVec3f;",
				"  _i: Integer;",
				"begin",
				"  if (Node = nil) or (Idx < 0) then Exit;",
				"  FOE := Node.FieldOrEvent(FieldName);",
				"  if not (FOE is TMFVec3f) then Exit;",
				"  F := TMFVec3f(FOE);",
				"  while F.Items.Count <= Idx do F.Items.Add(Vector3(0, 0, 0));",
				"  F.Items[Idx] := Val;",
				"  if F.Exposed and (Node.Scene <> nil) then",
				"  begin",
				"    Tmp := TMFVec3f.CreateUndefined(nil, False, FieldName);",
				"    try",
				"      for _i := 0 to F.Items.Count - 1 do Tmp.Items.Add(F.Items[_i]);",
				"      F.EventIn.Send(Tmp, Time);",
				"    finally",
				"      FreeAndNil(Tmp);",
				"    end;",
				"  end",
				"  else",
				"    F.Changed;",
				"end;",
				""
			]
		},
		SetNodeMFVec4Item: {
			decl: "procedure SetNodeMFVec4Item(const Node: TX3DNode; const FieldName: String; const Idx: Integer; const Val: TVector4; const Time: TX3DTime);",
			impl: [
				"procedure " + className + ".SetNodeMFVec4Item(const Node: TX3DNode; const FieldName: String; const Idx: Integer; const Val: TVector4; const Time: TX3DTime);",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"  F, Tmp: TMFVec4f;",
				"  _i: Integer;",
				"begin",
				"  if (Node = nil) or (Idx < 0) then Exit;",
				"  FOE := Node.FieldOrEvent(FieldName);",
				"  if not (FOE is TMFVec4f) then Exit;",
				"  F := TMFVec4f(FOE);",
				"  while F.Items.Count <= Idx do F.Items.Add(Vector4(0, 0, 1, 0));",
				"  F.Items[Idx] := Val;",
				"  if F.Exposed and (Node.Scene <> nil) then",
				"  begin",
				"    Tmp := TMFVec4f.CreateUndefined(nil, False, FieldName);",
				"    try",
				"      for _i := 0 to F.Items.Count - 1 do Tmp.Items.Add(F.Items[_i]);",
				"      F.EventIn.Send(Tmp, Time);",
				"    finally",
				"      FreeAndNil(Tmp);",
				"    end;",
				"  end",
				"  else",
				"    F.Changed;",
				"end;",
				""
			]
		},
		GetNodeFieldCount: {
			decl: "function GetNodeFieldCount(const Node: TX3DNode; const FieldName: String): Integer;",
			impl: [
				"function " + className + ".GetNodeFieldCount(const Node: TX3DNode; const FieldName: String): Integer;",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"begin",
				"  Result := 0;",
				"  if Node = nil then Exit;",
				"  FOE := Node.FieldOrEvent(FieldName);",
				"  if FOE is TMFNode then Result := TMFNode(FOE).Count",
				"  else if FOE is TMFFloat then Result := TMFFloat(FOE).Items.Count",
				"  else if FOE is TMFDouble then Result := TMFDouble(FOE).Items.Count",
				"  else if FOE is TMFInt32 then Result := TMFInt32(FOE).Items.Count",
				"  else if FOE is TMFBool then Result := TMFBool(FOE).Items.Count",
				"  else if FOE is TMFString then Result := TMFString(FOE).Items.Count",
				"  else if FOE is TMFVec2f then Result := TMFVec2f(FOE).Items.Count",
				"  else if FOE is TMFVec3f then Result := TMFVec3f(FOE).Items.Count",
				"  else if FOE is TMFVec4f then Result := TMFVec4f(FOE).Items.Count;",
				"end;",
				""
			]
		},
		GetNodeFloat: {
			decl: "function GetNodeFloat(const Node: TX3DNode; const FieldName: String): Single;",
			impl: [
				"function " + className + ".GetNodeFloat(const Node: TX3DNode; const FieldName: String): Single;",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"begin",
				"  Result := 0.0;",
				"  if Node = nil then Exit;",
				"  FOE := Node.FieldOrEvent(FieldName);",
				"  if FOE is TSFFloat then Result := TSFFloat(FOE).Value",
				"  else if FOE is TSFDouble then Result := TSFDouble(FOE).Value",
				"  else if FOE is TSFTime then Result := TSFTime(FOE).Value;",
				"end;",
				""
			]
		},
		GetNodeBool: {
			decl: "function GetNodeBool(const Node: TX3DNode; const FieldName: String): Boolean;",
			impl: [
				"function " + className + ".GetNodeBool(const Node: TX3DNode; const FieldName: String): Boolean;",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"begin",
				"  Result := False;",
				"  if Node = nil then Exit;",
				"  FOE := Node.FieldOrEvent(FieldName);",
				"  if FOE is TSFBool then Result := TSFBool(FOE).Value;",
				"end;",
				""
			]
		},
		GetNodeInt: {
			decl: "function GetNodeInt(const Node: TX3DNode; const FieldName: String): Int32;",
			impl: [
				"function " + className + ".GetNodeInt(const Node: TX3DNode; const FieldName: String): Int32;",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"begin",
				"  Result := 0;",
				"  if Node = nil then Exit;",
				"  FOE := Node.FieldOrEvent(FieldName);",
				"  if FOE is TSFInt32 then Result := TSFInt32(FOE).Value;",
				"end;",
				""
			]
		},
		GetNodeString: {
			decl: "function GetNodeString(const Node: TX3DNode; const FieldName: String): String;",
			impl: [
				"function " + className + ".GetNodeString(const Node: TX3DNode; const FieldName: String): String;",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"begin",
				"  Result := '';",
				"  if Node = nil then Exit;",
				"  FOE := Node.FieldOrEvent(FieldName);",
				"  if FOE is TSFString then Result := TSFString(FOE).Value;",
				"end;",
				""
			]
		},
		GetNodeVec2: {
			decl: "function GetNodeVec2(const Node: TX3DNode; const FieldName: String): TVector2;",
			impl: [
				"function " + className + ".GetNodeVec2(const Node: TX3DNode; const FieldName: String): TVector2;",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"begin",
				"  Result := Vector2(0, 0);",
				"  if Node = nil then Exit;",
				"  FOE := Node.FieldOrEvent(FieldName);",
				"  if FOE is TSFVec2f then Result := TSFVec2f(FOE).Value;",
				"end;",
				""
			]
		},
		GetNodeVec3: {
			decl: "function GetNodeVec3(const Node: TX3DNode; const FieldName: String): TVector3;",
			impl: [
				"function " + className + ".GetNodeVec3(const Node: TX3DNode; const FieldName: String): TVector3;",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"begin",
				"  Result := Vector3(0, 0, 0);",
				"  if Node = nil then Exit;",
				"  FOE := Node.FieldOrEvent(FieldName);",
				"  if FOE is TSFVec3f then Result := TSFVec3f(FOE).Value",
				"  else if FOE is TSFColor then Result := TSFColor(FOE).Value;",
				"end;",
				""
			]
		},
		GetNodeVec4: {
			decl: "function GetNodeVec4(const Node: TX3DNode; const FieldName: String): TVector4;",
			impl: [
				"function " + className + ".GetNodeVec4(const Node: TX3DNode; const FieldName: String): TVector4;",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"begin",
				"  Result := Vector4(0, 0, 1, 0);",
				"  if Node = nil then Exit;",
				"  FOE := Node.FieldOrEvent(FieldName);",
				"  if FOE is TSFVec4f then Result := TSFVec4f(FOE).Value",
				"  else if FOE is TSFRotation then Result := TSFRotation(FOE).Value",
				"  else if FOE is TSFColorRGBA then Result := TSFColorRGBA(FOE).Value;",
				"end;",
				""
			]
		},
		GetNodeSFNode: {
			decl: "function GetNodeSFNode(const Node: TX3DNode; const FieldName: String): TX3DNode;",
			impl: [
				"function " + className + ".GetNodeSFNode(const Node: TX3DNode; const FieldName: String): TX3DNode;",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"begin",
				"  Result := nil;",
				"  if Node = nil then Exit;",
				"  FOE := Node.FieldOrEvent(FieldName);",
				"  if FOE is TSFNode then",
				"    Result := TSFNode(FOE).Value;",
				"end;",
				""
			]
		},
		GetNodeMFFloat: {
			usesArrayType: "array of Single",
			decl: "function GetNodeMFFloat(const Node: TX3DNode; const FieldName: String): " + mfFloatArrType + ";",
			impl: [
				"function " + className + ".GetNodeMFFloat(const Node: TX3DNode; const FieldName: String): " + mfFloatArrType + ";",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"  _i: Integer;",
				"begin",
				"  Result := nil;",
				"  if Node = nil then Exit;",
				"  FOE := Node.FieldOrEvent(FieldName);",
				"  if FOE is TMFFloat then",
				"  begin",
				"    SetLength(Result, TMFFloat(FOE).Items.Count);",
				"    for _i := 0 to TMFFloat(FOE).Items.Count - 1 do",
				"      Result[_i] := TMFFloat(FOE).Items[_i];",
				"  end;",
				"end;",
				""
			]
		},
		GetNodeMFDouble: {
			usesArrayType: "array of Double",
			decl: "function GetNodeMFDouble(const Node: TX3DNode; const FieldName: String): " + mfDoubleArrType + ";",
			impl: [
				"function " + className + ".GetNodeMFDouble(const Node: TX3DNode; const FieldName: String): " + mfDoubleArrType + ";",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"  _i: Integer;",
				"begin",
				"  Result := nil;",
				"  if Node = nil then Exit;",
				"  FOE := Node.FieldOrEvent(FieldName);",
				"  if FOE is TMFDouble then",
				"  begin",
				"    SetLength(Result, TMFDouble(FOE).Items.Count);",
				"    for _i := 0 to TMFDouble(FOE).Items.Count - 1 do",
				"      Result[_i] := TMFDouble(FOE).Items[_i];",
				"  end;",
				"end;",
				""
			]
		},
		GetNodeMFInt32: {
			usesArrayType: "array of Int32",
			decl: "function GetNodeMFInt32(const Node: TX3DNode; const FieldName: String): " + mfInt32ArrType + ";",
			impl: [
				"function " + className + ".GetNodeMFInt32(const Node: TX3DNode; const FieldName: String): " + mfInt32ArrType + ";",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"  _i: Integer;",
				"begin",
				"  Result := nil;",
				"  if Node = nil then Exit;",
				"  FOE := Node.FieldOrEvent(FieldName);",
				"  if FOE is TMFInt32 then",
				"  begin",
				"    SetLength(Result, TMFInt32(FOE).Items.Count);",
				"    for _i := 0 to TMFInt32(FOE).Items.Count - 1 do",
				"      Result[_i] := TMFInt32(FOE).Items[_i];",
				"  end;",
				"end;",
				""
			]
		},
		GetNodeMFBool: {
			usesArrayType: "array of Boolean",
			decl: "function GetNodeMFBool(const Node: TX3DNode; const FieldName: String): " + mfBoolArrType + ";",
			impl: [
				"function " + className + ".GetNodeMFBool(const Node: TX3DNode; const FieldName: String): " + mfBoolArrType + ";",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"  _i: Integer;",
				"begin",
				"  Result := nil;",
				"  if Node = nil then Exit;",
				"  FOE := Node.FieldOrEvent(FieldName);",
				"  if FOE is TMFBool then",
				"  begin",
				"    SetLength(Result, TMFBool(FOE).Items.Count);",
				"    for _i := 0 to TMFBool(FOE).Items.Count - 1 do",
				"      Result[_i] := TMFBool(FOE).Items[_i];",
				"  end;",
				"end;",
				""
			]
		},
		GetNodeMFString: {
			usesArrayType: "array of String",
			decl: "function GetNodeMFString(const Node: TX3DNode; const FieldName: String): " + mfStringArrType + ";",
			impl: [
				"function " + className + ".GetNodeMFString(const Node: TX3DNode; const FieldName: String): " + mfStringArrType + ";",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"  _i: Integer;",
				"begin",
				"  Result := nil;",
				"  if Node = nil then Exit;",
				"  FOE := Node.FieldOrEvent(FieldName);",
				"  if FOE is TMFString then",
				"  begin",
				"    SetLength(Result, TMFString(FOE).Items.Count);",
				"    for _i := 0 to TMFString(FOE).Items.Count - 1 do",
				"      Result[_i] := TMFString(FOE).Items[_i];",
				"  end;",
				"end;",
				""
			]
		},
		GetNodeMFVec2: {
			usesArrayType: "array of TVector2",
			decl: "function GetNodeMFVec2(const Node: TX3DNode; const FieldName: String): " + mfVec2ArrType + ";",
			impl: [
				"function " + className + ".GetNodeMFVec2(const Node: TX3DNode; const FieldName: String): " + mfVec2ArrType + ";",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"  _i: Integer;",
				"begin",
				"  Result := nil;",
				"  if Node = nil then Exit;",
				"  FOE := Node.FieldOrEvent(FieldName);",
				"  if FOE is TMFVec2f then",
				"  begin",
				"    SetLength(Result, TMFVec2f(FOE).Items.Count);",
				"    for _i := 0 to TMFVec2f(FOE).Items.Count - 1 do",
				"      Result[_i] := TMFVec2f(FOE).Items[_i];",
				"  end;",
				"end;",
				""
			]
		},
		GetNodeMFVec3: {
			usesArrayType: "array of TVector3",
			decl: "function GetNodeMFVec3(const Node: TX3DNode; const FieldName: String): " + mfVec3ArrType + ";",
			impl: [
				"function " + className + ".GetNodeMFVec3(const Node: TX3DNode; const FieldName: String): " + mfVec3ArrType + ";",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"  _i: Integer;",
				"begin",
				"  Result := nil;",
				"  if Node = nil then Exit;",
				"  FOE := Node.FieldOrEvent(FieldName);",
				"  if FOE is TMFVec3f then",
				"  begin",
				"    SetLength(Result, TMFVec3f(FOE).Items.Count);",
				"    for _i := 0 to TMFVec3f(FOE).Items.Count - 1 do",
				"      Result[_i] := TMFVec3f(FOE).Items[_i];",
				"  end;",
				"end;",
				""
			]
		},
		GetNodeMFVec4: {
			usesArrayType: "array of TVector4",
			decl: "function GetNodeMFVec4(const Node: TX3DNode; const FieldName: String): " + mfVec4ArrType + ";",
			impl: [
				"function " + className + ".GetNodeMFVec4(const Node: TX3DNode; const FieldName: String): " + mfVec4ArrType + ";",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"  _i: Integer;",
				"begin",
				"  Result := nil;",
				"  if Node = nil then Exit;",
				"  FOE := Node.FieldOrEvent(FieldName);",
				"  if FOE is TMFVec4f then",
				"  begin",
				"    SetLength(Result, TMFVec4f(FOE).Items.Count);",
				"    for _i := 0 to TMFVec4f(FOE).Items.Count - 1 do",
				"      Result[_i] := TMFVec4f(FOE).Items[_i];",
				"  end;",
				"end;",
				""
			]
		},
		GetNodeMFNode: {
			usesArrayType: "array of TX3DNode",
			decl: "function GetNodeMFNode(const Node: TX3DNode; const FieldName: String): " + mfNodeArrType + ";",
			impl: [
				"function " + className + ".GetNodeMFNode(const Node: TX3DNode; const FieldName: String): " + mfNodeArrType + ";",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"  _i: Integer;",
				"begin",
				"  Result := nil;",
				"  if Node = nil then Exit;",
				"  FOE := Node.FieldOrEvent(FieldName);",
				"  if FOE is TMFNode then",
				"  begin",
				"    SetLength(Result, TMFNode(FOE).Count);",
				"    for _i := 0 to TMFNode(FOE).Count - 1 do",
				"      Result[_i] := TMFNode(FOE)[_i];",
				"  end;",
				"end;",
				""
			]
		},
		FieldToMFFloat: {
			usesArrayType: "array of Single",
			decl: "function FieldToMFFloat(const Field: TX3DField): " + mfFloatArrType + ";",
			impl: [
				"function " + className + ".FieldToMFFloat(const Field: TX3DField): " + mfFloatArrType + ";",
				"var",
				"  _i: Integer;",
				"begin",
				"  Result := nil;",
				"  if Field is TMFFloat then",
				"  begin",
				"    SetLength(Result, TMFFloat(Field).Items.Count);",
				"    for _i := 0 to TMFFloat(Field).Items.Count - 1 do",
				"      Result[_i] := TMFFloat(Field).Items[_i];",
				"  end;",
				"end;",
				""
			]
		},
		FieldToMFDouble: {
			usesArrayType: "array of Double",
			decl: "function FieldToMFDouble(const Field: TX3DField): " + mfDoubleArrType + ";",
			impl: [
				"function " + className + ".FieldToMFDouble(const Field: TX3DField): " + mfDoubleArrType + ";",
				"var",
				"  _i: Integer;",
				"begin",
				"  Result := nil;",
				"  if Field is TMFDouble then",
				"  begin",
				"    SetLength(Result, TMFDouble(Field).Items.Count);",
				"    for _i := 0 to TMFDouble(Field).Items.Count - 1 do",
				"      Result[_i] := TMFDouble(Field).Items[_i];",
				"  end;",
				"end;",
				""
			]
		},
		FieldToMFInt32: {
			usesArrayType: "array of Int32",
			decl: "function FieldToMFInt32(const Field: TX3DField): " + mfInt32ArrType + ";",
			impl: [
				"function " + className + ".FieldToMFInt32(const Field: TX3DField): " + mfInt32ArrType + ";",
				"var",
				"  _i: Integer;",
				"begin",
				"  Result := nil;",
				"  if Field is TMFInt32 then",
				"  begin",
				"    SetLength(Result, TMFInt32(Field).Items.Count);",
				"    for _i := 0 to TMFInt32(Field).Items.Count - 1 do",
				"      Result[_i] := TMFInt32(Field).Items[_i];",
				"  end;",
				"end;",
				""
			]
		},
		FieldToMFBool: {
			usesArrayType: "array of Boolean",
			decl: "function FieldToMFBool(const Field: TX3DField): " + mfBoolArrType + ";",
			impl: [
				"function " + className + ".FieldToMFBool(const Field: TX3DField): " + mfBoolArrType + ";",
				"var",
				"  _i: Integer;",
				"begin",
				"  Result := nil;",
				"  if Field is TMFBool then",
				"  begin",
				"    SetLength(Result, TMFBool(Field).Items.Count);",
				"    for _i := 0 to TMFBool(Field).Items.Count - 1 do",
				"      Result[_i] := TMFBool(Field).Items[_i];",
				"  end;",
				"end;",
				""
			]
		},
		FieldToMFString: {
			usesArrayType: "array of String",
			decl: "function FieldToMFString(const Field: TX3DField): " + mfStringArrType + ";",
			impl: [
				"function " + className + ".FieldToMFString(const Field: TX3DField): " + mfStringArrType + ";",
				"var",
				"  _i: Integer;",
				"begin",
				"  Result := nil;",
				"  if Field is TMFString then",
				"  begin",
				"    SetLength(Result, TMFString(Field).Items.Count);",
				"    for _i := 0 to TMFString(Field).Items.Count - 1 do",
				"      Result[_i] := TMFString(Field).Items[_i];",
				"  end;",
				"end;",
				""
			]
		},
		FieldToMFVec2: {
			usesArrayType: "array of TVector2",
			decl: "function FieldToMFVec2(const Field: TX3DField): " + mfVec2ArrType + ";",
			impl: [
				"function " + className + ".FieldToMFVec2(const Field: TX3DField): " + mfVec2ArrType + ";",
				"var",
				"  _i: Integer;",
				"begin",
				"  Result := nil;",
				"  if Field is TMFVec2f then",
				"  begin",
				"    SetLength(Result, TMFVec2f(Field).Items.Count);",
				"    for _i := 0 to TMFVec2f(Field).Items.Count - 1 do",
				"      Result[_i] := TMFVec2f(Field).Items[_i];",
				"  end;",
				"end;",
				""
			]
		},
		FieldToMFVec3: {
			usesArrayType: "array of TVector3",
			decl: "function FieldToMFVec3(const Field: TX3DField): " + mfVec3ArrType + ";",
			impl: [
				"function " + className + ".FieldToMFVec3(const Field: TX3DField): " + mfVec3ArrType + ";",
				"var",
				"  _i: Integer;",
				"begin",
				"  Result := nil;",
				"  if Field is TMFVec3f then",
				"  begin",
				"    SetLength(Result, TMFVec3f(Field).Items.Count);",
				"    for _i := 0 to TMFVec3f(Field).Items.Count - 1 do",
				"      Result[_i] := TMFVec3f(Field).Items[_i];",
				"  end;",
				"end;",
				""
			]
		},
		FieldToMFVec4: {
			usesArrayType: "array of TVector4",
			decl: "function FieldToMFVec4(const Field: TX3DField): " + mfVec4ArrType + ";",
			impl: [
				"function " + className + ".FieldToMFVec4(const Field: TX3DField): " + mfVec4ArrType + ";",
				"var",
				"  _i: Integer;",
				"begin",
				"  Result := nil;",
				"  if Field is TMFVec4f then",
				"  begin",
				"    SetLength(Result, TMFVec4f(Field).Items.Count);",
				"    for _i := 0 to TMFVec4f(Field).Items.Count - 1 do",
				"      Result[_i] := TMFVec4f(Field).Items[_i];",
				"  end;",
				"end;",
				""
			]
		},
		FieldToMFNode: {
			usesArrayType: "array of TX3DNode",
			decl: "function FieldToMFNode(const Field: TX3DField): " + mfNodeArrType + ";",
			impl: [
				"function " + className + ".FieldToMFNode(const Field: TX3DField): " + mfNodeArrType + ";",
				"var",
				"  _i: Integer;",
				"begin",
				"  Result := nil;",
				"  if Field is TMFNode then",
				"  begin",
				"    SetLength(Result, TMFNode(Field).Count);",
				"    for _i := 0 to TMFNode(Field).Count - 1 do",
				"      Result[_i] := TMFNode(Field)[_i];",
				"  end;",
				"end;",
				""
			]
		},
		GetNodeMFNodeItem: {
			decl: "function GetNodeMFNodeItem(const Node: TX3DNode; const FieldName: String; const Idx: Integer): TX3DNode;",
			impl: [
				"function " + className + ".GetNodeMFNodeItem(const Node: TX3DNode; const FieldName: String; const Idx: Integer): TX3DNode;",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"begin",
				"  Result := nil;",
				"  if Node = nil then Exit;",
				"  FOE := Node.FieldOrEvent(FieldName);",
				"  if (FOE is TMFNode) and (Idx >= 0) and (Idx < TMFNode(FOE).Count) then",
				"    Result := TMFNode(FOE)[Idx];",
				"end;",
				""
			]
		},
		GetNodeMFFloatItem: {
			decl: "function GetNodeMFFloatItem(const Node: TX3DNode; const FieldName: String; const Idx: Integer): Single;",
			impl: [
				"function " + className + ".GetNodeMFFloatItem(const Node: TX3DNode; const FieldName: String; const Idx: Integer): Single;",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"begin",
				"  Result := 0.0;",
				"  if Node = nil then Exit;",
				"  FOE := Node.FieldOrEvent(FieldName);",
				"  if (FOE is TMFFloat) and (Idx >= 0) and (Idx < TMFFloat(FOE).Items.Count) then",
				"    Result := TMFFloat(FOE).Items[Idx];",
				"end;",
				""
			]
		},
		GetNodeMFInt32Item: {
			decl: "function GetNodeMFInt32Item(const Node: TX3DNode; const FieldName: String; const Idx: Integer): Int32;",
			impl: [
				"function " + className + ".GetNodeMFInt32Item(const Node: TX3DNode; const FieldName: String; const Idx: Integer): Int32;",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"begin",
				"  Result := 0;",
				"  if Node = nil then Exit;",
				"  FOE := Node.FieldOrEvent(FieldName);",
				"  if (FOE is TMFInt32) and (Idx >= 0) and (Idx < TMFInt32(FOE).Items.Count) then",
				"    Result := TMFInt32(FOE).Items[Idx];",
				"end;",
				""
			]
		},
		GetNodeMFBoolItem: {
			decl: "function GetNodeMFBoolItem(const Node: TX3DNode; const FieldName: String; const Idx: Integer): Boolean;",
			impl: [
				"function " + className + ".GetNodeMFBoolItem(const Node: TX3DNode; const FieldName: String; const Idx: Integer): Boolean;",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"begin",
				"  Result := False;",
				"  if Node = nil then Exit;",
				"  FOE := Node.FieldOrEvent(FieldName);",
				"  if (FOE is TMFBool) and (Idx >= 0) and (Idx < TMFBool(FOE).Items.Count) then",
				"    Result := TMFBool(FOE).Items[Idx];",
				"end;",
				""
			]
		},
		GetNodeMFStringItem: {
			decl: "function GetNodeMFStringItem(const Node: TX3DNode; const FieldName: String; const Idx: Integer): String;",
			impl: [
				"function " + className + ".GetNodeMFStringItem(const Node: TX3DNode; const FieldName: String; const Idx: Integer): String;",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"begin",
				"  Result := '';",
				"  if Node = nil then Exit;",
				"  FOE := Node.FieldOrEvent(FieldName);",
				"  if (FOE is TMFString) and (Idx >= 0) and (Idx < TMFString(FOE).Items.Count) then",
				"    Result := TMFString(FOE).Items[Idx];",
				"end;",
				""
			]
		},
		GetNodeMFVec2Item: {
			decl: "function GetNodeMFVec2Item(const Node: TX3DNode; const FieldName: String; const Idx: Integer): TVector2;",
			impl: [
				"function " + className + ".GetNodeMFVec2Item(const Node: TX3DNode; const FieldName: String; const Idx: Integer): TVector2;",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"begin",
				"  Result := Vector2(0, 0);",
				"  if Node = nil then Exit;",
				"  FOE := Node.FieldOrEvent(FieldName);",
				"  if (FOE is TMFVec2f) and (Idx >= 0) and (Idx < TMFVec2f(FOE).Items.Count) then",
				"    Result := TMFVec2f(FOE).Items[Idx];",
				"end;",
				""
			]
		},
		GetNodeMFVec3Item: {
			decl: "function GetNodeMFVec3Item(const Node: TX3DNode; const FieldName: String; const Idx: Integer): TVector3;",
			impl: [
				"function " + className + ".GetNodeMFVec3Item(const Node: TX3DNode; const FieldName: String; const Idx: Integer): TVector3;",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"begin",
				"  Result := Vector3(0, 0, 0);",
				"  if Node = nil then Exit;",
				"  FOE := Node.FieldOrEvent(FieldName);",
				"  if (FOE is TMFVec3f) and (Idx >= 0) and (Idx < TMFVec3f(FOE).Items.Count) then",
				"    Result := TMFVec3f(FOE).Items[Idx];",
				"end;",
				""
			]
		},
		GetNodeMFVec4Item: {
			decl: "function GetNodeMFVec4Item(const Node: TX3DNode; const FieldName: String; const Idx: Integer): TVector4;",
			impl: [
				"function " + className + ".GetNodeMFVec4Item(const Node: TX3DNode; const FieldName: String; const Idx: Integer): TVector4;",
				"var",
				"  FOE: TX3DFieldOrEvent;",
				"begin",
				"  Result := Vector4(0, 0, 1, 0);",
				"  if Node = nil then Exit;",
				"  FOE := Node.FieldOrEvent(FieldName);",
				"  if (FOE is TMFVec4f) and (Idx >= 0) and (Idx < TMFVec4f(FOE).Items.Count) then",
				"    Result := TMFVec4f(FOE).Items[Idx];",
				"end;",
				""
			]
		},
		RotationBetweenVectors: {
			decl: "function RotationBetweenVectors(const V1, V2: TVector3): TVector4;",
			impl: [
				"function " + className + ".RotationBetweenVectors(const V1, V2: TVector3): TVector4;",
				"var",
				"  N1, N2, Axis: TVector3;",
				"  D, Angle: Single;",
				"begin",
				"  if V1.IsZero or V2.IsZero then",
				"  begin",
				"    Result := Vector4(0, 0, 1, 0);",
				"    Exit;",
				"  end;",
				"  N1 := V1.Normalize;",
				"  N2 := V2.Normalize;",
				"  D := Min(1.0, Max(-1.0, TVector3.DotProduct(N1, N2)));",
				"  Angle := ArcCos(D);",
				"  Axis := TVector3.CrossProduct(N1, N2);",
				"  if Axis.IsZero then",
				"  begin",
				"    if Abs(N1.X) < 0.9 then Axis := TVector3.CrossProduct(N1, Vector3(1, 0, 0))",
				"    else Axis := TVector3.CrossProduct(N1, Vector3(0, 1, 0));",
				"  end;",
				"  Axis := Axis.Normalize;",
				"  Result := Vector4(Axis, Angle);",
				"end;",
				""
			]
		},
		InvertRotation: {
			decl: "function InvertRotation(const R: TVector4): TVector4;",
			impl: [
				"function " + className + ".InvertRotation(const R: TVector4): TVector4;",
				"begin",
				"  Result := Vector4(R.X, R.Y, R.Z, -R.W);",
				"end;",
				""
			]
		},
		RotateVec3: {
			decl: "function RotateVec3(const R: TVector4; const V: TVector3): TVector3;",
			impl: [
				"function " + className + ".RotateVec3(const R: TVector4; const V: TVector3): TVector3;",
				"var",
				"  Axis: TVector3;",
				"  C, S: Single;",
				"begin",
				"  Axis := Vector3(R.X, R.Y, R.Z);",
				"  if Axis.IsZero or (R.W = 0) then",
				"  begin",
				"    Result := V;",
				"    Exit;",
				"  end;",
				"  Axis := Axis.Normalize;",
				"  C := Cos(R.W);",
				"  S := Sin(R.W);",
				"  Result := V * C + TVector3.CrossProduct(Axis, V) * S + Axis * (TVector3.DotProduct(Axis, V) * (1.0 - C));",
				"end;",
				""
			]
		},
		SlerpRotation: {
			decl: "function SlerpRotation(const R1, R2: TVector4; const T: Single): TVector4;",
			impl: [
				"function " + className + ".SlerpRotation(const R1, R2: TVector4; const T: Single): TVector4;",
				"var",
				"  A1, A2: TVector3;",
				"  S1, C1, S2, C2: Single;",
				"  Q1X, Q1Y, Q1Z, Q1W, Q2X, Q2Y, Q2Z, Q2W: Single;",
				"  Dot, HalfTheta, SinHalf, RA, RB: Single;",
				"  RX, RY, RZ, RW, Len, Den: Single;",
				"begin",
				"  A1 := Vector3(R1.X, R1.Y, R1.Z);",
				"  if A1.IsZero then A1 := Vector3(0, 0, 1) else A1 := A1.Normalize;",
				"  S1 := Sin(R1.W * 0.5); C1 := Cos(R1.W * 0.5);",
				"  Q1X := A1.X * S1; Q1Y := A1.Y * S1; Q1Z := A1.Z * S1; Q1W := C1;",
				"  A2 := Vector3(R2.X, R2.Y, R2.Z);",
				"  if A2.IsZero then A2 := Vector3(0, 0, 1) else A2 := A2.Normalize;",
				"  S2 := Sin(R2.W * 0.5); C2 := Cos(R2.W * 0.5);",
				"  Q2X := A2.X * S2; Q2Y := A2.Y * S2; Q2Z := A2.Z * S2; Q2W := C2;",
				"  Dot := Q1X * Q2X + Q1Y * Q2Y + Q1Z * Q2Z + Q1W * Q2W;",
				"  if Dot < 0 then",
				"  begin",
				"    Q2X := -Q2X; Q2Y := -Q2Y; Q2Z := -Q2Z; Q2W := -Q2W;",
				"    Dot := -Dot;",
				"  end;",
				"  if Dot > 0.9995 then",
				"  begin",
				"    RX := Q1X + T * (Q2X - Q1X);",
				"    RY := Q1Y + T * (Q2Y - Q1Y);",
				"    RZ := Q1Z + T * (Q2Z - Q1Z);",
				"    RW := Q1W + T * (Q2W - Q1W);",
				"  end",
				"  else",
				"  begin",
				"    HalfTheta := ArcCos(Min(1.0, Max(-1.0, Dot)));",
				"    SinHalf := Sqrt(Max(0.0, 1.0 - Dot * Dot));",
				"    if SinHalf < 0.0001 then",
				"    begin",
				"      RA := 0.5; RB := 0.5;",
				"    end",
				"    else",
				"    begin",
				"      RA := Sin((1.0 - T) * HalfTheta) / SinHalf;",
				"      RB := Sin(T * HalfTheta) / SinHalf;",
				"    end;",
				"    RX := Q1X * RA + Q2X * RB;",
				"    RY := Q1Y * RA + Q2Y * RB;",
				"    RZ := Q1Z * RA + Q2Z * RB;",
				"    RW := Q1W * RA + Q2W * RB;",
				"  end;",
				"  Len := Sqrt(RX * RX + RY * RY + RZ * RZ + RW * RW);",
				"  if Len > 0 then begin RX := RX / Len; RY := RY / Len; RZ := RZ / Len; RW := RW / Len; end;",
				"  Den := Sqrt(Max(0.0, 1.0 - RW * RW));",
				"  if Den < 0.0001 then",
				"    Result := Vector4(0, 0, 1, 0)",
				"  else",
				"    Result := Vector4(RX / Den, RY / Den, RZ / Den, 2.0 * ArcCos(Min(1.0, Max(-1.0, RW))));",
				"end;",
				""
			]
		},
		NodeToStr: {
			decl: "function NodeToStr(const Node: TX3DNode): String;",
			impl: [
				"function " + className + ".NodeToStr(const Node: TX3DNode): String;",
				"begin",
				"  if Node = nil then",
				"    Result := 'nil'",
				"  else",
				"    Result := Node.X3DName;",
				"end;",
				""
			]
		}
	};

	const typeAliasDecls = [];
	const helperDecls = [];
	const helperImpls = [];
	for (const helperName of usedSendHelpers) {
		const def = sendHelperDefs[helperName];
		if (def) {
			if (def.usesArrayType) usedArrayTypes.add(def.usesArrayType);
			helperDecls.push(def.decl);
			helperImpls.push(...def.impl);
		}
	}
	for (const arrType of usedArrayTypes) {
		typeAliasDecls.push(mfDeclTypeMap[arrType] + " = " + arrType + ";");
	}

	const classInterface = [
		...typeAliasDecls,
		className + " = class",
		"private",
		...classFields.map((l) => "  " + l),
		"  procedure FlushOutputs(const Time: TX3DTime);",
		...helperDecls.map((l) => "  " + l),
		"public",
		"  constructor Create(" + bindParams.join("; ") + ");",
		"  class function CreateForNode(const AScriptNode: TScriptNode; const AHandlerPrefix: String): " + className + ";",
		"  destructor Destroy; override;",
		"  procedure Detach;",
		"  procedure RegisterHandlers(const Scene: TCastleSceneCore);",
		"  property Initialized: Boolean read FScriptInitialized;",
		...methodDecls.map((l) => "  " + l),
		"end;"
	].join("\n");

	const classImplementation = [
		"constructor " + className + ".Create(" + bindParams.join("; ") + ");",
		...(ctorNeedsLoopIdx ? ["var", "  _i: Integer;"] : []),
		"begin",
		"  inherited Create;",
		...ctorLines.map((l) => "  " + l),
		...bindAssigns,
		"end;",
		"",
		"class function " + className + ".CreateForNode(const AScriptNode: TScriptNode; const AHandlerPrefix: String): " + className + ";",
		"begin",
		"  Result := " + className + ".Create(" + nodeLookupArgs.join(", ") + ");",
		"end;",
		"",
		"destructor " + className + ".Destroy;",
		"begin",
		...dtorLines.map((l) => "  " + l),
		"  inherited Destroy;",
		"end;",
		"",
		"procedure " + className + ".Detach;",
		"begin",
		...detachLines.map((l) => "  " + l),
		"end;",
		"",
		"procedure " + className + ".FlushOutputs(const Time: TX3DTime);",
		...(flushNeedsLoopIdx ? ["var", "  _i: Integer;"] : []),
		"begin",
		...flushLines,
		"end;",
		"",
		...helperImpls,
		"procedure " + className + ".RegisterHandlers(const Scene: TCastleSceneCore);",
		"begin",
		...registerLines,
		"end;",
		"",
		...methodImpls
	].join("\n");

	const pascalUnit = [
		"unit " + unitName + ";",
		"",
		"{$ifdef FPC}{$mode objfpc}{$H+}{$endif}",
		"",
		"interface",
		"",
		"uses",
		"  SysUtils, Math, CastleVectors, CastleSceneCore, X3DFields, X3DNodes, X3DTime;",
		"",
		"type",
		classInterface
			.split("\n")
			.map((l) => "  " + l)
			.join("\n"),
		"",
		"implementation",
		"",
		classImplementation,
		"end.",
		""
	].join("\n");

	const compiledUrl = "compiled:\n" + compiledEntries.join("\n");

	return {
		unitName,
		className,
		scriptName,
		hasInitialize,
		handlerFnNames,
		compiledUrl,
		compiledEntries,
		fieldBindArgs,
		classInterface,
		classImplementation,
		pascalUnit
	};
}

export default function JS2Pas() {
	this.convert = convertECMAScriptToPascal;
}

