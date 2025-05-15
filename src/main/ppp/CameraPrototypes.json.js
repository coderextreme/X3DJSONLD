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
if (typeof X3DJSON['Scene../data/CameraPrototypes.json'] === 'undefined') {
	X3DJSON['Scene../data/CameraPrototypes.json'] = {};
}

if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/CameraPrototypes.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/CameraPrototypes.json'] = {};
}

X3DJSON['Script']['Scene']['../data/CameraPrototypes.json']['CameraScript'] = function() {
	this.set_description = function (value) {
		try {
			this.proxy.description = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting description '+e);
			console.error('Problems setting description',e);
		}
	};
	this.description_changed = function () {
		var value = this.description;
		return value;
	};
	try {
		this.description = new SFString();
	} catch (e) {
		console.log('Problems setting description '+e);
		console.error('Problems setting description',e);
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
		this.position = new SFVec3f();
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
		this.orientation = new SFRotation();
	} catch (e) {
		console.log('Problems setting orientation '+e);
		console.error('Problems setting orientation',e);
	}
	this.set_fraction = function (value) {
		try {
			this.proxy.fraction = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting fraction '+e);
			console.error('Problems setting fraction',e);
		}
	};
	this.fraction_changed = function () {
		var value = this.fraction;
		return value;
	};
	try {
		this.fraction = undefined;
	} catch (e) {
		console.log('Problems setting fraction '+e);
		console.error('Problems setting fraction',e);
	}
	this.set_bind = function (value) {
		try {
			this.proxy.bind = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting bind '+e);
			console.error('Problems setting bind',e);
		}
	};
	this.bind_changed = function () {
		var value = this.bind;
		return value;
	};
	try {
		this.bind = undefined;
	} catch (e) {
		console.log('Problems setting bind '+e);
		console.error('Problems setting bind',e);
	}
	this.set_fieldOfView = function (value) {
		try {
			this.proxy.fieldOfView = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting fieldOfView '+e);
			console.error('Problems setting fieldOfView',e);
		}
	};
	this.fieldOfView_changed = function () {
		var value = this.fieldOfView;
		return value;
	};
	try {
		this.fieldOfView = new SFFloat();
	} catch (e) {
		console.log('Problems setting fieldOfView '+e);
		console.error('Problems setting fieldOfView',e);
	}
	this.set_nearClipPlane = function (value) {
		try {
			this.proxy.nearClipPlane = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting nearClipPlane '+e);
			console.error('Problems setting nearClipPlane',e);
		}
	};
	this.nearClipPlane_changed = function () {
		var value = this.nearClipPlane;
		return value;
	};
	try {
		this.nearClipPlane = new SFFloat();
	} catch (e) {
		console.log('Problems setting nearClipPlane '+e);
		console.error('Problems setting nearClipPlane',e);
	}
	this.set_farClipPlane = function (value) {
		try {
			this.proxy.farClipPlane = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting farClipPlane '+e);
			console.error('Problems setting farClipPlane',e);
		}
	};
	this.farClipPlane_changed = function () {
		var value = this.farClipPlane;
		return value;
	};
	try {
		this.farClipPlane = new SFFloat();
	} catch (e) {
		console.log('Problems setting farClipPlane '+e);
		console.error('Problems setting farClipPlane',e);
	}
	this.set_shots = function (value) {
		try {
			this.proxy.shots = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting shots '+e);
			console.error('Problems setting shots',e);
		}
	};
	this.shots_changed = function () {
		var value = this.shots;
		return value;
	};
	try {
		this.shots = new MFNode();
	} catch (e) {
		console.log('Problems setting shots '+e);
		console.error('Problems setting shots',e);
	}
	this.set_filterColor = function (value) {
		try {
			this.proxy.filterColor = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting filterColor '+e);
			console.error('Problems setting filterColor',e);
		}
	};
	this.filterColor_changed = function () {
		var value = this.filterColor;
		return value;
	};
	try {
		this.filterColor = new SFColor();
	} catch (e) {
		console.log('Problems setting filterColor '+e);
		console.error('Problems setting filterColor',e);
	}
	this.set_filterTransparency = function (value) {
		try {
			this.proxy.filterTransparency = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting filterTransparency '+e);
			console.error('Problems setting filterTransparency',e);
		}
	};
	this.filterTransparency_changed = function () {
		var value = this.filterTransparency;
		return value;
	};
	try {
		this.filterTransparency = new SFFloat();
	} catch (e) {
		console.log('Problems setting filterTransparency '+e);
		console.error('Problems setting filterTransparency',e);
	}
	this.set_upVector = function (value) {
		try {
			this.proxy.upVector = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting upVector '+e);
			console.error('Problems setting upVector',e);
		}
	};
	this.upVector_changed = function () {
		var value = this.upVector;
		return value;
	};
	try {
		this.upVector = new SFVec3f();
	} catch (e) {
		console.log('Problems setting upVector '+e);
		console.error('Problems setting upVector',e);
	}
	this.set_fStop = function (value) {
		try {
			this.proxy.fStop = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting fStop '+e);
			console.error('Problems setting fStop',e);
		}
	};
	this.fStop_changed = function () {
		var value = this.fStop;
		return value;
	};
	try {
		this.fStop = new SFFloat();
	} catch (e) {
		console.log('Problems setting fStop '+e);
		console.error('Problems setting fStop',e);
	}
	this.set_focusDistance = function (value) {
		try {
			this.proxy.focusDistance = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting focusDistance '+e);
			console.error('Problems setting focusDistance',e);
		}
	};
	this.focusDistance_changed = function () {
		var value = this.focusDistance;
		return value;
	};
	try {
		this.focusDistance = new SFFloat();
	} catch (e) {
		console.log('Problems setting focusDistance '+e);
		console.error('Problems setting focusDistance',e);
	}
	this.set_isActive = function (value) {
		try {
			this.proxy.isActive = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting isActive '+e);
			console.error('Problems setting isActive',e);
		}
	};
	this.isActive_changed = function () {
		var value = this.isActive;
		return value;
	};
	try {
		this.isActive = new SFBool();
	} catch (e) {
		console.log('Problems setting isActive '+e);
		console.error('Problems setting isActive',e);
	}
	this.set_totalDuration = function (value) {
		try {
			this.proxy.totalDuration = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting totalDuration '+e);
			console.error('Problems setting totalDuration',e);
		}
	};
	this.totalDuration_changed = function () {
		var value = this.totalDuration;
		return value;
	};
	try {
		this.totalDuration = new SFTime();
	} catch (e) {
		console.log('Problems setting totalDuration '+e);
		console.error('Problems setting totalDuration',e);
	}
	this.set_offlineRender = function (value) {
		try {
			this.proxy.offlineRender = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting offlineRender '+e);
			console.error('Problems setting offlineRender',e);
		}
	};
	this.offlineRender_changed = function () {
		var value = this.offlineRender;
		return value;
	};
	try {
		this.offlineRender = X3DJSON.nodeUtil("Scene","undefined");
	} catch (e) {
		console.log('Problems setting offlineRender '+e);
		console.error('Problems setting offlineRender',e);
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
		this.ViewpointNode = X3DJSON.nodeUtil("Scene","CameraViewpoint");
	} catch (e) {
		console.log('Problems setting ViewpointNode '+e);
		console.error('Problems setting ViewpointNode',e);
	}
	this.set_NavInfoNode = function (value) {
		try {
			this.proxy.NavInfoNode = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting NavInfoNode '+e);
			console.error('Problems setting NavInfoNode',e);
		}
	};
	this.NavInfoNode_changed = function () {
		var value = this.NavInfoNode;
		return value;
	};
	try {
		this.NavInfoNode = X3DJSON.nodeUtil("Scene","CameraNavInfo");
	} catch (e) {
		console.log('Problems setting NavInfoNode '+e);
		console.error('Problems setting NavInfoNode',e);
	}
	this.set_CameraPI = function (value) {
		try {
			this.proxy.CameraPI = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting CameraPI '+e);
			console.error('Problems setting CameraPI',e);
		}
	};
	this.CameraPI_changed = function () {
		var value = this.CameraPI;
		return value;
	};
	try {
		this.CameraPI = X3DJSON.nodeUtil("Scene","CameraPositionInterpolator");
	} catch (e) {
		console.log('Problems setting CameraPI '+e);
		console.error('Problems setting CameraPI',e);
	}
	this.set_CameraOI = function (value) {
		try {
			this.proxy.CameraOI = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting CameraOI '+e);
			console.error('Problems setting CameraOI',e);
		}
	};
	this.CameraOI_changed = function () {
		var value = this.CameraOI;
		return value;
	};
	try {
		this.CameraOI = X3DJSON.nodeUtil("Scene","CameraOrientationInterpolator");
	} catch (e) {
		console.log('Problems setting CameraOI '+e);
		console.error('Problems setting CameraOI',e);
	}
	this.set_key = function (value) {
		try {
			this.proxy.key = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting key '+e);
			console.error('Problems setting key',e);
		}
	};
	this.key_changed = function () {
		var value = this.key;
		return value;
	};
	try {
		this.key = new MFFloat();
	} catch (e) {
		console.log('Problems setting key '+e);
		console.error('Problems setting key',e);
	}
	this.set_keyValuePosition = function (value) {
		try {
			this.proxy.keyValuePosition = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting keyValuePosition '+e);
			console.error('Problems setting keyValuePosition',e);
		}
	};
	this.keyValuePosition_changed = function () {
		var value = this.keyValuePosition;
		return value;
	};
	try {
		this.keyValuePosition = new MFVec3f();
	} catch (e) {
		console.log('Problems setting keyValuePosition '+e);
		console.error('Problems setting keyValuePosition',e);
	}
	this.set_keyValueOrientation = function (value) {
		try {
			this.proxy.keyValueOrientation = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting keyValueOrientation '+e);
			console.error('Problems setting keyValueOrientation',e);
		}
	};
	this.keyValueOrientation_changed = function () {
		var value = this.keyValueOrientation;
		return value;
	};
	try {
		this.keyValueOrientation = new MFRotation();
	} catch (e) {
		console.log('Problems setting keyValueOrientation '+e);
		console.error('Problems setting keyValueOrientation',e);
	}
	this.set_animated = function (value) {
		try {
			this.proxy.animated = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting animated '+e);
			console.error('Problems setting animated',e);
		}
	};
	this.animated_changed = function () {
		var value = this.animated;
		return value;
	};
	try {
		this.animated = new SFBool(false);
	} catch (e) {
		console.log('Problems setting animated '+e);
		console.error('Problems setting animated',e);
	}
	this.set_initialized = function (value) {
		try {
			this.proxy.initialized = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting initialized '+e);
			console.error('Problems setting initialized',e);
		}
	};
	this.initialized_changed = function () {
		var value = this.initialized;
		return value;
	};
	try {
		this.initialized = new SFBool(false);
	} catch (e) {
		console.log('Problems setting initialized '+e);
		console.error('Problems setting initialized',e);
	}
	this.set_shotCount = function (value) {
		try {
			this.proxy.shotCount = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting shotCount '+e);
			console.error('Problems setting shotCount',e);
		}
	};
	this.shotCount_changed = function () {
		var value = this.shotCount;
		return value;
	};
	try {
		this.shotCount = new SFInt32(0);
	} catch (e) {
		console.log('Problems setting shotCount '+e);
		console.error('Problems setting shotCount',e);
	}
	this.set_movesCount = function (value) {
		try {
			this.proxy.movesCount = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting movesCount '+e);
			console.error('Problems setting movesCount',e);
		}
	};
	this.movesCount_changed = function () {
		var value = this.movesCount;
		return value;
	};
	try {
		this.movesCount = new SFInt32(0);
	} catch (e) {
		console.log('Problems setting movesCount '+e);
		console.error('Problems setting movesCount',e);
	}
	this.set_frameCount = function (value) {
		try {
			this.proxy.frameCount = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting frameCount '+e);
			console.error('Problems setting frameCount',e);
		}
	};
	this.frameCount_changed = function () {
		var value = this.frameCount;
		return value;
	};
	try {
		this.frameCount = new SFFloat(0);
	} catch (e) {
		console.log('Problems setting frameCount '+e);
		console.error('Problems setting frameCount',e);
	}
	this.set_startTime = function (value) {
		try {
			this.proxy.startTime = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting startTime '+e);
			console.error('Problems setting startTime',e);
		}
	};
	this.startTime_changed = function () {
		var value = this.startTime;
		return value;
	};
	try {
		this.startTime = new SFTime(0);
	} catch (e) {
		console.log('Problems setting startTime '+e);
		console.error('Problems setting startTime',e);
	}
	this.set_priorTraceTime = function (value) {
		try {
			this.proxy.priorTraceTime = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting priorTraceTime '+e);
			console.error('Problems setting priorTraceTime',e);
		}
	};
	this.priorTraceTime_changed = function () {
		var value = this.priorTraceTime;
		return value;
	};
	try {
		this.priorTraceTime = new SFTime(0);
	} catch (e) {
		console.log('Problems setting priorTraceTime '+e);
		console.error('Problems setting priorTraceTime',e);
	}
	this.set_traceEnabled = function (value) {
		try {
			this.proxy.traceEnabled = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting traceEnabled '+e);
			console.error('Problems setting traceEnabled',e);
		}
	};
	this.traceEnabled_changed = function () {
		var value = this.traceEnabled;
		return value;
	};
	try {
		this.traceEnabled = new SFBool();
	} catch (e) {
		console.log('Problems setting traceEnabled '+e);
		console.error('Problems setting traceEnabled',e);
	}


ecmascript:
	this.initialize = function () // CameraScript
{
//  this.tracePrint ('this.initialize start...');

    X3DJSON.nodeUtil("Scene","CameraNavInfo", "avatarSize")[0]   = this.proxy.nearClipPlane;

    // remaining setups deferred to invocation of this.checkShots() method
    // thanks to Yvonne Jung Fraunhofer for diagnosing better approach to functino initialization
    this.alwaysPrint ('this.initialize complete');
}
;

	this.checkShots = function (eventValue)
{
    this.tracePrint ('this.checkShots() method should only occur after this.initialize() methods in all other Scripts are complete');

    // compute this.proxy.totalDuration by summing durations from contained CameraShot and CameraMovement nodes
    this.proxy.totalDuration= 0;
    this.proxy.shotCount  = this.proxy.shots.length;
    this.proxy.movesCount = 0;
    for (i = 0; i < this.proxy.shotCount; i++) // this.proxy.shots index
    {
       this.tracePrint ('this.proxy.shots[' + i + '].moves.length=' + this.proxy.shots[i].moves.length);
       this.proxy.movesCount   += this.proxy.shots[i].moves.length;
       this.proxy.totalDuration = this.proxy.totalDuration + this.proxy.shots[i].shotDuration;
       if (this.proxy.shots[i].moves.length == 0)
       {
          this.alwaysPrint ('warning: CameraShot[' + i + '][' + this.proxy.shots[i].proxy.description + '] has no contained CameraMove nodes');
       }
    }
    // size checks before proceeding
    if (this.proxy.shotCount == 0)
    {
       this.alwaysPrint ('warning: no CameraShot nodes found for the this.proxy.shots, nothing to do!');
       return;
    }
    else if (this.proxy.movesCount == 0)
    {
       this.alwaysPrint ('warning: no CameraMove nodes found for the this.proxy.shots, nothing to do!');
       return;
    }
    else if (this.proxy.totalDuration == 0)
    {
       this.alwaysPrint ('warning: this.proxy.totalDuration = 0 seconds, nothing to do!');
       return;
    }
    this.tracePrint ('number of contained CameraShot nodes=' + this.proxy.shotCount);
    this.tracePrint ('number of contained CameraMove nodes=' + this.proxy.movesCount);
    this.tracePrint ('this.proxy.totalDuration=' + this.proxy.totalDuration + ' seconds for all this.proxy.shots and moves');

    // compute interpolators
    var k = 0; // index for latest this.proxy.key, this.proxy.keyValuePosition, this.proxy.keyValueOrientation
    for (i = 0; i < this.proxy.shotCount; i++) // this.proxy.shots index
    {
        if (i==0) // initial entries
        {
           this.proxy.key[0]                   = 0.0; // no previous move
           this.proxy.keyValuePosition[0]      = this.proxy.shots[i].initialPosition;
           this.proxy.keyValueOrientation[0]   = this.proxy.shots[i].initialOrientation;
        }
        else     // new shot repositions, reorients camera as clean break from preceding shot/move
        {
           this.proxy.key[k+1]                 = this.proxy.key[k]; // start from end from previous move
           this.proxy.keyValuePosition[k+1]    = this.proxy.shots[i].initialPosition;
           this.proxy.keyValueOrientation[k+1] = this.proxy.shots[i].initialOrientation;
           k++;
        }
        this.tracePrint (this.proxy.shots[i].proxy.description);
        this.tracePrint ('this.proxy.shots[i].moves.length=' + this.proxy.shots[i].moves.length);

        for (j = 0; j < this.proxy.shots[i].moves.length; j++) // moves index
        {
            var durationFloat =              this.proxy.shots[i].moves[j].duration;  // implicit type conversion from SFTime
            //  durationFloat = new SFFloat (this.proxy.shots[i].moves[j].duration); // explicit type conversion from SFTime
            //  this.tracePrint ('durationFloat=' + durationFloat);
            this.proxy.key[k+1]               = this.proxy.key[k] + (durationFloat / this.proxy.totalDuration);
            this.proxy.keyValuePosition[k+1]  = this.proxy.shots[i].moves[j].goalPosition;
            if (!this.proxy.animated)
            {
                 this.proxy.keyValueOrientation[k+1] = this.proxy.shots[i].moves[j].goalOrientation;
            }
            else
            {
                // using constructor SFRotation (SFVec3f fromVector, SFVec3f toVector)
                // see X3D ECMAScript binding Table 7.18 — SFRotation instance creation functinos

                // test if difference vector is zero, if so maintain previous rotation
                var shotVector = X3DJSON.nodeUtil("Scene","CameraViewpoint", "this").proxy.position.subtract(this.proxy.shots[i].moves[j].goalAimPoint).normalize();
                if (shotVector.length() >= 0)
                {
                    // default view direction is along -Z axis
                    this.proxy.shots[i].moves[j].goalOrientation = new SFRotation (new SFVec3f (0, 0, 1), shotVector);
                    this.proxy.keyValueOrientation[k+1] = this.proxy.shots[i].moves[j].goalOrientation;
                }
                else // note (k > 0)
                {
                    this.proxy.keyValueOrientation[k+1] = this.proxy.keyValueOrientation[k];  // no change
                }

                this.tracePrint ('this.proxy.shots[' + i + '].moves[' + j + '].goalAimPoint=' + this.proxy.shots[i].moves[j].goalAimPoint.toString());
                this.tracePrint ('        X3DJSON.nodeUtil("Scene","CameraViewpoint", "this").proxy.position=' + X3DJSON.nodeUtil("Scene","CameraViewpoint", "this").proxy.position.toString());
                this.tracePrint ('          shotVector     delta=' + X3DJSON.nodeUtil("Scene","CameraViewpoint", "this").proxy.position.subtract(this.proxy.shots[i].moves[j].goalAimPoint).toString());
                this.tracePrint ('          shotVector normalize=' + X3DJSON.nodeUtil("Scene","CameraViewpoint", "this").proxy.position.subtract(this.proxy.shots[i].moves[j].goalAimPoint).normalize().toString());
                this.tracePrint ('               goalOrientation=' + this.proxy.shots[i].moves[j].goalOrientation.toString());
                this.tracePrint ('      this.proxy.keyValueOrientation[k+1]=' + this.proxy.keyValueOrientation[k+1].toString() + '');
            }
            k++; // update index to match latest this.proxy.key, this.proxy.keyValuePosition, this.proxy.keyValueOrientation

            // check this.proxy.animated parameter:  set true if any of moves are tracking moves
            if (!this.proxy.animated)  this.proxy.animated = this.proxy.shots[i].moves[j].tracking; // once true, remains true
         // this.tracePrint ('this.proxy.shots[' + i + '].moves[' + j + '].tracking=' + this.proxy.shots[i].moves[j].tracking + ', this.proxy.animated=' + this.proxy.animated);

            // intermediate trace
            this.tracePrint ('                this.proxy.key=' + this.proxy.key);
            this.tracePrint ('   this.proxy.keyValuePosition=' + this.proxy.keyValuePosition);
            this.tracePrint ('this.proxy.keyValueOrientation=' + this.proxy.keyValueOrientation);
            this.tracePrint ('- ' + this.proxy.shots[i].moves[j].proxy.description);
        }
    }
    this.tracePrint ('                this.proxy.key=' + this.proxy.key);
    this.tracePrint ('   this.proxy.keyValuePosition=' + this.proxy.keyValuePosition);
    this.tracePrint ('this.proxy.keyValueOrientation=' + this.proxy.keyValueOrientation);
    if (this.proxy.key.length != this.proxy.keyValuePosition.length)
    {
      this.alwaysPrint ('warning: internal error during array construction, ' +
                  'this.proxy.key.length=' + this.proxy.key.length + ' must equal ' +
                  'this.proxy.keyValuePosition.length=' + this.proxy.keyValuePosition.length);
    }
    if (this.proxy.key.length != this.proxy.keyValueOrientation.length)
    {
      this.alwaysPrint ('warning: internal error during array construction, ' +
                  'this.proxy.key.length=' + this.proxy.key.length + ' must equal ' +
                  'this.proxy.keyValueOrientation.length=' + this.proxy.keyValueOrientation.length);
    }
    if (this.proxy.key.length != (this.proxy.shotCount + this.proxy.movesCount))
    {
      this.alwaysPrint ('warning: internal error during array construction, ' +
                  'this.proxy.key.length=' + this.proxy.key.length + ' must equal ' +
                  '(this.proxy.shotCount + this.proxy.movesCount)=' + (this.proxy.shotCount + this.proxy.movesCount));
    }
    this.tracePrint ('           this.proxy.animated=' + this.proxy.animated);
    // set node values
    X3DJSON.nodeUtil("Scene","CameraPositionInterpolator", "this.proxy.key",  this.proxy.key);
    X3DJSON.nodeUtil("Scene","CameraOrientationInterpolator", "this.proxy.key",  this.proxy.key);
    X3DJSON.nodeUtil("Scene","CameraPositionInterpolator", "keyValue",  this.proxy.keyValuePosition);
    X3DJSON.nodeUtil("Scene","CameraOrientationInterpolator", "keyValue",  this.proxy.keyValueOrientation);

    if (!this.proxy.animated) // output results
    {
        this.tracePrint ('<PositionInterpolator    DEF=\'CameraPositionInterpolator\'    this.proxy.key=\'' + this.stripBrackets(X3DJSON.nodeUtil("Scene","CameraPositionInterpolator", "this.proxy.key")) + '\' keyValue=\'' + this.stripBrackets(X3DJSON.nodeUtil("Scene","CameraPositionInterpolator", "keyValue")) + '\'/>');
        this.tracePrint ('<OrientationInterpolator DEF=\'CameraOrientationInterpolator\' this.proxy.key=\'' + this.stripBrackets(X3DJSON.nodeUtil("Scene","CameraOrientationInterpolator", "this.proxy.key")) + '\' keyValue=\'' + this.stripBrackets(X3DJSON.nodeUtil("Scene","CameraOrientationInterpolator", "keyValue")) + '\'/>');
    }
    this.tracePrint ('this.checkShots() complete');
}
;

	this.stripBrackets = function (fieldArray)
{
    // some browsers add brackets to array output strings, this functino strips them
    outputString = '';
    for (i = 0; i < fieldArray.length; i++)
    {
       outputString += fieldArray[i].toString();
       if (i < fieldArray.length - 1) outputString += ' ';
    }
    return outputString;
}
;

	this.set_fraction = function (eventValue, timestamp) // input event received for inputOnly field
{
   // this.proxy.traceEnabled = false;  // for testing purposes

   // if Camera is being this.proxy.animated, immediately recompute interpolator settings
   if (this.proxy.animated) this.checkShots (true);

   // trace progress on console with reduced output frequency
   if (this.proxy.frameCount == 0)
   {
      this.alwaysPrint ('Animation loop commencing, timestamp=' + timestamp);
      this.proxy.startTime      = timestamp;
      this.proxy.priorTraceTime = timestamp;
      this.alwaysPrint ('shotClock=' + (timestamp - this.proxy.startTime) + ' seconds, this.proxy.frameCount=' + this.proxy.frameCount + ', fraction=' + eventValue + ', this.proxy.position=' + X3DJSON.nodeUtil("Scene","CameraViewpoint", "this").proxy.position.toString() + ', this.proxy.orientation=' + X3DJSON.nodeUtil("Scene","CameraViewpoint", "this").proxy.orientation.toString());

      if (this.proxy.animated) // output results
      {
        // TODO how to report or speed up response?  this.alwaysPrint ('  aimPoint=' + aimPoint.toString());
        this.tracePrint ('  <PositionInterpolator    DEF=\'CameraPositionInterpolator\'    this.proxy.key=\'' + this.stripBrackets(X3DJSON.nodeUtil("Scene","CameraPositionInterpolator", "this.proxy.key")) + '\' keyValue=\'' + this.stripBrackets(X3DJSON.nodeUtil("Scene","CameraPositionInterpolator", "keyValue")) + '\'/>');
        this.tracePrint ('  <OrientationInterpolator DEF=\'CameraOrientationInterpolator\' this.proxy.key=\'' + this.stripBrackets(X3DJSON.nodeUtil("Scene","CameraOrientationInterpolator", "this.proxy.key")) + '\' keyValue=\'' + this.stripBrackets(X3DJSON.nodeUtil("Scene","CameraOrientationInterpolator", "keyValue")) + '\'/>');
      }
   }
   else if ((timestamp - this.proxy.priorTraceTime) >= 1.0) // 1 second trace interval
   {
      this.alwaysPrint ('shotClock=' + (timestamp - this.proxy.startTime) + ' seconds, this.proxy.frameCount=' + this.proxy.frameCount + ', fraction=' + eventValue + ', this.proxy.position=' + X3DJSON.nodeUtil("Scene","CameraViewpoint", "this").proxy.position.toString() + ', this.proxy.orientation=' + X3DJSON.nodeUtil("Scene","CameraViewpoint", "this").proxy.orientation.toString());
      this.proxy.priorTraceTime = timestamp;

      if (this.proxy.animated) // output results
      {
        // TODO how to report or speed up response?  this.alwaysPrint ('  aimPoint=' + aimPoint.toString());
        this.tracePrint ('  <PositionInterpolator    DEF=\'CameraPositionInterpolator\'    this.proxy.key=\'' + this.stripBrackets(X3DJSON.nodeUtil("Scene","CameraPositionInterpolator", "this.proxy.key")) + '\' keyValue=\'' + this.stripBrackets(X3DJSON.nodeUtil("Scene","CameraPositionInterpolator", "keyValue")) + '\'/>');
        this.alwaysPrint ('  <OrientationInterpolator DEF=\'CameraOrientationInterpolator\' this.proxy.key=\'' + this.stripBrackets(X3DJSON.nodeUtil("Scene","CameraOrientationInterpolator", "this.proxy.key")) + '\' keyValue=\'' + this.stripBrackets(X3DJSON.nodeUtil("Scene","CameraOrientationInterpolator", "keyValue")) + '\'/>');
      }
   }
   if (eventValue == 0)
   {
      // note that zero value is not necessarily sent first by TimeSensor, so otherwise ignored
      this.proxy.frameCount++;
   }
   else if (eventValue == 1)
   {
      this.alwaysPrint ('shotClock=' + (timestamp - this.proxy.startTime) + ', this.proxy.frameCount=' + this.proxy.frameCount + ', fraction=' + eventValue + ', this.proxy.position=' + X3DJSON.nodeUtil("Scene","CameraViewpoint", "this").proxy.position.toString() + ', this.proxy.orientation=' + X3DJSON.nodeUtil("Scene","CameraViewpoint", "this").proxy.orientation.toString());
      if (this.proxy.animated) // output results
      {
        // TODO how to report or speed up response?  this.alwaysPrint ('  aimPoint=' + aimPoint.toString());
      }
      this.alwaysPrint ('Animation loop complete.');
      // do not unbind the Viewpoint and NavigationInfo nodes, let that be controlled externally
   }
   else
   {
      this.proxy.frameCount++;
   }
}
;

	this.set_bind = function (eventValue) // input event received for inputOnly field
{
   // need to ensure CameraShot nodes are properly this.proxy.initialized
   if (this.proxy.initialized == false)
   {
      this.checkShots (true);
      this.proxy.initialized = true;
   }
   if (eventValue)
   {
       this.tracePrint ('Camera has been bound');
   }
   else
   {
       this.tracePrint ('Camera has been unbound');
   }
}
;

	this.set_description = function (eventValue) // input event received for inputOutput field
{
    this.proxy.description = eventValue;
}
;

	this.set_position = function (eventValue) // input event received for inputOutput field
{
    this.proxy.position = eventValue;
}
;

	this.set_orientation = function (eventValue) // input event received for inputOutput field
{
    this.proxy.orientation = eventValue;
}
;

	this.set_fieldOfView = function (eventValue) // input event received for inputOutput field
{
    this.proxy.fieldOfView = eventValue;
}
;

	this.set_nearClipPlane = function (eventValue) // input event received for inputOutput field
{
    this.proxy.nearClipPlane = eventValue;
}
;

	this.set_farClipPlane = function (eventValue) // input event received for inputOutput field
{
    this.proxy.farClipPlane = eventValue;
}
;

	this.set_shots = function (eventValue) // input event received for inputOutput field
{
    this.proxy.shots = eventValue;
}
;

	this.set_filterColor = function (eventValue) // input event received for inputOutput field
{
    this.proxy.filterColor = eventValue;
}
;

	this.set_filterTransparency = function (eventValue) // input event received for inputOutput field
{
    this.proxy.filterTransparency = eventValue;
}
;

	this.set_upVector = function (eventValue) // input event received for inputOutput field
{
    this.proxy.upVector = eventValue;
}
;

	this.set_fStop = function (eventValue) // input event received for inputOutput field
{
    this.proxy.fStop = eventValue;
}
;

	this.set_focusDistance = function (eventValue) // input event received for inputOutput field
{
    this.proxy.focusDistance = eventValue;
}
;

	this.set_offlineRender = function (eventValue) // input event received for inputOutput field
{
    X3DJSON.nodeUtil("Scene","undefined", "",  eventValue);
}
;

	this.set_key = function (eventValue) // input event received for inputOutput field
{
    this.proxy.key = eventValue;
}
;

	this.set_keyValuePosition = function (eventValue) // input event received for inputOutput field
{
    this.proxy.keyValuePosition = eventValue;
}
;

	this.set_keyValueOrientation = function (eventValue) // input event received for inputOutput field
{
    this.proxy.keyValueOrientation = eventValue;
}
;

	this.set_animated = function (eventValue) // input event received for inputOutput field
{
    this.proxy.animated = eventValue;
}
;

	this.tracePrint = function (outputValue)
{
	if (this.proxy.traceEnabled) this.alwaysPrint (outputValue);
};

	this.alwaysPrint = function (outputValue)
{
    // try to ensure outputValue is converted to string despite console.error idiosyncracies
    var outputString = outputValue.toString(); // utility functino according to spec
    if (outputString == null) outputString = outputValue; // direct cast

    if  (this.proxy.description.length > 0)
         console.error ('[Camera: ' + this.proxy.description + '] ' + outputString + '');
    else
         console.error ('[Camera] ' + outputString + '');
}

;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'] = new X3DJSON['Script']['Scene']['../data/CameraPrototypes.json']['CameraScript']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript']['ACTION'],X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].initialize === "function") X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/CameraPrototypes.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/CameraPrototypes.json'] = {};
}

