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

X3DJSON['Script']['DECLnode_nodeA_MoveBall'] = function() {
	this.set_translation = function (value) {
		X3DJSON.nodeUtil('DECLnode_nodeA_MoveBall', 'translation', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.translation_changed = function () {
		return X3DJSON.nodeUtil('DECLnode_nodeA_MoveBall', 'translation');
	};
	this.set_translation(new SFVec3f(50,50,0));
	this.set_old = function (value) {
		X3DJSON.nodeUtil('DECLnode_nodeA_MoveBall', 'old', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.old_changed = function () {
		return X3DJSON.nodeUtil('DECLnode_nodeA_MoveBall', 'old');
	};
	this.set_old(new SFVec3f(0,0,0));
	this.set_cycle = function (value) {
		X3DJSON.nodeUtil('DECLnode_nodeA_MoveBall', 'cycle', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.cycle_changed = function () {
		return X3DJSON.nodeUtil('DECLnode_nodeA_MoveBall', 'cycle');
	};
	this.set_cycle(undefined);
	this.set_keyValue = function (value) {
		X3DJSON.nodeUtil('DECLnode_nodeA_MoveBall', 'keyValue', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.keyValue_changed = function () {
		return X3DJSON.nodeUtil('DECLnode_nodeA_MoveBall', 'keyValue');
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

X3DJSON['Obj']['DECLnode_nodeA_MoveBall'] = new X3DJSON['Script']['DECLnode_nodeA_MoveBall']();
if (typeof X3DJSON['Obj']['DECLnode_nodeA_MoveBall'].initialize === "function") X3DJSON['Obj']['DECLnode_nodeA_MoveBall'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLnode_nodeB_MoveBall'] = function() {
	this.set_translation = function (value) {
		X3DJSON.nodeUtil('DECLnode_nodeB_MoveBall', 'translation', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.translation_changed = function () {
		return X3DJSON.nodeUtil('DECLnode_nodeB_MoveBall', 'translation');
	};
	this.set_translation(new SFVec3f(50,50,0));
	this.set_old = function (value) {
		X3DJSON.nodeUtil('DECLnode_nodeB_MoveBall', 'old', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.old_changed = function () {
		return X3DJSON.nodeUtil('DECLnode_nodeB_MoveBall', 'old');
	};
	this.set_old(new SFVec3f(0,0,0));
	this.set_cycle = function (value) {
		X3DJSON.nodeUtil('DECLnode_nodeB_MoveBall', 'cycle', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.cycle_changed = function () {
		return X3DJSON.nodeUtil('DECLnode_nodeB_MoveBall', 'cycle');
	};
	this.set_cycle(undefined);
	this.set_keyValue = function (value) {
		X3DJSON.nodeUtil('DECLnode_nodeB_MoveBall', 'keyValue', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.keyValue_changed = function () {
		return X3DJSON.nodeUtil('DECLnode_nodeB_MoveBall', 'keyValue');
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

X3DJSON['Obj']['DECLnode_nodeB_MoveBall'] = new X3DJSON['Script']['DECLnode_nodeB_MoveBall']();
if (typeof X3DJSON['Obj']['DECLnode_nodeB_MoveBall'].initialize === "function") X3DJSON['Obj']['DECLnode_nodeB_MoveBall'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLnode_nodeC_MoveBall'] = function() {
	this.set_translation = function (value) {
		X3DJSON.nodeUtil('DECLnode_nodeC_MoveBall', 'translation', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.translation_changed = function () {
		return X3DJSON.nodeUtil('DECLnode_nodeC_MoveBall', 'translation');
	};
	this.set_translation(new SFVec3f(50,50,0));
	this.set_old = function (value) {
		X3DJSON.nodeUtil('DECLnode_nodeC_MoveBall', 'old', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.old_changed = function () {
		return X3DJSON.nodeUtil('DECLnode_nodeC_MoveBall', 'old');
	};
	this.set_old(new SFVec3f(0,0,0));
	this.set_cycle = function (value) {
		X3DJSON.nodeUtil('DECLnode_nodeC_MoveBall', 'cycle', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.cycle_changed = function () {
		return X3DJSON.nodeUtil('DECLnode_nodeC_MoveBall', 'cycle');
	};
	this.set_cycle(undefined);
	this.set_keyValue = function (value) {
		X3DJSON.nodeUtil('DECLnode_nodeC_MoveBall', 'keyValue', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.keyValue_changed = function () {
		return X3DJSON.nodeUtil('DECLnode_nodeC_MoveBall', 'keyValue');
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

X3DJSON['Obj']['DECLnode_nodeC_MoveBall'] = new X3DJSON['Script']['DECLnode_nodeC_MoveBall']();
if (typeof X3DJSON['Obj']['DECLnode_nodeC_MoveBall'].initialize === "function") X3DJSON['Obj']['DECLnode_nodeC_MoveBall'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLnode_nodeD_MoveBall'] = function() {
	this.set_translation = function (value) {
		X3DJSON.nodeUtil('DECLnode_nodeD_MoveBall', 'translation', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.translation_changed = function () {
		return X3DJSON.nodeUtil('DECLnode_nodeD_MoveBall', 'translation');
	};
	this.set_translation(new SFVec3f(50,50,0));
	this.set_old = function (value) {
		X3DJSON.nodeUtil('DECLnode_nodeD_MoveBall', 'old', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.old_changed = function () {
		return X3DJSON.nodeUtil('DECLnode_nodeD_MoveBall', 'old');
	};
	this.set_old(new SFVec3f(0,0,0));
	this.set_cycle = function (value) {
		X3DJSON.nodeUtil('DECLnode_nodeD_MoveBall', 'cycle', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.cycle_changed = function () {
		return X3DJSON.nodeUtil('DECLnode_nodeD_MoveBall', 'cycle');
	};
	this.set_cycle(undefined);
	this.set_keyValue = function (value) {
		X3DJSON.nodeUtil('DECLnode_nodeD_MoveBall', 'keyValue', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.keyValue_changed = function () {
		return X3DJSON.nodeUtil('DECLnode_nodeD_MoveBall', 'keyValue');
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

X3DJSON['Obj']['DECLnode_nodeD_MoveBall'] = new X3DJSON['Script']['DECLnode_nodeD_MoveBall']();
if (typeof X3DJSON['Obj']['DECLnode_nodeD_MoveBall'].initialize === "function") X3DJSON['Obj']['DECLnode_nodeD_MoveBall'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLcylinder_linkA_MoveCylinder'] = function() {
	this.set_spine = function (value) {
		X3DJSON.nodeUtil('DECLcylinder_linkA_MoveCylinder', 'spine', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.spine_changed = function () {
		return X3DJSON.nodeUtil('DECLcylinder_linkA_MoveCylinder', 'spine');
	};
	this.set_spine(new MFVec3f([[0,-50,0],[0,50,0]]));
	this.set_endA = function (value) {
		X3DJSON.nodeUtil('DECLcylinder_linkA_MoveCylinder', 'endA', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.endA_changed = function () {
		return X3DJSON.nodeUtil('DECLcylinder_linkA_MoveCylinder', 'endA');
	};
	this.set_endA(undefined);
	this.set_endB = function (value) {
		X3DJSON.nodeUtil('DECLcylinder_linkA_MoveCylinder', 'endB', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.endB_changed = function () {
		return X3DJSON.nodeUtil('DECLcylinder_linkA_MoveCylinder', 'endB');
	};
	this.set_endB(undefined);


ecmascript:

                
	this.set_endA = function (value) {
		    if (typeof this.spine_changed() === 'undefined') {
		        this.set_spine ( new MFVec3f(value, value));
		    } else {
		        this.set_spine ( new MFVec3f(value, this.spine_changed()[1]));
		    }
                }
        ;

	this.set_endB = function (value) {
		    if (typeof this.spine_changed() === 'undefined') {
		        this.set_spine ( new MFVec3f(value, value));
		    } else {
		        this.set_spine ( new MFVec3f(this.spine_changed()[0], value));
		    }
                }
        ;

	this.set_spine = function (value) {
                    this.set_spine ( value);
                };

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLcylinder_linkA_MoveCylinder'] = new X3DJSON['Script']['DECLcylinder_linkA_MoveCylinder']();
if (typeof X3DJSON['Obj']['DECLcylinder_linkA_MoveCylinder'].initialize === "function") X3DJSON['Obj']['DECLcylinder_linkA_MoveCylinder'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLcylinder_linkB_MoveCylinder'] = function() {
	this.set_spine = function (value) {
		X3DJSON.nodeUtil('DECLcylinder_linkB_MoveCylinder', 'spine', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.spine_changed = function () {
		return X3DJSON.nodeUtil('DECLcylinder_linkB_MoveCylinder', 'spine');
	};
	this.set_spine(new MFVec3f([[0,-50,0],[0,50,0]]));
	this.set_endA = function (value) {
		X3DJSON.nodeUtil('DECLcylinder_linkB_MoveCylinder', 'endA', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.endA_changed = function () {
		return X3DJSON.nodeUtil('DECLcylinder_linkB_MoveCylinder', 'endA');
	};
	this.set_endA(undefined);
	this.set_endB = function (value) {
		X3DJSON.nodeUtil('DECLcylinder_linkB_MoveCylinder', 'endB', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.endB_changed = function () {
		return X3DJSON.nodeUtil('DECLcylinder_linkB_MoveCylinder', 'endB');
	};
	this.set_endB(undefined);


ecmascript:

                
	this.set_endA = function (value) {
		    if (typeof this.spine_changed() === 'undefined') {
		        this.set_spine ( new MFVec3f(value, value));
		    } else {
		        this.set_spine ( new MFVec3f(value, this.spine_changed()[1]));
		    }
                }
        ;

	this.set_endB = function (value) {
		    if (typeof this.spine_changed() === 'undefined') {
		        this.set_spine ( new MFVec3f(value, value));
		    } else {
		        this.set_spine ( new MFVec3f(this.spine_changed()[0], value));
		    }
                }
        ;

	this.set_spine = function (value) {
                    this.set_spine ( value);
                };

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLcylinder_linkB_MoveCylinder'] = new X3DJSON['Script']['DECLcylinder_linkB_MoveCylinder']();
if (typeof X3DJSON['Obj']['DECLcylinder_linkB_MoveCylinder'].initialize === "function") X3DJSON['Obj']['DECLcylinder_linkB_MoveCylinder'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLcylinder_linkC_MoveCylinder'] = function() {
	this.set_spine = function (value) {
		X3DJSON.nodeUtil('DECLcylinder_linkC_MoveCylinder', 'spine', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.spine_changed = function () {
		return X3DJSON.nodeUtil('DECLcylinder_linkC_MoveCylinder', 'spine');
	};
	this.set_spine(new MFVec3f([[0,-50,0],[0,50,0]]));
	this.set_endA = function (value) {
		X3DJSON.nodeUtil('DECLcylinder_linkC_MoveCylinder', 'endA', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.endA_changed = function () {
		return X3DJSON.nodeUtil('DECLcylinder_linkC_MoveCylinder', 'endA');
	};
	this.set_endA(undefined);
	this.set_endB = function (value) {
		X3DJSON.nodeUtil('DECLcylinder_linkC_MoveCylinder', 'endB', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.endB_changed = function () {
		return X3DJSON.nodeUtil('DECLcylinder_linkC_MoveCylinder', 'endB');
	};
	this.set_endB(undefined);


ecmascript:

                
	this.set_endA = function (value) {
		    if (typeof this.spine_changed() === 'undefined') {
		        this.set_spine ( new MFVec3f(value, value));
		    } else {
		        this.set_spine ( new MFVec3f(value, this.spine_changed()[1]));
		    }
                }
        ;

	this.set_endB = function (value) {
		    if (typeof this.spine_changed() === 'undefined') {
		        this.set_spine ( new MFVec3f(value, value));
		    } else {
		        this.set_spine ( new MFVec3f(this.spine_changed()[0], value));
		    }
                }
        ;

	this.set_spine = function (value) {
                    this.set_spine ( value);
                };

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLcylinder_linkC_MoveCylinder'] = new X3DJSON['Script']['DECLcylinder_linkC_MoveCylinder']();
if (typeof X3DJSON['Obj']['DECLcylinder_linkC_MoveCylinder'].initialize === "function") X3DJSON['Obj']['DECLcylinder_linkC_MoveCylinder'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['clickHandler'] = function() {
	this.set_counter = function (value) {
		X3DJSON.nodeUtil('clickHandler', 'counter', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.counter_changed = function () {
		return X3DJSON.nodeUtil('clickHandler', 'counter');
	};
	this.set_counter(new SFInt32(0));
	this.set_node = function (value) {
		X3DJSON.nodeUtil('clickHandler', 'node', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.node_changed = function () {
		return X3DJSON.nodeUtil('clickHandler', 'node');
	};
	this.set_node(undefined);
	this.set_add_node = function (value) {
		X3DJSON.nodeUtil('clickHandler', 'add_node', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.add_node_changed = function () {
		return X3DJSON.nodeUtil('clickHandler', 'add_node');
	};
	this.set_add_node(new SFBool(false));
	this.set_ModifiableNode = function (value) {
		X3DJSON.nodeUtil('clickHandler', 'ModifiableNode', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.ModifiableNode_changed = function () {
		return X3DJSON.nodeUtil('clickHandler', 'ModifiableNode');
	};
	this.set_ModifiableNode(new SFNode());

	
ecmascript:
	
	this.add_node = function (value) {
                // console.error('hey ', this.counter_changed());
                this.set_counter ( this.counter_changed()++);
		Browser.appendTo(Browser.getDocument().querySelector("field [name=this.ModifiableNode_changed()]"),
			{ "ProtoInstance":
				{ "@name":"node",
				  "@DEF":"node'+this.counter_changed()+'",
				  "fieldValue": [
					{
						 "@name":"position",
						 "@value":[0.0,0.0,0.0]
					}
				  ]
				}
			});
                
        };

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['clickHandler'] = new X3DJSON['Script']['clickHandler']();
if (typeof X3DJSON['Obj']['clickHandler'].initialize === "function") X3DJSON['Obj']['clickHandler'].initialize();
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_nodeClock'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_nodeClock'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_nodeClock']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_nodeClock']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_nodeClock']['cycleTime']['DECLnode_nodeA_MoveBall'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_nodeClock']['cycleTime']['DECLnode_nodeA_MoveBall'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_nodeClock']['cycleTime']['DECLnode_nodeA_MoveBall']['set_cycle'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_nodeClock']['cycleTime']['DECLnode_nodeA_MoveBall']['set_cycle'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeA_nodeClock']['cycleTime']['DECLnode_nodeA_MoveBall']['set_cycle']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'cycleTime');
			X3DJSON.nodeUtil('DECLnode_nodeA_MoveBall','set_cycle',X3DJSON.nodeUtil('DECLnode_nodeA_nodeClock','cycleTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['cycleTime'] };
X3DJSON['ROUTE']['DECLnode_nodeA_nodeClock']['cycleTime']['DECLnode_nodeA_MoveBall']['set_cycle']['FROM'].observe(X3DJSON.nodeUtil('DECLnode_nodeA_nodeClock'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_nodeClock'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_nodeClock'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_nodeClock']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_nodeClock']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_nodeClock']['cycleTime']['DECLnode_nodeA_MoveBall'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_nodeClock']['cycleTime']['DECLnode_nodeA_MoveBall'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_nodeClock']['cycleTime']['DECLnode_nodeA_MoveBall']['set_cycle'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_nodeClock']['cycleTime']['DECLnode_nodeA_MoveBall']['set_cycle'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeA_nodeClock']['cycleTime']['DECLnode_nodeA_MoveBall']['set_cycle']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_cycle');
			if (typeof X3DJSON['Obj']['DECLnode_nodeA_MoveBall'].set_cycle === "function") X3DJSON['Obj']['DECLnode_nodeA_MoveBall'].set_cycle(X3DJSON.nodeUtil('DECLnode_nodeA_MoveBall','set_cycle'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_cycle'] };
X3DJSON['ROUTE']['DECLnode_nodeA_nodeClock']['cycleTime']['DECLnode_nodeA_MoveBall']['set_cycle']['TO'].observe(X3DJSON.nodeUtil('DECLnode_nodeA_MoveBall'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_nodeClock'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_nodeClock'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_nodeClock']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_nodeClock']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_nodeClock']['fraction_changed']['DECLnode_nodeA_NodePosition'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_nodeClock']['fraction_changed']['DECLnode_nodeA_NodePosition'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_nodeClock']['fraction_changed']['DECLnode_nodeA_NodePosition']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_nodeClock']['fraction_changed']['DECLnode_nodeA_NodePosition']['set_fraction'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeA_nodeClock']['fraction_changed']['DECLnode_nodeA_NodePosition']['set_fraction']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'fraction_changed');
			X3DJSON.nodeUtil('DECLnode_nodeA_NodePosition','set_fraction',X3DJSON.nodeUtil('DECLnode_nodeA_nodeClock','fraction_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['fraction_changed'] };
X3DJSON['ROUTE']['DECLnode_nodeA_nodeClock']['fraction_changed']['DECLnode_nodeA_NodePosition']['set_fraction']['FROM'].observe(X3DJSON.nodeUtil('DECLnode_nodeA_nodeClock'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_nodeClock'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_nodeClock'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_nodeClock']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_nodeClock']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_nodeClock']['fraction_changed']['DECLnode_nodeA_NodePosition'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_nodeClock']['fraction_changed']['DECLnode_nodeA_NodePosition'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_nodeClock']['fraction_changed']['DECLnode_nodeA_NodePosition']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_nodeClock']['fraction_changed']['DECLnode_nodeA_NodePosition']['set_fraction'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeA_nodeClock']['fraction_changed']['DECLnode_nodeA_NodePosition']['set_fraction']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_fraction');
			if (typeof X3DJSON['Obj']['DECLnode_nodeA_NodePosition'].set_fraction === "function") X3DJSON['Obj']['DECLnode_nodeA_NodePosition'].set_fraction(X3DJSON.nodeUtil('DECLnode_nodeA_NodePosition','set_fraction'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_fraction'] };
X3DJSON['ROUTE']['DECLnode_nodeA_nodeClock']['fraction_changed']['DECLnode_nodeA_NodePosition']['set_fraction']['TO'].observe(X3DJSON.nodeUtil('DECLnode_nodeA_NodePosition'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_MoveBall'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_MoveBall'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_MoveBall']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_MoveBall']['keyValue'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_MoveBall']['keyValue']['DECLnode_nodeA_NodePosition'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_MoveBall']['keyValue']['DECLnode_nodeA_NodePosition'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_MoveBall']['keyValue']['DECLnode_nodeA_NodePosition']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_MoveBall']['keyValue']['DECLnode_nodeA_NodePosition']['keyValue'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeA_MoveBall']['keyValue']['DECLnode_nodeA_NodePosition']['keyValue']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'keyValue');
			X3DJSON.nodeUtil('DECLnode_nodeA_NodePosition','keyValue',X3DJSON.nodeUtil('DECLnode_nodeA_MoveBall','keyValue'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['keyValue'] };
X3DJSON['ROUTE']['DECLnode_nodeA_MoveBall']['keyValue']['DECLnode_nodeA_NodePosition']['keyValue']['FROM'].observe(X3DJSON.nodeUtil('DECLnode_nodeA_MoveBall'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_MoveBall'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_MoveBall'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_MoveBall']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_MoveBall']['keyValue'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_MoveBall']['keyValue']['DECLnode_nodeA_NodePosition'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_MoveBall']['keyValue']['DECLnode_nodeA_NodePosition'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_MoveBall']['keyValue']['DECLnode_nodeA_NodePosition']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_MoveBall']['keyValue']['DECLnode_nodeA_NodePosition']['keyValue'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeA_MoveBall']['keyValue']['DECLnode_nodeA_NodePosition']['keyValue']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'keyValue');
			if (typeof X3DJSON['Obj']['DECLnode_nodeA_NodePosition'].keyValue === "function") X3DJSON['Obj']['DECLnode_nodeA_NodePosition'].keyValue(X3DJSON.nodeUtil('DECLnode_nodeA_NodePosition','keyValue'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['keyValue'] };
X3DJSON['ROUTE']['DECLnode_nodeA_MoveBall']['keyValue']['DECLnode_nodeA_NodePosition']['keyValue']['TO'].observe(X3DJSON.nodeUtil('DECLnode_nodeA_NodePosition'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_NodePosition'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_NodePosition'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_NodePosition']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_NodePosition']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_NodePosition']['value_changed']['DECLnode_nodeA_transform'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_NodePosition']['value_changed']['DECLnode_nodeA_transform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_NodePosition']['value_changed']['DECLnode_nodeA_transform']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_NodePosition']['value_changed']['DECLnode_nodeA_transform']['set_translation'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeA_NodePosition']['value_changed']['DECLnode_nodeA_transform']['set_translation']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'value_changed');
			X3DJSON.nodeUtil('DECLnode_nodeA_transform','set_translation',X3DJSON.nodeUtil('DECLnode_nodeA_NodePosition','value_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['value_changed'] };
X3DJSON['ROUTE']['DECLnode_nodeA_NodePosition']['value_changed']['DECLnode_nodeA_transform']['set_translation']['FROM'].observe(X3DJSON.nodeUtil('DECLnode_nodeA_NodePosition'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_NodePosition'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_NodePosition'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_NodePosition']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_NodePosition']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_NodePosition']['value_changed']['DECLnode_nodeA_transform'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_NodePosition']['value_changed']['DECLnode_nodeA_transform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_NodePosition']['value_changed']['DECLnode_nodeA_transform']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_NodePosition']['value_changed']['DECLnode_nodeA_transform']['set_translation'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeA_NodePosition']['value_changed']['DECLnode_nodeA_transform']['set_translation']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_translation');
			if (typeof X3DJSON['Obj']['DECLnode_nodeA_transform'].set_translation === "function") X3DJSON['Obj']['DECLnode_nodeA_transform'].set_translation(X3DJSON.nodeUtil('DECLnode_nodeA_transform','set_translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_translation'] };
X3DJSON['ROUTE']['DECLnode_nodeA_NodePosition']['value_changed']['DECLnode_nodeA_transform']['set_translation']['TO'].observe(X3DJSON.nodeUtil('DECLnode_nodeA_transform'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB_nodeClock'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB_nodeClock'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB_nodeClock']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB_nodeClock']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB_nodeClock']['cycleTime']['DECLnode_nodeB_MoveBall'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB_nodeClock']['cycleTime']['DECLnode_nodeB_MoveBall'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB_nodeClock']['cycleTime']['DECLnode_nodeB_MoveBall']['set_cycle'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB_nodeClock']['cycleTime']['DECLnode_nodeB_MoveBall']['set_cycle'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeB_nodeClock']['cycleTime']['DECLnode_nodeB_MoveBall']['set_cycle']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'cycleTime');
			X3DJSON.nodeUtil('DECLnode_nodeB_MoveBall','set_cycle',X3DJSON.nodeUtil('DECLnode_nodeB_nodeClock','cycleTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['cycleTime'] };
X3DJSON['ROUTE']['DECLnode_nodeB_nodeClock']['cycleTime']['DECLnode_nodeB_MoveBall']['set_cycle']['FROM'].observe(X3DJSON.nodeUtil('DECLnode_nodeB_nodeClock'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB_nodeClock'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB_nodeClock'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB_nodeClock']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB_nodeClock']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB_nodeClock']['cycleTime']['DECLnode_nodeB_MoveBall'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB_nodeClock']['cycleTime']['DECLnode_nodeB_MoveBall'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB_nodeClock']['cycleTime']['DECLnode_nodeB_MoveBall']['set_cycle'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB_nodeClock']['cycleTime']['DECLnode_nodeB_MoveBall']['set_cycle'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeB_nodeClock']['cycleTime']['DECLnode_nodeB_MoveBall']['set_cycle']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_cycle');
			if (typeof X3DJSON['Obj']['DECLnode_nodeB_MoveBall'].set_cycle === "function") X3DJSON['Obj']['DECLnode_nodeB_MoveBall'].set_cycle(X3DJSON.nodeUtil('DECLnode_nodeB_MoveBall','set_cycle'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_cycle'] };
X3DJSON['ROUTE']['DECLnode_nodeB_nodeClock']['cycleTime']['DECLnode_nodeB_MoveBall']['set_cycle']['TO'].observe(X3DJSON.nodeUtil('DECLnode_nodeB_MoveBall'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB_nodeClock'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB_nodeClock'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB_nodeClock']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB_nodeClock']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB_nodeClock']['fraction_changed']['DECLnode_nodeB_NodePosition'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB_nodeClock']['fraction_changed']['DECLnode_nodeB_NodePosition'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB_nodeClock']['fraction_changed']['DECLnode_nodeB_NodePosition']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB_nodeClock']['fraction_changed']['DECLnode_nodeB_NodePosition']['set_fraction'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeB_nodeClock']['fraction_changed']['DECLnode_nodeB_NodePosition']['set_fraction']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'fraction_changed');
			X3DJSON.nodeUtil('DECLnode_nodeB_NodePosition','set_fraction',X3DJSON.nodeUtil('DECLnode_nodeB_nodeClock','fraction_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['fraction_changed'] };
X3DJSON['ROUTE']['DECLnode_nodeB_nodeClock']['fraction_changed']['DECLnode_nodeB_NodePosition']['set_fraction']['FROM'].observe(X3DJSON.nodeUtil('DECLnode_nodeB_nodeClock'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB_nodeClock'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB_nodeClock'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB_nodeClock']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB_nodeClock']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB_nodeClock']['fraction_changed']['DECLnode_nodeB_NodePosition'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB_nodeClock']['fraction_changed']['DECLnode_nodeB_NodePosition'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB_nodeClock']['fraction_changed']['DECLnode_nodeB_NodePosition']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB_nodeClock']['fraction_changed']['DECLnode_nodeB_NodePosition']['set_fraction'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeB_nodeClock']['fraction_changed']['DECLnode_nodeB_NodePosition']['set_fraction']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_fraction');
			if (typeof X3DJSON['Obj']['DECLnode_nodeB_NodePosition'].set_fraction === "function") X3DJSON['Obj']['DECLnode_nodeB_NodePosition'].set_fraction(X3DJSON.nodeUtil('DECLnode_nodeB_NodePosition','set_fraction'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_fraction'] };
X3DJSON['ROUTE']['DECLnode_nodeB_nodeClock']['fraction_changed']['DECLnode_nodeB_NodePosition']['set_fraction']['TO'].observe(X3DJSON.nodeUtil('DECLnode_nodeB_NodePosition'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB_MoveBall'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB_MoveBall'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB_MoveBall']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB_MoveBall']['keyValue'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB_MoveBall']['keyValue']['DECLnode_nodeB_NodePosition'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB_MoveBall']['keyValue']['DECLnode_nodeB_NodePosition'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB_MoveBall']['keyValue']['DECLnode_nodeB_NodePosition']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB_MoveBall']['keyValue']['DECLnode_nodeB_NodePosition']['keyValue'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeB_MoveBall']['keyValue']['DECLnode_nodeB_NodePosition']['keyValue']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'keyValue');
			X3DJSON.nodeUtil('DECLnode_nodeB_NodePosition','keyValue',X3DJSON.nodeUtil('DECLnode_nodeB_MoveBall','keyValue'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['keyValue'] };
X3DJSON['ROUTE']['DECLnode_nodeB_MoveBall']['keyValue']['DECLnode_nodeB_NodePosition']['keyValue']['FROM'].observe(X3DJSON.nodeUtil('DECLnode_nodeB_MoveBall'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB_MoveBall'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB_MoveBall'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB_MoveBall']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB_MoveBall']['keyValue'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB_MoveBall']['keyValue']['DECLnode_nodeB_NodePosition'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB_MoveBall']['keyValue']['DECLnode_nodeB_NodePosition'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB_MoveBall']['keyValue']['DECLnode_nodeB_NodePosition']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB_MoveBall']['keyValue']['DECLnode_nodeB_NodePosition']['keyValue'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeB_MoveBall']['keyValue']['DECLnode_nodeB_NodePosition']['keyValue']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'keyValue');
			if (typeof X3DJSON['Obj']['DECLnode_nodeB_NodePosition'].keyValue === "function") X3DJSON['Obj']['DECLnode_nodeB_NodePosition'].keyValue(X3DJSON.nodeUtil('DECLnode_nodeB_NodePosition','keyValue'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['keyValue'] };
X3DJSON['ROUTE']['DECLnode_nodeB_MoveBall']['keyValue']['DECLnode_nodeB_NodePosition']['keyValue']['TO'].observe(X3DJSON.nodeUtil('DECLnode_nodeB_NodePosition'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB_NodePosition'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB_NodePosition'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB_NodePosition']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB_NodePosition']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB_NodePosition']['value_changed']['DECLnode_nodeB_transform'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB_NodePosition']['value_changed']['DECLnode_nodeB_transform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB_NodePosition']['value_changed']['DECLnode_nodeB_transform']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB_NodePosition']['value_changed']['DECLnode_nodeB_transform']['set_translation'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeB_NodePosition']['value_changed']['DECLnode_nodeB_transform']['set_translation']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'value_changed');
			X3DJSON.nodeUtil('DECLnode_nodeB_transform','set_translation',X3DJSON.nodeUtil('DECLnode_nodeB_NodePosition','value_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['value_changed'] };
X3DJSON['ROUTE']['DECLnode_nodeB_NodePosition']['value_changed']['DECLnode_nodeB_transform']['set_translation']['FROM'].observe(X3DJSON.nodeUtil('DECLnode_nodeB_NodePosition'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB_NodePosition'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB_NodePosition'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB_NodePosition']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB_NodePosition']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB_NodePosition']['value_changed']['DECLnode_nodeB_transform'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB_NodePosition']['value_changed']['DECLnode_nodeB_transform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB_NodePosition']['value_changed']['DECLnode_nodeB_transform']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB_NodePosition']['value_changed']['DECLnode_nodeB_transform']['set_translation'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeB_NodePosition']['value_changed']['DECLnode_nodeB_transform']['set_translation']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_translation');
			if (typeof X3DJSON['Obj']['DECLnode_nodeB_transform'].set_translation === "function") X3DJSON['Obj']['DECLnode_nodeB_transform'].set_translation(X3DJSON.nodeUtil('DECLnode_nodeB_transform','set_translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_translation'] };
X3DJSON['ROUTE']['DECLnode_nodeB_NodePosition']['value_changed']['DECLnode_nodeB_transform']['set_translation']['TO'].observe(X3DJSON.nodeUtil('DECLnode_nodeB_transform'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeC_nodeClock'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeC_nodeClock'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeC_nodeClock']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeC_nodeClock']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeC_nodeClock']['cycleTime']['DECLnode_nodeC_MoveBall'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeC_nodeClock']['cycleTime']['DECLnode_nodeC_MoveBall'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeC_nodeClock']['cycleTime']['DECLnode_nodeC_MoveBall']['set_cycle'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeC_nodeClock']['cycleTime']['DECLnode_nodeC_MoveBall']['set_cycle'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeC_nodeClock']['cycleTime']['DECLnode_nodeC_MoveBall']['set_cycle']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'cycleTime');
			X3DJSON.nodeUtil('DECLnode_nodeC_MoveBall','set_cycle',X3DJSON.nodeUtil('DECLnode_nodeC_nodeClock','cycleTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['cycleTime'] };
X3DJSON['ROUTE']['DECLnode_nodeC_nodeClock']['cycleTime']['DECLnode_nodeC_MoveBall']['set_cycle']['FROM'].observe(X3DJSON.nodeUtil('DECLnode_nodeC_nodeClock'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeC_nodeClock'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeC_nodeClock'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeC_nodeClock']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeC_nodeClock']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeC_nodeClock']['cycleTime']['DECLnode_nodeC_MoveBall'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeC_nodeClock']['cycleTime']['DECLnode_nodeC_MoveBall'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeC_nodeClock']['cycleTime']['DECLnode_nodeC_MoveBall']['set_cycle'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeC_nodeClock']['cycleTime']['DECLnode_nodeC_MoveBall']['set_cycle'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeC_nodeClock']['cycleTime']['DECLnode_nodeC_MoveBall']['set_cycle']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_cycle');
			if (typeof X3DJSON['Obj']['DECLnode_nodeC_MoveBall'].set_cycle === "function") X3DJSON['Obj']['DECLnode_nodeC_MoveBall'].set_cycle(X3DJSON.nodeUtil('DECLnode_nodeC_MoveBall','set_cycle'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_cycle'] };
X3DJSON['ROUTE']['DECLnode_nodeC_nodeClock']['cycleTime']['DECLnode_nodeC_MoveBall']['set_cycle']['TO'].observe(X3DJSON.nodeUtil('DECLnode_nodeC_MoveBall'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeC_nodeClock'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeC_nodeClock'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeC_nodeClock']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeC_nodeClock']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeC_nodeClock']['fraction_changed']['DECLnode_nodeC_NodePosition'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeC_nodeClock']['fraction_changed']['DECLnode_nodeC_NodePosition'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeC_nodeClock']['fraction_changed']['DECLnode_nodeC_NodePosition']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeC_nodeClock']['fraction_changed']['DECLnode_nodeC_NodePosition']['set_fraction'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeC_nodeClock']['fraction_changed']['DECLnode_nodeC_NodePosition']['set_fraction']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'fraction_changed');
			X3DJSON.nodeUtil('DECLnode_nodeC_NodePosition','set_fraction',X3DJSON.nodeUtil('DECLnode_nodeC_nodeClock','fraction_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['fraction_changed'] };
X3DJSON['ROUTE']['DECLnode_nodeC_nodeClock']['fraction_changed']['DECLnode_nodeC_NodePosition']['set_fraction']['FROM'].observe(X3DJSON.nodeUtil('DECLnode_nodeC_nodeClock'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeC_nodeClock'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeC_nodeClock'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeC_nodeClock']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeC_nodeClock']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeC_nodeClock']['fraction_changed']['DECLnode_nodeC_NodePosition'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeC_nodeClock']['fraction_changed']['DECLnode_nodeC_NodePosition'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeC_nodeClock']['fraction_changed']['DECLnode_nodeC_NodePosition']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeC_nodeClock']['fraction_changed']['DECLnode_nodeC_NodePosition']['set_fraction'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeC_nodeClock']['fraction_changed']['DECLnode_nodeC_NodePosition']['set_fraction']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_fraction');
			if (typeof X3DJSON['Obj']['DECLnode_nodeC_NodePosition'].set_fraction === "function") X3DJSON['Obj']['DECLnode_nodeC_NodePosition'].set_fraction(X3DJSON.nodeUtil('DECLnode_nodeC_NodePosition','set_fraction'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_fraction'] };
X3DJSON['ROUTE']['DECLnode_nodeC_nodeClock']['fraction_changed']['DECLnode_nodeC_NodePosition']['set_fraction']['TO'].observe(X3DJSON.nodeUtil('DECLnode_nodeC_NodePosition'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeC_MoveBall'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeC_MoveBall'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeC_MoveBall']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeC_MoveBall']['keyValue'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeC_MoveBall']['keyValue']['DECLnode_nodeC_NodePosition'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeC_MoveBall']['keyValue']['DECLnode_nodeC_NodePosition'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeC_MoveBall']['keyValue']['DECLnode_nodeC_NodePosition']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeC_MoveBall']['keyValue']['DECLnode_nodeC_NodePosition']['keyValue'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeC_MoveBall']['keyValue']['DECLnode_nodeC_NodePosition']['keyValue']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'keyValue');
			X3DJSON.nodeUtil('DECLnode_nodeC_NodePosition','keyValue',X3DJSON.nodeUtil('DECLnode_nodeC_MoveBall','keyValue'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['keyValue'] };
X3DJSON['ROUTE']['DECLnode_nodeC_MoveBall']['keyValue']['DECLnode_nodeC_NodePosition']['keyValue']['FROM'].observe(X3DJSON.nodeUtil('DECLnode_nodeC_MoveBall'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeC_MoveBall'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeC_MoveBall'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeC_MoveBall']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeC_MoveBall']['keyValue'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeC_MoveBall']['keyValue']['DECLnode_nodeC_NodePosition'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeC_MoveBall']['keyValue']['DECLnode_nodeC_NodePosition'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeC_MoveBall']['keyValue']['DECLnode_nodeC_NodePosition']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeC_MoveBall']['keyValue']['DECLnode_nodeC_NodePosition']['keyValue'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeC_MoveBall']['keyValue']['DECLnode_nodeC_NodePosition']['keyValue']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'keyValue');
			if (typeof X3DJSON['Obj']['DECLnode_nodeC_NodePosition'].keyValue === "function") X3DJSON['Obj']['DECLnode_nodeC_NodePosition'].keyValue(X3DJSON.nodeUtil('DECLnode_nodeC_NodePosition','keyValue'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['keyValue'] };
X3DJSON['ROUTE']['DECLnode_nodeC_MoveBall']['keyValue']['DECLnode_nodeC_NodePosition']['keyValue']['TO'].observe(X3DJSON.nodeUtil('DECLnode_nodeC_NodePosition'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeC_NodePosition'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeC_NodePosition'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeC_NodePosition']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeC_NodePosition']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeC_NodePosition']['value_changed']['DECLnode_nodeC_transform'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeC_NodePosition']['value_changed']['DECLnode_nodeC_transform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeC_NodePosition']['value_changed']['DECLnode_nodeC_transform']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeC_NodePosition']['value_changed']['DECLnode_nodeC_transform']['set_translation'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeC_NodePosition']['value_changed']['DECLnode_nodeC_transform']['set_translation']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'value_changed');
			X3DJSON.nodeUtil('DECLnode_nodeC_transform','set_translation',X3DJSON.nodeUtil('DECLnode_nodeC_NodePosition','value_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['value_changed'] };
X3DJSON['ROUTE']['DECLnode_nodeC_NodePosition']['value_changed']['DECLnode_nodeC_transform']['set_translation']['FROM'].observe(X3DJSON.nodeUtil('DECLnode_nodeC_NodePosition'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeC_NodePosition'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeC_NodePosition'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeC_NodePosition']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeC_NodePosition']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeC_NodePosition']['value_changed']['DECLnode_nodeC_transform'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeC_NodePosition']['value_changed']['DECLnode_nodeC_transform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeC_NodePosition']['value_changed']['DECLnode_nodeC_transform']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeC_NodePosition']['value_changed']['DECLnode_nodeC_transform']['set_translation'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeC_NodePosition']['value_changed']['DECLnode_nodeC_transform']['set_translation']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_translation');
			if (typeof X3DJSON['Obj']['DECLnode_nodeC_transform'].set_translation === "function") X3DJSON['Obj']['DECLnode_nodeC_transform'].set_translation(X3DJSON.nodeUtil('DECLnode_nodeC_transform','set_translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_translation'] };
X3DJSON['ROUTE']['DECLnode_nodeC_NodePosition']['value_changed']['DECLnode_nodeC_transform']['set_translation']['TO'].observe(X3DJSON.nodeUtil('DECLnode_nodeC_transform'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeD_nodeClock'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeD_nodeClock'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeD_nodeClock']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeD_nodeClock']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeD_nodeClock']['cycleTime']['DECLnode_nodeD_MoveBall'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeD_nodeClock']['cycleTime']['DECLnode_nodeD_MoveBall'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeD_nodeClock']['cycleTime']['DECLnode_nodeD_MoveBall']['set_cycle'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeD_nodeClock']['cycleTime']['DECLnode_nodeD_MoveBall']['set_cycle'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeD_nodeClock']['cycleTime']['DECLnode_nodeD_MoveBall']['set_cycle']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'cycleTime');
			X3DJSON.nodeUtil('DECLnode_nodeD_MoveBall','set_cycle',X3DJSON.nodeUtil('DECLnode_nodeD_nodeClock','cycleTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['cycleTime'] };
X3DJSON['ROUTE']['DECLnode_nodeD_nodeClock']['cycleTime']['DECLnode_nodeD_MoveBall']['set_cycle']['FROM'].observe(X3DJSON.nodeUtil('DECLnode_nodeD_nodeClock'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeD_nodeClock'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeD_nodeClock'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeD_nodeClock']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeD_nodeClock']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeD_nodeClock']['cycleTime']['DECLnode_nodeD_MoveBall'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeD_nodeClock']['cycleTime']['DECLnode_nodeD_MoveBall'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeD_nodeClock']['cycleTime']['DECLnode_nodeD_MoveBall']['set_cycle'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeD_nodeClock']['cycleTime']['DECLnode_nodeD_MoveBall']['set_cycle'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeD_nodeClock']['cycleTime']['DECLnode_nodeD_MoveBall']['set_cycle']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_cycle');
			if (typeof X3DJSON['Obj']['DECLnode_nodeD_MoveBall'].set_cycle === "function") X3DJSON['Obj']['DECLnode_nodeD_MoveBall'].set_cycle(X3DJSON.nodeUtil('DECLnode_nodeD_MoveBall','set_cycle'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_cycle'] };
X3DJSON['ROUTE']['DECLnode_nodeD_nodeClock']['cycleTime']['DECLnode_nodeD_MoveBall']['set_cycle']['TO'].observe(X3DJSON.nodeUtil('DECLnode_nodeD_MoveBall'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeD_nodeClock'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeD_nodeClock'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeD_nodeClock']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeD_nodeClock']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeD_nodeClock']['fraction_changed']['DECLnode_nodeD_NodePosition'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeD_nodeClock']['fraction_changed']['DECLnode_nodeD_NodePosition'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeD_nodeClock']['fraction_changed']['DECLnode_nodeD_NodePosition']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeD_nodeClock']['fraction_changed']['DECLnode_nodeD_NodePosition']['set_fraction'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeD_nodeClock']['fraction_changed']['DECLnode_nodeD_NodePosition']['set_fraction']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'fraction_changed');
			X3DJSON.nodeUtil('DECLnode_nodeD_NodePosition','set_fraction',X3DJSON.nodeUtil('DECLnode_nodeD_nodeClock','fraction_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['fraction_changed'] };
X3DJSON['ROUTE']['DECLnode_nodeD_nodeClock']['fraction_changed']['DECLnode_nodeD_NodePosition']['set_fraction']['FROM'].observe(X3DJSON.nodeUtil('DECLnode_nodeD_nodeClock'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeD_nodeClock'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeD_nodeClock'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeD_nodeClock']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeD_nodeClock']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeD_nodeClock']['fraction_changed']['DECLnode_nodeD_NodePosition'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeD_nodeClock']['fraction_changed']['DECLnode_nodeD_NodePosition'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeD_nodeClock']['fraction_changed']['DECLnode_nodeD_NodePosition']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeD_nodeClock']['fraction_changed']['DECLnode_nodeD_NodePosition']['set_fraction'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeD_nodeClock']['fraction_changed']['DECLnode_nodeD_NodePosition']['set_fraction']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_fraction');
			if (typeof X3DJSON['Obj']['DECLnode_nodeD_NodePosition'].set_fraction === "function") X3DJSON['Obj']['DECLnode_nodeD_NodePosition'].set_fraction(X3DJSON.nodeUtil('DECLnode_nodeD_NodePosition','set_fraction'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_fraction'] };
X3DJSON['ROUTE']['DECLnode_nodeD_nodeClock']['fraction_changed']['DECLnode_nodeD_NodePosition']['set_fraction']['TO'].observe(X3DJSON.nodeUtil('DECLnode_nodeD_NodePosition'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeD_MoveBall'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeD_MoveBall'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeD_MoveBall']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeD_MoveBall']['keyValue'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeD_MoveBall']['keyValue']['DECLnode_nodeD_NodePosition'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeD_MoveBall']['keyValue']['DECLnode_nodeD_NodePosition'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeD_MoveBall']['keyValue']['DECLnode_nodeD_NodePosition']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeD_MoveBall']['keyValue']['DECLnode_nodeD_NodePosition']['keyValue'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeD_MoveBall']['keyValue']['DECLnode_nodeD_NodePosition']['keyValue']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'keyValue');
			X3DJSON.nodeUtil('DECLnode_nodeD_NodePosition','keyValue',X3DJSON.nodeUtil('DECLnode_nodeD_MoveBall','keyValue'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['keyValue'] };
X3DJSON['ROUTE']['DECLnode_nodeD_MoveBall']['keyValue']['DECLnode_nodeD_NodePosition']['keyValue']['FROM'].observe(X3DJSON.nodeUtil('DECLnode_nodeD_MoveBall'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeD_MoveBall'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeD_MoveBall'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeD_MoveBall']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeD_MoveBall']['keyValue'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeD_MoveBall']['keyValue']['DECLnode_nodeD_NodePosition'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeD_MoveBall']['keyValue']['DECLnode_nodeD_NodePosition'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeD_MoveBall']['keyValue']['DECLnode_nodeD_NodePosition']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeD_MoveBall']['keyValue']['DECLnode_nodeD_NodePosition']['keyValue'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeD_MoveBall']['keyValue']['DECLnode_nodeD_NodePosition']['keyValue']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'keyValue');
			if (typeof X3DJSON['Obj']['DECLnode_nodeD_NodePosition'].keyValue === "function") X3DJSON['Obj']['DECLnode_nodeD_NodePosition'].keyValue(X3DJSON.nodeUtil('DECLnode_nodeD_NodePosition','keyValue'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['keyValue'] };
X3DJSON['ROUTE']['DECLnode_nodeD_MoveBall']['keyValue']['DECLnode_nodeD_NodePosition']['keyValue']['TO'].observe(X3DJSON.nodeUtil('DECLnode_nodeD_NodePosition'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeD_NodePosition'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeD_NodePosition'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeD_NodePosition']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeD_NodePosition']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeD_NodePosition']['value_changed']['DECLnode_nodeD_transform'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeD_NodePosition']['value_changed']['DECLnode_nodeD_transform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeD_NodePosition']['value_changed']['DECLnode_nodeD_transform']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeD_NodePosition']['value_changed']['DECLnode_nodeD_transform']['set_translation'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeD_NodePosition']['value_changed']['DECLnode_nodeD_transform']['set_translation']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'value_changed');
			X3DJSON.nodeUtil('DECLnode_nodeD_transform','set_translation',X3DJSON.nodeUtil('DECLnode_nodeD_NodePosition','value_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['value_changed'] };
X3DJSON['ROUTE']['DECLnode_nodeD_NodePosition']['value_changed']['DECLnode_nodeD_transform']['set_translation']['FROM'].observe(X3DJSON.nodeUtil('DECLnode_nodeD_NodePosition'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeD_NodePosition'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeD_NodePosition'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeD_NodePosition']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeD_NodePosition']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeD_NodePosition']['value_changed']['DECLnode_nodeD_transform'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeD_NodePosition']['value_changed']['DECLnode_nodeD_transform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeD_NodePosition']['value_changed']['DECLnode_nodeD_transform']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeD_NodePosition']['value_changed']['DECLnode_nodeD_transform']['set_translation'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeD_NodePosition']['value_changed']['DECLnode_nodeD_transform']['set_translation']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_translation');
			if (typeof X3DJSON['Obj']['DECLnode_nodeD_transform'].set_translation === "function") X3DJSON['Obj']['DECLnode_nodeD_transform'].set_translation(X3DJSON.nodeUtil('DECLnode_nodeD_transform','set_translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_translation'] };
X3DJSON['ROUTE']['DECLnode_nodeD_NodePosition']['value_changed']['DECLnode_nodeD_transform']['set_translation']['TO'].observe(X3DJSON.nodeUtil('DECLnode_nodeD_transform'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLcylinder_linkA_MoveCylinder'] === 'undefined') {
X3DJSON['ROUTE']['DECLcylinder_linkA_MoveCylinder'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLcylinder_linkA_MoveCylinder']['spine'] === 'undefined') {
X3DJSON['ROUTE']['DECLcylinder_linkA_MoveCylinder']['spine'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLcylinder_linkA_MoveCylinder']['spine']['DECLcylinder_linkA_extrusion'] === 'undefined') {
X3DJSON['ROUTE']['DECLcylinder_linkA_MoveCylinder']['spine']['DECLcylinder_linkA_extrusion'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLcylinder_linkA_MoveCylinder']['spine']['DECLcylinder_linkA_extrusion']['set_spine'] === 'undefined') {
X3DJSON['ROUTE']['DECLcylinder_linkA_MoveCylinder']['spine']['DECLcylinder_linkA_extrusion']['set_spine'] = {};
}

X3DJSON['ROUTE']['DECLcylinder_linkA_MoveCylinder']['spine']['DECLcylinder_linkA_extrusion']['set_spine']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'spine');
			X3DJSON.nodeUtil('DECLcylinder_linkA_extrusion','set_spine',X3DJSON.nodeUtil('DECLcylinder_linkA_MoveCylinder','spine'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['spine'] };
X3DJSON['ROUTE']['DECLcylinder_linkA_MoveCylinder']['spine']['DECLcylinder_linkA_extrusion']['set_spine']['FROM'].observe(X3DJSON.nodeUtil('DECLcylinder_linkA_MoveCylinder'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLcylinder_linkA_MoveCylinder'] === 'undefined') {
X3DJSON['ROUTE']['DECLcylinder_linkA_MoveCylinder'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLcylinder_linkA_MoveCylinder']['spine'] === 'undefined') {
X3DJSON['ROUTE']['DECLcylinder_linkA_MoveCylinder']['spine'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLcylinder_linkA_MoveCylinder']['spine']['DECLcylinder_linkA_extrusion'] === 'undefined') {
X3DJSON['ROUTE']['DECLcylinder_linkA_MoveCylinder']['spine']['DECLcylinder_linkA_extrusion'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLcylinder_linkA_MoveCylinder']['spine']['DECLcylinder_linkA_extrusion']['set_spine'] === 'undefined') {
X3DJSON['ROUTE']['DECLcylinder_linkA_MoveCylinder']['spine']['DECLcylinder_linkA_extrusion']['set_spine'] = {};
}

X3DJSON['ROUTE']['DECLcylinder_linkA_MoveCylinder']['spine']['DECLcylinder_linkA_extrusion']['set_spine']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_spine');
			if (typeof X3DJSON['Obj']['DECLcylinder_linkA_extrusion'].set_spine === "function") X3DJSON['Obj']['DECLcylinder_linkA_extrusion'].set_spine(X3DJSON.nodeUtil('DECLcylinder_linkA_extrusion','set_spine'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_spine'] };
X3DJSON['ROUTE']['DECLcylinder_linkA_MoveCylinder']['spine']['DECLcylinder_linkA_extrusion']['set_spine']['TO'].observe(X3DJSON.nodeUtil('DECLcylinder_linkA_extrusion'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLcylinder_linkB_MoveCylinder'] === 'undefined') {
X3DJSON['ROUTE']['DECLcylinder_linkB_MoveCylinder'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLcylinder_linkB_MoveCylinder']['spine'] === 'undefined') {
X3DJSON['ROUTE']['DECLcylinder_linkB_MoveCylinder']['spine'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLcylinder_linkB_MoveCylinder']['spine']['DECLcylinder_linkB_extrusion'] === 'undefined') {
X3DJSON['ROUTE']['DECLcylinder_linkB_MoveCylinder']['spine']['DECLcylinder_linkB_extrusion'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLcylinder_linkB_MoveCylinder']['spine']['DECLcylinder_linkB_extrusion']['set_spine'] === 'undefined') {
X3DJSON['ROUTE']['DECLcylinder_linkB_MoveCylinder']['spine']['DECLcylinder_linkB_extrusion']['set_spine'] = {};
}

X3DJSON['ROUTE']['DECLcylinder_linkB_MoveCylinder']['spine']['DECLcylinder_linkB_extrusion']['set_spine']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'spine');
			X3DJSON.nodeUtil('DECLcylinder_linkB_extrusion','set_spine',X3DJSON.nodeUtil('DECLcylinder_linkB_MoveCylinder','spine'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['spine'] };
X3DJSON['ROUTE']['DECLcylinder_linkB_MoveCylinder']['spine']['DECLcylinder_linkB_extrusion']['set_spine']['FROM'].observe(X3DJSON.nodeUtil('DECLcylinder_linkB_MoveCylinder'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLcylinder_linkB_MoveCylinder'] === 'undefined') {
X3DJSON['ROUTE']['DECLcylinder_linkB_MoveCylinder'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLcylinder_linkB_MoveCylinder']['spine'] === 'undefined') {
X3DJSON['ROUTE']['DECLcylinder_linkB_MoveCylinder']['spine'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLcylinder_linkB_MoveCylinder']['spine']['DECLcylinder_linkB_extrusion'] === 'undefined') {
X3DJSON['ROUTE']['DECLcylinder_linkB_MoveCylinder']['spine']['DECLcylinder_linkB_extrusion'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLcylinder_linkB_MoveCylinder']['spine']['DECLcylinder_linkB_extrusion']['set_spine'] === 'undefined') {
X3DJSON['ROUTE']['DECLcylinder_linkB_MoveCylinder']['spine']['DECLcylinder_linkB_extrusion']['set_spine'] = {};
}

X3DJSON['ROUTE']['DECLcylinder_linkB_MoveCylinder']['spine']['DECLcylinder_linkB_extrusion']['set_spine']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_spine');
			if (typeof X3DJSON['Obj']['DECLcylinder_linkB_extrusion'].set_spine === "function") X3DJSON['Obj']['DECLcylinder_linkB_extrusion'].set_spine(X3DJSON.nodeUtil('DECLcylinder_linkB_extrusion','set_spine'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_spine'] };
X3DJSON['ROUTE']['DECLcylinder_linkB_MoveCylinder']['spine']['DECLcylinder_linkB_extrusion']['set_spine']['TO'].observe(X3DJSON.nodeUtil('DECLcylinder_linkB_extrusion'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLcylinder_linkC_MoveCylinder'] === 'undefined') {
X3DJSON['ROUTE']['DECLcylinder_linkC_MoveCylinder'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLcylinder_linkC_MoveCylinder']['spine'] === 'undefined') {
X3DJSON['ROUTE']['DECLcylinder_linkC_MoveCylinder']['spine'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLcylinder_linkC_MoveCylinder']['spine']['DECLcylinder_linkC_extrusion'] === 'undefined') {
X3DJSON['ROUTE']['DECLcylinder_linkC_MoveCylinder']['spine']['DECLcylinder_linkC_extrusion'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLcylinder_linkC_MoveCylinder']['spine']['DECLcylinder_linkC_extrusion']['set_spine'] === 'undefined') {
X3DJSON['ROUTE']['DECLcylinder_linkC_MoveCylinder']['spine']['DECLcylinder_linkC_extrusion']['set_spine'] = {};
}

X3DJSON['ROUTE']['DECLcylinder_linkC_MoveCylinder']['spine']['DECLcylinder_linkC_extrusion']['set_spine']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'spine');
			X3DJSON.nodeUtil('DECLcylinder_linkC_extrusion','set_spine',X3DJSON.nodeUtil('DECLcylinder_linkC_MoveCylinder','spine'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['spine'] };
X3DJSON['ROUTE']['DECLcylinder_linkC_MoveCylinder']['spine']['DECLcylinder_linkC_extrusion']['set_spine']['FROM'].observe(X3DJSON.nodeUtil('DECLcylinder_linkC_MoveCylinder'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLcylinder_linkC_MoveCylinder'] === 'undefined') {
X3DJSON['ROUTE']['DECLcylinder_linkC_MoveCylinder'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLcylinder_linkC_MoveCylinder']['spine'] === 'undefined') {
X3DJSON['ROUTE']['DECLcylinder_linkC_MoveCylinder']['spine'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLcylinder_linkC_MoveCylinder']['spine']['DECLcylinder_linkC_extrusion'] === 'undefined') {
X3DJSON['ROUTE']['DECLcylinder_linkC_MoveCylinder']['spine']['DECLcylinder_linkC_extrusion'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLcylinder_linkC_MoveCylinder']['spine']['DECLcylinder_linkC_extrusion']['set_spine'] === 'undefined') {
X3DJSON['ROUTE']['DECLcylinder_linkC_MoveCylinder']['spine']['DECLcylinder_linkC_extrusion']['set_spine'] = {};
}

X3DJSON['ROUTE']['DECLcylinder_linkC_MoveCylinder']['spine']['DECLcylinder_linkC_extrusion']['set_spine']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_spine');
			if (typeof X3DJSON['Obj']['DECLcylinder_linkC_extrusion'].set_spine === "function") X3DJSON['Obj']['DECLcylinder_linkC_extrusion'].set_spine(X3DJSON.nodeUtil('DECLcylinder_linkC_extrusion','set_spine'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_spine'] };
X3DJSON['ROUTE']['DECLcylinder_linkC_MoveCylinder']['spine']['DECLcylinder_linkC_extrusion']['set_spine']['TO'].observe(X3DJSON.nodeUtil('DECLcylinder_linkC_extrusion'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['clickGenerator'] === 'undefined') {
X3DJSON['ROUTE']['clickGenerator'] = {};
}
if (typeof X3DJSON['ROUTE']['clickGenerator']['isActive'] === 'undefined') {
X3DJSON['ROUTE']['clickGenerator']['isActive'] = {};
}
if (typeof X3DJSON['ROUTE']['clickGenerator']['isActive']['clickHandler'] === 'undefined') {
X3DJSON['ROUTE']['clickGenerator']['isActive']['clickHandler'] = {};
}
if (typeof X3DJSON['ROUTE']['clickGenerator']['isActive']['clickHandler']['add_node'] === 'undefined') {
X3DJSON['ROUTE']['clickGenerator']['isActive']['clickHandler']['add_node'] = {};
}

X3DJSON['ROUTE']['clickGenerator']['isActive']['clickHandler']['add_node']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'isActive');
			X3DJSON.nodeUtil('clickHandler','add_node',X3DJSON.nodeUtil('clickGenerator','isActive'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['isActive'] };
X3DJSON['ROUTE']['clickGenerator']['isActive']['clickHandler']['add_node']['FROM'].observe(X3DJSON.nodeUtil('clickGenerator'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['clickGenerator'] === 'undefined') {
X3DJSON['ROUTE']['clickGenerator'] = {};
}
if (typeof X3DJSON['ROUTE']['clickGenerator']['isActive'] === 'undefined') {
X3DJSON['ROUTE']['clickGenerator']['isActive'] = {};
}
if (typeof X3DJSON['ROUTE']['clickGenerator']['isActive']['clickHandler'] === 'undefined') {
X3DJSON['ROUTE']['clickGenerator']['isActive']['clickHandler'] = {};
}
if (typeof X3DJSON['ROUTE']['clickGenerator']['isActive']['clickHandler']['add_node'] === 'undefined') {
X3DJSON['ROUTE']['clickGenerator']['isActive']['clickHandler']['add_node'] = {};
}

X3DJSON['ROUTE']['clickGenerator']['isActive']['clickHandler']['add_node']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'add_node');
			if (typeof X3DJSON['Obj']['clickHandler'].add_node === "function") X3DJSON['Obj']['clickHandler'].add_node(X3DJSON.nodeUtil('clickHandler','add_node'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['add_node'] };
X3DJSON['ROUTE']['clickGenerator']['isActive']['clickHandler']['add_node']['TO'].observe(X3DJSON.nodeUtil('clickHandler'), config);
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
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkA_MoveCylinder']['set_endA'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkA_MoveCylinder']['set_endA'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkA_MoveCylinder']['set_endA']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'translation');
			X3DJSON.nodeUtil('DECLcylinder_linkA_MoveCylinder','set_endA',X3DJSON.nodeUtil('DECLnode_nodeA_transform','translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['translation'] };
X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkA_MoveCylinder']['set_endA']['FROM'].observe(X3DJSON.nodeUtil('DECLnode_nodeA_transform'), config);
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
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkA_MoveCylinder']['set_endA'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkA_MoveCylinder']['set_endA'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkA_MoveCylinder']['set_endA']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_endA');
			if (typeof X3DJSON['Obj']['DECLcylinder_linkA_MoveCylinder'].set_endA === "function") X3DJSON['Obj']['DECLcylinder_linkA_MoveCylinder'].set_endA(X3DJSON.nodeUtil('DECLcylinder_linkA_MoveCylinder','set_endA'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_endA'] };
X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkA_MoveCylinder']['set_endA']['TO'].observe(X3DJSON.nodeUtil('DECLcylinder_linkA_MoveCylinder'), config);
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
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB_transform']['translation']['DECLcylinder_linkA_MoveCylinder']['set_endB'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB_transform']['translation']['DECLcylinder_linkA_MoveCylinder']['set_endB'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeB_transform']['translation']['DECLcylinder_linkA_MoveCylinder']['set_endB']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'translation');
			X3DJSON.nodeUtil('DECLcylinder_linkA_MoveCylinder','set_endB',X3DJSON.nodeUtil('DECLnode_nodeB_transform','translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['translation'] };
X3DJSON['ROUTE']['DECLnode_nodeB_transform']['translation']['DECLcylinder_linkA_MoveCylinder']['set_endB']['FROM'].observe(X3DJSON.nodeUtil('DECLnode_nodeB_transform'), config);
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
if (typeof X3DJSON['ROUTE']['DECLnode_nodeB_transform']['translation']['DECLcylinder_linkA_MoveCylinder']['set_endB'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeB_transform']['translation']['DECLcylinder_linkA_MoveCylinder']['set_endB'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeB_transform']['translation']['DECLcylinder_linkA_MoveCylinder']['set_endB']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_endB');
			if (typeof X3DJSON['Obj']['DECLcylinder_linkA_MoveCylinder'].set_endB === "function") X3DJSON['Obj']['DECLcylinder_linkA_MoveCylinder'].set_endB(X3DJSON.nodeUtil('DECLcylinder_linkA_MoveCylinder','set_endB'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_endB'] };
X3DJSON['ROUTE']['DECLnode_nodeB_transform']['translation']['DECLcylinder_linkA_MoveCylinder']['set_endB']['TO'].observe(X3DJSON.nodeUtil('DECLcylinder_linkA_MoveCylinder'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_transform'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_transform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkB_MoveCylinder'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkB_MoveCylinder'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkB_MoveCylinder']['set_endA'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkB_MoveCylinder']['set_endA'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkB_MoveCylinder']['set_endA']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'translation');
			X3DJSON.nodeUtil('DECLcylinder_linkB_MoveCylinder','set_endA',X3DJSON.nodeUtil('DECLnode_nodeA_transform','translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['translation'] };
X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkB_MoveCylinder']['set_endA']['FROM'].observe(X3DJSON.nodeUtil('DECLnode_nodeA_transform'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_transform'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_transform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkB_MoveCylinder'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkB_MoveCylinder'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkB_MoveCylinder']['set_endA'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkB_MoveCylinder']['set_endA'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkB_MoveCylinder']['set_endA']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_endA');
			if (typeof X3DJSON['Obj']['DECLcylinder_linkB_MoveCylinder'].set_endA === "function") X3DJSON['Obj']['DECLcylinder_linkB_MoveCylinder'].set_endA(X3DJSON.nodeUtil('DECLcylinder_linkB_MoveCylinder','set_endA'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_endA'] };
X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkB_MoveCylinder']['set_endA']['TO'].observe(X3DJSON.nodeUtil('DECLcylinder_linkB_MoveCylinder'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeC_transform'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeC_transform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeC_transform']['translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeC_transform']['translation'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeC_transform']['translation']['DECLcylinder_linkB_MoveCylinder'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeC_transform']['translation']['DECLcylinder_linkB_MoveCylinder'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeC_transform']['translation']['DECLcylinder_linkB_MoveCylinder']['set_endB'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeC_transform']['translation']['DECLcylinder_linkB_MoveCylinder']['set_endB'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeC_transform']['translation']['DECLcylinder_linkB_MoveCylinder']['set_endB']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'translation');
			X3DJSON.nodeUtil('DECLcylinder_linkB_MoveCylinder','set_endB',X3DJSON.nodeUtil('DECLnode_nodeC_transform','translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['translation'] };
X3DJSON['ROUTE']['DECLnode_nodeC_transform']['translation']['DECLcylinder_linkB_MoveCylinder']['set_endB']['FROM'].observe(X3DJSON.nodeUtil('DECLnode_nodeC_transform'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeC_transform'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeC_transform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeC_transform']['translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeC_transform']['translation'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeC_transform']['translation']['DECLcylinder_linkB_MoveCylinder'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeC_transform']['translation']['DECLcylinder_linkB_MoveCylinder'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeC_transform']['translation']['DECLcylinder_linkB_MoveCylinder']['set_endB'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeC_transform']['translation']['DECLcylinder_linkB_MoveCylinder']['set_endB'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeC_transform']['translation']['DECLcylinder_linkB_MoveCylinder']['set_endB']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_endB');
			if (typeof X3DJSON['Obj']['DECLcylinder_linkB_MoveCylinder'].set_endB === "function") X3DJSON['Obj']['DECLcylinder_linkB_MoveCylinder'].set_endB(X3DJSON.nodeUtil('DECLcylinder_linkB_MoveCylinder','set_endB'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_endB'] };
X3DJSON['ROUTE']['DECLnode_nodeC_transform']['translation']['DECLcylinder_linkB_MoveCylinder']['set_endB']['TO'].observe(X3DJSON.nodeUtil('DECLcylinder_linkB_MoveCylinder'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_transform'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_transform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkC_MoveCylinder'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkC_MoveCylinder'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkC_MoveCylinder']['set_endA'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkC_MoveCylinder']['set_endA'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkC_MoveCylinder']['set_endA']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'translation');
			X3DJSON.nodeUtil('DECLcylinder_linkC_MoveCylinder','set_endA',X3DJSON.nodeUtil('DECLnode_nodeA_transform','translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['translation'] };
X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkC_MoveCylinder']['set_endA']['FROM'].observe(X3DJSON.nodeUtil('DECLnode_nodeA_transform'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_transform'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_transform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkC_MoveCylinder'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkC_MoveCylinder'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkC_MoveCylinder']['set_endA'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkC_MoveCylinder']['set_endA'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkC_MoveCylinder']['set_endA']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_endA');
			if (typeof X3DJSON['Obj']['DECLcylinder_linkC_MoveCylinder'].set_endA === "function") X3DJSON['Obj']['DECLcylinder_linkC_MoveCylinder'].set_endA(X3DJSON.nodeUtil('DECLcylinder_linkC_MoveCylinder','set_endA'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_endA'] };
X3DJSON['ROUTE']['DECLnode_nodeA_transform']['translation']['DECLcylinder_linkC_MoveCylinder']['set_endA']['TO'].observe(X3DJSON.nodeUtil('DECLcylinder_linkC_MoveCylinder'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeD_transform'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeD_transform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeD_transform']['translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeD_transform']['translation'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeD_transform']['translation']['DECLcylinder_linkC_MoveCylinder'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeD_transform']['translation']['DECLcylinder_linkC_MoveCylinder'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeD_transform']['translation']['DECLcylinder_linkC_MoveCylinder']['set_endB'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeD_transform']['translation']['DECLcylinder_linkC_MoveCylinder']['set_endB'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeD_transform']['translation']['DECLcylinder_linkC_MoveCylinder']['set_endB']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'translation');
			X3DJSON.nodeUtil('DECLcylinder_linkC_MoveCylinder','set_endB',X3DJSON.nodeUtil('DECLnode_nodeD_transform','translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['translation'] };
X3DJSON['ROUTE']['DECLnode_nodeD_transform']['translation']['DECLcylinder_linkC_MoveCylinder']['set_endB']['FROM'].observe(X3DJSON.nodeUtil('DECLnode_nodeD_transform'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeD_transform'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeD_transform'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeD_transform']['translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeD_transform']['translation'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeD_transform']['translation']['DECLcylinder_linkC_MoveCylinder'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeD_transform']['translation']['DECLcylinder_linkC_MoveCylinder'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLnode_nodeD_transform']['translation']['DECLcylinder_linkC_MoveCylinder']['set_endB'] === 'undefined') {
X3DJSON['ROUTE']['DECLnode_nodeD_transform']['translation']['DECLcylinder_linkC_MoveCylinder']['set_endB'] = {};
}

X3DJSON['ROUTE']['DECLnode_nodeD_transform']['translation']['DECLcylinder_linkC_MoveCylinder']['set_endB']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_endB');
			if (typeof X3DJSON['Obj']['DECLcylinder_linkC_MoveCylinder'].set_endB === "function") X3DJSON['Obj']['DECLcylinder_linkC_MoveCylinder'].set_endB(X3DJSON.nodeUtil('DECLcylinder_linkC_MoveCylinder','set_endB'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_endB'] };
X3DJSON['ROUTE']['DECLnode_nodeD_transform']['translation']['DECLcylinder_linkC_MoveCylinder']['set_endB']['TO'].observe(X3DJSON.nodeUtil('DECLcylinder_linkC_MoveCylinder'), config);
			X3DJSON.nodeUtil('DECLnode_nodeA_NodePosition','set_fraction',X3DJSON.nodeUtil('DECLnode_nodeA_nodeClock','fraction_changed'), __eventTime);
			X3DJSON.nodeUtil('DECLnode_nodeB_NodePosition','set_fraction',X3DJSON.nodeUtil('DECLnode_nodeB_nodeClock','fraction_changed'), __eventTime);
			X3DJSON.nodeUtil('DECLnode_nodeC_NodePosition','set_fraction',X3DJSON.nodeUtil('DECLnode_nodeC_nodeClock','fraction_changed'), __eventTime);
			X3DJSON.nodeUtil('DECLnode_nodeD_NodePosition','set_fraction',X3DJSON.nodeUtil('DECLnode_nodeD_nodeClock','fraction_changed'), __eventTime);