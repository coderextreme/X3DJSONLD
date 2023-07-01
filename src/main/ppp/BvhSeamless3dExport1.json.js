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
if (typeof X3DJSON['Scene../data/BvhSeamless3dExport1.json'] === 'undefined') {
	X3DJSON['Scene../data/BvhSeamless3dExport1.json'] = {};
}

if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/BvhSeamless3dExport1.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/BvhSeamless3dExport1.json'] = {};
}

X3DJSON['Script']['Scene']['../data/BvhSeamless3dExport1.json'][''] = function() {
	this.set_play = function (value) {
		try {
			this.proxy.play = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting play '+e);
			console.error('Problems setting play',e);
		}
	};
	this.play_changed = function () {
		var value = this.play;
		return value;
	};
	try {
		this.play = new SFBool(true);
	} catch (e) {
		console.log('Problems setting play '+e);
		console.error('Problems setting play',e);
	}
	this.set_pause = function (value) {
		try {
			this.proxy.pause = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting pause '+e);
			console.error('Problems setting pause',e);
		}
	};
	this.pause_changed = function () {
		var value = this.pause;
		return value;
	};
	try {
		this.pause = new SFBool(true);
	} catch (e) {
		console.log('Problems setting pause '+e);
		console.error('Problems setting pause',e);
	}
	this.set_period = function (value) {
		try {
			this.proxy.period = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting period '+e);
			console.error('Problems setting period',e);
		}
	};
	this.period_changed = function () {
		var value = this.period;
		return value;
	};
	try {
		this.period = new SFTime(4.750095);
	} catch (e) {
		console.log('Problems setting period '+e);
		console.error('Problems setting period',e);
	}
	this.set_timeSensor = function (value) {
		try {
			this.proxy.timeSensor = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting timeSensor '+e);
			console.error('Problems setting timeSensor',e);
		}
	};
	this.timeSensor_changed = function () {
		var value = this.timeSensor;
		return value;
	};
	try {
		this.timeSensor = X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_timeSensor");
	} catch (e) {
		console.log('Problems setting timeSensor '+e);
		console.error('Problems setting timeSensor',e);
	}
	this.set_block = function (value) {
		try {
			this.proxy.block = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting block '+e);
			console.error('Problems setting block',e);
		}
	};
	this.block_changed = function () {
		var value = this.block;
		return value;
	};
	try {
		this.block = new SFBool(false);
	} catch (e) {
		console.log('Problems setting block '+e);
		console.error('Problems setting block',e);
	}


ecmascript:
	this.initialize = function (){
if(this.proxy.play==false){
X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_timeSensor", "stopTime", 1);
}
this.pause=!this.proxy.play;
};

	this.play = function (v, t){
if(this.proxy.block){
return;
}
block=true;
if(v){
X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_timeSensor", "startTime", t);
}
else{
X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_timeSensor", "stopTime", t);
}
if(v==false){
this.pause=true;
}
else{
this.pause=false;
}
block=false;
};

	this.pause = function (v, t){
if(this.proxy.block){
return;
}
block=true;
if(!v){
t2=t-X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_timeSensor", "fraction_changed")*this.proxy.period;
X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_timeSensor", "stopTime", t2-1);
X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_timeSensor", "startTime", t2);
}
else{
X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_timeSensor", "stopTime", t);
}
if(v==false){
this.play=true;
}
else{
this.play=false;
}
block=false;
}

;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/BvhSeamless3dExport1.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/BvhSeamless3dExport1.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/BvhSeamless3dExport1.json'][''] = new X3DJSON['Script']['Scene']['../data/BvhSeamless3dExport1.json']['']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/BvhSeamless3dExport1.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/BvhSeamless3dExport1.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/BvhSeamless3dExport1.json'][''] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/BvhSeamless3dExport1.json'][''] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/BvhSeamless3dExport1.json']['']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/BvhSeamless3dExport1.json']['']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/BvhSeamless3dExport1.json'][''].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/BvhSeamless3dExport1.json']['']['ACTION'],X3DJSON['Obj']['Scene']['../data/BvhSeamless3dExport1.json']['']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/BvhSeamless3dExport1.json'][''].initialize === "function") X3DJSON['Obj']['Scene']['../data/BvhSeamless3dExport1.json'][''].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/BvhSeamless3dExport1.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/BvhSeamless3dExport1.json'] = {};
}

