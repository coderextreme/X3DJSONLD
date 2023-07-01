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
			selector = '';
		} else {
			selector = selector+' ';
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
if (typeof X3DJSON['Scene../data/bubs2.json'] === 'undefined') {
	X3DJSON['Scene../data/bubs2.json'] = {};
}

if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/bubs2.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/bubs2.json'] = {};
}

X3DJSON['Script']['Scene']['../data/bubs2.json']['DECLBubble_bubbleA_bounce'] = function() {
	this.set_scale = function (value) {
		try {
			this.proxy.scale = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting scale '+e);
			console.error('Problems setting scale',e);
		}
	};
	this.scale_changed = function () {
		var value = this.scale;
		return value;
	};
	try {
		this.scale = new SFVec3f(1,1,1);
	} catch (e) {
		console.log('Problems setting scale '+e);
		console.error('Problems setting scale',e);
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
	this.set_scalvel = function (value) {
		try {
			this.proxy.scalvel = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting scalvel '+e);
			console.error('Problems setting scalvel',e);
		}
	};
	this.scalvel_changed = function () {
		var value = this.scalvel;
		return value;
	};
	try {
		this.scalvel = new SFVec3f(0,0,0);
	} catch (e) {
		console.log('Problems setting scalvel '+e);
		console.error('Problems setting scalvel',e);
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
	this.initialize = function () {
    this.proxy.velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);

    this.proxy.scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);
}
;

	this.set_fraction = function (value) {
    if (typeof this.proxy.translation === 'undefined') {
		this.proxy.translation = new SFVec3f(0, 0, 0);
    }
    if (typeof this.proxy.velocity === 'undefined') {
		this.proxy.velocity = new SFVec3f(0, 0, 0);
    }
    if (typeof this.proxy.scalvel === 'undefined') {
		this.proxy.scalvel = new SFVec3f(0, 0, 0);
    }
    if (typeof this.proxy.scale === 'undefined') {
		this.proxy.scale = new SFVec3f(1, 1, 1);
    }
    this.proxy.translation = new SFVec3f(	this.proxy.translation.x + this.proxy.velocity.x, this.proxy.translation.y + this.proxy.velocity.y, this.proxy.translation.z + this.proxy.velocity.z);
    this.proxy.scale = new SFVec3f(this.proxy.scale.x + this.proxy.scalvel.x, this.proxy.scale.y + this.proxy.scalvel.y, this.proxy.scale.z + this.proxy.scalvel.z);
    // if you get to far away or too big, explode
    if ( Math.abs(this.proxy.translation.x) > 256) {
	this.proxy.translation.x = 0;
	this.initialize();
    }
    if ( Math.abs(this.proxy.translation.y) > 256) {
	this.proxy.translation.y = 0;
	this.initialize();
    }
    if ( Math.abs(this.proxy.translation.z) > 256) {
	this.proxy.translation.z = 0;
	this.initialize();
    }
    if (Math.abs(this.proxy.scale.x) > 20) {
	this.proxy.scale.x = this.proxy.scale.x/20;
	this.proxy.translation.x = 0;
	this.initialize();
    }
    if (Math.abs(this.proxy.scale.y) > 20) {
	this.proxy.scale.y = this.proxy.scale.y/20;
	this.proxy.translation.y = 0;
	this.initialize();
    }
    if (Math.abs(this.proxy.scale.z) > 20) {
	this.proxy.scale.z = this.proxy.scale.z/20;
	this.proxy.translation.z = 0;
	this.initialize();
    }
};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubs2.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleA_bounce'] = new X3DJSON['Script']['Scene']['../data/bubs2.json']['DECLBubble_bubbleA_bounce']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubs2.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleA_bounce'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleA_bounce'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleA_bounce']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleA_bounce']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleA_bounce'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleA_bounce']['ACTION'],X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleA_bounce']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleA_bounce'].initialize === "function") X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleA_bounce'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/bubs2.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/bubs2.json'] = {};
}

