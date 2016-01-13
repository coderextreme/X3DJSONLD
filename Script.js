// X3D JSON Script expander
packages = {};

function Script(package, name) {
	this.setters = {};
	this.getters = {};
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
		classes.push('var X3DJSON = {};');
		routecode.push("if (typeof $ === 'undefined') {");
		routecode.push("	$ = function(selector) { return {");
		routecode.push("		attr : function(attr, value) {");
		routecode.push("			if (arguments.length > 1) {");
		routecode.push("				console.error('set', attr, '=', value);");
		routecode.push("			} else {");
		routecode.push("				console.error('get', attr); }");
		routecode.push("			}");
		routecode.push("}}}");
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
				processFields(object[p]['field'], classes, script);
				processSource(object[p]['#sourceText'], classes, script);
				// zap original source because we don't need it
				processScripts(object[p], classes, script, routecode);
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

function processRoute(route, classes, package) {
	var fromNode = route["@fromNode"];
	var fromField = route["@fromField"];
	var toNode = route["@toNode"];
	var toField = route["@toField"];
	if (typeof package.find(toNode) === 'undefined') {
		classes.push('	if (!$(".'+toNode+'")) console.error("undefined '+toNode+'");');
		if (toField.indexOf("set_") === 0) {
			var  to = '$(".'+toNode+'").attr("'+toField.substr(4)+'",';
		} else {
			var  to = '$(".'+toNode+'").attr("'+toField+'",';
		}
	} else {
		var  to = 'X3DJSON.Object_' +toNode+'.'+toField+'(';
	}
	if (typeof package.find(fromNode) === 'undefined') {
		classes.push('	if (!$(".'+fromNode+'")) console.error("undefined '+fromNode+'");');
		if (fromField.indexOf("_changed") > 0) {
			var  from = '$(".'+fromNode+'").attr("'+fromField.substr(0, fromField.length-8)+'")';
		} else {
			var  from = '$(".'+fromNode+'").attr("'+fromField+'")';
		}
	} else {
		if (fromField.indexOf("_changed") > 0) {
			var from = 'X3DJSON.Object_' +fromNode+'.'+fromField+'()';
		} else {
			var from = 'X3DJSON.Object_' +fromNode+'.'+fromField+'_changed()';
		}
	}
	classes.push('\t'+to+from+');');
}

function valueExpand(type, flat) {
	if (!flat) {
		return flat;
	}
	if (type.indexOf("MF") === 0) {
		console.error("/*", type, "*/");
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
			return flat;
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
function processFields(fields, classes, package) {
	var f;
	var initializers = [];
	var values = {};
	var indent = '\t';
	var types = {};
	for (f in fields) {
		var object = fields[f];
		var name = object["@name"];
		types[name] = object["@type"];
		values[name] = valueExpand(types[name], object["@value"]);
		switch(object['@accessType']) {
		case 'initializeOnly':
			// these should be in order, so it's an array
			initializers.push(name);
			break;
		case 'inputOutput':
			// setters should be looked up by name
			package.setters[name] = object;
			package.getters[name] = object;
			break;
		case 'inputOnly':
			// setters should be looked up by name
			package.setters[name] = object;
			break;
		case 'outputOnly':
			package.getters[name] = object;
			break;
		default:
			break;
		}
	}

	classes.push('X3DJSON.'+package.name +  ' = function() {');
	for (var v in values) {
		// initializers
		classes.push(indent + "this." + v + ' = '+ values[v] + ';');
		// setables
		if (v.indexOf("set_") === 0) {
		       classes.push(indent+ "this." + v + ' = function (value) { if (value) this.' + v +  ' = (value.indexOf(",") >= 0 ? value.split(",") : value); };');
		} else {
		       classes.push(indent+ "this.set_" + v + ' = function (value) { if (value) this.' + v +  ' = (value.indexOf(",") >= 0 ? value.split(",") : value); };');
		}
		// getables
		if (v.indexOf("_changed") > 0) {
                	classes.push(indent+ "this." + v + ' = function () { return this.' + v +  '; };');
		} else {
                	classes.push(indent+ "this." + v + '_changed = function () { return this.' + v +  '; };');
		}
	}
}

function processSource(lines, classes, package) {
	if (typeof lines !== 'undefined') {
		var functions = lines.join("\n").split("function");
		var f;
		for (var f = 1; f < functions.length; f++) {  // skip ecmascript:
			var func = functions[f];
			var sp = func.indexOf('(');
			var name = func.substr(0, sp).trim();
			var funcvar = name;  //  a non setter function
			if (typeof package.setters[name] !== 'undefined') {
				funcvar = name; // a setter function
			}
			var body = func.substr(sp);
			for (var n in package.getters) {
				var pattern = "\\b"+n+"\\b";
				body = body.replace(new RegExp(pattern, 'g'), "this."+n);
				body = body.replace(/[^\.]initialize\(\)/g, "this.initialize()");
				body = body.replace(/new (MF[A-Za-z0-9]+|SFMatrix[A-Za-z0-9]+|SFVec[234][df]|SFRotation)[ 	]*\(([^;]*)\)[ 	]*;/g, 'Browser.stringToArray\([$2]\);');
				//body = body.replace(/&amp;/g, '&');
				//body = body.replace(/&lt;/g, '<');
				//body = body.replace(/&gt;/g, '>');
			}
			classes.push('\tthis.'+funcvar + ' = function ' + body + ';');
		}
	}
	classes.push('};');
	classes.push('X3DJSON.Object_'+package.name + ' = new X3DJSON.'+package.name+'();');
	classes.push('if (typeof X3DJSON.Object_'+package.name + '.initialize === "function") X3DJSON.Object_'+package.name + '.initialize();');
}

if (typeof module === 'object')  {

	module.exports = {
		'processScripts' : processScripts
	};

}
