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

X3DJSON['Script']['DECLnode_nodeA44000_MoveBall'] = function() {
	this.set_translation = function (value) {
		X3DJSON.nodeUtil('DECLnode_nodeA44000_MoveBall', 'translation', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.translation_changed = function () {
		return X3DJSON.nodeUtil('DECLnode_nodeA44000_MoveBall', 'translation');
	};
	this.set_translation(new SFVec3f(50,50,0));
	this.set_old = function (value) {
		X3DJSON.nodeUtil('DECLnode_nodeA44000_MoveBall', 'old', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.old_changed = function () {
		return X3DJSON.nodeUtil('DECLnode_nodeA44000_MoveBall', 'old');
	};
	this.set_old(new SFVec3f(0,0,0));
	this.set_cycle = function (value) {
		X3DJSON.nodeUtil('DECLnode_nodeA44000_MoveBall', 'cycle', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.cycle_changed = function () {
		return X3DJSON.nodeUtil('DECLnode_nodeA44000_MoveBall', 'cycle');
	};
	this.set_cycle(undefined);
	this.set_keyValue = function (value) {
		X3DJSON.nodeUtil('DECLnode_nodeA44000_MoveBall', 'keyValue', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.keyValue_changed = function () {
		return X3DJSON.nodeUtil('DECLnode_nodeA44000_MoveBall', 'keyValue');
	};
	this.set_keyValue(new MFVec3f());

 ecmascript:
					
	this.set_cycle = function (value) {
                                                this.set_old ( this.translation_changed());
						this.set_translation ( new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50));
                                                this.set_keyValue ( new MFVec3f(this.old_changed(), this.translation_changed()));
						// console.error(this.translation_changed());
					};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLnode_nodeA44000_MoveBall'] = new X3DJSON['Script']['DECLnode_nodeA44000_MoveBall']();
if (typeof X3DJSON['Obj']['DECLnode_nodeA44000_MoveBall'].initialize === "function") X3DJSON['Obj']['DECLnode_nodeA44000_MoveBall'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLnode_nodeB45000_MoveBall'] = function() {
	this.set_translation = function (value) {
		X3DJSON.nodeUtil('DECLnode_nodeB45000_MoveBall', 'translation', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.translation_changed = function () {
		return X3DJSON.nodeUtil('DECLnode_nodeB45000_MoveBall', 'translation');
	};
	this.set_translation(new SFVec3f(50,50,0));
	this.set_old = function (value) {
		X3DJSON.nodeUtil('DECLnode_nodeB45000_MoveBall', 'old', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.old_changed = function () {
		return X3DJSON.nodeUtil('DECLnode_nodeB45000_MoveBall', 'old');
	};
	this.set_old(new SFVec3f(0,0,0));
	this.set_cycle = function (value) {
		X3DJSON.nodeUtil('DECLnode_nodeB45000_MoveBall', 'cycle', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.cycle_changed = function () {
		return X3DJSON.nodeUtil('DECLnode_nodeB45000_MoveBall', 'cycle');
	};
	this.set_cycle(undefined);
	this.set_keyValue = function (value) {
		X3DJSON.nodeUtil('DECLnode_nodeB45000_MoveBall', 'keyValue', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.keyValue_changed = function () {
		return X3DJSON.nodeUtil('DECLnode_nodeB45000_MoveBall', 'keyValue');
	};
	this.set_keyValue(new MFVec3f());

 ecmascript:
					
	this.set_cycle = function (value) {
                                                this.set_old ( this.translation_changed());
						this.set_translation ( new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50));
                                                this.set_keyValue ( new MFVec3f(this.old_changed(), this.translation_changed()));
						// console.error(this.translation_changed());
					};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLnode_nodeB45000_MoveBall'] = new X3DJSON['Script']['DECLnode_nodeB45000_MoveBall']();
if (typeof X3DJSON['Obj']['DECLnode_nodeB45000_MoveBall'].initialize === "function") X3DJSON['Obj']['DECLnode_nodeB45000_MoveBall'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLcylinder_linkA46000_MoveCylinder'] = function() {
	this.set_spine = function (value) {
		X3DJSON.nodeUtil('DECLcylinder_linkA46000_MoveCylinder', 'spine', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.spine_changed = function () {
		return X3DJSON.nodeUtil('DECLcylinder_linkA46000_MoveCylinder', 'spine');
	};
	this.set_spine(new MFVec3f([[0,-50,0],[0,0,0],[0,50,0]]));
	this.set_endA = function (value) {
		X3DJSON.nodeUtil('DECLcylinder_linkA46000_MoveCylinder', 'endA', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.endA_changed = function () {
		return X3DJSON.nodeUtil('DECLcylinder_linkA46000_MoveCylinder', 'endA');
	};
	this.set_endA(undefined);
	this.set_endB = function (value) {
		X3DJSON.nodeUtil('DECLcylinder_linkA46000_MoveCylinder', 'endB', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.endB_changed = function () {
		return X3DJSON.nodeUtil('DECLcylinder_linkA46000_MoveCylinder', 'endB');
	};
	this.set_endB(undefined);

 ecmascript:

                
	this.set_endA = function (value) {
		    if (typeof this.spine_changed() === "undefined") {
		        this.set_spine ( new MFVec3f(value, value));
		    } else {
		        this.set_spine ( new MFVec3f(value, this.spine_changed()[1]));
		    }
                }
        ;

	this.set_endB = function (value) {
		    if (typeof this.spine_changed() === "undefined") {
		        this.set_spine ( new MFVec3f(value, value));
		    } else {
		        this.set_spine ( new MFVec3f(this.spine_changed()[0], value));
		    }
                }
        ;

	this.set_spine = function (value) {
		    console.error(''+'"');
                    this.set_spine ( value);
                };

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLcylinder_linkA46000_MoveCylinder'] = new X3DJSON['Script']['DECLcylinder_linkA46000_MoveCylinder']();
if (typeof X3DJSON['Obj']['DECLcylinder_linkA46000_MoveCylinder'].initialize === "function") X3DJSON['Obj']['DECLcylinder_linkA46000_MoveCylinder'].initialize();
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA44000_nodeClock'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA44000_nodeClock'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA44000_nodeClock']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA44000_nodeClock']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA44000_nodeClock']['cycleTime']['DECLnode_nodeA44000_MoveBall'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA44000_nodeClock']['cycleTime']['DECLnode_nodeA44000_MoveBall'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA44000_nodeClock']['cycleTime']['DECLnode_nodeA44000_MoveBall']['set_cycle'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA44000_nodeClock']['cycleTime']['DECLnode_nodeA44000_MoveBall']['set_cycle'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeA44000_nodeClock']['cycleTime']['DECLnode_nodeA44000_MoveBall']['set_cycle']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'cycleTime');
			X3DJSON.nodeUtil('DECLnode_nodeA44000_MoveBall','set_cycle',X3DJSON.nodeUtil('DECLnode_nodeA44000_nodeClock','cycleTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['cycleTime'] };
X3DJSON['ROUTE']['DECLnode_nodeA44000_nodeClock']['cycleTime']['DECLnode_nodeA44000_MoveBall']['set_cycle']['FROM'].observe(X3DJSON.nodeUtil('DECLnode_nodeA44000_nodeClock'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA44000_nodeClock'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA44000_nodeClock'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA44000_nodeClock']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA44000_nodeClock']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA44000_nodeClock']['cycleTime']['DECLnode_nodeA44000_MoveBall'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA44000_nodeClock']['cycleTime']['DECLnode_nodeA44000_MoveBall'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA44000_nodeClock']['cycleTime']['DECLnode_nodeA44000_MoveBall']['set_cycle'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA44000_nodeClock']['cycleTime']['DECLnode_nodeA44000_MoveBall']['set_cycle'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeA44000_nodeClock']['cycleTime']['DECLnode_nodeA44000_MoveBall']['set_cycle']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_cycle');
			if (typeof X3DJSON['Obj']['DECLnode_nodeA44000_MoveBall'].set_cycle === "function") X3DJSON['Obj']['DECLnode_nodeA44000_MoveBall'].set_cycle(X3DJSON.nodeUtil('DECLnode_nodeA44000_MoveBall','set_cycle'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_cycle'] };
X3DJSON['ROUTE']['DECLnode_nodeA44000_nodeClock']['cycleTime']['DECLnode_nodeA44000_MoveBall']['set_cycle']['TO'].observe(X3DJSON.nodeUtil('DECLnode_nodeA44000_MoveBall'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA44000_nodeClock'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA44000_nodeClock'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA44000_nodeClock']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA44000_nodeClock']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA44000_nodeClock']['fraction_changed']['DECLnode_nodeA44000_NodePosition'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA44000_nodeClock']['fraction_changed']['DECLnode_nodeA44000_NodePosition'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA44000_nodeClock']['fraction_changed']['DECLnode_nodeA44000_NodePosition']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA44000_nodeClock']['fraction_changed']['DECLnode_nodeA44000_NodePosition']['set_fraction'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeA44000_nodeClock']['fraction_changed']['DECLnode_nodeA44000_NodePosition']['set_fraction']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'fraction_changed');
			X3DJSON.nodeUtil('DECLnode_nodeA44000_NodePosition','set_fraction',X3DJSON.nodeUtil('DECLnode_nodeA44000_nodeClock','fraction_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['fraction_changed'] };
X3DJSON['ROUTE']['DECLnode_nodeA44000_nodeClock']['fraction_changed']['DECLnode_nodeA44000_NodePosition']['set_fraction']['FROM'].observe(X3DJSON.nodeUtil('DECLnode_nodeA44000_nodeClock'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA44000_nodeClock'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA44000_nodeClock'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA44000_nodeClock']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA44000_nodeClock']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA44000_nodeClock']['fraction_changed']['DECLnode_nodeA44000_NodePosition'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA44000_nodeClock']['fraction_changed']['DECLnode_nodeA44000_NodePosition'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA44000_nodeClock']['fraction_changed']['DECLnode_nodeA44000_NodePosition']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA44000_nodeClock']['fraction_changed']['DECLnode_nodeA44000_NodePosition']['set_fraction'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeA44000_nodeClock']['fraction_changed']['DECLnode_nodeA44000_NodePosition']['set_fraction']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_fraction');
			if (typeof X3DJSON['Obj']['DECLnode_nodeA44000_NodePosition'].set_fraction === "function") X3DJSON['Obj']['DECLnode_nodeA44000_NodePosition'].set_fraction(X3DJSON.nodeUtil('DECLnode_nodeA44000_NodePosition','set_fraction'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_fraction'] };
X3DJSON['ROUTE']['DECLnode_nodeA44000_nodeClock']['fraction_changed']['DECLnode_nodeA44000_NodePosition']['set_fraction']['TO'].observe(X3DJSON.nodeUtil('DECLnode_nodeA44000_NodePosition'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA44000_MoveBall'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA44000_MoveBall'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA44000_MoveBall']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA44000_MoveBall']['keyValue'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA44000_MoveBall']['keyValue']['DECLnode_nodeA44000_NodePosition'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA44000_MoveBall']['keyValue']['DECLnode_nodeA44000_NodePosition'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA44000_MoveBall']['keyValue']['DECLnode_nodeA44000_NodePosition']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA44000_MoveBall']['keyValue']['DECLnode_nodeA44000_NodePosition']['keyValue'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeA44000_MoveBall']['keyValue']['DECLnode_nodeA44000_NodePosition']['keyValue']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'keyValue');
			X3DJSON.nodeUtil('DECLnode_nodeA44000_NodePosition','keyValue',X3DJSON.nodeUtil('DECLnode_nodeA44000_MoveBall','keyValue'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['keyValue'] };
X3DJSON['ROUTE']['DECLnode_nodeA44000_MoveBall']['keyValue']['DECLnode_nodeA44000_NodePosition']['keyValue']['FROM'].observe(X3DJSON.nodeUtil('DECLnode_nodeA44000_MoveBall'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA44000_MoveBall'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA44000_MoveBall'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA44000_MoveBall']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA44000_MoveBall']['keyValue'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA44000_MoveBall']['keyValue']['DECLnode_nodeA44000_NodePosition'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA44000_MoveBall']['keyValue']['DECLnode_nodeA44000_NodePosition'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA44000_MoveBall']['keyValue']['DECLnode_nodeA44000_NodePosition']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA44000_MoveBall']['keyValue']['DECLnode_nodeA44000_NodePosition']['keyValue'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeA44000_MoveBall']['keyValue']['DECLnode_nodeA44000_NodePosition']['keyValue']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'keyValue');
			if (typeof X3DJSON['Obj']['DECLnode_nodeA44000_NodePosition'].keyValue === "function") X3DJSON['Obj']['DECLnode_nodeA44000_NodePosition'].keyValue(X3DJSON.nodeUtil('DECLnode_nodeA44000_NodePosition','keyValue'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['keyValue'] };
X3DJSON['ROUTE']['DECLnode_nodeA44000_MoveBall']['keyValue']['DECLnode_nodeA44000_NodePosition']['keyValue']['TO'].observe(X3DJSON.nodeUtil('DECLnode_nodeA44000_NodePosition'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA44000_NodePosition'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA44000_NodePosition'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA44000_NodePosition']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA44000_NodePosition']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA44000_NodePosition']['value_changed']['DECLnode_nodeA44000_transform'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA44000_NodePosition']['value_changed']['DECLnode_nodeA44000_transform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA44000_NodePosition']['value_changed']['DECLnode_nodeA44000_transform']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA44000_NodePosition']['value_changed']['DECLnode_nodeA44000_transform']['set_translation'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeA44000_NodePosition']['value_changed']['DECLnode_nodeA44000_transform']['set_translation']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'value_changed');
			X3DJSON.nodeUtil('DECLnode_nodeA44000_transform','set_translation',X3DJSON.nodeUtil('DECLnode_nodeA44000_NodePosition','value_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['value_changed'] };
X3DJSON['ROUTE']['DECLnode_nodeA44000_NodePosition']['value_changed']['DECLnode_nodeA44000_transform']['set_translation']['FROM'].observe(X3DJSON.nodeUtil('DECLnode_nodeA44000_NodePosition'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA44000_NodePosition'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA44000_NodePosition'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA44000_NodePosition']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA44000_NodePosition']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA44000_NodePosition']['value_changed']['DECLnode_nodeA44000_transform'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA44000_NodePosition']['value_changed']['DECLnode_nodeA44000_transform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA44000_NodePosition']['value_changed']['DECLnode_nodeA44000_transform']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA44000_NodePosition']['value_changed']['DECLnode_nodeA44000_transform']['set_translation'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeA44000_NodePosition']['value_changed']['DECLnode_nodeA44000_transform']['set_translation']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_translation');
			if (typeof X3DJSON['Obj']['DECLnode_nodeA44000_transform'].set_translation === "function") X3DJSON['Obj']['DECLnode_nodeA44000_transform'].set_translation(X3DJSON.nodeUtil('DECLnode_nodeA44000_transform','set_translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_translation'] };
X3DJSON['ROUTE']['DECLnode_nodeA44000_NodePosition']['value_changed']['DECLnode_nodeA44000_transform']['set_translation']['TO'].observe(X3DJSON.nodeUtil('DECLnode_nodeA44000_transform'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB45000_nodeClock'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB45000_nodeClock'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB45000_nodeClock']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB45000_nodeClock']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB45000_nodeClock']['cycleTime']['DECLnode_nodeB45000_MoveBall'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB45000_nodeClock']['cycleTime']['DECLnode_nodeB45000_MoveBall'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB45000_nodeClock']['cycleTime']['DECLnode_nodeB45000_MoveBall']['set_cycle'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB45000_nodeClock']['cycleTime']['DECLnode_nodeB45000_MoveBall']['set_cycle'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeB45000_nodeClock']['cycleTime']['DECLnode_nodeB45000_MoveBall']['set_cycle']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'cycleTime');
			X3DJSON.nodeUtil('DECLnode_nodeB45000_MoveBall','set_cycle',X3DJSON.nodeUtil('DECLnode_nodeB45000_nodeClock','cycleTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['cycleTime'] };
X3DJSON['ROUTE']['DECLnode_nodeB45000_nodeClock']['cycleTime']['DECLnode_nodeB45000_MoveBall']['set_cycle']['FROM'].observe(X3DJSON.nodeUtil('DECLnode_nodeB45000_nodeClock'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB45000_nodeClock'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB45000_nodeClock'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB45000_nodeClock']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB45000_nodeClock']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB45000_nodeClock']['cycleTime']['DECLnode_nodeB45000_MoveBall'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB45000_nodeClock']['cycleTime']['DECLnode_nodeB45000_MoveBall'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB45000_nodeClock']['cycleTime']['DECLnode_nodeB45000_MoveBall']['set_cycle'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB45000_nodeClock']['cycleTime']['DECLnode_nodeB45000_MoveBall']['set_cycle'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeB45000_nodeClock']['cycleTime']['DECLnode_nodeB45000_MoveBall']['set_cycle']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_cycle');
			if (typeof X3DJSON['Obj']['DECLnode_nodeB45000_MoveBall'].set_cycle === "function") X3DJSON['Obj']['DECLnode_nodeB45000_MoveBall'].set_cycle(X3DJSON.nodeUtil('DECLnode_nodeB45000_MoveBall','set_cycle'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_cycle'] };
X3DJSON['ROUTE']['DECLnode_nodeB45000_nodeClock']['cycleTime']['DECLnode_nodeB45000_MoveBall']['set_cycle']['TO'].observe(X3DJSON.nodeUtil('DECLnode_nodeB45000_MoveBall'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB45000_nodeClock'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB45000_nodeClock'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB45000_nodeClock']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB45000_nodeClock']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB45000_nodeClock']['fraction_changed']['DECLnode_nodeB45000_NodePosition'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB45000_nodeClock']['fraction_changed']['DECLnode_nodeB45000_NodePosition'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB45000_nodeClock']['fraction_changed']['DECLnode_nodeB45000_NodePosition']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB45000_nodeClock']['fraction_changed']['DECLnode_nodeB45000_NodePosition']['set_fraction'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeB45000_nodeClock']['fraction_changed']['DECLnode_nodeB45000_NodePosition']['set_fraction']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'fraction_changed');
			X3DJSON.nodeUtil('DECLnode_nodeB45000_NodePosition','set_fraction',X3DJSON.nodeUtil('DECLnode_nodeB45000_nodeClock','fraction_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['fraction_changed'] };
X3DJSON['ROUTE']['DECLnode_nodeB45000_nodeClock']['fraction_changed']['DECLnode_nodeB45000_NodePosition']['set_fraction']['FROM'].observe(X3DJSON.nodeUtil('DECLnode_nodeB45000_nodeClock'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB45000_nodeClock'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB45000_nodeClock'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB45000_nodeClock']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB45000_nodeClock']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB45000_nodeClock']['fraction_changed']['DECLnode_nodeB45000_NodePosition'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB45000_nodeClock']['fraction_changed']['DECLnode_nodeB45000_NodePosition'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB45000_nodeClock']['fraction_changed']['DECLnode_nodeB45000_NodePosition']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB45000_nodeClock']['fraction_changed']['DECLnode_nodeB45000_NodePosition']['set_fraction'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeB45000_nodeClock']['fraction_changed']['DECLnode_nodeB45000_NodePosition']['set_fraction']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_fraction');
			if (typeof X3DJSON['Obj']['DECLnode_nodeB45000_NodePosition'].set_fraction === "function") X3DJSON['Obj']['DECLnode_nodeB45000_NodePosition'].set_fraction(X3DJSON.nodeUtil('DECLnode_nodeB45000_NodePosition','set_fraction'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_fraction'] };
X3DJSON['ROUTE']['DECLnode_nodeB45000_nodeClock']['fraction_changed']['DECLnode_nodeB45000_NodePosition']['set_fraction']['TO'].observe(X3DJSON.nodeUtil('DECLnode_nodeB45000_NodePosition'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB45000_MoveBall'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB45000_MoveBall'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB45000_MoveBall']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB45000_MoveBall']['keyValue'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB45000_MoveBall']['keyValue']['DECLnode_nodeB45000_NodePosition'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB45000_MoveBall']['keyValue']['DECLnode_nodeB45000_NodePosition'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB45000_MoveBall']['keyValue']['DECLnode_nodeB45000_NodePosition']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB45000_MoveBall']['keyValue']['DECLnode_nodeB45000_NodePosition']['keyValue'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeB45000_MoveBall']['keyValue']['DECLnode_nodeB45000_NodePosition']['keyValue']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'keyValue');
			X3DJSON.nodeUtil('DECLnode_nodeB45000_NodePosition','keyValue',X3DJSON.nodeUtil('DECLnode_nodeB45000_MoveBall','keyValue'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['keyValue'] };
X3DJSON['ROUTE']['DECLnode_nodeB45000_MoveBall']['keyValue']['DECLnode_nodeB45000_NodePosition']['keyValue']['FROM'].observe(X3DJSON.nodeUtil('DECLnode_nodeB45000_MoveBall'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB45000_MoveBall'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB45000_MoveBall'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB45000_MoveBall']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB45000_MoveBall']['keyValue'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB45000_MoveBall']['keyValue']['DECLnode_nodeB45000_NodePosition'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB45000_MoveBall']['keyValue']['DECLnode_nodeB45000_NodePosition'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB45000_MoveBall']['keyValue']['DECLnode_nodeB45000_NodePosition']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB45000_MoveBall']['keyValue']['DECLnode_nodeB45000_NodePosition']['keyValue'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeB45000_MoveBall']['keyValue']['DECLnode_nodeB45000_NodePosition']['keyValue']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'keyValue');
			if (typeof X3DJSON['Obj']['DECLnode_nodeB45000_NodePosition'].keyValue === "function") X3DJSON['Obj']['DECLnode_nodeB45000_NodePosition'].keyValue(X3DJSON.nodeUtil('DECLnode_nodeB45000_NodePosition','keyValue'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['keyValue'] };
X3DJSON['ROUTE']['DECLnode_nodeB45000_MoveBall']['keyValue']['DECLnode_nodeB45000_NodePosition']['keyValue']['TO'].observe(X3DJSON.nodeUtil('DECLnode_nodeB45000_NodePosition'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB45000_NodePosition'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB45000_NodePosition'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB45000_NodePosition']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB45000_NodePosition']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB45000_NodePosition']['value_changed']['DECLnode_nodeB45000_transform'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB45000_NodePosition']['value_changed']['DECLnode_nodeB45000_transform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB45000_NodePosition']['value_changed']['DECLnode_nodeB45000_transform']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB45000_NodePosition']['value_changed']['DECLnode_nodeB45000_transform']['set_translation'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeB45000_NodePosition']['value_changed']['DECLnode_nodeB45000_transform']['set_translation']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'value_changed');
			X3DJSON.nodeUtil('DECLnode_nodeB45000_transform','set_translation',X3DJSON.nodeUtil('DECLnode_nodeB45000_NodePosition','value_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['value_changed'] };
X3DJSON['ROUTE']['DECLnode_nodeB45000_NodePosition']['value_changed']['DECLnode_nodeB45000_transform']['set_translation']['FROM'].observe(X3DJSON.nodeUtil('DECLnode_nodeB45000_NodePosition'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB45000_NodePosition'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB45000_NodePosition'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB45000_NodePosition']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB45000_NodePosition']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB45000_NodePosition']['value_changed']['DECLnode_nodeB45000_transform'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB45000_NodePosition']['value_changed']['DECLnode_nodeB45000_transform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB45000_NodePosition']['value_changed']['DECLnode_nodeB45000_transform']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB45000_NodePosition']['value_changed']['DECLnode_nodeB45000_transform']['set_translation'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeB45000_NodePosition']['value_changed']['DECLnode_nodeB45000_transform']['set_translation']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_translation');
			if (typeof X3DJSON['Obj']['DECLnode_nodeB45000_transform'].set_translation === "function") X3DJSON['Obj']['DECLnode_nodeB45000_transform'].set_translation(X3DJSON.nodeUtil('DECLnode_nodeB45000_transform','set_translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_translation'] };
X3DJSON['ROUTE']['DECLnode_nodeB45000_NodePosition']['value_changed']['DECLnode_nodeB45000_transform']['set_translation']['TO'].observe(X3DJSON.nodeUtil('DECLnode_nodeB45000_transform'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLcylinder_linkA46000_MoveCylinder'] === 'undefined') {
X3DJSON['ROUTE']['DECLcylinder_linkA46000_MoveCylinder'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLcylinder_linkA46000_MoveCylinder']['spine'] === 'undefined') {
X3DJSON['ROUTE']['DECLcylinder_linkA46000_MoveCylinder']['spine'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLcylinder_linkA46000_MoveCylinder']['spine']['DECLcylinder_linkA46000_extrusion'] === 'undefined') {
X3DJSON['ROUTE']['DECLcylinder_linkA46000_MoveCylinder']['spine']['DECLcylinder_linkA46000_extrusion'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLcylinder_linkA46000_MoveCylinder']['spine']['DECLcylinder_linkA46000_extrusion']['set_spine'] === 'undefined') {
X3DJSON['ROUTE']['DECLcylinder_linkA46000_MoveCylinder']['spine']['DECLcylinder_linkA46000_extrusion']['set_spine'] = {};
}

X3DJSON['ROUTE']['DECLcylinder_linkA46000_MoveCylinder']['spine']['DECLcylinder_linkA46000_extrusion']['set_spine']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'spine');
			X3DJSON.nodeUtil('DECLcylinder_linkA46000_extrusion','set_spine',X3DJSON.nodeUtil('DECLcylinder_linkA46000_MoveCylinder','spine'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['spine'] };
X3DJSON['ROUTE']['DECLcylinder_linkA46000_MoveCylinder']['spine']['DECLcylinder_linkA46000_extrusion']['set_spine']['FROM'].observe(X3DJSON.nodeUtil('DECLcylinder_linkA46000_MoveCylinder'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLcylinder_linkA46000_MoveCylinder'] === 'undefined') {
X3DJSON['ROUTE']['DECLcylinder_linkA46000_MoveCylinder'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLcylinder_linkA46000_MoveCylinder']['spine'] === 'undefined') {
X3DJSON['ROUTE']['DECLcylinder_linkA46000_MoveCylinder']['spine'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLcylinder_linkA46000_MoveCylinder']['spine']['DECLcylinder_linkA46000_extrusion'] === 'undefined') {
X3DJSON['ROUTE']['DECLcylinder_linkA46000_MoveCylinder']['spine']['DECLcylinder_linkA46000_extrusion'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLcylinder_linkA46000_MoveCylinder']['spine']['DECLcylinder_linkA46000_extrusion']['set_spine'] === 'undefined') {
X3DJSON['ROUTE']['DECLcylinder_linkA46000_MoveCylinder']['spine']['DECLcylinder_linkA46000_extrusion']['set_spine'] = {};
}

X3DJSON['ROUTE']['DECLcylinder_linkA46000_MoveCylinder']['spine']['DECLcylinder_linkA46000_extrusion']['set_spine']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_spine');
			if (typeof X3DJSON['Obj']['DECLcylinder_linkA46000_extrusion'].set_spine === "function") X3DJSON['Obj']['DECLcylinder_linkA46000_extrusion'].set_spine(X3DJSON.nodeUtil('DECLcylinder_linkA46000_extrusion','set_spine'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_spine'] };
X3DJSON['ROUTE']['DECLcylinder_linkA46000_MoveCylinder']['spine']['DECLcylinder_linkA46000_extrusion']['set_spine']['TO'].observe(X3DJSON.nodeUtil('DECLcylinder_linkA46000_extrusion'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_transform'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_transform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkA_MoveCylinder'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkA_MoveCylinder'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkA_MoveCylinder']['positionA'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkA_MoveCylinder']['positionA'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkA_MoveCylinder']['positionA']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'translation');
			X3DJSON.nodeUtil('DECLcylinder_linkA_MoveCylinder','positionA',X3DJSON.nodeUtil('DECLnode_nodeA_transform','translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['translation'] };
X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkA_MoveCylinder']['positionA']['FROM'].observe(X3DJSON.nodeUtil('DECLnode_nodeA_transform'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_transform'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_transform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkA_MoveCylinder'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkA_MoveCylinder'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkA_MoveCylinder']['positionA'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkA_MoveCylinder']['positionA'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkA_MoveCylinder']['positionA']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'positionA');
			if (typeof X3DJSON['Obj']['DECLcylinder_linkA_MoveCylinder'].positionA === "function") X3DJSON['Obj']['DECLcylinder_linkA_MoveCylinder'].positionA(X3DJSON.nodeUtil('DECLcylinder_linkA_MoveCylinder','positionA'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['positionA'] };
X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkA_MoveCylinder']['positionA']['TO'].observe(X3DJSON.nodeUtil('DECLcylinder_linkA_MoveCylinder'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB_transform'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB_transform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB_transform']['translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB_transform']['translation'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB_transform']['translation']['DECLcylinder_linkA_MoveCylinder'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB_transform']['translation']['DECLcylinder_linkA_MoveCylinder'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB_transform']['translation']['DECLcylinder_linkA_MoveCylinder']['positionB'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB_transform']['translation']['DECLcylinder_linkA_MoveCylinder']['positionB'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeB_transform']['translation']['DECLcylinder_linkA_MoveCylinder']['positionB']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'translation');
			X3DJSON.nodeUtil('DECLcylinder_linkA_MoveCylinder','positionB',X3DJSON.nodeUtil('DECLnode_nodeB_transform','translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['translation'] };
X3DJSON['ROUTE']['DECLnode_nodeB_transform']['translation']['DECLcylinder_linkA_MoveCylinder']['positionB']['FROM'].observe(X3DJSON.nodeUtil('DECLnode_nodeB_transform'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB_transform'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB_transform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB_transform']['translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB_transform']['translation'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB_transform']['translation']['DECLcylinder_linkA_MoveCylinder'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB_transform']['translation']['DECLcylinder_linkA_MoveCylinder'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB_transform']['translation']['DECLcylinder_linkA_MoveCylinder']['positionB'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB_transform']['translation']['DECLcylinder_linkA_MoveCylinder']['positionB'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeB_transform']['translation']['DECLcylinder_linkA_MoveCylinder']['positionB']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'positionB');
			if (typeof X3DJSON['Obj']['DECLcylinder_linkA_MoveCylinder'].positionB === "function") X3DJSON['Obj']['DECLcylinder_linkA_MoveCylinder'].positionB(X3DJSON.nodeUtil('DECLcylinder_linkA_MoveCylinder','positionB'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['positionB'] };
X3DJSON['ROUTE']['DECLnode_nodeB_transform']['translation']['DECLcylinder_linkA_MoveCylinder']['positionB']['TO'].observe(X3DJSON.nodeUtil('DECLcylinder_linkA_MoveCylinder'), config);
			X3DJSON.nodeUtil('DECLnode_nodeA44000_NodePosition','set_fraction',X3DJSON.nodeUtil('DECLnode_nodeA44000_nodeClock','fraction_changed'), __eventTime);
			X3DJSON.nodeUtil('DECLnode_nodeB45000_NodePosition','set_fraction',X3DJSON.nodeUtil('DECLnode_nodeB45000_nodeClock','fraction_changed'), __eventTime);