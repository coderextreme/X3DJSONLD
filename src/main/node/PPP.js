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
var PROTOS = require('./PrototypeExpander')
PROTOS.setLoadURLs(loadURLs);

var FL = require('./Flattener')
var flattener = FL.flattener;

var Script = require('./Script');
var LOG = Script.LOG;
var processScripts = Script.processScripts;

var convertJSON = require('./convertJSON.js');
var loadX3DJS = convertJSON.loadX3DJS;
var loadSchema = convertJSON.loadSchema;
var doValidate = convertJSON.doValidate;

var x3dom = require('./fields.js');

function ProcessJSON(json, file) {
		json = PROTOS.externalPrototypeExpander(file, json);
		json = PROTOS.prototypeExpander(file, json, "");
		json = flattener(json);
		console.log(JSON.stringify(json));
		var outfile = file.replace(/data/, "ppp");
		try {
			fs.mkdirSync(outfile.substring(0, outfile.lastIndexOf("/")));
		} catch (e) {
			console.error("Error creating ppp");
		}
		fs.writeFileSync(outfile, JSON.stringify(json, null, 2));

		var xml = new LOG();
		var NS = "http://www.web3d.org/specifications/x3d";
		loadX3DJS(json, file, xml, NS, loadSchema, doValidate, function(element) {
			var classes = new LOG();
			var routecode = new LOG();
			var loopItems = new LOG();
			console.error("OUTPUTTING", file);

			classes.push("var x3dom = require('../node/fields.js');");
			classes.push("if (typeof X3DJSON === 'undefined') {");
			classes.push("	var X3DJSON = {};");
			classes.push("}");
			processScripts(json, classes, undefined, routecode, loopItems);
			var code = classes.join('\n')
				.replace(/&lt;/g, '<')
				.replace(/&gt;/g, '>')

			var route = routecode.join('\n');
			var loop = loopItems.join('\n');
			var totalcode = code+"\n"+route+"\n"+loop;
			console.log(totalcode);
			try {
				eval(totalcode);
				fs.writeFileSync(outfile+".good.js", totalcode);
			} catch (e) {
				fs.writeFileSync(outfile+".js", totalcode);
				console.error("See "+outfile+".js for bad code", e);
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
