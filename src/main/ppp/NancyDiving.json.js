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
if (typeof X3DJSON['Scene../data/NancyDiving.json'] === 'undefined') {
	X3DJSON['Scene../data/NancyDiving.json'] = {};
}

if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/NancyDiving.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/NancyDiving.json'] = {};
}

X3DJSON['Script']['Scene']['../data/NancyDiving.json']['finWarpScript'] = function() {
	this.set_rotationLeft = function (value) {
		try {
			this.proxy.rotationLeft = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting rotationLeft '+e);
			console.error('Problems setting rotationLeft',e);
		}
	};
	this.rotationLeft_changed = function () {
		var value = this.rotationLeft;
		return value;
	};
	try {
		this.rotationLeft = undefined;
	} catch (e) {
		console.log('Problems setting rotationLeft '+e);
		console.error('Problems setting rotationLeft',e);
	}
	this.set_rotationRight = function (value) {
		try {
			this.proxy.rotationRight = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting rotationRight '+e);
			console.error('Problems setting rotationRight',e);
		}
	};
	this.rotationRight_changed = function () {
		var value = this.rotationRight;
		return value;
	};
	try {
		this.rotationRight = undefined;
	} catch (e) {
		console.log('Problems setting rotationRight '+e);
		console.error('Problems setting rotationRight',e);
	}
	this.set_finWarpLeft = function (value) {
		try {
			this.proxy.finWarpLeft = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting finWarpLeft '+e);
			console.error('Problems setting finWarpLeft',e);
		}
	};
	this.finWarpLeft_changed = function () {
		var value = this.finWarpLeft;
		return value;
	};
	try {
		this.finWarpLeft = new SFBool();
	} catch (e) {
		console.log('Problems setting finWarpLeft '+e);
		console.error('Problems setting finWarpLeft',e);
	}
	this.set_finWarpRight = function (value) {
		try {
			this.proxy.finWarpRight = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting finWarpRight '+e);
			console.error('Problems setting finWarpRight',e);
		}
	};
	this.finWarpRight_changed = function () {
		var value = this.finWarpRight;
		return value;
	};
	try {
		this.finWarpRight = new SFBool();
	} catch (e) {
		console.log('Problems setting finWarpRight '+e);
		console.error('Problems setting finWarpRight',e);
	}


ecmascript:
	this.set_rotationLeft = function (rotationValue, timeStamp)
{
	if (rotationValue[0] <= 0)
	{
		this.proxy.finWarpLeft = false;
	}
	else
	{
		this.proxy.finWarpLeft = true;
	}
//	print ('Left  rotationValue[0] ' + rotationValue[0] + ', this.proxy.finWarpLeft=' + this.proxy.finWarpLeft);
}
;

	this.set_rotationRight = function (rotationValue, timeStamp)
{
	if (rotationValue[0] <= 0)
	{
		this.proxy.finWarpRight = false;
	}
	else
	{
		this.proxy.finWarpRight = true;
	}
//	print ('Right rotationValue[0] ' + rotationValue[0] + ', this.proxy.finWarpRight=' + this.proxy.finWarpRight);
}

;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDiving.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDiving.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'] = new X3DJSON['Script']['Scene']['../data/NancyDiving.json']['finWarpScript']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDiving.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDiving.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript']['ACTION'],X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].initialize === "function") X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/NancyDiving.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/NancyDiving.json'] = {};
}

