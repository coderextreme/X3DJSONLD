import Matrix from './matrix.js';

var protoTable = {};

export default function convertJsonToStl(json) {
	protoTable = {}; // Reset for each conversion
	var LDNodeList = [];
	var LDNode = initializeLDNode(json, "X3D");
	LDNodeList.push(LDNode);
	LDNodeList = toNormals(json, LDNodeList, LDNode);
	if (LDNodeList !== null) {
		var transform = Matrix.translation(0,0,0);
		var output = [];
		transformLDNodesToTriangles(LDNodeList[0], output, transform);
		return output.join("\r\n")+"\r\n";
	} else {
		return null;
	}
}

function initializeLDNode(json, obj) {
	var LDNode = {};
	LDNode.USE = json[obj]["@USE"];
	LDNode.DEF = json[obj]["@DEF"];
	LDNode.nodeName = obj;
	return LDNode;
}

function findLDNodeInList(use, LDNodeList) {
	if (typeof use !== 'undefined') {
		for (var g in LDNodeList) {
			var LDNode = LDNodeList[g];
			if (LDNode.DEF === use) {
				return LDNode;
			}
		}
	}
	return null;
}

function expandProtoInstance(protoInstanceJson, protoTable, parentScopeParams = {}) {
    const protoName = protoInstanceJson['@name'];
    const protoDeclare = protoTable[protoName];
    if (!protoDeclare) {
        console.error("ProtoDeclare not found for name:", protoName);
        return null;
    }

    const instanceParams = {};

    // 1. Get default parameters from ProtoInterface
    if (protoDeclare.ProtoInterface && protoDeclare.ProtoInterface.field) {
        protoDeclare.ProtoInterface.field.forEach(field => {
            const fieldName = field['@name'];
            if (field.hasOwnProperty('@value')) {
                instanceParams[fieldName] = field['@value'];
            } else if (field['-children']) { // Default MFNode/SFNode content
                instanceParams[fieldName] = field['-children'];
            }
        });
    }

    // 2. Apply connections from parent scope (IS on ProtoInstance)
    if (protoInstanceJson.IS && protoInstanceJson.IS.connect) {
        protoInstanceJson.IS.connect.forEach(conn => {
            const nodeField = conn['@nodeField'];
            const protoField = conn['@protoField'];
            if (parentScopeParams.hasOwnProperty(protoField)) {
                instanceParams[nodeField] = parentScopeParams[protoField];
            }
        });
    }

    // 3. Apply direct overrides from fieldValue (highest precedence)
    if (protoInstanceJson.fieldValue) {
        protoInstanceJson.fieldValue.forEach(fv => {
            const fvName = fv['@name'];
            if (fv.hasOwnProperty('@value')) {
                instanceParams[fvName] = fv['@value'];
            } else if (fv['-children']) { // Override MFNode/SFNode content
                instanceParams[fvName] = fv['-children'];
            }
        });
    }

    const protoBody = JSON.parse(JSON.stringify(protoDeclare.ProtoBody));

    function wireUpBody(node, params) {
        if (Array.isArray(node)) {
            node.forEach(item => wireUpBody(item, params));
            return;
        }
        if (typeof node !== 'object' || node === null) return;

        if (node.IS && node.IS.connect) {
            node.IS.connect.forEach(conn => {
                const nodeField = conn['@nodeField'];
                const protoField = conn['@protoField'];
                if (params.hasOwnProperty(protoField)) {
                    const paramValue = params[protoField];

                    if (node['@name']) { // It's a nested ProtoInstance
                        if (!node.fieldValue) node.fieldValue = [];
                        const newFv = { '@name': nodeField };
                        if (Array.isArray(paramValue) && paramValue.length > 0 && typeof paramValue[0] === 'object') {
                            newFv['-children'] = JSON.parse(JSON.stringify(paramValue));
                        } else {
                            newFv['@value'] = paramValue;
                        }
                        node.fieldValue.push(newFv);
                    } else { // It's a regular node
                        if (Array.isArray(paramValue) && paramValue.length > 0 && typeof paramValue[0] === 'object' && paramValue[0] !== null) {
                            if (nodeField === 'children') { // MFNode
                                if (!node['-children']) node['-children'] = [];
                                node['-children'].push(...JSON.parse(JSON.stringify(paramValue)));
                            } else { // SFNode (geometry, appearance, material, etc.)
                                node['-' + nodeField] = JSON.parse(JSON.stringify(paramValue[0]));
                            }
                        } else {
                            node['@' + nodeField] = paramValue;
                        }
                    }
                }
            });
            delete node.IS;
        }

        for (const key in node) {
            if (key === 'IS' || key.startsWith('@') || key.startsWith('#')) continue;
            wireUpBody(node[key], params);
        }
    }

    wireUpBody(protoBody, instanceParams);
    return { expandedBody: protoBody, instanceParams: instanceParams };
}


