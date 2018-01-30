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

X3DJSON['Script']['FlowerScript'] = function() {
	this.set_fraction = function (value) {
		this.proxy.fraction = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.fraction_changed = function () {
		var value = this.fraction;
		return value;
	};
	this.fraction = undefined;
	this.set_coordinates = function (value) {
		this.proxy.coordinates = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.coordinates_changed = function () {
		var value = this.coordinates;
		return value;
	};
	this.coordinates = new MFVec3f();
	this.set_coordIndexes = function (value) {
		this.proxy.coordIndexes = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.coordIndexes_changed = function () {
		var value = this.coordIndexes;
		return value;
	};
	this.coordIndexes = new MFInt32();
ecmascript: var e = 5; var f = 5; var g = 5; var h = 5; var resolution = 150; var t = 0; var p = 0; 
	this.initialize = function () { var localci = new Array(); var ci = 0; var buf = []; for (var i = 0; i < resolution-1; i++) { for (var j = 0; j < resolution-1; j++) { localci[ci] = i*resolution+j; localci[ci+1] = i*resolution+j+1; localci[ci+2] = (i+1)*resolution+j+1; localci[ci+3] = (i+1)*resolution+j; localci[ci+4] = -1; buf.push(localci[ci]); buf.push(localci[ci+1]); buf.push(localci[ci+3]); buf.push(localci[ci+4]); buf.push(localci[ci+1]); buf.push(localci[ci+2]); buf.push(localci[ci+3]); buf.push(localci[ci+4]); ci += 5; } } this.updateCoordinates(resolution); this.proxy.coordIndexes = new x3dom.fields.MFInt32(buf); } ;

	this.updateCoordinates = function (resolution) { theta = 0.0; phi = 0.0; delta = (2 * 3.141592653) / (resolution-1); var buf = []; for ( i = 0; i < resolution; i++) { for ( j = 0; j < resolution; j++) { rho = e + f * Math.cos(g * theta + t) * Math.cos(h * phi + p); var coord = new x3dom.fields.SFVec3f( rho * Math.cos(phi) * Math.cos(theta), rho * Math.cos(phi) * Math.sin(theta), rho * Math.sin(phi) ); buf.push(coord); theta += delta; } phi += delta; } this.proxy.coordinates = new x3dom.fields.MFVec3f(buf); } ;

	this.set_fraction = function () { choice = Math.floor(Math.random() * 4); switch (choice) { case 0: e += Math.floor(Math.random() * 2) * 2 - 1; break; case 1: f += Math.floor(Math.random() * 2) * 2 - 1; break; case 2: g += Math.floor(Math.random() * 2) * 2 - 1; break; case 3: h += Math.floor(Math.random() * 2) * 2 - 1; break; } t += 0.5; p += 0.5; if (f < 1) { f = 10; } if (g < 1) { g = 4; } if (h < 1) { h = 4; } this.updateCoordinates(resolution); };

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['FlowerScript'] = new X3DJSON['Script']['FlowerScript']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['FlowerScript'] === 'undefined') {
X3DJSON['Obj']['FlowerScript'] = {};
}

if (typeof X3DJSON['Obj']['FlowerScript']['ACTION'] === 'undefined') {
X3DJSON['Obj']['FlowerScript']['ACTION'] = {};
X3DJSON['Obj']['FlowerScript'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['FlowerScript']['ACTION'],X3DJSON['Obj']['FlowerScript']);
}
if (typeof X3DJSON['Obj']['FlowerScript'].initialize === "function") X3DJSON['Obj']['FlowerScript'].initialize();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['FlowerScript'] === 'undefined') {
X3DJSON['Obj']['FlowerScript'] = {};
}

if (typeof X3DJSON['Obj']['FlowerScript']['ACTION']['coordIndexes'] === 'undefined') {
X3DJSON['Obj']['FlowerScript']['ACTION']['coordIndexes'] = [];
}
X3DJSON['Obj']['FlowerScript']['ACTION']['coordIndexes'].push(function(property, value) {
		if (property === 'coordIndexes') {
			X3DJSON.nodeUtil('ifs','coordIndex',typeof X3DJSON['Obj']['FlowerScript'].coordIndexes === "function" ? X3DJSON['Obj']['FlowerScript'].coordIndexes() : X3DJSON['Obj']['FlowerScript'].coordIndexes, __eventTime);
		}
});
			X3DJSON.nodeUtil('ifs','coordIndex',typeof X3DJSON['Obj']['FlowerScript'].coordIndexes === "function" ? X3DJSON['Obj']['FlowerScript'].coordIndexes() : X3DJSON['Obj']['FlowerScript'].coordIndexes, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['FlowerScript'] === 'undefined') {
X3DJSON['Obj']['FlowerScript'] = {};
}

if (typeof X3DJSON['Obj']['FlowerScript']['ACTION']['coordinates'] === 'undefined') {
X3DJSON['Obj']['FlowerScript']['ACTION']['coordinates'] = [];
}
X3DJSON['Obj']['FlowerScript']['ACTION']['coordinates'].push(function(property, value) {
		if (property === 'coordinates') {
			X3DJSON.nodeUtil('crd','point',typeof X3DJSON['Obj']['FlowerScript'].coordinates === "function" ? X3DJSON['Obj']['FlowerScript'].coordinates() : X3DJSON['Obj']['FlowerScript'].coordinates, __eventTime);
		}
});
			X3DJSON.nodeUtil('crd','point',typeof X3DJSON['Obj']['FlowerScript'].coordinates === "function" ? X3DJSON['Obj']['FlowerScript'].coordinates() : X3DJSON['Obj']['FlowerScript'].coordinates, __eventTime);
X3DJSON.nodeUtil('Clock').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['FlowerScript'].set_fraction(X3DJSON.nodeUtil('Clock','fraction'), __eventTime);
}, false);
			X3DJSON['Obj']['FlowerScript'].set_fraction(X3DJSON.nodeUtil('Clock','fraction'), __eventTime);
			X3DJSON.nodeUtil('ifs','coordIndex',typeof X3DJSON['Obj']['FlowerScript'].coordIndexes === "function" ? X3DJSON['Obj']['FlowerScript'].coordIndexes() : X3DJSON['Obj']['FlowerScript'].coordIndexes, __eventTime);
			X3DJSON.nodeUtil('crd','point',typeof X3DJSON['Obj']['FlowerScript'].coordinates === "function" ? X3DJSON['Obj']['FlowerScript'].coordinates() : X3DJSON['Obj']['FlowerScript'].coordinates, __eventTime);
			X3DJSON['Obj']['FlowerScript'].set_fraction(X3DJSON.nodeUtil('Clock','fraction'), __eventTime);