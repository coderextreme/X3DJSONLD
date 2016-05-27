var protos = {};
var defs = {};
var names = {};
var nodeField = {};
var protoField = {};
var scriptField = {};
var interfaceField = {};
var scopecount = 0;
var defdefined = {};

// var loadURLs = function() {};

function setLoadURLs(func) {
	loadURLs = func;
}

function setScript(scope, field, object, objectfield) {
	// copy the default value;
	object["@"+objectfield] = getInterface(scope,field);
	// console.error("setscript", scope, field, object, objectfield);
	// scriptField[scope+field] = [ object, objectfield ];
	if (typeof scriptField[scope+field] === 'undefined') {
		scriptField[scope+field] = [];
	}
	scriptField[scope+field][scriptField[scope+field].length] = [ object, objectfield];
				
}

function setConnect(scope, field, object, objectfield) {
	// copy the default value;
	object["@"+objectfield] = getInterface(scope,field);
	// console.error("setconn", scope, field, object, objectfield);
	// protoField[scope+field] = [ object, objectfield ];
	if (typeof protoField[scope+field] === 'undefined') {
		protoField[scope+field] = [];
	}
	protoField[scope+field][protoField[scope+field].length] = [ object, objectfield];
}

function getInterface(scope, field) {
	var value = interfaceField[scope+field];
	// console.error("getinter", scope, field, value);
	return value;
}

function setInterface(scope, field, value) {
	interfaceField[scope+field] = value;
	// console.error("setinter", scope, field, value);
}

function clearScope(scope, field, object) {
	delete scriptField[scope+field];
	delete protoField[scope+field];
	zap(field, object);
}

function setObjectValues(scope, field, fieldOrNode, value) {
	var retobj;
	// console.error("looking for ", scope, field, "setting", value);
	for (var sf in scriptField[scope+field]) {
		var obj = scriptField[scope+field][sf];
		if (typeof obj !== 'undefined') {
			// console.error("foundscriptvalue", scope, field, obj, fieldOrNode, value);
			retobj = setObjectValue(scope, field, obj, fieldOrNode, value);
			// console.error("set result return1 ", obj[0], fieldOrNode, obj[1], '=', value);
		} else {
			console.error("scriptundef", scope, field);
		}
	}
	for (var pf in protoField[scope+field]) {
		var obj = protoField[scope+field][pf];
		// console.error("tempobj ====== ", obj);
		if (typeof obj !== 'undefined') {
			// console.error("foundprotovalue", scope, field, obj, fieldOrNode, value);
			retobj = setObjectValue(scope, field, obj, fieldOrNode, value);
			// console.error("set result return2 ", obj[0], fieldOrNode, obj[1], '=', value);
		} else {
			console.error("protoundef", scope, field);
		}
	}
	console.error("result ====== ", value);
	return retobj;
}

function setObjectValue(scope, field, obj, fieldOrNode, value) {
	var newscope = obj[0]["@DEF"];
	console.error("newscope", newscope, "scope", scope);
        if (typeof newscope !== 'undefined' && scope != newscope) {
		field = obj[1];
		console.error("setrecurse", newscope, field, obj, fieldOrNode, value);
		var retobj = setObjectValues(newscope, field, fieldOrNode, value);
		if (retobj) {
			return retobj;
		} else {
			// console.error("Didn't find it");
		}
	}
	// if the recursion didn't set it, set it now
	obj[0][fieldOrNode.substr(0,1)+obj[1]] = value;
	// console.error("set result", obj[0], fieldOrNode, obj[1], '=', value);
	return obj;
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
		obj = [nodeField[scope+'__generic__field__'], field];
	}
	return obj;
}

function zap(field, object) {
	var p;
	if (typeof object === "object") {
		for (p in object) {
			if (p.toLowerCase() === 'is') {
				var connect = object[p]["connect"];
				for (var fld in connect) {
					var f = connect[fld];
					if (f && f["@protoField"] === field) {
						console.error("zapping", field);
						delete connect[fld];
					}
				}
			} else {
				zap(field, object[p]);
			}
		}
	}
	return object;
}
function zapIs(object) {
	var p;
	if (typeof object === "object") {
		for (p in object) {
			if (p.toLowerCase() === 'is') {
				delete object[p];
			} else {
				zapIs(object[p]);
			}
		}
	}
	return object;
}

function prototypeExpander(file, object, scope) {
	object = realPrototypeExpander(file, object, scope);
	zapIs(object);
	return object;
}

