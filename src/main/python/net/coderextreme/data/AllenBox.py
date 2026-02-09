print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "AllenBox.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "creator"
meta3.content = "Allen Box"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "created"
meta4.content = "8 July 2025"

head1.children.append(meta4)

X3D0.head = head1
Scene5 = x3d.Scene()
WorldInfo6 = x3d.WorldInfo()
WorldInfo6.title = "AllenBox.x3d"

Scene5.children.append(WorldInfo6)
NavigationInfo7 = x3d.NavigationInfo()
NavigationInfo7.type = ["EXAMINE"]
NavigationInfo7.avatarSize = [0.15,1.53,0.75]
NavigationInfo7.speed = 0.5

Scene5.children.append(NavigationInfo7)
Transform8 = x3d.Transform(DEF="Floor")
Transform8.translation = [0,-0.0125,0]
Transform8.scale = [1,0.0125,1]
Shape9 = x3d.Shape()
Appearance10 = x3d.Appearance()
Material11 = x3d.Material()

Appearance10.material = Material11

Shape9.appearance = Appearance10
Box12 = x3d.Box()

Shape9.geometry = Box12

Transform8.children.append(Shape9)

Scene5.children.append(Transform8)

X3D0.Scene = Scene5
f = open("../data/AllenBox.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/AllenBox.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/AllenBox.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
