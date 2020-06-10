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
if (typeof X3DJSON['Scene../data/extrusion.json'] === 'undefined') {
	X3DJSON['Scene../data/extrusion.json'] = {};
}

if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/extrusion.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/extrusion.json'] = {};
}

X3DJSON['Script']['Scene']['../data/extrusion.json']['MoveCylinder'] = function() {
	this.set_cycle = function (value) {
		try {
			this.proxy.cycle = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting cycle '+e);
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
		console.log('Problems setting cycle '+e);
		console.error('Problems setting cycle',e);
	}
	this.set_spine = function (value) {
		try {
			this.proxy.spine = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting spine '+e);
			console.error('Problems setting spine',e);
		}
	};
	this.spine_changed = function () {
		var value = this.spine;
		return value;
	};
	try {
		this.spine = new MFVec3f([new SFVec3f ( -50 , -50 , 0 ),new SFVec3f ( 50 , 50 , 0 )]);
	} catch (e) {
		console.log('Problems setting spine '+e);
		console.error('Problems setting spine',e);
	}


ecmascript:

               
	this.set_cycle = function (value) {
                        console.error(value);
                        var endA = new SFVec3f(this.proxy.spine[0].x*Math.random()*2, this.proxy.spine[0].y*Math.random()*2, this.proxy.spine[0].z*Math.random()*2);
                        var endB = new SFVec3f(this.proxy.spine[1].x*Math.random()*2, this.proxy.spine[1].y*Math.random()*2, this.proxy.spine[1].z*Math.random()*2);
		        this.proxy.spine = new MFVec3f([endA, endB]);
                }

;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/extrusion.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/extrusion.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/extrusion.json']['MoveCylinder'] = new X3DJSON['Script']['Scene']['../data/extrusion.json']['MoveCylinder']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/extrusion.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/extrusion.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/extrusion.json']['MoveCylinder'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/extrusion.json']['MoveCylinder'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/extrusion.json']['MoveCylinder']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/extrusion.json']['MoveCylinder']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/extrusion.json']['MoveCylinder'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/extrusion.json']['MoveCylinder']['ACTION'],X3DJSON['Obj']['Scene']['../data/extrusion.json']['MoveCylinder']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/extrusion.json']['MoveCylinder'].initialize === "function") X3DJSON['Obj']['Scene']['../data/extrusion.json']['MoveCylinder'].initialize();
    if (X3DJSON.nodeUtil('Scene','TourTime')) {
X3DJSON.nodeUtil('Scene','TourTime').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/extrusion.json']['MoveCylinder'].set_cycle(X3DJSON.nodeUtil('Scene','TourTime','cycleTime'), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/extrusion.json']['MoveCylinder'].set_cycle(X3DJSON.nodeUtil('Scene','TourTime','cycleTime'), __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/extrusion.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/extrusion.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/extrusion.json']['MoveCylinder'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/extrusion.json']['MoveCylinder'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/extrusion.json']['MoveCylinder']['ACTION']['spine'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/extrusion.json']['MoveCylinder']['ACTION']['spine'] = [];
}
X3DJSON['Obj']['Scene']['../data/extrusion.json']['MoveCylinder']['ACTION']['spine'].push(function(property, value) {
		if (property === 'spine') {
			X3DJSON.nodeUtil('Scene','extrusion','spine',typeof X3DJSON['Obj']['Scene']['../data/extrusion.json']['MoveCylinder'].spine_changed === "function" ? X3DJSON['Obj']['Scene']['../data/extrusion.json']['MoveCylinder'].spine_changed() : X3DJSON['Obj']['Scene']['../data/extrusion.json']['MoveCylinder'].spine, __eventTime);
		}
});
			X3DJSON.nodeUtil('Scene','extrusion','spine',typeof X3DJSON['Obj']['Scene']['../data/extrusion.json']['MoveCylinder'].spine_changed === "function" ? X3DJSON['Obj']['Scene']['../data/extrusion.json']['MoveCylinder'].spine_changed() : X3DJSON['Obj']['Scene']['../data/extrusion.json']['MoveCylinder'].spine, __eventTime);
			X3DJSON['Obj']['Scene']['../data/extrusion.json']['MoveCylinder'].set_cycle(X3DJSON.nodeUtil('Scene','TourTime','cycleTime'), __eventTime);
			X3DJSON.nodeUtil('Scene','extrusion','spine',typeof X3DJSON['Obj']['Scene']['../data/extrusion.json']['MoveCylinder'].spine_changed === "function" ? X3DJSON['Obj']['Scene']['../data/extrusion.json']['MoveCylinder'].spine_changed() : X3DJSON['Obj']['Scene']['../data/extrusion.json']['MoveCylinder'].spine, __eventTime);