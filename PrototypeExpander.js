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
var fs;

if (typeof require === 'function') {
	fs = require('fs');
}

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
	return d;
}

function getDef(def) {
	// console.error("SCOPE OF DEF", def, defs[def]);
	return defs[def];
}

function getField(scope, field) {
	return scope+"_"+field;
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
	var fieldname_field_scope = getInterface(field);
	// default to "@".  - might need to be specified for children, see setter.
	var prefix = "@";
	if (typeof fieldname_field_scope != 'undefined' && typeof fieldname_field_scope[0] != 'undefined') {
		prefix = fieldname_field_scope[0].substr(0,1);
	}
	if (prefix === '@' && objectfield === 'children') {
		prefix = '-';
	}
	if (prefix === '-' && objectfield === 'value') {
		prefix = "@";
	}
	objectfield = prefix+objectfield;
	if (typeof fieldname_field_scope != 'undefined' && typeof fieldname_field_scope[1] != 'undefined' && typeof fieldname_field_scope[0] != 'undefined' && typeof fieldname_field_scope[1][fieldname_field_scope[0]] != 'undefined') {
		// just grab the one value out of the interface.  We may want more later for typechecking
		var value = fieldname_field_scope[1][fieldname_field_scope[0]];
		if (Array.isArray(value) && fieldname_field_scope[1]["@type"] === "SFNode" && objectfield !== '-children') {
			// and some SF fields are arrays, so we have to explicitly test for SFNode
			// can't shove an array into an SFNode, so take the first element, per Roy Walmsley
			console.error("SFNode is array, reducing", value);
			value = value[0];
			// console.error("SFNode array[0]=", value);
		}
		if (!Array.isArray(value) && objectfield === '-children') {
			objectfield = "@value";
		}
		object[objectfield] = value;
		return [fieldname_field_scope[1]["@type"], fieldname_field_scope[2]];
	}
	return undefined;
}

function getObjectField(f, type) {
	var objectfield = "value";
	if (type.indexOf("FNode") === 1) {
		objectfield = "children";
	}
	for (var a in f) {
		if ( a === '@value' || a === '-children') {
			// console.error("===========attribute", a);
			objectfield = a.substr(1);
		}
	}
	return objectfield;
}

function findFieldByName(fields, objectfield) {
	for (var field in fields) {
		var f = fields[field];
		var fieldname = f["@name"];
		if (fieldname === objectfield) {
			// console.error("Found", fieldname);
			return f;
		}
	}
	throw "Can't find "+objectfield;
}

function getScriptFieldFieldTypeFieldByNameAttribute(fields, objectfield) {
	// console.error("Searching", fields);
	var f = findFieldByName(fields, objectfield)
	var fieldname = f["@name"];
	var type = f["@type"];
	var objectfield = getObjectField(f, type);
	return [ f, fieldname, type, objectfield];
}

function getScriptFieldFieldTypeField(fields, field) {
	var f = fields[field];
	var fieldname = f["@name"];
	var type = f["@type"];
	var objectfield = getObjectField(f, type);
	return [ f, fieldname, type, objectfield];
}

function setScriptFields(fields, def) {
	var scope = getScope();
	for (var field in fields) {
		var field_name_field_type_objectfield_name = getScriptFieldFieldTypeField(fields, field);
		var f = field_name_field_type_objectfield_name[0];
		var fieldname = field_name_field_type_objectfield_name[1];
		var type = field_name_field_type_objectfield_name[2];
		var objectfield = field_name_field_type_objectfield_name[3];
		var type_scope = setValueFromInterface(fieldname, f, objectfield);
		// console.error("SSF1", scope, fieldname, f, objectfield, type, def);
		setScriptField(scope, fieldname, f, objectfield, type, def);
		if (typeof type_scope !== 'undefined') {
			// console.error("SSF2", type_scope[1], fieldname, f, objectfield, type, def);
			setScriptField(type_scope[1], fieldname, f, objectfield, type, def);
		}

	}
				
}

