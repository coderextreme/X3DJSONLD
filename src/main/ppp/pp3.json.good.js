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
if (typeof X3DJSON['Scene../data/pp3.json'] === 'undefined') {
	X3DJSON['Scene../data/pp3.json'] = {};
}

if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/pp3.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/pp3.json'] = {};
}

X3DJSON['Script']['Scene']['../data/pp3.json']['RightSingleToMultiString'] = function() {
	this.set_rightstring = function (value) {
		try {
			this.proxy.rightstring = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting rightstring '+e);
			console.error('Problems setting rightstring',e);
		}
	};
	this.rightstring_changed = function () {
		var value = this.rightstring;
		return value;
	};
	try {
		this.rightstring = undefined;
	} catch (e) {
		console.log('Problems setting rightstring '+e);
		console.error('Problems setting rightstring',e);
	}
	this.set_rightlines = function (value) {
		try {
			this.proxy.rightlines = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting rightlines '+e);
			console.error('Problems setting rightlines',e);
		}
	};
	this.rightlines_changed = function () {
		var value = this.rightlines;
		return value;
	};
	try {
		this.rightlines = new MFString();
	} catch (e) {
		console.log('Problems setting rightlines '+e);
		console.error('Problems setting rightlines',e);
	}

ecmascript:

	this.initialize = function () {
	this.proxy.rightlines = new MFString("");
}
;

	this.set_rightstring = function (rightstr) {
	this.proxy.rightlines = new MFString(rightstr);
}
;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/pp3.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/pp3.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/pp3.json']['RightSingleToMultiString'] = new X3DJSON['Script']['Scene']['../data/pp3.json']['RightSingleToMultiString']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/pp3.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/pp3.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/pp3.json']['RightSingleToMultiString'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/pp3.json']['RightSingleToMultiString'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/pp3.json']['RightSingleToMultiString']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/pp3.json']['RightSingleToMultiString']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/pp3.json']['RightSingleToMultiString'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/pp3.json']['RightSingleToMultiString']['ACTION'],X3DJSON['Obj']['Scene']['../data/pp3.json']['RightSingleToMultiString']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/pp3.json']['RightSingleToMultiString'].initialize === "function") X3DJSON['Obj']['Scene']['../data/pp3.json']['RightSingleToMultiString'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/pp3.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/pp3.json'] = {};
}

X3DJSON['Script']['Scene']['../data/pp3.json']['UpSingleToMultiString'] = function() {
	this.set_upstring = function (value) {
		try {
			this.proxy.upstring = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting upstring '+e);
			console.error('Problems setting upstring',e);
		}
	};
	this.upstring_changed = function () {
		var value = this.upstring;
		return value;
	};
	try {
		this.upstring = undefined;
	} catch (e) {
		console.log('Problems setting upstring '+e);
		console.error('Problems setting upstring',e);
	}
	this.set_uplines = function (value) {
		try {
			this.proxy.uplines = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting uplines '+e);
			console.error('Problems setting uplines',e);
		}
	};
	this.uplines_changed = function () {
		var value = this.uplines;
		return value;
	};
	try {
		this.uplines = new MFString();
	} catch (e) {
		console.log('Problems setting uplines '+e);
		console.error('Problems setting uplines',e);
	}

ecmascript:

	this.initialize = function () {
	this.proxy.uplines = new MFString("");
}
;

	this.set_upstring = function (upstr) {
	this.proxy.uplines = new MFString(upstr);
}
;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/pp3.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/pp3.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/pp3.json']['UpSingleToMultiString'] = new X3DJSON['Script']['Scene']['../data/pp3.json']['UpSingleToMultiString']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/pp3.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/pp3.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/pp3.json']['UpSingleToMultiString'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/pp3.json']['UpSingleToMultiString'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/pp3.json']['UpSingleToMultiString']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/pp3.json']['UpSingleToMultiString']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/pp3.json']['UpSingleToMultiString'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/pp3.json']['UpSingleToMultiString']['ACTION'],X3DJSON['Obj']['Scene']['../data/pp3.json']['UpSingleToMultiString']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/pp3.json']['UpSingleToMultiString'].initialize === "function") X3DJSON['Obj']['Scene']['../data/pp3.json']['UpSingleToMultiString'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/pp3.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/pp3.json'] = {};
}

