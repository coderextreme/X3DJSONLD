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
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorUp'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorUp'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorUp']['touchTime'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorUp']['touchTime'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorUp']['touchTime']['WheelUp'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorUp']['touchTime']['WheelUp'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorUp']['touchTime']['WheelUp']['set_startTime'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorUp']['touchTime']['WheelUp']['set_startTime'] = {};
}

X3DJSON['ROUTE']['TouchSensorUp']['touchTime']['WheelUp']['set_startTime']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'touchTime');
			X3DJSON.nodeUtil('WheelUp','set_startTime',X3DJSON.nodeUtil('TouchSensorUp','touchTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['touchTime'] };
X3DJSON['ROUTE']['TouchSensorUp']['touchTime']['WheelUp']['set_startTime']['FROM'].observe(X3DJSON.nodeUtil('TouchSensorUp'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorUp'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorUp'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorUp']['touchTime'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorUp']['touchTime'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorUp']['touchTime']['WheelUp'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorUp']['touchTime']['WheelUp'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorUp']['touchTime']['WheelUp']['set_startTime'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorUp']['touchTime']['WheelUp']['set_startTime'] = {};
}

X3DJSON['ROUTE']['TouchSensorUp']['touchTime']['WheelUp']['set_startTime']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_startTime');
			if (typeof X3DJSON['Obj']['WheelUp'].set_startTime === "function") X3DJSON['Obj']['WheelUp'].set_startTime(X3DJSON.nodeUtil('WheelUp','set_startTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_startTime'] };
X3DJSON['ROUTE']['TouchSensorUp']['touchTime']['WheelUp']['set_startTime']['TO'].observe(X3DJSON.nodeUtil('WheelUp'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['WheelUp'] === 'undefined') {
X3DJSON['ROUTE']['WheelUp'] = {};
}
if (typeof X3DJSON['ROUTE']['WheelUp']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['WheelUp']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['WheelUp']['fraction_changed']['GearUpInterpolator'] === 'undefined') {
X3DJSON['ROUTE']['WheelUp']['fraction_changed']['GearUpInterpolator'] = {};
}
if (typeof X3DJSON['ROUTE']['WheelUp']['fraction_changed']['GearUpInterpolator']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['WheelUp']['fraction_changed']['GearUpInterpolator']['set_fraction'] = {};
}

X3DJSON['ROUTE']['WheelUp']['fraction_changed']['GearUpInterpolator']['set_fraction']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'fraction_changed');
			X3DJSON.nodeUtil('GearUpInterpolator','set_fraction',X3DJSON.nodeUtil('WheelUp','fraction_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['fraction_changed'] };
X3DJSON['ROUTE']['WheelUp']['fraction_changed']['GearUpInterpolator']['set_fraction']['FROM'].observe(X3DJSON.nodeUtil('WheelUp'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['WheelUp'] === 'undefined') {
X3DJSON['ROUTE']['WheelUp'] = {};
}
if (typeof X3DJSON['ROUTE']['WheelUp']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['WheelUp']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['WheelUp']['fraction_changed']['GearUpInterpolator'] === 'undefined') {
X3DJSON['ROUTE']['WheelUp']['fraction_changed']['GearUpInterpolator'] = {};
}
if (typeof X3DJSON['ROUTE']['WheelUp']['fraction_changed']['GearUpInterpolator']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['WheelUp']['fraction_changed']['GearUpInterpolator']['set_fraction'] = {};
}

X3DJSON['ROUTE']['WheelUp']['fraction_changed']['GearUpInterpolator']['set_fraction']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_fraction');
			if (typeof X3DJSON['Obj']['GearUpInterpolator'].set_fraction === "function") X3DJSON['Obj']['GearUpInterpolator'].set_fraction(X3DJSON.nodeUtil('GearUpInterpolator','set_fraction'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_fraction'] };
X3DJSON['ROUTE']['WheelUp']['fraction_changed']['GearUpInterpolator']['set_fraction']['TO'].observe(X3DJSON.nodeUtil('GearUpInterpolator'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['GearUpInterpolator'] === 'undefined') {
X3DJSON['ROUTE']['GearUpInterpolator'] = {};
}
if (typeof X3DJSON['ROUTE']['GearUpInterpolator']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['GearUpInterpolator']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['GearUpInterpolator']['value_changed']['FrontWheelTransform'] === 'undefined') {
X3DJSON['ROUTE']['GearUpInterpolator']['value_changed']['FrontWheelTransform'] = {};
}
if (typeof X3DJSON['ROUTE']['GearUpInterpolator']['value_changed']['FrontWheelTransform']['set_rotation'] === 'undefined') {
X3DJSON['ROUTE']['GearUpInterpolator']['value_changed']['FrontWheelTransform']['set_rotation'] = {};
}

X3DJSON['ROUTE']['GearUpInterpolator']['value_changed']['FrontWheelTransform']['set_rotation']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'value_changed');
			X3DJSON.nodeUtil('FrontWheelTransform','set_rotation',X3DJSON.nodeUtil('GearUpInterpolator','value_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['value_changed'] };
X3DJSON['ROUTE']['GearUpInterpolator']['value_changed']['FrontWheelTransform']['set_rotation']['FROM'].observe(X3DJSON.nodeUtil('GearUpInterpolator'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['GearUpInterpolator'] === 'undefined') {
X3DJSON['ROUTE']['GearUpInterpolator'] = {};
}
if (typeof X3DJSON['ROUTE']['GearUpInterpolator']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['GearUpInterpolator']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['GearUpInterpolator']['value_changed']['FrontWheelTransform'] === 'undefined') {
X3DJSON['ROUTE']['GearUpInterpolator']['value_changed']['FrontWheelTransform'] = {};
}
if (typeof X3DJSON['ROUTE']['GearUpInterpolator']['value_changed']['FrontWheelTransform']['set_rotation'] === 'undefined') {
X3DJSON['ROUTE']['GearUpInterpolator']['value_changed']['FrontWheelTransform']['set_rotation'] = {};
}

X3DJSON['ROUTE']['GearUpInterpolator']['value_changed']['FrontWheelTransform']['set_rotation']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_rotation');
			if (typeof X3DJSON['Obj']['FrontWheelTransform'].set_rotation === "function") X3DJSON['Obj']['FrontWheelTransform'].set_rotation(X3DJSON.nodeUtil('FrontWheelTransform','set_rotation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_rotation'] };
X3DJSON['ROUTE']['GearUpInterpolator']['value_changed']['FrontWheelTransform']['set_rotation']['TO'].observe(X3DJSON.nodeUtil('FrontWheelTransform'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorDown'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorDown'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorDown']['touchTime'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorDown']['touchTime'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorDown']['touchTime']['WheelDown'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorDown']['touchTime']['WheelDown'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorDown']['touchTime']['WheelDown']['set_startTime'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorDown']['touchTime']['WheelDown']['set_startTime'] = {};
}

X3DJSON['ROUTE']['TouchSensorDown']['touchTime']['WheelDown']['set_startTime']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'touchTime');
			X3DJSON.nodeUtil('WheelDown','set_startTime',X3DJSON.nodeUtil('TouchSensorDown','touchTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['touchTime'] };
X3DJSON['ROUTE']['TouchSensorDown']['touchTime']['WheelDown']['set_startTime']['FROM'].observe(X3DJSON.nodeUtil('TouchSensorDown'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorDown'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorDown'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorDown']['touchTime'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorDown']['touchTime'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorDown']['touchTime']['WheelDown'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorDown']['touchTime']['WheelDown'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorDown']['touchTime']['WheelDown']['set_startTime'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorDown']['touchTime']['WheelDown']['set_startTime'] = {};
}

X3DJSON['ROUTE']['TouchSensorDown']['touchTime']['WheelDown']['set_startTime']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_startTime');
			if (typeof X3DJSON['Obj']['WheelDown'].set_startTime === "function") X3DJSON['Obj']['WheelDown'].set_startTime(X3DJSON.nodeUtil('WheelDown','set_startTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_startTime'] };
X3DJSON['ROUTE']['TouchSensorDown']['touchTime']['WheelDown']['set_startTime']['TO'].observe(X3DJSON.nodeUtil('WheelDown'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['WheelDown'] === 'undefined') {
X3DJSON['ROUTE']['WheelDown'] = {};
}
if (typeof X3DJSON['ROUTE']['WheelDown']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['WheelDown']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['WheelDown']['fraction_changed']['GearDownInterpolator'] === 'undefined') {
X3DJSON['ROUTE']['WheelDown']['fraction_changed']['GearDownInterpolator'] = {};
}
if (typeof X3DJSON['ROUTE']['WheelDown']['fraction_changed']['GearDownInterpolator']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['WheelDown']['fraction_changed']['GearDownInterpolator']['set_fraction'] = {};
}

X3DJSON['ROUTE']['WheelDown']['fraction_changed']['GearDownInterpolator']['set_fraction']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'fraction_changed');
			X3DJSON.nodeUtil('GearDownInterpolator','set_fraction',X3DJSON.nodeUtil('WheelDown','fraction_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['fraction_changed'] };
X3DJSON['ROUTE']['WheelDown']['fraction_changed']['GearDownInterpolator']['set_fraction']['FROM'].observe(X3DJSON.nodeUtil('WheelDown'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['WheelDown'] === 'undefined') {
X3DJSON['ROUTE']['WheelDown'] = {};
}
if (typeof X3DJSON['ROUTE']['WheelDown']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['WheelDown']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['WheelDown']['fraction_changed']['GearDownInterpolator'] === 'undefined') {
X3DJSON['ROUTE']['WheelDown']['fraction_changed']['GearDownInterpolator'] = {};
}
if (typeof X3DJSON['ROUTE']['WheelDown']['fraction_changed']['GearDownInterpolator']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['WheelDown']['fraction_changed']['GearDownInterpolator']['set_fraction'] = {};
}

X3DJSON['ROUTE']['WheelDown']['fraction_changed']['GearDownInterpolator']['set_fraction']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_fraction');
			if (typeof X3DJSON['Obj']['GearDownInterpolator'].set_fraction === "function") X3DJSON['Obj']['GearDownInterpolator'].set_fraction(X3DJSON.nodeUtil('GearDownInterpolator','set_fraction'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_fraction'] };
X3DJSON['ROUTE']['WheelDown']['fraction_changed']['GearDownInterpolator']['set_fraction']['TO'].observe(X3DJSON.nodeUtil('GearDownInterpolator'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['GearDownInterpolator'] === 'undefined') {
X3DJSON['ROUTE']['GearDownInterpolator'] = {};
}
if (typeof X3DJSON['ROUTE']['GearDownInterpolator']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['GearDownInterpolator']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['GearDownInterpolator']['value_changed']['FrontWheelTransform'] === 'undefined') {
X3DJSON['ROUTE']['GearDownInterpolator']['value_changed']['FrontWheelTransform'] = {};
}
if (typeof X3DJSON['ROUTE']['GearDownInterpolator']['value_changed']['FrontWheelTransform']['set_rotation'] === 'undefined') {
X3DJSON['ROUTE']['GearDownInterpolator']['value_changed']['FrontWheelTransform']['set_rotation'] = {};
}

X3DJSON['ROUTE']['GearDownInterpolator']['value_changed']['FrontWheelTransform']['set_rotation']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'value_changed');
			X3DJSON.nodeUtil('FrontWheelTransform','set_rotation',X3DJSON.nodeUtil('GearDownInterpolator','value_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['value_changed'] };
X3DJSON['ROUTE']['GearDownInterpolator']['value_changed']['FrontWheelTransform']['set_rotation']['FROM'].observe(X3DJSON.nodeUtil('GearDownInterpolator'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['GearDownInterpolator'] === 'undefined') {
X3DJSON['ROUTE']['GearDownInterpolator'] = {};
}
if (typeof X3DJSON['ROUTE']['GearDownInterpolator']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['GearDownInterpolator']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['GearDownInterpolator']['value_changed']['FrontWheelTransform'] === 'undefined') {
X3DJSON['ROUTE']['GearDownInterpolator']['value_changed']['FrontWheelTransform'] = {};
}
if (typeof X3DJSON['ROUTE']['GearDownInterpolator']['value_changed']['FrontWheelTransform']['set_rotation'] === 'undefined') {
X3DJSON['ROUTE']['GearDownInterpolator']['value_changed']['FrontWheelTransform']['set_rotation'] = {};
}

X3DJSON['ROUTE']['GearDownInterpolator']['value_changed']['FrontWheelTransform']['set_rotation']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_rotation');
			if (typeof X3DJSON['Obj']['FrontWheelTransform'].set_rotation === "function") X3DJSON['Obj']['FrontWheelTransform'].set_rotation(X3DJSON.nodeUtil('FrontWheelTransform','set_rotation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_rotation'] };
X3DJSON['ROUTE']['GearDownInterpolator']['value_changed']['FrontWheelTransform']['set_rotation']['TO'].observe(X3DJSON.nodeUtil('FrontWheelTransform'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorDown'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorDown'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorDown']['touchTime'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorDown']['touchTime'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorDown']['touchTime']['RRearDown1'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorDown']['touchTime']['RRearDown1'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorDown']['touchTime']['RRearDown1']['set_startTime'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorDown']['touchTime']['RRearDown1']['set_startTime'] = {};
}

X3DJSON['ROUTE']['TouchSensorDown']['touchTime']['RRearDown1']['set_startTime']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'touchTime');
			X3DJSON.nodeUtil('RRearDown1','set_startTime',X3DJSON.nodeUtil('TouchSensorDown','touchTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['touchTime'] };
X3DJSON['ROUTE']['TouchSensorDown']['touchTime']['RRearDown1']['set_startTime']['FROM'].observe(X3DJSON.nodeUtil('TouchSensorDown'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorDown'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorDown'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorDown']['touchTime'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorDown']['touchTime'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorDown']['touchTime']['RRearDown1'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorDown']['touchTime']['RRearDown1'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorDown']['touchTime']['RRearDown1']['set_startTime'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorDown']['touchTime']['RRearDown1']['set_startTime'] = {};
}

X3DJSON['ROUTE']['TouchSensorDown']['touchTime']['RRearDown1']['set_startTime']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_startTime');
			if (typeof X3DJSON['Obj']['RRearDown1'].set_startTime === "function") X3DJSON['Obj']['RRearDown1'].set_startTime(X3DJSON.nodeUtil('RRearDown1','set_startTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_startTime'] };
X3DJSON['ROUTE']['TouchSensorDown']['touchTime']['RRearDown1']['set_startTime']['TO'].observe(X3DJSON.nodeUtil('RRearDown1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorUp'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorUp'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorUp']['touchTime'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorUp']['touchTime'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorUp']['touchTime']['RRearUp1'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorUp']['touchTime']['RRearUp1'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorUp']['touchTime']['RRearUp1']['set_startTime'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorUp']['touchTime']['RRearUp1']['set_startTime'] = {};
}

X3DJSON['ROUTE']['TouchSensorUp']['touchTime']['RRearUp1']['set_startTime']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'touchTime');
			X3DJSON.nodeUtil('RRearUp1','set_startTime',X3DJSON.nodeUtil('TouchSensorUp','touchTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['touchTime'] };
X3DJSON['ROUTE']['TouchSensorUp']['touchTime']['RRearUp1']['set_startTime']['FROM'].observe(X3DJSON.nodeUtil('TouchSensorUp'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorUp'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorUp'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorUp']['touchTime'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorUp']['touchTime'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorUp']['touchTime']['RRearUp1'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorUp']['touchTime']['RRearUp1'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorUp']['touchTime']['RRearUp1']['set_startTime'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorUp']['touchTime']['RRearUp1']['set_startTime'] = {};
}

X3DJSON['ROUTE']['TouchSensorUp']['touchTime']['RRearUp1']['set_startTime']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_startTime');
			if (typeof X3DJSON['Obj']['RRearUp1'].set_startTime === "function") X3DJSON['Obj']['RRearUp1'].set_startTime(X3DJSON.nodeUtil('RRearUp1','set_startTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_startTime'] };
X3DJSON['ROUTE']['TouchSensorUp']['touchTime']['RRearUp1']['set_startTime']['TO'].observe(X3DJSON.nodeUtil('RRearUp1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['RRearDown1'] === 'undefined') {
X3DJSON['ROUTE']['RRearDown1'] = {};
}
if (typeof X3DJSON['ROUTE']['RRearDown1']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['RRearDown1']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['RRearDown1']['fraction_changed']['RRearInterDown1'] === 'undefined') {
X3DJSON['ROUTE']['RRearDown1']['fraction_changed']['RRearInterDown1'] = {};
}
if (typeof X3DJSON['ROUTE']['RRearDown1']['fraction_changed']['RRearInterDown1']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['RRearDown1']['fraction_changed']['RRearInterDown1']['set_fraction'] = {};
}

X3DJSON['ROUTE']['RRearDown1']['fraction_changed']['RRearInterDown1']['set_fraction']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'fraction_changed');
			X3DJSON.nodeUtil('RRearInterDown1','set_fraction',X3DJSON.nodeUtil('RRearDown1','fraction_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['fraction_changed'] };
X3DJSON['ROUTE']['RRearDown1']['fraction_changed']['RRearInterDown1']['set_fraction']['FROM'].observe(X3DJSON.nodeUtil('RRearDown1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['RRearDown1'] === 'undefined') {
X3DJSON['ROUTE']['RRearDown1'] = {};
}
if (typeof X3DJSON['ROUTE']['RRearDown1']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['RRearDown1']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['RRearDown1']['fraction_changed']['RRearInterDown1'] === 'undefined') {
X3DJSON['ROUTE']['RRearDown1']['fraction_changed']['RRearInterDown1'] = {};
}
if (typeof X3DJSON['ROUTE']['RRearDown1']['fraction_changed']['RRearInterDown1']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['RRearDown1']['fraction_changed']['RRearInterDown1']['set_fraction'] = {};
}

X3DJSON['ROUTE']['RRearDown1']['fraction_changed']['RRearInterDown1']['set_fraction']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_fraction');
			if (typeof X3DJSON['Obj']['RRearInterDown1'].set_fraction === "function") X3DJSON['Obj']['RRearInterDown1'].set_fraction(X3DJSON.nodeUtil('RRearInterDown1','set_fraction'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_fraction'] };
X3DJSON['ROUTE']['RRearDown1']['fraction_changed']['RRearInterDown1']['set_fraction']['TO'].observe(X3DJSON.nodeUtil('RRearInterDown1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['RRearUp1'] === 'undefined') {
X3DJSON['ROUTE']['RRearUp1'] = {};
}
if (typeof X3DJSON['ROUTE']['RRearUp1']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['RRearUp1']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['RRearUp1']['fraction_changed']['RRearInterUp1'] === 'undefined') {
X3DJSON['ROUTE']['RRearUp1']['fraction_changed']['RRearInterUp1'] = {};
}
if (typeof X3DJSON['ROUTE']['RRearUp1']['fraction_changed']['RRearInterUp1']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['RRearUp1']['fraction_changed']['RRearInterUp1']['set_fraction'] = {};
}

X3DJSON['ROUTE']['RRearUp1']['fraction_changed']['RRearInterUp1']['set_fraction']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'fraction_changed');
			X3DJSON.nodeUtil('RRearInterUp1','set_fraction',X3DJSON.nodeUtil('RRearUp1','fraction_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['fraction_changed'] };
X3DJSON['ROUTE']['RRearUp1']['fraction_changed']['RRearInterUp1']['set_fraction']['FROM'].observe(X3DJSON.nodeUtil('RRearUp1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['RRearUp1'] === 'undefined') {
X3DJSON['ROUTE']['RRearUp1'] = {};
}
if (typeof X3DJSON['ROUTE']['RRearUp1']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['RRearUp1']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['RRearUp1']['fraction_changed']['RRearInterUp1'] === 'undefined') {
X3DJSON['ROUTE']['RRearUp1']['fraction_changed']['RRearInterUp1'] = {};
}
if (typeof X3DJSON['ROUTE']['RRearUp1']['fraction_changed']['RRearInterUp1']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['RRearUp1']['fraction_changed']['RRearInterUp1']['set_fraction'] = {};
}

X3DJSON['ROUTE']['RRearUp1']['fraction_changed']['RRearInterUp1']['set_fraction']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_fraction');
			if (typeof X3DJSON['Obj']['RRearInterUp1'].set_fraction === "function") X3DJSON['Obj']['RRearInterUp1'].set_fraction(X3DJSON.nodeUtil('RRearInterUp1','set_fraction'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_fraction'] };
X3DJSON['ROUTE']['RRearUp1']['fraction_changed']['RRearInterUp1']['set_fraction']['TO'].observe(X3DJSON.nodeUtil('RRearInterUp1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['RRearInterDown1'] === 'undefined') {
X3DJSON['ROUTE']['RRearInterDown1'] = {};
}
if (typeof X3DJSON['ROUTE']['RRearInterDown1']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['RRearInterDown1']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['RRearInterDown1']['value_changed']['RearRightWheelTransform'] === 'undefined') {
X3DJSON['ROUTE']['RRearInterDown1']['value_changed']['RearRightWheelTransform'] = {};
}
if (typeof X3DJSON['ROUTE']['RRearInterDown1']['value_changed']['RearRightWheelTransform']['set_rotation'] === 'undefined') {
X3DJSON['ROUTE']['RRearInterDown1']['value_changed']['RearRightWheelTransform']['set_rotation'] = {};
}

X3DJSON['ROUTE']['RRearInterDown1']['value_changed']['RearRightWheelTransform']['set_rotation']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'value_changed');
			X3DJSON.nodeUtil('RearRightWheelTransform','set_rotation',X3DJSON.nodeUtil('RRearInterDown1','value_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['value_changed'] };
X3DJSON['ROUTE']['RRearInterDown1']['value_changed']['RearRightWheelTransform']['set_rotation']['FROM'].observe(X3DJSON.nodeUtil('RRearInterDown1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['RRearInterDown1'] === 'undefined') {
X3DJSON['ROUTE']['RRearInterDown1'] = {};
}
if (typeof X3DJSON['ROUTE']['RRearInterDown1']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['RRearInterDown1']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['RRearInterDown1']['value_changed']['RearRightWheelTransform'] === 'undefined') {
X3DJSON['ROUTE']['RRearInterDown1']['value_changed']['RearRightWheelTransform'] = {};
}
if (typeof X3DJSON['ROUTE']['RRearInterDown1']['value_changed']['RearRightWheelTransform']['set_rotation'] === 'undefined') {
X3DJSON['ROUTE']['RRearInterDown1']['value_changed']['RearRightWheelTransform']['set_rotation'] = {};
}

X3DJSON['ROUTE']['RRearInterDown1']['value_changed']['RearRightWheelTransform']['set_rotation']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_rotation');
			if (typeof X3DJSON['Obj']['RearRightWheelTransform'].set_rotation === "function") X3DJSON['Obj']['RearRightWheelTransform'].set_rotation(X3DJSON.nodeUtil('RearRightWheelTransform','set_rotation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_rotation'] };
X3DJSON['ROUTE']['RRearInterDown1']['value_changed']['RearRightWheelTransform']['set_rotation']['TO'].observe(X3DJSON.nodeUtil('RearRightWheelTransform'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['RRearInterUp1'] === 'undefined') {
X3DJSON['ROUTE']['RRearInterUp1'] = {};
}
if (typeof X3DJSON['ROUTE']['RRearInterUp1']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['RRearInterUp1']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['RRearInterUp1']['value_changed']['RearRightWheelTransform'] === 'undefined') {
X3DJSON['ROUTE']['RRearInterUp1']['value_changed']['RearRightWheelTransform'] = {};
}
if (typeof X3DJSON['ROUTE']['RRearInterUp1']['value_changed']['RearRightWheelTransform']['set_rotation'] === 'undefined') {
X3DJSON['ROUTE']['RRearInterUp1']['value_changed']['RearRightWheelTransform']['set_rotation'] = {};
}

X3DJSON['ROUTE']['RRearInterUp1']['value_changed']['RearRightWheelTransform']['set_rotation']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'value_changed');
			X3DJSON.nodeUtil('RearRightWheelTransform','set_rotation',X3DJSON.nodeUtil('RRearInterUp1','value_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['value_changed'] };
X3DJSON['ROUTE']['RRearInterUp1']['value_changed']['RearRightWheelTransform']['set_rotation']['FROM'].observe(X3DJSON.nodeUtil('RRearInterUp1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['RRearInterUp1'] === 'undefined') {
X3DJSON['ROUTE']['RRearInterUp1'] = {};
}
if (typeof X3DJSON['ROUTE']['RRearInterUp1']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['RRearInterUp1']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['RRearInterUp1']['value_changed']['RearRightWheelTransform'] === 'undefined') {
X3DJSON['ROUTE']['RRearInterUp1']['value_changed']['RearRightWheelTransform'] = {};
}
if (typeof X3DJSON['ROUTE']['RRearInterUp1']['value_changed']['RearRightWheelTransform']['set_rotation'] === 'undefined') {
X3DJSON['ROUTE']['RRearInterUp1']['value_changed']['RearRightWheelTransform']['set_rotation'] = {};
}

X3DJSON['ROUTE']['RRearInterUp1']['value_changed']['RearRightWheelTransform']['set_rotation']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_rotation');
			if (typeof X3DJSON['Obj']['RearRightWheelTransform'].set_rotation === "function") X3DJSON['Obj']['RearRightWheelTransform'].set_rotation(X3DJSON.nodeUtil('RearRightWheelTransform','set_rotation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_rotation'] };
X3DJSON['ROUTE']['RRearInterUp1']['value_changed']['RearRightWheelTransform']['set_rotation']['TO'].observe(X3DJSON.nodeUtil('RearRightWheelTransform'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorDown'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorDown'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorDown']['touchTime'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorDown']['touchTime'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorDown']['touchTime']['LRearDown1'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorDown']['touchTime']['LRearDown1'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorDown']['touchTime']['LRearDown1']['set_startTime'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorDown']['touchTime']['LRearDown1']['set_startTime'] = {};
}

X3DJSON['ROUTE']['TouchSensorDown']['touchTime']['LRearDown1']['set_startTime']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'touchTime');
			X3DJSON.nodeUtil('LRearDown1','set_startTime',X3DJSON.nodeUtil('TouchSensorDown','touchTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['touchTime'] };
X3DJSON['ROUTE']['TouchSensorDown']['touchTime']['LRearDown1']['set_startTime']['FROM'].observe(X3DJSON.nodeUtil('TouchSensorDown'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorDown'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorDown'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorDown']['touchTime'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorDown']['touchTime'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorDown']['touchTime']['LRearDown1'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorDown']['touchTime']['LRearDown1'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorDown']['touchTime']['LRearDown1']['set_startTime'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorDown']['touchTime']['LRearDown1']['set_startTime'] = {};
}

X3DJSON['ROUTE']['TouchSensorDown']['touchTime']['LRearDown1']['set_startTime']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_startTime');
			if (typeof X3DJSON['Obj']['LRearDown1'].set_startTime === "function") X3DJSON['Obj']['LRearDown1'].set_startTime(X3DJSON.nodeUtil('LRearDown1','set_startTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_startTime'] };
X3DJSON['ROUTE']['TouchSensorDown']['touchTime']['LRearDown1']['set_startTime']['TO'].observe(X3DJSON.nodeUtil('LRearDown1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorUp'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorUp'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorUp']['touchTime'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorUp']['touchTime'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorUp']['touchTime']['LRearUp1'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorUp']['touchTime']['LRearUp1'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorUp']['touchTime']['LRearUp1']['set_startTime'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorUp']['touchTime']['LRearUp1']['set_startTime'] = {};
}

X3DJSON['ROUTE']['TouchSensorUp']['touchTime']['LRearUp1']['set_startTime']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'touchTime');
			X3DJSON.nodeUtil('LRearUp1','set_startTime',X3DJSON.nodeUtil('TouchSensorUp','touchTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['touchTime'] };
X3DJSON['ROUTE']['TouchSensorUp']['touchTime']['LRearUp1']['set_startTime']['FROM'].observe(X3DJSON.nodeUtil('TouchSensorUp'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorUp'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorUp'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorUp']['touchTime'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorUp']['touchTime'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorUp']['touchTime']['LRearUp1'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorUp']['touchTime']['LRearUp1'] = {};
}
if (typeof X3DJSON['ROUTE']['TouchSensorUp']['touchTime']['LRearUp1']['set_startTime'] === 'undefined') {
X3DJSON['ROUTE']['TouchSensorUp']['touchTime']['LRearUp1']['set_startTime'] = {};
}

X3DJSON['ROUTE']['TouchSensorUp']['touchTime']['LRearUp1']['set_startTime']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_startTime');
			if (typeof X3DJSON['Obj']['LRearUp1'].set_startTime === "function") X3DJSON['Obj']['LRearUp1'].set_startTime(X3DJSON.nodeUtil('LRearUp1','set_startTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_startTime'] };
X3DJSON['ROUTE']['TouchSensorUp']['touchTime']['LRearUp1']['set_startTime']['TO'].observe(X3DJSON.nodeUtil('LRearUp1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['LRearDown1'] === 'undefined') {
X3DJSON['ROUTE']['LRearDown1'] = {};
}
if (typeof X3DJSON['ROUTE']['LRearDown1']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['LRearDown1']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['LRearDown1']['fraction_changed']['LRearInterDown1'] === 'undefined') {
X3DJSON['ROUTE']['LRearDown1']['fraction_changed']['LRearInterDown1'] = {};
}
if (typeof X3DJSON['ROUTE']['LRearDown1']['fraction_changed']['LRearInterDown1']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['LRearDown1']['fraction_changed']['LRearInterDown1']['set_fraction'] = {};
}

X3DJSON['ROUTE']['LRearDown1']['fraction_changed']['LRearInterDown1']['set_fraction']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'fraction_changed');
			X3DJSON.nodeUtil('LRearInterDown1','set_fraction',X3DJSON.nodeUtil('LRearDown1','fraction_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['fraction_changed'] };
X3DJSON['ROUTE']['LRearDown1']['fraction_changed']['LRearInterDown1']['set_fraction']['FROM'].observe(X3DJSON.nodeUtil('LRearDown1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['LRearDown1'] === 'undefined') {
X3DJSON['ROUTE']['LRearDown1'] = {};
}
if (typeof X3DJSON['ROUTE']['LRearDown1']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['LRearDown1']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['LRearDown1']['fraction_changed']['LRearInterDown1'] === 'undefined') {
X3DJSON['ROUTE']['LRearDown1']['fraction_changed']['LRearInterDown1'] = {};
}
if (typeof X3DJSON['ROUTE']['LRearDown1']['fraction_changed']['LRearInterDown1']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['LRearDown1']['fraction_changed']['LRearInterDown1']['set_fraction'] = {};
}

X3DJSON['ROUTE']['LRearDown1']['fraction_changed']['LRearInterDown1']['set_fraction']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_fraction');
			if (typeof X3DJSON['Obj']['LRearInterDown1'].set_fraction === "function") X3DJSON['Obj']['LRearInterDown1'].set_fraction(X3DJSON.nodeUtil('LRearInterDown1','set_fraction'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_fraction'] };
X3DJSON['ROUTE']['LRearDown1']['fraction_changed']['LRearInterDown1']['set_fraction']['TO'].observe(X3DJSON.nodeUtil('LRearInterDown1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['LRearUp1'] === 'undefined') {
X3DJSON['ROUTE']['LRearUp1'] = {};
}
if (typeof X3DJSON['ROUTE']['LRearUp1']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['LRearUp1']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['LRearUp1']['fraction_changed']['LRearInterUp1'] === 'undefined') {
X3DJSON['ROUTE']['LRearUp1']['fraction_changed']['LRearInterUp1'] = {};
}
if (typeof X3DJSON['ROUTE']['LRearUp1']['fraction_changed']['LRearInterUp1']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['LRearUp1']['fraction_changed']['LRearInterUp1']['set_fraction'] = {};
}

X3DJSON['ROUTE']['LRearUp1']['fraction_changed']['LRearInterUp1']['set_fraction']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'fraction_changed');
			X3DJSON.nodeUtil('LRearInterUp1','set_fraction',X3DJSON.nodeUtil('LRearUp1','fraction_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['fraction_changed'] };
X3DJSON['ROUTE']['LRearUp1']['fraction_changed']['LRearInterUp1']['set_fraction']['FROM'].observe(X3DJSON.nodeUtil('LRearUp1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['LRearUp1'] === 'undefined') {
X3DJSON['ROUTE']['LRearUp1'] = {};
}
if (typeof X3DJSON['ROUTE']['LRearUp1']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['LRearUp1']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['LRearUp1']['fraction_changed']['LRearInterUp1'] === 'undefined') {
X3DJSON['ROUTE']['LRearUp1']['fraction_changed']['LRearInterUp1'] = {};
}
if (typeof X3DJSON['ROUTE']['LRearUp1']['fraction_changed']['LRearInterUp1']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['LRearUp1']['fraction_changed']['LRearInterUp1']['set_fraction'] = {};
}

X3DJSON['ROUTE']['LRearUp1']['fraction_changed']['LRearInterUp1']['set_fraction']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_fraction');
			if (typeof X3DJSON['Obj']['LRearInterUp1'].set_fraction === "function") X3DJSON['Obj']['LRearInterUp1'].set_fraction(X3DJSON.nodeUtil('LRearInterUp1','set_fraction'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_fraction'] };
X3DJSON['ROUTE']['LRearUp1']['fraction_changed']['LRearInterUp1']['set_fraction']['TO'].observe(X3DJSON.nodeUtil('LRearInterUp1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['LRearInterDown1'] === 'undefined') {
X3DJSON['ROUTE']['LRearInterDown1'] = {};
}
if (typeof X3DJSON['ROUTE']['LRearInterDown1']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['LRearInterDown1']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['LRearInterDown1']['value_changed']['RearLeftWheelTransform'] === 'undefined') {
X3DJSON['ROUTE']['LRearInterDown1']['value_changed']['RearLeftWheelTransform'] = {};
}
if (typeof X3DJSON['ROUTE']['LRearInterDown1']['value_changed']['RearLeftWheelTransform']['set_rotation'] === 'undefined') {
X3DJSON['ROUTE']['LRearInterDown1']['value_changed']['RearLeftWheelTransform']['set_rotation'] = {};
}

X3DJSON['ROUTE']['LRearInterDown1']['value_changed']['RearLeftWheelTransform']['set_rotation']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'value_changed');
			X3DJSON.nodeUtil('RearLeftWheelTransform','set_rotation',X3DJSON.nodeUtil('LRearInterDown1','value_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['value_changed'] };
X3DJSON['ROUTE']['LRearInterDown1']['value_changed']['RearLeftWheelTransform']['set_rotation']['FROM'].observe(X3DJSON.nodeUtil('LRearInterDown1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['LRearInterDown1'] === 'undefined') {
X3DJSON['ROUTE']['LRearInterDown1'] = {};
}
if (typeof X3DJSON['ROUTE']['LRearInterDown1']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['LRearInterDown1']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['LRearInterDown1']['value_changed']['RearLeftWheelTransform'] === 'undefined') {
X3DJSON['ROUTE']['LRearInterDown1']['value_changed']['RearLeftWheelTransform'] = {};
}
if (typeof X3DJSON['ROUTE']['LRearInterDown1']['value_changed']['RearLeftWheelTransform']['set_rotation'] === 'undefined') {
X3DJSON['ROUTE']['LRearInterDown1']['value_changed']['RearLeftWheelTransform']['set_rotation'] = {};
}

X3DJSON['ROUTE']['LRearInterDown1']['value_changed']['RearLeftWheelTransform']['set_rotation']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_rotation');
			if (typeof X3DJSON['Obj']['RearLeftWheelTransform'].set_rotation === "function") X3DJSON['Obj']['RearLeftWheelTransform'].set_rotation(X3DJSON.nodeUtil('RearLeftWheelTransform','set_rotation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_rotation'] };
X3DJSON['ROUTE']['LRearInterDown1']['value_changed']['RearLeftWheelTransform']['set_rotation']['TO'].observe(X3DJSON.nodeUtil('RearLeftWheelTransform'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['LRearInterUp1'] === 'undefined') {
X3DJSON['ROUTE']['LRearInterUp1'] = {};
}
if (typeof X3DJSON['ROUTE']['LRearInterUp1']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['LRearInterUp1']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['LRearInterUp1']['value_changed']['RearLeftWheelTransform'] === 'undefined') {
X3DJSON['ROUTE']['LRearInterUp1']['value_changed']['RearLeftWheelTransform'] = {};
}
if (typeof X3DJSON['ROUTE']['LRearInterUp1']['value_changed']['RearLeftWheelTransform']['set_rotation'] === 'undefined') {
X3DJSON['ROUTE']['LRearInterUp1']['value_changed']['RearLeftWheelTransform']['set_rotation'] = {};
}

X3DJSON['ROUTE']['LRearInterUp1']['value_changed']['RearLeftWheelTransform']['set_rotation']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'value_changed');
			X3DJSON.nodeUtil('RearLeftWheelTransform','set_rotation',X3DJSON.nodeUtil('LRearInterUp1','value_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['value_changed'] };
X3DJSON['ROUTE']['LRearInterUp1']['value_changed']['RearLeftWheelTransform']['set_rotation']['FROM'].observe(X3DJSON.nodeUtil('LRearInterUp1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['LRearInterUp1'] === 'undefined') {
X3DJSON['ROUTE']['LRearInterUp1'] = {};
}
if (typeof X3DJSON['ROUTE']['LRearInterUp1']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['LRearInterUp1']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['LRearInterUp1']['value_changed']['RearLeftWheelTransform'] === 'undefined') {
X3DJSON['ROUTE']['LRearInterUp1']['value_changed']['RearLeftWheelTransform'] = {};
}
if (typeof X3DJSON['ROUTE']['LRearInterUp1']['value_changed']['RearLeftWheelTransform']['set_rotation'] === 'undefined') {
X3DJSON['ROUTE']['LRearInterUp1']['value_changed']['RearLeftWheelTransform']['set_rotation'] = {};
}

X3DJSON['ROUTE']['LRearInterUp1']['value_changed']['RearLeftWheelTransform']['set_rotation']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_rotation');
			if (typeof X3DJSON['Obj']['RearLeftWheelTransform'].set_rotation === "function") X3DJSON['Obj']['RearLeftWheelTransform'].set_rotation(X3DJSON.nodeUtil('RearLeftWheelTransform','set_rotation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_rotation'] };
X3DJSON['ROUTE']['LRearInterUp1']['value_changed']['RearLeftWheelTransform']['set_rotation']['TO'].observe(X3DJSON.nodeUtil('RearLeftWheelTransform'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['FireSensor'] === 'undefined') {
X3DJSON['ROUTE']['FireSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['FireSensor']['touchTime'] === 'undefined') {
X3DJSON['ROUTE']['FireSensor']['touchTime'] = {};
}
if (typeof X3DJSON['ROUTE']['FireSensor']['touchTime']['FireClock'] === 'undefined') {
X3DJSON['ROUTE']['FireSensor']['touchTime']['FireClock'] = {};
}
if (typeof X3DJSON['ROUTE']['FireSensor']['touchTime']['FireClock']['set_startTime'] === 'undefined') {
X3DJSON['ROUTE']['FireSensor']['touchTime']['FireClock']['set_startTime'] = {};
}

X3DJSON['ROUTE']['FireSensor']['touchTime']['FireClock']['set_startTime']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'touchTime');
			X3DJSON.nodeUtil('FireClock','set_startTime',X3DJSON.nodeUtil('FireSensor','touchTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['touchTime'] };
X3DJSON['ROUTE']['FireSensor']['touchTime']['FireClock']['set_startTime']['FROM'].observe(X3DJSON.nodeUtil('FireSensor'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['FireSensor'] === 'undefined') {
X3DJSON['ROUTE']['FireSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['FireSensor']['touchTime'] === 'undefined') {
X3DJSON['ROUTE']['FireSensor']['touchTime'] = {};
}
if (typeof X3DJSON['ROUTE']['FireSensor']['touchTime']['FireClock'] === 'undefined') {
X3DJSON['ROUTE']['FireSensor']['touchTime']['FireClock'] = {};
}
if (typeof X3DJSON['ROUTE']['FireSensor']['touchTime']['FireClock']['set_startTime'] === 'undefined') {
X3DJSON['ROUTE']['FireSensor']['touchTime']['FireClock']['set_startTime'] = {};
}

X3DJSON['ROUTE']['FireSensor']['touchTime']['FireClock']['set_startTime']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_startTime');
			if (typeof X3DJSON['Obj']['FireClock'].set_startTime === "function") X3DJSON['Obj']['FireClock'].set_startTime(X3DJSON.nodeUtil('FireClock','set_startTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_startTime'] };
X3DJSON['ROUTE']['FireSensor']['touchTime']['FireClock']['set_startTime']['TO'].observe(X3DJSON.nodeUtil('FireClock'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['FireClock'] === 'undefined') {
X3DJSON['ROUTE']['FireClock'] = {};
}
if (typeof X3DJSON['ROUTE']['FireClock']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['FireClock']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['FireClock']['fraction_changed']['MissilePath'] === 'undefined') {
X3DJSON['ROUTE']['FireClock']['fraction_changed']['MissilePath'] = {};
}
if (typeof X3DJSON['ROUTE']['FireClock']['fraction_changed']['MissilePath']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['FireClock']['fraction_changed']['MissilePath']['set_fraction'] = {};
}

X3DJSON['ROUTE']['FireClock']['fraction_changed']['MissilePath']['set_fraction']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'fraction_changed');
			X3DJSON.nodeUtil('MissilePath','set_fraction',X3DJSON.nodeUtil('FireClock','fraction_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['fraction_changed'] };
X3DJSON['ROUTE']['FireClock']['fraction_changed']['MissilePath']['set_fraction']['FROM'].observe(X3DJSON.nodeUtil('FireClock'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['FireClock'] === 'undefined') {
X3DJSON['ROUTE']['FireClock'] = {};
}
if (typeof X3DJSON['ROUTE']['FireClock']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['FireClock']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['FireClock']['fraction_changed']['MissilePath'] === 'undefined') {
X3DJSON['ROUTE']['FireClock']['fraction_changed']['MissilePath'] = {};
}
if (typeof X3DJSON['ROUTE']['FireClock']['fraction_changed']['MissilePath']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['FireClock']['fraction_changed']['MissilePath']['set_fraction'] = {};
}

X3DJSON['ROUTE']['FireClock']['fraction_changed']['MissilePath']['set_fraction']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_fraction');
			if (typeof X3DJSON['Obj']['MissilePath'].set_fraction === "function") X3DJSON['Obj']['MissilePath'].set_fraction(X3DJSON.nodeUtil('MissilePath','set_fraction'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_fraction'] };
X3DJSON['ROUTE']['FireClock']['fraction_changed']['MissilePath']['set_fraction']['TO'].observe(X3DJSON.nodeUtil('MissilePath'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['MissilePath'] === 'undefined') {
X3DJSON['ROUTE']['MissilePath'] = {};
}
if (typeof X3DJSON['ROUTE']['MissilePath']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['MissilePath']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['MissilePath']['value_changed']['LeftmostAmraamTransform'] === 'undefined') {
X3DJSON['ROUTE']['MissilePath']['value_changed']['LeftmostAmraamTransform'] = {};
}
if (typeof X3DJSON['ROUTE']['MissilePath']['value_changed']['LeftmostAmraamTransform']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['MissilePath']['value_changed']['LeftmostAmraamTransform']['set_translation'] = {};
}

X3DJSON['ROUTE']['MissilePath']['value_changed']['LeftmostAmraamTransform']['set_translation']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'value_changed');
			X3DJSON.nodeUtil('LeftmostAmraamTransform','set_translation',X3DJSON.nodeUtil('MissilePath','value_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['value_changed'] };
X3DJSON['ROUTE']['MissilePath']['value_changed']['LeftmostAmraamTransform']['set_translation']['FROM'].observe(X3DJSON.nodeUtil('MissilePath'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['MissilePath'] === 'undefined') {
X3DJSON['ROUTE']['MissilePath'] = {};
}
if (typeof X3DJSON['ROUTE']['MissilePath']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['MissilePath']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['MissilePath']['value_changed']['LeftmostAmraamTransform'] === 'undefined') {
X3DJSON['ROUTE']['MissilePath']['value_changed']['LeftmostAmraamTransform'] = {};
}
if (typeof X3DJSON['ROUTE']['MissilePath']['value_changed']['LeftmostAmraamTransform']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['MissilePath']['value_changed']['LeftmostAmraamTransform']['set_translation'] = {};
}

X3DJSON['ROUTE']['MissilePath']['value_changed']['LeftmostAmraamTransform']['set_translation']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_translation');
			if (typeof X3DJSON['Obj']['LeftmostAmraamTransform'].set_translation === "function") X3DJSON['Obj']['LeftmostAmraamTransform'].set_translation(X3DJSON.nodeUtil('LeftmostAmraamTransform','set_translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_translation'] };
X3DJSON['ROUTE']['MissilePath']['value_changed']['LeftmostAmraamTransform']['set_translation']['TO'].observe(X3DJSON.nodeUtil('LeftmostAmraamTransform'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['FireSensor'] === 'undefined') {
X3DJSON['ROUTE']['FireSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['FireSensor']['isActive'] === 'undefined') {
X3DJSON['ROUTE']['FireSensor']['isActive'] = {};
}
if (typeof X3DJSON['ROUTE']['FireSensor']['isActive']['MissileLaunchView'] === 'undefined') {
X3DJSON['ROUTE']['FireSensor']['isActive']['MissileLaunchView'] = {};
}
if (typeof X3DJSON['ROUTE']['FireSensor']['isActive']['MissileLaunchView']['set_bind'] === 'undefined') {
X3DJSON['ROUTE']['FireSensor']['isActive']['MissileLaunchView']['set_bind'] = {};
}

X3DJSON['ROUTE']['FireSensor']['isActive']['MissileLaunchView']['set_bind']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'isActive');
			X3DJSON.nodeUtil('MissileLaunchView','set_bind',X3DJSON.nodeUtil('FireSensor','isActive'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['isActive'] };
X3DJSON['ROUTE']['FireSensor']['isActive']['MissileLaunchView']['set_bind']['FROM'].observe(X3DJSON.nodeUtil('FireSensor'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['FireSensor'] === 'undefined') {
X3DJSON['ROUTE']['FireSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['FireSensor']['isActive'] === 'undefined') {
X3DJSON['ROUTE']['FireSensor']['isActive'] = {};
}
if (typeof X3DJSON['ROUTE']['FireSensor']['isActive']['MissileLaunchView'] === 'undefined') {
X3DJSON['ROUTE']['FireSensor']['isActive']['MissileLaunchView'] = {};
}
if (typeof X3DJSON['ROUTE']['FireSensor']['isActive']['MissileLaunchView']['set_bind'] === 'undefined') {
X3DJSON['ROUTE']['FireSensor']['isActive']['MissileLaunchView']['set_bind'] = {};
}

X3DJSON['ROUTE']['FireSensor']['isActive']['MissileLaunchView']['set_bind']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_bind');
			if (typeof X3DJSON['Obj']['MissileLaunchView'].set_bind === "function") X3DJSON['Obj']['MissileLaunchView'].set_bind(X3DJSON.nodeUtil('MissileLaunchView','set_bind'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_bind'] };
X3DJSON['ROUTE']['FireSensor']['isActive']['MissileLaunchView']['set_bind']['TO'].observe(X3DJSON.nodeUtil('MissileLaunchView'), config);
			X3DJSON.nodeUtil('GearUpInterpolator','set_fraction',X3DJSON.nodeUtil('WheelUp','fraction_changed'), __eventTime);
			X3DJSON.nodeUtil('GearDownInterpolator','set_fraction',X3DJSON.nodeUtil('WheelDown','fraction_changed'), __eventTime);
			X3DJSON.nodeUtil('RRearInterDown1','set_fraction',X3DJSON.nodeUtil('RRearDown1','fraction_changed'), __eventTime);
			X3DJSON.nodeUtil('RRearInterUp1','set_fraction',X3DJSON.nodeUtil('RRearUp1','fraction_changed'), __eventTime);
			X3DJSON.nodeUtil('LRearInterDown1','set_fraction',X3DJSON.nodeUtil('LRearDown1','fraction_changed'), __eventTime);
			X3DJSON.nodeUtil('LRearInterUp1','set_fraction',X3DJSON.nodeUtil('LRearUp1','fraction_changed'), __eventTime);
			X3DJSON.nodeUtil('MissilePath','set_fraction',X3DJSON.nodeUtil('FireClock','fraction_changed'), __eventTime);