X3DJSON['Script']['Scene']['../data/CameraPrototypes.json']['CameraShotScript'] = function() {
	this.set_description = function (value) {
		try {
			this.proxy.description = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting description '+e);
			console.error('Problems setting description',e);
		}
	};
	this.description_changed = function () {
		var value = this.description;
		return value;
	};
	try {
		this.description = new SFString();
	} catch (e) {
		console.log('Problems setting description '+e);
		console.error('Problems setting description',e);
	}
	this.set_enabled = function (value) {
		try {
			this.proxy.enabled = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting enabled '+e);
			console.error('Problems setting enabled',e);
		}
	};
	this.enabled_changed = function () {
		var value = this.enabled;
		return value;
	};
	try {
		this.enabled = new SFBool();
	} catch (e) {
		console.log('Problems setting enabled '+e);
		console.error('Problems setting enabled',e);
	}
	this.set_moves = function (value) {
		try {
			this.proxy.moves = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting moves '+e);
			console.error('Problems setting moves',e);
		}
	};
	this.moves_changed = function () {
		var value = this.moves;
		return value;
	};
	try {
		this.moves = new MFNode();
	} catch (e) {
		console.log('Problems setting moves '+e);
		console.error('Problems setting moves',e);
	}
	this.set_initialPosition = function (value) {
		try {
			this.proxy.initialPosition = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting initialPosition '+e);
			console.error('Problems setting initialPosition',e);
		}
	};
	this.initialPosition_changed = function () {
		var value = this.initialPosition;
		return value;
	};
	try {
		this.initialPosition = new SFVec3f();
	} catch (e) {
		console.log('Problems setting initialPosition '+e);
		console.error('Problems setting initialPosition',e);
	}
	this.set_initialOrientation = function (value) {
		try {
			this.proxy.initialOrientation = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting initialOrientation '+e);
			console.error('Problems setting initialOrientation',e);
		}
	};
	this.initialOrientation_changed = function () {
		var value = this.initialOrientation;
		return value;
	};
	try {
		this.initialOrientation = new SFRotation();
	} catch (e) {
		console.log('Problems setting initialOrientation '+e);
		console.error('Problems setting initialOrientation',e);
	}
	this.set_initialAimPoint = function (value) {
		try {
			this.proxy.initialAimPoint = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting initialAimPoint '+e);
			console.error('Problems setting initialAimPoint',e);
		}
	};
	this.initialAimPoint_changed = function () {
		var value = this.initialAimPoint;
		return value;
	};
	try {
		this.initialAimPoint = new SFVec3f();
	} catch (e) {
		console.log('Problems setting initialAimPoint '+e);
		console.error('Problems setting initialAimPoint',e);
	}
	this.set_initialFieldOfView = function (value) {
		try {
			this.proxy.initialFieldOfView = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting initialFieldOfView '+e);
			console.error('Problems setting initialFieldOfView',e);
		}
	};
	this.initialFieldOfView_changed = function () {
		var value = this.initialFieldOfView;
		return value;
	};
	try {
		this.initialFieldOfView = new SFFloat();
	} catch (e) {
		console.log('Problems setting initialFieldOfView '+e);
		console.error('Problems setting initialFieldOfView',e);
	}
	this.set_initialFStop = function (value) {
		try {
			this.proxy.initialFStop = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting initialFStop '+e);
			console.error('Problems setting initialFStop',e);
		}
	};
	this.initialFStop_changed = function () {
		var value = this.initialFStop;
		return value;
	};
	try {
		this.initialFStop = new SFFloat();
	} catch (e) {
		console.log('Problems setting initialFStop '+e);
		console.error('Problems setting initialFStop',e);
	}
	this.set_initialFocusDistance = function (value) {
		try {
			this.proxy.initialFocusDistance = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting initialFocusDistance '+e);
			console.error('Problems setting initialFocusDistance',e);
		}
	};
	this.initialFocusDistance_changed = function () {
		var value = this.initialFocusDistance;
		return value;
	};
	try {
		this.initialFocusDistance = new SFFloat();
	} catch (e) {
		console.log('Problems setting initialFocusDistance '+e);
		console.error('Problems setting initialFocusDistance',e);
	}
	this.set_shotDuration = function (value) {
		try {
			this.proxy.shotDuration = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting shotDuration '+e);
			console.error('Problems setting shotDuration',e);
		}
	};
	this.shotDuration_changed = function () {
		var value = this.shotDuration;
		return value;
	};
	try {
		this.shotDuration = new SFTime();
	} catch (e) {
		console.log('Problems setting shotDuration '+e);
		console.error('Problems setting shotDuration',e);
	}
	this.set_isActive = function (value) {
		try {
			this.proxy.isActive = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting isActive '+e);
			console.error('Problems setting isActive',e);
		}
	};
	this.isActive_changed = function () {
		var value = this.isActive;
		return value;
	};
	try {
		this.isActive = new SFBool();
	} catch (e) {
		console.log('Problems setting isActive '+e);
		console.error('Problems setting isActive',e);
	}
	this.set_traceEnabled = function (value) {
		try {
			this.proxy.traceEnabled = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting traceEnabled '+e);
			console.error('Problems setting traceEnabled',e);
		}
	};
	this.traceEnabled_changed = function () {
		var value = this.traceEnabled;
		return value;
	};
	try {
		this.traceEnabled = new SFBool();
	} catch (e) {
		console.log('Problems setting traceEnabled '+e);
		console.error('Problems setting traceEnabled',e);
	}
	this.set_key = function (value) {
		try {
			this.proxy.key = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting key '+e);
			console.error('Problems setting key',e);
		}
	};
	this.key_changed = function () {
		var value = this.key;
		return value;
	};
	try {
		this.key = new MFFloat();
	} catch (e) {
		console.log('Problems setting key '+e);
		console.error('Problems setting key',e);
	}
	this.set_keyValuePosition = function (value) {
		try {
			this.proxy.keyValuePosition = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting keyValuePosition '+e);
			console.error('Problems setting keyValuePosition',e);
		}
	};
	this.keyValuePosition_changed = function () {
		var value = this.keyValuePosition;
		return value;
	};
	try {
		this.keyValuePosition = new MFVec3f();
	} catch (e) {
		console.log('Problems setting keyValuePosition '+e);
		console.error('Problems setting keyValuePosition',e);
	}
	this.set_keyValueOrientation = function (value) {
		try {
			this.proxy.keyValueOrientation = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting keyValueOrientation '+e);
			console.error('Problems setting keyValueOrientation',e);
		}
	};
	this.keyValueOrientation_changed = function () {
		var value = this.keyValueOrientation;
		return value;
	};
	try {
		this.keyValueOrientation = new MFRotation();
	} catch (e) {
		console.log('Problems setting keyValueOrientation '+e);
		console.error('Problems setting keyValueOrientation',e);
	}


ecmascript:
	this.initialize = function () // CameraShotScript
{
//  this.tracePrint ('this.initialize start...');

    // compute this.proxy.shotDuration by summing durations from contained CameraMovement nodes
    this.proxy.shotDuration = 0;
    for (i = 0; i < this.proxy.moves.length; i++)
    {
        this.proxy.shotDuration = this.proxy.shotDuration + this.proxy.moves[i].duration;
    }
    this.alwaysPrint ('number of contained CameraMove nodes=' + this.proxy.moves.length + ', this.proxy.shotDuration=' + this.proxy.shotDuration + ' seconds');

//  this.tracePrint ('... this.initialize() complete');
}
;

	this.set_description = function (eventValue) // input event received for inputOutput field
{
    this.proxy.description = eventValue;
}
;

	this.set_enabled = function (eventValue) // input event received for inputOutput field
{
    this.proxy.enabled = eventValue;
}
;

	this.set_moves = function (eventValue) // input event received for inputOutput field
{
    this.proxy.moves = eventValue;
}
;

	this.set_initialPosition = function (eventValue) // input event received for inputOutput field
{
    this.proxy.initialPosition = eventValue;
}
;

	this.set_initialOrientation = function (eventValue) // input event received for inputOutput field
{
    this.proxy.initialOrientation = eventValue;
}
;

	this.set_initialAimPoint = function (eventValue) // input event received for inputOutput field
{
    this.proxy.initialAimPoint = eventValue;
}
;

	this.set_initialFieldOfView = function (eventValue) // input event received for inputOutput field
{
    this.proxy.initialFieldOfView = eventValue;
}
;

	this.set_initialFStop = function (eventValue) // input event received for inputOutput field
{
    this.proxy.initialFStop = eventValue;
}
;

	this.set_initialFocusDistance = function (eventValue) // input event received for inputOutput field
{
    this.proxy.initialFocusDistance = eventValue;
}
;

	this.set_key = function (eventValue) // input event received for inputOutput field
{
    this.proxy.key = eventValue;
}
;

	this.set_keyValuePosition = function (eventValue) // input event received for inputOutput field
{
    this.proxy.keyValuePosition = eventValue;
}
;

	this.set_keyValueOrientation = function (eventValue) // input event received for inputOutput field
{
    this.proxy.keyValueOrientation = eventValue;
}

// TODO consider metho;

	this.tracePrint = function (outputValue)
{
	if (this.proxy.traceEnabled) this.alwaysPrint (outputValue);
};

	this.alwaysPrint = function (outputValue)
{
	// try to ensure outputValue is converted to string despite browser idiosyncracies
    var outputString = outputValue.toString(); // utility functino according to spec
    if (outputString == null) outputString = outputValue; // direct cast

    if  (this.proxy.description.length > 0)
         console.error ('[CameraShot: ' + this.proxy.description + '] ' + outputString + '');
    else
         console.error ('[CameraShot] ' + outputString + '');
}

;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraShotScript'] = new X3DJSON['Script']['Scene']['../data/CameraPrototypes.json']['CameraShotScript']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraShotScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraShotScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraShotScript']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraShotScript']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraShotScript'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraShotScript']['ACTION'],X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraShotScript']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraShotScript'].initialize === "function") X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraShotScript'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/CameraPrototypes.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/CameraPrototypes.json'] = {};
}

