var java = require('java');
var autoclass = require('../../../X3Dautoclass.js');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroesSync(true);
      var X3D0 =  new autoclass.X3D().setProfileSync("Immersive").setVersionSync("3.2")
      .setHeadSync(new autoclass.head()
        .addMetaSync(new autoclass.meta().setNameSync("title").setContentSync("CloudsProcedural4.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("description").setContentSync("X3D utilizing ecmascript to develop quasi volumetric 3D clouds from png image textured billboard nodes."))
        .addMetaSync(new autoclass.meta().setNameSync("creator").setContentSync("Capt Darren W. Murphy"))
        .addMetaSync(new autoclass.meta().setNameSync("created").setContentSync("1 November 2007"))
        .addMetaSync(new autoclass.meta().setNameSync("modified").setContentSync("14 January 2014"))
        .addMetaSync(new autoclass.meta().setNameSync("identifier").setContentSync("https://savage.nps.edu/Savage/Environment/Atmosphere/CloudsProcedural4.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("generator").setContentSync("X3D-Edit, http://www.web3d.org/x3d/content/README.X3D-Edit.html"))
        .addMetaSync(new autoclass.meta().setNameSync("license").setContentSync("../../license.html"))
        .addMetaSync(new autoclass.meta().setNameSync("TODO").setContentSync("fix links")))
      .setSceneSync(new autoclass.Scene()
        .addCommentsSync(new autoclass.CommentsBlock("A png image file for the cloud texture must be designated in the ecmascript node."))
        .addChildSync(new autoclass.Viewpoint().setDescriptionSync("Main").setJumpSync(false).setOrientationSync(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(1.57)])).setPositionSync(java.newArray("float", [java.newFloat(50000), java.newFloat(1000), java.newFloat(42000)])))
        .addChildSync(new autoclass.Viewpoint().setDescriptionSync("Light House Tower").setJumpSync(false).setOrientationSync(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(1.3)])).setPositionSync(java.newArray("float", [java.newFloat(45000), java.newFloat(1290), java.newFloat(44000)])))
        .addChildSync(new autoclass.Viewpoint().setDescriptionSync("centerWest").setJumpSync(false).setOrientationSync(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(2.5)])).setPositionSync(java.newArray("float", [java.newFloat(48000), java.newFloat(1000), java.newFloat(20000)])))
        .addChildSync(new autoclass.Background().setGroundColorSync(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)])).setSkyColorSync(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)])))
        .addChildSync(new autoclass.DirectionalLight().setAmbientIntensitySync(java.newFloat(1)).setDirectionSync(java.newArray("float", [java.newFloat(-1), java.newFloat(0), java.newFloat(0)])).setGlobalSync(true))
        .addChildSync(new autoclass.Group().setDEFSync("Terrain")
          .addChildSync(new autoclass.Transform().setScaleSync(java.newArray("float", [java.newFloat(50), java.newFloat(50), java.newFloat(50)])).setTranslationSync(java.newArray("float", [java.newFloat(25000), java.newFloat(0), java.newFloat(25000)]))
            .addChildSync(new autoclass.Inline().setUrlSync(java.newArray("java.lang.String", ["MontereyBayLargeMesh.x3d","https://savage.nps.edu/Savage/Environment/Atmosphere/MontereyBayLargeMesh.x3d","MontereyBayLargeMesh.wrl","https://savage.nps.edu/Savage/Environment/Atmosphere/MontereyBayLargeMesh.wrl"]))))
          .addChildSync(new autoclass.Transform().setRotationSync(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(1.57)])).setTranslationSync(java.newArray("float", [java.newFloat(25000), java.newFloat(0), java.newFloat(25000)]))
            .addChildSync(new autoclass.Shape()
              .setGeometrySync(new autoclass.Rectangle2D().setSizeSync(java.newArray("float", [java.newFloat(77000), java.newFloat(55000)])))
              .setAppearanceSync(new autoclass.Appearance()
                .setTextureSync(new autoclass.ImageTexture().setUrlSync(java.newArray("java.lang.String", ["ocean.png","https://savage.nps.edu/Savage/Environment/Atmosphere/ocean.png"])))))))
        .addChildSync(new autoclass.Group().setDEFSync("Placemarks")
          .addChildSync(new autoclass.Transform().setScaleSync(java.newArray("float", [java.newFloat(50), java.newFloat(50), java.newFloat(50)])).setTranslationSync(java.newArray("float", [java.newFloat(45000), java.newFloat(30), java.newFloat(44000)]))
            .addChildSync(new autoclass.Inline().setUrlSync(java.newArray("java.lang.String", ["Lighthouse.x3d","https://savage.nps.edu/Savage/Environment/Atmosphere/Lighthouse.x3d","Lighthouse.wrl","https://savage.nps.edu/Savage/Environment/Atmosphere/Lighthouse.wrl"])))))
        .addChildSync(new autoclass.Group().setDEFSync("Clouds")
          .addChildSync(new autoclass.Transform().setDEFSync("Cumulus"))
          .addChildSync(new autoclass.Transform().setDEFSync("Cirrus"))
          .addChildSync(new autoclass.Transform().setDEFSync("Fog"))
          .addChildSync(new autoclass.Script().setDEFSync("PixelScript").setDirectOutputSync(true)
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFNODE).setNameSync("Cumulus").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY)
              .addChildSync(new autoclass.Transform().setUSESync("Cumulus")))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFNODE).setNameSync("Cirrus").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY)
              .addChildSync(new autoclass.Transform().setUSESync("Cirrus")))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFNODE).setNameSync("Fog").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY))
            .setSourceCodeSync("ecmascript:\n"+
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
"	var maxscale = 1;\n"+
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
"	var maxscale = 1;\n"+
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
"var maxi = 20;  // number of clouds\n"+
"\n"+
"var maxj = 5; // denotes how many portions affecting the size of the cloud\n"+
"\n"+
"var maxk = 8;  // number of billboards indicating cloud density\n"+
"\n"+
"var sectionradius = 100;  //radius of individual cloud sections\n"+
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
"var maxi = 2;  // number of clouds\n"+
"\n"+
"var maxj = 5; // denotes how many portions affecting the size of the cloud\n"+
"\n"+
"var maxk = 8;  // number of billboards indicating cloud density\n"+
"\n"+
"var sectionradius = 1000;  //radius of individual cloud sections\n"+
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
"}"))
          .addChildSync(new autoclass.DirectionalLight().setAmbientIntensitySync(java.newFloat(1)).setColorSync(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0)])).setDirectionSync(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(0)])).setGlobalSync(true))))      ;
    X3D0.toFileX3D("../data/CloudsProcedural4.new.x3d");
