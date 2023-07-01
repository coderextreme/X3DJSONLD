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
var SFRotation = x3dom.fields.SFRotation;
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
if (typeof X3DJSON['Scene../data/BindingOperations.json'] === 'undefined') {
	X3DJSON['Scene../data/BindingOperations.json'] = {};
}

if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/BindingOperations.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/BindingOperations.json'] = {};
}

X3DJSON['Script']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'] = function() {
	this.set_timeEvent = function (value) {
		try {
			this.proxy.timeEvent = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting timeEvent '+e);
			console.error('Problems setting timeEvent',e);
		}
	};
	this.timeEvent_changed = function () {
		var value = this.timeEvent;
		return value;
	};
	try {
		this.timeEvent = undefined;
	} catch (e) {
		console.log('Problems setting timeEvent '+e);
		console.error('Problems setting timeEvent',e);
	}
	this.set_bindView1 = function (value) {
		try {
			this.proxy.bindView1 = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting bindView1 '+e);
			console.error('Problems setting bindView1',e);
		}
	};
	this.bindView1_changed = function () {
		var value = this.bindView1;
		return value;
	};
	try {
		this.bindView1 = new SFBool();
	} catch (e) {
		console.log('Problems setting bindView1 '+e);
		console.error('Problems setting bindView1',e);
	}
	this.set_bindView2 = function (value) {
		try {
			this.proxy.bindView2 = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting bindView2 '+e);
			console.error('Problems setting bindView2',e);
		}
	};
	this.bindView2_changed = function () {
		var value = this.bindView2;
		return value;
	};
	try {
		this.bindView2 = new SFBool();
	} catch (e) {
		console.log('Problems setting bindView2 '+e);
		console.error('Problems setting bindView2',e);
	}
	this.set_bindView3 = function (value) {
		try {
			this.proxy.bindView3 = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting bindView3 '+e);
			console.error('Problems setting bindView3',e);
		}
	};
	this.bindView3_changed = function () {
		var value = this.bindView3;
		return value;
	};
	try {
		this.bindView3 = new SFBool();
	} catch (e) {
		console.log('Problems setting bindView3 '+e);
		console.error('Problems setting bindView3',e);
	}
	this.set_bindView4 = function (value) {
		try {
			this.proxy.bindView4 = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting bindView4 '+e);
			console.error('Problems setting bindView4',e);
		}
	};
	this.bindView4_changed = function () {
		var value = this.bindView4;
		return value;
	};
	try {
		this.bindView4 = new SFBool();
	} catch (e) {
		console.log('Problems setting bindView4 '+e);
		console.error('Problems setting bindView4',e);
	}
	this.set_bindView5 = function (value) {
		try {
			this.proxy.bindView5 = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting bindView5 '+e);
			console.error('Problems setting bindView5',e);
		}
	};
	this.bindView5_changed = function () {
		var value = this.bindView5;
		return value;
	};
	try {
		this.bindView5 = new SFBool();
	} catch (e) {
		console.log('Problems setting bindView5 '+e);
		console.error('Problems setting bindView5',e);
	}
	this.set_view1Bound = function (value) {
		try {
			this.proxy.view1Bound = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting view1Bound '+e);
			console.error('Problems setting view1Bound',e);
		}
	};
	this.view1Bound_changed = function () {
		var value = this.view1Bound;
		return value;
	};
	try {
		this.view1Bound = new SFBool();
	} catch (e) {
		console.log('Problems setting view1Bound '+e);
		console.error('Problems setting view1Bound',e);
	}
	this.set_view2Bound = function (value) {
		try {
			this.proxy.view2Bound = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting view2Bound '+e);
			console.error('Problems setting view2Bound',e);
		}
	};
	this.view2Bound_changed = function () {
		var value = this.view2Bound;
		return value;
	};
	try {
		this.view2Bound = new SFBool();
	} catch (e) {
		console.log('Problems setting view2Bound '+e);
		console.error('Problems setting view2Bound',e);
	}
	this.set_view3Bound = function (value) {
		try {
			this.proxy.view3Bound = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting view3Bound '+e);
			console.error('Problems setting view3Bound',e);
		}
	};
	this.view3Bound_changed = function () {
		var value = this.view3Bound;
		return value;
	};
	try {
		this.view3Bound = new SFBool();
	} catch (e) {
		console.log('Problems setting view3Bound '+e);
		console.error('Problems setting view3Bound',e);
	}
	this.set_view4Bound = function (value) {
		try {
			this.proxy.view4Bound = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting view4Bound '+e);
			console.error('Problems setting view4Bound',e);
		}
	};
	this.view4Bound_changed = function () {
		var value = this.view4Bound;
		return value;
	};
	try {
		this.view4Bound = new SFBool();
	} catch (e) {
		console.log('Problems setting view4Bound '+e);
		console.error('Problems setting view4Bound',e);
	}
	this.set_priorInputvalue = function (value) {
		try {
			this.proxy.priorInputvalue = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting priorInputvalue '+e);
			console.error('Problems setting priorInputvalue',e);
		}
	};
	this.priorInputvalue_changed = function () {
		var value = this.priorInputvalue;
		return value;
	};
	try {
		this.priorInputvalue = new SFInt32(-1);
	} catch (e) {
		console.log('Problems setting priorInputvalue '+e);
		console.error('Problems setting priorInputvalue',e);
	}

        ecmascript:

	this.initialize = function ()
{
    this.proxy.bindView5 = true;
    console.error ('Timing script initialized and ready for activation');
};

	this.set_timeEvent = function (inputValue)
{
    if (inputValue == this.proxy.priorInputvalue)
    {
        return; // ignore repeated inputs
    }
    // new value provided
    this.proxy.priorInputvalue = inputValue;
    // console.error ('timeEvent inputValue=' + inputValue);

    // mimics user execution of Figure 4.1 steps t_0 through t_8
    if (inputValue == 0)
    {
        console.error ('=========== time t0');
        this.proxy.bindView1 = true;
    }
    else if (inputValue == 1)
    {
        console.error ('=========== time t1');
        this.proxy.bindView2 = true;
    }
    else if (inputValue == 2)
    {
        console.error ('=========== time t2');
        this.proxy.bindView3 = true;
    }
    else if (inputValue == 3)
    {
        console.error ('=========== time t3');
        this.proxy.bindView3 = false;
    }
    else if (inputValue == 4)
    {
        console.error ('=========== time t4');
        this.proxy.bindView1 = true;
    }
    else if (inputValue == 5)
    {
        console.error ('=========== time t5');
        this.proxy.bindView2 = false;
    }
    else if (inputValue == 6)
    {
        console.error ('=========== time t6');
        this.proxy.bindView1 = false;
    }
    else if (inputValue == 7)
    {
        console.error ('=========== time t7');
        this.proxy.bindView4 = true;

    }
    else if (inputValue == 8)
    {
        console.error ('=========== time t8');
        console.error (', no action, all done');
        console.error ('');
    }
}
;

	this.view1Bound = function (inputValue)
{
    console.error (', this.proxy.view1Bound ' + (inputValue));
    if (this.proxy.priorInputvalue == -1) console.error ('');
};

	this.view2Bound = function (inputValue)
{
    console.error (', this.proxy.view2Bound ' + (inputValue));
};

	this.view3Bound = function (inputValue)
{
    console.error (', this.proxy.view3Bound ' + (inputValue));
};

	this.view4Bound = function (inputValue)
{
    console.error (', this.proxy.view4Bound ' + (inputValue));
};

	this.view5Bound = function (inputValue)
{
    console.error (', this.view5Bound ' + (inputValue));
}

