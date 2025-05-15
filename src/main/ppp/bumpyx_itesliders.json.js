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
if (typeof X3DJSON['Scene../data/bumpyx_itesliders.json'] === 'undefined') {
	X3DJSON['Scene../data/bumpyx_itesliders.json'] = {};
}

if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/bumpyx_itesliders.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/bumpyx_itesliders.json'] = {};
}

X3DJSON['Script']['Scene']['../data/bumpyx_itesliders.json']['aValueTransformerScript'] = function() {
	this.set_newTranslation = function (value) {
		try {
			this.proxy.newTranslation = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting newTranslation '+e);
			console.error('Problems setting newTranslation',e);
		}
	};
	this.newTranslation_changed = function () {
		var value = this.newTranslation;
		return value;
	};
	try {
		this.newTranslation = new SFVec3f(1,1,1);
	} catch (e) {
		console.log('Problems setting newTranslation '+e);
		console.error('Problems setting newTranslation',e);
	}
	this.set_aValue = function (value) {
		try {
			this.proxy.aValue = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting aValue '+e);
			console.error('Problems setting aValue',e);
		}
	};
	this.aValue_changed = function () {
		var value = this.aValue;
		return value;
	};
	try {
		this.aValue = undefined;
	} catch (e) {
		console.log('Problems setting aValue '+e);
		console.error('Problems setting aValue',e);
	}

	  ecmascript:
	this.newTranslation = function (Value) { this.proxy.aValue_changed = Value.x * 30; }
;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['aValueTransformerScript'] = new X3DJSON['Script']['Scene']['../data/bumpyx_itesliders.json']['aValueTransformerScript']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['aValueTransformerScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['aValueTransformerScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['aValueTransformerScript']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['aValueTransformerScript']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['aValueTransformerScript'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['aValueTransformerScript']['ACTION'],X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['aValueTransformerScript']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['aValueTransformerScript'].initialize === "function") X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['aValueTransformerScript'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/bumpyx_itesliders.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/bumpyx_itesliders.json'] = {};
}

X3DJSON['Script']['Scene']['../data/bumpyx_itesliders.json']['bValueTransformerScript'] = function() {
	this.set_newTranslation = function (value) {
		try {
			this.proxy.newTranslation = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting newTranslation '+e);
			console.error('Problems setting newTranslation',e);
		}
	};
	this.newTranslation_changed = function () {
		var value = this.newTranslation;
		return value;
	};
	try {
		this.newTranslation = new SFVec3f(1,1,1);
	} catch (e) {
		console.log('Problems setting newTranslation '+e);
		console.error('Problems setting newTranslation',e);
	}
	this.set_bValue = function (value) {
		try {
			this.proxy.bValue = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting bValue '+e);
			console.error('Problems setting bValue',e);
		}
	};
	this.bValue_changed = function () {
		var value = this.bValue;
		return value;
	};
	try {
		this.bValue = undefined;
	} catch (e) {
		console.log('Problems setting bValue '+e);
		console.error('Problems setting bValue',e);
	}

	  ecmascript:
	this.newTranslation = function (Value) { this.proxy.bValue_changed = Value.x * 30; }
;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['bValueTransformerScript'] = new X3DJSON['Script']['Scene']['../data/bumpyx_itesliders.json']['bValueTransformerScript']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['bValueTransformerScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['bValueTransformerScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['bValueTransformerScript']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['bValueTransformerScript']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['bValueTransformerScript'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['bValueTransformerScript']['ACTION'],X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['bValueTransformerScript']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['bValueTransformerScript'].initialize === "function") X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['bValueTransformerScript'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/bumpyx_itesliders.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/bumpyx_itesliders.json'] = {};
}

X3DJSON['Script']['Scene']['../data/bumpyx_itesliders.json']['cValueTransformerScript'] = function() {
	this.set_newTranslation = function (value) {
		try {
			this.proxy.newTranslation = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting newTranslation '+e);
			console.error('Problems setting newTranslation',e);
		}
	};
	this.newTranslation_changed = function () {
		var value = this.newTranslation;
		return value;
	};
	try {
		this.newTranslation = new SFVec3f(1,1,1);
	} catch (e) {
		console.log('Problems setting newTranslation '+e);
		console.error('Problems setting newTranslation',e);
	}
	this.set_cValue = function (value) {
		try {
			this.proxy.cValue = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting cValue '+e);
			console.error('Problems setting cValue',e);
		}
	};
	this.cValue_changed = function () {
		var value = this.cValue;
		return value;
	};
	try {
		this.cValue = undefined;
	} catch (e) {
		console.log('Problems setting cValue '+e);
		console.error('Problems setting cValue',e);
	}

	  ecmascript:
	this.newTranslation = function (Value) { this.proxy.cValue_changed = Value.x * 5; }
;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['cValueTransformerScript'] = new X3DJSON['Script']['Scene']['../data/bumpyx_itesliders.json']['cValueTransformerScript']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['cValueTransformerScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['cValueTransformerScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['cValueTransformerScript']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['cValueTransformerScript']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['cValueTransformerScript'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['cValueTransformerScript']['ACTION'],X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['cValueTransformerScript']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['cValueTransformerScript'].initialize === "function") X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['cValueTransformerScript'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/bumpyx_itesliders.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/bumpyx_itesliders.json'] = {};
}

X3DJSON['Script']['Scene']['../data/bumpyx_itesliders.json']['dValueTransformerScript'] = function() {
	this.set_newTranslation = function (value) {
		try {
			this.proxy.newTranslation = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting newTranslation '+e);
			console.error('Problems setting newTranslation',e);
		}
	};
	this.newTranslation_changed = function () {
		var value = this.newTranslation;
		return value;
	};
	try {
		this.newTranslation = new SFVec3f(1,1,1);
	} catch (e) {
		console.log('Problems setting newTranslation '+e);
		console.error('Problems setting newTranslation',e);
	}
	this.set_dValue = function (value) {
		try {
			this.proxy.dValue = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting dValue '+e);
			console.error('Problems setting dValue',e);
		}
	};
	this.dValue_changed = function () {
		var value = this.dValue;
		return value;
	};
	try {
		this.dValue = undefined;
	} catch (e) {
		console.log('Problems setting dValue '+e);
		console.error('Problems setting dValue',e);
	}

	  ecmascript:
	this.newTranslation = function (Value) { this.proxy.dValue_changed = Value.x * 5; }
;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['dValueTransformerScript'] = new X3DJSON['Script']['Scene']['../data/bumpyx_itesliders.json']['dValueTransformerScript']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['dValueTransformerScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['dValueTransformerScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['dValueTransformerScript']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['dValueTransformerScript']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['dValueTransformerScript'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['dValueTransformerScript']['ACTION'],X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['dValueTransformerScript']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['dValueTransformerScript'].initialize === "function") X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['dValueTransformerScript'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/bumpyx_itesliders.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/bumpyx_itesliders.json'] = {};
}

X3DJSON['Script']['Scene']['../data/bumpyx_itesliders.json']['pdeltaValueTransformerScript'] = function() {
	this.set_newTranslation = function (value) {
		try {
			this.proxy.newTranslation = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting newTranslation '+e);
			console.error('Problems setting newTranslation',e);
		}
	};
	this.newTranslation_changed = function () {
		var value = this.newTranslation;
		return value;
	};
	try {
		this.newTranslation = new SFVec3f(1,1,1);
	} catch (e) {
		console.log('Problems setting newTranslation '+e);
		console.error('Problems setting newTranslation',e);
	}
	this.set_pdeltaValue = function (value) {
		try {
			this.proxy.pdeltaValue = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting pdeltaValue '+e);
			console.error('Problems setting pdeltaValue',e);
		}
	};
	this.pdeltaValue_changed = function () {
		var value = this.pdeltaValue;
		return value;
	};
	try {
		this.pdeltaValue = undefined;
	} catch (e) {
		console.log('Problems setting pdeltaValue '+e);
		console.error('Problems setting pdeltaValue',e);
	}

	  ecmascript:
	this.newTranslation = function (Value) { this.proxy.pdeltaValue_changed = Value.x; }
;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['pdeltaValueTransformerScript'] = new X3DJSON['Script']['Scene']['../data/bumpyx_itesliders.json']['pdeltaValueTransformerScript']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['pdeltaValueTransformerScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['pdeltaValueTransformerScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['pdeltaValueTransformerScript']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['pdeltaValueTransformerScript']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['pdeltaValueTransformerScript'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['pdeltaValueTransformerScript']['ACTION'],X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['pdeltaValueTransformerScript']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['pdeltaValueTransformerScript'].initialize === "function") X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['pdeltaValueTransformerScript'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/bumpyx_itesliders.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/bumpyx_itesliders.json'] = {};
}

X3DJSON['Script']['Scene']['../data/bumpyx_itesliders.json']['tdeltaValueTransformerScript'] = function() {
	this.set_newTranslation = function (value) {
		try {
			this.proxy.newTranslation = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting newTranslation '+e);
			console.error('Problems setting newTranslation',e);
		}
	};
	this.newTranslation_changed = function () {
		var value = this.newTranslation;
		return value;
	};
	try {
		this.newTranslation = new SFVec3f(1,1,1);
	} catch (e) {
		console.log('Problems setting newTranslation '+e);
		console.error('Problems setting newTranslation',e);
	}
	this.set_tdeltaValue = function (value) {
		try {
			this.proxy.tdeltaValue = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting tdeltaValue '+e);
			console.error('Problems setting tdeltaValue',e);
		}
	};
	this.tdeltaValue_changed = function () {
		var value = this.tdeltaValue;
		return value;
	};
	try {
		this.tdeltaValue = undefined;
	} catch (e) {
		console.log('Problems setting tdeltaValue '+e);
		console.error('Problems setting tdeltaValue',e);
	}

	  ecmascript:
	this.newTranslation = function (Value) { this.proxy.tdeltaValue_changed = Value.x; }
;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['tdeltaValueTransformerScript'] = new X3DJSON['Script']['Scene']['../data/bumpyx_itesliders.json']['tdeltaValueTransformerScript']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['tdeltaValueTransformerScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['tdeltaValueTransformerScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['tdeltaValueTransformerScript']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['tdeltaValueTransformerScript']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['tdeltaValueTransformerScript'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['tdeltaValueTransformerScript']['ACTION'],X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['tdeltaValueTransformerScript']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['tdeltaValueTransformerScript'].initialize === "function") X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['tdeltaValueTransformerScript'].initialize();
    if (X3DJSON.nodeUtil("Scene","EntityManager")) {
X3DJSON.nodeUtil("Scene","EntityManager").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","EntityManager")) {
X3DJSON.nodeUtil("Scene","EntityManager").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","aSensor")) {
X3DJSON.nodeUtil("Scene","aSensor").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","bSensor")) {
X3DJSON.nodeUtil("Scene","bSensor").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","cSensor")) {
X3DJSON.nodeUtil("Scene","cSensor").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","dSensor")) {
X3DJSON.nodeUtil("Scene","dSensor").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","pdeltaSensor")) {
X3DJSON.nodeUtil("Scene","pdeltaSensor").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","tdeltaSensor")) {
X3DJSON.nodeUtil("Scene","tdeltaSensor").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","aSensor")) {
X3DJSON.nodeUtil("Scene","aSensor").addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['aValueTransformerScript'].newTranslation(X3DJSON.nodeUtil("Scene","aSensor","translation"), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['aValueTransformerScript'].newTranslation(X3DJSON.nodeUtil("Scene","aSensor","translation"), __eventTime);
    if (X3DJSON.nodeUtil("Scene","bSensor")) {
X3DJSON.nodeUtil("Scene","bSensor").addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['bValueTransformerScript'].newTranslation(X3DJSON.nodeUtil("Scene","bSensor","translation"), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['bValueTransformerScript'].newTranslation(X3DJSON.nodeUtil("Scene","bSensor","translation"), __eventTime);
    if (X3DJSON.nodeUtil("Scene","cSensor")) {
X3DJSON.nodeUtil("Scene","cSensor").addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['cValueTransformerScript'].newTranslation(X3DJSON.nodeUtil("Scene","cSensor","translation"), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['cValueTransformerScript'].newTranslation(X3DJSON.nodeUtil("Scene","cSensor","translation"), __eventTime);
    if (X3DJSON.nodeUtil("Scene","dSensor")) {
X3DJSON.nodeUtil("Scene","dSensor").addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['dValueTransformerScript'].newTranslation(X3DJSON.nodeUtil("Scene","dSensor","translation"), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['dValueTransformerScript'].newTranslation(X3DJSON.nodeUtil("Scene","dSensor","translation"), __eventTime);
    if (X3DJSON.nodeUtil("Scene","pdeltaSensor")) {
X3DJSON.nodeUtil("Scene","pdeltaSensor").addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['pdeltaValueTransformerScript'].newTranslation(X3DJSON.nodeUtil("Scene","pdeltaSensor","translation"), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['pdeltaValueTransformerScript'].newTranslation(X3DJSON.nodeUtil("Scene","pdeltaSensor","translation"), __eventTime);
    if (X3DJSON.nodeUtil("Scene","tdeltaSensor")) {
X3DJSON.nodeUtil("Scene","tdeltaSensor").addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['tdeltaValueTransformerScript'].newTranslation(X3DJSON.nodeUtil("Scene","tdeltaSensor","translation"), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['tdeltaValueTransformerScript'].newTranslation(X3DJSON.nodeUtil("Scene","tdeltaSensor","translation"), __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['aValueTransformerScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['aValueTransformerScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['aValueTransformerScript']['ACTION']['aValue'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['aValueTransformerScript']['ACTION']['aValue'] = [];
}
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['aValueTransformerScript']['ACTION']['aValue'].push(function(property, value) {
		if (property === 'aValue') {
			X3DJSON.nodeUtil("Scene","x_iteShader","a",typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['aValueTransformerScript'].aValue_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['aValueTransformerScript'].aValue_changed() : X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['aValueTransformerScript'].aValue, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","x_iteShader","a",typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['aValueTransformerScript'].aValue_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['aValueTransformerScript'].aValue_changed() : X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['aValueTransformerScript'].aValue, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['bValueTransformerScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['bValueTransformerScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['bValueTransformerScript']['ACTION']['bValue'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['bValueTransformerScript']['ACTION']['bValue'] = [];
}
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['bValueTransformerScript']['ACTION']['bValue'].push(function(property, value) {
		if (property === 'bValue') {
			X3DJSON.nodeUtil("Scene","x_iteShader","b",typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['bValueTransformerScript'].bValue_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['bValueTransformerScript'].bValue_changed() : X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['bValueTransformerScript'].bValue, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","x_iteShader","b",typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['bValueTransformerScript'].bValue_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['bValueTransformerScript'].bValue_changed() : X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['bValueTransformerScript'].bValue, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['cValueTransformerScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['cValueTransformerScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['cValueTransformerScript']['ACTION']['cValue'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['cValueTransformerScript']['ACTION']['cValue'] = [];
}
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['cValueTransformerScript']['ACTION']['cValue'].push(function(property, value) {
		if (property === 'cValue') {
			X3DJSON.nodeUtil("Scene","x_iteShader","c",typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['cValueTransformerScript'].cValue_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['cValueTransformerScript'].cValue_changed() : X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['cValueTransformerScript'].cValue, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","x_iteShader","c",typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['cValueTransformerScript'].cValue_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['cValueTransformerScript'].cValue_changed() : X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['cValueTransformerScript'].cValue, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['dValueTransformerScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['dValueTransformerScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['dValueTransformerScript']['ACTION']['dValue'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['dValueTransformerScript']['ACTION']['dValue'] = [];
}
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['dValueTransformerScript']['ACTION']['dValue'].push(function(property, value) {
		if (property === 'dValue') {
			X3DJSON.nodeUtil("Scene","x_iteShader","d",typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['dValueTransformerScript'].dValue_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['dValueTransformerScript'].dValue_changed() : X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['dValueTransformerScript'].dValue, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","x_iteShader","d",typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['dValueTransformerScript'].dValue_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['dValueTransformerScript'].dValue_changed() : X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['dValueTransformerScript'].dValue, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['pdeltaValueTransformerScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['pdeltaValueTransformerScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['pdeltaValueTransformerScript']['ACTION']['pdeltaValue'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['pdeltaValueTransformerScript']['ACTION']['pdeltaValue'] = [];
}
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['pdeltaValueTransformerScript']['ACTION']['pdeltaValue'].push(function(property, value) {
		if (property === 'pdeltaValue') {
			X3DJSON.nodeUtil("Scene","x_iteShader","pdelta",typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['pdeltaValueTransformerScript'].pdeltaValue_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['pdeltaValueTransformerScript'].pdeltaValue_changed() : X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['pdeltaValueTransformerScript'].pdeltaValue, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","x_iteShader","pdelta",typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['pdeltaValueTransformerScript'].pdeltaValue_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['pdeltaValueTransformerScript'].pdeltaValue_changed() : X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['pdeltaValueTransformerScript'].pdeltaValue, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['tdeltaValueTransformerScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['tdeltaValueTransformerScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['tdeltaValueTransformerScript']['ACTION']['tdeltaValue'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['tdeltaValueTransformerScript']['ACTION']['tdeltaValue'] = [];
}
X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['tdeltaValueTransformerScript']['ACTION']['tdeltaValue'].push(function(property, value) {
		if (property === 'tdeltaValue') {
			X3DJSON.nodeUtil("Scene","x_iteShader","tdelta",typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['tdeltaValueTransformerScript'].tdeltaValue_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['tdeltaValueTransformerScript'].tdeltaValue_changed() : X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['tdeltaValueTransformerScript'].tdeltaValue, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","x_iteShader","tdelta",typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['tdeltaValueTransformerScript'].tdeltaValue_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['tdeltaValueTransformerScript'].tdeltaValue_changed() : X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['tdeltaValueTransformerScript'].tdeltaValue, __eventTime);
			X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['aValueTransformerScript'].newTranslation(X3DJSON.nodeUtil("Scene","aSensor","translation"), __eventTime);
			X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['bValueTransformerScript'].newTranslation(X3DJSON.nodeUtil("Scene","bSensor","translation"), __eventTime);
			X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['cValueTransformerScript'].newTranslation(X3DJSON.nodeUtil("Scene","cSensor","translation"), __eventTime);
			X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['dValueTransformerScript'].newTranslation(X3DJSON.nodeUtil("Scene","dSensor","translation"), __eventTime);
			X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['pdeltaValueTransformerScript'].newTranslation(X3DJSON.nodeUtil("Scene","pdeltaSensor","translation"), __eventTime);
			X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['tdeltaValueTransformerScript'].newTranslation(X3DJSON.nodeUtil("Scene","tdeltaSensor","translation"), __eventTime);
			X3DJSON.nodeUtil("Scene","x_iteShader","a",typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['aValueTransformerScript'].aValue_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['aValueTransformerScript'].aValue_changed() : X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['aValueTransformerScript'].aValue, __eventTime);
			X3DJSON.nodeUtil("Scene","x_iteShader","b",typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['bValueTransformerScript'].bValue_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['bValueTransformerScript'].bValue_changed() : X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['bValueTransformerScript'].bValue, __eventTime);
			X3DJSON.nodeUtil("Scene","x_iteShader","c",typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['cValueTransformerScript'].cValue_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['cValueTransformerScript'].cValue_changed() : X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['cValueTransformerScript'].cValue, __eventTime);
			X3DJSON.nodeUtil("Scene","x_iteShader","d",typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['dValueTransformerScript'].dValue_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['dValueTransformerScript'].dValue_changed() : X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['dValueTransformerScript'].dValue, __eventTime);
			X3DJSON.nodeUtil("Scene","x_iteShader","pdelta",typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['pdeltaValueTransformerScript'].pdeltaValue_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['pdeltaValueTransformerScript'].pdeltaValue_changed() : X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['pdeltaValueTransformerScript'].pdeltaValue, __eventTime);
			X3DJSON.nodeUtil("Scene","x_iteShader","tdelta",typeof X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['tdeltaValueTransformerScript'].tdeltaValue_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['tdeltaValueTransformerScript'].tdeltaValue_changed() : X3DJSON['Obj']['Scene']['../data/bumpyx_itesliders.json']['tdeltaValueTransformerScript'].tdeltaValue, __eventTime);