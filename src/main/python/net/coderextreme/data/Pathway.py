print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Interchange"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "Pathway.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "description"
meta3.content = "Pathway for HAnim scene Winter and Spring."

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "creator"
meta4.content = "Carol McDonald"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "translator"
meta5.content = "Joe Williams and Don Brutzman"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "created"
meta6.content = "27 May 2023"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "modified"
meta7.content = "27 May 2023"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "Image"
meta8.content = "images/PathwayX3domOriginal.png"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "TODO"
meta9.content = "add viewpoints"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "TODO"
meta10.content = "DEF/USE for all duplicated nodes to ensure consistency"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "reference"
meta11.content = "originals/pathway.x3dv"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "identifier"
meta12.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/Pathway.x3d"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "generator"
meta13.content = "X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "license"
meta14.content = "../license.html"

head1.children.append(meta14)

X3D0.head = head1
Scene15 = x3d.Scene()
WorldInfo16 = x3d.WorldInfo()
WorldInfo16.title = "Pathway.x3d"

Scene15.children.append(WorldInfo16)
Shape17 = x3d.Shape()
Appearance18 = x3d.Appearance()
Material19 = x3d.Material()
Material19.ambientIntensity = 0
Material19.diffuseColor = [0.784313738,0,0]
Material19.shininess = 1

Appearance18.material = Material19

Shape17.appearance = Appearance18
IndexedFaceSet20 = x3d.IndexedFaceSet()
IndexedFaceSet20.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1]
IndexedFaceSet20.solid = False
IndexedFaceSet20.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1]
Coordinate21 = x3d.Coordinate()

IndexedFaceSet20.coord = Coordinate21

Shape17.geometry = IndexedFaceSet20

Scene15.children.append(Shape17)
Shape22 = x3d.Shape()
Appearance23 = x3d.Appearance()
Material24 = x3d.Material()
Material24.ambientIntensity = 0
Material24.diffuseColor = [0.784313738,0,0]
Material24.shininess = 1

Appearance23.material = Material24

Shape22.appearance = Appearance23
IndexedFaceSet25 = x3d.IndexedFaceSet()
IndexedFaceSet25.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet25.solid = False
IndexedFaceSet25.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate26 = x3d.Coordinate()

IndexedFaceSet25.coord = Coordinate26

Shape22.geometry = IndexedFaceSet25

Scene15.children.append(Shape22)
Shape27 = x3d.Shape()
Appearance28 = x3d.Appearance()
Material29 = x3d.Material()
Material29.ambientIntensity = 0
Material29.diffuseColor = [0.784313738,0,0]
Material29.shininess = 1

Appearance28.material = Material29

Shape27.appearance = Appearance28
IndexedFaceSet30 = x3d.IndexedFaceSet()
IndexedFaceSet30.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet30.solid = False
IndexedFaceSet30.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate31 = x3d.Coordinate()

IndexedFaceSet30.coord = Coordinate31

Shape27.geometry = IndexedFaceSet30

Scene15.children.append(Shape27)
Shape32 = x3d.Shape()
Appearance33 = x3d.Appearance()
Material34 = x3d.Material()
Material34.ambientIntensity = 0
Material34.diffuseColor = [0.784313738,0,0]
Material34.shininess = 1

Appearance33.material = Material34

Shape32.appearance = Appearance33
IndexedFaceSet35 = x3d.IndexedFaceSet()
IndexedFaceSet35.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1]
IndexedFaceSet35.solid = False
IndexedFaceSet35.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1]
Coordinate36 = x3d.Coordinate()

IndexedFaceSet35.coord = Coordinate36

Shape32.geometry = IndexedFaceSet35

Scene15.children.append(Shape32)
Shape37 = x3d.Shape()
Appearance38 = x3d.Appearance()
Material39 = x3d.Material()
Material39.ambientIntensity = 0
Material39.diffuseColor = [0.784313738,0,0]
Material39.shininess = 1

Appearance38.material = Material39

Shape37.appearance = Appearance38
IndexedFaceSet40 = x3d.IndexedFaceSet()
IndexedFaceSet40.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet40.solid = False
IndexedFaceSet40.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate41 = x3d.Coordinate()

IndexedFaceSet40.coord = Coordinate41

Shape37.geometry = IndexedFaceSet40

Scene15.children.append(Shape37)
Shape42 = x3d.Shape()
Appearance43 = x3d.Appearance()
Material44 = x3d.Material()
Material44.ambientIntensity = 0
Material44.diffuseColor = [0.784313738,0,0]
Material44.shininess = 1

Appearance43.material = Material44

Shape42.appearance = Appearance43
IndexedFaceSet45 = x3d.IndexedFaceSet()
IndexedFaceSet45.coordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet45.solid = False
IndexedFaceSet45.texCoordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
Coordinate46 = x3d.Coordinate()

IndexedFaceSet45.coord = Coordinate46

Shape42.geometry = IndexedFaceSet45

Scene15.children.append(Shape42)
Shape47 = x3d.Shape()
Appearance48 = x3d.Appearance()
Material49 = x3d.Material()
Material49.ambientIntensity = 0
Material49.diffuseColor = [0.784313738,0,0]
Material49.shininess = 1

Appearance48.material = Material49

Shape47.appearance = Appearance48
IndexedFaceSet50 = x3d.IndexedFaceSet()
IndexedFaceSet50.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
IndexedFaceSet50.solid = False
IndexedFaceSet50.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
Coordinate51 = x3d.Coordinate()

IndexedFaceSet50.coord = Coordinate51

Shape47.geometry = IndexedFaceSet50

Scene15.children.append(Shape47)
Shape52 = x3d.Shape()
Appearance53 = x3d.Appearance()
Material54 = x3d.Material()
Material54.ambientIntensity = 0
Material54.diffuseColor = [0.784313738,0,0]
Material54.shininess = 1

Appearance53.material = Material54

Shape52.appearance = Appearance53
IndexedFaceSet55 = x3d.IndexedFaceSet()
IndexedFaceSet55.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,36,-1,34,36,37,-1,35,34,37,-1,35,37,38,-1,54,45,43,-1,46,48,54,-1,43,46,54,-1,50,48,46,-1,40,47,50,-1,46,40,50,-1,48,50,52,-1,48,52,49,-1,50,47,51,-1,50,51,52,-1,45,54,55,-1,45,55,53,-1,54,48,49,-1,54,49,55,-1,62,60,58,-1,62,58,61,-1,59,62,61,-1,59,61,56,-1,65,63,57,-1,65,57,64,-1,60,65,64,-1,60,64,58,-1,64,57,40,-1,46,58,64,-1,40,46,64,-1,61,58,46,-1,43,56,61,-1,46,43,61,-1,51,39,52,-1,49,52,39,-1,65,41,63,-1,60,41,65,-1,49,39,42,-1,53,55,42,-1,49,42,55,-1,44,60,62,-1,62,59,44,-1,41,60,44,-1]
IndexedFaceSet55.solid = False
IndexedFaceSet55.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,36,-1,34,36,37,-1,35,34,37,-1,35,37,38,-1,54,45,43,-1,46,48,54,-1,43,46,54,-1,50,48,46,-1,40,47,50,-1,46,40,50,-1,48,50,52,-1,48,52,49,-1,50,47,51,-1,50,51,52,-1,45,54,55,-1,45,55,53,-1,54,48,49,-1,54,49,55,-1,62,60,58,-1,62,58,61,-1,59,62,61,-1,59,61,56,-1,65,63,57,-1,65,57,64,-1,60,65,64,-1,60,64,58,-1,64,57,40,-1,46,58,64,-1,40,46,64,-1,61,58,46,-1,43,56,61,-1,46,43,61,-1,51,39,52,-1,49,52,39,-1,65,41,63,-1,60,41,65,-1,49,39,42,-1,53,55,42,-1,49,42,55,-1,44,60,62,-1,62,59,44,-1,41,60,44,-1]
Coordinate56 = x3d.Coordinate()

IndexedFaceSet55.coord = Coordinate56

Shape52.geometry = IndexedFaceSet55

Scene15.children.append(Shape52)
Shape57 = x3d.Shape()
Appearance58 = x3d.Appearance()
Material59 = x3d.Material()
Material59.ambientIntensity = 0
Material59.diffuseColor = [0.784313738,0,0]
Material59.shininess = 1

Appearance58.material = Material59

Shape57.appearance = Appearance58
IndexedFaceSet60 = x3d.IndexedFaceSet()
IndexedFaceSet60.coordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
IndexedFaceSet60.solid = False
IndexedFaceSet60.texCoordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
Coordinate61 = x3d.Coordinate()

IndexedFaceSet60.coord = Coordinate61

Shape57.geometry = IndexedFaceSet60

Scene15.children.append(Shape57)
Shape62 = x3d.Shape()
Appearance63 = x3d.Appearance()
Material64 = x3d.Material()
Material64.ambientIntensity = 0
Material64.diffuseColor = [0.784313738,0,0]
Material64.shininess = 1

Appearance63.material = Material64

Shape62.appearance = Appearance63
IndexedFaceSet65 = x3d.IndexedFaceSet()
IndexedFaceSet65.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet65.solid = False
IndexedFaceSet65.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
Coordinate66 = x3d.Coordinate()

IndexedFaceSet65.coord = Coordinate66

Shape62.geometry = IndexedFaceSet65

Scene15.children.append(Shape62)
Shape67 = x3d.Shape()
Appearance68 = x3d.Appearance()
Material69 = x3d.Material()
Material69.ambientIntensity = 0
Material69.diffuseColor = [0.784313738,0,0]
Material69.shininess = 1

Appearance68.material = Material69

Shape67.appearance = Appearance68
IndexedFaceSet70 = x3d.IndexedFaceSet()
IndexedFaceSet70.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
IndexedFaceSet70.solid = False
IndexedFaceSet70.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
Coordinate71 = x3d.Coordinate()

IndexedFaceSet70.coord = Coordinate71

Shape67.geometry = IndexedFaceSet70

Scene15.children.append(Shape67)
Shape72 = x3d.Shape()
Appearance73 = x3d.Appearance()
Material74 = x3d.Material()
Material74.ambientIntensity = 0
Material74.diffuseColor = [0.784313738,0,0]
Material74.shininess = 1

Appearance73.material = Material74

Shape72.appearance = Appearance73
IndexedFaceSet75 = x3d.IndexedFaceSet()
IndexedFaceSet75.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
IndexedFaceSet75.solid = False
IndexedFaceSet75.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
Coordinate76 = x3d.Coordinate()

IndexedFaceSet75.coord = Coordinate76

Shape72.geometry = IndexedFaceSet75

Scene15.children.append(Shape72)
Shape77 = x3d.Shape()
Appearance78 = x3d.Appearance()
Material79 = x3d.Material()
Material79.ambientIntensity = 0
Material79.diffuseColor = [0.784313738,0,0]
Material79.shininess = 1

Appearance78.material = Material79

Shape77.appearance = Appearance78
IndexedFaceSet80 = x3d.IndexedFaceSet()
IndexedFaceSet80.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet80.solid = False
IndexedFaceSet80.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate81 = x3d.Coordinate()

IndexedFaceSet80.coord = Coordinate81

Shape77.geometry = IndexedFaceSet80

Scene15.children.append(Shape77)
Shape82 = x3d.Shape()
Appearance83 = x3d.Appearance()
Material84 = x3d.Material()
Material84.ambientIntensity = 0
Material84.diffuseColor = [0.784313738,0,0]
Material84.shininess = 1

Appearance83.material = Material84

Shape82.appearance = Appearance83
IndexedFaceSet85 = x3d.IndexedFaceSet()
IndexedFaceSet85.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet85.solid = False
IndexedFaceSet85.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate86 = x3d.Coordinate()

IndexedFaceSet85.coord = Coordinate86

Shape82.geometry = IndexedFaceSet85

Scene15.children.append(Shape82)
Shape87 = x3d.Shape()
Appearance88 = x3d.Appearance()
Material89 = x3d.Material()
Material89.ambientIntensity = 0
Material89.diffuseColor = [0.784313738,0,0]
Material89.shininess = 1

Appearance88.material = Material89

Shape87.appearance = Appearance88
IndexedFaceSet90 = x3d.IndexedFaceSet()
IndexedFaceSet90.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet90.solid = False
IndexedFaceSet90.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate91 = x3d.Coordinate()

IndexedFaceSet90.coord = Coordinate91

Shape87.geometry = IndexedFaceSet90

Scene15.children.append(Shape87)
Shape92 = x3d.Shape()
Appearance93 = x3d.Appearance()
Material94 = x3d.Material()
Material94.ambientIntensity = 0
Material94.diffuseColor = [0.784313738,0,0]
Material94.shininess = 1

Appearance93.material = Material94

Shape92.appearance = Appearance93
IndexedFaceSet95 = x3d.IndexedFaceSet()
IndexedFaceSet95.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,35,-1,34,35,36,-1,38,37,39,-1,38,39,40,-1]
IndexedFaceSet95.solid = False
IndexedFaceSet95.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,35,-1,34,35,36,-1,38,37,39,-1,38,39,40,-1]
Coordinate96 = x3d.Coordinate()

IndexedFaceSet95.coord = Coordinate96

Shape92.geometry = IndexedFaceSet95

Scene15.children.append(Shape92)
Shape97 = x3d.Shape()
Appearance98 = x3d.Appearance()
Material99 = x3d.Material()
Material99.ambientIntensity = 0
Material99.diffuseColor = [0.784313738,0,0]
Material99.shininess = 1

Appearance98.material = Material99

Shape97.appearance = Appearance98
IndexedFaceSet100 = x3d.IndexedFaceSet()
IndexedFaceSet100.coordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
IndexedFaceSet100.solid = False
IndexedFaceSet100.texCoordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
Coordinate101 = x3d.Coordinate()

IndexedFaceSet100.coord = Coordinate101

Shape97.geometry = IndexedFaceSet100

Scene15.children.append(Shape97)
Shape102 = x3d.Shape()
Appearance103 = x3d.Appearance()
Material104 = x3d.Material()
Material104.ambientIntensity = 0
Material104.diffuseColor = [0.784313738,0,0]
Material104.shininess = 1

Appearance103.material = Material104

Shape102.appearance = Appearance103
IndexedFaceSet105 = x3d.IndexedFaceSet()
IndexedFaceSet105.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet105.solid = False
IndexedFaceSet105.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
Coordinate106 = x3d.Coordinate()

IndexedFaceSet105.coord = Coordinate106

Shape102.geometry = IndexedFaceSet105

Scene15.children.append(Shape102)
Shape107 = x3d.Shape()
Appearance108 = x3d.Appearance()
Material109 = x3d.Material()
Material109.ambientIntensity = 0
Material109.diffuseColor = [0.784313738,0,0]
Material109.shininess = 1

Appearance108.material = Material109

Shape107.appearance = Appearance108
IndexedFaceSet110 = x3d.IndexedFaceSet()
IndexedFaceSet110.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet110.solid = False
IndexedFaceSet110.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate111 = x3d.Coordinate()

IndexedFaceSet110.coord = Coordinate111

Shape107.geometry = IndexedFaceSet110

Scene15.children.append(Shape107)
Shape112 = x3d.Shape()
Appearance113 = x3d.Appearance()
Material114 = x3d.Material()
Material114.ambientIntensity = 0
Material114.diffuseColor = [0.784313738,0,0]
Material114.shininess = 1

Appearance113.material = Material114

Shape112.appearance = Appearance113
IndexedFaceSet115 = x3d.IndexedFaceSet()
IndexedFaceSet115.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1]
IndexedFaceSet115.solid = False
IndexedFaceSet115.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1]
Coordinate116 = x3d.Coordinate()

IndexedFaceSet115.coord = Coordinate116

Shape112.geometry = IndexedFaceSet115

Scene15.children.append(Shape112)
Shape117 = x3d.Shape()
Appearance118 = x3d.Appearance()
Material119 = x3d.Material()
Material119.ambientIntensity = 0
Material119.diffuseColor = [0.784313738,0,0]
Material119.shininess = 1

Appearance118.material = Material119

Shape117.appearance = Appearance118
IndexedFaceSet120 = x3d.IndexedFaceSet()
IndexedFaceSet120.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet120.solid = False
IndexedFaceSet120.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate121 = x3d.Coordinate()

IndexedFaceSet120.coord = Coordinate121

Shape117.geometry = IndexedFaceSet120

Scene15.children.append(Shape117)
Shape122 = x3d.Shape()
Appearance123 = x3d.Appearance()
Material124 = x3d.Material()
Material124.ambientIntensity = 0
Material124.diffuseColor = [0.784313738,0,0]
Material124.shininess = 1

Appearance123.material = Material124

Shape122.appearance = Appearance123
IndexedFaceSet125 = x3d.IndexedFaceSet()
IndexedFaceSet125.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet125.solid = False
IndexedFaceSet125.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate126 = x3d.Coordinate()

IndexedFaceSet125.coord = Coordinate126

Shape122.geometry = IndexedFaceSet125

Scene15.children.append(Shape122)
Shape127 = x3d.Shape()
Appearance128 = x3d.Appearance()
Material129 = x3d.Material()
Material129.ambientIntensity = 0
Material129.diffuseColor = [0.784313738,0,0]
Material129.shininess = 1

Appearance128.material = Material129

Shape127.appearance = Appearance128
IndexedFaceSet130 = x3d.IndexedFaceSet()
IndexedFaceSet130.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet130.solid = False
IndexedFaceSet130.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate131 = x3d.Coordinate()

IndexedFaceSet130.coord = Coordinate131

Shape127.geometry = IndexedFaceSet130

Scene15.children.append(Shape127)
Shape132 = x3d.Shape()
Appearance133 = x3d.Appearance()
Material134 = x3d.Material()
Material134.ambientIntensity = 0
Material134.diffuseColor = [0.784313738,0,0]
Material134.shininess = 1

Appearance133.material = Material134

Shape132.appearance = Appearance133
IndexedFaceSet135 = x3d.IndexedFaceSet()
IndexedFaceSet135.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet135.solid = False
IndexedFaceSet135.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate136 = x3d.Coordinate()

IndexedFaceSet135.coord = Coordinate136

Shape132.geometry = IndexedFaceSet135

Scene15.children.append(Shape132)
Shape137 = x3d.Shape()
Appearance138 = x3d.Appearance()
Material139 = x3d.Material()
Material139.ambientIntensity = 0
Material139.diffuseColor = [0.784313738,0,0]
Material139.shininess = 1

Appearance138.material = Material139

Shape137.appearance = Appearance138
IndexedFaceSet140 = x3d.IndexedFaceSet()
IndexedFaceSet140.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet140.solid = False
IndexedFaceSet140.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
Coordinate141 = x3d.Coordinate()

IndexedFaceSet140.coord = Coordinate141

Shape137.geometry = IndexedFaceSet140

Scene15.children.append(Shape137)
Shape142 = x3d.Shape()
Appearance143 = x3d.Appearance()
Material144 = x3d.Material()
Material144.ambientIntensity = 0
Material144.diffuseColor = [0.784313738,0,0]
Material144.shininess = 1

Appearance143.material = Material144

Shape142.appearance = Appearance143
IndexedFaceSet145 = x3d.IndexedFaceSet()
IndexedFaceSet145.coordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet145.solid = False
IndexedFaceSet145.texCoordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
Coordinate146 = x3d.Coordinate()

IndexedFaceSet145.coord = Coordinate146

Shape142.geometry = IndexedFaceSet145

Scene15.children.append(Shape142)
Shape147 = x3d.Shape()
Appearance148 = x3d.Appearance()
Material149 = x3d.Material()
Material149.ambientIntensity = 0
Material149.diffuseColor = [0.784313738,0,0]
Material149.shininess = 1

Appearance148.material = Material149

Shape147.appearance = Appearance148
IndexedFaceSet150 = x3d.IndexedFaceSet()
IndexedFaceSet150.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,29,20,18,-1,21,23,29,-1,18,21,29,-1,25,23,21,-1,15,22,25,-1,21,15,25,-1,23,25,27,-1,23,27,24,-1,25,22,26,-1,25,26,27,-1,20,29,30,-1,20,30,28,-1,29,23,24,-1,29,24,30,-1,37,35,33,-1,37,33,36,-1,34,37,36,-1,34,36,31,-1,40,38,32,-1,40,32,39,-1,35,40,39,-1,35,39,33,-1,39,32,15,-1,21,33,39,-1,15,21,39,-1,36,33,21,-1,18,31,36,-1,21,18,36,-1,26,14,27,-1,24,27,14,-1,40,16,38,-1,35,16,40,-1,24,14,17,-1,28,30,17,-1,24,17,30,-1,19,35,37,-1,37,34,19,-1,16,35,19,-1]
IndexedFaceSet150.solid = False
IndexedFaceSet150.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,29,20,18,-1,21,23,29,-1,18,21,29,-1,25,23,21,-1,15,22,25,-1,21,15,25,-1,23,25,27,-1,23,27,24,-1,25,22,26,-1,25,26,27,-1,20,29,30,-1,20,30,28,-1,29,23,24,-1,29,24,30,-1,37,35,33,-1,37,33,36,-1,34,37,36,-1,34,36,31,-1,40,38,32,-1,40,32,39,-1,35,40,39,-1,35,39,33,-1,39,32,15,-1,21,33,39,-1,15,21,39,-1,36,33,21,-1,18,31,36,-1,21,18,36,-1,26,14,27,-1,24,27,14,-1,40,16,38,-1,35,16,40,-1,24,14,17,-1,28,30,17,-1,24,17,30,-1,19,35,37,-1,37,34,19,-1,16,35,19,-1]
Coordinate151 = x3d.Coordinate()

IndexedFaceSet150.coord = Coordinate151

Shape147.geometry = IndexedFaceSet150

Scene15.children.append(Shape147)
Shape152 = x3d.Shape()
Appearance153 = x3d.Appearance()
Material154 = x3d.Material()
Material154.ambientIntensity = 0
Material154.diffuseColor = [0.784313738,0,0]
Material154.shininess = 1

Appearance153.material = Material154

Shape152.appearance = Appearance153
IndexedFaceSet155 = x3d.IndexedFaceSet()
IndexedFaceSet155.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1]
IndexedFaceSet155.solid = False
IndexedFaceSet155.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1]
Coordinate156 = x3d.Coordinate()

IndexedFaceSet155.coord = Coordinate156

Shape152.geometry = IndexedFaceSet155

Scene15.children.append(Shape152)
Shape157 = x3d.Shape()
Appearance158 = x3d.Appearance()
Material159 = x3d.Material()
Material159.ambientIntensity = 0
Material159.diffuseColor = [0.784313738,0,0]
Material159.shininess = 1

Appearance158.material = Material159

Shape157.appearance = Appearance158
IndexedFaceSet160 = x3d.IndexedFaceSet()
IndexedFaceSet160.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet160.solid = False
IndexedFaceSet160.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
Coordinate161 = x3d.Coordinate()

IndexedFaceSet160.coord = Coordinate161

Shape157.geometry = IndexedFaceSet160

Scene15.children.append(Shape157)
Shape162 = x3d.Shape()
Appearance163 = x3d.Appearance()
Material164 = x3d.Material()
Material164.ambientIntensity = 0
Material164.diffuseColor = [0.784313738,0,0]
Material164.shininess = 1

Appearance163.material = Material164

Shape162.appearance = Appearance163
IndexedFaceSet165 = x3d.IndexedFaceSet()
IndexedFaceSet165.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet165.solid = False
IndexedFaceSet165.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate166 = x3d.Coordinate()

IndexedFaceSet165.coord = Coordinate166

Shape162.geometry = IndexedFaceSet165

Scene15.children.append(Shape162)
Shape167 = x3d.Shape()
Appearance168 = x3d.Appearance()
Material169 = x3d.Material()
Material169.ambientIntensity = 0
Material169.diffuseColor = [0.784313738,0,0]
Material169.shininess = 1

Appearance168.material = Material169

Shape167.appearance = Appearance168
IndexedFaceSet170 = x3d.IndexedFaceSet()
IndexedFaceSet170.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1]
IndexedFaceSet170.solid = False
IndexedFaceSet170.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1]
Coordinate171 = x3d.Coordinate()

IndexedFaceSet170.coord = Coordinate171

Shape167.geometry = IndexedFaceSet170

Scene15.children.append(Shape167)
Shape172 = x3d.Shape()
Appearance173 = x3d.Appearance()
Material174 = x3d.Material()
Material174.ambientIntensity = 0
Material174.diffuseColor = [0.784313738,0,0]
Material174.shininess = 1

Appearance173.material = Material174

Shape172.appearance = Appearance173
IndexedFaceSet175 = x3d.IndexedFaceSet()
IndexedFaceSet175.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1]
IndexedFaceSet175.solid = False
IndexedFaceSet175.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1]
Coordinate176 = x3d.Coordinate()

IndexedFaceSet175.coord = Coordinate176

Shape172.geometry = IndexedFaceSet175

Scene15.children.append(Shape172)
Shape177 = x3d.Shape()
Appearance178 = x3d.Appearance()
Material179 = x3d.Material()
Material179.ambientIntensity = 0
Material179.diffuseColor = [0.784313738,0,0]
Material179.shininess = 1

Appearance178.material = Material179

Shape177.appearance = Appearance178
IndexedFaceSet180 = x3d.IndexedFaceSet()
IndexedFaceSet180.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet180.solid = False
IndexedFaceSet180.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate181 = x3d.Coordinate()

IndexedFaceSet180.coord = Coordinate181

Shape177.geometry = IndexedFaceSet180

Scene15.children.append(Shape177)
Shape182 = x3d.Shape()
Appearance183 = x3d.Appearance()
Material184 = x3d.Material()
Material184.ambientIntensity = 0
Material184.diffuseColor = [0.784313738,0,0]
Material184.shininess = 1

Appearance183.material = Material184

Shape182.appearance = Appearance183
IndexedFaceSet185 = x3d.IndexedFaceSet()
IndexedFaceSet185.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet185.solid = False
IndexedFaceSet185.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate186 = x3d.Coordinate()

IndexedFaceSet185.coord = Coordinate186

Shape182.geometry = IndexedFaceSet185

Scene15.children.append(Shape182)
Shape187 = x3d.Shape()
Appearance188 = x3d.Appearance()
Material189 = x3d.Material()
Material189.ambientIntensity = 0
Material189.diffuseColor = [0.784313738,0,0]
Material189.shininess = 1

Appearance188.material = Material189

Shape187.appearance = Appearance188
IndexedFaceSet190 = x3d.IndexedFaceSet()
IndexedFaceSet190.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet190.solid = False
IndexedFaceSet190.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate191 = x3d.Coordinate()

IndexedFaceSet190.coord = Coordinate191

Shape187.geometry = IndexedFaceSet190

Scene15.children.append(Shape187)
Shape192 = x3d.Shape()
Appearance193 = x3d.Appearance()
Material194 = x3d.Material()
Material194.ambientIntensity = 0
Material194.diffuseColor = [0.784313738,0,0]
Material194.shininess = 1

Appearance193.material = Material194

Shape192.appearance = Appearance193
IndexedFaceSet195 = x3d.IndexedFaceSet()
IndexedFaceSet195.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet195.solid = False
IndexedFaceSet195.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate196 = x3d.Coordinate()

IndexedFaceSet195.coord = Coordinate196

Shape192.geometry = IndexedFaceSet195

Scene15.children.append(Shape192)
Shape197 = x3d.Shape()
Appearance198 = x3d.Appearance()
Material199 = x3d.Material()
Material199.ambientIntensity = 0
Material199.diffuseColor = [0.784313738,0,0]
Material199.shininess = 1

Appearance198.material = Material199

Shape197.appearance = Appearance198
IndexedFaceSet200 = x3d.IndexedFaceSet()
IndexedFaceSet200.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet200.solid = False
IndexedFaceSet200.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate201 = x3d.Coordinate()

IndexedFaceSet200.coord = Coordinate201

Shape197.geometry = IndexedFaceSet200

Scene15.children.append(Shape197)
Shape202 = x3d.Shape()
Appearance203 = x3d.Appearance()
Material204 = x3d.Material()
Material204.ambientIntensity = 0
Material204.diffuseColor = [0.784313738,0,0]
Material204.shininess = 1

Appearance203.material = Material204

Shape202.appearance = Appearance203
IndexedFaceSet205 = x3d.IndexedFaceSet()
IndexedFaceSet205.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet205.solid = False
IndexedFaceSet205.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate206 = x3d.Coordinate()

IndexedFaceSet205.coord = Coordinate206

Shape202.geometry = IndexedFaceSet205

Scene15.children.append(Shape202)
Shape207 = x3d.Shape()
Appearance208 = x3d.Appearance()
Material209 = x3d.Material()
Material209.ambientIntensity = 0
Material209.diffuseColor = [0.784313738,0,0]
Material209.shininess = 1

Appearance208.material = Material209

Shape207.appearance = Appearance208
IndexedFaceSet210 = x3d.IndexedFaceSet()
IndexedFaceSet210.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet210.solid = False
IndexedFaceSet210.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate211 = x3d.Coordinate()

IndexedFaceSet210.coord = Coordinate211

Shape207.geometry = IndexedFaceSet210

Scene15.children.append(Shape207)
Shape212 = x3d.Shape()
Appearance213 = x3d.Appearance()
Material214 = x3d.Material()
Material214.ambientIntensity = 0
Material214.diffuseColor = [0.784313738,0,0]
Material214.shininess = 1

Appearance213.material = Material214

Shape212.appearance = Appearance213
IndexedFaceSet215 = x3d.IndexedFaceSet()
IndexedFaceSet215.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet215.solid = False
IndexedFaceSet215.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate216 = x3d.Coordinate()

IndexedFaceSet215.coord = Coordinate216

Shape212.geometry = IndexedFaceSet215

Scene15.children.append(Shape212)
Shape217 = x3d.Shape()
Appearance218 = x3d.Appearance()
Material219 = x3d.Material()
Material219.ambientIntensity = 0
Material219.diffuseColor = [0.784313738,0,0]
Material219.shininess = 1

Appearance218.material = Material219

Shape217.appearance = Appearance218
IndexedFaceSet220 = x3d.IndexedFaceSet()
IndexedFaceSet220.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
IndexedFaceSet220.solid = False
IndexedFaceSet220.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
Coordinate221 = x3d.Coordinate()

IndexedFaceSet220.coord = Coordinate221

Shape217.geometry = IndexedFaceSet220

Scene15.children.append(Shape217)
Shape222 = x3d.Shape()
Appearance223 = x3d.Appearance()
Material224 = x3d.Material()
Material224.ambientIntensity = 0
Material224.diffuseColor = [0.784313738,0,0]
Material224.shininess = 1

Appearance223.material = Material224

Shape222.appearance = Appearance223
IndexedFaceSet225 = x3d.IndexedFaceSet()
IndexedFaceSet225.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
IndexedFaceSet225.solid = False
IndexedFaceSet225.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
Coordinate226 = x3d.Coordinate()

IndexedFaceSet225.coord = Coordinate226

Shape222.geometry = IndexedFaceSet225

Scene15.children.append(Shape222)
Shape227 = x3d.Shape()
Appearance228 = x3d.Appearance()
Material229 = x3d.Material()
Material229.ambientIntensity = 0
Material229.diffuseColor = [0.784313738,0,0]
Material229.shininess = 1

Appearance228.material = Material229

Shape227.appearance = Appearance228
IndexedFaceSet230 = x3d.IndexedFaceSet()
IndexedFaceSet230.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet230.solid = False
IndexedFaceSet230.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate231 = x3d.Coordinate()

IndexedFaceSet230.coord = Coordinate231

Shape227.geometry = IndexedFaceSet230

Scene15.children.append(Shape227)
Shape232 = x3d.Shape()
Appearance233 = x3d.Appearance()
Material234 = x3d.Material()
Material234.ambientIntensity = 0
Material234.diffuseColor = [0.784313738,0,0]
Material234.shininess = 1

Appearance233.material = Material234

Shape232.appearance = Appearance233
IndexedFaceSet235 = x3d.IndexedFaceSet()
IndexedFaceSet235.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet235.solid = False
IndexedFaceSet235.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate236 = x3d.Coordinate()

IndexedFaceSet235.coord = Coordinate236

Shape232.geometry = IndexedFaceSet235

Scene15.children.append(Shape232)
Shape237 = x3d.Shape()
Appearance238 = x3d.Appearance()
Material239 = x3d.Material()
Material239.ambientIntensity = 0
Material239.diffuseColor = [0.784313738,0,0]
Material239.shininess = 1

Appearance238.material = Material239

Shape237.appearance = Appearance238
IndexedFaceSet240 = x3d.IndexedFaceSet()
IndexedFaceSet240.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet240.solid = False
IndexedFaceSet240.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate241 = x3d.Coordinate()

IndexedFaceSet240.coord = Coordinate241

Shape237.geometry = IndexedFaceSet240

Scene15.children.append(Shape237)
Shape242 = x3d.Shape()
Appearance243 = x3d.Appearance()
Material244 = x3d.Material()
Material244.ambientIntensity = 0
Material244.diffuseColor = [0.784313738,0,0]
Material244.shininess = 1

Appearance243.material = Material244

Shape242.appearance = Appearance243
IndexedFaceSet245 = x3d.IndexedFaceSet()
IndexedFaceSet245.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet245.solid = False
IndexedFaceSet245.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate246 = x3d.Coordinate()

IndexedFaceSet245.coord = Coordinate246

Shape242.geometry = IndexedFaceSet245

Scene15.children.append(Shape242)
Shape247 = x3d.Shape()
Appearance248 = x3d.Appearance()
Material249 = x3d.Material()
Material249.ambientIntensity = 0
Material249.diffuseColor = [0.784313738,0,0]
Material249.shininess = 1

Appearance248.material = Material249

Shape247.appearance = Appearance248
IndexedFaceSet250 = x3d.IndexedFaceSet()
IndexedFaceSet250.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet250.solid = False
IndexedFaceSet250.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate251 = x3d.Coordinate()

IndexedFaceSet250.coord = Coordinate251

Shape247.geometry = IndexedFaceSet250

Scene15.children.append(Shape247)
Shape252 = x3d.Shape()
Appearance253 = x3d.Appearance()
Material254 = x3d.Material()
Material254.ambientIntensity = 0
Material254.diffuseColor = [0.784313738,0,0]
Material254.shininess = 1

Appearance253.material = Material254

Shape252.appearance = Appearance253
IndexedFaceSet255 = x3d.IndexedFaceSet()
IndexedFaceSet255.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet255.solid = False
IndexedFaceSet255.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate256 = x3d.Coordinate()

IndexedFaceSet255.coord = Coordinate256

Shape252.geometry = IndexedFaceSet255

Scene15.children.append(Shape252)
Shape257 = x3d.Shape()
Appearance258 = x3d.Appearance()
Material259 = x3d.Material()
Material259.ambientIntensity = 0
Material259.diffuseColor = [0.784313738,0,0]
Material259.shininess = 1

Appearance258.material = Material259

Shape257.appearance = Appearance258
IndexedFaceSet260 = x3d.IndexedFaceSet()
IndexedFaceSet260.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
IndexedFaceSet260.solid = False
IndexedFaceSet260.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
Coordinate261 = x3d.Coordinate()

IndexedFaceSet260.coord = Coordinate261

Shape257.geometry = IndexedFaceSet260

Scene15.children.append(Shape257)
Shape262 = x3d.Shape()
Appearance263 = x3d.Appearance()
Material264 = x3d.Material()
Material264.ambientIntensity = 0
Material264.diffuseColor = [0.784313738,0,0]
Material264.shininess = 1

Appearance263.material = Material264

Shape262.appearance = Appearance263
IndexedFaceSet265 = x3d.IndexedFaceSet()
IndexedFaceSet265.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
IndexedFaceSet265.solid = False
IndexedFaceSet265.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
Coordinate266 = x3d.Coordinate()

IndexedFaceSet265.coord = Coordinate266

Shape262.geometry = IndexedFaceSet265

Scene15.children.append(Shape262)
Shape267 = x3d.Shape()
Appearance268 = x3d.Appearance()
Material269 = x3d.Material()
Material269.ambientIntensity = 0
Material269.diffuseColor = [0.784313738,0,0]
Material269.shininess = 1

Appearance268.material = Material269

Shape267.appearance = Appearance268
IndexedFaceSet270 = x3d.IndexedFaceSet()
IndexedFaceSet270.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet270.solid = False
IndexedFaceSet270.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate271 = x3d.Coordinate()

IndexedFaceSet270.coord = Coordinate271

Shape267.geometry = IndexedFaceSet270

Scene15.children.append(Shape267)
Shape272 = x3d.Shape()
Appearance273 = x3d.Appearance()
Material274 = x3d.Material()
Material274.ambientIntensity = 0
Material274.diffuseColor = [0.784313738,0,0]
Material274.shininess = 1

Appearance273.material = Material274

Shape272.appearance = Appearance273
IndexedFaceSet275 = x3d.IndexedFaceSet()
IndexedFaceSet275.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1]
IndexedFaceSet275.solid = False
IndexedFaceSet275.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1]
Coordinate276 = x3d.Coordinate()

IndexedFaceSet275.coord = Coordinate276

Shape272.geometry = IndexedFaceSet275

Scene15.children.append(Shape272)
Shape277 = x3d.Shape()
Appearance278 = x3d.Appearance()
Material279 = x3d.Material()
Material279.ambientIntensity = 0
Material279.diffuseColor = [0.784313738,0,0]
Material279.shininess = 1

Appearance278.material = Material279

Shape277.appearance = Appearance278
IndexedFaceSet280 = x3d.IndexedFaceSet()
IndexedFaceSet280.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet280.solid = False
IndexedFaceSet280.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate281 = x3d.Coordinate()

IndexedFaceSet280.coord = Coordinate281

Shape277.geometry = IndexedFaceSet280

Scene15.children.append(Shape277)
Shape282 = x3d.Shape()
Appearance283 = x3d.Appearance()
Material284 = x3d.Material()
Material284.ambientIntensity = 0
Material284.diffuseColor = [0.784313738,0,0]
Material284.shininess = 1

Appearance283.material = Material284

Shape282.appearance = Appearance283
IndexedFaceSet285 = x3d.IndexedFaceSet()
IndexedFaceSet285.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet285.solid = False
IndexedFaceSet285.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate286 = x3d.Coordinate()

IndexedFaceSet285.coord = Coordinate286

Shape282.geometry = IndexedFaceSet285

Scene15.children.append(Shape282)
Shape287 = x3d.Shape()
Appearance288 = x3d.Appearance()
Material289 = x3d.Material()
Material289.ambientIntensity = 0
Material289.diffuseColor = [0.784313738,0,0]
Material289.shininess = 1

Appearance288.material = Material289

Shape287.appearance = Appearance288
IndexedFaceSet290 = x3d.IndexedFaceSet()
IndexedFaceSet290.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet290.solid = False
IndexedFaceSet290.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate291 = x3d.Coordinate()

IndexedFaceSet290.coord = Coordinate291

Shape287.geometry = IndexedFaceSet290

Scene15.children.append(Shape287)
Shape292 = x3d.Shape()
Appearance293 = x3d.Appearance()
Material294 = x3d.Material()
Material294.ambientIntensity = 0
Material294.diffuseColor = [0.784313738,0,0]
Material294.shininess = 1

Appearance293.material = Material294

Shape292.appearance = Appearance293
IndexedFaceSet295 = x3d.IndexedFaceSet()
IndexedFaceSet295.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1]
IndexedFaceSet295.solid = False
IndexedFaceSet295.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1]
Coordinate296 = x3d.Coordinate()

IndexedFaceSet295.coord = Coordinate296

Shape292.geometry = IndexedFaceSet295

Scene15.children.append(Shape292)
Shape297 = x3d.Shape()
Appearance298 = x3d.Appearance()
Material299 = x3d.Material()
Material299.ambientIntensity = 0
Material299.diffuseColor = [0.784313738,0,0]
Material299.shininess = 1

Appearance298.material = Material299

Shape297.appearance = Appearance298
IndexedFaceSet300 = x3d.IndexedFaceSet()
IndexedFaceSet300.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1]
IndexedFaceSet300.solid = False
IndexedFaceSet300.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1]
Coordinate301 = x3d.Coordinate()

IndexedFaceSet300.coord = Coordinate301

Shape297.geometry = IndexedFaceSet300

Scene15.children.append(Shape297)
Shape302 = x3d.Shape()
Appearance303 = x3d.Appearance()
Material304 = x3d.Material()
Material304.ambientIntensity = 0
Material304.diffuseColor = [0.784313738,0,0]
Material304.shininess = 1

Appearance303.material = Material304

Shape302.appearance = Appearance303
IndexedFaceSet305 = x3d.IndexedFaceSet()
IndexedFaceSet305.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet305.solid = False
IndexedFaceSet305.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate306 = x3d.Coordinate()

IndexedFaceSet305.coord = Coordinate306

Shape302.geometry = IndexedFaceSet305

Scene15.children.append(Shape302)
Shape307 = x3d.Shape()
Appearance308 = x3d.Appearance()
Material309 = x3d.Material()
Material309.ambientIntensity = 0
Material309.diffuseColor = [0.784313738,0,0]
Material309.shininess = 1

Appearance308.material = Material309

Shape307.appearance = Appearance308
IndexedFaceSet310 = x3d.IndexedFaceSet()
IndexedFaceSet310.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet310.solid = False
IndexedFaceSet310.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate311 = x3d.Coordinate()

IndexedFaceSet310.coord = Coordinate311

Shape307.geometry = IndexedFaceSet310

Scene15.children.append(Shape307)
Shape312 = x3d.Shape()
Appearance313 = x3d.Appearance()
Material314 = x3d.Material()
Material314.ambientIntensity = 0
Material314.diffuseColor = [0.784313738,0,0]
Material314.shininess = 1

Appearance313.material = Material314

Shape312.appearance = Appearance313
IndexedFaceSet315 = x3d.IndexedFaceSet()
IndexedFaceSet315.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1]
IndexedFaceSet315.solid = False
IndexedFaceSet315.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1]
Coordinate316 = x3d.Coordinate()

IndexedFaceSet315.coord = Coordinate316

Shape312.geometry = IndexedFaceSet315

Scene15.children.append(Shape312)
Shape317 = x3d.Shape()
Appearance318 = x3d.Appearance()
Material319 = x3d.Material()
Material319.ambientIntensity = 0
Material319.diffuseColor = [0.784313738,0,0]
Material319.shininess = 1

Appearance318.material = Material319

Shape317.appearance = Appearance318
IndexedFaceSet320 = x3d.IndexedFaceSet()
IndexedFaceSet320.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1]
IndexedFaceSet320.solid = False
IndexedFaceSet320.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1]
Coordinate321 = x3d.Coordinate()

IndexedFaceSet320.coord = Coordinate321

Shape317.geometry = IndexedFaceSet320

Scene15.children.append(Shape317)
Shape322 = x3d.Shape()
Appearance323 = x3d.Appearance()
Material324 = x3d.Material()
Material324.ambientIntensity = 0
Material324.diffuseColor = [0.784313738,0,0]
Material324.shininess = 1

Appearance323.material = Material324

Shape322.appearance = Appearance323
IndexedFaceSet325 = x3d.IndexedFaceSet()
IndexedFaceSet325.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet325.solid = False
IndexedFaceSet325.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate326 = x3d.Coordinate()

IndexedFaceSet325.coord = Coordinate326

Shape322.geometry = IndexedFaceSet325

Scene15.children.append(Shape322)
Shape327 = x3d.Shape()
Appearance328 = x3d.Appearance()
Material329 = x3d.Material()
Material329.ambientIntensity = 0
Material329.diffuseColor = [0.784313738,0,0]
Material329.shininess = 1

Appearance328.material = Material329

Shape327.appearance = Appearance328
IndexedFaceSet330 = x3d.IndexedFaceSet()
IndexedFaceSet330.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet330.solid = False
IndexedFaceSet330.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate331 = x3d.Coordinate()

IndexedFaceSet330.coord = Coordinate331

Shape327.geometry = IndexedFaceSet330

Scene15.children.append(Shape327)
Shape332 = x3d.Shape()
Appearance333 = x3d.Appearance()
Material334 = x3d.Material()
Material334.ambientIntensity = 0
Material334.diffuseColor = [0.784313738,0,0]
Material334.shininess = 1

Appearance333.material = Material334

Shape332.appearance = Appearance333
IndexedFaceSet335 = x3d.IndexedFaceSet()
IndexedFaceSet335.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1]
IndexedFaceSet335.solid = False
IndexedFaceSet335.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1]
Coordinate336 = x3d.Coordinate()

IndexedFaceSet335.coord = Coordinate336

Shape332.geometry = IndexedFaceSet335

Scene15.children.append(Shape332)
Shape337 = x3d.Shape()
Appearance338 = x3d.Appearance()
Material339 = x3d.Material()
Material339.ambientIntensity = 0
Material339.diffuseColor = [0.784313738,0,0]
Material339.shininess = 1

Appearance338.material = Material339

Shape337.appearance = Appearance338
IndexedFaceSet340 = x3d.IndexedFaceSet()
IndexedFaceSet340.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1]
IndexedFaceSet340.solid = False
IndexedFaceSet340.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1]
Coordinate341 = x3d.Coordinate()

IndexedFaceSet340.coord = Coordinate341

Shape337.geometry = IndexedFaceSet340

Scene15.children.append(Shape337)
Shape342 = x3d.Shape()
Appearance343 = x3d.Appearance()
Material344 = x3d.Material()
Material344.ambientIntensity = 0
Material344.diffuseColor = [0.784313738,0,0]
Material344.shininess = 1

Appearance343.material = Material344

Shape342.appearance = Appearance343
IndexedFaceSet345 = x3d.IndexedFaceSet()
IndexedFaceSet345.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet345.solid = False
IndexedFaceSet345.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate346 = x3d.Coordinate()

IndexedFaceSet345.coord = Coordinate346

Shape342.geometry = IndexedFaceSet345

Scene15.children.append(Shape342)
Shape347 = x3d.Shape()
Appearance348 = x3d.Appearance()
Material349 = x3d.Material()
Material349.ambientIntensity = 0
Material349.diffuseColor = [0.784313738,0,0]
Material349.shininess = 1

Appearance348.material = Material349

Shape347.appearance = Appearance348
IndexedFaceSet350 = x3d.IndexedFaceSet()
IndexedFaceSet350.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet350.solid = False
IndexedFaceSet350.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate351 = x3d.Coordinate()

IndexedFaceSet350.coord = Coordinate351

Shape347.geometry = IndexedFaceSet350

Scene15.children.append(Shape347)
Shape352 = x3d.Shape()
Appearance353 = x3d.Appearance()
Material354 = x3d.Material()
Material354.ambientIntensity = 0
Material354.diffuseColor = [0.784313738,0,0]
Material354.shininess = 1

Appearance353.material = Material354

Shape352.appearance = Appearance353
IndexedFaceSet355 = x3d.IndexedFaceSet()
IndexedFaceSet355.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet355.solid = False
IndexedFaceSet355.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate356 = x3d.Coordinate()

IndexedFaceSet355.coord = Coordinate356

Shape352.geometry = IndexedFaceSet355

Scene15.children.append(Shape352)
Shape357 = x3d.Shape()
Appearance358 = x3d.Appearance()
Material359 = x3d.Material()
Material359.ambientIntensity = 0
Material359.diffuseColor = [0.784313738,0,0]
Material359.shininess = 1

Appearance358.material = Material359

Shape357.appearance = Appearance358
IndexedFaceSet360 = x3d.IndexedFaceSet()
IndexedFaceSet360.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1]
IndexedFaceSet360.solid = False
IndexedFaceSet360.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1]
Coordinate361 = x3d.Coordinate()

IndexedFaceSet360.coord = Coordinate361

Shape357.geometry = IndexedFaceSet360

Scene15.children.append(Shape357)
Shape362 = x3d.Shape()
Appearance363 = x3d.Appearance()
Material364 = x3d.Material()
Material364.ambientIntensity = 0
Material364.diffuseColor = [0.784313738,0,0]
Material364.shininess = 1

Appearance363.material = Material364

Shape362.appearance = Appearance363
IndexedFaceSet365 = x3d.IndexedFaceSet()
IndexedFaceSet365.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1]
IndexedFaceSet365.solid = False
IndexedFaceSet365.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1]
Coordinate366 = x3d.Coordinate()

IndexedFaceSet365.coord = Coordinate366

Shape362.geometry = IndexedFaceSet365

Scene15.children.append(Shape362)
Shape367 = x3d.Shape()
Appearance368 = x3d.Appearance()
Material369 = x3d.Material()
Material369.ambientIntensity = 0
Material369.diffuseColor = [0.784313738,0,0]
Material369.shininess = 1

Appearance368.material = Material369

Shape367.appearance = Appearance368
IndexedFaceSet370 = x3d.IndexedFaceSet()
IndexedFaceSet370.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet370.solid = False
IndexedFaceSet370.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
Coordinate371 = x3d.Coordinate()

IndexedFaceSet370.coord = Coordinate371

Shape367.geometry = IndexedFaceSet370

Scene15.children.append(Shape367)
Shape372 = x3d.Shape()
Appearance373 = x3d.Appearance()
Material374 = x3d.Material()
Material374.ambientIntensity = 0
Material374.diffuseColor = [0.784313738,0,0]
Material374.shininess = 1

Appearance373.material = Material374

Shape372.appearance = Appearance373
IndexedFaceSet375 = x3d.IndexedFaceSet()
IndexedFaceSet375.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet375.solid = False
IndexedFaceSet375.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
Coordinate376 = x3d.Coordinate()

IndexedFaceSet375.coord = Coordinate376

Shape372.geometry = IndexedFaceSet375

Scene15.children.append(Shape372)
Shape377 = x3d.Shape()
Appearance378 = x3d.Appearance()
Material379 = x3d.Material()
Material379.ambientIntensity = 0
Material379.diffuseColor = [0.784313738,0,0]
Material379.shininess = 1

Appearance378.material = Material379

Shape377.appearance = Appearance378
IndexedFaceSet380 = x3d.IndexedFaceSet()
IndexedFaceSet380.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1]
IndexedFaceSet380.solid = False
IndexedFaceSet380.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1]
Coordinate381 = x3d.Coordinate()

IndexedFaceSet380.coord = Coordinate381

Shape377.geometry = IndexedFaceSet380

Scene15.children.append(Shape377)
Shape382 = x3d.Shape()
Appearance383 = x3d.Appearance()
Material384 = x3d.Material()
Material384.ambientIntensity = 0
Material384.diffuseColor = [0.784313738,0,0]
Material384.shininess = 1

Appearance383.material = Material384

Shape382.appearance = Appearance383
IndexedFaceSet385 = x3d.IndexedFaceSet()
IndexedFaceSet385.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1]
IndexedFaceSet385.solid = False
IndexedFaceSet385.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1]
Coordinate386 = x3d.Coordinate()

IndexedFaceSet385.coord = Coordinate386

Shape382.geometry = IndexedFaceSet385

Scene15.children.append(Shape382)
Shape387 = x3d.Shape()
Appearance388 = x3d.Appearance()
Material389 = x3d.Material()
Material389.ambientIntensity = 0
Material389.diffuseColor = [0.784313738,0,0]
Material389.shininess = 1

Appearance388.material = Material389

Shape387.appearance = Appearance388
IndexedFaceSet390 = x3d.IndexedFaceSet()
IndexedFaceSet390.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet390.solid = False
IndexedFaceSet390.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
Coordinate391 = x3d.Coordinate()

IndexedFaceSet390.coord = Coordinate391

Shape387.geometry = IndexedFaceSet390

Scene15.children.append(Shape387)
Shape392 = x3d.Shape()
Appearance393 = x3d.Appearance()
Material394 = x3d.Material()
Material394.ambientIntensity = 0
Material394.diffuseColor = [0.784313738,0,0]
Material394.shininess = 1

Appearance393.material = Material394

Shape392.appearance = Appearance393
IndexedFaceSet395 = x3d.IndexedFaceSet()
IndexedFaceSet395.coordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet395.solid = False
IndexedFaceSet395.texCoordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
Coordinate396 = x3d.Coordinate()

IndexedFaceSet395.coord = Coordinate396

Shape392.geometry = IndexedFaceSet395

Scene15.children.append(Shape392)
Shape397 = x3d.Shape()
Appearance398 = x3d.Appearance()
Material399 = x3d.Material()
Material399.ambientIntensity = 0
Material399.diffuseColor = [0.784313738,0,0]
Material399.shininess = 1

Appearance398.material = Material399

Shape397.appearance = Appearance398
IndexedFaceSet400 = x3d.IndexedFaceSet()
IndexedFaceSet400.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet400.solid = False
IndexedFaceSet400.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate401 = x3d.Coordinate()

IndexedFaceSet400.coord = Coordinate401

Shape397.geometry = IndexedFaceSet400

Scene15.children.append(Shape397)
Shape402 = x3d.Shape()
Appearance403 = x3d.Appearance()
Material404 = x3d.Material()
Material404.ambientIntensity = 0
Material404.diffuseColor = [0.784313738,0,0]
Material404.shininess = 1

Appearance403.material = Material404

Shape402.appearance = Appearance403
IndexedFaceSet405 = x3d.IndexedFaceSet()
IndexedFaceSet405.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,29,20,18,-1,21,23,29,-1,18,21,29,-1,25,23,21,-1,15,22,25,-1,21,15,25,-1,23,25,27,-1,23,27,24,-1,25,22,26,-1,25,26,27,-1,20,29,30,-1,20,30,28,-1,29,23,24,-1,29,24,30,-1,37,35,33,-1,37,33,36,-1,34,37,36,-1,34,36,31,-1,40,38,32,-1,40,32,39,-1,35,40,39,-1,35,39,33,-1,39,32,15,-1,21,33,39,-1,15,21,39,-1,36,33,21,-1,18,31,36,-1,21,18,36,-1,26,14,27,-1,24,27,14,-1,40,16,38,-1,35,16,40,-1,24,14,17,-1,28,30,17,-1,24,17,30,-1,19,35,37,-1,37,34,19,-1,16,35,19,-1]
IndexedFaceSet405.solid = False
IndexedFaceSet405.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,29,20,18,-1,21,23,29,-1,18,21,29,-1,25,23,21,-1,15,22,25,-1,21,15,25,-1,23,25,27,-1,23,27,24,-1,25,22,26,-1,25,26,27,-1,20,29,30,-1,20,30,28,-1,29,23,24,-1,29,24,30,-1,37,35,33,-1,37,33,36,-1,34,37,36,-1,34,36,31,-1,40,38,32,-1,40,32,39,-1,35,40,39,-1,35,39,33,-1,39,32,15,-1,21,33,39,-1,15,21,39,-1,36,33,21,-1,18,31,36,-1,21,18,36,-1,26,14,27,-1,24,27,14,-1,40,16,38,-1,35,16,40,-1,24,14,17,-1,28,30,17,-1,24,17,30,-1,19,35,37,-1,37,34,19,-1,16,35,19,-1]
Coordinate406 = x3d.Coordinate()

IndexedFaceSet405.coord = Coordinate406

Shape402.geometry = IndexedFaceSet405

Scene15.children.append(Shape402)
Shape407 = x3d.Shape()
Appearance408 = x3d.Appearance()
Material409 = x3d.Material()
Material409.ambientIntensity = 0
Material409.diffuseColor = [0.784313738,0,0]
Material409.shininess = 1

Appearance408.material = Material409

Shape407.appearance = Appearance408
IndexedFaceSet410 = x3d.IndexedFaceSet()
IndexedFaceSet410.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet410.solid = False
IndexedFaceSet410.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
Coordinate411 = x3d.Coordinate()

IndexedFaceSet410.coord = Coordinate411

Shape407.geometry = IndexedFaceSet410

Scene15.children.append(Shape407)
Shape412 = x3d.Shape()
Appearance413 = x3d.Appearance()
Material414 = x3d.Material()
Material414.ambientIntensity = 0
Material414.diffuseColor = [0.784313738,0,0]
Material414.shininess = 1

Appearance413.material = Material414

Shape412.appearance = Appearance413
IndexedFaceSet415 = x3d.IndexedFaceSet()
IndexedFaceSet415.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
IndexedFaceSet415.solid = False
IndexedFaceSet415.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
Coordinate416 = x3d.Coordinate()

IndexedFaceSet415.coord = Coordinate416

Shape412.geometry = IndexedFaceSet415

Scene15.children.append(Shape412)
Shape417 = x3d.Shape()
Appearance418 = x3d.Appearance()
Material419 = x3d.Material()
Material419.ambientIntensity = 0
Material419.diffuseColor = [0.784313738,0,0]
Material419.shininess = 1

Appearance418.material = Material419

Shape417.appearance = Appearance418
IndexedFaceSet420 = x3d.IndexedFaceSet()
IndexedFaceSet420.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,29,20,18,-1,21,23,29,-1,18,21,29,-1,25,23,21,-1,15,22,25,-1,21,15,25,-1,23,25,27,-1,23,27,24,-1,25,22,26,-1,25,26,27,-1,20,29,30,-1,20,30,28,-1,29,23,24,-1,29,24,30,-1,37,35,33,-1,37,33,36,-1,34,37,36,-1,34,36,31,-1,40,38,32,-1,40,32,39,-1,35,40,39,-1,35,39,33,-1,39,32,15,-1,21,33,39,-1,15,21,39,-1,36,33,21,-1,18,31,36,-1,21,18,36,-1,26,14,27,-1,24,27,14,-1,40,16,38,-1,35,16,40,-1,24,14,17,-1,28,30,17,-1,24,17,30,-1,19,35,37,-1,37,34,19,-1,16,35,19,-1]
IndexedFaceSet420.solid = False
IndexedFaceSet420.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,29,20,18,-1,21,23,29,-1,18,21,29,-1,25,23,21,-1,15,22,25,-1,21,15,25,-1,23,25,27,-1,23,27,24,-1,25,22,26,-1,25,26,27,-1,20,29,30,-1,20,30,28,-1,29,23,24,-1,29,24,30,-1,37,35,33,-1,37,33,36,-1,34,37,36,-1,34,36,31,-1,40,38,32,-1,40,32,39,-1,35,40,39,-1,35,39,33,-1,39,32,15,-1,21,33,39,-1,15,21,39,-1,36,33,21,-1,18,31,36,-1,21,18,36,-1,26,14,27,-1,24,27,14,-1,40,16,38,-1,35,16,40,-1,24,14,17,-1,28,30,17,-1,24,17,30,-1,19,35,37,-1,37,34,19,-1,16,35,19,-1]
Coordinate421 = x3d.Coordinate()

IndexedFaceSet420.coord = Coordinate421

Shape417.geometry = IndexedFaceSet420

Scene15.children.append(Shape417)
Shape422 = x3d.Shape()
Appearance423 = x3d.Appearance()
Material424 = x3d.Material()
Material424.ambientIntensity = 0
Material424.diffuseColor = [0.784313738,0,0]
Material424.shininess = 1

Appearance423.material = Material424

Shape422.appearance = Appearance423
IndexedFaceSet425 = x3d.IndexedFaceSet()
IndexedFaceSet425.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet425.solid = False
IndexedFaceSet425.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
Coordinate426 = x3d.Coordinate()

IndexedFaceSet425.coord = Coordinate426

Shape422.geometry = IndexedFaceSet425

Scene15.children.append(Shape422)
Shape427 = x3d.Shape()
Appearance428 = x3d.Appearance()
Material429 = x3d.Material()
Material429.ambientIntensity = 0
Material429.diffuseColor = [0.784313738,0,0]
Material429.shininess = 1

Appearance428.material = Material429

Shape427.appearance = Appearance428
IndexedFaceSet430 = x3d.IndexedFaceSet()
IndexedFaceSet430.coordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet430.solid = False
IndexedFaceSet430.texCoordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
Coordinate431 = x3d.Coordinate()

IndexedFaceSet430.coord = Coordinate431

Shape427.geometry = IndexedFaceSet430

Scene15.children.append(Shape427)
Shape432 = x3d.Shape()
Appearance433 = x3d.Appearance()
Material434 = x3d.Material()
Material434.ambientIntensity = 0
Material434.diffuseColor = [0.784313738,0,0]
Material434.shininess = 1

Appearance433.material = Material434

Shape432.appearance = Appearance433
IndexedFaceSet435 = x3d.IndexedFaceSet()
IndexedFaceSet435.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,29,20,18,-1,21,23,29,-1,18,21,29,-1,25,23,21,-1,15,22,25,-1,21,15,25,-1,23,25,27,-1,23,27,24,-1,25,22,26,-1,25,26,27,-1,20,29,30,-1,20,30,28,-1,29,23,24,-1,29,24,30,-1,37,35,33,-1,37,33,36,-1,34,37,36,-1,34,36,31,-1,40,38,32,-1,40,32,39,-1,35,40,39,-1,35,39,33,-1,39,32,15,-1,21,33,39,-1,15,21,39,-1,36,33,21,-1,18,31,36,-1,21,18,36,-1,26,14,27,-1,24,27,14,-1,40,16,38,-1,35,16,40,-1,24,14,17,-1,28,30,17,-1,24,17,30,-1,19,35,37,-1,37,34,19,-1,16,35,19,-1]
IndexedFaceSet435.solid = False
IndexedFaceSet435.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,29,20,18,-1,21,23,29,-1,18,21,29,-1,25,23,21,-1,15,22,25,-1,21,15,25,-1,23,25,27,-1,23,27,24,-1,25,22,26,-1,25,26,27,-1,20,29,30,-1,20,30,28,-1,29,23,24,-1,29,24,30,-1,37,35,33,-1,37,33,36,-1,34,37,36,-1,34,36,31,-1,40,38,32,-1,40,32,39,-1,35,40,39,-1,35,39,33,-1,39,32,15,-1,21,33,39,-1,15,21,39,-1,36,33,21,-1,18,31,36,-1,21,18,36,-1,26,14,27,-1,24,27,14,-1,40,16,38,-1,35,16,40,-1,24,14,17,-1,28,30,17,-1,24,17,30,-1,19,35,37,-1,37,34,19,-1,16,35,19,-1]
Coordinate436 = x3d.Coordinate()

IndexedFaceSet435.coord = Coordinate436

Shape432.geometry = IndexedFaceSet435

Scene15.children.append(Shape432)
Shape437 = x3d.Shape()
Appearance438 = x3d.Appearance()
Material439 = x3d.Material()
Material439.ambientIntensity = 0
Material439.diffuseColor = [0.784313738,0,0]
Material439.shininess = 1

Appearance438.material = Material439

Shape437.appearance = Appearance438
IndexedFaceSet440 = x3d.IndexedFaceSet()
IndexedFaceSet440.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1]
IndexedFaceSet440.solid = False
IndexedFaceSet440.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1]
Coordinate441 = x3d.Coordinate()

IndexedFaceSet440.coord = Coordinate441

Shape437.geometry = IndexedFaceSet440

Scene15.children.append(Shape437)
Shape442 = x3d.Shape()
Appearance443 = x3d.Appearance()
Material444 = x3d.Material()
Material444.ambientIntensity = 0
Material444.diffuseColor = [0.784313738,0,0]
Material444.shininess = 1

Appearance443.material = Material444

Shape442.appearance = Appearance443
IndexedFaceSet445 = x3d.IndexedFaceSet()
IndexedFaceSet445.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet445.solid = False
IndexedFaceSet445.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
Coordinate446 = x3d.Coordinate()

IndexedFaceSet445.coord = Coordinate446

Shape442.geometry = IndexedFaceSet445

Scene15.children.append(Shape442)
Shape447 = x3d.Shape()
Appearance448 = x3d.Appearance()
Material449 = x3d.Material()
Material449.ambientIntensity = 0
Material449.diffuseColor = [0.784313738,0,0]
Material449.shininess = 1

Appearance448.material = Material449

Shape447.appearance = Appearance448
IndexedFaceSet450 = x3d.IndexedFaceSet()
IndexedFaceSet450.coordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet450.solid = False
IndexedFaceSet450.texCoordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
Coordinate451 = x3d.Coordinate()

IndexedFaceSet450.coord = Coordinate451

Shape447.geometry = IndexedFaceSet450

Scene15.children.append(Shape447)
Shape452 = x3d.Shape()
Appearance453 = x3d.Appearance()
Material454 = x3d.Material()
Material454.ambientIntensity = 0
Material454.diffuseColor = [0.784313738,0,0]
Material454.shininess = 1

Appearance453.material = Material454

Shape452.appearance = Appearance453
IndexedFaceSet455 = x3d.IndexedFaceSet()
IndexedFaceSet455.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1]
IndexedFaceSet455.solid = False
IndexedFaceSet455.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1]
Coordinate456 = x3d.Coordinate()

IndexedFaceSet455.coord = Coordinate456

Shape452.geometry = IndexedFaceSet455

Scene15.children.append(Shape452)
Shape457 = x3d.Shape()
Appearance458 = x3d.Appearance()
Material459 = x3d.Material()
Material459.ambientIntensity = 0
Material459.diffuseColor = [0.784313738,0,0]
Material459.shininess = 1

Appearance458.material = Material459

Shape457.appearance = Appearance458
IndexedFaceSet460 = x3d.IndexedFaceSet()
IndexedFaceSet460.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,34,-1,32,34,35,-1,33,32,35,-1,33,35,36,-1,38,37,39,-1,38,39,40,-1]
IndexedFaceSet460.solid = False
IndexedFaceSet460.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,34,-1,32,34,35,-1,33,32,35,-1,33,35,36,-1,38,37,39,-1,38,39,40,-1]
Coordinate461 = x3d.Coordinate()

IndexedFaceSet460.coord = Coordinate461

Shape457.geometry = IndexedFaceSet460

Scene15.children.append(Shape457)
Shape462 = x3d.Shape()
Appearance463 = x3d.Appearance()
Material464 = x3d.Material()
Material464.ambientIntensity = 0
Material464.diffuseColor = [0.784313738,0,0]
Material464.shininess = 1

Appearance463.material = Material464

Shape462.appearance = Appearance463
IndexedFaceSet465 = x3d.IndexedFaceSet()
IndexedFaceSet465.coordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
IndexedFaceSet465.solid = False
IndexedFaceSet465.texCoordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
Coordinate466 = x3d.Coordinate()

IndexedFaceSet465.coord = Coordinate466

Shape462.geometry = IndexedFaceSet465

Scene15.children.append(Shape462)
Shape467 = x3d.Shape()
Appearance468 = x3d.Appearance()
Material469 = x3d.Material()
Material469.ambientIntensity = 0
Material469.diffuseColor = [0.784313738,0,0]
Material469.shininess = 1

Appearance468.material = Material469

Shape467.appearance = Appearance468
IndexedFaceSet470 = x3d.IndexedFaceSet()
IndexedFaceSet470.coordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
IndexedFaceSet470.solid = False
IndexedFaceSet470.texCoordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
Coordinate471 = x3d.Coordinate()

IndexedFaceSet470.coord = Coordinate471

Shape467.geometry = IndexedFaceSet470

Scene15.children.append(Shape467)
Shape472 = x3d.Shape()
Appearance473 = x3d.Appearance()
Material474 = x3d.Material()
Material474.ambientIntensity = 0
Material474.diffuseColor = [0.784313738,0,0]
Material474.shininess = 1

Appearance473.material = Material474

Shape472.appearance = Appearance473
IndexedFaceSet475 = x3d.IndexedFaceSet()
IndexedFaceSet475.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,35,-1,34,35,36,-1,38,37,39,-1,38,39,40,-1]
IndexedFaceSet475.solid = False
IndexedFaceSet475.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,35,-1,34,35,36,-1,38,37,39,-1,38,39,40,-1]
Coordinate476 = x3d.Coordinate()

IndexedFaceSet475.coord = Coordinate476

Shape472.geometry = IndexedFaceSet475

Scene15.children.append(Shape472)
Shape477 = x3d.Shape()
Appearance478 = x3d.Appearance()
Material479 = x3d.Material()
Material479.ambientIntensity = 0
Material479.diffuseColor = [0.784313738,0,0]
Material479.shininess = 1

Appearance478.material = Material479

Shape477.appearance = Appearance478
IndexedFaceSet480 = x3d.IndexedFaceSet()
IndexedFaceSet480.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,29,20,18,-1,21,23,29,-1,18,21,29,-1,25,23,21,-1,15,22,25,-1,21,15,25,-1,23,25,27,-1,23,27,24,-1,25,22,26,-1,25,26,27,-1,20,29,30,-1,20,30,28,-1,29,23,24,-1,29,24,30,-1,37,35,33,-1,37,33,36,-1,34,37,36,-1,34,36,31,-1,40,38,32,-1,40,32,39,-1,35,40,39,-1,35,39,33,-1,39,32,15,-1,21,33,39,-1,15,21,39,-1,36,33,21,-1,18,31,36,-1,21,18,36,-1,26,14,27,-1,24,27,14,-1,40,16,38,-1,35,16,40,-1,24,14,17,-1,28,30,17,-1,24,17,30,-1,19,35,37,-1,37,34,19,-1,16,35,19,-1]
IndexedFaceSet480.solid = False
IndexedFaceSet480.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,29,20,18,-1,21,23,29,-1,18,21,29,-1,25,23,21,-1,15,22,25,-1,21,15,25,-1,23,25,27,-1,23,27,24,-1,25,22,26,-1,25,26,27,-1,20,29,30,-1,20,30,28,-1,29,23,24,-1,29,24,30,-1,37,35,33,-1,37,33,36,-1,34,37,36,-1,34,36,31,-1,40,38,32,-1,40,32,39,-1,35,40,39,-1,35,39,33,-1,39,32,15,-1,21,33,39,-1,15,21,39,-1,36,33,21,-1,18,31,36,-1,21,18,36,-1,26,14,27,-1,24,27,14,-1,40,16,38,-1,35,16,40,-1,24,14,17,-1,28,30,17,-1,24,17,30,-1,19,35,37,-1,37,34,19,-1,16,35,19,-1]
Coordinate481 = x3d.Coordinate()

IndexedFaceSet480.coord = Coordinate481

Shape477.geometry = IndexedFaceSet480

Scene15.children.append(Shape477)
Shape482 = x3d.Shape()
Appearance483 = x3d.Appearance()
Material484 = x3d.Material()
Material484.ambientIntensity = 0
Material484.diffuseColor = [0.784313738,0,0]
Material484.shininess = 1

Appearance483.material = Material484

Shape482.appearance = Appearance483
IndexedFaceSet485 = x3d.IndexedFaceSet()
IndexedFaceSet485.coordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
IndexedFaceSet485.solid = False
IndexedFaceSet485.texCoordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
Coordinate486 = x3d.Coordinate()

IndexedFaceSet485.coord = Coordinate486

Shape482.geometry = IndexedFaceSet485

Scene15.children.append(Shape482)
Shape487 = x3d.Shape()
Appearance488 = x3d.Appearance()
Material489 = x3d.Material()
Material489.ambientIntensity = 0
Material489.diffuseColor = [0.784313738,0,0]
Material489.shininess = 1

Appearance488.material = Material489

Shape487.appearance = Appearance488
IndexedFaceSet490 = x3d.IndexedFaceSet()
IndexedFaceSet490.coordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
IndexedFaceSet490.solid = False
IndexedFaceSet490.texCoordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
Coordinate491 = x3d.Coordinate()

IndexedFaceSet490.coord = Coordinate491

Shape487.geometry = IndexedFaceSet490

Scene15.children.append(Shape487)
Shape492 = x3d.Shape()
Appearance493 = x3d.Appearance()
Material494 = x3d.Material()
Material494.ambientIntensity = 0
Material494.diffuseColor = [0.784313738,0,0]
Material494.shininess = 1

Appearance493.material = Material494

Shape492.appearance = Appearance493
IndexedFaceSet495 = x3d.IndexedFaceSet()
IndexedFaceSet495.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,34,-1,32,34,35,-1,33,32,35,-1,33,35,36,-1,38,37,39,-1,38,39,40,-1]
IndexedFaceSet495.solid = False
IndexedFaceSet495.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,34,-1,32,34,35,-1,33,32,35,-1,33,35,36,-1,38,37,39,-1,38,39,40,-1]
Coordinate496 = x3d.Coordinate()

IndexedFaceSet495.coord = Coordinate496

Shape492.geometry = IndexedFaceSet495

Scene15.children.append(Shape492)
Shape497 = x3d.Shape()
Appearance498 = x3d.Appearance()
Material499 = x3d.Material()
Material499.ambientIntensity = 0
Material499.diffuseColor = [0.784313738,0,0]
Material499.shininess = 1

Appearance498.material = Material499

Shape497.appearance = Appearance498
IndexedFaceSet500 = x3d.IndexedFaceSet()
IndexedFaceSet500.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
IndexedFaceSet500.solid = False
IndexedFaceSet500.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
Coordinate501 = x3d.Coordinate()

IndexedFaceSet500.coord = Coordinate501

Shape497.geometry = IndexedFaceSet500

Scene15.children.append(Shape497)
Shape502 = x3d.Shape()
Appearance503 = x3d.Appearance()
Material504 = x3d.Material()
Material504.ambientIntensity = 0
Material504.diffuseColor = [0.784313738,0,0]
Material504.shininess = 1

Appearance503.material = Material504

Shape502.appearance = Appearance503
IndexedFaceSet505 = x3d.IndexedFaceSet()
IndexedFaceSet505.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet505.solid = False
IndexedFaceSet505.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
Coordinate506 = x3d.Coordinate()

IndexedFaceSet505.coord = Coordinate506

Shape502.geometry = IndexedFaceSet505

Scene15.children.append(Shape502)
Shape507 = x3d.Shape()
Appearance508 = x3d.Appearance()
Material509 = x3d.Material()
Material509.ambientIntensity = 0
Material509.diffuseColor = [0.784313738,0,0]
Material509.shininess = 1

Appearance508.material = Material509

Shape507.appearance = Appearance508
IndexedFaceSet510 = x3d.IndexedFaceSet()
IndexedFaceSet510.coordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet510.solid = False
IndexedFaceSet510.texCoordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
Coordinate511 = x3d.Coordinate()

IndexedFaceSet510.coord = Coordinate511

Shape507.geometry = IndexedFaceSet510

Scene15.children.append(Shape507)
Shape512 = x3d.Shape()
Appearance513 = x3d.Appearance()
Material514 = x3d.Material()
Material514.ambientIntensity = 0
Material514.diffuseColor = [0.784313738,0,0]
Material514.shininess = 1

Appearance513.material = Material514

Shape512.appearance = Appearance513
IndexedFaceSet515 = x3d.IndexedFaceSet()
IndexedFaceSet515.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1]
IndexedFaceSet515.solid = False
IndexedFaceSet515.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1]
Coordinate516 = x3d.Coordinate()

IndexedFaceSet515.coord = Coordinate516

Shape512.geometry = IndexedFaceSet515

Scene15.children.append(Shape512)
Shape517 = x3d.Shape()
Appearance518 = x3d.Appearance()
Material519 = x3d.Material()
Material519.ambientIntensity = 0
Material519.diffuseColor = [0.784313738,0,0]
Material519.shininess = 1

Appearance518.material = Material519

Shape517.appearance = Appearance518
IndexedFaceSet520 = x3d.IndexedFaceSet()
IndexedFaceSet520.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1]
IndexedFaceSet520.solid = False
IndexedFaceSet520.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1]
Coordinate521 = x3d.Coordinate()

IndexedFaceSet520.coord = Coordinate521

Shape517.geometry = IndexedFaceSet520

Scene15.children.append(Shape517)
Shape522 = x3d.Shape()
Appearance523 = x3d.Appearance()
Material524 = x3d.Material()
Material524.ambientIntensity = 0
Material524.diffuseColor = [0.784313738,0,0]
Material524.shininess = 1

Appearance523.material = Material524

Shape522.appearance = Appearance523
IndexedFaceSet525 = x3d.IndexedFaceSet()
IndexedFaceSet525.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet525.solid = False
IndexedFaceSet525.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
Coordinate526 = x3d.Coordinate()

IndexedFaceSet525.coord = Coordinate526

Shape522.geometry = IndexedFaceSet525

Scene15.children.append(Shape522)
Shape527 = x3d.Shape()
Appearance528 = x3d.Appearance()
Material529 = x3d.Material()
Material529.ambientIntensity = 0
Material529.diffuseColor = [0.784313738,0,0]
Material529.shininess = 1

Appearance528.material = Material529

Shape527.appearance = Appearance528
IndexedFaceSet530 = x3d.IndexedFaceSet()
IndexedFaceSet530.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet530.solid = False
IndexedFaceSet530.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
Coordinate531 = x3d.Coordinate()

IndexedFaceSet530.coord = Coordinate531

Shape527.geometry = IndexedFaceSet530

Scene15.children.append(Shape527)
Shape532 = x3d.Shape()
Appearance533 = x3d.Appearance()
Material534 = x3d.Material()
Material534.ambientIntensity = 0
Material534.diffuseColor = [0.784313738,0,0]
Material534.shininess = 1

Appearance533.material = Material534

Shape532.appearance = Appearance533
IndexedFaceSet535 = x3d.IndexedFaceSet()
IndexedFaceSet535.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1]
IndexedFaceSet535.solid = False
IndexedFaceSet535.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1]
Coordinate536 = x3d.Coordinate()

IndexedFaceSet535.coord = Coordinate536

Shape532.geometry = IndexedFaceSet535

Scene15.children.append(Shape532)
Shape537 = x3d.Shape()
Appearance538 = x3d.Appearance()
Material539 = x3d.Material()
Material539.ambientIntensity = 0
Material539.diffuseColor = [0.784313738,0,0]
Material539.shininess = 1

Appearance538.material = Material539

Shape537.appearance = Appearance538
IndexedFaceSet540 = x3d.IndexedFaceSet()
IndexedFaceSet540.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1]
IndexedFaceSet540.solid = False
IndexedFaceSet540.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1]
Coordinate541 = x3d.Coordinate()

IndexedFaceSet540.coord = Coordinate541

Shape537.geometry = IndexedFaceSet540

Scene15.children.append(Shape537)
Shape542 = x3d.Shape()
Appearance543 = x3d.Appearance()
Material544 = x3d.Material()
Material544.ambientIntensity = 0
Material544.diffuseColor = [0.784313738,0,0]
Material544.shininess = 1

Appearance543.material = Material544

Shape542.appearance = Appearance543
IndexedFaceSet545 = x3d.IndexedFaceSet()
IndexedFaceSet545.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet545.solid = False
IndexedFaceSet545.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
Coordinate546 = x3d.Coordinate()

IndexedFaceSet545.coord = Coordinate546

Shape542.geometry = IndexedFaceSet545

Scene15.children.append(Shape542)
Shape547 = x3d.Shape()
Appearance548 = x3d.Appearance()
Material549 = x3d.Material()
Material549.ambientIntensity = 0
Material549.diffuseColor = [0.784313738,0,0]
Material549.shininess = 1

Appearance548.material = Material549

Shape547.appearance = Appearance548
IndexedFaceSet550 = x3d.IndexedFaceSet()
IndexedFaceSet550.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet550.solid = False
IndexedFaceSet550.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate551 = x3d.Coordinate()

IndexedFaceSet550.coord = Coordinate551

Shape547.geometry = IndexedFaceSet550

Scene15.children.append(Shape547)
Shape552 = x3d.Shape()
Appearance553 = x3d.Appearance()
Material554 = x3d.Material()
Material554.ambientIntensity = 0
Material554.diffuseColor = [0.784313738,0,0]
Material554.shininess = 1

Appearance553.material = Material554

Shape552.appearance = Appearance553
IndexedFaceSet555 = x3d.IndexedFaceSet()
IndexedFaceSet555.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1]
IndexedFaceSet555.solid = False
IndexedFaceSet555.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1]
Coordinate556 = x3d.Coordinate()

IndexedFaceSet555.coord = Coordinate556

Shape552.geometry = IndexedFaceSet555

Scene15.children.append(Shape552)
Shape557 = x3d.Shape()
Appearance558 = x3d.Appearance()
Material559 = x3d.Material()
Material559.ambientIntensity = 0
Material559.diffuseColor = [0.784313738,0,0]
Material559.shininess = 1

Appearance558.material = Material559

Shape557.appearance = Appearance558
IndexedFaceSet560 = x3d.IndexedFaceSet()
IndexedFaceSet560.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1]
IndexedFaceSet560.solid = False
IndexedFaceSet560.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1]
Coordinate561 = x3d.Coordinate()

IndexedFaceSet560.coord = Coordinate561

Shape557.geometry = IndexedFaceSet560

Scene15.children.append(Shape557)
Shape562 = x3d.Shape()
Appearance563 = x3d.Appearance()
Material564 = x3d.Material()
Material564.ambientIntensity = 0
Material564.diffuseColor = [0.784313738,0,0]
Material564.shininess = 1

Appearance563.material = Material564

Shape562.appearance = Appearance563
IndexedFaceSet565 = x3d.IndexedFaceSet()
IndexedFaceSet565.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet565.solid = False
IndexedFaceSet565.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
Coordinate566 = x3d.Coordinate()

IndexedFaceSet565.coord = Coordinate566

Shape562.geometry = IndexedFaceSet565

Scene15.children.append(Shape562)
Shape567 = x3d.Shape()
Appearance568 = x3d.Appearance()
Material569 = x3d.Material()
Material569.ambientIntensity = 0
Material569.diffuseColor = [0.784313738,0,0]
Material569.shininess = 1

Appearance568.material = Material569

Shape567.appearance = Appearance568
IndexedFaceSet570 = x3d.IndexedFaceSet()
IndexedFaceSet570.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet570.solid = False
IndexedFaceSet570.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
Coordinate571 = x3d.Coordinate()

IndexedFaceSet570.coord = Coordinate571

Shape567.geometry = IndexedFaceSet570

Scene15.children.append(Shape567)
Shape572 = x3d.Shape()
Appearance573 = x3d.Appearance()
Material574 = x3d.Material()
Material574.ambientIntensity = 0
Material574.diffuseColor = [0.784313738,0,0]
Material574.shininess = 1

Appearance573.material = Material574

Shape572.appearance = Appearance573
IndexedFaceSet575 = x3d.IndexedFaceSet()
IndexedFaceSet575.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,29,20,18,-1,21,23,29,-1,18,21,29,-1,25,23,21,-1,15,22,25,-1,21,15,25,-1,23,25,27,-1,23,27,24,-1,25,22,26,-1,25,26,27,-1,20,29,30,-1,20,30,28,-1,29,23,24,-1,29,24,30,-1,37,35,33,-1,37,33,36,-1,34,37,36,-1,34,36,31,-1,40,38,32,-1,40,32,39,-1,35,40,39,-1,35,39,33,-1,39,32,15,-1,21,33,39,-1,15,21,39,-1,36,33,21,-1,18,31,36,-1,21,18,36,-1,26,14,27,-1,24,27,14,-1,40,16,38,-1,35,16,40,-1,24,14,17,-1,28,30,17,-1,24,17,30,-1,19,35,37,-1,37,34,19,-1,16,35,19,-1]
IndexedFaceSet575.solid = False
IndexedFaceSet575.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,29,20,18,-1,21,23,29,-1,18,21,29,-1,25,23,21,-1,15,22,25,-1,21,15,25,-1,23,25,27,-1,23,27,24,-1,25,22,26,-1,25,26,27,-1,20,29,30,-1,20,30,28,-1,29,23,24,-1,29,24,30,-1,37,35,33,-1,37,33,36,-1,34,37,36,-1,34,36,31,-1,40,38,32,-1,40,32,39,-1,35,40,39,-1,35,39,33,-1,39,32,15,-1,21,33,39,-1,15,21,39,-1,36,33,21,-1,18,31,36,-1,21,18,36,-1,26,14,27,-1,24,27,14,-1,40,16,38,-1,35,16,40,-1,24,14,17,-1,28,30,17,-1,24,17,30,-1,19,35,37,-1,37,34,19,-1,16,35,19,-1]
Coordinate576 = x3d.Coordinate()

IndexedFaceSet575.coord = Coordinate576

Shape572.geometry = IndexedFaceSet575

Scene15.children.append(Shape572)
Shape577 = x3d.Shape()
Appearance578 = x3d.Appearance()
Material579 = x3d.Material()
Material579.ambientIntensity = 0
Material579.diffuseColor = [0.784313738,0,0]
Material579.shininess = 1

Appearance578.material = Material579

Shape577.appearance = Appearance578
IndexedFaceSet580 = x3d.IndexedFaceSet()
IndexedFaceSet580.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,34,-1,32,34,35,-1,33,32,35,-1,33,35,36,-1,38,37,39,-1,38,39,40,-1]
IndexedFaceSet580.solid = False
IndexedFaceSet580.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,34,-1,32,34,35,-1,33,32,35,-1,33,35,36,-1,38,37,39,-1,38,39,40,-1]
Coordinate581 = x3d.Coordinate()

IndexedFaceSet580.coord = Coordinate581

Shape577.geometry = IndexedFaceSet580

Scene15.children.append(Shape577)
Shape582 = x3d.Shape()
Appearance583 = x3d.Appearance()
Material584 = x3d.Material()
Material584.ambientIntensity = 0
Material584.diffuseColor = [0.784313738,0,0]
Material584.shininess = 1

Appearance583.material = Material584

Shape582.appearance = Appearance583
IndexedFaceSet585 = x3d.IndexedFaceSet()
IndexedFaceSet585.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet585.solid = False
IndexedFaceSet585.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
Coordinate586 = x3d.Coordinate()

IndexedFaceSet585.coord = Coordinate586

Shape582.geometry = IndexedFaceSet585

Scene15.children.append(Shape582)
Shape587 = x3d.Shape()
Appearance588 = x3d.Appearance()
Material589 = x3d.Material()
Material589.ambientIntensity = 0
Material589.diffuseColor = [0.784313738,0,0]
Material589.shininess = 1

Appearance588.material = Material589

Shape587.appearance = Appearance588
IndexedFaceSet590 = x3d.IndexedFaceSet()
IndexedFaceSet590.coordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
IndexedFaceSet590.solid = False
IndexedFaceSet590.texCoordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
Coordinate591 = x3d.Coordinate()

IndexedFaceSet590.coord = Coordinate591

Shape587.geometry = IndexedFaceSet590

Scene15.children.append(Shape587)
Shape592 = x3d.Shape()
Appearance593 = x3d.Appearance()
Material594 = x3d.Material()
Material594.ambientIntensity = 0
Material594.diffuseColor = [0.784313738,0,0]
Material594.shininess = 1

Appearance593.material = Material594

Shape592.appearance = Appearance593
IndexedFaceSet595 = x3d.IndexedFaceSet()
IndexedFaceSet595.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1]
IndexedFaceSet595.solid = False
IndexedFaceSet595.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1]
Coordinate596 = x3d.Coordinate()

IndexedFaceSet595.coord = Coordinate596

Shape592.geometry = IndexedFaceSet595

Scene15.children.append(Shape592)
Shape597 = x3d.Shape()
Appearance598 = x3d.Appearance()
Material599 = x3d.Material()
Material599.ambientIntensity = 0
Material599.diffuseColor = [0.784313738,0,0]
Material599.shininess = 1

Appearance598.material = Material599

Shape597.appearance = Appearance598
IndexedFaceSet600 = x3d.IndexedFaceSet()
IndexedFaceSet600.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1]
IndexedFaceSet600.solid = False
IndexedFaceSet600.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1]
Coordinate601 = x3d.Coordinate()

IndexedFaceSet600.coord = Coordinate601

Shape597.geometry = IndexedFaceSet600

Scene15.children.append(Shape597)
Shape602 = x3d.Shape()
Appearance603 = x3d.Appearance()
Material604 = x3d.Material()
Material604.ambientIntensity = 0
Material604.diffuseColor = [0.784313738,0,0]
Material604.shininess = 1

Appearance603.material = Material604

Shape602.appearance = Appearance603
IndexedFaceSet605 = x3d.IndexedFaceSet()
IndexedFaceSet605.coordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
IndexedFaceSet605.solid = False
IndexedFaceSet605.texCoordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
Coordinate606 = x3d.Coordinate()

IndexedFaceSet605.coord = Coordinate606

Shape602.geometry = IndexedFaceSet605

Scene15.children.append(Shape602)
Shape607 = x3d.Shape()
Appearance608 = x3d.Appearance()
Material609 = x3d.Material()
Material609.ambientIntensity = 0
Material609.diffuseColor = [0.784313738,0,0]
Material609.shininess = 1

Appearance608.material = Material609

Shape607.appearance = Appearance608
IndexedFaceSet610 = x3d.IndexedFaceSet()
IndexedFaceSet610.coordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
IndexedFaceSet610.solid = False
IndexedFaceSet610.texCoordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
Coordinate611 = x3d.Coordinate()

IndexedFaceSet610.coord = Coordinate611

Shape607.geometry = IndexedFaceSet610

Scene15.children.append(Shape607)
Shape612 = x3d.Shape()
Appearance613 = x3d.Appearance()
Material614 = x3d.Material()
Material614.ambientIntensity = 0
Material614.diffuseColor = [0.784313738,0,0]
Material614.shininess = 1

Appearance613.material = Material614

Shape612.appearance = Appearance613
IndexedFaceSet615 = x3d.IndexedFaceSet()
IndexedFaceSet615.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet615.solid = False
IndexedFaceSet615.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate616 = x3d.Coordinate()

IndexedFaceSet615.coord = Coordinate616

Shape612.geometry = IndexedFaceSet615

Scene15.children.append(Shape612)
Shape617 = x3d.Shape()
Appearance618 = x3d.Appearance()
Material619 = x3d.Material()
Material619.ambientIntensity = 0
Material619.diffuseColor = [0.784313738,0,0]
Material619.shininess = 1

Appearance618.material = Material619

Shape617.appearance = Appearance618
IndexedFaceSet620 = x3d.IndexedFaceSet()
IndexedFaceSet620.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet620.solid = False
IndexedFaceSet620.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate621 = x3d.Coordinate()

IndexedFaceSet620.coord = Coordinate621

Shape617.geometry = IndexedFaceSet620

Scene15.children.append(Shape617)
Shape622 = x3d.Shape()
Appearance623 = x3d.Appearance()
Material624 = x3d.Material()
Material624.ambientIntensity = 0
Material624.diffuseColor = [0.784313738,0,0]
Material624.shininess = 1

Appearance623.material = Material624

Shape622.appearance = Appearance623
IndexedFaceSet625 = x3d.IndexedFaceSet()
IndexedFaceSet625.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet625.solid = False
IndexedFaceSet625.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate626 = x3d.Coordinate()

IndexedFaceSet625.coord = Coordinate626

Shape622.geometry = IndexedFaceSet625

Scene15.children.append(Shape622)
Shape627 = x3d.Shape()
Appearance628 = x3d.Appearance()
Material629 = x3d.Material()
Material629.ambientIntensity = 0
Material629.diffuseColor = [0.784313738,0,0]
Material629.shininess = 1

Appearance628.material = Material629

Shape627.appearance = Appearance628
IndexedFaceSet630 = x3d.IndexedFaceSet()
IndexedFaceSet630.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet630.solid = False
IndexedFaceSet630.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate631 = x3d.Coordinate()

IndexedFaceSet630.coord = Coordinate631

Shape627.geometry = IndexedFaceSet630

Scene15.children.append(Shape627)
Shape632 = x3d.Shape()
Appearance633 = x3d.Appearance()
Material634 = x3d.Material()
Material634.ambientIntensity = 0
Material634.diffuseColor = [0.784313738,0,0]
Material634.shininess = 1

Appearance633.material = Material634

Shape632.appearance = Appearance633
IndexedFaceSet635 = x3d.IndexedFaceSet()
IndexedFaceSet635.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet635.solid = False
IndexedFaceSet635.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate636 = x3d.Coordinate()

IndexedFaceSet635.coord = Coordinate636

Shape632.geometry = IndexedFaceSet635

Scene15.children.append(Shape632)
Shape637 = x3d.Shape()
Appearance638 = x3d.Appearance()
Material639 = x3d.Material()
Material639.ambientIntensity = 0
Material639.diffuseColor = [0.784313738,0,0]
Material639.shininess = 1

Appearance638.material = Material639

Shape637.appearance = Appearance638
IndexedFaceSet640 = x3d.IndexedFaceSet()
IndexedFaceSet640.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1]
IndexedFaceSet640.solid = False
IndexedFaceSet640.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1]
Coordinate641 = x3d.Coordinate()

IndexedFaceSet640.coord = Coordinate641

Shape637.geometry = IndexedFaceSet640

Scene15.children.append(Shape637)
Shape642 = x3d.Shape()
Appearance643 = x3d.Appearance()
Material644 = x3d.Material()
Material644.ambientIntensity = 0
Material644.diffuseColor = [0.784313738,0,0]
Material644.shininess = 1

Appearance643.material = Material644

Shape642.appearance = Appearance643
IndexedFaceSet645 = x3d.IndexedFaceSet()
IndexedFaceSet645.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1]
IndexedFaceSet645.solid = False
IndexedFaceSet645.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1]
Coordinate646 = x3d.Coordinate()

IndexedFaceSet645.coord = Coordinate646

Shape642.geometry = IndexedFaceSet645

Scene15.children.append(Shape642)
Shape647 = x3d.Shape()
Appearance648 = x3d.Appearance()
Material649 = x3d.Material()
Material649.ambientIntensity = 0
Material649.diffuseColor = [0.784313738,0,0]
Material649.shininess = 1

Appearance648.material = Material649

Shape647.appearance = Appearance648
IndexedFaceSet650 = x3d.IndexedFaceSet()
IndexedFaceSet650.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet650.solid = False
IndexedFaceSet650.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate651 = x3d.Coordinate()

IndexedFaceSet650.coord = Coordinate651

Shape647.geometry = IndexedFaceSet650

Scene15.children.append(Shape647)
Shape652 = x3d.Shape()
Appearance653 = x3d.Appearance()
Material654 = x3d.Material()
Material654.ambientIntensity = 0
Material654.diffuseColor = [0.784313738,0,0]
Material654.shininess = 1

Appearance653.material = Material654

Shape652.appearance = Appearance653
IndexedFaceSet655 = x3d.IndexedFaceSet()
IndexedFaceSet655.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet655.solid = False
IndexedFaceSet655.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate656 = x3d.Coordinate()

IndexedFaceSet655.coord = Coordinate656

Shape652.geometry = IndexedFaceSet655

Scene15.children.append(Shape652)
Shape657 = x3d.Shape()
Appearance658 = x3d.Appearance()
Material659 = x3d.Material()
Material659.ambientIntensity = 0
Material659.diffuseColor = [0.784313738,0,0]
Material659.shininess = 1

Appearance658.material = Material659

Shape657.appearance = Appearance658
IndexedFaceSet660 = x3d.IndexedFaceSet()
IndexedFaceSet660.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1]
IndexedFaceSet660.solid = False
IndexedFaceSet660.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1]
Coordinate661 = x3d.Coordinate()

IndexedFaceSet660.coord = Coordinate661

Shape657.geometry = IndexedFaceSet660

Scene15.children.append(Shape657)
Shape662 = x3d.Shape()
Appearance663 = x3d.Appearance()
Material664 = x3d.Material()
Material664.ambientIntensity = 0
Material664.diffuseColor = [0.784313738,0,0]
Material664.shininess = 1

Appearance663.material = Material664

Shape662.appearance = Appearance663
IndexedFaceSet665 = x3d.IndexedFaceSet()
IndexedFaceSet665.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
IndexedFaceSet665.solid = False
IndexedFaceSet665.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
Coordinate666 = x3d.Coordinate()

IndexedFaceSet665.coord = Coordinate666

Shape662.geometry = IndexedFaceSet665

Scene15.children.append(Shape662)
Shape667 = x3d.Shape()
Appearance668 = x3d.Appearance()
Material669 = x3d.Material()
Material669.ambientIntensity = 0
Material669.diffuseColor = [0.784313738,0,0]
Material669.shininess = 1

Appearance668.material = Material669

Shape667.appearance = Appearance668
IndexedFaceSet670 = x3d.IndexedFaceSet()
IndexedFaceSet670.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet670.solid = False
IndexedFaceSet670.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate671 = x3d.Coordinate()

IndexedFaceSet670.coord = Coordinate671

Shape667.geometry = IndexedFaceSet670

Scene15.children.append(Shape667)
Shape672 = x3d.Shape()
Appearance673 = x3d.Appearance()
Material674 = x3d.Material()
Material674.ambientIntensity = 0
Material674.diffuseColor = [0.784313738,0,0]
Material674.shininess = 1

Appearance673.material = Material674

Shape672.appearance = Appearance673
IndexedFaceSet675 = x3d.IndexedFaceSet()
IndexedFaceSet675.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet675.solid = False
IndexedFaceSet675.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate676 = x3d.Coordinate()

IndexedFaceSet675.coord = Coordinate676

Shape672.geometry = IndexedFaceSet675

Scene15.children.append(Shape672)
Shape677 = x3d.Shape()
Appearance678 = x3d.Appearance()
Material679 = x3d.Material()
Material679.ambientIntensity = 0
Material679.diffuseColor = [0.784313738,0,0]
Material679.shininess = 1

Appearance678.material = Material679

Shape677.appearance = Appearance678
IndexedFaceSet680 = x3d.IndexedFaceSet()
IndexedFaceSet680.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
IndexedFaceSet680.solid = False
IndexedFaceSet680.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
Coordinate681 = x3d.Coordinate()

IndexedFaceSet680.coord = Coordinate681

Shape677.geometry = IndexedFaceSet680

Scene15.children.append(Shape677)
Shape682 = x3d.Shape()
Appearance683 = x3d.Appearance()
Material684 = x3d.Material()
Material684.ambientIntensity = 0
Material684.diffuseColor = [0.784313738,0,0]
Material684.shininess = 1

Appearance683.material = Material684

Shape682.appearance = Appearance683
IndexedFaceSet685 = x3d.IndexedFaceSet()
IndexedFaceSet685.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
IndexedFaceSet685.solid = False
IndexedFaceSet685.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
Coordinate686 = x3d.Coordinate()

IndexedFaceSet685.coord = Coordinate686

Shape682.geometry = IndexedFaceSet685

Scene15.children.append(Shape682)
Shape687 = x3d.Shape()
Appearance688 = x3d.Appearance()
Material689 = x3d.Material()
Material689.ambientIntensity = 0
Material689.diffuseColor = [0.784313738,0,0]
Material689.shininess = 1

Appearance688.material = Material689

Shape687.appearance = Appearance688
IndexedFaceSet690 = x3d.IndexedFaceSet()
IndexedFaceSet690.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet690.solid = False
IndexedFaceSet690.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate691 = x3d.Coordinate()

IndexedFaceSet690.coord = Coordinate691

Shape687.geometry = IndexedFaceSet690

Scene15.children.append(Shape687)
Shape692 = x3d.Shape()
Appearance693 = x3d.Appearance()
Material694 = x3d.Material()
Material694.ambientIntensity = 0
Material694.diffuseColor = [0.784313738,0,0]
Material694.shininess = 1

Appearance693.material = Material694

Shape692.appearance = Appearance693
IndexedFaceSet695 = x3d.IndexedFaceSet()
IndexedFaceSet695.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet695.solid = False
IndexedFaceSet695.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate696 = x3d.Coordinate()

IndexedFaceSet695.coord = Coordinate696

Shape692.geometry = IndexedFaceSet695

Scene15.children.append(Shape692)
Shape697 = x3d.Shape()
Appearance698 = x3d.Appearance()
Material699 = x3d.Material()
Material699.ambientIntensity = 0
Material699.diffuseColor = [0.784313738,0,0]
Material699.shininess = 1

Appearance698.material = Material699

Shape697.appearance = Appearance698
IndexedFaceSet700 = x3d.IndexedFaceSet()
IndexedFaceSet700.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet700.solid = False
IndexedFaceSet700.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate701 = x3d.Coordinate()

IndexedFaceSet700.coord = Coordinate701

Shape697.geometry = IndexedFaceSet700

Scene15.children.append(Shape697)
Shape702 = x3d.Shape()
Appearance703 = x3d.Appearance()
Material704 = x3d.Material()
Material704.ambientIntensity = 0
Material704.diffuseColor = [0.784313738,0,0]
Material704.shininess = 1

Appearance703.material = Material704

Shape702.appearance = Appearance703
IndexedFaceSet705 = x3d.IndexedFaceSet()
IndexedFaceSet705.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1]
IndexedFaceSet705.solid = False
IndexedFaceSet705.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1]
Coordinate706 = x3d.Coordinate()

IndexedFaceSet705.coord = Coordinate706

Shape702.geometry = IndexedFaceSet705

Scene15.children.append(Shape702)
Shape707 = x3d.Shape()
Appearance708 = x3d.Appearance()
Material709 = x3d.Material()
Material709.ambientIntensity = 0
Material709.diffuseColor = [0.784313738,0,0]
Material709.shininess = 1

Appearance708.material = Material709

Shape707.appearance = Appearance708
IndexedFaceSet710 = x3d.IndexedFaceSet()
IndexedFaceSet710.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet710.solid = False
IndexedFaceSet710.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate711 = x3d.Coordinate()

IndexedFaceSet710.coord = Coordinate711

Shape707.geometry = IndexedFaceSet710

Scene15.children.append(Shape707)
Shape712 = x3d.Shape()
Appearance713 = x3d.Appearance()
Material714 = x3d.Material()
Material714.ambientIntensity = 0
Material714.diffuseColor = [0.784313738,0,0]
Material714.shininess = 1

Appearance713.material = Material714

Shape712.appearance = Appearance713
IndexedFaceSet715 = x3d.IndexedFaceSet()
IndexedFaceSet715.coordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet715.solid = False
IndexedFaceSet715.texCoordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
Coordinate716 = x3d.Coordinate()

IndexedFaceSet715.coord = Coordinate716

Shape712.geometry = IndexedFaceSet715

Scene15.children.append(Shape712)
Shape717 = x3d.Shape()
Appearance718 = x3d.Appearance()
Material719 = x3d.Material()
Material719.ambientIntensity = 0
Material719.diffuseColor = [0.784313738,0,0]
Material719.shininess = 1

Appearance718.material = Material719

Shape717.appearance = Appearance718
IndexedFaceSet720 = x3d.IndexedFaceSet()
IndexedFaceSet720.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1]
IndexedFaceSet720.solid = False
IndexedFaceSet720.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1]
Coordinate721 = x3d.Coordinate()

IndexedFaceSet720.coord = Coordinate721

Shape717.geometry = IndexedFaceSet720

Scene15.children.append(Shape717)
Shape722 = x3d.Shape()
Appearance723 = x3d.Appearance()
Material724 = x3d.Material()
Material724.ambientIntensity = 0
Material724.diffuseColor = [0.784313738,0,0]
Material724.shininess = 1

Appearance723.material = Material724

Shape722.appearance = Appearance723
IndexedFaceSet725 = x3d.IndexedFaceSet()
IndexedFaceSet725.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1]
IndexedFaceSet725.solid = False
IndexedFaceSet725.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1]
Coordinate726 = x3d.Coordinate()

IndexedFaceSet725.coord = Coordinate726

Shape722.geometry = IndexedFaceSet725

Scene15.children.append(Shape722)
Shape727 = x3d.Shape()
Appearance728 = x3d.Appearance()
Material729 = x3d.Material()
Material729.ambientIntensity = 0
Material729.diffuseColor = [0.784313738,0,0]
Material729.shininess = 1

Appearance728.material = Material729

Shape727.appearance = Appearance728
IndexedFaceSet730 = x3d.IndexedFaceSet()
IndexedFaceSet730.coordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
IndexedFaceSet730.solid = False
IndexedFaceSet730.texCoordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
Coordinate731 = x3d.Coordinate()

IndexedFaceSet730.coord = Coordinate731

Shape727.geometry = IndexedFaceSet730

Scene15.children.append(Shape727)
Shape732 = x3d.Shape()
Appearance733 = x3d.Appearance()
Material734 = x3d.Material()
Material734.ambientIntensity = 0
Material734.diffuseColor = [0.784313738,0,0]
Material734.shininess = 1

Appearance733.material = Material734

Shape732.appearance = Appearance733
IndexedFaceSet735 = x3d.IndexedFaceSet()
IndexedFaceSet735.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet735.solid = False
IndexedFaceSet735.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
Coordinate736 = x3d.Coordinate()

IndexedFaceSet735.coord = Coordinate736

Shape732.geometry = IndexedFaceSet735

Scene15.children.append(Shape732)
Shape737 = x3d.Shape()
Appearance738 = x3d.Appearance()
Material739 = x3d.Material()
Material739.ambientIntensity = 0
Material739.diffuseColor = [0.784313738,0,0]
Material739.shininess = 1

Appearance738.material = Material739

Shape737.appearance = Appearance738
IndexedFaceSet740 = x3d.IndexedFaceSet()
IndexedFaceSet740.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,31,22,20,-1,23,25,31,-1,20,23,31,-1,27,25,23,-1,17,24,27,-1,23,17,27,-1,25,27,29,-1,25,29,26,-1,27,24,28,-1,27,28,29,-1,22,31,32,-1,22,32,30,-1,31,25,26,-1,31,26,32,-1,39,37,35,-1,39,35,38,-1,36,39,38,-1,36,38,33,-1,42,40,34,-1,42,34,41,-1,37,42,41,-1,37,41,35,-1,41,34,17,-1,23,35,41,-1,17,23,41,-1,38,35,23,-1,20,33,38,-1,23,20,38,-1,28,16,29,-1,26,29,16,-1,42,18,40,-1,37,18,42,-1,26,16,19,-1,30,32,19,-1,26,19,32,-1,21,37,39,-1,39,36,21,-1,18,37,21,-1]
IndexedFaceSet740.solid = False
IndexedFaceSet740.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,31,22,20,-1,23,25,31,-1,20,23,31,-1,27,25,23,-1,17,24,27,-1,23,17,27,-1,25,27,29,-1,25,29,26,-1,27,24,28,-1,27,28,29,-1,22,31,32,-1,22,32,30,-1,31,25,26,-1,31,26,32,-1,39,37,35,-1,39,35,38,-1,36,39,38,-1,36,38,33,-1,42,40,34,-1,42,34,41,-1,37,42,41,-1,37,41,35,-1,41,34,17,-1,23,35,41,-1,17,23,41,-1,38,35,23,-1,20,33,38,-1,23,20,38,-1,28,16,29,-1,26,29,16,-1,42,18,40,-1,37,18,42,-1,26,16,19,-1,30,32,19,-1,26,19,32,-1,21,37,39,-1,39,36,21,-1,18,37,21,-1]
Coordinate741 = x3d.Coordinate()

IndexedFaceSet740.coord = Coordinate741

Shape737.geometry = IndexedFaceSet740

Scene15.children.append(Shape737)
Shape742 = x3d.Shape()
Appearance743 = x3d.Appearance()
Material744 = x3d.Material()
Material744.ambientIntensity = 0
Material744.diffuseColor = [0.784313738,0,0]
Material744.shininess = 1

Appearance743.material = Material744

Shape742.appearance = Appearance743
IndexedFaceSet745 = x3d.IndexedFaceSet()
IndexedFaceSet745.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1]
IndexedFaceSet745.solid = False
IndexedFaceSet745.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1]
Coordinate746 = x3d.Coordinate()

IndexedFaceSet745.coord = Coordinate746

Shape742.geometry = IndexedFaceSet745

Scene15.children.append(Shape742)
Shape747 = x3d.Shape()
Appearance748 = x3d.Appearance()
Material749 = x3d.Material()
Material749.ambientIntensity = 0
Material749.diffuseColor = [0.784313738,0,0]
Material749.shininess = 1

Appearance748.material = Material749

Shape747.appearance = Appearance748
IndexedFaceSet750 = x3d.IndexedFaceSet()
IndexedFaceSet750.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet750.solid = False
IndexedFaceSet750.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate751 = x3d.Coordinate()

IndexedFaceSet750.coord = Coordinate751

Shape747.geometry = IndexedFaceSet750

Scene15.children.append(Shape747)
Shape752 = x3d.Shape()
Appearance753 = x3d.Appearance()
Material754 = x3d.Material()
Material754.ambientIntensity = 0
Material754.diffuseColor = [0.784313738,0,0]
Material754.shininess = 1

Appearance753.material = Material754

Shape752.appearance = Appearance753
IndexedFaceSet755 = x3d.IndexedFaceSet()
IndexedFaceSet755.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet755.solid = False
IndexedFaceSet755.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate756 = x3d.Coordinate()

IndexedFaceSet755.coord = Coordinate756

Shape752.geometry = IndexedFaceSet755

Scene15.children.append(Shape752)
Shape757 = x3d.Shape()
Appearance758 = x3d.Appearance()
Material759 = x3d.Material()
Material759.ambientIntensity = 0
Material759.diffuseColor = [0.784313738,0,0]
Material759.shininess = 1

Appearance758.material = Material759

Shape757.appearance = Appearance758
IndexedFaceSet760 = x3d.IndexedFaceSet()
IndexedFaceSet760.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1]
IndexedFaceSet760.solid = False
IndexedFaceSet760.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1]
Coordinate761 = x3d.Coordinate()

IndexedFaceSet760.coord = Coordinate761

Shape757.geometry = IndexedFaceSet760

Scene15.children.append(Shape757)
Shape762 = x3d.Shape()
Appearance763 = x3d.Appearance()
Material764 = x3d.Material()
Material764.ambientIntensity = 0
Material764.diffuseColor = [0.784313738,0,0]
Material764.shininess = 1

Appearance763.material = Material764

Shape762.appearance = Appearance763
IndexedFaceSet765 = x3d.IndexedFaceSet()
IndexedFaceSet765.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1]
IndexedFaceSet765.solid = False
IndexedFaceSet765.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1]
Coordinate766 = x3d.Coordinate()

IndexedFaceSet765.coord = Coordinate766

Shape762.geometry = IndexedFaceSet765

Scene15.children.append(Shape762)
Shape767 = x3d.Shape()
Appearance768 = x3d.Appearance()
Material769 = x3d.Material()
Material769.ambientIntensity = 0
Material769.diffuseColor = [0.784313738,0,0]
Material769.shininess = 1

Appearance768.material = Material769

Shape767.appearance = Appearance768
IndexedFaceSet770 = x3d.IndexedFaceSet()
IndexedFaceSet770.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet770.solid = False
IndexedFaceSet770.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
Coordinate771 = x3d.Coordinate()

IndexedFaceSet770.coord = Coordinate771

Shape767.geometry = IndexedFaceSet770

Scene15.children.append(Shape767)
Shape772 = x3d.Shape()
Appearance773 = x3d.Appearance()
Material774 = x3d.Material()
Material774.ambientIntensity = 0
Material774.diffuseColor = [0.784313738,0,0]
Material774.shininess = 1

Appearance773.material = Material774

Shape772.appearance = Appearance773
IndexedFaceSet775 = x3d.IndexedFaceSet()
IndexedFaceSet775.coordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet775.solid = False
IndexedFaceSet775.texCoordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
Coordinate776 = x3d.Coordinate()

IndexedFaceSet775.coord = Coordinate776

Shape772.geometry = IndexedFaceSet775

Scene15.children.append(Shape772)
Shape777 = x3d.Shape()
Appearance778 = x3d.Appearance()
Material779 = x3d.Material()
Material779.ambientIntensity = 0
Material779.diffuseColor = [0.784313738,0,0]
Material779.shininess = 1

Appearance778.material = Material779

Shape777.appearance = Appearance778
IndexedFaceSet780 = x3d.IndexedFaceSet()
IndexedFaceSet780.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1]
IndexedFaceSet780.solid = False
IndexedFaceSet780.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1]
Coordinate781 = x3d.Coordinate()

IndexedFaceSet780.coord = Coordinate781

Shape777.geometry = IndexedFaceSet780

Scene15.children.append(Shape777)
Shape782 = x3d.Shape()
Appearance783 = x3d.Appearance()
Material784 = x3d.Material()
Material784.ambientIntensity = 0
Material784.diffuseColor = [0.784313738,0,0]
Material784.shininess = 1

Appearance783.material = Material784

Shape782.appearance = Appearance783
IndexedFaceSet785 = x3d.IndexedFaceSet()
IndexedFaceSet785.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1]
IndexedFaceSet785.solid = False
IndexedFaceSet785.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1]
Coordinate786 = x3d.Coordinate()

IndexedFaceSet785.coord = Coordinate786

Shape782.geometry = IndexedFaceSet785

Scene15.children.append(Shape782)
Shape787 = x3d.Shape()
Appearance788 = x3d.Appearance()
Material789 = x3d.Material()
Material789.ambientIntensity = 0
Material789.diffuseColor = [0.784313738,0,0]
Material789.shininess = 1

Appearance788.material = Material789

Shape787.appearance = Appearance788
IndexedFaceSet790 = x3d.IndexedFaceSet()
IndexedFaceSet790.coordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
IndexedFaceSet790.solid = False
IndexedFaceSet790.texCoordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
Coordinate791 = x3d.Coordinate()

IndexedFaceSet790.coord = Coordinate791

Shape787.geometry = IndexedFaceSet790

Scene15.children.append(Shape787)
Shape792 = x3d.Shape()
Appearance793 = x3d.Appearance()
Material794 = x3d.Material()
Material794.ambientIntensity = 0
Material794.diffuseColor = [0.784313738,0,0]
Material794.shininess = 1

Appearance793.material = Material794

Shape792.appearance = Appearance793
IndexedFaceSet795 = x3d.IndexedFaceSet()
IndexedFaceSet795.coordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
IndexedFaceSet795.solid = False
IndexedFaceSet795.texCoordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
Coordinate796 = x3d.Coordinate()

IndexedFaceSet795.coord = Coordinate796

Shape792.geometry = IndexedFaceSet795

Scene15.children.append(Shape792)
Shape797 = x3d.Shape()
Appearance798 = x3d.Appearance()
Material799 = x3d.Material()
Material799.ambientIntensity = 0
Material799.diffuseColor = [0.784313738,0,0]
Material799.shininess = 1

Appearance798.material = Material799

Shape797.appearance = Appearance798
IndexedFaceSet800 = x3d.IndexedFaceSet()
IndexedFaceSet800.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1]
IndexedFaceSet800.solid = False
IndexedFaceSet800.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1]
Coordinate801 = x3d.Coordinate()

IndexedFaceSet800.coord = Coordinate801

Shape797.geometry = IndexedFaceSet800

Scene15.children.append(Shape797)
Shape802 = x3d.Shape()
Appearance803 = x3d.Appearance()
Material804 = x3d.Material()
Material804.ambientIntensity = 0
Material804.diffuseColor = [0.784313738,0,0]
Material804.shininess = 1

Appearance803.material = Material804

Shape802.appearance = Appearance803
IndexedFaceSet805 = x3d.IndexedFaceSet()
IndexedFaceSet805.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet805.solid = False
IndexedFaceSet805.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate806 = x3d.Coordinate()

IndexedFaceSet805.coord = Coordinate806

Shape802.geometry = IndexedFaceSet805

Scene15.children.append(Shape802)
Shape807 = x3d.Shape()
Appearance808 = x3d.Appearance()
Material809 = x3d.Material()
Material809.ambientIntensity = 0
Material809.diffuseColor = [0.784313738,0,0]
Material809.shininess = 1

Appearance808.material = Material809

Shape807.appearance = Appearance808
IndexedFaceSet810 = x3d.IndexedFaceSet()
IndexedFaceSet810.coordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
IndexedFaceSet810.solid = False
IndexedFaceSet810.texCoordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
Coordinate811 = x3d.Coordinate()

IndexedFaceSet810.coord = Coordinate811

Shape807.geometry = IndexedFaceSet810

Scene15.children.append(Shape807)
Shape812 = x3d.Shape()
Appearance813 = x3d.Appearance()
Material814 = x3d.Material()
Material814.ambientIntensity = 0
Material814.diffuseColor = [0.784313738,0,0]
Material814.shininess = 1

Appearance813.material = Material814

Shape812.appearance = Appearance813
IndexedFaceSet815 = x3d.IndexedFaceSet()
IndexedFaceSet815.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet815.solid = False
IndexedFaceSet815.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate816 = x3d.Coordinate()

IndexedFaceSet815.coord = Coordinate816

Shape812.geometry = IndexedFaceSet815

Scene15.children.append(Shape812)
Shape817 = x3d.Shape()
Appearance818 = x3d.Appearance()
Material819 = x3d.Material()
Material819.ambientIntensity = 0
Material819.diffuseColor = [0.784313738,0,0]
Material819.shininess = 1

Appearance818.material = Material819

Shape817.appearance = Appearance818
IndexedFaceSet820 = x3d.IndexedFaceSet()
IndexedFaceSet820.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet820.solid = False
IndexedFaceSet820.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate821 = x3d.Coordinate()

IndexedFaceSet820.coord = Coordinate821

Shape817.geometry = IndexedFaceSet820

Scene15.children.append(Shape817)
Shape822 = x3d.Shape()
Appearance823 = x3d.Appearance()
Material824 = x3d.Material()
Material824.ambientIntensity = 0
Material824.diffuseColor = [0.784313738,0,0]
Material824.shininess = 1

Appearance823.material = Material824

Shape822.appearance = Appearance823
IndexedFaceSet825 = x3d.IndexedFaceSet()
IndexedFaceSet825.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
IndexedFaceSet825.solid = False
IndexedFaceSet825.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
Coordinate826 = x3d.Coordinate()

IndexedFaceSet825.coord = Coordinate826

Shape822.geometry = IndexedFaceSet825

Scene15.children.append(Shape822)
Shape827 = x3d.Shape()
Appearance828 = x3d.Appearance()
Material829 = x3d.Material()
Material829.ambientIntensity = 0
Material829.diffuseColor = [0.784313738,0,0]
Material829.shininess = 1

Appearance828.material = Material829

Shape827.appearance = Appearance828
IndexedFaceSet830 = x3d.IndexedFaceSet()
IndexedFaceSet830.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
IndexedFaceSet830.solid = False
IndexedFaceSet830.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
Coordinate831 = x3d.Coordinate()

IndexedFaceSet830.coord = Coordinate831

Shape827.geometry = IndexedFaceSet830

Scene15.children.append(Shape827)
Shape832 = x3d.Shape()
Appearance833 = x3d.Appearance()
Material834 = x3d.Material()
Material834.ambientIntensity = 0
Material834.diffuseColor = [0.784313738,0,0]
Material834.shininess = 1

Appearance833.material = Material834

Shape832.appearance = Appearance833
IndexedFaceSet835 = x3d.IndexedFaceSet()
IndexedFaceSet835.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet835.solid = False
IndexedFaceSet835.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate836 = x3d.Coordinate()

IndexedFaceSet835.coord = Coordinate836

Shape832.geometry = IndexedFaceSet835

Scene15.children.append(Shape832)
Shape837 = x3d.Shape()
Appearance838 = x3d.Appearance()
Material839 = x3d.Material()
Material839.ambientIntensity = 0
Material839.diffuseColor = [0.784313738,0,0]
Material839.shininess = 1

Appearance838.material = Material839

Shape837.appearance = Appearance838
IndexedFaceSet840 = x3d.IndexedFaceSet()
IndexedFaceSet840.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet840.solid = False
IndexedFaceSet840.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate841 = x3d.Coordinate()

IndexedFaceSet840.coord = Coordinate841

Shape837.geometry = IndexedFaceSet840

Scene15.children.append(Shape837)
Shape842 = x3d.Shape()
Appearance843 = x3d.Appearance()
Material844 = x3d.Material()
Material844.ambientIntensity = 0
Material844.diffuseColor = [0.784313738,0,0]
Material844.shininess = 1

Appearance843.material = Material844

Shape842.appearance = Appearance843
IndexedFaceSet845 = x3d.IndexedFaceSet()
IndexedFaceSet845.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
IndexedFaceSet845.solid = False
IndexedFaceSet845.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
Coordinate846 = x3d.Coordinate()

IndexedFaceSet845.coord = Coordinate846

Shape842.geometry = IndexedFaceSet845

Scene15.children.append(Shape842)
Shape847 = x3d.Shape()
Appearance848 = x3d.Appearance()
Material849 = x3d.Material()
Material849.ambientIntensity = 0
Material849.diffuseColor = [0.784313738,0,0]
Material849.shininess = 1

Appearance848.material = Material849

Shape847.appearance = Appearance848
IndexedFaceSet850 = x3d.IndexedFaceSet()
IndexedFaceSet850.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1]
IndexedFaceSet850.solid = False
IndexedFaceSet850.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1]
Coordinate851 = x3d.Coordinate()

IndexedFaceSet850.coord = Coordinate851

Shape847.geometry = IndexedFaceSet850

Scene15.children.append(Shape847)
Shape852 = x3d.Shape()
Appearance853 = x3d.Appearance()
Material854 = x3d.Material()
Material854.ambientIntensity = 0
Material854.diffuseColor = [0.784313738,0,0]
Material854.shininess = 1

Appearance853.material = Material854

Shape852.appearance = Appearance853
IndexedFaceSet855 = x3d.IndexedFaceSet()
IndexedFaceSet855.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet855.solid = False
IndexedFaceSet855.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate856 = x3d.Coordinate()

IndexedFaceSet855.coord = Coordinate856

Shape852.geometry = IndexedFaceSet855

Scene15.children.append(Shape852)
Shape857 = x3d.Shape()
Appearance858 = x3d.Appearance()
Material859 = x3d.Material()
Material859.ambientIntensity = 0
Material859.diffuseColor = [0.784313738,0,0]
Material859.shininess = 1

Appearance858.material = Material859

Shape857.appearance = Appearance858
IndexedFaceSet860 = x3d.IndexedFaceSet()
IndexedFaceSet860.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet860.solid = False
IndexedFaceSet860.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate861 = x3d.Coordinate()

IndexedFaceSet860.coord = Coordinate861

Shape857.geometry = IndexedFaceSet860

Scene15.children.append(Shape857)
Shape862 = x3d.Shape()
Appearance863 = x3d.Appearance()
Material864 = x3d.Material()
Material864.ambientIntensity = 0
Material864.diffuseColor = [0.784313738,0,0]
Material864.shininess = 1

Appearance863.material = Material864

Shape862.appearance = Appearance863
IndexedFaceSet865 = x3d.IndexedFaceSet()
IndexedFaceSet865.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet865.solid = False
IndexedFaceSet865.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate866 = x3d.Coordinate()

IndexedFaceSet865.coord = Coordinate866

Shape862.geometry = IndexedFaceSet865

Scene15.children.append(Shape862)
Shape867 = x3d.Shape()
Appearance868 = x3d.Appearance()
Material869 = x3d.Material()
Material869.ambientIntensity = 0
Material869.diffuseColor = [0.784313738,0,0]
Material869.shininess = 1

Appearance868.material = Material869

Shape867.appearance = Appearance868
IndexedFaceSet870 = x3d.IndexedFaceSet()
IndexedFaceSet870.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet870.solid = False
IndexedFaceSet870.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate871 = x3d.Coordinate()

IndexedFaceSet870.coord = Coordinate871

Shape867.geometry = IndexedFaceSet870

Scene15.children.append(Shape867)
Shape872 = x3d.Shape()
Appearance873 = x3d.Appearance()
Material874 = x3d.Material()
Material874.ambientIntensity = 0
Material874.diffuseColor = [0.784313738,0,0]
Material874.shininess = 1

Appearance873.material = Material874

Shape872.appearance = Appearance873
IndexedFaceSet875 = x3d.IndexedFaceSet()
IndexedFaceSet875.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet875.solid = False
IndexedFaceSet875.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate876 = x3d.Coordinate()

IndexedFaceSet875.coord = Coordinate876

Shape872.geometry = IndexedFaceSet875

Scene15.children.append(Shape872)
Shape877 = x3d.Shape()
Appearance878 = x3d.Appearance()
Material879 = x3d.Material()
Material879.ambientIntensity = 0
Material879.diffuseColor = [0.784313738,0,0]
Material879.shininess = 1

Appearance878.material = Material879

Shape877.appearance = Appearance878
IndexedFaceSet880 = x3d.IndexedFaceSet()
IndexedFaceSet880.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet880.solid = False
IndexedFaceSet880.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate881 = x3d.Coordinate()

IndexedFaceSet880.coord = Coordinate881

Shape877.geometry = IndexedFaceSet880

Scene15.children.append(Shape877)
Shape882 = x3d.Shape()
Appearance883 = x3d.Appearance()
Material884 = x3d.Material()
Material884.ambientIntensity = 0
Material884.diffuseColor = [0.784313738,0,0]
Material884.shininess = 1

Appearance883.material = Material884

Shape882.appearance = Appearance883
IndexedFaceSet885 = x3d.IndexedFaceSet()
IndexedFaceSet885.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1]
IndexedFaceSet885.solid = False
IndexedFaceSet885.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1]
Coordinate886 = x3d.Coordinate()

IndexedFaceSet885.coord = Coordinate886

Shape882.geometry = IndexedFaceSet885

Scene15.children.append(Shape882)
Shape887 = x3d.Shape()
Appearance888 = x3d.Appearance()
Material889 = x3d.Material()
Material889.ambientIntensity = 0
Material889.diffuseColor = [0.784313738,0,0]
Material889.shininess = 1

Appearance888.material = Material889

Shape887.appearance = Appearance888
IndexedFaceSet890 = x3d.IndexedFaceSet()
IndexedFaceSet890.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
IndexedFaceSet890.solid = False
IndexedFaceSet890.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
Coordinate891 = x3d.Coordinate()

IndexedFaceSet890.coord = Coordinate891

Shape887.geometry = IndexedFaceSet890

Scene15.children.append(Shape887)
Shape892 = x3d.Shape()
Appearance893 = x3d.Appearance()
Material894 = x3d.Material()
Material894.ambientIntensity = 0
Material894.diffuseColor = [0.784313738,0,0]
Material894.shininess = 1

Appearance893.material = Material894

Shape892.appearance = Appearance893
IndexedFaceSet895 = x3d.IndexedFaceSet()
IndexedFaceSet895.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet895.solid = False
IndexedFaceSet895.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate896 = x3d.Coordinate()

IndexedFaceSet895.coord = Coordinate896

Shape892.geometry = IndexedFaceSet895

Scene15.children.append(Shape892)
Shape897 = x3d.Shape()
Appearance898 = x3d.Appearance()
Material899 = x3d.Material()
Material899.ambientIntensity = 0
Material899.diffuseColor = [0.784313738,0,0]
Material899.shininess = 1

Appearance898.material = Material899

Shape897.appearance = Appearance898
IndexedFaceSet900 = x3d.IndexedFaceSet()
IndexedFaceSet900.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet900.solid = False
IndexedFaceSet900.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate901 = x3d.Coordinate()

IndexedFaceSet900.coord = Coordinate901

Shape897.geometry = IndexedFaceSet900

Scene15.children.append(Shape897)
Shape902 = x3d.Shape()
Appearance903 = x3d.Appearance()
Material904 = x3d.Material()
Material904.ambientIntensity = 0
Material904.diffuseColor = [0.784313738,0,0]
Material904.shininess = 1

Appearance903.material = Material904

Shape902.appearance = Appearance903
IndexedFaceSet905 = x3d.IndexedFaceSet()
IndexedFaceSet905.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,35,-1,34,35,36,-1,38,37,39,-1,38,39,40,-1]
IndexedFaceSet905.solid = False
IndexedFaceSet905.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,35,-1,34,35,36,-1,38,37,39,-1,38,39,40,-1]
Coordinate906 = x3d.Coordinate()

IndexedFaceSet905.coord = Coordinate906

Shape902.geometry = IndexedFaceSet905

Scene15.children.append(Shape902)
Shape907 = x3d.Shape()
Appearance908 = x3d.Appearance()
Material909 = x3d.Material()
Material909.ambientIntensity = 0
Material909.diffuseColor = [0.784313738,0,0]
Material909.shininess = 1

Appearance908.material = Material909

Shape907.appearance = Appearance908
IndexedFaceSet910 = x3d.IndexedFaceSet()
IndexedFaceSet910.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
IndexedFaceSet910.solid = False
IndexedFaceSet910.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
Coordinate911 = x3d.Coordinate()

IndexedFaceSet910.coord = Coordinate911

Shape907.geometry = IndexedFaceSet910

Scene15.children.append(Shape907)
Shape912 = x3d.Shape()
Appearance913 = x3d.Appearance()
Material914 = x3d.Material()
Material914.ambientIntensity = 0
Material914.diffuseColor = [0.784313738,0,0]
Material914.shininess = 1

Appearance913.material = Material914

Shape912.appearance = Appearance913
IndexedFaceSet915 = x3d.IndexedFaceSet()
IndexedFaceSet915.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet915.solid = False
IndexedFaceSet915.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate916 = x3d.Coordinate()

IndexedFaceSet915.coord = Coordinate916

Shape912.geometry = IndexedFaceSet915

Scene15.children.append(Shape912)
Shape917 = x3d.Shape()
Appearance918 = x3d.Appearance()
Material919 = x3d.Material()
Material919.ambientIntensity = 0
Material919.diffuseColor = [0.784313738,0,0]
Material919.shininess = 1

Appearance918.material = Material919

Shape917.appearance = Appearance918
IndexedFaceSet920 = x3d.IndexedFaceSet()
IndexedFaceSet920.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet920.solid = False
IndexedFaceSet920.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate921 = x3d.Coordinate()

IndexedFaceSet920.coord = Coordinate921

Shape917.geometry = IndexedFaceSet920

Scene15.children.append(Shape917)
Shape922 = x3d.Shape()
Appearance923 = x3d.Appearance()
Material924 = x3d.Material()
Material924.ambientIntensity = 0
Material924.diffuseColor = [0.784313738,0,0]
Material924.shininess = 1

Appearance923.material = Material924

Shape922.appearance = Appearance923
IndexedFaceSet925 = x3d.IndexedFaceSet()
IndexedFaceSet925.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1]
IndexedFaceSet925.solid = False
IndexedFaceSet925.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1]
Coordinate926 = x3d.Coordinate()

IndexedFaceSet925.coord = Coordinate926

Shape922.geometry = IndexedFaceSet925

Scene15.children.append(Shape922)
Shape927 = x3d.Shape()
Appearance928 = x3d.Appearance()
Material929 = x3d.Material()
Material929.ambientIntensity = 0
Material929.diffuseColor = [0.784313738,0,0]
Material929.shininess = 1

Appearance928.material = Material929

Shape927.appearance = Appearance928
IndexedFaceSet930 = x3d.IndexedFaceSet()
IndexedFaceSet930.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1]
IndexedFaceSet930.solid = False
IndexedFaceSet930.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1]
Coordinate931 = x3d.Coordinate()

IndexedFaceSet930.coord = Coordinate931

Shape927.geometry = IndexedFaceSet930

Scene15.children.append(Shape927)
Shape932 = x3d.Shape()
Appearance933 = x3d.Appearance()
Material934 = x3d.Material()
Material934.ambientIntensity = 0
Material934.diffuseColor = [0.784313738,0,0]
Material934.shininess = 1

Appearance933.material = Material934

Shape932.appearance = Appearance933
IndexedFaceSet935 = x3d.IndexedFaceSet()
IndexedFaceSet935.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet935.solid = False
IndexedFaceSet935.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
Coordinate936 = x3d.Coordinate()

IndexedFaceSet935.coord = Coordinate936

Shape932.geometry = IndexedFaceSet935

Scene15.children.append(Shape932)
Shape937 = x3d.Shape()
Appearance938 = x3d.Appearance()
Material939 = x3d.Material()
Material939.ambientIntensity = 0
Material939.diffuseColor = [0.784313738,0,0]
Material939.shininess = 1

Appearance938.material = Material939

Shape937.appearance = Appearance938
IndexedFaceSet940 = x3d.IndexedFaceSet()
IndexedFaceSet940.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet940.solid = False
IndexedFaceSet940.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate941 = x3d.Coordinate()

IndexedFaceSet940.coord = Coordinate941

Shape937.geometry = IndexedFaceSet940

Scene15.children.append(Shape937)
Shape942 = x3d.Shape()
Appearance943 = x3d.Appearance()
Material944 = x3d.Material()
Material944.ambientIntensity = 0
Material944.diffuseColor = [0.784313738,0,0]
Material944.shininess = 1

Appearance943.material = Material944

Shape942.appearance = Appearance943
IndexedFaceSet945 = x3d.IndexedFaceSet()
IndexedFaceSet945.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1]
IndexedFaceSet945.solid = False
IndexedFaceSet945.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1]
Coordinate946 = x3d.Coordinate()

IndexedFaceSet945.coord = Coordinate946

Shape942.geometry = IndexedFaceSet945

Scene15.children.append(Shape942)
Shape947 = x3d.Shape()
Appearance948 = x3d.Appearance()
Material949 = x3d.Material()
Material949.ambientIntensity = 0
Material949.diffuseColor = [0.784313738,0,0]
Material949.shininess = 1

Appearance948.material = Material949

Shape947.appearance = Appearance948
IndexedFaceSet950 = x3d.IndexedFaceSet()
IndexedFaceSet950.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1]
IndexedFaceSet950.solid = False
IndexedFaceSet950.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1]
Coordinate951 = x3d.Coordinate()

IndexedFaceSet950.coord = Coordinate951

Shape947.geometry = IndexedFaceSet950

Scene15.children.append(Shape947)
Shape952 = x3d.Shape()
Appearance953 = x3d.Appearance()
Material954 = x3d.Material()
Material954.ambientIntensity = 0
Material954.diffuseColor = [0.784313738,0,0]
Material954.shininess = 1

Appearance953.material = Material954

Shape952.appearance = Appearance953
IndexedFaceSet955 = x3d.IndexedFaceSet()
IndexedFaceSet955.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet955.solid = False
IndexedFaceSet955.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
Coordinate956 = x3d.Coordinate()

IndexedFaceSet955.coord = Coordinate956

Shape952.geometry = IndexedFaceSet955

Scene15.children.append(Shape952)
Shape957 = x3d.Shape()
Appearance958 = x3d.Appearance()
Material959 = x3d.Material()
Material959.ambientIntensity = 0
Material959.diffuseColor = [0.784313738,0,0]
Material959.shininess = 1

Appearance958.material = Material959

Shape957.appearance = Appearance958
IndexedFaceSet960 = x3d.IndexedFaceSet()
IndexedFaceSet960.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet960.solid = False
IndexedFaceSet960.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
Coordinate961 = x3d.Coordinate()

IndexedFaceSet960.coord = Coordinate961

Shape957.geometry = IndexedFaceSet960

Scene15.children.append(Shape957)
Shape962 = x3d.Shape()
Appearance963 = x3d.Appearance()
Material964 = x3d.Material()
Material964.ambientIntensity = 0
Material964.diffuseColor = [0.784313738,0,0]
Material964.shininess = 1

Appearance963.material = Material964

Shape962.appearance = Appearance963
IndexedFaceSet965 = x3d.IndexedFaceSet()
IndexedFaceSet965.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,36,-1,34,36,37,-1,35,34,37,-1,35,37,38,-1,54,45,43,-1,46,48,54,-1,43,46,54,-1,50,48,46,-1,40,47,50,-1,46,40,50,-1,48,50,52,-1,48,52,49,-1,50,47,51,-1,50,51,52,-1,45,54,55,-1,45,55,53,-1,54,48,49,-1,54,49,55,-1,62,60,58,-1,62,58,61,-1,59,62,61,-1,59,61,56,-1,65,63,57,-1,65,57,64,-1,60,65,64,-1,60,64,58,-1,64,57,40,-1,46,58,64,-1,40,46,64,-1,61,58,46,-1,43,56,61,-1,46,43,61,-1,51,39,52,-1,49,52,39,-1,65,41,63,-1,60,41,65,-1,49,39,42,-1,53,55,42,-1,49,42,55,-1,44,60,62,-1,62,59,44,-1,41,60,44,-1]
IndexedFaceSet965.solid = False
IndexedFaceSet965.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,36,-1,34,36,37,-1,35,34,37,-1,35,37,38,-1,54,45,43,-1,46,48,54,-1,43,46,54,-1,50,48,46,-1,40,47,50,-1,46,40,50,-1,48,50,52,-1,48,52,49,-1,50,47,51,-1,50,51,52,-1,45,54,55,-1,45,55,53,-1,54,48,49,-1,54,49,55,-1,62,60,58,-1,62,58,61,-1,59,62,61,-1,59,61,56,-1,65,63,57,-1,65,57,64,-1,60,65,64,-1,60,64,58,-1,64,57,40,-1,46,58,64,-1,40,46,64,-1,61,58,46,-1,43,56,61,-1,46,43,61,-1,51,39,52,-1,49,52,39,-1,65,41,63,-1,60,41,65,-1,49,39,42,-1,53,55,42,-1,49,42,55,-1,44,60,62,-1,62,59,44,-1,41,60,44,-1]
Coordinate966 = x3d.Coordinate()

IndexedFaceSet965.coord = Coordinate966

Shape962.geometry = IndexedFaceSet965

Scene15.children.append(Shape962)
Shape967 = x3d.Shape()
Appearance968 = x3d.Appearance()
Material969 = x3d.Material()
Material969.ambientIntensity = 0
Material969.diffuseColor = [0.784313738,0,0]
Material969.shininess = 1

Appearance968.material = Material969

Shape967.appearance = Appearance968
IndexedFaceSet970 = x3d.IndexedFaceSet()
IndexedFaceSet970.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,29,20,18,-1,21,23,29,-1,18,21,29,-1,25,23,21,-1,15,22,25,-1,21,15,25,-1,23,25,27,-1,23,27,24,-1,25,22,26,-1,25,26,27,-1,20,29,30,-1,20,30,28,-1,29,23,24,-1,29,24,30,-1,37,35,33,-1,37,33,36,-1,34,37,36,-1,34,36,31,-1,40,38,32,-1,40,32,39,-1,35,40,39,-1,35,39,33,-1,39,32,15,-1,21,33,39,-1,15,21,39,-1,36,33,21,-1,18,31,36,-1,21,18,36,-1,26,14,27,-1,24,27,14,-1,40,16,38,-1,35,16,40,-1,24,14,17,-1,28,30,17,-1,24,17,30,-1,19,35,37,-1,37,34,19,-1,16,35,19,-1]
IndexedFaceSet970.solid = False
IndexedFaceSet970.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,29,20,18,-1,21,23,29,-1,18,21,29,-1,25,23,21,-1,15,22,25,-1,21,15,25,-1,23,25,27,-1,23,27,24,-1,25,22,26,-1,25,26,27,-1,20,29,30,-1,20,30,28,-1,29,23,24,-1,29,24,30,-1,37,35,33,-1,37,33,36,-1,34,37,36,-1,34,36,31,-1,40,38,32,-1,40,32,39,-1,35,40,39,-1,35,39,33,-1,39,32,15,-1,21,33,39,-1,15,21,39,-1,36,33,21,-1,18,31,36,-1,21,18,36,-1,26,14,27,-1,24,27,14,-1,40,16,38,-1,35,16,40,-1,24,14,17,-1,28,30,17,-1,24,17,30,-1,19,35,37,-1,37,34,19,-1,16,35,19,-1]
Coordinate971 = x3d.Coordinate()

IndexedFaceSet970.coord = Coordinate971

Shape967.geometry = IndexedFaceSet970

Scene15.children.append(Shape967)
Shape972 = x3d.Shape()
Appearance973 = x3d.Appearance()
Material974 = x3d.Material()
Material974.ambientIntensity = 0
Material974.diffuseColor = [0.784313738,0,0]
Material974.shininess = 1

Appearance973.material = Material974

Shape972.appearance = Appearance973
IndexedFaceSet975 = x3d.IndexedFaceSet()
IndexedFaceSet975.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet975.solid = False
IndexedFaceSet975.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
Coordinate976 = x3d.Coordinate()

IndexedFaceSet975.coord = Coordinate976

Shape972.geometry = IndexedFaceSet975

Scene15.children.append(Shape972)
Shape977 = x3d.Shape()
Appearance978 = x3d.Appearance()
Material979 = x3d.Material()
Material979.ambientIntensity = 0
Material979.diffuseColor = [0.784313738,0,0]
Material979.shininess = 1

Appearance978.material = Material979

Shape977.appearance = Appearance978
IndexedFaceSet980 = x3d.IndexedFaceSet()
IndexedFaceSet980.coordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet980.solid = False
IndexedFaceSet980.texCoordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
Coordinate981 = x3d.Coordinate()

IndexedFaceSet980.coord = Coordinate981

Shape977.geometry = IndexedFaceSet980

Scene15.children.append(Shape977)
Shape982 = x3d.Shape()
Appearance983 = x3d.Appearance()
Material984 = x3d.Material()
Material984.ambientIntensity = 0
Material984.diffuseColor = [0.784313738,0,0]
Material984.shininess = 1

Appearance983.material = Material984

Shape982.appearance = Appearance983
IndexedFaceSet985 = x3d.IndexedFaceSet()
IndexedFaceSet985.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet985.solid = False
IndexedFaceSet985.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate986 = x3d.Coordinate()

IndexedFaceSet985.coord = Coordinate986

Shape982.geometry = IndexedFaceSet985

Scene15.children.append(Shape982)
Shape987 = x3d.Shape()
Appearance988 = x3d.Appearance()
Material989 = x3d.Material()
Material989.ambientIntensity = 0
Material989.diffuseColor = [0.784313738,0,0]
Material989.shininess = 1

Appearance988.material = Material989

Shape987.appearance = Appearance988
IndexedFaceSet990 = x3d.IndexedFaceSet()
IndexedFaceSet990.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,34,-1,32,34,35,-1,33,32,35,-1,33,35,36,-1,38,37,39,-1,38,39,40,-1]
IndexedFaceSet990.solid = False
IndexedFaceSet990.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,34,-1,32,34,35,-1,33,32,35,-1,33,35,36,-1,38,37,39,-1,38,39,40,-1]
Coordinate991 = x3d.Coordinate()

IndexedFaceSet990.coord = Coordinate991

Shape987.geometry = IndexedFaceSet990

Scene15.children.append(Shape987)
Shape992 = x3d.Shape()
Appearance993 = x3d.Appearance()
Material994 = x3d.Material()
Material994.ambientIntensity = 0
Material994.diffuseColor = [0.784313738,0,0]
Material994.shininess = 1

Appearance993.material = Material994

Shape992.appearance = Appearance993
IndexedFaceSet995 = x3d.IndexedFaceSet()
IndexedFaceSet995.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet995.solid = False
IndexedFaceSet995.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate996 = x3d.Coordinate()

IndexedFaceSet995.coord = Coordinate996

Shape992.geometry = IndexedFaceSet995

Scene15.children.append(Shape992)
Shape997 = x3d.Shape()
Appearance998 = x3d.Appearance()
Material999 = x3d.Material()
Material999.ambientIntensity = 0
Material999.diffuseColor = [0.784313738,0,0]
Material999.shininess = 1

Appearance998.material = Material999

Shape997.appearance = Appearance998
IndexedFaceSet1000 = x3d.IndexedFaceSet()
IndexedFaceSet1000.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1000.solid = False
IndexedFaceSet1000.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1001 = x3d.Coordinate()

IndexedFaceSet1000.coord = Coordinate1001

Shape997.geometry = IndexedFaceSet1000

Scene15.children.append(Shape997)
Shape1002 = x3d.Shape()
Appearance1003 = x3d.Appearance()
Material1004 = x3d.Material()
Material1004.ambientIntensity = 0
Material1004.diffuseColor = [0.784313738,0,0]
Material1004.shininess = 1

Appearance1003.material = Material1004

Shape1002.appearance = Appearance1003
IndexedFaceSet1005 = x3d.IndexedFaceSet()
IndexedFaceSet1005.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1005.solid = False
IndexedFaceSet1005.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1006 = x3d.Coordinate()

IndexedFaceSet1005.coord = Coordinate1006

Shape1002.geometry = IndexedFaceSet1005

Scene15.children.append(Shape1002)
Shape1007 = x3d.Shape()
Appearance1008 = x3d.Appearance()
Material1009 = x3d.Material()
Material1009.ambientIntensity = 0
Material1009.diffuseColor = [0.784313738,0,0]
Material1009.shininess = 1

Appearance1008.material = Material1009

Shape1007.appearance = Appearance1008
IndexedFaceSet1010 = x3d.IndexedFaceSet()
IndexedFaceSet1010.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1010.solid = False
IndexedFaceSet1010.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1011 = x3d.Coordinate()

IndexedFaceSet1010.coord = Coordinate1011

Shape1007.geometry = IndexedFaceSet1010

Scene15.children.append(Shape1007)
Shape1012 = x3d.Shape()
Appearance1013 = x3d.Appearance()
Material1014 = x3d.Material()
Material1014.ambientIntensity = 0
Material1014.diffuseColor = [0.784313738,0,0]
Material1014.shininess = 1

Appearance1013.material = Material1014

Shape1012.appearance = Appearance1013
IndexedFaceSet1015 = x3d.IndexedFaceSet()
IndexedFaceSet1015.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1015.solid = False
IndexedFaceSet1015.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1016 = x3d.Coordinate()

IndexedFaceSet1015.coord = Coordinate1016

Shape1012.geometry = IndexedFaceSet1015

Scene15.children.append(Shape1012)
Shape1017 = x3d.Shape()
Appearance1018 = x3d.Appearance()
Material1019 = x3d.Material()
Material1019.ambientIntensity = 0
Material1019.diffuseColor = [0.784313738,0,0]
Material1019.shininess = 1

Appearance1018.material = Material1019

Shape1017.appearance = Appearance1018
IndexedFaceSet1020 = x3d.IndexedFaceSet()
IndexedFaceSet1020.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1020.solid = False
IndexedFaceSet1020.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1021 = x3d.Coordinate()

IndexedFaceSet1020.coord = Coordinate1021

Shape1017.geometry = IndexedFaceSet1020

Scene15.children.append(Shape1017)
Shape1022 = x3d.Shape()
Appearance1023 = x3d.Appearance()
Material1024 = x3d.Material()
Material1024.ambientIntensity = 0
Material1024.diffuseColor = [0.784313738,0,0]
Material1024.shininess = 1

Appearance1023.material = Material1024

Shape1022.appearance = Appearance1023
IndexedFaceSet1025 = x3d.IndexedFaceSet()
IndexedFaceSet1025.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1025.solid = False
IndexedFaceSet1025.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1026 = x3d.Coordinate()

IndexedFaceSet1025.coord = Coordinate1026

Shape1022.geometry = IndexedFaceSet1025

Scene15.children.append(Shape1022)
Shape1027 = x3d.Shape()
Appearance1028 = x3d.Appearance()
Material1029 = x3d.Material()
Material1029.ambientIntensity = 0
Material1029.diffuseColor = [0.784313738,0,0]
Material1029.shininess = 1

Appearance1028.material = Material1029

Shape1027.appearance = Appearance1028
IndexedFaceSet1030 = x3d.IndexedFaceSet()
IndexedFaceSet1030.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1030.solid = False
IndexedFaceSet1030.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1031 = x3d.Coordinate()

IndexedFaceSet1030.coord = Coordinate1031

Shape1027.geometry = IndexedFaceSet1030

Scene15.children.append(Shape1027)
Shape1032 = x3d.Shape()
Appearance1033 = x3d.Appearance()
Material1034 = x3d.Material()
Material1034.ambientIntensity = 0
Material1034.diffuseColor = [0.784313738,0,0]
Material1034.shininess = 1

Appearance1033.material = Material1034

Shape1032.appearance = Appearance1033
IndexedFaceSet1035 = x3d.IndexedFaceSet()
IndexedFaceSet1035.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1]
IndexedFaceSet1035.solid = False
IndexedFaceSet1035.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1]
Coordinate1036 = x3d.Coordinate()

IndexedFaceSet1035.coord = Coordinate1036

Shape1032.geometry = IndexedFaceSet1035

Scene15.children.append(Shape1032)
Shape1037 = x3d.Shape()
Appearance1038 = x3d.Appearance()
Material1039 = x3d.Material()
Material1039.ambientIntensity = 0
Material1039.diffuseColor = [0.784313738,0,0]
Material1039.shininess = 1

Appearance1038.material = Material1039

Shape1037.appearance = Appearance1038
IndexedFaceSet1040 = x3d.IndexedFaceSet()
IndexedFaceSet1040.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
IndexedFaceSet1040.solid = False
IndexedFaceSet1040.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
Coordinate1041 = x3d.Coordinate()

IndexedFaceSet1040.coord = Coordinate1041

Shape1037.geometry = IndexedFaceSet1040

Scene15.children.append(Shape1037)
Shape1042 = x3d.Shape()
Appearance1043 = x3d.Appearance()
Material1044 = x3d.Material()
Material1044.ambientIntensity = 0
Material1044.diffuseColor = [0.784313738,0,0]
Material1044.shininess = 1

Appearance1043.material = Material1044

Shape1042.appearance = Appearance1043
IndexedFaceSet1045 = x3d.IndexedFaceSet()
IndexedFaceSet1045.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1045.solid = False
IndexedFaceSet1045.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1046 = x3d.Coordinate()

IndexedFaceSet1045.coord = Coordinate1046

Shape1042.geometry = IndexedFaceSet1045

Scene15.children.append(Shape1042)
Shape1047 = x3d.Shape()
Appearance1048 = x3d.Appearance()
Material1049 = x3d.Material()
Material1049.ambientIntensity = 0
Material1049.diffuseColor = [0.784313738,0,0]
Material1049.shininess = 1

Appearance1048.material = Material1049

Shape1047.appearance = Appearance1048
IndexedFaceSet1050 = x3d.IndexedFaceSet()
IndexedFaceSet1050.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1050.solid = False
IndexedFaceSet1050.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1051 = x3d.Coordinate()

IndexedFaceSet1050.coord = Coordinate1051

Shape1047.geometry = IndexedFaceSet1050

Scene15.children.append(Shape1047)
Shape1052 = x3d.Shape()
Appearance1053 = x3d.Appearance()
Material1054 = x3d.Material()
Material1054.ambientIntensity = 0
Material1054.diffuseColor = [0.784313738,0,0]
Material1054.shininess = 1

Appearance1053.material = Material1054

Shape1052.appearance = Appearance1053
IndexedFaceSet1055 = x3d.IndexedFaceSet()
IndexedFaceSet1055.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
IndexedFaceSet1055.solid = False
IndexedFaceSet1055.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
Coordinate1056 = x3d.Coordinate()

IndexedFaceSet1055.coord = Coordinate1056

Shape1052.geometry = IndexedFaceSet1055

Scene15.children.append(Shape1052)
Shape1057 = x3d.Shape()
Appearance1058 = x3d.Appearance()
Material1059 = x3d.Material()
Material1059.ambientIntensity = 0
Material1059.diffuseColor = [0.784313738,0,0]
Material1059.shininess = 1

Appearance1058.material = Material1059

Shape1057.appearance = Appearance1058
IndexedFaceSet1060 = x3d.IndexedFaceSet()
IndexedFaceSet1060.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
IndexedFaceSet1060.solid = False
IndexedFaceSet1060.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
Coordinate1061 = x3d.Coordinate()

IndexedFaceSet1060.coord = Coordinate1061

Shape1057.geometry = IndexedFaceSet1060

Scene15.children.append(Shape1057)
Shape1062 = x3d.Shape()
Appearance1063 = x3d.Appearance()
Material1064 = x3d.Material()
Material1064.ambientIntensity = 0
Material1064.diffuseColor = [0.784313738,0,0]
Material1064.shininess = 1

Appearance1063.material = Material1064

Shape1062.appearance = Appearance1063
IndexedFaceSet1065 = x3d.IndexedFaceSet()
IndexedFaceSet1065.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1065.solid = False
IndexedFaceSet1065.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1066 = x3d.Coordinate()

IndexedFaceSet1065.coord = Coordinate1066

Shape1062.geometry = IndexedFaceSet1065

Scene15.children.append(Shape1062)
Shape1067 = x3d.Shape()
Appearance1068 = x3d.Appearance()
Material1069 = x3d.Material()
Material1069.ambientIntensity = 0
Material1069.diffuseColor = [0.784313738,0,0]
Material1069.shininess = 1

Appearance1068.material = Material1069

Shape1067.appearance = Appearance1068
IndexedFaceSet1070 = x3d.IndexedFaceSet()
IndexedFaceSet1070.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1070.solid = False
IndexedFaceSet1070.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1071 = x3d.Coordinate()

IndexedFaceSet1070.coord = Coordinate1071

Shape1067.geometry = IndexedFaceSet1070

Scene15.children.append(Shape1067)
Shape1072 = x3d.Shape()
Appearance1073 = x3d.Appearance()
Material1074 = x3d.Material()
Material1074.ambientIntensity = 0
Material1074.diffuseColor = [0.784313738,0,0]
Material1074.shininess = 1

Appearance1073.material = Material1074

Shape1072.appearance = Appearance1073
IndexedFaceSet1075 = x3d.IndexedFaceSet()
IndexedFaceSet1075.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1075.solid = False
IndexedFaceSet1075.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1076 = x3d.Coordinate()

IndexedFaceSet1075.coord = Coordinate1076

Shape1072.geometry = IndexedFaceSet1075

Scene15.children.append(Shape1072)
Shape1077 = x3d.Shape()
Appearance1078 = x3d.Appearance()
Material1079 = x3d.Material()
Material1079.ambientIntensity = 0
Material1079.diffuseColor = [0.784313738,0,0]
Material1079.shininess = 1

Appearance1078.material = Material1079

Shape1077.appearance = Appearance1078
IndexedFaceSet1080 = x3d.IndexedFaceSet()
IndexedFaceSet1080.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1080.solid = False
IndexedFaceSet1080.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1081 = x3d.Coordinate()

IndexedFaceSet1080.coord = Coordinate1081

Shape1077.geometry = IndexedFaceSet1080

Scene15.children.append(Shape1077)
Shape1082 = x3d.Shape()
Appearance1083 = x3d.Appearance()
Material1084 = x3d.Material()
Material1084.ambientIntensity = 0
Material1084.diffuseColor = [0.784313738,0,0]
Material1084.shininess = 1

Appearance1083.material = Material1084

Shape1082.appearance = Appearance1083
IndexedFaceSet1085 = x3d.IndexedFaceSet()
IndexedFaceSet1085.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1085.solid = False
IndexedFaceSet1085.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1086 = x3d.Coordinate()

IndexedFaceSet1085.coord = Coordinate1086

Shape1082.geometry = IndexedFaceSet1085

Scene15.children.append(Shape1082)
Shape1087 = x3d.Shape()
Appearance1088 = x3d.Appearance()
Material1089 = x3d.Material()
Material1089.ambientIntensity = 0
Material1089.diffuseColor = [0.784313738,0,0]
Material1089.shininess = 1

Appearance1088.material = Material1089

Shape1087.appearance = Appearance1088
IndexedFaceSet1090 = x3d.IndexedFaceSet()
IndexedFaceSet1090.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1090.solid = False
IndexedFaceSet1090.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1091 = x3d.Coordinate()

IndexedFaceSet1090.coord = Coordinate1091

Shape1087.geometry = IndexedFaceSet1090

Scene15.children.append(Shape1087)
Shape1092 = x3d.Shape()
Appearance1093 = x3d.Appearance()
Material1094 = x3d.Material()
Material1094.ambientIntensity = 0
Material1094.diffuseColor = [0.784313738,0,0]
Material1094.shininess = 1

Appearance1093.material = Material1094

Shape1092.appearance = Appearance1093
IndexedFaceSet1095 = x3d.IndexedFaceSet()
IndexedFaceSet1095.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1]
IndexedFaceSet1095.solid = False
IndexedFaceSet1095.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1]
Coordinate1096 = x3d.Coordinate()

IndexedFaceSet1095.coord = Coordinate1096

Shape1092.geometry = IndexedFaceSet1095

Scene15.children.append(Shape1092)
Shape1097 = x3d.Shape()
Appearance1098 = x3d.Appearance()
Material1099 = x3d.Material()
Material1099.ambientIntensity = 0
Material1099.diffuseColor = [0.784313738,0,0]
Material1099.shininess = 1

Appearance1098.material = Material1099

Shape1097.appearance = Appearance1098
IndexedFaceSet1100 = x3d.IndexedFaceSet()
IndexedFaceSet1100.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1]
IndexedFaceSet1100.solid = False
IndexedFaceSet1100.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1]
Coordinate1101 = x3d.Coordinate()

IndexedFaceSet1100.coord = Coordinate1101

Shape1097.geometry = IndexedFaceSet1100

Scene15.children.append(Shape1097)
Shape1102 = x3d.Shape()
Appearance1103 = x3d.Appearance()
Material1104 = x3d.Material()
Material1104.ambientIntensity = 0
Material1104.diffuseColor = [0.784313738,0,0]
Material1104.shininess = 1

Appearance1103.material = Material1104

Shape1102.appearance = Appearance1103
IndexedFaceSet1105 = x3d.IndexedFaceSet()
IndexedFaceSet1105.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet1105.solid = False
IndexedFaceSet1105.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
Coordinate1106 = x3d.Coordinate()

IndexedFaceSet1105.coord = Coordinate1106

Shape1102.geometry = IndexedFaceSet1105

Scene15.children.append(Shape1102)
Shape1107 = x3d.Shape()
Appearance1108 = x3d.Appearance()
Material1109 = x3d.Material()
Material1109.ambientIntensity = 0
Material1109.diffuseColor = [0.784313738,0,0]
Material1109.shininess = 1

Appearance1108.material = Material1109

Shape1107.appearance = Appearance1108
IndexedFaceSet1110 = x3d.IndexedFaceSet()
IndexedFaceSet1110.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet1110.solid = False
IndexedFaceSet1110.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
Coordinate1111 = x3d.Coordinate()

IndexedFaceSet1110.coord = Coordinate1111

Shape1107.geometry = IndexedFaceSet1110

Scene15.children.append(Shape1107)
Shape1112 = x3d.Shape()
Appearance1113 = x3d.Appearance()
Material1114 = x3d.Material()
Material1114.ambientIntensity = 0
Material1114.diffuseColor = [0.784313738,0,0]
Material1114.shininess = 1

Appearance1113.material = Material1114

Shape1112.appearance = Appearance1113
IndexedFaceSet1115 = x3d.IndexedFaceSet()
IndexedFaceSet1115.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1]
IndexedFaceSet1115.solid = False
IndexedFaceSet1115.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1]
Coordinate1116 = x3d.Coordinate()

IndexedFaceSet1115.coord = Coordinate1116

Shape1112.geometry = IndexedFaceSet1115

Scene15.children.append(Shape1112)
Shape1117 = x3d.Shape()
Appearance1118 = x3d.Appearance()
Material1119 = x3d.Material()
Material1119.ambientIntensity = 0
Material1119.diffuseColor = [0.784313738,0,0]
Material1119.shininess = 1

Appearance1118.material = Material1119

Shape1117.appearance = Appearance1118
IndexedFaceSet1120 = x3d.IndexedFaceSet()
IndexedFaceSet1120.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1]
IndexedFaceSet1120.solid = False
IndexedFaceSet1120.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1]
Coordinate1121 = x3d.Coordinate()

IndexedFaceSet1120.coord = Coordinate1121

Shape1117.geometry = IndexedFaceSet1120

Scene15.children.append(Shape1117)
Shape1122 = x3d.Shape()
Appearance1123 = x3d.Appearance()
Material1124 = x3d.Material()
Material1124.ambientIntensity = 0
Material1124.diffuseColor = [0.784313738,0,0]
Material1124.shininess = 1

Appearance1123.material = Material1124

Shape1122.appearance = Appearance1123
IndexedFaceSet1125 = x3d.IndexedFaceSet()
IndexedFaceSet1125.coordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
IndexedFaceSet1125.solid = False
IndexedFaceSet1125.texCoordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
Coordinate1126 = x3d.Coordinate()

IndexedFaceSet1125.coord = Coordinate1126

Shape1122.geometry = IndexedFaceSet1125

Scene15.children.append(Shape1122)
Shape1127 = x3d.Shape()
Appearance1128 = x3d.Appearance()
Material1129 = x3d.Material()
Material1129.ambientIntensity = 0
Material1129.diffuseColor = [0.784313738,0,0]
Material1129.shininess = 1

Appearance1128.material = Material1129

Shape1127.appearance = Appearance1128
IndexedFaceSet1130 = x3d.IndexedFaceSet()
IndexedFaceSet1130.coordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
IndexedFaceSet1130.solid = False
IndexedFaceSet1130.texCoordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
Coordinate1131 = x3d.Coordinate()

IndexedFaceSet1130.coord = Coordinate1131

Shape1127.geometry = IndexedFaceSet1130

Scene15.children.append(Shape1127)
Shape1132 = x3d.Shape()
Appearance1133 = x3d.Appearance()
Material1134 = x3d.Material()
Material1134.ambientIntensity = 0
Material1134.diffuseColor = [0.784313738,0,0]
Material1134.shininess = 1

Appearance1133.material = Material1134

Shape1132.appearance = Appearance1133
IndexedFaceSet1135 = x3d.IndexedFaceSet()
IndexedFaceSet1135.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1]
IndexedFaceSet1135.solid = False
IndexedFaceSet1135.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1]
Coordinate1136 = x3d.Coordinate()

IndexedFaceSet1135.coord = Coordinate1136

Shape1132.geometry = IndexedFaceSet1135

Scene15.children.append(Shape1132)
Shape1137 = x3d.Shape()
Appearance1138 = x3d.Appearance()
Material1139 = x3d.Material()
Material1139.ambientIntensity = 0
Material1139.diffuseColor = [0.784313738,0,0]
Material1139.shininess = 1

Appearance1138.material = Material1139

Shape1137.appearance = Appearance1138
IndexedFaceSet1140 = x3d.IndexedFaceSet()
IndexedFaceSet1140.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1140.solid = False
IndexedFaceSet1140.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1141 = x3d.Coordinate()

IndexedFaceSet1140.coord = Coordinate1141

Shape1137.geometry = IndexedFaceSet1140

Scene15.children.append(Shape1137)
Shape1142 = x3d.Shape()
Appearance1143 = x3d.Appearance()
Material1144 = x3d.Material()
Material1144.ambientIntensity = 0
Material1144.diffuseColor = [0.784313738,0,0]
Material1144.shininess = 1

Appearance1143.material = Material1144

Shape1142.appearance = Appearance1143
IndexedFaceSet1145 = x3d.IndexedFaceSet()
IndexedFaceSet1145.coordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
IndexedFaceSet1145.solid = False
IndexedFaceSet1145.texCoordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
Coordinate1146 = x3d.Coordinate()

IndexedFaceSet1145.coord = Coordinate1146

Shape1142.geometry = IndexedFaceSet1145

Scene15.children.append(Shape1142)
Shape1147 = x3d.Shape()
Appearance1148 = x3d.Appearance()
Material1149 = x3d.Material()
Material1149.ambientIntensity = 0
Material1149.diffuseColor = [0.784313738,0,0]
Material1149.shininess = 1

Appearance1148.material = Material1149

Shape1147.appearance = Appearance1148
IndexedFaceSet1150 = x3d.IndexedFaceSet()
IndexedFaceSet1150.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,25,28,30,-1,25,30,27,-1,28,22,29,-1,28,29,30,-1,33,32,22,-1,33,22,28,-1,31,33,28,-1,31,28,25,-1,30,29,21,-1,33,23,32,-1,30,21,24,-1,26,33,31,-1,23,33,26,-1,24,27,30,-1]
IndexedFaceSet1150.solid = False
IndexedFaceSet1150.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,25,28,30,-1,25,30,27,-1,28,22,29,-1,28,29,30,-1,33,32,22,-1,33,22,28,-1,31,33,28,-1,31,28,25,-1,30,29,21,-1,33,23,32,-1,30,21,24,-1,26,33,31,-1,23,33,26,-1,24,27,30,-1]
Coordinate1151 = x3d.Coordinate()

IndexedFaceSet1150.coord = Coordinate1151

Shape1147.geometry = IndexedFaceSet1150

Scene15.children.append(Shape1147)
Shape1152 = x3d.Shape()
Appearance1153 = x3d.Appearance()
Material1154 = x3d.Material()
Material1154.ambientIntensity = 0
Material1154.diffuseColor = [0.784313738,0,0]
Material1154.shininess = 1

Appearance1153.material = Material1154

Shape1152.appearance = Appearance1153
IndexedFaceSet1155 = x3d.IndexedFaceSet()
IndexedFaceSet1155.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1]
IndexedFaceSet1155.solid = False
IndexedFaceSet1155.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1]
Coordinate1156 = x3d.Coordinate()

IndexedFaceSet1155.coord = Coordinate1156

Shape1152.geometry = IndexedFaceSet1155

Scene15.children.append(Shape1152)
Shape1157 = x3d.Shape()
Appearance1158 = x3d.Appearance()
Material1159 = x3d.Material()
Material1159.ambientIntensity = 0
Material1159.diffuseColor = [0.784313738,0,0]
Material1159.shininess = 1

Appearance1158.material = Material1159

Shape1157.appearance = Appearance1158
IndexedFaceSet1160 = x3d.IndexedFaceSet()
IndexedFaceSet1160.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1]
IndexedFaceSet1160.solid = False
IndexedFaceSet1160.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1]
Coordinate1161 = x3d.Coordinate()

IndexedFaceSet1160.coord = Coordinate1161

Shape1157.geometry = IndexedFaceSet1160

Scene15.children.append(Shape1157)
Shape1162 = x3d.Shape()
Appearance1163 = x3d.Appearance()
Material1164 = x3d.Material()
Material1164.ambientIntensity = 0
Material1164.diffuseColor = [0.784313738,0,0]
Material1164.shininess = 1

Appearance1163.material = Material1164

Shape1162.appearance = Appearance1163
IndexedFaceSet1165 = x3d.IndexedFaceSet()
IndexedFaceSet1165.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet1165.solid = False
IndexedFaceSet1165.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
Coordinate1166 = x3d.Coordinate()

IndexedFaceSet1165.coord = Coordinate1166

Shape1162.geometry = IndexedFaceSet1165

Scene15.children.append(Shape1162)
Shape1167 = x3d.Shape()
Appearance1168 = x3d.Appearance()
Material1169 = x3d.Material()
Material1169.ambientIntensity = 0
Material1169.diffuseColor = [0.784313738,0,0]
Material1169.shininess = 1

Appearance1168.material = Material1169

Shape1167.appearance = Appearance1168
IndexedFaceSet1170 = x3d.IndexedFaceSet()
IndexedFaceSet1170.coordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
IndexedFaceSet1170.solid = False
IndexedFaceSet1170.texCoordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
Coordinate1171 = x3d.Coordinate()

IndexedFaceSet1170.coord = Coordinate1171

Shape1167.geometry = IndexedFaceSet1170

Scene15.children.append(Shape1167)
Shape1172 = x3d.Shape()
Appearance1173 = x3d.Appearance()
Material1174 = x3d.Material()
Material1174.ambientIntensity = 0
Material1174.diffuseColor = [0.784313738,0,0]
Material1174.shininess = 1

Appearance1173.material = Material1174

Shape1172.appearance = Appearance1173
IndexedFaceSet1175 = x3d.IndexedFaceSet()
IndexedFaceSet1175.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1]
IndexedFaceSet1175.solid = False
IndexedFaceSet1175.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1]
Coordinate1176 = x3d.Coordinate()

IndexedFaceSet1175.coord = Coordinate1176

Shape1172.geometry = IndexedFaceSet1175

Scene15.children.append(Shape1172)
Shape1177 = x3d.Shape()
Appearance1178 = x3d.Appearance()
Material1179 = x3d.Material()
Material1179.ambientIntensity = 0
Material1179.diffuseColor = [0.784313738,0,0]
Material1179.shininess = 1

Appearance1178.material = Material1179

Shape1177.appearance = Appearance1178
IndexedFaceSet1180 = x3d.IndexedFaceSet()
IndexedFaceSet1180.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1]
IndexedFaceSet1180.solid = False
IndexedFaceSet1180.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1]
Coordinate1181 = x3d.Coordinate()

IndexedFaceSet1180.coord = Coordinate1181

Shape1177.geometry = IndexedFaceSet1180

Scene15.children.append(Shape1177)
Shape1182 = x3d.Shape()
Appearance1183 = x3d.Appearance()
Material1184 = x3d.Material()
Material1184.ambientIntensity = 0
Material1184.diffuseColor = [0.784313738,0,0]
Material1184.shininess = 1

Appearance1183.material = Material1184

Shape1182.appearance = Appearance1183
IndexedFaceSet1185 = x3d.IndexedFaceSet()
IndexedFaceSet1185.coordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
IndexedFaceSet1185.solid = False
IndexedFaceSet1185.texCoordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
Coordinate1186 = x3d.Coordinate()

IndexedFaceSet1185.coord = Coordinate1186

Shape1182.geometry = IndexedFaceSet1185

Scene15.children.append(Shape1182)
Shape1187 = x3d.Shape()
Appearance1188 = x3d.Appearance()
Material1189 = x3d.Material()
Material1189.ambientIntensity = 0
Material1189.diffuseColor = [0.784313738,0,0]
Material1189.shininess = 1

Appearance1188.material = Material1189

Shape1187.appearance = Appearance1188
IndexedFaceSet1190 = x3d.IndexedFaceSet()
IndexedFaceSet1190.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet1190.solid = False
IndexedFaceSet1190.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
Coordinate1191 = x3d.Coordinate()

IndexedFaceSet1190.coord = Coordinate1191

Shape1187.geometry = IndexedFaceSet1190

Scene15.children.append(Shape1187)
Shape1192 = x3d.Shape()
Appearance1193 = x3d.Appearance()
Material1194 = x3d.Material()
Material1194.ambientIntensity = 0
Material1194.diffuseColor = [0.784313738,0,0]
Material1194.shininess = 1

Appearance1193.material = Material1194

Shape1192.appearance = Appearance1193
IndexedFaceSet1195 = x3d.IndexedFaceSet()
IndexedFaceSet1195.coordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
IndexedFaceSet1195.solid = False
IndexedFaceSet1195.texCoordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
Coordinate1196 = x3d.Coordinate()

IndexedFaceSet1195.coord = Coordinate1196

Shape1192.geometry = IndexedFaceSet1195

Scene15.children.append(Shape1192)
Shape1197 = x3d.Shape()
Appearance1198 = x3d.Appearance()
Material1199 = x3d.Material()
Material1199.ambientIntensity = 0
Material1199.diffuseColor = [0.784313738,0,0]
Material1199.shininess = 1

Appearance1198.material = Material1199

Shape1197.appearance = Appearance1198
IndexedFaceSet1200 = x3d.IndexedFaceSet()
IndexedFaceSet1200.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1]
IndexedFaceSet1200.solid = False
IndexedFaceSet1200.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1]
Coordinate1201 = x3d.Coordinate()

IndexedFaceSet1200.coord = Coordinate1201

Shape1197.geometry = IndexedFaceSet1200

Scene15.children.append(Shape1197)
Shape1202 = x3d.Shape()
Appearance1203 = x3d.Appearance()
Material1204 = x3d.Material()
Material1204.ambientIntensity = 0
Material1204.diffuseColor = [0.784313738,0,0]
Material1204.shininess = 1

Appearance1203.material = Material1204

Shape1202.appearance = Appearance1203
IndexedFaceSet1205 = x3d.IndexedFaceSet()
IndexedFaceSet1205.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1]
IndexedFaceSet1205.solid = False
IndexedFaceSet1205.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1]
Coordinate1206 = x3d.Coordinate()

IndexedFaceSet1205.coord = Coordinate1206

Shape1202.geometry = IndexedFaceSet1205

Scene15.children.append(Shape1202)
Shape1207 = x3d.Shape()
Appearance1208 = x3d.Appearance()
Material1209 = x3d.Material()
Material1209.ambientIntensity = 0
Material1209.diffuseColor = [0.784313738,0,0]
Material1209.shininess = 1

Appearance1208.material = Material1209

Shape1207.appearance = Appearance1208
IndexedFaceSet1210 = x3d.IndexedFaceSet()
IndexedFaceSet1210.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet1210.solid = False
IndexedFaceSet1210.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
Coordinate1211 = x3d.Coordinate()

IndexedFaceSet1210.coord = Coordinate1211

Shape1207.geometry = IndexedFaceSet1210

Scene15.children.append(Shape1207)
Shape1212 = x3d.Shape()
Appearance1213 = x3d.Appearance()
Material1214 = x3d.Material()
Material1214.ambientIntensity = 0
Material1214.diffuseColor = [0.784313738,0,0]
Material1214.shininess = 1

Appearance1213.material = Material1214

Shape1212.appearance = Appearance1213
IndexedFaceSet1215 = x3d.IndexedFaceSet()
IndexedFaceSet1215.coordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet1215.solid = False
IndexedFaceSet1215.texCoordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
Coordinate1216 = x3d.Coordinate()

IndexedFaceSet1215.coord = Coordinate1216

Shape1212.geometry = IndexedFaceSet1215

Scene15.children.append(Shape1212)
Shape1217 = x3d.Shape()
Appearance1218 = x3d.Appearance()
Material1219 = x3d.Material()
Material1219.ambientIntensity = 0
Material1219.diffuseColor = [0.784313738,0,0]
Material1219.shininess = 1

Appearance1218.material = Material1219

Shape1217.appearance = Appearance1218
IndexedFaceSet1220 = x3d.IndexedFaceSet()
IndexedFaceSet1220.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1]
IndexedFaceSet1220.solid = False
IndexedFaceSet1220.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1]
Coordinate1221 = x3d.Coordinate()

IndexedFaceSet1220.coord = Coordinate1221

Shape1217.geometry = IndexedFaceSet1220

Scene15.children.append(Shape1217)
Shape1222 = x3d.Shape()
Appearance1223 = x3d.Appearance()
Material1224 = x3d.Material()
Material1224.ambientIntensity = 0
Material1224.diffuseColor = [0.784313738,0,0]
Material1224.shininess = 1

Appearance1223.material = Material1224

Shape1222.appearance = Appearance1223
IndexedFaceSet1225 = x3d.IndexedFaceSet()
IndexedFaceSet1225.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,35,-1,34,35,36,-1,38,37,39,-1,38,39,40,-1]
IndexedFaceSet1225.solid = False
IndexedFaceSet1225.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,35,-1,34,35,36,-1,38,37,39,-1,38,39,40,-1]
Coordinate1226 = x3d.Coordinate()

IndexedFaceSet1225.coord = Coordinate1226

Shape1222.geometry = IndexedFaceSet1225

Scene15.children.append(Shape1222)
Shape1227 = x3d.Shape()
Appearance1228 = x3d.Appearance()
Material1229 = x3d.Material()
Material1229.ambientIntensity = 0
Material1229.diffuseColor = [0.784313738,0,0]
Material1229.shininess = 1

Appearance1228.material = Material1229

Shape1227.appearance = Appearance1228
IndexedFaceSet1230 = x3d.IndexedFaceSet()
IndexedFaceSet1230.coordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
IndexedFaceSet1230.solid = False
IndexedFaceSet1230.texCoordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
Coordinate1231 = x3d.Coordinate()

IndexedFaceSet1230.coord = Coordinate1231

Shape1227.geometry = IndexedFaceSet1230

Scene15.children.append(Shape1227)
Shape1232 = x3d.Shape()
Appearance1233 = x3d.Appearance()
Material1234 = x3d.Material()
Material1234.ambientIntensity = 0
Material1234.diffuseColor = [0.784313738,0,0]
Material1234.shininess = 1

Appearance1233.material = Material1234

Shape1232.appearance = Appearance1233
IndexedFaceSet1235 = x3d.IndexedFaceSet()
IndexedFaceSet1235.coordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
IndexedFaceSet1235.solid = False
IndexedFaceSet1235.texCoordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
Coordinate1236 = x3d.Coordinate()

IndexedFaceSet1235.coord = Coordinate1236

Shape1232.geometry = IndexedFaceSet1235

Scene15.children.append(Shape1232)
Shape1237 = x3d.Shape()
Appearance1238 = x3d.Appearance()
Material1239 = x3d.Material()
Material1239.ambientIntensity = 0
Material1239.diffuseColor = [0.784313738,0,0]
Material1239.shininess = 1

Appearance1238.material = Material1239

Shape1237.appearance = Appearance1238
IndexedFaceSet1240 = x3d.IndexedFaceSet()
IndexedFaceSet1240.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,36,-1,34,36,37,-1,35,34,37,-1,35,37,38,-1,54,45,43,-1,46,48,54,-1,43,46,54,-1,50,48,46,-1,40,47,50,-1,46,40,50,-1,48,50,52,-1,48,52,49,-1,50,47,51,-1,50,51,52,-1,45,54,55,-1,45,55,53,-1,54,48,49,-1,54,49,55,-1,62,60,58,-1,62,58,61,-1,59,62,61,-1,59,61,56,-1,65,63,57,-1,65,57,64,-1,60,65,64,-1,60,64,58,-1,64,57,40,-1,46,58,64,-1,40,46,64,-1,61,58,46,-1,43,56,61,-1,46,43,61,-1,51,39,52,-1,49,52,39,-1,65,41,63,-1,60,41,65,-1,49,39,42,-1,53,55,42,-1,49,42,55,-1,44,60,62,-1,62,59,44,-1,41,60,44,-1]
IndexedFaceSet1240.solid = False
IndexedFaceSet1240.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,36,-1,34,36,37,-1,35,34,37,-1,35,37,38,-1,54,45,43,-1,46,48,54,-1,43,46,54,-1,50,48,46,-1,40,47,50,-1,46,40,50,-1,48,50,52,-1,48,52,49,-1,50,47,51,-1,50,51,52,-1,45,54,55,-1,45,55,53,-1,54,48,49,-1,54,49,55,-1,62,60,58,-1,62,58,61,-1,59,62,61,-1,59,61,56,-1,65,63,57,-1,65,57,64,-1,60,65,64,-1,60,64,58,-1,64,57,40,-1,46,58,64,-1,40,46,64,-1,61,58,46,-1,43,56,61,-1,46,43,61,-1,51,39,52,-1,49,52,39,-1,65,41,63,-1,60,41,65,-1,49,39,42,-1,53,55,42,-1,49,42,55,-1,44,60,62,-1,62,59,44,-1,41,60,44,-1]
Coordinate1241 = x3d.Coordinate()

IndexedFaceSet1240.coord = Coordinate1241

Shape1237.geometry = IndexedFaceSet1240

Scene15.children.append(Shape1237)
Shape1242 = x3d.Shape()
Appearance1243 = x3d.Appearance()
Material1244 = x3d.Material()
Material1244.ambientIntensity = 0
Material1244.diffuseColor = [0.784313738,0,0]
Material1244.shininess = 1

Appearance1243.material = Material1244

Shape1242.appearance = Appearance1243
IndexedFaceSet1245 = x3d.IndexedFaceSet()
IndexedFaceSet1245.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
IndexedFaceSet1245.solid = False
IndexedFaceSet1245.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
Coordinate1246 = x3d.Coordinate()

IndexedFaceSet1245.coord = Coordinate1246

Shape1242.geometry = IndexedFaceSet1245

Scene15.children.append(Shape1242)
Shape1247 = x3d.Shape()
Appearance1248 = x3d.Appearance()
Material1249 = x3d.Material()
Material1249.ambientIntensity = 0
Material1249.diffuseColor = [0.784313738,0,0]
Material1249.shininess = 1

Appearance1248.material = Material1249

Shape1247.appearance = Appearance1248
IndexedFaceSet1250 = x3d.IndexedFaceSet()
IndexedFaceSet1250.coordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
IndexedFaceSet1250.solid = False
IndexedFaceSet1250.texCoordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1]
Coordinate1251 = x3d.Coordinate()

IndexedFaceSet1250.coord = Coordinate1251

Shape1247.geometry = IndexedFaceSet1250

Scene15.children.append(Shape1247)
Shape1252 = x3d.Shape()
Appearance1253 = x3d.Appearance()
Material1254 = x3d.Material()
Material1254.ambientIntensity = 0
Material1254.diffuseColor = [0.784313738,0,0]
Material1254.shininess = 1

Appearance1253.material = Material1254

Shape1252.appearance = Appearance1253
IndexedFaceSet1255 = x3d.IndexedFaceSet()
IndexedFaceSet1255.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet1255.solid = False
IndexedFaceSet1255.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
Coordinate1256 = x3d.Coordinate()

IndexedFaceSet1255.coord = Coordinate1256

Shape1252.geometry = IndexedFaceSet1255

Scene15.children.append(Shape1252)
Shape1257 = x3d.Shape()
Appearance1258 = x3d.Appearance()
Material1259 = x3d.Material()
Material1259.ambientIntensity = 0
Material1259.diffuseColor = [0.784313738,0,0]
Material1259.shininess = 1

Appearance1258.material = Material1259

Shape1257.appearance = Appearance1258
IndexedFaceSet1260 = x3d.IndexedFaceSet()
IndexedFaceSet1260.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1]
IndexedFaceSet1260.solid = False
IndexedFaceSet1260.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1]
Coordinate1261 = x3d.Coordinate()

IndexedFaceSet1260.coord = Coordinate1261

Shape1257.geometry = IndexedFaceSet1260

Scene15.children.append(Shape1257)
Shape1262 = x3d.Shape()
Appearance1263 = x3d.Appearance()
Material1264 = x3d.Material()
Material1264.ambientIntensity = 0
Material1264.diffuseColor = [0.784313738,0,0]
Material1264.shininess = 1

Appearance1263.material = Material1264

Shape1262.appearance = Appearance1263
IndexedFaceSet1265 = x3d.IndexedFaceSet()
IndexedFaceSet1265.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1]
IndexedFaceSet1265.solid = False
IndexedFaceSet1265.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1]
Coordinate1266 = x3d.Coordinate()

IndexedFaceSet1265.coord = Coordinate1266

Shape1262.geometry = IndexedFaceSet1265

Scene15.children.append(Shape1262)
Shape1267 = x3d.Shape()
Appearance1268 = x3d.Appearance()
Material1269 = x3d.Material()
Material1269.ambientIntensity = 0
Material1269.diffuseColor = [0.784313738,0,0]
Material1269.shininess = 1

Appearance1268.material = Material1269

Shape1267.appearance = Appearance1268
IndexedFaceSet1270 = x3d.IndexedFaceSet()
IndexedFaceSet1270.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1270.solid = False
IndexedFaceSet1270.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1271 = x3d.Coordinate()

IndexedFaceSet1270.coord = Coordinate1271

Shape1267.geometry = IndexedFaceSet1270

Scene15.children.append(Shape1267)
Shape1272 = x3d.Shape()
Appearance1273 = x3d.Appearance()
Material1274 = x3d.Material()
Material1274.ambientIntensity = 0
Material1274.diffuseColor = [0.784313738,0,0]
Material1274.shininess = 1

Appearance1273.material = Material1274

Shape1272.appearance = Appearance1273
IndexedFaceSet1275 = x3d.IndexedFaceSet()
IndexedFaceSet1275.coordIndex = [1,0,2,-1,1,2,3,-1,8,11,13,-1,8,13,10,-1,11,5,12,-1,11,12,13,-1,16,15,5,-1,16,5,11,-1,14,16,11,-1,14,11,8,-1,13,12,4,-1,16,6,15,-1,13,4,7,-1,9,16,14,-1,6,16,9,-1,7,10,13,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet1275.solid = False
IndexedFaceSet1275.texCoordIndex = [1,0,2,-1,1,2,3,-1,8,11,13,-1,8,13,10,-1,11,5,12,-1,11,12,13,-1,16,15,5,-1,16,5,11,-1,14,16,11,-1,14,11,8,-1,13,12,4,-1,16,6,15,-1,13,4,7,-1,9,16,14,-1,6,16,9,-1,7,10,13,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
Coordinate1276 = x3d.Coordinate()

IndexedFaceSet1275.coord = Coordinate1276

Shape1272.geometry = IndexedFaceSet1275

Scene15.children.append(Shape1272)
Shape1277 = x3d.Shape()
Appearance1278 = x3d.Appearance()
Material1279 = x3d.Material()
Material1279.ambientIntensity = 0
Material1279.diffuseColor = [0.784313738,0,0]
Material1279.shininess = 1

Appearance1278.material = Material1279

Shape1277.appearance = Appearance1278
IndexedFaceSet1280 = x3d.IndexedFaceSet()
IndexedFaceSet1280.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1]
IndexedFaceSet1280.solid = False
IndexedFaceSet1280.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1]
Coordinate1281 = x3d.Coordinate()

IndexedFaceSet1280.coord = Coordinate1281

Shape1277.geometry = IndexedFaceSet1280

Scene15.children.append(Shape1277)
Shape1282 = x3d.Shape()
Appearance1283 = x3d.Appearance()
Material1284 = x3d.Material()
Material1284.ambientIntensity = 0
Material1284.diffuseColor = [0.784313738,0,0]
Material1284.shininess = 1

Appearance1283.material = Material1284

Shape1282.appearance = Appearance1283
IndexedFaceSet1285 = x3d.IndexedFaceSet()
IndexedFaceSet1285.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,35,-1,34,35,36,-1,38,37,39,-1,38,39,40,-1]
IndexedFaceSet1285.solid = False
IndexedFaceSet1285.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,35,-1,34,35,36,-1,38,37,39,-1,38,39,40,-1]
Coordinate1286 = x3d.Coordinate()

IndexedFaceSet1285.coord = Coordinate1286

Shape1282.geometry = IndexedFaceSet1285

Scene15.children.append(Shape1282)
Shape1287 = x3d.Shape()
Appearance1288 = x3d.Appearance()
Material1289 = x3d.Material()
Material1289.ambientIntensity = 0
Material1289.diffuseColor = [0.784313738,0,0]
Material1289.shininess = 1

Appearance1288.material = Material1289

Shape1287.appearance = Appearance1288
IndexedFaceSet1290 = x3d.IndexedFaceSet()
IndexedFaceSet1290.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1290.solid = False
IndexedFaceSet1290.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1291 = x3d.Coordinate()

IndexedFaceSet1290.coord = Coordinate1291

Shape1287.geometry = IndexedFaceSet1290

Scene15.children.append(Shape1287)
Shape1292 = x3d.Shape()
Appearance1293 = x3d.Appearance()
Material1294 = x3d.Material()
Material1294.ambientIntensity = 0
Material1294.diffuseColor = [0.784313738,0,0]
Material1294.shininess = 1

Appearance1293.material = Material1294

Shape1292.appearance = Appearance1293
IndexedFaceSet1295 = x3d.IndexedFaceSet()
IndexedFaceSet1295.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1295.solid = False
IndexedFaceSet1295.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1296 = x3d.Coordinate()

IndexedFaceSet1295.coord = Coordinate1296

Shape1292.geometry = IndexedFaceSet1295

Scene15.children.append(Shape1292)
Shape1297 = x3d.Shape()
Appearance1298 = x3d.Appearance()
Material1299 = x3d.Material()
Material1299.ambientIntensity = 0
Material1299.diffuseColor = [0.784313738,0,0]
Material1299.shininess = 1

Appearance1298.material = Material1299

Shape1297.appearance = Appearance1298
IndexedFaceSet1300 = x3d.IndexedFaceSet()
IndexedFaceSet1300.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,35,-1,34,35,36,-1,52,43,41,-1,44,46,52,-1,41,44,52,-1,48,46,44,-1,38,45,48,-1,44,38,48,-1,46,48,50,-1,46,50,47,-1,48,45,49,-1,48,49,50,-1,43,52,53,-1,43,53,51,-1,52,46,47,-1,52,47,53,-1,60,58,56,-1,60,56,59,-1,57,60,59,-1,57,59,54,-1,63,61,55,-1,63,55,62,-1,58,63,62,-1,58,62,56,-1,62,55,38,-1,44,56,62,-1,38,44,62,-1,59,56,44,-1,41,54,59,-1,44,41,59,-1,49,37,50,-1,47,50,37,-1,63,39,61,-1,58,39,63,-1,47,37,40,-1,51,53,40,-1,47,40,53,-1,42,58,60,-1,60,57,42,-1,39,58,42,-1]
IndexedFaceSet1300.solid = False
IndexedFaceSet1300.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,35,-1,34,35,36,-1,52,43,41,-1,44,46,52,-1,41,44,52,-1,48,46,44,-1,38,45,48,-1,44,38,48,-1,46,48,50,-1,46,50,47,-1,48,45,49,-1,48,49,50,-1,43,52,53,-1,43,53,51,-1,52,46,47,-1,52,47,53,-1,60,58,56,-1,60,56,59,-1,57,60,59,-1,57,59,54,-1,63,61,55,-1,63,55,62,-1,58,63,62,-1,58,62,56,-1,62,55,38,-1,44,56,62,-1,38,44,62,-1,59,56,44,-1,41,54,59,-1,44,41,59,-1,49,37,50,-1,47,50,37,-1,63,39,61,-1,58,39,63,-1,47,37,40,-1,51,53,40,-1,47,40,53,-1,42,58,60,-1,60,57,42,-1,39,58,42,-1]
Coordinate1301 = x3d.Coordinate()

IndexedFaceSet1300.coord = Coordinate1301

Shape1297.geometry = IndexedFaceSet1300

Scene15.children.append(Shape1297)
Shape1302 = x3d.Shape()
Appearance1303 = x3d.Appearance()
Material1304 = x3d.Material()
Material1304.ambientIntensity = 0
Material1304.diffuseColor = [0.784313738,0,0]
Material1304.shininess = 1

Appearance1303.material = Material1304

Shape1302.appearance = Appearance1303
IndexedFaceSet1305 = x3d.IndexedFaceSet()
IndexedFaceSet1305.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,35,-1,34,35,36,-1,52,43,41,-1,44,46,52,-1,41,44,52,-1,48,46,44,-1,38,45,48,-1,44,38,48,-1,46,48,50,-1,46,50,47,-1,48,45,49,-1,48,49,50,-1,43,52,53,-1,43,53,51,-1,52,46,47,-1,52,47,53,-1,60,58,56,-1,60,56,59,-1,57,60,59,-1,57,59,54,-1,63,61,55,-1,63,55,62,-1,58,63,62,-1,58,62,56,-1,62,55,38,-1,44,56,62,-1,38,44,62,-1,59,56,44,-1,41,54,59,-1,44,41,59,-1,49,37,50,-1,47,50,37,-1,63,39,61,-1,58,39,63,-1,47,37,40,-1,51,53,40,-1,47,40,53,-1,42,58,60,-1,60,57,42,-1,39,58,42,-1]
IndexedFaceSet1305.solid = False
IndexedFaceSet1305.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,35,-1,34,35,36,-1,52,43,41,-1,44,46,52,-1,41,44,52,-1,48,46,44,-1,38,45,48,-1,44,38,48,-1,46,48,50,-1,46,50,47,-1,48,45,49,-1,48,49,50,-1,43,52,53,-1,43,53,51,-1,52,46,47,-1,52,47,53,-1,60,58,56,-1,60,56,59,-1,57,60,59,-1,57,59,54,-1,63,61,55,-1,63,55,62,-1,58,63,62,-1,58,62,56,-1,62,55,38,-1,44,56,62,-1,38,44,62,-1,59,56,44,-1,41,54,59,-1,44,41,59,-1,49,37,50,-1,47,50,37,-1,63,39,61,-1,58,39,63,-1,47,37,40,-1,51,53,40,-1,47,40,53,-1,42,58,60,-1,60,57,42,-1,39,58,42,-1]
Coordinate1306 = x3d.Coordinate()

IndexedFaceSet1305.coord = Coordinate1306

Shape1302.geometry = IndexedFaceSet1305

Scene15.children.append(Shape1302)
Shape1307 = x3d.Shape()
Appearance1308 = x3d.Appearance()
Material1309 = x3d.Material()
Material1309.ambientIntensity = 0
Material1309.diffuseColor = [0.784313738,0,0]
Material1309.shininess = 1

Appearance1308.material = Material1309

Shape1307.appearance = Appearance1308
IndexedFaceSet1310 = x3d.IndexedFaceSet()
IndexedFaceSet1310.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1310.solid = False
IndexedFaceSet1310.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1311 = x3d.Coordinate()

IndexedFaceSet1310.coord = Coordinate1311

Shape1307.geometry = IndexedFaceSet1310

Scene15.children.append(Shape1307)
Shape1312 = x3d.Shape()
Appearance1313 = x3d.Appearance()
Material1314 = x3d.Material()
Material1314.ambientIntensity = 0
Material1314.diffuseColor = [0.784313738,0,0]
Material1314.shininess = 1

Appearance1313.material = Material1314

Shape1312.appearance = Appearance1313
IndexedFaceSet1315 = x3d.IndexedFaceSet()
IndexedFaceSet1315.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1315.solid = False
IndexedFaceSet1315.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1316 = x3d.Coordinate()

IndexedFaceSet1315.coord = Coordinate1316

Shape1312.geometry = IndexedFaceSet1315

Scene15.children.append(Shape1312)
Shape1317 = x3d.Shape()
Appearance1318 = x3d.Appearance()
Material1319 = x3d.Material()
Material1319.ambientIntensity = 0
Material1319.diffuseColor = [0.784313738,0,0]
Material1319.shininess = 1

Appearance1318.material = Material1319

Shape1317.appearance = Appearance1318
IndexedFaceSet1320 = x3d.IndexedFaceSet()
IndexedFaceSet1320.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1320.solid = False
IndexedFaceSet1320.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1321 = x3d.Coordinate()

IndexedFaceSet1320.coord = Coordinate1321

Shape1317.geometry = IndexedFaceSet1320

Scene15.children.append(Shape1317)
Shape1322 = x3d.Shape()
Appearance1323 = x3d.Appearance()
Material1324 = x3d.Material()
Material1324.ambientIntensity = 0
Material1324.diffuseColor = [0.784313738,0,0]
Material1324.shininess = 1

Appearance1323.material = Material1324

Shape1322.appearance = Appearance1323
IndexedFaceSet1325 = x3d.IndexedFaceSet()
IndexedFaceSet1325.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,34,-1,32,34,35,-1,33,32,35,-1,33,35,36,-1,38,37,39,-1,38,39,40,-1]
IndexedFaceSet1325.solid = False
IndexedFaceSet1325.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,34,-1,32,34,35,-1,33,32,35,-1,33,35,36,-1,38,37,39,-1,38,39,40,-1]
Coordinate1326 = x3d.Coordinate()

IndexedFaceSet1325.coord = Coordinate1326

Shape1322.geometry = IndexedFaceSet1325

Scene15.children.append(Shape1322)
Shape1327 = x3d.Shape()
Appearance1328 = x3d.Appearance()
Material1329 = x3d.Material()
Material1329.ambientIntensity = 0
Material1329.diffuseColor = [0.784313738,0,0]
Material1329.shininess = 1

Appearance1328.material = Material1329

Shape1327.appearance = Appearance1328
IndexedFaceSet1330 = x3d.IndexedFaceSet()
IndexedFaceSet1330.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1330.solid = False
IndexedFaceSet1330.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1331 = x3d.Coordinate()

IndexedFaceSet1330.coord = Coordinate1331

Shape1327.geometry = IndexedFaceSet1330

Scene15.children.append(Shape1327)
Shape1332 = x3d.Shape()
Appearance1333 = x3d.Appearance()
Material1334 = x3d.Material()
Material1334.ambientIntensity = 0
Material1334.diffuseColor = [0.784313738,0,0]
Material1334.shininess = 1

Appearance1333.material = Material1334

Shape1332.appearance = Appearance1333
IndexedFaceSet1335 = x3d.IndexedFaceSet()
IndexedFaceSet1335.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1335.solid = False
IndexedFaceSet1335.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1336 = x3d.Coordinate()

IndexedFaceSet1335.coord = Coordinate1336

Shape1332.geometry = IndexedFaceSet1335

Scene15.children.append(Shape1332)
Shape1337 = x3d.Shape()
Appearance1338 = x3d.Appearance()
Material1339 = x3d.Material()
Material1339.ambientIntensity = 0
Material1339.diffuseColor = [0.784313738,0,0]
Material1339.shininess = 1

Appearance1338.material = Material1339

Shape1337.appearance = Appearance1338
IndexedFaceSet1340 = x3d.IndexedFaceSet()
IndexedFaceSet1340.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,34,-1,32,34,35,-1,33,32,35,-1,33,35,36,-1,38,37,39,-1,38,39,40,-1]
IndexedFaceSet1340.solid = False
IndexedFaceSet1340.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,34,-1,32,34,35,-1,33,32,35,-1,33,35,36,-1,38,37,39,-1,38,39,40,-1]
Coordinate1341 = x3d.Coordinate()

IndexedFaceSet1340.coord = Coordinate1341

Shape1337.geometry = IndexedFaceSet1340

Scene15.children.append(Shape1337)
Shape1342 = x3d.Shape()
Appearance1343 = x3d.Appearance()
Material1344 = x3d.Material()
Material1344.ambientIntensity = 0
Material1344.diffuseColor = [0.784313738,0,0]
Material1344.shininess = 1

Appearance1343.material = Material1344

Shape1342.appearance = Appearance1343
IndexedFaceSet1345 = x3d.IndexedFaceSet()
IndexedFaceSet1345.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1345.solid = False
IndexedFaceSet1345.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1346 = x3d.Coordinate()

IndexedFaceSet1345.coord = Coordinate1346

Shape1342.geometry = IndexedFaceSet1345

Scene15.children.append(Shape1342)
Shape1347 = x3d.Shape()
Appearance1348 = x3d.Appearance()
Material1349 = x3d.Material()
Material1349.ambientIntensity = 0
Material1349.diffuseColor = [0.784313738,0,0]
Material1349.shininess = 1

Appearance1348.material = Material1349

Shape1347.appearance = Appearance1348
IndexedFaceSet1350 = x3d.IndexedFaceSet()
IndexedFaceSet1350.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1350.solid = False
IndexedFaceSet1350.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1351 = x3d.Coordinate()

IndexedFaceSet1350.coord = Coordinate1351

Shape1347.geometry = IndexedFaceSet1350

Scene15.children.append(Shape1347)
Shape1352 = x3d.Shape()
Appearance1353 = x3d.Appearance()
Material1354 = x3d.Material()
Material1354.ambientIntensity = 0
Material1354.diffuseColor = [0.784313738,0,0]
Material1354.shininess = 1

Appearance1353.material = Material1354

Shape1352.appearance = Appearance1353
IndexedFaceSet1355 = x3d.IndexedFaceSet()
IndexedFaceSet1355.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1355.solid = False
IndexedFaceSet1355.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1356 = x3d.Coordinate()

IndexedFaceSet1355.coord = Coordinate1356

Shape1352.geometry = IndexedFaceSet1355

Scene15.children.append(Shape1352)
Shape1357 = x3d.Shape()
Appearance1358 = x3d.Appearance()
Material1359 = x3d.Material()
Material1359.ambientIntensity = 0
Material1359.diffuseColor = [0.784313738,0,0]
Material1359.shininess = 1

Appearance1358.material = Material1359

Shape1357.appearance = Appearance1358
IndexedFaceSet1360 = x3d.IndexedFaceSet()
IndexedFaceSet1360.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
IndexedFaceSet1360.solid = False
IndexedFaceSet1360.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
Coordinate1361 = x3d.Coordinate()

IndexedFaceSet1360.coord = Coordinate1361

Shape1357.geometry = IndexedFaceSet1360

Scene15.children.append(Shape1357)
Shape1362 = x3d.Shape()
Appearance1363 = x3d.Appearance()
Material1364 = x3d.Material()
Material1364.ambientIntensity = 0
Material1364.diffuseColor = [0.784313738,0,0]
Material1364.shininess = 1

Appearance1363.material = Material1364

Shape1362.appearance = Appearance1363
IndexedFaceSet1365 = x3d.IndexedFaceSet()
IndexedFaceSet1365.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
IndexedFaceSet1365.solid = False
IndexedFaceSet1365.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
Coordinate1366 = x3d.Coordinate()

IndexedFaceSet1365.coord = Coordinate1366

Shape1362.geometry = IndexedFaceSet1365

Scene15.children.append(Shape1362)
Shape1367 = x3d.Shape()
Appearance1368 = x3d.Appearance()
Material1369 = x3d.Material()
Material1369.ambientIntensity = 0
Material1369.diffuseColor = [0.784313738,0,0]
Material1369.shininess = 1

Appearance1368.material = Material1369

Shape1367.appearance = Appearance1368
IndexedFaceSet1370 = x3d.IndexedFaceSet()
IndexedFaceSet1370.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1370.solid = False
IndexedFaceSet1370.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1371 = x3d.Coordinate()

IndexedFaceSet1370.coord = Coordinate1371

Shape1367.geometry = IndexedFaceSet1370

Scene15.children.append(Shape1367)
Shape1372 = x3d.Shape()
Appearance1373 = x3d.Appearance()
Material1374 = x3d.Material()
Material1374.ambientIntensity = 0
Material1374.diffuseColor = [0.784313738,0,0]
Material1374.shininess = 1

Appearance1373.material = Material1374

Shape1372.appearance = Appearance1373
IndexedFaceSet1375 = x3d.IndexedFaceSet()
IndexedFaceSet1375.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1375.solid = False
IndexedFaceSet1375.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1376 = x3d.Coordinate()

IndexedFaceSet1375.coord = Coordinate1376

Shape1372.geometry = IndexedFaceSet1375

Scene15.children.append(Shape1372)
Shape1377 = x3d.Shape()
Appearance1378 = x3d.Appearance()
Material1379 = x3d.Material()
Material1379.ambientIntensity = 0
Material1379.diffuseColor = [0.784313738,0,0]
Material1379.shininess = 1

Appearance1378.material = Material1379

Shape1377.appearance = Appearance1378
IndexedFaceSet1380 = x3d.IndexedFaceSet()
IndexedFaceSet1380.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1380.solid = False
IndexedFaceSet1380.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1381 = x3d.Coordinate()

IndexedFaceSet1380.coord = Coordinate1381

Shape1377.geometry = IndexedFaceSet1380

Scene15.children.append(Shape1377)
Shape1382 = x3d.Shape()
Appearance1383 = x3d.Appearance()
Material1384 = x3d.Material()
Material1384.ambientIntensity = 0
Material1384.diffuseColor = [0.784313738,0,0]
Material1384.shininess = 1

Appearance1383.material = Material1384

Shape1382.appearance = Appearance1383
IndexedFaceSet1385 = x3d.IndexedFaceSet()
IndexedFaceSet1385.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1385.solid = False
IndexedFaceSet1385.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1386 = x3d.Coordinate()

IndexedFaceSet1385.coord = Coordinate1386

Shape1382.geometry = IndexedFaceSet1385

Scene15.children.append(Shape1382)
Shape1387 = x3d.Shape()
Appearance1388 = x3d.Appearance()
Material1389 = x3d.Material()
Material1389.ambientIntensity = 0
Material1389.diffuseColor = [0.784313738,0,0]
Material1389.shininess = 1

Appearance1388.material = Material1389

Shape1387.appearance = Appearance1388
IndexedFaceSet1390 = x3d.IndexedFaceSet()
IndexedFaceSet1390.coordIndex = [1,0,2,-1,1,2,3,-1,8,11,13,-1,8,13,10,-1,11,5,12,-1,11,12,13,-1,16,15,5,-1,16,5,11,-1,14,16,11,-1,14,11,8,-1,13,12,4,-1,16,6,15,-1,13,4,7,-1,9,16,14,-1,6,16,9,-1,7,10,13,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet1390.solid = False
IndexedFaceSet1390.texCoordIndex = [1,0,2,-1,1,2,3,-1,8,11,13,-1,8,13,10,-1,11,5,12,-1,11,12,13,-1,16,15,5,-1,16,5,11,-1,14,16,11,-1,14,11,8,-1,13,12,4,-1,16,6,15,-1,13,4,7,-1,9,16,14,-1,6,16,9,-1,7,10,13,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
Coordinate1391 = x3d.Coordinate()

IndexedFaceSet1390.coord = Coordinate1391

Shape1387.geometry = IndexedFaceSet1390

Scene15.children.append(Shape1387)
Shape1392 = x3d.Shape()
Appearance1393 = x3d.Appearance()
Material1394 = x3d.Material()
Material1394.ambientIntensity = 0
Material1394.diffuseColor = [0.784313738,0,0]
Material1394.shininess = 1

Appearance1393.material = Material1394

Shape1392.appearance = Appearance1393
IndexedFaceSet1395 = x3d.IndexedFaceSet()
IndexedFaceSet1395.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1395.solid = False
IndexedFaceSet1395.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1396 = x3d.Coordinate()

IndexedFaceSet1395.coord = Coordinate1396

Shape1392.geometry = IndexedFaceSet1395

Scene15.children.append(Shape1392)
Shape1397 = x3d.Shape()
Appearance1398 = x3d.Appearance()
Material1399 = x3d.Material()
Material1399.ambientIntensity = 0
Material1399.diffuseColor = [0.784313738,0,0]
Material1399.shininess = 1

Appearance1398.material = Material1399

Shape1397.appearance = Appearance1398
IndexedFaceSet1400 = x3d.IndexedFaceSet()
IndexedFaceSet1400.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1400.solid = False
IndexedFaceSet1400.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1401 = x3d.Coordinate()

IndexedFaceSet1400.coord = Coordinate1401

Shape1397.geometry = IndexedFaceSet1400

Scene15.children.append(Shape1397)
Shape1402 = x3d.Shape()
Appearance1403 = x3d.Appearance()
Material1404 = x3d.Material()
Material1404.ambientIntensity = 0
Material1404.diffuseColor = [0.784313738,0,0]
Material1404.shininess = 1

Appearance1403.material = Material1404

Shape1402.appearance = Appearance1403
IndexedFaceSet1405 = x3d.IndexedFaceSet()
IndexedFaceSet1405.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1]
IndexedFaceSet1405.solid = False
IndexedFaceSet1405.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1]
Coordinate1406 = x3d.Coordinate()

IndexedFaceSet1405.coord = Coordinate1406

Shape1402.geometry = IndexedFaceSet1405

Scene15.children.append(Shape1402)
Shape1407 = x3d.Shape()
Appearance1408 = x3d.Appearance()
Material1409 = x3d.Material()
Material1409.ambientIntensity = 0
Material1409.diffuseColor = [0.784313738,0,0]
Material1409.shininess = 1

Appearance1408.material = Material1409

Shape1407.appearance = Appearance1408
IndexedFaceSet1410 = x3d.IndexedFaceSet()
IndexedFaceSet1410.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1410.solid = False
IndexedFaceSet1410.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1411 = x3d.Coordinate()

IndexedFaceSet1410.coord = Coordinate1411

Shape1407.geometry = IndexedFaceSet1410

Scene15.children.append(Shape1407)
Shape1412 = x3d.Shape()
Appearance1413 = x3d.Appearance()
Material1414 = x3d.Material()
Material1414.ambientIntensity = 0
Material1414.diffuseColor = [0.784313738,0,0]
Material1414.shininess = 1

Appearance1413.material = Material1414

Shape1412.appearance = Appearance1413
IndexedFaceSet1415 = x3d.IndexedFaceSet()
IndexedFaceSet1415.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1415.solid = False
IndexedFaceSet1415.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1416 = x3d.Coordinate()

IndexedFaceSet1415.coord = Coordinate1416

Shape1412.geometry = IndexedFaceSet1415

Scene15.children.append(Shape1412)
Shape1417 = x3d.Shape()
Appearance1418 = x3d.Appearance()
Material1419 = x3d.Material()
Material1419.ambientIntensity = 0
Material1419.diffuseColor = [0.784313738,0,0]
Material1419.shininess = 1

Appearance1418.material = Material1419

Shape1417.appearance = Appearance1418
IndexedFaceSet1420 = x3d.IndexedFaceSet()
IndexedFaceSet1420.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1420.solid = False
IndexedFaceSet1420.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1421 = x3d.Coordinate()

IndexedFaceSet1420.coord = Coordinate1421

Shape1417.geometry = IndexedFaceSet1420

Scene15.children.append(Shape1417)
Shape1422 = x3d.Shape()
Appearance1423 = x3d.Appearance()
Material1424 = x3d.Material()
Material1424.ambientIntensity = 0
Material1424.diffuseColor = [0.784313738,0,0]
Material1424.shininess = 1

Appearance1423.material = Material1424

Shape1422.appearance = Appearance1423
IndexedFaceSet1425 = x3d.IndexedFaceSet()
IndexedFaceSet1425.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1]
IndexedFaceSet1425.solid = False
IndexedFaceSet1425.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1]
Coordinate1426 = x3d.Coordinate()

IndexedFaceSet1425.coord = Coordinate1426

Shape1422.geometry = IndexedFaceSet1425

Scene15.children.append(Shape1422)
Shape1427 = x3d.Shape()
Appearance1428 = x3d.Appearance()
Material1429 = x3d.Material()
Material1429.ambientIntensity = 0
Material1429.diffuseColor = [0.784313738,0,0]
Material1429.shininess = 1

Appearance1428.material = Material1429

Shape1427.appearance = Appearance1428
IndexedFaceSet1430 = x3d.IndexedFaceSet()
IndexedFaceSet1430.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1430.solid = False
IndexedFaceSet1430.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1431 = x3d.Coordinate()

IndexedFaceSet1430.coord = Coordinate1431

Shape1427.geometry = IndexedFaceSet1430

Scene15.children.append(Shape1427)
Shape1432 = x3d.Shape()
Appearance1433 = x3d.Appearance()
Material1434 = x3d.Material()
Material1434.ambientIntensity = 0
Material1434.diffuseColor = [0.784313738,0,0]
Material1434.shininess = 1

Appearance1433.material = Material1434

Shape1432.appearance = Appearance1433
IndexedFaceSet1435 = x3d.IndexedFaceSet()
IndexedFaceSet1435.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1435.solid = False
IndexedFaceSet1435.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1436 = x3d.Coordinate()

IndexedFaceSet1435.coord = Coordinate1436

Shape1432.geometry = IndexedFaceSet1435

Scene15.children.append(Shape1432)
Shape1437 = x3d.Shape()
Appearance1438 = x3d.Appearance()
Material1439 = x3d.Material()
Material1439.ambientIntensity = 0
Material1439.diffuseColor = [0.784313738,0,0]
Material1439.shininess = 1

Appearance1438.material = Material1439

Shape1437.appearance = Appearance1438
IndexedFaceSet1440 = x3d.IndexedFaceSet()
IndexedFaceSet1440.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1440.solid = False
IndexedFaceSet1440.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1441 = x3d.Coordinate()

IndexedFaceSet1440.coord = Coordinate1441

Shape1437.geometry = IndexedFaceSet1440

Scene15.children.append(Shape1437)
Shape1442 = x3d.Shape()
Appearance1443 = x3d.Appearance()
Material1444 = x3d.Material()
Material1444.ambientIntensity = 0
Material1444.diffuseColor = [0.784313738,0,0]
Material1444.shininess = 1

Appearance1443.material = Material1444

Shape1442.appearance = Appearance1443
IndexedFaceSet1445 = x3d.IndexedFaceSet()
IndexedFaceSet1445.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1445.solid = False
IndexedFaceSet1445.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1446 = x3d.Coordinate()

IndexedFaceSet1445.coord = Coordinate1446

Shape1442.geometry = IndexedFaceSet1445

Scene15.children.append(Shape1442)
Shape1447 = x3d.Shape()
Appearance1448 = x3d.Appearance()
Material1449 = x3d.Material()
Material1449.ambientIntensity = 0
Material1449.diffuseColor = [0.784313738,0,0]
Material1449.shininess = 1

Appearance1448.material = Material1449

Shape1447.appearance = Appearance1448
IndexedFaceSet1450 = x3d.IndexedFaceSet()
IndexedFaceSet1450.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1450.solid = False
IndexedFaceSet1450.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1451 = x3d.Coordinate()

IndexedFaceSet1450.coord = Coordinate1451

Shape1447.geometry = IndexedFaceSet1450

Scene15.children.append(Shape1447)
Shape1452 = x3d.Shape()
Appearance1453 = x3d.Appearance()
Material1454 = x3d.Material()
Material1454.ambientIntensity = 0
Material1454.diffuseColor = [0.784313738,0,0]
Material1454.shininess = 1

Appearance1453.material = Material1454

Shape1452.appearance = Appearance1453
IndexedFaceSet1455 = x3d.IndexedFaceSet()
IndexedFaceSet1455.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1455.solid = False
IndexedFaceSet1455.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1456 = x3d.Coordinate()

IndexedFaceSet1455.coord = Coordinate1456

Shape1452.geometry = IndexedFaceSet1455

Scene15.children.append(Shape1452)
Shape1457 = x3d.Shape()
Appearance1458 = x3d.Appearance()
Material1459 = x3d.Material()
Material1459.ambientIntensity = 0
Material1459.diffuseColor = [0.784313738,0,0]
Material1459.shininess = 1

Appearance1458.material = Material1459

Shape1457.appearance = Appearance1458
IndexedFaceSet1460 = x3d.IndexedFaceSet()
IndexedFaceSet1460.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1]
IndexedFaceSet1460.solid = False
IndexedFaceSet1460.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1]
Coordinate1461 = x3d.Coordinate()

IndexedFaceSet1460.coord = Coordinate1461

Shape1457.geometry = IndexedFaceSet1460

Scene15.children.append(Shape1457)
Shape1462 = x3d.Shape()
Appearance1463 = x3d.Appearance()
Material1464 = x3d.Material()
Material1464.ambientIntensity = 0
Material1464.diffuseColor = [0.784313738,0,0]
Material1464.shininess = 1

Appearance1463.material = Material1464

Shape1462.appearance = Appearance1463
IndexedFaceSet1465 = x3d.IndexedFaceSet()
IndexedFaceSet1465.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1]
IndexedFaceSet1465.solid = False
IndexedFaceSet1465.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1]
Coordinate1466 = x3d.Coordinate()

IndexedFaceSet1465.coord = Coordinate1466

Shape1462.geometry = IndexedFaceSet1465

Scene15.children.append(Shape1462)
Shape1467 = x3d.Shape()
Appearance1468 = x3d.Appearance()
Material1469 = x3d.Material()
Material1469.ambientIntensity = 0
Material1469.diffuseColor = [0.784313738,0,0]
Material1469.shininess = 1

Appearance1468.material = Material1469

Shape1467.appearance = Appearance1468
IndexedFaceSet1470 = x3d.IndexedFaceSet()
IndexedFaceSet1470.coordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet1470.solid = False
IndexedFaceSet1470.texCoordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
Coordinate1471 = x3d.Coordinate()

IndexedFaceSet1470.coord = Coordinate1471

Shape1467.geometry = IndexedFaceSet1470

Scene15.children.append(Shape1467)
Shape1472 = x3d.Shape()
Appearance1473 = x3d.Appearance()
Material1474 = x3d.Material()
Material1474.ambientIntensity = 0
Material1474.diffuseColor = [0.784313738,0,0]
Material1474.shininess = 1

Appearance1473.material = Material1474

Shape1472.appearance = Appearance1473
IndexedFaceSet1475 = x3d.IndexedFaceSet()
IndexedFaceSet1475.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1475.solid = False
IndexedFaceSet1475.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1476 = x3d.Coordinate()

IndexedFaceSet1475.coord = Coordinate1476

Shape1472.geometry = IndexedFaceSet1475

Scene15.children.append(Shape1472)
Shape1477 = x3d.Shape()
Appearance1478 = x3d.Appearance()
Material1479 = x3d.Material()
Material1479.ambientIntensity = 0
Material1479.diffuseColor = [0.784313738,0,0]
Material1479.shininess = 1

Appearance1478.material = Material1479

Shape1477.appearance = Appearance1478
IndexedFaceSet1480 = x3d.IndexedFaceSet()
IndexedFaceSet1480.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1]
IndexedFaceSet1480.solid = False
IndexedFaceSet1480.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1]
Coordinate1481 = x3d.Coordinate()

IndexedFaceSet1480.coord = Coordinate1481

Shape1477.geometry = IndexedFaceSet1480

Scene15.children.append(Shape1477)
Shape1482 = x3d.Shape()
Appearance1483 = x3d.Appearance()
Material1484 = x3d.Material()
Material1484.ambientIntensity = 0
Material1484.diffuseColor = [0.784313738,0,0]
Material1484.shininess = 1

Appearance1483.material = Material1484

Shape1482.appearance = Appearance1483
IndexedFaceSet1485 = x3d.IndexedFaceSet()
IndexedFaceSet1485.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1]
IndexedFaceSet1485.solid = False
IndexedFaceSet1485.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1]
Coordinate1486 = x3d.Coordinate()

IndexedFaceSet1485.coord = Coordinate1486

Shape1482.geometry = IndexedFaceSet1485

Scene15.children.append(Shape1482)
Shape1487 = x3d.Shape()
Appearance1488 = x3d.Appearance()
Material1489 = x3d.Material()
Material1489.ambientIntensity = 0
Material1489.diffuseColor = [0.784313738,0,0]
Material1489.shininess = 1

Appearance1488.material = Material1489

Shape1487.appearance = Appearance1488
IndexedFaceSet1490 = x3d.IndexedFaceSet()
IndexedFaceSet1490.coordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet1490.solid = False
IndexedFaceSet1490.texCoordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
Coordinate1491 = x3d.Coordinate()

IndexedFaceSet1490.coord = Coordinate1491

Shape1487.geometry = IndexedFaceSet1490

Scene15.children.append(Shape1487)
Shape1492 = x3d.Shape()
Appearance1493 = x3d.Appearance()
Material1494 = x3d.Material()
Material1494.ambientIntensity = 0
Material1494.diffuseColor = [0.784313738,0,0]
Material1494.shininess = 1

Appearance1493.material = Material1494

Shape1492.appearance = Appearance1493
IndexedFaceSet1495 = x3d.IndexedFaceSet()
IndexedFaceSet1495.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet1495.solid = False
IndexedFaceSet1495.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
Coordinate1496 = x3d.Coordinate()

IndexedFaceSet1495.coord = Coordinate1496

Shape1492.geometry = IndexedFaceSet1495

Scene15.children.append(Shape1492)
Shape1497 = x3d.Shape()
Appearance1498 = x3d.Appearance()
Material1499 = x3d.Material()
Material1499.ambientIntensity = 0
Material1499.diffuseColor = [0.784313738,0,0]
Material1499.shininess = 1

Appearance1498.material = Material1499

Shape1497.appearance = Appearance1498
IndexedFaceSet1500 = x3d.IndexedFaceSet()
IndexedFaceSet1500.coordIndex = [1,0,2,-1,1,2,3,-1,8,11,13,-1,8,13,10,-1,11,5,12,-1,11,12,13,-1,16,15,5,-1,16,5,11,-1,14,16,11,-1,14,11,8,-1,13,12,4,-1,16,6,15,-1,13,4,7,-1,9,16,14,-1,6,16,9,-1,7,10,13,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet1500.solid = False
IndexedFaceSet1500.texCoordIndex = [1,0,2,-1,1,2,3,-1,8,11,13,-1,8,13,10,-1,11,5,12,-1,11,12,13,-1,16,15,5,-1,16,5,11,-1,14,16,11,-1,14,11,8,-1,13,12,4,-1,16,6,15,-1,13,4,7,-1,9,16,14,-1,6,16,9,-1,7,10,13,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
Coordinate1501 = x3d.Coordinate()

IndexedFaceSet1500.coord = Coordinate1501

Shape1497.geometry = IndexedFaceSet1500

Scene15.children.append(Shape1497)
Shape1502 = x3d.Shape()
Appearance1503 = x3d.Appearance()
Material1504 = x3d.Material()
Material1504.ambientIntensity = 0
Material1504.diffuseColor = [0.784313738,0,0]
Material1504.shininess = 1

Appearance1503.material = Material1504

Shape1502.appearance = Appearance1503
IndexedFaceSet1505 = x3d.IndexedFaceSet()
IndexedFaceSet1505.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1505.solid = False
IndexedFaceSet1505.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1506 = x3d.Coordinate()

IndexedFaceSet1505.coord = Coordinate1506

Shape1502.geometry = IndexedFaceSet1505

Scene15.children.append(Shape1502)
Shape1507 = x3d.Shape()
Appearance1508 = x3d.Appearance()
Material1509 = x3d.Material()
Material1509.ambientIntensity = 0
Material1509.diffuseColor = [0.784313738,0,0]
Material1509.shininess = 1

Appearance1508.material = Material1509

Shape1507.appearance = Appearance1508
IndexedFaceSet1510 = x3d.IndexedFaceSet()
IndexedFaceSet1510.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
IndexedFaceSet1510.solid = False
IndexedFaceSet1510.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
Coordinate1511 = x3d.Coordinate()

IndexedFaceSet1510.coord = Coordinate1511

Shape1507.geometry = IndexedFaceSet1510

Scene15.children.append(Shape1507)
Shape1512 = x3d.Shape()
Appearance1513 = x3d.Appearance()
Material1514 = x3d.Material()
Material1514.ambientIntensity = 0
Material1514.diffuseColor = [0.784313738,0,0]
Material1514.shininess = 1

Appearance1513.material = Material1514

Shape1512.appearance = Appearance1513
IndexedFaceSet1515 = x3d.IndexedFaceSet()
IndexedFaceSet1515.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
IndexedFaceSet1515.solid = False
IndexedFaceSet1515.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
Coordinate1516 = x3d.Coordinate()

IndexedFaceSet1515.coord = Coordinate1516

Shape1512.geometry = IndexedFaceSet1515

Scene15.children.append(Shape1512)
Shape1517 = x3d.Shape()
Appearance1518 = x3d.Appearance()
Material1519 = x3d.Material()
Material1519.ambientIntensity = 0
Material1519.diffuseColor = [0.784313738,0,0]
Material1519.shininess = 1

Appearance1518.material = Material1519

Shape1517.appearance = Appearance1518
IndexedFaceSet1520 = x3d.IndexedFaceSet()
IndexedFaceSet1520.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,16,19,21,-1,16,21,18,-1,19,13,20,-1,19,20,21,-1,24,23,13,-1,24,13,19,-1,22,24,19,-1,22,19,16,-1,21,20,12,-1,24,14,23,-1,21,12,15,-1,17,24,22,-1,14,24,17,-1,15,18,21,-1]
IndexedFaceSet1520.solid = False
IndexedFaceSet1520.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,16,19,21,-1,16,21,18,-1,19,13,20,-1,19,20,21,-1,24,23,13,-1,24,13,19,-1,22,24,19,-1,22,19,16,-1,21,20,12,-1,24,14,23,-1,21,12,15,-1,17,24,22,-1,14,24,17,-1,15,18,21,-1]
Coordinate1521 = x3d.Coordinate()

IndexedFaceSet1520.coord = Coordinate1521

Shape1517.geometry = IndexedFaceSet1520

Scene15.children.append(Shape1517)
Shape1522 = x3d.Shape()
Appearance1523 = x3d.Appearance()
Material1524 = x3d.Material()
Material1524.ambientIntensity = 0
Material1524.diffuseColor = [0.784313738,0,0]
Material1524.shininess = 1

Appearance1523.material = Material1524

Shape1522.appearance = Appearance1523
IndexedFaceSet1525 = x3d.IndexedFaceSet()
IndexedFaceSet1525.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1525.solid = False
IndexedFaceSet1525.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1526 = x3d.Coordinate()

IndexedFaceSet1525.coord = Coordinate1526

Shape1522.geometry = IndexedFaceSet1525

Scene15.children.append(Shape1522)
Shape1527 = x3d.Shape()
Appearance1528 = x3d.Appearance()
Material1529 = x3d.Material()
Material1529.ambientIntensity = 0
Material1529.diffuseColor = [0.784313738,0,0]
Material1529.shininess = 1

Appearance1528.material = Material1529

Shape1527.appearance = Appearance1528
IndexedFaceSet1530 = x3d.IndexedFaceSet()
IndexedFaceSet1530.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
IndexedFaceSet1530.solid = False
IndexedFaceSet1530.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
Coordinate1531 = x3d.Coordinate()

IndexedFaceSet1530.coord = Coordinate1531

Shape1527.geometry = IndexedFaceSet1530

Scene15.children.append(Shape1527)
Shape1532 = x3d.Shape()
Appearance1533 = x3d.Appearance()
Material1534 = x3d.Material()
Material1534.ambientIntensity = 0
Material1534.diffuseColor = [0.784313738,0,0]
Material1534.shininess = 1

Appearance1533.material = Material1534

Shape1532.appearance = Appearance1533
IndexedFaceSet1535 = x3d.IndexedFaceSet()
IndexedFaceSet1535.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
IndexedFaceSet1535.solid = False
IndexedFaceSet1535.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
Coordinate1536 = x3d.Coordinate()

IndexedFaceSet1535.coord = Coordinate1536

Shape1532.geometry = IndexedFaceSet1535

Scene15.children.append(Shape1532)
Shape1537 = x3d.Shape()
Appearance1538 = x3d.Appearance()
Material1539 = x3d.Material()
Material1539.ambientIntensity = 0
Material1539.diffuseColor = [0.784313738,0,0]
Material1539.shininess = 1

Appearance1538.material = Material1539

Shape1537.appearance = Appearance1538
IndexedFaceSet1540 = x3d.IndexedFaceSet()
IndexedFaceSet1540.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1540.solid = False
IndexedFaceSet1540.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1541 = x3d.Coordinate()

IndexedFaceSet1540.coord = Coordinate1541

Shape1537.geometry = IndexedFaceSet1540

Scene15.children.append(Shape1537)
Shape1542 = x3d.Shape()
Appearance1543 = x3d.Appearance()
Material1544 = x3d.Material()
Material1544.ambientIntensity = 0
Material1544.diffuseColor = [0.784313738,0,0]
Material1544.shininess = 1

Appearance1543.material = Material1544

Shape1542.appearance = Appearance1543
IndexedFaceSet1545 = x3d.IndexedFaceSet()
IndexedFaceSet1545.coordIndex = [1,0,2,-1,1,2,3,-1,8,11,13,-1,8,13,10,-1,11,5,12,-1,11,12,13,-1,16,15,5,-1,16,5,11,-1,14,16,11,-1,14,11,8,-1,13,12,4,-1,16,6,15,-1,13,4,7,-1,9,16,14,-1,6,16,9,-1,7,10,13,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet1545.solid = False
IndexedFaceSet1545.texCoordIndex = [1,0,2,-1,1,2,3,-1,8,11,13,-1,8,13,10,-1,11,5,12,-1,11,12,13,-1,16,15,5,-1,16,5,11,-1,14,16,11,-1,14,11,8,-1,13,12,4,-1,16,6,15,-1,13,4,7,-1,9,16,14,-1,6,16,9,-1,7,10,13,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
Coordinate1546 = x3d.Coordinate()

IndexedFaceSet1545.coord = Coordinate1546

Shape1542.geometry = IndexedFaceSet1545

Scene15.children.append(Shape1542)
Shape1547 = x3d.Shape()
Appearance1548 = x3d.Appearance()
Material1549 = x3d.Material()
Material1549.ambientIntensity = 0
Material1549.diffuseColor = [0.784313738,0,0]
Material1549.shininess = 1

Appearance1548.material = Material1549

Shape1547.appearance = Appearance1548
IndexedFaceSet1550 = x3d.IndexedFaceSet()
IndexedFaceSet1550.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1]
IndexedFaceSet1550.solid = False
IndexedFaceSet1550.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1]
Coordinate1551 = x3d.Coordinate()

IndexedFaceSet1550.coord = Coordinate1551

Shape1547.geometry = IndexedFaceSet1550

Scene15.children.append(Shape1547)
Shape1552 = x3d.Shape()
Appearance1553 = x3d.Appearance()
Material1554 = x3d.Material()
Material1554.ambientIntensity = 0
Material1554.diffuseColor = [0.784313738,0,0]
Material1554.shininess = 1

Appearance1553.material = Material1554

Shape1552.appearance = Appearance1553
IndexedFaceSet1555 = x3d.IndexedFaceSet()
IndexedFaceSet1555.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,36,-1,34,36,37,-1,35,34,37,-1,35,37,38,-1,40,39,41,-1,40,41,42,-1]
IndexedFaceSet1555.solid = False
IndexedFaceSet1555.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,36,-1,34,36,37,-1,35,34,37,-1,35,37,38,-1,40,39,41,-1,40,41,42,-1]
Coordinate1556 = x3d.Coordinate()

IndexedFaceSet1555.coord = Coordinate1556

Shape1552.geometry = IndexedFaceSet1555

Scene15.children.append(Shape1552)
Shape1557 = x3d.Shape()
Appearance1558 = x3d.Appearance()
Material1559 = x3d.Material()
Material1559.ambientIntensity = 0
Material1559.diffuseColor = [0.784313738,0,0]
Material1559.shininess = 1

Appearance1558.material = Material1559

Shape1557.appearance = Appearance1558
IndexedFaceSet1560 = x3d.IndexedFaceSet()
IndexedFaceSet1560.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1560.solid = False
IndexedFaceSet1560.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1561 = x3d.Coordinate()

IndexedFaceSet1560.coord = Coordinate1561

Shape1557.geometry = IndexedFaceSet1560

Scene15.children.append(Shape1557)
Shape1562 = x3d.Shape()
Appearance1563 = x3d.Appearance()
Material1564 = x3d.Material()
Material1564.ambientIntensity = 0
Material1564.diffuseColor = [0.784313738,0,0]
Material1564.shininess = 1

Appearance1563.material = Material1564

Shape1562.appearance = Appearance1563
IndexedFaceSet1565 = x3d.IndexedFaceSet()
IndexedFaceSet1565.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1565.solid = False
IndexedFaceSet1565.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1566 = x3d.Coordinate()

IndexedFaceSet1565.coord = Coordinate1566

Shape1562.geometry = IndexedFaceSet1565

Scene15.children.append(Shape1562)
Shape1567 = x3d.Shape()
Appearance1568 = x3d.Appearance()
Material1569 = x3d.Material()
Material1569.ambientIntensity = 0
Material1569.diffuseColor = [0.784313738,0,0]
Material1569.shininess = 1

Appearance1568.material = Material1569

Shape1567.appearance = Appearance1568
IndexedFaceSet1570 = x3d.IndexedFaceSet()
IndexedFaceSet1570.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1570.solid = False
IndexedFaceSet1570.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1571 = x3d.Coordinate()

IndexedFaceSet1570.coord = Coordinate1571

Shape1567.geometry = IndexedFaceSet1570

Scene15.children.append(Shape1567)
Shape1572 = x3d.Shape()
Appearance1573 = x3d.Appearance()
Material1574 = x3d.Material()
Material1574.ambientIntensity = 0
Material1574.diffuseColor = [0.784313738,0,0]
Material1574.shininess = 1

Appearance1573.material = Material1574

Shape1572.appearance = Appearance1573
IndexedFaceSet1575 = x3d.IndexedFaceSet()
IndexedFaceSet1575.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1]
IndexedFaceSet1575.solid = False
IndexedFaceSet1575.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1]
Coordinate1576 = x3d.Coordinate()

IndexedFaceSet1575.coord = Coordinate1576

Shape1572.geometry = IndexedFaceSet1575

Scene15.children.append(Shape1572)
Shape1577 = x3d.Shape()
Appearance1578 = x3d.Appearance()
Material1579 = x3d.Material()
Material1579.ambientIntensity = 0
Material1579.diffuseColor = [0.784313738,0,0]
Material1579.shininess = 1

Appearance1578.material = Material1579

Shape1577.appearance = Appearance1578
IndexedFaceSet1580 = x3d.IndexedFaceSet()
IndexedFaceSet1580.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1580.solid = False
IndexedFaceSet1580.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1581 = x3d.Coordinate()

IndexedFaceSet1580.coord = Coordinate1581

Shape1577.geometry = IndexedFaceSet1580

Scene15.children.append(Shape1577)
Shape1582 = x3d.Shape()
Appearance1583 = x3d.Appearance()
Material1584 = x3d.Material()
Material1584.ambientIntensity = 0
Material1584.diffuseColor = [0.784313738,0,0]
Material1584.shininess = 1

Appearance1583.material = Material1584

Shape1582.appearance = Appearance1583
IndexedFaceSet1585 = x3d.IndexedFaceSet()
IndexedFaceSet1585.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1585.solid = False
IndexedFaceSet1585.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1586 = x3d.Coordinate()

IndexedFaceSet1585.coord = Coordinate1586

Shape1582.geometry = IndexedFaceSet1585

Scene15.children.append(Shape1582)
Shape1587 = x3d.Shape()
Appearance1588 = x3d.Appearance()
Material1589 = x3d.Material()
Material1589.ambientIntensity = 0
Material1589.diffuseColor = [0.784313738,0,0]
Material1589.shininess = 1

Appearance1588.material = Material1589

Shape1587.appearance = Appearance1588
IndexedFaceSet1590 = x3d.IndexedFaceSet()
IndexedFaceSet1590.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,31,22,20,-1,23,25,31,-1,20,23,31,-1,27,25,23,-1,17,24,27,-1,23,17,27,-1,25,27,29,-1,25,29,26,-1,27,24,28,-1,27,28,29,-1,22,31,32,-1,22,32,30,-1,31,25,26,-1,31,26,32,-1,39,37,35,-1,39,35,38,-1,36,39,38,-1,36,38,33,-1,42,40,34,-1,42,34,41,-1,37,42,41,-1,37,41,35,-1,41,34,17,-1,23,35,41,-1,17,23,41,-1,38,35,23,-1,20,33,38,-1,23,20,38,-1,28,16,29,-1,26,29,16,-1,42,18,40,-1,37,18,42,-1,26,16,19,-1,30,32,19,-1,26,19,32,-1,21,37,39,-1,39,36,21,-1,18,37,21,-1]
IndexedFaceSet1590.solid = False
IndexedFaceSet1590.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,31,22,20,-1,23,25,31,-1,20,23,31,-1,27,25,23,-1,17,24,27,-1,23,17,27,-1,25,27,29,-1,25,29,26,-1,27,24,28,-1,27,28,29,-1,22,31,32,-1,22,32,30,-1,31,25,26,-1,31,26,32,-1,39,37,35,-1,39,35,38,-1,36,39,38,-1,36,38,33,-1,42,40,34,-1,42,34,41,-1,37,42,41,-1,37,41,35,-1,41,34,17,-1,23,35,41,-1,17,23,41,-1,38,35,23,-1,20,33,38,-1,23,20,38,-1,28,16,29,-1,26,29,16,-1,42,18,40,-1,37,18,42,-1,26,16,19,-1,30,32,19,-1,26,19,32,-1,21,37,39,-1,39,36,21,-1,18,37,21,-1]
Coordinate1591 = x3d.Coordinate()

IndexedFaceSet1590.coord = Coordinate1591

Shape1587.geometry = IndexedFaceSet1590

Scene15.children.append(Shape1587)
Shape1592 = x3d.Shape()
Appearance1593 = x3d.Appearance()
Material1594 = x3d.Material()
Material1594.ambientIntensity = 0
Material1594.diffuseColor = [0.784313738,0,0]
Material1594.shininess = 1

Appearance1593.material = Material1594

Shape1592.appearance = Appearance1593
IndexedFaceSet1595 = x3d.IndexedFaceSet()
IndexedFaceSet1595.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,36,-1,34,36,37,-1,35,34,37,-1,35,37,38,-1,54,45,43,-1,46,48,54,-1,43,46,54,-1,50,48,46,-1,40,47,50,-1,46,40,50,-1,48,50,52,-1,48,52,49,-1,50,47,51,-1,50,51,52,-1,45,54,55,-1,45,55,53,-1,54,48,49,-1,54,49,55,-1,62,60,58,-1,62,58,61,-1,59,62,61,-1,59,61,56,-1,65,63,57,-1,65,57,64,-1,60,65,64,-1,60,64,58,-1,64,57,40,-1,46,58,64,-1,40,46,64,-1,61,58,46,-1,43,56,61,-1,46,43,61,-1,51,39,52,-1,49,52,39,-1,65,41,63,-1,60,41,65,-1,49,39,42,-1,53,55,42,-1,49,42,55,-1,44,60,62,-1,62,59,44,-1,41,60,44,-1]
IndexedFaceSet1595.solid = False
IndexedFaceSet1595.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,36,-1,34,36,37,-1,35,34,37,-1,35,37,38,-1,54,45,43,-1,46,48,54,-1,43,46,54,-1,50,48,46,-1,40,47,50,-1,46,40,50,-1,48,50,52,-1,48,52,49,-1,50,47,51,-1,50,51,52,-1,45,54,55,-1,45,55,53,-1,54,48,49,-1,54,49,55,-1,62,60,58,-1,62,58,61,-1,59,62,61,-1,59,61,56,-1,65,63,57,-1,65,57,64,-1,60,65,64,-1,60,64,58,-1,64,57,40,-1,46,58,64,-1,40,46,64,-1,61,58,46,-1,43,56,61,-1,46,43,61,-1,51,39,52,-1,49,52,39,-1,65,41,63,-1,60,41,65,-1,49,39,42,-1,53,55,42,-1,49,42,55,-1,44,60,62,-1,62,59,44,-1,41,60,44,-1]
Coordinate1596 = x3d.Coordinate()

IndexedFaceSet1595.coord = Coordinate1596

Shape1592.geometry = IndexedFaceSet1595

Scene15.children.append(Shape1592)
Shape1597 = x3d.Shape()
Appearance1598 = x3d.Appearance()
Material1599 = x3d.Material()
Material1599.ambientIntensity = 0
Material1599.diffuseColor = [0.784313738,0,0]
Material1599.shininess = 1

Appearance1598.material = Material1599

Shape1597.appearance = Appearance1598
IndexedFaceSet1600 = x3d.IndexedFaceSet()
IndexedFaceSet1600.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1600.solid = False
IndexedFaceSet1600.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1601 = x3d.Coordinate()

IndexedFaceSet1600.coord = Coordinate1601

Shape1597.geometry = IndexedFaceSet1600

Scene15.children.append(Shape1597)
Shape1602 = x3d.Shape()
Appearance1603 = x3d.Appearance()
Material1604 = x3d.Material()
Material1604.ambientIntensity = 0
Material1604.diffuseColor = [0.784313738,0,0]
Material1604.shininess = 1

Appearance1603.material = Material1604

Shape1602.appearance = Appearance1603
IndexedFaceSet1605 = x3d.IndexedFaceSet()
IndexedFaceSet1605.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1605.solid = False
IndexedFaceSet1605.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1606 = x3d.Coordinate()

IndexedFaceSet1605.coord = Coordinate1606

Shape1602.geometry = IndexedFaceSet1605

Scene15.children.append(Shape1602)
Shape1607 = x3d.Shape()
Appearance1608 = x3d.Appearance()
Material1609 = x3d.Material()
Material1609.ambientIntensity = 0
Material1609.diffuseColor = [0.784313738,0,0]
Material1609.shininess = 1

Appearance1608.material = Material1609

Shape1607.appearance = Appearance1608
IndexedFaceSet1610 = x3d.IndexedFaceSet()
IndexedFaceSet1610.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1610.solid = False
IndexedFaceSet1610.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1611 = x3d.Coordinate()

IndexedFaceSet1610.coord = Coordinate1611

Shape1607.geometry = IndexedFaceSet1610

Scene15.children.append(Shape1607)
Shape1612 = x3d.Shape()
Appearance1613 = x3d.Appearance()
Material1614 = x3d.Material()
Material1614.ambientIntensity = 0
Material1614.diffuseColor = [0.784313738,0,0]
Material1614.shininess = 1

Appearance1613.material = Material1614

Shape1612.appearance = Appearance1613
IndexedFaceSet1615 = x3d.IndexedFaceSet()
IndexedFaceSet1615.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1615.solid = False
IndexedFaceSet1615.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1616 = x3d.Coordinate()

IndexedFaceSet1615.coord = Coordinate1616

Shape1612.geometry = IndexedFaceSet1615

Scene15.children.append(Shape1612)
Shape1617 = x3d.Shape()
Appearance1618 = x3d.Appearance()
Material1619 = x3d.Material()
Material1619.ambientIntensity = 0
Material1619.diffuseColor = [0.784313738,0,0]
Material1619.shininess = 1

Appearance1618.material = Material1619

Shape1617.appearance = Appearance1618
IndexedFaceSet1620 = x3d.IndexedFaceSet()
IndexedFaceSet1620.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1620.solid = False
IndexedFaceSet1620.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1621 = x3d.Coordinate()

IndexedFaceSet1620.coord = Coordinate1621

Shape1617.geometry = IndexedFaceSet1620

Scene15.children.append(Shape1617)
Shape1622 = x3d.Shape()
Appearance1623 = x3d.Appearance()
Material1624 = x3d.Material()
Material1624.ambientIntensity = 0
Material1624.diffuseColor = [0.784313738,0,0]
Material1624.shininess = 1

Appearance1623.material = Material1624

Shape1622.appearance = Appearance1623
IndexedFaceSet1625 = x3d.IndexedFaceSet()
IndexedFaceSet1625.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1625.solid = False
IndexedFaceSet1625.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1626 = x3d.Coordinate()

IndexedFaceSet1625.coord = Coordinate1626

Shape1622.geometry = IndexedFaceSet1625

Scene15.children.append(Shape1622)
Shape1627 = x3d.Shape()
Appearance1628 = x3d.Appearance()
Material1629 = x3d.Material()
Material1629.ambientIntensity = 0
Material1629.diffuseColor = [0.784313738,0,0]
Material1629.shininess = 1

Appearance1628.material = Material1629

Shape1627.appearance = Appearance1628
IndexedFaceSet1630 = x3d.IndexedFaceSet()
IndexedFaceSet1630.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1630.solid = False
IndexedFaceSet1630.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1631 = x3d.Coordinate()

IndexedFaceSet1630.coord = Coordinate1631

Shape1627.geometry = IndexedFaceSet1630

Scene15.children.append(Shape1627)
Shape1632 = x3d.Shape()
Appearance1633 = x3d.Appearance()
Material1634 = x3d.Material()
Material1634.ambientIntensity = 0
Material1634.diffuseColor = [0.784313738,0,0]
Material1634.shininess = 1

Appearance1633.material = Material1634

Shape1632.appearance = Appearance1633
IndexedFaceSet1635 = x3d.IndexedFaceSet()
IndexedFaceSet1635.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1635.solid = False
IndexedFaceSet1635.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1636 = x3d.Coordinate()

IndexedFaceSet1635.coord = Coordinate1636

Shape1632.geometry = IndexedFaceSet1635

Scene15.children.append(Shape1632)
Shape1637 = x3d.Shape()
Appearance1638 = x3d.Appearance()
Material1639 = x3d.Material()
Material1639.ambientIntensity = 0
Material1639.diffuseColor = [0.784313738,0,0]
Material1639.shininess = 1

Appearance1638.material = Material1639

Shape1637.appearance = Appearance1638
IndexedFaceSet1640 = x3d.IndexedFaceSet()
IndexedFaceSet1640.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1640.solid = False
IndexedFaceSet1640.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1641 = x3d.Coordinate()

IndexedFaceSet1640.coord = Coordinate1641

Shape1637.geometry = IndexedFaceSet1640

Scene15.children.append(Shape1637)
Shape1642 = x3d.Shape()
Appearance1643 = x3d.Appearance()
Material1644 = x3d.Material()
Material1644.ambientIntensity = 0
Material1644.diffuseColor = [0.784313738,0,0]
Material1644.shininess = 1

Appearance1643.material = Material1644

Shape1642.appearance = Appearance1643
IndexedFaceSet1645 = x3d.IndexedFaceSet()
IndexedFaceSet1645.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,16,19,21,-1,16,21,18,-1,19,13,20,-1,19,20,21,-1,24,23,13,-1,24,13,19,-1,22,24,19,-1,22,19,16,-1,21,20,12,-1,24,14,23,-1,21,12,15,-1,17,24,22,-1,14,24,17,-1,15,18,21,-1]
IndexedFaceSet1645.solid = False
IndexedFaceSet1645.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,16,19,21,-1,16,21,18,-1,19,13,20,-1,19,20,21,-1,24,23,13,-1,24,13,19,-1,22,24,19,-1,22,19,16,-1,21,20,12,-1,24,14,23,-1,21,12,15,-1,17,24,22,-1,14,24,17,-1,15,18,21,-1]
Coordinate1646 = x3d.Coordinate()

IndexedFaceSet1645.coord = Coordinate1646

Shape1642.geometry = IndexedFaceSet1645

Scene15.children.append(Shape1642)
Shape1647 = x3d.Shape()
Appearance1648 = x3d.Appearance()
Material1649 = x3d.Material()
Material1649.ambientIntensity = 0
Material1649.diffuseColor = [0.784313738,0,0]
Material1649.shininess = 1

Appearance1648.material = Material1649

Shape1647.appearance = Appearance1648
IndexedFaceSet1650 = x3d.IndexedFaceSet()
IndexedFaceSet1650.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1650.solid = False
IndexedFaceSet1650.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1651 = x3d.Coordinate()

IndexedFaceSet1650.coord = Coordinate1651

Shape1647.geometry = IndexedFaceSet1650

Scene15.children.append(Shape1647)
Shape1652 = x3d.Shape()
Appearance1653 = x3d.Appearance()
Material1654 = x3d.Material()
Material1654.ambientIntensity = 0
Material1654.diffuseColor = [0.784313738,0,0]
Material1654.shininess = 1

Appearance1653.material = Material1654

Shape1652.appearance = Appearance1653
IndexedFaceSet1655 = x3d.IndexedFaceSet()
IndexedFaceSet1655.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1655.solid = False
IndexedFaceSet1655.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1656 = x3d.Coordinate()

IndexedFaceSet1655.coord = Coordinate1656

Shape1652.geometry = IndexedFaceSet1655

Scene15.children.append(Shape1652)
Shape1657 = x3d.Shape()
Appearance1658 = x3d.Appearance()
Material1659 = x3d.Material()
Material1659.ambientIntensity = 0
Material1659.diffuseColor = [0.784313738,0,0]
Material1659.shininess = 1

Appearance1658.material = Material1659

Shape1657.appearance = Appearance1658
IndexedFaceSet1660 = x3d.IndexedFaceSet()
IndexedFaceSet1660.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1660.solid = False
IndexedFaceSet1660.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1661 = x3d.Coordinate()

IndexedFaceSet1660.coord = Coordinate1661

Shape1657.geometry = IndexedFaceSet1660

Scene15.children.append(Shape1657)
Shape1662 = x3d.Shape()
Appearance1663 = x3d.Appearance()
Material1664 = x3d.Material()
Material1664.ambientIntensity = 0
Material1664.diffuseColor = [0.784313738,0,0]
Material1664.shininess = 1

Appearance1663.material = Material1664

Shape1662.appearance = Appearance1663
IndexedFaceSet1665 = x3d.IndexedFaceSet()
IndexedFaceSet1665.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1665.solid = False
IndexedFaceSet1665.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1666 = x3d.Coordinate()

IndexedFaceSet1665.coord = Coordinate1666

Shape1662.geometry = IndexedFaceSet1665

Scene15.children.append(Shape1662)
Shape1667 = x3d.Shape()
Appearance1668 = x3d.Appearance()
Material1669 = x3d.Material()
Material1669.ambientIntensity = 0
Material1669.diffuseColor = [0.784313738,0,0]
Material1669.shininess = 1

Appearance1668.material = Material1669

Shape1667.appearance = Appearance1668
IndexedFaceSet1670 = x3d.IndexedFaceSet()
IndexedFaceSet1670.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1670.solid = False
IndexedFaceSet1670.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1671 = x3d.Coordinate()

IndexedFaceSet1670.coord = Coordinate1671

Shape1667.geometry = IndexedFaceSet1670

Scene15.children.append(Shape1667)
Shape1672 = x3d.Shape()
Appearance1673 = x3d.Appearance()
Material1674 = x3d.Material()
Material1674.ambientIntensity = 0
Material1674.diffuseColor = [0.784313738,0,0]
Material1674.shininess = 1

Appearance1673.material = Material1674

Shape1672.appearance = Appearance1673
IndexedFaceSet1675 = x3d.IndexedFaceSet()
IndexedFaceSet1675.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,35,-1,34,35,36,-1,38,37,39,-1,38,39,40,-1]
IndexedFaceSet1675.solid = False
IndexedFaceSet1675.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,35,-1,34,35,36,-1,38,37,39,-1,38,39,40,-1]
Coordinate1676 = x3d.Coordinate()

IndexedFaceSet1675.coord = Coordinate1676

Shape1672.geometry = IndexedFaceSet1675

Scene15.children.append(Shape1672)
Shape1677 = x3d.Shape()
Appearance1678 = x3d.Appearance()
Material1679 = x3d.Material()
Material1679.ambientIntensity = 0
Material1679.diffuseColor = [0.784313738,0,0]
Material1679.shininess = 1

Appearance1678.material = Material1679

Shape1677.appearance = Appearance1678
IndexedFaceSet1680 = x3d.IndexedFaceSet()
IndexedFaceSet1680.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1]
IndexedFaceSet1680.solid = False
IndexedFaceSet1680.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1]
Coordinate1681 = x3d.Coordinate()

IndexedFaceSet1680.coord = Coordinate1681

Shape1677.geometry = IndexedFaceSet1680

Scene15.children.append(Shape1677)
Shape1682 = x3d.Shape()
Appearance1683 = x3d.Appearance()
Material1684 = x3d.Material()
Material1684.ambientIntensity = 0
Material1684.diffuseColor = [0.784313738,0,0]
Material1684.shininess = 1

Appearance1683.material = Material1684

Shape1682.appearance = Appearance1683
IndexedFaceSet1685 = x3d.IndexedFaceSet()
IndexedFaceSet1685.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1685.solid = False
IndexedFaceSet1685.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1686 = x3d.Coordinate()

IndexedFaceSet1685.coord = Coordinate1686

Shape1682.geometry = IndexedFaceSet1685

Scene15.children.append(Shape1682)
Shape1687 = x3d.Shape()
Appearance1688 = x3d.Appearance()
Material1689 = x3d.Material()
Material1689.ambientIntensity = 0
Material1689.diffuseColor = [0.784313738,0,0]
Material1689.shininess = 1

Appearance1688.material = Material1689

Shape1687.appearance = Appearance1688
IndexedFaceSet1690 = x3d.IndexedFaceSet()
IndexedFaceSet1690.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1]
IndexedFaceSet1690.solid = False
IndexedFaceSet1690.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1]
Coordinate1691 = x3d.Coordinate()

IndexedFaceSet1690.coord = Coordinate1691

Shape1687.geometry = IndexedFaceSet1690

Scene15.children.append(Shape1687)
Shape1692 = x3d.Shape()
Appearance1693 = x3d.Appearance()
Material1694 = x3d.Material()
Material1694.ambientIntensity = 0
Material1694.diffuseColor = [0.784313738,0,0]
Material1694.shininess = 1

Appearance1693.material = Material1694

Shape1692.appearance = Appearance1693
IndexedFaceSet1695 = x3d.IndexedFaceSet()
IndexedFaceSet1695.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1]
IndexedFaceSet1695.solid = False
IndexedFaceSet1695.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1]
Coordinate1696 = x3d.Coordinate()

IndexedFaceSet1695.coord = Coordinate1696

Shape1692.geometry = IndexedFaceSet1695

Scene15.children.append(Shape1692)
Shape1697 = x3d.Shape()
Appearance1698 = x3d.Appearance()
Material1699 = x3d.Material()
Material1699.ambientIntensity = 0
Material1699.diffuseColor = [0.784313738,0,0]
Material1699.shininess = 1

Appearance1698.material = Material1699

Shape1697.appearance = Appearance1698
IndexedFaceSet1700 = x3d.IndexedFaceSet()
IndexedFaceSet1700.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1700.solid = False
IndexedFaceSet1700.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1701 = x3d.Coordinate()

IndexedFaceSet1700.coord = Coordinate1701

Shape1697.geometry = IndexedFaceSet1700

Scene15.children.append(Shape1697)
Shape1702 = x3d.Shape()
Appearance1703 = x3d.Appearance()
Material1704 = x3d.Material()
Material1704.ambientIntensity = 0
Material1704.diffuseColor = [0.784313738,0,0]
Material1704.shininess = 1

Appearance1703.material = Material1704

Shape1702.appearance = Appearance1703
IndexedFaceSet1705 = x3d.IndexedFaceSet()
IndexedFaceSet1705.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet1705.solid = False
IndexedFaceSet1705.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
Coordinate1706 = x3d.Coordinate()

IndexedFaceSet1705.coord = Coordinate1706

Shape1702.geometry = IndexedFaceSet1705

Scene15.children.append(Shape1702)
Shape1707 = x3d.Shape()
Appearance1708 = x3d.Appearance()
Material1709 = x3d.Material()
Material1709.ambientIntensity = 0
Material1709.diffuseColor = [0.784313738,0,0]
Material1709.shininess = 1

Appearance1708.material = Material1709

Shape1707.appearance = Appearance1708
IndexedFaceSet1710 = x3d.IndexedFaceSet()
IndexedFaceSet1710.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,34,-1,32,34,35,-1,33,32,35,-1,33,35,36,-1,38,37,39,-1,38,39,40,-1]
IndexedFaceSet1710.solid = False
IndexedFaceSet1710.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,34,-1,32,34,35,-1,33,32,35,-1,33,35,36,-1,38,37,39,-1,38,39,40,-1]
Coordinate1711 = x3d.Coordinate()

IndexedFaceSet1710.coord = Coordinate1711

Shape1707.geometry = IndexedFaceSet1710

Scene15.children.append(Shape1707)
Shape1712 = x3d.Shape()
Appearance1713 = x3d.Appearance()
Material1714 = x3d.Material()
Material1714.ambientIntensity = 0
Material1714.diffuseColor = [0.784313738,0,0]
Material1714.shininess = 1

Appearance1713.material = Material1714

Shape1712.appearance = Appearance1713
IndexedFaceSet1715 = x3d.IndexedFaceSet()
IndexedFaceSet1715.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1]
IndexedFaceSet1715.solid = False
IndexedFaceSet1715.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1]
Coordinate1716 = x3d.Coordinate()

IndexedFaceSet1715.coord = Coordinate1716

Shape1712.geometry = IndexedFaceSet1715

Scene15.children.append(Shape1712)
Shape1717 = x3d.Shape()
Appearance1718 = x3d.Appearance()
Material1719 = x3d.Material()
Material1719.ambientIntensity = 0
Material1719.diffuseColor = [0.784313738,0,0]
Material1719.shininess = 1

Appearance1718.material = Material1719

Shape1717.appearance = Appearance1718
IndexedFaceSet1720 = x3d.IndexedFaceSet()
IndexedFaceSet1720.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet1720.solid = False
IndexedFaceSet1720.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
Coordinate1721 = x3d.Coordinate()

IndexedFaceSet1720.coord = Coordinate1721

Shape1717.geometry = IndexedFaceSet1720

Scene15.children.append(Shape1717)
Shape1722 = x3d.Shape()
Appearance1723 = x3d.Appearance()
Material1724 = x3d.Material()
Material1724.ambientIntensity = 0
Material1724.diffuseColor = [0.784313738,0,0]
Material1724.shininess = 1

Appearance1723.material = Material1724

Shape1722.appearance = Appearance1723
IndexedFaceSet1725 = x3d.IndexedFaceSet()
IndexedFaceSet1725.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1725.solid = False
IndexedFaceSet1725.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1726 = x3d.Coordinate()

IndexedFaceSet1725.coord = Coordinate1726

Shape1722.geometry = IndexedFaceSet1725

Scene15.children.append(Shape1722)
Shape1727 = x3d.Shape()
Appearance1728 = x3d.Appearance()
Material1729 = x3d.Material()
Material1729.ambientIntensity = 0
Material1729.diffuseColor = [0.784313738,0,0]
Material1729.shininess = 1

Appearance1728.material = Material1729

Shape1727.appearance = Appearance1728
IndexedFaceSet1730 = x3d.IndexedFaceSet()
IndexedFaceSet1730.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1]
IndexedFaceSet1730.solid = False
IndexedFaceSet1730.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1]
Coordinate1731 = x3d.Coordinate()

IndexedFaceSet1730.coord = Coordinate1731

Shape1727.geometry = IndexedFaceSet1730

Scene15.children.append(Shape1727)
Shape1732 = x3d.Shape()
Appearance1733 = x3d.Appearance()
Material1734 = x3d.Material()
Material1734.ambientIntensity = 0
Material1734.diffuseColor = [0.784313738,0,0]
Material1734.shininess = 1

Appearance1733.material = Material1734

Shape1732.appearance = Appearance1733
IndexedFaceSet1735 = x3d.IndexedFaceSet()
IndexedFaceSet1735.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1735.solid = False
IndexedFaceSet1735.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1736 = x3d.Coordinate()

IndexedFaceSet1735.coord = Coordinate1736

Shape1732.geometry = IndexedFaceSet1735

Scene15.children.append(Shape1732)
Shape1737 = x3d.Shape()
Appearance1738 = x3d.Appearance()
Material1739 = x3d.Material()
Material1739.ambientIntensity = 0
Material1739.diffuseColor = [0.784313738,0,0]
Material1739.shininess = 1

Appearance1738.material = Material1739

Shape1737.appearance = Appearance1738
IndexedFaceSet1740 = x3d.IndexedFaceSet()
IndexedFaceSet1740.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
IndexedFaceSet1740.solid = False
IndexedFaceSet1740.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1]
Coordinate1741 = x3d.Coordinate()

IndexedFaceSet1740.coord = Coordinate1741

Shape1737.geometry = IndexedFaceSet1740

Scene15.children.append(Shape1737)
Shape1742 = x3d.Shape()
Appearance1743 = x3d.Appearance()
Material1744 = x3d.Material()
Material1744.ambientIntensity = 0
Material1744.diffuseColor = [0.784313738,0,0]
Material1744.shininess = 1

Appearance1743.material = Material1744

Shape1742.appearance = Appearance1743
IndexedFaceSet1745 = x3d.IndexedFaceSet()
IndexedFaceSet1745.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1745.solid = False
IndexedFaceSet1745.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1746 = x3d.Coordinate()

IndexedFaceSet1745.coord = Coordinate1746

Shape1742.geometry = IndexedFaceSet1745

Scene15.children.append(Shape1742)
Shape1747 = x3d.Shape()
Appearance1748 = x3d.Appearance()
Material1749 = x3d.Material()
Material1749.ambientIntensity = 0
Material1749.diffuseColor = [0.784313738,0,0]
Material1749.shininess = 1

Appearance1748.material = Material1749

Shape1747.appearance = Appearance1748
IndexedFaceSet1750 = x3d.IndexedFaceSet()
IndexedFaceSet1750.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,34,-1,32,34,35,-1,33,32,35,-1,33,35,36,-1,38,37,39,-1,38,39,40,-1]
IndexedFaceSet1750.solid = False
IndexedFaceSet1750.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,34,-1,32,34,35,-1,33,32,35,-1,33,35,36,-1,38,37,39,-1,38,39,40,-1]
Coordinate1751 = x3d.Coordinate()

IndexedFaceSet1750.coord = Coordinate1751

Shape1747.geometry = IndexedFaceSet1750

Scene15.children.append(Shape1747)
Shape1752 = x3d.Shape()
Appearance1753 = x3d.Appearance()
Material1754 = x3d.Material()
Material1754.ambientIntensity = 0
Material1754.diffuseColor = [0.784313738,0,0]
Material1754.shininess = 1

Appearance1753.material = Material1754

Shape1752.appearance = Appearance1753
IndexedFaceSet1755 = x3d.IndexedFaceSet()
IndexedFaceSet1755.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1755.solid = False
IndexedFaceSet1755.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1756 = x3d.Coordinate()

IndexedFaceSet1755.coord = Coordinate1756

Shape1752.geometry = IndexedFaceSet1755

Scene15.children.append(Shape1752)
Shape1757 = x3d.Shape()
Appearance1758 = x3d.Appearance()
Material1759 = x3d.Material()
Material1759.ambientIntensity = 0
Material1759.diffuseColor = [0.784313738,0,0]
Material1759.shininess = 1

Appearance1758.material = Material1759

Shape1757.appearance = Appearance1758
IndexedFaceSet1760 = x3d.IndexedFaceSet()
IndexedFaceSet1760.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1760.solid = False
IndexedFaceSet1760.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1761 = x3d.Coordinate()

IndexedFaceSet1760.coord = Coordinate1761

Shape1757.geometry = IndexedFaceSet1760

Scene15.children.append(Shape1757)
Shape1762 = x3d.Shape()
Appearance1763 = x3d.Appearance()
Material1764 = x3d.Material()
Material1764.ambientIntensity = 0
Material1764.diffuseColor = [0.784313738,0,0]
Material1764.shininess = 1

Appearance1763.material = Material1764

Shape1762.appearance = Appearance1763
IndexedFaceSet1765 = x3d.IndexedFaceSet()
IndexedFaceSet1765.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1765.solid = False
IndexedFaceSet1765.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1766 = x3d.Coordinate()

IndexedFaceSet1765.coord = Coordinate1766

Shape1762.geometry = IndexedFaceSet1765

Scene15.children.append(Shape1762)
Shape1767 = x3d.Shape()
Appearance1768 = x3d.Appearance()
Material1769 = x3d.Material()
Material1769.ambientIntensity = 0
Material1769.diffuseColor = [0.784313738,0,0]
Material1769.shininess = 1

Appearance1768.material = Material1769

Shape1767.appearance = Appearance1768
IndexedFaceSet1770 = x3d.IndexedFaceSet()
IndexedFaceSet1770.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1]
IndexedFaceSet1770.solid = False
IndexedFaceSet1770.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1]
Coordinate1771 = x3d.Coordinate()

IndexedFaceSet1770.coord = Coordinate1771

Shape1767.geometry = IndexedFaceSet1770

Scene15.children.append(Shape1767)
Shape1772 = x3d.Shape()
Appearance1773 = x3d.Appearance()
Material1774 = x3d.Material()
Material1774.ambientIntensity = 0
Material1774.diffuseColor = [0.784313738,0,0]
Material1774.shininess = 1

Appearance1773.material = Material1774

Shape1772.appearance = Appearance1773
IndexedFaceSet1775 = x3d.IndexedFaceSet()
IndexedFaceSet1775.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1775.solid = False
IndexedFaceSet1775.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1776 = x3d.Coordinate()

IndexedFaceSet1775.coord = Coordinate1776

Shape1772.geometry = IndexedFaceSet1775

Scene15.children.append(Shape1772)
Shape1777 = x3d.Shape()
Appearance1778 = x3d.Appearance()
Material1779 = x3d.Material()
Material1779.ambientIntensity = 0
Material1779.diffuseColor = [0.784313738,0,0]
Material1779.shininess = 1

Appearance1778.material = Material1779

Shape1777.appearance = Appearance1778
IndexedFaceSet1780 = x3d.IndexedFaceSet()
IndexedFaceSet1780.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1780.solid = False
IndexedFaceSet1780.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1781 = x3d.Coordinate()

IndexedFaceSet1780.coord = Coordinate1781

Shape1777.geometry = IndexedFaceSet1780

Scene15.children.append(Shape1777)
Shape1782 = x3d.Shape()
Appearance1783 = x3d.Appearance()
Material1784 = x3d.Material()
Material1784.ambientIntensity = 0
Material1784.diffuseColor = [0.784313738,0,0]
Material1784.shininess = 1

Appearance1783.material = Material1784

Shape1782.appearance = Appearance1783
IndexedFaceSet1785 = x3d.IndexedFaceSet()
IndexedFaceSet1785.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1785.solid = False
IndexedFaceSet1785.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1786 = x3d.Coordinate()

IndexedFaceSet1785.coord = Coordinate1786

Shape1782.geometry = IndexedFaceSet1785

Scene15.children.append(Shape1782)
Shape1787 = x3d.Shape()
Appearance1788 = x3d.Appearance()
Material1789 = x3d.Material()
Material1789.ambientIntensity = 0
Material1789.diffuseColor = [0.784313738,0,0]
Material1789.shininess = 1

Appearance1788.material = Material1789

Shape1787.appearance = Appearance1788
IndexedFaceSet1790 = x3d.IndexedFaceSet()
IndexedFaceSet1790.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1790.solid = False
IndexedFaceSet1790.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1791 = x3d.Coordinate()

IndexedFaceSet1790.coord = Coordinate1791

Shape1787.geometry = IndexedFaceSet1790

Scene15.children.append(Shape1787)
Shape1792 = x3d.Shape()
Appearance1793 = x3d.Appearance()
Material1794 = x3d.Material()
Material1794.ambientIntensity = 0
Material1794.diffuseColor = [0.784313738,0,0]
Material1794.shininess = 1

Appearance1793.material = Material1794

Shape1792.appearance = Appearance1793
IndexedFaceSet1795 = x3d.IndexedFaceSet()
IndexedFaceSet1795.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1795.solid = False
IndexedFaceSet1795.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1796 = x3d.Coordinate()

IndexedFaceSet1795.coord = Coordinate1796

Shape1792.geometry = IndexedFaceSet1795

Scene15.children.append(Shape1792)
Shape1797 = x3d.Shape()
Appearance1798 = x3d.Appearance()
Material1799 = x3d.Material()
Material1799.ambientIntensity = 0
Material1799.diffuseColor = [0.784313738,0,0]
Material1799.shininess = 1

Appearance1798.material = Material1799

Shape1797.appearance = Appearance1798
IndexedFaceSet1800 = x3d.IndexedFaceSet()
IndexedFaceSet1800.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1800.solid = False
IndexedFaceSet1800.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1801 = x3d.Coordinate()

IndexedFaceSet1800.coord = Coordinate1801

Shape1797.geometry = IndexedFaceSet1800

Scene15.children.append(Shape1797)
Shape1802 = x3d.Shape()
Appearance1803 = x3d.Appearance()
Material1804 = x3d.Material()
Material1804.ambientIntensity = 0
Material1804.diffuseColor = [0.784313738,0,0]
Material1804.shininess = 1

Appearance1803.material = Material1804

Shape1802.appearance = Appearance1803
IndexedFaceSet1805 = x3d.IndexedFaceSet()
IndexedFaceSet1805.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1805.solid = False
IndexedFaceSet1805.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1806 = x3d.Coordinate()

IndexedFaceSet1805.coord = Coordinate1806

Shape1802.geometry = IndexedFaceSet1805

Scene15.children.append(Shape1802)
Shape1807 = x3d.Shape()
Appearance1808 = x3d.Appearance()
Material1809 = x3d.Material()
Material1809.ambientIntensity = 0
Material1809.diffuseColor = [0.784313738,0,0]
Material1809.shininess = 1

Appearance1808.material = Material1809

Shape1807.appearance = Appearance1808
IndexedFaceSet1810 = x3d.IndexedFaceSet()
IndexedFaceSet1810.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,34,-1,32,34,35,-1,33,32,35,-1,33,35,36,-1,38,37,39,-1,38,39,40,-1]
IndexedFaceSet1810.solid = False
IndexedFaceSet1810.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,34,-1,32,34,35,-1,33,32,35,-1,33,35,36,-1,38,37,39,-1,38,39,40,-1]
Coordinate1811 = x3d.Coordinate()

IndexedFaceSet1810.coord = Coordinate1811

Shape1807.geometry = IndexedFaceSet1810

Scene15.children.append(Shape1807)
Shape1812 = x3d.Shape()
Appearance1813 = x3d.Appearance()
Material1814 = x3d.Material()
Material1814.ambientIntensity = 0
Material1814.diffuseColor = [0.784313738,0,0]
Material1814.shininess = 1

Appearance1813.material = Material1814

Shape1812.appearance = Appearance1813
IndexedFaceSet1815 = x3d.IndexedFaceSet()
IndexedFaceSet1815.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1815.solid = False
IndexedFaceSet1815.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1816 = x3d.Coordinate()

IndexedFaceSet1815.coord = Coordinate1816

Shape1812.geometry = IndexedFaceSet1815

Scene15.children.append(Shape1812)
Shape1817 = x3d.Shape()
Appearance1818 = x3d.Appearance()
Material1819 = x3d.Material()
Material1819.ambientIntensity = 0
Material1819.diffuseColor = [0.784313738,0,0]
Material1819.shininess = 1

Appearance1818.material = Material1819

Shape1817.appearance = Appearance1818
IndexedFaceSet1820 = x3d.IndexedFaceSet()
IndexedFaceSet1820.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1820.solid = False
IndexedFaceSet1820.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1821 = x3d.Coordinate()

IndexedFaceSet1820.coord = Coordinate1821

Shape1817.geometry = IndexedFaceSet1820

Scene15.children.append(Shape1817)
Shape1822 = x3d.Shape()
Appearance1823 = x3d.Appearance()
Material1824 = x3d.Material()
Material1824.ambientIntensity = 0
Material1824.diffuseColor = [0.784313738,0,0]
Material1824.shininess = 1

Appearance1823.material = Material1824

Shape1822.appearance = Appearance1823
IndexedFaceSet1825 = x3d.IndexedFaceSet()
IndexedFaceSet1825.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1825.solid = False
IndexedFaceSet1825.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1826 = x3d.Coordinate()

IndexedFaceSet1825.coord = Coordinate1826

Shape1822.geometry = IndexedFaceSet1825

Scene15.children.append(Shape1822)
Shape1827 = x3d.Shape()
Appearance1828 = x3d.Appearance()
Material1829 = x3d.Material()
Material1829.ambientIntensity = 0
Material1829.diffuseColor = [0.784313738,0,0]
Material1829.shininess = 1

Appearance1828.material = Material1829

Shape1827.appearance = Appearance1828
IndexedFaceSet1830 = x3d.IndexedFaceSet()
IndexedFaceSet1830.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1830.solid = False
IndexedFaceSet1830.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1831 = x3d.Coordinate()

IndexedFaceSet1830.coord = Coordinate1831

Shape1827.geometry = IndexedFaceSet1830

Scene15.children.append(Shape1827)
Shape1832 = x3d.Shape()
Appearance1833 = x3d.Appearance()
Material1834 = x3d.Material()
Material1834.ambientIntensity = 0
Material1834.diffuseColor = [0.784313738,0,0]
Material1834.shininess = 1

Appearance1833.material = Material1834

Shape1832.appearance = Appearance1833
IndexedFaceSet1835 = x3d.IndexedFaceSet()
IndexedFaceSet1835.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1]
IndexedFaceSet1835.solid = False
IndexedFaceSet1835.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1]
Coordinate1836 = x3d.Coordinate()

IndexedFaceSet1835.coord = Coordinate1836

Shape1832.geometry = IndexedFaceSet1835

Scene15.children.append(Shape1832)
Shape1837 = x3d.Shape()
Appearance1838 = x3d.Appearance()
Material1839 = x3d.Material()
Material1839.ambientIntensity = 0
Material1839.diffuseColor = [0.784313738,0,0]
Material1839.shininess = 1

Appearance1838.material = Material1839

Shape1837.appearance = Appearance1838
IndexedFaceSet1840 = x3d.IndexedFaceSet()
IndexedFaceSet1840.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,29,20,18,-1,21,23,29,-1,18,21,29,-1,25,23,21,-1,15,22,25,-1,21,15,25,-1,23,25,27,-1,23,27,24,-1,25,22,26,-1,25,26,27,-1,20,29,30,-1,20,30,28,-1,29,23,24,-1,29,24,30,-1,37,35,33,-1,37,33,36,-1,34,37,36,-1,34,36,31,-1,40,38,32,-1,40,32,39,-1,35,40,39,-1,35,39,33,-1,39,32,15,-1,21,33,39,-1,15,21,39,-1,36,33,21,-1,18,31,36,-1,21,18,36,-1,26,14,27,-1,24,27,14,-1,40,16,38,-1,35,16,40,-1,24,14,17,-1,28,30,17,-1,24,17,30,-1,19,35,37,-1,37,34,19,-1,16,35,19,-1]
IndexedFaceSet1840.solid = False
IndexedFaceSet1840.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,29,20,18,-1,21,23,29,-1,18,21,29,-1,25,23,21,-1,15,22,25,-1,21,15,25,-1,23,25,27,-1,23,27,24,-1,25,22,26,-1,25,26,27,-1,20,29,30,-1,20,30,28,-1,29,23,24,-1,29,24,30,-1,37,35,33,-1,37,33,36,-1,34,37,36,-1,34,36,31,-1,40,38,32,-1,40,32,39,-1,35,40,39,-1,35,39,33,-1,39,32,15,-1,21,33,39,-1,15,21,39,-1,36,33,21,-1,18,31,36,-1,21,18,36,-1,26,14,27,-1,24,27,14,-1,40,16,38,-1,35,16,40,-1,24,14,17,-1,28,30,17,-1,24,17,30,-1,19,35,37,-1,37,34,19,-1,16,35,19,-1]
Coordinate1841 = x3d.Coordinate()

IndexedFaceSet1840.coord = Coordinate1841

Shape1837.geometry = IndexedFaceSet1840

Scene15.children.append(Shape1837)
Shape1842 = x3d.Shape()
Appearance1843 = x3d.Appearance()
Material1844 = x3d.Material()
Material1844.ambientIntensity = 0
Material1844.diffuseColor = [0.784313738,0,0]
Material1844.shininess = 1

Appearance1843.material = Material1844

Shape1842.appearance = Appearance1843
IndexedFaceSet1845 = x3d.IndexedFaceSet()
IndexedFaceSet1845.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1845.solid = False
IndexedFaceSet1845.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1846 = x3d.Coordinate()

IndexedFaceSet1845.coord = Coordinate1846

Shape1842.geometry = IndexedFaceSet1845

Scene15.children.append(Shape1842)
Shape1847 = x3d.Shape()
Appearance1848 = x3d.Appearance()
Material1849 = x3d.Material()
Material1849.ambientIntensity = 0
Material1849.diffuseColor = [0.784313738,0,0]
Material1849.shininess = 1

Appearance1848.material = Material1849

Shape1847.appearance = Appearance1848
IndexedFaceSet1850 = x3d.IndexedFaceSet()
IndexedFaceSet1850.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1850.solid = False
IndexedFaceSet1850.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1851 = x3d.Coordinate()

IndexedFaceSet1850.coord = Coordinate1851

Shape1847.geometry = IndexedFaceSet1850

Scene15.children.append(Shape1847)
Shape1852 = x3d.Shape()
Appearance1853 = x3d.Appearance()
Material1854 = x3d.Material()
Material1854.ambientIntensity = 0
Material1854.diffuseColor = [0.784313738,0,0]
Material1854.shininess = 1

Appearance1853.material = Material1854

Shape1852.appearance = Appearance1853
IndexedFaceSet1855 = x3d.IndexedFaceSet()
IndexedFaceSet1855.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1]
IndexedFaceSet1855.solid = False
IndexedFaceSet1855.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1]
Coordinate1856 = x3d.Coordinate()

IndexedFaceSet1855.coord = Coordinate1856

Shape1852.geometry = IndexedFaceSet1855

Scene15.children.append(Shape1852)
Shape1857 = x3d.Shape()
Appearance1858 = x3d.Appearance()
Material1859 = x3d.Material()
Material1859.ambientIntensity = 0
Material1859.diffuseColor = [0.784313738,0,0]
Material1859.shininess = 1

Appearance1858.material = Material1859

Shape1857.appearance = Appearance1858
IndexedFaceSet1860 = x3d.IndexedFaceSet()
IndexedFaceSet1860.coordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,34,-1,32,34,35,-1,33,32,35,-1,33,35,36,-1,38,37,39,-1,38,39,40,-1]
IndexedFaceSet1860.solid = False
IndexedFaceSet1860.texCoordIndex = [1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,34,-1,32,34,35,-1,33,32,35,-1,33,35,36,-1,38,37,39,-1,38,39,40,-1]
Coordinate1861 = x3d.Coordinate()

IndexedFaceSet1860.coord = Coordinate1861

Shape1857.geometry = IndexedFaceSet1860

Scene15.children.append(Shape1857)
Shape1862 = x3d.Shape()
Appearance1863 = x3d.Appearance()
Material1864 = x3d.Material()
Material1864.ambientIntensity = 0
Material1864.diffuseColor = [0.784313738,0,0]
Material1864.shininess = 1

Appearance1863.material = Material1864

Shape1862.appearance = Appearance1863
IndexedFaceSet1865 = x3d.IndexedFaceSet()
IndexedFaceSet1865.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1865.solid = False
IndexedFaceSet1865.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1866 = x3d.Coordinate()

IndexedFaceSet1865.coord = Coordinate1866

Shape1862.geometry = IndexedFaceSet1865

Scene15.children.append(Shape1862)
Shape1867 = x3d.Shape()
Appearance1868 = x3d.Appearance()
Material1869 = x3d.Material()
Material1869.ambientIntensity = 0
Material1869.diffuseColor = [0.784313738,0,0]
Material1869.shininess = 1

Appearance1868.material = Material1869

Shape1867.appearance = Appearance1868
IndexedFaceSet1870 = x3d.IndexedFaceSet()
IndexedFaceSet1870.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1870.solid = False
IndexedFaceSet1870.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1871 = x3d.Coordinate()

IndexedFaceSet1870.coord = Coordinate1871

Shape1867.geometry = IndexedFaceSet1870

Scene15.children.append(Shape1867)
Shape1872 = x3d.Shape()
Appearance1873 = x3d.Appearance()
Material1874 = x3d.Material()
Material1874.ambientIntensity = 0
Material1874.diffuseColor = [0.784313738,0,0]
Material1874.shininess = 1

Appearance1873.material = Material1874

Shape1872.appearance = Appearance1873
IndexedFaceSet1875 = x3d.IndexedFaceSet()
IndexedFaceSet1875.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,36,-1,34,36,37,-1,35,34,37,-1,35,37,38,-1,40,39,41,-1,40,41,42,-1]
IndexedFaceSet1875.solid = False
IndexedFaceSet1875.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,36,-1,34,36,37,-1,35,34,37,-1,35,37,38,-1,40,39,41,-1,40,41,42,-1]
Coordinate1876 = x3d.Coordinate()

IndexedFaceSet1875.coord = Coordinate1876

Shape1872.geometry = IndexedFaceSet1875

Scene15.children.append(Shape1872)
Shape1877 = x3d.Shape()
Appearance1878 = x3d.Appearance()
Material1879 = x3d.Material()
Material1879.ambientIntensity = 0
Material1879.diffuseColor = [0.784313738,0,0]
Material1879.shininess = 1

Appearance1878.material = Material1879

Shape1877.appearance = Appearance1878
IndexedFaceSet1880 = x3d.IndexedFaceSet()
IndexedFaceSet1880.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1880.solid = False
IndexedFaceSet1880.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1881 = x3d.Coordinate()

IndexedFaceSet1880.coord = Coordinate1881

Shape1877.geometry = IndexedFaceSet1880

Scene15.children.append(Shape1877)
Shape1882 = x3d.Shape()
Appearance1883 = x3d.Appearance()
Material1884 = x3d.Material()
Material1884.ambientIntensity = 0
Material1884.diffuseColor = [0.784313738,0,0]
Material1884.shininess = 1

Appearance1883.material = Material1884

Shape1882.appearance = Appearance1883
IndexedFaceSet1885 = x3d.IndexedFaceSet()
IndexedFaceSet1885.coordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet1885.solid = False
IndexedFaceSet1885.texCoordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
Coordinate1886 = x3d.Coordinate()

IndexedFaceSet1885.coord = Coordinate1886

Shape1882.geometry = IndexedFaceSet1885

Scene15.children.append(Shape1882)
Shape1887 = x3d.Shape()
Appearance1888 = x3d.Appearance()
Material1889 = x3d.Material()
Material1889.ambientIntensity = 0
Material1889.diffuseColor = [0.784313738,0,0]
Material1889.shininess = 1

Appearance1888.material = Material1889

Shape1887.appearance = Appearance1888
IndexedFaceSet1890 = x3d.IndexedFaceSet()
IndexedFaceSet1890.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1]
IndexedFaceSet1890.solid = False
IndexedFaceSet1890.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1]
Coordinate1891 = x3d.Coordinate()

IndexedFaceSet1890.coord = Coordinate1891

Shape1887.geometry = IndexedFaceSet1890

Scene15.children.append(Shape1887)
Shape1892 = x3d.Shape()
Appearance1893 = x3d.Appearance()
Material1894 = x3d.Material()
Material1894.ambientIntensity = 0
Material1894.diffuseColor = [0.784313738,0,0]
Material1894.shininess = 1

Appearance1893.material = Material1894

Shape1892.appearance = Appearance1893
IndexedFaceSet1895 = x3d.IndexedFaceSet()
IndexedFaceSet1895.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1895.solid = False
IndexedFaceSet1895.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1896 = x3d.Coordinate()

IndexedFaceSet1895.coord = Coordinate1896

Shape1892.geometry = IndexedFaceSet1895

Scene15.children.append(Shape1892)
Shape1897 = x3d.Shape()
Appearance1898 = x3d.Appearance()
Material1899 = x3d.Material()
Material1899.ambientIntensity = 0
Material1899.diffuseColor = [0.784313738,0,0]
Material1899.shininess = 1

Appearance1898.material = Material1899

Shape1897.appearance = Appearance1898
IndexedFaceSet1900 = x3d.IndexedFaceSet()
IndexedFaceSet1900.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1900.solid = False
IndexedFaceSet1900.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1901 = x3d.Coordinate()

IndexedFaceSet1900.coord = Coordinate1901

Shape1897.geometry = IndexedFaceSet1900

Scene15.children.append(Shape1897)
Shape1902 = x3d.Shape()
Appearance1903 = x3d.Appearance()
Material1904 = x3d.Material()
Material1904.ambientIntensity = 0
Material1904.diffuseColor = [0.784313738,0,0]
Material1904.shininess = 1

Appearance1903.material = Material1904

Shape1902.appearance = Appearance1903
IndexedFaceSet1905 = x3d.IndexedFaceSet()
IndexedFaceSet1905.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1905.solid = False
IndexedFaceSet1905.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1906 = x3d.Coordinate()

IndexedFaceSet1905.coord = Coordinate1906

Shape1902.geometry = IndexedFaceSet1905

Scene15.children.append(Shape1902)
Shape1907 = x3d.Shape()
Appearance1908 = x3d.Appearance()
Material1909 = x3d.Material()
Material1909.ambientIntensity = 0
Material1909.diffuseColor = [0.784313738,0,0]
Material1909.shininess = 1

Appearance1908.material = Material1909

Shape1907.appearance = Appearance1908
IndexedFaceSet1910 = x3d.IndexedFaceSet()
IndexedFaceSet1910.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1]
IndexedFaceSet1910.solid = False
IndexedFaceSet1910.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1]
Coordinate1911 = x3d.Coordinate()

IndexedFaceSet1910.coord = Coordinate1911

Shape1907.geometry = IndexedFaceSet1910

Scene15.children.append(Shape1907)
Shape1912 = x3d.Shape()
Appearance1913 = x3d.Appearance()
Material1914 = x3d.Material()
Material1914.ambientIntensity = 0
Material1914.diffuseColor = [0.784313738,0,0]
Material1914.shininess = 1

Appearance1913.material = Material1914

Shape1912.appearance = Appearance1913
IndexedFaceSet1915 = x3d.IndexedFaceSet()
IndexedFaceSet1915.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1]
IndexedFaceSet1915.solid = False
IndexedFaceSet1915.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1]
Coordinate1916 = x3d.Coordinate()

IndexedFaceSet1915.coord = Coordinate1916

Shape1912.geometry = IndexedFaceSet1915

Scene15.children.append(Shape1912)
Shape1917 = x3d.Shape()
Appearance1918 = x3d.Appearance()
Material1919 = x3d.Material()
Material1919.ambientIntensity = 0
Material1919.diffuseColor = [0.784313738,0,0]
Material1919.shininess = 1

Appearance1918.material = Material1919

Shape1917.appearance = Appearance1918
IndexedFaceSet1920 = x3d.IndexedFaceSet()
IndexedFaceSet1920.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet1920.solid = False
IndexedFaceSet1920.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1]
Coordinate1921 = x3d.Coordinate()

IndexedFaceSet1920.coord = Coordinate1921

Shape1917.geometry = IndexedFaceSet1920

Scene15.children.append(Shape1917)
Shape1922 = x3d.Shape()
Appearance1923 = x3d.Appearance()
Material1924 = x3d.Material()
Material1924.ambientIntensity = 0
Material1924.diffuseColor = [0.784313738,0,0]
Material1924.shininess = 1

Appearance1923.material = Material1924

Shape1922.appearance = Appearance1923
IndexedFaceSet1925 = x3d.IndexedFaceSet()
IndexedFaceSet1925.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1925.solid = False
IndexedFaceSet1925.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1926 = x3d.Coordinate()

IndexedFaceSet1925.coord = Coordinate1926

Shape1922.geometry = IndexedFaceSet1925

Scene15.children.append(Shape1922)
Shape1927 = x3d.Shape()
Appearance1928 = x3d.Appearance()
Material1929 = x3d.Material()
Material1929.ambientIntensity = 0
Material1929.diffuseColor = [0.784313738,0,0]
Material1929.shininess = 1

Appearance1928.material = Material1929

Shape1927.appearance = Appearance1928
IndexedFaceSet1930 = x3d.IndexedFaceSet()
IndexedFaceSet1930.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1930.solid = False
IndexedFaceSet1930.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1931 = x3d.Coordinate()

IndexedFaceSet1930.coord = Coordinate1931

Shape1927.geometry = IndexedFaceSet1930

Scene15.children.append(Shape1927)
Shape1932 = x3d.Shape()
Appearance1933 = x3d.Appearance()
Material1934 = x3d.Material()
Material1934.ambientIntensity = 0
Material1934.diffuseColor = [0.784313738,0,0]
Material1934.shininess = 1

Appearance1933.material = Material1934

Shape1932.appearance = Appearance1933
IndexedFaceSet1935 = x3d.IndexedFaceSet()
IndexedFaceSet1935.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1935.solid = False
IndexedFaceSet1935.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1936 = x3d.Coordinate()

IndexedFaceSet1935.coord = Coordinate1936

Shape1932.geometry = IndexedFaceSet1935

Scene15.children.append(Shape1932)
Shape1937 = x3d.Shape()
Appearance1938 = x3d.Appearance()
Material1939 = x3d.Material()
Material1939.ambientIntensity = 0
Material1939.diffuseColor = [0.784313738,0,0]
Material1939.shininess = 1

Appearance1938.material = Material1939

Shape1937.appearance = Appearance1938
IndexedFaceSet1940 = x3d.IndexedFaceSet()
IndexedFaceSet1940.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1940.solid = False
IndexedFaceSet1940.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1941 = x3d.Coordinate()

IndexedFaceSet1940.coord = Coordinate1941

Shape1937.geometry = IndexedFaceSet1940

Scene15.children.append(Shape1937)
Shape1942 = x3d.Shape()
Appearance1943 = x3d.Appearance()
Material1944 = x3d.Material()
Material1944.ambientIntensity = 0
Material1944.diffuseColor = [0.784313738,0,0]
Material1944.shininess = 1

Appearance1943.material = Material1944

Shape1942.appearance = Appearance1943
IndexedFaceSet1945 = x3d.IndexedFaceSet()
IndexedFaceSet1945.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1945.solid = False
IndexedFaceSet1945.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1946 = x3d.Coordinate()

IndexedFaceSet1945.coord = Coordinate1946

Shape1942.geometry = IndexedFaceSet1945

Scene15.children.append(Shape1942)
Shape1947 = x3d.Shape()
Appearance1948 = x3d.Appearance()
Material1949 = x3d.Material()
Material1949.ambientIntensity = 0
Material1949.diffuseColor = [0.784313738,0,0]
Material1949.shininess = 1

Appearance1948.material = Material1949

Shape1947.appearance = Appearance1948
IndexedFaceSet1950 = x3d.IndexedFaceSet()
IndexedFaceSet1950.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,29,20,18,-1,21,23,29,-1,18,21,29,-1,25,23,21,-1,15,22,25,-1,21,15,25,-1,23,25,27,-1,23,27,24,-1,25,22,26,-1,25,26,27,-1,20,29,30,-1,20,30,28,-1,29,23,24,-1,29,24,30,-1,37,35,33,-1,37,33,36,-1,34,37,36,-1,34,36,31,-1,40,38,32,-1,40,32,39,-1,35,40,39,-1,35,39,33,-1,39,32,15,-1,21,33,39,-1,15,21,39,-1,36,33,21,-1,18,31,36,-1,21,18,36,-1,26,14,27,-1,24,27,14,-1,40,16,38,-1,35,16,40,-1,24,14,17,-1,28,30,17,-1,24,17,30,-1,19,35,37,-1,37,34,19,-1,16,35,19,-1]
IndexedFaceSet1950.solid = False
IndexedFaceSet1950.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,29,20,18,-1,21,23,29,-1,18,21,29,-1,25,23,21,-1,15,22,25,-1,21,15,25,-1,23,25,27,-1,23,27,24,-1,25,22,26,-1,25,26,27,-1,20,29,30,-1,20,30,28,-1,29,23,24,-1,29,24,30,-1,37,35,33,-1,37,33,36,-1,34,37,36,-1,34,36,31,-1,40,38,32,-1,40,32,39,-1,35,40,39,-1,35,39,33,-1,39,32,15,-1,21,33,39,-1,15,21,39,-1,36,33,21,-1,18,31,36,-1,21,18,36,-1,26,14,27,-1,24,27,14,-1,40,16,38,-1,35,16,40,-1,24,14,17,-1,28,30,17,-1,24,17,30,-1,19,35,37,-1,37,34,19,-1,16,35,19,-1]
Coordinate1951 = x3d.Coordinate()

IndexedFaceSet1950.coord = Coordinate1951

Shape1947.geometry = IndexedFaceSet1950

Scene15.children.append(Shape1947)
Shape1952 = x3d.Shape()
Appearance1953 = x3d.Appearance()
Material1954 = x3d.Material()
Material1954.ambientIntensity = 0
Material1954.diffuseColor = [0.784313738,0,0]
Material1954.shininess = 1

Appearance1953.material = Material1954

Shape1952.appearance = Appearance1953
IndexedFaceSet1955 = x3d.IndexedFaceSet()
IndexedFaceSet1955.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1955.solid = False
IndexedFaceSet1955.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1956 = x3d.Coordinate()

IndexedFaceSet1955.coord = Coordinate1956

Shape1952.geometry = IndexedFaceSet1955

Scene15.children.append(Shape1952)
Shape1957 = x3d.Shape()
Appearance1958 = x3d.Appearance()
Material1959 = x3d.Material()
Material1959.ambientIntensity = 0
Material1959.diffuseColor = [0.784313738,0,0]
Material1959.shininess = 1

Appearance1958.material = Material1959

Shape1957.appearance = Appearance1958
IndexedFaceSet1960 = x3d.IndexedFaceSet()
IndexedFaceSet1960.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1960.solid = False
IndexedFaceSet1960.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1961 = x3d.Coordinate()

IndexedFaceSet1960.coord = Coordinate1961

Shape1957.geometry = IndexedFaceSet1960

Scene15.children.append(Shape1957)
Shape1962 = x3d.Shape()
Appearance1963 = x3d.Appearance()
Material1964 = x3d.Material()
Material1964.ambientIntensity = 0
Material1964.diffuseColor = [0.784313738,0,0]
Material1964.shininess = 1

Appearance1963.material = Material1964

Shape1962.appearance = Appearance1963
IndexedFaceSet1965 = x3d.IndexedFaceSet()
IndexedFaceSet1965.coordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet1965.solid = False
IndexedFaceSet1965.texCoordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
Coordinate1966 = x3d.Coordinate()

IndexedFaceSet1965.coord = Coordinate1966

Shape1962.geometry = IndexedFaceSet1965

Scene15.children.append(Shape1962)
Shape1967 = x3d.Shape()
Appearance1968 = x3d.Appearance()
Material1969 = x3d.Material()
Material1969.ambientIntensity = 0
Material1969.diffuseColor = [0.784313738,0,0]
Material1969.shininess = 1

Appearance1968.material = Material1969

Shape1967.appearance = Appearance1968
IndexedFaceSet1970 = x3d.IndexedFaceSet()
IndexedFaceSet1970.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1970.solid = False
IndexedFaceSet1970.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1971 = x3d.Coordinate()

IndexedFaceSet1970.coord = Coordinate1971

Shape1967.geometry = IndexedFaceSet1970

Scene15.children.append(Shape1967)
Shape1972 = x3d.Shape()
Appearance1973 = x3d.Appearance()
Material1974 = x3d.Material()
Material1974.ambientIntensity = 0
Material1974.diffuseColor = [0.784313738,0,0]
Material1974.shininess = 1

Appearance1973.material = Material1974

Shape1972.appearance = Appearance1973
IndexedFaceSet1975 = x3d.IndexedFaceSet()
IndexedFaceSet1975.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1975.solid = False
IndexedFaceSet1975.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1976 = x3d.Coordinate()

IndexedFaceSet1975.coord = Coordinate1976

Shape1972.geometry = IndexedFaceSet1975

Scene15.children.append(Shape1972)
Shape1977 = x3d.Shape()
Appearance1978 = x3d.Appearance()
Material1979 = x3d.Material()
Material1979.ambientIntensity = 0
Material1979.diffuseColor = [0.784313738,0,0]
Material1979.shininess = 1

Appearance1978.material = Material1979

Shape1977.appearance = Appearance1978
IndexedFaceSet1980 = x3d.IndexedFaceSet()
IndexedFaceSet1980.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1980.solid = False
IndexedFaceSet1980.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1981 = x3d.Coordinate()

IndexedFaceSet1980.coord = Coordinate1981

Shape1977.geometry = IndexedFaceSet1980

Scene15.children.append(Shape1977)
Shape1982 = x3d.Shape()
Appearance1983 = x3d.Appearance()
Material1984 = x3d.Material()
Material1984.ambientIntensity = 0
Material1984.diffuseColor = [0.784313738,0,0]
Material1984.shininess = 1

Appearance1983.material = Material1984

Shape1982.appearance = Appearance1983
IndexedFaceSet1985 = x3d.IndexedFaceSet()
IndexedFaceSet1985.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1985.solid = False
IndexedFaceSet1985.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1986 = x3d.Coordinate()

IndexedFaceSet1985.coord = Coordinate1986

Shape1982.geometry = IndexedFaceSet1985

Scene15.children.append(Shape1982)
Shape1987 = x3d.Shape()
Appearance1988 = x3d.Appearance()
Material1989 = x3d.Material()
Material1989.ambientIntensity = 0
Material1989.diffuseColor = [0.784313738,0,0]
Material1989.shininess = 1

Appearance1988.material = Material1989

Shape1987.appearance = Appearance1988
IndexedFaceSet1990 = x3d.IndexedFaceSet()
IndexedFaceSet1990.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1990.solid = False
IndexedFaceSet1990.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1991 = x3d.Coordinate()

IndexedFaceSet1990.coord = Coordinate1991

Shape1987.geometry = IndexedFaceSet1990

Scene15.children.append(Shape1987)
Shape1992 = x3d.Shape()
Appearance1993 = x3d.Appearance()
Material1994 = x3d.Material()
Material1994.ambientIntensity = 0
Material1994.diffuseColor = [0.784313738,0,0]
Material1994.shininess = 1

Appearance1993.material = Material1994

Shape1992.appearance = Appearance1993
IndexedFaceSet1995 = x3d.IndexedFaceSet()
IndexedFaceSet1995.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet1995.solid = False
IndexedFaceSet1995.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate1996 = x3d.Coordinate()

IndexedFaceSet1995.coord = Coordinate1996

Shape1992.geometry = IndexedFaceSet1995

Scene15.children.append(Shape1992)
Shape1997 = x3d.Shape()
Appearance1998 = x3d.Appearance()
Material1999 = x3d.Material()
Material1999.ambientIntensity = 0
Material1999.diffuseColor = [0.784313738,0,0]
Material1999.shininess = 1

Appearance1998.material = Material1999

Shape1997.appearance = Appearance1998
IndexedFaceSet2000 = x3d.IndexedFaceSet()
IndexedFaceSet2000.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet2000.solid = False
IndexedFaceSet2000.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate2001 = x3d.Coordinate()

IndexedFaceSet2000.coord = Coordinate2001

Shape1997.geometry = IndexedFaceSet2000

Scene15.children.append(Shape1997)
Shape2002 = x3d.Shape()
Appearance2003 = x3d.Appearance()
Material2004 = x3d.Material()
Material2004.ambientIntensity = 0
Material2004.diffuseColor = [0.784313738,0,0]
Material2004.shininess = 1

Appearance2003.material = Material2004

Shape2002.appearance = Appearance2003
IndexedFaceSet2005 = x3d.IndexedFaceSet()
IndexedFaceSet2005.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet2005.solid = False
IndexedFaceSet2005.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate2006 = x3d.Coordinate()

IndexedFaceSet2005.coord = Coordinate2006

Shape2002.geometry = IndexedFaceSet2005

Scene15.children.append(Shape2002)
Shape2007 = x3d.Shape()
Appearance2008 = x3d.Appearance()
Material2009 = x3d.Material()
Material2009.ambientIntensity = 0
Material2009.diffuseColor = [0.784313738,0,0]
Material2009.shininess = 1

Appearance2008.material = Material2009

Shape2007.appearance = Appearance2008
IndexedFaceSet2010 = x3d.IndexedFaceSet()
IndexedFaceSet2010.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet2010.solid = False
IndexedFaceSet2010.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate2011 = x3d.Coordinate()

IndexedFaceSet2010.coord = Coordinate2011

Shape2007.geometry = IndexedFaceSet2010

Scene15.children.append(Shape2007)
Shape2012 = x3d.Shape()
Appearance2013 = x3d.Appearance()
Material2014 = x3d.Material()
Material2014.ambientIntensity = 0
Material2014.diffuseColor = [0.784313738,0,0]
Material2014.shininess = 1

Appearance2013.material = Material2014

Shape2012.appearance = Appearance2013
IndexedFaceSet2015 = x3d.IndexedFaceSet()
IndexedFaceSet2015.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet2015.solid = False
IndexedFaceSet2015.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate2016 = x3d.Coordinate()

IndexedFaceSet2015.coord = Coordinate2016

Shape2012.geometry = IndexedFaceSet2015

Scene15.children.append(Shape2012)
Shape2017 = x3d.Shape()
Appearance2018 = x3d.Appearance()
Material2019 = x3d.Material()
Material2019.ambientIntensity = 0
Material2019.diffuseColor = [0.784313738,0,0]
Material2019.shininess = 1

Appearance2018.material = Material2019

Shape2017.appearance = Appearance2018
IndexedFaceSet2020 = x3d.IndexedFaceSet()
IndexedFaceSet2020.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet2020.solid = False
IndexedFaceSet2020.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate2021 = x3d.Coordinate()

IndexedFaceSet2020.coord = Coordinate2021

Shape2017.geometry = IndexedFaceSet2020

Scene15.children.append(Shape2017)
Shape2022 = x3d.Shape()
Appearance2023 = x3d.Appearance()
Material2024 = x3d.Material()
Material2024.ambientIntensity = 0
Material2024.diffuseColor = [0.784313738,0,0]
Material2024.shininess = 1

Appearance2023.material = Material2024

Shape2022.appearance = Appearance2023
IndexedFaceSet2025 = x3d.IndexedFaceSet()
IndexedFaceSet2025.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet2025.solid = False
IndexedFaceSet2025.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate2026 = x3d.Coordinate()

IndexedFaceSet2025.coord = Coordinate2026

Shape2022.geometry = IndexedFaceSet2025

Scene15.children.append(Shape2022)
Shape2027 = x3d.Shape()
Appearance2028 = x3d.Appearance()
Material2029 = x3d.Material()
Material2029.ambientIntensity = 0
Material2029.diffuseColor = [0.784313738,0,0]
Material2029.shininess = 1

Appearance2028.material = Material2029

Shape2027.appearance = Appearance2028
IndexedFaceSet2030 = x3d.IndexedFaceSet()
IndexedFaceSet2030.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,29,20,18,-1,21,23,29,-1,18,21,29,-1,25,23,21,-1,15,22,25,-1,21,15,25,-1,23,25,27,-1,23,27,24,-1,25,22,26,-1,25,26,27,-1,20,29,30,-1,20,30,28,-1,29,23,24,-1,29,24,30,-1,37,35,33,-1,37,33,36,-1,34,37,36,-1,34,36,31,-1,40,38,32,-1,40,32,39,-1,35,40,39,-1,35,39,33,-1,39,32,15,-1,21,33,39,-1,15,21,39,-1,36,33,21,-1,18,31,36,-1,21,18,36,-1,26,14,27,-1,24,27,14,-1,40,16,38,-1,35,16,40,-1,24,14,17,-1,28,30,17,-1,24,17,30,-1,19,35,37,-1,37,34,19,-1,16,35,19,-1]
IndexedFaceSet2030.solid = False
IndexedFaceSet2030.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,29,20,18,-1,21,23,29,-1,18,21,29,-1,25,23,21,-1,15,22,25,-1,21,15,25,-1,23,25,27,-1,23,27,24,-1,25,22,26,-1,25,26,27,-1,20,29,30,-1,20,30,28,-1,29,23,24,-1,29,24,30,-1,37,35,33,-1,37,33,36,-1,34,37,36,-1,34,36,31,-1,40,38,32,-1,40,32,39,-1,35,40,39,-1,35,39,33,-1,39,32,15,-1,21,33,39,-1,15,21,39,-1,36,33,21,-1,18,31,36,-1,21,18,36,-1,26,14,27,-1,24,27,14,-1,40,16,38,-1,35,16,40,-1,24,14,17,-1,28,30,17,-1,24,17,30,-1,19,35,37,-1,37,34,19,-1,16,35,19,-1]
Coordinate2031 = x3d.Coordinate()

IndexedFaceSet2030.coord = Coordinate2031

Shape2027.geometry = IndexedFaceSet2030

Scene15.children.append(Shape2027)
Shape2032 = x3d.Shape()
Appearance2033 = x3d.Appearance()
Material2034 = x3d.Material()
Material2034.ambientIntensity = 0
Material2034.diffuseColor = [0.784313738,0,0]
Material2034.shininess = 1

Appearance2033.material = Material2034

Shape2032.appearance = Appearance2033
IndexedFaceSet2035 = x3d.IndexedFaceSet()
IndexedFaceSet2035.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet2035.solid = False
IndexedFaceSet2035.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate2036 = x3d.Coordinate()

IndexedFaceSet2035.coord = Coordinate2036

Shape2032.geometry = IndexedFaceSet2035

Scene15.children.append(Shape2032)
Shape2037 = x3d.Shape()
Appearance2038 = x3d.Appearance()
Material2039 = x3d.Material()
Material2039.ambientIntensity = 0
Material2039.diffuseColor = [0.784313738,0,0]
Material2039.shininess = 1

Appearance2038.material = Material2039

Shape2037.appearance = Appearance2038
IndexedFaceSet2040 = x3d.IndexedFaceSet()
IndexedFaceSet2040.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet2040.solid = False
IndexedFaceSet2040.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate2041 = x3d.Coordinate()

IndexedFaceSet2040.coord = Coordinate2041

Shape2037.geometry = IndexedFaceSet2040

Scene15.children.append(Shape2037)
Shape2042 = x3d.Shape()
Appearance2043 = x3d.Appearance()
Material2044 = x3d.Material()
Material2044.ambientIntensity = 0
Material2044.diffuseColor = [0.784313738,0,0]
Material2044.shininess = 1

Appearance2043.material = Material2044

Shape2042.appearance = Appearance2043
IndexedFaceSet2045 = x3d.IndexedFaceSet()
IndexedFaceSet2045.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet2045.solid = False
IndexedFaceSet2045.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate2046 = x3d.Coordinate()

IndexedFaceSet2045.coord = Coordinate2046

Shape2042.geometry = IndexedFaceSet2045

Scene15.children.append(Shape2042)
Shape2047 = x3d.Shape()
Appearance2048 = x3d.Appearance()
Material2049 = x3d.Material()
Material2049.ambientIntensity = 0
Material2049.diffuseColor = [0.784313738,0,0]
Material2049.shininess = 1

Appearance2048.material = Material2049

Shape2047.appearance = Appearance2048
IndexedFaceSet2050 = x3d.IndexedFaceSet()
IndexedFaceSet2050.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet2050.solid = False
IndexedFaceSet2050.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate2051 = x3d.Coordinate()

IndexedFaceSet2050.coord = Coordinate2051

Shape2047.geometry = IndexedFaceSet2050

Scene15.children.append(Shape2047)
Shape2052 = x3d.Shape()
Appearance2053 = x3d.Appearance()
Material2054 = x3d.Material()
Material2054.ambientIntensity = 0
Material2054.diffuseColor = [0.784313738,0,0]
Material2054.shininess = 1

Appearance2053.material = Material2054

Shape2052.appearance = Appearance2053
IndexedFaceSet2055 = x3d.IndexedFaceSet()
IndexedFaceSet2055.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1]
IndexedFaceSet2055.solid = False
IndexedFaceSet2055.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1]
Coordinate2056 = x3d.Coordinate()

IndexedFaceSet2055.coord = Coordinate2056

Shape2052.geometry = IndexedFaceSet2055

Scene15.children.append(Shape2052)
Shape2057 = x3d.Shape()
Appearance2058 = x3d.Appearance()
Material2059 = x3d.Material()
Material2059.ambientIntensity = 0
Material2059.diffuseColor = [0.784313738,0,0]
Material2059.shininess = 1

Appearance2058.material = Material2059

Shape2057.appearance = Appearance2058
IndexedFaceSet2060 = x3d.IndexedFaceSet()
IndexedFaceSet2060.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet2060.solid = False
IndexedFaceSet2060.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate2061 = x3d.Coordinate()

IndexedFaceSet2060.coord = Coordinate2061

Shape2057.geometry = IndexedFaceSet2060

Scene15.children.append(Shape2057)
Shape2062 = x3d.Shape()
Appearance2063 = x3d.Appearance()
Material2064 = x3d.Material()
Material2064.ambientIntensity = 0
Material2064.diffuseColor = [0.784313738,0,0]
Material2064.shininess = 1

Appearance2063.material = Material2064

Shape2062.appearance = Appearance2063
IndexedFaceSet2065 = x3d.IndexedFaceSet()
IndexedFaceSet2065.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet2065.solid = False
IndexedFaceSet2065.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate2066 = x3d.Coordinate()

IndexedFaceSet2065.coord = Coordinate2066

Shape2062.geometry = IndexedFaceSet2065

Scene15.children.append(Shape2062)
Shape2067 = x3d.Shape()
Appearance2068 = x3d.Appearance()
Material2069 = x3d.Material()
Material2069.ambientIntensity = 0
Material2069.diffuseColor = [0.784313738,0,0]
Material2069.shininess = 1

Appearance2068.material = Material2069

Shape2067.appearance = Appearance2068
IndexedFaceSet2070 = x3d.IndexedFaceSet()
IndexedFaceSet2070.coordIndex = [1,0,2,-1,1,2,3,-1,8,11,13,-1,8,13,10,-1,11,5,12,-1,11,12,13,-1,16,15,5,-1,16,5,11,-1,14,16,11,-1,14,11,8,-1,13,12,4,-1,16,6,15,-1,13,4,7,-1,9,16,14,-1,6,16,9,-1,7,10,13,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet2070.solid = False
IndexedFaceSet2070.texCoordIndex = [1,0,2,-1,1,2,3,-1,8,11,13,-1,8,13,10,-1,11,5,12,-1,11,12,13,-1,16,15,5,-1,16,5,11,-1,14,16,11,-1,14,11,8,-1,13,12,4,-1,16,6,15,-1,13,4,7,-1,9,16,14,-1,6,16,9,-1,7,10,13,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
Coordinate2071 = x3d.Coordinate()

IndexedFaceSet2070.coord = Coordinate2071

Shape2067.geometry = IndexedFaceSet2070

Scene15.children.append(Shape2067)
Shape2072 = x3d.Shape()
Appearance2073 = x3d.Appearance()
Material2074 = x3d.Material()
Material2074.ambientIntensity = 0
Material2074.diffuseColor = [0.784313738,0,0]
Material2074.shininess = 1

Appearance2073.material = Material2074

Shape2072.appearance = Appearance2073
IndexedFaceSet2075 = x3d.IndexedFaceSet()
IndexedFaceSet2075.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1]
IndexedFaceSet2075.solid = False
IndexedFaceSet2075.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1]
Coordinate2076 = x3d.Coordinate()

IndexedFaceSet2075.coord = Coordinate2076

Shape2072.geometry = IndexedFaceSet2075

Scene15.children.append(Shape2072)
Shape2077 = x3d.Shape()
Appearance2078 = x3d.Appearance()
Material2079 = x3d.Material()
Material2079.ambientIntensity = 0
Material2079.diffuseColor = [0.784313738,0,0]
Material2079.shininess = 1

Appearance2078.material = Material2079

Shape2077.appearance = Appearance2078
IndexedFaceSet2080 = x3d.IndexedFaceSet()
IndexedFaceSet2080.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1]
IndexedFaceSet2080.solid = False
IndexedFaceSet2080.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1]
Coordinate2081 = x3d.Coordinate()

IndexedFaceSet2080.coord = Coordinate2081

Shape2077.geometry = IndexedFaceSet2080

Scene15.children.append(Shape2077)
Shape2082 = x3d.Shape()
Appearance2083 = x3d.Appearance()
Material2084 = x3d.Material()
Material2084.ambientIntensity = 0
Material2084.diffuseColor = [0.784313738,0,0]
Material2084.shininess = 1

Appearance2083.material = Material2084

Shape2082.appearance = Appearance2083
IndexedFaceSet2085 = x3d.IndexedFaceSet()
IndexedFaceSet2085.coordIndex = [1,0,2,-1,1,2,3,-1,8,11,13,-1,8,13,10,-1,11,5,12,-1,11,12,13,-1,16,15,5,-1,16,5,11,-1,14,16,11,-1,14,11,8,-1,13,12,4,-1,16,6,15,-1,13,4,7,-1,9,16,14,-1,6,16,9,-1,7,10,13,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet2085.solid = False
IndexedFaceSet2085.texCoordIndex = [1,0,2,-1,1,2,3,-1,8,11,13,-1,8,13,10,-1,11,5,12,-1,11,12,13,-1,16,15,5,-1,16,5,11,-1,14,16,11,-1,14,11,8,-1,13,12,4,-1,16,6,15,-1,13,4,7,-1,9,16,14,-1,6,16,9,-1,7,10,13,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
Coordinate2086 = x3d.Coordinate()

IndexedFaceSet2085.coord = Coordinate2086

Shape2082.geometry = IndexedFaceSet2085

Scene15.children.append(Shape2082)
Shape2087 = x3d.Shape()
Appearance2088 = x3d.Appearance()
Material2089 = x3d.Material()
Material2089.ambientIntensity = 0
Material2089.diffuseColor = [0.784313738,0,0]
Material2089.shininess = 1

Appearance2088.material = Material2089

Shape2087.appearance = Appearance2088
IndexedFaceSet2090 = x3d.IndexedFaceSet()
IndexedFaceSet2090.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet2090.solid = False
IndexedFaceSet2090.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate2091 = x3d.Coordinate()

IndexedFaceSet2090.coord = Coordinate2091

Shape2087.geometry = IndexedFaceSet2090

Scene15.children.append(Shape2087)
Shape2092 = x3d.Shape()
Appearance2093 = x3d.Appearance()
Material2094 = x3d.Material()
Material2094.ambientIntensity = 0
Material2094.diffuseColor = [0.784313738,0,0]
Material2094.shininess = 1

Appearance2093.material = Material2094

Shape2092.appearance = Appearance2093
IndexedFaceSet2095 = x3d.IndexedFaceSet()
IndexedFaceSet2095.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet2095.solid = False
IndexedFaceSet2095.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate2096 = x3d.Coordinate()

IndexedFaceSet2095.coord = Coordinate2096

Shape2092.geometry = IndexedFaceSet2095

Scene15.children.append(Shape2092)
Shape2097 = x3d.Shape()
Appearance2098 = x3d.Appearance()
Material2099 = x3d.Material()
Material2099.ambientIntensity = 0
Material2099.diffuseColor = [0.784313738,0,0]
Material2099.shininess = 1

Appearance2098.material = Material2099

Shape2097.appearance = Appearance2098
IndexedFaceSet2100 = x3d.IndexedFaceSet()
IndexedFaceSet2100.coordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet2100.solid = False
IndexedFaceSet2100.texCoordIndex = [4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
Coordinate2101 = x3d.Coordinate()

IndexedFaceSet2100.coord = Coordinate2101

Shape2097.geometry = IndexedFaceSet2100

Scene15.children.append(Shape2097)
Shape2102 = x3d.Shape()
Appearance2103 = x3d.Appearance()
Material2104 = x3d.Material()
Material2104.ambientIntensity = 0
Material2104.diffuseColor = [0.784313738,0,0]
Material2104.shininess = 1

Appearance2103.material = Material2104

Shape2102.appearance = Appearance2103
IndexedFaceSet2105 = x3d.IndexedFaceSet()
IndexedFaceSet2105.coordIndex = [1,0,2,-1,1,2,3,-1,8,11,13,-1,8,13,10,-1,11,5,12,-1,11,12,13,-1,16,15,5,-1,16,5,11,-1,14,16,11,-1,14,11,8,-1,13,12,4,-1,16,6,15,-1,13,4,7,-1,9,16,14,-1,6,16,9,-1,7,10,13,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet2105.solid = False
IndexedFaceSet2105.texCoordIndex = [1,0,2,-1,1,2,3,-1,8,11,13,-1,8,13,10,-1,11,5,12,-1,11,12,13,-1,16,15,5,-1,16,5,11,-1,14,16,11,-1,14,11,8,-1,13,12,4,-1,16,6,15,-1,13,4,7,-1,9,16,14,-1,6,16,9,-1,7,10,13,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
Coordinate2106 = x3d.Coordinate()

IndexedFaceSet2105.coord = Coordinate2106

Shape2102.geometry = IndexedFaceSet2105

Scene15.children.append(Shape2102)
Shape2107 = x3d.Shape()
Appearance2108 = x3d.Appearance()
Material2109 = x3d.Material()
Material2109.ambientIntensity = 0
Material2109.diffuseColor = [0.784313738,0,0]
Material2109.shininess = 1

Appearance2108.material = Material2109

Shape2107.appearance = Appearance2108
IndexedFaceSet2110 = x3d.IndexedFaceSet()
IndexedFaceSet2110.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet2110.solid = False
IndexedFaceSet2110.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate2111 = x3d.Coordinate()

IndexedFaceSet2110.coord = Coordinate2111

Shape2107.geometry = IndexedFaceSet2110

Scene15.children.append(Shape2107)
Shape2112 = x3d.Shape()
Appearance2113 = x3d.Appearance()
Material2114 = x3d.Material()
Material2114.ambientIntensity = 0
Material2114.diffuseColor = [0.784313738,0,0]
Material2114.shininess = 1

Appearance2113.material = Material2114

Shape2112.appearance = Appearance2113
IndexedFaceSet2115 = x3d.IndexedFaceSet()
IndexedFaceSet2115.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet2115.solid = False
IndexedFaceSet2115.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate2116 = x3d.Coordinate()

IndexedFaceSet2115.coord = Coordinate2116

Shape2112.geometry = IndexedFaceSet2115

Scene15.children.append(Shape2112)
Shape2117 = x3d.Shape()
Appearance2118 = x3d.Appearance()
Material2119 = x3d.Material()
Material2119.ambientIntensity = 0
Material2119.diffuseColor = [0.784313738,0,0]
Material2119.shininess = 1

Appearance2118.material = Material2119

Shape2117.appearance = Appearance2118
IndexedFaceSet2120 = x3d.IndexedFaceSet()
IndexedFaceSet2120.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet2120.solid = False
IndexedFaceSet2120.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate2121 = x3d.Coordinate()

IndexedFaceSet2120.coord = Coordinate2121

Shape2117.geometry = IndexedFaceSet2120

Scene15.children.append(Shape2117)
Shape2122 = x3d.Shape()
Appearance2123 = x3d.Appearance()
Material2124 = x3d.Material()
Material2124.ambientIntensity = 0
Material2124.diffuseColor = [0.784313738,0,0]
Material2124.shininess = 1

Appearance2123.material = Material2124

Shape2122.appearance = Appearance2123
IndexedFaceSet2125 = x3d.IndexedFaceSet()
IndexedFaceSet2125.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet2125.solid = False
IndexedFaceSet2125.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate2126 = x3d.Coordinate()

IndexedFaceSet2125.coord = Coordinate2126

Shape2122.geometry = IndexedFaceSet2125

Scene15.children.append(Shape2122)
Shape2127 = x3d.Shape()
Appearance2128 = x3d.Appearance()
Material2129 = x3d.Material()
Material2129.ambientIntensity = 0
Material2129.diffuseColor = [0.784313738,0,0]
Material2129.shininess = 1

Appearance2128.material = Material2129

Shape2127.appearance = Appearance2128
IndexedFaceSet2130 = x3d.IndexedFaceSet()
IndexedFaceSet2130.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet2130.solid = False
IndexedFaceSet2130.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate2131 = x3d.Coordinate()

IndexedFaceSet2130.coord = Coordinate2131

Shape2127.geometry = IndexedFaceSet2130

Scene15.children.append(Shape2127)
Shape2132 = x3d.Shape()
Appearance2133 = x3d.Appearance()
Material2134 = x3d.Material()
Material2134.ambientIntensity = 0
Material2134.diffuseColor = [0.784313738,0,0]
Material2134.shininess = 1

Appearance2133.material = Material2134

Shape2132.appearance = Appearance2133
IndexedFaceSet2135 = x3d.IndexedFaceSet()
IndexedFaceSet2135.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet2135.solid = False
IndexedFaceSet2135.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate2136 = x3d.Coordinate()

IndexedFaceSet2135.coord = Coordinate2136

Shape2132.geometry = IndexedFaceSet2135

Scene15.children.append(Shape2132)
Shape2137 = x3d.Shape()
Appearance2138 = x3d.Appearance()
Material2139 = x3d.Material()
Material2139.ambientIntensity = 0
Material2139.diffuseColor = [0.784313738,0,0]
Material2139.shininess = 1

Appearance2138.material = Material2139

Shape2137.appearance = Appearance2138
IndexedFaceSet2140 = x3d.IndexedFaceSet()
IndexedFaceSet2140.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet2140.solid = False
IndexedFaceSet2140.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate2141 = x3d.Coordinate()

IndexedFaceSet2140.coord = Coordinate2141

Shape2137.geometry = IndexedFaceSet2140

Scene15.children.append(Shape2137)
Shape2142 = x3d.Shape()
Appearance2143 = x3d.Appearance()
Material2144 = x3d.Material()
Material2144.ambientIntensity = 0
Material2144.diffuseColor = [0.784313738,0,0]
Material2144.shininess = 1

Appearance2143.material = Material2144

Shape2142.appearance = Appearance2143
IndexedFaceSet2145 = x3d.IndexedFaceSet()
IndexedFaceSet2145.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet2145.solid = False
IndexedFaceSet2145.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate2146 = x3d.Coordinate()

IndexedFaceSet2145.coord = Coordinate2146

Shape2142.geometry = IndexedFaceSet2145

Scene15.children.append(Shape2142)
Shape2147 = x3d.Shape()
Appearance2148 = x3d.Appearance()
Material2149 = x3d.Material()
Material2149.ambientIntensity = 0
Material2149.diffuseColor = [0.784313738,0,0]
Material2149.shininess = 1

Appearance2148.material = Material2149

Shape2147.appearance = Appearance2148
IndexedFaceSet2150 = x3d.IndexedFaceSet()
IndexedFaceSet2150.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet2150.solid = False
IndexedFaceSet2150.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate2151 = x3d.Coordinate()

IndexedFaceSet2150.coord = Coordinate2151

Shape2147.geometry = IndexedFaceSet2150

Scene15.children.append(Shape2147)
Shape2152 = x3d.Shape()
Appearance2153 = x3d.Appearance()
Material2154 = x3d.Material()
Material2154.ambientIntensity = 0
Material2154.diffuseColor = [0.784313738,0,0]
Material2154.shininess = 1

Appearance2153.material = Material2154

Shape2152.appearance = Appearance2153
IndexedFaceSet2155 = x3d.IndexedFaceSet()
IndexedFaceSet2155.coordIndex = [1,0,2,-1,1,2,3,-1,8,11,13,-1,8,13,10,-1,11,5,12,-1,11,12,13,-1,16,15,5,-1,16,5,11,-1,14,16,11,-1,14,11,8,-1,13,12,4,-1,16,6,15,-1,13,4,7,-1,9,16,14,-1,6,16,9,-1,7,10,13,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
IndexedFaceSet2155.solid = False
IndexedFaceSet2155.texCoordIndex = [1,0,2,-1,1,2,3,-1,8,11,13,-1,8,13,10,-1,11,5,12,-1,11,12,13,-1,16,15,5,-1,16,5,11,-1,14,16,11,-1,14,11,8,-1,13,12,4,-1,16,6,15,-1,13,4,7,-1,9,16,14,-1,6,16,9,-1,7,10,13,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1]
Coordinate2156 = x3d.Coordinate()

IndexedFaceSet2155.coord = Coordinate2156

Shape2152.geometry = IndexedFaceSet2155

Scene15.children.append(Shape2152)
Shape2157 = x3d.Shape()
Appearance2158 = x3d.Appearance()
Material2159 = x3d.Material()
Material2159.ambientIntensity = 0
Material2159.diffuseColor = [0.784313738,0,0]
Material2159.shininess = 1

Appearance2158.material = Material2159

Shape2157.appearance = Appearance2158
IndexedFaceSet2160 = x3d.IndexedFaceSet()
IndexedFaceSet2160.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet2160.solid = False
IndexedFaceSet2160.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate2161 = x3d.Coordinate()

IndexedFaceSet2160.coord = Coordinate2161

Shape2157.geometry = IndexedFaceSet2160

Scene15.children.append(Shape2157)
Shape2162 = x3d.Shape()
Appearance2163 = x3d.Appearance()
Material2164 = x3d.Material()
Material2164.ambientIntensity = 0
Material2164.diffuseColor = [0.784313738,0,0]
Material2164.shininess = 1

Appearance2163.material = Material2164

Shape2162.appearance = Appearance2163
IndexedFaceSet2165 = x3d.IndexedFaceSet()
IndexedFaceSet2165.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet2165.solid = False
IndexedFaceSet2165.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate2166 = x3d.Coordinate()

IndexedFaceSet2165.coord = Coordinate2166

Shape2162.geometry = IndexedFaceSet2165

Scene15.children.append(Shape2162)
Shape2167 = x3d.Shape()
Appearance2168 = x3d.Appearance()
Material2169 = x3d.Material()
Material2169.ambientIntensity = 0
Material2169.diffuseColor = [0.784313738,0,0]
Material2169.shininess = 1

Appearance2168.material = Material2169

Shape2167.appearance = Appearance2168
IndexedFaceSet2170 = x3d.IndexedFaceSet()
IndexedFaceSet2170.coordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1]
IndexedFaceSet2170.solid = False
IndexedFaceSet2170.texCoordIndex = [1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1]
Coordinate2171 = x3d.Coordinate()

IndexedFaceSet2170.coord = Coordinate2171

Shape2167.geometry = IndexedFaceSet2170

Scene15.children.append(Shape2167)
Shape2172 = x3d.Shape()
Appearance2173 = x3d.Appearance()
Material2174 = x3d.Material()
Material2174.ambientIntensity = 0
Material2174.diffuseColor = [0.784313738,0,0]
Material2174.shininess = 1

Appearance2173.material = Material2174

Shape2172.appearance = Appearance2173
IndexedFaceSet2175 = x3d.IndexedFaceSet()
IndexedFaceSet2175.coordIndex = [1,0,2,-1,1,2,3,-1,8,11,13,-1,8,13,10,-1,11,5,12,-1,11,12,13,-1,16,15,5,-1,16,5,11,-1,14,16,11,-1,14,11,8,-1,13,12,4,-1,16,6,15,-1,13,4,7,-1,9,16,14,-1,6,16,9,-1,7,10,13,-1,18,17,19,-1,18,19,20,-1,25,28,30,-1,25,30,27,-1,28,22,29,-1,28,29,30,-1,33,32,22,-1,33,22,28,-1,31,33,28,-1,31,28,25,-1,30,29,21,-1,33,23,32,-1,30,21,24,-1,26,33,31,-1,23,33,26,-1,24,27,30,-1]
IndexedFaceSet2175.solid = False
IndexedFaceSet2175.texCoordIndex = [1,0,2,-1,1,2,3,-1,8,11,13,-1,8,13,10,-1,11,5,12,-1,11,12,13,-1,16,15,5,-1,16,5,11,-1,14,16,11,-1,14,11,8,-1,13,12,4,-1,16,6,15,-1,13,4,7,-1,9,16,14,-1,6,16,9,-1,7,10,13,-1,18,17,19,-1,18,19,20,-1,25,28,30,-1,25,30,27,-1,28,22,29,-1,28,29,30,-1,33,32,22,-1,33,22,28,-1,31,33,28,-1,31,28,25,-1,30,29,21,-1,33,23,32,-1,30,21,24,-1,26,33,31,-1,23,33,26,-1,24,27,30,-1]
Coordinate2176 = x3d.Coordinate()

IndexedFaceSet2175.coord = Coordinate2176

Shape2172.geometry = IndexedFaceSet2175

Scene15.children.append(Shape2172)
Shape2177 = x3d.Shape()
Appearance2178 = x3d.Appearance()
Material2179 = x3d.Material()
Material2179.ambientIntensity = 0
Material2179.diffuseColor = [0.784313738,0,0]
Material2179.shininess = 1

Appearance2178.material = Material2179

Shape2177.appearance = Appearance2178
IndexedFaceSet2180 = x3d.IndexedFaceSet()
IndexedFaceSet2180.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet2180.solid = False
IndexedFaceSet2180.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate2181 = x3d.Coordinate()

IndexedFaceSet2180.coord = Coordinate2181

Shape2177.geometry = IndexedFaceSet2180

Scene15.children.append(Shape2177)
Shape2182 = x3d.Shape()
Appearance2183 = x3d.Appearance()
Material2184 = x3d.Material()
Material2184.ambientIntensity = 0
Material2184.diffuseColor = [0.784313738,0,0]
Material2184.shininess = 1

Appearance2183.material = Material2184

Shape2182.appearance = Appearance2183
IndexedFaceSet2185 = x3d.IndexedFaceSet()
IndexedFaceSet2185.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet2185.solid = False
IndexedFaceSet2185.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate2186 = x3d.Coordinate()

IndexedFaceSet2185.coord = Coordinate2186

Shape2182.geometry = IndexedFaceSet2185

Scene15.children.append(Shape2182)
Shape2187 = x3d.Shape()
Appearance2188 = x3d.Appearance()
Material2189 = x3d.Material()
Material2189.ambientIntensity = 0
Material2189.diffuseColor = [0.784313738,0,0]
Material2189.shininess = 1

Appearance2188.material = Material2189

Shape2187.appearance = Appearance2188
IndexedFaceSet2190 = x3d.IndexedFaceSet()
IndexedFaceSet2190.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet2190.solid = False
IndexedFaceSet2190.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate2191 = x3d.Coordinate()

IndexedFaceSet2190.coord = Coordinate2191

Shape2187.geometry = IndexedFaceSet2190

Scene15.children.append(Shape2187)
Shape2192 = x3d.Shape()
Appearance2193 = x3d.Appearance()
Material2194 = x3d.Material()
Material2194.ambientIntensity = 0
Material2194.diffuseColor = [0.784313738,0,0]
Material2194.shininess = 1

Appearance2193.material = Material2194

Shape2192.appearance = Appearance2193
IndexedFaceSet2195 = x3d.IndexedFaceSet()
IndexedFaceSet2195.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet2195.solid = False
IndexedFaceSet2195.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate2196 = x3d.Coordinate()

IndexedFaceSet2195.coord = Coordinate2196

Shape2192.geometry = IndexedFaceSet2195

Scene15.children.append(Shape2192)
Shape2197 = x3d.Shape()
Appearance2198 = x3d.Appearance()
Material2199 = x3d.Material()
Material2199.ambientIntensity = 0
Material2199.diffuseColor = [0.784313738,0,0]
Material2199.shininess = 1

Appearance2198.material = Material2199

Shape2197.appearance = Appearance2198
IndexedFaceSet2200 = x3d.IndexedFaceSet()
IndexedFaceSet2200.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,16,19,21,-1,16,21,18,-1,19,13,20,-1,19,20,21,-1,24,23,13,-1,24,13,19,-1,22,24,19,-1,22,19,16,-1,21,20,12,-1,24,14,23,-1,21,12,15,-1,17,24,22,-1,14,24,17,-1,15,18,21,-1]
IndexedFaceSet2200.solid = False
IndexedFaceSet2200.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,16,19,21,-1,16,21,18,-1,19,13,20,-1,19,20,21,-1,24,23,13,-1,24,13,19,-1,22,24,19,-1,22,19,16,-1,21,20,12,-1,24,14,23,-1,21,12,15,-1,17,24,22,-1,14,24,17,-1,15,18,21,-1]
Coordinate2201 = x3d.Coordinate()

IndexedFaceSet2200.coord = Coordinate2201

Shape2197.geometry = IndexedFaceSet2200

Scene15.children.append(Shape2197)
Shape2202 = x3d.Shape()
Appearance2203 = x3d.Appearance()
Material2204 = x3d.Material()
Material2204.ambientIntensity = 0
Material2204.diffuseColor = [0.784313738,0,0]
Material2204.shininess = 1

Appearance2203.material = Material2204

Shape2202.appearance = Appearance2203
IndexedFaceSet2205 = x3d.IndexedFaceSet()
IndexedFaceSet2205.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet2205.solid = False
IndexedFaceSet2205.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate2206 = x3d.Coordinate()

IndexedFaceSet2205.coord = Coordinate2206

Shape2202.geometry = IndexedFaceSet2205

Scene15.children.append(Shape2202)
Shape2207 = x3d.Shape()
Appearance2208 = x3d.Appearance()
Material2209 = x3d.Material()
Material2209.ambientIntensity = 0
Material2209.diffuseColor = [0.784313738,0,0]
Material2209.shininess = 1

Appearance2208.material = Material2209

Shape2207.appearance = Appearance2208
IndexedFaceSet2210 = x3d.IndexedFaceSet()
IndexedFaceSet2210.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet2210.solid = False
IndexedFaceSet2210.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate2211 = x3d.Coordinate()

IndexedFaceSet2210.coord = Coordinate2211

Shape2207.geometry = IndexedFaceSet2210

Scene15.children.append(Shape2207)
Shape2212 = x3d.Shape()
Appearance2213 = x3d.Appearance()
Material2214 = x3d.Material()
Material2214.ambientIntensity = 0
Material2214.diffuseColor = [0.784313738,0,0]
Material2214.shininess = 1

Appearance2213.material = Material2214

Shape2212.appearance = Appearance2213
IndexedFaceSet2215 = x3d.IndexedFaceSet()
IndexedFaceSet2215.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet2215.solid = False
IndexedFaceSet2215.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate2216 = x3d.Coordinate()

IndexedFaceSet2215.coord = Coordinate2216

Shape2212.geometry = IndexedFaceSet2215

Scene15.children.append(Shape2212)
Shape2217 = x3d.Shape()
Appearance2218 = x3d.Appearance()
Material2219 = x3d.Material()
Material2219.ambientIntensity = 0
Material2219.diffuseColor = [0.784313738,0,0]
Material2219.shininess = 1

Appearance2218.material = Material2219

Shape2217.appearance = Appearance2218
IndexedFaceSet2220 = x3d.IndexedFaceSet()
IndexedFaceSet2220.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet2220.solid = False
IndexedFaceSet2220.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate2221 = x3d.Coordinate()

IndexedFaceSet2220.coord = Coordinate2221

Shape2217.geometry = IndexedFaceSet2220

Scene15.children.append(Shape2217)
Shape2222 = x3d.Shape()
Appearance2223 = x3d.Appearance()
Material2224 = x3d.Material()
Material2224.ambientIntensity = 0
Material2224.diffuseColor = [0.784313738,0,0]
Material2224.shininess = 1

Appearance2223.material = Material2224

Shape2222.appearance = Appearance2223
IndexedFaceSet2225 = x3d.IndexedFaceSet()
IndexedFaceSet2225.coordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
IndexedFaceSet2225.solid = False
IndexedFaceSet2225.texCoordIndex = [1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1]
Coordinate2226 = x3d.Coordinate()

IndexedFaceSet2225.coord = Coordinate2226

Shape2222.geometry = IndexedFaceSet2225

Scene15.children.append(Shape2222)

X3D0.Scene = Scene15
f = open("../data/Pathway.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/Pathway.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
