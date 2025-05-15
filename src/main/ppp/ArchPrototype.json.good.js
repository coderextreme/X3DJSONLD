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
if (typeof X3DJSON['Scene../data/ArchPrototype.json'] === 'undefined') {
	X3DJSON['Scene../data/ArchPrototype.json'] = {};
}

if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/ArchPrototype.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/ArchPrototype.json'] = {};
}

X3DJSON['Script']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript'] = function() {
	this.set_clearSpanWidth = function (value) {
		try {
			this.proxy.clearSpanWidth = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting clearSpanWidth '+e);
			console.error('Problems setting clearSpanWidth',e);
		}
	};
	this.clearSpanWidth_changed = function () {
		var value = this.clearSpanWidth;
		return value;
	};
	try {
		this.clearSpanWidth = new SFFloat();
	} catch (e) {
		console.log('Problems setting clearSpanWidth '+e);
		console.error('Problems setting clearSpanWidth',e);
	}
	this.set_riseHeight = function (value) {
		try {
			this.proxy.riseHeight = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting riseHeight '+e);
			console.error('Problems setting riseHeight',e);
		}
	};
	this.riseHeight_changed = function () {
		var value = this.riseHeight;
		return value;
	};
	try {
		this.riseHeight = new SFFloat();
	} catch (e) {
		console.log('Problems setting riseHeight '+e);
		console.error('Problems setting riseHeight',e);
	}
	this.set_depth = function (value) {
		try {
			this.proxy.depth = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting depth '+e);
			console.error('Problems setting depth',e);
		}
	};
	this.depth_changed = function () {
		var value = this.depth;
		return value;
	};
	try {
		this.depth = new SFFloat();
	} catch (e) {
		console.log('Problems setting depth '+e);
		console.error('Problems setting depth',e);
	}
	this.set_topAbutmentHeight = function (value) {
		try {
			this.proxy.topAbutmentHeight = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting topAbutmentHeight '+e);
			console.error('Problems setting topAbutmentHeight',e);
		}
	};
	this.topAbutmentHeight_changed = function () {
		var value = this.topAbutmentHeight;
		return value;
	};
	try {
		this.topAbutmentHeight = new SFFloat();
	} catch (e) {
		console.log('Problems setting topAbutmentHeight '+e);
		console.error('Problems setting topAbutmentHeight',e);
	}
	this.set_pierWidth = function (value) {
		try {
			this.proxy.pierWidth = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting pierWidth '+e);
			console.error('Problems setting pierWidth',e);
		}
	};
	this.pierWidth_changed = function () {
		var value = this.pierWidth;
		return value;
	};
	try {
		this.pierWidth = new SFFloat();
	} catch (e) {
		console.log('Problems setting pierWidth '+e);
		console.error('Problems setting pierWidth',e);
	}
	this.set_pierHeight = function (value) {
		try {
			this.proxy.pierHeight = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting pierHeight '+e);
			console.error('Problems setting pierHeight',e);
		}
	};
	this.pierHeight_changed = function () {
		var value = this.pierHeight;
		return value;
	};
	try {
		this.pierHeight = new SFFloat();
	} catch (e) {
		console.log('Problems setting pierHeight '+e);
		console.error('Problems setting pierHeight',e);
	}
	this.set_archHalf = function (value) {
		try {
			this.proxy.archHalf = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting archHalf '+e);
			console.error('Problems setting archHalf',e);
		}
	};
	this.archHalf_changed = function () {
		var value = this.archHalf;
		return value;
	};
	try {
		this.archHalf = new SFBool();
	} catch (e) {
		console.log('Problems setting archHalf '+e);
		console.error('Problems setting archHalf',e);
	}
	this.set_archHalfExtensionWidth = function (value) {
		try {
			this.proxy.archHalfExtensionWidth = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting archHalfExtensionWidth '+e);
			console.error('Problems setting archHalfExtensionWidth',e);
		}
	};
	this.archHalfExtensionWidth_changed = function () {
		var value = this.archHalfExtensionWidth;
		return value;
	};
	try {
		this.archHalfExtensionWidth = new SFFloat();
	} catch (e) {
		console.log('Problems setting archHalfExtensionWidth '+e);
		console.error('Problems setting archHalfExtensionWidth',e);
	}
	this.set_onlyIntrados = function (value) {
		try {
			this.proxy.onlyIntrados = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting onlyIntrados '+e);
			console.error('Problems setting onlyIntrados',e);
		}
	};
	this.onlyIntrados_changed = function () {
		var value = this.onlyIntrados;
		return value;
	};
	try {
		this.onlyIntrados = new SFBool();
	} catch (e) {
		console.log('Problems setting onlyIntrados '+e);
		console.error('Problems setting onlyIntrados',e);
	}
	this.set_archFilled = function (value) {
		try {
			this.proxy.archFilled = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting archFilled '+e);
			console.error('Problems setting archFilled',e);
		}
	};
	this.archFilled_changed = function () {
		var value = this.archFilled;
		return value;
	};
	try {
		this.archFilled = new SFBool();
	} catch (e) {
		console.log('Problems setting archFilled '+e);
		console.error('Problems setting archFilled',e);
	}
	this.set_archHalfFilled = function (value) {
		try {
			this.proxy.archHalfFilled = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting archHalfFilled '+e);
			console.error('Problems setting archHalfFilled',e);
		}
	};
	this.archHalfFilled_changed = function () {
		var value = this.archHalfFilled;
		return value;
	};
	try {
		this.archHalfFilled = new SFBool();
	} catch (e) {
		console.log('Problems setting archHalfFilled '+e);
		console.error('Problems setting archHalfFilled',e);
	}
	this.set_lintel = function (value) {
		try {
			this.proxy.lintel = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting lintel '+e);
			console.error('Problems setting lintel',e);
		}
	};
	this.lintel_changed = function () {
		var value = this.lintel;
		return value;
	};
	try {
		this.lintel = new SFBool();
	} catch (e) {
		console.log('Problems setting lintel '+e);
		console.error('Problems setting lintel',e);
	}
	this.set_computedScale = function (value) {
		try {
			this.proxy.computedScale = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting computedScale '+e);
			console.error('Problems setting computedScale',e);
		}
	};
	this.computedScale_changed = function () {
		var value = this.computedScale;
		return value;
	};
	try {
		this.computedScale = new SFVec3f();
	} catch (e) {
		console.log('Problems setting computedScale '+e);
		console.error('Problems setting computedScale',e);
	}
	this.set_pointOut = function (value) {
		try {
			this.proxy.pointOut = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting pointOut '+e);
			console.error('Problems setting pointOut',e);
		}
	};
	this.pointOut_changed = function () {
		var value = this.pointOut;
		return value;
	};
	try {
		this.pointOut = new MFVec3f();
	} catch (e) {
		console.log('Problems setting pointOut '+e);
		console.error('Problems setting pointOut',e);
	}
	this.set_indexOut = function (value) {
		try {
			this.proxy.indexOut = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting indexOut '+e);
			console.error('Problems setting indexOut',e);
		}
	};
	this.indexOut_changed = function () {
		var value = this.indexOut;
		return value;
	};
	try {
		this.indexOut = new MFInt32();
	} catch (e) {
		console.log('Problems setting indexOut '+e);
		console.error('Problems setting indexOut',e);
	}
};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ArchPrototype.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript'] = new X3DJSON['Script']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ArchPrototype.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript']['ACTION'],X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript'].initialize === "function") X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript'].initialize();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ArchPrototype.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript']['ACTION']['computedScale'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript']['ACTION']['computedScale'] = [];
}
X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript']['ACTION']['computedScale'].push(function(property, value) {
		if (property === 'computedScale') {
			X3DJSON.nodeUtil("Scene","ArchTransform","scale",typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript'].computedScale === "function" ? X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript'].computedScale() : X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript'].computedScale, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","ArchTransform","scale",typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript'].computedScale === "function" ? X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript'].computedScale() : X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript'].computedScale, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ArchPrototype.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript']['ACTION']['pointOut'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript']['ACTION']['pointOut'] = [];
}
X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript']['ACTION']['pointOut'].push(function(property, value) {
		if (property === 'pointOut') {
			X3DJSON.nodeUtil("Scene","ArchChord","point",typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript'].pointOut === "function" ? X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript'].pointOut() : X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript'].pointOut, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","ArchChord","point",typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript'].pointOut === "function" ? X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript'].pointOut() : X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript'].pointOut, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ArchPrototype.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript']['ACTION']['indexOut'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript']['ACTION']['indexOut'] = [];
}
X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript']['ACTION']['indexOut'].push(function(property, value) {
		if (property === 'indexOut') {
			X3DJSON.nodeUtil("Scene","ArchIndex","coordIndex",typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript'].indexOut === "function" ? X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript'].indexOut() : X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript'].indexOut, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","ArchIndex","coordIndex",typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript'].indexOut === "function" ? X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript'].indexOut() : X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript'].indexOut, __eventTime);
			X3DJSON.nodeUtil("Scene","ArchTransform","scale",typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript'].computedScale === "function" ? X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript'].computedScale() : X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript'].computedScale, __eventTime);
			X3DJSON.nodeUtil("Scene","ArchChord","point",typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript'].pointOut === "function" ? X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript'].pointOut() : X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript'].pointOut, __eventTime);
			X3DJSON.nodeUtil("Scene","ArchIndex","coordIndex",typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript'].indexOut === "function" ? X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript'].indexOut() : X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['ArchPrototypeScript'].indexOut, __eventTime);