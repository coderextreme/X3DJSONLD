# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

head1 = headObject()

meta2 = metaObject()
meta2.setName("title")
meta2.setContent("bubs.x3d")

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
meta6.setContent("https://coderextreme.net/X3DJSONLD/bubs.x3d")

head1.addMeta(meta6)
X3D0.setHead(head1)
Scene7 = SceneObject()

NavigationInfo8 = NavigationInfoObject()
NavigationInfo8.setType(["EXAMINE"])

Scene7.addChild(NavigationInfo8)
Viewpoint9 = ViewpointObject()
Viewpoint9.setPosition([0,0,4])
Viewpoint9.setOrientation([1,0,0,0])
Viewpoint9.setDescription("Bubbles in action")

Scene7.addChild(Viewpoint9)
Background10 = BackgroundObject()
Background10.setBackUrl(["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/images/BK.png"])
Background10.setBottomUrl(["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/images/BT.png"])
Background10.setFrontUrl(["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/images/FR.png"])
Background10.setLeftUrl(["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/images/LF.png"])
Background10.setRightUrl(["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/images/RT.png"])
Background10.setTopUrl(["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/images/TP.png"])

Scene7.addChild(Background10)
Transform11 = TransformObject()
Transform11.setDEF("DECLBubble_bubbleA")

Shape12 = ShapeObject()

Sphere13 = SphereObject()
Sphere13.setRadius(0.25)

Shape12.setGeometry(Sphere13)
Appearance14 = AppearanceObject()

Material15 = MaterialObject()
Material15.setDiffuseColor([1,0,0])
Material15.setTransparency(0.2)

Appearance14.setMaterial(Material15)
Shape12.setAppearance(Appearance14)
Transform11.addChild(Shape12)
Script16 = ScriptObject()
Script16.setDEF("DECLBubble_bubbleA_bounce")

field17 = fieldObject()
field17.setType(fieldObject.TYPE_SFVEC3F)
field17.setName("scale")
field17.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field17.setValue("1 1 1")

Script16.addField(field17)
field18 = fieldObject()
field18.setType(fieldObject.TYPE_SFVEC3F)
field18.setName("translation")
field18.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field18.setValue("0 0 0")

Script16.addField(field18)
field19 = fieldObject()
field19.setType(fieldObject.TYPE_SFVEC3F)
field19.setName("velocity")
field19.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field19.setValue("0 0 0")

Script16.addField(field19)
field20 = fieldObject()
field20.setType(fieldObject.TYPE_SFVEC3F)
field20.setName("scalvel")
field20.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field20.setValue("0 0 0")

Script16.addField(field20)
field21 = fieldObject()
field21.setType(fieldObject.TYPE_SFFLOAT)
field21.setName("set_fraction")
field21.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script16.addField(field21)

Script16.setSourceCode("ecmascript:\n"+
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
"}")
Transform11.addChild(Script16)
TimeSensor22 = TimeSensorObject()
TimeSensor22.setDEF("DECLBubble_bubbleA_bubbleClock")
TimeSensor22.setCycleInterval(10)
TimeSensor22.setLoop(True)

Transform11.addChild(TimeSensor22)
ROUTE23 = ROUTEObject()
ROUTE23.setFromNode("DECLBubble_bubbleA_bounce")
ROUTE23.setFromField("translation_changed")
ROUTE23.setToNode("DECLBubble_transform")
ROUTE23.setToField("set_translation")

Transform11.addChild(ROUTE23)
ROUTE24 = ROUTEObject()
ROUTE24.setFromNode("DECLBubble_bubbleA_bounce")
ROUTE24.setFromField("scale_changed")
ROUTE24.setToNode("DECLBubble_transform")
ROUTE24.setToField("set_scale")

Transform11.addChild(ROUTE24)
ROUTE25 = ROUTEObject()
ROUTE25.setFromNode("DECLBubble_bubbleA_bubbleClock")
ROUTE25.setFromField("fraction_changed")
ROUTE25.setToNode("DECLBubble_bubbleA_bounce")
ROUTE25.setToField("set_fraction")

Transform11.addChild(ROUTE25)
Scene7.addChild(Transform11)
Transform26 = TransformObject()
Transform26.setDEF("DECLBubble_bubbleB")

Shape27 = ShapeObject()

Sphere28 = SphereObject()
Sphere28.setRadius(0.25)

