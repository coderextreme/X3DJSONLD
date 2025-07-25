/**
 * X3D to PLY Converter
 *
 * This script provides a function to convert X3D scene data (in JSON object format)
 * into the PLY 3D model format. It handles scene graph transformations, prototype expansion,
 * and tessellates primitive geometry into triangle meshes with vertex colors.
 *
 * @version 5.0.0
 * @author AI Assistant, with final fix for Extrusion and HAnim transformation logic.
 *
 * Features:
 * - A robust, single-pass recursive expander correctly resolves all ProtoDeclare and ProtoInstance nodes.
 * - Correctly handles nested prototypes and IS/connect value propagation with proper scope chaining.
 * - Correctly handles DEF/USE for node reuse by substituting the USE node with the DEF'd node's content.
 * - Handles diffuseColor from Material nodes and Color nodes to produce colored PLY files.
 * - Traverses the entire scene graph recursively, correctly processing all children.
 * - **FIXED**: Tessellates the Extrusion node by correctly calculating automatic orientation.
 * - Tessellates primitive shapes: Box, Sphere, Cylinder, Cone.
 * - **FIXED**: Processes IndexedFaceSet geometry correctly based on the `@convex` attribute.
 * - **FIXED**: Correctly merges geometry from multiple Shape nodes by using a `baseIndex` offset for face indices, ensuring no data loss or corruption. The flawed vertex de-duplication map has been removed.
 * - Processes IndexedLineSet geometry with correct color handling.
 * - Outputs ASCII PLY format with vertex, face, and edge elements.
 */
