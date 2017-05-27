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

X3DJSON['Script']['DECLpoint_start_MB1'] = function() {
	this.set_translation = function (value) {
		X3DJSON.nodeUtil('DECLpoint_start_MB1', 'translation', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.translation_changed = function () {
		return X3DJSON.nodeUtil('DECLpoint_start_MB1', 'translation');
	};
	this.set_translation(new SFVec3f(0,0,0));
	this.set_old = function (value) {
		X3DJSON.nodeUtil('DECLpoint_start_MB1', 'old', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.old_changed = function () {
		return X3DJSON.nodeUtil('DECLpoint_start_MB1', 'old');
	};
	this.set_old(new SFVec3f(0,0,0));
	this.set_location = function (value) {
		X3DJSON.nodeUtil('DECLpoint_start_MB1', 'location', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.location_changed = function () {
		return X3DJSON.nodeUtil('DECLpoint_start_MB1', 'location');
	};
	this.set_location(undefined);
	this.set_keyValue = function (value) {
		X3DJSON.nodeUtil('DECLpoint_start_MB1', 'keyValue', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.keyValue_changed = function () {
		return X3DJSON.nodeUtil('DECLpoint_start_MB1', 'keyValue');
	};
	this.set_keyValue(new MFVec3f());


ecmascript:
		
	this.set_location = function (value) {
                    this.set_old ( this.translation_changed());
		    this.set_translation ( new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5));
                    this.set_keyValue ( new MFVec3f([this.old_changed(), this.translation_changed()]));
		    // console.error(this.translation_changed());
		};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLpoint_start_MB1'] = new X3DJSON['Script']['DECLpoint_start_MB1']();
if (typeof X3DJSON['Obj']['DECLpoint_start_MB1'].initialize === "function") X3DJSON['Obj']['DECLpoint_start_MB1'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLpoint_end1_MB1'] = function() {
	this.set_translation = function (value) {
		X3DJSON.nodeUtil('DECLpoint_end1_MB1', 'translation', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.translation_changed = function () {
		return X3DJSON.nodeUtil('DECLpoint_end1_MB1', 'translation');
	};
	this.set_translation(new SFVec3f(0,0,0));
	this.set_old = function (value) {
		X3DJSON.nodeUtil('DECLpoint_end1_MB1', 'old', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.old_changed = function () {
		return X3DJSON.nodeUtil('DECLpoint_end1_MB1', 'old');
	};
	this.set_old(new SFVec3f(0,0,0));
	this.set_location = function (value) {
		X3DJSON.nodeUtil('DECLpoint_end1_MB1', 'location', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.location_changed = function () {
		return X3DJSON.nodeUtil('DECLpoint_end1_MB1', 'location');
	};
	this.set_location(undefined);
	this.set_keyValue = function (value) {
		X3DJSON.nodeUtil('DECLpoint_end1_MB1', 'keyValue', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.keyValue_changed = function () {
		return X3DJSON.nodeUtil('DECLpoint_end1_MB1', 'keyValue');
	};
	this.set_keyValue(new MFVec3f());


ecmascript:
		
	this.set_location = function (value) {
                    this.set_old ( this.translation_changed());
		    this.set_translation ( new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5));
                    this.set_keyValue ( new MFVec3f([this.old_changed(), this.translation_changed()]));
		    // console.error(this.translation_changed());
		};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLpoint_end1_MB1'] = new X3DJSON['Script']['DECLpoint_end1_MB1']();
if (typeof X3DJSON['Obj']['DECLpoint_end1_MB1'].initialize === "function") X3DJSON['Obj']['DECLpoint_end1_MB1'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLpoint_end2_MB1'] = function() {
	this.set_translation = function (value) {
		X3DJSON.nodeUtil('DECLpoint_end2_MB1', 'translation', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.translation_changed = function () {
		return X3DJSON.nodeUtil('DECLpoint_end2_MB1', 'translation');
	};
	this.set_translation(new SFVec3f(0,0,0));
	this.set_old = function (value) {
		X3DJSON.nodeUtil('DECLpoint_end2_MB1', 'old', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.old_changed = function () {
		return X3DJSON.nodeUtil('DECLpoint_end2_MB1', 'old');
	};
	this.set_old(new SFVec3f(0,0,0));
	this.set_location = function (value) {
		X3DJSON.nodeUtil('DECLpoint_end2_MB1', 'location', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.location_changed = function () {
		return X3DJSON.nodeUtil('DECLpoint_end2_MB1', 'location');
	};
	this.set_location(undefined);
	this.set_keyValue = function (value) {
		X3DJSON.nodeUtil('DECLpoint_end2_MB1', 'keyValue', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.keyValue_changed = function () {
		return X3DJSON.nodeUtil('DECLpoint_end2_MB1', 'keyValue');
	};
	this.set_keyValue(new MFVec3f());


ecmascript:
		
	this.set_location = function (value) {
                    this.set_old ( this.translation_changed());
		    this.set_translation ( new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5));
                    this.set_keyValue ( new MFVec3f([this.old_changed(), this.translation_changed()]));
		    // console.error(this.translation_changed());
		};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLpoint_end2_MB1'] = new X3DJSON['Script']['DECLpoint_end2_MB1']();
if (typeof X3DJSON['Obj']['DECLpoint_end2_MB1'].initialize === "function") X3DJSON['Obj']['DECLpoint_end2_MB1'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLpoint_end3_MB1'] = function() {
	this.set_translation = function (value) {
		X3DJSON.nodeUtil('DECLpoint_end3_MB1', 'translation', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.translation_changed = function () {
		return X3DJSON.nodeUtil('DECLpoint_end3_MB1', 'translation');
	};
	this.set_translation(new SFVec3f(0,0,0));
	this.set_old = function (value) {
		X3DJSON.nodeUtil('DECLpoint_end3_MB1', 'old', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.old_changed = function () {
		return X3DJSON.nodeUtil('DECLpoint_end3_MB1', 'old');
	};
	this.set_old(new SFVec3f(0,0,0));
	this.set_location = function (value) {
		X3DJSON.nodeUtil('DECLpoint_end3_MB1', 'location', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.location_changed = function () {
		return X3DJSON.nodeUtil('DECLpoint_end3_MB1', 'location');
	};
	this.set_location(undefined);
	this.set_keyValue = function (value) {
		X3DJSON.nodeUtil('DECLpoint_end3_MB1', 'keyValue', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.keyValue_changed = function () {
		return X3DJSON.nodeUtil('DECLpoint_end3_MB1', 'keyValue');
	};
	this.set_keyValue(new MFVec3f());


ecmascript:
		
	this.set_location = function (value) {
                    this.set_old ( this.translation_changed());
		    this.set_translation ( new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5));
                    this.set_keyValue ( new MFVec3f([this.old_changed(), this.translation_changed()]));
		    // console.error(this.translation_changed());
		};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLpoint_end3_MB1'] = new X3DJSON['Script']['DECLpoint_end3_MB1']();
if (typeof X3DJSON['Obj']['DECLpoint_end3_MB1'].initialize === "function") X3DJSON['Obj']['DECLpoint_end3_MB1'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLx3dconnector_connector1_S1'] = function() {
	this.set_startnode = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector1_S1', 'startnode', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.startnode_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector1_S1', 'startnode');
	};
	this.set_startnode(new SFNode());
	this.set_endnode = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector1_S1', 'endnode', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.endnode_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector1_S1', 'endnode');
	};
	this.set_endnode(new SFNode());
	this.set_connectornode = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector1_S1', 'connectornode', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.connectornode_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector1_S1', 'connectornode');
	};
	this.set_connectornode(new SFNode());
	this.set_startpoint = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector1_S1', 'startpoint', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.startpoint_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector1_S1', 'startpoint');
	};
	this.set_startpoint(undefined);
	this.set_endpoint = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector1_S1', 'endpoint', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.endpoint_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector1_S1', 'endpoint');
	};
	this.set_endpoint(undefined);

            ecmascript:
            
	this.recompute = function (startpoint,endpoint) {
	        if (typeof endpoint === 'undefined') {
			return;
		}
                var dif = endpoint.subtract(startpoint);
                var dist = dif.length()*.5;
                var dif2 = dif.multiply(.5);
                var norm = dif.normalize();
                var trans = startpoint.add(dif2);
                this.connectornode_changed().scale = new SFVec3f(1.0,dist,1.0);
                this.connectornode_changed().translation = trans;
                this.connectornode_changed().rotation = new SFRotation(new SFVec3f(0.0,1.0,0.0),norm);
                //console.error('norm='+norm.toString());
                //console.error('rotation='+rotation.toString());
            }
         ;

	this.initialize = function (){
                this.recompute(this.startnode_changed().translation,this.endnode_changed().translation);
            }
          ;

	this.set_startpoint = function (val,t){
                this.recompute(val,this.endnode_changed().translation);
            }
            ;

	this.set_endpoint = function (val,t){
                this.recompute(this.startnode_changed().translation,val);
            };

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLx3dconnector_connector1_S1'] = new X3DJSON['Script']['DECLx3dconnector_connector1_S1']();
if (typeof X3DJSON['Obj']['DECLx3dconnector_connector1_S1'].initialize === "function") X3DJSON['Obj']['DECLx3dconnector_connector1_S1'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLx3dconnector_connector1_S1.DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1'] = function() {
	this.set_translation = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector1_S1.DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1', 'translation', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.translation_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector1_S1.DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1', 'translation');
	};
	this.set_translation(new SFVec3f(50,50,0));
	this.set_old = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector1_S1.DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1', 'old', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.old_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector1_S1.DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1', 'old');
	};
	this.set_old(new SFVec3f(0,0,0));
	this.set_location = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector1_S1.DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1', 'location', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.location_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector1_S1.DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1', 'location');
	};
	this.set_location(undefined);
	this.set_keyValue = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector1_S1.DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1', 'keyValue', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.keyValue_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector1_S1.DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1', 'keyValue');
	};
	this.set_keyValue(new MFVec3f());


ecmascript:
		
	this.set_location = function (value) {
                    this.set_old ( this.translation_changed());
		    this.set_translation ( new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5));
                    this.set_keyValue ( new MFVec3f([this.old_changed(), this.translation_changed()]));
		    // console.error(this.translation_changed());
		};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLx3dconnector_connector1_S1.DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1'] = new X3DJSON['Script']['DECLx3dconnector_connector1_S1.DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1']();
if (typeof X3DJSON['Obj']['DECLx3dconnector_connector1_S1.DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1'].initialize === "function") X3DJSON['Obj']['DECLx3dconnector_connector1_S1.DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLx3dconnector_connector1_S1.DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1'] = function() {
	this.set_translation = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector1_S1.DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1', 'translation', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.translation_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector1_S1.DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1', 'translation');
	};
	this.set_translation(new SFVec3f(50,50,0));
	this.set_old = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector1_S1.DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1', 'old', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.old_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector1_S1.DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1', 'old');
	};
	this.set_old(new SFVec3f(0,0,0));
	this.set_location = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector1_S1.DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1', 'location', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.location_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector1_S1.DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1', 'location');
	};
	this.set_location(undefined);
	this.set_keyValue = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector1_S1.DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1', 'keyValue', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.keyValue_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector1_S1.DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1', 'keyValue');
	};
	this.set_keyValue(new MFVec3f());


ecmascript:
		
	this.set_location = function (value) {
                    this.set_old ( this.translation_changed());
		    this.set_translation ( new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5));
                    this.set_keyValue ( new MFVec3f([this.old_changed(), this.translation_changed()]));
		    // console.error(this.translation_changed());
		};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLx3dconnector_connector1_S1.DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1'] = new X3DJSON['Script']['DECLx3dconnector_connector1_S1.DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1']();
if (typeof X3DJSON['Obj']['DECLx3dconnector_connector1_S1.DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1'].initialize === "function") X3DJSON['Obj']['DECLx3dconnector_connector1_S1.DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLx3dconnector_connector2_S1'] = function() {
	this.set_startnode = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector2_S1', 'startnode', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.startnode_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector2_S1', 'startnode');
	};
	this.set_startnode(new SFNode());
	this.set_endnode = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector2_S1', 'endnode', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.endnode_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector2_S1', 'endnode');
	};
	this.set_endnode(new SFNode());
	this.set_connectornode = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector2_S1', 'connectornode', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.connectornode_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector2_S1', 'connectornode');
	};
	this.set_connectornode(new SFNode());
	this.set_startpoint = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector2_S1', 'startpoint', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.startpoint_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector2_S1', 'startpoint');
	};
	this.set_startpoint(undefined);
	this.set_endpoint = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector2_S1', 'endpoint', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.endpoint_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector2_S1', 'endpoint');
	};
	this.set_endpoint(undefined);

            ecmascript:
            
	this.recompute = function (startpoint,endpoint) {
	        if (typeof endpoint === 'undefined') {
			return;
		}
                var dif = endpoint.subtract(startpoint);
                var dist = dif.length()*.5;
                var dif2 = dif.multiply(.5);
                var norm = dif.normalize();
                var trans = startpoint.add(dif2);
                this.connectornode_changed().scale = new SFVec3f(1.0,dist,1.0);
                this.connectornode_changed().translation = trans;
                this.connectornode_changed().rotation = new SFRotation(new SFVec3f(0.0,1.0,0.0),norm);
                //console.error('norm='+norm.toString());
                //console.error('rotation='+rotation.toString());
            }
         ;

	this.initialize = function (){
                this.recompute(this.startnode_changed().translation,this.endnode_changed().translation);
            }
          ;

	this.set_startpoint = function (val,t){
                this.recompute(val,this.endnode_changed().translation);
            }
            ;

	this.set_endpoint = function (val,t){
                this.recompute(this.startnode_changed().translation,val);
            };

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLx3dconnector_connector2_S1'] = new X3DJSON['Script']['DECLx3dconnector_connector2_S1']();
if (typeof X3DJSON['Obj']['DECLx3dconnector_connector2_S1'].initialize === "function") X3DJSON['Obj']['DECLx3dconnector_connector2_S1'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLx3dconnector_connector2_S1.DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1'] = function() {
	this.set_translation = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector2_S1.DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1', 'translation', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.translation_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector2_S1.DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1', 'translation');
	};
	this.set_translation(new SFVec3f(50,50,0));
	this.set_old = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector2_S1.DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1', 'old', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.old_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector2_S1.DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1', 'old');
	};
	this.set_old(new SFVec3f(0,0,0));
	this.set_location = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector2_S1.DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1', 'location', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.location_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector2_S1.DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1', 'location');
	};
	this.set_location(undefined);
	this.set_keyValue = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector2_S1.DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1', 'keyValue', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.keyValue_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector2_S1.DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1', 'keyValue');
	};
	this.set_keyValue(new MFVec3f());


