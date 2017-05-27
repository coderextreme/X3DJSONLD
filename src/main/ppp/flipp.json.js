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
if (typeof X3DJSON['ROUTE']['ci'] === 'undefined') {
X3DJSON['ROUTE']['ci'] = {};
}
if (typeof X3DJSON['ROUTE']['ci']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['ci']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['ci']['value_changed']['pointList'] === 'undefined') {
X3DJSON['ROUTE']['ci']['value_changed']['pointList'] = {};
}
if (typeof X3DJSON['ROUTE']['ci']['value_changed']['pointList']['set_point'] === 'undefined') {
X3DJSON['ROUTE']['ci']['value_changed']['pointList']['set_point'] = {};
}

X3DJSON['ROUTE']['ci']['value_changed']['pointList']['set_point']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'value_changed');
			X3DJSON.nodeUtil('pointList','set_point',X3DJSON.nodeUtil('ci','value_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['value_changed'] };
X3DJSON['ROUTE']['ci']['value_changed']['pointList']['set_point']['FROM'].observe(X3DJSON.nodeUtil('ci'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['ci'] === 'undefined') {
X3DJSON['ROUTE']['ci'] = {};
}
if (typeof X3DJSON['ROUTE']['ci']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['ci']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['ci']['value_changed']['pointList'] === 'undefined') {
X3DJSON['ROUTE']['ci']['value_changed']['pointList'] = {};
}
if (typeof X3DJSON['ROUTE']['ci']['value_changed']['pointList']['set_point'] === 'undefined') {
X3DJSON['ROUTE']['ci']['value_changed']['pointList']['set_point'] = {};
}

X3DJSON['ROUTE']['ci']['value_changed']['pointList']['set_point']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_point');
			if (typeof X3DJSON['Obj']['pointList'].set_point === "function") X3DJSON['Obj']['pointList'].set_point(X3DJSON.nodeUtil('pointList','set_point'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_point'] };
X3DJSON['ROUTE']['ci']['value_changed']['pointList']['set_point']['TO'].observe(X3DJSON.nodeUtil('pointList'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['si'] === 'undefined') {
X3DJSON['ROUTE']['si'] = {};
}
if (typeof X3DJSON['ROUTE']['si']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['si']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['si']['value_changed']['ci'] === 'undefined') {
X3DJSON['ROUTE']['si']['value_changed']['ci'] = {};
}
if (typeof X3DJSON['ROUTE']['si']['value_changed']['ci']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['si']['value_changed']['ci']['set_fraction'] = {};
}

X3DJSON['ROUTE']['si']['value_changed']['ci']['set_fraction']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'value_changed');
			X3DJSON.nodeUtil('ci','set_fraction',X3DJSON.nodeUtil('si','value_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['value_changed'] };
X3DJSON['ROUTE']['si']['value_changed']['ci']['set_fraction']['FROM'].observe(X3DJSON.nodeUtil('si'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['si'] === 'undefined') {
X3DJSON['ROUTE']['si'] = {};
}
if (typeof X3DJSON['ROUTE']['si']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['si']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['si']['value_changed']['ci'] === 'undefined') {
X3DJSON['ROUTE']['si']['value_changed']['ci'] = {};
}
if (typeof X3DJSON['ROUTE']['si']['value_changed']['ci']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['si']['value_changed']['ci']['set_fraction'] = {};
}

X3DJSON['ROUTE']['si']['value_changed']['ci']['set_fraction']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_fraction');
			if (typeof X3DJSON['Obj']['ci'].set_fraction === "function") X3DJSON['Obj']['ci'].set_fraction(X3DJSON.nodeUtil('ci','set_fraction'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_fraction'] };
X3DJSON['ROUTE']['si']['value_changed']['ci']['set_fraction']['TO'].observe(X3DJSON.nodeUtil('ci'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['ts'] === 'undefined') {
X3DJSON['ROUTE']['ts'] = {};
}
if (typeof X3DJSON['ROUTE']['ts']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['ts']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['ts']['fraction_changed']['si'] === 'undefined') {
X3DJSON['ROUTE']['ts']['fraction_changed']['si'] = {};
}
if (typeof X3DJSON['ROUTE']['ts']['fraction_changed']['si']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['ts']['fraction_changed']['si']['set_fraction'] = {};
}

X3DJSON['ROUTE']['ts']['fraction_changed']['si']['set_fraction']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'fraction_changed');
			X3DJSON.nodeUtil('si','set_fraction',X3DJSON.nodeUtil('ts','fraction_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['fraction_changed'] };
X3DJSON['ROUTE']['ts']['fraction_changed']['si']['set_fraction']['FROM'].observe(X3DJSON.nodeUtil('ts'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['ts'] === 'undefined') {
X3DJSON['ROUTE']['ts'] = {};
}
if (typeof X3DJSON['ROUTE']['ts']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['ts']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['ts']['fraction_changed']['si'] === 'undefined') {
X3DJSON['ROUTE']['ts']['fraction_changed']['si'] = {};
}
if (typeof X3DJSON['ROUTE']['ts']['fraction_changed']['si']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['ts']['fraction_changed']['si']['set_fraction'] = {};
}

X3DJSON['ROUTE']['ts']['fraction_changed']['si']['set_fraction']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_fraction');
			if (typeof X3DJSON['Obj']['si'].set_fraction === "function") X3DJSON['Obj']['si'].set_fraction(X3DJSON.nodeUtil('si','set_fraction'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_fraction'] };
X3DJSON['ROUTE']['ts']['fraction_changed']['si']['set_fraction']['TO'].observe(X3DJSON.nodeUtil('si'), config);
			X3DJSON.nodeUtil('ci','set_fraction',X3DJSON.nodeUtil('si','value_changed'), __eventTime);
			X3DJSON.nodeUtil('si','set_fraction',X3DJSON.nodeUtil('ts','fraction_changed'), __eventTime);