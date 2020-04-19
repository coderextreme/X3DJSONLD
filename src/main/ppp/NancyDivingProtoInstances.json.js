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
if (typeof X3DJSON['Scene../data/NancyDivingProtoInstances.json'] === 'undefined') {
	X3DJSON['Scene../data/NancyDivingProtoInstances.json'] = {};
}

if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/NancyDivingProtoInstances.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/NancyDivingProtoInstances.json'] = {};
}

X3DJSON['Script']['Scene']['../data/NancyDivingProtoInstances.json']['DECLViewPositionOrientation_ExampleViewPositionOrientation_OutputPositionOrientation'] = function() {
	this.set_traceEnabled = function (value) {
		try {
			this.proxy.traceEnabled = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			alert('Problems setting traceEnabled '+e);
			console.error('Problems setting traceEnabled',e);
		}
	};
	this.traceEnabled_changed = function () {
		var value = this.traceEnabled;
		return value;
	};
	try {
		this.traceEnabled = new SFBool(true);
	} catch (e) {
		alert('Problems setting traceEnabled '+e);
		console.error('Problems setting traceEnabled',e);
	}
	this.set_traceEnabled = function (value) {
		try {
			this.proxy.traceEnabled = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			alert('Problems setting traceEnabled '+e);
			console.error('Problems setting traceEnabled',e);
		}
	};
	this.traceEnabled_changed = function () {
		var value = this.traceEnabled;
		return value;
	};
	try {
		this.traceEnabled = new SFBool(true);
	} catch (e) {
		alert('Problems setting traceEnabled '+e);
		console.error('Problems setting traceEnabled',e);
	}
	this.set_position = function (value) {
		try {
			this.proxy.position = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			alert('Problems setting position '+e);
			console.error('Problems setting position',e);
		}
	};
	this.position_changed = function () {
		var value = this.position;
		return value;
	};
	try {
		this.position = new SFVec3f(0,0,0);
	} catch (e) {
		alert('Problems setting position '+e);
		console.error('Problems setting position',e);
	}
	this.set_orientation = function (value) {
		try {
			this.proxy.orientation = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			alert('Problems setting orientation '+e);
			console.error('Problems setting orientation',e);
		}
	};
	this.orientation_changed = function () {
		var value = this.orientation;
		return value;
	};
	try {
		this.orientation = new SFRotation(0,1,0,0);
	} catch (e) {
		alert('Problems setting orientation '+e);
		console.error('Problems setting orientation',e);
	}
	this.set_position = function (value) {
		try {
			this.proxy.position = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			alert('Problems setting position '+e);
			console.error('Problems setting position',e);
		}
	};
	this.position_changed = function () {
		var value = this.position;
		return value;
	};
	try {
		this.position = new SFVec3f(0,0,0);
	} catch (e) {
		alert('Problems setting position '+e);
		console.error('Problems setting position',e);
	}
	this.set_orientation = function (value) {
		try {
			this.proxy.orientation = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			alert('Problems setting orientation '+e);
			console.error('Problems setting orientation',e);
		}
	};
	this.orientation_changed = function () {
		var value = this.orientation;
		return value;
	};
	try {
		this.orientation = new SFRotation(0,1,0,0);
	} catch (e) {
		alert('Problems setting orientation '+e);
		console.error('Problems setting orientation',e);
	}
	this.set_position = function (value) {
		try {
			this.proxy.position = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			alert('Problems setting position '+e);
			console.error('Problems setting position',e);
		}
	};
	this.position_changed = function () {
		var value = this.position;
		return value;
	};
	try {
		this.position = new SFVec3f(0,0,0);
	} catch (e) {
		alert('Problems setting position '+e);
		console.error('Problems setting position',e);
	}
	this.set_orientation = function (value) {
		try {
			this.proxy.orientation = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			alert('Problems setting orientation '+e);
			console.error('Problems setting orientation',e);
		}
	};
	this.orientation_changed = function () {
		var value = this.orientation;
		return value;
	};
	try {
		this.orientation = new SFRotation(0,1,0,0);
	} catch (e) {
		alert('Problems setting orientation '+e);
		console.error('Problems setting orientation',e);
	}
	this.set_outputViewpointString = function (value) {
		try {
			this.proxy.outputViewpointString = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			alert('Problems setting outputViewpointString '+e);
			console.error('Problems setting outputViewpointString',e);
		}
	};
	this.outputViewpointString_changed = function () {
		var value = this.outputViewpointString;
		return value;
	};
	try {
		this.outputViewpointString = new MFString();
	} catch (e) {
		alert('Problems setting outputViewpointString '+e);
		console.error('Problems setting outputViewpointString',e);
	}


ecmascript:

	this.roundoff = function (value, digits) // for local use only
{
	var resolution = 1;
	for (i = 1; i <= digits; i++ )
	{
		resolution *= 10;
	}
	return Math.round (value*resolution) / resolution; // round to resolution
};

	this.outputViewpoint = function ()
{
  var holdString = 
        '<Viewpoint this.proxy.position="' +
		this.roundoff (this.proxy.position.x, 1) + ' ' +
		this.roundoff (this.proxy.position.y, 1) + ' ' +
		this.roundoff (this.proxy.position.z, 1) +
        '" this.proxy.orientation="' +
		this.roundoff (this.proxy.orientation.x, 3) + ' ' +
		this.roundoff (this.proxy.orientation.y, 3) + ' ' +
		this.roundoff (this.proxy.orientation.z, 3) + ' ' +
		this.roundoff (this.proxy.orientation.angle, 4) + '"/>' ;
   this.tracePrint (holdString);
   this.proxy.outputViewpointString = new MFString (holdString);
};

	this.set_position = function (value)
{
	this.proxy.position = value; // save persistent value
	this.proxy.position_changed = this.proxy.position; // output event
	this.outputViewpoint ();
};

	this.set_orientation = function (value)
{
	this.proxy.orientation = value; // save persistent value
	this.proxy.orientation_changed = this.proxy.orientation; // output event
	this.outputViewpoint ();
};

	this.set_traceEnabled = function (value)
{
	this.proxy.traceEnabled = value;
	this.alwaysPrint ('this.proxy.traceEnabled=' + this.proxy.traceEnabled);
};

	this.alwaysPrint = function (text)
{
	console.error ('[ViewPositionOrientation] ' + text + '');
};

	this.tracePrint = function (text)
{
	if (this.proxy.traceEnabled) this.alwaysPrint (text);
}

;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLViewPositionOrientation_ExampleViewPositionOrientation_OutputPositionOrientation'] = new X3DJSON['Script']['Scene']['../data/NancyDivingProtoInstances.json']['DECLViewPositionOrientation_ExampleViewPositionOrientation_OutputPositionOrientation']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLViewPositionOrientation_ExampleViewPositionOrientation_OutputPositionOrientation'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLViewPositionOrientation_ExampleViewPositionOrientation_OutputPositionOrientation'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLViewPositionOrientation_ExampleViewPositionOrientation_OutputPositionOrientation']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLViewPositionOrientation_ExampleViewPositionOrientation_OutputPositionOrientation']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLViewPositionOrientation_ExampleViewPositionOrientation_OutputPositionOrientation'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLViewPositionOrientation_ExampleViewPositionOrientation_OutputPositionOrientation']['ACTION'],X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLViewPositionOrientation_ExampleViewPositionOrientation_OutputPositionOrientation']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLViewPositionOrientation_ExampleViewPositionOrientation_OutputPositionOrientation'].initialize === "function") X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLViewPositionOrientation_ExampleViewPositionOrientation_OutputPositionOrientation'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/NancyDivingProtoInstances.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/NancyDivingProtoInstances.json'] = {};
}

