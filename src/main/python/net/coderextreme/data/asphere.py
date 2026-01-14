print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Interchange"
X3D0.version = "4.0"
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
meta5.content = "manual"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "identifier"
meta6.content = "https://coderextreme.net/X3DJSONLD/src/main/data/asphere.x3d"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "description"
meta7.content = "a sphere"

head1.children.append(meta7)

X3D0.head = head1
Scene8 = x3d.Scene()
Group9 = x3d.Group()
Shape10 = x3d.Shape()
Appearance11 = x3d.Appearance()
Material12 = x3d.Material()
Material12.diffuseColor = [1,1,1]

Appearance11.material = Material12

Shape10.appearance = Appearance11
Sphere13 = x3d.Sphere()

Shape10.geometry = Sphere13

Group9.children.append(Shape10)

Scene8.children.append(Group9)

X3D0.Scene = Scene8
f = open("../data/asphere.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/asphere.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/asphere.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
