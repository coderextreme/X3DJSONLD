####################################################################################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix,
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    meta(content='CloudsProcedural4.x3d',name='title'),
    meta(content='X3D utilizing ecmascript to develop quasi volumetric 3D clouds from png image textured billboard nodes.',name='description'),
    meta(content='Capt Darren W. Murphy',name='creator'),
    meta(content='1 November 2007',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Environment/Atmosphere/CloudsProcedural4.x3d',name='identifier'),
    meta(content='X3D-Edit, https://www.web3d.org/x3d/content/README.X3D-Edit.html',name='generator'),
    meta(content='../../license.html',name='license'),
    meta(content='fix links',name='TODO')]),
  Scene=Scene(
    #  A png image file for the cloud texture must be designated in the ecmascript node. 
    children=[
    Viewpoint(description='Main',jump=False,orientation=(0,1,0,1.57),position=(50000,1000,42000)),
    Viewpoint(description='Light House Tower',jump=False,orientation=(0,1,0,1.3),position=(45000,1290,44000)),
    Viewpoint(description='centerWest',jump=False,orientation=(0,1,0,2.5),position=(48000,1000,20000)),
    Background(groundColor=[(0,0,1)],skyColor=[(0,0,1)]),
    DirectionalLight(ambientIntensity=1,direction=(-1,0,0),global_=True),
    Group(DEF='Terrain',
      children=[
      Transform(scale=(50,50,50),translation=(25000,0,25000),
        children=[
        Inline(url=["MontereyBayLargeMesh.x3d","https://savage.nps.edu/Savage/Environment/Atmosphere/MontereyBayLargeMesh.x3d","MontereyBayLargeMesh.wrl","https://savage.nps.edu/Savage/Environment/Atmosphere/MontereyBayLargeMesh.wrl"])]),
      Transform(rotation=(1,0,0,1.57),translation=(25000,0,25000),
        children=[
        Shape(
          geometry=Rectangle2D(size=(77000,55000)),
          appearance=Appearance(
            texture=ImageTexture(url=["ocean.png","https://savage.nps.edu/Savage/Environment/Atmosphere/ocean.png"])))])]),
    Group(DEF='Placemarks',
      children=[
      Transform(scale=(50,50,50),translation=(45000,30,44000),
        children=[
        Inline(url=["Lighthouse.x3d","https://savage.nps.edu/Savage/Environment/Atmosphere/Lighthouse.x3d","Lighthouse.wrl","https://savage.nps.edu/Savage/Environment/Atmosphere/Lighthouse.wrl"])])]),
    Group(DEF='Clouds',
      children=[
      Transform(DEF='Cumulus'),
      Transform(DEF='Cirrus'),
      Transform(DEF='Fog'),
      Script(DEF='PixelScript',directOutput=True,
        field=[
        field(accessType='initializeOnly',name='Cumulus',type='SFNode',
          children=[
          Transform(USE='Cumulus')]),
        field(accessType='initializeOnly',name='Cirrus',type='SFNode',
          children=[
          Transform(USE='Cirrus')]),
        field(accessType='initializeOnly',name='Fog',type='SFNode')],

      sourceCode="""
ecmascript:


function cumulustranslation() // These values designate the boundary location of the cloud
{
	X = 50000*Math.random();          //  X horizontal range
	Y = 1000 + 300*Math.random();	 //  Y vertical base + range
	Z = 50000*Math.random();         // z horizontal range

	randomt = new String(X+' '+Y+' '+Z);

	return randomt;
	
}



function cumulusscale() // these values scale a cloud within a designated size
{

	var maxscale = 1;

	scale = Math.round(9+maxscale*Math.random());
	X = 1.5*scale;
	Y = scale;
	Z = scale;

	randomscale = new String(X+' '+Y+' '+Z);

	return randomscale;
	
}


function cirrustranslation() // These values designate the boundary location of the cloud
{
	X = 50000*Math.random();          //  X horizontal range
	Y = 8000 + 1000*Math.random();	 //  Y vertical base + range
	Z = 50000*Math.random();         // z horizontal range

	randomt = new String(X+' '+Y+' '+Z);

	return randomt;
	
}



function cirrusscale() // these values scale a cloud within a designated size
{

	var maxscale = 1;

	scale = Math.round(9+maxscale*Math.random());
	X = 1.5*scale;
	Y = 2*Math.random();
	Z = 1.5*scale;

	randomscale = new String(X+' '+Y+' '+Z);

	return randomscale;
	
}


function cumulussectiontranslation() // These random values place another portion of cumulus type cloud
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

function cirrussectiontranslation() // These random values place another portion of cirrus type cloud
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


function rotation() // This random value is for the billboard rotation not used in this script
{


	radians = 6.28*Math.random();

	randomr = new String('0 0 1 ' + radians );
	
	
	return randomr;
	
}

function cumulus()
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
	image = ' \"CloudTexture1_5.png\" \"https://savage.nps.edu/Savage/Environment/Spheretexture.png\" \n';
  	}

  		else
  	{	
	image = ' \"CloudTexture1_4.png\" \"https://savage.nps.edu/Savage/Environment/Spheretexture.png\" \n';
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

function cirrus()

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
		'	                        url [\"cloudtexture3.png\" \"https://savage.nps.edu/Savage/Environment/cloudtexture1_4.png\" ] \n' +
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


function initialize()

{

cumulus();

cirrus();
}
"""),
      DirectionalLight(ambientIntensity=1,color=(1,0,0),direction=(-1,-1,0),global_=True)])])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for CloudsProcedural4.py:')
if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel)) # display meta info, hint, warning, error, TODO values in this model
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()
# print(newModelXML) # diagnostic

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful", flush=True)
except Exception as err: # usually BaseException
    # https://stackoverflow.com/questions/18176602/how-to-get-the-name-of-an-exception-that-was-caught-in-python
    print("*** Python-to-VRML export of VRML output failed:", type(err).__name__, err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (under development)")
except Exception as err: # usually SyntaxError
    print("*** Python-to-JSON export of JSON output failed:", type(err).__name__, err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python CloudsProcedural4.py load and self-test diagnostics complete.")
