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
if (typeof X3DJSON['Scene../data/mirror.json'] === 'undefined') {
	X3DJSON['Scene../data/mirror.json'] = {};
}

if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/mirror.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/mirror.json'] = {};
}

X3DJSON['Script']['Scene']['../data/mirror.json']['UrlSelector'] = function() {
	this.set_frontUrls = function (value) {
		try {
			this.proxy.frontUrls = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting frontUrls '+e);
			console.error('Problems setting frontUrls',e);
		}
	};
	this.frontUrls_changed = function () {
		var value = this.frontUrls;
		return value;
	};
	try {
		this.frontUrls = new MFString("../resources/images/all_probes/beach_cross/beach_front.png","../resources/images/all_probes/building_cross/building_front.png","../resources/images/all_probes/campus_cross/campus_front.png","../resources/images/all_probes/galileo_cross/galileo_front.png","../resources/images/all_probes/grace_cross/grace_front.png","../resources/images/all_probes/kitchen_cross/kitchen_front.png","../resources/images/all_probes/rnl_cross/rnl_front.png","../resources/images/all_probes/stpeters_cross/stpeters_front.png","../resources/images/all_probes/uffizi_cross/uffizi_front.png");
	} catch (e) {
		console.log('Problems setting frontUrls '+e);
		console.error('Problems setting frontUrls',e);
	}
	this.set_backUrls = function (value) {
		try {
			this.proxy.backUrls = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting backUrls '+e);
			console.error('Problems setting backUrls',e);
		}
	};
	this.backUrls_changed = function () {
		var value = this.backUrls;
		return value;
	};
	try {
		this.backUrls = new MFString("../resources/images/all_probes/beach_cross/beach_back.png","../resources/images/all_probes/building_cross/building_back.png","../resources/images/all_probes/campus_cross/campus_back.png","../resources/images/all_probes/galileo_cross/galileo_back.png","../resources/images/all_probes/grace_cross/grace_back.png","../resources/images/all_probes/kitchen_cross/kitchen_back.png","../resources/images/all_probes/rnl_cross/rnl_back.png","../resources/images/all_probes/stpeters_cross/stpeters_back.png","../resources/images/all_probes/uffizi_cross/uffizi_back.png");
	} catch (e) {
		console.log('Problems setting backUrls '+e);
		console.error('Problems setting backUrls',e);
	}
	this.set_leftUrls = function (value) {
		try {
			this.proxy.leftUrls = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting leftUrls '+e);
			console.error('Problems setting leftUrls',e);
		}
	};
	this.leftUrls_changed = function () {
		var value = this.leftUrls;
		return value;
	};
	try {
		this.leftUrls = new MFString("../resources/images/all_probes/beach_cross/beach_left.png","../resources/images/all_probes/building_cross/building_left.png","../resources/images/all_probes/campus_cross/campus_left.png","../resources/images/all_probes/galileo_cross/galileo_left.png","../resources/images/all_probes/grace_cross/grace_left.png","../resources/images/all_probes/kitchen_cross/kitchen_left.png","../resources/images/all_probes/rnl_cross/rnl_left.png","../resources/images/all_probes/stpeters_cross/stpeters_left.png","../resources/images/all_probes/uffizi_cross/uffizi_left.png");
	} catch (e) {
		console.log('Problems setting leftUrls '+e);
		console.error('Problems setting leftUrls',e);
	}
	this.set_rightUrls = function (value) {
		try {
			this.proxy.rightUrls = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting rightUrls '+e);
			console.error('Problems setting rightUrls',e);
		}
	};
	this.rightUrls_changed = function () {
		var value = this.rightUrls;
		return value;
	};
	try {
		this.rightUrls = new MFString("../resources/images/all_probes/beach_cross/beach_right.png","../resources/images/all_probes/building_cross/building_right.png","../resources/images/all_probes/campus_cross/campus_right.png","../resources/images/all_probes/galileo_cross/galileo_right.png","../resources/images/all_probes/grace_cross/grace_right.png","../resources/images/all_probes/kitchen_cross/kitchen_right.png","../resources/images/all_probes/rnl_cross/rnl_right.png","../resources/images/all_probes/stpeters_cross/stpeters_right.png","../resources/images/all_probes/uffizi_cross/uffizi_right.png");
	} catch (e) {
		console.log('Problems setting rightUrls '+e);
		console.error('Problems setting rightUrls',e);
	}
	this.set_topUrls = function (value) {
		try {
			this.proxy.topUrls = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting topUrls '+e);
			console.error('Problems setting topUrls',e);
		}
	};
	this.topUrls_changed = function () {
		var value = this.topUrls;
		return value;
	};
	try {
		this.topUrls = new MFString("../resources/images/all_probes/beach_cross/beach_top.png","../resources/images/all_probes/building_cross/building_top.png","../resources/images/all_probes/campus_cross/campus_top.png","../resources/images/all_probes/galileo_cross/galileo_top.png","../resources/images/all_probes/grace_cross/grace_top.png","../resources/images/all_probes/kitchen_cross/kitchen_top.png","../resources/images/all_probes/rnl_cross/rnl_top.png","../resources/images/all_probes/stpeters_cross/stpeters_top.png","../resources/images/all_probes/uffizi_cross/uffizi_top.png");
	} catch (e) {
		console.log('Problems setting topUrls '+e);
		console.error('Problems setting topUrls',e);
	}
	this.set_bottomUrls = function (value) {
		try {
			this.proxy.bottomUrls = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting bottomUrls '+e);
			console.error('Problems setting bottomUrls',e);
		}
	};
	this.bottomUrls_changed = function () {
		var value = this.bottomUrls;
		return value;
	};
	try {
		this.bottomUrls = new MFString("../resources/images/all_probes/beach_cross/beach_bottom.png","../resources/images/all_probes/building_cross/building_bottom.png","../resources/images/all_probes/campus_cross/campus_bottom.png","../resources/images/all_probes/galileo_cross/galileo_bottom.png","../resources/images/all_probes/grace_cross/grace_bottom.png","../resources/images/all_probes/kitchen_cross/kitchen_bottom.png","../resources/images/all_probes/rnl_cross/rnl_bottom.png","../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","../resources/images/all_probes/uffizi_cross/uffizi_bottom.png");
	} catch (e) {
		console.log('Problems setting bottomUrls '+e);
		console.error('Problems setting bottomUrls',e);
	}
	this.set_front = function (value) {
		try {
			this.proxy.front = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting front '+e);
			console.error('Problems setting front',e);
		}
	};
	this.front_changed = function () {
		var value = this.front;
		return value;
	};
	try {
		this.front = undefined;
	} catch (e) {
		console.log('Problems setting front '+e);
		console.error('Problems setting front',e);
	}
	this.set_back = function (value) {
		try {
			this.proxy.back = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting back '+e);
			console.error('Problems setting back',e);
		}
	};
	this.back_changed = function () {
		var value = this.back;
		return value;
	};
	try {
		this.back = undefined;
	} catch (e) {
		console.log('Problems setting back '+e);
		console.error('Problems setting back',e);
	}
	this.set_left = function (value) {
		try {
			this.proxy.left = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting left '+e);
			console.error('Problems setting left',e);
		}
	};
	this.left_changed = function () {
		var value = this.left;
		return value;
	};
	try {
		this.left = undefined;
	} catch (e) {
		console.log('Problems setting left '+e);
		console.error('Problems setting left',e);
	}
	this.set_right = function (value) {
		try {
			this.proxy.right = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting right '+e);
			console.error('Problems setting right',e);
		}
	};
	this.right_changed = function () {
		var value = this.right;
		return value;
	};
	try {
		this.right = undefined;
	} catch (e) {
		console.log('Problems setting right '+e);
		console.error('Problems setting right',e);
	}
	this.set_top = function (value) {
		try {
			this.proxy.top = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting top '+e);
			console.error('Problems setting top',e);
		}
	};
	this.top_changed = function () {
		var value = this.top;
		return value;
	};
	try {
		this.top = undefined;
	} catch (e) {
		console.log('Problems setting top '+e);
		console.error('Problems setting top',e);
	}
	this.set_bottom = function (value) {
		try {
			this.proxy.bottom = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting bottom '+e);
			console.error('Problems setting bottom',e);
		}
	};
	this.bottom_changed = function () {
		var value = this.bottom;
		return value;
	};
	try {
		this.bottom = undefined;
	} catch (e) {
		console.log('Problems setting bottom '+e);
		console.error('Problems setting bottom',e);
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
		this.old = new SFInt32(-1);
	} catch (e) {
		console.log('Problems setting old '+e);
		console.error('Problems setting old',e);
	}


ecmascript:
       
	this.set_fraction = function ( f, tm ) {
	    var side = Math.floor(f*this.proxy.frontUrls.length);
	    if (side > this.proxy.frontUrls.length-1) {
	    	side = 0;
	    }
	    if (side != this.proxy.old) {
	    	    console.error(f+" "+side);
	    	    this.proxy.old = side;
		    this.proxy.front_changed[0] = this.proxy.frontUrls[side];
		    this.proxy.back_changed[0] = this.proxy.backUrls[side];
		    this.proxy.left_changed[0] = this.proxy.leftUrls[side];
		    this.proxy.right_changed[0] = this.proxy.rightUrls[side];
		    this.proxy.top_changed[0] = this.proxy.topUrls[side];
		    this.proxy.bottom_changed[0] = this.proxy.bottomUrls[side];
            }
        }

;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/mirror.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/mirror.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'] = new X3DJSON['Script']['Scene']['../data/mirror.json']['UrlSelector']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/mirror.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/mirror.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector']['ACTION'],X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].initialize === "function") X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].initialize();
    if (X3DJSON.nodeUtil('Scene','Clock')) {
X3DJSON.nodeUtil('Scene','Clock').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].set_fraction(X3DJSON.nodeUtil('Scene','Clock','fraction'), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].set_fraction(X3DJSON.nodeUtil('Scene','Clock','fraction'), __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/mirror.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/mirror.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector']['ACTION']['front'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector']['ACTION']['front'] = [];
}
X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector']['ACTION']['front'].push(function(property, value) {
		if (property === 'front') {
			X3DJSON.nodeUtil('Scene','frontBackTexture','url',typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].front_changed === "function" ? X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].front_changed() : X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].front, __eventTime);
		}
});
			X3DJSON.nodeUtil('Scene','frontBackTexture','url',typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].front_changed === "function" ? X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].front_changed() : X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].front, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/mirror.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/mirror.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector']['ACTION']['back'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector']['ACTION']['back'] = [];
}
X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector']['ACTION']['back'].push(function(property, value) {
		if (property === 'back') {
			X3DJSON.nodeUtil('Scene','backBackTexture','url',typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].back_changed === "function" ? X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].back_changed() : X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].back, __eventTime);
		}
});
			X3DJSON.nodeUtil('Scene','backBackTexture','url',typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].back_changed === "function" ? X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].back_changed() : X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].back, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/mirror.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/mirror.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector']['ACTION']['left'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector']['ACTION']['left'] = [];
}
X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector']['ACTION']['left'].push(function(property, value) {
		if (property === 'left') {
			X3DJSON.nodeUtil('Scene','leftBackTexture','url',typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].left_changed === "function" ? X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].left_changed() : X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].left, __eventTime);
		}
});
			X3DJSON.nodeUtil('Scene','leftBackTexture','url',typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].left_changed === "function" ? X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].left_changed() : X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].left, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/mirror.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/mirror.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector']['ACTION']['right'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector']['ACTION']['right'] = [];
}
X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector']['ACTION']['right'].push(function(property, value) {
		if (property === 'right') {
			X3DJSON.nodeUtil('Scene','rightBackTexture','url',typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].right_changed === "function" ? X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].right_changed() : X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].right, __eventTime);
		}
});
			X3DJSON.nodeUtil('Scene','rightBackTexture','url',typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].right_changed === "function" ? X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].right_changed() : X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].right, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/mirror.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/mirror.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector']['ACTION']['top'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector']['ACTION']['top'] = [];
}
X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector']['ACTION']['top'].push(function(property, value) {
		if (property === 'top') {
			X3DJSON.nodeUtil('Scene','topBackTexture','url',typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].top_changed === "function" ? X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].top_changed() : X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].top, __eventTime);
		}
});
			X3DJSON.nodeUtil('Scene','topBackTexture','url',typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].top_changed === "function" ? X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].top_changed() : X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].top, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/mirror.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/mirror.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector']['ACTION']['bottom'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector']['ACTION']['bottom'] = [];
}
X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector']['ACTION']['bottom'].push(function(property, value) {
		if (property === 'bottom') {
			X3DJSON.nodeUtil('Scene','bottomBackTexture','url',typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].bottom_changed === "function" ? X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].bottom_changed() : X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].bottom, __eventTime);
		}
});
			X3DJSON.nodeUtil('Scene','bottomBackTexture','url',typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].bottom_changed === "function" ? X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].bottom_changed() : X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].bottom, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/mirror.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/mirror.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector']['ACTION']['front'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector']['ACTION']['front'] = [];
}
X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector']['ACTION']['front'].push(function(property, value) {
		if (property === 'front') {
			X3DJSON.nodeUtil('Scene','frontShader','url',typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].front_changed === "function" ? X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].front_changed() : X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].front, __eventTime);
		}
});
			X3DJSON.nodeUtil('Scene','frontShader','url',typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].front_changed === "function" ? X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].front_changed() : X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].front, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/mirror.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/mirror.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector']['ACTION']['back'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector']['ACTION']['back'] = [];
}
X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector']['ACTION']['back'].push(function(property, value) {
		if (property === 'back') {
			X3DJSON.nodeUtil('Scene','backShader','url',typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].back_changed === "function" ? X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].back_changed() : X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].back, __eventTime);
		}
});
			X3DJSON.nodeUtil('Scene','backShader','url',typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].back_changed === "function" ? X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].back_changed() : X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].back, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/mirror.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/mirror.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector']['ACTION']['left'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector']['ACTION']['left'] = [];
}
X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector']['ACTION']['left'].push(function(property, value) {
		if (property === 'left') {
			X3DJSON.nodeUtil('Scene','leftShader','url',typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].left_changed === "function" ? X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].left_changed() : X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].left, __eventTime);
		}
});
			X3DJSON.nodeUtil('Scene','leftShader','url',typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].left_changed === "function" ? X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].left_changed() : X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].left, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/mirror.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/mirror.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector']['ACTION']['right'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector']['ACTION']['right'] = [];
}
X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector']['ACTION']['right'].push(function(property, value) {
		if (property === 'right') {
			X3DJSON.nodeUtil('Scene','rightShader','url',typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].right_changed === "function" ? X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].right_changed() : X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].right, __eventTime);
		}
});
			X3DJSON.nodeUtil('Scene','rightShader','url',typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].right_changed === "function" ? X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].right_changed() : X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].right, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/mirror.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/mirror.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector']['ACTION']['top'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector']['ACTION']['top'] = [];
}
X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector']['ACTION']['top'].push(function(property, value) {
		if (property === 'top') {
			X3DJSON.nodeUtil('Scene','topShader','url',typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].top_changed === "function" ? X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].top_changed() : X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].top, __eventTime);
		}
});
			X3DJSON.nodeUtil('Scene','topShader','url',typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].top_changed === "function" ? X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].top_changed() : X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].top, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/mirror.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/mirror.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector']['ACTION']['bottom'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector']['ACTION']['bottom'] = [];
}
X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector']['ACTION']['bottom'].push(function(property, value) {
		if (property === 'bottom') {
			X3DJSON.nodeUtil('Scene','bottomShader','url',typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].bottom_changed === "function" ? X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].bottom_changed() : X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].bottom, __eventTime);
		}
});
			X3DJSON.nodeUtil('Scene','bottomShader','url',typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].bottom_changed === "function" ? X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].bottom_changed() : X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].bottom, __eventTime);
			X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].set_fraction(X3DJSON.nodeUtil('Scene','Clock','fraction'), __eventTime);
			X3DJSON.nodeUtil('Scene','frontBackTexture','url',typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].front_changed === "function" ? X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].front_changed() : X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].front, __eventTime);
			X3DJSON.nodeUtil('Scene','backBackTexture','url',typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].back_changed === "function" ? X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].back_changed() : X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].back, __eventTime);
			X3DJSON.nodeUtil('Scene','leftBackTexture','url',typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].left_changed === "function" ? X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].left_changed() : X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].left, __eventTime);
			X3DJSON.nodeUtil('Scene','rightBackTexture','url',typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].right_changed === "function" ? X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].right_changed() : X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].right, __eventTime);
			X3DJSON.nodeUtil('Scene','topBackTexture','url',typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].top_changed === "function" ? X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].top_changed() : X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].top, __eventTime);
			X3DJSON.nodeUtil('Scene','bottomBackTexture','url',typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].bottom_changed === "function" ? X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].bottom_changed() : X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].bottom, __eventTime);
			X3DJSON.nodeUtil('Scene','frontShader','url',typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].front_changed === "function" ? X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].front_changed() : X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].front, __eventTime);
			X3DJSON.nodeUtil('Scene','backShader','url',typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].back_changed === "function" ? X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].back_changed() : X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].back, __eventTime);
			X3DJSON.nodeUtil('Scene','leftShader','url',typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].left_changed === "function" ? X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].left_changed() : X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].left, __eventTime);
			X3DJSON.nodeUtil('Scene','rightShader','url',typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].right_changed === "function" ? X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].right_changed() : X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].right, __eventTime);
			X3DJSON.nodeUtil('Scene','topShader','url',typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].top_changed === "function" ? X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].top_changed() : X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].top, __eventTime);
			X3DJSON.nodeUtil('Scene','bottomShader','url',typeof X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].bottom_changed === "function" ? X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].bottom_changed() : X3DJSON['Obj']['Scene']['../data/mirror.json']['UrlSelector'].bottom, __eventTime);