X3DJSON['Script']['Scene']['../data/NancyDiving.json']['FinScript'] = function() {
	this.set_keyValueRight = function (value) {
		try {
			this.proxy.keyValueRight = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting keyValueRight '+e);
			console.error('Problems setting keyValueRight',e);
		}
	};
	this.keyValueRight_changed = function () {
		var value = this.keyValueRight;
		return value;
	};
	try {
		this.keyValueRight = new MFVec3f();
	} catch (e) {
		console.log('Problems setting keyValueRight '+e);
		console.error('Problems setting keyValueRight',e);
	}
	this.set_keyValueLeft = function (value) {
		try {
			this.proxy.keyValueLeft = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting keyValueLeft '+e);
			console.error('Problems setting keyValueLeft',e);
		}
	};
	this.keyValueLeft_changed = function () {
		var value = this.keyValueLeft;
		return value;
	};
	try {
		this.keyValueLeft = new MFVec3f();
	} catch (e) {
		console.log('Problems setting keyValueLeft '+e);
		console.error('Problems setting keyValueLeft',e);
	}
	this.set_fraction = function (value) {
		try {
			this.proxy.fraction = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting fraction '+e);
			console.error('Problems setting fraction',e);
		}
	};
	this.fraction_changed = function () {
		var value = this.fraction;
		return value;
	};
	try {
		this.fraction = undefined;
	} catch (e) {
		console.log('Problems setting fraction '+e);
		console.error('Problems setting fraction',e);
	}
	this.set_finL = function (value) {
		try {
			this.proxy.finL = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting finL '+e);
			console.error('Problems setting finL',e);
		}
	};
	this.finL_changed = function () {
		var value = this.finL;
		return value;
	};
	try {
		this.finL = new SFBool();
	} catch (e) {
		console.log('Problems setting finL '+e);
		console.error('Problems setting finL',e);
	}
	this.set_finR = function (value) {
		try {
			this.proxy.finR = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting finR '+e);
			console.error('Problems setting finR',e);
		}
	};
	this.finR_changed = function () {
		var value = this.finR;
		return value;
	};
	try {
		this.finR = new SFBool();
	} catch (e) {
		console.log('Problems setting finR '+e);
		console.error('Problems setting finR',e);
	}
	this.set_finWarpL = function (value) {
		try {
			this.proxy.finWarpL = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting finWarpL '+e);
			console.error('Problems setting finWarpL',e);
		}
	};
	this.finWarpL_changed = function () {
		var value = this.finWarpL;
		return value;
	};
	try {
		this.finWarpL = new SFInt32(0);
	} catch (e) {
		console.log('Problems setting finWarpL '+e);
		console.error('Problems setting finWarpL',e);
	}
	this.set_finWarpR = function (value) {
		try {
			this.proxy.finWarpR = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting finWarpR '+e);
			console.error('Problems setting finWarpR',e);
		}
	};
	this.finWarpR_changed = function () {
		var value = this.finWarpR;
		return value;
	};
	try {
		this.finWarpR = new SFInt32(0);
	} catch (e) {
		console.log('Problems setting finWarpR '+e);
		console.error('Problems setting finWarpR',e);
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
		this.traceEnabled = new SFBool(false);
	} catch (e) {
		console.log('Problems setting traceEnabled '+e);
		console.error('Problems setting traceEnabled',e);
	}


ecmascript:
	this.finL = function (value, timeStamp)
{
	if (value == 0)
	{
		this.proxy.finWarpL = 0;
	}
	else
	{
		this.proxy.finWarpL = 1;
	}
	//print ('this.proxy.finWarpL' + this.proxy.finWarpL);
}
;

	this.finR = function (value, timeStamp)
{
	if (value == 0)
	{
		this.proxy.finWarpR = 0;
	}
	else
	{
		this.proxy.finWarpR = 1;
	}
	//print ('this.proxy.finWarpR' + this.proxy.finWarpR);
};

	this.finMove = function (fraction, timeStamp)
 {
	if (this.proxy.finWarpL == 1)
	{
		// level 3 (warp outside) Left
		kVL7 = new SFVec3f(1.25, 0, 25);
		kVL8 = new SFVec3f(2.5, 0, 30);
 		kVL9 = new SFVec3f(3.25, 0, 34);
	}
	else
	{
		// level -2 (warp inside) Left
		kVL7 = new SFVec3f(-1.25, 0, 25);
		kVL8 = new SFVec3f(-2.5, 0, 30);
 		kVL9 = new SFVec3f(-3.25, 0, 34);
	}

	if (this.proxy.finWarpR == 0)
	{
		// level  1 (warp outside ) Right
		kVR7 = new SFVec3f(1.25, 0, 25);
		kVR8 = new SFVec3f(2.5, 0, 30);
 		kVR9 = new SFVec3f(3.25, 0, 34);

	}
	else
	{
		// level  -2 ( warp inside) Right
		kVR7 = new SFVec3f(-1.25, 0, 25);
		kVR8 = new SFVec3f(-2.5, 0, 30);
 		kVR9 = new SFVec3f(-3.25, 0, 34);
	}

	// Left Fin (fixed spine)
	kVL1 = new SFVec3f(0, 0, 1);
	kVL2 = new SFVec3f(0, 0, 5);
	kVL3 = new SFVec3f(0, 0, 8);
	kVL4 = new SFVec3f(0, 0, 12);
	kVL5 = new SFVec3f(0, 0, 15);
	kVL6 = new SFVec3f(0, 0, 18);
	this.proxy.keyValueLeft = new MFVec3f(kVL1, kVL2, kVL3, kVL4, kVL5, kVL6, kVL7, kVL8, kVL9);

	// Right Fin (fixed spine)
	kVR1 = new SFVec3f(0, 0, 1);
	kVR2 = new SFVec3f(0, 0, 5);
	kVR3 = new SFVec3f(0, 0, 8);
	kVR4 = new SFVec3f(0, 0, 12);
	kVR5 = new SFVec3f(0, 0, 15);
	kVR6 = new SFVec3f(0, 0, 18);
	this.proxy.keyValueRight = new MFVec3f(kVR1, kVR2, kVR3, kVR4, kVR5, kVR6, kVR7, kVR8, kVR9);

	//this.tracePrint ('this.proxy.keyValueLeft =' + this.proxy.keyValueLeft);
	//this.tracePrint ('this.proxy.keyValueRight=' + this.proxy.keyValueRight);
}
;

	this.set_fraction = function (value, timeStamp)
{
	this.finMove(value);
	//this.tracePrint('time fraction =' + value);
}
;

	this.tracePrint = function (outputString)
{
	if (this.proxy.traceEnabled) console.error ('[Fin Move]' + outputString);
}

;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDiving.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDiving.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript'] = new X3DJSON['Script']['Scene']['../data/NancyDiving.json']['FinScript']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDiving.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDiving.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript']['ACTION'],X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript'].initialize === "function") X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript'].initialize();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDiving.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDiving.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript']['ACTION']['finWarpLeft'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript']['ACTION']['finWarpLeft'] = [];
}
X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript']['ACTION']['finWarpLeft'].push(function(property, value) {
		if (property === 'finWarpLeft') {
		if (X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript'] && typeof X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].finWarpLeft === "function" ? X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].finWarpLeft() : X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].finWarpLeft) {
			X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript'].finL(typeof X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].finWarpLeft === "function" ? X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].finWarpLeft() : X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].finWarpLeft, __eventTime);
		}
		}
});
		if (X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript'] && typeof X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].finWarpLeft === "function" ? X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].finWarpLeft() : X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].finWarpLeft) {
			X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript'].finL(typeof X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].finWarpLeft === "function" ? X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].finWarpLeft() : X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].finWarpLeft, __eventTime);
		}
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDiving.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDiving.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript']['ACTION']['finWarpRight'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript']['ACTION']['finWarpRight'] = [];
}
X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript']['ACTION']['finWarpRight'].push(function(property, value) {
		if (property === 'finWarpRight') {
		if (X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript'] && typeof X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].finWarpRight === "function" ? X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].finWarpRight() : X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].finWarpRight) {
			X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript'].finR(typeof X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].finWarpRight === "function" ? X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].finWarpRight() : X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].finWarpRight, __eventTime);
		}
		}
});
		if (X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript'] && typeof X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].finWarpRight === "function" ? X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].finWarpRight() : X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].finWarpRight) {
			X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript'].finR(typeof X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].finWarpRight === "function" ? X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].finWarpRight() : X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].finWarpRight, __eventTime);
		}
    if (X3DJSON.nodeUtil("Scene","FinTriggerProximitySensor")) {
X3DJSON.nodeUtil("Scene","FinTriggerProximitySensor").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","FinClock")) {
X3DJSON.nodeUtil("Scene","FinClock").addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript'].set_fraction(X3DJSON.nodeUtil("Scene","FinClock","fraction"), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript'].set_fraction(X3DJSON.nodeUtil("Scene","FinClock","fraction"), __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDiving.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDiving.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript']['ACTION']['keyValueRight'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript']['ACTION']['keyValueRight'] = [];
}
X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript']['ACTION']['keyValueRight'].push(function(property, value) {
		if (property === 'keyValueRight') {
			X3DJSON.nodeUtil("Scene","FinExtrusionRight","spine",typeof X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript'].keyValueRight === "function" ? X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript'].keyValueRight() : X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript'].keyValueRight, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","FinExtrusionRight","spine",typeof X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript'].keyValueRight === "function" ? X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript'].keyValueRight() : X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript'].keyValueRight, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDiving.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDiving.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript']['ACTION']['keyValueLeft'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript']['ACTION']['keyValueLeft'] = [];
}
X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript']['ACTION']['keyValueLeft'].push(function(property, value) {
		if (property === 'keyValueLeft') {
			X3DJSON.nodeUtil("Scene","FinExtrusionLeft","spine",typeof X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript'].keyValueLeft === "function" ? X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript'].keyValueLeft() : X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript'].keyValueLeft, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","FinExtrusionLeft","spine",typeof X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript'].keyValueLeft === "function" ? X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript'].keyValueLeft() : X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript'].keyValueLeft, __eventTime);
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
			X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].set_rotationLeft(X3DJSON.nodeUtil("Scene","l_hip_RotationInterpolator_BasicDive","value"), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].set_rotationLeft(X3DJSON.nodeUtil("Scene","l_hip_RotationInterpolator_BasicDive","value"), __eventTime);
    if (X3DJSON.nodeUtil("Scene","l_hip_RotationInterpolator_BasicDive")) {
X3DJSON.nodeUtil("Scene","l_hip_RotationInterpolator_BasicDive").addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].set_rotationRight(X3DJSON.nodeUtil("Scene","l_hip_RotationInterpolator_BasicDive","value"), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].set_rotationRight(X3DJSON.nodeUtil("Scene","l_hip_RotationInterpolator_BasicDive","value"), __eventTime);
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
		if (X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript'] && typeof X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].finWarpLeft === "function" ? X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].finWarpLeft() : X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].finWarpLeft) {
			X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript'].finL(typeof X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].finWarpLeft === "function" ? X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].finWarpLeft() : X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].finWarpLeft, __eventTime);
		}
		if (X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript'] && typeof X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].finWarpRight === "function" ? X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].finWarpRight() : X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].finWarpRight) {
			X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript'].finR(typeof X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].finWarpRight === "function" ? X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].finWarpRight() : X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].finWarpRight, __eventTime);
		}
			X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript'].set_fraction(X3DJSON.nodeUtil("Scene","FinClock","fraction"), __eventTime);
			X3DJSON.nodeUtil("Scene","FinExtrusionRight","spine",typeof X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript'].keyValueRight === "function" ? X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript'].keyValueRight() : X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript'].keyValueRight, __eventTime);
			X3DJSON.nodeUtil("Scene","FinExtrusionLeft","spine",typeof X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript'].keyValueLeft === "function" ? X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript'].keyValueLeft() : X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['FinScript'].keyValueLeft, __eventTime);
			X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].set_rotationLeft(X3DJSON.nodeUtil("Scene","l_hip_RotationInterpolator_BasicDive","value"), __eventTime);
			X3DJSON['Obj']['Scene']['../data/NancyDiving.json']['finWarpScript'].set_rotationRight(X3DJSON.nodeUtil("Scene","l_hip_RotationInterpolator_BasicDive","value"), __eventTime);