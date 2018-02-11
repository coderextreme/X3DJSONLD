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

X3DJSON['Script']['BindingSequencerEngine'] = function() {
	this.set_timeEvent = function (value) {
		this.proxy.timeEvent = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.timeEvent_changed = function () {
		var value = this.timeEvent;
		return value;
	};
	this.timeEvent = undefined;
	this.set_bindView1 = function (value) {
		this.proxy.bindView1 = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.bindView1_changed = function () {
		var value = this.bindView1;
		return value;
	};
	this.bindView1 = new SFBool();
	this.set_bindView2 = function (value) {
		this.proxy.bindView2 = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.bindView2_changed = function () {
		var value = this.bindView2;
		return value;
	};
	this.bindView2 = new SFBool();
	this.set_bindView3 = function (value) {
		this.proxy.bindView3 = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.bindView3_changed = function () {
		var value = this.bindView3;
		return value;
	};
	this.bindView3 = new SFBool();
	this.set_bindView4 = function (value) {
		this.proxy.bindView4 = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.bindView4_changed = function () {
		var value = this.bindView4;
		return value;
	};
	this.bindView4 = new SFBool();
	this.set_bindView5 = function (value) {
		this.proxy.bindView5 = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.bindView5_changed = function () {
		var value = this.bindView5;
		return value;
	};
	this.bindView5 = new SFBool();
	this.set_view1Bound = function (value) {
		this.proxy.view1Bound = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.view1Bound_changed = function () {
		var value = this.view1Bound;
		return value;
	};
	this.view1Bound = new SFBool();
	this.set_view2Bound = function (value) {
		this.proxy.view2Bound = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.view2Bound_changed = function () {
		var value = this.view2Bound;
		return value;
	};
	this.view2Bound = new SFBool();
	this.set_view3Bound = function (value) {
		this.proxy.view3Bound = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.view3Bound_changed = function () {
		var value = this.view3Bound;
		return value;
	};
	this.view3Bound = new SFBool();
	this.set_view4Bound = function (value) {
		this.proxy.view4Bound = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.view4Bound_changed = function () {
		var value = this.view4Bound;
		return value;
	};
	this.view4Bound = new SFBool();
	this.set_priorInputvalue = function (value) {
		this.proxy.priorInputvalue = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.priorInputvalue_changed = function () {
		var value = this.priorInputvalue;
		return value;
	};
	this.priorInputvalue = new SFInt32(-1);
ecmascript: 
	this.initialize = function () { this.proxy.bindView5 = true; console.error ('Timing script initialized and ready for activation'); } ;

	this.set_timeEvent = function (inputValue) { if (inputValue == this.proxy.priorInputvalue) { return; // ignore repeated inputs } // new value provided this.proxy.priorInputvalue = inputValue; // console.error ('timeEvent inputValue=' + inputValue); // mimics user execution of Figure 4.1 steps t_0 through t_8 if (inputValue == 0) { console.error ('=========== time t0'); this.proxy.bindView1 = true; } else if (inputValue == 1) { console.error ('=========== time t1'); this.proxy.bindView2 = true; } else if (inputValue == 2) { console.error ('=========== time t2'); this.proxy.bindView3 = true; } else if (inputValue == 3) { console.error ('=========== time t3'); this.proxy.bindView3 = false; } else if (inputValue == 4) { console.error ('=========== time t4'); this.proxy.bindView1 = true; } else if (inputValue == 5) { console.error ('=========== time t5'); this.proxy.bindView2 = false; } else if (inputValue == 6) { console.error ('=========== time t6'); this.proxy.bindView1 = false; } else if (inputValue == 7) { console.error ('=========== time t7'); this.proxy.bindView4 = true; } else if (inputValue == 8) { console.error ('=========== time t8'); console.error (', no action, all done'); console.error (''); } } ;

	this.view1Bound = function (inputValue) { console.error (', this.proxy.view1Bound ' + (inputValue)); if (this.proxy.priorInputvalue == -1) console.error (''); } ;

	this.view2Bound = function (inputValue) { console.error (', this.proxy.view2Bound ' + (inputValue)); } ;

	this.view3Bound = function (inputValue) { console.error (', this.proxy.view3Bound ' + (inputValue)); } ;

	this.view4Bound = function (inputValue) { console.error (', this.proxy.view4Bound ' + (inputValue)); } functino view5Bound (inputValue) { console.error (', view5Bound ' + (inputValue)); };

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['BindingSequencerEngine'] = new X3DJSON['Script']['BindingSequencerEngine']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['BindingSequencerEngine'] === 'undefined') {
X3DJSON['Obj']['BindingSequencerEngine'] = {};
}

if (typeof X3DJSON['Obj']['BindingSequencerEngine']['ACTION'] === 'undefined') {
X3DJSON['Obj']['BindingSequencerEngine']['ACTION'] = {};
X3DJSON['Obj']['BindingSequencerEngine'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['BindingSequencerEngine']['ACTION'],X3DJSON['Obj']['BindingSequencerEngine']);
}
if (typeof X3DJSON['Obj']['BindingSequencerEngine'].initialize === "function") X3DJSON['Obj']['BindingSequencerEngine'].initialize();
X3DJSON.nodeUtil('TextTouchSensor').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('Clock').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('TimingSequencer').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['BindingSequencerEngine'].set_timeEvent(X3DJSON.nodeUtil('TimingSequencer','value'), __eventTime);
}, false);
			X3DJSON['Obj']['BindingSequencerEngine'].set_timeEvent(X3DJSON.nodeUtil('TimingSequencer','value'), __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['BindingSequencerEngine'] === 'undefined') {
X3DJSON['Obj']['BindingSequencerEngine'] = {};
}

if (typeof X3DJSON['Obj']['BindingSequencerEngine']['ACTION']['bindView1'] === 'undefined') {
X3DJSON['Obj']['BindingSequencerEngine']['ACTION']['bindView1'] = [];
}
X3DJSON['Obj']['BindingSequencerEngine']['ACTION']['bindView1'].push(function(property, value) {
		if (property === 'bindView1') {
			X3DJSON.nodeUtil('View1','bind',typeof X3DJSON['Obj']['BindingSequencerEngine'].bindView1 === "function" ? X3DJSON['Obj']['BindingSequencerEngine'].bindView1() : X3DJSON['Obj']['BindingSequencerEngine'].bindView1, __eventTime);
		}
});
			X3DJSON.nodeUtil('View1','bind',typeof X3DJSON['Obj']['BindingSequencerEngine'].bindView1 === "function" ? X3DJSON['Obj']['BindingSequencerEngine'].bindView1() : X3DJSON['Obj']['BindingSequencerEngine'].bindView1, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['BindingSequencerEngine'] === 'undefined') {
X3DJSON['Obj']['BindingSequencerEngine'] = {};
}

if (typeof X3DJSON['Obj']['BindingSequencerEngine']['ACTION']['bindView2'] === 'undefined') {
X3DJSON['Obj']['BindingSequencerEngine']['ACTION']['bindView2'] = [];
}
X3DJSON['Obj']['BindingSequencerEngine']['ACTION']['bindView2'].push(function(property, value) {
		if (property === 'bindView2') {
			X3DJSON.nodeUtil('View2','bind',typeof X3DJSON['Obj']['BindingSequencerEngine'].bindView2 === "function" ? X3DJSON['Obj']['BindingSequencerEngine'].bindView2() : X3DJSON['Obj']['BindingSequencerEngine'].bindView2, __eventTime);
		}
});
			X3DJSON.nodeUtil('View2','bind',typeof X3DJSON['Obj']['BindingSequencerEngine'].bindView2 === "function" ? X3DJSON['Obj']['BindingSequencerEngine'].bindView2() : X3DJSON['Obj']['BindingSequencerEngine'].bindView2, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['BindingSequencerEngine'] === 'undefined') {
X3DJSON['Obj']['BindingSequencerEngine'] = {};
}

if (typeof X3DJSON['Obj']['BindingSequencerEngine']['ACTION']['bindView3'] === 'undefined') {
X3DJSON['Obj']['BindingSequencerEngine']['ACTION']['bindView3'] = [];
}
X3DJSON['Obj']['BindingSequencerEngine']['ACTION']['bindView3'].push(function(property, value) {
		if (property === 'bindView3') {
			X3DJSON.nodeUtil('View3','bind',typeof X3DJSON['Obj']['BindingSequencerEngine'].bindView3 === "function" ? X3DJSON['Obj']['BindingSequencerEngine'].bindView3() : X3DJSON['Obj']['BindingSequencerEngine'].bindView3, __eventTime);
		}
});
			X3DJSON.nodeUtil('View3','bind',typeof X3DJSON['Obj']['BindingSequencerEngine'].bindView3 === "function" ? X3DJSON['Obj']['BindingSequencerEngine'].bindView3() : X3DJSON['Obj']['BindingSequencerEngine'].bindView3, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['BindingSequencerEngine'] === 'undefined') {
X3DJSON['Obj']['BindingSequencerEngine'] = {};
}

if (typeof X3DJSON['Obj']['BindingSequencerEngine']['ACTION']['bindView4'] === 'undefined') {
X3DJSON['Obj']['BindingSequencerEngine']['ACTION']['bindView4'] = [];
}
X3DJSON['Obj']['BindingSequencerEngine']['ACTION']['bindView4'].push(function(property, value) {
		if (property === 'bindView4') {
			X3DJSON.nodeUtil('View4','bind',typeof X3DJSON['Obj']['BindingSequencerEngine'].bindView4 === "function" ? X3DJSON['Obj']['BindingSequencerEngine'].bindView4() : X3DJSON['Obj']['BindingSequencerEngine'].bindView4, __eventTime);
		}
});
			X3DJSON.nodeUtil('View4','bind',typeof X3DJSON['Obj']['BindingSequencerEngine'].bindView4 === "function" ? X3DJSON['Obj']['BindingSequencerEngine'].bindView4() : X3DJSON['Obj']['BindingSequencerEngine'].bindView4, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['BindingSequencerEngine'] === 'undefined') {
X3DJSON['Obj']['BindingSequencerEngine'] = {};
}

if (typeof X3DJSON['Obj']['BindingSequencerEngine']['ACTION']['bindView5'] === 'undefined') {
X3DJSON['Obj']['BindingSequencerEngine']['ACTION']['bindView5'] = [];
}
X3DJSON['Obj']['BindingSequencerEngine']['ACTION']['bindView5'].push(function(property, value) {
		if (property === 'bindView5') {
			X3DJSON.nodeUtil('ClickToAnimateView','bind',typeof X3DJSON['Obj']['BindingSequencerEngine'].bindView5 === "function" ? X3DJSON['Obj']['BindingSequencerEngine'].bindView5() : X3DJSON['Obj']['BindingSequencerEngine'].bindView5, __eventTime);
		}
});
			X3DJSON.nodeUtil('ClickToAnimateView','bind',typeof X3DJSON['Obj']['BindingSequencerEngine'].bindView5 === "function" ? X3DJSON['Obj']['BindingSequencerEngine'].bindView5() : X3DJSON['Obj']['BindingSequencerEngine'].bindView5, __eventTime);
X3DJSON.nodeUtil('View1').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['BindingSequencerEngine'].view1Bound(X3DJSON.nodeUtil('View1','isBound'), __eventTime);
}, false);
			X3DJSON['Obj']['BindingSequencerEngine'].view1Bound(X3DJSON.nodeUtil('View1','isBound'), __eventTime);
X3DJSON.nodeUtil('View2').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['BindingSequencerEngine'].view2Bound(X3DJSON.nodeUtil('View2','isBound'), __eventTime);
}, false);
			X3DJSON['Obj']['BindingSequencerEngine'].view2Bound(X3DJSON.nodeUtil('View2','isBound'), __eventTime);
X3DJSON.nodeUtil('View3').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['BindingSequencerEngine'].view3Bound(X3DJSON.nodeUtil('View3','isBound'), __eventTime);
}, false);
			X3DJSON['Obj']['BindingSequencerEngine'].view3Bound(X3DJSON.nodeUtil('View3','isBound'), __eventTime);
X3DJSON.nodeUtil('View4').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['BindingSequencerEngine'].view4Bound(X3DJSON.nodeUtil('View4','isBound'), __eventTime);
}, false);
			X3DJSON['Obj']['BindingSequencerEngine'].view4Bound(X3DJSON.nodeUtil('View4','isBound'), __eventTime);
			X3DJSON['Obj']['BindingSequencerEngine'].set_timeEvent(X3DJSON.nodeUtil('TimingSequencer','value'), __eventTime);
			X3DJSON.nodeUtil('View1','bind',typeof X3DJSON['Obj']['BindingSequencerEngine'].bindView1 === "function" ? X3DJSON['Obj']['BindingSequencerEngine'].bindView1() : X3DJSON['Obj']['BindingSequencerEngine'].bindView1, __eventTime);
			X3DJSON.nodeUtil('View2','bind',typeof X3DJSON['Obj']['BindingSequencerEngine'].bindView2 === "function" ? X3DJSON['Obj']['BindingSequencerEngine'].bindView2() : X3DJSON['Obj']['BindingSequencerEngine'].bindView2, __eventTime);
			X3DJSON.nodeUtil('View3','bind',typeof X3DJSON['Obj']['BindingSequencerEngine'].bindView3 === "function" ? X3DJSON['Obj']['BindingSequencerEngine'].bindView3() : X3DJSON['Obj']['BindingSequencerEngine'].bindView3, __eventTime);
			X3DJSON.nodeUtil('View4','bind',typeof X3DJSON['Obj']['BindingSequencerEngine'].bindView4 === "function" ? X3DJSON['Obj']['BindingSequencerEngine'].bindView4() : X3DJSON['Obj']['BindingSequencerEngine'].bindView4, __eventTime);
			X3DJSON.nodeUtil('ClickToAnimateView','bind',typeof X3DJSON['Obj']['BindingSequencerEngine'].bindView5 === "function" ? X3DJSON['Obj']['BindingSequencerEngine'].bindView5() : X3DJSON['Obj']['BindingSequencerEngine'].bindView5, __eventTime);
			X3DJSON['Obj']['BindingSequencerEngine'].view1Bound(X3DJSON.nodeUtil('View1','isBound'), __eventTime);
			X3DJSON['Obj']['BindingSequencerEngine'].view2Bound(X3DJSON.nodeUtil('View2','isBound'), __eventTime);
			X3DJSON['Obj']['BindingSequencerEngine'].view3Bound(X3DJSON.nodeUtil('View3','isBound'), __eventTime);
			X3DJSON['Obj']['BindingSequencerEngine'].view4Bound(X3DJSON.nodeUtil('View4','isBound'), __eventTime);