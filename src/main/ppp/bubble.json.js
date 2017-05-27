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

X3DJSON['Script']['DECLBubble_bubbleA_bounce'] = function() {
	this.set_scale = function (value) {
		X3DJSON.nodeUtil('DECLBubble_bubbleA_bounce', 'scale', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.scale_changed = function () {
		return X3DJSON.nodeUtil('DECLBubble_bubbleA_bounce', 'scale');
	};
	this.set_scale(new SFVec3f(1,1,1));
	this.set_translation = function (value) {
		X3DJSON.nodeUtil('DECLBubble_bubbleA_bounce', 'translation', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.translation_changed = function () {
		return X3DJSON.nodeUtil('DECLBubble_bubbleA_bounce', 'translation');
	};
	this.set_translation(new SFVec3f(0,0,0));
	this.set_velocity = function (value) {
		X3DJSON.nodeUtil('DECLBubble_bubbleA_bounce', 'velocity', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.velocity_changed = function () {
		return X3DJSON.nodeUtil('DECLBubble_bubbleA_bounce', 'velocity');
	};
	this.set_velocity(new SFVec3f(0,0,0));
	this.set_scalvel = function (value) {
		X3DJSON.nodeUtil('DECLBubble_bubbleA_bounce', 'scalvel', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.scalvel_changed = function () {
		return X3DJSON.nodeUtil('DECLBubble_bubbleA_bounce', 'scalvel');
	};
	this.set_scalvel(new SFVec3f(0,0,0));
	this.set_fraction = function (value) {
		X3DJSON.nodeUtil('DECLBubble_bubbleA_bounce', 'fraction', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.fraction_changed = function () {
		return X3DJSON.nodeUtil('DECLBubble_bubbleA_bounce', 'fraction');
	};
	this.set_fraction(undefined);

ecmascript:

	this.initialize = function () {
    this.set_velocity ( new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125));

    this.set_scalvel ( new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4));
}

;

	this.set_fraction = function (value) {
	this.set_translation ( new SFVec3f(
		this.translation_changed().x + this.velocity_changed().x,
		this.translation_changed().y + this.velocity_changed().y,
		this.translation_changed().z + this.velocity_changed().z));
	this.set_scale ( new SFVec3f(
		this.scale_changed().x + this.scalvel_changed().x,
		this.scale_changed().y + this.scalvel_changed().y,
		this.scale_changed().z + this.scalvel_changed().z));
        // if you get to far away or too big, explode
        if ( Math.abs(this.translation_changed().x) > 256) {
		this.translation_changed().x = 0;
		this.initialize();
	}
        if ( Math.abs(this.translation_changed().y) > 256) {
		this.translation_changed().y = 0;
		this.initialize();
	}
        if ( Math.abs(this.translation_changed().z) > 256) {
		this.translation_changed().z = 0;
		this.initialize();
	}
	if (Math.abs(this.scale_changed().x) > 20) {
		this.scale_changed().x = this.scale_changed().x/2;
		this.translation_changed().x = 0;
		this.initialize();
	}
	if (Math.abs(this.scale_changed().y) > 20) {
		this.scale_changed().y = this.scale_changed().y/2;
		this.translation_changed().y = 0;
		this.initialize();
	}
	if (Math.abs(this.scale_changed().z) > 20) {
		this.scale_changed().z = this.scale_changed().z/2;
		this.translation_changed().z = 0;
		this.initialize();
	}
};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLBubble_bubbleA_bounce'] = new X3DJSON['Script']['DECLBubble_bubbleA_bounce']();
if (typeof X3DJSON['Obj']['DECLBubble_bubbleA_bounce'].initialize === "function") X3DJSON['Obj']['DECLBubble_bubbleA_bounce'].initialize();
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLBubble_bubbleA_bounce'] === 'undefined') {
X3DJSON['ROUTE']['DECLBubble_bubbleA_bounce'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLBubble_bubbleA_bounce']['translation_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLBubble_bubbleA_bounce']['translation_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLBubble_bubbleA_bounce']['translation_changed']['DECLBubble_bubbleA_transform'] === 'undefined') {
X3DJSON['ROUTE']['DECLBubble_bubbleA_bounce']['translation_changed']['DECLBubble_bubbleA_transform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLBubble_bubbleA_bounce']['translation_changed']['DECLBubble_bubbleA_transform']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLBubble_bubbleA_bounce']['translation_changed']['DECLBubble_bubbleA_transform']['set_translation'] = {};
}

X3DJSON['ROUTE']['DECLBubble_bubbleA_bounce']['translation_changed']['DECLBubble_bubbleA_transform']['set_translation']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'translation_changed');
			X3DJSON.nodeUtil('DECLBubble_bubbleA_transform','set_translation',X3DJSON.nodeUtil('DECLBubble_bubbleA_bounce','translation_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['translation_changed'] };
X3DJSON['ROUTE']['DECLBubble_bubbleA_bounce']['translation_changed']['DECLBubble_bubbleA_transform']['set_translation']['FROM'].observe(X3DJSON.nodeUtil('DECLBubble_bubbleA_bounce'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLBubble_bubbleA_bounce'] === 'undefined') {
X3DJSON['ROUTE']['DECLBubble_bubbleA_bounce'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLBubble_bubbleA_bounce']['translation_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLBubble_bubbleA_bounce']['translation_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLBubble_bubbleA_bounce']['translation_changed']['DECLBubble_bubbleA_transform'] === 'undefined') {
X3DJSON['ROUTE']['DECLBubble_bubbleA_bounce']['translation_changed']['DECLBubble_bubbleA_transform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLBubble_bubbleA_bounce']['translation_changed']['DECLBubble_bubbleA_transform']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLBubble_bubbleA_bounce']['translation_changed']['DECLBubble_bubbleA_transform']['set_translation'] = {};
}

X3DJSON['ROUTE']['DECLBubble_bubbleA_bounce']['translation_changed']['DECLBubble_bubbleA_transform']['set_translation']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_translation');
			if (typeof X3DJSON['Obj']['DECLBubble_bubbleA_transform'].set_translation === "function") X3DJSON['Obj']['DECLBubble_bubbleA_transform'].set_translation(X3DJSON.nodeUtil('DECLBubble_bubbleA_transform','set_translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_translation'] };
X3DJSON['ROUTE']['DECLBubble_bubbleA_bounce']['translation_changed']['DECLBubble_bubbleA_transform']['set_translation']['TO'].observe(X3DJSON.nodeUtil('DECLBubble_bubbleA_transform'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLBubble_bubbleA_bounce'] === 'undefined') {
X3DJSON['ROUTE']['DECLBubble_bubbleA_bounce'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLBubble_bubbleA_bounce']['scale_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLBubble_bubbleA_bounce']['scale_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLBubble_bubbleA_bounce']['scale_changed']['DECLBubble_bubbleA_transform'] === 'undefined') {
X3DJSON['ROUTE']['DECLBubble_bubbleA_bounce']['scale_changed']['DECLBubble_bubbleA_transform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLBubble_bubbleA_bounce']['scale_changed']['DECLBubble_bubbleA_transform']['set_scale'] === 'undefined') {
X3DJSON['ROUTE']['DECLBubble_bubbleA_bounce']['scale_changed']['DECLBubble_bubbleA_transform']['set_scale'] = {};
}

X3DJSON['ROUTE']['DECLBubble_bubbleA_bounce']['scale_changed']['DECLBubble_bubbleA_transform']['set_scale']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'scale_changed');
			X3DJSON.nodeUtil('DECLBubble_bubbleA_transform','set_scale',X3DJSON.nodeUtil('DECLBubble_bubbleA_bounce','scale_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['scale_changed'] };
X3DJSON['ROUTE']['DECLBubble_bubbleA_bounce']['scale_changed']['DECLBubble_bubbleA_transform']['set_scale']['FROM'].observe(X3DJSON.nodeUtil('DECLBubble_bubbleA_bounce'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLBubble_bubbleA_bounce'] === 'undefined') {
X3DJSON['ROUTE']['DECLBubble_bubbleA_bounce'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLBubble_bubbleA_bounce']['scale_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLBubble_bubbleA_bounce']['scale_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLBubble_bubbleA_bounce']['scale_changed']['DECLBubble_bubbleA_transform'] === 'undefined') {
X3DJSON['ROUTE']['DECLBubble_bubbleA_bounce']['scale_changed']['DECLBubble_bubbleA_transform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLBubble_bubbleA_bounce']['scale_changed']['DECLBubble_bubbleA_transform']['set_scale'] === 'undefined') {
X3DJSON['ROUTE']['DECLBubble_bubbleA_bounce']['scale_changed']['DECLBubble_bubbleA_transform']['set_scale'] = {};
}

X3DJSON['ROUTE']['DECLBubble_bubbleA_bounce']['scale_changed']['DECLBubble_bubbleA_transform']['set_scale']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_scale');
			if (typeof X3DJSON['Obj']['DECLBubble_bubbleA_transform'].set_scale === "function") X3DJSON['Obj']['DECLBubble_bubbleA_transform'].set_scale(X3DJSON.nodeUtil('DECLBubble_bubbleA_transform','set_scale'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_scale'] };
X3DJSON['ROUTE']['DECLBubble_bubbleA_bounce']['scale_changed']['DECLBubble_bubbleA_transform']['set_scale']['TO'].observe(X3DJSON.nodeUtil('DECLBubble_bubbleA_transform'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLBubble_bubbleA_bubbleClock'] === 'undefined') {
X3DJSON['ROUTE']['DECLBubble_bubbleA_bubbleClock'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLBubble_bubbleA_bubbleClock']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLBubble_bubbleA_bubbleClock']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLBubble_bubbleA_bubbleClock']['fraction_changed']['DECLBubble_bubbleA_bounce'] === 'undefined') {
X3DJSON['ROUTE']['DECLBubble_bubbleA_bubbleClock']['fraction_changed']['DECLBubble_bubbleA_bounce'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLBubble_bubbleA_bubbleClock']['fraction_changed']['DECLBubble_bubbleA_bounce']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['DECLBubble_bubbleA_bubbleClock']['fraction_changed']['DECLBubble_bubbleA_bounce']['set_fraction'] = {};
}

X3DJSON['ROUTE']['DECLBubble_bubbleA_bubbleClock']['fraction_changed']['DECLBubble_bubbleA_bounce']['set_fraction']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'fraction_changed');
			X3DJSON.nodeUtil('DECLBubble_bubbleA_bounce','set_fraction',X3DJSON.nodeUtil('DECLBubble_bubbleA_bubbleClock','fraction_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['fraction_changed'] };
X3DJSON['ROUTE']['DECLBubble_bubbleA_bubbleClock']['fraction_changed']['DECLBubble_bubbleA_bounce']['set_fraction']['FROM'].observe(X3DJSON.nodeUtil('DECLBubble_bubbleA_bubbleClock'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLBubble_bubbleA_bubbleClock'] === 'undefined') {
X3DJSON['ROUTE']['DECLBubble_bubbleA_bubbleClock'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLBubble_bubbleA_bubbleClock']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLBubble_bubbleA_bubbleClock']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLBubble_bubbleA_bubbleClock']['fraction_changed']['DECLBubble_bubbleA_bounce'] === 'undefined') {
X3DJSON['ROUTE']['DECLBubble_bubbleA_bubbleClock']['fraction_changed']['DECLBubble_bubbleA_bounce'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLBubble_bubbleA_bubbleClock']['fraction_changed']['DECLBubble_bubbleA_bounce']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['DECLBubble_bubbleA_bubbleClock']['fraction_changed']['DECLBubble_bubbleA_bounce']['set_fraction'] = {};
}

X3DJSON['ROUTE']['DECLBubble_bubbleA_bubbleClock']['fraction_changed']['DECLBubble_bubbleA_bounce']['set_fraction']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_fraction');
			if (typeof X3DJSON['Obj']['DECLBubble_bubbleA_bounce'].set_fraction === "function") X3DJSON['Obj']['DECLBubble_bubbleA_bounce'].set_fraction(X3DJSON.nodeUtil('DECLBubble_bubbleA_bounce','set_fraction'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_fraction'] };
X3DJSON['ROUTE']['DECLBubble_bubbleA_bubbleClock']['fraction_changed']['DECLBubble_bubbleA_bounce']['set_fraction']['TO'].observe(X3DJSON.nodeUtil('DECLBubble_bubbleA_bounce'), config);
			X3DJSON.nodeUtil('DECLBubble_bubbleA_bounce','set_fraction',X3DJSON.nodeUtil('DECLBubble_bubbleA_bubbleClock','fraction_changed'), __eventTime);