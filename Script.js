// X3D JSON Prototype preprocessor

var content = '';
// read content into buffer
process.stdin.resume();
process.stdin.on('data', function(buf) { content += buf.toString(); });

function Script(package, name) {
	this.setters = {};
	this.types = {};
	this.packages = {};
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
		package.packages[name] = this;
	}
	// initialize children packages
	// add package to parent so you can find the package without full path
}

Script.prototype.find = function (name) {
	if (typeof this.packages[name] === 'undefined') {
		// there is no package, so global package
		return new Script(undefined, name);
	} else {
		return this.packages[name];
	}
}


function processScripts(object, clazz, package) {
	var p;
	if (typeof object === "object") {
		for (p in object) {
			var name = object[p]["@name"];
			if (typeof name === 'undefined') {
				name = object[p]["@DEF"];
			}
			if (p.toLowerCase() === 'script') {
				var script = new Script(package, name);
				processFields(object[p]['field'], clazz, script);
				processSource(object[p]['#sourceText'], clazz, script);
				clazz.push('}');
				processScripts(object[p], clazz, script);
			} else if (p.toLowerCase() === 'route') {
				processRoutes(object[p], clazz, package);
			} else if (p.toLowerCase() === '@use') {
				var name = object["@USE"];
				object["@USE"] = name;
				// object[p] is not an object
			} else if (p.toLowerCase() === '@def') {
				var name = object["@DEF"];
				object["@DEF"] = name;
				// object[p] is not an object
			} else {
				processScripts(object[p], clazz, package);
			}
		}
	}
}

var routecount = 0;

function processRoutes(routes, clazz, package) {
	if (routecount === 0) {
		clazz.push("var runRoutes = [];");
	}
	clazz.push("runRoutes["+routecount+"] = function() {");
	routecount++;
	var r;
	for (r in routes) {
		var route = routes[r];
		var fromNode = route["@fromNode"];
		var fromField = route["@fromField"];
		var toNode = route["@toNode"];
		var toField = route["@toField"];
		if (package.name) {
			clazz.push(package.name+'.this.'+toNode+'.setters.'+toField+'('+package.name+'.this.'+fromNode+'.getters.'+fromField+'());');
		} else {
			clazz.push('\t'+toNode+'.setters.'+toField+'('+fromNode+'.getters.'+fromField+'());');
		}
	}
	clazz.push("};");
}

function processFields(fields, clazz, package) {
	var f;
	var initializers = [];
	var getters = {};
	var values = {};
	var indent = '\t';
	for (f in fields) {
		var object = fields[f];
		var name = object["@name"];
		package.types[name] = object["@type"];
		switch(object['@accessType']) {
		case 'initializeOnly':
			// these should be in order, so it's an array
			initializers.push(name);
			values[name] = object["@value"];
			break;
		case 'inputOutput':
			// setters should be looked up by name
			package.setters[name] = object;
			getters[name] = object;
			values[name] = object["@value"];
			break;
		case 'inputOnly':
			// setters should be looked up by name
			package.setters[name] = object;
			values[name] = object["@value"];
			break;
		case 'outputOnly':
			break;
			getters[name] = object;
		default:
			break;
		}
	}

	clazz.push('var ' +  package.name +  ' = function(' +  initializers.join(', ') + ') {');
	clazz.push(indent+'var that = this;');
	clazz.push(indent+'this.setters = {};');
	clazz.push(indent+'this.getters = {};');
	for (var v in values) {
		// clazz.push(package.types[v]);
		if (package.types[v].indexOf("MF") === 0 || package.types[v].indexOf("SFVec") === 0) {
			clazz.push(indent+'that.' + v + ' = ['+ values[v] + '];');
		} else {
			clazz.push(indent+'that.' + v + ' = '+ values[v] + ';');
		}
	}
	for (var v in getters) {
		clazz.push(indent+'this.getters.' + v +  ' = function () { return that.' +  v +  '; };');
	}
}

function processSource(lines, clazz, package) {
	if (typeof lines !== 'undefined') {
		var functions = lines.join("\n").split("function");
		var f;
		for (var f = 1; f < functions.length; f++) {  // skip ecmascript:
			var func = functions[f];
			var sp = func.indexOf('(');
			var name = func.substr(0, sp).trim();
			var funcvar = 'this.' + name;  //  a non setter function
			if (typeof package.setters[name] !== 'undefined') {
				funcvar = 'this.setters.' + name; // a setter function
			}
			clazz.push('\t'+funcvar + ' = function ' + func.substr(sp));
		}
	}
}

process.stdin.on('end', function() {
	var object = JSON.parse(content);
	var clazz = [];
	processScripts(object, clazz, new Script());
	console.log(clazz.join('\n'));
	//console.log(JSON.stringify(object, null, 2));
});
