var x3dom = require('../node/fields.js');
if (typeof X3DJSON === 'undefined') {
	var X3DJSON = {};
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
X3DJSON.nodeUtil = function(node, field, value) {
		var selector = "undefined [DEF='"+node+"']";
		var element = document.querySelector(selector);
		if (element === null) {
			console.error('unDEFed node',node);
		} else if (arguments.length > 2) {
			/*
			if (value && typeof value.toString === 'function') {
				value = value.toString();
			}
			$(selector).attr(field, value);
			// console.log('set', node, '.', field, '=', value);
			*/
			element.setFieldValue(field, value);
			return element;
		} else if (arguments.length > 1) {
			value = element.getFieldValue(field);
			/*
			value = $(selector).attr(field);
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
		} else {
			return $(selector)[0];
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
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['TextScript'] = function() {
	this.set_index = function (value) {
		this.proxy.index = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.index_changed = function () {
		var value = this.index;
		return value;
	};
	this.index = new SFInt32(0);
	this.set_string = function (value) {
		this.proxy.string = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.string_changed = function () {
		var value = this.string;
		return value;
	};
	this.string = undefined;
	this.set_textToSpeechUrl = function (value) {
		this.proxy.textToSpeechUrl = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.textToSpeechUrl_changed = function () {
		var value = this.textToSpeechUrl;
		return value;
	};
	this.textToSpeechUrl = new MFString();
	this.set_newCardTime = function (value) {
		this.proxy.newCardTime = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.newCardTime_changed = function () {
		var value = this.newCardTime;
		return value;
	};
	this.newCardTime = new SFTime();
	this.set_selectPreviousCard = function (value) {
		this.proxy.selectPreviousCard = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.selectPreviousCard_changed = function () {
		var value = this.selectPreviousCard;
		return value;
	};
	this.selectPreviousCard = new SFBool();
	this.set_selectNextCard = function (value) {
		this.proxy.selectNextCard = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.selectNextCard_changed = function () {
		var value = this.selectNextCard;
		return value;
	};
	this.selectNextCard = new SFBool();
	this.set_selectRandomCard = function (value) {
		this.proxy.selectRandomCard = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.selectRandomCard_changed = function () {
		var value = this.selectRandomCard;
		return value;
	};
	this.selectRandomCard = new SFBool();
	this.set_traceEnabled = function (value) {
		this.proxy.traceEnabled = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.traceEnabled_changed = function () {
		var value = this.traceEnabled;
		return value;
	};
	this.traceEnabled = new SFBool(true);
};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['TextScript'] = new X3DJSON['Script']['TextScript']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['TextScript'] === 'undefined') {
X3DJSON['Obj']['TextScript'] = {};
}

if (typeof X3DJSON['Obj']['TextScript']['ACTION'] === 'undefined') {
X3DJSON['Obj']['TextScript']['ACTION'] = {};
X3DJSON['Obj']['TextScript'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['TextScript']['ACTION'],X3DJSON['Obj']['TextScript']);
}
if (typeof X3DJSON['Obj']['TextScript'].initialize === "function") X3DJSON['Obj']['TextScript'].initialize();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['TextScript'] === 'undefined') {
X3DJSON['Obj']['TextScript'] = {};
}

if (typeof X3DJSON['Obj']['TextScript']['ACTION']['string'] === 'undefined') {
X3DJSON['Obj']['TextScript']['ACTION']['string'] = [];
}
X3DJSON['Obj']['TextScript']['ACTION']['string'].push(function(property, value) {
		if (property === 'string') {
			X3DJSON.nodeUtil('CardText','string',typeof X3DJSON['Obj']['TextScript'].string_changed === "function" ? X3DJSON['Obj']['TextScript'].string_changed() : X3DJSON['Obj']['TextScript'].string, __eventTime);
		}
});
			X3DJSON.nodeUtil('CardText','string',typeof X3DJSON['Obj']['TextScript'].string_changed === "function" ? X3DJSON['Obj']['TextScript'].string_changed() : X3DJSON['Obj']['TextScript'].string, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['TextScript'] === 'undefined') {
X3DJSON['Obj']['TextScript'] = {};
}

if (typeof X3DJSON['Obj']['TextScript']['ACTION']['textToSpeechUrl'] === 'undefined') {
X3DJSON['Obj']['TextScript']['ACTION']['textToSpeechUrl'] = [];
}
X3DJSON['Obj']['TextScript']['ACTION']['textToSpeechUrl'].push(function(property, value) {
		if (property === 'textToSpeechUrl') {
			X3DJSON.nodeUtil('TextToSpeechAudioClip','url',typeof X3DJSON['Obj']['TextScript'].textToSpeechUrl === "function" ? X3DJSON['Obj']['TextScript'].textToSpeechUrl() : X3DJSON['Obj']['TextScript'].textToSpeechUrl, __eventTime);
		}
});
			X3DJSON.nodeUtil('TextToSpeechAudioClip','url',typeof X3DJSON['Obj']['TextScript'].textToSpeechUrl === "function" ? X3DJSON['Obj']['TextScript'].textToSpeechUrl() : X3DJSON['Obj']['TextScript'].textToSpeechUrl, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['TextScript'] === 'undefined') {
X3DJSON['Obj']['TextScript'] = {};
}

if (typeof X3DJSON['Obj']['TextScript']['ACTION']['newCardTime'] === 'undefined') {
X3DJSON['Obj']['TextScript']['ACTION']['newCardTime'] = [];
}
X3DJSON['Obj']['TextScript']['ACTION']['newCardTime'].push(function(property, value) {
		if (property === 'newCardTime') {
			X3DJSON.nodeUtil('TextToSpeechAudioClip','startTime',typeof X3DJSON['Obj']['TextScript'].newCardTime === "function" ? X3DJSON['Obj']['TextScript'].newCardTime() : X3DJSON['Obj']['TextScript'].newCardTime, __eventTime);
		}
});
			X3DJSON.nodeUtil('TextToSpeechAudioClip','startTime',typeof X3DJSON['Obj']['TextScript'].newCardTime === "function" ? X3DJSON['Obj']['TextScript'].newCardTime() : X3DJSON['Obj']['TextScript'].newCardTime, __eventTime);
X3DJSON.nodeUtil('PreviousTextClickedSensor').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['TextScript'].selectPreviousCard(X3DJSON.nodeUtil('PreviousTextClickedSensor','isActive'), __eventTime);
}, false);
			X3DJSON['Obj']['TextScript'].selectPreviousCard(X3DJSON.nodeUtil('PreviousTextClickedSensor','isActive'), __eventTime);
X3DJSON.nodeUtil('NextTextClickedSensor').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['TextScript'].selectNextCard(X3DJSON.nodeUtil('NextTextClickedSensor','isActive'), __eventTime);
}, false);
			X3DJSON['Obj']['TextScript'].selectNextCard(X3DJSON.nodeUtil('NextTextClickedSensor','isActive'), __eventTime);
X3DJSON.nodeUtil('RandomTextClickedSensor').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['TextScript'].selectRandomCard(X3DJSON.nodeUtil('RandomTextClickedSensor','isActive'), __eventTime);
}, false);
			X3DJSON['Obj']['TextScript'].selectRandomCard(X3DJSON.nodeUtil('RandomTextClickedSensor','isActive'), __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['TextScript'] === 'undefined') {
X3DJSON['Obj']['TextScript'] = {};
}

if (typeof X3DJSON['Obj']['TextScript']['ACTION']['textToSpeechUrl'] === 'undefined') {
X3DJSON['Obj']['TextScript']['ACTION']['textToSpeechUrl'] = [];
}
X3DJSON['Obj']['TextScript']['ACTION']['textToSpeechUrl'].push(function(property, value) {
		if (property === 'textToSpeechUrl') {
			X3DJSON.nodeUtil('TextToSpeechAnchor','url',typeof X3DJSON['Obj']['TextScript'].textToSpeechUrl === "function" ? X3DJSON['Obj']['TextScript'].textToSpeechUrl() : X3DJSON['Obj']['TextScript'].textToSpeechUrl, __eventTime);
		}
});
			X3DJSON.nodeUtil('TextToSpeechAnchor','url',typeof X3DJSON['Obj']['TextScript'].textToSpeechUrl === "function" ? X3DJSON['Obj']['TextScript'].textToSpeechUrl() : X3DJSON['Obj']['TextScript'].textToSpeechUrl, __eventTime);
			X3DJSON.nodeUtil('CardText','string',typeof X3DJSON['Obj']['TextScript'].string_changed === "function" ? X3DJSON['Obj']['TextScript'].string_changed() : X3DJSON['Obj']['TextScript'].string, __eventTime);
			X3DJSON.nodeUtil('TextToSpeechAudioClip','url',typeof X3DJSON['Obj']['TextScript'].textToSpeechUrl === "function" ? X3DJSON['Obj']['TextScript'].textToSpeechUrl() : X3DJSON['Obj']['TextScript'].textToSpeechUrl, __eventTime);
			X3DJSON.nodeUtil('TextToSpeechAudioClip','startTime',typeof X3DJSON['Obj']['TextScript'].newCardTime === "function" ? X3DJSON['Obj']['TextScript'].newCardTime() : X3DJSON['Obj']['TextScript'].newCardTime, __eventTime);
			X3DJSON['Obj']['TextScript'].selectPreviousCard(X3DJSON.nodeUtil('PreviousTextClickedSensor','isActive'), __eventTime);
			X3DJSON['Obj']['TextScript'].selectNextCard(X3DJSON.nodeUtil('NextTextClickedSensor','isActive'), __eventTime);
			X3DJSON['Obj']['TextScript'].selectRandomCard(X3DJSON.nodeUtil('RandomTextClickedSensor','isActive'), __eventTime);
			X3DJSON.nodeUtil('TextToSpeechAnchor','url',typeof X3DJSON['Obj']['TextScript'].textToSpeechUrl === "function" ? X3DJSON['Obj']['TextScript'].textToSpeechUrl() : X3DJSON['Obj']['TextScript'].textToSpeechUrl, __eventTime);