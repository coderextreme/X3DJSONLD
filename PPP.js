// X3D JSON Prototype preprocessor

var content = '';
// read content into buffer
process.stdin.resume();
process.stdin.on('data', function(buf) { content += buf.toString(); });

var protos = {};
var instances = {};
var scripts = {};
var currentproto = {};
var scopecount = 1000;

function processPrototypes(object, scope) {
	var p;
	if (typeof object === "object") {
		for (p in object) {
			if (p.toLowerCase() === 'script') {
				processPrototypes(object[p], scope);
			} else if (p.toLowerCase() === 'protodeclare') {
				var name = object[p]["@name"];
				protos[name] = object[p];
				currentproto = protos[name];
				processPrototypes(object[p], scope);
				delete object[p];
			} else if (p.toLowerCase() === 'protointerface') {
				currentproto['interface'] = object[p];
				processPrototypes(object[p], scope);
			} else if (p.toLowerCase() === 'protobody') {
				currentproto['body'] = object[p];
				processPrototypes(object[p], scope);
			} else if (p.toLowerCase() === 'protoinstance') {
				var name = object[p]["@name"];
				object["Group"] = JSON.parse(JSON.stringify(protos[name]['body']));
				// handle scoping
				body = object["Group"];
				instances[name+scopecount] = body;
				processPrototypes(body, name+scopecount);
				body["@DEF"] = name+scopecount;
				// console.log("BODY", JSON.stringify(body));
				scopecount += 1000;
				delete object[p];
			} else if (p.toLowerCase() === 'connect') {
				processPrototypes(object[p], scope);
			} else if (p.toLowerCase() === 'field') {
				processPrototypes(object[p], scope);
			} else if (p.toLowerCase() === 'is') {
				processPrototypes(object[p], scope);
			} else if (p.toLowerCase() === '@fromnode') {
				var name = object["@fromNode"];
				object["@fromNode"] = name+scope;
				// object[p] is not an object
			} else if (p.toLowerCase() === '@tonode') {
				var name = object["@toNode"];
				object["@toNode"] = name+scope;
				// object[p] is not an object
			} else if (p.toLowerCase() === '@name') {
				var name = object["@name"];
				// object[p] is not an object
			} else if (p.toLowerCase() === '@def') {
				var name = object["@DEF"];
				object["@DEF"] = name+scope;
				// object[p] is not an object
			} else {
				processPrototypes(object[p], scope);
			}
		}
	}
}

process.stdin.on('end', function() {
	var object = JSON.parse(content);
	processPrototypes(object, "");
	console.log(JSON.stringify(object, null, 2));
});
