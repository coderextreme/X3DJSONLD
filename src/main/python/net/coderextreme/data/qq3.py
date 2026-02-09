print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "qq3.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "creator"
meta3.content = "John Carlson"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "translator"
meta4.content = "John Carlson"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "created"
meta5.content = "11 Jan 2015"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "modified"
meta6.content = "Mon, 09 Feb 2026 07:12:59 GMT"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "description"
meta7.content = "12 extrusions"

head1.children.append(meta7)

X3D0.head = head1
Scene8 = x3d.Scene()
ProtoDeclare9 = x3d.ProtoDeclare()
ProtoDeclare9.name = "Process"
ProtoInterface10 = x3d.ProtoInterface()

ProtoDeclare9.ProtoInterface = ProtoInterface10
ProtoBody11 = x3d.ProtoBody()
Group12 = x3d.Group()
Transform13 = x3d.Transform()
Transform13.scale = [0.5,0.5,0.5]
Shape14 = x3d.Shape(DEF="ShapeLeftDown")
Appearance15 = x3d.Appearance()
Material16 = x3d.Material()
Material16.diffuseColor = [0.7,1,0]

Appearance15.material = Material16

Shape14.appearance = Appearance15
Extrusion17 = x3d.Extrusion()
Extrusion17.creaseAngle = 0.785
Extrusion17.crossSection = [(1, 0),(0.92, -0.38),(0.71, -0.71),(0.38, -0.92),(0, -1),(-0.38, -0.92),(-0.71, -0.71),(-0.92, -0.38),(-1, 0),(-0.92, 0.38),(-0.71, 0.71),(-0.38, 0.92),(0, 1),(0.38, 0.92),(0.71, 0.71),(0.92, 0.38),(1, 0)]
Extrusion17.spine = [(-2.5, 0, 0),(-2, 0, 0),(-1.5, 0, 0)]

Shape14.geometry = Extrusion17

Transform13.children.append(Shape14)

Group12.children.append(Transform13)
Transform18 = x3d.Transform()
Transform18.scale = [0.5,0.5,0.5]
Shape19 = x3d.Shape(DEF="ShapeUpRight")
Appearance20 = x3d.Appearance()
Material21 = x3d.Material()
Material21.diffuseColor = [0,0.7,1]

Appearance20.material = Material21

Shape19.appearance = Appearance20
Extrusion22 = x3d.Extrusion()
Extrusion22.creaseAngle = 0.785
Extrusion22.crossSection = [(1, 0),(0.92, -0.38),(0.71, -0.71),(0.38, -0.92),(0, -1),(-0.38, -0.92),(-0.71, -0.71),(-0.92, -0.38),(-1, 0),(-0.92, 0.38),(-0.71, 0.71),(-0.38, 0.92),(0, 1),(0.38, 0.92),(0.71, 0.71),(0.92, 0.38),(1, 0)]
Extrusion22.spine = [(1.5, 0, 0),(2, 0, 0),(2.5, 0, 0)]

Shape19.geometry = Extrusion22

Transform18.children.append(Shape19)

Group12.children.append(Transform18)
Transform23 = x3d.Transform()
Transform23.scale = [0.5,0.5,0.5]
Shape24 = x3d.Shape(USE="ShapeUpRight")

Transform23.children.append(Shape24)

Group12.children.append(Transform23)
Transform25 = x3d.Transform()
Transform25.scale = [0.5,0.5,0.5]
Shape26 = x3d.Shape(USE="ShapeLeftDown")

Transform25.children.append(Shape26)

Group12.children.append(Transform25)

ProtoBody11.children.append(Group12)

ProtoDeclare9.ProtoBody = ProtoBody11

Scene8.children.append(ProtoDeclare9)
Viewpoint27 = x3d.Viewpoint()
Viewpoint27.description = "Process pipes"
Viewpoint27.position = [0,5,12]
Viewpoint27.orientation = [1,0,0,-0.4]

Scene8.children.append(Viewpoint27)
Transform28 = x3d.Transform()
Transform28.translation = [0,-2.5,0]
ProtoInstance29 = x3d.ProtoInstance()
ProtoInstance29.name = "Process"

Transform28.children.append(ProtoInstance29)

Scene8.children.append(Transform28)
Transform30 = x3d.Transform()
ProtoInstance31 = x3d.ProtoInstance()
ProtoInstance31.name = "Process"

Transform30.children.append(ProtoInstance31)

Scene8.children.append(Transform30)
Transform32 = x3d.Transform()
Transform32.translation = [0,2.5,0]
ProtoInstance33 = x3d.ProtoInstance()
ProtoInstance33.name = "Process"

Transform32.children.append(ProtoInstance33)

Scene8.children.append(Transform32)

X3D0.Scene = Scene8
f = open("../data/qq3.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/qq3.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/qq3.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
