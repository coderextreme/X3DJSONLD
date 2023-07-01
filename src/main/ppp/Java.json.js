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
if (typeof X3DJSON['Scene../data/Java.json'] === 'undefined') {
	X3DJSON['Scene../data/Java.json'] = {};
}

if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/Java.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/Java.json'] = {};
}

X3DJSON['Script']['Scene']['../data/Java.json']['colorTypeConversionScript'] = function() {
	this.set_colorInput = function (value) {
		try {
			this.proxy.colorInput = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting colorInput '+e);
			console.error('Problems setting colorInput',e);
		}
	};
	this.colorInput_changed = function () {
		var value = this.colorInput;
		return value;
	};
	try {
		this.colorInput = new SFColor();
	} catch (e) {
		console.log('Problems setting colorInput '+e);
		console.error('Problems setting colorInput',e);
	}
	this.set_colorsOutput = function (value) {
		try {
			this.proxy.colorsOutput = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting colorsOutput '+e);
			console.error('Problems setting colorsOutput',e);
		}
	};
	this.colorsOutput_changed = function () {
		var value = this.colorsOutput;
		return value;
	};
	try {
		this.colorsOutput = new MFColor();
	} catch (e) {
		console.log('Problems setting colorsOutput '+e);
		console.error('Problems setting colorsOutput',e);
	}


ecmascript:

	this.colorInput = function (eventValue) // Example source code
{
   this.proxy.colorsOutput = new MFColor(eventValue); // assigning value sends output event
// console.error('this.proxy.colorInput=' + eventValue + ', this.proxy.colorsOutput=' + this.proxy.colorsOutput + '');
}

;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Java.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Java.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/Java.json']['colorTypeConversionScript'] = new X3DJSON['Script']['Scene']['../data/Java.json']['colorTypeConversionScript']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Java.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Java.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Java.json']['colorTypeConversionScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Java.json']['colorTypeConversionScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/Java.json']['colorTypeConversionScript']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Java.json']['colorTypeConversionScript']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/Java.json']['colorTypeConversionScript'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/Java.json']['colorTypeConversionScript']['ACTION'],X3DJSON['Obj']['Scene']['../data/Java.json']['colorTypeConversionScript']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/Java.json']['colorTypeConversionScript'].initialize === "function") X3DJSON['Obj']['Scene']['../data/Java.json']['colorTypeConversionScript'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/Java.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/Java.json'] = {};
}

