# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

head1 = headObject()

component2 = componentObject()
component2.setName("Shaders")
component2.setLevel(1)

head1.addComponent(component2)
component3 = componentObject()
component3.setName("CubeMapTexturing")
component3.setLevel(1)

head1.addComponent(component3)
meta4 = metaObject()
meta4.setName("title")
meta4.setContent("flowerproto.x3d")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("creator")
meta5.setContent("John Carlson")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("description")
meta6.setContent("A flower proto with configurable shaders")

head1.addMeta(meta6)
meta7 = metaObject()
meta7.setName("generator")
meta7.setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta7)
meta8 = metaObject()
meta8.setName("identifier")
meta8.setContent("https://coderextreme.net/X3DJSONLD/flowerproto.x3d")

head1.addMeta(meta8)
X3D0.setHead(head1)
Scene9 = SceneObject()

ProtoDeclare10 = ProtoDeclareObject()
ProtoDeclare10.setName("FlowerProto")

ProtoInterface11 = ProtoInterfaceObject()

field12 = fieldObject()
field12.setType(fieldObject.TYPE_MFSTRING)
field12.setName("vertex")
field12.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field12.setValue("\"../shaders/gl_flowers_chromatic.vs\"")

ProtoInterface11.addField(field12)
field13 = fieldObject()
field13.setType(fieldObject.TYPE_MFSTRING)
field13.setName("fragment")
field13.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field13.setValue("\"../shaders/pc_flowers.fs\"")

ProtoInterface11.addField(field13)
ProtoDeclare10.setProtoInterface(ProtoInterface11)
ProtoBody14 = ProtoBodyObject()

Transform15 = TransformObject()
Transform15.setDEF("transform")

Shape16 = ShapeObject()

Appearance17 = AppearanceObject()

Material18 = MaterialObject()
Material18.setDiffuseColor([0.7,0.7,0.7])

Appearance17.setMaterial(Material18)
ComposedCubeMapTexture19 = ComposedCubeMapTextureObject()
ComposedCubeMapTexture19.setDEF("texture")

ImageTexture20 = ImageTextureObject()
ImageTexture20.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])

ComposedCubeMapTexture19.setBack(ImageTexture20)
ImageTexture21 = ImageTextureObject()
ImageTexture21.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])

ComposedCubeMapTexture19.setBottom(ImageTexture21)
ImageTexture22 = ImageTextureObject()
ImageTexture22.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])

ComposedCubeMapTexture19.setFront(ImageTexture22)
ImageTexture23 = ImageTextureObject()
ImageTexture23.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])

ComposedCubeMapTexture19.setLeft(ImageTexture23)
ImageTexture24 = ImageTextureObject()
ImageTexture24.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])

ComposedCubeMapTexture19.setRight(ImageTexture24)
ImageTexture25 = ImageTextureObject()
ImageTexture25.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])

ComposedCubeMapTexture19.setTop(ImageTexture25)
Appearance17.setTexture(ComposedCubeMapTexture19)
ComposedShader26 = ComposedShaderObject()
ComposedShader26.setDEF("shader")
ComposedShader26.setLanguage("GLSL")

field27 = fieldObject()
field27.setType(fieldObject.TYPE_SFINT32)
field27.setName("cube")
field27.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field27.setValue("0")

ComposedShader26.addField(field27)
field28 = fieldObject()
field28.setType(fieldObject.TYPE_SFVEC3F)
field28.setName("chromaticDispertion")
field28.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field28.setValue("0.98 1 1.033")

ComposedShader26.addField(field28)
field29 = fieldObject()
field29.setType(fieldObject.TYPE_SFFLOAT)
field29.setName("bias")
field29.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field29.setValue("10")

ComposedShader26.addField(field29)
field30 = fieldObject()
field30.setType(fieldObject.TYPE_SFFLOAT)
field30.setName("scale")
field30.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field30.setValue("10")

ComposedShader26.addField(field30)
field31 = fieldObject()
field31.setType(fieldObject.TYPE_SFFLOAT)
field31.setName("power")
field31.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field31.setValue("2")

ComposedShader26.addField(field31)
field32 = fieldObject()
field32.setType(fieldObject.TYPE_SFFLOAT)
field32.setName("a")
field32.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field32.setValue("3")

ComposedShader26.addField(field32)
field33 = fieldObject()
field33.setType(fieldObject.TYPE_SFFLOAT)
field33.setName("b")
field33.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field33.setValue("1")

ComposedShader26.addField(field33)
field34 = fieldObject()
field34.setType(fieldObject.TYPE_SFFLOAT)
field34.setName("c")
field34.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field34.setValue("3")

ComposedShader26.addField(field34)
field35 = fieldObject()
field35.setType(fieldObject.TYPE_SFFLOAT)
field35.setName("d")
field35.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field35.setValue("3")

ComposedShader26.addField(field35)
field36 = fieldObject()
field36.setType(fieldObject.TYPE_SFFLOAT)
field36.setName("tdelta")
field36.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field36.setValue("0.5")

ComposedShader26.addField(field36)
field37 = fieldObject()
field37.setType(fieldObject.TYPE_SFFLOAT)
field37.setName("pdelta")
field37.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field37.setValue("0.5")

ComposedShader26.addField(field37)

