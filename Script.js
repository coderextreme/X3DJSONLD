// X3D JSON Script expander
packages = {};

var LOG = function() {
	this.array = [];
	this.join = function(s) {
		return this.array.join(s);
	}
	this.push = function(s) {
		this.array.push(s);
	}
	this.log = function(el) {
		this.array.push(el);
		// console.error(JSON.stringify(el));
	}
	return this;
}

function Script(package, name) {
	// this.setters = {};
	// this.getters = {};
	this.fields = {};
	this.functions = {};
	if (typeof package === 'undefined' || package.name === "") {
		if (typeof name === 'undefined') {
			this.name = "";
		} else {
			this.name = name;
		}
	} else {
		if (typeof name === 'undefined') {
			this.name = package.name;
		} else {
			this.name = package.name+'.'+name;
		}
	}
	packages[this.name] = this;
}

Script.prototype.find = function (name) {
	return packages[name];
}


function zapSource(object) {
	if (typeof object === "object") {
		for (p in object) {
			if (p === '#sourceText') {
				delete object[p];
			} else {
				zapSource(object[p]);
			}
		}
	}
}

function processScripts(object, classes, package, routecode) {
	if (typeof package === 'undefined') {
		classes.log("function SFRotation() { return Array.prototype.slice.call(arguments, 0); };");
		classes.log("function MFRotation() { return Array.prototype.slice.call(arguments, 0); };");
		classes.log("function SFVec3f() { return Array.prototype.slice.call(arguments, 0); };");
		classes.log("function MFVec3f() { return Array.prototype.slice.call(arguments, 0); };");
		classes.log("function MFVec2f() { return Array.prototype.slice.call(arguments, 0); };");
		classes.log("function MFString() { return Array.prototype.slice.call(arguments, 0); };");
		classes.log('var X3DJSON = {};');
		routecode.log("if (typeof $ === 'undefined') {");
		routecode.log("	   $ = function(selector) { return {");
		routecode.log("		attr : function(attr, value) {");
		routecode.log("			if (arguments.length > 1) {");
		routecode.log("				this[attr] = value;");
		routecode.log("				/* Browser.print('set '+ attr+ '='+ value); */");
		routecode.log("			} else {");
		routecode.log("				/* Browser.print('get '+ attr+'='+this[attr]); */");
		routecode.log("				return(this[attr]);");
		routecode.log("			}");
		routecode.log("         }");
		routecode.log("    }}");
		routecode.log("}");
	}
	package = package || new Script();
	var p;
	if (typeof object === "object") {
		for (p in object) {
			if (typeof object[p] === 'undefined') {
				continue;
			}
			var name = object[p]["@name"];
			if (typeof name === 'undefined') {
				name = object[p]["@DEF"];
			}
			if (p.toLowerCase() === 'script') {
				var script = new Script(package, name);
				// console.error("SCRIPT IS ",JSON.stringify(object[p]));
				registerFields(object[p]['field'], classes, script);
				processSource(object[p]['#sourceText'], classes, script);
				processFields(object[p]['field'], classes, script);
				processScripts(object[p], classes, script, routecode);
				// zap original source because we don't need it
				// delete object[p]['#sourceText'];
			} else if (p.toLowerCase() === 'route') {
				processRoute(object[p], routecode, package);
			} else if (p.toLowerCase() === '@use') {
				var name = object["@USE"];
				object["@USE"] = name;
				// object[p] is not an object
			} else if (p.toLowerCase() === '@def') {
				var name = object["@DEF"];
				object["@DEF"] = name;
				// object[p] is not an object
			} else {
				processScripts(object[p], classes, package, routecode);
			}
		}
	}
}

