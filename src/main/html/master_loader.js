// master_loader.js

import X3DJSONLD from '../node/X3DJSONLD.js';
import JavaScriptSerializer from '../node/JavaScriptSerializer.js';
import convertJsonToStl from '../node/convertJsonToStl.js';
import convertStlToJson from '../node/convertStlToJson.js';
import convertPlyToJson from '../node/convertPlyToJson.js';
// IMPORT: Import the encode function from exi.js
import { encodeJSON } from './exi.js';

// EXPORT: Re-export the decode function so main_viewer.html can import it
export { decodeJSON } from './exi.js';

let x3domIframe = null;
let xiteIframe = null;
let x3domRuntimeFullyReady = false;
let xiteRuntimeFullyReady = false;

let xiteLoadQueue = null;
let x3domUrlLoadQueue = null;
let globalXmlForJsonConversion = null;
window.pendingXmlToJsonConversion = false;
let lastBlobUrl = null; // To manage and revoke blob URLs

export function resetX3DOMReadyState() {
    console.log("Master_loader: Resetting X3DOM ready state for reload.");
    x3domRuntimeFullyReady = false;
    x3domUrlLoadQueue = null;
}

async function processPendingXmlToJson() {
    if (!window.pendingXmlToJsonConversion || !globalXmlForJsonConversion || !xiteRuntimeFullyReady) {
        return;
    }
    const xmlToConvert = globalXmlForJsonConversion;
    globalXmlForJsonConversion = null;
    window.pendingXmlToJsonConversion = false;

    try {
        const jsonString = await xiteIframe.contentWindow.getSceneAsJsonString();
        if (jsonString) {
            // Only update the textarea. Do not trigger a re-render.
            const prettyJson = JSON.stringify(JSON.parse(jsonString), null, 2);
            $('#json').val(prettyJson);
            // After populating JSON from XML, also convert it to EXI
            encodeJSON();
        } else {
             throw new Error("X_ITE returned null/empty JSON string.");
        }
    } catch (e) {
        $('#json').val("Error during XML->JSON conversion: " + e.message);
    }
}

window.x3domIframeReadyForAdvancedOps = function() {
    console.log("Master_loader: X3DOM iframe reports fully ready.");
    x3domRuntimeFullyReady = true;
    if (x3domUrlLoadQueue && x3domIframe?.contentWindow?.loadUrl) {
        const urlToLoad = x3domUrlLoadQueue;
        x3domUrlLoadQueue = null;
        x3domIframe.contentWindow.loadUrl(urlToLoad);
    }
};

window.xiteIframeReadyForAdvancedOps = async function() {
    console.log("Master_loader: X_ITE iframe reports fully ready.");
    xiteRuntimeFullyReady = true;
    if (xiteLoadQueue && xiteIframe?.contentWindow?.loadContentInXite) {
        const xmlToLoad = xiteLoadQueue;
        xiteLoadQueue = null;
        await xiteIframe.contentWindow.loadContentInXite(xmlToLoad);
    }
    await processPendingXmlToJson();
};

export function setX3DOMIFrame(iframeElement) {
    x3domIframe = iframeElement;
}
export function getX3DOMIFrame() { return x3domIframe; }

export function setXITEIFrame(iframeElement) {
    xiteIframe = iframeElement;
    xiteIframe.onload = () => console.log("X_ITE iframe 'onload' fired. Waiting for full runtime signal.");
}
export function getXITEIFrame() { return xiteIframe; }

async function displayInIframes(urlForX3dom, xmlContentForXite) {
    // Revoke the previous blob URL to prevent memory leaks
    if (lastBlobUrl) {
        URL.revokeObjectURL(lastBlobUrl);
        lastBlobUrl = null;
    }
    // If the new URL is a blob, store it for future revocation
    if (urlForX3dom.startsWith('blob:')) {
        lastBlobUrl = urlForX3dom;
    }

    const xitePromise = (async () => {
        if (xiteRuntimeFullyReady && xiteIframe?.contentWindow?.loadContentInXite) {
            await xiteIframe.contentWindow.loadContentInXite(xmlContentForXite || '');
        } else {
            xiteLoadQueue = xmlContentForXite || '';
        }
    })();

    const x3domPromise = (async () => {
        if (x3domRuntimeFullyReady && x3domIframe?.contentWindow?.loadUrl) {
            x3domIframe.contentWindow.loadUrl(urlForX3dom);
        } else {
            x3domUrlLoadQueue = urlForX3dom;
        }
    })();

    await Promise.all([xitePromise, x3domPromise]);
}

