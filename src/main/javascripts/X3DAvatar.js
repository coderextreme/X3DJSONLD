function LOG () {
    Browser.print('X3D Avatar', ...arguments);
}

const addHAnimJoint = function(node) {
	const hAnimJoint = Browser.currentScene.createNode('HAnimJoint');
	Browser.currentScene.addNamedNode(node.id, hAnimJoint);
	updateJointPosition(node, hAnimJoint);
	return hAnimJoint;
}

const updateJointPosition = function(node, hAnimJoint) {
	hAnimJoint.center = new SFVec3f(node.x, node.y, node.z);
	hAnimJoint.translation = new SFVec3f(node.offsetx, node.offsety, node.offsetz);
}

const updateJointSphere = function(node, hAnimSegment) {
	// update Sphere color
	hAnimSegment.children[0].children[0].appearance.material.diffuseColor = new SFColor(node.red, node.green, node.blue);
	hAnimSegment.children[0].children[0].appearance.material.emissiveColor = new SFColor(node.red, node.green, node.blue);
	
	// update Sphere position
	hAnimSegment.children[0].translation = new SFVec3f(node.x + node.offsetx, node.y + node.offsety, node.z + node.offsetz);
}

const addHAnimSegment = function(link, sourceNode, targetNode) {
	// set up bone geometry
	const shape = Browser.currentScene.createNode('Shape');
	const appearance = Browser.currentScene.createNode('Appearance');
	const material = Browser.currentScene.createNode('Material');
	const hAnimSegment = Browser.currentScene.createNode('HAnimSegment');
	Browser.currentScene.addNamedNode('trans'+link, hAnimSegment);

	// set up joint geometry
	const transform = Browser.currentScene.createNode('Transform');
	const shape2 = Browser.currentScene.createNode('Shape');
	const appearance2 = Browser.currentScene.createNode('Appearance');
	const material2 = Browser.currentScene.createNode('Material');
	const sphere = Browser.currentScene.createNode('Sphere');

	sphere.radius = 3;
	material2.transparency = 0.0; // Start fully opaque
	appearance2.material = material2;
	shape2.geometry = sphere;
	shape2.appearance = appearance2;
	addChild(transform, shape2);
	addChild(hAnimSegment, transform);

	material.diffuseColor = new SFColor(1.0, 1.0, 1.0);
	material.emissiveColor = new SFColor(1.0, 1.0, 1.0);
	appearance.material = material;
	const lineSet = Browser.currentScene.createNode('LineSet');
	const coordinate = Browser.currentScene.createNode('Coordinate');
	if (coordinate && typeof sourceNode.x !== 'undefined') {
		coordinate.point = new MFVec3f(
			new SFVec3f(
				sourceNode.x + sourceNode.offsetx,
				sourceNode.y + sourceNode.offsety,
				sourceNode.z + sourceNode.offsetz),
			new SFVec3f(
				targetNode.x + targetNode.offsetx,
				targetNode.y + targetNode.offsety,
				targetNode.z + targetNode.offsetz));
	}
	Browser.currentScene.addNamedNode('point'+link, coordinate);
	lineSet.coord = coordinate;
	lineSet.vertexCount = new MFInt32(2);
	shape.appearance = appearance;
	shape.geometry = lineSet;
	addChild(hAnimSegment, shape);
	/*
	LOG("LineSet created", JSON.stringify({
	  source: [sourceNode.x, sourceNode.y, sourceNode.z],
	  target: [targetNode.x, targetNode.y, targetNode.z],
	  vertexCount: lineSet.vertexCount,
	  hasCoord: lineSet.coord !== null
	}));
	*/
	return hAnimSegment;
}

const addChild = function(node, value) {
	node.children.push(value);
}

const ensureHumanoidExists = function(nick, humanoidGroup) {
  let hAnimHumanoid = null;
  let humanoidDEF = nick+'_humanoid';
  try {
    hAnimHumanoid = Browser.currentScene.getNamedNode(humanoidDEF);
  } catch (e) {
    // Create the hAnimHumanoid if it doesn't exist
    hAnimHumanoid = Browser.currentScene.createNode('HAnimHumanoid');
    Browser.currentScene.addNamedNode(humanoidDEF, hAnimHumanoid);

    humanoidGroup.children.push(hAnimHumanoid);
  }
  return hAnimHumanoid;
}

