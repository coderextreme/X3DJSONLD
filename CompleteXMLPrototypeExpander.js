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
var PythonSerializer = require('./PythonSerializer.js');

var PE = require('./PrototypeExpander')
PE.setLoadURLs(loadURLs);
var prototypeExpander = PE.prototypeExpander;
var externPrototypeExpander = PE.externPrototypeExpander;

var FL = require('./Flattener')
var flattener = FL.flattener;

var loadX3DJS = require('./serverX3DJSONLD');


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

		var xml = [];
		var element = loadX3DJS(json, file, xml);
		var python = PythonSerializer.serializeToString(element);

		var pyfile = "ppp/";
		pyfile += file.substr(0, file.lastIndexOf("."))+".py";
		fs.writeFileSync(pyfile, python);
		process.stdout.write(pyfile);
		process.stdout.write('\0');

		var newfile = "ppp/";
		newfile += file.substr(0, file.lastIndexOf("."))+".x3d";
		fs.writeFileSync(newfile, xml.join("\r\n"));
		process.stdout.write(newfile);
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
