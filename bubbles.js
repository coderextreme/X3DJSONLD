            ecmascript:
            
         
               function set_fraction(value) {
                        //var positions = [[0, 0, 10], [-10, 0, 0], [0, 0, -10], [10, 0, 0], [0, 0, 10], [0, 10, 0], [0, 0, 10], [0, -10, 0], [0, 0, 10]];
                        //var orientations = [[0, 1, 0, 0], [0, 1, 0, -1.57], [0, 1, 0, 3.14], [0, 1, 0, 1.57], [0, 1, 0, 0] [1, 0, 0, -1.57], [0, 1, 0, 0], [1, 0, 0, 1.57], [0, 1, 0, 0]];
                    //Browser.println(value);
                        var ov = value_changed;
                        Browser.println(ov);      
                        //Browser.println(positions.length);                  
			do {
				value_changed = Math.round(Math.random()*positions.length);
			} while (value_changed === ov);
                        Browser.println(value_changed);
                        var vc = value_changed;
                        
                        Browser.println(orientations[ov]);
                        Browser.println(orientations[vc]);
                        orientation_changed[0] = new SFRotation(orientations[ov][0], orientations[ov][1], orientations[ov][2], orientations[ov][3]);
                        orientation_changed[1] = new SFRotation(orientations[vc][0], orientations[vc][1], orientations[vc][2], orientations[vc][3]);
                        Browser.println(positions[ov]);
                        Browser.println(positions[vc]);
			position_changed = new MFVec3f();
                        position_changed[0] = new SFVec3f(positions[ov][0],positions[ov][1],positions[ov][2]);
                        position_changed[1] = new SFVec3f(positions[vc][0],positions[vc][1],positions[vc][2]);
                    // }
               }
