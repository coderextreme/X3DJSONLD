let offset = 0;

function findEndOfHeader(buffer) {
  const view = new Uint8Array(buffer);
  const searchString = "end_header";
  const searchBytes = new TextEncoder().encode(searchString);

  for (let i = 0; i < view.length - searchBytes.length; i++) {
    let match = true;
    for (let j = 0; j < searchBytes.length; j++) {
      if (view[i + j] !== searchBytes[j]) {
        match = false;
        break;
      }
    }

    if (match) {
      let offset = i + searchBytes.length;
      while (offset < view.length && (view[offset] === 10 || view[offset] === 13)) {
        offset++;
      }
      return offset;
    }
  }

  return -1;
}

async function parsePlyBuffer(buffer) {
  const binaryStart = findEndOfHeader(buffer);

  if (binaryStart === -1) {
    throw new Error("Could not find end_header");
  }

  console.log(`Binary data starts at byte ${binaryStart}`);
  const header = new DataView(buffer, 0);
  const decoder = new TextDecoder('utf-8');
  const header_text = decoder.decode(new DataView(header.buffer, 0, binaryStart));

  const view = new DataView(buffer, binaryStart);
  return [header_text, view];
}

function parseHeader(header) {
	var elements = [];
	var dispatchTable = {
		ply : function (line) {
			elements.push({
				ply : "ply",
			});
		},
		format : function(line) {
			elements.push({
				encoding : "json",
				charset :  line[1],
				version : line[2],
			});
		},
		comment : function(line) {
			elements.push({
				comment : line.slice(1).join(" "),
			});
		},
		element : function(line) {
			elements.push({
				type : line[1],
				number : parseInt(line[2]),
				property : [],
			});
		},
		property : function(line) {
			for (let eind = elements.length; eind >= 1; eind--) {
				if (typeof elements[eind-1].property !== 'undefined') {
					elements[eind-1].property.push({
						name : line[line.length-1],
						type : line.splice(1, line.length-2),
					});
					// just add a property to the last one
					break;
				}
			}
		},
		end_header : function(line) {
		}
	}
	var lines = header.split(/[\r\n]+/g);
	lines.push("end_header");
	for (var u = 0; u < lines.length; u++) {
		var command = lines[u].trim();
		if (!command) continue;

		var processed = command.split(/[ \t]*{/);
		var main_command = processed[0].trim();
		var line = main_command.split(/\s+/);

		if (typeof dispatchTable[line[0]] !== 'undefined') {
			dispatchTable[line[0]](line);
		}
	}
	return elements;
}

export default async function convertPlyToJsonBinary(data) {
	const buf = await data.arrayBuffer();
	const [header, view] = await parsePlyBuffer(buf);
	let elements = parseHeader(header);
	console.log(elements);
	offset = 0;

	const shapes = [];
	const psGeometry = transformToPS(elements, view);
	if (psGeometry && Object.keys(psGeometry).length > 0) {
		shapes.push({ "Shape": { "-geometry": psGeometry } });
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
			  { "@name":"description", "@content":"Template for an Point Set" },
			  { "@name":"creator", "@content":"John Carlson" },
			  { "@name":"created", "@content":"6 December 2025" },
			  { "@name":"generator", "@content":"https://coderextreme.net/X3DJSONLD/src/main/node/ConvertPlyToJsonBinary.js" },
			  { "@name":"license", "@content":"../license.html" },
			  { "@name":"identifier", "@content":"https://coderextreme.net/X3DJSONLD/src/main/node/template.x3dj" },
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

function readfloat(name, view) {
	const f = view.getFloat32(offset, true); offset += 4;
	// console.log(name, f);
	return f;
}

function read3float(name, view) {
	const x = readfloat("x", view);
	const y = readfloat("y", view);
	const z = readfloat("z", view);
	return [x, y, z];
}

function read4float(name, view) {
	const r = readfloat("r", view);
	const g = readfloat("g", view);
	const b = readfloat("b", view);
	const a = readfloat("a", view);
	return [r, g, b, a];
}

function transformToPS(elements, view) {
	var point = [];
	var normal = [];
	var color = [];
	var scale = [];
	var rotation = [];
	var PS = {};
	for (let e in elements) {
		const type = elements[e].type;
		const properties = elements[e].property;
		const number = elements[e].number;
		for (let i = 0; i < number; i++) {
			for (let pi = 0; pi < properties.length; pi++) {
				let f = readfloat(properties[pi].name, view);
				switch (properties[pi].name) {
				case 'x':
				case 'y':
				case 'z':
					point.push(f);
					break;
				case 'nx':
				case 'ny':
				case 'nz':
					normal.push(f);
					break;
				case 'f_dc_0':
				case 'f_dc_1':
				case 'f_dc_2':
				case 'opacity':
					color.push(f);
					break;
				case 'scale_0':
				case 'scale_1':
				case 'scale_2':
					scale.push(f);
					break;
				case 'rot_0':
				case 'rot_1':
				case 'rot_2':
				case 'rot_3':
					rotation.push(f);
					break;
				}
			}
		}
	}

	if (typeof PS["PointSet"] === "undefined") {
		PS["PointSet" ] = {};
	}
	PS["PointSet" ]["-coord"] = { "Coordinate" : { "@point" : point }};

	if (color.length > 0) {
		PS["PointSet" ]["-color"] = { "ColorRGBA" : { "@color" : color }};
	}
	return PS;
}
