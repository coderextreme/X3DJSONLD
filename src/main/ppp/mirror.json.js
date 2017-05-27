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
	this.set_front(undefined);
	this.set_back = function (value) {
		X3DJSON.nodeUtil('UrlSelector', 'back', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.back_changed = function () {
		return X3DJSON.nodeUtil('UrlSelector', 'back');
	};
	this.set_back(undefined);
	this.set_left = function (value) {
		X3DJSON.nodeUtil('UrlSelector', 'left', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.left_changed = function () {
		return X3DJSON.nodeUtil('UrlSelector', 'left');
	};
	this.set_left(undefined);
	this.set_right = function (value) {
		X3DJSON.nodeUtil('UrlSelector', 'right', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.right_changed = function () {
		return X3DJSON.nodeUtil('UrlSelector', 'right');
	};
	this.set_right(undefined);
	this.set_top = function (value) {
		X3DJSON.nodeUtil('UrlSelector', 'top', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.top_changed = function () {
		return X3DJSON.nodeUtil('UrlSelector', 'top');
	};
	this.set_top(undefined);
	this.set_bottom = function (value) {
		X3DJSON.nodeUtil('UrlSelector', 'bottom', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.bottom_changed = function () {
		return X3DJSON.nodeUtil('UrlSelector', 'bottom');
	};
	this.set_bottom(undefined);
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
	    	    console.error(f+" "+side);
	    	    this.set_old ( side);
		    this.front_changed_changed()[0] = this.frontUrls_changed()[side];
		    this.back_changed_changed()[0] = this.backUrls_changed()[side];
		    this.left_changed_changed()[0] = this.leftUrls_changed()[side];
		    this.right_changed_changed()[0] = this.rightUrls_changed()[side];
		    this.top_changed_changed()[0] = this.topUrls_changed()[side];
		    this.bottom_changed_changed()[0] = this.bottomUrls_changed()[side];
            }
        };

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['UrlSelector'] = new X3DJSON['Script']['UrlSelector']();
if (typeof X3DJSON['Obj']['UrlSelector'].initialize === "function") X3DJSON['Obj']['UrlSelector'].initialize();
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock'] === 'undefined') {
X3DJSON['ROUTE']['Clock'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['Clock']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock']['fraction_changed']['UrlSelector'] === 'undefined') {
X3DJSON['ROUTE']['Clock']['fraction_changed']['UrlSelector'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock']['fraction_changed']['UrlSelector']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['Clock']['fraction_changed']['UrlSelector']['set_fraction'] = {};
}

X3DJSON['ROUTE']['Clock']['fraction_changed']['UrlSelector']['set_fraction']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'fraction_changed');
			X3DJSON.nodeUtil('UrlSelector','set_fraction',X3DJSON.nodeUtil('Clock','fraction_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['fraction_changed'] };
X3DJSON['ROUTE']['Clock']['fraction_changed']['UrlSelector']['set_fraction']['FROM'].observe(X3DJSON.nodeUtil('Clock'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock'] === 'undefined') {
X3DJSON['ROUTE']['Clock'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['Clock']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock']['fraction_changed']['UrlSelector'] === 'undefined') {
X3DJSON['ROUTE']['Clock']['fraction_changed']['UrlSelector'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock']['fraction_changed']['UrlSelector']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['Clock']['fraction_changed']['UrlSelector']['set_fraction'] = {};
}

X3DJSON['ROUTE']['Clock']['fraction_changed']['UrlSelector']['set_fraction']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_fraction');
			if (typeof X3DJSON['Obj']['UrlSelector'].set_fraction === "function") X3DJSON['Obj']['UrlSelector'].set_fraction(X3DJSON.nodeUtil('UrlSelector','set_fraction'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_fraction'] };
X3DJSON['ROUTE']['Clock']['fraction_changed']['UrlSelector']['set_fraction']['TO'].observe(X3DJSON.nodeUtil('UrlSelector'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['front_changed'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['front_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['front_changed']['frontBack'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['front_changed']['frontBack'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['front_changed']['frontBack']['url'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['front_changed']['frontBack']['url'] = {};
}

X3DJSON['ROUTE']['UrlSelector']['front_changed']['frontBack']['url']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'front_changed');
			X3DJSON.nodeUtil('frontBack','url',X3DJSON.nodeUtil('UrlSelector','front_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['front_changed'] };
X3DJSON['ROUTE']['UrlSelector']['front_changed']['frontBack']['url']['FROM'].observe(X3DJSON.nodeUtil('UrlSelector'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['front_changed'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['front_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['front_changed']['frontBack'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['front_changed']['frontBack'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['front_changed']['frontBack']['url'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['front_changed']['frontBack']['url'] = {};
}

X3DJSON['ROUTE']['UrlSelector']['front_changed']['frontBack']['url']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'url');
			if (typeof X3DJSON['Obj']['frontBack'].url === "function") X3DJSON['Obj']['frontBack'].url(X3DJSON.nodeUtil('frontBack','url'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['url'] };
X3DJSON['ROUTE']['UrlSelector']['front_changed']['frontBack']['url']['TO'].observe(X3DJSON.nodeUtil('frontBack'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['back_changed'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['back_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['back_changed']['backBack'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['back_changed']['backBack'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['back_changed']['backBack']['url'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['back_changed']['backBack']['url'] = {};
}

X3DJSON['ROUTE']['UrlSelector']['back_changed']['backBack']['url']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'back_changed');
			X3DJSON.nodeUtil('backBack','url',X3DJSON.nodeUtil('UrlSelector','back_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['back_changed'] };
X3DJSON['ROUTE']['UrlSelector']['back_changed']['backBack']['url']['FROM'].observe(X3DJSON.nodeUtil('UrlSelector'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['back_changed'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['back_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['back_changed']['backBack'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['back_changed']['backBack'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['back_changed']['backBack']['url'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['back_changed']['backBack']['url'] = {};
}

X3DJSON['ROUTE']['UrlSelector']['back_changed']['backBack']['url']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'url');
			if (typeof X3DJSON['Obj']['backBack'].url === "function") X3DJSON['Obj']['backBack'].url(X3DJSON.nodeUtil('backBack','url'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['url'] };
X3DJSON['ROUTE']['UrlSelector']['back_changed']['backBack']['url']['TO'].observe(X3DJSON.nodeUtil('backBack'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['left_changed'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['left_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['left_changed']['leftBack'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['left_changed']['leftBack'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['left_changed']['leftBack']['url'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['left_changed']['leftBack']['url'] = {};
}

X3DJSON['ROUTE']['UrlSelector']['left_changed']['leftBack']['url']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'left_changed');
			X3DJSON.nodeUtil('leftBack','url',X3DJSON.nodeUtil('UrlSelector','left_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['left_changed'] };
X3DJSON['ROUTE']['UrlSelector']['left_changed']['leftBack']['url']['FROM'].observe(X3DJSON.nodeUtil('UrlSelector'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['left_changed'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['left_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['left_changed']['leftBack'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['left_changed']['leftBack'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['left_changed']['leftBack']['url'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['left_changed']['leftBack']['url'] = {};
}

X3DJSON['ROUTE']['UrlSelector']['left_changed']['leftBack']['url']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'url');
			if (typeof X3DJSON['Obj']['leftBack'].url === "function") X3DJSON['Obj']['leftBack'].url(X3DJSON.nodeUtil('leftBack','url'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['url'] };
X3DJSON['ROUTE']['UrlSelector']['left_changed']['leftBack']['url']['TO'].observe(X3DJSON.nodeUtil('leftBack'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['right_changed'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['right_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['right_changed']['rightBack'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['right_changed']['rightBack'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['right_changed']['rightBack']['url'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['right_changed']['rightBack']['url'] = {};
}

X3DJSON['ROUTE']['UrlSelector']['right_changed']['rightBack']['url']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'right_changed');
			X3DJSON.nodeUtil('rightBack','url',X3DJSON.nodeUtil('UrlSelector','right_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['right_changed'] };
X3DJSON['ROUTE']['UrlSelector']['right_changed']['rightBack']['url']['FROM'].observe(X3DJSON.nodeUtil('UrlSelector'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['right_changed'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['right_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['right_changed']['rightBack'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['right_changed']['rightBack'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['right_changed']['rightBack']['url'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['right_changed']['rightBack']['url'] = {};
}

X3DJSON['ROUTE']['UrlSelector']['right_changed']['rightBack']['url']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'url');
			if (typeof X3DJSON['Obj']['rightBack'].url === "function") X3DJSON['Obj']['rightBack'].url(X3DJSON.nodeUtil('rightBack','url'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['url'] };
X3DJSON['ROUTE']['UrlSelector']['right_changed']['rightBack']['url']['TO'].observe(X3DJSON.nodeUtil('rightBack'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['top_changed'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['top_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['top_changed']['topBack'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['top_changed']['topBack'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['top_changed']['topBack']['url'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['top_changed']['topBack']['url'] = {};
}

X3DJSON['ROUTE']['UrlSelector']['top_changed']['topBack']['url']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'top_changed');
			X3DJSON.nodeUtil('topBack','url',X3DJSON.nodeUtil('UrlSelector','top_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['top_changed'] };
X3DJSON['ROUTE']['UrlSelector']['top_changed']['topBack']['url']['FROM'].observe(X3DJSON.nodeUtil('UrlSelector'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['top_changed'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['top_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['top_changed']['topBack'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['top_changed']['topBack'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['top_changed']['topBack']['url'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['top_changed']['topBack']['url'] = {};
}

X3DJSON['ROUTE']['UrlSelector']['top_changed']['topBack']['url']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'url');
			if (typeof X3DJSON['Obj']['topBack'].url === "function") X3DJSON['Obj']['topBack'].url(X3DJSON.nodeUtil('topBack','url'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['url'] };
X3DJSON['ROUTE']['UrlSelector']['top_changed']['topBack']['url']['TO'].observe(X3DJSON.nodeUtil('topBack'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['bottom_changed'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['bottom_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['bottom_changed']['bottomBack'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['bottom_changed']['bottomBack'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['bottom_changed']['bottomBack']['url'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['bottom_changed']['bottomBack']['url'] = {};
}

X3DJSON['ROUTE']['UrlSelector']['bottom_changed']['bottomBack']['url']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'bottom_changed');
			X3DJSON.nodeUtil('bottomBack','url',X3DJSON.nodeUtil('UrlSelector','bottom_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['bottom_changed'] };
X3DJSON['ROUTE']['UrlSelector']['bottom_changed']['bottomBack']['url']['FROM'].observe(X3DJSON.nodeUtil('UrlSelector'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['bottom_changed'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['bottom_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['bottom_changed']['bottomBack'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['bottom_changed']['bottomBack'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['bottom_changed']['bottomBack']['url'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['bottom_changed']['bottomBack']['url'] = {};
}

X3DJSON['ROUTE']['UrlSelector']['bottom_changed']['bottomBack']['url']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'url');
			if (typeof X3DJSON['Obj']['bottomBack'].url === "function") X3DJSON['Obj']['bottomBack'].url(X3DJSON.nodeUtil('bottomBack','url'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['url'] };
X3DJSON['ROUTE']['UrlSelector']['bottom_changed']['bottomBack']['url']['TO'].observe(X3DJSON.nodeUtil('bottomBack'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['front_changed'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['front_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['front_changed']['frontShader'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['front_changed']['frontShader'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['front_changed']['frontShader']['url'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['front_changed']['frontShader']['url'] = {};
}

X3DJSON['ROUTE']['UrlSelector']['front_changed']['frontShader']['url']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'front_changed');
			X3DJSON.nodeUtil('frontShader','url',X3DJSON.nodeUtil('UrlSelector','front_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['front_changed'] };
X3DJSON['ROUTE']['UrlSelector']['front_changed']['frontShader']['url']['FROM'].observe(X3DJSON.nodeUtil('UrlSelector'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['front_changed'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['front_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['front_changed']['frontShader'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['front_changed']['frontShader'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['front_changed']['frontShader']['url'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['front_changed']['frontShader']['url'] = {};
}

X3DJSON['ROUTE']['UrlSelector']['front_changed']['frontShader']['url']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'url');
			if (typeof X3DJSON['Obj']['frontShader'].url === "function") X3DJSON['Obj']['frontShader'].url(X3DJSON.nodeUtil('frontShader','url'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['url'] };
X3DJSON['ROUTE']['UrlSelector']['front_changed']['frontShader']['url']['TO'].observe(X3DJSON.nodeUtil('frontShader'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['back_changed'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['back_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['back_changed']['backShader'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['back_changed']['backShader'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['back_changed']['backShader']['url'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['back_changed']['backShader']['url'] = {};
}

X3DJSON['ROUTE']['UrlSelector']['back_changed']['backShader']['url']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'back_changed');
			X3DJSON.nodeUtil('backShader','url',X3DJSON.nodeUtil('UrlSelector','back_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['back_changed'] };
X3DJSON['ROUTE']['UrlSelector']['back_changed']['backShader']['url']['FROM'].observe(X3DJSON.nodeUtil('UrlSelector'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['back_changed'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['back_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['back_changed']['backShader'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['back_changed']['backShader'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['back_changed']['backShader']['url'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['back_changed']['backShader']['url'] = {};
}

X3DJSON['ROUTE']['UrlSelector']['back_changed']['backShader']['url']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'url');
			if (typeof X3DJSON['Obj']['backShader'].url === "function") X3DJSON['Obj']['backShader'].url(X3DJSON.nodeUtil('backShader','url'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['url'] };
X3DJSON['ROUTE']['UrlSelector']['back_changed']['backShader']['url']['TO'].observe(X3DJSON.nodeUtil('backShader'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['left_changed'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['left_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['left_changed']['leftShader'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['left_changed']['leftShader'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['left_changed']['leftShader']['url'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['left_changed']['leftShader']['url'] = {};
}

X3DJSON['ROUTE']['UrlSelector']['left_changed']['leftShader']['url']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'left_changed');
			X3DJSON.nodeUtil('leftShader','url',X3DJSON.nodeUtil('UrlSelector','left_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['left_changed'] };
X3DJSON['ROUTE']['UrlSelector']['left_changed']['leftShader']['url']['FROM'].observe(X3DJSON.nodeUtil('UrlSelector'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['left_changed'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['left_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['left_changed']['leftShader'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['left_changed']['leftShader'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['left_changed']['leftShader']['url'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['left_changed']['leftShader']['url'] = {};
}

X3DJSON['ROUTE']['UrlSelector']['left_changed']['leftShader']['url']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'url');
			if (typeof X3DJSON['Obj']['leftShader'].url === "function") X3DJSON['Obj']['leftShader'].url(X3DJSON.nodeUtil('leftShader','url'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['url'] };
X3DJSON['ROUTE']['UrlSelector']['left_changed']['leftShader']['url']['TO'].observe(X3DJSON.nodeUtil('leftShader'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['right_changed'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['right_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['right_changed']['rightShader'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['right_changed']['rightShader'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['right_changed']['rightShader']['url'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['right_changed']['rightShader']['url'] = {};
}

X3DJSON['ROUTE']['UrlSelector']['right_changed']['rightShader']['url']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'right_changed');
			X3DJSON.nodeUtil('rightShader','url',X3DJSON.nodeUtil('UrlSelector','right_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['right_changed'] };
X3DJSON['ROUTE']['UrlSelector']['right_changed']['rightShader']['url']['FROM'].observe(X3DJSON.nodeUtil('UrlSelector'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['right_changed'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['right_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['right_changed']['rightShader'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['right_changed']['rightShader'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['right_changed']['rightShader']['url'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['right_changed']['rightShader']['url'] = {};
}

X3DJSON['ROUTE']['UrlSelector']['right_changed']['rightShader']['url']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'url');
			if (typeof X3DJSON['Obj']['rightShader'].url === "function") X3DJSON['Obj']['rightShader'].url(X3DJSON.nodeUtil('rightShader','url'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['url'] };
X3DJSON['ROUTE']['UrlSelector']['right_changed']['rightShader']['url']['TO'].observe(X3DJSON.nodeUtil('rightShader'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['top_changed'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['top_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['top_changed']['topShader'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['top_changed']['topShader'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['top_changed']['topShader']['url'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['top_changed']['topShader']['url'] = {};
}

X3DJSON['ROUTE']['UrlSelector']['top_changed']['topShader']['url']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'top_changed');
			X3DJSON.nodeUtil('topShader','url',X3DJSON.nodeUtil('UrlSelector','top_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['top_changed'] };
X3DJSON['ROUTE']['UrlSelector']['top_changed']['topShader']['url']['FROM'].observe(X3DJSON.nodeUtil('UrlSelector'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['top_changed'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['top_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['top_changed']['topShader'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['top_changed']['topShader'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['top_changed']['topShader']['url'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['top_changed']['topShader']['url'] = {};
}

X3DJSON['ROUTE']['UrlSelector']['top_changed']['topShader']['url']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'url');
			if (typeof X3DJSON['Obj']['topShader'].url === "function") X3DJSON['Obj']['topShader'].url(X3DJSON.nodeUtil('topShader','url'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['url'] };
X3DJSON['ROUTE']['UrlSelector']['top_changed']['topShader']['url']['TO'].observe(X3DJSON.nodeUtil('topShader'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['bottom_changed'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['bottom_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['bottom_changed']['bottomShader'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['bottom_changed']['bottomShader'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['bottom_changed']['bottomShader']['url'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['bottom_changed']['bottomShader']['url'] = {};
}

X3DJSON['ROUTE']['UrlSelector']['bottom_changed']['bottomShader']['url']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'bottom_changed');
			X3DJSON.nodeUtil('bottomShader','url',X3DJSON.nodeUtil('UrlSelector','bottom_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['bottom_changed'] };
X3DJSON['ROUTE']['UrlSelector']['bottom_changed']['bottomShader']['url']['FROM'].observe(X3DJSON.nodeUtil('UrlSelector'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['bottom_changed'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['bottom_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['bottom_changed']['bottomShader'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['bottom_changed']['bottomShader'] = {};
}
if (typeof X3DJSON['ROUTE']['UrlSelector']['bottom_changed']['bottomShader']['url'] === 'undefined') {
X3DJSON['ROUTE']['UrlSelector']['bottom_changed']['bottomShader']['url'] = {};
}

X3DJSON['ROUTE']['UrlSelector']['bottom_changed']['bottomShader']['url']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'url');
			if (typeof X3DJSON['Obj']['bottomShader'].url === "function") X3DJSON['Obj']['bottomShader'].url(X3DJSON.nodeUtil('bottomShader','url'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['url'] };
X3DJSON['ROUTE']['UrlSelector']['bottom_changed']['bottomShader']['url']['TO'].observe(X3DJSON.nodeUtil('bottomShader'), config);
			X3DJSON.nodeUtil('UrlSelector','set_fraction',X3DJSON.nodeUtil('Clock','fraction_changed'), __eventTime);