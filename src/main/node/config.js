var config = {};

function examples() {
	return "C:/Users/jcarl/www.web3d.org/x3d/content/examples/";
}

config.examples = examples;

function x3dcode() {
	return "C:/Users/jcarl/";
}
config.x3dcode = x3dcode;

if (typeof module === 'undefined') {
	var module = {};
}
export default config;
