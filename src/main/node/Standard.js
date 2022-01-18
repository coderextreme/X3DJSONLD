// I am fairly sure this file converts X3D XML to JSON but not X3D JSON (almost)
var fs = require('fs');
var xml2js = require('xml2js');

function handleAttribute(json, key) {
	if (typeof json[key] === 'object') {
		if (key === '$') {
			for (var attr in json[key]) {
				if (isNaN(parseInt(attr))) {
					var value = json[key][attr].split(/[, ]+/);
					var foundString = false;
					for (var v in value) {
						var f = parseFloat(value[v]);
						if (isNaN(value[v])) {
							foundString = true;
						} else {
							value[v] = f;
						}
					}
					if (foundString) {
						json['@'+attr] = json[key][attr];
					} else if (value.length > 1){
						json['@'+attr] = value;
					} else {
						json['@'+attr] = parseFloat(json[key][attr]);
					}
				}
			}
		}
		handleObject(json[key]);
	} else if (isNaN(parseInt(key))) {
		if (key === '_') {
			json['#sourceCode'] = json[key].split(/\n/);
		} else {
			json['@'+key] = json[key];
		}
	}
}

function zap(json) {
	for (var key in json) {
		if (typeof json[key] === 'object') {
			if (key === '$') {
				delete json[key];
			}
			zap(json[key]);
		} else if (isNaN(parseInt(key))) {
			if (key.lastIndexOf("@") != 0) {
				delete json[key];
			}
		}
	}
}

function handleObject(json) {
	var attrcnt = 0;
	for (var key in json) {
		attrcnt++;
	}
	if (attrcnt === 1) {
		handleAttribute(json, key);
	} else {
		for (var key in json) {
			handleAttribute(json, key);
		}
	}
}

function addContainerObject(path, node, key, parentkey, gparentkey) {
	var newparent = path[path.length-3];
	if (typeof newparent['-'+node[key]] === 'undefined') {
		newparent['-'+node[key]] = [];
	}
	var arr = path[path.length-2];
	obj = {};
	obj[gparentkey] = arr[0];
	newparent['-'+node[key]].push(JSON.parse(JSON.stringify(obj)));
}

function handleContainerField(path, node, parentkey, gparentkey) {
	path.push(node);
	for (var key in node) {
		if (typeof node[key] === 'object') {
			handleContainerField(path, node[key], key, parentkey);
		} else if (key === '@containerField') {
			addContainerObject(path, node, key, parentkey, gparentkey);
			delete path[path.length-3][gparentkey];
		}
	}
	path.pop();
}

function addContainerField(node) {
	var containers = {
		"Sphere": "geometry",
		"Text": "geometry",
		"Extrusion": "geometry",
		"FontStyle": "fontStyle",
		"ImageTexture": "texture",
		"Appearance": "appearance",
		"Material": "material"
	};
	for (var key in node) {
		if (typeof node[key] === 'object') {
			addContainerField(node[key]);
		}
		if (typeof containers[key] !== 'undefined' && typeof node[key]["@containerField"] === 'undefined') {
			if (node[key][0] === "") {
				node[key][0] = {};
			}
			node[key][0]["@containerField"] = containers[key];
		}
	}
}

function routes(node, parent) {
	for (var key in node) {
		if (key === "ROUTE") {
			for (var route in node[key]) {
				var r = node[key][route];
				node[key][route] = {};
				node[key][route]["ROUTE"] = r;
				parent.push(node[key][route]);
			}
			delete node[key];
		} else if (typeof node[key] === 'object') {
			routes(node[key], node);
		}
	}
}

