var protos = {};
var scripts = {};
var currentproto = {};
var defs = {};
var nodeField = {};
var scopecount = 1000;

function setEnv(scope, field, newscope, newfield) {
	//console.log('set', scope, field, newscope, newfield);
	nodeField[scope+field] = [ newscope, newfield ];
}

function getEnv(scope, field) {
	//console.log('get', scope, field, nodeField[scope+field]);
	return nodeField[scope+field];
}

function prototypeExpander(object, scope) {
	var p;
	if (typeof object === "object") {
		for (p in object) {
			if (p.toLowerCase() === 'script') {
				prototypeExpander(object[p], scope);
			} else if (p.toLowerCase() === 'protodeclare') {
				var name = object[p]["@name"];
				protos[name] = object[p];
				currentproto = protos[name];
				prototypeExpander(object[p], scope);
				delete object[p];
			} else if (p.toLowerCase() === 'protointerface') {
				currentproto['interface'] = object[p];
				prototypeExpander(object[p], scope);
			} else if (p.toLowerCase() === 'protobody') {
				currentproto['body'] = object[p];
				prototypeExpander(object[p], scope);
			} else if (p.toLowerCase() === 'protoinstance') {
				var name = object[p]["@name"];
				var def  = object[p]["@DEF"];
				object["Group"] = JSON.parse(JSON.stringify(protos[name]['body']));
				// handle scoping
				body = object["Group"];
				protos[def+name] = body;
				prototypeExpander(body, def+name);
				// assign afterward so we don't get a double name
				body["@DEF"] = def+name;
				defs[def] = def+name;
				// console.log("BODY", JSON.stringify(body));

				// handle field values

				delete object[p];
			} else if (p.toLowerCase() === 'connect') {
				prototypeExpander(object[p], scope);
			} else if (p.toLowerCase() === 'field') {
				prototypeExpander(object[p], scope);
			} else if (p.toLowerCase() === 'is') {
				// console.log(object[p]);
				var connect = object[p]["connect"];
				// since there may be more than on IS in a ProtoBody, we need a scopecount to keep track of each is for declaring new DEFs
				for (var field in connect) {
					setEnv(scope,
					    connect[field]["@protoField"],
					    scope+"IS"+scopecount,
					    connect[field]["@nodeField"]);
					object["@DEF"] = scope+"IS"+scopecount;
				}
				scopecount += 1000;
			} else if (p.toLowerCase() === '@fromnode') {
				var name = object["@fromNode"];
				if (typeof scope !== 'undefined') {
					object["@fromNode"] = name+scope;
				}
				if (typeof defs[name] !== 'undefined') {
					//  This resolves a field to a protobody nodeField
 					var env = getEnv(defs[name], object["@fromField"]);
					object["@fromNode"] = env[0];
					object["@fromField"] = env[1];
				}
				// object[p] is not an object
			} else if (p.toLowerCase() === '@tonode') {
				var name = object["@toNode"];
				if (typeof scope !== 'undefined') {
					object["@toNode"] = name+scope;
				}
				if (typeof defs[name] !== 'undefined') {
					//  This resolves a field to a protobody nodeField
 					var env = getEnv(defs[name], object["@toField"]);
					object["@toNode"] = env[0];
					object["@toField"] = env[1];
				}
				// object[p] is not an object
			} else if (p.toLowerCase() === '@name') {
				var name = object["@name"];
				// object[p] is not an object
			} else if (p.toLowerCase() === '@def') {
				var name = object["@DEF"];
				if (typeof scope !== 'undefined') {
					object["@DEF"] = name+scope;
				}
				// object[p] is not an object
			} else {
				prototypeExpander(object[p], scope);
			}
		}
	}
}

if (typeof module === 'object')  {
        module.exports = prototypeExpander;
}