function realPrototypeExpander(file, object, scope) {
	var p;
	if (typeof object === "object") {
		if (Array.isArray(object)) {
			var newobject = [];
		} else {
			var newobject = {};
		}
		for (p in object) {
			if (p.toLowerCase() === 'script') {
				var def  = object[p]["@DEF"];
				var url  = object[p]["@url"];
				var fields  = object[p]["field"];
				for (var field in fields) {
					var f = fields[field];
					var corv = "value";
					for (var a in fields) {
						if ( a === '@value' || a === '-children') {
							// console.error("===========attribute", a);
							corv = a.substr(1);
						}
					}
					setScript(scope,
					    f["@name"],
					    f,
					    corv);
				}
				loadURLs(file, url, function(data, fileExt) {
					if (typeof data !== 'undefined') {
						object[p]["#sourceText"] = data;
						delete object[p]["@url"];
					}
				});
				newobject[p] = realPrototypeExpander(file, object[p], scope);
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
				realPrototypeExpander(file, object[p], scope+name);
			} else if (p.toLowerCase() === 'protointerface') {
				var fields = object[p]["field"];
				for (var field in fields) {
					setInterface(scope,
					    fields[field]["@name"],
					    fields[field]["@value"]);
				}
				// realPrototypeExpander(file, object[p], scope);
			} else if (p.toLowerCase() === 'protobody') {
				realPrototypeExpander(file, object[p], scope);
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
				var instance = {};
				if (typeof protos[name] === 'undefined' ||  typeof protos[name]['ProtoBody'] === 'undefined') {
					console.error("ProtoBody undefined for", name);
				} else {
					console.error("Copying ProtoBody", name);
					var obj = protos[name]['ProtoBody']['-children'];
					// if there's only one object as a child, grab it
					if (Object.keys(obj).length === 1) {
						obj = obj[0];
					}
					instance = JSON.parse(JSON.stringify(obj));
				}

				if (!Array.isArray(instance)) {
					if (typeof use !== 'undefined') {
						instance["@USE"] = use;
					}
					if (typeof def !== 'undefined') {
						instance["@DEF"] = def;
					}
				}

				// We need def to make this instance unique
				var newscope = scope+name+def;
				defs[def] = newscope;
				newobject = realPrototypeExpander(file, instance, newscope);
				// console.error("Instance is", JSON.stringify(newobject));

				var fieldValue = object[p]["fieldValue"];
				for (var field in fieldValue) {
					var fv = fieldValue[field];
					var fieldname = fv["@name"];
					var fieldOrNode = "@value";
					var value = fv[fieldOrNode];
					for (var nv in fv) {
						if (nv === '@name') {
							fieldname = fv[nv];
						} else {
							fieldOrNode = nv;
							value = fv[fieldOrNode];
							realPrototypeExpander(file, fv, newscope);
						}
					}
					var obj = setObjectValues(newscope,
					    fieldname,
					    fieldOrNode,
					    value);
					clearScope(newscope, fieldname, newobject);
					console.error("value is", value);
				}
				console.error("result Instance is", JSON.stringify(newobject));
			} else if (p.toLowerCase() === 'connect') {
				//realPrototypeExpander(file, object[p], scope);
			} else if (p.toLowerCase() === 'fieldvalue') {
				//
			} else if (p.toLowerCase() === 'field') {
				var fields = object[p];
				for (var field in fields) {
					// merely put it in the environment so it will be found
					setIfNotSetEnv(scope,
					    fields[field]["@name"],
					    scope,
					    fields[field]["@name"]);
				}
				realPrototypeExpander(file, object[p], scope);
				newobject[p] = object[p];
			} else if (p.toLowerCase() === 'is') {
				var def = object["@DEF"];
				var connect = object[p]["connect"];
				// delete object[p];
				newobject = object;
				// console.error('connect', scope);
				for (var field in connect) {
					var f = connect[field];
					if (f) {
						setEnv(scope,
						    f["@protoField"],
						    def,
						    f["@nodeField"]);
						setConnect(scope,
						    f["@protoField"],
						    newobject,
						    f["@nodeField"]);
					}
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
				newobject[p] = object["@fromNode"];
				newobject["@fromField"] = object["@fromField"];
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
				newobject[p] = object["@toNode"];
				newobject["@toField"] = object["@toField"];
			} else if (p.toLowerCase() === '@name') {
				var name = object["@name"];
				newobject[p] = object[p];
			} else if (p.toLowerCase() === '@def') {
				var def = object["@DEF"];
				if (typeof def !== 'undefined' && typeof scope !== 'undefined') {
					object["@DEF"] = scope+def;
					// console.error("NEW DEF", scope+def);
					setEnv(def,
					    '',
					    scope+def,
					    '');
				}
				newobject[p] = object[p];
			} else if (p.toLowerCase() === '@use') {
				var use = object["@USE"];
 				var env = getEnv(use, '');
				if (typeof env !== 'undefined') {
					object["@USE"] = env[0];
				}
				newobject[p] = object[p];
			} else {
				newobject[p] = realPrototypeExpander(file, object[p], scope);
			}
		}
	} else {
		return object;
	}
	return newobject;
}

if (typeof module === 'object')  {
        module.exports = prototypeExpander;
        module.exports.setLoadURLs = setLoadURLs;
}
