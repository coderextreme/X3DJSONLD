var fs = require("fs");
var https = require('https');
var http = require('http');

var nameMap = {};

function searchForProtoDeclare(object, name) {
	var p;
	var retval;
	if (typeof object === "object") {
		for (p in object) {
			if (p === 'ProtoDeclare' && object[p]["@name"] === name) {
				// console.log("Found proto declare ",object);
				return object;
			} else {
				retval = searchForProtoDeclare(object[p], name);
				if (typeof retval !== 'undefined') {
					return retval;
				}
			}
		}
	}
	return retval;
}

function loadedProto(data, object, name, appinfo, description) {
	if (typeof data !== 'undefined') {
		var newobj = searchForProtoDeclare(JSON.parse(data), name);
		for (var p in newobj) {
			object[p] = newobj[p];
		}
		object[p]["@appinfo"] = appinfo;
		object[p]["@description"] = description;
		// think about copying over name
		// console.log(object);
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
			var protoname = url[u].substring(nameIndex+1);
			nameMap[name] = protoname;
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
					  loadedProto(response, object, protoname, appinfo, description);
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
					  loadedProto(response, object, protoname, appinfo, description);
				   });
				});
			} else if (url[u].indexOf("urn:") === 0) {
				console.log("Don't know how to load URN", filename);
			} else {
				response = fs.readFileSync(filename);
				// console.log("Got back from file", response);
				loadedProto(response, object, protoname, appinfo, description);
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
			} else if (p === 'ProtoInstance') {
				var oldname = object[p]["@name"];
				var newname = nameMap[oldname];
				if (typeof newname !== 'undefined') {
					object[p]["@name"] = newname;
				}
			} else {
				externPrototypeExpander(dir, object[p]);
			}
		}
	}
}

module.exports = externPrototypeExpander;
