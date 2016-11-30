"use strict";

var X3DJSONLD = require('./X3DJSONLD.js');
var ConvertToX3DOM = X3DJSONLD.ConvertToX3DOM;
var PythonSerializer = X3DJSONLD.PythonSerializer;

var xmldom = require('xmldom');
var DOMImplementation = new xmldom.DOMImplementation();
var XMLSerializer = new xmldom.XMLSerializer();

var fixXML = require('./fixXML');


function loadX3DJS(json, path, xml, python) {
	if (typeof json === 'undefined') {
		console.error('json undefined.  Look in', path, 'for hints');
	}
	var version = json.X3D["@version"];
	var docType = DOMImplementation.createDocumentType("X3D", 'ISO//Web3D//DTD X3D '+version+'//EN" "http://www.web3d.org/specifications/x3d-'+version+'.dtd', null);
	var document = DOMImplementation.createDocument(null, "X3D", docType);
	// Bring in JSON to DOM/XML conversion --  used to build DOM/XML.
	X3DJSONLD.setDocument(document);

	document.insertBefore(document.createProcessingInstruction('xml', 'version="1.0" encoding="UTF-8"'), document.doctype);
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

if (typeof module === 'object')  {
	module.exports = loadX3DJS;
}
