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
if (typeof X3DJSON['Scene../data/Trebuchet.json'] === 'undefined') {
	X3DJSON['Scene../data/Trebuchet.json'] = {};
}

if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/Trebuchet.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/Trebuchet.json'] = {};
}

X3DJSON['Script']['Scene']['../data/Trebuchet.json']['WeightScript'] = function() {
	this.set_boolean = function (value) {
		try {
			this.proxy.boolean = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting boolean '+e);
			console.error('Problems setting boolean',e);
		}
	};
	this.boolean_changed = function () {
		var value = this.boolean;
		return value;
	};
	try {
		this.boolean = undefined;
	} catch (e) {
		console.log('Problems setting boolean '+e);
		console.error('Problems setting boolean',e);
	}
	this.set_whichchoice = function (value) {
		try {
			this.proxy.whichchoice = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting whichchoice '+e);
			console.error('Problems setting whichchoice',e);
		}
	};
	this.whichchoice_changed = function () {
		var value = this.whichchoice;
		return value;
	};
	try {
		this.whichchoice = new SFInt32();
	} catch (e) {
		console.log('Problems setting whichchoice '+e);
		console.error('Problems setting whichchoice',e);
	}
	this.set_CounterWeight = function (value) {
		try {
			this.proxy.CounterWeight = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting CounterWeight '+e);
			console.error('Problems setting CounterWeight',e);
		}
	};
	this.CounterWeight_changed = function () {
		var value = this.CounterWeight;
		return value;
	};
	try {
		this.CounterWeight = new SFFloat();
	} catch (e) {
		console.log('Problems setting CounterWeight '+e);
		console.error('Problems setting CounterWeight',e);
	}


ecmascript:


	this.initialize = function ()
{
	this.proxy.whichchoice =0;
	this.proxy.CounterWeight=100;
}
;

	this.set_boolean = function ( boolean_input, eventTime)
{

	if ( boolean_input== false ) { return; } // ignore the unclick
        this.proxy.whichchoice = this.proxy.whichchoice +1;
	if (this.proxy.whichchoice == 0)this.proxy.CounterWeight=50.00;
	if (this.proxy.whichchoice == 1)this.proxy.CounterWeight=500.00;
	if (this.proxy.whichchoice == 2)this.proxy.CounterWeight=1000.00;
	if (this.proxy.whichchoice == 3)this.proxy.CounterWeight=10000.00;
        if ( this.proxy.whichchoice ==4 ) { this.proxy.whichchoice = 0; this.proxy.CounterWeight=50; }


        console.error ('this.proxy.CounterWeight ='+this.proxy.CounterWeight);
}

;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Trebuchet.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript'] = new X3DJSON['Script']['Scene']['../data/Trebuchet.json']['WeightScript']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Trebuchet.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript']['ACTION'],X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript'].initialize === "function") X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/Trebuchet.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/Trebuchet.json'] = {};
}

X3DJSON['Script']['Scene']['../data/Trebuchet.json']['LauncheeScript'] = function() {
	this.set_boolean = function (value) {
		try {
			this.proxy.boolean = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting boolean '+e);
			console.error('Problems setting boolean',e);
		}
	};
	this.boolean_changed = function () {
		var value = this.boolean;
		return value;
	};
	try {
		this.boolean = undefined;
	} catch (e) {
		console.log('Problems setting boolean '+e);
		console.error('Problems setting boolean',e);
	}
	this.set_whichchoice = function (value) {
		try {
			this.proxy.whichchoice = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting whichchoice '+e);
			console.error('Problems setting whichchoice',e);
		}
	};
	this.whichchoice_changed = function () {
		var value = this.whichchoice;
		return value;
	};
	try {
		this.whichchoice = new SFInt32();
	} catch (e) {
		console.log('Problems setting whichchoice '+e);
		console.error('Problems setting whichchoice',e);
	}
	this.set_ProjectileWeight = function (value) {
		try {
			this.proxy.ProjectileWeight = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting ProjectileWeight '+e);
			console.error('Problems setting ProjectileWeight',e);
		}
	};
	this.ProjectileWeight_changed = function () {
		var value = this.ProjectileWeight;
		return value;
	};
	try {
		this.ProjectileWeight = new SFFloat();
	} catch (e) {
		console.log('Problems setting ProjectileWeight '+e);
		console.error('Problems setting ProjectileWeight',e);
	}


ecmascript:

	this.set_boolean = function (boolean_input, eventTime)
{
	if ( boolean_input== false ) { return; } // ignore unclick
        this.proxy.whichchoice = this.proxy.whichchoice +1;
        if (this.proxy.whichchoice == 0)this.proxy.ProjectileWeight=10.00;
        if (this.proxy.whichchoice == 1)this.proxy.ProjectileWeight=1000.00;
	if (this.proxy.whichchoice == 2)this.proxy.ProjectileWeight=5;

	if ( this.proxy.whichchoice ==3 ) { this.proxy.whichchoice = 0; this.proxy.ProjectileWeight=10.00; }
	console.error ('Projectile Weight'+this.proxy.ProjectileWeight);
}

;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Trebuchet.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'] = new X3DJSON['Script']['Scene']['../data/Trebuchet.json']['LauncheeScript']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Trebuchet.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript']['ACTION'],X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'].initialize === "function") X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/Trebuchet.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/Trebuchet.json'] = {};
}