function setScriptField(scope, field, f, objectfield, type, def) {
	if (typeof scriptField[getField(scope,field)] === 'undefined') {
		scriptField[getField(scope,field)] = [];
	}
	// set another reference
	scriptField[getField(scope,field)][scriptField[getField(scope,field)].length] = [ f, objectfield, type, def];
}

function setEnv(scope, protoField, newobject, nodeField, type, newdef) {
	var fieldname_field_scope = getInterface(protoField);
	if (typeof fieldname_field_scope !== 'undefined') {
		scope = fieldname_field_scope[2];
	}
	if (typeof envField[getField(scope,protoField)] === 'undefined') {
		envField[getField(scope,protoField)] = [];
	}
	// set another reference
	envField[getField(scope,protoField)][envField[getField(scope,protoField)].length] = [ newobject, nodeField, type, newdef];
	// console.error("setconnenv", envField[getField(scope,protoField)].length, scope, protoField, JSON.stringify(newobject), nodeField, type, newdef);
}

function getEnv(scope, protoField) {
	// console.error(">>>>>>", scope, protoField, JSON.stringify(envField[getField(scope,protoField)]));
	return envField[getField(scope,protoField)];
}

function setConnectField(scope, field, newobject, objectfield, type, newdef) {
	// console.error("setconn", scope, field, JSON.stringify(newobject), type, newdef);
	if (typeof protoField[getField(scope,field)] === 'undefined') {
		protoField[getField(scope,field)] = [];
	}
	protoField[getField(scope,field)][protoField[getField(scope,field)].length] = [ newobject, objectfield, type, newdef];
}

// In the ProtoBody (for the instance)
// p === "IS"
function setConnectFields(object, p, newobject) {
	var def = object["@DEF"]; // at same level as IS
	var newdef = saveDef(def);
	var connect = object[p]["connect"];
	var scope = getScope();
	for (var cfield in connect) {
		var f = connect[cfield];
		// console.error("Connect field", field, f);
		if (f) {
			var field = getScope(f["@protoField"]);
			var objectfield = f["@nodeField"];
			// console.error("Node field is", objectfield);
			var type_scope = setValueFromInterface(field, newobject, objectfield);
			var type = undefined;
			if (typeof type_scope !== 'undefined') {
				type = type_scope[0];
				setEnv(scope, field, newobject, objectfield, type, newdef);
				setConnectField(scope, field, newobject, objectfield, type, newdef);
				setConnectField(type_scope[1], field, newobject, objectfield, type, newdef);
			} else {
				setEnv(scope, field, newobject, objectfield, type, newdef);
				setConnectField(scope, field, newobject, objectfield, type, newdef);
			}
		}
	}
}