X3DJSON['Script']['Scene']['../data/NancyDivingProtoInstances.json']['DECLViewPositionOrientation_INSTANCE_OutputPositionOrientation'] = function() {
	this.set_traceEnabled = function (value) {
		try {
			this.proxy.traceEnabled = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			alert('Problems setting traceEnabled '+e);
			console.error('Problems setting traceEnabled',e);
		}
	};
	this.traceEnabled_changed = function () {
		var value = this.traceEnabled;
		return value;
	};
	try {
		this.traceEnabled = new SFBool(true);
	} catch (e) {
		alert('Problems setting traceEnabled '+e);
		console.error('Problems setting traceEnabled',e);
	}
	this.set_traceEnabled = function (value) {
		try {
			this.proxy.traceEnabled = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			alert('Problems setting traceEnabled '+e);
			console.error('Problems setting traceEnabled',e);
		}
	};
	this.traceEnabled_changed = function () {
		var value = this.traceEnabled;
		return value;
	};
	try {
		this.traceEnabled = new SFBool(true);
	} catch (e) {
		alert('Problems setting traceEnabled '+e);
		console.error('Problems setting traceEnabled',e);
	}
	this.set_position = function (value) {
		try {
			this.proxy.position = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			alert('Problems setting position '+e);
			console.error('Problems setting position',e);
		}
	};
	this.position_changed = function () {
		var value = this.position;
		return value;
	};
	try {
		this.position = new SFVec3f(0,0,0);
	} catch (e) {
		alert('Problems setting position '+e);
		console.error('Problems setting position',e);
	}
	this.set_orientation = function (value) {
		try {
			this.proxy.orientation = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			alert('Problems setting orientation '+e);
			console.error('Problems setting orientation',e);
		}
	};
	this.orientation_changed = function () {
		var value = this.orientation;
		return value;
	};
	try {
		this.orientation = new SFRotation(0,1,0,0);
	} catch (e) {
		alert('Problems setting orientation '+e);
		console.error('Problems setting orientation',e);
	}
	this.set_position = function (value) {
		try {
			this.proxy.position = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			alert('Problems setting position '+e);
			console.error('Problems setting position',e);
		}
	};
	this.position_changed = function () {
		var value = this.position;
		return value;
	};
	try {
		this.position = new SFVec3f(0,0,0);
	} catch (e) {
		alert('Problems setting position '+e);
		console.error('Problems setting position',e);
	}
	this.set_orientation = function (value) {
		try {
			this.proxy.orientation = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			alert('Problems setting orientation '+e);
			console.error('Problems setting orientation',e);
		}
	};
	this.orientation_changed = function () {
		var value = this.orientation;
		return value;
	};
	try {
		this.orientation = new SFRotation(0,1,0,0);
	} catch (e) {
		alert('Problems setting orientation '+e);
		console.error('Problems setting orientation',e);
	}
	this.set_position = function (value) {
		try {
			this.proxy.position = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			alert('Problems setting position '+e);
			console.error('Problems setting position',e);
		}
	};
	this.position_changed = function () {
		var value = this.position;
		return value;
	};
	try {
		this.position = new SFVec3f(0,0,0);
	} catch (e) {
		alert('Problems setting position '+e);
		console.error('Problems setting position',e);
	}
	this.set_orientation = function (value) {
		try {
			this.proxy.orientation = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			alert('Problems setting orientation '+e);
			console.error('Problems setting orientation',e);
		}
	};
	this.orientation_changed = function () {
		var value = this.orientation;
		return value;
	};
	try {
		this.orientation = new SFRotation(0,1,0,0);
	} catch (e) {
		alert('Problems setting orientation '+e);
		console.error('Problems setting orientation',e);
	}
	this.set_outputViewpointString = function (value) {
		try {
			this.proxy.outputViewpointString = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			alert('Problems setting outputViewpointString '+e);
			console.error('Problems setting outputViewpointString',e);
		}
	};
	this.outputViewpointString_changed = function () {
		var value = this.outputViewpointString;
		return value;
	};
	try {
		this.outputViewpointString = new MFString();
	} catch (e) {
		alert('Problems setting outputViewpointString '+e);
		console.error('Problems setting outputViewpointString',e);
	}


ecmascript:

	this.roundoff = function (value, digits) // for local use only
{
	var resolution = 1;
	for (i = 1; i <= digits; i++ )
	{
		resolution *= 10;
	}
	return Math.round (value*resolution) / resolution; // round to resolution
};

	this.outputViewpoint = function ()
{
  var holdString = 
        '<Viewpoint this.proxy.position="' +
		this.roundoff (this.proxy.position.x, 1) + ' ' +
		this.roundoff (this.proxy.position.y, 1) + ' ' +
		this.roundoff (this.proxy.position.z, 1) +
        '" this.proxy.orientation="' +
		this.roundoff (this.proxy.orientation.x, 3) + ' ' +
		this.roundoff (this.proxy.orientation.y, 3) + ' ' +
		this.roundoff (this.proxy.orientation.z, 3) + ' ' +
		this.roundoff (this.proxy.orientation.angle, 4) + '"/>' ;
   this.tracePrint (holdString);
   this.proxy.outputViewpointString = new MFString (holdString);
};

	this.set_position = function (value)
{
	this.proxy.position = value; // save persistent value
	this.proxy.position_changed = this.proxy.position; // output event
	this.outputViewpoint ();
};

	this.set_orientation = function (value)
{
	this.proxy.orientation = value; // save persistent value
	this.proxy.orientation_changed = this.proxy.orientation; // output event
	this.outputViewpoint ();
};

	this.set_traceEnabled = function (value)
{
	this.proxy.traceEnabled = value;
	this.alwaysPrint ('this.proxy.traceEnabled=' + this.proxy.traceEnabled);
};

	this.alwaysPrint = function (text)
{
	console.error ('[ViewPositionOrientation] ' + text + '');
};

	this.tracePrint = function (text)
{
	if (this.proxy.traceEnabled) this.alwaysPrint (text);
}

;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLViewPositionOrientation_INSTANCE_OutputPositionOrientation'] = new X3DJSON['Script']['Scene']['../data/NancyDivingProtoInstances.json']['DECLViewPositionOrientation_INSTANCE_OutputPositionOrientation']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLViewPositionOrientation_INSTANCE_OutputPositionOrientation'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLViewPositionOrientation_INSTANCE_OutputPositionOrientation'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLViewPositionOrientation_INSTANCE_OutputPositionOrientation']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLViewPositionOrientation_INSTANCE_OutputPositionOrientation']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLViewPositionOrientation_INSTANCE_OutputPositionOrientation'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLViewPositionOrientation_INSTANCE_OutputPositionOrientation']['ACTION'],X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLViewPositionOrientation_INSTANCE_OutputPositionOrientation']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLViewPositionOrientation_INSTANCE_OutputPositionOrientation'].initialize === "function") X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLViewPositionOrientation_INSTANCE_OutputPositionOrientation'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/NancyDivingProtoInstances.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/NancyDivingProtoInstances.json'] = {};
}