export async function loadX3DFile(filePath) {
    document.getElementById('currentFileName').textContent = filePath || 'None';
    if (!filePath) return;

    $('.control-panel textarea').val('');
    window.pendingXmlToJsonConversion = false;
    globalXmlForJsonConversion = null;

    try {
        const response = await fetch(filePath);
        if (!response.ok) throw new Error(`HTTP error ${response.status}`);
        const fileExtension = filePath.split('.').pop().toLowerCase();

        // Read content as text, suitable for JSON, XML, STL, and PLY
        const fileContent = await response.text();

        if (['json', 'x3dj'].includes(fileExtension)) {
            await updateFromJson(JSON.parse(fileContent), filePath, filePath);
        } else if (['x3d', 'xml', 'x3dv'].includes(fileExtension)) {
            await updateFromXml(fileContent, filePath, filePath);
        } else if (fileExtension === 'stl') {
            await updateFromStl(fileContent, filePath);
        } else if (fileExtension === 'ply') {
            await updateFromPly(fileContent, filePath);
        } else {
            alert('Unsupported file type: ' + fileExtension);
        }
    } catch (error) {
        alert(`Error loading file: ${filePath}\n${error.message}`);
    }
}

export async function updateFromJson(jsonObj, sourceFileName, urlForX3dom = null) {
    document.getElementById('currentFileName').textContent = sourceFileName;
    const baseFileName = sourceFileName.substring(sourceFileName.lastIndexOf('/') + 1);
    const jsonString = JSON.stringify(jsonObj, null, 2);
    $('#json').val(jsonString);

    let xmlString = "";
    try {
        [, xmlString] = X3DJSONLD.loadJsonIntoXml(document.implementation, jsonObj, sourceFileName);
        $('#xml').val(xmlString);
    } catch (e) {
        $('#xml').val("Error converting JSON to XML: " + e.message);
        return;
    }

    let effectiveUrlForX3dom = urlForX3dom;
    if (!effectiveUrlForX3dom) {
        const xmlBlob = new Blob([xmlString], { type: 'model/x3d+xml' });
        effectiveUrlForX3dom = URL.createObjectURL(xmlBlob);
    }

    // RENDER: X3DOM gets a URL (file path or blob URL), X_ITE gets the XML string.
    await displayInIframes(effectiveUrlForX3dom, xmlString);

    // CONVERT: Update other textareas.
    try { $('#stl').val(convertJsonToStl(jsonObj)); } catch (e) { $('#stl').val("Error converting to STL: " + e.message); }
    try {
        let jsSerializer = new JavaScriptSerializer();
        $('#java').val(jsSerializer.serializeToString(jsonObj, baseFileName, "", []));
    } catch (e) { $('#java').val("Error generating Java: " + e.message); }
    
    // INTEGRATION: Automatically encode the final JSON to EXI.
    encodeJSON();
}

export async function updateFromXml(xmlString, sourceFileName, urlForX3dom) {
    document.getElementById('currentFileName').textContent = sourceFileName;
    $('#xml').val(xmlString);
    $('#json').val('Converting from XML via X_ITE...');
    // Clear EXI while converting
    $('#exi').val('');

    await displayInIframes(urlForX3dom, xmlString);

    globalXmlForJsonConversion = xmlString;
    window.pendingXmlToJsonConversion = true;
    await processPendingXmlToJson();
}

/**
 * Handles STL file content. Converts to JSON and delegates to the JSON update pipeline.
 */
export async function updateFromStl(stlText, sourceFileName) {
    try {
        const jsonObj = convertStlToJson(stlText);
        // Delegate to the main JSON pipeline, which will create a blob for rendering.
        await updateFromJson(jsonObj, sourceFileName.replace(/\.stl$/i, ".json"));
        $('#stl').val(stlText); // Populate the original STL text
    } catch (e) {
        alert("Error converting STL: " + e.message);
    }
}

/**
 * Handles PLY file content. Converts to JSON and delegates to the JSON update pipeline.
 */
export async function updateFromPly(plyText, sourceFileName) {
    try {
        const jsonObj = convertPlyToJson(plyText);
        // Delegate to the main JSON pipeline, which will create a blob for rendering.
        await updateFromJson(jsonObj, sourceFileName.replace(/\.ply$/i, ".json"));
        $('#ply').val(plyText); // Populate the original PLY text
    } catch (e) {
        alert("Error converting PLY: ".concat(e.message));
    }
}
