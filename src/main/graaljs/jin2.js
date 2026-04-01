var System = Java.type("java.lang.System");
System.setProperty("polyglot.js.nashorn-compat", "true");

load('data/X3Dautoclass.js');
// imports X3D0


var HUMANCHILD = 3;
var height = 1.87;
var scaledHeight = 0;
var x = 0;
var miny = 0;
var l_x = 0;
var l_z = 0;
var r_x = 0;
var r_z = 0;
var maxy = 0;
var z = 0;
var scale = [ 1, 1, 1 ];
var yscale = 1;

main();

function main() {
	var count = 0;
	var humanoid = traverseChildrenSceneGraph(X3D0.getScene().getChildren());
	count++;
	print("humanoid", typeof humanoid, humanoid, JSON.stringify(humanoid));
	print(humanoid.getName());
	print(humanoid.getDEF());
	scale = humanoid.getScale();
	print("scale out", scale);
	humanoid.setScale(Java.to([ 1, 1, 1 ], Java.type("double[]")));
	print("scale in", humanoid.getScale());
	var root = humanoid.getSkeleton()[0];
	// for (var i in root) { print(i); }
	print("root", root, JSON.stringify(root), root.getName());
	var center = root.getCenter();
	print("center", center);
	print(center[0]+" "+center[1]+" "+center[2]);
	x = center[0];
	miny = center[1];
	maxy = center[1];
	z = center[2];
	var translation = [0, 0, 0];
	try {
		centering(root);
		x = (l_x + r_x) / 2;
		z = (l_z + r_z) / 2;
		yscale = maxy - miny;
		scaledHeight = yscale * scale[1];
		print("max y "+maxy+" min y "+miny+" yscale "+yscale+" height "+height);
		transformNode(root, translation, scale);
	} catch (e) {
		print(e);
	}
	
	X3D0.toFileX3D(humanoid.getName()+"scaled"+count+".x3d");

	HUMANCHILD = 3;
	height = 1.87;
	scaledHeight = 0;
	x = 0;
	miny = 0;
	l_x = 0;
	l_z = 0;
	r_x = 0;
	r_z = 0;
	maxy = 0;
	z = 0;
	scale = [ 1, 1, 1 ];
	yscale = 1;
}

function traverseChildrenSceneGraph(children) {
	if (children !== null) {
		// print("children", typeof children, JSON.stringify(children));
		for (var child in children) {
			var humanoid = traverseChildSceneGraph(children[child]);
			if (humanoid) {
				print("Unpacking child in "+child+" succeeded");
				return humanoid;
			} else {
				print("Unpacking child in "+child+" failed");
			}
		}
	}
	return null;
}

