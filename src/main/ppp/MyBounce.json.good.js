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
if (typeof X3DJSON['Scene../data/MyBounce.json'] === 'undefined') {
	X3DJSON['Scene../data/MyBounce.json'] = {};
}

if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/MyBounce.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/MyBounce.json'] = {};
}

X3DJSON['Script']['Scene']['../data/MyBounce.json']['Bounce2'] = function() {
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
	this.set_velocity = function (value) {
		try {
			this.proxy.velocity = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting velocity '+e);
			console.error('Problems setting velocity',e);
		}
	};
	this.velocity_changed = function () {
		var value = this.velocity;
		return value;
	};
	try {
		this.velocity = new SFVec3f(0,0,0);
	} catch (e) {
		console.log('Problems setting velocity '+e);
		console.error('Problems setting velocity',e);
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

ecmascript:
		
	this.newBubble = function () {
			    this.proxy.translation = new SFVec3f(0, 0, 0);
			    this.proxy.velocity = new SFVec3f(
			    	Math.random() - 0.5,
				Math.random() - 0.5,
				Math.random() - 0.5);
			}
		;

	this.set_fraction = function () {
			    this.proxy.translation = new SFVec3f(
			    	this.proxy.translation.x + this.proxy.velocity.x,
				this.proxy.translation.y + this.proxy.velocity.y,
				this.proxy.translation.z + this.proxy.velocity.z);
				if (Math.abs(this.proxy.translation.x) > 10) {
					this.newBubble();
				} else if (Math.abs(this.proxy.translation.y) > 10) {
					this.newBubble();
				} else if (Math.abs(this.proxy.translation.z) > 10) {
					this.newBubble();
				} else {
					this.proxy.velocity = new SFVec3f(
						this.proxy.velocity.x + Math.random() * 0.2 - 0.1,
						this.proxy.velocity.y + Math.random() * 0.2 - 0.1,
						this.proxy.velocity.z + Math.random() * 0.2 - 0.1
					);
				}
			}

		;

	this.initialize = function () {
			     this.newBubble();
			}


;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/MyBounce.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/MyBounce.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/MyBounce.json']['Bounce2'] = new X3DJSON['Script']['Scene']['../data/MyBounce.json']['Bounce2']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/MyBounce.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/MyBounce.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/MyBounce.json']['Bounce2'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/MyBounce.json']['Bounce2'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/MyBounce.json']['Bounce2']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/MyBounce.json']['Bounce2']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/MyBounce.json']['Bounce2'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/MyBounce.json']['Bounce2']['ACTION'],X3DJSON['Obj']['Scene']['../data/MyBounce.json']['Bounce2']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/MyBounce.json']['Bounce2'].initialize === "function") X3DJSON['Obj']['Scene']['../data/MyBounce.json']['Bounce2'].initialize();
    if (X3DJSON.nodeUtil("Scene","TourTime")) {
X3DJSON.nodeUtil("Scene","TourTime").addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/MyBounce.json']['Bounce2'].set_fraction(X3DJSON.nodeUtil("Scene","TourTime","cycleTime"), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/MyBounce.json']['Bounce2'].set_fraction(X3DJSON.nodeUtil("Scene","TourTime","cycleTime"), __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/MyBounce.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/MyBounce.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/MyBounce.json']['Bounce2'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/MyBounce.json']['Bounce2'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/MyBounce.json']['Bounce2']['ACTION']['translation'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/MyBounce.json']['Bounce2']['ACTION']['translation'] = [];
}
X3DJSON['Obj']['Scene']['../data/MyBounce.json']['Bounce2']['ACTION']['translation'].push(function(property, value) {
		if (property === 'translation') {
			X3DJSON.nodeUtil("Scene","transform","translation",typeof X3DJSON['Obj']['Scene']['../data/MyBounce.json']['Bounce2'].translation_changed === "function" ? X3DJSON['Obj']['Scene']['../data/MyBounce.json']['Bounce2'].translation_changed() : X3DJSON['Obj']['Scene']['../data/MyBounce.json']['Bounce2'].translation, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","transform","translation",typeof X3DJSON['Obj']['Scene']['../data/MyBounce.json']['Bounce2'].translation_changed === "function" ? X3DJSON['Obj']['Scene']['../data/MyBounce.json']['Bounce2'].translation_changed() : X3DJSON['Obj']['Scene']['../data/MyBounce.json']['Bounce2'].translation, __eventTime);
			X3DJSON['Obj']['Scene']['../data/MyBounce.json']['Bounce2'].set_fraction(X3DJSON.nodeUtil("Scene","TourTime","cycleTime"), __eventTime);
			X3DJSON.nodeUtil("Scene","transform","translation",typeof X3DJSON['Obj']['Scene']['../data/MyBounce.json']['Bounce2'].translation_changed === "function" ? X3DJSON['Obj']['Scene']['../data/MyBounce.json']['Bounce2'].translation_changed() : X3DJSON['Obj']['Scene']['../data/MyBounce.json']['Bounce2'].translation, __eventTime);