print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
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
meta5.content = "x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy"

head1.children.append(meta5)

X3D0.head = head1
Scene6 = x3d.Scene()
NavigationInfo7 = x3d.NavigationInfo()
NavigationInfo7.type = ["EXAMINE"]

Scene6.children.append(NavigationInfo7)
Viewpoint8 = x3d.Viewpoint()
Viewpoint8.description = "Bubbles in action"
Viewpoint8.position = [0,0,4]

Scene6.children.append(Viewpoint8)
Background9 = x3d.Background()
Background9.frontUrl = ["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png"]
Background9.backUrl = ["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png"]
Background9.leftUrl = ["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png"]
Background9.rightUrl = ["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png"]
Background9.topUrl = ["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png"]
Background9.bottomUrl = ["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png"]

Scene6.children.append(Background9)
Transform10 = x3d.Transform(DEF="DECLBubble_transformA")
Shape11 = x3d.Shape()
Appearance12 = x3d.Appearance()
Material13 = x3d.Material()
Material13.diffuseColor = [1,0,0]
Material13.transparency = 0.2

Appearance12.material = Material13

Shape11.appearance = Appearance12
Sphere14 = x3d.Sphere()
Sphere14.radius = 0.25

Shape11.geometry = Sphere14

Transform10.children.append(Shape11)
Script15 = x3d.Script(DEF="DECLBubble_bubbleA_bounce")
field16 = x3d.field()
field16.accessType = "inputOutput"
field16.type = "SFVec3f"
field16.name = "scale"
field16.value = [1,1,1]

Script15.field.append(field16)
field17 = x3d.field()
field17.accessType = "inputOutput"
field17.type = "SFVec3f"
field17.name = "translation"

Script15.field.append(field17)
field18 = x3d.field()
field18.accessType = "inputOutput"
field18.type = "SFVec3f"
field18.name = "velocity"

Script15.field.append(field18)
field19 = x3d.field()
field19.accessType = "inputOutput"
field19.type = "SFVec3f"
field19.name = "scalvel"

Script15.field.append(field19)
field20 = x3d.field()
field20.accessType = "inputOnly"
field20.type = "SFFloat"
field20.name = "set_fraction"

Script15.field.append(field20)

Script15.sourceCode = '''ecmascript:\n"+
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

Transform10.children.append(Script15)
TimeSensor21 = x3d.TimeSensor(DEF="DECLBubble_bubbleA_bubbleClock")
TimeSensor21.cycleInterval = 10
TimeSensor21.loop = True

Transform10.children.append(TimeSensor21)

Scene6.children.append(Transform10)
Transform22 = x3d.Transform(DEF="DECLBubble_transformB")
Shape23 = x3d.Shape()
Appearance24 = x3d.Appearance()
Material25 = x3d.Material()
Material25.diffuseColor = [1,0,0]
Material25.transparency = 0.2

Appearance24.material = Material25

Shape23.appearance = Appearance24
Sphere26 = x3d.Sphere()
Sphere26.radius = 0.25

Shape23.geometry = Sphere26

Transform22.children.append(Shape23)
Script27 = x3d.Script(DEF="DECLBubble_bubbleB_bounce")
field28 = x3d.field()
field28.accessType = "inputOutput"
field28.type = "SFVec3f"
field28.name = "scale"
field28.value = [1,1,1]

Script27.field.append(field28)
field29 = x3d.field()
field29.accessType = "inputOutput"
field29.type = "SFVec3f"
field29.name = "translation"

Script27.field.append(field29)
field30 = x3d.field()
field30.accessType = "inputOutput"
field30.type = "SFVec3f"
field30.name = "velocity"

Script27.field.append(field30)
field31 = x3d.field()
field31.accessType = "inputOutput"
field31.type = "SFVec3f"
field31.name = "scalvel"

Script27.field.append(field31)
field32 = x3d.field()
field32.accessType = "inputOnly"
field32.type = "SFFloat"
field32.name = "set_fraction"

Script27.field.append(field32)

Script27.sourceCode = '''ecmascript:\n"+
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

