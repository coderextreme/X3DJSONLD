var protos = {};
var names = {};
var protoField = {};
var scriptField = {};
var interfaceField = {};
var envField = {};
var scopecount = 0;
var defdefined = {};
var privatescope = [];
var defs = {};

var fs = require('fs');

function lowout(string) {
	if (typeof process !== 'undefined') {
		process.stderr.write(''+string);
	}
}

function out() {
	if (typeof process !== 'undefined') {
		for (var a in arguments) {
			lowout(arguments[a]);
			lowout(" ");
		}
		lowout("\r\n");
	} else {
		console.error(arguments);
	}
}

function pushScope(s) {
	// out("PUSH", s);
	privatescope.push(s);
}

function popScope() {
	// out("POP", privatescope[privatescope.length-1]);
	privatescope.pop();
}

function saveDef(def) {
	defs[def] = getScope();
	var d = getScope(def);
	// out("DEF SAVED", d, defs[def]);
	return d
}

function getDef(def) {
	// out("SCOPE OF DEF", def, defs[def]);
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
	// out("GET", [def], scope);
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
	var fieldname_field_scope = getInterface(field);
	// default to "@".  - might need to be specified for children, see setter.
	var prefix = "@";
	if (typeof fieldname_field_scope != 'undefined' && typeof fieldname_field_scope[0] != 'undefined') {
		prefix = fieldname_field_scope[0].substr(0,1);
	}
	objectfield = prefix+objectfield;
	if (typeof fieldname_field_scope != 'undefined' && typeof fieldname_field_scope[1] != 'undefined' && typeof fieldname_field_scope[0] != 'undefined' && typeof fieldname_field_scope[1][fieldname_field_scope[0]] != 'undefined') {
		// just grab the one value out of the interface.  We may want more later for typechecking
		var value = fieldname_field_scope[1][fieldname_field_scope[0]];
		if (Array.isArray(value) && fieldname_field_scope[1]["@type"] === "SFNode") {
			// and some SF fields are arrays, so we have to explicitly test for SFNode
			// can't shove an array into an SFNode, so take the first element, per Roy Walmsley
			out("SFNode is array, reducing", value);
			value = value[0];
			// out("SFNode array[0]=", value);
		}
		object[objectfield] = value
		return [fieldname_field_scope[1]["@type"], fieldname_field_scope[2]];
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
				// out("===========attribute", a);
				objectfield = a.substr(1);
			}
		}
		var type_scope = setValueFromInterface(field, f, objectfield);
		if (typeof type_scope == 'undefined') {
			scopes = [ scope ];
		} else {
			scopes = [ scope, type_scope[1] ];
		}

		for (var s in scopes) {
			// out("setscript", scopes[s], field, f, objectfield, type, def);
			if (typeof scriptField[scopes[s]+field] === 'undefined') {
				scriptField[scopes[s]+field] = [];
			}
			// set another reference
			scriptField[scopes[s]+field][scriptField[scopes[s]+field].length] = [ f, objectfield, type, def];
		}
	}
				
}

function setEnv(scope, protoField, newobject, nodeField, type, newdef) {
	var fieldname_field_scope = getInterface(protoField);
	if (typeof fieldname_field_scope !== 'undefined') {
		scope = fieldname_field_scope[2];
	}
	if (typeof envField[scope+protoField] === 'undefined') {
		envField[scope+protoField] = [];
	}
	// set another reference
	envField[scope+protoField][envField[scope+protoField].length] = [ newobject, nodeField, type, newdef];
	out("setconnenv", envField[scope+protoField].length, scope, protoField, JSON.stringify(newobject), nodeField, type, newdef);
}

function getEnv(scope, protoField) {
	out(">>>>>>", scope, protoField, JSON.stringify(envField[scope+protoField]));
	return envField[scope+protoField];
}