Shape27.setGeometry(Sphere28)
Appearance29 = AppearanceObject()

Material30 = MaterialObject()
Material30.setDiffuseColor([1,0,0])
Material30.setTransparency(0.2)

Appearance29.setMaterial(Material30)
Shape27.setAppearance(Appearance29)
Transform26.addChild(Shape27)
Script31 = ScriptObject()
Script31.setDEF("DECLBubble_bubbleB_bounce")

field32 = fieldObject()
field32.setType(fieldObject.TYPE_SFVEC3F)
field32.setName("scale")
field32.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field32.setValue("1 1 1")

Script31.addField(field32)
field33 = fieldObject()
field33.setType(fieldObject.TYPE_SFVEC3F)
field33.setName("translation")
field33.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field33.setValue("0 0 0")

Script31.addField(field33)
field34 = fieldObject()
field34.setType(fieldObject.TYPE_SFVEC3F)
field34.setName("velocity")
field34.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field34.setValue("0 0 0")

Script31.addField(field34)
field35 = fieldObject()
field35.setType(fieldObject.TYPE_SFVEC3F)
field35.setName("scalvel")
field35.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field35.setValue("0 0 0")

Script31.addField(field35)
field36 = fieldObject()
field36.setType(fieldObject.TYPE_SFFLOAT)
field36.setName("set_fraction")
field36.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script31.addField(field36)

Script31.setSourceCode("ecmascript:\n"+
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
"}")
Transform26.addChild(Script31)
TimeSensor37 = TimeSensorObject()
TimeSensor37.setDEF("DECLBubble_bubbleB_bubbleClock")
TimeSensor37.setCycleInterval(10)
TimeSensor37.setLoop(True)

Transform26.addChild(TimeSensor37)
ROUTE38 = ROUTEObject()
ROUTE38.setFromNode("DECLBubble_bubbleB_bounce")
ROUTE38.setFromField("translation_changed")
ROUTE38.setToNode("DECLBubble_transform")
ROUTE38.setToField("set_translation")

Transform26.addChild(ROUTE38)
ROUTE39 = ROUTEObject()
ROUTE39.setFromNode("DECLBubble_bubbleB_bounce")
ROUTE39.setFromField("scale_changed")
ROUTE39.setToNode("DECLBubble_transform")
ROUTE39.setToField("set_scale")

Transform26.addChild(ROUTE39)
ROUTE40 = ROUTEObject()
ROUTE40.setFromNode("DECLBubble_bubbleB_bubbleClock")
ROUTE40.setFromField("fraction_changed")
ROUTE40.setToNode("DECLBubble_bubbleB_bounce")
ROUTE40.setToField("set_fraction")

Transform26.addChild(ROUTE40)
Scene7.addChild(Transform26)
Transform41 = TransformObject()
Transform41.setDEF("DECLBubble_bubbleC")

Shape42 = ShapeObject()

Sphere43 = SphereObject()
Sphere43.setRadius(0.25)

Shape42.setGeometry(Sphere43)
Appearance44 = AppearanceObject()

Material45 = MaterialObject()
Material45.setDiffuseColor([1,0,0])
Material45.setTransparency(0.2)

Appearance44.setMaterial(Material45)
Shape42.setAppearance(Appearance44)
Transform41.addChild(Shape42)
Script46 = ScriptObject()
Script46.setDEF("DECLBubble_bubbleC_bounce")

field47 = fieldObject()
field47.setType(fieldObject.TYPE_SFVEC3F)
field47.setName("scale")
field47.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field47.setValue("1 1 1")

Script46.addField(field47)
field48 = fieldObject()
field48.setType(fieldObject.TYPE_SFVEC3F)
field48.setName("translation")
field48.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field48.setValue("0 0 0")

Script46.addField(field48)
field49 = fieldObject()
field49.setType(fieldObject.TYPE_SFVEC3F)
field49.setName("velocity")
field49.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field49.setValue("0 0 0")

Script46.addField(field49)
field50 = fieldObject()
field50.setType(fieldObject.TYPE_SFVEC3F)
field50.setName("scalvel")
field50.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field50.setValue("0 0 0")

Script46.addField(field50)
field51 = fieldObject()
field51.setType(fieldObject.TYPE_SFFLOAT)
field51.setName("set_fraction")
field51.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script46.addField(field51)

