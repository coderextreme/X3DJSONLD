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
if (typeof X3DJSON['Scene../data/BoxMan4AnimationPanel.json'] === 'undefined') {
	X3DJSON['Scene../data/BoxMan4AnimationPanel.json'] = {};
}

    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StopTimer')) {
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stop_humanoid_root_TranslationInterpolator')) {
X3DJSON.nodeUtil('Scene','Stop_humanoid_root_TranslationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stop_humanoid_root_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Stop_humanoid_root_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stop_l_hip_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Stop_l_hip_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stop_l_knee_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Stop_l_knee_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stop_l_ankle_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Stop_l_ankle_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stop_l_midtarsal_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Stop_l_midtarsal_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stop_r_hip_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Stop_r_hip_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stop_r_knee_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Stop_r_knee_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stop_r_ankle_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Stop_r_ankle_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stop_r_midtarsal_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Stop_r_midtarsal_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stop_vl5_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Stop_vl5_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stop_skullbase_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Stop_skullbase_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stop_l_shoulder_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Stop_l_shoulder_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stop_l_elbow_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Stop_l_elbow_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stop_l_wrist_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Stop_l_wrist_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stop_r_shoulder_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Stop_r_shoulder_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stop_r_elbow_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Stop_r_elbow_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stop_r_wrist_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Stop_r_wrist_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StandTimer')) {
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StandTimer')) {
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StandTimer')) {
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StandTimer')) {
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StandTimer')) {
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StandTimer')) {
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StandTimer')) {
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StandTimer')) {
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StandTimer')) {
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StandTimer')) {
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StandTimer')) {
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StandTimer')) {
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StandTimer')) {
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StandTimer')) {
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StandTimer')) {
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StandTimer')) {
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StandTimer')) {
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StandTimer')) {
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StandTimer')) {
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StandTimer')) {
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StandTimer')) {
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StandTimer')) {
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StandTimer')) {
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StandTimer')) {
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StandTimer')) {
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StandTimer')) {
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StandTimer')) {
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StandTimer')) {
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StandTimer')) {
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StandTimer')) {
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StandTimer')) {
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StandTimer')) {
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','StandTimer')) {
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stand_r_ankle_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Stand_r_ankle_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stand_r_knee_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Stand_r_knee_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stand_r_hip_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Stand_r_hip_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stand_l_ankle_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Stand_l_ankle_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stand_l_knee_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Stand_l_knee_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stand_l_hip_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Stand_l_hip_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stand_r_wrist_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Stand_r_wrist_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stand_r_elbow_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Stand_r_elbow_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stand_r_shoulder_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Stand_r_shoulder_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stand_l_wrist_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Stand_l_wrist_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stand_l_elbow_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Stand_l_elbow_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stand_l_shoulder_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Stand_l_shoulder_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stand_head_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Stand_head_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stand_whole_body_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Stand_whole_body_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stand_whole_body_TranslationInterpolator')) {
X3DJSON.nodeUtil('Scene','Stand_whole_body_TranslationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stand_vl5_YawInterpolator')) {
X3DJSON.nodeUtil('Scene','Stand_vl5_YawInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','PitchTimer')) {
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','PitchTimer')) {
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','PitchTimer')) {
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','PitchTimer')) {
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','PitchTimer')) {
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','PitchTimer')) {
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','PitchTimer')) {
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','PitchTimer')) {
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','PitchTimer')) {
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','PitchTimer')) {
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','PitchTimer')) {
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','PitchTimer')) {
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','PitchTimer')) {
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','PitchTimer')) {
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','PitchTimer')) {
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','PitchTimer')) {
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','PitchTimer')) {
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','PitchTimer')) {
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','PitchTimer')) {
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','PitchTimer')) {
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','PitchTimer')) {
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','PitchTimer')) {
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','PitchTimer')) {
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','PitchTimer')) {
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','PitchTimer')) {
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','PitchTimer')) {
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','PitchTimer')) {
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','PitchTimer')) {
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Pitches_r_ankle_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Pitches_r_ankle_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Pitches_r_knee_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Pitches_r_knee_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Pitches_r_hip_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Pitches_r_hip_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Pitches_l_ankle_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Pitches_l_ankle_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Pitches_l_knee_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Pitches_l_knee_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Pitches_l_hip_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Pitches_l_hip_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Pitches_r_wrist_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Pitches_r_wrist_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Pitches_r_elbow_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Pitches_r_elbow_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Pitches_r_shoulder_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Pitches_r_shoulder_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Pitches_l_wrist_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Pitches_l_wrist_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Pitches_l_elbow_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Pitches_l_elbow_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Pitches_l_shoulder_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Pitches_l_shoulder_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Pitches_head_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Pitches_head_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Pitches_whole_body_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Pitches_whole_body_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Pitches_whole_body_TranslationInterpolator')) {
X3DJSON.nodeUtil('Scene','Pitches_whole_body_TranslationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Pitch_vl5_YawInterpolator')) {
X3DJSON.nodeUtil('Scene','Pitch_vl5_YawInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','YawTimer')) {
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','YawTimer')) {
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','YawTimer')) {
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','YawTimer')) {
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','YawTimer')) {
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','YawTimer')) {
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','YawTimer')) {
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','YawTimer')) {
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','YawTimer')) {
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','YawTimer')) {
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','YawTimer')) {
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','YawTimer')) {
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','YawTimer')) {
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','YawTimer')) {
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','YawTimer')) {
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','YawTimer')) {
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','YawTimer')) {
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','YawTimer')) {
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','YawTimer')) {
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','YawTimer')) {
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','YawTimer')) {
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','YawTimer')) {
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','YawTimer')) {
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','YawTimer')) {
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','YawTimer')) {
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','YawTimer')) {
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','YawTimer')) {
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','YawTimer')) {
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Yaws_r_ankle_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Yaws_r_ankle_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Yaws_r_knee_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Yaws_r_knee_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Yaws_r_hip_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Yaws_r_hip_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Yaws_l_ankle_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Yaws_l_ankle_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Yaws_l_knee_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Yaws_l_knee_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Yaws_l_hip_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Yaws_l_hip_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Yaws_r_wrist_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Yaws_r_wrist_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Yaws_r_elbow_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Yaws_r_elbow_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Yaws_r_shoulder_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Yaws_r_shoulder_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Yaws_l_wrist_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Yaws_l_wrist_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Yaws_l_elbow_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Yaws_l_elbow_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Yaws_l_shoulder_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Yaws_l_shoulder_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Yaws_head_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Yaws_head_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Yaws_whole_body_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Yaws_whole_body_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Yaws_whole_body_TranslationInterpolator')) {
X3DJSON.nodeUtil('Scene','Yaws_whole_body_TranslationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Yaw_vl5_YawInterpolator')) {
X3DJSON.nodeUtil('Scene','Yaw_vl5_YawInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RollTimer')) {
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RollTimer')) {
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RollTimer')) {
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RollTimer')) {
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RollTimer')) {
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RollTimer')) {
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RollTimer')) {
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RollTimer')) {
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RollTimer')) {
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RollTimer')) {
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RollTimer')) {
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RollTimer')) {
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RollTimer')) {
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RollTimer')) {
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RollTimer')) {
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RollTimer')) {
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RollTimer')) {
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RollTimer')) {
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RollTimer')) {
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RollTimer')) {
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RollTimer')) {
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RollTimer')) {
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RollTimer')) {
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RollTimer')) {
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RollTimer')) {
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RollTimer')) {
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RollTimer')) {
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RollTimer')) {
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Rolls_r_ankle_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Rolls_r_ankle_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Rolls_r_knee_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Rolls_r_knee_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Rolls_r_hip_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Rolls_r_hip_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Rolls_l_ankle_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Rolls_l_ankle_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Rolls_l_knee_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Rolls_l_knee_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Rolls_l_hip_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Rolls_l_hip_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Rolls_r_wrist_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Rolls_r_wrist_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Rolls_r_elbow_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Rolls_r_elbow_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Rolls_r_shoulder_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Rolls_r_shoulder_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Rolls_l_wrist_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Rolls_l_wrist_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Rolls_l_elbow_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Rolls_l_elbow_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Rolls_l_shoulder_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Rolls_l_shoulder_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Rolls_head_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Rolls_head_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Rolls_whole_body_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Rolls_whole_body_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Rolls_whole_body_TranslationInterpolator')) {
X3DJSON.nodeUtil('Scene','Rolls_whole_body_TranslationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Roll_vl5_YawInterpolator')) {
X3DJSON.nodeUtil('Scene','Roll_vl5_YawInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','WalkTimer')) {
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','WalkTimer')) {
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','WalkTimer')) {
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','WalkTimer')) {
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','WalkTimer')) {
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','WalkTimer')) {
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','WalkTimer')) {
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','WalkTimer')) {
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','WalkTimer')) {
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','WalkTimer')) {
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','WalkTimer')) {
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','WalkTimer')) {
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','WalkTimer')) {
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','WalkTimer')) {
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','WalkTimer')) {
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','WalkTimer')) {
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','WalkTimer')) {
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','WalkTimer')) {
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','WalkTimer')) {
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','WalkTimer')) {
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','WalkTimer')) {
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','WalkTimer')) {
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','WalkTimer')) {
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','WalkTimer')) {
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','WalkTimer')) {
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','WalkTimer')) {
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','WalkTimer')) {
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','WalkTimer')) {
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Walk_r_ankle_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Walk_r_ankle_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Walk_r_knee_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Walk_r_knee_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Walk_r_hip_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Walk_r_hip_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Walk_l_ankle_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Walk_l_ankle_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Walk_l_knee_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Walk_l_knee_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Walk_l_hip_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Walk_l_hip_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Walk_r_wrist_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Walk_r_wrist_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Walk_r_elbow_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Walk_r_elbow_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Walk_r_shoulder_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Walk_r_shoulder_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Walk_l_wrist_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Walk_l_wrist_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Walk_l_elbow_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Walk_l_elbow_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Walk_l_shoulder_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Walk_l_shoulder_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Walk_head_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Walk_head_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Walk_whole_body_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Walk_whole_body_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Walk_whole_body_TranslationInterpolator')) {
X3DJSON.nodeUtil('Scene','Walk_whole_body_TranslationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Walk_vl5_YawInterpolator')) {
X3DJSON.nodeUtil('Scene','Walk_vl5_YawInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RunTimer')) {
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RunTimer')) {
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RunTimer')) {
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RunTimer')) {
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RunTimer')) {
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RunTimer')) {
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RunTimer')) {
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RunTimer')) {
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RunTimer')) {
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RunTimer')) {
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RunTimer')) {
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RunTimer')) {
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RunTimer')) {
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RunTimer')) {
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RunTimer')) {
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RunTimer')) {
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RunTimer')) {
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RunTimer')) {
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RunTimer')) {
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RunTimer')) {
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RunTimer')) {
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RunTimer')) {
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RunTimer')) {
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RunTimer')) {
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RunTimer')) {
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RunTimer')) {
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RunTimer')) {
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RunTimer')) {
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Run_r_ankle_RotationInterpolator_Run')) {
X3DJSON.nodeUtil('Scene','Run_r_ankle_RotationInterpolator_Run').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Run_r_knee_RotationInterpolator_Run')) {
X3DJSON.nodeUtil('Scene','Run_r_knee_RotationInterpolator_Run').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Run_r_hip_RotationInterpolator_Run')) {
X3DJSON.nodeUtil('Scene','Run_r_hip_RotationInterpolator_Run').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Run_l_ankle_RotationInterpolator_Run')) {
X3DJSON.nodeUtil('Scene','Run_l_ankle_RotationInterpolator_Run').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Run_l_knee_RotationInterpolator_Run')) {
X3DJSON.nodeUtil('Scene','Run_l_knee_RotationInterpolator_Run').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Run_l_hip_RotationInterpolator_Run')) {
X3DJSON.nodeUtil('Scene','Run_l_hip_RotationInterpolator_Run').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Run_r_wrist_RotationInterpolator_Run')) {
X3DJSON.nodeUtil('Scene','Run_r_wrist_RotationInterpolator_Run').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Run_r_elbow_RotationInterpolator_Run')) {
X3DJSON.nodeUtil('Scene','Run_r_elbow_RotationInterpolator_Run').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Run_r_shoulder_RotationInterpolator_Run')) {
X3DJSON.nodeUtil('Scene','Run_r_shoulder_RotationInterpolator_Run').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Run_l_wrist_RotationInterpolator_Run')) {
X3DJSON.nodeUtil('Scene','Run_l_wrist_RotationInterpolator_Run').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Run_l_elbow_RotationInterpolator_Run')) {
X3DJSON.nodeUtil('Scene','Run_l_elbow_RotationInterpolator_Run').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Run_l_shoulder_RotationInterpolator_Run')) {
X3DJSON.nodeUtil('Scene','Run_l_shoulder_RotationInterpolator_Run').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Run_head_RotationInterpolator_Run')) {
X3DJSON.nodeUtil('Scene','Run_head_RotationInterpolator_Run').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Run_whole_body_RotationInterpolator_Run')) {
X3DJSON.nodeUtil('Scene','Run_whole_body_RotationInterpolator_Run').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Run_whole_body_TranslationInterpolator_Run')) {
X3DJSON.nodeUtil('Scene','Run_whole_body_TranslationInterpolator_Run').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Run_vl5_YawInterpolator')) {
X3DJSON.nodeUtil('Scene','Run_vl5_YawInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','JumpTimer')) {
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','JumpTimer')) {
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','JumpTimer')) {
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','JumpTimer')) {
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','JumpTimer')) {
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','JumpTimer')) {
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','JumpTimer')) {
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','JumpTimer')) {
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','JumpTimer')) {
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','JumpTimer')) {
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','JumpTimer')) {
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','JumpTimer')) {
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','JumpTimer')) {
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','JumpTimer')) {
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','JumpTimer')) {
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','JumpTimer')) {
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','JumpTimer')) {
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','JumpTimer')) {
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','JumpTimer')) {
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','JumpTimer')) {
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','JumpTimer')) {
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','JumpTimer')) {
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','JumpTimer')) {
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','JumpTimer')) {
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','JumpTimer')) {
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','JumpTimer')) {
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','JumpTimer')) {
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','JumpTimer')) {
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Jump_r_ankle_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Jump_r_ankle_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Jump_r_knee_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Jump_r_knee_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Jump_r_hip_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Jump_r_hip_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Jump_l_ankle_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Jump_l_ankle_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Jump_l_knee_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Jump_l_knee_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Jump_l_hip_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Jump_l_hip_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Jump_r_wrist_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Jump_r_wrist_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Jump_r_elbow_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Jump_r_elbow_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Jump_r_shoulder_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Jump_r_shoulder_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Jump_l_wrist_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Jump_l_wrist_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Jump_l_elbow_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Jump_l_elbow_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Jump_l_shoulder_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Jump_l_shoulder_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Jump_head_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Jump_head_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Jump_whole_body_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Jump_whole_body_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Jump_whole_body_TranslationInterpolator')) {
X3DJSON.nodeUtil('Scene','Jump_whole_body_TranslationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Jump_vl5_YawInterpolator')) {
X3DJSON.nodeUtil('Scene','Jump_vl5_YawInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','KickTimer')) {
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','KickTimer')) {
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','KickTimer')) {
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','KickTimer')) {
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','KickTimer')) {
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','KickTimer')) {
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','KickTimer')) {
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','KickTimer')) {
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','KickTimer')) {
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','KickTimer')) {
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','KickTimer')) {
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','KickTimer')) {
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','KickTimer')) {
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','KickTimer')) {
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','KickTimer')) {
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','KickTimer')) {
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','KickTimer')) {
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','KickTimer')) {
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','KickTimer')) {
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','KickTimer')) {
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','KickTimer')) {
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','KickTimer')) {
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','KickTimer')) {
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','KickTimer')) {
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','KickTimer')) {
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','KickTimer')) {
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Kick_l_shoulder_RollInterpolator')) {
X3DJSON.nodeUtil('Scene','Kick_l_shoulder_RollInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Kick_l_ForeArm_PitchInterpolator')) {
X3DJSON.nodeUtil('Scene','Kick_l_ForeArm_PitchInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Kick_l_wrist_RollInterpolator')) {
X3DJSON.nodeUtil('Scene','Kick_l_wrist_RollInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Kick_r_shoulder_RollInterpolator')) {
X3DJSON.nodeUtil('Scene','Kick_r_shoulder_RollInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Kick_r_ForeArm_PitchInterpolator')) {
X3DJSON.nodeUtil('Scene','Kick_r_ForeArm_PitchInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Kick_r_wrist_RollInterpolator')) {
X3DJSON.nodeUtil('Scene','Kick_r_wrist_RollInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Kick_r_hip_PitchInterpolator')) {
X3DJSON.nodeUtil('Scene','Kick_r_hip_PitchInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Kick_r_knee_PitchInterpolator')) {
X3DJSON.nodeUtil('Scene','Kick_r_knee_PitchInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Kick_r_ankle_PitchInterpolator')) {
X3DJSON.nodeUtil('Scene','Kick_r_ankle_PitchInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Kick_l_hip_PitchInterpolator')) {
X3DJSON.nodeUtil('Scene','Kick_l_hip_PitchInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Kick_l_knee_PitchInterpolator')) {
X3DJSON.nodeUtil('Scene','Kick_l_knee_PitchInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Kick_r_ankle_PitchInterpolator')) {
X3DJSON.nodeUtil('Scene','Kick_r_ankle_PitchInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Kick_vl5_YawInterpolator')) {
X3DJSON.nodeUtil('Scene','Kick_vl5_YawInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Kick_whole_body_RotationInterpolator')) {
X3DJSON.nodeUtil('Scene','Kick_whole_body_RotationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Kick_whole_body_TranslationInterpolator')) {
X3DJSON.nodeUtil('Scene','Kick_whole_body_TranslationInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','HudProx')) {
X3DJSON.nodeUtil('Scene','HudProx').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','HudProx')) {
X3DJSON.nodeUtil('Scene','HudProx').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stand_Touch')) {
X3DJSON.nodeUtil('Scene','Stand_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stand_Touch')) {
X3DJSON.nodeUtil('Scene','Stand_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stand_Touch')) {
X3DJSON.nodeUtil('Scene','Stand_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stand_Touch')) {
X3DJSON.nodeUtil('Scene','Stand_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stand_Touch')) {
X3DJSON.nodeUtil('Scene','Stand_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stand_Touch')) {
X3DJSON.nodeUtil('Scene','Stand_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stand_Touch')) {
X3DJSON.nodeUtil('Scene','Stand_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stand_Touch')) {
X3DJSON.nodeUtil('Scene','Stand_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stand_Touch')) {
X3DJSON.nodeUtil('Scene','Stand_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Pitch_Touch')) {
X3DJSON.nodeUtil('Scene','Pitch_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Pitch_Touch')) {
X3DJSON.nodeUtil('Scene','Pitch_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Pitch_Touch')) {
X3DJSON.nodeUtil('Scene','Pitch_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Pitch_Touch')) {
X3DJSON.nodeUtil('Scene','Pitch_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Pitch_Touch')) {
X3DJSON.nodeUtil('Scene','Pitch_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Pitch_Touch')) {
X3DJSON.nodeUtil('Scene','Pitch_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Pitch_Touch')) {
X3DJSON.nodeUtil('Scene','Pitch_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Pitch_Touch')) {
X3DJSON.nodeUtil('Scene','Pitch_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Pitch_Touch')) {
X3DJSON.nodeUtil('Scene','Pitch_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Yaw_Touch')) {
X3DJSON.nodeUtil('Scene','Yaw_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Yaw_Touch')) {
X3DJSON.nodeUtil('Scene','Yaw_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Yaw_Touch')) {
X3DJSON.nodeUtil('Scene','Yaw_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Yaw_Touch')) {
X3DJSON.nodeUtil('Scene','Yaw_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Yaw_Touch')) {
X3DJSON.nodeUtil('Scene','Yaw_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Yaw_Touch')) {
X3DJSON.nodeUtil('Scene','Yaw_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Yaw_Touch')) {
X3DJSON.nodeUtil('Scene','Yaw_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Yaw_Touch')) {
X3DJSON.nodeUtil('Scene','Yaw_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Yaw_Touch')) {
X3DJSON.nodeUtil('Scene','Yaw_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Walk_Touch')) {
X3DJSON.nodeUtil('Scene','Walk_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Walk_Touch')) {
X3DJSON.nodeUtil('Scene','Walk_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Walk_Touch')) {
X3DJSON.nodeUtil('Scene','Walk_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Walk_Touch')) {
X3DJSON.nodeUtil('Scene','Walk_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Walk_Touch')) {
X3DJSON.nodeUtil('Scene','Walk_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Walk_Touch')) {
X3DJSON.nodeUtil('Scene','Walk_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Walk_Touch')) {
X3DJSON.nodeUtil('Scene','Walk_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Walk_Touch')) {
X3DJSON.nodeUtil('Scene','Walk_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Walk_Touch')) {
X3DJSON.nodeUtil('Scene','Walk_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Roll_Touch')) {
X3DJSON.nodeUtil('Scene','Roll_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Roll_Touch')) {
X3DJSON.nodeUtil('Scene','Roll_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Roll_Touch')) {
X3DJSON.nodeUtil('Scene','Roll_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Roll_Touch')) {
X3DJSON.nodeUtil('Scene','Roll_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Roll_Touch')) {
X3DJSON.nodeUtil('Scene','Roll_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Roll_Touch')) {
X3DJSON.nodeUtil('Scene','Roll_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Roll_Touch')) {
X3DJSON.nodeUtil('Scene','Roll_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Roll_Touch')) {
X3DJSON.nodeUtil('Scene','Roll_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Roll_Touch')) {
X3DJSON.nodeUtil('Scene','Roll_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Run_Touch')) {
X3DJSON.nodeUtil('Scene','Run_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Run_Touch')) {
X3DJSON.nodeUtil('Scene','Run_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Run_Touch')) {
X3DJSON.nodeUtil('Scene','Run_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Run_Touch')) {
X3DJSON.nodeUtil('Scene','Run_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Run_Touch')) {
X3DJSON.nodeUtil('Scene','Run_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Run_Touch')) {
X3DJSON.nodeUtil('Scene','Run_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Run_Touch')) {
X3DJSON.nodeUtil('Scene','Run_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Run_Touch')) {
X3DJSON.nodeUtil('Scene','Run_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Run_Touch')) {
X3DJSON.nodeUtil('Scene','Run_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Jump_Touch')) {
X3DJSON.nodeUtil('Scene','Jump_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Jump_Touch')) {
X3DJSON.nodeUtil('Scene','Jump_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Jump_Touch')) {
X3DJSON.nodeUtil('Scene','Jump_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Jump_Touch')) {
X3DJSON.nodeUtil('Scene','Jump_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Jump_Touch')) {
X3DJSON.nodeUtil('Scene','Jump_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Jump_Touch')) {
X3DJSON.nodeUtil('Scene','Jump_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Jump_Touch')) {
X3DJSON.nodeUtil('Scene','Jump_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Jump_Touch')) {
X3DJSON.nodeUtil('Scene','Jump_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Jump_Touch')) {
X3DJSON.nodeUtil('Scene','Jump_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Kick_Touch')) {
X3DJSON.nodeUtil('Scene','Kick_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Kick_Touch')) {
X3DJSON.nodeUtil('Scene','Kick_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Kick_Touch')) {
X3DJSON.nodeUtil('Scene','Kick_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Kick_Touch')) {
X3DJSON.nodeUtil('Scene','Kick_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Kick_Touch')) {
X3DJSON.nodeUtil('Scene','Kick_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Kick_Touch')) {
X3DJSON.nodeUtil('Scene','Kick_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Kick_Touch')) {
X3DJSON.nodeUtil('Scene','Kick_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Kick_Touch')) {
X3DJSON.nodeUtil('Scene','Kick_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Kick_Touch')) {
X3DJSON.nodeUtil('Scene','Kick_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stop_Touch')) {
X3DJSON.nodeUtil('Scene','Stop_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stop_Touch')) {
X3DJSON.nodeUtil('Scene','Stop_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stop_Touch')) {
X3DJSON.nodeUtil('Scene','Stop_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stop_Touch')) {
X3DJSON.nodeUtil('Scene','Stop_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stop_Touch')) {
X3DJSON.nodeUtil('Scene','Stop_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stop_Touch')) {
X3DJSON.nodeUtil('Scene','Stop_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stop_Touch')) {
X3DJSON.nodeUtil('Scene','Stop_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stop_Touch')) {
X3DJSON.nodeUtil('Scene','Stop_Touch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stop_Touch')) {
X3DJSON.nodeUtil('Scene','Stop_Touch').addEventListener('outputchange', function(event) {
}, false);
}
