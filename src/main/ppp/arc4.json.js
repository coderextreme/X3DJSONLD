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
var SFRotation = x3dom.fields.SFRotation;
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
if (typeof X3DJSON['Scene../data/arc4.json'] === 'undefined') {
	X3DJSON['Scene../data/arc4.json'] = {};
}

if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/arc4.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/arc4.json'] = {};
}

X3DJSON['Script']['Scene']['../data/arc4.json']['DECLpoint_G1_MB1'] = function() {
	this.set_translation = function (value) {
		try {
			this.proxy.translation = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting translation '+e);
			console.error('Problems setting translation',e);
		}
	};
	this.translation_changed = function () {
		var value = this.translation;
		return value;
	};
	try {
		this.translation = new SFVec3f(0,0,0);
	} catch (e) {
		console.log('Problems setting translation '+e);
		console.error('Problems setting translation',e);
	}
	this.set_old = function (value) {
		try {
			this.proxy.old = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting old '+e);
			console.error('Problems setting old',e);
		}
	};
	this.old_changed = function () {
		var value = this.old;
		return value;
	};
	try {
		this.old = new SFVec3f(0,0,0);
	} catch (e) {
		console.log('Problems setting old '+e);
		console.error('Problems setting old',e);
	}
	this.set_location = function (value) {
		try {
			this.proxy.location = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting location '+e);
			console.error('Problems setting location',e);
		}
	};
	this.location_changed = function () {
		var value = this.location;
		return value;
	};
	try {
		this.location = undefined;
	} catch (e) {
		console.log('Problems setting location '+e);
		console.error('Problems setting location',e);
	}
	this.set_keyValue = function (value) {
		try {
			this.proxy.keyValue = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting keyValue '+e);
			console.error('Problems setting keyValue',e);
		}
	};
	this.keyValue_changed = function () {
		var value = this.keyValue;
		return value;
	};
	try {
		this.keyValue = new MFVec3f([new SFVec3f ( 0 , 0 , 0 ),new SFVec3f ( 0 , 5 , 0 )]);
	} catch (e) {
		console.log('Problems setting keyValue '+e);
		console.error('Problems setting keyValue',e);
	}

ecmascript:
	
	this.set_location = function (value) {
                    this.proxy.old = this.proxy.translation;
		    this.proxy.translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);
                    this.proxy.keyValue = new MFVec3f([this.proxy.old, this.proxy.translation]);
		    // console.error(this.proxy.keyValue);
		}


;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/arc4.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/arc4.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G1_MB1'] = new X3DJSON['Script']['Scene']['../data/arc4.json']['DECLpoint_G1_MB1']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/arc4.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/arc4.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G1_MB1'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G1_MB1'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G1_MB1']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G1_MB1']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G1_MB1'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G1_MB1']['ACTION'],X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G1_MB1']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G1_MB1'].initialize === "function") X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G1_MB1'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/arc4.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/arc4.json'] = {};
}

X3DJSON['Script']['Scene']['../data/arc4.json']['DECLpoint_G2_MB1'] = function() {
	this.set_translation = function (value) {
		try {
			this.proxy.translation = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting translation '+e);
			console.error('Problems setting translation',e);
		}
	};
	this.translation_changed = function () {
		var value = this.translation;
		return value;
	};
	try {
		this.translation = new SFVec3f(0,0,0);
	} catch (e) {
		console.log('Problems setting translation '+e);
		console.error('Problems setting translation',e);
	}
	this.set_old = function (value) {
		try {
			this.proxy.old = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting old '+e);
			console.error('Problems setting old',e);
		}
	};
	this.old_changed = function () {
		var value = this.old;
		return value;
	};
	try {
		this.old = new SFVec3f(0,0,0);
	} catch (e) {
		console.log('Problems setting old '+e);
		console.error('Problems setting old',e);
	}
	this.set_location = function (value) {
		try {
			this.proxy.location = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting location '+e);
			console.error('Problems setting location',e);
		}
	};
	this.location_changed = function () {
		var value = this.location;
		return value;
	};
	try {
		this.location = undefined;
	} catch (e) {
		console.log('Problems setting location '+e);
		console.error('Problems setting location',e);
	}
	this.set_keyValue = function (value) {
		try {
			this.proxy.keyValue = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting keyValue '+e);
			console.error('Problems setting keyValue',e);
		}
	};
	this.keyValue_changed = function () {
		var value = this.keyValue;
		return value;
	};
	try {
		this.keyValue = new MFVec3f([new SFVec3f ( 0 , 0 , 0 ),new SFVec3f ( 0 , 5 , 0 )]);
	} catch (e) {
		console.log('Problems setting keyValue '+e);
		console.error('Problems setting keyValue',e);
	}

ecmascript:
	
	this.set_location = function (value) {
                    this.proxy.old = this.proxy.translation;
		    this.proxy.translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);
                    this.proxy.keyValue = new MFVec3f([this.proxy.old, this.proxy.translation]);
		    // console.error(this.proxy.keyValue);
		}


