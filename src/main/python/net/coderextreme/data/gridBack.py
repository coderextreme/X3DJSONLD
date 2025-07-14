print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Interchange"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "gridBack.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "description"
meta3.content = "Checkerboard grid background for X3D/VRML materials selection."

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "creator"
meta4.content = "David Roussel"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "translator"
meta5.content = "James Harney, Don Brutzman NPS"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "created"
meta6.content = "8 April 2002"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "modified"
meta7.content = "12 January 2014"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "reference"
meta8.content = "http://vrmlstuff.free.fr/materials"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "subject"
meta9.content = "Universal Media Material Library"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "identifier"
meta10.content = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.json"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "generator"
meta11.content = "Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "license"
meta12.content = "../license.html"

head1.children.append(meta12)

X3D0.head = head1
Scene13 = x3d.Scene()
Shape14 = x3d.Shape()
Appearance15 = x3d.Appearance()
Material16 = x3d.Material()
Material16.ambientIntensity = 0.01
Material16.diffuseColor = [1,1,1]
Material16.shininess = 0.05

Appearance15.material = Material16

Shape14.appearance = Appearance15
IndexedFaceSet17 = x3d.IndexedFaceSet()
IndexedFaceSet17.colorIndex = [0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0]
IndexedFaceSet17.colorPerVertex = False
IndexedFaceSet17.coordIndex = [0,8,9,1,-1,1,9,10,2,-1,2,10,11,3,-1,3,11,12,4,-1,4,12,13,5,-1,5,13,14,6,-1,6,14,15,7,-1,8,16,17,9,-1,9,17,18,10,-1,10,18,19,11,-1,11,19,20,12,-1,12,20,21,13,-1,13,21,22,14,-1,14,22,23,15,-1,16,24,25,17,-1,17,25,26,18,-1,18,26,27,19,-1,19,27,28,20,-1,20,28,29,21,-1,21,29,30,22,-1,22,30,31,23,-1,24,32,33,25,-1,25,33,34,26,-1,26,34,35,27,-1,27,35,36,28,-1,28,36,37,29,-1,29,37,38,30,-1,30,38,39,31,-1,32,40,41,33,-1,33,41,42,34,-1,34,42,43,35,-1,35,43,44,36,-1,36,44,45,37,-1,37,45,46,38,-1,38,46,47,39,-1,40,48,49,41,-1,41,49,50,42,-1,42,50,51,43,-1,43,51,52,44,-1,44,52,53,45,-1,45,53,54,46,-1,46,54,55,47,-1,48,56,57,49,-1,49,57,58,50,-1,50,58,59,51,-1,51,59,60,52,-1,52,60,61,53,-1,53,61,62,54,-1,54,62,63,55,-1]
IndexedFaceSet17.normalPerVertex = False
Coordinate18 = x3d.Coordinate()

IndexedFaceSet17.coord = Coordinate18
Color19 = x3d.Color()

IndexedFaceSet17.color = Color19

Shape14.geometry = IndexedFaceSet17

Scene13.children.append(Shape14)

X3D0.Scene = Scene13
f = open("../data/gridBack.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/gridBack.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
