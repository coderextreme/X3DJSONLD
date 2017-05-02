var runsaxon = require('./allsaxon');
var fs = require("fs");

function runAndSend(args) {
	runsaxon(args);
	while (args[0].startsWith('-')) {
		args.shift();
	}
	let infile = args[0];
	var outfile = infile.substr(0, infile.lastIndexOf("."))+".json";
	if (outfile.lastIndexOf("savage.nps.edu") >= 0) {
		outfile = "examples"+outfile.substring(outfile.lastIndexOf("savage.nps.edu")+14);
	}
	if (outfile.lastIndexOf("www.web3d.org") >= 0) {
		outfile = outfile.substring(outfile.lastIndexOf("www.web3d.org"));
	}
	var content;
	try {
		content == fs.readFileSync(outfile);
		if (typeof content !== 'undefined') {
			content = content.toString();
			content = JSON.parse(content);
		}
	} catch (e) {
		console.error(e);
	}
	console.error('sending back', content);
	return content;
}


if (typeof module === 'object')  {
	module.exports = runAndSend;
}
