// master_loader.js

import X3DJSONLD from '../node/X3DJSONLD.js';
import JavaScriptSerializer from '../node/JavaScriptSerializer.js';
import CppFunctionBodySerializer from '../node/CppFunctionBodySerializer.js';
import ClojureSerializer from '../node/ClojureSerializer.js';
import JavaSerializer from '../node/JavaSerializer.js';
import GraalPySerializer from '../node/GraalPySerializer.js';
import JRubySerializer from '../node/JRubySerializer.js';
import convertJsonToStl from '../node/convertJsonToStl.js';
import convertStlToJson from '../node/convertStlToJson.js';
import convertPlyToJson from '../node/convertPlyToJson.js';
import createX3dToPlyConverter from '../node/convertX3dToPly.js';
import fieldTypes from '../node/fieldTypes.js';
import mapToMethod from '../node/mapToMethod.js';
import { DOMParser } from'@xmldom/xmldom';

import { encodeJSON } from './exi.js';

export { decodeJSON } from './exi.js';

let x3domIframe = null;
let xiteIframe = null;
let x3domRuntimeFullyReady = false;
let xiteRuntimeFullyReady = false;

let xiteLoadQueue = null;
let x3domUrlLoadQueue = null;
let globalXmlForJsonConversion = null;
window.pendingXmlToJsonConversion = false;
let lastBlobUrl = null;
let currentX3domUrl = '';

// New function to handle JSON to PLY conversion
function convertJsonToPly(jsonObj) {
	const convertX3dToPly = createX3dToPlyConverter();
	let ply = convertX3dToPly(jsonObj);
	return ply;
}

export function prepareForX3DOMReload() {
    console.log("Master_loader: Preparing for X3DOM reload. Caching current URL for re-render.");
    x3domRuntimeFullyReady = false;
    if (currentX3domUrl) {
        x3domUrlLoadQueue = currentX3domUrl;
    }
}

function updateOthersFromJsonObj(jsonObj, element, mapToMethod, fieldTypes) {
    const sourceFileName = document.getElementById('currentFileName').textContent;
    const baseFileName = sourceFileName.substring(sourceFileName.lastIndexOf('/') + 1);
    // Convert JSON to STL
    try {
        $('#stl').val(convertJsonToStl(jsonObj));
    } catch (e) {
        // If STL conversion fails (e.g., no geometry), show an error in its textarea.
        $('#stl').val("Error converting to STL: " + e.message);
    }
            
    // Convert JSON to PLY
    try {
        $('#ply').val(convertJsonToPly(jsonObj));
    } catch (e) {
        $('#ply').val("Error converting to PLY: " + e.message);
    }

    try {
        let jsSerializer = new JavaScriptSerializer();
        $('#javascript').val(jsSerializer.serializeToString(jsonObj, element, baseFileName, mapToMethod, fieldTypes));
    } catch (e) { $('#javascript').val("Error generating JavaScript: " + e.message); }

    try {
        let graalpySerializer = new GraalPySerializer();
        $('#python').val(graalpySerializer.serializeToString(jsonObj, element, baseFileName, mapToMethod, fieldTypes));
    } catch (e) { $('#python').val("Error generating GraalPy: " + e.message); }

    try {
        let javaSerializer = new JavaSerializer();
        $('#java').val(javaSerializer.serializeToString(jsonObj, element, baseFileName, mapToMethod, fieldTypes));
    } catch (e) { $('#java').val("Error generating Java: " + e.message); }

    try {
        let cppSerializer = new CppFunctionBodySerializer();
        $('#cpp').val(cppSerializer.serializeToString(jsonObj, element, baseFileName, mapToMethod, fieldTypes));
    } catch (e) { $('#cpp').val("Error generating C++: " + e.message); }

    try {
        let clojureSerializer = new ClojureSerializer();
        $('#clojure').val(clojureSerializer.serializeToString(jsonObj, element, baseFileName, mapToMethod, fieldTypes));
    } catch (e) { $('#clojure').val("Error generating Clojure: " + e.message); }

    try {
        let jRubySerializer = new JRubySerializer();
        $('#jruby').val(jRubySerializer.serializeToString(jsonObj, element, baseFileName, mapToMethod, fieldTypes));
    } catch (e) { $('#jruby').val("Error generating JRuby: " + e.message); }

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
            // We have the JSON string, now parse it into an object to use for other conversions.
            const jsonObj = JSON.parse(jsonString);

            // Populate the JSON textarea with a prettified version.
            $('#json').val(JSON.stringify(jsonObj, null, 2));
    	    const sourceFileName = document.getElementById('currentFileName').textContent;
	    let xmlString = "";
	    let element = null;
	    try {
		[ element, xmlString] = X3DJSONLD.loadJsonIntoXml(document.implementation, jsonObj, sourceFileName);
		$('#xml').val(xmlString);
	    } catch (e) {
		$('#xml').val("Error converting JSON to XML: " + e.message);
		return;
	    }

            // Now, perform all other conversions that depend on the JSON object.
            encodeJSON(); // JSON -> EXI
    	    updateOthersFromJsonObj(jsonObj, element, mapToMethod, fieldTypes);
        } else {
             throw new Error("X_ITE returned null/empty JSON string.");
        }
    } catch (e) {
        $('#json').val("Error during XML->JSON conversion: " + e.message);
        // If JSON conversion fails, clear the dependent fields.
        $('#stl').val('');
        $('#exi').val('');
        $('#ply').val('');
    }
}

