var x3dom = require('../node/fields.js');
if (typeof X3DJSON === 'undefined') {
	var X3DJSON = {};
}
if (typeof __eventTime === 'undefined') {
	var __eventTime = 0;
}
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
var SFBool = Boolean;
var SFColor = x3dom.fields.SFColor;
var SFColorRGBA = x3dom.fields.SFColorRGBA;
var SFDouble = Number;
var SFFloat = Number;
var SFInt32 = Number;
var SFImage = x3dom.fields.SFImage;
var SFMatrix3d = function() { return Array.prototype.slice.call(arguments, 0); };
var SFMatrix3f = function() { return Array.prototype.slice.call(arguments, 0); };
var SFMatrix4d = function() { return Array.prototype.slice.call(arguments, 0); };
var SFMatrix4f = x3dom.fields.SFMatrix4f;
var SFNode = x3dom.fields.SFNode;
var Quaternion = x3dom.fields.Quaternion;
var SFString = String;
var SFTime = Number;
var SFVec2d = function() { return Array.prototype.slice.call(arguments, 0); };
var SFVec2f = x3dom.fields.SFVec2f;
var SFVec3d = function() { return Array.prototype.slice.call(arguments, 0); };
var SFVec3f = x3dom.fields.SFVec3f;
var SFVec4d = function() { return Array.prototype.slice.call(arguments, 0); };
var SFVec4f = x3dom.fields.SFVec4f;
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
if (typeof $ !== 'function') {
	$ = function() { return { attr : function() {}, 0 : null }; };
}
X3DJSON.nodeUtil = function(node, field, value) {
		var selector = "undefined [DEF='"+node+"']";
		var element = document.querySelector(selector);
		if (element === null) {
			console.error('unDEFed node',node);
		} else if (arguments.length > 2) {
			/*
			if (value && typeof value.toString === 'function') {
				value = value.toString();
			}
			$(selector).attr(field, value);
			// console.log('set', node, '.', field, '=', value);
			*/
			try {
				if (typeof element.setFieldValue === 'function') {
					element.setFieldValue(field, value);
				} else {
					element.setAttribute(field, value);
				}
			} catch (e) {
				console.log(e);
			}
			return element;
		} else if (arguments.length > 1) {
			if (typeof element.getFieldValue === 'function') {
				value = element.getFieldValue(field);
			} else {
				value = element.getAttribute(field);
			}
			/*
			if (element &&
				element._x3domNode &&
				element._x3domNode._vf &&
				element._x3domNode._vf[field] &&
				element._x3domNode._vf[field].setValueByStr) {
				value = element._x3domNode._vf[field].setValueByStr(value);
			}
			*/
			// console.log('get', node, '.', field,'=',value);
			return value;
		} else {
			return $(selector)[0];
		}
};
X3DJSON.createProxy = function(action, scriptObject) {
	var proxy = new Proxy(scriptObject, {
		get: function(target, property, receiver) {
			return Reflect.get(target, property, receiver);
		},
		set: function(target, property, value, receiver) {
                 if (typeof action[property] === 'object') {
                        for (var route in action[property]) {
                                if (typeof action[property][route] === 'function') {
                                        action[property][route](property, value);
   		                     // console.log('Set',property,'to', value);
                                }
                        }
                 }
		      return Reflect.set(target, property, value, receiver);
		}
	});
	return proxy;
};
if (typeof X3DJSON['Scriptundefined'] === 'undefined') {
X3DJSON['Scriptundefined'] = {};
}

