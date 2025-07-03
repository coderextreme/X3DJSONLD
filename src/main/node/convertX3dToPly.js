/**
 * X3D to PLY Converter
 *
 * This script provides a function to convert X3D scene data (in XML string or JSON object format)
 * into the PLY 3D model format. It handles scene graph transformations and tessellates
 * primitive geometry (Box, Sphere, Cylinder, Cone) into triangle meshes.
 *
 * @version 1.2.0
 * @author AI Assistant
 *
 * Features:
 * - Parses X3D from XML string or X3D JSON object.
 * - Traverses the scene graph, applying nested `Transform` nodes.
 * - Tessellates primitive shapes: Box, Sphere, Cylinder, Cone.
 * - Processes `IndexedFaceSet` geometry, including triangulation of polygons.
 * - Outputs ASCII PLY format.
 * - Configurable tessellation subdivision level.
 *
 * Limitations:
 * - Ignores material properties (color, normals, texture coordinates). The output PLY is geometry-only.
 * - Does not support all X3D nodes (e.g., Extrusion, Nurbs, Scripts, Lights, etc.).
 * - Assumes `IndexedFaceSet` polygons are convex for simple fan triangulation.
 */
export default function createX3dToPlyConverter() {

    // A minimal matrix library for 4x4 column-major matrices (gl-matrix style)
    const mat4 = {
        create: () => [1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1],
        multiply: (out, a, b) => {
            let a00 = a[0], a01 = a[4], a02 = a[8], a03 = a[12];
            let a10 = a[1], a11 = a[5], a12 = a[9], a13 = a[13];
            let a20 = a[2], a21 = a[6], a22 = a[10], a23 = a[14];
            let a30 = a[3], a31 = a[7], a32 = a[11], a33 = a[15];
            let b00 = b[0], b01 = b[4], b02 = b[8], b03 = b[12];
            let b10 = b[1], b11 = b[5], b12 = b[9], b13 = b[13];
            let b20 = b[2], b21 = b[6], b22 = b[10], b23 = b[14];
            let b30 = b[3], b31 = b[7], b32 = b[11], b33 = b[15];
            out[0] = b00 * a00 + b10 * a01 + b20 * a02 + b30 * a03;
            out[4] = b01 * a00 + b11 * a01 + b21 * a02 + b31 * a03;
            out[8] = b02 * a00 + b12 * a01 + b22 * a02 + b32 * a03;
            out[12] = b03 * a00 + b13 * a01 + b23 * a02 + b33 * a03;
            out[1] = b00 * a10 + b10 * a11 + b20 * a12 + b30 * a13;
            out[5] = b01 * a10 + b11 * a11 + b21 * a12 + b31 * a13;
            out[9] = b02 * a10 + b12 * a11 + b22 * a12 + b32 * a13;
            out[13] = b03 * a10 + b13 * a11 + b23 * a12 + b33 * a13;
            out[2] = b00 * a20 + b10 * a21 + b20 * a22 + b30 * a23;
            out[6] = b01 * a20 + b11 * a21 + b21 * a22 + b31 * a23;
            out[10] = b02 * a20 + b12 * a21 + b22 * a22 + b32 * a23;
            out[14] = b03 * a20 + b13 * a21 + b23 * a22 + b33 * a23;
            out[3] = b00 * a30 + b10 * a31 + b20 * a32 + b30 * a33;
            out[7] = b01 * a30 + b11 * a31 + b21 * a32 + b31 * a33;
            out[11] = b02 * a30 + b12 * a31 + b22 * a32 + b32 * a33;
            out[15] = b03 * a30 + b13 * a31 + b23 * a32 + b33 * a33;
            return out;
        },
        fromRotationTranslationScale: (out, q, v, s) => {
            let x = q[0], y = q[1], z = q[2], w = q[3];
            let x2 = x + x, y2 = y + y, z2 = z + z;
            let xx = x * x2, xy = x * y2, xz = x * z2;
            let yy = y * y2, yz = y * z2, zz = z * z2;
            let wx = w * x2, wy = w * y2, wz = w * z2;
            out[0] = (1 - (yy + zz)) * s[0];
            out[1] = (xy + wz) * s[0];
            out[2] = (xz - wy) * s[0];
            out[3] = 0;
            out[4] = (xy - wz) * s[1];
            out[5] = (1 - (xx + zz)) * s[1];
            out[6] = (yz + wx) * s[1];
            out[7] = 0;
            out[8] = (xz + wy) * s[2];
            out[9] = (yz - wx) * s[2];
            out[10] = (1 - (xx + yy)) * s[2];
            out[11] = 0;
            out[12] = v[0];
            out[13] = v[1];
            out[14] = v[2];
            out[15] = 1;
            return out;
        },
        transformPoint: (out, p, m) => {
            let x = p[0], y = p[1], z = p[2];
            let w = m[3] * x + m[7] * y + m[11] * z + m[15] || 1.0;
            out[0] = (m[0] * x + m[4] * y + m[8] * z + m[12]) / w;
            out[1] = (m[1] * x + m[5] * y + m[9] * z + a[13]) / w;
            out[2] = (m[2] * x + m[6] * y + m[10] * z + a[14]) / w;
            return out;
        },
        axisAngleToQuat: (out, axis, angle) => {
            let s = Math.sin(angle * 0.5);
            out[0] = axis[0] * s;
            out[1] = axis[1] * s;
            out[2] = axis[2] * s;
            out[3] = Math.cos(angle * 0.5);
            return out;
        }
    };

    // --- Utility Functions ---
    const parseNumArray = str => str.trim().split(/\s+/).map(Number);
    const parseSFColor = str => parseNumArray(str);
    const parseSFVec3f = str => parseNumArray(str);
    const parseSFRotation = str => parseNumArray(str);
    const parseMFVec3f = str => {
        const arr = parseNumArray(str);
        const result = [];
        for (let i = 0; i < arr.length; i += 3) {
            result.push([arr[i], arr[i + 1], arr[i + 2]]);
        }
        return result;
    };
    
    // --- Tessellation Functions ---

    function tessellateBox(node) {
        const size = node.size ? parseSFVec3f(node.size) : [2, 2, 2];
        const hx = size[0] / 2, hy = size[1] / 2, hz = size[2] / 2;

        const vertices = [
            [-hx, -hy,  hz], [ hx, -hy,  hz], [ hx,  hy,  hz], [-hx,  hy,  hz],
            [-hx, -hy, -hz], [ hx, -hy, -hz], [ hx,  hy, -hz], [-hx,  hy, -hz]
        ];

        const faces = [
            [0, 1, 2], [0, 2, 3], // Front
            [1, 5, 6], [1, 6, 2], // Right
            [5, 4, 7], [5, 7, 6], // Back
            [4, 0, 3], [4, 3, 7], // Left
            [3, 2, 6], [3, 6, 7], // Top
            [4, 5, 1], [4, 1, 0]  // Bottom
        ];
        return { vertices, faces };
    }

    function tessellateSphere(node, options) {
        const radius = node.radius ? parseFloat(node.radius) : 1;
        const subdivisions = options.subdivisions || 24;
        const vertices = [];
        const faces = [];

        for (let j = 0; j <= subdivisions; j++) {
            const aj = j * Math.PI / subdivisions;
            const sj = Math.sin(aj);
            const cj = Math.cos(aj);
            for (let i = 0; i <= subdivisions; i++) {
                const ai = i * 2 * Math.PI / subdivisions;
                const si = Math.sin(ai);
                const ci = Math.cos(ai);
                vertices.push([radius * si * sj, radius * cj, radius * ci * sj]);
            }
        }

        for (let j = 0; j < subdivisions; j++) {
            for (let i = 0; i < subdivisions; i++) {
                const p1 = j * (subdivisions + 1) + i;
                const p2 = p1 + 1;
                const p3 = (j + 1) * (subdivisions + 1) + i;
                const p4 = p3 + 1;
                faces.push([p1, p2, p4]);
                faces.push([p1, p4, p3]);
            }
        }
        return { vertices, faces };
    }

    function tessellateCylinder(node, options) {
        const radius = node.radius ? parseFloat(node.radius) : 1;
        const height = node.height ? parseFloat(node.height) : 2;
        const subdivisions = options.subdivisions || 24;
        const vertices = [];
        const faces = [];
        const h2 = height / 2;

        // Side vertices
        for (let i = 0; i <= subdivisions; i++) {
            const angle = i * 2 * Math.PI / subdivisions;
            const x = radius * Math.cos(angle);
            const z = radius * Math.sin(angle);
            vertices.push([x, h2, z]);  // Top circle
            vertices.push([x, -h2, z]); // Bottom circle
        }

        // Top and bottom center vertices
        const topCenterIndex = vertices.length;
        vertices.push([0, h2, 0]);
        const bottomCenterIndex = vertices.length;
        vertices.push([0, -h2, 0]);

        // Faces
        for (let i = 0; i < subdivisions; i++) {
            const i0 = i * 2;
            const i1 = i0 + 1;
            const i2 = ((i + 1) % subdivisions) * 2;
            const i3 = i2 + 1;
            // Side
            faces.push([i0, i1, i3]);
            faces.push([i0, i3, i2]);
            // Top cap
            faces.push([i0, i2, topCenterIndex]);
            // Bottom cap
            faces.push([i1, bottomCenterIndex, i3]);
        }
        return { vertices, faces };
    }

    function tessellateCone(node, options) {
        const bottomRadius = node.bottomRadius ? parseFloat(node.bottomRadius) : 1;
        const height = node.height ? parseFloat(node.height) : 2;
        const subdivisions = options.subdivisions || 24;
        const vertices = [];
        const faces = [];
        const h2 = height / 2;

        // Apex
        const apexIndex = 0;
        vertices.push([0, h2, 0]);
        
        // Base vertices
        for (let i = 0; i <= subdivisions; i++) {
            const angle = i * 2 * Math.PI / subdivisions;
            const x = bottomRadius * Math.cos(angle);
            const z = bottomRadius * Math.sin(angle);
            vertices.push([x, -h2, z]);
        }
        const baseCenterIndex = vertices.length;
        vertices.push([0, -h2, 0]);

        // Faces
        for (let i = 0; i < subdivisions; i++) {
            const v1 = i + 1;
            const v2 = i + 2;
            // Side
            faces.push([apexIndex, v2, v1]);
            // Bottom cap
            faces.push([v1, v2, baseCenterIndex]);
        }
        return { vertices, faces };
    }
    
    // --- Geometry Processing ---
    
    function processIndexedFaceSet(node) {
        const coordNode = node.Coordinate || node.coord;
        if (!coordNode) return null;

        const points = parseMFVec3f(coordNode.point);
        const coordIndex = parseNumArray(node.coordIndex);
        
        const vertices = points;
        const faces = [];
        
        let currentFace = [];
        for (const index of coordIndex) {
            if (index === -1) {
                // Triangulate polygon (simple fan)
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
        // Handle last face if no trailing -1
        if (currentFace.length >= 3) {
            const v0 = currentFace[0];
            for (let i = 1; i < currentFace.length - 1; i++) {
                faces.push([v0, currentFace[i], currentFace[i + 1]]);
            }
        }
        
        return { vertices, faces };
    }


    // --- Scene Graph Traversal ---

    let globalVertices = [];
    let globalFaces = [];

    function processNode(node, parentTransform, options) {
        let currentTransform = mat4.create();
        mat4.multiply(currentTransform, parentTransform, currentTransform);

        // Calculate local transform if this is a Transform node
        if (node.nodeName === 'Transform' || node.DEF) {
             const translation = node.translation ? parseSFVec3f(node.translation) : [0, 0, 0];
             const rotation = node.rotation ? parseSFRotation(node.rotation) : [0, 1, 0, 0];
             const scale = node.scale ? parseSFVec3f(node.scale) : [1, 1, 1];
             const center = node.center ? parseSFVec3f(node.center) : [0,0,0];

             // X3D transform order: T * C * R * SR * S * -C * P
             // Simplified for this converter: T * R * S
             let q = [];
             mat4.axisAngleToQuat(q, [rotation[0], rotation[1], rotation[2]], rotation[3]);
             
             let localTransform = mat4.create();
             mat4.fromRotationTranslationScale(localTransform, q, translation, scale);
             
             mat4.multiply(currentTransform, parentTransform, localTransform);
        }
        
        const children = node.children || (node.Shape ? [node.Shape] : [])
                       .concat(node.Transform || [])
                       .concat(node.Group || []);
                       
        for (const child of children) {
            let geometryData = null;
            const geometryNode = child.Box || child.Sphere || child.Cylinder || child.Cone || child.IndexedFaceSet;
            
            if (child.nodeName === 'Shape' || geometryNode) {
                const actualGeometryNode = geometryNode || (child.geometry && Object.values(child.geometry)[0]);
                const nodeType = Object.keys(actualGeometryNode)[0];
                
                switch (nodeType) {
                    case 'Box':          geometryData = tessellateBox(actualGeometryNode.Box, options); break;
                    case 'Sphere':       geometryData = tessellateSphere(actualGeometryNode.Sphere, options); break;
                    case 'Cylinder':     geometryData = tessellateCylinder(actualGeometryNode.Cylinder, options); break;
                    case 'Cone':         geometryData = tessellateCone(actualGeometryNode.Cone, options); break;
                    case 'IndexedFaceSet': geometryData = processIndexedFaceSet(actualGeometryNode.IndexedFaceSet); break;
                }
            }

            if (geometryData && geometryData.vertices.length > 0) {
                const vertexOffset = globalVertices.length;
                
                // Transform and add vertices
                for (const v of geometryData.vertices) {
                    let transformedV = [];
                    mat4.transformPoint(transformedV, v, currentTransform);
                    globalVertices.push(transformedV);
                }
                
                // Offset and add faces
                for (const f of geometryData.faces) {
                    globalFaces.push(f.map(i => i + vertexOffset));
                }
            }
            
            // Recurse
            if (child.nodeName === 'Transform' || child.nodeName === 'Group' || child.DEF) {
                processNode(child, currentTransform, options);
            }
        }
    }
    
    // --- XML to JSON Conversion ---
    function xmlToJson(xml) {
        let obj = {};
        if (xml.nodeType == 1) { // element
            if (xml.attributes.length > 0) {
                for (let j = 0; j < xml.attributes.length; j++) {
                    const attribute = xml.attributes.item(j);
                    obj[attribute.nodeName] = attribute.nodeValue;
                }
            }
        } else if (xml.nodeType == 3) { // text
            obj = xml.nodeValue;
        }

        if (xml.hasChildNodes()) {
            for (let i = 0; i < xml.childNodes.length; i++) {
                const item = xml.childNodes.item(i);
                const nodeName = item.nodeName;
                if (typeof(obj[nodeName]) == "undefined") {
                    if (nodeName === '#text') {
                        if (item.nodeValue.trim()) obj = item.nodeValue;
                    } else {
                        obj[nodeName] = xmlToJson(item);
                    }
                } else {
                    if (typeof(obj[nodeName].push) == "undefined") {
                        const old = obj[nodeName];
                        obj[nodeName] = [];
                        obj[nodeName].push(old);
                    }
                    obj[nodeName].push(xmlToJson(item));
                }
            }
        }
        return obj;
    }


    /**
     * Converts X3D data into a PLY format string.
     * @param {string|object} x3dData - The X3D data, either as an XML string or a pre-parsed X3D JSON object.
     * @param {object} [options] - Conversion options.
     * @param {number} [options.subdivisions=24] - The number of subdivisions for tessellating primitives (Sphere, Cylinder, Cone).
     * @returns {string} The generated PLY file content.
     */
    function convertX3dToPly(x3dData, options = {}) {
        options.subdivisions = options.subdivisions || 24;

        let x3dJson;
        if (typeof x3dData === 'string') {
            // Assumes browser environment. For Node.js, use a library like 'xmldom'.
            if (typeof DOMParser === 'undefined') {
                throw new Error("DOMParser not found. This function requires a browser environment or a polyfill for XML parsing in Node.js (e.g., 'xmldom').");
            }
            const parser = new DOMParser();
            const xmlDoc = parser.parseFromString(x3dData, "text/xml");
            const sceneNode = xmlDoc.getElementsByTagName("Scene")[0];
            if (!sceneNode) {
                throw new Error("Could not find <Scene> element in the X3D XML.");
            }
            x3dJson = xmlToJson(sceneNode);
        } else if (typeof x3dData === 'object') {
            // Assume it's already in the X3D JSON format
            x3dJson = x3dData.X3D.Scene;
        } else {
            throw new Error("Invalid input type. x3dData must be an XML string or a JSON object.");
        }
        
        // Reset global state
        globalVertices = [];
        globalFaces = [];

        // Start traversal
        const initialTransform = mat4.create();
        processNode(x3dJson, initialTransform, options);

        // Build PLY string
        let plyString = "ply\n";
        plyString += "format ascii 1.0\n";
        plyString += `element vertex ${globalVertices.length}\n`;
        plyString += "property float x\n";
        plyString += "property float y\n";
        plyString += "property float z\n";
        plyString += `element face ${globalFaces.length}\n`;
        plyString += "property list uchar int vertex_indices\n";
        plyString += "end_header\n";
        
        globalVertices.forEach(v => {
            plyString += `${v[0]} ${v[1]} ${v[2]}\n`;
        });
        
        globalFaces.forEach(f => {
            plyString += `3 ${f[0]} ${f[1]} ${f[2]}\n`;
        });

        return plyString;
    }
    
    return convertX3dToPly;
}

// Example of how to make it available in different environments
// In a browser, you can include this script and then:
// const convertX3dToPly = createX3dToPlyConverter();

// For Node.js:
// module.exports = createX3dToPlyConverter;
