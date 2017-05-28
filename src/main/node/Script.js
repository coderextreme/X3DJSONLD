// X3D JSON Script expander
var packages = {};

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

function Script(mypackage, name) {
	// this.setters = {};
	// this.getters = {};
	this.fields = {};
	this.functions = {};
	if (typeof mypackage === 'undefined' || mypackage.name === "") {
		if (typeof name === 'undefined') {
			this.name = "";
		} else {
			this.name = name;
		}
	} else {
		if (typeof name === 'undefined') {
			this.name = mypackage.name;
		} else {
			this.name = mypackage.name+'.'+(name.replace(/\./g, ":"));
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

function processScripts(object, classes, mypackage, routecode, loopItems) {
	classes.log("var MFBool = x3dom.fields.MFBoolean;");
	classes.log("var MFColor = x3dom.fields.MFColor;");
	classes.log("var MFColorRGBA = x3dom.fields.MFColorRGBA;");
	classes.log("var MFDouble = function() { return Array.prototype.slice.call(arguments, 0); };");
	classes.log("var MFFloat = x3dom.fields.MFFloat;");
	classes.log("var MFImage = function() { return Array.prototype.slice.call(arguments, 0); };");
	classes.log("var MFInt32 = x3dom.fields.MFInt32;");
	classes.log("var MFMatrix3d = function() { return Array.prototype.slice.call(arguments, 0); };");
	classes.log("var MFMatrix3f = function() { return Array.prototype.slice.call(arguments, 0); };");
	classes.log("var MFMatrix4d = function() { return Array.prototype.slice.call(arguments, 0); };");
	classes.log("var MFMatrix4f = function() { return Array.prototype.slice.call(arguments, 0); };");
	classes.log("var MFNode = x3dom.fields.MFNode;");
	classes.log("var MFRotation = x3dom.fields.MFRotation;");
	classes.log("var MFString = x3dom.fields.MFString;");
	classes.log("var MFTime = function() { return Array.prototype.slice.call(arguments, 0); };");
	classes.log("var MFVec2d = function() { return Array.prototype.slice.call(arguments, 0); };");
	classes.log("var MFVec2f = x3dom.fields.MFVec2f;");
	classes.log("var MFVec3d = function() { return Array.prototype.slice.call(arguments, 0); };");
	classes.log("var MFVec3f = x3dom.fields.MFVec3f;");
	classes.log("var MFVec4d = function() { return Array.prototype.slice.call(arguments, 0); };");
	classes.log("var MFVec4f = function() { return Array.prototype.slice.call(arguments, 0); };");

	classes.log("SFBool = Boolean;");

	classes.log("var SFColor = x3dom.fields.SFColor;");
	classes.log("var SFColorRGBA = x3dom.fields.SFColorRGBA;");

	classes.log("SFDouble = Number;");
	classes.log("SFFloat = Number;");
	classes.log("SFInt32 = Number;");

	classes.log("var SFImage = x3dom.fields.SFImage;");
	classes.log("var SFMatrix3d = function() { return Array.prototype.slice.call(arguments, 0); };");
	classes.log("var SFMatrix3f = function() { return Array.prototype.slice.call(arguments, 0); };");
	classes.log("var SFMatrix4d = function() { return Array.prototype.slice.call(arguments, 0); };");
	classes.log("var SFMatrix4f = x3dom.fields.SFMatrix4f;");
	classes.log("var SFNode = x3dom.fields.SFNode;");
	classes.log("var SFRotation = x3dom.fields.Quaternion;");

	classes.log("SFString = String;");
	classes.log("SFTime = Number;");

	classes.log("var SFVec2d = function() { return Array.prototype.slice.call(arguments, 0); };");
	classes.log("var SFVec2f = x3dom.fields.SFVec2f;");
	classes.log("var SFVec3d = function() { return Array.prototype.slice.call(arguments, 0); };");
	classes.log("var SFVec3f = x3dom.fields.SFVec3f;");
	classes.log("var SFVec4d = function() { return Array.prototype.slice.call(arguments, 0); };");
	classes.log("var SFVec4f = x3dom.fields.SFVec4f;");

	classes.log("if (typeof document === 'undefined') {");
	classes.log("	document = { querySelector : function() {;");
	classes.log("		return {");
	classes.log("			setAttribute : function(field, value) {");
	classes.log("				this[field] = value;");
	classes.log("				console.log('set '+ field+ '='+ value);");
	classes.log("			},");	
	classes.log("			getAttribute : function(field) {");
	classes.log("				var value = this[field];");
	classes.log("				console.log('get '+ field+ '='+ value);");
	classes.log("			}");	
	classes.log("		};");	
	classes.log("	}};");
	classes.log("}");
	realProcessScripts(object, classes, mypackage, routecode, loopItems);
}

function processRoute(route, routecode, mypackage, loopItems) {
	var fromNode = route["@fromNode"];
	var fromField = route["@fromField"];
	var toNode = route["@toNode"];
	var toField = route["@toField"];

	routecode.log(declareX3DJSON('ROUTE', fromNode+":"+fromField+":"+toNode+":"+toField+":FROM"));
	routecode.log(useX3DJSON('ROUTE', fromNode+":"+fromField+":"+toNode+":"+toField+":FROM")+" = new MutationObserver(function(mutations) {");
	routecode.log("		mutations.forEach(function(mutation) {");
	routecode.log("			console.log(mutation, '"+fromField+"');");	
	var from =			 "X3DJSON.nodeUtil('"+fromNode+"','"+fromField+"')";
	var to = 			"X3DJSON.nodeUtil('"+toNode+"','"+toField+"',";
	routecode.log("			"+to+from+", __eventTime);");
	routecode.log("		});");	
	routecode.log("});");	
	routecode.log("var config = { attributes: true, childList: true, attributeFilter:['"+fromField+"'] };");	
	routecode.log(useX3DJSON('ROUTE', fromNode+":"+fromField+":"+toNode+":"+toField+":FROM")+".observe(X3DJSON.nodeUtil('"+fromNode+"'), config);");

	routecode.log(declareX3DJSON('ROUTE', fromNode+":"+fromField+":"+toNode+":"+toField+":TO"));
	routecode.log(useX3DJSON('ROUTE', fromNode+":"+fromField+":"+toNode+":"+toField+":TO")+" = new MutationObserver(function(mutations) {");
	routecode.log("		mutations.forEach(function(mutation) {");
	routecode.log("			console.log(mutation, '"+toField+"');");	
	var newPackage = new Script(mypackage, toNode);
	var from =			"X3DJSON.nodeUtil('"+fromNode+"','"+fromField+"')"; 
	var to = 			'if (typeof '+useX3DJSON('Obj', newPackage.name)+'.'+toField+' === "function") '+useX3DJSON('Obj', newPackage.name) + '.'+toField+'(';
	routecode.log("			"+to+from+", __eventTime);");
	routecode.log("		});");	
	routecode.log("});");	
	routecode.log("var config = { attributes: true, childList: true, attributeFilter:['"+toField+"'] };");	
	routecode.log(useX3DJSON('ROUTE', fromNode+":"+fromField+":"+toNode+":"+toField+":TO")+".observe(X3DJSON.nodeUtil('"+toNode+"'), config);");
	//if (toField === 'set_fraction') {
		var from =			 "X3DJSON.nodeUtil('"+fromNode+"','"+fromField+"')";
		var to = 			"X3DJSON.nodeUtil('"+toNode+"','"+toField+"',";
		loopItems.log("			"+to+from+", __eventTime);");
	//}
}

function realProcessScripts(object, classes, mypackage, routecode, loopItems) {
	mypackage = mypackage || new Script();
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
				var script = new Script(mypackage, name);
				// console.error("SCRIPT IS ",JSON.stringify(object[p]));
				registerFields(object[p]['field'], classes, script);
				processFields(object[p]['field'], classes, script);
				processSource(object[p]['#sourceText'], classes, script);
				realProcessScripts(object[p], classes, script, routecode, loopItems);
				// zap original source because we don't need it
				// delete object[p]['#sourceText'];
			} else if (p.toLowerCase() === 'route') {
				processRoute(object[p], routecode, mypackage, loopItems);
			} else if (p.toLowerCase() === '@use') {
				var name = object["@USE"];
				object["@USE"] = name;
				// object[p] is not an object
			} else if (p.toLowerCase() === '@def') {
				var name = object["@DEF"];
				object["@DEF"] = name;
				// object[p] is not an object
			} else {
				realProcessScripts(object[p], classes, mypackage, routecode, loopItems);
			}
		}
	}
}

