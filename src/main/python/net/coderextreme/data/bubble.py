# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

head1 = headObject()

meta2 = metaObject()
meta2.setName("title")
meta2.setContent("bubble.x3d")

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
meta6.setContent("https://coderextreme.net/X3DJSONLD/bubble.x3d")

head1.addMeta(meta6)
X3D0.setHead(head1)
Scene7 = SceneObject()

NavigationInfo8 = NavigationInfoObject()
NavigationInfo8.setType(["EXAMINE"])

Scene7.addChild(NavigationInfo8)
Viewpoint9 = ViewpointObject()
Viewpoint9.setPosition([0,0,4])
Viewpoint9.setOrientation([1,0,0,0])
Viewpoint9.setDescription("Bubble in action")

Scene7.addChild(Viewpoint9)
ProtoDeclare10 = ProtoDeclareObject()
ProtoDeclare10.setName("Bubble")

ProtoBody11 = ProtoBodyObject()

Transform12 = TransformObject()
Transform12.setDEF("transform")

Shape13 = ShapeObject()

Sphere14 = SphereObject()
Sphere14.setRadius(0.25)

Shape13.setGeometry(Sphere14)
Appearance15 = AppearanceObject()

Material16 = MaterialObject()
Material16.setDiffuseColor([1,0,0])
Material16.setTransparency(0.2)

Appearance15.setMaterial(Material16)
Shape13.setAppearance(Appearance15)
Transform12.addChild(Shape13)
Script17 = ScriptObject()
Script17.setDEF("bounce")

field18 = fieldObject()
field18.setType(fieldObject.TYPE_SFVEC3F)
field18.setName("scale")
field18.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field18.setValue("1 1 1")

Script17.addField(field18)
field19 = fieldObject()
field19.setType(fieldObject.TYPE_SFVEC3F)
field19.setName("translation")
field19.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field19.setValue("0 0 0")

Script17.addField(field19)
field20 = fieldObject()
field20.setType(fieldObject.TYPE_SFVEC3F)
field20.setName("velocity")
field20.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field20.setValue("0 0 0")

Script17.addField(field20)
field21 = fieldObject()
field21.setType(fieldObject.TYPE_SFVEC3F)
field21.setName("scalvel")
field21.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field21.setValue("0 0 0")

Script17.addField(field21)
field22 = fieldObject()
field22.setType(fieldObject.TYPE_SFFLOAT)
field22.setName("set_fraction")
field22.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script17.addField(field22)

Script17.setSourceCode("ecmascript:\n"+
"function initialize() {\n"+
"    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\n"+
"\n"+
"    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\n"+
"}\n"+
"\n"+
"function set_fraction(value) {\n"+
"	translation = new SFVec3f(\n"+
"		translation.x + velocity.x,\n"+
"		translation.y + velocity.y,\n"+
"		translation.z + velocity.z);\n"+
"	scale = new SFVec3f(\n"+
"		scale.x + scalvel.x,\n"+
"		scale.y + scalvel.y,\n"+
"		scale.z + scalvel.z);\n"+
"        // if you get to far away or too big, explode\n"+
"        if ( Math.abs(translation.x) > 256) {\n"+
"		translation.x = 0;\n"+
"		initialize();\n"+
"	}\n"+
"        if ( Math.abs(translation.y) > 256) {\n"+
"		translation.y = 0;\n"+
"		initialize();\n"+
"	}\n"+
"        if ( Math.abs(translation.z) > 256) {\n"+
"		translation.z = 0;\n"+
"		initialize();\n"+
"	}\n"+
"	if (Math.abs(scale.x) > 20) {\n"+
"		scale.x = scale.x/2;\n"+
"		translation.x = 0;\n"+
"		initialize();\n"+
"	}\n"+
"	if (Math.abs(scale.y) > 20) {\n"+
"		scale.y = scale.y/2;\n"+
"		translation.y = 0;\n"+
"		initialize();\n"+
"	}\n"+
"	if (Math.abs(scale.z) > 20) {\n"+
"		scale.z = scale.z/2;\n"+
"		translation.z = 0;\n"+
"		initialize();\n"+
"	}\n"+
"}\n"+
"")
Transform12.addChild(Script17)
TimeSensor23 = TimeSensorObject()
TimeSensor23.setDEF("bubbleClock")
TimeSensor23.setCycleInterval(10)
TimeSensor23.setLoop(True)

Transform12.addChild(TimeSensor23)
ROUTE24 = ROUTEObject()
ROUTE24.setFromNode("bounce")
ROUTE24.setFromField("translation_changed")
ROUTE24.setToNode("transform")
ROUTE24.setToField("set_translation")

Transform12.addChild(ROUTE24)
ROUTE25 = ROUTEObject()
ROUTE25.setFromNode("bounce")
ROUTE25.setFromField("scale_changed")
ROUTE25.setToNode("transform")
ROUTE25.setToField("set_scale")

Transform12.addChild(ROUTE25)
ROUTE26 = ROUTEObject()
ROUTE26.setFromNode("bubbleClock")
ROUTE26.setFromField("fraction_changed")
ROUTE26.setToNode("bounce")
ROUTE26.setToField("set_fraction")

Transform12.addChild(ROUTE26)
ProtoBody11.addChild(Transform12)
ProtoDeclare10.setProtoBody(ProtoBody11)
Scene7.addChild(ProtoDeclare10)
ProtoInstance27 = ProtoInstanceObject()
ProtoInstance27.setName("Bubble")
ProtoInstance27.setDEF("bubbleA")

Scene7.addChild(ProtoInstance27)
X3D0.setScene(Scene7)

X3D0.toFileX3D("../data/bubble.new.x3d")
