if (typeof Ajv2000 === 'undefined') {
	if (typeof window === 'undefined') {
		var Ajv2020 = require("../../../node_modules/ajv/dist/2020.js");
	} else {
		Ajv2020 = window.Ajv2020;
	}
}
if (typeof addFromats === 'undefined') {
	if (typeof window === 'undefined') {
		var addFormats = require("ajv-formats")
	}
		
}
const ajv = new Ajv2020();
addFormats(ajv, {mode: "full"})
var fs = require('fs');
var localize = require('ajv-i18n');
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

doValidate = function doValidate(json, validated_version, file, X3DJSONLD, success, failure, e) {
	var retval = false;
	if (e) {
		if (typeof alert === 'function') {
			alert(e);
		}
		console.error(e);
	}
	var version = json.X3D["@version"];
	if (typeof validated_version !== 'undefined') {
		var valid = validated_version(json);
		if (!valid) {
			var errs = validated_version.errors;
			if (typeof localize === 'function') {
				localize(validated_version.errors);
			}
			var error = "";
			for (var e in errs) {
				error += "\n keyword: " + errs[e].keyword + "\n";
				var instancePath = errs[e].instancePath.replace(/^\./, "").replace(/[\.\[\]']+/g, " > ").replace(/ >[ \t]*$/, "");
	
				error += " instancePath: " + instancePath+ "\n";
				var selectedObject = X3DJSONLD.selectObjectFromJSObj(json, instancePath);
				error += " value: " + JSON.stringify(selectedObject,
					function(k, v) {
					    var v2 = JSON.parse(JSON.stringify(v));
					    if (typeof v2 === 'object') {
						    for (var o in v2) {
					    		if (typeof v2[o] === 'object') {
								    v2[o] = "|omitted|";
							}
					            }
					    }
					    return v2;
					}) + "\n";
				error += " message: " + errs[e].message + "\n";
				error += " params: " + JSON.stringify(errs[e].params) + "\n";
				error += " file: " + file + "\n";
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

loadSchema = function loadSchema(json, file, doValidate, X3DJSONLD, success, failure) {
	var versions = { "4.0":true }
	var version = json.X3D["@version"];
	if (!versions[version]) {
		console.info("Can only validate version 4.0 presently. Switching version to 4.0.");
		version = "4.0";
	}
	var validated_version = CACHE.validate[version];
        if (typeof validated_version === 'undefined') {
		      if (typeof $ === 'function' && typeof $.getJSON === 'function') {
			      $.getJSON("../schema/x3d-"+version+"-JSONSchema.json", function(schemajson) {
				      validated_version = addSchema(ajv, schemajson, version);
				      doValidate(json, validated_version, file, X3DJSONLD, success, undefined);
				}).fail(function(e) {
				   doValidate(json, validated_version, file, X3DJSONLD, undefined, failure, e);
				});
		      } else if (typeof fs === 'object') {
				var schema = fs.readFileSync("../schema/x3d-"+version+"-JSONSchema.json");
				var schemajson = JSON.parse(schema.toString());
				validated_version = addSchema(ajv, schemajson, version);
				doValidate(json, validated_version, file, X3DJSONLD, success, undefined);
		      }
	} else {
	      doValidate(json, validated_version, file, X3DJSONLD, success, undefined);
	}
}
/**
 * Load X3D JSON into an element.
 * DOMImplementation - normally document.implementation
 * jsobj - the JavaScript object to convert to XML and DOM.
 * path - the path of the JSON file.
 * NS - a namespace for X_ITE (optional) -- stripped out.
 * loadSchema -- the loadSchema function
 * doValidate -- the doValidate function
 * X3DJSONLD -- X3DJSONLD
 * callback -- returns the element whose scene children to append or insert into the DOM.
 */
loadX3DJS = function loadX3DJS(DOMImplementation, jsobj, path, NS, callback) {
	X3DJSONLD.x3djsonNS = NS;
	loadSchema(jsobj, path, doValidate, X3DJSONLD, function() {
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
}
if (typeof module === 'object')  {
	module.exports = {
		replaceX3DJSON: replaceX3DJSON,
		loadSchema: loadSchema,
		loadX3DJS: loadX3DJS,
		doValidate: doValidate
	};
}
