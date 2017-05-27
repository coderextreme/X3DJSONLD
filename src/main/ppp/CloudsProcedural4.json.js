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

X3DJSON['Script']['PixelScript'] = function() {
	this.set_Cumulus = function (value) {
		X3DJSON.nodeUtil('PixelScript', 'Cumulus', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.Cumulus_changed = function () {
		return X3DJSON.nodeUtil('PixelScript', 'Cumulus');
	};
	this.set_Cumulus(new SFNode());
	this.set_Cirrus = function (value) {
		X3DJSON.nodeUtil('PixelScript', 'Cirrus', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.Cirrus_changed = function () {
		return X3DJSON.nodeUtil('PixelScript', 'Cirrus');
	};
	this.set_Cirrus(new SFNode());
	this.set_Fog = function (value) {
		X3DJSON.nodeUtil('PixelScript', 'Fog', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.Fog_changed = function () {
		return X3DJSON.nodeUtil('PixelScript', 'Fog');
	};
	this.set_Fog(new SFNode());

        
ecmascript:



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

	maxscale = 1;

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

	maxscale = 1;

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

maxi = 20;  // number of clouds

maxj = 5; // denotes how many portions affecting the size of the cloud

maxk = 8;  // number of billboards indicating cloud density

sectionradius = 100;  //radius of individual cloud sections





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
this.Cumulus_changed().children[i] = newNode[0];


   }

}

;

	this.cirrus = function ()

{

maxi = 2;  // number of clouds

maxj = 5; // denotes how many portions affecting the size of the cloud

maxk = 8;  // number of billboards indicating cloud density

sectionradius = 1000;  //radius of individual cloud sections





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
this.Cirrus_changed().children[i] = newNode[0];

  }

}


;

	this.initialize = function ()

{

this.cumulus();

this.cirrus();
};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['PixelScript'] = new X3DJSON['Script']['PixelScript']();
if (typeof X3DJSON['Obj']['PixelScript'].initialize === "function") X3DJSON['Obj']['PixelScript'].initialize();

