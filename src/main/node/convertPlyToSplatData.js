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

  const header = new DataView(buffer, 0);
  const decoder = new TextDecoder('utf-8');
  const header_text = decoder.decode(new DataView(header.buffer, 0, binaryStart));

  const view = new DataView(buffer, binaryStart);
  return [header_text, view];
}

function parseHeader(header) {
	let elements = [];
	let currentElement = null;
	let dispatchTable = {
		ply : function (line) {
			elements.push({ type: "ply_info", data: { version: line[1] }});
		},
		format : function(line) {
			elements.push({ type: "format", data: { encoding: line[1], charset: line[2], version: line[3] }});
		},
		comment : function(line) {
			elements.push({ type: "comment", data: { text: line.slice(1).join(" ") }});
		},
		element : function(line) {
			currentElement = {
				type: "element",
				name: line[1],
				count: parseInt(line[2]),
				properties: [],
			};
			elements.push(currentElement);
		},
		property : function(line) {
			if (!currentElement) return;
			let typeDef = {
				type: line[1],
				name: line[line.length - 1],
				originalLine: line.slice(1)
			};
			currentElement.properties.push(typeDef);
		},
		end_header : function(line) {}
	}
	let lines = header.split(/[\r\n]+/g).filter(l => l.trim() !== "");

	for (let u = 0; u < lines.length; u++) {
		let command = lines[u].trim();
		if (!command) continue;

		let line = command.split(/\s+/).map(p => p.replace(/[{}]/g, ''));

		if (typeof dispatchTable[line[0]] !== 'undefined') {
			dispatchTable[line[0]](line);
		}
	}
	return elements;
}

function readFloat(view) {
	const f = view.getFloat32(offset, true);
	offset += 4;
	return f;
}

// --- In convertPlyToSplatData.js, inside readPointData ---

function readPointData(properties, view) {
     let splat = {
        position: [0, 0, 0],
        rotation: [0, 0, 0, 1],
        scale: [1, 1, 1],
        shCoefficients: [],
        opacity: 1.0
    };

    // Read data sequentially according to the property order defined in the header
    for (let pi = 0; pi < properties.length; pi++) {
        const propDef = properties[pi];

        // CRITICAL CHECK: Only read data (consuming 4 bytes via readFloat) if the property type is explicitly 'float'
        if (propDef.type === 'float') {
            const value = readFloat(view); // Consumes 4 bytes

            switch (propDef.name) {
                case 'x': splat.position[0] = value; break;
                case 'y': splat.position[1] = value; break;
                case 'z': splat.position[2] = value; break;

                case 'rot_0': splat.rotation[0] = value; break;
                case 'rot_1': splat.rotation[1] = value; break;
                case 'rot_2': splat.rotation[2] = value; break;
                case 'rot_3': splat.rotation[3] = value; break;

                case 'scale_0': splat.scale[0] = value; break;
                case 'scale_1': splat.scale[1] = value; break;
                case 'scale_2': splat.scale[2] = value; break;

                case 'opacity': splat.opacity = value; break;

                default:
                    if (propDef.name.startsWith('f_dc_') || propDef.name.startsWith('f_rest_')) {
                        splat.shCoefficients.push(value);
                    }
            }
        } else {
            // If the property type is NOT float (e.g., list, uchar, int), we DO NOT call readFloat(view),
            // so the offset does NOT advance for this property. This assumes non-float properties
            // are metadata or structural elements we are supposed to skip reading the value for.
            console.warn(`Skipping reading value for non-float property: ${propDef.name} (${propDef.type}). Offset NOT advanced.`);
        }
    }
	return splat;
}

function transformToSplatData(elements, view) {
	let elementData = elements.find(e => e.type === 'element' && e.name === 'vertex');

    if (!elementData) {
        throw new Error("Could not find 'element vertex' definition.");
    }

    const properties = elementData.properties;
    const number = elementData.count;

    const splatData = {
        points: [],
        header: { count: number, properties: properties.map(p => p.name) }
    };

	for (let n = 0; n < number; n++) {
		const splat = readPointData(properties, view);
		splatData.points.push(splat);
	}

	return splatData;
}

export default async function convertPlyToSplatData(data) {
	const buf = await data.arrayBuffer();
	const [header, view] = await parsePlyBuffer(buf);
	let elements = parseHeader(header);

	const splatData = transformToSplatData(elements, view);

	return splatData;
}
