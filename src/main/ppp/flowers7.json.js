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

X3DJSON['Script']['UrlSelector'] = function() {
	this.set_frontUrls = function (value) {
		X3DJSON.nodeUtil('UrlSelector', 'frontUrls', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.frontUrls_changed = function () {
		return X3DJSON.nodeUtil('UrlSelector', 'frontUrls');
	};
	this.set_frontUrls(new MFString("../resources/images/all_probes/beach_cross/beach_front.png","../resources/images/all_probes/building_cross/building_front.png","../resources/images/all_probes/campus_cross/campus_front.png","../resources/images/all_probes/galileo_cross/galileo_front.png","../resources/images/all_probes/grace_cross/grace_front.png","../resources/images/all_probes/kitchen_cross/kitchen_front.png","../resources/images/all_probes/rnl_cross/rnl_front.png","../resources/images/all_probes/stpeters_cross/stpeters_front.png","../resources/images/all_probes/uffizi_cross/uffizi_front.png"));
	this.set_backUrls = function (value) {
		X3DJSON.nodeUtil('UrlSelector', 'backUrls', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.backUrls_changed = function () {
		return X3DJSON.nodeUtil('UrlSelector', 'backUrls');
	};
	this.set_backUrls(new MFString("../resources/images/all_probes/beach_cross/beach_back.png","../resources/images/all_probes/building_cross/building_back.png","../resources/images/all_probes/campus_cross/campus_back.png","../resources/images/all_probes/galileo_cross/galileo_back.png","../resources/images/all_probes/grace_cross/grace_back.png","../resources/images/all_probes/kitchen_cross/kitchen_back.png","../resources/images/all_probes/rnl_cross/rnl_back.png","../resources/images/all_probes/stpeters_cross/stpeters_back.png","../resources/images/all_probes/uffizi_cross/uffizi_back.png"));
	this.set_leftUrls = function (value) {
		X3DJSON.nodeUtil('UrlSelector', 'leftUrls', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.leftUrls_changed = function () {
		return X3DJSON.nodeUtil('UrlSelector', 'leftUrls');
	};
	this.set_leftUrls(new MFString("../resources/images/all_probes/beach_cross/beach_left.png","../resources/images/all_probes/building_cross/building_left.png","../resources/images/all_probes/campus_cross/campus_left.png","../resources/images/all_probes/galileo_cross/galileo_left.png","../resources/images/all_probes/grace_cross/grace_left.png","../resources/images/all_probes/kitchen_cross/kitchen_left.png","../resources/images/all_probes/rnl_cross/rnl_left.png","../resources/images/all_probes/stpeters_cross/stpeters_left.png","../resources/images/all_probes/uffizi_cross/uffizi_left.png"));
	this.set_rightUrls = function (value) {
		X3DJSON.nodeUtil('UrlSelector', 'rightUrls', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.rightUrls_changed = function () {
		return X3DJSON.nodeUtil('UrlSelector', 'rightUrls');
	};
	this.set_rightUrls(new MFString("../resources/images/all_probes/beach_cross/beach_right.png","../resources/images/all_probes/building_cross/building_right.png","../resources/images/all_probes/campus_cross/campus_right.png","../resources/images/all_probes/galileo_cross/galileo_right.png","../resources/images/all_probes/grace_cross/grace_right.png","../resources/images/all_probes/kitchen_cross/kitchen_right.png","../resources/images/all_probes/rnl_cross/rnl_right.png","../resources/images/all_probes/stpeters_cross/stpeters_right.png","../resources/images/all_probes/uffizi_cross/uffizi_right.png"));
	this.set_topUrls = function (value) {
		X3DJSON.nodeUtil('UrlSelector', 'topUrls', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.topUrls_changed = function () {
		return X3DJSON.nodeUtil('UrlSelector', 'topUrls');
	};
	this.set_topUrls(new MFString("../resources/images/all_probes/beach_cross/beach_top.png","../resources/images/all_probes/building_cross/building_top.png","../resources/images/all_probes/campus_cross/campus_top.png","../resources/images/all_probes/galileo_cross/galileo_top.png","../resources/images/all_probes/grace_cross/grace_top.png","../resources/images/all_probes/kitchen_cross/kitchen_top.png","../resources/images/all_probes/rnl_cross/rnl_top.png","../resources/images/all_probes/stpeters_cross/stpeters_top.png","../resources/images/all_probes/uffizi_cross/uffizi_top.png"));
	this.set_bottomUrls = function (value) {
		X3DJSON.nodeUtil('UrlSelector', 'bottomUrls', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.bottomUrls_changed = function () {
		return X3DJSON.nodeUtil('UrlSelector', 'bottomUrls');
	};
	this.set_bottomUrls(new MFString("../resources/images/all_probes/beach_cross/beach_bottom.png","../resources/images/all_probes/building_cross/building_bottom.png","../resources/images/all_probes/campus_cross/campus_bottom.png","../resources/images/all_probes/galileo_cross/galileo_bottom.png","../resources/images/all_probes/grace_cross/grace_bottom.png","../resources/images/all_probes/kitchen_cross/kitchen_bottom.png","../resources/images/all_probes/rnl_cross/rnl_bottom.png","../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","../resources/images/all_probes/uffizi_cross/uffizi_bottom.png"));
	this.set_front = function (value) {
		X3DJSON.nodeUtil('UrlSelector', 'front', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.front_changed = function () {
		return X3DJSON.nodeUtil('UrlSelector', 'front');
	};
	this.set_front(new MFString());
	this.set_back = function (value) {
		X3DJSON.nodeUtil('UrlSelector', 'back', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.back_changed = function () {
		return X3DJSON.nodeUtil('UrlSelector', 'back');
	};
	this.set_back(new MFString());
	this.set_left = function (value) {
		X3DJSON.nodeUtil('UrlSelector', 'left', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.left_changed = function () {
		return X3DJSON.nodeUtil('UrlSelector', 'left');
	};
	this.set_left(new MFString());
	this.set_right = function (value) {
		X3DJSON.nodeUtil('UrlSelector', 'right', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.right_changed = function () {
		return X3DJSON.nodeUtil('UrlSelector', 'right');
	};
	this.set_right(new MFString());
	this.set_top = function (value) {
		X3DJSON.nodeUtil('UrlSelector', 'top', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.top_changed = function () {
		return X3DJSON.nodeUtil('UrlSelector', 'top');
	};
	this.set_top(new MFString());
	this.set_bottom = function (value) {
		X3DJSON.nodeUtil('UrlSelector', 'bottom', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.bottom_changed = function () {
		return X3DJSON.nodeUtil('UrlSelector', 'bottom');
	};
	this.set_bottom(new MFString());
	this.set_fraction = function (value) {
		X3DJSON.nodeUtil('UrlSelector', 'fraction', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.fraction_changed = function () {
		return X3DJSON.nodeUtil('UrlSelector', 'fraction');
	};
	this.set_fraction(undefined);
	this.set_old = function (value) {
		X3DJSON.nodeUtil('UrlSelector', 'old', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.old_changed = function () {
		return X3DJSON.nodeUtil('UrlSelector', 'old');
	};
	this.set_old(new SFInt32(-1));


ecmascript:
        
	this.set_fraction = function ( f, tm ) {
            var side = Math.floor(f*this.frontUrls_changed().length);
            if (side > this.frontUrls_changed().length-1) {
                side = 0;
            }
            if (side != this.old_changed()) {
                    this.set_old ( side);
                    this.front_changed()[0] = this.frontUrls_changed()[side];
                    this.back_changed()[0] = this.backUrls_changed()[side];
                    this.left_changed()[0] = this.leftUrls_changed()[side];
                    this.right_changed()[0] = this.rightUrls_changed()[side];
                    this.top_changed()[0] = this.topUrls_changed()[side];
                    this.bottom_changed()[0] = this.bottomUrls_changed()[side];
            }
        };

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['UrlSelector'] = new X3DJSON['Script']['UrlSelector']();
if (typeof X3DJSON['Obj']['UrlSelector'].initialize === "function") X3DJSON['Obj']['UrlSelector'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['Animate'] = function() {
	this.set_fraction = function (value) {
		X3DJSON.nodeUtil('Animate', 'fraction', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.fraction_changed = function () {
		return X3DJSON.nodeUtil('Animate', 'fraction');
	};
	this.set_fraction(undefined);
	this.set_a = function (value) {
		X3DJSON.nodeUtil('Animate', 'a', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.a_changed = function () {
		return X3DJSON.nodeUtil('Animate', 'a');
	};
	this.set_a(new SFFloat(10));
	this.set_b = function (value) {
		X3DJSON.nodeUtil('Animate', 'b', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.b_changed = function () {
		return X3DJSON.nodeUtil('Animate', 'b');
	};
	this.set_b(new SFFloat(1));
	this.set_c = function (value) {
		X3DJSON.nodeUtil('Animate', 'c', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.c_changed = function () {
		return X3DJSON.nodeUtil('Animate', 'c');
	};
	this.set_c(new SFFloat(20));
	this.set_d = function (value) {
		X3DJSON.nodeUtil('Animate', 'd', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.d_changed = function () {
		return X3DJSON.nodeUtil('Animate', 'd');
	};
	this.set_d(new SFFloat(20));
	this.set_tdelta = function (value) {
		X3DJSON.nodeUtil('Animate', 'tdelta', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.tdelta_changed = function () {
		return X3DJSON.nodeUtil('Animate', 'tdelta');
	};
	this.set_tdelta(new SFFloat(0));
	this.set_pdelta = function (value) {
		X3DJSON.nodeUtil('Animate', 'pdelta', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.pdelta_changed = function () {
		return X3DJSON.nodeUtil('Animate', 'pdelta');
	};
	this.set_pdelta(new SFFloat(0));



ecmascript:


	this.set_fraction = function () {
	var choice = Math.floor(Math.random() * 4);
	if (choice == 0) {
		this.set_a ( this.a_changed() + Math.floor(Math.random() * 2) * 2 - 1);
	} else if (choice == 1) {
		this.set_b ( this.b_changed() + Math.floor(Math.random() * 2) * 2 - 1);
	} else if (choice == 2) {
		this.set_c ( this.c_changed() + Math.floor(Math.random() * 2) * 2 - 1);
	} else if (choice == 3) {
		this.set_d ( this.d_changed() + Math.floor(Math.random() * 2) * 2 - 1);
	}
	this.set_tdelta ( this.tdelta_changed() + 0.5);
	this.set_pdelta ( this.pdelta_changed() + 0.5);
	if (this.a_changed() < 1) {
		this.set_a ( 10);
	}
	if (this.b_changed() < 1) {
		this.set_b ( 10);
	}
	if (this.c_changed() < 1) {
		this.set_c ( 4);
	}
	if (this.c_changed() > 20) {
		this.set_c ( 4);
	}
	if (this.d_changed() < 1) {
		this.set_d ( 4);
	}
	if (this.d_changed() > 20) {
		this.set_d ( 4);
	}
};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['Animate'] = new X3DJSON['Script']['Animate']();
if (typeof X3DJSON['Obj']['Animate'].initialize === "function") X3DJSON['Obj']['Animate'].initialize();
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime'] === 'undefined') {
X3DJSON['ROUTE']['TourTime'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['TourTime']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime']['fraction_changed']['Animate'] === 'undefined') {
X3DJSON['ROUTE']['TourTime']['fraction_changed']['Animate'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime']['fraction_changed']['Animate']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['TourTime']['fraction_changed']['Animate']['set_fraction'] = {};
}

X3DJSON['ROUTE']['TourTime']['fraction_changed']['Animate']['set_fraction']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'fraction_changed');
			X3DJSON.nodeUtil('Animate','set_fraction',X3DJSON.nodeUtil('TourTime','fraction_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['fraction_changed'] };
X3DJSON['ROUTE']['TourTime']['fraction_changed']['Animate']['set_fraction']['FROM'].observe(X3DJSON.nodeUtil('TourTime'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime'] === 'undefined') {
X3DJSON['ROUTE']['TourTime'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['TourTime']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime']['fraction_changed']['Animate'] === 'undefined') {
X3DJSON['ROUTE']['TourTime']['fraction_changed']['Animate'] = {};
}
if (typeof X3DJSON['ROUTE']['TourTime']['fraction_changed']['Animate']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['TourTime']['fraction_changed']['Animate']['set_fraction'] = {};
}

X3DJSON['ROUTE']['TourTime']['fraction_changed']['Animate']['set_fraction']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_fraction');
			if (typeof X3DJSON['Obj']['Animate'].set_fraction === "function") X3DJSON['Obj']['Animate'].set_fraction(X3DJSON.nodeUtil('Animate','set_fraction'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_fraction'] };
X3DJSON['ROUTE']['TourTime']['fraction_changed']['Animate']['set_fraction']['TO'].observe(X3DJSON.nodeUtil('Animate'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate'] === 'undefined') {
X3DJSON['ROUTE']['Animate'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['a'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['a'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['a']['cobweb'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['a']['cobweb'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['a']['cobweb']['a'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['a']['cobweb']['a'] = {};
}

X3DJSON['ROUTE']['Animate']['a']['cobweb']['a']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'a');
			X3DJSON.nodeUtil('cobweb','a',X3DJSON.nodeUtil('Animate','a'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['a'] };
X3DJSON['ROUTE']['Animate']['a']['cobweb']['a']['FROM'].observe(X3DJSON.nodeUtil('Animate'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate'] === 'undefined') {
X3DJSON['ROUTE']['Animate'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['a'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['a'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['a']['cobweb'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['a']['cobweb'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['a']['cobweb']['a'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['a']['cobweb']['a'] = {};
}

X3DJSON['ROUTE']['Animate']['a']['cobweb']['a']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'a');
			if (typeof X3DJSON['Obj']['cobweb'].a === "function") X3DJSON['Obj']['cobweb'].a(X3DJSON.nodeUtil('cobweb','a'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['a'] };
X3DJSON['ROUTE']['Animate']['a']['cobweb']['a']['TO'].observe(X3DJSON.nodeUtil('cobweb'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate'] === 'undefined') {
X3DJSON['ROUTE']['Animate'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['b'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['b'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['b']['cobweb'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['b']['cobweb'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['b']['cobweb']['b'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['b']['cobweb']['b'] = {};
}

X3DJSON['ROUTE']['Animate']['b']['cobweb']['b']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'b');
			X3DJSON.nodeUtil('cobweb','b',X3DJSON.nodeUtil('Animate','b'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['b'] };
X3DJSON['ROUTE']['Animate']['b']['cobweb']['b']['FROM'].observe(X3DJSON.nodeUtil('Animate'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate'] === 'undefined') {
X3DJSON['ROUTE']['Animate'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['b'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['b'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['b']['cobweb'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['b']['cobweb'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['b']['cobweb']['b'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['b']['cobweb']['b'] = {};
}

X3DJSON['ROUTE']['Animate']['b']['cobweb']['b']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'b');
			if (typeof X3DJSON['Obj']['cobweb'].b === "function") X3DJSON['Obj']['cobweb'].b(X3DJSON.nodeUtil('cobweb','b'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['b'] };
X3DJSON['ROUTE']['Animate']['b']['cobweb']['b']['TO'].observe(X3DJSON.nodeUtil('cobweb'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate'] === 'undefined') {
X3DJSON['ROUTE']['Animate'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['c'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['c'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['c']['cobweb'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['c']['cobweb'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['c']['cobweb']['c'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['c']['cobweb']['c'] = {};
}

X3DJSON['ROUTE']['Animate']['c']['cobweb']['c']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'c');
			X3DJSON.nodeUtil('cobweb','c',X3DJSON.nodeUtil('Animate','c'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['c'] };
X3DJSON['ROUTE']['Animate']['c']['cobweb']['c']['FROM'].observe(X3DJSON.nodeUtil('Animate'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate'] === 'undefined') {
X3DJSON['ROUTE']['Animate'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['c'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['c'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['c']['cobweb'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['c']['cobweb'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['c']['cobweb']['c'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['c']['cobweb']['c'] = {};
}

X3DJSON['ROUTE']['Animate']['c']['cobweb']['c']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'c');
			if (typeof X3DJSON['Obj']['cobweb'].c === "function") X3DJSON['Obj']['cobweb'].c(X3DJSON.nodeUtil('cobweb','c'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['c'] };
X3DJSON['ROUTE']['Animate']['c']['cobweb']['c']['TO'].observe(X3DJSON.nodeUtil('cobweb'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate'] === 'undefined') {
X3DJSON['ROUTE']['Animate'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['d'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['d'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['d']['cobweb'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['d']['cobweb'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['d']['cobweb']['d'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['d']['cobweb']['d'] = {};
}

X3DJSON['ROUTE']['Animate']['d']['cobweb']['d']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'd');
			X3DJSON.nodeUtil('cobweb','d',X3DJSON.nodeUtil('Animate','d'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['d'] };
X3DJSON['ROUTE']['Animate']['d']['cobweb']['d']['FROM'].observe(X3DJSON.nodeUtil('Animate'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate'] === 'undefined') {
X3DJSON['ROUTE']['Animate'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['d'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['d'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['d']['cobweb'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['d']['cobweb'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['d']['cobweb']['d'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['d']['cobweb']['d'] = {};
}

X3DJSON['ROUTE']['Animate']['d']['cobweb']['d']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'd');
			if (typeof X3DJSON['Obj']['cobweb'].d === "function") X3DJSON['Obj']['cobweb'].d(X3DJSON.nodeUtil('cobweb','d'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['d'] };
X3DJSON['ROUTE']['Animate']['d']['cobweb']['d']['TO'].observe(X3DJSON.nodeUtil('cobweb'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate'] === 'undefined') {
X3DJSON['ROUTE']['Animate'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['pdelta'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['pdelta'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['pdelta']['cobweb'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['pdelta']['cobweb'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['pdelta']['cobweb']['pdelta'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['pdelta']['cobweb']['pdelta'] = {};
}

X3DJSON['ROUTE']['Animate']['pdelta']['cobweb']['pdelta']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'pdelta');
			X3DJSON.nodeUtil('cobweb','pdelta',X3DJSON.nodeUtil('Animate','pdelta'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['pdelta'] };
X3DJSON['ROUTE']['Animate']['pdelta']['cobweb']['pdelta']['FROM'].observe(X3DJSON.nodeUtil('Animate'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate'] === 'undefined') {
X3DJSON['ROUTE']['Animate'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['pdelta'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['pdelta'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['pdelta']['cobweb'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['pdelta']['cobweb'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['pdelta']['cobweb']['pdelta'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['pdelta']['cobweb']['pdelta'] = {};
}

X3DJSON['ROUTE']['Animate']['pdelta']['cobweb']['pdelta']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'pdelta');
			if (typeof X3DJSON['Obj']['cobweb'].pdelta === "function") X3DJSON['Obj']['cobweb'].pdelta(X3DJSON.nodeUtil('cobweb','pdelta'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['pdelta'] };
X3DJSON['ROUTE']['Animate']['pdelta']['cobweb']['pdelta']['TO'].observe(X3DJSON.nodeUtil('cobweb'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate'] === 'undefined') {
X3DJSON['ROUTE']['Animate'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['tdelta'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['tdelta'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['tdelta']['cobweb'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['tdelta']['cobweb'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['tdelta']['cobweb']['tdelta'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['tdelta']['cobweb']['tdelta'] = {};
}

X3DJSON['ROUTE']['Animate']['tdelta']['cobweb']['tdelta']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'tdelta');
			X3DJSON.nodeUtil('cobweb','tdelta',X3DJSON.nodeUtil('Animate','tdelta'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['tdelta'] };
X3DJSON['ROUTE']['Animate']['tdelta']['cobweb']['tdelta']['FROM'].observe(X3DJSON.nodeUtil('Animate'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate'] === 'undefined') {
X3DJSON['ROUTE']['Animate'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['tdelta'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['tdelta'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['tdelta']['cobweb'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['tdelta']['cobweb'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['tdelta']['cobweb']['tdelta'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['tdelta']['cobweb']['tdelta'] = {};
}

X3DJSON['ROUTE']['Animate']['tdelta']['cobweb']['tdelta']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'tdelta');
			if (typeof X3DJSON['Obj']['cobweb'].tdelta === "function") X3DJSON['Obj']['cobweb'].tdelta(X3DJSON.nodeUtil('cobweb','tdelta'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['tdelta'] };
X3DJSON['ROUTE']['Animate']['tdelta']['cobweb']['tdelta']['TO'].observe(X3DJSON.nodeUtil('cobweb'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate'] === 'undefined') {
X3DJSON['ROUTE']['Animate'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['a'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['a'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['a']['x3dom'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['a']['x3dom'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['a']['x3dom']['a'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['a']['x3dom']['a'] = {};
}

X3DJSON['ROUTE']['Animate']['a']['x3dom']['a']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'a');
			X3DJSON.nodeUtil('x3dom','a',X3DJSON.nodeUtil('Animate','a'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['a'] };
X3DJSON['ROUTE']['Animate']['a']['x3dom']['a']['FROM'].observe(X3DJSON.nodeUtil('Animate'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate'] === 'undefined') {
X3DJSON['ROUTE']['Animate'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['a'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['a'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['a']['x3dom'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['a']['x3dom'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['a']['x3dom']['a'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['a']['x3dom']['a'] = {};
}

X3DJSON['ROUTE']['Animate']['a']['x3dom']['a']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'a');
			if (typeof X3DJSON['Obj']['x3dom'].a === "function") X3DJSON['Obj']['x3dom'].a(X3DJSON.nodeUtil('x3dom','a'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['a'] };
X3DJSON['ROUTE']['Animate']['a']['x3dom']['a']['TO'].observe(X3DJSON.nodeUtil('x3dom'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate'] === 'undefined') {
X3DJSON['ROUTE']['Animate'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['b'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['b'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['b']['x3dom'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['b']['x3dom'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['b']['x3dom']['b'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['b']['x3dom']['b'] = {};
}

X3DJSON['ROUTE']['Animate']['b']['x3dom']['b']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'b');
			X3DJSON.nodeUtil('x3dom','b',X3DJSON.nodeUtil('Animate','b'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['b'] };
X3DJSON['ROUTE']['Animate']['b']['x3dom']['b']['FROM'].observe(X3DJSON.nodeUtil('Animate'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate'] === 'undefined') {
X3DJSON['ROUTE']['Animate'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['b'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['b'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['b']['x3dom'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['b']['x3dom'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['b']['x3dom']['b'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['b']['x3dom']['b'] = {};
}

X3DJSON['ROUTE']['Animate']['b']['x3dom']['b']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'b');
			if (typeof X3DJSON['Obj']['x3dom'].b === "function") X3DJSON['Obj']['x3dom'].b(X3DJSON.nodeUtil('x3dom','b'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['b'] };
X3DJSON['ROUTE']['Animate']['b']['x3dom']['b']['TO'].observe(X3DJSON.nodeUtil('x3dom'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate'] === 'undefined') {
X3DJSON['ROUTE']['Animate'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['c'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['c'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['c']['x3dom'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['c']['x3dom'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['c']['x3dom']['c'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['c']['x3dom']['c'] = {};
}

X3DJSON['ROUTE']['Animate']['c']['x3dom']['c']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'c');
			X3DJSON.nodeUtil('x3dom','c',X3DJSON.nodeUtil('Animate','c'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['c'] };
X3DJSON['ROUTE']['Animate']['c']['x3dom']['c']['FROM'].observe(X3DJSON.nodeUtil('Animate'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate'] === 'undefined') {
X3DJSON['ROUTE']['Animate'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['c'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['c'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['c']['x3dom'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['c']['x3dom'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['c']['x3dom']['c'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['c']['x3dom']['c'] = {};
}

X3DJSON['ROUTE']['Animate']['c']['x3dom']['c']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'c');
			if (typeof X3DJSON['Obj']['x3dom'].c === "function") X3DJSON['Obj']['x3dom'].c(X3DJSON.nodeUtil('x3dom','c'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['c'] };
X3DJSON['ROUTE']['Animate']['c']['x3dom']['c']['TO'].observe(X3DJSON.nodeUtil('x3dom'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate'] === 'undefined') {
X3DJSON['ROUTE']['Animate'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['d'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['d'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['d']['x3dom'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['d']['x3dom'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['d']['x3dom']['d'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['d']['x3dom']['d'] = {};
}

X3DJSON['ROUTE']['Animate']['d']['x3dom']['d']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'd');
			X3DJSON.nodeUtil('x3dom','d',X3DJSON.nodeUtil('Animate','d'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['d'] };
X3DJSON['ROUTE']['Animate']['d']['x3dom']['d']['FROM'].observe(X3DJSON.nodeUtil('Animate'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate'] === 'undefined') {
X3DJSON['ROUTE']['Animate'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['d'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['d'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['d']['x3dom'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['d']['x3dom'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['d']['x3dom']['d'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['d']['x3dom']['d'] = {};
}

X3DJSON['ROUTE']['Animate']['d']['x3dom']['d']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'd');
			if (typeof X3DJSON['Obj']['x3dom'].d === "function") X3DJSON['Obj']['x3dom'].d(X3DJSON.nodeUtil('x3dom','d'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['d'] };
X3DJSON['ROUTE']['Animate']['d']['x3dom']['d']['TO'].observe(X3DJSON.nodeUtil('x3dom'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate'] === 'undefined') {
X3DJSON['ROUTE']['Animate'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['pdelta'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['pdelta'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['pdelta']['x3dom'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['pdelta']['x3dom'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['pdelta']['x3dom']['pdelta'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['pdelta']['x3dom']['pdelta'] = {};
}

X3DJSON['ROUTE']['Animate']['pdelta']['x3dom']['pdelta']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'pdelta');
			X3DJSON.nodeUtil('x3dom','pdelta',X3DJSON.nodeUtil('Animate','pdelta'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['pdelta'] };
X3DJSON['ROUTE']['Animate']['pdelta']['x3dom']['pdelta']['FROM'].observe(X3DJSON.nodeUtil('Animate'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate'] === 'undefined') {
X3DJSON['ROUTE']['Animate'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['pdelta'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['pdelta'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['pdelta']['x3dom'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['pdelta']['x3dom'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['pdelta']['x3dom']['pdelta'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['pdelta']['x3dom']['pdelta'] = {};
}

X3DJSON['ROUTE']['Animate']['pdelta']['x3dom']['pdelta']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'pdelta');
			if (typeof X3DJSON['Obj']['x3dom'].pdelta === "function") X3DJSON['Obj']['x3dom'].pdelta(X3DJSON.nodeUtil('x3dom','pdelta'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['pdelta'] };
X3DJSON['ROUTE']['Animate']['pdelta']['x3dom']['pdelta']['TO'].observe(X3DJSON.nodeUtil('x3dom'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate'] === 'undefined') {
X3DJSON['ROUTE']['Animate'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['tdelta'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['tdelta'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['tdelta']['x3dom'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['tdelta']['x3dom'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['tdelta']['x3dom']['tdelta'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['tdelta']['x3dom']['tdelta'] = {};
}

X3DJSON['ROUTE']['Animate']['tdelta']['x3dom']['tdelta']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'tdelta');
			X3DJSON.nodeUtil('x3dom','tdelta',X3DJSON.nodeUtil('Animate','tdelta'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['tdelta'] };
X3DJSON['ROUTE']['Animate']['tdelta']['x3dom']['tdelta']['FROM'].observe(X3DJSON.nodeUtil('Animate'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate'] === 'undefined') {
X3DJSON['ROUTE']['Animate'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['tdelta'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['tdelta'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['tdelta']['x3dom'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['tdelta']['x3dom'] = {};
}
if (typeof X3DJSON['ROUTE']['Animate']['tdelta']['x3dom']['tdelta'] === 'undefined') {
X3DJSON['ROUTE']['Animate']['tdelta']['x3dom']['tdelta'] = {};
}

X3DJSON['ROUTE']['Animate']['tdelta']['x3dom']['tdelta']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'tdelta');
			if (typeof X3DJSON['Obj']['x3dom'].tdelta === "function") X3DJSON['Obj']['x3dom'].tdelta(X3DJSON.nodeUtil('x3dom','tdelta'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['tdelta'] };
X3DJSON['ROUTE']['Animate']['tdelta']['x3dom']['tdelta']['TO'].observe(X3DJSON.nodeUtil('x3dom'), config);
			X3DJSON.nodeUtil('Animate','set_fraction',X3DJSON.nodeUtil('TourTime','fraction_changed'), __eventTime);