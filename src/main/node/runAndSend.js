var runsaxon = require('./allsaxon');
var config = require('./config');
var fs = require('fs');

function runAndSend(args, callback) {
	console.error("calling runsaxon", args);
	runsaxon(args);
	while (args[0].startsWith('-')) {
		args.shift();
	}
	var infile = args[0];
	console.error("converted", infile);
	if (infile.startsWith("https://")) {
		infile = config.x3dcode+infile.substr(8);
	} else if (infile.startsWith("http://")) {
		infile = config.x3dcode+infile.substr(7);
	}
	var outfile = infile.substr(0, infile.lastIndexOf("."))+".json";
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
				console.error('sending back', JSON.stringify(content));
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
module.exports = runAndSend;
