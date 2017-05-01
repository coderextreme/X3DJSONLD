function convertJsonToStl(json) {
	let LDNodeList = [];
	let LDNode = initializeLDNode(json, "X3D");
	LDNodeList.push(LDNode);
	LDNodeList = toNormals(json, LDNodeList, LDNode);
	if (LDNodeList !== null) {
		return transformLDNodesToTriangles(LDNodeList);
	} else {
		return null;
	}
}


function initializeLDNode(json, obj) {
	let LDNode = {};
	LDNode.USE = json[obj]["@USE"];
	LDNode.DEF = json[obj]["@DEF"];
	console.log("@DEF is", LDNode.DEF);
	LDNode.nodeName = obj;
	return LDNode;
}
function findLDNodeInList(use, LDNodeList) {
	if (typeof use !== 'undefined') {
		for (var g in LDNodeList) {
			let LDNode = LDNodeList[g];
			if (LDNode.DEF === use) {
				console.log("Found USE", use, "returning", LDNode);
				return LDNode;
			}
		}
	}
	return null;
}

function toNormals(json, LDNodeList, ParentNode) {
	let LDNode = LDNodeList.length === 0 ? null : LDNodeList[LDNodeList.length-1];
	let nodeDispatchTable = {
		IndexedFaceSet : function(obj, LDNode) {
			LDNode.normalPerVertex = true;
			LDNode.recognize = true;
		},
		IndexedTriangleSet : function(obj, LDNode) {
			LDNode.normalPerVertex = true;
			LDNode.recognize = true;
		},
		IndexedTriangleStripSet : function(obj, LDNode) {
			LDNode.normalPerVertex = true;
			LDNode.recognize = true;
		},
		IndexedTriangleFanSet : function(obj, LDNode) {
			LDNode.normalPerVertex = true;
			LDNode.recognize = true;
		},
		IndexedLineSet : function(obj, LDNode) {
			LDNode.recognize = false;
		},
		Normal : function(obj, LDNode) {
			LDNode.child = "Normal";
		},
		Coordinate : function(obj, LDNode) {
			LDNode.child = "Coordinate";
		}
	}
	let fieldDispatchTable = {
		"@normalPerVertex" : function(obj, LDNode) {
			LDNode.normalPerVertex = obj;
		},
		"@vector" : function(obj, LDNode) {
			let len = obj.length / 3;
			LDNode.vector = [];
			for (let o = 0, off = -1; o < len; o++) {
				if (typeof LDNode.vector[o] === 'undefined') {
					LDNode.vector[o] = [];
				}
				LDNode.vector[o][0] = obj[++off];
				LDNode.vector[o][1] = obj[++off];
				LDNode.vector[o][2] = obj[++off];
			}
		},
		"@point" : function(obj, LDNode) {
			let len = obj.length / 3;
			LDNode.point = [];
			for (let o = 0, off = -1; o < len; o++) {
				if (typeof LDNode.point[o] === 'undefined') {
					LDNode.point[o] = [];
				}
				LDNode.point[o][0] = obj[++off];
				LDNode.point[o][1] = obj[++off];
				LDNode.point[o][2] = obj[++off];
			}
		},
		"@normalIndex" : function(obj, LDNode) {
			let f = 0;
			LDNode.normalIndex = [];
			for (let o = 0; o < obj.length; o++) {
				if (obj[o] == -1 || LDNode.normalPerVertex === false) {
					f++;
				} else {
					if (typeof LDNode.normalIndex[f] === 'undefined') {
						LDNode.normalIndex[f] = [];
					}
					LDNode.normalIndex[f].push(obj[o]);
				}
			}
		},
		"@coordIndex" : function(obj, LDNode) {
			let f = 0;
			LDNode.coordIndex = [];
			for (let o = 0; o < obj.length; o++) {
				if (obj[o] == -1) {
					f++;
				} else {
					if (typeof LDNode.coordIndex[f] === 'undefined') {
						LDNode.coordIndex[f] = [];
					}
					LDNode.coordIndex[f].push(obj[o]);
				}
			}
		},
		"@index" : function(obj, LDNode) {
			LDNode.index = [];
			let f = -1;
			switch(LDNode.nodeName) {
			case 'IndexedTriangleSet':
				for (let o = 0; o < obj.length; o++) {
					if (o % 3 === 0) {
						f++;
					}
					if (typeof LDNode.index[f] === 'undefined') {
						LDNode.index[f] = [];
					}
					LDNode.index[f].push(obj[o]);
				}
				break;
			case 'IndexedTriangleStripSet':
				for (let o = 2; o < obj.length; o++) {
					if (obj[o] == -1) {
						o += 3;
						if (o >= obj.length) {
							break;
						}
					}
					f++;
					LDNode.index[f] = [];
					LDNode.index[f].push(obj[o-2]);
					LDNode.index[f].push(obj[o-1]);
					LDNode.index[f].push(obj[o]);
				}
				break;
			case 'IndexedTriangleFanSet':
				let center = 0;
				for (let o = 2; o < obj.length; o++) {
					if (obj[o] == -1) {
						center = o+1;
						o += 3;
						if (o >= obj.length) {
							break;
						}
					}
					f++;
					LDNode.index[f] = [];
					LDNode.index[f].push(obj[center]);
					LDNode.index[f].push(obj[o-1]);
					LDNode.index[f].push(obj[o]);
				}
				break;
			}
		}
	}
	for (let obj in json) {
		if (typeof nodeDispatchTable[obj] !== 'undefined') {
			let LDNode = findLDNodeInList(json[obj]["@USE"], LDNodeList);
			if (LDNode === null) {
				LDNode = initializeLDNode(json, obj);
				LDNodeList.push(LDNode);
				nodeDispatchTable[obj](json[obj], LDNode); // further initialization
			}
			if (LDNode.child) {
				ParentNode[LDNode.child] = LDNode;
			}
		}
		if (typeof fieldDispatchTable[obj] !== 'undefined') {
			fieldDispatchTable[obj](json[obj], LDNode);
		}
		if (typeof json[obj] === 'object') {
			LDNodeList = toNormals(json[obj], LDNodeList, LDNode);
		}
	}
	return LDNodeList;
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
	baxbc = vector_product(ba, bc);
	return normalize(baxbc);
}

