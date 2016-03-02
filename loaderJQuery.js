	var intervalId;
        function updateXML(xml) {
		if (typeof xml !== 'undefined') {
			// DISPLAY XML in X3DOM
			$('#x3domxml').empty();
			// Do this inner HTML so we can sneak script tag past JQuery (BAD BAD TODO)
			$('#x3domxml').get()[0].innerHTML = xml.join("\n");
	    	        $('textarea#xml').val(xml.join("\n"));
		} else {
			$('#x3domxml').get()[0].innerHTML = $('textarea#xml').val();
		}
		x3dom.reload();
		var content = $('textarea#xml').val();
		var cobwebWindow = document.getElementById("cobwebframe").contentWindow ;
		var cobwebEle = cobwebWindow.document.getElementsByTagName("X3D")[0];
		if (typeof cobwebWindow.X3D !== 'undefined') {
			var browser = cobwebWindow.X3D.getBrowser(cobwebEle);
			browser.replaceWorld(browser.createX3DFromString(content));
		} else {
			console.error("Cobweb disabled.  Use Firefox.");
		}
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

        function loadX3DOM(selector, json, url) {
	    $(selector).empty();
	    var xml = new LOG();
	    if ($('#prototype').is(':checked')) {

		// Expand Protos
		prototypeExpander(json, "");

		// Now generate JavaScript code for Scripts and Routes
		var classes = new LOG();
		var routecode = new LOG();
		routecode.log("function runRoutes() {");
		processScripts(json, classes, undefined, routecode);
		routecode.log("}");

		if (typeof intervalId !== 'undefined') {
			console.log("Interval", intervalId, "cleared");
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

		console.log(scripts.text);
		// TODO eval is evil
		eval(scripts.text);
		console.log(routes.text);
		// TODO eval is evil
		eval(routes.text);

	        $('textarea#json').val(JSON.stringify(json, null, 2));
	
		intervalId = setInterval(runRoutes, 100);
	    }
	    var NS = $('#namespace option:selected').text();
	    switch(NS) {
	    case "none":
		document.querySelector(selector).appendChild(loadX3DJS(json, url, xml)); // X3DOM
		break;
	    default:
		document.querySelector(selector).appendChild(loadX3DJS(json, url, xml, NS));  // Cobweb if not XHTML NS
		break;
	    }
			
	    updateXML(xml);
        }

	function updateX3DOM() {
		loadX3DOM("#x3domjson", JSON.parse($('textarea#json').val()), "flipper.json"); // does not load flipper.json
	}

	function loadX3DJSON(selector, url) {
		$.getJSON(url, function(json) {
			$('textarea#json').val(JSON.stringify(json, null, 2));
			loadX3DOM(selector, JSON.parse($('textarea#json').val()), url);
		})
		.fail(function(jqXHR, textStatus, errorThrown) { alert('getJSON request failed! ' + textStatus + ' ' + errorThrown); });
	}

	$("select").change(function() {
		$("#x3domjson").empty();
		var url = $('#file option:selected').text();
		loadX3DJSON('#x3domjson', url);
	});

	$(document).ready(function() {
		loadX3DJSON('#x3domjson','flipper.json'); // does load flipper.json
	});
