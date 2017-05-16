"use strict";

// Convert JSON to JSON

var fs = require('fs');

process.argv.shift();
process.argv.shift();

var files = process.argv;
for (var f in files) {
	try {
		var json = JSON.parse(fs.readFileSync(files[f]).toString());
		var output = JSON.stringify(json, null, 2);
		var newfile = files[f].substr(0, files[f].lastIndexOf("."))+"-roundtrip.json";
		fs.writeFileSync(newfile, output);
		process.stdout.write(newfile);
		process.stdout.write('\0');
	} catch (e) {
		console.error("Error reading", files[f], e);
		console.trace();
	}
}