ecmascript:
		
	this.set_location = function (value) {
                    this.set_old ( this.translation_changed());
		    this.set_translation ( new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5));
                    this.set_keyValue ( new MFVec3f([this.old_changed(), this.translation_changed()]));
		    // console.error(this.translation_changed());
		};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLx3dconnector_connector2_S1.DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1'] = new X3DJSON['Script']['DECLx3dconnector_connector2_S1.DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1']();
if (typeof X3DJSON['Obj']['DECLx3dconnector_connector2_S1.DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1'].initialize === "function") X3DJSON['Obj']['DECLx3dconnector_connector2_S1.DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLx3dconnector_connector2_S1.DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1'] = function() {
	this.set_translation = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector2_S1.DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1', 'translation', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.translation_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector2_S1.DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1', 'translation');
	};
	this.set_translation(new SFVec3f(50,50,0));
	this.set_old = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector2_S1.DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1', 'old', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.old_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector2_S1.DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1', 'old');
	};
	this.set_old(new SFVec3f(0,0,0));
	this.set_location = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector2_S1.DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1', 'location', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.location_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector2_S1.DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1', 'location');
	};
	this.set_location(undefined);
	this.set_keyValue = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector2_S1.DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1', 'keyValue', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.keyValue_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector2_S1.DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1', 'keyValue');
	};
	this.set_keyValue(new MFVec3f());


ecmascript:
		
	this.set_location = function (value) {
                    this.set_old ( this.translation_changed());
		    this.set_translation ( new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5));
                    this.set_keyValue ( new MFVec3f([this.old_changed(), this.translation_changed()]));
		    // console.error(this.translation_changed());
		};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLx3dconnector_connector2_S1.DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1'] = new X3DJSON['Script']['DECLx3dconnector_connector2_S1.DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1']();
if (typeof X3DJSON['Obj']['DECLx3dconnector_connector2_S1.DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1'].initialize === "function") X3DJSON['Obj']['DECLx3dconnector_connector2_S1.DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLx3dconnector_connector3_S1'] = function() {
	this.set_startnode = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector3_S1', 'startnode', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.startnode_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector3_S1', 'startnode');
	};
	this.set_startnode(new SFNode());
	this.set_endnode = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector3_S1', 'endnode', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.endnode_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector3_S1', 'endnode');
	};
	this.set_endnode(new SFNode());
	this.set_connectornode = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector3_S1', 'connectornode', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.connectornode_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector3_S1', 'connectornode');
	};
	this.set_connectornode(new SFNode());
	this.set_startpoint = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector3_S1', 'startpoint', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.startpoint_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector3_S1', 'startpoint');
	};
	this.set_startpoint(undefined);
	this.set_endpoint = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector3_S1', 'endpoint', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.endpoint_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector3_S1', 'endpoint');
	};
	this.set_endpoint(undefined);

            ecmascript:
            
	this.recompute = function (startpoint,endpoint) {
	        if (typeof endpoint === 'undefined') {
			return;
		}
                var dif = endpoint.subtract(startpoint);
                var dist = dif.length()*.5;
                var dif2 = dif.multiply(.5);
                var norm = dif.normalize();
                var trans = startpoint.add(dif2);
                this.connectornode_changed().scale = new SFVec3f(1.0,dist,1.0);
                this.connectornode_changed().translation = trans;
                this.connectornode_changed().rotation = new SFRotation(new SFVec3f(0.0,1.0,0.0),norm);
                //console.error('norm='+norm.toString());
                //console.error('rotation='+rotation.toString());
            }
         ;

	this.initialize = function (){
                this.recompute(this.startnode_changed().translation,this.endnode_changed().translation);
            }
          ;

	this.set_startpoint = function (val,t){
                this.recompute(val,this.endnode_changed().translation);
            }
            ;

	this.set_endpoint = function (val,t){
                this.recompute(this.startnode_changed().translation,val);
            };

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLx3dconnector_connector3_S1'] = new X3DJSON['Script']['DECLx3dconnector_connector3_S1']();
if (typeof X3DJSON['Obj']['DECLx3dconnector_connector3_S1'].initialize === "function") X3DJSON['Obj']['DECLx3dconnector_connector3_S1'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLx3dconnector_connector3_S1.DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1'] = function() {
	this.set_translation = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector3_S1.DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1', 'translation', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.translation_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector3_S1.DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1', 'translation');
	};
	this.set_translation(new SFVec3f(50,50,0));
	this.set_old = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector3_S1.DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1', 'old', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.old_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector3_S1.DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1', 'old');
	};
	this.set_old(new SFVec3f(0,0,0));
	this.set_location = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector3_S1.DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1', 'location', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.location_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector3_S1.DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1', 'location');
	};
	this.set_location(undefined);
	this.set_keyValue = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector3_S1.DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1', 'keyValue', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.keyValue_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector3_S1.DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1', 'keyValue');
	};
	this.set_keyValue(new MFVec3f());


ecmascript:
		
	this.set_location = function (value) {
                    this.set_old ( this.translation_changed());
		    this.set_translation ( new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5));
                    this.set_keyValue ( new MFVec3f([this.old_changed(), this.translation_changed()]));
		    // console.error(this.translation_changed());
		};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLx3dconnector_connector3_S1.DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1'] = new X3DJSON['Script']['DECLx3dconnector_connector3_S1.DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1']();
if (typeof X3DJSON['Obj']['DECLx3dconnector_connector3_S1.DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1'].initialize === "function") X3DJSON['Obj']['DECLx3dconnector_connector3_S1.DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLx3dconnector_connector3_S1.DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1'] = function() {
	this.set_translation = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector3_S1.DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1', 'translation', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.translation_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector3_S1.DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1', 'translation');
	};
	this.set_translation(new SFVec3f(50,50,0));
	this.set_old = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector3_S1.DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1', 'old', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.old_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector3_S1.DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1', 'old');
	};
	this.set_old(new SFVec3f(0,0,0));
	this.set_location = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector3_S1.DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1', 'location', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.location_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector3_S1.DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1', 'location');
	};
	this.set_location(undefined);
	this.set_keyValue = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector3_S1.DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1', 'keyValue', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.keyValue_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector3_S1.DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1', 'keyValue');
	};
	this.set_keyValue(new MFVec3f());


