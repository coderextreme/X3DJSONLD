import express from 'express';
import bodyParser from 'body-parser';
import Handlebars from "handlebars";

import path from 'path';
import { fileURLToPath } from 'url';

const __filename = fileURLToPath(import.meta.url);
const __dirname = path.dirname(__filename);

import fs from 'fs';
var app = express();
app.use((req, res, next) => {
  res.header("Access-Control-Allow-Origin", "*"); // Allow requests from any origin
  res.header("Access-Control-Allow-Methods", "GET, POST, PUT, DELETE, OPTIONS");
  res.header("Access-Control-Allow-Headers", "Origin, X-Requested-With, Content-Type, Accept");
  next();
});
app.use(bodyParser.json());
app.use(express.urlencoded({ extended: true }));

import reqhttp from 'http';
var http = reqhttp.Server(app);
import { Server } from 'socket.io';
var io = new Server(http, {
    cors: {
      origin: "*",
      methods: ["GET", "POST"]
    },
    maxHttpBufferSize: 1e9,
    pingTimeout: 60000,
    transports: [ "polling", "websocket" ]
});

import Multiplayer from "./Multiplayer.js";

new Multiplayer(io);

app.use(express.static(__dirname + '/src/main/html'));
app.use(express.static(__dirname + '/src/main'));
var router = express.Router();
router.route('/group')
  .post(function(req, res) {
    try {
      res.set({
        'Cache-Control': 'no-store, no-cache, must-revalidate, proxy-revalidate',
        'Pragma': 'no-cache',
        'Expires': '0'
      });
      const visit = req.body;
      // console.log(req.body);
      res.json(visit);
    } catch (e) {
      console.error(e);
      res.status(500).json({ error: "An error occurred" });
    }
  });
app.use('/api', router);

function templatize(req, sessionType, ws) {
	  // TODO validation
	let webSocket = null;
	if (ws === null || ws === '"null"' || ws === 'null') {
		webSocket = 'null';
	} else {
		webSocket = ws;
	}
	const templateparams = {
		firstName : req.params.SessionName.split(':')[0],
		firstToken : req.params.SessionToken.split(':')[0],
		sessionName : req.params.SessionName,
		sessionToken : req.params.SessionToken,
		sessionType : sessionType,
		webSocket : webSocket
	}
	let sns = templateparams.sessionName.split(":");
	let tos = templateparams.sessionToken.split(":");
	for (let sn in sns) {
		console.log(`http://localhost:${port}/tapi/template/group1-petname/${tos[sn]}/${webSocket}`)
	}
	return templateparams;
}
var router2 = express.Router();
router2.route('/template/Gathering/:SessionName/:SessionToken/:WebSocket')
  .get(function(req, res) {
	console.log("Got template request");
        let templatecode = fs.readFileSync(__dirname + "/public/grouptemplate.html").toString();
	const template = Handlebars.compile(templatecode);
	res.send(template(templatize(req, "Gathering", req.params.WebSocket)));
  });
router2.route('/template/:SessionName/:SessionToken/:WebSocket')
  .get(function(req, res) {
	console.log("Got template request");
        let templatecode = fs.readFileSync(__dirname + "/public/template.html").toString();
	const template = Handlebars.compile(templatecode);
	res.send(template(templatize(req, null, req.params.WebSocket)));
  });
router2.route('/templateapache/:SessionName/:SessionToken/:WebSocket')
  .get(function(req, res) {
	console.log("Got templateapache request");
        let templatecode = fs.readFileSync(__dirname + "/public/templateapache.html").toString();
	const template = Handlebars.compile(templatecode);
	res.send(template(templatize(req, null, req.params.WebSocket)));
  });
app.use('/tapi', router2);


var defaultPort = 3000;

var port = process.env.X3DJSONPORT || defaultPort;

http.listen(port);

console.log('\thttp://localhost:%s/main_viewer.html', port);
console.log('\thttp://localhost:%s/responsive.html', port);

http.on('error', function (e) {
  if (e.code == 'EADDRINUSE') {
    console.log('Address in use, exiting...');
  }
});
