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
if (typeof X3DJSON['Scene../data/forcenode.json'] === 'undefined') {
	X3DJSON['Scene../data/forcenode.json'] = {};
}

if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/forcenode.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/forcenode.json'] = {};
}

X3DJSON['Script']['Scene']['../data/forcenode.json']['DECLnode_nodeA_MoveBall'] = function() {
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
		this.translation = new SFVec3f(50,50,0);
	} catch (e) {
		console.log('Problems setting translation '+e);
		console.error('Problems setting translation',e);
	}
	this.set_old = function (value) {
		try {
			this.proxy.old = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting old '+e);
			console.error('Problems setting old',e);
		}
	};
	this.old_changed = function () {
		var value = this.old;
		return value;
	};
	try {
		this.old = new SFVec3f(0,0,0);
	} catch (e) {
		console.log('Problems setting old '+e);
		console.error('Problems setting old',e);
	}
	this.set_cycle = function (value) {
		try {
			this.proxy.cycle = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting cycle '+e);
			console.error('Problems setting cycle',e);
		}
	};
	this.cycle_changed = function () {
		var value = this.cycle;
		return value;
	};
	try {
		this.cycle = undefined;
	} catch (e) {
		console.log('Problems setting cycle '+e);
		console.error('Problems setting cycle',e);
	}
	this.set_keyValue = function (value) {
		try {
			this.proxy.keyValue = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting keyValue '+e);
			console.error('Problems setting keyValue',e);
		}
	};
	this.keyValue_changed = function () {
		var value = this.keyValue;
		return value;
	};
	try {
		this.keyValue = new MFVec3f();
	} catch (e) {
		console.log('Problems setting keyValue '+e);
		console.error('Problems setting keyValue',e);
	}


ecmascript:
				
	this.set_cycle = function (value) {
                                                this.proxy.old = this.proxy.translation;
						this.proxy.translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);
                                                this.proxy.keyValue = new MFVec3f([this.proxy.old, this.proxy.translation]);
						// console.error(this.proxy.translation);
					}

;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeA_MoveBall'] = new X3DJSON['Script']['Scene']['../data/forcenode.json']['DECLnode_nodeA_MoveBall']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeA_MoveBall'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeA_MoveBall'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeA_MoveBall']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeA_MoveBall']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeA_MoveBall'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeA_MoveBall']['ACTION'],X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeA_MoveBall']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeA_MoveBall'].initialize === "function") X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeA_MoveBall'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/forcenode.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/forcenode.json'] = {};
}

X3DJSON['Script']['Scene']['../data/forcenode.json']['DECLnode_nodeB_MoveBall'] = function() {
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
		this.translation = new SFVec3f(50,50,0);
	} catch (e) {
		console.log('Problems setting translation '+e);
		console.error('Problems setting translation',e);
	}
	this.set_old = function (value) {
		try {
			this.proxy.old = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting old '+e);
			console.error('Problems setting old',e);
		}
	};
	this.old_changed = function () {
		var value = this.old;
		return value;
	};
	try {
		this.old = new SFVec3f(0,0,0);
	} catch (e) {
		console.log('Problems setting old '+e);
		console.error('Problems setting old',e);
	}
	this.set_cycle = function (value) {
		try {
			this.proxy.cycle = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting cycle '+e);
			console.error('Problems setting cycle',e);
		}
	};
	this.cycle_changed = function () {
		var value = this.cycle;
		return value;
	};
	try {
		this.cycle = undefined;
	} catch (e) {
		console.log('Problems setting cycle '+e);
		console.error('Problems setting cycle',e);
	}
	this.set_keyValue = function (value) {
		try {
			this.proxy.keyValue = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting keyValue '+e);
			console.error('Problems setting keyValue',e);
		}
	};
	this.keyValue_changed = function () {
		var value = this.keyValue;
		return value;
	};
	try {
		this.keyValue = new MFVec3f();
	} catch (e) {
		console.log('Problems setting keyValue '+e);
		console.error('Problems setting keyValue',e);
	}


ecmascript:
				
	this.set_cycle = function (value) {
                                                this.proxy.old = this.proxy.translation;
						this.proxy.translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);
                                                this.proxy.keyValue = new MFVec3f([this.proxy.old, this.proxy.translation]);
						// console.error(this.proxy.translation);
					}