// This function was modified to properly link component nodes
// (like Coordinate/Normal) to their parent geometry node.
function toNormals(json, LDNodeList, ParentNode, scope = {}) {
	var nodeDispatchTable = {
        ProtoDeclare: function(obj, LDNode) { protoTable[obj['@name']] = obj; },
        ProtoInstance: function(obj, LDNode, currentScope) {
            LDNode.kid = true;
            const expansion = expandProtoInstance(obj, protoTable, currentScope);
            if (expansion) {
                toNormals(expansion.expandedBody, LDNodeList, LDNode, expansion.instanceParams);
            }
        },
		IndexedFaceSet: function(obj,LDNode){ LDNode.normalPerVertex = obj["@normalPerVertex"]; LDNode.kid = true; LDNode.geometry = true; },
		Group: function(obj,LDNode){ LDNode.kid = true; },
		Transform: function(obj,LDNode){ LDNode.kid = true; },
		Shape: function(obj,LDNode){ LDNode.kid = true; },
		Box: function(obj,LDNode){ LDNode.kid = true; LDNode.geometry = true; LDNode.size = [2,2,2]; },
		Sphere: function(obj,LDNode){ LDNode.kid = true; LDNode.geometry = true; LDNode.radius = 1; },
		Cylinder: function(obj,LDNode){ LDNode.kid = true; LDNode.geometry = true; LDNode.radius = 1; LDNode.height = 2; LDNode.bottom = true; LDNode.top = true; LDNode.side = true; },
		Cone: function(obj,LDNode){ LDNode.kid = true; LDNode.geometry = true; LDNode.bottomRadius = 1; LDNode.height = 2; LDNode.bottom = true; LDNode.side = true; },
		Extrusion: function(obj,LDNode){ LDNode.kid = true; LDNode.geometry = true; LDNode.beginCap = true; LDNode.endCap = true; LDNode.solid = true; LDNode.crossSection = [[1,1],[1,-1],[-1,-1],[-1,1],[1,1]]; LDNode.spine = [[0,0,0],[0,1,0]]; LDNode.orientation = []; LDNode.extrusionScale = []; },
		IndexedTriangleSet: function(obj,LDNode){ LDNode.normalPerVertex = obj["@normalPerVertex"]; LDNode.kid = true; LDNode.geometry = true; },
		IndexedTriangleStripSet: function(obj,LDNode){ LDNode.normalPerVertex = obj["@normalPerVertex"]; LDNode.kid = true; LDNode.geometry = true; },
		IndexedTriangleFanSet: function(obj,LDNode){ LDNode.normalPerVertex = obj["@normalPerVertex"]; LDNode.kid = true; LDNode.geometry = true; },
		IndexedLineSet: function(obj,LDNode){ LDNode.geometry = false; },
		Text: function(obj,LDNode){ LDNode.geometry = false; },
        Script: function(obj,LDNode){}, StringSensor: function(obj,LDNode){}, TouchSensor: function(obj,LDNode){},
        // These are now just markers for the linking logic below
		Normal: function(obj,LDNode){ LDNode.child = true; },
		Coordinate: function(obj,LDNode){ LDNode.child = true; }
	};
	var fieldDispatchTable = {
		"@scale" : function(obj, LDNode) { if (typeof obj === 'string') { obj = obj.split(/[ \t,]+/); } if (LDNode.nodeName === 'Extrusion') { var len = obj.length/2; LDNode.extrusionScale = []; for (var o=0, off=-1; o < len; o++) { LDNode.extrusionScale[o] = [parseFloat(obj[++off]), parseFloat(obj[++off])]; } } else { LDNode.scale = Matrix.scale(obj[0], obj[1], obj[2]); } },
		"@rotation": function(obj,LDNode){ if(typeof obj === 'string'){ obj = obj.split(/[ \t,]+/); } LDNode.quaternion = Matrix.quaternion(obj[0], obj[1], obj[2], obj[3]); },
		"@translation": function(obj,LDNode){ if(typeof obj === 'string'){ obj = obj.split(/[ \t,]+/); } LDNode.translation = Matrix.translation(obj[0], obj[1], obj[2]); },
		"@normalPerVertex": function(obj,LDNode){ LDNode.normalPerVertex = obj; },
		"@size": function(obj,LDNode){ LDNode.size = obj; },
		"@radius": function(obj,LDNode){ LDNode.radius = parseFloat(obj); },
		"@height": function(obj,LDNode){ LDNode.height = parseFloat(obj); },
		"@bottomRadius": function(obj,LDNode){ LDNode.bottomRadius = parseFloat(obj); },
		"@bottom": function(obj,LDNode){ LDNode.bottom = obj; }, "@top": function(obj,LDNode){ LDNode.top = obj; }, "@side": function(obj,LDNode){ LDNode.side = obj; },
		"@beginCap": function(obj,LDNode){ LDNode.beginCap = obj; }, "@endCap": function(obj,LDNode){ LDNode.endCap = obj; }, "@solid": function(obj,LDNode){ LDNode.solid = obj; },
		"@crossSection": function(obj,LDNode){ var len = obj.length/2; LDNode.crossSection = []; for (var o=0,off=-1; o<len; o++) { LDNode.crossSection[o] = [obj[++off], obj[++off]]; } },
		"@spine": function(obj,LDNode){ var len = obj.length/3; LDNode.spine = []; for (var o=0,off=-1; o<len; o++) { LDNode.spine[o] = [obj[++off], obj[++off], obj[++off]]; } },
		"@orientation": function(obj,LDNode){ var len = obj.length/4; LDNode.orientation = []; for (var o=0,off=-1; o<len; o++) { LDNode.orientation[o] = [obj[++off], obj[++off], obj[++off], obj[++off]]; } },
		"@vector": function(obj,LDNode){ var len = obj.length/3; LDNode.vector = []; for(var o=0,off=-1; o < len; o++){ if(typeof LDNode.vector[o] === 'undefined'){LDNode.vector[o]=[];} LDNode.vector[o][0]=obj[++off]; LDNode.vector[o][1]=obj[++off]; LDNode.vector[o][2]=obj[++off]; } },
		"@point": function(obj,LDNode){ var len = obj.length/3; LDNode.point = []; for(var o=0,off=-1; o < len; o++){ if(typeof LDNode.point[o] === 'undefined'){LDNode.point[o]=[];} LDNode.point[o][0]=obj[++off]; LDNode.point[o][1]=obj[++off]; LDNode.point[o][2]=obj[++off]; } },
		"@normalIndex": function(obj,LDNode){ var f=0; LDNode.normalIndex=[]; for(var o=0; o<obj.length; o++){ if(obj[o] === -1){ f++; continue; } if(typeof LDNode.normalIndex[f]==='undefined'){LDNode.normalIndex[f]=[];} LDNode.normalIndex[f].push(obj[o]); if(LDNode.normalPerVertex===false){f++;} } },
		"@coordIndex": function(obj,LDNode){ var f=0; LDNode.coordIndex=[]; for(var o=0; o<obj.length; o++){ if(obj[o] === -1){ f++; } else { if(typeof LDNode.coordIndex[f]==='undefined'){LDNode.coordIndex[f]=[];} LDNode.coordIndex[f].push(obj[o]); } } },
		"@index": function(obj,LDNode){ LDNode.index=[]; var f=-1; switch(LDNode.nodeName){ case 'IndexedTriangleSet': for(var o=0;o<obj.length;o++){ if(o%3===0){f++;} if(typeof LDNode.index[f]==='undefined'){LDNode.index[f]=[];} LDNode.index[f].push(obj[o]);} break; case 'IndexedTriangleStripSet': for(var o=2;o<obj.length;o++){ if(obj[o]===-1){ o+=3; if(o>=obj.length){break;} } f++; LDNode.index[f]=[]; LDNode.index[f].push(obj[o-2]); LDNode.index[f].push(obj[o-1]); LDNode.index[f].push(obj[o]);} break; case 'IndexedTriangleFanSet': var center=0; for(var o=2;o<obj.length;o++){ if(obj[o]===-1){ center=o+1; o+=3; if(o>=obj.length){break;} } f++; LDNode.index[f]=[]; LDNode.index[f].push(obj[center]); LDNode.index[f].push(obj[o-1]); LDNode.index[f].push(obj[o]);} break; } }
	};

    for (const attrName in json) { if (fieldDispatchTable[attrName]) { fieldDispatchTable[attrName](json[attrName], ParentNode); } }

    for (const key in json) {
        if (key.startsWith('@') || key.startsWith('#') || fieldDispatchTable[key] || key === 'IS') continue;
        const nodeName = key.startsWith('-') ? key.substring(1) : key;
        const nodeData = json[key];

        if (nodeDispatchTable[nodeName]) {
            const items = Array.isArray(nodeData) ? nodeData : [nodeData];
            items.forEach(item => {
                var newNode = findLDNodeInList(item["@USE"], LDNodeList);
                if (newNode === null) {
                    newNode = initializeLDNode({ [nodeName]: item }, nodeName);
                    LDNodeList.push(newNode);
                }
                nodeDispatchTable[nodeName](item, newNode, scope);

                // FIX: This logic now correctly links component nodes (Coordinate, Normal)
                // to their parent geometry node.
                if (newNode.child && ParentNode) {
                    ParentNode[newNode.nodeName] = newNode;
                    delete newNode.child; // cleanup marker
                } else if (newNode.kid && ParentNode && ParentNode !== newNode) {
                    if (!ParentNode.kids) ParentNode.kids = [];
                    ParentNode.kids.push(newNode);
                }

                if (nodeName !== 'ProtoInstance') {
                    toNormals(item, LDNodeList, newNode, scope);
                }
            });
        } else if (typeof nodeData === 'object' && nodeData !== null) {
            toNormals(nodeData, LDNodeList, ParentNode, scope);
        }
    }
	return LDNodeList;
}

