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
if (typeof X3DJSON['Scene../data/CloudsProcedural4.json'] === 'undefined') {
	X3DJSON['Scene../data/CloudsProcedural4.json'] = {};
}

if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}
if (typeof X3DJSON['Script']['Scene'] === 'undefined') {
X3DJSON['Script']['Scene'] = {};
}
if (typeof X3DJSON['Script']['Scene']['../data/CloudsProcedural4.json'] === 'undefined') {
X3DJSON['Script']['Scene']['../data/CloudsProcedural4.json'] = {};
}

X3DJSON['Script']['Scene']['../data/CloudsProcedural4.json']['PixelScript'] = function() {
	this.set_Cumulus = function (value) {
		try {
			this.proxy.Cumulus = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting Cumulus '+e);
			console.error('Problems setting Cumulus',e);
		}
	};
	this.Cumulus_changed = function () {
		var value = this.Cumulus;
		return value;
	};
	try {
		this.Cumulus = X3DJSON.nodeUtil("Scene","Cumulus");
	} catch (e) {
		console.log('Problems setting Cumulus '+e);
		console.error('Problems setting Cumulus',e);
	}
	this.set_Cirrus = function (value) {
		try {
			this.proxy.Cirrus = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting Cirrus '+e);
			console.error('Problems setting Cirrus',e);
		}
	};
	this.Cirrus_changed = function () {
		var value = this.Cirrus;
		return value;
	};
	try {
		this.Cirrus = X3DJSON.nodeUtil("Scene","Cirrus");
	} catch (e) {
		console.log('Problems setting Cirrus '+e);
		console.error('Problems setting Cirrus',e);
	}
	this.set_Fog = function (value) {
		try {
			this.proxy.Fog = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
		} catch (e) {
			console.log('Problems setting Fog '+e);
			console.error('Problems setting Fog',e);
		}
	};
	this.Fog_changed = function () {
		var value = this.Fog;
		return value;
	};
	try {
		this.Fog = new SFNode();
	} catch (e) {
		console.log('Problems setting Fog '+e);
		console.error('Problems setting Fog',e);
	}


ecmascript:
Cirrus.children = [];


	this.cumulustranslation = function () // These values designate the boundary location of the cloud
{
	X = 50000*Math.random();          //  X horizontal range
	Y = 1000 + 300*Math.random();	 //  Y vertical base + range
	Z = 50000*Math.random();         // z horizontal range

	randomt = new String(X+' '+Y+' '+Z);

	return randomt;
	
}


;

	this.cumulusscale = function () // these values scale a cloud within a designated size
{

	var maxscale = 1;

	scale = Math.round(9+maxscale*Math.random());
	X = 1.5*scale;
	Y = scale;
	Z = scale;

	randomscale = new String(X+' '+Y+' '+Z);

	return randomscale;
	
}

;

	this.cirrustranslation = function () // These values designate the boundary location of the cloud
{
	X = 50000*Math.random();          //  X horizontal range
	Y = 8000 + 1000*Math.random();	 //  Y vertical base + range
	Z = 50000*Math.random();         // z horizontal range

	randomt = new String(X+' '+Y+' '+Z);

	return randomt;
	
}


;

	this.cirrusscale = function () // these values scale a cloud within a designated size
{

	var maxscale = 1;

	scale = Math.round(9+maxscale*Math.random());
	X = 1.5*scale;
	Y = 2*Math.random();
	Z = 1.5*scale;

	randomscale = new String(X+' '+Y+' '+Z);

	return randomscale;
	
}

;

	this.cumulussectiontranslation = function () // These random values place another portion of this.cumulus type cloud
{

	randomtheta = 6.28319*Math.random();
	randomphi = .7854*Math.random();
	randomradius = 90 + 5*Math.random();//the first whole number should be close to the sectionradius

	X = randomradius*Math.cos(randomtheta)*Math.sin(randomphi);
	Z = randomradius*Math.sin(randomtheta)*Math.sin(randomphi);
	Y = randomradius*Math.cos(randomphi);
	

	randomt = new String(X+' '+Y+' '+Z);

	return randomt;
	
}
;

	this.cirrussectiontranslation = function () // These random values place another portion of this.cirrus type cloud
{

	randomtheta = 6.28319*Math.random();
	randomphi = .7854*Math.random();
	randomradius = 90 + 5*Math.random();//the first whole number should be close to the sectionradius

	X = randomradius*Math.cos(randomtheta)*Math.sin(randomphi);
	Z = randomradius*Math.sin(randomtheta)*Math.sin(randomphi);
	Y = randomradius*Math.cos(randomphi);
	

	randomt = new String(X+' '+Y+' '+Z);

	return randomt;
	
}

;

	this.rotation = function () // This random value is for the billboard this.rotation not used in this script
{


	radians = 6.28*Math.random();

	randomr = new String('0 0 1 ' + radians );
	
	
	return randomr;
	
}
;

	this.cumulus = function ()
{

var maxi = 20;  // number of clouds

var maxj = 5; // denotes how many portions affecting the size of the cloud

var maxk = 8;  // number of billboards indicating cloud density

var sectionradius = 100;  //radius of individual cloud sections





for (var i=0; i < maxi; i++) 
{



CloudStringA = '	Transform {		' +
'    scale '+ this.cumulusscale() + '               	' +
'    translation '+ this.cumulustranslation() + '    ' +    // cloud placement
'    children [	                                ';


CloudStringB = new Array();
CloudStringF = new Array();

   	for (var j=0; j < maxj; j++)
   	{

	radius = 0;

	CloudStringB[j]= '  Transform {		    	       ' +
	'    translation '+ this.cumulussectiontranslation() + '    ' +     // section placement
	'    children [	                                       ';

	
	CloudStringC = new Array();
	image = new String();

      		for (var k=1; k < maxk; k++)  // maxk value denotes how many textured billboards make up the cloud 
      		{


		randomtheta = 6.28319*Math.random();
		randomphi = 1.57079*Math.random();
		radius = radius+(sectionradius/maxk); // radius incremental steps based on billow radius and max billboards

		X = radius*Math.cos(randomtheta)*Math.sin(randomphi);
		Z = radius*Math.sin(randomtheta)*Math.sin(randomphi);
		Y = radius*Math.cos(randomphi);


		if (Y <= 30) //cloud shading and lighting control
  	{	
	image = ' "CloudTexture1_5.png" "https://savage.nps.edu/Savage/Environment/Spheretexture.png" ';
  	}

  		else
  	{	
	image = ' "CloudTexture1_4.png" "https://savage.nps.edu/Savage/Environment/Spheretexture.png" ';
  	}

	
		
		Billboardtranslation = new String(X+' '+Y+' '+Z);

		CloudStringC[k] = '	Transform {		                ' +
		'            translation '+ Billboardtranslation   + '          ' +     // random billboard placement within radius designated above
		'	  children [	                                        ' +
		'	      Billboard {	                                ' +
		'	        axisOfRotation 0 0 0	                        ' +     // 0 0 0 designates this.rotation on all axis
		'	        children [	                                ' +
		'	            Transform {	                		' +
		'	              this.rotation  0 0 0 0 		        ' +     // a this.rotation of the individual billboards can be defined
		'	              children [	                        ' +
		'	                  Shape {	                        ' +
		'	                    appearance Appearance {	        ' +
		'				material Material {		' +
		'				                }  		' +
		'	                      texture ImageTexture {	        ' +
		'	                        url [ ' + image + ' ]           ' + 
		'	                      }	                                ' +
		'	                    }	                                ' +
		'	                    geometry IndexedFaceSet {	        ' +     // define type of geometry to texture
		'	                      coordIndex [ 0, 1, 2, 3 ]	        ' +
		'			      solid FALSE		        ' +
		'	                      coord Coordinate {	        ' +
		'	                        point [ 50 50 0,	        ' +     // define size of the geometry. Here 100 meter 2D square.
		'	                                50 -50 0,	        ' +
		'	                               -50 -50 0,	        ' +
		'	                               -50 50 0 ]	        ' +
		'	                      }	                                ' +
		'	                    }	                                ' +
		'	                  }	                                ' +
		'	              ]	                                        ' +
		'	            }	                                        ' +
		'	       ]	                                        ' +
		'	   }	                                                ' +
		'      ]	                                                ' +
		'     }	                                                        ';      
		

		}

	CloudStringD = CloudStringC.join(' ');

	
	CloudStringE = '   ]	                 ' +
	'	}	                         ';

	CloudStringF[j] = CloudStringB[j] + CloudStringD +CloudStringE;


	}

CloudStringG = CloudStringF.join(' ');

CloudStringH = '      ]	                                        ' +
'     }	                                                        ' +
'#########################################################      ';

CloudString = CloudStringA + CloudStringG + CloudStringH;



newNode = new MFNode();
X3DJSON.nodeUtil("Scene","Cumulus", "children")[i] = newNode[0];


   }

}
;

	this.cirrus = function ()

{

var maxi = 2;  // number of clouds

var maxj = 5; // denotes how many portions affecting the size of the cloud

var maxk = 8;  // number of billboards indicating cloud density

var sectionradius = 1000;  //radius of individual cloud sections





for (var i=0; i < maxi; i++) 
{



CloudStringA = '	Transform {		 ' +
'    scale '+ this.cirrusscale() + '               	 ' +
'    translation '+ this.cirrustranslation() + '      ' +    // cloud placement
'    children [	                                 ';


CloudStringB = new Array();
CloudStringF = new Array();

   	for (var j=0; j < maxj; j++)
   	{

	radius = 0;

	CloudStringB[j]= '  Transform {		    	      ' +
	'    translation '+ this.cirrussectiontranslation() + '    ' +     // section placement
	'    children [	                                      ';

	
	CloudStringC = new Array();

      		for (var k=1; k < maxk; k++)  // maxk value denotes how many textured billboards make up the cloud 
      		{


		randomtheta = 6.28319*Math.random();
		randomphi = 1.57079*Math.random();
		radius = radius+(sectionradius/maxk); // radius incremental steps based on section radius and max billboards

		X = radius*Math.cos(randomtheta)*Math.sin(randomphi);
		Z = radius*Math.sin(randomtheta)*Math.sin(randomphi);
		Y = radius*Math.cos(randomphi);
		
		Billboardtranslation = new String(X+' '+Y+' '+Z);

		CloudStringC[k] = '	Transform {		                ' +
		'            translation '+ Billboardtranslation   + '          ' +     // random billboard placement within radius designated above
		'	  children [	                                        ' +
		'	      Billboard {	                                ' +
		'	        axisOfRotation 0 0 0	                        ' +     // 0 0 0 designates this.rotation on all axis
		'	        children [	                                ' +
		'	            Transform {	                		' +
		'	              this.rotation '  + this.rotation() + '	        ' +
		'	              children [	                        ' +
		'	                  Shape {	                        ' +
		'	                    appearance Appearance {	        ' +
		'			    material Material {			' +
		'			    }					' +
 		'	                      texture ImageTexture {	        ' +
		'	                        url ["cloudtexture3.png" "https://savage.nps.edu/Savage/Environment/cloudtexture1_4.png" ] ' +
		'	                      }	                                ' +
		'	                    }	                                ' +
		'	                    geometry IndexedFaceSet {	        ' +     // define type of geometry to texture
		'	                      coordIndex [ 0, 1, 2, 3 ]	        ' +
		'			      solid FALSE		        ' +
		'	                      coord Coordinate {	        ' +
		'	                        point [ 500 500 0,	        ' +     // define size of the geometry. Here 100 meter 2D square.
		'	                                500 -500 0,	        ' +
		'	                               -500 -500 0,	        ' +
		'	                               -500 500 0 ]	        ' +
		'	                      }	                                ' +
		'	                    }	                                ' +
		'	                  }	                                ' +
		'	              ]	                                        ' +
		'	            }	                                        ' +
		'	       ]	                                        ' +
		'	   }	                                                ' +
		'      ]	                                                ' +
		'     }	                                                        ';      
		

		}

	CloudStringD = CloudStringC.join(' ');

	CloudStringE = '   ]	                 ' +
	'	}	                         ';

	CloudStringF[j] = CloudStringB[j] + CloudStringD +CloudStringE;


	}

CloudStringG = CloudStringF.join(' ');

CloudStringH = '      ]	                                        ' +
'     }	                                                        ' +
'#########################################################      ';

CloudString = CloudStringA + CloudStringG + CloudStringH;



newNode = new MFNode();
X3DJSON.nodeUtil("Scene","Cirrus", "children")[i] = newNode[0];

  }

}

;

	this.initialize = function ()

{

this.cumulus();

this.cirrus();
}

;

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/CloudsProcedural4.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/CloudsProcedural4.json'] = {};
}