ecmascript:
		
	this.set_location = function (value) {
                    this.set_old ( this.translation_changed());
		    this.set_translation ( new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5));
                    this.set_keyValue ( new MFVec3f([this.old_changed(), this.translation_changed()]));
		    // console.error(this.translation_changed());
		};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['DECLx3dconnector_connector3_S1.DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1'] = new X3DJSON['Script']['DECLx3dconnector_connector3_S1.DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1']();
if (typeof X3DJSON['Obj']['DECLx3dconnector_connector3_S1.DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1'].initialize === "function") X3DJSON['Obj']['DECLx3dconnector_connector3_S1.DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1'].initialize();
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_CL1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_CL1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_CL1']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_CL1']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_CL1']['cycleTime']['DECLpoint_start_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_CL1']['cycleTime']['DECLpoint_start_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_CL1']['cycleTime']['DECLpoint_start_MB1']['set_location'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_CL1']['cycleTime']['DECLpoint_start_MB1']['set_location'] = {};
}

X3DJSON['ROUTE']['DECLpoint_start_CL1']['cycleTime']['DECLpoint_start_MB1']['set_location']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'cycleTime');
			X3DJSON.nodeUtil('DECLpoint_start_MB1','set_location',X3DJSON.nodeUtil('DECLpoint_start_CL1','cycleTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['cycleTime'] };
X3DJSON['ROUTE']['DECLpoint_start_CL1']['cycleTime']['DECLpoint_start_MB1']['set_location']['FROM'].observe(X3DJSON.nodeUtil('DECLpoint_start_CL1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_CL1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_CL1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_CL1']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_CL1']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_CL1']['cycleTime']['DECLpoint_start_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_CL1']['cycleTime']['DECLpoint_start_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_CL1']['cycleTime']['DECLpoint_start_MB1']['set_location'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_CL1']['cycleTime']['DECLpoint_start_MB1']['set_location'] = {};
}

X3DJSON['ROUTE']['DECLpoint_start_CL1']['cycleTime']['DECLpoint_start_MB1']['set_location']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_location');
			if (typeof X3DJSON['Obj']['DECLpoint_start_MB1'].set_location === "function") X3DJSON['Obj']['DECLpoint_start_MB1'].set_location(X3DJSON.nodeUtil('DECLpoint_start_MB1','set_location'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_location'] };
X3DJSON['ROUTE']['DECLpoint_start_CL1']['cycleTime']['DECLpoint_start_MB1']['set_location']['TO'].observe(X3DJSON.nodeUtil('DECLpoint_start_MB1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_CL1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_CL1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_CL1']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_CL1']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_CL1']['fraction_changed']['DECLpoint_start_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_CL1']['fraction_changed']['DECLpoint_start_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_CL1']['fraction_changed']['DECLpoint_start_PI1']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_CL1']['fraction_changed']['DECLpoint_start_PI1']['set_fraction'] = {};
}

X3DJSON['ROUTE']['DECLpoint_start_CL1']['fraction_changed']['DECLpoint_start_PI1']['set_fraction']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'fraction_changed');
			X3DJSON.nodeUtil('DECLpoint_start_PI1','set_fraction',X3DJSON.nodeUtil('DECLpoint_start_CL1','fraction_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['fraction_changed'] };
X3DJSON['ROUTE']['DECLpoint_start_CL1']['fraction_changed']['DECLpoint_start_PI1']['set_fraction']['FROM'].observe(X3DJSON.nodeUtil('DECLpoint_start_CL1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_CL1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_CL1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_CL1']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_CL1']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_CL1']['fraction_changed']['DECLpoint_start_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_CL1']['fraction_changed']['DECLpoint_start_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_CL1']['fraction_changed']['DECLpoint_start_PI1']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_CL1']['fraction_changed']['DECLpoint_start_PI1']['set_fraction'] = {};
}

X3DJSON['ROUTE']['DECLpoint_start_CL1']['fraction_changed']['DECLpoint_start_PI1']['set_fraction']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_fraction');
			if (typeof X3DJSON['Obj']['DECLpoint_start_PI1'].set_fraction === "function") X3DJSON['Obj']['DECLpoint_start_PI1'].set_fraction(X3DJSON.nodeUtil('DECLpoint_start_PI1','set_fraction'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_fraction'] };
X3DJSON['ROUTE']['DECLpoint_start_CL1']['fraction_changed']['DECLpoint_start_PI1']['set_fraction']['TO'].observe(X3DJSON.nodeUtil('DECLpoint_start_PI1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_MB1']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_MB1']['keyValue'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_MB1']['keyValue']['DECLpoint_start_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_MB1']['keyValue']['DECLpoint_start_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_MB1']['keyValue']['DECLpoint_start_PI1']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_MB1']['keyValue']['DECLpoint_start_PI1']['keyValue'] = {};
}

X3DJSON['ROUTE']['DECLpoint_start_MB1']['keyValue']['DECLpoint_start_PI1']['keyValue']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'keyValue');
			X3DJSON.nodeUtil('DECLpoint_start_PI1','keyValue',X3DJSON.nodeUtil('DECLpoint_start_MB1','keyValue'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['keyValue'] };
X3DJSON['ROUTE']['DECLpoint_start_MB1']['keyValue']['DECLpoint_start_PI1']['keyValue']['FROM'].observe(X3DJSON.nodeUtil('DECLpoint_start_MB1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_MB1']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_MB1']['keyValue'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_MB1']['keyValue']['DECLpoint_start_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_MB1']['keyValue']['DECLpoint_start_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_MB1']['keyValue']['DECLpoint_start_PI1']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_MB1']['keyValue']['DECLpoint_start_PI1']['keyValue'] = {};
}

X3DJSON['ROUTE']['DECLpoint_start_MB1']['keyValue']['DECLpoint_start_PI1']['keyValue']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'keyValue');
			if (typeof X3DJSON['Obj']['DECLpoint_start_PI1'].keyValue === "function") X3DJSON['Obj']['DECLpoint_start_PI1'].keyValue(X3DJSON.nodeUtil('DECLpoint_start_PI1','keyValue'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['keyValue'] };
X3DJSON['ROUTE']['DECLpoint_start_MB1']['keyValue']['DECLpoint_start_PI1']['keyValue']['TO'].observe(X3DJSON.nodeUtil('DECLpoint_start_PI1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_PI1']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_PI1']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_PI1']['value_changed']['DECLpoint_start_node'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_PI1']['value_changed']['DECLpoint_start_node'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_PI1']['value_changed']['DECLpoint_start_node']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_PI1']['value_changed']['DECLpoint_start_node']['set_translation'] = {};
}

X3DJSON['ROUTE']['DECLpoint_start_PI1']['value_changed']['DECLpoint_start_node']['set_translation']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'value_changed');
			X3DJSON.nodeUtil('DECLpoint_start_node','set_translation',X3DJSON.nodeUtil('DECLpoint_start_PI1','value_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['value_changed'] };
X3DJSON['ROUTE']['DECLpoint_start_PI1']['value_changed']['DECLpoint_start_node']['set_translation']['FROM'].observe(X3DJSON.nodeUtil('DECLpoint_start_PI1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_PI1']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_PI1']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_PI1']['value_changed']['DECLpoint_start_node'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_PI1']['value_changed']['DECLpoint_start_node'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_PI1']['value_changed']['DECLpoint_start_node']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_PI1']['value_changed']['DECLpoint_start_node']['set_translation'] = {};
}

X3DJSON['ROUTE']['DECLpoint_start_PI1']['value_changed']['DECLpoint_start_node']['set_translation']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_translation');
			if (typeof X3DJSON['Obj']['DECLpoint_start_node'].set_translation === "function") X3DJSON['Obj']['DECLpoint_start_node'].set_translation(X3DJSON.nodeUtil('DECLpoint_start_node','set_translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_translation'] };
X3DJSON['ROUTE']['DECLpoint_start_PI1']['value_changed']['DECLpoint_start_node']['set_translation']['TO'].observe(X3DJSON.nodeUtil('DECLpoint_start_node'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end1_CL1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end1_CL1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end1_CL1']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end1_CL1']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end1_CL1']['cycleTime']['DECLpoint_end1_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end1_CL1']['cycleTime']['DECLpoint_end1_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end1_CL1']['cycleTime']['DECLpoint_end1_MB1']['set_location'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end1_CL1']['cycleTime']['DECLpoint_end1_MB1']['set_location'] = {};
}

X3DJSON['ROUTE']['DECLpoint_end1_CL1']['cycleTime']['DECLpoint_end1_MB1']['set_location']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'cycleTime');
			X3DJSON.nodeUtil('DECLpoint_end1_MB1','set_location',X3DJSON.nodeUtil('DECLpoint_end1_CL1','cycleTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['cycleTime'] };
X3DJSON['ROUTE']['DECLpoint_end1_CL1']['cycleTime']['DECLpoint_end1_MB1']['set_location']['FROM'].observe(X3DJSON.nodeUtil('DECLpoint_end1_CL1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end1_CL1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end1_CL1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end1_CL1']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end1_CL1']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end1_CL1']['cycleTime']['DECLpoint_end1_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end1_CL1']['cycleTime']['DECLpoint_end1_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end1_CL1']['cycleTime']['DECLpoint_end1_MB1']['set_location'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end1_CL1']['cycleTime']['DECLpoint_end1_MB1']['set_location'] = {};
}

X3DJSON['ROUTE']['DECLpoint_end1_CL1']['cycleTime']['DECLpoint_end1_MB1']['set_location']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_location');
			if (typeof X3DJSON['Obj']['DECLpoint_end1_MB1'].set_location === "function") X3DJSON['Obj']['DECLpoint_end1_MB1'].set_location(X3DJSON.nodeUtil('DECLpoint_end1_MB1','set_location'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_location'] };
X3DJSON['ROUTE']['DECLpoint_end1_CL1']['cycleTime']['DECLpoint_end1_MB1']['set_location']['TO'].observe(X3DJSON.nodeUtil('DECLpoint_end1_MB1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end1_CL1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end1_CL1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end1_CL1']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end1_CL1']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end1_CL1']['fraction_changed']['DECLpoint_end1_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end1_CL1']['fraction_changed']['DECLpoint_end1_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end1_CL1']['fraction_changed']['DECLpoint_end1_PI1']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end1_CL1']['fraction_changed']['DECLpoint_end1_PI1']['set_fraction'] = {};
}

X3DJSON['ROUTE']['DECLpoint_end1_CL1']['fraction_changed']['DECLpoint_end1_PI1']['set_fraction']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'fraction_changed');
			X3DJSON.nodeUtil('DECLpoint_end1_PI1','set_fraction',X3DJSON.nodeUtil('DECLpoint_end1_CL1','fraction_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['fraction_changed'] };
X3DJSON['ROUTE']['DECLpoint_end1_CL1']['fraction_changed']['DECLpoint_end1_PI1']['set_fraction']['FROM'].observe(X3DJSON.nodeUtil('DECLpoint_end1_CL1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end1_CL1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end1_CL1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end1_CL1']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end1_CL1']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end1_CL1']['fraction_changed']['DECLpoint_end1_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end1_CL1']['fraction_changed']['DECLpoint_end1_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end1_CL1']['fraction_changed']['DECLpoint_end1_PI1']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end1_CL1']['fraction_changed']['DECLpoint_end1_PI1']['set_fraction'] = {};
}

X3DJSON['ROUTE']['DECLpoint_end1_CL1']['fraction_changed']['DECLpoint_end1_PI1']['set_fraction']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_fraction');
			if (typeof X3DJSON['Obj']['DECLpoint_end1_PI1'].set_fraction === "function") X3DJSON['Obj']['DECLpoint_end1_PI1'].set_fraction(X3DJSON.nodeUtil('DECLpoint_end1_PI1','set_fraction'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_fraction'] };
X3DJSON['ROUTE']['DECLpoint_end1_CL1']['fraction_changed']['DECLpoint_end1_PI1']['set_fraction']['TO'].observe(X3DJSON.nodeUtil('DECLpoint_end1_PI1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end1_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end1_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end1_MB1']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end1_MB1']['keyValue'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end1_MB1']['keyValue']['DECLpoint_end1_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end1_MB1']['keyValue']['DECLpoint_end1_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end1_MB1']['keyValue']['DECLpoint_end1_PI1']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end1_MB1']['keyValue']['DECLpoint_end1_PI1']['keyValue'] = {};
}

X3DJSON['ROUTE']['DECLpoint_end1_MB1']['keyValue']['DECLpoint_end1_PI1']['keyValue']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'keyValue');
			X3DJSON.nodeUtil('DECLpoint_end1_PI1','keyValue',X3DJSON.nodeUtil('DECLpoint_end1_MB1','keyValue'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['keyValue'] };
X3DJSON['ROUTE']['DECLpoint_end1_MB1']['keyValue']['DECLpoint_end1_PI1']['keyValue']['FROM'].observe(X3DJSON.nodeUtil('DECLpoint_end1_MB1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end1_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end1_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end1_MB1']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end1_MB1']['keyValue'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end1_MB1']['keyValue']['DECLpoint_end1_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end1_MB1']['keyValue']['DECLpoint_end1_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end1_MB1']['keyValue']['DECLpoint_end1_PI1']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end1_MB1']['keyValue']['DECLpoint_end1_PI1']['keyValue'] = {};
}

X3DJSON['ROUTE']['DECLpoint_end1_MB1']['keyValue']['DECLpoint_end1_PI1']['keyValue']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'keyValue');
			if (typeof X3DJSON['Obj']['DECLpoint_end1_PI1'].keyValue === "function") X3DJSON['Obj']['DECLpoint_end1_PI1'].keyValue(X3DJSON.nodeUtil('DECLpoint_end1_PI1','keyValue'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['keyValue'] };
X3DJSON['ROUTE']['DECLpoint_end1_MB1']['keyValue']['DECLpoint_end1_PI1']['keyValue']['TO'].observe(X3DJSON.nodeUtil('DECLpoint_end1_PI1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end1_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end1_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end1_PI1']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end1_PI1']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end1_PI1']['value_changed']['DECLpoint_end1_node'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end1_PI1']['value_changed']['DECLpoint_end1_node'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end1_PI1']['value_changed']['DECLpoint_end1_node']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end1_PI1']['value_changed']['DECLpoint_end1_node']['set_translation'] = {};
}

X3DJSON['ROUTE']['DECLpoint_end1_PI1']['value_changed']['DECLpoint_end1_node']['set_translation']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'value_changed');
			X3DJSON.nodeUtil('DECLpoint_end1_node','set_translation',X3DJSON.nodeUtil('DECLpoint_end1_PI1','value_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['value_changed'] };
X3DJSON['ROUTE']['DECLpoint_end1_PI1']['value_changed']['DECLpoint_end1_node']['set_translation']['FROM'].observe(X3DJSON.nodeUtil('DECLpoint_end1_PI1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end1_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end1_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end1_PI1']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end1_PI1']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end1_PI1']['value_changed']['DECLpoint_end1_node'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end1_PI1']['value_changed']['DECLpoint_end1_node'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end1_PI1']['value_changed']['DECLpoint_end1_node']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end1_PI1']['value_changed']['DECLpoint_end1_node']['set_translation'] = {};
}

X3DJSON['ROUTE']['DECLpoint_end1_PI1']['value_changed']['DECLpoint_end1_node']['set_translation']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_translation');
			if (typeof X3DJSON['Obj']['DECLpoint_end1_node'].set_translation === "function") X3DJSON['Obj']['DECLpoint_end1_node'].set_translation(X3DJSON.nodeUtil('DECLpoint_end1_node','set_translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_translation'] };
X3DJSON['ROUTE']['DECLpoint_end1_PI1']['value_changed']['DECLpoint_end1_node']['set_translation']['TO'].observe(X3DJSON.nodeUtil('DECLpoint_end1_node'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end2_CL1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end2_CL1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end2_CL1']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end2_CL1']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end2_CL1']['cycleTime']['DECLpoint_end2_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end2_CL1']['cycleTime']['DECLpoint_end2_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end2_CL1']['cycleTime']['DECLpoint_end2_MB1']['set_location'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end2_CL1']['cycleTime']['DECLpoint_end2_MB1']['set_location'] = {};
}

X3DJSON['ROUTE']['DECLpoint_end2_CL1']['cycleTime']['DECLpoint_end2_MB1']['set_location']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'cycleTime');
			X3DJSON.nodeUtil('DECLpoint_end2_MB1','set_location',X3DJSON.nodeUtil('DECLpoint_end2_CL1','cycleTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['cycleTime'] };
X3DJSON['ROUTE']['DECLpoint_end2_CL1']['cycleTime']['DECLpoint_end2_MB1']['set_location']['FROM'].observe(X3DJSON.nodeUtil('DECLpoint_end2_CL1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end2_CL1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end2_CL1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end2_CL1']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end2_CL1']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end2_CL1']['cycleTime']['DECLpoint_end2_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end2_CL1']['cycleTime']['DECLpoint_end2_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end2_CL1']['cycleTime']['DECLpoint_end2_MB1']['set_location'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end2_CL1']['cycleTime']['DECLpoint_end2_MB1']['set_location'] = {};
}

X3DJSON['ROUTE']['DECLpoint_end2_CL1']['cycleTime']['DECLpoint_end2_MB1']['set_location']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_location');
			if (typeof X3DJSON['Obj']['DECLpoint_end2_MB1'].set_location === "function") X3DJSON['Obj']['DECLpoint_end2_MB1'].set_location(X3DJSON.nodeUtil('DECLpoint_end2_MB1','set_location'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_location'] };
X3DJSON['ROUTE']['DECLpoint_end2_CL1']['cycleTime']['DECLpoint_end2_MB1']['set_location']['TO'].observe(X3DJSON.nodeUtil('DECLpoint_end2_MB1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end2_CL1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end2_CL1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end2_CL1']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end2_CL1']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end2_CL1']['fraction_changed']['DECLpoint_end2_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end2_CL1']['fraction_changed']['DECLpoint_end2_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end2_CL1']['fraction_changed']['DECLpoint_end2_PI1']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end2_CL1']['fraction_changed']['DECLpoint_end2_PI1']['set_fraction'] = {};
}

X3DJSON['ROUTE']['DECLpoint_end2_CL1']['fraction_changed']['DECLpoint_end2_PI1']['set_fraction']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'fraction_changed');
			X3DJSON.nodeUtil('DECLpoint_end2_PI1','set_fraction',X3DJSON.nodeUtil('DECLpoint_end2_CL1','fraction_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['fraction_changed'] };
X3DJSON['ROUTE']['DECLpoint_end2_CL1']['fraction_changed']['DECLpoint_end2_PI1']['set_fraction']['FROM'].observe(X3DJSON.nodeUtil('DECLpoint_end2_CL1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end2_CL1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end2_CL1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end2_CL1']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end2_CL1']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end2_CL1']['fraction_changed']['DECLpoint_end2_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end2_CL1']['fraction_changed']['DECLpoint_end2_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end2_CL1']['fraction_changed']['DECLpoint_end2_PI1']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end2_CL1']['fraction_changed']['DECLpoint_end2_PI1']['set_fraction'] = {};
}

X3DJSON['ROUTE']['DECLpoint_end2_CL1']['fraction_changed']['DECLpoint_end2_PI1']['set_fraction']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_fraction');
			if (typeof X3DJSON['Obj']['DECLpoint_end2_PI1'].set_fraction === "function") X3DJSON['Obj']['DECLpoint_end2_PI1'].set_fraction(X3DJSON.nodeUtil('DECLpoint_end2_PI1','set_fraction'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_fraction'] };
X3DJSON['ROUTE']['DECLpoint_end2_CL1']['fraction_changed']['DECLpoint_end2_PI1']['set_fraction']['TO'].observe(X3DJSON.nodeUtil('DECLpoint_end2_PI1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end2_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end2_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end2_MB1']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end2_MB1']['keyValue'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end2_MB1']['keyValue']['DECLpoint_end2_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end2_MB1']['keyValue']['DECLpoint_end2_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end2_MB1']['keyValue']['DECLpoint_end2_PI1']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end2_MB1']['keyValue']['DECLpoint_end2_PI1']['keyValue'] = {};
}

X3DJSON['ROUTE']['DECLpoint_end2_MB1']['keyValue']['DECLpoint_end2_PI1']['keyValue']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'keyValue');
			X3DJSON.nodeUtil('DECLpoint_end2_PI1','keyValue',X3DJSON.nodeUtil('DECLpoint_end2_MB1','keyValue'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['keyValue'] };
X3DJSON['ROUTE']['DECLpoint_end2_MB1']['keyValue']['DECLpoint_end2_PI1']['keyValue']['FROM'].observe(X3DJSON.nodeUtil('DECLpoint_end2_MB1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end2_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end2_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end2_MB1']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end2_MB1']['keyValue'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end2_MB1']['keyValue']['DECLpoint_end2_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end2_MB1']['keyValue']['DECLpoint_end2_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end2_MB1']['keyValue']['DECLpoint_end2_PI1']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end2_MB1']['keyValue']['DECLpoint_end2_PI1']['keyValue'] = {};
}

X3DJSON['ROUTE']['DECLpoint_end2_MB1']['keyValue']['DECLpoint_end2_PI1']['keyValue']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'keyValue');
			if (typeof X3DJSON['Obj']['DECLpoint_end2_PI1'].keyValue === "function") X3DJSON['Obj']['DECLpoint_end2_PI1'].keyValue(X3DJSON.nodeUtil('DECLpoint_end2_PI1','keyValue'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['keyValue'] };
X3DJSON['ROUTE']['DECLpoint_end2_MB1']['keyValue']['DECLpoint_end2_PI1']['keyValue']['TO'].observe(X3DJSON.nodeUtil('DECLpoint_end2_PI1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end2_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end2_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end2_PI1']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end2_PI1']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end2_PI1']['value_changed']['DECLpoint_end2_node'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end2_PI1']['value_changed']['DECLpoint_end2_node'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end2_PI1']['value_changed']['DECLpoint_end2_node']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end2_PI1']['value_changed']['DECLpoint_end2_node']['set_translation'] = {};
}

X3DJSON['ROUTE']['DECLpoint_end2_PI1']['value_changed']['DECLpoint_end2_node']['set_translation']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'value_changed');
			X3DJSON.nodeUtil('DECLpoint_end2_node','set_translation',X3DJSON.nodeUtil('DECLpoint_end2_PI1','value_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['value_changed'] };
X3DJSON['ROUTE']['DECLpoint_end2_PI1']['value_changed']['DECLpoint_end2_node']['set_translation']['FROM'].observe(X3DJSON.nodeUtil('DECLpoint_end2_PI1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end2_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end2_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end2_PI1']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end2_PI1']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end2_PI1']['value_changed']['DECLpoint_end2_node'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end2_PI1']['value_changed']['DECLpoint_end2_node'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end2_PI1']['value_changed']['DECLpoint_end2_node']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end2_PI1']['value_changed']['DECLpoint_end2_node']['set_translation'] = {};
}

X3DJSON['ROUTE']['DECLpoint_end2_PI1']['value_changed']['DECLpoint_end2_node']['set_translation']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_translation');
			if (typeof X3DJSON['Obj']['DECLpoint_end2_node'].set_translation === "function") X3DJSON['Obj']['DECLpoint_end2_node'].set_translation(X3DJSON.nodeUtil('DECLpoint_end2_node','set_translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_translation'] };
X3DJSON['ROUTE']['DECLpoint_end2_PI1']['value_changed']['DECLpoint_end2_node']['set_translation']['TO'].observe(X3DJSON.nodeUtil('DECLpoint_end2_node'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end3_CL1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end3_CL1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end3_CL1']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end3_CL1']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end3_CL1']['cycleTime']['DECLpoint_end3_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end3_CL1']['cycleTime']['DECLpoint_end3_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end3_CL1']['cycleTime']['DECLpoint_end3_MB1']['set_location'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end3_CL1']['cycleTime']['DECLpoint_end3_MB1']['set_location'] = {};
}

X3DJSON['ROUTE']['DECLpoint_end3_CL1']['cycleTime']['DECLpoint_end3_MB1']['set_location']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'cycleTime');
			X3DJSON.nodeUtil('DECLpoint_end3_MB1','set_location',X3DJSON.nodeUtil('DECLpoint_end3_CL1','cycleTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['cycleTime'] };
X3DJSON['ROUTE']['DECLpoint_end3_CL1']['cycleTime']['DECLpoint_end3_MB1']['set_location']['FROM'].observe(X3DJSON.nodeUtil('DECLpoint_end3_CL1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end3_CL1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end3_CL1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end3_CL1']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end3_CL1']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end3_CL1']['cycleTime']['DECLpoint_end3_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end3_CL1']['cycleTime']['DECLpoint_end3_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end3_CL1']['cycleTime']['DECLpoint_end3_MB1']['set_location'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end3_CL1']['cycleTime']['DECLpoint_end3_MB1']['set_location'] = {};
}

X3DJSON['ROUTE']['DECLpoint_end3_CL1']['cycleTime']['DECLpoint_end3_MB1']['set_location']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_location');
			if (typeof X3DJSON['Obj']['DECLpoint_end3_MB1'].set_location === "function") X3DJSON['Obj']['DECLpoint_end3_MB1'].set_location(X3DJSON.nodeUtil('DECLpoint_end3_MB1','set_location'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_location'] };
X3DJSON['ROUTE']['DECLpoint_end3_CL1']['cycleTime']['DECLpoint_end3_MB1']['set_location']['TO'].observe(X3DJSON.nodeUtil('DECLpoint_end3_MB1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end3_CL1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end3_CL1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end3_CL1']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end3_CL1']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end3_CL1']['fraction_changed']['DECLpoint_end3_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end3_CL1']['fraction_changed']['DECLpoint_end3_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end3_CL1']['fraction_changed']['DECLpoint_end3_PI1']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end3_CL1']['fraction_changed']['DECLpoint_end3_PI1']['set_fraction'] = {};
}

X3DJSON['ROUTE']['DECLpoint_end3_CL1']['fraction_changed']['DECLpoint_end3_PI1']['set_fraction']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'fraction_changed');
			X3DJSON.nodeUtil('DECLpoint_end3_PI1','set_fraction',X3DJSON.nodeUtil('DECLpoint_end3_CL1','fraction_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['fraction_changed'] };
X3DJSON['ROUTE']['DECLpoint_end3_CL1']['fraction_changed']['DECLpoint_end3_PI1']['set_fraction']['FROM'].observe(X3DJSON.nodeUtil('DECLpoint_end3_CL1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end3_CL1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end3_CL1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end3_CL1']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end3_CL1']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end3_CL1']['fraction_changed']['DECLpoint_end3_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end3_CL1']['fraction_changed']['DECLpoint_end3_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end3_CL1']['fraction_changed']['DECLpoint_end3_PI1']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end3_CL1']['fraction_changed']['DECLpoint_end3_PI1']['set_fraction'] = {};
}

X3DJSON['ROUTE']['DECLpoint_end3_CL1']['fraction_changed']['DECLpoint_end3_PI1']['set_fraction']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_fraction');
			if (typeof X3DJSON['Obj']['DECLpoint_end3_PI1'].set_fraction === "function") X3DJSON['Obj']['DECLpoint_end3_PI1'].set_fraction(X3DJSON.nodeUtil('DECLpoint_end3_PI1','set_fraction'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_fraction'] };
X3DJSON['ROUTE']['DECLpoint_end3_CL1']['fraction_changed']['DECLpoint_end3_PI1']['set_fraction']['TO'].observe(X3DJSON.nodeUtil('DECLpoint_end3_PI1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end3_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end3_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end3_MB1']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end3_MB1']['keyValue'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end3_MB1']['keyValue']['DECLpoint_end3_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end3_MB1']['keyValue']['DECLpoint_end3_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end3_MB1']['keyValue']['DECLpoint_end3_PI1']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end3_MB1']['keyValue']['DECLpoint_end3_PI1']['keyValue'] = {};
}

X3DJSON['ROUTE']['DECLpoint_end3_MB1']['keyValue']['DECLpoint_end3_PI1']['keyValue']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'keyValue');
			X3DJSON.nodeUtil('DECLpoint_end3_PI1','keyValue',X3DJSON.nodeUtil('DECLpoint_end3_MB1','keyValue'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['keyValue'] };
X3DJSON['ROUTE']['DECLpoint_end3_MB1']['keyValue']['DECLpoint_end3_PI1']['keyValue']['FROM'].observe(X3DJSON.nodeUtil('DECLpoint_end3_MB1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end3_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end3_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end3_MB1']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end3_MB1']['keyValue'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end3_MB1']['keyValue']['DECLpoint_end3_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end3_MB1']['keyValue']['DECLpoint_end3_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end3_MB1']['keyValue']['DECLpoint_end3_PI1']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end3_MB1']['keyValue']['DECLpoint_end3_PI1']['keyValue'] = {};
}

X3DJSON['ROUTE']['DECLpoint_end3_MB1']['keyValue']['DECLpoint_end3_PI1']['keyValue']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'keyValue');
			if (typeof X3DJSON['Obj']['DECLpoint_end3_PI1'].keyValue === "function") X3DJSON['Obj']['DECLpoint_end3_PI1'].keyValue(X3DJSON.nodeUtil('DECLpoint_end3_PI1','keyValue'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['keyValue'] };
X3DJSON['ROUTE']['DECLpoint_end3_MB1']['keyValue']['DECLpoint_end3_PI1']['keyValue']['TO'].observe(X3DJSON.nodeUtil('DECLpoint_end3_PI1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end3_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end3_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end3_PI1']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end3_PI1']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end3_PI1']['value_changed']['DECLpoint_end3_node'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end3_PI1']['value_changed']['DECLpoint_end3_node'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end3_PI1']['value_changed']['DECLpoint_end3_node']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end3_PI1']['value_changed']['DECLpoint_end3_node']['set_translation'] = {};
}

X3DJSON['ROUTE']['DECLpoint_end3_PI1']['value_changed']['DECLpoint_end3_node']['set_translation']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'value_changed');
			X3DJSON.nodeUtil('DECLpoint_end3_node','set_translation',X3DJSON.nodeUtil('DECLpoint_end3_PI1','value_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['value_changed'] };
X3DJSON['ROUTE']['DECLpoint_end3_PI1']['value_changed']['DECLpoint_end3_node']['set_translation']['FROM'].observe(X3DJSON.nodeUtil('DECLpoint_end3_PI1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end3_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end3_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end3_PI1']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end3_PI1']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end3_PI1']['value_changed']['DECLpoint_end3_node'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end3_PI1']['value_changed']['DECLpoint_end3_node'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end3_PI1']['value_changed']['DECLpoint_end3_node']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end3_PI1']['value_changed']['DECLpoint_end3_node']['set_translation'] = {};
}

X3DJSON['ROUTE']['DECLpoint_end3_PI1']['value_changed']['DECLpoint_end3_node']['set_translation']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_translation');
			if (typeof X3DJSON['Obj']['DECLpoint_end3_node'].set_translation === "function") X3DJSON['Obj']['DECLpoint_end3_node'].set_translation(X3DJSON.nodeUtil('DECLpoint_end3_node','set_translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_translation'] };
X3DJSON['ROUTE']['DECLpoint_end3_PI1']['value_changed']['DECLpoint_end3_node']['set_translation']['TO'].observe(X3DJSON.nodeUtil('DECLpoint_end3_node'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1']['cycleTime']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1']['cycleTime']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1']['cycleTime']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1']['set_location'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1']['cycleTime']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1']['set_location'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1']['cycleTime']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1']['set_location']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'cycleTime');
			X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1','set_location',X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1','cycleTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['cycleTime'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1']['cycleTime']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1']['set_location']['FROM'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1']['cycleTime']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1']['cycleTime']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1']['cycleTime']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1']['set_location'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1']['cycleTime']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1']['set_location'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1']['cycleTime']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1']['set_location']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_location');
			if (typeof X3DJSON['Obj']['DECLx3dconnector_connector1_S1.DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1'].set_location === "function") X3DJSON['Obj']['DECLx3dconnector_connector1_S1.DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1'].set_location(X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1','set_location'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_location'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1']['cycleTime']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1']['set_location']['TO'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1']['fraction_changed']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1']['fraction_changed']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1']['fraction_changed']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1']['fraction_changed']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1']['set_fraction'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1']['fraction_changed']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1']['set_fraction']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'fraction_changed');
			X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1','set_fraction',X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1','fraction_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['fraction_changed'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1']['fraction_changed']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1']['set_fraction']['FROM'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1']['fraction_changed']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1']['fraction_changed']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1']['fraction_changed']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1']['fraction_changed']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1']['set_fraction'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1']['fraction_changed']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1']['set_fraction']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_fraction');
			if (typeof X3DJSON['Obj']['DECLx3dconnector_connector1_S1.DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1'].set_fraction === "function") X3DJSON['Obj']['DECLx3dconnector_connector1_S1.DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1'].set_fraction(X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1','set_fraction'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_fraction'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1']['fraction_changed']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1']['set_fraction']['TO'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1']['keyValue'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1']['keyValue']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1']['keyValue']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1']['keyValue']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1']['keyValue']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1']['keyValue'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1']['keyValue']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1']['keyValue']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'keyValue');
			X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1','keyValue',X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1','keyValue'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['keyValue'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1']['keyValue']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1']['keyValue']['FROM'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1']['keyValue'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1']['keyValue']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1']['keyValue']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1']['keyValue']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1']['keyValue']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1']['keyValue'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1']['keyValue']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1']['keyValue']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'keyValue');
			if (typeof X3DJSON['Obj']['DECLx3dconnector_connector1_S1.DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1'].keyValue === "function") X3DJSON['Obj']['DECLx3dconnector_connector1_S1.DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1'].keyValue(X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1','keyValue'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['keyValue'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_MB1']['keyValue']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1']['keyValue']['TO'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1']['value_changed']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_node'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1']['value_changed']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_node'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1']['value_changed']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_node']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1']['value_changed']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_node']['set_translation'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1']['value_changed']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_node']['set_translation']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'value_changed');
			X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_node','set_translation',X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1','value_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['value_changed'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1']['value_changed']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_node']['set_translation']['FROM'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1']['value_changed']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_node'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1']['value_changed']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_node'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1']['value_changed']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_node']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1']['value_changed']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_node']['set_translation'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1']['value_changed']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_node']['set_translation']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_translation');
			if (typeof X3DJSON['Obj']['DECLx3dconnector_connector1_S1.DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_node'].set_translation === "function") X3DJSON['Obj']['DECLx3dconnector_connector1_S1.DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_node'].set_translation(X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_node','set_translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_translation'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1']['value_changed']['DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_node']['set_translation']['TO'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_node'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1']['cycleTime']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1']['cycleTime']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1']['cycleTime']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1']['set_location'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1']['cycleTime']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1']['set_location'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1']['cycleTime']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1']['set_location']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'cycleTime');
			X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1','set_location',X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1','cycleTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['cycleTime'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1']['cycleTime']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1']['set_location']['FROM'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1']['cycleTime']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1']['cycleTime']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1']['cycleTime']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1']['set_location'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1']['cycleTime']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1']['set_location'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1']['cycleTime']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1']['set_location']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_location');
			if (typeof X3DJSON['Obj']['DECLx3dconnector_connector1_S1.DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1'].set_location === "function") X3DJSON['Obj']['DECLx3dconnector_connector1_S1.DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1'].set_location(X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1','set_location'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_location'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1']['cycleTime']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1']['set_location']['TO'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1']['fraction_changed']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1']['fraction_changed']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1']['fraction_changed']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1']['fraction_changed']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1']['set_fraction'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1']['fraction_changed']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1']['set_fraction']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'fraction_changed');
			X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1','set_fraction',X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1','fraction_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['fraction_changed'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1']['fraction_changed']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1']['set_fraction']['FROM'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1']['fraction_changed']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1']['fraction_changed']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1']['fraction_changed']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1']['fraction_changed']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1']['set_fraction'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1']['fraction_changed']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1']['set_fraction']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_fraction');
			if (typeof X3DJSON['Obj']['DECLx3dconnector_connector1_S1.DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1'].set_fraction === "function") X3DJSON['Obj']['DECLx3dconnector_connector1_S1.DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1'].set_fraction(X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1','set_fraction'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_fraction'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1']['fraction_changed']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1']['set_fraction']['TO'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1']['keyValue'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1']['keyValue']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1']['keyValue']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1']['keyValue']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1']['keyValue']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1']['keyValue'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1']['keyValue']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1']['keyValue']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'keyValue');
			X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1','keyValue',X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1','keyValue'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['keyValue'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1']['keyValue']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1']['keyValue']['FROM'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1']['keyValue'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1']['keyValue']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1']['keyValue']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1']['keyValue']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1']['keyValue']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1']['keyValue'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1']['keyValue']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1']['keyValue']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'keyValue');
			if (typeof X3DJSON['Obj']['DECLx3dconnector_connector1_S1.DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1'].keyValue === "function") X3DJSON['Obj']['DECLx3dconnector_connector1_S1.DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1'].keyValue(X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1','keyValue'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['keyValue'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_MB1']['keyValue']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1']['keyValue']['TO'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1']['value_changed']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_node'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1']['value_changed']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_node'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1']['value_changed']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_node']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1']['value_changed']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_node']['set_translation'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1']['value_changed']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_node']['set_translation']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'value_changed');
			X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_node','set_translation',X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1','value_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['value_changed'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1']['value_changed']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_node']['set_translation']['FROM'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1']['value_changed']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_node'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1']['value_changed']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_node'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1']['value_changed']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_node']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1']['value_changed']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_node']['set_translation'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1']['value_changed']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_node']['set_translation']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_translation');
			if (typeof X3DJSON['Obj']['DECLx3dconnector_connector1_S1.DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_node'].set_translation === "function") X3DJSON['Obj']['DECLx3dconnector_connector1_S1.DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_node'].set_translation(X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_node','set_translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_translation'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1']['value_changed']['DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_node']['set_translation']['TO'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_node'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1']['cycleTime']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1']['cycleTime']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1']['cycleTime']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1']['set_location'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1']['cycleTime']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1']['set_location'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1']['cycleTime']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1']['set_location']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'cycleTime');
			X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1','set_location',X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1','cycleTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['cycleTime'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1']['cycleTime']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1']['set_location']['FROM'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1']['cycleTime']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1']['cycleTime']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1']['cycleTime']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1']['set_location'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1']['cycleTime']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1']['set_location'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1']['cycleTime']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1']['set_location']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_location');
			if (typeof X3DJSON['Obj']['DECLx3dconnector_connector2_S1.DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1'].set_location === "function") X3DJSON['Obj']['DECLx3dconnector_connector2_S1.DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1'].set_location(X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1','set_location'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_location'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1']['cycleTime']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1']['set_location']['TO'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1']['fraction_changed']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1']['fraction_changed']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1']['fraction_changed']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1']['fraction_changed']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1']['set_fraction'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1']['fraction_changed']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1']['set_fraction']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'fraction_changed');
			X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1','set_fraction',X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1','fraction_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['fraction_changed'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1']['fraction_changed']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1']['set_fraction']['FROM'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1']['fraction_changed']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1']['fraction_changed']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1']['fraction_changed']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1']['fraction_changed']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1']['set_fraction'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1']['fraction_changed']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1']['set_fraction']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_fraction');
			if (typeof X3DJSON['Obj']['DECLx3dconnector_connector2_S1.DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1'].set_fraction === "function") X3DJSON['Obj']['DECLx3dconnector_connector2_S1.DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1'].set_fraction(X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1','set_fraction'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_fraction'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1']['fraction_changed']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1']['set_fraction']['TO'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1']['keyValue'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1']['keyValue']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1']['keyValue']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1']['keyValue']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1']['keyValue']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1']['keyValue'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1']['keyValue']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1']['keyValue']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'keyValue');
			X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1','keyValue',X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1','keyValue'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['keyValue'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1']['keyValue']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1']['keyValue']['FROM'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1']['keyValue'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1']['keyValue']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1']['keyValue']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1']['keyValue']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1']['keyValue']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1']['keyValue'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1']['keyValue']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1']['keyValue']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'keyValue');
			if (typeof X3DJSON['Obj']['DECLx3dconnector_connector2_S1.DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1'].keyValue === "function") X3DJSON['Obj']['DECLx3dconnector_connector2_S1.DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1'].keyValue(X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1','keyValue'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['keyValue'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_MB1']['keyValue']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1']['keyValue']['TO'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1']['value_changed']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_node'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1']['value_changed']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_node'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1']['value_changed']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_node']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1']['value_changed']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_node']['set_translation'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1']['value_changed']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_node']['set_translation']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'value_changed');
			X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_node','set_translation',X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1','value_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['value_changed'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1']['value_changed']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_node']['set_translation']['FROM'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1']['value_changed']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_node'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1']['value_changed']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_node'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1']['value_changed']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_node']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1']['value_changed']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_node']['set_translation'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1']['value_changed']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_node']['set_translation']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_translation');
			if (typeof X3DJSON['Obj']['DECLx3dconnector_connector2_S1.DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_node'].set_translation === "function") X3DJSON['Obj']['DECLx3dconnector_connector2_S1.DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_node'].set_translation(X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_node','set_translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_translation'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1']['value_changed']['DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_node']['set_translation']['TO'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_node'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1']['cycleTime']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1']['cycleTime']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1']['cycleTime']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1']['set_location'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1']['cycleTime']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1']['set_location'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1']['cycleTime']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1']['set_location']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'cycleTime');
			X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1','set_location',X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1','cycleTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['cycleTime'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1']['cycleTime']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1']['set_location']['FROM'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1']['cycleTime']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1']['cycleTime']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1']['cycleTime']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1']['set_location'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1']['cycleTime']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1']['set_location'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1']['cycleTime']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1']['set_location']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_location');
			if (typeof X3DJSON['Obj']['DECLx3dconnector_connector2_S1.DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1'].set_location === "function") X3DJSON['Obj']['DECLx3dconnector_connector2_S1.DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1'].set_location(X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1','set_location'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_location'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1']['cycleTime']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1']['set_location']['TO'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1']['fraction_changed']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1']['fraction_changed']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1']['fraction_changed']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1']['fraction_changed']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1']['set_fraction'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1']['fraction_changed']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1']['set_fraction']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'fraction_changed');
			X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1','set_fraction',X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1','fraction_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['fraction_changed'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1']['fraction_changed']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1']['set_fraction']['FROM'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1']['fraction_changed']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1']['fraction_changed']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1']['fraction_changed']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1']['fraction_changed']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1']['set_fraction'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1']['fraction_changed']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1']['set_fraction']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_fraction');
			if (typeof X3DJSON['Obj']['DECLx3dconnector_connector2_S1.DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1'].set_fraction === "function") X3DJSON['Obj']['DECLx3dconnector_connector2_S1.DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1'].set_fraction(X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1','set_fraction'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_fraction'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1']['fraction_changed']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1']['set_fraction']['TO'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1']['keyValue'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1']['keyValue']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1']['keyValue']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1']['keyValue']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1']['keyValue']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1']['keyValue'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1']['keyValue']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1']['keyValue']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'keyValue');
			X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1','keyValue',X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1','keyValue'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['keyValue'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1']['keyValue']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1']['keyValue']['FROM'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1']['keyValue'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1']['keyValue']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1']['keyValue']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1']['keyValue']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1']['keyValue']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1']['keyValue'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1']['keyValue']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1']['keyValue']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'keyValue');
			if (typeof X3DJSON['Obj']['DECLx3dconnector_connector2_S1.DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1'].keyValue === "function") X3DJSON['Obj']['DECLx3dconnector_connector2_S1.DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1'].keyValue(X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1','keyValue'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['keyValue'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_MB1']['keyValue']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1']['keyValue']['TO'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1']['value_changed']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_node'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1']['value_changed']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_node'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1']['value_changed']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_node']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1']['value_changed']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_node']['set_translation'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1']['value_changed']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_node']['set_translation']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'value_changed');
			X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_node','set_translation',X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1','value_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['value_changed'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1']['value_changed']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_node']['set_translation']['FROM'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1']['value_changed']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_node'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1']['value_changed']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_node'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1']['value_changed']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_node']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1']['value_changed']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_node']['set_translation'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1']['value_changed']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_node']['set_translation']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_translation');
			if (typeof X3DJSON['Obj']['DECLx3dconnector_connector2_S1.DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_node'].set_translation === "function") X3DJSON['Obj']['DECLx3dconnector_connector2_S1.DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_node'].set_translation(X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_node','set_translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_translation'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1']['value_changed']['DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_node']['set_translation']['TO'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_node'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1']['cycleTime']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1']['cycleTime']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1']['cycleTime']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1']['set_location'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1']['cycleTime']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1']['set_location'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1']['cycleTime']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1']['set_location']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'cycleTime');
			X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1','set_location',X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1','cycleTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['cycleTime'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1']['cycleTime']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1']['set_location']['FROM'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1']['cycleTime']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1']['cycleTime']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1']['cycleTime']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1']['set_location'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1']['cycleTime']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1']['set_location'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1']['cycleTime']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1']['set_location']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_location');
			if (typeof X3DJSON['Obj']['DECLx3dconnector_connector3_S1.DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1'].set_location === "function") X3DJSON['Obj']['DECLx3dconnector_connector3_S1.DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1'].set_location(X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1','set_location'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_location'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1']['cycleTime']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1']['set_location']['TO'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1']['fraction_changed']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1']['fraction_changed']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1']['fraction_changed']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1']['fraction_changed']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1']['set_fraction'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1']['fraction_changed']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1']['set_fraction']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'fraction_changed');
			X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1','set_fraction',X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1','fraction_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['fraction_changed'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1']['fraction_changed']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1']['set_fraction']['FROM'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1']['fraction_changed']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1']['fraction_changed']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1']['fraction_changed']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1']['fraction_changed']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1']['set_fraction'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1']['fraction_changed']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1']['set_fraction']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_fraction');
			if (typeof X3DJSON['Obj']['DECLx3dconnector_connector3_S1.DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1'].set_fraction === "function") X3DJSON['Obj']['DECLx3dconnector_connector3_S1.DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1'].set_fraction(X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1','set_fraction'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_fraction'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1']['fraction_changed']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1']['set_fraction']['TO'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1']['keyValue'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1']['keyValue']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1']['keyValue']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1']['keyValue']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1']['keyValue']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1']['keyValue'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1']['keyValue']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1']['keyValue']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'keyValue');
			X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1','keyValue',X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1','keyValue'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['keyValue'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1']['keyValue']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1']['keyValue']['FROM'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1']['keyValue'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1']['keyValue']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1']['keyValue']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1']['keyValue']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1']['keyValue']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1']['keyValue'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1']['keyValue']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1']['keyValue']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'keyValue');
			if (typeof X3DJSON['Obj']['DECLx3dconnector_connector3_S1.DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1'].keyValue === "function") X3DJSON['Obj']['DECLx3dconnector_connector3_S1.DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1'].keyValue(X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1','keyValue'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['keyValue'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_MB1']['keyValue']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1']['keyValue']['TO'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1']['value_changed']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_node'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1']['value_changed']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_node'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1']['value_changed']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_node']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1']['value_changed']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_node']['set_translation'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1']['value_changed']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_node']['set_translation']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'value_changed');
			X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_node','set_translation',X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1','value_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['value_changed'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1']['value_changed']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_node']['set_translation']['FROM'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1']['value_changed']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_node'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1']['value_changed']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_node'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1']['value_changed']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_node']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1']['value_changed']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_node']['set_translation'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1']['value_changed']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_node']['set_translation']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_translation');
			if (typeof X3DJSON['Obj']['DECLx3dconnector_connector3_S1.DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_node'].set_translation === "function") X3DJSON['Obj']['DECLx3dconnector_connector3_S1.DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_node'].set_translation(X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_node','set_translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_translation'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1']['value_changed']['DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_node']['set_translation']['TO'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_node'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1']['cycleTime']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1']['cycleTime']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1']['cycleTime']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1']['set_location'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1']['cycleTime']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1']['set_location'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1']['cycleTime']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1']['set_location']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'cycleTime');
			X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1','set_location',X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1','cycleTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['cycleTime'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1']['cycleTime']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1']['set_location']['FROM'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1']['cycleTime'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1']['cycleTime'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1']['cycleTime']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1']['cycleTime']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1']['cycleTime']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1']['set_location'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1']['cycleTime']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1']['set_location'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1']['cycleTime']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1']['set_location']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_location');
			if (typeof X3DJSON['Obj']['DECLx3dconnector_connector3_S1.DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1'].set_location === "function") X3DJSON['Obj']['DECLx3dconnector_connector3_S1.DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1'].set_location(X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1','set_location'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_location'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1']['cycleTime']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1']['set_location']['TO'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1']['fraction_changed']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1']['fraction_changed']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1']['fraction_changed']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1']['fraction_changed']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1']['set_fraction'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1']['fraction_changed']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1']['set_fraction']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'fraction_changed');
			X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1','set_fraction',X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1','fraction_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['fraction_changed'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1']['fraction_changed']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1']['set_fraction']['FROM'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1']['fraction_changed']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1']['fraction_changed']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1']['fraction_changed']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1']['fraction_changed']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1']['set_fraction'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1']['fraction_changed']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1']['set_fraction']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_fraction');
			if (typeof X3DJSON['Obj']['DECLx3dconnector_connector3_S1.DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1'].set_fraction === "function") X3DJSON['Obj']['DECLx3dconnector_connector3_S1.DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1'].set_fraction(X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1','set_fraction'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_fraction'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1']['fraction_changed']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1']['set_fraction']['TO'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1']['keyValue'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1']['keyValue']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1']['keyValue']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1']['keyValue']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1']['keyValue']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1']['keyValue'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1']['keyValue']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1']['keyValue']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'keyValue');
			X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1','keyValue',X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1','keyValue'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['keyValue'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1']['keyValue']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1']['keyValue']['FROM'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1']['keyValue'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1']['keyValue']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1']['keyValue']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1']['keyValue']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1']['keyValue'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1']['keyValue']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1']['keyValue'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1']['keyValue']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1']['keyValue']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'keyValue');
			if (typeof X3DJSON['Obj']['DECLx3dconnector_connector3_S1.DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1'].keyValue === "function") X3DJSON['Obj']['DECLx3dconnector_connector3_S1.DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1'].keyValue(X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1','keyValue'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['keyValue'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_MB1']['keyValue']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1']['keyValue']['TO'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1']['value_changed']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_node'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1']['value_changed']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_node'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1']['value_changed']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_node']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1']['value_changed']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_node']['set_translation'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1']['value_changed']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_node']['set_translation']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'value_changed');
			X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_node','set_translation',X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1','value_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['value_changed'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1']['value_changed']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_node']['set_translation']['FROM'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1']['value_changed']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_node'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1']['value_changed']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_node'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1']['value_changed']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_node']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1']['value_changed']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_node']['set_translation'] = {};
}

