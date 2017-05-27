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

X3DJSON['Script']['DECLx3dconnector_connector1387000_S1'] = function() {
	this.set_startnode = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector1387000_S1', 'startnode', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.startnode_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector1387000_S1', 'startnode');
	};
	this.set_startnode(new SFNode());
	this.set_endnode = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector1387000_S1', 'endnode', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.endnode_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector1387000_S1', 'endnode');
	};
	this.set_endnode(new SFNode());
	this.set_connectornode = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector1387000_S1', 'connectornode', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.connectornode_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector1387000_S1', 'connectornode');
	};
	this.set_connectornode(new SFNode());
	this.set_startpoint = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector1387000_S1', 'startpoint', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.startpoint_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector1387000_S1', 'startpoint');
	};
	this.set_startpoint(undefined);
	this.set_endpoint = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector1387000_S1', 'endpoint', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.endpoint_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector1387000_S1', 'endpoint');
	};
	this.set_endpoint(undefined);

            ecmascript:
            
	this.recompute = function (startpoint,endpoint){
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

X3DJSON['Obj']['DECLx3dconnector_connector1387000_S1'] = new X3DJSON['Script']['DECLx3dconnector_connector1387000_S1']();
if (typeof X3DJSON['Obj']['DECLx3dconnector_connector1387000_S1'].initialize === "function") X3DJSON['Obj']['DECLx3dconnector_connector1387000_S1'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLx3dconnector_connector2388000_S1'] = function() {
	this.set_startnode = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector2388000_S1', 'startnode', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.startnode_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector2388000_S1', 'startnode');
	};
	this.set_startnode(new SFNode());
	this.set_endnode = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector2388000_S1', 'endnode', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.endnode_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector2388000_S1', 'endnode');
	};
	this.set_endnode(new SFNode());
	this.set_connectornode = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector2388000_S1', 'connectornode', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.connectornode_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector2388000_S1', 'connectornode');
	};
	this.set_connectornode(new SFNode());
	this.set_startpoint = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector2388000_S1', 'startpoint', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.startpoint_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector2388000_S1', 'startpoint');
	};
	this.set_startpoint(undefined);
	this.set_endpoint = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector2388000_S1', 'endpoint', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.endpoint_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector2388000_S1', 'endpoint');
	};
	this.set_endpoint(undefined);

            ecmascript:
            
	this.recompute = function (startpoint,endpoint){
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

X3DJSON['Obj']['DECLx3dconnector_connector2388000_S1'] = new X3DJSON['Script']['DECLx3dconnector_connector2388000_S1']();
if (typeof X3DJSON['Obj']['DECLx3dconnector_connector2388000_S1'].initialize === "function") X3DJSON['Obj']['DECLx3dconnector_connector2388000_S1'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['DECLx3dconnector_connector3389000_S1'] = function() {
	this.set_startnode = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector3389000_S1', 'startnode', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.startnode_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector3389000_S1', 'startnode');
	};
	this.set_startnode(new SFNode());
	this.set_endnode = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector3389000_S1', 'endnode', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.endnode_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector3389000_S1', 'endnode');
	};
	this.set_endnode(new SFNode());
	this.set_connectornode = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector3389000_S1', 'connectornode', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.connectornode_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector3389000_S1', 'connectornode');
	};
	this.set_connectornode(new SFNode());
	this.set_startpoint = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector3389000_S1', 'startpoint', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.startpoint_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector3389000_S1', 'startpoint');
	};
	this.set_startpoint(undefined);
	this.set_endpoint = function (value) {
		X3DJSON.nodeUtil('DECLx3dconnector_connector3389000_S1', 'endpoint', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.endpoint_changed = function () {
		return X3DJSON.nodeUtil('DECLx3dconnector_connector3389000_S1', 'endpoint');
	};
	this.set_endpoint(undefined);

            ecmascript:
            
	this.recompute = function (startpoint,endpoint){
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

X3DJSON['Obj']['DECLx3dconnector_connector3389000_S1'] = new X3DJSON['Script']['DECLx3dconnector_connector3389000_S1']();
if (typeof X3DJSON['Obj']['DECLx3dconnector_connector3389000_S1'].initialize === "function") X3DJSON['Obj']['DECLx3dconnector_connector3389000_S1'].initialize();
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['PS1'] === 'undefined') {
X3DJSON['ROUTE']['PS1'] = {};
}
if (typeof X3DJSON['ROUTE']['PS1']['translation_changed'] === 'undefined') {
X3DJSON['ROUTE']['PS1']['translation_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['PS1']['translation_changed']['G1'] === 'undefined') {
X3DJSON['ROUTE']['PS1']['translation_changed']['G1'] = {};
}
if (typeof X3DJSON['ROUTE']['PS1']['translation_changed']['G1']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['PS1']['translation_changed']['G1']['set_translation'] = {};
}

X3DJSON['ROUTE']['PS1']['translation_changed']['G1']['set_translation']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'translation_changed');
			X3DJSON.nodeUtil('G1','set_translation',X3DJSON.nodeUtil('PS1','translation_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['translation_changed'] };
X3DJSON['ROUTE']['PS1']['translation_changed']['G1']['set_translation']['FROM'].observe(X3DJSON.nodeUtil('PS1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['PS1'] === 'undefined') {
X3DJSON['ROUTE']['PS1'] = {};
}
if (typeof X3DJSON['ROUTE']['PS1']['translation_changed'] === 'undefined') {
X3DJSON['ROUTE']['PS1']['translation_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['PS1']['translation_changed']['G1'] === 'undefined') {
X3DJSON['ROUTE']['PS1']['translation_changed']['G1'] = {};
}
if (typeof X3DJSON['ROUTE']['PS1']['translation_changed']['G1']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['PS1']['translation_changed']['G1']['set_translation'] = {};
}

X3DJSON['ROUTE']['PS1']['translation_changed']['G1']['set_translation']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_translation');
			if (typeof X3DJSON['Obj']['G1'].set_translation === "function") X3DJSON['Obj']['G1'].set_translation(X3DJSON.nodeUtil('G1','set_translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_translation'] };
X3DJSON['ROUTE']['PS1']['translation_changed']['G1']['set_translation']['TO'].observe(X3DJSON.nodeUtil('G1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['PS2'] === 'undefined') {
X3DJSON['ROUTE']['PS2'] = {};
}
if (typeof X3DJSON['ROUTE']['PS2']['translation_changed'] === 'undefined') {
X3DJSON['ROUTE']['PS2']['translation_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['PS2']['translation_changed']['G2'] === 'undefined') {
X3DJSON['ROUTE']['PS2']['translation_changed']['G2'] = {};
}
if (typeof X3DJSON['ROUTE']['PS2']['translation_changed']['G2']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['PS2']['translation_changed']['G2']['set_translation'] = {};
}

X3DJSON['ROUTE']['PS2']['translation_changed']['G2']['set_translation']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'translation_changed');
			X3DJSON.nodeUtil('G2','set_translation',X3DJSON.nodeUtil('PS2','translation_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['translation_changed'] };
X3DJSON['ROUTE']['PS2']['translation_changed']['G2']['set_translation']['FROM'].observe(X3DJSON.nodeUtil('PS2'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['PS2'] === 'undefined') {
X3DJSON['ROUTE']['PS2'] = {};
}
if (typeof X3DJSON['ROUTE']['PS2']['translation_changed'] === 'undefined') {
X3DJSON['ROUTE']['PS2']['translation_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['PS2']['translation_changed']['G2'] === 'undefined') {
X3DJSON['ROUTE']['PS2']['translation_changed']['G2'] = {};
}
if (typeof X3DJSON['ROUTE']['PS2']['translation_changed']['G2']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['PS2']['translation_changed']['G2']['set_translation'] = {};
}

X3DJSON['ROUTE']['PS2']['translation_changed']['G2']['set_translation']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_translation');
			if (typeof X3DJSON['Obj']['G2'].set_translation === "function") X3DJSON['Obj']['G2'].set_translation(X3DJSON.nodeUtil('G2','set_translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_translation'] };
X3DJSON['ROUTE']['PS2']['translation_changed']['G2']['set_translation']['TO'].observe(X3DJSON.nodeUtil('G2'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['PS3'] === 'undefined') {
X3DJSON['ROUTE']['PS3'] = {};
}
if (typeof X3DJSON['ROUTE']['PS3']['translation_changed'] === 'undefined') {
X3DJSON['ROUTE']['PS3']['translation_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['PS3']['translation_changed']['G3'] === 'undefined') {
X3DJSON['ROUTE']['PS3']['translation_changed']['G3'] = {};
}
if (typeof X3DJSON['ROUTE']['PS3']['translation_changed']['G3']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['PS3']['translation_changed']['G3']['set_translation'] = {};
}

X3DJSON['ROUTE']['PS3']['translation_changed']['G3']['set_translation']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'translation_changed');
			X3DJSON.nodeUtil('G3','set_translation',X3DJSON.nodeUtil('PS3','translation_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['translation_changed'] };
X3DJSON['ROUTE']['PS3']['translation_changed']['G3']['set_translation']['FROM'].observe(X3DJSON.nodeUtil('PS3'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['PS3'] === 'undefined') {
X3DJSON['ROUTE']['PS3'] = {};
}
if (typeof X3DJSON['ROUTE']['PS3']['translation_changed'] === 'undefined') {
X3DJSON['ROUTE']['PS3']['translation_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['PS3']['translation_changed']['G3'] === 'undefined') {
X3DJSON['ROUTE']['PS3']['translation_changed']['G3'] = {};
}
if (typeof X3DJSON['ROUTE']['PS3']['translation_changed']['G3']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['PS3']['translation_changed']['G3']['set_translation'] = {};
}

X3DJSON['ROUTE']['PS3']['translation_changed']['G3']['set_translation']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_translation');
			if (typeof X3DJSON['Obj']['G3'].set_translation === "function") X3DJSON['Obj']['G3'].set_translation(X3DJSON.nodeUtil('G3','set_translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_translation'] };
X3DJSON['ROUTE']['PS3']['translation_changed']['G3']['set_translation']['TO'].observe(X3DJSON.nodeUtil('G3'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['PS4'] === 'undefined') {
X3DJSON['ROUTE']['PS4'] = {};
}
if (typeof X3DJSON['ROUTE']['PS4']['translation_changed'] === 'undefined') {
X3DJSON['ROUTE']['PS4']['translation_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['PS4']['translation_changed']['G4'] === 'undefined') {
X3DJSON['ROUTE']['PS4']['translation_changed']['G4'] = {};
}
if (typeof X3DJSON['ROUTE']['PS4']['translation_changed']['G4']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['PS4']['translation_changed']['G4']['set_translation'] = {};
}

X3DJSON['ROUTE']['PS4']['translation_changed']['G4']['set_translation']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'translation_changed');
			X3DJSON.nodeUtil('G4','set_translation',X3DJSON.nodeUtil('PS4','translation_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['translation_changed'] };
X3DJSON['ROUTE']['PS4']['translation_changed']['G4']['set_translation']['FROM'].observe(X3DJSON.nodeUtil('PS4'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['PS4'] === 'undefined') {
X3DJSON['ROUTE']['PS4'] = {};
}
if (typeof X3DJSON['ROUTE']['PS4']['translation_changed'] === 'undefined') {
X3DJSON['ROUTE']['PS4']['translation_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['PS4']['translation_changed']['G4'] === 'undefined') {
X3DJSON['ROUTE']['PS4']['translation_changed']['G4'] = {};
}
if (typeof X3DJSON['ROUTE']['PS4']['translation_changed']['G4']['set_translation'] === 'undefined') {
X3DJSON['ROUTE']['PS4']['translation_changed']['G4']['set_translation'] = {};
}

X3DJSON['ROUTE']['PS4']['translation_changed']['G4']['set_translation']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_translation');
			if (typeof X3DJSON['Obj']['G4'].set_translation === "function") X3DJSON['Obj']['G4'].set_translation(X3DJSON.nodeUtil('G4','set_translation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_translation'] };
X3DJSON['ROUTE']['PS4']['translation_changed']['G4']['set_translation']['TO'].observe(X3DJSON.nodeUtil('G4'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['G1'] === 'undefined') {
X3DJSON['ROUTE']['G1'] = {};
}
if (typeof X3DJSON['ROUTE']['G1']['translation_changed'] === 'undefined') {
X3DJSON['ROUTE']['G1']['translation_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['G1']['translation_changed']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1'] === 'undefined') {
X3DJSON['ROUTE']['G1']['translation_changed']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1'] = {};
}
if (typeof X3DJSON['ROUTE']['G1']['translation_changed']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1']['set_startpoint'] === 'undefined') {
X3DJSON['ROUTE']['G1']['translation_changed']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1']['set_startpoint'] = {};
}

X3DJSON['ROUTE']['G1']['translation_changed']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1']['set_startpoint']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'translation_changed');
			X3DJSON.nodeUtil('DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1','set_startpoint',X3DJSON.nodeUtil('G1','translation_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['translation_changed'] };
X3DJSON['ROUTE']['G1']['translation_changed']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1']['set_startpoint']['FROM'].observe(X3DJSON.nodeUtil('G1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['G1'] === 'undefined') {
X3DJSON['ROUTE']['G1'] = {};
}
if (typeof X3DJSON['ROUTE']['G1']['translation_changed'] === 'undefined') {
X3DJSON['ROUTE']['G1']['translation_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['G1']['translation_changed']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1'] === 'undefined') {
X3DJSON['ROUTE']['G1']['translation_changed']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1'] = {};
}
if (typeof X3DJSON['ROUTE']['G1']['translation_changed']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1']['set_startpoint'] === 'undefined') {
X3DJSON['ROUTE']['G1']['translation_changed']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1']['set_startpoint'] = {};
}

X3DJSON['ROUTE']['G1']['translation_changed']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1']['set_startpoint']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_startpoint');
			if (typeof X3DJSON['Obj']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1'].set_startpoint === "function") X3DJSON['Obj']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1'].set_startpoint(X3DJSON.nodeUtil('DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1','set_startpoint'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_startpoint'] };
X3DJSON['ROUTE']['G1']['translation_changed']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1']['set_startpoint']['TO'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['G2'] === 'undefined') {
X3DJSON['ROUTE']['G2'] = {};
}
if (typeof X3DJSON['ROUTE']['G2']['translation_changed'] === 'undefined') {
X3DJSON['ROUTE']['G2']['translation_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['G2']['translation_changed']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1'] === 'undefined') {
X3DJSON['ROUTE']['G2']['translation_changed']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1'] = {};
}
if (typeof X3DJSON['ROUTE']['G2']['translation_changed']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1']['set_endpoint'] === 'undefined') {
X3DJSON['ROUTE']['G2']['translation_changed']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1']['set_endpoint'] = {};
}

X3DJSON['ROUTE']['G2']['translation_changed']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1']['set_endpoint']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'translation_changed');
			X3DJSON.nodeUtil('DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1','set_endpoint',X3DJSON.nodeUtil('G2','translation_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['translation_changed'] };
X3DJSON['ROUTE']['G2']['translation_changed']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1']['set_endpoint']['FROM'].observe(X3DJSON.nodeUtil('G2'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['G2'] === 'undefined') {
X3DJSON['ROUTE']['G2'] = {};
}
if (typeof X3DJSON['ROUTE']['G2']['translation_changed'] === 'undefined') {
X3DJSON['ROUTE']['G2']['translation_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['G2']['translation_changed']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1'] === 'undefined') {
X3DJSON['ROUTE']['G2']['translation_changed']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1'] = {};
}
if (typeof X3DJSON['ROUTE']['G2']['translation_changed']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1']['set_endpoint'] === 'undefined') {
X3DJSON['ROUTE']['G2']['translation_changed']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1']['set_endpoint'] = {};
}

X3DJSON['ROUTE']['G2']['translation_changed']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1']['set_endpoint']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_endpoint');
			if (typeof X3DJSON['Obj']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1'].set_endpoint === "function") X3DJSON['Obj']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1'].set_endpoint(X3DJSON.nodeUtil('DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1','set_endpoint'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_endpoint'] };
X3DJSON['ROUTE']['G2']['translation_changed']['DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1']['set_endpoint']['TO'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['G1'] === 'undefined') {
X3DJSON['ROUTE']['G1'] = {};
}
if (typeof X3DJSON['ROUTE']['G1']['translation_changed'] === 'undefined') {
X3DJSON['ROUTE']['G1']['translation_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['G1']['translation_changed']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1'] === 'undefined') {
X3DJSON['ROUTE']['G1']['translation_changed']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1'] = {};
}
if (typeof X3DJSON['ROUTE']['G1']['translation_changed']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1']['set_startpoint'] === 'undefined') {
X3DJSON['ROUTE']['G1']['translation_changed']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1']['set_startpoint'] = {};
}

X3DJSON['ROUTE']['G1']['translation_changed']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1']['set_startpoint']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'translation_changed');
			X3DJSON.nodeUtil('DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1','set_startpoint',X3DJSON.nodeUtil('G1','translation_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['translation_changed'] };
X3DJSON['ROUTE']['G1']['translation_changed']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1']['set_startpoint']['FROM'].observe(X3DJSON.nodeUtil('G1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['G1'] === 'undefined') {
X3DJSON['ROUTE']['G1'] = {};
}
if (typeof X3DJSON['ROUTE']['G1']['translation_changed'] === 'undefined') {
X3DJSON['ROUTE']['G1']['translation_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['G1']['translation_changed']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1'] === 'undefined') {
X3DJSON['ROUTE']['G1']['translation_changed']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1'] = {};
}
if (typeof X3DJSON['ROUTE']['G1']['translation_changed']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1']['set_startpoint'] === 'undefined') {
X3DJSON['ROUTE']['G1']['translation_changed']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1']['set_startpoint'] = {};
}

X3DJSON['ROUTE']['G1']['translation_changed']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1']['set_startpoint']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_startpoint');
			if (typeof X3DJSON['Obj']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1'].set_startpoint === "function") X3DJSON['Obj']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1'].set_startpoint(X3DJSON.nodeUtil('DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1','set_startpoint'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_startpoint'] };
X3DJSON['ROUTE']['G1']['translation_changed']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1']['set_startpoint']['TO'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['G3'] === 'undefined') {
X3DJSON['ROUTE']['G3'] = {};
}
if (typeof X3DJSON['ROUTE']['G3']['translation_changed'] === 'undefined') {
X3DJSON['ROUTE']['G3']['translation_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['G3']['translation_changed']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1'] === 'undefined') {
X3DJSON['ROUTE']['G3']['translation_changed']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1'] = {};
}
if (typeof X3DJSON['ROUTE']['G3']['translation_changed']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1']['set_endpoint'] === 'undefined') {
X3DJSON['ROUTE']['G3']['translation_changed']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1']['set_endpoint'] = {};
}

X3DJSON['ROUTE']['G3']['translation_changed']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1']['set_endpoint']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'translation_changed');
			X3DJSON.nodeUtil('DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1','set_endpoint',X3DJSON.nodeUtil('G3','translation_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['translation_changed'] };
X3DJSON['ROUTE']['G3']['translation_changed']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1']['set_endpoint']['FROM'].observe(X3DJSON.nodeUtil('G3'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['G3'] === 'undefined') {
X3DJSON['ROUTE']['G3'] = {};
}
if (typeof X3DJSON['ROUTE']['G3']['translation_changed'] === 'undefined') {
X3DJSON['ROUTE']['G3']['translation_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['G3']['translation_changed']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1'] === 'undefined') {
X3DJSON['ROUTE']['G3']['translation_changed']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1'] = {};
}
if (typeof X3DJSON['ROUTE']['G3']['translation_changed']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1']['set_endpoint'] === 'undefined') {
X3DJSON['ROUTE']['G3']['translation_changed']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1']['set_endpoint'] = {};
}

X3DJSON['ROUTE']['G3']['translation_changed']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1']['set_endpoint']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_endpoint');
			if (typeof X3DJSON['Obj']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1'].set_endpoint === "function") X3DJSON['Obj']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1'].set_endpoint(X3DJSON.nodeUtil('DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1','set_endpoint'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_endpoint'] };
X3DJSON['ROUTE']['G3']['translation_changed']['DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1']['set_endpoint']['TO'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector2_DECLx3dconnector_connector2_S1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['G1'] === 'undefined') {
X3DJSON['ROUTE']['G1'] = {};
}
if (typeof X3DJSON['ROUTE']['G1']['translation_changed'] === 'undefined') {
X3DJSON['ROUTE']['G1']['translation_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['G1']['translation_changed']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1'] === 'undefined') {
X3DJSON['ROUTE']['G1']['translation_changed']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1'] = {};
}
if (typeof X3DJSON['ROUTE']['G1']['translation_changed']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1']['set_startpoint'] === 'undefined') {
X3DJSON['ROUTE']['G1']['translation_changed']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1']['set_startpoint'] = {};
}

X3DJSON['ROUTE']['G1']['translation_changed']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1']['set_startpoint']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'translation_changed');
			X3DJSON.nodeUtil('DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1','set_startpoint',X3DJSON.nodeUtil('G1','translation_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['translation_changed'] };
X3DJSON['ROUTE']['G1']['translation_changed']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1']['set_startpoint']['FROM'].observe(X3DJSON.nodeUtil('G1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['G1'] === 'undefined') {
X3DJSON['ROUTE']['G1'] = {};
}
if (typeof X3DJSON['ROUTE']['G1']['translation_changed'] === 'undefined') {
X3DJSON['ROUTE']['G1']['translation_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['G1']['translation_changed']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1'] === 'undefined') {
X3DJSON['ROUTE']['G1']['translation_changed']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1'] = {};
}
if (typeof X3DJSON['ROUTE']['G1']['translation_changed']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1']['set_startpoint'] === 'undefined') {
X3DJSON['ROUTE']['G1']['translation_changed']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1']['set_startpoint'] = {};
}

X3DJSON['ROUTE']['G1']['translation_changed']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1']['set_startpoint']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_startpoint');
			if (typeof X3DJSON['Obj']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1'].set_startpoint === "function") X3DJSON['Obj']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1'].set_startpoint(X3DJSON.nodeUtil('DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1','set_startpoint'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_startpoint'] };
X3DJSON['ROUTE']['G1']['translation_changed']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1']['set_startpoint']['TO'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['G4'] === 'undefined') {
X3DJSON['ROUTE']['G4'] = {};
}
if (typeof X3DJSON['ROUTE']['G4']['translation_changed'] === 'undefined') {
X3DJSON['ROUTE']['G4']['translation_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['G4']['translation_changed']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1'] === 'undefined') {
X3DJSON['ROUTE']['G4']['translation_changed']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1'] = {};
}
if (typeof X3DJSON['ROUTE']['G4']['translation_changed']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1']['set_endpoint'] === 'undefined') {
X3DJSON['ROUTE']['G4']['translation_changed']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1']['set_endpoint'] = {};
}

X3DJSON['ROUTE']['G4']['translation_changed']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1']['set_endpoint']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'translation_changed');
			X3DJSON.nodeUtil('DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1','set_endpoint',X3DJSON.nodeUtil('G4','translation_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['translation_changed'] };
X3DJSON['ROUTE']['G4']['translation_changed']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1']['set_endpoint']['FROM'].observe(X3DJSON.nodeUtil('G4'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['G4'] === 'undefined') {
X3DJSON['ROUTE']['G4'] = {};
}
if (typeof X3DJSON['ROUTE']['G4']['translation_changed'] === 'undefined') {
X3DJSON['ROUTE']['G4']['translation_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['G4']['translation_changed']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1'] === 'undefined') {
X3DJSON['ROUTE']['G4']['translation_changed']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1'] = {};
}
if (typeof X3DJSON['ROUTE']['G4']['translation_changed']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1']['set_endpoint'] === 'undefined') {
X3DJSON['ROUTE']['G4']['translation_changed']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1']['set_endpoint'] = {};
}

X3DJSON['ROUTE']['G4']['translation_changed']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1']['set_endpoint']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_endpoint');
			if (typeof X3DJSON['Obj']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1'].set_endpoint === "function") X3DJSON['Obj']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1'].set_endpoint(X3DJSON.nodeUtil('DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1','set_endpoint'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_endpoint'] };
X3DJSON['ROUTE']['G4']['translation_changed']['DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1']['set_endpoint']['TO'].observe(X3DJSON.nodeUtil('DECLx3dconnector_connector3_DECLx3dconnector_connector3_S1'), config);