Transform22.children.append(Script27)
TimeSensor33 = x3d.TimeSensor(DEF="DECLBubble_bubbleB_bubbleClock")
TimeSensor33.cycleInterval = 10
TimeSensor33.loop = True

Transform22.children.append(TimeSensor33)

Scene6.children.append(Transform22)
Transform34 = x3d.Transform(DEF="DECLBubble_transformC")
Shape35 = x3d.Shape()
Appearance36 = x3d.Appearance()
Material37 = x3d.Material()
Material37.diffuseColor = [1,0,0]
Material37.transparency = 0.2

Appearance36.material = Material37

Shape35.appearance = Appearance36
Sphere38 = x3d.Sphere()
Sphere38.radius = 0.25

Shape35.geometry = Sphere38

Transform34.children.append(Shape35)
Script39 = x3d.Script(DEF="DECLBubble_bubbleC_bounce")
field40 = x3d.field()
field40.accessType = "inputOutput"
field40.type = "SFVec3f"
field40.name = "scale"
field40.value = [1,1,1]

Script39.field.append(field40)
field41 = x3d.field()
field41.accessType = "inputOutput"
field41.type = "SFVec3f"
field41.name = "translation"

Script39.field.append(field41)
field42 = x3d.field()
field42.accessType = "inputOutput"
field42.type = "SFVec3f"
field42.name = "velocity"

Script39.field.append(field42)
field43 = x3d.field()
field43.accessType = "inputOutput"
field43.type = "SFVec3f"
field43.name = "scalvel"

Script39.field.append(field43)
field44 = x3d.field()
field44.accessType = "inputOnly"
field44.type = "SFFloat"
field44.name = "set_fraction"

Script39.field.append(field44)

Script39.sourceCode = '''ecmascript:\n"+
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

Transform34.children.append(Script39)
TimeSensor45 = x3d.TimeSensor(DEF="DECLBubble_bubbleC_bubbleClock")
TimeSensor45.cycleInterval = 10
TimeSensor45.loop = True

Transform34.children.append(TimeSensor45)

Scene6.children.append(Transform34)
Transform46 = x3d.Transform(DEF="DECLBubble_transformD")
Shape47 = x3d.Shape()
Appearance48 = x3d.Appearance()
Material49 = x3d.Material()
Material49.diffuseColor = [1,0,0]
Material49.transparency = 0.2

Appearance48.material = Material49

Shape47.appearance = Appearance48
Sphere50 = x3d.Sphere()
Sphere50.radius = 0.25

Shape47.geometry = Sphere50

Transform46.children.append(Shape47)
Script51 = x3d.Script(DEF="DECLBubble_bubbleD_bounce")
field52 = x3d.field()
field52.accessType = "inputOutput"
field52.type = "SFVec3f"
field52.name = "scale"
field52.value = [1,1,1]

Script51.field.append(field52)
field53 = x3d.field()
field53.accessType = "inputOutput"
field53.type = "SFVec3f"
field53.name = "translation"

Script51.field.append(field53)
field54 = x3d.field()
field54.accessType = "inputOutput"
field54.type = "SFVec3f"
field54.name = "velocity"

Script51.field.append(field54)
field55 = x3d.field()
field55.accessType = "inputOutput"
field55.type = "SFVec3f"
field55.name = "scalvel"

Script51.field.append(field55)
field56 = x3d.field()
field56.accessType = "inputOnly"
field56.type = "SFFloat"
field56.name = "set_fraction"

Script51.field.append(field56)

Script51.sourceCode = '''ecmascript:\n"+
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

Transform46.children.append(Script51)
TimeSensor57 = x3d.TimeSensor(DEF="DECLBubble_bubbleD_bubbleClock")
TimeSensor57.cycleInterval = 10
TimeSensor57.loop = True

Transform46.children.append(TimeSensor57)

