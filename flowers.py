from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject().setProfile("Immersive").setVersion("3.3")
head1 = headObject()
meta2 = metaObject().setName("title").setContent("flowers.x3d")
head1.addMeta(meta2)
meta3 = metaObject().setName("creator").setContent("John Carlson")
head1.addMeta(meta3)
meta4 = metaObject().setName("description").setContent("5 or more prismatic flowers")
head1.addMeta(meta4)
meta5 = metaObject().setName("generator").setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")
head1.addMeta(meta5)
meta6 = metaObject().setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/flowers.x3d")
head1.addMeta(meta6)
meta7 = metaObject().setName("translated").setContent("10 May 2017")
head1.addMeta(meta7)
meta8 = metaObject().setName("generator").setContent("X3dToJson.xslt, http://www.web3d.org/x3d/stylesheets/X3dToJson.html")
head1.addMeta(meta8)
meta9 = metaObject().setName("reference").setContent("X3D JSON encoding: http://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
head1.addMeta(meta9)
meta10 = metaObject().setName("translated").setContent("10 May 2017")
head1.addMeta(meta10)
meta11 = metaObject().setName("generator").setContent("X3DJSONLD: https://github.com/coderextreme/X3DJSONLD")
head1.addMeta(meta11)
X3D0.setHead(head1)
Scene12 = SceneObject()
NavigationInfo13 = NavigationInfoObject()
Scene12.addChild(NavigationInfo13)
Background14 = BackgroundObject().setBackUrl(["cubemap/all_probes/stpeters_cross/stpeters_back.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_back.png"]).setBottomUrl(["cubemap/all_probes/stpeters_cross/stpeters_bottom.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_bottom.png"]).setFrontUrl(["cubemap/all_probes/stpeters_cross/stpeters_front.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_front.png"]).setLeftUrl(["cubemap/all_probes/stpeters_cross/stpeters_left.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_left.png"]).setRightUrl(["cubemap/all_probes/stpeters_cross/stpeters_right.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_right.png"]).setTopUrl(["cubemap/all_probes/stpeters_cross/stpeters_top.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_top.png"])
Scene12.addChild(Background14)
ProtoDeclare15 = ProtoDeclareObject().setName("flower")
ProtoBody16 = ProtoBodyObject()
Transform17 = TransformObject().setDEF("transform")
Shape18 = ShapeObject()
Appearance19 = AppearanceObject()
Material20 = MaterialObject().setDiffuseColor([0.7,0.7,0.7]).setSpecularColor([0.5,0.5,0.5])
Appearance19.setMaterial(Material20)
ComposedCubeMapTexture21 = ComposedCubeMapTextureObject().setDEF("texture")
ImageTexture22 = ImageTextureObject().setUrl(["cubemap/all_probes/stpeters_cross/stpeters_back.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_back.png"])
ComposedCubeMapTexture21.setBack(ImageTexture22)
ImageTexture23 = ImageTextureObject().setUrl(["cubemap/all_probes/stpeters_cross/stpeters_bottom.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_bottom.png"])
ComposedCubeMapTexture21.setBottom(ImageTexture23)
ImageTexture24 = ImageTextureObject().setUrl(["cubemap/all_probes/stpeters_cross/stpeters_front.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_front.png"])
ComposedCubeMapTexture21.setFront(ImageTexture24)
ImageTexture25 = ImageTextureObject().setUrl(["cubemap/all_probes/stpeters_cross/stpeters_left.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_left.png"])
ComposedCubeMapTexture21.setLeft(ImageTexture25)
ImageTexture26 = ImageTextureObject().setUrl(["cubemap/all_probes/stpeters_cross/stpeters_right.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_right.png"])
ComposedCubeMapTexture21.setRight(ImageTexture26)
ImageTexture27 = ImageTextureObject().setUrl(["cubemap/all_probes/stpeters_cross/stpeters_top.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_top.png"])
ComposedCubeMapTexture21.setTop(ImageTexture27)
Appearance19.setTexture(ComposedCubeMapTexture21)
ComposedShader28 = ComposedShaderObject().setDEF("shader").setLanguage("GLSL")
field29 = fieldObject().setType(fieldObject.TYPE_SFINT32).setName("xxxcube").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0")
ComposedShader28.addField(field29)
field30 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("cube").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
ComposedCubeMapTexture31 = ComposedCubeMapTextureObject().setUSE("texture")
field30.addChild(ComposedCubeMapTexture31)
ComposedShader28.addField(field30)
field32 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("chromaticDispertion").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.98 1 1.033")
ComposedShader28.addField(field32)
field33 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("bias").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("10")
ComposedShader28.addField(field33)
field34 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("10")
ComposedShader28.addField(field34)
field35 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("power").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("2")
ComposedShader28.addField(field35)
ShaderPart36 = ShaderPartObject().setType("VERTEX").setUrl(["cobweb.vs","http://coderextreme.net/X3DJSONLD/cobweb.vs"])
ComposedShader28.addParts(ShaderPart36)
ShaderPart37 = ShaderPartObject().setType("FRAGMENT").setUrl(["pc_bubbles.fs","http://coderextreme.net/X3DJSONLD/pc_bubbles.fs"])
ComposedShader28.addParts(ShaderPart37)
Appearance19.addShaders(ComposedShader28)
Shape18.setAppearance(Appearance19)
IndexedFaceSet38 = IndexedFaceSetObject().setDEF("Orbit")
Coordinate39 = CoordinateObject().setDEF("OrbitCoordinates")
IndexedFaceSet38.setCoord(Coordinate39)
Shape18.setGeometry(IndexedFaceSet38)
Transform17.addChild(Shape18)
ProtoBody16.addChild(Transform17)
Script40 = ScriptObject().setDEF("Bounce")
field41 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script40.addField(field41)
field42 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("velocity").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script40.addField(field42)
field43 = fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script40.addField(field43)
field44 = fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("coordinates").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
Script40.addField(field44)
field45 = fieldObject().setType(fieldObject.TYPE_MFINT32).setName("coordIndexes").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
Script40.addField(field45)
field46 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("a").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5")
Script40.addField(field46)
field47 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("b").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5")
Script40.addField(field47)
field48 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("c").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("3")
Script40.addField(field48)
field49 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("d").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("3")
Script40.addField(field49)
field50 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("tdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5")
Script40.addField(field50)
field51 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("pdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5")
Script40.addField(field51)

Script40.setSourceCode("ecmascript:\n"+
"			function set_translation(value) {\n"+
"				translation = value;\n"+
"			}\n"+
"			function translation_changed() {\n"+
"				return translation;\n"+
"			}\n"+
"			function initialize() {\n"+
"			    translation = new SFVec3f(0, 0, 0);\n"+
"			    velocity = new SFVec3f(\n"+
"			    	Math.random() - 0.5,\n"+
"				Math.random() - 0.5,\n"+
"				Math.random() - 0.5);\n"+
"			}\n"+
"			function set_fraction() {\n"+
"			    translation = new SFVec3f(\n"+
"			    	translation[0] + velocity[0],\n"+
"				translation[1] + velocity[1],\n"+
"				translation[2] + velocity[2]);\n"+
"			    for (var j = 0; j <= 2; j++) {\n"+
"				    if (Math.abs(translation[j]) > 10) {\n"+
"					initialize();\n"+
"				    } else {\n"+
"					velocity[0] += Math.random() * 0.2 - 0.1;\n"+
"					velocity[1] += Math.random() * 0.2 - 0.1;\n"+
"					velocity[2] += Math.random() * 0.2 - 0.1;\n"+
"				    }\n"+
"			    }\n"+
"			    animate_flowers();\n"+
"			}\n"+
"\n"+
"			function initialize() {\n"+
"			     resolution = 100;\n"+
"			     updateCoordinates(resolution);\n"+
"			     if (typeof coordIndexes == 'undefined' || coordIndexes == null) {\n"+
"				coordIndexes = new MFInt32();\n"+
"			     }\n"+
"			     ci = 0;\n"+
"			     for ( i = 0; i < resolution-1; i++) {\n"+
"				for ( j = 0; j < resolution-1; j++) {\n"+
"				     coordIndexes[ci] = i*resolution+j;\n"+
"				     coordIndexes[ci+1] = i*resolution+j+1;\n"+
"				     coordIndexes[ci+2] = (i+1)*resolution+j+1;\n"+
"				     coordIndexes[ci+3] = (i+1)*resolution+j;\n"+
"				     coordIndexes[ci+4] = -1;\n"+
"				     ci += 5;\n"+
"				}\n"+
"			    }\n"+
"			}\n"+
"\n"+
"			function updateCoordinates(resolution) {\n"+
"			     theta = 0.0;\n"+
"			     phi = 0.0;\n"+
"			     delta = (2 * 3.141592653) / (resolution-1);\n"+
"			     if (typeof coordinates == 'undefined' || coordinates == null) {\n"+
"				coordinates = new MFVec3f();\n"+
"			     }\n"+
"			     for ( i = 0; i < resolution; i++) {\n"+
"				for ( j = 0; j < resolution; j++) {\n"+
"					rho = a + b * Math.cos(c * theta) * Math.cos(d * phi);\n"+
"					coordinates[i*resolution+j] = new SFVec3f();\n"+
"					coordinates[i*resolution+j][0] = rho * Math.cos(phi) * Math.cos(theta);\n"+
"					coordinates[i*resolution+j][1] = rho * Math.cos(phi) * Math.sin(theta);\n"+
"					coordinates[i*resolution+j][2] = rho * Math.sin(phi);\n"+
"					theta += delta;\n"+
"				}\n"+
"				phi += delta;\n"+
"			     }\n"+
"			}\n"+
"\n"+
"			function animate_flowers(fraction, eventTime) {\n"+
"				choice = Math.floor(Math.random() * 4);\n"+
"				switch (choice) {\n"+
"				case 0:\n"+
"					a += Math.random() * 0.2 - 0.1;\n"+
"					break;\n"+
"				case 1:\n"+
"					b += Math.random() * 0.2 - 0.1;\n"+
"					break;\n"+
"				case 2:\n"+
"					c += Math.random() * 2 - 1;\n"+
"					break;\n"+
"				case 3:\n"+
"					d += Math.random() * 2 - 1;\n"+
"					break;\n"+
"				}\n"+
"				if (a > 1) {\n"+
"					a =  0.5;\n"+
"				}\n"+
"				if (b > 1) {\n"+
"					b =  0.5;\n"+
"				}\n"+
"				if (c < 1) {\n"+
"					c =  4;\n"+
"				}\n"+
"				if (d < 1) {\n"+
"					d =  4;\n"+
"				}\n"+
"				if (c > 10) {\n"+
"					c = 4;\n"+
"				}\n"+
"				if (d > 10) {\n"+
"					d = 4;\n"+
"				}\n"+
"				resolution = 100;\n"+
"				updateCoordinates(resolution);\n"+
"			}\n"+
"")
ProtoBody16.addChild(Script40)
TimeSensor52 = TimeSensorObject().setDEF("TourTime").setCycleInterval(0.15).setLoop(True)
ProtoBody16.addChild(TimeSensor52)
ROUTE53 = ROUTEObject().setFromNode("TourTime").setFromField("cycleTime").setToNode("Bounce").setToField("set_fraction")
ProtoBody16.addChild(ROUTE53)
ROUTE54 = ROUTEObject().setFromNode("Bounce").setFromField("translation_changed").setToNode("transform").setToField("set_translation")
ProtoBody16.addChild(ROUTE54)
ROUTE55 = ROUTEObject().setFromField("coordIndexes").setFromNode("Bounce").setToField("set_coordIndex").setToNode("Orbit")
ProtoBody16.addChild(ROUTE55)
ROUTE56 = ROUTEObject().setFromField("coordinates").setFromNode("Bounce").setToField("set_point").setToNode("OrbitCoordinates")
ProtoBody16.addChild(ROUTE56)
ProtoDeclare15.setProtoBody(ProtoBody16)
Scene12.addChild(ProtoDeclare15)
Transform57 = TransformObject()
ProtoInstance58 = ProtoInstanceObject().setName("flower")
Transform57.addChild(ProtoInstance58)
ProtoInstance59 = ProtoInstanceObject().setName("flower")
Transform57.addChild(ProtoInstance59)
ProtoInstance60 = ProtoInstanceObject().setName("flower")
Transform57.addChild(ProtoInstance60)
Scene12.addChild(Transform57)
X3D0.setScene(Scene12)

X3D0.toFileX3D("flowers.new.x3d")
