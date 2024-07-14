let xmlschema = require('C:/Users/john/X3DJSONLD/node_modules/xmlschema.js/dist/xmlschema.js')
let fs = require("fs");
let validator = require('xsd-schema-validator');
let X3DJSONLD = require('./X3DJSONLD.js');
let xmldom = require('@xmldom/xmldom');
let DOMImplementation = new xmldom.DOMImplementation();
let xsd = fs.readFileSync('C:/Users/john/X3DJSONLD/src/specifications/x3d-4.0.xsd')

function validateWithXMLSchema(jsobj, path, callback) {
	try {
	  console.debug(JSON.stringify(jsobj));
	  [ child, xml ]  = X3DJSONLD.loadJsonIntoDom(DOMImplementation, jsobj, path);
	  if (!xml) {
	  	xml = X3DJSONLD.serializeDOM(jsobj, child, true);
	  }
	  xmlschema('C:/Users/john/X3DJSONLD/src/specifications/x3d-4.0.xsd').validate(xml, callback);

	} catch (err) {
	  console.error('validation error', err);
	}
}


console.log(process.argv[2]);
!async function(){
let data = await fetch(process.argv[2])
    .then((response) => response.json())
    .then(data => {
		validateWithXMLSchema(data, process.argv[2], function(result) {
			console.log(result);
		});
	console.log(data);
        return data;
    })
    .catch(error => {
        console.error(error);
    });

console.log(data);
}();
