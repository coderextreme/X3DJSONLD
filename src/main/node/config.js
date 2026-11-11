var config = {};

function examples() {
	return "/home/yottzumm/www.web3d.org/x3d/content/examples/";
}

config.examples = examples;

function x3dcode() {
	return "/home/yottzumm/";
}
config.x3dcode = x3dcode;

if (typeof module === 'undefined') {
	var module = {};
}
export default config;
