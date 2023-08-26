async function loadJson(url) {
	var response = await fetch(url);
	var json = await response.json();
	await window.updateFromJson(json, url);
	await window.updateXml(json, url);
}

window.loadJson = loadJson;

$(document).ready(function() {
	loadJson('../data/ball.json'); // does load ball.json
});

module.exports = loadJson;
