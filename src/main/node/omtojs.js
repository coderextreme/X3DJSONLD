"use strict";

var parseString = require('xml2js').parseString;
var fs = require('fs');

try {
	var xml = fs.readFileSync("X3DUnifiedObjectModel-4.0.xml");
	parseString(xml, function(err, json) {
		if (err) throw err;
		console.log(JSON.stringify(json, null, 2));
	});
} catch (e) {
	console.error("X3DUnifiedObjectModel-4.0.xml", e);
}
