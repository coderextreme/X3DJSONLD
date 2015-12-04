var loadX3DJS = require('./X3DJSONLD');
var content = '';

// read content into buffer
process.stdin.resume();
process.stdin.on('data', function(buf) { content += buf.toString(); });

process.stdin.on('end', function() {
	var json = JSON.parse(content);
	var xml = [];
	loadX3DJS(null, json, 'pp3s.json', xml);
	console.log(xml.join("\n"));
});
