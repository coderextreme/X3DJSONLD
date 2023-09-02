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
	loadJson('../personal/sphereflowers.x3dj', loadValidator); // does load sphereflowers.x3dj
});

module.exports = loadJson;
