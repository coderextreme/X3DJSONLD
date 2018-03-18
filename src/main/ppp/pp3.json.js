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

X3DJSON['Script']['DECLProcess_INSTANCE_RightSingleToMultiString'] = function() {
	this.set_rightstring = function (value) {
		this.proxy.rightstring = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.rightstring_changed = function () {
		var value = this.rightstring;
		return value;
	};
	this.rightstring = undefined;
	this.set_rightlines = function (value) {
		this.proxy.rightlines = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.rightlines_changed = function () {
		var value = this.rightlines;
		return value;
	};
	this.rightlines = new MFString();
ecmascript:


	this.initialize = function () {
	this.proxy.rightlines = new MFString("");
}

;

	this.set_rightstring = function (rightstr) {
	this.proxy.rightlines = new MFString(rightstr);
};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLProcess_INSTANCE_RightSingleToMultiString'] = new X3DJSON['Script']['DECLProcess_INSTANCE_RightSingleToMultiString']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE_RightSingleToMultiString'] === 'undefined') {
X3DJSON['Obj']['DECLProcess_INSTANCE_RightSingleToMultiString'] = {};
}

if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE_RightSingleToMultiString']['ACTION'] === 'undefined') {
X3DJSON['Obj']['DECLProcess_INSTANCE_RightSingleToMultiString']['ACTION'] = {};
X3DJSON['Obj']['DECLProcess_INSTANCE_RightSingleToMultiString'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['DECLProcess_INSTANCE_RightSingleToMultiString']['ACTION'],X3DJSON['Obj']['DECLProcess_INSTANCE_RightSingleToMultiString']);
}
if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE_RightSingleToMultiString'].initialize === "function") X3DJSON['Obj']['DECLProcess_INSTANCE_RightSingleToMultiString'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLProcess_INSTANCE_UpSingleToMultiString'] = function() {
	this.set_upstring = function (value) {
		this.proxy.upstring = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.upstring_changed = function () {
		var value = this.upstring;
		return value;
	};
	this.upstring = undefined;
	this.set_uplines = function (value) {
		this.proxy.uplines = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.uplines_changed = function () {
		var value = this.uplines;
		return value;
	};
	this.uplines = new MFString();
ecmascript:


	this.initialize = function () {
	this.proxy.uplines = new MFString("");
}

;

	this.set_upstring = function (upstr) {
	this.proxy.uplines = new MFString(upstr);
};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLProcess_INSTANCE_UpSingleToMultiString'] = new X3DJSON['Script']['DECLProcess_INSTANCE_UpSingleToMultiString']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE_UpSingleToMultiString'] === 'undefined') {
X3DJSON['Obj']['DECLProcess_INSTANCE_UpSingleToMultiString'] = {};
}

if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE_UpSingleToMultiString']['ACTION'] === 'undefined') {
X3DJSON['Obj']['DECLProcess_INSTANCE_UpSingleToMultiString']['ACTION'] = {};
X3DJSON['Obj']['DECLProcess_INSTANCE_UpSingleToMultiString'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['DECLProcess_INSTANCE_UpSingleToMultiString']['ACTION'],X3DJSON['Obj']['DECLProcess_INSTANCE_UpSingleToMultiString']);
}
if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE_UpSingleToMultiString'].initialize === "function") X3DJSON['Obj']['DECLProcess_INSTANCE_UpSingleToMultiString'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLProcess_INSTANCE_CenterSingleToMultiString'] = function() {
	this.set_centerstring = function (value) {
		this.proxy.centerstring = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.centerstring_changed = function () {
		var value = this.centerstring;
		return value;
	};
	this.centerstring = undefined;
	this.set_centerlines = function (value) {
		this.proxy.centerlines = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.centerlines_changed = function () {
		var value = this.centerlines;
		return value;
	};
	this.centerlines = new MFString();
ecmascript:


	this.initialize = function () {
	this.proxy.centerlines = new MFString("");
}

;

	this.set_centerstring = function (centerstr) {
	this.proxy.centerlines = new MFString(centerstr);
};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLProcess_INSTANCE_CenterSingleToMultiString'] = new X3DJSON['Script']['DECLProcess_INSTANCE_CenterSingleToMultiString']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE_CenterSingleToMultiString'] === 'undefined') {
X3DJSON['Obj']['DECLProcess_INSTANCE_CenterSingleToMultiString'] = {};
}

if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE_CenterSingleToMultiString']['ACTION'] === 'undefined') {
X3DJSON['Obj']['DECLProcess_INSTANCE_CenterSingleToMultiString']['ACTION'] = {};
X3DJSON['Obj']['DECLProcess_INSTANCE_CenterSingleToMultiString'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['DECLProcess_INSTANCE_CenterSingleToMultiString']['ACTION'],X3DJSON['Obj']['DECLProcess_INSTANCE_CenterSingleToMultiString']);
}
if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE_CenterSingleToMultiString'].initialize === "function") X3DJSON['Obj']['DECLProcess_INSTANCE_CenterSingleToMultiString'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLProcess_INSTANCE1000_RightSingleToMultiString'] = function() {
	this.set_rightstring = function (value) {
		this.proxy.rightstring = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.rightstring_changed = function () {
		var value = this.rightstring;
		return value;
	};
	this.rightstring = undefined;
	this.set_rightlines = function (value) {
		this.proxy.rightlines = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.rightlines_changed = function () {
		var value = this.rightlines;
		return value;
	};
	this.rightlines = new MFString();
ecmascript:


	this.initialize = function () {
	this.proxy.rightlines = new MFString("");
}

;

	this.set_rightstring = function (rightstr) {
	this.proxy.rightlines = new MFString(rightstr);
};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLProcess_INSTANCE1000_RightSingleToMultiString'] = new X3DJSON['Script']['DECLProcess_INSTANCE1000_RightSingleToMultiString']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE1000_RightSingleToMultiString'] === 'undefined') {
X3DJSON['Obj']['DECLProcess_INSTANCE1000_RightSingleToMultiString'] = {};
}

if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE1000_RightSingleToMultiString']['ACTION'] === 'undefined') {
X3DJSON['Obj']['DECLProcess_INSTANCE1000_RightSingleToMultiString']['ACTION'] = {};
X3DJSON['Obj']['DECLProcess_INSTANCE1000_RightSingleToMultiString'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['DECLProcess_INSTANCE1000_RightSingleToMultiString']['ACTION'],X3DJSON['Obj']['DECLProcess_INSTANCE1000_RightSingleToMultiString']);
}
if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE1000_RightSingleToMultiString'].initialize === "function") X3DJSON['Obj']['DECLProcess_INSTANCE1000_RightSingleToMultiString'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLProcess_INSTANCE1000_UpSingleToMultiString'] = function() {
	this.set_upstring = function (value) {
		this.proxy.upstring = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.upstring_changed = function () {
		var value = this.upstring;
		return value;
	};
	this.upstring = undefined;
	this.set_uplines = function (value) {
		this.proxy.uplines = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.uplines_changed = function () {
		var value = this.uplines;
		return value;
	};
	this.uplines = new MFString();
ecmascript:


	this.initialize = function () {
	this.proxy.uplines = new MFString("");
}

;

	this.set_upstring = function (upstr) {
	this.proxy.uplines = new MFString(upstr);
};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLProcess_INSTANCE1000_UpSingleToMultiString'] = new X3DJSON['Script']['DECLProcess_INSTANCE1000_UpSingleToMultiString']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE1000_UpSingleToMultiString'] === 'undefined') {
X3DJSON['Obj']['DECLProcess_INSTANCE1000_UpSingleToMultiString'] = {};
}

if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE1000_UpSingleToMultiString']['ACTION'] === 'undefined') {
X3DJSON['Obj']['DECLProcess_INSTANCE1000_UpSingleToMultiString']['ACTION'] = {};
X3DJSON['Obj']['DECLProcess_INSTANCE1000_UpSingleToMultiString'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['DECLProcess_INSTANCE1000_UpSingleToMultiString']['ACTION'],X3DJSON['Obj']['DECLProcess_INSTANCE1000_UpSingleToMultiString']);
}
if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE1000_UpSingleToMultiString'].initialize === "function") X3DJSON['Obj']['DECLProcess_INSTANCE1000_UpSingleToMultiString'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLProcess_INSTANCE1000_CenterSingleToMultiString'] = function() {
	this.set_centerstring = function (value) {
		this.proxy.centerstring = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.centerstring_changed = function () {
		var value = this.centerstring;
		return value;
	};
	this.centerstring = undefined;
	this.set_centerlines = function (value) {
		this.proxy.centerlines = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.centerlines_changed = function () {
		var value = this.centerlines;
		return value;
	};
	this.centerlines = new MFString();
ecmascript:


	this.initialize = function () {
	this.proxy.centerlines = new MFString("");
}

;

	this.set_centerstring = function (centerstr) {
	this.proxy.centerlines = new MFString(centerstr);
};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLProcess_INSTANCE1000_CenterSingleToMultiString'] = new X3DJSON['Script']['DECLProcess_INSTANCE1000_CenterSingleToMultiString']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE1000_CenterSingleToMultiString'] === 'undefined') {
X3DJSON['Obj']['DECLProcess_INSTANCE1000_CenterSingleToMultiString'] = {};
}

if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE1000_CenterSingleToMultiString']['ACTION'] === 'undefined') {
X3DJSON['Obj']['DECLProcess_INSTANCE1000_CenterSingleToMultiString']['ACTION'] = {};
X3DJSON['Obj']['DECLProcess_INSTANCE1000_CenterSingleToMultiString'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['DECLProcess_INSTANCE1000_CenterSingleToMultiString']['ACTION'],X3DJSON['Obj']['DECLProcess_INSTANCE1000_CenterSingleToMultiString']);
}
if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE1000_CenterSingleToMultiString'].initialize === "function") X3DJSON['Obj']['DECLProcess_INSTANCE1000_CenterSingleToMultiString'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLProcess_INSTANCE2000_RightSingleToMultiString'] = function() {
	this.set_rightstring = function (value) {
		this.proxy.rightstring = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.rightstring_changed = function () {
		var value = this.rightstring;
		return value;
	};
	this.rightstring = undefined;
	this.set_rightlines = function (value) {
		this.proxy.rightlines = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.rightlines_changed = function () {
		var value = this.rightlines;
		return value;
	};
	this.rightlines = new MFString();
ecmascript:


	this.initialize = function () {
	this.proxy.rightlines = new MFString("");
}

;

	this.set_rightstring = function (rightstr) {
	this.proxy.rightlines = new MFString(rightstr);
};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLProcess_INSTANCE2000_RightSingleToMultiString'] = new X3DJSON['Script']['DECLProcess_INSTANCE2000_RightSingleToMultiString']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE2000_RightSingleToMultiString'] === 'undefined') {
X3DJSON['Obj']['DECLProcess_INSTANCE2000_RightSingleToMultiString'] = {};
}

if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE2000_RightSingleToMultiString']['ACTION'] === 'undefined') {
X3DJSON['Obj']['DECLProcess_INSTANCE2000_RightSingleToMultiString']['ACTION'] = {};
X3DJSON['Obj']['DECLProcess_INSTANCE2000_RightSingleToMultiString'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['DECLProcess_INSTANCE2000_RightSingleToMultiString']['ACTION'],X3DJSON['Obj']['DECLProcess_INSTANCE2000_RightSingleToMultiString']);
}
if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE2000_RightSingleToMultiString'].initialize === "function") X3DJSON['Obj']['DECLProcess_INSTANCE2000_RightSingleToMultiString'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLProcess_INSTANCE2000_UpSingleToMultiString'] = function() {
	this.set_upstring = function (value) {
		this.proxy.upstring = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.upstring_changed = function () {
		var value = this.upstring;
		return value;
	};
	this.upstring = undefined;
	this.set_uplines = function (value) {
		this.proxy.uplines = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.uplines_changed = function () {
		var value = this.uplines;
		return value;
	};
	this.uplines = new MFString();
ecmascript:


	this.initialize = function () {
	this.proxy.uplines = new MFString("");
}

;

	this.set_upstring = function (upstr) {
	this.proxy.uplines = new MFString(upstr);
};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLProcess_INSTANCE2000_UpSingleToMultiString'] = new X3DJSON['Script']['DECLProcess_INSTANCE2000_UpSingleToMultiString']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE2000_UpSingleToMultiString'] === 'undefined') {
X3DJSON['Obj']['DECLProcess_INSTANCE2000_UpSingleToMultiString'] = {};
}

if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE2000_UpSingleToMultiString']['ACTION'] === 'undefined') {
X3DJSON['Obj']['DECLProcess_INSTANCE2000_UpSingleToMultiString']['ACTION'] = {};
X3DJSON['Obj']['DECLProcess_INSTANCE2000_UpSingleToMultiString'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['DECLProcess_INSTANCE2000_UpSingleToMultiString']['ACTION'],X3DJSON['Obj']['DECLProcess_INSTANCE2000_UpSingleToMultiString']);
}
if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE2000_UpSingleToMultiString'].initialize === "function") X3DJSON['Obj']['DECLProcess_INSTANCE2000_UpSingleToMultiString'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLProcess_INSTANCE2000_CenterSingleToMultiString'] = function() {
	this.set_centerstring = function (value) {
		this.proxy.centerstring = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.centerstring_changed = function () {
		var value = this.centerstring;
		return value;
	};
	this.centerstring = undefined;
	this.set_centerlines = function (value) {
		this.proxy.centerlines = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.centerlines_changed = function () {
		var value = this.centerlines;
		return value;
	};
	this.centerlines = new MFString();
ecmascript:


	this.initialize = function () {
	this.proxy.centerlines = new MFString("");
}

;

	this.set_centerstring = function (centerstr) {
	this.proxy.centerlines = new MFString(centerstr);
};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLProcess_INSTANCE2000_CenterSingleToMultiString'] = new X3DJSON['Script']['DECLProcess_INSTANCE2000_CenterSingleToMultiString']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE2000_CenterSingleToMultiString'] === 'undefined') {
X3DJSON['Obj']['DECLProcess_INSTANCE2000_CenterSingleToMultiString'] = {};
}

if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE2000_CenterSingleToMultiString']['ACTION'] === 'undefined') {
X3DJSON['Obj']['DECLProcess_INSTANCE2000_CenterSingleToMultiString']['ACTION'] = {};
X3DJSON['Obj']['DECLProcess_INSTANCE2000_CenterSingleToMultiString'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['DECLProcess_INSTANCE2000_CenterSingleToMultiString']['ACTION'],X3DJSON['Obj']['DECLProcess_INSTANCE2000_CenterSingleToMultiString']);
}
if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE2000_CenterSingleToMultiString'].initialize === "function") X3DJSON['Obj']['DECLProcess_INSTANCE2000_CenterSingleToMultiString'].initialize();
X3DJSON.nodeUtil('DECLProcess_INSTANCE_CenterSensor').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['DECLProcess_INSTANCE_CenterSingleToMultiString'].set_centerstring(X3DJSON.nodeUtil('DECLProcess_INSTANCE_CenterSensor','enteredText'), __eventTime);
}, false);
			X3DJSON['Obj']['DECLProcess_INSTANCE_CenterSingleToMultiString'].set_centerstring(X3DJSON.nodeUtil('DECLProcess_INSTANCE_CenterSensor','enteredText'), __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE_CenterSingleToMultiString'] === 'undefined') {
X3DJSON['Obj']['DECLProcess_INSTANCE_CenterSingleToMultiString'] = {};
}

