import { convertJsonToStl } from "./convertJsonToStl.mjs";
import { fs } from 'fs';
console.log(convertJsonToStl(JSON.parse(fs.readFileSync(process.argv[2]))));
