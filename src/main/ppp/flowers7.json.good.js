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
if (typeof X3DJSON['Scene../data/flowers7.json'] === 'undefined') {
	X3DJSON['Scene../data/flowers7.json'] = {};
}

if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/flowers7.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/flowers7.json'] = {};
}

X3DJSON['Script']['Scene']['../data/flowers7.json']['UrlSelector'] = function() {
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
		this.frontUrls = new MFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_front.png");
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
		this.backUrls = new MFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_back.png");
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
		this.leftUrls = new MFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_left.png");
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
		this.rightUrls = new MFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_right.png");
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
		this.topUrls = new MFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_top.png");
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
		this.bottomUrls = new MFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_bottom.png");
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
		this.front = new MFString();
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
		this.back = new MFString();
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
		this.left = new MFString();
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
		this.right = new MFString();
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
		this.top = new MFString();
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
		this.bottom = new MFString();
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
                    this.proxy.old = side;
                    this.proxy.front[0] = this.proxy.frontUrls[side];
                    this.proxy.back[0] = this.proxy.backUrls[side];
                    this.proxy.left[0] = this.proxy.leftUrls[side];
                    this.proxy.right[0] = this.proxy.rightUrls[side];
                    this.proxy.top[0] = this.proxy.topUrls[side];
                    this.proxy.bottom[0] = this.proxy.bottomUrls[side];
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
if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/flowers7.json']['UrlSelector'] = new X3DJSON['Script']['Scene']['../data/flowers7.json']['UrlSelector']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['UrlSelector'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json']['UrlSelector'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['UrlSelector']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json']['UrlSelector']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/flowers7.json']['UrlSelector'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/flowers7.json']['UrlSelector']['ACTION'],X3DJSON['Obj']['Scene']['../data/flowers7.json']['UrlSelector']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['UrlSelector'].initialize === "function") X3DJSON['Obj']['Scene']['../data/flowers7.json']['UrlSelector'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/flowers7.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/flowers7.json'] = {};
}

