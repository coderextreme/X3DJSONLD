// X3D JSON Prototype and Script preprocessor

// set up XML DOM
var fs = require('fs');

var X3DJSONLD = require('./X3DJSONLD.js');
var Browser = X3DJSONLD.Browser;

var Scripts = require('./Script.js');
var LOG = Scripts.LOG;
var scripts = new Scripts.Scripts();
var processScripts = Scripts.processScripts;

var xmldom = require('@xmldom/xmldom');
var DOMImplementation = new xmldom.DOMImplementation();

var convertJSON = require('./convertJSON.js');
var loadX3DJS = convertJSON.loadX3DJS;

var x3dom = require('./fields.js');

function ProcessJSON(json, file) {
	var outfile = file.replace(/data/, "ppp");
	try {
		fs.mkdirSync(outfile.substring(0, outfile.lastIndexOf("/")));
	} catch (e) {
		// console.error("Error creating ppp");
	}
	fs.writeFileSync(outfile, JSON.stringify(json, null, 2));

	var NS = "https://www.web3d.org/specifications/x3d";
	loadX3DJS(DOMImplementation, json, file, NS, function(element, xml) {
		var classes = new LOG();
		var routecode = new LOG();
		var loopItems = new LOG();
		console.error("OUTPUTTING", outfile);

		classes.push("var x3dom = require('../node/fields.js');");
		classes.push("if (typeof X3DJSON === 'undefined') {");
		classes.push("	var X3DJSON = {};");
		classes.push("}");
		classes.push("if (typeof __eventTime === 'undefined') {");
		classes.push("	var __eventTime = 0;");
		classes.push("}");
		scripts.processScripts(json, classes, undefined, routecode, loopItems, "Scene", file); // selector is Scene
		var code = classes.join('\n')
			.replace(/&lt;/g, '<')
			.replace(/&gt;/g, '>')

		var route = routecode.join('\n');
		var loop = loopItems.join('\n');
		var totalcode = code+"\n"+route+"\n"+loop;
		try {
			eval(totalcode);
			fs.writeFileSync(outfile+".good.js", totalcode);
		} catch (e) {
			fs.writeFileSync(outfile+".js", totalcode);
			console.error("See "+outfile+".js for bad code", e);
		}
	});
	return json;
}

/*
var content = '';
// read content into buffer
process.stdin.resume();
process.stdin.on('data', function(buf) { content += buf.toString(); });

process.stdin.on('end', function() {
	var json = JSON.parse(content);
	ProcessJSON(json, "foo.x3dj");
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
