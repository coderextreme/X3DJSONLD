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
if (typeof X3DJSON['Scene../data/Connectors.json'] === 'undefined') {
	X3DJSON['Scene../data/Connectors.json'] = {};
}

if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/Connectors.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/Connectors.json'] = {};
}

X3DJSON['Script']['Scene']['../data/Connectors.json']['RoundedRectangle2D'] = function() {
	this.set_cornerDimension = function (value) {
		try {
			this.proxy.cornerDimension = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting cornerDimension '+e);
			console.error('Problems setting cornerDimension',e);
		}
	};
	this.cornerDimension_changed = function () {
		var value = this.cornerDimension;
		return value;
	};
	try {
		this.cornerDimension = new SFFloat(10);
	} catch (e) {
		console.log('Problems setting cornerDimension '+e);
		console.error('Problems setting cornerDimension',e);
	}
	this.set_cornerRadius = function (value) {
		try {
			this.proxy.cornerRadius = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting cornerRadius '+e);
			console.error('Problems setting cornerRadius',e);
		}
	};
	this.cornerRadius_changed = function () {
		var value = this.cornerRadius;
		return value;
	};
	try {
		this.cornerRadius = new SFFloat();
	} catch (e) {
		console.log('Problems setting cornerRadius '+e);
		console.error('Problems setting cornerRadius',e);
	}
	this.set_size = function (value) {
		try {
			this.proxy.size = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting size '+e);
			console.error('Problems setting size',e);
		}
	};
	this.size_changed = function () {
		var value = this.size;
		return value;
	};
	try {
		this.size = new SFVec2f();
	} catch (e) {
		console.log('Problems setting size '+e);
		console.error('Problems setting size',e);
	}
	this.set_geometry = function (value) {
		try {
			this.proxy.geometry = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting geometry '+e);
			console.error('Problems setting geometry',e);
		}
	};
	this.geometry_changed = function () {
		var value = this.geometry;
		return value;
	};
	try {
		this.geometry = X3DJSON.nodeUtil("Scene","Geometry");
	} catch (e) {
		console.log('Problems setting geometry '+e);
		console.error('Problems setting geometry',e);
	}

vrmlscript:

	this.initialize = function ()
{
	var point         = new SFVec3f (this.proxy.cornerRadius, 0, 0);
	var startRotation = new SFRotation ();
	var endRotation   = new SFRotation (0, 0, 1, Math .PI / 2);
	var corner        = new MFVec3f ();
	var coordIndex    = new MFInt32 ();
	var points        = new MFVec3f ();

	for (var i = 0; i < this.proxy.cornerDimension * 4; ++ i)
		coordIndex [coordIndex .length] = i;

	X3DJSON.nodeUtil("Scene","Geometry", "coordIndex",  coordIndex);

	for (var i = 0; i < this.proxy.cornerDimension; ++i)
		corner [i] = startRotation .slerp (endRotation, i / (this.proxy.cornerDimension - 1)) .multVec (point);

	var translation = new SFVec3f (this.proxy.size .x / 2 - this.proxy.cornerRadius, this.proxy.size .y / 2 - this.proxy.cornerRadius, 0);

	for (var i = 0; i < this.proxy.cornerDimension; ++ i)
		points [points .length] = corner [i] .add (translation);

	var translation = new SFVec3f (-this.proxy.size .x / 2 + this.proxy.cornerRadius, this.proxy.size .y / 2 - this.proxy.cornerRadius, 0);
	var rotation    = new SFRotation (0, 0, 1, Math .PI * 0.5);

	for (var i = 0; i < this.proxy.cornerDimension; ++ i)
		points [points .length] = rotation .multVec (corner [i]) .add (translation);

	var translation = new SFVec3f (-this.proxy.size .x / 2 + this.proxy.cornerRadius, -this.proxy.size .y / 2 + this.proxy.cornerRadius, 0);
	var rotation    = new SFRotation (0, 0, 1, Math .PI);

	for (var i = 0; i < this.proxy.cornerDimension; ++ i)
		points [points .length] = rotation .multVec (corner [i]) .add (translation);

	var translation = new SFVec3f (this.proxy.size .x / 2 - this.proxy.cornerRadius, -this.proxy.size .y / 2 + this.proxy.cornerRadius, 0);
	var rotation    = new SFRotation (0, 0, 1, Math .PI * 1.5);

	for (var i = 0; i < this.proxy.cornerDimension; ++ i)
		points [points .length] = rotation .multVec (corner [i]) .add (translation);

	X3DJSON.nodeUtil("Scene","Geometry", "coord") .point = points;
}

;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Connectors.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Connectors.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/Connectors.json']['RoundedRectangle2D'] = new X3DJSON['Script']['Scene']['../data/Connectors.json']['RoundedRectangle2D']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Connectors.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Connectors.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Connectors.json']['RoundedRectangle2D'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Connectors.json']['RoundedRectangle2D'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/Connectors.json']['RoundedRectangle2D']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Connectors.json']['RoundedRectangle2D']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/Connectors.json']['RoundedRectangle2D'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/Connectors.json']['RoundedRectangle2D']['ACTION'],X3DJSON['Obj']['Scene']['../data/Connectors.json']['RoundedRectangle2D']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/Connectors.json']['RoundedRectangle2D'].initialize === "function") X3DJSON['Obj']['Scene']['../data/Connectors.json']['RoundedRectangle2D'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/Connectors.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/Connectors.json'] = {};
}

