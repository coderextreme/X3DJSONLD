function convertStlToJson(file) {
	let normals = [];
	let dispatchTable = {
		solid : function(line, normals) {
			normals = [];
			return normals;
		},
		facet : function(line, normals) {
			normals.push({
				0 : line[2],
				1 : line[3],
				2 : line[4],
				vertex : []
			});
			return normals;
		},
		outer : function(line, normals) {
			return normals;
		},
		vertex : function(line, normals) {
			normals[normals.length-1].vertex.push([
				line[1],
				line[2],
				line[3]
			]);
			return normals;
		},
		endloop : function(line, normals) {
			return normals;
		},
		endfacet : function(line, normals) {
			return normals;
		},
		endsolid : function(line, normals) {
			return normals;
		}
	}
	let unprocessed = file.trim().split(/[\r\n]+/g);
	for (let u = 0; u < unprocessed.length; u++) {
		let command = unprocessed[u].trim();
		let line = command.split(/ +/);
		if (typeof dispatchTable[line[0]] !== 'undefined') {
			normals = dispatchTable[line[0]](line, normals);
		}
	}
	var x3d = { "X3D": {
	    "encoding":"UTF-8",
	    "@profile":"Interchange",
	    "@version":"3.3",
	    "@xsd:noNamespaceSchemaLocation":"http://www.web3d.org/specifications/x3d-3.3.xsd",
	    "JSON schema":"http://www.web3d.org/specifications/x3d-3.3-JSONSchema.json",
	    "head": {
		"meta": [
		  {
		    "@name":"title",
		    "@content":"template.json"
		  },
		  {
		    "@name":"description",
		    "@content":"Template for an Indexed Face Set"
		  },
		  {
		    "@name":"creator",
		    "@content":"John Carlson"
		  },
		  {
		    "@name":"created",
		    "@content":"4 April 2017"
		  },
		  {
		    "@name":"generator",
		    "@content":"manual"
		  },
		  {
		    "@name":"license",
		    "@content":"../license.html"
		  }
		]
	    },
	    "Scene": {
		"-children":[
		  { "Group":
		    {
		      "-children":[
			{ "Shape":
			  {
				"-appearance": {
				  "Appearance": {
				    "-material": {
				      "Material": {
					"@diffuseColor": [
					  0,
					  1,
					  0
					]
				      }
				    }
				  }
				},
				"-geometry": transformNormalsToIFS(normals)
			  }
			}
		      ]
		    }
		  }
		]
	    }
	  }
	};
	console.log(x3d);
	return x3d;
}

function transformNormalsToIFS(normals) {
	let IFS = {};
	IFS["IndexedFaceSet" ] = {};
	let coordIndex = [];
	let normalIndex = [];
	let point = [];
	let norm = [];
	let vertices = 0;
	let norms = 0;
	let dispatchTable = {
		handle: function(normal) {
			for (let n in normal) {
				let index = parseInt(n);
				if (!isNaN(index)) {
					norm.push(parseFloat(normal[index]));
				}
			}
			normalIndex.push(norms++);
			for (let v in normal.vertex) {
				for (let p = 0; p < 3; p++) { 
					point.push(parseFloat(normal.vertex[v][p]));
				}
				coordIndex.push(vertices++);
			}
			coordIndex.push(-1);

			return IFS;
		}
	};
	for (n in normals) {
		dispatchTable.handle(normals[n]);
	}
	normalIndex.push(-1);
	IFS["IndexedFaceSet" ]["-coord"] = { "Coordinate" : { "@point" : point }};
	IFS["IndexedFaceSet" ]["-normal"] = { "Normal" : { "@vector" : norm }};
	IFS["IndexedFaceSet" ]["@normalIndex"] = normalIndex;
	IFS["IndexedFaceSet" ]["@normalPerVertex"] = false;
	IFS["IndexedFaceSet" ]["@coordIndex"] = coordIndex;
	return IFS;
}
