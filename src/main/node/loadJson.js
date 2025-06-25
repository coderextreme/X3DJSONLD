import { updateFromJson, updateXml } from "./loaderJQuery.js";

export default async function loadJson(url) {
	var response = await fetch(url);
	var json = await response.json();
	await updateFromJson(json, url);
	await updateXml(json, url);
}

$(document).ready(function() {
	loadJson('../personal/sphereflowers.json'); // does load sphereflowers.json
});
