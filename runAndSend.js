var runsaxon = require('./allsaxon');
var fs = require("fs");

function runAndSend(infile) {
	console.error('converting', infile);
	runsaxon([infile]);
	var outfile = infile.substr(0, infile.lastIndexOf("."))+".json";
	if (outfile.lastIndexOf("savage.nps.edu") >= 0) {
		outfile = "examples"+outfile.substring(outfile.lastIndexOf("savage.nps.edu")+14);
	}
	if (outfile.lastIndexOf("www.web3d.org") >= 0) {
		outfile = outfile.substring(outfile.lastIndexOf("www.web3d.org"));
	}
	console.error('reading 2 ', outfile);
	var content = fs.readFileSync(outfile);
	var json = JSON.parse(content.toString());
	console.error('sending back', json);
	return json;
}


if (typeof module === 'object')  {
	module.exports = runAndSend;
}
