import convertJsonToStl from "./convertJsonToStl.js";
if (typeof window === 'undefined') {
  var fs = await import('fs');
}
if (typeof fs === 'object') {
	console.log(convertJsonToStl(JSON.parse(fs.readFileSync(process.argv[2]))));
}
