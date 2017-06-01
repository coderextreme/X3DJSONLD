if (typeof protoExpander !== 'undefined') {
	protoExpander.setLoadURLs(loadURLs);
}
//  setProcessURLs(function() {}); // do modify URLs in GUI

var intervalId;
function loadXmlBrowsers(xml) {
	if (typeof xml !== 'undefined') {
		$('#xml').val(xml.join("\n"));
	}
	// DISPLAY XML in X3DOM
	// Do this inner HTML so we can sneak script tag past JQuery (BAD BAD TODO)
	xml = $('#xml').val();
	if (typeof xml !== 'undefined') {
		xml = xml.replace(/&lt;/g, "<").replace(/&gt;/g, ">");
		$('#x3domxml').get()[0].innerHTML = xml;
		loadCobwebXML(xml, 1);
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

function loadScripts(json) {
    if ($('#scripting').is(':checked')) {
	// Now generate JavaScript code for Scripts and Routes
	var classes = new LOG();
	var routecode = new LOG();
	var loopItems = new LOG();
	processScripts(json, classes, undefined, routecode, loopItems);

	if (typeof intervalId !== 'undefined') {
		console.error("Interval", intervalId, "cleared");
		clearInterval(intervalId);
	}
	if (typeof X3DJSON !== 'undefined') {
		delete X3DJSON;
	}

	/*
	$("#scripts").remove();
	var scripts = document.createElement('script');
	*/
	var scripts = {};
	scripts.id = "scripts";
	scripts.type = 'text/javascript';
	scripts.text = classes.join("\n");
	   /*
	$('body').append(scripts);
	*/

	    /*
	$("#routes").remove();
	var routes =  document.createElement('script');
	*/
	var routes = {};
	routes.id = "routes";
	routes.type = 'text/javascript';
	routes.text = routecode.join("\n");
	    /*
	$('body').append(routes);
	*/

	var loop = {}
	loop.id = "loop";
	loop.type = "text/javascript";
	loop.text =loopItems.join("\n");
	// When we zap the source, we prevent animation
	// zapSource(json);

	var X3DJSON = {};
	X3DJSON.nodeUtil = function(node, field, value) {
			var element = document.querySelector("[DEF='"+node+"'], [name='"+field+"']");
			if (element === null) {
				console.error('unDEFed node',node);
			} else if (arguments.length > 2) {
				element.setAttribute(field, value.toString());
				console.log('set', node, '.', field, '=', value);
				return element;
			} else if (arguments.length > 1) {
				var value = element.getFieldValue(field);
				/*
				if (element &&
					element._x3domNode &&
					element._x3domNode._vf &&
					element._x3domNode._vf[field] &&
					element._x3domNode._vf[field].setValueByStr) {
					value = element._x3domNode._vf[field].setValueByStr(value);
				}
				*/
				console.log('get', node, '.', field,'=',value);
				return value;
			} else {
				return element;
			}
	};
	try {
		// TODO eval is evil
		eval("var myjson = "+JSON.stringify(json, null, 2)+";\n"+scripts.text+"\n"+routes.text);
	} catch (e) {
		console.error(scripts.text+"\n"+routes.text, e);
	}
	var __eventTime = 0;
	X3DJSON.runRoutes = function() {
		try {
			// TODO eval is evil
			eval(loop.text);
			x3dom.reload();  // This may be necessary
		} catch (e) {
			console.error(loop.txt, e);
		}
		__eventTime += 1000 / 60;
	};
	intervalId = setInterval(X3DJSON.runRoutes, 1000 / 60 );
    }
}

function loadCobwebXML(content, browserNumber) {
	X3D(function(el) {
		var browser = X3D.getBrowser(el[browserNumber]);
		browser.replaceWorld(browser.createX3DFromString(content));
	});
}

function loadCobwebDOM(element, browserNumber) {
	X3D(function(el) {
		if (typeof X3D.getBrowser !== 'undefined') {
			var browser = X3D.getBrowser(el[browserNumber]);
			if (typeof browser !== 'undefined' && typeof browser.importDocument !== 'undefined') {
				var importedScene = browser.importDocument(element);
				browser.replaceWorld(importedScene);
			}
		}
	});
}

function loadCobwebJS(jsobj, browserNumber) {
	X3D(function(el) {
		if (typeof X3D.getBrowser !== 'undefined') {
			var browser = X3D.getBrowser(el[browserNumber]);
			if (typeof browser !== 'undefined' && typeof browser.importDocument !== 'undefined') {
				var importedScene = browser.importJS(jsobj);
				browser.replaceWorld(importedScene);
			}
		}
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

function convertJsonToXml(json, next, path) {
	var NS = $('#namespace option:selected').text();
	var xml = new LOG();
	loadX3DJS(json, path, xml, NS, loadSchema, doValidate, function(element) {
		if (element != null) {
			next(xml);
		} else {
			next(null);
		}
	}); // does not load path
}

function loadX3D(selector, json, url) {
    var xml = new LOG();
    if ($('#prototype').is(':checked')) {
	// Expand Protos
	try {
		// json = protoExpander.externalPrototypeExpander(url, json);
		json = protoExpander.prototypeExpander(url, json, "");
		json = flattener(json);
	} catch (e) {
		alert("Problems with ProtoExpander", e);
		console.error(e);
	}
	// console.error("JSON IS NOW", json);
	try {
		$('#json').val(JSON.stringify(json, null, 2));
	} catch (e) {
		alert("JSON isn't valid", e);
	}
    }
    var NS = $('#namespace option:selected').text();
    replaceX3DJSON(selector, json, url, xml, NS, function(child) {
	    if (child != null) {
		        try {
			    loadCobwebJS(json, 0);
			    loadXmlBrowsers(xml);
			} catch (e) {
				alert("Problems with loading browsers", e);
				console.error(e);
			}
		    if ($('#scripting').is(':checked')) {
			try {
				loadScripts(json);
			} catch (e) {
				alert("Problems with loading scripts", e);
				console.error(e);
			}
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
function appendInline(element, url, next) {
	$.getJSON(url, function(json) {
		if (typeof protoExpander !== 'undefined' && typeof protoExpander.prototypeExpander === 'function') {
			try {
				/// json = protoExpander.externalPrototypeExpander(url, json);
				json = protoExpander.prototypeExpander(url, json, "");
				json = flattener(json);
			} catch (e) {
				alert("Problems with ProtoExpander in appendInline", e);
				console.error(e);
			}
		} else {
			console.error("Perhaps you need to include the PrototypeExpander.js?");
		}
		if (typeof flattener === 'function') {
			json = flattener(json);
		} else {
			console.error("Perhaps you need to include the Flattener.js?");
		}
		// must validate here because we call an inner method.
		loadSchema(json, url, doValidate, function() {
			ConvertToX3DOM(json["X3D"]["Scene"], "Scene", element, url);
			next(element);
		}, function(e) {
			console.error(e);
		});
	}).fail(function(jqXHR, textStatus, errorThrown) { alert('getJSON request failed! ' + textStatus + ' ' + errorThrown); });
}


function loadSubscene(selector, url, next) {
	appendInline(document.querySelector(selector), url, next);
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
	}, function(err) {
		alert(err);
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
				try {
					var jserial = new JavaScriptSerializer();
					var java = jserial.serializeToString(json, element, url, mapToMethod, fieldTypes);
					$('#java').val(java);
				} catch (e) {
					alert("Problems serializing to JavaScript", e);
					console.error(e);
				}
			}
			if (document.getElementById("dom") !== null) {
				document.getElementById("dom").onclick = function() { return false; } 

				document.getElementById("dom").onclick = function() {
					// capture the display
					convertXmlToJson(serializeDOM(json, element), function(json, path) {
						updateStl(path);
					}, url);
					return false;
				}
			}
			$(selector+" X3D").remove();
			$(selector).append(element);
			try {
				x3dom.reload();  // This may be necessary
			} catch (e) {
				console.error(e);
				alert("Problem with x3dom.reload()", e);
			}
		}
		next(element);
	});
}

function updateFromJson(json, path) {
	try {
		if (typeof json === 'undefined') {
				json = JSON.parse($("#json").val());
		}
		$('#json').val(JSON.stringify(json, null, 2));
	} catch (e) {
		alert("JSON doesn't parse", e);
		console.error(e);
	}
	try {
		updateStl(json);
	} catch (e) {
		alert("Problems updating Stl");
		console.error(e);
	}
	try {
		loadX3D("#x3domjson", json, path); // does not load path
	} catch (e) {
		alert("Problems converting and loading JSON", e);
		console.error(e);
	}
}

function updateFromStl(path) {
	var json = convertStlToJson($('#stl').val());
	updateFromJson(json, path);
}

function updateFromPly(path) {
	var json = convertPlyToJson($('#ply').val());
	updateFromJson(json, path);
}

function updateFromXml(path) {
	var xml = $('#xml').val();
	convertXmlToJson(xml, updateFromJson, path);
}

function loadXml(url) {
	// gets converted to JSON on server
	$.getJSON(url, function(json) {
		updateFromJson(json, url);
		updateXml(json, url);
	})
	.fail(function(jqXHR, textStatus, errorThrown) { alert('convert on server to JSON request failed! ' + textStatus + ' ' + errorThrown); });
}

function loadStl(url) {
	$.get(url, function(stl) {
		$('#stl').val(stl);
		updateFromStl(url);
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
	console.error("Image URL attempt at", url, slash);
	if (slash >= 0) {
		// load the default viewpoint as an image
		var dot = url.lastIndexOf(".");

		var base = url.substr(0, slash);
		var ext = url.substr(dot);
		var file = url.substr(slash, url.length - slash - ext.length);
		var png = base+"/_viewpoints"+file+".x3d._VP_Default_viewpoint.png";
		console.error("setting image src to", png)
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
function loadJson(url) {
	$.getJSON(url, function(json) {
		updateFromJson(json, url);
		updateXml(json, url);
	})
	.fail(function(jqXHR, textStatus, errorThrown) { alert('getJSON request failed! ' + textStatus + ' ' + errorThrown); });
}

function updateXml(json, path) {
	//  This step is an important validation step.
	convertJsonToXml(json, function(xml) {
		$('#xml').val(xml.join("\n"));
	}, path);
}

function updateStl(json) {
	try {
		if (typeof convertJsonToStl === 'function') {
			var stl = convertJsonToStl(json);
			$('#stl').val(stl);
		} else {
			console.error("Perhaps you need to include convertJsonToStl.js?");
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
	loadImage(url); // load standard image
});

// get the JSON out of the stylesheet or convert loaded XML file
function getXmlString(xml) {
  if (window.ActiveXObject) { return xml.xml; }
  xml = new XMLSerializer().serializeToString(xml);
  return xml;
}

function convertXmlToJson(xmlString, callback, path) {
    $.post("/convert", xmlString, function(json) {
	    callback(json, path);
    }, "json")
    .fail(function(jqXHR, textStatus, errorThrown) {
	    alert('convertXmlToJson request failed! ' + textStatus + ' ' + errorThrown);
	    $.get("stylesheets/X3dToJson.xslt", function(xslt) {
		// console.error("VAL", xmlString);
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
		// console.error("PARSED XML", demo.xml);

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
		// console.error('JSON', result);
			 // console.error(result);
			var json = getXmlString(result);
			 // put bad JSON in the JSON area
			$('#json').val(json);
			console.error("Result", json);
			var js = JSON.parse(json);
			console.error("Parsing Accomplished")
			callback(js, path);
		} catch (e) {
			alert("No validation done, JSON doesn't parse or load.  depending on XML viewers. Works better if you use node.js as a web server and run the command node app.js from webroot after running npm install"+e);
			loadXmlBrowsers([xmlString]);
		}
	    }, "xml")
	    .fail(function(jqXHR, textStatus, errorThrown) {
	    	alert('Could not process stylesheet X3dToJson.xslt! ' + textStatus + ' ' + errorThrown);
	    });
    });
}

var validate = function() { return false; }

function doValidate(json, validated_version, file, success, failure, e) {
	var retval = false;
	if (e) {
		alert(e);
	}
	var version = json.X3D["@version"];
	if (typeof validated_version !== 'undefined') {
		var valid = validated_version(json);
		if (!valid) {
			var errs = validated_version.errors;
			var error = ""
			for (var e in errs) {
				error += "\n keyword: " + errs[e].keyword + "\n";
				var dataPath = errs[e].dataPath.replace(/^\./, "").replace(/[\.\[\]']+/g, " > ").replace(/ >[ \t]*$/, "");
	
				error += " dataPath: " + dataPath+ "\n";
				var selectedObject = selectObjectFromJSObj(json, dataPath);
				error += " value: " + JSON.stringify(selectedObject,
					function(k, v) {
					    var v2 = JSON.parse(JSON.stringify(v));
					    if (typeof v2 === 'object') {
						    for (var o in v2) {
					    		if (typeof v2[o] === 'object') {
								    v2[o] = "|omitted|";
							}
					            }
					    }
					    return v2;
					}) + "\n";
				error += " message: " + errs[e].message + "\n";
				error += " params: " + JSON.stringify(errs[e].params) + "\n";
				error += " file: " + file + "\n";
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

function loadSchema(json, file, doValidate, success, failure) {
	var versions = { "3.0":true,"3.1":true,"3.2":true,"3.3":true,"3.4":true, "4.0":true }
	var version = json.X3D["@version"];
	if (!versions[version]) {
		console.error("Can only validate version 3.0-4.0 presently. Switching version to 3.3.");
		version = "3.3";
	}
	var validated_version = validate[version];
        if (typeof validated_version === 'undefined') {
		var ajv = new Ajv({ allErrors:true});
		ajv.addFormat("uri", /^(?:[a-z][a-z0-9+\-.]*:)?(?:\/?\/(?:(?:[a-z0-9\-._~!$&'()*+,;=:]|%[0-9a-f]{2})*@)?(?:\[(?:(?:(?:(?:[0-9a-f]{1,4}:){6}|::(?:[0-9a-f]{1,4}:){5}|(?:[0-9a-f]{1,4})?::(?:[0-9a-f]{1,4}:){4}|(?:(?:[0-9a-f]{1,4}:){0,1}[0-9a-f]{1,4})?::(?:[0-9a-f]{1,4}:){3}|(?:(?:[0-9a-f]{1,4}:){0,2}[0-9a-f]{1,4})?::(?:[0-9a-f]{1,4}:){2}|(?:(?:[0-9a-f]{1,4}:){0,3}[0-9a-f]{1,4})?::[0-9a-f]{1,4}:|(?:(?:[0-9a-f]{1,4}:){0,4}[0-9a-f]{1,4})?::)(?:[0-9a-f]{1,4}:[0-9a-f]{1,4}|(?:(?:25[0-5]|2[0-4]\d|[01]?\d\d?)\.){3}(?:25[0-5]|2[0-4]\d|[01]?\d\d?))|(?:(?:[0-9a-f]{1,4}:){0,5}[0-9a-f]{1,4})?::[0-9a-f]{1,4}|(?:(?:[0-9a-f]{1,4}:){0,6}[0-9a-f]{1,4})?::)|[Vv][0-9a-f]+\.[a-z0-9\-._~!$&'()*+,;=:]+)\]|(?:(?:25[0-5]|2[0-4]\d|[01]?\d\d?)\.){3}(?:25[0-5]|2[0-4]\d|[01]?\d\d?)|(?:[a-z0-9\-._~!$&'()*+,;=]|%[0-9a-f]{2})*)(?::\d*)?(?:\/(?:[a-z0-9\-._~!$&'()*+,;=:@]|%[0-9a-f]{2})*)*|\/(?:(?:[a-z0-9\-._~!$&'()*+,;=:@]|%[0-9a-f]{2})+(?:\/(?:[a-z0-9\-._~!$&'()*+,;=:@]|%[0-9a-f]{2})*)*)?|(?:[a-z0-9\-._~!$&'()*+,;=:@]|%[0-9a-f]{2})+(?:\/(?:[a-z0-9\-._~!$&'()*+,;=:@]|%[0-9a-f]{2})*)*)?(?:\?(?:[a-z0-9\-._~!$&'()*+,;=:@\/?]|%[0-9a-f]{2})*)?(?:\#(?:[a-z0-9\-._~!$&'()*+,;=:@\/?]|%[0-9a-f]{2})*)?$/i);

		
		$.getJSON('../schema/draft-04-JSONSchema.json', function(metaschemajson) {
		    // try {
		      ajv.addMetaSchema(metaschemajson);
		      console.error("MetaSchema added");
		      $.getJSON("../schema/x3d-"+version+"-JSONSchema.json", function(schemajson) {
			   // try {
			      console.error("Schema received");
			      ajv.addSchema(schemajson);
			      console.error("Schema", version, "added");
			      validated_version = ajv.compile(schemajson);
			      validate[version] = validated_version;
			      if (typeof validated_version !== 'undefined') {
				      console.error("Schema compiled");
			      } else {
				      console.error("Schema not compiled");
			      }
			      doValidate(json, validated_version, file, success, undefined);
			    // } catch (e) {
			      // doValidate(json, validated_version, file, undefined, failure, e);
			    // }
			}).fail(function(e) {
			   doValidate(json, validated_version, file, undefined, failure, e);
			});
		    // } catch (e) {
		      // doValidate(json, validated_version, file, undefined, failure, e);
		    // }
		}).fail(function(e) {
		   doValidate(json, validated_version, file, undefined, failure, e);
		});
	} else {
		// try {
		      doValidate(json, validated_version, file, success, undefined);
		// } catch (e) {
		      // doValidate(json, validated_version, file, undefined, failure, e);
		// }
	}
}
