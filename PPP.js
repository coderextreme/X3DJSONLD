// X3D JSON Prototype and Script preprocessor

var prototypeExpander = require('./PrototypeExpander');
var script = require('./Script');
processScripts = script.processScripts;
runRoutes = script.runRoutes;

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
	routecode.push("setInterval(function() {");
	processScripts(object, classes, undefined, routecode);
	routecode.push("}, 500);");
	classes.push("};");
	var code = classes.join('\n')
		.replace(/&lt;/g, '<')
		.replace(/&gt;/g, '>')
	console.error(code);
	console.error(routecode.join('\n'));
	eval(code);
	// eval(routecode.join('\n'));
});
