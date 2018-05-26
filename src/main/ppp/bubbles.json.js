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
X3DJSON.nodeUtil = function(selector, node, field, value) {
		if (typeof selector === 'undefined') {
			selector = '';
		} else {
			selector = selector+' ';
		}
		selector = selector+"[DEF='"+node+"']";
		var element = document.querySelector(selector);
		if (element === null) {
			console.error('unDEFed node', node, selector);
		} else if (arguments.length > 3) {
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
		} else if (arguments.length > 2) {
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
		} else if (arguments.length > 0) {
			return $(selector)[0];
		} else {
			return;
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
if (typeof X3DJSON['Scene../data/bubbles.json'] === 'undefined') {
	X3DJSON['Scene../data/bubbles.json'] = {};
}

if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/bubbles.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/bubbles.json'] = {};
}

X3DJSON['Script']['Scene']['../data/bubbles.json']['RandomTourTime'] = function() {
	this.set_cycle = function (value) {
		try {
			this.proxy.cycle = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			alert('Problems setting cycle '+e);
			console.error('Problems setting cycle',e);
		}
	};
	this.cycle_changed = function () {
		var value = this.cycle;
		return value;
	};
	try {
		this.cycle = undefined;
	} catch (e) {
		alert('Problems setting cycle '+e);
		console.error('Problems setting cycle',e);
	}
	this.set_lastKey = function (value) {
		try {
			this.proxy.lastKey = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			alert('Problems setting lastKey '+e);
			console.error('Problems setting lastKey',e);
		}
	};
	this.lastKey_changed = function () {
		var value = this.lastKey;
		return value;
	};
	try {
		this.lastKey = new SFFloat(0);
	} catch (e) {
		alert('Problems setting lastKey '+e);
		console.error('Problems setting lastKey',e);
	}
	this.set_orientations = function (value) {
		try {
			this.proxy.orientations = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			alert('Problems setting orientations '+e);
			console.error('Problems setting orientations',e);
		}
	};
	this.orientations_changed = function () {
		var value = this.orientations;
		return value;
	};
	try {
		this.orientations = new MFRotation([new SFRotation ( 0 , 1 , 0 , 0 ),new SFRotation ( 0 , 1 , 0 , -1.57 ),new SFRotation ( 0 , 1 , 0 , 3.14 ),new SFRotation ( 0 , 1 , 0 , 1.57 ),new SFRotation ( 0 , 1 , 0 , 0 ),new SFRotation ( 1 , 0 , 0 , -1.57 ),new SFRotation ( 0 , 1 , 0 , 0 ),new SFRotation ( 1 , 0 , 0 , 1.57 ),new SFRotation ( 0 , 1 , 0 , 0 )]);
	} catch (e) {
		alert('Problems setting orientations '+e);
		console.error('Problems setting orientations',e);
	}
	this.set_positions = function (value) {
		try {
			this.proxy.positions = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			alert('Problems setting positions '+e);
			console.error('Problems setting positions',e);
		}
	};
	this.positions_changed = function () {
		var value = this.positions;
		return value;
	};
	try {
		this.positions = new MFVec3f([new SFVec3f ( 0 , 0 , 10 ),new SFVec3f ( -10 , 0 , 0 ),new SFVec3f ( 0 , 0 , -10 ),new SFVec3f ( 10 , 0 , 0 ),new SFVec3f ( 0 , 0 , 10 ),new SFVec3f ( 0 , 10 , 0 ),new SFVec3f ( 0 , 0 , 10 ),new SFVec3f ( 0 , -10 , 0 ),new SFVec3f ( 0 , 0 , 10 )]);
	} catch (e) {
		alert('Problems setting positions '+e);
		console.error('Problems setting positions',e);
	}
	this.set_position = function (value) {
		try {
			this.proxy.position = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			alert('Problems setting position '+e);
			console.error('Problems setting position',e);
		}
	};
	this.position_changed = function () {
		var value = this.position;
		return value;
	};
	try {
		this.position = undefined;
	} catch (e) {
		alert('Problems setting position '+e);
		console.error('Problems setting position',e);
	}
	this.set_orientation = function (value) {
		try {
			this.proxy.orientation = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			alert('Problems setting orientation '+e);
			console.error('Problems setting orientation',e);
		}
	};
	this.orientation_changed = function () {
		var value = this.orientation;
		return value;
	};
	try {
		this.orientation = undefined;
	} catch (e) {
		alert('Problems setting orientation '+e);
		console.error('Problems setting orientation',e);
	}
	this.set_orientation = function (value) {
		try {
			this.proxy.orientation = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			alert('Problems setting orientation '+e);
			console.error('Problems setting orientation',e);
		}
	};
	this.orientation_changed = function () {
		var value = this.orientation;
		return value;
	};
	try {
		this.orientation = undefined;
	} catch (e) {
		alert('Problems setting orientation '+e);
		console.error('Problems setting orientation',e);
	}

	    ecmascript:
              
	this.set_cycle = function (value) {
	       	   try {
                        var ov = this.proxy.lastKey;
                        do {
                            this.proxy.lastKey = Math.round(Math.random()*(this.proxy.positions.length-1));
                        } while (this.proxy.lastKey === ov);
                        var vc = this.proxy.lastKey;

                        this.proxy.position_changed = new MFVec3f();
                        this.proxy.position_changed[0] = new SFVec3f(this.proxy.positions[ov].x,this.proxy.positions[ov].y,this.proxy.positions[ov].z);
                        this.proxy.position_changed[1] = new SFVec3f(this.proxy.positions[vc].x,this.proxy.positions[vc].y,this.proxy.positions[vc].z);

                        this.proxy.orientation_changed = new MFRotation();
                        this.proxy.orientation_changed[0] = new SFRotation(this.proxy.orientations[ov].x, this.proxy.orientations[ov].y, this.proxy.orientations[ov].z, this.proxy.orientations[ov].w);
                        this.proxy.orientation_changed[1] = new SFRotation(this.proxy.orientations[vc].x, this.proxy.orientations[vc].y, this.proxy.orientations[vc].z, this.proxy.orientations[vc].w);
		   } catch (e) {
		   	if (typeof alert === 'function') {
				alert(e);
			}
		   }
               };

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bubbles.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubbles.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/bubbles.json']['RandomTourTime'] = new X3DJSON['Script']['Scene']['../data/bubbles.json']['RandomTourTime']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bubbles.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubbles.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bubbles.json']['RandomTourTime'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubbles.json']['RandomTourTime'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/bubbles.json']['RandomTourTime']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubbles.json']['RandomTourTime']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/bubbles.json']['RandomTourTime'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/bubbles.json']['RandomTourTime']['ACTION'],X3DJSON['Obj']['Scene']['../data/bubbles.json']['RandomTourTime']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/bubbles.json']['RandomTourTime'].initialize === "function") X3DJSON['Obj']['Scene']['../data/bubbles.json']['RandomTourTime'].initialize();
X3DJSON.nodeUtil('Scene','TourTime').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/bubbles.json']['RandomTourTime'].set_cycle(X3DJSON.nodeUtil('Scene','TourTime','cycleTime'), __eventTime);
}, false);
			X3DJSON['Obj']['Scene']['../data/bubbles.json']['RandomTourTime'].set_cycle(X3DJSON.nodeUtil('Scene','TourTime','cycleTime'), __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bubbles.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubbles.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bubbles.json']['RandomTourTime'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubbles.json']['RandomTourTime'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/bubbles.json']['RandomTourTime']['ACTION']['orientation'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubbles.json']['RandomTourTime']['ACTION']['orientation'] = [];
}
X3DJSON['Obj']['Scene']['../data/bubbles.json']['RandomTourTime']['ACTION']['orientation'].push(function(property, value) {
		if (property === 'orientation') {
			X3DJSON.nodeUtil('Scene','TourOrientation','keyValue',typeof X3DJSON['Obj']['Scene']['../data/bubbles.json']['RandomTourTime'].orientation_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bubbles.json']['RandomTourTime'].orientation_changed() : X3DJSON['Obj']['Scene']['../data/bubbles.json']['RandomTourTime'].orientation, __eventTime);
		}
});
			X3DJSON.nodeUtil('Scene','TourOrientation','keyValue',typeof X3DJSON['Obj']['Scene']['../data/bubbles.json']['RandomTourTime'].orientation_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bubbles.json']['RandomTourTime'].orientation_changed() : X3DJSON['Obj']['Scene']['../data/bubbles.json']['RandomTourTime'].orientation, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bubbles.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubbles.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bubbles.json']['RandomTourTime'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubbles.json']['RandomTourTime'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/bubbles.json']['RandomTourTime']['ACTION']['position'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubbles.json']['RandomTourTime']['ACTION']['position'] = [];
}
X3DJSON['Obj']['Scene']['../data/bubbles.json']['RandomTourTime']['ACTION']['position'].push(function(property, value) {
		if (property === 'position') {
			X3DJSON.nodeUtil('Scene','TourPosition','keyValue',typeof X3DJSON['Obj']['Scene']['../data/bubbles.json']['RandomTourTime'].position_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bubbles.json']['RandomTourTime'].position_changed() : X3DJSON['Obj']['Scene']['../data/bubbles.json']['RandomTourTime'].position, __eventTime);
		}
});
			X3DJSON.nodeUtil('Scene','TourPosition','keyValue',typeof X3DJSON['Obj']['Scene']['../data/bubbles.json']['RandomTourTime'].position_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bubbles.json']['RandomTourTime'].position_changed() : X3DJSON['Obj']['Scene']['../data/bubbles.json']['RandomTourTime'].position, __eventTime);
X3DJSON.nodeUtil('Scene','TourTime').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','TourOrientation').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','TourTime').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','TourPosition').addEventListener('outputchange', function(event) {
}, false);
			X3DJSON['Obj']['Scene']['../data/bubbles.json']['RandomTourTime'].set_cycle(X3DJSON.nodeUtil('Scene','TourTime','cycleTime'), __eventTime);
			X3DJSON.nodeUtil('Scene','TourOrientation','keyValue',typeof X3DJSON['Obj']['Scene']['../data/bubbles.json']['RandomTourTime'].orientation_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bubbles.json']['RandomTourTime'].orientation_changed() : X3DJSON['Obj']['Scene']['../data/bubbles.json']['RandomTourTime'].orientation, __eventTime);
			X3DJSON.nodeUtil('Scene','TourPosition','keyValue',typeof X3DJSON['Obj']['Scene']['../data/bubbles.json']['RandomTourTime'].position_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bubbles.json']['RandomTourTime'].position_changed() : X3DJSON['Obj']['Scene']['../data/bubbles.json']['RandomTourTime'].position, __eventTime);