ComposedShader26.addComments(CommentsBlock("""<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>"""))
ShaderPart38 = ShaderPartObject()
ShaderPart38.setType("VERTEX")

IS39 = ISObject()

connect40 = connectObject()
connect40.setNodeField("url")
connect40.setProtoField("vertex")

IS39.addConnect(connect40)
ShaderPart38.setIS(IS39)
ComposedShader26.addParts(ShaderPart38)
ShaderPart41 = ShaderPartObject()
ShaderPart41.setType("FRAGMENT")

IS42 = ISObject()

connect43 = connectObject()
connect43.setNodeField("url")
connect43.setProtoField("fragment")

IS42.addConnect(connect43)
ShaderPart41.setIS(IS42)
ComposedShader26.addParts(ShaderPart41)
Appearance17.addShaders(ComposedShader26)
Shape16.setAppearance(Appearance17)
Sphere44 = SphereObject()

Shape16.setGeometry(Sphere44)
Transform15.addChild(Shape16)
Script45 = ScriptObject()
Script45.setDEF("Bounce")

field46 = fieldObject()
field46.setType(fieldObject.TYPE_SFVEC3F)
field46.setName("translation")
field46.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field46.setValue("0 0 0")

Script45.addField(field46)
field47 = fieldObject()
field47.setType(fieldObject.TYPE_SFVEC3F)
field47.setName("velocity")
field47.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field47.setValue("0 0 0")

Script45.addField(field47)
field48 = fieldObject()
field48.setType(fieldObject.TYPE_SFTIME)
field48.setName("set_fraction")
field48.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script45.addField(field48)
field49 = fieldObject()
field49.setType(fieldObject.TYPE_SFFLOAT)
field49.setName("a")
field49.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field49.setValue("0.5")

Script45.addField(field49)
field50 = fieldObject()
field50.setType(fieldObject.TYPE_SFFLOAT)
field50.setName("b")
field50.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field50.setValue("0.5")

Script45.addField(field50)
field51 = fieldObject()
field51.setType(fieldObject.TYPE_SFFLOAT)
field51.setName("c")
field51.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field51.setValue("3")

Script45.addField(field51)
field52 = fieldObject()
field52.setType(fieldObject.TYPE_SFFLOAT)
field52.setName("d")
field52.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field52.setValue("3")

Script45.addField(field52)
field53 = fieldObject()
field53.setType(fieldObject.TYPE_SFFLOAT)
field53.setName("tdelta")
field53.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field53.setValue("0.5")

Script45.addField(field53)
field54 = fieldObject()
field54.setType(fieldObject.TYPE_SFFLOAT)
field54.setName("pdelta")
field54.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field54.setValue("0.5")

Script45.addField(field54)

Script45.setSourceCode("ecmascript:\n"+
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
Transform15.addChild(Script45)
TimeSensor55 = TimeSensorObject()
TimeSensor55.setDEF("TourTime")
TimeSensor55.setCycleInterval(0.15)
TimeSensor55.setLoop(True)

Transform15.addChild(TimeSensor55)
ROUTE56 = ROUTEObject()
ROUTE56.setFromNode("TourTime")
ROUTE56.setFromField("cycleTime")
ROUTE56.setToNode("Bounce")
ROUTE56.setToField("set_fraction")

Transform15.addChild(ROUTE56)
ROUTE57 = ROUTEObject()
ROUTE57.setFromNode("Bounce")
ROUTE57.setFromField("translation_changed")
ROUTE57.setToNode("transform")
ROUTE57.setToField("set_translation")

Transform15.addChild(ROUTE57)
ROUTE58 = ROUTEObject()
ROUTE58.setFromNode("Bounce")
ROUTE58.setFromField("a")
ROUTE58.setToNode("shader")
ROUTE58.setToField("a")

Transform15.addChild(ROUTE58)
ROUTE59 = ROUTEObject()
ROUTE59.setFromNode("Bounce")
ROUTE59.setFromField("b")
ROUTE59.setToNode("shader")
ROUTE59.setToField("b")

Transform15.addChild(ROUTE59)
ROUTE60 = ROUTEObject()
ROUTE60.setFromNode("Bounce")
ROUTE60.setFromField("c")
ROUTE60.setToNode("shader")
ROUTE60.setToField("c")

Transform15.addChild(ROUTE60)
ROUTE61 = ROUTEObject()
ROUTE61.setFromNode("Bounce")
ROUTE61.setFromField("d")
ROUTE61.setToNode("shader")
ROUTE61.setToField("d")

Transform15.addChild(ROUTE61)
ROUTE62 = ROUTEObject()
ROUTE62.setFromNode("Bounce")
ROUTE62.setFromField("tdelta")
ROUTE62.setToNode("shader")
ROUTE62.setToField("tdelta")

Transform15.addChild(ROUTE62)
ROUTE63 = ROUTEObject()
ROUTE63.setFromNode("Bounce")
ROUTE63.setFromField("pdelta")
ROUTE63.setToNode("shader")
ROUTE63.setToField("pdelta")

Transform15.addChild(ROUTE63)
ProtoBody14.addChild(Transform15)
ProtoDeclare10.setProtoBody(ProtoBody14)
Scene9.addChild(ProtoDeclare10)
X3D0.setScene(Scene9)

X3D0.toFileX3D("../data/flowerproto.new.x3d")
