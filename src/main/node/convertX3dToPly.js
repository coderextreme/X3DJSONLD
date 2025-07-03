/**
 * X3D to PLY Converter
 *
 * This script provides a function to convert X3D scene data (in JSON object format)
 * into the PLY 3D model format. It handles scene graph transformations, prototype expansion,
 * and tessellates primitive geometry into triangle meshes with vertex colors.
 *
 * @version 2.3.0
 * @author AI Assistant, with critical fixes and addition of Extrusion support.
 *
 * Features:
 * - Parses X3D JSON object format.
 * - Expands `ProtoDeclare` and `ProtoInstance` nodes.
 * - Handles diffuseColor from Material nodes to produce colored PLY files.
 * - Handles the 'Color' node on IndexedFaceSet geometry, which overrides Material color.
 * - Correctly parses string values for vectors and rotations from ProtoInstance fields.
 * - Traverses the scene graph, applying nested `Transform` nodes with robust accumulation.
 * - Tessellates primitive shapes: Box, Sphere, Cylinder, Cone, and Extrusion.
 * - Processes `IndexedFaceSet` geometry, correctly accessing child nodes like `-coord` and `-color`.
 * - Outputs ASCII PLY format with vertex colors.
 *
 * Limitations:
 * - Does not support other material properties (e.g., normals, texture coordinates).
 * - When a 'Color' node has multiple colors, only the first color is used for the entire object.
 * - Assumes `IndexedFaceSet` and `Extrusion` cross-sections are convex for simple fan triangulation.
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
    // *** NEW: Helper to parse MFVec2f (for Extrusion crossSection and scale) ***
    const parseMFVec2f = v => {
        if (typeof v === 'string') return parseMFVec2f(parseNumArray(v));
        if (Array.isArray(v) && typeof v[0] === 'number') {const r=[];for(let i=0;i<v.length;i+=2){r.push([v[i],v[i+1]])}return r}
        return v;
    };
    const parseMFVec3f = v => {
        if (typeof v === 'string') return parseMFVec3f(parseNumArray(v));
        if (Array.isArray(v) && typeof v[0] === 'number') {const r=[];for(let i=0;i<v.length;i+=3){r.push([v[i],v[i+1],v[i+2]])}return r}
        return v;
    };
    // *** NEW: Helper to parse MFRotation (for Extrusion orientation) ***
    const parseMFRotation = v => {
        if (typeof v === 'string') return parseMFRotation(parseNumArray(v));
        if (Array.isArray(v) && typeof v[0] === 'number') {const r=[];for(let i=0;i<v.length;i+=4){r.push([v[i],v[i+1],v[i+2],v[i+3]])}return r}
        return v;
    };
    const parseBool = v => (typeof v === 'string') ? v.toLowerCase() === 'true' : v;

    function tessellateBox(node, options) { /* ... (Unchanged) ... */
        const size = node['@size'] ? parseSFVec3f(node['@size']) : [2, 2, 2];
        const hx = size[0] / 2, hy = size[1] / 2, hz = size[2] / 2;
        const vertices = [[-hx,-hy,hz],[hx,-hy,hz],[hx,hy,hz],[-hx,hy,hz],[-hx,-hy,-hz],[hx,-hy,-hz],[hx,hy,-hz],[-hx,hy,-hz]];
        const faces = [[0,1,2],[0,2,3],[1,5,6],[1,6,2],[5,4,7],[5,7,6],[4,0,3],[4,3,7],[3,2,6],[3,6,7],[4,5,1],[4,1,0]];
        return { vertices, faces };
    }
	/**
 * Tessellates a sphere using latitude-longitude parameterization
 * @param {Object} node - Node object containing sphere parameters
 * @param {string|number} [node['@radius']] - Sphere radius (default: 1)
 * @param {Object} options - Tessellation options
 * @param {number} [options.subdivisions=24] - Number of subdivisions for latitude and longitude
 * @returns {Object} Object containing vertices and faces arrays
 */
