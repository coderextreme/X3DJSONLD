var validate = function() { return true; }

function setVersion(version) {
	var versions = { "3.0":true,"3.1":true,"3.2":true,"3.3":true,"3.4":true }
	if (!versions[version]) {
		alert("Can only validate version 3.0-3.4 presently. Switching version to 3.3.");
		version = "3.3";
	}
	$.getJSON("x3d-"+version+"-JSONSchema.json", function(schema) {
		var ajv = Ajv({ allErrors:true});
		ajv.addFormat("uri", /^(?:[a-z][a-z0-9+\-.]*:)?(?:\/?\/(?:(?:[a-z0-9\-._~!$&'()*+,;=:]|%[0-9a-f]{2})*@)?(?:\[(?:(?:(?:(?:[0-9a-f]{1,4}:){6}|::(?:[0-9a-f]{1,4}:){5}|(?:[0-9a-f]{1,4})?::(?:[0-9a-f]{1,4}:){4}|(?:(?:[0-9a-f]{1,4}:){0,1}[0-9a-f]{1,4})?::(?:[0-9a-f]{1,4}:){3}|(?:(?:[0-9a-f]{1,4}:){0,2}[0-9a-f]{1,4})?::(?:[0-9a-f]{1,4}:){2}|(?:(?:[0-9a-f]{1,4}:){0,3}[0-9a-f]{1,4})?::[0-9a-f]{1,4}:|(?:(?:[0-9a-f]{1,4}:){0,4}[0-9a-f]{1,4})?::)(?:[0-9a-f]{1,4}:[0-9a-f]{1,4}|(?:(?:25[0-5]|2[0-4]\d|[01]?\d\d?)\.){3}(?:25[0-5]|2[0-4]\d|[01]?\d\d?))|(?:(?:[0-9a-f]{1,4}:){0,5}[0-9a-f]{1,4})?::[0-9a-f]{1,4}|(?:(?:[0-9a-f]{1,4}:){0,6}[0-9a-f]{1,4})?::)|[Vv][0-9a-f]+\.[a-z0-9\-._~!$&'()*+,;=:]+)\]|(?:(?:25[0-5]|2[0-4]\d|[01]?\d\d?)\.){3}(?:25[0-5]|2[0-4]\d|[01]?\d\d?)|(?:[a-z0-9\-._~!$&'()*+,;=]|%[0-9a-f]{2})*)(?::\d*)?(?:\/(?:[a-z0-9\-._~!$&'()*+,;=:@]|%[0-9a-f]{2})*)*|\/(?:(?:[a-z0-9\-._~!$&'()*+,;=:@]|%[0-9a-f]{2})+(?:\/(?:[a-z0-9\-._~!$&'()*+,;=:@]|%[0-9a-f]{2})*)*)?|(?:[a-z0-9\-._~!$&'()*+,;=:@]|%[0-9a-f]{2})+(?:\/(?:[a-z0-9\-._~!$&'()*+,;=:@]|%[0-9a-f]{2})*)*)?(?:\?(?:[a-z0-9\-._~!$&'()*+,;=:@\/?]|%[0-9a-f]{2})*)?(?:\#(?:[a-z0-9\-._~!$&'()*+,;=:@\/?]|%[0-9a-f]{2})*)?$/i);
		validate = ajv.compile(schema);
	});
}
	var intervalId;
        function updateXML(xml) {
		if (typeof xml !== 'undefined') {
			// DISPLAY XML in X3DOM
			$('#x3domxml').empty();
			// Do this inner HTML so we can sneak script tag past JQuery (BAD BAD TODO)
			$('#x3domxml').get()[0].innerHTML = xml.join("\n").replace(/&lt;/g, "<").replace(/&gt;/g, ">");
	    	        $('textarea#xml').val(xml.join("\n"));
		} else {
			$('#x3domxml').get()[0].innerHTML = $('textarea#xml').val().replace(/&lt;/g, "<").replace(/&gt;/g, ">");
		}
		var content = $('textarea#xml').val().replace(/&lt;/g, "<").replace(/&gt;/g, ">");
		var cobwebWindow = document.getElementById("cobwebframe").contentWindow ;
		var cobwebEle = cobwebWindow.document.getElementsByTagName("X3D")[0];
		if (typeof cobwebWindow.X3D !== 'undefined') {
			var browser = cobwebWindow.X3D.getBrowser(cobwebEle);
			browser.replaceWorld(browser.createX3DFromString(content));
		} else {
			console.error("Cobweb disabled temporarily.  May work on next load");
		}
	        x3dom.reload();
        }

	function filter(event) {
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

	function loadScripts(json) {
	    if ($('#scripting').is(':checked')) {
		// Now generate JavaScript code for Scripts and Routes
		var classes = new LOG();
		var routecode = new LOG();
		routecode.log("function runRoutes() {");
		processScripts(json, classes, undefined, routecode);
		routecode.log("}");

		if (typeof intervalId !== 'undefined') {
			// console.log("Interval", intervalId, "cleared");
			clearInterval(intervalId);
		} else {
			console.log("intervalId undefined");
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
			// TODO eval is evil
			eval(scripts.text);
		} catch (e) {
			console.error(e);
		}
		// console.log(routes.text);
		try {
			// TODO eval is evil
			eval(routes.text);
		} catch (e) {
			console.error(e);
		}
		intervalId = setInterval(runRoutes, 100);
	    }
	}

        function loadX3DOM(selector, json, url) {
	    $(selector).empty();
	    var xml = new LOG();
	    if ($('#prototype').is(':checked')) {
		// Expand Protos
		// json = externPrototypeExpander(url, json);
		json = prototypeExpander(url, json, "");
		json = flattener(json);
		// console.log("JSON IS NOW", json);
	        $('textarea#json').val(JSON.stringify(json, null, 2));
	    }
	    var NS = $('#namespace option:selected').text();
	    if (NS === "none") {
		replaceX3DJSON(selector, json, url, xml); // X3DOM
	    } else {
		replaceX3DJSON(selector, json, url, xml, NS);  // Cobweb if not XHTML NS
	    }
	    updateXML(xml);
	    loadScripts(json);
        }

	function appendInline(element, url) {
                $.getJSON(url, function(json) {
                        ConvertToX3DOM(json["X3D"]["Scene"], "Scene", element, url);
                }).fail(function(jqXHR, textStatus, errorThrown) { alert('getJSON request failed! ' + textStatus + ' ' + errorThrown); });
	}

	function loadInline(selector, url) {
		appendInline(document.querySelector(selector), url);
        }

        /*
         * appendX3DJSON2Selector
         * append to selector DOM created from X3D JSON.
         *	also, generate xml for inclusion elsewhere
         *
	 * selector (string) -- css selector
         * json (json object) -- json to convert to DOM
         * xml (array or LOG, must have push function which takes a string) -- xml output (optional)
         * NS -- XML namespace (optional)
         */
	function appendX3DJSON2Selector(selector, json, url, xml, NS) {
		var element = loadX3DJS(json, url, xml, NS);  // Cobweb if not XHTML NS
		elementSetAttribute(element, "xmlns:xsd", 'http://www.w3.org/2001/XMLSchema-instance');
		document.querySelector(selector).appendChild(element);
		x3dom.reload();
	}

        /*
         * replaceX3DJSON
         * replace body of selector with DOM created from X3D JSON.
         *	also, generate xml for inclusion elsewhere
         *
	 * selector (string) -- css selector
         * json (json object) -- json to convert to DOM
         * xml (array or LOG, must have push function which takes a string) -- xml output (optional)
         * NS -- XML namespace (optional)
         */
	function replaceX3DJSON(selector, json, url, xml, NS) {
		// check against schema
		var version = json.X3D["@version"];
		setVersion(version);  // loads schema.  TODO.  Only load when version changes
		var valid = validate(json);
		if (valid || confirm(JSON.stringify(validate.errors))) {

			var element = loadX3DJS(json, url, xml, NS);  // Cobweb if not XHTML NS
			elementSetAttribute(element, "xmlns:xsd", 'http://www.w3.org/2001/XMLSchema-instance');
			$(selector).empty();
			$(selector).append(element);
		}
	}

	function updateX3DOM() {
		loadX3DOM("#x3domjson", JSON.parse($('textarea#json').val()), "flipper.json"); // does not load flipper.json
	}

	function loadX3DJSON(selector, url) {
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
			$('textarea#json').val(JSON.stringify(json, null, 2));
			loadX3DOM(selector, JSON.parse($('textarea#json').val()), url);
		})
		.fail(function(jqXHR, textStatus, errorThrown) { alert('getJSON request failed! ' + textStatus + ' ' + errorThrown); });
	}

	function loadX3DXSLT(jsonAsXml, url) {
		$('textarea#json').val(getXmlString(jsonAsXml));
		replaceX3DJSON("#x3domjson", JSON.parse($("textarea#json").val()), url);
		x3dom.reload();
		// don't load XML, it's already loaded
	}

	$("select").change(function() {
		$("#x3domjson").empty();
		var url = $('#file option:selected').text();
		loadX3DJSON('#x3domjson', url);
	});

	function getXmlString(xml) {
	  if (window.ActiveXObject) { return xml.xml; }
	  return new XMLSerializer().serializeToString(xml);
	}

	function convertXMLToJSON() {
	    var xmlString = $('textarea#xml').val();
	    $.post("/convert", xmlString, function(json) {
		// console.log('JSON', json);
		$('textarea#json').val(JSON.stringify(json, null, 2));
		replaceX3DJSON("#x3domjson", JSON.parse($("textarea#json").val()), "flipper.json");  // does not load flipper.json
		x3dom.reload();
	    }, "json");
/*
	    $.get("X3dToJson.xslt", function(xslt) {
		var xmlString = $('textarea#xml').val();
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

		// console.log('JSON', result);
		loadX3DXSLT(result, 'flipper.json'); // does not load flipper.json
	    }, "xml");
*/
	}
