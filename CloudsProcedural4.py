from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject().setProfile("Immersive").setVersion("3.2")
head1 = headObject()
meta2 = metaObject().setName("title").setContent("CloudsProcedural4.x3d")
head1.addMeta(meta2)
meta3 = metaObject().setName("description").setContent("X3D utilizing ecmascript to develop quasi volumetric 3D clouds from png image textured billboard nodes.")
head1.addMeta(meta3)
meta4 = metaObject().setName("creator").setContent("Capt Darren W. Murphy")
head1.addMeta(meta4)
meta5 = metaObject().setName("created").setContent("1 November 2007")
head1.addMeta(meta5)
meta6 = metaObject().setName("modified").setContent("14 January 2014")
head1.addMeta(meta6)
meta7 = metaObject().setName("identifier").setContent("https://savage.nps.edu/Savage/Environment/Atmosphere/CloudsProcedural4.x3d")
head1.addMeta(meta7)
meta8 = metaObject().setName("generator").setContent("X3D-Edit, http://www.web3d.org/x3d/content/README.X3D-Edit.html")
head1.addMeta(meta8)
meta9 = metaObject().setName("license").setContent("../../license.html")
head1.addMeta(meta9)
meta10 = metaObject().setName("TODO").setContent("fix links")
head1.addMeta(meta10)
meta11 = metaObject().setName("translated").setContent("10 May 2017")
head1.addMeta(meta11)
meta12 = metaObject().setName("generator").setContent("X3dToJson.xslt, http://www.web3d.org/x3d/stylesheets/X3dToJson.html")
head1.addMeta(meta12)
meta13 = metaObject().setName("reference").setContent("X3D JSON encoding: http://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
head1.addMeta(meta13)
meta14 = metaObject().setName("translated").setContent("10 May 2017")
head1.addMeta(meta14)
meta15 = metaObject().setName("generator").setContent("X3DJSONLD: https://github.com/coderextreme/X3DJSONLD")
head1.addMeta(meta15)
X3D0.setHead(head1)
Scene16 = SceneObject()

Scene16.addComments(CommentsBlock("A png image file for the cloud texture must be designated in the ecmascript node."))
Viewpoint17 = ViewpointObject().setDescription("Main").setJump(False).setOrientation([0,1,0,1.57]).setPosition([50000,1000,42000])
Scene16.addChild(Viewpoint17)
Viewpoint18 = ViewpointObject().setDescription("Light House Tower").setJump(False).setOrientation([0,1,0,1.3]).setPosition([45000,1290,44000])
Scene16.addChild(Viewpoint18)
Viewpoint19 = ViewpointObject().setDescription("centerWest").setJump(False).setOrientation([0,1,0,2.5]).setPosition([48000,1000,20000])
Scene16.addChild(Viewpoint19)
Background20 = BackgroundObject().setGroundColor([0,0,1]).setSkyColor([0,0,1])
Scene16.addChild(Background20)
DirectionalLight21 = DirectionalLightObject().setAmbientIntensity(1).setDirection([-1,0,0]).setGlobal(True)
Scene16.addChild(DirectionalLight21)
Group22 = GroupObject().setDEF("Terrain")
Transform23 = TransformObject().setScale([50,50,50]).setTranslation([25000,0,25000])
Inline24 = InlineObject().setUrl(["MontereyBayLargeMesh.x3d","https://savage.nps.edu/Savage/Environment/Atmosphere/MontereyBayLargeMesh.x3d","MontereyBayLargeMesh.wrl","https://savage.nps.edu/Savage/Environment/Atmosphere/MontereyBayLargeMesh.wrl"])
Transform23.addChild(Inline24)
Group22.addChild(Transform23)
Transform25 = TransformObject().setRotation([1,0,0,1.57]).setTranslation([25000,0,25000])
Shape26 = ShapeObject()
Rectangle2D27 = Rectangle2DObject().setSize([77000,55000])
Shape26.setGeometry(Rectangle2D27)
Appearance28 = AppearanceObject()
ImageTexture29 = ImageTextureObject().setUrl(["ocean.png","https://savage.nps.edu/Savage/Environment/Atmosphere/ocean.png"])
Appearance28.setTexture(ImageTexture29)
Shape26.setAppearance(Appearance28)
Transform25.addChild(Shape26)
Group22.addChild(Transform25)
Scene16.addChild(Group22)
Group30 = GroupObject().setDEF("Placemarks")
Transform31 = TransformObject().setScale([50,50,50]).setTranslation([45000,30,44000])
Inline32 = InlineObject().setUrl(["Lighthouse.x3d","https://savage.nps.edu/Savage/Environment/Atmosphere/Lighthouse.x3d","Lighthouse.wrl","https://savage.nps.edu/Savage/Environment/Atmosphere/Lighthouse.wrl"])
Transform31.addChild(Inline32)
Group30.addChild(Transform31)
Scene16.addChild(Group30)
Group33 = GroupObject().setDEF("Clouds")
Transform34 = TransformObject().setDEF("Cumulus")
Group33.addChild(Transform34)
Transform35 = TransformObject().setDEF("Cirrus")
Group33.addChild(Transform35)
Transform36 = TransformObject().setDEF("Fog")
Group33.addChild(Transform36)
Script37 = ScriptObject().setDEF("PixelScript").setDirectOutput(True)
field38 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("Cumulus").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
Transform39 = TransformObject().setUSE("Cumulus")
field38.addChild(Transform39)
Script37.addField(field38)
field40 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("Cirrus").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
Transform41 = TransformObject().setUSE("Cirrus")
field40.addChild(Transform41)
Script37.addField(field40)
field42 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("Fog").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
Script37.addField(field42)

Script37.setSourceCode("ecmascript:\n"+
"\n"+
"\n"+
"function cumulustranslation() // These values designate the boundary location of the cloud\n"+
"{\n"+
"	X = 50000*Math.random();          //  X horizontal range\n"+
"	Y = 1000 + 300*Math.random();	 //  Y vertical base + range\n"+
"	Z = 50000*Math.random();         // z horizontal range\n"+
"\n"+
"	randomt = new String(X+' '+Y+' '+Z);\n"+
"\n"+
"	return randomt;\n"+
"	\n"+
"}\n"+
"\n"+
"\n"+
"\n"+
"function cumulusscale() // these values scale a cloud within a designated size\n"+
"{\n"+
"\n"+
"	maxscale = 1;\n"+
"\n"+
"	scale = Math.round(9+maxscale*Math.random());\n"+
"	X = 1.5*scale;\n"+
"	Y = scale;\n"+
"	Z = scale;\n"+
"\n"+
"	randomscale = new String(X+' '+Y+' '+Z);\n"+
"\n"+
"	return randomscale;\n"+
"	\n"+
"}\n"+
"\n"+
"\n"+
"function cirrustranslation() // These values designate the boundary location of the cloud\n"+
"{\n"+
"	X = 50000*Math.random();          //  X horizontal range\n"+
"	Y = 8000 + 1000*Math.random();	 //  Y vertical base + range\n"+
"	Z = 50000*Math.random();         // z horizontal range\n"+
"\n"+
"	randomt = new String(X+' '+Y+' '+Z);\n"+
"\n"+
"	return randomt;\n"+
"	\n"+
"}\n"+
"\n"+
"\n"+
"\n"+
"function cirrusscale() // these values scale a cloud within a designated size\n"+
"{\n"+
"\n"+
"	maxscale = 1;\n"+
"\n"+
"	scale = Math.round(9+maxscale*Math.random());\n"+
"	X = 1.5*scale;\n"+
"	Y = 2*Math.random();\n"+
"	Z = 1.5*scale;\n"+
"\n"+
"	randomscale = new String(X+' '+Y+' '+Z);\n"+
"\n"+
"	return randomscale;\n"+
"	\n"+
"}\n"+
"\n"+
"\n"+
"function cumulussectiontranslation() // These random values place another portion of cumulus type cloud\n"+
"{\n"+
"\n"+
"	randomtheta = 6.28319*Math.random();\n"+
"	randomphi = .7854*Math.random();\n"+
"	randomradius = 90 + 5*Math.random();//the first whole number should be close to the sectionradius\n"+
"\n"+
"	X = randomradius*Math.cos(randomtheta)*Math.sin(randomphi);\n"+
"	Z = randomradius*Math.sin(randomtheta)*Math.sin(randomphi);\n"+
"	Y = randomradius*Math.cos(randomphi);\n"+
"	\n"+
"\n"+
"	randomt = new String(X+' '+Y+' '+Z);\n"+
"\n"+
"	return randomt;\n"+
"	\n"+
"}\n"+
"\n"+
"function cirrussectiontranslation() // These random values place another portion of cirrus type cloud\n"+
"{\n"+
"\n"+
"	randomtheta = 6.28319*Math.random();\n"+
"	randomphi = .7854*Math.random();\n"+
"	randomradius = 90 + 5*Math.random();//the first whole number should be close to the sectionradius\n"+
"\n"+
"	X = randomradius*Math.cos(randomtheta)*Math.sin(randomphi);\n"+
"	Z = randomradius*Math.sin(randomtheta)*Math.sin(randomphi);\n"+
"	Y = randomradius*Math.cos(randomphi);\n"+
"	\n"+
"\n"+
"	randomt = new String(X+' '+Y+' '+Z);\n"+
"\n"+
"	return randomt;\n"+
"	\n"+
"}\n"+
"\n"+
"\n"+
"function rotation() // This random value is for the billboard rotation not used in this script\n"+
"{\n"+
"\n"+
"\n"+
"	radians = 6.28*Math.random();\n"+
"\n"+
"	randomr = new String('0 0 1 ' + radians );\n"+
"	\n"+
"	\n"+
"	return randomr;\n"+
"	\n"+
"}\n"+
"\n"+
"function cumulus()\n"+
"{\n"+
"\n"+
"maxi = 20;  // number of clouds\n"+
"\n"+
"maxj = 5; // denotes how many portions affecting the size of the cloud\n"+
"\n"+
"maxk = 8;  // number of billboards indicating cloud density\n"+
"\n"+
"sectionradius = 100;  //radius of individual cloud sections\n"+
"\n"+
"\n"+
"\n"+
"\n"+
"\n"+
"for (var i=0; i < maxi; i++) \n"+
"{\n"+
"\n"+
"\n"+
"\n"+
"CloudStringA = '	Transform {		\\n' +\n"+
"'    scale '+ cumulusscale() + '               	\\n' +\n"+
"'    translation '+ cumulustranslation() + '    \\n' +    // cloud placement\n"+
"'    children [	                                \\n';\n"+
"\n"+
"\n"+
"CloudStringB = new Array();\n"+
"CloudStringF = new Array();\n"+
"\n"+
"   	for (var j=0; j < maxj; j++)\n"+
"   	{\n"+
"\n"+
"	radius = 0;\n"+
"\n"+
"	CloudStringB[j]= '  Transform {		    	       \\n' +\n"+
"	'    translation '+ cumulussectiontranslation() + '    \\n' +     // section placement\n"+
"	'    children [	                                       \\n';\n"+
"\n"+
"	\n"+
"	CloudStringC = new Array();\n"+
"	image = new String();\n"+
"\n"+
"      		for (var k=1; k < maxk; k++)  // maxk value denotes how many textured billboards make up the cloud \n"+
"      		{\n"+
"\n"+
"\n"+
"		randomtheta = 6.28319*Math.random();\n"+
"		randomphi = 1.57079*Math.random();\n"+
"		radius = radius+(sectionradius/maxk); // radius incremental steps based on billow radius and max billboards\n"+
"\n"+
"		X = radius*Math.cos(randomtheta)*Math.sin(randomphi);\n"+
"		Z = radius*Math.sin(randomtheta)*Math.sin(randomphi);\n"+
"		Y = radius*Math.cos(randomphi);\n"+
"\n"+
"\n"+
"		if (Y <= 30) //cloud shading and lighting control\n"+
"  	{	\n"+
"	image = ' \"CloudTexture1_5.png\" \"https://savage.nps.edu/Savage/Environment/Spheretexture.png\" \\n';\n"+
"  	}\n"+
"\n"+
"  		else\n"+
"  	{	\n"+
"	image = ' \"CloudTexture1_4.png\" \"https://savage.nps.edu/Savage/Environment/Spheretexture.png\" \\n';\n"+
"  	}\n"+
"\n"+
"	\n"+
"		\n"+
"		Billboardtranslation = new String(X+' '+Y+' '+Z);\n"+
"\n"+
"		CloudStringC[k] = '	Transform {		                \\n' +\n"+
"		'            translation '+ Billboardtranslation   + '          \\n' +     // random billboard placement within radius designated above\n"+
"		'	  children [	                                        \\n' +\n"+
"		'	      Billboard {	                                \\n' +\n"+
"		'	        axisOfRotation 0 0 0	                        \\n' +     // 0 0 0 designates rotation on all axis\n"+
"		'	        children [	                                \\n' +\n"+
"		'	            Transform {	                		\\n' +\n"+
"		'	              rotation  0 0 0 0 		        \\n' +     // a rotation of the individual billboards can be defined\n"+
"		'	              children [	                        \\n' +\n"+
"		'	                  Shape {	                        \\n' +\n"+
"		'	                    appearance Appearance {	        \\n' +\n"+
"		'				material Material {		\\n' +\n"+
"		'				                }  		\\n' +\n"+
"		'	                      texture ImageTexture {	        \\n' +\n"+
"		'	                        url [ ' + image + ' ]           \\n' + \n"+
"		'	                      }	                                \\n' +\n"+
"		'	                    }	                                \\n' +\n"+
"		'	                    geometry IndexedFaceSet {	        \\n' +     // define type of geometry to texture\n"+
"		'	                      coordIndex [ 0, 1, 2, 3 ]	        \\n' +\n"+
"		'			      solid FALSE		        \\n' +\n"+
"		'	                      coord Coordinate {	        \\n' +\n"+
"		'	                        point [ 50 50 0,	        \\n' +     // define size of the geometry. Here 100 meter 2D square.\n"+
"		'	                                50 -50 0,	        \\n' +\n"+
"		'	                               -50 -50 0,	        \\n' +\n"+
"		'	                               -50 50 0 ]	        \\n' +\n"+
"		'	                      }	                                \\n' +\n"+
"		'	                    }	                                \\n' +\n"+
"		'	                  }	                                \\n' +\n"+
"		'	              ]	                                        \\n' +\n"+
"		'	            }	                                        \\n' +\n"+
"		'	       ]	                                        \\n' +\n"+
"		'	   }	                                                \\n' +\n"+
"		'      ]	                                                \\n' +\n"+
"		'     }	                                                        \\n';      \n"+
"		\n"+
"\n"+
"		}\n"+
"\n"+
"	CloudStringD = CloudStringC.join(' ');\n"+
"\n"+
"	\n"+
"	CloudStringE = '   ]	                 \\n' +\n"+
"	'	}	                         \\n';\n"+
"\n"+
"	CloudStringF[j] = CloudStringB[j] + CloudStringD +CloudStringE;\n"+
"\n"+
"\n"+
"	}\n"+
"\n"+
"CloudStringG = CloudStringF.join(' ');\n"+
"\n"+
"CloudStringH = '      ]	                                        \\n' +\n"+
"'     }	                                                        \\n' +\n"+
"'#########################################################      \\n';\n"+
"\n"+
"CloudString = CloudStringA + CloudStringG + CloudStringH;\n"+
"\n"+
"\n"+
"\n"+
"newNode = Browser.createVrmlFromString(CloudString);\n"+
"Cumulus.children[i] = newNode[0];\n"+
"\n"+
"\n"+
"   }\n"+
"\n"+
"}\n"+
"\n"+
"function cirrus()\n"+
"\n"+
"{\n"+
"\n"+
"maxi = 2;  // number of clouds\n"+
"\n"+
"maxj = 5; // denotes how many portions affecting the size of the cloud\n"+
"\n"+
"maxk = 8;  // number of billboards indicating cloud density\n"+
"\n"+
"sectionradius = 1000;  //radius of individual cloud sections\n"+
"\n"+
"\n"+
"\n"+
"\n"+
"\n"+
"for (var i=0; i < maxi; i++) \n"+
"{\n"+
"\n"+
"\n"+
"\n"+
"CloudStringA = '	Transform {		 \\n' +\n"+
"'    scale '+ cirrusscale() + '               	 \\n' +\n"+
"'    translation '+ cirrustranslation() + '      \\n' +    // cloud placement\n"+
"'    children [	                                 \\n';\n"+
"\n"+
"\n"+
"CloudStringB = new Array();\n"+
"CloudStringF = new Array();\n"+
"\n"+
"   	for (var j=0; j < maxj; j++)\n"+
"   	{\n"+
"\n"+
"	radius = 0;\n"+
"\n"+
"	CloudStringB[j]= '  Transform {		    	      \\n' +\n"+
"	'    translation '+ cirrussectiontranslation() + '    \\n' +     // section placement\n"+
"	'    children [	                                      \\n';\n"+
"\n"+
"	\n"+
"	CloudStringC = new Array();\n"+
"\n"+
"      		for (var k=1; k < maxk; k++)  // maxk value denotes how many textured billboards make up the cloud \n"+
"      		{\n"+
"\n"+
"\n"+
"		randomtheta = 6.28319*Math.random();\n"+
"		randomphi = 1.57079*Math.random();\n"+
"		radius = radius+(sectionradius/maxk); // radius incremental steps based on section radius and max billboards\n"+
"\n"+
"		X = radius*Math.cos(randomtheta)*Math.sin(randomphi);\n"+
"		Z = radius*Math.sin(randomtheta)*Math.sin(randomphi);\n"+
"		Y = radius*Math.cos(randomphi);\n"+
"		\n"+
"		Billboardtranslation = new String(X+' '+Y+' '+Z);\n"+
"\n"+
"		CloudStringC[k] = '	Transform {		                \\n' +\n"+
"		'            translation '+ Billboardtranslation   + '          \\n' +     // random billboard placement within radius designated above\n"+
"		'	  children [	                                        \\n' +\n"+
"		'	      Billboard {	                                \\n' +\n"+
"		'	        axisOfRotation 0 0 0	                        \\n' +     // 0 0 0 designates rotation on all axis\n"+
"		'	        children [	                                \\n' +\n"+
"		'	            Transform {	                		\\n' +\n"+
"		'	              rotation '  + rotation() + '	        \\n' +\n"+
"		'	              children [	                        \\n' +\n"+
"		'	                  Shape {	                        \\n' +\n"+
"		'	                    appearance Appearance {	        \\n' +\n"+
"		'			    material Material {			\\n' +\n"+
"		'			    }					\\n' +\n"+
" 		'	                      texture ImageTexture {	        \\n' +\n"+
"		'	                        url [\"cloudtexture3.png\" \"https://savage.nps.edu/Savage/Environment/cloudtexture1_4.png\" ] \\n' +\n"+
"		'	                      }	                                \\n' +\n"+
"		'	                    }	                                \\n' +\n"+
"		'	                    geometry IndexedFaceSet {	        \\n' +     // define type of geometry to texture\n"+
"		'	                      coordIndex [ 0, 1, 2, 3 ]	        \\n' +\n"+
"		'			      solid FALSE		        \\n' +\n"+
"		'	                      coord Coordinate {	        \\n' +\n"+
"		'	                        point [ 500 500 0,	        \\n' +     // define size of the geometry. Here 100 meter 2D square.\n"+
"		'	                                500 -500 0,	        \\n' +\n"+
"		'	                               -500 -500 0,	        \\n' +\n"+
"		'	                               -500 500 0 ]	        \\n' +\n"+
"		'	                      }	                                \\n' +\n"+
"		'	                    }	                                \\n' +\n"+
"		'	                  }	                                \\n' +\n"+
"		'	              ]	                                        \\n' +\n"+
"		'	            }	                                        \\n' +\n"+
"		'	       ]	                                        \\n' +\n"+
"		'	   }	                                                \\n' +\n"+
"		'      ]	                                                \\n' +\n"+
"		'     }	                                                        \\n';      \n"+
"		\n"+
"\n"+
"		}\n"+
"\n"+
"	CloudStringD = CloudStringC.join(' ');\n"+
"\n"+
"	CloudStringE = '   ]	                 \\n' +\n"+
"	'	}	                         \\n';\n"+
"\n"+
"	CloudStringF[j] = CloudStringB[j] + CloudStringD +CloudStringE;\n"+
"\n"+
"\n"+
"	}\n"+
"\n"+
"CloudStringG = CloudStringF.join(' ');\n"+
"\n"+
"CloudStringH = '      ]	                                        \\n' +\n"+
"'     }	                                                        \\n' +\n"+
"'#########################################################      \\n';\n"+
"\n"+
"CloudString = CloudStringA + CloudStringG + CloudStringH;\n"+
"\n"+
"\n"+
"\n"+
"newNode = Browser.createVrmlFromString(CloudString);\n"+
"Cirrus.children[i] = newNode[0];\n"+
"\n"+
"  }\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function initialize()\n"+
"\n"+
"{\n"+
"\n"+
"cumulus();\n"+
"\n"+
"cirrus();\n"+
"}\n"+
"")
Group33.addChild(Script37)
DirectionalLight43 = DirectionalLightObject().setAmbientIntensity(1).setColor([1,0,0]).setDirection([-1,-1,0]).setGlobal(True)
Group33.addChild(DirectionalLight43)
Scene16.addChild(Group33)
X3D0.setScene(Scene16)

X3D0.toFileX3D("CloudsProcedural4.new.x3d")
