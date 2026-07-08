print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "converter"
meta2.content = "x3d-tidy V1.0.56, https://www.npmjs.com/package/x3d-tidy"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "converted"
meta3.content = "Mon, 31 Jul 2023 03:48:04 GMT"

head1.children.append(meta3)

X3D0.head = head1
Scene4 = x3d.Scene()
NavigationInfo5 = x3d.NavigationInfo()
NavigationInfo5.headlight = False

Scene4.children.append(NavigationInfo5)
Group6 = x3d.Group()
Group7 = x3d.Group(DEF="ARROW")
Shape8 = x3d.Shape()
Appearance9 = x3d.Appearance(DEF="ARROW_APPEARANCE")
Material10 = x3d.Material()
Material10.diffuseColor = [0.3,0.3,1]
Material10.emissiveColor = [0.3,0.3,0.33]

Appearance9.material = Material10

Shape8.appearance = Appearance9
Cylinder11 = x3d.Cylinder()
Cylinder11.top = False
Cylinder11.bottom = False
Cylinder11.radius = 0.025

Shape8.geometry = Cylinder11

Group7.children.append(Shape8)
Transform12 = x3d.Transform()
Transform12.translation = [0,1,0]
Shape13 = x3d.Shape(DEF="ARROW_POINTER")
Appearance14 = x3d.Appearance(USE="ARROW_APPEARANCE")

Shape13.appearance = Appearance14
Cone15 = x3d.Cone()
Cone15.height = 0.1
Cone15.bottomRadius = 0.05

Shape13.geometry = Cone15

Transform12.children.append(Shape13)

Group7.children.append(Transform12)
Transform16 = x3d.Transform()
Transform16.translation = [0,-1,0]
Transform16.rotation = [1,0,0,3.1416]
Shape17 = x3d.Shape(USE="ARROW_POINTER")

Transform16.children.append(Shape17)

Group7.children.append(Transform16)

Group6.children.append(Group7)
Transform18 = x3d.Transform()
Transform18.translation = [0,1.08,0]
Billboard19 = x3d.Billboard()
Shape20 = x3d.Shape()
Appearance21 = x3d.Appearance(DEF="LABEL_APPEARANCE")
Material22 = x3d.Material()
Material22.diffuseColor = [1,1,0.3]
Material22.emissiveColor = [0.33,0.33,0.1]

Appearance21.material = Material22

Shape20.appearance = Appearance21
Text23 = x3d.Text()
Text23.string = ["Y"]
FontStyle24 = x3d.FontStyle(DEF="LABEL_FONT")
FontStyle24.family = ["SANS"]
FontStyle24.size = 0.2
FontStyle24.justify = ["MIDDLE"]

Text23.fontStyle = FontStyle24

Shape20.geometry = Text23

Billboard19.children.append(Shape20)

Transform18.children.append(Billboard19)

Group6.children.append(Transform18)

Scene4.children.append(Group6)
Transform25 = x3d.Transform()
Transform25.rotation = [0,0,1,-1.5708]
Group26 = x3d.Group()
Group27 = x3d.Group(USE="ARROW")

Group26.children.append(Group27)
Transform28 = x3d.Transform()
Transform28.translation = [0.072,1.1,0]
Transform28.rotation = [0,0,1,1.5708]
Billboard29 = x3d.Billboard()
Shape30 = x3d.Shape()
Appearance31 = x3d.Appearance(USE="LABEL_APPEARANCE")

Shape30.appearance = Appearance31
Text32 = x3d.Text()
Text32.string = ["X"]
FontStyle33 = x3d.FontStyle(USE="LABEL_FONT")

Text32.fontStyle = FontStyle33

Shape30.geometry = Text32

Billboard29.children.append(Shape30)

Transform28.children.append(Billboard29)

Group26.children.append(Transform28)

Transform25.children.append(Group26)

Scene4.children.append(Transform25)
Transform34 = x3d.Transform()
Transform34.rotation = [1,0,0,1.5708]
Group35 = x3d.Group()
Group36 = x3d.Group(USE="ARROW")

Group35.children.append(Group36)
Transform37 = x3d.Transform()
Transform37.translation = [0,1.1,0.072]
Transform37.rotation = [1,0,0,-1.5708]
Billboard38 = x3d.Billboard()
Shape39 = x3d.Shape()
Appearance40 = x3d.Appearance(USE="LABEL_APPEARANCE")

Shape39.appearance = Appearance40
Text41 = x3d.Text()
Text41.string = ["Z"]
FontStyle42 = x3d.FontStyle(USE="LABEL_FONT")

Text41.fontStyle = FontStyle42

Shape39.geometry = Text41

Billboard38.children.append(Shape39)

Transform37.children.append(Billboard38)

Group35.children.append(Transform37)

Transform34.children.append(Group35)

Scene4.children.append(Transform34)

X3D0.Scene = Scene4
f = open("../data/JointCoordinateAxes.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/JointCoordinateAxes.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/JointCoordinateAxes.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