// In the ProtoBody (for the instance)
// p === "IS"
function setConnectFields(object, p, newobject) {
	var def = object["@DEF"]; // at same level as IS
	newdef = saveDef(def);
	var connect = object[p]["connect"];
	var scope = getScope();
	for (var cfield in connect) {
		var f = connect[cfield];
		// out("Connect field", field, f);
		if (f) {
			var field = getScope(f["@protoField"]);
			var objectfield = f["@nodeField"];
			out("Node field is", objectfield);
			var type_scope = setValueFromInterface(field, newobject, objectfield);
			var type = undefined;
			if (typeof type_scope == 'undefined') {
				scopes = [ scope ];
			} else {
				scopes = [ scope, type_scope[1] ];
				type = type_scope[0];
			}
			setEnv(scope, field, newobject, objectfield, type, newdef);
			for (var s in scopes) {
				out("setconn", scopes[s], field, JSON.stringify(newobject), objectfield, type, newdef);
				if (typeof protoField[scopes[s]+field] === 'undefined') {
					protoField[scopes[s]+field] = [];
				}
				// set another reference
				out("SCFNO", JSON.stringify(newobject));
				out("SCFOF", JSON.stringify(objectfield));
				out("SCFTY", JSON.stringify(type));
				out("SCFDF", JSON.stringify(newdef));
				protoField[scopes[s]+field][protoField[scopes[s]+field].length] = [ newobject, objectfield, type, newdef];
			}
		}
	}
}

function getInterface(field) {
	for(var i = 0; i < scopeLength(); i++) {
		var scope = upScope(i);
		if (!scope) {
			break;
		}
		var fieldname_field_scope = interfaceField[scope+field];
		//out("getinter", scope, field, fieldnamefield);
		if (fieldname_field_scope) {
			return fieldname_field_scope;
		}
		//out("looping", i);
	}
}

function setInterface(field, fieldname) {
	var scope = getScope();
	interfaceField[scope+field["@name"]] = [fieldname, field, scope];
	// out("setinter", scope, field["@name"], fieldname, field[fieldname]);
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
			// out("def1 is", defobj);
		}
	}
	if (typeof defobj === 'undefined') {
		for (var pf in protoField[scope+node]) {
			var obj = protoField[scope+node][pf];
			if (typeof obj !== 'undefined') {
				defobj = [obj[3], obj[1]];
				// out("def2 is", defobj);
			}
		}
	}
	if (typeof defobj === 'undefined') {
		defobj = [scope, node];
		// out("def3 is", defobj);
	}
	return defobj;
}

function setObjectValues(scope, field, fieldOrNode, value) {
	out("\t\tSOVSI", scope, field, fieldOrNode, JSON.stringify(value));
	out("resolve", scope, field, fieldOrNode, value);
	// find prototype up the scope stream
	for(var i = 0; i < scopeLength(); i++) {
		var parentScope = upScope(i);
		if (!parentScope) {
			break;
		}
		var envs = getEnv(parentScope, field);
		out(i, parentScope, field, JSON.stringify(envs), JSON.stringify(value));
		for (var e in envs) {
			var obj = envs[e];
			out("newobject", JSON.stringify(obj[0]));
			out("nodeField", JSON.stringify(obj[1]));
			out("type", JSON.stringify(obj[2]));
			out("newdef", JSON.stringify(obj[3]));
			if (typeof obj !== 'undefined') {
				setObjectValue(parentScope, obj[1], obj, fieldOrNode, value);
			}
		}
	}
	for (var sf in scriptField[scope+field]) {
		var obj = scriptField[scope+field][sf];
		if (typeof obj !== 'undefined') {
			out("\t\t\tfoundscriptvalue", scope, field, JSON.stringify(obj), fieldOrNode, JSON.stringify(value));
			setObjectValue(scope, field, obj, fieldOrNode, value);
		} else {
			out("\t\t\tscriptundef", scope, field);
		}
	}
	// branch out across children of a proto declare
	for (var pf in protoField[scope+field]) {
		var obj = protoField[scope+field][pf];
		if (typeof obj !== 'undefined') {
			out("\t\t\tfoundprotovalue", scope, field, JSON.stringify(obj), fieldOrNode, JSON.stringify(value));
			setObjectValue(scope, field, obj, fieldOrNode, value);
		} else {
			out("\t\t\tprotoundef", scope, field);
		}
	}
	out("\t\tSOVSO", scope, field, fieldOrNode, JSON.stringify(value));
}

