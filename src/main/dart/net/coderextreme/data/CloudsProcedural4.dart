// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('3.2'),
      head_ : 
        head(
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('CloudsProcedural4.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('X3D utilizing ecmascript to develop quasi volumetric 3D clouds from png image textured billboard nodes.')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Capt Darren W. Murphy')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('1 November 2007')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('14 January 2014')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://savage.nps.edu/Savage/Environment/Atmosphere/CloudsProcedural4.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit, https://www.web3d.org/x3d/content/README.X3D-Edit.html')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('../../license.html')),

            meta(
              name_ : SFString('TODO'),
              content_ : SFString('fix links'))]),
      Scene_ : 
        Scene(
          /*A png image file for the cloud texture must be designated in the ecmascript node.*/
          children_ : [
            Viewpoint(
              description_ : SFString('Main'),
              jump_ : false,
              orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.57)]),
              position_ : SFVec3f([SFDouble(50000), SFDouble(1000), SFDouble(42000)])),

            Viewpoint(
              description_ : SFString('Light House Tower'),
              jump_ : false,
              orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.3)]),
              position_ : SFVec3f([SFDouble(45000), SFDouble(1290), SFDouble(44000)])),

            Viewpoint(
              description_ : SFString('centerWest'),
              jump_ : false,
              orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(2.5)]),
              position_ : SFVec3f([SFDouble(48000), SFDouble(1000), SFDouble(20000)])),

            Background(
              groundColor_ : MFColor([SFColor(0), SFColor(0), SFColor(1)]),
              skyColor_ : MFColor([SFColor(0), SFColor(0), SFColor(1)])),

            DirectionalLight(
              ambientIntensity_ : 1,
              direction_ : SFVec3f([SFDouble(-1), SFDouble(0), SFDouble(0)]),
              global_ : true),

            Group(
              DEF_ : SFString('Terrain'),
              children_ : [
                Transform(
                  scale_ : SFVec3f([SFDouble(50), SFDouble(50), SFDouble(50)]),
                  translation_ : SFVec3f([SFDouble(25000), SFDouble(0), SFDouble(25000)]),
                  children_ : [
                    Inline(
                      url_ : MFString([SFString("MontereyBayLargeMesh.x3d"), SFString("https://savage.nps.edu/Savage/Environment/Atmosphere/MontereyBayLargeMesh.x3d"), SFString("MontereyBayLargeMesh.wrl"), SFString("https://savage.nps.edu/Savage/Environment/Atmosphere/MontereyBayLargeMesh.wrl")]))]),

                Transform(
                  rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(1.57)]),
                  translation_ : SFVec3f([SFDouble(25000), SFDouble(0), SFDouble(25000)]),
                  children_ : [
                    Shape(
                      geometry_ : 
                        Rectangle2D(
                          size_ : SFVec2f([SFDouble(77000), SFDouble(55000)])),
                      appearance_ : 
                        Appearance(
                          texture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("ocean.png"), SFString("https://savage.nps.edu/Savage/Environment/Atmosphere/ocean.png")]))))])]),

            Group(
              DEF_ : SFString('Placemarks'),
              children_ : [
                Transform(
                  scale_ : SFVec3f([SFDouble(50), SFDouble(50), SFDouble(50)]),
                  translation_ : SFVec3f([SFDouble(45000), SFDouble(30), SFDouble(44000)]),
                  children_ : [
                    Inline(
                      url_ : MFString([SFString("Lighthouse.x3d"), SFString("https://savage.nps.edu/Savage/Environment/Atmosphere/Lighthouse.x3d"), SFString("Lighthouse.wrl"), SFString("https://savage.nps.edu/Savage/Environment/Atmosphere/Lighthouse.wrl")]))])]),

            Group(
              DEF_ : SFString('Clouds'),
              children_ : [
                Transform(
                  DEF_ : SFString('Cumulus')),

                Transform(
                  DEF_ : SFString('Cirrus')),

                Transform(
                  DEF_ : SFString('Fog')),

                Script(
                  DEF_ : SFString('PixelScript'),
                  directOutput_ : true,
                  field_ : [
                    field(
                      type_ : SFString("SFNode"),
                      name_ : SFString('Cumulus'),
                      accessType_ : SFString("initializeOnly"),
                      children_ : [
                        Transform(
                          USE_ : SFString('Cumulus'))]),

                    field(
                      type_ : SFString("SFNode"),
                      name_ : SFString('Cirrus'),
                      accessType_ : SFString("initializeOnly"),
                      children_ : [
                        Transform(
                          USE_ : SFString('Cirrus'))]),

                    field(
                      type_ : SFString("SFNode"),
                      name_ : SFString('Fog'),
                      accessType_ : SFString("initializeOnly")),
                  ],
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
})),

                DirectionalLight(
                  ambientIntensity_ : 1,
                  color_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0)]),
                  direction_ : SFVec3f([SFDouble(-1), SFDouble(-1), SFDouble(0)]),
                  global_ : true)])]));
void main() { exit(0); }
