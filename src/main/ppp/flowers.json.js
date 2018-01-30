var x3dom = require('../node/fields.js');
if (typeof X3DJSON === 'undefined') {
	var X3DJSON = {};
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
			element.setFieldValue(field, value);
			return element;
		} else if (arguments.length > 1) {
			value = element.getFieldValue(field);
			/*
			value = $(selector).attr(field);
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
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLflower_INSTANCE_Bounce'] = function() {
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
	this.set_coordinates = function (value) {
		this.proxy.coordinates = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.coordinates_changed = function () {
		var value = this.coordinates;
		return value;
	};
	this.coordinates = new MFVec3f();
	this.set_coordIndexes = function (value) {
		this.proxy.coordIndexes = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.coordIndexes_changed = function () {
		var value = this.coordIndexes;
		return value;
	};
	this.coordIndexes = new MFInt32();
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
	this.newBubble = function () { this.proxy.translation = new SFVec3f(0, 0, 0); this.proxy.velocity = new SFVec3f( Math.random() - 0.5, Math.random() - 0.5, Math.random() - 0.5); } ;

	this.set_fraction = function () { this.proxy.translation = new SFVec3f( this.proxy.translation.x + this.proxy.velocity.x, this.proxy.translation.y + this.proxy.velocity.y, this.proxy.translation.z + this.proxy.velocity.z); if (Math.abs(this.proxy.translation.x) > 10) { this.newBubble(); } else if (Math.abs(this.proxy.translation.y) > 10) { this.newBubble(); } else if (Math.abs(this.proxy.translation.z) > 10) { this.newBubble(); } else { this.proxy.velocity = new SFVec3f( this.proxy.velocity.x + Math.random() * 0.2 - 0.1, this.proxy.velocity.y + Math.random() * 0.2 - 0.1, this.proxy.velocity.z + Math.random() * 0.2 - 0.1 ); } this.animate_flowers(); } ;

	this.initialize = function () { var cis = []; this.newBubble(); resolution = 100; this.updateCoordinates(resolution); for ( i = 0; i < resolution-1; i++) { for ( j = 0; j < resolution-1; j++) { cis.push(i*resolution+j); cis.push(i*resolution+j+1); cis.push((i+1)*resolution+j+1); cis.push((i+1)*resolution+j); cis.push(-1); } } this.proxy.coordIndexes = new MFInt32(cis); } ;

	this.updateCoordinates = function (resolution) { theta = 0.0; phi = 0.0; delta = (2 * 3.141592653) / (resolution-1); var crds = []; for ( i = 0; i < resolution; i++) { for ( j = 0; j < resolution; j++) { rho = this.proxy.a + this.proxy.b * Math.cos(this.proxy.c * theta) * Math.cos(this.proxy.d * phi); crds.push(new SFVec3f( rho * Math.cos(phi) * Math.cos(theta), rho * Math.cos(phi) * Math.sin(theta), rho * Math.sin(phi) )); theta += delta; } phi += delta; this.proxy.coordinates = new MFVec3f(crds); } } ;

	this.animate_flowers = function (fraction, eventTime) { choice = Math.floor(Math.random() * 4); switch (choice) { case 0: this.proxy.a += Math.random() * 0.2 - 0.1; break; case 1: this.proxy.b += Math.random() * 0.2 - 0.1; break; case 2: this.proxy.c += Math.random() * 2 - 1; break; case 3: this.proxy.d += Math.random() * 2 - 1; break; } if (this.proxy.a > 1) { this.proxy.a = 0.5; } if (this.proxy.b > 1) { this.proxy.b = 0.5; } if (this.proxy.c < 1) { this.proxy.c = 4; } if (this.proxy.d < 1) { this.proxy.d = 4; } if (this.proxy.c > 10) { this.proxy.c = 4; } if (this.proxy.d > 10) { this.proxy.d = 4; } resolution = 100; this.updateCoordinates(resolution); };

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLflower_INSTANCE_Bounce'] = new X3DJSON['Script']['DECLflower_INSTANCE_Bounce']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['DECLflower_INSTANCE_Bounce'] === 'undefined') {
X3DJSON['Obj']['DECLflower_INSTANCE_Bounce'] = {};
}

if (typeof X3DJSON['Obj']['DECLflower_INSTANCE_Bounce']['ACTION'] === 'undefined') {
X3DJSON['Obj']['DECLflower_INSTANCE_Bounce']['ACTION'] = {};
X3DJSON['Obj']['DECLflower_INSTANCE_Bounce'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['DECLflower_INSTANCE_Bounce']['ACTION'],X3DJSON['Obj']['DECLflower_INSTANCE_Bounce']);
}
if (typeof X3DJSON['Obj']['DECLflower_INSTANCE_Bounce'].initialize === "function") X3DJSON['Obj']['DECLflower_INSTANCE_Bounce'].initialize();
X3DJSON.nodeUtil('DECLflower_INSTANCE_SongTime').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('DECLflower_INSTANCE_TourTime').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['DECLflower_INSTANCE_Bounce'].set_fraction(X3DJSON.nodeUtil('DECLflower_INSTANCE_TourTime','cycleTime'), __eventTime);
}, false);
			X3DJSON['Obj']['DECLflower_INSTANCE_Bounce'].set_fraction(X3DJSON.nodeUtil('DECLflower_INSTANCE_TourTime','cycleTime'), __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['DECLflower_INSTANCE_Bounce'] === 'undefined') {
X3DJSON['Obj']['DECLflower_INSTANCE_Bounce'] = {};
}

if (typeof X3DJSON['Obj']['DECLflower_INSTANCE_Bounce']['ACTION']['translation'] === 'undefined') {
X3DJSON['Obj']['DECLflower_INSTANCE_Bounce']['ACTION']['translation'] = [];
}
X3DJSON['Obj']['DECLflower_INSTANCE_Bounce']['ACTION']['translation'].push(function(property, value) {
		if (property === 'translation') {
			X3DJSON.nodeUtil('DECLflower_INSTANCE_transform','translation',typeof X3DJSON['Obj']['DECLflower_INSTANCE_Bounce'].translation === "function" ? X3DJSON['Obj']['DECLflower_INSTANCE_Bounce'].translation() : X3DJSON['Obj']['DECLflower_INSTANCE_Bounce'].translation, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLflower_INSTANCE_transform','translation',typeof X3DJSON['Obj']['DECLflower_INSTANCE_Bounce'].translation === "function" ? X3DJSON['Obj']['DECLflower_INSTANCE_Bounce'].translation() : X3DJSON['Obj']['DECLflower_INSTANCE_Bounce'].translation, __eventTime);
			X3DJSON['Obj']['DECLflower_INSTANCE_Bounce'].set_fraction(X3DJSON.nodeUtil('DECLflower_INSTANCE_TourTime','cycleTime'), __eventTime);
			X3DJSON.nodeUtil('DECLflower_INSTANCE_transform','translation',typeof X3DJSON['Obj']['DECLflower_INSTANCE_Bounce'].translation === "function" ? X3DJSON['Obj']['DECLflower_INSTANCE_Bounce'].translation() : X3DJSON['Obj']['DECLflower_INSTANCE_Bounce'].translation, __eventTime);