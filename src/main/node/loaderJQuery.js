// let SaxonJS = require("saxon-js");
import { loadX3DJS, loadSchema } from "./loadValidate.js";
import X3DJSONLD from "./X3DJSONLD.js";
import xmldom from '@xmldom/xmldom';
import convertPlyToJson from './convertPlyToJson.js';
import convertStlToJson from "./convertStlToJson.js";
import convertJsonToStl from "./convertJsonToStl.js";
import JavaScriptSerializer from "./JavaScriptSerializer.js";
import DOM2JSONSerializer from "./DOM2JSONSerializer.js";
import fieldTypes from "./fieldTypes.js";
import mapToMethod from "./mapToMethod.js";
import mapToMethod2 from "./mapToMethod2.js";
import { Scripts } from './Script.js';
// import X3D from "https://cdn.jsdelivr.net/npm/x_ite@11.5.11/dist/x_ite.min.mjs";

if (typeof xmldom !== 'undefined') {
	var DOMImplementation = new xmldom.DOMImplementation();
}
//  X3DJSONLD.setProcessURLs(function() {}); // do modify URLs in GUI
//

let IS_X_ITE = false;

export function setIS_X_ITE(b) {
	IS_X_ITE = b;
	if (!IS_X_ITE) {
		console.warn("X_ITE turned off");
	}
}

let IS_X3DOM = false;

export function setIS_X3DOM(b) {
	IS_X3DOM = b;
	if (!IS_X3DOM) {
		console.warn("X3DOM turned off");
	}
}

function myGetJSON(url, data, success) {
	fetch(url).then(response => {
	  return response.json();
	}).then(jsobj => {
		data(jsobj);
	}).catch(err => {
	});
}
if (typeof myGetJSON === 'undefined' || myGetJSON === null) {
	myGetJSON = $.getJSON;
}

window.myGetJSON = myGetJSON;

function loadXmlBrowsers(xml, document) {
	if (typeof xml !== 'undefined' && xml !== null) {
		$('#xml').val(xml);
	}
	// DISPLAY XML in X3DOM
	xml = $('#xml').val();
	if (typeof xml !== 'undefined') {
		if (IS_X_ITE) {
			xml = xml.replace(/&lt;/g, "<").replace(/&gt;/g, ">");
			try {
				load_X_ITE_XML(xml, "#x_itexml");
			} catch (e) {
				alert("Problems with X_ITE xml "+ e);
				console.error(e);
			}
		}
		// put everthing inside Scene into the browser's Scene's innerHTML
		// Do this inner HTML so we can sneak script tag past JQuery (BAD BAD TODO)
		//if ($('#x3domxml') && $('#x3domxml').get() && $('#x3domxml').get().length > 0) {
		//	$('#x3domxml').get()[0].innerHTML = xml.replace(/((?!<X3D).)*<X3D(.|\n)*<Scene[^>]*>((.|\n)*)<\/Scene>(.|\n)*/, '$3');
		//} else {
		//	console.warn("Couldn't find id #x3domxml");
		//}
		if (IS_X3DOM) {
			if (xml.indexOf("<X3D") >= 0 && xml.indexOf("<Scene") >= 0) {
				$('#x3domxml').html(xml.replace(/((?!<X3D).)*<X3D(.|\N)*<Scene[^>]*>((.|\n)*)<\/Scene>(.|\n)*/, '$3'));
			} else {
				$('#x3domxml').html(xml.replace(/((?!<x3d).)*<x3d(.|\N)*<scene[^>]*>((.|\n)*)<\/scene>(.|\n)*/, '$3'));
			}
		}

		if (IS_X3DOM && typeof x3dom !== 'undefined') {
			x3dom.reload();
		}
	}
}

function filterExisting(event) {
	$.map($("#file option"), function(option, i) {
		var text = $(option).text();
		if (text.indexOf(event.target.value) >= 0) {
			$(option).show();
			return true;
		} else {
			$(option).hide();
			return false;
		}
	});
}

