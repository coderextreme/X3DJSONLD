// Complete X3D XML to X3D XML Prototype Expander

var fs = require("fs");

var X3DJSONLD = require('./X3DJSONLD.js');
X3DJSONLD.setCDATACreateFunction(function(document, element, str) {
	// for script nodes
	var child = document.createCDATASection(str);
	element.appendChild(child);
});
var Browser = X3DJSONLD.Browser;
var loadURLs = X3DJSONLD.loadURLs;

var PE = require('./PrototypeExpander')
PE.setLoadURLs(loadURLs);
var prototypeExpander = PE.prototypeExpander;
var externPrototypeExpander = PE.externPrototypeExpander;

var FL = require('./Flattener')
var flattener = FL.flattener;

var loadX3DJS = require('./serverX3DJSONLD');
var DOMSerializer = require('./DOMSerializer.js');


// Convert from XML to JSON
var runsaxon = require('./allsaxon');
process.argv.shift();
process.argv.shift();
runsaxon(process.argv);

function ProcessJSON(json, file) {
		// Run it through the prototype expander
		json = externPrototypeExpander(file, json);
		json = prototypeExpander(file, json, "");
		json = flattener(json);

		var element = loadX3DJS(json, file);
		var str = DOMSerializer.serializeToString(json, element);

		var outfile = "ppp/"+file.substr(0, file.lastIndexOf("."))+".x3d";
		fs.writeFileSync(outfile, str);
		process.stdout.write(outfile);
		process.stdout.write('\0');
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

if (typeof module === 'object')  {
	module.exports = {
		loadX3DJS : loadX3DJS,
	};
}
