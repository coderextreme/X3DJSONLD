"use strict";

var fs = require('fs');
var mkdirp = require('node-mkdirp');
var mapToMethod = require('./mapToMethod.js');
var config = require('./config.js');
var mapToMethod2 = require('./mapToMethod2.js');
var jsonlint = require('jsonlint');
var fieldTypes = require('./fieldTypes.js');
var Ajv = require('ajv');
var ajv = new Ajv();
var localize = require('ajv-i18n');

var xmldom = require('xmldom');
var DOMImplementation = new xmldom.DOMImplementation();

var X3DJSONLD = require('./X3DJSONLD.js');
X3DJSONLD = Object.assign(X3DJSONLD, { processURLs : function(urls) { return urls; }});
var selectObjectFromJSObj = X3DJSONLD.selectObjectFromJSObj;

var Script = require('./Script');
var LOG = Script.LOG;

for (var par in mapToMethod2) {
	for (var child in mapToMethod2[par]) {
		mapToMethod[par][child] = mapToMethod2[par][child];
	}
}

var validate = function() { return false; }

function doValidate(json, validated_version, file, X3DJSONLD, success, failure) {
	var retval = false;
	var version = json.X3D["@version"];
	var error = ""
	if (typeof validated_version !== 'undefined') {
		var valid = validated_version(json);
		if (!valid) {
			console.error("================================================================================");
			console.error("File:", file);
			localize.en(validated_version.errors);
		        // error += ajv.errorsText(validated_version.errors, { separator: '\n'});
			var errs = validated_version.errors;
			for (var e in errs) {
				error = "\r\n keyword: " + errs[e].keyword + "\r\n";
				var dataPath = errs[e].dataPath.replace(/^\./, "").replace(/[\.\[\]']+/g, " > ").replace(/ >[ \t]*$/, "");
	
				error += " dataPath: " + dataPath+ "\r\n";
				var selectedObject = X3DJSONLD.selectObjectFromJSObj(json, dataPath);
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
					}) + "\r\n";
				error += " message: " + errs[e].message + "\r\n";
				error += " params: " + JSON.stringify(errs[e].params) + "\r\n";
				error += " file: " + file + "\r\n";
				error += " version: " + version + "\r\n";
				console.error(error);
			}
			failure("Errors present");
		} else {
			if (typeof success == 'function') {
				success();
			} else {
				failure("No success function");
			}
		}
	} else {
		failure("Schema not loaded");
	}
}

function loadSchema(json, file, doValidate, X3DJSONLD, success, failure) {
	var versions = { "3.0":true,"3.1":true,"3.2":true,"3.3":true,"3.4":true, "4.0":true }
	var version = json.X3D["@version"];
	if (!versions[version]) {
		console.error("Can only validate version 3.0-4.0 presently. Switching version to 3.3.");
		version = "3.3";
	}
	var validated_version = validate[version];
        if (typeof validated_version === 'undefined') {
		/*
		ajv.addFormat("uri", /^(?:[a-z][a-z0-9+\-.]*:)?(?:\/?\/(?:(?:[a-z0-9\-._~!$&'()*+,;=:]|%[0-9a-f]{2})*@)?(?:\[(?:(?:(?:(?:[0-9a-f]{1,4}:){6}|::(?:[0-9a-f]{1,4}:){5}|(?:[0-9a-f]{1,4})?::(?:[0-9a-f]{1,4}:){4}|(?:(?:[0-9a-f]{1,4}:){0,1}[0-9a-f]{1,4})?::(?:[0-9a-f]{1,4}:){3}|(?:(?:[0-9a-f]{1,4}:){0,2}[0-9a-f]{1,4})?::(?:[0-9a-f]{1,4}:){2}|(?:(?:[0-9a-f]{1,4}:){0,3}[0-9a-f]{1,4})?::[0-9a-f]{1,4}:|(?:(?:[0-9a-f]{1,4}:){0,4}[0-9a-f]{1,4})?::)(?:[0-9a-f]{1,4}:[0-9a-f]{1,4}|(?:(?:25[0-5]|2[0-4]\d|[01]?\d\d?)\.){3}(?:25[0-5]|2[0-4]\d|[01]?\d\d?))|(?:(?:[0-9a-f]{1,4}:){0,5}[0-9a-f]{1,4})?::[0-9a-f]{1,4}|(?:(?:[0-9a-f]{1,4}:){0,6}[0-9a-f]{1,4})?::)|[Vv][0-9a-f]+\.[a-z0-9\-._~!$&'()*+,;=:]+)\]|(?:(?:25[0-5]|2[0-4]\d|[01]?\d\d?)\.){3}(?:25[0-5]|2[0-4]\d|[01]?\d\d?)|(?:[a-z0-9\-._~!$&'()*+,;=]|%[0-9a-f]{2})*)(?::\d*)?(?:\/(?:[a-z0-9\-._~!$&'()*+,;=:@]|%[0-9a-f]{2})*)*|\/(?:(?:[a-z0-9\-._~!$&'()*+,;=:@]|%[0-9a-f]{2})+(?:\/(?:[a-z0-9\-._~!$&'()*+,;=:@]|%[0-9a-f]{2})*)*)?|(?:[a-z0-9\-._~!$&'()*+,;=:@]|%[0-9a-f]{2})+(?:\/(?:[a-z0-9\-._~!$&'()*+,;=:@]|%[0-9a-f]{2})*)*)?(?:\?(?:[a-z0-9\-._~!$&'()*+,;=:@\/?]|%[0-9a-f]{2})*)?(?:\#(?:[a-z0-9\-._~!$&'()*+,;=:@\/?]|%[0-9a-f]{2})*)?$/i);
		*/

		
		try {
			var metaschema = fs.readFileSync('../schema/draft-07-JSONSchema.json');
			var metaschemajson = JSON.parse(metaschema.toString());
			ajv.addMetaSchema(metaschemajson);
		} catch (e) {
		}
		var schema = fs.readFileSync("../schema/x3d-"+version+"-JSONSchema.json");
		var schemajson = JSON.parse(schema.toString());
		try {
			ajv.addSchema(schemajson);
		} catch (e) {
		}
		validated_version = ajv.compile(schemajson);
		validate[version] = validated_version;
		if (typeof validated_version === 'undefined') {
			console.error("Schema", version, "not compiled");
		}
		doValidate(json, validated_version, file, X3DJSONLD, success, failure);
	} else {
		doValidate(json, validated_version, file, X3DJSONLD, success, failure);
	}
}

