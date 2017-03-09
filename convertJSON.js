var fs = require('fs');
var mkdirp = require('node-mkdirp');
var loadX3DJS = require('./serverX3DJSONLD');

var validate = {};

var Ajv = require('ajv');

function setVersion(version) {
	var versions = { "3.0":true,"3.1":true,"3.2":true,"3.3":true,"3.4":true }
	if (!versions[version]) {
		console.error("Can only validate version 3.0-3.4 presently. Switching version to 3.3.");
		version = "3.3";
	}
	if (!validate[version]) {
		var schema = fs.readFileSync("x3d-"+version+"-JSONSchema.json").toString();
		var ajv = new Ajv({ allErrors:true});
		ajv.addFormat("uri", /^(?:[a-z][a-z0-9+\-.]*:)?(?:\/?\/(?:(?:[a-z0-9\-._~!$&'()*+,;=:]|%[0-9a-f]{2})*@)?(?:\[(?:(?:(?:(?:[0-9a-f]{1,4}:){6}|::(?:[0-9a-f]{1,4}:){5}|(?:[0-9a-f]{1,4})?::(?:[0-9a-f]{1,4}:){4}|(?:(?:[0-9a-f]{1,4}:){0,1}[0-9a-f]{1,4})?::(?:[0-9a-f]{1,4}:){3}|(?:(?:[0-9a-f]{1,4}:){0,2}[0-9a-f]{1,4})?::(?:[0-9a-f]{1,4}:){2}|(?:(?:[0-9a-f]{1,4}:){0,3}[0-9a-f]{1,4})?::[0-9a-f]{1,4}:|(?:(?:[0-9a-f]{1,4}:){0,4}[0-9a-f]{1,4})?::)(?:[0-9a-f]{1,4}:[0-9a-f]{1,4}|(?:(?:25[0-5]|2[0-4]\d|[01]?\d\d?)\.){3}(?:25[0-5]|2[0-4]\d|[01]?\d\d?))|(?:(?:[0-9a-f]{1,4}:){0,5}[0-9a-f]{1,4})?::[0-9a-f]{1,4}|(?:(?:[0-9a-f]{1,4}:){0,6}[0-9a-f]{1,4})?::)|[Vv][0-9a-f]+\.[a-z0-9\-._~!$&'()*+,;=:]+)\]|(?:(?:25[0-5]|2[0-4]\d|[01]?\d\d?)\.){3}(?:25[0-5]|2[0-4]\d|[01]?\d\d?)|(?:[a-z0-9\-._~!$&'()*+,;=]|%[0-9a-f]{2})*)(?::\d*)?(?:\/(?:[a-z0-9\-._~!$&'()*+,;=:@]|%[0-9a-f]{2})*)*|\/(?:(?:[a-z0-9\-._~!$&'()*+,;=:@]|%[0-9a-f]{2})+(?:\/(?:[a-z0-9\-._~!$&'()*+,;=:@]|%[0-9a-f]{2})*)*)?|(?:[a-z0-9\-._~!$&'()*+,;=:@]|%[0-9a-f]{2})+(?:\/(?:[a-z0-9\-._~!$&'()*+,;=:@]|%[0-9a-f]{2})*)*)?(?:\?(?:[a-z0-9\-._~!$&'()*+,;=:@\/?]|%[0-9a-f]{2})*)?(?:\#(?:[a-z0-9\-._~!$&'()*+,;=:@\/?]|%[0-9a-f]{2})*)?$/i);
		validate[version] = ajv.compile(JSON.parse(schema));
	}
}

function convertJSON(options) {

	var files = process.argv;
	for (var f in files) {
		var file = files[f];
		if (file.match(/node_modules|package.json|JSONSchema/)) {
			continue;
		}
		console.error(file);
		try {  
			var basefile = file.substr(0, file.lastIndexOf("."));
			var file = basefile+".json";
			var str = fs.readFileSync(file).toString();
			var json = JSON.parse(str);
			var version = json.X3D["@version"];
			setVersion(version);  // loads schema.  TODO.  Only load when version changes
			var valid = validate[version](json);
			if (!valid) {
				throw JSON.stringify(validate[version].errors);
			}
				

			var element = loadX3DJS(json, file);
			// filename conversion goes here.
			basefile = basefile.replace(/-|\.| /g, "_")
			mkdirp(basefile.substr(0, basefile.lastIndexOf("/")));
			basefile = basefile.replace(/^(.*\/)([0-9].*|default)$/, "$1_$2")
			if (typeof str !== 'undefined') {
				var outfile = basefile+".json";
				fs.writeFileSync(outfile, str);
			}
			for (var ser in options) {
				var serializer = require(ser);
				str = serializer.serializeToString(json, element, basefile)
				if (typeof str !== 'undefined') {
					var outfile = basefile+options[ser];
					fs.writeFileSync(outfile, str);
				}
			}
		} catch (e) {
			console.error("Error reading", file, e);
		}
	}
}

module.exports = convertJSON;