// vector math and print helpers
function vec_sub(a, b) { return [a[0] - b[0], a[1] - b[1], a[2] - b[2]]; }
function vec_add(a, b) { return [a[0] + b[0], a[1] + b[1], a[2] + b[2]]; }
function vec_scale(v, s) { return [v[0] * s, v[1] * s, v[2] * s]; }
function vector_product(u, v) { return [ u[1] * v[2] - u[2] * v[1], u[2] * v[0] - u[0] * v[2], u[0] * v[1] - u[1] * v[0] ]; }
function normalize(v) { var n = Math.sqrt(v[0]*v[0] + v[1]*v[1] + v[2]*v[2]); if (n === 0) return [0,0,0]; return [ v[0]/n, v[1]/n, v[2]/n ]; }
function triangle_normal(a, b, c) { if (!a || !b || !c) { console.error('Bad vector in triangle_normal', a, b, c); return [0,0,1]; } return normalize(vector_product(vec_sub(a,b), vec_sub(c,b))); }
function printNormal(prefix, x, y, z, output, transform) { var p = normalize(transform.matvecmult(new Matrix(x, y, z, 0))); output.push([prefix, p[0], p[1], p[2]].join(" ")); }
function printSFVec3f(prefix, x, y, z, output, transform) { var p = transform.matvecmult(new Matrix(x, y, z, 1)); output.push([prefix, p[0], p[1], p[2]].join(" ")); }

