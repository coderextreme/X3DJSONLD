var x3dom = require('../node/fields.js');
if (typeof X3DJSON === 'undefined') {
	var X3DJSON = {};
}
if (typeof __eventTime === 'undefined') {
	var __eventTime = 0;
}
if (typeof x3dom !== 'undefined') {
    var MFBool = x3dom.fields.MFBoolean;
    var MFColor = x3dom.fields.MFColor;
    var MFColorRGBA = x3dom.fields.MFColorRGBA;
    var MFFloat = x3dom.fields.MFFloat;
    var MFInt32 = x3dom.fields.MFInt32;
    var MFNode = x3dom.fields.MFNode;
    var MFRotation = x3dom.fields.MFRotation;
    var MFString = x3dom.fields.MFString;
    var MFVec2f = x3dom.fields.MFVec2f;
    var MFVec3f = x3dom.fields.MFVec3f;
    var Quaternion = x3dom.fields.Quaternion;
    var SFColor = x3dom.fields.SFColor;
    var SFColorRGBA = x3dom.fields.SFColorRGBA;
    var SFImage = x3dom.fields.SFImage;
    var SFMatrix4f = x3dom.fields.SFMatrix4f;
    var SFNode = x3dom.fields.SFNode;
    var SFRotation = x3dom.fields.SFRotation;
    var SFVec2f = x3dom.fields.SFVec2f;
    var SFVec3f = x3dom.fields.SFVec3f;
    var SFVec4f = x3dom.fields.SFVec4f;
} else {
    var SFVec3f = function() { return Array.prototype.slice.call(arguments, 0); };
}
var SFString = String;
var SFTime = Number;
var SFDouble = Number;
var SFFloat = Number;
var SFInt32 = Number;
var SFBool = Boolean;
var MFDouble = function() { return Array.prototype.slice.call(arguments, 0); };
var MFImage = function() { return Array.prototype.slice.call(arguments, 0); };
var MFMatrix3d = function() { return Array.prototype.slice.call(arguments, 0); };
var MFMatrix3f = function() { return Array.prototype.slice.call(arguments, 0); };
var MFMatrix4d = function() { return Array.prototype.slice.call(arguments, 0); };
var MFMatrix4f = function() { return Array.prototype.slice.call(arguments, 0); };
var MFTime = function() { return Array.prototype.slice.call(arguments, 0); };
var MFVec2d = function() { return Array.prototype.slice.call(arguments, 0); };
var MFVec3d = function() { return Array.prototype.slice.call(arguments, 0); };
var MFVec4d = function() { return Array.prototype.slice.call(arguments, 0); };
var MFVec4f = function() { return Array.prototype.slice.call(arguments, 0); };
var SFMatrix3d = function() { return Array.prototype.slice.call(arguments, 0); };
var SFMatrix3f = function() { return Array.prototype.slice.call(arguments, 0); };
var SFMatrix4d = function() { return Array.prototype.slice.call(arguments, 0); };
var SFVec2d = function() { return Array.prototype.slice.call(arguments, 0); };
var SFVec3d = function() { return Array.prototype.slice.call(arguments, 0); };
var SFVec4d = function() { return Array.prototype.slice.call(arguments, 0); };
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
if (typeof $ !== 'function') {
	$ = function() { return { attr : function() {}, 0 : null }; };
}
X3DJSON.nodeUtil = function(selector, node, field, value) {
		if (typeof selector === 'undefined') {
			selector = "";
		} else {
			selector = selector+" ";
		}
		selector = selector+"[DEF='"+node+"']";
		var element = document.querySelector(selector);
		if (element === null) {
			console.error('unDEFed node', node, selector);
		} else if (arguments.length > 3) {
			/*
			if (value && typeof value.toString === 'function') {
				value = value.toString();
			}
			$(selector).attr(field, value);
			// console.log('set', node, '.', field, '=', value);
			*/
			try {
				if (typeof element.setFieldValue === 'function') {
					element.setFieldValue(field, value);
				} else {
					element.setAttribute(field, value);
				}
			} catch (e) {
				console.log(e);
			}
			return element;
		} else if (arguments.length > 2) {
			if (typeof element.getFieldValue === 'function') {
				value = element.getFieldValue(field);
			} else {
				value = element.getAttribute(field);
			}
			/*
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
		} else if (arguments.length > 0) {
			return $(selector)[0];
		} else {
			return;
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
if (typeof X3DJSON['Scene../data/ViewFrustumPrototype.json'] === 'undefined') {
	X3DJSON['Scene../data/ViewFrustumPrototype.json'] = {};
}

if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/ViewFrustumPrototype.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/ViewFrustumPrototype.json'] = {};
}

X3DJSON['Script']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'] = function() {
	this.set_visible = function (value) {
		try {
			this.proxy.visible = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting visible '+e);
			console.error('Problems setting visible',e);
		}
	};
	this.visible_changed = function () {
		var value = this.visible;
		return value;
	};
	try {
		this.visible = new SFBool();
	} catch (e) {
		console.log('Problems setting visible '+e);
		console.error('Problems setting visible',e);
	}
	this.set_visibilitySwitchSelection = function (value) {
		try {
			this.proxy.visibilitySwitchSelection = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting visibilitySwitchSelection '+e);
			console.error('Problems setting visibilitySwitchSelection',e);
		}
	};
	this.visibilitySwitchSelection_changed = function () {
		var value = this.visibilitySwitchSelection;
		return value;
	};
	try {
		this.visibilitySwitchSelection = new SFInt32();
	} catch (e) {
		console.log('Problems setting visibilitySwitchSelection '+e);
		console.error('Problems setting visibilitySwitchSelection',e);
	}
	this.set_ViewpointNode = function (value) {
		try {
			this.proxy.ViewpointNode = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting ViewpointNode '+e);
			console.error('Problems setting ViewpointNode',e);
		}
	};
	this.ViewpointNode_changed = function () {
		var value = this.ViewpointNode;
		return value;
	};
	try {
		this.ViewpointNode = X3DJSON.nodeUtil("Scene","undefined");
	} catch (e) {
		console.log('Problems setting ViewpointNode '+e);
		console.error('Problems setting ViewpointNode',e);
	}
	this.set_NavigationInfoNode = function (value) {
		try {
			this.proxy.NavigationInfoNode = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting NavigationInfoNode '+e);
			console.error('Problems setting NavigationInfoNode',e);
		}
	};
	this.NavigationInfoNode_changed = function () {
		var value = this.NavigationInfoNode;
		return value;
	};
	try {
		this.NavigationInfoNode = X3DJSON.nodeUtil("Scene","undefined");
	} catch (e) {
		console.log('Problems setting NavigationInfoNode '+e);
		console.error('Problems setting NavigationInfoNode',e);
	}
	this.set_FrustumCoordinate = function (value) {
		try {
			this.proxy.FrustumCoordinate = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting FrustumCoordinate '+e);
			console.error('Problems setting FrustumCoordinate',e);
		}
	};
	this.FrustumCoordinate_changed = function () {
		var value = this.FrustumCoordinate;
		return value;
	};
	try {
		this.FrustumCoordinate = X3DJSON.nodeUtil("Scene","FrustumCoordinate");
	} catch (e) {
		console.log('Problems setting FrustumCoordinate '+e);
		console.error('Problems setting FrustumCoordinate',e);
	}
	this.set_FrustumExtrusion = function (value) {
		try {
			this.proxy.FrustumExtrusion = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting FrustumExtrusion '+e);
			console.error('Problems setting FrustumExtrusion',e);
		}
	};
	this.FrustumExtrusion_changed = function () {
		var value = this.FrustumExtrusion;
		return value;
	};
	try {
		this.FrustumExtrusion = X3DJSON.nodeUtil("Scene","FrustumExtrusion");
	} catch (e) {
		console.log('Problems setting FrustumExtrusion '+e);
		console.error('Problems setting FrustumExtrusion',e);
	}
	this.set_recompute = function (value) {
		try {
			this.proxy.recompute = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting recompute '+e);
			console.error('Problems setting recompute',e);
		}
	};
	this.recompute_changed = function () {
		var value = this.recompute;
		return value;
	};
	try {
		this.recompute = new SFBool();
	} catch (e) {
		console.log('Problems setting recompute '+e);
		console.error('Problems setting recompute',e);
	}
	this.set_aspectRatio = function (value) {
		try {
			this.proxy.aspectRatio = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting aspectRatio '+e);
			console.error('Problems setting aspectRatio',e);
		}
	};
	this.aspectRatio_changed = function () {
		var value = this.aspectRatio;
		return value;
	};
	try {
		this.aspectRatio = new SFFloat();
	} catch (e) {
		console.log('Problems setting aspectRatio '+e);
		console.error('Problems setting aspectRatio',e);
	}
	this.set_position = function (value) {
		try {
			this.proxy.position = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting position '+e);
			console.error('Problems setting position',e);
		}
	};
	this.position_changed = function () {
		var value = this.position;
		return value;
	};
	try {
		this.position = undefined;
	} catch (e) {
		console.log('Problems setting position '+e);
		console.error('Problems setting position',e);
	}
	this.set_orientation = function (value) {
		try {
			this.proxy.orientation = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting orientation '+e);
			console.error('Problems setting orientation',e);
		}
	};
	this.orientation_changed = function () {
		var value = this.orientation;
		return value;
	};
	try {
		this.orientation = undefined;
	} catch (e) {
		console.log('Problems setting orientation '+e);
		console.error('Problems setting orientation',e);
	}
	this.set_spine = function (value) {
		try {
			this.proxy.spine = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting spine '+e);
			console.error('Problems setting spine',e);
		}
	};
	this.spine_changed = function () {
		var value = this.spine;
		return value;
	};
	try {
		this.spine = undefined;
	} catch (e) {
		console.log('Problems setting spine '+e);
		console.error('Problems setting spine',e);
	}
	this.set_scale = function (value) {
		try {
			this.proxy.scale = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting scale '+e);
			console.error('Problems setting scale',e);
		}
	};
	this.scale_changed = function () {
		var value = this.scale;
		return value;
	};
	try {
		this.scale = undefined;
	} catch (e) {
		console.log('Problems setting scale '+e);
		console.error('Problems setting scale',e);
	}
	this.set_point = function (value) {
		try {
			this.proxy.point = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting point '+e);
			console.error('Problems setting point',e);
		}
	};
	this.point_changed = function () {
		var value = this.point;
		return value;
	};
	try {
		this.point = undefined;
	} catch (e) {
		console.log('Problems setting point '+e);
		console.error('Problems setting point',e);
	}
	this.set_trace = function (value) {
		try {
			this.proxy.trace = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting trace '+e);
			console.error('Problems setting trace',e);
		}
	};
	this.trace_changed = function () {
		var value = this.trace;
		return value;
	};
	try {
		this.trace = new SFBool();
	} catch (e) {
		console.log('Problems setting trace '+e);
		console.error('Problems setting trace',e);
	}
};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'] = new X3DJSON['Script']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript']['ACTION'],X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].initialize === "function") X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].initialize();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript']['ACTION']['visibilitySwitchSelection'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript']['ACTION']['visibilitySwitchSelection'] = [];
}
X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript']['ACTION']['visibilitySwitchSelection'].push(function(property, value) {
		if (property === 'visibilitySwitchSelection') {
			X3DJSON.nodeUtil("Scene","VisibilitySwitch","whichChoice",typeof X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].visibilitySwitchSelection === "function" ? X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].visibilitySwitchSelection() : X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].visibilitySwitchSelection, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","VisibilitySwitch","whichChoice",typeof X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].visibilitySwitchSelection === "function" ? X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].visibilitySwitchSelection() : X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].visibilitySwitchSelection, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript']['ACTION']['position'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript']['ACTION']['position'] = [];
}
X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript']['ACTION']['position'].push(function(property, value) {
		if (property === 'position') {
			X3DJSON.nodeUtil("Scene","PositionTransform","translation",typeof X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].position_changed === "function" ? X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].position_changed() : X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].position, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","PositionTransform","translation",typeof X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].position_changed === "function" ? X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].position_changed() : X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].position, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript']['ACTION']['orientation'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript']['ACTION']['orientation'] = [];
}
X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript']['ACTION']['orientation'].push(function(property, value) {
		if (property === 'orientation') {
			X3DJSON.nodeUtil("Scene","OrientationTransform","rotation",typeof X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].orientation_changed === "function" ? X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].orientation_changed() : X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].orientation, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","OrientationTransform","rotation",typeof X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].orientation_changed === "function" ? X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].orientation_changed() : X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].orientation, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript']['ACTION']['spine'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript']['ACTION']['spine'] = [];
}
X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript']['ACTION']['spine'].push(function(property, value) {
		if (property === 'spine') {
			X3DJSON.nodeUtil("Scene","FrustumExtrusion","spine",typeof X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].spine_changed === "function" ? X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].spine_changed() : X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].spine, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","FrustumExtrusion","spine",typeof X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].spine_changed === "function" ? X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].spine_changed() : X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].spine, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript']['ACTION']['scale'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript']['ACTION']['scale'] = [];
}
X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript']['ACTION']['scale'].push(function(property, value) {
		if (property === 'scale') {
			X3DJSON.nodeUtil("Scene","FrustumExtrusion","scale",typeof X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].scale_changed === "function" ? X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].scale_changed() : X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].scale, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","FrustumExtrusion","scale",typeof X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].scale_changed === "function" ? X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].scale_changed() : X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].scale, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript']['ACTION']['point'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript']['ACTION']['point'] = [];
}
X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript']['ACTION']['point'].push(function(property, value) {
		if (property === 'point') {
			X3DJSON.nodeUtil("Scene","FrustumCoordinate","point",typeof X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].point_changed === "function" ? X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].point_changed() : X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].point, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","FrustumCoordinate","point",typeof X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].point_changed === "function" ? X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].point_changed() : X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].point, __eventTime);
			X3DJSON.nodeUtil("Scene","VisibilitySwitch","whichChoice",typeof X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].visibilitySwitchSelection === "function" ? X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].visibilitySwitchSelection() : X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].visibilitySwitchSelection, __eventTime);
			X3DJSON.nodeUtil("Scene","PositionTransform","translation",typeof X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].position_changed === "function" ? X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].position_changed() : X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].position, __eventTime);
			X3DJSON.nodeUtil("Scene","OrientationTransform","rotation",typeof X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].orientation_changed === "function" ? X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].orientation_changed() : X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].orientation, __eventTime);
			X3DJSON.nodeUtil("Scene","FrustumExtrusion","spine",typeof X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].spine_changed === "function" ? X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].spine_changed() : X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].spine, __eventTime);
			X3DJSON.nodeUtil("Scene","FrustumExtrusion","scale",typeof X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].scale_changed === "function" ? X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].scale_changed() : X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].scale, __eventTime);
			X3DJSON.nodeUtil("Scene","FrustumCoordinate","point",typeof X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].point_changed === "function" ? X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].point_changed() : X3DJSON['Obj']['Scene']['../data/ViewFrustumPrototype.json']['GeometryComputationScript'].point, __eventTime);