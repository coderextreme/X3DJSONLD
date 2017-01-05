var fs = require('fs');
var mkdirp = require('node-mkdirp');
var loadX3DJS = require('./serverX3DJSONLD');

process.argv.shift();
process.argv.shift();

function convertJSON(req, ext, basefile) {
	var serializer = require(req);

	var files = process.argv;
	for (var f in files) {
		var file = files[f];
		if (file.match(/node_modules|package.json|JSONSchema/)) {
			continue;
		}
		console.log(file);
		try {  
			var basefile = file.substr(0, file.lastIndexOf("."));
			var file = basefile+".json";
			var json = JSON.parse(fs.readFileSync(file).toString());
			var element = loadX3DJS(json, file);
			// filename conversion goes here.
			basefile = basefile.replace(/-|\.| /g, "_")
			mkdirp(basefile.substr(0, basefile.lastIndexOf("/")));
			basefile = basefile.replace(/^(.*\/)([0-9].*|default)$/, "$1_$2")
			var str = serializer.serializeToString(json, element, basefile)
			if (typeof str !== 'undefined') {
				var outfile = basefile+ext;
				fs.writeFileSync(outfile, str);
			}
		} catch (e) {
			console.log("Error reading", file, e);
		}
	}
}


module.exports = convertJSON;
