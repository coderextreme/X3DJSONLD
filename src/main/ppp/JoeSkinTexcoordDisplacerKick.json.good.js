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
if (typeof X3DJSON['Scene../data/JoeSkinTexcoordDisplacerKick.json'] === 'undefined') {
	X3DJSON['Scene../data/JoeSkinTexcoordDisplacerKick.json'] = {};
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
    if (X3DJSON.nodeUtil("Scene","HumanoidRoot_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","HumanoidRoot_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","HumanoidRoot_TranslationInterpolator")) {
X3DJSON.nodeUtil("Scene","HumanoidRoot_TranslationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","sacroiliac_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","sacroiliac_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_hip_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","l_hip_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_knee_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","l_knee_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_ankle_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","l_ankle_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_subtalar_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","l_subtalar_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_midtarsal_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","l_midtarsal_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_metatarsal_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","l_metatarsal_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_hip_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","r_hip_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_knee_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","r_knee_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_ankle_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","r_ankle_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_subtalar_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","r_subtalar_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_midtarsal_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","r_midtarsal_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_metatarsal_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","r_metatarsal_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vl5_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","vl5_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vl4_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","vl4_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vl3_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","vl3_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vl2_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","vl2_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vl1_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","vl1_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vt12_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","vt12_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vt11_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","vt11_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vt10_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","vt10_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vt9_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","vt9_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vt8_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","vt8_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vt7_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","vt7_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vt6_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","vt6_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vt5_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","vt5_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vt4_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","vt4_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vt3_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","vt3_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vt2_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","vt2_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vt1_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","vt1_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vc7_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","vc7_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vc6_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","vc6_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vc5_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","vc5_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vc4_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","vc4_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vc3_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","vc3_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vc2_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","vc2_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","vc1_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","vc1_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","skullbase_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","skullbase_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_eyelid_joint_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","l_eyelid_joint_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_eyeball_joint_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","l_eyeball_joint_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_eyebrow_joint_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","l_eyebrow_joint_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_eyelid_joint_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","r_eyelid_joint_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_eyeball_joint_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","r_eyeball_joint_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_eyebrow_joint_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","r_eyebrow_joint_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","temporomandibular_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","temporomandibular_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_sternoclavicular_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","l_sternoclavicular_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_acromioclavicular_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","l_acromioclavicular_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_shoulder_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","l_shoulder_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_elbow_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","l_elbow_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_wrist_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","l_wrist_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_thumb1_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","l_thumb1_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_thumb2_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","l_thumb2_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_thumb3_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","l_thumb3_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_index0_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","l_index0_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_index1_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","l_index1_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_index2_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","l_index2_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_index3_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","l_index3_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_middle0_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","l_middle0_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_middle1_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","l_middle1_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_middle2_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","l_middle2_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_middle3_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","l_middle3_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_ring0_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","l_ring0_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_ring1_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","l_ring1_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_ring2_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","l_ring2_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_ring3_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","l_ring3_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_pinky0_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","l_pinky0_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_pinky1_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","l_pinky1_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_pinky2_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","l_pinky2_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_pinky3_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","l_pinky3_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_sternoclavicular_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","r_sternoclavicular_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_acromioclavicular_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","r_acromioclavicular_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_shoulder_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","r_shoulder_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_elbow_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","r_elbow_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_wrist_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","r_wrist_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_thumb1_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","r_thumb1_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_thumb2_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","r_thumb2_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_thumb3_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","r_thumb3_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_index0_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","r_index0_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_index1_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","r_index1_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_index2_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","r_index2_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_index3_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","r_index3_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_middle0_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","r_middle0_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_middle1_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","r_middle1_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_middle2_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","r_middle2_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_middle3_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","r_middle3_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_ring0_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","r_ring0_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_ring1_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","r_ring1_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_ring2_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","r_ring2_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_ring3_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","r_ring3_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_pinky0_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","r_pinky0_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_pinky1_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","r_pinky1_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_pinky2_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","r_pinky2_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_pinky3_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","r_pinky3_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","skull_tipInterpolator")) {
X3DJSON.nodeUtil("Scene","skull_tipInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","SkinTextureTransformInterpolator")) {
X3DJSON.nodeUtil("Scene","SkinTextureTransformInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","ball_TranslationInterpolator")) {
X3DJSON.nodeUtil("Scene","ball_TranslationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","KickTimer")) {
X3DJSON.nodeUtil("Scene","KickTimer").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","ball_RotationInterpolator")) {
X3DJSON.nodeUtil("Scene","ball_RotationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
