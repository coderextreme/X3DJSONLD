from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = head()
meta2 = meta()
meta2.setName("title")
meta2.setContent("bubs3.x3d")

head1.addMeta(meta2)
meta3 = meta()
meta3.setName("creator")
meta3.setContent("John Carlson")

head1.addMeta(meta3)
meta4 = meta()
meta4.setName("description")
meta4.setContent("Tour around a prismatic sphere")

head1.addMeta(meta4)
meta5 = meta()
meta5.setName("generator")
meta5.setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta5)
meta6 = meta()
meta6.setName("identifier")
meta6.setContent("https://coderextreme.net/X3DJSONLD/bubs.x3d")

head1.addMeta(meta6)

X3D0.setHead(head1)
Scene7 = Scene()
NavigationInfo8 = NavigationInfo()
NavigationInfo8.setType(["EXAMINE"])

Scene7.addChildren(NavigationInfo8)
Viewpoint9 = Viewpoint()
Viewpoint9.setPosition([0,0,4])
Viewpoint9.setOrientation([1,0,0,0])
Viewpoint9.setDescription("Bubbles in action")

Scene7.addChildren(Viewpoint9)
Background10 = Background()
Background10.setBackUrl(["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/images/BK.png"])
Background10.setBottomUrl(["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/images/BT.png"])
Background10.setFrontUrl(["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/images/FR.png"])
Background10.setLeftUrl(["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/images/LF.png"])
Background10.setRightUrl(["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/images/RT.png"])
Background10.setTopUrl(["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/images/TP.png"])

Scene7.addChildren(Background10)
Transform11 = Transform()
Transform11.setDEF("DECLBubble_bubbleA")
Shape12 = Shape()
Sphere13 = Sphere()
Sphere13.setRadius(0.25)

Shape12.setGeometry(Sphere13)
Appearance14 = Appearance()
Material15 = Material()
Material15.setDiffuseColor([1,0,0])
Material15.setTransparency(0.2)

Appearance14.setMaterial(Material15)

Shape12.setAppearance(Appearance14)

Transform11.addChildren(Shape12)
Script16 = Script()
Script16.setDEF("DECLBubble_bubbleA_bounce")
field17 = field()
field17.setName("scale")
field17.setAccessType("inputOutput")
field17.setType("SFVec3f")
field17.setValue("1 1 1")

Script16.addField(field17)
field18 = field()
field18.setName("translation")
field18.setAccessType("inputOutput")
field18.setType("SFVec3f")
field18.setValue("0 0 0")

Script16.addField(field18)
field19 = field()
field19.setName("velocity")
field19.setAccessType("inputOutput")
field19.setType("SFVec3f")
field19.setValue("0 0 0")

Script16.addField(field19)
field20 = field()
field20.setName("scalvel")
field20.setAccessType("inputOutput")
field20.setType("SFVec3f")
field20.setValue("0 0 0")

Script16.addField(field20)
field21 = field()
field21.setName("set_fraction")
field21.setAccessType("inputOnly")
field21.setType("SFFloat")

Script16.addField(field21)

