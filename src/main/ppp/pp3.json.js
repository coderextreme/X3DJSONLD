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

X3DJSON['Script']['DECLProcess_INSTANCE86000_RightSingleToMultiString'] = function() {
	this.set_rightstring = function (value) {
		X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_RightSingleToMultiString', 'rightstring', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.rightstring_changed = function () {
		return X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_RightSingleToMultiString', 'rightstring');
	};
	this.set_rightstring(undefined);
	this.set_rightlines = function (value) {
		X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_RightSingleToMultiString', 'rightlines', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.rightlines_changed = function () {
		return X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_RightSingleToMultiString', 'rightlines');
	};
	this.set_rightlines(new MFString());

ecmascript:


	this.initialize = function () {
	this.set_rightlines ( new MFString(""));
}

;

	this.set_rightstring = function (rightstr) {
	this.set_rightlines ( new MFString(rightstr));
};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLProcess_INSTANCE86000_RightSingleToMultiString'] = new X3DJSON['Script']['DECLProcess_INSTANCE86000_RightSingleToMultiString']();
if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE86000_RightSingleToMultiString'].initialize === "function") X3DJSON['Obj']['DECLProcess_INSTANCE86000_RightSingleToMultiString'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLProcess_INSTANCE86000_UpSingleToMultiString'] = function() {
	this.set_upstring = function (value) {
		X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_UpSingleToMultiString', 'upstring', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.upstring_changed = function () {
		return X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_UpSingleToMultiString', 'upstring');
	};
	this.set_upstring(undefined);
	this.set_uplines = function (value) {
		X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_UpSingleToMultiString', 'uplines', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.uplines_changed = function () {
		return X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_UpSingleToMultiString', 'uplines');
	};
	this.set_uplines(new MFString());

ecmascript:


	this.initialize = function () {
	this.set_uplines ( new MFString(""));
}

;

	this.set_upstring = function (upstr) {
	this.set_uplines ( new MFString(upstr));
};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLProcess_INSTANCE86000_UpSingleToMultiString'] = new X3DJSON['Script']['DECLProcess_INSTANCE86000_UpSingleToMultiString']();
if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE86000_UpSingleToMultiString'].initialize === "function") X3DJSON['Obj']['DECLProcess_INSTANCE86000_UpSingleToMultiString'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLProcess_INSTANCE86000_CenterSingleToMultiString'] = function() {
	this.set_centerstring = function (value) {
		X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_CenterSingleToMultiString', 'centerstring', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.centerstring_changed = function () {
		return X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_CenterSingleToMultiString', 'centerstring');
	};
	this.set_centerstring(undefined);
	this.set_centerlines = function (value) {
		X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_CenterSingleToMultiString', 'centerlines', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.centerlines_changed = function () {
		return X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_CenterSingleToMultiString', 'centerlines');
	};
	this.set_centerlines(new MFString());

ecmascript:


	this.initialize = function () {
	this.set_centerlines ( new MFString(""));
}

;

	this.set_centerstring = function (centerstr) {
	this.set_centerlines ( new MFString(centerstr));
};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLProcess_INSTANCE86000_CenterSingleToMultiString'] = new X3DJSON['Script']['DECLProcess_INSTANCE86000_CenterSingleToMultiString']();
if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE86000_CenterSingleToMultiString'].initialize === "function") X3DJSON['Obj']['DECLProcess_INSTANCE86000_CenterSingleToMultiString'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLProcess_INSTANCE87000_RightSingleToMultiString'] = function() {
	this.set_rightstring = function (value) {
		X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_RightSingleToMultiString', 'rightstring', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.rightstring_changed = function () {
		return X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_RightSingleToMultiString', 'rightstring');
	};
	this.set_rightstring(undefined);
	this.set_rightlines = function (value) {
		X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_RightSingleToMultiString', 'rightlines', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.rightlines_changed = function () {
		return X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_RightSingleToMultiString', 'rightlines');
	};
	this.set_rightlines(new MFString());

ecmascript:


	this.initialize = function () {
	this.set_rightlines ( new MFString(""));
}

;

	this.set_rightstring = function (rightstr) {
	this.set_rightlines ( new MFString(rightstr));
};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLProcess_INSTANCE87000_RightSingleToMultiString'] = new X3DJSON['Script']['DECLProcess_INSTANCE87000_RightSingleToMultiString']();
if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE87000_RightSingleToMultiString'].initialize === "function") X3DJSON['Obj']['DECLProcess_INSTANCE87000_RightSingleToMultiString'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLProcess_INSTANCE87000_UpSingleToMultiString'] = function() {
	this.set_upstring = function (value) {
		X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_UpSingleToMultiString', 'upstring', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.upstring_changed = function () {
		return X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_UpSingleToMultiString', 'upstring');
	};
	this.set_upstring(undefined);
	this.set_uplines = function (value) {
		X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_UpSingleToMultiString', 'uplines', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.uplines_changed = function () {
		return X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_UpSingleToMultiString', 'uplines');
	};
	this.set_uplines(new MFString());

ecmascript:


	this.initialize = function () {
	this.set_uplines ( new MFString(""));
}

;

	this.set_upstring = function (upstr) {
	this.set_uplines ( new MFString(upstr));
};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLProcess_INSTANCE87000_UpSingleToMultiString'] = new X3DJSON['Script']['DECLProcess_INSTANCE87000_UpSingleToMultiString']();
if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE87000_UpSingleToMultiString'].initialize === "function") X3DJSON['Obj']['DECLProcess_INSTANCE87000_UpSingleToMultiString'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLProcess_INSTANCE87000_CenterSingleToMultiString'] = function() {
	this.set_centerstring = function (value) {
		X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_CenterSingleToMultiString', 'centerstring', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.centerstring_changed = function () {
		return X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_CenterSingleToMultiString', 'centerstring');
	};
	this.set_centerstring(undefined);
	this.set_centerlines = function (value) {
		X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_CenterSingleToMultiString', 'centerlines', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.centerlines_changed = function () {
		return X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_CenterSingleToMultiString', 'centerlines');
	};
	this.set_centerlines(new MFString());

ecmascript:


	this.initialize = function () {
	this.set_centerlines ( new MFString(""));
}

;

	this.set_centerstring = function (centerstr) {
	this.set_centerlines ( new MFString(centerstr));
};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLProcess_INSTANCE87000_CenterSingleToMultiString'] = new X3DJSON['Script']['DECLProcess_INSTANCE87000_CenterSingleToMultiString']();
if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE87000_CenterSingleToMultiString'].initialize === "function") X3DJSON['Obj']['DECLProcess_INSTANCE87000_CenterSingleToMultiString'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLProcess_INSTANCE88000_RightSingleToMultiString'] = function() {
	this.set_rightstring = function (value) {
		X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_RightSingleToMultiString', 'rightstring', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.rightstring_changed = function () {
		return X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_RightSingleToMultiString', 'rightstring');
	};
	this.set_rightstring(undefined);
	this.set_rightlines = function (value) {
		X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_RightSingleToMultiString', 'rightlines', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.rightlines_changed = function () {
		return X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_RightSingleToMultiString', 'rightlines');
	};
	this.set_rightlines(new MFString());

ecmascript:


	this.initialize = function () {
	this.set_rightlines ( new MFString(""));
}

;

	this.set_rightstring = function (rightstr) {
	this.set_rightlines ( new MFString(rightstr));
};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLProcess_INSTANCE88000_RightSingleToMultiString'] = new X3DJSON['Script']['DECLProcess_INSTANCE88000_RightSingleToMultiString']();
if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE88000_RightSingleToMultiString'].initialize === "function") X3DJSON['Obj']['DECLProcess_INSTANCE88000_RightSingleToMultiString'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLProcess_INSTANCE88000_UpSingleToMultiString'] = function() {
	this.set_upstring = function (value) {
		X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_UpSingleToMultiString', 'upstring', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.upstring_changed = function () {
		return X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_UpSingleToMultiString', 'upstring');
	};
	this.set_upstring(undefined);
	this.set_uplines = function (value) {
		X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_UpSingleToMultiString', 'uplines', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.uplines_changed = function () {
		return X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_UpSingleToMultiString', 'uplines');
	};
	this.set_uplines(new MFString());

ecmascript:


	this.initialize = function () {
	this.set_uplines ( new MFString(""));
}

;

	this.set_upstring = function (upstr) {
	this.set_uplines ( new MFString(upstr));
};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLProcess_INSTANCE88000_UpSingleToMultiString'] = new X3DJSON['Script']['DECLProcess_INSTANCE88000_UpSingleToMultiString']();
if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE88000_UpSingleToMultiString'].initialize === "function") X3DJSON['Obj']['DECLProcess_INSTANCE88000_UpSingleToMultiString'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLProcess_INSTANCE88000_CenterSingleToMultiString'] = function() {
	this.set_centerstring = function (value) {
		X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_CenterSingleToMultiString', 'centerstring', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.centerstring_changed = function () {
		return X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_CenterSingleToMultiString', 'centerstring');
	};
	this.set_centerstring(undefined);
	this.set_centerlines = function (value) {
		X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_CenterSingleToMultiString', 'centerlines', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.centerlines_changed = function () {
		return X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_CenterSingleToMultiString', 'centerlines');
	};
	this.set_centerlines(new MFString());

ecmascript:


	this.initialize = function () {
	this.set_centerlines ( new MFString(""));
}

;

	this.set_centerstring = function (centerstr) {
	this.set_centerlines ( new MFString(centerstr));
};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLProcess_INSTANCE88000_CenterSingleToMultiString'] = new X3DJSON['Script']['DECLProcess_INSTANCE88000_CenterSingleToMultiString']();
if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE88000_CenterSingleToMultiString'].initialize === "function") X3DJSON['Obj']['DECLProcess_INSTANCE88000_CenterSingleToMultiString'].initialize();
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterSensor'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterSensor']['enteredText'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterSensor']['enteredText'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterSensor']['enteredText']['DECLProcess_INSTANCE86000_CenterSingleToMultiString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterSensor']['enteredText']['DECLProcess_INSTANCE86000_CenterSingleToMultiString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterSensor']['enteredText']['DECLProcess_INSTANCE86000_CenterSingleToMultiString']['set_centerstring'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterSensor']['enteredText']['DECLProcess_INSTANCE86000_CenterSingleToMultiString']['set_centerstring'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterSensor']['enteredText']['DECLProcess_INSTANCE86000_CenterSingleToMultiString']['set_centerstring']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'enteredText');
			X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_CenterSingleToMultiString','set_centerstring',X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_CenterSensor','enteredText'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['enteredText'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterSensor']['enteredText']['DECLProcess_INSTANCE86000_CenterSingleToMultiString']['set_centerstring']['FROM'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_CenterSensor'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterSensor'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterSensor']['enteredText'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterSensor']['enteredText'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterSensor']['enteredText']['DECLProcess_INSTANCE86000_CenterSingleToMultiString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterSensor']['enteredText']['DECLProcess_INSTANCE86000_CenterSingleToMultiString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterSensor']['enteredText']['DECLProcess_INSTANCE86000_CenterSingleToMultiString']['set_centerstring'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterSensor']['enteredText']['DECLProcess_INSTANCE86000_CenterSingleToMultiString']['set_centerstring'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterSensor']['enteredText']['DECLProcess_INSTANCE86000_CenterSingleToMultiString']['set_centerstring']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_centerstring');
			if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE86000_CenterSingleToMultiString'].set_centerstring === "function") X3DJSON['Obj']['DECLProcess_INSTANCE86000_CenterSingleToMultiString'].set_centerstring(X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_CenterSingleToMultiString','set_centerstring'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_centerstring'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterSensor']['enteredText']['DECLProcess_INSTANCE86000_CenterSingleToMultiString']['set_centerstring']['TO'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_CenterSingleToMultiString'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterSingleToMultiString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterSingleToMultiString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterSingleToMultiString']['centerlines'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterSingleToMultiString']['centerlines'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterSingleToMultiString']['centerlines']['DECLProcess_INSTANCE86000_CenterString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterSingleToMultiString']['centerlines']['DECLProcess_INSTANCE86000_CenterString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterSingleToMultiString']['centerlines']['DECLProcess_INSTANCE86000_CenterString']['set_string'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterSingleToMultiString']['centerlines']['DECLProcess_INSTANCE86000_CenterString']['set_string'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterSingleToMultiString']['centerlines']['DECLProcess_INSTANCE86000_CenterString']['set_string']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'centerlines');
			X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_CenterString','set_string',X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_CenterSingleToMultiString','centerlines'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['centerlines'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterSingleToMultiString']['centerlines']['DECLProcess_INSTANCE86000_CenterString']['set_string']['FROM'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_CenterSingleToMultiString'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterSingleToMultiString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterSingleToMultiString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterSingleToMultiString']['centerlines'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterSingleToMultiString']['centerlines'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterSingleToMultiString']['centerlines']['DECLProcess_INSTANCE86000_CenterString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterSingleToMultiString']['centerlines']['DECLProcess_INSTANCE86000_CenterString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterSingleToMultiString']['centerlines']['DECLProcess_INSTANCE86000_CenterString']['set_string'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterSingleToMultiString']['centerlines']['DECLProcess_INSTANCE86000_CenterString']['set_string'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterSingleToMultiString']['centerlines']['DECLProcess_INSTANCE86000_CenterString']['set_string']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_string');
			if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE86000_CenterString'].set_string === "function") X3DJSON['Obj']['DECLProcess_INSTANCE86000_CenterString'].set_string(X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_CenterString','set_string'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_string'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterSingleToMultiString']['centerlines']['DECLProcess_INSTANCE86000_CenterString']['set_string']['TO'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_CenterString'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterTouch'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterTouch'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterTouch']['isOver'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterTouch']['isOver'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterTouch']['isOver']['DECLProcess_INSTANCE86000_CenterSensor'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterTouch']['isOver']['DECLProcess_INSTANCE86000_CenterSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterTouch']['isOver']['DECLProcess_INSTANCE86000_CenterSensor']['set_enabled'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterTouch']['isOver']['DECLProcess_INSTANCE86000_CenterSensor']['set_enabled'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterTouch']['isOver']['DECLProcess_INSTANCE86000_CenterSensor']['set_enabled']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'isOver');
			X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_CenterSensor','set_enabled',X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_CenterTouch','isOver'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['isOver'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterTouch']['isOver']['DECLProcess_INSTANCE86000_CenterSensor']['set_enabled']['FROM'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_CenterTouch'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterTouch'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterTouch'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterTouch']['isOver'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterTouch']['isOver'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterTouch']['isOver']['DECLProcess_INSTANCE86000_CenterSensor'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterTouch']['isOver']['DECLProcess_INSTANCE86000_CenterSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterTouch']['isOver']['DECLProcess_INSTANCE86000_CenterSensor']['set_enabled'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterTouch']['isOver']['DECLProcess_INSTANCE86000_CenterSensor']['set_enabled'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterTouch']['isOver']['DECLProcess_INSTANCE86000_CenterSensor']['set_enabled']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_enabled');
			if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE86000_CenterSensor'].set_enabled === "function") X3DJSON['Obj']['DECLProcess_INSTANCE86000_CenterSensor'].set_enabled(X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_CenterSensor','set_enabled'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_enabled'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_CenterTouch']['isOver']['DECLProcess_INSTANCE86000_CenterSensor']['set_enabled']['TO'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_CenterSensor'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightSensor'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightSensor']['enteredText'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightSensor']['enteredText'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightSensor']['enteredText']['DECLProcess_INSTANCE86000_RightSingleToMultiString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightSensor']['enteredText']['DECLProcess_INSTANCE86000_RightSingleToMultiString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightSensor']['enteredText']['DECLProcess_INSTANCE86000_RightSingleToMultiString']['set_rightstring'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightSensor']['enteredText']['DECLProcess_INSTANCE86000_RightSingleToMultiString']['set_rightstring'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightSensor']['enteredText']['DECLProcess_INSTANCE86000_RightSingleToMultiString']['set_rightstring']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'enteredText');
			X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_RightSingleToMultiString','set_rightstring',X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_RightSensor','enteredText'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['enteredText'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightSensor']['enteredText']['DECLProcess_INSTANCE86000_RightSingleToMultiString']['set_rightstring']['FROM'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_RightSensor'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightSensor'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightSensor']['enteredText'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightSensor']['enteredText'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightSensor']['enteredText']['DECLProcess_INSTANCE86000_RightSingleToMultiString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightSensor']['enteredText']['DECLProcess_INSTANCE86000_RightSingleToMultiString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightSensor']['enteredText']['DECLProcess_INSTANCE86000_RightSingleToMultiString']['set_rightstring'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightSensor']['enteredText']['DECLProcess_INSTANCE86000_RightSingleToMultiString']['set_rightstring'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightSensor']['enteredText']['DECLProcess_INSTANCE86000_RightSingleToMultiString']['set_rightstring']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_rightstring');
			if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE86000_RightSingleToMultiString'].set_rightstring === "function") X3DJSON['Obj']['DECLProcess_INSTANCE86000_RightSingleToMultiString'].set_rightstring(X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_RightSingleToMultiString','set_rightstring'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_rightstring'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightSensor']['enteredText']['DECLProcess_INSTANCE86000_RightSingleToMultiString']['set_rightstring']['TO'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_RightSingleToMultiString'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightSingleToMultiString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightSingleToMultiString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightSingleToMultiString']['rightlines'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightSingleToMultiString']['rightlines'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightSingleToMultiString']['rightlines']['DECLProcess_INSTANCE86000_RightString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightSingleToMultiString']['rightlines']['DECLProcess_INSTANCE86000_RightString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightSingleToMultiString']['rightlines']['DECLProcess_INSTANCE86000_RightString']['set_string'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightSingleToMultiString']['rightlines']['DECLProcess_INSTANCE86000_RightString']['set_string'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightSingleToMultiString']['rightlines']['DECLProcess_INSTANCE86000_RightString']['set_string']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'rightlines');
			X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_RightString','set_string',X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_RightSingleToMultiString','rightlines'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['rightlines'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightSingleToMultiString']['rightlines']['DECLProcess_INSTANCE86000_RightString']['set_string']['FROM'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_RightSingleToMultiString'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightSingleToMultiString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightSingleToMultiString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightSingleToMultiString']['rightlines'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightSingleToMultiString']['rightlines'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightSingleToMultiString']['rightlines']['DECLProcess_INSTANCE86000_RightString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightSingleToMultiString']['rightlines']['DECLProcess_INSTANCE86000_RightString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightSingleToMultiString']['rightlines']['DECLProcess_INSTANCE86000_RightString']['set_string'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightSingleToMultiString']['rightlines']['DECLProcess_INSTANCE86000_RightString']['set_string'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightSingleToMultiString']['rightlines']['DECLProcess_INSTANCE86000_RightString']['set_string']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_string');
			if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE86000_RightString'].set_string === "function") X3DJSON['Obj']['DECLProcess_INSTANCE86000_RightString'].set_string(X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_RightString','set_string'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_string'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightSingleToMultiString']['rightlines']['DECLProcess_INSTANCE86000_RightString']['set_string']['TO'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_RightString'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightTouch'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightTouch'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightTouch']['isOver'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightTouch']['isOver'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightTouch']['isOver']['DECLProcess_INSTANCE86000_RightSensor'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightTouch']['isOver']['DECLProcess_INSTANCE86000_RightSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightTouch']['isOver']['DECLProcess_INSTANCE86000_RightSensor']['set_enabled'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightTouch']['isOver']['DECLProcess_INSTANCE86000_RightSensor']['set_enabled'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightTouch']['isOver']['DECLProcess_INSTANCE86000_RightSensor']['set_enabled']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'isOver');
			X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_RightSensor','set_enabled',X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_RightTouch','isOver'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['isOver'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightTouch']['isOver']['DECLProcess_INSTANCE86000_RightSensor']['set_enabled']['FROM'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_RightTouch'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightTouch'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightTouch'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightTouch']['isOver'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightTouch']['isOver'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightTouch']['isOver']['DECLProcess_INSTANCE86000_RightSensor'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightTouch']['isOver']['DECLProcess_INSTANCE86000_RightSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightTouch']['isOver']['DECLProcess_INSTANCE86000_RightSensor']['set_enabled'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightTouch']['isOver']['DECLProcess_INSTANCE86000_RightSensor']['set_enabled'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightTouch']['isOver']['DECLProcess_INSTANCE86000_RightSensor']['set_enabled']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_enabled');
			if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE86000_RightSensor'].set_enabled === "function") X3DJSON['Obj']['DECLProcess_INSTANCE86000_RightSensor'].set_enabled(X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_RightSensor','set_enabled'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_enabled'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_RightTouch']['isOver']['DECLProcess_INSTANCE86000_RightSensor']['set_enabled']['TO'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_RightSensor'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpSensor'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpSensor']['enteredText'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpSensor']['enteredText'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpSensor']['enteredText']['DECLProcess_INSTANCE86000_UpSingleToMultiString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpSensor']['enteredText']['DECLProcess_INSTANCE86000_UpSingleToMultiString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpSensor']['enteredText']['DECLProcess_INSTANCE86000_UpSingleToMultiString']['set_upstring'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpSensor']['enteredText']['DECLProcess_INSTANCE86000_UpSingleToMultiString']['set_upstring'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpSensor']['enteredText']['DECLProcess_INSTANCE86000_UpSingleToMultiString']['set_upstring']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'enteredText');
			X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_UpSingleToMultiString','set_upstring',X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_UpSensor','enteredText'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['enteredText'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpSensor']['enteredText']['DECLProcess_INSTANCE86000_UpSingleToMultiString']['set_upstring']['FROM'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_UpSensor'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpSensor'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpSensor']['enteredText'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpSensor']['enteredText'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpSensor']['enteredText']['DECLProcess_INSTANCE86000_UpSingleToMultiString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpSensor']['enteredText']['DECLProcess_INSTANCE86000_UpSingleToMultiString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpSensor']['enteredText']['DECLProcess_INSTANCE86000_UpSingleToMultiString']['set_upstring'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpSensor']['enteredText']['DECLProcess_INSTANCE86000_UpSingleToMultiString']['set_upstring'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpSensor']['enteredText']['DECLProcess_INSTANCE86000_UpSingleToMultiString']['set_upstring']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_upstring');
			if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE86000_UpSingleToMultiString'].set_upstring === "function") X3DJSON['Obj']['DECLProcess_INSTANCE86000_UpSingleToMultiString'].set_upstring(X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_UpSingleToMultiString','set_upstring'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_upstring'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpSensor']['enteredText']['DECLProcess_INSTANCE86000_UpSingleToMultiString']['set_upstring']['TO'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_UpSingleToMultiString'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpSingleToMultiString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpSingleToMultiString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpSingleToMultiString']['uplines'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpSingleToMultiString']['uplines'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpSingleToMultiString']['uplines']['DECLProcess_INSTANCE86000_UpString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpSingleToMultiString']['uplines']['DECLProcess_INSTANCE86000_UpString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpSingleToMultiString']['uplines']['DECLProcess_INSTANCE86000_UpString']['set_string'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpSingleToMultiString']['uplines']['DECLProcess_INSTANCE86000_UpString']['set_string'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpSingleToMultiString']['uplines']['DECLProcess_INSTANCE86000_UpString']['set_string']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'uplines');
			X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_UpString','set_string',X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_UpSingleToMultiString','uplines'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['uplines'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpSingleToMultiString']['uplines']['DECLProcess_INSTANCE86000_UpString']['set_string']['FROM'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_UpSingleToMultiString'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpSingleToMultiString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpSingleToMultiString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpSingleToMultiString']['uplines'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpSingleToMultiString']['uplines'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpSingleToMultiString']['uplines']['DECLProcess_INSTANCE86000_UpString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpSingleToMultiString']['uplines']['DECLProcess_INSTANCE86000_UpString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpSingleToMultiString']['uplines']['DECLProcess_INSTANCE86000_UpString']['set_string'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpSingleToMultiString']['uplines']['DECLProcess_INSTANCE86000_UpString']['set_string'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpSingleToMultiString']['uplines']['DECLProcess_INSTANCE86000_UpString']['set_string']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_string');
			if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE86000_UpString'].set_string === "function") X3DJSON['Obj']['DECLProcess_INSTANCE86000_UpString'].set_string(X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_UpString','set_string'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_string'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpSingleToMultiString']['uplines']['DECLProcess_INSTANCE86000_UpString']['set_string']['TO'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_UpString'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpTouch'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpTouch'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpTouch']['isOver'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpTouch']['isOver'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpTouch']['isOver']['DECLProcess_INSTANCE86000_UpSensor'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpTouch']['isOver']['DECLProcess_INSTANCE86000_UpSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpTouch']['isOver']['DECLProcess_INSTANCE86000_UpSensor']['set_enabled'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpTouch']['isOver']['DECLProcess_INSTANCE86000_UpSensor']['set_enabled'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpTouch']['isOver']['DECLProcess_INSTANCE86000_UpSensor']['set_enabled']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'isOver');
			X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_UpSensor','set_enabled',X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_UpTouch','isOver'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['isOver'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpTouch']['isOver']['DECLProcess_INSTANCE86000_UpSensor']['set_enabled']['FROM'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_UpTouch'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpTouch'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpTouch'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpTouch']['isOver'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpTouch']['isOver'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpTouch']['isOver']['DECLProcess_INSTANCE86000_UpSensor'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpTouch']['isOver']['DECLProcess_INSTANCE86000_UpSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpTouch']['isOver']['DECLProcess_INSTANCE86000_UpSensor']['set_enabled'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpTouch']['isOver']['DECLProcess_INSTANCE86000_UpSensor']['set_enabled'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpTouch']['isOver']['DECLProcess_INSTANCE86000_UpSensor']['set_enabled']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_enabled');
			if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE86000_UpSensor'].set_enabled === "function") X3DJSON['Obj']['DECLProcess_INSTANCE86000_UpSensor'].set_enabled(X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_UpSensor','set_enabled'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_enabled'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE86000_UpTouch']['isOver']['DECLProcess_INSTANCE86000_UpSensor']['set_enabled']['TO'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE86000_UpSensor'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterSensor'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterSensor']['enteredText'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterSensor']['enteredText'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterSensor']['enteredText']['DECLProcess_INSTANCE87000_CenterSingleToMultiString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterSensor']['enteredText']['DECLProcess_INSTANCE87000_CenterSingleToMultiString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterSensor']['enteredText']['DECLProcess_INSTANCE87000_CenterSingleToMultiString']['set_centerstring'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterSensor']['enteredText']['DECLProcess_INSTANCE87000_CenterSingleToMultiString']['set_centerstring'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterSensor']['enteredText']['DECLProcess_INSTANCE87000_CenterSingleToMultiString']['set_centerstring']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'enteredText');
			X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_CenterSingleToMultiString','set_centerstring',X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_CenterSensor','enteredText'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['enteredText'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterSensor']['enteredText']['DECLProcess_INSTANCE87000_CenterSingleToMultiString']['set_centerstring']['FROM'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_CenterSensor'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterSensor'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterSensor']['enteredText'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterSensor']['enteredText'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterSensor']['enteredText']['DECLProcess_INSTANCE87000_CenterSingleToMultiString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterSensor']['enteredText']['DECLProcess_INSTANCE87000_CenterSingleToMultiString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterSensor']['enteredText']['DECLProcess_INSTANCE87000_CenterSingleToMultiString']['set_centerstring'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterSensor']['enteredText']['DECLProcess_INSTANCE87000_CenterSingleToMultiString']['set_centerstring'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterSensor']['enteredText']['DECLProcess_INSTANCE87000_CenterSingleToMultiString']['set_centerstring']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_centerstring');
			if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE87000_CenterSingleToMultiString'].set_centerstring === "function") X3DJSON['Obj']['DECLProcess_INSTANCE87000_CenterSingleToMultiString'].set_centerstring(X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_CenterSingleToMultiString','set_centerstring'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_centerstring'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterSensor']['enteredText']['DECLProcess_INSTANCE87000_CenterSingleToMultiString']['set_centerstring']['TO'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_CenterSingleToMultiString'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterSingleToMultiString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterSingleToMultiString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterSingleToMultiString']['centerlines'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterSingleToMultiString']['centerlines'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterSingleToMultiString']['centerlines']['DECLProcess_INSTANCE87000_CenterString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterSingleToMultiString']['centerlines']['DECLProcess_INSTANCE87000_CenterString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterSingleToMultiString']['centerlines']['DECLProcess_INSTANCE87000_CenterString']['set_string'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterSingleToMultiString']['centerlines']['DECLProcess_INSTANCE87000_CenterString']['set_string'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterSingleToMultiString']['centerlines']['DECLProcess_INSTANCE87000_CenterString']['set_string']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'centerlines');
			X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_CenterString','set_string',X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_CenterSingleToMultiString','centerlines'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['centerlines'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterSingleToMultiString']['centerlines']['DECLProcess_INSTANCE87000_CenterString']['set_string']['FROM'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_CenterSingleToMultiString'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterSingleToMultiString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterSingleToMultiString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterSingleToMultiString']['centerlines'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterSingleToMultiString']['centerlines'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterSingleToMultiString']['centerlines']['DECLProcess_INSTANCE87000_CenterString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterSingleToMultiString']['centerlines']['DECLProcess_INSTANCE87000_CenterString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterSingleToMultiString']['centerlines']['DECLProcess_INSTANCE87000_CenterString']['set_string'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterSingleToMultiString']['centerlines']['DECLProcess_INSTANCE87000_CenterString']['set_string'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterSingleToMultiString']['centerlines']['DECLProcess_INSTANCE87000_CenterString']['set_string']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_string');
			if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE87000_CenterString'].set_string === "function") X3DJSON['Obj']['DECLProcess_INSTANCE87000_CenterString'].set_string(X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_CenterString','set_string'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_string'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterSingleToMultiString']['centerlines']['DECLProcess_INSTANCE87000_CenterString']['set_string']['TO'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_CenterString'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterTouch'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterTouch'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterTouch']['isOver'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterTouch']['isOver'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterTouch']['isOver']['DECLProcess_INSTANCE87000_CenterSensor'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterTouch']['isOver']['DECLProcess_INSTANCE87000_CenterSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterTouch']['isOver']['DECLProcess_INSTANCE87000_CenterSensor']['set_enabled'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterTouch']['isOver']['DECLProcess_INSTANCE87000_CenterSensor']['set_enabled'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterTouch']['isOver']['DECLProcess_INSTANCE87000_CenterSensor']['set_enabled']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'isOver');
			X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_CenterSensor','set_enabled',X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_CenterTouch','isOver'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['isOver'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterTouch']['isOver']['DECLProcess_INSTANCE87000_CenterSensor']['set_enabled']['FROM'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_CenterTouch'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterTouch'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterTouch'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterTouch']['isOver'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterTouch']['isOver'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterTouch']['isOver']['DECLProcess_INSTANCE87000_CenterSensor'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterTouch']['isOver']['DECLProcess_INSTANCE87000_CenterSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterTouch']['isOver']['DECLProcess_INSTANCE87000_CenterSensor']['set_enabled'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterTouch']['isOver']['DECLProcess_INSTANCE87000_CenterSensor']['set_enabled'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterTouch']['isOver']['DECLProcess_INSTANCE87000_CenterSensor']['set_enabled']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_enabled');
			if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE87000_CenterSensor'].set_enabled === "function") X3DJSON['Obj']['DECLProcess_INSTANCE87000_CenterSensor'].set_enabled(X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_CenterSensor','set_enabled'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_enabled'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_CenterTouch']['isOver']['DECLProcess_INSTANCE87000_CenterSensor']['set_enabled']['TO'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_CenterSensor'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightSensor'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightSensor']['enteredText'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightSensor']['enteredText'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightSensor']['enteredText']['DECLProcess_INSTANCE87000_RightSingleToMultiString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightSensor']['enteredText']['DECLProcess_INSTANCE87000_RightSingleToMultiString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightSensor']['enteredText']['DECLProcess_INSTANCE87000_RightSingleToMultiString']['set_rightstring'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightSensor']['enteredText']['DECLProcess_INSTANCE87000_RightSingleToMultiString']['set_rightstring'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightSensor']['enteredText']['DECLProcess_INSTANCE87000_RightSingleToMultiString']['set_rightstring']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'enteredText');
			X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_RightSingleToMultiString','set_rightstring',X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_RightSensor','enteredText'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['enteredText'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightSensor']['enteredText']['DECLProcess_INSTANCE87000_RightSingleToMultiString']['set_rightstring']['FROM'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_RightSensor'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightSensor'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightSensor']['enteredText'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightSensor']['enteredText'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightSensor']['enteredText']['DECLProcess_INSTANCE87000_RightSingleToMultiString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightSensor']['enteredText']['DECLProcess_INSTANCE87000_RightSingleToMultiString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightSensor']['enteredText']['DECLProcess_INSTANCE87000_RightSingleToMultiString']['set_rightstring'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightSensor']['enteredText']['DECLProcess_INSTANCE87000_RightSingleToMultiString']['set_rightstring'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightSensor']['enteredText']['DECLProcess_INSTANCE87000_RightSingleToMultiString']['set_rightstring']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_rightstring');
			if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE87000_RightSingleToMultiString'].set_rightstring === "function") X3DJSON['Obj']['DECLProcess_INSTANCE87000_RightSingleToMultiString'].set_rightstring(X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_RightSingleToMultiString','set_rightstring'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_rightstring'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightSensor']['enteredText']['DECLProcess_INSTANCE87000_RightSingleToMultiString']['set_rightstring']['TO'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_RightSingleToMultiString'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightSingleToMultiString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightSingleToMultiString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightSingleToMultiString']['rightlines'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightSingleToMultiString']['rightlines'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightSingleToMultiString']['rightlines']['DECLProcess_INSTANCE87000_RightString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightSingleToMultiString']['rightlines']['DECLProcess_INSTANCE87000_RightString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightSingleToMultiString']['rightlines']['DECLProcess_INSTANCE87000_RightString']['set_string'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightSingleToMultiString']['rightlines']['DECLProcess_INSTANCE87000_RightString']['set_string'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightSingleToMultiString']['rightlines']['DECLProcess_INSTANCE87000_RightString']['set_string']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'rightlines');
			X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_RightString','set_string',X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_RightSingleToMultiString','rightlines'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['rightlines'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightSingleToMultiString']['rightlines']['DECLProcess_INSTANCE87000_RightString']['set_string']['FROM'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_RightSingleToMultiString'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightSingleToMultiString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightSingleToMultiString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightSingleToMultiString']['rightlines'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightSingleToMultiString']['rightlines'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightSingleToMultiString']['rightlines']['DECLProcess_INSTANCE87000_RightString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightSingleToMultiString']['rightlines']['DECLProcess_INSTANCE87000_RightString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightSingleToMultiString']['rightlines']['DECLProcess_INSTANCE87000_RightString']['set_string'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightSingleToMultiString']['rightlines']['DECLProcess_INSTANCE87000_RightString']['set_string'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightSingleToMultiString']['rightlines']['DECLProcess_INSTANCE87000_RightString']['set_string']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_string');
			if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE87000_RightString'].set_string === "function") X3DJSON['Obj']['DECLProcess_INSTANCE87000_RightString'].set_string(X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_RightString','set_string'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_string'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightSingleToMultiString']['rightlines']['DECLProcess_INSTANCE87000_RightString']['set_string']['TO'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_RightString'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightTouch'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightTouch'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightTouch']['isOver'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightTouch']['isOver'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightTouch']['isOver']['DECLProcess_INSTANCE87000_RightSensor'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightTouch']['isOver']['DECLProcess_INSTANCE87000_RightSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightTouch']['isOver']['DECLProcess_INSTANCE87000_RightSensor']['set_enabled'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightTouch']['isOver']['DECLProcess_INSTANCE87000_RightSensor']['set_enabled'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightTouch']['isOver']['DECLProcess_INSTANCE87000_RightSensor']['set_enabled']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'isOver');
			X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_RightSensor','set_enabled',X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_RightTouch','isOver'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['isOver'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightTouch']['isOver']['DECLProcess_INSTANCE87000_RightSensor']['set_enabled']['FROM'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_RightTouch'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightTouch'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightTouch'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightTouch']['isOver'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightTouch']['isOver'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightTouch']['isOver']['DECLProcess_INSTANCE87000_RightSensor'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightTouch']['isOver']['DECLProcess_INSTANCE87000_RightSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightTouch']['isOver']['DECLProcess_INSTANCE87000_RightSensor']['set_enabled'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightTouch']['isOver']['DECLProcess_INSTANCE87000_RightSensor']['set_enabled'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightTouch']['isOver']['DECLProcess_INSTANCE87000_RightSensor']['set_enabled']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_enabled');
			if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE87000_RightSensor'].set_enabled === "function") X3DJSON['Obj']['DECLProcess_INSTANCE87000_RightSensor'].set_enabled(X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_RightSensor','set_enabled'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_enabled'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_RightTouch']['isOver']['DECLProcess_INSTANCE87000_RightSensor']['set_enabled']['TO'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_RightSensor'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpSensor'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpSensor']['enteredText'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpSensor']['enteredText'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpSensor']['enteredText']['DECLProcess_INSTANCE87000_UpSingleToMultiString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpSensor']['enteredText']['DECLProcess_INSTANCE87000_UpSingleToMultiString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpSensor']['enteredText']['DECLProcess_INSTANCE87000_UpSingleToMultiString']['set_upstring'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpSensor']['enteredText']['DECLProcess_INSTANCE87000_UpSingleToMultiString']['set_upstring'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpSensor']['enteredText']['DECLProcess_INSTANCE87000_UpSingleToMultiString']['set_upstring']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'enteredText');
			X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_UpSingleToMultiString','set_upstring',X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_UpSensor','enteredText'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['enteredText'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpSensor']['enteredText']['DECLProcess_INSTANCE87000_UpSingleToMultiString']['set_upstring']['FROM'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_UpSensor'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpSensor'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpSensor']['enteredText'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpSensor']['enteredText'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpSensor']['enteredText']['DECLProcess_INSTANCE87000_UpSingleToMultiString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpSensor']['enteredText']['DECLProcess_INSTANCE87000_UpSingleToMultiString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpSensor']['enteredText']['DECLProcess_INSTANCE87000_UpSingleToMultiString']['set_upstring'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpSensor']['enteredText']['DECLProcess_INSTANCE87000_UpSingleToMultiString']['set_upstring'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpSensor']['enteredText']['DECLProcess_INSTANCE87000_UpSingleToMultiString']['set_upstring']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_upstring');
			if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE87000_UpSingleToMultiString'].set_upstring === "function") X3DJSON['Obj']['DECLProcess_INSTANCE87000_UpSingleToMultiString'].set_upstring(X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_UpSingleToMultiString','set_upstring'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_upstring'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpSensor']['enteredText']['DECLProcess_INSTANCE87000_UpSingleToMultiString']['set_upstring']['TO'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_UpSingleToMultiString'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpSingleToMultiString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpSingleToMultiString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpSingleToMultiString']['uplines'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpSingleToMultiString']['uplines'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpSingleToMultiString']['uplines']['DECLProcess_INSTANCE87000_UpString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpSingleToMultiString']['uplines']['DECLProcess_INSTANCE87000_UpString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpSingleToMultiString']['uplines']['DECLProcess_INSTANCE87000_UpString']['set_string'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpSingleToMultiString']['uplines']['DECLProcess_INSTANCE87000_UpString']['set_string'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpSingleToMultiString']['uplines']['DECLProcess_INSTANCE87000_UpString']['set_string']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'uplines');
			X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_UpString','set_string',X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_UpSingleToMultiString','uplines'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['uplines'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpSingleToMultiString']['uplines']['DECLProcess_INSTANCE87000_UpString']['set_string']['FROM'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_UpSingleToMultiString'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpSingleToMultiString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpSingleToMultiString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpSingleToMultiString']['uplines'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpSingleToMultiString']['uplines'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpSingleToMultiString']['uplines']['DECLProcess_INSTANCE87000_UpString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpSingleToMultiString']['uplines']['DECLProcess_INSTANCE87000_UpString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpSingleToMultiString']['uplines']['DECLProcess_INSTANCE87000_UpString']['set_string'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpSingleToMultiString']['uplines']['DECLProcess_INSTANCE87000_UpString']['set_string'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpSingleToMultiString']['uplines']['DECLProcess_INSTANCE87000_UpString']['set_string']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_string');
			if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE87000_UpString'].set_string === "function") X3DJSON['Obj']['DECLProcess_INSTANCE87000_UpString'].set_string(X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_UpString','set_string'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_string'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpSingleToMultiString']['uplines']['DECLProcess_INSTANCE87000_UpString']['set_string']['TO'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_UpString'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpTouch'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpTouch'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpTouch']['isOver'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpTouch']['isOver'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpTouch']['isOver']['DECLProcess_INSTANCE87000_UpSensor'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpTouch']['isOver']['DECLProcess_INSTANCE87000_UpSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpTouch']['isOver']['DECLProcess_INSTANCE87000_UpSensor']['set_enabled'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpTouch']['isOver']['DECLProcess_INSTANCE87000_UpSensor']['set_enabled'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpTouch']['isOver']['DECLProcess_INSTANCE87000_UpSensor']['set_enabled']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'isOver');
			X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_UpSensor','set_enabled',X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_UpTouch','isOver'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['isOver'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpTouch']['isOver']['DECLProcess_INSTANCE87000_UpSensor']['set_enabled']['FROM'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_UpTouch'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpTouch'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpTouch'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpTouch']['isOver'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpTouch']['isOver'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpTouch']['isOver']['DECLProcess_INSTANCE87000_UpSensor'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpTouch']['isOver']['DECLProcess_INSTANCE87000_UpSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpTouch']['isOver']['DECLProcess_INSTANCE87000_UpSensor']['set_enabled'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpTouch']['isOver']['DECLProcess_INSTANCE87000_UpSensor']['set_enabled'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpTouch']['isOver']['DECLProcess_INSTANCE87000_UpSensor']['set_enabled']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_enabled');
			if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE87000_UpSensor'].set_enabled === "function") X3DJSON['Obj']['DECLProcess_INSTANCE87000_UpSensor'].set_enabled(X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_UpSensor','set_enabled'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_enabled'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE87000_UpTouch']['isOver']['DECLProcess_INSTANCE87000_UpSensor']['set_enabled']['TO'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE87000_UpSensor'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterSensor'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterSensor']['enteredText'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterSensor']['enteredText'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterSensor']['enteredText']['DECLProcess_INSTANCE88000_CenterSingleToMultiString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterSensor']['enteredText']['DECLProcess_INSTANCE88000_CenterSingleToMultiString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterSensor']['enteredText']['DECLProcess_INSTANCE88000_CenterSingleToMultiString']['set_centerstring'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterSensor']['enteredText']['DECLProcess_INSTANCE88000_CenterSingleToMultiString']['set_centerstring'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterSensor']['enteredText']['DECLProcess_INSTANCE88000_CenterSingleToMultiString']['set_centerstring']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'enteredText');
			X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_CenterSingleToMultiString','set_centerstring',X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_CenterSensor','enteredText'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['enteredText'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterSensor']['enteredText']['DECLProcess_INSTANCE88000_CenterSingleToMultiString']['set_centerstring']['FROM'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_CenterSensor'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterSensor'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterSensor']['enteredText'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterSensor']['enteredText'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterSensor']['enteredText']['DECLProcess_INSTANCE88000_CenterSingleToMultiString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterSensor']['enteredText']['DECLProcess_INSTANCE88000_CenterSingleToMultiString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterSensor']['enteredText']['DECLProcess_INSTANCE88000_CenterSingleToMultiString']['set_centerstring'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterSensor']['enteredText']['DECLProcess_INSTANCE88000_CenterSingleToMultiString']['set_centerstring'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterSensor']['enteredText']['DECLProcess_INSTANCE88000_CenterSingleToMultiString']['set_centerstring']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_centerstring');
			if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE88000_CenterSingleToMultiString'].set_centerstring === "function") X3DJSON['Obj']['DECLProcess_INSTANCE88000_CenterSingleToMultiString'].set_centerstring(X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_CenterSingleToMultiString','set_centerstring'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_centerstring'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterSensor']['enteredText']['DECLProcess_INSTANCE88000_CenterSingleToMultiString']['set_centerstring']['TO'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_CenterSingleToMultiString'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterSingleToMultiString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterSingleToMultiString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterSingleToMultiString']['centerlines'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterSingleToMultiString']['centerlines'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterSingleToMultiString']['centerlines']['DECLProcess_INSTANCE88000_CenterString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterSingleToMultiString']['centerlines']['DECLProcess_INSTANCE88000_CenterString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterSingleToMultiString']['centerlines']['DECLProcess_INSTANCE88000_CenterString']['set_string'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterSingleToMultiString']['centerlines']['DECLProcess_INSTANCE88000_CenterString']['set_string'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterSingleToMultiString']['centerlines']['DECLProcess_INSTANCE88000_CenterString']['set_string']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'centerlines');
			X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_CenterString','set_string',X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_CenterSingleToMultiString','centerlines'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['centerlines'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterSingleToMultiString']['centerlines']['DECLProcess_INSTANCE88000_CenterString']['set_string']['FROM'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_CenterSingleToMultiString'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterSingleToMultiString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterSingleToMultiString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterSingleToMultiString']['centerlines'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterSingleToMultiString']['centerlines'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterSingleToMultiString']['centerlines']['DECLProcess_INSTANCE88000_CenterString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterSingleToMultiString']['centerlines']['DECLProcess_INSTANCE88000_CenterString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterSingleToMultiString']['centerlines']['DECLProcess_INSTANCE88000_CenterString']['set_string'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterSingleToMultiString']['centerlines']['DECLProcess_INSTANCE88000_CenterString']['set_string'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterSingleToMultiString']['centerlines']['DECLProcess_INSTANCE88000_CenterString']['set_string']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_string');
			if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE88000_CenterString'].set_string === "function") X3DJSON['Obj']['DECLProcess_INSTANCE88000_CenterString'].set_string(X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_CenterString','set_string'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_string'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterSingleToMultiString']['centerlines']['DECLProcess_INSTANCE88000_CenterString']['set_string']['TO'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_CenterString'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterTouch'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterTouch'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterTouch']['isOver'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterTouch']['isOver'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterTouch']['isOver']['DECLProcess_INSTANCE88000_CenterSensor'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterTouch']['isOver']['DECLProcess_INSTANCE88000_CenterSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterTouch']['isOver']['DECLProcess_INSTANCE88000_CenterSensor']['set_enabled'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterTouch']['isOver']['DECLProcess_INSTANCE88000_CenterSensor']['set_enabled'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterTouch']['isOver']['DECLProcess_INSTANCE88000_CenterSensor']['set_enabled']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'isOver');
			X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_CenterSensor','set_enabled',X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_CenterTouch','isOver'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['isOver'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterTouch']['isOver']['DECLProcess_INSTANCE88000_CenterSensor']['set_enabled']['FROM'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_CenterTouch'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterTouch'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterTouch'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterTouch']['isOver'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterTouch']['isOver'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterTouch']['isOver']['DECLProcess_INSTANCE88000_CenterSensor'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterTouch']['isOver']['DECLProcess_INSTANCE88000_CenterSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterTouch']['isOver']['DECLProcess_INSTANCE88000_CenterSensor']['set_enabled'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterTouch']['isOver']['DECLProcess_INSTANCE88000_CenterSensor']['set_enabled'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterTouch']['isOver']['DECLProcess_INSTANCE88000_CenterSensor']['set_enabled']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_enabled');
			if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE88000_CenterSensor'].set_enabled === "function") X3DJSON['Obj']['DECLProcess_INSTANCE88000_CenterSensor'].set_enabled(X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_CenterSensor','set_enabled'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_enabled'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_CenterTouch']['isOver']['DECLProcess_INSTANCE88000_CenterSensor']['set_enabled']['TO'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_CenterSensor'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightSensor'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightSensor']['enteredText'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightSensor']['enteredText'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightSensor']['enteredText']['DECLProcess_INSTANCE88000_RightSingleToMultiString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightSensor']['enteredText']['DECLProcess_INSTANCE88000_RightSingleToMultiString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightSensor']['enteredText']['DECLProcess_INSTANCE88000_RightSingleToMultiString']['set_rightstring'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightSensor']['enteredText']['DECLProcess_INSTANCE88000_RightSingleToMultiString']['set_rightstring'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightSensor']['enteredText']['DECLProcess_INSTANCE88000_RightSingleToMultiString']['set_rightstring']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'enteredText');
			X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_RightSingleToMultiString','set_rightstring',X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_RightSensor','enteredText'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['enteredText'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightSensor']['enteredText']['DECLProcess_INSTANCE88000_RightSingleToMultiString']['set_rightstring']['FROM'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_RightSensor'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightSensor'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightSensor']['enteredText'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightSensor']['enteredText'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightSensor']['enteredText']['DECLProcess_INSTANCE88000_RightSingleToMultiString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightSensor']['enteredText']['DECLProcess_INSTANCE88000_RightSingleToMultiString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightSensor']['enteredText']['DECLProcess_INSTANCE88000_RightSingleToMultiString']['set_rightstring'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightSensor']['enteredText']['DECLProcess_INSTANCE88000_RightSingleToMultiString']['set_rightstring'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightSensor']['enteredText']['DECLProcess_INSTANCE88000_RightSingleToMultiString']['set_rightstring']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_rightstring');
			if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE88000_RightSingleToMultiString'].set_rightstring === "function") X3DJSON['Obj']['DECLProcess_INSTANCE88000_RightSingleToMultiString'].set_rightstring(X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_RightSingleToMultiString','set_rightstring'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_rightstring'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightSensor']['enteredText']['DECLProcess_INSTANCE88000_RightSingleToMultiString']['set_rightstring']['TO'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_RightSingleToMultiString'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightSingleToMultiString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightSingleToMultiString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightSingleToMultiString']['rightlines'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightSingleToMultiString']['rightlines'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightSingleToMultiString']['rightlines']['DECLProcess_INSTANCE88000_RightString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightSingleToMultiString']['rightlines']['DECLProcess_INSTANCE88000_RightString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightSingleToMultiString']['rightlines']['DECLProcess_INSTANCE88000_RightString']['set_string'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightSingleToMultiString']['rightlines']['DECLProcess_INSTANCE88000_RightString']['set_string'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightSingleToMultiString']['rightlines']['DECLProcess_INSTANCE88000_RightString']['set_string']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'rightlines');
			X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_RightString','set_string',X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_RightSingleToMultiString','rightlines'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['rightlines'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightSingleToMultiString']['rightlines']['DECLProcess_INSTANCE88000_RightString']['set_string']['FROM'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_RightSingleToMultiString'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightSingleToMultiString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightSingleToMultiString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightSingleToMultiString']['rightlines'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightSingleToMultiString']['rightlines'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightSingleToMultiString']['rightlines']['DECLProcess_INSTANCE88000_RightString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightSingleToMultiString']['rightlines']['DECLProcess_INSTANCE88000_RightString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightSingleToMultiString']['rightlines']['DECLProcess_INSTANCE88000_RightString']['set_string'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightSingleToMultiString']['rightlines']['DECLProcess_INSTANCE88000_RightString']['set_string'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightSingleToMultiString']['rightlines']['DECLProcess_INSTANCE88000_RightString']['set_string']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_string');
			if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE88000_RightString'].set_string === "function") X3DJSON['Obj']['DECLProcess_INSTANCE88000_RightString'].set_string(X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_RightString','set_string'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_string'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightSingleToMultiString']['rightlines']['DECLProcess_INSTANCE88000_RightString']['set_string']['TO'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_RightString'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightTouch'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightTouch'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightTouch']['isOver'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightTouch']['isOver'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightTouch']['isOver']['DECLProcess_INSTANCE88000_RightSensor'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightTouch']['isOver']['DECLProcess_INSTANCE88000_RightSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightTouch']['isOver']['DECLProcess_INSTANCE88000_RightSensor']['set_enabled'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightTouch']['isOver']['DECLProcess_INSTANCE88000_RightSensor']['set_enabled'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightTouch']['isOver']['DECLProcess_INSTANCE88000_RightSensor']['set_enabled']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'isOver');
			X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_RightSensor','set_enabled',X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_RightTouch','isOver'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['isOver'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightTouch']['isOver']['DECLProcess_INSTANCE88000_RightSensor']['set_enabled']['FROM'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_RightTouch'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightTouch'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightTouch'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightTouch']['isOver'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightTouch']['isOver'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightTouch']['isOver']['DECLProcess_INSTANCE88000_RightSensor'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightTouch']['isOver']['DECLProcess_INSTANCE88000_RightSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightTouch']['isOver']['DECLProcess_INSTANCE88000_RightSensor']['set_enabled'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightTouch']['isOver']['DECLProcess_INSTANCE88000_RightSensor']['set_enabled'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightTouch']['isOver']['DECLProcess_INSTANCE88000_RightSensor']['set_enabled']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_enabled');
			if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE88000_RightSensor'].set_enabled === "function") X3DJSON['Obj']['DECLProcess_INSTANCE88000_RightSensor'].set_enabled(X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_RightSensor','set_enabled'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_enabled'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_RightTouch']['isOver']['DECLProcess_INSTANCE88000_RightSensor']['set_enabled']['TO'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_RightSensor'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpSensor'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpSensor']['enteredText'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpSensor']['enteredText'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpSensor']['enteredText']['DECLProcess_INSTANCE88000_UpSingleToMultiString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpSensor']['enteredText']['DECLProcess_INSTANCE88000_UpSingleToMultiString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpSensor']['enteredText']['DECLProcess_INSTANCE88000_UpSingleToMultiString']['set_upstring'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpSensor']['enteredText']['DECLProcess_INSTANCE88000_UpSingleToMultiString']['set_upstring'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpSensor']['enteredText']['DECLProcess_INSTANCE88000_UpSingleToMultiString']['set_upstring']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'enteredText');
			X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_UpSingleToMultiString','set_upstring',X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_UpSensor','enteredText'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['enteredText'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpSensor']['enteredText']['DECLProcess_INSTANCE88000_UpSingleToMultiString']['set_upstring']['FROM'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_UpSensor'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpSensor'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpSensor']['enteredText'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpSensor']['enteredText'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpSensor']['enteredText']['DECLProcess_INSTANCE88000_UpSingleToMultiString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpSensor']['enteredText']['DECLProcess_INSTANCE88000_UpSingleToMultiString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpSensor']['enteredText']['DECLProcess_INSTANCE88000_UpSingleToMultiString']['set_upstring'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpSensor']['enteredText']['DECLProcess_INSTANCE88000_UpSingleToMultiString']['set_upstring'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpSensor']['enteredText']['DECLProcess_INSTANCE88000_UpSingleToMultiString']['set_upstring']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_upstring');
			if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE88000_UpSingleToMultiString'].set_upstring === "function") X3DJSON['Obj']['DECLProcess_INSTANCE88000_UpSingleToMultiString'].set_upstring(X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_UpSingleToMultiString','set_upstring'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_upstring'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpSensor']['enteredText']['DECLProcess_INSTANCE88000_UpSingleToMultiString']['set_upstring']['TO'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_UpSingleToMultiString'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpSingleToMultiString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpSingleToMultiString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpSingleToMultiString']['uplines'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpSingleToMultiString']['uplines'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpSingleToMultiString']['uplines']['DECLProcess_INSTANCE88000_UpString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpSingleToMultiString']['uplines']['DECLProcess_INSTANCE88000_UpString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpSingleToMultiString']['uplines']['DECLProcess_INSTANCE88000_UpString']['set_string'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpSingleToMultiString']['uplines']['DECLProcess_INSTANCE88000_UpString']['set_string'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpSingleToMultiString']['uplines']['DECLProcess_INSTANCE88000_UpString']['set_string']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'uplines');
			X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_UpString','set_string',X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_UpSingleToMultiString','uplines'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['uplines'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpSingleToMultiString']['uplines']['DECLProcess_INSTANCE88000_UpString']['set_string']['FROM'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_UpSingleToMultiString'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpSingleToMultiString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpSingleToMultiString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpSingleToMultiString']['uplines'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpSingleToMultiString']['uplines'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpSingleToMultiString']['uplines']['DECLProcess_INSTANCE88000_UpString'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpSingleToMultiString']['uplines']['DECLProcess_INSTANCE88000_UpString'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpSingleToMultiString']['uplines']['DECLProcess_INSTANCE88000_UpString']['set_string'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpSingleToMultiString']['uplines']['DECLProcess_INSTANCE88000_UpString']['set_string'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpSingleToMultiString']['uplines']['DECLProcess_INSTANCE88000_UpString']['set_string']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_string');
			if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE88000_UpString'].set_string === "function") X3DJSON['Obj']['DECLProcess_INSTANCE88000_UpString'].set_string(X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_UpString','set_string'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_string'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpSingleToMultiString']['uplines']['DECLProcess_INSTANCE88000_UpString']['set_string']['TO'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_UpString'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpTouch'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpTouch'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpTouch']['isOver'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpTouch']['isOver'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpTouch']['isOver']['DECLProcess_INSTANCE88000_UpSensor'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpTouch']['isOver']['DECLProcess_INSTANCE88000_UpSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpTouch']['isOver']['DECLProcess_INSTANCE88000_UpSensor']['set_enabled'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpTouch']['isOver']['DECLProcess_INSTANCE88000_UpSensor']['set_enabled'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpTouch']['isOver']['DECLProcess_INSTANCE88000_UpSensor']['set_enabled']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'isOver');
			X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_UpSensor','set_enabled',X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_UpTouch','isOver'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['isOver'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpTouch']['isOver']['DECLProcess_INSTANCE88000_UpSensor']['set_enabled']['FROM'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_UpTouch'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpTouch'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpTouch'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpTouch']['isOver'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpTouch']['isOver'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpTouch']['isOver']['DECLProcess_INSTANCE88000_UpSensor'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpTouch']['isOver']['DECLProcess_INSTANCE88000_UpSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpTouch']['isOver']['DECLProcess_INSTANCE88000_UpSensor']['set_enabled'] === 'undefined') {
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpTouch']['isOver']['DECLProcess_INSTANCE88000_UpSensor']['set_enabled'] = {};
}

X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpTouch']['isOver']['DECLProcess_INSTANCE88000_UpSensor']['set_enabled']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_enabled');
			if (typeof X3DJSON['Obj']['DECLProcess_INSTANCE88000_UpSensor'].set_enabled === "function") X3DJSON['Obj']['DECLProcess_INSTANCE88000_UpSensor'].set_enabled(X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_UpSensor','set_enabled'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_enabled'] };
X3DJSON['ROUTE']['DECLProcess_INSTANCE88000_UpTouch']['isOver']['DECLProcess_INSTANCE88000_UpSensor']['set_enabled']['TO'].observe(X3DJSON.nodeUtil('DECLProcess_INSTANCE88000_UpSensor'), config);