X3DJSON['Script']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript'] = function() {
	this.set_keyValueR = function (value) {
		try {
			this.proxy.keyValueR = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			alert('Problems setting keyValueR '+e);
			console.error('Problems setting keyValueR',e);
		}
	};
	this.keyValueR_changed = function () {
		var value = this.keyValueR;
		return value;
	};
	try {
		this.keyValueR = new MFVec3f();
	} catch (e) {
		alert('Problems setting keyValueR '+e);
		console.error('Problems setting keyValueR',e);
	}
	this.set_keyValueL = function (value) {
		try {
			this.proxy.keyValueL = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			alert('Problems setting keyValueL '+e);
			console.error('Problems setting keyValueL',e);
		}
	};
	this.keyValueL_changed = function () {
		var value = this.keyValueL;
		return value;
	};
	try {
		this.keyValueL = new MFVec3f();
	} catch (e) {
		alert('Problems setting keyValueL '+e);
		console.error('Problems setting keyValueL',e);
	}
	this.set_fraction = function (value) {
		try {
			this.proxy.fraction = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			alert('Problems setting fraction '+e);
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
		alert('Problems setting fraction '+e);
		console.error('Problems setting fraction',e);
	}
	this.set_finL = function (value) {
		try {
			this.proxy.finL = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			alert('Problems setting finL '+e);
			console.error('Problems setting finL',e);
		}
	};
	this.finL_changed = function () {
		var value = this.finL;
		return value;
	};
	try {
		this.finL = new SFBool();
	} catch (e) {
		alert('Problems setting finL '+e);
		console.error('Problems setting finL',e);
	}
	this.set_finR = function (value) {
		try {
			this.proxy.finR = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			alert('Problems setting finR '+e);
			console.error('Problems setting finR',e);
		}
	};
	this.finR_changed = function () {
		var value = this.finR;
		return value;
	};
	try {
		this.finR = new SFBool();
	} catch (e) {
		alert('Problems setting finR '+e);
		console.error('Problems setting finR',e);
	}
	this.set_traceEnabled = function (value) {
		try {
			this.proxy.traceEnabled = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			alert('Problems setting traceEnabled '+e);
			console.error('Problems setting traceEnabled',e);
		}
	};
	this.traceEnabled_changed = function () {
		var value = this.traceEnabled;
		return value;
	};
	try {
		this.traceEnabled = new SFBool(true);
	} catch (e) {
		alert('Problems setting traceEnabled '+e);
		console.error('Problems setting traceEnabled',e);
	}


ecmascript:

var finWarpL;
var finWarpR;

	this.initialize = function ()
{
	finWarpL = 0;
	finWarpR = 0;
}
;

	this.finL = function (value, timeStamp)
{
	if (value == 0)
	{
		finWarpL = 0;
	}
	else
	{
		finWarpL = 1;
	}
	//print ('finWarpL' + finWarpL);
}			 ;

	this.finR = function (value, timeStamp)
{
	if (value == 0)
	{
		finWarpR = 0;
	}
	else
	{
		finWarpR = 1;
	}
	//print ('finWarpR' + finWarpR);
};

	this.finMove = function (fraction, timeStamp)
 {  	
	if (finWarpL == 1)
	{
		// level 3 (warp outside) Left					
		kVL7 = new SFVec3f(1.25, 0, 25);  
     		kVL8 = new SFVec3f(2.5, 0, 30);
      		kVL9 = new SFVec3f(3.25, 0, 34);			
	}	
	else 
	{		
		// level -2 (warp inside) Left					
		kVL7 = new SFVec3f(-1.25, 0, 25);  
     		kVL8 = new SFVec3f(-2.5, 0, 30);
      		kVL9 = new SFVec3f(-3.25, 0, 34);	
	}

	if (finWarpR == 0)
	{		
		// level  1 (warp outside ) Right    			
		kVR7 = new SFVec3f(1.25, 0, 25);  
     		kVR8 = new SFVec3f(2.5, 0, 30);
      		kVR9 = new SFVec3f(3.25, 0, 34);	  	
	
	}	
	else 
	{		
		// level  -2 ( warp inside) Right      				
		kVR7 = new SFVec3f(-1.25, 0, 25);  
     		kVR8 = new SFVec3f(-2.5, 0, 30);
      		kVR9 = new SFVec3f(-3.25, 0, 34);
	}

	// Left Fin (fixed spine)
	kVL1 = new SFVec3f(0, 0, 1);  
     	kVL2 = new SFVec3f(0, 0, 5);
      	kVL3 = new SFVec3f(0, 0, 8);
	kVL4 = new SFVec3f(0, 0, 12); 
	kVL5 = new SFVec3f(0, 0, 15); 	
	kVL6 = new SFVec3f(0, 0, 18);			
      	this.proxy.keyValueL = new MFVec3f(kVL1, kVL2, kVL3, kVL4, kVL5, kVL6, kVL7, kVL8, kVL9);  
	
	// Right Fin (fixed spine)
	kVR1 = new SFVec3f(0, 0, 1);  
     	kVR2 = new SFVec3f(0, 0, 5);
      	kVR3 = new SFVec3f(0, 0, 8);
	kVR4 = new SFVec3f(0, 0, 12);  	
	kVR5 = new SFVec3f(0, 0, 15);
	kVR6 = new SFVec3f(0, 0, 18);			
      	this.proxy.keyValueR = new MFVec3f(kVR1, kVR2, kVR3, kVR4, kVR5, kVR6, kVR7, kVR8, kVR9);  
      	
	//this.tracePrint ('[this.proxy.keyValueL = ]' + this.proxy.keyValueL);     
	//this.tracePrint ('[this.proxy.keyValueR = ]' + this.proxy.keyValueR);     
			
}
;

	this.set_fraction = function (value, timeStamp)
{
	this.finMove(value);
	//this.tracePrint('time fraction =' + value);
	
}
;

	this.tracePrint = function (outputString)
{
	if (this.proxy.traceEnabled) console.error ('[Fin Move]' + outputString);
}

;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript'] = new X3DJSON['Script']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript']['ACTION'],X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript'].initialize === "function") X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/NancyDivingProtoInstances.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/NancyDivingProtoInstances.json'] = {};
}

