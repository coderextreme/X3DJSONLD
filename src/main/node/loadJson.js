// var loadValidate = require('./loadValidate.js');

var loadValidator = new loadValidate();
window.loadValidator = loadValidator;

function loadJson(url) {
	$.getJSON(url, function(json) {
		updateFromJson(json, url);
		updateXml(json, url);
	})
	.fail(function(jqXHR, textStatus, errorThrown) { alert('getJSON request failed! ' + textStatus + ' ' + errorThrown); });
}

$(document).ready(function() {
	loadJson('../data/ball.json'); // does load ball.json
});

module.exports = loadJson;
