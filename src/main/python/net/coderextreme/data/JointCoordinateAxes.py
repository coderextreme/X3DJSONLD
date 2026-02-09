print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "converter"
meta2.content = "x3d-tidy V1.0.56, https://www.npmjs.com/package/x3d-tidy"

head1.children.append(meta2)

X3D0.head = head1
Scene3 = x3d.Scene()
NavigationInfo4 = x3d.NavigationInfo()
NavigationInfo4.headlight = False

Scene3.children.append(NavigationInfo4)
Group5 = x3d.Group()
Group6 = x3d.Group(DEF="ARROW")
Shape7 = x3d.Shape()
Appearance8 = x3d.Appearance(DEF="ARROW_APPEARANCE")
Material9 = x3d.Material()
Material9.diffuseColor = [0.3,0.3,1]
Material9.emissiveColor = [0.3,0.3,0.33]

Appearance8.material = Material9

Shape7.appearance = Appearance8
Cylinder10 = x3d.Cylinder()
Cylinder10.top = False
Cylinder10.bottom = False
Cylinder10.radius = 0.025

Shape7.geometry = Cylinder10

Group6.children.append(Shape7)
Transform11 = x3d.Transform()
Transform11.translation = [0,1,0]
Shape12 = x3d.Shape(DEF="ARROW_POINTER")
Appearance13 = x3d.Appearance(USE="ARROW_APPEARANCE")

Shape12.appearance = Appearance13
Cone14 = x3d.Cone()
Cone14.height = 0.1
Cone14.bottomRadius = 0.05

Shape12.geometry = Cone14

Transform11.children.append(Shape12)

Group6.children.append(Transform11)
Transform15 = x3d.Transform()
Transform15.translation = [0,-1,0]
Transform15.rotation = [1,0,0,3.1416]
Shape16 = x3d.Shape(USE="ARROW_POINTER")

Transform15.children.append(Shape16)

Group6.children.append(Transform15)

Group5.children.append(Group6)
Transform17 = x3d.Transform()
Transform17.translation = [0,1.08,0]
Billboard18 = x3d.Billboard()
Shape19 = x3d.Shape()
Appearance20 = x3d.Appearance(DEF="LABEL_APPEARANCE")
Material21 = x3d.Material()
Material21.diffuseColor = [1,1,0.3]
Material21.emissiveColor = [0.33,0.33,0.1]

Appearance20.material = Material21

Shape19.appearance = Appearance20
Text22 = x3d.Text()
Text22.string = ["Y"]
FontStyle23 = x3d.FontStyle(DEF="LABEL_FONT")
FontStyle23.family = ["SANS"]
FontStyle23.size = 0.2
FontStyle23.justify = ["MIDDLE"]

Text22.fontStyle = FontStyle23

Shape19.geometry = Text22

Billboard18.children.append(Shape19)

Transform17.children.append(Billboard18)

Group5.children.append(Transform17)

Scene3.children.append(Group5)
Transform24 = x3d.Transform()
Transform24.rotation = [0,0,1,-1.5708]
Group25 = x3d.Group()
Group26 = x3d.Group(USE="ARROW")

Group25.children.append(Group26)
Transform27 = x3d.Transform()
Transform27.translation = [0.072,1.1,0]
Transform27.rotation = [0,0,1,1.5708]
Billboard28 = x3d.Billboard()
Shape29 = x3d.Shape()
Appearance30 = x3d.Appearance(USE="LABEL_APPEARANCE")

Shape29.appearance = Appearance30
Text31 = x3d.Text()
Text31.string = ["X"]
FontStyle32 = x3d.FontStyle(USE="LABEL_FONT")

Text31.fontStyle = FontStyle32

Shape29.geometry = Text31

Billboard28.children.append(Shape29)

Transform27.children.append(Billboard28)

Group25.children.append(Transform27)

Transform24.children.append(Group25)

Scene3.children.append(Transform24)
Transform33 = x3d.Transform()
Transform33.rotation = [1,0,0,1.5708]
Group34 = x3d.Group()
Group35 = x3d.Group(USE="ARROW")

Group34.children.append(Group35)
Transform36 = x3d.Transform()
Transform36.translation = [0,1.1,0.072]
Transform36.rotation = [1,0,0,-1.5708]
Billboard37 = x3d.Billboard()
Shape38 = x3d.Shape()
Appearance39 = x3d.Appearance(USE="LABEL_APPEARANCE")

Shape38.appearance = Appearance39
Text40 = x3d.Text()
Text40.string = ["Z"]
FontStyle41 = x3d.FontStyle(USE="LABEL_FONT")

Text40.fontStyle = FontStyle41

Shape38.geometry = Text40

Billboard37.children.append(Shape38)

Transform36.children.append(Billboard37)

Group34.children.append(Transform36)

Transform33.children.append(Group34)

Scene3.children.append(Transform33)

X3D0.Scene = Scene3
f = open("../data/JointCoordinateAxes.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/JointCoordinateAxes.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/JointCoordinateAxes.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
