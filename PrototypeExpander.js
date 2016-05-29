var protos = {};
var names = {};
var protoField = {};
var scriptField = {};
var interfaceField = {};
var scopecount = 0;
var defdefined = {};
var privatescope = [];
var defs = {};

function pushScope(s) {
	// console.error("PUSH", s);
	privatescope.push(s);
}

function popScope() {
	// console.error("POP", privatescope[privatescope.length-1]);
	privatescope.pop();
}

function saveDef(def) {
	defs[def] = getScope();
	var d = getScope(def);
	// console.error("DEF SAVED", d, defs[def]);
	return d
}

function getDef(def) {
	// console.error("SCOPE OF DEF", def, defs[def]);
	return defs[def];
}

function getScope(def) {
	var scope;
	if (def) {
		if (defs[def]) {
			scope = defs[def]+"_"+def;
		} else {
			scope = def;
		}
	} else {
		scope = privatescope.join("_");
	}
	// console.error("GET", [def], scope);
	return scope;
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

function setValueFromInterface(field, object, objectfield) {
	// copy the default interface value;
	var fieldnamefield = getInterface(field);
	// default to "@".  - might need to be specified for children, see setter.
	var prefix = "@";
	if (typeof fieldnamefield != 'undefined' && typeof fieldnamefield[0] != 'undefined') {
		prefix = fieldnamefield[0].substr(0,1);
	}
	objectfield = prefix+objectfield;
	if (typeof fieldnamefield != 'undefined' && typeof fieldnamefield[1] != 'undefined' && typeof fieldnamefield[0] != 'undefined' && typeof fieldnamefield[1][fieldnamefield[0]] != 'undefined') {
		// just grab the one value out of the interface.  We may want more later for typechecking
		var value = fieldnamefield[1][fieldnamefield[0]];
		if (Array.isArray(value) && fieldnamefield[1]["@type"] === "SFNode") {
			// and some SF fields are arrays, so we have to explicitly test for SFNode
			// can't shove an array into an SFNode, so take the first element, per Roy Walmsley
			// console.error("SFNode is array=", value);
			value = value[0];
			// console.error("SFNode array[0]=", value);
		}
		object[objectfield] = value
		return fieldnamefield[1]["@type"];
	}
	return undefined;
}

function setScriptFields(objectp, def) {
	var fields  = objectp["field"];
	var scope = getScope();
	for (var field in fields) {
		var f = fields[field];
		var field = f["@name"];
		var type = f["@type"];
		var objectfield = "value";
		for (var a in f) {
			if ( a === '@value' || a === '-children') {
				// console.error("===========attribute", a);
				objectfield = a.substr(1);
			}
		}
		setValueFromInterface(field, f, objectfield);

		console.error("setscript", scope, field, f, objectfield, type, def);
		if (typeof scriptField[scope+field] === 'undefined') {
			scriptField[scope+field] = [];
		}
		// set another reference
		scriptField[scope+field][scriptField[scope+field].length] = [ f, objectfield, type, def];
	}
				
}

function setConnectFields(object, p, newobject) {
	var def = object["@DEF"]; // at same level as IS
	newdef = saveDef(def);
	var connect = object[p]["connect"];
	var scope = getScope();
	for (var cfield in connect) {
		var f = connect[cfield];
		// console.error("Connect field", field, f);
		if (f) {
/*
			setEnv(scope,
			    f["@protoField"],
			    newdef,
			    f["@nodeField"]);
*/
			var field = getScope(f["@protoField"]);
			var objectfield = f["@nodeField"];
			var type = setValueFromInterface(field, newobject, objectfield);
			console.error("setconn", scope, field, JSON.stringify(newobject), objectfield, type, newdef);
			if (typeof protoField[scope+field] === 'undefined') {
				protoField[scope+field] = [];
			}
			// set another reference
			protoField[scope+field][protoField[scope+field].length] = [ newobject, objectfield, type, newdef];
		}
	}
}

function getInterface(field) {
	for(var i = 0; i < scopeLength(); i++) {
		var scope = upScope(i);
		if (!scope) {
			break;
		}
		var fieldnamefield = interfaceField[scope+field];
		//console.error("getinter", scope, field, fieldnamefield);
		if (fieldnamefield) {
			return fieldnamefield;
		}
		//console.error("looping", i);
	}
}

function setInterface(field, fieldname) {
	var scope = getScope();
	interfaceField[scope+field["@name"]] = [fieldname, field];
	console.error("setinter", scope, field["@name"], fieldname, field[fieldname]);
}

function clearScope(field, object) {
	var scope = getScope();
	delete scriptField[scope+field];
	delete protoField[scope+field];
	zap(field, object);
}

function extractConnectedDef(scope, node) {
	var defobj;
	for (var sf in scriptField[scope+node]) {
		var obj = scriptField[scope+node][sf];
		if (typeof obj !== 'undefined') {
			defobj = [obj[3], obj[1]];
			console.error("def1 is", defobj);
		}
	}
	if (typeof defobj === 'undefined') {
		for (var pf in protoField[scope+node]) {
			var obj = protoField[scope+node][pf];
			if (typeof obj !== 'undefined') {
				defobj = [obj[3], obj[1]];
				console.error("def2 is", defobj);
			}
		}
	}
	if (typeof defobj === 'undefined') {
		defobj = [scope, node];
		console.error("def3 is", defobj);
	}
	return defobj;
}

function setObjectValues(scope, field, fieldOrNode, value) {
	var retobj;
	// console.error("resolve", scope, field, fieldOrNode, value);
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
		// console.error("tempobj ====== ", scope, field, pf, obj);
		if (typeof obj !== 'undefined') {
			// console.error("foundprotovalue", scope, field, obj, fieldOrNode, value);
			retobj = setObjectValue(scope, field, obj, fieldOrNode, value);
			// console.error("set result return2 ", obj[0], fieldOrNode, obj[1], '=', value);
		} else {
			console.error("protoundef", scope, field);
		}
	}
	// console.error("result ====== ", retobj);
	return retobj;
}

