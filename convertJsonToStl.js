function convertJsonToStl(json) {
	let GeometryList = [];
	GeometryList = toNormals(json, GeometryList);
	if (GeometryList !== null) {
		return transformIfsToNormals(GeometryList);
	} else {
		return null;
	}
}

function toNormals(json, GeometryList) {
	let Geometry = GeometryList.length === 0 ? null : GeometryList[GeometryList.length-1];
	let dispatchTable = {
		IndexedFaceSet : function(obj, Geometry) {
			Geometry = {};
			Geometry.DEF = "IndexedFaceSet";
			if (typeof obj["@DEF"] !== 'undefined') {
				Geometry.DEF = obj["@DEF"];
			}
			Geometry.vector = [];
			Geometry.point = [];
			Geometry.normalIndex = [];
			Geometry.coordIndex = [];
			Geometry.normalPerVertex = true;
			Geometry.recognize = true;
			return Geometry;
		},
		IndexedLineSet : function(obj, Geometry) {
			Geometry = {};
			Geometry.recognize = false;
			return Geometry;  // STL doesn't handle lines
		},
		"-normal" : function(obj, Geometry) {
			return Geometry;
		},
		Normal : function(obj, Geometry) {
			return Geometry;
		},
		"@normalPerVertex" : function(obj, Geometry) {
			if (Geometry !== null && Geometry.recognize) {
				Geometry.normalPerVertex = obj;
			}
			return Geometry;
		},
		"@vector" : function(obj, Geometry) {
			if (Geometry !== null && Geometry.recognize) {
				let len = obj.length / 3;
				Geometry.vector = [];
				for (let o = 0, off = -1; o < len; o++) {
					if (typeof Geometry.vector[o] === 'undefined') {
						Geometry.vector[o] = [];
					}
					Geometry.vector[o][0] = obj[++off];
					Geometry.vector[o][1] = obj[++off];
					Geometry.vector[o][2] = obj[++off];
				}
			}
			return Geometry;
		},
		"-coord" : function(obj, Geometry) {
			return Geometry;
		},
		Coordinate : function(obj, Geometry) {
			return Geometry;
		},
		"@point" : function(obj, Geometry) {
			if (Geometry !== null && Geometry.recognize) {
				let len = obj.length / 3;
				Geometry.point = [];
				for (let o = 0, off = -1; o < len; o++) {
					if (typeof Geometry.point[o] === 'undefined') {
						Geometry.point[o] = [];
					}
					Geometry.point[o][0] = obj[++off];
					Geometry.point[o][1] = obj[++off];
					Geometry.point[o][2] = obj[++off];
				}
			}
			return Geometry;
		},
		"@normalIndex" : function(obj, Geometry) {
			if (Geometry !== null && Geometry.recognize) {
				let f = 0;
				Geometry.normalIndex = [];
				for (let o = 0; o < obj.length; o++) {
					if (obj[o] == -1 || normalPerVertex === false) {
						f++;
					} else {
						if (typeof Geometry.normalIndex[f] === 'undefined') {
							Geometry.normalIndex[f] = [];
						}
						Geometry.normalIndex[f].push(obj[o]);
					}
				}
			}
			return Geometry;
		},
		"@coordIndex" : function(obj, Geometry) {
			if (Geometry !== null && Geometry.recognize) {
				let f = 0;
				Geometry.coordIndex = [];
				for (let o = 0; o < obj.length; o++) {
					if (obj[o] == -1) {
						f++;
					} else {
						if (typeof Geometry.coordIndex[f] === 'undefined') {
							Geometry.coordIndex[f] = [];
						}
						Geometry.coordIndex[f].push(obj[o]);
					}
				}
			}
			return Geometry;
		}
	}
	for (let obj in json) {
		if (typeof dispatchTable[obj] !== 'undefined') {
			let NewGeometry = dispatchTable[obj](json[obj], Geometry);
			if (Geometry !== NewGeometry) {
				GeometryList.push(NewGeometry);
				Geometry = NewGeometry;
			}
		}
		if (typeof json[obj] === 'object') {
			GeometryList = toNormals(json[obj], GeometryList);
		}
	}
	return GeometryList;
}

function vector_product(u, v) {
	return [ u[1] * v[2] - u[2] * v[1], u[2] * v[0] - u[0] * v[2], u[0] * v[1] - u[1] * v[0] ];
}

function normalize(v) {
	let norm = Math.sqrt(v[0]*v[0] + v[1]*v[1] + v[2]*v[2]);
	return [ v[0]/norm, v[1]/norm, v[2]/norm ];
}

function triangle_normal(a, b, c) {
	let ba = [a[0] - b[0], a[1] - b[1], a[2] - b[2]];
	let bc = [c[0] - b[0], c[1] - b[1], c[2] - b[2]];
	abxac = vector_product(ba, bc);
	return normalize(baxbc);
}

function transformIfsToNormals(GeometryList) {
	console.log("ENTER", GeometryList);
	let dispatchTable = {
		handle: function(Geometry, face, output) {
			// just pick a close vector for now, average later
			let normal = triangle_normal( Geometry.point[Geometry.coordIndex[face][0]], Geometry.point[Geometry.coordIndex[face][1]], Geometry.point[Geometry.coordIndex[face][2]]);
			console.log(normal);
			output.push(["  facet normal",
				typeof Geometry.normalIndex[face] === 'undefined' ? normal[0] : Geometry.vector[Geometry.normalIndex[face][0]][0] || normal[0],
				typeof Geometry.normalIndex[face] === 'undefined' ? normal[1] : Geometry.vector[Geometry.normalIndex[face][0]][1] || normal[1],
				typeof Geometry.normalIndex[face] === 'undefined' ? normal[2] : Geometry.vector[Geometry.normalIndex[face][0]][2] || normal[2]
			    ].join(" "));
			output.push("    outer loop");
			for (let v in Geometry.coordIndex[face]) {
				output.push(["      vertex",
					Geometry.point[Geometry.coordIndex[face][v]][0],
					Geometry.point[Geometry.coordIndex[face][v]][1],
					Geometry.point[Geometry.coordIndex[face][v]][2]
				       ].join(" "));
			}
			output.push("    endloop");
			output.push("  endfacet");
		}
	};
	let output = [];
	for (let g in GeometryList) {
		let Geometry = GeometryList[g];
		if (Geometry.recognize) {
			output.unshift("solid "+Geometry.DEF);
			for (n in Geometry.coordIndex) { // each face
				dispatchTable.handle(Geometry, n, output);
			}
			output.push("endsolid "+Geometry.DEF);
		}
	}
	return output.join("\r\n")+"\r\n";
}
