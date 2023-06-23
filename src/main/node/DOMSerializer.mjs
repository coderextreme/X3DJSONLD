"use strict";

if (typeof require === 'function') {
	var xmldom = require('@xmldom/xmldom');
	var XMLSerializer = new xmldom.XMLSerializer();
}

export default function DOMSerializer() {};
DOMSerializer.prototype = {
	serializeToString : function (json, element) {
		var str = this.serializeDOM(json, element, true);
		return str;
	},
	fixXML : function(xmlstr) {
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
	serializeDOM : function(json, element, appendDocType) {
		var version = "4.0";
		var encoding = "UTF-8";
		/*
		if (typeof json !== 'undefined') {
			console.log(json.length);
			for (let attr in json.attributes) {
				console.log(json.attributes[attr]);
			}
			version = json["X3D"]["version"];
			encoding = json["X3D"]["encoding"];
		}
		*/
		var xml = '';
		if (appendDocType) {
			xml += '<?xml version="1.0" encoding="'+encoding+'"?>\n';
			xml += '<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D '+version+'//EN" "https://www.web3d.org/specifications/x3d-'+version+'.dtd">\n';
		}
		xml += XMLSerializer.serializeToString(element);
		xml = this.fixXML(xml);
		return xml;
	}
}
