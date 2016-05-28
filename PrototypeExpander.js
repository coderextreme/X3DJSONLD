var protos = {};
var names = {};
var nodeField = {};
var protoField = {};
var scriptField = {};
var interfaceField = {};
var scopecount = 0;
var defdefined = {};
var privatescope = [];
var defs = {};

function pushScope(s) {
	console.error("PUSH", s);
	privatescope.push(s);
}

function popScope() {
	console.error("POP", privatescope.pop());
}

function saveScope(def) {
	defs[def] = getScope();
	return getScope(def);
}

function getScope(def) {
	if (def) {
		return defs[def]+"_"+def;
	} else {
		return privatescope.join("_");
	}
}

function scopeLength() {
	return privatescope.length;
}

function upScope(i) {
	return privatescope.slice(0,privatescope.length-i).join("_");
}

// var loadURLs = function() {};

function setLoadURLs(func) {
	loadURLs = func;
}

function setScript(scope, field, object, objectfield) {
	// copy the default value;
	object["@"+objectfield] = getInterface(field);
	// console.error("setscript", scope, field, object, objectfield);
	// scriptField[scope+field] = [ object, objectfield ];
	if (typeof scriptField[scope+field] === 'undefined') {
		scriptField[scope+field] = [];
	}
	scriptField[scope+field][scriptField[scope+field].length] = [ object, objectfield];
				
}

function setConnect(scope, field, object, objectfield) {
	// copy the default value;
	object["@"+objectfield] = getInterface(field);
	console.error("setconn", scope, field, object, objectfield);
	// protoField[scope+field] = [ object, objectfield ];
	if (typeof protoField[scope+field] === 'undefined') {
		protoField[scope+field] = [];
	}
	protoField[scope+field][protoField[scope+field].length] = [ object, objectfield];
}

function getInterface(field) {
	for(var i = 0; i < scopeLength(); i++) {
		var scope = upScope(i);
		if (!scope) {
			break;
		}
		var value = interfaceField[scope+field];
		console.error("getinter", scope, field, value);
		if (value) {
			return value;
		}
		console.error("looping", i);
	}
}

function setInterface(scope, field, value) {
	interfaceField[scope+field] = value;
	console.error("setinter", scope, field, value);
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
	// console.error("result ====== ", value);
	return retobj;
}

