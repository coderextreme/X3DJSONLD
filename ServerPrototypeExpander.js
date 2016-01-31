var fs = require("fs");
var https = require('https');
var http = require('http');

function searchForProtoDeclare(object, name) {
	var p;
	var retval;
	var found;
	if (typeof object === "object") {
		for (p in object) {
			if (p === 'ProtoDeclare') {
				console.log("looked at", object[p]["@name"])
				if (object[p]["@name"] === name) {
					found = object;
				}
				// find the first one if none match
				if (typeof found === 'undefined') {
					found = object;
				}
			}
			retval = searchForProtoDeclare(object[p], name);
			if (typeof found === 'undefined') {
				if (typeof retval !== 'undefined') {
					found = retval;
				}
			}
		}
	}
	if (typeof found !== 'undefined') {
		console.log("defaulted to", found["ProtoDeclare"]["@name"])
	}
	return found;
}

function loadedProto(data, object, name, protoname, appinfo, description, filename) {
	if (typeof data !== 'undefined') {
		console.log("searching for", name)
		try {
			var newobj = searchForProtoDeclare(JSON.parse(data), protoname);
			for (var p in newobj) {
				object[p] = newobj[p];
			}
			console.log("found", newobj[p]["@name"])
			object[p]["@name"] = name;
			object[p]["@appinfo"] = appinfo;
			object[p]["@description"] = description;
		} catch (e) {
			console.log("Failed to parse JSON in ", filename);
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
	// console.log("Found extern Proto", name);
	if (typeof url !== 'undefined') {
		for (var u in url) {
			// console.log("Loading File", url[u]);
			var nameIndex = url[u].indexOf("#");
			var protoname = name;
			if (nameIndex >= 0) {
				protoname = url[u].substring(nameIndex+1);
			}
			var ext = url[u].lastIndexOf(".");
			var file = url[u].substr(0, ext)+".json";
			var filename = resolve(dir, file);
			// console.log("Reading", filename, " for proto");
			if (filename.indexOf("https://") === 0) {
				https.get(filename, function(res) {
				   var response = '';
				   res.on('data', function(data) {
					  response += data;
				   });
				   res.on('end', function() {
					  // console.log("Got back from https", response.toString());
					  loadedProto(response, object, name, protoname, appinfo, description, filename);
				   });
				});
			} else if (filename.indexOf("http://") === 0) {
				http.get(filename, function(res) {
				   var response = '';
				   res.on('data', function(data) {
					  response += data;
				   });
				   res.on('end', function() {
					  // console.log("Got back from http", response.toString());
					  loadedProto(response, object, name, protoname, appinfo, description, filename);
				   });
				});
			} else if (url[u].indexOf("urn:") === 0) {
				console.log("Don't know how to load URN", filename);
			} else {
				try {
					response = fs.readFileSync(filename);
					// console.log("Got back from file", response);
					loadedProto(response, object, name, protoname, appinfo, description, filename);
				} catch (e) {
					console.log("couldn't load file", filename, "from filesystem");
				}
			}
		}
	}
	// console.log(object);
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
