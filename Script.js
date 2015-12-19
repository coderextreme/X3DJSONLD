// X3D JSON Prototype preprocessor

var content = '';
// read content into buffer
process.stdin.resume();
process.stdin.on('data', function(buf) { content += buf.toString(); });

function Script(package, name) {
	this.initializers = [];
	this.getters = {};
	this.setters = {};
	this.values = {};
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
				processScripts(object[p], clazz, script);
			} else if (p.toLowerCase() === 'route') {
				processRoutes(object[p], clazz, package);
			} else if (p.toLowerCase() === 'field' && object['@language'] !== 'GLSL') {
				processFields(object[p], package);
				clazz.push('var ' +  package.name +  ' = function(' +  package.initializers.join(', ') + ') {');
					clazz.push('var that = this;');
					clazz.push('this.setters = {};');
					clazz.push('this.getters = {};');
					for (var v in package.values) {
						if (package.types[v].indexOf("MF") === 0) {
							clazz.push('var that.' + v + ' = ['+ package.values[v] + '];');
						} else {
							clazz.push('var that.' + v + ' = '+ package.values[v] + ';');
						}
					
					}
					for (var v in package.getters) {
						clazz.push('this.getters.' + v +  ' = function () { return that.' +  v +  '; };');
					
					}
				processSource(object['#sourceText'], clazz, package);
				clazz.push('}');
				processScripts(object[p], clazz, package);
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

function processRoutes(routes, clazz, package) {
	clazz.push("this.runRoute = function() {");
	var r;
	for (r in routes) {
		var route = routes[r];
		var fromNode = route["@fromNode"];
		var fromField = route["@fromField"];
		var toNode = route["@toNode"];
		var toField = route["@toField"];
		clazz.push(package.name+'.this.'+toNode+'.setters.'+toField+'('+package.name+'.this.'+fromNode+'.getters.'+fromField+'());');
	}
	clazz.push("};");
}

function processFields(fields, package) {
	var f;
	for (f in fields) {
		var object = fields[f];
		var name = object["@name"];
		package.types[name] = object["@type"];
		switch(object['@accessType']) {
		case 'initializeOnly':
			// these should be in order, so it's an array
			package.initializers.push(name);
			package.values[name] = object["@value"];
			break;
		case 'inputOutput':
			// setters should be looked up by name
			package.setters[name] = object;
			package.getters[name] = object;
			package.values[name] = object["@value"];
			break;
		case 'inputOnly':
			// setters should be looked up by name
			package.setters[name] = object;
			package.values[name] = object["@value"];
			break;
		case 'outputOnly':
			break;
			package.getters[name] = object;
		default:
			break;
		}
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
			clazz.push(funcvar + ' = function ' + func.substr(sp));
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
