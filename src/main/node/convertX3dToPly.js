/**
 * X3D to PLY Converter
 *
 * This script provides a function to convert X3D scene data (in JSON object format)
 * into the PLY 3D model format. It handles scene graph transformations, prototype expansion,
 * and tessellates primitive geometry into triangle meshes with vertex colors.
 * This version has been updated to correctly process IndexedFaceSet and IndexedLineSet
 * nodes, preserving per-vertex and per-edge/line colors, and outputting them
 * as separate 'face' and 'edge' elements in the PLY file, respectively.
 *
 * @version 3.8.0
 * @author AI Assistant, with fixes for vertex deduplication and robustness against incomplete geometry.
 *
 * Features:
 * - A robust, single-pass recursive expander correctly resolves all ProtoDeclare and ProtoInstance nodes.
 * - Correctly handles nested prototypes and IS/connect value propagation with proper scope chaining.
 * - Correctly handles DEF/USE for node reuse by substituting the USE node with the DEF'd node's content within the current transformation context.
 * - Handles diffuseColor from Material nodes and Color nodes to produce colored PLY files.
 * - Traverses the expanded scene graph, applying nested Transform nodes.
 * - Tessellates primitive shapes: Box, Sphere, Cylinder, Cone, and Extrusion.
 * - Processes IndexedFaceSet geometry with per-vertex colors, correctly handling single-color application.
 * - Processes IndexedLineSet geometry with per-line colors.
 * - Implements a robust vertex map to prevent duplicate vertices when multiple Shapes reference the same coordinates.
 * - **NEW**: Added a guard to handle IndexedLineSet nodes that are missing a coordIndex, preventing crashes.
 * - Outputs ASCII PLY format with vertex, face, and edge elements.
 */
