"use strict";

// Convert X3D JSON to various formats

process.argv.shift();
process.argv.shift();

var convertJSON = require('./convertJSON.js');

convertJSON({
	'./DOMSerializer.js': ".x3d.new",
	// './JSONSerializer.js' : ".x3d2json",
	// './AframeSerializer.js' : ".aframe",
	// './Three2Serializer.js' : ".three.js",
	// './PythonSerializer.js': ".py",
	'./JavaScriptSerializer.js' : ".sail.js",
	'./JavaSerializer.js' : ".java"
});