X3DJSON['Script']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'] = function() {
	this.set_rotationL = function (value) {
		try {
			this.proxy.rotationL = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			alert('Problems setting rotationL '+e);
			console.error('Problems setting rotationL',e);
		}
	};
	this.rotationL_changed = function () {
		var value = this.rotationL;
		return value;
	};
	try {
		this.rotationL = undefined;
	} catch (e) {
		alert('Problems setting rotationL '+e);
		console.error('Problems setting rotationL',e);
	}
	this.set_rotationR = function (value) {
		try {
			this.proxy.rotationR = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			alert('Problems setting rotationR '+e);
			console.error('Problems setting rotationR',e);
		}
	};
	this.rotationR_changed = function () {
		var value = this.rotationR;
		return value;
	};
	try {
		this.rotationR = undefined;
	} catch (e) {
		alert('Problems setting rotationR '+e);
		console.error('Problems setting rotationR',e);
	}
	this.set_fin_warpL = function (value) {
		try {
			this.proxy.fin_warpL = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			alert('Problems setting fin_warpL '+e);
			console.error('Problems setting fin_warpL',e);
		}
	};
	this.fin_warpL_changed = function () {
		var value = this.fin_warpL;
		return value;
	};
	try {
		this.fin_warpL = new SFBool();
	} catch (e) {
		alert('Problems setting fin_warpL '+e);
		console.error('Problems setting fin_warpL',e);
	}
	this.set_fin_warpR = function (value) {
		try {
			this.proxy.fin_warpR = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			alert('Problems setting fin_warpR '+e);
			console.error('Problems setting fin_warpR',e);
		}
	};
	this.fin_warpR_changed = function () {
		var value = this.fin_warpR;
		return value;
	};
	try {
		this.fin_warpR = new SFBool();
	} catch (e) {
		alert('Problems setting fin_warpR '+e);
		console.error('Problems setting fin_warpR',e);
	}


