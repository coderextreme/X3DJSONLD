import doLoadValidate from './loadValidate.mjs';

var loadValidator = new doLoadValidate();
window.loadValidator = loadValidator;

export default function loadJson(url, loadValidator) {
	$.getJSON(url, function(json) {
		window.updateFromJson(json, url, loadValidator);
		window.updateXml(json, url, loadValidator);
	})
	.fail(function(jqXHR, textStatus, errorThrown) { alert('getJSON request failed! ' + textStatus + ' ' + errorThrown); });
}

$(document).ready(function() {
	loadJson('../personal/sphereflowers.json', loadValidator); // does load sphereflowers.json
});

module.exports = loadJson;
