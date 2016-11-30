"use strict";

// 'http://www.web3d.org/specifications/x3d-namespace'

// Convert X3D JSON to XML

var fs = require('fs');
var X3DJSONLD = require('./X3DJSONLD.js');
var ConvertToX3DOM = X3DJSONLD.ConvertToX3DOM;
var PythonSerializer = X3DJSONLD.PythonSerializer;

var xmldom = require('xmldom');
var DOMImplementation = new xmldom.DOMImplementation();
var XMLSerializer = new xmldom.XMLSerializer();

var fixXML = require('./fixXML.js');

function loadX3DJS(json, path, xml, python) {
        if (typeof json === 'undefined') {
		console.error('json undefined.  Look in', path, 'for hints');
	}
	var version = json.X3D["@version"];
	var docType = DOMImplementation.createDocumentType("X3D", 'ISO//Web3D//DTD X3D '+version+'//EN" "http://www.web3d.org/specifications/x3d-'+version+'.dtd', null);
	var document = DOMImplementation.createDocument(null, "X3D", docType);
        X3DJSONLD.setDocument(document);
	X3DJSONLD.setCDATACreateFunction(function(document, element, str) {
		// for script nodes
		var child = document.createCDATASection(str);
		element.appendChild(child);
	});
	var element = document.getElementsByTagNameNS(null, "X3D")[0];
	element.setAttribute("xmlns:xsd", 'http://www.w3.org/2001/XMLSchema-instance');

	ConvertToX3DOM(json, "", element, path);

	var xmlstr = XMLSerializer.serializeToString(element);
	xmlstr = fixXML(xmlstr);
	xml.push('<?xml version="1.0" encoding="'+X3DJSONLD.getEncoding()+'"?>');
	xml.push('<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D '+version+'//EN" "http://www.web3d.org/specifications/x3d-'+version+'.dtd">');
	xml.push(xmlstr);

	var pythonstr = PythonSerializer.serializeToString(element);
	python.push(pythonstr);

}

process.argv.shift();
process.argv.shift();

var files = process.argv;
for (var f in files) {
	var file = files[f];
	try {
		var file = file.substr(0, file.lastIndexOf("."))+".json";
		var json = JSON.parse(fs.readFileSync(file).toString());
		var xml = [];
		var python = [];
		loadX3DJS(json, file, xml, python);

		var pyfile = "";
		pyfile += file.substr(0, file.lastIndexOf("."))+".py";
		fs.writeFileSync(pyfile, python.join("\r\n"));
		process.stdout.write(pyfile);
		process.stdout.write('\0');

		var newfile = "";
		newfile += file.substr(0, file.lastIndexOf("."))+"-roundtrip.x3d";
		fs.writeFileSync(newfile, xml.join("\r\n"));
		process.stdout.write(newfile);
		process.stdout.write('\0');
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
