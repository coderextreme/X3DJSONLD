// X3D JSON Script preprocessor

import fs from 'fs';
import X3DJSONLD from './X3DJSONLD.js';
import { Scripts, LOG } from './Script.js';
import xmldom from '@xmldom/xmldom';
import convertJSON from './convertJSON.js';
import { loadX3DJS } from './loadValidateServer.js';
import { x3dom } from '../node/fields.js';
import { exec } from 'child_process';

var Browser = X3DJSONLD.Browser;
var scripts = new Scripts();
var DOMImplementation = new xmldom.DOMImplementation();

function ProcessJSON(json, file) {
	var outfile = file.replace(/data/, "ppp");
	try {
		fs.mkdirSync(outfile.substring(0, outfile.lastIndexOf("/")));
	} catch (e) {
		// console.error("Error creating ppp");
	}
	fs.writeFileSync(outfile, JSON.stringify(json, null, 2));

	var NS = "https://www.web3d.org/specifications/x3d";
	loadX3DJS(DOMImplementation, json, file, NS, function(element, xml) {
		var classes = new LOG();
		var routecode = new LOG();
		var loopItems = new LOG();
		console.error("OUTPUTTING", outfile);

		classes.push(fs.readFileSync('../node/fields.js').toString().replace("export var x3dom", "var x3dom"));
		classes.push("import { JSDOM } from 'jsdom';");
    		classes.push("const dom = new JSDOM(`<!DOCTYPE html><html><body><div id=\"myDiv\">Hello JSDOM</div></body></html>`);")
    		classes.push("const document = dom.window.document;")

    // Now you can us
		classes.push("if (typeof X3DJSON === 'undefined') {");
		classes.push("	var X3DJSON = {};");
		classes.push("}");
		classes.push("if (typeof __eventTime === 'undefined') {");
		classes.push("	var __eventTime = 0;");
		classes.push("}");
		scripts.processScripts(json, classes, undefined, routecode, loopItems, "Scene", file); // selector is Scene
		var code = classes.join('\n')
			.replace(/&lt;/g, '<')
			.replace(/&gt;/g, '>')

		var route = routecode.join('\n');
		var loop = loopItems.join('\n');
		var totalcode = code+"\n"+route+"\n"+loop;
		let oldFilePath = outfile+".mjs";
		fs.writeFileSync(oldFilePath, totalcode);
	});
	return json;
}

/*
var content = '';
// read content into buffer
process.stdin.resume();
process.stdin.on('data', function(buf) { content += buf.toString(); });

process.stdin.on('end', function() {
	var json = JSON.parse(content);
	ProcessJSON(json, "foo.x3dj");
});
*/
process.argv.shift();
process.argv.shift();

var files = process.argv;
for (var f in files) {
	var file = files[f];
	try {
		var content = fs.readFileSync(file).toString();
		var json = JSON.parse(content);
		ProcessJSON(json, file);
	} catch (e) {
		console.error(e);
	}
}
