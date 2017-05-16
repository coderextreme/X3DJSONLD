function initialize() {
    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);

    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);
}

function set_translation(value) {
   translation = value;
}

function set_scale(value) {
   scale = value;
}

function translation_changed() {
	return translation;
}

function set_fraction(value) {
    translation = new SFVec3f(	translation[0] + velocity[0], translation[1] + velocity[1], translation[2] + velocity[2]);
    scale = new SFVec3f(scale[0] + scalvel[0], scale[1] + scalvel[1], scale[2] + scalvel[2]);
    for (var j = 0; j < 3; j++) {
	    // if you get to far away or too big, explode
	    if ( Math.abs(translation[j]) > 256) {
		translation[j] = 0;
		initialize();
	    }
	    if (Math.abs(scale[j]) > 20) {
		scale[j] = scale[j]/2;
		translation[j] = 0;
		initialize();
	    }
    }
}