function valueExpand(type, flat) {
	// console.error("TYPE IS "+type);
	var str = JSON.stringify(flat);
	var num = 0; // this will cause an error below if not set
	if (!str) {
		flat = "";
	} else if (type === 'SFBool') {
		flat = str;
	} else if (type === 'SFFloat') {
		flat = str;
	} else if (type === 'SFInt32') {
		flat = str;
	} else if (type === 'SFString'){
		flat = str;
	} else if (type === 'SFTime'){
		flat = str;
	} else if (type === 'SFNode') {
		flat = str;
	} else if (type === 'SFRotation'){
		flat = str.substring(1, str.length-1);
	} else if (type.indexOf('SFColor') === 0){
		flat = str.substring(1, str.length-1);
	} else if (type.indexOf('SFVec') === 0){
		flat = str.substring(1, str.length-1);
	} else if (type.indexOf('SFMatrix') === 0){
		flat = str.substring(1, str.length-1);
	} else if (type.indexOf("MFRotation") === 0) {
		num = 4;
	} else if (type.indexOf("MFColorRGBA") === 0) {
		num = 4;
	} else if (type.indexOf("MFColor") === 0) {
		num = 3;
	} else if (type.indexOf("MFVec2") === 0) {
		num = 2;
	} else if (type.indexOf("MFVec3") === 0) {
		console.log("/* NUM is 3*/", "/*"+flat+"*/");
		num = 3;
	} else if (type.indexOf("MFVec4") === 0) {
		num = 4;
	} else if (type.indexOf("MFMatrix3") === 0) {
		num = 9;
	} else if (type.indexOf("MFMatrix4") === 0) {
		num = 16;
	} else if (flat !== null) {
		flat = str.substring(1, str.length-1);
		return "new "+type+"("+flat+")";  // THIS WILL THROW AN ERROR IF you don't have a value for an outputOnly.  Fill in the type case above
	}

	if (flat !== null && num > 0) {
		value = [];
		var numvec = flat.length / num;
		for (i = 0; i < numvec; i++) {
			var v = [];
			for (j = 0; j < num; j++) {
				v.push(flat[i*num+j]);
			}
			value.push(v);
		}
		flat = JSON.stringify(value);
	}
	return "new "+type+"("+flat+")";
}
function registerFields(fields, classes, mypackage) {
	var f;
	for (f in fields) {
		var object = fields[f];
		var name = object["@name"];
		mypackage.fields[name] = object;
	}
}

