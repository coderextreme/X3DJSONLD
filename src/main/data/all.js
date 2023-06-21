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
let center = json.X3D.Scene["-children"][3]["HAnimHumanoid"]["-skeleton"][0]["HAnimJoint"]["@center"];
let x = center[0];
let y = center[1];
let z = center[2];

let scale = json.X3D.Scene["-children"][3]["HAnimHumanoid"]["@scale"];
console.log(scale);

function centering(json) {
	for (let j in json) {
		if (j === "@center") {
			if (json["@name"] === "l_talocrural") {
				l_x = json["@center"][0];
				l_z = json["@center"][2];
			} else if (json["@name"] === "r_talocrural") {
				r_x = json["@center"][0];
				r_z = json["@center"][2];
			}
			if (json["@center"][1] < minycenter) {
				minycenter = json["@center"][1];
			}
			if (json["@center"][1] > maxycenter) {
				maxycenter = json["@center"][1];
			}
		} else if (typeof json[j] === 'object') {
			centering(json[j]);
		}
	}
}

function transform(json, parentTranslation, indent) {
	// console.log(" ".repeat(indent), "parent", parentTranslation);
	let translation = [0,0,0];
	for (let j in json) {
		if (j === "@translation") {
			translation[0] = json[j][0];
			translation[1] = json[j][1];
			translation[2] = json[j][2];
			translation[0] = (translation[0]);
			translation[1] = (translation[1]);
			translation[2] = (translation[2]);
			// console.log(" ".repeat(indent), "@translation", translation);
			/*
			translation[0] = translation[0] - x;
			translation[1] = translation[1] - minycenter;
			translation[1] = translation[1] * height / yscale;
			translation[2] = translation[2] - z;
			*/
			json[j][0] = translation[0] / scale[0];
			json[j][1] = translation[1] / scale[1];
			json[j][2] = translation[2] / scale[2];
			delete json[j];
		} else if (j === "@center") {
			json[j][0] = (json[j][0]) / scale[0];
			json[j][1] = (json[j][1]) / scale[1];
			json[j][2] = (json[j][2]) / scale[2];
			/*
			json[j][0] = json[j][0] - x;
			json[j][1] = json[j][1] - minycenter;
			json[j][1] = json[j][1] * height / yscale;
			json[j][2] = json[j][2] - z;
			*/
			// TODO uncomment
			// console.log(json["@name"]);
			// console.log(json["@center"][0].toFixed(4), json["@center"][1].toFixed(4), json["@center"][2].toFixed(4));
		} else if (j === "TextureCoordinate") {
		} else if (j === "@point") {
			for (let i = 0; i < json[j].len; i+=3) {
				json[j][i+0] = (json[j][i+0]) / scale[0];
				json[j][i+1] = (json[j][i+1]) / scale[1];
				json[j][i+2] = (json[j][i+2]) / scale[2];
				/*
				json[j][i+0] = json[j][i+0] - x;
				json[j][i+1] = json[j][i+1] - minycenter;
				json[j][i+1] = json[j][i+1] * height / yscale;
				json[j][i+2] = json[j][i+2] - z;
				*/
			}
		} else if (typeof json[j] === 'object') {
			translation[0] = (translation[0]);
			translation[1] = (translation[1]);
			translation[2] = (translation[2]);
			// console.log(" ".repeat(indent), "object", translation);
			transform(json[j], translation, indent+1);
		}
	}
}

let height = 1.87;

let maxycenter = -100;
let minycenter = 100;

/*
centering(json);
x = (l_x + r_x) / 2;
z = (l_z + r_z) / 2;
let yscale = maxycenter - minycenter;
*/

transform(json, [0,0,0], 0);

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
