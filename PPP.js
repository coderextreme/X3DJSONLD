// X3D JSON Prototype and Script preprocessor

var X3DJSONLD =require('./X3DJSONLD');
var json2x3d =require('./json2x3d');
var prototypeExpander = require('./PrototypeExpander');
var Script = require('./Script');
var loadX3DJS = json2x3d.loadX3DJS;
var Browser = X3DJSONLD.Browser;
var processScripts = Script.processScripts;
var LOG = Script.LOG;
var externPrototypeExpander = require("./ServerPrototypeExpander");
var fs = require("fs");

/*
var content = '';
// read content into buffer
process.stdin.resume();
process.stdin.on('data', function(buf) { content += buf.toString(); });

process.stdin.on('end', function() {
*/
	var file = process.argv[2];
	var object = JSON.parse(fs.readFileSync(file).toString());
	// var object = JSON.parse(content);
	externPrototypeExpander(file, object);
	prototypeExpander(object, "");
	console.log(JSON.stringify(object, null, 2));

	var classes = new LOG();
	var routecode = new LOG();

	processScripts(object, classes, undefined, routecode);
	var xml = [];
	loadX3DJS(null, object, file, xml);
	console.error(xml.join("\n"));
	var code = classes.join('\n')
		.replace(/&lt;/g, '<')
		.replace(/&gt;/g, '>')
	console.error(code);
	var route = routecode.join('\n');
	console.error(route);
	eval(code);
	//setInterval(function() {
		eval(route);
	//}, 500);
// });
