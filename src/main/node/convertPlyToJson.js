function colorComponentParseFloat(cc) {
	if (isNaN(cc)) {
		return 255.0;
	}
	return parseFloat(cc);
}

function colorComponentParseInt(cc) {
	if (isNaN(cc)) {
		return 1;
	}
	return parseInt(cc);
}

export default function convertPlyToJson(file) {
	var elements = [];
	var e;
	var o;
	var dispatchTable = {
		values: function (line, comments) {
			if (typeof line === 'undefined') {
				return;
			}
			while (typeof elements[e].type === 'undefined' || o >= elements[e].number) {
				e++;
				o = 0;
			}
			// read through properties
			elements[e][o] = {};
			var properties = elements[e].property;
			for (var p in  properties) {
				if (properties[p].type[0] === 'list') {
					for (var pr = 1; pr < line.length; pr++) {
						elements[e][o][pr-1] = line[pr];
					}
				} else {
					var pr = p;
					elements[e][o][pr] = line[pr];
				}
			}
			elements[e][o]["comments"] = comments;
			o++;
		},
		ply : function (line, comments) {
			elements.push({
				ply : "ply",
				comments : comments
			});
		},
		format : function(line, comments) {
			elements.push({
				encoding : "json",
				charset :  line[1],
				version : line[2],
				comments : comments
			});
		},
		comment : function(line, comments) {
			elements.push({
				comment : line.slice(1).join(" "),
				comments : comments
			});
		},
		element : function(line, comments) {
			elements.push({
				type : line[1],
				number : line[2],
				property : [],
				comments : comments
			});
		},
		property : function(line, comments) {
			elements[elements.length-1].property.push({
				name : line[line.length-1],
				type : line.splice(1, line.length-2),
				comments : comments
			});
		},
		end_header : function(line, comments) {
			e = 0;
			o = 0;
			elements.push({
				comments : comments
			});
		}
	}
	var unprocessed = file.trim().split(/[\r\n]+/g);
	for (var u = 0; u < unprocessed.length; u++) {
		var processed = unprocessed[u].split(/[ \t]*{/);
		var command = processed[0].trim();
		var comments = processed[1];
		var line = command.split(/ +/);
		if (typeof dispatchTable[line[0]] !== 'undefined') {
			dispatchTable[line[0]](line, typeof comments === 'undefined' ? undefined :"{"+comments);
		} else {
			dispatchTable.values(line, typeof comments === 'undefined' ? undefined :"{"+comments);
		}
	}

	// --- START OF FIX ---
	// Build a list of shapes, only adding geometry if it's valid.
	const shapes = [];

	const ifsGeometry = transformToIFS(elements);
	if (ifsGeometry && Object.keys(ifsGeometry).length > 0) {
		shapes.push({ "Shape": { "-geometry": ifsGeometry } });
	}

	const ilsGeometry = transformToILS(elements);
	if (ilsGeometry && Object.keys(ilsGeometry).length > 0) {
		shapes.push({ "Shape": { "-geometry": ilsGeometry } });
	}
	// --- END OF FIX ---

	var x3d = { "X3D": {
	    "encoding":"UTF-8",
	    "@profile":"Interchange",
	    "@version":"4.0",
	    "@xsd:noNamespaceSchemaLocation":"https://www.web3d.org/specifications/x3d-4.0.xsd",
	    "JSON schema":"https://www.web3d.org/specifications/x3d-4.0-JSONSchema.json",
	    "head": {
		"meta": [
		  { "@name":"title", "@content":"template.x3dj" },
		  { "@name":"description", "@content":"Template for an Indexed Face Set" },
		  { "@name":"creator", "@content":"John Carlson" },
		  { "@name":"created", "@content":"9 April 2017" },
		  { "@name":"generator", "@content":"ConvertPlyToJson.js" },
		  { "@name":"license", "@content":"../license.html" },
		  { "@name":"identifier", "@content":"https://coderextreme.net/X3DJSONLD/template.x3dj" },
		  { "@name":"modified", "@content":"10 April 2017" }
		]
	    },
	    "Scene": {
		"-children":[ { "Group": { "-children": shapes } } ]
	    }
	  }
	};
	return x3d;
}

function transformToILS(elements) {
	var ILS = {};
	var color = [];
	var hasEdges = false; // Flag to check if we processed any edge data.

	var dispatchTable = {
		edge : function(element, ILS) {
			hasEdges = true; // Set the flag
			if (typeof ILS["IndexedLineSet"] === "undefined") {
				ILS["IndexedLineSet" ] = {};
			}
			var array = [];
			for (var o in element) {
				try {
					var index = parseInt(o);
					if (!isNaN(index)) {
						for (var iv = 0; iv < 2; iv++) {
							array.push(parseInt(element[index][iv]));
						}
						array.push(-1);
						for (var c = 2; c < 5; c++) {
							if (element.property[c].type[0] === 'uchar') {
								color.push(colorComponentParseFloat(element[index][c])/255.0);
							} else {
								color.push(colorComponentParseInt(element[index][c]));
							}
						}
					}
				} catch (e) {
					console.error(e);
				}
			}

			if (color.length > 0) {
				ILS["IndexedLineSet" ]["-color"] = { "Color" : { "@color" : color }};
			}

			ILS["IndexedLineSet" ]["@coordIndex"] = array;
			return ILS;
		},
		vertex : function(element, ILS) {
			var point = [];
			for (var o in element) {
				try {
					var index = parseInt(o);
					if (!isNaN(index)) {
						for (var p = 0; p < 3; p++) {
							point.push(parseFloat(element[index][p]));
						}
					}
				} catch (e) {
					console.error(e);
				}
			}
			if (typeof ILS["IndexedLineSet"] === "undefined") {
				ILS["IndexedLineSet" ] = {};
			}
			ILS["IndexedLineSet" ]["-coord"] = { "Coordinate" : { "@point" : point }};
			return ILS;
		}
	}
	for (var e in elements) {
		var table = dispatchTable[elements[e].type];
		if (typeof table !== 'undefined') {
			ILS = table(elements[e], ILS);
		}
	}
	// --- START OF FIX ---
	// If we never processed any edges, return an empty object.
	if (!hasEdges) {
		return {};
	}
	// --- END OF FIX ---
	return ILS;
}

function transformToIFS(elements) {
	var IFS = {};
	var hasFaces = false; // Flag to check for face data

	var dispatchTable = {
		face : function(element, IFS) {
			hasFaces = true; // Set flag
			var array = [];
			for (var o in element) {
				try {
					var index = parseInt(o);
					if (!isNaN(index)) {
						for (var vertex in element[index]) {
							var iv = parseInt(vertex);
							if (!isNaN(iv)) {
								array.push(parseInt(element[index][iv]));
							}
						}
						array.push(-1);
					}
				} catch (e) {
					console.error(e);
				}
			}
			if (typeof IFS["IndexedFaceSet"] === "undefined") {
				IFS["IndexedFaceSet" ] = {};
			}
			IFS["IndexedFaceSet" ]["@colorIndex"] = array;
			IFS["IndexedFaceSet" ]["@coordIndex"] = array;
			return IFS;
		},
		vertex : function(element, IFS) {
			var point = [];
			var color = [];
			for (var o in element) {
				try {
					var index = parseInt(o);
					if (!isNaN(index)) {
						for (var p = 0; p < 3; p++) {
							point.push(parseFloat(element[index][p]));
						}
						for (var c = 3; c < 7; c++) { // Updated to handle alpha
							if (element.property[c] && element.property[c].type[0] === 'uchar') {
								color.push(colorComponentParseFloat(element[index][c])/255.0);
							} else {
								color.push(colorComponentParseInt(element[index][c]));
							}
						}
					}
				} catch (e) {
					console.error(e);
				}
			}
			if (typeof IFS["IndexedFaceSet"] === "undefined") {
				IFS["IndexedFaceSet" ] = {};
			}
			IFS["IndexedFaceSet" ]["-coord"] = { "Coordinate" : { "@point" : point }};

			// Only create color node if there's actual color data
			if (color.length > 0) {
				// We only care about RGB for X3D color node
				const rgbColor = color.filter((_, i) => (i + 1) % 4 !== 0);
				while (rgbColor.length < point.length) {
					rgbColor.push(1);
				}
				IFS["IndexedFaceSet" ]["-color"] = { "Color" : { "@color" : rgbColor }};
			}
			return IFS;
		}
	};
	for (var e in elements) {
		var table = dispatchTable[elements[e].type];
		if (typeof table !== 'undefined') {
			IFS = table(elements[e], IFS);
		}
	}

	// If no faces were found, return empty object
	if (!hasFaces) {
		return {};
	}
	return IFS;
}
