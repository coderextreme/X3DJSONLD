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
	let dispatchTable = {
		solid : function(line, IFS) {
			IFS.normalIndex = [];
			IFS.vector = [];
			IFS.ni = {};
			IFS.coordIndex = [];
			IFS.point = [];
			IFS.ci = {};
			IFS.colorIndex = [];
			IFS.color = [];
			IFS.co = {};
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
		  },
		  {
		    "@name":"modified",
		    "@content":"10 April 2017"
		  },
		  {
		    "@name":"dummy",
		    "@content":"b"
		  },
		  {
		    "@name":"dummy",
		    "@content":"a"
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
