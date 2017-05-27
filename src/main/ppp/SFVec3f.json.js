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

X3DJSON['Script']['Bounce'] = function() {
	this.set_translation = function (value) {
		X3DJSON.nodeUtil('Bounce', 'translation', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.translation_changed = function () {
		return X3DJSON.nodeUtil('Bounce', 'translation');
	};
	this.set_translation(new SFVec3f(0,0,0));
	this.set_translation = function (value) {
		X3DJSON.nodeUtil('Bounce', 'translation', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.translation_changed = function () {
		return X3DJSON.nodeUtil('Bounce', 'translation');
	};
	this.set_translation(new SFVec3f(0,0,0));
	this.set_translation = function (value) {
		X3DJSON.nodeUtil('Bounce', 'translation', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.translation_changed = function () {
		return X3DJSON.nodeUtil('Bounce', 'translation');
	};
	this.set_translation(new SFVec3f(0,0,0));
	this.set_velocity = function (value) {
		X3DJSON.nodeUtil('Bounce', 'velocity', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.velocity_changed = function () {
		return X3DJSON.nodeUtil('Bounce', 'velocity');
	};
	this.set_velocity(new SFVec3f(0,0,0));
	this.set_fraction = function (value) {
		X3DJSON.nodeUtil('Bounce', 'fraction', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.fraction_changed = function () {
		return X3DJSON.nodeUtil('Bounce', 'fraction');
	};
	this.set_fraction(undefined);

ecmascript:
			
	this.newBubble = function () {
			    this.set_translation ( new SFVec3f(0, 0, 0));
			    this.set_velocity ( new SFVec3f(
			    	Math.random() - 0.5,
				Math.random() - 0.5,
				Math.random() - 0.5));
			}
			;

	this.set_fraction = function () {
			    this.set_translation ( new SFVec3f(
			    	this.translation_changed().x + this.velocity_changed().x,
				this.translation_changed().y + this.velocity_changed().y,
				this.translation_changed().z + this.velocity_changed().z));
			    for (var j = 0; j <= 2; j++) {
				    if (Math.abs(this.translation_changed().x) > 10) {
					this.newBubble();
				    } else if (Math.abs(this.translation_changed().y) > 10) {
					this.newBubble();
				    } else if (Math.abs(this.translation_changed().z) > 10) {
					this.newBubble();
				    } else {
					this.set_velocity ( new SFVec3f(
						this.velocity_changed().x + Math.random() * 0.2 - 0.1,
						this.velocity_changed().y + Math.random() * 0.2 - 0.1,
						this.velocity_changed().z + Math.random() * 0.2 - 0.1
					));
				    }
			    }
			}

			;

	this.initialize = function () {
			     this.newBubble();
			};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['Bounce'] = new X3DJSON['Script']['Bounce']();
if (typeof X3DJSON['Obj']['Bounce'].initialize === "function") X3DJSON['Obj']['Bounce'].initialize();
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime'] === 'undefined') {
X3DJSON['ROUTE']['TourTime'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['TourTime']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime']['cycleTime']['Bounce'] === 'undefined') {
X3DJSON['ROUTE']['TourTime']['cycleTime']['Bounce'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime']['cycleTime']['Bounce']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['TourTime']['cycleTime']['Bounce']['set_fraction'] = {};
}

X3DJSON['ROUTE']['TourTime']['cycleTime']['Bounce']['set_fraction']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'cycleTime');
			X3DJSON.nodeUtil('Bounce','set_fraction',X3DJSON.nodeUtil('TourTime','cycleTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['cycleTime'] };
X3DJSON['ROUTE']['TourTime']['cycleTime']['Bounce']['set_fraction']['FROM'].observe(X3DJSON.nodeUtil('TourTime'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime'] === 'undefined') {
X3DJSON['ROUTE']['TourTime'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['TourTime']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime']['cycleTime']['Bounce'] === 'undefined') {
X3DJSON['ROUTE']['TourTime']['cycleTime']['Bounce'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime']['cycleTime']['Bounce']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['TourTime']['cycleTime']['Bounce']['set_fraction'] = {};
}

X3DJSON['ROUTE']['TourTime']['cycleTime']['Bounce']['set_fraction']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_fraction');
			if (typeof X3DJSON['Obj']['Bounce'].set_fraction === "function") X3DJSON['Obj']['Bounce'].set_fraction(X3DJSON.nodeUtil('Bounce','set_fraction'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_fraction'] };
X3DJSON['ROUTE']['TourTime']['cycleTime']['Bounce']['set_fraction']['TO'].observe(X3DJSON.nodeUtil('Bounce'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['Bounce'] === 'undefined') {
X3DJSON['ROUTE']['Bounce'] = {};
}
if (typeof X3DJSON['ROUTE']['Bounce']['translation_changed'] === 'undefined') {
X3DJSON['ROUTE']['Bounce']['translation_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['Bounce']['translation_changed']['transform'] === 'undefined') {
X3DJSON['ROUTE']['Bounce']['translation_changed']['transform'] = {};
}
if (typeof X3DJSON['ROUTE']['Bounce']['translation_changed']['transform']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['Bounce']['translation_changed']['transform']['set_translation'] = {};
}

X3DJSON['ROUTE']['Bounce']['translation_changed']['transform']['set_translation']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'translation_changed');
			X3DJSON.nodeUtil('transform','set_translation',X3DJSON.nodeUtil('Bounce','translation_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['translation_changed'] };
X3DJSON['ROUTE']['Bounce']['translation_changed']['transform']['set_translation']['FROM'].observe(X3DJSON.nodeUtil('Bounce'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['Bounce'] === 'undefined') {
X3DJSON['ROUTE']['Bounce'] = {};
}
if (typeof X3DJSON['ROUTE']['Bounce']['translation_changed'] === 'undefined') {
X3DJSON['ROUTE']['Bounce']['translation_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['Bounce']['translation_changed']['transform'] === 'undefined') {
X3DJSON['ROUTE']['Bounce']['translation_changed']['transform'] = {};
}
if (typeof X3DJSON['ROUTE']['Bounce']['translation_changed']['transform']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['Bounce']['translation_changed']['transform']['set_translation'] = {};
}

X3DJSON['ROUTE']['Bounce']['translation_changed']['transform']['set_translation']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_translation');
			if (typeof X3DJSON['Obj']['transform'].set_translation === "function") X3DJSON['Obj']['transform'].set_translation(X3DJSON.nodeUtil('transform','set_translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_translation'] };
X3DJSON['ROUTE']['Bounce']['translation_changed']['transform']['set_translation']['TO'].observe(X3DJSON.nodeUtil('transform'), config);
			X3DJSON.nodeUtil('Bounce','set_fraction',X3DJSON.nodeUtil('TourTime','cycleTime'), __eventTime);