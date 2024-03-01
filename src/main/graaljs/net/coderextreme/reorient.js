var System = Java.type("java.lang.System");
System.setProperty("polyglot.js.nashorn-compat", "true");

load('data/X3Dautoclass.js');

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
	var orientations = traverseChildrenSceneGraph(X3D0.getScene().getChildren());
	// print(orientations);
	try {
		for (var oi in orientations) {
			transformOrientationInterpolators(orientations[oi]);
		}
	} catch (e) {
		print(e);
	}
	// X3D0 is defined in previously loaded file
	X3D0.toFileX3D("reorient.x3d");
}

function traverseChildrenSceneGraph(children) {
	var orientations = [];
	if (children != null) {
		for (var child in children) {
			var orientations = [...orientations, ...traverseChildSceneGraph(children[child])];
		}
	}
	return orientations;
}

function traverseChildSceneGraph(child) {
	if (child instanceof OrientationInterpolator) {
		return [child];
	} else if (child != null) {
		if ("getChildrenList" in child) {
			var children = child.getChildrenList();
			return traverseChildrenSceneGraph(children);
		} else {
			// print("No children, child is "+child);
			return [];
		}
	} else {
		print("Null child");
		return [];
	}
	return [];
}

function transformKeyValue(keyValue, key) {
	var newKeyValue = keyValue.map(item => item);
	// negate z axis
	newKeyValue[key+2] = - newKeyValue[key+2];
	// negate rotation
	newKeyValue[key+3] = - newKeyValue[key+3];
	return Java.to(newKeyValue, Java.type("double[]"));
}

function transformOrientationInterpolators(node) {
	if (node instanceof OrientationInterpolator) {
		var oi = node.getKeyValue();
		print("in ", oi);
		for (var el = 0; el < oi.length; el += 4) {
			oi = transformKeyValue(oi, el);
		}
		print("out", oi);
		node.setKeyValue(oi);
	} else if (node != null) {
		// print("Unhandled node is "+node);
	} else {
		print("Node is null");
		return false;
	}
	return true;
}
