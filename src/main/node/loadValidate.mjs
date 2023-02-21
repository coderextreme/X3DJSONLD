// JSON Schema imports
import Ajv2020 from "../../../node_modules/ajv/dist/2020.js";
import addFormats from "../../../node_modules/ajv-formats/dist/index.js";
import localize from '../../../node_modules/ajv-i18n/localize/index.js';

const ajv = new Ajv2020();
addFormats(ajv);
import x3d4 from "../schema/x3d-4.0-JSONSchema.json" assert { type: "json" };

// Convert JSON to DOM
import X3DJSONLD from './X3DJSONLD.mjs';
import fs from 'node:fs';

let JSONParser = Object.assign(X3DJSONLD, { processURLs : function(urls) { return urls; }});
var selectObjectFromJSObj = JSONParser.selectObjectFromJSObj;
var validate = { };

export function doValidate(json, validated_version, file, JSONParser, success, failure, e) {
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
				var selectedObject = JSONParser.selectObjectFromJSObj(json, instancePath);
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
			let confirm = function(error) {
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
      var validated_version = validate[version];
      if (typeof validated_version === 'undefined') {
          console.log("Adding schema: ", version);
          ajv.addSchema(schemajson);
	  validated_version = ajv.compile(schemajson);
      }
      validate[version] = validated_version;
      if (typeof validated_version === 'undefined') {
	      console.error("Schema not compiled");
      }
      return validated_version;
}

export function loadSchema(json, file, doValidate, JSONParser, success, failure) {
	var versions = { "4.0":true }
	var version = json.X3D["@version"];
	if (!versions[version]) {
		console.info("Can only validate version 4.0 presently. Switching version to 4.0.");
		version = "4.0";
	}
	var validated_version = validate[version];
        if (typeof validated_version === 'undefined') {
		      if (typeof $ === 'function' && typeof $.getJSON === 'function') {
			      $.getJSON(x3d4, function(schemajson) {
				      validated_version = addSchema(ajv, schemajson, version);
				      doValidate(json, validated_version, file, JSONParser, success, undefined);
				}).fail(function(e) {
				   doValidate(json, validated_version, file, JSONParser, undefined, failure, e);
				});
		      } else if (typeof fs === 'object') {
				var schemajson = x3d4;
				validated_version = addSchema(ajv, schemajson, version);
				doValidate(json, validated_version, file, JSONParser, success, undefined);
		      }
	} else {
	      doValidate(json, validated_version, file, JSONParser, success, undefined);
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
 * JSONParser -- JSONParser
 * callback -- returns the element whose scene children to append or insert into the DOM.
 */
export function loadX3DJS(DOMImplementation, jsobj, path, NS, loadSchema, doValidate, JSONParser, callback) {
	JSONParser.x3djsonNS = NS;
	loadSchema(jsobj, path, doValidate, JSONParser, function() {
		var child, xml;
		[ child, xml ] = JSONParser.loadJsonIntoXml(DOMImplementation, jsobj, path);
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
export function replaceX3DJSON(parent, json, url, NS, next) {

	loadX3DJS(DOMImplementation, json, url, NS, loadSchema, doValidate, JSONParser, function(child, xml) {
		if (child != null) {
			while (parent.firstChild) {
			    parent.removeChild(parent.firstChild);
			}
			parent.appendChild(child);
		}
		next(child, xml);
	});
}
