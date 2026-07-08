print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "ThreeInARow.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "creator"
meta3.content = "John Carlson"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "generator"
meta4.content = "manual"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "identifier"
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/data/ThreeInARow.x3d"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "description"
meta6.content = "3 boxes"

head1.children.append(meta6)

X3D0.head = head1
Scene7 = x3d.Scene()
NavigationInfo8 = x3d.NavigationInfo()
NavigationInfo8.type = ["EXAMINE"]

Scene7.children.append(NavigationInfo8)
Viewpoint9 = x3d.Viewpoint()
Viewpoint9.description = "Cubes"
Viewpoint9.position = [0,0,12]

Scene7.children.append(Viewpoint9)
Transform10 = x3d.Transform(DEF="first")
Transform10.translation = [0,2,0]
Shape11 = x3d.Shape(DEF="ball")
Sphere12 = x3d.Sphere()

Shape11.geometry = Sphere12
Appearance13 = x3d.Appearance()
Material14 = x3d.Material()
Material14.diffuseColor = [1,1,1]

Appearance13.material = Material14

Shape11.appearance = Appearance13

Transform10.children.append(Shape11)

Scene7.children.append(Transform10)
Transform15 = x3d.Transform()
Shape16 = x3d.Shape(USE="ball")

Transform15.children.append(Shape16)

Scene7.children.append(Transform15)
Transform17 = x3d.Transform()
Transform17.translation = [0,-2,0]
Shape18 = x3d.Shape(USE="ball")

Transform17.children.append(Shape18)

Scene7.children.append(Transform17)

X3D0.Scene = Scene7
f = open("../data/ThreeInARow.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/ThreeInARow.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/ThreeInARow.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
