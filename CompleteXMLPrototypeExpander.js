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

var convertJSON = require('./convertJSON.js');
var loadX3DJS = convertJSON.loadX3DJS;
var loadSchema = convertJSON.loadSchema;
var doValidate = convertJSON.doValidate;
var DOMSerializer = require('./DOMSerializer.js');
var serializer = new DOMSerializer();

var Script = require('./Script');
var LOG = Script.LOG;

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

		var xml = new LOG();
		loadX3DJS(json, file, xml, undefined, loadSchema, doValidate, function(element) {
			var str = serializer.serializeToString(json, element);
			var outfile = "ppp/"+file.substr(0, file.lastIndexOf("."))+".x3d";
			fs.writeFileSync(outfile, str);
			process.stdout.write(outfile);
			process.stdout.write('\0');
		});
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
