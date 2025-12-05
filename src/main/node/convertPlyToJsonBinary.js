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

function characterToColor(chr) {
	return chr.codePointAt(0) % 256;
}

export default async function convertPlyToJson(buf) {
	var elements = [];
	var e;
	var o;
	var dispatchTable = {
		values: function (unprocessed) {
			/*
			console.log(unprocessed);
			*/
			if (typeof unprocessed === 'undefined' || !unprocessed.length) {
				return;
			}
			while (typeof elements[e].type === 'undefined' ||
				(typeof elements[e].number !== 'undefined' && o >= elements[e].number)) {
				e++;
				o = 0;
				if (e >= elements.length) return;
			}

			const currentObject = [];
			const properties = elements[e].property;
			const hasList = properties.some(p => p.type[0] === 'list');

			if (hasList) {
				for (let i = 0; i < unprocessed.length; i++) {
					currentObject[i] = unprocessed[i];
				}
			} else {
				for (let i = 0; i < properties.length; i++) {
					if (i < unprocessed.length) {
						currentObject[i] = unprocessed[i];
					}
				}
			}

			elements[e][o] = currentObject;
			elements[e][o]["comments"] = comments;
			o++;
			/*
			console.log(o);
			*/
			return unprocessed.substring(currentObject.length);
		},
		ply : function (line, comments) {
			/*
			console.log(line);
			*/
			elements.push({
				ply : "ply",
				comments : comments
			});
		},
		format : function(line, comments) {
			/*
			console.log(line);
			*/
			elements.push({
				encoding : "json",
				charset :  line[1],
				version : line[2],
				comments : comments
			});
		},
		comment : function(line, comments) {
			/*
			console.log(line);
			*/
			elements.push({
				comment : line.slice(1).join(" "),
				comments : comments
			});
		},
		element : function(line, comments) {
			/*
			console.log(line);
			*/
			elements.push({
				type : line[1],
				number : line[2],
				property : [],
				comments : comments
			});
		},
		property : function(line, comments) {
			/*
			console.log(line);
			*/
			for (let eind = elements.length; eind >= 1; eind--) {
				if (typeof elements[eind-1].property !== 'undefined') {
					elements[eind-1].property.push({
						name : line[line.length-1],
						type : line.splice(1, line.length-2),
						comments : comments
					});
					// just add a property to the last one
					break;
				}
			}
		},
		end_header : function(line, comments) {
			/*
			console.log(line);
			*/
			e = 0;
			o = 0;
			elements.push({
				comments : comments
			});
		}
	}
	let unprocessed = null;
	/*
	console.log(buf, "RESPONSE");
	*/
	const codec = new TextDecoder('utf-8');
	const data = codec.decode(buf);
	if (typeof data.trim === 'function') {
		unprocessed = await data.trim().split(/end_header[\r\n]+/);
	} else {
		unprocessed = await data.split(/end_header[\r\n]+/);
	}
	/*
	console.log(unprocessed);
	console.log(0, unprocessed[0]);
	console.log(1, unprocessed[1]);
	*/
	var header = await unprocessed[0].split(/[\r\n]+/g);
	/*
	console.log(header.length, header);
	*/
	header.push("end_header");
	unprocessed = unprocessed[1];
	for (var u = 0; u < header.length; u++) {
		var command = await header[u].trim();
		/*
		console.log(u, command);
		*/
		if (!command) continue;

		var processed = await command.split(/[ \t]*{/);
		var main_command = await processed[0].trim();
		var comments = processed[1];
		var line = await main_command.split(/\s+/);

		if (typeof dispatchTable[line[0]] !== 'undefined') {
			dispatchTable[line[0]](line, typeof comments === 'undefined' ? undefined :"{"+comments);
		}
	}
	do {
		unprocessed = dispatchTable.values(unprocessed);
	} while (typeof unprocessed !== 'undefined' && unprocessed.length > 0);

	const shapes = [];

	/*
	const ifsGeometry = transformToIFS(elements);
	if (ifsGeometry && Object.keys(ifsGeometry).length > 0) {
		shapes.push({ "Shape": { "-geometry": ifsGeometry } });
	}

	const ilsGeometry = transformToILS(elements);
	if (ilsGeometry && Object.keys(ilsGeometry).length > 0) {
		shapes.push({ "Shape": { "-geometry": ilsGeometry } });
	}
	*/

	const itsGeometry = transformToITS(elements);
	if (itsGeometry && Object.keys(itsGeometry).length > 0) {
		shapes.push({ "Shape": { "-geometry": itsGeometry } });
	}

	if (shapes.length > 0) {
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
	} else {
		return null;
	}
}

function transformToILS(elements) {
	var ILS = {};
	var color = [];
	var hasEdges = false;

	var dispatchTable = {
		edge : function(element, ILS, charset) {
			hasEdges = true;
			if (typeof ILS["IndexedLineSet"] === "undefined") {
				ILS["IndexedLineSet" ] = {};
			}
			var array = [];
			for (var o in element) {
				try {
					var index = NaN;
					if (charset == 'binary_little_endian') {
						index = o;
					} else if (charset == 'ascii') {
						index = parseInt(o);
					}
					if (!isNaN(index)) {
						if (charset == 'binary_little_endian') {
							array.push(element[index][0]);
							array.push(element[index][1]);
							array.push(-1);
							for (var c = 2; c < 5; c++) {
								color.push(characterToColor(element[index][c])/255.0);
							}
						} else if (charset == 'ascii') {
							array.push(parseInt(element[index][0]));
							array.push(parseInt(element[index][1]));
							array.push(-1);
							for (var c = 2; c < 5; c++) {
								color.push(colorComponentParseFloat(element[index][c])/255.0);
							}
						}
					}
				} catch (e) { console.error(e); }
			}

			if (color.length > 0) {
				ILS["IndexedLineSet" ]["-color"] = { "Color" : { "@color" : color }};
				// THIS IS THE FIX: Apply color per line segment, not per vertex, to prevent gradients.
				ILS["IndexedLineSet" ]["@colorPerVertex"] = false;
			}

			ILS["IndexedLineSet" ]["@coordIndex"] = array;
			return ILS;
		},
		vertex : function(element, ILS, charset) {
			var point = [];
			for (var o in element) {
				try {
					var index = NaN;
					if (charset == 'binary_little_endian') {
						index = o;
					} else if (charset == 'ascii') {
						index = parseInt(o);
					}
					if (!isNaN(index)) {
						if (charset == 'binary_little_endian') {
							for (let p = 0; p < 3; p++) {
								let pt = bytesToFloat(
									element[index][p][0],
									element[index][p][1],
									element[index][p][2],
									element[index][p][3]);
								point.push(pt);
							}
						} else if (charset == 'ascii') {
							for (let p = 0; p < 3; p++) {
								point.push(parseFloat(element[index][p]));
							}
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
	let charset;
	for (var e in elements) {
		if (typeof charset === 'undefined' || typeof elements[e].charset !== 'undefined') {
			charset = elements[e].charset;
		}
		var table = dispatchTable[elements[e].type];
		if (typeof table !== 'undefined') {
			ILS = table(elements[e], ILS, charset);
		}
	}
	if (!hasEdges) {
		// return {};
	}
	return ILS;
}

// TODO read directluy from file
function  bytesToFloat(byte0, byte1, byte2, byte3) {
  let buf = new ArrayBuffer(4);
  let v = new DataView(buf);
  v.setUint8(0, byte0);
  v.setUint8(1, byte1);
  v.setUint8(2, byte2);
  v.setUint8(3, byte3);
  let float32 = v.getFloat32(0, true);

  return float32;
}

function transformToIFS(elements) {
	var IFS = {};
	var hasFaces = false;

	var dispatchTable = {
		face : function(element, IFS, charset) {
			hasFaces = true;
			var coordIndexArray = [];
			var isDefinitelyConvex = true;

			for (var o in element) {
				try {
					var index = NaN;
					if (charset == 'binary_little_endian') {
						index = o;
					} else if (charset == 'ascii') {
						index = parseInt(o);
					}
					if (isNaN(index)) continue;

					const singleFaceIndices = [];
					for (const key in element[o]) {
						if (charset == 'binary_little_endian') {
							if (!isNaN(key)) {
								singleFaceIndices.push(element[o][key]);
							}
						} else if (charset == 'ascii') {
							if (!isNaN(parseInt(key))) {
								singleFaceIndices.push(parseInt(element[o][key]));
							}
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
		vertex : function(element, IFS, charset) {
			var point = [];
			var color = [];
			for (var o in element) {
				try {
					var index = NaN;
					if (charset == 'binary_little_endian') {
						index = o;
					} else if (charset == 'ascii') {
						index = parseInt(o);
					}
					if (!isNaN(index)) {
						if (charset == 'binary_little_endian') {
							for (let p = 0; p < 3; p++) {
								let pt = bytesToFloat(
									element[index][p][0],
									element[index][p][1],
									element[index][p][2],
									element[index][p][3]);
								point.push(pt);
							}
							if (element[index][3] !== undefined) {
								for (var c = 3; c < 6; c++) {
									color.push(characterToColor(element[index][c])/255.0);
								}
							}
						} else if (charset == 'ascii') {
							for (let p = 0; p < 3; p++) {
								point.push(parseFloat(element[index][p]));
							}
							if (element[index][3] !== undefined) {
								let r = colorComponentParseFloat(element[index][3])/255.0;
								let g = colorComponentParseFloat(element[index][4])/255.0;
								let b = colorComponentParseFloat(element[index][5])/255.0;
								color.push(r, g, b);
							}
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
	let charset;
	for (var e in elements) {
		if (typeof charset === 'undefined' || typeof elements[e].charset !== 'undefined') {
			charset = elements[e].charset;
		}
		var table = dispatchTable[elements[e].type];
		if (typeof table !== 'undefined') {
			IFS = table(elements[e], IFS, charset);
		}
	}

	if (!hasFaces) {
		// return {};
	}
	return IFS;
}

function transformToITS(elements) {
	var ITS = {};
	var hasTris = false;

	var dispatchTable = {
		face : function(element, ITS, charset) {
			hasTris = true;
			var coordIndexArray = [];
			var isDefinitelyConvex = true;

			for (var o in element) {
				try {
					var index = NaN;
					if (charset == 'binary_little_endian') {
						index = o;
					} else if (charset == 'ascii') {
						index = parseInt(o);
					}
					if (isNaN(index)) continue;

					const singleTriIndices = [];
					for (const key in element[o]) {
						if (charset == 'binary_little_endian') {
							if (!isNaN(key)) {
								singleTriIndices.push(element[o][key]);
							}
						} else if (charset == 'ascii') {
							if (!isNaN(parseInt(key))) {
								singleTriIndices.push(parseInt(element[o][key]));
							}
						}
					}

					if (singleTriIndices.length === 0) continue;
					if (singleTriIndices.length > 3) {
						isDefinitelyConvex = false;
					}

					coordIndexArray.push(...singleTriIndices, -1);
				} catch (e) {
					console.error("Error processing face: ", o, element[o], e);
				}
			}

			if (coordIndexArray.length === 0) return ITS;

			if (typeof ITS["IndexedTriangleSet"] === "undefined") {
				ITS["IndexedTriangleSet"] = {};
			}

			if (!isDefinitelyConvex) {
				ITS["IndexedTriangleSet"]["@convex"] = false;
			}

			if (coordIndexArray[coordIndexArray.length - 1] === -1) {
				coordIndexArray.pop();
			}

			ITS["IndexedTriangleSet"]["@coordIndex"] = coordIndexArray;
			ITS["IndexedTriangleSet"]["@colorIndex"] = coordIndexArray;
			return ITS;
		},
		vertex : function(element, ITS, charset) {
			var point = [];
			var color = [];
			for (var o in element) {
				try {
					var index = NaN;
					if (charset == 'binary_little_endian') {
						index = o;
					} else if (charset == 'ascii') {
						index = parseInt(o);
					}
					if (!isNaN(index)) {
						if (charset == 'binary_little_endian') {
							for (let p = 0; p < 3; p++) {
								let pt = bytesToFloat(
									element[index][p][0],
									element[index][p][1],
									element[index][p][2],
									element[index][p][3]);
								point.push(pt);
							}
							if (element[index][3] !== undefined) {
								for (var c = 3; c < 6; c++) {
									color.push(characterToColor(element[index][c])/255.0);
								}
							}
						} else if (charset == 'ascii') {
							for (let p = 0; p < 3; p++) {
								point.push(parseFloat(element[index][p]));
							}
							if (element[index][3] !== undefined) {
								let r = colorComponentParseFloat(element[index][3])/255.0;
								let g = colorComponentParseFloat(element[index][4])/255.0;
								let b = colorComponentParseFloat(element[index][5])/255.0;
								color.push(r, g, b);
							}
						}
					}
				} catch (e) { console.error(e); }
			}
			if (typeof ITS["IndexedTriangleSet"] === "undefined") {
				ITS["IndexedTriangleSet" ] = {};
			}
			ITS["IndexedTriangleSet" ]["-coord"] = { "Coordinate" : { "@point" : point }};

			if (color.length > 0) {
				ITS["IndexedTriangleSet" ]["-color"] = { "Color" : { "@color" : color }};
			}
			return ITS;
		}
	};
	let charset;
	for (var e in elements) {
		if (typeof charset === 'undefined' || typeof elements[e].charset !== 'undefined') {
			charset = elements[e].charset;
		}
		var table = dispatchTable[elements[e].type];
		if (typeof table !== 'undefined') {
			ITS = table(elements[e], ITS, charset);
		}
	}

	if (!hasTris) {
		// return {};
	}
	return ITS;
}
