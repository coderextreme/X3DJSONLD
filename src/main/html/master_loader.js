// master_loader.js

import X3DJSONLD from '../node/X3DJSONLD.js'; 
import JavaScriptSerializer from '../node/JavaScriptSerializer.js';
import convertJsonToStl from '../node/convertJsonToStl.js';
import convertStlToJson from '../node/convertStlToJson.js';
import convertPlyToJson from '../node/convertPlyToJson.js';
// EXI is global

let x3domIframe = null;
let xiteIframe = null;
let x3domIframeLoaded = false;
let xiteIframeLoaded = false; 
let xiteRuntimeFullyReady = false; 

let x3domLoadQueue = null; // Can be { content: data, type: 'xml'/'json_obj', path: scenePath }
let xiteLoadQueue = null;  // Will always be XML string

window.xiteIframeReadyForAdvancedOps = function() {
    console.log("Master_loader: X_ITE iframe reports fully ready.");
    xiteRuntimeFullyReady = true;
    if (xiteLoadQueue && xiteIframe.contentWindow && typeof xiteIframe.contentWindow.loadContentInXite === 'function') {
        console.log("Master_loader: Processing X_ITE display queue (XML string) after full readiness signal.");
        const xmlToLoad = xiteLoadQueue;
        xiteLoadQueue = null; 
        Promise.resolve(xiteIframe.contentWindow.loadContentInXite(xmlToLoad))
            .catch(e => console.error("Error in queued X_ITE loadContentInXite (after ready signal):", e));
    }
    if (window.pendingXmlToJsonConversion && globalXmlForJsonConversion) {
        console.log("Master_loader: Processing pending XML to JSON (after X_ITE ready signal).");
        window.processPendingXmlToJson();
    }
};

export function setX3DOMIFrame(iframeElement) {
    x3domIframe = iframeElement;
    x3domIframe.onload = () => {
        x3domIframeLoaded = true;
        if (x3domLoadQueue && x3domIframe.contentWindow && typeof x3domIframe.contentWindow.loadContentInX3dom === 'function') {
            console.log("X3DOM iframe loaded, processing display queue. Type:", x3domLoadQueue.type);
            try { 
                x3domIframe.contentWindow.loadContentInX3dom(x3domLoadQueue.content, x3domLoadQueue.type, x3domLoadQueue.path); 
            } catch(e) { 
                console.error("Error in X3DOM queued load:", e); 
            }
            x3domLoadQueue = null;
        }
    };
}
export function getX3DOMIFrame() { return x3domIframe; }

export function setXITEIFrame(iframeElement) {
    xiteIframe = iframeElement;
    xiteIframe.onload = async () => { 
        xiteIframeLoaded = true; 
        console.log("X_ITE iframe 'onload' event fired (basic DOM ready).");
        if (xiteLoadQueue && xiteRuntimeFullyReady && xiteIframe.contentWindow && typeof xiteIframe.contentWindow.loadContentInXite === 'function') {
             console.log("X_ITE iframe basic onload, runtime also fully ready, processing display queue.");
            const xmlToLoad = xiteLoadQueue;
            xiteLoadQueue = null;
             await Promise.resolve(xiteIframe.contentWindow.loadContentInXite(xmlToLoad)) // await the async call
                .catch(e => console.error("Error in X_ITE queued load (basic onload, runtime ready):", e));
        } else if (xiteLoadQueue) {
            console.log("X_ITE iframe basic onload, but runtime not yet signaled as fully ready. Display queue waits for 'xiteIframeReadyForAdvancedOps'.");
        }
        // If pending XML to JSON and X_ITE is now fully ready (though xiteIframeReadyForAdvancedOps should also trigger this)
        if (window.pendingXmlToJsonConversion && globalXmlForJsonConversion && xiteRuntimeFullyReady) {
             console.log("X_ITE iframe basic onload, also processing pending XML to JSON as runtime is now fully ready.");
             await window.processPendingXmlToJson();
        }
    };
}
export function getXITEIFrame() { return xiteIframe; }

let currentJSONObject = null;
let currentFileNameForConversion = "converted.x3d";

