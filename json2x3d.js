"use strict";

// 'http://www.web3d.org/specifications/x3d-namespace'

// Convert X3D JSON to XML

var fs = require('fs');
var loadX3DJS = require('./serverX3DJSONLD');

process.argv.shift();
process.argv.shift();

var files = process.argv;
for (var f in files) {
	var file = files[f];
	try {
		var file = file.substr(0, file.lastIndexOf("."))+".json";
		var json = JSON.parse(fs.readFileSync(file).toString());
		var xml = [];
		var element = loadX3DJS(json, file, xml);

		var outfile = "";
		outfile += file.substr(0, file.lastIndexOf("."))+"-roundtrip.x3d";
		fs.writeFileSync(outfile, xml.join("\r\n"));
		process.stdout.write(outfile);
		process.stdout.write('\0');
	} catch (e) {
		console.error("Error reading", file, e);
		console.trace();
	}
}

if (typeof module === 'object')  {
	module.exports = {
		loadX3DJS : loadX3DJS,
	};
}
