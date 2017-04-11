"use strict";

// Convert X3D JSON to various formats

process.argv.shift();
process.argv.shift();

var convertJSON = require('./convertJSON.js');

convertJSON({
	// './JSONSerializer.js' : ".x3d2json",
	'./Three2Serializer.js' : ".three.js",
	'./JavaScriptSerializer.js' : ".sail.js",
	'./JavaSerializer.js' : ".java",
	'./PythonSerializer.js': ".py",
	'./DOMSerializer.js': ".x3d.new"
});
