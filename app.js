var port = process.env.PORT || 3000;

import config from "./src/main/node/config.js";
import fieldTypes from "./src/main/node/fieldTypes.js";
import X3DJSONLD from './src/main/node/X3DJSONLD.js';
import { DOMParser, XMLSerializer } from '@xmldom/xmldom';
import { dirname } from 'path';
import path from 'path';
import express from 'express';
import fs from 'fs';
import http from 'http';
import { glob, globSync } from 'glob';
import { fileURLToPath } from 'url';
import DOM2JSONSerializer from "./src/main/node/DOM2JSONSerializer.js";
import mapToMethod from "./src/main/node/mapToMethod.js";

// import { runAndSend } from './src/main/node/runAndSend';
const __filename = fileURLToPath(import.meta.url);
const __dirname = dirname(__filename);


var www = config.x3dcode();

var app = express();


app.use(express.static('/'));
app.use(express.static('dist'));
app.use(express.static('src/main/data'));
app.use(express.static('src/main/personal'));
app.use(express.static('src/main/node'));
app.use(express.static('src/main/orig'));
app.use(express.static('src/main/out'));
app.use(express.static('src/main/schema'));
app.use(express.static('src/main/resources'));
app.use(express.static('src/main/shaders'));
app.use(express.static('src/main/nashorn'));
app.use(express.static('src/main/lib'));
app.use(express.static('src/main/html'));
app.use(express.static('src/main'));

async function convertX3dToJson(res, infile, outfile, next) {
	try {
		var data = await fs.promises.readFile(infile);
		var doc = null;
		var domParser = new DOMParser();
		doc = domParser.parseFromString (data.toString(), 'application/xml');
		var element = doc.documentElement;
		console.log("Calling converter "+serializer+" on "+infile);
		var serializer = new DOM2JSONSerializer();
		var str = serializer.serializeToString(null, element, outfile, mapToMethod, fieldTypes);
		var json = JSON.parse(str);
		send(res, json, "text/json", next, outfile+".json");
	} catch (e) {
		next();
		console.error(e, "Problems converting", infile, "to", outfile);
	}
	/*
	runAndSend(['---overwrite', '---', infile], function(json) {
		// console.error("Json", json);
		send(res, json, "text/json", next);
	});
	*/
}

function send(res, data, type, next, outfile) {
	sendNoNext(res, data, type, outfile);
	next();
}

function sendNoNext(res, data, type, outfile) {
	// console.error("Type", type);
	try {
		if (!type.startsWith("image/")) {
			res.header("Content-Type", type);
		}
		res.header("Content-Type-Options", "nosniff");
	} catch (e) {
		console.error(e);
	}
	console.log("    Replied with File", outfile);
	res.send(data);
}

var filecount = 0;
/*
app.post("/convert", function(req, res, next) {
	var buf = '';
	req.on('data', function(chunk){ buf += chunk; });
	req.on('end', function(){
		var infile = __dirname+"/"+ (filecount)+".x3d";
		var outfile = __dirname+"/"+ (filecount)+".json";
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
	infile = "https:/" + infile;
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

app.get("/www.web3d.org/*.wrl", async function(req, res, next) {
	var url = req._parsedUrl.pathname;
	var hash = url.indexOf("#");
	var infile = url;
	if (hash > 0) {
	       infile = url.substring(0, hash);
	}
	infile = www + "/" + infile;
	var data = await fs.promises.readFile(infile);
	sendNoNext(res, data.toString(), "model/vrml", infile);
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
	// var test = req._parsedUrl.pathname;
	while (test.startsWith("/")) {
		test = test.substr(1);
	}
	console.log("here's the file search query", test);
	var json = [];

//	globSync(www+'/**/*.wrl', function( err, files ) {
//		if (err) return;
//		files.forEach(function(file) {
//			if (new RegExp(test).test(file)) {
//				json.push(file.substr(www.length, file.length-www.length));
//				console.error(file);
//			}
//		});
//      });
//	globSync(www+'/**/*.x3d', function( err, files ) {
//		if (err) return;
//		files.forEach(function(file) {
//			if (new RegExp(test).test(file)) {
//				json.push(file.substr(www.length, file.length-www.length));
//				console.error(file);
//			}
//		});
//      });
//	globSync(www+'/**/*.json', function( err, files ) {
//		if (err) return;
//		files.forEach(function(file) {
//			if (new RegExp(test).test(file)) {
//				json.push(file.substr(www.length, file.length-www.length));
//				console.error(file);
//			}
//		});
//      });
	let dirs = ['src/main/Library/**', 'src/main/data/**','src/main/personal/**', 'src/main/wrl/**', 'src/main/ply/**', 'src/main/stl/**'];
	for (let dir in dirs) {
		let files = globSync(dirs[dir]);
		console.log("searching", dirs[dir]);
		files.forEach(function(file) {
			// console.log(file, "matching", test);
			if (new RegExp(test).test(file)) {
				console.log(file, "matches", test);
				file = file.replace(/src[\/\\]main/, '..');
				file = file.replace(/\\/g, '/');
				json.push(file);
				console.log("returning", file);
			} else {
				// console.log(file, "does not match", test);
			}
		});
	}
	console.log("Sending ", json.length, "files");
	send(res, json, "text/json", next, json);
});

