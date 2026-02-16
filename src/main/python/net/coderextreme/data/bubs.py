print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
component2 = x3d.component()
component2.name = "Scripting"
component2.level = 1

head1.children.append(component2)
meta3 = x3d.meta()
meta3.name = "title"
meta3.content = "bubs.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "creator"
meta4.content = "John Carlson"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "description"
meta5.content = "Tour around a prismatic sphere"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "generator"
meta6.content = "X3D-Edit, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "identifier"
meta7.content = "https://coderextreme.net/X3DJSONLD/src/main/data/bubs.x3d"

head1.children.append(meta7)

X3D0.head = head1
Scene8 = x3d.Scene()
NavigationInfo9 = x3d.NavigationInfo()
NavigationInfo9.type = ["EXAMINE"]

Scene8.children.append(NavigationInfo9)
Viewpoint10 = x3d.Viewpoint()
Viewpoint10.position = [0,0,4]
Viewpoint10.orientation = [1,0,0,0]
Viewpoint10.description = "Bubbles in action"

Scene8.children.append(Viewpoint10)
Background11 = x3d.Background()
Background11.backUrl = ["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png"]
Background11.bottomUrl = ["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png"]
Background11.frontUrl = ["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png"]
Background11.leftUrl = ["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png"]
Background11.rightUrl = ["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png"]
Background11.topUrl = ["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png"]

Scene8.children.append(Background11)
ProtoDeclare12 = x3d.ProtoDeclare()
ProtoDeclare12.name = "Bubble"
ProtoBody13 = x3d.ProtoBody()
Transform14 = x3d.Transform(DEF="body_trans")
Shape15 = x3d.Shape()
Sphere16 = x3d.Sphere()
Sphere16.radius = 0.25

Shape15.geometry = Sphere16
Appearance17 = x3d.Appearance()
Material18 = x3d.Material()
Material18.diffuseColor = [1,0,0]
Material18.transparency = 0.2

Appearance17.material = Material18

Shape15.appearance = Appearance17

Transform14.children.append(Shape15)
Script19 = x3d.Script(DEF="bounce1")
field20 = x3d.field()
field20.name = "scale"
field20.accessType = "inputOutput"
field20.type = "SFVec3f"
field20.value = [1,1,1]

Script19.field.append(field20)
field21 = x3d.field()
field21.name = "translation"
field21.accessType = "inputOutput"
field21.type = "SFVec3f"
field21.value = [0,0,0]

Script19.field.append(field21)
field22 = x3d.field()
field22.name = "velocity"
field22.accessType = "inputOutput"
field22.type = "SFVec3f"
field22.value = [0,0,0]

Script19.field.append(field22)
field23 = x3d.field()
field23.name = "scalvel"
field23.accessType = "inputOutput"
field23.type = "SFVec3f"
field23.value = [0,0,0]

Script19.field.append(field23)
field24 = x3d.field()
field24.name = "set_fraction"
field24.accessType = "inputOnly"
field24.type = "SFFloat"

Script19.field.append(field24)

Script19.sourceCode = '''ecmascript:\n"+
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

Transform14.children.append(Script19)
TimeSensor25 = x3d.TimeSensor(DEF="bubbleClock")
TimeSensor25.cycleInterval = 10
TimeSensor25.loop = True

Transform14.children.append(TimeSensor25)
ROUTE26 = x3d.ROUTE()
ROUTE26.fromNode = "bounce1"
ROUTE26.fromField = "translation_changed"
ROUTE26.toNode = "body_trans"
ROUTE26.toField = "set_translation"

Transform14.children.append(ROUTE26)
ROUTE27 = x3d.ROUTE()
ROUTE27.fromNode = "bounce1"
ROUTE27.fromField = "scale_changed"
ROUTE27.toNode = "body_trans"
ROUTE27.toField = "set_scale"

Transform14.children.append(ROUTE27)
ROUTE28 = x3d.ROUTE()
ROUTE28.fromNode = "bubbleClock"
ROUTE28.fromField = "fraction_changed"
ROUTE28.toNode = "bounce1"
ROUTE28.toField = "set_fraction"

Transform14.children.append(ROUTE28)

ProtoBody13.children.append(Transform14)

ProtoDeclare12.ProtoBody = ProtoBody13

Scene8.children.append(ProtoDeclare12)
ProtoInstance29 = x3d.ProtoInstance(DEF="bubbleA")
ProtoInstance29.name = "Bubble"

Scene8.children.append(ProtoInstance29)
ProtoInstance30 = x3d.ProtoInstance(DEF="bubbleB")
ProtoInstance30.name = "Bubble"

Scene8.children.append(ProtoInstance30)
ProtoInstance31 = x3d.ProtoInstance(DEF="bubbleC")
ProtoInstance31.name = "Bubble"

Scene8.children.append(ProtoInstance31)
ProtoInstance32 = x3d.ProtoInstance(DEF="bubbleD")
ProtoInstance32.name = "Bubble"

Scene8.children.append(ProtoInstance32)

X3D0.Scene = Scene8
f = open("../data/bubs.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/bubs.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/bubs.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
