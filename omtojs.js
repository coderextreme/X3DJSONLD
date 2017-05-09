"use strict";

var parseString = require('xml2js').parseString;
var fs = require('fs');

try {
	var xml = fs.readFileSync("X3DObjectModel-3.3.xml");
	parseString(xml, function(err, json) {
		if (err) throw err;
		console.log(JSON.stringify(json, null, 2));
	});
} catch (e) {
	console.error("X3DObjectModel-3.3.xml", e);
}