function proto(node, parent) {
	for (var key in node) {
		// if (key === "ProtoInstance") {
		if (key === "ProtoInstance" || key === "head" || key === 'ProtoDeclare' || key === 'ProtoInterface' || key === 'PositionInterpolator' || key === 'Script' || key === 'TimeSensor' || key === 'IS' || key === 'Shape') {
			for (var instance in node[key]) {
				if (typeof parent.push === 'function') {
					var i = node[key][instance];
					var pi = {};
					pi[key] = JSON.parse(JSON.stringify(i));
					console.error('pushing', pi);
					parent.push(pi);
					delete i;
				} else {
					node[key] = node[key][0]; // make first element the attribute value
				}
			}
			proto(node[key], node);
			if (typeof parent.push === 'function') {
				delete node[key];
			}
		} else if (typeof node[key] === 'object') {
			proto(node[key], node);
		}
	}
}

function arrayToObj(node, parent) {
	for (var key in node) {
		if (key === "head" || key === 'ProtoDeclare' || key === 'ProtoInterface' || key === 'PositionInterpolator' || key === 'Script' || key === 'TimeSensor' || key === 'IS' || key === 'Shape') {
			node[key] = node[key][0]; // make first element the attribute value
			arrayToObj(node[key], node);
		} else if (typeof node[key] === 'object') {
			arrayToObj(node[key], node);
		}
	}
}

function addChildren(node) {
	for (var key in node) {
		if (key === "Scene" || key === 'ProtoBody' || key === 'Transform') {
			var children = node[key];
			node[key] = {};
			if (typeof node[key]["-children"] === 'undefined') {
				node[key]["-children"] = [];
			}
			for (var ind in children) {
				if (key === 'Scene') {
					// console.error('ind', ind, key);
				}
				for (var childkey in children[ind]) {
					if (childkey.indexOf("@") === 0) {
						// copy simple attributes to main object
						node[key][childkey] = children[ind][childkey];
						children[ind][childkey] = undefined;
					} else if (childkey === 'IS') {
						// copy the IS
						var newchild = {};
						newchild[childkey] = children[ind][childkey];
						node[key]["IS"] = newchild;
					} else {
						// copy the objects
						var newchild = {};
						newchild[childkey] = children[ind][childkey];
						// console.error('pushing', newchild);
						node[key]["-children"].push(newchild);
					}
				}
			}
			addChildren(node[key]);
		} else if (typeof node[key] === 'object') {
			if (key != '-children') {
				addChildren(node[key]);
			}
		}
	}
}


function parseXML(xmlfile) {
	var parser = new xml2js.Parser();
	var data = fs.readFileSync(__dirname + '/'+xmlfile);
	parser.parseString(data, function (err, result) {
		console.error(xmlfile, 'parsing');
		// console.error(JSON.stringify(result, null, 2));

		handleObject(result);
		zap(result);
		addContainerField(result);
		handleContainerField([], result, "X3D", "X3D");
		routes(result);
		proto(result);
		// arrayToObj(result);
		addChildren(result);

		var ext = xmlfile.lastIndexOf(".");
		fs.writeFileSync(__dirname+'/'+xmlfile.substr(0, ext)+'.json2', JSON.stringify(result, null, 2));
		console.error(xmlfile, 'parsed');
	});
}

parseXML('force.x3d');
/*
parseXML('HelloWorldEncryptionResult.xml');
parseXML('HelloWorldSignedCanonical.xml');
parseXML('HelloWorldSignedEncryptionResult.xml');
parseXML('CoordinateAxes.x3d');
parseXML('bubbles.x3d');
parseXML('bubs.x3d');
parseXML('bubs2.x3d');
parseXML('extrusion.x3d');
parseXML('flipper.x3d');
parseXML('flowers2.x3d');
parseXML('flowers4.x3d');
parseXML('fors.x3d');
parseXML('forces.x3d');
parseXML('geo.x3d');
parseXML('geobubbles.x3d');
parseXML('john.x3d');
parseXML('john2.x3d');
parseXML('mirror.x3d');
parseXML('mirror2.x3d');
parseXML('pp3.x3d');
parseXML('pp3s.x3d');
parseXML('qq3.x3d');
parseXML('qq3s.x3d');
parseXML('rubik.x3d');
parseXML('rubikFurnace.x3d');
parseXML('rubikOnFire.x3d');
parseXML('rubikOnFires.x3d');
parseXML('rubiks.x3d');
*/
