print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "creator"
meta2.content = "John W Carlson"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "created"
meta3.content = "December 13 2015"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "modified"
meta4.content = "November 9 2024"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "title"
meta5.content = "myextrusion.x3d"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "identifier"
meta6.content = "https://coderextreme.net/X3DJSONLD/src/main/data/myextrusion.x3d"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "description"
meta7.content = "beginnings of a force directed graph in 3D"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "generator"
meta8.content = "Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta8)

X3D0.head = head1
Scene9 = x3d.Scene()
Group10 = x3d.Group()
Shape11 = x3d.Shape()
Extrusion12 = x3d.Extrusion()
Extrusion12.DEF = "myextrusion"
Extrusion12.spine = [(-50, -50, 0),(50, 50, 0)]
Extrusion12.creaseAngle = 0.785
Extrusion12.crossSection = [(1, 0),(0.92, -0.38),(0.71, -0.71),(0.38, -0.92),(0, -1),(-0.38, -0.92),(-0.71, -0.71),(-0.92, -0.38),(-1, 0),(-0.92, 0.38),(-0.71, 0.71),(-0.38, 0.92),(0, 1),(0.38, 0.92),(0.71, 0.71),(0.92, 0.38),(1, 0)]

Shape11.geometry = Extrusion12
Appearance13 = x3d.Appearance()
Material14 = x3d.Material()
Material14.diffuseColor = [0,1,0]

Appearance13.material = Material14

Shape11.appearance = Appearance13

Group10.children.append(Shape11)
TimeSensor15 = x3d.TimeSensor()
TimeSensor15.DEF = "TourTime"
TimeSensor15.loop = True

Group10.children.append(TimeSensor15)
Script16 = x3d.Script()
Script16.DEF = "MoveCylinder"
field17 = x3d.field()
field17.name = "set_cycle"
field17.accessType = "inputOnly"
field17.type = "SFTime"

Script16.field.append(field17)
field18 = x3d.field()
field18.name = "spine"
field18.accessType = "inputOutput"
field18.type = "MFVec3f"
field18.value = [(-50, -50, 0),(50, 50, 0)]

Script16.field.append(field18)

Script16.sourceCode = '''ecmascript:\n"+
"\n"+
"                function set_cycle(value) {\n"+
"                        Browser.print(value);\n"+
"                        var endA = new SFVec3f(spine[0].x*Math.random()*2, spine[0].y*Math.random()*2, spine[0].z*Math.random()*2);\n"+
"                        var endB = new SFVec3f(spine[1].x*Math.random()*2, spine[1].y*Math.random()*2, spine[1].z*Math.random()*2);\n"+
"                        var tmpspine = new MFVec3f();\n"+
"			tmpspine[0] = endA;\n"+
"			tmpspine[1] = endB;\n"+
"                        spine = tmpspine;\n"+
"                }'''

Group10.children.append(Script16)
ROUTE19 = x3d.ROUTE()
ROUTE19.fromNode = "TourTime"
ROUTE19.fromField = "cycleTime"
ROUTE19.toNode = "MoveCylinder"
ROUTE19.toField = "set_cycle"

Group10.children.append(ROUTE19)
ROUTE20 = x3d.ROUTE()
ROUTE20.fromNode = "MoveCylinder"
ROUTE20.fromField = "spine_changed"
ROUTE20.toNode = "myextrusion"
ROUTE20.toField = "set_spine"

Group10.children.append(ROUTE20)

Scene9.children.append(Group10)

X3D0.Scene = Scene9
f = open("../data/myextrusion.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/myextrusion.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/myextrusion.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
