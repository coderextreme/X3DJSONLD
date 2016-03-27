"use strict";

// 'http://www.web3d.org/specifications/x3d-namespace'

// Convert X3D JSON to XML

var fs = require('fs');
var xmldom = require('xmldom');
var X3DJSONLD = require('./X3DJSONLD');

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
		xmlstr = xmlstr2.replace(/(\<\!\[CDATA\[(.|\n)*)&lt;((.|\n)*\]\]\>)/gi, "$1<$3");
	} while (xmlstr !== xmlstr2);
	do {
		xmlstr2 = xmlstr;
		xmlstr = xmlstr2.replace(/(\<\!\[CDATA\[(.|\n)*)&gt;((.|\n)*\]\]\>)/gi, "$1>$3");
	} while (xmlstr !== xmlstr2);
	return xmlstr;
}

function loadX3DJS(json, path, xml) {
	var version = json.X3D["@version"];
	var DOMImplementation = new xmldom.DOMImplementation();
	var XMLSerializer = new xmldom.XMLSerializer();
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
	var ConvertToX3DOM = X3DJSONLD.ConvertToX3DOM;


	ConvertToX3DOM(json, "", element, path);
	var xmlstr = XMLSerializer.serializeToString(element);
	xmlstr = fixXML(xmlstr);
	xml.push('<?xml version="1.0" encoding="'+X3DJSONLD.getEncoding()+'"?>');
	xml.push('<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D '+version+'//EN" "http://www.web3d.org/specifications/x3d-'+version+'.dtd">');
	xml.push(xmlstr);
}

process.argv.shift();
process.argv.shift();

var files = process.argv;
for (var f in files) {
	try {
		var json = JSON.parse(fs.readFileSync(files[f]).toString());
		var output = [];
		loadX3DJS(json, "foo.json", output);
		var newfile = files[f].substr(0, files[f].lastIndexOf("."))+"-roundtrip.x3d";
		fs.writeFileSync(newfile, output.join("\n"));
		process.stdout.write(newfile);
		process.stdout.write('\0');
	} catch (e) {
		console.error("Error reading", files[f], e);
		console.trace();
	}
}

if (typeof module === 'object')  {
	module.exports = {
		loadX3DJS : loadX3DJS,
	};
}
