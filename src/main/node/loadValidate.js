// var myAjv2020 = require("./ajvAll.js");
if (typeof myAjv2020 === 'undefined') {
	var Ajv2020 = window.Ajv2020;
	var addFormats = window.addFormats;
} else {
	var Ajv2020 = myAjv2020["Ajv2020"];
	var addFormats = myAjv2020["addFormats"];
}
if (typeof Ajv2020 === 'undefined' || typeof addFormats === 'undefined') {
	Ajv2020 = window.Ajv2020;
	addFormats = window.addFormats;
}
var ajv = new Ajv2020({ strict: false });
addFormats(ajv, {mode: "full", formats: ["uri-reference", "uri"], keywords: true});  // fast mode is "fast"

var fs = require('fs');
var http = require('http');


/*
var localize = require('ajv-i18n');
*/
if (typeof X3DJSONLD === 'undefined') {
	var X3DJSONLD = require('./X3DJSONLD.js');
}
if (typeof X3DJSONLD === 'undefined') {
	X3DJSONLD = window.X3DJSONLD;
}

if (typeof CACHE === 'undefined') {
	var CACHE = {};
}

CACHE.validate = { };

X3DJSONLD = Object.assign(X3DJSONLD, { processURLs : function(urls) { return urls; }});
var selectObjectFromJSObj = X3DJSONLD.selectObjectFromJSObj;