X3DJSON['Script']['Scene']['../data/Trebuchet.json']['PigdogMonkScript'] = function() {
	this.set_boolean = function (value) {
		try {
			this.proxy.boolean = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting boolean '+e);
			console.error('Problems setting boolean',e);
		}
	};
	this.boolean_changed = function () {
		var value = this.boolean;
		return value;
	};
	try {
		this.boolean = undefined;
	} catch (e) {
		console.log('Problems setting boolean '+e);
		console.error('Problems setting boolean',e);
	}
	this.set_whichchoice = function (value) {
		try {
			this.proxy.whichchoice = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting whichchoice '+e);
			console.error('Problems setting whichchoice',e);
		}
	};
	this.whichchoice_changed = function () {
		var value = this.whichchoice;
		return value;
	};
	try {
		this.whichchoice = new SFInt32();
	} catch (e) {
		console.log('Problems setting whichchoice '+e);
		console.error('Problems setting whichchoice',e);
	}


ecmascript:

	this.set_boolean = function (boolean_input, eventTime)
{
	if ( boolean_input== false ) { return; } // ignore unclick

        this.proxy.whichchoice = this.proxy.whichchoice +1;

        if ( this.proxy.whichchoice ==2 )  this.proxy.whichchoice = 0;


}

;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Trebuchet.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['PigdogMonkScript'] = new X3DJSON['Script']['Scene']['../data/Trebuchet.json']['PigdogMonkScript']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Trebuchet.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['PigdogMonkScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['PigdogMonkScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['PigdogMonkScript']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['PigdogMonkScript']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['PigdogMonkScript'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['PigdogMonkScript']['ACTION'],X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['PigdogMonkScript']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['PigdogMonkScript'].initialize === "function") X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['PigdogMonkScript'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/Trebuchet.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/Trebuchet.json'] = {};
}

X3DJSON['Script']['Scene']['../data/Trebuchet.json']['Mover'] = function() {
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
	this.set_MassCounterWeight = function (value) {
		try {
			this.proxy.MassCounterWeight = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting MassCounterWeight '+e);
			console.error('Problems setting MassCounterWeight',e);
		}
	};
	this.MassCounterWeight_changed = function () {
		var value = this.MassCounterWeight;
		return value;
	};
	try {
		this.MassCounterWeight = new SFFloat(1);
	} catch (e) {
		console.log('Problems setting MassCounterWeight '+e);
		console.error('Problems setting MassCounterWeight',e);
	}
	this.set_MassProjectileWeight = function (value) {
		try {
			this.proxy.MassProjectileWeight = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting MassProjectileWeight '+e);
			console.error('Problems setting MassProjectileWeight',e);
		}
	};
	this.MassProjectileWeight_changed = function () {
		var value = this.MassProjectileWeight;
		return value;
	};
	try {
		this.MassProjectileWeight = new SFFloat(1);
	} catch (e) {
		console.log('Problems setting MassProjectileWeight '+e);
		console.error('Problems setting MassProjectileWeight',e);
	}
	this.set_MassCounterWeight = function (value) {
		try {
			this.proxy.MassCounterWeight = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting MassCounterWeight '+e);
			console.error('Problems setting MassCounterWeight',e);
		}
	};
	this.MassCounterWeight_changed = function () {
		var value = this.MassCounterWeight;
		return value;
	};
	try {
		this.MassCounterWeight = new SFFloat(1);
	} catch (e) {
		console.log('Problems setting MassCounterWeight '+e);
		console.error('Problems setting MassCounterWeight',e);
	}
	this.set_MassProjectileWeight = function (value) {
		try {
			this.proxy.MassProjectileWeight = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting MassProjectileWeight '+e);
			console.error('Problems setting MassProjectileWeight',e);
		}
	};
	this.MassProjectileWeight_changed = function () {
		var value = this.MassProjectileWeight;
		return value;
	};
	try {
		this.MassProjectileWeight = new SFFloat(1);
	} catch (e) {
		console.log('Problems setting MassProjectileWeight '+e);
		console.error('Problems setting MassProjectileWeight',e);
	}
	this.set_transparent = function (value) {
		try {
			this.proxy.transparent = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting transparent '+e);
			console.error('Problems setting transparent',e);
		}
	};
	this.transparent_changed = function () {
		var value = this.transparent;
		return value;
	};
	try {
		this.transparent = new SFVec3f();
	} catch (e) {
		console.log('Problems setting transparent '+e);
		console.error('Problems setting transparent',e);
	}
	this.set_value = function (value) {
		try {
			this.proxy.value = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting value '+e);
			console.error('Problems setting value',e);
		}
	};
	this.value_changed = function () {
		var value = this.value;
		return value;
	};
	try {
		this.value = undefined;
	} catch (e) {
		console.log('Problems setting value '+e);
		console.error('Problems setting value',e);
	}


ecmascript:

	this.initialize = function ()
{
	this.proxy.MassCounterWeight=100;
	this.proxy.MassProjectileWeight=10;
	console.error ('this.proxy.MassCounterWeight =' + this.proxy.MassCounterWeight);
	console.error ('this.proxy.MassProjectileWeight =' + this.proxy.MassProjectileWeight);
}
;

	this.set_MassProjectileWeight = function (value, timestamp)
{
	this.proxy.MassProjectileWeight = value;
	console.error ('new this.proxy.MassProjectileWeight =' + this.proxy.MassProjectileWeight);
};

	this.set_MassCounterWeight = function (value2, timestamp)
{
	this.proxy.MassCounterWeight = value2;
	console.error ('new this.proxy.MassCounterWeight =' + this.proxy.MassCounterWeight);
}

;

	this.set_fraction = function ( fraction, eventTime )
{
	var TrebuchetHeight=45;
	var Height =25;
      	x = (2*(this.proxy.MassCounterWeight/this.proxy.MassProjectileWeight)*Height*fraction)-.5*TrebuchetHeight;
	// start at TrebuchetHeight and keep along z axis (z=zero)
	y =  (this.proxy.MassCounterWeight/this.proxy.MassProjectileWeight)*Height*Math.sin(fraction*3.14);
        z = 0;
        this.proxy.transparent = new SFVec3f (1,1,1);
     if (y <1.5*TrebuchetHeight  )if (x<TrebuchetHeight)
		{
		x=x-10;
		y=y+1;
		this.proxy.transparent = new SFVec3f(.01, .01, .01);
			}

	this.proxy.value_changed = new SFVec3f (x, y, z);
	console.error ('x=' + this.proxy.value_changed[0] + ' y=' + this.proxy.value_changed[1] + ' z=' + this.proxy.value_changed[2]);
}

;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Trebuchet.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover'] = new X3DJSON['Script']['Scene']['../data/Trebuchet.json']['Mover']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Trebuchet.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover']['ACTION'],X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover'].initialize === "function") X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover'].initialize();
    if (X3DJSON.nodeUtil('Scene','clock')) {
X3DJSON.nodeUtil('Scene','clock').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','invisiable')) {
X3DJSON.nodeUtil('Scene','invisiable').addEventListener('outputchange', function(event) {
}, false);
}
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Trebuchet.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript']['ACTION']['CounterWeight'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript']['ACTION']['CounterWeight'] = [];
}
X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript']['ACTION']['CounterWeight'].push(function(property, value) {
		if (property === 'CounterWeight') {
		if (X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover'] && typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript'].CounterWeight === "function" ? X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript'].CounterWeight() : X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript'].CounterWeight) {
			X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover'].set_MassCounterWeight(typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript'].CounterWeight === "function" ? X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript'].CounterWeight() : X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript'].CounterWeight, __eventTime);
		}
		}
});
		if (X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover'] && typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript'].CounterWeight === "function" ? X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript'].CounterWeight() : X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript'].CounterWeight) {
			X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover'].set_MassCounterWeight(typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript'].CounterWeight === "function" ? X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript'].CounterWeight() : X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript'].CounterWeight, __eventTime);
		}
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Trebuchet.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript']['ACTION']['ProjectileWeight'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript']['ACTION']['ProjectileWeight'] = [];
}
X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript']['ACTION']['ProjectileWeight'].push(function(property, value) {
		if (property === 'ProjectileWeight') {
		if (X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover'] && typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'].ProjectileWeight === "function" ? X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'].ProjectileWeight() : X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'].ProjectileWeight) {
			X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover'].set_MassProjectileWeight(typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'].ProjectileWeight === "function" ? X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'].ProjectileWeight() : X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'].ProjectileWeight, __eventTime);
		}
		}
});
		if (X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover'] && typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'].ProjectileWeight === "function" ? X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'].ProjectileWeight() : X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'].ProjectileWeight) {
			X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover'].set_MassProjectileWeight(typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'].ProjectileWeight === "function" ? X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'].ProjectileWeight() : X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'].ProjectileWeight, __eventTime);
		}
    if (X3DJSON.nodeUtil('Scene','clock')) {
X3DJSON.nodeUtil('Scene','clock').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover'].set_fraction(X3DJSON.nodeUtil('Scene','clock','fraction'), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover'].set_fraction(X3DJSON.nodeUtil('Scene','clock','fraction'), __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Trebuchet.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover']['ACTION']['value'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover']['ACTION']['value'] = [];
}
X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover']['ACTION']['value'].push(function(property, value) {
		if (property === 'value') {
			X3DJSON.nodeUtil('Scene','ProjectileTransform','translation',typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover'].value_changed === "function" ? X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover'].value_changed() : X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover'].value, __eventTime);
		}
});
			X3DJSON.nodeUtil('Scene','ProjectileTransform','translation',typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover'].value_changed === "function" ? X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover'].value_changed() : X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover'].value, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Trebuchet.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover']['ACTION']['transparent'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover']['ACTION']['transparent'] = [];
}
X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover']['ACTION']['transparent'].push(function(property, value) {
		if (property === 'transparent') {
			X3DJSON.nodeUtil('Scene','ProjectileTransform','scale',typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover'].transparent === "function" ? X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover'].transparent() : X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover'].transparent, __eventTime);
		}
});
			X3DJSON.nodeUtil('Scene','ProjectileTransform','scale',typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover'].transparent === "function" ? X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover'].transparent() : X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover'].transparent, __eventTime);
    if (X3DJSON.nodeUtil('Scene','Launch')) {
X3DJSON.nodeUtil('Scene','Launch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Launch')) {
X3DJSON.nodeUtil('Scene','Launch').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['PigdogMonkScript'].set_boolean(X3DJSON.nodeUtil('Scene','Launch','isActive'), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['PigdogMonkScript'].set_boolean(X3DJSON.nodeUtil('Scene','Launch','isActive'), __eventTime);
    if (X3DJSON.nodeUtil('Scene','Launch')) {
X3DJSON.nodeUtil('Scene','Launch').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','Launch')) {
X3DJSON.nodeUtil('Scene','Launch').addEventListener('outputchange', function(event) {
}, false);
}
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Trebuchet.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['PigdogMonkScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['PigdogMonkScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['PigdogMonkScript']['ACTION']['whichchoice'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['PigdogMonkScript']['ACTION']['whichchoice'] = [];
}
X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['PigdogMonkScript']['ACTION']['whichchoice'].push(function(property, value) {
		if (property === 'whichchoice') {
			X3DJSON.nodeUtil('Scene','PigdogMonk','whichChoice',typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['PigdogMonkScript'].whichchoice === "function" ? X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['PigdogMonkScript'].whichchoice() : X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['PigdogMonkScript'].whichchoice, __eventTime);
		}
});
			X3DJSON.nodeUtil('Scene','PigdogMonk','whichChoice',typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['PigdogMonkScript'].whichchoice === "function" ? X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['PigdogMonkScript'].whichchoice() : X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['PigdogMonkScript'].whichchoice, __eventTime);
    if (X3DJSON.nodeUtil('Scene','LauncheeChoice')) {
X3DJSON.nodeUtil('Scene','LauncheeChoice').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','LauncheeChoice')) {
X3DJSON.nodeUtil('Scene','LauncheeChoice').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','LauncheeChoice')) {
X3DJSON.nodeUtil('Scene','LauncheeChoice').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','LauncheeChoice')) {
X3DJSON.nodeUtil('Scene','LauncheeChoice').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'].set_boolean(X3DJSON.nodeUtil('Scene','LauncheeChoice','isActive'), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'].set_boolean(X3DJSON.nodeUtil('Scene','LauncheeChoice','isActive'), __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Trebuchet.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript']['ACTION']['whichchoice'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript']['ACTION']['whichchoice'] = [];
}
X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript']['ACTION']['whichchoice'].push(function(property, value) {
		if (property === 'whichchoice') {
			X3DJSON.nodeUtil('Scene','projectile','whichChoice',typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'].whichchoice === "function" ? X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'].whichchoice() : X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'].whichchoice, __eventTime);
		}
});
			X3DJSON.nodeUtil('Scene','projectile','whichChoice',typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'].whichchoice === "function" ? X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'].whichchoice() : X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'].whichchoice, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Trebuchet.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript']['ACTION']['whichchoice'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript']['ACTION']['whichchoice'] = [];
}
X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript']['ACTION']['whichchoice'].push(function(property, value) {
		if (property === 'whichchoice') {
			X3DJSON.nodeUtil('Scene','projectilename','whichChoice',typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'].whichchoice === "function" ? X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'].whichchoice() : X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'].whichchoice, __eventTime);
		}
});
			X3DJSON.nodeUtil('Scene','projectilename','whichChoice',typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'].whichchoice === "function" ? X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'].whichchoice() : X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'].whichchoice, __eventTime);
    if (X3DJSON.nodeUtil('Scene','weightselector')) {
X3DJSON.nodeUtil('Scene','weightselector').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript'].set_boolean(X3DJSON.nodeUtil('Scene','weightselector','isActive'), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript'].set_boolean(X3DJSON.nodeUtil('Scene','weightselector','isActive'), __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Trebuchet.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript']['ACTION']['whichchoice'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript']['ACTION']['whichchoice'] = [];
}
X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript']['ACTION']['whichchoice'].push(function(property, value) {
		if (property === 'whichchoice') {
			X3DJSON.nodeUtil('Scene','Weight','whichChoice',typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript'].whichchoice === "function" ? X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript'].whichchoice() : X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript'].whichchoice, __eventTime);
		}
});
			X3DJSON.nodeUtil('Scene','Weight','whichChoice',typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript'].whichchoice === "function" ? X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript'].whichchoice() : X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript'].whichchoice, __eventTime);
    if (X3DJSON.nodeUtil('Scene','clock')) {
X3DJSON.nodeUtil('Scene','clock').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','flingerangles')) {
X3DJSON.nodeUtil('Scene','flingerangles').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','clock')) {
X3DJSON.nodeUtil('Scene','clock').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','verticalweightpath')) {
X3DJSON.nodeUtil('Scene','verticalweightpath').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','clock')) {
X3DJSON.nodeUtil('Scene','clock').addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil('Scene','pinpath')) {
X3DJSON.nodeUtil('Scene','pinpath').addEventListener('outputchange', function(event) {
}, false);
}
		if (X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover'] && typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript'].CounterWeight === "function" ? X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript'].CounterWeight() : X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript'].CounterWeight) {
			X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover'].set_MassCounterWeight(typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript'].CounterWeight === "function" ? X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript'].CounterWeight() : X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript'].CounterWeight, __eventTime);
		}
		if (X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover'] && typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'].ProjectileWeight === "function" ? X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'].ProjectileWeight() : X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'].ProjectileWeight) {
			X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover'].set_MassProjectileWeight(typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'].ProjectileWeight === "function" ? X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'].ProjectileWeight() : X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'].ProjectileWeight, __eventTime);
		}
			X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover'].set_fraction(X3DJSON.nodeUtil('Scene','clock','fraction'), __eventTime);
			X3DJSON.nodeUtil('Scene','ProjectileTransform','translation',typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover'].value_changed === "function" ? X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover'].value_changed() : X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover'].value, __eventTime);
			X3DJSON.nodeUtil('Scene','ProjectileTransform','scale',typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover'].transparent === "function" ? X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover'].transparent() : X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['Mover'].transparent, __eventTime);
			X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['PigdogMonkScript'].set_boolean(X3DJSON.nodeUtil('Scene','Launch','isActive'), __eventTime);
			X3DJSON.nodeUtil('Scene','PigdogMonk','whichChoice',typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['PigdogMonkScript'].whichchoice === "function" ? X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['PigdogMonkScript'].whichchoice() : X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['PigdogMonkScript'].whichchoice, __eventTime);
			X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'].set_boolean(X3DJSON.nodeUtil('Scene','LauncheeChoice','isActive'), __eventTime);
			X3DJSON.nodeUtil('Scene','projectile','whichChoice',typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'].whichchoice === "function" ? X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'].whichchoice() : X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'].whichchoice, __eventTime);
			X3DJSON.nodeUtil('Scene','projectilename','whichChoice',typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'].whichchoice === "function" ? X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'].whichchoice() : X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['LauncheeScript'].whichchoice, __eventTime);
			X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript'].set_boolean(X3DJSON.nodeUtil('Scene','weightselector','isActive'), __eventTime);
			X3DJSON.nodeUtil('Scene','Weight','whichChoice',typeof X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript'].whichchoice === "function" ? X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript'].whichchoice() : X3DJSON['Obj']['Scene']['../data/Trebuchet.json']['WeightScript'].whichchoice, __eventTime);