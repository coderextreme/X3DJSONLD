var express = require('express');
var app = express();
var http = require('http').Server(app);
var config = require("./config");
var port = process.env.PORT || 3000;
var path = require('path');
var fs = require("fs");
var externPrototypeExpander = require("./ServerPrototypeExpander");

var runsaxon = require('./allsaxon');

fs.symlink(
path.resolve(config.examples),
path.resolve(__dirname + "/examples"),
'junction',
 function (err) {
        if (err) {
                console.log( err.code === 'EEXIST' ? "Go to the link above!\n" : err);
        }
  }
);

function runAndSend(infile) {
	runsaxon([infile]);
	var outfile = infile.substr(0, infile.lastIndexOf("."))+".json";
	var content = fs.readFileSync(outfile);
	var json = JSON.parse(content.toString());
	externPrototypeExpander(outfile, json);
	fs.unlink(outfile);
	console.log('sending back', json);
	return json;
}

var infl = 0;
app.post("/convert", function(req, res, next) {
	var buf = '';
	req.on('data', function(chunk){ buf += chunk; });
	req.on('end', function(){
		var infile = "/tmp/x3d"+(infl++)+".x3d";
		console.log("converting ", buf);
		fs.writeFileSync(infile, buf);
		var json = runAndSend(infile);
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

magic("*.vs", "text/plain");//"x-shader/x-vertex");
magic("*.fs", "text/plain");//"x-shader/x-fragment");
magic("*.x3d", "model/x3d+xml");
magic("*.html", "text/html");
magic("*.xslt", "text/xsl");
magic("*.xhtml", "application/xhtml+xml");
magic("*.js", "text/javascript");
magic("*.css", "text/css");
magic("*.gif", "image/gif");
magic("*.jpg", "image/jpeg");
magic("*.jpeg", "image/jpeg");
magic("*.png", "image/png");

app.get("*.json", function(req, res, next) {
	var url = req._parsedUrl.pathname.substr(1);
	console.log(url);
	fs.readFile(url, function(err, data) {
		if (err) {
			console.error(err);
		} else {
			try {
				var json = JSON.parse(data.toString());
				console.log("Calling expander");
				externPrototypeExpander(url, json);
				res.header("Content-Type", "text/json");
				res.send(json);
			} catch (e) {
				console.log(e);
			}
		}
		next();
	});
});

// app.use(express.static(__dirname));

http.listen(port, function () {
    console.log('listening on http://localhost:' + port);
});