X3DJSON['Script']['Scene']['../data/bubs2.json']['DECLBubble_bubbleB_bounce'] = function() {
	this.set_scale = function (value) {
		try {
			this.proxy.scale = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting scale '+e);
			console.error('Problems setting scale',e);
		}
	};
	this.scale_changed = function () {
		var value = this.scale;
		return value;
	};
	try {
		this.scale = new SFVec3f(1,1,1);
	} catch (e) {
		console.log('Problems setting scale '+e);
		console.error('Problems setting scale',e);
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
	this.set_scalvel = function (value) {
		try {
			this.proxy.scalvel = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting scalvel '+e);
			console.error('Problems setting scalvel',e);
		}
	};
	this.scalvel_changed = function () {
		var value = this.scalvel;
		return value;
	};
	try {
		this.scalvel = new SFVec3f(0,0,0);
	} catch (e) {
		console.log('Problems setting scalvel '+e);
		console.error('Problems setting scalvel',e);
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
	this.initialize = function () {
    this.proxy.velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);

    this.proxy.scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);
}
;

	this.set_fraction = function (value) {
    if (typeof this.proxy.translation === 'undefined') {
		this.proxy.translation = new SFVec3f(0, 0, 0);
    }
    if (typeof this.proxy.velocity === 'undefined') {
		this.proxy.velocity = new SFVec3f(0, 0, 0);
    }
    if (typeof this.proxy.scalvel === 'undefined') {
		this.proxy.scalvel = new SFVec3f(0, 0, 0);
    }
    if (typeof this.proxy.scale === 'undefined') {
		this.proxy.scale = new SFVec3f(1, 1, 1);
    }
    this.proxy.translation = new SFVec3f(	this.proxy.translation.x + this.proxy.velocity.x, this.proxy.translation.y + this.proxy.velocity.y, this.proxy.translation.z + this.proxy.velocity.z);
    this.proxy.scale = new SFVec3f(this.proxy.scale.x + this.proxy.scalvel.x, this.proxy.scale.y + this.proxy.scalvel.y, this.proxy.scale.z + this.proxy.scalvel.z);
    // if you get to far away or too big, explode
    if ( Math.abs(this.proxy.translation.x) > 256) {
	this.proxy.translation.x = 0;
	this.initialize();
    }
    if ( Math.abs(this.proxy.translation.y) > 256) {
	this.proxy.translation.y = 0;
	this.initialize();
    }
    if ( Math.abs(this.proxy.translation.z) > 256) {
	this.proxy.translation.z = 0;
	this.initialize();
    }
    if (Math.abs(this.proxy.scale.x) > 20) {
	this.proxy.scale.x = this.proxy.scale.x/20;
	this.proxy.translation.x = 0;
	this.initialize();
    }
    if (Math.abs(this.proxy.scale.y) > 20) {
	this.proxy.scale.y = this.proxy.scale.y/20;
	this.proxy.translation.y = 0;
	this.initialize();
    }
    if (Math.abs(this.proxy.scale.z) > 20) {
	this.proxy.scale.z = this.proxy.scale.z/20;
	this.proxy.translation.z = 0;
	this.initialize();
    }
};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubs2.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleB_bounce'] = new X3DJSON['Script']['Scene']['../data/bubs2.json']['DECLBubble_bubbleB_bounce']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubs2.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleB_bounce'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleB_bounce'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleB_bounce']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleB_bounce']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleB_bounce'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleB_bounce']['ACTION'],X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleB_bounce']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleB_bounce'].initialize === "function") X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleB_bounce'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/bubs2.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/bubs2.json'] = {};
}

