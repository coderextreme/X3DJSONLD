print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "bubble.x3d"

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
meta6.content = "https://coderextreme.net/X3DJSONLD/src/main/data/bubble.x3d"

head1.children.append(meta6)

X3D0.head = head1
Scene7 = x3d.Scene()
NavigationInfo8 = x3d.NavigationInfo()
NavigationInfo8.type = ["EXAMINE"]

Scene7.children.append(NavigationInfo8)
Viewpoint9 = x3d.Viewpoint()
Viewpoint9.position = [0,0,4]
Viewpoint9.orientation = [1,0,0,0]
Viewpoint9.description = "Bubble in action"

Scene7.children.append(Viewpoint9)
ProtoDeclare10 = x3d.ProtoDeclare()
ProtoDeclare10.name = "Bubble"
ProtoBody11 = x3d.ProtoBody()
Transform12 = x3d.Transform()
Transform12.DEF = "transform"
Shape13 = x3d.Shape()
Sphere14 = x3d.Sphere()
Sphere14.radius = 0.25

Shape13.geometry = Sphere14
Appearance15 = x3d.Appearance()
Material16 = x3d.Material()
Material16.diffuseColor = [1,0,0]
Material16.transparency = 0.2

Appearance15.material = Material16

Shape13.appearance = Appearance15

Transform12.children.append(Shape13)
Script17 = x3d.Script()
Script17.DEF = "bounce"
field18 = x3d.field()
field18.name = "scale"
field18.accessType = "inputOutput"
field18.type = "SFVec3f"
field18.value = [1,1,1]

Script17.field.append(field18)
field19 = x3d.field()
field19.name = "translation"
field19.accessType = "inputOutput"
field19.type = "SFVec3f"
field19.value = [0,0,0]

Script17.field.append(field19)
field20 = x3d.field()
field20.name = "velocity"
field20.accessType = "inputOutput"
field20.type = "SFVec3f"
field20.value = [0,0,0]

Script17.field.append(field20)
field21 = x3d.field()
field21.name = "scalvel"
field21.accessType = "inputOutput"
field21.type = "SFVec3f"
field21.value = [0,0,0]

Script17.field.append(field21)
field22 = x3d.field()
field22.name = "set_fraction"
field22.accessType = "inputOnly"
field22.type = "SFFloat"

Script17.field.append(field22)

Script17.sourceCode = '''ecmascript:\n"+
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
"}'''

Transform12.children.append(Script17)
TimeSensor23 = x3d.TimeSensor()
TimeSensor23.DEF = "bubbleClock"
TimeSensor23.cycleInterval = 10
TimeSensor23.loop = True

Transform12.children.append(TimeSensor23)
ROUTE24 = x3d.ROUTE()
ROUTE24.fromNode = "bounce"
ROUTE24.fromField = "translation_changed"
ROUTE24.toNode = "transform"
ROUTE24.toField = "set_translation"

Transform12.children.append(ROUTE24)
ROUTE25 = x3d.ROUTE()
ROUTE25.fromNode = "bounce"
ROUTE25.fromField = "scale_changed"
ROUTE25.toNode = "transform"
ROUTE25.toField = "set_scale"

Transform12.children.append(ROUTE25)
ROUTE26 = x3d.ROUTE()
ROUTE26.fromNode = "bubbleClock"
ROUTE26.fromField = "fraction_changed"
ROUTE26.toNode = "bounce"
ROUTE26.toField = "set_fraction"

Transform12.children.append(ROUTE26)

ProtoBody11.children.append(Transform12)

ProtoDeclare10.ProtoBody = ProtoBody11

Scene7.children.append(ProtoDeclare10)
ProtoInstance27 = x3d.ProtoInstance()
ProtoInstance27.name = "Bubble"
ProtoInstance27.DEF = "bubbleA"

Scene7.children.append(ProtoInstance27)

X3D0.Scene = Scene7
f = open("../data/bubble.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/bubble.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/bubble.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
