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
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['totalDuration'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['totalDuration'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['totalDuration']['CameraTimer.SimpleShots'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['totalDuration']['CameraTimer.SimpleShots'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['totalDuration']['CameraTimer.SimpleShots']['cycleInterval'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['totalDuration']['CameraTimer.SimpleShots']['cycleInterval'] = {};
}

X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['totalDuration']['CameraTimer.SimpleShots']['cycleInterval']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'totalDuration');
			X3DJSON.nodeUtil('CameraTimer.SimpleShots','cycleInterval',X3DJSON.nodeUtil('DECLCamera_Camera.SimpleShotsTest','totalDuration'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['totalDuration'] };
X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['totalDuration']['CameraTimer.SimpleShots']['cycleInterval']['FROM'].observe(X3DJSON.nodeUtil('DECLCamera_Camera.SimpleShotsTest'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['totalDuration'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['totalDuration'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['totalDuration']['CameraTimer.SimpleShots'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['totalDuration']['CameraTimer.SimpleShots'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['totalDuration']['CameraTimer.SimpleShots']['cycleInterval'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['totalDuration']['CameraTimer.SimpleShots']['cycleInterval'] = {};
}

X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['totalDuration']['CameraTimer.SimpleShots']['cycleInterval']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'cycleInterval');
			if (typeof X3DJSON['Obj']['CameraTimer.SimpleShots'].cycleInterval === "function") X3DJSON['Obj']['CameraTimer.SimpleShots'].cycleInterval(X3DJSON.nodeUtil('CameraTimer.SimpleShots','cycleInterval'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['cycleInterval'] };
X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['totalDuration']['CameraTimer.SimpleShots']['cycleInterval']['TO'].observe(X3DJSON.nodeUtil('CameraTimer.SimpleShots'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['CameraTimer.SimpleShots'] === 'undefined') {
X3DJSON['ROUTE']['CameraTimer.SimpleShots'] = {};
}
if (typeof X3DJSON['ROUTE']['CameraTimer.SimpleShots']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['CameraTimer.SimpleShots']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['CameraTimer.SimpleShots']['fraction_changed']['DECLCamera_Camera.SimpleShotsTest'] === 'undefined') {
X3DJSON['ROUTE']['CameraTimer.SimpleShots']['fraction_changed']['DECLCamera_Camera.SimpleShotsTest'] = {};
}
if (typeof X3DJSON['ROUTE']['CameraTimer.SimpleShots']['fraction_changed']['DECLCamera_Camera.SimpleShotsTest']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['CameraTimer.SimpleShots']['fraction_changed']['DECLCamera_Camera.SimpleShotsTest']['set_fraction'] = {};
}

X3DJSON['ROUTE']['CameraTimer.SimpleShots']['fraction_changed']['DECLCamera_Camera.SimpleShotsTest']['set_fraction']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'fraction_changed');
			X3DJSON.nodeUtil('DECLCamera_Camera.SimpleShotsTest','set_fraction',X3DJSON.nodeUtil('CameraTimer.SimpleShots','fraction_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['fraction_changed'] };
X3DJSON['ROUTE']['CameraTimer.SimpleShots']['fraction_changed']['DECLCamera_Camera.SimpleShotsTest']['set_fraction']['FROM'].observe(X3DJSON.nodeUtil('CameraTimer.SimpleShots'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['CameraTimer.SimpleShots'] === 'undefined') {
X3DJSON['ROUTE']['CameraTimer.SimpleShots'] = {};
}
if (typeof X3DJSON['ROUTE']['CameraTimer.SimpleShots']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['CameraTimer.SimpleShots']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['CameraTimer.SimpleShots']['fraction_changed']['DECLCamera_Camera.SimpleShotsTest'] === 'undefined') {
X3DJSON['ROUTE']['CameraTimer.SimpleShots']['fraction_changed']['DECLCamera_Camera.SimpleShotsTest'] = {};
}
if (typeof X3DJSON['ROUTE']['CameraTimer.SimpleShots']['fraction_changed']['DECLCamera_Camera.SimpleShotsTest']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['CameraTimer.SimpleShots']['fraction_changed']['DECLCamera_Camera.SimpleShotsTest']['set_fraction'] = {};
}

X3DJSON['ROUTE']['CameraTimer.SimpleShots']['fraction_changed']['DECLCamera_Camera.SimpleShotsTest']['set_fraction']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_fraction');
			if (typeof X3DJSON['Obj']['DECLCamera_Camera.SimpleShotsTest'].set_fraction === "function") X3DJSON['Obj']['DECLCamera_Camera.SimpleShotsTest'].set_fraction(X3DJSON.nodeUtil('DECLCamera_Camera.SimpleShotsTest','set_fraction'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_fraction'] };
X3DJSON['ROUTE']['CameraTimer.SimpleShots']['fraction_changed']['DECLCamera_Camera.SimpleShotsTest']['set_fraction']['TO'].observe(X3DJSON.nodeUtil('DECLCamera_Camera.SimpleShotsTest'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouchActive.SimpleShotsFilter'] === 'undefined') {
X3DJSON['ROUTE']['TextTouchActive.SimpleShotsFilter'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouchActive.SimpleShotsFilter']['inputTrue'] === 'undefined') {
X3DJSON['ROUTE']['TextTouchActive.SimpleShotsFilter']['inputTrue'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouchActive.SimpleShotsFilter']['inputTrue']['DECLCamera_Camera.SimpleShotsTest'] === 'undefined') {
X3DJSON['ROUTE']['TextTouchActive.SimpleShotsFilter']['inputTrue']['DECLCamera_Camera.SimpleShotsTest'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouchActive.SimpleShotsFilter']['inputTrue']['DECLCamera_Camera.SimpleShotsTest']['set_bind'] === 'undefined') {
X3DJSON['ROUTE']['TextTouchActive.SimpleShotsFilter']['inputTrue']['DECLCamera_Camera.SimpleShotsTest']['set_bind'] = {};
}

X3DJSON['ROUTE']['TextTouchActive.SimpleShotsFilter']['inputTrue']['DECLCamera_Camera.SimpleShotsTest']['set_bind']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'inputTrue');
			X3DJSON.nodeUtil('DECLCamera_Camera.SimpleShotsTest','set_bind',X3DJSON.nodeUtil('TextTouchActive.SimpleShotsFilter','inputTrue'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['inputTrue'] };
X3DJSON['ROUTE']['TextTouchActive.SimpleShotsFilter']['inputTrue']['DECLCamera_Camera.SimpleShotsTest']['set_bind']['FROM'].observe(X3DJSON.nodeUtil('TextTouchActive.SimpleShotsFilter'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouchActive.SimpleShotsFilter'] === 'undefined') {
X3DJSON['ROUTE']['TextTouchActive.SimpleShotsFilter'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouchActive.SimpleShotsFilter']['inputTrue'] === 'undefined') {
X3DJSON['ROUTE']['TextTouchActive.SimpleShotsFilter']['inputTrue'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouchActive.SimpleShotsFilter']['inputTrue']['DECLCamera_Camera.SimpleShotsTest'] === 'undefined') {
X3DJSON['ROUTE']['TextTouchActive.SimpleShotsFilter']['inputTrue']['DECLCamera_Camera.SimpleShotsTest'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouchActive.SimpleShotsFilter']['inputTrue']['DECLCamera_Camera.SimpleShotsTest']['set_bind'] === 'undefined') {
X3DJSON['ROUTE']['TextTouchActive.SimpleShotsFilter']['inputTrue']['DECLCamera_Camera.SimpleShotsTest']['set_bind'] = {};
}

X3DJSON['ROUTE']['TextTouchActive.SimpleShotsFilter']['inputTrue']['DECLCamera_Camera.SimpleShotsTest']['set_bind']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_bind');
			if (typeof X3DJSON['Obj']['DECLCamera_Camera.SimpleShotsTest'].set_bind === "function") X3DJSON['Obj']['DECLCamera_Camera.SimpleShotsTest'].set_bind(X3DJSON.nodeUtil('DECLCamera_Camera.SimpleShotsTest','set_bind'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_bind'] };
X3DJSON['ROUTE']['TextTouchActive.SimpleShotsFilter']['inputTrue']['DECLCamera_Camera.SimpleShotsTest']['set_bind']['TO'].observe(X3DJSON.nodeUtil('DECLCamera_Camera.SimpleShotsTest'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouch.SimpleShots'] === 'undefined') {
X3DJSON['ROUTE']['TextTouch.SimpleShots'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouch.SimpleShots']['isActive'] === 'undefined') {
X3DJSON['ROUTE']['TextTouch.SimpleShots']['isActive'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouch.SimpleShots']['isActive']['TextTouchActive.SimpleShotsFilter'] === 'undefined') {
X3DJSON['ROUTE']['TextTouch.SimpleShots']['isActive']['TextTouchActive.SimpleShotsFilter'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouch.SimpleShots']['isActive']['TextTouchActive.SimpleShotsFilter']['set_boolean'] === 'undefined') {
X3DJSON['ROUTE']['TextTouch.SimpleShots']['isActive']['TextTouchActive.SimpleShotsFilter']['set_boolean'] = {};
}

X3DJSON['ROUTE']['TextTouch.SimpleShots']['isActive']['TextTouchActive.SimpleShotsFilter']['set_boolean']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'isActive');
			X3DJSON.nodeUtil('TextTouchActive.SimpleShotsFilter','set_boolean',X3DJSON.nodeUtil('TextTouch.SimpleShots','isActive'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['isActive'] };
X3DJSON['ROUTE']['TextTouch.SimpleShots']['isActive']['TextTouchActive.SimpleShotsFilter']['set_boolean']['FROM'].observe(X3DJSON.nodeUtil('TextTouch.SimpleShots'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouch.SimpleShots'] === 'undefined') {
X3DJSON['ROUTE']['TextTouch.SimpleShots'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouch.SimpleShots']['isActive'] === 'undefined') {
X3DJSON['ROUTE']['TextTouch.SimpleShots']['isActive'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouch.SimpleShots']['isActive']['TextTouchActive.SimpleShotsFilter'] === 'undefined') {
X3DJSON['ROUTE']['TextTouch.SimpleShots']['isActive']['TextTouchActive.SimpleShotsFilter'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouch.SimpleShots']['isActive']['TextTouchActive.SimpleShotsFilter']['set_boolean'] === 'undefined') {
X3DJSON['ROUTE']['TextTouch.SimpleShots']['isActive']['TextTouchActive.SimpleShotsFilter']['set_boolean'] = {};
}

X3DJSON['ROUTE']['TextTouch.SimpleShots']['isActive']['TextTouchActive.SimpleShotsFilter']['set_boolean']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_boolean');
			if (typeof X3DJSON['Obj']['TextTouchActive.SimpleShotsFilter'].set_boolean === "function") X3DJSON['Obj']['TextTouchActive.SimpleShotsFilter'].set_boolean(X3DJSON.nodeUtil('TextTouchActive.SimpleShotsFilter','set_boolean'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_boolean'] };
X3DJSON['ROUTE']['TextTouch.SimpleShots']['isActive']['TextTouchActive.SimpleShotsFilter']['set_boolean']['TO'].observe(X3DJSON.nodeUtil('TextTouchActive.SimpleShotsFilter'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouch.SimpleShots'] === 'undefined') {
X3DJSON['ROUTE']['TextTouch.SimpleShots'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouch.SimpleShots']['touchTime'] === 'undefined') {
X3DJSON['ROUTE']['TextTouch.SimpleShots']['touchTime'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouch.SimpleShots']['touchTime']['CameraTimer.SimpleShots'] === 'undefined') {
X3DJSON['ROUTE']['TextTouch.SimpleShots']['touchTime']['CameraTimer.SimpleShots'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouch.SimpleShots']['touchTime']['CameraTimer.SimpleShots']['startTime'] === 'undefined') {
X3DJSON['ROUTE']['TextTouch.SimpleShots']['touchTime']['CameraTimer.SimpleShots']['startTime'] = {};
}

X3DJSON['ROUTE']['TextTouch.SimpleShots']['touchTime']['CameraTimer.SimpleShots']['startTime']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'touchTime');
			X3DJSON.nodeUtil('CameraTimer.SimpleShots','startTime',X3DJSON.nodeUtil('TextTouch.SimpleShots','touchTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['touchTime'] };
X3DJSON['ROUTE']['TextTouch.SimpleShots']['touchTime']['CameraTimer.SimpleShots']['startTime']['FROM'].observe(X3DJSON.nodeUtil('TextTouch.SimpleShots'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouch.SimpleShots'] === 'undefined') {
X3DJSON['ROUTE']['TextTouch.SimpleShots'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouch.SimpleShots']['touchTime'] === 'undefined') {
X3DJSON['ROUTE']['TextTouch.SimpleShots']['touchTime'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouch.SimpleShots']['touchTime']['CameraTimer.SimpleShots'] === 'undefined') {
X3DJSON['ROUTE']['TextTouch.SimpleShots']['touchTime']['CameraTimer.SimpleShots'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouch.SimpleShots']['touchTime']['CameraTimer.SimpleShots']['startTime'] === 'undefined') {
X3DJSON['ROUTE']['TextTouch.SimpleShots']['touchTime']['CameraTimer.SimpleShots']['startTime'] = {};
}

X3DJSON['ROUTE']['TextTouch.SimpleShots']['touchTime']['CameraTimer.SimpleShots']['startTime']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'startTime');
			if (typeof X3DJSON['Obj']['CameraTimer.SimpleShots'].startTime === "function") X3DJSON['Obj']['CameraTimer.SimpleShots'].startTime(X3DJSON.nodeUtil('CameraTimer.SimpleShots','startTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['startTime'] };
X3DJSON['ROUTE']['TextTouch.SimpleShots']['touchTime']['CameraTimer.SimpleShots']['startTime']['TO'].observe(X3DJSON.nodeUtil('CameraTimer.SimpleShots'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['totalDuration'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['totalDuration'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['totalDuration']['CameraTimer.AimPointTest'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['totalDuration']['CameraTimer.AimPointTest'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['totalDuration']['CameraTimer.AimPointTest']['cycleInterval'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['totalDuration']['CameraTimer.AimPointTest']['cycleInterval'] = {};
}

X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['totalDuration']['CameraTimer.AimPointTest']['cycleInterval']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'totalDuration');
			X3DJSON.nodeUtil('CameraTimer.AimPointTest','cycleInterval',X3DJSON.nodeUtil('DECLCamera_Camera.AimPointTest','totalDuration'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['totalDuration'] };
X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['totalDuration']['CameraTimer.AimPointTest']['cycleInterval']['FROM'].observe(X3DJSON.nodeUtil('DECLCamera_Camera.AimPointTest'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['totalDuration'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['totalDuration'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['totalDuration']['CameraTimer.AimPointTest'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['totalDuration']['CameraTimer.AimPointTest'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['totalDuration']['CameraTimer.AimPointTest']['cycleInterval'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['totalDuration']['CameraTimer.AimPointTest']['cycleInterval'] = {};
}

X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['totalDuration']['CameraTimer.AimPointTest']['cycleInterval']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'cycleInterval');
			if (typeof X3DJSON['Obj']['CameraTimer.AimPointTest'].cycleInterval === "function") X3DJSON['Obj']['CameraTimer.AimPointTest'].cycleInterval(X3DJSON.nodeUtil('CameraTimer.AimPointTest','cycleInterval'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['cycleInterval'] };
X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['totalDuration']['CameraTimer.AimPointTest']['cycleInterval']['TO'].observe(X3DJSON.nodeUtil('CameraTimer.AimPointTest'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['CameraTimer.AimPointTest'] === 'undefined') {
X3DJSON['ROUTE']['CameraTimer.AimPointTest'] = {};
}
if (typeof X3DJSON['ROUTE']['CameraTimer.AimPointTest']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['CameraTimer.AimPointTest']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['CameraTimer.AimPointTest']['fraction_changed']['DECLCamera_Camera.AimPointTest'] === 'undefined') {
X3DJSON['ROUTE']['CameraTimer.AimPointTest']['fraction_changed']['DECLCamera_Camera.AimPointTest'] = {};
}
if (typeof X3DJSON['ROUTE']['CameraTimer.AimPointTest']['fraction_changed']['DECLCamera_Camera.AimPointTest']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['CameraTimer.AimPointTest']['fraction_changed']['DECLCamera_Camera.AimPointTest']['set_fraction'] = {};
}

X3DJSON['ROUTE']['CameraTimer.AimPointTest']['fraction_changed']['DECLCamera_Camera.AimPointTest']['set_fraction']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'fraction_changed');
			X3DJSON.nodeUtil('DECLCamera_Camera.AimPointTest','set_fraction',X3DJSON.nodeUtil('CameraTimer.AimPointTest','fraction_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['fraction_changed'] };
X3DJSON['ROUTE']['CameraTimer.AimPointTest']['fraction_changed']['DECLCamera_Camera.AimPointTest']['set_fraction']['FROM'].observe(X3DJSON.nodeUtil('CameraTimer.AimPointTest'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['CameraTimer.AimPointTest'] === 'undefined') {
X3DJSON['ROUTE']['CameraTimer.AimPointTest'] = {};
}
if (typeof X3DJSON['ROUTE']['CameraTimer.AimPointTest']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['CameraTimer.AimPointTest']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['CameraTimer.AimPointTest']['fraction_changed']['DECLCamera_Camera.AimPointTest'] === 'undefined') {
X3DJSON['ROUTE']['CameraTimer.AimPointTest']['fraction_changed']['DECLCamera_Camera.AimPointTest'] = {};
}
if (typeof X3DJSON['ROUTE']['CameraTimer.AimPointTest']['fraction_changed']['DECLCamera_Camera.AimPointTest']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['CameraTimer.AimPointTest']['fraction_changed']['DECLCamera_Camera.AimPointTest']['set_fraction'] = {};
}

X3DJSON['ROUTE']['CameraTimer.AimPointTest']['fraction_changed']['DECLCamera_Camera.AimPointTest']['set_fraction']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_fraction');
			if (typeof X3DJSON['Obj']['DECLCamera_Camera.AimPointTest'].set_fraction === "function") X3DJSON['Obj']['DECLCamera_Camera.AimPointTest'].set_fraction(X3DJSON.nodeUtil('DECLCamera_Camera.AimPointTest','set_fraction'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_fraction'] };
X3DJSON['ROUTE']['CameraTimer.AimPointTest']['fraction_changed']['DECLCamera_Camera.AimPointTest']['set_fraction']['TO'].observe(X3DJSON.nodeUtil('DECLCamera_Camera.AimPointTest'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouchActive.AimPointFilter'] === 'undefined') {
X3DJSON['ROUTE']['TextTouchActive.AimPointFilter'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouchActive.AimPointFilter']['inputTrue'] === 'undefined') {
X3DJSON['ROUTE']['TextTouchActive.AimPointFilter']['inputTrue'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouchActive.AimPointFilter']['inputTrue']['DECLCamera_Camera.AimPointTest'] === 'undefined') {
X3DJSON['ROUTE']['TextTouchActive.AimPointFilter']['inputTrue']['DECLCamera_Camera.AimPointTest'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouchActive.AimPointFilter']['inputTrue']['DECLCamera_Camera.AimPointTest']['set_bind'] === 'undefined') {
X3DJSON['ROUTE']['TextTouchActive.AimPointFilter']['inputTrue']['DECLCamera_Camera.AimPointTest']['set_bind'] = {};
}

X3DJSON['ROUTE']['TextTouchActive.AimPointFilter']['inputTrue']['DECLCamera_Camera.AimPointTest']['set_bind']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'inputTrue');
			X3DJSON.nodeUtil('DECLCamera_Camera.AimPointTest','set_bind',X3DJSON.nodeUtil('TextTouchActive.AimPointFilter','inputTrue'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['inputTrue'] };
X3DJSON['ROUTE']['TextTouchActive.AimPointFilter']['inputTrue']['DECLCamera_Camera.AimPointTest']['set_bind']['FROM'].observe(X3DJSON.nodeUtil('TextTouchActive.AimPointFilter'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouchActive.AimPointFilter'] === 'undefined') {
X3DJSON['ROUTE']['TextTouchActive.AimPointFilter'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouchActive.AimPointFilter']['inputTrue'] === 'undefined') {
X3DJSON['ROUTE']['TextTouchActive.AimPointFilter']['inputTrue'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouchActive.AimPointFilter']['inputTrue']['DECLCamera_Camera.AimPointTest'] === 'undefined') {
X3DJSON['ROUTE']['TextTouchActive.AimPointFilter']['inputTrue']['DECLCamera_Camera.AimPointTest'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouchActive.AimPointFilter']['inputTrue']['DECLCamera_Camera.AimPointTest']['set_bind'] === 'undefined') {
X3DJSON['ROUTE']['TextTouchActive.AimPointFilter']['inputTrue']['DECLCamera_Camera.AimPointTest']['set_bind'] = {};
}

X3DJSON['ROUTE']['TextTouchActive.AimPointFilter']['inputTrue']['DECLCamera_Camera.AimPointTest']['set_bind']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_bind');
			if (typeof X3DJSON['Obj']['DECLCamera_Camera.AimPointTest'].set_bind === "function") X3DJSON['Obj']['DECLCamera_Camera.AimPointTest'].set_bind(X3DJSON.nodeUtil('DECLCamera_Camera.AimPointTest','set_bind'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_bind'] };
X3DJSON['ROUTE']['TextTouchActive.AimPointFilter']['inputTrue']['DECLCamera_Camera.AimPointTest']['set_bind']['TO'].observe(X3DJSON.nodeUtil('DECLCamera_Camera.AimPointTest'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouch.AimPointTest'] === 'undefined') {
X3DJSON['ROUTE']['TextTouch.AimPointTest'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouch.AimPointTest']['isActive'] === 'undefined') {
X3DJSON['ROUTE']['TextTouch.AimPointTest']['isActive'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouch.AimPointTest']['isActive']['TextTouchActive.AimPointFilter'] === 'undefined') {
X3DJSON['ROUTE']['TextTouch.AimPointTest']['isActive']['TextTouchActive.AimPointFilter'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouch.AimPointTest']['isActive']['TextTouchActive.AimPointFilter']['set_boolean'] === 'undefined') {
X3DJSON['ROUTE']['TextTouch.AimPointTest']['isActive']['TextTouchActive.AimPointFilter']['set_boolean'] = {};
}

X3DJSON['ROUTE']['TextTouch.AimPointTest']['isActive']['TextTouchActive.AimPointFilter']['set_boolean']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'isActive');
			X3DJSON.nodeUtil('TextTouchActive.AimPointFilter','set_boolean',X3DJSON.nodeUtil('TextTouch.AimPointTest','isActive'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['isActive'] };
X3DJSON['ROUTE']['TextTouch.AimPointTest']['isActive']['TextTouchActive.AimPointFilter']['set_boolean']['FROM'].observe(X3DJSON.nodeUtil('TextTouch.AimPointTest'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouch.AimPointTest'] === 'undefined') {
X3DJSON['ROUTE']['TextTouch.AimPointTest'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouch.AimPointTest']['isActive'] === 'undefined') {
X3DJSON['ROUTE']['TextTouch.AimPointTest']['isActive'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouch.AimPointTest']['isActive']['TextTouchActive.AimPointFilter'] === 'undefined') {
X3DJSON['ROUTE']['TextTouch.AimPointTest']['isActive']['TextTouchActive.AimPointFilter'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouch.AimPointTest']['isActive']['TextTouchActive.AimPointFilter']['set_boolean'] === 'undefined') {
X3DJSON['ROUTE']['TextTouch.AimPointTest']['isActive']['TextTouchActive.AimPointFilter']['set_boolean'] = {};
}

X3DJSON['ROUTE']['TextTouch.AimPointTest']['isActive']['TextTouchActive.AimPointFilter']['set_boolean']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_boolean');
			if (typeof X3DJSON['Obj']['TextTouchActive.AimPointFilter'].set_boolean === "function") X3DJSON['Obj']['TextTouchActive.AimPointFilter'].set_boolean(X3DJSON.nodeUtil('TextTouchActive.AimPointFilter','set_boolean'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_boolean'] };
X3DJSON['ROUTE']['TextTouch.AimPointTest']['isActive']['TextTouchActive.AimPointFilter']['set_boolean']['TO'].observe(X3DJSON.nodeUtil('TextTouchActive.AimPointFilter'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouch.AimPointTest'] === 'undefined') {
X3DJSON['ROUTE']['TextTouch.AimPointTest'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouch.AimPointTest']['touchTime'] === 'undefined') {
X3DJSON['ROUTE']['TextTouch.AimPointTest']['touchTime'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouch.AimPointTest']['touchTime']['CameraTimer.AimPointTest'] === 'undefined') {
X3DJSON['ROUTE']['TextTouch.AimPointTest']['touchTime']['CameraTimer.AimPointTest'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouch.AimPointTest']['touchTime']['CameraTimer.AimPointTest']['startTime'] === 'undefined') {
X3DJSON['ROUTE']['TextTouch.AimPointTest']['touchTime']['CameraTimer.AimPointTest']['startTime'] = {};
}

X3DJSON['ROUTE']['TextTouch.AimPointTest']['touchTime']['CameraTimer.AimPointTest']['startTime']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'touchTime');
			X3DJSON.nodeUtil('CameraTimer.AimPointTest','startTime',X3DJSON.nodeUtil('TextTouch.AimPointTest','touchTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['touchTime'] };
X3DJSON['ROUTE']['TextTouch.AimPointTest']['touchTime']['CameraTimer.AimPointTest']['startTime']['FROM'].observe(X3DJSON.nodeUtil('TextTouch.AimPointTest'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouch.AimPointTest'] === 'undefined') {
X3DJSON['ROUTE']['TextTouch.AimPointTest'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouch.AimPointTest']['touchTime'] === 'undefined') {
X3DJSON['ROUTE']['TextTouch.AimPointTest']['touchTime'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouch.AimPointTest']['touchTime']['CameraTimer.AimPointTest'] === 'undefined') {
X3DJSON['ROUTE']['TextTouch.AimPointTest']['touchTime']['CameraTimer.AimPointTest'] = {};
}
if (typeof X3DJSON['ROUTE']['TextTouch.AimPointTest']['touchTime']['CameraTimer.AimPointTest']['startTime'] === 'undefined') {
X3DJSON['ROUTE']['TextTouch.AimPointTest']['touchTime']['CameraTimer.AimPointTest']['startTime'] = {};
}

X3DJSON['ROUTE']['TextTouch.AimPointTest']['touchTime']['CameraTimer.AimPointTest']['startTime']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'startTime');
			if (typeof X3DJSON['Obj']['CameraTimer.AimPointTest'].startTime === "function") X3DJSON['Obj']['CameraTimer.AimPointTest'].startTime(X3DJSON.nodeUtil('CameraTimer.AimPointTest','startTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['startTime'] };
X3DJSON['ROUTE']['TextTouch.AimPointTest']['touchTime']['CameraTimer.AimPointTest']['startTime']['TO'].observe(X3DJSON.nodeUtil('CameraTimer.AimPointTest'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['position_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['position_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['position_changed']['CameraShapeTransform'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['position_changed']['CameraShapeTransform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['position_changed']['CameraShapeTransform']['translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['position_changed']['CameraShapeTransform']['translation'] = {};
}

X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['position_changed']['CameraShapeTransform']['translation']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'position_changed');
			X3DJSON.nodeUtil('CameraShapeTransform','translation',X3DJSON.nodeUtil('DECLCamera_Camera.SimpleShotsTest','position_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['position_changed'] };
X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['position_changed']['CameraShapeTransform']['translation']['FROM'].observe(X3DJSON.nodeUtil('DECLCamera_Camera.SimpleShotsTest'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['position_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['position_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['position_changed']['CameraShapeTransform'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['position_changed']['CameraShapeTransform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['position_changed']['CameraShapeTransform']['translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['position_changed']['CameraShapeTransform']['translation'] = {};
}

X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['position_changed']['CameraShapeTransform']['translation']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'translation');
			if (typeof X3DJSON['Obj']['CameraShapeTransform'].translation === "function") X3DJSON['Obj']['CameraShapeTransform'].translation(X3DJSON.nodeUtil('CameraShapeTransform','translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['translation'] };
X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['position_changed']['CameraShapeTransform']['translation']['TO'].observe(X3DJSON.nodeUtil('CameraShapeTransform'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['orientation_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['orientation_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['orientation_changed']['CameraShapeTransform'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['orientation_changed']['CameraShapeTransform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['orientation_changed']['CameraShapeTransform']['rotation'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['orientation_changed']['CameraShapeTransform']['rotation'] = {};
}

X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['orientation_changed']['CameraShapeTransform']['rotation']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'orientation_changed');
			X3DJSON.nodeUtil('CameraShapeTransform','rotation',X3DJSON.nodeUtil('DECLCamera_Camera.SimpleShotsTest','orientation_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['orientation_changed'] };
X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['orientation_changed']['CameraShapeTransform']['rotation']['FROM'].observe(X3DJSON.nodeUtil('DECLCamera_Camera.SimpleShotsTest'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['orientation_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['orientation_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['orientation_changed']['CameraShapeTransform'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['orientation_changed']['CameraShapeTransform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['orientation_changed']['CameraShapeTransform']['rotation'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['orientation_changed']['CameraShapeTransform']['rotation'] = {};
}

X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['orientation_changed']['CameraShapeTransform']['rotation']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'rotation');
			if (typeof X3DJSON['Obj']['CameraShapeTransform'].rotation === "function") X3DJSON['Obj']['CameraShapeTransform'].rotation(X3DJSON.nodeUtil('CameraShapeTransform','rotation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['rotation'] };
X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['orientation_changed']['CameraShapeTransform']['rotation']['TO'].observe(X3DJSON.nodeUtil('CameraShapeTransform'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['position'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['position'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['position']['CameraShapeTransform'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['position']['CameraShapeTransform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['position']['CameraShapeTransform']['translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['position']['CameraShapeTransform']['translation'] = {};
}

X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['position']['CameraShapeTransform']['translation']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'position');
			X3DJSON.nodeUtil('CameraShapeTransform','translation',X3DJSON.nodeUtil('DECLCamera_Camera.AimPointTest','position'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['position'] };
X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['position']['CameraShapeTransform']['translation']['FROM'].observe(X3DJSON.nodeUtil('DECLCamera_Camera.AimPointTest'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['position'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['position'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['position']['CameraShapeTransform'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['position']['CameraShapeTransform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['position']['CameraShapeTransform']['translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['position']['CameraShapeTransform']['translation'] = {};
}

X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['position']['CameraShapeTransform']['translation']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'translation');
			if (typeof X3DJSON['Obj']['CameraShapeTransform'].translation === "function") X3DJSON['Obj']['CameraShapeTransform'].translation(X3DJSON.nodeUtil('CameraShapeTransform','translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['translation'] };
X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['position']['CameraShapeTransform']['translation']['TO'].observe(X3DJSON.nodeUtil('CameraShapeTransform'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['orientation_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['orientation_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['orientation_changed']['CameraShapeTransform'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['orientation_changed']['CameraShapeTransform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['orientation_changed']['CameraShapeTransform']['rotation'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['orientation_changed']['CameraShapeTransform']['rotation'] = {};
}

X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['orientation_changed']['CameraShapeTransform']['rotation']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'orientation_changed');
			X3DJSON.nodeUtil('CameraShapeTransform','rotation',X3DJSON.nodeUtil('DECLCamera_Camera.AimPointTest','orientation_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['orientation_changed'] };
X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['orientation_changed']['CameraShapeTransform']['rotation']['FROM'].observe(X3DJSON.nodeUtil('DECLCamera_Camera.AimPointTest'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['orientation_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['orientation_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['orientation_changed']['CameraShapeTransform'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['orientation_changed']['CameraShapeTransform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['orientation_changed']['CameraShapeTransform']['rotation'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['orientation_changed']['CameraShapeTransform']['rotation'] = {};
}

X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['orientation_changed']['CameraShapeTransform']['rotation']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'rotation');
			if (typeof X3DJSON['Obj']['CameraShapeTransform'].rotation === "function") X3DJSON['Obj']['CameraShapeTransform'].rotation(X3DJSON.nodeUtil('CameraShapeTransform','rotation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['rotation'] };
X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['orientation_changed']['CameraShapeTransform']['rotation']['TO'].observe(X3DJSON.nodeUtil('CameraShapeTransform'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['CameraShapeTouched'] === 'undefined') {
X3DJSON['ROUTE']['CameraShapeTouched'] = {};
}
if (typeof X3DJSON['ROUTE']['CameraShapeTouched']['isActive'] === 'undefined') {
X3DJSON['ROUTE']['CameraShapeTouched']['isActive'] = {};
}
if (typeof X3DJSON['ROUTE']['CameraShapeTouched']['isActive']['ViewFrustumToggle'] === 'undefined') {
X3DJSON['ROUTE']['CameraShapeTouched']['isActive']['ViewFrustumToggle'] = {};
}
if (typeof X3DJSON['ROUTE']['CameraShapeTouched']['isActive']['ViewFrustumToggle']['set_boolean'] === 'undefined') {
X3DJSON['ROUTE']['CameraShapeTouched']['isActive']['ViewFrustumToggle']['set_boolean'] = {};
}

X3DJSON['ROUTE']['CameraShapeTouched']['isActive']['ViewFrustumToggle']['set_boolean']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'isActive');
			X3DJSON.nodeUtil('ViewFrustumToggle','set_boolean',X3DJSON.nodeUtil('CameraShapeTouched','isActive'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['isActive'] };
X3DJSON['ROUTE']['CameraShapeTouched']['isActive']['ViewFrustumToggle']['set_boolean']['FROM'].observe(X3DJSON.nodeUtil('CameraShapeTouched'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['CameraShapeTouched'] === 'undefined') {
X3DJSON['ROUTE']['CameraShapeTouched'] = {};
}
if (typeof X3DJSON['ROUTE']['CameraShapeTouched']['isActive'] === 'undefined') {
X3DJSON['ROUTE']['CameraShapeTouched']['isActive'] = {};
}
if (typeof X3DJSON['ROUTE']['CameraShapeTouched']['isActive']['ViewFrustumToggle'] === 'undefined') {
X3DJSON['ROUTE']['CameraShapeTouched']['isActive']['ViewFrustumToggle'] = {};
}
if (typeof X3DJSON['ROUTE']['CameraShapeTouched']['isActive']['ViewFrustumToggle']['set_boolean'] === 'undefined') {
X3DJSON['ROUTE']['CameraShapeTouched']['isActive']['ViewFrustumToggle']['set_boolean'] = {};
}

X3DJSON['ROUTE']['CameraShapeTouched']['isActive']['ViewFrustumToggle']['set_boolean']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_boolean');
			if (typeof X3DJSON['Obj']['ViewFrustumToggle'].set_boolean === "function") X3DJSON['Obj']['ViewFrustumToggle'].set_boolean(X3DJSON.nodeUtil('ViewFrustumToggle','set_boolean'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_boolean'] };
X3DJSON['ROUTE']['CameraShapeTouched']['isActive']['ViewFrustumToggle']['set_boolean']['TO'].observe(X3DJSON.nodeUtil('ViewFrustumToggle'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['ViewFrustumToggle'] === 'undefined') {
X3DJSON['ROUTE']['ViewFrustumToggle'] = {};
}
if (typeof X3DJSON['ROUTE']['ViewFrustumToggle']['toggle'] === 'undefined') {
X3DJSON['ROUTE']['ViewFrustumToggle']['toggle'] = {};
}
if (typeof X3DJSON['ROUTE']['ViewFrustumToggle']['toggle']['DECLViewFrustum_ViewFrustumNode'] === 'undefined') {
X3DJSON['ROUTE']['ViewFrustumToggle']['toggle']['DECLViewFrustum_ViewFrustumNode'] = {};
}
if (typeof X3DJSON['ROUTE']['ViewFrustumToggle']['toggle']['DECLViewFrustum_ViewFrustumNode']['set_visible'] === 'undefined') {
X3DJSON['ROUTE']['ViewFrustumToggle']['toggle']['DECLViewFrustum_ViewFrustumNode']['set_visible'] = {};
}

X3DJSON['ROUTE']['ViewFrustumToggle']['toggle']['DECLViewFrustum_ViewFrustumNode']['set_visible']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'toggle');
			X3DJSON.nodeUtil('DECLViewFrustum_ViewFrustumNode','set_visible',X3DJSON.nodeUtil('ViewFrustumToggle','toggle'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['toggle'] };
X3DJSON['ROUTE']['ViewFrustumToggle']['toggle']['DECLViewFrustum_ViewFrustumNode']['set_visible']['FROM'].observe(X3DJSON.nodeUtil('ViewFrustumToggle'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['ViewFrustumToggle'] === 'undefined') {
X3DJSON['ROUTE']['ViewFrustumToggle'] = {};
}
if (typeof X3DJSON['ROUTE']['ViewFrustumToggle']['toggle'] === 'undefined') {
X3DJSON['ROUTE']['ViewFrustumToggle']['toggle'] = {};
}
if (typeof X3DJSON['ROUTE']['ViewFrustumToggle']['toggle']['DECLViewFrustum_ViewFrustumNode'] === 'undefined') {
X3DJSON['ROUTE']['ViewFrustumToggle']['toggle']['DECLViewFrustum_ViewFrustumNode'] = {};
}
if (typeof X3DJSON['ROUTE']['ViewFrustumToggle']['toggle']['DECLViewFrustum_ViewFrustumNode']['set_visible'] === 'undefined') {
X3DJSON['ROUTE']['ViewFrustumToggle']['toggle']['DECLViewFrustum_ViewFrustumNode']['set_visible'] = {};
}

X3DJSON['ROUTE']['ViewFrustumToggle']['toggle']['DECLViewFrustum_ViewFrustumNode']['set_visible']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_visible');
			if (typeof X3DJSON['Obj']['DECLViewFrustum_ViewFrustumNode'].set_visible === "function") X3DJSON['Obj']['DECLViewFrustum_ViewFrustumNode'].set_visible(X3DJSON.nodeUtil('DECLViewFrustum_ViewFrustumNode','set_visible'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_visible'] };
X3DJSON['ROUTE']['ViewFrustumToggle']['toggle']['DECLViewFrustum_ViewFrustumNode']['set_visible']['TO'].observe(X3DJSON.nodeUtil('DECLViewFrustum_ViewFrustumNode'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['BoxPath'] === 'undefined') {
X3DJSON['ROUTE']['BoxPath'] = {};
}
if (typeof X3DJSON['ROUTE']['BoxPath']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['BoxPath']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['BoxPath']['value_changed']['MovingBoxTransform'] === 'undefined') {
X3DJSON['ROUTE']['BoxPath']['value_changed']['MovingBoxTransform'] = {};
}
if (typeof X3DJSON['ROUTE']['BoxPath']['value_changed']['MovingBoxTransform']['translation'] === 'undefined') {
X3DJSON['ROUTE']['BoxPath']['value_changed']['MovingBoxTransform']['translation'] = {};
}

X3DJSON['ROUTE']['BoxPath']['value_changed']['MovingBoxTransform']['translation']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'value_changed');
			X3DJSON.nodeUtil('MovingBoxTransform','translation',X3DJSON.nodeUtil('BoxPath','value_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['value_changed'] };
X3DJSON['ROUTE']['BoxPath']['value_changed']['MovingBoxTransform']['translation']['FROM'].observe(X3DJSON.nodeUtil('BoxPath'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['BoxPath'] === 'undefined') {
X3DJSON['ROUTE']['BoxPath'] = {};
}
if (typeof X3DJSON['ROUTE']['BoxPath']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['BoxPath']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['BoxPath']['value_changed']['MovingBoxTransform'] === 'undefined') {
X3DJSON['ROUTE']['BoxPath']['value_changed']['MovingBoxTransform'] = {};
}
if (typeof X3DJSON['ROUTE']['BoxPath']['value_changed']['MovingBoxTransform']['translation'] === 'undefined') {
X3DJSON['ROUTE']['BoxPath']['value_changed']['MovingBoxTransform']['translation'] = {};
}

X3DJSON['ROUTE']['BoxPath']['value_changed']['MovingBoxTransform']['translation']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'translation');
			if (typeof X3DJSON['Obj']['MovingBoxTransform'].translation === "function") X3DJSON['Obj']['MovingBoxTransform'].translation(X3DJSON.nodeUtil('MovingBoxTransform','translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['translation'] };
X3DJSON['ROUTE']['BoxPath']['value_changed']['MovingBoxTransform']['translation']['TO'].observe(X3DJSON.nodeUtil('MovingBoxTransform'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['BoxPath'] === 'undefined') {
X3DJSON['ROUTE']['BoxPath'] = {};
}
if (typeof X3DJSON['ROUTE']['BoxPath']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['BoxPath']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['BoxPath']['value_changed']['DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.1'] === 'undefined') {
X3DJSON['ROUTE']['BoxPath']['value_changed']['DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.1'] = {};
}
if (typeof X3DJSON['ROUTE']['BoxPath']['value_changed']['DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.1']['goalAimPoint'] === 'undefined') {
X3DJSON['ROUTE']['BoxPath']['value_changed']['DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.1']['goalAimPoint'] = {};
}

X3DJSON['ROUTE']['BoxPath']['value_changed']['DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.1']['goalAimPoint']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'value_changed');
			X3DJSON.nodeUtil('DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.1','goalAimPoint',X3DJSON.nodeUtil('BoxPath','value_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['value_changed'] };
X3DJSON['ROUTE']['BoxPath']['value_changed']['DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.1']['goalAimPoint']['FROM'].observe(X3DJSON.nodeUtil('BoxPath'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['BoxPath'] === 'undefined') {
X3DJSON['ROUTE']['BoxPath'] = {};
}
if (typeof X3DJSON['ROUTE']['BoxPath']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['BoxPath']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['BoxPath']['value_changed']['DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.1'] === 'undefined') {
X3DJSON['ROUTE']['BoxPath']['value_changed']['DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.1'] = {};
}
if (typeof X3DJSON['ROUTE']['BoxPath']['value_changed']['DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.1']['goalAimPoint'] === 'undefined') {
X3DJSON['ROUTE']['BoxPath']['value_changed']['DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.1']['goalAimPoint'] = {};
}

X3DJSON['ROUTE']['BoxPath']['value_changed']['DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.1']['goalAimPoint']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'goalAimPoint');
			if (typeof X3DJSON['Obj']['DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.1'].goalAimPoint === "function") X3DJSON['Obj']['DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.1'].goalAimPoint(X3DJSON.nodeUtil('DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.1','goalAimPoint'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['goalAimPoint'] };
X3DJSON['ROUTE']['BoxPath']['value_changed']['DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.1']['goalAimPoint']['TO'].observe(X3DJSON.nodeUtil('DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['BoxPath'] === 'undefined') {
X3DJSON['ROUTE']['BoxPath'] = {};
}
if (typeof X3DJSON['ROUTE']['BoxPath']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['BoxPath']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['BoxPath']['value_changed']['DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.2'] === 'undefined') {
X3DJSON['ROUTE']['BoxPath']['value_changed']['DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.2'] = {};
}
if (typeof X3DJSON['ROUTE']['BoxPath']['value_changed']['DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.2']['goalAimPoint'] === 'undefined') {
X3DJSON['ROUTE']['BoxPath']['value_changed']['DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.2']['goalAimPoint'] = {};
}

X3DJSON['ROUTE']['BoxPath']['value_changed']['DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.2']['goalAimPoint']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'value_changed');
			X3DJSON.nodeUtil('DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.2','goalAimPoint',X3DJSON.nodeUtil('BoxPath','value_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['value_changed'] };
X3DJSON['ROUTE']['BoxPath']['value_changed']['DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.2']['goalAimPoint']['FROM'].observe(X3DJSON.nodeUtil('BoxPath'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['BoxPath'] === 'undefined') {
X3DJSON['ROUTE']['BoxPath'] = {};
}
if (typeof X3DJSON['ROUTE']['BoxPath']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['BoxPath']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['BoxPath']['value_changed']['DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.2'] === 'undefined') {
X3DJSON['ROUTE']['BoxPath']['value_changed']['DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.2'] = {};
}
if (typeof X3DJSON['ROUTE']['BoxPath']['value_changed']['DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.2']['goalAimPoint'] === 'undefined') {
X3DJSON['ROUTE']['BoxPath']['value_changed']['DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.2']['goalAimPoint'] = {};
}

X3DJSON['ROUTE']['BoxPath']['value_changed']['DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.2']['goalAimPoint']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'goalAimPoint');
			if (typeof X3DJSON['Obj']['DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.2'].goalAimPoint === "function") X3DJSON['Obj']['DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.2'].goalAimPoint(X3DJSON.nodeUtil('DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.2','goalAimPoint'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['goalAimPoint'] };
X3DJSON['ROUTE']['BoxPath']['value_changed']['DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.2']['goalAimPoint']['TO'].observe(X3DJSON.nodeUtil('DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.2'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['BoxPath'] === 'undefined') {
X3DJSON['ROUTE']['BoxPath'] = {};
}
if (typeof X3DJSON['ROUTE']['BoxPath']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['BoxPath']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['BoxPath']['value_changed']['DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.3'] === 'undefined') {
X3DJSON['ROUTE']['BoxPath']['value_changed']['DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.3'] = {};
}
if (typeof X3DJSON['ROUTE']['BoxPath']['value_changed']['DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.3']['goalAimPoint'] === 'undefined') {
X3DJSON['ROUTE']['BoxPath']['value_changed']['DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.3']['goalAimPoint'] = {};
}

X3DJSON['ROUTE']['BoxPath']['value_changed']['DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.3']['goalAimPoint']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'value_changed');
			X3DJSON.nodeUtil('DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.3','goalAimPoint',X3DJSON.nodeUtil('BoxPath','value_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['value_changed'] };
X3DJSON['ROUTE']['BoxPath']['value_changed']['DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.3']['goalAimPoint']['FROM'].observe(X3DJSON.nodeUtil('BoxPath'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['BoxPath'] === 'undefined') {
X3DJSON['ROUTE']['BoxPath'] = {};
}
if (typeof X3DJSON['ROUTE']['BoxPath']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['BoxPath']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['BoxPath']['value_changed']['DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.3'] === 'undefined') {
X3DJSON['ROUTE']['BoxPath']['value_changed']['DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.3'] = {};
}
if (typeof X3DJSON['ROUTE']['BoxPath']['value_changed']['DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.3']['goalAimPoint'] === 'undefined') {
X3DJSON['ROUTE']['BoxPath']['value_changed']['DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.3']['goalAimPoint'] = {};
}

X3DJSON['ROUTE']['BoxPath']['value_changed']['DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.3']['goalAimPoint']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'goalAimPoint');
			if (typeof X3DJSON['Obj']['DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.3'].goalAimPoint === "function") X3DJSON['Obj']['DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.3'].goalAimPoint(X3DJSON.nodeUtil('DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.3','goalAimPoint'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['goalAimPoint'] };
X3DJSON['ROUTE']['BoxPath']['value_changed']['DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.3']['goalAimPoint']['TO'].observe(X3DJSON.nodeUtil('DECLCamera_Camera.AimPointTest_FIELDshots_DECLCameraShot_Shot5_FIELDmoves_DECLCameraMovement_MoveAimPoint3.3'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['BoxTimer'] === 'undefined') {
X3DJSON['ROUTE']['BoxTimer'] = {};
}
if (typeof X3DJSON['ROUTE']['BoxTimer']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['BoxTimer']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['BoxTimer']['fraction_changed']['BoxPath'] === 'undefined') {
X3DJSON['ROUTE']['BoxTimer']['fraction_changed']['BoxPath'] = {};
}
if (typeof X3DJSON['ROUTE']['BoxTimer']['fraction_changed']['BoxPath']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['BoxTimer']['fraction_changed']['BoxPath']['set_fraction'] = {};
}

X3DJSON['ROUTE']['BoxTimer']['fraction_changed']['BoxPath']['set_fraction']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'fraction_changed');
			X3DJSON.nodeUtil('BoxPath','set_fraction',X3DJSON.nodeUtil('BoxTimer','fraction_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['fraction_changed'] };
X3DJSON['ROUTE']['BoxTimer']['fraction_changed']['BoxPath']['set_fraction']['FROM'].observe(X3DJSON.nodeUtil('BoxTimer'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['BoxTimer'] === 'undefined') {
X3DJSON['ROUTE']['BoxTimer'] = {};
}
if (typeof X3DJSON['ROUTE']['BoxTimer']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['BoxTimer']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['BoxTimer']['fraction_changed']['BoxPath'] === 'undefined') {
X3DJSON['ROUTE']['BoxTimer']['fraction_changed']['BoxPath'] = {};
}
if (typeof X3DJSON['ROUTE']['BoxTimer']['fraction_changed']['BoxPath']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['BoxTimer']['fraction_changed']['BoxPath']['set_fraction'] = {};
}

X3DJSON['ROUTE']['BoxTimer']['fraction_changed']['BoxPath']['set_fraction']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_fraction');
			if (typeof X3DJSON['Obj']['BoxPath'].set_fraction === "function") X3DJSON['Obj']['BoxPath'].set_fraction(X3DJSON.nodeUtil('BoxPath','set_fraction'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_fraction'] };
X3DJSON['ROUTE']['BoxTimer']['fraction_changed']['BoxPath']['set_fraction']['TO'].observe(X3DJSON.nodeUtil('BoxPath'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['isBound'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['isBound'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['isBound']['DECLCrossHair_CrossHairInstance'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['isBound']['DECLCrossHair_CrossHairInstance'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['isBound']['DECLCrossHair_CrossHairInstance']['set_enabled'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['isBound']['DECLCrossHair_CrossHairInstance']['set_enabled'] = {};
}

X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['isBound']['DECLCrossHair_CrossHairInstance']['set_enabled']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'isBound');
			X3DJSON.nodeUtil('DECLCrossHair_CrossHairInstance','set_enabled',X3DJSON.nodeUtil('DECLCamera_Camera.SimpleShotsTest','isBound'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['isBound'] };
X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['isBound']['DECLCrossHair_CrossHairInstance']['set_enabled']['FROM'].observe(X3DJSON.nodeUtil('DECLCamera_Camera.SimpleShotsTest'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['isBound'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['isBound'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['isBound']['DECLCrossHair_CrossHairInstance'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['isBound']['DECLCrossHair_CrossHairInstance'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['isBound']['DECLCrossHair_CrossHairInstance']['set_enabled'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['isBound']['DECLCrossHair_CrossHairInstance']['set_enabled'] = {};
}

X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['isBound']['DECLCrossHair_CrossHairInstance']['set_enabled']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_enabled');
			if (typeof X3DJSON['Obj']['DECLCrossHair_CrossHairInstance'].set_enabled === "function") X3DJSON['Obj']['DECLCrossHair_CrossHairInstance'].set_enabled(X3DJSON.nodeUtil('DECLCrossHair_CrossHairInstance','set_enabled'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_enabled'] };
X3DJSON['ROUTE']['DECLCamera_Camera.SimpleShotsTest']['isBound']['DECLCrossHair_CrossHairInstance']['set_enabled']['TO'].observe(X3DJSON.nodeUtil('DECLCrossHair_CrossHairInstance'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['isBound'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['isBound'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['isBound']['DECLCrossHair_CrossHairInstance'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['isBound']['DECLCrossHair_CrossHairInstance'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['isBound']['DECLCrossHair_CrossHairInstance']['set_enabled'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['isBound']['DECLCrossHair_CrossHairInstance']['set_enabled'] = {};
}

X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['isBound']['DECLCrossHair_CrossHairInstance']['set_enabled']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'isBound');
			X3DJSON.nodeUtil('DECLCrossHair_CrossHairInstance','set_enabled',X3DJSON.nodeUtil('DECLCamera_Camera.AimPointTest','isBound'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['isBound'] };
X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['isBound']['DECLCrossHair_CrossHairInstance']['set_enabled']['FROM'].observe(X3DJSON.nodeUtil('DECLCamera_Camera.AimPointTest'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['isBound'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['isBound'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['isBound']['DECLCrossHair_CrossHairInstance'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['isBound']['DECLCrossHair_CrossHairInstance'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['isBound']['DECLCrossHair_CrossHairInstance']['set_enabled'] === 'undefined') {
X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['isBound']['DECLCrossHair_CrossHairInstance']['set_enabled'] = {};
}

X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['isBound']['DECLCrossHair_CrossHairInstance']['set_enabled']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_enabled');
			if (typeof X3DJSON['Obj']['DECLCrossHair_CrossHairInstance'].set_enabled === "function") X3DJSON['Obj']['DECLCrossHair_CrossHairInstance'].set_enabled(X3DJSON.nodeUtil('DECLCrossHair_CrossHairInstance','set_enabled'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_enabled'] };
X3DJSON['ROUTE']['DECLCamera_Camera.AimPointTest']['isBound']['DECLCrossHair_CrossHairInstance']['set_enabled']['TO'].observe(X3DJSON.nodeUtil('DECLCrossHair_CrossHairInstance'), config);
			X3DJSON.nodeUtil('DECLCamera_Camera.SimpleShotsTest','set_fraction',X3DJSON.nodeUtil('CameraTimer.SimpleShots','fraction_changed'), __eventTime);
			X3DJSON.nodeUtil('DECLCamera_Camera.AimPointTest','set_fraction',X3DJSON.nodeUtil('CameraTimer.AimPointTest','fraction_changed'), __eventTime);
			X3DJSON.nodeUtil('BoxPath','set_fraction',X3DJSON.nodeUtil('BoxTimer','fraction_changed'), __eventTime);