function traverseChildSceneGraph(child) {
	if (child instanceof HAnimHumanoid) {
		print("humanoid", typeof child, JSON.stringify(child));
		return child;
	} else if (child !== null) {
		if ("getChildrenList" in child) {
			var children = child.getChildrenList();
			print("children traverse", typeof child, JSON.stringify(child));
			return traverseChildrenSceneGraph(children);
		} else {
			print("No children, child is "+child);
			return null;
		}
	} else {
		print("Null child is "+child);
		return null;
	}
	return null;
}
function centering(joint) {
	var center = joint.getCenter();
	var name = joint.getName();
	// print(name);
	// print(center[0]+" "+center[1]+" "+center[2]+" ");
	switch (name) {
		/*
		case HAnimJoint.NAME_L_TARSAL_DISTAL_INTERPHALANGEAL_5:
			l_x = center[0];
			l_z = center[2];
			break;
		case HAnimJoint.NAME_R_TARSAL_DISTAL_INTERPHALANGEAL_5:
			r_x = center[0];
			r_z = center[2];
			break;
		*/
		case HAnimJoint.NAME_HUMANOID_ROOT:
			l_x = center[0];
			l_z = center[2];
			r_x = center[0];
			r_z = center[2];
			break;
	}
	if (center[1] >= maxy) {
		maxy = center[1];
	}
	if (center[1] <= miny) {
		miny = center[1];
	}
	var children = joint.getChildrenList();
	for (var child in children) {
		if (children[child] instanceof HAnimJoint) {
			centering(children[child]);
		}
	}
}
function transformPoint(point, point_offset, translation, scale) {
	var newPoint = point.map(item => item);
	print("");
	print("point_offset", point_offset);
	print("in  trans", translation[0], translation[1], translation[2]);
	print("in  scale", scale[0], scale[1], scale[2]);
	print("in  point", point[point_offset+0], point[point_offset+1], point[point_offset+2]);

	newPoint[point_offset+0] = newPoint[point_offset+0] + translation[0];
	newPoint[point_offset+1] = newPoint[point_offset+1] + translation[1];
	newPoint[point_offset+2] = newPoint[point_offset+2] + translation[2];

	print("mid point", newPoint[point_offset+0], newPoint[point_offset+1], newPoint[point_offset+2]);
	print("out scale", scale[0], scale[1], scale[2]);

	newPoint[point_offset+0] = newPoint[point_offset+0] * scale[0];
	newPoint[point_offset+1] = newPoint[point_offset+1] * scale[1];
	newPoint[point_offset+2] = newPoint[point_offset+2] * scale[2];

	print("out point", newPoint[point_offset+0], newPoint[point_offset+1], newPoint[point_offset+2]);
	return Java.to(newPoint, Java.type("double[]"));
}
function transformNode(node, parentTranslation, scale) {
	var storedTranslation = [parentTranslation[0], parentTranslation[1], parentTranslation[2]];
	var children = null;
	if (node instanceof HAnimJoint) {
		var joint = node;

		var translation = joint.getTranslation();
		storedTranslation[0] += translation[0];
		storedTranslation[1] += translation[1];
		storedTranslation[2] += translation[2];
		print("is a joint", storedTranslation);

		var center = joint.getCenter();
		center = transformPoint(center, 0, storedTranslation, scale);
		joint.setCenter(center);
		joint.setTranslation(Java.to([0, 0, 0], Java.type("double[]")));

		children = joint.getChildrenList();
	} else if (node instanceof HAnimSite) {
		var site = node;

		var translation = site.getTranslation();
		storedTranslation[0] += translation[0];
		storedTranslation[1] += translation[1];
		storedTranslation[2] += translation[2];

		var center = site.getCenter();
		center = transformPoint(center, 0, storedTranslation, scale);
		site.setCenter(center);
		site.setTranslation(Java.to([0, 0, 0], Java.type("double[]")));

		children = site.getChildrenList();
	} else if (node instanceof HAnimSegment) {
		var segment = node;
		var coord = segment.getCoord();
		if (coord !== null) {
			if (!transformNode(coord, storedTranslation, scale)) {
				print("Unpacking coord in transformNode() HAnimSegment failed");
			}
		}
		var displacers = segment.getDisplacersList();
		if (displacers !== null) {
			for (var displacer in displacers) {
				if (!transformNode(displacers[displacer], storedTranslation, scale)) {
					print("Unpacking displacer in HAnimSegment failed");
				}
			}
		}
		children = segment.getChildrenList();
	} else if (node instanceof Group) {
		var group = node;
		children = group.getChildrenList();
	} else if (node instanceof Transform) {
		var transform = node;
		var translation = transform.getTranslation();
		storedTranslation[0] += translation[0];
		storedTranslation[1] += translation[1];
		storedTranslation[2] += translation[2];
		transform.setTranslation(Java.to([0, 0, 0], Java.type("double[]")));

		children = transform.getChildrenList();
	} else if (node instanceof Shape) {
		var shape = node;
		var appearance = shape.getAppearance();
		if (!transformNode(appearance, storedTranslation, scale)) {
			print("Unpacking appearance in Shape failed");
		}
		var geometry = shape.getGeometry();
		if (!transformNode(geometry, storedTranslation, scale)) {
			print("Unpacking geometry in Shape failed");
		}
	} else if (node instanceof IndexedFaceSet) {
		var ifs = node;
		var coord = ifs.getCoord();
		var coordIndex = ifs.getCoordIndex();
		if (coordIndex.length > 700) {
			print("coordIndex "+coordIndex.length);
			var texCoordIndex = ifs.getTexCoordIndex();
			print("texCoordIndex "+texCoordIndex.length);
		}
		if (coord !== null && !transformNode(coord, storedTranslation, scale)) {
			print("Unpacking coord in IndexedFaceSet failed");
		}
	} else if (node instanceof Appearance) {
	} else if (node instanceof Coordinate) {
		var coordinate = node;
		var point = coordinate.getPoint();
		// print("point "+point.length);
		for (var p = 0; p < point.length; p += 3) {
			point = transformPoint(point, p, storedTranslation, scale);
		}
		coordinate.setPoint(point);
	} else if (node !== null) {
		print("Unhandled node is "+node);
	} else {
		print("Node is "+node);
		return false;
	}
	if (children !== null) {
		for (var child in children) {
			var copyTranslation = [storedTranslation[0], storedTranslation[1], storedTranslation[2]];
			if (children[child] === null || !transformNode(children[child], copyTranslation, scale)) {
				print("Unpacking child "+children[child]+" failed");
			}
		}
	}
	return true;
}