function setObjectValue(scope, field, obj, fieldOrNode, value) {
	out("\t\t\t\tSOV", scope, field, obj, fieldOrNode, value);
	if (Array.isArray(value) && typeof obj[2] !== 'undefined') {
		// and some SF fields are arrays, so we have to explicitly test for SFNode
		if (obj[2] === "SFNode") {
			// can't shove an array into an SF, so take the first element, per Roy Walmsley
			// out("SFNode is array=", value);
			value = value[0];
			// out("SFNode array[0]=", value);
		} else if (obj[2] === "MFNode") {
			// value = { "Group" : { "-children" : value }};
			// out("MFNode", value);
		}
	}
	// if the recursion didn't set it, set it now
	var prefix = obj[1].substr(0,1);
	if (prefix !== '-' && prefix !== '@') {
		prefix = fieldOrNode.substr(0,1);
	} else {
		prefix = "";
	}
	out("\t\t\t\tSOVobjI", JSON.stringify(obj));
	out("\t\t\t\tSOVobj0I", JSON.stringify(obj[0]));
	out("\t\t\t\tSOVobj1I", JSON.stringify(obj[1]));
	out("\t\t\t\tSOVobj2I", JSON.stringify(obj[2]));
	out("\t\t\t\tSOVobj3I", JSON.stringify(obj[3]));
	out("\t\t\t\tSOVlsI", JSON.stringify(obj[0][prefix+obj[1]]));
	out("\t\t\t\tSOVrsI", JSON.stringify(value));
	obj[0][prefix+obj[1]] = value;// JSON.parse(JSON.stringify(value));
	out("\t\t\t\tSOVvalueO", JSON.stringify(value));
	out("\t\t\t\tSOVobj3O", JSON.stringify(obj[3]));
	out("\t\t\t\tSOVobj2O", JSON.stringify(obj[2]));
	out("\t\t\t\tSOVobj1O", JSON.stringify(obj[1]));
	out("\t\t\t\tSOVobj0O", JSON.stringify(obj[0]));
	out("\t\t\t\tSOVobjO", JSON.stringify(obj));
	out("\t\t\t\tsetresult", obj[0], "[", prefix, obj[1], "]", '=', value, 'alt', fieldOrNode);
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
						// out("zapping", field);
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
	return object;
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
	return object;
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
	var instance = {};
	if (typeof def === 'undefined') {
		def = "INSTANCE";
	}
	if (getDef(def)) {
		scopecount += 1000;
		def += scopecount;
	} else {
		// first appearance of def is left alone
	}
	saveDef(def);
	pushScope(def);
	if (typeof protos[name] === 'undefined' ||  typeof protos[name]['ProtoBody'] === 'undefined') {
		out("ProtoBody undefined for", name);
	} else {
		// out("Copying ProtoBody", name);
		var obj = protos[name]['ProtoBody']['-children'];
		// if there's only one object as a child, grab it
		if (Object.keys(obj).length === 1) {
			obj = obj[0];
		}
		instance = JSON.parse(JSON.stringify(obj));
	}
	if (!Array.isArray(instance)) {
		if (typeof use !== 'undefined') {
			var q;
			for (q in instance) {
				// out("USE is ", use, "q is", q, "instance q is", instance[q]);
				if (q === "Group" || q == "Transform") {
					if (typeof instance[q] === 'object' && !Array.isArray(instance[q])) {
						instance[q]["@USE"] = getScope(use);  // there will be at least DEF with this USE
					} else {
						out("USE is Failed");
					}
				}
			}
		}
		if (typeof def !== 'undefined') {
			instance["@DEF"] = getScope(def);
		}
	}

	// We need def to make this instance unique
	var newobject = realPrototypeExpander(file, instance);

/*
	if (!Array.isArray(newobject)) {
		if (typeof use !== 'undefined') {
			var q;
			for (q in newobject) {
				if (q === "Group" || q == "Transform") {
					if (typeof newobject[q] === 'object' && !Array.isArray(newobject[q])) {
						newobject[q]["@USE"] = "FOOBAR"+getScope(use);  // there will be at least DEF with this USE
					} else {
						out("USE is Failed");
					}
				}
			}
		}
		if (typeof def !== 'undefined') {
			newobject["@DEF"] = getScope(def);
		}
	}
*/

	var fieldValue = object[p]["fieldValue"];
	for (var field in fieldValue) {
		var fv = fieldValue[field];
		var protoField = fv["@name"];
		var fieldOrNode = "@value";
		var value = fv[fieldOrNode];
		for (var nv in fv) {
			if (nv === '@name') {
				continue;
			}
			fieldOrNode = nv;
			value = fv[fieldOrNode];
			pushScope("FIELD"+protoField);
			value = realPrototypeExpander(file, value);
			popScope();
			getInterface(protoField);
			setObjectValues(getScope(),
			    protoField,
			    fieldOrNode,
			    value);
		}
		// clearScope(fieldname, newobject);
	}

	popScope();
	popScope();
	return newobject;
}

