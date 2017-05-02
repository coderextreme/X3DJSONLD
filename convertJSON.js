"use strict";

let fs = require('fs');
let mkdirp = require('node-mkdirp');
let mapToMethod = require('./mapToMethod.js');
let mapToMethod2 = require('./mapToMethod2.js');
let jsonlint = require('jsonlint');
let fieldTypes = require('./fieldTypes.js');
let Ajv = require('ajv');

let xmldom = require('xmldom');
let DOMImplementation = new xmldom.DOMImplementation();

let X3DJSONLD = require('./X3DJSONLD.js');
let ConvertToX3DOM = X3DJSONLD.ConvertToX3DOM;

var Script = require('./Script');
var LOG = Script.LOG;

Object.assign(mapToMethod, {
});

for (let map in mapToMethod2) {
	Object.assign(mapToMethod[map], mapToMethod2[map]);
}

var validate = function() { return false; }

function doValidate(json, success, failure, e) {
	var retval = false;
	if (e) {
		console.error(e);
	}
	var version = json.X3D["@version"];
	if (typeof validate[version] !== 'undefined') {
		var valid = validate[version](json);
		if (!valid) {
			var errs = validate[version].errors;
			var error = ""
			for (var e in errs) {
				error += "\r\n keyword: " + errs[e].keyword + "\r\n";
				error += " dataPath: " + errs[e].dataPath + "\r\n";
				error += " message: " + errs[e].message + "\r\n";
				error += " params: " + JSON.stringify(errs[e].params) + "\r\n";
			}
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

function loadSchema(json, doValidate, success, failure) {
	console.log("Loading schema");
	var versions = { "3.0":true,"3.1":true,"3.2":true,"3.3":true,"3.4":true, "4.0":true }
	var version = json.X3D["@version"];
	if (!versions[version]) {
		console.error("Can only validate version 3.0-4.0 presently. Switching version to 3.3.");
		version = "3.3";
	}
        if (typeof validate[version] === 'undefined') {
		var ajv = new Ajv({ allErrors:true});
		ajv.addFormat("uri", /^(?:[a-z][a-z0-9+\-.]*:)?(?:\/?\/(?:(?:[a-z0-9\-._~!$&'()*+,;=:]|%[0-9a-f]{2})*@)?(?:\[(?:(?:(?:(?:[0-9a-f]{1,4}:){6}|::(?:[0-9a-f]{1,4}:){5}|(?:[0-9a-f]{1,4})?::(?:[0-9a-f]{1,4}:){4}|(?:(?:[0-9a-f]{1,4}:){0,1}[0-9a-f]{1,4})?::(?:[0-9a-f]{1,4}:){3}|(?:(?:[0-9a-f]{1,4}:){0,2}[0-9a-f]{1,4})?::(?:[0-9a-f]{1,4}:){2}|(?:(?:[0-9a-f]{1,4}:){0,3}[0-9a-f]{1,4})?::[0-9a-f]{1,4}:|(?:(?:[0-9a-f]{1,4}:){0,4}[0-9a-f]{1,4})?::)(?:[0-9a-f]{1,4}:[0-9a-f]{1,4}|(?:(?:25[0-5]|2[0-4]\d|[01]?\d\d?)\.){3}(?:25[0-5]|2[0-4]\d|[01]?\d\d?))|(?:(?:[0-9a-f]{1,4}:){0,5}[0-9a-f]{1,4})?::[0-9a-f]{1,4}|(?:(?:[0-9a-f]{1,4}:){0,6}[0-9a-f]{1,4})?::)|[Vv][0-9a-f]+\.[a-z0-9\-._~!$&'()*+,;=:]+)\]|(?:(?:25[0-5]|2[0-4]\d|[01]?\d\d?)\.){3}(?:25[0-5]|2[0-4]\d|[01]?\d\d?)|(?:[a-z0-9\-._~!$&'()*+,;=]|%[0-9a-f]{2})*)(?::\d*)?(?:\/(?:[a-z0-9\-._~!$&'()*+,;=:@]|%[0-9a-f]{2})*)*|\/(?:(?:[a-z0-9\-._~!$&'()*+,;=:@]|%[0-9a-f]{2})+(?:\/(?:[a-z0-9\-._~!$&'()*+,;=:@]|%[0-9a-f]{2})*)*)?|(?:[a-z0-9\-._~!$&'()*+,;=:@]|%[0-9a-f]{2})+(?:\/(?:[a-z0-9\-._~!$&'()*+,;=:@]|%[0-9a-f]{2})*)*)?(?:\?(?:[a-z0-9\-._~!$&'()*+,;=:@\/?]|%[0-9a-f]{2})*)?(?:\#(?:[a-z0-9\-._~!$&'()*+,;=:@\/?]|%[0-9a-f]{2})*)?$/i);

		
		console.log("Reading MetaSchema");
		fs.readFile('draft-04-JSONSchema.json', function(err, metaschema) {
		      if (err) {
			      console.log("Failed to load meta schema", err);
			      doValidate(json, success, failure, err);
		      } else {
			      console.log("MetaSchema received");
			      var metaschemajson = JSON.parse(metaschema.toString());
			      console.log("MetaSchema parsed");
			      ajv.addMetaSchema(metaschemajson);
			      console.log("MetaSchema added");
			      console.log("Reading Schema");
			      fs.readFile("x3d-"+version+"-JSONSchema.json", function(err, schema) {
				   // try {
				      if (err) {
			      	              console.log("Failed to load schema", err);
					      doValidate(json, success, failure, err);
				      } else {
					      console.log("Schema received");
					      var schemajson = JSON.parse(schema.toString());
					      console.log("Schema parsed");
					      ajv.addSchema(schemajson);
					      console.log("Schema", version, "added");
					      validate[version] = ajv.compile(schemajson);
					      if (typeof validate[version] !== 'undefined') {
						      console.log("Schema compiled");
					      } else {
						      console.log("Schema not compiled");
					      }
					      doValidate(json, success, failure);
				       }
				});
			}
		});
	} else {
	      doValidate(json, success, failure);
	}
}

