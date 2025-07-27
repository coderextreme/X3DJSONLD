print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Interchange"
X3D0.version = "3.3"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "ifscubeworks.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "identifier"
meta3.content = "http://coderextreme.net/X3DJSONLD/src/main/personal/ifscubeworks.x3d"

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
meta7.content = "https://coderextreme.net/X3DJSONLD/LICENSE"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "generator"
meta8.content = "X3D-Edit, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta8)

X3D0.head = head1
Scene9 = x3d.Scene()
WorldInfo10 = x3d.WorldInfo()
WorldInfo10.title = "ifscubeworks.x3d"

Scene9.children.append(WorldInfo10)
Group11 = x3d.Group()
Shape12 = x3d.Shape()
IndexedFaceSet13 = x3d.IndexedFaceSet()
IndexedFaceSet13.DEF = "IndexedFaceSet"
IndexedFaceSet13.coordIndex = [0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1]
IndexedFaceSet13.normalIndex = [0,0,1,2,3,4,5]
IndexedFaceSet13.normalPerVertex = False
IndexedFaceSet13.colorIndex = [0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1]
Coordinate14 = x3d.Coordinate()

IndexedFaceSet13.coord = Coordinate14
Normal15 = x3d.Normal()

IndexedFaceSet13.normal = Normal15
Color16 = x3d.Color()

IndexedFaceSet13.color = Color16

Shape12.geometry = IndexedFaceSet13

Group11.children.append(Shape12)

Scene9.children.append(Group11)

X3D0.Scene = Scene9
f = open("../personal/ifscubeworks.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../personal/ifscubeworks.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
