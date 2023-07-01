"use strict";

if (typeof xmldom === 'undefined') {
	var xmldom = require('@xmldom/xmldom');
	var XMLSerializer = xmldom.XMLSerializer;
}

function DOMSerializer() {
	this.serializeToString = function (json, element) {
		var str = this.serializeDOM(json, element, true);
		return str;
	},
	this.fixXML = function(xmlstr) {
		var original = xmlstr;
		// get rid of self-closing tags
		xmlstr = xmlstr.replace(/(<)([A-Za-z0-9]+)([^>]*)\/>/g, "$1$2$3></$2>");
		// strip out namespace
		xmlstr = xmlstr.replace(/xmlns="[^"]*"/g, "");

		// strip out schema
		// xmlstr = xmlstr.replace(/xsd:noNamespaceSchemaLocation="[^"]*"/gi, "");


		// Fix CDATA sections
		xmlstr = xmlstr.replace(/&lt;!\[CDATA\[/g, "<![CDATA[");
		xmlstr = xmlstr.replace(/\]\]&gt;/g, "]]>");
		xmlstr = xmlstr.replace(/[\u0080-\uFFFF]/g, 
			function (v) { return '&#'+v.charCodeAt()+';';}
		);
		// xmlstr = xmlstr.replace(/\\"/g, '\\\\\\"');
		return xmlstr;
	},
	this.serializeDOM = function(json, element, appendDocType) {
		var version = "4.0";
		var encoding = "UTF-8";
		if (typeof json !== 'undefined') {
			version = json.X3D["@version"];
			encoding = json.X3D["encoding"];
		}
		var xml = '';
		if (appendDocType) {
			xml += '<?xml version="1.0" encoding="'+encoding+'"?>\n';
			xml += '<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D '+version+'//EN" "https://www.web3d.org/specifications/x3d-'+version+'.dtd">\n';
		}
		xml += new XMLSerializer().serializeToString(element);
		xml = this.fixXML(xml);
		return xml;
	}
}

if (typeof window !== 'undefined') {
	window.DOMSerializer = DOMSerializer;
}

if (typeof module === 'object')  {
	module.exports = DOMSerializer;
}
