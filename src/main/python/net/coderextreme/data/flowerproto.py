# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

head1 = headObject()

meta2 = metaObject()
meta2.setName("title")
meta2.setContent("flowerproto.x3d")

head1.addMeta(meta2)
meta3 = metaObject()
meta3.setName("creator")
meta3.setContent("John Carlson")

head1.addMeta(meta3)
meta4 = metaObject()
meta4.setName("description")
meta4.setContent("A flower proto with configurable shaders")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("generator")
meta5.setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("identifier")
meta6.setContent("https://coderextreme.net/X3DJSONLD/flowerproto.x3d")

head1.addMeta(meta6)
X3D0.setHead(head1)
Scene7 = SceneObject()

ProtoDeclare8 = ProtoDeclareObject()
ProtoDeclare8.setName("FlowerProto")

ProtoInterface9 = ProtoInterfaceObject()

field10 = fieldObject()
field10.setType(fieldObject.TYPE_MFSTRING)
field10.setName("vertex")
field10.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field10.setValue("\"../shaders/gl_flowers_chromatic.vs\"")

ProtoInterface9.addField(field10)
field11 = fieldObject()
field11.setType(fieldObject.TYPE_MFSTRING)
field11.setName("fragment")
field11.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field11.setValue("\"../shaders/pc_flowers.fs\"")

ProtoInterface9.addField(field11)
ProtoDeclare8.setProtoInterface(ProtoInterface9)
ProtoBody12 = ProtoBodyObject()

Transform13 = TransformObject()
Transform13.setDEF("transform")

Shape14 = ShapeObject()

Appearance15 = AppearanceObject()

Material16 = MaterialObject()
Material16.setDiffuseColor([0.7,0.7,0.7])

Appearance15.setMaterial(Material16)
ComposedCubeMapTexture17 = ComposedCubeMapTextureObject()
ComposedCubeMapTexture17.setDEF("texture")

ImageTexture18 = ImageTextureObject()
ImageTexture18.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])

ComposedCubeMapTexture17.setBack(ImageTexture18)
ImageTexture19 = ImageTextureObject()
ImageTexture19.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])

ComposedCubeMapTexture17.setBottom(ImageTexture19)
ImageTexture20 = ImageTextureObject()
ImageTexture20.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])

ComposedCubeMapTexture17.setFront(ImageTexture20)
ImageTexture21 = ImageTextureObject()
ImageTexture21.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])

ComposedCubeMapTexture17.setLeft(ImageTexture21)
ImageTexture22 = ImageTextureObject()
ImageTexture22.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])

ComposedCubeMapTexture17.setRight(ImageTexture22)
ImageTexture23 = ImageTextureObject()
ImageTexture23.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])

ComposedCubeMapTexture17.setTop(ImageTexture23)
Appearance15.setTexture(ComposedCubeMapTexture17)
ComposedShader24 = ComposedShaderObject()
ComposedShader24.setDEF("shader")
ComposedShader24.setLanguage("GLSL")

field25 = fieldObject()
field25.setType(fieldObject.TYPE_SFINT32)
field25.setName("cube")
field25.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field25.setValue("0")

ComposedShader24.addField(field25)
field26 = fieldObject()
field26.setType(fieldObject.TYPE_SFVEC3F)
field26.setName("chromaticDispertion")
field26.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field26.setValue("0.98 1 1.033")

ComposedShader24.addField(field26)
field27 = fieldObject()
field27.setType(fieldObject.TYPE_SFFLOAT)
field27.setName("bias")
field27.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field27.setValue("10")

ComposedShader24.addField(field27)
field28 = fieldObject()
field28.setType(fieldObject.TYPE_SFFLOAT)
field28.setName("scale")
field28.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field28.setValue("10")

ComposedShader24.addField(field28)
field29 = fieldObject()
field29.setType(fieldObject.TYPE_SFFLOAT)
field29.setName("power")
field29.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field29.setValue("2")

