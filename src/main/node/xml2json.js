let fs = require('fs');
let DOMParser = require('@xmldom/xmldom').DOMParser;
let domParser = new DOMParser();
let fieldTypes = require('./fieldTypes');

process.argv.shift();
process.argv.shift();

function isEmpty(obj) {
	for (const prop in obj) {
		if (Object.hasOwn(obj, prop)) {
			return false;
		}
	}
	return true;
}

xml2json = (xml, par, fieldTypes) => {
  let el = xml.nodeType === 9 ? xml.documentElement : xml;
  if (el !== null) {
	  let ch = 0;
	  let h  = { tag: el.nodeName, children : [] };
	  for (let anum in el.attributes) {
		  if (Object.hasOwn(el.attributes, anum)) {
			  let a = el.attributes[anum];
			  let attrType = fieldTypes[el.nodeName][a.name];
			  let field = a.value;
			  if (typeof attrType !== 'undefined' && (
				  (attrType.startsWith("MF") && attrType !== "MFString") ||
				  attrType.indexOf("Vec") > 0 ||
				  attrType.indexOf("Color") > 0 ||
				  attrType.indexOf("Rotation") > 0 ||
				  attrType.indexOf("Matrix") > 0)
			 	 ) {
				  field = Array.from(field.split(/[, \t\n\r]+/) || []).map(e => parseFloat(e));
			  } else if (typeof attrType !== 'undefined' && (attrType.indexOf("Int32") > 0 || attrType.indexOf("Double") > 0 || attrType.indexOf("Float") > 0)) {
			  	field = parseFloat(field);
			  }
			  h[a.name] = field;
		  }
	  }
	  for (let c in el.childNodes) {
		  let e = el.childNodes[c];
		  if (e.nodeType === 1) {
		  	h.children[ch++] = xml2json(e, xml, fieldTypes);
	  	  }
	  }
	  if (h.children.length === 0) {
		  delete h.children;
	  }
	  h["#textContent"] = Array.from(el.childNodes || []).filter(e => e.nodeType === 3).map(e => e.textContent).join('').trim();
	  if (h["#textContent"] === "") {
	  	delete h["#textContent"];
	  }
	  h["#sourceCode"] = Array.from(el.childNodes || []).filter(e => e.nodeType === 4).map(e => e.textContent).join('').trim();
	  if (h["#sourceCode"] === "") {
	  	delete h["#sourceCode"];
	  }
	  h["#comment"] = Array.from(el.childNodes || []).filter(e => e.nodeType === 8).map(e => e.textContent).join('').trim();
	  if (h["#comment"] === "") {
	  	delete h["#comment"];
	  }
	  return h;
   } else {
	   return null;
   }
}
for (let arg in process.argv) {
	let str = fs.readFileSync(process.argv[arg]).toString();
	let doc = domParser.parseFromString (str, 'application/xml');
	console.log(JSON.stringify(xml2json(doc, null, fieldTypes), null, 1));
}
