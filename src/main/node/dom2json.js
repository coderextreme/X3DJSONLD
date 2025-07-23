"use strict";

// Convert X3D JSON to various formats

process.argv.shift();
process.argv.shift();

var convertJSON = require('./convertJSON.js').convertJSON;

convertJSON([
	{ 
	serializer : './DOM2JSONSerializer.js',
	folder : "../",
	extension : ".json.new",
	}
	]);