window.filterFiles = function filterFiles(event) {
	$('#file').children().remove().end();
	$.getJSON("/files?"+event.target.value, function (data) {
		$.each(data, function(i, opt) {
			$('#file').append($("<option>", { value: opt, text: opt}));
		});
	});
}

async function load_X_ITE_XML(content, selector) {
	if (IS_X_ITE) {
		await X3D();
		const browser = X3D.getBrowser(selector);
		if (typeof browser !== 'undefined' && typeof browser.createX3DFromString !== 'undefined') {
			var importedScene = await browser.createX3DFromString(content);
			await browser.replaceWorld(importedScene);
		} else {
			alert("X_ITE could not replaceWorld in load_X_ITE_XML() "+selector);
		}
	}
}

window.load_X_ITE_DOM = async function load_X_ITE_DOM(element, selector) {
	if (IS_X_ITE) {
		await X3D();
		const browser = X3D.getBrowser(selector);
		if (typeof browser !== 'undefined' && typeof browser.importDocument !== 'undefined') {
			var importedScene = await browser.importDocument(element);
			await browser.replaceWorld(importedScene);
		} else {
			alert("X_ITE could not replaceWorld in load_X_ITE_DOM() "+selector);
		}
	}
}

window.load_X_ITE_JS = async function load_X_ITE_JS(jsobj, selector) {
	if (IS_X_ITE) {
		await X3D();
		const browser = X3D.getBrowser(selector);
		if (typeof browser !== 'undefined' && typeof browser.importJS !== 'undefined') {
			var importedScene = await browser.importJS(jsobj);
			await browser.replaceWorld(importedScene);
		} else {
			alert("X_ITE could not replaceWorld in load_X_ITE_JS() "+selector);
		}
	}
}

if (typeof mapToMethod !== 'undefined') {
	if (typeof mapToMethod2 !== 'undefined') {
		for (var map in mapToMethod2) {
			Object.assign(mapToMethod[map], mapToMethod2[map]);
		}
	}
}

window.loadX3DJS_X3DOM = function (selector, id, DOMImplementation, jsobj, path, NS, callback) {
	X3DJSONLD.x3djsonNS = NS;
	loadSchema(jsobj, path, function() {
		if (IS_X3DOM && document.getElementById(id) !== null) {
			var doc = $(selector)[0];
			if (doc && doc.hasRuntime && doc.runtime.ready) {
				var child = doc.runtime.createX3DFromJS(jsobj, path);
				var xml = X3DJSONLD.serializeDOM(jsobj, child, true);
				callback(child, xml);
			}
		} else {
			// if no X3DOM, try our techniques.
			var child;
			var xml;
			[ child, xml ] = X3DJSONLD.loadJsonIntoDom(DOMImplementation, jsobj, path);
			if (xml === null) {
				xml = X3DJSONLD.serializeDOM(jsobj, child, true);
			}
			callback(child, xml);
		}
	}, function(e) {
		console.error(e);
		callback(null, null);
	});
}

window.loadX3DJS_X_ITE = function loadX3DJS_X_ITE(selector, DOMImplementation, jsobj, path, NS, callback) {
	X3DJSONLD.x3djsonNS = NS;
	loadSchema(jsobj, path, function() {
		try {
		    if (IS_X_ITE) {
			X3D(function() {
				if (typeof X3D.getBrowser !== 'undefined') {
					const browser = X3D.getBrowser(selector);
					if (typeof browser !== 'undefined' && typeof browser.importJS !== 'undefined') {
						browser.importJS(jsobj, function(child) {
							var xml = X3DJSONLD.serializeDOM(jsobj, child.dom, true);
							callback(child.dom, xml);
						});
					} else if (IS_X_ITE) {
						alert("X_ITE could not importJS loadX3DJS_X_ITE()");
					}
				} else if (IS_X_ITE) {
					alert("X_ITE could not replaceWorld in loadX3DJS_X_ITE()");
				}
			}, function() {
				alert("Failed to render JSON to X_ITE");
			});
		    }
		} catch (e) {
			console.error(e);
		}
	}, function(e) {
		console.error(e);
		callback(null, null);
	});
}

