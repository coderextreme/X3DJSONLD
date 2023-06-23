var convertJsonToStl = require("./convertJsonToStl.js");
var fs = require('fs');
console.log(convertJsonToStl(JSON.parse(fs.readFileSync(process.argv[2]))));