function IndexedTriangle(LDNode, output, transform) {
	if (typeof LDNode.index !== 'object') return;
    output.push("solid "+(LDNode.DEF || LDNode.nodeName));
    for (var face in LDNode.index) {
        var f = LDNode.index[face];
        var normal = typeof LDNode.Normal === 'undefined' ? triangle_normal(LDNode.Coordinate.point[f[0]], LDNode.Coordinate.point[f[1]], LDNode.Coordinate.point[f[2]]) : [LDNode.Normal.vector[f[0]][0], LDNode.Normal.vector[f[0]][1], LDNode.Normal.vector[f[0]][2]];
        printNormal("  facet normal", normal[0], normal[1], normal[2], output, transform);
        output.push("    outer loop");
        for (var v = 0; v < 3; v++) { printSFVec3f("      vertex", LDNode.Coordinate.point[f[v]][0], LDNode.Coordinate.point[f[v]][1], LDNode.Coordinate.point[f[v]][2], output, transform); }
        output.push("    endloop"); output.push("  endfacet");
    }
    output.push("endsolid "+(LDNode.DEF || LDNode.nodeName));
}

function transformLDNodesToTriangles(LDNode, output, parentTransform) {
	var dispatchTable = {
		// This function contains the fix for degenerate faces (lines).
		IndexedFaceSet: function(LDNode, output, transform) {
			if (typeof LDNode.coordIndex !== 'object' || !LDNode.Coordinate) return; // Guard against missing coordinate data
            output.push("solid "+(LDNode.DEF || LDNode.nodeName));
            for (var face in LDNode.coordIndex) {
                var f = LDNode.coordIndex[face];
                if (f.length < 3) continue;
                for (var i = 1; i < f.length - 1; i++) {
                    var i0 = f[0], i1 = f[i], i2 = f[i+1];

                    // FIX: Skip degenerate triangles where two or more vertices are the same.
                    if (i0 === i1 || i1 === i2 || i0 === i2) {
                        continue;
                    }

                    var v0 = LDNode.Coordinate.point[i0],
                        v1 = LDNode.Coordinate.point[i1],
                        v2 = LDNode.Coordinate.point[i2];

                    if (!v0 || !v1 || !v2) continue;
                    var normal = triangle_normal(v0, v1, v2);
                    printNormal("  facet normal", normal[0], normal[1], normal[2], output, transform);
                    output.push("    outer loop");
                    printSFVec3f("      vertex", v0[0], v0[1], v0[2], output, transform);
                    printSFVec3f("      vertex", v1[0], v1[1], v1[2], output, transform);
                    printSFVec3f("      vertex", v2[0], v2[1], v2[2], output, transform);
                    output.push("    endloop");
                    output.push("  endfacet");
                }
            }
            output.push("endsolid "+(LDNode.DEF || LDNode.nodeName));
		},
		IndexedTriangleSet: IndexedTriangle, IndexedTriangleStripSet: IndexedTriangle, IndexedTriangleFanSet: IndexedTriangle,
		Box: function(LDNode, output, transform) { output.push("solid "+(LDNode.DEF || LDNode.nodeName)); var size = LDNode.size; this.SixSided(LDNode, output, transform, size[0]/2, size[1]/2, size[2]/2); output.push("endsolid "+(LDNode.DEF || LDNode.nodeName)); },
		Sphere: function(LDNode, output, transform) {
			output.push("solid " + (LDNode.DEF || LDNode.nodeName));
			var r = LDNode.radius, latBands = 24, longBands = 24;
			for (var lat = 0; lat < latBands; lat++) {
				for (var lon = 0; lon < longBands; lon++) {
					var p1 = lat / latBands * Math.PI, p2 = (lat + 1) / latBands * Math.PI;
					var t1 = lon / longBands * 2*Math.PI, t2 = (lon + 1) / longBands * 2*Math.PI;
					var v1 = [r*Math.sin(p1)*Math.cos(t1), r*Math.cos(p1), r*Math.sin(p1)*Math.sin(t1)];
					var v2 = [r*Math.sin(p1)*Math.cos(t2), r*Math.cos(p1), r*Math.sin(p1)*Math.sin(t2)];
					var v3 = [r*Math.sin(p2)*Math.cos(t1), r*Math.cos(p2), r*Math.sin(p2)*Math.sin(t1)];
					var v4 = [r*Math.sin(p2)*Math.cos(t2), r*Math.cos(p2), r*Math.sin(p2)*Math.sin(t2)];
					if (lat > 0) this.Triangle(LDNode, output, transform, [v1, v2, v4]);
					if (lat < latBands - 1) this.Triangle(LDNode, output, transform, [v1, v4, v3]);
				}
			}
			output.push("endsolid " + (LDNode.DEF || LDNode.nodeName));
		},
		Cylinder: function(LDNode, output, transform) {
			output.push("solid " + (LDNode.DEF || LDNode.nodeName));
			var r = LDNode.radius, h = LDNode.height, subs = 24, hh = h/2;
			var tc = [0,hh,0], bc = [0,-hh,0];
			for (var i = 0; i < subs; i++) {
				var a1 = (i/subs)*2*Math.PI, a2 = ((i+1)/subs)*2*Math.PI;
				var pt1 = [r*Math.cos(a1), hh, r*Math.sin(a1)], pt2 = [r*Math.cos(a2), hh, r*Math.sin(a2)];
				var pb1 = [r*Math.cos(a1), -hh, r*Math.sin(a1)], pb2 = [r*Math.cos(a2), -hh, r*Math.sin(a2)];
				if(LDNode.side) { this.Triangle(LDNode, output, transform, [pt1,pb1,pb2]); this.Triangle(LDNode, output, transform, [pt1,pb2,pt2]); }
				if(LDNode.top) { this.Triangle(LDNode, output, transform, [pt1,pt2,tc]); }
				if(LDNode.bottom) { this.Triangle(LDNode, output, transform, [pb1,bc,pb2]); }
			}
			output.push("endsolid " + (LDNode.DEF || LDNode.nodeName));
		},
		Cone: function(LDNode, output, transform) {
			output.push("solid " + (LDNode.DEF || LDNode.nodeName));
			var r = LDNode.bottomRadius, h = LDNode.height, subs = 24, hh = h/2;
			var apex = [0,hh,0], bc = [0,-hh,0];
			for (var i = 0; i < subs; i++) {
				var a1 = (i/subs)*2*Math.PI, a2 = ((i+1)/subs)*2*Math.PI;
				var pb1 = [r*Math.cos(a1), -hh, r*Math.sin(a1)], pb2 = [r*Math.cos(a2), -hh, r*Math.sin(a2)];
				if(LDNode.side) this.Triangle(LDNode, output, transform, [pb1,pb2,apex]);
				if(LDNode.bottom) { this.Triangle(LDNode, output, transform, [pb1,bc,pb2]); }
			}
			output.push("endsolid " + (LDNode.DEF || LDNode.nodeName));
		},
		Extrusion: function(LDNode, output, transform) { output.push("solid " + (LDNode.DEF || LDNode.nodeName)); this.tessellateExtrusion(LDNode, output, transform); output.push("endsolid " + (LDNode.DEF || LDNode.nodeName)); },
		tessellateExtrusion: function(LDNode, output, transform) {
			var spine = LDNode.spine, cs = LDNode.crossSection, scales = LDNode.extrusionScale, orients = LDNode.orientation;
			if (spine.length < 2 || cs.length < 3) return;
			var slices = [];
			for (var i = 0; i < spine.length; i++) {
				var p = spine[i];
				var T = (i < spine.length - 1) ? normalize(vec_sub(spine[i+1], p)) : normalize(vec_sub(p, spine[i-1]));
                var up = (Math.abs(T[1]) > 0.99) ? [0, 0, (T[1] > 0) ? -1 : 1] : [0, 1, 0];
				var B = normalize(vector_product(T, up)); var N = normalize(vector_product(B, T));
				var orient = (orients.length === 1) ? orients[0] : (orients.length > i ? orients[i] : null);
				if (orient) {
					var q = Matrix.quaternion(orient[0], orient[1], orient[2], orient[3]); var invq = Matrix.invertquaternion(orient[0], orient[1], orient[2], orient[3]);
                    var rB_mat = q.matmatmult(new Matrix(B[0], B[1], B[2], 0).toMatrix()).matmatmult(invq); var rN_mat = q.matmatmult(new Matrix(N[0], N[1], N[2], 0).toMatrix()).matmatmult(invq);
                    B = [rB_mat.getValue(0,0), rB_mat.getValue(1,0), rB_mat.getValue(2,0)]; N = [rN_mat.getValue(0,0), rN_mat.getValue(1,0), rN_mat.getValue(2,0)];
				}
				var scale = (scales.length === 1) ? scales[0] : (scales.length > i ? scales[i] : [1, 1]);
				var slice = [];
				for (var j = 0; j < cs.length; j++) { slice.push(vec_add(p, vec_add(vec_scale(B, cs[j][0] * scale[0]), vec_scale(N, cs[j][1] * scale[1])))); }
				slices.push(slice);
			}
			for (i = 0; i < spine.length - 1; i++) {
				var slice1 = slices[i], slice2 = slices[i+1];
				for (var j = 0; j < cs.length - 1; j++) {
					var v1=slice1[j], v2=slice1[j+1], v3=slice2[j], v4=slice2[j+1];
					this.Triangle(LDNode, output, transform, [v1, v3, v4]); this.Triangle(LDNode, output, transform, [v1, v4, v2]);
				}
			}
			if (LDNode.beginCap && slices.length > 0) this.tessellateConvexPolygon(LDNode, output, transform, slices[0], true);
			if (LDNode.endCap && slices.length > 0) this.tessellateConvexPolygon(LDNode, output, transform, slices[slices.length - 1], false);
		},
		tessellateConvexPolygon: function(LDNode, output, transform, polygon, reverse) {
			if (polygon.length < 3) return;
			for (var i = 1; i < polygon.length - 1; i++) {
				var v0=polygon[0], v1=polygon[i], v2=polygon[i+1];
				if (reverse) this.Triangle(LDNode, output, transform, [v0, v2, v1]);
				else this.Triangle(LDNode, output, transform, [v0, v1, v2]);
			}
		},
		SixSided: function(LDNode, output, transform, x, y, z) {
			this.Square(LDNode, output, transform, [[ x, y,-z], [ x,-y,-z], [-x,-y,-z], [-x, y,-z]]);
			this.Square(LDNode, output, transform, [[ x, y, z], [-x, y, z], [-x,-y, z], [ x,-y, z]]);
			this.Square(LDNode, output, transform, [[-x,-y,-z], [ x,-y,-z], [ x,-y, z], [-x,-y, z]]);
			this.Square(LDNode, output, transform, [[-x, y,-z], [-x, y, z], [ x, y, z], [ x, y,-z]]);
			this.Square(LDNode, output, transform, [[ x,-y, z], [ x,-y,-z], [ x, y,-z], [ x, y, z]]);
			this.Square(LDNode, output, transform, [[-x, y, z], [-x, y,-z], [-x,-y,-z], [-x,-y, z]]);
		},
		Square: function(LDNode, output, transform, square) { this.Triangle(LDNode, output, transform, [square[0], square[1], square[2]]); this.Triangle(LDNode, output, transform, [square[0], square[2], square[3]]); },
		Triangle: function(LDNode, output, transform, coords) {
            var normal = triangle_normal(coords[0], coords[1], coords[2]);
            printNormal("  facet normal", normal[0], normal[1], normal[2], output, transform);
            output.push("    outer loop");
            coords.forEach(c => printSFVec3f("      vertex", c[0], c[1], c[2], output, transform));
            output.push("    endloop"); output.push("  endfacet");
		}
	};
    if (!LDNode.kids) return;
	for (var k in LDNode.kids) {
		var CNode = LDNode.kids[k];
		var transform = parentTransform.copy();
		if (CNode.translation) { transform = transform.matmatmult(CNode.translation); }
		if (CNode.quaternion) { var quat = CNode.quaternion; var invquat = Matrix.invertquaternion(quat[0], quat[1], quat[2], quat[3]); transform = quat.matmatmult(transform).matmatmult(invquat); }
		if (CNode.scale) { transform = transform.matmatmult(CNode.scale); }
		if (CNode.geometry) { dispatchTable[CNode.nodeName].call(dispatchTable, CNode, output, transform); }
		transformLDNodesToTriangles(CNode, output, transform);
	}
}