function processFields(fields, classes, mypackage) {
	classes.log(declareX3DJSON('Script', mypackage.name));
	classes.log(useX3DJSON('Script', mypackage.name) +  ' = function() {');
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
			// mypackage.setters[name] = object;
			// mypackage.getters[name] = object;
			break;
		case 'inputOnly':
			// setters should be looked up by name
			// mypackage.setters[name] = object;
			break;
		case 'outputOnly':
			// mypackage.getters[name] = object;
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
		if (!mypackage.functions['set_'+v]) {
			// setter
			classes.log(indent + "this.set_" + v + ' = function (value) {');
			classes.log(indent.repeat(2) + "X3DJSON.nodeUtil('"+mypackage.name+"', '"+v+"', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));");
			classes.log(indent + "};");
		}
		if (!mypackage.functions[v+'_changed']) {
			// getter
			classes.log(indent+ "this." + v + '_changed = function () {');
			classes.log(indent.repeat(2) + "var value = X3DJSON.nodeUtil('"+mypackage.name+"', '"+v+"');");
			classes.log(indent.repeat(2) + "return value;");
			classes.log(indent+ "};");
		}
		if (!mypackage.functions[v]) {
			// Initialization
			classes.log(indent + "this.set_"+v+"("+values[v]+");");
		}
	}
}

function declareX3DJSON(type, mypackage) {
	var hier = (type+":"+mypackage).split(/:/);
	var str = "";
	for (var h = 1; h < hier.length; h++) {
		var sub = "X3DJSON['"+hier.slice(0, h).join("']['")+"']";
		str += "if (typeof "+sub+" === 'undefined') {\n";
		str += sub + " = {};\n";
		str += "}\n";
	}
	return str;

}
function useX3DJSON(type, mypackage) {
	var hier = (type+":"+mypackage).split(/:/);
	var str = "X3DJSON['"+hier.slice(0, hier.length).join("']['")+"']";
	return str;
}

function processSource(lines, classes, mypackage) {
	if (typeof lines !== 'undefined') {
		for (var l in lines) {
			lines[l] = lines[l].replace(/[\n\r]/g, "").replace(/\/\/(.*)function/g, '//$1functino');
		}
		var functions = lines.join("\n").replace(/Browser.println/g, "console.error").replace(/Browser.print/g, "console.error").replace(/Browser.createVrmlFromString[^;]*;/g, "new MFNode();").split("function");
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
			mypackage.functions[fxns[f-1].name] = fxns[f-1].body;
		}

		for (var f1 = 0; f1 < fxns.length; f1++) {
			var name = fxns[f1].name;
			var body = fxns[f1].body;
			var trail = fxns[f1].rail;
			// replace fields in body
			for (var n in mypackage.fields) {
				var pattern = '(\\b)('+n+'[ \t\n\r]+)=([^=][^;]*);';
				body = body.replace(new RegExp(pattern, 'g'), "$1this.set_$2($3);");
				pattern = '(\\b)('+n+')[ \t]+([-\+\*\/\|\&\^])=([^;]*);';
				body = body.replace(new RegExp(pattern, 'g'), "$1this.set_$2(this.$2_changed() $3 $4);");
				pattern = "(\\b)("+n+")(\\b)";
				body = body.replace(new RegExp(pattern, 'g'), "$1this.$2_changed()$3");
		 
			}

			// replace function call names in body (not function declarations, see below)
			for (var fv in mypackage.functions) {
				var pattern = '(\\b)('+fv+')(\\b)';
				body = body.replace(new RegExp(pattern, 'g'), "$1this.$2$3");
			}

			// now take this this. of var decls in body
			body = body.replace(/\.this/g,  "");
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
	classes.log('};');
	classes.log(declareX3DJSON('Obj', mypackage.name));
	classes.log(useX3DJSON('Obj', mypackage.name) + ' = new '+ useX3DJSON('Script', mypackage.name) +'();');
	classes.log('if (typeof '+useX3DJSON('Obj',mypackage.name)+'.initialize === "function") '+useX3DJSON('Obj', mypackage.name) + '.initialize();');
}

if (typeof module === 'object')  {

	module.exports = {
		'processScripts' : processScripts,
		'LOG' : LOG
	};

}
