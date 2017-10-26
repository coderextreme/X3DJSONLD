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
var PROTOS = require('./src/main/node/PrototypeExpander')
PROTOS.setLoadURLs(loadURLs);
;
var FL = require('./src/main/node/Flattener')
var flattener = FL.flattener;

var runAndSend = require('./src/main/node/runAndSend');


var www = config.x3dcode;


app.use(express.static('/'));
app.use(express.static('src/main/data'));
// app.use(express.static('src/main/node'));
app.use(express.static('src/main/orig'));
app.use(express.static('src/main/out'));
app.use(express.static('src/main/schema'));
app.use(express.static('src/main/resources'));
app.use(express.static('src/main/shaders'));
app.use(express.static('src/main/nashorn'));
app.use(express.static('src/main/lib'));
app.use(express.static('src/main/html'));
app.use(express.static('src/main'));

function convertX3dToJson(res, infile, outfile, next) {
	console.error("Calling converter on "+infile);
	runAndSend(['---overwrite', '---', infile], function(json) {
		// console.error("Calling extern proto expander");
		json = PROTOS.externalPrototypeExpander(outfile, json);
		json = flattener(json);
		// console.error("Json", json);
		send(res, json, "text/json", next);
	});
}

function send(res, data, type, next) {
	sendNoNext(res, data, type);
	next();
}

function sendNoNext(res, data, type) {
	console.error("Type", type);
	try {
		if (!type.startsWith("image/")) {
			res.header("Content-Type", type);
		}
	} catch (e) {
		console.error(e);
	}
	res.send(data);
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


app.get("/X3dGraphics.com/*.x3d*", function(req, res, next) {
	var url = req._parsedUrl.pathname;
	var hash = url.indexOf("#");
	var infile = url;
	if (hash > 0) {
	       infile = url.substring(0, hash);
	}
	infile = "http:/" + infile;
	console.error("Proxy", infile);
	console.error("=========== converting == ", infile);
	var outfile = infile.substr(0, infile.lastIndexOf("."))+".json";
	convertX3dToJson(res, infile, outfile, next);
});
app.get("/www.web3d.org/*.x3d*", function(req, res, next) {
	var url = req._parsedUrl.pathname;
	var hash = url.indexOf("#");
	var infile = url;
	if (hash > 0) {
	       infile = url.substring(0, hash);
	}
	infile = www + "/" + infile;
	console.error("Proxy", infile);
	console.error("=========== converting == ", infile);
	var outfile = infile.substr(0, infile.lastIndexOf("."))+".json";
	convertX3dToJson(res, infile, outfile, next);
});
/*
app.get("/data/*.x3d*", function(req, res, next) {
	var url = req._parsedUrl.pathname;
	var hash = url.indexOf("#");
	var infile = url;
	if (hash > 0) {
	       infile = url.substring(0, hash);
	}
	console.error("=========== converting == ", infile);
	var outfile = infile.substr(0, infile.lastIndexOf("."))+".json";
	convertX3dToJson(res, infile, outfile, next);
});
*/

app.get("/files", function(req, res, next) {
	var test = req._parsedUrl.query;
	var json = [];

	glob('src/main/ply/*.ply', function( err, files ) {
		if (err) return;
		files.forEach(function(file) {
			if (new RegExp(test).test(file)) {
				json.push(file);
				console.error(file);
			}

		});
		glob('src/main/stl/*.stl', function( err, files ) {
			if (err) return;
			files.forEach(function(file) {
				if (new RegExp(test).test(file)) {
					json.push(file);
					console.error(file);
				}

			});
			glob('src/main/Examples/**/*.json', function( err, files ) {
				if (err) return;
				files.forEach(function(file) {
					if (new RegExp(test).test(file)) {
						file = file.replace(/src\/main/, '..');
						json.push(file);
						console.error(file);
					}

				});
				glob(www+'/**/*.json', function( err, files ) {
					if (err) return;
					files.forEach(function(file) {
						if (new RegExp(test).test(file)) {
							json.push(file.substr(www.length, file.length-www.length));
							console.error(file);
						}

					});
					send(res, json, "text/json", next);
				});
			});
		});
	});
});

function magic(path, type) {
    app.get(path, function(req, res, next) {
	var url = req._parsedUrl.pathname;
	while (url.startsWith("/")) {
		url = url.substr(1);
	}
	console.error("Requested", url);
	if (url.startsWith("www.web3d.org")) {
		var data = fs.readFileSync(www + "/" + url);
	} else {
		var data = fs.readFileSync(__dirname+"/"+url);
	}
	if (type.startsWith("image") || type.startsWith("audio") || type.startsWith("video")) {
		sendNoNext(res, data, type);
	} else {
		sendNoNext(res, data.toString(), type);
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
	infile = www + "/" + infile;
	console.error("=========== converting == ", infile);
	var outfile = infile.substr(0, infile.lastIndexOf("."))+".json";
	convertX3dToJson(res, infile, outfile, next);
}

/*
app.get("*.x3d#*", processX3d);
app.get("*.x3d", processX3d);
*/

magic("*.gif", "image/gif");
magic("*.jpg", "image/jpeg");
magic("*.JPG", "image/jpeg");
magic("*.jpeg", "image/jpeg");
magic("*.png", "image/png");
magic("*.mpg", "video/mpeg");
magic("*.wav", "audio/wav");
magic("*.mp3", "audio/mpeg3");
magic("*.ply", "application/octet-stream");
magic("*.stl", "application/octet-stream");
magic("*.vs", "text/plain");//"x-shader/x-vertex");
magic("*.fs", "text/plain");//"x-shader/x-fragment");
magic("*.js", "text/javascript");
magic("/*.xhtml", "application/xhtml+xml");
magic("/*.html", "text/html");
magic("*.xslt", "text/xsl");
magic("*.css", "text/css");
magic("*.swf", "application/x-shockwave-flash");
magic("/**/schema/*.json", "text/json");
magic("*.x3d", "model/x3d+xml");
/*
magic("*.gltf", "text/json");
magic("*.glb", "application/octet-stream");
magic("*.xml", "text/xml");
*/


app.get("*.json", function(req, res, next) {
	var url = req._parsedUrl.pathname.substr(1);
	console.error("Requested JSON File", url);
	var file = url;
	var hash = url.indexOf("#");
	if (hash > 0) {
		file = url.substring(0, hash);
	}
	var json = {};
	var outfile = __dirname+"/"+file;
	if (outfile.indexOf("www.web3d.org") >= 0) {
		outfile = www +"/"+file.substr(file.indexOf("www.web3d.org"));
	}
	/*
	if (fs.existsSync(outfile)) {
	*/
		console.error("Reading", outfile);
		var data = fs.readFileSync(outfile);
		console.error("Data", data.toString());
		var json = JSON.parse(data.toString());
		console.error(JSON.stringify(json));
		// console.error("Calling extern proto expander");
		json = PROTOS.externalPrototypeExpander(outfile, json);
		json = flattener(json);
		// console.error(JSON.stringify(json));
                send(res, json, "text/json", next);
	/*
	} else {
		var infile = file.substr(0, file.lastIndexOf("."))+".x3d";
		infile = www + "/" + infile;
		convertX3dToJson(res, infile, outfile, next);
	}
	*/
});


app.listen(port);
