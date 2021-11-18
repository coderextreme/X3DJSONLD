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
if (typeof X3DJSON['Scene../data/BvhConversion1Illustrated.json'] === 'undefined') {
	X3DJSON['Scene../data/BvhConversion1Illustrated.json'] = {};
}

    if (X3DJSON.nodeUtil('Scene','StepTimer')) {
X3DJSON.nodeUtil('Scene','StepTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RealTimer')) {
X3DJSON.nodeUtil('Scene','RealTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','FrameStepper')) {
X3DJSON.nodeUtil('Scene','FrameStepper').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Interpolator0_HIERARCHY_Hips')) {
X3DJSON.nodeUtil('Scene','Interpolator0_HIERARCHY_Hips').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RealTimer')) {
X3DJSON.nodeUtil('Scene','RealTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','FrameStepper')) {
X3DJSON.nodeUtil('Scene','FrameStepper').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Interpolator1_HIERARCHY_Hips')) {
X3DJSON.nodeUtil('Scene','Interpolator1_HIERARCHY_Hips').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RealTimer')) {
X3DJSON.nodeUtil('Scene','RealTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','FrameStepper')) {
X3DJSON.nodeUtil('Scene','FrameStepper').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Interpolator2_l_hip')) {
X3DJSON.nodeUtil('Scene','Interpolator2_l_hip').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RealTimer')) {
X3DJSON.nodeUtil('Scene','RealTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','FrameStepper')) {
X3DJSON.nodeUtil('Scene','FrameStepper').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Interpolator3_l_knee')) {
X3DJSON.nodeUtil('Scene','Interpolator3_l_knee').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RealTimer')) {
X3DJSON.nodeUtil('Scene','RealTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','FrameStepper')) {
X3DJSON.nodeUtil('Scene','FrameStepper').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Interpolator4_l_ankle')) {
X3DJSON.nodeUtil('Scene','Interpolator4_l_ankle').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RealTimer')) {
X3DJSON.nodeUtil('Scene','RealTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','FrameStepper')) {
X3DJSON.nodeUtil('Scene','FrameStepper').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Interpolator5_l_midtarsal')) {
X3DJSON.nodeUtil('Scene','Interpolator5_l_midtarsal').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RealTimer')) {
X3DJSON.nodeUtil('Scene','RealTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','FrameStepper')) {
X3DJSON.nodeUtil('Scene','FrameStepper').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Interpolator6_r_hip')) {
X3DJSON.nodeUtil('Scene','Interpolator6_r_hip').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RealTimer')) {
X3DJSON.nodeUtil('Scene','RealTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','FrameStepper')) {
X3DJSON.nodeUtil('Scene','FrameStepper').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Interpolator7_r_knee')) {
X3DJSON.nodeUtil('Scene','Interpolator7_r_knee').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RealTimer')) {
X3DJSON.nodeUtil('Scene','RealTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','FrameStepper')) {
X3DJSON.nodeUtil('Scene','FrameStepper').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Interpolator8_r_ankle')) {
X3DJSON.nodeUtil('Scene','Interpolator8_r_ankle').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RealTimer')) {
X3DJSON.nodeUtil('Scene','RealTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','FrameStepper')) {
X3DJSON.nodeUtil('Scene','FrameStepper').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Interpolator9_r_midtarsal')) {
X3DJSON.nodeUtil('Scene','Interpolator9_r_midtarsal').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RealTimer')) {
X3DJSON.nodeUtil('Scene','RealTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','FrameStepper')) {
X3DJSON.nodeUtil('Scene','FrameStepper').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Interpolator10_vl5')) {
X3DJSON.nodeUtil('Scene','Interpolator10_vl5').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RealTimer')) {
X3DJSON.nodeUtil('Scene','RealTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','FrameStepper')) {
X3DJSON.nodeUtil('Scene','FrameStepper').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Interpolator11_Chest2')) {
X3DJSON.nodeUtil('Scene','Interpolator11_Chest2').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RealTimer')) {
X3DJSON.nodeUtil('Scene','RealTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','FrameStepper')) {
X3DJSON.nodeUtil('Scene','FrameStepper').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Interpolator12_LeftCollar')) {
X3DJSON.nodeUtil('Scene','Interpolator12_LeftCollar').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RealTimer')) {
X3DJSON.nodeUtil('Scene','RealTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','FrameStepper')) {
X3DJSON.nodeUtil('Scene','FrameStepper').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Interpolator13_l_shoulder')) {
X3DJSON.nodeUtil('Scene','Interpolator13_l_shoulder').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RealTimer')) {
X3DJSON.nodeUtil('Scene','RealTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','FrameStepper')) {
X3DJSON.nodeUtil('Scene','FrameStepper').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Interpolator14_l_elbow')) {
X3DJSON.nodeUtil('Scene','Interpolator14_l_elbow').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RealTimer')) {
X3DJSON.nodeUtil('Scene','RealTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','FrameStepper')) {
X3DJSON.nodeUtil('Scene','FrameStepper').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Interpolator15_l_wrist')) {
X3DJSON.nodeUtil('Scene','Interpolator15_l_wrist').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RealTimer')) {
X3DJSON.nodeUtil('Scene','RealTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','FrameStepper')) {
X3DJSON.nodeUtil('Scene','FrameStepper').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Interpolator16_RightCollar')) {
X3DJSON.nodeUtil('Scene','Interpolator16_RightCollar').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RealTimer')) {
X3DJSON.nodeUtil('Scene','RealTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','FrameStepper')) {
X3DJSON.nodeUtil('Scene','FrameStepper').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Interpolator17_r_shoulder')) {
X3DJSON.nodeUtil('Scene','Interpolator17_r_shoulder').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RealTimer')) {
X3DJSON.nodeUtil('Scene','RealTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','FrameStepper')) {
X3DJSON.nodeUtil('Scene','FrameStepper').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Interpolator18_r_elbow')) {
X3DJSON.nodeUtil('Scene','Interpolator18_r_elbow').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RealTimer')) {
X3DJSON.nodeUtil('Scene','RealTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','FrameStepper')) {
X3DJSON.nodeUtil('Scene','FrameStepper').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Interpolator19_r_wrist')) {
X3DJSON.nodeUtil('Scene','Interpolator19_r_wrist').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RealTimer')) {
X3DJSON.nodeUtil('Scene','RealTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','FrameStepper')) {
X3DJSON.nodeUtil('Scene','FrameStepper').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Interpolator20_Neck')) {
X3DJSON.nodeUtil('Scene','Interpolator20_Neck').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','RealTimer')) {
X3DJSON.nodeUtil('Scene','RealTimer').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','FrameStepper')) {
X3DJSON.nodeUtil('Scene','FrameStepper').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Interpolator21_skullbase')) {
X3DJSON.nodeUtil('Scene','Interpolator21_skullbase').addEventListener('outputchange', function(event) {
}, false);
}
