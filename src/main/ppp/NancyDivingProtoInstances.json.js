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
var SFRotation = x3dom.fields.SFRotation;
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
if (typeof X3DJSON['Scene../data/NancyDivingProtoInstances.json'] === 'undefined') {
	X3DJSON['Scene../data/NancyDivingProtoInstances.json'] = {};
}

if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/NancyDivingProtoInstances.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/NancyDivingProtoInstances.json'] = {};
}

X3DJSON['Script']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'] = function() {
	this.set_rotationL = function (value) {
		try {
			this.proxy.rotationL = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting rotationL '+e);
			console.error('Problems setting rotationL',e);
		}
	};
	this.rotationL_changed = function () {
		var value = this.rotationL;
		return value;
	};
	try {
		this.rotationL = undefined;
	} catch (e) {
		console.log('Problems setting rotationL '+e);
		console.error('Problems setting rotationL',e);
	}
	this.set_rotationR = function (value) {
		try {
			this.proxy.rotationR = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting rotationR '+e);
			console.error('Problems setting rotationR',e);
		}
	};
	this.rotationR_changed = function () {
		var value = this.rotationR;
		return value;
	};
	try {
		this.rotationR = undefined;
	} catch (e) {
		console.log('Problems setting rotationR '+e);
		console.error('Problems setting rotationR',e);
	}
	this.set_fin_warpL = function (value) {
		try {
			this.proxy.fin_warpL = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting fin_warpL '+e);
			console.error('Problems setting fin_warpL',e);
		}
	};
	this.fin_warpL_changed = function () {
		var value = this.fin_warpL;
		return value;
	};
	try {
		this.fin_warpL = new SFBool();
	} catch (e) {
		console.log('Problems setting fin_warpL '+e);
		console.error('Problems setting fin_warpL',e);
	}
	this.set_fin_warpR = function (value) {
		try {
			this.proxy.fin_warpR = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting fin_warpR '+e);
			console.error('Problems setting fin_warpR',e);
		}
	};
	this.fin_warpR_changed = function () {
		var value = this.fin_warpR;
		return value;
	};
	try {
		this.fin_warpR = new SFBool();
	} catch (e) {
		console.log('Problems setting fin_warpR '+e);
		console.error('Problems setting fin_warpR',e);
	}


ecmascript:


var positionX;
var positionY;
var positionZ;
var rotation;

	this.initialize = function ()
{
    	positionX = 0.0;
	positionY = 0.0;
	positionZ = 0.0;
	rotation = 0.0;
}
;

	this.set_rotationL = function ( value, timeStamp)
{
	rotationFinL = new SFRotation(positionX, positionY, positionZ, rotation);
	rotationFinL = value;
	//print ('rotationFinL[0] ' + rotationFinL[0]);
	if (rotationFinL[0] <= 0)
	{
		this.proxy.fin_warpL = 0;
	}
	else
	{
		this.proxy.fin_warpL = 1;
	}
	
}
;

	this.set_rotationR = function ( value, timeStamp)
{
	rotationFinR = new SFRotation(positionX, positionY, positionZ, rotation);
	rotationFinR = value;
	//print ('rotationFin[0] ' + rotationFinR[0]);
	if (rotationFinR[0] <= 0)
	{
		this.proxy.fin_warpR = 0;
	}
	else
	{
		this.proxy.fin_warpR = 1;
	}
	
}

