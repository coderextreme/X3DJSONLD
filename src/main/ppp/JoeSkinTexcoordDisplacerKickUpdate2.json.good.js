var x3dom = require('../node/fields.js');
if (typeof X3DJSON === 'undefined') {
	var X3DJSON = {};
}
if (typeof __eventTime === 'undefined') {
	var __eventTime = 0;
}
if (typeof x3dom !== 'undefined') {
    var MFBool = x3dom.fields.MFBoolean;
    var MFColor = x3dom.fields.MFColor;
    var MFColorRGBA = x3dom.fields.MFColorRGBA;
    var MFFloat = x3dom.fields.MFFloat;
    var MFInt32 = x3dom.fields.MFInt32;
    var MFNode = x3dom.fields.MFNode;
    var MFRotation = x3dom.fields.MFRotation;
    var MFString = x3dom.fields.MFString;
    var MFVec2f = x3dom.fields.MFVec2f;
    var MFVec3f = x3dom.fields.MFVec3f;
    var Quaternion = x3dom.fields.Quaternion;
    var SFColor = x3dom.fields.SFColor;
    var SFColorRGBA = x3dom.fields.SFColorRGBA;
    var SFImage = x3dom.fields.SFImage;
    var SFMatrix4f = x3dom.fields.SFMatrix4f;
    var SFNode = x3dom.fields.SFNode;
    var SFRotation = x3dom.fields.SFRotation;
    var SFVec2f = x3dom.fields.SFVec2f;
    var SFVec3f = x3dom.fields.SFVec3f;
    var SFVec4f = x3dom.fields.SFVec4f;
} else {
    var SFVec3f = function() { return Array.prototype.slice.call(arguments, 0); };
}
var SFString = String;
var SFTime = Number;
var SFDouble = Number;
var SFFloat = Number;
var SFInt32 = Number;
var SFBool = Boolean;
var MFDouble = function() { return Array.prototype.slice.call(arguments, 0); };
var MFImage = function() { return Array.prototype.slice.call(arguments, 0); };
var MFMatrix3d = function() { return Array.prototype.slice.call(arguments, 0); };
var MFMatrix3f = function() { return Array.prototype.slice.call(arguments, 0); };
var MFMatrix4d = function() { return Array.prototype.slice.call(arguments, 0); };
var MFMatrix4f = function() { return Array.prototype.slice.call(arguments, 0); };
var MFTime = function() { return Array.prototype.slice.call(arguments, 0); };
var MFVec2d = function() { return Array.prototype.slice.call(arguments, 0); };
var MFVec3d = function() { return Array.prototype.slice.call(arguments, 0); };
var MFVec4d = function() { return Array.prototype.slice.call(arguments, 0); };
var MFVec4f = function() { return Array.prototype.slice.call(arguments, 0); };
var SFMatrix3d = function() { return Array.prototype.slice.call(arguments, 0); };
var SFMatrix3f = function() { return Array.prototype.slice.call(arguments, 0); };
var SFMatrix4d = function() { return Array.prototype.slice.call(arguments, 0); };
var SFVec2d = function() { return Array.prototype.slice.call(arguments, 0); };
var SFVec3d = function() { return Array.prototype.slice.call(arguments, 0); };
var SFVec4d = function() { return Array.prototype.slice.call(arguments, 0); };
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
			selector = "";
		} else {
			selector = selector+" ";
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
if (typeof X3DJSON['Scene../data/JoeSkinTexcoordDisplacerKickUpdate2.json'] === 'undefined') {
	X3DJSON['Scene../data/JoeSkinTexcoordDisplacerKickUpdate2.json'] = {};
}

    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","HumanoidRootRotInterp")) {
X3DJSON.nodeUtil("Scene","HumanoidRootRotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","HumanoidRootTransInterp")) {
X3DJSON.nodeUtil("Scene","HumanoidRootTransInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","sacroiliacRotInterp")) {
X3DJSON.nodeUtil("Scene","sacroiliacRotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_hipRotInterp")) {
X3DJSON.nodeUtil("Scene","l_hipRotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_kneeRotInterp")) {
X3DJSON.nodeUtil("Scene","l_kneeRotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_ankleRotInterp")) {
X3DJSON.nodeUtil("Scene","l_ankleRotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_subtalarRotInterp")) {
X3DJSON.nodeUtil("Scene","l_subtalarRotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_midtarsalRotInterp")) {
X3DJSON.nodeUtil("Scene","l_midtarsalRotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_metatarsalRotInterp")) {
X3DJSON.nodeUtil("Scene","l_metatarsalRotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_hipRotInterp")) {
X3DJSON.nodeUtil("Scene","r_hipRotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_kneeRotInterp")) {
X3DJSON.nodeUtil("Scene","r_kneeRotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_ankleRotInterp")) {
X3DJSON.nodeUtil("Scene","r_ankleRotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_subtalarRotInterp")) {
X3DJSON.nodeUtil("Scene","r_subtalarRotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_midtarsalRotInterp")) {
X3DJSON.nodeUtil("Scene","r_midtarsalRotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_metatarsalRotInterp")) {
X3DJSON.nodeUtil("Scene","r_metatarsalRotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vl5RotInterp")) {
X3DJSON.nodeUtil("Scene","vl5RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vl4RotInterp")) {
X3DJSON.nodeUtil("Scene","vl4RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vl3RotInterp")) {
X3DJSON.nodeUtil("Scene","vl3RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vl2RotInterp")) {
X3DJSON.nodeUtil("Scene","vl2RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vl1RotInterp")) {
X3DJSON.nodeUtil("Scene","vl1RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vt12RotInterp")) {
X3DJSON.nodeUtil("Scene","vt12RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vt11RotInterp")) {
X3DJSON.nodeUtil("Scene","vt11RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vt10RotInterp")) {
X3DJSON.nodeUtil("Scene","vt10RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vt9RotInterp")) {
X3DJSON.nodeUtil("Scene","vt9RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vt8RotInterp")) {
X3DJSON.nodeUtil("Scene","vt8RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vt7RotInterp")) {
X3DJSON.nodeUtil("Scene","vt7RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vt6RotInterp")) {
X3DJSON.nodeUtil("Scene","vt6RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vt5RotInterp")) {
X3DJSON.nodeUtil("Scene","vt5RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vt4RotInterp")) {
X3DJSON.nodeUtil("Scene","vt4RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vt3RotInterp")) {
X3DJSON.nodeUtil("Scene","vt3RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vt2RotInterp")) {
X3DJSON.nodeUtil("Scene","vt2RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vt1RotInterp")) {
X3DJSON.nodeUtil("Scene","vt1RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vc7RotInterp")) {
X3DJSON.nodeUtil("Scene","vc7RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vc6RotInterp")) {
X3DJSON.nodeUtil("Scene","vc6RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vc5RotInterp")) {
X3DJSON.nodeUtil("Scene","vc5RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vc4RotInterp")) {
X3DJSON.nodeUtil("Scene","vc4RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vc3RotInterp")) {
X3DJSON.nodeUtil("Scene","vc3RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vc2RotInterp")) {
X3DJSON.nodeUtil("Scene","vc2RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vc1RotInterp")) {
X3DJSON.nodeUtil("Scene","vc1RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","skullbaseRotInterp")) {
X3DJSON.nodeUtil("Scene","skullbaseRotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_eyelid_jointRotInterp")) {
X3DJSON.nodeUtil("Scene","l_eyelid_jointRotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_eyeball_jointRotInterp")) {
X3DJSON.nodeUtil("Scene","l_eyeball_jointRotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_eyebrow_jointRotInterp")) {
X3DJSON.nodeUtil("Scene","l_eyebrow_jointRotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_eyelid_jointRotInterp")) {
X3DJSON.nodeUtil("Scene","r_eyelid_jointRotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_eyeball_jointRotInterp")) {
X3DJSON.nodeUtil("Scene","r_eyeball_jointRotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_eyebrow_jointRotInterp")) {
X3DJSON.nodeUtil("Scene","r_eyebrow_jointRotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","temporomandibularRotInterp")) {
X3DJSON.nodeUtil("Scene","temporomandibularRotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_sternoclavicularRotInterp")) {
X3DJSON.nodeUtil("Scene","l_sternoclavicularRotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_acromioclavicularRotInterp")) {
X3DJSON.nodeUtil("Scene","l_acromioclavicularRotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_shoulderRotInterp")) {
X3DJSON.nodeUtil("Scene","l_shoulderRotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_elbowRotInterp")) {
X3DJSON.nodeUtil("Scene","l_elbowRotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_wristRotInterp")) {
X3DJSON.nodeUtil("Scene","l_wristRotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_thumb1RotInterp")) {
X3DJSON.nodeUtil("Scene","l_thumb1RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_thumb2RotInterp")) {
X3DJSON.nodeUtil("Scene","l_thumb2RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_thumb3RotInterp")) {
X3DJSON.nodeUtil("Scene","l_thumb3RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_index0RotInterp")) {
X3DJSON.nodeUtil("Scene","l_index0RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_index1RotInterp")) {
X3DJSON.nodeUtil("Scene","l_index1RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_index2RotInterp")) {
X3DJSON.nodeUtil("Scene","l_index2RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_index3RotInterp")) {
X3DJSON.nodeUtil("Scene","l_index3RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_middle0RotInterp")) {
X3DJSON.nodeUtil("Scene","l_middle0RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_middle1RotInterp")) {
X3DJSON.nodeUtil("Scene","l_middle1RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_middle2RotInterp")) {
X3DJSON.nodeUtil("Scene","l_middle2RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_middle3RotInterp")) {
X3DJSON.nodeUtil("Scene","l_middle3RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_ring0RotInterp")) {
X3DJSON.nodeUtil("Scene","l_ring0RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_ring1RotInterp")) {
X3DJSON.nodeUtil("Scene","l_ring1RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_ring2RotInterp")) {
X3DJSON.nodeUtil("Scene","l_ring2RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_ring3RotInterp")) {
X3DJSON.nodeUtil("Scene","l_ring3RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_pinky0RotInterp")) {
X3DJSON.nodeUtil("Scene","l_pinky0RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_pinky1RotInterp")) {
X3DJSON.nodeUtil("Scene","l_pinky1RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_pinky2RotInterp")) {
X3DJSON.nodeUtil("Scene","l_pinky2RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_pinky3RotInterp")) {
X3DJSON.nodeUtil("Scene","l_pinky3RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_sternoclavicularRotInterp")) {
X3DJSON.nodeUtil("Scene","r_sternoclavicularRotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_acromioclavicularRotInterp")) {
X3DJSON.nodeUtil("Scene","r_acromioclavicularRotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_shoulderRotInterp")) {
X3DJSON.nodeUtil("Scene","r_shoulderRotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_elbowRotInterp")) {
X3DJSON.nodeUtil("Scene","r_elbowRotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_wristRotInterp")) {
X3DJSON.nodeUtil("Scene","r_wristRotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_thumb1RotInterp")) {
X3DJSON.nodeUtil("Scene","r_thumb1RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_thumb2RotInterp")) {
X3DJSON.nodeUtil("Scene","r_thumb2RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_thumb3RotInterp")) {
X3DJSON.nodeUtil("Scene","r_thumb3RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_index0RotInterp")) {
X3DJSON.nodeUtil("Scene","r_index0RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_index1RotInterp")) {
X3DJSON.nodeUtil("Scene","r_index1RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_index2RotInterp")) {
X3DJSON.nodeUtil("Scene","r_index2RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_index3RotInterp")) {
X3DJSON.nodeUtil("Scene","r_index3RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_middle0RotInterp")) {
X3DJSON.nodeUtil("Scene","r_middle0RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_middle1RotInterp")) {
X3DJSON.nodeUtil("Scene","r_middle1RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_middle2RotInterp")) {
X3DJSON.nodeUtil("Scene","r_middle2RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_middle3RotInterp")) {
X3DJSON.nodeUtil("Scene","r_middle3RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_ring0RotInterp")) {
X3DJSON.nodeUtil("Scene","r_ring0RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_ring1RotInterp")) {
X3DJSON.nodeUtil("Scene","r_ring1RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_ring2RotInterp")) {
X3DJSON.nodeUtil("Scene","r_ring2RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_ring3RotInterp")) {
X3DJSON.nodeUtil("Scene","r_ring3RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_pinky0RotInterp")) {
X3DJSON.nodeUtil("Scene","r_pinky0RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_pinky1RotInterp")) {
X3DJSON.nodeUtil("Scene","r_pinky1RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_pinky2RotInterp")) {
X3DJSON.nodeUtil("Scene","r_pinky2RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_pinky3RotInterp")) {
X3DJSON.nodeUtil("Scene","r_pinky3RotInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","skull_tipTest")) {
X3DJSON.nodeUtil("Scene","skull_tipTest").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","skinTexTransTest")) {
X3DJSON.nodeUtil("Scene","skinTexTransTest").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","ballTransInterp")) {
X3DJSON.nodeUtil("Scene","ballTransInterp").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","ballRotInterp")) {
X3DJSON.nodeUtil("Scene","ballRotInterp").addEventListener('outputchange', function(event) {
}, false);
}
