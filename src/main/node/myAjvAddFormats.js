const addFormats = require("ajv-formats");

if (typeof window !== 'undefined') {
	window.addFormats = addFormats;
}

module.exports = addFormats;