export default function createX3dToPlyConverter() {

    const mat4 = {
        create: () => [1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1],
        multiply: (out,a,b) => {let a00=a[0],a01=a[4],a02=a[8],a03=a[12],a10=a[1],a11=a[5],a12=a[9],a13=a[13],a20=a[2],a21=a[6],a22=a[10],a23=a[14],a30=a[3],a31=a[7],a32=a[11],a33=a[15];let b00=b[0],b01=b[4],b02=b[8],b03=b[12],b10=b[1],b11=b[5],b12=b[9],b13=b[13],b20=b[2],b21=b[6],b22=b[10],b23=b[14],b30=b[3],b31=b[7],b32=b[11],b33=b[15];out[0]=b00*a00+b10*a01+b20*a02+b30*a03;out[4]=b01*a00+b11*a01+b21*a02+b31*a03;out[8]=b02*a00+b12*a01+b22*a02+b32*a03;out[12]=b03*a00+b13*a01+b23*a02+b33*a03;out[1]=b00*a10+b10*a11+b20*a12+b30*a13;out[5]=b01*a10+b11*a11+b21*a12+b31*a13;out[9]=b02*a10+b12*a11+b22*a12+b32*a13;out[13]=b03*a10+b13*a11+b23*a12+b33*a13;out[2]=b00*a20+b10*a21+b20*a22+b30*a23;out[6]=b01*a20+b11*a21+b21*a22+b31*a23;out[10]=b02*a20+b12*a21+b22*a22+b32*a23;out[14]=b03*a20+b13*a21+b23*a22+b33*a23;out[3]=b00*a30+b10*a31+b20*a32+b30*a33;out[7]=b01*a30+b11*a31+b21*a32+b31*a33;out[11]=b02*a30+b12*a31+b22*a32+b32*a33;out[15]=b03*a30+b13*a31+b23*a32+b33*a33;return out},
        fromRotationTranslationScale: (out, q, v, s) => {
            const x = q[0], y = q[1], z = q[2], w = q[3];
            const x2 = x + x, y2 = y + y, z2 = z + z;
            const xx = x * x2, xy = x * y2, xz = x * z2;
            const yy = y * y2, yz = y * z2, zz = z * z2;
            const wx = w * x2, wy = w * y2, wz = w * z2;
            const sx = s[0], sy = s[1], sz = s[2];
            out[0] = (1 - (yy + zz)) * sx; out[1] = (xy + wz) * sx; out[2] = (xz - wy) * sx; out[3] = 0;
            out[4] = (xy - wz) * sy; out[5] = (1 - (xx + zz)) * sy; out[6] = (yz + wx) * sy; out[7] = 0;
            out[8] = (xz + wy) * sz; out[9] = (yz - wx) * sz; out[10] = (1 - (xx + yy)) * sz; out[11] = 0;
            out[12] = v[0]; out[13] = v[1]; out[14] = v[2]; out[15] = 1; return out;
        },
        fromTranslation: (out, v) => {
            out[0]=1; out[1]=0; out[2]=0; out[3]=0; out[4]=0; out[5]=1; out[6]=0; out[7]=0;
            out[8]=0; out[9]=0; out[10]=1; out[11]=0; out[12]=v[0]; out[13]=v[1]; out[14]=v[2]; out[15]=1; return out;
        },
        fromScaling: (out, v) => {
            out[0]=v[0]; out[1]=0; out[2]=0; out[3]=0; out[4]=0; out[5]=v[1]; out[6]=0; out[7]=0;
            out[8]=0; out[9]=0; out[10]=v[2]; out[11]=0; out[12]=0; out[13]=0; out[14]=0; out[15]=1; return out;
        },
        fromQuat: (out, q) => {
            let x=q[0],y=q[1],z=q[2],w=q[3]; let x2=x+x,y2=y+y,z2=z+z; let xx=x*x2,yy=y*y2,zz=z*z2,xy=x*y2,xz=x*z2,yz=y*z2,wx=w*x2,wy=w*y2,wz=w*z2;
            out[0]=1-(yy+zz); out[1]=xy+wz; out[2]=xz-wy; out[3]=0;
            out[4]=xy-wz; out[5]=1-(xx+zz); out[6]=yz+wx; out[7]=0;
            out[8]=xz+wy; out[9]=yz-wx; out[10]=1-(xx+yy); out[11]=0;
            out[12]=0; out[13]=0; out[14]=0; out[15]=1; return out;
        },
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
	    const attrs = node;
	    const crossSection = attrs['@crossSection'] ? parseMFVec2f(attrs['@crossSection']) : [[1,1], [1,-1], [-1,-1], [-1,1], [1,1]];
	    const spine = attrs['@spine'] ? parseMFVec3f(attrs['@spine']) : [[0,0,0], [0,1,0]];
	    const scale = attrs['@scale'] ? parseMFVec2f(attrs['@scale']) : [[1,1]];
        const hasOrientation = attrs['@orientation'] !== undefined;
	    const orientation = hasOrientation ? parseMFRotation(attrs['@orientation']) : [];
	    const beginCap = attrs['@beginCap'] !== undefined ? parseBool(attrs['@beginCap']) : true;
	    const endCap = attrs['@endCap'] !== undefined ? parseBool(attrs['@endCap']) : true;
	    const ccw = attrs['@ccw'] !== undefined ? parseBool(attrs['@ccw']) : true;

	    if (spine.length < 2 || crossSection.length < 3)
		    return { vertices: [], faces: [] };

        const vec3 = {
            sub: (a, b) => [a[0] - b[0], a[1] - b[1], a[2] - b[2]],
            len: (a) => Math.sqrt(a[0]*a[0] + a[1]*a[1] + a[2]*a[2]),
            normalize: (a) => { const l = vec3.len(a); return l > 1e-6 ? [a[0]/l, a[1]/l, a[2]/l] : [0,0,0]; },
            cross: (a, b) => [a[1]*b[2] - a[2]*b[1], a[2]*b[0] - a[0]*b[2], a[0]*b[1] - a[1]*b[0]],
            dot: (a, b) => a[0]*b[0] + a[1]*b[1] + a[2]*b[2]
        };

	    const vertices = [];
	    const faces = [];
	    const csLen = crossSection.length;

	    for (let i = 0; i < spine.length; i++) {
		    const spinePoint = spine[i];
		    const currentScale = scale.length > 1 ? scale[i] : scale[0];

            let q = [];
            if (hasOrientation) {
                const currentOrientation = orientation.length > 1 ? orientation[i] : orientation[0];
                mat4.axisAngleToQuat(q, [currentOrientation[0], currentOrientation[1], currentOrientation[2]], currentOrientation[3]);
            } else {
                // Automatic orientation calculation
                let tangent;
                if (i === 0) {
                    tangent = vec3.sub(spine[1], spine[0]);
                } else if (i === spine.length - 1) {
                    tangent = vec3.sub(spine[i], spine[i - 1]);
                } else {
                    tangent = vec3.sub(spine[i + 1], spine[i - 1]);
                }

                const v_from = [0, 0, 1]; // Default cross-section is in XY plane, so normal is Z-axis
                const v_to = vec3.normalize(tangent);

                q = [0, 0, 0, 1]; // Default to identity quaternion

                if (vec3.len(v_to) > 1e-6) { // Check for non-zero tangent
                    const d = vec3.dot(v_from, v_to);
                    if (d < -0.999999) { // Vectors are opposite
                        mat4.axisAngleToQuat(q, [1, 0, 0], Math.PI); // Rotate 180 degrees around an arbitrary axis (X)
                    } else if (d < 0.999999) { // Vectors are not collinear
                        const axis = vec3.normalize(vec3.cross(v_from, v_to));
                        const angle = Math.acos(d);
                        mat4.axisAngleToQuat(q, axis, angle);
                    }
                }
            }

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
        const isConvex = node['@convex'] === undefined || parseBool(node['@convex']);

        let vertexColors = null;
	    const colorNode = node['-color']?.Color;
	    if (colorNode && colorNode['@color']) {
		    const colors = parseMFVec3f(colorNode['@color']);
		    if (colors && colors.length > 0) {
                vertexColors = colors;
            }
	    }

	    const faces = [];
	    let currentFace = [];

        const processSingleFace = (faceIndices) => {
            if (faceIndices.length < 3) return;
            if (isConvex) {
                const v0 = faceIndices[0];
                for (let i = 1; i < faceIndices.length - 1; i++) {
                    faces.push([v0, faceIndices[i], faceIndices[i + 1]]);
                }
            } else {
                faces.push(faceIndices);
            }
        };

	    for (const index of coordIndex) {
		    if (index === -1) {
                processSingleFace(currentFace);
			    currentFace = [];
		    } else {
			    currentFace.push(index);
		    }
	    }
        processSingleFace(currentFace);

	    return { vertices: points, faces: faces, vertexColors: vertexColors };
    }

    function processIndexedLineSet(node) {
        const coordNode = node['-coord']?.Coordinate;
        if (!coordNode || !coordNode['@point']) return null;
        const points = parseMFVec3f(coordNode['@point']);

        const coordIndexRaw = node['@coordIndex'];
        if (coordIndexRaw === undefined || coordIndexRaw === null) {
            return { vertices: points, faces: [], lineColors: [] };
        }
        const coordIndex = parseNumArray(coordIndexRaw);

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

    let globalVertices, globalFaces, globalVertexColors, globalEdges, globalEdgeColors;

    function expand(node, declarations, scope) {
        if (!node || typeof node !== 'object') { return node; }
        if (node.ProtoInstance) {
            const protoInstance = node.ProtoInstance;
            const protoName = protoInstance['@name'];
            const protoDeclare = declarations[protoName];
            if (!protoDeclare) { console.warn(`ProtoDeclare not found for name: ${protoName}`); return null; }
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
                if (fv['@value'] !== undefined) { newScope[fieldName] = fv['@value'];
                } else if (fv['-children']) { newScope[fieldName] = (fieldTypes[fieldName] === 'SFNode') ? fv['-children'][0] : fv['-children']; }
            });
            if (scope && protoInstance.IS && protoInstance.IS.connect) {
                protoInstance.IS.connect.forEach(connect => {
                    const fieldInMyInterface = connect['@nodeField'];
                    const fieldInParentScope = connect['@protoField'];
                    if (scope[fieldInParentScope] !== undefined) { newScope[fieldInMyInterface] = scope[fieldInParentScope]; }
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
                    if (fieldOnThisNode === 'children') { newNodeContent['-children'] = Array.isArray(value) ? value : [value];
                    } else if (['geometry', 'appearance', 'material', 'coord', 'color'].includes(fieldOnThisNode)) { newNodeContent[`-${fieldOnThisNode}`] = value;
                    } else { newNodeContent[`@${fieldOnThisNode}`] = value; }
                }
            });
            delete newNodeContent.IS;
        }
        if (newNodeContent['-children']) {
            const expandedChildren = [];
            for (const child of newNodeContent['-children']) {
                const expandedChild = expand(child, declarations, scope);
                if (expandedChild) {
                    if (Array.isArray(expandedChild)) { expandedChildren.push(...expandedChild);
                    } else { expandedChildren.push(expandedChild); }
                }
            }
            newNodeContent['-children'] = expandedChildren;
        }
        return newNode;
    }

    function processNode(node, parentTransform, options, defMap, parentColor) {
        if (!node || typeof node !== 'object') return;

        const nodeName = Object.keys(node)[0];
        if (!nodeName || nodeName.startsWith('@') || nodeName.startsWith('#')) return;

        const nodeContent = node[nodeName];

        if (nodeContent['@DEF']) {
            defMap[nodeContent['@DEF']] = node;
        }
        if (nodeContent['@USE']) {
            const useName = nodeContent['@USE'];
            if (defMap[useName]) {
                processNode(defMap[useName], parentTransform, options, defMap, parentColor);
            } else {
                console.warn(`USE node '${useName}' not found. Skipping.`);
            }
            return;
        }

        let currentTransform = [...parentTransform];

        const isTransformingNode = ['Transform', 'Group', 'HAnimHumanoid', 'HAnimJoint', 'HAnimSegment'].includes(nodeName);
        if (isTransformingNode) {
             const translation = nodeContent['@translation'] ? parseSFVec3f(nodeContent['@translation']) : [0,0,0];
             const center = nodeContent['@center'] ? parseSFVec3f(nodeContent['@center']) : [0,0,0];
             const rotation = nodeContent['@rotation'] ? parseSFRotation(nodeContent['@rotation']) : [0,1,0,0];
             const scale = nodeContent['@scale'] ? parseSFVec3f(nodeContent['@scale']) : [1,1,1];

             let localTransform = mat4.create();
             const T = mat4.fromTranslation(mat4.create(), translation);
             const C = mat4.fromTranslation(mat4.create(), center);
             const negC = mat4.fromTranslation(mat4.create(), [-center[0], -center[1], -center[2]]);
             const R = mat4.fromQuat(mat4.create(), mat4.axisAngleToQuat([], [rotation[0], rotation[1], rotation[2]], rotation[3]));
             const S = mat4.fromScaling(mat4.create(), scale);

             mat4.multiply(localTransform, S, negC);
             mat4.multiply(localTransform, R, localTransform);
             mat4.multiply(localTransform, C, localTransform);
             mat4.multiply(localTransform, T, localTransform);

             mat4.multiply(currentTransform, parentTransform, localTransform);
        }

        let currentColor = parentColor;
        if (nodeName === 'Shape') {
            const material = nodeContent['-appearance']?.Appearance?.['-material']?.Material;
            if (material && material['@diffuseColor']) {
                 currentColor = parseSFColor(material['@diffuseColor']);
            }

            const geometry = nodeContent['-geometry'];
            if (geometry) {
                const geoType = Object.keys(geometry)[0];
                const geoNode = geometry[geoType];
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
                    // --- START OF FIX ---
                    // This is the base index for the current shape's vertices.
                    const baseIndex = globalVertices.length;

                    for (const v of geoData.vertices) {
                        let tv = [0,0,0];
                        mat4.transformPoint(tv, v, currentTransform);
                        globalVertices.push(tv);
                        let vertexColor = (geoData.vertexColors && geoData.vertexColors[globalVertices.length - 1]) || currentColor;
                        globalVertexColors.push(vertexColor);
                    }

                    if (isLineSet) {
                         for (let i = 0; i < geoData.faces.length; i++) {
                            const line = geoData.faces[i].map(idx => idx + baseIndex);
                            globalEdges.push(line);
                            const edgeColor = (geoData.lineColors && geoData.lineColors[i]) ? geoData.lineColors[i] : currentColor;
                            globalEdgeColors.push(edgeColor);
                        }
                    } else {
                        for (const f of geoData.faces) {
                            globalFaces.push(f.map(idx => idx + baseIndex));
                        }
                    }
                    // --- END OF FIX ---
                }
            }
        }

        for (const key in nodeContent) {
            if (key.startsWith('@') || key.startsWith('#')) continue;

            const value = nodeContent[key];
            if (Array.isArray(value)) {
                for (const child of value) {
                    if (typeof child === 'object' && child !== null) {
                        processNode(child, currentTransform, options, defMap, currentColor);
                    }
                }
            } else if (typeof value === 'object' && value !== null) {
                 processNode(value, currentTransform, options, defMap, currentColor);
            }
        }
    }

    function convertX3dToPly(x3dData, options = {}) {
        options.subdivisions = options.subdivisions || 24;
        if (typeof x3dData !== 'object' || !x3dData.X3D) {
            throw new Error("Invalid input. Must be a standard X3D JSON object.");
        }

        const scene = x3dData.X3D;
        const declarations = {};
        (scene.Scene?.['-children'] || []).forEach(child => {
            if (child.ProtoDeclare) { declarations[child.ProtoDeclare['@name']] = child.ProtoDeclare; }
        });

        const defMap = {};
        const expandedScene = expand({ Scene: scene.Scene }, declarations, null);

        globalVertices = []; globalFaces = []; globalVertexColors = [];
        globalEdges = []; globalEdgeColors = [];

        const initialTransform = mat4.create();
        const defaultColor = [1.0, 1.0, 1.0];

        // --- START OF FIX ---
        // The previous hardcoded traversal was wrong. This correctly iterates
        // through all children of the scene, allowing processNode to find all shapes.
        if (expandedScene.Scene && expandedScene.Scene['-children']) {
            for(const child of expandedScene.Scene['-children']) {
                processNode(child, initialTransform, options, defMap, defaultColor);
            }
        }
        // --- END OF FIX ---

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