export default function createX3dToPlyConverter() {

    const mat4 = {
        create: () => [1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1],
        multiply: (out,a,b) => {let a00=a[0],a01=a[4],a02=a[8],a03=a[12],a10=a[1],a11=a[5],a12=a[9],a13=a[13],a20=a[2],a21=a[6],a22=a[10],a23=a[14],a30=a[3],a31=a[7],a32=a[11],a33=a[15];let b00=b[0],b01=b[4],b02=b[8],b03=b[12],b10=b[1],b11=b[5],b12=b[9],b13=b[13],b20=b[2],b21=b[6],b22=b[10],b23=b[14],b30=b[3],b31=b[7],b32=b[11],b33=b[15];out[0]=b00*a00+b10*a01+b20*a02+b30*a03;out[4]=b01*a00+b11*a01+b21*a02+b31*a03;out[8]=b02*a00+b12*a01+b22*a02+b32*a03;out[12]=b03*a00+b13*a01+b23*a02+b33*a03;out[1]=b00*a10+b10*a11+b20*a12+b30*a13;out[5]=b01*a10+b11*a11+b21*a12+b31*a13;out[9]=b02*a10+b12*a11+b22*a12+b32*a13;out[13]=b03*a10+b13*a11+b23*a12+b33*a13;out[2]=b00*a20+b10*a21+b20*a22+b30*a23;out[6]=b01*a20+b11*a21+b21*a22+b31*a23;out[10]=b02*a20+b12*a21+b22*a22+b32*a23;out[14]=b03*a20+b13*a21+b23*a22+b33*a23;out[3]=b00*a30+b10*a31+b20*a32+b30*a33;out[7]=b01*a30+b11*a31+b21*a32+b31*a33;out[11]=b02*a30+b12*a31+b22*a32+b32*a33;out[15]=b03*a30+b13*a31+b23*a32+b33*a33;return out},
        fromRotationTranslationScale: (out,q,v,s) => {let x=q[0],y=q[1],z=q[2],w=q[3],x2=x+x,y2=y+y,z2=z+z,xx=x*x2,xy=x*y2,xz=x*z2,yy=y*y2,yz=y*z2,zz=z*z2,wx=w*x2,wy=w*y2,wz=w*z2;out[0]=(1-(yy+zz))*s[0];out[1]=(xy+wz)*s[0];out[2]=(xz-wy)*s[0];out[3]=0;out[4]=(xy-wz)*s[1];out[5]=(1-(xx+zz))*s[1];out[6]=(yz+wx)*s[1];out[7]=0;out[8]=(xz+wy)*s[2];out[9]=(yz-wx)*s[2];out[10]=(1-(xx+yy))*s[2];out[11]=0;out[12]=v[0];out[13]=v[1];out[14]=v[2];out[15]=1;return out},
        transformPoint: (out,p,m) => {let x=p[0],y=p[1],z=p[2],w=(m[3]*x+m[7]*y+m[11]*z+m[15]||1);out[0]=(m[0]*x+m[4]*y+m[8]*z+m[12])/w;out[1]=(m[1]*x+m[5]*y+m[9]*z+m[13])/w;out[2]=(m[2]*x+m[6]*y+m[10]*z+m[14])/w;return out},
        axisAngleToQuat: (out,axis,angle) => {let s=Math.sin(angle*.5);out[0]=axis[0]*s;out[1]=axis[1]*s;out[2]=axis[2]*s;out[3]=Math.cos(angle*.5);return out}
    };

    const parseNumArray = v => (typeof v === 'string') ? v.trim().split(/\s+/).map(Number) : v;
    const parseSFColor = v => parseNumArray(v);
    const parseSFVec3f = v => parseNumArray(v);
    const parseSFRotation = v => parseNumArray(v);
    const parseMFVec2f = v => { if (typeof v === 'string') return parseMFVec2f(parseNumArray(v)); if (Array.isArray(v) && typeof v[0] === 'number') {const r=[];for(let i=0;i<v.length;i+=2){r.push([v[i],v[i+1]])}return r} return v; };
    const parseMFVec3f = v => { if (typeof v === 'string') return parseMFVec3f(parseNumArray(v)); if (Array.isArray(v) && typeof v[0] === 'number') {const r=[];for(let i=0;i<v.length;i+=3){r.push([v[i],v[i+1],v[i+2]])}return r} return v; };
    const parseMFRotation = v => { if (typeof v === 'string') return parseMFRotation(parseNumArray(v)); if (Array.isArray(v) && typeof v[0] === 'number') {const r=[];for(let i=0;i<v.length;i+=4){r.push([v[i],v[i+1],v[i+2],v[i+3]])}return r} return v; };
    const parseBool = v => (typeof v === 'string') ? v.toLowerCase() === 'true' : v;

    function tessellateBox(node, options) {
	    const size = node['@size'] ? parseSFVec3f(node['@size']) : [2, 2, 2];
	    const hx = size[0] / 2, hy = size[1] / 2, hz = size[2] / 2;
	    const vertices = [[-hx,-hy,hz],[hx,-hy,hz],[hx,hy,hz],[-hx,hy,hz],[-hx,-hy,-hz],[hx,-hy,-hz],[hx,hy,-hz],[-hx,hy,-hz]];
	    const faces = [[0,1,2],[0,2,3],[1,5,6],[1,6,2],[5,4,7],[5,7,6],[4,0,3],[4,3,7],[3,2,6],[3,6,7],[4,5,1],[4,1,0]];
	    return { vertices, faces };
    }
    function tessellateSphere(node, options) {
	    const r = node['@radius'] ? parseFloat(node['@radius']) : 1;
	    const sub = options.subdivisions || 24;
	    const verts=[], faces=[];
	    for (let j=0;j<=sub;j++){
		    let aj=j*Math.PI/sub,sj=Math.sin(aj),cj=Math.cos(aj);
		    for(let i=0;i<=sub;i++){
			    let ai=i*2*Math.PI/sub,si=Math.sin(ai),ci=Math.cos(ai);
			    verts.push([r*si*sj,r*cj,r*ci*sj]);
		    }
	    }
	    for(let j=0;j<sub;j++){
		    for(let i=0;i<sub;i++){
			    let p1=j*(sub+1)+i,p2=p1+1,p3=(j+1)*(sub+1)+i,p4=p3+1;
			    faces.push([p1,p2,p4]);
			    faces.push([p1,p4,p3]);
		    }
	    }
	    return { vertices: verts, faces: faces };
    }
    function tessellateCylinder(node, options) {
	    const radius = node['@radius'] ? parseFloat(node['@radius']) : 1;
	    const height = node['@height'] ? parseFloat(node['@height']) : 2;
	    const hasBottom = node['@bottom'] !== undefined ? parseBool(node['@bottom']) : true;
	    const hasTop = node['@top'] !== undefined ? parseBool(node['@top']) : true;
	    const hasSide = node['@side'] !== undefined ? parseBool(node['@side']) : true;
	    const sub = options.subdivisions || 24;
	    const hy = height / 2;
	    const vertices = [];
	    const faces = [];
	    for (let i = 0; i < sub; i++) {
		    const angle = (i / sub) * 2 * Math.PI;
		    const x = radius * Math.cos(angle);
		    const z = radius * Math.sin(angle);
		    vertices.push([x, -hy, z]);
		    vertices.push([x, hy, z]);
	    }
	    if (hasSide) {
		    for (let i = 0; i < sub; i++) {
		    	const i_next = (i + 1) % sub;
		    	const v_bottom_curr = i * 2;
		    	const v_top_curr = i * 2 + 1;
		    	const v_bottom_next = i_next * 2;
		    	const v_top_next = i_next * 2 + 1;
		    	faces.push([v_bottom_curr, v_bottom_next, v_top_next]);
		    	faces.push([v_bottom_curr, v_top_next, v_top_curr]);
	    	}
	    }
	    if (hasTop || hasBottom) {
		    let topCenterIndex, bottomCenterIndex;
		    if (hasTop) {
			    topCenterIndex = vertices.length;
			    vertices.push([0, hy, 0]);
		    }
		    if (hasBottom) {
			    bottomCenterIndex = vertices.length;
			    vertices.push([0, -hy, 0]);
		    }
		    for (let i = 0; i < sub; i++) {
			    const i_next = (i + 1) % sub;
			    if (hasTop) {
				    const v_top_curr = i * 2 + 1;
				    const v_top_next = i_next * 2 + 1;
				    faces.push([topCenterIndex, v_top_next, v_top_curr]);
			    }
			    if (hasBottom) {
				    const v_bottom_curr = i * 2;
				    const v_bottom_next = i_next * 2;
				    faces.push([bottomCenterIndex, v_bottom_curr, v_bottom_next]);
			    }
		    }
	    }
	    return { vertices, faces };
    }
    function tessellateCone(node, options) {
	    const bottomRadius = node['@bottomRadius'] ? parseFloat(node['@bottomRadius']) : 1;
	    const height = node['@height'] ? parseFloat(node['@height']) : 2;
	    const hasBottom = node['@bottom'] !== undefined ? parseBool(node['@bottom']) : true;
	    const hasSide = node['@side'] !== undefined ? parseBool(node['@side']) : true;
	    const sub = options.subdivisions || 24;
	    const hy = height / 2;
	    const vertices = [];
	    const faces = [];
	    for (let i = 0; i < sub; i++) {
		    const angle = (i / sub) * 2 * Math.PI;
		    const x = bottomRadius * Math.cos(angle);
		    const z = bottomRadius * Math.sin(angle);
		    vertices.push([x, -hy, z]);
	    }
	    const apexIndex = vertices.length;
	    vertices.push([0, hy, 0]);
	    if (hasSide) {
		    for (let i = 0; i < sub; i++) {
			    const i_next = (i + 1) % sub;
			    faces.push([apexIndex, i_next, i]);
		    }
	    }
	    if (hasBottom) {
		    const bottomCenterIndex = vertices.length;
		    vertices.push([0, -hy, 0]);
		    for (let i = 0; i < sub; i++) {
			    const i_next = (i + 1) % sub;
			    faces.push([bottomCenterIndex, i, i_next]);
		    }
	    }
	    return { vertices, faces };
    }
    function tessellateExtrusion(node, options) {
	    const attrs = node['@'] || {
	    };
	    const crossSection = attrs.crossSection ? parseMFVec2f(attrs.crossSection) : [[1,1], [1,-1], [-1,-1], [-1,1], [1,1]];
	    const spine = attrs.spine ? parseMFVec3f(attrs.spine) : [[0,0,0], [0,1,0]];
	    const scale = attrs.scale ? parseMFVec2f(attrs.scale) : [[1,1]];
	    const orientation = attrs.orientation ? parseMFRotation(attrs.orientation) : [[0,0,1,0]];
	    const beginCap = attrs.beginCap !== undefined ? parseBool(attrs.beginCap) : true;
	    const endCap = attrs.endCap !== undefined ? parseBool(attrs.endCap) : true;
	    const ccw = attrs.ccw !== undefined ? parseBool(attrs.ccw) : true;
	    if (spine.length < 2 || crossSection.length < 3)
		    return { vertices: [], faces: [] };
	    const vertices = [];
	    const faces = [];
	    const csLen = crossSection.length;
	    for (let i = 0; i < spine.length; i++) {
		    const spinePoint = spine[i];
		    const currentScale = scale.length > 1 ? scale[i] : scale[0];
		    const currentOrientation = orientation.length > 1 ? orientation[i] : orientation[0];
		    let q = [];
		    mat4.axisAngleToQuat(q, [currentOrientation[0], currentOrientation[1], currentOrientation[2]], currentOrientation[3]);
		    let s = [currentScale[0], currentScale[1], 1];
		    let sliceTransform = mat4.create();
		    mat4.fromRotationTranslationScale(sliceTransform, q, spinePoint, s);
		    for (let j = 0; j < csLen; j++) {
			    const csPoint = [crossSection[j][0], crossSection[j][1], 0];
			    let transformedPoint = [0,0,0];
			    mat4.transformPoint(transformedPoint, csPoint, sliceTransform);
			    vertices.push(transformedPoint);
		    }
	    }
	    for (let i = 0; i < spine.length - 1; i++) {
		    for (let j = 0; j < csLen; j++) {
			    if (crossSection[j][0] === crossSection[j + 1]?.[0] && crossSection[j][1] === crossSection[j + 1]?.[1]) continue;
			    const j_next = (j + 1) % csLen;
			    const v1 = i * csLen + j, v2 = i * csLen + j_next, v3 = (i + 1) * csLen + j_next, v4 = (i + 1) * csLen + j;
			    if (ccw) {
				    faces.push([v1, v2, v3]);
				    faces.push([v1, v3, v4]);
			    } else {
				    faces.push([v1, v3, v2]);
				    faces.push([v1, v4, v3]);
			    }
		    }
	    }
	    const triangulateCap = (startIndex, isEndCap) => {
		    const v0 = startIndex;
		    for (let j = 1; j < csLen - 2; j++) {
			    const v1 = startIndex + j, v2 = startIndex + j + 1;
			    if ((ccw && !isEndCap) || (!ccw && isEndCap)) {
				    faces.push([v0, v2, v1]);
			    } else {
				    faces.push([v0, v1, v2]);
			    }
		    }
	    };
	    if (beginCap && csLen > 2) triangulateCap(0, false);
	    if (endCap && csLen > 2) triangulateCap((spine.length - 1) * csLen, true);
	    return { vertices, faces };
    }

    function processIndexedFaceSet(node) {
	    const coordNode = node['-coord']?.Coordinate;
	    if (!coordNode || !coordNode['@point']) return null;
	    const points = parseMFVec3f(coordNode['@point']);
	    const coordIndex = parseNumArray(node['@coordIndex']);

        let vertexColors = null;
	    const colorNode = node['-color']?.Color;
	    if (colorNode && colorNode['@color']) {
		    const colors = parseMFVec3f(colorNode['@color']);
            // Assuming colorPerVertex is true and color array matches vertex array
		    if (colors && colors.length > 0) {
                vertexColors = colors;
            }
	    }

	    const faces = [];
	    let currentFace = [];
	    for (const index of coordIndex) {
		    if (index === -1) {
			    if (currentFace.length >= 3) {
				    const v0 = currentFace[0];
				    for (let i = 1; i < currentFace.length - 1; i++) faces.push([v0, currentFace[i], currentFace[i + 1]]);
			    }
			    currentFace = [];
		    } else {
			    currentFace.push(index);
		    }
	    }
	    if (currentFace.length >= 3) {
		    const v0 = currentFace[0];
		    for (let i = 1; i < currentFace.length - 1; i++) faces.push([v0, currentFace[i], currentFace[i + 1]]);
	    }
	    return { vertices: points, faces: faces, vertexColors: vertexColors };
    }

    function processIndexedLineSet(node) {
        const coordNode = node['-coord']?.Coordinate;
        if (!coordNode || !coordNode['@point']) return null;
        const points = parseMFVec3f(coordNode['@point']);

        // --- START OF FIX ---
        // Add a guard clause to handle cases where coordIndex is missing.
        const coordIndexRaw = node['@coordIndex'];
        if (coordIndexRaw === undefined || coordIndexRaw === null) {
            return { vertices: points, faces: [], lineColors: [] }; // Return empty but valid geometry data
        }
        const coordIndex = parseNumArray(coordIndexRaw);
        // --- END OF FIX ---

        const colorNode = node['-color']?.Color;
        const colors = (colorNode && colorNode['@color']) ? parseMFVec3f(colorNode['@color']) : null;

        const lines = [];
        const lineColors = [];
        let currentPolyline = [];
        let polylineIndex = 0;

        const processPolyline = (p_line) => {
            if (p_line.length >= 2) {
                const polylineColor = (colors && colors[polylineIndex] !== undefined) ? colors[polylineIndex] : null;
                for (let i = 0; i < p_line.length - 1; i++) {
                    lines.push([p_line[i], p_line[i+1]]);
                    if (polylineColor) {
                        lineColors.push(polylineColor);
                    }
                }
                polylineIndex++;
            }
        };

        for (const index of coordIndex) {
            if (index === -1) {
                processPolyline(currentPolyline);
                currentPolyline = [];
            } else {
                currentPolyline.push(index);
            }
        }
        processPolyline(currentPolyline);

        return { vertices: points, faces: lines, lineColors: (lineColors.length > 0 ? lineColors : null) };
    }

    let globalVertices, globalFaces, globalVertexColors, globalEdges, globalEdgeColors, vertexMap;

    function expand(node, declarations, scope) {
        if (!node || typeof node !== 'object') {
            return node;
        }

        if (node.ProtoInstance) {
            const protoInstance = node.ProtoInstance;
            const protoName = protoInstance['@name'];
            const protoDeclare = declarations[protoName];
            if (!protoDeclare) {
                console.warn(`ProtoDeclare not found for name: ${protoName}`);
                return null;
            }

            const newScope = {};
            const fieldTypes = {};

            (protoDeclare.ProtoInterface?.field || []).forEach(field => {
                const fieldName = field['@name'];
                fieldTypes[fieldName] = field['@type'];
                if (field['@value'] !== undefined) {
                    newScope[fieldName] = field['@value'];
                } else if (field['-children']) {
                    newScope[fieldName] = (fieldTypes[fieldName] === 'SFNode') ? field['-children'][0] : field['-children'];
                }
            });

            (protoInstance.fieldValue || []).forEach(fv => {
                const fieldName = fv['@name'];
                if (fv['@value'] !== undefined) {
                    newScope[fieldName] = fv['@value'];
                } else if (fv['-children']) {
                    newScope[fieldName] = (fieldTypes[fieldName] === 'SFNode') ? fv['-children'][0] : fv['-children'];
                }
            });

            if (scope && protoInstance.IS && protoInstance.IS.connect) {
                protoInstance.IS.connect.forEach(connect => {
                    const fieldInMyInterface = connect['@nodeField'];
                    const fieldInParentScope = connect['@protoField'];
                    if (scope[fieldInParentScope] !== undefined) {
                        newScope[fieldInMyInterface] = scope[fieldInParentScope];
                    }
                });
            }

            const protoBody = protoDeclare.ProtoBody['-children'][0];
            return expand(protoBody, declarations, newScope);
        }

        const nodeName = Object.keys(node)[0];
        if (!nodeName) return node;

        const newNode = JSON.parse(JSON.stringify(node));
        const newNodeContent = newNode[nodeName];

        if (scope && newNodeContent.IS && newNodeContent.IS.connect) {
            newNodeContent.IS.connect.forEach(connect => {
                const fieldOnThisNode = connect['@nodeField'];
                const fieldInMyScope = connect['@protoField'];
                const value = scope[fieldInMyScope];
                if (value !== undefined) {
                    if (fieldOnThisNode === 'children') {
                        newNodeContent['-children'] = Array.isArray(value) ? value : [value];
                    } else if (['geometry', 'appearance', 'material', 'coord', 'color'].includes(fieldOnThisNode)) {
                        newNodeContent[`-${fieldOnThisNode}`] = value;
                    } else {
                        if (!newNodeContent['@']) newNodeContent['@'] = {};
                        newNodeContent['@'][fieldOnThisNode] = value;
                    }
                }
            });
            delete newNodeContent.IS;
        }

        if (newNodeContent['-children']) {
            const expandedChildren = [];
            for (const child of newNodeContent['-children']) {
                const expandedChild = expand(child, declarations, scope);
                if (expandedChild) {
                    if (Array.isArray(expandedChild)) {
                        expandedChildren.push(...expandedChild);
                    } else {
                        expandedChildren.push(expandedChild);
                    }
                }
            }
            newNodeContent['-children'] = expandedChildren;
        }

        return newNode;
    }

    function processNode(node, parentTransform, options, defMap, parentColor) {
        if (!node) return;
        const nodeName = Object.keys(node)[0];
        if (!nodeName) return;
        const nodeContent = node[nodeName];
        let attrs = nodeContent['@'] || {};

        if (attrs.DEF) defMap[attrs.DEF] = node;
        if (attrs.USE) {
            const useName = attrs.USE;
            if (defMap[useName]) {
                const usedNode = JSON.parse(JSON.stringify(defMap[useName]));
                const usedNodeContent = usedNode[Object.keys(usedNode)[0]];
                usedNodeContent['@'] = {...(usedNodeContent['@'] || {}), ...attrs};
                delete usedNodeContent['@'].USE;
                delete usedNodeContent['@'].DEF;
                processNode(usedNode, parentTransform, options, defMap, parentColor);
            } else {
                console.warn(`USE node '${useName}' not found. Skipping.`);
            }
            return;
        }

        let currentTransform = [...parentTransform];
        if (nodeName === 'Transform' || nodeName === 'Group') {
             const translation = attrs.translation ? parseSFVec3f(attrs.translation) : [0,0,0];
             const rotation = attrs.rotation ? parseSFRotation(attrs.rotation) : [0,1,0,0];
             const scale = attrs.scale ? parseSFVec3f(attrs.scale) : [1,1,1];
             let q = []; mat4.axisAngleToQuat(q, [rotation[0], rotation[1], rotation[2]], rotation[3]);
             let localTransform = mat4.create(); mat4.fromRotationTranslationScale(localTransform, q, translation, scale);
             mat4.multiply(currentTransform, parentTransform, localTransform);
        }

        let currentColor = parentColor;
        if (nodeName === 'Shape') {
            const material = nodeContent['-appearance']?.Appearance?.['-material']?.Material;
            if (material && material['@diffuseColor']) currentColor = parseSFColor(material['@diffuseColor']);

            const geometry = nodeContent['-geometry'];
            if (geometry) {
                const geoType = Object.keys(geometry)[0]; const geoNode = geometry[geoType];
                let geoData = null; let isLineSet = false;

                switch(geoType) {
                    case 'Box': geoData = tessellateBox(geoNode, options); break;
                    case 'Sphere': geoData = tessellateSphere(geoNode, options); break;
                    case 'Cylinder': geoData = tessellateCylinder(geoNode, options); break;
                    case 'Cone': geoData = tessellateCone(geoNode, options); break;
                    case 'IndexedFaceSet': geoData = processIndexedFaceSet(geoNode); break;
                    case 'IndexedLineSet': geoData = processIndexedLineSet(geoNode); isLineSet = true; break;
                    case 'Extrusion': geoData = tessellateExtrusion(geoNode, options); break;
                    default: break;
                }

                if (geoData && geoData.vertices.length > 0) {
                    const localIndexMap = new Map();
                    const getGlobalIndex = (localIndex) => {
                        if (localIndexMap.has(localIndex)) return localIndexMap.get(localIndex);

                        const v = geoData.vertices[localIndex];
                        let tv = [0,0,0];
                        mat4.transformPoint(tv, v, currentTransform);
                        const vKey = tv.map(c => c.toPrecision(6)).join(',');

                        if (vertexMap.has(vKey)) {
                           const globalIndex = vertexMap.get(vKey);
                           localIndexMap.set(localIndex, globalIndex);
                           return globalIndex;
                        }

                        const globalIndex = globalVertices.length;
                        vertexMap.set(vKey, globalIndex);
                        localIndexMap.set(localIndex, globalIndex);

                        globalVertices.push(tv);

                        let singleShapeColor = (geoData.vertexColors && geoData.vertexColors.length === 1) ? geoData.vertexColors[0] : null;
                        let vertexColor = singleShapeColor || (geoData.vertexColors && geoData.vertexColors[localIndex]) || currentColor;
                        globalVertexColors.push(vertexColor);

                        return globalIndex;
                    };

                    if (isLineSet) {
                        for (let i = 0; i < geoData.faces.length; i++) {
                            const line = geoData.faces[i].map(idx => getGlobalIndex(idx));
                            globalEdges.push(line);
                            const edgeColor = (geoData.lineColors && geoData.lineColors[i]) ? geoData.lineColors[i] : currentColor;
                            globalEdgeColors.push(edgeColor);
                        }
                    } else {
                        for (const f of geoData.faces) {
                            globalFaces.push(f.map(idx => getGlobalIndex(idx)));
                        }
                    }
                }
            }
        }

        for (const child of (nodeContent['-children'] || [])) {
            processNode(child, currentTransform, options, defMap, currentColor);
        }
    }

    function convertX3dToPly(x3dData, options = {}) {
        options.subdivisions = options.subdivisions || 24;
        if (typeof x3dData !== 'object' || !x3dData.X3D) {
            throw new Error("Invalid input. Must be a standard X3D JSON object.");
        }

        const scene = x3dData.X3D;
        const declarations = {};
        for (const child of (scene.Scene?.['-children'] || [])) {
            if (child.ProtoDeclare) { declarations[child.ProtoDeclare['@name']] = child.ProtoDeclare; }
        }

        const defMap = {};
        (function findDefs(node) {
            if (!node || typeof node !== 'object') return;
            const nodeName = Object.keys(node)[0];
            if (!nodeName) return;
            const nodeContent = node[nodeName];
            if (nodeContent['@'] && nodeContent['@'].DEF) {
                 defMap[nodeContent['@'].DEF] = node;
            }
            if (nodeContent['-children']) {
                for(const child of nodeContent['-children']) findDefs(child);
            }
        })(scene.Scene);


        const expandedScene = expand({ Scene: scene.Scene }, declarations, null);

        globalVertices = []; globalFaces = []; globalVertexColors = [];
        globalEdges = []; globalEdgeColors = [];
        vertexMap = new Map();

        const initialTransform = mat4.create();
        const defaultColor = [1.0, 1.0, 1.0];

        processNode(expandedScene, initialTransform, options, defMap, defaultColor);

        if (globalVertices.length === 0) {
            return `ply\nformat ascii 1.0\ncomment No geometry found to convert\nelement vertex 0\nproperty float x\nproperty float y\nproperty float z\nproperty uchar red\nproperty uchar green\nproperty uchar blue\nelement face 0\nproperty list uchar int vertex_indices\nend_header\n`;
        }

        let plyString = "ply\nformat ascii 1.0\n";
        plyString += `comment Converted from X3D by an AI Assistant\n`;
        plyString += `element vertex ${globalVertices.length}\nproperty float x\nproperty float y\nproperty float z\n`;
        plyString += "property uchar red\nproperty uchar green\nproperty uchar blue\n";

        if (globalFaces.length > 0) {
            plyString += `element face ${globalFaces.length}\nproperty list uchar int vertex_indices\n`;
        }
        if (globalEdges.length > 0) {
            plyString += `element edge ${globalEdges.length}\n`;
            plyString += `property int vertex1\n`;
            plyString += `property int vertex2\n`;
            plyString += `property uchar red\nproperty uchar green\nproperty uchar blue\n`;
        }

        plyString += "end_header\n";

        globalVertices.forEach((v, i) => {
            const color = globalVertexColors[i] || defaultColor;
            const r = Math.round(color[0] * 255); const g = Math.round(color[1] * 255); const b = Math.round(color[2] * 255);
            plyString += `${v[0]} ${v[1]} ${v[2]} ${r} ${g} ${b}\n`;
        });

        if (globalFaces.length > 0) {
            globalFaces.forEach(f => {
                plyString += `${f.length} ${f.join(' ')}\n`;
            });
        }

        if (globalEdges.length > 0) {
            globalEdges.forEach((e, i) => {
                const color = globalEdgeColors[i] || defaultColor;
                const r = Math.round(color[0] * 255); const g = Math.round(color[1] * 255); const b = Math.round(color[2] * 255);
                plyString += `${e[0]} ${e[1]} ${r} ${g} ${b}\n`;
            });
        }

        return plyString;
    }

    return convertX3dToPly;
}
