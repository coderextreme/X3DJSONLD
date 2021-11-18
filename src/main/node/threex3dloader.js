import * as THREE from '../../../node_modules/three/build/three.module.js';
import { Stats } from '../../../node_modules/three/examples/jsm/libs/stats.module.js';
import { OrbitControls } from '../../../node_modules/three/examples/jsm/controls/OrbitControls.js';
import { VRMLLoader } from '../../../node_modules/three/examples/jsm/loaders/VRMLLoader.js';
import { GUI } from '../../../node_modules/three/examples/jsm/libs/dat.gui.module.js';
import { chevrotain } from '../../../node_modules/three/examples/jsm/libs/chevrotain.module.min.js';
/// ORIGINAL code starts here
var file = "../personal/sphere.json";

function empty(elem) {
    while (elem.lastChild) elem.removeChild(elem.lastChild);
}

var scene = null;
var projector = null;
var camera = null;
var controls = null;
var renderer = new THREE.WebGLRenderer();

function threeLoadFile(file) {
	x3dLoader(THREE);
	renderer.domElement.addEventListener('dblclick', null, false);
	scene = null;
	projector = null;
	camera = null;
	controls = null;
	$("#threejs").empty();

	renderer.setSize( 150, 75 );
	$("#threejs").append( renderer.domElement );
	camera = new THREE.PerspectiveCamera( 75, 2 /* W/H */, 0.1, 1000 );
	camera.position.z = 2;
	camera.position.x = 2;
	camera.position.y = 2;
	camera.lookAt(new THREE.Vector3(0, 0, 0));

	const httpRequest = new XMLHttpRequest();

	if (file.endsWith(".xml")) {
		httpRequest.overrideMimeType('text/xml');
	} else if (file.endsWith(".x3d")) {
		httpRequest.overrideMimeType('text/xml');
	} else if (file.endsWith(".json")) {
		httpRequest.overrideMimeType('text/json');
	} else if (file.endsWith(".wrl")) {
		httpRequest.overrideMimeType('model/vrml');
	}

	httpRequest.onreadystatechange = () => {
	    if (httpRequest.readyState === XMLHttpRequest.DONE) {
		if (httpRequest.status === 200) {
		    var text = httpRequest.responseText;

		    var loader;

		    if (file.endsWith(".wrl")) {
			scene = new THREE.Scene();
			scene.add( camera );
			loader = new THREE.VRMLLoader();
			loader.load( file, function ( object ) {
				scene.add( object );
				var light = new THREE.AmbientLight( 0xFFFFFF );
				scene.add( light );
				renderer.render( scene, camera );
			});
	            } else {
			loader = new THREE.X3DLoader();
			scene = loader.parse(text, null, fieldTypes);
			var light = new THREE.AmbientLight( 0xFFFFFF );
			scene.add( light );
			renderer.render( scene, camera );
	            }
		} else {
		    alert('There was a problem with the request.  '+httpRequest.status+" "+file);
		
		}
	    }
	};

	httpRequest.open("GET", file);
	httpRequest.send(null);
}

threeLoadFile(file);

if (typeof module === 'object')  {
	module.exports = threeLoadFile;
}
