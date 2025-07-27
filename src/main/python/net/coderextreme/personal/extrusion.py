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
meta4.name = "title"
meta4.content = "extrusion.x3d"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "identifier"
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/personal/extrusion.x3d"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "description"
meta6.content = "beginnings of a force directed graph in 3D"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "generator"
meta7.content = "Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta7)

X3D0.head = head1
Scene8 = x3d.Scene()
Group9 = x3d.Group()
Shape10 = x3d.Shape()
Extrusion11 = x3d.Extrusion()
Extrusion11.DEF = "extrusion"
Extrusion11.creaseAngle = 0.785

Shape10.geometry = Extrusion11
Appearance12 = x3d.Appearance()
Material13 = x3d.Material()
Material13.diffuseColor = [0,1,0]

Appearance12.material = Material13

Shape10.appearance = Appearance12

Group9.children.append(Shape10)
TimeSensor14 = x3d.TimeSensor()
TimeSensor14.DEF = "TourTime"
TimeSensor14.loop = True

Group9.children.append(TimeSensor14)
Script15 = x3d.Script()
Script15.DEF = "MoveCylinder"
field16 = x3d.field()
field16.name = "set_cycle"
field16.accessType = "inputOnly"
field16.type = "SFTime"

Script15.field.append(field16)
field17 = x3d.field()
field17.name = "spine"
field17.accessType = "inputOutput"
field17.type = "MFVec3f"

Script15.field.append(field17)

Script15.sourceCode = '''ecmascript:\n"+
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

Group9.children.append(Script15)
ROUTE18 = x3d.ROUTE()
ROUTE18.fromNode = "TourTime"
ROUTE18.fromField = "cycleTime"
ROUTE18.toNode = "MoveCylinder"
ROUTE18.toField = "set_cycle"

Group9.children.append(ROUTE18)
ROUTE19 = x3d.ROUTE()
ROUTE19.fromNode = "MoveCylinder"
ROUTE19.fromField = "spine_changed"
ROUTE19.toNode = "extrusion"
ROUTE19.toField = "set_spine"

Group9.children.append(ROUTE19)

Scene8.children.append(Group9)

X3D0.Scene = Scene8
f = open("../personal/extrusion.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../personal/extrusion.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
