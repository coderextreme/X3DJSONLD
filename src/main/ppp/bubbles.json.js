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

X3DJSON['Script']['RandomTourTime'] = function() {
	this.set_cycle = function (value) {
		this.proxy.cycle = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.cycle_changed = function () {
		var value = this.cycle;
		return value;
	};
	this.cycle = undefined;
	this.set_lastKey = function (value) {
		this.proxy.lastKey = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.lastKey_changed = function () {
		var value = this.lastKey;
		return value;
	};
	this.lastKey = new SFFloat(0);
	this.set_orientations = function (value) {
		this.proxy.orientations = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.orientations_changed = function () {
		var value = this.orientations;
		return value;
	};
	this.orientations = new MFRotation([new SFRotation ( 0 , 1 , 0 , 0 ),new SFRotation ( 0 , 1 , 0 , -1.57 ),new SFRotation ( 0 , 1 , 0 , 3.14 ),new SFRotation ( 0 , 1 , 0 , 1.57 ),new SFRotation ( 0 , 1 , 0 , 0 ),new SFRotation ( 1 , 0 , 0 , -1.57 ),new SFRotation ( 0 , 1 , 0 , 0 ),new SFRotation ( 1 , 0 , 0 , 1.57 ),new SFRotation ( 0 , 1 , 0 , 0 )]);
	this.set_positions = function (value) {
		this.proxy.positions = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.positions_changed = function () {
		var value = this.positions;
		return value;
	};
	this.positions = new MFVec3f([new SFVec3f ( 0 , 0 , 10 ),new SFVec3f ( -10 , 0 , 0 ),new SFVec3f ( 0 , 0 , -10 ),new SFVec3f ( 10 , 0 , 0 ),new SFVec3f ( 0 , 0 , 10 ),new SFVec3f ( 0 , 10 , 0 ),new SFVec3f ( 0 , 0 , 10 ),new SFVec3f ( 0 , -10 , 0 ),new SFVec3f ( 0 , 0 , 10 )]);
	this.set_position = function (value) {
		this.proxy.position = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.position_changed = function () {
		var value = this.position;
		return value;
	};
	this.position = undefined;
	this.set_orientation = function (value) {
		this.proxy.orientation = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.orientation_changed = function () {
		var value = this.orientation;
		return value;
	};
	this.orientation = undefined;
	this.set_orientation = function (value) {
		this.proxy.orientation = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.orientation_changed = function () {
		var value = this.orientation;
		return value;
	};
	this.orientation = undefined;
ecmascript: 
	this.set_cycle = function (value) { var ov = this.proxy.lastKey; do { this.proxy.lastKey = Math.round(Math.random()*(this.proxy.positions.length-1)); } while (this.proxy.lastKey === ov); var vc = this.proxy.lastKey; this.proxy.orientation_changed = new MFRotation(); this.proxy.orientation_changed[0] = new SFRotation(this.proxy.orientations[ov].x, this.proxy.orientations[ov].y, this.proxy.orientations[ov].z, this.proxy.orientations[ov].w); this.proxy.orientation_changed[1] = new SFRotation(this.proxy.orientations[vc].x, this.proxy.orientations[vc].y, this.proxy.orientations[vc].z, this.proxy.orientations[vc].w); this.proxy.position_changed = new MFVec3f(); this.proxy.position_changed[0] = new SFVec3f(this.proxy.positions[ov].x,this.proxy.positions[ov].y,this.proxy.positions[ov].z); this.proxy.position_changed[1] = new SFVec3f(this.proxy.positions[vc].x,this.proxy.positions[vc].y,this.proxy.positions[vc].z); // } };

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['RandomTourTime'] = new X3DJSON['Script']['RandomTourTime']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['RandomTourTime'] === 'undefined') {
X3DJSON['Obj']['RandomTourTime'] = {};
}

if (typeof X3DJSON['Obj']['RandomTourTime']['ACTION'] === 'undefined') {
X3DJSON['Obj']['RandomTourTime']['ACTION'] = {};
X3DJSON['Obj']['RandomTourTime'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['RandomTourTime']['ACTION'],X3DJSON['Obj']['RandomTourTime']);
}
if (typeof X3DJSON['Obj']['RandomTourTime'].initialize === "function") X3DJSON['Obj']['RandomTourTime'].initialize();
X3DJSON.nodeUtil('TourTime').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['RandomTourTime'].set_cycle(X3DJSON.nodeUtil('TourTime','cycleTime'), __eventTime);
}, false);
			X3DJSON['Obj']['RandomTourTime'].set_cycle(X3DJSON.nodeUtil('TourTime','cycleTime'), __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['RandomTourTime'] === 'undefined') {
X3DJSON['Obj']['RandomTourTime'] = {};
}

if (typeof X3DJSON['Obj']['RandomTourTime']['ACTION']['orientation'] === 'undefined') {
X3DJSON['Obj']['RandomTourTime']['ACTION']['orientation'] = [];
}
X3DJSON['Obj']['RandomTourTime']['ACTION']['orientation'].push(function(property, value) {
		if (property === 'orientation') {
			X3DJSON.nodeUtil('TourOrientation','keyValue',typeof X3DJSON['Obj']['RandomTourTime'].orientation_changed === "function" ? X3DJSON['Obj']['RandomTourTime'].orientation_changed() : X3DJSON['Obj']['RandomTourTime'].orientation, __eventTime);
		}
});
			X3DJSON.nodeUtil('TourOrientation','keyValue',typeof X3DJSON['Obj']['RandomTourTime'].orientation_changed === "function" ? X3DJSON['Obj']['RandomTourTime'].orientation_changed() : X3DJSON['Obj']['RandomTourTime'].orientation, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['RandomTourTime'] === 'undefined') {
X3DJSON['Obj']['RandomTourTime'] = {};
}

if (typeof X3DJSON['Obj']['RandomTourTime']['ACTION']['position'] === 'undefined') {
X3DJSON['Obj']['RandomTourTime']['ACTION']['position'] = [];
}
X3DJSON['Obj']['RandomTourTime']['ACTION']['position'].push(function(property, value) {
		if (property === 'position') {
			X3DJSON.nodeUtil('TourPosition','keyValue',typeof X3DJSON['Obj']['RandomTourTime'].position_changed === "function" ? X3DJSON['Obj']['RandomTourTime'].position_changed() : X3DJSON['Obj']['RandomTourTime'].position, __eventTime);
		}
});
			X3DJSON.nodeUtil('TourPosition','keyValue',typeof X3DJSON['Obj']['RandomTourTime'].position_changed === "function" ? X3DJSON['Obj']['RandomTourTime'].position_changed() : X3DJSON['Obj']['RandomTourTime'].position, __eventTime);
X3DJSON.nodeUtil('TourTime').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('TourOrientation').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('TourTime').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('TourPosition').addEventListener('outputchange', function(event) {
}, false);
			X3DJSON['Obj']['RandomTourTime'].set_cycle(X3DJSON.nodeUtil('TourTime','cycleTime'), __eventTime);
			X3DJSON.nodeUtil('TourOrientation','keyValue',typeof X3DJSON['Obj']['RandomTourTime'].orientation_changed === "function" ? X3DJSON['Obj']['RandomTourTime'].orientation_changed() : X3DJSON['Obj']['RandomTourTime'].orientation, __eventTime);
			X3DJSON.nodeUtil('TourPosition','keyValue',typeof X3DJSON['Obj']['RandomTourTime'].position_changed === "function" ? X3DJSON['Obj']['RandomTourTime'].position_changed() : X3DJSON['Obj']['RandomTourTime'].position, __eventTime);