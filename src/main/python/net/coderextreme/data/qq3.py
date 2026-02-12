print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
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
meta6.content = "05 May 2017"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "description"
meta7.content = "12 extrusions"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "identifier"
meta8.content = "https://coderextreme.net/x3d/qq3.x3d"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "generator"
meta9.content = "manual"

head1.children.append(meta9)

X3D0.head = head1
Scene10 = x3d.Scene()
ProtoDeclare11 = x3d.ProtoDeclare()
ProtoDeclare11.name = "Process"
ProtoBody12 = x3d.ProtoBody()
Group13 = x3d.Group()
Group13.children.append(x3d.Comment("""left"""))
Transform14 = x3d.Transform()
Transform14.scale = [0.5,0.5,0.5]
Shape15 = x3d.Shape(DEF="ShapeLeftDown")
Appearance16 = x3d.Appearance()
Material17 = x3d.Material()
Material17.diffuseColor = [0.7,1,0]

Appearance16.material = Material17

Shape15.appearance = Appearance16
Extrusion18 = x3d.Extrusion()
Extrusion18.spine = [(-2.5, 0, 0),(-2, 0, 0),(-1.5, 0, 0)]
Extrusion18.creaseAngle = 0.785
Extrusion18.crossSection = [(1, 0),(0.92, -0.38),(0.71, -0.71),(0.38, -0.92),(0, -1),(-0.38, -0.92),(-0.71, -0.71),(-0.92, -0.38),(-1, 0),(-0.92, 0.38),(-0.71, 0.71),(-0.38, 0.92),(0, 1),(0.38, 0.92),(0.71, 0.71),(0.92, 0.38),(1, 0)]

Shape15.geometry = Extrusion18

Transform14.children.append(Shape15)

Group13.children.append(Transform14)
Group13.children.append(x3d.Comment("""right"""))
Transform19 = x3d.Transform()
Transform19.scale = [0.5,0.5,0.5]
Shape20 = x3d.Shape(DEF="ShapeUpRight")
Appearance21 = x3d.Appearance()
Material22 = x3d.Material()
Material22.diffuseColor = [0,0.7,1]

Appearance21.material = Material22

Shape20.appearance = Appearance21
Extrusion23 = x3d.Extrusion()
Extrusion23.spine = [(1.5, 0, 0),(2, 0, 0),(2.5, 0, 0)]
Extrusion23.creaseAngle = 0.785
Extrusion23.crossSection = [(1, 0),(0.92, -0.38),(0.71, -0.71),(0.38, -0.92),(0, -1),(-0.38, -0.92),(-0.71, -0.71),(-0.92, -0.38),(-1, 0),(-0.92, 0.38),(-0.71, 0.71),(-0.38, 0.92),(0, 1),(0.38, 0.92),(0.71, 0.71),(0.92, 0.38),(1, 0)]

Shape20.geometry = Extrusion23

Transform19.children.append(Shape20)

Group13.children.append(Transform19)
Group13.children.append(x3d.Comment("""up"""))
Transform24 = x3d.Transform()
Transform24.scale = [0.5,0.5,0.5]
Shape25 = x3d.Shape(USE="ShapeUpRight")

Transform24.children.append(Shape25)

Group13.children.append(Transform24)
Group13.children.append(x3d.Comment("""down"""))
Transform26 = x3d.Transform()
Transform26.scale = [0.5,0.5,0.5]
Shape27 = x3d.Shape(USE="ShapeLeftDown")

Transform26.children.append(Shape27)

Group13.children.append(Transform26)

ProtoBody12.children.append(Group13)

ProtoDeclare11.ProtoBody = ProtoBody12

Scene10.children.append(ProtoDeclare11)
Viewpoint28 = x3d.Viewpoint()
Viewpoint28.description = "Process pipes"
Viewpoint28.orientation = [1,0,0,-0.4]
Viewpoint28.position = [0,5,12]

Scene10.children.append(Viewpoint28)
Transform29 = x3d.Transform()
Transform29.translation = [0,-2.5,0]
ProtoInstance30 = x3d.ProtoInstance()
ProtoInstance30.name = "Process"

Transform29.children.append(ProtoInstance30)

Scene10.children.append(Transform29)
Transform31 = x3d.Transform()
ProtoInstance32 = x3d.ProtoInstance()
ProtoInstance32.name = "Process"

Transform31.children.append(ProtoInstance32)

Scene10.children.append(Transform31)
Transform33 = x3d.Transform()
Transform33.translation = [0,2.5,0]
ProtoInstance34 = x3d.ProtoInstance()
ProtoInstance34.name = "Process"

Transform33.children.append(ProtoInstance34)

Scene10.children.append(Transform33)

X3D0.Scene = Scene10
f = open("../data/qq3.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/qq3.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/qq3.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