;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'] = new X3DJSON['Script']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript']['ACTION'],X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].initialize === "function") X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].initialize();
    if (X3DJSON.nodeUtil("Scene","TriggerProximitySensor")) {
X3DJSON.nodeUtil("Scene","TriggerProximitySensor").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Dive_Time")) {
X3DJSON.nodeUtil("Scene","Dive_Time").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Dive_Time")) {
X3DJSON.nodeUtil("Scene","Dive_Time").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Dive_Time")) {
X3DJSON.nodeUtil("Scene","Dive_Time").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Dive_Time")) {
X3DJSON.nodeUtil("Scene","Dive_Time").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Dive_Time")) {
X3DJSON.nodeUtil("Scene","Dive_Time").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Dive_Time")) {
X3DJSON.nodeUtil("Scene","Dive_Time").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Dive_Time")) {
X3DJSON.nodeUtil("Scene","Dive_Time").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Dive_Time")) {
X3DJSON.nodeUtil("Scene","Dive_Time").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Dive_Time")) {
X3DJSON.nodeUtil("Scene","Dive_Time").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Dive_Time")) {
X3DJSON.nodeUtil("Scene","Dive_Time").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Dive_Time")) {
X3DJSON.nodeUtil("Scene","Dive_Time").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Dive_Time")) {
X3DJSON.nodeUtil("Scene","Dive_Time").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_ankle_RotationInterpolator_BasicDive")) {
X3DJSON.nodeUtil("Scene","r_ankle_RotationInterpolator_BasicDive").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_knee_RotationInterpolator_BasicDive")) {
X3DJSON.nodeUtil("Scene","r_knee_RotationInterpolator_BasicDive").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_hip_RotationInterpolator_BasicDive")) {
X3DJSON.nodeUtil("Scene","r_hip_RotationInterpolator_BasicDive").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_ankle_RotationInterpolator_BasicDive")) {
X3DJSON.nodeUtil("Scene","l_ankle_RotationInterpolator_BasicDive").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_knee_RotationInterpolator_BasicDive")) {
X3DJSON.nodeUtil("Scene","l_knee_RotationInterpolator_BasicDive").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_hip_RotationInterpolator_BasicDive")) {
X3DJSON.nodeUtil("Scene","l_hip_RotationInterpolator_BasicDive").addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].set_rotationL(X3DJSON.nodeUtil("Scene","l_hip_RotationInterpolator_BasicDive","value"), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].set_rotationL(X3DJSON.nodeUtil("Scene","l_hip_RotationInterpolator_BasicDive","value"), __eventTime);
    if (X3DJSON.nodeUtil("Scene","l_hip_RotationInterpolator_BasicDive")) {
X3DJSON.nodeUtil("Scene","l_hip_RotationInterpolator_BasicDive").addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].set_rotationR(X3DJSON.nodeUtil("Scene","l_hip_RotationInterpolator_BasicDive","value"), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].set_rotationR(X3DJSON.nodeUtil("Scene","l_hip_RotationInterpolator_BasicDive","value"), __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript']['ACTION']['fin_warpL'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript']['ACTION']['fin_warpL'] = [];
}
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript']['ACTION']['fin_warpL'].push(function(property, value) {
		if (property === 'fin_warpL') {
			X3DJSON.nodeUtil("Scene","DECLJoint_hanim_humanoid_root_FIELDchildren_FinScript","finL",typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].fin_warpL === "function" ? X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].fin_warpL() : X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].fin_warpL, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","DECLJoint_hanim_humanoid_root_FIELDchildren_FinScript","finL",typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].fin_warpL === "function" ? X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].fin_warpL() : X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].fin_warpL, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript']['ACTION']['fin_warpR'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript']['ACTION']['fin_warpR'] = [];
}
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript']['ACTION']['fin_warpR'].push(function(property, value) {
		if (property === 'fin_warpR') {
			X3DJSON.nodeUtil("Scene","DECLJoint_hanim_humanoid_root_FIELDchildren_FinScript","finR",typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].fin_warpR === "function" ? X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].fin_warpR() : X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].fin_warpR, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","DECLJoint_hanim_humanoid_root_FIELDchildren_FinScript","finR",typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].fin_warpR === "function" ? X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].fin_warpR() : X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].fin_warpR, __eventTime);
    if (X3DJSON.nodeUtil("Scene","l_hip_RotationInterpolator_BasicDive")) {
X3DJSON.nodeUtil("Scene","l_hip_RotationInterpolator_BasicDive").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","lower_body_RotationInterpolator_BasicDive")) {
X3DJSON.nodeUtil("Scene","lower_body_RotationInterpolator_BasicDive").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","head_RotationInterpolator_BasicDive")) {
X3DJSON.nodeUtil("Scene","head_RotationInterpolator_BasicDive").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","neck_RotationInterpolator_BasicDive")) {
X3DJSON.nodeUtil("Scene","neck_RotationInterpolator_BasicDive").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","upper_body_RotationInterpolator_BasicDive")) {
X3DJSON.nodeUtil("Scene","upper_body_RotationInterpolator_BasicDive").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","whole_body_RotationInterpolator_BasicDive")) {
X3DJSON.nodeUtil("Scene","whole_body_RotationInterpolator_BasicDive").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","whole_body_TranslationInterpolator_BasicDive")) {
X3DJSON.nodeUtil("Scene","whole_body_TranslationInterpolator_BasicDive").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Dive_Time")) {
X3DJSON.nodeUtil("Scene","Dive_Time").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Dive_Time")) {
X3DJSON.nodeUtil("Scene","Dive_Time").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Dive_Time")) {
X3DJSON.nodeUtil("Scene","Dive_Time").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Dive_Time")) {
X3DJSON.nodeUtil("Scene","Dive_Time").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Dive_Time")) {
X3DJSON.nodeUtil("Scene","Dive_Time").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Dive_Time")) {
X3DJSON.nodeUtil("Scene","Dive_Time").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_wrist_RotationInterpolator_BasicDive")) {
X3DJSON.nodeUtil("Scene","r_wrist_RotationInterpolator_BasicDive").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_elbow_RotationInterpolator_BasicDive")) {
X3DJSON.nodeUtil("Scene","r_elbow_RotationInterpolator_BasicDive").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","r_shoulder_RotationInterpolator_BasicDive")) {
X3DJSON.nodeUtil("Scene","r_shoulder_RotationInterpolator_BasicDive").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_wrist_RotationInterpolator_BasicDive")) {
X3DJSON.nodeUtil("Scene","l_wrist_RotationInterpolator_BasicDive").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_elbow_RotationInterpolator_BasicDive")) {
X3DJSON.nodeUtil("Scene","l_elbow_RotationInterpolator_BasicDive").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","l_shoulder_RotationInterpolator_BasicDive")) {
X3DJSON.nodeUtil("Scene","l_shoulder_RotationInterpolator_BasicDive").addEventListener('outputchange', function(event) {
}, false);
}
			X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].set_rotationL(X3DJSON.nodeUtil("Scene","l_hip_RotationInterpolator_BasicDive","value"), __eventTime);
			X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].set_rotationR(X3DJSON.nodeUtil("Scene","l_hip_RotationInterpolator_BasicDive","value"), __eventTime);
			X3DJSON.nodeUtil("Scene","DECLJoint_hanim_humanoid_root_FIELDchildren_FinScript","finL",typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].fin_warpL === "function" ? X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].fin_warpL() : X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].fin_warpL, __eventTime);
			X3DJSON.nodeUtil("Scene","DECLJoint_hanim_humanoid_root_FIELDchildren_FinScript","finR",typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].fin_warpR === "function" ? X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].fin_warpR() : X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].fin_warpR, __eventTime);