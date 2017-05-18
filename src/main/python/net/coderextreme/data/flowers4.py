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
meta5 = metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/flowers4.x3d")
head1.addMeta(meta5)
meta6 = metaObject().setName("description").setContent("an animated flower")
head1.addMeta(meta6)
X3D0.setHead(head1)
Scene7 = SceneObject()
NavigationInfo8 = NavigationInfoObject()
Scene7.addChild(NavigationInfo8)
Background9 = BackgroundObject().setBackUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"]).setBottomUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"]).setFrontUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"]).setLeftUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"]).setRightUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"]).setTopUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])
Scene7.addChild(Background9)
Transform10 = TransformObject().setDEF("transform")
Shape11 = ShapeObject()
Appearance12 = AppearanceObject()
Material13 = MaterialObject().setDiffuseColor([0.7,0.7,0.7]).setSpecularColor([0.5,0.5,0.5])
Appearance12.setMaterial(Material13)
ComposedCubeMapTexture14 = ComposedCubeMapTextureObject()
ImageTexture15 = ImageTextureObject().setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])
ComposedCubeMapTexture14.setBack(ImageTexture15)
ImageTexture16 = ImageTextureObject().setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])
ComposedCubeMapTexture14.setBottom(ImageTexture16)
ImageTexture17 = ImageTextureObject().setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])
ComposedCubeMapTexture14.setFront(ImageTexture17)
ImageTexture18 = ImageTextureObject().setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])
ComposedCubeMapTexture14.setLeft(ImageTexture18)
ImageTexture19 = ImageTextureObject().setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])
ComposedCubeMapTexture14.setRight(ImageTexture19)
ImageTexture20 = ImageTextureObject().setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])
ComposedCubeMapTexture14.setTop(ImageTexture20)
Appearance12.setTexture(ComposedCubeMapTexture14)
ComposedShader21 = ComposedShaderObject().setDEF("shader").setLanguage("GLSL")
field22 = fieldObject().setType(fieldObject.TYPE_SFINT32).setName("cube").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0")
ComposedShader21.addField(field22)
field23 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("chromaticDispertion").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.98 1 1.033")
ComposedShader21.addField(field23)
field24 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("bias").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5")
ComposedShader21.addField(field24)
field25 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5")
ComposedShader21.addField(field25)
field26 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("power").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("2")
ComposedShader21.addField(field26)
ShaderPart27 = ShaderPartObject().setType("VERTEX").setUrl(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/shaders/x3dom.vs"])
ComposedShader21.addParts(ShaderPart27)
ShaderPart28 = ShaderPartObject().setType("FRAGMENT").setUrl(["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/shaders/pc_bubbles.fs"])
ComposedShader21.addParts(ShaderPart28)
Appearance12.addShaders(ComposedShader21)
Shape11.setAppearance(Appearance12)

Shape11.addComments(CommentsBlock("<Sphere>"))
IndexedFaceSet29 = IndexedFaceSetObject().setDEF("Orbit")
Coordinate30 = CoordinateObject().setDEF("OrbitCoordinates")
IndexedFaceSet29.setCoord(Coordinate30)
Shape11.setGeometry(IndexedFaceSet29)
Transform10.addChild(Shape11)
Scene7.addChild(Transform10)
Script31 = ScriptObject().setDEF("OrbitScript")
field32 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script31.addField(field32)
field33 = fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("coordinates").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
Script31.addField(field33)
field34 = fieldObject().setType(fieldObject.TYPE_MFINT32).setName("coordIndexes").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script31.addField(field34)

Script31.setSourceCode("ecmascript:\n"+
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
Scene7.addChild(Script31)
TimeSensor35 = TimeSensorObject().setDEF("Clock").setCycleInterval(16).setLoop(True)
Scene7.addChild(TimeSensor35)
ROUTE36 = ROUTEObject().setFromField("coordIndexes").setFromNode("OrbitScript").setToField("set_coordIndex").setToNode("Orbit")
Scene7.addChild(ROUTE36)
ROUTE37 = ROUTEObject().setFromField("coordinates").setFromNode("OrbitScript").setToField("set_point").setToNode("OrbitCoordinates")
Scene7.addChild(ROUTE37)
ROUTE38 = ROUTEObject().setFromField("fraction_changed").setFromNode("Clock").setToField("set_fraction").setToNode("OrbitScript")
Scene7.addChild(ROUTE38)
X3D0.setScene(Scene7)

X3D0.toFileX3D("../data/flowers4.new.x3d")
