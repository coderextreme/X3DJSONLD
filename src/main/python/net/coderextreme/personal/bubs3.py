print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "3.3"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "bubs3.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "creator"
meta3.content = "John Carlson"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "description"
meta4.content = "Tour around a prismatic sphere"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "generator"
meta5.content = "X3D-Edit, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "identifier"
meta6.content = "https://coderextreme.net/X3DJSONLD/src/main/personal/bubs.x3d"

head1.children.append(meta6)

X3D0.head = head1
Scene7 = x3d.Scene()
NavigationInfo8 = x3d.NavigationInfo()
NavigationInfo8.type = ["EXAMINE"]

Scene7.children.append(NavigationInfo8)
Viewpoint9 = x3d.Viewpoint()
Viewpoint9.position = [0,0,4]
Viewpoint9.orientation = [1,0,0,0]
Viewpoint9.description = "Bubbles in action"

Scene7.children.append(Viewpoint9)
Background10 = x3d.Background()
Background10.backUrl = ["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png"]
Background10.bottomUrl = ["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png"]
Background10.frontUrl = ["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png"]
Background10.leftUrl = ["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png"]
Background10.rightUrl = ["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png"]
Background10.topUrl = ["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png"]

Scene7.children.append(Background10)
Transform11 = x3d.Transform()
Transform11.DEF = "DECLBubble_bubbleA"
Shape12 = x3d.Shape()
Sphere13 = x3d.Sphere()
Sphere13.radius = 0.25

Shape12.geometry = Sphere13
Appearance14 = x3d.Appearance()
Material15 = x3d.Material()
Material15.diffuseColor = [1,0,0]
Material15.transparency = 0.2

Appearance14.material = Material15

Shape12.appearance = Appearance14

Transform11.children.append(Shape12)
Script16 = x3d.Script()
Script16.DEF = "DECLBubble_bubbleA_bounce"
field17 = x3d.field()
field17.name = "scale"
field17.accessType = "inputOutput"
field17.type = "SFVec3f"
field17.value = [1,1,1]

Script16.field.append(field17)
field18 = x3d.field()
field18.name = "translation"
field18.accessType = "inputOutput"
field18.type = "SFVec3f"
field18.value = [0,0,0]

Script16.field.append(field18)
field19 = x3d.field()
field19.name = "velocity"
field19.accessType = "inputOutput"
field19.type = "SFVec3f"
field19.value = [0,0,0]

Script16.field.append(field19)
field20 = x3d.field()
field20.name = "scalvel"
field20.accessType = "inputOutput"
field20.type = "SFVec3f"
field20.value = [0,0,0]

Script16.field.append(field20)
field21 = x3d.field()
field21.name = "set_fraction"
field21.accessType = "inputOnly"
field21.type = "SFFloat"

Script16.field.append(field21)

Script16.sourceCode = '''ecmascript:\n"+
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
"}'''

Transform11.children.append(Script16)
TimeSensor22 = x3d.TimeSensor()
TimeSensor22.DEF = "DECLBubble_bubbleA_bubbleClock"
TimeSensor22.cycleInterval = 10
TimeSensor22.loop = True

Transform11.children.append(TimeSensor22)
ROUTE23 = x3d.ROUTE()
ROUTE23.fromNode = "DECLBubble_bubbleA_bounce"
ROUTE23.fromField = "translation_changed"
ROUTE23.toNode = "DECLBubble_transform"
ROUTE23.toField = "set_translation"

Transform11.children.append(ROUTE23)
ROUTE24 = x3d.ROUTE()
ROUTE24.fromNode = "DECLBubble_bubbleA_bounce"
ROUTE24.fromField = "scale_changed"
ROUTE24.toNode = "DECLBubble_transform"
ROUTE24.toField = "set_scale"

Transform11.children.append(ROUTE24)
ROUTE25 = x3d.ROUTE()
ROUTE25.fromNode = "DECLBubble_bubbleA_bubbleClock"
ROUTE25.fromField = "fraction_changed"
ROUTE25.toNode = "DECLBubble_bubbleA_bounce"
ROUTE25.toField = "set_fraction"

Transform11.children.append(ROUTE25)

Scene7.children.append(Transform11)
Transform26 = x3d.Transform()
Transform26.DEF = "DECLBubble_bubbleB"
Shape27 = x3d.Shape()
Sphere28 = x3d.Sphere()
Sphere28.radius = 0.25

