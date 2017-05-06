var runsaxon = require('./allsaxon');
var fs = require("fs");

function runAndSend(args, callback) {
	console.error("calling runsaxon", args);
	runsaxon(args);
	while (args[0].startsWith('-')) {
		args.shift();
	}
	var infile = args[0];
	console.error("converted", infile);
	var outfile = infile.substr(0, infile.lastIndexOf("."))+".json";
	if (outfile.lastIndexOf("savage.nps.edu") >= 0) {
		outfile = "examples"+outfile.substring(outfile.lastIndexOf("savage.nps.edu")+14);
	}
	if (outfile.lastIndexOf("www.web3d.org") >= 0) {
		outfile = outfile.substring(outfile.lastIndexOf("www.web3d.org"));
	}
	var content;
	/*
	try {
	*/
		console.error("Exists?", outfile);
		if (fs.existsSync(outfile)) {
			console.error("Yes", outfile, "exists, read it");
			var content = fs.readFileSync(outfile);
			console.error("read", outfile);
				// content = content.toString();
				content = JSON.parse(content);
				console.error('sending back', content);
				callback(content);
			console.error("async read", outfile);
		} else {
			console.error("Outfile", outfile, "does not exist");
		}
		/*
	} catch (e) {
		console.error(e);
	}
	*/
	console.error("exited run and send", args);
}


if (typeof module === 'object')  {
	module.exports = runAndSend;
}
