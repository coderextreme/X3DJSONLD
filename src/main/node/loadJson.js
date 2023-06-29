// var loadValidate = require('./loadValidate.js');

var loadValidator = new loadValidate();
window.loadValidator = loadValidator;

function loadJson(url, loadValidator) {
	$.getJSON(url, function(json) {
		updateFromJson(json, url, loadValidator);
		updateXml(json, url, loadValidator);
	})
	.fail(function(jqXHR, textStatus, errorThrown) { alert('getJSON request failed! ' + textStatus + ' ' + errorThrown); });
}

$(document).ready(function() {
	loadJson('../data/ball.json', loadValidator); // does load ball.json
});

module.exports = loadJson;
