var velocity = new Array();
var scalevelocity = new Array();

function initialize() {
	update_velocity();
}

function update_velocity() {
	velocity = new Array();
        velocity[0] = Math.random() * 200000;
        velocity[1] = Math.random() * 200000;
        velocity[2] = Math.random() * 200000;

	scalevelocity = new Array();
        scalevelocity[0] = Math.random() * 0.01;
        scalevelocity[1] = Math.random() * 0.01;
        scalevelocity[2] = Math.random() * 0.01;
}

function set_translation(value) {
   translation = value;
}

function set_scale(value) {
   scale = value;
}

function set_fraction(value) {
    translation[0] = parseFloat(translation[0]) + velocity[0]
    translation[1] = parseFloat(translation[1]) + velocity[1]
    translation[2] = parseFloat(translation[2]) + velocity[2]
    scale[0] = parseFloat(scale[0]) + scalevelocity[0]
    scale[1] = parseFloat(scale[1]) + scalevelocity[1]
    scale[2] = parseFloat(scale[2]) + scalevelocity[2]
    for (var j = 0; j <= 2; j++) {
	    if (Math.abs(scale[j]) > 4 || Math.abs(translation[j]) > 25600000) {
		 // if you get to far away or too big, explode
		translation[j] = 0;
		scale[0] = 1;
		scale[1] = 1;
		scale[2] = 1;
		update_velocity();
	    }
    }
}