ecmascript:


var positionX;
var positionY;
var positionZ;
var rotation;

	this.initialize = function ()
{
    	positionX = 0.0;
	positionY = 0.0;
	positionZ = 0.0;
	rotation = 0.0;
}
;

	this.set_rotationL = function ( value, timeStamp)
{
	rotationFinL = new SFRotation(positionX, positionY, positionZ, rotation);
	rotationFinL = value;
	//print ('rotationFinL[0] ' + rotationFinL[0]);
	if (rotationFinL[0] <= 0)
	{
		this.proxy.fin_warpL = 0;
	}
	else
	{
		this.proxy.fin_warpL = 1;
	}
	
}
;

	this.set_rotationR = function ( value, timeStamp)
{
	rotationFinR = new SFRotation(positionX, positionY, positionZ, rotation);
	rotationFinR = value;
	//print ('rotationFin[0] ' + rotationFinR[0]);
	if (rotationFinR[0] <= 0)
	{
		this.proxy.fin_warpR = 0;
	}
	else
	{
		this.proxy.fin_warpR = 1;
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
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'] = new X3DJSON['Script']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript']['ACTION'],X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].initialize === "function") X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].initialize();
X3DJSON.nodeUtil('Scene','DECLViewPositionOrientation_ExampleViewPositionOrientation_WhereSensor').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLViewPositionOrientation_ExampleViewPositionOrientation_OutputPositionOrientation'].set_position(X3DJSON.nodeUtil('Scene','DECLViewPositionOrientation_ExampleViewPositionOrientation_WhereSensor','position'), __eventTime);
}, false);
			X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLViewPositionOrientation_ExampleViewPositionOrientation_OutputPositionOrientation'].set_position(X3DJSON.nodeUtil('Scene','DECLViewPositionOrientation_ExampleViewPositionOrientation_WhereSensor','position'), __eventTime);