X3DJSON['Scriptundefined']['DECLFlowerProto_INSTANCE2000_Bounce'] = function() {
	this.set_translation = function (value) {
		this.proxy.translation = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.translation_changed = function () {
		var value = this.translation;
		return value;
	};
	this.translation = new SFVec3f(0,0,0);
	this.set_velocity = function (value) {
		this.proxy.velocity = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.velocity_changed = function () {
		var value = this.velocity;
		return value;
	};
	this.velocity = new SFVec3f(0,0,0);
	this.set_fraction = function (value) {
		this.proxy.fraction = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.fraction_changed = function () {
		var value = this.fraction;
		return value;
	};
	this.fraction = undefined;
	this.set_a = function (value) {
		this.proxy.a = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.a_changed = function () {
		var value = this.a;
		return value;
	};
	this.a = new SFFloat(0.5);
	this.set_b = function (value) {
		this.proxy.b = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.b_changed = function () {
		var value = this.b;
		return value;
	};
	this.b = new SFFloat(0.5);
	this.set_c = function (value) {
		this.proxy.c = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.c_changed = function () {
		var value = this.c;
		return value;
	};
	this.c = new SFFloat(3);
	this.set_d = function (value) {
		this.proxy.d = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.d_changed = function () {
		var value = this.d;
		return value;
	};
	this.d = new SFFloat(3);
	this.set_tdelta = function (value) {
		this.proxy.tdelta = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.tdelta_changed = function () {
		var value = this.tdelta;
		return value;
	};
	this.tdelta = new SFFloat(0.5);
	this.set_pdelta = function (value) {
		this.proxy.pdelta = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.pdelta_changed = function () {
		var value = this.pdelta;
		return value;
	};
	this.pdelta = new SFFloat(0.5);

ecmascript:
			
	this.initialize = function () {
			    this.proxy.translation = new SFVec3f(0, 0, 0);
			    this.proxy.velocity = new SFVec3f(
			    	Math.random() - 0.5,
				Math.random() - 0.5,
				Math.random() - 0.5);
			}
			;

	this.set_fraction = function () {
			    this.proxy.translation = new SFVec3f(
			    	this.proxy.translation.x + this.proxy.velocity.x,
				this.proxy.translation.y + this.proxy.velocity.y,
				this.proxy.translation.z + this.proxy.velocity.z);
			    for (var j = 0; j <= 2; j++) {
				    if (Math.abs(this.proxy.translation.x) > 10) {
					this.initialize();
				    } else if (Math.abs(this.proxy.translation.y) > 10) {
					this.initialize();
				    } else if (Math.abs(this.proxy.translation.z) > 10) {
					this.initialize();
				    } else {
					this.proxy.velocity.x += Math.random() * 0.2 - 0.1;
					this.proxy.velocity.y += Math.random() * 0.2 - 0.1;
					this.proxy.velocity.z += Math.random() * 0.2 - 0.1;
				    }
			    }
			    this.animate_flowers();
			}

			;

	this.animate_flowers = function (fraction, eventTime) {
				choice = Math.floor(Math.random() * 4);
				switch (choice) {
				case 0:
					this.proxy.a += Math.random() * 0.2 - 0.1;
					break;
				case 1:
					this.proxy.b += Math.random() * 0.2 - 0.1;
					break;
				case 2:
					this.proxy.c += Math.random() * 2 - 1;
					break;
				case 3:
					this.proxy.d += Math.random() * 2 - 1;
					break;
				}
				this.proxy.tdelta += 0.5;
				this.proxy.pdelta += 0.5;
				if (this.proxy.a > 1) {
					this.proxy.a =  0.5;
				}
				if (this.proxy.b > 1) {
					this.proxy.b =  0.5;
				}
				if (this.proxy.c < 1) {
					this.proxy.c =  4;
				}
				if (this.proxy.d < 1) {
					this.proxy.d =  4;
				}
				if (this.proxy.c > 10) {
					this.proxy.c = 4;
				}
				if (this.proxy.d > 10) {
					this.proxy.d = 4;
				}
			}


;

};
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}

X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'] = new X3DJSON['Scriptundefined']['DECLFlowerProto_INSTANCE2000_Bounce']();
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce']['ACTION'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce']['ACTION'] = {};
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].proxy = X3DJSON.createProxy(X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce']['ACTION'],X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce']);
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].initialize === "function") X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].initialize();
if (typeof X3DJSON['Scriptundefined'] === 'undefined') {
X3DJSON['Scriptundefined'] = {};
}

X3DJSON['Scriptundefined']['DECLFlowerProto_INSTANCE4000_Bounce'] = function() {
	this.set_translation = function (value) {
		this.proxy.translation = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.translation_changed = function () {
		var value = this.translation;
		return value;
	};
	this.translation = new SFVec3f(0,0,0);
	this.set_velocity = function (value) {
		this.proxy.velocity = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.velocity_changed = function () {
		var value = this.velocity;
		return value;
	};
	this.velocity = new SFVec3f(0,0,0);
	this.set_fraction = function (value) {
		this.proxy.fraction = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.fraction_changed = function () {
		var value = this.fraction;
		return value;
	};
	this.fraction = undefined;
	this.set_a = function (value) {
		this.proxy.a = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.a_changed = function () {
		var value = this.a;
		return value;
	};
	this.a = new SFFloat(0.5);
	this.set_b = function (value) {
		this.proxy.b = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.b_changed = function () {
		var value = this.b;
		return value;
	};
	this.b = new SFFloat(0.5);
	this.set_c = function (value) {
		this.proxy.c = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.c_changed = function () {
		var value = this.c;
		return value;
	};
	this.c = new SFFloat(3);
	this.set_d = function (value) {
		this.proxy.d = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.d_changed = function () {
		var value = this.d;
		return value;
	};
	this.d = new SFFloat(3);
	this.set_tdelta = function (value) {
		this.proxy.tdelta = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.tdelta_changed = function () {
		var value = this.tdelta;
		return value;
	};
	this.tdelta = new SFFloat(0.5);
	this.set_pdelta = function (value) {
		this.proxy.pdelta = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.pdelta_changed = function () {
		var value = this.pdelta;
		return value;
	};
	this.pdelta = new SFFloat(0.5);

ecmascript:
			
	this.initialize = function () {
			    this.proxy.translation = new SFVec3f(0, 0, 0);
			    this.proxy.velocity = new SFVec3f(
			    	Math.random() - 0.5,
				Math.random() - 0.5,
				Math.random() - 0.5);
			}
			;

	this.set_fraction = function () {
			    this.proxy.translation = new SFVec3f(
			    	this.proxy.translation.x + this.proxy.velocity.x,
				this.proxy.translation.y + this.proxy.velocity.y,
				this.proxy.translation.z + this.proxy.velocity.z);
			    for (var j = 0; j <= 2; j++) {
				    if (Math.abs(this.proxy.translation.x) > 10) {
					this.initialize();
				    } else if (Math.abs(this.proxy.translation.y) > 10) {
					this.initialize();
				    } else if (Math.abs(this.proxy.translation.z) > 10) {
					this.initialize();
				    } else {
					this.proxy.velocity.x += Math.random() * 0.2 - 0.1;
					this.proxy.velocity.y += Math.random() * 0.2 - 0.1;
					this.proxy.velocity.z += Math.random() * 0.2 - 0.1;
				    }
			    }
			    this.animate_flowers();
			}

			;

	this.animate_flowers = function (fraction, eventTime) {
				choice = Math.floor(Math.random() * 4);
				switch (choice) {
				case 0:
					this.proxy.a += Math.random() * 0.2 - 0.1;
					break;
				case 1:
					this.proxy.b += Math.random() * 0.2 - 0.1;
					break;
				case 2:
					this.proxy.c += Math.random() * 2 - 1;
					break;
				case 3:
					this.proxy.d += Math.random() * 2 - 1;
					break;
				}
				this.proxy.tdelta += 0.5;
				this.proxy.pdelta += 0.5;
				if (this.proxy.a > 1) {
					this.proxy.a =  0.5;
				}
				if (this.proxy.b > 1) {
					this.proxy.b =  0.5;
				}
				if (this.proxy.c < 1) {
					this.proxy.c =  4;
				}
				if (this.proxy.d < 1) {
					this.proxy.d =  4;
				}
				if (this.proxy.c > 10) {
					this.proxy.c = 4;
				}
				if (this.proxy.d > 10) {
					this.proxy.d = 4;
				}
			}


;

};
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}

X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'] = new X3DJSON['Scriptundefined']['DECLFlowerProto_INSTANCE4000_Bounce']();
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce']['ACTION'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce']['ACTION'] = {};
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].proxy = X3DJSON.createProxy(X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce']['ACTION'],X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce']);
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].initialize === "function") X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].initialize();
if (typeof X3DJSON['Scriptundefined'] === 'undefined') {
X3DJSON['Scriptundefined'] = {};
}

X3DJSON['Scriptundefined']['DECLFlowerProto_INSTANCE6000_Bounce'] = function() {
	this.set_translation = function (value) {
		this.proxy.translation = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.translation_changed = function () {
		var value = this.translation;
		return value;
	};
	this.translation = new SFVec3f(0,0,0);
	this.set_velocity = function (value) {
		this.proxy.velocity = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.velocity_changed = function () {
		var value = this.velocity;
		return value;
	};
	this.velocity = new SFVec3f(0,0,0);
	this.set_fraction = function (value) {
		this.proxy.fraction = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.fraction_changed = function () {
		var value = this.fraction;
		return value;
	};
	this.fraction = undefined;
	this.set_a = function (value) {
		this.proxy.a = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.a_changed = function () {
		var value = this.a;
		return value;
	};
	this.a = new SFFloat(0.5);
	this.set_b = function (value) {
		this.proxy.b = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.b_changed = function () {
		var value = this.b;
		return value;
	};
	this.b = new SFFloat(0.5);
	this.set_c = function (value) {
		this.proxy.c = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.c_changed = function () {
		var value = this.c;
		return value;
	};
	this.c = new SFFloat(3);
	this.set_d = function (value) {
		this.proxy.d = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.d_changed = function () {
		var value = this.d;
		return value;
	};
	this.d = new SFFloat(3);
	this.set_tdelta = function (value) {
		this.proxy.tdelta = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.tdelta_changed = function () {
		var value = this.tdelta;
		return value;
	};
	this.tdelta = new SFFloat(0.5);
	this.set_pdelta = function (value) {
		this.proxy.pdelta = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.pdelta_changed = function () {
		var value = this.pdelta;
		return value;
	};
	this.pdelta = new SFFloat(0.5);

ecmascript:
			
	this.initialize = function () {
			    this.proxy.translation = new SFVec3f(0, 0, 0);
			    this.proxy.velocity = new SFVec3f(
			    	Math.random() - 0.5,
				Math.random() - 0.5,
				Math.random() - 0.5);
			}
			;

	this.set_fraction = function () {
			    this.proxy.translation = new SFVec3f(
			    	this.proxy.translation.x + this.proxy.velocity.x,
				this.proxy.translation.y + this.proxy.velocity.y,
				this.proxy.translation.z + this.proxy.velocity.z);
			    for (var j = 0; j <= 2; j++) {
				    if (Math.abs(this.proxy.translation.x) > 10) {
					this.initialize();
				    } else if (Math.abs(this.proxy.translation.y) > 10) {
					this.initialize();
				    } else if (Math.abs(this.proxy.translation.z) > 10) {
					this.initialize();
				    } else {
					this.proxy.velocity.x += Math.random() * 0.2 - 0.1;
					this.proxy.velocity.y += Math.random() * 0.2 - 0.1;
					this.proxy.velocity.z += Math.random() * 0.2 - 0.1;
				    }
			    }
			    this.animate_flowers();
			}

			;

	this.animate_flowers = function (fraction, eventTime) {
				choice = Math.floor(Math.random() * 4);
				switch (choice) {
				case 0:
					this.proxy.a += Math.random() * 0.2 - 0.1;
					break;
				case 1:
					this.proxy.b += Math.random() * 0.2 - 0.1;
					break;
				case 2:
					this.proxy.c += Math.random() * 2 - 1;
					break;
				case 3:
					this.proxy.d += Math.random() * 2 - 1;
					break;
				}
				this.proxy.tdelta += 0.5;
				this.proxy.pdelta += 0.5;
				if (this.proxy.a > 1) {
					this.proxy.a =  0.5;
				}
				if (this.proxy.b > 1) {
					this.proxy.b =  0.5;
				}
				if (this.proxy.c < 1) {
					this.proxy.c =  4;
				}
				if (this.proxy.d < 1) {
					this.proxy.d =  4;
				}
				if (this.proxy.c > 10) {
					this.proxy.c = 4;
				}
				if (this.proxy.d > 10) {
					this.proxy.d = 4;
				}
			}


;

};
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}

X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'] = new X3DJSON['Scriptundefined']['DECLFlowerProto_INSTANCE6000_Bounce']();
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce']['ACTION'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce']['ACTION'] = {};
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].proxy = X3DJSON.createProxy(X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce']['ACTION'],X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce']);
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].initialize === "function") X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].initialize();
if (typeof X3DJSON['Scriptundefined'] === 'undefined') {
X3DJSON['Scriptundefined'] = {};
}

X3DJSON['Scriptundefined']['DECLFlowerProto_INSTANCE8000_Bounce'] = function() {
	this.set_translation = function (value) {
		this.proxy.translation = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.translation_changed = function () {
		var value = this.translation;
		return value;
	};
	this.translation = new SFVec3f(0,0,0);
	this.set_velocity = function (value) {
		this.proxy.velocity = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.velocity_changed = function () {
		var value = this.velocity;
		return value;
	};
	this.velocity = new SFVec3f(0,0,0);
	this.set_fraction = function (value) {
		this.proxy.fraction = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.fraction_changed = function () {
		var value = this.fraction;
		return value;
	};
	this.fraction = undefined;
	this.set_a = function (value) {
		this.proxy.a = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.a_changed = function () {
		var value = this.a;
		return value;
	};
	this.a = new SFFloat(0.5);
	this.set_b = function (value) {
		this.proxy.b = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.b_changed = function () {
		var value = this.b;
		return value;
	};
	this.b = new SFFloat(0.5);
	this.set_c = function (value) {
		this.proxy.c = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.c_changed = function () {
		var value = this.c;
		return value;
	};
	this.c = new SFFloat(3);
	this.set_d = function (value) {
		this.proxy.d = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.d_changed = function () {
		var value = this.d;
		return value;
	};
	this.d = new SFFloat(3);
	this.set_tdelta = function (value) {
		this.proxy.tdelta = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.tdelta_changed = function () {
		var value = this.tdelta;
		return value;
	};
	this.tdelta = new SFFloat(0.5);
	this.set_pdelta = function (value) {
		this.proxy.pdelta = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.pdelta_changed = function () {
		var value = this.pdelta;
		return value;
	};
	this.pdelta = new SFFloat(0.5);

ecmascript:
			
	this.initialize = function () {
			    this.proxy.translation = new SFVec3f(0, 0, 0);
			    this.proxy.velocity = new SFVec3f(
			    	Math.random() - 0.5,
				Math.random() - 0.5,
				Math.random() - 0.5);
			}
			;

	this.set_fraction = function () {
			    this.proxy.translation = new SFVec3f(
			    	this.proxy.translation.x + this.proxy.velocity.x,
				this.proxy.translation.y + this.proxy.velocity.y,
				this.proxy.translation.z + this.proxy.velocity.z);
			    for (var j = 0; j <= 2; j++) {
				    if (Math.abs(this.proxy.translation.x) > 10) {
					this.initialize();
				    } else if (Math.abs(this.proxy.translation.y) > 10) {
					this.initialize();
				    } else if (Math.abs(this.proxy.translation.z) > 10) {
					this.initialize();
				    } else {
					this.proxy.velocity.x += Math.random() * 0.2 - 0.1;
					this.proxy.velocity.y += Math.random() * 0.2 - 0.1;
					this.proxy.velocity.z += Math.random() * 0.2 - 0.1;
				    }
			    }
			    this.animate_flowers();
			}

			;

	this.animate_flowers = function (fraction, eventTime) {
				choice = Math.floor(Math.random() * 4);
				switch (choice) {
				case 0:
					this.proxy.a += Math.random() * 0.2 - 0.1;
					break;
				case 1:
					this.proxy.b += Math.random() * 0.2 - 0.1;
					break;
				case 2:
					this.proxy.c += Math.random() * 2 - 1;
					break;
				case 3:
					this.proxy.d += Math.random() * 2 - 1;
					break;
				}
				this.proxy.tdelta += 0.5;
				this.proxy.pdelta += 0.5;
				if (this.proxy.a > 1) {
					this.proxy.a =  0.5;
				}
				if (this.proxy.b > 1) {
					this.proxy.b =  0.5;
				}
				if (this.proxy.c < 1) {
					this.proxy.c =  4;
				}
				if (this.proxy.d < 1) {
					this.proxy.d =  4;
				}
				if (this.proxy.c > 10) {
					this.proxy.c = 4;
				}
				if (this.proxy.d > 10) {
					this.proxy.d = 4;
				}
			}


;

};
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}

X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'] = new X3DJSON['Scriptundefined']['DECLFlowerProto_INSTANCE8000_Bounce']();
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce']['ACTION'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce']['ACTION'] = {};
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].proxy = X3DJSON.createProxy(X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce']['ACTION'],X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce']);
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].initialize === "function") X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].initialize();
if (typeof X3DJSON['Scriptundefined'] === 'undefined') {
X3DJSON['Scriptundefined'] = {};
}

X3DJSON['Scriptundefined']['DECLFlowerProto_INSTANCE10000_Bounce'] = function() {
	this.set_translation = function (value) {
		this.proxy.translation = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.translation_changed = function () {
		var value = this.translation;
		return value;
	};
	this.translation = new SFVec3f(0,0,0);
	this.set_velocity = function (value) {
		this.proxy.velocity = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.velocity_changed = function () {
		var value = this.velocity;
		return value;
	};
	this.velocity = new SFVec3f(0,0,0);
	this.set_fraction = function (value) {
		this.proxy.fraction = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.fraction_changed = function () {
		var value = this.fraction;
		return value;
	};
	this.fraction = undefined;
	this.set_a = function (value) {
		this.proxy.a = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.a_changed = function () {
		var value = this.a;
		return value;
	};
	this.a = new SFFloat(0.5);
	this.set_b = function (value) {
		this.proxy.b = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.b_changed = function () {
		var value = this.b;
		return value;
	};
	this.b = new SFFloat(0.5);
	this.set_c = function (value) {
		this.proxy.c = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.c_changed = function () {
		var value = this.c;
		return value;
	};
	this.c = new SFFloat(3);
	this.set_d = function (value) {
		this.proxy.d = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.d_changed = function () {
		var value = this.d;
		return value;
	};
	this.d = new SFFloat(3);
	this.set_tdelta = function (value) {
		this.proxy.tdelta = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.tdelta_changed = function () {
		var value = this.tdelta;
		return value;
	};
	this.tdelta = new SFFloat(0.5);
	this.set_pdelta = function (value) {
		this.proxy.pdelta = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.pdelta_changed = function () {
		var value = this.pdelta;
		return value;
	};
	this.pdelta = new SFFloat(0.5);

ecmascript:
			
	this.initialize = function () {
			    this.proxy.translation = new SFVec3f(0, 0, 0);
			    this.proxy.velocity = new SFVec3f(
			    	Math.random() - 0.5,
				Math.random() - 0.5,
				Math.random() - 0.5);
			}
			;

	this.set_fraction = function () {
			    this.proxy.translation = new SFVec3f(
			    	this.proxy.translation.x + this.proxy.velocity.x,
				this.proxy.translation.y + this.proxy.velocity.y,
				this.proxy.translation.z + this.proxy.velocity.z);
			    for (var j = 0; j <= 2; j++) {
				    if (Math.abs(this.proxy.translation.x) > 10) {
					this.initialize();
				    } else if (Math.abs(this.proxy.translation.y) > 10) {
					this.initialize();
				    } else if (Math.abs(this.proxy.translation.z) > 10) {
					this.initialize();
				    } else {
					this.proxy.velocity.x += Math.random() * 0.2 - 0.1;
					this.proxy.velocity.y += Math.random() * 0.2 - 0.1;
					this.proxy.velocity.z += Math.random() * 0.2 - 0.1;
				    }
			    }
			    this.animate_flowers();
			}

			;

	this.animate_flowers = function (fraction, eventTime) {
				choice = Math.floor(Math.random() * 4);
				switch (choice) {
				case 0:
					this.proxy.a += Math.random() * 0.2 - 0.1;
					break;
				case 1:
					this.proxy.b += Math.random() * 0.2 - 0.1;
					break;
				case 2:
					this.proxy.c += Math.random() * 2 - 1;
					break;
				case 3:
					this.proxy.d += Math.random() * 2 - 1;
					break;
				}
				this.proxy.tdelta += 0.5;
				this.proxy.pdelta += 0.5;
				if (this.proxy.a > 1) {
					this.proxy.a =  0.5;
				}
				if (this.proxy.b > 1) {
					this.proxy.b =  0.5;
				}
				if (this.proxy.c < 1) {
					this.proxy.c =  4;
				}
				if (this.proxy.d < 1) {
					this.proxy.d =  4;
				}
				if (this.proxy.c > 10) {
					this.proxy.c = 4;
				}
				if (this.proxy.d > 10) {
					this.proxy.d = 4;
				}
			}


;

};
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}

X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'] = new X3DJSON['Scriptundefined']['DECLFlowerProto_INSTANCE10000_Bounce']();
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce']['ACTION'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce']['ACTION'] = {};
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].proxy = X3DJSON.createProxy(X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce']['ACTION'],X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce']);
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].initialize === "function") X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].initialize();
if (typeof X3DJSON['Scriptundefined'] === 'undefined') {
X3DJSON['Scriptundefined'] = {};
}

X3DJSON['Scriptundefined']['DECLFlowerProto_INSTANCE12000_Bounce'] = function() {
	this.set_translation = function (value) {
		this.proxy.translation = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.translation_changed = function () {
		var value = this.translation;
		return value;
	};
	this.translation = new SFVec3f(0,0,0);
	this.set_velocity = function (value) {
		this.proxy.velocity = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.velocity_changed = function () {
		var value = this.velocity;
		return value;
	};
	this.velocity = new SFVec3f(0,0,0);
	this.set_fraction = function (value) {
		this.proxy.fraction = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.fraction_changed = function () {
		var value = this.fraction;
		return value;
	};
	this.fraction = undefined;
	this.set_a = function (value) {
		this.proxy.a = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.a_changed = function () {
		var value = this.a;
		return value;
	};
	this.a = new SFFloat(0.5);
	this.set_b = function (value) {
		this.proxy.b = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.b_changed = function () {
		var value = this.b;
		return value;
	};
	this.b = new SFFloat(0.5);
	this.set_c = function (value) {
		this.proxy.c = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.c_changed = function () {
		var value = this.c;
		return value;
	};
	this.c = new SFFloat(3);
	this.set_d = function (value) {
		this.proxy.d = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.d_changed = function () {
		var value = this.d;
		return value;
	};
	this.d = new SFFloat(3);
	this.set_tdelta = function (value) {
		this.proxy.tdelta = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.tdelta_changed = function () {
		var value = this.tdelta;
		return value;
	};
	this.tdelta = new SFFloat(0.5);
	this.set_pdelta = function (value) {
		this.proxy.pdelta = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.pdelta_changed = function () {
		var value = this.pdelta;
		return value;
	};
	this.pdelta = new SFFloat(0.5);

ecmascript:
			
	this.initialize = function () {
			    this.proxy.translation = new SFVec3f(0, 0, 0);
			    this.proxy.velocity = new SFVec3f(
			    	Math.random() - 0.5,
				Math.random() - 0.5,
				Math.random() - 0.5);
			}
			;

	this.set_fraction = function () {
			    this.proxy.translation = new SFVec3f(
			    	this.proxy.translation.x + this.proxy.velocity.x,
				this.proxy.translation.y + this.proxy.velocity.y,
				this.proxy.translation.z + this.proxy.velocity.z);
			    for (var j = 0; j <= 2; j++) {
				    if (Math.abs(this.proxy.translation.x) > 10) {
					this.initialize();
				    } else if (Math.abs(this.proxy.translation.y) > 10) {
					this.initialize();
				    } else if (Math.abs(this.proxy.translation.z) > 10) {
					this.initialize();
				    } else {
					this.proxy.velocity.x += Math.random() * 0.2 - 0.1;
					this.proxy.velocity.y += Math.random() * 0.2 - 0.1;
					this.proxy.velocity.z += Math.random() * 0.2 - 0.1;
				    }
			    }
			    this.animate_flowers();
			}

			;

	this.animate_flowers = function (fraction, eventTime) {
				choice = Math.floor(Math.random() * 4);
				switch (choice) {
				case 0:
					this.proxy.a += Math.random() * 0.2 - 0.1;
					break;
				case 1:
					this.proxy.b += Math.random() * 0.2 - 0.1;
					break;
				case 2:
					this.proxy.c += Math.random() * 2 - 1;
					break;
				case 3:
					this.proxy.d += Math.random() * 2 - 1;
					break;
				}
				this.proxy.tdelta += 0.5;
				this.proxy.pdelta += 0.5;
				if (this.proxy.a > 1) {
					this.proxy.a =  0.5;
				}
				if (this.proxy.b > 1) {
					this.proxy.b =  0.5;
				}
				if (this.proxy.c < 1) {
					this.proxy.c =  4;
				}
				if (this.proxy.d < 1) {
					this.proxy.d =  4;
				}
				if (this.proxy.c > 10) {
					this.proxy.c = 4;
				}
				if (this.proxy.d > 10) {
					this.proxy.d = 4;
				}
			}


;

};
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}

X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'] = new X3DJSON['Scriptundefined']['DECLFlowerProto_INSTANCE12000_Bounce']();
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce']['ACTION'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce']['ACTION'] = {};
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].proxy = X3DJSON.createProxy(X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce']['ACTION'],X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce']);
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].initialize === "function") X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].initialize();
X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE2000_TourTime').addEventListener('outputchange', function(event) {
			X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].set_fraction(X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE2000_TourTime','cycleTime'), __eventTime);
}, false);
			X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].set_fraction(X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE2000_TourTime','cycleTime'), __eventTime);
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce']['ACTION']['translation'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce']['ACTION']['translation'] = [];
}
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce']['ACTION']['translation'].push(function(property, value) {
		if (property === 'translation') {
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE2000_transform','translation',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].translation_changed === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].translation_changed() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].translation, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE2000_transform','translation',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].translation_changed === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].translation_changed() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].translation, __eventTime);
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce']['ACTION']['a'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce']['ACTION']['a'] = [];
}
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce']['ACTION']['a'].push(function(property, value) {
		if (property === 'a') {
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE2000_shader','a',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].a === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].a() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].a, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE2000_shader','a',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].a === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].a() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].a, __eventTime);
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce']['ACTION']['b'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce']['ACTION']['b'] = [];
}
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce']['ACTION']['b'].push(function(property, value) {
		if (property === 'b') {
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE2000_shader','b',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].b === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].b() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].b, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE2000_shader','b',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].b === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].b() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].b, __eventTime);
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce']['ACTION']['c'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce']['ACTION']['c'] = [];
}
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce']['ACTION']['c'].push(function(property, value) {
		if (property === 'c') {
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE2000_shader','c',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].c === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].c() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].c, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE2000_shader','c',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].c === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].c() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].c, __eventTime);
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce']['ACTION']['d'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce']['ACTION']['d'] = [];
}
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce']['ACTION']['d'].push(function(property, value) {
		if (property === 'd') {
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE2000_shader','d',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].d === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].d() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].d, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE2000_shader','d',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].d === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].d() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].d, __eventTime);
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce']['ACTION']['tdelta'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce']['ACTION']['tdelta'] = [];
}
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce']['ACTION']['tdelta'].push(function(property, value) {
		if (property === 'tdelta') {
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE2000_shader','tdelta',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].tdelta === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].tdelta() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].tdelta, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE2000_shader','tdelta',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].tdelta === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].tdelta() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].tdelta, __eventTime);
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce']['ACTION']['pdelta'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce']['ACTION']['pdelta'] = [];
}
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce']['ACTION']['pdelta'].push(function(property, value) {
		if (property === 'pdelta') {
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE2000_shader','pdelta',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].pdelta === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].pdelta() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].pdelta, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE2000_shader','pdelta',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].pdelta === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].pdelta() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].pdelta, __eventTime);
X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE4000_TourTime').addEventListener('outputchange', function(event) {
			X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].set_fraction(X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE4000_TourTime','cycleTime'), __eventTime);
}, false);
			X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].set_fraction(X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE4000_TourTime','cycleTime'), __eventTime);
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce']['ACTION']['translation'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce']['ACTION']['translation'] = [];
}
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce']['ACTION']['translation'].push(function(property, value) {
		if (property === 'translation') {
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE4000_transform','translation',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].translation_changed === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].translation_changed() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].translation, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE4000_transform','translation',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].translation_changed === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].translation_changed() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].translation, __eventTime);
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce']['ACTION']['a'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce']['ACTION']['a'] = [];
}
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce']['ACTION']['a'].push(function(property, value) {
		if (property === 'a') {
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE4000_shader','a',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].a === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].a() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].a, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE4000_shader','a',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].a === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].a() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].a, __eventTime);
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce']['ACTION']['b'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce']['ACTION']['b'] = [];
}
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce']['ACTION']['b'].push(function(property, value) {
		if (property === 'b') {
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE4000_shader','b',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].b === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].b() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].b, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE4000_shader','b',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].b === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].b() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].b, __eventTime);
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce']['ACTION']['c'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce']['ACTION']['c'] = [];
}
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce']['ACTION']['c'].push(function(property, value) {
		if (property === 'c') {
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE4000_shader','c',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].c === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].c() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].c, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE4000_shader','c',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].c === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].c() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].c, __eventTime);
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce']['ACTION']['d'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce']['ACTION']['d'] = [];
}
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce']['ACTION']['d'].push(function(property, value) {
		if (property === 'd') {
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE4000_shader','d',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].d === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].d() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].d, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE4000_shader','d',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].d === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].d() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].d, __eventTime);
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce']['ACTION']['tdelta'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce']['ACTION']['tdelta'] = [];
}
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce']['ACTION']['tdelta'].push(function(property, value) {
		if (property === 'tdelta') {
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE4000_shader','tdelta',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].tdelta === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].tdelta() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].tdelta, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE4000_shader','tdelta',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].tdelta === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].tdelta() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].tdelta, __eventTime);
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce']['ACTION']['pdelta'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce']['ACTION']['pdelta'] = [];
}
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce']['ACTION']['pdelta'].push(function(property, value) {
		if (property === 'pdelta') {
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE4000_shader','pdelta',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].pdelta === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].pdelta() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].pdelta, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE4000_shader','pdelta',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].pdelta === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].pdelta() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].pdelta, __eventTime);
X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE6000_TourTime').addEventListener('outputchange', function(event) {
			X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].set_fraction(X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE6000_TourTime','cycleTime'), __eventTime);
}, false);
			X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].set_fraction(X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE6000_TourTime','cycleTime'), __eventTime);
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce']['ACTION']['translation'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce']['ACTION']['translation'] = [];
}
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce']['ACTION']['translation'].push(function(property, value) {
		if (property === 'translation') {
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE6000_transform','translation',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].translation_changed === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].translation_changed() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].translation, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE6000_transform','translation',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].translation_changed === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].translation_changed() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].translation, __eventTime);
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce']['ACTION']['a'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce']['ACTION']['a'] = [];
}
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce']['ACTION']['a'].push(function(property, value) {
		if (property === 'a') {
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE6000_shader','a',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].a === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].a() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].a, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE6000_shader','a',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].a === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].a() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].a, __eventTime);
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce']['ACTION']['b'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce']['ACTION']['b'] = [];
}
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce']['ACTION']['b'].push(function(property, value) {
		if (property === 'b') {
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE6000_shader','b',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].b === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].b() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].b, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE6000_shader','b',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].b === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].b() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].b, __eventTime);
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce']['ACTION']['c'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce']['ACTION']['c'] = [];
}
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce']['ACTION']['c'].push(function(property, value) {
		if (property === 'c') {
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE6000_shader','c',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].c === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].c() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].c, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE6000_shader','c',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].c === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].c() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].c, __eventTime);
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce']['ACTION']['d'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce']['ACTION']['d'] = [];
}
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce']['ACTION']['d'].push(function(property, value) {
		if (property === 'd') {
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE6000_shader','d',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].d === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].d() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].d, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE6000_shader','d',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].d === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].d() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].d, __eventTime);
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce']['ACTION']['tdelta'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce']['ACTION']['tdelta'] = [];
}
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce']['ACTION']['tdelta'].push(function(property, value) {
		if (property === 'tdelta') {
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE6000_shader','tdelta',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].tdelta === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].tdelta() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].tdelta, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE6000_shader','tdelta',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].tdelta === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].tdelta() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].tdelta, __eventTime);
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce']['ACTION']['pdelta'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce']['ACTION']['pdelta'] = [];
}
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce']['ACTION']['pdelta'].push(function(property, value) {
		if (property === 'pdelta') {
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE6000_shader','pdelta',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].pdelta === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].pdelta() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].pdelta, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE6000_shader','pdelta',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].pdelta === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].pdelta() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].pdelta, __eventTime);
X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE8000_TourTime').addEventListener('outputchange', function(event) {
			X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].set_fraction(X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE8000_TourTime','cycleTime'), __eventTime);
}, false);
			X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].set_fraction(X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE8000_TourTime','cycleTime'), __eventTime);
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce']['ACTION']['translation'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce']['ACTION']['translation'] = [];
}
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce']['ACTION']['translation'].push(function(property, value) {
		if (property === 'translation') {
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE8000_transform','translation',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].translation_changed === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].translation_changed() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].translation, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE8000_transform','translation',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].translation_changed === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].translation_changed() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].translation, __eventTime);
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce']['ACTION']['a'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce']['ACTION']['a'] = [];
}
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce']['ACTION']['a'].push(function(property, value) {
		if (property === 'a') {
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE8000_shader','a',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].a === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].a() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].a, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE8000_shader','a',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].a === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].a() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].a, __eventTime);
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce']['ACTION']['b'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce']['ACTION']['b'] = [];
}
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce']['ACTION']['b'].push(function(property, value) {
		if (property === 'b') {
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE8000_shader','b',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].b === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].b() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].b, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE8000_shader','b',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].b === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].b() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].b, __eventTime);
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce']['ACTION']['c'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce']['ACTION']['c'] = [];
}
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce']['ACTION']['c'].push(function(property, value) {
		if (property === 'c') {
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE8000_shader','c',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].c === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].c() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].c, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE8000_shader','c',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].c === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].c() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].c, __eventTime);
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce']['ACTION']['d'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce']['ACTION']['d'] = [];
}
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce']['ACTION']['d'].push(function(property, value) {
		if (property === 'd') {
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE8000_shader','d',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].d === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].d() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].d, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE8000_shader','d',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].d === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].d() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].d, __eventTime);
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce']['ACTION']['tdelta'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce']['ACTION']['tdelta'] = [];
}
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce']['ACTION']['tdelta'].push(function(property, value) {
		if (property === 'tdelta') {
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE8000_shader','tdelta',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].tdelta === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].tdelta() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].tdelta, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE8000_shader','tdelta',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].tdelta === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].tdelta() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].tdelta, __eventTime);
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce']['ACTION']['pdelta'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce']['ACTION']['pdelta'] = [];
}
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce']['ACTION']['pdelta'].push(function(property, value) {
		if (property === 'pdelta') {
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE8000_shader','pdelta',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].pdelta === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].pdelta() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].pdelta, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE8000_shader','pdelta',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].pdelta === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].pdelta() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].pdelta, __eventTime);
X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE10000_TourTime').addEventListener('outputchange', function(event) {
			X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].set_fraction(X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE10000_TourTime','cycleTime'), __eventTime);
}, false);
			X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].set_fraction(X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE10000_TourTime','cycleTime'), __eventTime);
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce']['ACTION']['translation'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce']['ACTION']['translation'] = [];
}
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce']['ACTION']['translation'].push(function(property, value) {
		if (property === 'translation') {
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE10000_transform','translation',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].translation_changed === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].translation_changed() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].translation, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE10000_transform','translation',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].translation_changed === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].translation_changed() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].translation, __eventTime);
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce']['ACTION']['a'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce']['ACTION']['a'] = [];
}
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce']['ACTION']['a'].push(function(property, value) {
		if (property === 'a') {
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE10000_shader','a',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].a === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].a() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].a, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE10000_shader','a',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].a === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].a() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].a, __eventTime);
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce']['ACTION']['b'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce']['ACTION']['b'] = [];
}
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce']['ACTION']['b'].push(function(property, value) {
		if (property === 'b') {
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE10000_shader','b',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].b === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].b() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].b, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE10000_shader','b',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].b === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].b() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].b, __eventTime);
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce']['ACTION']['c'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce']['ACTION']['c'] = [];
}
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce']['ACTION']['c'].push(function(property, value) {
		if (property === 'c') {
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE10000_shader','c',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].c === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].c() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].c, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE10000_shader','c',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].c === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].c() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].c, __eventTime);
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce']['ACTION']['d'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce']['ACTION']['d'] = [];
}
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce']['ACTION']['d'].push(function(property, value) {
		if (property === 'd') {
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE10000_shader','d',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].d === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].d() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].d, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE10000_shader','d',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].d === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].d() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].d, __eventTime);
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce']['ACTION']['tdelta'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce']['ACTION']['tdelta'] = [];
}
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce']['ACTION']['tdelta'].push(function(property, value) {
		if (property === 'tdelta') {
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE10000_shader','tdelta',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].tdelta === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].tdelta() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].tdelta, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE10000_shader','tdelta',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].tdelta === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].tdelta() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].tdelta, __eventTime);
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce']['ACTION']['pdelta'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce']['ACTION']['pdelta'] = [];
}
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce']['ACTION']['pdelta'].push(function(property, value) {
		if (property === 'pdelta') {
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE10000_shader','pdelta',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].pdelta === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].pdelta() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].pdelta, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE10000_shader','pdelta',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].pdelta === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].pdelta() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].pdelta, __eventTime);
X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE12000_TourTime').addEventListener('outputchange', function(event) {
			X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].set_fraction(X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE12000_TourTime','cycleTime'), __eventTime);
}, false);
			X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].set_fraction(X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE12000_TourTime','cycleTime'), __eventTime);
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce']['ACTION']['translation'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce']['ACTION']['translation'] = [];
}
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce']['ACTION']['translation'].push(function(property, value) {
		if (property === 'translation') {
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE12000_transform','translation',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].translation_changed === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].translation_changed() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].translation, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE12000_transform','translation',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].translation_changed === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].translation_changed() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].translation, __eventTime);
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce']['ACTION']['a'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce']['ACTION']['a'] = [];
}
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce']['ACTION']['a'].push(function(property, value) {
		if (property === 'a') {
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE12000_shader','a',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].a === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].a() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].a, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE12000_shader','a',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].a === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].a() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].a, __eventTime);
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce']['ACTION']['b'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce']['ACTION']['b'] = [];
}
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce']['ACTION']['b'].push(function(property, value) {
		if (property === 'b') {
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE12000_shader','b',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].b === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].b() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].b, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE12000_shader','b',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].b === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].b() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].b, __eventTime);
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce']['ACTION']['c'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce']['ACTION']['c'] = [];
}
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce']['ACTION']['c'].push(function(property, value) {
		if (property === 'c') {
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE12000_shader','c',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].c === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].c() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].c, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE12000_shader','c',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].c === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].c() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].c, __eventTime);
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce']['ACTION']['d'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce']['ACTION']['d'] = [];
}
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce']['ACTION']['d'].push(function(property, value) {
		if (property === 'd') {
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE12000_shader','d',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].d === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].d() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].d, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE12000_shader','d',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].d === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].d() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].d, __eventTime);
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce']['ACTION']['tdelta'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce']['ACTION']['tdelta'] = [];
}
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce']['ACTION']['tdelta'].push(function(property, value) {
		if (property === 'tdelta') {
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE12000_shader','tdelta',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].tdelta === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].tdelta() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].tdelta, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE12000_shader','tdelta',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].tdelta === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].tdelta() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].tdelta, __eventTime);
if (typeof X3DJSON['Objundefined'] === 'undefined') {
X3DJSON['Objundefined'] = {};
}
if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'] = {};
}

