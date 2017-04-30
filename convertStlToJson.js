function convertStlToJson(file) {
	let IFS = {};
	IFS.normalIndex = [];
	IFS.vector = [];
	IFS.ni = {};
	IFS.coordIndex = [];
	IFS.point = [];
	IFS.ci = {};
	IFS.colorIndex = [];
	IFS.color = [];
	IFS.co = {};
	let Bbox = {};
	Bbox.minx = 10000;
	Bbox.miny = 10000;
	Bbox.minz = 10000;
	Bbox.maxx = -10000;
	Bbox.maxy = -10000;
	Bbox.maxz = -10000;
	let dispatchTable = {
		solid : function(line, IFS) {
			IFS = {};
			IFS.normalIndex = [];
			IFS.vector = [];
			IFS.ni = {};
			IFS.coordIndex = [];
			IFS.point = [];
			IFS.ci = {};
			IFS.colorIndex = [];
			IFS.color = [];
			IFS.co = {};
			return IFS;
		},
		facet : function(line, IFS) {
			line.shift();
			line.shift();
			let coords = line.join(" ");
			let n = IFS.ni[coords];
			if (typeof n === 'undefined') {
				IFS.ni[coords] = IFS.vector.length;
				n = IFS.ni[coords];
				IFS.vector.push(coords);
			}
			IFS.normalIndex.push(n);
			return IFS;
		},
		outer : function(line, IFS) {
			return IFS;
		},
		vertex : function(line, IFS) {
			line.shift();
			// find bounding box
			if (line[0] < Bbox.minx) {
				Bbox.minx = parseFloat(line[0]);
			}
			if (line[0] > Bbox.maxx) {
				Bbox.maxx = parseFloat(line[0]);
			}
			if (line[1] < Bbox.miny) {
				Bbox.miny = parseFloat(line[1]);
			}
			if (line[1] > Bbox.maxy) {
				Bbox.maxy = parseFloat(line[1]);
			}
			if (line[2] < Bbox.minz) {
				Bbox.minz = parseFloat(line[2]);
			}
			if (line[2] > Bbox.maxz) {
				Bbox.maxz = parseFloat(line[2]);
			}
			let coords = line.join(" ");
			let p = IFS.ci[coords];
			if (typeof p === 'undefined') {
				IFS.ci[coords] = IFS.point.length;
				p = IFS.ci[coords];
				IFS.point.push(coords);
			}
			IFS.coordIndex.push(p);

			line = [ 0, 1, 0 ]
			coords = line.join(" ");
			c = IFS.co[coords];
			if (typeof c === 'undefined') {
				IFS.co[coords] = IFS.color.length;
				c = IFS.co[coords];
				IFS.color.push(coords);
			}
			IFS.colorIndex.push(c);
			return IFS;
		},
		endloop : function(line, IFS) {
			IFS.coordIndex.push(-1);
			IFS.colorIndex.push(-1);
			return IFS;
		},
		endfacet : function(line, IFS) {
			IFS.normalIndex.push(-1);
			return IFS;
		},
		endsolid : function(line, IFS) {
			IFS["DEF"] = line[1];
			return IFS;
		}
	}
	let unprocessed = file.trim().split(/[\r\n]+/g);
	for (let u = 0; u < unprocessed.length; u++) {
		let command = unprocessed[u].trim();
		let line = command.split(/ +/);
		if (typeof dispatchTable[line[0]] !== 'undefined') {
			IFS = dispatchTable[line[0]](line, IFS);
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
		    "@name":"identifier",
		    "@content":"http://coderextreme.net/X3DJSONLD/template.json"
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
		    "@content":"convertStlToJson.js:  https://github.com/coderextreme/X3DJSONLD/convertStlToJson.js"
		  },
		  {
		    "@name":"license",
		    "@content":"../license.html"
		  },
		  {
		    "@name":"modified",
		    "@content":"30 April 2017"
		  }
		]
	    },
	    "Scene": {
		"-children":[
			/*
		  { "NavigationInfo": {
			  	"@type" : [ "EXAMINE" ]
		  	}
		  },
		  */
		  { "Group":
		    {
		      "-children":[
			{ "Shape":
			  {
				  /*
				"@bboxCenter": [
				  	(Bbox.maxx + Bbox.minx) / 2,
				  	(Bbox.maxy + Bbox.miny) / 2,
				  	(Bbox.maxz + Bbox.minz) / 2
				],
				"@bboxSize": [
				  	(Bbox.maxx - Bbox.minx),
				  	(Bbox.maxy - Bbox.miny),
				  	(Bbox.maxz - Bbox.minz)
				],
				*/
				"-geometry": transformNormalsToIFS(IFS)
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

function transformNormalsToIFS(json) {
	let IFS = {};
	IFS["IndexedFaceSet" ] = {};
	IFS["IndexedFaceSet" ]["@DEF"] = json.DEF;
	IFS["IndexedFaceSet" ]["@coordIndex"] = json.coordIndex;
	IFS["IndexedFaceSet" ]["-coord"] = { "Coordinate" : { "@point" : json.point.join(" ").split(" ").map(function(x) { return parseFloat(x); }) }};

	IFS["IndexedFaceSet" ]["-normal"] = { "Normal" : { "@vector" : json.vector.join(" ").split(" ").map(function(x) { return parseFloat(x); }) }};
	IFS["IndexedFaceSet" ]["@normalIndex"] = json.normalIndex;
	IFS["IndexedFaceSet" ]["@normalPerVertex"] = false;

	IFS["IndexedFaceSet" ]["-color"] = { "Color" : { "@color" : json.color.join(" ").split(" ").map(function(x) { return parseFloat(x); }) }};
	IFS["IndexedFaceSet" ]["@colorIndex"] = json.colorIndex;
	return IFS;
}
