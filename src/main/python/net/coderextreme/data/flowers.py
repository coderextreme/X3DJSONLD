# -*- coding: UTF-8 -*-
from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = head()
component2 = component()
component2.setName("Scripting")
component2.setLevel(1)

head1.addComponent(component2)
component3 = component()
component3.setName("Shaders")
component3.setLevel(1)

head1.addComponent(component3)
component4 = component()
component4.setName("CubeMapTexturing")
component4.setLevel(1)

head1.addComponent(component4)
meta5 = meta()
meta5.setName("title")
meta5.setContent("flowers.x3d")

head1.addMeta(meta5)
meta6 = meta()
meta6.setName("creator")
meta6.setContent("John Carlson")

head1.addMeta(meta6)
meta7 = meta()
meta7.setName("description")
meta7.setContent("5 or more prismatic flowers")

head1.addMeta(meta7)
meta8 = meta()
meta8.setName("generator")
meta8.setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta8)
meta9 = meta()
meta9.setName("identifier")
meta9.setContent("https://coderextreme.net/X3DJSONLD/flowers.x3d")

head1.addMeta(meta9)

X3D0.setHead(head1)
Scene10 = Scene()
NavigationInfo11 = NavigationInfo()

Scene10.addChildren(NavigationInfo11)
#Images courtesy of Paul Debevec's Light Probe Image Gallery
Background12 = Background()
Background12.setBackUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])
Background12.setBottomUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])
Background12.setFrontUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])
Background12.setLeftUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])
Background12.setRightUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])
Background12.setTopUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])

Scene10.addChildren(Background12)
ProtoDeclare13 = ProtoDeclare()
ProtoDeclare13.setName("flower")
ProtoBody14 = ProtoBody()
Transform15 = Transform()
Transform15.setDEF("animate_transform")
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
ComposedShader26.setDEF("x3dom")
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
ShaderPart38.setUrl(["../shaders/x3dom_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"])
ShaderPart38.setType("VERTEX")

ComposedShader26.addParts(ShaderPart38)
ShaderPart39 = ShaderPart()
ShaderPart39.setUrl(["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"])
ShaderPart39.setType("FRAGMENT")

ComposedShader26.addParts(ShaderPart39)

Appearance17.addShaders(ComposedShader26)
ComposedShader40 = ComposedShader()
ComposedShader40.setDEF("x_ite")
ComposedShader40.setLanguage("GLSL")
field41 = field()
field41.setName("cube")
field41.setType("SFNode")
field41.setAccessType("inputOutput")
ComposedCubeMapTexture42 = ComposedCubeMapTexture()
ComposedCubeMapTexture42.setUSE("texture")

field41.addChildren(ComposedCubeMapTexture42)

ComposedShader40.addField(field41)
field43 = field()
field43.setName("chromaticDispertion")
field43.setAccessType("initializeOnly")
field43.setType("SFVec3f")
field43.setValue("0.98 1 1.033")

ComposedShader40.addField(field43)
field44 = field()
field44.setName("bias")
field44.setType("SFFloat")
field44.setAccessType("inputOnly")
field44.setValue("0.5")

ComposedShader40.addField(field44)
field45 = field()
field45.setName("scale")
field45.setType("SFFloat")
field45.setAccessType("inputOnly")
field45.setValue("0.5")

ComposedShader40.addField(field45)
field46 = field()
field46.setName("power")
field46.setType("SFFloat")
field46.setAccessType("inputOnly")
field46.setValue("2")

ComposedShader40.addField(field46)
field47 = field()
field47.setName("a")
field47.setType("SFFloat")
field47.setAccessType("inputOnly")
field47.setValue("10")

ComposedShader40.addField(field47)
field48 = field()
field48.setName("b")
field48.setType("SFFloat")
field48.setAccessType("inputOnly")
field48.setValue("1")

ComposedShader40.addField(field48)
field49 = field()
field49.setName("c")
field49.setType("SFFloat")
field49.setAccessType("inputOnly")
field49.setValue("20")

ComposedShader40.addField(field49)
field50 = field()
field50.setName("d")
field50.setType("SFFloat")
field50.setAccessType("inputOnly")
field50.setValue("20")

ComposedShader40.addField(field50)
field51 = field()
field51.setName("tdelta")
field51.setType("SFFloat")
field51.setAccessType("inputOnly")
field51.setValue("0")

ComposedShader40.addField(field51)
field52 = field()
field52.setName("pdelta")
field52.setType("SFFloat")
field52.setAccessType("inputOnly")
field52.setValue("0")

ComposedShader40.addField(field52)
ShaderPart53 = ShaderPart()
ShaderPart53.setUrl(["../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"])
ShaderPart53.setType("VERTEX")

ComposedShader40.addParts(ShaderPart53)
ShaderPart54 = ShaderPart()
ShaderPart54.setUrl(["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"])
ShaderPart54.setType("FRAGMENT")

ComposedShader40.addParts(ShaderPart54)

Appearance17.addShaders(ComposedShader40)

Shape16.setAppearance(Appearance17)
Sphere55 = Sphere()

Shape16.setGeometry(Sphere55)

Transform15.addChildren(Shape16)

ProtoBody14.addChildren(Transform15)
Script56 = Script()
Script56.setDEF("Animate")
field57 = field()
field57.setName("translation")
field57.setAccessType("inputOutput")
field57.setType("SFVec3f")
field57.setValue("0 0 0")

Script56.addField(field57)
field58 = field()
field58.setName("velocity")
field58.setAccessType("inputOutput")
field58.setType("SFVec3f")
field58.setValue("0 0 0")

Script56.addField(field58)
field59 = field()
field59.setName("set_fraction")
field59.setAccessType("inputOnly")
field59.setType("SFFloat")

