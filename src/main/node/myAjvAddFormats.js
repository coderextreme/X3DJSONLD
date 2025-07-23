const addFormats = require("ajv-formats-draft2019");

if (typeof window !== 'undefined') {
	window.addFormats = addFormats;
}

module.exports = addFormats;