function convertJsonToXml(json, next, path) {
	var NS = $('#namespace option:selected').text();
	loadX3DJS(document.implementation, json, path, NS, function(element, xml) {
		next(xml);
	}); // does not load path
}

function loadProtoX3D(scripts, selector, id, json, url, document) {
   // console.error("JSON IS NOW", json);
   try {
	$('#json').val(JSON.stringify(json, null, 2));
   } catch (e) {
	alert("JSON isn't valid "+ e);
   }
    var NS = $('#namespace option:selected').text();
    window.replaceX3DJSON(selector, id, json, url, NS, function(child, xml) {
	    if (child !== null) {
		    if (IS_X_ITE) {
			        load_X_ITE_JS(json, "#x_itejson");
			    // load_X_ITE_DOM(child.cloneNode(true), "#x_itedom");
		    }
		    try {
			    loadXmlBrowsers(xml, document);
		    } catch (e) {
		    	alert("Problems with loading xml browsers "+ e);
				console.error(e);
		    }
		    if (IS_X3DOM && $('#scripting').is(':checked')) {
			try {
				if (typeof x3dom !== 'undefined') {
					scripts.loadScripts(json, "#x3domjson", url);
					scripts.loadScripts(json, "#x3domxml", url);
				}
			} catch (e) {
				alert("Problems with loading scripts "+ e);
				console.error(e);
			}
		    }
	    } else {
		    alert("Unknown error returning no child element!");
	    }
	    updateStl(json);
    }, document);
    return json;
}

window.loadX3D = function loadX3D(selector, id, json, url) {
	let scripts;
        if ($('#scripting').is(':checked')) {
		scripts = new Scripts();
	}
	json = loadProtoX3D(scripts, selector, id, json, url, document);
}

/**
 * Load a JSON URL into an element
 * elemnent -- element to add to
 * url -- JSON url to add
 */
function appendInline(element, url, xmlDoc, next) {
	window.myGetJSON(url, function(json) {
		// must validate here because we call an inner method.
		loadSchema(json, url, function() {
			X3DJSONLD.ConvertToX3DOM(xmlDoc, json["X3D"]["Scene"], "Scene", element, url);
			next(element);
		}, function(e) {
			console.error(e);
		});
	}).fail(function(jqXHR, textStatus, errorThrown) { alert('window.myGetJSON request failed for '+url+'! ' + textStatus + ' ' + errorThrown); });
}


function loadSubscene(id, url, xmlDoc, next) {
	appendInline(document.getElementById(id), url, xmlDoc, next);
}

function loadInline(id, url, xmlDoc) {
	appendInline(document.getElementById(id), url, xmlDoc);
}

/*
 * appendX3DJSON2Selector
 * append to selector DOM created from X3D JSON.
 *	also, generate xml for inclusion elsewhere
 *
 * selector (string) -- css selector
 * id (string) -- HTML id
 * json (json object) -- json to convert to DOM
 * url -- name of path/filename json loaded from
 * NS -- XML namespace (optional)
 * next -- to return the element or null
 * returns element loaded
 */
function appendX3DJSON2Selector(selector, id, json, url, NS, next) {
	loadX3DJS_X3DOM(selector, id, document.implementation, json, url, NS, function(element, xml) {
		if (element !== null) {
			X3DJSONLD.elementSetAttribute(element, "xmlns:xsd", 'http://www.w3.org/2001/XMLSchema-instance');
			document.getElementById(id).append(element);
		}
		next(element);
	}, function(err) {
		alert(err);
	});  // X_ITE if not XHTML NS
}

/*
 * replaceX3DJSON
 * replace children of selector with DOM created from X3D JSON.
 *	also, generate xml for inclusion elsewhere
 	*
 * selector (string) -- css selector
 * id (string) -- HTML id
 * json (json object) -- json to convert to DOM
 * url -- name of path/filename json loaded from
 * NS -- XML namespace (optional)
 * next -- to return the element and xmlDoc or null, null
 * returns element loaded and xml
 */