X3DJSON['Script']['Scene']['../data/bubs2.json']['DECLBubble_bubbleC_bounce'] = function() {
	this.set_scale = function (value) {
		try {
			this.proxy.scale = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting scale '+e);
			console.error('Problems setting scale',e);
		}
	};
	this.scale_changed = function () {
		var value = this.scale;
		return value;
	};
	try {
		this.scale = new SFVec3f(1,1,1);
	} catch (e) {
		console.log('Problems setting scale '+e);
		console.error('Problems setting scale',e);
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
	this.set_scalvel = function (value) {
		try {
			this.proxy.scalvel = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting scalvel '+e);
			console.error('Problems setting scalvel',e);
		}
	};
	this.scalvel_changed = function () {
		var value = this.scalvel;
		return value;
	};
	try {
		this.scalvel = new SFVec3f(0,0,0);
	} catch (e) {
		console.log('Problems setting scalvel '+e);
		console.error('Problems setting scalvel',e);
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
	this.initialize = function () {
    this.proxy.velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);

    this.proxy.scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);
}
;

	this.set_fraction = function (value) {
    if (typeof this.proxy.translation === 'undefined') {
		this.proxy.translation = new SFVec3f(0, 0, 0);
    }
    if (typeof this.proxy.velocity === 'undefined') {
		this.proxy.velocity = new SFVec3f(0, 0, 0);
    }
    if (typeof this.proxy.scalvel === 'undefined') {
		this.proxy.scalvel = new SFVec3f(0, 0, 0);
    }
    if (typeof this.proxy.scale === 'undefined') {
		this.proxy.scale = new SFVec3f(1, 1, 1);
    }
    this.proxy.translation = new SFVec3f(	this.proxy.translation.x + this.proxy.velocity.x, this.proxy.translation.y + this.proxy.velocity.y, this.proxy.translation.z + this.proxy.velocity.z);
    this.proxy.scale = new SFVec3f(this.proxy.scale.x + this.proxy.scalvel.x, this.proxy.scale.y + this.proxy.scalvel.y, this.proxy.scale.z + this.proxy.scalvel.z);
    // if you get to far away or too big, explode
    if ( Math.abs(this.proxy.translation.x) > 256) {
	this.proxy.translation.x = 0;
	this.initialize();
    }
    if ( Math.abs(this.proxy.translation.y) > 256) {
	this.proxy.translation.y = 0;
	this.initialize();
    }
    if ( Math.abs(this.proxy.translation.z) > 256) {
	this.proxy.translation.z = 0;
	this.initialize();
    }
    if (Math.abs(this.proxy.scale.x) > 20) {
	this.proxy.scale.x = this.proxy.scale.x/20;
	this.proxy.translation.x = 0;
	this.initialize();
    }
    if (Math.abs(this.proxy.scale.y) > 20) {
	this.proxy.scale.y = this.proxy.scale.y/20;
	this.proxy.translation.y = 0;
	this.initialize();
    }
    if (Math.abs(this.proxy.scale.z) > 20) {
	this.proxy.scale.z = this.proxy.scale.z/20;
	this.proxy.translation.z = 0;
	this.initialize();
    }
};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubs2.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleC_bounce'] = new X3DJSON['Script']['Scene']['../data/bubs2.json']['DECLBubble_bubbleC_bounce']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubs2.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleC_bounce'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleC_bounce'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleC_bounce']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleC_bounce']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleC_bounce'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleC_bounce']['ACTION'],X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleC_bounce']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleC_bounce'].initialize === "function") X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleC_bounce'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/bubs2.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/bubs2.json'] = {};
}

