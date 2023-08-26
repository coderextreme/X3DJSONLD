const Ajv2020 = require("ajv/dist/2020");
const addFormats = require("ajv-formats");

if (typeof window !== 'undefined') {
	window.Ajv2020 = Ajv2020;
	window.addFormats = addFormats;
}

module.exports = {
	Ajv2020: Ajv2020,
	addFormats: addFormats
};

myAjv2020 = module.exports;
