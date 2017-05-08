var fs = require('fs');

var schema = fs.readFileSync("x3d-5.0-JSONSchema.json");
var root = JSON.parse(schema.toString());

function generateObject(schemajson, n) {
	if (typeof schemajson === 'undefined') {
		console.error("undefined");
		return;
	}
	if (schemajson === null) {
		console.error("null");
		return;
	}
	if (Object.keys(schemajson).length <= 0) {
		console.error("no keys");
		return;
	}
	var obj;
	var type = schemajson.type;
	if (n > Math.floor(Math.random() * 15) + 10) {
		// this is the eunuchized version
		switch (type) {
			case "object":
				obj = {};
				break;
			case "array":
				obj = [];

				break;
			case "string":
				if (typeof schemajson.enum !== 'undefined') {
					obj = schemajson.enum[Math.floor(Math.random()*schemajson.enum.length)];
				} else if (schemajson.format === 'uri') {
					obj = "http://coderextreme.net/X3DJSONLD";
				} else {
					obj = "JWC was HERE";
				}
				break;
			case "integer":
				var minimum = schemajson.minimum;
				var maximum = schemajson.maximum;
				if (typeof minimum !== 'undefined' &&
				    typeof maximum !== 'undefined') {
					var range = maximum - minimum;
					obj = Math.floor(Math.random() * range + minimum);
				} else if (typeof minimum !== 'undefined') {
					obj = minimum;
				} else if (typeof maximum !== 'undefined') {
					obj = maximum;
				} else if (typeof schemajson.default!== 'undefined') {
					obj = schemajson.default;
				} else {
					obj = 0;
				}
				break;
			case "number":
				var minimum = schemajson.minimum;
				var maximum = schemajson.maximum;
				if (typeof minimum !== 'undefined' &&
				    typeof maximum !== 'undefined') {
					var range = maximum - minimum;
					obj = Math.floor(Math.random() * range + minimum);
				} else if (typeof minimum !== 'undefined') {
					obj = minimum;
				} else if (typeof maximum !== 'undefined') {
					obj = maximum;
				} else if (typeof schemajson.default!== 'undefined') {
					obj = schemajson.default;
				} else {
					obj = 0;
				}
				break;
			case "boolean":
				obj = Math.random() < 0.5 ? false : true;
				break;
			default:
				obj = [];
				break;
		}
		return obj;
	}

	var ref = schemajson["$ref"];
	if (typeof ref !== 'undefined') {
		var definition = ref.replace(/.*\//, "");
		console.log("def input", definition, root.definitions[definition]);
		var obj = generateObject(root.definitions[definition], n+1);
		console.log("def results", obj);
		return obj;
	}

	var oneOf = schemajson.oneOf;
	if (typeof oneOf !== 'undefined') {
		var index = Math.floor(oneOf.length * Math.random());
		return generateObject(oneOf[index], n+1);
	}

	switch (type) {
		case "object":
			obj = {};
			break;
		case "array":
			obj = [];
			var items = schemajson.items;
			var minItems = schemajson.minItems;
			if (typeof minItems === 'undefined') {
				minItems = 0;
			}
			var maxItems = schemajson.minItems;
			if (typeof maxItems === 'undefined') {
				maxItems = minItems;
			}
			for (var i = 0; i < maxItems; i++) {
				var item;
				if (typeof items[i] !== 'undefined') {
					console.log("items["+i+"]", items[i]);
					item = generateObject(items[i], n+1);
					console.log("returned", item);
				} else {
					console.log("items", items);
					item = generateObject(items, n+1);
					console.log("returned", item);
				}
				if (item != null) {
					obj.push(item);
				}
			}

			break;
		case "string":
			if (typeof schemajson.enum !== 'undefined') {
				obj = schemajson.enum[Math.floor(Math.random()*schemajson.enum.length)];
			} else if (schemajson.format === 'uri') {
				obj = "http://coderextreme.net/X3DJSONLD";
			} else {
				obj = "JWC WAS HERE";
			}
			break;
		case "integer":
			var minimum = schemajson.minimum;
			var maximum = schemajson.maximum;
			if (typeof minimum !== 'undefined' &&
			    typeof maximum !== 'undefined') {
				var range = maximum - minimum;
				obj = Math.floor(Math.random() * range + minimum);
			} else if (typeof minimum !== 'undefined') {
				obj = minimum;
			} else if (typeof maximum !== 'undefined') {
				obj = maximum;
			} else if (typeof schemajson.default!== 'undefined') {
				obj = schemajson.default;
			} else {
				obj = 0;
			}
			break;
		case "number":
			var minimum = schemajson.minimum;
			var maximum = schemajson.maximum;
			if (typeof minimum !== 'undefined' &&
			    typeof maximum !== 'undefined') {
				var range = maximum - minimum;
				obj = Math.floor(Math.random() * range + minimum);
			} else if (typeof minimum !== 'undefined') {
				obj = minimum;
			} else if (typeof maximum !== 'undefined') {
				obj = maximum;
			} else if (typeof schemajson.default!== 'undefined') {
				obj = schemajson.default;
			} else {
				obj = 0;
			}
			break;
		case "boolean":
			obj = Math.random() < 0.5 ? false : true;
			break;
		default:
			obj = [];
			for (var index in schemajson) {
				obj[index] = generateObject(schemajson[index], n+1)
			}
			break;
	}
	for (var prop in schemajson.properties) {
		
		obj[prop] = generateObject(schemajson.properties[prop], n+1);
	}
	return obj;
}

var obj = generateObject(root, 0);
obj["X3D"]["@version"] = "3.3";
console.log(JSON.stringify(obj));
