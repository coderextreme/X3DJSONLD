print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
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
meta6 = x3d.meta()
meta6.name = "created"
meta6.content = "4 April 2017"

head1.children.append(meta6)

X3D0.head = head1
Scene7 = x3d.Scene()
Group8 = x3d.Group()
Shape9 = x3d.Shape()
IndexedFaceSet10 = x3d.IndexedFaceSet()
IndexedFaceSet10.creaseAngle = 1.57
IndexedFaceSet10.DEF = "IndexedFaceSet"
IndexedFaceSet10.coordIndex = [0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1]
IndexedFaceSet10.normalIndex = [0,-1,0,-1,1,-1,2,-1,3,-1,4,-1,5,-1]
IndexedFaceSet10.normalPerVertex = False
IndexedFaceSet10.colorIndex = [0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1]
Coordinate11 = x3d.Coordinate()
Coordinate11.point = [(0, 0, 1),(0, 1, 1),(1, 1, 1),(1, 0, 1)]

IndexedFaceSet10.coord = Coordinate11
Normal12 = x3d.Normal()
Normal12.vector = [(1, 0, 0),(-1, 0, 0),(0, 1, 0),(0, 0, -1),(0, -1, 0),(0, 0, 1)]

IndexedFaceSet10.normal = Normal12
Color13 = x3d.Color()
Color13.color = [(0, 1, 0)]

IndexedFaceSet10.color = Color13

Shape9.geometry = IndexedFaceSet10

Group8.children.append(Shape9)

Scene7.children.append(Group8)

X3D0.Scene = Scene7
f = open("../data/ifscube.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/ifscube.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/ifscube.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
