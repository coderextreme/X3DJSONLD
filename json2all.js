"use strict";

// Convert X3D JSON to various formats

process.argv.shift();
process.argv.shift();

var convertJSON = require('./convertJSON.js');

convertJSON({
	'./JSONSerializer.js' : ".x3d2json",
	'./JavaScriptSerializer.js' : ".sail.js",
	'./JavaSerializerNew.js' : ".java",
	'./PythonSerializer.js': ".py",
	'./DOMSerializer.js': ".x3d.new"
});
