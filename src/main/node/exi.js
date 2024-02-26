function writeUint18ArrayBufferToEXIEditor(uint8Array, uint8ArrayLength) {
	var hex = "";
	for(var i=0; i<uint8ArrayLength; i++) {
		var sh = uint8Array[i].toString(16); // base 16 (hex)
		if(sh.length === 1) {
			sh = "0" + sh;
		}
		// hex +=	"0x" + sh + " ";
		hex +=	sh + " ";			
		/*
		if((i+1) % 16 === 0) {
			hex += "\n"
		}
		*/
	}
	// editorEXI.setValue("len = " + uint8ArrayLength + "\n" + hex);
	$("#exi").val(hex);
}

function encodeJSON() {
	var textJSON = $("#json").val(); // JSON text input
	if(textJSON.trim().length === 0) {
		alert("No JSON provided");
	} else {
		try {
			var exiEncoder = new EXI4JSONEncoder();	
			exiEncoder.encodeJsonObject(JSON.parse(textJSON));
			var uint8ArrayLength = exiEncoder.getUint8ArrayLength();
			var uint8Array = exiEncoder.getUint8Array();
			writeUint18ArrayBufferToEXIEditor(uint8Array, uint8ArrayLength);
		} catch(err) {
			alert("Error while encoding JSON. " + err);
		}

	}
}

function decodeEXI4JSON() {
	var textEXI = $("#exi").val(); // EXIforJSON input data

	textEXI = textEXI.trim();
	if(textEXI.length === 0) {
		alert("No EXI provided");
	} else {
		try {
			var sp = textEXI.split(" "); 
			var arrayBuffer = new ArrayBuffer(sp.length);
			var uint8Array = new Uint8Array(arrayBuffer);
			// alert("TODO EXI " + sp.length + ": " + sp);
			for(var i=0; i<sp.length; i++) {
				uint8Array[i] = parseInt(sp[i], 16);
			}

			var exiDecoder = new EXI4JSONDecoder();
			
			// register JSON handler
			var jsonHandler = new JSONEventHandler();
			exiDecoder.registerEventHandler(jsonHandler);
			exiDecoder.decode(uint8Array);
			var jsonText = JSON.stringify(jsonHandler.getJSON(), null, 2);
			$("#json").val(jsonText);
		} catch(err) {
			alert("Error while decoding EXI. " + err);
		}
	}
}
module.exports = {
writeUint18ArrayBufferToEXIEditor: writeUint18ArrayBufferToEXIEditor,
encodeJSON: encodeJSON,
decodeEXI4JSON: decodeEXI4JSON
}
