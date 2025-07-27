import { convertJsonToStl } from "./convertJsonToStl.mjs";
try {
	import fs from 'fs';
} catch (e) {
	console.log("Problems loading fs. On browser? "+e);
}
console.log(convertJsonToStl(JSON.parse(fs.default.readFileSync(process.argv[2]))));
