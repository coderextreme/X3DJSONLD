// X3D JSON Prototype and Script preprocessor

var loadX3DJS = require('./X3DJSONLD').loadX3DJS;
var Browser = require('./X3DJSONLD').Browser;
var prototypeExpander = require('./PrototypeExpander');
var script = require('./Script');
processScripts = script.processScripts;

var content = '';
// read content into buffer
process.stdin.resume();
process.stdin.on('data', function(buf) { content += buf.toString(); });

process.stdin.on('end', function() {
	var object = JSON.parse(content);
	prototypeExpander(object, "");
	console.log(JSON.stringify(object, null, 2));

	var classes = [];
	var routecode = [];
	processScripts(object, classes, undefined, routecode);
	var code = classes.join('\n')
		.replace(/&lt;/g, '<')
		.replace(/&gt;/g, '>')
	console.error(code);
	console.error(routecode.join('\n'));
	eval(code);
	eval(routecode.join('\n'));
});
