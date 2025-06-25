const Ajv2020 = require("ajv/dist/2020");

if (typeof window !== 'undefined') {
	window.Ajv2020 = Ajv2020;
}

module.exports = Ajv2020;
var myAjv2020 = module.exports;
