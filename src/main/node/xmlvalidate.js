let fs = require("fs");
let validator = require('xsd-schema-validator');
let X3DJSONLD = require('./X3DJSONLD.js');
let xmldom = require('@xmldom/xmldom');
let DOMImplementation = new xmldom.DOMImplementation();

function validateWithXMLSchema(jsobj, path) {
	try {
	  [ child, xml ]  = X3DJSONLD.loadJsonIntoDom(DOMImplementation, jsobj, path);
	  if (!xml) {
	  	xml = X3DJSONLD.serializeDOM(jsobj, child, true);
	  }
	  const result = validator.validateXML(xml, '../../specifications/x3d-4.0.xsd');

	  return result;
	} catch (err) {
	  console.error('validation error', err);
	}
}

let promise = validateWithXMLSchema(JSON.parse(fs.readFileSync(process.argv[2]), process.argv[2]));
promise.then(
	function (result) { console.log(result); },
	function (rest) { console.error(rest); }
);
