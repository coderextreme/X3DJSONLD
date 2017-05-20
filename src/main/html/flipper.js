var fs = require("fs");
var PE = require("../node/PrototypeExpander.js");
var prototypeExpander = PE.prototypeExpander;
var FL = require("../node/Flattener.js");
var flattener = FL.flattener;
var X3DJSONLD = require('../node/X3DJSONLD.js');
var convertJSON = require('../node/convertJSON.js');
var loadX3DJS = convertJSON.loadX3DJS;
var loadSchema = convertJSON.loadSchema;
var doValidate = convertJSON.doValidate;
var replaceX3DJSON = convertJSON.replaceX3DJSON;
var DOMSerializer = require('../node/DOMSerializer.js');
var serializer = new DOMSerializer();


var xmldom = require('xmldom');
var DOMImplementation = new xmldom.DOMImplementation();

function loadSubscene(parent, url) {
	var url = fs.readFileSync(url);
	var json = JSON.parse(url.toString());
	json = prototypeExpander(url, json, "");
	json = flattener(json);
	X3DJSONLD.ConvertToX3DOM(json["X3D"]["Scene"], "Scene", parent, url);
	var str = serializer.serializeToString(json, parent);
	console.log(str);
}

function loadX3DJSON(parent, url, next) {
	var url = fs.readFileSync(url);
	var json = JSON.parse(url.toString());
	replaceX3DJSON(parent, json, url, [], "", function(child) {
		next(child);
	});
}

var docType = DOMImplementation.createDocumentType("X3D", 'ISO//Web3D//DTD X3D 3.3//EN" "http://www.web3d.org/specifications/x3d-3.3.dtd', null);

var document = DOMImplementation.createDocument(null, "X3D", docType);

var element = document.getElementsByTagNameNS(null, "X3D")[0];
element.setAttribute("xmlns:xsd", 'http://www.w3.org/2001/XMLSchema-instance');

loadX3DJSON(element, '../data/sphere.json', function(child) {
	if (child == null) {
		console.error("Failed to load");
	} else {
		loadSubscene(child.getElementsByTagName('Scene')[0],'../data/abox.json');
	}
});
