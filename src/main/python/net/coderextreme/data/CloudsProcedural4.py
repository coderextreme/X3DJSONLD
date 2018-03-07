# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.2")

head1 = headObject()

meta2 = metaObject()
meta2.setName("title")
meta2.setContent("CloudsProcedural4.x3d")

head1.addMeta(meta2)
meta3 = metaObject()
meta3.setName("description")
meta3.setContent("X3D utilizing ecmascript to develop quasi volumetric 3D clouds from png image textured billboard nodes.")

head1.addMeta(meta3)
meta4 = metaObject()
meta4.setName("creator")
meta4.setContent("Capt Darren W. Murphy")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("created")
meta5.setContent("1 November 2007")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("modified")
meta6.setContent("14 January 2014")

head1.addMeta(meta6)
meta7 = metaObject()
meta7.setName("identifier")
meta7.setContent("https://savage.nps.edu/Savage/Environment/Atmosphere/CloudsProcedural4.x3d")

head1.addMeta(meta7)
meta8 = metaObject()
meta8.setName("generator")
meta8.setContent("X3D-Edit, http://www.web3d.org/x3d/content/README.X3D-Edit.html")

head1.addMeta(meta8)
meta9 = metaObject()
meta9.setName("license")
meta9.setContent("../../license.html")

head1.addMeta(meta9)
meta10 = metaObject()
meta10.setName("TODO")
meta10.setContent("fix links")

head1.addMeta(meta10)
X3D0.setHead(head1)
Scene11 = SceneObject()


Scene11.addComments(CommentsBlock("""A png image file for the cloud texture must be designated in the ecmascript node."""))
Viewpoint12 = ViewpointObject()
Viewpoint12.setDescription("Main")
Viewpoint12.setJump(False)
Viewpoint12.setOrientation([0,1,0,1.57])
Viewpoint12.setPosition([50000,1000,42000])

Scene11.addChild(Viewpoint12)
Viewpoint13 = ViewpointObject()
Viewpoint13.setDescription("Light House Tower")
Viewpoint13.setJump(False)
Viewpoint13.setOrientation([0,1,0,1.3])
Viewpoint13.setPosition([45000,1290,44000])

Scene11.addChild(Viewpoint13)
Viewpoint14 = ViewpointObject()
Viewpoint14.setDescription("centerWest")
Viewpoint14.setJump(False)
Viewpoint14.setOrientation([0,1,0,2.5])
Viewpoint14.setPosition([48000,1000,20000])

Scene11.addChild(Viewpoint14)
Background15 = BackgroundObject()
Background15.setGroundColor([0,0,1])
Background15.setSkyColor([0,0,1])

Scene11.addChild(Background15)
DirectionalLight16 = DirectionalLightObject()
DirectionalLight16.setAmbientIntensity(1)
DirectionalLight16.setDirection([-1,0,0])
DirectionalLight16.setGlobal(True)

Scene11.addChild(DirectionalLight16)
Group17 = GroupObject()
Group17.setDEF("Terrain")

Transform18 = TransformObject()
Transform18.setScale([50,50,50])
Transform18.setTranslation([25000,0,25000])

Inline19 = InlineObject()
Inline19.setUrl(["MontereyBayLargeMesh.x3d","https://savage.nps.edu/Savage/Environment/Atmosphere/MontereyBayLargeMesh.x3d","MontereyBayLargeMesh.wrl","https://savage.nps.edu/Savage/Environment/Atmosphere/MontereyBayLargeMesh.wrl"])

Transform18.addChild(Inline19)
Group17.addChild(Transform18)
Transform20 = TransformObject()
Transform20.setRotation([1,0,0,1.57])
Transform20.setTranslation([25000,0,25000])

Shape21 = ShapeObject()

Rectangle2D22 = Rectangle2DObject()
Rectangle2D22.setSize([77000,55000])

Shape21.setGeometry(Rectangle2D22)
Appearance23 = AppearanceObject()

