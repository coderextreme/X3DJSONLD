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
if (typeof X3DJSON['ROUTE']['Clock'] === 'undefined') {
X3DJSON['ROUTE']['Clock'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['Clock']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock']['fraction_changed']['Spinner'] === 'undefined') {
X3DJSON['ROUTE']['Clock']['fraction_changed']['Spinner'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock']['fraction_changed']['Spinner']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['Clock']['fraction_changed']['Spinner']['set_fraction'] = {};
}

X3DJSON['ROUTE']['Clock']['fraction_changed']['Spinner']['set_fraction']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'fraction_changed');
			X3DJSON.nodeUtil('Spinner','set_fraction',X3DJSON.nodeUtil('Clock','fraction_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['fraction_changed'] };
X3DJSON['ROUTE']['Clock']['fraction_changed']['Spinner']['set_fraction']['FROM'].observe(X3DJSON.nodeUtil('Clock'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock'] === 'undefined') {
X3DJSON['ROUTE']['Clock'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['Clock']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock']['fraction_changed']['Spinner'] === 'undefined') {
X3DJSON['ROUTE']['Clock']['fraction_changed']['Spinner'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock']['fraction_changed']['Spinner']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['Clock']['fraction_changed']['Spinner']['set_fraction'] = {};
}

X3DJSON['ROUTE']['Clock']['fraction_changed']['Spinner']['set_fraction']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_fraction');
			if (typeof X3DJSON['Obj']['Spinner'].set_fraction === "function") X3DJSON['Obj']['Spinner'].set_fraction(X3DJSON.nodeUtil('Spinner','set_fraction'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_fraction'] };
X3DJSON['ROUTE']['Clock']['fraction_changed']['Spinner']['set_fraction']['TO'].observe(X3DJSON.nodeUtil('Spinner'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['Spinner'] === 'undefined') {
X3DJSON['ROUTE']['Spinner'] = {};
}
if (typeof X3DJSON['ROUTE']['Spinner']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['Spinner']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['Spinner']['value_changed']['TransformExampleUSE'] === 'undefined') {
X3DJSON['ROUTE']['Spinner']['value_changed']['TransformExampleUSE'] = {};
}
if (typeof X3DJSON['ROUTE']['Spinner']['value_changed']['TransformExampleUSE']['rotation'] === 'undefined') {
X3DJSON['ROUTE']['Spinner']['value_changed']['TransformExampleUSE']['rotation'] = {};
}

X3DJSON['ROUTE']['Spinner']['value_changed']['TransformExampleUSE']['rotation']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'value_changed');
			X3DJSON.nodeUtil('TransformExampleUSE','rotation',X3DJSON.nodeUtil('Spinner','value_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['value_changed'] };
X3DJSON['ROUTE']['Spinner']['value_changed']['TransformExampleUSE']['rotation']['FROM'].observe(X3DJSON.nodeUtil('Spinner'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['Spinner'] === 'undefined') {
X3DJSON['ROUTE']['Spinner'] = {};
}
if (typeof X3DJSON['ROUTE']['Spinner']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['Spinner']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['Spinner']['value_changed']['TransformExampleUSE'] === 'undefined') {
X3DJSON['ROUTE']['Spinner']['value_changed']['TransformExampleUSE'] = {};
}
if (typeof X3DJSON['ROUTE']['Spinner']['value_changed']['TransformExampleUSE']['rotation'] === 'undefined') {
X3DJSON['ROUTE']['Spinner']['value_changed']['TransformExampleUSE']['rotation'] = {};
}

X3DJSON['ROUTE']['Spinner']['value_changed']['TransformExampleUSE']['rotation']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'rotation');
			if (typeof X3DJSON['Obj']['TransformExampleUSE'].rotation === "function") X3DJSON['Obj']['TransformExampleUSE'].rotation(X3DJSON.nodeUtil('TransformExampleUSE','rotation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['rotation'] };
X3DJSON['ROUTE']['Spinner']['value_changed']['TransformExampleUSE']['rotation']['TO'].observe(X3DJSON.nodeUtil('TransformExampleUSE'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock'] === 'undefined') {
X3DJSON['ROUTE']['Clock'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['Clock']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock']['fraction_changed']['StayInPlace'] === 'undefined') {
X3DJSON['ROUTE']['Clock']['fraction_changed']['StayInPlace'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock']['fraction_changed']['StayInPlace']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['Clock']['fraction_changed']['StayInPlace']['set_fraction'] = {};
}

X3DJSON['ROUTE']['Clock']['fraction_changed']['StayInPlace']['set_fraction']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'fraction_changed');
			X3DJSON.nodeUtil('StayInPlace','set_fraction',X3DJSON.nodeUtil('Clock','fraction_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['fraction_changed'] };
X3DJSON['ROUTE']['Clock']['fraction_changed']['StayInPlace']['set_fraction']['FROM'].observe(X3DJSON.nodeUtil('Clock'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock'] === 'undefined') {
X3DJSON['ROUTE']['Clock'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['Clock']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock']['fraction_changed']['StayInPlace'] === 'undefined') {
X3DJSON['ROUTE']['Clock']['fraction_changed']['StayInPlace'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock']['fraction_changed']['StayInPlace']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['Clock']['fraction_changed']['StayInPlace']['set_fraction'] = {};
}

X3DJSON['ROUTE']['Clock']['fraction_changed']['StayInPlace']['set_fraction']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_fraction');
			if (typeof X3DJSON['Obj']['StayInPlace'].set_fraction === "function") X3DJSON['Obj']['StayInPlace'].set_fraction(X3DJSON.nodeUtil('StayInPlace','set_fraction'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_fraction'] };
X3DJSON['ROUTE']['Clock']['fraction_changed']['StayInPlace']['set_fraction']['TO'].observe(X3DJSON.nodeUtil('StayInPlace'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['StayInPlace'] === 'undefined') {
X3DJSON['ROUTE']['StayInPlace'] = {};
}
if (typeof X3DJSON['ROUTE']['StayInPlace']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['StayInPlace']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['StayInPlace']['value_changed']['someInlineRoot'] === 'undefined') {
X3DJSON['ROUTE']['StayInPlace']['value_changed']['someInlineRoot'] = {};
}
if (typeof X3DJSON['ROUTE']['StayInPlace']['value_changed']['someInlineRoot']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['StayInPlace']['value_changed']['someInlineRoot']['set_translation'] = {};
}

X3DJSON['ROUTE']['StayInPlace']['value_changed']['someInlineRoot']['set_translation']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'value_changed');
			X3DJSON.nodeUtil('someInlineRoot','set_translation',X3DJSON.nodeUtil('StayInPlace','value_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['value_changed'] };
X3DJSON['ROUTE']['StayInPlace']['value_changed']['someInlineRoot']['set_translation']['FROM'].observe(X3DJSON.nodeUtil('StayInPlace'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['StayInPlace'] === 'undefined') {
X3DJSON['ROUTE']['StayInPlace'] = {};
}
if (typeof X3DJSON['ROUTE']['StayInPlace']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['StayInPlace']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['StayInPlace']['value_changed']['someInlineRoot'] === 'undefined') {
X3DJSON['ROUTE']['StayInPlace']['value_changed']['someInlineRoot'] = {};
}
if (typeof X3DJSON['ROUTE']['StayInPlace']['value_changed']['someInlineRoot']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['StayInPlace']['value_changed']['someInlineRoot']['set_translation'] = {};
}

X3DJSON['ROUTE']['StayInPlace']['value_changed']['someInlineRoot']['set_translation']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_translation');
			if (typeof X3DJSON['Obj']['someInlineRoot'].set_translation === "function") X3DJSON['Obj']['someInlineRoot'].set_translation(X3DJSON.nodeUtil('someInlineRoot','set_translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_translation'] };
X3DJSON['ROUTE']['StayInPlace']['value_changed']['someInlineRoot']['set_translation']['TO'].observe(X3DJSON.nodeUtil('someInlineRoot'), config);
			X3DJSON.nodeUtil('Spinner','set_fraction',X3DJSON.nodeUtil('Clock','fraction_changed'), __eventTime);
			X3DJSON.nodeUtil('StayInPlace','set_fraction',X3DJSON.nodeUtil('Clock','fraction_changed'), __eventTime);