async function displayInIframes(contentForXiteXml, contentForX3dom, x3domContentType = 'xml', scenePathForX3dom = null) {
    console.log(`Master_loader: displayInIframes called. X_ITE receives XML, X3DOM receives type: ${x3domContentType}`);
    
    if (typeof contentForXiteXml !== 'string') {
        console.error("displayInIframes: contentForXiteXml MUST be an XML string. Received:", typeof contentForXiteXml, String(contentForXiteXml).substring(0,100));
        // Fallback to ensure something is sent, or handle error more gracefully
        contentForXiteXml = '<X3D profile="Immersive" version="4.0"><Scene><Shape><Text string="Error: Invalid XML for X_ITE."/><Appearance><Material diffuseColor="1 0 0"/></Appearance></Shape></Scene></X3D>';
    }
    
    // --- X_ITE Handling (always gets XML) ---
    if (xiteRuntimeFullyReady && xiteIframe && xiteIframe.contentWindow && typeof xiteIframe.contentWindow.loadContentInXite === 'function') {
        console.log("Attempting to load XML into X_ITE (runtime fully ready).");
        await Promise.resolve(xiteIframe.contentWindow.loadContentInXite(contentForXiteXml))
            .catch(e => console.error(`Error calling loadContentInXite for XML:`, e));
    } else {
        console.log(`X_ITE iframe not fully ready, queueing XML content for X_ITE.`);
        xiteLoadQueue = contentForXiteXml; 
    }

    // --- X3DOM Handling ---
    if (x3domIframeLoaded && x3domIframe.contentWindow && typeof x3domIframe.contentWindow.loadContentInX3dom === 'function') {
        console.log(`Attempting to load into X3DOM iframe (type: ${x3domContentType}).`);
        try { 
            x3domIframe.contentWindow.loadContentInX3dom(contentForX3dom, x3domContentType, scenePathForX3dom); 
        }
        catch (e) { console.error("Error calling loadContentInX3dom directly:", e); }
    } else {
        console.log(`X3DOM iframe not ready, queueing content for X3DOM (type: ${x3domContentType}).`);
        x3domLoadQueue = { content: contentForX3dom, type: x3domContentType, path: scenePathForX3dom }; 
    }
    console.log("displayInIframes finished processing for iframes.");
}


export async function loadX3DFile(filePath) {
    document.getElementById('currentFileName').textContent = filePath || 'None';
    if (!filePath || filePath === "DO NOT LOAD") return;
    currentFileNameForConversion = filePath.substring(filePath.lastIndexOf('/') + 1);

    $('#json').val(''); $('#xml').val(''); $('#stl').val(''); $('#ply').val(''); $('#exi').val(''); $('#java').val('');
    window.pendingXmlToJsonConversion = false;
    globalXmlForJsonConversion = null;

    try {
        const response = await fetch(filePath);
        if (!response.ok) throw new Error(`HTTP error! status: ${response.status} for ${filePath}`);
        const fileExtension = filePath.split('.').pop().toLowerCase();
        
        if (fileExtension === 'json') {
            const json = await response.json();
            await updateFromJson(json, filePath);
        } else if (['x3d', 'xml', 'x3dv'].includes(fileExtension)) {
            const xmlText = await response.text();
            await updateFromXml(xmlText, filePath);
        } else if (fileExtension === 'stl') {
            const stlText = await response.text();
            await updateFromStl(stlText, filePath);
        } else if (fileExtension === 'ply') {
             const plyText = await response.text();
            await updateFromPly(plyText, filePath);
        } else {
            alert('Unsupported file type: ' + fileExtension);
        }
    } catch (error) {
        console.error('Error loading file:', filePath, error);
        alert(`Error loading file: ${filePath}\n${error.message}`);
    }
}

export async function updateFromJson(jsonObj, sourceFileName) {
    currentJSONObject = jsonObj; 
    const baseFileName = sourceFileName ? sourceFileName.substring(sourceFileName.lastIndexOf('/') + 1) : "from_textarea.json";
    currentFileNameForConversion = baseFileName;
    
    $('#json').val(JSON.stringify(jsonObj, null, 2));

    let xmlStringForXiteAndTextarea = "";
    try {
        xmlStringForXiteAndTextarea = X3DJSONLD.loadJsonIntoXml(document.implementation, jsonObj, sourceFileName || document.location.href); // Use sourceFileName for path hint
        $('#xml').val(xmlStringForXiteAndTextarea); 
    } catch (e) {
        console.error("Error converting JSON to XML:", e);
        $('#xml').val("Error: " + e.message);
        // Attempt to display JSON directly in X3DOM if XML conversion fails, clear X_ITE
        await displayInIframes("", jsonObj, 'json_obj', sourceFileName || document.location.href); 
        return; 
    }

    // For X3DOM: pass the original JavaScript object. Path is sourceFileName or document URI.
    // For X_ITE: pass the converted XML string.
    await displayInIframes(xmlStringForXiteAndTextarea, jsonObj, 'json_obj', sourceFileName || document.location.href);
    
    encodeJSONEXI(); 

    if (convertJsonToStl && jsonObj) {
        try { $('#stl').val(convertJsonToStl(jsonObj)); } 
        catch (e) { console.error("JSON to STL Error:", e); $('#stl').val("Error: " + e.message); }
    }
    if (JavaScriptSerializer && jsonObj) {
        try {
            let jsSerializer = new JavaScriptSerializer();
            $('#java').val(jsSerializer.serializeToString(jsonObj, পথে(), "", []));
        } catch (e) { console.error("JSON to Java Error:", e); $('#java').val("Error: " + e.message); }
    }
}