function realPrototypeExpander(file, object) {
	if (typeof object === "object") {
		if (Array.isArray(object)) {
			var newobject = [];
		} else {
			var newobject = {};
		}
		for (var p in object) {
			var plc = p.toLowerCase();
			if (plc === 'script') {
				newobject[p] = handleScript(file, object, p);
			} else if (plc === 'protodeclare') {
				handleProtoDeclare(file, object, p);
			} else if (plc === 'protointerface') {
				handleProtoInterface(file, object, p);
			} else if (plc === 'protobody') {
				realPrototypeExpander(file, object[p]);
			} else if (plc === 'protoinstance') {
				newobject = handleProtoInstance(file, object, p);
			} else if (plc === 'connect') {
				realPrototypeExpander(file, object[p]);
			} else if (plc === 'fieldvalue') {
				realPrototypeExpander(file, object[p]);
			} else if (plc === 'field') {
				newobject[p] = realPrototypeExpander(file, object[p]);
			} else if (plc === 'is') {
				setConnectFields(object, p, newobject)
				realPrototypeExpander(file, object[p]);
			} else if (plc === 'route') {
				newobject[p] = {};
				var envFrom = extractConnectedDef(getScope(object[p]["@fromNode"]), object[p]["@fromField"]);
				newobject[p]["@fromNode" ] = envFrom[0];
				newobject[p]["@fromField"] = envFrom[1];
				var envTo = extractConnectedDef(getScope(object[p]["@toNode"]), object[p]["@toField"]);
				newobject[p]["@toNode" ] = envTo[0];
				newobject[p]["@toField"] = envTo[1];
			} else if (plc === '@name') {
				newobject[p] = object[p];
			} else if (plc === '@def') {
				newobject[p] = saveDef(object[p]);
			} else if (plc === '@use') {
				newobject[p] = getScope(object[p]);
				// out("USE is2 ", object[p], newobject);
			} else {
				newobject[p] = realPrototypeExpander(file, object[p]);
			}
		}
		return newobject;
	} else {
		return object;
	}
}
var def = null;

function searchForProtoDeclare(object, name) {
	var p;
	var found;
	if (typeof object === "object") {
		for (p in object) {
			if (p === 'ProtoDeclare') {
				// out("looked at", object[p]["@name"], "for", name);
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
		// out("defaulted to", found["ProtoDeclare"]["@name"]);
	}
	return found;
}

function loadedProto(data, name, protoname, appinfo, description, filename) {
	if (typeof data !== 'undefined') {
		// out("searching for", name, "in", data.toString());
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
			out("Failed to parse JSON in ", filename, e);
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
			out(numreturn, '=', Object.keys(newobject).length);
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