X3DJSON['Script']['Scene']['../data/Connectors.json'][''] = function() {
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
		this.translation = new SFVec3f();
	} catch (e) {
		console.log('Problems setting translation '+e);
		console.error('Problems setting translation',e);
	}
	this.set_sensor = function (value) {
		try {
			this.proxy.sensor = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting sensor '+e);
			console.error('Problems setting sensor',e);
		}
	};
	this.sensor_changed = function () {
		var value = this.sensor;
		return value;
	};
	try {
		this.sensor = X3DJSON.nodeUtil("Scene","PlaneSensor");
	} catch (e) {
		console.log('Problems setting sensor '+e);
		console.error('Problems setting sensor',e);
	}
	this.set_transform = function (value) {
		try {
			this.proxy.transform = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting transform '+e);
			console.error('Problems setting transform',e);
		}
	};
	this.transform_changed = function () {
		var value = this.transform;
		return value;
	};
	try {
		this.transform = X3DJSON.nodeUtil("Scene","Node");
	} catch (e) {
		console.log('Problems setting transform '+e);
		console.error('Problems setting transform',e);
	}

vrmlscript:
	this.initialize = function ()
{
	X3DJSON.nodeUtil("Scene","PlaneSensor", "offset",  this.proxy.translation);
}

;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Connectors.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Connectors.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/Connectors.json'][''] = new X3DJSON['Script']['Scene']['../data/Connectors.json']['']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Connectors.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Connectors.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Connectors.json'][''] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Connectors.json'][''] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/Connectors.json']['']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Connectors.json']['']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/Connectors.json'][''].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/Connectors.json']['']['ACTION'],X3DJSON['Obj']['Scene']['../data/Connectors.json']['']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/Connectors.json'][''].initialize === "function") X3DJSON['Obj']['Scene']['../data/Connectors.json'][''].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/Connectors.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/Connectors.json'] = {};
}