function magic(path, type) {
    let query = path.indexOf("?");
    if (query >= 0) {
	    path = path.substr(query);
    }
    var hash = path.indexOf("#");
    if (hash > 0) {
		path = path.substr(hash);
    }
    app.get(path, async function(req, res, next) {
	res.setHeader('Content-Type', type); // Explicitly set without charset
	var url = req._parsedUrl.pathname;
	try {
		while (url.startsWith("/")) {
			url = url.substr(1);
		}
		console.log(req.ip+":  Requested", url);
		var wind = url.indexOf("www.web3d.org");
		if (wind >= 0) {
			url = url.substring(wind);
			var cwind = config.examples().indexOf("www.web3d.org");
			url = config.examples().substr(0, cwind) + url;
		} else {
			url = __dirname+"/"+ url;
		}
		if (fs.existsSync(url)) {
			console.log("Reading", url);
			var data = await fs.promises.readFile(url);
			if (type.startsWith("image") || type.startsWith("audio") || type.startsWith("video")) {
				sendNoNext(res, data, type, url);
			} else {
				sendNoNext(res, data.toString(), type, url);
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
magic("*.rb", "application/octet-stream");
magic("*.clj", "application/octet-stream");
magic("*.vs", "x-shader/x-vertex");
magic("*.fs", "x-shader/x-fragment");
// magic("*.vs", "text/plain");//"x-shader/x-vertex");
// magic("*.fs", "text/plain");//"x-shader/x-fragment");
magic("*.js", "text/javascript");
magic("*.py", "text/python");
magic("/dist/*.mjs", "text/javascript");
magic("/src/main/node/*.mjs", "text/javascript");
magic("*.js.map", "application/json");
magic("*.csv", "text/csv");
magic("/*.xhtml", "application/xhtml+xml");
magic("/*.xsd", "application/xml");
magic("/*.html", "text/html");
magic("*.xslt", "text/xsl");
magic("*.css", "text/css");
magic("*.swf", "application/x-shockwave-flash");
magic("/**/schema/*.json", "text/json");
magic("*.x3d", "model/x3d+xml");
magic("*.x3dv", "model/x3d+vrml");
magic("*.wrl", "model/vrml");
magic("*.gltf", "text/json");
magic("*.glb", "application/octet-stream");
magic("*.bin", "application/octet-stream");
magic("*.zip", "application/zip");
magic("*.wasm", "application/octet-stream");
/*
magic("*.xml", "text/xml");
*/


app.get("*.json", async function(req, res, next) {
	var url = req._parsedUrl.pathname.substr(1);
	console.log(req.ip+":  Requested JSON File", url);
	var file = url;
	var hash = url.indexOf("#");
	if (hash > 0) {
		file = url.substring(0, hash);
	}
	var json = {};
	var outfile = __dirname+"/"+ file;
	if (outfile.indexOf("www.web3d.org") >= 0) {
		outfile = www +"/"+file.substr(file.indexOf("www.web3d.org"));
	}
	try {
		if (url.startsWith(".wellknown")) {
			throw ".wellknown not supported by server.  See app.js";
		}
	/*
	if (fs.existsSync(outfile)) {
	*/
		var data = await fs.promises.readFile(outfile);
		// console.error("Data", data.toString());
		var json = JSON.parse(data.toString());
		// console.error(JSON.stringify(json));
		// console.error(JSON.stringify(json));
                send(res, json, "text/json", next, outfile);
	/*
	} else {
		var infile = file.substr(0, file.lastIndexOf("."))+".x3d";
		infile = www + "/" + infile;
		convertX3dToJson(res, infile, outfile, next);
	}
	*/
	} catch (e) {
		console.error("Couldn't read JSON, ", outfile, ".  Consider creating a JSON file", url, e);
		next();
	}
});

app.get("*.x3dj", async function(req, res, next) {
	var url = req._parsedUrl.pathname.substr(1);
	console.log(req.ip+":  Requested JSON File", url);
	var file = url;
	var hash = url.indexOf("#");
	if (hash > 0) {
		file = url.substring(0, hash);
	}
	var json = {};
	var outfile = __dirname+"/"+ file;
	if (outfile.indexOf("www.web3d.org") >= 0) {
		outfile = www +"/"+file.substr(file.indexOf("www.web3d.org"));
	}
	try {
		if (url.startsWith(".wellknown")) {
			throw ".wellknown not supported by server.  See app.js";
		}
	/*
	if (fs.existsSync(outfile)) {
	*/
		var data = await fs.promises.readFile(outfile);
		// console.error("Data", data.toString());
		var json = JSON.parse(data.toString());
		// console.error(JSON.stringify(json));
                send(res, json, "text/json", next, outfile);
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

import { Server as SocketIOServer } from "socket.io";
import Multiplayer from "./Multiplayer.js"; 

const server = http.createServer(app);

const io = new SocketIOServer(server, {
    cors: {
      origin: "*",
      methods: ["GET", "POST"]
    },
    maxHttpBufferSize: 1e9,
    pingTimeout: 60000,
    transports: [ "polling", "websocket" ]
});

io.on("connection", (socket) => {
    console.log("Socket.IO client connected successfully! SID:", socket.id);
    socket.on("disconnect", () => {
        console.log("Client disconnected.");
    });
});


var metaServer = process.env.METASERVER || null;
if (metaServer != null) {
	var Client = require('node-rest-client').Client;
	var client = new Client();
}
new Multiplayer(io, metaServer);

server.listen(port, '127.0.0.1', function () {
  console.log('Example app listening on port', port, "! Go to http://localhost:"+port+"/src/main/html/main_viewer.html");
});
