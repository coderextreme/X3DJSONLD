from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject().setProfile("Immersive").setVersion("3.3")
head1 = headObject()
meta2 = metaObject().setName("title").setContent("flowers4.x3d")
head1.addMeta(meta2)
meta3 = metaObject().setName("creator").setContent("John Carlson")
head1.addMeta(meta3)
meta4 = metaObject().setName("generator").setContent("manual")
head1.addMeta(meta4)
meta5 = metaObject().setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/flowers4.x3d")
head1.addMeta(meta5)
meta6 = metaObject().setName("description").setContent("an animated flower")
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
Transform15 = TransformObject().setDEF("transform")
Shape16 = ShapeObject()
Appearance17 = AppearanceObject()
Material18 = MaterialObject().setDiffuseColor([0.7,0.7,0.7]).setSpecularColor([0.5,0.5,0.5])
Appearance17.setMaterial(Material18)
ComposedCubeMapTexture19 = ComposedCubeMapTextureObject()
ImageTexture20 = ImageTextureObject().setUrl(["cubemap/all_probes/stpeters_cross/stpeters_back.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_back.png"])
ComposedCubeMapTexture19.setBack(ImageTexture20)
ImageTexture21 = ImageTextureObject().setUrl(["cubemap/all_probes/stpeters_cross/stpeters_bottom.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_bottom.png"])
ComposedCubeMapTexture19.setBottom(ImageTexture21)
ImageTexture22 = ImageTextureObject().setUrl(["cubemap/all_probes/stpeters_cross/stpeters_front.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_front.png"])
ComposedCubeMapTexture19.setFront(ImageTexture22)
ImageTexture23 = ImageTextureObject().setUrl(["cubemap/all_probes/stpeters_cross/stpeters_left.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_left.png"])
ComposedCubeMapTexture19.setLeft(ImageTexture23)
ImageTexture24 = ImageTextureObject().setUrl(["cubemap/all_probes/stpeters_cross/stpeters_right.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_right.png"])
ComposedCubeMapTexture19.setRight(ImageTexture24)
ImageTexture25 = ImageTextureObject().setUrl(["cubemap/all_probes/stpeters_cross/stpeters_top.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_top.png"])
ComposedCubeMapTexture19.setTop(ImageTexture25)
Appearance17.setTexture(ComposedCubeMapTexture19)
ComposedShader26 = ComposedShaderObject().setDEF("shader").setLanguage("GLSL")
field27 = fieldObject().setType(fieldObject.TYPE_SFINT32).setName("cube").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0")
ComposedShader26.addField(field27)
field28 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("chromaticDispertion").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.98 1 1.033")
ComposedShader26.addField(field28)
field29 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("bias").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5")
ComposedShader26.addField(field29)
field30 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5")
ComposedShader26.addField(field30)
field31 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("power").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("2")
ComposedShader26.addField(field31)
ShaderPart32 = ShaderPartObject().setType("VERTEX").setUrl(["x3dom.vs","http://coderextreme.net/X3DJSONLD/x3dom.vs"])
ComposedShader26.addParts(ShaderPart32)
ShaderPart33 = ShaderPartObject().setType("FRAGMENT").setUrl(["pc_bubbles.fs","http://coderextreme.net/X3DJSONLD/pc_bubbles.fs"])
ComposedShader26.addParts(ShaderPart33)
Appearance17.addShaders(ComposedShader26)
Shape16.setAppearance(Appearance17)

Shape16.addComments(CommentsBlock("<Sphere>"))
IndexedFaceSet34 = IndexedFaceSetObject().setDEF("Orbit")
Coordinate35 = CoordinateObject().setDEF("OrbitCoordinates")
IndexedFaceSet34.setCoord(Coordinate35)
Shape16.setGeometry(IndexedFaceSet34)
Transform15.addChild(Shape16)
Scene12.addChild(Transform15)
Script36 = ScriptObject().setDEF("OrbitScript")
field37 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script36.addField(field37)
field38 = fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("coordinates").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
Script36.addField(field38)
field39 = fieldObject().setType(fieldObject.TYPE_MFINT32).setName("coordIndexes").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script36.addField(field39)

