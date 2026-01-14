import fs from "node:fs";

process.env.NODE_TLS_REJECT_UNAUTHORIZED = '0';

import convertPlyToX3d from "./convertPlyToX3d.js";

let filenames = [
	"https://vr.csgrid.org/gsplats/soaring_eagle.ply",
	"https://ifiweb.informatik.tu-freiberg.de/public/silversplat/.%2Fmodels%2Fwerner_amethyst.ply",
	"https://vr.csgrid.org/gsplats/Merrifield_100.ply",
	"https://vr.csgrid.org/gsplats/Merrifield_fireplace.ply",
	"https://vr.csgrid.org/gsplats/mug_space.ply"
];

async function convertFile(filename) {
	console.log(filename);
	let data = await fetch(filename);
	let reader_stream = data.body;
	let x3d = await convertPlyToX3d(data);
	let newfilename = filename.substring(filename.lastIndexOf("/")+1,filename.lastIndexOf("."))+".x3d";
	console.log(newfilename);
	let fd = fs.openSync(newfilename, 'w');
	fs.writeSync(fd, x3d);

	data = await fetch(filename);
	reader_stream = data.body;
	let buf = await data.arrayBuffer();
	newfilename = filename.substring(filename.lastIndexOf("/")+1,filename.lastIndexOf("."))+".ply";
	console.log(newfilename);
	fd = fs.openSync(newfilename, 'w');
	const nodeBuffer = Buffer.from(buf);
	fs.writeSync(fd, nodeBuffer);
}

async function processFiles(filenames) {
	for (let f in filenames)  {
		await convertFile(filenames[f]);
	}
}

processFiles(filenames);