Script16.setSourceCode('''ecmascript:\n"+
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

Transform11.addChildren(Script16)
TimeSensor22 = TimeSensor()
TimeSensor22.setDEF("DECLBubble_bubbleA_bubbleClock")
TimeSensor22.setCycleInterval(10)
TimeSensor22.setLoop(True)

Transform11.addChildren(TimeSensor22)
ROUTE23 = ROUTE()
ROUTE23.setFromNode("DECLBubble_bubbleA_bounce")
ROUTE23.setFromField("translation_changed")
ROUTE23.setToNode("DECLBubble_transform")
ROUTE23.setToField("set_translation")

Transform11.addChildren(ROUTE23)
ROUTE24 = ROUTE()
ROUTE24.setFromNode("DECLBubble_bubbleA_bounce")
ROUTE24.setFromField("scale_changed")
ROUTE24.setToNode("DECLBubble_transform")
ROUTE24.setToField("set_scale")

Transform11.addChildren(ROUTE24)
ROUTE25 = ROUTE()
ROUTE25.setFromNode("DECLBubble_bubbleA_bubbleClock")
ROUTE25.setFromField("fraction_changed")
ROUTE25.setToNode("DECLBubble_bubbleA_bounce")
ROUTE25.setToField("set_fraction")

Transform11.addChildren(ROUTE25)

Scene7.addChildren(Transform11)
Transform26 = Transform()
Transform26.setDEF("DECLBubble_bubbleB")
Shape27 = Shape()
Sphere28 = Sphere()
Sphere28.setRadius(0.25)

Shape27.setGeometry(Sphere28)
Appearance29 = Appearance()
Material30 = Material()
Material30.setDiffuseColor([1,0,0])
Material30.setTransparency(0.2)

Appearance29.setMaterial(Material30)

Shape27.setAppearance(Appearance29)

Transform26.addChildren(Shape27)
Script31 = Script()
Script31.setDEF("DECLBubble_bubbleB_bounce")
field32 = field()
field32.setName("scale")
field32.setAccessType("inputOutput")
field32.setType("SFVec3f")
field32.setValue("1 1 1")

Script31.addField(field32)
field33 = field()
field33.setName("translation")
field33.setAccessType("inputOutput")
field33.setType("SFVec3f")
field33.setValue("0 0 0")

Script31.addField(field33)
field34 = field()
field34.setName("velocity")
field34.setAccessType("inputOutput")
field34.setType("SFVec3f")
field34.setValue("0 0 0")

Script31.addField(field34)
field35 = field()
field35.setName("scalvel")
field35.setAccessType("inputOutput")
field35.setType("SFVec3f")
field35.setValue("0 0 0")

Script31.addField(field35)
field36 = field()
field36.setName("set_fraction")
field36.setAccessType("inputOnly")
field36.setType("SFFloat")

Script31.addField(field36)

Script31.setSourceCode('''ecmascript:\n"+
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

Transform26.addChildren(Script31)
TimeSensor37 = TimeSensor()
TimeSensor37.setDEF("DECLBubble_bubbleB_bubbleClock")
TimeSensor37.setCycleInterval(10)
TimeSensor37.setLoop(True)

Transform26.addChildren(TimeSensor37)
ROUTE38 = ROUTE()
ROUTE38.setFromNode("DECLBubble_bubbleB_bounce")
ROUTE38.setFromField("translation_changed")
ROUTE38.setToNode("DECLBubble_transform")
ROUTE38.setToField("set_translation")

Transform26.addChildren(ROUTE38)
ROUTE39 = ROUTE()
ROUTE39.setFromNode("DECLBubble_bubbleB_bounce")
ROUTE39.setFromField("scale_changed")
ROUTE39.setToNode("DECLBubble_transform")
ROUTE39.setToField("set_scale")

Transform26.addChildren(ROUTE39)
ROUTE40 = ROUTE()
ROUTE40.setFromNode("DECLBubble_bubbleB_bubbleClock")
ROUTE40.setFromField("fraction_changed")
ROUTE40.setToNode("DECLBubble_bubbleB_bounce")
ROUTE40.setToField("set_fraction")

Transform26.addChildren(ROUTE40)

Scene7.addChildren(Transform26)
Transform41 = Transform()
Transform41.setDEF("DECLBubble_bubbleC")
Shape42 = Shape()
Sphere43 = Sphere()
Sphere43.setRadius(0.25)

Shape42.setGeometry(Sphere43)
Appearance44 = Appearance()
Material45 = Material()
Material45.setDiffuseColor([1,0,0])
Material45.setTransparency(0.2)

Appearance44.setMaterial(Material45)

Shape42.setAppearance(Appearance44)

Transform41.addChildren(Shape42)
Script46 = Script()
Script46.setDEF("DECLBubble_bubbleC_bounce")
field47 = field()
field47.setName("scale")
field47.setAccessType("inputOutput")
field47.setType("SFVec3f")
field47.setValue("1 1 1")

Script46.addField(field47)
field48 = field()
field48.setName("translation")
field48.setAccessType("inputOutput")
field48.setType("SFVec3f")
field48.setValue("0 0 0")

Script46.addField(field48)
field49 = field()
field49.setName("velocity")
field49.setAccessType("inputOutput")
field49.setType("SFVec3f")
field49.setValue("0 0 0")

Script46.addField(field49)
field50 = field()
field50.setName("scalvel")
field50.setAccessType("inputOutput")
field50.setType("SFVec3f")
field50.setValue("0 0 0")

Script46.addField(field50)
field51 = field()
field51.setName("set_fraction")
field51.setAccessType("inputOnly")
field51.setType("SFFloat")

Script46.addField(field51)

Script46.setSourceCode('''ecmascript:\n"+
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

Transform41.addChildren(Script46)
TimeSensor52 = TimeSensor()
TimeSensor52.setDEF("DECLBubble_bubbleC_bubbleClock")
TimeSensor52.setCycleInterval(10)
TimeSensor52.setLoop(True)

Transform41.addChildren(TimeSensor52)
ROUTE53 = ROUTE()
ROUTE53.setFromNode("DECLBubble_bubbleC_bounce")
ROUTE53.setFromField("translation_changed")
ROUTE53.setToNode("DECLBubble_transform")
ROUTE53.setToField("set_translation")

Transform41.addChildren(ROUTE53)
ROUTE54 = ROUTE()
ROUTE54.setFromNode("DECLBubble_bubbleC_bounce")
ROUTE54.setFromField("scale_changed")
ROUTE54.setToNode("DECLBubble_transform")
ROUTE54.setToField("set_scale")

Transform41.addChildren(ROUTE54)
ROUTE55 = ROUTE()
ROUTE55.setFromNode("DECLBubble_bubbleC_bubbleClock")
ROUTE55.setFromField("fraction_changed")
ROUTE55.setToNode("DECLBubble_bubbleC_bounce")
ROUTE55.setToField("set_fraction")

Transform41.addChildren(ROUTE55)

Scene7.addChildren(Transform41)
Transform56 = Transform()
Transform56.setDEF("DECLBubble_bubbleD")
Shape57 = Shape()
Sphere58 = Sphere()
Sphere58.setRadius(0.25)

Shape57.setGeometry(Sphere58)
Appearance59 = Appearance()
Material60 = Material()
Material60.setDiffuseColor([1,0,0])
Material60.setTransparency(0.2)

Appearance59.setMaterial(Material60)

Shape57.setAppearance(Appearance59)

Transform56.addChildren(Shape57)
Script61 = Script()
Script61.setDEF("DECLBubble_bubbleD_bounce")
field62 = field()
field62.setName("scale")
field62.setAccessType("inputOutput")
field62.setType("SFVec3f")
field62.setValue("1 1 1")

Script61.addField(field62)
field63 = field()
field63.setName("translation")
field63.setAccessType("inputOutput")
field63.setType("SFVec3f")
field63.setValue("0 0 0")

Script61.addField(field63)
field64 = field()
field64.setName("velocity")
field64.setAccessType("inputOutput")
field64.setType("SFVec3f")
field64.setValue("0 0 0")

Script61.addField(field64)
field65 = field()
field65.setName("scalvel")
field65.setAccessType("inputOutput")
field65.setType("SFVec3f")
field65.setValue("0 0 0")

Script61.addField(field65)
field66 = field()
field66.setName("set_fraction")
field66.setAccessType("inputOnly")
field66.setType("SFFloat")

Script61.addField(field66)

Script61.setSourceCode('''ecmascript:\n"+
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

Transform56.addChildren(Script61)
TimeSensor67 = TimeSensor()
TimeSensor67.setDEF("DECLBubble_bubbleD_bubbleClock")
TimeSensor67.setCycleInterval(10)
TimeSensor67.setLoop(True)

Transform56.addChildren(TimeSensor67)
ROUTE68 = ROUTE()
ROUTE68.setFromNode("DECLBubble_bubbleD_bounce")
ROUTE68.setFromField("translation_changed")
ROUTE68.setToNode("DECLBubble_transform")
ROUTE68.setToField("set_translation")

Transform56.addChildren(ROUTE68)
ROUTE69 = ROUTE()
ROUTE69.setFromNode("DECLBubble_bubbleD_bounce")
ROUTE69.setFromField("scale_changed")
ROUTE69.setToNode("DECLBubble_transform")
ROUTE69.setToField("set_scale")

Transform56.addChildren(ROUTE69)
ROUTE70 = ROUTE()
ROUTE70.setFromNode("DECLBubble_bubbleD_bubbleClock")
ROUTE70.setFromField("fraction_changed")
ROUTE70.setToNode("DECLBubble_bubbleD_bounce")
ROUTE70.setToField("set_fraction")

Transform56.addChildren(ROUTE70)

Scene7.addChildren(Transform56)

X3D0.setScene(Scene7)
X3D0.toFileX3D("../personal/bubs3_RoundTrip.x3d")
