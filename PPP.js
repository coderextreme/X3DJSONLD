// X3D JSON Prototype and Script preprocessor

// set up XML DOM
var xmldom = require('xmldom');
var DOMImplementation = new xmldom.DOMImplementation();
var XMLSerializer = new xmldom.XMLSerializer();
var docType = DOMImplementation.createDocumentType("X3D", 'ISO//Web3D//DTD X3D 3.3//EN" "http://www.web3d.org/specifications/x3d-3.3.dtd', null);
var document = DOMImplementation.createDocument(null, "X3D", docType);
document.insertBefore(document.createProcessingInstruction('xml', 'version="1.0" encoding="UTF-8"'), document.doctype);
var element = document.getElementsByTagNameNS(null, "X3D")[0];
element.setAttribute("xmlns:xsd", 'http://www.w3.org/2001/XMLSchema-instance');

// Bring in JSON to DOM/XML conversion --  used to build DOM/XML.
var X3DJSONLD = require('./X3DJSONLD');
X3DJSONLD.setDocument(document);
var ConvertToX3DOM = X3DJSONLD.ConvertToX3DOM;
var Browser = X3DJSONLD.Browser;

// Bring in prototype expander and script expander

var prototypeExpander = require('./PrototypeExpander');
var Script = require('./Script');
var LOG = Script.LOG;
var processScripts = Script.processScripts;
var externPrototypeExpander = require("./ServerPrototypeExpander");

var fs = require("fs");

function loadX3DJS(json, path, xml) {
	ConvertToX3DOM(json, "", element, path);
	xml.push(XMLSerializer.serializeToString(element));
}


/*
var content = '';
// read content into buffer
process.stdin.resume();
process.stdin.on('data', function(buf) { content += buf.toString(); });

process.stdin.on('end', function() {
*/
	var file = process.argv[2];
	var object = JSON.parse(fs.readFileSync(file).toString());
	// var object = JSON.parse(content);
	externPrototypeExpander(file, object);
	prototypeExpander(object, "");
	console.log(JSON.stringify(object, null, 2));

	var classes = new LOG();
	var routecode = new LOG();

	processScripts(object, classes, undefined, routecode);
	var xml = [];
	loadX3DJS(object, file, xml);
	console.error(xml.join("\n"));
	var code = classes.join('\n')
		.replace(/&lt;/g, '<')
		.replace(/&gt;/g, '>')
	console.error(code);
	var route = routecode.join('\n');
	console.error(route);
	eval(code);
	//setInterval(function() {
		eval(route);
	//}, 500);
// });
