// JSON Schema imports
if (typeof CACHE === 'undefined') {
	var CACHE = {};
}
CACHE.validate = { };

X3DJSONLD = window.X3DJSONLD;

var Ajv2020 = window.Ajv2020;
var addFormats = window.addFormats;
var localize = window.localize;

const ajv = new Ajv2020({ allErrors: true, verbose: true}); // options can be passed, e.g. {allErrors: true}
addFormats(ajv, ["uri", "uri-reference"], window.fastFormats);

// import JSONSchema from "../schema/x3d-4.0-JSONSchema.json" assert { type: "json" };
// const JSONSchema = require("../schema/x3d-4.0-JSONSchema.json")
var JSONSchema = "http://coderextreme.net/X3DJSONLD/src/main/schema/x3d-4.0-JSONSchema.json";

var fs = require('fs');
//

X3DJSONLD = Object.assign(X3DJSONLD, { processURLs : function(urls) { return urls; }});
var selectObjectFromJSObj = X3DJSONLD.selectObjectFromJSObj;

function loadValidate() {

this.doValidate = function(json, validated_version, file, success, failure, e) {
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
};

this.validateSchema = function(ajv, schemajson, version) {
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
};

this.loadSchema = async function(json, file, success, failure) {
	var versions = { "4.0":true }
	var version = json.X3D["@version"];
	if (!versions[version]) {
		console.info("Can only validate version 4.0 presently. Switching version to 4.0.");
		version = "4.0";
	}
	var validated_version = CACHE.validate[version];
	if (typeof validated_version === 'undefined') {
		      if (typeof this.validateSchema === 'undefined') {
			      console.error("Can't find function this.validateSchema");
		      } else {
			      var vs = this.validateSchema;
		      }
		      if (typeof fs === 'object') {
				var schema = fs.readFileSync("../schema/x3d-"+version+"-JSONSchema.json");
				var schemajson = JSON.parse(schema.toString());
				validated_version = vs(ajv, schemajson, version);
				this.doValidate(json, validated_version, file, success, undefined);
		      } else {
			  var JSONSchema = "https://coderextreme.net/X3DJSONLD/src/main/schema/x3d-4.0-JSONSchema.json";
			  const response = await fetch(JSONSchema);
			  const schemajson = await response.json();
			  validated_version = vs(ajv, schemajson, version);
			  this.doValidate(json, validated_version, file, success, undefined);
				/*
			      $.getJSON(JSONSchema, function(schemajson) {
				      validated_version = vs(ajv, schemajson, version);
				      this.doValidate(json, validated_version, file, success, undefined);
				}).fail(function(e) {
				   this.doValidate(json, validated_version, file, undefined, failure, e);
				});
				*/
		      }
	} else {
	      this.doValidate(json, validated_version, file, success, undefined);
	}
};

	/**
	 * Load X3D JSON into an element.
	 * DOMImplementation - normally document.implementation
	 * jsobj - the JavaScript object to convert to XML and DOM.
	 * path - the path of the JSON file.
	 * NS - a namespace for X_ITE (optional) -- stripped out.
	 * callback -- returns the element whose scene children to append or insert into the DOM.
	 */
this.loadX3DJS = function(DOMImplementation, jsobj, path, NS, callback) {
	X3DJSONLD.x3djsonNS = NS;
	this.loadSchema(jsobj, path, function() {
		var child, xml;
		[ child, xml ] = X3DJSONLD.loadJsonIntoXml(DOMImplementation, jsobj, path);
		callback(child, xml);
	}, function(e) {
		console.error(e);
		callback(null, null);
	});
};

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
this.replaceX3DJSON = function(parent, json, url, NS, next) {
	this.loadX3DJS(DOMImplementation, json, url, NS, function(child, xml) {
		if (child != null) {
			while (parent.firstChild) {
			    parent.removeChild(parent.firstChild);
			}
			parent.appendChild(child);
		}
		next(child, xml);
	});
};
}

module.exports = loadValidate;