function IndexedTriangle(LDNode, output) {
	if (typeof LDNode.index === 'object') {
		for (var face in LDNode.index) { // each face
			var f = LDNode.index[face];
			// normalPerVertex == false
			if (typeof LDNode.Normal === 'undefined') {
				// compute the normal for the face with 3 points
				let normal = triangle_normal(
					LDNode.Coordinate.point[f[0]],
					LDNode.Coordinate.point[f[1]],
					LDNode.Coordinate.point[f[2]]);
				console.log(JSON.stringify(normal));
				output.push(["  facet normal",
					normal[0],
					normal[1],
					normal[2]
				    ].join(" "));
				output.push("    outer loop");
			} else {
				output.push(["  facet normal",
					LDNode.Normal.vector[f[0]][0],
					LDNode.Normal.vector[f[0]][1],
					LDNode.Normal.vector[f[0]][2]
				    ].join(" "));
				output.push("    outer loop");
			}
			// v = 0, 1, 2
			for (var v = 0; v < 3; v++) {
				output.push(["      vertex",
					LDNode.Coordinate.point[f[v]][0],
					LDNode.Coordinate.point[f[v]][1],
					LDNode.Coordinate.point[f[v]][2]
				       ].join(" "));
			}
			output.push("    endloop");
			output.push("  endfacet");
		}
	}
}

function transformLDNodesToTriangles(LDNodeList) {
	console.log("ENTER", LDNodeList);
	let dispatchTable = {
		IndexedFaceSet: function(LDNode, output) {
			if (typeof LDNode.coordIndex === 'object') {
				for (var face in LDNode.coordIndex) { // each face
			// just pick a close vector for now, average later
					let normal = triangle_normal(
						LDNode.Coordinate.point[LDNode.coordIndex[face][0]],
						LDNode.Coordinate.point[LDNode.coordIndex[face][1]],
						LDNode.Coordinate.point[LDNode.coordIndex[face][2]]);
					if (typeof LDNode === 'undefined' || typeof LDNode.normalIndex[face] === 'undefined') {
						console.log(JSON.stringify(normal));
						output.push(["  facet normal",
							normal[0],
							normal[1],
							normal[2]
						    ].join(" "));
						output.push("    outer loop");
					} else {
						output.push(["  facet normal",
							LDNode.Normal.vector[LDNode.normalIndex[face][0]][0],
							LDNode.Normal.vector[LDNode.normalIndex[face][0]][1],
							LDNode.Normal.vector[LDNode.normalIndex[face][0]][2]
						    ].join(" "));
						output.push("    outer loop");
					}
					for (let v in LDNode.coordIndex[face]) {
						output.push(["      vertex",
							LDNode.Coordinate.point[LDNode.coordIndex[face][v]][0],
							LDNode.Coordinate.point[LDNode.coordIndex[face][v]][1],
							LDNode.Coordinate.point[LDNode.coordIndex[face][v]][2]
						       ].join(" "));
					}
					output.push("    endloop");
					output.push("  endfacet");
				}
			}
		},
		IndexedTriangleSet: IndexedTriangle,
		IndexedTriangleStripSet: IndexedTriangle,
		IndexedTriangleFanSet: IndexedTriangle
	};
	let output = [];
	for (let g in LDNodeList) {
		let LDNode = LDNodeList[g];
		if (LDNode.recognize) {
			output.push("solid "+(LDNode.DEF || LDNode.nodeName));
			dispatchTable[LDNode.nodeName](LDNode, output);
			output.push("endsolid "+(LDNode.DEF || LDNode.nodeName));
		}
	}
	return output.join("\r\n")+"\r\n";
}
