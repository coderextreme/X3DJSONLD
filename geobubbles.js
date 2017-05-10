function set_fraction(value) {
       var ov = value_changed;
       do {
           value_changed = Math.round(Math.random()*2);
           var vc = value_changed;
           positions[vc] = [10, Math.random()*0.0062832, 4];
       } while (
	       positions[ov][0] === positions[vc][0] &&
	       positions[ov][1] === positions[vc][1] &&
	       positions[ov][2] === positions[vc][2]);
       position_changed = [positions[ov],positions[vc]];
}
