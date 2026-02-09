print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "bubs2.x3d"

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
meta6 = x3d.meta()
meta6.name = "generator"
meta6.content = "X3D-Edit, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "generator"
meta7.content = "X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"

head1.children.append(meta7)

X3D0.head = head1
Scene8 = x3d.Scene()
ProtoDeclare9 = x3d.ProtoDeclare()
ProtoDeclare9.name = "Bubble"
ProtoInterface10 = x3d.ProtoInterface()

ProtoDeclare9.ProtoInterface = ProtoInterface10
ProtoBody11 = x3d.ProtoBody()
Transform12 = x3d.Transform(DEF="body_trans")
Shape13 = x3d.Shape()
Appearance14 = x3d.Appearance()
Material15 = x3d.Material()
Material15.diffuseColor = [1,0,0]
Material15.transparency = 0.2

Appearance14.material = Material15

Shape13.appearance = Appearance14
Sphere16 = x3d.Sphere()
Sphere16.radius = 0.25

Shape13.geometry = Sphere16

Transform12.children.append(Shape13)
Script17 = x3d.Script(DEF="bounce")
field18 = x3d.field()
field18.accessType = "inputOutput"
field18.type = "SFVec3f"
field18.name = "scale"
field18.value = [1,1,1]

Script17.field.append(field18)
field19 = x3d.field()
field19.accessType = "inputOutput"
field19.type = "SFVec3f"
field19.name = "translation"

Script17.field.append(field19)
field20 = x3d.field()
field20.accessType = "inputOutput"
field20.type = "SFVec3f"
field20.name = "velocity"

Script17.field.append(field20)
field21 = x3d.field()
field21.accessType = "inputOutput"
field21.type = "SFVec3f"
field21.name = "scalvel"

Script17.field.append(field21)
field22 = x3d.field()
field22.accessType = "inputOnly"
field22.type = "SFFloat"
field22.name = "set_fraction"

Script17.field.append(field22)

Script17.sourceCode = '''ecmascript:\n"+
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
"}'''

Transform12.children.append(Script17)
TimeSensor23 = x3d.TimeSensor(DEF="bubbleClock")
TimeSensor23.cycleInterval = 10
TimeSensor23.loop = True

Transform12.children.append(TimeSensor23)

ProtoBody11.children.append(Transform12)
ROUTE24 = x3d.ROUTE()
ROUTE24.fromNode = "bounce"
ROUTE24.fromField = "translation_changed"
ROUTE24.toNode = "body_trans"
ROUTE24.toField = "set_translation"

ProtoBody11.children.append(ROUTE24)
ROUTE25 = x3d.ROUTE()
ROUTE25.fromNode = "bounce"
ROUTE25.fromField = "scale_changed"
ROUTE25.toNode = "body_trans"
ROUTE25.toField = "set_scale"

ProtoBody11.children.append(ROUTE25)
ROUTE26 = x3d.ROUTE()
ROUTE26.fromNode = "bubbleClock"
ROUTE26.fromField = "fraction_changed"
ROUTE26.toNode = "bounce"
ROUTE26.toField = "set_fraction"

ProtoBody11.children.append(ROUTE26)

ProtoDeclare9.ProtoBody = ProtoBody11

Scene8.children.append(ProtoDeclare9)
NavigationInfo27 = x3d.NavigationInfo()
NavigationInfo27.type = ["EXAMINE"]

Scene8.children.append(NavigationInfo27)
Viewpoint28 = x3d.Viewpoint()
Viewpoint28.description = "Bubbles in action"
Viewpoint28.position = [0,0,4]

Scene8.children.append(Viewpoint28)
Background29 = x3d.Background()
Background29.frontUrl = ["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png"]
Background29.backUrl = ["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png"]
Background29.leftUrl = ["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png"]
Background29.rightUrl = ["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png"]
Background29.topUrl = ["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png"]
Background29.bottomUrl = ["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png"]

Scene8.children.append(Background29)
ProtoInstance30 = x3d.ProtoInstance(DEF="bubbleA")
ProtoInstance30.name = "Bubble"

Scene8.children.append(ProtoInstance30)
ProtoInstance31 = x3d.ProtoInstance(DEF="bubbleB")
ProtoInstance31.name = "Bubble"

Scene8.children.append(ProtoInstance31)
ProtoInstance32 = x3d.ProtoInstance(DEF="bubbleC")
ProtoInstance32.name = "Bubble"

Scene8.children.append(ProtoInstance32)
ProtoInstance33 = x3d.ProtoInstance(DEF="bubbleD")
ProtoInstance33.name = "Bubble"

Scene8.children.append(ProtoInstance33)

X3D0.Scene = Scene8
f = open("../data/bubs2.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/bubs2.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/bubs2.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
