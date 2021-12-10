var express = require('express');
var fs = require('fs');
var https = require('https');
var app = express();

var glob = require( 'glob' );  
var config = require("./src/main/node/config");
var port = process.env.PORT || 3000;
var path = require('path');
var DOMParser = require('@xmldom/xmldom').DOMParser;

var X3DJSONLD = require('./src/main/node/X3DJSONLD.js');

var PROTOS = require('./src/main/node/PrototypeExpander')
;
// var runAndSend = require('./src/main/node/runAndSend');
var DOM2JSONSerializer = require("./src/main/node/DOM2JSONSerializer");
var mapToMethod = require("./src/main/node/mapToMethod");
var fieldTypes = require("./src/main/node/fieldTypes");


var www = config.x3dcode;
var examples = config.examples;


app.use(express.static('/'));
app.use(express.static('src/main/data'));
app.use(express.static('src/main/personal'));
app.use(express.static('src/main/personal'));
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
	try {
		var data = fs.readFileSync(infile);
		var doc = null;
		var domParser = new DOMParser();
		doc = domParser.parseFromString (data.toString(), 'application/xml');
		var element = doc.documentElement;
		console.error("Calling converter "+serializer+" on "+infile);
		var serializer = new DOM2JSONSerializer();
		var str = serializer.serializeToString(null, element, outfile, mapToMethod, fieldTypes);
		var json = JSON.parse(str);
		// json = PROTOS.externalPrototypeExpander(outfile, json);
		send(res, json, "text/json", next);
	} catch (e) {
		next();
		console.error(e, "Problems converting", infile, "to", outfile);
	}
	/*
	runAndSend(['---overwrite', '---', infile], function(json) {
		// json = PROTOS.externalPrototypeExpander(outfile, json);
		// console.error("Json", json);
		send(res, json, "text/json", next);
	});
	*/
}

function send(res, data, type, next) {
	sendNoNext(res, data, type);
	next();
}

