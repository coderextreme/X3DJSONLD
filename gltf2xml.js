var fs = require("fs");

process.argv.shift();
process.argv.shift();

for (arg in process.argv) {
	argv = process.argv[arg];
	var string = fs.readFileSync(argv).toString();
	var json = JSON.parse(string);
	writeAsXml(0, "gltf", json, "gltf");
}

function writeAsXml(indent, j, json, index) {
	var k = j;
	if (j.endsWith("s") && !j.endsWith("ss")) {
		k = j.substr(0, j.length - 1);
	}
	if (j.endsWith("meshe")) {
		k = j.substr(0, j.length - 1);
	}
	if (Array.isArray(json)) {
		process.stdout.write("\t".repeat(indent)+"<"+j+">", "utf8");
		if (typeof json[0] === 'object') {
			process.stdout.write("\n", "utf8");
		}
		for (js in json) {
			writeAsXml(indent+1, k, json[js], js);
		}
		if (typeof json[0] === 'object') {
			process.stdout.write("\t".repeat(indent), "utf8");
		}
		process.stdout.write("</"+j+">\n", "utf8");
	} else if (typeof json === 'object') {
		process.stdout.write("\t".repeat(indent)+"<"+ k, "utf8");
		for (js in json) {
			if (typeof json[js] !== 'object') {
				process.stdout.write(' '+js+'="'+json[js]+'"', "utf8");
			}
		}
		process.stdout.write(">");
		var newline = false;
		for (js in json) {
			if (typeof json[js] === 'object') {
				if (!newline) {
					process.stdout.write("\n");
					newline = true;
				}
				writeAsXml(indent+1, js, json[js], js);
			}
		}
		if (newline) {
			process.stdout.write("\t".repeat(indent), "utf8");
		}
		process.stdout.write("</"+ k+ ">\n", "utf8");
	} else {
		if (!isNaN(index) && index > 0) {
			process.stdout.write(",", "utf8");
		}
		process.stdout.write(""+json, "utf8");
	}
}