function doOneErr(err, file, version) {
	let error = "\r\n keyword: " + err.keyword + "\r\n";
	var instancePath = err.instancePath.replace(/^\./, "").replace(/[\.\[\]']+/g, " > ").replace(/ >[ \t]*$/, "");
	error += " instancePath: " + instancePath+ "\n";
	var selectedObject = X3DJSONLD.selectObjectFromJSObj(json, instancePath);
	error += " value: " + JSON.stringify(selectedObject,
		function(k, v) {
		    var v2 = structuredClone(v);
		    if (typeof v2 === 'object') {
			    for (var o in v2) {
				if (typeof v2[o] === 'object') {
					    v2[o] = "|omitted|";
				}
			    }
		    }
		    return v2;
		}) + "\n";
	error += " location in document: " + err.instancePath + "\r\n";
	error += " message: " + err.message + "\r\n";
	error += " params: " + JSON.stringify(err.params) + "\r\n";
	error += " file: " + file + "\r\n";
	error += " version: " + version + "\r\n";
	return error
}

function doSuppressCheck(err, file, version) {
	let error = "";
	let suppress = true;
	if ('params' in err && 'missingProperty' in err.params && err.params.missingProperty === '@USE') {
		if (suppress) {
			console.log("Suppressing @USE missing property.  Use $ node x3dvalidate.js --fullreport file ... to reveal possibly confusing errors");
		} else {
			error += doOneErr(err, file, version);

		}
	} else if ('params' in err && 'passingSchemas' in err.params && err.params.passingSchemas === null) {
		if (suppress) {
			console.log("Suppressing null passingSchemas.  Use $ node x3dvalidate.js --fullreport file ... to reveal possibly confusing errors");
		} else {
			error += doOneErr(err, file, version);
		}
	} else {
		error += doOneErr(err, file, version);
	}
	return error;

}

var doValidate = function doValidate(json, validated_version, file, success, failure, e) {
	var retval = false;
	try {
		var version = json.X3D["@version"];
	} catch (bv) {
		bv = "Can't get X3D or perhaps @version: " + bv;
		if (typeof alert === 'function') {
			alert(bv);
		}
		console.error(bv);
	}
	if (e) {
		if (typeof alert === 'function') {
			alert(e);
		}
		console.error(e);
	}
	if (typeof validated_version !== 'undefined') {
		var valid = validated_version(json);
		if (!valid) {
			var errs = validated_version.errors;
			/*
			if (typeof localize === 'function') {
				localize(validated_version.errors);
			}
			*/
			var error = "";
			for (var e in errs) {
				error += doSuppressCheck(errs[e], file, version);
			}
		}
		if (typeof confirm !== 'function') {
			confirm = function(error) {
				return true;
			};
		}

		retval = (valid || confirm(error));
	}
	if (retval && typeof success == 'function') {
		console.log("Success validating", file);
		success();
	} else if (typeof failure === 'function') {
		failure(e);
	} else {
		console.error("User selected failure");
	}
}

function addSchema(ajv, schemajson, version) {
      var validated_version = CACHE.validate[version];
      if (typeof validated_version === 'undefined') {
          console.log("Adding schema: ", version);
          ajv.addSchema(schemajson);
	  validated_version = ajv.compile(schemajson);
      }
      CACHE.validate[version] = validated_version;
      if (typeof validated_version === 'undefined') {
	      console.error("Schema not compiled");
      }
      return validated_version;
}

async function loadSchemaJson(version) {
  try {
	  const response = await fetch("../schema/x3d-"+version+"-JSONSchema.json");
	  const jsonData = await response.json();
	  return jsonData;
  } catch (e) {
	  alert("Failed to load schema"+e);
  }
}

loadSchema = async function loadSchema(json, file, success, failure) {
	var versions = { "4.0":true };
	var version = "4.0";
	try {
		version = json.X3D["@version"];
	} catch {
		console.log("No version found, defaulting to 4.0");
	}
	if (!versions[version]) {
		console.info("Can only validate version 4.0 presently. Switching version to 4.0.");
		version = "4.0";
	}
	var validated_version = CACHE.validate[version];
        if (typeof validated_version === 'undefined') {
		if (typeof fs === 'object') {
			var schema = fs.readFileSync("../schema/x3d-"+version+"-JSONSchema.json");
			var schemajson = JSON.parse(schema.toString());
			validated_version = addSchema(ajv, schemajson, version);
			doValidate(json, validated_version, file, success, undefined);
		} else {
			var schemajson = await loadSchemaJson(version);
			validated_version = addSchema(ajv, schemajson, version);
			doValidate(json, validated_version, file, success, undefined);
		}
	} else {
	      doValidate(json, validated_version, file, success, undefined);
	}
}
/**
 * Load X3D JSON into an element.
 * DOMImplementation - normally document.implementation
 * jsobj - the JavaScript object to convert to XML and DOM.
 * path - the path of the JSON file.
 * NS - a namespace for X_ITE (optional) -- stripped out.
 * callback -- returns the element whose scene children to append or insert into the DOM.
 */
loadX3DJS = function loadX3DJS(DOMImplementation, jsobj, path, NS, callback) {
	X3DJSONLD.x3djsonNS = NS;
	loadSchema(jsobj, path, function() {
		var child, xml;
		[ child, xml ] = X3DJSONLD.loadJsonIntoXml(DOMImplementation, jsobj, path);
		callback(child, xml);
	}, function(e) {
		console.error(e);
		callback(null, null);
	});
}

/*
 * replaceX3DJSON
 * replace children of an element with DOM created from X3D JSON.
 *	also, generate xml for inclusion elsewhere
 *
 * parent -- parent DOM element
 * json (json object) -- json to convert to DOM
 * url -- name of path/filename json loaded from
 * NS -- XML namespace (optional)
 * next -- to return the element or null
 * returns element loaded, followed by xml
 */
replaceX3DJSON = function replaceX3DJSON(parent, json, url, NS, next) {

	loadX3DJS(DOMImplementation, json, url, NS, function(child, xml) {
		if (child != null) {
			while (parent.firstChild) {
			    parent.removeChild(parent.firstChild);
			}
			parent.appendChild(child);
		}
		next(child, xml);
	});
}

if (typeof window !== 'undefined') {
	window.replaceX3DJSON = replaceX3DJSON;
	window.loadSchema = loadSchema;
	window.loadX3DJS = loadX3DJS;
	window.doValidate = doValidate;
	if (typeof myAjv2020 !== 'undefined') {
		window.myAjv2020 = myAjv2020;
	}
	window.Ajv2020 = Ajv2020;
	window.addFormats = addFormats;
}
if (typeof module === 'object')  {
	module.exports = {
		replaceX3DJSON: replaceX3DJSON,
		loadSchema: loadSchema,
		loadX3DJS: loadX3DJS,
		doValidate: doValidate,
		myAjv2020 : myAjv2020,
		Ajv2020 : Ajv2020,
		addFormats : addFormats
	};
}
