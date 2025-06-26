// master_loader.js

import X3DJSONLD from '../node/X3DJSONLD.js'; // For JSON to XML
// DOM2JSONSerializer is not the primary for XML->JSON if X_ITE handles it.
// Keep it if it's used as a fallback or for other XML sources.
import DOM2JSONSerializer from '../node/DOM2JSONSerializer.js'; 
import JavaScriptSerializer from '../node/JavaScriptSerializer.js';
import convertJsonToStl from '../node/convertJsonToStl.js';
import convertStlToJson from '../node/convertStlToJson.js';
import convertPlyToJson from '../node/convertPlyToJson.js';
// EXI is assumed to be globally available from its script tag in master_viewer.html

let x3domIframe = null;
let xiteIframe = null;
let x3domIframeLoaded = false;
let xiteIframeLoaded = false;

// Queue for pending operations if iframes are not ready
let x3domLoadQueue = null;
let xiteLoadQueue = null;


export function setX3DOMIFrame(iframeElement) {
    x3domIframe = iframeElement;
    x3domIframe.onload = () => {
        x3domIframeLoaded = true;
        if (x3domLoadQueue && x3domIframe.contentWindow && typeof x3domIframe.contentWindow.loadContentInX3dom === 'function') {
            console.log("X3DOM iframe loaded, processing display queue.");
            try { x3domIframe.contentWindow.loadContentInX3dom(x3domLoadQueue); } 
            catch(e) { console.error("Error in X3DOM queued load:", e); }
            x3domLoadQueue = null;
        }
    };
}
export function getX3DOMIFrame() {
    return x3domIframe;
}

export function setXITEIFrame(iframeElement) {
    xiteIframe = iframeElement;
    xiteIframe.onload = async () => { // Made async
        xiteIframeLoaded = true;
        console.log("X_ITE iframe 'onload' event fired.");
        if (xiteLoadQueue && xiteIframe.contentWindow && typeof xiteIframe.contentWindow.loadContentInXite === 'function') {
            console.log("X_ITE iframe loaded, processing display queue.");
            try { 
                // If loadContentInXite is async (it is now in the iframe)
                await xiteIframe.contentWindow.loadContentInXite(xiteLoadQueue); 
            } catch(e) { 
                console.error("Error in X_ITE queued display load:", e); 
            }
            xiteLoadQueue = null;
        }
        // If there was a pending XML to JSON conversion, trigger it now
        if (window.pendingXmlToJsonConversion) {
            console.log("X_ITE iframe loaded, processing pending XML to JSON conversion.");
            await window.processPendingXmlToJson(); // await the processing
        }
    };
}
export function getXITEIFrame() {
    return xiteIframe;
}

let currentJSONObject = null;
let currentFileNameForConversion = "converted.x3d";

async function displayInIframes(xmlString) { // Make async due to iframe's loadContentInXite being async
    let xiteLoadPromise = Promise.resolve();
    let x3domLoadAttempted = false;

    if (xiteIframeLoaded && xiteIframe.contentWindow && typeof xiteIframe.contentWindow.loadContentInXite === 'function') {
        console.log("Attempting to load XML into X_ITE iframe.");
        xiteLoadPromise = Promise.resolve(xiteIframe.contentWindow.loadContentInXite(xmlString))
            .catch(e => console.error("Error calling loadContentInXite directly:", e));
    } else {
        console.log("X_ITE iframe not ready for display, queueing content for X_ITE.");
        xiteLoadQueue = xmlString;
    }

    if (x3domIframeLoaded && x3domIframe && x3domIframe.contentWindow && typeof x3domIframe.contentWindow.loadContentInX3dom === 'function') {
        console.log("Attempting to load XML into X3DOM iframe.");
        try { x3domIframe.contentWindow.loadContentInX3dom(xmlString); x3domLoadAttempted = true; }
        catch (e) { console.error("Error calling loadContentInX3dom directly:", e); }
    } else {
        console.log("X3DOM iframe not ready for display, queueing content for X3DOM.");
        x3domLoadQueue = xmlString;
    }
    await xiteLoadPromise; // Wait for X_ITE to finish its async load if it was called
    console.log("displayInIframes finished (X_ITE load awaited, X3DOM attempted/queued).");
}


export async function loadX3DFile(filePath) {
    document.getElementById('currentFileName').textContent = filePath || 'None';
    if (!filePath || filePath === "DO NOT LOAD") return;
    currentFileNameForConversion = filePath.substring(filePath.lastIndexOf('/') + 1);

    $('#json').val(''); $('#xml').val(''); $('#stl').val(''); $('#ply').val(''); $('#exi').val(''); $('#java').val('');
    window.pendingXmlToJsonConversion = false;

    try {
        const response = await fetch(filePath);
        if (!response.ok) throw new Error(`HTTP error! status: ${response.status} for ${filePath}`);
        
        const fileExtension = filePath.split('.').pop().toLowerCase();
        
        if (fileExtension === 'json') {
            const json = await response.json();
            updateFromJson(json, filePath);
        } else if (['x3d', 'xml', 'x3dv'].includes(fileExtension)) {
            const xmlText = await response.text();
            await updateFromXml(xmlText, filePath); // updateFromXml is now async
        } else if (fileExtension === 'stl') {
            const stlText = await response.text();
            updateFromStl(stlText, filePath);
        } else if (fileExtension === 'ply') {
             const plyText = await response.text();
            updateFromPly(plyText, filePath);
        } else {
            alert('Unsupported file type: ' + fileExtension);
        }
    } catch (error) {
        console.error('Error loading file:', filePath, error);
        alert(`Error loading file: ${filePath}\n${error.message}`);
    }
}