X3DJSON.nodeUtil('Scene','DECLViewPositionOrientation_ExampleViewPositionOrientation_WhereSensor').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLViewPositionOrientation_ExampleViewPositionOrientation_OutputPositionOrientation'].set_orientation(X3DJSON.nodeUtil('Scene','DECLViewPositionOrientation_ExampleViewPositionOrientation_WhereSensor','orientation'), __eventTime);
}, false);
			X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLViewPositionOrientation_ExampleViewPositionOrientation_OutputPositionOrientation'].set_orientation(X3DJSON.nodeUtil('Scene','DECLViewPositionOrientation_ExampleViewPositionOrientation_WhereSensor','orientation'), __eventTime);
X3DJSON.nodeUtil('Scene','DECLViewPositionOrientation_INSTANCE_WhereSensor').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLViewPositionOrientation_INSTANCE_OutputPositionOrientation'].set_position(X3DJSON.nodeUtil('Scene','DECLViewPositionOrientation_INSTANCE_WhereSensor','position'), __eventTime);
}, false);
			X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLViewPositionOrientation_INSTANCE_OutputPositionOrientation'].set_position(X3DJSON.nodeUtil('Scene','DECLViewPositionOrientation_INSTANCE_WhereSensor','position'), __eventTime);
X3DJSON.nodeUtil('Scene','DECLViewPositionOrientation_INSTANCE_WhereSensor').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLViewPositionOrientation_INSTANCE_OutputPositionOrientation'].set_orientation(X3DJSON.nodeUtil('Scene','DECLViewPositionOrientation_INSTANCE_WhereSensor','orientation'), __eventTime);
}, false);
			X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLViewPositionOrientation_INSTANCE_OutputPositionOrientation'].set_orientation(X3DJSON.nodeUtil('Scene','DECLViewPositionOrientation_INSTANCE_WhereSensor','orientation'), __eventTime);
