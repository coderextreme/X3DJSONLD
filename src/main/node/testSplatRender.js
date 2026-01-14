import fs from "node:fs";
import path from "node:path";

process.env.NODE_TLS_REJECT_UNAUTHORIZED = '0';

import convertPlyToSplatData from "./convertPlyToSplatData.js";

let filenames = [
	"https://vr.csgrid.org/gsplats/soaring_eagle.ply",
	"https://ifiweb.informatik.tu-freiberg.de/public/silversplat/.%2Fmodels%2Fwerner_amethyst.ply",
	"https://vr.csgrid.org/gsplats/Merrifield_100.ply",
	"https://vr.csgrid.org/gsplats/Merrifield_fireplace.ply",
	"https://vr.csgrid.org/gsplats/mug_space.ply"
];

async function convertFile(filename) {
	console.log(`\n--- Processing: ${filename} ---`);
	let data = await fetch(filename);
	
    if (!data.ok) {
        console.error(`Failed to fetch ${filename}: ${data.statusText}`);
        return;
    }

    // ConvertFile now returns the structured data object
	const splatData = await convertPlyToSplatData(data);
	
    if (!splatData) {
        console.error("Conversion failed.");
        return;
    }
    
    // --- Hypothetical Renderer Integration ---
    console.log(`Successfully parsed ${splatData.points.length} splats.`);
    
    // Log the structure of the first few points for verification
    console.log("\nFirst 3 Parsed Splats (Renderer Input Structure):");
    for (let i = 0; i < Math.min(3, splatData.points.length); i++) {
        console.log(`Splat ${i}:`, JSON.stringify(splatData.points[i], null, 2));
    }
    
    // In a real renderer:
    // 1. Initialize WebGL/WebGPU context.
    // 2. Create a large GPU Buffer for splatData.points (positions, quaternions, scales, SH coeffs).
    // 3. Implement a custom rendering pipeline (e.g., compute shader or specialized rasterization shader) 
    //    to handle the complex spherical harmonic lighting/color calculation.
    
    // --- File Saving (For Debugging Parsed Data) ---
    let newfilename = filename.substring(filename.lastIndexOf("/")+1,filename.lastIndexOf(".")) + "_data.json";
	console.log(`Saving parsed data structure to ${newfilename}`);
	
    // We only save a subset to keep the output readable for testing purposes
    const outputData = {
        header: splatData.header,
        points: splatData.points.slice(0, Math.min(5000, splatData.points.length)) // Limit saved points for testing
    };
    
	fs.writeFileSync(newfilename, JSON.stringify(outputData, null, 2));
}

async function processFiles(filenames) {
	for (let f of filenames)  {
		await convertFile(f);
	}
}

processFiles(filenames).catch(err => console.error("An error occurred during processing:", err));
