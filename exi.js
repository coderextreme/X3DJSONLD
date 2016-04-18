function encodeJSON() {
	var textJSON = $("#json").val(); // JSON text input
	if(textJSON.trim().length == 0) {
		alert("No JSON provided");
	} else {
		try {
			var jsonObj = JSON.parse(textJSON);
			var exiEncoder = new EXI4JSONEncoder();	
			exiEncoder.encodeJsonObject(jsonObj);
			var uint8ArrayLength = exiEncoder.getUint8ArrayLength();
			var uint8Array = exiEncoder.getUint8Array();
			$("#exi").val(uint8Array);
		} catch(err) {
			alert("Error while encoding JSON. " + err);
		}

	}
}

function decodeEXI4JSON() {
	var textEXI = $("#exi").val(); // EXIforJSON input data

	textEXI = textEXI.trim();
	if(textEXI.length == 0) {
		alert("No EXI provided");
	} else {
		try {
			var sp = textEXI.split(","); 
			var arrayBuffer = new ArrayBuffer(sp.length);
			var arrayBufferView = new Uint8Array(arrayBuffer);
			for(var i=0; i<sp.length; i++) {
				arrayBufferView[i] = parseInt(sp[i], 10);
			}
			
			var exiDecoder = new EXI4JSONDecoder();
			
			// register JSON handler
			var jsonHandler = new JSONEventHandler();
			exiDecoder.registerEventHandler(jsonHandler);
			exiDecoder.decode(arrayBuffer);
			var jsonText = JSON.stringify(jsonHandler.getJSON(), null, 2);
			$("#json").val(jsonText);
		} catch(err) {
			alert("Error while decoding EXI. " + err);
		}
	}
}
