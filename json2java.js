"use strict";

// 'http://www.web3d.org/specifications/x3d-namespace'

// Convert X3D JSON to XML

var fs = require('fs');
var loadX3DJS = require('./serverX3DJSONLD');
var JavaSerializer = require('./JavaSerializer.js');

process.argv.shift();
process.argv.shift();

var files = process.argv;
for (var f in files) {
	var file = files[f];
	try {
		var file = file.substr(0, file.lastIndexOf("."))+".json";
		var json = JSON.parse(fs.readFileSync(file).toString());
		var element = loadX3DJS(json, file);
		var str = JavaSerializer.serializeToString(element, file.substr(0, file.lastIndexOf(".")));

		var outfile = "";
		outfile += file.substr(0, file.lastIndexOf("."))+".java";
		fs.writeFileSync(outfile, str);
		process.stdout.write(outfile);
		process.stdout.write('\0');
	} catch (e) {
		console.error("Error reading", file, e);
		console.trace();
	}
}
