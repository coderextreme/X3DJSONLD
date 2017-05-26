var fs = require('fs');

var schema = fs.readFileSync("x3d-3.3-JSONSchema.json");
var root = JSON.parse(schema.toString());

function generateObject(schemajson, n, node, force) {
	// console.error(node);
	var obj = undefined;
	// console.error(schemajson);
	if (n < Math.floor(Math.random() * 15) + 10 || force) {
		var ref = schemajson["$ref"];
		var oneOf = schemajson.oneOf;
		var type = schemajson.type;

		if (typeof ref !== 'undefined') {
			var definition = ref.replace(/.*\//, "");
			var def = root.definitions[definition];
			obj =  generateObject(def, n+1, node+" > ref "+ref, false);
		} else if (typeof oneOf !== 'undefined') {
			var index = Math.floor(oneOf.length * Math.random());
			obj = generateObject(oneOf[index], n+1, node+" > oneof "+index, true);
		} else if (type === "object") {
			obj = {};
			for (var prop in schemajson.properties) {
				obj[prop] = generateObject(schemajson.properties[prop], n+1, node+" > prop "+prop, false);
			}
		} else if (type === "array") {
			obj = [];
			var items = schemajson.items;
			// console.error("items", items);
			var minItems = schemajson.minItems;
			if (typeof minItems === 'undefined') {
				minItems = 0;
			}
			var maxItems = schemajson.maxItems;
			if (typeof maxItems === 'undefined') {
				maxItems = 5;
			}
			for (var i = 0; i < maxItems; i++) {
				var item;
				if (typeof items[i] !== 'undefined') {
					item = generateObject(items[i], n+1, node+" > items[] "+i, true);
				} else {
					item = generateObject(items,    n+1, node+" > items "+i+" ~"+JSON.stringify(items)+"~", true);
				}
				obj.push(item);
			}
		} else if (type === "string") {
			var enumer = schemajson.enum;
			// console.error("enum", enumer);
			if (typeof enumer !== 'undefined') {
				obj = enumer[Math.floor(Math.random()*enumer.length)];
			} else if (schemajson.format === 'uri') {
				obj =  "http://coderextreme.net/X3DJSONLD";
			} else {
				obj =  "JWC WAS HERE";
			}
		} else if (type === "integer") {
			// console.error("integer", schemajson.default);
			var minimum = schemajson.minimum;
			var maximum = schemajson.maximum;
			if (typeof minimum !== 'undefined' &&
			    typeof maximum !== 'undefined') {
				var range = maximum - minimum;
				obj =  Math.floor(Math.random() * range + minimum);
			} else if (typeof minimum !== 'undefined') {
				obj =  minimum;
			} else if (typeof maximum !== 'undefined') {
				obj =  maximum;
			} else if (typeof schemajson.default!== 'undefined') {
				obj =  schemajson.default;
			} else {
				obj =  0;
			}
		} else if (type === "number") {
			// console.error("number", schemajson.default);
			var minimum = schemajson.minimum;
			var maximum = schemajson.maximum;
			if (typeof minimum !== 'undefined' &&
			    typeof maximum !== 'undefined') {
				var range = maximum - minimum;
				obj =  Math.floor(Math.random() * range + minimum);
			} else if (typeof minimum !== 'undefined') {
				obj =  minimum;
			} else if (typeof maximum !== 'undefined') {
				obj =  maximum;
			} else if (typeof schemajson.default !== 'undefined') {
				obj =  schemajson.default;
			} else {
				obj = 0;
			}
		} else if (type === "boolean") {
			// console.error("boolean");
			obj =  Math.random() < 0.5 ? false : true;
		} else {
			obj = [];
			// console.error(type);
			for (var index in schemajson) {
				// console.error(schemajson[index]);
				obj[index] = generateObject(schemajson[index], n+1, node+" > default "+i, true);
			}
		}
	}
	// console.error(obj);
	return obj;
}

var obj = generateObject(root, 0, "$schema", true);
console.obj(JSON.stringify(obj));