X3DJSON['Script']['Scene']['../data/Connectors.json']['Route'] = function() {
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
		this.translation = undefined;
	} catch (e) {
		console.log('Problems setting translation '+e);
		console.error('Problems setting translation',e);
	}
	this.set_routeDimension = function (value) {
		try {
			this.proxy.routeDimension = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting routeDimension '+e);
			console.error('Problems setting routeDimension',e);
		}
	};
	this.routeDimension_changed = function () {
		var value = this.routeDimension;
		return value;
	};
	try {
		this.routeDimension = new SFInt32(21);
	} catch (e) {
		console.log('Problems setting routeDimension '+e);
		console.error('Problems setting routeDimension',e);
	}
	this.set_output = function (value) {
		try {
			this.proxy.output = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting output '+e);
			console.error('Problems setting output',e);
		}
	};
	this.output_changed = function () {
		var value = this.output;
		return value;
	};
	try {
		this.output = new SFNode();
	} catch (e) {
		console.log('Problems setting output '+e);
		console.error('Problems setting output',e);
	}
	this.set_input = function (value) {
		try {
			this.proxy.input = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting input '+e);
			console.error('Problems setting input',e);
		}
	};
	this.input_changed = function () {
		var value = this.input;
		return value;
	};
	try {
		this.input = new SFNode();
	} catch (e) {
		console.log('Problems setting input '+e);
		console.error('Problems setting input',e);
	}
	this.set_geometry = function (value) {
		try {
			this.proxy.geometry = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting geometry '+e);
			console.error('Problems setting geometry',e);
		}
	};
	this.geometry_changed = function () {
		var value = this.geometry;
		return value;
	};
	try {
		this.geometry = X3DJSON.nodeUtil("Scene","Geometry_1");
	} catch (e) {
		console.log('Problems setting geometry '+e);
		console.error('Problems setting geometry',e);
	}
	this.set_self = function (value) {
		try {
			this.proxy.self = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting self '+e);
			console.error('Problems setting self',e);
		}
	};
	this.self_changed = function () {
		var value = this.self;
		return value;
	};
	try {
		this.self = X3DJSON.nodeUtil("Scene","Route");
	} catch (e) {
		console.log('Problems setting self '+e);
		console.error('Problems setting self',e);
	}

vrmlscript:
	this.initialize = function ()
{
	Browser .addRoute (this.proxy.output, 'translation_changed', X3DJSON.nodeUtil("Scene","Route", ""), 'this.proxy.set_translation');
	Browser .addRoute (this.proxy.input,  'translation_changed', X3DJSON.nodeUtil("Scene","Route", ""), 'this.proxy.set_translation');

	this.proxy.set_translation ();
}
;

	this.set_translation = function ()
{
	X3DJSON.nodeUtil("Scene","Geometry_1", "vertexCount") [0] = this.proxy.routeDimension;

	var outPoint = this.proxy.output .translation .add (new SFVec3f ( 1, 0, 0));
	var inPoint  = this.proxy.input  .translation .add (new SFVec3f (-1, 0, 0));

	var w = inPoint .x - outPoint .x;
	var h = outPoint .y - inPoint .y;

	for (var i = 0; i < this.proxy.routeDimension; ++ i)
	{
		var t = i / (this.proxy.routeDimension - 1);
		var y = h / 2 * (Math .cos (t * Math .PI) - 1);

		X3DJSON.nodeUtil("Scene","Geometry_1", "coord") .point [i] = outPoint .add (new SFVec3f (t * w, y, 0));
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
if (typeof X3DJSON['Obj']['Scene']['../data/Connectors.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Connectors.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/Connectors.json']['Route'] = new X3DJSON['Script']['Scene']['../data/Connectors.json']['Route']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Connectors.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Connectors.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Connectors.json']['Route'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Connectors.json']['Route'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/Connectors.json']['Route']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Connectors.json']['Route']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/Connectors.json']['Route'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/Connectors.json']['Route']['ACTION'],X3DJSON['Obj']['Scene']['../data/Connectors.json']['Route']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/Connectors.json']['Route'].initialize === "function") X3DJSON['Obj']['Scene']['../data/Connectors.json']['Route'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/Connectors.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/Connectors.json'] = {};
}

X3DJSON['Script']['Scene']['../data/Connectors.json']['Route'] = function() {
};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Connectors.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Connectors.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/Connectors.json']['Route'] = new X3DJSON['Script']['Scene']['../data/Connectors.json']['Route']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Connectors.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Connectors.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Connectors.json']['Route'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Connectors.json']['Route'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/Connectors.json']['Route']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Connectors.json']['Route']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/Connectors.json']['Route'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/Connectors.json']['Route']['ACTION'],X3DJSON['Obj']['Scene']['../data/Connectors.json']['Route']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/Connectors.json']['Route'].initialize === "function") X3DJSON['Obj']['Scene']['../data/Connectors.json']['Route'].initialize();
    if (X3DJSON.nodeUtil("Scene","PlaneSensor")) {
X3DJSON.nodeUtil("Scene","PlaneSensor").addEventListener('outputchange', function(event) {
}, false);
}
