var protos = {};
var defs = {};
var names = {};
var nodeField = {};
var protoField = {};
var scriptField = {};
var interfaceField = {};
var scopecount = 0;
var defdefined = {};

function setScript(scope, field, object, objectfield) {
	// console.error("setscript", scope, field, object, objectfield);
	//console.error("setmeta ", scope, field);
	// scriptField[scope+field] = [ object, objectfield ];
	if (typeof scriptField[scope+field] === 'undefined') {
		scriptField[scope+field] = [];
	}
	scriptField[scope+field][scriptField[scope+field].length] = [ object, objectfield ];
	// set default value
	if (typeof interfaceField[scope+field] !== 'undefined') {
		var fields = object["field"];
		for  (var f in fields) {
			if (objectfield === fields[f]["@name"]) {
				fields[f]["@value"] = getInterface(scope,field);
				break;
			}
		}
	}
}

function setConnect(scope, field, object, objectfield) {
	// console.error("setconn", scope, field, object, objectfield);
	// protoField[scope+field] = [ object, objectfield ];
	if (typeof protoField[scope+field] === 'undefined') {
		protoField[scope+field] = [];
	}
	protoField[scope+field][protoField[scope+field].length] = [ object, objectfield ];
	// set default value
	if (typeof interfaceField[scope+field] !== 'undefined') {
		var fields = object["field"];
		for  (var f in fields) {
			if (objectfield === fields[f]["@name"]) {
				fields[f]["@value"] = getInterface(scope,field);
				break;
			}
		}
	}
}

function getInterface(scope, field) {
	var value = interfaceField[scope+field];
	// console.error("getinter", scope, field, value);
}

function setInterface(scope, field, value) {
	interfaceField[scope+field] = value;
	// console.error("setinter", scope, field, value);
}

function setObjectValues(scope, field, fieldOrNode, value) {
	// console.error("looking for ",scope+field);
	var found = false;
	for (var sf in scriptField[scope+field]) {
		var obj = scriptField[scope+field][sf];
		if (typeof obj !== 'undefined') {
			// console.error("foundscriptvalue", scope, field, obj, fieldOrNode, value);
			setObjectValue(scope, field, obj, fieldOrNode, value);
			found = true;
		} else {
			// console.error("scriptundef", scope, field);
		}
	}
	for (var pf in protoField[scope+field]) {
		var obj = protoField[scope+field][pf];
		if (typeof obj !== 'undefined') {
			// console.error("foundprotovalue", scope, field, obj, fieldOrNode, value);
			setObjectValue(scope, field, obj, fieldOrNode, value);
			found = true;
		} else {
			// console.error("protoundef", scope, field);
		}
	}
	return found;
}