ImageTexture24 = ImageTextureObject()
ImageTexture24.setUrl(["ocean.png","https://savage.nps.edu/Savage/Environment/Atmosphere/ocean.png"])

Appearance23.setTexture(ImageTexture24)
Shape21.setAppearance(Appearance23)
Transform20.addChild(Shape21)
Group17.addChild(Transform20)
Scene11.addChild(Group17)
Group25 = GroupObject()
Group25.setDEF("Placemarks")

Transform26 = TransformObject()
Transform26.setScale([50,50,50])
Transform26.setTranslation([45000,30,44000])

Inline27 = InlineObject()
Inline27.setUrl(["Lighthouse.x3d","https://savage.nps.edu/Savage/Environment/Atmosphere/Lighthouse.x3d","Lighthouse.wrl","https://savage.nps.edu/Savage/Environment/Atmosphere/Lighthouse.wrl"])

Transform26.addChild(Inline27)
Group25.addChild(Transform26)
Scene11.addChild(Group25)
Group28 = GroupObject()
Group28.setDEF("Clouds")

Transform29 = TransformObject()
Transform29.setDEF("Cumulus")

Group28.addChild(Transform29)
Transform30 = TransformObject()
Transform30.setDEF("Cirrus")

Group28.addChild(Transform30)
Transform31 = TransformObject()
Transform31.setDEF("Fog")

Group28.addChild(Transform31)
Script32 = ScriptObject()
Script32.setDEF("PixelScript")
Script32.setDirectOutput(True)

field33 = fieldObject()
field33.setType(fieldObject.TYPE_SFNODE)
field33.setName("Cumulus")
field33.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)

Transform34 = TransformObject()
Transform34.setUSE("Cumulus")

field33.addChild(Transform34)
Script32.addField(field33)
field35 = fieldObject()
field35.setType(fieldObject.TYPE_SFNODE)
field35.setName("Cirrus")
field35.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)

Transform36 = TransformObject()
Transform36.setUSE("Cirrus")

field35.addChild(Transform36)
Script32.addField(field35)
field37 = fieldObject()
field37.setType(fieldObject.TYPE_SFNODE)
field37.setName("Fog")
field37.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)

Script32.addField(field37)

