import { convertJsonToStl } from "./convertJsonToStl.mjs";
import fs from 'node:fs';
console.log(convertJsonToStl(JSON.parse(fs.readFileSync(process.argv[2]))));