export async function updateFromJson(json, sourceFileName) { // Make async because displayInIframes is
    currentJSONObject = json; 
    if (sourceFileName) currentFileNameForConversion = sourceFileName.substring(sourceFileName.lastIndexOf('/') + 1);
    
    $('#json').val(JSON.stringify(json, null, 2));

    let xmlString = "";
    try {
        xmlString = X3DJSONLD.loadJsonIntoXml(document.implementation, json, sourceFileName || currentFileNameForConversion);
        $('#xml').val(xmlString);
    } catch (e) {
        console.error("Error converting JSON to XML:", e);
        $('#xml').val("Error during JSON to XML conversion: " + e.message);
    }

    if (xmlString) await displayInIframes(xmlString); // await display
    encodeJSON(); 

    if (convertJsonToStl && json) {
        try { $('#stl').val(convertJsonToStl(json)); } 
        catch (e) { console.error("JSON to STL Error:", e); $('#stl').val("Error: " + e.message); }
    }
    if (JavaScriptSerializer && json) {
        try {
            let jsSerializer = new JavaScriptSerializer();
            $('#java').val(jsSerializer.serializeToString(json, পথে(), "", []));
        } catch (e) { console.error("JSON to Java Error:", e); $('#java').val("Error: " + e.message); }
    }
}

let globalXmlForJsonConversion = null; 
window.pendingXmlToJsonConversion = false;

window.processPendingXmlToJson = async function() { 
    if (globalXmlForJsonConversion && xiteIframeLoaded && xiteIframe.contentWindow && typeof xiteIframe.contentWindow.getSceneAsJsonString === 'function') {
        console.log("Processing XML to JSON via X_ITE for:", currentFileNameForConversion);
        try {
            // The XML should have been loaded into X_ITE by a previous call to displayInIframes.
            // We now ask X_ITE for its current scene's JSON representation.
            const jsonStringFromXite = await xiteIframe.contentWindow.getSceneAsJsonString();

            if (jsonStringFromXite) {
                currentJSONObject = JSON.parse(jsonStringFromXite);
                $('#json').val(JSON.stringify(currentJSONObject, null, 2));
                console.log("JSON successfully obtained from X_ITE.");

                encodeJSON();
                if (convertJsonToStl && currentJSONObject) {
                    try { $('#stl').val(convertJsonToStl(currentJSONObject)); }
                    catch(e) { console.error("JSON to STL (from XML) Error:", e); $('#stl').val("Error: " + e.message); }
                }
                if (JavaScriptSerializer && currentJSONObject) {
                     try {
                        let javaSerializer = new JavaScriptSerializer();
                        $('#java').val(javaSerializer.serializeToString(currentJSONObject, পথে(), "", []));
                     } catch(e) { console.error("JSON to Java (from XML) Error:", e); $('#java').val("Error: " + e.message); }
                }
            } else {
                $('#json').val("X_ITE could not provide JSON for the loaded XML (getSceneAsJsonString returned null/empty).");
                console.warn("X_ITE's getSceneAsJsonString returned null or empty.");
                currentJSONObject = null;
            }
        } catch (e) {
            console.error("Error during X_ITE JSON conversion or subsequent processing:", e);
            $('#json').val("Error during X_ITE JSON conversion: " + e.message);
            currentJSONObject = null;
        } finally {
            globalXmlForJsonConversion = null; 
            window.pendingXmlToJsonConversion = false;
        }
    } else if (globalXmlForJsonConversion) {
        console.log("X_ITE iframe or getSceneAsJsonString not ready for XML-to-JSON conversion. Will retry on iframe load or next opportunity.");
        window.pendingXmlToJsonConversion = true; 
    }
}

export async function updateFromXml(xmlString, sourceFileName) {
    if (sourceFileName) currentFileNameForConversion = sourceFileName.substring(sourceFileName.lastIndexOf('/') + 1);
    $('#xml').val(xmlString);
    
    console.log("Updating from XML, displaying in iframes first for:", currentFileNameForConversion);
    await displayInIframes(xmlString); // Await display, especially for X_ITE to load the XML
    
    console.log("Setting up for XML to JSON conversion via X_ITE for:", currentFileNameForConversion);
    globalXmlForJsonConversion = xmlString; 
    window.pendingXmlToJsonConversion = true;
    
    if (xiteIframeLoaded && xiteIframe.contentWindow && typeof xiteIframe.contentWindow.getSceneAsJsonString === 'function') {
        // X_ITE iframe is loaded and has the function, try to process immediately.
        // The displayInIframes should have loaded the XML into X_ITE.
        await window.processPendingXmlToJson(); 
    } else {
        console.log("X_ITE not ready for immediate XML->JSON, will attempt on iframe load or next opportunity.");
    }
}