function processRoute(route, routecode, package) {
	var fromNode = route["@fromNode"];
	var fromField = route["@fromField"];
	var toNode = route["@toNode"];
	var toField = route["@toField"];
	if (typeof package.find(toNode) === 'undefined') {
		routecode.log('	if (!$("[DEF='+toNode+'], [USE='+toNode+']")) console.error("undefined '+toNode+'");');
		if (toField.indexOf("set_") === 0) {
			var  to = '$("[DEF='+toNode+'], [USE='+toNode+']").attr("'+toField.substr(4)+'",';
		} else {
			var  to = '$("[DEF='+toNode+'], [USE='+toNode+']").attr("'+toField+'",';
		}
	} else {
		if (toField.indexOf("set_") == 0) {
			var  to = 'X3DJSON.Object_' +toNode+'.'+toField+'(';
		} else {
			var  to = 'X3DJSON.Object_' +toNode+'.set_'+toField+'(';
		}
	}
	if (typeof package.find(fromNode) === 'undefined') {
		routecode.log('	if (!$("[DEF='+fromNode+'], [USE='+fromNode+']")) console.error("undefined '+fromNode+'");');
		if (fromField.indexOf("_changed") > 0) {
			var  from = '$("[DEF='+fromNode+'], [USE='+fromNode+']").attr("'+fromField.substr(0, fromField.length-8)+'")';
		} else {
			var  from = '$("[DEF='+fromNode+'], [USE='+fromNode+']").attr("'+fromField+'")';
		}
	} else {
		var field = 'X3DJSON.Object_'+fromNode+'.'+fromField;
		if (fromField.indexOf("_changed") > 0) {
			var from = 'typeof '+field+' === "function" ? '+field+'() : '+field
		} else {
			var from =  'typeof '+field+'_changed === "function" ? '+field+'_changed() : '+field+'_changed';
		}
	}
	routecode.log('\t'+to+from+');');
}

function valueExpand(type, flat) {
	// console.error("TYPE IS "+type);
	if (!flat) {
		if (type === 'SFBool') {
			return "false";
		} else if (type === 'SFFloat') {
			return 0.0;
		} else if (type === 'SFInt32') {
			return 0;
		} else if (type === 'SFString'){
			return "''";
		} else if (type === 'SFTime'){
			return 0;
		} else if (type === 'SFNode') {
			return "{}";
		} else if (type === 'SFRotation'){
			return "[]";
		} else if (type === 'SFColor'){
			return "[]";
		} else if (type.indexOf('SFVec') === 0){
			return "[]";
		} else if (type.indexOf('SFMatrix') === 0){
			return "[]";
		} else if (type.indexOf('MF') === 0){
			return "[]";
		} else {
			return "new "+type+"()";  // THIS WILL THROW AN ERROR IF you don't have a value for an outputOnly.  Fill in the type case above
		}
	}
	if (type.indexOf("MF") === 0) {
		// collapse into nested arrays for scripting
		var num = 0; // this will cause an error below if not set
		if (type.indexOf("MFRotation") === 0) {
			num = 4;
		} else if (type.indexOf("MFColorRGBA") === 0) {
			num = 4;
		} else if (type.indexOf("MFColor") === 0) {
			num = 3;
		} else if (type.indexOf("MFVec2") === 0) {
			num = 2;
		} else if (type.indexOf("MFVec3") === 0) {
			num = 3;
		} else if (type.indexOf("MFVec4") === 0) {
			num = 4;
		} else if (type.indexOf("MFMatrix3") === 0) {
			num = 9;
		} else if (type.indexOf("MFMatrix4") === 0) {
			num = 16;
		} else {
			console.error("/*", type, "*/");
			if (flat === 'NULL') {
				return JSON.stringify(null);
			} else {
				return JSON.stringify(flat);
			}
		}

		value = [];
		var numvec = flat.length / num;
		for (i = 0; i < numvec; i++) {
			var v = [];
			for (j = 0; j < num; j++) {
				v.push(flat[i*num+j]);
			}
			value.push(v);
		}
		return JSON.stringify(value);
	} else {
		return JSON.stringify(flat);
	}
}
function registerFields(fields, classes, package) {
	var f;
	for (f in fields) {
		var object = fields[f];
		var name = object["@name"];
		package.fields[name] = object;
	}
}

