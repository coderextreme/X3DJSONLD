# -*- coding: UTF-8 -*-
from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = head()
component2 = component()
component2.setName("Shaders")
component2.setLevel(1)

head1.addComponent(component2)
component3 = component()
component3.setName("CubeMapTexturing")
component3.setLevel(1)

head1.addComponent(component3)
meta4 = meta()
meta4.setName("title")
meta4.setContent("flowerproto.x3d")

head1.addMeta(meta4)
meta5 = meta()
meta5.setName("creator")
meta5.setContent("John Carlson")

head1.addMeta(meta5)
meta6 = meta()
meta6.setName("description")
meta6.setContent("A flower proto with configurable shaders")

head1.addMeta(meta6)
meta7 = meta()
meta7.setName("generator")
meta7.setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta7)
meta8 = meta()
meta8.setName("identifier")
meta8.setContent("https://coderextreme.net/X3DJSONLD/flowerproto.x3d")

head1.addMeta(meta8)

X3D0.setHead(head1)
Scene9 = Scene()
ProtoDeclare10 = ProtoDeclare()
ProtoDeclare10.setName("FlowerProto")
ProtoInterface11 = ProtoInterface()
field12 = field()
field12.setName("vertex")
field12.setAccessType("inputOutput")
field12.setType("MFString")
field12.setValue("\"../shaders/gl_flowers_chromatic.vs\"")

ProtoInterface11.addField(field12)
field13 = field()
field13.setName("fragment")
field13.setAccessType("inputOutput")
field13.setType("MFString")
field13.setValue("\"../shaders/pc_flowers.fs\"")

ProtoInterface11.addField(field13)

ProtoDeclare10.setProtoInterface(ProtoInterface11)
ProtoBody14 = ProtoBody()
Transform15 = Transform()
Transform15.setDEF("transform")
Shape16 = Shape()
Appearance17 = Appearance()
Material18 = Material()
Material18.setDiffuseColor([0.7,0.7,0.7])
Material18.setSpecularColor([0.5,0.5,0.5])

Appearance17.setMaterial(Material18)
ComposedCubeMapTexture19 = ComposedCubeMapTexture()
ComposedCubeMapTexture19.setDEF("texture")
ImageTexture20 = ImageTexture()
ImageTexture20.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])

ComposedCubeMapTexture19.setBack(ImageTexture20)
ImageTexture21 = ImageTexture()
ImageTexture21.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])

ComposedCubeMapTexture19.setBottom(ImageTexture21)
ImageTexture22 = ImageTexture()
ImageTexture22.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])

ComposedCubeMapTexture19.setFront(ImageTexture22)
ImageTexture23 = ImageTexture()
ImageTexture23.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])

ComposedCubeMapTexture19.setLeft(ImageTexture23)
ImageTexture24 = ImageTexture()
ImageTexture24.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])

ComposedCubeMapTexture19.setRight(ImageTexture24)
ImageTexture25 = ImageTexture()
ImageTexture25.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])

ComposedCubeMapTexture19.setTop(ImageTexture25)

Appearance17.setTexture(ComposedCubeMapTexture19)
ComposedShader26 = ComposedShader()
ComposedShader26.setDEF("shader")
ComposedShader26.setLanguage("GLSL")
field27 = field()
field27.setName("cube")
field27.setType("SFInt32")
field27.setAccessType("inputOutput")
field27.setValue("0")

ComposedShader26.addField(field27)
field28 = field()
field28.setName("chromaticDispertion")
field28.setAccessType("initializeOnly")
field28.setType("SFVec3f")
field28.setValue("0.98 1 1.033")

ComposedShader26.addField(field28)
field29 = field()
field29.setName("bias")
field29.setType("SFFloat")
field29.setAccessType("inputOutput")
field29.setValue("0.5")

ComposedShader26.addField(field29)
field30 = field()
field30.setName("scale")
field30.setType("SFFloat")
field30.setAccessType("inputOutput")
field30.setValue("0.5")

ComposedShader26.addField(field30)
field31 = field()
field31.setName("power")
field31.setType("SFFloat")
field31.setAccessType("inputOutput")
field31.setValue("2")

ComposedShader26.addField(field31)
field32 = field()
field32.setName("a")
field32.setType("SFFloat")
field32.setAccessType("inputOutput")
field32.setValue("10")

ComposedShader26.addField(field32)
field33 = field()
field33.setName("b")
field33.setType("SFFloat")
field33.setAccessType("inputOutput")
field33.setValue("1")

ComposedShader26.addField(field33)
field34 = field()
field34.setName("c")
field34.setType("SFFloat")
field34.setAccessType("inputOutput")
field34.setValue("20")

ComposedShader26.addField(field34)
field35 = field()
field35.setName("d")
field35.setType("SFFloat")
field35.setAccessType("inputOutput")
field35.setValue("20")

ComposedShader26.addField(field35)
field36 = field()
field36.setName("tdelta")
field36.setType("SFFloat")
field36.setAccessType("inputOutput")
field36.setValue("0")

ComposedShader26.addField(field36)
field37 = field()
field37.setName("pdelta")
field37.setType("SFFloat")
field37.setAccessType("inputOutput")
field37.setValue("0")

