"use strict";

var xmldom = require('xmldom');
var DOMImplementation = new xmldom.DOMImplementation();
var XMLSerializer = new xmldom.XMLSerializer();

var X3DJSONLD = require('./X3DJSONLD.js');
var ConvertToX3DOM = X3DJSONLD.ConvertToX3DOM;

function fixXML(xmlstr) {
	// get rid of self-closing tags
	xmlstr = xmlstr.replace(/(<[ \t]*)([A-Za-z0-9]+)([^>]*)\/>/g, "$1$2$3></$2>");
	// strip out namespace
	xmlstr = xmlstr.replace(/xmlns="[^"]*"/g, "");

	// strip out schema
	// xmlstr = xmlstr.replace(/xsd:noNamespaceSchemaLocation="[^"]*"/gi, "");


	// Fix CDATA sections
	xmlstr = xmlstr.replace(/&lt;!\[CDATA\[/g, "<![CDATA[");
	xmlstr = xmlstr.replace(/\]\]&gt;/g, "]]>");
	do {
		var xmlstr2 = xmlstr;
		xmlstr = xmlstr2.replace(/(<!\[CDATA\[(.|\n)*)&lt;((.|\n)*\]\]>)/gi, "$1<$3");
	} while (xmlstr !== xmlstr2);
	do {
		xmlstr2 = xmlstr;
		xmlstr = xmlstr2.replace(/(<!\[CDATA\[(.|\n)*)&gt;((.|\n)*\]\]>)/gi, "$1>$3");
	} while (xmlstr !== xmlstr2);
	return xmlstr;
}


function serializeDOM(json, element) {
	var version = json.X3D["@version"];
	var xml = '<?xml version="1.0" encoding="'+json.X3D["encoding"]+'"?>\n';
	xml += '<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D '+version+'//EN" "http://www.web3d.org/specifications/x3d-'+version+'.dtd">\n';
	xml += XMLSerializer.serializeToString(element);
	xml = fixXML(xml);
	return xml;
}

function loadX3DJS(json, path, xml) {
	if (typeof json === 'undefined') {
		console.error('json undefined.  Look in', path, 'for hints');
	}
	var version = json.X3D["@version"];
	var docType = DOMImplementation.createDocumentType("X3D", 'ISO//Web3D//DTD X3D '+version+'//EN" "http://www.web3d.org/specifications/x3d-'+version+'.dtd', null);
	var document = DOMImplementation.createDocument(null, "X3D", docType);
	// Bring in JSON to DOM/XML conversion --  used to build DOM/XML.
	X3DJSONLD.setDocument(document);
	X3DJSONLD.setCDATACreateFunction(function(document, element, str) {
		// for script nodes
		var child = document.createCDATASection(str);
		element.appendChild(child);
	});

	document.insertBefore(document.createProcessingInstruction('xml', 'version="1.0" encoding="'+json.X3D["encoding"]+'"'), document.doctype);
	var element = document.getElementsByTagNameNS(null, "X3D")[0];
	element.setAttribute("xmlns:xsd", 'http://www.w3.org/2001/XMLSchema-instance');

	ConvertToX3DOM(json, "", element, path);

	if (typeof xml !== 'undefined' && typeof xml.push === 'function') {
		xml.push(serializeDOM(json, element));
	}
	return element;
}

if (typeof module === 'object')  {
	module.exports = loadX3DJS;
}
