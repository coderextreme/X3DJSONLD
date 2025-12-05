import fs from "node:fs";

process.env.NODE_TLS_REJECT_UNAUTHORIZED = '0';

import convertPlyToJson from "./convertPlyToJson.js";

let filenames = [
	"https://vr.csgrid.org/gsplats/soaring_eagle.ply",
	"https://vr.csgrid.org/gsplats/Merrifield_100.ply",
	"https://vr.csgrid.org/gsplats/Merrifield_fireplace.ply",
	"https://vr.csgrid.org/gsplats/mug_space.ply" ];

async function convertFile(filename) {
	console.log(filename);
	let data = await fetch(filename);
	const reader_stream = data.body;
	const buf = await data.arrayBuffer();
	let jsonObj = await convertPlyToJson(buf);
	let newfilename = filename.substring(filename.lastIndexOf("/")+1,filename.lastIndexOf("."))+".json";
	console.log(newfilename);
	const fd = fs.openSync(newfilename, 'w');
	fs.writeSync(fd, JSON.stringify(jsonObj, null, 0));
}

async function processFiles(filenames) {
	for (let f in filenames)  {
		await convertFile(filenames[f]);
	}
}

processFiles(filenames);