function setObjectValue(scope, field, obj, fieldOrNode, value) {
	var newscope = obj[0]["@DEF"];
	// console.error("newscope", newscope, "scope", scope);
        if (typeof newscope !== 'undefined' && scope != newscope) {
		field = obj[1];
		// console.error("setrecurse", newscope, field, obj, fieldOrNode, value);
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

function zap(field, object) {
	var p;
	if (typeof object === "object") {
		for (p in object) {
			if (p.toLowerCase() === 'is') {
				var connect = object[p]["connect"];
				for (var fld in connect) {
					var f = connect[fld];
					if (f && f["@protoField"] === field) {
						// console.error("zapping", field);
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

function prototypeExpander(file, object) {
	object = realPrototypeExpander(file, object);
	// zapIs(object);
	return object;
}

function realPrototypeExpander(file, object) {
	var p;
	if (typeof object === "object") {
		if (Array.isArray(object)) {
			var newobject = [];
		} else {
			var newobject = {};
		}
		for (p in object) {
			if (p.toLowerCase() === 'script') {
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
					setScript(getScope(),
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
				var def  = object[p]["@DEF"];
				pushScope("SCRIPT_"+def);
				newobject[p] = realPrototypeExpander(file, object[p]);
				newobject[p]["@DEF"] = getScope();
				popScope();
			} else if (p.toLowerCase() === 'protodeclare') {
				var name = object[p]["@name"];
				var def = object[p]["@DEF"];
				saveScope(def);
				protos[name] = object[p];
				if (typeof object[p]["@appinfo"] !== 'undefined') {
					protos[name]["@appinfo"] = object[p]["@appinfo"];
				}
				if (typeof object[p]["@documentation"] !== 'undefined') {
					protos[name]["@documentation"] = object[p]["@documentation"];
				}
				pushScope("DECL"+name);
				names[def] = name;
				realPrototypeExpander(file, object[p]);
				popScope();
			} else if (p.toLowerCase() === 'protointerface') {
				var fields = object[p]["field"];
				for (var field in fields) {
					setInterface(getScope(),
					    fields[field]["@name"],
					    fields[field]["@value"]);
				}
				// realPrototypeExpander(file, object[p]);
			} else if (p.toLowerCase() === 'protobody') {
				realPrototypeExpander(file, object[p]);
			} else if (p.toLowerCase() === 'protoinstance') {
				var name = object[p]["@name"];
				pushScope("DECL"+name);
				var def  = object[p]["@DEF"];
				var use  = object[p]["@USE"];
				scopecount += 1000;
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
						instance["@USE"] = getScope(use);
					}
					if (typeof def !== 'undefined') {
						instance["@DEF"] = saveScope(def);
					}
				}

				// We need def to make this instance unique
				pushScope("INST"+scopecount);
				console.error("WIPED1", newobject);
				newobject = realPrototypeExpander(file, instance);
				// console.error("1>>>>", getScope(), def, JSON.stringify(newobject));

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
							if (fieldOrNode.substr(0,1) === '-') {
								pushScope("FIELD"+fieldname);
								value = realPrototypeExpander(file, value);
								// console.error("2>>>>", getScope(), JSON.stringify(value));
								popScope();
							}
						}
					}
					var obj = setObjectValues(getScope(),
					    fieldname,
					    fieldOrNode,
					    value);
					// clearScope(getScope(), fieldname, newobject);
					console.error("value is", value);
					console.error("obj is", obj);
				}
				console.error("result Instance is", JSON.stringify(newobject));
				popScope();
				popScope();
			} else if (p.toLowerCase() === 'connect') {
				realPrototypeExpander(file, object[p]);
			} else if (p.toLowerCase() === 'fieldvalue') {
				realPrototypeExpander(file, object[p]);
			} else if (p.toLowerCase() === 'field') {
				newobject[p] = realPrototypeExpander(file, object[p]);
			} else if (p.toLowerCase() === 'is') {
				var connect = object[p]["connect"];
				for (var field in connect) {
					var f = connect[field];
					if (f) {
						setConnect(getScope(),
						    f["@protoField"],
						    newobject,
						    f["@nodeField"]);
					}
				}
				realPrototypeExpander(file, object[p]);
			} else if (p.toLowerCase() === '@fromnode') {
				newobject["@fromNode"] = getScope(object["@fromNode"]);
				newobject["@fromField"] = object["@fromField"];
			} else if (p.toLowerCase() === '@tonode') {
				newobject["@toNode"] = getScope(object["@toNode"]);
				newobject["@toField"] = object["@toField"];
			} else if (p.toLowerCase() === '@name') {
				newobject[p] = object[p];
			} else if (p.toLowerCase() === '@def') {
				newobject[p] = saveScope(object[p]);
			} else if (p.toLowerCase() === '@use') {
				newobject[p] = getScope(object[p]);
			} else {
				newobject[p] = realPrototypeExpander(file, object[p]);
			}
		}
	} else {
		return object;
	}
	return newobject;
}
var def = null;

function searchForProtoDeclare(object, name) {
	var p;
	var found;
	if (typeof object === "object") {
		for (p in object) {
			if (p === 'ProtoDeclare') {
				// console.error("looked at", object[p]["@name"], "for", name);
				if (object[p]["@name"] === name) {
					found = object;
				}
				// find the first one if none match
				if (typeof found === 'undefined' && def === null) {
					def = object;
				}
			}
			if (typeof found === 'undefined') {
				found = searchForProtoDeclare(object[p], name);
			}
		}
	}
	if (typeof found !== 'undefined') {
		// console.error("defaulted to", found["ProtoDeclare"]["@name"]);
	}
	return found;
}

function loadedProto(data, name, protoname, appinfo, description, filename) {
	if (typeof data !== 'undefined') {
		// console.error("searching for", name, "in", data.toString());
		try {
			def = null;
			var newobj = searchForProtoDeclare(JSON.parse(data), protoname);
			if (typeof newobj === 'undefined') {
				newobj = def;
			}
			newobj["@name"] = name;
			newobj["@appinfo"] = appinfo;
			newobj["@description"] = description;
			return newobj;
		} catch (e) {
			console.error("Failed to parse JSON in ", filename, e);
		}
	}
}

function externPrototypeExpander(file, object) {
	if (typeof object === "object") {
		if (Array.isArray(object)) {
			var newobject = [];
		} else {
			var newobject = {};
		}
		// Wait for numreturn tasks to finish
		var numreturn = Object.keys(object).length;
		function expand(done) {
			for (var p in object) {
				if (p === 'ExternProtoDeclare') {
					function load(p) {
						var obj = object[p];
						var url = obj["@url"];
						var name = obj["@name"];
						var appinfo = obj["@appinfo"];
						var description = obj["@description"];
						// this is a single task
						loadURLs(file, url, function(data, u) {
							var nameIndex = u.indexOf("#");
							var protoname = name;
							if (nameIndex >= 0) {
								protoname = u.substring(nameIndex+1);
							}
							var newobject = loadedProto(data, name, protoname, appinfo, description, u);
							done(p, newobject);
						});
					}
					load(p);
				} else {
					// this is a single task
					done(p, externPrototypeExpander(file, object[p]));
				}
			}
		}
		expand(function (p, newobj) {
			if (p === "ExternProtoDeclare") {
				newobject = newobj;
			} else {
				newobject[p] = newobj;
			}
		});
		while (numreturn > Object.keys(newobject).length+1) {
			console.log(numreturn, '=', Object.keys(newobject).length);
			setTimeout(function() {}, 50);
		}
		return newobject;
	} else {
		return object;
	}
}


if (typeof module === 'object')  {
        module.exports.prototypeExpander = prototypeExpander;
	module.exports.externPrototypeExpander = externPrototypeExpander;
        module.exports.setLoadURLs = setLoadURLs;
}
