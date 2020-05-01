var x3dom = require('../node/fields.js');
if (typeof X3DJSON === 'undefined') {
	var X3DJSON = {};
}
if (typeof __eventTime === 'undefined') {
	var __eventTime = 0;
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
if (typeof $ !== 'function') {
	$ = function() { return { attr : function() {}, 0 : null }; };
}
X3DJSON.nodeUtil = function(selector, node, field, value) {
		if (typeof selector === 'undefined') {
			selector = '';
		} else {
			selector = selector+' ';
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
if (typeof X3DJSON['Scene../data/ArchPrototype.json'] === 'undefined') {
	X3DJSON['Scene../data/ArchPrototype.json'] = {};
}

if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/ArchPrototype.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/ArchPrototype.json'] = {};
}

X3DJSON['Script']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'] = function() {
	this.set_clearSpanWidth = function (value) {
		try {
			this.proxy.clearSpanWidth = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting clearSpanWidth '+e);
			console.error('Problems setting clearSpanWidth',e);
		}
	};
	this.clearSpanWidth_changed = function () {
		var value = this.clearSpanWidth;
		return value;
	};
	try {
		this.clearSpanWidth = new SFFloat(5);
	} catch (e) {
		console.log('Problems setting clearSpanWidth '+e);
		console.error('Problems setting clearSpanWidth',e);
	}
	this.set_riseHeight = function (value) {
		try {
			this.proxy.riseHeight = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting riseHeight '+e);
			console.error('Problems setting riseHeight',e);
		}
	};
	this.riseHeight_changed = function () {
		var value = this.riseHeight;
		return value;
	};
	try {
		this.riseHeight = new SFFloat(2.5);
	} catch (e) {
		console.log('Problems setting riseHeight '+e);
		console.error('Problems setting riseHeight',e);
	}
	this.set_depth = function (value) {
		try {
			this.proxy.depth = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting depth '+e);
			console.error('Problems setting depth',e);
		}
	};
	this.depth_changed = function () {
		var value = this.depth;
		return value;
	};
	try {
		this.depth = new SFFloat(2);
	} catch (e) {
		console.log('Problems setting depth '+e);
		console.error('Problems setting depth',e);
	}
	this.set_topAbutmentHeight = function (value) {
		try {
			this.proxy.topAbutmentHeight = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting topAbutmentHeight '+e);
			console.error('Problems setting topAbutmentHeight',e);
		}
	};
	this.topAbutmentHeight_changed = function () {
		var value = this.topAbutmentHeight;
		return value;
	};
	try {
		this.topAbutmentHeight = new SFFloat(0.6);
	} catch (e) {
		console.log('Problems setting topAbutmentHeight '+e);
		console.error('Problems setting topAbutmentHeight',e);
	}
	this.set_pierWidth = function (value) {
		try {
			this.proxy.pierWidth = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting pierWidth '+e);
			console.error('Problems setting pierWidth',e);
		}
	};
	this.pierWidth_changed = function () {
		var value = this.pierWidth;
		return value;
	};
	try {
		this.pierWidth = new SFFloat(1);
	} catch (e) {
		console.log('Problems setting pierWidth '+e);
		console.error('Problems setting pierWidth',e);
	}
	this.set_pierHeight = function (value) {
		try {
			this.proxy.pierHeight = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting pierHeight '+e);
			console.error('Problems setting pierHeight',e);
		}
	};
	this.pierHeight_changed = function () {
		var value = this.pierHeight;
		return value;
	};
	try {
		this.pierHeight = new SFFloat(2);
	} catch (e) {
		console.log('Problems setting pierHeight '+e);
		console.error('Problems setting pierHeight',e);
	}
	this.set_archHalf = function (value) {
		try {
			this.proxy.archHalf = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting archHalf '+e);
			console.error('Problems setting archHalf',e);
		}
	};
	this.archHalf_changed = function () {
		var value = this.archHalf;
		return value;
	};
	try {
		this.archHalf = new SFBool(false);
	} catch (e) {
		console.log('Problems setting archHalf '+e);
		console.error('Problems setting archHalf',e);
	}
	this.set_archHalfExtensionWidth = function (value) {
		try {
			this.proxy.archHalfExtensionWidth = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting archHalfExtensionWidth '+e);
			console.error('Problems setting archHalfExtensionWidth',e);
		}
	};
	this.archHalfExtensionWidth_changed = function () {
		var value = this.archHalfExtensionWidth;
		return value;
	};
	try {
		this.archHalfExtensionWidth = new SFFloat(0);
	} catch (e) {
		console.log('Problems setting archHalfExtensionWidth '+e);
		console.error('Problems setting archHalfExtensionWidth',e);
	}
	this.set_onlyIntrados = function (value) {
		try {
			this.proxy.onlyIntrados = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting onlyIntrados '+e);
			console.error('Problems setting onlyIntrados',e);
		}
	};
	this.onlyIntrados_changed = function () {
		var value = this.onlyIntrados;
		return value;
	};
	try {
		this.onlyIntrados = new SFBool(false);
	} catch (e) {
		console.log('Problems setting onlyIntrados '+e);
		console.error('Problems setting onlyIntrados',e);
	}
	this.set_archFilled = function (value) {
		try {
			this.proxy.archFilled = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting archFilled '+e);
			console.error('Problems setting archFilled',e);
		}
	};
	this.archFilled_changed = function () {
		var value = this.archFilled;
		return value;
	};
	try {
		this.archFilled = new SFBool(false);
	} catch (e) {
		console.log('Problems setting archFilled '+e);
		console.error('Problems setting archFilled',e);
	}
	this.set_archHalfFilled = function (value) {
		try {
			this.proxy.archHalfFilled = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting archHalfFilled '+e);
			console.error('Problems setting archHalfFilled',e);
		}
	};
	this.archHalfFilled_changed = function () {
		var value = this.archHalfFilled;
		return value;
	};
	try {
		this.archHalfFilled = new SFBool(false);
	} catch (e) {
		console.log('Problems setting archHalfFilled '+e);
		console.error('Problems setting archHalfFilled',e);
	}
	this.set_lintel = function (value) {
		try {
			this.proxy.lintel = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting lintel '+e);
			console.error('Problems setting lintel',e);
		}
	};
	this.lintel_changed = function () {
		var value = this.lintel;
		return value;
	};
	try {
		this.lintel = new SFBool(false);
	} catch (e) {
		console.log('Problems setting lintel '+e);
		console.error('Problems setting lintel',e);
	}
	this.set_computedScale = function (value) {
		try {
			this.proxy.computedScale = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting computedScale '+e);
			console.error('Problems setting computedScale',e);
		}
	};
	this.computedScale_changed = function () {
		var value = this.computedScale;
		return value;
	};
	try {
		this.computedScale = new SFVec3f();
	} catch (e) {
		console.log('Problems setting computedScale '+e);
		console.error('Problems setting computedScale',e);
	}
	this.set_pointOut = function (value) {
		try {
			this.proxy.pointOut = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting pointOut '+e);
			console.error('Problems setting pointOut',e);
		}
	};
	this.pointOut_changed = function () {
		var value = this.pointOut;
		return value;
	};
	try {
		this.pointOut = new MFVec3f();
	} catch (e) {
		console.log('Problems setting pointOut '+e);
		console.error('Problems setting pointOut',e);
	}
	this.set_indexOut = function (value) {
		try {
			this.proxy.indexOut = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting indexOut '+e);
			console.error('Problems setting indexOut',e);
		}
	};
	this.indexOut_changed = function () {
		var value = this.indexOut;
		return value;
	};
	try {
		this.indexOut = new MFInt32();
	} catch (e) {
		console.log('Problems setting indexOut '+e);
		console.error('Problems setting indexOut',e);
	}
// ArchPrototypeScript.js

// clearSpanWidth SFFloat initializeOnly; user or default input for clearSpanWidth parameter
// riseHeight SFFloat initializeOnly; user or default input for riseHeight parameter
// depth SFFloat initializeOnly; user or default input for depth parameter
// topAbutmentHeight SFFloat initializeOnly; user or default input for topAbutmentHeight parameter
// pierWidth SFFloat initializeOnly; user or default input for pierWidth parameter
// pierHeight SFFloat initializeOnly; user or default input for pierHeight parameter
// archHalf SFBool initializeOnly; user or default input for archHalf parameter
// archHalfExtensionWidth SFFloat initializeOnly; user or default input for archHalfExtensionWidth parameter
// onlyIntrados SFBool initializeOnly; user or default input for onlyIntrados parameter
// archFilled SFBool initializeOnly; user or default input for archFilled parameter
// archHalfFilled SFBool initializeOnly; user or default input for archHalfFilled parameter
// lintel SFBool initializeOnly; user or default input for lintel parameter
// computedScale SFVec3f outputOnly; computedScale: modify scale field - NOTE it is not used to modify the whole arch, but to modify clearSpanWidth, riseHeight, depth. It does not affect topAbutmentHeight, pierWidth, pierHeight, archHalfExtensionWidth
// pointOut MFVec3f outputOnly; send computed points to the Coordinate node
// indexOut MFInt32 outputOnly; send computed indices to the IndexedFaceSet node
              
// Author:      Michele Foti, Don Brutzman
// Created:     15 December 2014
// Revised:     6 February 2015
// Reference:   ArchModelingDiagrams.pdf

	this.initialize = function () {

    // INPUT:
    // Create the Arch with default parameters.
    // Two arrays follow: i[] creates the indices (IndexedFaceSet > coordIndex field); p[] creates the coordinate points (Coordinate > point field)
   
    var d,e,g,k,m,o,r,t; // index variables
    // var proxy.depth=0;
    
    var i = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 153, -1, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 144, -1, 136, 137, 0, 139, -1,  0, 139, 152, 153, -1,  152, 135, 155, 153, -1,  149, 31, 153, 155, -1,  149, 31, 144, 147, -1, 134, 147, 144, 145, -1,  145, 144, 62, 141, -1,  132, 133, 141, 62, -1, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 150, -1, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 143, -1, 130, 131, 63, 138, -1,   63, 138, 151, 150, -1,   150, 151, 129, 154, -1,  94, 150, 154, 148, -1,   148, 94, 143, 146, -1, 142, 128, 146, 143, -1, 140, 125, 143, 142, -1, 125, 126, 127, 140, -1, 0, 63, 64, 1, -1, 1, 64, 65, 2, -1, 2, 65, 66, 3, -1, 3, 66, 67, 4, -1, 4, 67, 68, 5, -1, 5, 68, 69, 6, -1, 6, 69, 70, 7, -1, 7, 70, 71, 8, -1, 8, 71, 72, 9, -1, 9, 72, 73, 10, -1, 10, 73, 74, 11, -1, 11, 74, 75, 12, -1, 12, 75, 76, 13, -1, 13, 76, 77, 14, -1, 14, 77, 78, 15, -1, 15, 78, 79, 16, -1, 16, 79, 80, 17, -1, 17, 80, 81, 18, -1, 18, 81, 82, 19, -1, 19, 82, 83, 20, -1, 20, 83, 84, 21, -1, 21, 84, 85, 22, -1, 22, 85, 86, 23, -1, 23, 86, 87, 24, -1, 24, 87, 88, 25, -1, 25, 88, 89, 26, -1, 26, 89, 90, 27, -1, 27, 90, 91, 28, -1, 28, 91, 92, 29, -1, 29, 92, 93, 30, -1, 30, 93, 94, 31, -1,  31, 94, 95, 32, -1, 32, 95, 96, 33, -1, 33, 96, 97, 34, -1, 34, 97, 98, 35, -1, 35, 98, 99, 36, -1, 36, 99, 100, 37, -1, 37, 100, 101, 38, -1, 38, 101, 102, 39, -1, 39, 102, 103, 40, -1, 40, 103, 104, 41, -1, 41, 104, 105, 42, -1, 42, 105, 106, 43, -1, 43, 106, 107, 44, -1, 44, 107, 108, 45, -1, 45, 108, 109, 46, -1, 46, 109, 110, 47, -1, 47, 110, 111, 48, -1, 48, 111, 112, 49, -1, 49, 112, 113, 50, -1, 50, 113, 114, 51, -1, 51, 114, 115, 52, -1, 52, 115, 116, 53, -1, 53, 116, 117, 54, -1, 54, 117, 118, 55, -1, 55, 118, 119, 56, -1, 56, 119, 120, 57, -1, 57, 120, 121, 58, -1, 58, 121, 122, 59, -1, 59, 122, 123, 60, -1, 60, 123, 124, 61, -1, 61, 124, 125, 62, -1, 0, 63, 131, 137, -1, 131, 130, 136, 137, -1,  130, 136, 139, 138, -1, 138, 139, 152, 151, -1, 151, 152, 135, 129, -1, 129, 135, 155, 154, -1, 148, 154, 155, 149, -1, 148, 149, 147, 146, -1, 146, 147, 134, 128, -1, 128, 134, 145, 142, -1, 140, 141, 145, 142, -1, 127, 133, 141, 140, -1, 127, 126, 132, 133, -1, 126, 132, 62, 125, -1, 63, 138, 139, 0, -1, 150, 151, 152, 153, -1, 150, 153, 31, 94, -1, 31, 94, 143, 144, -1, 142, 143, 144, 145, -1,  140, 125, 62, 141, -1, 0, 63, 150, 153, -1, 150, 153, 155, 154, -1, 31, 94, 148, 149, -1, 143, 144, 147, 146, -1, 62, 125, 143, 144, -1];
 	 
    var p = [2, 0, 0, 1.9974984355438178, 0.1, 0, 1.98997487421324, 0.2, 0, 1.977371993328519, 0.3, 0, 1.9595917942265423, 0.4, 0, 1.9364916731037084, 0.5, 0, 1.9078784028338912, 0.6, 0, 1.8734993995195193, 0.7, 0, 1.833030277982336, 0.8, 0, 1.786057109949175, 0.9, 0, 1.7320508075688775, 1, 0, 1.6703293088490067, 1.1, 0, 1.60, 1.2, 0, 1.5198684153570664, 1.3, 0, 1.42828568570857, 1.4, 0, 1.3228756555322953, 1.5, 0, 1.20, 1.6, 0, 1.0535653752852738, 1.7, 0, 0.9020947843768965, 1.785, 0, 0.7599342076785332, 1.85, 0, 0.6244997998398398, 1.9, 0, 0.5425633603552677, 1.925, 0, 0.4444097208657794, 1.95, 0, 0.36181625170796194, 1.967, 0, 0.2821347195933173, 1.98, 0, 0.19974984355438343,  1.99, 0, 0.16718552568927703,  1.993, 0, 0.14133294025102578, 1.995, 0, 0.10950342460398415, 1.997, 0, 0.08942035562443252, 1.998, 0, 0.06323764701505419, 1.999, 0, 0, 2, 0, -0.06323764701505419, 1.999, 0, -0.08942035562443252, 1.998, 0, -0.10950342460398415, 1.997, 0, -0.14133294025102578, 1.995, 0, -0.16718552568927703, 1.993, 0, -0.19974984355438343, 1.99, 0, -0.2821347195933173, 1.98, 0, -0.36181625170796194,  1.967, 0, -0.4444097208657794, 1.95, 0, -0.5425633603552677, 1.925, 0, -0.6244997998398398, 1.9, 0, -0.7599342076785332, 1.85, 0, -0.9020947843768965, 1.785, 0, -1.0535653752852738, 1.7, 0, -1.20, 1.6, 0, -1.3228756555322953, 1.5, 0, -1.42828568570857, 1.4, 0, -1.5198684153570664, 1.3, 0, -1.60, 1.2, 0, -1.6703293088490067, 1.1, 0, -1.7320508075688775, 1, 0, -1.786057109949175, 0.9, 0, -1.833030277982336, 0.8, 0, -1.8734993995195193, 0.7, 0, -1.9078784028338912, 0.6, 0, -1.9364916731037084, 0.5, 0, -1.9595917942265423, 0.4, 0, -1.977371993328519, 0.3, 0, -1.98997487421324, 0.2, 0, -1.9974984355438178, 0.1, 0, -2, 0, 0, 2, 0, 3, 1.9974984355438178, 0.1, 3, 1.98997487421324, 0.2, 3, 1.977371993328519, 0.3, 3, 1.9595917942265423, 0.4, 3, 1.9364916731037084, 0.5, 3, 1.9078784028338912, 0.6, 3, 1.8734993995195193, 0.7, 3, 1.833030277982336, 0.8, 3, 1.786057109949175, 0.9, 3, 1.7320508075688775, 1, 3, 1.6703293088490067, 1.1, 3, 1.60, 1.2, 3, 1.5198684153570664, 1.3, 3, 1.42828568570857, 1.4, 3, 1.3228756555322953, 1.5, 3, 1.20, 1.6, 3, 1.0535653752852738, 1.7, 3, 0.9020947843768965, 1.785, 3,	0.7599342076785332, 1.85, 3, 0.6244997998398398, 1.9, 3, 0.5425633603552677, 1.925, 3, 0.4444097208657794, 1.95, 3, 0.36181625170796194, 1.967, 3, 0.2821347195933173, 1.98, 3, 0.19974984355438343,  1.99, 3, 0.16718552568927703,  1.993, 3, 0.14133294025102578, 1.995, 3, 0.10950342460398415, 1.997, 3, 0.08942035562443252, 1.998, 3, 0.06323764701505419, 1.999, 3, 0, 2, 3, -0.06323764701505419, 1.999, 3, -0.08942035562443252, 1.998, 3, -0.10950342460398415, 1.997, 3, -0.14133294025102578, 1.995, 3, -0.16718552568927703, 1.993, 3, -0.19974984355438343, 1.99, 3, -0.2821347195933173, 1.98, 3, -0.36181625170796194,  1.967, 3, -0.4444097208657794, 1.95, 3, -0.5425633603552677, 1.925, 3, -0.6244997998398398, 1.9, 3, -0.7599342076785332, 1.85, 3, -0.9020947843768965, 1.785, 3, -1.0535653752852738, 1.7, 3, -1.20, 1.6, 3, -1.3228756555322953, 1.5, 3, -1.42828568570857, 1.4, 3, -1.5198684153570664, 1.3, 3, -1.60, 1.2, 3, -1.6703293088490067, 1.1, 3, -1.7320508075688775, 1, 3, -1.786057109949175, 0.9, 3, -1.833030277982336, 0.8, 3, -1.8734993995195193, 0.7, 3, -1.9078784028338912, 0.6, 3, -1.9364916731037084, 0.5, 3, -1.9595917942265423, 0.4, 3, -1.977371993328519, 0.3, 3, -1.98997487421324, 0.2, 3, -1.9974984355438178, 0.1, 3, -2, 0, 3, -2, -1, 3, -2.5, -1, 3, -2.5, 2.5, 3, 2.5, 2.5, 3, 2.5, -1, 3, 2, -1, 3, -2, -1, 0, -2.5, -1, 0, -2.5, 2.5, 0, 2.5, 2.5, 0, 2.5, -1, 0, 2, -1, 0, 2.5, 0, 3, 2.5, 0, 0, -2.5, 0, 3, -2.5, 0, 0, -2.5, 2, 3, -2, 2, 3, -2, 2, 0, -2.5, 2, 0, -2, 2.5, 3, -2, 2.5, 0, 0, 2.5, 3, 0, 2.5, 0, 2, 2, 3, 2.5, 2, 3, 2.5, 2, 0, 2, 2, 0, 2, 2.5, 3, 2, 2.5, 0, 0, 0, 0, 0, 0, 3]; 

    var a = 189; 
    
    // End INPUT


    // ENGINE:
    // Modify arch parameters reading the user inputs. 
    // There is an if block for each arch parameter: this.proxy.depth, this.proxy.topAbutmentHeight, this.proxy.pierWidth, this.proxy.pierHeight, this.proxy.archHalf (with 
    // this.proxy.archHalfExtensionWidth inside it), this.proxy.archFilled, this.proxy.archHalfFilled, this.proxy.lintel. this.proxy.clearSpanWidth and this.proxy.riseHeight if blocks 
    // are psitioned at end of script (ENGINE 2nd PART). 
    // p[] refers to points modified, i[] refers to indices modified.   

    if (this.proxy.depth != 3){
    
	for (d = 0; d <69; d++) {                        
            for (e = 0; e <3; e++) {       
                if (e == 2){
		    p[a] = this.proxy.depth;
 		} 
   		a++;
            }  
	} 
  	p[416] = this.proxy.depth; p[422] = this.proxy.depth;  p[428] = this.proxy.depth;  p[431] = this.proxy.depth;  p[440] = this.proxy.depth; p[446] = this.proxy.depth; p[452] = this.proxy.depth; p[455] = this.proxy.depth;  p[464] = this.proxy.depth; p[473] = this.proxy.depth;                       
    }


    // the following formula passes this.proxy.topAbutmentHeight input and  maintains it, because it would be affected by scale/this.proxy.riseHeight  
    if (this.proxy.topAbutmentHeight != 0.5){        
  		
  	p[385] = ((this.proxy.topAbutmentHeight + this.proxy.riseHeight)/(this.proxy.riseHeight/2)); p[388] = ((this.proxy.topAbutmentHeight + this.proxy.riseHeight)/(this.proxy.riseHeight/2)); p[403] = ((this.proxy.topAbutmentHeight + this.proxy.riseHeight)/(this.proxy.riseHeight/2));  p[406] = ((this.proxy.topAbutmentHeight + this.proxy.riseHeight)/(this.proxy.riseHeight/2)); p[439] = ((this.proxy.topAbutmentHeight + this.proxy.riseHeight)/(this.proxy.riseHeight/2)); p[442] = ((this.proxy.topAbutmentHeight + this.proxy.riseHeight)/(this.proxy.riseHeight/2));   p[445] = ((this.proxy.topAbutmentHeight + this.proxy.riseHeight)/(this.proxy.riseHeight/2)); p[448] = ((this.proxy.topAbutmentHeight + this.proxy.riseHeight)/(this.proxy.riseHeight/2));    p[463] = ((this.proxy.topAbutmentHeight + this.proxy.riseHeight)/(this.proxy.riseHeight/2)); p[466] = ((this.proxy.topAbutmentHeight + this.proxy.riseHeight)/(this.proxy.riseHeight/2));                         
    } 


    // the following formula passes this.proxy.pierWidth input and  maintains it, because it would be affected by scale/this.proxy.clearSpanWidth  
    if (this.proxy.pierWidth != 0.5){    
  		
  	p[381] = - ((this.proxy.pierWidth + this.proxy.clearSpanWidth/2)/(this.proxy.clearSpanWidth/4)); p[384] = - ((this.proxy.pierWidth + this.proxy.clearSpanWidth/2)/(this.proxy.clearSpanWidth/4));  p[387] = ((this.proxy.pierWidth + this.proxy.clearSpanWidth/2)/(this.proxy.clearSpanWidth/4));   p[390] = ((this.proxy.pierWidth + this.proxy.clearSpanWidth/2)/(this.proxy.clearSpanWidth/4));  p[399] = - ((this.proxy.pierWidth + this.proxy.clearSpanWidth/2)/(this.proxy.clearSpanWidth/4));  p[402] = - ((this.proxy.pierWidth + this.proxy.clearSpanWidth/2)/(this.proxy.clearSpanWidth/4)); p[405] = ((this.proxy.pierWidth + this.proxy.clearSpanWidth/2)/(this.proxy.clearSpanWidth/4)); p[408] = ((this.proxy.pierWidth + this.proxy.clearSpanWidth/2)/(this.proxy.clearSpanWidth/4));     p[414] = ((this.proxy.pierWidth + this.proxy.clearSpanWidth/2)/(this.proxy.clearSpanWidth/4));  p[417] = ((this.proxy.pierWidth + this.proxy.clearSpanWidth/2)/(this.proxy.clearSpanWidth/4)); p[420] = - ((this.proxy.pierWidth + this.proxy.clearSpanWidth/2)/(this.proxy.clearSpanWidth/4)); p[423] = - ((this.proxy.pierWidth + this.proxy.clearSpanWidth/2)/(this.proxy.clearSpanWidth/4));         p[426] = - ((this.proxy.pierWidth + this.proxy.clearSpanWidth/2)/(this.proxy.clearSpanWidth/4));  p[435] = - ((this.proxy.pierWidth + this.proxy.clearSpanWidth/2)/(this.proxy.clearSpanWidth/4)); p[453] = ((this.proxy.pierWidth + this.proxy.clearSpanWidth/2)/(this.proxy.clearSpanWidth/4)); p[456] = ((this.proxy.pierWidth + this.proxy.clearSpanWidth/2)/(this.proxy.clearSpanWidth/4));                     
    }
 
    // the following formula passes this.proxy.pierHeight input and  maintains it, because it would be affected by scale/this.proxy.riseHeight  
    if (this.proxy.pierHeight != 1){         
  		
  	p[379] = - (this.proxy.pierHeight/(this.proxy.riseHeight/2)); p[382] = - (this.proxy.pierHeight/(this.proxy.riseHeight/2));  p[391] = - (this.proxy.pierHeight/(this.proxy.riseHeight/2));  p[394] = - (this.proxy.pierHeight/(this.proxy.riseHeight/2));  p[397] = - (this.proxy.pierHeight/(this.proxy.riseHeight/2)); p[400] = - (this.proxy.pierHeight/(this.proxy.riseHeight/2)); p[409] = - (this.proxy.pierHeight/(this.proxy.riseHeight/2)); p[412] = - (this.proxy.pierHeight/(this.proxy.riseHeight/2));                            
    }


    if (this.proxy.archHalf == true){  
    
        for (k = 0; k < 33; k++) {       
            i[k] = 0;
	}
        
	for (k = 68; k <87; k++) {       
            i[k] = null;
	}

	for (k = 108; k <141; k++) {        
            i[k] = null;
	}

	for (k = 176; k <195; k++) {        
            i[k] = null;
	}

	for (k = 216; k <370; k++) {          
            i[k] = null;
	}

	for (k = 526; k <560; k++) {       
            i[k] = null;
	}

	for (k = 596; k <610; k++) {       
            i[k] = null;
	}

	for (k = 626; k <635; k++) {        
            i[k] = null;
	}
        
        // see reference for further information about this.proxy.archHalfExtensionWidth
	if (this.proxy.archHalfExtensionWidth != 0){   

            p[444] = this.proxy.archHalfExtensionWidth; p[447] = this.proxy.archHalfExtensionWidth; 
            p[468] = this.proxy.archHalfExtensionWidth; p[469] = this.proxy.riseHeight/(this.proxy.riseHeight/2); p[470] = 0; p[471] = this.proxy.archHalfExtensionWidth; p[472] = this.proxy.riseHeight/(this.proxy.riseHeight/2); p[473] = this.proxy.depth;  
            i[636] = 156; i[637] = 157; i[638] = 148; i[639] = 149; i[640] = -1 ;
            i[89] = 156; i[197] = 157;
            i[68] = 31; i[69] = 94; i[70] = 157; i[71] = 156; i[72] = -1;
	}
    }


    if (this.proxy.onlyIntrados == true){     

        for (m = 0; m <215; m++) {       
            i[m] = null;
	}

	for ( m = 526; m <650; m++) {         
            i[m] = null;
	}
    }


    if (this.proxy.archFilled == true){     

	for (g = 78; g <107; g++) {       
            i[g] = null;
	}
	i[32] = 156; i[66] = 156;   i[140] = 157; i[174] = 157;

	i[68] = 0; i[69] = 156; i[70] = 157; i[71] = 63; i[72] = -1;      i[73] = 62; i[74] = 156; i[75] = 157; i[76] = 125; i[77] = -1;

	for ( g = 176; g <215; g++) {       
            i[g] = null;
	}

	for ( g = 526; g <650; g++) {         
            i[g] = null;
	}
    }


    if (this.proxy.archHalfFilled == true){     

	for (t = 0; t <33; t++) {       
            i[t] = null;
	}

	for (t = 78; t <141; t++) {       
            i[t] = null;
	}

	i[66] = 156;    i[174] = 157;

	i[68] = 31; i[69] = 156; i[70] = 157; i[71] = 94; i[72] = -1;      i[73] = 62; i[74] = 156; i[75] = 157; i[76] = 125; i[77] = -1;

	for ( t = 176; t <370; t++) {       
            i[t] = null;
	}

	for ( t = 526; t <650; t++) {         
            i[t] = null;
	}
    }


    if (this.proxy.lintel == true){  
   
	for (r = 0; r <67; r++) {       
            i[r] = 0;
	}

	for (r = 73; r <77; r++) {       
            i[r] = 0;
	}

	for (r = 98; r <102; r++) {       
            i[r] = 0;
	}
		
	for (r = 108; r <175; r++) {       
            i[r] = 0;
	}

	for (r = 181; r <185; r++) {        
            i[r] = 0;
		}

	for (r = 206; r <210; r++) {        
            i[r] = 0;
	}

	for (r = 216; r <525; r++) {          
            i[r] = 0;
	}

	for (r = 541; r <545; r++) {       
            i[r] = 0;
	}

	for (r = 576; r <580; r++) {       
            i[r] = 0;
	}

	for (r = 626; r <630; r++) {       
            i[r] = 0;
	}

	for (r = 646; r <650; r++) {       
            i[r] = 0;
	}

 	p[427] = 0; p[430] = 0;  p[433] = 0;  p[436] = 0;  p[451] = 0; p[454] = 0; p[457] = 0; p[460] = 0; p[94] = 0; p[283] = 0;                           

	p[385] = this.proxy.topAbutmentHeight; p[388] = this.proxy.topAbutmentHeight;  p[403] = this.proxy.topAbutmentHeight;  p[406] = this.proxy.topAbutmentHeight;  p[439] = this.proxy.topAbutmentHeight; p[442] = this.proxy.topAbutmentHeight; p[445] = this.proxy.topAbutmentHeight; p[448] = this.proxy.topAbutmentHeight; p[463] = this.proxy.topAbutmentHeight; p[466] = this.proxy.topAbutmentHeight;                               
  
    }
    
    // End ENGINE
    
    
    // OUTPUT:
    // Send out of script all inices and all points that draw the Arch. 
    // Indices and points come from the two input arrays (i[] and p[]) and some of them has been modified inside the ENGINE, reading the user inputs. 
	       
    this.proxy.indexOut[0] = i[0]; this.proxy.indexOut[1] = i[1]; this.proxy.indexOut[2] = i[2]; this.proxy.indexOut[3] = i[3]; this.proxy.indexOut[4] = i[4]; this.proxy.indexOut[5] = i[5]; this.proxy.indexOut[6] = i[6]; this.proxy.indexOut[7] = i[7]; this.proxy.indexOut[8] = i[8]; this.proxy.indexOut[9] = i[9]; this.proxy.indexOut[10] = i[10]; this.proxy.indexOut[11] = i[11]; this.proxy.indexOut[12] = i[12]; this.proxy.indexOut[13] = i[13]; this.proxy.indexOut[14] = i[14]; this.proxy.indexOut[15] = i[15]; this.proxy.indexOut[16] = i[16]; this.proxy.indexOut[17] = i[17]; this.proxy.indexOut[18] = i[18]; this.proxy.indexOut[19] = i[19]; this.proxy.indexOut[20] = i[20]; this.proxy.indexOut[21] = i[21]; this.proxy.indexOut[22] = i[22]; this.proxy.indexOut[23] = i[23]; this.proxy.indexOut[24] = i[24]; this.proxy.indexOut[25] = i[25]; this.proxy.indexOut[26] = i[26]; this.proxy.indexOut[27] = i[27]; this.proxy.indexOut[28] = i[28]; this.proxy.indexOut[29] = i[29]; this.proxy.indexOut[30] = i[30]; this.proxy.indexOut[31] = i[31]; this.proxy.indexOut[32] = i[32]; this.proxy.indexOut[33] = i[33]; this.proxy.indexOut[34] = i[34]; this.proxy.indexOut[35] = i[35]; this.proxy.indexOut[36] = i[36]; this.proxy.indexOut[37] = i[37]; this.proxy.indexOut[38] = i[38]; this.proxy.indexOut[39] = i[39]; this.proxy.indexOut[40] = i[40]; this.proxy.indexOut[41] = i[41]; this.proxy.indexOut[42] = i[42]; this.proxy.indexOut[43] = i[43]; this.proxy.indexOut[44] = i[44]; this.proxy.indexOut[45] = i[45]; this.proxy.indexOut[46] = i[46]; this.proxy.indexOut[47] = i[47]; this.proxy.indexOut[48] = i[48]; this.proxy.indexOut[49] = i[49]; this.proxy.indexOut[50] = i[50]; this.proxy.indexOut[51] = i[51]; this.proxy.indexOut[52] = i[52]; this.proxy.indexOut[53] = i[53]; this.proxy.indexOut[54] = i[54]; this.proxy.indexOut[55] = i[55]; this.proxy.indexOut[56] = i[56]; this.proxy.indexOut[57] = i[57]; this.proxy.indexOut[58] = i[58]; this.proxy.indexOut[59] = i[59]; this.proxy.indexOut[60] = i[60]; this.proxy.indexOut[61] = i[61]; this.proxy.indexOut[62] = i[62]; this.proxy.indexOut[63] = i[63]; this.proxy.indexOut[64] = i[64]; this.proxy.indexOut[65] = i[65]; this.proxy.indexOut[66] = i[66]; this.proxy.indexOut[67] = i[67]; this.proxy.indexOut[68] = i[68]; this.proxy.indexOut[69] = i[69]; this.proxy.indexOut[70] = i[70]; this.proxy.indexOut[71] = i[71]; this.proxy.indexOut[72] = i[72]; this.proxy.indexOut[73] = i[73]; this.proxy.indexOut[74] = i[74]; this.proxy.indexOut[75] = i[75]; this.proxy.indexOut[76] = i[76]; this.proxy.indexOut[77] = i[77]; this.proxy.indexOut[78] = i[78]; this.proxy.indexOut[79] = i[79]; this.proxy.indexOut[80] = i[80]; this.proxy.indexOut[81] = i[81]; this.proxy.indexOut[82] = i[82]; this.proxy.indexOut[83] = i[83]; this.proxy.indexOut[84] = i[84]; this.proxy.indexOut[85] = i[85]; this.proxy.indexOut[86] = i[86]; this.proxy.indexOut[87] = i[87]; this.proxy.indexOut[88] = i[88]; this.proxy.indexOut[89] = i[89]; this.proxy.indexOut[90] = i[90]; this.proxy.indexOut[91] = i[91]; this.proxy.indexOut[92] = i[92]; this.proxy.indexOut[93] = i[93]; this.proxy.indexOut[94] = i[94]; this.proxy.indexOut[95] = i[95]; this.proxy.indexOut[96] = i[96]; this.proxy.indexOut[97] = i[97]; this.proxy.indexOut[98] = i[98]; this.proxy.indexOut[99] = i[99]; this.proxy.indexOut[100] = i[100]; this.proxy.indexOut[101] = i[101]; this.proxy.indexOut[102] = i[102]; this.proxy.indexOut[103] = i[103]; this.proxy.indexOut[104] = i[104]; this.proxy.indexOut[105] = i[105]; this.proxy.indexOut[106] = i[106]; this.proxy.indexOut[107] = i[107]; this.proxy.indexOut[108] = i[108]; this.proxy.indexOut[109] = i[109]; this.proxy.indexOut[110] = i[110]; this.proxy.indexOut[111] = i[111]; this.proxy.indexOut[112] = i[112]; this.proxy.indexOut[113] = i[113]; this.proxy.indexOut[114] = i[114]; this.proxy.indexOut[115] = i[115]; this.proxy.indexOut[116] = i[116]; this.proxy.indexOut[117] = i[117]; this.proxy.indexOut[118] = i[118]; this.proxy.indexOut[119] = i[119]; this.proxy.indexOut[120] = i[120]; this.proxy.indexOut[121] = i[121]; this.proxy.indexOut[122] = i[122]; this.proxy.indexOut[123] = i[123]; this.proxy.indexOut[124] = i[124]; this.proxy.indexOut[125] = i[125]; this.proxy.indexOut[126] = i[126]; this.proxy.indexOut[127] = i[127]; this.proxy.indexOut[128] = i[128]; this.proxy.indexOut[129] = i[129]; this.proxy.indexOut[130] = i[130]; this.proxy.indexOut[131] = i[131]; this.proxy.indexOut[132] = i[132]; this.proxy.indexOut[133] = i[133]; this.proxy.indexOut[134] = i[134]; this.proxy.indexOut[135] = i[135]; this.proxy.indexOut[136] = i[136]; this.proxy.indexOut[137] = i[137]; this.proxy.indexOut[138] = i[138]; this.proxy.indexOut[139] = i[139]; this.proxy.indexOut[140] = i[140]; this.proxy.indexOut[141] = i[141]; this.proxy.indexOut[142] = i[142]; this.proxy.indexOut[143] = i[143]; this.proxy.indexOut[144] = i[144]; this.proxy.indexOut[145] = i[145]; this.proxy.indexOut[146] = i[146]; this.proxy.indexOut[147] = i[147]; this.proxy.indexOut[148] = i[148]; this.proxy.indexOut[149] = i[149]; this.proxy.indexOut[150] = i[150]; this.proxy.indexOut[151] = i[151]; this.proxy.indexOut[152] = i[152]; this.proxy.indexOut[153] = i[153]; this.proxy.indexOut[154] = i[154]; this.proxy.indexOut[155] = i[155]; this.proxy.indexOut[156] = i[156]; this.proxy.indexOut[157] = i[157]; this.proxy.indexOut[158] = i[158]; this.proxy.indexOut[159] = i[159]; this.proxy.indexOut[160] = i[160]; this.proxy.indexOut[161] = i[161]; this.proxy.indexOut[162] = i[162]; this.proxy.indexOut[163] = i[163]; this.proxy.indexOut[164] = i[164]; this.proxy.indexOut[165] = i[165]; this.proxy.indexOut[166] = i[166]; this.proxy.indexOut[167] = i[167]; this.proxy.indexOut[168] = i[168]; this.proxy.indexOut[169] = i[169]; this.proxy.indexOut[170] = i[170]; this.proxy.indexOut[171] = i[171]; this.proxy.indexOut[172] = i[172]; this.proxy.indexOut[173] = i[173]; this.proxy.indexOut[174] = i[174]; this.proxy.indexOut[175] = i[175]; this.proxy.indexOut[176] = i[176]; this.proxy.indexOut[177] = i[177]; this.proxy.indexOut[178] = i[178]; this.proxy.indexOut[179] = i[179]; this.proxy.indexOut[180] = i[180]; this.proxy.indexOut[181] = i[181]; this.proxy.indexOut[182] = i[182]; this.proxy.indexOut[183] = i[183]; this.proxy.indexOut[184] = i[184]; this.proxy.indexOut[185] = i[185]; this.proxy.indexOut[186] = i[186]; this.proxy.indexOut[187] = i[187]; this.proxy.indexOut[188] = i[188]; this.proxy.indexOut[189] = i[189]; this.proxy.indexOut[190] = i[190]; this.proxy.indexOut[191] = i[191]; this.proxy.indexOut[192] = i[192]; this.proxy.indexOut[193] = i[193]; this.proxy.indexOut[194] = i[194]; this.proxy.indexOut[195] = i[195]; this.proxy.indexOut[196] = i[196]; this.proxy.indexOut[197] = i[197]; this.proxy.indexOut[198] = i[198]; this.proxy.indexOut[199] = i[199]; this.proxy.indexOut[200] = i[200]; this.proxy.indexOut[201] = i[201]; this.proxy.indexOut[202] = i[202]; this.proxy.indexOut[203] = i[203]; this.proxy.indexOut[204] = i[204]; this.proxy.indexOut[205] = i[205]; this.proxy.indexOut[206] = i[206]; this.proxy.indexOut[207] = i[207]; this.proxy.indexOut[208] = i[208]; this.proxy.indexOut[209] = i[209]; this.proxy.indexOut[210] = i[210]; this.proxy.indexOut[211] = i[211]; this.proxy.indexOut[212] = i[212]; this.proxy.indexOut[213] = i[213]; this.proxy.indexOut[214] = i[214]; this.proxy.indexOut[215] = i[215]; this.proxy.indexOut[216] = i[216]; this.proxy.indexOut[217] = i[217]; this.proxy.indexOut[218] = i[218]; this.proxy.indexOut[219] = i[219]; this.proxy.indexOut[220] = i[220]; this.proxy.indexOut[221] = i[221]; this.proxy.indexOut[222] = i[222]; this.proxy.indexOut[223] = i[223]; this.proxy.indexOut[224] = i[224]; this.proxy.indexOut[225] = i[225]; this.proxy.indexOut[226] = i[226]; this.proxy.indexOut[227] = i[227]; this.proxy.indexOut[228] = i[228]; this.proxy.indexOut[229] = i[229]; this.proxy.indexOut[230] = i[230]; this.proxy.indexOut[231] = i[231]; this.proxy.indexOut[232] = i[232]; this.proxy.indexOut[233] = i[233]; this.proxy.indexOut[234] = i[234]; this.proxy.indexOut[235] = i[235]; this.proxy.indexOut[236] = i[236]; this.proxy.indexOut[237] = i[237]; this.proxy.indexOut[238] = i[238]; this.proxy.indexOut[239] = i[239]; this.proxy.indexOut[240] = i[240]; this.proxy.indexOut[241] = i[241]; this.proxy.indexOut[242] = i[242]; this.proxy.indexOut[243] = i[243]; this.proxy.indexOut[244] = i[244]; this.proxy.indexOut[245] = i[245]; this.proxy.indexOut[246] = i[246]; this.proxy.indexOut[247] = i[247]; this.proxy.indexOut[248] = i[248]; this.proxy.indexOut[249] = i[249]; this.proxy.indexOut[250] = i[250]; this.proxy.indexOut[251] = i[251]; this.proxy.indexOut[252] = i[252]; this.proxy.indexOut[253] = i[253]; this.proxy.indexOut[254] = i[254]; this.proxy.indexOut[255] = i[255]; this.proxy.indexOut[256] = i[256]; this.proxy.indexOut[257] = i[257]; this.proxy.indexOut[258] = i[258]; this.proxy.indexOut[259] = i[259]; this.proxy.indexOut[260] = i[260]; this.proxy.indexOut[261] = i[261]; this.proxy.indexOut[262] = i[262]; this.proxy.indexOut[263] = i[263]; this.proxy.indexOut[264] = i[264]; this.proxy.indexOut[265] = i[265]; this.proxy.indexOut[266] = i[266]; this.proxy.indexOut[267] = i[267]; this.proxy.indexOut[268] = i[268]; this.proxy.indexOut[269] = i[269]; this.proxy.indexOut[270] = i[270]; this.proxy.indexOut[271] = i[271]; this.proxy.indexOut[272] = i[272]; this.proxy.indexOut[273] = i[273]; this.proxy.indexOut[274] = i[274]; this.proxy.indexOut[275] = i[275]; this.proxy.indexOut[276] = i[276]; this.proxy.indexOut[277] = i[277]; this.proxy.indexOut[278] = i[278]; this.proxy.indexOut[279] = i[279]; this.proxy.indexOut[280] = i[280]; this.proxy.indexOut[281] = i[281]; this.proxy.indexOut[282] = i[282]; this.proxy.indexOut[283] = i[283]; this.proxy.indexOut[284] = i[284]; this.proxy.indexOut[285] = i[285]; this.proxy.indexOut[286] = i[286]; this.proxy.indexOut[287] = i[287]; this.proxy.indexOut[288] = i[288]; this.proxy.indexOut[289] = i[289]; this.proxy.indexOut[290] = i[290]; this.proxy.indexOut[291] = i[291]; this.proxy.indexOut[292] = i[292]; this.proxy.indexOut[293] = i[293]; this.proxy.indexOut[294] = i[294]; this.proxy.indexOut[295] = i[295]; this.proxy.indexOut[296] = i[296]; this.proxy.indexOut[297] = i[297]; this.proxy.indexOut[298] = i[298]; this.proxy.indexOut[299] = i[299]; this.proxy.indexOut[300] = i[300]; this.proxy.indexOut[301] = i[301]; this.proxy.indexOut[302] = i[302]; this.proxy.indexOut[303] = i[303]; this.proxy.indexOut[304] = i[304]; this.proxy.indexOut[305] = i[305]; this.proxy.indexOut[306] = i[306]; this.proxy.indexOut[307] = i[307]; this.proxy.indexOut[308] = i[308]; this.proxy.indexOut[309] = i[309]; this.proxy.indexOut[310] = i[310]; this.proxy.indexOut[311] = i[311]; this.proxy.indexOut[312] = i[312]; this.proxy.indexOut[313] = i[313]; this.proxy.indexOut[314] = i[314]; this.proxy.indexOut[315] = i[315]; this.proxy.indexOut[316] = i[316]; this.proxy.indexOut[317] = i[317]; this.proxy.indexOut[318] = i[318]; this.proxy.indexOut[319] = i[319]; this.proxy.indexOut[320] = i[320]; this.proxy.indexOut[321] = i[321]; this.proxy.indexOut[322] = i[322]; this.proxy.indexOut[323] = i[323]; this.proxy.indexOut[324] = i[324]; this.proxy.indexOut[325] = i[325]; this.proxy.indexOut[326] = i[326]; this.proxy.indexOut[327] = i[327]; this.proxy.indexOut[328] = i[328]; this.proxy.indexOut[329] = i[329]; this.proxy.indexOut[330] = i[330]; this.proxy.indexOut[331] = i[331]; this.proxy.indexOut[332] = i[332]; this.proxy.indexOut[333] = i[333]; this.proxy.indexOut[334] = i[334]; this.proxy.indexOut[335] = i[335]; this.proxy.indexOut[336] = i[336]; this.proxy.indexOut[337] = i[337]; this.proxy.indexOut[338] = i[338]; this.proxy.indexOut[339] = i[339]; this.proxy.indexOut[340] = i[340]; this.proxy.indexOut[341] = i[341]; this.proxy.indexOut[342] = i[342]; this.proxy.indexOut[343] = i[343]; this.proxy.indexOut[344] = i[344]; this.proxy.indexOut[345] = i[345]; this.proxy.indexOut[346] = i[346]; this.proxy.indexOut[347] = i[347]; this.proxy.indexOut[348] = i[348]; this.proxy.indexOut[349] = i[349]; this.proxy.indexOut[350] = i[350]; this.proxy.indexOut[351] = i[351]; this.proxy.indexOut[352] = i[352]; this.proxy.indexOut[353] = i[353]; this.proxy.indexOut[354] = i[354]; this.proxy.indexOut[355] = i[355]; this.proxy.indexOut[356] = i[356]; this.proxy.indexOut[357] = i[357]; this.proxy.indexOut[358] = i[358]; this.proxy.indexOut[359] = i[359]; this.proxy.indexOut[360] = i[360]; this.proxy.indexOut[361] = i[361]; this.proxy.indexOut[362] = i[362]; this.proxy.indexOut[363] = i[363]; this.proxy.indexOut[364] = i[364]; this.proxy.indexOut[365] = i[365]; this.proxy.indexOut[366] = i[366]; this.proxy.indexOut[367] = i[367]; this.proxy.indexOut[368] = i[368]; this.proxy.indexOut[369] = i[369]; this.proxy.indexOut[370] = i[370]; this.proxy.indexOut[371] = i[371]; this.proxy.indexOut[372] = i[372]; this.proxy.indexOut[373] = i[373]; this.proxy.indexOut[374] = i[374]; this.proxy.indexOut[375] = i[375]; this.proxy.indexOut[376] = i[376]; this.proxy.indexOut[377] = i[377]; this.proxy.indexOut[378] = i[378]; this.proxy.indexOut[379] = i[379]; this.proxy.indexOut[380] = i[380]; this.proxy.indexOut[381] = i[381]; this.proxy.indexOut[382] = i[382]; this.proxy.indexOut[383] = i[383]; this.proxy.indexOut[384] = i[384]; this.proxy.indexOut[385] = i[385]; this.proxy.indexOut[386] = i[386]; this.proxy.indexOut[387] = i[387]; this.proxy.indexOut[388] = i[388]; this.proxy.indexOut[389] = i[389]; this.proxy.indexOut[390] = i[390]; this.proxy.indexOut[391] = i[391]; this.proxy.indexOut[392] = i[392]; this.proxy.indexOut[393] = i[393]; this.proxy.indexOut[394] = i[394]; this.proxy.indexOut[395] = i[395]; this.proxy.indexOut[396] = i[396]; this.proxy.indexOut[397] = i[397]; this.proxy.indexOut[398] = i[398]; this.proxy.indexOut[399] = i[399]; this.proxy.indexOut[400] = i[400]; this.proxy.indexOut[401] = i[401]; this.proxy.indexOut[402] = i[402]; this.proxy.indexOut[403] = i[403]; this.proxy.indexOut[404] = i[404]; this.proxy.indexOut[405] = i[405]; this.proxy.indexOut[406] = i[406]; this.proxy.indexOut[407] = i[407]; this.proxy.indexOut[408] = i[408]; this.proxy.indexOut[409] = i[409]; this.proxy.indexOut[410] = i[410]; this.proxy.indexOut[411] = i[411]; this.proxy.indexOut[412] = i[412]; this.proxy.indexOut[413] = i[413]; this.proxy.indexOut[414] = i[414]; this.proxy.indexOut[415] = i[415]; this.proxy.indexOut[416] = i[416]; this.proxy.indexOut[417] = i[417]; this.proxy.indexOut[418] = i[418]; this.proxy.indexOut[419] = i[419]; this.proxy.indexOut[420] = i[420]; this.proxy.indexOut[421] = i[421]; this.proxy.indexOut[422] = i[422]; this.proxy.indexOut[423] = i[423]; this.proxy.indexOut[424] = i[424]; this.proxy.indexOut[425] = i[425]; this.proxy.indexOut[426] = i[426]; this.proxy.indexOut[427] = i[427]; this.proxy.indexOut[428] = i[428]; this.proxy.indexOut[429] = i[429]; this.proxy.indexOut[430] = i[430]; this.proxy.indexOut[431] = i[431]; this.proxy.indexOut[432] = i[432]; this.proxy.indexOut[433] = i[433]; this.proxy.indexOut[434] = i[434]; this.proxy.indexOut[435] = i[435]; this.proxy.indexOut[436] = i[436]; this.proxy.indexOut[437] = i[437]; this.proxy.indexOut[438] = i[438]; this.proxy.indexOut[439] = i[439]; this.proxy.indexOut[440] = i[440]; this.proxy.indexOut[441] = i[441]; this.proxy.indexOut[442] = i[442]; this.proxy.indexOut[443] = i[443]; this.proxy.indexOut[444] = i[444]; this.proxy.indexOut[445] = i[445]; this.proxy.indexOut[446] = i[446]; this.proxy.indexOut[447] = i[447]; this.proxy.indexOut[448] = i[448]; this.proxy.indexOut[449] = i[449]; this.proxy.indexOut[450] = i[450]; this.proxy.indexOut[451] = i[451]; this.proxy.indexOut[452] = i[452]; this.proxy.indexOut[453] = i[453]; this.proxy.indexOut[454] = i[454]; this.proxy.indexOut[455] = i[455]; this.proxy.indexOut[456] = i[456]; this.proxy.indexOut[457] = i[457]; this.proxy.indexOut[458] = i[458]; this.proxy.indexOut[459] = i[459]; this.proxy.indexOut[460] = i[460]; this.proxy.indexOut[461] = i[461]; this.proxy.indexOut[462] = i[462]; this.proxy.indexOut[463] = i[463]; this.proxy.indexOut[464] = i[464]; this.proxy.indexOut[465] = i[465]; this.proxy.indexOut[466] = i[466]; this.proxy.indexOut[467] = i[467]; this.proxy.indexOut[468] = i[468]; this.proxy.indexOut[469] = i[469]; this.proxy.indexOut[470] = i[470]; this.proxy.indexOut[471] = i[471]; this.proxy.indexOut[472] = i[472]; this.proxy.indexOut[473] = i[473]; this.proxy.indexOut[474] = i[474]; this.proxy.indexOut[475] = i[475]; this.proxy.indexOut[476] = i[476]; this.proxy.indexOut[477] = i[477]; this.proxy.indexOut[478] = i[478]; this.proxy.indexOut[479] = i[479]; this.proxy.indexOut[480] = i[480]; this.proxy.indexOut[481] = i[481]; this.proxy.indexOut[482] = i[482]; this.proxy.indexOut[483] = i[483]; this.proxy.indexOut[484] = i[484]; this.proxy.indexOut[485] = i[485]; this.proxy.indexOut[486] = i[486]; this.proxy.indexOut[487] = i[487]; this.proxy.indexOut[488] = i[488]; this.proxy.indexOut[489] = i[489]; this.proxy.indexOut[490] = i[490]; this.proxy.indexOut[491] = i[491]; this.proxy.indexOut[492] = i[492]; this.proxy.indexOut[493] = i[493]; this.proxy.indexOut[494] = i[494]; this.proxy.indexOut[495] = i[495]; this.proxy.indexOut[496] = i[496]; this.proxy.indexOut[497] = i[497]; this.proxy.indexOut[498] = i[498]; this.proxy.indexOut[499] = i[499]; this.proxy.indexOut[500] = i[500]; this.proxy.indexOut[501] = i[501]; this.proxy.indexOut[502] = i[502]; this.proxy.indexOut[503] = i[503]; this.proxy.indexOut[504] = i[504]; this.proxy.indexOut[505] = i[505]; this.proxy.indexOut[506] = i[506]; this.proxy.indexOut[507] = i[507]; this.proxy.indexOut[508] = i[508]; this.proxy.indexOut[509] = i[509]; this.proxy.indexOut[510] = i[510]; this.proxy.indexOut[511] = i[511]; this.proxy.indexOut[512] = i[512]; this.proxy.indexOut[513] = i[513]; this.proxy.indexOut[514] = i[514]; this.proxy.indexOut[515] = i[515]; this.proxy.indexOut[516] = i[516]; this.proxy.indexOut[517] = i[517]; this.proxy.indexOut[518] = i[518]; this.proxy.indexOut[519] = i[519]; this.proxy.indexOut[520] = i[520]; this.proxy.indexOut[521] = i[521]; this.proxy.indexOut[522] = i[522]; this.proxy.indexOut[523] = i[523]; this.proxy.indexOut[524] = i[524]; this.proxy.indexOut[525] = i[525]; this.proxy.indexOut[526] = i[526]; this.proxy.indexOut[527] = i[527]; this.proxy.indexOut[528] = i[528]; this.proxy.indexOut[529] = i[529]; this.proxy.indexOut[530] = i[530]; this.proxy.indexOut[531] = i[531]; this.proxy.indexOut[532] = i[532]; this.proxy.indexOut[533] = i[533]; this.proxy.indexOut[534] = i[534]; this.proxy.indexOut[535] = i[535]; this.proxy.indexOut[536] = i[536]; this.proxy.indexOut[537] = i[537]; this.proxy.indexOut[538] = i[538]; this.proxy.indexOut[539] = i[539]; this.proxy.indexOut[540] = i[540]; this.proxy.indexOut[541] = i[541]; this.proxy.indexOut[542] = i[542]; this.proxy.indexOut[543] = i[543]; this.proxy.indexOut[544] = i[544]; this.proxy.indexOut[545] = i[545]; this.proxy.indexOut[546] = i[546]; this.proxy.indexOut[547] = i[547]; this.proxy.indexOut[548] = i[548]; this.proxy.indexOut[549] = i[549]; this.proxy.indexOut[550] = i[550]; this.proxy.indexOut[551] = i[551]; this.proxy.indexOut[552] = i[552]; this.proxy.indexOut[553] = i[553]; this.proxy.indexOut[554] = i[554]; this.proxy.indexOut[555] = i[555]; this.proxy.indexOut[556] = i[556]; this.proxy.indexOut[557] = i[557]; this.proxy.indexOut[558] = i[558]; this.proxy.indexOut[559] = i[559]; this.proxy.indexOut[560] = i[560]; this.proxy.indexOut[561] = i[561]; this.proxy.indexOut[562] = i[562]; this.proxy.indexOut[563] = i[563]; this.proxy.indexOut[564] = i[564]; this.proxy.indexOut[565] = i[565]; this.proxy.indexOut[566] = i[566]; this.proxy.indexOut[567] = i[567]; this.proxy.indexOut[568] = i[568]; this.proxy.indexOut[569] = i[569]; this.proxy.indexOut[570] = i[570]; this.proxy.indexOut[571] = i[571]; this.proxy.indexOut[572] = i[572]; this.proxy.indexOut[573] = i[573]; this.proxy.indexOut[574] = i[574]; this.proxy.indexOut[575] = i[575]; this.proxy.indexOut[576] = i[576]; this.proxy.indexOut[577] = i[577]; this.proxy.indexOut[578] = i[578]; this.proxy.indexOut[579] = i[579]; this.proxy.indexOut[580] = i[580]; this.proxy.indexOut[581] = i[581]; this.proxy.indexOut[582] = i[582]; this.proxy.indexOut[583] = i[583]; this.proxy.indexOut[584] = i[584]; this.proxy.indexOut[585] = i[585]; this.proxy.indexOut[586] = i[586]; this.proxy.indexOut[587] = i[587]; this.proxy.indexOut[588] = i[588]; this.proxy.indexOut[589] = i[589]; this.proxy.indexOut[590] = i[590]; this.proxy.indexOut[591] = i[591]; this.proxy.indexOut[592] = i[592]; this.proxy.indexOut[593] = i[593]; this.proxy.indexOut[594] = i[594]; this.proxy.indexOut[595] = i[595]; this.proxy.indexOut[596] = i[596]; this.proxy.indexOut[597] = i[597]; this.proxy.indexOut[598] = i[598]; this.proxy.indexOut[599] = i[599]; this.proxy.indexOut[600] = i[600]; this.proxy.indexOut[601] = i[601]; this.proxy.indexOut[602] = i[602]; this.proxy.indexOut[603] = i[603]; this.proxy.indexOut[604] = i[604]; this.proxy.indexOut[605] = i[605]; this.proxy.indexOut[606] = i[606]; this.proxy.indexOut[607] = i[607]; this.proxy.indexOut[608] = i[608]; this.proxy.indexOut[609] = i[609]; this.proxy.indexOut[610] = i[610]; this.proxy.indexOut[611] = i[611]; this.proxy.indexOut[612] = i[612]; this.proxy.indexOut[613] = i[613]; this.proxy.indexOut[614] = i[614]; this.proxy.indexOut[615] = i[615]; this.proxy.indexOut[616] = i[616]; this.proxy.indexOut[617] = i[617]; this.proxy.indexOut[618] = i[618]; this.proxy.indexOut[619] = i[619]; this.proxy.indexOut[620] = i[620]; this.proxy.indexOut[621] = i[621]; this.proxy.indexOut[622] = i[622]; this.proxy.indexOut[623] = i[623]; this.proxy.indexOut[624] = i[624]; this.proxy.indexOut[625] = i[625]; this.proxy.indexOut[626] = i[626]; this.proxy.indexOut[627] = i[627]; this.proxy.indexOut[628] = i[628]; this.proxy.indexOut[629] = i[629]; this.proxy.indexOut[630] = i[630]; this.proxy.indexOut[631] = i[631]; this.proxy.indexOut[632] = i[632]; this.proxy.indexOut[633] = i[633]; this.proxy.indexOut[634] = i[634]; this.proxy.indexOut[635] = i[635]; this.proxy.indexOut[636] = i[636]; this.proxy.indexOut[637] = i[637]; this.proxy.indexOut[638] = i[638]; this.proxy.indexOut[639] = i[639]; this.proxy.indexOut[640] = i[640]; this.proxy.indexOut[641] = i[641]; this.proxy.indexOut[642] = i[642]; this.proxy.indexOut[643] = i[643]; this.proxy.indexOut[644] = i[644]; this.proxy.indexOut[645] = i[645]; this.proxy.indexOut[646] = i[646]; this.proxy.indexOut[647] = i[647]; this.proxy.indexOut[648] = i[648]; this.proxy.indexOut[649] = i[649]; this.proxy.indexOut[650] = i[650]; this.proxy.indexOut[651] = i[651]; this.proxy.indexOut[652] = i[652]; this.proxy.indexOut[653] = i[653]; this.proxy.indexOut[654] = i[654]; this.proxy.indexOut[655] = i[655]; 
 	   
    this.proxy.pointOut[0] = new SFVec3f(p[0], p[1], p[2]); this.proxy.pointOut[1] = new SFVec3f(p[3], p[4], p[5]); this.proxy.pointOut[2] = new SFVec3f(p[6], p[7], p[8]); this.proxy.pointOut[3] = new SFVec3f(p[9], p[10], p[11]); this.proxy.pointOut[4] = new SFVec3f(p[12], p[13], p[14]); this.proxy.pointOut[5] = new SFVec3f(p[15], p[16], p[17]); this.proxy.pointOut[6] = new SFVec3f(p[18], p[19], p[20]); this.proxy.pointOut[7] = new SFVec3f(p[21], p[22], p[23]); this.proxy.pointOut[8] = new SFVec3f(p[24], p[25], p[26]); this.proxy.pointOut[9] = new SFVec3f(p[27], p[28], p[29]); this.proxy.pointOut[10] = new SFVec3f(p[30], p[31], p[32]); this.proxy.pointOut[11] = new SFVec3f(p[33], p[34], p[35]); this.proxy.pointOut[12] = new SFVec3f(p[36], p[37], p[38]); this.proxy.pointOut[13] = new SFVec3f(p[39], p[40], p[41]); this.proxy.pointOut[14] = new SFVec3f(p[42], p[43], p[44]); this.proxy.pointOut[15] = new SFVec3f(p[45], p[46], p[47]); this.proxy.pointOut[16] = new SFVec3f(p[48], p[49], p[50]); this.proxy.pointOut[17] = new SFVec3f(p[51], p[52], p[53]); this.proxy.pointOut[18] = new SFVec3f(p[54], p[55], p[56]); this.proxy.pointOut[19] = new SFVec3f(p[57], p[58], p[59]); this.proxy.pointOut[20] = new SFVec3f(p[60], p[61], p[62]); this.proxy.pointOut[21] = new SFVec3f(p[63], p[64], p[65]); this.proxy.pointOut[22] = new SFVec3f(p[66], p[67], p[68]); this.proxy.pointOut[23] = new SFVec3f(p[69], p[70], p[71]); this.proxy.pointOut[24] = new SFVec3f(p[72], p[73], p[74]); this.proxy.pointOut[25] = new SFVec3f(p[75], p[76], p[77]); this.proxy.pointOut[26] = new SFVec3f(p[78], p[79], p[80]); this.proxy.pointOut[27] = new SFVec3f(p[81], p[82], p[83]); this.proxy.pointOut[28] = new SFVec3f(p[84], p[85], p[86]); this.proxy.pointOut[29] = new SFVec3f(p[87], p[88], p[89]); this.proxy.pointOut[30] = new SFVec3f(p[90], p[91], p[92]); this.proxy.pointOut[31] = new SFVec3f(p[93], p[94], p[95]); this.proxy.pointOut[32] = new SFVec3f(p[96], p[97], p[98]); this.proxy.pointOut[33] = new SFVec3f(p[99], p[100], p[101]); this.proxy.pointOut[34] = new SFVec3f(p[102], p[103], p[104]); this.proxy.pointOut[35] = new SFVec3f(p[105], p[106], p[107]); this.proxy.pointOut[36] = new SFVec3f(p[108], p[109], p[110]); this.proxy.pointOut[37] = new SFVec3f(p[111], p[112], p[113]); this.proxy.pointOut[38] = new SFVec3f(p[114], p[115], p[116]); this.proxy.pointOut[39] = new SFVec3f(p[117], p[118], p[119]); this.proxy.pointOut[40] = new SFVec3f(p[120], p[121], p[122]); this.proxy.pointOut[41] = new SFVec3f(p[123], p[124], p[125]); this.proxy.pointOut[42] = new SFVec3f(p[126], p[127], p[128]); this.proxy.pointOut[43] = new SFVec3f(p[129], p[130], p[131]); this.proxy.pointOut[44] = new SFVec3f(p[132], p[133], p[134]); this.proxy.pointOut[45] = new SFVec3f(p[135], p[136], p[137]); this.proxy.pointOut[46] = new SFVec3f(p[138], p[139], p[140]); this.proxy.pointOut[47] = new SFVec3f(p[141], p[142], p[143]); this.proxy.pointOut[48] = new SFVec3f(p[144], p[145], p[146]); this.proxy.pointOut[49] = new SFVec3f(p[147], p[148], p[149]); this.proxy.pointOut[50] = new SFVec3f(p[150], p[151], p[152]); this.proxy.pointOut[51] = new SFVec3f(p[153], p[154], p[155]); this.proxy.pointOut[52] = new SFVec3f(p[156], p[157], p[158]); this.proxy.pointOut[53] = new SFVec3f(p[159], p[160], p[161]); this.proxy.pointOut[54] = new SFVec3f(p[162], p[163], p[164]); this.proxy.pointOut[55] = new SFVec3f(p[165], p[166], p[167]); this.proxy.pointOut[56] = new SFVec3f(p[168], p[169], p[170]); this.proxy.pointOut[57] = new SFVec3f(p[171], p[172], p[173]); this.proxy.pointOut[58] = new SFVec3f(p[174], p[175], p[176]); this.proxy.pointOut[59] = new SFVec3f(p[177], p[178], p[179]); this.proxy.pointOut[60] = new SFVec3f(p[180], p[181], p[182]); this.proxy.pointOut[61] = new SFVec3f(p[183], p[184], p[185]); this.proxy.pointOut[62] = new SFVec3f(p[186], p[187], p[188]); this.proxy.pointOut[63] = new SFVec3f(p[189], p[190], p[191]); this.proxy.pointOut[64] = new SFVec3f(p[192], p[193], p[194]); this.proxy.pointOut[65] = new SFVec3f(p[195], p[196], p[197]); this.proxy.pointOut[66] = new SFVec3f(p[198], p[199], p[200]); this.proxy.pointOut[67] = new SFVec3f(p[201], p[202], p[203]); this.proxy.pointOut[68] = new SFVec3f(p[204], p[205], p[206]); this.proxy.pointOut[69] = new SFVec3f(p[207], p[208], p[209]); this.proxy.pointOut[70] = new SFVec3f(p[210], p[211], p[212]); this.proxy.pointOut[71] = new SFVec3f(p[213], p[214], p[215]); this.proxy.pointOut[72] = new SFVec3f(p[216], p[217], p[218]); this.proxy.pointOut[73] = new SFVec3f(p[219], p[220], p[221]); this.proxy.pointOut[74] = new SFVec3f(p[222], p[223], p[224]); this.proxy.pointOut[75] = new SFVec3f(p[225], p[226], p[227]); this.proxy.pointOut[76] = new SFVec3f(p[228], p[229], p[230]); this.proxy.pointOut[77] = new SFVec3f(p[231], p[232], p[233]); this.proxy.pointOut[78] = new SFVec3f(p[234], p[235], p[236]); this.proxy.pointOut[79] = new SFVec3f(p[237], p[238], p[239]); this.proxy.pointOut[80] = new SFVec3f(p[240], p[241], p[242]);this.proxy.pointOut[81] = new SFVec3f(p[243], p[244], p[245]); this.proxy.pointOut[82] = new SFVec3f(p[246], p[247], p[248]); this.proxy.pointOut[83] = new SFVec3f(p[249], p[250], p[251]); this.proxy.pointOut[84] = new SFVec3f(p[252], p[253], p[254]); this.proxy.pointOut[85] = new SFVec3f(p[255], p[256], p[257]); this.proxy.pointOut[86] = new SFVec3f(p[258], p[259], p[260]); this.proxy.pointOut[87] = new SFVec3f(p[261], p[262], p[263]); this.proxy.pointOut[88] = new SFVec3f(p[264], p[265], p[266]); this.proxy.pointOut[89] = new SFVec3f(p[267], p[268], p[269]); this.proxy.pointOut[90] = new SFVec3f(p[270], p[271], p[272]); this.proxy.pointOut[91] = new SFVec3f(p[273], p[274], p[275]); this.proxy.pointOut[92] = new SFVec3f(p[276], p[277], p[278]); this.proxy.pointOut[93] = new SFVec3f(p[279], p[280], p[281]); this.proxy.pointOut[94] = new SFVec3f(p[282], p[283], p[284]); this.proxy.pointOut[95] = new SFVec3f(p[285], p[286], p[287]); this.proxy.pointOut[96] = new SFVec3f(p[288], p[289], p[290]); this.proxy.pointOut[97] = new SFVec3f(p[291], p[292], p[293]);this.proxy.pointOut[98] = new SFVec3f(p[294], p[295], p[296]); this.proxy.pointOut[99] = new SFVec3f(p[297], p[298], p[299]); this.proxy.pointOut[100] = new SFVec3f(p[300], p[301], p[302]); this.proxy.pointOut[101] = new SFVec3f(p[303], p[304], p[305]); this.proxy.pointOut[102] = new SFVec3f(p[306], p[307], p[308]); this.proxy.pointOut[103] = new SFVec3f(p[309], p[310], p[311]); this.proxy.pointOut[104] = new SFVec3f(p[312], p[313], p[314]); this.proxy.pointOut[105] = new SFVec3f(p[315], p[316], p[317]); this.proxy.pointOut[106] = new SFVec3f(p[318], p[319], p[320]); this.proxy.pointOut[107] = new SFVec3f(p[321], p[322], p[323]); this.proxy.pointOut[108] = new SFVec3f(p[324], p[325], p[326]); this.proxy.pointOut[109] = new SFVec3f(p[327], p[328], p[329]); this.proxy.pointOut[110] = new SFVec3f(p[330], p[331], p[332]); this.proxy.pointOut[111] = new SFVec3f(p[333], p[334], p[335]); this.proxy.pointOut[112] = new SFVec3f(p[336], p[337], p[338]); this.proxy.pointOut[113] = new SFVec3f(p[339], p[340], p[341]); this.proxy.pointOut[114] = new SFVec3f(p[342], p[343], p[344]); this.proxy.pointOut[115] = new SFVec3f(p[345], p[346], p[347]); this.proxy.pointOut[116] = new SFVec3f(p[348], p[349], p[350]); this.proxy.pointOut[117] = new SFVec3f(p[351], p[352], p[353]); this.proxy.pointOut[118] = new SFVec3f(p[354], p[355], p[356]); this.proxy.pointOut[119] = new SFVec3f(p[357], p[358], p[359]); this.proxy.pointOut[120] = new SFVec3f(p[360], p[361], p[362]); this.proxy.pointOut[121] = new SFVec3f(p[363], p[364], p[365]); this.proxy.pointOut[122] = new SFVec3f(p[366], p[367], p[368]); this.proxy.pointOut[123] = new SFVec3f(p[369], p[370], p[371]); this.proxy.pointOut[124] = new SFVec3f(p[372], p[373], p[374]); this.proxy.pointOut[125] = new SFVec3f(p[375], p[376], p[377]); this.proxy.pointOut[126] = new SFVec3f(p[378], p[379], p[380]); this.proxy.pointOut[127] = new SFVec3f(p[381], p[382], p[383]); this.proxy.pointOut[128] = new SFVec3f(p[384], p[385], p[386]); this.proxy.pointOut[129] = new SFVec3f(p[387], p[388], p[389]); this.proxy.pointOut[130] = new SFVec3f(p[390], p[391], p[392]); this.proxy.pointOut[131] = new SFVec3f(p[393], p[394], p[395]); this.proxy.pointOut[132] = new SFVec3f(p[396], p[397], p[398]); this.proxy.pointOut[133] = new SFVec3f(p[399], p[400], p[401]); this.proxy.pointOut[134] = new SFVec3f(p[402], p[403], p[404]); this.proxy.pointOut[135] = new SFVec3f(p[405], p[406], p[407]); this.proxy.pointOut[136] = new SFVec3f(p[408], p[409], p[410]); this.proxy.pointOut[137] = new SFVec3f(p[411], p[412], p[413]); this.proxy.pointOut[138] = new SFVec3f(p[414], p[415], p[416]); this.proxy.pointOut[139] = new SFVec3f(p[417], p[418], p[419]); this.proxy.pointOut[140] = new SFVec3f(p[420], p[421], p[422]); this.proxy.pointOut[141] = new SFVec3f(p[423], p[424], p[425]); this.proxy.pointOut[142] = new SFVec3f(p[426], p[427], p[428]); this.proxy.pointOut[143] = new SFVec3f(p[429], p[430], p[431]); this.proxy.pointOut[144] = new SFVec3f(p[432], p[433], p[434]); this.proxy.pointOut[145] = new SFVec3f(p[435], p[436], p[437]); this.proxy.pointOut[146] = new SFVec3f(p[438], p[439], p[440]); this.proxy.pointOut[147] = new SFVec3f(p[441], p[442], p[443]); this.proxy.pointOut[148] = new SFVec3f(p[444], p[445], p[446]); this.proxy.pointOut[149] = new SFVec3f(p[447], p[448], p[449]); this.proxy.pointOut[150] = new SFVec3f(p[450], p[451], p[452]); this.proxy.pointOut[151] = new SFVec3f(p[453], p[454], p[455]); this.proxy.pointOut[152] = new SFVec3f(p[456], p[457], p[458]); this.proxy.pointOut[153] = new SFVec3f(p[459], p[460], p[461]); this.proxy.pointOut[154] = new SFVec3f(p[462], p[463], p[464]); this.proxy.pointOut[155] = new SFVec3f(p[465], p[466], p[467]); this.proxy.pointOut[156] = new SFVec3f(p[468], p[469], p[470]);  this.proxy.pointOut[157] = new SFVec3f(p[471], p[472], p[473]);        
    
    // End OUTPUT
    
              
    // ENGINE 2nd PART: 
    // Modify the two parameters this.proxy.clearSpanWidth and riseHeigh.
           
    o = 1;  
    p = 1;

    if (this.proxy.clearSpanWidth != 4){     
	o = this.proxy.clearSpanWidth/4;  
    }

    if (this.proxy.riseHeight != 2){     
	p = this.proxy.riseHeight/2;
    }    

    // End ENGINE 2nd PART
   
   
    // OUTPUT 2nd PART:
    // Output for this.proxy.clearSpanWidth and riseHeigh.
   
    this.proxy.computedScale  = new SFVec3f(o, p, 1); 

    // End OUTPUT 2nd PART:
}
/* Not nee;

	this.set_clearSpanWidth = function (newValue) {};

	this.set_riseHeight = function (newValue) {};

	this.set_depth = function (newValue) {};

	this.set_topAbutmentHeight = function (newValue) {};

	this.set_pierWidth = function (newValue) {};

	this.set_pierHeight = function (newValue) {};

	this.set_archHalf = function (newValue) {};

	this.set_archHalfExtensionWidth = function (newValue) {};

	this.set_onlyIntrados = function (newValue) {};

	this.set_archFilled = function (newValue) {};

	this.set_archHalfFilled = function (newValue) {};

	this.set_lintel = function (newValue) {}
*/
       ;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ArchPrototype.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'] = new X3DJSON['Script']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ArchPrototype.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['ACTION'],X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'].initialize === "function") X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'].initialize();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ArchPrototype.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['ACTION']['computedScale'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['ACTION']['computedScale'] = [];
}
X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['ACTION']['computedScale'].push(function(property, value) {
		if (property === 'computedScale') {
			X3DJSON.nodeUtil('Scene','DECLArchPrototype_ArchInstance_ArchTransform','scale',typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'].computedScale === "function" ? X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'].computedScale() : X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'].computedScale, __eventTime);
		}
});
			X3DJSON.nodeUtil('Scene','DECLArchPrototype_ArchInstance_ArchTransform','scale',typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'].computedScale === "function" ? X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'].computedScale() : X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'].computedScale, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ArchPrototype.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['ACTION']['pointOut'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['ACTION']['pointOut'] = [];
}
X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['ACTION']['pointOut'].push(function(property, value) {
		if (property === 'pointOut') {
			X3DJSON.nodeUtil('Scene','DECLArchPrototype_ArchInstance_ArchChord','point',typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'].pointOut === "function" ? X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'].pointOut() : X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'].pointOut, __eventTime);
		}
});
			X3DJSON.nodeUtil('Scene','DECLArchPrototype_ArchInstance_ArchChord','point',typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'].pointOut === "function" ? X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'].pointOut() : X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'].pointOut, __eventTime);
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ArchPrototype.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['ACTION']['indexOut'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['ACTION']['indexOut'] = [];
}
X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript']['ACTION']['indexOut'].push(function(property, value) {
		if (property === 'indexOut') {
			X3DJSON.nodeUtil('Scene','DECLArchPrototype_ArchInstance_ArchIndex','coordIndex',typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'].indexOut === "function" ? X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'].indexOut() : X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'].indexOut, __eventTime);
		}
});
			X3DJSON.nodeUtil('Scene','DECLArchPrototype_ArchInstance_ArchIndex','coordIndex',typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'].indexOut === "function" ? X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'].indexOut() : X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'].indexOut, __eventTime);
			X3DJSON.nodeUtil('Scene','DECLArchPrototype_ArchInstance_ArchTransform','scale',typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'].computedScale === "function" ? X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'].computedScale() : X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'].computedScale, __eventTime);
			X3DJSON.nodeUtil('Scene','DECLArchPrototype_ArchInstance_ArchChord','point',typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'].pointOut === "function" ? X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'].pointOut() : X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'].pointOut, __eventTime);
			X3DJSON.nodeUtil('Scene','DECLArchPrototype_ArchInstance_ArchIndex','coordIndex',typeof X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'].indexOut === "function" ? X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'].indexOut() : X3DJSON['Obj']['Scene']['../data/ArchPrototype.json']['DECLArchPrototype_ArchInstance_ArchPrototypeScript'].indexOut, __eventTime);