function sendNoNext(res, data, type) {
	// console.error("Type", type);
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
/*
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
*/


/*
app.get("/X3dGraphics.com/*.x3d", function(req, res, next) {
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
app.get("/www.web3d.org/*.x3d", function(req, res, next) {
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
*/

app.get("/www.web3d.org/*.wrl", function(req, res, next) {
	var url = req._parsedUrl.pathname;
	var hash = url.indexOf("#");
	var infile = url;
	if (hash > 0) {
	       infile = url.substring(0, hash);
	}
	infile = www + "/" + infile;
	var data = fs.readFileSync(infile);
	sendNoNext(res, data.toString(), "model/vrml");
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

	glob(www+'/**/*.wrl', function( err, files ) {
		if (err) return;
		files.forEach(function(file) {
			if (new RegExp(test).test(file)) {
				json.push(file.substr(www.length, file.length-www.length));
				console.error(file);
			}
		});
	glob(www+'/**/*.x3d', function( err, files ) {
		if (err) return;
		files.forEach(function(file) {
			if (new RegExp(test).test(file)) {
				json.push(file.substr(www.length, file.length-www.length));
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
	glob('src/main/data/**', function( err, files ) {
		if (err) return;
		files.forEach(function(file) {
			if (new RegExp(test).test(file)) {
				file = file.replace(/src\/main/, '..');
				json.push(file);
				console.error(file);
			}
		});
	glob('src/main/personal/**', function( err, files ) {
		if (err) return;
		files.forEach(function(file) {
			if (new RegExp(test).test(file)) {
				file = file.replace(/src\/main/, '..');
				json.push(file);
				console.error(file);
			}
		});
	glob('src/main/wrl/**', function( err, files ) {
		if (err) return;
		files.forEach(function(file) {
			if (new RegExp(test).test(file)) {
				file = file.replace(/src\/main/, '..');
				json.push(file);
				console.error(file);
			}
		});
	glob('src/main/ply/**', function( err, files ) {
		if (err) return;
		files.forEach(function(file) {
			if (new RegExp(test).test(file)) {
				file = file.replace(/src\/main/, '..');
				json.push(file);
				console.error(file);
			}
		});
	glob('src/main/stl/**', function( err, files ) {
		if (err) return;
		files.forEach(function(file) {
			if (new RegExp(test).test(file)) {
				file = file.replace(/src\/main/, '..');
				json.push(file);
				console.error(file);
			}
		});
	glob('src/main/Library/**', function( err, files ) {
		if (err) return;
		files.forEach(function(file) {
			if (new RegExp(test).test(file)) {
				file = file.replace(/src\/main/, '..');
				json.push(file);
				console.error(file);
			}
		});
	console.log("Sending ", json.length, "files");
	send(res, json, "text/json", next);
	});
	});
	});
	});
	});
	});
	});
	});
	});
});

function magic(path, type) {
    app.get(path, function(req, res, next) {
	var url = req._parsedUrl.pathname;
	try {
		while (url.startsWith("/")) {
			url = url.substr(1);
		}
		console.error("Requested", url);
		var wind = url.indexOf("www.web3d.org");
		if (wind >= 0) {
			url = url.substring(wind);
			var cwind = examples.indexOf("www.web3d.org");
			url = examples.substr(0, cwind) + url;
		} else {
			url = __dirname+"/"+url;
		}
		if (fs.existsSync(url)) {
			console.error("Reading", url);
			var data = fs.readFileSync(url);
			if (type.startsWith("image") || type.startsWith("audio") || type.startsWith("video")) {
				sendNoNext(res, data, type);
			} else {
				sendNoNext(res, data.toString(), type);
			}
		} else {
			console.error("File does not exist", url);
		}
	} catch (e) {
		console.error(e, "Couldn't read", url);
		next();
	}
    });
}

/*
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

app.get("*.x3d#*", processX3d);
app.get("*.x3d", processX3d);
*/

magic("*.gif", "image/gif");
magic("*.jpg", "image/jpeg");
magic("*.JPG", "image/jpeg");
magic("*.jpeg", "image/jpeg");
magic("*.png", "image/png");
magic("*.mpg", "video/mpeg");
magic("*.mp4", "video/mp4");
magic("*.ogv", "video/ogg");
magic("*.wav", "audio/wav");
magic("*.mp3", "audio/mpeg3");
magic("*.ply", "application/octet-stream");
magic("*.stl", "application/octet-stream");
magic("*.vs", "text/plain");//"x-shader/x-vertex");
magic("*.fs", "text/plain");//"x-shader/x-fragment");
magic("*.js", "text/javascript");
// magic("*.mjs", "text/javascript");
magic("*.js.map", "application/json");
magic("*.csv", "text/csv");
magic("/*.xhtml", "application/xhtml+xml");
magic("/*.html", "text/html");
magic("*.xslt", "text/xsl");
magic("*.css", "text/css");
magic("*.swf", "application/x-shockwave-flash");
magic("/**/schema/*.json", "text/json");
magic("*.x3d", "model/x3d+xml");
magic("*.wrl", "model/vrml");
magic("*.gltf", "text/json");
magic("*.glb", "application/octet-stream");
magic("*.bin", "application/octet-stream");
/*
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
	try {
	/*
	if (fs.existsSync(outfile)) {
	*/
		var data = fs.readFileSync(outfile);
		// console.error("Data", data.toString());
		var json = JSON.parse(data.toString());
		// console.error(JSON.stringify(json));
		// console.error("Calling extern proto expander");
		// json = PROTOS.externalPrototypeExpander(outfile, json);
		// console.error(JSON.stringify(json));
                send(res, json, "text/json", next);
	/*
	} else {
		var infile = file.substr(0, file.lastIndexOf("."))+".x3d";
		infile = www + "/" + infile;
		convertX3dToJson(res, infile, outfile, next);
	}
	*/
	} catch (e) {
		console.error("Couldn't read JSON.  Consider creating a JSON file", url);
		next();
	}
});


https.createServer({
  key: fs.readFileSync('server.key'),
  cert: fs.readFileSync('server.cert')
}, app)
.listen(3000, '192.168.0.43', function () {
  console.log('Example app listening on port 3000! Go to https://192.168.0.43:3000/')
})