Script46.setSourceCode("ecmascript:\n"+
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
"}")
Transform41.addChild(Script46)
TimeSensor52 = TimeSensorObject()
TimeSensor52.setDEF("DECLBubble_bubbleC_bubbleClock")
TimeSensor52.setCycleInterval(10)
TimeSensor52.setLoop(True)

Transform41.addChild(TimeSensor52)
ROUTE53 = ROUTEObject()
ROUTE53.setFromNode("DECLBubble_bubbleC_bounce")
ROUTE53.setFromField("translation_changed")
ROUTE53.setToNode("DECLBubble_transform")
ROUTE53.setToField("set_translation")

Transform41.addChild(ROUTE53)
ROUTE54 = ROUTEObject()
ROUTE54.setFromNode("DECLBubble_bubbleC_bounce")
ROUTE54.setFromField("scale_changed")
ROUTE54.setToNode("DECLBubble_transform")
ROUTE54.setToField("set_scale")

Transform41.addChild(ROUTE54)
ROUTE55 = ROUTEObject()
ROUTE55.setFromNode("DECLBubble_bubbleC_bubbleClock")
ROUTE55.setFromField("fraction_changed")
ROUTE55.setToNode("DECLBubble_bubbleC_bounce")
ROUTE55.setToField("set_fraction")

Transform41.addChild(ROUTE55)
Scene7.addChild(Transform41)
Transform56 = TransformObject()
Transform56.setDEF("DECLBubble_bubbleD")

Shape57 = ShapeObject()

Sphere58 = SphereObject()
Sphere58.setRadius(0.25)

Shape57.setGeometry(Sphere58)
Appearance59 = AppearanceObject()

Material60 = MaterialObject()
Material60.setDiffuseColor([1,0,0])
Material60.setTransparency(0.2)

Appearance59.setMaterial(Material60)
Shape57.setAppearance(Appearance59)
Transform56.addChild(Shape57)
Script61 = ScriptObject()
Script61.setDEF("DECLBubble_bubbleD_bounce")

field62 = fieldObject()
field62.setType(fieldObject.TYPE_SFVEC3F)
field62.setName("scale")
field62.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field62.setValue("1 1 1")

Script61.addField(field62)
field63 = fieldObject()
field63.setType(fieldObject.TYPE_SFVEC3F)
field63.setName("translation")
field63.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field63.setValue("0 0 0")

Script61.addField(field63)
field64 = fieldObject()
field64.setType(fieldObject.TYPE_SFVEC3F)
field64.setName("velocity")
field64.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field64.setValue("0 0 0")

Script61.addField(field64)
field65 = fieldObject()
field65.setType(fieldObject.TYPE_SFVEC3F)
field65.setName("scalvel")
field65.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field65.setValue("0 0 0")

Script61.addField(field65)
field66 = fieldObject()
field66.setType(fieldObject.TYPE_SFFLOAT)
field66.setName("set_fraction")
field66.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script61.addField(field66)

Script61.setSourceCode("ecmascript:\n"+
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
"}")
Transform56.addChild(Script61)
TimeSensor67 = TimeSensorObject()
TimeSensor67.setDEF("DECLBubble_bubbleD_bubbleClock")
TimeSensor67.setCycleInterval(10)
TimeSensor67.setLoop(True)

Transform56.addChild(TimeSensor67)
ROUTE68 = ROUTEObject()
ROUTE68.setFromNode("DECLBubble_bubbleD_bounce")
ROUTE68.setFromField("translation_changed")
ROUTE68.setToNode("DECLBubble_transform")
ROUTE68.setToField("set_translation")

Transform56.addChild(ROUTE68)
ROUTE69 = ROUTEObject()
ROUTE69.setFromNode("DECLBubble_bubbleD_bounce")
ROUTE69.setFromField("scale_changed")
ROUTE69.setToNode("DECLBubble_transform")
ROUTE69.setToField("set_scale")

Transform56.addChild(ROUTE69)
ROUTE70 = ROUTEObject()
ROUTE70.setFromNode("DECLBubble_bubbleD_bubbleClock")
ROUTE70.setFromField("fraction_changed")
ROUTE70.setToNode("DECLBubble_bubbleD_bounce")
ROUTE70.setToField("set_fraction")

Transform56.addChild(ROUTE70)
Scene7.addChild(Transform56)
X3D0.setScene(Scene7)

X3D0.toFileX3D("../data/bubs3.new.x3d")
