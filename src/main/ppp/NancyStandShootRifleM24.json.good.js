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
if (typeof X3DJSON['Scene../data/NancyStandShootRifleM24.json'] === 'undefined') {
	X3DJSON['Scene../data/NancyStandShootRifleM24.json'] = {};
}

if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/NancyStandShootRifleM24.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/NancyStandShootRifleM24.json'] = {};
}

X3DJSON['Script']['Scene']['../data/NancyStandShootRifleM24.json']['FireScript'] = function() {
	this.set_fire = function (value) {
		try {
			this.proxy.fire = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting fire '+e);
			console.error('Problems setting fire',e);
		}
	};
	this.fire_changed = function () {
		var value = this.fire;
		return value;
	};
	try {
		this.fire = new SFBool();
	} catch (e) {
		console.log('Problems setting fire '+e);
		console.error('Problems setting fire',e);
	}
	this.set_enabled = function (value) {
		try {
			this.proxy.enabled = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting enabled '+e);
			console.error('Problems setting enabled',e);
		}
	};
	this.enabled_changed = function () {
		var value = this.enabled;
		return value;
	};
	try {
		this.enabled = new SFBool();
	} catch (e) {
		console.log('Problems setting enabled '+e);
		console.error('Problems setting enabled',e);
	}


ecmascript:

	this.enabled = function (value, timeStamp)
{
        //print ('this.proxy.enabled value =' + value);
        if (value == true)
           this.proxy.fire = value;
}

;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyStandShootRifleM24.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyStandShootRifleM24.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/NancyStandShootRifleM24.json']['FireScript'] = new X3DJSON['Script']['Scene']['../data/NancyStandShootRifleM24.json']['FireScript']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyStandShootRifleM24.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyStandShootRifleM24.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyStandShootRifleM24.json']['FireScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyStandShootRifleM24.json']['FireScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/NancyStandShootRifleM24.json']['FireScript']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyStandShootRifleM24.json']['FireScript']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/NancyStandShootRifleM24.json']['FireScript'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/NancyStandShootRifleM24.json']['FireScript']['ACTION'],X3DJSON['Obj']['Scene']['../data/NancyStandShootRifleM24.json']['FireScript']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyStandShootRifleM24.json']['FireScript'].initialize === "function") X3DJSON['Obj']['Scene']['../data/NancyStandShootRifleM24.json']['FireScript'].initialize();
    if (X3DJSON.nodeUtil('Scene','FireTouchSensor')) {
X3DJSON.nodeUtil('Scene','FireTouchSensor').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/NancyStandShootRifleM24.json']['FireScript'].enabled(X3DJSON.nodeUtil('Scene','FireTouchSensor','isOver'), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/NancyStandShootRifleM24.json']['FireScript'].enabled(X3DJSON.nodeUtil('Scene','FireTouchSensor','isOver'), __eventTime);
    if (X3DJSON.nodeUtil('Scene','FireTouchSensor')) {
X3DJSON.nodeUtil('Scene','FireTouchSensor').addEventListener('outputchange', function(event) {
}, false);
}
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyStandShootRifleM24.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyStandShootRifleM24.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyStandShootRifleM24.json']['FireScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyStandShootRifleM24.json']['FireScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/NancyStandShootRifleM24.json']['FireScript']['ACTION']['fire'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyStandShootRifleM24.json']['FireScript']['ACTION']['fire'] = [];
}
X3DJSON['Obj']['Scene']['../data/NancyStandShootRifleM24.json']['FireScript']['ACTION']['fire'].push(function(property, value) {
		if (property === 'fire') {
			X3DJSON.nodeUtil('Scene','DECLRifleM24_rifleM24','trigger',typeof X3DJSON['Obj']['Scene']['../data/NancyStandShootRifleM24.json']['FireScript'].fire === "function" ? X3DJSON['Obj']['Scene']['../data/NancyStandShootRifleM24.json']['FireScript'].fire() : X3DJSON['Obj']['Scene']['../data/NancyStandShootRifleM24.json']['FireScript'].fire, __eventTime);
		}
});
			X3DJSON.nodeUtil('Scene','DECLRifleM24_rifleM24','trigger',typeof X3DJSON['Obj']['Scene']['../data/NancyStandShootRifleM24.json']['FireScript'].fire === "function" ? X3DJSON['Obj']['Scene']['../data/NancyStandShootRifleM24.json']['FireScript'].fire() : X3DJSON['Obj']['Scene']['../data/NancyStandShootRifleM24.json']['FireScript'].fire, __eventTime);
    if (X3DJSON.nodeUtil('Scene','TriggerProximitySensor')) {
X3DJSON.nodeUtil('Scene','TriggerProximitySensor').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','TIMER')) {
X3DJSON.nodeUtil('Scene','TIMER').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','TIMER')) {
X3DJSON.nodeUtil('Scene','TIMER').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','TIMER')) {
X3DJSON.nodeUtil('Scene','TIMER').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','TIMER')) {
X3DJSON.nodeUtil('Scene','TIMER').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','TIMER')) {
X3DJSON.nodeUtil('Scene','TIMER').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','TIMER')) {
X3DJSON.nodeUtil('Scene','TIMER').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','TIMER')) {
X3DJSON.nodeUtil('Scene','TIMER').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','TIMER')) {
X3DJSON.nodeUtil('Scene','TIMER').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','TIMER')) {
X3DJSON.nodeUtil('Scene','TIMER').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','TIMER')) {
X3DJSON.nodeUtil('Scene','TIMER').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','TIMER')) {
X3DJSON.nodeUtil('Scene','TIMER').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','TIMER')) {
X3DJSON.nodeUtil('Scene','TIMER').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','TIMER')) {
X3DJSON.nodeUtil('Scene','TIMER').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','TIMER')) {
X3DJSON.nodeUtil('Scene','TIMER').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','TIMER')) {
X3DJSON.nodeUtil('Scene','TIMER').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','TIMER')) {
X3DJSON.nodeUtil('Scene','TIMER').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','TIMER')) {
X3DJSON.nodeUtil('Scene','TIMER').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','TIMER')) {
X3DJSON.nodeUtil('Scene','TIMER').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','TIMER')) {
X3DJSON.nodeUtil('Scene','TIMER').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','R_ANKLE_ANIMATOR')) {
X3DJSON.nodeUtil('Scene','R_ANKLE_ANIMATOR').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','R_KNEE_ANIMATOR')) {
X3DJSON.nodeUtil('Scene','R_KNEE_ANIMATOR').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','R_HIP_ANIMATOR')) {
X3DJSON.nodeUtil('Scene','R_HIP_ANIMATOR').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','L_ANKLE_ANIMATOR')) {
X3DJSON.nodeUtil('Scene','L_ANKLE_ANIMATOR').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','L_KNEE_ANIMATOR')) {
X3DJSON.nodeUtil('Scene','L_KNEE_ANIMATOR').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','L_HIP_ANIMATOR')) {
X3DJSON.nodeUtil('Scene','L_HIP_ANIMATOR').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','VL5_ANIMATOR')) {
X3DJSON.nodeUtil('Scene','VL5_ANIMATOR').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','R_WRIST_ANIMATOR')) {
X3DJSON.nodeUtil('Scene','R_WRIST_ANIMATOR').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','R_ELBOW_ANIMATOR')) {
X3DJSON.nodeUtil('Scene','R_ELBOW_ANIMATOR').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','R_SHOULDER_ANIMATOR')) {
X3DJSON.nodeUtil('Scene','R_SHOULDER_ANIMATOR').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','L_WRIST_ANIMATOR')) {
X3DJSON.nodeUtil('Scene','L_WRIST_ANIMATOR').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','L_ELBOW_ANIMATOR')) {
X3DJSON.nodeUtil('Scene','L_ELBOW_ANIMATOR').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','L_SHOULDER_ANIMATOR')) {
X3DJSON.nodeUtil('Scene','L_SHOULDER_ANIMATOR').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','SKULLBASE_ANIMATOR')) {
X3DJSON.nodeUtil('Scene','SKULLBASE_ANIMATOR').addEventListener('outputchange', function(event) {
}, false);
}
			X3DJSON['Obj']['Scene']['../data/NancyStandShootRifleM24.json']['FireScript'].enabled(X3DJSON.nodeUtil('Scene','FireTouchSensor','isOver'), __eventTime);
			X3DJSON.nodeUtil('Scene','DECLRifleM24_rifleM24','trigger',typeof X3DJSON['Obj']['Scene']['../data/NancyStandShootRifleM24.json']['FireScript'].fire === "function" ? X3DJSON['Obj']['Scene']['../data/NancyStandShootRifleM24.json']['FireScript'].fire() : X3DJSON['Obj']['Scene']['../data/NancyStandShootRifleM24.json']['FireScript'].fire, __eventTime);