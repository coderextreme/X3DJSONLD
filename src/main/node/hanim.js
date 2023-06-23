var fs = require('fs');
skeleton = {}

let DOM = fs.readFileSync("../__/specifications/X3dUnifiedObjectModel_4_0.json");
let SimpleTypes = JSON.parse(DOM)["X3dUnifiedObjectModel"]['-children'][0]["SimpleTypeEnumerations"]['-children'];
// console.log(SimpleTypes)
for (let ST in SimpleTypes) {
	let SimpleType = SimpleTypes[ST]["SimpleType"]
	// console.log(SimpleType)
	if (typeof SimpleType !== 'undefined' && typeof SimpleType["@name"] !== 'undefined') {
		
		if (SimpleType["@name"] === "hanimJointNameValues" || SimpleType["@name"] === "hanimSegmentNameValues") {
			console.log(SimpleType["@name"])
			for (let enumerationsIndex in SimpleType["-children"]) {
				let enumeration = SimpleType["-children"][enumerationsIndex]["enumeration"];
				console.log(JSON.stringify(skeleton, null, 2))
				insertIntoTree(skeleton, enumeration['@parent'], enumeration['@value'])
			}
		}
	}
}

function insertIntoTree(tree, parent, child) {
	// console.log(tree, parent, child);
	console.log(JSON.stringify(tree, null, 2))
	if (Object.keys(tree).length === 0) {
		if (typeof parent !== 'undefined') {
			tree[parent] = []
		} else {
			tree[child] = [];
		}
	} else {
		for (n in tree) {
			if (isNaN(n)) {
				let node = tree[n];
				if (n !== parent) {
					//console.log(node, parent, child);
					insertIntoTree(node, parent, child);
				} else { // found
					//console.log(node, parent, child);
					tree[parent][child] = [];
					break;
					
				}						
			}
		}
	}
	return tree;
}
console.log(skeleton);
