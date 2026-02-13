const fs = require('fs');
const libxml = require('libxmljs');
let xmldom = require('@xmldom/xmldom');
let DOMImplementation = new xmldom.DOMImplementation();
const xsdString = fs.readFileSync('../../specifications/x3d-4.1.xsd', 'utf-8');

function validateWithXMLSchema(jsobj, path) {

	[ child, xmlString ]  = X3DJSONLD.loadJsonIntoDom(DOMImplementation, jsobj, path);
	if (!xmlString) {
	    xmlString = X3DJSONLD.serializeDOM(jsobj, child, true);
	}

	const xmlDoc = libxml.parseXml(xmlString);
	const xsdDoc = libxml.parseXml(xsdString);

	const isValid = xmlDoc.validate(xsdDoc);

	// Check validation result
	if (isValid) {
	  console.log('XML is valid against XSD.');
	} else {
	  console.error('XML validation failed:');
	  const validationErrors = xmlDoc.validationErrors;
	  validationErrors.forEach(
	      error => console.error(error.message));
	}
}

let promise = validateWithXMLSchema(JSON.parse(fs.readFileSync(process.argv[2]), process.argv[2]));
promise.then(
	function (result) { console.log(result); },
	function (rest) { console.error(rest); }
);
