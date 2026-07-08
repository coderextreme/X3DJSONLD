print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "app.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "creator"
meta3.content = "Carlson, I"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "creator"
meta4.content = "Carlson, II"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "creator"
meta5.content = "Carlson, III"

head1.children.append(meta5)

X3D0.head = head1
Scene6 = x3d.Scene()
Group7 = x3d.Group()
Shape8 = x3d.Shape()
Appearance9 = x3d.Appearance()
Material10 = x3d.Material()
Material10.diffuseColor = [1,0,0]

Appearance9.material = Material10

Shape8.appearance = Appearance9
Box11 = x3d.Box()

Shape8.geometry = Box11

Group7.children.append(Shape8)

Scene6.children.append(Group7)
Transform12 = x3d.Transform()
Transform12.rotation = [7,8,9,3.14]
Transform12.scale = [4,5,6]
Transform12.translation = [1,2,3]

Scene6.children.append(Transform12)

X3D0.Scene = Scene6
f = open("../data/app.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/app.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/app.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
