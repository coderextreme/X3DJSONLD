import { updateFromJson, updateXml } from "./loaderJQuery.mjs";

export default function loadJson(url) {
	$.getJSON(url, function(json) {
		updateFromJson(json, url);
		updateXml(json, url);
	})
	.fail(function(jqXHR, textStatus, errorThrown) { alert('getJSON request failed! ' + textStatus + ' ' + errorThrown); });
}

$(document).ready(function() {
	loadJson('../data/JoeKick.json'); // does load ball.json
});