window.replaceX3DJSON = function replaceX3DJSON(selector, id, json, url, NS, next, document) {

	loadX3DJS_X3DOM(selector, id, document.implementation, json, url, NS, function(element, xml) {
		if (element !== null) {
			X3DJSONLD.elementSetAttribute(element, "xmlns:xsd", 'http://www.w3.org/2001/XMLSchema-instance');
			X3DJSONLD.elementSetAttribute(element, "id", id);
			// We have to do this stuff before the DOM hits X3DOM, or we get a mess.
			if (typeof JavaScriptSerializer !== 'undefined') {
				try {
					var jserial = new JavaScriptSerializer();
					var java = jserial.serializeToString(json, element, url, mapToMethod, fieldTypes);
					$('#java').val(java);
				} catch (e) {
					alert("Problems serializing to JavaScript "+ e);
					console.error(e);
				}
			}
			if (document.getElementById("dom") !== null) {
				document.getElementById("dom").onclick = function() { return false; } 

				document.getElementById("dom").onclick = function() {
					// capture the display
					var json = convertXmlToJson(getXmlString(element), path, document);
					updateStl(json);
					return false;
				}
			}
			if (IS_X3DOM) {
				var doc = $(selector)[0];
				if (doc && doc.hasRuntime && doc.runtime.ready) {
					try {
						doc.runtime.replaceWorld(element);
					} catch (e) {
						alert(e);
						console.error(e);
					}
				} else {
					console.error("Cannot find X3DOM document in replaceX3DJSON()");
				}
			}
			// remove all text nodes and CDATA in scripts (keep fields)
			$(selector+" Script").contents().filter(function () {
			     return this.nodeType === 3 || this.nodeType === 4;
			}).remove();
		}
		next(element, xml);
	});
}

export async function updateFromJson(json, path) {
	try {
		console.log("updateFromJson", json);
		if (typeof json === 'undefined') {
			json = JSON.parse($("#json").val());
		}
		$('#json').val(JSON.stringify(json, null, 2));
	} catch (e) {
		alert("JSON doesn't parse "+ e);
		console.error(e);
	}
	try {
		loadX3D("#x3domjson", "x3domjson", json, path);
	} catch (e) {
		alert("Problems converting and loading JSON "+ e);
		console.error(e);
	}
}
window.updateFromJson = updateFromJson;

function updateFromStl(path) {
	var json = convertStlToJson($('#stl').val());
	updateFromJson(json, path);
}
window.updateFromStl = updateFromStl;

function updateFromPly(path) {
	var json = convertPlyToJson($('#ply').val());
	updateFromJson(json, path);
}
window.updateFromPly = updateFromPly;

window.updateFromXml = async function updateFromXml(path) {
	try {
		if (IS_X3DOM) {
			var json = convertXmlToJson($('#xml').val(), path, document);
			updateFromJson(json, path);
		}
		if (IS_X_ITE) {
			await X3D();
			let browser = null;
			if (!IS_X_ITE) {
				browser = X3D.getBrowser("#dummy");
			} else {
				browser = X3D.getBrowser("#x_itexml");
			}
			if (typeof browser !== 'undefined' && typeof browser.createX3DFromString !== 'undefined') {
				let content = $('#xml').val();
				// alert(content);
				var importedScene = await browser.createX3DFromString(content);
				await browser.replaceWorld(importedScene);
				let json = browser.toJSONString();
				// alert(json);
				updateFromJson(JSON.parse(json), path);
			} else {
				alert("X_ITE could not replaceWorld in load_X_ITE_XML() #x_itexml");
			}
		}
	} catch (e) {
		console.error(e);
	}
}

function loadXml(url) {
	// gets converted to JSON on server
	$.get(url, function(xml) {
		$('#xml').val(getXmlString(xml));
		window.updateFromXml(url);
	})
	.fail(function(jqXHR, textStatus, errorThrown) { alert('loadXml request failed for '+url+'! ' + textStatus + ' ' + errorThrown); });
}

function loadStl(url) {
	$.get(url, function(stl) {
		$('#stl').val(stl);
		window.updateFromStl(url);
	})
	.fail(function(jqXHR, textStatus, errorThrown) { alert('loadStl request failed for '+url+'! ' + textStatus + ' ' + errorThrown); });
}

