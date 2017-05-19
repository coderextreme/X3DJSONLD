var crds = new Object();
var velocity = new Object();

function newVelocity(id) {
	velocity[id] = new Array();
        velocity[id][0] = Math.random() - 0.5;
        velocity[id][1] = Math.random() - 0.5;
        velocity[id][2] = Math.random() - 0.5;
}

function setup(id) {
	crds[id] = [0, 0, 0];
    	var crd = document.getElementById(id);
	if (crd != null) {
		crd.setAttribute("translation", crds[id].join(" "));
	}
	newVelocity(id);
}

function initialize() {
	setup("tr1");
	setup("tr2");
	setup("tr3");
}
function setCoordinates(id) {
    var crd = document.getElementById(id);
    crds[id][0] = crds[id][0] + velocity[id][0];
    crds[id][1] = crds[id][1] + velocity[id][1];
    crds[id][2] = crds[id][2] + velocity[id][2];
    for (var j = 0; j <= 2; j++) {
	    if (Math.abs(crds[id][j]) > 10) {
		setup(id);
	    } else {
		velocity[id][0] += Math.random() * 0.2 - 0.1;
		velocity[id][1] += Math.random() * 0.2 - 0.1;
		velocity[id][2] += Math.random() * 0.2 - 0.1;
	    }
    }
    crd.setAttribute("translation", crds[id].join(" "));
    if (typeof animate_flowers === 'function') {
	    animate_flowers(id);
    }
}

function animate() {
	setCoordinates("tr1");
	setCoordinates("tr2");
	setCoordinates("tr3");
}

initialize();
setInterval(animate, 150);