X3DJSON['Script']['Scene']['../data/CameraPrototypes.json']['CameraMovementScript'] = function() {
	this.set_description = function (value) {
		try {
			this.proxy.description = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting description '+e);
			console.error('Problems setting description',e);
		}
	};
	this.description_changed = function () {
		var value = this.description;
		return value;
	};
	try {
		this.description = new SFString();
	} catch (e) {
		console.log('Problems setting description '+e);
		console.error('Problems setting description',e);
	}
	this.set_enabled = function (value) {
		try {
			this.proxy.enabled = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting enabled '+e);
			console.error('Problems setting enabled',e);
		}
	};
	this.enabled_changed = function () {
		var value = this.enabled;
		return value;
	};
	try {
		this.enabled = new SFBool();
	} catch (e) {
		console.log('Problems setting enabled '+e);
		console.error('Problems setting enabled',e);
	}
	this.set_duration = function (value) {
		try {
			this.proxy.duration = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting duration '+e);
			console.error('Problems setting duration',e);
		}
	};
	this.duration_changed = function () {
		var value = this.duration;
		return value;
	};
	try {
		this.duration = new SFFloat();
	} catch (e) {
		console.log('Problems setting duration '+e);
		console.error('Problems setting duration',e);
	}
	this.set_goalPosition = function (value) {
		try {
			this.proxy.goalPosition = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting goalPosition '+e);
			console.error('Problems setting goalPosition',e);
		}
	};
	this.goalPosition_changed = function () {
		var value = this.goalPosition;
		return value;
	};
	try {
		this.goalPosition = new SFVec3f();
	} catch (e) {
		console.log('Problems setting goalPosition '+e);
		console.error('Problems setting goalPosition',e);
	}
	this.set_goalOrientation = function (value) {
		try {
			this.proxy.goalOrientation = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting goalOrientation '+e);
			console.error('Problems setting goalOrientation',e);
		}
	};
	this.goalOrientation_changed = function () {
		var value = this.goalOrientation;
		return value;
	};
	try {
		this.goalOrientation = new SFRotation();
	} catch (e) {
		console.log('Problems setting goalOrientation '+e);
		console.error('Problems setting goalOrientation',e);
	}
	this.set_tracking = function (value) {
		try {
			this.proxy.tracking = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting tracking '+e);
			console.error('Problems setting tracking',e);
		}
	};
	this.tracking_changed = function () {
		var value = this.tracking;
		return value;
	};
	try {
		this.tracking = new SFBool();
	} catch (e) {
		console.log('Problems setting tracking '+e);
		console.error('Problems setting tracking',e);
	}
	this.set_goalAimPoint = function (value) {
		try {
			this.proxy.goalAimPoint = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting goalAimPoint '+e);
			console.error('Problems setting goalAimPoint',e);
		}
	};
	this.goalAimPoint_changed = function () {
		var value = this.goalAimPoint;
		return value;
	};
	try {
		this.goalAimPoint = new SFVec3f();
	} catch (e) {
		console.log('Problems setting goalAimPoint '+e);
		console.error('Problems setting goalAimPoint',e);
	}
	this.set_goalFieldOfView = function (value) {
		try {
			this.proxy.goalFieldOfView = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting goalFieldOfView '+e);
			console.error('Problems setting goalFieldOfView',e);
		}
	};
	this.goalFieldOfView_changed = function () {
		var value = this.goalFieldOfView;
		return value;
	};
	try {
		this.goalFieldOfView = new SFFloat();
	} catch (e) {
		console.log('Problems setting goalFieldOfView '+e);
		console.error('Problems setting goalFieldOfView',e);
	}
	this.set_goalFStop = function (value) {
		try {
			this.proxy.goalFStop = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting goalFStop '+e);
			console.error('Problems setting goalFStop',e);
		}
	};
	this.goalFStop_changed = function () {
		var value = this.goalFStop;
		return value;
	};
	try {
		this.goalFStop = new SFFloat();
	} catch (e) {
		console.log('Problems setting goalFStop '+e);
		console.error('Problems setting goalFStop',e);
	}
	this.set_goalFocusDistance = function (value) {
		try {
			this.proxy.goalFocusDistance = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting goalFocusDistance '+e);
			console.error('Problems setting goalFocusDistance',e);
		}
	};
	this.goalFocusDistance_changed = function () {
		var value = this.goalFocusDistance;
		return value;
	};
	try {
		this.goalFocusDistance = new SFFloat();
	} catch (e) {
		console.log('Problems setting goalFocusDistance '+e);
		console.error('Problems setting goalFocusDistance',e);
	}
	this.set_isActive = function (value) {
		try {
			this.proxy.isActive = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting isActive '+e);
			console.error('Problems setting isActive',e);
		}
	};
	this.isActive_changed = function () {
		var value = this.isActive;
		return value;
	};
	try {
		this.isActive = new SFBool();
	} catch (e) {
		console.log('Problems setting isActive '+e);
		console.error('Problems setting isActive',e);
	}
	this.set_traceEnabled = function (value) {
		try {
			this.proxy.traceEnabled = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting traceEnabled '+e);
			console.error('Problems setting traceEnabled',e);
		}
	};
	this.traceEnabled_changed = function () {
		var value = this.traceEnabled;
		return value;
	};
	try {
		this.traceEnabled = new SFBool();
	} catch (e) {
		console.log('Problems setting traceEnabled '+e);
		console.error('Problems setting traceEnabled',e);
	}


ecmascript:
	this.initialize = function () // CameraMovementScript
{
//  this.tracePrint ('this.initialize start...');
    this.alwaysPrint ('this.initialize this.proxy.goalPosition=' + this.proxy.goalPosition.toString() + ', this.proxy.goalOrientation=' + this.proxy.goalOrientation.toString() +
                           ', this.proxy.goalAimPoint=' + this.proxy.goalAimPoint.toString() // + ', this.proxy.tracking=' + this.proxy.tracking.toString()
                           );
    if (this.proxy.duration < 0)
    {
       this.alwaysPrint ('error: negative this.proxy.duration=' + this.proxy.duration + ', reset to 0 and ignored');
       this.proxy.duration = 0;
    }
    else if (this.proxy.duration == 0)
    {
       this.alwaysPrint ('warning: this.proxy.duration=0, nothing to do!');
    }
    this.tracePrint ('... this.initialize complete');
}
;

	this.set_goalAimPoint = function (eventValue) // input event received for inputOutput field
{
    goalAimPoint_changed = eventValue;
    this.tracePrint ('this.proxy.goalAimPoint=' + this.proxy.goalAimPoint.toString());

    // updated this.proxy.goalOrientation this.proxy.tracking is handled by Camera recomputing the OrientationInterpolator
}
;

	this.set_description = function (eventValue) // input event received for inputOutput field
{
    this.proxy.description = eventValue;
}
;

	this.set_enabled = function (eventValue) // input event received for inputOutput field
{
    this.proxy.enabled = eventValue;
}
;

	this.set_duration = function (eventValue) // input event received for inputOutput field
{
    this.proxy.duration = eventValue;
}
;

	this.set_goalPosition = function (eventValue) // input event received for inputOutput field
{
    this.proxy.goalPosition = eventValue;
}
;

	this.set_goalOrientation = function (eventValue) // input event received for inputOutput field
{
    this.proxy.goalOrientation = eventValue;
}
;

	this.set_tracking = function (eventValue) // input event received for inputOutput field
{
    this.proxy.tracking = eventValue;
}
;

	this.set_goalFieldOfView = function (eventValue) // input event received for inputOutput field
{
    this.proxy.goalFieldOfView = eventValue;
}
;

	this.set_goalFStop = function (eventValue) // input event received for inputOutput field
{
    this.proxy.goalFStop = eventValue;
}
;

	this.set_goalFocusDistance = function (eventValue) // input event received for inputOutput field
{
    this.proxy.goalFocusDistance = eventValue;
}

// TODO consider met;

	this.tracePrint = function (outputValue)
{
	if (this.proxy.traceEnabled) this.alwaysPrint (outputValue);
}
;

	this.alwaysPrint = function (outputValue)
{
	// try to ensure outputValue is converted to string despite browser idiosyncracies
    var outputString = outputValue.toString(); // utility functino according to spec
    if (outputString == null) outputString = outputValue; // direct cast

    if  (this.proxy.description.length > 0)
         console.error ('[CameraMovement: ' + this.proxy.description + '] ' + outputString + '');
    else
         console.error ('[CameraMovement] ' + outputString + '');
}

;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraMovementScript'] = new X3DJSON['Script']['Scene']['../data/CameraPrototypes.json']['CameraMovementScript']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraMovementScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraMovementScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraMovementScript']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraMovementScript']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraMovementScript'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraMovementScript']['ACTION'],X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraMovementScript']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraMovementScript'].initialize === "function") X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraMovementScript'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/CameraPrototypes.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/CameraPrototypes.json'] = {};
}