X3DJSON.nodeUtil('Scene','DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinTriggerProximitySensor').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinClock').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript'].set_fraction(X3DJSON.nodeUtil('Scene','DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinClock','fraction'), __eventTime);
}, false);
			X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript'].set_fraction(X3DJSON.nodeUtil('Scene','DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinClock','fraction'), __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript']['ACTION']['keyValueR'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript']['ACTION']['keyValueR'] = [];
}
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript']['ACTION']['keyValueR'].push(function(property, value) {
		if (property === 'keyValueR') {
			X3DJSON.nodeUtil('Scene','DECLSegment_hanim_r_hindfoot_FIELDchildren_Finr','spine',typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript'].keyValueR === "function" ? X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript'].keyValueR() : X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript'].keyValueR, __eventTime);
		}
});
			X3DJSON.nodeUtil('Scene','DECLSegment_hanim_r_hindfoot_FIELDchildren_Finr','spine',typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript'].keyValueR === "function" ? X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript'].keyValueR() : X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript'].keyValueR, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript']['ACTION']['keyValueL'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript']['ACTION']['keyValueL'] = [];
}
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript']['ACTION']['keyValueL'].push(function(property, value) {
		if (property === 'keyValueL') {
			X3DJSON.nodeUtil('Scene','DECLSegment_hanim_l_hindfoot_FIELDchildren_Finl','spine',typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript'].keyValueL === "function" ? X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript'].keyValueL() : X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript'].keyValueL, __eventTime);
		}
});
			X3DJSON.nodeUtil('Scene','DECLSegment_hanim_l_hindfoot_FIELDchildren_Finl','spine',typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript'].keyValueL === "function" ? X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript'].keyValueL() : X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript'].keyValueL, __eventTime);
X3DJSON.nodeUtil('Scene','DECLSegment_hanim_skull_FIELDchildren_BubbleClock').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','DECLSegment_hanim_skull_FIELDchildren_BubbleClock').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','DECLSegment_hanim_skull_FIELDchildren_BubbleClock').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','DECLSegment_hanim_skull_FIELDchildren_BubbleClock').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','DECLSegment_hanim_skull_FIELDchildren_BubbleClock').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','DECLSegment_hanim_skull_FIELDchildren_BubbleClock').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','DECLSegment_hanim_skull_FIELDchildren_BubbleClock').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','DECLSegment_hanim_skull_FIELDchildren_BubbleClock').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','DECLSegment_hanim_skull_FIELDchildren_BubbleClock').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','DECLSegment_hanim_skull_FIELDchildren_BubbleClock').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','DECLSegment_hanim_skull_FIELDchildren_BubblePath1').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','DECLSegment_hanim_skull_FIELDchildren_BubblePath2').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','DECLSegment_hanim_skull_FIELDchildren_BubblePath3').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','DECLSegment_hanim_skull_FIELDchildren_BubblePath4').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','DECLSegment_hanim_skull_FIELDchildren_BubblePath5').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','DECLSegment_hanim_skull_FIELDchildren_BubblePath6').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','DECLSegment_hanim_skull_FIELDchildren_BubblePath7').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','DECLSegment_hanim_skull_FIELDchildren_BubblePath8').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','DECLSegment_hanim_skull_FIELDchildren_BubblePath9').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','DECLSegment_hanim_skull_FIELDchildren_BubblePath10').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','TriggerProximitySensor').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Dive_Time').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Dive_Time').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Dive_Time').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Dive_Time').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Dive_Time').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Dive_Time').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Dive_Time').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Dive_Time').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Dive_Time').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Dive_Time').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Dive_Time').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Dive_Time').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','r_ankleRotInterp_BasicDive').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','r_kneeRotInterp_BasicDive').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','r_hipRotInterp_BasicDive').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','l_ankleRotInterp_BasicDive').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','l_kneeRotInterp_BasicDive').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','l_hipRotInterp_BasicDive').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].set_rotationL(X3DJSON.nodeUtil('Scene','l_hipRotInterp_BasicDive','value'), __eventTime);
}, false);
			X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].set_rotationL(X3DJSON.nodeUtil('Scene','l_hipRotInterp_BasicDive','value'), __eventTime);