ComposedShader26.addField(field37)
#<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>
ShaderPart38 = ShaderPart()
ShaderPart38.setType("VERTEX")
IS39 = IS()
connect40 = connect()
connect40.setNodeField("url")
connect40.setProtoField("vertex")

IS39.addConnect(connect40)

ShaderPart38.setIS(IS39)

ComposedShader26.addParts(ShaderPart38)
ShaderPart41 = ShaderPart()
ShaderPart41.setType("FRAGMENT")
IS42 = IS()
connect43 = connect()
connect43.setNodeField("url")
connect43.setProtoField("fragment")

IS42.addConnect(connect43)

ShaderPart41.setIS(IS42)

ComposedShader26.addParts(ShaderPart41)

Appearance17.addShaders(ComposedShader26)

Shape16.setAppearance(Appearance17)
Sphere44 = Sphere()

Shape16.setGeometry(Sphere44)

Transform15.addChildren(Shape16)
Script45 = Script()
Script45.setDEF("Animate")
field46 = field()
field46.setName("translation")
field46.setAccessType("inputOutput")
field46.setType("SFVec3f")
field46.setValue("0 0 0")

Script45.addField(field46)
field47 = field()
field47.setName("velocity")
field47.setAccessType("inputOutput")
field47.setType("SFVec3f")
field47.setValue("0 0 0")

Script45.addField(field47)
field48 = field()
field48.setName("set_fraction")
field48.setAccessType("inputOnly")
field48.setType("SFFloat")

Script45.addField(field48)
field49 = field()
field49.setName("a")
field49.setType("SFFloat")
field49.setAccessType("inputOutput")
field49.setValue("0.5")

Script45.addField(field49)
field50 = field()
field50.setName("b")
field50.setType("SFFloat")
field50.setAccessType("inputOutput")
field50.setValue("0.5")

Script45.addField(field50)
field51 = field()
field51.setName("c")
field51.setType("SFFloat")
field51.setAccessType("inputOutput")
field51.setValue("3")

Script45.addField(field51)
field52 = field()
field52.setName("d")
field52.setType("SFFloat")
field52.setAccessType("inputOutput")
field52.setValue("3")

Script45.addField(field52)
field53 = field()
field53.setName("tdelta")
field53.setType("SFFloat")
field53.setAccessType("inputOutput")
field53.setValue("0.5")

Script45.addField(field53)
field54 = field()
field54.setName("pdelta")
field54.setType("SFFloat")
field54.setAccessType("inputOutput")
field54.setValue("0.5")

Script45.addField(field54)

Script45.setSourceCode('''ecmascript:\n"+
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
"				var choice = Math.floor(Math.random() * 4);\n"+
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
"			}''')

Transform15.addChildren(Script45)
TimeSensor55 = TimeSensor()
TimeSensor55.setDEF("TourTime")
TimeSensor55.setCycleInterval(5)
TimeSensor55.setLoop(True)

Transform15.addChildren(TimeSensor55)
ROUTE56 = ROUTE()
ROUTE56.setFromNode("TourTime")
ROUTE56.setFromField("fraction_changed")
ROUTE56.setToNode("Animate")
ROUTE56.setToField("set_fraction")

Transform15.addChildren(ROUTE56)
ROUTE57 = ROUTE()
ROUTE57.setFromNode("Animate")
ROUTE57.setFromField("translation_changed")
ROUTE57.setToNode("transform")
ROUTE57.setToField("set_translation")

Transform15.addChildren(ROUTE57)
ROUTE58 = ROUTE()
ROUTE58.setFromNode("Animate")
ROUTE58.setFromField("a")
ROUTE58.setToNode("shader")
ROUTE58.setToField("a")

Transform15.addChildren(ROUTE58)
ROUTE59 = ROUTE()
ROUTE59.setFromNode("Animate")
ROUTE59.setFromField("b")
ROUTE59.setToNode("shader")
ROUTE59.setToField("b")

Transform15.addChildren(ROUTE59)
ROUTE60 = ROUTE()
ROUTE60.setFromNode("Animate")
ROUTE60.setFromField("c")
ROUTE60.setToNode("shader")
ROUTE60.setToField("c")

Transform15.addChildren(ROUTE60)
ROUTE61 = ROUTE()
ROUTE61.setFromNode("Animate")
ROUTE61.setFromField("d")
ROUTE61.setToNode("shader")
ROUTE61.setToField("d")

Transform15.addChildren(ROUTE61)
ROUTE62 = ROUTE()
ROUTE62.setFromNode("Animate")
ROUTE62.setFromField("tdelta")
ROUTE62.setToNode("shader")
ROUTE62.setToField("tdelta")

Transform15.addChildren(ROUTE62)
ROUTE63 = ROUTE()
ROUTE63.setFromNode("Animate")
ROUTE63.setFromField("pdelta")
ROUTE63.setToNode("shader")
ROUTE63.setToField("pdelta")

Transform15.addChildren(ROUTE63)

ProtoBody14.addChildren(Transform15)

ProtoDeclare10.setProtoBody(ProtoBody14)

Scene9.addChildren(ProtoDeclare10)

X3D0.setScene(Scene9)
X3D0.toFileX3D("../data/flowerproto.new.x3d")
