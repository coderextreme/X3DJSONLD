"use strict";

// 'http://www.web3d.org/specifications/x3d-namespace'

// Convert X3D JSON to XML

var fs = require('fs');

var xmldom = require('xmldom');
var DOMImplementation = new xmldom.DOMImplementation();
var XMLSerializer = new xmldom.XMLSerializer();
var docType = DOMImplementation.createDocumentType("X3D", 'ISO//Web3D//DTD X3D 3.3//EN" "http://www.web3d.org/specifications/x3d-3.3.dtd', null);
var document = DOMImplementation.createDocument(null, "X3D", docType);
document.insertBefore(document.createProcessingInstruction('xml', 'version="1.0" encoding="UTF-8"'), document.doctype);
var element = document.getElementsByTagNameNS(null, "X3D")[0];
element.setAttribute("xmlns:xsd", 'http://www.w3.org/2001/XMLSchema-instance');

var X3DJSONLD = require('./X3DJSONLD');
X3DJSONLD.setDocument(document);
var ConvertToX3DOM = X3DJSONLD.ConvertToX3DOM;
var fixXML = X3DJSONLD.fixXML;

function loadX3DJS(json, path, xml) {
	ConvertToX3DOM(json, "", element, path);
	var xmlstr = XMLSerializer.serializeToString(element);
	xmlstr = fixXML(xmlstr);
	xml.push('<?xml version="1.0" encoding="UTF-8"?>');
	xml.push('<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 3.3//EN" "http://www.web3d.org/specifications/x3d-3.3.dtd">');
	xml.push(xmlstr);
}

var file = process.argv[2];
var json = JSON.parse(fs.readFileSync(file).toString());

var output = [];

loadX3DJS(json, "foo.json", output);

console.log(output.join("\n"));

if (typeof module === 'object')  {
	module.exports = {
		loadX3DJS : loadX3DJS,
	}
}
