function schemaProcessArray(object) {
	for (var p in object) {
		schemaProcess(object[p]);
	}
}

var schemaItems = {
"$ref" : 1,
"$schema" : 1,
"additionalItems" : 1,
"additionalProperties" : 1,
"default" : 1,
"definitions" : 1,
"description" : 1,
"enum" : 1,
"exclusiveMaximum" : 1,
"exclusiveMinimum" : 1,
"format" : 1,
"items" : 1,
"maximum" : 1,
"maxItems" : 1,
"minimum" : 1,
"minItems" : 1,
"oneOf" : 1,
"properties" : 1,
"required" : 1,
"title" : 1,
"type" : 1,
"uniqueItems" : 1
}

function schemaProcessObject(object) {
	for (var p in object) {
		if (!object[p]["$ref"]) {
			if (object[p].oneOf) {
				console.log(p, "oneOf", object[p].oneOf[0].type);
			} else if (!schemaItems[p]) {
				console.log(p, object[p].type);
			}
		}
		schemaProcess(object[p]);
	}
}

function schemaProcess(object) {
	if (typeof object === "object") {
		if (Array.isArray(object)) {
			schemaProcessArray(object);
		} else {
			schemaProcessObject(object);
		}
	}
}

var fs = require('fs');
var file = "x3d-4.0-JSONSchema.json";
var object = JSON.parse(fs.readFileSync(file).toString());
schemaProcess(object);
