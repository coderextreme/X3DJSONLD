// X3D JSON Prototype and Script preprocessor

// set up XML DOM
var xmldom = require('xmldom');
var fs = require("fs");

var X3DJSONLD = require('./X3DJSONLD.js');
var loadURLs = X3DJSONLD.loadURLs;
var PE = require('./PrototypeExpander')
var FL = require('./Flattener')
PE.setLoadURLs(loadURLs);
var prototypeExpander = PE.prototypeExpander;
var externPrototypeExpander = PE.externPrototypeExpander;
var flattener = FL.flattener;

var Script = require('./Script');



// Bring in prototype expander and script expander

var LOG = Script.LOG;
var ConvertToX3DOM = X3DJSONLD.ConvertToX3DOM;
var Browser = X3DJSONLD.Browser;
var processScripts = Script.processScripts;

var DOMImplementation = new xmldom.DOMImplementation();
var XMLSerializer = new xmldom.XMLSerializer();

function loadX3DJS(json, path, xml) {
	if (typeof json === 'undefined') {
		console.error('json undefined.  Look in', path, 'for hints');
	}
	var version = json.X3D["@version"];
	var document = DOMImplementation.createDocument(null, "X3D", docType);
	var docType = DOMImplementation.createDocumentType("X3D", 'ISO//Web3D//DTD X3D '+version+'//EN" "http://www.web3d.org/specifications/x3d-'+version+'.dtd', null);
	var document = DOMImplementation.createDocument(null, "X3D", docType);
	document.insertBefore(document.createProcessingInstruction('xml', 'version="1.0" encoding="UTF-8"'), document.doctype);
	var element = document.getElementsByTagNameNS(null, "X3D")[0];
	element.setAttribute("xmlns:xsd", 'http://www.w3.org/2001/XMLSchema-instance');

	// Bring in JSON to DOM/XML conversion --  used to build DOM/XML.
	X3DJSONLD.setDocument(document);

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
	object = externPrototypeExpander(file, object);
	object = prototypeExpander(file, object, "");
	object = flattener(object);
	console.log(JSON.stringify(object, null, 2));

	var classes = new LOG();
	var routecode = new LOG();

	processScripts(object, classes, undefined, routecode);
	var xml = [];
	loadX3DJS(object, file, xml);
	// console.error(xml.join("\n"));
	var code = classes.join('\n')
		.replace(/&lt;/g, '<')
		.replace(/&gt;/g, '>')
	var route = routecode.join('\n');
	try {
		eval(code);
		//setInterval(function() {
			eval(route);
		//}, 500);
	} catch (e) {
		console.error(code);
		console.error(route);
		console.error(e);
	}
// });
