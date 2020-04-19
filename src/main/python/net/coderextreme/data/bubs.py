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
meta3 = meta()
meta3.setName("title")
meta3.setContent("bubs.x3d")

head1.addMeta(meta3)
meta4 = meta()
meta4.setName("creator")
meta4.setContent("John Carlson")

head1.addMeta(meta4)
meta5 = meta()
meta5.setName("description")
meta5.setContent("Tour around a prismatic sphere")

head1.addMeta(meta5)
meta6 = meta()
meta6.setName("generator")
meta6.setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta6)
meta7 = meta()
meta7.setName("identifier")
meta7.setContent("https://coderextreme.net/X3DJSONLD/bubs.x3d")

head1.addMeta(meta7)

X3D0.setHead(head1)
Scene8 = Scene()
NavigationInfo9 = NavigationInfo()
NavigationInfo9.setType(["EXAMINE"])

Scene8.addChildren(NavigationInfo9)
Viewpoint10 = Viewpoint()
Viewpoint10.setPosition([0,0,4])
Viewpoint10.setOrientation([1,0,0,0])
Viewpoint10.setDescription("Bubbles in action")

Scene8.addChildren(Viewpoint10)
Background11 = Background()
Background11.setBackUrl(["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/images/BK.png"])
Background11.setBottomUrl(["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/images/BT.png"])
Background11.setFrontUrl(["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/images/FR.png"])
Background11.setLeftUrl(["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/images/LF.png"])
Background11.setRightUrl(["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/images/RT.png"])
Background11.setTopUrl(["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/images/TP.png"])

Scene8.addChildren(Background11)
ProtoDeclare12 = ProtoDeclare()
ProtoDeclare12.setName("Bubble")
ProtoBody13 = ProtoBody()
Transform14 = Transform()
Transform14.setDEF("transform")
Shape15 = Shape()
Sphere16 = Sphere()
Sphere16.setRadius(0.25)

Shape15.setGeometry(Sphere16)
Appearance17 = Appearance()
Material18 = Material()
Material18.setDiffuseColor([1,0,0])
Material18.setTransparency(0.2)

Appearance17.setMaterial(Material18)

Shape15.setAppearance(Appearance17)

Transform14.addChildren(Shape15)
Script19 = Script()
Script19.setDEF("bounce")
field20 = field()
field20.setName("scale")
field20.setAccessType("inputOutput")
field20.setType("SFVec3f")
field20.setValue("1 1 1")

Script19.addField(field20)
field21 = field()
field21.setName("translation")
field21.setAccessType("inputOutput")
field21.setType("SFVec3f")
field21.setValue("0 0 0")

Script19.addField(field21)
field22 = field()
field22.setName("velocity")
field22.setAccessType("inputOutput")
field22.setType("SFVec3f")
field22.setValue("0 0 0")

Script19.addField(field22)
field23 = field()
field23.setName("scalvel")
field23.setAccessType("inputOutput")
field23.setType("SFVec3f")
field23.setValue("0 0 0")

Script19.addField(field23)
field24 = field()
field24.setName("set_fraction")
field24.setAccessType("inputOnly")
field24.setType("SFFloat")

Script19.addField(field24)

Script19.setSourceCode('''ecmascript:\n"+
"function initialize() {\n"+
"    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\n"+
"\n"+
"    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\n"+
"}\n"+
"\n"+
"function set_fraction(value) {\n"+
"    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);\n"+
"    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);\n"+
"    // if you get to far away or too big, explode\n"+
"    if ( Math.abs(translation.x) > 256) {\n"+
"	translation.x = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if ( Math.abs(translation.y) > 256) {\n"+
"	translation.y = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if ( Math.abs(translation.z) > 256) {\n"+
"	translation.z = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.x) > 20) {\n"+
"	scale.x = scale.x/20;\n"+
"	translation.x = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.y) > 20) {\n"+
"	scale.y = scale.y/20;\n"+
"	translation.y = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.z) > 20) {\n"+
"	scale.z = scale.z/20;\n"+
"	translation.z = 0;\n"+
"	initialize();\n"+
"    }\n"+
"}''')

Transform14.addChildren(Script19)
TimeSensor25 = TimeSensor()
TimeSensor25.setDEF("bubbleClock")
TimeSensor25.setCycleInterval(10)
TimeSensor25.setLoop(True)

Transform14.addChildren(TimeSensor25)
ROUTE26 = ROUTE()
ROUTE26.setFromNode("bounce")
ROUTE26.setFromField("translation_changed")
ROUTE26.setToNode("transform")
ROUTE26.setToField("set_translation")

Transform14.addChildren(ROUTE26)
ROUTE27 = ROUTE()
ROUTE27.setFromNode("bounce")
ROUTE27.setFromField("scale_changed")
ROUTE27.setToNode("transform")
ROUTE27.setToField("set_scale")

Transform14.addChildren(ROUTE27)
ROUTE28 = ROUTE()
ROUTE28.setFromNode("bubbleClock")
ROUTE28.setFromField("fraction_changed")
ROUTE28.setToNode("bounce")
ROUTE28.setToField("set_fraction")

Transform14.addChildren(ROUTE28)

ProtoBody13.addChildren(Transform14)

ProtoDeclare12.setProtoBody(ProtoBody13)

Scene8.addChildren(ProtoDeclare12)
ProtoInstance29 = ProtoInstance()
ProtoInstance29.setName("Bubble")
ProtoInstance29.setDEF("bubbleA")

Scene8.addChildren(ProtoInstance29)
ProtoInstance30 = ProtoInstance()
ProtoInstance30.setName("Bubble")
ProtoInstance30.setDEF("bubbleB")

Scene8.addChildren(ProtoInstance30)
ProtoInstance31 = ProtoInstance()
ProtoInstance31.setName("Bubble")
ProtoInstance31.setDEF("bubbleC")

Scene8.addChildren(ProtoInstance31)
ProtoInstance32 = ProtoInstance()
ProtoInstance32.setName("Bubble")
ProtoInstance32.setDEF("bubbleD")

Scene8.addChildren(ProtoInstance32)

X3D0.setScene(Scene8)
X3D0.toFileX3D("../data/bubs.new.x3d")
