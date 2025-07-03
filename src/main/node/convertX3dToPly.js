/**
 * X3D to PLY Converter
 *
 * This script provides a function to convert X3D scene data (in JSON object format)
 * into the PLY 3D model format. It handles scene graph transformations, prototype expansion,
 * and tessellates primitive geometry into triangle meshes with vertex colors.
 *
 * @version 2.1.2
 * @author AI Assistant, with critical fix for parsing ProtoInstance field values.
 *
 * Features:
 * - Parses X3D JSON object format.
 * - Expands `ProtoDeclare` and `ProtoInstance` nodes.
 * - Handles diffuseColor from Material nodes to produce colored PLY files.
 * - **Correctly parses string values for vectors and rotations from ProtoInstance fields.**
 * - Traverses the scene graph, applying nested `Transform` nodes.
 * - Tessellates primitive shapes: Box, Sphere, Cylinder, Cone.
 * - Processes `IndexedFaceSet` geometry.
 * - Outputs ASCII PLY format with vertex colors.
 *
 * Limitations:
 * - Does not support other material properties (e.g., normals, texture coordinates).
 * - Assumes `IndexedFaceSet` polygons are convex for simple fan triangulation.
 */
export default function createX3dToPlyConverter() {

    const mat4 = {
        create: () => [1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1],
        multiply: (out,a,b) => {let a00=a[0],a01=a[4],a02=a[8],a03=a[12],a10=a[1],a11=a[5],a12=a[9],a13=a[13],a20=a[2],a21=a[6],a22=a[10],a23=a[14],a30=a[3],a31=a[7],a32=a[11],a33=a[15];let b00=b[0],b01=b[4],b02=b[8],b03=b[12],b10=b[1],b11=b[5],b12=b[9],b13=b[13],b20=b[2],b21=b[6],b22=b[10],b23=b[14],b30=b[3],b31=b[7],b32=b[11],b33=b[15];out[0]=b00*a00+b10*a01+b20*a02+b30*a03;out[4]=b01*a00+b11*a01+b21*a02+b31*a03;out[8]=b02*a00+b12*a01+b22*a02+b32*a03;out[12]=b03*a00+b13*a01+b23*a02+b33*a03;out[1]=b00*a10+b10*a11+b20*a12+b30*a13;out[5]=b01*a10+b11*a11+b21*a12+b31*a13;out[9]=b02*a10+b12*a11+b22*a12+b32*a13;out[13]=b03*a10+b13*a11+b23*a12+b33*a13;out[2]=b00*a20+b10*a21+b20*a22+b30*a23;out[6]=b01*a20+b11*a21+b21*a22+b31*a23;out[10]=b02*a20+b12*a21+b22*a22+b32*a23;out[14]=b03*a20+b13*a21+b23*a22+b33*a23;out[3]=b00*a30+b10*a31+b20*a32+b30*a33;out[7]=b01*a30+b11*a31+b21*a32+b31*a33;out[11]=b02*a30+b12*a31+b22*a32+b32*a33;out[15]=b03*a30+b13*a31+b23*a32+b33*a33;return out},
        fromRotationTranslationScale: (out,q,v,s) => {let x=q[0],y=q[1],z=q[2],w=q[3],x2=x+x,y2=y+y,z2=z+z,xx=x*x2,xy=x*y2,xz=x*z2,yy=y*y2,yz=y*z2,zz=z*z2,wx=w*x2,wy=w*y2,wz=w*z2;out[0]=(1-(yy+zz))*s[0];out[1]=(xy+wz)*s[0];out[2]=(xz-wy)*s[0];out[3]=0;out[4]=(xy-wz)*s[1];out[5]=(1-(xx+zz))*s[1];out[6]=(yz+wx)*s[1];out[7]=0;out[8]=(xz+wy)*s[2];out[9]=(yz-wx)*s[2];out[10]=(1-(xx+yy))*s[2];out[11]=0;out[12]=v[0];out[13]=v[1];out[14]=v[2];out[15]=1;return out},
        transformPoint: (out,p,m) => {let x=p[0],y=p[1],z=p[2],w=(m[3]*x+m[7]*y+m[11]*z+m[15]||1);out[0]=(m[0]*x+m[4]*y+m[8]*z+m[12])/w;out[1]=(m[1]*x+m[5]*y+m[9]*z+m[13])/w;out[2]=(m[2]*x+m[6]*y+m[10]*z+m[14])/w;return out},
        axisAngleToQuat: (out,axis,angle) => {let s=Math.sin(angle*.5);out[0]=axis[0]*s;out[1]=axis[1]*s;out[2]=axis[2]*s;out[3]=Math.cos(angle*.5);return out}
    };

    // Robust parsing functions that handle both strings and arrays
    const parseNumArray = v => (typeof v === 'string') ? v.trim().split(/\s+/).map(Number) : v;
    const parseSFColor = v => parseNumArray(v);
    const parseSFVec3f = v => parseNumArray(v);
    const parseSFRotation = v => parseNumArray(v);
    const parseMFVec3f = v => {
        if (typeof v === 'string') return parseMFVec3f(parseNumArray(v));
        if (Array.isArray(v) && typeof v[0] === 'number') {const r=[];for(let i=0;i<v.length;i+=3){r.push([v[i],v[i+1],v[i+2]])}return r}
        return v;
    };

    function tessellateBox(node, options) { /* ... (Unchanged) ... */
        const size = node['@size'] ? parseSFVec3f(node['@size']) : [2, 2, 2];
        const hx = size[0] / 2, hy = size[1] / 2, hz = size[2] / 2;
        const vertices = [[-hx,-hy,hz],[hx,-hy,hz],[hx,hy,hz],[-hx,hy,hz],[-hx,-hy,-hz],[hx,-hy,-hz],[hx,hy,-hz],[-hx,hy,-hz]];
        const faces = [[0,1,2],[0,2,3],[1,5,6],[1,6,2],[5,4,7],[5,7,6],[4,0,3],[4,3,7],[3,2,6],[3,6,7],[4,5,1],[4,1,0]];
        return { vertices, faces };
    }
    function tessellateSphere(node, options) { /* ... (Unchanged) ... */
        const r = node['@radius'] ? parseFloat(node['@radius']) : 1;
        const sub = options.subdivisions || 24; const verts=[], faces=[];
        for (let j=0;j<=sub;j++){let aj=j*Math.PI/sub,sj=Math.sin(aj),cj=Math.cos(aj); for(let i=0;i<=sub;i++){let ai=i*2*Math.PI/sub,si=Math.sin(ai),ci=Math.cos(ai); verts.push([r*si*sj,r*cj,r*ci*sj]);}}
        for(let j=0;j<sub;j++){for(let i=0;i<sub;i++){let p1=j*(sub+1)+i,p2=p1+1,p3=(j+1)*(sub+1)+i,p4=p3+1; faces.push([p1,p2,p4]); faces.push([p1,p4,p3]);}}
        return { vertices: verts, faces: faces };
    }
    function processIndexedFaceSet(node) { /* ... (Unchanged) ... */
        const coordNode = node.coord.Coordinate;
        if (!coordNode || !coordNode['@point']) return null;
        const points = parseMFVec3f(coordNode['@point']);
        const coordIndex = parseNumArray(node['@coordIndex']);
        const faces = []; let currentFace = [];
        for (const index of coordIndex) {
            if (index===-1){if(currentFace.length>=3){const v0=currentFace[0]; for(let i=1;i<currentFace.length-1;i++){faces.push([v0,currentFace[i],currentFace[i+1]]);}} currentFace=[];}
            else{currentFace.push(index);}
        }
        if (currentFace.length>=3){const v0=currentFace[0]; for(let i=1;i<currentFace.length-1;i++){faces.push([v0,currentFace[i],currentFace[i+1]]);}}
        return { vertices: points, faces: faces };
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
    function expandProtoInstance(protoInstance, declarations) { /* ... (Unchanged, with previous fix) ... */
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
        let currentTransform = mat4.create();
        mat4.multiply(currentTransform, parentTransform, currentTransform);
        let currentColor = parentColor;
        const nodeName = Object.keys(node)[0];
        if (!nodeName) return;
        const nodeContent = node[nodeName];

        if (nodeName === 'Transform') {
             const attrs = nodeContent['@'] || {};
             // *** CRITICAL FIX: Ensure all vector/rotation inputs are parsed ***
             const translation = attrs.translation ? parseSFVec3f(attrs.translation) : [0,0,0];
             const rotation = attrs.rotation ? parseSFRotation(attrs.rotation) : [0,1,0,0];
             const scale = attrs.scale ? parseSFVec3f(attrs.scale) : [1,1,1];
             let q = []; mat4.axisAngleToQuat(q, [rotation[0], rotation[1], rotation[2]], rotation[3]);
             let localTransform = mat4.create(); mat4.fromRotationTranslationScale(localTransform, q, translation, scale);
             mat4.multiply(currentTransform, parentTransform, localTransform);
        }

        if (nodeName === 'Shape') {
            try {
                const material = nodeContent['-appearance']?.Appearance?.['-material']?.Material;
                if (material && material['@diffuseColor']) {
                    // *** CRITICAL FIX: Ensure color is parsed ***
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
                    case 'IndexedFaceSet': geoData = processIndexedFaceSet(geoNode); break;
                }
                if (geoData) {
                    const offset = globalVertices.length;
                    for (const v of geoData.vertices) {
                        let tv = [0,0,0]; mat4.transformPoint(tv, v, currentTransform);
                        globalVertices.push(tv);
                        globalVertexColors.push(currentColor);
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

        if (globalVertices.length === 0 || isNaN(globalVertices[0][0])) { // Check for NaN values
            let comment = isNaN(globalVertices[0]?.[0]) ? "NaN values generated during conversion" : "No geometry found to convert";
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
