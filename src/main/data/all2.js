let fs = require("fs");
let file = "JinLOA4Canonical.json";
let data = fs.readFileSync(file).toString();
let json = JSON.parse(data);

let scale = json.X3D.Scene["-children"][3]["HAnimHumanoid"]["@scale"];

function transform(json, indent) {
	// console.log(" ".repeat(indent), "parent", parentTranslation);
	for (let j in json) {
		if (j === "@translation") {
			json[j][0] = json[j][0] / scale[0];
			json[j][1] = json[j][1] / scale[1];
			json[j][2] = json[j][2] / scale[2];
		} else if (j === "@center") {
			json[j][0] = json[j][0] / scale[0];
			json[j][1] = json[j][1] / scale[1];
			json[j][2] = json[j][2] / scale[2];
		} else if (j === "TextureCoordinate") {
		} else if (j === "@point") {
			for (let i = 0; i < json[j].len; i+=3) {
				json[j][i+0] = (json[j][i+0]) / scale[0];
				json[j][i+1] = (json[j][i+1]) / scale[1];
				json[j][i+2] = (json[j][i+2]) / scale[2];
			}
		} else if (typeof json[j] === 'object') {
			transform(json[j], indent+1);
		}
	}
}

transform(json, 0);

console.log(scale);
scale[0] = scale[0] / scale [0];
scale[1] = scale[1] / scale [1];
scale[2] = scale[2] / scale [2];
console.log(scale);

let out = JSON.stringify(json, null, 2);
let outfile = "JinLOA4Canonical101.json";
fs.writeFile(outfile, out, function(err) {
if(err) {
	return console.error(err);
}
});

json = JSON.parse(data);
out = JSON.stringify(json, null, 2);
outfile = "JinLOA4Canonical100.json";
fs.writeFile(outfile, out, function(err) {
if(err) {
	return console.error(err);
}
});
