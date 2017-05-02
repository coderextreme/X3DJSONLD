// X3D JSON Prototype and Script preprocessor

// set up XML DOM
var fs = require("fs");

var X3DJSONLD = require('./X3DJSONLD.js');
X3DJSONLD.setCDATACreateFunction(function(document, element, str) {
	// for script nodes
	var child = document.createCDATASection(str);
	element.appendChild(child);
});
var loadURLs = X3DJSONLD.loadURLs;
var Browser = X3DJSONLD.Browser;

// Bring in prototype expander and script expander
var PE = require('./PrototypeExpander')
PE.setLoadURLs(loadURLs);
var prototypeExpander = PE.prototypeExpander;
var externPrototypeExpander = PE.externPrototypeExpander;

var FL = require('./Flattener')
var flattener = FL.flattener;

var Script = require('./Script');
var LOG = Script.LOG;
var processScripts = Script.processScripts;

var convertJSON = require('./convertJSON.js');
var loadX3DJS = convertJSON.loadX3DJS;
var loadSchema = convertJSON.loadSchema;
var doValidate = convertJSON.doValidate;


function ProcessJSON(json, file) {
		json = externPrototypeExpander(file, json);
		json = prototypeExpander(file, json, "");
		json = flattener(json);
		fs.writeFileSync("ppp/"+file, JSON.stringify(json, null, 2));

		var xml = new LOG();
		var NS = "http://www.web3d.org/specifications/x3d";
		loadX3DJS(json, file, xml, NS, loadSchema, doValidate, function(element) {
			var classes = new LOG();
			var routecode = new LOG();

			processScripts(json, classes, undefined, routecode);
			var code = classes.join('\n')
				.replace(/&lt;/g, '<')
				.replace(/&gt;/g, '>')
			var route = routecode.join('\n');
			try {
				eval(code);
				var __eventTime = 0;
				//setInterval(function() {
					eval(route);
					__eventTime += 1000 / 60;
				//}, 1000 / 60 );
			} catch (e) {
				console.error(code);
				console.error(route);
				console.error(e);
			}
		});
}

/*
var content = '';
// read content into buffer
process.stdin.resume();
process.stdin.on('data', function(buf) { content += buf.toString(); });

process.stdin.on('end', function() {
	var json = JSON.parse(content);
	ProcessJSON(json, "foo.json");
});
*/
process.argv.shift();
process.argv.shift();

var files = process.argv;
for (var f in files) {
	var file = files[f];
	try {
		var content = fs.readFileSync(file).toString();
		var json = JSON.parse(content);
		ProcessJSON(json, file);
	} catch (e) {
		console.error(e);
	}
}