X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1']['value_changed']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_node']['set_translation']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_translation');
			if (typeof X3DJSON['Obj']['DECLx3dconnector_connector3_S1.DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_node'].set_translation === "function") X3DJSON['Obj']['DECLx3dconnector_connector3_S1.DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_node'].set_translation(X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_node','set_translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_translation'] };
X3DJSON['ROUTE']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1']['value_changed']['DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_node']['set_translation']['TO'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_node'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1']['set_startpoint'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1']['set_startpoint'] = {};
}

X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1']['set_startpoint']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'translation');
			X3DJSON.nodeUtil('DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1','set_startpoint',X3DJSON.nodeUtil('DECLpoint_start_DECLpoint_start_MB1','translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['translation'] };
X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1']['set_startpoint']['FROM'].observe(X3DJSON.nodeUtil('DECLpoint_start_DECLpoint_start_MB1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1']['set_startpoint'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1']['set_startpoint'] = {};
}

X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1']['set_startpoint']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_startpoint');
			if (typeof X3DJSON['Obj']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1'].set_startpoint === "function") X3DJSON['Obj']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1'].set_startpoint(X3DJSON.nodeUtil('DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1','set_startpoint'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_startpoint'] };
X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1']['set_startpoint']['TO'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end1_DECLpoint_end1_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end1_DECLpoint_end1_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end1_DECLpoint_end1_MB1']['translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end1_DECLpoint_end1_MB1']['translation'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end1_DECLpoint_end1_MB1']['translation']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end1_DECLpoint_end1_MB1']['translation']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end1_DECLpoint_end1_MB1']['translation']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1']['set_endpoint'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end1_DECLpoint_end1_MB1']['translation']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1']['set_endpoint'] = {};
}

