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

X3DJSON['Script']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'] = function() {
	this.set_clearSpanWidth = function (value) {
		X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchPrototypeScript', 'clearSpanWidth', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.clearSpanWidth_changed = function () {
		return X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchPrototypeScript', 'clearSpanWidth');
	};
	this.set_clearSpanWidth(new SFFloat(5));
	this.set_riseHeight = function (value) {
		X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchPrototypeScript', 'riseHeight', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.riseHeight_changed = function () {
		return X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchPrototypeScript', 'riseHeight');
	};
	this.set_riseHeight(new SFFloat(2.5));
	this.set_depth = function (value) {
		X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchPrototypeScript', 'depth', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.depth_changed = function () {
		return X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchPrototypeScript', 'depth');
	};
	this.set_depth(new SFFloat(2));
	this.set_topAbutmentHeight = function (value) {
		X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchPrototypeScript', 'topAbutmentHeight', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.topAbutmentHeight_changed = function () {
		return X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchPrototypeScript', 'topAbutmentHeight');
	};
	this.set_topAbutmentHeight(new SFFloat(0.6));
	this.set_pierWidth = function (value) {
		X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchPrototypeScript', 'pierWidth', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.pierWidth_changed = function () {
		return X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchPrototypeScript', 'pierWidth');
	};
	this.set_pierWidth(new SFFloat(1));
	this.set_pierHeight = function (value) {
		X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchPrototypeScript', 'pierHeight', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.pierHeight_changed = function () {
		return X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchPrototypeScript', 'pierHeight');
	};
	this.set_pierHeight(new SFFloat(2));
	this.set_archHalf = function (value) {
		X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchPrototypeScript', 'archHalf', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.archHalf_changed = function () {
		return X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchPrototypeScript', 'archHalf');
	};
	this.set_archHalf(new SFBool(false));
	this.set_archHalfExtensionWidth = function (value) {
		X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchPrototypeScript', 'archHalfExtensionWidth', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.archHalfExtensionWidth_changed = function () {
		return X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchPrototypeScript', 'archHalfExtensionWidth');
	};
	this.set_archHalfExtensionWidth(new SFFloat(0));
	this.set_onlyIntrados = function (value) {
		X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchPrototypeScript', 'onlyIntrados', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.onlyIntrados_changed = function () {
		return X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchPrototypeScript', 'onlyIntrados');
	};
	this.set_onlyIntrados(new SFBool(false));
	this.set_archFilled = function (value) {
		X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchPrototypeScript', 'archFilled', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.archFilled_changed = function () {
		return X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchPrototypeScript', 'archFilled');
	};
	this.set_archFilled(new SFBool(false));
	this.set_archHalfFilled = function (value) {
		X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchPrototypeScript', 'archHalfFilled', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.archHalfFilled_changed = function () {
		return X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchPrototypeScript', 'archHalfFilled');
	};
	this.set_archHalfFilled(new SFBool(false));
	this.set_lintel = function (value) {
		X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchPrototypeScript', 'lintel', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.lintel_changed = function () {
		return X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchPrototypeScript', 'lintel');
	};
	this.set_lintel(new SFBool(false));
	this.set_computedScale = function (value) {
		X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchPrototypeScript', 'computedScale', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.computedScale_changed = function () {
		return X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchPrototypeScript', 'computedScale');
	};
	this.set_computedScale(new SFVec3f());
	this.set_pointOut = function (value) {
		X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchPrototypeScript', 'pointOut', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.pointOut_changed = function () {
		return X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchPrototypeScript', 'pointOut');
	};
	this.set_pointOut(new MFVec3f());
	this.set_indexOut = function (value) {
		X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchPrototypeScript', 'indexOut', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.indexOut_changed = function () {
		return X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchPrototypeScript', 'indexOut');
	};
	this.set_indexOut(new MFInt32());
};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'] = new X3DJSON['Script']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']();
if (typeof X3DJSON['Obj']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'].initialize === "function") X3DJSON['Obj']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'].initialize();
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'] === 'undefined') {
X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['computedScale'] === 'undefined') {
X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['computedScale'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['computedScale']['DECLArchPrototype_ArchInstance_ArchTransform'] === 'undefined') {
X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['computedScale']['DECLArchPrototype_ArchInstance_ArchTransform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['computedScale']['DECLArchPrototype_ArchInstance_ArchTransform']['scale'] === 'undefined') {
X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['computedScale']['DECLArchPrototype_ArchInstance_ArchTransform']['scale'] = {};
}

X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['computedScale']['DECLArchPrototype_ArchInstance_ArchTransform']['scale']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'computedScale');
			X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchTransform','scale',X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchPrototypeScript','computedScale'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['computedScale'] };
