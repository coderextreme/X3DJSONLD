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

var PROTOS = require('./PrototypeExpander')
PROTOS.setLoadURLs(loadURLs);

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
process.argv.shift(); // get rid of -- args
process.argv.shift();

function ProcessJSON(json, file) {
		// Run it through the prototype expander
		json = PROTOS.externalPrototypeExpander(file, json);
		json = PROTOS.prototypeExpander(file, json, "");
		json = flattener(json);

		var xml = new LOG();
		var NS = "http://www.web3d.org/specifications/x3d";
		loadX3DJS(json, file, xml, NS, loadSchema, doValidate, function(element) {
			var str = serializer.serializeToString(json, element);
			var outfile = "ppp/"+file.substr(0, file.lastIndexOf("."))+".x3d";
			try {
				fs.mkdirSync(outfile.substring(0, outfile.lastIndexOf("/")));
			} catch (e) {
				console.error("Error creating dir for "+outfile);
			}
			fs.writeFileSync(outfile, str);
			console.error("Processed XML", outfile);
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