X3DJSON['ROUTE']['DECLpoint_end1_DECLpoint_end1_MB1']['translation']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1']['set_endpoint']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'translation');
			X3DJSON.nodeUtil('DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1','set_endpoint',X3DJSON.nodeUtil('DECLpoint_end1_DECLpoint_end1_MB1','translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['translation'] };
X3DJSON['ROUTE']['DECLpoint_end1_DECLpoint_end1_MB1']['translation']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1']['set_endpoint']['FROM'].observe(X3DJSON.nodeUtil('DECLpoint_end1_DECLpoint_end1_MB1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end1_DECLpoint_end1_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end1_DECLpoint_end1_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end1_DECLpoint_end1_MB1']['translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end1_DECLpoint_end1_MB1']['translation'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end1_DECLpoint_end1_MB1']['translation']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end1_DECLpoint_end1_MB1']['translation']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end1_DECLpoint_end1_MB1']['translation']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1']['set_endpoint'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end1_DECLpoint_end1_MB1']['translation']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1']['set_endpoint'] = {};
}

X3DJSON['ROUTE']['DECLpoint_end1_DECLpoint_end1_MB1']['translation']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1']['set_endpoint']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_endpoint');
			if (typeof X3DJSON['Obj']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1'].set_endpoint === "function") X3DJSON['Obj']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1'].set_endpoint(X3DJSON.nodeUtil('DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1','set_endpoint'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_endpoint'] };
X3DJSON['ROUTE']['DECLpoint_end1_DECLpoint_end1_MB1']['translation']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1']['set_endpoint']['TO'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1']['set_startpoint'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1']['set_startpoint'] = {};
}

X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1']['set_startpoint']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'translation');
			X3DJSON.nodeUtil('DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1','set_startpoint',X3DJSON.nodeUtil('DECLpoint_start_DECLpoint_start_MB1','translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['translation'] };
X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1']['set_startpoint']['FROM'].observe(X3DJSON.nodeUtil('DECLpoint_start_DECLpoint_start_MB1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1']['set_startpoint'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1']['set_startpoint'] = {};
}

X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1']['set_startpoint']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_startpoint');
			if (typeof X3DJSON['Obj']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1'].set_startpoint === "function") X3DJSON['Obj']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1'].set_startpoint(X3DJSON.nodeUtil('DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1','set_startpoint'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_startpoint'] };
X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1']['set_startpoint']['TO'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end2_DECLpoint_end2_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end2_DECLpoint_end2_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end2_DECLpoint_end2_MB1']['translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end2_DECLpoint_end2_MB1']['translation'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end2_DECLpoint_end2_MB1']['translation']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end2_DECLpoint_end2_MB1']['translation']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end2_DECLpoint_end2_MB1']['translation']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1']['set_endpoint'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end2_DECLpoint_end2_MB1']['translation']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1']['set_endpoint'] = {};
}

