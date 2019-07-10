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
meta4.setContent("flowers.x3d")

head1.addMeta(meta4)
meta5 = meta()
meta5.setName("creator")
meta5.setContent("John Carlson")

head1.addMeta(meta5)
meta6 = meta()
meta6.setName("description")
meta6.setContent("5 or more prismatic flowers")

head1.addMeta(meta6)
meta7 = meta()
meta7.setName("generator")
meta7.setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta7)
meta8 = meta()
meta8.setName("identifier")
meta8.setContent("https://coderextreme.net/X3DJSONLD/flowers.x3d")

head1.addMeta(meta8)

X3D0.setHead(head1)
Scene9 = Scene()
NavigationInfo10 = NavigationInfo()

Scene9.addChildren(NavigationInfo10)
#Images courtesy of Paul Debevec's Light Probe Image Gallery
Background11 = Background()
Background11.setBackUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])
Background11.setBottomUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])
Background11.setFrontUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])
Background11.setLeftUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])
Background11.setRightUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])
Background11.setTopUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])

Scene9.addChildren(Background11)
ProtoDeclare12 = ProtoDeclare()
ProtoDeclare12.setName("flower")
ProtoBody13 = ProtoBody()
Transform14 = Transform()
Transform14.setDEF("animate_transform")
Shape15 = Shape()
Appearance16 = Appearance()
Material17 = Material()
Material17.setDiffuseColor([0.7,0.7,0.7])
Material17.setSpecularColor([0.5,0.5,0.5])

Appearance16.setMaterial(Material17)
ComposedCubeMapTexture18 = ComposedCubeMapTexture()
ComposedCubeMapTexture18.setDEF("texture")
ImageTexture19 = ImageTexture()
ImageTexture19.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])

ComposedCubeMapTexture18.setBack(ImageTexture19)
ImageTexture20 = ImageTexture()
ImageTexture20.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])

ComposedCubeMapTexture18.setBottom(ImageTexture20)
ImageTexture21 = ImageTexture()
ImageTexture21.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])

ComposedCubeMapTexture18.setFront(ImageTexture21)
ImageTexture22 = ImageTexture()
ImageTexture22.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])

ComposedCubeMapTexture18.setLeft(ImageTexture22)
ImageTexture23 = ImageTexture()
ImageTexture23.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])

ComposedCubeMapTexture18.setRight(ImageTexture23)
ImageTexture24 = ImageTexture()
ImageTexture24.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])

ComposedCubeMapTexture18.setTop(ImageTexture24)

Appearance16.setTexture(ComposedCubeMapTexture18)
ComposedShader25 = ComposedShader()
ComposedShader25.setDEF("x3dom")
ComposedShader25.setLanguage("GLSL")
field26 = field()
field26.setName("cube")
field26.setType("SFInt32")
field26.setAccessType("inputOutput")
field26.setValue("0")

ComposedShader25.addField(field26)
field27 = field()
field27.setName("chromaticDispertion")
field27.setAccessType("initializeOnly")
field27.setType("SFVec3f")
field27.setValue("0.98 1 1.033")

ComposedShader25.addField(field27)
field28 = field()
field28.setName("bias")
field28.setType("SFFloat")
field28.setAccessType("inputOutput")
field28.setValue("0.5")

ComposedShader25.addField(field28)
field29 = field()
field29.setName("scale")
field29.setType("SFFloat")
field29.setAccessType("inputOutput")
field29.setValue("0.5")

ComposedShader25.addField(field29)
field30 = field()
field30.setName("power")
field30.setType("SFFloat")
field30.setAccessType("inputOutput")
field30.setValue("2")

ComposedShader25.addField(field30)
field31 = field()
field31.setName("a")
field31.setType("SFFloat")
field31.setAccessType("inputOutput")
field31.setValue("10")

ComposedShader25.addField(field31)
field32 = field()
field32.setName("b")
field32.setType("SFFloat")
field32.setAccessType("inputOutput")
field32.setValue("1")

ComposedShader25.addField(field32)
field33 = field()
field33.setName("c")
field33.setType("SFFloat")
field33.setAccessType("inputOutput")
field33.setValue("20")

ComposedShader25.addField(field33)
field34 = field()
field34.setName("d")
field34.setType("SFFloat")
field34.setAccessType("inputOutput")
field34.setValue("20")

ComposedShader25.addField(field34)
field35 = field()
field35.setName("tdelta")
field35.setType("SFFloat")
field35.setAccessType("inputOutput")
field35.setValue("0")

ComposedShader25.addField(field35)
field36 = field()
field36.setName("pdelta")
field36.setType("SFFloat")
field36.setAccessType("inputOutput")
field36.setValue("0")

ComposedShader25.addField(field36)
#<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>
ShaderPart37 = ShaderPart()
ShaderPart37.setUrl(["../shaders/x3dom_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"])
ShaderPart37.setType("VERTEX")