const x3d_serveravatar = function(usernumber, dml, allowedToken) {
      let header = ["0", "0"];
      let command = ["DUMMY"];
      dml.forEach((line, index) => {
        let header_command = line.split(",");
	if (header_command.length == 1) {
		command = header_command[0].split("|");
	} else if (header_command.length == 2) {
      		header = header_command[0].split("|");
		command = header_command[1].split("|");
	}

	let timestamp = parseInt(header[0]);
	let sequence = parseInt(header[1]);
	const NICK = 0;
	const GEOMETRY = 1;
	const ID = 2;
	const SQL = 3;
	const RED = 4;
	const SOURCE = 4;
	const GREEN = 5;
	const TARGET = 5;
	const BLUE = 6;
	const X = 7;
	const Y = 8;
	const Z = 9;
	const OFFSET_X = 10;
	const OFFSET_Y = 11;
	const OFFSET_Z = 12;
	let nick = command[NICK];


	if (command[GEOMETRY] === "J") { // JOINT
		let node = nodes.find(n => n.id === nick+command[ID]);
		if (!node) {
			node = {};
		}
		node.id = nick+command[ID];
		node.sql = command[SQL];
		node.red = parseFloat(command[RED]);
		node.green = parseFloat(command[GREEN]);
		node.blue = parseFloat(command[BLUE]);
		node.x = 10 * parseFloat(command[X]);
		node.y = 10 * parseFloat(command[Y]);
		node.z = parseFloat(command[Z]);
		node.offsetx = parseFloat(command[OFFSET_X]);
		node.offsety = parseFloat(command[OFFSET_Y]);
		node.offsetz = parseFloat(command[OFFSET_Z]);

		// TODO humanoidGroup must be present in scene
		let humanoidGroup = Browser.currentScene.getNamedNode('humanoidGroup');
		let hAnimHumanoid = ensureHumanoidExists(nick, humanoidGroup);
		let hAnimJoint = null;
		try {
			hAnimJoint = Browser.currentScene.getNamedNode(node.id);
		} catch (e) {
			hAnimJoint = null;
		}
		if (hAnimJoint === null) {
			hAnimJoint = addHAnimJoint(node);
		}
		if (node.sql === 'U') {  // UPDATE
			updateJointPosition(node, hAnimJoint);
		}
		if (!hAnimJoints[node.id]) {
			if (hAnimHumanoid !== null) {
				hAnimHumanoid.skeleton.push(hAnimJoint);
				// LOG("SUCCESSFUL JOINT", node.id, node.x, node.y, node.z);
			} else {
				LOG("FATAL JOINT", node.id);
			}
			hAnimJoints[node.id] = hAnimJoint;
			nodes.push(node);
		} else {
			hAnimJoints[node.id] = hAnimJoint;
		}
	} else if (command[GEOMETRY] === "S") {  // SEGMENT
		const sourceNode = nodes.find(n => n.id === nick+command[SOURCE]);
		const targetNode = nodes.find(n => n.id === nick+command[TARGET]);
		let sql = command[SQL];
		let link = nick+command[SOURCE]+command[TARGET];
		if (sourceNode && targetNode) {
		  let hAnimSegment = null;
		  try {
		  	hAnimSegment = Browser.currentScene.getNamedNode('trans'+link);
		  } catch (e) {
		  	hAnimSegment = null;
		  }
		  if (hAnimSegment === null) {
			hAnimSegment = addHAnimSegment(link, sourceNode, targetNode);
			if (hAnimSegment !== null && !linksShapes[`${sourceNode.id}-${targetNode.id}-${link}`]) {
		  		linksShapes[`${sourceNode.id}-${targetNode.id}-${link}`] = hAnimSegment;
				addChild(hAnimJoints[sourceNode.id], hAnimSegment);
				LOG("SUCCESSFUL SEGMENT", link, sourceNode.id, targetNode.id);
			}
		  }
		  updateJointSphere(sourceNode, hAnimSegment);
		  if (sql === 'U') { // UPDATE
			  let coordinate = Browser.currentScene.getNamedNode('point'+link);
			  if (coordinate) {
				  if (typeof sourceNode.x !== 'undefined') {
					coordinate.point = new MFVec3f(
						new SFVec3f(
							sourceNode.x + sourceNode.offsetx,
							sourceNode.y + sourceNode.offsety,
							sourceNode.z + sourceNode.offsetz),
						new SFVec3f(
							targetNode.x + targetNode.offsetx,
							targetNode.y + targetNode.offsety,
							targetNode.z + targetNode.offsetz));
					// LOG("SUCCESSFUL COORDINATE", link, coordinate.point);
				  } else {
					LOG("FATAL COORDINATE", link, `${sourceNode.id} ${sourceNode.x} ${sourceNode.y} ${sourceNode.z}, ${targetNode.id} ${targetNode.x} ${targetNode.y} ${targetNode.z}`);
				  }
						
			  } else {
				LOG("COULDN'T FIND COORDINATE", link)
		          }

		  }
		  // Create arrow for directed relationship
		  //createArrow(sourceNode, targetNode, link);

		  // Create property label for link
		  //createArcLabel(link, sourceNode, targetNode, link);
		}
	} else {
		Browser.print("DEBUG", line);
	}
      });
      /*
      var xml = Browser.currentScene.toXMLString();
      if (document.querySelector("#x3d").innerHTML !== xml) {
      	document.querySelector("#x3d").innerHTML = xml;
      }
      */
}

const reconnect = function (x3duser) {
    'use strict';
	try {
	        x3duser._sockets = x3duser._sessions._sockets;
		LOG("reconnect!");
		let UserGlobalSessions = x3duser.updateSessions();
		for (let g in UserGlobalSessions) {
			let session = UserGlobalSessions[g];
			let sessionname = session['Session Petname'];
			let sessiontoken = session['Session Token'];
			let socket = x3duser._sockets[sessionname];
			if (socket !== null) {
				if (x3d_serveravatar !== null) {
					x3duser._sockets[sessionname].on('x3d_serveravatar', x3d_serveravatar);
				} else {
					LOG("reconnect Can't service x3d_serveravatar", sessionname, sessiontoken);
				}
			} else {
				LOG("Couldn't connect to", sessionlink);
			}
		}
	} catch (e) {
		LOG("ERROR RECONNECTING", e);
	}
};


reconnect(x3duser);
