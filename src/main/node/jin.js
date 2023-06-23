let fs = require("fs");
let file = "JinLOA4Canonical.json";
let data = fs.readFileSync(file).toString();
let json = JSON.parse(data);
/*console.log(json.X3D);
console.log(json.X3D.Scene);
console.log(json.X3D.Scene["-children"]);
console.log(json.X3D.Scene["-children"][3]["HAnimHumanoid"]);
console.log(json.X3D.Scene["-children"][3]["HAnimHumanoid"]["@scale"]);
*/
/*
let divisor = [];
divisor[0] = scale[0];
divisor[1] = scale[1];
divisor[2] = scale[2];
*/
let HUMANCHILD = 2;

json.X3D.Scene["-children"][HUMANCHILD] = json.X3D.Scene["-children"][HUMANCHILD+1];

let scale = json.X3D.Scene["-children"][HUMANCHILD]["HAnimHumanoid"]["@scale"];
let center = json.X3D.Scene["-children"][HUMANCHILD]["HAnimHumanoid"]["-skeleton"][0]["HAnimJoint"]["@center"];

delete json.X3D.Scene["-children"][HUMANCHILD+1];

let x = center[0];
let y = center[1];
let z = center[2];


function centering(json) {
	for (let j in json) {
		if (j === "@center") {
			if (json["@name"] === "l_talocrural") {
				l_x = json["@center"][0];
				l_z = json["@center"][2];
				y = json["@center"][1];
			} else if (json["@name"] === "r_talocrural") {
				r_x = json["@center"][0];
				y = json["@center"][1];
				r_z = json["@center"][2];
			}
		} else if (typeof json[j] === 'object') {
			centering(json[j]);
		}
	}
}

function transform(json, indent, parent, max, parentTranslation) {
	let translation = [0,0,0];
	for (let j in json) {
		if (j === "@translation") {
			json[j][0] = json[j][0] - x;
			json[j][1] = json[j][1] - y;
			json[j][2] = json[j][2] - z;
			json[j][0] = json[j][0] / scale[0];
			json[j][1] = json[j][1] / scale[1];
			json[j][2] = json[j][2] / scale[2];
			translation[0] = json[j][0] + parentTranslation[0];
			translation[1] = json[j][1] + parentTranslation[1];
			translation[2] = json[j][2] + parentTranslation[2];
			json[j][0] = parseFloat(json[j][0].toFixed(4));
			json[j][1] = parseFloat(json[j][1].toFixed(4));
			json[j][2] = parseFloat(json[j][2].toFixed(4));
			// delete json[j];
		} else if (j === "@center") {
			json[j][0] = json[j][0] - x;
			json[j][1] = json[j][1] - y;
			json[j][2] = json[j][2] - z;
			json[j][0] = json[j][0] / scale[0];
			json[j][1] = json[j][1] / scale[1];
			json[j][2] = json[j][2] / scale[2];
			json[j][0] = json[j][0] + parentTranslation[0];
			json[j][1] = json[j][1] + parentTranslation[1];
			json[j][2] = json[j][2] + parentTranslation[2];
			json[j][0] = parseFloat(json[j][0].toFixed(4));
			json[j][1] = parseFloat(json[j][1].toFixed(4));
			json[j][2] = parseFloat(json[j][2].toFixed(4));
			// console.log(json["@name"]);
			// console.log(json["@center"][0].toFixed(4), json["@center"][1].toFixed(4), json["@center"][2].toFixed(4));
		} else if (j === "@centerOfRotation") {
			json[j][0] = json[j][0] - x;
			json[j][1] = json[j][1] - y;
			json[j][2] = json[j][2] - z;
			json[j][0] = json[j][0] / scale[0];
			json[j][1] = json[j][1] / scale[1];
			json[j][2] = json[j][2] / scale[2];
			json[j][0] = json[j][0] + parentTranslation[0];
			json[j][1] = json[j][1] + parentTranslation[1];
			json[j][2] = json[j][2] + parentTranslation[2];
			json[j][0] = parseFloat(json[j][0].toFixed(4));
			json[j][1] = parseFloat(json[j][1].toFixed(4));
			json[j][2] = parseFloat(json[j][2].toFixed(4));
		} else if (j === "@position") {
			json[j][0] = json[j][0] - x;
			json[j][1] = json[j][1] - y;
			json[j][2] = json[j][2] - z;
			json[j][0] = json[j][0] / scale[0];
			json[j][1] = json[j][1] / scale[1];
			json[j][2] = json[j][2] / scale[2];
			json[j][0] = json[j][0] + parentTranslation[0];
			json[j][1] = json[j][1] + parentTranslation[1];
			json[j][2] = json[j][2] + parentTranslation[2];
			json[j][0] = parseFloat(json[j][0].toFixed(4));
			json[j][1] = parseFloat(json[j][1].toFixed(4));
			json[j][2] = parseFloat(json[j][2].toFixed(4));
		} else if (j === "IndexedFaceSet") {
			// console.log(json[j]);
			if (json[j]["@texCoordIndex"]) {
				var tci = json[j]["@texCoordIndex"];
				// console.log(tci);
				max = Math.max(...tci);
				// console.log(max);

			}
			transform(json[j], indent+1, json, max, translation);
		} else if (j === "@point") {
			let i = 0;
			for (i = 0; i < json[j].length; i+=3) {
				if (!parent["TextureCoordinate"]) {
					json[j][i+0] = json[j][i+0] - x;
					json[j][i+1] = json[j][i+1] - y;
					json[j][i+2] = json[j][i+2] - z;
					json[j][i+0] = json[j][i+0] / scale[0];
					json[j][i+1] = json[j][i+1] / scale[1];
					json[j][i+2] = json[j][i+2] / scale[2];
					json[j][i+0] = json[j][i+0] + parentTranslation[0];
					json[j][i+1] = json[j][i+1] + parentTranslation[1];
					json[j][i+2] = json[j][i+2] + parentTranslation[2];
					json[j][i+0] = parseFloat(json[j][i+0].toFixed(4));
					json[j][i+1] = parseFloat(json[j][i+1].toFixed(4));
					json[j][i+2] = parseFloat(json[j][i+2].toFixed(4));
				}
			}
			if (parent["TextureCoordinate"]) {
				if (json[j].length/2 > 0 && json[j].length/2 <= max) {
					console.log("point length", json[j].length, ", point length/2", json[j].length/2, "<= Max index", max);
					console.log(parent);
				}
			}
		} else if (typeof json[j] === 'object') {
			transform(json[j], indent+1, json, max, translation);
		}
	}
}

centering(json);

x = (l_x + r_x) / 2;
z = (l_z + r_z) / 2;

console.log(x, y, z);

transform(json, 0, null, Math.INFINITY, [0,0,0]);

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
