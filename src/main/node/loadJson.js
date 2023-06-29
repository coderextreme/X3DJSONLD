async function loadJson(url) {
	var response = await fetch(url);
	var json = await response.json();
	updateFromJson(json, url);
	updateXml(json, url);
}

$(document).ready(function() {
	loadJson('../data/ball.json'); // does load ball.json
});

module.exports = loadJson;
