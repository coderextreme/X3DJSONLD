var express = require('express');
var app = express();
var http = require('http').Server(app);
var glob = require( 'glob' );  
var config = require("./config");
var port = process.env.PORT || 3000;
var path = require('path');

var fs = require("fs");
var X3DJSONLD = require('./X3DJSONLD.js');
var loadURLs = X3DJSONLD.loadURLs;
var PE = require('./PrototypeExpander')
PE.setLoadURLs(loadURLs);
var externPrototypeExpander = PE.externPrototypeExpander;

var runAndSend = require('./runAndSend');

fs.symlink(
path.resolve(config.examples),
path.resolve(__dirname + "/examples"),
'junction',
 function (err) {
        if (err) {
                console.log( err.code === 'EEXIST' ? "listening on http://localhost:"+port+"\n" : err);
        }
  }
);

var infl = 0;
app.post("/convert", function(req, res, next) {
	var buf = '';
	req.on('data', function(chunk){ buf += chunk; });
	req.on('end', function(){
		var infile = "/tmp/x3d"+(infl++)+".x3d";
		console.log("converting ", buf);
		fs.writeFileSync(infile, buf);
		var json = runAndSend(infile);
		json = externPrototypeExpander(infile, json);
		fs.unlink(infile);
		res.send(json);
	});
});

app.get("/", function(req, res, next) {
	fs.readFile("index.html", function(err, data) {
		if (err) throw err;
		res.header("Content-Type", "text/html");
	 	res.send(data);
		next();
	});
});

app.get("/files", function(req, res, next) {
	glob(__dirname+'/**/*.x3d', function( err, files ) {
		if (err) return;
		var test = req._parsedUrl.query;
		var json = [];
		files.forEach(function(file) {
			if (new RegExp(test).test(file)) {
				json.push(file.substr(__dirname.length));
				console.log(file);
			}

		});
              	res.header("Content-Type", "text/json");
                res.send(json);
	});
});

function magic(path, type) {
    app.get(path, function(req, res, next) {
	var url = req._parsedUrl.pathname.substr(1);
	console.log(url);
	fs.readFile(url, function(err, data) {
		if (err) {
			console.error(err);
		} else {
			res.header("Content-Type", type);
			res.send(data);
		}
		next();
	});
    });
}

function processX3d(req, res, next) {
	var url = req._parsedUrl.pathname.substr(1);
	console.log(url);
	var hash = url.indexOf("#");
	var file = url;
	if (hash > 0) {
	       file = url.substring(0, hash);
	}
	try {
		console.log("Calling converter on "+file);
		var json = runAndSend(file);
		console.log("Calling expander on "+url);
               	json = externPrototypeExpander(url, json);
              	res.header("Content-Type", "text/json");
                res.send(json);
	} catch (e) {
        	console.log(e);
	}
        next();
}

app.get("*.x3d#*", processX3d);
app.get("*.x3d", processX3d);

magic("*.vs", "text/plain");//"x-shader/x-vertex");
magic("*.fs", "text/plain");//"x-shader/x-fragment");
magic("*.html", "text/html");
magic("*.xslt", "text/xsl");
magic("*.xhtml", "application/xhtml+xml");
magic("*.js", "text/javascript");
magic("*.css", "text/css");
magic("*.gif", "image/gif");
magic("*.jpg", "image/jpeg");
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
	console.log(url);
	var file = url;
	var hash = url.indexOf("#");
	if (hash > 0) {
		file = url.substring(0, hash);
	}
	var json = {};
	try {
		var data = fs.readFileSync(file);
		json = JSON.parse(data.toString());
	} catch (e) {
		console.log(e+" "+file);
		try {
			file = file.substr(0, file.lastIndexOf("."))+".x3d";
			json = runAndSend(file);
		} catch (e) {
			console.log(e+" "+file);
		}
	}
	console.log(url);
	console.log("Calling expander");
        json = externPrototypeExpander(url, json);
        res.header("Content-Type", "text/json");
        res.send(json);
        next();
});


app.listen(port);
