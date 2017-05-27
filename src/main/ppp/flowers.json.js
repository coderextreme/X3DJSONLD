var x3dom = require('../node/fields.js');
var MFBool = x3dom.fields.MFBoolean;
var MFColor = x3dom.fields.MFColor;
var MFColorRGBA = x3dom.fields.MFColorRGBA;
var MFDouble = function() { return Array.prototype.slice.call(arguments, 0); };
var MFFloat = x3dom.fields.MFFloat;
var MFImage = function() { return Array.prototype.slice.call(arguments, 0); };
var MFInt32 = x3dom.fields.MFInt32;
var MFMatrix3d = function() { return Array.prototype.slice.call(arguments, 0); };
var MFMatrix3f = function() { return Array.prototype.slice.call(arguments, 0); };
var MFMatrix4d = function() { return Array.prototype.slice.call(arguments, 0); };
var MFMatrix4f = function() { return Array.prototype.slice.call(arguments, 0); };
var MFNode = x3dom.fields.MFNode;
var MFRotation = x3dom.fields.MFRotation;
var MFString = x3dom.fields.MFString;
var MFTime = function() { return Array.prototype.slice.call(arguments, 0); };
var MFVec2d = function() { return Array.prototype.slice.call(arguments, 0); };
var MFVec2f = x3dom.fields.MFVec2f;
var MFVec3d = function() { return Array.prototype.slice.call(arguments, 0); };
var MFVec3f = x3dom.fields.MFVec3f;
var MFVec4d = function() { return Array.prototype.slice.call(arguments, 0); };
var MFVec4f = function() { return Array.prototype.slice.call(arguments, 0); };
SFBool = Boolean;
var SFColor = x3dom.fields.SFColor;
var SFColorRGBA = x3dom.fields.SFColorRGBA;
SFDouble = Number;
SFFloat = Number;
SFInt32 = Number;
var SFImage = x3dom.fields.SFImage;
var SFMatrix3d = function() { return Array.prototype.slice.call(arguments, 0); };
var SFMatrix3f = function() { return Array.prototype.slice.call(arguments, 0); };
var SFMatrix4d = function() { return Array.prototype.slice.call(arguments, 0); };
var SFMatrix4f = x3dom.fields.SFMatrix4f;
var SFNode = x3dom.fields.SFNode;
var SFRotation = x3dom.fields.Quaternion;
SFString = String;
SFTime = Number;
var SFVec2d = function() { return Array.prototype.slice.call(arguments, 0); };
var SFVec2f = x3dom.fields.SFVec2f;
var SFVec3d = function() { return Array.prototype.slice.call(arguments, 0); };
var SFVec3f = x3dom.fields.SFVec3f;
var SFVec4d = function() { return Array.prototype.slice.call(arguments, 0); };
var SFvec4f = x3dom.fields.SFvec4f;
var X3DJSON = {};
if (typeof document === 'undefined') {
	document = { querySelector : function() {;
		return {
			setAttribute : function(field, value) {
				this[field] = value;
				console.log('set '+ field+ '='+ value);
			},
			getAttribute : function(field) {
				var value = this[field];
				console.log('get '+ field+ '='+ value);
			}
		};
	}};
}
X3DJSON.nodeUtil = function(node, field, value) {
		var element = document.querySelector("[DEF='"+node+"'], [name='"+node+"']");
		if (element === null) {
			console.error('unDEFed node',node);
		} else if (arguments.length > 2) {
			element.setAttribute(field, value);
			console.log('set '+ field+ '='+ value);
			return element;
		} else if (arguments.length > 1) {
			var value = element.getAttribute(field)
			console.log('get', field,'=',value);
			return value;
		} else {
			return element;
		}
};
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLflower_INSTANCE38000_Bounce'] = function() {
	this.set_translation = function (value) {
		X3DJSON.nodeUtil('DECLflower_INSTANCE38000_Bounce', 'translation', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.translation_changed = function () {
		return X3DJSON.nodeUtil('DECLflower_INSTANCE38000_Bounce', 'translation');
	};
	this.set_translation(new SFVec3f(0,0,0));
	this.set_velocity = function (value) {
		X3DJSON.nodeUtil('DECLflower_INSTANCE38000_Bounce', 'velocity', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.velocity_changed = function () {
		return X3DJSON.nodeUtil('DECLflower_INSTANCE38000_Bounce', 'velocity');
	};
	this.set_velocity(new SFVec3f(0,0,0));
	this.set_fraction = function (value) {
		X3DJSON.nodeUtil('DECLflower_INSTANCE38000_Bounce', 'fraction', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.fraction_changed = function () {
		return X3DJSON.nodeUtil('DECLflower_INSTANCE38000_Bounce', 'fraction');
	};
	this.set_fraction(undefined);
	this.set_coordinates = function (value) {
		X3DJSON.nodeUtil('DECLflower_INSTANCE38000_Bounce', 'coordinates', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.coordinates_changed = function () {
		return X3DJSON.nodeUtil('DECLflower_INSTANCE38000_Bounce', 'coordinates');
	};
	this.set_coordinates(new MFVec3f());
	this.set_coordIndexes = function (value) {
		X3DJSON.nodeUtil('DECLflower_INSTANCE38000_Bounce', 'coordIndexes', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.coordIndexes_changed = function () {
		return X3DJSON.nodeUtil('DECLflower_INSTANCE38000_Bounce', 'coordIndexes');
	};
	this.set_coordIndexes(new MFInt32());
	this.set_a = function (value) {
		X3DJSON.nodeUtil('DECLflower_INSTANCE38000_Bounce', 'a', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.a_changed = function () {
		return X3DJSON.nodeUtil('DECLflower_INSTANCE38000_Bounce', 'a');
	};
	this.set_a(new SFFloat(0.5));
	this.set_b = function (value) {
		X3DJSON.nodeUtil('DECLflower_INSTANCE38000_Bounce', 'b', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.b_changed = function () {
		return X3DJSON.nodeUtil('DECLflower_INSTANCE38000_Bounce', 'b');
	};
	this.set_b(new SFFloat(0.5));
	this.set_c = function (value) {
		X3DJSON.nodeUtil('DECLflower_INSTANCE38000_Bounce', 'c', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.c_changed = function () {
		return X3DJSON.nodeUtil('DECLflower_INSTANCE38000_Bounce', 'c');
	};
	this.set_c(new SFFloat(3));
	this.set_d = function (value) {
		X3DJSON.nodeUtil('DECLflower_INSTANCE38000_Bounce', 'd', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.d_changed = function () {
		return X3DJSON.nodeUtil('DECLflower_INSTANCE38000_Bounce', 'd');
	};
	this.set_d(new SFFloat(3));
	this.set_tdelta = function (value) {
		X3DJSON.nodeUtil('DECLflower_INSTANCE38000_Bounce', 'tdelta', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.tdelta_changed = function () {
		return X3DJSON.nodeUtil('DECLflower_INSTANCE38000_Bounce', 'tdelta');
	};
	this.set_tdelta(new SFFloat(0.5));
	this.set_pdelta = function (value) {
		X3DJSON.nodeUtil('DECLflower_INSTANCE38000_Bounce', 'pdelta', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.pdelta_changed = function () {
		return X3DJSON.nodeUtil('DECLflower_INSTANCE38000_Bounce', 'pdelta');
	};
	this.set_pdelta(new SFFloat(0.5));

ecmascript:
			
	this.newBubble = function () {
			    this.set_translation ( new SFVec3f(0, 0, 0));
			    this.set_velocity ( new SFVec3f(
			    	Math.random() - 0.5,
				Math.random() - 0.5,
				Math.random() - 0.5));
			}
			;

	this.set_fraction = function () {
			    this.set_translation ( new SFVec3f(
			    	this.translation_changed().x + this.velocity_changed().x,
				this.translation_changed().y + this.velocity_changed().y,
				this.translation_changed().z + this.velocity_changed().z));
			    if (Math.abs(this.translation_changed().x) > 10) {
					this.newBubble();
			    } else if (Math.abs(this.translation_changed().y) > 10) {
					this.newBubble();
			    } else if (Math.abs(this.translation_changed().z) > 10) {
					this.newBubble();
			    } else {
					this.set_velocity ( new SFVec3f(
						this.velocity_changed().x + Math.random() * 0.2 - 0.1,
						this.velocity_changed().y + Math.random() * 0.2 - 0.1,
						this.velocity_changed().z + Math.random() * 0.2 - 0.1
					));
			    }
			    this.animate_flowers();
			}

			;

	this.initialize = function () {
			     this.newBubble();
			     resolution = 100;
			     this.updateCoordinates(resolution);
			     var cis = [];
			     for ( i = 0; i < resolution-1; i++) {
				for ( j = 0; j < resolution-1; j++) {
				     cis.push(i*resolution+j);
				     cis.push(i*resolution+j+1);
				     cis.push((i+1)*resolution+j+1);
				     cis.push((i+1)*resolution+j);
				     cis.push(-1);
				}
			    }
			     this.set_coordIndexes ( new MFInt32(cis));
			}

			;

	this.updateCoordinates = function (resolution) {
			     theta = 0.0;
			     phi = 0.0;
			     delta = (2 * 3.141592653) / (resolution-1);
			     var crds = [];
			     for ( i = 0; i < resolution; i++) {
				for ( j = 0; j < resolution; j++) {
					rho = this.a_changed() + this.b_changed() * Math.cos(this.c_changed() * theta) * Math.cos(this.d_changed() * phi);
					crds.push(new SFVec3f(
						rho * Math.cos(phi) * Math.cos(theta),
						rho * Math.cos(phi) * Math.sin(theta),
						rho * Math.sin(phi)
					));
					theta += delta;
				}
				phi += delta;
				this.set_coordinates ( new MFVec3f(crds));
			     }
			}

			;

	this.animate_flowers = function (fraction, eventTime) {
				choice = Math.floor(Math.random() * 4);
				switch (choice) {
				case 0:
					this.set_a(this.a_changed() +  Math.random() * 0.2 - 0.1);
					break;
				case 1:
					this.set_b(this.b_changed() +  Math.random() * 0.2 - 0.1);
					break;
				case 2:
					this.set_c(this.c_changed() +  Math.random() * 2 - 1);
					break;
				case 3:
					this.set_d(this.d_changed() +  Math.random() * 2 - 1);
					break;
				}
				if (this.a_changed() > 1) {
					this.set_a (  0.5);
				}
				if (this.b_changed() > 1) {
					this.set_b (  0.5);
				}
				if (this.c_changed() < 1) {
					this.set_c (  4);
				}
				if (this.d_changed() < 1) {
					this.set_d (  4);
				}
				if (this.c_changed() > 10) {
					this.set_c ( 4);
				}
				if (this.d_changed() > 10) {
					this.set_d ( 4);
				}
				resolution = 100;
				this.updateCoordinates(resolution);
			};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLflower_INSTANCE38000_Bounce'] = new X3DJSON['Script']['DECLflower_INSTANCE38000_Bounce']();
if (typeof X3DJSON['Obj']['DECLflower_INSTANCE38000_Bounce'].initialize === "function") X3DJSON['Obj']['DECLflower_INSTANCE38000_Bounce'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLflower_INSTANCE39000_Bounce'] = function() {
	this.set_translation = function (value) {
		X3DJSON.nodeUtil('DECLflower_INSTANCE39000_Bounce', 'translation', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.translation_changed = function () {
		return X3DJSON.nodeUtil('DECLflower_INSTANCE39000_Bounce', 'translation');
	};
	this.set_translation(new SFVec3f(0,0,0));
	this.set_velocity = function (value) {
		X3DJSON.nodeUtil('DECLflower_INSTANCE39000_Bounce', 'velocity', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.velocity_changed = function () {
		return X3DJSON.nodeUtil('DECLflower_INSTANCE39000_Bounce', 'velocity');
	};
	this.set_velocity(new SFVec3f(0,0,0));
	this.set_fraction = function (value) {
		X3DJSON.nodeUtil('DECLflower_INSTANCE39000_Bounce', 'fraction', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.fraction_changed = function () {
		return X3DJSON.nodeUtil('DECLflower_INSTANCE39000_Bounce', 'fraction');
	};
	this.set_fraction(undefined);
	this.set_coordinates = function (value) {
		X3DJSON.nodeUtil('DECLflower_INSTANCE39000_Bounce', 'coordinates', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.coordinates_changed = function () {
		return X3DJSON.nodeUtil('DECLflower_INSTANCE39000_Bounce', 'coordinates');
	};
	this.set_coordinates(new MFVec3f());
	this.set_coordIndexes = function (value) {
		X3DJSON.nodeUtil('DECLflower_INSTANCE39000_Bounce', 'coordIndexes', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.coordIndexes_changed = function () {
		return X3DJSON.nodeUtil('DECLflower_INSTANCE39000_Bounce', 'coordIndexes');
	};
	this.set_coordIndexes(new MFInt32());
	this.set_a = function (value) {
		X3DJSON.nodeUtil('DECLflower_INSTANCE39000_Bounce', 'a', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.a_changed = function () {
		return X3DJSON.nodeUtil('DECLflower_INSTANCE39000_Bounce', 'a');
	};
	this.set_a(new SFFloat(0.5));
	this.set_b = function (value) {
		X3DJSON.nodeUtil('DECLflower_INSTANCE39000_Bounce', 'b', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.b_changed = function () {
		return X3DJSON.nodeUtil('DECLflower_INSTANCE39000_Bounce', 'b');
	};
	this.set_b(new SFFloat(0.5));
	this.set_c = function (value) {
		X3DJSON.nodeUtil('DECLflower_INSTANCE39000_Bounce', 'c', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.c_changed = function () {
		return X3DJSON.nodeUtil('DECLflower_INSTANCE39000_Bounce', 'c');
	};
	this.set_c(new SFFloat(3));
	this.set_d = function (value) {
		X3DJSON.nodeUtil('DECLflower_INSTANCE39000_Bounce', 'd', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.d_changed = function () {
		return X3DJSON.nodeUtil('DECLflower_INSTANCE39000_Bounce', 'd');
	};
	this.set_d(new SFFloat(3));
	this.set_tdelta = function (value) {
		X3DJSON.nodeUtil('DECLflower_INSTANCE39000_Bounce', 'tdelta', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.tdelta_changed = function () {
		return X3DJSON.nodeUtil('DECLflower_INSTANCE39000_Bounce', 'tdelta');
	};
	this.set_tdelta(new SFFloat(0.5));
	this.set_pdelta = function (value) {
		X3DJSON.nodeUtil('DECLflower_INSTANCE39000_Bounce', 'pdelta', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.pdelta_changed = function () {
		return X3DJSON.nodeUtil('DECLflower_INSTANCE39000_Bounce', 'pdelta');
	};
	this.set_pdelta(new SFFloat(0.5));

ecmascript:
			
	this.newBubble = function () {
			    this.set_translation ( new SFVec3f(0, 0, 0));
			    this.set_velocity ( new SFVec3f(
			    	Math.random() - 0.5,
				Math.random() - 0.5,
				Math.random() - 0.5));
			}
			;

	this.set_fraction = function () {
			    this.set_translation ( new SFVec3f(
			    	this.translation_changed().x + this.velocity_changed().x,
				this.translation_changed().y + this.velocity_changed().y,
				this.translation_changed().z + this.velocity_changed().z));
			    if (Math.abs(this.translation_changed().x) > 10) {
					this.newBubble();
			    } else if (Math.abs(this.translation_changed().y) > 10) {
					this.newBubble();
			    } else if (Math.abs(this.translation_changed().z) > 10) {
					this.newBubble();
			    } else {
					this.set_velocity ( new SFVec3f(
						this.velocity_changed().x + Math.random() * 0.2 - 0.1,
						this.velocity_changed().y + Math.random() * 0.2 - 0.1,
						this.velocity_changed().z + Math.random() * 0.2 - 0.1
					));
			    }
			    this.animate_flowers();
			}

			;

	this.initialize = function () {
			     this.newBubble();
			     resolution = 100;
			     this.updateCoordinates(resolution);
			     var cis = [];
			     for ( i = 0; i < resolution-1; i++) {
				for ( j = 0; j < resolution-1; j++) {
				     cis.push(i*resolution+j);
				     cis.push(i*resolution+j+1);
				     cis.push((i+1)*resolution+j+1);
				     cis.push((i+1)*resolution+j);
				     cis.push(-1);
				}
			    }
			     this.set_coordIndexes ( new MFInt32(cis));
			}

			;

	this.updateCoordinates = function (resolution) {
			     theta = 0.0;
			     phi = 0.0;
			     delta = (2 * 3.141592653) / (resolution-1);
			     var crds = [];
			     for ( i = 0; i < resolution; i++) {
				for ( j = 0; j < resolution; j++) {
					rho = this.a_changed() + this.b_changed() * Math.cos(this.c_changed() * theta) * Math.cos(this.d_changed() * phi);
					crds.push(new SFVec3f(
						rho * Math.cos(phi) * Math.cos(theta),
						rho * Math.cos(phi) * Math.sin(theta),
						rho * Math.sin(phi)
					));
					theta += delta;
				}
				phi += delta;
				this.set_coordinates ( new MFVec3f(crds));
			     }
			}

			;

	this.animate_flowers = function (fraction, eventTime) {
				choice = Math.floor(Math.random() * 4);
				switch (choice) {
				case 0:
					this.set_a(this.a_changed() +  Math.random() * 0.2 - 0.1);
					break;
				case 1:
					this.set_b(this.b_changed() +  Math.random() * 0.2 - 0.1);
					break;
				case 2:
					this.set_c(this.c_changed() +  Math.random() * 2 - 1);
					break;
				case 3:
					this.set_d(this.d_changed() +  Math.random() * 2 - 1);
					break;
				}
				if (this.a_changed() > 1) {
					this.set_a (  0.5);
				}
				if (this.b_changed() > 1) {
					this.set_b (  0.5);
				}
				if (this.c_changed() < 1) {
					this.set_c (  4);
				}
				if (this.d_changed() < 1) {
					this.set_d (  4);
				}
				if (this.c_changed() > 10) {
					this.set_c ( 4);
				}
				if (this.d_changed() > 10) {
					this.set_d ( 4);
				}
				resolution = 100;
				this.updateCoordinates(resolution);
			};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLflower_INSTANCE39000_Bounce'] = new X3DJSON['Script']['DECLflower_INSTANCE39000_Bounce']();
if (typeof X3DJSON['Obj']['DECLflower_INSTANCE39000_Bounce'].initialize === "function") X3DJSON['Obj']['DECLflower_INSTANCE39000_Bounce'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLflower_INSTANCE40000_Bounce'] = function() {
	this.set_translation = function (value) {
		X3DJSON.nodeUtil('DECLflower_INSTANCE40000_Bounce', 'translation', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.translation_changed = function () {
		return X3DJSON.nodeUtil('DECLflower_INSTANCE40000_Bounce', 'translation');
	};
	this.set_translation(new SFVec3f(0,0,0));
	this.set_velocity = function (value) {
		X3DJSON.nodeUtil('DECLflower_INSTANCE40000_Bounce', 'velocity', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.velocity_changed = function () {
		return X3DJSON.nodeUtil('DECLflower_INSTANCE40000_Bounce', 'velocity');
	};
	this.set_velocity(new SFVec3f(0,0,0));
	this.set_fraction = function (value) {
		X3DJSON.nodeUtil('DECLflower_INSTANCE40000_Bounce', 'fraction', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.fraction_changed = function () {
		return X3DJSON.nodeUtil('DECLflower_INSTANCE40000_Bounce', 'fraction');
	};
	this.set_fraction(undefined);
	this.set_coordinates = function (value) {
		X3DJSON.nodeUtil('DECLflower_INSTANCE40000_Bounce', 'coordinates', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.coordinates_changed = function () {
		return X3DJSON.nodeUtil('DECLflower_INSTANCE40000_Bounce', 'coordinates');
	};
	this.set_coordinates(new MFVec3f());
	this.set_coordIndexes = function (value) {
		X3DJSON.nodeUtil('DECLflower_INSTANCE40000_Bounce', 'coordIndexes', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.coordIndexes_changed = function () {
		return X3DJSON.nodeUtil('DECLflower_INSTANCE40000_Bounce', 'coordIndexes');
	};
	this.set_coordIndexes(new MFInt32());
	this.set_a = function (value) {
		X3DJSON.nodeUtil('DECLflower_INSTANCE40000_Bounce', 'a', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.a_changed = function () {
		return X3DJSON.nodeUtil('DECLflower_INSTANCE40000_Bounce', 'a');
	};
	this.set_a(new SFFloat(0.5));
	this.set_b = function (value) {
		X3DJSON.nodeUtil('DECLflower_INSTANCE40000_Bounce', 'b', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.b_changed = function () {
		return X3DJSON.nodeUtil('DECLflower_INSTANCE40000_Bounce', 'b');
	};
	this.set_b(new SFFloat(0.5));
	this.set_c = function (value) {
		X3DJSON.nodeUtil('DECLflower_INSTANCE40000_Bounce', 'c', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.c_changed = function () {
		return X3DJSON.nodeUtil('DECLflower_INSTANCE40000_Bounce', 'c');
	};
	this.set_c(new SFFloat(3));
	this.set_d = function (value) {
		X3DJSON.nodeUtil('DECLflower_INSTANCE40000_Bounce', 'd', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.d_changed = function () {
		return X3DJSON.nodeUtil('DECLflower_INSTANCE40000_Bounce', 'd');
	};
	this.set_d(new SFFloat(3));
	this.set_tdelta = function (value) {
		X3DJSON.nodeUtil('DECLflower_INSTANCE40000_Bounce', 'tdelta', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.tdelta_changed = function () {
		return X3DJSON.nodeUtil('DECLflower_INSTANCE40000_Bounce', 'tdelta');
	};
	this.set_tdelta(new SFFloat(0.5));
	this.set_pdelta = function (value) {
		X3DJSON.nodeUtil('DECLflower_INSTANCE40000_Bounce', 'pdelta', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.pdelta_changed = function () {
		return X3DJSON.nodeUtil('DECLflower_INSTANCE40000_Bounce', 'pdelta');
	};
	this.set_pdelta(new SFFloat(0.5));

ecmascript:
			
	this.newBubble = function () {
			    this.set_translation ( new SFVec3f(0, 0, 0));
			    this.set_velocity ( new SFVec3f(
			    	Math.random() - 0.5,
				Math.random() - 0.5,
				Math.random() - 0.5));
			}
			;

	this.set_fraction = function () {
			    this.set_translation ( new SFVec3f(
			    	this.translation_changed().x + this.velocity_changed().x,
				this.translation_changed().y + this.velocity_changed().y,
				this.translation_changed().z + this.velocity_changed().z));
			    if (Math.abs(this.translation_changed().x) > 10) {
					this.newBubble();
			    } else if (Math.abs(this.translation_changed().y) > 10) {
					this.newBubble();
			    } else if (Math.abs(this.translation_changed().z) > 10) {
					this.newBubble();
			    } else {
					this.set_velocity ( new SFVec3f(
						this.velocity_changed().x + Math.random() * 0.2 - 0.1,
						this.velocity_changed().y + Math.random() * 0.2 - 0.1,
						this.velocity_changed().z + Math.random() * 0.2 - 0.1
					));
			    }
			    this.animate_flowers();
			}

			;

	this.initialize = function () {
			     this.newBubble();
			     resolution = 100;
			     this.updateCoordinates(resolution);
			     var cis = [];
			     for ( i = 0; i < resolution-1; i++) {
				for ( j = 0; j < resolution-1; j++) {
				     cis.push(i*resolution+j);
				     cis.push(i*resolution+j+1);
				     cis.push((i+1)*resolution+j+1);
				     cis.push((i+1)*resolution+j);
				     cis.push(-1);
				}
			    }
			     this.set_coordIndexes ( new MFInt32(cis));
			}

			;

	this.updateCoordinates = function (resolution) {
			     theta = 0.0;
			     phi = 0.0;
			     delta = (2 * 3.141592653) / (resolution-1);
			     var crds = [];
			     for ( i = 0; i < resolution; i++) {
				for ( j = 0; j < resolution; j++) {
					rho = this.a_changed() + this.b_changed() * Math.cos(this.c_changed() * theta) * Math.cos(this.d_changed() * phi);
					crds.push(new SFVec3f(
						rho * Math.cos(phi) * Math.cos(theta),
						rho * Math.cos(phi) * Math.sin(theta),
						rho * Math.sin(phi)
					));
					theta += delta;
				}
				phi += delta;
				this.set_coordinates ( new MFVec3f(crds));
			     }
			}

			;

	this.animate_flowers = function (fraction, eventTime) {
				choice = Math.floor(Math.random() * 4);
				switch (choice) {
				case 0:
					this.set_a(this.a_changed() +  Math.random() * 0.2 - 0.1);
					break;
				case 1:
					this.set_b(this.b_changed() +  Math.random() * 0.2 - 0.1);
					break;
				case 2:
					this.set_c(this.c_changed() +  Math.random() * 2 - 1);
					break;
				case 3:
					this.set_d(this.d_changed() +  Math.random() * 2 - 1);
					break;
				}
				if (this.a_changed() > 1) {
					this.set_a (  0.5);
				}
				if (this.b_changed() > 1) {
					this.set_b (  0.5);
				}
				if (this.c_changed() < 1) {
					this.set_c (  4);
				}
				if (this.d_changed() < 1) {
					this.set_d (  4);
				}
				if (this.c_changed() > 10) {
					this.set_c ( 4);
				}
				if (this.d_changed() > 10) {
					this.set_d ( 4);
				}
				resolution = 100;
				this.updateCoordinates(resolution);
			};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLflower_INSTANCE40000_Bounce'] = new X3DJSON['Script']['DECLflower_INSTANCE40000_Bounce']();
if (typeof X3DJSON['Obj']['DECLflower_INSTANCE40000_Bounce'].initialize === "function") X3DJSON['Obj']['DECLflower_INSTANCE40000_Bounce'].initialize();
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE38000_TourTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE38000_TourTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE38000_TourTime']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE38000_TourTime']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE38000_TourTime']['cycleTime']['DECLflower_INSTANCE38000_Bounce'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE38000_TourTime']['cycleTime']['DECLflower_INSTANCE38000_Bounce'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE38000_TourTime']['cycleTime']['DECLflower_INSTANCE38000_Bounce']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE38000_TourTime']['cycleTime']['DECLflower_INSTANCE38000_Bounce']['set_fraction'] = {};
}

X3DJSON['ROUTE']['DECLflower_INSTANCE38000_TourTime']['cycleTime']['DECLflower_INSTANCE38000_Bounce']['set_fraction']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'cycleTime');
			X3DJSON.nodeUtil('DECLflower_INSTANCE38000_Bounce','set_fraction',X3DJSON.nodeUtil('DECLflower_INSTANCE38000_TourTime','cycleTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['cycleTime'] };
X3DJSON['ROUTE']['DECLflower_INSTANCE38000_TourTime']['cycleTime']['DECLflower_INSTANCE38000_Bounce']['set_fraction']['FROM'].observe(X3DJSON.nodeUtil('DECLflower_INSTANCE38000_TourTime'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE38000_TourTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE38000_TourTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE38000_TourTime']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE38000_TourTime']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE38000_TourTime']['cycleTime']['DECLflower_INSTANCE38000_Bounce'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE38000_TourTime']['cycleTime']['DECLflower_INSTANCE38000_Bounce'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE38000_TourTime']['cycleTime']['DECLflower_INSTANCE38000_Bounce']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE38000_TourTime']['cycleTime']['DECLflower_INSTANCE38000_Bounce']['set_fraction'] = {};
}

X3DJSON['ROUTE']['DECLflower_INSTANCE38000_TourTime']['cycleTime']['DECLflower_INSTANCE38000_Bounce']['set_fraction']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_fraction');
			if (typeof X3DJSON['Obj']['DECLflower_INSTANCE38000_Bounce'].set_fraction === "function") X3DJSON['Obj']['DECLflower_INSTANCE38000_Bounce'].set_fraction(X3DJSON.nodeUtil('DECLflower_INSTANCE38000_Bounce','set_fraction'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_fraction'] };
X3DJSON['ROUTE']['DECLflower_INSTANCE38000_TourTime']['cycleTime']['DECLflower_INSTANCE38000_Bounce']['set_fraction']['TO'].observe(X3DJSON.nodeUtil('DECLflower_INSTANCE38000_Bounce'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE38000_Bounce'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE38000_Bounce'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE38000_Bounce']['translation_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE38000_Bounce']['translation_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE38000_Bounce']['translation_changed']['DECLflower_INSTANCE38000_transform'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE38000_Bounce']['translation_changed']['DECLflower_INSTANCE38000_transform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE38000_Bounce']['translation_changed']['DECLflower_INSTANCE38000_transform']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE38000_Bounce']['translation_changed']['DECLflower_INSTANCE38000_transform']['set_translation'] = {};
}

X3DJSON['ROUTE']['DECLflower_INSTANCE38000_Bounce']['translation_changed']['DECLflower_INSTANCE38000_transform']['set_translation']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'translation_changed');
			X3DJSON.nodeUtil('DECLflower_INSTANCE38000_transform','set_translation',X3DJSON.nodeUtil('DECLflower_INSTANCE38000_Bounce','translation_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['translation_changed'] };
X3DJSON['ROUTE']['DECLflower_INSTANCE38000_Bounce']['translation_changed']['DECLflower_INSTANCE38000_transform']['set_translation']['FROM'].observe(X3DJSON.nodeUtil('DECLflower_INSTANCE38000_Bounce'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE38000_Bounce'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE38000_Bounce'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE38000_Bounce']['translation_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE38000_Bounce']['translation_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE38000_Bounce']['translation_changed']['DECLflower_INSTANCE38000_transform'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE38000_Bounce']['translation_changed']['DECLflower_INSTANCE38000_transform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE38000_Bounce']['translation_changed']['DECLflower_INSTANCE38000_transform']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE38000_Bounce']['translation_changed']['DECLflower_INSTANCE38000_transform']['set_translation'] = {};
}

X3DJSON['ROUTE']['DECLflower_INSTANCE38000_Bounce']['translation_changed']['DECLflower_INSTANCE38000_transform']['set_translation']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_translation');
			if (typeof X3DJSON['Obj']['DECLflower_INSTANCE38000_transform'].set_translation === "function") X3DJSON['Obj']['DECLflower_INSTANCE38000_transform'].set_translation(X3DJSON.nodeUtil('DECLflower_INSTANCE38000_transform','set_translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_translation'] };
X3DJSON['ROUTE']['DECLflower_INSTANCE38000_Bounce']['translation_changed']['DECLflower_INSTANCE38000_transform']['set_translation']['TO'].observe(X3DJSON.nodeUtil('DECLflower_INSTANCE38000_transform'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE39000_TourTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE39000_TourTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE39000_TourTime']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE39000_TourTime']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE39000_TourTime']['cycleTime']['DECLflower_INSTANCE39000_Bounce'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE39000_TourTime']['cycleTime']['DECLflower_INSTANCE39000_Bounce'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE39000_TourTime']['cycleTime']['DECLflower_INSTANCE39000_Bounce']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE39000_TourTime']['cycleTime']['DECLflower_INSTANCE39000_Bounce']['set_fraction'] = {};
}

X3DJSON['ROUTE']['DECLflower_INSTANCE39000_TourTime']['cycleTime']['DECLflower_INSTANCE39000_Bounce']['set_fraction']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'cycleTime');
			X3DJSON.nodeUtil('DECLflower_INSTANCE39000_Bounce','set_fraction',X3DJSON.nodeUtil('DECLflower_INSTANCE39000_TourTime','cycleTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['cycleTime'] };
X3DJSON['ROUTE']['DECLflower_INSTANCE39000_TourTime']['cycleTime']['DECLflower_INSTANCE39000_Bounce']['set_fraction']['FROM'].observe(X3DJSON.nodeUtil('DECLflower_INSTANCE39000_TourTime'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE39000_TourTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE39000_TourTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE39000_TourTime']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE39000_TourTime']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE39000_TourTime']['cycleTime']['DECLflower_INSTANCE39000_Bounce'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE39000_TourTime']['cycleTime']['DECLflower_INSTANCE39000_Bounce'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE39000_TourTime']['cycleTime']['DECLflower_INSTANCE39000_Bounce']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE39000_TourTime']['cycleTime']['DECLflower_INSTANCE39000_Bounce']['set_fraction'] = {};
}

X3DJSON['ROUTE']['DECLflower_INSTANCE39000_TourTime']['cycleTime']['DECLflower_INSTANCE39000_Bounce']['set_fraction']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_fraction');
			if (typeof X3DJSON['Obj']['DECLflower_INSTANCE39000_Bounce'].set_fraction === "function") X3DJSON['Obj']['DECLflower_INSTANCE39000_Bounce'].set_fraction(X3DJSON.nodeUtil('DECLflower_INSTANCE39000_Bounce','set_fraction'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_fraction'] };
X3DJSON['ROUTE']['DECLflower_INSTANCE39000_TourTime']['cycleTime']['DECLflower_INSTANCE39000_Bounce']['set_fraction']['TO'].observe(X3DJSON.nodeUtil('DECLflower_INSTANCE39000_Bounce'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE39000_Bounce'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE39000_Bounce'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE39000_Bounce']['translation_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE39000_Bounce']['translation_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE39000_Bounce']['translation_changed']['DECLflower_INSTANCE39000_transform'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE39000_Bounce']['translation_changed']['DECLflower_INSTANCE39000_transform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE39000_Bounce']['translation_changed']['DECLflower_INSTANCE39000_transform']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE39000_Bounce']['translation_changed']['DECLflower_INSTANCE39000_transform']['set_translation'] = {};
}

X3DJSON['ROUTE']['DECLflower_INSTANCE39000_Bounce']['translation_changed']['DECLflower_INSTANCE39000_transform']['set_translation']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'translation_changed');
			X3DJSON.nodeUtil('DECLflower_INSTANCE39000_transform','set_translation',X3DJSON.nodeUtil('DECLflower_INSTANCE39000_Bounce','translation_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['translation_changed'] };
X3DJSON['ROUTE']['DECLflower_INSTANCE39000_Bounce']['translation_changed']['DECLflower_INSTANCE39000_transform']['set_translation']['FROM'].observe(X3DJSON.nodeUtil('DECLflower_INSTANCE39000_Bounce'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE39000_Bounce'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE39000_Bounce'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE39000_Bounce']['translation_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE39000_Bounce']['translation_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE39000_Bounce']['translation_changed']['DECLflower_INSTANCE39000_transform'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE39000_Bounce']['translation_changed']['DECLflower_INSTANCE39000_transform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE39000_Bounce']['translation_changed']['DECLflower_INSTANCE39000_transform']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE39000_Bounce']['translation_changed']['DECLflower_INSTANCE39000_transform']['set_translation'] = {};
}

X3DJSON['ROUTE']['DECLflower_INSTANCE39000_Bounce']['translation_changed']['DECLflower_INSTANCE39000_transform']['set_translation']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_translation');
			if (typeof X3DJSON['Obj']['DECLflower_INSTANCE39000_transform'].set_translation === "function") X3DJSON['Obj']['DECLflower_INSTANCE39000_transform'].set_translation(X3DJSON.nodeUtil('DECLflower_INSTANCE39000_transform','set_translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_translation'] };
X3DJSON['ROUTE']['DECLflower_INSTANCE39000_Bounce']['translation_changed']['DECLflower_INSTANCE39000_transform']['set_translation']['TO'].observe(X3DJSON.nodeUtil('DECLflower_INSTANCE39000_transform'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE40000_TourTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE40000_TourTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE40000_TourTime']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE40000_TourTime']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE40000_TourTime']['cycleTime']['DECLflower_INSTANCE40000_Bounce'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE40000_TourTime']['cycleTime']['DECLflower_INSTANCE40000_Bounce'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE40000_TourTime']['cycleTime']['DECLflower_INSTANCE40000_Bounce']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE40000_TourTime']['cycleTime']['DECLflower_INSTANCE40000_Bounce']['set_fraction'] = {};
}

X3DJSON['ROUTE']['DECLflower_INSTANCE40000_TourTime']['cycleTime']['DECLflower_INSTANCE40000_Bounce']['set_fraction']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'cycleTime');
			X3DJSON.nodeUtil('DECLflower_INSTANCE40000_Bounce','set_fraction',X3DJSON.nodeUtil('DECLflower_INSTANCE40000_TourTime','cycleTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['cycleTime'] };
X3DJSON['ROUTE']['DECLflower_INSTANCE40000_TourTime']['cycleTime']['DECLflower_INSTANCE40000_Bounce']['set_fraction']['FROM'].observe(X3DJSON.nodeUtil('DECLflower_INSTANCE40000_TourTime'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE40000_TourTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE40000_TourTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE40000_TourTime']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE40000_TourTime']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE40000_TourTime']['cycleTime']['DECLflower_INSTANCE40000_Bounce'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE40000_TourTime']['cycleTime']['DECLflower_INSTANCE40000_Bounce'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE40000_TourTime']['cycleTime']['DECLflower_INSTANCE40000_Bounce']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE40000_TourTime']['cycleTime']['DECLflower_INSTANCE40000_Bounce']['set_fraction'] = {};
}

X3DJSON['ROUTE']['DECLflower_INSTANCE40000_TourTime']['cycleTime']['DECLflower_INSTANCE40000_Bounce']['set_fraction']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_fraction');
			if (typeof X3DJSON['Obj']['DECLflower_INSTANCE40000_Bounce'].set_fraction === "function") X3DJSON['Obj']['DECLflower_INSTANCE40000_Bounce'].set_fraction(X3DJSON.nodeUtil('DECLflower_INSTANCE40000_Bounce','set_fraction'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_fraction'] };
X3DJSON['ROUTE']['DECLflower_INSTANCE40000_TourTime']['cycleTime']['DECLflower_INSTANCE40000_Bounce']['set_fraction']['TO'].observe(X3DJSON.nodeUtil('DECLflower_INSTANCE40000_Bounce'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE40000_Bounce'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE40000_Bounce'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE40000_Bounce']['translation_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE40000_Bounce']['translation_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE40000_Bounce']['translation_changed']['DECLflower_INSTANCE40000_transform'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE40000_Bounce']['translation_changed']['DECLflower_INSTANCE40000_transform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE40000_Bounce']['translation_changed']['DECLflower_INSTANCE40000_transform']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE40000_Bounce']['translation_changed']['DECLflower_INSTANCE40000_transform']['set_translation'] = {};
}

X3DJSON['ROUTE']['DECLflower_INSTANCE40000_Bounce']['translation_changed']['DECLflower_INSTANCE40000_transform']['set_translation']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'translation_changed');
			X3DJSON.nodeUtil('DECLflower_INSTANCE40000_transform','set_translation',X3DJSON.nodeUtil('DECLflower_INSTANCE40000_Bounce','translation_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['translation_changed'] };
X3DJSON['ROUTE']['DECLflower_INSTANCE40000_Bounce']['translation_changed']['DECLflower_INSTANCE40000_transform']['set_translation']['FROM'].observe(X3DJSON.nodeUtil('DECLflower_INSTANCE40000_Bounce'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE40000_Bounce'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE40000_Bounce'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE40000_Bounce']['translation_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE40000_Bounce']['translation_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE40000_Bounce']['translation_changed']['DECLflower_INSTANCE40000_transform'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE40000_Bounce']['translation_changed']['DECLflower_INSTANCE40000_transform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLflower_INSTANCE40000_Bounce']['translation_changed']['DECLflower_INSTANCE40000_transform']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLflower_INSTANCE40000_Bounce']['translation_changed']['DECLflower_INSTANCE40000_transform']['set_translation'] = {};
}

X3DJSON['ROUTE']['DECLflower_INSTANCE40000_Bounce']['translation_changed']['DECLflower_INSTANCE40000_transform']['set_translation']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_translation');
			if (typeof X3DJSON['Obj']['DECLflower_INSTANCE40000_transform'].set_translation === "function") X3DJSON['Obj']['DECLflower_INSTANCE40000_transform'].set_translation(X3DJSON.nodeUtil('DECLflower_INSTANCE40000_transform','set_translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_translation'] };
X3DJSON['ROUTE']['DECLflower_INSTANCE40000_Bounce']['translation_changed']['DECLflower_INSTANCE40000_transform']['set_translation']['TO'].observe(X3DJSON.nodeUtil('DECLflower_INSTANCE40000_transform'), config);
			X3DJSON.nodeUtil('DECLflower_INSTANCE38000_Bounce','set_fraction',X3DJSON.nodeUtil('DECLflower_INSTANCE38000_TourTime','cycleTime'), __eventTime);
			X3DJSON.nodeUtil('DECLflower_INSTANCE39000_Bounce','set_fraction',X3DJSON.nodeUtil('DECLflower_INSTANCE39000_TourTime','cycleTime'), __eventTime);
			X3DJSON.nodeUtil('DECLflower_INSTANCE40000_Bounce','set_fraction',X3DJSON.nodeUtil('DECLflower_INSTANCE40000_TourTime','cycleTime'), __eventTime);