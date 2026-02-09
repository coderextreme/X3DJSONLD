print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "MyBounce.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "creator"
meta3.content = "John Carlson"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "description"
meta4.content = "3 prismatic spheres"

head1.children.append(meta4)

X3D0.head = head1
Scene5 = x3d.Scene()
NavigationInfo6 = x3d.NavigationInfo()

Scene5.children.append(NavigationInfo6)
Transform7 = x3d.Transform(DEF="transform")
Shape8 = x3d.Shape()
Appearance9 = x3d.Appearance()
Material10 = x3d.Material()
Material10.diffuseColor = [0.7,0.7,0.7]
Material10.specularColor = [0.5,0.5,0.5]

Appearance9.material = Material10

Shape8.appearance = Appearance9
Sphere11 = x3d.Sphere()

Shape8.geometry = Sphere11

Transform7.children.append(Shape8)

Scene5.children.append(Transform7)
Script12 = x3d.Script(DEF="Bounce2")
field13 = x3d.field()
field13.accessType = "inputOnly"
field13.type = "SFVec3f"
field13.name = "set_translation"

Script12.field.append(field13)
field14 = x3d.field()
field14.accessType = "outputOnly"
field14.type = "SFVec3f"
field14.name = "translation_changed"

Script12.field.append(field14)
field15 = x3d.field()
field15.accessType = "inputOutput"
field15.type = "SFVec3f"
field15.name = "translation"

Script12.field.append(field15)
field16 = x3d.field()
field16.accessType = "inputOutput"
field16.type = "SFVec3f"
field16.name = "velocity"

Script12.field.append(field16)
field17 = x3d.field()
field17.accessType = "inputOnly"
field17.type = "SFTime"
field17.name = "set_fraction"

Script12.field.append(field17)

Script12.sourceCode = '''ecmascript:\n"+
"			function newBubble() {\n"+
"			    translation = new SFVec3f(0, 0, 0);\n"+
"			    velocity = new SFVec3f(\n"+
"			    	Math.random() - 0.5,\n"+
"				Math.random() - 0.5,\n"+
"				Math.random() - 0.5);\n"+
"			}\n"+
"			function set_fraction() {\n"+
"			    translation = new SFVec3f(\n"+
"			    	translation.x + velocity.x,\n"+
"				translation.y + velocity.y,\n"+
"				translation.z + velocity.z);\n"+
"				if (Math.abs(translation.x) > 10) {\n"+
"					newBubble();\n"+
"				} else if (Math.abs(translation.y) > 10) {\n"+
"					newBubble();\n"+
"				} else if (Math.abs(translation.z) > 10) {\n"+
"					newBubble();\n"+
"				} else {\n"+
"					velocity = new SFVec3f(\n"+
"						velocity.x + Math.random() * 0.2 - 0.1,\n"+
"						velocity.y + Math.random() * 0.2 - 0.1,\n"+
"						velocity.z + Math.random() * 0.2 - 0.1\n"+
"					);\n"+
"				}\n"+
"			}\n"+
"\n"+
"			function initialize() {\n"+
"			     newBubble();\n"+
"			}'''

Scene5.children.append(Script12)
TimeSensor18 = x3d.TimeSensor(DEF="TourTime")
TimeSensor18.cycleInterval = 0.15
TimeSensor18.loop = True

Scene5.children.append(TimeSensor18)
ROUTE19 = x3d.ROUTE()
ROUTE19.fromNode = "TourTime"
ROUTE19.fromField = "cycleTime"
ROUTE19.toNode = "Bounce2"
ROUTE19.toField = "set_fraction"

Scene5.children.append(ROUTE19)
ROUTE20 = x3d.ROUTE()
ROUTE20.fromNode = "Bounce2"
ROUTE20.fromField = "translation_changed"
ROUTE20.toNode = "transform"
ROUTE20.toField = "set_translation"

Scene5.children.append(ROUTE20)

X3D0.Scene = Scene5
f = open("../data/MyBounce.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/MyBounce.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/MyBounce.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