;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/BindingOperations.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/BindingOperations.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'] = new X3DJSON['Script']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/BindingOperations.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/BindingOperations.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine']['ACTION'],X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].initialize === "function") X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].initialize();
    if (X3DJSON.nodeUtil("Scene","TextTouchSensor")) {
X3DJSON.nodeUtil("Scene","TextTouchSensor").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","Clock")) {
X3DJSON.nodeUtil("Scene","Clock").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","TimingSequencer")) {
X3DJSON.nodeUtil("Scene","TimingSequencer").addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].set_timeEvent(X3DJSON.nodeUtil("Scene","TimingSequencer","value"), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].set_timeEvent(X3DJSON.nodeUtil("Scene","TimingSequencer","value"), __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/BindingOperations.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/BindingOperations.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine']['ACTION']['bindView1'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine']['ACTION']['bindView1'] = [];
}
X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine']['ACTION']['bindView1'].push(function(property, value) {
		if (property === 'bindView1') {
			X3DJSON.nodeUtil("Scene","View1","bind",typeof X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView1 === "function" ? X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView1() : X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView1, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","View1","bind",typeof X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView1 === "function" ? X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView1() : X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView1, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/BindingOperations.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/BindingOperations.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine']['ACTION']['bindView2'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine']['ACTION']['bindView2'] = [];
}
X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine']['ACTION']['bindView2'].push(function(property, value) {
		if (property === 'bindView2') {
			X3DJSON.nodeUtil("Scene","View2","bind",typeof X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView2 === "function" ? X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView2() : X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView2, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","View2","bind",typeof X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView2 === "function" ? X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView2() : X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView2, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/BindingOperations.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/BindingOperations.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine']['ACTION']['bindView3'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine']['ACTION']['bindView3'] = [];
}
X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine']['ACTION']['bindView3'].push(function(property, value) {
		if (property === 'bindView3') {
			X3DJSON.nodeUtil("Scene","View3","bind",typeof X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView3 === "function" ? X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView3() : X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView3, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","View3","bind",typeof X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView3 === "function" ? X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView3() : X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView3, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/BindingOperations.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/BindingOperations.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine']['ACTION']['bindView4'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine']['ACTION']['bindView4'] = [];
}
X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine']['ACTION']['bindView4'].push(function(property, value) {
		if (property === 'bindView4') {
			X3DJSON.nodeUtil("Scene","View4","bind",typeof X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView4 === "function" ? X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView4() : X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView4, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","View4","bind",typeof X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView4 === "function" ? X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView4() : X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView4, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/BindingOperations.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/BindingOperations.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine']['ACTION']['bindView5'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine']['ACTION']['bindView5'] = [];
}
X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine']['ACTION']['bindView5'].push(function(property, value) {
		if (property === 'bindView5') {
			X3DJSON.nodeUtil("Scene","ClickToAnimateView","bind",typeof X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView5 === "function" ? X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView5() : X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView5, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","ClickToAnimateView","bind",typeof X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView5 === "function" ? X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView5() : X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView5, __eventTime);
    if (X3DJSON.nodeUtil("Scene","View1")) {
X3DJSON.nodeUtil("Scene","View1").addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].view1Bound(X3DJSON.nodeUtil("Scene","View1","isBound"), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].view1Bound(X3DJSON.nodeUtil("Scene","View1","isBound"), __eventTime);
    if (X3DJSON.nodeUtil("Scene","View2")) {
X3DJSON.nodeUtil("Scene","View2").addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].view2Bound(X3DJSON.nodeUtil("Scene","View2","isBound"), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].view2Bound(X3DJSON.nodeUtil("Scene","View2","isBound"), __eventTime);
    if (X3DJSON.nodeUtil("Scene","View3")) {
X3DJSON.nodeUtil("Scene","View3").addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].view3Bound(X3DJSON.nodeUtil("Scene","View3","isBound"), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].view3Bound(X3DJSON.nodeUtil("Scene","View3","isBound"), __eventTime);
    if (X3DJSON.nodeUtil("Scene","View4")) {
X3DJSON.nodeUtil("Scene","View4").addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].view4Bound(X3DJSON.nodeUtil("Scene","View4","isBound"), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].view4Bound(X3DJSON.nodeUtil("Scene","View4","isBound"), __eventTime);
			X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].set_timeEvent(X3DJSON.nodeUtil("Scene","TimingSequencer","value"), __eventTime);
			X3DJSON.nodeUtil("Scene","View1","bind",typeof X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView1 === "function" ? X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView1() : X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView1, __eventTime);
			X3DJSON.nodeUtil("Scene","View2","bind",typeof X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView2 === "function" ? X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView2() : X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView2, __eventTime);
			X3DJSON.nodeUtil("Scene","View3","bind",typeof X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView3 === "function" ? X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView3() : X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView3, __eventTime);
			X3DJSON.nodeUtil("Scene","View4","bind",typeof X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView4 === "function" ? X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView4() : X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView4, __eventTime);
			X3DJSON.nodeUtil("Scene","ClickToAnimateView","bind",typeof X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView5 === "function" ? X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView5() : X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].bindView5, __eventTime);
			X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].view1Bound(X3DJSON.nodeUtil("Scene","View1","isBound"), __eventTime);
			X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].view2Bound(X3DJSON.nodeUtil("Scene","View2","isBound"), __eventTime);
			X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].view3Bound(X3DJSON.nodeUtil("Scene","View3","isBound"), __eventTime);
			X3DJSON['Obj']['Scene']['../data/BindingOperations.json']['BindingSequencerEngine'].view4Bound(X3DJSON.nodeUtil("Scene","View4","isBound"), __eventTime);