Script32.setSourceCode("ecmascript: function cumulustranslation() // These values designate the boundary location of the cloud { X = 50000*Math.random(); // X horizontal range Y = 1000 + 300*Math.random(); // Y vertical base + range Z = 50000*Math.random(); // z horizontal range randomt = new String(X+' '+Y+' '+Z); return randomt; } function cumulusscale() // these values scale a cloud within a designated size { maxscale = 1; scale = Math.round(9+maxscale*Math.random()); X = 1.5*scale; Y = scale; Z = scale; randomscale = new String(X+' '+Y+' '+Z); return randomscale; } function cirrustranslation() // These values designate the boundary location of the cloud { X = 50000*Math.random(); // X horizontal range Y = 8000 + 1000*Math.random(); // Y vertical base + range Z = 50000*Math.random(); // z horizontal range randomt = new String(X+' '+Y+' '+Z); return randomt; } function cirrusscale() // these values scale a cloud within a designated size { maxscale = 1; scale = Math.round(9+maxscale*Math.random()); X = 1.5*scale; Y = 2*Math.random(); Z = 1.5*scale; randomscale = new String(X+' '+Y+' '+Z); return randomscale; } function cumulussectiontranslation() // These random values place another portion of cumulus type cloud { randomtheta = 6.28319*Math.random(); randomphi = .7854*Math.random(); randomradius = 90 + 5*Math.random();//the first whole number should be close to the sectionradius X = randomradius*Math.cos(randomtheta)*Math.sin(randomphi); Z = randomradius*Math.sin(randomtheta)*Math.sin(randomphi); Y = randomradius*Math.cos(randomphi); randomt = new String(X+' '+Y+' '+Z); return randomt; } function cirrussectiontranslation() // These random values place another portion of cirrus type cloud { randomtheta = 6.28319*Math.random(); randomphi = .7854*Math.random(); randomradius = 90 + 5*Math.random();//the first whole number should be close to the sectionradius X = randomradius*Math.cos(randomtheta)*Math.sin(randomphi); Z = randomradius*Math.sin(randomtheta)*Math.sin(randomphi); Y = randomradius*Math.cos(randomphi); randomt = new String(X+' '+Y+' '+Z); return randomt; } function rotation() // This random value is for the billboard rotation not used in this script { radians = 6.28*Math.random(); randomr = new String('0 0 1 ' + radians ); return randomr; } function cumulus() { maxi = 20; // number of clouds maxj = 5; // denotes how many portions affecting the size of the cloud maxk = 8; // number of billboards indicating cloud density sectionradius = 100; //radius of individual cloud sections for (var i=0; i < maxi; i++) { CloudStringA = ' Transform { \\n' + ' scale '+ cumulusscale() + ' \\n' + ' translation '+ cumulustranslation() + ' \\n' + // cloud placement ' children [ \\n'; CloudStringB = new Array(); CloudStringF = new Array(); for (var j=0; j < maxj; j++) { radius = 0; CloudStringB[j]= ' Transform { \\n' + ' translation '+ cumulussectiontranslation() + ' \\n' + // section placement ' children [ \\n'; CloudStringC = new Array(); image = new String(); for (var k=1; k < maxk; k++) // maxk value denotes how many textured billboards make up the cloud { randomtheta = 6.28319*Math.random(); randomphi = 1.57079*Math.random(); radius = radius+(sectionradius/maxk); // radius incremental steps based on billow radius and max billboards X = radius*Math.cos(randomtheta)*Math.sin(randomphi); Z = radius*Math.sin(randomtheta)*Math.sin(randomphi); Y = radius*Math.cos(randomphi); if (Y <= 30) //cloud shading and lighting control { image = ' \"CloudTexture1_5.png\"\"https://savage.nps.edu/Savage/Environment/Spheretexture.png\"\\n'; } else { image = ' \"CloudTexture1_4.png\"\"https://savage.nps.edu/Savage/Environment/Spheretexture.png\"\\n'; } Billboardtranslation = new String(X+' '+Y+' '+Z); CloudStringC[k] = ' Transform { \\n' + ' translation '+ Billboardtranslation + ' \\n' + // random billboard placement within radius designated above ' children [ \\n' + ' Billboard { \\n' + ' axisOfRotation 0 0 0 \\n' + // 0 0 0 designates rotation on all axis ' children [ \\n' + ' Transform { \\n' + ' rotation 0 0 0 0 \\n' + // a rotation of the individual billboards can be defined ' children [ \\n' + ' Shape { \\n' + ' appearance Appearance { \\n' + ' material Material { \\n' + ' } \\n' + ' texture ImageTexture { \\n' + ' url [ ' + image + ' ] \\n' + ' } \\n' + ' } \\n' + ' geometry IndexedFaceSet { \\n' + // define type of geometry to texture ' coordIndex [ 0, 1, 2, 3 ] \\n' + ' solid FALSE \\n' + ' coord Coordinate { \\n' + ' point [ 50 50 0, \\n' + // define size of the geometry. Here 100 meter 2D square. ' 50 -50 0, \\n' + ' -50 -50 0, \\n' + ' -50 50 0 ] \\n' + ' } \\n' + ' } \\n' + ' } \\n' + ' ] \\n' + ' } \\n' + ' ] \\n' + ' } \\n' + ' ] \\n' + ' } \\n'; } CloudStringD = CloudStringC.join(' '); CloudStringE = ' ] \\n' + ' } \\n'; CloudStringF[j] = CloudStringB[j] + CloudStringD +CloudStringE; } CloudStringG = CloudStringF.join(' '); CloudStringH = ' ] \\n' + ' } \\n' + '######################################################### \\n'; CloudString = CloudStringA + CloudStringG + CloudStringH; newNode = Browser.createVrmlFromString(CloudString); Cumulus.children[i] = newNode[0]; } } function cirrus() { maxi = 2; // number of clouds maxj = 5; // denotes how many portions affecting the size of the cloud maxk = 8; // number of billboards indicating cloud density sectionradius = 1000; //radius of individual cloud sections for (var i=0; i < maxi; i++) { CloudStringA = ' Transform { \\n' + ' scale '+ cirrusscale() + ' \\n' + ' translation '+ cirrustranslation() + ' \\n' + // cloud placement ' children [ \\n'; CloudStringB = new Array(); CloudStringF = new Array(); for (var j=0; j < maxj; j++) { radius = 0; CloudStringB[j]= ' Transform { \\n' + ' translation '+ cirrussectiontranslation() + ' \\n' + // section placement ' children [ \\n'; CloudStringC = new Array(); for (var k=1; k < maxk; k++) // maxk value denotes how many textured billboards make up the cloud { randomtheta = 6.28319*Math.random(); randomphi = 1.57079*Math.random(); radius = radius+(sectionradius/maxk); // radius incremental steps based on section radius and max billboards X = radius*Math.cos(randomtheta)*Math.sin(randomphi); Z = radius*Math.sin(randomtheta)*Math.sin(randomphi); Y = radius*Math.cos(randomphi); Billboardtranslation = new String(X+' '+Y+' '+Z); CloudStringC[k] = ' Transform { \\n' + ' translation '+ Billboardtranslation + ' \\n' + // random billboard placement within radius designated above ' children [ \\n' + ' Billboard { \\n' + ' axisOfRotation 0 0 0 \\n' + // 0 0 0 designates rotation on all axis ' children [ \\n' + ' Transform { \\n' + ' rotation ' + rotation() + ' \\n' + ' children [ \\n' + ' Shape { \\n' + ' appearance Appearance { \\n' + ' material Material { \\n' + ' } \\n' + ' texture ImageTexture { \\n' + ' url [\"cloudtexture3.png\"\"https://savage.nps.edu/Savage/Environment/cloudtexture1_4.png\"] \\n' + ' } \\n' + ' } \\n' + ' geometry IndexedFaceSet { \\n' + // define type of geometry to texture ' coordIndex [ 0, 1, 2, 3 ] \\n' + ' solid FALSE \\n' + ' coord Coordinate { \\n' + ' point [ 500 500 0, \\n' + // define size of the geometry. Here 100 meter 2D square. ' 500 -500 0, \\n' + ' -500 -500 0, \\n' + ' -500 500 0 ] \\n' + ' } \\n' + ' } \\n' + ' } \\n' + ' ] \\n' + ' } \\n' + ' ] \\n' + ' } \\n' + ' ] \\n' + ' } \\n'; } CloudStringD = CloudStringC.join(' '); CloudStringE = ' ] \\n' + ' } \\n'; CloudStringF[j] = CloudStringB[j] + CloudStringD +CloudStringE; } CloudStringG = CloudStringF.join(' '); CloudStringH = ' ] \\n' + ' } \\n' + '######################################################### \\n'; CloudString = CloudStringA + CloudStringG + CloudStringH; newNode = Browser.createVrmlFromString(CloudString); Cirrus.children[i] = newNode[0]; } } function initialize() { cumulus(); cirrus(); }\n"+
"")
Group28.addChild(Script32)
DirectionalLight38 = DirectionalLightObject()
DirectionalLight38.setAmbientIntensity(1)
DirectionalLight38.setColor([1,0,0])
DirectionalLight38.setDirection([-1,-1,0])
DirectionalLight38.setGlobal(True)

Group28.addChild(DirectionalLight38)
Scene11.addChild(Group28)
X3D0.setScene(Scene11)

X3D0.toFileX3D("../data/CloudsProcedural4.new.x3d")
