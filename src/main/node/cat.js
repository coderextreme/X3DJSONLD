var fs = require('fs');
console.log(JSON.stringify(JSON.parse(fs.readFileSync(process.argv[2])), null, 2));
