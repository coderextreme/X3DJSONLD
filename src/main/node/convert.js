var runsaxon = require('./allsaxon');
process.argv.shift();
process.argv.shift();
console.error("CONVERT ARGS", process.argv);
runsaxon(process.argv);