X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['computedScale']['DECLArchPrototype_ArchInstance_ArchTransform']['scale']['FROM'].observe(X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchPrototypeScript'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'] === 'undefined') {
X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['computedScale'] === 'undefined') {
X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['computedScale'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['computedScale']['DECLArchPrototype_ArchInstance_ArchTransform'] === 'undefined') {
X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['computedScale']['DECLArchPrototype_ArchInstance_ArchTransform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['computedScale']['DECLArchPrototype_ArchInstance_ArchTransform']['scale'] === 'undefined') {
X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['computedScale']['DECLArchPrototype_ArchInstance_ArchTransform']['scale'] = {};
}

X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['computedScale']['DECLArchPrototype_ArchInstance_ArchTransform']['scale']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'scale');
			if (typeof X3DJSON['Obj']['DECLArchPrototype_ArchInstance_ArchTransform'].scale === "function") X3DJSON['Obj']['DECLArchPrototype_ArchInstance_ArchTransform'].scale(X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchTransform','scale'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['scale'] };
X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['computedScale']['DECLArchPrototype_ArchInstance_ArchTransform']['scale']['TO'].observe(X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchTransform'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'] === 'undefined') {
X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['pointOut'] === 'undefined') {
X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['pointOut'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['pointOut']['DECLArchPrototype_ArchInstance_ArchChord'] === 'undefined') {
X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['pointOut']['DECLArchPrototype_ArchInstance_ArchChord'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['pointOut']['DECLArchPrototype_ArchInstance_ArchChord']['point'] === 'undefined') {
X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['pointOut']['DECLArchPrototype_ArchInstance_ArchChord']['point'] = {};
}

X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['pointOut']['DECLArchPrototype_ArchInstance_ArchChord']['point']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'pointOut');
			X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchChord','point',X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchPrototypeScript','pointOut'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['pointOut'] };
X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['pointOut']['DECLArchPrototype_ArchInstance_ArchChord']['point']['FROM'].observe(X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchPrototypeScript'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'] === 'undefined') {
X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['pointOut'] === 'undefined') {
X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['pointOut'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['pointOut']['DECLArchPrototype_ArchInstance_ArchChord'] === 'undefined') {
X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['pointOut']['DECLArchPrototype_ArchInstance_ArchChord'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['pointOut']['DECLArchPrototype_ArchInstance_ArchChord']['point'] === 'undefined') {
X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['pointOut']['DECLArchPrototype_ArchInstance_ArchChord']['point'] = {};
}

X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['pointOut']['DECLArchPrototype_ArchInstance_ArchChord']['point']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'point');
			if (typeof X3DJSON['Obj']['DECLArchPrototype_ArchInstance_ArchChord'].point === "function") X3DJSON['Obj']['DECLArchPrototype_ArchInstance_ArchChord'].point(X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchChord','point'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['point'] };
X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['pointOut']['DECLArchPrototype_ArchInstance_ArchChord']['point']['TO'].observe(X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchChord'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'] === 'undefined') {
X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['indexOut'] === 'undefined') {
X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['indexOut'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['indexOut']['DECLArchPrototype_ArchInstance_ArchIndex'] === 'undefined') {
X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['indexOut']['DECLArchPrototype_ArchInstance_ArchIndex'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['indexOut']['DECLArchPrototype_ArchInstance_ArchIndex']['set_coordIndex'] === 'undefined') {
X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['indexOut']['DECLArchPrototype_ArchInstance_ArchIndex']['set_coordIndex'] = {};
}

X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['indexOut']['DECLArchPrototype_ArchInstance_ArchIndex']['set_coordIndex']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'indexOut');
			X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchIndex','set_coordIndex',X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchPrototypeScript','indexOut'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['indexOut'] };
X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['indexOut']['DECLArchPrototype_ArchInstance_ArchIndex']['set_coordIndex']['FROM'].observe(X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchPrototypeScript'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'] === 'undefined') {
X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['indexOut'] === 'undefined') {
X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['indexOut'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['indexOut']['DECLArchPrototype_ArchInstance_ArchIndex'] === 'undefined') {
X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['indexOut']['DECLArchPrototype_ArchInstance_ArchIndex'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['indexOut']['DECLArchPrototype_ArchInstance_ArchIndex']['set_coordIndex'] === 'undefined') {
X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['indexOut']['DECLArchPrototype_ArchInstance_ArchIndex']['set_coordIndex'] = {};
}

X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['indexOut']['DECLArchPrototype_ArchInstance_ArchIndex']['set_coordIndex']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_coordIndex');
			if (typeof X3DJSON['Obj']['DECLArchPrototype_ArchInstance_ArchIndex'].set_coordIndex === "function") X3DJSON['Obj']['DECLArchPrototype_ArchInstance_ArchIndex'].set_coordIndex(X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchIndex','set_coordIndex'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_coordIndex'] };
X3DJSON['ROUTE']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['indexOut']['DECLArchPrototype_ArchInstance_ArchIndex']['set_coordIndex']['TO'].observe(X3DJSON.nodeUtil('DECLArchPrototype_ArchInstance_ArchIndex'), config);
