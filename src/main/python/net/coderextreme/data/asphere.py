print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Interchange"
X3D0.version = "4.1"
head1 = x3d.head()
component2 = x3d.component()
component2.name = "Scripting"
component2.level = 1

head1.children.append(component2)
meta3 = x3d.meta()
meta3.name = "title"
meta3.content = "asphere.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "creator"
meta4.content = "John Carlson"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "generator"
meta5.content = "x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "generator"
meta6.content = "manual"

head1.children.append(meta6)

X3D0.head = head1
Scene7 = x3d.Scene()
Group8 = x3d.Group()
Shape9 = x3d.Shape()
Appearance10 = x3d.Appearance()
Material11 = x3d.Material()
Material11.diffuseColor = [1,1,1]

Appearance10.material = Material11

Shape9.appearance = Appearance10
Sphere12 = x3d.Sphere()

Shape9.geometry = Sphere12

Group8.children.append(Shape9)

Scene7.children.append(Group8)

X3D0.Scene = Scene7
f = open("../data/asphere.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/asphere.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/asphere.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
