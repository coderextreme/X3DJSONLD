let convertJsonToStl = require("./convertJsonToStl");
let fs = require('fs');
console.log(convertJsonToStl(JSON.parse(fs.readFileSync(process.argv[2]))));