function processFields(fields, classes, package) {
	// console.error("0FIELDS IS "+JSON.stringify(fields));
	var f;
	var initializers = [];
	var values = {};
	var indent = '\t';
	var types = {};
	for (f in fields) {
		// console.error("FIELDS IS ",f, fields.length, JSON.stringify(fields));
		var object = fields[f];
		// console.error("OBJECT IS ",f, JSON.stringify(object));
		var name = object["@name"];
		// console.error("NAME IS ",f, JSON.stringify(name));
		types[name] = object["@type"];
		// console.error("TYPE IS ",f, object["@type"]);
		values[name] = valueExpand(types[name], object["@value"]);
		// console.error("VALUE IS ",f, object["@value"]);
		switch(object['@accessType']) {
		case 'initializeOnly':
			// these should be in order, so it's an array
			initializers.push(name);
			break;
		case 'inputOutput':
			// setters should be looked up by name
			// package.setters[name] = object;
			// package.getters[name] = object;
			break;
		case 'inputOnly':
			// setters should be looked up by name
			// package.setters[name] = object;
			break;
		case 'outputOnly':
			// package.getters[name] = object;
			break;
		default:
			break;
		}
	}

	for (var v in values) {
		// console.error("PROCESS FIELD", v, values[v]);
		var set = v.indexOf("set_");
		var changed = v.indexOf("_changed");
		if (changed > 0 && changed === v.length-8) {
			v = v.substr(0, changed);
		} else if (set === 0) {
			v = v.substr(4);
		}
		if (!v) {
			console.error("--------------------------------------undefined field", v);
		}
		// Don't override existing functions
		if (!package.functions[v]) {
			classes.log(indent + "this." + v + ' = '+ values[v] + ';');
		}
		if (!package.functions['set_'+v]) {
			classes.log(indent+ "this.set_" + v + ' = function (value) { if (value) this.' + v +  ' = (value.indexOf(",") >= 0 ? value.split(",") : value); };');
		}
		if (!package.functions[v+'_changed']) {
			classes.log(indent+ "this." + v + '_changed = function () { return this.' + v +  '; };');
		}
	}
	classes.log('};');
	classes.log('X3DJSON.Object_'+package.name + ' = new X3DJSON["'+package.name+'"]();');
	classes.log('if (typeof X3DJSON.Object_'+package.name + '.initialize === "function") X3DJSON.Object_'+package.name + '.initialize();');
}

function processSource(lines, classes, package) {
	classes.log('X3DJSON["'+package.name +  '"] = function() {');
	if (typeof lines !== 'undefined') {
		for (var l in lines) {
			lines[l] = lines[l].replace(/[\n\r]/g, "").replace(/\/\/(.*)function/g, '//$1functino');
		}
		var functions = lines.join("\n").split("function");
		var f;

		var fxns = [];

		// everything before the first function
		classes.log(functions[0]);

		for (var f = 1; f < functions.length; f++) {  // skip ecmascript:
			var func = functions[f];
			var sp = func.indexOf('(');
			var end = func.lastIndexOf('}');

			fxns[f-1] = {
				name : func.substr(0, sp).trim(),
				body : func.substr(sp, end+1),
				trail : func.substr(end+1).trim()
			};
			package.functions[fxns[f-1].name] = fxns[f-1].body;
		}

		for (var f1 = 0; f1 < fxns.length; f1++) {
			var name = fxns[f1].name;
			var body = fxns[f1].body;
			var trail = fxns[f1].rail;
			// replace fields in body
			for (var n in package.fields) {
				var pattern = '(\\b)('+n+')(\\b)';
				body = body.replace(new RegExp(pattern, 'g'), "$1this.$2$3");
			}

			// replace function call names in body (not function declarations, see below)
			for (var fv in package.functions) {
				var pattern = '(\\b)('+fv+')(\\b)';
				body = body.replace(new RegExp(pattern, 'g'), "$1this.$2$3");
			}

			// now take this this. of var decls in body
			body = body.replace(/\.this\./g,  "");
			body = body.replace(/\svar\s+this\./g,  " var ");

			// replace constructors with arrays
			// body = body.replace(/new (MF[A-Za-z0-9]+|SFMatrix[A-Za-z0-9]+|SFVec[234][df]|SFRotation|SFColor)[ 	]*\(([^;()]*)\)[ 	]*;/g, "Browser.stringToArray\('$1',[$2]\);");

			//body = body.replace(/&amp;/g, '&');
			//body = body.replace(/&lt;/g, '<');
			//body = body.replace(/&gt;/g, '>');
			classes.log('\tthis.'+name + ' = function ' + body + ';');
			classes.log(trail);
		}
	}
}

if (typeof module === 'object')  {

	module.exports = {
		'processScripts' : processScripts,
		'LOG' : LOG
	};

}
