var protos = {};
var scripts = {};
var currentproto = {};
var defs = {};
var nodeField = {};
// var scopecount = 1000;

function setEnv(scope, field, newscope, newfield) {
	// console.error('set', scope, field, newscope, newfield);
	nodeField[scope+'__generic__field__'] = newscope;
	nodeField[scope+field] = [ newscope, newfield ];
}

function setIfNotSetEnv(scope, field, newscope, newfield) {
	// console.error('setif', scope, field, newscope, newfield);
	if (typeof nodeField[scope+field] === 'undefined') {
		nodeField[scope+'__generic__field__'] = newscope;
		nodeField[scope+field] = [ newscope, newfield ];
	}
}

function getEnv(scope, field) {
	var obj = nodeField[scope+field];
	if (typeof obj === 'undefined') {
		obj = [nodeField[scope+'__generic__field__'], field]
	}
	// console.error('get', scope, field, obj);
	return obj;
}

function prototypeExpander(object, scope) {
	realPrototypeExpander(object, scope);
	zapIs(object);
}

function zapIs(object) {
	var p;
	if (typeof object === "object") {
		for (p in object) {
			if (p.toLowerCase() === 'is') {
				delete object[p];// no longer need IS
			} else {
				zapIs(object[p]);
			}
		}
	}
}

function realPrototypeExpander(object, scope) {
	var p;
	if (typeof object === "object") {
		for (p in object) {
			if (p.toLowerCase() === 'script') {
				realPrototypeExpander(object[p], scope);
			} else if (p.toLowerCase() === 'protodeclare') {
				var name = object[p]["@name"];
				protos[name] = object[p];
				currentproto = protos[name];
				realPrototypeExpander(object[p], name+scope);
				delete object[p];
			} else if (p.toLowerCase() === 'protointerface') {
				currentproto['interface'] = object[p];
				realPrototypeExpander(object[p], scope);
			} else if (p.toLowerCase() === 'protobody') {
				currentproto['body'] = object[p];
				realPrototypeExpander(object[p], scope);
			} else if (p.toLowerCase() === 'protoinstance') {
				var name = object[p]["@name"];
				var def  = object[p]["@DEF"];
				object["Group"] = JSON.parse(JSON.stringify(protos[name]['body']));
				// handle scoping
				body = object["Group"];
				protos[def+name] = body;
				realPrototypeExpander(body, def+name);
				// assign afterward so we don't get a double name
				body["@DEF"] = def+name;
				body["@id"] = def+name;
				defs[def] = def+name+scope;
				// console.log("BODY", JSON.stringify(body));

				delete object[p];
			} else if (p.toLowerCase() === 'connect') {
				realPrototypeExpander(object[p], scope);
			} else if (p.toLowerCase() === 'fieldvalue') {
/*
				var name = object["@name"];
				var def  = object["@DEF"];
				var fields = object[p];
				for (var field in fields) {
					// merely put it in the environment so it will be found
					setEnv(def+name,
					    fields[field]["@name"],
					    def+name,
					    fields[field]["@name"]);
				}
*/
				realPrototypeExpander(object[p], scope);
			} else if (p.toLowerCase() === 'field') {
				var fields = object[p];
				for (var field in fields) {
					// merely put it in the environment so it will be found
					setIfNotSetEnv(scope,
					    fields[field]["@name"],
					    scope,
					    fields[field]["@name"]);
				}
				realPrototypeExpander(object[p], scope);
			} else if (p.toLowerCase() === 'is') {
				var def = object["@DEF"];
				var connect = object[p]["connect"];
				//console.error('connect');
				for (var field in connect) {
					//console.error(connect[field]);
					setEnv(scope,
					    connect[field]["@protoField"],
					    def,
					    connect[field]["@nodeField"]);
				}
			} else if (p.toLowerCase() === '@fromnode') {
				var name = object["@fromNode"];
				if (typeof scope !== 'undefined') {
					object["@fromNode"] = name+scope;
				}
				env = [];
				if (typeof defs[name] !== 'undefined') {
					// console.error("FROM ENV", scope, name, defs[name], env);
 					var env = getEnv(defs[name], object["@fromField"]);
					if (typeof env !== 'undefined') {
						object["@fromNode"] = env[0];
						object["@fromField"] = env[1];
					}
				}
				// object[p] is not an object
			} else if (p.toLowerCase() === '@tonode') {
				var name = object["@toNode"];
				if (typeof scope !== 'undefined') {
					object["@toNode"] = name+scope;
				}
				env = [];
				if (typeof defs[name] !== 'undefined') {
					// console.error("TO ENV", scope, name, defs[name], env);
 					var env = getEnv(defs[name], object["@toField"]);
					if (typeof env !== 'undefined') {
						object["@toNode"] = env[0];
						object["@toField"] = env[1];
					}
				}
				// object[p] is not an object
			} else if (p.toLowerCase() === '@name') {
				var name = object["@name"];
				// object[p] is not an object
			} else if (p.toLowerCase() === '@def') {
				var def = object["@DEF"];
				if (typeof scope !== 'undefined') {
					object["@DEF"] = def+scope;
					object["@id"] = def+scope;
					setEnv(def,
					    '',
					    def+scope,
					    '');
				}
				// object[p] is not an object
			} else {
				realPrototypeExpander(object[p], scope);
			}
		}
	}
}

if (typeof module === 'object')  {
        module.exports = prototypeExpander;
}
