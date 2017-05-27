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

X3DJSON['Script']['MoveCylinder'] = function() {
	this.set_cycle = function (value) {
		X3DJSON.nodeUtil('MoveCylinder', 'cycle', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.cycle_changed = function () {
		return X3DJSON.nodeUtil('MoveCylinder', 'cycle');
	};
	this.set_cycle(undefined);
	this.set_spine = function (value) {
		X3DJSON.nodeUtil('MoveCylinder', 'spine', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.spine_changed = function () {
		return X3DJSON.nodeUtil('MoveCylinder', 'spine');
	};
	this.set_spine(new MFVec3f([[-50,-50,0],[50,50,0]]));


ecmascript:

                
	this.set_cycle = function (value) {
                        console.error(value);
                        var endA = new SFVec3f(this.spine_changed()[0][0]*Math.random()*2, this.spine_changed()[0][1]*Math.random()*2, this.spine_changed()[0][2]*Math.random()*2);
                        var endB = new SFVec3f(this.spine_changed()[1][0]*Math.random()*2, this.spine_changed()[1][1]*Math.random()*2, this.spine_changed()[1][2]*Math.random()*2);
		        this.set_spine ( new MFVec3f(endA, endB));
                }
         ;

	this.set_spine = function (value) {
                    this.set_spine ( value);
                };

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['MoveCylinder'] = new X3DJSON['Script']['MoveCylinder']();
if (typeof X3DJSON['Obj']['MoveCylinder'].initialize === "function") X3DJSON['Obj']['MoveCylinder'].initialize();
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime'] === 'undefined') {
X3DJSON['ROUTE']['TourTime'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['TourTime']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime']['cycleTime']['MoveCylinder'] === 'undefined') {
X3DJSON['ROUTE']['TourTime']['cycleTime']['MoveCylinder'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime']['cycleTime']['MoveCylinder']['set_cycle'] === 'undefined') {
X3DJSON['ROUTE']['TourTime']['cycleTime']['MoveCylinder']['set_cycle'] = {};
}

X3DJSON['ROUTE']['TourTime']['cycleTime']['MoveCylinder']['set_cycle']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'cycleTime');
			X3DJSON.nodeUtil('MoveCylinder','set_cycle',X3DJSON.nodeUtil('TourTime','cycleTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['cycleTime'] };
X3DJSON['ROUTE']['TourTime']['cycleTime']['MoveCylinder']['set_cycle']['FROM'].observe(X3DJSON.nodeUtil('TourTime'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime'] === 'undefined') {
X3DJSON['ROUTE']['TourTime'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['TourTime']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime']['cycleTime']['MoveCylinder'] === 'undefined') {
X3DJSON['ROUTE']['TourTime']['cycleTime']['MoveCylinder'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime']['cycleTime']['MoveCylinder']['set_cycle'] === 'undefined') {
X3DJSON['ROUTE']['TourTime']['cycleTime']['MoveCylinder']['set_cycle'] = {};
}

X3DJSON['ROUTE']['TourTime']['cycleTime']['MoveCylinder']['set_cycle']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_cycle');
			if (typeof X3DJSON['Obj']['MoveCylinder'].set_cycle === "function") X3DJSON['Obj']['MoveCylinder'].set_cycle(X3DJSON.nodeUtil('MoveCylinder','set_cycle'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_cycle'] };
X3DJSON['ROUTE']['TourTime']['cycleTime']['MoveCylinder']['set_cycle']['TO'].observe(X3DJSON.nodeUtil('MoveCylinder'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['MoveCylinder'] === 'undefined') {
X3DJSON['ROUTE']['MoveCylinder'] = {};
}
if (typeof X3DJSON['ROUTE']['MoveCylinder']['spine'] === 'undefined') {
X3DJSON['ROUTE']['MoveCylinder']['spine'] = {};
}
if (typeof X3DJSON['ROUTE']['MoveCylinder']['spine']['extrusion'] === 'undefined') {
X3DJSON['ROUTE']['MoveCylinder']['spine']['extrusion'] = {};
}
if (typeof X3DJSON['ROUTE']['MoveCylinder']['spine']['extrusion']['set_spine'] === 'undefined') {
X3DJSON['ROUTE']['MoveCylinder']['spine']['extrusion']['set_spine'] = {};
}

X3DJSON['ROUTE']['MoveCylinder']['spine']['extrusion']['set_spine']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'spine');
			X3DJSON.nodeUtil('extrusion','set_spine',X3DJSON.nodeUtil('MoveCylinder','spine'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['spine'] };
X3DJSON['ROUTE']['MoveCylinder']['spine']['extrusion']['set_spine']['FROM'].observe(X3DJSON.nodeUtil('MoveCylinder'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['MoveCylinder'] === 'undefined') {
X3DJSON['ROUTE']['MoveCylinder'] = {};
}
if (typeof X3DJSON['ROUTE']['MoveCylinder']['spine'] === 'undefined') {
X3DJSON['ROUTE']['MoveCylinder']['spine'] = {};
}
if (typeof X3DJSON['ROUTE']['MoveCylinder']['spine']['extrusion'] === 'undefined') {
X3DJSON['ROUTE']['MoveCylinder']['spine']['extrusion'] = {};
}
if (typeof X3DJSON['ROUTE']['MoveCylinder']['spine']['extrusion']['set_spine'] === 'undefined') {
X3DJSON['ROUTE']['MoveCylinder']['spine']['extrusion']['set_spine'] = {};
}

X3DJSON['ROUTE']['MoveCylinder']['spine']['extrusion']['set_spine']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_spine');
			if (typeof X3DJSON['Obj']['extrusion'].set_spine === "function") X3DJSON['Obj']['extrusion'].set_spine(X3DJSON.nodeUtil('extrusion','set_spine'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_spine'] };
X3DJSON['ROUTE']['MoveCylinder']['spine']['extrusion']['set_spine']['TO'].observe(X3DJSON.nodeUtil('extrusion'), config);