X3DJSON['ROUTE']['DECLpoint_end2_DECLpoint_end2_MB1']['translation']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1']['set_endpoint']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'translation');
			X3DJSON.nodeUtil('DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1','set_endpoint',X3DJSON.nodeUtil('DECLpoint_end2_DECLpoint_end2_MB1','translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['translation'] };
X3DJSON['ROUTE']['DECLpoint_end2_DECLpoint_end2_MB1']['translation']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1']['set_endpoint']['FROM'].observe(X3DJSON.nodeUtil('DECLpoint_end2_DECLpoint_end2_MB1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end2_DECLpoint_end2_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end2_DECLpoint_end2_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end2_DECLpoint_end2_MB1']['translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end2_DECLpoint_end2_MB1']['translation'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end2_DECLpoint_end2_MB1']['translation']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end2_DECLpoint_end2_MB1']['translation']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end2_DECLpoint_end2_MB1']['translation']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1']['set_endpoint'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end2_DECLpoint_end2_MB1']['translation']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1']['set_endpoint'] = {};
}

X3DJSON['ROUTE']['DECLpoint_end2_DECLpoint_end2_MB1']['translation']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1']['set_endpoint']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_endpoint');
			if (typeof X3DJSON['Obj']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1'].set_endpoint === "function") X3DJSON['Obj']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1'].set_endpoint(X3DJSON.nodeUtil('DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1','set_endpoint'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_endpoint'] };
X3DJSON['ROUTE']['DECLpoint_end2_DECLpoint_end2_MB1']['translation']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1']['set_endpoint']['TO'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1']['set_startpoint'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1']['set_startpoint'] = {};
}

X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1']['set_startpoint']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'translation');
			X3DJSON.nodeUtil('DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1','set_startpoint',X3DJSON.nodeUtil('DECLpoint_start_DECLpoint_start_MB1','translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['translation'] };
X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1']['set_startpoint']['FROM'].observe(X3DJSON.nodeUtil('DECLpoint_start_DECLpoint_start_MB1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1']['set_startpoint'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1']['set_startpoint'] = {};
}

X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1']['set_startpoint']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_startpoint');
			if (typeof X3DJSON['Obj']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1'].set_startpoint === "function") X3DJSON['Obj']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1'].set_startpoint(X3DJSON.nodeUtil('DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1','set_startpoint'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_startpoint'] };
X3DJSON['ROUTE']['DECLpoint_start_DECLpoint_start_MB1']['translation']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1']['set_startpoint']['TO'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end3_DECLpoint_end3_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end3_DECLpoint_end3_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end3_DECLpoint_end3_MB1']['translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end3_DECLpoint_end3_MB1']['translation'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end3_DECLpoint_end3_MB1']['translation']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end3_DECLpoint_end3_MB1']['translation']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end3_DECLpoint_end3_MB1']['translation']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1']['set_endpoint'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end3_DECLpoint_end3_MB1']['translation']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1']['set_endpoint'] = {};
}

