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
if (typeof X3DJSON['Scene../data/AllenDutton.json'] === 'undefined') {
	X3DJSON['Scene../data/AllenDutton.json'] = {};
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
    if (X3DJSON.nodeUtil('Scene','Stand_Time')) {
X3DJSON.nodeUtil('Scene','Stand_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stand_Time')) {
X3DJSON.nodeUtil('Scene','Stand_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stand_Time')) {
X3DJSON.nodeUtil('Scene','Stand_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stand_Time')) {
X3DJSON.nodeUtil('Scene','Stand_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stand_Time')) {
X3DJSON.nodeUtil('Scene','Stand_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stand_Time')) {
X3DJSON.nodeUtil('Scene','Stand_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stand_Time')) {
X3DJSON.nodeUtil('Scene','Stand_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stand_Time')) {
X3DJSON.nodeUtil('Scene','Stand_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stand_Time')) {
X3DJSON.nodeUtil('Scene','Stand_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stand_Time')) {
X3DJSON.nodeUtil('Scene','Stand_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stand_Time')) {
X3DJSON.nodeUtil('Scene','Stand_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stand_Time')) {
X3DJSON.nodeUtil('Scene','Stand_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stand_Time')) {
X3DJSON.nodeUtil('Scene','Stand_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stand_Time')) {
X3DJSON.nodeUtil('Scene','Stand_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stand_Time')) {
X3DJSON.nodeUtil('Scene','Stand_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stand_Time')) {
X3DJSON.nodeUtil('Scene','Stand_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stand_Time')) {
X3DJSON.nodeUtil('Scene','Stand_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Stand_Time')) {
X3DJSON.nodeUtil('Scene','Stand_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','r_ankle_RotationInterpolator_Stand')) {
X3DJSON.nodeUtil('Scene','r_ankle_RotationInterpolator_Stand').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','r_knee_RotationInterpolator_Stand')) {
X3DJSON.nodeUtil('Scene','r_knee_RotationInterpolator_Stand').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','r_hip_RotationInterpolator_Stand')) {
X3DJSON.nodeUtil('Scene','r_hip_RotationInterpolator_Stand').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','l_ankle_RotationInterpolator_Stand')) {
X3DJSON.nodeUtil('Scene','l_ankle_RotationInterpolator_Stand').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','l_knee_RotationInterpolator_Stand')) {
X3DJSON.nodeUtil('Scene','l_knee_RotationInterpolator_Stand').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','l_hip_RotationInterpolator_Stand')) {
X3DJSON.nodeUtil('Scene','l_hip_RotationInterpolator_Stand').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','lower_body_RotationInterpolator_Stand')) {
X3DJSON.nodeUtil('Scene','lower_body_RotationInterpolator_Stand').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','r_wrist_RotationInterpolator_Stand')) {
X3DJSON.nodeUtil('Scene','r_wrist_RotationInterpolator_Stand').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','r_elbow_RotationInterpolator_Stand')) {
X3DJSON.nodeUtil('Scene','r_elbow_RotationInterpolator_Stand').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','r_shoulder_RotationInterpolator_Stand')) {
X3DJSON.nodeUtil('Scene','r_shoulder_RotationInterpolator_Stand').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','l_wrist_RotationInterpolator_Stand')) {
X3DJSON.nodeUtil('Scene','l_wrist_RotationInterpolator_Stand').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','l_elbow_RotationInterpolator_Stand')) {
X3DJSON.nodeUtil('Scene','l_elbow_RotationInterpolator_Stand').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','l_shoulder_RotationInterpolator_Stand')) {
X3DJSON.nodeUtil('Scene','l_shoulder_RotationInterpolator_Stand').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','head_RotationInterpolator_Stand')) {
X3DJSON.nodeUtil('Scene','head_RotationInterpolator_Stand').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','neck_RotationInterpolator_Stand')) {
X3DJSON.nodeUtil('Scene','neck_RotationInterpolator_Stand').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','upper_body_RotationInterpolator_Stand')) {
X3DJSON.nodeUtil('Scene','upper_body_RotationInterpolator_Stand').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','whole_body_RotationInterpolator_Stand')) {
X3DJSON.nodeUtil('Scene','whole_body_RotationInterpolator_Stand').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','whole_body_TranslationInterpolator_Stand')) {
X3DJSON.nodeUtil('Scene','whole_body_TranslationInterpolator_Stand').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Walk_Time')) {
X3DJSON.nodeUtil('Scene','Walk_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Walk_Time')) {
X3DJSON.nodeUtil('Scene','Walk_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Walk_Time')) {
X3DJSON.nodeUtil('Scene','Walk_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Walk_Time')) {
X3DJSON.nodeUtil('Scene','Walk_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Walk_Time')) {
X3DJSON.nodeUtil('Scene','Walk_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Walk_Time')) {
X3DJSON.nodeUtil('Scene','Walk_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Walk_Time')) {
X3DJSON.nodeUtil('Scene','Walk_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Walk_Time')) {
X3DJSON.nodeUtil('Scene','Walk_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Walk_Time')) {
X3DJSON.nodeUtil('Scene','Walk_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Walk_Time')) {
X3DJSON.nodeUtil('Scene','Walk_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Walk_Time')) {
X3DJSON.nodeUtil('Scene','Walk_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Walk_Time')) {
X3DJSON.nodeUtil('Scene','Walk_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Walk_Time')) {
X3DJSON.nodeUtil('Scene','Walk_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Walk_Time')) {
X3DJSON.nodeUtil('Scene','Walk_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Walk_Time')) {
X3DJSON.nodeUtil('Scene','Walk_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Walk_Time')) {
X3DJSON.nodeUtil('Scene','Walk_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Walk_Time')) {
X3DJSON.nodeUtil('Scene','Walk_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Walk_Time')) {
X3DJSON.nodeUtil('Scene','Walk_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','r_ankle_RotationInterpolator_BasicWalk')) {
X3DJSON.nodeUtil('Scene','r_ankle_RotationInterpolator_BasicWalk').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','r_knee_RotationInterpolator_BasicWalk')) {
X3DJSON.nodeUtil('Scene','r_knee_RotationInterpolator_BasicWalk').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','r_hip_RotationInterpolator_BasicWalk')) {
X3DJSON.nodeUtil('Scene','r_hip_RotationInterpolator_BasicWalk').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','l_ankle_RotationInterpolator_BasicWalk')) {
X3DJSON.nodeUtil('Scene','l_ankle_RotationInterpolator_BasicWalk').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','l_knee_RotationInterpolator_BasicWalk')) {
X3DJSON.nodeUtil('Scene','l_knee_RotationInterpolator_BasicWalk').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','l_hip_RotationInterpolator_BasicWalk')) {
X3DJSON.nodeUtil('Scene','l_hip_RotationInterpolator_BasicWalk').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','lower_body_RotationInterpolator_BasicWalk')) {
X3DJSON.nodeUtil('Scene','lower_body_RotationInterpolator_BasicWalk').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','r_wrist_RotationInterpolator_BasicWalk')) {
X3DJSON.nodeUtil('Scene','r_wrist_RotationInterpolator_BasicWalk').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','r_elbow_RotationInterpolator_BasicWalk')) {
X3DJSON.nodeUtil('Scene','r_elbow_RotationInterpolator_BasicWalk').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','r_shoulder_RotationInterpolator_BasicWalk')) {
X3DJSON.nodeUtil('Scene','r_shoulder_RotationInterpolator_BasicWalk').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','l_wrist_RotationInterpolator_BasicWalk')) {
X3DJSON.nodeUtil('Scene','l_wrist_RotationInterpolator_BasicWalk').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','l_elbow_RotationInterpolator_BasicWalk')) {
X3DJSON.nodeUtil('Scene','l_elbow_RotationInterpolator_BasicWalk').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','l_shoulder_RotationInterpolator_BasicWalk')) {
X3DJSON.nodeUtil('Scene','l_shoulder_RotationInterpolator_BasicWalk').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','head_RotationInterpolator_BasicWalk')) {
X3DJSON.nodeUtil('Scene','head_RotationInterpolator_BasicWalk').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','neck_RotationInterpolator_BasicWalk')) {
X3DJSON.nodeUtil('Scene','neck_RotationInterpolator_BasicWalk').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','upper_body_RotationInterpolator_BasicWalk')) {
X3DJSON.nodeUtil('Scene','upper_body_RotationInterpolator_BasicWalk').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','whole_body_RotationInterpolator_BasicWalk')) {
X3DJSON.nodeUtil('Scene','whole_body_RotationInterpolator_BasicWalk').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','whole_body_TranslationInterpolator_BasicWalk')) {
X3DJSON.nodeUtil('Scene','whole_body_TranslationInterpolator_BasicWalk').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Run_Time')) {
X3DJSON.nodeUtil('Scene','Run_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Run_Time')) {
X3DJSON.nodeUtil('Scene','Run_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Run_Time')) {
X3DJSON.nodeUtil('Scene','Run_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Run_Time')) {
X3DJSON.nodeUtil('Scene','Run_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Run_Time')) {
X3DJSON.nodeUtil('Scene','Run_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Run_Time')) {
X3DJSON.nodeUtil('Scene','Run_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Run_Time')) {
X3DJSON.nodeUtil('Scene','Run_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Run_Time')) {
X3DJSON.nodeUtil('Scene','Run_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Run_Time')) {
X3DJSON.nodeUtil('Scene','Run_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Run_Time')) {
X3DJSON.nodeUtil('Scene','Run_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Run_Time')) {
X3DJSON.nodeUtil('Scene','Run_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Run_Time')) {
X3DJSON.nodeUtil('Scene','Run_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Run_Time')) {
X3DJSON.nodeUtil('Scene','Run_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Run_Time')) {
X3DJSON.nodeUtil('Scene','Run_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Run_Time')) {
X3DJSON.nodeUtil('Scene','Run_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Run_Time')) {
X3DJSON.nodeUtil('Scene','Run_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Run_Time')) {
X3DJSON.nodeUtil('Scene','Run_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Run_Time')) {
X3DJSON.nodeUtil('Scene','Run_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','r_ankle_RotationInterpolator_Run')) {
X3DJSON.nodeUtil('Scene','r_ankle_RotationInterpolator_Run').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','r_knee_RotationInterpolator_Run')) {
X3DJSON.nodeUtil('Scene','r_knee_RotationInterpolator_Run').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','r_hip_RotationInterpolator_Run')) {
X3DJSON.nodeUtil('Scene','r_hip_RotationInterpolator_Run').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','l_ankle_RotationInterpolator_Run')) {
X3DJSON.nodeUtil('Scene','l_ankle_RotationInterpolator_Run').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','l_knee_RotationInterpolator_Run')) {
X3DJSON.nodeUtil('Scene','l_knee_RotationInterpolator_Run').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','l_hip_RotationInterpolator_Run')) {
X3DJSON.nodeUtil('Scene','l_hip_RotationInterpolator_Run').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','lower_body_RotationInterpolator_Run')) {
X3DJSON.nodeUtil('Scene','lower_body_RotationInterpolator_Run').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','r_wrist_RotationInterpolator_Run')) {
X3DJSON.nodeUtil('Scene','r_wrist_RotationInterpolator_Run').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','r_elbow_RotationInterpolator_Run')) {
X3DJSON.nodeUtil('Scene','r_elbow_RotationInterpolator_Run').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','r_shoulder_RotationInterpolator_Run')) {
X3DJSON.nodeUtil('Scene','r_shoulder_RotationInterpolator_Run').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','l_wrist_RotationInterpolator_Run')) {
X3DJSON.nodeUtil('Scene','l_wrist_RotationInterpolator_Run').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','l_elbow_RotationInterpolator_Run')) {
X3DJSON.nodeUtil('Scene','l_elbow_RotationInterpolator_Run').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','l_shoulder_RotationInterpolator_Run')) {
X3DJSON.nodeUtil('Scene','l_shoulder_RotationInterpolator_Run').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','head_RotationInterpolator_Run')) {
X3DJSON.nodeUtil('Scene','head_RotationInterpolator_Run').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','neck_RotationInterpolator_Run')) {
X3DJSON.nodeUtil('Scene','neck_RotationInterpolator_Run').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','upper_body_RotationInterpolator_Run')) {
X3DJSON.nodeUtil('Scene','upper_body_RotationInterpolator_Run').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','whole_body_RotationInterpolator_Run')) {
X3DJSON.nodeUtil('Scene','whole_body_RotationInterpolator_Run').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','whole_body_TranslationInterpolator_Run')) {
X3DJSON.nodeUtil('Scene','whole_body_TranslationInterpolator_Run').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Jump_Time')) {
X3DJSON.nodeUtil('Scene','Jump_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Jump_Time')) {
X3DJSON.nodeUtil('Scene','Jump_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Jump_Time')) {
X3DJSON.nodeUtil('Scene','Jump_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Jump_Time')) {
X3DJSON.nodeUtil('Scene','Jump_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Jump_Time')) {
X3DJSON.nodeUtil('Scene','Jump_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Jump_Time')) {
X3DJSON.nodeUtil('Scene','Jump_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Jump_Time')) {
X3DJSON.nodeUtil('Scene','Jump_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Jump_Time')) {
X3DJSON.nodeUtil('Scene','Jump_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Jump_Time')) {
X3DJSON.nodeUtil('Scene','Jump_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Jump_Time')) {
X3DJSON.nodeUtil('Scene','Jump_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Jump_Time')) {
X3DJSON.nodeUtil('Scene','Jump_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Jump_Time')) {
X3DJSON.nodeUtil('Scene','Jump_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Jump_Time')) {
X3DJSON.nodeUtil('Scene','Jump_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Jump_Time')) {
X3DJSON.nodeUtil('Scene','Jump_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Jump_Time')) {
X3DJSON.nodeUtil('Scene','Jump_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Jump_Time')) {
X3DJSON.nodeUtil('Scene','Jump_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Jump_Time')) {
X3DJSON.nodeUtil('Scene','Jump_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Jump_Time')) {
X3DJSON.nodeUtil('Scene','Jump_Time').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','r_ankle_RotationInterpolator_Jump')) {
X3DJSON.nodeUtil('Scene','r_ankle_RotationInterpolator_Jump').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','r_knee_RotationInterpolator_Jump')) {
X3DJSON.nodeUtil('Scene','r_knee_RotationInterpolator_Jump').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','r_hip_RotationInterpolator_Jump')) {
X3DJSON.nodeUtil('Scene','r_hip_RotationInterpolator_Jump').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','l_ankle_RotationInterpolator_Jump')) {
X3DJSON.nodeUtil('Scene','l_ankle_RotationInterpolator_Jump').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','l_knee_RotationInterpolator_Jump')) {
X3DJSON.nodeUtil('Scene','l_knee_RotationInterpolator_Jump').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','l_hip_RotationInterpolator_Jump')) {
X3DJSON.nodeUtil('Scene','l_hip_RotationInterpolator_Jump').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','lower_body_RotationInterpolator_Jump')) {
X3DJSON.nodeUtil('Scene','lower_body_RotationInterpolator_Jump').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','r_wrist_RotationInterpolator_Jump')) {
X3DJSON.nodeUtil('Scene','r_wrist_RotationInterpolator_Jump').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','r_elbow_RotationInterpolator_Jump')) {
X3DJSON.nodeUtil('Scene','r_elbow_RotationInterpolator_Jump').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','r_shoulder_RotationInterpolator_Jump')) {
X3DJSON.nodeUtil('Scene','r_shoulder_RotationInterpolator_Jump').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','l_wrist_RotationInterpolator_Jump')) {
X3DJSON.nodeUtil('Scene','l_wrist_RotationInterpolator_Jump').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','l_elbow_RotationInterpolator_Jump')) {
X3DJSON.nodeUtil('Scene','l_elbow_RotationInterpolator_Jump').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','l_shoulder_RotationInterpolator_Jump')) {
X3DJSON.nodeUtil('Scene','l_shoulder_RotationInterpolator_Jump').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','head_RotationInterpolator_Jump')) {
X3DJSON.nodeUtil('Scene','head_RotationInterpolator_Jump').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','neck_RotationInterpolator_Jump')) {
X3DJSON.nodeUtil('Scene','neck_RotationInterpolator_Jump').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','upper_body_RotationInterpolator_Jump')) {
X3DJSON.nodeUtil('Scene','upper_body_RotationInterpolator_Jump').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','whole_body_RotationInterpolator_Jump')) {
X3DJSON.nodeUtil('Scene','whole_body_RotationInterpolator_Jump').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','whole_body_TranslationInterpolator_Jump')) {
X3DJSON.nodeUtil('Scene','whole_body_TranslationInterpolator_Jump').addEventListener('outputchange', function(event) {
}, false);
}