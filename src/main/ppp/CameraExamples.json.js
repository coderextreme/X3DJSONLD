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
X3DJSON.nodeUtil('DECLCamera_Camera.SimpleShotsTest').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('CameraTimer.SimpleShots').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('TextTouchActive.SimpleShotsFilter').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('TextTouch.SimpleShots').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('TextTouch.SimpleShots').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('DECLCamera_Camera.AimPointTest').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('CameraTimer.AimPointTest').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('TextTouchActive.AimPointFilter').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('TextTouch.AimPointTest').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('TextTouch.AimPointTest').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('DECLCamera_Camera.SimpleShotsTest').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('DECLCamera_Camera.SimpleShotsTest').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('DECLCamera_Camera.AimPointTest').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('DECLCamera_Camera.AimPointTest').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('CameraShapeTouched').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('ViewFrustumToggle').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('BoxPath').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('BoxPath').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('BoxPath').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('BoxPath').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('BoxTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('DECLCamera_Camera.SimpleShotsTest').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('DECLCamera_Camera.AimPointTest').addEventListener('outputchange', function(event) {
}, false);
