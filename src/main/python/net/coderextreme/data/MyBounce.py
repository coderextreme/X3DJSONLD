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
meta3.content = "MyBounce.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "creator"
meta4.content = "John Carlson"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "description"
meta5.content = "3 prismatic spheres"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "identifier"
meta6.content = "https://coderextreme.net/X3DJSONLD/src/main/data/SFVec3f.x3d"

head1.children.append(meta6)

X3D0.head = head1
Scene7 = x3d.Scene()
NavigationInfo8 = x3d.NavigationInfo()

Scene7.children.append(NavigationInfo8)
Transform9 = x3d.Transform()
Transform9.DEF = "transform"
Shape10 = x3d.Shape()
Appearance11 = x3d.Appearance()
Material12 = x3d.Material()
Material12.diffuseColor = [0.7,0.7,0.7]
Material12.specularColor = [0.5,0.5,0.5]

Appearance11.material = Material12

Shape10.appearance = Appearance11
Sphere13 = x3d.Sphere()

Shape10.geometry = Sphere13

Transform9.children.append(Shape10)

Scene7.children.append(Transform9)
Script14 = x3d.Script()
Script14.DEF = "Bounce2"
field15 = x3d.field()
field15.name = "set_translation"
field15.accessType = "inputOnly"
field15.type = "SFVec3f"
field15.value = [0,0,0]

Script14.field.append(field15)
field16 = x3d.field()
field16.name = "translation_changed"
field16.accessType = "outputOnly"
field16.type = "SFVec3f"
field16.value = [0,0,0]

Script14.field.append(field16)
field17 = x3d.field()
field17.name = "translation"
field17.accessType = "inputOutput"
field17.type = "SFVec3f"
field17.value = [0,0,0]

Script14.field.append(field17)
field18 = x3d.field()
field18.name = "velocity"
field18.accessType = "inputOutput"
field18.type = "SFVec3f"
field18.value = [0,0,0]

Script14.field.append(field18)
field19 = x3d.field()
field19.name = "set_fraction"
field19.accessType = "inputOnly"
field19.type = "SFTime"

Script14.field.append(field19)

Script14.sourceCode = '''ecmascript:\n"+
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

Scene7.children.append(Script14)
TimeSensor20 = x3d.TimeSensor()
TimeSensor20.DEF = "TourTime"
TimeSensor20.cycleInterval = 0.15
TimeSensor20.loop = True

Scene7.children.append(TimeSensor20)
ROUTE21 = x3d.ROUTE()
ROUTE21.fromNode = "TourTime"
ROUTE21.fromField = "cycleTime"
ROUTE21.toNode = "Bounce2"
ROUTE21.toField = "set_fraction"

Scene7.children.append(ROUTE21)
ROUTE22 = x3d.ROUTE()
ROUTE22.fromNode = "Bounce2"
ROUTE22.fromField = "translation_changed"
ROUTE22.toNode = "transform"
ROUTE22.toField = "set_translation"

Scene7.children.append(ROUTE22)

X3D0.Scene = Scene7
f = open("../data/MyBounce.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/MyBounce.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