X3DJSON['ROUTE']['DECLpoint_end3_DECLpoint_end3_MB1']['translation']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1']['set_endpoint']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'translation');
			X3DJSON.nodeUtil('DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1','set_endpoint',X3DJSON.nodeUtil('DECLpoint_end3_DECLpoint_end3_MB1','translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['translation'] };
X3DJSON['ROUTE']['DECLpoint_end3_DECLpoint_end3_MB1']['translation']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1']['set_endpoint']['FROM'].observe(X3DJSON.nodeUtil('DECLpoint_end3_DECLpoint_end3_MB1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end3_DECLpoint_end3_MB1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end3_DECLpoint_end3_MB1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end3_DECLpoint_end3_MB1']['translation'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end3_DECLpoint_end3_MB1']['translation'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end3_DECLpoint_end3_MB1']['translation']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end3_DECLpoint_end3_MB1']['translation']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1'] = {};
}
if (typeof X3DJSON['ROUTE']['DECLpoint_end3_DECLpoint_end3_MB1']['translation']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1']['set_endpoint'] === 'undefined') {
X3DJSON['ROUTE']['DECLpoint_end3_DECLpoint_end3_MB1']['translation']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1']['set_endpoint'] = {};
}

X3DJSON['ROUTE']['DECLpoint_end3_DECLpoint_end3_MB1']['translation']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1']['set_endpoint']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_endpoint');
			if (typeof X3DJSON['Obj']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1'].set_endpoint === "function") X3DJSON['Obj']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1'].set_endpoint(X3DJSON.nodeUtil('DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1','set_endpoint'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_endpoint'] };
X3DJSON['ROUTE']['DECLpoint_end3_DECLpoint_end3_MB1']['translation']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1']['set_endpoint']['TO'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1'), config);
			X3DJSON.nodeUtil('DECLpoint_start_PI1','set_fraction',X3DJSON.nodeUtil('DECLpoint_start_CL1','fraction_changed'), __eventTime);
			X3DJSON.nodeUtil('DECLpoint_end1_PI1','set_fraction',X3DJSON.nodeUtil('DECLpoint_end1_CL1','fraction_changed'), __eventTime);
			X3DJSON.nodeUtil('DECLpoint_end2_PI1','set_fraction',X3DJSON.nodeUtil('DECLpoint_end2_CL1','fraction_changed'), __eventTime);
			X3DJSON.nodeUtil('DECLpoint_end3_PI1','set_fraction',X3DJSON.nodeUtil('DECLpoint_end3_CL1','fraction_changed'), __eventTime);
			X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_PI1','set_fraction',X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE3000_CL1','fraction_changed'), __eventTime);
			X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_PI1','set_fraction',X3DJSON.nodeUtil('DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE4000_CL1','fraction_changed'), __eventTime);
			X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_PI1','set_fraction',X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDstartnode_DECLpoint_INSTANCE5000_CL1','fraction_changed'), __eventTime);
			X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_PI1','set_fraction',X3DJSON.nodeUtil('DECLx3dconnector_connector2_FIELDendnode_DECLpoint_INSTANCE6000_CL1','fraction_changed'), __eventTime);
			X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_PI1','set_fraction',X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDstartnode_DECLpoint_INSTANCE7000_CL1','fraction_changed'), __eventTime);
			X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_PI1','set_fraction',X3DJSON.nodeUtil('DECLx3dconnector_connector3_FIELDendnode_DECLpoint_INSTANCE8000_CL1','fraction_changed'), __eventTime);