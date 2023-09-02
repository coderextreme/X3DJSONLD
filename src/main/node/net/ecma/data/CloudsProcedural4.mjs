'use strict';
var X3D = require('./x3d.mjs');
try {
	var fs = require('fs');
} catch (e) {
console.log("Problems loading fs. On browser?",e);
}
var SFString = require('./x3d.mjs');
var SFNode = require('./x3d.mjs');
var head = require('./x3d.mjs');
var MFNode = require('./x3d.mjs');
var meta = require('./x3d.mjs');
var Scene = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var DirectionalLight = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Inline = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Rectangle2D = require('./x3d.mjs');
var SFVec2f = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var field = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.2"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("CloudsProcedural4.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("X3D utilizing ecmascript to develop quasi volumetric 3D clouds from png image textured billboard nodes.")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Capt Darren W. Murphy")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("1 November 2007")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("14 January 2014")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://savage.nps.edu/Savage/Environment/Atmosphere/CloudsProcedural4.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit, https://www.web3d.org/x3d/content/README.X3D-Edit.html")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../../license.html")}),

            new meta({
              name : new SFString("TODO"),
              content : new SFString("fix links")})])})),
      Scene : new SFNode(
        new Scene({
          /*A png image file for the cloud texture must be designated in the ecmascript node.*/
          children : new MFNode([
            new Viewpoint({
              description : new SFString("Main"),
              jump : new SFBool(false),
              orientation : new SFRotation([0,1,0,1.57]),
              position : new SFVec3f([50000,1000,42000])}),

            new Viewpoint({
              description : new SFString("Light House Tower"),
              jump : new SFBool(false),
              orientation : new SFRotation([0,1,0,1.3]),
              position : new SFVec3f([45000,1290,44000])}),

            new Viewpoint({
              description : new SFString("centerWest"),
              jump : new SFBool(false),
              orientation : new SFRotation([0,1,0,2.5]),
              position : new SFVec3f([48000,1000,20000])}),

            new Background({
              groundColor : new MFColor([0,0,1]),
              skyColor : new MFColor([0,0,1])}),

            new DirectionalLight({
              ambientIntensity : new SFFloat(1),
              direction : new SFVec3f([-1,0,0]),
              global : new SFBool(true)}),

            new Group({
              DEF : new SFString("Terrain"),
              children : new MFNode([
                new Transform({
                  scale : new SFVec3f([50,50,50]),
                  translation : new SFVec3f([25000,0,25000]),
                  children : new MFNode([
                    new Inline({
                      url : new MFString(["MontereyBayLargeMesh.x3d","https://savage.nps.edu/Savage/Environment/Atmosphere/MontereyBayLargeMesh.x3d","MontereyBayLargeMesh.wrl","https://savage.nps.edu/Savage/Environment/Atmosphere/MontereyBayLargeMesh.wrl"])})])}),

                new Transform({
                  rotation : new SFRotation([1,0,0,1.57]),
                  translation : new SFVec3f([25000,0,25000]),
                  child : new SFNode(
                    new Shape({
                      geometry : new SFNode(
                        new Rectangle2D({
                          size : new SFVec2f([77000,55000])})),
                      appearance : new SFNode(
                        new Appearance({
                          texture : new SFNode(
                            new ImageTexture({
                              url : new MFString(["ocean.png","https://savage.nps.edu/Savage/Environment/Atmosphere/ocean.png"])}))}))}))})])}),

            new Group({
              DEF : new SFString("Placemarks"),
              children : new MFNode([
                new Transform({
                  scale : new SFVec3f([50,50,50]),
                  translation : new SFVec3f([45000,30,44000]),
                  children : new MFNode([
                    new Inline({
                      url : new MFString(["Lighthouse.x3d","https://savage.nps.edu/Savage/Environment/Atmosphere/Lighthouse.x3d","Lighthouse.wrl","https://savage.nps.edu/Savage/Environment/Atmosphere/Lighthouse.wrl"])})])})])}),

            new Group({
              DEF : new SFString("Clouds"),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("Cumulus")}),

                new Transform({
                  DEF : new SFString("Cirrus")}),

                new Transform({
                  DEF : new SFString("Fog")}),

                new Script({
                  DEF : new SFString("PixelScript"),
                  directOutput : new SFBool(true),
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("Cumulus"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      children : new MFNode([
                        new Transform({
                          USE : new SFString("Cumulus")})])}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("Cirrus"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      children : new MFNode([
                        new Transform({
                          USE : new SFString("Cirrus")})])}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("Fog"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),
                  ]),
ecmascript:eval (0
Cirrus.children = [];


, function cumulustranslation() // These values designate the boundary location of the cloud
{
	X = 50000*Math.random();          //  X horizontal range
	Y = 1000 + 300*Math.random();	 //  Y vertical base + range
	Z = 50000*Math.random();         // z horizontal range

	randomt = new String(X+' '+Y+' '+Z);

	return randomt;
	
}



, function cumulusscale() // these values scale a cloud within a designated size
{

	var maxscale = 1;

	scale = Math.round(9+maxscale*Math.random());
	X = 1.5*scale;
	Y = scale;
	Z = scale;

	randomscale = new String(X+' '+Y+' '+Z);

	return randomscale;
	
}


, function cirrustranslation() // These values designate the boundary location of the cloud
{
	X = 50000*Math.random();          //  X horizontal range
	Y = 8000 + 1000*Math.random();	 //  Y vertical base + range
	Z = 50000*Math.random();         // z horizontal range

	randomt = new String(X+' '+Y+' '+Z);

	return randomt;
	
}



, function cirrusscale() // these values scale a cloud within a designated size
{

	var maxscale = 1;

	scale = Math.round(9+maxscale*Math.random());
	X = 1.5*scale;
	Y = 2*Math.random();
	Z = 1.5*scale;

	randomscale = new String(X+' '+Y+' '+Z);

	return randomscale;
	
}


, function cumulussectiontranslation() // These random values place another portion of cumulus type cloud
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

, function cirrussectiontranslation() // These random values place another portion of cirrus type cloud
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


, function rotation() // This random value is for the billboard rotation not used in this script
{


	radians = 6.28*Math.random();

	randomr = new String('0 0 1 ' + radians );
	
	
	return randomr;
	
}

, function cumulus()
{

var maxi = 20;  // number of clouds

var maxj = 5; // denotes how many portions affecting the size of the cloud

var maxk = 8;  // number of billboards indicating cloud density

var sectionradius = 100;  //radius of individual cloud sections





for (var i=0; i < maxi; i++) 
{



CloudStringA = '	Transform {		\n' +
'    scale '+ cumulusscale() + '               	\n' +
'    translation '+ cumulustranslation() + '    \n' +    // cloud placement
'    children [	                                \n';


CloudStringB = new Array();
CloudStringF = new Array();

   	for (var j=0; j < maxj; j++)
   	{

	radius = 0;

	CloudStringB[j]= '  Transform {		    	       \n' +
	'    translation '+ cumulussectiontranslation() + '    \n' +     // section placement
	'    children [	                                       \n';

	
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
	image = ' "CloudTexture1_5.png" "https://savage.nps.edu/Savage/Environment/Spheretexture.png" \n';
  	}

  		else
  	{	
	image = ' "CloudTexture1_4.png" "https://savage.nps.edu/Savage/Environment/Spheretexture.png" \n';
  	}

	
		
		Billboardtranslation = new String(X+' '+Y+' '+Z);

		CloudStringC[k] = '	Transform {		                \n' +
		'            translation '+ Billboardtranslation   + '          \n' +     // random billboard placement within radius designated above
		'	  children [	                                        \n' +
		'	      Billboard {	                                \n' +
		'	        axisOfRotation 0 0 0	                        \n' +     // 0 0 0 designates rotation on all axis
		'	        children [	                                \n' +
		'	            Transform {	                		\n' +
		'	              rotation  0 0 0 0 		        \n' +     // a rotation of the individual billboards can be defined
		'	              children [	                        \n' +
		'	                  Shape {	                        \n' +
		'	                    appearance Appearance {	        \n' +
		'				material Material {		\n' +
		'				                }  		\n' +
		'	                      texture ImageTexture {	        \n' +
		'	                        url [ ' + image + ' ]           \n' + 
		'	                      }	                                \n' +
		'	                    }	                                \n' +
		'	                    geometry IndexedFaceSet {	        \n' +     // define type of geometry to texture
		'	                      coordIndex [ 0, 1, 2, 3 ]	        \n' +
		'			      solid FALSE		        \n' +
		'	                      coord Coordinate {	        \n' +
		'	                        point [ 50 50 0,	        \n' +     // define size of the geometry. Here 100 meter 2D square.
		'	                                50 -50 0,	        \n' +
		'	                               -50 -50 0,	        \n' +
		'	                               -50 50 0 ]	        \n' +
		'	                      }	                                \n' +
		'	                    }	                                \n' +
		'	                  }	                                \n' +
		'	              ]	                                        \n' +
		'	            }	                                        \n' +
		'	       ]	                                        \n' +
		'	   }	                                                \n' +
		'      ]	                                                \n' +
		'     }	                                                        \n';      
		

		}

	CloudStringD = CloudStringC.join(' ');

	
	CloudStringE = '   ]	                 \n' +
	'	}	                         \n';

	CloudStringF[j] = CloudStringB[j] + CloudStringD +CloudStringE;


	}

CloudStringG = CloudStringF.join(' ');

CloudStringH = '      ]	                                        \n' +
'     }	                                                        \n' +
'#########################################################      \n';

CloudString = CloudStringA + CloudStringG + CloudStringH;



newNode = Browser.createVrmlFromString(CloudString);
Cumulus.children[i] = newNode[0];


   }

}

, function cirrus()

{

var maxi = 2;  // number of clouds

var maxj = 5; // denotes how many portions affecting the size of the cloud

var maxk = 8;  // number of billboards indicating cloud density

var sectionradius = 1000;  //radius of individual cloud sections





for (var i=0; i < maxi; i++) 
{



CloudStringA = '	Transform {		 \n' +
'    scale '+ cirrusscale() + '               	 \n' +
'    translation '+ cirrustranslation() + '      \n' +    // cloud placement
'    children [	                                 \n';


CloudStringB = new Array();
CloudStringF = new Array();

   	for (var j=0; j < maxj; j++)
   	{

	radius = 0;

	CloudStringB[j]= '  Transform {		    	      \n' +
	'    translation '+ cirrussectiontranslation() + '    \n' +     // section placement
	'    children [	                                      \n';

	
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

		CloudStringC[k] = '	Transform {		                \n' +
		'            translation '+ Billboardtranslation   + '          \n' +     // random billboard placement within radius designated above
		'	  children [	                                        \n' +
		'	      Billboard {	                                \n' +
		'	        axisOfRotation 0 0 0	                        \n' +     // 0 0 0 designates rotation on all axis
		'	        children [	                                \n' +
		'	            Transform {	                		\n' +
		'	              rotation '  + rotation() + '	        \n' +
		'	              children [	                        \n' +
		'	                  Shape {	                        \n' +
		'	                    appearance Appearance {	        \n' +
		'			    material Material {			\n' +
		'			    }					\n' +
 		'	                      texture ImageTexture {	        \n' +
		'	                        url ["cloudtexture3.png" "https://savage.nps.edu/Savage/Environment/cloudtexture1_4.png" ] \n' +
		'	                      }	                                \n' +
		'	                    }	                                \n' +
		'	                    geometry IndexedFaceSet {	        \n' +     // define type of geometry to texture
		'	                      coordIndex [ 0, 1, 2, 3 ]	        \n' +
		'			      solid FALSE		        \n' +
		'	                      coord Coordinate {	        \n' +
		'	                        point [ 500 500 0,	        \n' +     // define size of the geometry. Here 100 meter 2D square.
		'	                                500 -500 0,	        \n' +
		'	                               -500 -500 0,	        \n' +
		'	                               -500 500 0 ]	        \n' +
		'	                      }	                                \n' +
		'	                    }	                                \n' +
		'	                  }	                                \n' +
		'	              ]	                                        \n' +
		'	            }	                                        \n' +
		'	       ]	                                        \n' +
		'	   }	                                                \n' +
		'      ]	                                                \n' +
		'     }	                                                        \n';      
		

		}

	CloudStringD = CloudStringC.join(' ');

	CloudStringE = '   ]	                 \n' +
	'	}	                         \n';

	CloudStringF[j] = CloudStringB[j] + CloudStringD +CloudStringE;


	}

CloudStringG = CloudStringF.join(' ');

CloudStringH = '      ]	                                        \n' +
'     }	                                                        \n' +
'#########################################################      \n';

CloudString = CloudStringA + CloudStringG + CloudStringH;



newNode = Browser.createVrmlFromString(CloudString);
Cirrus.children[i] = newNode[0];

  }

}


, function initialize()

{

cumulus();

cirrus();
})}),

                new DirectionalLight({
                  ambientIntensity : new SFFloat(1),
                  color : new SFColor([1,0,0]),
                  direction : new SFVec3f([-1,-1,0]),
                  global : new SFBool(true)})])})])}))});
console.log(X3D0.toXMLNode());
