print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "ifscubeworks.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "identifier"
meta3.content = "http://coderextreme.net/X3DJSONLD/src/main/data/ifscubeworks.x3d"

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
meta7 = x3d.meta()
meta7.name = "license"
meta7.content = "https://www.web3d.org/x3d/content/examples/license.html"

head1.children.append(meta7)

X3D0.head = head1
Scene8 = x3d.Scene()
WorldInfo9 = x3d.WorldInfo()
WorldInfo9.title = "ifscubeworks.x3d"

Scene8.children.append(WorldInfo9)
Group10 = x3d.Group()
Shape11 = x3d.Shape()
IndexedFaceSet12 = x3d.IndexedFaceSet(DEF="IndexedFaceSet")
IndexedFaceSet12.normalPerVertex = False
IndexedFaceSet12.colorIndex = [0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1]
IndexedFaceSet12.normalIndex = [0,0,1,2,3,4,5]
IndexedFaceSet12.coordIndex = [0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1]
Color13 = x3d.Color()
Color13.color = [(0, 1, 0)]

IndexedFaceSet12.color = Color13
Normal14 = x3d.Normal()
Normal14.vector = [(1, 0, 0),(-1, 0, 0),(0, 1, 0),(0, 0, -1),(0, -1, 0),(0, 0, 1)]

IndexedFaceSet12.normal = Normal14
Coordinate15 = x3d.Coordinate()
Coordinate15.point = [(0, 0, 1),(0, 1, 1),(1, 1, 1),(1, 0, 1)]

IndexedFaceSet12.coord = Coordinate15

Shape11.geometry = IndexedFaceSet12

Group10.children.append(Shape11)

Scene8.children.append(Group10)

X3D0.Scene = Scene8
f = open("../data/ifscubeworks.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/ifscubeworks.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/ifscubeworks.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
