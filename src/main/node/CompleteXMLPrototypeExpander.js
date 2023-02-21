// Complete X3D XML to X3D XML Prototype Expander

import fs from 'node:fs';

var X3DJSONLD = require('./X3DJSONLD.mjs');
var Browser = X3DJSONLD.Browser;

var PROTOS = require('./PrototypeExpander')

var xmldom = require('@xmldom/xmldom');
var DOMImplementation = new xmldom.DOMImplementation();

var convertJSON = require('./convertJSON.js');
var loadSchema = convertJSON.loadSchema;
var doValidate = convertJSON.doValidate;
var loadX3DJS = convertJSON.loadX3DJS;
var DOM2JSONSerializer = require('./DOM2JSONSerializer.mjs');
var serializer = new DOM2JSONSerializer();

var Script = require('./Script');
var LOG = Script.LOG;

var mapToMethod = require('./mapToMethod.mjs');
var mapToMethod2 = require('./mapToMethod2.js');
var fieldTypes = require('./fieldTypes.mjs');

if (typeof mapToMethod2 !== 'undefined') {
	for (var map in mapToMethod2) {
		Object.assign(mapToMethod[map], mapToMethod2[map]);
	}
}

// Convert from XML to JSON
process.argv.shift();
process.argv.shift();

function ProcessJSON(json, file) {
	// Run it through the prototype expander
	json = PROTOS.prototypeExpander(file, json, "");

	var NS = "https://www.web3d.org/specifications/x3d";
	loadX3DJS(DOMImplementation, json, file, NS, loadSchema, doValidate, X3DJSONLD, function(element, xml) {
		var str = serializer.serializeToString(json, element, 0, mapToMethod, fieldTypes);
		var outfile = "ppp/"+file.substr(0, file.lastIndexOf("."))+".x3d";
		try {
			fs.mkdirSync(outfile.substring(0, outfile.lastIndexOf("/")));
		} catch (e) {
			console.error("Error creating dir for "+outfile);
		}
		fs.writeFileSync(outfile, str);
		console.error("Processed XML", outfile);
	});
	return json;
}

var files = process.argv;
for (var f in files) {
	var file = files[f];
	try {
		// Find the JSON file and read it in
		var file = file.substr(0, file.lastIndexOf("."))+".json";
		var json = JSON.parse(fs.readFileSync(file).toString());
		ProcessJSON(json, file);
	} catch (e) {
		console.error("Error reading", file, e);
		console.trace();
	}
}
