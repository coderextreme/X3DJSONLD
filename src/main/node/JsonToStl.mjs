import * as fs from "fs";
import { convertJsonToStl } from "./convertJsonToStl.mjs";
console.log(convertJsonToStl(JSON.parse(fs.default.readFileSync(process.argv[2]))));
