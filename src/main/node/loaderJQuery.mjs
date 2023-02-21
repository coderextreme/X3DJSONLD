import { loadSchema, doValidate, loadX3DJS } from "./loadValidate.mjs"
import { convertJsonToStl } from "./convertJsonToStl.mjs";
import sax from '../../../node_modules/saxon-js/SaxonJS2N.js';
const { SaxonJS2N } = sax;
import PROTOS from './PrototypeExpander.mjs'
import X3DJSONLD from './X3DJSONLD.mjs'

var Browser = X3DJSONLD.Browser;
//  X3DJSONLD.setProcessURLs(function() {}); // do modify URLs in GUI

// https://stackoverflow.com/questions/1043339/javascript-for-detecting-browser-language-preference
var getFirstBrowserLanguage = function () {
    var nav = window.navigator,
    browserLanguagePropertyKeys = ['language', 'browserLanguage', 'systemLanguage', 'userLanguage'],
    i,
    language;

    // support for HTML 5.1 "navigator.languages"
    if (Array.isArray(nav.languages)) {
      for (i = 0; i < nav.languages.length; i++) {
        language = nav.languages[i];
        if (language && language.length) {
          return language;
        }
      }
    }

    // support for other well known properties in browsers
    for (i = 0; i < browserLanguagePropertyKeys.length; i++) {
      language = nav[browserLanguagePropertyKeys[i]];
      if (language && language.length) {
        return language;
      }
    }

    return null;
  };




// From: https://stackoverflow.com/questions/950087/how-do-i-include-a-javascript-file-in-another-javascript-file
function loadScript(url, callback)
{
    // Adding the script tag to the head as suggested before
    var head = document.getElementsByTagName('head')[0];
    var script = document.createElement('script');
    script.type = 'text/javascript';
    script.src = url;

    // Then bind the event to the callback function.
    // There are several events for cross browser compatibility.
    script.onreadystatechange = callback;
    script.onload = callback;

    // Fire the loading
    head.appendChild(script);
}

var lang = getFirstBrowserLanguage();

export var localize = "en";
function loadLocalize(lang) {
	lang = lang.replace(/-.*/, "");
	return;
	var module = {};
	module.exports = null;
	loadScript("../../../node_modules/ajv-i18n/localize/"+lang+"/index.js", function() {
		localize = module.exports;
	});
}

loadLocalize(lang);