window.x3domIframeReadyForAdvancedOps = function() {
    console.log("Master_loader: X3DOM iframe reports fully ready.");
    x3domRuntimeFullyReady = true;
    if (x3domUrlLoadQueue && x3domIframe?.contentWindow?.loadUrl) {
        console.log("Master_loader: Processing queued URL for reloaded X3DOM iframe.");
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
    if (lastBlobUrl) {
        URL.revokeObjectURL(lastBlobUrl);
        lastBlobUrl = null;
    }
    if (urlForX3dom.startsWith('blob:')) {
        lastBlobUrl = urlForX3dom;
    }
    currentX3domUrl = urlForX3dom;

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
    let element = null;
    try {
        [ element, xmlString] = X3DJSONLD.loadJsonIntoXml(document.implementation, jsonObj, sourceFileName);
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

    await displayInIframes(effectiveUrlForX3dom, xmlString);

    encodeJSON();
    updateOthersFromJsonObj(jsonObj, element, mapToMethod, fieldTypes);
}

export async function updateFromXml(xmlString, sourceFileName, urlForX3dom) {
    document.getElementById('currentFileName').textContent = sourceFileName;
    $('#xml').val(xmlString);

    // Clear dependent fields before starting async conversion
    $('#json').val('Converting from XML via X_ITE...');
    $('#stl').val('');
    $('#exi').val('');
    $('#javascript').val('');
    $('#python').val('');
    $('#java').val('');
    $('#cpp').val('');
    $('#clojure').val('');
    $('#jruby').val('');
    $('#ply').val('');

    // --- FIX START ---
    // If no URL is provided (e.g., when loading from textarea), create one from a Blob.
    // This ensures `displayInIframes` always receives a valid string.
    let effectiveUrlForX3dom = urlForX3dom;
    if (!effectiveUrlForX3dom) {
        const xmlBlob = new Blob([xmlString], { type: 'model/x3d+xml' });
        effectiveUrlForX3dom = URL.createObjectURL(xmlBlob);
    }
    // --- FIX END ---

    // Pass the guaranteed-to-be-valid URL to the display function
    await displayInIframes(effectiveUrlForX3dom, xmlString);

    globalXmlForJsonConversion = xmlString;
    window.pendingXmlToJsonConversion = true;
    await processPendingXmlToJson();
}

export async function updateFromStl(stlText, sourceFileName) {
    try {
        const jsonObj = convertStlToJson(stlText);
        await updateFromJson(jsonObj, sourceFileName.replace(/\.stl$/i, ".json"));
        $('#stl').val(stlText);
    } catch (e) {
        alert("Error converting STL: " + e.message);
    }
}

export async function updateFromPly(plyText, sourceFileName) {
    try {
        const jsonObj = convertPlyToJson(plyText);
        await updateFromJson(jsonObj, sourceFileName.replace(/\.ply$/i, ".json"));
        $('#ply').val(plyText);
    } catch (e) {
        alert("Error converting PLY: ".concat(e.message));
    }
}
