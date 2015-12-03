// X3D JSON Prototype preprocessor

var content = '';
// read content into buffer
process.stdin.resume();
process.stdin.on('data', function(buf) { content += buf.toString(); });

var instancecount = 0;

function Package(package, name) {
	this.initializers = [];
	this.getters = [];
	this.setters = [];
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

Package.prototype.find = function (name) {
	if (typeof this.packages[name] === 'undefined') {
		// there is no package, so global package
		return new Package(undefined, name);
	} else {
		return this.packages[name];
	}
}


function processPrototypes(object, clazz, package) {
	var p;
	if (typeof object === "object") {
		for (p in object) {
			var name = object[p]["@name"];
			if (typeof name === 'undefined') {
				name = object[p]["@DEF"];
			}
			if (p.toLowerCase() === 'script') {
				var script = new Package(package, name);
				processPrototypes(object[p], clazz, script);
			} else if (p.toLowerCase() === 'protodeclare') {
				var proto = new Package(package, name);
				processPrototypes(object[p], clazz, proto);
				clazz.unshift('var ' +  proto.name +  ' = function(' +  proto.initializers.join(', ') + ') {');
				clazz.push('}');
/* No ProtoInterface in X3DJON see protodeclare
				package.pop();
			} else if (p.toLowerCase() === 'protointerface') {
				processPrototypes(object[p], clazz, package);
*/
			} else if (p.toLowerCase() === 'protobody') {
				processPrototypes(object[p], clazz, package);
			} else if (p.toLowerCase() === 'protoinstance') {
				var proto = package.find(name);
				clazz.push('var ' + proto.name+instancecount + ' = new ' + name+ '(' + proto.initializers.join(', ') + ');');
				processPrototypes(object[p], clazz, package);
				instancecount += 1;
			} else if (p.toLowerCase() === 'connect') {
				processPrototypes(object[p], clazz, package);
			} else if (p.toLowerCase() === 'field') {
				var setters = [];
				var getters = [];
				processFields(object[p], package);
				clazz.push('var ' +  package.name +  ' = function(' +  package.initializers.join(', ') + ') {');
					clazz.push('var that = this;');
					if (setters.length > 0) {
						clazz.push('this.setters = {};');
					}
					if (getters.length > 0) {
						clazz.push('this.getters = {};');
					}
					for (var v in package.initializers) {
						clazz.push('var that.' + package.initializers[v] + ' = '+ package.initializers[v] + ';');
					
					}
					for (var v in package.setters) {
						clazz.push('this.setters.' + package.setters[v] +  ' = function (value) { that.' +  package.setters[v] +  ' = value; };');
					}
					for (var v in package.getters) {
						clazz.push('this.getters.' + package.getters[v] +  ' = function () { return that.' +  package.getters[v] +  '; };');
					
					}
				clazz.push('}');
				processPrototypes(object[p], clazz, package);
			} else if (p.toLowerCase() === 'is') {
				processPrototypes(object[p], clazz, package);
			} else if (p.toLowerCase() === '@fromnode') {
				var name = object["@fromNode"];
				var node = package.find(name);
				object["@fromNode"] = node.name;
				// object[p] is not an object
			} else if (p.toLowerCase() === '@tonode') {
				var name = object["@toNode"];
				var node = package.find(name);
				object["@toNode"] = node.name;
				// object[p] is not an object
			} else if (p.toLowerCase() === '@name') {
				var name = object["@name"];
				// object[p] is not an object
			} else if (p.toLowerCase() === '@use') {
				var name = object["@USE"];
				object["@USE"] = name;
				// object[p] is not an object
			} else if (p.toLowerCase() === '@def') {
				var name = object["@DEF"];
				object["@DEF"] = name;
				// object[p] is not an object
			} else {
				processPrototypes(object[p], clazz, package);
			}
		}
	}
}

function processFields(fields, package) {
	var f;
	for (f in fields) {
		var object = fields[f];
		var name = object["@name"];
		switch(object['@accessType']) {
		case 'initializeOnly':
			package.initializers.push(name);
			break;
		case 'inputOutput':
			package.setters.push(name);
			package.getters.push(name);
			break;
		case 'inputOnly':
			package.setters.push(name);
			break;
		case 'outputOnly':
			break;
			package.getters.push(name);
		default:
			break;
		}
	}
}

process.stdin.on('end', function() {
	var object = JSON.parse(content);
	var clazz = [];
	processPrototypes(object, clazz, new Package());
	console.log(clazz.join('\n'));
	//console.log(JSON.stringify(object, null, 2));
});
