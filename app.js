var express = require('express');
var app = express();
var http = require('http').Server(app);
var glob = require( 'glob' );  
var config = require("./src/main/node/config");
var port = process.env.PORT || 3000;
var path = require('path');

var fs = require("fs");
var X3DJSONLD = require('./src/main/node/X3DJSONLD.js');
var loadURLs = X3DJSONLD.loadURLs;
var PE = require('./src/main/node/PrototypeExpander')
PE.setLoadURLs(loadURLs);
var externPrototypeExpander = PE.externPrototypeExpander;

var FL = require('./src/main/node/Flattener')
var flattener = FL.flattener;

var runAndSend = require('./src/main/node/runAndSend');

app.use('/examples', express.static(config.examples));
app.use(express.static('src/main/html'));
app.use(express.static('src/main/node'));

function convertX3dToJson(res, infile, outfile, next) {
	console.error("Calling converter on "+infile);
	runAndSend(['---silent', infile], function(json) {
		console.error("Calling extern proto expander");
		json = externPrototypeExpander(outfile, json);
		json = flattener(json);
		// console.error("Json", json);
		send(res, json, "text/json", next);
	});
}

function send(res, data, type, next) {
	console.error("Type", type);
	try {
		if (!type.startsWith("image/")) {
			res.header("Content-Type", type);
		}
	} catch (e) {
		console.error(e);
	}
	res.send(data);
	next();
}

var filecount = 0;
app.post("/convert", function(req, res, next) {
	var buf = '';
	req.on('data', function(chunk){ buf += chunk; });
	req.on('end', function(){
		var infile = __dirname+"/"+(filecount)+".x3d";
		var outfile = __dirname+"/"+(filecount)+".json";
		filecount++;
		console.error("converting ", buf);
		fs.writeFile(infile, buf, function(err) {
			if (err) throw err;
			convertX3dToJson(res, infile, outfile, function() {
				console.error("Unlinking", infile);
				fs.unlink(infile);
				console.error("Unlinking", outfile);
				fs.unlink(outfile);
				next();
			});
		});
	});
});

app.get("/", function(req, res, next) {
	fs.readFile(__dirname+"/index.html", function(err, data) {
		if (err) throw err;
	 	send(res, data, "text/html", next);
	});
});

app.get("/files", function(req, res, next) {
	glob(__dirname+'/**/*.json', function( err, files ) {
		if (err) return;
		var test = req._parsedUrl.query;
		var json = [];
		files.forEach(function(file) {
			if (new RegExp(test).test(file)) {
				json.push(file.substr(__dirname.length));
				console.error(file);
			}

		});
                send(res, json, "text/json", next);
	});
});

function magic(path, type) {
    app.get(path, function(req, res, next) {
	var url = req._parsedUrl.pathname;
	while (url.startsWith("/")) {
		url = url.substr(1);
	}
	console.error("Requested", url);
	var data = fs.readFileSync(__dirname+"/"+url);
	if (type.startsWith("image") || type.startsWith("audio") || type.startsWith("video")) {
		send(res, data, type, next);
	} else {
		send(res, data.toString(), type, next);
	}
    });
}

function processX3d(req, res, next) {
	var url = req._parsedUrl.pathname.substr(1);
	console.error("X3D url", url);
	var hash = url.indexOf("#");
	var infile = url;
	if (hash > 0) {
	       infile = url.substring(0, hash);
	}
	var outfile = file.substr(0, file.lastIndexOf("."))+".json";
	convertX3dToJson(res, infile, outfile, next);
}

/*
app.get("*.x3d#*", processX3d);
app.get("*.x3d", processX3d);
*/

magic("*.gltf", "text/json");
magic("*.glb", "application/octet-stream");
magic("*.vs", "text/plain");//"x-shader/x-vertex");
magic("*.fs", "text/plain");//"x-shader/x-fragment");
magic("*.html", "text/html");
magic("*.x3d", "model/x3d+xml");
magic("*.xml", "text/xml");
magic("*.xslt", "text/xsl");
magic("*.xhtml", "application/xhtml+xml");
magic("*.js", "text/javascript");
magic("*.css", "text/css");
magic("*.gif", "image/gif");
magic("*.jpg", "image/jpeg");
magic("*.JPG", "image/jpeg");
magic("*.jpeg", "image/jpeg");
magic("*.png", "image/png");
magic("*.mpg", "video/mpeg");
magic("*.wav", "audio/wav");
magic("*.mp3", "audio/mpeg3");
magic("*.swf", "application/x-shockwave-flash");
magic("*.ply", "application/octet-stream");
magic("*.stl", "application/octet-stream");

app.get("*.json", function(req, res, next) {
	var url = req._parsedUrl.pathname.substr(1);
	console.error("Json URL", url);
	var file = url;
	var hash = url.indexOf("#");
	if (hash > 0) {
		file = url.substring(0, hash);
	}
	var json = {};
	var outfile = __dirname+"/"+file;
	console.log("File exists ?", outfile);
	if (fs.existsSync(outfile)) {
		console.log("File exists, reading", outfile);
		var data = fs.readFileSync(outfile);
		var json = JSON.parse(data.toString());
		console.error("Calling extern proto expander 2");
		json = externPrototypeExpander(outfile, json);
		json = flattener(json);
                send(res, json, "text/json", next);
	} else {
		var infile = file.substr(0, file.lastIndexOf("."))+".x3d";
		console.error("converting 2", infile, "to", outfile);
		convertX3dToJson(res, infile, outfile, next);
	}
});


app.listen(port);
