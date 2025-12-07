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

function read3float(name, view) {
	const x = view.getFloat32(offset, true); offset += 4;
	const y = view.getFloat32(offset, true); offset += 4;
	const z = view.getFloat32(offset, true); offset += 4;
	if (name === 'normal') {
  		//console.log(name, x, y, z);
	}
	return [x, y, z];
}

function read4float(name, view) {
	const r = view.getFloat32(offset, true); offset += 4;
	const g = view.getFloat32(offset, true); offset += 4;
	const b = view.getFloat32(offset, true); offset += 4;
	const a = view.getFloat32(offset, true); offset += 4;
	if (name === 'color') {
  		// console.log(name, r, g, b, a);
	}
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
			let pi = 0;
			// point is 3 flaots, 12 bytee
			let xyz = read3float("point", view);
			point.push(...xyz);
			pi += 3;

			// normals are 3 floats, 12 bytes
			let nxnynz = read3float("normal", view);
			normal.push(...nxnynz);
			pi += 3;

			// color are 4 floats, 16 bytes
			let rgba = read4float("color", view);
			color.push(...rgba);
			pi += 4;

			// scales are 3 floats, 12 bytes
			let sxsysz = read3float("scale", view);
			scale.push(...sxsysz);
			pi += 3;

			// rotations are 4 floats, 16 bytes
			let rxryrzra = read4float("rotation", view);
			color.push(...rxryrzra);
			pi += 4;

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