;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeB_MoveBall'] = new X3DJSON['Script']['Scene']['../data/forcenode.json']['DECLnode_nodeB_MoveBall']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeB_MoveBall'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeB_MoveBall'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeB_MoveBall']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeB_MoveBall']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeB_MoveBall'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeB_MoveBall']['ACTION'],X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeB_MoveBall']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeB_MoveBall'].initialize === "function") X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeB_MoveBall'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/forcenode.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/forcenode.json'] = {};
}

X3DJSON['Script']['Scene']['../data/forcenode.json']['DECLnode_nodeC_MoveBall'] = function() {
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
		this.translation = new SFVec3f(50,50,0);
	} catch (e) {
		console.log('Problems setting translation '+e);
		console.error('Problems setting translation',e);
	}
	this.set_old = function (value) {
		try {
			this.proxy.old = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting old '+e);
			console.error('Problems setting old',e);
		}
	};
	this.old_changed = function () {
		var value = this.old;
		return value;
	};
	try {
		this.old = new SFVec3f(0,0,0);
	} catch (e) {
		console.log('Problems setting old '+e);
		console.error('Problems setting old',e);
	}
	this.set_cycle = function (value) {
		try {
			this.proxy.cycle = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting cycle '+e);
			console.error('Problems setting cycle',e);
		}
	};
	this.cycle_changed = function () {
		var value = this.cycle;
		return value;
	};
	try {
		this.cycle = undefined;
	} catch (e) {
		console.log('Problems setting cycle '+e);
		console.error('Problems setting cycle',e);
	}
	this.set_keyValue = function (value) {
		try {
			this.proxy.keyValue = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting keyValue '+e);
			console.error('Problems setting keyValue',e);
		}
	};
	this.keyValue_changed = function () {
		var value = this.keyValue;
		return value;
	};
	try {
		this.keyValue = new MFVec3f();
	} catch (e) {
		console.log('Problems setting keyValue '+e);
		console.error('Problems setting keyValue',e);
	}


ecmascript:
				
	this.set_cycle = function (value) {
                                                this.proxy.old = this.proxy.translation;
						this.proxy.translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);
                                                this.proxy.keyValue = new MFVec3f([this.proxy.old, this.proxy.translation]);
						// console.error(this.proxy.translation);
					}

;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeC_MoveBall'] = new X3DJSON['Script']['Scene']['../data/forcenode.json']['DECLnode_nodeC_MoveBall']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeC_MoveBall'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeC_MoveBall'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeC_MoveBall']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeC_MoveBall']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeC_MoveBall'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeC_MoveBall']['ACTION'],X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeC_MoveBall']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeC_MoveBall'].initialize === "function") X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeC_MoveBall'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/forcenode.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/forcenode.json'] = {};
}

X3DJSON['Script']['Scene']['../data/forcenode.json']['DECLnode_nodeD_MoveBall'] = function() {
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
		this.translation = new SFVec3f(50,50,0);
	} catch (e) {
		console.log('Problems setting translation '+e);
		console.error('Problems setting translation',e);
	}
	this.set_old = function (value) {
		try {
			this.proxy.old = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting old '+e);
			console.error('Problems setting old',e);
		}
	};
	this.old_changed = function () {
		var value = this.old;
		return value;
	};
	try {
		this.old = new SFVec3f(0,0,0);
	} catch (e) {
		console.log('Problems setting old '+e);
		console.error('Problems setting old',e);
	}
	this.set_cycle = function (value) {
		try {
			this.proxy.cycle = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting cycle '+e);
			console.error('Problems setting cycle',e);
		}
	};
	this.cycle_changed = function () {
		var value = this.cycle;
		return value;
	};
	try {
		this.cycle = undefined;
	} catch (e) {
		console.log('Problems setting cycle '+e);
		console.error('Problems setting cycle',e);
	}
	this.set_keyValue = function (value) {
		try {
			this.proxy.keyValue = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting keyValue '+e);
			console.error('Problems setting keyValue',e);
		}
	};
	this.keyValue_changed = function () {
		var value = this.keyValue;
		return value;
	};
	try {
		this.keyValue = new MFVec3f();
	} catch (e) {
		console.log('Problems setting keyValue '+e);
		console.error('Problems setting keyValue',e);
	}


ecmascript:
				
	this.set_cycle = function (value) {
                                                this.proxy.old = this.proxy.translation;
						this.proxy.translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);
                                                this.proxy.keyValue = new MFVec3f([this.proxy.old, this.proxy.translation]);
						// console.error(this.proxy.translation);
					}

