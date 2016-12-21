"use strict";

// 'http://www.web3d.org/specifications/x3d-namespace'

// Convert X3D JSON to XML

var fs = require('fs');
var loadX3DJS = require('./serverX3DJSONLD');
var PythonSerializer = require('./PythonSerializer.js');


process.argv.shift();
process.argv.shift();

var files = process.argv;
for (var f in files) {
	var file = files[f];
	try {
		var file = file.substr(0, file.lastIndexOf("."))+".json";
		var json = JSON.parse(fs.readFileSync(file).toString());
		var element = loadX3DJS(json, file);
		var python = PythonSerializer.serializeToString(element);

		var pyfile = "";
		pyfile += file.substr(0, file.lastIndexOf("."))+".py";
		fs.writeFileSync(pyfile, python);
		process.stdout.write(pyfile);
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
