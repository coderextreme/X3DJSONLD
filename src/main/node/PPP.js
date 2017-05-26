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


function ProcessJSON(json, file) {
		json = PROTOS.externalPrototypeExpander(file, json);
		json = PROTOS.prototypeExpander(file, json, "");
		json = flattener(json);
		// console.log("JSON", JSON.stringify(json));
		var outfile = "ppp/"+file;
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

			classes.push("var x3dom = {};");
			classes.push("x3dom.fields = {};");
			classes.push("x3dom.fields.MFBool = function() { return Array.prototype.slice.call(arguments, 0); };");
			classes.push("x3dom.fields.MFColor = function() { return Array.prototype.slice.call(arguments, 0); };");
			classes.push("x3dom.fields.MFColorRGBA = function() { return Array.prototype.slice.call(arguments, 0); };");
			classes.push("x3dom.fields.MFFloat = function() { return Array.prototype.slice.call(arguments, 0); };");
			classes.push("x3dom.fields.MFInt32 = function() { return Array.prototype.slice.call(arguments, 0); };");
			classes.push("x3dom.fields.MFNode = function() { return Array.prototype.slice.call(arguments, 0); };");
			classes.push("x3dom.fields.MFRotation = function() { return Array.prototype.slice.call(arguments, 0); };");
			classes.push("x3dom.fields.MFString = function() { return Array.prototype.slice.call(arguments, 0); };");
			classes.push("x3dom.fields.MFVec2f = function() { return Array.prototype.slice.call(arguments, 0); };");
			classes.push("x3dom.fields.MFVec3f = function() { return Array.prototype.slice.call(arguments, 0); };");
			classes.push("x3dom.fields.SFColor = function() { return Array.prototype.slice.call(arguments, 0); };");
			classes.push("x3dom.fields.SFColorRGBA = function() { return Array.prototype.slice.call(arguments, 0); };");
			classes.push("x3dom.fields.SFImage = function() { return Array.prototype.slice.call(arguments, 0); };");
			classes.push("x3dom.fields.SFMatrix4f = function() { return Array.prototype.slice.call(arguments, 0); };");
			classes.push("x3dom.fields.SFRotation = function() { return Array.prototype.slice.call(arguments, 0); };");
			classes.push("x3dom.fields.SFVec2f = function() { return Array.prototype.slice.call(arguments, 0); };");
			classes.push("x3dom.fields.SFVec3f = function() { return Array.prototype.slice.call(arguments, 0); };");
			classes.push("x3dom.fields.SFvec4f = function() { return Array.prototype.slice.call(arguments, 0); };");
			processScripts(json, classes, undefined, routecode);
			var code = classes.join('\n')
				.replace(/&lt;/g, '<')
				.replace(/&gt;/g, '>')

			var route = routecode.join('\n');
			var totalcode = code+"\n"+route;
			console.log(totalcode);
			try {
				eval(totalcode);
			} catch (e) {
				fs.writeFileSync("ppp/"+file+".js", totalcode);
				console.error("See ppp/"+file+".js for bad code", e);
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
