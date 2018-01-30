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

X3DJSON['Script']['DECLpoint_G1_MB1'] = function() {
	this.set_translation = function (value) {
		this.proxy.translation = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.translation_changed = function () {
		var value = this.translation;
		return value;
	};
	this.translation = new SFVec3f(0,0,0);
	this.set_old = function (value) {
		this.proxy.old = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.old_changed = function () {
		var value = this.old;
		return value;
	};
	this.old = new SFVec3f(0,0,0);
	this.set_location = function (value) {
		this.proxy.location = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.location_changed = function () {
		var value = this.location;
		return value;
	};
	this.location = undefined;
	this.set_keyValue = function (value) {
		this.proxy.keyValue = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.keyValue_changed = function () {
		var value = this.keyValue;
		return value;
	};
	this.keyValue = new MFVec3f([new SFVec3f ( 0 , 0 , 0 ),new SFVec3f ( 0 , 5 , 0 )]);
ecmascript: 
	this.set_location = function (value) { this.proxy.old = this.proxy.translation; this.proxy.translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5); this.proxy.keyValue = new MFVec3f([this.proxy.old, this.proxy.translation]); // console.error(this.proxy.keyValue); };

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLpoint_G1_MB1'] = new X3DJSON['Script']['DECLpoint_G1_MB1']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['DECLpoint_G1_MB1'] === 'undefined') {
X3DJSON['Obj']['DECLpoint_G1_MB1'] = {};
}

if (typeof X3DJSON['Obj']['DECLpoint_G1_MB1']['ACTION'] === 'undefined') {
X3DJSON['Obj']['DECLpoint_G1_MB1']['ACTION'] = {};
X3DJSON['Obj']['DECLpoint_G1_MB1'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['DECLpoint_G1_MB1']['ACTION'],X3DJSON['Obj']['DECLpoint_G1_MB1']);
}
if (typeof X3DJSON['Obj']['DECLpoint_G1_MB1'].initialize === "function") X3DJSON['Obj']['DECLpoint_G1_MB1'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLpoint_G2_MB1'] = function() {
	this.set_translation = function (value) {
		this.proxy.translation = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.translation_changed = function () {
		var value = this.translation;
		return value;
	};
	this.translation = new SFVec3f(0,0,0);
	this.set_old = function (value) {
		this.proxy.old = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.old_changed = function () {
		var value = this.old;
		return value;
	};
	this.old = new SFVec3f(0,0,0);
	this.set_location = function (value) {
		this.proxy.location = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.location_changed = function () {
		var value = this.location;
		return value;
	};
	this.location = undefined;
	this.set_keyValue = function (value) {
		this.proxy.keyValue = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.keyValue_changed = function () {
		var value = this.keyValue;
		return value;
	};
	this.keyValue = new MFVec3f([new SFVec3f ( 0 , 0 , 0 ),new SFVec3f ( 0 , 5 , 0 )]);
ecmascript: 
	this.set_location = function (value) { this.proxy.old = this.proxy.translation; this.proxy.translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5); this.proxy.keyValue = new MFVec3f([this.proxy.old, this.proxy.translation]); // console.error(this.proxy.keyValue); };

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLpoint_G2_MB1'] = new X3DJSON['Script']['DECLpoint_G2_MB1']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['DECLpoint_G2_MB1'] === 'undefined') {
X3DJSON['Obj']['DECLpoint_G2_MB1'] = {};
}

if (typeof X3DJSON['Obj']['DECLpoint_G2_MB1']['ACTION'] === 'undefined') {
X3DJSON['Obj']['DECLpoint_G2_MB1']['ACTION'] = {};
X3DJSON['Obj']['DECLpoint_G2_MB1'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['DECLpoint_G2_MB1']['ACTION'],X3DJSON['Obj']['DECLpoint_G2_MB1']);
}
if (typeof X3DJSON['Obj']['DECLpoint_G2_MB1'].initialize === "function") X3DJSON['Obj']['DECLpoint_G2_MB1'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLpoint_G3_MB1'] = function() {
	this.set_translation = function (value) {
		this.proxy.translation = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.translation_changed = function () {
		var value = this.translation;
		return value;
	};
	this.translation = new SFVec3f(0,0,0);
	this.set_old = function (value) {
		this.proxy.old = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.old_changed = function () {
		var value = this.old;
		return value;
	};
	this.old = new SFVec3f(0,0,0);
	this.set_location = function (value) {
		this.proxy.location = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.location_changed = function () {
		var value = this.location;
		return value;
	};
	this.location = undefined;
	this.set_keyValue = function (value) {
		this.proxy.keyValue = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.keyValue_changed = function () {
		var value = this.keyValue;
		return value;
	};
	this.keyValue = new MFVec3f([new SFVec3f ( 0 , 0 , 0 ),new SFVec3f ( 0 , 5 , 0 )]);
ecmascript: 
	this.set_location = function (value) { this.proxy.old = this.proxy.translation; this.proxy.translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5); this.proxy.keyValue = new MFVec3f([this.proxy.old, this.proxy.translation]); // console.error(this.proxy.keyValue); };

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLpoint_G3_MB1'] = new X3DJSON['Script']['DECLpoint_G3_MB1']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['DECLpoint_G3_MB1'] === 'undefined') {
X3DJSON['Obj']['DECLpoint_G3_MB1'] = {};
}

if (typeof X3DJSON['Obj']['DECLpoint_G3_MB1']['ACTION'] === 'undefined') {
X3DJSON['Obj']['DECLpoint_G3_MB1']['ACTION'] = {};
X3DJSON['Obj']['DECLpoint_G3_MB1'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['DECLpoint_G3_MB1']['ACTION'],X3DJSON['Obj']['DECLpoint_G3_MB1']);
}
if (typeof X3DJSON['Obj']['DECLpoint_G3_MB1'].initialize === "function") X3DJSON['Obj']['DECLpoint_G3_MB1'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLpoint_G4_MB1'] = function() {
	this.set_translation = function (value) {
		this.proxy.translation = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.translation_changed = function () {
		var value = this.translation;
		return value;
	};
	this.translation = new SFVec3f(0,0,0);
	this.set_old = function (value) {
		this.proxy.old = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.old_changed = function () {
		var value = this.old;
		return value;
	};
	this.old = new SFVec3f(0,0,0);
	this.set_location = function (value) {
		this.proxy.location = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.location_changed = function () {
		var value = this.location;
		return value;
	};
	this.location = undefined;
	this.set_keyValue = function (value) {
		this.proxy.keyValue = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.keyValue_changed = function () {
		var value = this.keyValue;
		return value;
	};
	this.keyValue = new MFVec3f([new SFVec3f ( 0 , 0 , 0 ),new SFVec3f ( 0 , 5 , 0 )]);
ecmascript: 
	this.set_location = function (value) { this.proxy.old = this.proxy.translation; this.proxy.translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5); this.proxy.keyValue = new MFVec3f([this.proxy.old, this.proxy.translation]); // console.error(this.proxy.keyValue); };

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLpoint_G4_MB1'] = new X3DJSON['Script']['DECLpoint_G4_MB1']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['DECLpoint_G4_MB1'] === 'undefined') {
X3DJSON['Obj']['DECLpoint_G4_MB1'] = {};
}

if (typeof X3DJSON['Obj']['DECLpoint_G4_MB1']['ACTION'] === 'undefined') {
X3DJSON['Obj']['DECLpoint_G4_MB1']['ACTION'] = {};
X3DJSON['Obj']['DECLpoint_G4_MB1'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['DECLpoint_G4_MB1']['ACTION'],X3DJSON['Obj']['DECLpoint_G4_MB1']);
}
if (typeof X3DJSON['Obj']['DECLpoint_G4_MB1'].initialize === "function") X3DJSON['Obj']['DECLpoint_G4_MB1'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLx3dconnector_connector1_S1'] = function() {
	this.set_startnode = function (value) {
		this.proxy.startnode = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.startnode_changed = function () {
		var value = this.startnode;
		return value;
	};
	this.startnode = X3DJSON.nodeUtil('DECLpoint_G1_node');
	this.set_endnode = function (value) {
		this.proxy.endnode = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.endnode_changed = function () {
		var value = this.endnode;
		return value;
	};
	this.endnode = X3DJSON.nodeUtil('DECLpoint_G2_node');
	this.set_position = function (value) {
		this.proxy.position = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.position_changed = function () {
		var value = this.position;
		return value;
	};
	this.position = X3DJSON.nodeUtil('DECLx3dconnector_connector1_trans');
	this.set_rotscale = function (value) {
		this.proxy.rotscale = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.rotscale_changed = function () {
		var value = this.rotscale;
		return value;
	};
	this.rotscale = X3DJSON.nodeUtil('DECLx3dconnector_connector1_rotscale');
	this.set_startpoint = function (value) {
		this.proxy.startpoint = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.startpoint_changed = function () {
		var value = this.startpoint;
		return value;
	};
	this.startpoint = undefined;
	this.set_endpoint = function (value) {
		this.proxy.endpoint = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.endpoint_changed = function () {
		var value = this.endpoint;
		return value;
	};
	this.endpoint = undefined;
ecmascript: 
	this.recompute = function (startpoint,endpoint){ if (typeof endpoint === 'undefined') { return; } var dif = endpoint.subtract(startpoint); var dist = dif.length()*0.5; var dif2 = dif.multiply(0.5); var norm = dif.normalize(); var transl = startpoint.add(dif2); if (typeof Quaternion !== 'undefined') { return { scale : new SFVec3f(1.0,dist,1.0), translation : transl, rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm) }; } else if (typeof SFRotation !== 'undefined') { return { scale : new SFVec3f(1.0,dist,1.0), translation : transl, rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm) }; } else { return { scale : new SFVec3f(1.0,dist,1.0), translation : transl }; } } ;

	this.recompute_and_route = function (startpoint, endpoint) { var trafo = this.recompute(startpoint, endpoint); X3DJSON.nodeUtil('DECLx3dconnector_connector1_trans', 'translation',  trafo.translation); X3DJSON.nodeUtil('DECLx3dconnector_connector1_rotscale', 'rotation',  trafo.rotation); X3DJSON.nodeUtil('DECLx3dconnector_connector1_rotscale', 'scale',  trafo.scale); } ;

	this.initialize = function (){ this.recompute_and_route(X3DJSON.nodeUtil('DECLpoint_G1_node', 'translation'),X3DJSON.nodeUtil('DECLpoint_G2_node', 'translation')); } ;

	this.set_startpoint = function (val,t){ this.recompute_and_route(val,X3DJSON.nodeUtil('DECLpoint_G2_node', 'translation')); } ;

	this.set_endpoint = function (val,t){ this.recompute_and_route(X3DJSON.nodeUtil('DECLpoint_G1_node', 'translation'),val); };

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLx3dconnector_connector1_S1'] = new X3DJSON['Script']['DECLx3dconnector_connector1_S1']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['DECLx3dconnector_connector1_S1'] === 'undefined') {
X3DJSON['Obj']['DECLx3dconnector_connector1_S1'] = {};
}

if (typeof X3DJSON['Obj']['DECLx3dconnector_connector1_S1']['ACTION'] === 'undefined') {
X3DJSON['Obj']['DECLx3dconnector_connector1_S1']['ACTION'] = {};
X3DJSON['Obj']['DECLx3dconnector_connector1_S1'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['DECLx3dconnector_connector1_S1']['ACTION'],X3DJSON['Obj']['DECLx3dconnector_connector1_S1']);
}
if (typeof X3DJSON['Obj']['DECLx3dconnector_connector1_S1'].initialize === "function") X3DJSON['Obj']['DECLx3dconnector_connector1_S1'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLx3dconnector_connector2_S1'] = function() {
	this.set_startnode = function (value) {
		this.proxy.startnode = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.startnode_changed = function () {
		var value = this.startnode;
		return value;
	};
	this.startnode = X3DJSON.nodeUtil('DECLpoint_G1_node');
	this.set_endnode = function (value) {
		this.proxy.endnode = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.endnode_changed = function () {
		var value = this.endnode;
		return value;
	};
	this.endnode = X3DJSON.nodeUtil('DECLpoint_G3_node');
	this.set_position = function (value) {
		this.proxy.position = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.position_changed = function () {
		var value = this.position;
		return value;
	};
	this.position = X3DJSON.nodeUtil('DECLx3dconnector_connector2_trans');
	this.set_rotscale = function (value) {
		this.proxy.rotscale = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.rotscale_changed = function () {
		var value = this.rotscale;
		return value;
	};
	this.rotscale = X3DJSON.nodeUtil('DECLx3dconnector_connector2_rotscale');
	this.set_startpoint = function (value) {
		this.proxy.startpoint = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.startpoint_changed = function () {
		var value = this.startpoint;
		return value;
	};
	this.startpoint = undefined;
	this.set_endpoint = function (value) {
		this.proxy.endpoint = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.endpoint_changed = function () {
		var value = this.endpoint;
		return value;
	};
	this.endpoint = undefined;
ecmascript: 
	this.recompute = function (startpoint,endpoint){ if (typeof endpoint === 'undefined') { return; } var dif = endpoint.subtract(startpoint); var dist = dif.length()*0.5; var dif2 = dif.multiply(0.5); var norm = dif.normalize(); var transl = startpoint.add(dif2); if (typeof Quaternion !== 'undefined') { return { scale : new SFVec3f(1.0,dist,1.0), translation : transl, rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm) }; } else if (typeof SFRotation !== 'undefined') { return { scale : new SFVec3f(1.0,dist,1.0), translation : transl, rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm) }; } else { return { scale : new SFVec3f(1.0,dist,1.0), translation : transl }; } } ;

	this.recompute_and_route = function (startpoint, endpoint) { var trafo = this.recompute(startpoint, endpoint); X3DJSON.nodeUtil('DECLx3dconnector_connector2_trans', 'translation',  trafo.translation); X3DJSON.nodeUtil('DECLx3dconnector_connector2_rotscale', 'rotation',  trafo.rotation); X3DJSON.nodeUtil('DECLx3dconnector_connector2_rotscale', 'scale',  trafo.scale); } ;

	this.initialize = function (){ this.recompute_and_route(X3DJSON.nodeUtil('DECLpoint_G1_node', 'translation'),X3DJSON.nodeUtil('DECLpoint_G3_node', 'translation')); } ;

	this.set_startpoint = function (val,t){ this.recompute_and_route(val,X3DJSON.nodeUtil('DECLpoint_G3_node', 'translation')); } ;

	this.set_endpoint = function (val,t){ this.recompute_and_route(X3DJSON.nodeUtil('DECLpoint_G1_node', 'translation'),val); };

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLx3dconnector_connector2_S1'] = new X3DJSON['Script']['DECLx3dconnector_connector2_S1']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['DECLx3dconnector_connector2_S1'] === 'undefined') {
X3DJSON['Obj']['DECLx3dconnector_connector2_S1'] = {};
}

if (typeof X3DJSON['Obj']['DECLx3dconnector_connector2_S1']['ACTION'] === 'undefined') {
X3DJSON['Obj']['DECLx3dconnector_connector2_S1']['ACTION'] = {};
X3DJSON['Obj']['DECLx3dconnector_connector2_S1'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['DECLx3dconnector_connector2_S1']['ACTION'],X3DJSON['Obj']['DECLx3dconnector_connector2_S1']);
}
if (typeof X3DJSON['Obj']['DECLx3dconnector_connector2_S1'].initialize === "function") X3DJSON['Obj']['DECLx3dconnector_connector2_S1'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLx3dconnector_connector3_S1'] = function() {
	this.set_startnode = function (value) {
		this.proxy.startnode = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.startnode_changed = function () {
		var value = this.startnode;
		return value;
	};
	this.startnode = X3DJSON.nodeUtil('DECLpoint_G1_node');
	this.set_endnode = function (value) {
		this.proxy.endnode = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.endnode_changed = function () {
		var value = this.endnode;
		return value;
	};
	this.endnode = X3DJSON.nodeUtil('DECLpoint_G4_node');
	this.set_position = function (value) {
		this.proxy.position = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.position_changed = function () {
		var value = this.position;
		return value;
	};
	this.position = X3DJSON.nodeUtil('DECLx3dconnector_connector3_trans');
	this.set_rotscale = function (value) {
		this.proxy.rotscale = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.rotscale_changed = function () {
		var value = this.rotscale;
		return value;
	};
	this.rotscale = X3DJSON.nodeUtil('DECLx3dconnector_connector3_rotscale');
	this.set_startpoint = function (value) {
		this.proxy.startpoint = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.startpoint_changed = function () {
		var value = this.startpoint;
		return value;
	};
	this.startpoint = undefined;
	this.set_endpoint = function (value) {
		this.proxy.endpoint = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.endpoint_changed = function () {
		var value = this.endpoint;
		return value;
	};
	this.endpoint = undefined;
ecmascript: 
	this.recompute = function (startpoint,endpoint){ if (typeof endpoint === 'undefined') { return; } var dif = endpoint.subtract(startpoint); var dist = dif.length()*0.5; var dif2 = dif.multiply(0.5); var norm = dif.normalize(); var transl = startpoint.add(dif2); if (typeof Quaternion !== 'undefined') { return { scale : new SFVec3f(1.0,dist,1.0), translation : transl, rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm) }; } else if (typeof SFRotation !== 'undefined') { return { scale : new SFVec3f(1.0,dist,1.0), translation : transl, rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm) }; } else { return { scale : new SFVec3f(1.0,dist,1.0), translation : transl }; } } ;

	this.recompute_and_route = function (startpoint, endpoint) { var trafo = this.recompute(startpoint, endpoint); X3DJSON.nodeUtil('DECLx3dconnector_connector3_trans', 'translation',  trafo.translation); X3DJSON.nodeUtil('DECLx3dconnector_connector3_rotscale', 'rotation',  trafo.rotation); X3DJSON.nodeUtil('DECLx3dconnector_connector3_rotscale', 'scale',  trafo.scale); } ;

	this.initialize = function (){ this.recompute_and_route(X3DJSON.nodeUtil('DECLpoint_G1_node', 'translation'),X3DJSON.nodeUtil('DECLpoint_G4_node', 'translation')); } ;

	this.set_startpoint = function (val,t){ this.recompute_and_route(val,X3DJSON.nodeUtil('DECLpoint_G4_node', 'translation')); } ;

	this.set_endpoint = function (val,t){ this.recompute_and_route(X3DJSON.nodeUtil('DECLpoint_G1_node', 'translation'),val); };

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLx3dconnector_connector3_S1'] = new X3DJSON['Script']['DECLx3dconnector_connector3_S1']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['DECLx3dconnector_connector3_S1'] === 'undefined') {
X3DJSON['Obj']['DECLx3dconnector_connector3_S1'] = {};
}

if (typeof X3DJSON['Obj']['DECLx3dconnector_connector3_S1']['ACTION'] === 'undefined') {
X3DJSON['Obj']['DECLx3dconnector_connector3_S1']['ACTION'] = {};
X3DJSON['Obj']['DECLx3dconnector_connector3_S1'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['DECLx3dconnector_connector3_S1']['ACTION'],X3DJSON['Obj']['DECLx3dconnector_connector3_S1']);
}
if (typeof X3DJSON['Obj']['DECLx3dconnector_connector3_S1'].initialize === "function") X3DJSON['Obj']['DECLx3dconnector_connector3_S1'].initialize();
X3DJSON.nodeUtil('DECLpoint_G1_CL1').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['DECLpoint_G1_MB1'].set_location(X3DJSON.nodeUtil('DECLpoint_G1_CL1','cycleTime'), __eventTime);
}, false);
			X3DJSON['Obj']['DECLpoint_G1_MB1'].set_location(X3DJSON.nodeUtil('DECLpoint_G1_CL1','cycleTime'), __eventTime);
X3DJSON.nodeUtil('DECLpoint_G1_CL1').addEventListener('outputchange', function(event) {
}, false);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['DECLpoint_G1_MB1'] === 'undefined') {
X3DJSON['Obj']['DECLpoint_G1_MB1'] = {};
}

if (typeof X3DJSON['Obj']['DECLpoint_G1_MB1']['ACTION']['keyValue'] === 'undefined') {
X3DJSON['Obj']['DECLpoint_G1_MB1']['ACTION']['keyValue'] = [];
}
X3DJSON['Obj']['DECLpoint_G1_MB1']['ACTION']['keyValue'].push(function(property, value) {
		if (property === 'keyValue') {
			X3DJSON.nodeUtil('DECLpoint_G1_PI1','keyValue',typeof X3DJSON['Obj']['DECLpoint_G1_MB1'].keyValue === "function" ? X3DJSON['Obj']['DECLpoint_G1_MB1'].keyValue() : X3DJSON['Obj']['DECLpoint_G1_MB1'].keyValue, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLpoint_G1_PI1','keyValue',typeof X3DJSON['Obj']['DECLpoint_G1_MB1'].keyValue === "function" ? X3DJSON['Obj']['DECLpoint_G1_MB1'].keyValue() : X3DJSON['Obj']['DECLpoint_G1_MB1'].keyValue, __eventTime);
X3DJSON.nodeUtil('DECLpoint_G1_PI1').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('DECLpoint_G2_CL1').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['DECLpoint_G2_MB1'].set_location(X3DJSON.nodeUtil('DECLpoint_G2_CL1','cycleTime'), __eventTime);
}, false);
			X3DJSON['Obj']['DECLpoint_G2_MB1'].set_location(X3DJSON.nodeUtil('DECLpoint_G2_CL1','cycleTime'), __eventTime);
X3DJSON.nodeUtil('DECLpoint_G2_CL1').addEventListener('outputchange', function(event) {
}, false);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['DECLpoint_G2_MB1'] === 'undefined') {
X3DJSON['Obj']['DECLpoint_G2_MB1'] = {};
}

if (typeof X3DJSON['Obj']['DECLpoint_G2_MB1']['ACTION']['keyValue'] === 'undefined') {
X3DJSON['Obj']['DECLpoint_G2_MB1']['ACTION']['keyValue'] = [];
}
X3DJSON['Obj']['DECLpoint_G2_MB1']['ACTION']['keyValue'].push(function(property, value) {
		if (property === 'keyValue') {
			X3DJSON.nodeUtil('DECLpoint_G2_PI1','keyValue',typeof X3DJSON['Obj']['DECLpoint_G2_MB1'].keyValue === "function" ? X3DJSON['Obj']['DECLpoint_G2_MB1'].keyValue() : X3DJSON['Obj']['DECLpoint_G2_MB1'].keyValue, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLpoint_G2_PI1','keyValue',typeof X3DJSON['Obj']['DECLpoint_G2_MB1'].keyValue === "function" ? X3DJSON['Obj']['DECLpoint_G2_MB1'].keyValue() : X3DJSON['Obj']['DECLpoint_G2_MB1'].keyValue, __eventTime);
X3DJSON.nodeUtil('DECLpoint_G2_PI1').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('DECLpoint_G3_CL1').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['DECLpoint_G3_MB1'].set_location(X3DJSON.nodeUtil('DECLpoint_G3_CL1','cycleTime'), __eventTime);
}, false);
			X3DJSON['Obj']['DECLpoint_G3_MB1'].set_location(X3DJSON.nodeUtil('DECLpoint_G3_CL1','cycleTime'), __eventTime);
X3DJSON.nodeUtil('DECLpoint_G3_CL1').addEventListener('outputchange', function(event) {
}, false);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['DECLpoint_G3_MB1'] === 'undefined') {
X3DJSON['Obj']['DECLpoint_G3_MB1'] = {};
}

if (typeof X3DJSON['Obj']['DECLpoint_G3_MB1']['ACTION']['keyValue'] === 'undefined') {
X3DJSON['Obj']['DECLpoint_G3_MB1']['ACTION']['keyValue'] = [];
}
X3DJSON['Obj']['DECLpoint_G3_MB1']['ACTION']['keyValue'].push(function(property, value) {
		if (property === 'keyValue') {
			X3DJSON.nodeUtil('DECLpoint_G3_PI1','keyValue',typeof X3DJSON['Obj']['DECLpoint_G3_MB1'].keyValue === "function" ? X3DJSON['Obj']['DECLpoint_G3_MB1'].keyValue() : X3DJSON['Obj']['DECLpoint_G3_MB1'].keyValue, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLpoint_G3_PI1','keyValue',typeof X3DJSON['Obj']['DECLpoint_G3_MB1'].keyValue === "function" ? X3DJSON['Obj']['DECLpoint_G3_MB1'].keyValue() : X3DJSON['Obj']['DECLpoint_G3_MB1'].keyValue, __eventTime);
X3DJSON.nodeUtil('DECLpoint_G3_PI1').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('DECLpoint_G4_CL1').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['DECLpoint_G4_MB1'].set_location(X3DJSON.nodeUtil('DECLpoint_G4_CL1','cycleTime'), __eventTime);
}, false);
			X3DJSON['Obj']['DECLpoint_G4_MB1'].set_location(X3DJSON.nodeUtil('DECLpoint_G4_CL1','cycleTime'), __eventTime);
X3DJSON.nodeUtil('DECLpoint_G4_CL1').addEventListener('outputchange', function(event) {
}, false);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['DECLpoint_G4_MB1'] === 'undefined') {
X3DJSON['Obj']['DECLpoint_G4_MB1'] = {};
}

if (typeof X3DJSON['Obj']['DECLpoint_G4_MB1']['ACTION']['keyValue'] === 'undefined') {
X3DJSON['Obj']['DECLpoint_G4_MB1']['ACTION']['keyValue'] = [];
}
X3DJSON['Obj']['DECLpoint_G4_MB1']['ACTION']['keyValue'].push(function(property, value) {
		if (property === 'keyValue') {
			X3DJSON.nodeUtil('DECLpoint_G4_PI1','keyValue',typeof X3DJSON['Obj']['DECLpoint_G4_MB1'].keyValue === "function" ? X3DJSON['Obj']['DECLpoint_G4_MB1'].keyValue() : X3DJSON['Obj']['DECLpoint_G4_MB1'].keyValue, __eventTime);
		}
});
			X3DJSON.nodeUtil('DECLpoint_G4_PI1','keyValue',typeof X3DJSON['Obj']['DECLpoint_G4_MB1'].keyValue === "function" ? X3DJSON['Obj']['DECLpoint_G4_MB1'].keyValue() : X3DJSON['Obj']['DECLpoint_G4_MB1'].keyValue, __eventTime);
X3DJSON.nodeUtil('DECLpoint_G4_PI1').addEventListener('outputchange', function(event) {
}, false);
X3DJSON.nodeUtil('DECLpoint_G1_node').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['DECLx3dconnector_connector1_S1'].set_startpoint(X3DJSON.nodeUtil('DECLpoint_G1_node','translation'), __eventTime);
}, false);
			X3DJSON['Obj']['DECLx3dconnector_connector1_S1'].set_startpoint(X3DJSON.nodeUtil('DECLpoint_G1_node','translation'), __eventTime);
X3DJSON.nodeUtil('DECLpoint_G2_node').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['DECLx3dconnector_connector1_S1'].set_endpoint(X3DJSON.nodeUtil('DECLpoint_G2_node','translation'), __eventTime);
}, false);
			X3DJSON['Obj']['DECLx3dconnector_connector1_S1'].set_endpoint(X3DJSON.nodeUtil('DECLpoint_G2_node','translation'), __eventTime);
X3DJSON.nodeUtil('DECLpoint_G1_node').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['DECLx3dconnector_connector2_S1'].set_startpoint(X3DJSON.nodeUtil('DECLpoint_G1_node','translation'), __eventTime);
}, false);
			X3DJSON['Obj']['DECLx3dconnector_connector2_S1'].set_startpoint(X3DJSON.nodeUtil('DECLpoint_G1_node','translation'), __eventTime);
X3DJSON.nodeUtil('DECLpoint_G3_node').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['DECLx3dconnector_connector2_S1'].set_endpoint(X3DJSON.nodeUtil('DECLpoint_G3_node','translation'), __eventTime);
}, false);
			X3DJSON['Obj']['DECLx3dconnector_connector2_S1'].set_endpoint(X3DJSON.nodeUtil('DECLpoint_G3_node','translation'), __eventTime);
X3DJSON.nodeUtil('DECLpoint_G1_node').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['DECLx3dconnector_connector3_S1'].set_startpoint(X3DJSON.nodeUtil('DECLpoint_G1_node','translation'), __eventTime);
}, false);
			X3DJSON['Obj']['DECLx3dconnector_connector3_S1'].set_startpoint(X3DJSON.nodeUtil('DECLpoint_G1_node','translation'), __eventTime);
X3DJSON.nodeUtil('DECLpoint_G4_node').addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['DECLx3dconnector_connector3_S1'].set_endpoint(X3DJSON.nodeUtil('DECLpoint_G4_node','translation'), __eventTime);
}, false);
			X3DJSON['Obj']['DECLx3dconnector_connector3_S1'].set_endpoint(X3DJSON.nodeUtil('DECLpoint_G4_node','translation'), __eventTime);
			X3DJSON['Obj']['DECLpoint_G1_MB1'].set_location(X3DJSON.nodeUtil('DECLpoint_G1_CL1','cycleTime'), __eventTime);
			X3DJSON.nodeUtil('DECLpoint_G1_PI1','keyValue',typeof X3DJSON['Obj']['DECLpoint_G1_MB1'].keyValue === "function" ? X3DJSON['Obj']['DECLpoint_G1_MB1'].keyValue() : X3DJSON['Obj']['DECLpoint_G1_MB1'].keyValue, __eventTime);
			X3DJSON['Obj']['DECLpoint_G2_MB1'].set_location(X3DJSON.nodeUtil('DECLpoint_G2_CL1','cycleTime'), __eventTime);
			X3DJSON.nodeUtil('DECLpoint_G2_PI1','keyValue',typeof X3DJSON['Obj']['DECLpoint_G2_MB1'].keyValue === "function" ? X3DJSON['Obj']['DECLpoint_G2_MB1'].keyValue() : X3DJSON['Obj']['DECLpoint_G2_MB1'].keyValue, __eventTime);
			X3DJSON['Obj']['DECLpoint_G3_MB1'].set_location(X3DJSON.nodeUtil('DECLpoint_G3_CL1','cycleTime'), __eventTime);
			X3DJSON.nodeUtil('DECLpoint_G3_PI1','keyValue',typeof X3DJSON['Obj']['DECLpoint_G3_MB1'].keyValue === "function" ? X3DJSON['Obj']['DECLpoint_G3_MB1'].keyValue() : X3DJSON['Obj']['DECLpoint_G3_MB1'].keyValue, __eventTime);
			X3DJSON['Obj']['DECLpoint_G4_MB1'].set_location(X3DJSON.nodeUtil('DECLpoint_G4_CL1','cycleTime'), __eventTime);
			X3DJSON.nodeUtil('DECLpoint_G4_PI1','keyValue',typeof X3DJSON['Obj']['DECLpoint_G4_MB1'].keyValue === "function" ? X3DJSON['Obj']['DECLpoint_G4_MB1'].keyValue() : X3DJSON['Obj']['DECLpoint_G4_MB1'].keyValue, __eventTime);
			X3DJSON['Obj']['DECLx3dconnector_connector1_S1'].set_startpoint(X3DJSON.nodeUtil('DECLpoint_G1_node','translation'), __eventTime);
			X3DJSON['Obj']['DECLx3dconnector_connector1_S1'].set_endpoint(X3DJSON.nodeUtil('DECLpoint_G2_node','translation'), __eventTime);
			X3DJSON['Obj']['DECLx3dconnector_connector2_S1'].set_startpoint(X3DJSON.nodeUtil('DECLpoint_G1_node','translation'), __eventTime);
			X3DJSON['Obj']['DECLx3dconnector_connector2_S1'].set_endpoint(X3DJSON.nodeUtil('DECLpoint_G3_node','translation'), __eventTime);
			X3DJSON['Obj']['DECLx3dconnector_connector3_S1'].set_startpoint(X3DJSON.nodeUtil('DECLpoint_G1_node','translation'), __eventTime);
			X3DJSON['Obj']['DECLx3dconnector_connector3_S1'].set_endpoint(X3DJSON.nodeUtil('DECLpoint_G4_node','translation'), __eventTime);