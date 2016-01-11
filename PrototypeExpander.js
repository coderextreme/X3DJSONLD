var protos = {};
var defs = {};
var nodeField = {};
var protoField = {};
var interfaceField = {};
var scopecount = 0;

function setObjectPlaceHolder(scope, field, object, objectfield) {
	// console.error("setoph", scope, field, object, objectfield);
	protoField[scope+field] = [ object, objectfield ];
	// set default value
	if (typeof interfaceField[scope+field] !== 'undefined') {
		var fields = object["field"];
		for  (var f in fields) {
			if (objectfield === fields[f]["@name"]) {
				fields[f]["@value"] = interfaceField[scope+field];
				break;
			}
		}
	}
}

function setObjectInterface(scope, field, value) {
	// console.error("setoi", scope, field, value);
	interfaceField[scope+field] = value;
}

function setObjectValue(scope, field, value) {
	// console.error("setov", scope, field, value);
	var obj = protoField[scope+field];
	if (typeof obj !== 'undefined') {
		if (obj[1] === 'value' || field.indexOf("set_") === 0) {
			obj[0]['@'+obj[1]] = value;
			retval = true;
		} else {
			scope = obj[0]["@DEF"];
			field = obj[1];
			// console.error("recurse", obj, value);
			var retval = setObjectValue(scope, field, value);
			if (!retval) {
				// if the recursion didn't set it, set it now
				obj[0]['@'+obj[1]] = value;
				retval = true;
			}
		}
		return retval;
	} else {
		return false;
	}
}

function setEnv(scope, field, newscope, newfield) {
	// console.error("sete", scope, field, newscope, newfield);
	nodeField[scope+'__generic__field__'] = newscope;
	nodeField[scope+field] = [ newscope, newfield ];
}

function setIfNotSetEnv(scope, field, newscope, newfield) {
	// console.error("setinse", scope, field, newscope, newfield);
	if (typeof nodeField[scope+field] === 'undefined') {
		nodeField[scope+'__generic__field__'] = newscope;
		nodeField[scope+field] = [ newscope, newfield ];
	}
}

function getEnv(scope, field) {
	// console.error("gete", scope, field);
	var obj = nodeField[scope+field];
	if (typeof obj === 'undefined') {
		obj = [nodeField[scope+'__generic__field__'], field]
	}
	return obj;
}

function prototypeExpander(object, scope) {
	realPrototypeExpander(object, scope);
	zap(object);
}

function zap(object) {
	var p;
	if (typeof object === "object") {
		for (p in object) {
			if (p.toLowerCase() === 'is') {
				delete object[p];// no longer need IS
			} else if (p.toLowerCase() === 'protodeclare') {
				delete object[p];// no longer need PROTO
			} else if (p.toLowerCase() === 'protoinstance') {
				delete object[p];// no longer need INSTANCE
			} else {
				zap(object[p]);
			}
		}
	}
}

function realPrototypeExpander(object, scope) {
	var p;
	if (typeof object === "object") {
		for (p in object) {
			if (p.toLowerCase() === 'script') {
				var def  = object[p]["@DEF"];
				var fields  = object[p]["field"];
				for (var field in fields) {
					setObjectPlaceHolder(scope+def,
					    fields[field]["@name"],
					    fields[field],
					    "value");
				}
				realPrototypeExpander(object[p], scope);
			} else if (p.toLowerCase() === 'protodeclare') {
				var name = object[p]["@name"];
				protos[name] = object[p];
				realPrototypeExpander(object[p], scope+name);
			} else if (p.toLowerCase() === 'protointerface') {
				var fields = object[p]["field"];
				for (var field in fields) {
					setObjectInterface(scope,
					    fields[field]["@name"],
					    fields[field]["@value"]);
				}
				realPrototypeExpander(object[p], scope);
			} else if (p.toLowerCase() === 'protobody') {
				realPrototypeExpander(object[p], scope);
			} else if (p.toLowerCase() === 'protoinstance') {
				var name = object[p]["@name"];
				var def  = object[p]["@DEF"];
				if (typeof def === 'undefined') {
					scopecount += 1000;
					if (scopecount > 0) {
						def = scopecount;
					} else {
						def = "";
					}

				}
				// console.error('Proto', name, protos[name]['ProtoBody']);
				object["Group"] = JSON.parse(JSON.stringify(protos[name]['ProtoBody']));
				body = object["Group"];
				realPrototypeExpander(body, scope+name+def);

				var fieldValue = object[p]["fieldValue"];
				for (var field in fieldValue) {
					setObjectValue(scope+name+def,
					    fieldValue[field]["@name"],
					    fieldValue[field]["@value"]);
				}

				// handle scoping
				body["@DEF"] = scope+name+def;
				body["@class"] = scope+name+def;
				defs[def] = scope+name+def;
			} else if (p.toLowerCase() === 'connect') {
				realPrototypeExpander(object[p], scope);
			} else if (p.toLowerCase() === 'fieldvalue') {
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
					setObjectPlaceHolder(scope,
					    connect[field]["@protoField"],
					    object,
					    connect[field]["@nodeField"]);
				}
			} else if (p.toLowerCase() === '@fromnode') {
				var name = object["@fromNode"];
				if (typeof scope !== 'undefined') {
					object["@fromNode"] = scope+name;
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
					object["@toNode"] = scope+name;
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
					object["@DEF"] = scope+def;
					object["@class"] = scope+def;
					setEnv(def,
					    '',
					    scope+def,
					    '');
				}
				// object[p] is not an object
			} else if (p.toLowerCase() === '@use') {
				var use = object["@USE"];
				object["@USE"] = scope+use;
			} else {
				realPrototypeExpander(object[p], scope);
			}
		}
	}
}

if (typeof module === 'object')  {
        module.exports = prototypeExpander;
}
