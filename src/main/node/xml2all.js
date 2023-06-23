"use strict";

// Convert X3D JSON to various formats

process.argv.shift();
process.argv.shift();

var convertXML = require('./convertXML.js');

convertXML([
	{ 
	serializer : './DOM2JSONSerializer.js',
	folder : "../",
	extension : ".json",
	}
	]);