ComposedShader24.addField(field29)
field30 = fieldObject()
field30.setType(fieldObject.TYPE_SFFLOAT)
field30.setName("a")
field30.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field30.setValue("3")

ComposedShader24.addField(field30)
field31 = fieldObject()
field31.setType(fieldObject.TYPE_SFFLOAT)
field31.setName("b")
field31.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field31.setValue("1")

ComposedShader24.addField(field31)
field32 = fieldObject()
field32.setType(fieldObject.TYPE_SFFLOAT)
field32.setName("c")
field32.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field32.setValue("3")

ComposedShader24.addField(field32)
field33 = fieldObject()
field33.setType(fieldObject.TYPE_SFFLOAT)
field33.setName("d")
field33.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field33.setValue("3")

ComposedShader24.addField(field33)
field34 = fieldObject()
field34.setType(fieldObject.TYPE_SFFLOAT)
field34.setName("tdelta")
field34.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field34.setValue("0.5")

ComposedShader24.addField(field34)
field35 = fieldObject()
field35.setType(fieldObject.TYPE_SFFLOAT)
field35.setName("pdelta")
field35.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field35.setValue("0.5")

ComposedShader24.addField(field35)

ComposedShader24.addComments(CommentsBlock("<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>"))
ShaderPart36 = ShaderPartObject()
ShaderPart36.setType("VERTEX")

IS37 = ISObject()

connect38 = connectObject()
connect38.setNodeField("url")
connect38.setProtoField("vertex")

IS37.addConnect(connect38)
ShaderPart36.setIS(IS37)
ComposedShader24.addParts(ShaderPart36)
ShaderPart39 = ShaderPartObject()
ShaderPart39.setType("FRAGMENT")

IS40 = ISObject()

connect41 = connectObject()
connect41.setNodeField("url")
connect41.setProtoField("fragment")

IS40.addConnect(connect41)
ShaderPart39.setIS(IS40)
ComposedShader24.addParts(ShaderPart39)
Appearance15.addShaders(ComposedShader24)
Shape14.setAppearance(Appearance15)
Sphere42 = SphereObject()

Shape14.setGeometry(Sphere42)
Transform13.addChild(Shape14)
Script43 = ScriptObject()
Script43.setDEF("Bounce")

field44 = fieldObject()
field44.setType(fieldObject.TYPE_SFVEC3F)
field44.setName("translation")
field44.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field44.setValue("0 0 0")

Script43.addField(field44)
field45 = fieldObject()
field45.setType(fieldObject.TYPE_SFVEC3F)
field45.setName("velocity")
field45.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field45.setValue("0 0 0")

Script43.addField(field45)
field46 = fieldObject()
field46.setType(fieldObject.TYPE_SFTIME)
field46.setName("set_fraction")
field46.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script43.addField(field46)
field47 = fieldObject()
field47.setType(fieldObject.TYPE_SFFLOAT)
field47.setName("a")
field47.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field47.setValue("0.5")

Script43.addField(field47)
field48 = fieldObject()
field48.setType(fieldObject.TYPE_SFFLOAT)
field48.setName("b")
field48.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field48.setValue("0.5")

Script43.addField(field48)
field49 = fieldObject()
field49.setType(fieldObject.TYPE_SFFLOAT)
field49.setName("c")
field49.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field49.setValue("3")

Script43.addField(field49)
field50 = fieldObject()
field50.setType(fieldObject.TYPE_SFFLOAT)
field50.setName("d")
field50.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field50.setValue("3")

Script43.addField(field50)
field51 = fieldObject()
field51.setType(fieldObject.TYPE_SFFLOAT)
field51.setName("tdelta")
field51.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field51.setValue("0.5")

Script43.addField(field51)
field52 = fieldObject()
field52.setType(fieldObject.TYPE_SFFLOAT)
field52.setName("pdelta")
field52.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field52.setValue("0.5")

Script43.addField(field52)