let globalXmlForJsonConversion = null; 
window.pendingXmlToJsonConversion = false;

window.processPendingXmlToJson = async function() { 
    if (!globalXmlForJsonConversion) {
        window.pendingXmlToJsonConversion = false; 
        return;
    }
    if (xiteRuntimeFullyReady && xiteIframe.contentWindow && typeof xiteIframe.contentWindow.getSceneAsJsonString === 'function') {
        console.log("Master_loader: Processing XML to JSON via X_ITE for:", currentFileNameForConversion);
        try {
            const jsonStringFromXite = await xiteIframe.contentWindow.getSceneAsJsonString();

            if (jsonStringFromXite) {
                currentJSONObject = JSON.parse(jsonStringFromXite);
                $('#json').val(JSON.stringify(currentJSONObject, null, 2));
                console.log("Master_loader: JSON obtained from X_ITE.");

                encodeJSONEXI();
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
                $('#json').val("X_ITE could not provide JSON. Check iframe console.");
                console.warn("Master_loader: X_ITE's getSceneAsJsonString returned null or empty.");
                currentJSONObject = null;
            }
        } catch (e) {
            console.error("Master_loader: Error during X_ITE JSON conversion or subsequent processing:", e);
            $('#json').val("Error processing JSON from X_ITE: " + e.message);
            currentJSONObject = null;
        } finally {
            globalXmlForJsonConversion = null; 
            window.pendingXmlToJsonConversion = false;
        }
    } else { 
        console.log("Master_loader: X_ITE not fully ready for XML-to-JSON. Flagged.");
        window.pendingXmlToJsonConversion = true; 
    }
}

export async function updateFromXml(xmlString, sourceFileName) {
    if (sourceFileName) currentFileNameForConversion = sourceFileName.substring(sourceFileName.lastIndexOf('/') + 1);
    else currentFileNameForConversion = "from_textarea.xml"; // Default if no sourceFileName
    $('#xml').val(xmlString);
    
    // Both X_ITE and X3DOM will receive this XML string for display.
    await displayInIframes(xmlString, xmlString, 'xml', sourceFileName || document.location.href); 
    
    globalXmlForJsonConversion = xmlString; 
    window.pendingXmlToJsonConversion = true;
    
    if (xiteRuntimeFullyReady) {
        await window.processPendingXmlToJson(); 
    } else {
        console.log("Master_loader: X_ITE not yet fully ready for XML->JSON (from updateFromXml).");
    }
}

export async function updateFromStl(stlText, sourceFileName) {
    const baseFileName = sourceFileName ? sourceFileName.substring(sourceFileName.lastIndexOf('/') + 1) : "from_stl.stl";
    currentFileNameForConversion = baseFileName;
    $('#stl').val(stlText);
    currentJSONObject = null;
    let jsonFromStl = null;
    let xmlStringForDisplay = "";
    const derivedX3dPath = (sourceFileName || "converted_from_stl.x3d").replace(/\.stl$/i, ".x3d");


    if (convertStlToJson) {
        try {
            jsonFromStl = convertStlToJson(stlText); 
            currentJSONObject = jsonFromStl; 
            $('#json').val(JSON.stringify(jsonFromStl, null, 2));

            if (X3DJSONLD && jsonFromStl) {
                try {
                    xmlStringForDisplay = X3DJSONLD.loadJsonIntoXml(document.implementation, jsonFromStl, derivedX3dPath);
                    $('#xml').val(xmlStringForDisplay);
                } catch (e) { console.error("JSON (from STL) to XML Error:", e); $('#xml').val("Error: " + e.message); }
            }
            
            await displayInIframes(xmlStringForDisplay || "", jsonFromStl, 'json_obj', derivedX3dPath); 
            
            if (currentJSONObject) { 
                encodeJSONEXI();
                if (JavaScriptSerializer) {
                     try {
                        let jsSerializer = new JavaScriptSerializer();
                        $('#java').val(jsSerializer.serializeToString(currentJSONObject, পথে(), "", []));
                    } catch (e) { console.error("JSON to Java (from STL) Error:", e); $('#java').val("Error: " + e.message); }
                }
            }
        } catch (e) { 
            console.error("STL to JSON Error:", e); 
            $('#json').val("Error: " + e.message); 
            $('#xml').val(""); 
            await displayInIframes("", null, 'json_obj'); // Clear X3DOM with null, X_ITE with empty XML
            currentJSONObject = null;
        }
    }
}