function convertJSON(options) {

	var files = process.argv;
	for (var f in files) {
		var file = files[f];
		if (file.match(/node_modules|package.json|JSONSchema/)) {
			continue;
		}
		var basefile = file.substr(0, file.lastIndexOf("."));
		var file = basefile+".json";
		var str = fs.readFileSync(file).toString();
		if (typeof str === 'undefined') {
			throw("Read nothing, or possbile error");
		}
		var json = null;
		try {  
			json = JSON.parse(str);
		} catch (e) {
			console.error("================================================================================");
			console.error("File:", file);
			console.error("Error:", e);
			continue;
		}
		var xml = new LOG();
		var NS = "http://www.web3d.org/specifications/x3d";
		X3DJSONLD.loadX3DJS(DOMImplementation, json, file, xml, NS, loadSchema, doValidate, X3DJSONLD, function(element, xmlDoc) {
			if (typeof element === undefined) {
				throw ("Undefined element returned from loadX3DJS()")
			}
			if (typeof element === null) {
				throw ("Null element returned from loadX3DJS()")
			}
			// filename conversion goes here.
			/*
			var x3dcodeind = basefile.indexOf(config.x3dcode);
			if (x3dcodeind === 0) {
				basefile = basefile.substring(config.x3dcode.length);
			}
			*/
			// console.error("basefile0", basefile);
			basefile = basefile.replace(/^C:\//, "")
			basefile = basefile.replace(/^\.\.\//, "")
			basefile = basefile.replace(/-|\.| /g, "_")
			// handle filenames with leading zeros and java keywords
			basefile = basefile.replace(/^(.*[\\\/])([0-9].*|default|switch|for)$/, "$1_$2")

			for (var ser in options) {
				var serializer = require(options[ser].serializer);
				var co = options[ser].codeOutput+basefile;
				str = new serializer().serializeToString(json, element, co, mapToMethod, fieldTypes)
				if (typeof str !== 'undefined') {
					// console.error("basefile", basefile);
					var outfile = options[ser].folder+basefile+options[ser].extension
					// console.error("outfile", outfile);
					mkdirp(outfile.substr(0, outfile.lastIndexOf("/")));
					fs.writeFileSync(outfile, str);
				} else {
					throw("Wrote nothing, serializer returned nothing");
				}
			}
		});
	}
}


/*
 * replaceX3DJSON
 * replace children of and element with DOM created from X3D JSON.
 *	also, generate xml for inclusion elsewhere
 *
 * parent -- parent DOM element
 * json (json object) -- json to convert to DOM
 * url -- name of path/filename json loaded from
 * xml (array or LOG, must have push function which takes a string) -- xml output (optional)
 * NS -- XML namespace (optional)
 * next -- to return the element or null
 * returns element loaded
 */
function replaceX3DJSON(parent, json, url, xml, NS, next) {

	X3DJSONLD.loadX3DJS(DOMImplementation, json, url, xml, NS, loadSchema, doValidate, X3DJSONLD, function(child) {
		if (child != null) {
			while (parent.firstChild) {
			    parent.removeChild(parent.firstChild);
			}
			parent.appendChild(child);
		}
		next(child);
	});
}

if (typeof module === 'object')  {
	module.exports = {
		replaceX3DJSON: replaceX3DJSON,
		convertJSON: convertJSON,
		loadSchema: loadSchema,
		doValidate: doValidate
	};
}
