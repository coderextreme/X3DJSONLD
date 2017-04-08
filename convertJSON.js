var fs = require('fs');
var mkdirp = require('node-mkdirp');
var loadX3DJS = require('./serverX3DJSONLD.js');
let mapToMethod = require('./mapToMethod.js');
let mapToMethod2 = require('./mapToMethod2.js');
let jsonlint = require('jsonlint');
let fieldTypes = require('./fieldTypes.js');

Object.assign(mapToMethod, {
});

for (let map in mapToMethod2) {
	Object.assign(mapToMethod[map], mapToMethod2[map]);
}


var validate = {};

var Ajv = require('ajv');

function setVersion(version) {
	var versions = { "3.0":true,"3.1":true,"3.2":true,"3.3":true,"3.4":true, "4.0":true }
	if (!versions[version]) {
		console.error("Can only validate version 3.0-4.0 presently. Switching version to 3.3.");
		version = "3.3";
	}
	if (!validate[version]) {
		var schema = fs.readFileSync("x3d-"+version+"-JSONSchema.json").toString();
		var ajv = new Ajv({ allErrors:true});
		ajv.addFormat("uri", /^(?:[a-z][a-z0-9+\-.]*:)?(?:\/?\/(?:(?:[a-z0-9\-._~!$&'()*+,;=:]|%[0-9a-f]{2})*@)?(?:\[(?:(?:(?:(?:[0-9a-f]{1,4}:){6}|::(?:[0-9a-f]{1,4}:){5}|(?:[0-9a-f]{1,4})?::(?:[0-9a-f]{1,4}:){4}|(?:(?:[0-9a-f]{1,4}:){0,1}[0-9a-f]{1,4})?::(?:[0-9a-f]{1,4}:){3}|(?:(?:[0-9a-f]{1,4}:){0,2}[0-9a-f]{1,4})?::(?:[0-9a-f]{1,4}:){2}|(?:(?:[0-9a-f]{1,4}:){0,3}[0-9a-f]{1,4})?::[0-9a-f]{1,4}:|(?:(?:[0-9a-f]{1,4}:){0,4}[0-9a-f]{1,4})?::)(?:[0-9a-f]{1,4}:[0-9a-f]{1,4}|(?:(?:25[0-5]|2[0-4]\d|[01]?\d\d?)\.){3}(?:25[0-5]|2[0-4]\d|[01]?\d\d?))|(?:(?:[0-9a-f]{1,4}:){0,5}[0-9a-f]{1,4})?::[0-9a-f]{1,4}|(?:(?:[0-9a-f]{1,4}:){0,6}[0-9a-f]{1,4})?::)|[Vv][0-9a-f]+\.[a-z0-9\-._~!$&'()*+,;=:]+)\]|(?:(?:25[0-5]|2[0-4]\d|[01]?\d\d?)\.){3}(?:25[0-5]|2[0-4]\d|[01]?\d\d?)|(?:[a-z0-9\-._~!$&'()*+,;=]|%[0-9a-f]{2})*)(?::\d*)?(?:\/(?:[a-z0-9\-._~!$&'()*+,;=:@]|%[0-9a-f]{2})*)*|\/(?:(?:[a-z0-9\-._~!$&'()*+,;=:@]|%[0-9a-f]{2})+(?:\/(?:[a-z0-9\-._~!$&'()*+,;=:@]|%[0-9a-f]{2})*)*)?|(?:[a-z0-9\-._~!$&'()*+,;=:@]|%[0-9a-f]{2})+(?:\/(?:[a-z0-9\-._~!$&'()*+,;=:@]|%[0-9a-f]{2})*)*)?(?:\?(?:[a-z0-9\-._~!$&'()*+,;=:@\/?]|%[0-9a-f]{2})*)?(?:\#(?:[a-z0-9\-._~!$&'()*+,;=:@\/?]|%[0-9a-f]{2})*)?$/i);
		validate[version] = ajv.compile(JSON.parse(schema));
	}
	return version;
}

function convertJSON(options) {

	var files = process.argv;
	for (var f in files) {
		var file = files[f];
		if (file.match(/node_modules|package.json|JSONSchema/)) {
			continue;
		}
		try {  
			var basefile = file.substr(0, file.lastIndexOf("."));
			var file = basefile+".json";
			var str = fs.readFileSync(file).toString();
			if (typeof str === 'undefined') {
				throw("Read nothing, or possbile error");
			}
			// var json = JSON.parse(str);
			var json = jsonlint.parse(str);
			var version = json.X3D["@version"];
			version = setVersion(version);  // loads schema.
			var valid = validate[version](json);
			if (!valid) {
				var errs = validate[version].errors;
				var error = ""
				for (var e in errs) {
					error += "\r\n dataPath: " + errs[e].dataPath + "\r\n";
					error += " message: " + errs[e].message + "\r\n";
					error += " params: " + JSON.stringify(errs[e].params) + "\r\n";
				}
				throw(error);
			}
				

			var element = loadX3DJS(json, file);
			// filename conversion goes here.
			basefile = basefile.replace(/^[cC]:\/x3d-code\//g, "")
			basefile = basefile.replace(/-|\.| /g, "_")
			// handle filenames with leading zeros and java keywords
			basefile = basefile.replace(/^(.*[\\\/])([0-9].*|default|switch|for)$/, "$1_$2")
			mkdirp(basefile.substr(0, basefile.lastIndexOf("/")));

			var outfile = basefile+".json";
			fs.writeFileSync(outfile, str);
			for (var ser in options) {
				var serializer = require(ser);
				str = new serializer().serializeToString(json, element, basefile, mapToMethod, fieldTypes)
				if (typeof str !== 'undefined') {
					var outfile = basefile+options[ser];
					fs.writeFileSync(outfile, str);
				} else {
					throw("Wrote nothing, serializer returned nothing");
				}
			}
		} catch (e) {
			console.error("================================================================================");
			console.error(file);
			console.error("Error:", e);
		}
	}
}

module.exports = convertJSON;
