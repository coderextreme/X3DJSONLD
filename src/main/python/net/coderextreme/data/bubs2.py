# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 = X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = headObject()
meta2 = metaObject()
meta2.setName("title")
meta2.setContent("geo.x3d")

head1.addMeta(meta2)
meta3 = metaObject()
meta3.setName("creator")
meta3.setContent("John Carlson")

head1.addMeta(meta3)
meta4 = metaObject()
meta4.setName("description")
meta4.setContent("Tour around a prismatic sphere")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("generator")
meta5.setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("identifier")
meta6.setContent("https://coderextreme.net/X3DJSONLD/geo.x3d")

head1.addMeta(meta6)
meta7 = metaObject()
meta7.setName("translated")
meta7.setContent("13 March 2016")

head1.addMeta(meta7)
meta8 = metaObject()
meta8.setName("generator")
meta8.setContent("X3dToJson.xslt, http://www.web3d.org/x3d/stylesheets/X3dToJson.html")

head1.addMeta(meta8)

X3D0.setHead(head1)
Scene9 = SceneObject()
NavigationInfo10 = NavigationInfoObject()
NavigationInfo10.setType(["EXAMINE"])

Scene9.addChildren(NavigationInfo10)
Viewpoint11 = ViewpointObject()
Viewpoint11.setPosition([0,0,4])
Viewpoint11.setOrientation([1,0,0,0])
Viewpoint11.setDescription("Bubbles in action")

Scene9.addChildren(Viewpoint11)
Background12 = BackgroundObject()
Background12.setBackUrl(["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/images/BK.png"])
Background12.setBottomUrl(["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/images/BT.png"])
Background12.setFrontUrl(["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/images/FR.png"])
Background12.setLeftUrl(["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/images/LF.png"])
Background12.setRightUrl(["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/images/RT.png"])
Background12.setTopUrl(["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/images/TP.png"])

Scene9.addChildren(Background12)
ProtoDeclare13 = ProtoDeclareObject()
ProtoDeclare13.setName("Bubble")
ProtoBody14 = ProtoBodyObject()
Transform15 = TransformObject()
Transform15.setDEF("transform")
Shape16 = ShapeObject()
Sphere17 = SphereObject()
Sphere17.setRadius(0.25)

Shape16.setGeometry(Sphere17)
Appearance18 = AppearanceObject()
Material19 = MaterialObject()
Material19.setDiffuseColor([1,0,0])
Material19.setTransparency(0.2)

Appearance18.setMaterial(Material19)

Shape16.setAppearance(Appearance18)

Transform15.addChildren(Shape16)
Script20 = ScriptObject()
Script20.setDEF("bounce")
field21 = fieldObject()
field21.setName("scale")
field21.setAccessType("inputOutput")
field21.setType("SFVec3f")
field21.setValue("1 1 1")

Script20.addField(field21)
field22 = fieldObject()
field22.setName("translation")
field22.setAccessType("inputOutput")
field22.setType("SFVec3f")
field22.setValue("0 0 0")

Script20.addField(field22)
field23 = fieldObject()
field23.setName("velocity")
field23.setAccessType("inputOutput")
field23.setType("SFVec3f")
field23.setValue("0 0 0")

Script20.addField(field23)
field24 = fieldObject()
field24.setName("scalvel")
field24.setAccessType("inputOutput")
field24.setType("SFVec3f")
field24.setValue("0 0 0")

Script20.addField(field24)
field25 = fieldObject()
field25.setName("set_fraction")
field25.setAccessType("inputOnly")
field25.setType("SFFloat")

Script20.addField(field25)

Script20.setSourceCode('''ecmascript:\n"+
"function initialize() {\n"+
"    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\n"+
"\n"+
"    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\n"+
"}\n"+
"\n"+
"function set_fraction(value) {\n"+
"    if (typeof translation === 'undefined') {\n"+
"		translation = new SFVec3f(0, 0, 0);\n"+
"    }\n"+
"    if (typeof velocity === 'undefined') {\n"+
"		velocity = new SFVec3f(0, 0, 0);\n"+
"    }\n"+
"    if (typeof scalvel === 'undefined') {\n"+
"		scalvel = new SFVec3f(0, 0, 0);\n"+
"    }\n"+
"    if (typeof scale === 'undefined') {\n"+
"		scale = new SFVec3f(1, 1, 1);\n"+
"    }\n"+
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

Transform15.addChildren(Script20)
TimeSensor26 = TimeSensorObject()
TimeSensor26.setDEF("bubbleClock")
TimeSensor26.setCycleInterval(10)
TimeSensor26.setLoop(True)

Transform15.addChildren(TimeSensor26)
ROUTE27 = ROUTEObject()
ROUTE27.setFromNode("bounce")
ROUTE27.setFromField("translation_changed")
ROUTE27.setToNode("transform")
ROUTE27.setToField("set_translation")

Transform15.addChildren(ROUTE27)
ROUTE28 = ROUTEObject()
ROUTE28.setFromNode("bounce")
ROUTE28.setFromField("scale_changed")
ROUTE28.setToNode("transform")
ROUTE28.setToField("set_scale")

Transform15.addChildren(ROUTE28)
ROUTE29 = ROUTEObject()
ROUTE29.setFromNode("bubbleClock")
ROUTE29.setFromField("fraction_changed")
ROUTE29.setToNode("bounce")
ROUTE29.setToField("set_fraction")

Transform15.addChildren(ROUTE29)

ProtoBody14.addChildren(Transform15)

ProtoDeclare13.setProtoBody(ProtoBody14)

Scene9.addChildren(ProtoDeclare13)
ProtoInstance30 = ProtoInstanceObject()
ProtoInstance30.setName("Bubble")
ProtoInstance30.setDEF("bubbleA")

Scene9.addChildren(ProtoInstance30)
ProtoInstance31 = ProtoInstanceObject()
ProtoInstance31.setName("Bubble")
ProtoInstance31.setDEF("bubbleB")

Scene9.addChildren(ProtoInstance31)
ProtoInstance32 = ProtoInstanceObject()
ProtoInstance32.setName("Bubble")
ProtoInstance32.setDEF("bubbleC")

Scene9.addChildren(ProtoInstance32)
ProtoInstance33 = ProtoInstanceObject()
ProtoInstance33.setName("Bubble")
ProtoInstance33.setDEF("bubbleD")

Scene9.addChildren(ProtoInstance33)

X3D0.setScene(Scene9)
X3D0.toFileX3D("../data/bubs2.new.x3d")
