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
    if (crd != null) {
	crd.setAttribute("translation", crds[id].join(" "));
    }
    animate_flowers(id);
}

function animate_flowers(tr) {
	choice = Math.floor(Math.random() * 4);
	switch (choice) {
	case 0:
		addValue(tr, "a", Math.random() * 0.2 - 0.1)
		break;
	case 1:
		addValue(tr, "b", Math.random() * 0.2 - 0.1)
		break;
	case 2:
		addValue(tr, "c", Math.random() * 2 - 1)
		break;
	case 3:
		addValue(tr, "d", Math.random() * 2 - 1)
		break;
	}
	addValue(tr, "tdelta", 0.5);
	addValue(tr, "pdelta", 0.5);
	if (getValue(tr, "a") > 1) {
		setValue(tr, "a", 0.5);
	}
	if (getValue(tr, "b") > 1) {
		setValue(tr, "b", 0.5);
	}
	if (getValue(tr, "c") < 1) {
		setValue(tr, "c", 4);
	}
	if (getValue(tr, "d") < 1) {
		setValue(tr, "d", 4);
	}
	if (getValue(tr, "c") > 10) {
		setValue(tr, "c", 4);
	}
	if (getValue(tr, "d") > 10) {
		setValue(tr, "d", 4);
	}
}

function addValue(tr, name, value) {
	var oldValue = getValue(tr, name) || 0;
	if (!isNaN(oldValue) && !isNaN(value)) {
		setValue(tr, name, parseFloat(oldValue) + parseFloat(value));
	}
}

function getField(tr, clazz) {
    var key = "#"+tr+" Shape Appearance ComposedShader field[name=\""+clazz+"\"]";
    var field = document.querySelector(key);
    return field;
}

function getValue(tr, name) {
    var field = getField(tr, name);
    if (field != null) {
	    return field.getAttribute("value");
    } else {
	    return null;
    }
}

function setValue(tr, name, value) {
    var field = getField(tr, name);
    if (field != null) {
    	field.setAttribute("value", parseFloat(value));
    } else {
        return null;
    }
}

function animate() {
	setCoordinates("tr1");
	setCoordinates("tr2");
	setCoordinates("tr3");
}

initialize();
setInterval(animate, 150);
