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
	this.front = new MFString();
	this.set_back = function (value) {
		this.proxy.back = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.back_changed = function () {
		var value = this.back;
		return value;
	};
	this.back = new MFString();
	this.set_left = function (value) {
		this.proxy.left = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.left_changed = function () {
		var value = this.left;
		return value;
	};
	this.left = new MFString();
	this.set_right = function (value) {
		this.proxy.right = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.right_changed = function () {
		var value = this.right;
		return value;
	};
	this.right = new MFString();
	this.set_top = function (value) {
		this.proxy.top = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.top_changed = function () {
		var value = this.top;
		return value;
	};
	this.top = new MFString();
	this.set_bottom = function (value) {
		this.proxy.bottom = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.bottom_changed = function () {
		var value = this.bottom;
		return value;
	};
	this.bottom = new MFString();
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
	this.set_fraction = function ( f, tm ) { var side = Math.floor(f*this.proxy.frontUrls.length); if (side > this.proxy.frontUrls.length-1) { side = 0; } if (side != this.proxy.old) { this.proxy.old = side; this.proxy.front[0] = this.proxy.frontUrls[side]; this.proxy.back[0] = this.proxy.backUrls[side]; this.proxy.left[0] = this.proxy.leftUrls[side]; this.proxy.right[0] = this.proxy.rightUrls[side]; this.proxy.top[0] = this.proxy.topUrls[side]; this.proxy.bottom[0] = this.proxy.bottomUrls[side]; } };

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
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['Animate'] = function() {
	this.set_fraction = function (value) {
		this.proxy.fraction = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.fraction_changed = function () {
		var value = this.fraction;
		return value;
	};
	this.fraction = undefined;
	this.set_a = function (value) {
		this.proxy.a = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.a_changed = function () {
		var value = this.a;
		return value;
	};
	this.a = new SFFloat(10);
	this.set_b = function (value) {
		this.proxy.b = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.b_changed = function () {
		var value = this.b;
		return value;
	};
	this.b = new SFFloat(1);
	this.set_c = function (value) {
		this.proxy.c = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.c_changed = function () {
		var value = this.c;
		return value;
	};
	this.c = new SFFloat(20);
	this.set_d = function (value) {
		this.proxy.d = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.d_changed = function () {
		var value = this.d;
		return value;
	};
	this.d = new SFFloat(20);
	this.set_tdelta = function (value) {
		this.proxy.tdelta = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.tdelta_changed = function () {
		var value = this.tdelta;
		return value;
	};
	this.tdelta = new SFFloat(0);
	this.set_pdelta = function (value) {
		this.proxy.pdelta = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.pdelta_changed = function () {
		var value = this.pdelta;
		return value;
	};
	this.pdelta = new SFFloat(0);
ecmascript: 
	this.set_fraction = function () { var choice = Math.floor(Math.random() * 4); if (choice == 0) { this.proxy.a = this.proxy.a + Math.floor(Math.random() * 2) * 2 - 1; } else if (choice == 1) { this.proxy.b = this.proxy.b + Math.floor(Math.random() * 2) * 2 - 1; } else if (choice == 2) { this.proxy.c = this.proxy.c + Math.floor(Math.random() * 2) * 2 - 1; } else if (choice == 3) { this.proxy.d = this.proxy.d + Math.floor(Math.random() * 2) * 2 - 1; } this.proxy.tdelta = this.proxy.tdelta + 0.5; this.proxy.pdelta = this.proxy.pdelta + 0.5; if (this.proxy.a < 1) { this.proxy.a = 10; } if (this.proxy.b < 1) { this.proxy.b = 10; } if (this.proxy.c < 1) { this.proxy.c = 4; } if (this.proxy.c > 20) { this.proxy.c = 4; } if (this.proxy.d < 1) { this.proxy.d = 4; } if (this.proxy.d > 20) { this.proxy.d = 4; } };

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['Animate'] = new X3DJSON['Script']['Animate']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Animate'] === 'undefined') {
X3DJSON['Obj']['Animate'] = {};
}

if (typeof X3DJSON['Obj']['Animate']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Animate']['ACTION'] = {};
X3DJSON['Obj']['Animate'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Animate']['ACTION'],X3DJSON['Obj']['Animate']);
}
if (typeof X3DJSON['Obj']['Animate'].initialize === "function") X3DJSON['Obj']['Animate'].initialize();
X3DJSON.nodeUtil('TourTime').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Animate'].set_fraction(X3DJSON.nodeUtil('TourTime','fraction'), __eventTime);
}, false);
			X3DJSON['Obj']['Animate'].set_fraction(X3DJSON.nodeUtil('TourTime','fraction'), __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Animate'] === 'undefined') {
X3DJSON['Obj']['Animate'] = {};
}

if (typeof X3DJSON['Obj']['Animate']['ACTION']['a'] === 'undefined') {
X3DJSON['Obj']['Animate']['ACTION']['a'] = [];
}
X3DJSON['Obj']['Animate']['ACTION']['a'].push(function(property, value) {
		if (property === 'a') {
			X3DJSON.nodeUtil('x_ite','a',typeof X3DJSON['Obj']['Animate'].a === "function" ? X3DJSON['Obj']['Animate'].a() : X3DJSON['Obj']['Animate'].a, __eventTime);
		}
});
			X3DJSON.nodeUtil('x_ite','a',typeof X3DJSON['Obj']['Animate'].a === "function" ? X3DJSON['Obj']['Animate'].a() : X3DJSON['Obj']['Animate'].a, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Animate'] === 'undefined') {
X3DJSON['Obj']['Animate'] = {};
}

if (typeof X3DJSON['Obj']['Animate']['ACTION']['b'] === 'undefined') {
X3DJSON['Obj']['Animate']['ACTION']['b'] = [];
}
X3DJSON['Obj']['Animate']['ACTION']['b'].push(function(property, value) {
		if (property === 'b') {
			X3DJSON.nodeUtil('x_ite','b',typeof X3DJSON['Obj']['Animate'].b === "function" ? X3DJSON['Obj']['Animate'].b() : X3DJSON['Obj']['Animate'].b, __eventTime);
		}
});
			X3DJSON.nodeUtil('x_ite','b',typeof X3DJSON['Obj']['Animate'].b === "function" ? X3DJSON['Obj']['Animate'].b() : X3DJSON['Obj']['Animate'].b, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Animate'] === 'undefined') {
X3DJSON['Obj']['Animate'] = {};
}

if (typeof X3DJSON['Obj']['Animate']['ACTION']['c'] === 'undefined') {
X3DJSON['Obj']['Animate']['ACTION']['c'] = [];
}
X3DJSON['Obj']['Animate']['ACTION']['c'].push(function(property, value) {
		if (property === 'c') {
			X3DJSON.nodeUtil('x_ite','c',typeof X3DJSON['Obj']['Animate'].c === "function" ? X3DJSON['Obj']['Animate'].c() : X3DJSON['Obj']['Animate'].c, __eventTime);
		}
});
			X3DJSON.nodeUtil('x_ite','c',typeof X3DJSON['Obj']['Animate'].c === "function" ? X3DJSON['Obj']['Animate'].c() : X3DJSON['Obj']['Animate'].c, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Animate'] === 'undefined') {
X3DJSON['Obj']['Animate'] = {};
}

if (typeof X3DJSON['Obj']['Animate']['ACTION']['d'] === 'undefined') {
X3DJSON['Obj']['Animate']['ACTION']['d'] = [];
}
X3DJSON['Obj']['Animate']['ACTION']['d'].push(function(property, value) {
		if (property === 'd') {
			X3DJSON.nodeUtil('x_ite','d',typeof X3DJSON['Obj']['Animate'].d === "function" ? X3DJSON['Obj']['Animate'].d() : X3DJSON['Obj']['Animate'].d, __eventTime);
		}
});
			X3DJSON.nodeUtil('x_ite','d',typeof X3DJSON['Obj']['Animate'].d === "function" ? X3DJSON['Obj']['Animate'].d() : X3DJSON['Obj']['Animate'].d, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Animate'] === 'undefined') {
X3DJSON['Obj']['Animate'] = {};
}

if (typeof X3DJSON['Obj']['Animate']['ACTION']['pdelta'] === 'undefined') {
X3DJSON['Obj']['Animate']['ACTION']['pdelta'] = [];
}
X3DJSON['Obj']['Animate']['ACTION']['pdelta'].push(function(property, value) {
		if (property === 'pdelta') {
			X3DJSON.nodeUtil('x_ite','pdelta',typeof X3DJSON['Obj']['Animate'].pdelta === "function" ? X3DJSON['Obj']['Animate'].pdelta() : X3DJSON['Obj']['Animate'].pdelta, __eventTime);
		}
});
			X3DJSON.nodeUtil('x_ite','pdelta',typeof X3DJSON['Obj']['Animate'].pdelta === "function" ? X3DJSON['Obj']['Animate'].pdelta() : X3DJSON['Obj']['Animate'].pdelta, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Animate'] === 'undefined') {
X3DJSON['Obj']['Animate'] = {};
}

if (typeof X3DJSON['Obj']['Animate']['ACTION']['tdelta'] === 'undefined') {
X3DJSON['Obj']['Animate']['ACTION']['tdelta'] = [];
}
X3DJSON['Obj']['Animate']['ACTION']['tdelta'].push(function(property, value) {
		if (property === 'tdelta') {
			X3DJSON.nodeUtil('x_ite','tdelta',typeof X3DJSON['Obj']['Animate'].tdelta === "function" ? X3DJSON['Obj']['Animate'].tdelta() : X3DJSON['Obj']['Animate'].tdelta, __eventTime);
		}
});
			X3DJSON.nodeUtil('x_ite','tdelta',typeof X3DJSON['Obj']['Animate'].tdelta === "function" ? X3DJSON['Obj']['Animate'].tdelta() : X3DJSON['Obj']['Animate'].tdelta, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Animate'] === 'undefined') {
X3DJSON['Obj']['Animate'] = {};
}

if (typeof X3DJSON['Obj']['Animate']['ACTION']['a'] === 'undefined') {
X3DJSON['Obj']['Animate']['ACTION']['a'] = [];
}
X3DJSON['Obj']['Animate']['ACTION']['a'].push(function(property, value) {
		if (property === 'a') {
			X3DJSON.nodeUtil('x3dom','a',typeof X3DJSON['Obj']['Animate'].a === "function" ? X3DJSON['Obj']['Animate'].a() : X3DJSON['Obj']['Animate'].a, __eventTime);
		}
});
			X3DJSON.nodeUtil('x3dom','a',typeof X3DJSON['Obj']['Animate'].a === "function" ? X3DJSON['Obj']['Animate'].a() : X3DJSON['Obj']['Animate'].a, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Animate'] === 'undefined') {
X3DJSON['Obj']['Animate'] = {};
}

if (typeof X3DJSON['Obj']['Animate']['ACTION']['b'] === 'undefined') {
X3DJSON['Obj']['Animate']['ACTION']['b'] = [];
}
X3DJSON['Obj']['Animate']['ACTION']['b'].push(function(property, value) {
		if (property === 'b') {
			X3DJSON.nodeUtil('x3dom','b',typeof X3DJSON['Obj']['Animate'].b === "function" ? X3DJSON['Obj']['Animate'].b() : X3DJSON['Obj']['Animate'].b, __eventTime);
		}
});
			X3DJSON.nodeUtil('x3dom','b',typeof X3DJSON['Obj']['Animate'].b === "function" ? X3DJSON['Obj']['Animate'].b() : X3DJSON['Obj']['Animate'].b, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Animate'] === 'undefined') {
X3DJSON['Obj']['Animate'] = {};
}

if (typeof X3DJSON['Obj']['Animate']['ACTION']['c'] === 'undefined') {
X3DJSON['Obj']['Animate']['ACTION']['c'] = [];
}
X3DJSON['Obj']['Animate']['ACTION']['c'].push(function(property, value) {
		if (property === 'c') {
			X3DJSON.nodeUtil('x3dom','c',typeof X3DJSON['Obj']['Animate'].c === "function" ? X3DJSON['Obj']['Animate'].c() : X3DJSON['Obj']['Animate'].c, __eventTime);
		}
});
			X3DJSON.nodeUtil('x3dom','c',typeof X3DJSON['Obj']['Animate'].c === "function" ? X3DJSON['Obj']['Animate'].c() : X3DJSON['Obj']['Animate'].c, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Animate'] === 'undefined') {
X3DJSON['Obj']['Animate'] = {};
}

if (typeof X3DJSON['Obj']['Animate']['ACTION']['d'] === 'undefined') {
X3DJSON['Obj']['Animate']['ACTION']['d'] = [];
}
X3DJSON['Obj']['Animate']['ACTION']['d'].push(function(property, value) {
		if (property === 'd') {
			X3DJSON.nodeUtil('x3dom','d',typeof X3DJSON['Obj']['Animate'].d === "function" ? X3DJSON['Obj']['Animate'].d() : X3DJSON['Obj']['Animate'].d, __eventTime);
		}
});
			X3DJSON.nodeUtil('x3dom','d',typeof X3DJSON['Obj']['Animate'].d === "function" ? X3DJSON['Obj']['Animate'].d() : X3DJSON['Obj']['Animate'].d, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Animate'] === 'undefined') {
X3DJSON['Obj']['Animate'] = {};
}

if (typeof X3DJSON['Obj']['Animate']['ACTION']['pdelta'] === 'undefined') {
X3DJSON['Obj']['Animate']['ACTION']['pdelta'] = [];
}
X3DJSON['Obj']['Animate']['ACTION']['pdelta'].push(function(property, value) {
		if (property === 'pdelta') {
			X3DJSON.nodeUtil('x3dom','pdelta',typeof X3DJSON['Obj']['Animate'].pdelta === "function" ? X3DJSON['Obj']['Animate'].pdelta() : X3DJSON['Obj']['Animate'].pdelta, __eventTime);
		}
});
			X3DJSON.nodeUtil('x3dom','pdelta',typeof X3DJSON['Obj']['Animate'].pdelta === "function" ? X3DJSON['Obj']['Animate'].pdelta() : X3DJSON['Obj']['Animate'].pdelta, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Animate'] === 'undefined') {
X3DJSON['Obj']['Animate'] = {};
}

if (typeof X3DJSON['Obj']['Animate']['ACTION']['tdelta'] === 'undefined') {
X3DJSON['Obj']['Animate']['ACTION']['tdelta'] = [];
}
X3DJSON['Obj']['Animate']['ACTION']['tdelta'].push(function(property, value) {
		if (property === 'tdelta') {
			X3DJSON.nodeUtil('x3dom','tdelta',typeof X3DJSON['Obj']['Animate'].tdelta === "function" ? X3DJSON['Obj']['Animate'].tdelta() : X3DJSON['Obj']['Animate'].tdelta, __eventTime);
		}
});
			X3DJSON.nodeUtil('x3dom','tdelta',typeof X3DJSON['Obj']['Animate'].tdelta === "function" ? X3DJSON['Obj']['Animate'].tdelta() : X3DJSON['Obj']['Animate'].tdelta, __eventTime);
			X3DJSON['Obj']['Animate'].set_fraction(X3DJSON.nodeUtil('TourTime','fraction'), __eventTime);
			X3DJSON.nodeUtil('x_ite','a',typeof X3DJSON['Obj']['Animate'].a === "function" ? X3DJSON['Obj']['Animate'].a() : X3DJSON['Obj']['Animate'].a, __eventTime);
			X3DJSON.nodeUtil('x_ite','b',typeof X3DJSON['Obj']['Animate'].b === "function" ? X3DJSON['Obj']['Animate'].b() : X3DJSON['Obj']['Animate'].b, __eventTime);
			X3DJSON.nodeUtil('x_ite','c',typeof X3DJSON['Obj']['Animate'].c === "function" ? X3DJSON['Obj']['Animate'].c() : X3DJSON['Obj']['Animate'].c, __eventTime);
			X3DJSON.nodeUtil('x_ite','d',typeof X3DJSON['Obj']['Animate'].d === "function" ? X3DJSON['Obj']['Animate'].d() : X3DJSON['Obj']['Animate'].d, __eventTime);
			X3DJSON.nodeUtil('x_ite','pdelta',typeof X3DJSON['Obj']['Animate'].pdelta === "function" ? X3DJSON['Obj']['Animate'].pdelta() : X3DJSON['Obj']['Animate'].pdelta, __eventTime);
			X3DJSON.nodeUtil('x_ite','tdelta',typeof X3DJSON['Obj']['Animate'].tdelta === "function" ? X3DJSON['Obj']['Animate'].tdelta() : X3DJSON['Obj']['Animate'].tdelta, __eventTime);
			X3DJSON.nodeUtil('x3dom','a',typeof X3DJSON['Obj']['Animate'].a === "function" ? X3DJSON['Obj']['Animate'].a() : X3DJSON['Obj']['Animate'].a, __eventTime);
			X3DJSON.nodeUtil('x3dom','b',typeof X3DJSON['Obj']['Animate'].b === "function" ? X3DJSON['Obj']['Animate'].b() : X3DJSON['Obj']['Animate'].b, __eventTime);
			X3DJSON.nodeUtil('x3dom','c',typeof X3DJSON['Obj']['Animate'].c === "function" ? X3DJSON['Obj']['Animate'].c() : X3DJSON['Obj']['Animate'].c, __eventTime);
			X3DJSON.nodeUtil('x3dom','d',typeof X3DJSON['Obj']['Animate'].d === "function" ? X3DJSON['Obj']['Animate'].d() : X3DJSON['Obj']['Animate'].d, __eventTime);
			X3DJSON.nodeUtil('x3dom','pdelta',typeof X3DJSON['Obj']['Animate'].pdelta === "function" ? X3DJSON['Obj']['Animate'].pdelta() : X3DJSON['Obj']['Animate'].pdelta, __eventTime);
			X3DJSON.nodeUtil('x3dom','tdelta',typeof X3DJSON['Obj']['Animate'].tdelta === "function" ? X3DJSON['Obj']['Animate'].tdelta() : X3DJSON['Obj']['Animate'].tdelta, __eventTime);