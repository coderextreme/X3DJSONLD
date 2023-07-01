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
if (typeof X3DJSON['Scene../data/ObliqueStrategies.json'] === 'undefined') {
	X3DJSON['Scene../data/ObliqueStrategies.json'] = {};
}

if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/ObliqueStrategies.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/ObliqueStrategies.json'] = {};
}

X3DJSON['Script']['Scene']['../data/ObliqueStrategies.json']['TextScript'] = function() {
	this.set_index = function (value) {
		try {
			this.proxy.index = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting index '+e);
			console.error('Problems setting index',e);
		}
	};
	this.index_changed = function () {
		var value = this.index;
		return value;
	};
	try {
		this.index = new SFInt32(0);
	} catch (e) {
		console.log('Problems setting index '+e);
		console.error('Problems setting index',e);
	}
	this.set_string = function (value) {
		try {
			this.proxy.string = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting string '+e);
			console.error('Problems setting string',e);
		}
	};
	this.string_changed = function () {
		var value = this.string;
		return value;
	};
	try {
		this.string = undefined;
	} catch (e) {
		console.log('Problems setting string '+e);
		console.error('Problems setting string',e);
	}
	this.set_textToSpeechUrl = function (value) {
		try {
			this.proxy.textToSpeechUrl = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting textToSpeechUrl '+e);
			console.error('Problems setting textToSpeechUrl',e);
		}
	};
	this.textToSpeechUrl_changed = function () {
		var value = this.textToSpeechUrl;
		return value;
	};
	try {
		this.textToSpeechUrl = new MFString();
	} catch (e) {
		console.log('Problems setting textToSpeechUrl '+e);
		console.error('Problems setting textToSpeechUrl',e);
	}
	this.set_newCardTime = function (value) {
		try {
			this.proxy.newCardTime = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting newCardTime '+e);
			console.error('Problems setting newCardTime',e);
		}
	};
	this.newCardTime_changed = function () {
		var value = this.newCardTime;
		return value;
	};
	try {
		this.newCardTime = new SFTime();
	} catch (e) {
		console.log('Problems setting newCardTime '+e);
		console.error('Problems setting newCardTime',e);
	}
	this.set_selectPreviousCard = function (value) {
		try {
			this.proxy.selectPreviousCard = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting selectPreviousCard '+e);
			console.error('Problems setting selectPreviousCard',e);
		}
	};
	this.selectPreviousCard_changed = function () {
		var value = this.selectPreviousCard;
		return value;
	};
	try {
		this.selectPreviousCard = new SFBool();
	} catch (e) {
		console.log('Problems setting selectPreviousCard '+e);
		console.error('Problems setting selectPreviousCard',e);
	}
	this.set_selectNextCard = function (value) {
		try {
			this.proxy.selectNextCard = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting selectNextCard '+e);
			console.error('Problems setting selectNextCard',e);
		}
	};
	this.selectNextCard_changed = function () {
		var value = this.selectNextCard;
		return value;
	};
	try {
		this.selectNextCard = new SFBool();
	} catch (e) {
		console.log('Problems setting selectNextCard '+e);
		console.error('Problems setting selectNextCard',e);
	}
	this.set_selectRandomCard = function (value) {
		try {
			this.proxy.selectRandomCard = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting selectRandomCard '+e);
			console.error('Problems setting selectRandomCard',e);
		}
	};
	this.selectRandomCard_changed = function () {
		var value = this.selectRandomCard;
		return value;
	};
	try {
		this.selectRandomCard = new SFBool();
	} catch (e) {
		console.log('Problems setting selectRandomCard '+e);
		console.error('Problems setting selectRandomCard',e);
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
if (typeof X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'] = new X3DJSON['Script']['Scene']['../data/ObliqueStrategies.json']['TextScript']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript']['ACTION'],X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].initialize === "function") X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].initialize();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript']['ACTION']['string'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript']['ACTION']['string'] = [];
}
X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript']['ACTION']['string'].push(function(property, value) {
		if (property === 'string') {
			X3DJSON.nodeUtil("Scene","CardText","string",typeof X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].string_changed === "function" ? X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].string_changed() : X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].string, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","CardText","string",typeof X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].string_changed === "function" ? X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].string_changed() : X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].string, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript']['ACTION']['textToSpeechUrl'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript']['ACTION']['textToSpeechUrl'] = [];
}
X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript']['ACTION']['textToSpeechUrl'].push(function(property, value) {
		if (property === 'textToSpeechUrl') {
			X3DJSON.nodeUtil("Scene","TextToSpeechAudioClip","url",typeof X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].textToSpeechUrl === "function" ? X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].textToSpeechUrl() : X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].textToSpeechUrl, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","TextToSpeechAudioClip","url",typeof X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].textToSpeechUrl === "function" ? X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].textToSpeechUrl() : X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].textToSpeechUrl, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript']['ACTION']['newCardTime'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript']['ACTION']['newCardTime'] = [];
}
X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript']['ACTION']['newCardTime'].push(function(property, value) {
		if (property === 'newCardTime') {
			X3DJSON.nodeUtil("Scene","TextToSpeechAudioClip","startTime",typeof X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].newCardTime === "function" ? X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].newCardTime() : X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].newCardTime, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","TextToSpeechAudioClip","startTime",typeof X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].newCardTime === "function" ? X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].newCardTime() : X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].newCardTime, __eventTime);
    if (X3DJSON.nodeUtil("Scene","PreviousTextClickedSensor")) {
X3DJSON.nodeUtil("Scene","PreviousTextClickedSensor").addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].selectPreviousCard(X3DJSON.nodeUtil("Scene","PreviousTextClickedSensor","isActive"), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].selectPreviousCard(X3DJSON.nodeUtil("Scene","PreviousTextClickedSensor","isActive"), __eventTime);
    if (X3DJSON.nodeUtil("Scene","NextTextClickedSensor")) {
X3DJSON.nodeUtil("Scene","NextTextClickedSensor").addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].selectNextCard(X3DJSON.nodeUtil("Scene","NextTextClickedSensor","isActive"), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].selectNextCard(X3DJSON.nodeUtil("Scene","NextTextClickedSensor","isActive"), __eventTime);
    if (X3DJSON.nodeUtil("Scene","RandomTextClickedSensor")) {
X3DJSON.nodeUtil("Scene","RandomTextClickedSensor").addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].selectRandomCard(X3DJSON.nodeUtil("Scene","RandomTextClickedSensor","isActive"), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].selectRandomCard(X3DJSON.nodeUtil("Scene","RandomTextClickedSensor","isActive"), __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript']['ACTION']['textToSpeechUrl'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript']['ACTION']['textToSpeechUrl'] = [];
}
X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript']['ACTION']['textToSpeechUrl'].push(function(property, value) {
		if (property === 'textToSpeechUrl') {
			X3DJSON.nodeUtil("Scene","TextToSpeechAnchor","url",typeof X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].textToSpeechUrl === "function" ? X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].textToSpeechUrl() : X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].textToSpeechUrl, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","TextToSpeechAnchor","url",typeof X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].textToSpeechUrl === "function" ? X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].textToSpeechUrl() : X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].textToSpeechUrl, __eventTime);
			X3DJSON.nodeUtil("Scene","CardText","string",typeof X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].string_changed === "function" ? X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].string_changed() : X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].string, __eventTime);
			X3DJSON.nodeUtil("Scene","TextToSpeechAudioClip","url",typeof X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].textToSpeechUrl === "function" ? X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].textToSpeechUrl() : X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].textToSpeechUrl, __eventTime);
			X3DJSON.nodeUtil("Scene","TextToSpeechAudioClip","startTime",typeof X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].newCardTime === "function" ? X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].newCardTime() : X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].newCardTime, __eventTime);
			X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].selectPreviousCard(X3DJSON.nodeUtil("Scene","PreviousTextClickedSensor","isActive"), __eventTime);
			X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].selectNextCard(X3DJSON.nodeUtil("Scene","NextTextClickedSensor","isActive"), __eventTime);
			X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].selectRandomCard(X3DJSON.nodeUtil("Scene","RandomTextClickedSensor","isActive"), __eventTime);
			X3DJSON.nodeUtil("Scene","TextToSpeechAnchor","url",typeof X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].textToSpeechUrl === "function" ? X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].textToSpeechUrl() : X3DJSON['Obj']['Scene']['../data/ObliqueStrategies.json']['TextScript'].textToSpeechUrl, __eventTime);