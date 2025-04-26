var port = process.env.PORT || 3000;

var config = require("./src/main/node/config.js");
var fieldTypes = require("./src/main/node/fieldTypes.js");
var PROTOS = require('./src/main/node/PrototypeExpander.js');
var X3DJSONLD = require('./src/main/node/X3DJSONLD.js');
var { DOMParser, XMLSerializer } = require('@xmldom/xmldom');
var path = require('path');
var express = require('express');
var fs = require('fs');
var https = require('https');
const { glob, globSync } = require('glob');
var path = require('path');
var fileURLToPath = require('url');
var DOMParser = require('@xmldom/xmldom');
var DOM2JSONSerializer = require("./src/main/node/DOM2JSONSerializer.js");
var mapToMethod = require("./src/main/node/mapToMethod.js");

// var { runAndSend } = require( './src/main/node/runAndSend';


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
        doc = domParser.parseFromString(data.toString(), 'application/xml');
        var element = doc.documentElement;
        console.error("Calling converter " + serializer + " on " + infile);
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
        res.header("Content-Type-Options", "nosniff");
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

app.get(new RegExp("^/www\\.web3d\\.org/.*\\.wrl$"), async function(req, res, next) {
    var url = req._parsedUrl.pathname;
    var hash = url.indexOf("#");
    var infile = url;
    if (hash > 0) {
        infile = url.substring(0, hash);
    }
    infile = www + "/" + infile;
    try {
        var data = await fs.promises.readFile(infile);
        sendNoNext(res, data.toString(), "model/vrml");
    } catch (e) {
        console.error("Couldn't read", infile);
        next();
    }
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

    let dirs = ['src/main/Library/**', 'src/main/data/**', 'src/main/personal/**', 'src/main/wrl/**', 'src/main/ply/**', 'src/main/stl/**'];
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
    send(res, json, "text/json", next);
});

// Generic handler function
async function genericFileHandler(req, res, next, type) {
    var url = req.path;
    try {
        while (url.startsWith("/")) {
            url = url.substr(1);
        }
        console.error(req.ip + ":  Requested", url);
        var wind = url.indexOf("www.web3d.org");
        if (wind >= 0) {
            url = url.substring(wind);
            var cwind = config.examples().indexOf("www.web3d.org");
            url = config.examples().substr(0, cwind) + url;
        } else {
            url = __dirname + "/" + url;
        }
        if (fs.existsSync(url)) {
            console.error("Reading", url);
            var data = await fs.promises.readFile(url);
            if (type.startsWith("image") || type.startsWith("audio") || type.startsWith("video")) {
                sendNoNext(res, data, type);
            } else {
                sendNoNext(res, data.toString(), type);
            }
        } else {
            console.error("File does not exist", url);
            next();
        }
    } catch (e) {
        console.error(e, "Couldn't read", url);
        next();
    }
}

// Middleware to handle different file types
app.use(async (req, res, next) => {
    const url = req.path;
    if (url.endsWith(".gif")) {
        await genericFileHandler(req, res, next, "image/gif");
    } else if (url.endsWith(".jpg") || url.endsWith(".JPG") || url.endsWith(".jpeg")) {
        await genericFileHandler(req, res, next, "image/jpeg");
    } else if (url.endsWith(".png")) {
        await genericFileHandler(req, res, next, "image/png");
    } else if (url.endsWith(".mpg")) {
        await genericFileHandler(req, res, next, "video/mpeg");
    } else if (url.endsWith(".mp4")) {
        await genericFileHandler(req, res, next, "video/mp4");
    } else if (url.endsWith(".ogv")) {
        await genericFileHandler(req, res, next, "video/ogg");
    } else if (url.endsWith(".wav")) {
        await genericFileHandler(req, res, next, "audio/wav");
    } else if (url.endsWith(".mp3")) {
        await genericFileHandler(req, res, next, "audio/mpeg3");
    } else if (url.endsWith(".ply")) {
        await genericFileHandler(req, res, next, "application/octet-stream");
    } else if (url.endsWith(".stl")) {
        await genericFileHandler(req, res, next, "application/octet-stream");
    } else if (url.endsWith(".vs")) {
        await genericFileHandler(req, res, next, "x-shader/x-vertex");
    } else if (url.endsWith(".fs")) {
        await genericFileHandler(req, res, next, "x-shader/x-fragment");
    } else if (url.endsWith(".js")) {
        await genericFileHandler(req, res, next, "text/javascript");
    } else if (url.endsWith(".py")) {
        await genericFileHandler(req, res, next, "text/python");
    } else if (url.endsWith(".mjs")) {
        await genericFileHandler(req, res, next, "text/javascript");
    } else if (url.endsWith(".js.map")) {
        await genericFileHandler(req, res, next, "application/json");
    } else if (url.endsWith(".csv")) {
        await genericFileHandler(req, res, next, "text/csv");
    } else if (url.endsWith(".xhtml")) {
        await genericFileHandler(req, res, next, "application/xhtml+xml");
    } else if (url.endsWith(".xsd")) {
        await genericFileHandler(req, res, next, "application/xml");
    } else if (url.endsWith(".html")) {
        await genericFileHandler(req, res, next, "text/html");
    } else if (url.endsWith(".xslt")) {
        await genericFileHandler(req, res, next, "text/xsl");
    } else if (url.endsWith(".css")) {
        await genericFileHandler(req, res, next, "text/css");
    } else if (url.endsWith(".swf")) {
        await genericFileHandler(req, res, next, "application/x-shockwave-flash");
    } else if (url.includes("/schema/") && url.endsWith(".json")) {
        await genericFileHandler(req, res, next, "text/json");
    } else if (url.endsWith(".x3d")) {
        await genericFileHandler(req, res, next, "model/x3d+xml");
    } else if (url.endsWith(".x3dv")) {
        await genericFileHandler(req, res, next, "model/x3d+vrml");
    } else if (url.endsWith(".wrl")) {
        await genericFileHandler(req, res, next, "model/vrml");
    } else if (url.endsWith(".gltf")) {
        await genericFileHandler(req, res, next, "text/json");
    } else if (url.endsWith(".glb")) {
        await genericFileHandler(req, res, next, "application/octet-stream");
    } else if (url.endsWith(".bin")) {
        await genericFileHandler(req, res, next, "application/octet-stream");
    } else if (url.endsWith(".json")) {
        try {
            var data = await fs.promises.readFile(__dirname + '/' + url);
            var json = JSON.parse(data.toString());
            send(res, json, "text/json", next);
        } catch (e) {
            console.error("Couldn't read JSON.  Consider creating a JSON file", url);
            next();
        }
    } else if (url.endsWith(".x3dj")) {
        try {
            var data = await fs.promises.readFile(__dirname + '/' + url);
            var json = JSON.parse(data.toString());
            send(res, json, "text/json", next);
        } catch (e) {
            console.error("Couldn't read JSON.  Consider creating a JSON file", url);
            next();
        }
    }
	 else {
        next(); // Pass control to the next middleware if no match
    }
});

https.createServer({
    key: fs.readFileSync('key.pem'),
    cert: fs.readFileSync('cert.pem'),
    requestCert: false,
    rejectUnauthorized: false
}, app)
    .listen(port, '127.0.0.1', function() {
        console.log('Example app listening on port', port, "! Go to https://localhost:" + port + "/");
});