function setScriptConnectFields(file, object, p, newobject) {
	var connect = object[p]["connect"];
	var scope = getScope();
	var def = object["@DEF"];
	newobject["field"] = realPrototypeExpander(file, object["field"], true);
	var newdef = newobject["@DEF"]; // at same level as IS
	for (var cfield in connect) {
		var f = connect[cfield];
		if (f) {
			var field = getScope(f["@protoField"]);
			var objectfield = f["@nodeField"];
			// console.error("Connect field", field, objectfield);
			var field_name_field_type_objectfield_name = getScriptFieldFieldTypeFieldByNameAttribute(newobject["field"], objectfield);
			var f = field_name_field_type_objectfield_name[0];
			var fieldname = field_name_field_type_objectfield_name[1];
			var type = field_name_field_type_objectfield_name[2];
			var objectfield = field_name_field_type_objectfield_name[3];
			// console.error("Node field is", objectfield);
			var type_scope = setValueFromInterface(field, f, objectfield);
			if (typeof type_scope !== 'undefined') {
				type = type_scope[0];
				// setEnv(scope, field, newobject, objectfield, type, newdef);
				// console.error("SSF3", scope, field, f, objectfield, type, def);
				setScriptField(scope, field, f, objectfield, type, def);
				// console.error("SSF4", type_scope[1], field, f, objectfield, type, def);
				setScriptField(type_scope[1], field, f, objectfield, type, def);
			} else {
				// setEnv(scope, field, newobject, objectfield, type, newdef);
				// console.error("SSF5", scope, field, f, objectfield, type, def);
				setScriptField(scope, field, f, objectfield, type, def);
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
		var fieldname_field_scope = interfaceField[getField(scope,field)];
		//console.error("getinter", scope, field, fieldnamefield);
		if (fieldname_field_scope) {
			return fieldname_field_scope;
		}
		//console.error("looping", i);
	}
}

function setInterface(field, fieldname) {
	var scope = getScope();
	interfaceField[getField(scope,field["@name"])] = [fieldname, field, scope];
	// console.error("setinter", scope, field["@name"], fieldname, field[fieldname]);
}

function clearScope(field, object) {
	var scope = getScope();
	delete scriptField[getField(scope,field)];
	delete protoField[getField(scope,field)];
	zap(field, object);
}

function extractConnectedDef(scope, node) {
	var defobj;
	for (var sf in scriptField[getField(scope,node)]) {
		var obj = scriptField[getField(scope,node)][sf];
		if (typeof obj !== 'undefined') {
			if (typeof obj[3] !== 'undefined') {
				defobj = [getField(scope, obj[3]), obj[0]["@name"]];
				// console.error("def5 is", defobj);
			}
		}
	}
	if (typeof defobj === 'undefined') {
		for (var pf in protoField[getField(scope,node)]) {
			var obj = protoField[getField(scope,node)][pf];
			if (typeof obj !== 'undefined') {
				defobj = [obj[3], obj[1]];
				// console.error("def2 is", defobj);
			}
		}
	}
	if (typeof defobj === 'undefined') {
		for (var pf in protoField[getField(scope,"__DEF_FIELD__")]) {
			var obj = protoField[getField(scope,"__DEF_FIELD__")][pf];
			if (typeof obj !== 'undefined') {
				defobj = [obj[3], node];
				// console.error("def3 is", defobj);
			}
		}
	}
	if (typeof defobj === 'undefined') {
		defobj = [scope, node];
		// console.error("def4 is", defobj);
	}
	return defobj;
}

function setObjectValues(scope, field, fieldOrNode, value) {
	// console.error("resolve", scope, field, fieldOrNode, JSON.stringify(value));
	var foundOther = false;
	// branch out across children of a proto declare
	for (var pf in protoField[getField(scope,field)]) {
		var obj = protoField[getField(scope,field)][pf];
		if (typeof obj !== 'undefined') {
			// console.error("\t\tfoundprotovalue", scope, field, JSON.stringify(obj), fieldOrNode, JSON.stringify(value));
			setObjectValue(scope, field, obj, fieldOrNode, value);
			foundOther = true;
			// console.error("\t\tresultprotovalue", JSON.stringify(obj));
		} else {
			// console.error("protoundef", scope, field);
		}
	}

	// look for script fields
	for (var sf in scriptField[getField(scope,field)]) {
		var obj = scriptField[getField(scope,field)][sf];
		if (typeof obj !== 'undefined') {
			// console.error("\t\tfoundscriptvalue", scope, field, JSON.stringify(obj), fieldOrNode, JSON.stringify(value));
			setObjectValue(scope, field, obj, fieldOrNode, value);
			foundOther = true;
			// console.error("\t\tresultscriptvalue", JSON.stringify(obj));
		} else {
			// console.error("scriptundef", scope, field);
		}
	}

	if (foundOther) {
		return;
	}

	// find prototype up the scope stream
	for(var i = 0; i < scopeLength(); i++) {
		var parentScope = upScope(i);
		if (!parentScope) {
			break;
		}
		var envs = getEnv(parentScope, field);
		// console.error(i, parentScope, field, JSON.stringify(envs), JSON.stringify(value));
		for (var e in envs) {
			var obj = envs[e];
			// console.error("newobject", JSON.stringify(obj[0]));
			// console.error("nodeField", JSON.stringify(obj[1]));
			// console.error("type", JSON.stringify(obj[2]));
			// console.error("newdef", JSON.stringify(obj[3]));
			// console.error("parentscope", JSON.stringify(parentScope));
			if (typeof obj !== 'undefined' && obj[3].indexOf(parentScope) === obj[3].lastIndexOf(parentScope)) {
				// console.error("\t\tfoundenvvalue", parentScope, obj[1], JSON.stringify(obj), fieldOrNode, JSON.stringify(value));
				setObjectValue(parentScope, obj[1], obj, fieldOrNode, value);
				// console.error("\t\tresultenvvalue", JSON.stringify(obj));
			}
		}
	}
}

function setObjectValue(scope, field, obj, fieldOrNode, value) {
	// console.error("SOV", scope, field, obj, fieldOrNode, value);
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
	if (prefix === '@' && obj[1] === 'children') {
		prefix = '-';
	}
	if (prefix === '-' && obj[1] === 'value') {
		prefix = "@";
	}
	if (!Array.isArray(value) && obj[1] === 'children') {
		value = [value];
	}
	// console.error("SOVobjI", JSON.stringify(obj));
	// console.error("SOVobj0I", JSON.stringify(obj[0]));
	// console.error("SOVobj1I", JSON.stringify(obj[1]));
	// console.error("SOVobj2I", JSON.stringify(obj[2]));
	// console.error("SOVobj3I", JSON.stringify(obj[3]));
	// console.error("SOVlsI", JSON.stringify(obj[0][prefix+obj[1]]));
	// console.error("SOVrsI", JSON.stringify(value));
	obj[0][prefix+obj[1]] = value;// JSON.parse(JSON.stringify(value));
	// console.error("SOVvalueO", JSON.stringify(value));
	// console.error("SOVobj3O", JSON.stringify(obj[3]));
	// console.error("SOVobj2O", JSON.stringify(obj[2]));
	// console.error("SOVobj1O", JSON.stringify(obj[1]));
	// console.error("SOVobj0O", JSON.stringify(obj[0]));
	// console.error("SOVobjO", JSON.stringify(obj));
	// console.error("setresult", obj[0], "[", prefix, obj[1], "]", '=', value, 'alt', fieldOrNode);
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

	object = realPrototypeExpander(file, object, false);
	zapIs(object);
	// console.error("SCRIPTS", JSON.stringify(scriptField));
	// console.error("PROTOS", JSON.stringify(protoField, null, 2));
	return object;
}

function handleScript(file, object, p, newobject) {
	newobject[p] = realPrototypeExpander(file, object[p], true);
	// console.error("DEF is", newobject[p]["@DEF"]);
	setScriptFields(newobject[p]["field"], newobject[p]["DEF"]);
	var url  = newobject[p]["@url"];
	loadURLs(file, url, function(data, fileExt) {
		if (typeof data !== 'undefined') {
			newobject[p]["#sourceText"] = data.split(/\r?\n/);
			delete newobject[p]["@url"];
		}
	});
}

function handleProtoDeclare(file, object, p) {
	var name = object[p]["@name"];
	var def = object[p]["@DEF"];
	protos[name] = object[p];
	saveDef(def);
	// don't need to save def
	if (typeof object[p]["@appinfo"] !== 'undefined') {
		protos[name]["@appinfo"] = object[p]["@appinfo"];
	}
	if (typeof object[p]["@documentation"] !== 'undefined') {
		protos[name]["@documentation"] = object[p]["@documentation"];
	}
	pushScope("DECL"+name);
	names[def] = name;
	realPrototypeExpander(file, object[p], false);
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
	var newdef = saveDef(def);
	pushScope(def);
	if (typeof protos[name] === 'undefined' ||  typeof protos[name]['ProtoBody'] === 'undefined') {
		console.error("ProtoBody undefined for", name);
	} else {
		// console.error("Copying ProtoBody", name);
		var obj = protos[name]['ProtoBody']['-children'];
		// var bodydef = protos[name]['ProtoBody']["@DEF"];
		instance = JSON.parse(JSON.stringify(obj));
	}

	// instance is an array
	while (Array.isArray(instance) &&Object.keys(instance).length === 1) {
		instance = instance[0];
	}

	var firstobj = instance;
	while (Array.isArray(firstobj)) {
		// we only the DEF of the first node 
		firstobj = firstobj[0];
	}
	if (!Array.isArray(firstobj)) {
		if (typeof use !== 'undefined') {
			for (var q in firstobj) {
				if (q === "Group" || q == "Transform") {
					if (typeof firstobj[q] === 'object' && !Array.isArray(firstobj[q])) {
						firstobj[q]["@USE"] = getScope(use);  // there will be at least DEF with this USE
					} else {
						console.error("USE is Failed");
					}
				}
			}
		}

	}
	/*
	if (typeof bodydef !== 'undefined') {
		saveDef(bodydef);
		pushScope(bodydef);
	}
	*/
	var newobject = realPrototypeExpander(file, instance, false);

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
			value = realPrototypeExpander(file, value, false);
			popScope();
			getInterface(protoField);
			setObjectValues(getScope(),
			    protoField,
			    fieldOrNode,
			    value);
		}
		// clearScope(fieldname, newobject);
	}

	/*
	if (typeof bodydef !== 'undefined') {
		popScope();
	}
	*/
	popScope();
	popScope();
	return newobject;
}

