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
			if (typeof line === 'undefined' || !line.length) {
				return;
			}
			while (typeof elements[e].type === 'undefined' || o >= elements[e].number) {
				e++;
				o = 0;
				if (e >= elements.length) return;
			}

			const currentObject = {};
			const properties = elements[e].property;
			const hasList = properties.some(p => p.type[0] === 'list');

			if (hasList) {
				for (let i = 1; i < line.length; i++) {
					currentObject[i - 1] = line[i];
				}
			} else {
				for (let i = 0; i < properties.length; i++) {
					if (i < line.length) {
						currentObject[i] = line[i];
					}
				}
			}

			elements[e][o] = currentObject;
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
		var command = unprocessed[u].trim();
		if (!command) continue;

		var processed = command.split(/[ \t]*{/);
		var main_command = processed[0].trim();
		var comments = processed[1];
		var line = main_command.split(/\s+/);

		if (typeof dispatchTable[line[0]] !== 'undefined') {
			dispatchTable[line[0]](line, typeof comments === 'undefined' ? undefined :"{"+comments);
		} else {
			dispatchTable.values(line, typeof comments === 'undefined' ? undefined :"{"+comments);
		}
	}

	const shapes = [];

	const ifsGeometry = transformToIFS(elements);
	if (ifsGeometry && Object.keys(ifsGeometry).length > 0) {
		shapes.push({ "Shape": { "-geometry": ifsGeometry } });
	}

	const ilsGeometry = transformToILS(elements);
	if (ilsGeometry && Object.keys(ilsGeometry).length > 0) {
		shapes.push({ "Shape": { "-geometry": ilsGeometry } });
	}

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
	var hasEdges = false;

	var dispatchTable = {
		edge : function(element, ILS) {
			hasEdges = true;
			if (typeof ILS["IndexedLineSet"] === "undefined") {
				ILS["IndexedLineSet" ] = {};
			}
			var array = [];
			for (var o in element) {
				try {
					var index = parseInt(o);
					if (!isNaN(index)) {
						array.push(parseInt(element[index][0]));
						array.push(parseInt(element[index][1]));
						array.push(-1);
						for (var c = 2; c < 5; c++) {
                            color.push(colorComponentParseFloat(element[index][c])/255.0);
						}
					}
				} catch (e) { console.error(e); }
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
				} catch (e) { console.error(e); }
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
	if (!hasEdges) {
		return {};
	}
	return ILS;
}

function transformToIFS(elements) {
	var IFS = {};
	var hasFaces = false;

	var dispatchTable = {
		face : function(element, IFS) {
			hasFaces = true;
			var coordIndexArray = [];
			var isDefinitelyConvex = true;

			for (var o in element) {
				try {
					if (isNaN(parseInt(o))) continue;

					const singleFaceIndices = [];
					for (const key in element[o]) {
						if (!isNaN(parseInt(key))) {
							singleFaceIndices.push(parseInt(element[o][key]));
						}
					}

					if (singleFaceIndices.length === 0) continue;
					if (singleFaceIndices.length > 3) {
						isDefinitelyConvex = false;
					}

					coordIndexArray.push(...singleFaceIndices, -1);
				} catch (e) {
					console.error("Error processing face: ", o, element[o], e);
				}
			}

			if (coordIndexArray.length === 0) return IFS;

			if (typeof IFS["IndexedFaceSet"] === "undefined") {
				IFS["IndexedFaceSet"] = {};
			}

			if (!isDefinitelyConvex) {
				IFS["IndexedFaceSet"]["@convex"] = false;
			}

			if (coordIndexArray[coordIndexArray.length - 1] === -1) {
				coordIndexArray.pop();
			}

			IFS["IndexedFaceSet"]["@coordIndex"] = coordIndexArray;
			IFS["IndexedFaceSet"]["@colorIndex"] = coordIndexArray;
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
						if (element[index][3] !== undefined) {
							let r = colorComponentParseFloat(element[index][3])/255.0;
							let g = colorComponentParseFloat(element[index][4])/255.0;
							let b = colorComponentParseFloat(element[index][5])/255.0;
							color.push(r, g, b);
						}
					}
				} catch (e) { console.error(e); }
			}
			if (typeof IFS["IndexedFaceSet"] === "undefined") {
				IFS["IndexedFaceSet" ] = {};
			}
			IFS["IndexedFaceSet" ]["-coord"] = { "Coordinate" : { "@point" : point }};

			if (color.length > 0) {
				IFS["IndexedFaceSet" ]["-color"] = { "Color" : { "@color" : color }};
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

	if (!hasFaces) {
		return {};
	}
	return IFS;
}
