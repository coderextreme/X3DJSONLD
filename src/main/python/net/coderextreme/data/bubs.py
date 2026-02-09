print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "bubs.x3d"

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
ProtoDeclare7 = x3d.ProtoDeclare()
ProtoDeclare7.name = "Bubble"
ProtoInterface8 = x3d.ProtoInterface()

ProtoDeclare7.ProtoInterface = ProtoInterface8
ProtoBody9 = x3d.ProtoBody()
Transform10 = x3d.Transform(DEF="body_trans")
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
Script15 = x3d.Script(DEF="bounce1")
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
TimeSensor21 = x3d.TimeSensor(DEF="bubbleClock")
TimeSensor21.cycleInterval = 10
TimeSensor21.loop = True

Transform10.children.append(TimeSensor21)

ProtoBody9.children.append(Transform10)
ROUTE22 = x3d.ROUTE()
ROUTE22.fromNode = "bounce1"
ROUTE22.fromField = "translation_changed"
ROUTE22.toNode = "body_trans"
ROUTE22.toField = "set_translation"

ProtoBody9.children.append(ROUTE22)
ROUTE23 = x3d.ROUTE()
ROUTE23.fromNode = "bounce1"
ROUTE23.fromField = "scale_changed"
ROUTE23.toNode = "body_trans"
ROUTE23.toField = "set_scale"

ProtoBody9.children.append(ROUTE23)
ROUTE24 = x3d.ROUTE()
ROUTE24.fromNode = "bubbleClock"
ROUTE24.fromField = "fraction_changed"
ROUTE24.toNode = "bounce1"
ROUTE24.toField = "set_fraction"

ProtoBody9.children.append(ROUTE24)

ProtoDeclare7.ProtoBody = ProtoBody9

Scene6.children.append(ProtoDeclare7)
NavigationInfo25 = x3d.NavigationInfo()
NavigationInfo25.type = ["EXAMINE"]

Scene6.children.append(NavigationInfo25)
Viewpoint26 = x3d.Viewpoint()
Viewpoint26.description = "Bubbles in action"
Viewpoint26.position = [0,0,4]

Scene6.children.append(Viewpoint26)
Background27 = x3d.Background()
Background27.frontUrl = ["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png"]
Background27.backUrl = ["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png"]
Background27.leftUrl = ["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png"]
Background27.rightUrl = ["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png"]
Background27.topUrl = ["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png"]
Background27.bottomUrl = ["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png"]

Scene6.children.append(Background27)
ProtoInstance28 = x3d.ProtoInstance(DEF="bubbleA")
ProtoInstance28.name = "Bubble"

Scene6.children.append(ProtoInstance28)
ProtoInstance29 = x3d.ProtoInstance(DEF="bubbleB")
ProtoInstance29.name = "Bubble"

Scene6.children.append(ProtoInstance29)
ProtoInstance30 = x3d.ProtoInstance(DEF="bubbleC")
ProtoInstance30.name = "Bubble"

Scene6.children.append(ProtoInstance30)
ProtoInstance31 = x3d.ProtoInstance(DEF="bubbleD")
ProtoInstance31.name = "Bubble"

Scene6.children.append(ProtoInstance31)

X3D0.Scene = Scene6
f = open("../data/bubs.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/bubs.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/bubs.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