;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/arc4.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/arc4.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G2_MB1'] = new X3DJSON['Script']['Scene']['../data/arc4.json']['DECLpoint_G2_MB1']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/arc4.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/arc4.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G2_MB1'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G2_MB1'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G2_MB1']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G2_MB1']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G2_MB1'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G2_MB1']['ACTION'],X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G2_MB1']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G2_MB1'].initialize === "function") X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G2_MB1'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/arc4.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/arc4.json'] = {};
}

X3DJSON['Script']['Scene']['../data/arc4.json']['DECLx3dconnector_connector1_S1'] = function() {
	this.set_startnode = function (value) {
		try {
			this.proxy.startnode = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting startnode '+e);
			console.error('Problems setting startnode',e);
		}
	};
	this.startnode_changed = function () {
		var value = this.startnode;
		return value;
	};
	try {
		this.startnode = new SFNode();
	} catch (e) {
		console.log('Problems setting startnode '+e);
		console.error('Problems setting startnode',e);
	}
	this.set_endnode = function (value) {
		try {
			this.proxy.endnode = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting endnode '+e);
			console.error('Problems setting endnode',e);
		}
	};
	this.endnode_changed = function () {
		var value = this.endnode;
		return value;
	};
	try {
		this.endnode = new SFNode();
	} catch (e) {
		console.log('Problems setting endnode '+e);
		console.error('Problems setting endnode',e);
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
		this.position = X3DJSON.nodeUtil("Scene","DECLx3dconnector_connector1_trans");
	} catch (e) {
		console.log('Problems setting position '+e);
		console.error('Problems setting position',e);
	}
	this.set_rotscale = function (value) {
		try {
			this.proxy.rotscale = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting rotscale '+e);
			console.error('Problems setting rotscale',e);
		}
	};
	this.rotscale_changed = function () {
		var value = this.rotscale;
		return value;
	};
	try {
		this.rotscale = X3DJSON.nodeUtil("Scene","DECLx3dconnector_connector1_rotscale");
	} catch (e) {
		console.log('Problems setting rotscale '+e);
		console.error('Problems setting rotscale',e);
	}
	this.set_startpoint = function (value) {
		try {
			this.proxy.startpoint = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting startpoint '+e);
			console.error('Problems setting startpoint',e);
		}
	};
	this.startpoint_changed = function () {
		var value = this.startpoint;
		return value;
	};
	try {
		this.startpoint = undefined;
	} catch (e) {
		console.log('Problems setting startpoint '+e);
		console.error('Problems setting startpoint',e);
	}
	this.set_endpoint = function (value) {
		try {
			this.proxy.endpoint = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting endpoint '+e);
			console.error('Problems setting endpoint',e);
		}
	};
	this.endpoint_changed = function () {
		var value = this.endpoint;
		return value;
	};
	try {
		this.endpoint = undefined;
	} catch (e) {
		console.log('Problems setting endpoint '+e);
		console.error('Problems setting endpoint',e);
	}

ecmascript:
       
	this.recompute = function (startpoint,endpoint){
	    if (typeof endpoint === 'undefined') {
		    if (typeof Quaternion !== 'undefined') {
			    return {
				    scale : new SFVec3f(1.0,1.0,1.0),
				    translation : new SFVec3f(1.0,1.0,1.0),
			    	    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), 1.0)
			    };
	    	    } else if (typeof SFRotation !== 'undefined') {
			    return {
				    scale : new SFVec3f(1.0,1.0,1.0),
				    translation : new SFVec3f(1.0,1.0,1.0),
			    	    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),1.0)
			    };
	    	    } else {
			    return {
				    scale : new SFVec3f(1.0,1.0,1.0),
				    translation : new SFVec3f(1.0,1.0,1.0)
			    };
		    }
	    }
            var dif = endpoint.subtract(startpoint);
            var dist = dif.length()*0.5;
            var dif2 = dif.multiply(0.5);
            var norm = dif.normalize();
            var transl = startpoint.add(dif2);
	    if (typeof Quaternion !== 'undefined') {
		    return {
			    scale : new SFVec3f(1.0,dist,1.0),
			    translation : transl,
			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)
		    };
	    } else if (typeof SFRotation !== 'undefined') {
		    return {
			    scale : new SFVec3f(1.0,dist,1.0),
			    translation : transl,
			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)
		    };
	    } else {
		    return {
			    scale : new SFVec3f(1.0,dist,1.0),
			    translation : transl
		    };
	    }
	}
