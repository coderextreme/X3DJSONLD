var fs = require("fs");
var https = require('https');
var http = require('http');

var def = null;

function searchForProtoDeclare(object, name) {
	var p;
	var found;
	if (typeof object === "object") {
		for (p in object) {
			if (p === 'ProtoDeclare') {
				// console.error("looked at", object[p]["@name"]);
				if (object[p]["@name"] === name) {
					found = object;
				}
				// find the first one if none match
				if (typeof found === 'undefined' && def === null) {
					def = object;
				}
			}
			if (typeof found === 'undefined') {
				found = searchForProtoDeclare(object[p], name);
			}
		}
	}
	if (typeof found !== 'undefined') {
		// console.error("defaulted to", found["ProtoDeclare"]["@name"]);
	}
	return found;
}

function loadedProto(data, object, name, protoname, appinfo, description, filename) {
	if (typeof data !== 'undefined') {
		// console.error("searching for", name);
		try {
			def = null;
			var newobj = searchForProtoDeclare(JSON.parse(data), protoname);
			if (typeof newobj === 'undefined') {
				newobj = def;
			}
			for (var p in newobj) {
				object[p] = newobj[p];
			}
			// console.error("found", newobj[p]["@name"]);
			object[p]["@name"] = name;
			object[p]["@appinfo"] = appinfo;
			object[p]["@description"] = description;
		} catch (e) {
			console.error("Failed to parse JSON in ", filename);
		}
	}
}

function resolve(dir, file) {
	if (file.indexOf("://") > 0) {
		return file;
	}
	dir = dir.substr(0, dir.lastIndexOf("/"));
	while (file.indexOf("../") === 0) {
		file = file.substr(3);
		dir = dir.substr(0, dir.lastIndexOf("/"));
	}
	var filename = dir+"/"+file;
	if (filename.indexOf("/") === 0) {
		filename = "examples"+filename;
	}
	return filename;
}

function loadProto(dir, object, url, name, appinfo, description) {
	// console.error("Found extern Proto", name);
	if (typeof url !== 'undefined') {
		for (var u in url) {
			// console.error("Loading File", url[u]);
			var nameIndex = url[u].indexOf("#");
			var protoname = name;
			if (nameIndex >= 0) {
				protoname = url[u].substring(nameIndex+1);
			}
			var ext = url[u].lastIndexOf(".");
			var file = url[u].substr(0, ext)+".json";
			var filename = resolve(dir, file);
			// console.error("Reading", filename, " for proto");
			if (filename.indexOf("https://") === 0) {
				https.get(filename, function(res) {
				   var response = '';
				   res.on('error', function(err) {
					console.error(err);
				   });
				   res.on('data', function(data) {
					  response += data;
				   });
				   res.on('end', function() {
					  // console.error("Got back from https", response.toString());
					  loadedProto(response, object, name, protoname, appinfo, description, filename);
				   });
				});
			} else if (filename.indexOf("http://") === 0) {
				http.get(filename, function(res) {
				   var response = '';
				   res.on('error', function(err) {
					console.error(err);
				   });
				   res.on('data', function(data) {
					  response += data;
				   });
				   res.on('end', function() {
					  // console.error("Got back from http", response.toString());
					  loadedProto(response, object, name, protoname, appinfo, description, filename);
				   });
				});
			} else if (url[u].indexOf("urn:") === 0) {
				console.error("Don't know how to load URN", filename);
			} else {
				try {
					response = fs.readFileSync(filename);
					// console.error("Got back from file", response);
					loadedProto(response, object, name, protoname, appinfo, description, filename);
				} catch (e) {
					console.error("couldn't load file", filename, "from filesystem");
				}
			}
		}
	}
	// console.error(object);
}

function externPrototypeExpander(dir, object) {
	var p;
	if (typeof object === "object") {
		for (p in object) {
			if (p === 'ExternProtoDeclare') {
				var url = object[p]["@url"];
				var name = object[p]["@name"];
				var appinfo = object[p]["@appinfo"];
				var description = object[p]["@description"];
				loadProto(dir, object, url, name, appinfo, description);
				delete object[p];
			}
			externPrototypeExpander(dir, object[p]);
		}
	}
}

module.exports = externPrototypeExpander;
