// Complete X3D XML to X3D XML

if (typeof window === 'undefined') {
  var fs = await import('fs');
}
import xmldom from '@xmldom/xmldom';

import X3DJSONLD from './X3DJSONLD.js';
import convertJSON from './convertJSON.js';
import { loadX3DJS } from './loadValidateServer.js';
import DOM2JSONSerializer from './DOM2JSONSerializer.js';
import { LOG } from './Script.js';
import mapToMethod from './mapToMethod.js';
import mapToMethod2 from './mapToMethod2.js';
import fieldTypes from './fieldTypes.js';

let Browser = X3DJSONLD.Browser;
let DOMImplementation = new xmldom.DOMImplementation();
let serializer = new DOM2JSONSerializer();

if (typeof mapToMethod2 !== 'undefined') {
	for (var map in mapToMethod2) {
		Object.assign(mapToMethod[map], mapToMethod2[map]);
	}
}

// Convert from XML to JSON
process.argv.shift();
process.argv.shift();

function ProcessJSON(json, file) {
	var NS = "https://www.web3d.org/specifications/x3d";
	loadX3DJS(DOMImplementation, json, file, NS, function(element, xml) {
		var str = serializer.serializeToString(json, element, 0, mapToMethod, fieldTypes);
		var outfile = "ppp/"+file.substr(0, file.lastIndexOf("."))+".x3d";
		try {
			if (typeof fs === 'object') {
				fs.mkdirSync(outfile.substring(0, outfile.lastIndexOf("/")));
			}
		} catch (e) {
			console.error("Error creating dir for "+outfile);
		}
		if (typeof fs === 'object') {
			fs.writeFileSync(outfile, str);
		}
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
		if (typeof fs === 'object') {
			var json = JSON.parse(fs.readFileSync(file).toString());
			ProcessJSON(json, file);
		}
	} catch (e) {
		console.error("Error reading", file, e);
		console.trace();
	}
}
