# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

head1 = headObject()

meta2 = metaObject()
meta2.setName("title")
meta2.setContent("flowers4.x3d")

head1.addMeta(meta2)
meta3 = metaObject()
meta3.setName("creator")
meta3.setContent("John Carlson")

head1.addMeta(meta3)
meta4 = metaObject()
meta4.setName("generator")
meta4.setContent("manual")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("identifier")
meta5.setContent("https://coderextreme.net/X3DJSONLD/flowers4.x3d")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("description")
meta6.setContent("an animated flower")

head1.addMeta(meta6)
X3D0.setHead(head1)
Scene7 = SceneObject()

NavigationInfo8 = NavigationInfoObject()

Scene7.addChild(NavigationInfo8)
Background9 = BackgroundObject()
Background9.setBackUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])
Background9.setBottomUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])
Background9.setFrontUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])
Background9.setLeftUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])
Background9.setRightUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])
Background9.setTopUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])

Scene7.addChild(Background9)
Transform10 = TransformObject()
Transform10.setDEF("transform")

Shape11 = ShapeObject()

Appearance12 = AppearanceObject()

Material13 = MaterialObject()
Material13.setDiffuseColor([0.7,0.7,0.7])
Material13.setSpecularColor([0.5,0.5,0.5])

Appearance12.setMaterial(Material13)
ComposedCubeMapTexture14 = ComposedCubeMapTextureObject()

ImageTexture15 = ImageTextureObject()
ImageTexture15.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])

ComposedCubeMapTexture14.setBack(ImageTexture15)
ImageTexture16 = ImageTextureObject()
ImageTexture16.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])

ComposedCubeMapTexture14.setBottom(ImageTexture16)
ImageTexture17 = ImageTextureObject()
ImageTexture17.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])

ComposedCubeMapTexture14.setFront(ImageTexture17)
ImageTexture18 = ImageTextureObject()
ImageTexture18.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])

ComposedCubeMapTexture14.setLeft(ImageTexture18)
ImageTexture19 = ImageTextureObject()
ImageTexture19.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])

ComposedCubeMapTexture14.setRight(ImageTexture19)
ImageTexture20 = ImageTextureObject()
ImageTexture20.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])

ComposedCubeMapTexture14.setTop(ImageTexture20)
Appearance12.setTexture(ComposedCubeMapTexture14)
ComposedShader21 = ComposedShaderObject()
ComposedShader21.setDEF("shader")
ComposedShader21.setLanguage("GLSL")

field22 = fieldObject()
field22.setType(fieldObject.TYPE_SFINT32)
field22.setName("cube")
field22.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field22.setValue("0")

ComposedShader21.addField(field22)
field23 = fieldObject()
field23.setType(fieldObject.TYPE_SFVEC3F)
field23.setName("chromaticDispertion")
field23.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field23.setValue("0.98 1 1.033")

ComposedShader21.addField(field23)
field24 = fieldObject()
field24.setType(fieldObject.TYPE_SFFLOAT)
field24.setName("bias")
field24.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field24.setValue("0.5")

ComposedShader21.addField(field24)
field25 = fieldObject()
field25.setType(fieldObject.TYPE_SFFLOAT)
field25.setName("scale")
field25.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field25.setValue("0.5")

ComposedShader21.addField(field25)
field26 = fieldObject()
field26.setType(fieldObject.TYPE_SFFLOAT)
field26.setName("power")
field26.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field26.setValue("2")

ComposedShader21.addField(field26)
ShaderPart27 = ShaderPartObject()
ShaderPart27.setType("VERTEX")
ShaderPart27.setUrl(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/shaders/x3dom.vs"])

ComposedShader21.addParts(ShaderPart27)
ShaderPart28 = ShaderPartObject()
ShaderPart28.setType("FRAGMENT")
ShaderPart28.setUrl(["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/shaders/pc_bubbles.fs"])

ComposedShader21.addParts(ShaderPart28)
Appearance12.addShaders(ComposedShader21)
Shape11.setAppearance(Appearance12)

Shape11.addComments(CommentsBlock("<Sphere>"))
IndexedFaceSet29 = IndexedFaceSetObject()
IndexedFaceSet29.setConvex(False)
IndexedFaceSet29.setDEF("Orbit")

Coordinate30 = CoordinateObject()
Coordinate30.setDEF("OrbitCoordinates")

IndexedFaceSet29.setCoord(Coordinate30)
Shape11.setGeometry(IndexedFaceSet29)
Transform10.addChild(Shape11)
Scene7.addChild(Transform10)
Script31 = ScriptObject()
Script31.setDEF("OrbitScript")

field32 = fieldObject()
field32.setType(fieldObject.TYPE_SFFLOAT)
field32.setName("set_fraction")
field32.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script31.addField(field32)
field33 = fieldObject()
field33.setType(fieldObject.TYPE_MFVEC3F)
field33.setName("coordinates")
field33.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

Script31.addField(field33)
field34 = fieldObject()
field34.setType(fieldObject.TYPE_MFINT32)
field34.setName("coordIndexes")
field34.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)

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
"     var cis = [];\n"+
"     for ( i = 0; i < resolution-1; i++) {\n"+
"     	for ( j = 0; j < resolution-1; j++) {\n"+
"	     cis.push(i*resolution+j);\n"+
"	     cis.push(i*resolution+j+1);\n"+
"	     cis.push((i+1)*resolution+j+1);\n"+
"	     cis.push((i+1)*resolution+j);\n"+
"	     cis.push(-1);\n"+
"	}\n"+
"    }\n"+
"    coordIndexes = new MFInt32(cis);\n"+
"}\n"+
"\n"+
"function updateCoordinates(resolution) {\n"+
"     theta = 0.0;\n"+
"     phi = 0.0;\n"+
"     delta = (2 * 3.141592653) / (resolution-1);\n"+
"     var crds = [];\n"+
"     for ( i = 0; i < resolution; i++) {\n"+
"     	for ( j = 0; j < resolution; j++) {\n"+
"		rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);\n"+
"		crds.push(new SFVec3f(\n"+
"			rho * Math.cos(phi) * Math.cos(theta),\n"+
"			rho * Math.cos(phi) * Math.sin(theta),\n"+
"			rho * Math.sin(phi)\n"+
"		));\n"+
"		theta += delta;\n"+
"	}\n"+
"	phi += delta;\n"+
"     }\n"+
"     coordinates = new MFVec3f(crds);\n"+
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
TimeSensor35 = TimeSensorObject()
TimeSensor35.setDEF("Clock")
TimeSensor35.setCycleInterval(16)
TimeSensor35.setLoop(True)

Scene7.addChild(TimeSensor35)
ROUTE36 = ROUTEObject()
ROUTE36.setFromField("coordIndexes")
ROUTE36.setFromNode("OrbitScript")
ROUTE36.setToField("set_coordIndex")
ROUTE36.setToNode("Orbit")

Scene7.addChild(ROUTE36)
ROUTE37 = ROUTEObject()
ROUTE37.setFromField("coordinates")
ROUTE37.setFromNode("OrbitScript")
ROUTE37.setToField("set_point")
ROUTE37.setToNode("OrbitCoordinates")

Scene7.addChild(ROUTE37)
ROUTE38 = ROUTEObject()
ROUTE38.setFromField("fraction_changed")
ROUTE38.setFromNode("Clock")
ROUTE38.setToField("set_fraction")
ROUTE38.setToNode("OrbitScript")

Scene7.addChild(ROUTE38)
X3D0.setScene(Scene7)

X3D0.toFileX3D("../data/flowers4.new.x3d")