ComposedShader25.addParts(ShaderPart37)
ShaderPart38 = ShaderPart()
ShaderPart38.setUrl(["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"])
ShaderPart38.setType("FRAGMENT")

ComposedShader25.addParts(ShaderPart38)

Appearance16.addShaders(ComposedShader25)
ComposedShader39 = ComposedShader()
ComposedShader39.setDEF("x_ite")
ComposedShader39.setLanguage("GLSL")
field40 = field()
field40.setName("cube")
field40.setType("SFNode")
field40.setAccessType("inputOutput")
ComposedCubeMapTexture41 = ComposedCubeMapTexture()
ComposedCubeMapTexture41.setUSE("texture")

field40.addChildren(ComposedCubeMapTexture41)

ComposedShader39.addField(field40)
field42 = field()
field42.setName("chromaticDispertion")
field42.setAccessType("initializeOnly")
field42.setType("SFVec3f")
field42.setValue("0.98 1 1.033")

ComposedShader39.addField(field42)
field43 = field()
field43.setName("bias")
field43.setType("SFFloat")
field43.setAccessType("inputOnly")
field43.setValue("0.5")

ComposedShader39.addField(field43)
field44 = field()
field44.setName("scale")
field44.setType("SFFloat")
field44.setAccessType("inputOnly")
field44.setValue("0.5")

ComposedShader39.addField(field44)
field45 = field()
field45.setName("power")
field45.setType("SFFloat")
field45.setAccessType("inputOnly")
field45.setValue("2")

ComposedShader39.addField(field45)
field46 = field()
field46.setName("a")
field46.setType("SFFloat")
field46.setAccessType("inputOnly")
field46.setValue("10")

ComposedShader39.addField(field46)
field47 = field()
field47.setName("b")
field47.setType("SFFloat")
field47.setAccessType("inputOnly")
field47.setValue("1")

ComposedShader39.addField(field47)
field48 = field()
field48.setName("c")
field48.setType("SFFloat")
field48.setAccessType("inputOnly")
field48.setValue("20")

ComposedShader39.addField(field48)
field49 = field()
field49.setName("d")
field49.setType("SFFloat")
field49.setAccessType("inputOnly")
field49.setValue("20")

ComposedShader39.addField(field49)
field50 = field()
field50.setName("tdelta")
field50.setType("SFFloat")
field50.setAccessType("inputOnly")
field50.setValue("0")

ComposedShader39.addField(field50)
field51 = field()
field51.setName("pdelta")
field51.setType("SFFloat")
field51.setAccessType("inputOnly")
field51.setValue("0")

ComposedShader39.addField(field51)
ShaderPart52 = ShaderPart()
ShaderPart52.setUrl(["../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"])
ShaderPart52.setType("VERTEX")

ComposedShader39.addParts(ShaderPart52)
ShaderPart53 = ShaderPart()
ShaderPart53.setUrl(["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"])
ShaderPart53.setType("FRAGMENT")

ComposedShader39.addParts(ShaderPart53)

Appearance16.addShaders(ComposedShader39)

Shape15.setAppearance(Appearance16)
Sphere54 = Sphere()

Shape15.setGeometry(Sphere54)

Transform14.addChildren(Shape15)

ProtoBody13.addChildren(Transform14)
Script55 = Script()
Script55.setDEF("Animate")
field56 = field()
field56.setName("translation")
field56.setAccessType("inputOutput")
field56.setType("SFVec3f")
field56.setValue("0 0 0")

Script55.addField(field56)
field57 = field()
field57.setName("velocity")
field57.setAccessType("inputOutput")
field57.setType("SFVec3f")
field57.setValue("0 0 0")

Script55.addField(field57)
field58 = field()
field58.setName("set_fraction")
field58.setAccessType("inputOnly")
field58.setType("SFFloat")

Script55.addField(field58)
field59 = field()
field59.setName("a")
field59.setType("SFFloat")
field59.setAccessType("inputOutput")
field59.setValue("0.5")

Script55.addField(field59)
field60 = field()
field60.setName("b")
field60.setType("SFFloat")
field60.setAccessType("inputOutput")
field60.setValue("0.5")

Script55.addField(field60)
field61 = field()
field61.setName("c")
field61.setType("SFFloat")
field61.setAccessType("inputOutput")
field61.setValue("3")

Script55.addField(field61)
field62 = field()
field62.setName("d")
field62.setType("SFFloat")
field62.setAccessType("inputOutput")
field62.setValue("3")

Script55.addField(field62)
field63 = field()
field63.setName("tdelta")
field63.setType("SFFloat")
field63.setAccessType("inputOutput")
field63.setValue("0.5")