Script43.setSourceCode("ecmascript:\n"+
"			function initialize() {\n"+
"			    translation = new SFVec3f(0, 0, 0);\n"+
"			    velocity = new SFVec3f(\n"+
"			    	Math.random() - 0.5,\n"+
"				Math.random() - 0.5,\n"+
"				Math.random() - 0.5);\n"+
"			}\n"+
"			function set_fraction() {\n"+
"			    translation = new SFVec3f(\n"+
"			    	translation.x + velocity.x,\n"+
"				translation.y + velocity.y,\n"+
"				translation.z + velocity.z);\n"+
"			    for (var j = 0; j <= 2; j++) {\n"+
"				    if (Math.abs(translation.x) > 10) {\n"+
"					initialize();\n"+
"				    } else if (Math.abs(translation.y) > 10) {\n"+
"					initialize();\n"+
"				    } else if (Math.abs(translation.z) > 10) {\n"+
"					initialize();\n"+
"				    } else {\n"+
"					velocity.x += Math.random() * 0.2 - 0.1;\n"+
"					velocity.y += Math.random() * 0.2 - 0.1;\n"+
"					velocity.z += Math.random() * 0.2 - 0.1;\n"+
"				    }\n"+
"			    }\n"+
"			    animate_flowers();\n"+
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
"				tdelta += 0.5;\n"+
"				pdelta += 0.5;\n"+
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
"			}\n"+
"")
Transform13.addChild(Script43)
TimeSensor53 = TimeSensorObject()
TimeSensor53.setDEF("TourTime")
TimeSensor53.setCycleInterval(0.15)
TimeSensor53.setLoop(True)

Transform13.addChild(TimeSensor53)
ROUTE54 = ROUTEObject()
ROUTE54.setFromNode("TourTime")
ROUTE54.setFromField("cycleTime")
ROUTE54.setToNode("Bounce")
ROUTE54.setToField("set_fraction")

Transform13.addChild(ROUTE54)
ROUTE55 = ROUTEObject()
ROUTE55.setFromNode("Bounce")
ROUTE55.setFromField("translation_changed")
ROUTE55.setToNode("transform")
ROUTE55.setToField("set_translation")

Transform13.addChild(ROUTE55)
ROUTE56 = ROUTEObject()
ROUTE56.setFromNode("Bounce")
ROUTE56.setFromField("a")
ROUTE56.setToNode("shader")
ROUTE56.setToField("a")

Transform13.addChild(ROUTE56)
ROUTE57 = ROUTEObject()
ROUTE57.setFromNode("Bounce")
ROUTE57.setFromField("b")
ROUTE57.setToNode("shader")
ROUTE57.setToField("b")

Transform13.addChild(ROUTE57)
ROUTE58 = ROUTEObject()
ROUTE58.setFromNode("Bounce")
ROUTE58.setFromField("c")
ROUTE58.setToNode("shader")
ROUTE58.setToField("c")

Transform13.addChild(ROUTE58)
ROUTE59 = ROUTEObject()
ROUTE59.setFromNode("Bounce")
ROUTE59.setFromField("d")
ROUTE59.setToNode("shader")
ROUTE59.setToField("d")

Transform13.addChild(ROUTE59)
ROUTE60 = ROUTEObject()
ROUTE60.setFromNode("Bounce")
ROUTE60.setFromField("tdelta")
ROUTE60.setToNode("shader")
ROUTE60.setToField("tdelta")

Transform13.addChild(ROUTE60)
ROUTE61 = ROUTEObject()
ROUTE61.setFromNode("Bounce")
ROUTE61.setFromField("pdelta")
ROUTE61.setToNode("shader")
ROUTE61.setToField("pdelta")

Transform13.addChild(ROUTE61)
ProtoBody12.addChild(Transform13)
ProtoDeclare8.setProtoBody(ProtoBody12)
Scene7.addChild(ProtoDeclare8)
X3D0.setScene(Scene7)

X3D0.toFileX3D("../data/flowerproto.new.x3d")