Script56.addField(field59)
field60 = field()
field60.setName("a")
field60.setType("SFFloat")
field60.setAccessType("inputOutput")
field60.setValue("0.5")

Script56.addField(field60)
field61 = field()
field61.setName("b")
field61.setType("SFFloat")
field61.setAccessType("inputOutput")
field61.setValue("0.5")

Script56.addField(field61)
field62 = field()
field62.setName("c")
field62.setType("SFFloat")
field62.setAccessType("inputOutput")
field62.setValue("3")

Script56.addField(field62)
field63 = field()
field63.setName("d")
field63.setType("SFFloat")
field63.setAccessType("inputOutput")
field63.setValue("3")

Script56.addField(field63)
field64 = field()
field64.setName("tdelta")
field64.setType("SFFloat")
field64.setAccessType("inputOutput")
field64.setValue("0.5")

Script56.addField(field64)
field65 = field()
field65.setName("pdelta")
field65.setType("SFFloat")
field65.setAccessType("inputOutput")
field65.setValue("0.5")

Script56.addField(field65)

Script56.setSourceCode('''ecmascript:\n"+
"\n"+
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

ProtoBody14.addChildren(Script56)
TimeSensor66 = TimeSensor()
TimeSensor66.setDEF("TourTime")
TimeSensor66.setCycleInterval(5)
TimeSensor66.setLoop(True)

ProtoBody14.addChildren(TimeSensor66)
ROUTE67 = ROUTE()
ROUTE67.setFromNode("TourTime")
ROUTE67.setFromField("fraction_changed")
ROUTE67.setToNode("Animate")
ROUTE67.setToField("set_fraction")

ProtoBody14.addChildren(ROUTE67)
ROUTE68 = ROUTE()
ROUTE68.setFromNode("Animate")
ROUTE68.setFromField("translation_changed")
ROUTE68.setToNode("animate_transform")
ROUTE68.setToField("set_translation")

ProtoBody14.addChildren(ROUTE68)
ROUTE69 = ROUTE()
ROUTE69.setFromNode("Animate")
ROUTE69.setFromField("a")
ROUTE69.setToNode("x_ite")
ROUTE69.setToField("a")

ProtoBody14.addChildren(ROUTE69)
ROUTE70 = ROUTE()
ROUTE70.setFromNode("Animate")
ROUTE70.setFromField("b")
ROUTE70.setToNode("x_ite")
ROUTE70.setToField("b")

ProtoBody14.addChildren(ROUTE70)
ROUTE71 = ROUTE()
ROUTE71.setFromNode("Animate")
ROUTE71.setFromField("c")
ROUTE71.setToNode("x_ite")
ROUTE71.setToField("c")

ProtoBody14.addChildren(ROUTE71)
ROUTE72 = ROUTE()
ROUTE72.setFromNode("Animate")
ROUTE72.setFromField("d")
ROUTE72.setToNode("x_ite")
ROUTE72.setToField("d")

ProtoBody14.addChildren(ROUTE72)
ROUTE73 = ROUTE()
ROUTE73.setFromNode("Animate")
ROUTE73.setFromField("pdelta")
ROUTE73.setToNode("x_ite")
ROUTE73.setToField("pdelta")

ProtoBody14.addChildren(ROUTE73)
ROUTE74 = ROUTE()
ROUTE74.setFromNode("Animate")
ROUTE74.setFromField("tdelta")
ROUTE74.setToNode("x_ite")
ROUTE74.setToField("tdelta")

ProtoBody14.addChildren(ROUTE74)
ROUTE75 = ROUTE()
ROUTE75.setFromNode("Animate")
ROUTE75.setFromField("a")
ROUTE75.setToNode("x3dom")
ROUTE75.setToField("a")

ProtoBody14.addChildren(ROUTE75)
ROUTE76 = ROUTE()
ROUTE76.setFromNode("Animate")
ROUTE76.setFromField("b")
ROUTE76.setToNode("x3dom")
ROUTE76.setToField("b")

ProtoBody14.addChildren(ROUTE76)
ROUTE77 = ROUTE()
ROUTE77.setFromNode("Animate")
ROUTE77.setFromField("c")
ROUTE77.setToNode("x3dom")
ROUTE77.setToField("c")

ProtoBody14.addChildren(ROUTE77)
ROUTE78 = ROUTE()
ROUTE78.setFromNode("Animate")
ROUTE78.setFromField("d")
ROUTE78.setToNode("x3dom")
ROUTE78.setToField("d")

ProtoBody14.addChildren(ROUTE78)
ROUTE79 = ROUTE()
ROUTE79.setFromNode("Animate")
ROUTE79.setFromField("pdelta")
ROUTE79.setToNode("x3dom")
ROUTE79.setToField("pdelta")

ProtoBody14.addChildren(ROUTE79)
ROUTE80 = ROUTE()
ROUTE80.setFromNode("Animate")
ROUTE80.setFromField("tdelta")
ROUTE80.setToNode("x3dom")
ROUTE80.setToField("tdelta")

ProtoBody14.addChildren(ROUTE80)

ProtoDeclare13.setProtoBody(ProtoBody14)

Scene10.addChildren(ProtoDeclare13)
ProtoInstance81 = ProtoInstance()
ProtoInstance81.setName("flower")

Scene10.addChildren(ProtoInstance81)
ProtoInstance82 = ProtoInstance()
ProtoInstance82.setName("flower")

Scene10.addChildren(ProtoInstance82)
ProtoInstance83 = ProtoInstance()
ProtoInstance83.setName("flower")

Scene10.addChildren(ProtoInstance83)

X3D0.setScene(Scene10)
X3D0.toFileX3D("../data/flowers.new.x3d")