X3DJSON['Script']['Scene']['../data/flowers7.json']['Animate'] = function() {
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
	this.set_a = function (value) {
		try {
			this.proxy.a = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting a '+e);
			console.error('Problems setting a',e);
		}
	};
	this.a_changed = function () {
		var value = this.a;
		return value;
	};
	try {
		this.a = new SFFloat(10);
	} catch (e) {
		console.log('Problems setting a '+e);
		console.error('Problems setting a',e);
	}
	this.set_b = function (value) {
		try {
			this.proxy.b = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting b '+e);
			console.error('Problems setting b',e);
		}
	};
	this.b_changed = function () {
		var value = this.b;
		return value;
	};
	try {
		this.b = new SFFloat(1);
	} catch (e) {
		console.log('Problems setting b '+e);
		console.error('Problems setting b',e);
	}
	this.set_c = function (value) {
		try {
			this.proxy.c = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting c '+e);
			console.error('Problems setting c',e);
		}
	};
	this.c_changed = function () {
		var value = this.c;
		return value;
	};
	try {
		this.c = new SFFloat(20);
	} catch (e) {
		console.log('Problems setting c '+e);
		console.error('Problems setting c',e);
	}
	this.set_d = function (value) {
		try {
			this.proxy.d = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting d '+e);
			console.error('Problems setting d',e);
		}
	};
	this.d_changed = function () {
		var value = this.d;
		return value;
	};
	try {
		this.d = new SFFloat(20);
	} catch (e) {
		console.log('Problems setting d '+e);
		console.error('Problems setting d',e);
	}
	this.set_tdelta = function (value) {
		try {
			this.proxy.tdelta = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting tdelta '+e);
			console.error('Problems setting tdelta',e);
		}
	};
	this.tdelta_changed = function () {
		var value = this.tdelta;
		return value;
	};
	try {
		this.tdelta = new SFFloat(0);
	} catch (e) {
		console.log('Problems setting tdelta '+e);
		console.error('Problems setting tdelta',e);
	}
	this.set_pdelta = function (value) {
		try {
			this.proxy.pdelta = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting pdelta '+e);
			console.error('Problems setting pdelta',e);
		}
	};
	this.pdelta_changed = function () {
		var value = this.pdelta;
		return value;
	};
	try {
		this.pdelta = new SFFloat(0);
	} catch (e) {
		console.log('Problems setting pdelta '+e);
		console.error('Problems setting pdelta',e);
	}


ecmascript:

	this.set_fraction = function () {
	var choice = Math.floor(Math.random() * 4);
	switch (choice) {
	case 0:
		this.proxy.a = this.proxy.a + Math.floor(Math.random() * 2) * 2 - 1;
		break;
	case 1:
		this.proxy.b = this.proxy.b + Math.floor(Math.random() * 2) * 2 - 1;
		break;
	case 2:
		this.proxy.c = this.proxy.c + Math.floor(Math.random() * 2) * 2 - 1;
		break;
	case 3:
		this.proxy.d = this.proxy.d + Math.floor(Math.random() * 2) * 2 - 1;
		break;
	}
	this.proxy.tdelta = this.proxy.tdelta + 0.5;
	this.proxy.pdelta = this.proxy.pdelta + 0.5;
	if (this.proxy.a < 1) {
		this.proxy.a = 10;
	}
	if (this.proxy.b < 1) {
		this.proxy.b = 10;
	}
	if (this.proxy.c < 1) {
		this.proxy.c = 4;
	}
	if (this.proxy.c > 20) {
		this.proxy.c = 4;
	}
	if (this.proxy.d < 1) {
		this.proxy.d = 4;
	}
	if (this.proxy.d > 20) {
		this.proxy.d = 4;
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
if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'] = new X3DJSON['Script']['Scene']['../data/flowers7.json']['Animate']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate']['ACTION'],X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].initialize === "function") X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].initialize();
    if (X3DJSON.nodeUtil("Scene","TourTime")) {
X3DJSON.nodeUtil("Scene","TourTime").addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].set_fraction(X3DJSON.nodeUtil("Scene","TourTime","fraction"), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].set_fraction(X3DJSON.nodeUtil("Scene","TourTime","fraction"), __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate']['ACTION']['a'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate']['ACTION']['a'] = [];
}
X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate']['ACTION']['a'].push(function(property, value) {
		if (property === 'a') {
			X3DJSON.nodeUtil("Scene","x_ite","a",typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].a === "function" ? X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].a() : X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].a, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","x_ite","a",typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].a === "function" ? X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].a() : X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].a, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate']['ACTION']['b'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate']['ACTION']['b'] = [];
}
X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate']['ACTION']['b'].push(function(property, value) {
		if (property === 'b') {
			X3DJSON.nodeUtil("Scene","x_ite","b",typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].b === "function" ? X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].b() : X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].b, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","x_ite","b",typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].b === "function" ? X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].b() : X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].b, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate']['ACTION']['c'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate']['ACTION']['c'] = [];
}
X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate']['ACTION']['c'].push(function(property, value) {
		if (property === 'c') {
			X3DJSON.nodeUtil("Scene","x_ite","c",typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].c === "function" ? X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].c() : X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].c, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","x_ite","c",typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].c === "function" ? X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].c() : X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].c, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate']['ACTION']['d'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate']['ACTION']['d'] = [];
}
X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate']['ACTION']['d'].push(function(property, value) {
		if (property === 'd') {
			X3DJSON.nodeUtil("Scene","x_ite","d",typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].d === "function" ? X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].d() : X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].d, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","x_ite","d",typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].d === "function" ? X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].d() : X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].d, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate']['ACTION']['pdelta'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate']['ACTION']['pdelta'] = [];
}
X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate']['ACTION']['pdelta'].push(function(property, value) {
		if (property === 'pdelta') {
			X3DJSON.nodeUtil("Scene","x_ite","pdelta",typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].pdelta === "function" ? X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].pdelta() : X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].pdelta, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","x_ite","pdelta",typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].pdelta === "function" ? X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].pdelta() : X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].pdelta, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate']['ACTION']['tdelta'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate']['ACTION']['tdelta'] = [];
}
X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate']['ACTION']['tdelta'].push(function(property, value) {
		if (property === 'tdelta') {
			X3DJSON.nodeUtil("Scene","x_ite","tdelta",typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].tdelta === "function" ? X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].tdelta() : X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].tdelta, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","x_ite","tdelta",typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].tdelta === "function" ? X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].tdelta() : X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].tdelta, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate']['ACTION']['a'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate']['ACTION']['a'] = [];
}
X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate']['ACTION']['a'].push(function(property, value) {
		if (property === 'a') {
			X3DJSON.nodeUtil("Scene","x3dom","a",typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].a === "function" ? X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].a() : X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].a, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","x3dom","a",typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].a === "function" ? X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].a() : X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].a, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate']['ACTION']['b'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate']['ACTION']['b'] = [];
}
X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate']['ACTION']['b'].push(function(property, value) {
		if (property === 'b') {
			X3DJSON.nodeUtil("Scene","x3dom","b",typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].b === "function" ? X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].b() : X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].b, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","x3dom","b",typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].b === "function" ? X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].b() : X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].b, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate']['ACTION']['c'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate']['ACTION']['c'] = [];
}
X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate']['ACTION']['c'].push(function(property, value) {
		if (property === 'c') {
			X3DJSON.nodeUtil("Scene","x3dom","c",typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].c === "function" ? X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].c() : X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].c, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","x3dom","c",typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].c === "function" ? X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].c() : X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].c, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate']['ACTION']['d'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate']['ACTION']['d'] = [];
}
X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate']['ACTION']['d'].push(function(property, value) {
		if (property === 'd') {
			X3DJSON.nodeUtil("Scene","x3dom","d",typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].d === "function" ? X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].d() : X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].d, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","x3dom","d",typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].d === "function" ? X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].d() : X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].d, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate']['ACTION']['pdelta'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate']['ACTION']['pdelta'] = [];
}
X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate']['ACTION']['pdelta'].push(function(property, value) {
		if (property === 'pdelta') {
			X3DJSON.nodeUtil("Scene","x3dom","pdelta",typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].pdelta === "function" ? X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].pdelta() : X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].pdelta, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","x3dom","pdelta",typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].pdelta === "function" ? X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].pdelta() : X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].pdelta, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate']['ACTION']['tdelta'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate']['ACTION']['tdelta'] = [];
}
X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate']['ACTION']['tdelta'].push(function(property, value) {
		if (property === 'tdelta') {
			X3DJSON.nodeUtil("Scene","x3dom","tdelta",typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].tdelta === "function" ? X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].tdelta() : X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].tdelta, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","x3dom","tdelta",typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].tdelta === "function" ? X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].tdelta() : X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].tdelta, __eventTime);
			X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].set_fraction(X3DJSON.nodeUtil("Scene","TourTime","fraction"), __eventTime);
			X3DJSON.nodeUtil("Scene","x_ite","a",typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].a === "function" ? X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].a() : X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].a, __eventTime);
			X3DJSON.nodeUtil("Scene","x_ite","b",typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].b === "function" ? X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].b() : X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].b, __eventTime);
			X3DJSON.nodeUtil("Scene","x_ite","c",typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].c === "function" ? X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].c() : X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].c, __eventTime);
			X3DJSON.nodeUtil("Scene","x_ite","d",typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].d === "function" ? X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].d() : X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].d, __eventTime);
			X3DJSON.nodeUtil("Scene","x_ite","pdelta",typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].pdelta === "function" ? X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].pdelta() : X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].pdelta, __eventTime);
			X3DJSON.nodeUtil("Scene","x_ite","tdelta",typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].tdelta === "function" ? X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].tdelta() : X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].tdelta, __eventTime);
			X3DJSON.nodeUtil("Scene","x3dom","a",typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].a === "function" ? X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].a() : X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].a, __eventTime);
			X3DJSON.nodeUtil("Scene","x3dom","b",typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].b === "function" ? X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].b() : X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].b, __eventTime);
			X3DJSON.nodeUtil("Scene","x3dom","c",typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].c === "function" ? X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].c() : X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].c, __eventTime);
			X3DJSON.nodeUtil("Scene","x3dom","d",typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].d === "function" ? X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].d() : X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].d, __eventTime);
			X3DJSON.nodeUtil("Scene","x3dom","pdelta",typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].pdelta === "function" ? X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].pdelta() : X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].pdelta, __eventTime);
			X3DJSON.nodeUtil("Scene","x3dom","tdelta",typeof X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].tdelta === "function" ? X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].tdelta() : X3DJSON['Obj']['Scene']['../data/flowers7.json']['Animate'].tdelta, __eventTime);