;

	this.recompute_and_route = function (startpoint, endpoint) {
	      var trafo = this.recompute(startpoint, endpoint);
	      X3DJSON.nodeUtil("Scene","DECLx3dconnector_connector1_trans", "translation",  trafo.translation);
	      X3DJSON.nodeUtil("Scene","DECLx3dconnector_connector1_rotscale", "rotation",  trafo.rotation);
	      X3DJSON.nodeUtil("Scene","DECLx3dconnector_connector1_rotscale", "scale",  trafo.scale);
	}
       ;

	this.initialize = function (){
            this.recompute_and_route(this.proxy.startnode.translation,this.proxy.endnode.translation);
        }
       ;

	this.set_startpoint = function (val,t){
            this.recompute_and_route(val,this.proxy.endnode.translation);
        }
       ;

	this.set_endpoint = function (val,t){
            this.recompute_and_route(this.proxy.startnode.translation,val);
        }
;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/arc4.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/arc4.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLx3dconnector_connector1_S1'] = new X3DJSON['Script']['Scene']['../data/arc4.json']['DECLx3dconnector_connector1_S1']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/arc4.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/arc4.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLx3dconnector_connector1_S1'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLx3dconnector_connector1_S1'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLx3dconnector_connector1_S1']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLx3dconnector_connector1_S1']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLx3dconnector_connector1_S1'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLx3dconnector_connector1_S1']['ACTION'],X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLx3dconnector_connector1_S1']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLx3dconnector_connector1_S1'].initialize === "function") X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLx3dconnector_connector1_S1'].initialize();
    if (X3DJSON.nodeUtil("Scene","DECLpoint_G1_CL1")) {
X3DJSON.nodeUtil("Scene","DECLpoint_G1_CL1").addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G1_MB1'].set_location(X3DJSON.nodeUtil("Scene","DECLpoint_G1_CL1","cycleTime"), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G1_MB1'].set_location(X3DJSON.nodeUtil("Scene","DECLpoint_G1_CL1","cycleTime"), __eventTime);
    if (X3DJSON.nodeUtil("Scene","DECLpoint_G1_CL1")) {
X3DJSON.nodeUtil("Scene","DECLpoint_G1_CL1").addEventListener('outputchange', function(event) {
}, false);
}
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/arc4.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/arc4.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G1_MB1'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G1_MB1'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G1_MB1']['ACTION']['keyValue'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G1_MB1']['ACTION']['keyValue'] = [];
}
X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G1_MB1']['ACTION']['keyValue'].push(function(property, value) {
		if (property === 'keyValue') {
			X3DJSON.nodeUtil("Scene","DECLpoint_G1_PI1","keyValue",typeof X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G1_MB1'].keyValue === "function" ? X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G1_MB1'].keyValue() : X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G1_MB1'].keyValue, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","DECLpoint_G1_PI1","keyValue",typeof X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G1_MB1'].keyValue === "function" ? X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G1_MB1'].keyValue() : X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G1_MB1'].keyValue, __eventTime);
    if (X3DJSON.nodeUtil("Scene","DECLpoint_G1_PI1")) {
X3DJSON.nodeUtil("Scene","DECLpoint_G1_PI1").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLpoint_G2_CL1")) {
X3DJSON.nodeUtil("Scene","DECLpoint_G2_CL1").addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G2_MB1'].set_location(X3DJSON.nodeUtil("Scene","DECLpoint_G2_CL1","cycleTime"), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G2_MB1'].set_location(X3DJSON.nodeUtil("Scene","DECLpoint_G2_CL1","cycleTime"), __eventTime);
    if (X3DJSON.nodeUtil("Scene","DECLpoint_G2_CL1")) {
X3DJSON.nodeUtil("Scene","DECLpoint_G2_CL1").addEventListener('outputchange', function(event) {
}, false);
}
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/arc4.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/arc4.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G2_MB1'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G2_MB1'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G2_MB1']['ACTION']['keyValue'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G2_MB1']['ACTION']['keyValue'] = [];
}
X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G2_MB1']['ACTION']['keyValue'].push(function(property, value) {
		if (property === 'keyValue') {
			X3DJSON.nodeUtil("Scene","DECLpoint_G2_PI1","keyValue",typeof X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G2_MB1'].keyValue === "function" ? X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G2_MB1'].keyValue() : X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G2_MB1'].keyValue, __eventTime);
		}
});
			X3DJSON.nodeUtil("Scene","DECLpoint_G2_PI1","keyValue",typeof X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G2_MB1'].keyValue === "function" ? X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G2_MB1'].keyValue() : X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G2_MB1'].keyValue, __eventTime);
    if (X3DJSON.nodeUtil("Scene","DECLpoint_G2_PI1")) {
X3DJSON.nodeUtil("Scene","DECLpoint_G2_PI1").addEventListener('outputchange', function(event) {
}, false);
}
    if (X3DJSON.nodeUtil("Scene","DECLpoint_G1_node")) {
X3DJSON.nodeUtil("Scene","DECLpoint_G1_node").addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLx3dconnector_connector1_S1'].set_startpoint(X3DJSON.nodeUtil("Scene","DECLpoint_G1_node","translation"), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLx3dconnector_connector1_S1'].set_startpoint(X3DJSON.nodeUtil("Scene","DECLpoint_G1_node","translation"), __eventTime);
    if (X3DJSON.nodeUtil("Scene","DECLpoint_G2_node")) {
X3DJSON.nodeUtil("Scene","DECLpoint_G2_node").addEventListener('outputchange', function(event) {
			X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLx3dconnector_connector1_S1'].set_endpoint(X3DJSON.nodeUtil("Scene","DECLpoint_G2_node","translation"), __eventTime);
}, false);
}
			X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLx3dconnector_connector1_S1'].set_endpoint(X3DJSON.nodeUtil("Scene","DECLpoint_G2_node","translation"), __eventTime);
			X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G1_MB1'].set_location(X3DJSON.nodeUtil("Scene","DECLpoint_G1_CL1","cycleTime"), __eventTime);
			X3DJSON.nodeUtil("Scene","DECLpoint_G1_PI1","keyValue",typeof X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G1_MB1'].keyValue === "function" ? X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G1_MB1'].keyValue() : X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G1_MB1'].keyValue, __eventTime);
			X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G2_MB1'].set_location(X3DJSON.nodeUtil("Scene","DECLpoint_G2_CL1","cycleTime"), __eventTime);
			X3DJSON.nodeUtil("Scene","DECLpoint_G2_PI1","keyValue",typeof X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G2_MB1'].keyValue === "function" ? X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G2_MB1'].keyValue() : X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLpoint_G2_MB1'].keyValue, __eventTime);
			X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLx3dconnector_connector1_S1'].set_startpoint(X3DJSON.nodeUtil("Scene","DECLpoint_G1_node","translation"), __eventTime);
			X3DJSON['Obj']['Scene']['../data/arc4.json']['DECLx3dconnector_connector1_S1'].set_endpoint(X3DJSON.nodeUtil("Scene","DECLpoint_G2_node","translation"), __eventTime);