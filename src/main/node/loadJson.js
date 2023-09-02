async function loadJson(url) {
	var response = await fetch(url);
	var json = await response.json();
	await window.updateFromJson(json, url);
	await window.updateXml(json, url);
}

window.loadJson = loadJson;

$(document).ready(function() {
	loadJson('../personal/sphereflowers.x3dj'); // does load sphereflowers.x3dj
});

module.exports = loadJson;
