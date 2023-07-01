async function loadJson(url) {
	var response = await fetch(url);
	var json = await response.json();
	await updateFromJson(json, url);
	await updateXml(json, url);
}

$(document).ready(function() {
	loadJson('../data/ball.json'); // does load ball.json
});

module.exports = loadJson;