function tessellateSphere(node, options = {}) {
    // Parse radius with validation
    const radius = node?.['@radius'] ? parseFloat(node['@radius']) : 1;
    if (radius <= 0) {
        throw new Error('Sphere radius must be positive');
    }

    // Parse subdivisions with validation
    const subdivisions = Math.max(3, Math.floor(options.subdivisions || 24));

    const vertices = [];
    const faces = [];

    // Generate vertices using spherical coordinates
    // θ (theta) = latitude angle from 0 to π
    // φ (phi) = longitude angle from 0 to 2π
    for (let latIndex = 0; latIndex <= subdivisions; latIndex++) {
        const theta = (latIndex * Math.PI) / subdivisions; // Latitude angle
        const sinTheta = Math.sin(theta);
        const cosTheta = Math.cos(theta);

        for (let lonIndex = 0; lonIndex <= subdivisions; lonIndex++) {
            const phi = (lonIndex * 2 * Math.PI) / subdivisions; // Longitude angle
            const sinPhi = Math.sin(phi);
            const cosPhi = Math.cos(phi);

            // Convert spherical to Cartesian coordinates
            const x = radius * sinTheta * sinPhi;
            const y = radius * cosTheta;
            const z = radius * sinTheta * cosPhi;

            vertices.push([x, y, z]);
        }
    }

    // Generate faces (triangles) by connecting adjacent vertices
    for (let latIndex = 0; latIndex < subdivisions; latIndex++) {
        for (let lonIndex = 0; lonIndex < subdivisions; lonIndex++) {
            // Calculate vertex indices for current quad
            const verticesPerRow = subdivisions + 1;
            const topLeft = latIndex * verticesPerRow + lonIndex;
            const topRight = topLeft + 1;
            const bottomLeft = (latIndex + 1) * verticesPerRow + lonIndex;
            const bottomRight = bottomLeft + 1;

            // Create two triangles for each quad
            // Triangle 1: top-left, top-right, bottom-right
            faces.push([topLeft, topRight, bottomRight]);

            // Triangle 2: top-left, bottom-right, bottom-left
            faces.push([topLeft, bottomRight, bottomLeft]);
        }
    }

    return {
        vertices: vertices,
        faces: faces,
        metadata: {
            radius: radius,
            subdivisions: subdivisions,
            vertexCount: vertices.length,
            faceCount: faces.length
        }
    };
}

/**
 * Alternative implementation using icospheric tessellation for more uniform triangles
 * @param {Object} node - Node object containing sphere parameters
 * @param {string|number} [node['@radius']] - Sphere radius (default: 1)
 * @param {Object} options - Tessellation options
 * @param {number} [options.subdivisions=2] - Number of subdivision levels (default: 2)
 * @returns {Object} Object containing vertices and faces arrays
 */