function setObjectValue(scope, field, obj, fieldOrNode, value) {
	var newscope = obj[3];
	console.error("newscope", newscope, "scope", scope);
/*
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
*/
	if (Array.isArray(value) && typeof obj[2] !== 'undefined') {
		// and some SF fields are arrays, so we have to explicitly test for SFNode
		if (obj[2] === "SFNode") {
			// can't shove an array into an SF, so take the first element, per Roy Walmsley
			// console.error("SFNode is array=", value);
			value = value[0];
			// console.error("SFNode array[0]=", value);
		} else if (obj[2] === "MFNode") {
			// value = { "Group" : { "-children" : value }};
			// console.error("MFNode", value);
		}
	}
	// if the recursion didn't set it, set it now
	var prefix = obj[1].substr(0,1);
	if (prefix !== '-' && prefix !== '@') {
		prefix = fieldOrNode.substr(0,1);
	} else {
		prefix = "";
	}
	obj[0][prefix+obj[1]] = value;
	// console.error("setresult", obj[0], prefix, obj[1], '=', value, 'alt', fieldOrNode);
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
	protos = {};
	names = {};
	protoField = {};
	scriptField = {};
	interfaceField = {};
	scopecount = 0;
	defdefined = {};
	privatescope = [];
	defs = {};

	object = realPrototypeExpander(file, object);
	// zapIs(object);
	return object;
}

function handleScript(file, object, p) {
	var def  = object[p]["@DEF"];
	var newdef = saveDef(def);
	setScriptFields(object[p], newdef);
	var url  = object[p]["@url"];
	loadURLs(file, url, function(data, fileExt) {
		if (typeof data !== 'undefined') {
			object[p]["#sourceText"] = data.split(/\r?\n/);
			delete object[p]["@url"];
		}
	});
	var newobject = realPrototypeExpander(file, object[p]);
	newobject["@DEF"] = getScope(def);
	return newobject;
}

function handleProtoDeclare(file, object, p) {
	var name = object[p]["@name"];
	var def = object[p]["@DEF"];
	protos[name] = object[p];
	saveDef(def);
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
}

function handleProtoInterface(file, object, p) {
	var fields = object[p]["field"];
	for (var field in fields) {
		var f = fields[field];
		if (typeof f["@value"] !== 'undefined') {
			setInterface(f, "@value")
		} else if (typeof f["-children"] !== 'undefined') {
			setInterface(f, "-children");
		} else {
			setInterface(f);
		}
	}
}