function setObjectValue(scope, field, obj, fieldOrNode, value) {
	var retval = false;
	var newscope = obj[0]["@DEF"];
        if (typeof newscope !== 'undefined' && scope != newscope) {
		field = obj[1];
		// console.error("setrecurse", newscope, field, obj, fieldOrNode, value);
		retval = setObjectValues(newscope, field, fieldOrNode, value);
		if (retval) {
			return;
		} else {
			// console.error("Didn't find it");
		}
	}
	// if the recursion didn't set it, set it now
	// console.error("found", fieldOrNode+obj[1], '=', value);
	obj[0][fieldOrNode+obj[1]] = value;
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
			} else if (p.toLowerCase() === 'externprotodeclare') {
				delete object[p];// no longer need PROTO
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

if (typeof require === 'function') {
	var fs = require("fs");
}

function loadedUrl(data, object, p, field) {
	if (typeof data !== 'undefined') {
		object[p][field] = data;
		delete object[p]["@url"];
	}
}
function loadUrl(url, object, p, field) {
	if (typeof url !== 'undefined') {
		for (var u in url) {
			if (typeof $ !== 'undefined' && url[u].indexOf("http") === 0) {
				console.error("Loading URL", url[u]);
				$.get(url[u], function(data) {
					loadedUrl(data, object, p, field);
				});
			} else if (typeof fs !== 'undefined' && url[u].indexOf("http") != 0) {
				console.error("Loading File", url[u]);
				data = fs.readFileSync(url[u]);
				if (typeof data !== 'undefined') {
					data = data.toString().replace(/"/, "\"").split("\n");
					loadedUrl(data, object, p, field);
				}
			} else if (typeof $ !== 'undefined') {
				console.error("Loading URL", url[u]);
				$.get(url[u], function(data) {
					loadedUrl(data, object, p, field);
				});
			} else {
				console.error("Didn't load", url[u]);
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
				var url  = object[p]["@url"];
				var fields  = object[p]["field"];
				for (var field in fields) {
					setScript(scope+def,
					    fields[field]["@name"],
					    fields[field],
					    "value");
				}
				loadUrl(url, object, p, "#sourceText");
				realPrototypeExpander(object[p], scope);
			} else if (p.toLowerCase() === 'protodeclare') {
				var name = object[p]["@name"];
				var def = object[p]["@DEF"];
				protos[name] = object[p];
				if (typeof object[p]["@appinfo"] !== 'undefined') {
					protos[name]["@appinfo"] = object[p]["@appinfo"];
				}
				if (typeof object[p]["@documentation"] !== 'undefined') {
					protos[name]["@documentation"] = object[p]["@documentation"];
				}
				names[def] = name;
				realPrototypeExpander(object[p], scope+name);
			} else if (p.toLowerCase() === 'protointerface') {
				var fields = object[p]["field"];
				for (var field in fields) {
					setInterface(scope,
					    fields[field]["@name"],
					    fields[field]["@value"]);
				}
				// realPrototypeExpander(object[p], scope);
			} else if (p.toLowerCase() === 'protobody') {
				realPrototypeExpander(object[p], scope);
			} else if (p.toLowerCase() === 'protoinstance') {
				var name = object[p]["@name"];
				var def  = object[p]["@DEF"];
				var use  = object[p]["@USE"];
				if (typeof def === 'undefined') {
					scopecount += 1000;
					if (scopecount > 0) {
						def = scopecount;
					} else {
						def = "";
					}

				}
				names[def] = name;
				if (typeof name === 'undefined' && typeof use !== 'undefined') {
					name = names[use];
				}
				object["Group"] = {};
				if (typeof protos[name]['ProtoBody'] !== 'undefined') {
					object["Group"] = JSON.parse(JSON.stringify(protos[name]['ProtoBody']));
				} else {
					console.error("ProtoBody undefined for", name);
				}
				body = object["Group"];
				if (typeof protos[name]["@appinfo"] !== 'undefined') {
					body["@appinfo"] = protos[name]["@appinfo"];
				}
				if (typeof protos[name]["@documentation"] !== 'undefined') {
					body["@documentation"] = protos[name]["@documentation"];
				}
				if (typeof use !== 'undefined') {
					body["@USE"] = use;
					//console.error("Use is", use);
				}
				body["@DEF"] = def;
				body["@class"] = def;
				var newscope = scope+name+def;
				defs[def] = newscope;
				//console.error('BEFORE', body["@USE"]);
				realPrototypeExpander(body, newscope);
				//console.error('AFTER ', body["@USE"]);

				var fieldValue = object[p]["fieldValue"];
				for (var field in fieldValue) {
					var fv = fieldValue[field];
					var name = fieldValue[field]["@name"];
					var value = fieldValue[field]["@value"];
					var fieldOrNode = "@";
					for (var nv in fv) {
						if (nv === '@name') {
							name = fv[nv];
						} else {
							fieldOrNode = nv.substr(0, 1);
							value = fv[nv];
							realPrototypeExpander(fv, scope+name+def);
							// zap(fv); // zap instances
							// console.error('>   ', JSON.stringify(fv));
						}
					}
					setObjectValues(newscope,
					    name,
					    fieldOrNode,
					    value);
				}
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
				// console.error('connect', scope);
				for (var field in connect) {
					//console.error(connect[field]);
					setEnv(scope,
					    connect[field]["@protoField"],
					    def,
					    connect[field]["@nodeField"]);
					setConnect(scope,
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
 				var env = getEnv(use, '');
				if (typeof env !== 'undefined') {
					object["@USE"] = env[0];
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
