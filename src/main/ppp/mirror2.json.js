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

X3DJSON['Script']['UrlSelector'] = function() {
	this.set_frontUrls = function (value) {
		this.proxy.frontUrls = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.frontUrls_changed = function () {
		var value = this.frontUrls;
		return value;
	};
	this.frontUrls = new MFString("../resources/images/all_probes/beach_cross/beach_front.png","../resources/images/all_probes/building_cross/building_front.png","../resources/images/all_probes/campus_cross/campus_front.png","../resources/images/all_probes/galileo_cross/galileo_front.png","../resources/images/all_probes/grace_cross/grace_front.png","../resources/images/all_probes/kitchen_cross/kitchen_front.png","../resources/images/all_probes/rnl_cross/rnl_front.png","../resources/images/all_probes/stpeters_cross/stpeters_front.png","../resources/images/all_probes/uffizi_cross/uffizi_front.png");
	this.set_backUrls = function (value) {
		this.proxy.backUrls = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.backUrls_changed = function () {
		var value = this.backUrls;
		return value;
	};
	this.backUrls = new MFString("../resources/images/all_probes/beach_cross/beach_back.png","../resources/images/all_probes/building_cross/building_back.png","../resources/images/all_probes/campus_cross/campus_back.png","../resources/images/all_probes/galileo_cross/galileo_back.png","../resources/images/all_probes/grace_cross/grace_back.png","../resources/images/all_probes/kitchen_cross/kitchen_back.png","../resources/images/all_probes/rnl_cross/rnl_back.png","../resources/images/all_probes/stpeters_cross/stpeters_back.png","../resources/images/all_probes/uffizi_cross/uffizi_back.png");
	this.set_leftUrls = function (value) {
		this.proxy.leftUrls = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.leftUrls_changed = function () {
		var value = this.leftUrls;
		return value;
	};
	this.leftUrls = new MFString("../resources/images/all_probes/beach_cross/beach_left.png","../resources/images/all_probes/building_cross/building_left.png","../resources/images/all_probes/campus_cross/campus_left.png","../resources/images/all_probes/galileo_cross/galileo_left.png","../resources/images/all_probes/grace_cross/grace_left.png","../resources/images/all_probes/kitchen_cross/kitchen_left.png","../resources/images/all_probes/rnl_cross/rnl_left.png","../resources/images/all_probes/stpeters_cross/stpeters_left.png","../resources/images/all_probes/uffizi_cross/uffizi_left.png");
	this.set_rightUrls = function (value) {
		this.proxy.rightUrls = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.rightUrls_changed = function () {
		var value = this.rightUrls;
		return value;
	};
	this.rightUrls = new MFString("../resources/images/all_probes/beach_cross/beach_right.png","../resources/images/all_probes/building_cross/building_right.png","../resources/images/all_probes/campus_cross/campus_right.png","../resources/images/all_probes/galileo_cross/galileo_right.png","../resources/images/all_probes/grace_cross/grace_right.png","../resources/images/all_probes/kitchen_cross/kitchen_right.png","../resources/images/all_probes/rnl_cross/rnl_right.png","../resources/images/all_probes/stpeters_cross/stpeters_right.png","../resources/images/all_probes/uffizi_cross/uffizi_right.png");
	this.set_topUrls = function (value) {
		this.proxy.topUrls = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.topUrls_changed = function () {
		var value = this.topUrls;
		return value;
	};
	this.topUrls = new MFString("../resources/images/all_probes/beach_cross/beach_top.png","../resources/images/all_probes/building_cross/building_top.png","../resources/images/all_probes/campus_cross/campus_top.png","../resources/images/all_probes/galileo_cross/galileo_top.png","../resources/images/all_probes/grace_cross/grace_top.png","../resources/images/all_probes/kitchen_cross/kitchen_top.png","../resources/images/all_probes/rnl_cross/rnl_top.png","../resources/images/all_probes/stpeters_cross/stpeters_top.png","../resources/images/all_probes/uffizi_cross/uffizi_top.png");
	this.set_bottomUrls = function (value) {
		this.proxy.bottomUrls = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.bottomUrls_changed = function () {
		var value = this.bottomUrls;
		return value;
	};
	this.bottomUrls = new MFString("../resources/images/all_probes/beach_cross/beach_bottom.png","../resources/images/all_probes/building_cross/building_bottom.png","../resources/images/all_probes/campus_cross/campus_bottom.png","../resources/images/all_probes/galileo_cross/galileo_bottom.png","../resources/images/all_probes/grace_cross/grace_bottom.png","../resources/images/all_probes/kitchen_cross/kitchen_bottom.png","../resources/images/all_probes/rnl_cross/rnl_bottom.png","../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","../resources/images/all_probes/uffizi_cross/uffizi_bottom.png");
	this.set_front = function (value) {
		this.proxy.front = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.front_changed = function () {
		var value = this.front;
		return value;
	};
	this.front = undefined;
	this.set_back = function (value) {
		this.proxy.back = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.back_changed = function () {
		var value = this.back;
		return value;
	};
	this.back = undefined;
	this.set_left = function (value) {
		this.proxy.left = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.left_changed = function () {
		var value = this.left;
		return value;
	};
	this.left = undefined;
	this.set_right = function (value) {
		this.proxy.right = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.right_changed = function () {
		var value = this.right;
		return value;
	};
	this.right = undefined;
	this.set_top = function (value) {
		this.proxy.top = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.top_changed = function () {
		var value = this.top;
		return value;
	};
	this.top = undefined;
	this.set_bottom = function (value) {
		this.proxy.bottom = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.bottom_changed = function () {
		var value = this.bottom;
		return value;
	};
	this.bottom = undefined;
	this.set_fraction = function (value) {
		this.proxy.fraction = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.fraction_changed = function () {
		var value = this.fraction;
		return value;
	};
	this.fraction = undefined;
	this.set_old = function (value) {
		this.proxy.old = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.old_changed = function () {
		var value = this.old;
		return value;
	};
	this.old = new SFInt32(-1);
ecmascript: 
	this.set_fraction = function ( f, tm ) { var side = Math.floor(f*this.proxy.frontUrls.length); if (side > this.proxy.frontUrls.length-1) { side = 0; } if (side != this.proxy.old) { // console.error(f+""+side); this.proxy.old = side; this.proxy.front_changed[0] = this.proxy.frontUrls[side]; this.proxy.back_changed[0] = this.proxy.backUrls[side]; this.proxy.left_changed[0] = this.proxy.leftUrls[side]; this.proxy.right_changed[0] = this.proxy.rightUrls[side]; this.proxy.top_changed[0] = this.proxy.topUrls[side]; this.proxy.bottom_changed[0] = this.proxy.bottomUrls[side]; } };

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['UrlSelector'] = new X3DJSON['Script']['UrlSelector']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['UrlSelector'] === 'undefined') {
X3DJSON['Obj']['UrlSelector'] = {};
}

if (typeof X3DJSON['Obj']['UrlSelector']['ACTION'] === 'undefined') {
X3DJSON['Obj']['UrlSelector']['ACTION'] = {};
X3DJSON['Obj']['UrlSelector'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['UrlSelector']['ACTION'],X3DJSON['Obj']['UrlSelector']);
}
if (typeof X3DJSON['Obj']['UrlSelector'].initialize === "function") X3DJSON['Obj']['UrlSelector'].initialize();
X3DJSON.nodeUtil('Clock').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['UrlSelector'].set_fraction(X3DJSON.nodeUtil('Clock','fraction'), __eventTime);
}, false);
			X3DJSON['Obj']['UrlSelector'].set_fraction(X3DJSON.nodeUtil('Clock','fraction'), __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['UrlSelector'] === 'undefined') {
X3DJSON['Obj']['UrlSelector'] = {};
}

if (typeof X3DJSON['Obj']['UrlSelector']['ACTION']['front'] === 'undefined') {
X3DJSON['Obj']['UrlSelector']['ACTION']['front'] = [];
}
X3DJSON['Obj']['UrlSelector']['ACTION']['front'].push(function(property, value) {
		if (property === 'front') {
			X3DJSON.nodeUtil('cube','frontUrl',typeof X3DJSON['Obj']['UrlSelector'].front_changed === "function" ? X3DJSON['Obj']['UrlSelector'].front_changed() : X3DJSON['Obj']['UrlSelector'].front, __eventTime);
		}
});
			X3DJSON.nodeUtil('cube','frontUrl',typeof X3DJSON['Obj']['UrlSelector'].front_changed === "function" ? X3DJSON['Obj']['UrlSelector'].front_changed() : X3DJSON['Obj']['UrlSelector'].front, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['UrlSelector'] === 'undefined') {
X3DJSON['Obj']['UrlSelector'] = {};
}

if (typeof X3DJSON['Obj']['UrlSelector']['ACTION']['back'] === 'undefined') {
X3DJSON['Obj']['UrlSelector']['ACTION']['back'] = [];
}
X3DJSON['Obj']['UrlSelector']['ACTION']['back'].push(function(property, value) {
		if (property === 'back') {
			X3DJSON.nodeUtil('cube','backUrl',typeof X3DJSON['Obj']['UrlSelector'].back_changed === "function" ? X3DJSON['Obj']['UrlSelector'].back_changed() : X3DJSON['Obj']['UrlSelector'].back, __eventTime);
		}
});
			X3DJSON.nodeUtil('cube','backUrl',typeof X3DJSON['Obj']['UrlSelector'].back_changed === "function" ? X3DJSON['Obj']['UrlSelector'].back_changed() : X3DJSON['Obj']['UrlSelector'].back, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['UrlSelector'] === 'undefined') {
X3DJSON['Obj']['UrlSelector'] = {};
}

if (typeof X3DJSON['Obj']['UrlSelector']['ACTION']['left'] === 'undefined') {
X3DJSON['Obj']['UrlSelector']['ACTION']['left'] = [];
}
X3DJSON['Obj']['UrlSelector']['ACTION']['left'].push(function(property, value) {
		if (property === 'left') {
			X3DJSON.nodeUtil('cube','leftUrl',typeof X3DJSON['Obj']['UrlSelector'].left_changed === "function" ? X3DJSON['Obj']['UrlSelector'].left_changed() : X3DJSON['Obj']['UrlSelector'].left, __eventTime);
		}
});
			X3DJSON.nodeUtil('cube','leftUrl',typeof X3DJSON['Obj']['UrlSelector'].left_changed === "function" ? X3DJSON['Obj']['UrlSelector'].left_changed() : X3DJSON['Obj']['UrlSelector'].left, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['UrlSelector'] === 'undefined') {
X3DJSON['Obj']['UrlSelector'] = {};
}

if (typeof X3DJSON['Obj']['UrlSelector']['ACTION']['right'] === 'undefined') {
X3DJSON['Obj']['UrlSelector']['ACTION']['right'] = [];
}
X3DJSON['Obj']['UrlSelector']['ACTION']['right'].push(function(property, value) {
		if (property === 'right') {
			X3DJSON.nodeUtil('cube','rightUrl',typeof X3DJSON['Obj']['UrlSelector'].right_changed === "function" ? X3DJSON['Obj']['UrlSelector'].right_changed() : X3DJSON['Obj']['UrlSelector'].right, __eventTime);
		}
});
			X3DJSON.nodeUtil('cube','rightUrl',typeof X3DJSON['Obj']['UrlSelector'].right_changed === "function" ? X3DJSON['Obj']['UrlSelector'].right_changed() : X3DJSON['Obj']['UrlSelector'].right, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['UrlSelector'] === 'undefined') {
X3DJSON['Obj']['UrlSelector'] = {};
}

if (typeof X3DJSON['Obj']['UrlSelector']['ACTION']['top'] === 'undefined') {
X3DJSON['Obj']['UrlSelector']['ACTION']['top'] = [];
}
X3DJSON['Obj']['UrlSelector']['ACTION']['top'].push(function(property, value) {
		if (property === 'top') {
			X3DJSON.nodeUtil('cube','topUrl',typeof X3DJSON['Obj']['UrlSelector'].top_changed === "function" ? X3DJSON['Obj']['UrlSelector'].top_changed() : X3DJSON['Obj']['UrlSelector'].top, __eventTime);
		}
});
			X3DJSON.nodeUtil('cube','topUrl',typeof X3DJSON['Obj']['UrlSelector'].top_changed === "function" ? X3DJSON['Obj']['UrlSelector'].top_changed() : X3DJSON['Obj']['UrlSelector'].top, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['UrlSelector'] === 'undefined') {
X3DJSON['Obj']['UrlSelector'] = {};
}

if (typeof X3DJSON['Obj']['UrlSelector']['ACTION']['bottom'] === 'undefined') {
X3DJSON['Obj']['UrlSelector']['ACTION']['bottom'] = [];
}
X3DJSON['Obj']['UrlSelector']['ACTION']['bottom'].push(function(property, value) {
		if (property === 'bottom') {
			X3DJSON.nodeUtil('cube','bottomUrl',typeof X3DJSON['Obj']['UrlSelector'].bottom_changed === "function" ? X3DJSON['Obj']['UrlSelector'].bottom_changed() : X3DJSON['Obj']['UrlSelector'].bottom, __eventTime);
		}
});
			X3DJSON.nodeUtil('cube','bottomUrl',typeof X3DJSON['Obj']['UrlSelector'].bottom_changed === "function" ? X3DJSON['Obj']['UrlSelector'].bottom_changed() : X3DJSON['Obj']['UrlSelector'].bottom, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['UrlSelector'] === 'undefined') {
X3DJSON['Obj']['UrlSelector'] = {};
}

if (typeof X3DJSON['Obj']['UrlSelector']['ACTION']['front'] === 'undefined') {
X3DJSON['Obj']['UrlSelector']['ACTION']['front'] = [];
}
X3DJSON['Obj']['UrlSelector']['ACTION']['front'].push(function(property, value) {
		if (property === 'front') {
			X3DJSON.nodeUtil('frontShader','url',typeof X3DJSON['Obj']['UrlSelector'].front_changed === "function" ? X3DJSON['Obj']['UrlSelector'].front_changed() : X3DJSON['Obj']['UrlSelector'].front, __eventTime);
		}
});
			X3DJSON.nodeUtil('frontShader','url',typeof X3DJSON['Obj']['UrlSelector'].front_changed === "function" ? X3DJSON['Obj']['UrlSelector'].front_changed() : X3DJSON['Obj']['UrlSelector'].front, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['UrlSelector'] === 'undefined') {
X3DJSON['Obj']['UrlSelector'] = {};
}

if (typeof X3DJSON['Obj']['UrlSelector']['ACTION']['back'] === 'undefined') {
X3DJSON['Obj']['UrlSelector']['ACTION']['back'] = [];
}
X3DJSON['Obj']['UrlSelector']['ACTION']['back'].push(function(property, value) {
		if (property === 'back') {
			X3DJSON.nodeUtil('backShader','url',typeof X3DJSON['Obj']['UrlSelector'].back_changed === "function" ? X3DJSON['Obj']['UrlSelector'].back_changed() : X3DJSON['Obj']['UrlSelector'].back, __eventTime);
		}
});
			X3DJSON.nodeUtil('backShader','url',typeof X3DJSON['Obj']['UrlSelector'].back_changed === "function" ? X3DJSON['Obj']['UrlSelector'].back_changed() : X3DJSON['Obj']['UrlSelector'].back, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['UrlSelector'] === 'undefined') {
X3DJSON['Obj']['UrlSelector'] = {};
}

if (typeof X3DJSON['Obj']['UrlSelector']['ACTION']['left'] === 'undefined') {
X3DJSON['Obj']['UrlSelector']['ACTION']['left'] = [];
}
X3DJSON['Obj']['UrlSelector']['ACTION']['left'].push(function(property, value) {
		if (property === 'left') {
			X3DJSON.nodeUtil('leftShader','url',typeof X3DJSON['Obj']['UrlSelector'].left_changed === "function" ? X3DJSON['Obj']['UrlSelector'].left_changed() : X3DJSON['Obj']['UrlSelector'].left, __eventTime);
		}
});
			X3DJSON.nodeUtil('leftShader','url',typeof X3DJSON['Obj']['UrlSelector'].left_changed === "function" ? X3DJSON['Obj']['UrlSelector'].left_changed() : X3DJSON['Obj']['UrlSelector'].left, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['UrlSelector'] === 'undefined') {
X3DJSON['Obj']['UrlSelector'] = {};
}

if (typeof X3DJSON['Obj']['UrlSelector']['ACTION']['right'] === 'undefined') {
X3DJSON['Obj']['UrlSelector']['ACTION']['right'] = [];
}
X3DJSON['Obj']['UrlSelector']['ACTION']['right'].push(function(property, value) {
		if (property === 'right') {
			X3DJSON.nodeUtil('rightShader','url',typeof X3DJSON['Obj']['UrlSelector'].right_changed === "function" ? X3DJSON['Obj']['UrlSelector'].right_changed() : X3DJSON['Obj']['UrlSelector'].right, __eventTime);
		}
});
			X3DJSON.nodeUtil('rightShader','url',typeof X3DJSON['Obj']['UrlSelector'].right_changed === "function" ? X3DJSON['Obj']['UrlSelector'].right_changed() : X3DJSON['Obj']['UrlSelector'].right, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['UrlSelector'] === 'undefined') {
X3DJSON['Obj']['UrlSelector'] = {};
}

if (typeof X3DJSON['Obj']['UrlSelector']['ACTION']['top'] === 'undefined') {
X3DJSON['Obj']['UrlSelector']['ACTION']['top'] = [];
}
X3DJSON['Obj']['UrlSelector']['ACTION']['top'].push(function(property, value) {
		if (property === 'top') {
			X3DJSON.nodeUtil('topShader','url',typeof X3DJSON['Obj']['UrlSelector'].top_changed === "function" ? X3DJSON['Obj']['UrlSelector'].top_changed() : X3DJSON['Obj']['UrlSelector'].top, __eventTime);
		}
});
			X3DJSON.nodeUtil('topShader','url',typeof X3DJSON['Obj']['UrlSelector'].top_changed === "function" ? X3DJSON['Obj']['UrlSelector'].top_changed() : X3DJSON['Obj']['UrlSelector'].top, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['UrlSelector'] === 'undefined') {
X3DJSON['Obj']['UrlSelector'] = {};
}

if (typeof X3DJSON['Obj']['UrlSelector']['ACTION']['bottom'] === 'undefined') {
X3DJSON['Obj']['UrlSelector']['ACTION']['bottom'] = [];
}
X3DJSON['Obj']['UrlSelector']['ACTION']['bottom'].push(function(property, value) {
		if (property === 'bottom') {
			X3DJSON.nodeUtil('bottomShader','url',typeof X3DJSON['Obj']['UrlSelector'].bottom_changed === "function" ? X3DJSON['Obj']['UrlSelector'].bottom_changed() : X3DJSON['Obj']['UrlSelector'].bottom, __eventTime);
		}
});
			X3DJSON.nodeUtil('bottomShader','url',typeof X3DJSON['Obj']['UrlSelector'].bottom_changed === "function" ? X3DJSON['Obj']['UrlSelector'].bottom_changed() : X3DJSON['Obj']['UrlSelector'].bottom, __eventTime);
			X3DJSON['Obj']['UrlSelector'].set_fraction(X3DJSON.nodeUtil('Clock','fraction'), __eventTime);
			X3DJSON.nodeUtil('cube','frontUrl',typeof X3DJSON['Obj']['UrlSelector'].front_changed === "function" ? X3DJSON['Obj']['UrlSelector'].front_changed() : X3DJSON['Obj']['UrlSelector'].front, __eventTime);
			X3DJSON.nodeUtil('cube','backUrl',typeof X3DJSON['Obj']['UrlSelector'].back_changed === "function" ? X3DJSON['Obj']['UrlSelector'].back_changed() : X3DJSON['Obj']['UrlSelector'].back, __eventTime);
			X3DJSON.nodeUtil('cube','leftUrl',typeof X3DJSON['Obj']['UrlSelector'].left_changed === "function" ? X3DJSON['Obj']['UrlSelector'].left_changed() : X3DJSON['Obj']['UrlSelector'].left, __eventTime);
			X3DJSON.nodeUtil('cube','rightUrl',typeof X3DJSON['Obj']['UrlSelector'].right_changed === "function" ? X3DJSON['Obj']['UrlSelector'].right_changed() : X3DJSON['Obj']['UrlSelector'].right, __eventTime);
			X3DJSON.nodeUtil('cube','topUrl',typeof X3DJSON['Obj']['UrlSelector'].top_changed === "function" ? X3DJSON['Obj']['UrlSelector'].top_changed() : X3DJSON['Obj']['UrlSelector'].top, __eventTime);
			X3DJSON.nodeUtil('cube','bottomUrl',typeof X3DJSON['Obj']['UrlSelector'].bottom_changed === "function" ? X3DJSON['Obj']['UrlSelector'].bottom_changed() : X3DJSON['Obj']['UrlSelector'].bottom, __eventTime);
			X3DJSON.nodeUtil('frontShader','url',typeof X3DJSON['Obj']['UrlSelector'].front_changed === "function" ? X3DJSON['Obj']['UrlSelector'].front_changed() : X3DJSON['Obj']['UrlSelector'].front, __eventTime);
			X3DJSON.nodeUtil('backShader','url',typeof X3DJSON['Obj']['UrlSelector'].back_changed === "function" ? X3DJSON['Obj']['UrlSelector'].back_changed() : X3DJSON['Obj']['UrlSelector'].back, __eventTime);
			X3DJSON.nodeUtil('leftShader','url',typeof X3DJSON['Obj']['UrlSelector'].left_changed === "function" ? X3DJSON['Obj']['UrlSelector'].left_changed() : X3DJSON['Obj']['UrlSelector'].left, __eventTime);
			X3DJSON.nodeUtil('rightShader','url',typeof X3DJSON['Obj']['UrlSelector'].right_changed === "function" ? X3DJSON['Obj']['UrlSelector'].right_changed() : X3DJSON['Obj']['UrlSelector'].right, __eventTime);
			X3DJSON.nodeUtil('topShader','url',typeof X3DJSON['Obj']['UrlSelector'].top_changed === "function" ? X3DJSON['Obj']['UrlSelector'].top_changed() : X3DJSON['Obj']['UrlSelector'].top, __eventTime);
			X3DJSON.nodeUtil('bottomShader','url',typeof X3DJSON['Obj']['UrlSelector'].bottom_changed === "function" ? X3DJSON['Obj']['UrlSelector'].bottom_changed() : X3DJSON['Obj']['UrlSelector'].bottom, __eventTime);