function handleProtoInstance(file, object, p) {
	var name = object[p]["@name"];
	pushScope("DECL"+name);
	var def  = object[p]["@DEF"];
	var use  = object[p]["@USE"];
	names[def] = name;
	if (typeof name === 'undefined' && typeof use !== 'undefined') {
		name = names[use];
	}
	if (typeof def === 'undefined') {
		def = "INSTANCE";
	}
	var instance = {};
	if (getDef(def)) {
		scopecount += 1000;
		def += scopecount;
	} else {
		// first appearance of def is left alone
	}
	saveDef(def);
	pushScope(def);
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

	// We need def to make this instance unique
	var newobject = realPrototypeExpander(file, instance);
	// console.error("1>>>>", getScope(), def, JSON.stringify(newobject));

	var fieldValue = object[p]["fieldValue"];
	for (var field in fieldValue) {
		var fv = fieldValue[field];
		var fieldname = fv["@name"];
		var fieldOrNode = "@value";
		var value = fv[fieldOrNode];
		for (var nv in fv) {
			if (nv === '@name') {
				continue;
			}
			fieldOrNode = nv;
			value = fv[fieldOrNode];
			// console.error("value1 is", value);
			pushScope("FIELD"+fieldname);
			value = realPrototypeExpander(file, value);
			// console.error("value2 is", value);
			popScope();
			var obj = setObjectValues(getScope(),
			    fieldname,
			    fieldOrNode,
			    value);
			// console.error("obj is", obj);
		}
		// clearScope(fieldname, newobject);
	}

	if (Array.isArray(newobject)) {
/*
		// What a hack, but it may work
		if (newobject[0]["Transform"] || newobject[0]["Group"]) {
			newobject = { "Group" : { "-children" : newobject }};
			if (typeof use !== 'undefined') {
				newobject["@USE"] = getScope(use);  // there will be at least DEF with this USE
			}
			if (typeof def !== 'undefined') {
				newobject["@DEF"] = getScope(def);
			}
		}
*/
	} else {
		if (typeof use !== 'undefined') {
			newobject["@USE"] = getScope(use);  // there will be at least DEF with this USE
		}
		if (typeof def !== 'undefined') {
			newobject["@DEF"] = getScope(def);
		}
	}

	popScope();
	popScope();
	// console.error("NEW OBJECT is", JSON.stringify(newobject));
	return newobject;
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
				newobject[p] = handleScript(file, object, p);
			} else if (p.toLowerCase() === 'protodeclare') {
				handleProtoDeclare(file, object, p);
			} else if (p.toLowerCase() === 'protointerface') {
				handleProtoInterface(file, object, p);
			} else if (p.toLowerCase() === 'protobody') {
				realPrototypeExpander(file, object[p]);
			} else if (p.toLowerCase() === 'protoinstance') {
				newobject = handleProtoInstance(file, object, p);
				// console.error("NEW OBJECT2 is", JSON.stringify(newobject));
			} else if (p.toLowerCase() === 'connect') {
				realPrototypeExpander(file, object[p]);
			} else if (p.toLowerCase() === 'fieldvalue') {
				realPrototypeExpander(file, object[p]);
			} else if (p.toLowerCase() === 'field') {
				newobject[p] = realPrototypeExpander(file, object[p]);
			} else if (p.toLowerCase() === 'is') {
				setConnectFields(object, p, newobject)
				realPrototypeExpander(file, object[p]);
			} else if (p.toLowerCase() === 'route') {
				newobject[p] = {};
				var envFrom = extractConnectedDef(getScope(object[p]["@fromNode"]), object[p]["@fromField"]);
				newobject[p]["@fromNode" ] = envFrom[0];
				newobject[p]["@fromField"] = envFrom[1];
				var envTo = extractConnectedDef(getScope(object[p]["@toNode"]), object[p]["@toField"]);
				newobject[p]["@toNode" ] = envTo[0];
				newobject[p]["@toField"] = envTo[1];
			} else if (p.toLowerCase() === '@name') {
				newobject[p] = object[p];
			} else if (p.toLowerCase() === '@def') {
				newobject[p] = saveDef(object[p]);
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
			newobj["ProtoDeclare"]["@name"] = name;
			newobj["ProtoDeclare"]["@appinfo"] = appinfo;
			newobj["ProtoDeclare"]["@description"] = description;
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
			console.error(numreturn, '=', Object.keys(newobject).length);
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