X3DJSON['Script']['Scene']['../data/CameraPrototypes.json']['OfflineRenderScript'] = function() {
	this.set_description = function (value) {
		try {
			this.proxy.description = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting description '+e);
			console.error('Problems setting description',e);
		}
	};
	this.description_changed = function () {
		var value = this.description;
		return value;
	};
	try {
		this.description = new SFString();
	} catch (e) {
		console.log('Problems setting description '+e);
		console.error('Problems setting description',e);
	}
	this.set_enabled = function (value) {
		try {
			this.proxy.enabled = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting enabled '+e);
			console.error('Problems setting enabled',e);
		}
	};
	this.enabled_changed = function () {
		var value = this.enabled;
		return value;
	};
	try {
		this.enabled = new SFBool();
	} catch (e) {
		console.log('Problems setting enabled '+e);
		console.error('Problems setting enabled',e);
	}
	this.set_frameRate = function (value) {
		try {
			this.proxy.frameRate = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting frameRate '+e);
			console.error('Problems setting frameRate',e);
		}
	};
	this.frameRate_changed = function () {
		var value = this.frameRate;
		return value;
	};
	try {
		this.frameRate = new SFFloat();
	} catch (e) {
		console.log('Problems setting frameRate '+e);
		console.error('Problems setting frameRate',e);
	}
	this.set_frameSize = function (value) {
		try {
			this.proxy.frameSize = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting frameSize '+e);
			console.error('Problems setting frameSize',e);
		}
	};
	this.frameSize_changed = function () {
		var value = this.frameSize;
		return value;
	};
	try {
		this.frameSize = new SFVec2f();
	} catch (e) {
		console.log('Problems setting frameSize '+e);
		console.error('Problems setting frameSize',e);
	}
	this.set_pixelAspectRatio = function (value) {
		try {
			this.proxy.pixelAspectRatio = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting pixelAspectRatio '+e);
			console.error('Problems setting pixelAspectRatio',e);
		}
	};
	this.pixelAspectRatio_changed = function () {
		var value = this.pixelAspectRatio;
		return value;
	};
	try {
		this.pixelAspectRatio = new SFFloat();
	} catch (e) {
		console.log('Problems setting pixelAspectRatio '+e);
		console.error('Problems setting pixelAspectRatio',e);
	}
	this.set_startTime = function (value) {
		try {
			this.proxy.startTime = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting startTime '+e);
			console.error('Problems setting startTime',e);
		}
	};
	this.startTime_changed = function () {
		var value = this.startTime;
		return value;
	};
	try {
		this.startTime = undefined;
	} catch (e) {
		console.log('Problems setting startTime '+e);
		console.error('Problems setting startTime',e);
	}
	this.set_progress = function (value) {
		try {
			this.proxy.progress = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting progress '+e);
			console.error('Problems setting progress',e);
		}
	};
	this.progress_changed = function () {
		var value = this.progress;
		return value;
	};
	try {
		this.progress = new SFFloat();
	} catch (e) {
		console.log('Problems setting progress '+e);
		console.error('Problems setting progress',e);
	}
	this.set_renderCompleteTime = function (value) {
		try {
			this.proxy.renderCompleteTime = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting renderCompleteTime '+e);
			console.error('Problems setting renderCompleteTime',e);
		}
	};
	this.renderCompleteTime_changed = function () {
		var value = this.renderCompleteTime;
		return value;
	};
	try {
		this.renderCompleteTime = new SFTime();
	} catch (e) {
		console.log('Problems setting renderCompleteTime '+e);
		console.error('Problems setting renderCompleteTime',e);
	}
	this.set_movieFormat = function (value) {
		try {
			this.proxy.movieFormat = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting movieFormat '+e);
			console.error('Problems setting movieFormat',e);
		}
	};
	this.movieFormat_changed = function () {
		var value = this.movieFormat;
		return value;
	};
	try {
		this.movieFormat = new MFString();
	} catch (e) {
		console.log('Problems setting movieFormat '+e);
		console.error('Problems setting movieFormat',e);
	}
	this.set_imageFormat = function (value) {
		try {
			this.proxy.imageFormat = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting imageFormat '+e);
			console.error('Problems setting imageFormat',e);
		}
	};
	this.imageFormat_changed = function () {
		var value = this.imageFormat;
		return value;
	};
	try {
		this.imageFormat = new MFString();
	} catch (e) {
		console.log('Problems setting imageFormat '+e);
		console.error('Problems setting imageFormat',e);
	}
	this.set_traceEnabled = function (value) {
		try {
			this.proxy.traceEnabled = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting traceEnabled '+e);
			console.error('Problems setting traceEnabled',e);
		}
	};
	this.traceEnabled_changed = function () {
		var value = this.traceEnabled;
		return value;
	};
	try {
		this.traceEnabled = new SFBool();
	} catch (e) {
		console.log('Problems setting traceEnabled '+e);
		console.error('Problems setting traceEnabled',e);
	}


ecmascript:
	this.initialize = function () // OfflineRenderScript
{
//  this.tracePrint ('this.initialize start...');

    this.tracePrint ('... this.initialize complete');
}
;

	this.set_description = function (eventValue) // input event received for inputOutput field
{
    this.proxy.description = eventValue;
}
;

	this.set_enabled = function (eventValue) // input event received for inputOutput field
{
    this.proxy.enabled = eventValue;
}
;

	this.set_frameRate = function (eventValue) // input event received for inputOutput field
{
    this.proxy.frameRate = eventValue;
}
;

	this.set_frameSize = function (eventValue) // input event received for inputOutput field
{
    this.proxy.frameSize = eventValue;
}
;

	this.set_pixelAspectRatio = function (eventValue) // input event received for inputOutput field
{
    this.proxy.pixelAspectRatio = eventValue;
}
;

	this.set_startTime = function (eventValue) // input event received for inputOnly field
{
   // do something with input eventValue;
}
;

	this.tracePrint = function (outputValue)
{
	if (this.proxy.traceEnabled) this.alwaysPrint (outputValue);
}
;

	this.alwaysPrint = function (outputValue)
{
	// try to ensure outputValue is converted to string despite browser idiosyncracies
    var outputString = outputValue.toString(); // utility functino according to spec
    if (outputString == null) outputString = outputValue; // direct cast

    if  (this.proxy.description.length > 0)
         console.error ('[OfflineRender: ' + this.proxy.description + '] ' + outputString + '');
    else
         console.error ('[OfflineRender] ' + outputString + '');
}

;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['OfflineRenderScript'] = new X3DJSON['Script']['Scene']['../data/CameraPrototypes.json']['OfflineRenderScript']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['OfflineRenderScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['OfflineRenderScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['OfflineRenderScript']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['OfflineRenderScript']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['OfflineRenderScript'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['OfflineRenderScript']['ACTION'],X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['OfflineRenderScript']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['OfflineRenderScript'].initialize === "function") X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['OfflineRenderScript'].initialize();
    if (X3DJSON.nodeUtil("Scene","CameraPositionInterpolator")) {
X3DJSON.nodeUtil("Scene","CameraPositionInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","CameraOrientationInterpolator")) {
X3DJSON.nodeUtil("Scene","CameraOrientationInterpolator").addEventListener('outputchange', function(event) {
}, false);
}
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript']['ACTION']['position'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript']['ACTION']['position'] = [];
}
X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript']['ACTION']['position'].push(function(property, value) {
		if (property === 'position') {
			X3DJSON.nodeUtil("Scene","CameraViewpoint","position",typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].position === "function" ? X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].position() : X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].position, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","CameraViewpoint","position",typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].position === "function" ? X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].position() : X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].position, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript']['ACTION']['orientation'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript']['ACTION']['orientation'] = [];
}
X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript']['ACTION']['orientation'].push(function(property, value) {
		if (property === 'orientation') {
			X3DJSON.nodeUtil("Scene","CameraViewpoint","orientation",typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].orientation === "function" ? X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].orientation() : X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].orientation, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","CameraViewpoint","orientation",typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].orientation === "function" ? X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].orientation() : X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].orientation, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript']['ACTION']['isActive'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript']['ACTION']['isActive'] = [];
}
X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript']['ACTION']['isActive'].push(function(property, value) {
		if (property === 'isActive') {
			X3DJSON.nodeUtil("Scene","CameraViewpoint","bind",typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].isActive === "function" ? X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].isActive() : X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].isActive, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","CameraViewpoint","bind",typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].isActive === "function" ? X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].isActive() : X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].isActive, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript']['ACTION']['isActive'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript']['ACTION']['isActive'] = [];
}
X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript']['ACTION']['isActive'].push(function(property, value) {
		if (property === 'isActive') {
			X3DJSON.nodeUtil("Scene","CameraNavInfo","bind",typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].isActive === "function" ? X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].isActive() : X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].isActive, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","CameraNavInfo","bind",typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].isActive === "function" ? X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].isActive() : X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].isActive, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript']['ACTION']['isActive'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript']['ACTION']['isActive'] = [];
}
X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript']['ACTION']['isActive'].push(function(property, value) {
		if (property === 'isActive') {
			X3DJSON.nodeUtil("Scene","CameraDirectionalLight","on",typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].isActive === "function" ? X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].isActive() : X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].isActive, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","CameraDirectionalLight","on",typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].isActive === "function" ? X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].isActive() : X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].isActive, __eventTime);
			X3DJSON.nodeUtil("Scene","CameraViewpoint","position",typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].position === "function" ? X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].position() : X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].position, __eventTime);
			X3DJSON.nodeUtil("Scene","CameraViewpoint","orientation",typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].orientation === "function" ? X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].orientation() : X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].orientation, __eventTime);
			X3DJSON.nodeUtil("Scene","CameraViewpoint","bind",typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].isActive === "function" ? X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].isActive() : X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].isActive, __eventTime);
			X3DJSON.nodeUtil("Scene","CameraNavInfo","bind",typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].isActive === "function" ? X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].isActive() : X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].isActive, __eventTime);
			X3DJSON.nodeUtil("Scene","CameraDirectionalLight","on",typeof X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].isActive === "function" ? X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].isActive() : X3DJSON['Obj']['Scene']['../data/CameraPrototypes.json']['CameraScript'].isActive, __eventTime);