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
if (typeof X3DJSON['Scene../data/blenderSkeleton.json'] === 'undefined') {
	X3DJSON['Scene../data/blenderSkeleton.json'] = {};
}

    if (X3DJSON.nodeUtil("Scene","Armature_Close")) {
X3DJSON.nodeUtil("Scene","Armature_Close").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_sacrum")) {
X3DJSON.nodeUtil("Scene","Armature_OI_sacrum").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_pelvis")) {
X3DJSON.nodeUtil("Scene","Armature_OI_pelvis").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_thigh")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_thigh").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_calf")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_calf").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_talus")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_talus").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_navicular")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_navicular").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_cuneiform_1")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_cuneiform_1").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_metatarsal_1")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_metatarsal_1").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_tarsal_proximal_phalanx_1")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_tarsal_proximal_phalanx_1").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_tarsal_distal_phalanx_1")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_tarsal_distal_phalanx_1").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_cuneiform_2")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_cuneiform_2").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_metatarsal_2")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_metatarsal_2").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_tarsal_proximal_phalanx_2")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_tarsal_proximal_phalanx_2").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_tarsal_middle_phalanx_2")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_tarsal_middle_phalanx_2").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_tarsal_distal_phalanx_2")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_tarsal_distal_phalanx_2").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_cuneiform_3")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_cuneiform_3").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_metatarsal_3")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_metatarsal_3").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_tarsal_proximal_phalanx_3")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_tarsal_proximal_phalanx_3").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_tarsal_middle_phalanx_3")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_tarsal_middle_phalanx_3").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_tarsal_distal_phalanx_3")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_tarsal_distal_phalanx_3").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_calcaneus")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_calcaneus").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_cuboid")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_cuboid").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_metatarsal_4")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_metatarsal_4").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_tarsal_proximal_phalanx_4")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_tarsal_proximal_phalanx_4").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_tarsal_middle_phalanx_4")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_tarsal_middle_phalanx_4").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_tarsal_distal_phalanx_4")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_tarsal_distal_phalanx_4").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_metatarsal_5")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_metatarsal_5").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_tarsal_proximal_phalanx_5")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_tarsal_proximal_phalanx_5").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_tarsal_middle_phalanx_5")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_tarsal_middle_phalanx_5").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_tarsal_distal_phalanx_5")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_tarsal_distal_phalanx_5").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_thigh")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_thigh").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_calf")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_calf").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_talus")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_talus").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_navicular")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_navicular").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_cuneiform_1")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_cuneiform_1").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_metatarsal_1")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_metatarsal_1").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_tarsal_proximal_phalanx_1")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_tarsal_proximal_phalanx_1").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_tarsal_distal_phalanx_1")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_tarsal_distal_phalanx_1").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_cuneiform_2")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_cuneiform_2").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_metatarsal_2")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_metatarsal_2").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_tarsal_proximal_phalanx_2")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_tarsal_proximal_phalanx_2").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_tarsal_middle_phalanx_2")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_tarsal_middle_phalanx_2").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_tarsal_distal_phalanx_2")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_tarsal_distal_phalanx_2").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_cuneiform_3")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_cuneiform_3").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_metatarsal_3")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_metatarsal_3").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_tarsal_proximal_phalanx_3")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_tarsal_proximal_phalanx_3").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_tarsal_middle_phalanx_3")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_tarsal_middle_phalanx_3").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_tarsal_distal_phalanx_3")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_tarsal_distal_phalanx_3").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_calcaneus")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_calcaneus").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_cuboid")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_cuboid").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_metatarsal_4")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_metatarsal_4").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_tarsal_proximal_phalanx_4")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_tarsal_proximal_phalanx_4").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_tarsal_middle_phalanx_4")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_tarsal_middle_phalanx_4").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_tarsal_distal_phalanx_4")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_tarsal_distal_phalanx_4").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_metatarsal_5")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_metatarsal_5").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_tarsal_proximal_phalanx_5")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_tarsal_proximal_phalanx_5").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_tarsal_middle_phalanx_5")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_tarsal_middle_phalanx_5").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_tarsal_distal_phalanx_5")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_tarsal_distal_phalanx_5").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l5")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l5").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l4")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l4").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l3")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l3").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l2")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l2").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l1")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l1").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_t12")) {
X3DJSON.nodeUtil("Scene","Armature_OI_t12").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_t11")) {
X3DJSON.nodeUtil("Scene","Armature_OI_t11").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_t10")) {
X3DJSON.nodeUtil("Scene","Armature_OI_t10").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_t9")) {
X3DJSON.nodeUtil("Scene","Armature_OI_t9").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_t8")) {
X3DJSON.nodeUtil("Scene","Armature_OI_t8").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_t7")) {
X3DJSON.nodeUtil("Scene","Armature_OI_t7").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_t6")) {
X3DJSON.nodeUtil("Scene","Armature_OI_t6").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_t5")) {
X3DJSON.nodeUtil("Scene","Armature_OI_t5").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_t4")) {
X3DJSON.nodeUtil("Scene","Armature_OI_t4").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_t3")) {
X3DJSON.nodeUtil("Scene","Armature_OI_t3").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_t2")) {
X3DJSON.nodeUtil("Scene","Armature_OI_t2").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_t1")) {
X3DJSON.nodeUtil("Scene","Armature_OI_t1").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_c7")) {
X3DJSON.nodeUtil("Scene","Armature_OI_c7").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_c6")) {
X3DJSON.nodeUtil("Scene","Armature_OI_c6").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_c5")) {
X3DJSON.nodeUtil("Scene","Armature_OI_c5").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_c4")) {
X3DJSON.nodeUtil("Scene","Armature_OI_c4").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_c3")) {
X3DJSON.nodeUtil("Scene","Armature_OI_c3").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_c2")) {
X3DJSON.nodeUtil("Scene","Armature_OI_c2").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_c1")) {
X3DJSON.nodeUtil("Scene","Armature_OI_c1").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_skull")) {
X3DJSON.nodeUtil("Scene","Armature_OI_skull").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_eyelid")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_eyelid").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_eyelid")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_eyelid").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_eyeball")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_eyeball").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_eyeball")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_eyeball").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_eyebrow")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_eyebrow").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_eyebrow")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_eyebrow").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_jaw")) {
X3DJSON.nodeUtil("Scene","Armature_OI_jaw").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_clavicle")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_clavicle").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_scapula")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_scapula").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_upperarm")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_upperarm").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_forearm")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_forearm").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_carpal")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_carpal").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_trapezium")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_trapezium").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_metacarpal_1")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_metacarpal_1").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_carpal_proximal_phalanx_1")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_carpal_proximal_phalanx_1").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_carpal_distal_phalanx_1")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_carpal_distal_phalanx_1").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_trapezoid")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_trapezoid").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_metacarpal_2")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_metacarpal_2").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_carpal_proximal_phalanx_2")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_carpal_proximal_phalanx_2").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_carpal_middle_phalanx_2")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_carpal_middle_phalanx_2").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_carpal_distal_phalanx_2")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_carpal_distal_phalanx_2").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_capitate")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_capitate").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_metacarpal_3")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_metacarpal_3").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_carpal_proximal_phalanx_3")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_carpal_proximal_phalanx_3").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_carpal_middle_phalanx_3")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_carpal_middle_phalanx_3").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_carpal_distal_phalanx_3")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_carpal_distal_phalanx_3").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_hamate")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_hamate").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_metacarpal_4")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_metacarpal_4").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_carpal_proximal_phalanx_4")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_carpal_proximal_phalanx_4").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_carpal_middle_phalanx_4")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_carpal_middle_phalanx_4").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_carpal_distal_phalanx_4")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_carpal_distal_phalanx_4").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_metacarpal_5")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_metacarpal_5").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_carpal_proximal_phalanx_5")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_carpal_proximal_phalanx_5").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_carpal_middle_phalanx_5")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_carpal_middle_phalanx_5").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_l_carpal_distal_phalanx_5")) {
X3DJSON.nodeUtil("Scene","Armature_OI_l_carpal_distal_phalanx_5").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_clavicle")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_clavicle").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_scapula")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_scapula").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_upperarm")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_upperarm").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_forearm")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_forearm").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_carpal")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_carpal").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_trapezium")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_trapezium").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_metacarpal_1")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_metacarpal_1").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_carpal_proximal_phalanx_1")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_carpal_proximal_phalanx_1").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_carpal_distal_phalanx_1")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_carpal_distal_phalanx_1").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_trapezoid")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_trapezoid").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_metacarpal_2")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_metacarpal_2").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_carpal_proximal_phalanx_2")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_carpal_proximal_phalanx_2").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_carpal_middle_phalanx_2")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_carpal_middle_phalanx_2").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_carpal_distal_phalanx_2")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_carpal_distal_phalanx_2").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_capitate")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_capitate").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_metacarpal_3")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_metacarpal_3").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_carpal_proximal_phalanx_3")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_carpal_proximal_phalanx_3").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_carpal_middle_phalanx_3")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_carpal_middle_phalanx_3").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_carpal_distal_phalanx_3")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_carpal_distal_phalanx_3").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_hamate")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_hamate").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_metacarpal_4")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_metacarpal_4").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_carpal_proximal_phalanx_4")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_carpal_proximal_phalanx_4").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_carpal_middle_phalanx_4")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_carpal_middle_phalanx_4").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_carpal_distal_phalanx_4")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_carpal_distal_phalanx_4").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_metacarpal_5")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_metacarpal_5").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_carpal_proximal_phalanx_5")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_carpal_proximal_phalanx_5").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_carpal_middle_phalanx_5")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_carpal_middle_phalanx_5").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_Clock")) {
X3DJSON.nodeUtil("Scene","Armature_Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Armature_OI_r_carpal_distal_phalanx_5")) {
X3DJSON.nodeUtil("Scene","Armature_OI_r_carpal_distal_phalanx_5").addEventListener('outputchange', function(event) {
}, false);
}
