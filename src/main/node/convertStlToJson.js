export default function convertStlToJson(file) {
	var IFS = {};
	IFS.normalIndex = [];
	IFS.vector = [];
	IFS.ni = {};
	IFS.coordIndex = [];
	IFS.point = [];
	IFS.ci = {};
	IFS.colorIndex = [];
	IFS.color = [];
	IFS.co = {};
	var Bbox = {};
	Bbox.minx = 10000;
	Bbox.miny = 10000;
	Bbox.minz = 10000;
	Bbox.maxx = -10000;
	Bbox.maxy = -10000;
	Bbox.maxz = -10000;
	var dispatchTable = {
		solid : function(line, IFS) {
			return IFS;
		},
		facet : function(line, IFS) {
			line.shift();
			line.shift();
			var coords = line.join(" ");
			var n = IFS.ni[coords];
			if (typeof n === 'undefined') {
				IFS.ni[coords] = IFS.vector.length;
				n = IFS.ni[coords];
				IFS.vector.push(coords);
			}
			IFS.normalIndex.push(n);
			// There is only one color
			IFS.colorIndex.push(0);
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
			var coords = line.join(" ");
			var p = IFS.ci[coords];
			if (typeof p === 'undefined') {
				IFS.ci[coords] = IFS.point.length;
				p = IFS.ci[coords];
				IFS.point.push(coords);
			}
			IFS.coordIndex.push(p);

			line = [ 0, 1, 0 ]
			coords = line.join(" ");
			let c = IFS.co[coords];
			if (typeof c === 'undefined') {
				IFS.co[coords] = IFS.color.length;
				c = IFS.co[coords];
				IFS.color.push(coords);
			}
			return IFS;
		},
		endloop : function(line, IFS) {
			IFS.coordIndex.push(-1);
			// IFS.colorIndex.push(-1);
			return IFS;
		},
		endfacet : function(line, IFS) {
			// IFS.normalIndex.push(-1);
			// IFS.colorIndex.push(-1);
			return IFS;
		},
		endsolid : function(line, IFS) {
			IFS["DEF"] = "IndexedFaceSet";
			return IFS;
		}
	}
	var unprocessed = file.trim().split(/[\r\n]+/g);
	for (var u = 0; u < unprocessed.length; u++) {
		var command = unprocessed[u].trim();
		var line = command.split(/ +/);
		if (typeof dispatchTable[line[0]] !== 'undefined') {
			IFS = dispatchTable[line[0]](line, IFS);
		}
	}
	var x3d = { "X3D": {
	    "encoding":"UTF-8",
	    "@profile":"Interchange",
	    "@version":"4.0",
	    "@xsd:noNamespaceSchemaLocation":"https://www.web3d.org/specifications/x3d-4.0.xsd",
	    "JSON schema":"https://www.web3d.org/specifications/x3d-4.0-JSONSchema.json",
	    "head": {
		"meta": [
		  {
		    "@name":"title",
		    "@content":"template.x3dj"
		  },
		  {
		    "@name":"identifier",
		    "@content":"https://coderextreme.net/X3DJSONLD/template.x3dj"
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
		    "@content":"X3DJSONLD:  https://github.com/coderextreme/X3DJSONLD/"
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
	// console.error(x3d);
	return x3d;
}

function transformNormalsToIFS(json) {
	var IFS = {};
	IFS["IndexedFaceSet" ] = {};
	IFS["IndexedFaceSet" ]["@DEF"] = json.DEF;
	IFS["IndexedFaceSet" ]["@coordIndex"] = json.coordIndex;
	IFS["IndexedFaceSet" ]["-coord"] = { "Coordinate" : { "@point" : json.point.join(" ").split(" ").map(function(x) { return parseFloat(x); }) }};

	IFS["IndexedFaceSet" ]["-normal"] = { "Normal" : { "@vector" : json.vector.join(" ").split(" ").map(function(x) { return parseFloat(x); }) }};
	IFS["IndexedFaceSet" ]["@normalIndex"] = json.normalIndex;
	IFS["IndexedFaceSet" ]["@colorIndex"] = json.colorIndex;
	IFS["IndexedFaceSet" ]["@normalPerVertex"] = false;
	IFS["IndexedFaceSet" ]["@colorPerVertex"] = false;

	IFS["IndexedFaceSet" ]["-color"] = { "Color" : { "@color" : json.color.join(" ").split(" ").map(function(x) { return parseFloat(x); }) }};
	return IFS;
}
