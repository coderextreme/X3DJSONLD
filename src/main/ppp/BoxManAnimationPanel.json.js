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
if (typeof X3DJSON['Scene../data/BoxManAnimationPanel.json'] === 'undefined') {
	X3DJSON['Scene../data/BoxManAnimationPanel.json'] = {};
}

X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StopTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stop_HumanoidRootTransInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stop_HumanoidRootRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stop_l_hipRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stop_l_kneeRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stop_l_ankleRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stop_l_midtarsalRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stop_r_hipRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stop_r_kneeRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stop_r_ankleRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stop_r_midtarsalRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stop_vl5RotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stop_skullbaseRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stop_l_shoulderRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stop_l_elbowRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stop_l_wristRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stop_r_shoulderRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stop_r_elbowRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stop_r_wristRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','StandTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stand_r_ankleRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stand_r_kneeRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stand_r_hipRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stand_l_ankleRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stand_l_kneeRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stand_l_hipRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stand_r_wristRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stand_r_elbowRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stand_r_shoulderRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stand_l_wristRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stand_l_elbowRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stand_l_shoulderRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stand_headRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stand_whole_bodyRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stand_whole_bodyTransInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stand_vl5Yaw').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','PitchTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Pitches_r_ankleRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Pitches_r_kneeRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Pitches_r_hipRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Pitches_l_ankleRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Pitches_l_kneeRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Pitches_l_hipRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Pitches_r_wristRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Pitches_r_elbowRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Pitches_r_shoulderRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Pitches_l_wristRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Pitches_l_elbowRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Pitches_l_shoulderRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Pitches_headRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Pitches_whole_bodyRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Pitches_whole_bodyTransInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Pitch_vl5Yaw').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','YawTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Yaws_r_ankleRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Yaws_r_kneeRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Yaws_r_hipRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Yaws_l_ankleRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Yaws_l_kneeRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Yaws_l_hipRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Yaws_r_wristRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Yaws_r_elbowRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Yaws_r_shoulderRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Yaws_l_wristRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Yaws_l_elbowRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Yaws_l_shoulderRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Yaws_headRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Yaws_whole_bodyRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Yaws_whole_bodyTransInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Yaw_vl5Yaw').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RollTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Rolls_r_ankleRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Rolls_r_kneeRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Rolls_r_hipRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Rolls_l_ankleRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Rolls_l_kneeRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Rolls_l_hipRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Rolls_r_wristRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Rolls_r_elbowRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Rolls_r_shoulderRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Rolls_l_wristRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Rolls_l_elbowRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Rolls_l_shoulderRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Rolls_headRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Rolls_whole_bodyRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Rolls_whole_bodyTransInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Roll_vl5Yaw').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','WalkTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Walk_r_ankleRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Walk_r_kneeRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Walk_r_hipRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Walk_l_ankleRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Walk_l_kneeRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Walk_l_hipRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Walk_r_wristRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Walk_r_elbowRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Walk_r_shoulderRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Walk_l_wristRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Walk_l_elbowRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Walk_l_shoulderRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Walk_headRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Walk_whole_bodyRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Walk_whole_bodyTranInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Walk_vl5Yaw').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','RunTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Run_r_ankleRotInterp_Run').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Run_r_kneeRotInterp_Run').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Run_r_hipRotInterp_Run').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Run_l_ankleRotInterp_Run').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Run_l_kneeRotInterp_Run').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Run_l_hipRotInterp_Run').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Run_r_wristRotInterp_Run').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Run_r_elbowRotInterp_Run').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Run_r_shoulderRotInterp_Run').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Run_l_wristRotInterp_Run').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Run_l_elbowRotInterp_Run').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Run_l_shoulderRotInterp_Run').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Run_headRotInterp_Run').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Run_whole_bodyRotInterp_Run').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Run_whole_bodyTranInterp_Run').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Run_vl5Yaw').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','JumpTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Jump_r_ankleRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Jump_r_kneeRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Jump_r_hipRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Jump_l_ankleRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Jump_l_kneeRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Jump_l_hipRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Jump_r_wristRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Jump_r_elbowRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Jump_r_shoulderRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Jump_l_wristRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Jump_l_elbowRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Jump_l_shoulderRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Jump_headRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Jump_whole_bodyRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Jump_whole_bodyTranInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Jump_vl5Yaw').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','KickTimer').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Kick_l_shoulderRoll').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Kick_l_ForeArmPitch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Kick_l_wristRoll').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Kick_r_shoulderRoll').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Kick_r_ForeArmPitch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Kick_r_wristRoll').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Kick_r_hipPitch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Kick_r_kneePitch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Kick_r_anklePitch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Kick_l_hipPitch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Kick_l_kneePitch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Kick_r_anklePitch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Kick_vl5Yaw').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Kick_whole_bodyRotInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Kick_whole_bodyTransInterp').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','HudProx').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','HudProx').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stand_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stand_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stand_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stand_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stand_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stand_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stand_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stand_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stand_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Pitch_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Pitch_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Pitch_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Pitch_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Pitch_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Pitch_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Pitch_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Pitch_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Pitch_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Yaw_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Yaw_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Yaw_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Yaw_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Yaw_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Yaw_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Yaw_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Yaw_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Yaw_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Walk_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Walk_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Walk_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Walk_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Walk_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Walk_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Walk_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Walk_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Walk_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Roll_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Roll_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Roll_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Roll_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Roll_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Roll_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Roll_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Roll_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Roll_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Run_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Run_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Run_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Run_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Run_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Run_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Run_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Run_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Run_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Jump_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Jump_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Jump_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Jump_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Jump_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Jump_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Jump_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Jump_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Jump_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Kick_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Kick_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Kick_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Kick_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Kick_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Kick_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Kick_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Kick_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Kick_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stop_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stop_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stop_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stop_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stop_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stop_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stop_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stop_Touch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Stop_Touch').addEventListener('outputchange', function(event) {
}, false);
