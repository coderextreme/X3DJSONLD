print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
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
meta5 = x3d.meta()
meta5.name = "license"
meta5.content = "../license.html"

head1.children.append(meta5)

X3D0.head = head1
Scene6 = x3d.Scene()
WorldInfo7 = x3d.WorldInfo()
WorldInfo7.title = "AllenBox.x3d"

Scene6.children.append(WorldInfo7)
NavigationInfo8 = x3d.NavigationInfo()
NavigationInfo8.avatarSize = [0.15,1.53,0.75]
NavigationInfo8.speed = 0.5
NavigationInfo8.type = ["EXAMINE"]

Scene6.children.append(NavigationInfo8)
Transform9 = x3d.Transform()
Transform9.DEF = "Floor"
Transform9.scale = [1,0.0125,1]
Transform9.translation = [0,-0.0125,0]
Shape10 = x3d.Shape()
Box11 = x3d.Box()

Shape10.geometry = Box11
Appearance12 = x3d.Appearance()
Material13 = x3d.Material()

Appearance12.material = Material13

Shape10.appearance = Appearance12

Transform9.children.append(Shape10)

Scene6.children.append(Transform9)

X3D0.Scene = Scene6
f = open("../data/AllenBox.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/AllenBox.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/AllenBox.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
