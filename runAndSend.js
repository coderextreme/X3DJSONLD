var runsaxon = require('./allsaxon');
var fs = require("fs");

function runAndSend(infile) {
	console.log('converting', infile);
	runsaxon([infile]);
	var outfile = infile.substr(0, infile.lastIndexOf("."))+".json";
	if (outfile.lastIndexOf("savage.nps.edu") >= 0) {
		outfile = "examples"+outfile.substring(outfile.lastIndexOf("savage.nps.edu")+14);
	}
	console.log('reading 2 ', outfile);
	var content = fs.readFileSync(outfile);
	var json = JSON.parse(content.toString());
	console.log('sending back', json);
	return json;
}


if (typeof module === 'object')  {
	module.exports = runAndSend;
}