export async function updateFromStl(stlText, sourceFileName) { // Make async
    if (sourceFileName) currentFileNameForConversion = sourceFileName.substring(sourceFileName.lastIndexOf('/') + 1);
    $('#stl').val(stlText);
    if (convertStlToJson) {
        try {
            const json = convertStlToJson(stlText); 
            currentJSONObject = json; 
            $('#json').val(JSON.stringify(json, null, 2));

            let xmlString = "";
            if (X3DJSONLD && json) {
                xmlString = X3DJSONLD.loadJsonIntoXml(document.implementation, json, sourceFileName || currentFileNameForConversion);
                $('#xml').val(xmlString);
            }
            if (xmlString) await displayInIframes(xmlString); // await
            
            encodeJSON();
            if (JavaScriptSerializer && currentJSONObject) {
                let jsSerializer = new JavaScriptSerializer();
                $('#java').val(jsSerializer.serializeToString(currentJSONObject, পথে(), "", []));
            }
        } catch (e) {
            console.error("STL to JSON Error:", e); $('#json').val("Error: " + e.message); currentJSONObject = null;
        }
    }
}

export async function updateFromPly(plyText, sourceFileName) { // Make async
    if (sourceFileName) currentFileNameForConversion = sourceFileName.substring(sourceFileName.lastIndexOf('/') + 1);
    $('#ply').val(plyText);
     if (convertPlyToJson) {
        try {
            const json = convertPlyToJson(plyText); 
            currentJSONObject = json;
            $('#json').val(JSON.stringify(json, null, 2));

            let xmlString = "";
            if (X3DJSONLD && json) {
                xmlString = X3DJSONLD.loadJsonIntoXml(document.implementation, json, sourceFileName || currentFileNameForConversion);
                $('#xml').val(xmlString);
            }
            if (xmlString) await displayInIframes(xmlString); // await

            encodeJSON();

            if (convertJsonToStl && json) {
                try { $('#stl').val(convertJsonToStl(json));}
                catch(e){ console.error("JSON to STL (from PLY) Error:", e); $('#stl').val("Error: " + e.message); }
            }
            if (JavaScriptSerializer && currentJSONObject) {
                 try{
                    let jsSerializer = new JavaScriptSerializer();
                    $('#java').val(jsSerializer.serializeToString(currentJSONObject, পথে(), "", []));
                 } catch(e){ console.error("JSON to Java (from PLY) Error:", e); $('#java').val("Error: " + e.message); }
            }
        } catch (e) {
            console.error("PLY to JSON Error:", e); $('#json').val("Error: " + e.message); currentJSONObject = null;
        }
    }
}

export function encodeJSON() {
    if (currentJSONObject && typeof EXI === 'object' && typeof EXI.encodeJSON === 'function') {
        try {
            const exiOptions = {}; 
            let exiStream = EXI.encodeJSON(currentJSONObject, exiOptions);
            if (!exiStream || typeof exiStream.length === 'undefined') {
                throw new Error("EXI.encodeJSON did not return a valid stream.");
            }
            let exiString = "";
            for (let i = 0; i < exiStream.length; i++) {
                let byte = exiStream[i];
                if (byte < 0) byte += 256;
                let hex = byte.toString(16);
                if (hex.length === 1) hex = '0' + hex;
                exiString += hex;
            }
            $('#exi').val(exiString);
        } catch (e) {
            console.error("Error encoding JSON to EXI:", e);
            $('#exi').val("Error: " + e.message);
        }
    } else {
        $('#exi').val(currentJSONObject ? "EXI library not loaded/ready." : "No JSON data to encode.");
    }
}

export function decodeEXI4JSON() { 
    const exiVal = $('#exi').val();
    if (exiVal && typeof EXI === 'object' && typeof EXI.decodeJSON === 'function') {
        try {
            const bytearray = [];
            for (let i = 0; i < exiVal.length; i += 2) {
                bytearray.push(parseInt(exiVal.substr(i, 2), 16));
            }
            const jsonDecoded = EXI.decodeJSON(bytearray);
            currentJSONObject = jsonDecoded; 
            $('#json').val(JSON.stringify(jsonDecoded, null, 2));
        } catch (e) {
            console.error("Error decoding EXI to JSON:", e);
            $('#json').val("Error: " + e.message);
            currentJSONObject = null;
        }
    } else {
        alert("EXI textarea is empty or EXI library not ready.");
    }
}

function পথে() { return currentFileNameForConversion || "unknownSource.x3d"; } 
function শাখাsসমূহ() { return []; }