Script36.setSourceCode("ecmascript:\n"+
"\n"+
"var e = 5;\n"+
"var f = 5;\n"+
"var g = 5;\n"+
"var h = 5;\n"+
"\n"+
"function initialize() {\n"+
"     resolution = 100;\n"+
"     updateCoordinates(resolution);\n"+
"     if (typeof coordIndexes == 'undefined' || coordIndexes == null) {\n"+
"     	coordIndexes = new MFInt32();\n"+
"     }\n"+
"     ci = 0;\n"+
"     for ( i = 0; i < resolution-1; i++) {\n"+
"     	for ( j = 0; j < resolution-1; j++) {\n"+
"	     coordIndexes[ci] = i*resolution+j;\n"+
"	     coordIndexes[ci+1] = i*resolution+j+1;\n"+
"	     coordIndexes[ci+2] = (i+1)*resolution+j+1;\n"+
"	     coordIndexes[ci+3] = (i+1)*resolution+j;\n"+
"	     coordIndexes[ci+4] = -1;\n"+
"	     ci += 5;\n"+
"	}\n"+
"    }\n"+
"}\n"+
"\n"+
"function updateCoordinates(resolution) {\n"+
"     theta = 0.0;\n"+
"     phi = 0.0;\n"+
"     delta = (2 * 3.141592653) / (resolution-1);\n"+
"     if (typeof coordinates == 'undefined' || coordinates == null) {\n"+
"     	coordinates = new MFVec3f();\n"+
"     }\n"+
"     for ( i = 0; i < resolution; i++) {\n"+
"     	for ( j = 0; j < resolution; j++) {\n"+
"		rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);\n"+
"		coordinates[i*resolution+j] = new SFVec3f();\n"+
"		coordinates[i*resolution+j][0] = rho * Math.cos(phi) * Math.cos(theta);\n"+
"		coordinates[i*resolution+j][1] = rho * Math.cos(phi) * Math.sin(theta);\n"+
"		coordinates[i*resolution+j][2] = rho * Math.sin(phi);\n"+
"		theta += delta;\n"+
"	}\n"+
"	phi += delta;\n"+
"     }\n"+
"}\n"+
"\n"+
"function set_fraction(fraction, eventTime) {\n"+
"	choice = Math.floor(Math.random() * 4);\n"+
"	switch (choice) {\n"+
"	case 0:\n"+
"		e += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 1:\n"+
"		f += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 2:\n"+
"		g += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 3:\n"+
"		h += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	}\n"+
"	if (f < 1) {\n"+
"		f = 10;\n"+
"	}\n"+
"	if (g < 1) {\n"+
"		g = 4;\n"+
"	}\n"+
"	if (h < 1) {\n"+
"		h = 4;\n"+
"	}\n"+
"	resolution = 100;\n"+
"	updateCoordinates(resolution);\n"+
"}\n"+
"")
Scene12.addChild(Script36)
TimeSensor40 = TimeSensorObject().setDEF("Clock").setCycleInterval(16).setLoop(True)
Scene12.addChild(TimeSensor40)
ROUTE41 = ROUTEObject().setFromField("coordIndexes").setFromNode("OrbitScript").setToField("set_coordIndex").setToNode("Orbit")
Scene12.addChild(ROUTE41)
ROUTE42 = ROUTEObject().setFromField("coordinates").setFromNode("OrbitScript").setToField("set_point").setToNode("OrbitCoordinates")
Scene12.addChild(ROUTE42)
ROUTE43 = ROUTEObject().setFromField("fraction_changed").setFromNode("Clock").setToField("set_fraction").setToNode("OrbitScript")
Scene12.addChild(ROUTE43)
X3D0.setScene(Scene12)

X3D0.toFileX3D("flowers4.new.x3d")
