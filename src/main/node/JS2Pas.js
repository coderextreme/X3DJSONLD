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
			if (t.value === "null" || t.value === "undefined") {
				return { type: "Literal", kind: "null", value: null };
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

function collectLocals(node, locals, assigned) {
	if (!node || typeof node !== "object") return;
	if (node.type === "VarDecl") {
		for (const d of node.decls) {
			if (!locals.has(d.name)) {
				locals.set(d.name, inferExprType(d.init));
			}
		}
	} else if (node.type === "ForInOf") {
		if (!locals.has(node.leftVar)) {
			locals.set(node.leftVar, node.op === "in" ? "Integer" : "Single");
		}
	} else if (node.type === "Assign") {
		const rootId = getRootIdent(node.left);
		if (rootId) assigned.add(rootId);
	} else if (node.type === "Update") {
		const rootId = getRootIdent(node.arg);
		if (rootId) assigned.add(rootId);
	}
	for (const k of Object.keys(node)) {
		const child = node[k];
		if (Array.isArray(child)) {
			child.forEach((c) => {
				if (c && typeof c === "object" && c.type !== "FunctionDecl") {
					collectLocals(c, locals, assigned);
				}
			});
		} else if (child && typeof child === "object" && child.type !== "FunctionDecl") {
			collectLocals(child, locals, assigned);
		}
	}
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
				(exprMentionsIdent(simple.endNode, paramName) ||
					exprMentionsIdent(simple.startExpr, paramName))
			) {
				return true;
			}
		}
		if (node.type === "Index" && exprMentionsIdent(node.index, paramName)) {
			return true;
		}
		if (
			node.type === "Binary" &&
			["%", "<<", ">>", ">>>", "&", "|", "^"].includes(node.op) &&
			(exprMentionsIdent(node.left, paramName) || exprMentionsIdent(node.right, paramName))
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

	const helperParamTypes = new Map();
	for (const [fnName, fn] of functions.entries()) {
		if (!isHandlerName(fnName)) {
			helperParamTypes.set(
				fnName,
				fn.params.map((p) => (usesAsInteger(fn.body, p) ? "Integer" : "Single"))
			);
		}
	}

	const methodNames = new Map();
	for (const fnName of functions.keys()) {
		methodNames.set(fnName, upperCaseFirst(sanitizeId(fnName)));
	}

	const usedSendHelpers = new Set();
	const skippedBrowserVars = new Set();

	const inferPascalType = (expr, localScope, curParamTypeMap) => {
		if (!expr || !expr.type) return "Single";
		if (expr.type === "Literal") {
			if (expr.kind === "boolean") return "Boolean";
			if (expr.kind === "string") return "String";
			if (expr.kind === "null") return "TX3DNode";
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
		if (expr.type === "Unary") {
			if (expr.op === "!") return "Boolean";
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
			}
		}
		if (expr.type === "New" && expr.callee && expr.callee.type === "Identifier") {
			const t = X3D_TYPE_TO_PASCAL[expr.callee.name];
			if (t) return t;
		}
		return inferExprType(expr);
	};

	const toBoolCode = (expr, code, localScope, curParamTypeMap) => {
		const t = inferPascalType(expr, localScope, curParamTypeMap);
		if (t === "Boolean") return code;
		if (t === "TX3DNode") return "((" + code + ") <> nil)";
		if (t === "String") return "((" + code + ") <> '')";
		return "((" + code + ") <> 0)";
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
				if (expr.kind === "null") return "nil";
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
				const objCode = emitExpr(obj, localScope, curParamMap, curParamTypeMap, fx);
				if (["x", "y", "z", "w"].includes(prop)) {
					return objCode + "." + prop.toUpperCase();
				}
				if (prop === "r") return objCode + ".X";
				if (prop === "g") return objCode + ".Y";
				if (prop === "b") return objCode + ".Z";
				if (prop === "a") return objCode + ".W";
				if (prop === "length") return "Length(" + objCode + ")";
				return objCode + "." + prop;
			}

			case "Index":
				return (
					emitExpr(expr.object, localScope, curParamMap, curParamTypeMap, fx) +
					"[" +
					emitExpr(expr.index, localScope, curParamMap, curParamTypeMap, fx) +
					"]"
				);

			case "New": {
				const cname = expr.callee && expr.callee.type === "Identifier" ? expr.callee.name : "";
				const args = expr.args.map((a) =>
					emitExpr(a, localScope, curParamMap, curParamTypeMap, fx)
				);
				switch (cname) {
					case "SFVec2f":
						return "Vector2(" + args.join(", ") + ")";
					case "SFVec3f":
					case "SFColor":
						return "Vector3(" + args.join(", ") + ")";
					case "SFVec4f":
					case "SFRotation":
					case "SFColorRGBA":
						return "Vector4(" + args.join(", ") + ")";
					case "SFVec2d":
						return "Vector2Double(" + args.join(", ") + ")";
					case "SFVec3d":
						return "Vector3Double(" + args.join(", ") + ")";
					case "SFVec4d":
						return "Vector4Double(" + args.join(", ") + ")";
					default:
						return "[" + args.join(", ") + "]";
				}
			}

			case "Unary": {
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
				const pPrec = JS_BIN_PREC[expr.op] || 0;
				let l = emitExpr(expr.left, localScope, curParamMap, curParamTypeMap, fx);
				let r = emitExpr(expr.right, localScope, curParamMap, curParamTypeMap, fx);
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
						return "WriteLn(" + args.join(", ") + ")";
					}
					const objCode = emitExpr(c.object, localScope, curParamMap, curParamTypeMap, fx);
					if (c.property === "normalize") return objCode + ".Normalize";
					if (c.property === "length") return objCode + ".Length";
					if (c.property === "dot") return "TVector3.DotProduct(" + objCode + ", " + args[0] + ")";
					if (c.property === "cross") return "TVector3.CrossProduct(" + objCode + ", " + args[0] + ")";
					return objCode + "." + c.property + "(" + args.join(", ") + ")";
				}
				if (c && c.type === "Identifier") {
					if (c.name === "print") {
						return "WriteLn(" + args.join(", ") + ")";
					}
					if (functions.has(c.name)) {
						const mName = methodNames.get(c.name);
						if (isHandlerName(c.name)) {
							return mName + "(nil, Time)";
						}
						const fnDecl = functions.get(c.name);
						const pTypes = helperParamTypes.get(c.name) || [];
						const padded = fnDecl.params.map((_, idx) =>
							idx < args.length ? args[idx] : pTypes[idx] === "Integer" ? "0" : "0.0"
						);
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
					let helper = "SendNodeFloat";
					if (rhsType === "Boolean") helper = "SendNodeBool";
					else if (rhsType === "String") helper = "SendNodeString";
					else if (rhsType === "TVector2") helper = "SendNodeVec2";
					else if (rhsType === "TVector3") helper = "SendNodeVec3";
					else if (rhsType === "TVector4") helper = "SendNodeVec4";
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
					const arrCode = emitExpr(expr.left.object, localScope, curParamMap, curParamTypeMap, fx);
					const idxCode = emitExpr(expr.left.index, localScope, curParamMap, curParamTypeMap, fx);
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
				const { code: rawTestCode, post } = emitExprWithFx(
					stmt.test,
					localScope,
					curParamMap,
					curParamTypeMap,
					pad,
					lines
				);
				const testCode = toBoolCode(stmt.test, rawTestCode, localScope, curParamTypeMap);
				lines.push(pad + "if " + testCode + " then");
				if (stmt.consequent.type === "Block") {
					lines.push(pad + "begin");
					for (const s of stmt.consequent.body) {
						emitStmt(s, indent + 1, localScope, curParamMap, curParamTypeMap, lines);
					}
					lines.push(stmt.alternate ? pad + "end" : pad + "end;");
				} else {
					emitStmt(stmt.consequent, indent + 1, localScope, curParamMap, curParamTypeMap, lines);
				}
				if (stmt.alternate) {
					if (stmt.alternate.type === "If") {
						const altLines = [];
						emitStmt(stmt.alternate, indent, localScope, curParamMap, curParamTypeMap, altLines);
						altLines[0] = pad + "else " + altLines[0].trimStart();
						lines.push(...altLines);
					} else if (stmt.alternate.type === "Block") {
						lines.push(pad + "else");
						lines.push(pad + "begin");
						for (const s of stmt.alternate.body) {
							emitStmt(s, indent + 1, localScope, curParamMap, curParamTypeMap, lines);
						}
						lines.push(pad + "end;");
					} else {
						lines.push(pad + "else");
						emitStmt(stmt.alternate, indent + 1, localScope, curParamMap, curParamTypeMap, lines);
					}
				}
				for (const p of post) lines.push(pad + p);
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
		"FHandlerPrefix: String;",
		"FInitialized: Boolean;"
	];
	const ctorLines = [
		"FHandlerPrefix := AHandlerPrefix;",
		"FInitialized := False;"
	];
	const dtorLines = [];
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
		classFields.push("F" + fm.name + ": " + fm.pascalType + ";");
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

	for (const [fnName, fn] of functions.entries()) {
		const mName = methodNames.get(fnName);
		const isHandler = isHandlerName(fnName);

		const locals = new Map();
		const assigned = new Set();
		collectLocals(fn.body, locals, assigned);

		const curParamMap = new Map();
		const curParamTypeMap = new Map();
		if (isHandler) {
			const sig = "procedure " + mName + "(Value: TX3DField; const Time: TX3DTime);";
			methodDecls.push(sig);

			const fInfo =
				fieldMap.get(fnName) ||
				(fnName.startsWith("set_") ? fieldMap.get(fnName.slice(4)) : null);
			if (fn.params.length > 0 && fInfo && !fInfo.isMF) {
				const pType = "T" + fInfo.type;
				curParamMap.set(fn.params[0], "(Value as " + pType + ").Value");
				curParamTypeMap.set(fn.params[0], fInfo.pascalType);
			}
			if (fn.params.length > 1 && fnName !== "initialize" && fnName !== "shutdown") {
				curParamMap.set(fn.params[1], "Time.Seconds");
				curParamTypeMap.set(fn.params[1], "Double");
			}
			const localVarLines = [];
			for (const [vName, vType] of locals.entries()) {
				if (skippedBrowserVars.has(vName)) continue;
				localVarLines.push("  " + sanitizeId(vName) + ": " + vType + ";");
			}

			const bodyLines = [];
			if (fnName === "initialize") {
				bodyLines.push("  FInitialized := True;");
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
				dtorLines.unshift(
					"if FField_" + fInfo.name + " <> nil then",
					"  FField_" + fInfo.name + ".EventIn.RemoveNotification({$ifdef FPC}@{$endif}" + notifName + ");"
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

			for (const s of fn.body.body) {
				emitStmt(s, 1, locals, curParamMap, curParamTypeMap, bodyLines);
			}
			if (flushLines.length > 0) {
				bodyLines.push("  FlushOutputs(Time);");
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
					"  Scene.RegisterCompiledScript(FHandlerPrefix + " +
						escapePascalString(regKey) +
						", {$ifdef FPC}@{$endif}" +
						mName +
						");"
				);
			}
		} else {
			const pTypes = helperParamTypes.get(fnName) || [];
			const sigParams = fn.params.map(
				(p, idx) => "const " + sanitizeId(p) + ": " + (pTypes[idx] || "Single")
			);
			fn.params.forEach((p, idx) => {
				curParamTypeMap.set(p, pTypes[idx] || "Single");
			});
			sigParams.push("const Time: TX3DTime");
			const sig = "procedure " + mName + "(" + sigParams.join("; ") + ");";
			methodDecls.push(sig);

			const localVarLines = [];
			for (const [vName, vType] of locals.entries()) {
				if (skippedBrowserVars.has(vName)) continue;
				localVarLines.push("  " + sanitizeId(vName) + ": " + vType + ";");
			}
			const bodyLines = [];
			for (const s of fn.body.body) {
				emitStmt(s, 1, locals, curParamMap, curParamTypeMap, bodyLines);
			}
			methodImpls.push(
				"procedure " + className + "." + mName + "(" + sigParams.join("; ") + ");",
				...(localVarLines.length > 0 ? ["var", ...localVarLines] : []),
				"begin",
				...bodyLines,
				"end;",
				""
			);
		}
	}

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
		}
	};

	const helperDecls = [];
	const helperImpls = [];
	for (const helperName of usedSendHelpers) {
		const def = sendHelperDefs[helperName];
		if (def) {
			helperDecls.push(def.decl);
			helperImpls.push(...def.impl);
		}
	}

	const classInterface = [
		className + " = class",
		"private",
		...classFields.map((l) => "  " + l),
		"  procedure FlushOutputs(const Time: TX3DTime);",
		...helperDecls.map((l) => "  " + l),
		"public",
		"  constructor Create(" + bindParams.join("; ") + ");",
		"  class function CreateForNode(const AScriptNode: TScriptNode; const AHandlerPrefix: String): " + className + ";",
		"  destructor Destroy; override;",
		"  procedure RegisterHandlers(const Scene: TCastleSceneCore);",
		"  property Initialized: Boolean read FInitialized;",
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
