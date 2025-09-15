// --- START OF FILE app.js ---

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
import { globSync } from 'node:fs';
import { glob } from 'node:fs/promises';
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
	var url = req.path;
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
	var url = req.path;
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

// EXPRESS 5 FIX: Changed glob-like path to a regular expression.
app.get(/\/www\.web3d\.org\/.*\.wrl$/, async function(req, res, next) {
	var url = req.path;
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
	var url = req.path;
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
	var test = Object.keys(req.query)[0] || '';
	
	while (test.startsWith("/")) {
		test = test.substr(1);
	}
	console.log("here's the file search query", test);
	var json = [];

	let dirs = ['src/main/Library/**', 'src/main/data/**','src/main/personal/**', 'src/main/wrl/**', 'src/main/ply/**', 'src/main/stl/**'];
	for (let dir of dirs) { // Use 'of' for iterating over array values
		let files = globSync(dir); // globSync is fine with this pattern
		console.log("searching", dir);
		files.forEach(function(file) {
			if (new RegExp(test).test(file)) {
				console.log(file, "matches", test);
				file = file.replace(/src[\/\\]main/, '..');
				file = file.replace(/\\/g, '/');
				json.push(file);
				console.log("returning", file);
			}
		});
	}
	console.log("Sending ", json.length, "files");
	send(res, json, "text/json", next, json);
});

function magic(path, type) {
    // The path argument to magic() is now a regular expression, so string operations are not needed.
    app.get(path, async function(req, res, next) {
	res.setHeader('Content-Type', type);
	var url = req.path;
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

// EXPRESS 5 FIX: All 'magic' calls and app.get calls below now use Regular Expressions for routing.
magic(/.*\.gif$/i, "image/gif");
magic(/.*\.jpg$/i, "image/jpeg");
magic(/.*\.jpeg$/i, "image/jpeg");
magic(/.*\.png$/i, "image/png");
magic(/.*\.mpg$/i, "video/mpeg");
magic(/.*\.mp4$/i, "video/mp4");
magic(/.*\.ogv$/i, "video/ogg");
magic(/.*\.wav$/i, "audio/wav");
magic(/.*\.mp3$/i, "audio/mpeg3");
magic(/.*\.ply$/i, "application/octet-stream");
magic(/.*\.stl$/i, "application/octet-stream");
magic(/.*\.rb$/i, "application/octet-stream");
magic(/.*\.clj$/i, "application/octet-stream");
magic(/.*\.vs$/i, "x-shader/x-vertex");
magic(/.*\.fs$/i, "x-shader/x-fragment");
magic(/.*\.js$/i, "text/javascript");
magic(/.*\.py$/i, "text/python");
magic(/\/dist\/.*\.mjs$/i, "text/javascript");
magic(/\/src\/main\/node\/.*\.mjs$/i, "text/javascript");
magic(/.*\.js\.map$/i, "application/json");
magic(/.*\.csv$/i, "text/csv");
magic(/.*\.xhtml$/i, "application/xhtml+xml");
magic(/.*\.xsd$/i, "application/xml");
magic(/.*\.html$/i, "text/html");
magic(/.*\.xslt$/i, "text/xsl");
magic(/.*\.css$/i, "text/css");
magic(/.*\.swf$/i, "application/x-shockwave-flash");
magic(/.*\/schema\/.*\.json$/i, "text/json");
magic(/.*\.x3d$/i, "model/x3d+xml");
magic(/.*\.x3dv$/i, "model/x3d+vrml");
magic(/.*\.wrl$/i, "model/vrml");
magic(/.*\.gltf$/i, "text/json");
magic(/.*\.glb$/i, "application/octet-stream");
magic(/.*\.bin$/i, "application/octet-stream");
magic(/.*\.zip$/i, "application/zip");
magic(/.*\.wasm$/i, "application/octet-stream");

app.get(/.*\.json$/, async function(req, res, next) {
	var url = req.path.substr(1);
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
		var data = await fs.promises.readFile(outfile);
		var json = JSON.parse(data.toString());
        send(res, json, "text/json", next, outfile);
	} catch (e) {
		console.error("Couldn't read JSON, ", outfile, ".  Consider creating a JSON file", url, e);
		next();
	}
});

app.get(/.*\.x3dj$/, async function(req, res, next) {
	var url = req.path.substr(1);
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
		var data = await fs.promises.readFile(outfile);
		var json = JSON.parse(data.toString());
        send(res, json, "text/json", next, outfile);
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
