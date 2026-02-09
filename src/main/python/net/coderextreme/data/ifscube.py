print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "ifscube.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "identifier"
meta3.content = "http://coderextreme.net/X3DJSONLD/src/main/data/ifscube.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "description"
meta4.content = "Template for an Indexed Face Set"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "creator"
meta5.content = "John Carlson"

head1.children.append(meta5)

X3D0.head = head1
Scene6 = x3d.Scene()
Group7 = x3d.Group()
Shape8 = x3d.Shape()
IndexedFaceSet9 = x3d.IndexedFaceSet(DEF="IndexedFaceSet")
IndexedFaceSet9.creaseAngle = 1.57
IndexedFaceSet9.normalPerVertex = False
IndexedFaceSet9.colorIndex = [0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1]
IndexedFaceSet9.normalIndex = [0,-1,0,-1,1,-1,2,-1,3,-1,4,-1,5,-1]
IndexedFaceSet9.coordIndex = [0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1]
Color10 = x3d.Color()
Color10.color = [(0, 1, 0)]

IndexedFaceSet9.color = Color10
Normal11 = x3d.Normal()
Normal11.vector = [(1, 0, 0),(-1, 0, 0),(0, 1, 0),(0, 0, -1),(0, -1, 0),(0, 0, 1)]

IndexedFaceSet9.normal = Normal11
Coordinate12 = x3d.Coordinate()
Coordinate12.point = [(0, 0, 1),(0, 1, 1),(1, 1, 1),(1, 0, 1)]

IndexedFaceSet9.coord = Coordinate12

Shape8.geometry = IndexedFaceSet9

Group7.children.append(Shape8)

Scene6.children.append(Group7)

X3D0.Scene = Scene6
f = open("../data/ifscube.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/ifscube.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/ifscube.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