X3DJSON.nodeUtil('Scene','l_hipRotInterp_BasicDive').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].set_rotationR(X3DJSON.nodeUtil('Scene','l_hipRotInterp_BasicDive','value'), __eventTime);
}, false);
			X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].set_rotationR(X3DJSON.nodeUtil('Scene','l_hipRotInterp_BasicDive','value'), __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript']['ACTION']['fin_warpL'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript']['ACTION']['fin_warpL'] = [];
}
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript']['ACTION']['fin_warpL'].push(function(property, value) {
		if (property === 'fin_warpL') {
			X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript'].finL(typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].fin_warpL === "function" ? X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].fin_warpL() : X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].fin_warpL, __eventTime);
		}
});
			X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript'].finL(typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].fin_warpL === "function" ? X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].fin_warpL() : X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].fin_warpL, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript']['ACTION']['fin_warpR'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript']['ACTION']['fin_warpR'] = [];
}
X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript']['ACTION']['fin_warpR'].push(function(property, value) {
		if (property === 'fin_warpR') {
			X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript'].finR(typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].fin_warpR === "function" ? X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].fin_warpR() : X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].fin_warpR, __eventTime);
		}
});
			X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript'].finR(typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].fin_warpR === "function" ? X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].fin_warpR() : X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].fin_warpR, __eventTime);
X3DJSON.nodeUtil('Scene','l_hipRotInterp_BasicDive').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','lower_bodyRotInterp_BasicDive').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','headRotInterp_BasicDive').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','neckRotInterp_BasicDive').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','upper_bodyRotInterp_BasicDive').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','whole_bodyRotInterp_BasicDive').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','whole_bodyTranInterp_BasicDive').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Dive_Time').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Dive_Time').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Dive_Time').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Dive_Time').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Dive_Time').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','Dive_Time').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','r_wristRotInterp_BasicDive').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','r_elbowRotInterp_BasicDive').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','r_shoulderRotInterp_BasicDive').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','l_wristRotInterp_BasicDive').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','l_elbowRotInterp_BasicDive').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Scene','l_shoulderRotInterp_BasicDive').addEventListener('outputchange', function(event) {
}, false);
			X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLViewPositionOrientation_ExampleViewPositionOrientation_OutputPositionOrientation'].set_position(X3DJSON.nodeUtil('Scene','DECLViewPositionOrientation_ExampleViewPositionOrientation_WhereSensor','position'), __eventTime);
			X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLViewPositionOrientation_ExampleViewPositionOrientation_OutputPositionOrientation'].set_orientation(X3DJSON.nodeUtil('Scene','DECLViewPositionOrientation_ExampleViewPositionOrientation_WhereSensor','orientation'), __eventTime);
			X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLViewPositionOrientation_INSTANCE_OutputPositionOrientation'].set_position(X3DJSON.nodeUtil('Scene','DECLViewPositionOrientation_INSTANCE_WhereSensor','position'), __eventTime);
			X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLViewPositionOrientation_INSTANCE_OutputPositionOrientation'].set_orientation(X3DJSON.nodeUtil('Scene','DECLViewPositionOrientation_INSTANCE_WhereSensor','orientation'), __eventTime);
			X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript'].set_fraction(X3DJSON.nodeUtil('Scene','DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinClock','fraction'), __eventTime);
			X3DJSON.nodeUtil('Scene','DECLSegment_hanim_r_hindfoot_FIELDchildren_Finr','spine',typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript'].keyValueR === "function" ? X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript'].keyValueR() : X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript'].keyValueR, __eventTime);
			X3DJSON.nodeUtil('Scene','DECLSegment_hanim_l_hindfoot_FIELDchildren_Finl','spine',typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript'].keyValueL === "function" ? X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript'].keyValueL() : X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript'].keyValueL, __eventTime);
			X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].set_rotationL(X3DJSON.nodeUtil('Scene','l_hipRotInterp_BasicDive','value'), __eventTime);
			X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].set_rotationR(X3DJSON.nodeUtil('Scene','l_hipRotInterp_BasicDive','value'), __eventTime);
			X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript'].finL(typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].fin_warpL === "function" ? X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].fin_warpL() : X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].fin_warpL, __eventTime);
			X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['DECLJoint_hanim_HumanoidRoot_FIELDchildren_FinScript'].finR(typeof X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].fin_warpR === "function" ? X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].fin_warpR() : X3DJSON['Obj']['Scene']['../data/NancyDivingProtoInstances.json']['finWarpScript'].fin_warpR, __eventTime);