Script55.addField(field63)
field64 = field()
field64.setName("pdelta")
field64.setType("SFFloat")
field64.setAccessType("inputOutput")
field64.setValue("0.5")

Script55.addField(field64)

Script55.setSourceCode('''ecmascript:\n"+
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

ProtoBody13.addChildren(Script55)
TimeSensor65 = TimeSensor()
TimeSensor65.setDEF("TourTime")
TimeSensor65.setCycleInterval(5)
TimeSensor65.setLoop(True)

ProtoBody13.addChildren(TimeSensor65)
ROUTE66 = ROUTE()
ROUTE66.setFromNode("TourTime")
ROUTE66.setFromField("fraction_changed")
ROUTE66.setToNode("Animate")
ROUTE66.setToField("set_fraction")

ProtoBody13.addChildren(ROUTE66)
ROUTE67 = ROUTE()
ROUTE67.setFromNode("Animate")
ROUTE67.setFromField("translation_changed")
ROUTE67.setToNode("animate_transform")
ROUTE67.setToField("set_translation")

ProtoBody13.addChildren(ROUTE67)
ROUTE68 = ROUTE()
ROUTE68.setFromNode("Animate")
ROUTE68.setFromField("a")
ROUTE68.setToNode("x_ite")
ROUTE68.setToField("a")

ProtoBody13.addChildren(ROUTE68)
ROUTE69 = ROUTE()
ROUTE69.setFromNode("Animate")
ROUTE69.setFromField("b")
ROUTE69.setToNode("x_ite")
ROUTE69.setToField("b")

ProtoBody13.addChildren(ROUTE69)
ROUTE70 = ROUTE()
ROUTE70.setFromNode("Animate")
ROUTE70.setFromField("c")
ROUTE70.setToNode("x_ite")
ROUTE70.setToField("c")

ProtoBody13.addChildren(ROUTE70)
ROUTE71 = ROUTE()
ROUTE71.setFromNode("Animate")
ROUTE71.setFromField("d")
ROUTE71.setToNode("x_ite")
ROUTE71.setToField("d")

ProtoBody13.addChildren(ROUTE71)
ROUTE72 = ROUTE()
ROUTE72.setFromNode("Animate")
ROUTE72.setFromField("pdelta")
ROUTE72.setToNode("x_ite")
ROUTE72.setToField("pdelta")

ProtoBody13.addChildren(ROUTE72)
ROUTE73 = ROUTE()
ROUTE73.setFromNode("Animate")
ROUTE73.setFromField("tdelta")
ROUTE73.setToNode("x_ite")
ROUTE73.setToField("tdelta")

ProtoBody13.addChildren(ROUTE73)
ROUTE74 = ROUTE()
ROUTE74.setFromNode("Animate")
ROUTE74.setFromField("a")
ROUTE74.setToNode("x3dom")
ROUTE74.setToField("a")

ProtoBody13.addChildren(ROUTE74)
ROUTE75 = ROUTE()
ROUTE75.setFromNode("Animate")
ROUTE75.setFromField("b")
ROUTE75.setToNode("x3dom")
ROUTE75.setToField("b")

ProtoBody13.addChildren(ROUTE75)
ROUTE76 = ROUTE()
ROUTE76.setFromNode("Animate")
ROUTE76.setFromField("c")
ROUTE76.setToNode("x3dom")
ROUTE76.setToField("c")

ProtoBody13.addChildren(ROUTE76)
ROUTE77 = ROUTE()
ROUTE77.setFromNode("Animate")
ROUTE77.setFromField("d")
ROUTE77.setToNode("x3dom")
ROUTE77.setToField("d")

ProtoBody13.addChildren(ROUTE77)
ROUTE78 = ROUTE()
ROUTE78.setFromNode("Animate")
ROUTE78.setFromField("pdelta")
ROUTE78.setToNode("x3dom")
ROUTE78.setToField("pdelta")

ProtoBody13.addChildren(ROUTE78)
ROUTE79 = ROUTE()
ROUTE79.setFromNode("Animate")
ROUTE79.setFromField("tdelta")
ROUTE79.setToNode("x3dom")
ROUTE79.setToField("tdelta")

ProtoBody13.addChildren(ROUTE79)

ProtoDeclare12.setProtoBody(ProtoBody13)

Scene9.addChildren(ProtoDeclare12)
ProtoInstance80 = ProtoInstance()
ProtoInstance80.setName("flower")

Scene9.addChildren(ProtoInstance80)
ProtoInstance81 = ProtoInstance()
ProtoInstance81.setName("flower")

Scene9.addChildren(ProtoInstance81)
ProtoInstance82 = ProtoInstance()
ProtoInstance82.setName("flower")

Scene9.addChildren(ProtoInstance82)

X3D0.setScene(Scene9)
X3D0.toFileX3D("../data/flowers.new.x3d")
