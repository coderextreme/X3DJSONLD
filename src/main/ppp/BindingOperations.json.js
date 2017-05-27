var x3dom = require('../node/fields.js');
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
SFBool = Boolean;
var SFColor = x3dom.fields.SFColor;
var SFColorRGBA = x3dom.fields.SFColorRGBA;
SFDouble = Number;
SFFloat = Number;
SFInt32 = Number;
var SFImage = x3dom.fields.SFImage;
var SFMatrix3d = function() { return Array.prototype.slice.call(arguments, 0); };
var SFMatrix3f = function() { return Array.prototype.slice.call(arguments, 0); };
var SFMatrix4d = function() { return Array.prototype.slice.call(arguments, 0); };
var SFMatrix4f = x3dom.fields.SFMatrix4f;
var SFNode = x3dom.fields.SFNode;
var SFRotation = x3dom.fields.Quaternion;
SFString = String;
SFTime = Number;
var SFVec2d = function() { return Array.prototype.slice.call(arguments, 0); };
var SFVec2f = x3dom.fields.SFVec2f;
var SFVec3d = function() { return Array.prototype.slice.call(arguments, 0); };
var SFVec3f = x3dom.fields.SFVec3f;
var SFVec4d = function() { return Array.prototype.slice.call(arguments, 0); };
var SFvec4f = x3dom.fields.SFvec4f;
var X3DJSON = {};
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
		var element = document.querySelector("[DEF='"+node+"'], [name='"+node+"']");
		if (element === null) {
			console.error('unDEFed node',node);
		} else if (arguments.length > 2) {
			element.setAttribute(field, value);
			console.log('set '+ field+ '='+ value);
			return element;
		} else if (arguments.length > 1) {
			var value = element.getAttribute(field)
			console.log('get', field,'=',value);
			return value;
		} else {
			return element;
		}
};
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['BindingSequencerEngine'] = function() {
	this.set_timeEvent = function (value) {
		X3DJSON.nodeUtil('BindingSequencerEngine', 'timeEvent', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.timeEvent_changed = function () {
		return X3DJSON.nodeUtil('BindingSequencerEngine', 'timeEvent');
	};
	this.set_timeEvent(undefined);
	this.set_bindView1 = function (value) {
		X3DJSON.nodeUtil('BindingSequencerEngine', 'bindView1', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.bindView1_changed = function () {
		return X3DJSON.nodeUtil('BindingSequencerEngine', 'bindView1');
	};
	this.set_bindView1(new SFBool());
	this.set_bindView2 = function (value) {
		X3DJSON.nodeUtil('BindingSequencerEngine', 'bindView2', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.bindView2_changed = function () {
		return X3DJSON.nodeUtil('BindingSequencerEngine', 'bindView2');
	};
	this.set_bindView2(new SFBool());
	this.set_bindView3 = function (value) {
		X3DJSON.nodeUtil('BindingSequencerEngine', 'bindView3', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.bindView3_changed = function () {
		return X3DJSON.nodeUtil('BindingSequencerEngine', 'bindView3');
	};
	this.set_bindView3(new SFBool());
	this.set_bindView4 = function (value) {
		X3DJSON.nodeUtil('BindingSequencerEngine', 'bindView4', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.bindView4_changed = function () {
		return X3DJSON.nodeUtil('BindingSequencerEngine', 'bindView4');
	};
	this.set_bindView4(new SFBool());
	this.set_bindView5 = function (value) {
		X3DJSON.nodeUtil('BindingSequencerEngine', 'bindView5', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.bindView5_changed = function () {
		return X3DJSON.nodeUtil('BindingSequencerEngine', 'bindView5');
	};
	this.set_bindView5(new SFBool());
	this.set_view1Bound = function (value) {
		X3DJSON.nodeUtil('BindingSequencerEngine', 'view1Bound', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.view1Bound_changed = function () {
		return X3DJSON.nodeUtil('BindingSequencerEngine', 'view1Bound');
	};
	this.set_view1Bound(new SFBool());
	this.set_view2Bound = function (value) {
		X3DJSON.nodeUtil('BindingSequencerEngine', 'view2Bound', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.view2Bound_changed = function () {
		return X3DJSON.nodeUtil('BindingSequencerEngine', 'view2Bound');
	};
	this.set_view2Bound(new SFBool());
	this.set_view3Bound = function (value) {
		X3DJSON.nodeUtil('BindingSequencerEngine', 'view3Bound', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.view3Bound_changed = function () {
		return X3DJSON.nodeUtil('BindingSequencerEngine', 'view3Bound');
	};
	this.set_view3Bound(new SFBool());
	this.set_view4Bound = function (value) {
		X3DJSON.nodeUtil('BindingSequencerEngine', 'view4Bound', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.view4Bound_changed = function () {
		return X3DJSON.nodeUtil('BindingSequencerEngine', 'view4Bound');
	};
	this.set_view4Bound(new SFBool());
	this.set_priorInputvalue = function (value) {
		X3DJSON.nodeUtil('BindingSequencerEngine', 'priorInputvalue', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.priorInputvalue_changed = function () {
		return X3DJSON.nodeUtil('BindingSequencerEngine', 'priorInputvalue');
	};
	this.set_priorInputvalue(new SFInt32(-1));

        
ecmascript:


	this.initialize = function ()
{
    this.set_bindView5 ( true);
    console.error ('Timing script initialized and ready for activation');
}
;

	this.set_timeEvent = function (inputValue)
{
    if (inputValue == this.priorInputvalue_changed())
    {
        return; // ignore repeated inputs
    }
    // new value provided
    this.set_priorInputvalue ( inputValue);
    // console.error ('timeEvent inputValue=' + inputValue);
        
    // mimics user execution of Figure 4.1 steps t_0 through t_8
    if (inputValue == 0)
    {
        console.error ('=========== time t0');
        this.set_bindView1 ( true);
    }
    else if (inputValue == 1)
    {
        console.error ('=========== time t1');
        this.set_bindView2 ( true);
    }
    else if (inputValue == 2)
    {
        console.error ('=========== time t2');
        this.set_bindView3 ( true);
    }
    else if (inputValue == 3)
    {
        console.error ('=========== time t3');
        this.set_bindView3 ( false);
    }
    else if (inputValue == 4)
    {
        console.error ('=========== time t4');
        this.set_bindView1 ( true);
    }
    else if (inputValue == 5)
    {
        console.error ('=========== time t5');
        this.set_bindView2 ( false);
    }
    else if (inputValue == 6)
    {
        console.error ('=========== time t6');
        this.set_bindView1 ( false);
    }
    else if (inputValue == 7)
    {
        console.error ('=========== time t7');
        this.set_bindView4 ( true);

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
    console.error (', this.view1Bound_changed() ' + (inputValue));
    if (this.priorInputvalue_changed() == -1) console.error ('');
}
;

	this.view2Bound = function (inputValue)
{
    console.error (', this.view2Bound_changed() ' + (inputValue));
}
;

	this.view3Bound = function (inputValue)
{
    console.error (', this.view3Bound_changed() ' + (inputValue));
}
;

	this.view4Bound = function (inputValue)
{
    console.error (', this.view4Bound_changed() ' + (inputValue));
}
;

	this.view5Bound = function (inputValue)
{
    console.error (', this.view5Bound ' + (inputValue));
};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['BindingSequencerEngine'] = new X3DJSON['Script']['BindingSequencerEngine']();
if (typeof X3DJSON['Obj']['BindingSequencerEngine'].initialize === "function") X3DJSON['Obj']['BindingSequencerEngine'].initialize();
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouchSensor'] === 'undefined') {
X3DJSON['ROUTE']['TextTouchSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouchSensor']['touchTime'] === 'undefined') {
X3DJSON['ROUTE']['TextTouchSensor']['touchTime'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouchSensor']['touchTime']['Clock'] === 'undefined') {
X3DJSON['ROUTE']['TextTouchSensor']['touchTime']['Clock'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouchSensor']['touchTime']['Clock']['set_startTime'] === 'undefined') {
X3DJSON['ROUTE']['TextTouchSensor']['touchTime']['Clock']['set_startTime'] = {};
}

X3DJSON['ROUTE']['TextTouchSensor']['touchTime']['Clock']['set_startTime']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'touchTime');
			X3DJSON.nodeUtil('Clock','set_startTime',X3DJSON.nodeUtil('TextTouchSensor','touchTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['touchTime'] };
X3DJSON['ROUTE']['TextTouchSensor']['touchTime']['Clock']['set_startTime']['FROM'].observe(X3DJSON.nodeUtil('TextTouchSensor'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouchSensor'] === 'undefined') {
X3DJSON['ROUTE']['TextTouchSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouchSensor']['touchTime'] === 'undefined') {
X3DJSON['ROUTE']['TextTouchSensor']['touchTime'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouchSensor']['touchTime']['Clock'] === 'undefined') {
X3DJSON['ROUTE']['TextTouchSensor']['touchTime']['Clock'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouchSensor']['touchTime']['Clock']['set_startTime'] === 'undefined') {
X3DJSON['ROUTE']['TextTouchSensor']['touchTime']['Clock']['set_startTime'] = {};
}

X3DJSON['ROUTE']['TextTouchSensor']['touchTime']['Clock']['set_startTime']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_startTime');
			if (typeof X3DJSON['Obj']['Clock'].set_startTime === "function") X3DJSON['Obj']['Clock'].set_startTime(X3DJSON.nodeUtil('Clock','set_startTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_startTime'] };
X3DJSON['ROUTE']['TextTouchSensor']['touchTime']['Clock']['set_startTime']['TO'].observe(X3DJSON.nodeUtil('Clock'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock'] === 'undefined') {
X3DJSON['ROUTE']['Clock'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['Clock']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock']['fraction_changed']['TimingSequencer'] === 'undefined') {
X3DJSON['ROUTE']['Clock']['fraction_changed']['TimingSequencer'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock']['fraction_changed']['TimingSequencer']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['Clock']['fraction_changed']['TimingSequencer']['set_fraction'] = {};
}

X3DJSON['ROUTE']['Clock']['fraction_changed']['TimingSequencer']['set_fraction']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'fraction_changed');
			X3DJSON.nodeUtil('TimingSequencer','set_fraction',X3DJSON.nodeUtil('Clock','fraction_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['fraction_changed'] };
X3DJSON['ROUTE']['Clock']['fraction_changed']['TimingSequencer']['set_fraction']['FROM'].observe(X3DJSON.nodeUtil('Clock'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock'] === 'undefined') {
X3DJSON['ROUTE']['Clock'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['Clock']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock']['fraction_changed']['TimingSequencer'] === 'undefined') {
X3DJSON['ROUTE']['Clock']['fraction_changed']['TimingSequencer'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock']['fraction_changed']['TimingSequencer']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['Clock']['fraction_changed']['TimingSequencer']['set_fraction'] = {};
}

X3DJSON['ROUTE']['Clock']['fraction_changed']['TimingSequencer']['set_fraction']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_fraction');
			if (typeof X3DJSON['Obj']['TimingSequencer'].set_fraction === "function") X3DJSON['Obj']['TimingSequencer'].set_fraction(X3DJSON.nodeUtil('TimingSequencer','set_fraction'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_fraction'] };
X3DJSON['ROUTE']['Clock']['fraction_changed']['TimingSequencer']['set_fraction']['TO'].observe(X3DJSON.nodeUtil('TimingSequencer'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TimingSequencer'] === 'undefined') {
X3DJSON['ROUTE']['TimingSequencer'] = {};
}
if (typeof X3DJSON['ROUTE']['TimingSequencer']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['TimingSequencer']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['TimingSequencer']['value_changed']['BindingSequencerEngine'] === 'undefined') {
X3DJSON['ROUTE']['TimingSequencer']['value_changed']['BindingSequencerEngine'] = {};
}
if (typeof X3DJSON['ROUTE']['TimingSequencer']['value_changed']['BindingSequencerEngine']['set_timeEvent'] === 'undefined') {
X3DJSON['ROUTE']['TimingSequencer']['value_changed']['BindingSequencerEngine']['set_timeEvent'] = {};
}

X3DJSON['ROUTE']['TimingSequencer']['value_changed']['BindingSequencerEngine']['set_timeEvent']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'value_changed');
			X3DJSON.nodeUtil('BindingSequencerEngine','set_timeEvent',X3DJSON.nodeUtil('TimingSequencer','value_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['value_changed'] };
X3DJSON['ROUTE']['TimingSequencer']['value_changed']['BindingSequencerEngine']['set_timeEvent']['FROM'].observe(X3DJSON.nodeUtil('TimingSequencer'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TimingSequencer'] === 'undefined') {
X3DJSON['ROUTE']['TimingSequencer'] = {};
}
if (typeof X3DJSON['ROUTE']['TimingSequencer']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['TimingSequencer']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['TimingSequencer']['value_changed']['BindingSequencerEngine'] === 'undefined') {
X3DJSON['ROUTE']['TimingSequencer']['value_changed']['BindingSequencerEngine'] = {};
}
if (typeof X3DJSON['ROUTE']['TimingSequencer']['value_changed']['BindingSequencerEngine']['set_timeEvent'] === 'undefined') {
X3DJSON['ROUTE']['TimingSequencer']['value_changed']['BindingSequencerEngine']['set_timeEvent'] = {};
}

X3DJSON['ROUTE']['TimingSequencer']['value_changed']['BindingSequencerEngine']['set_timeEvent']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_timeEvent');
			if (typeof X3DJSON['Obj']['BindingSequencerEngine'].set_timeEvent === "function") X3DJSON['Obj']['BindingSequencerEngine'].set_timeEvent(X3DJSON.nodeUtil('BindingSequencerEngine','set_timeEvent'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_timeEvent'] };
X3DJSON['ROUTE']['TimingSequencer']['value_changed']['BindingSequencerEngine']['set_timeEvent']['TO'].observe(X3DJSON.nodeUtil('BindingSequencerEngine'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['BindingSequencerEngine'] === 'undefined') {
X3DJSON['ROUTE']['BindingSequencerEngine'] = {};
}
if (typeof X3DJSON['ROUTE']['BindingSequencerEngine']['bindView1'] === 'undefined') {
X3DJSON['ROUTE']['BindingSequencerEngine']['bindView1'] = {};
}
if (typeof X3DJSON['ROUTE']['BindingSequencerEngine']['bindView1']['View1'] === 'undefined') {
X3DJSON['ROUTE']['BindingSequencerEngine']['bindView1']['View1'] = {};
}
if (typeof X3DJSON['ROUTE']['BindingSequencerEngine']['bindView1']['View1']['set_bind'] === 'undefined') {
X3DJSON['ROUTE']['BindingSequencerEngine']['bindView1']['View1']['set_bind'] = {};
}

X3DJSON['ROUTE']['BindingSequencerEngine']['bindView1']['View1']['set_bind']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'bindView1');
			X3DJSON.nodeUtil('View1','set_bind',X3DJSON.nodeUtil('BindingSequencerEngine','bindView1'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['bindView1'] };
X3DJSON['ROUTE']['BindingSequencerEngine']['bindView1']['View1']['set_bind']['FROM'].observe(X3DJSON.nodeUtil('BindingSequencerEngine'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['BindingSequencerEngine'] === 'undefined') {
X3DJSON['ROUTE']['BindingSequencerEngine'] = {};
}
if (typeof X3DJSON['ROUTE']['BindingSequencerEngine']['bindView1'] === 'undefined') {
X3DJSON['ROUTE']['BindingSequencerEngine']['bindView1'] = {};
}
if (typeof X3DJSON['ROUTE']['BindingSequencerEngine']['bindView1']['View1'] === 'undefined') {
X3DJSON['ROUTE']['BindingSequencerEngine']['bindView1']['View1'] = {};
}
if (typeof X3DJSON['ROUTE']['BindingSequencerEngine']['bindView1']['View1']['set_bind'] === 'undefined') {
X3DJSON['ROUTE']['BindingSequencerEngine']['bindView1']['View1']['set_bind'] = {};
}

X3DJSON['ROUTE']['BindingSequencerEngine']['bindView1']['View1']['set_bind']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_bind');
			if (typeof X3DJSON['Obj']['View1'].set_bind === "function") X3DJSON['Obj']['View1'].set_bind(X3DJSON.nodeUtil('View1','set_bind'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_bind'] };
X3DJSON['ROUTE']['BindingSequencerEngine']['bindView1']['View1']['set_bind']['TO'].observe(X3DJSON.nodeUtil('View1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['BindingSequencerEngine'] === 'undefined') {
X3DJSON['ROUTE']['BindingSequencerEngine'] = {};
}
if (typeof X3DJSON['ROUTE']['BindingSequencerEngine']['bindView2'] === 'undefined') {
X3DJSON['ROUTE']['BindingSequencerEngine']['bindView2'] = {};
}
if (typeof X3DJSON['ROUTE']['BindingSequencerEngine']['bindView2']['View2'] === 'undefined') {
X3DJSON['ROUTE']['BindingSequencerEngine']['bindView2']['View2'] = {};
}
if (typeof X3DJSON['ROUTE']['BindingSequencerEngine']['bindView2']['View2']['set_bind'] === 'undefined') {
X3DJSON['ROUTE']['BindingSequencerEngine']['bindView2']['View2']['set_bind'] = {};
}

X3DJSON['ROUTE']['BindingSequencerEngine']['bindView2']['View2']['set_bind']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'bindView2');
			X3DJSON.nodeUtil('View2','set_bind',X3DJSON.nodeUtil('BindingSequencerEngine','bindView2'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['bindView2'] };
X3DJSON['ROUTE']['BindingSequencerEngine']['bindView2']['View2']['set_bind']['FROM'].observe(X3DJSON.nodeUtil('BindingSequencerEngine'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['BindingSequencerEngine'] === 'undefined') {
X3DJSON['ROUTE']['BindingSequencerEngine'] = {};
}
if (typeof X3DJSON['ROUTE']['BindingSequencerEngine']['bindView2'] === 'undefined') {
X3DJSON['ROUTE']['BindingSequencerEngine']['bindView2'] = {};
}
if (typeof X3DJSON['ROUTE']['BindingSequencerEngine']['bindView2']['View2'] === 'undefined') {
X3DJSON['ROUTE']['BindingSequencerEngine']['bindView2']['View2'] = {};
}
if (typeof X3DJSON['ROUTE']['BindingSequencerEngine']['bindView2']['View2']['set_bind'] === 'undefined') {
X3DJSON['ROUTE']['BindingSequencerEngine']['bindView2']['View2']['set_bind'] = {};
}

X3DJSON['ROUTE']['BindingSequencerEngine']['bindView2']['View2']['set_bind']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_bind');
			if (typeof X3DJSON['Obj']['View2'].set_bind === "function") X3DJSON['Obj']['View2'].set_bind(X3DJSON.nodeUtil('View2','set_bind'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_bind'] };
X3DJSON['ROUTE']['BindingSequencerEngine']['bindView2']['View2']['set_bind']['TO'].observe(X3DJSON.nodeUtil('View2'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['BindingSequencerEngine'] === 'undefined') {
X3DJSON['ROUTE']['BindingSequencerEngine'] = {};
}
if (typeof X3DJSON['ROUTE']['BindingSequencerEngine']['bindView3'] === 'undefined') {
X3DJSON['ROUTE']['BindingSequencerEngine']['bindView3'] = {};
}
if (typeof X3DJSON['ROUTE']['BindingSequencerEngine']['bindView3']['View3'] === 'undefined') {
X3DJSON['ROUTE']['BindingSequencerEngine']['bindView3']['View3'] = {};
}
if (typeof X3DJSON['ROUTE']['BindingSequencerEngine']['bindView3']['View3']['set_bind'] === 'undefined') {
X3DJSON['ROUTE']['BindingSequencerEngine']['bindView3']['View3']['set_bind'] = {};
}

X3DJSON['ROUTE']['BindingSequencerEngine']['bindView3']['View3']['set_bind']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'bindView3');
			X3DJSON.nodeUtil('View3','set_bind',X3DJSON.nodeUtil('BindingSequencerEngine','bindView3'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['bindView3'] };
X3DJSON['ROUTE']['BindingSequencerEngine']['bindView3']['View3']['set_bind']['FROM'].observe(X3DJSON.nodeUtil('BindingSequencerEngine'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['BindingSequencerEngine'] === 'undefined') {
X3DJSON['ROUTE']['BindingSequencerEngine'] = {};
}
if (typeof X3DJSON['ROUTE']['BindingSequencerEngine']['bindView3'] === 'undefined') {
X3DJSON['ROUTE']['BindingSequencerEngine']['bindView3'] = {};
}
if (typeof X3DJSON['ROUTE']['BindingSequencerEngine']['bindView3']['View3'] === 'undefined') {
X3DJSON['ROUTE']['BindingSequencerEngine']['bindView3']['View3'] = {};
}
if (typeof X3DJSON['ROUTE']['BindingSequencerEngine']['bindView3']['View3']['set_bind'] === 'undefined') {
X3DJSON['ROUTE']['BindingSequencerEngine']['bindView3']['View3']['set_bind'] = {};
}

X3DJSON['ROUTE']['BindingSequencerEngine']['bindView3']['View3']['set_bind']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_bind');
			if (typeof X3DJSON['Obj']['View3'].set_bind === "function") X3DJSON['Obj']['View3'].set_bind(X3DJSON.nodeUtil('View3','set_bind'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_bind'] };
X3DJSON['ROUTE']['BindingSequencerEngine']['bindView3']['View3']['set_bind']['TO'].observe(X3DJSON.nodeUtil('View3'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['BindingSequencerEngine'] === 'undefined') {
X3DJSON['ROUTE']['BindingSequencerEngine'] = {};
}
if (typeof X3DJSON['ROUTE']['BindingSequencerEngine']['bindView4'] === 'undefined') {
X3DJSON['ROUTE']['BindingSequencerEngine']['bindView4'] = {};
}
if (typeof X3DJSON['ROUTE']['BindingSequencerEngine']['bindView4']['View4'] === 'undefined') {
X3DJSON['ROUTE']['BindingSequencerEngine']['bindView4']['View4'] = {};
}
if (typeof X3DJSON['ROUTE']['BindingSequencerEngine']['bindView4']['View4']['set_bind'] === 'undefined') {
X3DJSON['ROUTE']['BindingSequencerEngine']['bindView4']['View4']['set_bind'] = {};
}

X3DJSON['ROUTE']['BindingSequencerEngine']['bindView4']['View4']['set_bind']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'bindView4');
			X3DJSON.nodeUtil('View4','set_bind',X3DJSON.nodeUtil('BindingSequencerEngine','bindView4'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['bindView4'] };
X3DJSON['ROUTE']['BindingSequencerEngine']['bindView4']['View4']['set_bind']['FROM'].observe(X3DJSON.nodeUtil('BindingSequencerEngine'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['BindingSequencerEngine'] === 'undefined') {
X3DJSON['ROUTE']['BindingSequencerEngine'] = {};
}
if (typeof X3DJSON['ROUTE']['BindingSequencerEngine']['bindView4'] === 'undefined') {
X3DJSON['ROUTE']['BindingSequencerEngine']['bindView4'] = {};
}
if (typeof X3DJSON['ROUTE']['BindingSequencerEngine']['bindView4']['View4'] === 'undefined') {
X3DJSON['ROUTE']['BindingSequencerEngine']['bindView4']['View4'] = {};
}
if (typeof X3DJSON['ROUTE']['BindingSequencerEngine']['bindView4']['View4']['set_bind'] === 'undefined') {
X3DJSON['ROUTE']['BindingSequencerEngine']['bindView4']['View4']['set_bind'] = {};
}

X3DJSON['ROUTE']['BindingSequencerEngine']['bindView4']['View4']['set_bind']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_bind');
			if (typeof X3DJSON['Obj']['View4'].set_bind === "function") X3DJSON['Obj']['View4'].set_bind(X3DJSON.nodeUtil('View4','set_bind'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_bind'] };
X3DJSON['ROUTE']['BindingSequencerEngine']['bindView4']['View4']['set_bind']['TO'].observe(X3DJSON.nodeUtil('View4'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['BindingSequencerEngine'] === 'undefined') {
X3DJSON['ROUTE']['BindingSequencerEngine'] = {};
}
if (typeof X3DJSON['ROUTE']['BindingSequencerEngine']['bindView5'] === 'undefined') {
X3DJSON['ROUTE']['BindingSequencerEngine']['bindView5'] = {};
}
if (typeof X3DJSON['ROUTE']['BindingSequencerEngine']['bindView5']['ClickToAnimateView'] === 'undefined') {
X3DJSON['ROUTE']['BindingSequencerEngine']['bindView5']['ClickToAnimateView'] = {};
}
if (typeof X3DJSON['ROUTE']['BindingSequencerEngine']['bindView5']['ClickToAnimateView']['set_bind'] === 'undefined') {
X3DJSON['ROUTE']['BindingSequencerEngine']['bindView5']['ClickToAnimateView']['set_bind'] = {};
}

X3DJSON['ROUTE']['BindingSequencerEngine']['bindView5']['ClickToAnimateView']['set_bind']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'bindView5');
			X3DJSON.nodeUtil('ClickToAnimateView','set_bind',X3DJSON.nodeUtil('BindingSequencerEngine','bindView5'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['bindView5'] };
X3DJSON['ROUTE']['BindingSequencerEngine']['bindView5']['ClickToAnimateView']['set_bind']['FROM'].observe(X3DJSON.nodeUtil('BindingSequencerEngine'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['BindingSequencerEngine'] === 'undefined') {
X3DJSON['ROUTE']['BindingSequencerEngine'] = {};
}
if (typeof X3DJSON['ROUTE']['BindingSequencerEngine']['bindView5'] === 'undefined') {
X3DJSON['ROUTE']['BindingSequencerEngine']['bindView5'] = {};
}
if (typeof X3DJSON['ROUTE']['BindingSequencerEngine']['bindView5']['ClickToAnimateView'] === 'undefined') {
X3DJSON['ROUTE']['BindingSequencerEngine']['bindView5']['ClickToAnimateView'] = {};
}
if (typeof X3DJSON['ROUTE']['BindingSequencerEngine']['bindView5']['ClickToAnimateView']['set_bind'] === 'undefined') {
X3DJSON['ROUTE']['BindingSequencerEngine']['bindView5']['ClickToAnimateView']['set_bind'] = {};
}

X3DJSON['ROUTE']['BindingSequencerEngine']['bindView5']['ClickToAnimateView']['set_bind']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_bind');
			if (typeof X3DJSON['Obj']['ClickToAnimateView'].set_bind === "function") X3DJSON['Obj']['ClickToAnimateView'].set_bind(X3DJSON.nodeUtil('ClickToAnimateView','set_bind'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_bind'] };
X3DJSON['ROUTE']['BindingSequencerEngine']['bindView5']['ClickToAnimateView']['set_bind']['TO'].observe(X3DJSON.nodeUtil('ClickToAnimateView'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['View1'] === 'undefined') {
X3DJSON['ROUTE']['View1'] = {};
}
if (typeof X3DJSON['ROUTE']['View1']['isBound'] === 'undefined') {
X3DJSON['ROUTE']['View1']['isBound'] = {};
}
if (typeof X3DJSON['ROUTE']['View1']['isBound']['BindingSequencerEngine'] === 'undefined') {
X3DJSON['ROUTE']['View1']['isBound']['BindingSequencerEngine'] = {};
}
if (typeof X3DJSON['ROUTE']['View1']['isBound']['BindingSequencerEngine']['view1Bound'] === 'undefined') {
X3DJSON['ROUTE']['View1']['isBound']['BindingSequencerEngine']['view1Bound'] = {};
}

X3DJSON['ROUTE']['View1']['isBound']['BindingSequencerEngine']['view1Bound']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'isBound');
			X3DJSON.nodeUtil('BindingSequencerEngine','view1Bound',X3DJSON.nodeUtil('View1','isBound'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['isBound'] };
X3DJSON['ROUTE']['View1']['isBound']['BindingSequencerEngine']['view1Bound']['FROM'].observe(X3DJSON.nodeUtil('View1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['View1'] === 'undefined') {
X3DJSON['ROUTE']['View1'] = {};
}
if (typeof X3DJSON['ROUTE']['View1']['isBound'] === 'undefined') {
X3DJSON['ROUTE']['View1']['isBound'] = {};
}
if (typeof X3DJSON['ROUTE']['View1']['isBound']['BindingSequencerEngine'] === 'undefined') {
X3DJSON['ROUTE']['View1']['isBound']['BindingSequencerEngine'] = {};
}
if (typeof X3DJSON['ROUTE']['View1']['isBound']['BindingSequencerEngine']['view1Bound'] === 'undefined') {
X3DJSON['ROUTE']['View1']['isBound']['BindingSequencerEngine']['view1Bound'] = {};
}

X3DJSON['ROUTE']['View1']['isBound']['BindingSequencerEngine']['view1Bound']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'view1Bound');
			if (typeof X3DJSON['Obj']['BindingSequencerEngine'].view1Bound === "function") X3DJSON['Obj']['BindingSequencerEngine'].view1Bound(X3DJSON.nodeUtil('BindingSequencerEngine','view1Bound'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['view1Bound'] };
X3DJSON['ROUTE']['View1']['isBound']['BindingSequencerEngine']['view1Bound']['TO'].observe(X3DJSON.nodeUtil('BindingSequencerEngine'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['View2'] === 'undefined') {
X3DJSON['ROUTE']['View2'] = {};
}
if (typeof X3DJSON['ROUTE']['View2']['isBound'] === 'undefined') {
X3DJSON['ROUTE']['View2']['isBound'] = {};
}
if (typeof X3DJSON['ROUTE']['View2']['isBound']['BindingSequencerEngine'] === 'undefined') {
X3DJSON['ROUTE']['View2']['isBound']['BindingSequencerEngine'] = {};
}
if (typeof X3DJSON['ROUTE']['View2']['isBound']['BindingSequencerEngine']['view2Bound'] === 'undefined') {
X3DJSON['ROUTE']['View2']['isBound']['BindingSequencerEngine']['view2Bound'] = {};
}

X3DJSON['ROUTE']['View2']['isBound']['BindingSequencerEngine']['view2Bound']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'isBound');
			X3DJSON.nodeUtil('BindingSequencerEngine','view2Bound',X3DJSON.nodeUtil('View2','isBound'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['isBound'] };
X3DJSON['ROUTE']['View2']['isBound']['BindingSequencerEngine']['view2Bound']['FROM'].observe(X3DJSON.nodeUtil('View2'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['View2'] === 'undefined') {
X3DJSON['ROUTE']['View2'] = {};
}
if (typeof X3DJSON['ROUTE']['View2']['isBound'] === 'undefined') {
X3DJSON['ROUTE']['View2']['isBound'] = {};
}
if (typeof X3DJSON['ROUTE']['View2']['isBound']['BindingSequencerEngine'] === 'undefined') {
X3DJSON['ROUTE']['View2']['isBound']['BindingSequencerEngine'] = {};
}
if (typeof X3DJSON['ROUTE']['View2']['isBound']['BindingSequencerEngine']['view2Bound'] === 'undefined') {
X3DJSON['ROUTE']['View2']['isBound']['BindingSequencerEngine']['view2Bound'] = {};
}

X3DJSON['ROUTE']['View2']['isBound']['BindingSequencerEngine']['view2Bound']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'view2Bound');
			if (typeof X3DJSON['Obj']['BindingSequencerEngine'].view2Bound === "function") X3DJSON['Obj']['BindingSequencerEngine'].view2Bound(X3DJSON.nodeUtil('BindingSequencerEngine','view2Bound'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['view2Bound'] };
X3DJSON['ROUTE']['View2']['isBound']['BindingSequencerEngine']['view2Bound']['TO'].observe(X3DJSON.nodeUtil('BindingSequencerEngine'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['View3'] === 'undefined') {
X3DJSON['ROUTE']['View3'] = {};
}
if (typeof X3DJSON['ROUTE']['View3']['isBound'] === 'undefined') {
X3DJSON['ROUTE']['View3']['isBound'] = {};
}
if (typeof X3DJSON['ROUTE']['View3']['isBound']['BindingSequencerEngine'] === 'undefined') {
X3DJSON['ROUTE']['View3']['isBound']['BindingSequencerEngine'] = {};
}
if (typeof X3DJSON['ROUTE']['View3']['isBound']['BindingSequencerEngine']['view3Bound'] === 'undefined') {
X3DJSON['ROUTE']['View3']['isBound']['BindingSequencerEngine']['view3Bound'] = {};
}

X3DJSON['ROUTE']['View3']['isBound']['BindingSequencerEngine']['view3Bound']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'isBound');
			X3DJSON.nodeUtil('BindingSequencerEngine','view3Bound',X3DJSON.nodeUtil('View3','isBound'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['isBound'] };
X3DJSON['ROUTE']['View3']['isBound']['BindingSequencerEngine']['view3Bound']['FROM'].observe(X3DJSON.nodeUtil('View3'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['View3'] === 'undefined') {
X3DJSON['ROUTE']['View3'] = {};
}
if (typeof X3DJSON['ROUTE']['View3']['isBound'] === 'undefined') {
X3DJSON['ROUTE']['View3']['isBound'] = {};
}
if (typeof X3DJSON['ROUTE']['View3']['isBound']['BindingSequencerEngine'] === 'undefined') {
X3DJSON['ROUTE']['View3']['isBound']['BindingSequencerEngine'] = {};
}
if (typeof X3DJSON['ROUTE']['View3']['isBound']['BindingSequencerEngine']['view3Bound'] === 'undefined') {
X3DJSON['ROUTE']['View3']['isBound']['BindingSequencerEngine']['view3Bound'] = {};
}

X3DJSON['ROUTE']['View3']['isBound']['BindingSequencerEngine']['view3Bound']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'view3Bound');
			if (typeof X3DJSON['Obj']['BindingSequencerEngine'].view3Bound === "function") X3DJSON['Obj']['BindingSequencerEngine'].view3Bound(X3DJSON.nodeUtil('BindingSequencerEngine','view3Bound'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['view3Bound'] };
X3DJSON['ROUTE']['View3']['isBound']['BindingSequencerEngine']['view3Bound']['TO'].observe(X3DJSON.nodeUtil('BindingSequencerEngine'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['View4'] === 'undefined') {
X3DJSON['ROUTE']['View4'] = {};
}
if (typeof X3DJSON['ROUTE']['View4']['isBound'] === 'undefined') {
X3DJSON['ROUTE']['View4']['isBound'] = {};
}
if (typeof X3DJSON['ROUTE']['View4']['isBound']['BindingSequencerEngine'] === 'undefined') {
X3DJSON['ROUTE']['View4']['isBound']['BindingSequencerEngine'] = {};
}
if (typeof X3DJSON['ROUTE']['View4']['isBound']['BindingSequencerEngine']['view4Bound'] === 'undefined') {
X3DJSON['ROUTE']['View4']['isBound']['BindingSequencerEngine']['view4Bound'] = {};
}

X3DJSON['ROUTE']['View4']['isBound']['BindingSequencerEngine']['view4Bound']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'isBound');
			X3DJSON.nodeUtil('BindingSequencerEngine','view4Bound',X3DJSON.nodeUtil('View4','isBound'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['isBound'] };
X3DJSON['ROUTE']['View4']['isBound']['BindingSequencerEngine']['view4Bound']['FROM'].observe(X3DJSON.nodeUtil('View4'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['View4'] === 'undefined') {
X3DJSON['ROUTE']['View4'] = {};
}
if (typeof X3DJSON['ROUTE']['View4']['isBound'] === 'undefined') {
X3DJSON['ROUTE']['View4']['isBound'] = {};
}
if (typeof X3DJSON['ROUTE']['View4']['isBound']['BindingSequencerEngine'] === 'undefined') {
X3DJSON['ROUTE']['View4']['isBound']['BindingSequencerEngine'] = {};
}
if (typeof X3DJSON['ROUTE']['View4']['isBound']['BindingSequencerEngine']['view4Bound'] === 'undefined') {
X3DJSON['ROUTE']['View4']['isBound']['BindingSequencerEngine']['view4Bound'] = {};
}

X3DJSON['ROUTE']['View4']['isBound']['BindingSequencerEngine']['view4Bound']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'view4Bound');
			if (typeof X3DJSON['Obj']['BindingSequencerEngine'].view4Bound === "function") X3DJSON['Obj']['BindingSequencerEngine'].view4Bound(X3DJSON.nodeUtil('BindingSequencerEngine','view4Bound'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['view4Bound'] };
X3DJSON['ROUTE']['View4']['isBound']['BindingSequencerEngine']['view4Bound']['TO'].observe(X3DJSON.nodeUtil('BindingSequencerEngine'), config);
			X3DJSON.nodeUtil('TimingSequencer','set_fraction',X3DJSON.nodeUtil('Clock','fraction_changed'), __eventTime);