export async function updateFromPly(plyText, sourceFileName) {
    const baseFileName = sourceFileName ? sourceFileName.substring(sourceFileName.lastIndexOf('/') + 1) : "from_ply.ply";
    currentFileNameForConversion = baseFileName;
    $('#ply').val(plyText);
    currentJSONObject = null;
    let jsonFromPly = null;
    let xmlStringForDisplay = "";
    const derivedX3dPath = (sourceFileName || "converted_from_ply.x3d").replace(/\.ply$/i, ".x3d");

     if (convertPlyToJson) {
        try {
            jsonFromPly = convertPlyToJson(plyText); 
            currentJSONObject = jsonFromPly;
            $('#json').val(JSON.stringify(jsonFromPly, null, 2));

            if (X3DJSONLD && jsonFromPly) {
                try {
                    xmlStringForDisplay = X3DJSONLD.loadJsonIntoXml(document.implementation, jsonFromPly, derivedX3dPath);
                    $('#xml').val(xmlStringForDisplay);
                } catch(e) {
                     console.error("JSON (from PLY) to XML Error:", e);
                    $('#xml').val("Error: " + e.message);
                }
            }
            
            await displayInIframes(xmlStringForDisplay || "", jsonFromPly, 'json_obj', derivedX3dPath);

            if (currentJSONObject) {
                encodeJSONEXI();
                if (convertJsonToStl) { 
                    try { $('#stl').val(convertJsonToStl(currentJSONObject));}
                    catch(e){ console.error("JSON to STL (from PLY) Error:", e); $('#stl').val("Error: " + e.message); }
                }
                if (JavaScriptSerializer) { 
                     try{
                        let jsSerializer = new JavaScriptSerializer();
                        $('#java').val(jsSerializer.serializeToString(currentJSONObject, পথে(), "", []));
                     } catch(e){ console.error("JSON to Java (from PLY) Error:", e); $('#java').val("Error: " + e.message); }
                }
            }
        } catch (e) { 
            console.error("PLY to JSON Error:", e); 
            $('#json').val("Error: " + e.message); 
            $('#xml').val("");
            await displayInIframes("", null, 'json_obj');
            currentJSONObject = null;
        }
    }
}

export function encodeJSONEXI() {
    if (currentJSONObject && typeof window === 'object' && typeof window.encodeJSON === 'function') {
        try {
            const exiOptions = {}; 
            let exiStream = window.encodeJSON(currentJSONObject, exiOptions);
            if (!exiStream || typeof exiStream.length === 'undefined') {
                throw new Error("window.encodeJSON did not return a valid stream.");
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
        $('#exi').val(currentJSONObject ? "EXI library not loaded/ready. Global window object: " + (typeof window) : "No JSON data to encode.");
    }
}

export function decodeJSON() { 
    const exiVal = $('#exi').val();
    if (exiVal && typeof window === 'object' && typeof window.decodeEXI4JSON === 'function') {
        try {
            const bytearray = [];
            for (let i = 0; i < exiVal.length; i += 2) {
                bytearray.push(parseInt(exiVal.substr(i, 2), 16));
            }
            const jsonDecoded = window.decodeEXI4JSON(bytearray);
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

function পথে() { 
    // Provide a sensible default path for createX3DFromJS if no source filename
    return currentFileNameForConversion !== "converted.x3d" ? currentFileNameForConversion : (document.location.href);
} 
function শাখাsসমূহ() { return []; }