function realPrototypeExpander(file, object, inScript) {
	if (typeof object === "object") {
		if (Array.isArray(object)) {
			var newobject = [];
		} else {
			var newobject = {};
		}
		for (var p in object) {
			var plc = p.toLowerCase();
			if (plc === 'script') {
				handleScript(file, object, p, newobject);
			} else if (plc === 'protodeclare') {
				handleProtoDeclare(file, object, p);
			} else if (plc === 'protointerface') {
				handleProtoInterface(file, object, p);
			} else if (plc === 'protobody') {
				realPrototypeExpander(file, object[p], inScript);
			} else if (plc === 'protoinstance') {
				newobject = handleProtoInstance(file, object, p);
			} else if (plc === 'connect') {
				realPrototypeExpander(file, object[p], inScript);
			} else if (plc === 'fieldvalue') {
				realPrototypeExpander(file, object[p], inScript);
			} else if (plc === 'field') {
				newobject[p] = realPrototypeExpander(file, object[p], inScript);
			} else if (plc === '@value') {
				newobject[p] = realPrototypeExpander(file, object[p], inScript);
				// console.error("@value is ", newobject[p]);
			} else if (plc === '-children') {
				newobject[p] = realPrototypeExpander(file, object[p], inScript);
				// console.error("-children is ", newobject[p]);
			} else if (plc === 'is') {
				if (inScript) {
					setScriptConnectFields(file, object, p, newobject);
				} else {
					setConnectFields(object, p, newobject);
				}
				realPrototypeExpander(file, object[p], inScript);
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
				/*
				if (typeof process != 'undefined') {
					process.stderr.write("d3 ");
				}
				*/
				setConnectField(getScope(), "__DEF_FIELD__", newobject, object[p], "SFString", newobject[p]);
			} else if (plc === '@use') {
				newobject[p] = getScope(object[p]);
				// console.error("USE for", object[p], "is", newobject[p]);
			} else {
				newobject[p] = realPrototypeExpander(file, object[p], inScript);
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