function loadPly(url) {
	$.get(url, function(ply) {
		$('#ply').val(ply);
		updateFromPly(url);
	})
	.fail(function(jqXHR, textStatus, errorThrown) { alert('loadPly request failed for '+url+'! ' + textStatus + ' ' + errorThrown); });
}

function loadImage(url) {
	var slash = url.lastIndexOf("/");
	// console.error("Image URL attempt at", url, slash);
	if (slash >= 0) {
		// load the default viewpoint as an image
		var dot = url.lastIndexOf(".");

		var base = url.substr(0, slash);
		var ext = url.substring(dot);
		var file = url.substr(slash, url.length - slash - ext.length);
		var png = base+"/_viewpoints"+file+".x3d._VP_Default_viewpoint.png";
		// console.error("setting image src to", png)
		$('#image').attr('src', png);

/*
		// load an example movie
		var mpg = base+file+"-movie.mpg";
		var canvas = document.getElementById('canvas');
		var ctx    = canvas.getContext('2d');
		var video  = document.getElementById('video');
		video.setAttribute('src', mpg);
		video.addEventListener('play', function () {
			var $this = this; //cache
			(function loop() {
				if (!$this.paused && !$this.ended) {
					ctx.drawImage($this, 0, 0);
					canvas.parentNode._x3domNode.invalidateGLObject();
					setTimeout(loop, 1000 / 30); // drawing at 30fps
				}
			})();
		}, 0);
		video.play();
*/
	}
}
export function myLoadJson(url) {
	fetch(url).then(response => {
	  let jsonresponse =  response.json();
	  console.log(jsonresponse);
	  return jsonresponse;
	}).then(json => {
		updateFromJson(json, url);
		updateXml(json, url);
	}).catch(err => {
		console.error('myloadJSON request failed for '+url+'! ', err);
		alert('myloadJSON request failed for '+url+'! ' + err);
	});
}

myLoadJson("../personal/rubikFurnace.json");

export function updateXml(json, path) {
	//  This step is an important validation step.
	convertJsonToXml(json, function(xml) {
		$('#xml').val(xml);
	}, path);
}

function updateStl(json) {
		if (typeof convertJsonToStl === 'function') {
			try {
				var stl = convertJsonToStl(json);
				$('#stl').val(stl);
			} catch (e) {
				alert("Problems updating STL from JSON "+e);
				console.error(e);
			}
		} else {
			console.error("Perhaps you need to include convertJsonToStl.js if you want STL output?");
		}
}


$("#file").change(function() {
	var url = $('#file option:selected').text();
	if (url.endsWith(".json")) {
		myLoadJson(url);
		if (typeof threeLoadFile === 'function') threeLoadFile(url);
	} else if (url.endsWith(".x3dj")) {
		myLoadJson(url);
		if (typeof threeLoadFile === 'function') threeLoadFile(url);
	} else if (url.endsWith(".x3d")) {
		loadXml(url);
		if (typeof threeLoadFile === 'function') threeLoadFile(url);
	} else if (url.endsWith(".xml")) {
		loadXml(url);
		if (typeof threeLoadFile === 'function') threeLoadFile(url);
	} else if (url.endsWith(".wrl")) {
		if (typeof threeLoadFile === 'function') threeLoadFile(url);
	} else if (url.endsWith(".ply")) {
		loadPly(url);
	} else if (url.endsWith(".stl")) {
		loadStl(url);
	} else {
		alert("Unknown extension on URL "+url);
	}
	loadImage(url); // load standard image
});

// get the JSON out of the stylesheet or convert loaded XML file
function getXmlString(xml) {
  if (window.ActiveXObject) { return xml.xml; }
  xml = new XMLSerializer().serializeToString(xml);
  return xml;
}