;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeD_MoveBall'] = new X3DJSON['Script']['Scene']['../data/forcenode.json']['DECLnode_nodeD_MoveBall']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeD_MoveBall'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeD_MoveBall'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeD_MoveBall']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeD_MoveBall']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeD_MoveBall'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeD_MoveBall']['ACTION'],X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeD_MoveBall']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeD_MoveBall'].initialize === "function") X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeD_MoveBall'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/forcenode.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/forcenode.json'] = {};
}

X3DJSON['Script']['Scene']['../data/forcenode.json']['DECLcyl_linkA_MoveCylinder'] = function() {
	this.set_spine = function (value) {
		try {
			this.proxy.spine = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting spine '+e);
			console.error('Problems setting spine',e);
		}
	};
	this.spine_changed = function () {
		var value = this.spine;
		return value;
	};
	try {
		this.spine = new MFVec3f([new SFVec3f ( 0 , -50 , 0 ),new SFVec3f ( 0 , 50 , 0 )]);
	} catch (e) {
		console.log('Problems setting spine '+e);
		console.error('Problems setting spine',e);
	}
	this.set_endA = function (value) {
		try {
			this.proxy.endA = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting endA '+e);
			console.error('Problems setting endA',e);
		}
	};
	this.endA_changed = function () {
		var value = this.endA;
		return value;
	};
	try {
		this.endA = undefined;
	} catch (e) {
		console.log('Problems setting endA '+e);
		console.error('Problems setting endA',e);
	}
	this.set_endB = function (value) {
		try {
			this.proxy.endB = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting endB '+e);
			console.error('Problems setting endB',e);
		}
	};
	this.endB_changed = function () {
		var value = this.endB;
		return value;
	};
	try {
		this.endB = undefined;
	} catch (e) {
		console.log('Problems setting endB '+e);
		console.error('Problems setting endB',e);
	}


ecmascript:

               
	this.set_endA = function (value) {
		    if (typeof this.proxy.spine === 'undefined') {
		        this.proxy.spine = new MFVec3f([value, value]);
		    } else {
		        this.proxy.spine = new MFVec3f([value, this.proxy.spine[1]]);
		    }
                }

      ;

	this.set_endB = function (value) {
		    if (typeof this.proxy.spine === 'undefined') {
		        this.proxy.spine = new MFVec3f([value, value]);
		    } else {
		        this.proxy.spine = new MFVec3f([this.proxy.spine[0], value]);
		    }
                }

      ;

	this.set_spine = function (value) {
                    this.proxy.spine = value;
                }

;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkA_MoveCylinder'] = new X3DJSON['Script']['Scene']['../data/forcenode.json']['DECLcyl_linkA_MoveCylinder']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkA_MoveCylinder'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkA_MoveCylinder'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkA_MoveCylinder']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkA_MoveCylinder']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkA_MoveCylinder'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkA_MoveCylinder']['ACTION'],X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkA_MoveCylinder']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkA_MoveCylinder'].initialize === "function") X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkA_MoveCylinder'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/forcenode.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/forcenode.json'] = {};
}

X3DJSON['Script']['Scene']['../data/forcenode.json']['DECLcyl_linkB_MoveCylinder'] = function() {
	this.set_spine = function (value) {
		try {
			this.proxy.spine = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting spine '+e);
			console.error('Problems setting spine',e);
		}
	};
	this.spine_changed = function () {
		var value = this.spine;
		return value;
	};
	try {
		this.spine = new MFVec3f([new SFVec3f ( 0 , -50 , 0 ),new SFVec3f ( 0 , 50 , 0 )]);
	} catch (e) {
		console.log('Problems setting spine '+e);
		console.error('Problems setting spine',e);
	}
	this.set_endA = function (value) {
		try {
			this.proxy.endA = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting endA '+e);
			console.error('Problems setting endA',e);
		}
	};
	this.endA_changed = function () {
		var value = this.endA;
		return value;
	};
	try {
		this.endA = undefined;
	} catch (e) {
		console.log('Problems setting endA '+e);
		console.error('Problems setting endA',e);
	}
	this.set_endB = function (value) {
		try {
			this.proxy.endB = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting endB '+e);
			console.error('Problems setting endB',e);
		}
	};
	this.endB_changed = function () {
		var value = this.endB;
		return value;
	};
	try {
		this.endB = undefined;
	} catch (e) {
		console.log('Problems setting endB '+e);
		console.error('Problems setting endB',e);
	}


ecmascript:

               
	this.set_endA = function (value) {
		    if (typeof this.proxy.spine === 'undefined') {
		        this.proxy.spine = new MFVec3f([value, value]);
		    } else {
		        this.proxy.spine = new MFVec3f([value, this.proxy.spine[1]]);
		    }
                }

      ;

	this.set_endB = function (value) {
		    if (typeof this.proxy.spine === 'undefined') {
		        this.proxy.spine = new MFVec3f([value, value]);
		    } else {
		        this.proxy.spine = new MFVec3f([this.proxy.spine[0], value]);
		    }
                }

      ;

	this.set_spine = function (value) {
                    this.proxy.spine = value;
                }

;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkB_MoveCylinder'] = new X3DJSON['Script']['Scene']['../data/forcenode.json']['DECLcyl_linkB_MoveCylinder']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkB_MoveCylinder'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkB_MoveCylinder'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkB_MoveCylinder']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkB_MoveCylinder']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkB_MoveCylinder'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkB_MoveCylinder']['ACTION'],X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkB_MoveCylinder']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkB_MoveCylinder'].initialize === "function") X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkB_MoveCylinder'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/forcenode.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/forcenode.json'] = {};
}