function tessellateIcoSphere(node, options = {}) {
    const radius = node?.['@radius'] ? parseFloat(node['@radius']) : 1;
    if (radius <= 0) {
        throw new Error('Sphere radius must be positive');
    }

    const subdivisions = Math.max(0, Math.floor(options.subdivisions || 2));

    // Golden ratio for icosahedron
    const phi = (1 + Math.sqrt(5)) / 2;
    const invPhi = 1 / phi;

    // Initial icosahedron vertices
    const vertices = [
        [-invPhi, phi, 0], [invPhi, phi, 0], [-invPhi, -phi, 0], [invPhi, -phi, 0],
        [0, -invPhi, phi], [0, invPhi, phi], [0, -invPhi, -phi], [0, invPhi, -phi],
        [phi, 0, -invPhi], [phi, 0, invPhi], [-phi, 0, -invPhi], [-phi, 0, invPhi]
    ];

    // Normalize initial vertices to unit sphere
    vertices.forEach(vertex => {
        const length = Math.sqrt(vertex[0] ** 2 + vertex[1] ** 2 + vertex[2] ** 2);
        vertex[0] /= length;
        vertex[1] /= length;
        vertex[2] /= length;
    });

    // Initial icosahedron faces
    let faces = [
        [0, 11, 5], [0, 5, 1], [0, 1, 7], [0, 7, 10], [0, 10, 11],
        [1, 5, 9], [5, 11, 4], [11, 10, 2], [10, 7, 6], [7, 1, 8],
        [3, 9, 4], [3, 4, 2], [3, 2, 6], [3, 6, 8], [3, 8, 9],
        [4, 9, 5], [2, 4, 11], [6, 2, 10], [8, 6, 7], [9, 8, 1]
    ];

    // Subdivide faces
    for (let level = 0; level < subdivisions; level++) {
        const newFaces = [];
        const midpointCache = new Map();

        // Helper function to get midpoint vertex index
        const getMidpoint = (i, j) => {
            const key = i < j ? `${i},${j}` : `${j},${i}`;
            if (midpointCache.has(key)) {
                return midpointCache.get(key);
            }

            const v1 = vertices[i];
            const v2 = vertices[j];
            const midpoint = [
                (v1[0] + v2[0]) / 2,
                (v1[1] + v2[1]) / 2,
                (v1[2] + v2[2]) / 2
            ];

            // Normalize to unit sphere
            const length = Math.sqrt(midpoint[0] ** 2 + midpoint[1] ** 2 + midpoint[2] ** 2);
            midpoint[0] /= length;
            midpoint[1] /= length;
            midpoint[2] /= length;

            const index = vertices.length;
            vertices.push(midpoint);
            midpointCache.set(key, index);
            return index;
        };

        // Subdivide each face into 4 triangles
        faces.forEach(face => {
            const [a, b, c] = face;
            const ab = getMidpoint(a, b);
            const bc = getMidpoint(b, c);
            const ca = getMidpoint(c, a);

            newFaces.push([a, ab, ca]);
            newFaces.push([b, bc, ab]);
            newFaces.push([c, ca, bc]);
            newFaces.push([ab, bc, ca]);
        });

        faces = newFaces;
    }

    // Scale vertices to desired radius
    vertices.forEach(vertex => {
        vertex[0] *= radius;
        vertex[1] *= radius;
        vertex[2] *= radius;
    });

    return {
        vertices: vertices,
        faces: faces,
        metadata: {
            radius: radius,
            subdivisions: subdivisions,
            vertexCount: vertices.length,
            faceCount: faces.length
        }
    };
}
/*
    function tessellateSphere(node, options) {
        const r = node['@radius'] ? parseFloat(node['@radius']) : 1;
        const sub = options.subdivisions || 24; const verts=[], faces=[];
        for (let j=0;j<=sub;j++){let aj=j*Math.PI/sub,sj=Math.sin(aj),cj=Math.cos(aj); for(let i=0;i<=sub;i++){let ai=i*2*Math.PI/sub,si=Math.sin(ai),ci=Math.cos(ai); verts.push([r*si*sj,r*cj,r*ci*sj]);}}
        for(let j=0;j<sub;j++){for(let i=0;i<sub;i++){let p1=j*(sub+1)+i,p2=p1+1,p3=(j+1)*(sub+1)+i,p4=p3+1; faces.push([p1,p2,p4]); faces.push([p1,p4,p3]);}}
        return { vertices: verts, faces: faces };
    }
*/
    function tessellateCylinder(node, options) { /* ... (Unchanged) ... */
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
    function tessellateCone(node, options) { /* ... (Unchanged) ... */
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

    // *** NEW: Function to tessellate an Extrusion node ***
    function tessellateExtrusion(node, options) {
        const attrs = node['@'] || {};
        const crossSection = attrs.crossSection ? parseMFVec2f(attrs.crossSection) : [[1,1], [1,-1], [-1,-1], [-1,1], [1,1]];
        const spine = attrs.spine ? parseMFVec3f(attrs.spine) : [[0,0,0], [0,1,0]];
        const scale = attrs.scale ? parseMFVec2f(attrs.scale) : [[1,1]];
        const orientation = attrs.orientation ? parseMFRotation(attrs.orientation) : [[0,0,1,0]];
        const beginCap = attrs.beginCap !== undefined ? parseBool(attrs.beginCap) : true;
        const endCap = attrs.endCap !== undefined ? parseBool(attrs.endCap) : true;
        const ccw = attrs.ccw !== undefined ? parseBool(attrs.ccw) : true;

        if (spine.length < 2 || crossSection.length < 3) return { vertices: [], faces: [] };

        const vertices = [];
        const faces = [];
        const csLen = crossSection.length;

        // Generate all vertices by transforming the cross-section at each spine point
        for (let i = 0; i < spine.length; i++) {
            const spinePoint = spine[i];
            const currentScale = scale.length > 1 ? scale[i] : scale[0];
            const currentOrientation = orientation.length > 1 ? orientation[i] : orientation[0];

            let q = []; mat4.axisAngleToQuat(q, [currentOrientation[0], currentOrientation[1], currentOrientation[2]], currentOrientation[3]);
            let s = [currentScale[0], currentScale[1], 1]; // Use 2D scale for X and Y
            let sliceTransform = mat4.create();
            mat4.fromRotationTranslationScale(sliceTransform, q, spinePoint, s);

            for (let j = 0; j < csLen; j++) {
                const csPoint = [crossSection[j][0], crossSection[j][1], 0];
                let transformedPoint = [0,0,0];
                mat4.transformPoint(transformedPoint, csPoint, sliceTransform);
                vertices.push(transformedPoint);
            }
        }

        // Generate side faces
        for (let i = 0; i < spine.length - 1; i++) {
            for (let j = 0; j < csLen; j++) {
                // Handle loop-around for the last point in the cross-section
                if (crossSection[j][0] === crossSection[j + 1]?.[0] && crossSection[j][1] === crossSection[j + 1]?.[1]) continue;

                const j_next = (j + 1) % csLen;

                const v1 = i * csLen + j;
                const v2 = i * csLen + j_next;
                const v3 = (i + 1) * csLen + j_next;
                const v4 = (i + 1) * csLen + j;

                if (ccw) {
                    faces.push([v1, v2, v3]);
                    faces.push([v1, v3, v4]);
                } else {
                    faces.push([v1, v3, v2]);
                    faces.push([v1, v4, v3]);
                }
            }
        }

        // Generate caps (simple fan triangulation, assumes convex cross-section)
        const triangulateCap = (startIndex, isEndCap) => {
            const v0 = startIndex;
            for (let j = 1; j < csLen - 2; j++) {
                const v1 = startIndex + j;
                const v2 = startIndex + j + 1;
                // Winding order depends on CCW and whether it's the start or end cap
                if ((ccw && !isEndCap) || (!ccw && isEndCap)) {
                    faces.push([v0, v2, v1]);
                } else {
                    faces.push([v0, v1, v2]);
                }
            }
        };

        if (beginCap && csLen > 2) {
            triangulateCap(0, false);
        }
        if (endCap && csLen > 2) {
            const lastSliceStartIndex = (spine.length - 1) * csLen;
            triangulateCap(lastSliceStartIndex, true);
        }

        return { vertices, faces };
    }

    function processIndexedFaceSet(node) {
        const coordNode = node['-coord']?.Coordinate;
        if (!coordNode || !coordNode['@point']) return null;

        const points = parseMFVec3f(coordNode['@point']);
        const coordIndex = parseNumArray(node['@coordIndex']);

        let singleColor = null;
        const colorNode = node['-color']?.Color;
        if (colorNode && colorNode['@color']) {
            const colors = parseMFVec3f(colorNode['@color']);
            if (colors && colors.length > 0) {
                // For simplicity, take the first color and apply to all vertices.
                singleColor = colors[0];
            }
        }

        const faces = [];
        let currentFace = [];
        for (const index of coordIndex) {
            if (index === -1) {
                if (currentFace.length >= 3) {
                    const v0 = currentFace[0];
                    for (let i = 1; i < currentFace.length - 1; i++) {
                        faces.push([v0, currentFace[i], currentFace[i + 1]]);
                    }
                }
                currentFace = [];
            } else {
                currentFace.push(index);
            }
        }
        if (currentFace.length >= 3) {
            const v0 = currentFace[0];
            for (let i = 1; i < currentFace.length - 1; i++) {
                faces.push([v0, currentFace[i], currentFace[i + 1]]);
            }
        }
        return { vertices: points, faces: faces, color: singleColor };
    }

    let globalVertices = [], globalFaces = [], globalVertexColors = [];

    function findProtoDeclarations(scene) { /* ... (Unchanged) ... */
        const declarations = {};
        const children = (scene.Scene || {})["-children"] || [];
        for (const child of children) {
            if (child.ProtoDeclare) {
                declarations[child.ProtoDeclare['@name']] = child.ProtoDeclare;
            }
        }
        return declarations;
    }
    function expandProtoInstance(protoInstance, declarations) { /* ... (Unchanged) ... */
        const protoName = protoInstance['@name'];
        const protoDeclare = declarations[protoName];
        if (!protoDeclare) {console.warn(`ProtoDeclare not found for name: ${protoName}`);return null}
        const expandedBody = JSON.parse(JSON.stringify(protoDeclare.ProtoBody));
        const instanceValues = {};
        for(const fv of (protoInstance.fieldValue || [])) {if(fv['@value']!==undefined){instanceValues[fv['@name']]=fv['@value']}else if(fv['-children']){instanceValues[fv['@name']]=fv['-children']}}
        const instanceConnects = {};
        for(const connect of (protoInstance.IS?.connect||[])){instanceConnects[connect['@nodeField']]=connect['@protoField']}
        function applyIsConnects(node, parentInstanceValues, parentConnects) {
            if(!node) return;
            const nodeName=Object.keys(node)[0];const nodeContent=node[nodeName];
            if(nodeContent.IS&&nodeContent.IS.connect){for(const connect of nodeContent.IS.connect){const protoField=connect['@protoField'];const nodeField=connect['@nodeField'];if(parentInstanceValues[protoField]!==undefined){if(nodeField==='children'){nodeContent['-children']=parentInstanceValues[protoField]}else{if(!nodeContent['@'])nodeContent['@']={};nodeContent['@'][nodeField]=parentInstanceValues[protoField]}}}}
            if(nodeContent['-children']){for(let i=0;i<nodeContent['-children'].length;i++){const child=nodeContent['-children'][i];if(child.ProtoInstance){const nestedInstance=child.ProtoInstance;for(const key in parentConnects){if(instanceValues[parentConnects[key]]!==undefined){if(!nestedInstance.fieldValue)nestedInstance.fieldValue=[];nestedInstance.fieldValue.push({'@name':key,'@value':instanceValues[parentConnects[key]]})}}
            nodeContent['-children'][i]=expandProtoInstance(nestedInstance,declarations);if(nodeContent['-children'][i]===null){nodeContent['-children'].splice(i,1);i--}}else{applyIsConnects(child,parentInstanceValues,parentConnects)}}}
        }
        applyIsConnects(expandedBody, instanceValues, instanceConnects);
        if(expandedBody['-children']&&expandedBody['-children'].length>0){return expandedBody['-children'][0]}
        return null;
    }

    function processNode(node, parentTransform, options, declarations, parentColor) {
        if (!node) return;
        let currentTransform = [...parentTransform];
        let currentColor = parentColor;
        const nodeName = Object.keys(node)[0];
        if (!nodeName) return;
        const nodeContent = node[nodeName];

        if (nodeName === 'Transform' || nodeName === 'Group') {
             const attrs = nodeContent['@'] || {};
             const translation = attrs.translation ? parseSFVec3f(attrs.translation) : [0,0,0];
             const rotation = attrs.rotation ? parseSFRotation(attrs.rotation) : [0,1,0,0];
             const scale = attrs.scale ? parseSFVec3f(attrs.scale) : [1,1,1];
             let q = []; mat4.axisAngleToQuat(q, [rotation[0], rotation[1], rotation[2]], rotation[3]);
             let localTransform = mat4.create(); mat4.fromRotationTranslationScale(localTransform, q, translation, scale);
             mat4.multiply(currentTransform, currentTransform, localTransform);
        }

        if (nodeName === 'Shape') {
            try {
                const material = nodeContent['-appearance']?.Appearance?.['-material']?.Material;
                if (material && material['@diffuseColor']) {
                    currentColor = parseSFColor(material['@diffuseColor']);
                }
            } catch (e) { /* ignore */ }
            const geometry = nodeContent['-geometry'];
            if (geometry) {
                const geoType = Object.keys(geometry)[0];
                const geoNode = geometry[geoType];
                let geoData = null;
                switch(geoType) {
                    case 'Box': geoData = tessellateBox(geoNode, options); break;
                    case 'Sphere': geoData = tessellateSphere(geoNode, options); break;
                    case 'Cylinder': geoData = tessellateCylinder(geoNode, options); break;
                    case 'Cone': geoData = tessellateCone(geoNode, options); break;
                    case 'IndexedFaceSet': geoData = processIndexedFaceSet(geoNode); break;
                    // *** MODIFICATION: Add Extrusion to the geometry switch ***
                    case 'Extrusion': geoData = tessellateExtrusion(geoNode, options); break;
		            default:
				        console.error(`Unrecognized geometry ${geoType}`); break;
                }
                if (geoData) {
                    // *** MODIFICATION: Use geometry's own color if it exists, otherwise use material color. ***
                    const shapeColor = geoData.color || currentColor;
		            console.error(`Recognized geometry ${geoType}`);
                    const offset = globalVertices.length;
                    for (const v of geoData.vertices) {
                        let tv = [0,0,0]; mat4.transformPoint(tv, v, currentTransform);
                        globalVertices.push(tv);
                        globalVertexColors.push(shapeColor); // Use the final determined color
                    }
                    for (const f of geoData.faces) {
                        globalFaces.push(f.map(i => i + offset));
                    }
                }
            }
        }

        const children = nodeContent['-children'] || [];
        for (const child of children) {
            if (child.ProtoInstance) {
                const expanded = expandProtoInstance(child.ProtoInstance, declarations);
                if (expanded) {
                    processNode(expanded, currentTransform, options, declarations, currentColor);
                }
            } else {
                processNode(child, currentTransform, options, declarations, currentColor);
            }
        }
    }

    function convertX3dToPly(x3dData, options = {}) {
        options.subdivisions = options.subdivisions || 24;
        if (typeof x3dData !== 'object' || !x3dData.X3D) {
            throw new Error("Invalid input. Must be a standard X3D JSON object.");
        }
        const scene = x3dData.X3D;
        const declarations = findProtoDeclarations(scene);
        globalVertices = []; globalFaces = []; globalVertexColors = [];
        const initialTransform = mat4.create();
        const defaultColor = [1.0, 1.0, 1.0];
        processNode({ "Scene": scene.Scene }, initialTransform, options, declarations, defaultColor);

        if (globalVertices.length === 0 || (globalVertices.length > 0 && isNaN(globalVertices[0][0]))) {
            let comment = (globalVertices.length > 0 && isNaN(globalVertices[0][0])) ? "NaN values generated during conversion" : "No geometry found to convert";
            return `ply\nformat ascii 1.0\ncomment ${comment}\nelement vertex 0\nproperty float x\nproperty float y\nproperty float z\nproperty uchar red\nproperty uchar green\nproperty uchar blue\nelement face 0\nproperty list uchar int vertex_indices\nend_header\n`;
        }

        let plyString = "ply\nformat ascii 1.0\n";
        plyString += `element vertex ${globalVertices.length}\nproperty float x\nproperty float y\nproperty float z\n`;
        plyString += "property uchar red\nproperty uchar green\nproperty uchar blue\n";
        plyString += `element face ${globalFaces.length}\nproperty list uchar int vertex_indices\nend_header\n`;
        globalVertices.forEach((v, i) => {
            const color = globalVertexColors[i];
            const r = Math.round(color[0] * 255);
            const g = Math.round(color[1] * 255);
            const b = Math.round(color[2] * 255);
            plyString += `${v[0]} ${v[1]} ${v[2]} ${r} ${g} ${b}\n`;
        });
        globalFaces.forEach(f => {
            plyString += `3 ${f[0]} ${f[1]} ${f[2]}\n`;
        });
        return plyString;
    }

    return convertX3dToPly;
}
