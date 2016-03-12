var runsaxon = require('./allsaxon');
process.argv.shift();
process.argv.shift();
console.log(process.argv);
runsaxon(process.argv);