Shape27.geometry = Sphere28
Appearance29 = x3d.Appearance()
Material30 = x3d.Material()
Material30.diffuseColor = [1,0,0]
Material30.transparency = 0.2

Appearance29.material = Material30

Shape27.appearance = Appearance29

Transform26.children.append(Shape27)
Script31 = x3d.Script()
Script31.DEF = "DECLBubble_bubbleB_bounce"
field32 = x3d.field()
field32.name = "scale"
field32.accessType = "inputOutput"
field32.type = "SFVec3f"
field32.value = [1,1,1]

Script31.field.append(field32)
field33 = x3d.field()
field33.name = "translation"
field33.accessType = "inputOutput"
field33.type = "SFVec3f"
field33.value = [0,0,0]

Script31.field.append(field33)
field34 = x3d.field()
field34.name = "velocity"
field34.accessType = "inputOutput"
field34.type = "SFVec3f"
field34.value = [0,0,0]

Script31.field.append(field34)
field35 = x3d.field()
field35.name = "scalvel"
field35.accessType = "inputOutput"
field35.type = "SFVec3f"
field35.value = [0,0,0]

Script31.field.append(field35)
field36 = x3d.field()
field36.name = "set_fraction"
field36.accessType = "inputOnly"
field36.type = "SFFloat"

Script31.field.append(field36)

Script31.sourceCode = '''ecmascript:\n"+
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
"}'''

Transform26.children.append(Script31)
TimeSensor37 = x3d.TimeSensor()
TimeSensor37.DEF = "DECLBubble_bubbleB_bubbleClock"
TimeSensor37.cycleInterval = 10
TimeSensor37.loop = True

Transform26.children.append(TimeSensor37)
ROUTE38 = x3d.ROUTE()
ROUTE38.fromNode = "DECLBubble_bubbleB_bounce"
ROUTE38.fromField = "translation_changed"
ROUTE38.toNode = "DECLBubble_transform"
ROUTE38.toField = "set_translation"

Transform26.children.append(ROUTE38)
ROUTE39 = x3d.ROUTE()
ROUTE39.fromNode = "DECLBubble_bubbleB_bounce"
ROUTE39.fromField = "scale_changed"
ROUTE39.toNode = "DECLBubble_transform"
ROUTE39.toField = "set_scale"

Transform26.children.append(ROUTE39)
ROUTE40 = x3d.ROUTE()
ROUTE40.fromNode = "DECLBubble_bubbleB_bubbleClock"
ROUTE40.fromField = "fraction_changed"
ROUTE40.toNode = "DECLBubble_bubbleB_bounce"
ROUTE40.toField = "set_fraction"

Transform26.children.append(ROUTE40)

Scene7.children.append(Transform26)
Transform41 = x3d.Transform()
Transform41.DEF = "DECLBubble_bubbleC"
Shape42 = x3d.Shape()
Sphere43 = x3d.Sphere()
Sphere43.radius = 0.25

Shape42.geometry = Sphere43
Appearance44 = x3d.Appearance()
Material45 = x3d.Material()
Material45.diffuseColor = [1,0,0]
Material45.transparency = 0.2

Appearance44.material = Material45

Shape42.appearance = Appearance44

Transform41.children.append(Shape42)
Script46 = x3d.Script()
Script46.DEF = "DECLBubble_bubbleC_bounce"
field47 = x3d.field()
field47.name = "scale"
field47.accessType = "inputOutput"
field47.type = "SFVec3f"
field47.value = [1,1,1]

Script46.field.append(field47)
field48 = x3d.field()
field48.name = "translation"
field48.accessType = "inputOutput"
field48.type = "SFVec3f"
field48.value = [0,0,0]

Script46.field.append(field48)
field49 = x3d.field()
field49.name = "velocity"
field49.accessType = "inputOutput"
field49.type = "SFVec3f"
field49.value = [0,0,0]

Script46.field.append(field49)
field50 = x3d.field()
field50.name = "scalvel"
field50.accessType = "inputOutput"
field50.type = "SFVec3f"
field50.value = [0,0,0]

Script46.field.append(field50)
field51 = x3d.field()
field51.name = "set_fraction"
field51.accessType = "inputOnly"
field51.type = "SFFloat"

Script46.field.append(field51)

Script46.sourceCode = '''ecmascript:\n"+
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
"}'''