function loadXmlBrowsers(xml) {
	if (typeof xml !== 'undefined') {
		$('#xml').val(xml);
	}
	// DISPLAY XML in X3DOM
	xml = $('#xml').val();
	if (typeof xml !== 'undefined') {
		xml = xml.replace(/&lt;/g, "<").replace(/&gt;/g, ">");
		try {
			// xml = xml.replace(/X3DScript/g, "Script");
			load_X_ITE_XML(xml, "#x_itexml");
			// xml = xml.replace(/Script>/g, "X3DScript>");
		} catch (e) {
			alert("Problems with X_ITE xml "+ e);
			console.error(e);
		}
		// put everthing inside Scene into the browser's Scene's innerHTML
		// Do this inner HTML so we can sneak script tag past JQuery (BAD BAD TODO)
		$('#x3domxml').get()[0].innerHTML = xml.replace(/((?!<X3D).)*<X3D(.|\n)*<Scene[^>]*>((.|\n)*)<\/Scene>(.|\n)*/, '$3');
		x3dom.reload();
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

function filter(event) {
	$('#file').children().remove().end();
	$.getJSON("/files?"+event.target.value, function (data) {
		$.each(data, function(i, opt) {
			$('#file').append($("<option>", { value: opt, text: opt}));
		});
	});
}

function load_X_ITE_XML(content, selector) {
	X3D(function() {
		var browser = X3D.getBrowser(selector);
		browser.replaceWorld(browser.createX3DFromString(content));
	}, function() {
		alert("Failed to render XML to X_ITE");
	});
}

window.load_X_ITE_DOM = function load_X_ITE_DOM(element, selector) {
	X3D(function() {
		if (typeof X3D.getBrowser !== 'undefined') {
			var browser = X3D.getBrowser(selector);
			if (typeof browser !== 'undefined' && typeof browser.importDocument !== 'undefined') {
				var importedScene = browser.importDocument(element);
				browser.replaceWorld(importedScene);
			}
		}
	}, function() {
		alert("Failed to render DOM to X_ITE");
	});
}

window.load_X_ITE_JS = function load_X_ITE_JS(jsobj, selector) {
	X3D(function() {
		if (typeof X3D.getBrowser !== 'undefined') {
			var browser = X3D.getBrowser(selector);
			if (typeof browser !== 'undefined' && typeof browser.importJS !== 'undefined') {
				var importedScene = browser.importJS(jsobj);
				browser.replaceWorld(importedScene);
			}
		}
	}, function() {
		alert("Failed to render JSON to X_ITE");
	});
}

if (typeof mapToMethod !== 'undefined') {
	Object.assign(mapToMethod, {
	});

	if (typeof mapToMethod2 !== 'undefined') {
		for (var map in mapToMethod2) {
			Object.assign(mapToMethod[map], mapToMethod2[map]);
		}
	}
}

window.loadX3DJS_X3DOM = function loadX3DJS_X3DOM(selector, DOMImplementation, jsobj, path, NS, loadSchema, doValidate, X3DJSONLD, callback) {
	X3DJSONLD.x3djsonNS = NS;
	loadSchema(jsobj, path, doValidate, X3DJSONLD, function() {
		var doc = document.querySelector(selector);
		if (doc.hasRuntime && doc.runtime.ready) {
			var child = doc.runtime.createX3DFromJS(jsobj, path);
			var xml = X3DJSONLD.serializeDOM(jsobj, child, true);
			callback(child, xml);
		}
	}, function(e) {
		console.error(e);
		callback(null, null);
	});
}

window.loadX3DJS_X_ITE = function loadX3DJS_X_ITE(selector, DOMImplementation, jsobj, path, NS, loadSchema, doValidate, X3DJSONLD, callback) {
	X3DJSONLD.x3djsonNS = NS;
	loadSchema(jsobj, path, doValidate, X3DJSONLD, function() {
		X3D(function() {
			if (typeof X3D.getBrowser !== 'undefined') {
				var browser = X3D.getBrowser(selector);
				if (typeof browser !== 'undefined' && typeof browser.importJS !== 'undefined') {
					browser.importJS(jsobj, function(child) {
						var xml = X3DJSONLD.serializeDOM(jsobj, child.dom, true);
						callback(child.dom, xml);
					});
				}
			}
		}, function() {
			alert("Failed to render JSON to X_ITE");
		});
	}, function(e) {
		console.error(e);
		callback(null, null);
	});
}

function convertJsonToXml(json, next, path) {
	var NS = $('#namespace option:selected').text();
	loadX3DJS(document.implementation, json, path, NS, loadSchema, doValidate, X3DJSONLD, function(element, xml) {
		next(xml);
	}); // does not load path
}

function loadProtoX3D(scripts, selector, json, url) {
    if ($('#prototype').is(':checked')) {
	// Expand Protos
	try {
		json = PROTOS.prototypeExpander(url, json, "");
	} catch (e) {
		alert("Problems with Proto Expander "+ e);
		console.error(e);
	}
    }
    
   // console.error("JSON IS NOW", json);
   try {
	$('#json').val(JSON.stringify(json, null, 2));
   } catch (e) {
	alert("JSON isn't valid "+ e);
   }
    var NS = $('#namespace option:selected').text();
    replaceX3DJSON(selector, json, url, NS, function(child, xml) {
	    if (child != null) {
			try {
			    load_X_ITE_JS(json, "#x_itejson");
			    // load_X_ITE_DOM(child.cloneNode(true), "#x_itedom");
			} catch (e) {
				alert("Problems with X_ITE DOM "+ e);
				console.error(e);
			}
			try {
			    loadXmlBrowsers(xml);
			} catch (e) {
				alert("Problems with loading xml browsers "+ e);
				console.error(e);
			}
		    if ($('#scripting').is(':checked')) {
			try {
				scripts.loadScripts(json, "#x3domjson", url);
				scripts.loadScripts(json, "#x3domxml", url);
			} catch (e) {
				alert("Problems with loading scripts "+ e);
				console.error(e);
			}
		    }
	    } else {
		    alert("Unknown error returning no child element!");
	    }
	    // do this afterwards to take advantage of prototype expander
	    try {
		updateStl(json);
	    } catch (e) {
		alert("Problems updating Stl");
		console.error(e);
	    }
    });
    return json;
}

window.loadX3D = function loadX3D(selector, json, url) {
	let scripts;
        if ($('#scripting').is(':checked')) {
		scripts = new Scripts();
	}
	json = loadProtoX3D(scripts, selector, json, url);
}

/**
 * Load a JSON URL into an element
 * elemnent -- element to add to
 * url -- JSON url to add
 */
function appendInline(element, url, xmlDoc, next) {
	$.getJSON(url, function(json) {
		if (typeof PROTOS !== 'undefined' && typeof PROTOS.prototypeExpander === 'function') {
			try {
			    if ($('#prototype').is(':checked')) {
				json = PROTOS.prototypeExpander(url, json, "");
			    }
			} catch (e) {
				alert("Problems with ProtoExpander in appendInline "+ e);
				console.error(e);
			}
		} else {
			console.error("Perhaps you need to include the PrototypeExpander.mjs?");
		}
		// must validate here because we call an inner method.
		loadSchema(json, url, doValidate, X3DJSONLD, function() {
			X3DJSONLD.ConvertToX3DOM(xmlDoc, json["X3D"]["Scene"], "Scene", element, url);
			next(element);
		}, function(e) {
			console.error(e);
		});
	}).fail(function(jqXHR, textStatus, errorThrown) { alert('getJSON request failed! ' + textStatus + ' ' + errorThrown); });
}


function loadSubscene(selector, url, xmlDoc, next) {
	appendInline(document.querySelector(selector), url, xmlDoc, next);
}

function loadInline(selector, url, xmlDoc) {
	appendInline($(selector), url, xmlDoc);
}

/*
 * appendX3DJSON2Selector
 * append to selector DOM created from X3D JSON.
 *	also, generate xml for inclusion elsewhere
 *
 * x3dele -- x3d element css selector
 * selector (string) -- css selector
 * json (json object) -- json to convert to DOM
 * url -- name of path/filename json loaded from
 * NS -- XML namespace (optional)
 * next -- to return the element or null
 * returns element loaded
 */
function appendX3DJSON2Selector(x3dele, selector, json, url, NS, next) {
	loadX3DJS_X3DOM(x3dele, document.implementation, json, url, NS, loadSchema, doValidate, X3DJSONLD, function(element, xml) {
		if (element != null) {
			X3DJSONLD.elementSetAttribute(element, "xmlns:xsd", 'http://www.w3.org/2001/XMLSchema-instance');
			$(selector).append(element);
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
 * json (json object) -- json to convert to DOM
 * url -- name of path/filename json loaded from
 * NS -- XML namespace (optional)
 * next -- to return the element and xmlDoc or null, null
 * returns element loaded and xml
 */
window.replaceX3DJSON = function replaceX3DJSON(selector, json, url, NS, next) {

	loadX3DJS_X3DOM(selector, document.implementation, json, url, NS, loadSchema, doValidate, X3DJSONLD, function(element, xml) {
		if (element != null) {
			X3DJSONLD.elementSetAttribute(element, "xmlns:xsd", 'http://www.w3.org/2001/XMLSchema-instance');
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
					var json = convertXmlToJson(getXmlString(element), path);
					updateStl(json);
					return false;
				}
			}
			var doc = document.querySelector(selector);
			if (doc.hasRuntime && doc.runtime.ready) {
				try {
					doc.runtime.replaceWorld(element);
				} catch (e) {
					alert(e);
					console.error(e);
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

window.updateFromJson = function updateFromJson(json, path) {
	try {
		if (typeof json === 'undefined') {
				json = JSON.parse($("#json").val());
		}
		$('#json').val(JSON.stringify(json, null, 2));
	} catch (e) {
		alert("JSON doesn't parse "+ e);
		console.error(e);
	}
	try {
		loadX3D("#x3domjson", json, path);
	} catch (e) {
		alert("Problems converting and loading JSON "+ e);
		console.error(e);
	}
}

window.updateFromStl = function updateFromStl(path) {
	var json = convertStlToJson($('#stl').val());
	updateFromJson(json, path);
}

function updateFromPly(path) {
	var json = convertPlyToJson($('#ply').val());
	updateFromJson(json, path);
}

window.updateFromXml = function updateFromXml(path) {
	var json = convertXmlToJson($('#xml').val(), path);
	updateFromJson(json, path);
}

function loadXml(url) {
	// gets converted to JSON on server
	$.get(url, function(xml) {
		$('#xml').val(getXmlString(xml));
		window.updateFromXml(url);
	})
	.fail(function(jqXHR, textStatus, errorThrown) { alert('loadXml request failed! ' + textStatus + ' ' + errorThrown); });
}

function loadStl(url) {
	$.get(url, function(stl) {
		$('#stl').val(stl);
		window.updateFromStl(url);
	})
	.fail(function(jqXHR, textStatus, errorThrown) { alert('loadStl request failed! ' + textStatus + ' ' + errorThrown); });
}

function loadPly(url) {
	$.get(url, function(ply) {
		$('#ply').val(ply);
		updateFromPly(url);
	})
	.fail(function(jqXHR, textStatus, errorThrown) { alert('loadPly request failed! ' + textStatus + ' ' + errorThrown); });
}

function loadImage(url) {
	var slash = url.lastIndexOf("/");
	// console.error("Image URL attempt at", url, slash);
	if (slash >= 0) {
		// load the default viewpoint as an image
		var dot = url.lastIndexOf(".");

		var base = url.substr(0, slash);
		var ext = url.substr(dot);
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

function updateXml(json, path) {
	//  This step is an important validation step.
	convertJsonToXml(json, function(xml) {
		$('#xml').val(xml);
	}, path);
}

function updateStl(json) {
	try {
		if (typeof convertJsonToStl === 'function') {
			var stl = convertJsonToStl(json);
			$('#stl').val(stl);
		} else {
			console.log("Perhaps you need to include convertJsonToStl.js if you want STL output?");
		}
	} catch (e) {
		console.error(e);
		alert("Problems converting Json to Stl. See console.")
	}
}


$("#file").change(function() {
	var url = $('#file option:selected').text();
	if (url.endsWith(".json")) {
		loadJson(url);
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

function convertXmlToJson(xmlString, path) {
	output = SaxonJS.transform({
		stylesheetLocation: "../lib/stylesheets/X3dToJson.sef.json",
		sourceText: xmlString,
		destination: "serialized",
		outputProperties: { method: "json" }
	}, "sync");
	let jsobj = output.principalResult;
	jsobj = JSON.parse(jsobj);
	console.log(jsobj);
	return jsobj;

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
			loadXmlBrowsers(xmlString);
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
	    alert('convertXmlToJson request failed! ' + textStatus + ' ' + errorThrown);
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
			loadXmlBrowsers(xmlString);
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
			$.getJSON(data, function(json) {
				loadSchema(json, "<unknown>", doValidate, X3DJSONLD, function() {
					alert("Valid or user clicked OK");
				}, function(e) {
					alert(e);
				});
			});
		} else {
			var json = JSON.parse(data);
			loadSchema(json, "<unknown>", doValidate, X3DJSONLD, function() {
				alert("Valid or user clicked OK");
			}, function(e) {
				alert(e);
			});
		}
	} catch (je) {
		alert(je);
	}
}
