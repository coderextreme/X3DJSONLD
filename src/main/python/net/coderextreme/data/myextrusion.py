print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
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
meta4.content = "Mon, 09 Feb 2026 07:12:59 GMT"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "title"
meta5.content = "myextrusion.x3d"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "identifier"
meta6.content = "https://coderextreme.net/X3DJSONLD/src/main/data/myextrusion.x3d"

head1.children.append(meta6)

X3D0.head = head1
Scene7 = x3d.Scene()
Group8 = x3d.Group()
Shape9 = x3d.Shape()
Appearance10 = x3d.Appearance()
Material11 = x3d.Material()
Material11.diffuseColor = [0,1,0]

Appearance10.material = Material11

Shape9.appearance = Appearance10
Extrusion12 = x3d.Extrusion(DEF="myextrusion")
Extrusion12.creaseAngle = 0.785
Extrusion12.crossSection = [(1, 0),(0.92, -0.38),(0.71, -0.71),(0.38, -0.92),(0, -1),(-0.38, -0.92),(-0.71, -0.71),(-0.92, -0.38),(-1, 0),(-0.92, 0.38),(-0.71, 0.71),(-0.38, 0.92),(0, 1),(0.38, 0.92),(0.71, 0.71),(0.92, 0.38),(1, 0)]
Extrusion12.spine = [(-50, -50, 0),(50, 50, 0)]

Shape9.geometry = Extrusion12

Group8.children.append(Shape9)
TimeSensor13 = x3d.TimeSensor(DEF="TourTime")
TimeSensor13.loop = True

Group8.children.append(TimeSensor13)
Script14 = x3d.Script(DEF="MoveCylinder")
field15 = x3d.field()
field15.accessType = "inputOnly"
field15.type = "SFTime"
field15.name = "set_cycle"

Script14.field.append(field15)
field16 = x3d.field()
field16.accessType = "inputOutput"
field16.type = "MFVec3f"
field16.name = "spine"
field16.value = [(-50, -50, 0),(50, 50, 0)]

Script14.field.append(field16)

Script14.sourceCode = '''ecmascript:\n"+
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

Group8.children.append(Script14)

Scene7.children.append(Group8)
ROUTE17 = x3d.ROUTE()
ROUTE17.fromNode = "TourTime"
ROUTE17.fromField = "cycleTime"
ROUTE17.toNode = "MoveCylinder"
ROUTE17.toField = "set_cycle"

Scene7.children.append(ROUTE17)
ROUTE18 = x3d.ROUTE()
ROUTE18.fromNode = "MoveCylinder"
ROUTE18.fromField = "spine_changed"
ROUTE18.toNode = "myextrusion"
ROUTE18.toField = "set_spine"

Scene7.children.append(ROUTE18)

X3D0.Scene = Scene7
f = open("../data/myextrusion.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/myextrusion.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/myextrusion.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