Transform41.children.append(Script46)
TimeSensor52 = x3d.TimeSensor()
TimeSensor52.DEF = "DECLBubble_bubbleC_bubbleClock"
TimeSensor52.cycleInterval = 10
TimeSensor52.loop = True

Transform41.children.append(TimeSensor52)
ROUTE53 = x3d.ROUTE()
ROUTE53.fromNode = "DECLBubble_bubbleC_bounce"
ROUTE53.fromField = "translation_changed"
ROUTE53.toNode = "DECLBubble_transform"
ROUTE53.toField = "set_translation"

Transform41.children.append(ROUTE53)
ROUTE54 = x3d.ROUTE()
ROUTE54.fromNode = "DECLBubble_bubbleC_bounce"
ROUTE54.fromField = "scale_changed"
ROUTE54.toNode = "DECLBubble_transform"
ROUTE54.toField = "set_scale"

Transform41.children.append(ROUTE54)
ROUTE55 = x3d.ROUTE()
ROUTE55.fromNode = "DECLBubble_bubbleC_bubbleClock"
ROUTE55.fromField = "fraction_changed"
ROUTE55.toNode = "DECLBubble_bubbleC_bounce"
ROUTE55.toField = "set_fraction"

Transform41.children.append(ROUTE55)

Scene7.children.append(Transform41)
Transform56 = x3d.Transform()
Transform56.DEF = "DECLBubble_bubbleD"
Shape57 = x3d.Shape()
Sphere58 = x3d.Sphere()
Sphere58.radius = 0.25

Shape57.geometry = Sphere58
Appearance59 = x3d.Appearance()
Material60 = x3d.Material()
Material60.diffuseColor = [1,0,0]
Material60.transparency = 0.2

Appearance59.material = Material60

Shape57.appearance = Appearance59

Transform56.children.append(Shape57)
Script61 = x3d.Script()
Script61.DEF = "DECLBubble_bubbleD_bounce"
field62 = x3d.field()
field62.name = "scale"
field62.accessType = "inputOutput"
field62.type = "SFVec3f"
field62.value = [1,1,1]

Script61.field.append(field62)
field63 = x3d.field()
field63.name = "translation"
field63.accessType = "inputOutput"
field63.type = "SFVec3f"
field63.value = [0,0,0]

Script61.field.append(field63)
field64 = x3d.field()
field64.name = "velocity"
field64.accessType = "inputOutput"
field64.type = "SFVec3f"
field64.value = [0,0,0]

Script61.field.append(field64)
field65 = x3d.field()
field65.name = "scalvel"
field65.accessType = "inputOutput"
field65.type = "SFVec3f"
field65.value = [0,0,0]

Script61.field.append(field65)
field66 = x3d.field()
field66.name = "set_fraction"
field66.accessType = "inputOnly"
field66.type = "SFFloat"

Script61.field.append(field66)

Script61.sourceCode = '''ecmascript:\n"+
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
"}'''

Transform56.children.append(Script61)
TimeSensor67 = x3d.TimeSensor()
TimeSensor67.DEF = "DECLBubble_bubbleD_bubbleClock"
TimeSensor67.cycleInterval = 10
TimeSensor67.loop = True

Transform56.children.append(TimeSensor67)
ROUTE68 = x3d.ROUTE()
ROUTE68.fromNode = "DECLBubble_bubbleD_bounce"
ROUTE68.fromField = "translation_changed"
ROUTE68.toNode = "DECLBubble_transform"
ROUTE68.toField = "set_translation"

Transform56.children.append(ROUTE68)
ROUTE69 = x3d.ROUTE()
ROUTE69.fromNode = "DECLBubble_bubbleD_bounce"
ROUTE69.fromField = "scale_changed"
ROUTE69.toNode = "DECLBubble_transform"
ROUTE69.toField = "set_scale"

Transform56.children.append(ROUTE69)
ROUTE70 = x3d.ROUTE()
ROUTE70.fromNode = "DECLBubble_bubbleD_bubbleClock"
ROUTE70.fromField = "fraction_changed"
ROUTE70.toNode = "DECLBubble_bubbleD_bounce"
ROUTE70.toField = "set_fraction"

Transform56.children.append(ROUTE70)

Scene7.children.append(Transform56)

X3D0.Scene = Scene7
f = open("../personal/bubs3.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../personal/bubs3.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
