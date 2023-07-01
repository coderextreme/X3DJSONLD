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
if (typeof X3DJSON['Scene../data/JoeExample.json'] === 'undefined') {
	X3DJSON['Scene../data/JoeExample.json'] = {};
}

if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/JoeExample.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/JoeExample.json'] = {};
}

X3DJSON['Script']['Scene']['../data/JoeExample.json']['OpenVault'] = function() {
	this.set_openVault = function (value) {
		try {
			this.proxy.openVault = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting openVault '+e);
			console.error('Problems setting openVault',e);
		}
	};
	this.openVault_changed = function () {
		var value = this.openVault;
		return value;
	};
	try {
		this.openVault = new SFTime();
	} catch (e) {
		console.log('Problems setting openVault '+e);
		console.error('Problems setting openVault',e);
	}
	this.set_combinationEntered = function (value) {
		try {
			this.proxy.combinationEntered = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting combinationEntered '+e);
			console.error('Problems setting combinationEntered',e);
		}
	};
	this.combinationEntered_changed = function () {
		var value = this.combinationEntered;
		return value;
	};
	try {
		this.combinationEntered = new SFBool();
	} catch (e) {
		console.log('Problems setting combinationEntered '+e);
		console.error('Problems setting combinationEntered',e);
	}
	this.set_vaultUnlocked = function (value) {
		try {
			this.proxy.vaultUnlocked = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting vaultUnlocked '+e);
			console.error('Problems setting vaultUnlocked',e);
		}
	};
	this.vaultUnlocked_changed = function () {
		var value = this.vaultUnlocked;
		return value;
	};
	try {
		this.vaultUnlocked = new SFTime();
	} catch (e) {
		console.log('Problems setting vaultUnlocked '+e);
		console.error('Problems setting vaultUnlocked',e);
	}
	this.set_unlocked = function (value) {
		try {
			this.proxy.unlocked = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting unlocked '+e);
			console.error('Problems setting unlocked',e);
		}
	};
	this.unlocked_changed = function () {
		var value = this.unlocked;
		return value;
	};
	try {
		this.unlocked = new SFBool(false);
	} catch (e) {
		console.log('Problems setting unlocked '+e);
		console.error('Problems setting unlocked',e);
	}




      ecmascript:

     
	this.combinationEntered = function (value) {

        this.proxy.unlocked = value;

      }

     ;

	this.openVault = function (value) {

      if (this.proxy.unlocked) this.proxy.vaultUnlocked = value;

      }



;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/JoeExample.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/JoeExample.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/JoeExample.json']['OpenVault'] = new X3DJSON['Script']['Scene']['../data/JoeExample.json']['OpenVault']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/JoeExample.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/JoeExample.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/JoeExample.json']['OpenVault'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/JoeExample.json']['OpenVault'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/JoeExample.json']['OpenVault']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/JoeExample.json']['OpenVault']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/JoeExample.json']['OpenVault'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/JoeExample.json']['OpenVault']['ACTION'],X3DJSON['Obj']['Scene']['../data/JoeExample.json']['OpenVault']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/JoeExample.json']['OpenVault'].initialize === "function") X3DJSON['Obj']['Scene']['../data/JoeExample.json']['OpenVault'].initialize();
    if (X3DJSON.nodeUtil("Scene","TS")) {
X3DJSON.nodeUtil("Scene","TS").addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/JoeExample.json']['OpenVault'].combinationEntered(X3DJSON.nodeUtil("Scene","TS","isOver"), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/JoeExample.json']['OpenVault'].combinationEntered(X3DJSON.nodeUtil("Scene","TS","isOver"), __eventTime);
    if (X3DJSON.nodeUtil("Scene","TS")) {
X3DJSON.nodeUtil("Scene","TS").addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/JoeExample.json']['OpenVault'].openVault(X3DJSON.nodeUtil("Scene","TS","touchTime"), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/JoeExample.json']['OpenVault'].openVault(X3DJSON.nodeUtil("Scene","TS","touchTime"), __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/JoeExample.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/JoeExample.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/JoeExample.json']['OpenVault'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/JoeExample.json']['OpenVault'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/JoeExample.json']['OpenVault']['ACTION']['vaultUnlocked'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/JoeExample.json']['OpenVault']['ACTION']['vaultUnlocked'] = [];
}
X3DJSON['Obj']['Scene']['../data/JoeExample.json']['OpenVault']['ACTION']['vaultUnlocked'].push(function(property, value) {
		if (property === 'vaultUnlocked') {
			X3DJSON.nodeUtil("Scene","Click","startTime",typeof X3DJSON['Obj']['Scene']['../data/JoeExample.json']['OpenVault'].vaultUnlocked === "function" ? X3DJSON['Obj']['Scene']['../data/JoeExample.json']['OpenVault'].vaultUnlocked() : X3DJSON['Obj']['Scene']['../data/JoeExample.json']['OpenVault'].vaultUnlocked, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","Click","startTime",typeof X3DJSON['Obj']['Scene']['../data/JoeExample.json']['OpenVault'].vaultUnlocked === "function" ? X3DJSON['Obj']['Scene']['../data/JoeExample.json']['OpenVault'].vaultUnlocked() : X3DJSON['Obj']['Scene']['../data/JoeExample.json']['OpenVault'].vaultUnlocked, __eventTime);
			X3DJSON['Obj']['Scene']['../data/JoeExample.json']['OpenVault'].combinationEntered(X3DJSON.nodeUtil("Scene","TS","isOver"), __eventTime);
			X3DJSON['Obj']['Scene']['../data/JoeExample.json']['OpenVault'].openVault(X3DJSON.nodeUtil("Scene","TS","touchTime"), __eventTime);
			X3DJSON.nodeUtil("Scene","Click","startTime",typeof X3DJSON['Obj']['Scene']['../data/JoeExample.json']['OpenVault'].vaultUnlocked === "function" ? X3DJSON['Obj']['Scene']['../data/JoeExample.json']['OpenVault'].vaultUnlocked() : X3DJSON['Obj']['Scene']['../data/JoeExample.json']['OpenVault'].vaultUnlocked, __eventTime);