X3DJSON['Script']['Scene']['../data/bubs2.json']['DECLBubble_bubbleD_bounce'] = function() {
	this.set_scale = function (value) {
		try {
			this.proxy.scale = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting scale '+e);
			console.error('Problems setting scale',e);
		}
	};
	this.scale_changed = function () {
		var value = this.scale;
		return value;
	};
	try {
		this.scale = new SFVec3f(1,1,1);
	} catch (e) {
		console.log('Problems setting scale '+e);
		console.error('Problems setting scale',e);
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
	this.set_scalvel = function (value) {
		try {
			this.proxy.scalvel = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting scalvel '+e);
			console.error('Problems setting scalvel',e);
		}
	};
	this.scalvel_changed = function () {
		var value = this.scalvel;
		return value;
	};
	try {
		this.scalvel = new SFVec3f(0,0,0);
	} catch (e) {
		console.log('Problems setting scalvel '+e);
		console.error('Problems setting scalvel',e);
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
	this.initialize = function () {
    this.proxy.velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);

    this.proxy.scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);
}
;

	this.set_fraction = function (value) {
    if (typeof this.proxy.translation === 'undefined') {
		this.proxy.translation = new SFVec3f(0, 0, 0);
    }
    if (typeof this.proxy.velocity === 'undefined') {
		this.proxy.velocity = new SFVec3f(0, 0, 0);
    }
    if (typeof this.proxy.scalvel === 'undefined') {
		this.proxy.scalvel = new SFVec3f(0, 0, 0);
    }
    if (typeof this.proxy.scale === 'undefined') {
		this.proxy.scale = new SFVec3f(1, 1, 1);
    }
    this.proxy.translation = new SFVec3f(	this.proxy.translation.x + this.proxy.velocity.x, this.proxy.translation.y + this.proxy.velocity.y, this.proxy.translation.z + this.proxy.velocity.z);
    this.proxy.scale = new SFVec3f(this.proxy.scale.x + this.proxy.scalvel.x, this.proxy.scale.y + this.proxy.scalvel.y, this.proxy.scale.z + this.proxy.scalvel.z);
    // if you get to far away or too big, explode
    if ( Math.abs(this.proxy.translation.x) > 256) {
	this.proxy.translation.x = 0;
	this.initialize();
    }
    if ( Math.abs(this.proxy.translation.y) > 256) {
	this.proxy.translation.y = 0;
	this.initialize();
    }
    if ( Math.abs(this.proxy.translation.z) > 256) {
	this.proxy.translation.z = 0;
	this.initialize();
    }
    if (Math.abs(this.proxy.scale.x) > 20) {
	this.proxy.scale.x = this.proxy.scale.x/20;
	this.proxy.translation.x = 0;
	this.initialize();
    }
    if (Math.abs(this.proxy.scale.y) > 20) {
	this.proxy.scale.y = this.proxy.scale.y/20;
	this.proxy.translation.y = 0;
	this.initialize();
    }
    if (Math.abs(this.proxy.scale.z) > 20) {
	this.proxy.scale.z = this.proxy.scale.z/20;
	this.proxy.translation.z = 0;
	this.initialize();
    }
};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubs2.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleD_bounce'] = new X3DJSON['Script']['Scene']['../data/bubs2.json']['DECLBubble_bubbleD_bounce']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubs2.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleD_bounce'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleD_bounce'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleD_bounce']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleD_bounce']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleD_bounce'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleD_bounce']['ACTION'],X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleD_bounce']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleD_bounce'].initialize === "function") X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleD_bounce'].initialize();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubs2.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleA_bounce'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleA_bounce'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleA_bounce']['ACTION']['translation'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleA_bounce']['ACTION']['translation'] = [];
}
X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleA_bounce']['ACTION']['translation'].push(function(property, value) {
		if (property === 'translation') {
			X3DJSON.nodeUtil('Scene','DECLBubble_bubbleA_body_trans','translation',typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleA_bounce'].translation_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleA_bounce'].translation_changed() : X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleA_bounce'].translation, __eventTime);
		}
});
			X3DJSON.nodeUtil('Scene','DECLBubble_bubbleA_body_trans','translation',typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleA_bounce'].translation_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleA_bounce'].translation_changed() : X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleA_bounce'].translation, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubs2.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleA_bounce'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleA_bounce'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleA_bounce']['ACTION']['scale'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleA_bounce']['ACTION']['scale'] = [];
}
X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleA_bounce']['ACTION']['scale'].push(function(property, value) {
		if (property === 'scale') {
			X3DJSON.nodeUtil('Scene','DECLBubble_bubbleA_body_trans','scale',typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleA_bounce'].scale_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleA_bounce'].scale_changed() : X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleA_bounce'].scale, __eventTime);
		}
});
			X3DJSON.nodeUtil('Scene','DECLBubble_bubbleA_body_trans','scale',typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleA_bounce'].scale_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleA_bounce'].scale_changed() : X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleA_bounce'].scale, __eventTime);
    if (X3DJSON.nodeUtil('Scene','DECLBubble_bubbleA_bubbleClock')) {
X3DJSON.nodeUtil('Scene','DECLBubble_bubbleA_bubbleClock').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleA_bounce'].set_fraction(X3DJSON.nodeUtil('Scene','DECLBubble_bubbleA_bubbleClock','fraction'), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleA_bounce'].set_fraction(X3DJSON.nodeUtil('Scene','DECLBubble_bubbleA_bubbleClock','fraction'), __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubs2.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleB_bounce'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleB_bounce'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleB_bounce']['ACTION']['translation'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleB_bounce']['ACTION']['translation'] = [];
}
X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleB_bounce']['ACTION']['translation'].push(function(property, value) {
		if (property === 'translation') {
			X3DJSON.nodeUtil('Scene','DECLBubble_bubbleB_body_trans','translation',typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleB_bounce'].translation_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleB_bounce'].translation_changed() : X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleB_bounce'].translation, __eventTime);
		}
});
			X3DJSON.nodeUtil('Scene','DECLBubble_bubbleB_body_trans','translation',typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleB_bounce'].translation_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleB_bounce'].translation_changed() : X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleB_bounce'].translation, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubs2.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleB_bounce'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleB_bounce'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleB_bounce']['ACTION']['scale'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleB_bounce']['ACTION']['scale'] = [];
}
X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleB_bounce']['ACTION']['scale'].push(function(property, value) {
		if (property === 'scale') {
			X3DJSON.nodeUtil('Scene','DECLBubble_bubbleB_body_trans','scale',typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleB_bounce'].scale_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleB_bounce'].scale_changed() : X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleB_bounce'].scale, __eventTime);
		}
});
			X3DJSON.nodeUtil('Scene','DECLBubble_bubbleB_body_trans','scale',typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleB_bounce'].scale_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleB_bounce'].scale_changed() : X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleB_bounce'].scale, __eventTime);
    if (X3DJSON.nodeUtil('Scene','DECLBubble_bubbleB_bubbleClock')) {
X3DJSON.nodeUtil('Scene','DECLBubble_bubbleB_bubbleClock').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleB_bounce'].set_fraction(X3DJSON.nodeUtil('Scene','DECLBubble_bubbleB_bubbleClock','fraction'), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleB_bounce'].set_fraction(X3DJSON.nodeUtil('Scene','DECLBubble_bubbleB_bubbleClock','fraction'), __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubs2.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleC_bounce'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleC_bounce'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleC_bounce']['ACTION']['translation'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleC_bounce']['ACTION']['translation'] = [];
}
X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleC_bounce']['ACTION']['translation'].push(function(property, value) {
		if (property === 'translation') {
			X3DJSON.nodeUtil('Scene','DECLBubble_bubbleC_body_trans','translation',typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleC_bounce'].translation_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleC_bounce'].translation_changed() : X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleC_bounce'].translation, __eventTime);
		}
});
			X3DJSON.nodeUtil('Scene','DECLBubble_bubbleC_body_trans','translation',typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleC_bounce'].translation_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleC_bounce'].translation_changed() : X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleC_bounce'].translation, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubs2.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleC_bounce'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleC_bounce'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleC_bounce']['ACTION']['scale'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleC_bounce']['ACTION']['scale'] = [];
}
X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleC_bounce']['ACTION']['scale'].push(function(property, value) {
		if (property === 'scale') {
			X3DJSON.nodeUtil('Scene','DECLBubble_bubbleC_body_trans','scale',typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleC_bounce'].scale_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleC_bounce'].scale_changed() : X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleC_bounce'].scale, __eventTime);
		}
});
			X3DJSON.nodeUtil('Scene','DECLBubble_bubbleC_body_trans','scale',typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleC_bounce'].scale_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleC_bounce'].scale_changed() : X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleC_bounce'].scale, __eventTime);
    if (X3DJSON.nodeUtil('Scene','DECLBubble_bubbleC_bubbleClock')) {
X3DJSON.nodeUtil('Scene','DECLBubble_bubbleC_bubbleClock').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleC_bounce'].set_fraction(X3DJSON.nodeUtil('Scene','DECLBubble_bubbleC_bubbleClock','fraction'), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleC_bounce'].set_fraction(X3DJSON.nodeUtil('Scene','DECLBubble_bubbleC_bubbleClock','fraction'), __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubs2.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleD_bounce'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleD_bounce'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleD_bounce']['ACTION']['translation'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleD_bounce']['ACTION']['translation'] = [];
}
X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleD_bounce']['ACTION']['translation'].push(function(property, value) {
		if (property === 'translation') {
			X3DJSON.nodeUtil('Scene','DECLBubble_bubbleD_body_trans','translation',typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleD_bounce'].translation_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleD_bounce'].translation_changed() : X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleD_bounce'].translation, __eventTime);
		}
});
			X3DJSON.nodeUtil('Scene','DECLBubble_bubbleD_body_trans','translation',typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleD_bounce'].translation_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleD_bounce'].translation_changed() : X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleD_bounce'].translation, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubs2.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleD_bounce'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleD_bounce'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleD_bounce']['ACTION']['scale'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleD_bounce']['ACTION']['scale'] = [];
}
X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleD_bounce']['ACTION']['scale'].push(function(property, value) {
		if (property === 'scale') {
			X3DJSON.nodeUtil('Scene','DECLBubble_bubbleD_body_trans','scale',typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleD_bounce'].scale_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleD_bounce'].scale_changed() : X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleD_bounce'].scale, __eventTime);
		}
});
			X3DJSON.nodeUtil('Scene','DECLBubble_bubbleD_body_trans','scale',typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleD_bounce'].scale_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleD_bounce'].scale_changed() : X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleD_bounce'].scale, __eventTime);
    if (X3DJSON.nodeUtil('Scene','DECLBubble_bubbleD_bubbleClock')) {
X3DJSON.nodeUtil('Scene','DECLBubble_bubbleD_bubbleClock').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleD_bounce'].set_fraction(X3DJSON.nodeUtil('Scene','DECLBubble_bubbleD_bubbleClock','fraction'), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleD_bounce'].set_fraction(X3DJSON.nodeUtil('Scene','DECLBubble_bubbleD_bubbleClock','fraction'), __eventTime);
			X3DJSON.nodeUtil('Scene','DECLBubble_bubbleA_body_trans','translation',typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleA_bounce'].translation_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleA_bounce'].translation_changed() : X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleA_bounce'].translation, __eventTime);
			X3DJSON.nodeUtil('Scene','DECLBubble_bubbleA_body_trans','scale',typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleA_bounce'].scale_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleA_bounce'].scale_changed() : X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleA_bounce'].scale, __eventTime);
			X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleA_bounce'].set_fraction(X3DJSON.nodeUtil('Scene','DECLBubble_bubbleA_bubbleClock','fraction'), __eventTime);
			X3DJSON.nodeUtil('Scene','DECLBubble_bubbleB_body_trans','translation',typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleB_bounce'].translation_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleB_bounce'].translation_changed() : X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleB_bounce'].translation, __eventTime);
			X3DJSON.nodeUtil('Scene','DECLBubble_bubbleB_body_trans','scale',typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleB_bounce'].scale_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleB_bounce'].scale_changed() : X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleB_bounce'].scale, __eventTime);
			X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleB_bounce'].set_fraction(X3DJSON.nodeUtil('Scene','DECLBubble_bubbleB_bubbleClock','fraction'), __eventTime);
			X3DJSON.nodeUtil('Scene','DECLBubble_bubbleC_body_trans','translation',typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleC_bounce'].translation_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleC_bounce'].translation_changed() : X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleC_bounce'].translation, __eventTime);
			X3DJSON.nodeUtil('Scene','DECLBubble_bubbleC_body_trans','scale',typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleC_bounce'].scale_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleC_bounce'].scale_changed() : X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleC_bounce'].scale, __eventTime);
			X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleC_bounce'].set_fraction(X3DJSON.nodeUtil('Scene','DECLBubble_bubbleC_bubbleClock','fraction'), __eventTime);
			X3DJSON.nodeUtil('Scene','DECLBubble_bubbleD_body_trans','translation',typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleD_bounce'].translation_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleD_bounce'].translation_changed() : X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleD_bounce'].translation, __eventTime);
			X3DJSON.nodeUtil('Scene','DECLBubble_bubbleD_body_trans','scale',typeof X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleD_bounce'].scale_changed === "function" ? X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleD_bounce'].scale_changed() : X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleD_bounce'].scale, __eventTime);
			X3DJSON['Obj']['Scene']['../data/bubs2.json']['DECLBubble_bubbleD_bounce'].set_fraction(X3DJSON.nodeUtil('Scene','DECLBubble_bubbleD_bubbleClock','fraction'), __eventTime);