X3DJSON['Obj']['Scene']['../data/CloudsProcedural4.json']['PixelScript'] = new X3DJSON['Script']['Scene']['../data/CloudsProcedural4.json']['PixelScript']();
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}
if (typeof X3DJSON['Obj']['Scene'] === 'undefined') {
X3DJSON['Obj']['Scene'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/CloudsProcedural4.json'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/CloudsProcedural4.json'] = {};
}
if (typeof X3DJSON['Obj']['Scene']['../data/CloudsProcedural4.json']['PixelScript'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/CloudsProcedural4.json']['PixelScript'] = {};
}

if (typeof X3DJSON['Obj']['Scene']['../data/CloudsProcedural4.json']['PixelScript']['ACTION'] === 'undefined') {
X3DJSON['Obj']['Scene']['../data/CloudsProcedural4.json']['PixelScript']['ACTION'] = {};
X3DJSON['Obj']['Scene']['../data/CloudsProcedural4.json']['PixelScript'].proxy = X3DJSON.createProxy(X3DJSON['Obj']['Scene']['../data/CloudsProcedural4.json']['PixelScript']['ACTION'],X3DJSON['Obj']['Scene']['../data/CloudsProcedural4.json']['PixelScript']);
}
if (typeof X3DJSON['Obj']['Scene']['../data/CloudsProcedural4.json']['PixelScript'].initialize === "function") X3DJSON['Obj']['Scene']['../data/CloudsProcedural4.json']['PixelScript'].initialize();

