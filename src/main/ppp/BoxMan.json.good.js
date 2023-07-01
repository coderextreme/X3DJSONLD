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
if (typeof X3DJSON['Scene../data/BoxMan.json'] === 'undefined') {
	X3DJSON['Scene../data/BoxMan.json'] = {};
}

if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/BoxMan.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/BoxMan.json'] = {};
}

X3DJSON['Script']['Scene']['../data/BoxMan.json']['ENGINE'] = function() {
	this.set_update = function (value) {
		try {
			this.proxy.update = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting update '+e);
			console.error('Problems setting update',e);
		}
	};
	this.update_changed = function () {
		var value = this.update;
		return value;
	};
	try {
		this.update = new SFRotation();
	} catch (e) {
		console.log('Problems setting update '+e);
		console.error('Problems setting update',e);
	}
	this.set_humanoid = function (value) {
		try {
			this.proxy.humanoid = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting humanoid '+e);
			console.error('Problems setting humanoid',e);
		}
	};
	this.humanoid_changed = function () {
		var value = this.humanoid;
		return value;
	};
	try {
		this.humanoid = X3DJSON.nodeUtil("Scene","boxman_Humanoid");
	} catch (e) {
		console.log('Problems setting humanoid '+e);
		console.error('Problems setting humanoid',e);
	}
	this.set_coordList = function (value) {
		try {
			this.proxy.coordList = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting coordList '+e);
			console.error('Problems setting coordList',e);
		}
	};
	this.coordList_changed = function () {
		var value = this.coordList;
		return value;
	};
	try {
		this.coordList = new MFVec3f();
	} catch (e) {
		console.log('Problems setting coordList '+e);
		console.error('Problems setting coordList',e);
	}
	this.set_joint = function (value) {
		try {
			this.proxy.joint = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting joint '+e);
			console.error('Problems setting joint',e);
		}
	};
	this.joint_changed = function () {
		var value = this.joint;
		return value;
	};
	try {
		this.joint = X3DJSON.nodeUtil("Scene","undefined");
	} catch (e) {
		console.log('Problems setting joint '+e);
		console.error('Problems setting joint',e);
	}
	this.set_translation = function (value) {
		try {
			this.proxy.translation = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting translation '+e);
			console.error('Problems setting translation',e);
		}
	};
	this.translation_changed = function () {
		var value = this.translation;
		return value;
	};
	try {
		this.translation = new SFVec3f(0,0,0);
	} catch (e) {
		console.log('Problems setting translation '+e);
		console.error('Problems setting translation',e);
	}
	this.set_rotation = function (value) {
		try {
			this.proxy.rotation = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting rotation '+e);
			console.error('Problems setting rotation',e);
		}
	};
	this.rotation_changed = function () {
		var value = this.rotation;
		return value;
	};
	try {
		this.rotation = new SFRotation(1,0,0,0);
	} catch (e) {
		console.log('Problems setting rotation '+e);
		console.error('Problems setting rotation',e);
	}
	this.set_scale = function (value) {
		try {
			this.proxy.scale = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting scale '+e);
			console.error('Problems setting scale',e);
		}
	};
	this.scale_changed = function () {
		var value = this.scale;
		return value;
	};
	try {
		this.scale = new SFVec3f(1,1,1);
	} catch (e) {
		console.log('Problems setting scale '+e);
		console.error('Problems setting scale',e);
	}
};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/BoxMan.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/BoxMan.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/BoxMan.json']['ENGINE'] = new X3DJSON['Script']['Scene']['../data/BoxMan.json']['ENGINE']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/BoxMan.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/BoxMan.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/BoxMan.json']['ENGINE'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/BoxMan.json']['ENGINE'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/BoxMan.json']['ENGINE']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/BoxMan.json']['ENGINE']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/BoxMan.json']['ENGINE'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/BoxMan.json']['ENGINE']['ACTION'],X3DJSON['Obj']['Scene']['../data/BoxMan.json']['ENGINE']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/BoxMan.json']['ENGINE'].initialize === "function") X3DJSON['Obj']['Scene']['../data/BoxMan.json']['ENGINE'].initialize();
    if (X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_TIMER")) {
X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_TIMER").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_TIMER")) {
X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_TIMER").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_TIMER")) {
X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_TIMER").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_TIMER")) {
X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_TIMER").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_TIMER")) {
X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_TIMER").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_TIMER")) {
X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_TIMER").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_TIMER")) {
X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_TIMER").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_TIMER")) {
X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_TIMER").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_TIMER")) {
X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_TIMER").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_TIMER")) {
X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_TIMER").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_TIMER")) {
X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_TIMER").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_TIMER")) {
X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_TIMER").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_TIMER")) {
X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_TIMER").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_TIMER")) {
X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_TIMER").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_TIMER")) {
X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_TIMER").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_TIMER")) {
X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_TIMER").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_TIMER")) {
X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_TIMER").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_TIMER")) {
X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_TIMER").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_TIMER")) {
X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_TIMER").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_HUMANOIDROOT_POSITION_ANIMATOR")) {
X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_HUMANOIDROOT_POSITION_ANIMATOR").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_HUMANOIDROOT_ANIMATOR")) {
X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_HUMANOIDROOT_ANIMATOR").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_L_HIP_ANIMATOR")) {
X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_L_HIP_ANIMATOR").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_L_KNEE_ANIMATOR")) {
X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_L_KNEE_ANIMATOR").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_L_ANKLE_ANIMATOR")) {
X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_L_ANKLE_ANIMATOR").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_L_MIDTARSAL_ANIMATOR")) {
X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_L_MIDTARSAL_ANIMATOR").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_R_HIP_ANIMATOR")) {
X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_R_HIP_ANIMATOR").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_R_KNEE_ANIMATOR")) {
X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_R_KNEE_ANIMATOR").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_R_ANKLE_ANIMATOR")) {
X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_R_ANKLE_ANIMATOR").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_R_MIDTARSAL_ANIMATOR")) {
X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_R_MIDTARSAL_ANIMATOR").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_VL5_ANIMATOR")) {
X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_VL5_ANIMATOR").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_SKULLBASE_ANIMATOR")) {
X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_SKULLBASE_ANIMATOR").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_L_SHOULDER_ANIMATOR")) {
X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_L_SHOULDER_ANIMATOR").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_L_ELBOW_ANIMATOR")) {
X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_L_ELBOW_ANIMATOR").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_L_WRIST_ANIMATOR")) {
X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_L_WRIST_ANIMATOR").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_R_SHOULDER_ANIMATOR")) {
X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_R_SHOULDER_ANIMATOR").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_R_ELBOW_ANIMATOR")) {
X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_R_ELBOW_ANIMATOR").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_R_WRIST_ANIMATOR")) {
X3DJSON.nodeUtil("Scene","DECLLOA1_WalkAnimation_ANIMATOR_R_WRIST_ANIMATOR").addEventListener('outputchange', function(event) {
}, false);
}