function convertXmlToJson(xmlString, path, document) {
/*
	let jsobj =  SaxonJS.transform({
		stylesheetLocation: "https://coderextreme.net/X3DJSONLD/src/main/lib/stylesheets/X3dToJson.sef.json",
		stylesheetBaseURI: "https://coderextreme.net/",
		sourceBaseURI: "file://",
		sourceText: xmlString,
                destination: "serialized",
		outputProperties: { method: "json" }
            }, "sync");
	jsobj = JSON.parse(jsobj);
	console.log(jsobj);
	return jsobj;
	output = SaxonJS.transform({
		sourceText: xmlString,
		destination: "serialized",
		outputProperties: { method: "json" }
	}, "sync");
	let jsobj = output.principalResult;
	jsobj = JSON.parse(jsobj);
	console.log(jsobj);
	return jsobj;
	*/

    if (typeof DOM2JSONSerializer !== 'undefined') {
	try {
		var doc = null;
		try {  
			var domParser = new window.DOMParser();
			doc = domParser.parseFromString (xmlString, 'application/xml');
	
		} catch (e) {
			throw e;
		}
		var element = doc.documentElement;
		var serializer = new DOM2JSONSerializer();
		var json = serializer.serializeToString(null, element, path, mapToMethod, fieldTypes);
		$('#json').val(json);
		json = JSON.parse(json);
		try {
			// reload XML parser with original
			loadXmlBrowsers(xmlString, document);
		} catch (e) {
			alert("Problems with loading xml browsers with XML "+ e);
			console.error(e);
		}
    		return json;
	} catch (e) {
		alert("Problems serializing to JSON "+ e);
		console.error(e);
	}
    }
    $.post("/convert", xmlString, function(json) {
	    return json;
    }, "json")
    .fail(function(jqXHR, textStatus, errorThrown) {
	    alert('convertXmlToJson request failed for '+path+'! ' + textStatus + ' ' + errorThrown);
	    /*
	    $.get("stylesheets/X3dToJson.xslt", function(xslt) {
		// console.error("VAL", xmlString);
		var demo = { xslt: xslt};

		// code for regular browsers
		if (window.DOMParser) {
		    var parser = new window.DOMParser();
		    demo.xml = parser.parseFromString(xmlString, "application/xml");
		}
		// code for IE
		if (window.ActiveXObject) {
		    demo.xml = new ActiveXObject("Microsoft.XMLDOM");
		    demo.xml.async = false;
		    demo.xml.loadXML(xmlString);
		}
		// console.error("PARSED XML", demo.xml);

		// code for regular browsers
		if (document.implementation && document.implementation.createDocument)
		{
		    var xsltProcessor = SaxonJS2N.newXSLT20Processor();
		    xsltProcessor.importStylesheet(demo.xslt);
		    result = xsltProcessor.transformToFragment(demo.xml, document);
		}
		else if (window.ActiveXObject) {
		    // code for IE
		    result = demo.xml.transformNode(demo.xslt);
		}

		 try {
		// console.error('JSON', result);
			 // console.error(result);
			var xml = getXmlString(result); // pull JSON out of XML
			 // put bad JSON in the JSON area
			$('#json').val(xml);
			console.error("Result", xml);
			var json = JSON.parse(xml);
			console.error("Parsing Accomplished")
			return json;
		} catch (e) {
			alert("No validation done, JSON doesn't parse or load.  depending on XML viewers. Works better if you use node.js as a web server and run the command node app.js from webroot after running npm install"+e);
			loadXmlBrowsers(xmlString, document);
		}
	    }, "xml")
	    .fail(function(jqXHR, textStatus, errorThrown) {
	    	alert('Could not process stylesheet X3dToJson.xslt! ' + textStatus + ' ' + errorThrown);
	    });
	    */
    });
}

window.validator = function validator() {
	try {
		var data = $("#json").val();
		if (data.startsWith("http")) {
			window.myGetJSON(data, function(json) {
				loadSchema(json, "<unknown>", function() {
					alert("Valid or user clicked OK");
				}, function(e) {
					alert(e);
				});
			});
		} else {
			var json = JSON.parse(data);
			loadSchema(json, "<unknown>", function() {
				alert("Valid or user clicked OK");
			}, function(e) {
				alert(e);
			});
		}
	} catch (je) {
		alert(je);
	}
}