X3DJSON['Script']['Scene']['../data/pp3.json']['CenterSingleToMultiString'] = function() {
	this.set_centerstring = function (value) {
		try {
			this.proxy.centerstring = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting centerstring '+e);
			console.error('Problems setting centerstring',e);
		}
	};
	this.centerstring_changed = function () {
		var value = this.centerstring;
		return value;
	};
	try {
		this.centerstring = undefined;
	} catch (e) {
		console.log('Problems setting centerstring '+e);
		console.error('Problems setting centerstring',e);
	}
	this.set_centerlines = function (value) {
		try {
			this.proxy.centerlines = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting centerlines '+e);
			console.error('Problems setting centerlines',e);
		}
	};
	this.centerlines_changed = function () {
		var value = this.centerlines;
		return value;
	};
	try {
		this.centerlines = new MFString();
	} catch (e) {
		console.log('Problems setting centerlines '+e);
		console.error('Problems setting centerlines',e);
	}

ecmascript:

	this.initialize = function () {
	this.proxy.centerlines = new MFString("");
}
;

	this.set_centerstring = function (centerstr) {
	this.proxy.centerlines = new MFString(centerstr);
}
;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/pp3.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/pp3.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/pp3.json']['CenterSingleToMultiString'] = new X3DJSON['Script']['Scene']['../data/pp3.json']['CenterSingleToMultiString']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/pp3.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/pp3.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/pp3.json']['CenterSingleToMultiString'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/pp3.json']['CenterSingleToMultiString'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/pp3.json']['CenterSingleToMultiString']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/pp3.json']['CenterSingleToMultiString']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/pp3.json']['CenterSingleToMultiString'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/pp3.json']['CenterSingleToMultiString']['ACTION'],X3DJSON['Obj']['Scene']['../data/pp3.json']['CenterSingleToMultiString']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/pp3.json']['CenterSingleToMultiString'].initialize === "function") X3DJSON['Obj']['Scene']['../data/pp3.json']['CenterSingleToMultiString'].initialize();
    if (X3DJSON.nodeUtil("Scene","CenterSensor")) {
X3DJSON.nodeUtil("Scene","CenterSensor").addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/pp3.json']['CenterSingleToMultiString'].set_centerstring(X3DJSON.nodeUtil("Scene","CenterSensor","enteredText"), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/pp3.json']['CenterSingleToMultiString'].set_centerstring(X3DJSON.nodeUtil("Scene","CenterSensor","enteredText"), __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/pp3.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/pp3.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/pp3.json']['CenterSingleToMultiString'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/pp3.json']['CenterSingleToMultiString'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/pp3.json']['CenterSingleToMultiString']['ACTION']['centerlines'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/pp3.json']['CenterSingleToMultiString']['ACTION']['centerlines'] = [];
}
X3DJSON['Obj']['Scene']['../data/pp3.json']['CenterSingleToMultiString']['ACTION']['centerlines'].push(function(property, value) {
		if (property === 'centerlines') {
			X3DJSON.nodeUtil("Scene","CenterString","string",typeof X3DJSON['Obj']['Scene']['../data/pp3.json']['CenterSingleToMultiString'].centerlines === "function" ? X3DJSON['Obj']['Scene']['../data/pp3.json']['CenterSingleToMultiString'].centerlines() : X3DJSON['Obj']['Scene']['../data/pp3.json']['CenterSingleToMultiString'].centerlines, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","CenterString","string",typeof X3DJSON['Obj']['Scene']['../data/pp3.json']['CenterSingleToMultiString'].centerlines === "function" ? X3DJSON['Obj']['Scene']['../data/pp3.json']['CenterSingleToMultiString'].centerlines() : X3DJSON['Obj']['Scene']['../data/pp3.json']['CenterSingleToMultiString'].centerlines, __eventTime);
    if (X3DJSON.nodeUtil("Scene","CenterTouch")) {
X3DJSON.nodeUtil("Scene","CenterTouch").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","RightSensor")) {
X3DJSON.nodeUtil("Scene","RightSensor").addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/pp3.json']['RightSingleToMultiString'].set_rightstring(X3DJSON.nodeUtil("Scene","RightSensor","enteredText"), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/pp3.json']['RightSingleToMultiString'].set_rightstring(X3DJSON.nodeUtil("Scene","RightSensor","enteredText"), __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/pp3.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/pp3.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/pp3.json']['RightSingleToMultiString'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/pp3.json']['RightSingleToMultiString'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/pp3.json']['RightSingleToMultiString']['ACTION']['rightlines'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/pp3.json']['RightSingleToMultiString']['ACTION']['rightlines'] = [];
}
X3DJSON['Obj']['Scene']['../data/pp3.json']['RightSingleToMultiString']['ACTION']['rightlines'].push(function(property, value) {
		if (property === 'rightlines') {
			X3DJSON.nodeUtil("Scene","RightString","string",typeof X3DJSON['Obj']['Scene']['../data/pp3.json']['RightSingleToMultiString'].rightlines === "function" ? X3DJSON['Obj']['Scene']['../data/pp3.json']['RightSingleToMultiString'].rightlines() : X3DJSON['Obj']['Scene']['../data/pp3.json']['RightSingleToMultiString'].rightlines, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","RightString","string",typeof X3DJSON['Obj']['Scene']['../data/pp3.json']['RightSingleToMultiString'].rightlines === "function" ? X3DJSON['Obj']['Scene']['../data/pp3.json']['RightSingleToMultiString'].rightlines() : X3DJSON['Obj']['Scene']['../data/pp3.json']['RightSingleToMultiString'].rightlines, __eventTime);
    if (X3DJSON.nodeUtil("Scene","RightTouch")) {
X3DJSON.nodeUtil("Scene","RightTouch").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","UpSensor")) {
X3DJSON.nodeUtil("Scene","UpSensor").addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/pp3.json']['UpSingleToMultiString'].set_upstring(X3DJSON.nodeUtil("Scene","UpSensor","enteredText"), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/pp3.json']['UpSingleToMultiString'].set_upstring(X3DJSON.nodeUtil("Scene","UpSensor","enteredText"), __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/pp3.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/pp3.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/pp3.json']['UpSingleToMultiString'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/pp3.json']['UpSingleToMultiString'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/pp3.json']['UpSingleToMultiString']['ACTION']['uplines'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/pp3.json']['UpSingleToMultiString']['ACTION']['uplines'] = [];
}
X3DJSON['Obj']['Scene']['../data/pp3.json']['UpSingleToMultiString']['ACTION']['uplines'].push(function(property, value) {
		if (property === 'uplines') {
			X3DJSON.nodeUtil("Scene","UpString","string",typeof X3DJSON['Obj']['Scene']['../data/pp3.json']['UpSingleToMultiString'].uplines === "function" ? X3DJSON['Obj']['Scene']['../data/pp3.json']['UpSingleToMultiString'].uplines() : X3DJSON['Obj']['Scene']['../data/pp3.json']['UpSingleToMultiString'].uplines, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","UpString","string",typeof X3DJSON['Obj']['Scene']['../data/pp3.json']['UpSingleToMultiString'].uplines === "function" ? X3DJSON['Obj']['Scene']['../data/pp3.json']['UpSingleToMultiString'].uplines() : X3DJSON['Obj']['Scene']['../data/pp3.json']['UpSingleToMultiString'].uplines, __eventTime);
    if (X3DJSON.nodeUtil("Scene","UpTouch")) {
X3DJSON.nodeUtil("Scene","UpTouch").addEventListener('outputchange', function(event) {
}, false);
}
			X3DJSON['Obj']['Scene']['../data/pp3.json']['CenterSingleToMultiString'].set_centerstring(X3DJSON.nodeUtil("Scene","CenterSensor","enteredText"), __eventTime);
			X3DJSON.nodeUtil("Scene","CenterString","string",typeof X3DJSON['Obj']['Scene']['../data/pp3.json']['CenterSingleToMultiString'].centerlines === "function" ? X3DJSON['Obj']['Scene']['../data/pp3.json']['CenterSingleToMultiString'].centerlines() : X3DJSON['Obj']['Scene']['../data/pp3.json']['CenterSingleToMultiString'].centerlines, __eventTime);
			X3DJSON['Obj']['Scene']['../data/pp3.json']['RightSingleToMultiString'].set_rightstring(X3DJSON.nodeUtil("Scene","RightSensor","enteredText"), __eventTime);
			X3DJSON.nodeUtil("Scene","RightString","string",typeof X3DJSON['Obj']['Scene']['../data/pp3.json']['RightSingleToMultiString'].rightlines === "function" ? X3DJSON['Obj']['Scene']['../data/pp3.json']['RightSingleToMultiString'].rightlines() : X3DJSON['Obj']['Scene']['../data/pp3.json']['RightSingleToMultiString'].rightlines, __eventTime);
			X3DJSON['Obj']['Scene']['../data/pp3.json']['UpSingleToMultiString'].set_upstring(X3DJSON.nodeUtil("Scene","UpSensor","enteredText"), __eventTime);
			X3DJSON.nodeUtil("Scene","UpString","string",typeof X3DJSON['Obj']['Scene']['../data/pp3.json']['UpSingleToMultiString'].uplines === "function" ? X3DJSON['Obj']['Scene']['../data/pp3.json']['UpSingleToMultiString'].uplines() : X3DJSON['Obj']['Scene']['../data/pp3.json']['UpSingleToMultiString'].uplines, __eventTime);