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

X3DJSON['Script']['RandomTourTime'] = function() {
	this.set_cycle = function (value) {
		X3DJSON.nodeUtil('RandomTourTime', 'cycle', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.cycle_changed = function () {
		return X3DJSON.nodeUtil('RandomTourTime', 'cycle');
	};
	this.set_cycle(undefined);
	this.set_lastKey = function (value) {
		X3DJSON.nodeUtil('RandomTourTime', 'lastKey', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.lastKey_changed = function () {
		return X3DJSON.nodeUtil('RandomTourTime', 'lastKey');
	};
	this.set_lastKey(new SFFloat(0));
	this.set_orientations = function (value) {
		X3DJSON.nodeUtil('RandomTourTime', 'orientations', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.orientations_changed = function () {
		return X3DJSON.nodeUtil('RandomTourTime', 'orientations');
	};
	this.set_orientations(new MFRotation([[0,1,0,0],[0,1,0,-1.57],[0,1,0,3.14],[0,1,0,1.57],[0,1,0,0],[1,0,0,-1.57],[0,1,0,0],[1,0,0,1.57],[0,1,0,0]]));
	this.set_positions = function (value) {
		X3DJSON.nodeUtil('RandomTourTime', 'positions', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.positions_changed = function () {
		return X3DJSON.nodeUtil('RandomTourTime', 'positions');
	};
	this.set_positions(new MFVec3f([[0,0,10],[-10,0,0],[0,0,-10],[10,0,0],[0,0,10],[0,10,0],[0,0,10],[0,-10,0],[0,0,10]]));
	this.set_position = function (value) {
		X3DJSON.nodeUtil('RandomTourTime', 'position', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.position_changed = function () {
		return X3DJSON.nodeUtil('RandomTourTime', 'position');
	};
	this.set_position(new MFVec3f());
	this.set_orientation = function (value) {
		X3DJSON.nodeUtil('RandomTourTime', 'orientation', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.orientation_changed = function () {
		return X3DJSON.nodeUtil('RandomTourTime', 'orientation');
	};
	this.set_orientation(new MFRotation());
ecmascript:
               
	this.set_cycle = function (value) {
                        var ov = this.lastKey_changed();
                        do {
                            this.set_lastKey ( Math.round(Math.random()*(this.positions_changed().length-1)));
                        } while (this.lastKey_changed() === ov);
                        var vc = this.lastKey_changed();
                        
                        this.set_orientation ( new MFRotation());
                        this.orientation_changed()[0] = new SFRotation(this.orientations_changed()[ov].x, this.orientations_changed()[ov].y, this.orientations_changed()[ov].z, this.orientations_changed()[ov].w);
                        this.orientation_changed()[1] = new SFRotation(this.orientations_changed()[vc].x, this.orientations_changed()[vc].y, this.orientations_changed()[vc].z, this.orientations_changed()[vc].w);
                        this.set_position ( new MFVec3f());
                        this.position_changed()[0] = new SFVec3f(this.positions_changed()[ov].x,this.positions_changed()[ov].y,this.positions_changed()[ov].z);
                        this.position_changed()[1] = new SFVec3f(this.positions_changed()[vc].x,this.positions_changed()[vc].y,this.positions_changed()[vc].z);
                    // }
               };

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['RandomTourTime'] = new X3DJSON['Script']['RandomTourTime']();
if (typeof X3DJSON['Obj']['RandomTourTime'].initialize === "function") X3DJSON['Obj']['RandomTourTime'].initialize();
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime'] === 'undefined') {
X3DJSON['ROUTE']['TourTime'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['TourTime']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime']['cycleTime']['RandomTourTime'] === 'undefined') {
X3DJSON['ROUTE']['TourTime']['cycleTime']['RandomTourTime'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime']['cycleTime']['RandomTourTime']['set_cycle'] === 'undefined') {
X3DJSON['ROUTE']['TourTime']['cycleTime']['RandomTourTime']['set_cycle'] = {};
}

X3DJSON['ROUTE']['TourTime']['cycleTime']['RandomTourTime']['set_cycle']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'cycleTime');
			X3DJSON.nodeUtil('RandomTourTime','set_cycle',X3DJSON.nodeUtil('TourTime','cycleTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['cycleTime'] };
X3DJSON['ROUTE']['TourTime']['cycleTime']['RandomTourTime']['set_cycle']['FROM'].observe(X3DJSON.nodeUtil('TourTime'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime'] === 'undefined') {
X3DJSON['ROUTE']['TourTime'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['TourTime']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime']['cycleTime']['RandomTourTime'] === 'undefined') {
X3DJSON['ROUTE']['TourTime']['cycleTime']['RandomTourTime'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime']['cycleTime']['RandomTourTime']['set_cycle'] === 'undefined') {
X3DJSON['ROUTE']['TourTime']['cycleTime']['RandomTourTime']['set_cycle'] = {};
}

X3DJSON['ROUTE']['TourTime']['cycleTime']['RandomTourTime']['set_cycle']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_cycle');
			if (typeof X3DJSON['Obj']['RandomTourTime'].set_cycle === "function") X3DJSON['Obj']['RandomTourTime'].set_cycle(X3DJSON.nodeUtil('RandomTourTime','set_cycle'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_cycle'] };
X3DJSON['ROUTE']['TourTime']['cycleTime']['RandomTourTime']['set_cycle']['TO'].observe(X3DJSON.nodeUtil('RandomTourTime'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['RandomTourTime'] === 'undefined') {
X3DJSON['ROUTE']['RandomTourTime'] = {};
}
if (typeof X3DJSON['ROUTE']['RandomTourTime']['orientation'] === 'undefined') {
X3DJSON['ROUTE']['RandomTourTime']['orientation'] = {};
}
if (typeof X3DJSON['ROUTE']['RandomTourTime']['orientation']['TourOrientation'] === 'undefined') {
X3DJSON['ROUTE']['RandomTourTime']['orientation']['TourOrientation'] = {};
}
if (typeof X3DJSON['ROUTE']['RandomTourTime']['orientation']['TourOrientation']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['RandomTourTime']['orientation']['TourOrientation']['keyValue'] = {};
}

X3DJSON['ROUTE']['RandomTourTime']['orientation']['TourOrientation']['keyValue']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'orientation');
			X3DJSON.nodeUtil('TourOrientation','keyValue',X3DJSON.nodeUtil('RandomTourTime','orientation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['orientation'] };
X3DJSON['ROUTE']['RandomTourTime']['orientation']['TourOrientation']['keyValue']['FROM'].observe(X3DJSON.nodeUtil('RandomTourTime'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['RandomTourTime'] === 'undefined') {
X3DJSON['ROUTE']['RandomTourTime'] = {};
}
if (typeof X3DJSON['ROUTE']['RandomTourTime']['orientation'] === 'undefined') {
X3DJSON['ROUTE']['RandomTourTime']['orientation'] = {};
}
if (typeof X3DJSON['ROUTE']['RandomTourTime']['orientation']['TourOrientation'] === 'undefined') {
X3DJSON['ROUTE']['RandomTourTime']['orientation']['TourOrientation'] = {};
}
if (typeof X3DJSON['ROUTE']['RandomTourTime']['orientation']['TourOrientation']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['RandomTourTime']['orientation']['TourOrientation']['keyValue'] = {};
}

X3DJSON['ROUTE']['RandomTourTime']['orientation']['TourOrientation']['keyValue']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'keyValue');
			if (typeof X3DJSON['Obj']['TourOrientation'].keyValue === "function") X3DJSON['Obj']['TourOrientation'].keyValue(X3DJSON.nodeUtil('TourOrientation','keyValue'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['keyValue'] };
X3DJSON['ROUTE']['RandomTourTime']['orientation']['TourOrientation']['keyValue']['TO'].observe(X3DJSON.nodeUtil('TourOrientation'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['RandomTourTime'] === 'undefined') {
X3DJSON['ROUTE']['RandomTourTime'] = {};
}
if (typeof X3DJSON['ROUTE']['RandomTourTime']['position'] === 'undefined') {
X3DJSON['ROUTE']['RandomTourTime']['position'] = {};
}
if (typeof X3DJSON['ROUTE']['RandomTourTime']['position']['TourPosition'] === 'undefined') {
X3DJSON['ROUTE']['RandomTourTime']['position']['TourPosition'] = {};
}
if (typeof X3DJSON['ROUTE']['RandomTourTime']['position']['TourPosition']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['RandomTourTime']['position']['TourPosition']['keyValue'] = {};
}

X3DJSON['ROUTE']['RandomTourTime']['position']['TourPosition']['keyValue']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'position');
			X3DJSON.nodeUtil('TourPosition','keyValue',X3DJSON.nodeUtil('RandomTourTime','position'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['position'] };
X3DJSON['ROUTE']['RandomTourTime']['position']['TourPosition']['keyValue']['FROM'].observe(X3DJSON.nodeUtil('RandomTourTime'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['RandomTourTime'] === 'undefined') {
X3DJSON['ROUTE']['RandomTourTime'] = {};
}
if (typeof X3DJSON['ROUTE']['RandomTourTime']['position'] === 'undefined') {
X3DJSON['ROUTE']['RandomTourTime']['position'] = {};
}
if (typeof X3DJSON['ROUTE']['RandomTourTime']['position']['TourPosition'] === 'undefined') {
X3DJSON['ROUTE']['RandomTourTime']['position']['TourPosition'] = {};
}
if (typeof X3DJSON['ROUTE']['RandomTourTime']['position']['TourPosition']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['RandomTourTime']['position']['TourPosition']['keyValue'] = {};
}

X3DJSON['ROUTE']['RandomTourTime']['position']['TourPosition']['keyValue']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'keyValue');
			if (typeof X3DJSON['Obj']['TourPosition'].keyValue === "function") X3DJSON['Obj']['TourPosition'].keyValue(X3DJSON.nodeUtil('TourPosition','keyValue'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['keyValue'] };
X3DJSON['ROUTE']['RandomTourTime']['position']['TourPosition']['keyValue']['TO'].observe(X3DJSON.nodeUtil('TourPosition'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime'] === 'undefined') {
X3DJSON['ROUTE']['TourTime'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['TourTime']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime']['fraction_changed']['TourOrientation'] === 'undefined') {
X3DJSON['ROUTE']['TourTime']['fraction_changed']['TourOrientation'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime']['fraction_changed']['TourOrientation']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['TourTime']['fraction_changed']['TourOrientation']['set_fraction'] = {};
}

X3DJSON['ROUTE']['TourTime']['fraction_changed']['TourOrientation']['set_fraction']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'fraction_changed');
			X3DJSON.nodeUtil('TourOrientation','set_fraction',X3DJSON.nodeUtil('TourTime','fraction_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['fraction_changed'] };
X3DJSON['ROUTE']['TourTime']['fraction_changed']['TourOrientation']['set_fraction']['FROM'].observe(X3DJSON.nodeUtil('TourTime'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime'] === 'undefined') {
X3DJSON['ROUTE']['TourTime'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['TourTime']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime']['fraction_changed']['TourOrientation'] === 'undefined') {
X3DJSON['ROUTE']['TourTime']['fraction_changed']['TourOrientation'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime']['fraction_changed']['TourOrientation']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['TourTime']['fraction_changed']['TourOrientation']['set_fraction'] = {};
}

X3DJSON['ROUTE']['TourTime']['fraction_changed']['TourOrientation']['set_fraction']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_fraction');
			if (typeof X3DJSON['Obj']['TourOrientation'].set_fraction === "function") X3DJSON['Obj']['TourOrientation'].set_fraction(X3DJSON.nodeUtil('TourOrientation','set_fraction'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_fraction'] };
X3DJSON['ROUTE']['TourTime']['fraction_changed']['TourOrientation']['set_fraction']['TO'].observe(X3DJSON.nodeUtil('TourOrientation'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TourOrientation'] === 'undefined') {
X3DJSON['ROUTE']['TourOrientation'] = {};
}
if (typeof X3DJSON['ROUTE']['TourOrientation']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['TourOrientation']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['TourOrientation']['value_changed']['Tour'] === 'undefined') {
X3DJSON['ROUTE']['TourOrientation']['value_changed']['Tour'] = {};
}
if (typeof X3DJSON['ROUTE']['TourOrientation']['value_changed']['Tour']['set_orientation'] === 'undefined') {
X3DJSON['ROUTE']['TourOrientation']['value_changed']['Tour']['set_orientation'] = {};
}

X3DJSON['ROUTE']['TourOrientation']['value_changed']['Tour']['set_orientation']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'value_changed');
			X3DJSON.nodeUtil('Tour','set_orientation',X3DJSON.nodeUtil('TourOrientation','value_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['value_changed'] };
X3DJSON['ROUTE']['TourOrientation']['value_changed']['Tour']['set_orientation']['FROM'].observe(X3DJSON.nodeUtil('TourOrientation'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TourOrientation'] === 'undefined') {
X3DJSON['ROUTE']['TourOrientation'] = {};
}
if (typeof X3DJSON['ROUTE']['TourOrientation']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['TourOrientation']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['TourOrientation']['value_changed']['Tour'] === 'undefined') {
X3DJSON['ROUTE']['TourOrientation']['value_changed']['Tour'] = {};
}
if (typeof X3DJSON['ROUTE']['TourOrientation']['value_changed']['Tour']['set_orientation'] === 'undefined') {
X3DJSON['ROUTE']['TourOrientation']['value_changed']['Tour']['set_orientation'] = {};
}

X3DJSON['ROUTE']['TourOrientation']['value_changed']['Tour']['set_orientation']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_orientation');
			if (typeof X3DJSON['Obj']['Tour'].set_orientation === "function") X3DJSON['Obj']['Tour'].set_orientation(X3DJSON.nodeUtil('Tour','set_orientation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_orientation'] };
X3DJSON['ROUTE']['TourOrientation']['value_changed']['Tour']['set_orientation']['TO'].observe(X3DJSON.nodeUtil('Tour'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime'] === 'undefined') {
X3DJSON['ROUTE']['TourTime'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['TourTime']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime']['fraction_changed']['TourPosition'] === 'undefined') {
X3DJSON['ROUTE']['TourTime']['fraction_changed']['TourPosition'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime']['fraction_changed']['TourPosition']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['TourTime']['fraction_changed']['TourPosition']['set_fraction'] = {};
}

X3DJSON['ROUTE']['TourTime']['fraction_changed']['TourPosition']['set_fraction']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'fraction_changed');
			X3DJSON.nodeUtil('TourPosition','set_fraction',X3DJSON.nodeUtil('TourTime','fraction_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['fraction_changed'] };
X3DJSON['ROUTE']['TourTime']['fraction_changed']['TourPosition']['set_fraction']['FROM'].observe(X3DJSON.nodeUtil('TourTime'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime'] === 'undefined') {
X3DJSON['ROUTE']['TourTime'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['TourTime']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime']['fraction_changed']['TourPosition'] === 'undefined') {
X3DJSON['ROUTE']['TourTime']['fraction_changed']['TourPosition'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime']['fraction_changed']['TourPosition']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['TourTime']['fraction_changed']['TourPosition']['set_fraction'] = {};
}

X3DJSON['ROUTE']['TourTime']['fraction_changed']['TourPosition']['set_fraction']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_fraction');
			if (typeof X3DJSON['Obj']['TourPosition'].set_fraction === "function") X3DJSON['Obj']['TourPosition'].set_fraction(X3DJSON.nodeUtil('TourPosition','set_fraction'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_fraction'] };
X3DJSON['ROUTE']['TourTime']['fraction_changed']['TourPosition']['set_fraction']['TO'].observe(X3DJSON.nodeUtil('TourPosition'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TourPosition'] === 'undefined') {
X3DJSON['ROUTE']['TourPosition'] = {};
}
if (typeof X3DJSON['ROUTE']['TourPosition']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['TourPosition']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['TourPosition']['value_changed']['Tour'] === 'undefined') {
X3DJSON['ROUTE']['TourPosition']['value_changed']['Tour'] = {};
}
if (typeof X3DJSON['ROUTE']['TourPosition']['value_changed']['Tour']['set_position'] === 'undefined') {
X3DJSON['ROUTE']['TourPosition']['value_changed']['Tour']['set_position'] = {};
}

X3DJSON['ROUTE']['TourPosition']['value_changed']['Tour']['set_position']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'value_changed');
			X3DJSON.nodeUtil('Tour','set_position',X3DJSON.nodeUtil('TourPosition','value_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['value_changed'] };
X3DJSON['ROUTE']['TourPosition']['value_changed']['Tour']['set_position']['FROM'].observe(X3DJSON.nodeUtil('TourPosition'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TourPosition'] === 'undefined') {
X3DJSON['ROUTE']['TourPosition'] = {};
}
if (typeof X3DJSON['ROUTE']['TourPosition']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['TourPosition']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['TourPosition']['value_changed']['Tour'] === 'undefined') {
X3DJSON['ROUTE']['TourPosition']['value_changed']['Tour'] = {};
}
if (typeof X3DJSON['ROUTE']['TourPosition']['value_changed']['Tour']['set_position'] === 'undefined') {
X3DJSON['ROUTE']['TourPosition']['value_changed']['Tour']['set_position'] = {};
}

X3DJSON['ROUTE']['TourPosition']['value_changed']['Tour']['set_position']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_position');
			if (typeof X3DJSON['Obj']['Tour'].set_position === "function") X3DJSON['Obj']['Tour'].set_position(X3DJSON.nodeUtil('Tour','set_position'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_position'] };
X3DJSON['ROUTE']['TourPosition']['value_changed']['Tour']['set_position']['TO'].observe(X3DJSON.nodeUtil('Tour'), config);
			X3DJSON.nodeUtil('TourOrientation','set_fraction',X3DJSON.nodeUtil('TourTime','fraction_changed'), __eventTime);
			X3DJSON.nodeUtil('TourPosition','set_fraction',X3DJSON.nodeUtil('TourTime','fraction_changed'), __eventTime);