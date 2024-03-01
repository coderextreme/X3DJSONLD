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
if (typeof X3DJSON['Scene../data/HAnimBehaviorPrototypes.json'] === 'undefined') {
	X3DJSON['Scene../data/HAnimBehaviorPrototypes.json'] = {};
}

if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/HAnimBehaviorPrototypes.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/HAnimBehaviorPrototypes.json'] = {};
}

X3DJSON['Script']['Scene']['../data/HAnimBehaviorPrototypes.json']['DECLHAnimBodyBehaviorChooser_ChooserTest_BehaviorSelectionScript'] = function() {
	this.set_HumanoidArray = function (value) {
		try {
			this.proxy.HumanoidArray = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting HumanoidArray '+e);
			console.error('Problems setting HumanoidArray',e);
		}
	};
	this.HumanoidArray_changed = function () {
		var value = this.HumanoidArray;
		return value;
	};
	try {
		this.HumanoidArray = new MFNode();
	} catch (e) {
		console.log('Problems setting HumanoidArray '+e);
		console.error('Problems setting HumanoidArray',e);
	}
	this.set_whichBody = function (value) {
		try {
			this.proxy.whichBody = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting whichBody '+e);
			console.error('Problems setting whichBody',e);
		}
	};
	this.whichBody_changed = function () {
		var value = this.whichBody;
		return value;
	};
	try {
		this.whichBody = new SFInt32(0);
	} catch (e) {
		console.log('Problems setting whichBody '+e);
		console.error('Problems setting whichBody',e);
	}
	this.set_whichBody = function (value) {
		try {
			this.proxy.whichBody = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting whichBody '+e);
			console.error('Problems setting whichBody',e);
		}
	};
	this.whichBody_changed = function () {
		var value = this.whichBody;
		return value;
	};
	try {
		this.whichBody = new SFInt32(0);
	} catch (e) {
		console.log('Problems setting whichBody '+e);
		console.error('Problems setting whichBody',e);
	}
	this.set_whichBody = function (value) {
		try {
			this.proxy.whichBody = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting whichBody '+e);
			console.error('Problems setting whichBody',e);
		}
	};
	this.whichBody_changed = function () {
		var value = this.whichBody;
		return value;
	};
	try {
		this.whichBody = new SFInt32(0);
	} catch (e) {
		console.log('Problems setting whichBody '+e);
		console.error('Problems setting whichBody',e);
	}
	this.set_hAnimBehaviorNodes = function (value) {
		try {
			this.proxy.hAnimBehaviorNodes = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting hAnimBehaviorNodes '+e);
			console.error('Problems setting hAnimBehaviorNodes',e);
		}
	};
	this.hAnimBehaviorNodes_changed = function () {
		var value = this.hAnimBehaviorNodes;
		return value;
	};
	try {
		this.hAnimBehaviorNodes = new MFNode();
	} catch (e) {
		console.log('Problems setting hAnimBehaviorNodes '+e);
		console.error('Problems setting hAnimBehaviorNodes',e);
	}
	this.set_enabledBehaviorsArray = function (value) {
		try {
			this.proxy.enabledBehaviorsArray = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting enabledBehaviorsArray '+e);
			console.error('Problems setting enabledBehaviorsArray',e);
		}
	};
	this.enabledBehaviorsArray_changed = function () {
		var value = this.enabledBehaviorsArray;
		return value;
	};
	try {
		this.enabledBehaviorsArray = new MFBool(ru);
	} catch (e) {
		console.log('Problems setting enabledBehaviorsArray '+e);
		console.error('Problems setting enabledBehaviorsArray',e);
	}
	this.set_enableBehavior = function (value) {
		try {
			this.proxy.enableBehavior = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting enableBehavior '+e);
			console.error('Problems setting enableBehavior',e);
		}
	};
	this.enableBehavior_changed = function () {
		var value = this.enableBehavior;
		return value;
	};
	try {
		this.enableBehavior = new SFInt32();
	} catch (e) {
		console.log('Problems setting enableBehavior '+e);
		console.error('Problems setting enableBehavior',e);
	}
	this.set_disableBehavior = function (value) {
		try {
			this.proxy.disableBehavior = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting disableBehavior '+e);
			console.error('Problems setting disableBehavior',e);
		}
	};
	this.disableBehavior_changed = function () {
		var value = this.disableBehavior;
		return value;
	};
	try {
		this.disableBehavior = new SFInt32();
	} catch (e) {
		console.log('Problems setting disableBehavior '+e);
		console.error('Problems setting disableBehavior',e);
	}
	this.set_timeSensorNode = function (value) {
		try {
			this.proxy.timeSensorNode = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting timeSensorNode '+e);
			console.error('Problems setting timeSensorNode',e);
		}
	};
	this.timeSensorNode_changed = function () {
		var value = this.timeSensorNode;
		return value;
	};
	try {
		this.timeSensorNode = X3DJSON.nodeUtil("Scene","DECLHAnimBodyBehaviorChooser_ChooserTest_TimeSensorHolderStartStopTimes");
	} catch (e) {
		console.log('Problems setting timeSensorNode '+e);
		console.error('Problems setting timeSensorNode',e);
	}
	this.set_previousBodyIndex = function (value) {
		try {
			this.proxy.previousBodyIndex = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting previousBodyIndex '+e);
			console.error('Problems setting previousBodyIndex',e);
		}
	};
	this.previousBodyIndex_changed = function () {
		var value = this.previousBodyIndex;
		return value;
	};
	try {
		this.previousBodyIndex = new SFInt32(-1);
	} catch (e) {
		console.log('Problems setting previousBodyIndex '+e);
		console.error('Problems setting previousBodyIndex',e);
	}
	this.set_traceEnabled = function (value) {
		try {
			this.proxy.traceEnabled = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting traceEnabled '+e);
			console.error('Problems setting traceEnabled',e);
		}
	};
	this.traceEnabled_changed = function () {
		var value = this.traceEnabled;
		return value;
	};
	try {
		this.traceEnabled = new SFBool(true);
	} catch (e) {
		console.log('Problems setting traceEnabled '+e);
		console.error('Problems setting traceEnabled',e);
	}
};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/HAnimBehaviorPrototypes.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/HAnimBehaviorPrototypes.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/HAnimBehaviorPrototypes.json']['DECLHAnimBodyBehaviorChooser_ChooserTest_BehaviorSelectionScript'] = new X3DJSON['Script']['Scene']['../data/HAnimBehaviorPrototypes.json']['DECLHAnimBodyBehaviorChooser_ChooserTest_BehaviorSelectionScript']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/HAnimBehaviorPrototypes.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/HAnimBehaviorPrototypes.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/HAnimBehaviorPrototypes.json']['DECLHAnimBodyBehaviorChooser_ChooserTest_BehaviorSelectionScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/HAnimBehaviorPrototypes.json']['DECLHAnimBodyBehaviorChooser_ChooserTest_BehaviorSelectionScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/HAnimBehaviorPrototypes.json']['DECLHAnimBodyBehaviorChooser_ChooserTest_BehaviorSelectionScript']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/HAnimBehaviorPrototypes.json']['DECLHAnimBodyBehaviorChooser_ChooserTest_BehaviorSelectionScript']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/HAnimBehaviorPrototypes.json']['DECLHAnimBodyBehaviorChooser_ChooserTest_BehaviorSelectionScript'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/HAnimBehaviorPrototypes.json']['DECLHAnimBodyBehaviorChooser_ChooserTest_BehaviorSelectionScript']['ACTION'],X3DJSON['Obj']['Scene']['../data/HAnimBehaviorPrototypes.json']['DECLHAnimBodyBehaviorChooser_ChooserTest_BehaviorSelectionScript']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/HAnimBehaviorPrototypes.json']['DECLHAnimBodyBehaviorChooser_ChooserTest_BehaviorSelectionScript'].initialize === "function") X3DJSON['Obj']['Scene']['../data/HAnimBehaviorPrototypes.json']['DECLHAnimBodyBehaviorChooser_ChooserTest_BehaviorSelectionScript'].initialize();
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock")) {
X3DJSON.nodeUtil("Scene","DECLHAnimBehavior_BehaviorTest1_BehaviorClock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","undefined")) {
X3DJSON.nodeUtil("Scene","undefined").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","undefined")) {
X3DJSON.nodeUtil("Scene","undefined").addEventListener('outputchange', function(event) {
}, false);
}