X3DJSON['Script']['Scene']['../data/forcenode.json']['DECLcyl_linkC_MoveCylinder'] = function() {
	this.set_spine = function (value) {
		try {
			this.proxy.spine = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting spine '+e);
			console.error('Problems setting spine',e);
		}
	};
	this.spine_changed = function () {
		var value = this.spine;
		return value;
	};
	try {
		this.spine = new MFVec3f([new SFVec3f ( 0 , -50 , 0 ),new SFVec3f ( 0 , 50 , 0 )]);
	} catch (e) {
		console.log('Problems setting spine '+e);
		console.error('Problems setting spine',e);
	}
	this.set_endA = function (value) {
		try {
			this.proxy.endA = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting endA '+e);
			console.error('Problems setting endA',e);
		}
	};
	this.endA_changed = function () {
		var value = this.endA;
		return value;
	};
	try {
		this.endA = undefined;
	} catch (e) {
		console.log('Problems setting endA '+e);
		console.error('Problems setting endA',e);
	}
	this.set_endB = function (value) {
		try {
			this.proxy.endB = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting endB '+e);
			console.error('Problems setting endB',e);
		}
	};
	this.endB_changed = function () {
		var value = this.endB;
		return value;
	};
	try {
		this.endB = undefined;
	} catch (e) {
		console.log('Problems setting endB '+e);
		console.error('Problems setting endB',e);
	}


ecmascript:

               
	this.set_endA = function (value) {
		    if (typeof this.proxy.spine === 'undefined') {
		        this.proxy.spine = new MFVec3f([value, value]);
		    } else {
		        this.proxy.spine = new MFVec3f([value, this.proxy.spine[1]]);
		    }
                }

      ;

	this.set_endB = function (value) {
		    if (typeof this.proxy.spine === 'undefined') {
		        this.proxy.spine = new MFVec3f([value, value]);
		    } else {
		        this.proxy.spine = new MFVec3f([this.proxy.spine[0], value]);
		    }
                }

      ;

	this.set_spine = function (value) {
                    this.proxy.spine = value;
                }

;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkC_MoveCylinder'] = new X3DJSON['Script']['Scene']['../data/forcenode.json']['DECLcyl_linkC_MoveCylinder']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkC_MoveCylinder'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkC_MoveCylinder'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkC_MoveCylinder']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkC_MoveCylinder']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkC_MoveCylinder'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkC_MoveCylinder']['ACTION'],X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkC_MoveCylinder']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkC_MoveCylinder'].initialize === "function") X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkC_MoveCylinder'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/forcenode.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/forcenode.json'] = {};
}