if (typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce']['ACTION']['pdelta'] === 'undefined') {
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce']['ACTION']['pdelta'] = [];
}
X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce']['ACTION']['pdelta'].push(function(property, value) {
		if (property === 'pdelta') {
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE12000_shader','pdelta',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].pdelta === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].pdelta() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].pdelta, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE12000_shader','pdelta',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].pdelta === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].pdelta() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].pdelta, __eventTime);
			X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].set_fraction(X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE2000_TourTime','cycleTime'), __eventTime);
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE2000_transform','translation',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].translation_changed === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].translation_changed() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].translation, __eventTime);
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE2000_shader','a',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].a === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].a() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].a, __eventTime);
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE2000_shader','b',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].b === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].b() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].b, __eventTime);
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE2000_shader','c',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].c === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].c() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].c, __eventTime);
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE2000_shader','d',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].d === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].d() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].d, __eventTime);
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE2000_shader','tdelta',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].tdelta === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].tdelta() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].tdelta, __eventTime);
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE2000_shader','pdelta',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].pdelta === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].pdelta() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE2000_Bounce'].pdelta, __eventTime);
			X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].set_fraction(X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE4000_TourTime','cycleTime'), __eventTime);
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE4000_transform','translation',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].translation_changed === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].translation_changed() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].translation, __eventTime);
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE4000_shader','a',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].a === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].a() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].a, __eventTime);
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE4000_shader','b',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].b === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].b() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].b, __eventTime);
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE4000_shader','c',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].c === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].c() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].c, __eventTime);
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE4000_shader','d',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].d === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].d() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].d, __eventTime);
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE4000_shader','tdelta',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].tdelta === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].tdelta() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].tdelta, __eventTime);
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE4000_shader','pdelta',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].pdelta === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].pdelta() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE4000_Bounce'].pdelta, __eventTime);
			X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].set_fraction(X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE6000_TourTime','cycleTime'), __eventTime);
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE6000_transform','translation',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].translation_changed === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].translation_changed() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].translation, __eventTime);
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE6000_shader','a',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].a === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].a() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].a, __eventTime);
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE6000_shader','b',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].b === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].b() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].b, __eventTime);
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE6000_shader','c',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].c === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].c() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].c, __eventTime);
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE6000_shader','d',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].d === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].d() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].d, __eventTime);
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE6000_shader','tdelta',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].tdelta === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].tdelta() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].tdelta, __eventTime);
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE6000_shader','pdelta',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].pdelta === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].pdelta() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE6000_Bounce'].pdelta, __eventTime);
			X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].set_fraction(X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE8000_TourTime','cycleTime'), __eventTime);
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE8000_transform','translation',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].translation_changed === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].translation_changed() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].translation, __eventTime);
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE8000_shader','a',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].a === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].a() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].a, __eventTime);
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE8000_shader','b',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].b === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].b() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].b, __eventTime);
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE8000_shader','c',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].c === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].c() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].c, __eventTime);
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE8000_shader','d',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].d === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].d() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].d, __eventTime);
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE8000_shader','tdelta',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].tdelta === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].tdelta() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].tdelta, __eventTime);
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE8000_shader','pdelta',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].pdelta === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].pdelta() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE8000_Bounce'].pdelta, __eventTime);
			X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].set_fraction(X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE10000_TourTime','cycleTime'), __eventTime);
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE10000_transform','translation',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].translation_changed === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].translation_changed() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].translation, __eventTime);
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE10000_shader','a',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].a === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].a() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].a, __eventTime);
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE10000_shader','b',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].b === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].b() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].b, __eventTime);
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE10000_shader','c',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].c === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].c() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].c, __eventTime);
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE10000_shader','d',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].d === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].d() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].d, __eventTime);
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE10000_shader','tdelta',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].tdelta === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].tdelta() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].tdelta, __eventTime);
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE10000_shader','pdelta',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].pdelta === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].pdelta() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE10000_Bounce'].pdelta, __eventTime);
			X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].set_fraction(X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE12000_TourTime','cycleTime'), __eventTime);
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE12000_transform','translation',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].translation_changed === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].translation_changed() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].translation, __eventTime);
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE12000_shader','a',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].a === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].a() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].a, __eventTime);
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE12000_shader','b',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].b === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].b() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].b, __eventTime);
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE12000_shader','c',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].c === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].c() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].c, __eventTime);
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE12000_shader','d',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].d === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].d() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].d, __eventTime);
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE12000_shader','tdelta',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].tdelta === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].tdelta() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].tdelta, __eventTime);
			X3DJSON.nodeUtil('DECLFlowerProto_INSTANCE12000_shader','pdelta',typeof X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].pdelta === "function" ? X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].pdelta() : X3DJSON['Objundefined']['DECLFlowerProto_INSTANCE12000_Bounce'].pdelta, __eventTime);