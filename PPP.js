// X3D JSON Prototype and Script preprocessor

var X3DJSONLD =require('./X3DJSONLD');
var prototypeExpander = require('./PrototypeExpander');
var Script = require('./Script');
var loadX3DJS = X3DJSONLD.loadX3DJS;
var Browser = X3DJSONLD.Browser;
var processScripts = Script.processScripts;
var LOG = Script.LOG;

var content = '';
// read content into buffer
process.stdin.resume();
process.stdin.on('data', function(buf) { content += buf.toString(); });

process.stdin.on('end', function() {
	var object = JSON.parse(content);
	prototypeExpander(object, "");
	console.log(JSON.stringify(object, null, 2));

	var classes = new LOG();
	var routecode = new LOG();

	processScripts(object, classes, undefined, routecode);
	var code = classes.join('\n')
		.replace(/&lt;/g, '<')
		.replace(/&gt;/g, '>')
	console.error(code);
	console.error(routecode.join('\n'));
	eval(code);
	eval(routecode.join('\n'));
});