X3DJSON['Script']['Scene']['../data/Java.json']['DECLMaterialModulator_MyMaterialModulator_MaterialModulatorScript'] = function() {
	this.set_enabled = function (value) {
		try {
			this.proxy.enabled = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting enabled '+e);
			console.error('Problems setting enabled',e);
		}
	};
	this.enabled_changed = function () {
		var value = this.enabled;
		return value;
	};
	try {
		this.enabled = new SFBool(true);
	} catch (e) {
		console.log('Problems setting enabled '+e);
		console.error('Problems setting enabled',e);
	}
	this.set_diffuseColor = function (value) {
		try {
			this.proxy.diffuseColor = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting diffuseColor '+e);
			console.error('Problems setting diffuseColor',e);
		}
	};
	this.diffuseColor_changed = function () {
		var value = this.diffuseColor;
		return value;
	};
	try {
		this.diffuseColor = new SFColor(0,0,0);
	} catch (e) {
		console.log('Problems setting diffuseColor '+e);
		console.error('Problems setting diffuseColor',e);
	}
	this.set_newColor = function (value) {
		try {
			this.proxy.newColor = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting newColor '+e);
			console.error('Problems setting newColor',e);
		}
	};
	this.newColor_changed = function () {
		var value = this.newColor;
		return value;
	};
	try {
		this.newColor = new SFColor();
	} catch (e) {
		console.log('Problems setting newColor '+e);
		console.error('Problems setting newColor',e);
	}
	this.set_clockTrigger = function (value) {
		try {
			this.proxy.clockTrigger = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting clockTrigger '+e);
			console.error('Problems setting clockTrigger',e);
		}
	};
	this.clockTrigger_changed = function () {
		var value = this.clockTrigger;
		return value;
	};
	try {
		this.clockTrigger = new SFTime();
	} catch (e) {
		console.log('Problems setting clockTrigger '+e);
		console.error('Problems setting clockTrigger',e);
	}


ecmascript:
	this.initialize = function ()
{
    this.proxy.newColor = this.proxy.diffuseColor; // start with correct color
};

	this.set_enabled = function (newValue)
{
	this.proxy.enabled = newValue;
};

	this.clockTrigger = function (timeValue)
{
    if (!this.proxy.enabled) return;
    red   = this.proxy.newColor.r;
    green = this.proxy.newColor.g;
    blue  = this.proxy.newColor.b;

    // note different modulation rates for each color component, % is modulus operator
    this.proxy.newColor = new SFColor ((red + 0.02) % 1, (green + 0.03) % 1, (blue + 0.04) % 1);
	if (this.proxy.enabled)
	{
		console.error ('this.proxy.diffuseColor=(' + red + ',' + green + ',' + blue + ') this.proxy.newColor=' + this.proxy.newColor.toString() + '');
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
if (typeof X3DJSON['Obj']['Scene']['../data/Java.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Java.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/Java.json']['DECLMaterialModulator_MyMaterialModulator_MaterialModulatorScript'] = new X3DJSON['Script']['Scene']['../data/Java.json']['DECLMaterialModulator_MyMaterialModulator_MaterialModulatorScript']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Java.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Java.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Java.json']['DECLMaterialModulator_MyMaterialModulator_MaterialModulatorScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Java.json']['DECLMaterialModulator_MyMaterialModulator_MaterialModulatorScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/Java.json']['DECLMaterialModulator_MyMaterialModulator_MaterialModulatorScript']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Java.json']['DECLMaterialModulator_MyMaterialModulator_MaterialModulatorScript']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/Java.json']['DECLMaterialModulator_MyMaterialModulator_MaterialModulatorScript'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/Java.json']['DECLMaterialModulator_MyMaterialModulator_MaterialModulatorScript']['ACTION'],X3DJSON['Obj']['Scene']['../data/Java.json']['DECLMaterialModulator_MyMaterialModulator_MaterialModulatorScript']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/Java.json']['DECLMaterialModulator_MyMaterialModulator_MaterialModulatorScript'].initialize === "function") X3DJSON['Obj']['Scene']['../data/Java.json']['DECLMaterialModulator_MyMaterialModulator_MaterialModulatorScript'].initialize();
    if (X3DJSON.nodeUtil('Scene','OrbitClock')) {
X3DJSON.nodeUtil('Scene','OrbitClock').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','BoxPathAnimator')) {
X3DJSON.nodeUtil('Scene','BoxPathAnimator').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','SpinClock')) {
X3DJSON.nodeUtil('Scene','SpinClock').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','SpinInterpolator')) {
X3DJSON.nodeUtil('Scene','SpinInterpolator').addEventListener('outputchange', function(event) {
}, false);
}
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Java.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Java.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Java.json']['colorTypeConversionScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Java.json']['colorTypeConversionScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/Java.json']['colorTypeConversionScript']['ACTION']['colorsOutput'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Java.json']['colorTypeConversionScript']['ACTION']['colorsOutput'] = [];
}
X3DJSON['Obj']['Scene']['../data/Java.json']['colorTypeConversionScript']['ACTION']['colorsOutput'].push(function(property, value) {
		if (property === 'colorsOutput') {
			X3DJSON.nodeUtil('Scene','GradualBackground','skyColor',typeof X3DJSON['Obj']['Scene']['../data/Java.json']['colorTypeConversionScript'].colorsOutput === "function" ? X3DJSON['Obj']['Scene']['../data/Java.json']['colorTypeConversionScript'].colorsOutput() : X3DJSON['Obj']['Scene']['../data/Java.json']['colorTypeConversionScript'].colorsOutput, __eventTime);
		}
});
			X3DJSON.nodeUtil('Scene','GradualBackground','skyColor',typeof X3DJSON['Obj']['Scene']['../data/Java.json']['colorTypeConversionScript'].colorsOutput === "function" ? X3DJSON['Obj']['Scene']['../data/Java.json']['colorTypeConversionScript'].colorsOutput() : X3DJSON['Obj']['Scene']['../data/Java.json']['colorTypeConversionScript'].colorsOutput, __eventTime);
    if (X3DJSON.nodeUtil('Scene','ColorAnimator')) {
X3DJSON.nodeUtil('Scene','ColorAnimator').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/Java.json']['colorTypeConversionScript'].colorInput(X3DJSON.nodeUtil('Scene','ColorAnimator','value'), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/Java.json']['colorTypeConversionScript'].colorInput(X3DJSON.nodeUtil('Scene','ColorAnimator','value'), __eventTime);
    if (X3DJSON.nodeUtil('Scene','ColorClock')) {
X3DJSON.nodeUtil('Scene','ColorClock').addEventListener('outputchange', function(event) {
}, false);
}
			X3DJSON.nodeUtil('Scene','GradualBackground','skyColor',typeof X3DJSON['Obj']['Scene']['../data/Java.json']['colorTypeConversionScript'].colorsOutput === "function" ? X3DJSON['Obj']['Scene']['../data/Java.json']['colorTypeConversionScript'].colorsOutput() : X3DJSON['Obj']['Scene']['../data/Java.json']['colorTypeConversionScript'].colorsOutput, __eventTime);
			X3DJSON['Obj']['Scene']['../data/Java.json']['colorTypeConversionScript'].colorInput(X3DJSON.nodeUtil('Scene','ColorAnimator','value'), __eventTime);