function convertJSON(options) {

	var files = process.argv;
	for (var f in files) {
		var file = files[f];
		if (file.match(/node_modules|package.json|JSONSchema/)) {
			continue;
		}
		//try {  
			var basefile = file.substr(0, file.lastIndexOf("."));
			var file = basefile+".json";
			var str = fs.readFileSync(file).toString();
			if (typeof str === 'undefined') {
				throw("Read nothing, or possbile error");
			}
			console.log("Parsing json");
			var json = jsonlint.parse(str);
			var xml = new LOG();
			loadX3DJS(json, file, xml, undefined, loadSchema, doValidate, function(element) {
				if (typeof element === undefined) {
					throw ("Undefined element returned from loadX3DJS()")
				}
				if (typeof element === null) {
					throw ("Null element returned from loadX3DJS()")
				}
				// filename conversion goes here.
				basefile = basefile.replace(/^[cC]:\/x3d-code\//g, "")
				basefile = basefile.replace(/-|\.| /g, "_")
				// handle filenames with leading zeros and java keywords
				basefile = basefile.replace(/^(.*[\\\/])([0-9].*|default|switch|for)$/, "$1_$2")
				mkdirp(basefile.substr(0, basefile.lastIndexOf("/")));

				var outfile = basefile+".json";
				fs.writeFileSync(outfile, str);
				for (var ser in options) {
					var serializer = require(ser);
					str = new serializer().serializeToString(json, element, basefile, mapToMethod, fieldTypes)
					if (typeof str !== 'undefined') {
						var outfile = basefile+options[ser];
						fs.writeFileSync(outfile, str);
					} else {
						throw("Wrote nothing, serializer returned nothing");
					}
				}
			});
		/*
		} catch (e) {
			console.error("================================================================================");
			console.error(file);
			console.error("Error:", e);
		}
		*/
	}
}


/**
 * json -- JavaScript JSON object
 * path -- used for determining subURLs
 * xml -- unused, see X3DJSONLD.js version
 * NS -- ununsed, see X3DJSONLD.js version
 * loadSchema -- to load JSON schema
 * doValidate -- function to validate JSON
 * callback -- function which receives return element
 */

function loadX3DJS(json, path, xml, NS, loadSchema, doValidate, callback) {
	loadSchema(json, doValidate, function() {
		if (typeof json === 'undefined') {
			console.error('json undefined.  Look in', path, 'for hints');
		} else {
			console.error('json found in', path);
		}
		var version = json.X3D["@version"];
		var docType = DOMImplementation.createDocumentType("X3D", 'ISO//Web3D//DTD X3D '+version+'//EN" "http://www.web3d.org/specifications/x3d-'+version+'.dtd', null);
		var document = DOMImplementation.createDocument(null, "X3D", docType);
		// Bring in JSON to DOM/XML conversion --  used to build DOM/XML.
		X3DJSONLD.setDocument(document);
		X3DJSONLD.setCDATACreateFunction(function(document, element, str) {
			// for script nodes
			/*
			var child = document.createCDATASection(str);
			*/
			let y = str
				.replace(/'([^'\r]*)\n([^']*)'/g, "'$1\\n$2'")
				.replace(/&lt;/g, "<")
				.replace(/&gt;/g, ">")
				.replace(/&amp;/g, "&")
			;
			var child = document.createCDATASection(y);
			if (str !== y) {
				// console.log("CDATA Replacing",str,"with",y);
			}
			element.appendChild(child);
		});

		document.insertBefore(document.createProcessingInstruction('xml', 'version="1.0" encoding="'+json.X3D["encoding"]+'"'), document.doctype);
		var element = document.getElementsByTagNameNS(null, "X3D")[0];
		element.setAttribute("xmlns:xsd", 'http://www.w3.org/2001/XMLSchema-instance');
		ConvertToX3DOM(json, "", element, path);
		callback(element);
	}, function(e) {
		console.error("erroring", e);
		callback(null);
	});
}

if (typeof module === 'object')  {
	module.exports = {
		loadX3DJS: loadX3DJS,
		convertJSON: convertJSON,
		loadSchema: loadSchema,
		doValidate: doValidate
	};
}