Scene6.children.append(Transform46)
ROUTE58 = x3d.ROUTE()
ROUTE58.fromNode = "DECLBubble_bubbleA_bounce"
ROUTE58.fromField = "translation_changed"
ROUTE58.toNode = "DECLBubble_transformA"
ROUTE58.toField = "set_translation"

Scene6.children.append(ROUTE58)
ROUTE59 = x3d.ROUTE()
ROUTE59.fromNode = "DECLBubble_bubbleA_bounce"
ROUTE59.fromField = "scale_changed"
ROUTE59.toNode = "DECLBubble_transformA"
ROUTE59.toField = "set_scale"

Scene6.children.append(ROUTE59)
ROUTE60 = x3d.ROUTE()
ROUTE60.fromNode = "DECLBubble_bubbleA_bubbleClock"
ROUTE60.fromField = "fraction_changed"
ROUTE60.toNode = "DECLBubble_bubbleA_bounce"
ROUTE60.toField = "set_fraction"

Scene6.children.append(ROUTE60)
ROUTE61 = x3d.ROUTE()
ROUTE61.fromNode = "DECLBubble_bubbleB_bounce"
ROUTE61.fromField = "translation_changed"
ROUTE61.toNode = "DECLBubble_transformB"
ROUTE61.toField = "set_translation"

Scene6.children.append(ROUTE61)
ROUTE62 = x3d.ROUTE()
ROUTE62.fromNode = "DECLBubble_bubbleB_bounce"
ROUTE62.fromField = "scale_changed"
ROUTE62.toNode = "DECLBubble_transformB"
ROUTE62.toField = "set_scale"

Scene6.children.append(ROUTE62)
ROUTE63 = x3d.ROUTE()
ROUTE63.fromNode = "DECLBubble_bubbleB_bubbleClock"
ROUTE63.fromField = "fraction_changed"
ROUTE63.toNode = "DECLBubble_bubbleB_bounce"
ROUTE63.toField = "set_fraction"

Scene6.children.append(ROUTE63)
ROUTE64 = x3d.ROUTE()
ROUTE64.fromNode = "DECLBubble_bubbleC_bounce"
ROUTE64.fromField = "translation_changed"
ROUTE64.toNode = "DECLBubble_transformC"
ROUTE64.toField = "set_translation"

Scene6.children.append(ROUTE64)
ROUTE65 = x3d.ROUTE()
ROUTE65.fromNode = "DECLBubble_bubbleC_bounce"
ROUTE65.fromField = "scale_changed"
ROUTE65.toNode = "DECLBubble_transformC"
ROUTE65.toField = "set_scale"

Scene6.children.append(ROUTE65)
ROUTE66 = x3d.ROUTE()
ROUTE66.fromNode = "DECLBubble_bubbleC_bubbleClock"
ROUTE66.fromField = "fraction_changed"
ROUTE66.toNode = "DECLBubble_bubbleC_bounce"
ROUTE66.toField = "set_fraction"

Scene6.children.append(ROUTE66)
ROUTE67 = x3d.ROUTE()
ROUTE67.fromNode = "DECLBubble_bubbleD_bounce"
ROUTE67.fromField = "translation_changed"
ROUTE67.toNode = "DECLBubble_transformD"
ROUTE67.toField = "set_translation"

Scene6.children.append(ROUTE67)
ROUTE68 = x3d.ROUTE()
ROUTE68.fromNode = "DECLBubble_bubbleD_bounce"
ROUTE68.fromField = "scale_changed"
ROUTE68.toNode = "DECLBubble_transformD"
ROUTE68.toField = "set_scale"

Scene6.children.append(ROUTE68)
ROUTE69 = x3d.ROUTE()
ROUTE69.fromNode = "DECLBubble_bubbleD_bubbleClock"
ROUTE69.fromField = "fraction_changed"
ROUTE69.toNode = "DECLBubble_bubbleD_bounce"
ROUTE69.toField = "set_fraction"

Scene6.children.append(ROUTE69)

X3D0.Scene = Scene6
f = open("../data/bubs3.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/bubs3.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/bubs3.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
