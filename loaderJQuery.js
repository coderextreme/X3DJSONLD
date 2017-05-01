var intervalId;
function loadXmlBrowsers(xml) {
	if (typeof xml !== 'undefined') {
		$('#xml').val(xml.join("\n"));
	}
	// DISPLAY XML in X3DOM
	// Do this inner HTML so we can sneak script tag past JQuery (BAD BAD TODO)
	xml = $('#xml').val().replace(/&lt;/g, "<").replace(/&gt;/g, ">");
	$('#x3domxml').get()[0].innerHTML = xml;

	loadCobwebXML(xml);

	x3dom.reload();
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

function loadScripts(json) {
    if ($('#scripting').is(':checked')) {
	// Now generate JavaScript code for Scripts and Routes
	var classes = new LOG();
	var routecode = new LOG();
	routecode.log("var __eventTime = 0;");
	routecode.log("function runRoutes() {");
	processScripts(json, classes, undefined, routecode);
	routecode.log("__eventTime += 1000 / 60;");
	routecode.log("}");

	if (typeof intervalId !== 'undefined') {
		console.log("Interval", intervalId, "cleared");
		clearInterval(intervalId);
	}
	if (typeof X3DJSON !== 'undefined') {
		delete X3DJSON;
	}

	$("#scripts").remove();
	var scripts = document.createElement('script');
	scripts.id = "scripts";
	scripts.type = 'text/javascript';
	scripts.text = classes.join("\n");
	$('body').append(scripts);

	$("#routes").remove();
	var routes =  document.createElement('script');
	routes.id = "routes";
	routes.type = 'text/javascript';
	routes.text = routecode.join("\n");
	$('body').append(routes);

	// When we zap the source, we prevent animation
	// zapSource(json);

	// console.log(scripts.text);
	try {
		// console.log(scripts.text);
		// TODO eval is evil
		eval(scripts.text);
	} catch (e) {
		console.error(e);
	}
	// console.log(routes.text);
	try {
		// console.log(routes.text);
		// TODO eval is evil
		eval(routes.text);
	} catch (e) {
		console.error(e);
	}
	intervalId = setInterval(runRoutes, 1000 / 60 );
    }
}

function loadCobwebXML(content) {
/*
	var cobwebEle = document.getElementsByTagName("X3DCanvas")[0];
	if (typeof X3D !== 'undefined') {
		var browser = X3D.getBrowser(cobwebEle);
		browser.replaceWorld(browser.createX3DFromString(content));
	} else {
		console.error("Cobweb disabled temporarily.  May work on next load");
	}
*/
	X3D(function(el) {
		var browser = X3D.getBrowser(el[0]);
		browser.replaceWorld(browser.createX3DFromString(content));
	});
}

function loadCobwebDOM(element) {
	X3D(function(el) {
		var browser = X3D.getBrowser(el[1]);
		var importedScene = browser.importDocument(element);
		browser.replaceWorld(importedScene);
	});
}

Object.assign(mapToMethod, {
});

for (let map in mapToMethod2) {
	Object.assign(mapToMethod[map], mapToMethod2[map]);
}

function convertJsonToXml(json, next) {
	var NS = $('#namespace option:selected').text();
	var xml = new LOG();
	loadX3DJS(json, "flipper.json", xml, NS, loadSchema, doValidate, function(element) {
		if (element != null) {
			next(xml);
		} else {
			next(null);
		}
	}); // does not load flipper.json
}

function loadX3D(selector, json, url, next) {
    var xml = new LOG();
    if ($('#prototype').is(':checked')) {
	// Expand Protos
	// json = externPrototypeExpander(url, json);
	json = prototypeExpander(url, json, "");
	json = flattener(json);
	// console.log("JSON IS NOW", json);
	$('#json').val(JSON.stringify(json, null, 2));
    }
    var NS = $('#namespace option:selected').text();
    replaceX3DJSON(selector, json, url, xml, NS, function(child) {
	    if (child != null) {
		    loadCobwebDOM(child);
		    loadXmlBrowsers(xml);
		    if ($('#scripting').is(':checked')) {
			loadScripts(json);
		    }
	    } else {
		    alert("Unknown error returning no child element!");
	    }
    });
}

/**
 * Load a JSON URL into an element
 * elemnent -- element to add to
 * url -- JSON url to add
 */
function appendInline(element, url) {
	$.getJSON(url, function(json) {
		// must validate here because we call an inner method.
		loadSchema(json, doValidate, function() {
			ConvertToX3DOM(json["X3D"]["Scene"], "Scene", element, url);
		}, function(e) {
			console.error(e);
		});
	}).fail(function(jqXHR, textStatus, errorThrown) { alert('getJSON request failed! ' + textStatus + ' ' + errorThrown); });
}

function loadInline(selector, url) {
	appendInline($(selector), url);
}

/*
 * appendX3DJSON2Selector
 * append to selector DOM created from X3D JSON.
 *	also, generate xml for inclusion elsewhere
 *
 * selector (string) -- css selector
 * json (json object) -- json to convert to DOM
 * url -- name of path/filename json loaded from
 * xml (array or LOG, must have push function which takes a string) -- xml output (optional)
 * NS -- XML namespace (optional)
 * next -- to return the element or null
 * returns element loaded
 */
function appendX3DJSON2Selector(selector, json, url, xml, NS, next) {
	loadX3DJS(json, url, xml, NS, loadSchema, doValidate, function(element) {
		if (element != null) {
			elementSetAttribute(element, "xmlns:xsd", 'http://www.w3.org/2001/XMLSchema-instance');
			$(selector).append(element);
		}
		next(element);
	});  // Cobweb if not XHTML NS
}

/*
 * replaceX3DJSON
 * replace children of selector with DOM created from X3D JSON.
 *	also, generate xml for inclusion elsewhere
 *
 * selector (string) -- css selector
 * json (json object) -- json to convert to DOM
 * url -- name of path/filename json loaded from
 * xml (array or LOG, must have push function which takes a string) -- xml output (optional)
 * NS -- XML namespace (optional)
 * next -- to return the element or null
 * returns element loaded
 */
function replaceX3DJSON(selector, json, url, xml, NS, next) {

	loadX3DJS(json, url, xml, NS, loadSchema, doValidate, function(element) {
		if (element != null) {
			elementSetAttribute(element, "xmlns:xsd", 'http://www.w3.org/2001/XMLSchema-instance');
			// We have to do this stuff before the DOM hits X3DOM, or we get a mess.
			if (typeof JavaScriptSerializer !== 'undefined') {
				var jserial = new JavaScriptSerializer();
				var java = jserial.serializeToString(json, element, url, mapToMethod, fieldTypes);
				$('#java').val(java);
			}
			if (document.getElementById("dom") !== null) {
				document.getElementById("dom").onclick = function() { return false; } 

				document.getElementById("dom").onclick = function() {
					// capture the display
					convertXmlToJson(serializeDOM(json, element), updateStl);
					return false;
				}
			}
			$(selector+" X3D").remove();
			$(selector).append(element);
		}
		next(element);
	});
}

function updateFromJson(json) {
	if (typeof json === 'undefined') {
		json = JSON.parse($("#json").val());
	}
	$('#json').val(JSON.stringify(json, null, 2));
	updateStl(json);
	loadX3D("#x3domjson", json, "flipper.json"); // does not load flipper.json
}

function updateFromStl() {
	var json = convertStlToJson($('#stl').val());
	updateFromJson(json);
}

function updateFromPly() {
	var json = convertPlyToJson($('#ply').val());
	updateFromJson(json);
}

function updateFromXml() {
	var xml = $('#xml').val();
	convertXmlToJson(xml, updateFromJson);
}

function loadXml(url) {
	$.get(url, function(xml) {
		// hardcode version 3.3, UTF-8 for now
		// var json = { "X3D" : {  "@version" : "3.3", "encoding" : "UTF-8" }};
		// xml = serializeDOM(json, xml);
		$('#xml').val(getXmlString(xml));
		updateFromXml();
	}, "xml")
	.fail(function(jqXHR, textStatus, errorThrown) { alert('loadXml request failed! ' + textStatus + ' ' + errorThrown); });
}

function loadStl(url) {
	$.get(url, function(stl) {
		$('#stl').val(stl);
		updateFromStl();
	})
	.fail(function(jqXHR, textStatus, errorThrown) { alert('loadStl request failed! ' + textStatus + ' ' + errorThrown); });
}

function loadPly(url) {
	$.get(url, function(ply) {
		$('#ply').val(ply);
		updateFromPly();
	})
	.fail(function(jqXHR, textStatus, errorThrown) { alert('loadPly request failed! ' + textStatus + ' ' + errorThrown); });
}

function loadJson(url) {
	var slash = url.lastIndexOf("/");
	if (slash >= 0) {
		// load the default viewpoint as an image
		var dot = url.lastIndexOf(".");

		var base = url.substr(0, slash);
		var file = url.substr(slash, url.length - slash - 5); // .json
		var png = base+"/_viewpoints"+file+".x3d._VP_Default_viewpoint.png";
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
	$.getJSON(url, function(json) {
		updateFromJson(json);
		updateXml(json);
	})
	.fail(function(jqXHR, textStatus, errorThrown) { alert('getJSON request failed! ' + textStatus + ' ' + errorThrown); });
}

function updateXml(json) {
	//  This step is an important validation step.
	convertJsonToXml(json, function(xml) {
		$('#xml').val(xml.join("\n"));
	});
}

function updateStl(json) {
	var stl = convertJsonToStl(json);
	$('#stl').val(stl);
}


$("select").change(function() {
	var url = $('#file option:selected').text();
	if (url.endsWith(".json")) {
		loadJson(url);
	} else if (url.endsWith(".x3d")) {
		loadXml(url);
	} else if (url.endsWith(".xml")) {
		loadXml(url);
	} else if (url.endsWith(".ply")) {
		loadPly(url);
	} else if (url.endsWith(".stl")) {
		loadStl(url);
	} else {
		alert("Unknown extension on URL "+url);
	}
});

// get either JSON out of the stylesheet, or convert loaded XML file
function getXmlString(xml) {
  if (window.ActiveXObject) { return xml.xml; }
  xml = new XMLSerializer().serializeToString(xml);
  return xml;
}

function convertXmlToJson(xmlString, callback) {
    $.post("/convert", xmlString, callback, "json")
    .fail(function(jqXHR, textStatus, errorThrown) {
	    alert('convertXmlToJson request failed! ' + textStatus + ' ' + errorThrown);
	    $.get("X3dToJson.xslt", function(xslt) {
		// console.log("VAL", xmlString);
		var demo = { xslt: xslt};

		// code for regular browsers
		if (window.DOMParser) {
		    var parser = new DOMParser();
		    demo.xml = parser.parseFromString(xmlString, "application/xml");
		}
		// code for IE
		if (window.ActiveXObject) {
		    demo.xml = new ActiveXObject("Microsoft.XMLDOM");
		    demo.xml.async = false;
		    demo.xml.loadXML(xmlString);
		}
		// console.log("PARSED XML", demo.xml);

		// code for regular browsers
		if (document.implementation && document.implementation.createDocument)
		{
		    var xsltProcessor = Saxon.newXSLT20Processor();
		    xsltProcessor.importStylesheet(demo.xslt);
		    result = xsltProcessor.transformToFragment(demo.xml, document);
		}
		else if (window.ActiveXObject) {
		    // code for IE
		    result = demo.xml.transformNode(demo.xslt);
		}

		 try {
		// console.log('JSON', result);
			var json = JSON.parse(getXmlString(result));
			callback(json);
		} catch (e) {
			alert("No validation done, JSON doesn't parse or load.  depending on viewers "+e);
			loadXmlBrowsers([xmlString]);
		}
	    }, "xml")
	    .fail(function(jqXHR, textStatus, errorThrown) {
	    	alert('Could not process stylesheet X3dToJson.xslt! ' + textStatus + ' ' + errorThrown);
	    });
    });
}

var validate = function() { return true; }

function doValidate(json, success, failure, e) {
	var retval = false;
	if (e) {
		alert(e);
	}
	var version = json.X3D["@version"];
	if (typeof validate[version] !== 'undefined') {
		var valid = validate[version](json);
		if (!valid) {
			var errs = validate[version].errors;
			var error = ""
			for (var e in errs) {
				error += "\r\n keyword: " + errs[e].keyword + "\r\n";
				error += " dataPath: " + errs[e].dataPath + "\r\n";
				error += " message: " + errs[e].message + "\r\n";
				error += " params: " + JSON.stringify(errs[e].params) + "\r\n";
			}
		}
		retval = (valid || confirm(error));
	}
	if (retval && typeof success == 'function') {
		success();
	} else if (typeof failure === 'function') {
		failure(e);
	} else {
		console.error("User selected failure");
	}
}

function loadSchema(json, doValidate, success, failure) {
	var versions = { "3.0":true,"3.1":true,"3.2":true,"3.3":true,"3.4":true, "4.0":true }
	var version = json.X3D["@version"];
	if (!versions[version]) {
		console.error("Can only validate version 3.0-4.0 presently. Switching version to 3.3.");
		version = "3.3";
	}
        if (typeof validate[version] === 'undefined') {
		var ajv = new Ajv({ allErrors:true});
		ajv.addFormat("uri", /^(?:[a-z][a-z0-9+\-.]*:)?(?:\/?\/(?:(?:[a-z0-9\-._~!$&'()*+,;=:]|%[0-9a-f]{2})*@)?(?:\[(?:(?:(?:(?:[0-9a-f]{1,4}:){6}|::(?:[0-9a-f]{1,4}:){5}|(?:[0-9a-f]{1,4})?::(?:[0-9a-f]{1,4}:){4}|(?:(?:[0-9a-f]{1,4}:){0,1}[0-9a-f]{1,4})?::(?:[0-9a-f]{1,4}:){3}|(?:(?:[0-9a-f]{1,4}:){0,2}[0-9a-f]{1,4})?::(?:[0-9a-f]{1,4}:){2}|(?:(?:[0-9a-f]{1,4}:){0,3}[0-9a-f]{1,4})?::[0-9a-f]{1,4}:|(?:(?:[0-9a-f]{1,4}:){0,4}[0-9a-f]{1,4})?::)(?:[0-9a-f]{1,4}:[0-9a-f]{1,4}|(?:(?:25[0-5]|2[0-4]\d|[01]?\d\d?)\.){3}(?:25[0-5]|2[0-4]\d|[01]?\d\d?))|(?:(?:[0-9a-f]{1,4}:){0,5}[0-9a-f]{1,4})?::[0-9a-f]{1,4}|(?:(?:[0-9a-f]{1,4}:){0,6}[0-9a-f]{1,4})?::)|[Vv][0-9a-f]+\.[a-z0-9\-._~!$&'()*+,;=:]+)\]|(?:(?:25[0-5]|2[0-4]\d|[01]?\d\d?)\.){3}(?:25[0-5]|2[0-4]\d|[01]?\d\d?)|(?:[a-z0-9\-._~!$&'()*+,;=]|%[0-9a-f]{2})*)(?::\d*)?(?:\/(?:[a-z0-9\-._~!$&'()*+,;=:@]|%[0-9a-f]{2})*)*|\/(?:(?:[a-z0-9\-._~!$&'()*+,;=:@]|%[0-9a-f]{2})+(?:\/(?:[a-z0-9\-._~!$&'()*+,;=:@]|%[0-9a-f]{2})*)*)?|(?:[a-z0-9\-._~!$&'()*+,;=:@]|%[0-9a-f]{2})+(?:\/(?:[a-z0-9\-._~!$&'()*+,;=:@]|%[0-9a-f]{2})*)*)?(?:\?(?:[a-z0-9\-._~!$&'()*+,;=:@\/?]|%[0-9a-f]{2})*)?(?:\#(?:[a-z0-9\-._~!$&'()*+,;=:@\/?]|%[0-9a-f]{2})*)?$/i);

		
		$.getJSON('http://json-schema.org/draft-04/schema', function(metaschemajson) {
		    // try {
		      ajv.addMetaSchema(metaschemajson);
		      console.log("MetaSchema added");
		      $.getJSON("x3d-"+version+"-JSONSchema.json", function(schemajson) {
			   // try {
			      console.log("Schema received");
			      ajv.addSchema(schemajson);
			      console.log("Schema", version, "added");
			      validate[version] = ajv.compile(schemajson);
			      if (typeof validate[version] !== 'undefined') {
				      console.log("Schema compiled");
			      } else {
				      console.log("Schema not compiled");
			      }
			      doValidate(json, success, undefined);
			    // } catch (e) {
			      // doValidate(json, undefined, failure, e);
			    // }
			}).fail(function(e) {
			   doValidate(json, undefined, failure, e);
			});
		    // } catch (e) {
		      // doValidate(json, undefined, failure, e);
		    // }
		}).fail(function(e) {
		   doValidate(json, undefined, failure, e);
		});
	} else {
		// try {
		      doValidate(json, success, undefined);
		// } catch (e) {
		      // doValidate(json, undefined, failure, e);
		// }
	}
}