X3DJSON['Script']['Scene']['../data/BvhSeamless3dExport1.json']['s03e13e80'] = function() {
	this.set_f03e07a38 = function (value) {
		try {
			this.proxy.f03e07a38 = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting f03e07a38 '+e);
			console.error('Problems setting f03e07a38',e);
		}
	};
	this.f03e07a38_changed = function () {
		var value = this.f03e07a38;
		return value;
	};
	try {
		this.f03e07a38 = new SFFloat(0);
	} catch (e) {
		console.log('Problems setting f03e07a38 '+e);
		console.error('Problems setting f03e07a38',e);
	}
	this.set_pi_Hips = function (value) {
		try {
			this.proxy.pi_Hips = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting pi_Hips '+e);
			console.error('Problems setting pi_Hips',e);
		}
	};
	this.pi_Hips_changed = function () {
		var value = this.pi_Hips;
		return value;
	};
	try {
		this.pi_Hips = X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_pi_Hips");
	} catch (e) {
		console.log('Problems setting pi_Hips '+e);
		console.error('Problems setting pi_Hips',e);
	}
	this.set_Hips = function (value) {
		try {
			this.proxy.Hips = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting Hips '+e);
			console.error('Problems setting Hips',e);
		}
	};
	this.Hips_changed = function () {
		var value = this.Hips;
		return value;
	};
	try {
		this.Hips = X3DJSON.nodeUtil("Scene","_Hips");
	} catch (e) {
		console.log('Problems setting Hips '+e);
		console.error('Problems setting Hips',e);
	}
	this.set_oi_Hips = function (value) {
		try {
			this.proxy.oi_Hips = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting oi_Hips '+e);
			console.error('Problems setting oi_Hips',e);
		}
	};
	this.oi_Hips_changed = function () {
		var value = this.oi_Hips;
		return value;
	};
	try {
		this.oi_Hips = X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_Hips");
	} catch (e) {
		console.log('Problems setting oi_Hips '+e);
		console.error('Problems setting oi_Hips',e);
	}
	this.set_oi_LeftHip = function (value) {
		try {
			this.proxy.oi_LeftHip = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting oi_LeftHip '+e);
			console.error('Problems setting oi_LeftHip',e);
		}
	};
	this.oi_LeftHip_changed = function () {
		var value = this.oi_LeftHip;
		return value;
	};
	try {
		this.oi_LeftHip = X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_LeftHip");
	} catch (e) {
		console.log('Problems setting oi_LeftHip '+e);
		console.error('Problems setting oi_LeftHip',e);
	}
	this.set_LeftHip = function (value) {
		try {
			this.proxy.LeftHip = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting LeftHip '+e);
			console.error('Problems setting LeftHip',e);
		}
	};
	this.LeftHip_changed = function () {
		var value = this.LeftHip;
		return value;
	};
	try {
		this.LeftHip = X3DJSON.nodeUtil("Scene","_LeftHip");
	} catch (e) {
		console.log('Problems setting LeftHip '+e);
		console.error('Problems setting LeftHip',e);
	}
	this.set_oi_LeftKnee = function (value) {
		try {
			this.proxy.oi_LeftKnee = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting oi_LeftKnee '+e);
			console.error('Problems setting oi_LeftKnee',e);
		}
	};
	this.oi_LeftKnee_changed = function () {
		var value = this.oi_LeftKnee;
		return value;
	};
	try {
		this.oi_LeftKnee = X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_LeftKnee");
	} catch (e) {
		console.log('Problems setting oi_LeftKnee '+e);
		console.error('Problems setting oi_LeftKnee',e);
	}
	this.set_LeftKnee = function (value) {
		try {
			this.proxy.LeftKnee = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting LeftKnee '+e);
			console.error('Problems setting LeftKnee',e);
		}
	};
	this.LeftKnee_changed = function () {
		var value = this.LeftKnee;
		return value;
	};
	try {
		this.LeftKnee = X3DJSON.nodeUtil("Scene","_LeftKnee");
	} catch (e) {
		console.log('Problems setting LeftKnee '+e);
		console.error('Problems setting LeftKnee',e);
	}
	this.set_oi_LeftAnkle = function (value) {
		try {
			this.proxy.oi_LeftAnkle = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting oi_LeftAnkle '+e);
			console.error('Problems setting oi_LeftAnkle',e);
		}
	};
	this.oi_LeftAnkle_changed = function () {
		var value = this.oi_LeftAnkle;
		return value;
	};
	try {
		this.oi_LeftAnkle = X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_LeftAnkle");
	} catch (e) {
		console.log('Problems setting oi_LeftAnkle '+e);
		console.error('Problems setting oi_LeftAnkle',e);
	}
	this.set_LeftAnkle = function (value) {
		try {
			this.proxy.LeftAnkle = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting LeftAnkle '+e);
			console.error('Problems setting LeftAnkle',e);
		}
	};
	this.LeftAnkle_changed = function () {
		var value = this.LeftAnkle;
		return value;
	};
	try {
		this.LeftAnkle = X3DJSON.nodeUtil("Scene","_LeftAnkle");
	} catch (e) {
		console.log('Problems setting LeftAnkle '+e);
		console.error('Problems setting LeftAnkle',e);
	}
	this.set_oi_LeftAnkleEnd = function (value) {
		try {
			this.proxy.oi_LeftAnkleEnd = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting oi_LeftAnkleEnd '+e);
			console.error('Problems setting oi_LeftAnkleEnd',e);
		}
	};
	this.oi_LeftAnkleEnd_changed = function () {
		var value = this.oi_LeftAnkleEnd;
		return value;
	};
	try {
		this.oi_LeftAnkleEnd = X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_LeftAnkleEnd");
	} catch (e) {
		console.log('Problems setting oi_LeftAnkleEnd '+e);
		console.error('Problems setting oi_LeftAnkleEnd',e);
	}
	this.set_LeftAnkleEnd = function (value) {
		try {
			this.proxy.LeftAnkleEnd = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting LeftAnkleEnd '+e);
			console.error('Problems setting LeftAnkleEnd',e);
		}
	};
	this.LeftAnkleEnd_changed = function () {
		var value = this.LeftAnkleEnd;
		return value;
	};
	try {
		this.LeftAnkleEnd = X3DJSON.nodeUtil("Scene","_LeftAnkleEnd");
	} catch (e) {
		console.log('Problems setting LeftAnkleEnd '+e);
		console.error('Problems setting LeftAnkleEnd',e);
	}
	this.set_oi_RightHip = function (value) {
		try {
			this.proxy.oi_RightHip = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting oi_RightHip '+e);
			console.error('Problems setting oi_RightHip',e);
		}
	};
	this.oi_RightHip_changed = function () {
		var value = this.oi_RightHip;
		return value;
	};
	try {
		this.oi_RightHip = X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_RightHip");
	} catch (e) {
		console.log('Problems setting oi_RightHip '+e);
		console.error('Problems setting oi_RightHip',e);
	}
	this.set_RightHip = function (value) {
		try {
			this.proxy.RightHip = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting RightHip '+e);
			console.error('Problems setting RightHip',e);
		}
	};
	this.RightHip_changed = function () {
		var value = this.RightHip;
		return value;
	};
	try {
		this.RightHip = X3DJSON.nodeUtil("Scene","_RightHip");
	} catch (e) {
		console.log('Problems setting RightHip '+e);
		console.error('Problems setting RightHip',e);
	}
	this.set_oi_RightKnee = function (value) {
		try {
			this.proxy.oi_RightKnee = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting oi_RightKnee '+e);
			console.error('Problems setting oi_RightKnee',e);
		}
	};
	this.oi_RightKnee_changed = function () {
		var value = this.oi_RightKnee;
		return value;
	};
	try {
		this.oi_RightKnee = X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_RightKnee");
	} catch (e) {
		console.log('Problems setting oi_RightKnee '+e);
		console.error('Problems setting oi_RightKnee',e);
	}
	this.set_RightKnee = function (value) {
		try {
			this.proxy.RightKnee = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting RightKnee '+e);
			console.error('Problems setting RightKnee',e);
		}
	};
	this.RightKnee_changed = function () {
		var value = this.RightKnee;
		return value;
	};
	try {
		this.RightKnee = X3DJSON.nodeUtil("Scene","_RightKnee");
	} catch (e) {
		console.log('Problems setting RightKnee '+e);
		console.error('Problems setting RightKnee',e);
	}
	this.set_oi_RightAnkle = function (value) {
		try {
			this.proxy.oi_RightAnkle = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting oi_RightAnkle '+e);
			console.error('Problems setting oi_RightAnkle',e);
		}
	};
	this.oi_RightAnkle_changed = function () {
		var value = this.oi_RightAnkle;
		return value;
	};
	try {
		this.oi_RightAnkle = X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_RightAnkle");
	} catch (e) {
		console.log('Problems setting oi_RightAnkle '+e);
		console.error('Problems setting oi_RightAnkle',e);
	}
	this.set_RightAnkle = function (value) {
		try {
			this.proxy.RightAnkle = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting RightAnkle '+e);
			console.error('Problems setting RightAnkle',e);
		}
	};
	this.RightAnkle_changed = function () {
		var value = this.RightAnkle;
		return value;
	};
	try {
		this.RightAnkle = X3DJSON.nodeUtil("Scene","_RightAnkle");
	} catch (e) {
		console.log('Problems setting RightAnkle '+e);
		console.error('Problems setting RightAnkle',e);
	}
	this.set_oi_RightAnkleEnd = function (value) {
		try {
			this.proxy.oi_RightAnkleEnd = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting oi_RightAnkleEnd '+e);
			console.error('Problems setting oi_RightAnkleEnd',e);
		}
	};
	this.oi_RightAnkleEnd_changed = function () {
		var value = this.oi_RightAnkleEnd;
		return value;
	};
	try {
		this.oi_RightAnkleEnd = X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_RightAnkleEnd");
	} catch (e) {
		console.log('Problems setting oi_RightAnkleEnd '+e);
		console.error('Problems setting oi_RightAnkleEnd',e);
	}
	this.set_RightAnkleEnd = function (value) {
		try {
			this.proxy.RightAnkleEnd = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting RightAnkleEnd '+e);
			console.error('Problems setting RightAnkleEnd',e);
		}
	};
	this.RightAnkleEnd_changed = function () {
		var value = this.RightAnkleEnd;
		return value;
	};
	try {
		this.RightAnkleEnd = X3DJSON.nodeUtil("Scene","_RightAnkleEnd");
	} catch (e) {
		console.log('Problems setting RightAnkleEnd '+e);
		console.error('Problems setting RightAnkleEnd',e);
	}
	this.set_oi_Chest = function (value) {
		try {
			this.proxy.oi_Chest = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting oi_Chest '+e);
			console.error('Problems setting oi_Chest',e);
		}
	};
	this.oi_Chest_changed = function () {
		var value = this.oi_Chest;
		return value;
	};
	try {
		this.oi_Chest = X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_Chest");
	} catch (e) {
		console.log('Problems setting oi_Chest '+e);
		console.error('Problems setting oi_Chest',e);
	}
	this.set_Chest = function (value) {
		try {
			this.proxy.Chest = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting Chest '+e);
			console.error('Problems setting Chest',e);
		}
	};
	this.Chest_changed = function () {
		var value = this.Chest;
		return value;
	};
	try {
		this.Chest = X3DJSON.nodeUtil("Scene","_Chest");
	} catch (e) {
		console.log('Problems setting Chest '+e);
		console.error('Problems setting Chest',e);
	}
	this.set_oi_Chest2 = function (value) {
		try {
			this.proxy.oi_Chest2 = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting oi_Chest2 '+e);
			console.error('Problems setting oi_Chest2',e);
		}
	};
	this.oi_Chest2_changed = function () {
		var value = this.oi_Chest2;
		return value;
	};
	try {
		this.oi_Chest2 = X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_Chest2");
	} catch (e) {
		console.log('Problems setting oi_Chest2 '+e);
		console.error('Problems setting oi_Chest2',e);
	}
	this.set_Chest2 = function (value) {
		try {
			this.proxy.Chest2 = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting Chest2 '+e);
			console.error('Problems setting Chest2',e);
		}
	};
	this.Chest2_changed = function () {
		var value = this.Chest2;
		return value;
	};
	try {
		this.Chest2 = X3DJSON.nodeUtil("Scene","_Chest2");
	} catch (e) {
		console.log('Problems setting Chest2 '+e);
		console.error('Problems setting Chest2',e);
	}
	this.set_oi_LeftCollar = function (value) {
		try {
			this.proxy.oi_LeftCollar = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting oi_LeftCollar '+e);
			console.error('Problems setting oi_LeftCollar',e);
		}
	};
	this.oi_LeftCollar_changed = function () {
		var value = this.oi_LeftCollar;
		return value;
	};
	try {
		this.oi_LeftCollar = X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_LeftCollar");
	} catch (e) {
		console.log('Problems setting oi_LeftCollar '+e);
		console.error('Problems setting oi_LeftCollar',e);
	}
	this.set_LeftCollar = function (value) {
		try {
			this.proxy.LeftCollar = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting LeftCollar '+e);
			console.error('Problems setting LeftCollar',e);
		}
	};
	this.LeftCollar_changed = function () {
		var value = this.LeftCollar;
		return value;
	};
	try {
		this.LeftCollar = X3DJSON.nodeUtil("Scene","_LeftCollar");
	} catch (e) {
		console.log('Problems setting LeftCollar '+e);
		console.error('Problems setting LeftCollar',e);
	}
	this.set_oi_LeftShoulder = function (value) {
		try {
			this.proxy.oi_LeftShoulder = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting oi_LeftShoulder '+e);
			console.error('Problems setting oi_LeftShoulder',e);
		}
	};
	this.oi_LeftShoulder_changed = function () {
		var value = this.oi_LeftShoulder;
		return value;
	};
	try {
		this.oi_LeftShoulder = X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_LeftShoulder");
	} catch (e) {
		console.log('Problems setting oi_LeftShoulder '+e);
		console.error('Problems setting oi_LeftShoulder',e);
	}
	this.set_LeftShoulder = function (value) {
		try {
			this.proxy.LeftShoulder = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting LeftShoulder '+e);
			console.error('Problems setting LeftShoulder',e);
		}
	};
	this.LeftShoulder_changed = function () {
		var value = this.LeftShoulder;
		return value;
	};
	try {
		this.LeftShoulder = X3DJSON.nodeUtil("Scene","_LeftShoulder");
	} catch (e) {
		console.log('Problems setting LeftShoulder '+e);
		console.error('Problems setting LeftShoulder',e);
	}
	this.set_oi_LeftElbow = function (value) {
		try {
			this.proxy.oi_LeftElbow = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting oi_LeftElbow '+e);
			console.error('Problems setting oi_LeftElbow',e);
		}
	};
	this.oi_LeftElbow_changed = function () {
		var value = this.oi_LeftElbow;
		return value;
	};
	try {
		this.oi_LeftElbow = X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_LeftElbow");
	} catch (e) {
		console.log('Problems setting oi_LeftElbow '+e);
		console.error('Problems setting oi_LeftElbow',e);
	}
	this.set_LeftElbow = function (value) {
		try {
			this.proxy.LeftElbow = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting LeftElbow '+e);
			console.error('Problems setting LeftElbow',e);
		}
	};
	this.LeftElbow_changed = function () {
		var value = this.LeftElbow;
		return value;
	};
	try {
		this.LeftElbow = X3DJSON.nodeUtil("Scene","_LeftElbow");
	} catch (e) {
		console.log('Problems setting LeftElbow '+e);
		console.error('Problems setting LeftElbow',e);
	}
	this.set_oi_LeftWrist = function (value) {
		try {
			this.proxy.oi_LeftWrist = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting oi_LeftWrist '+e);
			console.error('Problems setting oi_LeftWrist',e);
		}
	};
	this.oi_LeftWrist_changed = function () {
		var value = this.oi_LeftWrist;
		return value;
	};
	try {
		this.oi_LeftWrist = X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_LeftWrist");
	} catch (e) {
		console.log('Problems setting oi_LeftWrist '+e);
		console.error('Problems setting oi_LeftWrist',e);
	}
	this.set_LeftWrist = function (value) {
		try {
			this.proxy.LeftWrist = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting LeftWrist '+e);
			console.error('Problems setting LeftWrist',e);
		}
	};
	this.LeftWrist_changed = function () {
		var value = this.LeftWrist;
		return value;
	};
	try {
		this.LeftWrist = X3DJSON.nodeUtil("Scene","_LeftWrist");
	} catch (e) {
		console.log('Problems setting LeftWrist '+e);
		console.error('Problems setting LeftWrist',e);
	}
	this.set_oi_RightCollar = function (value) {
		try {
			this.proxy.oi_RightCollar = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting oi_RightCollar '+e);
			console.error('Problems setting oi_RightCollar',e);
		}
	};
	this.oi_RightCollar_changed = function () {
		var value = this.oi_RightCollar;
		return value;
	};
	try {
		this.oi_RightCollar = X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_RightCollar");
	} catch (e) {
		console.log('Problems setting oi_RightCollar '+e);
		console.error('Problems setting oi_RightCollar',e);
	}
	this.set_RightCollar = function (value) {
		try {
			this.proxy.RightCollar = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting RightCollar '+e);
			console.error('Problems setting RightCollar',e);
		}
	};
	this.RightCollar_changed = function () {
		var value = this.RightCollar;
		return value;
	};
	try {
		this.RightCollar = X3DJSON.nodeUtil("Scene","_RightCollar");
	} catch (e) {
		console.log('Problems setting RightCollar '+e);
		console.error('Problems setting RightCollar',e);
	}
	this.set_oi_RightShoulder = function (value) {
		try {
			this.proxy.oi_RightShoulder = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting oi_RightShoulder '+e);
			console.error('Problems setting oi_RightShoulder',e);
		}
	};
	this.oi_RightShoulder_changed = function () {
		var value = this.oi_RightShoulder;
		return value;
	};
	try {
		this.oi_RightShoulder = X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_RightShoulder");
	} catch (e) {
		console.log('Problems setting oi_RightShoulder '+e);
		console.error('Problems setting oi_RightShoulder',e);
	}
	this.set_RightShoulder = function (value) {
		try {
			this.proxy.RightShoulder = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting RightShoulder '+e);
			console.error('Problems setting RightShoulder',e);
		}
	};
	this.RightShoulder_changed = function () {
		var value = this.RightShoulder;
		return value;
	};
	try {
		this.RightShoulder = X3DJSON.nodeUtil("Scene","_RightShoulder");
	} catch (e) {
		console.log('Problems setting RightShoulder '+e);
		console.error('Problems setting RightShoulder',e);
	}
	this.set_oi_RightElbow = function (value) {
		try {
			this.proxy.oi_RightElbow = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting oi_RightElbow '+e);
			console.error('Problems setting oi_RightElbow',e);
		}
	};
	this.oi_RightElbow_changed = function () {
		var value = this.oi_RightElbow;
		return value;
	};
	try {
		this.oi_RightElbow = X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_RightElbow");
	} catch (e) {
		console.log('Problems setting oi_RightElbow '+e);
		console.error('Problems setting oi_RightElbow',e);
	}
	this.set_RightElbow = function (value) {
		try {
			this.proxy.RightElbow = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting RightElbow '+e);
			console.error('Problems setting RightElbow',e);
		}
	};
	this.RightElbow_changed = function () {
		var value = this.RightElbow;
		return value;
	};
	try {
		this.RightElbow = X3DJSON.nodeUtil("Scene","_RightElbow");
	} catch (e) {
		console.log('Problems setting RightElbow '+e);
		console.error('Problems setting RightElbow',e);
	}
	this.set_oi_RightWrist = function (value) {
		try {
			this.proxy.oi_RightWrist = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting oi_RightWrist '+e);
			console.error('Problems setting oi_RightWrist',e);
		}
	};
	this.oi_RightWrist_changed = function () {
		var value = this.oi_RightWrist;
		return value;
	};
	try {
		this.oi_RightWrist = X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_RightWrist");
	} catch (e) {
		console.log('Problems setting oi_RightWrist '+e);
		console.error('Problems setting oi_RightWrist',e);
	}
	this.set_RightWrist = function (value) {
		try {
			this.proxy.RightWrist = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting RightWrist '+e);
			console.error('Problems setting RightWrist',e);
		}
	};
	this.RightWrist_changed = function () {
		var value = this.RightWrist;
		return value;
	};
	try {
		this.RightWrist = X3DJSON.nodeUtil("Scene","_RightWrist");
	} catch (e) {
		console.log('Problems setting RightWrist '+e);
		console.error('Problems setting RightWrist',e);
	}
	this.set_oi_Neck = function (value) {
		try {
			this.proxy.oi_Neck = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting oi_Neck '+e);
			console.error('Problems setting oi_Neck',e);
		}
	};
	this.oi_Neck_changed = function () {
		var value = this.oi_Neck;
		return value;
	};
	try {
		this.oi_Neck = X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_Neck");
	} catch (e) {
		console.log('Problems setting oi_Neck '+e);
		console.error('Problems setting oi_Neck',e);
	}
	this.set_Neck = function (value) {
		try {
			this.proxy.Neck = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting Neck '+e);
			console.error('Problems setting Neck',e);
		}
	};
	this.Neck_changed = function () {
		var value = this.Neck;
		return value;
	};
	try {
		this.Neck = X3DJSON.nodeUtil("Scene","_Neck");
	} catch (e) {
		console.log('Problems setting Neck '+e);
		console.error('Problems setting Neck',e);
	}
	this.set_oi_Head = function (value) {
		try {
			this.proxy.oi_Head = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting oi_Head '+e);
			console.error('Problems setting oi_Head',e);
		}
	};
	this.oi_Head_changed = function () {
		var value = this.oi_Head;
		return value;
	};
	try {
		this.oi_Head = X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_Head");
	} catch (e) {
		console.log('Problems setting oi_Head '+e);
		console.error('Problems setting oi_Head',e);
	}
	this.set_Head = function (value) {
		try {
			this.proxy.Head = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting Head '+e);
			console.error('Problems setting Head',e);
		}
	};
	this.Head_changed = function () {
		var value = this.Head;
		return value;
	};
	try {
		this.Head = X3DJSON.nodeUtil("Scene","_Head");
	} catch (e) {
		console.log('Problems setting Head '+e);
		console.error('Problems setting Head',e);
	}


ecmascript:
	this.f03e07a38 = function (v){
X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_pi_Hips", "set_fraction",  v);
X3DJSON.nodeUtil("Scene","_Hips", "translation",  X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_pi_Hips", "value_changed"));
X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_Hips", "set_fraction",  v);
X3DJSON.nodeUtil("Scene","_Hips", "rotation",  X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_Hips", "value_changed"));
X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_LeftHip", "set_fraction",  v);
X3DJSON.nodeUtil("Scene","_LeftHip", "rotation",  X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_LeftHip", "value_changed"));
X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_LeftKnee", "set_fraction",  v);
X3DJSON.nodeUtil("Scene","_LeftKnee", "rotation",  X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_LeftKnee", "value_changed"));
X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_LeftAnkle", "set_fraction",  v);
X3DJSON.nodeUtil("Scene","_LeftAnkle", "rotation",  X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_LeftAnkle", "value_changed"));
X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_LeftAnkle", "nd").set_fraction = v;
X3DJSON.nodeUtil("Scene","_LeftAnkle", "nd").rotation = X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_LeftAnkle", "nd").value_changed;
X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_RightHip", "set_fraction",  v);
X3DJSON.nodeUtil("Scene","_RightHip", "rotation",  X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_RightHip", "value_changed"));
X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_RightKnee", "set_fraction",  v);
X3DJSON.nodeUtil("Scene","_RightKnee", "rotation",  X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_RightKnee", "value_changed"));
X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_RightAnkle", "set_fraction",  v);
X3DJSON.nodeUtil("Scene","_RightAnkle", "rotation",  X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_RightAnkle", "value_changed"));
X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_RightAnkle", "nd").set_fraction = v;
X3DJSON.nodeUtil("Scene","_RightAnkle", "nd").rotation = X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_RightAnkle", "nd").value_changed;
X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_Chest", "set_fraction",  v);
X3DJSON.nodeUtil("Scene","_Chest", "rotation",  X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_Chest", "value_changed"));
X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_Chest", "").set_fraction = v;
X3DJSON.nodeUtil("Scene","_Chest", "").rotation = X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_Chest", "").value_changed;
X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_LeftCollar", "set_fraction",  v);
X3DJSON.nodeUtil("Scene","_LeftCollar", "rotation",  X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_LeftCollar", "value_changed"));
X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_LeftShoulder", "set_fraction",  v);
X3DJSON.nodeUtil("Scene","_LeftShoulder", "rotation",  X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_LeftShoulder", "value_changed"));
X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_LeftElbow", "set_fraction",  v);
X3DJSON.nodeUtil("Scene","_LeftElbow", "rotation",  X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_LeftElbow", "value_changed"));
X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_LeftWrist", "set_fraction",  v);
X3DJSON.nodeUtil("Scene","_LeftWrist", "rotation",  X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_LeftWrist", "value_changed"));
X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_RightCollar", "set_fraction",  v);
X3DJSON.nodeUtil("Scene","_RightCollar", "rotation",  X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_RightCollar", "value_changed"));
X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_RightShoulder", "set_fraction",  v);
X3DJSON.nodeUtil("Scene","_RightShoulder", "rotation",  X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_RightShoulder", "value_changed"));
X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_RightElbow", "set_fraction",  v);
X3DJSON.nodeUtil("Scene","_RightElbow", "rotation",  X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_RightElbow", "value_changed"));
X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_RightWrist", "set_fraction",  v);
X3DJSON.nodeUtil("Scene","_RightWrist", "rotation",  X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_RightWrist", "value_changed"));
X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_Neck", "set_fraction",  v);
X3DJSON.nodeUtil("Scene","_Neck", "rotation",  X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_Neck", "value_changed"));
X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_Head", "set_fraction",  v);
X3DJSON.nodeUtil("Scene","_Head", "rotation",  X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_FIELDchildren_oi_Head", "value_changed"));
}

;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/BvhSeamless3dExport1.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/BvhSeamless3dExport1.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/BvhSeamless3dExport1.json']['s03e13e80'] = new X3DJSON['Script']['Scene']['../data/BvhSeamless3dExport1.json']['s03e13e80']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/BvhSeamless3dExport1.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/BvhSeamless3dExport1.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/BvhSeamless3dExport1.json']['s03e13e80'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/BvhSeamless3dExport1.json']['s03e13e80'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/BvhSeamless3dExport1.json']['s03e13e80']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/BvhSeamless3dExport1.json']['s03e13e80']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/BvhSeamless3dExport1.json']['s03e13e80'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/BvhSeamless3dExport1.json']['s03e13e80']['ACTION'],X3DJSON['Obj']['Scene']['../data/BvhSeamless3dExport1.json']['s03e13e80']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/BvhSeamless3dExport1.json']['s03e13e80'].initialize === "function") X3DJSON['Obj']['Scene']['../data/BvhSeamless3dExport1.json']['s03e13e80'].initialize();
    if (X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_timeSensor")) {
X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_timeSensor").addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/BvhSeamless3dExport1.json']['s03e13e80'].f03e07a38(X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_timeSensor","fraction"), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/BvhSeamless3dExport1.json']['s03e13e80'].f03e07a38(X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_timeSensor","fraction"), __eventTime);
			X3DJSON['Obj']['Scene']['../data/BvhSeamless3dExport1.json']['s03e13e80'].f03e07a38(X3DJSON.nodeUtil("Scene","DECLPAnim_t02de8af0_timeSensor","fraction"), __eventTime);