X3DJSON['Script']['Scene']['../data/forcenode.json']['clickHandler'] = function() {
	this.set_counter = function (value) {
		try {
			this.proxy.counter = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting counter '+e);
			console.error('Problems setting counter',e);
		}
	};
	this.counter_changed = function () {
		var value = this.counter;
		return value;
	};
	try {
		this.counter = new SFInt32(0);
	} catch (e) {
		console.log('Problems setting counter '+e);
		console.error('Problems setting counter',e);
	}
	this.set_node = function (value) {
		try {
			this.proxy.node = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting node '+e);
			console.error('Problems setting node',e);
		}
	};
	this.node_changed = function () {
		var value = this.node;
		return value;
	};
	try {
		this.node = undefined;
	} catch (e) {
		console.log('Problems setting node '+e);
		console.error('Problems setting node',e);
	}
	this.set_add_node = function (value) {
		try {
			this.proxy.add_node = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting add_node '+e);
			console.error('Problems setting add_node',e);
		}
	};
	this.add_node_changed = function () {
		var value = this.add_node;
		return value;
	};
	try {
		this.add_node = new SFBool(false);
	} catch (e) {
		console.log('Problems setting add_node '+e);
		console.error('Problems setting add_node',e);
	}

	
ecmascript:

	this.add_node = function (value) {
                // console.error('hey ', this.proxy.counter);
                this.proxy.counter = this.proxy.counter++;
		Browser.appendTo(Browser.getDocument().querySelector("field [name=ModifiableNode]"),
			{ "ProtoInstance":
				{ "@name":"node",
				  "@DEF":"node'+this.proxy.counter+'",
				  "fieldValue": [
					{
						 "@name":"position",
						 "@value":[0.0,0.0,0.0]
					}
				  ]
				}
			});

        }
	
;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/forcenode.json']['clickHandler'] = new X3DJSON['Script']['Scene']['../data/forcenode.json']['clickHandler']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['clickHandler'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json']['clickHandler'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['clickHandler']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json']['clickHandler']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/forcenode.json']['clickHandler'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/forcenode.json']['clickHandler']['ACTION'],X3DJSON['Obj']['Scene']['../data/forcenode.json']['clickHandler']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['clickHandler'].initialize === "function") X3DJSON['Obj']['Scene']['../data/forcenode.json']['clickHandler'].initialize();
    if (X3DJSON.nodeUtil("Scene","DECLnode_nodeA_nodeClock")) {
X3DJSON.nodeUtil("Scene","DECLnode_nodeA_nodeClock").addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeA_MoveBall'].set_cycle(X3DJSON.nodeUtil("Scene","DECLnode_nodeA_nodeClock","cycleTime"), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeA_MoveBall'].set_cycle(X3DJSON.nodeUtil("Scene","DECLnode_nodeA_nodeClock","cycleTime"), __eventTime);
    if (X3DJSON.nodeUtil("Scene","DECLnode_nodeA_nodeClock")) {
X3DJSON.nodeUtil("Scene","DECLnode_nodeA_nodeClock").addEventListener('outputchange', function(event) {
}, false);
}
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeA_MoveBall'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeA_MoveBall'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeA_MoveBall']['ACTION']['keyValue'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeA_MoveBall']['ACTION']['keyValue'] = [];
}
X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeA_MoveBall']['ACTION']['keyValue'].push(function(property, value) {
		if (property === 'keyValue') {
			X3DJSON.nodeUtil("Scene","DECLnode_nodeA_NodePosition","keyValue",typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeA_MoveBall'].keyValue === "function" ? X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeA_MoveBall'].keyValue() : X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeA_MoveBall'].keyValue, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","DECLnode_nodeA_NodePosition","keyValue",typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeA_MoveBall'].keyValue === "function" ? X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeA_MoveBall'].keyValue() : X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeA_MoveBall'].keyValue, __eventTime);
    if (X3DJSON.nodeUtil("Scene","DECLnode_nodeA_NodePosition")) {
X3DJSON.nodeUtil("Scene","DECLnode_nodeA_NodePosition").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLnode_nodeB_nodeClock")) {
X3DJSON.nodeUtil("Scene","DECLnode_nodeB_nodeClock").addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeB_MoveBall'].set_cycle(X3DJSON.nodeUtil("Scene","DECLnode_nodeB_nodeClock","cycleTime"), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeB_MoveBall'].set_cycle(X3DJSON.nodeUtil("Scene","DECLnode_nodeB_nodeClock","cycleTime"), __eventTime);
    if (X3DJSON.nodeUtil("Scene","DECLnode_nodeB_nodeClock")) {
X3DJSON.nodeUtil("Scene","DECLnode_nodeB_nodeClock").addEventListener('outputchange', function(event) {
}, false);
}
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeB_MoveBall'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeB_MoveBall'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeB_MoveBall']['ACTION']['keyValue'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeB_MoveBall']['ACTION']['keyValue'] = [];
}
X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeB_MoveBall']['ACTION']['keyValue'].push(function(property, value) {
		if (property === 'keyValue') {
			X3DJSON.nodeUtil("Scene","DECLnode_nodeB_NodePosition","keyValue",typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeB_MoveBall'].keyValue === "function" ? X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeB_MoveBall'].keyValue() : X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeB_MoveBall'].keyValue, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","DECLnode_nodeB_NodePosition","keyValue",typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeB_MoveBall'].keyValue === "function" ? X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeB_MoveBall'].keyValue() : X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeB_MoveBall'].keyValue, __eventTime);
    if (X3DJSON.nodeUtil("Scene","DECLnode_nodeB_NodePosition")) {
X3DJSON.nodeUtil("Scene","DECLnode_nodeB_NodePosition").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLnode_nodeC_nodeClock")) {
X3DJSON.nodeUtil("Scene","DECLnode_nodeC_nodeClock").addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeC_MoveBall'].set_cycle(X3DJSON.nodeUtil("Scene","DECLnode_nodeC_nodeClock","cycleTime"), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeC_MoveBall'].set_cycle(X3DJSON.nodeUtil("Scene","DECLnode_nodeC_nodeClock","cycleTime"), __eventTime);
    if (X3DJSON.nodeUtil("Scene","DECLnode_nodeC_nodeClock")) {
X3DJSON.nodeUtil("Scene","DECLnode_nodeC_nodeClock").addEventListener('outputchange', function(event) {
}, false);
}
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeC_MoveBall'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeC_MoveBall'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeC_MoveBall']['ACTION']['keyValue'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeC_MoveBall']['ACTION']['keyValue'] = [];
}
X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeC_MoveBall']['ACTION']['keyValue'].push(function(property, value) {
		if (property === 'keyValue') {
			X3DJSON.nodeUtil("Scene","DECLnode_nodeC_NodePosition","keyValue",typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeC_MoveBall'].keyValue === "function" ? X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeC_MoveBall'].keyValue() : X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeC_MoveBall'].keyValue, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","DECLnode_nodeC_NodePosition","keyValue",typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeC_MoveBall'].keyValue === "function" ? X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeC_MoveBall'].keyValue() : X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeC_MoveBall'].keyValue, __eventTime);
    if (X3DJSON.nodeUtil("Scene","DECLnode_nodeC_NodePosition")) {
X3DJSON.nodeUtil("Scene","DECLnode_nodeC_NodePosition").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLnode_nodeD_nodeClock")) {
X3DJSON.nodeUtil("Scene","DECLnode_nodeD_nodeClock").addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeD_MoveBall'].set_cycle(X3DJSON.nodeUtil("Scene","DECLnode_nodeD_nodeClock","cycleTime"), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeD_MoveBall'].set_cycle(X3DJSON.nodeUtil("Scene","DECLnode_nodeD_nodeClock","cycleTime"), __eventTime);
    if (X3DJSON.nodeUtil("Scene","DECLnode_nodeD_nodeClock")) {
X3DJSON.nodeUtil("Scene","DECLnode_nodeD_nodeClock").addEventListener('outputchange', function(event) {
}, false);
}
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeD_MoveBall'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeD_MoveBall'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeD_MoveBall']['ACTION']['keyValue'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeD_MoveBall']['ACTION']['keyValue'] = [];
}
X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeD_MoveBall']['ACTION']['keyValue'].push(function(property, value) {
		if (property === 'keyValue') {
			X3DJSON.nodeUtil("Scene","DECLnode_nodeD_NodePosition","keyValue",typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeD_MoveBall'].keyValue === "function" ? X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeD_MoveBall'].keyValue() : X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeD_MoveBall'].keyValue, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","DECLnode_nodeD_NodePosition","keyValue",typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeD_MoveBall'].keyValue === "function" ? X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeD_MoveBall'].keyValue() : X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeD_MoveBall'].keyValue, __eventTime);
    if (X3DJSON.nodeUtil("Scene","DECLnode_nodeD_NodePosition")) {
X3DJSON.nodeUtil("Scene","DECLnode_nodeD_NodePosition").addEventListener('outputchange', function(event) {
}, false);
}
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkA_MoveCylinder'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkA_MoveCylinder'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkA_MoveCylinder']['ACTION']['spine'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkA_MoveCylinder']['ACTION']['spine'] = [];
}
X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkA_MoveCylinder']['ACTION']['spine'].push(function(property, value) {
		if (property === 'spine') {
			X3DJSON.nodeUtil("Scene","DECLcyl_linkA_extrusion","spine",typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkA_MoveCylinder'].spine === "function" ? X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkA_MoveCylinder'].spine() : X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkA_MoveCylinder'].spine, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","DECLcyl_linkA_extrusion","spine",typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkA_MoveCylinder'].spine === "function" ? X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkA_MoveCylinder'].spine() : X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkA_MoveCylinder'].spine, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkB_MoveCylinder'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkB_MoveCylinder'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkB_MoveCylinder']['ACTION']['spine'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkB_MoveCylinder']['ACTION']['spine'] = [];
}
X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkB_MoveCylinder']['ACTION']['spine'].push(function(property, value) {
		if (property === 'spine') {
			X3DJSON.nodeUtil("Scene","DECLcyl_linkB_extrusion","spine",typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkB_MoveCylinder'].spine === "function" ? X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkB_MoveCylinder'].spine() : X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkB_MoveCylinder'].spine, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","DECLcyl_linkB_extrusion","spine",typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkB_MoveCylinder'].spine === "function" ? X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkB_MoveCylinder'].spine() : X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkB_MoveCylinder'].spine, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkC_MoveCylinder'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkC_MoveCylinder'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkC_MoveCylinder']['ACTION']['spine'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkC_MoveCylinder']['ACTION']['spine'] = [];
}
X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkC_MoveCylinder']['ACTION']['spine'].push(function(property, value) {
		if (property === 'spine') {
			X3DJSON.nodeUtil("Scene","DECLcyl_linkC_extrusion","spine",typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkC_MoveCylinder'].spine === "function" ? X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkC_MoveCylinder'].spine() : X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkC_MoveCylinder'].spine, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","DECLcyl_linkC_extrusion","spine",typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkC_MoveCylinder'].spine === "function" ? X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkC_MoveCylinder'].spine() : X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkC_MoveCylinder'].spine, __eventTime);
    if (X3DJSON.nodeUtil("Scene","clickGenerator")) {
X3DJSON.nodeUtil("Scene","clickGenerator").addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/forcenode.json']['clickHandler'].add_node(X3DJSON.nodeUtil("Scene","clickGenerator","isActive"), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/forcenode.json']['clickHandler'].add_node(X3DJSON.nodeUtil("Scene","clickGenerator","isActive"), __eventTime);
    if (X3DJSON.nodeUtil("Scene","DECLnode_nodeA_transform")) {
X3DJSON.nodeUtil("Scene","DECLnode_nodeA_transform").addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkA_MoveCylinder'].set_endA(X3DJSON.nodeUtil("Scene","DECLnode_nodeA_transform","translation"), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkA_MoveCylinder'].set_endA(X3DJSON.nodeUtil("Scene","DECLnode_nodeA_transform","translation"), __eventTime);
    if (X3DJSON.nodeUtil("Scene","DECLnode_nodeB_transform")) {
X3DJSON.nodeUtil("Scene","DECLnode_nodeB_transform").addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkA_MoveCylinder'].set_endB(X3DJSON.nodeUtil("Scene","DECLnode_nodeB_transform","translation"), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkA_MoveCylinder'].set_endB(X3DJSON.nodeUtil("Scene","DECLnode_nodeB_transform","translation"), __eventTime);
    if (X3DJSON.nodeUtil("Scene","DECLnode_nodeA_transform")) {
X3DJSON.nodeUtil("Scene","DECLnode_nodeA_transform").addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkB_MoveCylinder'].set_endA(X3DJSON.nodeUtil("Scene","DECLnode_nodeA_transform","translation"), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkB_MoveCylinder'].set_endA(X3DJSON.nodeUtil("Scene","DECLnode_nodeA_transform","translation"), __eventTime);
    if (X3DJSON.nodeUtil("Scene","DECLnode_nodeC_transform")) {
X3DJSON.nodeUtil("Scene","DECLnode_nodeC_transform").addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkB_MoveCylinder'].set_endB(X3DJSON.nodeUtil("Scene","DECLnode_nodeC_transform","translation"), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkB_MoveCylinder'].set_endB(X3DJSON.nodeUtil("Scene","DECLnode_nodeC_transform","translation"), __eventTime);
    if (X3DJSON.nodeUtil("Scene","DECLnode_nodeA_transform")) {
X3DJSON.nodeUtil("Scene","DECLnode_nodeA_transform").addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkC_MoveCylinder'].set_endA(X3DJSON.nodeUtil("Scene","DECLnode_nodeA_transform","translation"), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkC_MoveCylinder'].set_endA(X3DJSON.nodeUtil("Scene","DECLnode_nodeA_transform","translation"), __eventTime);
    if (X3DJSON.nodeUtil("Scene","DECLnode_nodeD_transform")) {
X3DJSON.nodeUtil("Scene","DECLnode_nodeD_transform").addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkC_MoveCylinder'].set_endB(X3DJSON.nodeUtil("Scene","DECLnode_nodeD_transform","translation"), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkC_MoveCylinder'].set_endB(X3DJSON.nodeUtil("Scene","DECLnode_nodeD_transform","translation"), __eventTime);
			X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeA_MoveBall'].set_cycle(X3DJSON.nodeUtil("Scene","DECLnode_nodeA_nodeClock","cycleTime"), __eventTime);
			X3DJSON.nodeUtil("Scene","DECLnode_nodeA_NodePosition","keyValue",typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeA_MoveBall'].keyValue === "function" ? X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeA_MoveBall'].keyValue() : X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeA_MoveBall'].keyValue, __eventTime);
			X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeB_MoveBall'].set_cycle(X3DJSON.nodeUtil("Scene","DECLnode_nodeB_nodeClock","cycleTime"), __eventTime);
			X3DJSON.nodeUtil("Scene","DECLnode_nodeB_NodePosition","keyValue",typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeB_MoveBall'].keyValue === "function" ? X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeB_MoveBall'].keyValue() : X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeB_MoveBall'].keyValue, __eventTime);
			X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeC_MoveBall'].set_cycle(X3DJSON.nodeUtil("Scene","DECLnode_nodeC_nodeClock","cycleTime"), __eventTime);
			X3DJSON.nodeUtil("Scene","DECLnode_nodeC_NodePosition","keyValue",typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeC_MoveBall'].keyValue === "function" ? X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeC_MoveBall'].keyValue() : X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeC_MoveBall'].keyValue, __eventTime);
			X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeD_MoveBall'].set_cycle(X3DJSON.nodeUtil("Scene","DECLnode_nodeD_nodeClock","cycleTime"), __eventTime);
			X3DJSON.nodeUtil("Scene","DECLnode_nodeD_NodePosition","keyValue",typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeD_MoveBall'].keyValue === "function" ? X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeD_MoveBall'].keyValue() : X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLnode_nodeD_MoveBall'].keyValue, __eventTime);
			X3DJSON.nodeUtil("Scene","DECLcyl_linkA_extrusion","spine",typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkA_MoveCylinder'].spine === "function" ? X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkA_MoveCylinder'].spine() : X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkA_MoveCylinder'].spine, __eventTime);
			X3DJSON.nodeUtil("Scene","DECLcyl_linkB_extrusion","spine",typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkB_MoveCylinder'].spine === "function" ? X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkB_MoveCylinder'].spine() : X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkB_MoveCylinder'].spine, __eventTime);
			X3DJSON.nodeUtil("Scene","DECLcyl_linkC_extrusion","spine",typeof X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkC_MoveCylinder'].spine === "function" ? X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkC_MoveCylinder'].spine() : X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkC_MoveCylinder'].spine, __eventTime);
			X3DJSON['Obj']['Scene']['../data/forcenode.json']['clickHandler'].add_node(X3DJSON.nodeUtil("Scene","clickGenerator","isActive"), __eventTime);
			X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkA_MoveCylinder'].set_endA(X3DJSON.nodeUtil("Scene","DECLnode_nodeA_transform","translation"), __eventTime);
			X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkA_MoveCylinder'].set_endB(X3DJSON.nodeUtil("Scene","DECLnode_nodeB_transform","translation"), __eventTime);
			X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkB_MoveCylinder'].set_endA(X3DJSON.nodeUtil("Scene","DECLnode_nodeA_transform","translation"), __eventTime);
			X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkB_MoveCylinder'].set_endB(X3DJSON.nodeUtil("Scene","DECLnode_nodeC_transform","translation"), __eventTime);
			X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkC_MoveCylinder'].set_endA(X3DJSON.nodeUtil("Scene","DECLnode_nodeA_transform","translation"), __eventTime);
			X3DJSON['Obj']['Scene']['../data/forcenode.json']['DECLcyl_linkC_MoveCylinder'].set_endB(X3DJSON.nodeUtil("Scene","DECLnode_nodeD_transform","translation"), __eventTime);