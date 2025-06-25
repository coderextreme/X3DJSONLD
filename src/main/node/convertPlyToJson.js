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
	// console.error(JSON.stringify(elements, null, 2));
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
		    "@name":"description",
		    "@content":"Template for an Indexed Face Set"
		  },
		  {
		    "@name":"creator",
		    "@content":"John Carlson"
		  },
		  {
		    "@name":"created",
		    "@content":"9 April 2017"
		  },
		  {
		    "@name":"generator",
		    "@content":"ConvertPlyToJson.js"
		  },
		  {
		    "@name":"license",
		    "@content":"../license.html"
		  },
		  {
		    "@name":"identifier",
		    "@content":"https://coderextreme.net/X3DJSONLD/template.x3dj"
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
				  "-geometry": transformToIFS(elements)
			  }
			},
			{ "Shape":
			  {
				  "-geometry": transformToILS(elements)
			  }
			}
		      ]
		    }
		  }
		]
	    }
	  }
	};
	return x3d;
}

function transformToILS(elements) {
	var ILS = {};
	var coordIndex = [];
	var colorIndex = [];
	var point = [];
	var color = [];
	var dispatchTable = {
		edge : function(element, ILS) {
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
			if (typeof ILS["IndexedLineSet"] === "undefined") {
				ILS["IndexedLineSet" ] = {};
			}
			if (typeof color != 'undefined') {
				ILS["IndexedLineSet" ]["-color"] = { "Color" : { "@color" : color }};
				ILS["IndexedLineSet" ]["@colorIndex"] = array;
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
		console.error(elements[e]);
		var table = dispatchTable[elements[e].type];
		if (typeof table !== 'undefined') {
			ILS = table(elements[e], ILS);
		}
	}
	return ILS;
}

function transformToIFS(elements) {
	var IFS = {};
	var coordIndex = [];
	var colorIndex = [];
	var point = [];
	var color = [];
	var dispatchTable = {
		face : function(element, IFS) {
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
						for (var c = 3; c < 6; c++) { 
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
			// set colors if there aren't any
			while (color.length < point.length) {
				color.push(1);
			}
			IFS["IndexedFaceSet" ]["-color"] = { "Color" : { "@color" : color }};
			return IFS;
		}
	};
	for (var e in elements) {
		var table = dispatchTable[elements[e].type];
		if (typeof table !== 'undefined') {
			IFS = table(elements[e], IFS);
		}
	}
	return IFS;
}
/*
ply
format ascii 1.0
comment author: Greg Turk
comment object: another cube
element vertex 8
property float x
property float y
property float z
property uchar red                   { start of vertex color }
property uchar green
property uchar blue
element face 7
property list uchar int vertex_index  { number of vertices for each face }
element edge 5                        { five edges in object }
property int vertex1                  { index to first vertex of edge }
property int vertex2                  { index to second vertex }
property uchar red                    { start of edge color }
property uchar green
property uchar blue
end_header
0 0 0 255 0 0                         { start of vertex list }
0 0 1 255 0 0
0 1 1 255 0 0
0 1 0 255 0 0
1 0 0 0 0 255
1 0 1 0 0 255
1 1 1 0 0 255
1 1 0 0 0 255
3 0 1 2                           { start of face list, begin with a triangle }
3 0 2 3                           { another triangle }
4 7 6 5 4                         { now some quadrilaterals }
4 0 4 5 1
4 1 5 6 2
4 2 6 7 3
4 3 7 4 0
0 1 255 255 255                   { start of edge list, begin with white edge }
1 2 255 255 255
2 3 255 255 255
3 0 255 255 255
2 0 0 0 0                         { end with a single black line }
------------------------------------------------------
                            { "IndexedFaceSet":
                              {
                                "@colorIndex":[0,1,2,3,0,-1],
                                "@coordIndex":[0,1,2,3,0,-1],
                                "-coord":
                                  { "Coordinate":
                                    {
                                      "@DEF":"FourPoints",
                                      "@point":[0,0,0,1,0,0,1,1,0,0,1,0]
                                    }
                                  },
                                "-color":
                                  { "Color":
                                    {
                                      "@DEF":"FourColors",
                                      "@color":[1,0,0,0,1,0,0,0,1,0.8,0.8,0.8]
                                    }
                                  }
                              }
                            }
------------------------------------------------------
{ "X3D": {
    "encoding":"UTF-8",
    "@profile":"Interchange",
    "@version":"4.4",
    "@xsd:noNamespaceSchemaLocation":"https://www.web3d.org/specifications/x3d-4.0.xsd",
    "JSON schema":"https://www.web3d.org/specifications/x3d-4.0-JSONSchema.json",
    "head": {
        "meta": [
          {
            "@name":"title",
            "@content":"template.x3dj"
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
                          "-geometry":
                            { "IndexedFaceSet":
                              {
                                "@colorIndex":[0,1,2,3,0,-1],
                                "@coordIndex":[0,1,2,3,0,-1],
                                "-coord":
                                  { "Coordinate":
                                    {
                                      "@DEF":"FourPoints",
                                      "@point":[0,0,0,1,0,0,1,1,0,0,1,0]
                                    }
                                  },
                                "-color":
                                  { "Color":
                                    {
                                      "@DEF":"FourColors",
                                      "@color":[1,0,0,0,1,0,0,0,1,0.8,0.8,0.8]
                                    }
                                  }
                              }
                            }
                  }
                }
            }
	  }
	]
    }
  }
}
*/