if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE_CenterSingleToMultiString']['ACTION']['centerlines'] === 'undefined') {
X3DJSON['Obj']['DECLProcess_INSTANCE_CenterSingleToMultiString']['ACTION']['centerlines'] = [];
}
X3DJSON['Obj']['DECLProcess_INSTANCE_CenterSingleToMultiString']['ACTION']['centerlines'].push(function(property, value) {
		if (property === 'centerlines') {
			X3DJSON.nodeUtil('DECLProcess_INSTANCE_CenterString','string',typeof X3DJSON['Obj']['DECLProcess_INSTANCE_CenterSingleToMultiString'].centerlines === "function" ? X3DJSON['Obj']['DECLProcess_INSTANCE_CenterSingleToMultiString'].centerlines() : X3DJSON['Obj']['DECLProcess_INSTANCE_CenterSingleToMultiString'].centerlines, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLProcess_INSTANCE_CenterString','string',typeof X3DJSON['Obj']['DECLProcess_INSTANCE_CenterSingleToMultiString'].centerlines === "function" ? X3DJSON['Obj']['DECLProcess_INSTANCE_CenterSingleToMultiString'].centerlines() : X3DJSON['Obj']['DECLProcess_INSTANCE_CenterSingleToMultiString'].centerlines, __eventTime);
X3DJSON.nodeUtil('DECLProcess_INSTANCE_CenterTouch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('DECLProcess_INSTANCE_RightSensor').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['DECLProcess_INSTANCE_RightSingleToMultiString'].set_rightstring(X3DJSON.nodeUtil('DECLProcess_INSTANCE_RightSensor','enteredText'), __eventTime);
}, false);
			X3DJSON['Obj']['DECLProcess_INSTANCE_RightSingleToMultiString'].set_rightstring(X3DJSON.nodeUtil('DECLProcess_INSTANCE_RightSensor','enteredText'), __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE_RightSingleToMultiString'] === 'undefined') {
X3DJSON['Obj']['DECLProcess_INSTANCE_RightSingleToMultiString'] = {};
}

if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE_RightSingleToMultiString']['ACTION']['rightlines'] === 'undefined') {
X3DJSON['Obj']['DECLProcess_INSTANCE_RightSingleToMultiString']['ACTION']['rightlines'] = [];
}
X3DJSON['Obj']['DECLProcess_INSTANCE_RightSingleToMultiString']['ACTION']['rightlines'].push(function(property, value) {
		if (property === 'rightlines') {
			X3DJSON.nodeUtil('DECLProcess_INSTANCE_RightString','string',typeof X3DJSON['Obj']['DECLProcess_INSTANCE_RightSingleToMultiString'].rightlines === "function" ? X3DJSON['Obj']['DECLProcess_INSTANCE_RightSingleToMultiString'].rightlines() : X3DJSON['Obj']['DECLProcess_INSTANCE_RightSingleToMultiString'].rightlines, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLProcess_INSTANCE_RightString','string',typeof X3DJSON['Obj']['DECLProcess_INSTANCE_RightSingleToMultiString'].rightlines === "function" ? X3DJSON['Obj']['DECLProcess_INSTANCE_RightSingleToMultiString'].rightlines() : X3DJSON['Obj']['DECLProcess_INSTANCE_RightSingleToMultiString'].rightlines, __eventTime);
X3DJSON.nodeUtil('DECLProcess_INSTANCE_RightTouch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('DECLProcess_INSTANCE_UpSensor').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['DECLProcess_INSTANCE_UpSingleToMultiString'].set_upstring(X3DJSON.nodeUtil('DECLProcess_INSTANCE_UpSensor','enteredText'), __eventTime);
}, false);
			X3DJSON['Obj']['DECLProcess_INSTANCE_UpSingleToMultiString'].set_upstring(X3DJSON.nodeUtil('DECLProcess_INSTANCE_UpSensor','enteredText'), __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE_UpSingleToMultiString'] === 'undefined') {
X3DJSON['Obj']['DECLProcess_INSTANCE_UpSingleToMultiString'] = {};
}

if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE_UpSingleToMultiString']['ACTION']['uplines'] === 'undefined') {
X3DJSON['Obj']['DECLProcess_INSTANCE_UpSingleToMultiString']['ACTION']['uplines'] = [];
}
X3DJSON['Obj']['DECLProcess_INSTANCE_UpSingleToMultiString']['ACTION']['uplines'].push(function(property, value) {
		if (property === 'uplines') {
			X3DJSON.nodeUtil('DECLProcess_INSTANCE_UpString','string',typeof X3DJSON['Obj']['DECLProcess_INSTANCE_UpSingleToMultiString'].uplines === "function" ? X3DJSON['Obj']['DECLProcess_INSTANCE_UpSingleToMultiString'].uplines() : X3DJSON['Obj']['DECLProcess_INSTANCE_UpSingleToMultiString'].uplines, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLProcess_INSTANCE_UpString','string',typeof X3DJSON['Obj']['DECLProcess_INSTANCE_UpSingleToMultiString'].uplines === "function" ? X3DJSON['Obj']['DECLProcess_INSTANCE_UpSingleToMultiString'].uplines() : X3DJSON['Obj']['DECLProcess_INSTANCE_UpSingleToMultiString'].uplines, __eventTime);
X3DJSON.nodeUtil('DECLProcess_INSTANCE_UpTouch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('DECLProcess_INSTANCE1000_CenterSensor').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['DECLProcess_INSTANCE1000_CenterSingleToMultiString'].set_centerstring(X3DJSON.nodeUtil('DECLProcess_INSTANCE1000_CenterSensor','enteredText'), __eventTime);
}, false);
			X3DJSON['Obj']['DECLProcess_INSTANCE1000_CenterSingleToMultiString'].set_centerstring(X3DJSON.nodeUtil('DECLProcess_INSTANCE1000_CenterSensor','enteredText'), __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE1000_CenterSingleToMultiString'] === 'undefined') {
X3DJSON['Obj']['DECLProcess_INSTANCE1000_CenterSingleToMultiString'] = {};
}

if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE1000_CenterSingleToMultiString']['ACTION']['centerlines'] === 'undefined') {
X3DJSON['Obj']['DECLProcess_INSTANCE1000_CenterSingleToMultiString']['ACTION']['centerlines'] = [];
}
X3DJSON['Obj']['DECLProcess_INSTANCE1000_CenterSingleToMultiString']['ACTION']['centerlines'].push(function(property, value) {
		if (property === 'centerlines') {
			X3DJSON.nodeUtil('DECLProcess_INSTANCE1000_CenterString','string',typeof X3DJSON['Obj']['DECLProcess_INSTANCE1000_CenterSingleToMultiString'].centerlines === "function" ? X3DJSON['Obj']['DECLProcess_INSTANCE1000_CenterSingleToMultiString'].centerlines() : X3DJSON['Obj']['DECLProcess_INSTANCE1000_CenterSingleToMultiString'].centerlines, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLProcess_INSTANCE1000_CenterString','string',typeof X3DJSON['Obj']['DECLProcess_INSTANCE1000_CenterSingleToMultiString'].centerlines === "function" ? X3DJSON['Obj']['DECLProcess_INSTANCE1000_CenterSingleToMultiString'].centerlines() : X3DJSON['Obj']['DECLProcess_INSTANCE1000_CenterSingleToMultiString'].centerlines, __eventTime);
X3DJSON.nodeUtil('DECLProcess_INSTANCE1000_CenterTouch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('DECLProcess_INSTANCE1000_RightSensor').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['DECLProcess_INSTANCE1000_RightSingleToMultiString'].set_rightstring(X3DJSON.nodeUtil('DECLProcess_INSTANCE1000_RightSensor','enteredText'), __eventTime);
}, false);
			X3DJSON['Obj']['DECLProcess_INSTANCE1000_RightSingleToMultiString'].set_rightstring(X3DJSON.nodeUtil('DECLProcess_INSTANCE1000_RightSensor','enteredText'), __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE1000_RightSingleToMultiString'] === 'undefined') {
X3DJSON['Obj']['DECLProcess_INSTANCE1000_RightSingleToMultiString'] = {};
}

if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE1000_RightSingleToMultiString']['ACTION']['rightlines'] === 'undefined') {
X3DJSON['Obj']['DECLProcess_INSTANCE1000_RightSingleToMultiString']['ACTION']['rightlines'] = [];
}
X3DJSON['Obj']['DECLProcess_INSTANCE1000_RightSingleToMultiString']['ACTION']['rightlines'].push(function(property, value) {
		if (property === 'rightlines') {
			X3DJSON.nodeUtil('DECLProcess_INSTANCE1000_RightString','string',typeof X3DJSON['Obj']['DECLProcess_INSTANCE1000_RightSingleToMultiString'].rightlines === "function" ? X3DJSON['Obj']['DECLProcess_INSTANCE1000_RightSingleToMultiString'].rightlines() : X3DJSON['Obj']['DECLProcess_INSTANCE1000_RightSingleToMultiString'].rightlines, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLProcess_INSTANCE1000_RightString','string',typeof X3DJSON['Obj']['DECLProcess_INSTANCE1000_RightSingleToMultiString'].rightlines === "function" ? X3DJSON['Obj']['DECLProcess_INSTANCE1000_RightSingleToMultiString'].rightlines() : X3DJSON['Obj']['DECLProcess_INSTANCE1000_RightSingleToMultiString'].rightlines, __eventTime);
X3DJSON.nodeUtil('DECLProcess_INSTANCE1000_RightTouch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('DECLProcess_INSTANCE1000_UpSensor').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['DECLProcess_INSTANCE1000_UpSingleToMultiString'].set_upstring(X3DJSON.nodeUtil('DECLProcess_INSTANCE1000_UpSensor','enteredText'), __eventTime);
}, false);
			X3DJSON['Obj']['DECLProcess_INSTANCE1000_UpSingleToMultiString'].set_upstring(X3DJSON.nodeUtil('DECLProcess_INSTANCE1000_UpSensor','enteredText'), __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE1000_UpSingleToMultiString'] === 'undefined') {
X3DJSON['Obj']['DECLProcess_INSTANCE1000_UpSingleToMultiString'] = {};
}

if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE1000_UpSingleToMultiString']['ACTION']['uplines'] === 'undefined') {
X3DJSON['Obj']['DECLProcess_INSTANCE1000_UpSingleToMultiString']['ACTION']['uplines'] = [];
}
X3DJSON['Obj']['DECLProcess_INSTANCE1000_UpSingleToMultiString']['ACTION']['uplines'].push(function(property, value) {
		if (property === 'uplines') {
			X3DJSON.nodeUtil('DECLProcess_INSTANCE1000_UpString','string',typeof X3DJSON['Obj']['DECLProcess_INSTANCE1000_UpSingleToMultiString'].uplines === "function" ? X3DJSON['Obj']['DECLProcess_INSTANCE1000_UpSingleToMultiString'].uplines() : X3DJSON['Obj']['DECLProcess_INSTANCE1000_UpSingleToMultiString'].uplines, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLProcess_INSTANCE1000_UpString','string',typeof X3DJSON['Obj']['DECLProcess_INSTANCE1000_UpSingleToMultiString'].uplines === "function" ? X3DJSON['Obj']['DECLProcess_INSTANCE1000_UpSingleToMultiString'].uplines() : X3DJSON['Obj']['DECLProcess_INSTANCE1000_UpSingleToMultiString'].uplines, __eventTime);
X3DJSON.nodeUtil('DECLProcess_INSTANCE1000_UpTouch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('DECLProcess_INSTANCE2000_CenterSensor').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['DECLProcess_INSTANCE2000_CenterSingleToMultiString'].set_centerstring(X3DJSON.nodeUtil('DECLProcess_INSTANCE2000_CenterSensor','enteredText'), __eventTime);
}, false);
			X3DJSON['Obj']['DECLProcess_INSTANCE2000_CenterSingleToMultiString'].set_centerstring(X3DJSON.nodeUtil('DECLProcess_INSTANCE2000_CenterSensor','enteredText'), __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE2000_CenterSingleToMultiString'] === 'undefined') {
X3DJSON['Obj']['DECLProcess_INSTANCE2000_CenterSingleToMultiString'] = {};
}

if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE2000_CenterSingleToMultiString']['ACTION']['centerlines'] === 'undefined') {
X3DJSON['Obj']['DECLProcess_INSTANCE2000_CenterSingleToMultiString']['ACTION']['centerlines'] = [];
}
X3DJSON['Obj']['DECLProcess_INSTANCE2000_CenterSingleToMultiString']['ACTION']['centerlines'].push(function(property, value) {
		if (property === 'centerlines') {
			X3DJSON.nodeUtil('DECLProcess_INSTANCE2000_CenterString','string',typeof X3DJSON['Obj']['DECLProcess_INSTANCE2000_CenterSingleToMultiString'].centerlines === "function" ? X3DJSON['Obj']['DECLProcess_INSTANCE2000_CenterSingleToMultiString'].centerlines() : X3DJSON['Obj']['DECLProcess_INSTANCE2000_CenterSingleToMultiString'].centerlines, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLProcess_INSTANCE2000_CenterString','string',typeof X3DJSON['Obj']['DECLProcess_INSTANCE2000_CenterSingleToMultiString'].centerlines === "function" ? X3DJSON['Obj']['DECLProcess_INSTANCE2000_CenterSingleToMultiString'].centerlines() : X3DJSON['Obj']['DECLProcess_INSTANCE2000_CenterSingleToMultiString'].centerlines, __eventTime);
X3DJSON.nodeUtil('DECLProcess_INSTANCE2000_CenterTouch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('DECLProcess_INSTANCE2000_RightSensor').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['DECLProcess_INSTANCE2000_RightSingleToMultiString'].set_rightstring(X3DJSON.nodeUtil('DECLProcess_INSTANCE2000_RightSensor','enteredText'), __eventTime);
}, false);
			X3DJSON['Obj']['DECLProcess_INSTANCE2000_RightSingleToMultiString'].set_rightstring(X3DJSON.nodeUtil('DECLProcess_INSTANCE2000_RightSensor','enteredText'), __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE2000_RightSingleToMultiString'] === 'undefined') {
X3DJSON['Obj']['DECLProcess_INSTANCE2000_RightSingleToMultiString'] = {};
}

if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE2000_RightSingleToMultiString']['ACTION']['rightlines'] === 'undefined') {
X3DJSON['Obj']['DECLProcess_INSTANCE2000_RightSingleToMultiString']['ACTION']['rightlines'] = [];
}
X3DJSON['Obj']['DECLProcess_INSTANCE2000_RightSingleToMultiString']['ACTION']['rightlines'].push(function(property, value) {
		if (property === 'rightlines') {
			X3DJSON.nodeUtil('DECLProcess_INSTANCE2000_RightString','string',typeof X3DJSON['Obj']['DECLProcess_INSTANCE2000_RightSingleToMultiString'].rightlines === "function" ? X3DJSON['Obj']['DECLProcess_INSTANCE2000_RightSingleToMultiString'].rightlines() : X3DJSON['Obj']['DECLProcess_INSTANCE2000_RightSingleToMultiString'].rightlines, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLProcess_INSTANCE2000_RightString','string',typeof X3DJSON['Obj']['DECLProcess_INSTANCE2000_RightSingleToMultiString'].rightlines === "function" ? X3DJSON['Obj']['DECLProcess_INSTANCE2000_RightSingleToMultiString'].rightlines() : X3DJSON['Obj']['DECLProcess_INSTANCE2000_RightSingleToMultiString'].rightlines, __eventTime);
X3DJSON.nodeUtil('DECLProcess_INSTANCE2000_RightTouch').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('DECLProcess_INSTANCE2000_UpSensor').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['DECLProcess_INSTANCE2000_UpSingleToMultiString'].set_upstring(X3DJSON.nodeUtil('DECLProcess_INSTANCE2000_UpSensor','enteredText'), __eventTime);
}, false);
			X3DJSON['Obj']['DECLProcess_INSTANCE2000_UpSingleToMultiString'].set_upstring(X3DJSON.nodeUtil('DECLProcess_INSTANCE2000_UpSensor','enteredText'), __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE2000_UpSingleToMultiString'] === 'undefined') {
X3DJSON['Obj']['DECLProcess_INSTANCE2000_UpSingleToMultiString'] = {};
}

if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE2000_UpSingleToMultiString']['ACTION']['uplines'] === 'undefined') {
X3DJSON['Obj']['DECLProcess_INSTANCE2000_UpSingleToMultiString']['ACTION']['uplines'] = [];
}
X3DJSON['Obj']['DECLProcess_INSTANCE2000_UpSingleToMultiString']['ACTION']['uplines'].push(function(property, value) {
		if (property === 'uplines') {
			X3DJSON.nodeUtil('DECLProcess_INSTANCE2000_UpString','string',typeof X3DJSON['Obj']['DECLProcess_INSTANCE2000_UpSingleToMultiString'].uplines === "function" ? X3DJSON['Obj']['DECLProcess_INSTANCE2000_UpSingleToMultiString'].uplines() : X3DJSON['Obj']['DECLProcess_INSTANCE2000_UpSingleToMultiString'].uplines, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLProcess_INSTANCE2000_UpString','string',typeof X3DJSON['Obj']['DECLProcess_INSTANCE2000_UpSingleToMultiString'].uplines === "function" ? X3DJSON['Obj']['DECLProcess_INSTANCE2000_UpSingleToMultiString'].uplines() : X3DJSON['Obj']['DECLProcess_INSTANCE2000_UpSingleToMultiString'].uplines, __eventTime);
X3DJSON.nodeUtil('DECLProcess_INSTANCE2000_UpTouch').addEventListener('outputchange', function(event) {
}, false);
			X3DJSON['Obj']['DECLProcess_INSTANCE_CenterSingleToMultiString'].set_centerstring(X3DJSON.nodeUtil('DECLProcess_INSTANCE_CenterSensor','enteredText'), __eventTime);
			X3DJSON.nodeUtil('DECLProcess_INSTANCE_CenterString','string',typeof X3DJSON['Obj']['DECLProcess_INSTANCE_CenterSingleToMultiString'].centerlines === "function" ? X3DJSON['Obj']['DECLProcess_INSTANCE_CenterSingleToMultiString'].centerlines() : X3DJSON['Obj']['DECLProcess_INSTANCE_CenterSingleToMultiString'].centerlines, __eventTime);
			X3DJSON['Obj']['DECLProcess_INSTANCE_RightSingleToMultiString'].set_rightstring(X3DJSON.nodeUtil('DECLProcess_INSTANCE_RightSensor','enteredText'), __eventTime);
			X3DJSON.nodeUtil('DECLProcess_INSTANCE_RightString','string',typeof X3DJSON['Obj']['DECLProcess_INSTANCE_RightSingleToMultiString'].rightlines === "function" ? X3DJSON['Obj']['DECLProcess_INSTANCE_RightSingleToMultiString'].rightlines() : X3DJSON['Obj']['DECLProcess_INSTANCE_RightSingleToMultiString'].rightlines, __eventTime);
			X3DJSON['Obj']['DECLProcess_INSTANCE_UpSingleToMultiString'].set_upstring(X3DJSON.nodeUtil('DECLProcess_INSTANCE_UpSensor','enteredText'), __eventTime);
			X3DJSON.nodeUtil('DECLProcess_INSTANCE_UpString','string',typeof X3DJSON['Obj']['DECLProcess_INSTANCE_UpSingleToMultiString'].uplines === "function" ? X3DJSON['Obj']['DECLProcess_INSTANCE_UpSingleToMultiString'].uplines() : X3DJSON['Obj']['DECLProcess_INSTANCE_UpSingleToMultiString'].uplines, __eventTime);
			X3DJSON['Obj']['DECLProcess_INSTANCE1000_CenterSingleToMultiString'].set_centerstring(X3DJSON.nodeUtil('DECLProcess_INSTANCE1000_CenterSensor','enteredText'), __eventTime);
			X3DJSON.nodeUtil('DECLProcess_INSTANCE1000_CenterString','string',typeof X3DJSON['Obj']['DECLProcess_INSTANCE1000_CenterSingleToMultiString'].centerlines === "function" ? X3DJSON['Obj']['DECLProcess_INSTANCE1000_CenterSingleToMultiString'].centerlines() : X3DJSON['Obj']['DECLProcess_INSTANCE1000_CenterSingleToMultiString'].centerlines, __eventTime);
			X3DJSON['Obj']['DECLProcess_INSTANCE1000_RightSingleToMultiString'].set_rightstring(X3DJSON.nodeUtil('DECLProcess_INSTANCE1000_RightSensor','enteredText'), __eventTime);
			X3DJSON.nodeUtil('DECLProcess_INSTANCE1000_RightString','string',typeof X3DJSON['Obj']['DECLProcess_INSTANCE1000_RightSingleToMultiString'].rightlines === "function" ? X3DJSON['Obj']['DECLProcess_INSTANCE1000_RightSingleToMultiString'].rightlines() : X3DJSON['Obj']['DECLProcess_INSTANCE1000_RightSingleToMultiString'].rightlines, __eventTime);
			X3DJSON['Obj']['DECLProcess_INSTANCE1000_UpSingleToMultiString'].set_upstring(X3DJSON.nodeUtil('DECLProcess_INSTANCE1000_UpSensor','enteredText'), __eventTime);
			X3DJSON.nodeUtil('DECLProcess_INSTANCE1000_UpString','string',typeof X3DJSON['Obj']['DECLProcess_INSTANCE1000_UpSingleToMultiString'].uplines === "function" ? X3DJSON['Obj']['DECLProcess_INSTANCE1000_UpSingleToMultiString'].uplines() : X3DJSON['Obj']['DECLProcess_INSTANCE1000_UpSingleToMultiString'].uplines, __eventTime);
			X3DJSON['Obj']['DECLProcess_INSTANCE2000_CenterSingleToMultiString'].set_centerstring(X3DJSON.nodeUtil('DECLProcess_INSTANCE2000_CenterSensor','enteredText'), __eventTime);
			X3DJSON.nodeUtil('DECLProcess_INSTANCE2000_CenterString','string',typeof X3DJSON['Obj']['DECLProcess_INSTANCE2000_CenterSingleToMultiString'].centerlines === "function" ? X3DJSON['Obj']['DECLProcess_INSTANCE2000_CenterSingleToMultiString'].centerlines() : X3DJSON['Obj']['DECLProcess_INSTANCE2000_CenterSingleToMultiString'].centerlines, __eventTime);
			X3DJSON['Obj']['DECLProcess_INSTANCE2000_RightSingleToMultiString'].set_rightstring(X3DJSON.nodeUtil('DECLProcess_INSTANCE2000_RightSensor','enteredText'), __eventTime);
			X3DJSON.nodeUtil('DECLProcess_INSTANCE2000_RightString','string',typeof X3DJSON['Obj']['DECLProcess_INSTANCE2000_RightSingleToMultiString'].rightlines === "function" ? X3DJSON['Obj']['DECLProcess_INSTANCE2000_RightSingleToMultiString'].rightlines() : X3DJSON['Obj']['DECLProcess_INSTANCE2000_RightSingleToMultiString'].rightlines, __eventTime);
			X3DJSON['Obj']['DECLProcess_INSTANCE2000_UpSingleToMultiString'].set_upstring(X3DJSON.nodeUtil('DECLProcess_INSTANCE2000_UpSensor','enteredText'), __eventTime);
			X3DJSON.nodeUtil('DECLProcess_INSTANCE2000_UpString','string',typeof X3DJSON['Obj']['DECLProcess_INSTANCE2000_UpSingleToMultiString'].uplines === "function" ? X3DJSON['Obj']['DECLProcess_INSTANCE2000_UpSingleToMultiString'].uplines() : X3DJSON['Obj']['DECLProcess_INSTANCE2000_UpSingleToMultiString'].uplines, __eventTime);