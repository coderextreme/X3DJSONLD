print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
component2 = x3d.component()
component2.name = "HAnim"
component2.level = 1

head1.children.append(component2)
meta3 = x3d.meta()
meta3.name = "title"
meta3.content = "JinLOA4_4.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "creator"
meta4.content = "Jin Hoon Lee and Min Joo Lee"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "translator"
meta5.content = "Chul Hee Jung and Myeong Won Lee"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "created"
meta6.content = "31 March 2011"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "translated"
meta7.content = "1 November 2014"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "modified"
meta8.content = "13 March 2021"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "description"
meta9.content = "Articulated 3D game character designed with a general graphics tool"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "reference"
meta10.content = "KoreanCharacter00ReadMe.txt"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "reference"
meta11.content = "KoreanCharacterHumanMotion_Infotech2014_140706.pdf"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "reference"
meta12.content = "KoreanCharactersIllustrated.pdf"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "identifier"
meta13.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JinLOA4.x3d"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "generator"
meta14.content = "3DS MAX, http://www.autodesk.com/products/autodesk-3ds-max/overview"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "generator"
meta15.content = "Suwon HAnim Converter"

head1.children.append(meta15)
meta16 = x3d.meta()
meta16.name = "generator"
meta16.content = "Gnu Image Manipulation Program, http://www.gimp.org"

head1.children.append(meta16)
meta17 = x3d.meta()
meta17.name = "generator"
meta17.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta17)
meta18 = x3d.meta()
meta18.name = "license"
meta18.content = "../license.html"

head1.children.append(meta18)

X3D0.head = head1
Scene19 = x3d.Scene()
WorldInfo20 = x3d.WorldInfo()
WorldInfo20.title = "JinLOA4_4.x3d"

Scene19.children.append(WorldInfo20)
NavigationInfo21 = x3d.NavigationInfo()
NavigationInfo21.speed = 1.5

Scene19.children.append(NavigationInfo21)
Viewpoint22 = x3d.Viewpoint()
Viewpoint22.centerOfRotation = [0,1,0]
Viewpoint22.description = "JinLOA4"
Viewpoint22.position = [0,1,3]

Scene19.children.append(Viewpoint22)
HAnimHumanoid23 = x3d.HAnimHumanoid()
HAnimHumanoid23.name = "JinLOA4"
HAnimHumanoid23.DEF = "hanim_JinLOA4"
HAnimHumanoid23.loa = 4
HAnimHumanoid23.version = "2.0"
MetadataSet24 = x3d.MetadataSet()
MetadataSet24.name = "HAnimHumanoid.info"
MetadataSet24.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"
MetadataString25 = x3d.MetadataString()
MetadataString25.name = "authorName"
MetadataString25.value = ["Jin Hoon Lee and Min Joo Lee, Chul Hee Jung and Myeong Won Lee"]

if MetadataSet24.value is None:
    MetadataSet24.value = []
MetadataSet24.value.append(MetadataString25)
MetadataString26 = x3d.MetadataString()
MetadataString26.name = "authorEmail"
MetadataString26.value = ["myeongwonlee@gmail.com"]

if MetadataSet24.value is None:
    MetadataSet24.value = []
MetadataSet24.value.append(MetadataString26)
MetadataString27 = x3d.MetadataString()
MetadataString27.name = "creationDate"
MetadataString27.value = ["31 March 2011"]

if MetadataSet24.value is None:
    MetadataSet24.value = []
MetadataSet24.value.append(MetadataString27)
MetadataString28 = x3d.MetadataString()
MetadataString28.name = "gender"
MetadataString28.value = ["female"]

if MetadataSet24.value is None:
    MetadataSet24.value = []
MetadataSet24.value.append(MetadataString28)
MetadataFloat29 = x3d.MetadataFloat()
MetadataFloat29.name = "height"
MetadataFloat29.value = [1.86]

if MetadataSet24.value is None:
    MetadataSet24.value = []
MetadataSet24.value.append(MetadataFloat29)
MetadataString30 = x3d.MetadataString()
MetadataString30.name = "humanoidVersion"
MetadataString30.value = ["2.0"]

if MetadataSet24.value is None:
    MetadataSet24.value = []
MetadataSet24.value.append(MetadataString30)

HAnimHumanoid23.metadata = MetadataSet24
HAnimJoint31 = x3d.HAnimJoint()
HAnimJoint31.name = "humanoid_root"
HAnimJoint31.DEF = "hanim_humanoid_root"
HAnimJoint31.center = [0,1.0242089721,-0.015921]
HAnimJoint31.ulimit = [0,0,0]
HAnimJoint31.llimit = [0,0,0]
HAnimSegment32 = x3d.HAnimSegment()
HAnimSegment32.name = "sacrum"
HAnimSegment32.DEF = "hanim_sacrum"
Transform33 = x3d.Transform()
Transform33.translation = [0,1.0242089721,-0.015921]
Shape34 = x3d.Shape()
Appearance35 = x3d.Appearance()
Material36 = x3d.Material()
Material36.diffuseColor = [0.588,0.588,0.588]

Appearance35.material = Material36
ImageTexture37 = x3d.ImageTexture()
ImageTexture37.DEF = "JinLOA4TextureAtlas"
ImageTexture37.url = ["images/Jin.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/images/Jin.png"]

Appearance35.texture = ImageTexture37

Shape34.appearance = Appearance35
IndexedFaceSet38 = x3d.IndexedFaceSet()
IndexedFaceSet38.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]
IndexedFaceSet38.creaseAngle = 3.14159
IndexedFaceSet38.texCoordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]
Coordinate39 = x3d.Coordinate()

IndexedFaceSet38.coord = Coordinate39
TextureCoordinate40 = x3d.TextureCoordinate()

IndexedFaceSet38.texCoord = TextureCoordinate40

Shape34.geometry = IndexedFaceSet38

Transform33.children.append(Shape34)

HAnimSegment32.children.append(Transform33)

HAnimJoint31.children.append(HAnimSegment32)
HAnimJoint41 = x3d.HAnimJoint()
HAnimJoint41.name = "sacroiliac"
HAnimJoint41.DEF = "hanim_sacroiliac"
HAnimJoint41.center = [0,0.876897,-0.015921]
HAnimJoint41.ulimit = [0,0,0]
HAnimJoint41.llimit = [0,0,0]
HAnimSegment42 = x3d.HAnimSegment()
HAnimSegment42.name = "pelvis"
HAnimSegment42.DEF = "hanim_pelvis"
Transform43 = x3d.Transform()
Transform43.translation = [0,0.876897,-0.015921]
Shape44 = x3d.Shape()
Appearance45 = x3d.Appearance()
Material46 = x3d.Material()
Material46.diffuseColor = [0.588,0.588,0.588]

Appearance45.material = Material46
ImageTexture47 = x3d.ImageTexture()
ImageTexture47.USE = "JinLOA4TextureAtlas"

Appearance45.texture = ImageTexture47

Shape44.appearance = Appearance45
IndexedFaceSet48 = x3d.IndexedFaceSet()
IndexedFaceSet48.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]
IndexedFaceSet48.creaseAngle = 3.14159
IndexedFaceSet48.texCoordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]
Coordinate49 = x3d.Coordinate()

IndexedFaceSet48.coord = Coordinate49
TextureCoordinate50 = x3d.TextureCoordinate()

IndexedFaceSet48.texCoord = TextureCoordinate50

Shape44.geometry = IndexedFaceSet48

Transform43.children.append(Shape44)

HAnimSegment42.children.append(Transform43)

HAnimJoint41.children.append(HAnimSegment42)
HAnimJoint51 = x3d.HAnimJoint()
HAnimJoint51.name = "l_hip"
HAnimJoint51.DEF = "hanim_l_hip"
HAnimJoint51.center = [0.09465749999999999,1.0250460557999999,-0.01834875]
HAnimJoint51.ulimit = [0,0,0]
HAnimJoint51.llimit = [0,0,0]
HAnimSegment52 = x3d.HAnimSegment()
HAnimSegment52.name = "l_thigh"
HAnimSegment52.DEF = "hanim_l_thigh"
Transform53 = x3d.Transform()
Transform53.translation = [0.09465749999999999,1.0250460557999999,-0.01834875]
Shape54 = x3d.Shape()
Appearance55 = x3d.Appearance()
Material56 = x3d.Material()
Material56.diffuseColor = [0.588,0.588,0.588]

Appearance55.material = Material56
ImageTexture57 = x3d.ImageTexture()
ImageTexture57.USE = "JinLOA4TextureAtlas"

Appearance55.texture = ImageTexture57

Shape54.appearance = Appearance55
IndexedFaceSet58 = x3d.IndexedFaceSet()
IndexedFaceSet58.coordIndex = [47,46,45,-1,45,44,43,-1,45,43,42,-1,47,45,42,-1,48,47,42,-1,0,1,8,-1,8,7,0,-1,1,2,9,-1,9,8,1,-1,2,3,10,-1,10,9,2,-1,3,4,11,-1,11,10,3,-1,4,5,12,-1,12,11,4,-1,5,6,13,-1,13,12,5,-1,6,0,7,-1,7,13,6,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,12,19,-1,19,18,11,-1,12,13,20,-1,20,19,12,-1,13,7,14,-1,14,20,13,-1,14,15,22,-1,22,21,14,-1,15,16,23,-1,23,22,15,-1,16,17,24,-1,24,23,16,-1,17,18,25,-1,25,24,17,-1,18,19,26,-1,26,25,18,-1,19,20,27,-1,27,26,19,-1,20,14,21,-1,21,27,20,-1,56,57,58,-1,58,59,60,-1,58,60,61,-1,56,58,61,-1,62,56,61,-1,29,28,21,-1,21,22,29,-1,30,29,22,-1,22,23,30,-1,31,30,23,-1,23,24,31,-1,32,31,24,-1,24,25,32,-1,33,32,25,-1,25,26,33,-1,34,33,26,-1,26,27,34,-1,28,34,27,-1,27,21,28,-1,36,35,28,-1,28,29,36,-1,37,36,29,-1,29,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,35,41,34,-1,34,28,35,-1,42,43,1,-1,1,0,42,-1,43,44,2,-1,2,1,43,-1,44,45,3,-1,3,2,44,-1,45,46,4,-1,4,3,45,-1,46,47,5,-1,5,4,46,-1,47,48,6,-1,6,5,47,-1,48,42,0,-1,0,6,48,-1,50,49,35,-1,35,36,50,-1,51,50,36,-1,36,37,51,-1,52,51,37,-1,37,38,52,-1,53,52,38,-1,38,39,53,-1,54,53,39,-1,39,40,54,-1,55,54,40,-1,40,41,55,-1,49,55,41,-1,41,35,49,-1,57,56,49,-1,49,50,57,-1,58,57,50,-1,50,51,58,-1,59,58,51,-1,51,52,59,-1,60,59,52,-1,52,53,60,-1,61,60,53,-1,53,54,61,-1,62,61,54,-1,54,55,62,-1,56,62,55,-1,55,49,56,-1]
IndexedFaceSet58.creaseAngle = 3.14159
IndexedFaceSet58.texCoordIndex = [5,4,3,-1,3,2,0,-1,3,0,1,-1,5,3,1,-1,6,5,1,-1,7,10,8,-1,8,9,7,-1,10,12,11,-1,11,8,10,-1,12,14,13,-1,13,11,12,-1,14,16,15,-1,15,13,14,-1,16,18,17,-1,17,15,16,-1,18,20,19,-1,19,17,18,-1,20,7,9,-1,9,19,20,-1,9,8,21,-1,21,22,9,-1,8,11,23,-1,23,21,8,-1,11,13,24,-1,24,23,11,-1,13,15,25,-1,25,24,13,-1,15,17,26,-1,26,25,15,-1,17,19,27,-1,27,26,17,-1,19,9,22,-1,22,27,19,-1,22,21,28,-1,28,29,22,-1,21,23,30,-1,30,28,21,-1,23,24,31,-1,31,30,23,-1,24,25,32,-1,32,31,24,-1,25,26,33,-1,33,32,25,-1,26,27,34,-1,34,33,26,-1,27,22,29,-1,29,34,27,-1,42,43,44,-1,44,45,46,-1,44,46,47,-1,42,44,47,-1,48,42,47,-1,35,36,29,-1,29,28,35,-1,37,35,28,-1,28,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,36,41,34,-1,34,29,36,-1,51,52,49,-1,49,50,51,-1,54,51,50,-1,50,53,54,-1,56,54,53,-1,53,55,56,-1,58,56,55,-1,55,57,58,-1,60,58,57,-1,57,59,60,-1,62,60,59,-1,59,61,62,-1,52,62,61,-1,61,49,52,-1,1,0,10,-1,10,7,1,-1,0,2,12,-1,12,10,0,-1,2,3,14,-1,14,12,2,-1,3,4,16,-1,16,14,3,-1,4,5,18,-1,18,16,4,-1,5,6,20,-1,20,18,5,-1,6,1,7,-1,7,20,6,-1,63,64,52,-1,52,51,63,-1,65,63,51,-1,51,54,65,-1,66,65,54,-1,54,56,66,-1,67,66,56,-1,56,58,67,-1,68,67,58,-1,58,60,68,-1,69,68,60,-1,60,62,69,-1,64,69,62,-1,62,52,64,-1,43,42,64,-1,64,63,43,-1,44,43,63,-1,63,65,44,-1,45,44,65,-1,65,66,45,-1,46,45,66,-1,66,67,46,-1,47,46,67,-1,67,68,47,-1,48,47,68,-1,68,69,48,-1,42,48,69,-1,69,64,42,-1]
Coordinate59 = x3d.Coordinate()

IndexedFaceSet58.coord = Coordinate59
TextureCoordinate60 = x3d.TextureCoordinate()

IndexedFaceSet58.texCoord = TextureCoordinate60

Shape54.geometry = IndexedFaceSet58

Transform53.children.append(Shape54)

HAnimSegment52.children.append(Transform53)

HAnimJoint51.children.append(HAnimSegment52)
HAnimJoint61 = x3d.HAnimJoint()
HAnimJoint61.name = "l_knee"
HAnimJoint61.DEF = "hanim_l_knee"
HAnimJoint61.center = [0.09260999999999998,0.506943,-0.01943775]
HAnimJoint61.ulimit = [0,0,0]
HAnimJoint61.llimit = [0,0,0]
HAnimSegment62 = x3d.HAnimSegment()
HAnimSegment62.name = "l_calf"
HAnimSegment62.DEF = "hanim_l_calf"
Transform63 = x3d.Transform()
Transform63.translation = [0.09260999999999998,0.506943,-0.01943775]
Shape64 = x3d.Shape()
Appearance65 = x3d.Appearance()
Material66 = x3d.Material()
Material66.diffuseColor = [0.588,0.588,0.588]

Appearance65.material = Material66
ImageTexture67 = x3d.ImageTexture()
ImageTexture67.USE = "JinLOA4TextureAtlas"

Appearance65.texture = ImageTexture67

Shape64.appearance = Appearance65
IndexedFaceSet68 = x3d.IndexedFaceSet()
IndexedFaceSet68.coordIndex = [4,3,2,-1,5,4,2,-1,2,1,0,-1,5,2,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1]
IndexedFaceSet68.creaseAngle = 3.14159
IndexedFaceSet68.texCoordIndex = [4,3,2,-1,5,4,2,-1,2,1,0,-1,5,2,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1]
Coordinate69 = x3d.Coordinate()

IndexedFaceSet68.coord = Coordinate69
TextureCoordinate70 = x3d.TextureCoordinate()

IndexedFaceSet68.texCoord = TextureCoordinate70

Shape64.geometry = IndexedFaceSet68

Transform63.children.append(Shape64)

HAnimSegment62.children.append(Transform63)

HAnimJoint61.children.append(HAnimSegment62)
HAnimJoint71 = x3d.HAnimJoint()
HAnimJoint71.name = "l_talocrural"
HAnimJoint71.DEF = "hanim_l_talocrural"
HAnimJoint71.center = [0.08882999999999999,0.11835180000000001,-0.01045125]
HAnimJoint71.ulimit = [0,0,0]
HAnimJoint71.llimit = [0,0,0]
HAnimSegment72 = x3d.HAnimSegment()
HAnimSegment72.name = "l_talus"
HAnimSegment72.DEF = "hanim_l_talus"
Transform73 = x3d.Transform()
Transform73.translation = [0.08882999999999999,0.11835180000000001,-0.01045125]
Shape74 = x3d.Shape()
Appearance75 = x3d.Appearance()
Material76 = x3d.Material()
Material76.diffuseColor = [0.588,0.588,0.588]

Appearance75.material = Material76
ImageTexture77 = x3d.ImageTexture()
ImageTexture77.USE = "JinLOA4TextureAtlas"

Appearance75.texture = ImageTexture77

Shape74.appearance = Appearance75
IndexedFaceSet78 = x3d.IndexedFaceSet()
IndexedFaceSet78.coordIndex = [13,34,21,-1,21,15,13,-1,9,20,21,-1,21,34,9,-1,0,2,14,-1,14,15,0,-1,30,3,16,-1,16,33,30,-1,3,4,25,-1,25,16,3,-1,22,5,18,-1,18,17,22,-1,5,6,29,-1,29,18,5,-1,6,27,19,-1,7,1,21,-1,21,20,7,-1,1,0,15,-1,15,21,1,-1,15,14,32,-1,32,13,15,-1,33,16,12,-1,12,11,33,-1,25,23,12,-1,12,16,25,-1,17,18,10,-1,10,24,17,-1,18,29,28,-1,28,10,18,-1,19,27,26,-1,26,8,19,-1,4,22,17,-1,17,25,4,-1,25,17,24,-1,24,23,25,-1,20,9,26,-1,26,27,20,-1,6,7,20,-1,20,27,6,-1,29,19,8,-1,8,28,29,-1,6,19,29,-1,1,31,0,-1,0,31,2,-1,31,3,30,-1,3,31,4,-1,4,31,22,-1,22,31,5,-1,5,31,6,-1,6,31,7,-1,7,31,1,-1,2,31,30,-1,14,2,30,-1,30,33,14,-1,32,14,33,-1,33,11,32,-1,35,46,45,-1,45,44,43,-1,43,42,41,-1,41,40,39,-1,43,41,39,-1,45,43,39,-1,35,45,39,-1,39,38,37,-1,35,39,37,-1,36,35,37,-1,26,35,36,-1,36,8,26,-1,8,36,37,-1,37,28,8,-1,28,37,38,-1,38,10,28,-1,10,38,39,-1,39,24,10,-1,24,39,40,-1,40,23,24,-1,23,40,41,-1,41,12,23,-1,12,41,42,-1,42,11,12,-1,11,42,43,-1,43,32,11,-1,32,43,44,-1,44,13,32,-1,13,44,45,-1,45,34,13,-1,34,45,46,-1,46,9,34,-1,9,46,35,-1,35,26,9,-1]
IndexedFaceSet78.creaseAngle = 3.14159
IndexedFaceSet78.texCoordIndex = [5,34,27,-1,27,12,5,-1,7,28,27,-1,27,34,7,-1,9,10,11,-1,11,12,9,-1,30,13,14,-1,14,33,30,-1,13,15,16,-1,16,14,13,-1,17,18,19,-1,19,20,17,-1,18,21,22,-1,22,19,18,-1,21,23,24,-1,25,26,27,-1,27,28,25,-1,26,9,12,-1,12,27,26,-1,12,11,32,-1,32,5,12,-1,33,14,4,-1,4,3,33,-1,16,8,4,-1,4,14,16,-1,20,19,2,-1,2,6,20,-1,19,22,29,-1,29,2,19,-1,24,23,1,-1,1,0,24,-1,15,17,20,-1,20,16,15,-1,16,20,6,-1,6,8,16,-1,28,7,1,-1,1,23,28,-1,21,25,28,-1,28,23,21,-1,22,24,0,-1,0,29,22,-1,21,24,22,-1,26,31,9,-1,9,31,10,-1,31,13,30,-1,13,31,15,-1,15,31,17,-1,17,31,18,-1,18,31,21,-1,21,31,25,-1,25,31,26,-1,10,31,30,-1,11,10,30,-1,30,33,11,-1,32,11,33,-1,33,3,32,-1,35,46,45,-1,45,44,43,-1,43,42,41,-1,41,40,39,-1,43,41,39,-1,45,43,39,-1,35,45,39,-1,39,38,37,-1,35,39,37,-1,36,35,37,-1,1,35,36,-1,36,0,1,-1,0,36,37,-1,37,29,0,-1,29,37,38,-1,38,2,29,-1,2,38,39,-1,39,6,2,-1,6,39,40,-1,40,8,6,-1,8,40,41,-1,41,4,8,-1,4,41,42,-1,42,3,4,-1,3,42,43,-1,43,32,3,-1,32,43,44,-1,44,5,32,-1,5,44,45,-1,45,34,5,-1,34,45,46,-1,46,7,34,-1,7,46,35,-1,35,1,7,-1]
Coordinate79 = x3d.Coordinate()

IndexedFaceSet78.coord = Coordinate79
TextureCoordinate80 = x3d.TextureCoordinate()

IndexedFaceSet78.texCoord = TextureCoordinate80

Shape74.geometry = IndexedFaceSet78

Transform73.children.append(Shape74)

HAnimSegment72.children.append(Transform73)

HAnimJoint71.children.append(HAnimSegment72)
HAnimJoint81 = x3d.HAnimJoint()
HAnimJoint81.name = "l_talocalcaneonavicular"
HAnimJoint81.DEF = "hanim_l_talocalcaneonavicular"
HAnimJoint81.center = [0.0783,0.045756,0.0048645]
HAnimJoint81.ulimit = [0,0,0]
HAnimJoint81.llimit = [0,0,0]
HAnimSegment82 = x3d.HAnimSegment()
HAnimSegment82.name = "l_navicular"
HAnimSegment82.DEF = "hanim_l_navicular"
Transform83 = x3d.Transform()
Transform83.translation = [0.0783,0.045756,0.0048645]
Shape84 = x3d.Shape()
Appearance85 = x3d.Appearance()
Material86 = x3d.Material()
Material86.diffuseColor = [0.588,0.588,0.588]

Appearance85.material = Material86
ImageTexture87 = x3d.ImageTexture()
ImageTexture87.USE = "JinLOA4TextureAtlas"

Appearance85.texture = ImageTexture87

Shape84.appearance = Appearance85
IndexedFaceSet88 = x3d.IndexedFaceSet()
IndexedFaceSet88.coordIndex = [7,12,11,-1,11,6,7,-1,1,2,18,-1,18,17,1,-1,12,7,5,-1,5,10,12,-1,2,6,11,-1,5,0,13,-1,13,10,5,-1,1,17,14,-1,14,3,1,-1,11,18,2,-1,4,8,16,-1,16,15,4,-1,8,9,16,-1,3,14,16,-1,16,9,3,-1,24,23,22,-1,22,21,20,-1,24,22,20,-1,20,19,28,-1,24,20,28,-1,28,27,26,-1,24,28,26,-1,25,24,26,-1,38,43,42,-1,42,39,38,-1,37,36,35,-1,37,35,34,-1,34,33,32,-1,37,34,32,-1,32,31,30,-1,37,32,30,-1,37,30,29,-1,1,19,20,-1,20,2,1,-1,2,20,21,-1,21,6,2,-1,6,21,22,-1,22,7,6,-1,7,22,23,-1,23,5,7,-1,5,23,24,-1,24,0,5,-1,38,45,44,-1,44,43,38,-1,4,25,26,-1,26,8,4,-1,8,26,27,-1,27,9,8,-1,9,27,28,-1,28,3,9,-1,3,28,19,-1,19,1,3,-1,10,29,30,-1,30,12,10,-1,12,30,31,-1,31,11,12,-1,11,31,32,-1,32,18,11,-1,18,32,33,-1,33,17,18,-1,17,33,34,-1,34,14,17,-1,14,34,35,-1,35,16,14,-1,16,35,36,-1,36,15,16,-1,42,41,40,-1,40,39,42,-1,13,37,29,-1,29,10,13,-1,0,38,39,-1,39,13,0,-1,13,39,40,-1,40,37,13,-1,37,40,41,-1,41,36,37,-1,36,41,42,-1,42,15,36,-1,15,42,43,-1,43,4,15,-1,4,43,44,-1,44,25,4,-1,25,44,45,-1,45,24,25,-1,24,45,38,-1,38,0,24,-1]
IndexedFaceSet88.creaseAngle = 3.14159
IndexedFaceSet88.texCoordIndex = [7,12,11,-1,11,6,7,-1,1,2,18,-1,18,17,1,-1,12,7,5,-1,5,10,12,-1,2,6,11,-1,5,0,13,-1,13,10,5,-1,1,17,14,-1,14,3,1,-1,11,18,2,-1,4,8,16,-1,16,15,4,-1,8,9,16,-1,3,14,16,-1,16,9,3,-1,24,23,22,-1,22,21,20,-1,24,22,20,-1,20,19,28,-1,24,20,28,-1,28,27,26,-1,24,28,26,-1,25,24,26,-1,38,43,42,-1,42,39,38,-1,37,36,35,-1,37,35,34,-1,34,33,32,-1,37,34,32,-1,32,31,30,-1,37,32,30,-1,37,30,29,-1,1,19,20,-1,20,2,1,-1,2,20,21,-1,21,6,2,-1,6,21,22,-1,22,7,6,-1,7,22,23,-1,23,5,7,-1,5,23,24,-1,24,0,5,-1,38,45,44,-1,44,43,38,-1,4,25,26,-1,26,8,4,-1,8,26,27,-1,27,9,8,-1,9,27,28,-1,28,3,9,-1,3,28,19,-1,19,1,3,-1,10,29,30,-1,30,12,10,-1,12,30,31,-1,31,11,12,-1,11,31,32,-1,32,18,11,-1,18,32,33,-1,33,17,18,-1,17,33,34,-1,34,14,17,-1,14,34,35,-1,35,16,14,-1,16,35,36,-1,36,15,16,-1,42,41,40,-1,40,39,42,-1,13,37,29,-1,29,10,13,-1,0,38,39,-1,39,13,0,-1,13,39,40,-1,40,37,13,-1,37,40,41,-1,41,36,37,-1,36,41,42,-1,42,15,36,-1,15,42,43,-1,43,4,15,-1,4,43,44,-1,44,25,4,-1,25,44,45,-1,45,24,25,-1,24,45,38,-1,38,0,24,-1]
Coordinate89 = x3d.Coordinate()

IndexedFaceSet88.coord = Coordinate89
TextureCoordinate90 = x3d.TextureCoordinate()

IndexedFaceSet88.texCoord = TextureCoordinate90

Shape84.geometry = IndexedFaceSet88

Transform83.children.append(Shape84)

HAnimSegment82.children.append(Transform83)

HAnimJoint81.children.append(HAnimSegment82)
HAnimJoint91 = x3d.HAnimJoint()
HAnimJoint91.name = "l_cuneonavicular_1"
HAnimJoint91.DEF = "hanim_l_cuneonavicular_1"
HAnimJoint91.center = [0.06736500000000001,0.0398133,0.018391499999999998]
HAnimJoint91.ulimit = [0,0,0]
HAnimJoint91.llimit = [0,0,0]
HAnimSegment92 = x3d.HAnimSegment()
HAnimSegment92.name = "l_cuneiform_1"
HAnimSegment92.DEF = "hanim_l_cuneiform_1"
Transform93 = x3d.Transform()
Transform93.translation = [0.06736500000000001,0.0398133,0.018391499999999998]
Shape94 = x3d.Shape()
Appearance95 = x3d.Appearance()
Material96 = x3d.Material()
Material96.diffuseColor = [0.588,0.588,0.588]

Appearance95.material = Material96
ImageTexture97 = x3d.ImageTexture()
ImageTexture97.USE = "JinLOA4TextureAtlas"

Appearance95.texture = ImageTexture97

Shape94.appearance = Appearance95
IndexedFaceSet98 = x3d.IndexedFaceSet()
IndexedFaceSet98.coordIndex = [0,12,4,-1,1,0,6,-1,6,7,1,-1,10,12,0,-1,0,1,10,-1,1,2,11,-1,11,10,1,-1,8,3,2,-1,2,5,8,-1,11,2,13,-1,12,15,4,-1,9,6,0,-1,0,4,9,-1,1,7,5,-1,5,2,1,-1,3,14,13,-1,13,2,3,-1,24,23,22,-1,25,24,22,-1,28,25,22,-1,15,12,10,-1,10,11,13,-1,15,10,13,-1,14,15,13,-1,16,19,18,-1,18,17,16,-1,21,20,19,-1,19,16,21,-1,3,16,17,-1,17,14,3,-1,14,17,18,-1,18,15,14,-1,15,18,19,-1,19,4,15,-1,4,19,20,-1,20,9,4,-1,28,27,26,-1,26,25,28,-1,8,21,16,-1,16,3,8,-1,6,22,23,-1,23,7,6,-1,7,23,24,-1,24,5,7,-1,5,24,25,-1,25,8,5,-1,8,25,26,-1,26,21,8,-1,21,26,27,-1,27,20,21,-1,20,27,28,-1,28,9,20,-1,9,28,22,-1,22,6,9,-1]
IndexedFaceSet98.creaseAngle = 3.14159
IndexedFaceSet98.texCoordIndex = [0,12,1,-1,2,0,6,-1,6,7,2,-1,10,12,0,-1,0,2,10,-1,2,3,11,-1,11,10,2,-1,8,4,3,-1,3,5,8,-1,11,3,13,-1,12,15,1,-1,9,6,0,-1,0,1,9,-1,2,7,5,-1,5,3,2,-1,4,14,13,-1,13,3,4,-1,24,23,22,-1,25,24,22,-1,28,25,22,-1,15,12,10,-1,10,11,13,-1,15,10,13,-1,14,15,13,-1,16,19,18,-1,18,17,16,-1,21,20,19,-1,19,16,21,-1,4,16,17,-1,17,14,4,-1,14,17,18,-1,18,15,14,-1,15,18,19,-1,19,1,15,-1,1,19,20,-1,20,9,1,-1,28,27,26,-1,26,25,28,-1,8,21,16,-1,16,4,8,-1,6,22,23,-1,23,7,6,-1,7,23,24,-1,24,5,7,-1,5,24,25,-1,25,8,5,-1,8,25,26,-1,26,21,8,-1,21,26,27,-1,27,20,21,-1,20,27,28,-1,28,9,20,-1,9,28,22,-1,22,6,9,-1]
Coordinate99 = x3d.Coordinate()

IndexedFaceSet98.coord = Coordinate99
TextureCoordinate100 = x3d.TextureCoordinate()

IndexedFaceSet98.texCoord = TextureCoordinate100

Shape94.geometry = IndexedFaceSet98

Transform93.children.append(Shape94)

HAnimSegment92.children.append(Transform93)

HAnimJoint91.children.append(HAnimSegment92)
HAnimJoint101 = x3d.HAnimJoint()
HAnimJoint101.name = "l_tarsometatarsal_1"
HAnimJoint101.DEF = "hanim_l_tarsometatarsal_1"
HAnimJoint101.center = [0.06462,0.028820699999999998,0.04419]
HAnimJoint101.ulimit = [0,0,0]
HAnimJoint101.llimit = [0,0,0]
HAnimSegment102 = x3d.HAnimSegment()
HAnimSegment102.name = "l_metatarsal_1"
HAnimSegment102.DEF = "hanim_l_metatarsal_1"
Transform103 = x3d.Transform()
Transform103.translation = [0.06462,0.028820699999999998,0.04419]
Shape104 = x3d.Shape()
Appearance105 = x3d.Appearance()
Material106 = x3d.Material()
Material106.diffuseColor = [0.588,0.588,0.588]

Appearance105.material = Material106
ImageTexture107 = x3d.ImageTexture()
ImageTexture107.USE = "JinLOA4TextureAtlas"

Appearance105.texture = ImageTexture107

Shape104.appearance = Appearance105
IndexedFaceSet108 = x3d.IndexedFaceSet()
IndexedFaceSet108.coordIndex = [0,11,14,-1,5,7,2,-1,2,0,5,-1,1,10,9,-1,9,2,1,-1,15,8,20,-1,20,23,15,-1,3,4,19,-1,19,21,3,-1,13,4,10,-1,10,18,13,-1,12,1,6,-1,6,16,12,-1,6,1,2,-1,2,7,6,-1,5,0,14,-1,14,17,5,-1,10,4,3,-1,3,9,10,-1,9,11,0,-1,0,2,9,-1,10,1,12,-1,12,18,10,-1,8,11,9,-1,9,3,8,-1,8,15,14,-1,14,11,8,-1,21,20,8,-1,8,3,21,-1,13,22,19,-1,19,4,13,-1,34,33,39,-1,34,39,36,-1,34,36,35,-1,42,41,40,-1,42,40,46,-1,45,42,46,-1,31,30,29,-1,29,32,31,-1,32,29,24,-1,24,29,28,-1,28,25,24,-1,25,28,27,-1,27,26,25,-1,18,24,25,-1,25,13,18,-1,13,25,26,-1,26,22,13,-1,45,44,43,-1,43,42,45,-1,23,27,28,-1,28,15,23,-1,15,28,29,-1,29,14,15,-1,14,29,30,-1,30,17,14,-1,39,38,37,-1,37,36,39,-1,16,31,32,-1,32,12,16,-1,12,32,24,-1,24,18,12,-1,5,33,34,-1,34,7,5,-1,7,34,35,-1,35,6,7,-1,6,35,36,-1,36,16,6,-1,16,36,37,-1,37,31,16,-1,31,37,38,-1,38,30,31,-1,30,38,39,-1,39,17,30,-1,17,39,33,-1,33,5,17,-1,21,40,41,-1,41,20,21,-1,20,41,42,-1,42,23,20,-1,23,42,43,-1,43,27,23,-1,27,43,44,-1,44,26,27,-1,26,44,45,-1,45,22,26,-1,22,45,46,-1,46,19,22,-1,19,46,40,-1,40,21,19,-1]
IndexedFaceSet108.creaseAngle = 3.14159
IndexedFaceSet108.texCoordIndex = [1,11,14,-1,5,7,2,-1,2,1,5,-1,3,10,9,-1,9,2,3,-1,15,8,20,-1,20,23,15,-1,0,4,19,-1,19,21,0,-1,13,4,10,-1,10,18,13,-1,12,3,6,-1,6,16,12,-1,6,3,2,-1,2,7,6,-1,5,1,14,-1,14,17,5,-1,10,4,0,-1,0,9,10,-1,9,11,1,-1,1,2,9,-1,10,3,12,-1,12,18,10,-1,8,11,9,-1,9,0,8,-1,8,15,14,-1,14,11,8,-1,21,20,8,-1,8,0,21,-1,13,22,19,-1,19,4,13,-1,34,33,39,-1,34,39,36,-1,34,36,35,-1,42,41,40,-1,42,40,46,-1,45,42,46,-1,31,30,29,-1,29,32,31,-1,32,14,24,-1,24,29,28,-1,28,25,24,-1,25,28,27,-1,27,26,25,-1,18,24,25,-1,25,13,18,-1,13,25,26,-1,26,22,13,-1,45,44,43,-1,43,42,45,-1,23,27,28,-1,28,15,23,-1,15,28,29,-1,29,14,15,-1,14,29,30,-1,30,17,14,-1,39,38,37,-1,37,36,39,-1,16,31,32,-1,32,12,16,-1,12,32,24,-1,24,18,12,-1,5,33,34,-1,34,7,5,-1,7,34,35,-1,35,6,7,-1,6,35,36,-1,36,16,6,-1,16,36,37,-1,37,31,16,-1,31,37,38,-1,38,30,31,-1,30,38,39,-1,39,17,30,-1,17,39,33,-1,33,5,17,-1,21,40,41,-1,41,20,21,-1,20,41,42,-1,42,23,20,-1,23,42,43,-1,43,27,23,-1,27,43,44,-1,44,26,27,-1,26,44,45,-1,45,22,26,-1,22,45,46,-1,46,19,22,-1,19,46,40,-1,40,21,19,-1]
Coordinate109 = x3d.Coordinate()

IndexedFaceSet108.coord = Coordinate109
TextureCoordinate110 = x3d.TextureCoordinate()

IndexedFaceSet108.texCoord = TextureCoordinate110

Shape104.geometry = IndexedFaceSet108

Transform103.children.append(Shape104)

HAnimSegment102.children.append(Transform103)

HAnimJoint101.children.append(HAnimSegment102)
HAnimJoint111 = x3d.HAnimJoint()
HAnimJoint111.name = "l_metatarsophalangeal_1"
HAnimJoint111.DEF = "hanim_l_metatarsophalangeal_1"
HAnimJoint111.center = [0.0621225,0.01788669,0.09362249999999998]
HAnimJoint111.ulimit = [0,0,0]
HAnimJoint111.llimit = [0,0,0]
HAnimSegment112 = x3d.HAnimSegment()
HAnimSegment112.name = "l_tarsal_proximal_phalanx_1"
HAnimSegment112.DEF = "hanim_l_tarsal_proximal_phalanx_1"
Transform113 = x3d.Transform()
Transform113.translation = [0.0621225,0.01788669,0.09362249999999998]
Shape114 = x3d.Shape()
Appearance115 = x3d.Appearance()
Material116 = x3d.Material()
Material116.diffuseColor = [0.588,0.588,0.588]

Appearance115.material = Material116
ImageTexture117 = x3d.ImageTexture()
ImageTexture117.USE = "JinLOA4TextureAtlas"

Appearance115.texture = ImageTexture117

Shape114.appearance = Appearance115
IndexedFaceSet118 = x3d.IndexedFaceSet()
IndexedFaceSet118.coordIndex = [9,16,17,-1,17,10,9,-1,11,8,2,-1,2,1,11,-1,7,3,2,-1,2,8,7,-1,7,13,4,-1,4,3,7,-1,12,5,4,-1,4,13,12,-1,5,12,0,-1,0,6,5,-1,0,11,1,-1,1,6,0,-1,14,15,19,-1,19,20,14,-1,14,10,17,-1,17,15,14,-1,9,21,18,-1,18,16,9,-1,7,8,9,-1,9,10,7,-1,8,11,21,-1,21,9,8,-1,12,13,14,-1,14,20,12,-1,13,7,10,-1,10,14,13,-1,11,22,21,-1,0,12,23,-1,23,24,0,-1,11,0,24,-1,24,22,11,-1,23,12,20,-1,37,42,41,-1,41,40,39,-1,37,41,39,-1,38,37,39,-1,35,34,33,-1,35,33,32,-1,31,35,32,-1,27,26,25,-1,28,27,25,-1,28,25,29,-1,35,31,30,-1,30,36,35,-1,17,25,26,-1,26,15,17,-1,15,26,27,-1,27,19,15,-1,19,27,28,-1,28,18,19,-1,18,28,29,-1,29,16,18,-1,16,29,25,-1,25,17,16,-1,19,30,31,-1,31,20,19,-1,20,31,32,-1,32,23,20,-1,23,32,33,-1,33,24,23,-1,24,33,34,-1,34,22,24,-1,22,34,35,-1,35,21,22,-1,21,35,36,-1,36,18,21,-1,18,36,30,-1,30,19,18,-1,2,37,38,-1,38,1,2,-1,1,38,39,-1,39,6,1,-1,6,39,40,-1,40,5,6,-1,5,40,41,-1,41,4,5,-1,4,41,42,-1,42,3,4,-1,3,42,37,-1,37,2,3,-1]
IndexedFaceSet118.creaseAngle = 3.14159
IndexedFaceSet118.texCoordIndex = [2,28,29,-1,29,1,2,-1,11,13,4,-1,4,5,11,-1,10,6,4,-1,4,13,10,-1,10,12,7,-1,7,6,10,-1,14,8,7,-1,7,12,14,-1,8,14,3,-1,3,9,8,-1,3,11,5,-1,5,9,3,-1,0,27,31,-1,31,33,0,-1,0,1,29,-1,29,27,0,-1,2,35,30,-1,30,28,2,-1,15,16,17,-1,17,18,15,-1,16,19,34,-1,34,17,16,-1,20,21,22,-1,22,32,20,-1,21,23,24,-1,24,22,21,-1,19,36,34,-1,25,20,37,-1,37,39,25,-1,19,26,38,-1,38,36,19,-1,37,20,32,-1,52,57,56,-1,56,55,54,-1,52,56,54,-1,53,52,54,-1,50,49,48,-1,50,48,47,-1,46,50,47,-1,42,41,40,-1,43,42,40,-1,43,40,44,-1,50,46,45,-1,45,51,50,-1,29,40,41,-1,41,27,29,-1,27,41,42,-1,42,31,27,-1,31,42,43,-1,43,30,31,-1,30,43,44,-1,44,28,30,-1,28,44,40,-1,40,29,28,-1,31,45,46,-1,46,33,31,-1,32,46,47,-1,47,37,32,-1,37,47,48,-1,48,39,37,-1,38,48,49,-1,49,36,38,-1,36,49,50,-1,50,34,36,-1,35,50,51,-1,51,30,35,-1,30,51,45,-1,45,31,30,-1,4,52,53,-1,53,5,4,-1,5,53,54,-1,54,9,5,-1,9,54,55,-1,55,8,9,-1,8,55,56,-1,56,7,8,-1,7,56,57,-1,57,6,7,-1,6,57,52,-1,52,4,6,-1]
Coordinate119 = x3d.Coordinate()

IndexedFaceSet118.coord = Coordinate119
TextureCoordinate120 = x3d.TextureCoordinate()

IndexedFaceSet118.texCoord = TextureCoordinate120

Shape114.geometry = IndexedFaceSet118

Transform113.children.append(Shape114)

HAnimSegment112.children.append(Transform113)

HAnimJoint111.children.append(HAnimSegment112)
HAnimJoint121 = x3d.HAnimJoint()
HAnimJoint121.name = "l_tarsal_distal_interphalangeal_1"
HAnimJoint121.DEF = "hanim_l_tarsal_distal_interphalangeal_1"
HAnimJoint121.center = [0.0621225,0.01504926,0.1153125]
HAnimJoint121.ulimit = [0,0,0]
HAnimJoint121.llimit = [0,0,0]
HAnimSegment122 = x3d.HAnimSegment()
HAnimSegment122.name = "l_tarsal_distal_phalanx_1"
HAnimSegment122.DEF = "hanim_l_tarsal_distal_phalanx_1"
Transform123 = x3d.Transform()
Transform123.translation = [0.0621225,0.01504926,0.1153125]
Shape124 = x3d.Shape()
Appearance125 = x3d.Appearance()
Material126 = x3d.Material()
Material126.diffuseColor = [0.588,0.588,0.588]

Appearance125.material = Material126
ImageTexture127 = x3d.ImageTexture()
ImageTexture127.USE = "JinLOA4TextureAtlas"

Appearance125.texture = ImageTexture127

Shape124.appearance = Appearance125
IndexedFaceSet128 = x3d.IndexedFaceSet()
IndexedFaceSet128.coordIndex = [3,4,5,-1,5,2,3,-1,1,2,5,-1,5,0,1,-1,1,0,6,-1,6,7,1,-1,8,2,1,-1,1,7,8,-1,3,2,8,-1,8,9,3,-1,10,4,3,-1,3,9,10,-1,11,5,4,-1,4,10,11,-1,0,5,11,-1,11,6,0,-1,7,6,12,-1,12,13,7,-1,14,8,7,-1,7,13,14,-1,9,8,14,-1,14,15,9,-1,16,10,9,-1,9,15,16,-1,17,11,10,-1,10,16,17,-1,6,11,17,-1,17,12,6,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,12,18,19,-1,19,13,12,-1,13,19,20,-1,20,14,13,-1,14,20,21,-1,21,15,14,-1,15,21,22,-1,22,16,15,-1,16,22,23,-1,23,17,16,-1,17,23,18,-1,18,12,17,-1]
IndexedFaceSet128.creaseAngle = 3.14159
IndexedFaceSet128.texCoordIndex = [0,1,2,-1,2,3,0,-1,5,3,2,-1,2,4,5,-1,13,14,15,-1,15,12,13,-1,8,3,5,-1,5,6,8,-1,0,3,8,-1,8,9,0,-1,10,1,0,-1,0,9,10,-1,11,2,1,-1,1,10,11,-1,4,2,11,-1,11,7,4,-1,12,15,16,-1,16,18,12,-1,20,8,6,-1,6,19,20,-1,9,8,20,-1,20,21,9,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,7,11,23,-1,23,17,7,-1,24,29,28,-1,28,27,26,-1,24,28,26,-1,25,24,26,-1,16,24,25,-1,25,18,16,-1,19,25,26,-1,26,20,19,-1,20,26,27,-1,27,21,20,-1,21,27,28,-1,28,22,21,-1,22,28,29,-1,29,23,22,-1,23,29,24,-1,24,17,23,-1]
Coordinate129 = x3d.Coordinate()

IndexedFaceSet128.coord = Coordinate129
TextureCoordinate130 = x3d.TextureCoordinate()

IndexedFaceSet128.texCoord = TextureCoordinate130

Shape124.geometry = IndexedFaceSet128

Transform123.children.append(Shape124)

HAnimSegment122.children.append(Transform123)

HAnimJoint121.children.append(HAnimSegment122)

HAnimJoint111.children.append(HAnimJoint121)

HAnimJoint101.children.append(HAnimJoint111)

HAnimJoint91.children.append(HAnimJoint101)

HAnimJoint81.children.append(HAnimJoint91)
HAnimJoint131 = x3d.HAnimJoint()
HAnimJoint131.name = "l_cuneonavicular_2"
HAnimJoint131.DEF = "hanim_l_cuneonavicular_2"
HAnimJoint131.center = [0.0814275,0.041571000000000004,0.02142675]
HAnimJoint131.ulimit = [0,0,0]
HAnimJoint131.llimit = [0,0,0]
HAnimSegment132 = x3d.HAnimSegment()
HAnimSegment132.name = "l_cuneiform_2"
HAnimSegment132.DEF = "hanim_l_cuneiform_2"
Transform133 = x3d.Transform()
Transform133.translation = [0.0814275,0.041571000000000004,0.02142675]
Shape134 = x3d.Shape()
Appearance135 = x3d.Appearance()
Material136 = x3d.Material()
Material136.diffuseColor = [0.588,0.588,0.588]

Appearance135.material = Material136
ImageTexture137 = x3d.ImageTexture()
ImageTexture137.USE = "JinLOA4TextureAtlas"

Appearance135.texture = ImageTexture137

Shape134.appearance = Appearance135
IndexedFaceSet138 = x3d.IndexedFaceSet()
IndexedFaceSet138.coordIndex = [1,8,9,-1,9,4,1,-1,5,0,2,-1,2,7,5,-1,4,6,3,-1,3,1,4,-1,10,0,5,-1,5,11,10,-1,32,37,36,-1,36,33,32,-1,24,29,28,-1,28,25,24,-1,19,18,23,-1,19,23,22,-1,19,22,21,-1,19,21,20,-1,13,12,17,-1,13,17,16,-1,13,16,15,-1,13,15,14,-1,9,12,13,-1,13,4,9,-1,4,13,14,-1,14,6,4,-1,24,31,30,-1,30,29,24,-1,7,15,16,-1,16,5,7,-1,5,16,17,-1,17,11,5,-1,36,35,34,-1,34,33,36,-1,3,18,19,-1,19,1,3,-1,1,19,20,-1,20,8,1,-1,32,39,38,-1,38,37,32,-1,10,21,22,-1,22,0,10,-1,0,22,23,-1,23,2,0,-1,28,27,26,-1,26,25,28,-1,6,24,25,-1,25,3,6,-1,3,25,26,-1,26,18,3,-1,18,26,27,-1,27,23,18,-1,23,27,28,-1,28,2,23,-1,2,28,29,-1,29,7,2,-1,7,29,30,-1,30,15,7,-1,15,30,31,-1,31,14,15,-1,14,31,24,-1,24,6,14,-1,8,32,33,-1,33,9,8,-1,9,33,34,-1,34,12,9,-1,12,34,35,-1,35,17,12,-1,17,35,36,-1,36,11,17,-1,11,36,37,-1,37,10,11,-1,10,37,38,-1,38,21,10,-1,21,38,39,-1,39,20,21,-1,20,39,32,-1,32,8,20,-1]
IndexedFaceSet138.creaseAngle = 3.14159
IndexedFaceSet138.texCoordIndex = [0,8,9,-1,9,4,0,-1,5,1,2,-1,2,7,5,-1,4,6,3,-1,3,0,4,-1,10,1,5,-1,5,11,10,-1,32,37,36,-1,36,33,32,-1,24,29,28,-1,28,25,24,-1,19,18,23,-1,19,23,22,-1,19,22,21,-1,19,21,20,-1,13,12,17,-1,13,17,16,-1,13,16,15,-1,13,15,14,-1,9,12,13,-1,13,4,9,-1,4,13,14,-1,14,6,4,-1,24,31,30,-1,30,29,24,-1,7,15,16,-1,16,5,7,-1,5,16,17,-1,17,11,5,-1,36,35,34,-1,34,33,36,-1,3,18,19,-1,19,0,3,-1,0,19,20,-1,20,8,0,-1,32,39,38,-1,38,37,32,-1,10,21,22,-1,22,1,10,-1,1,22,23,-1,23,2,1,-1,28,27,26,-1,26,25,28,-1,6,24,25,-1,25,3,6,-1,3,25,26,-1,26,18,3,-1,18,26,27,-1,27,23,18,-1,23,27,28,-1,28,2,23,-1,2,28,29,-1,29,7,2,-1,7,29,30,-1,30,15,7,-1,15,30,31,-1,31,14,15,-1,14,31,24,-1,24,6,14,-1,8,32,33,-1,33,9,8,-1,9,33,34,-1,34,12,9,-1,12,34,35,-1,35,17,12,-1,17,35,36,-1,36,11,17,-1,11,36,37,-1,37,10,11,-1,10,37,38,-1,38,21,10,-1,21,38,39,-1,39,20,21,-1,20,39,32,-1,32,8,20,-1]
Coordinate139 = x3d.Coordinate()

IndexedFaceSet138.coord = Coordinate139
TextureCoordinate140 = x3d.TextureCoordinate()

IndexedFaceSet138.texCoord = TextureCoordinate140

Shape134.geometry = IndexedFaceSet138

Transform133.children.append(Shape134)

HAnimSegment132.children.append(Transform133)

HAnimJoint131.children.append(HAnimSegment132)
HAnimJoint141 = x3d.HAnimJoint()
HAnimJoint141.name = "l_tarsometatarsal_2"
HAnimJoint141.DEF = "hanim_l_tarsometatarsal_2"
HAnimJoint141.center = [0.08019,0.032364,0.041062499999999995]
HAnimJoint141.ulimit = [0,0,0]
HAnimJoint141.llimit = [0,0,0]
HAnimSegment142 = x3d.HAnimSegment()
HAnimSegment142.name = "l_metatarsal_2"
HAnimSegment142.DEF = "hanim_l_metatarsal_2"
Transform143 = x3d.Transform()
Transform143.translation = [0.08019,0.032364,0.041062499999999995]
Shape144 = x3d.Shape()
Appearance145 = x3d.Appearance()
Material146 = x3d.Material()
Material146.diffuseColor = [0.588,0.588,0.588]

Appearance145.material = Material146
ImageTexture147 = x3d.ImageTexture()
ImageTexture147.USE = "JinLOA4TextureAtlas"

Appearance145.texture = ImageTexture147

Shape144.appearance = Appearance145
IndexedFaceSet148 = x3d.IndexedFaceSet()
IndexedFaceSet148.coordIndex = [12,15,7,-1,7,4,12,-1,0,8,9,-1,9,2,0,-1,1,10,11,-1,11,3,1,-1,5,0,2,-1,2,6,5,-1,8,1,3,-1,3,9,8,-1,14,13,12,-1,12,4,14,-1,18,17,13,-1,13,14,18,-1,42,39,38,-1,38,43,42,-1,46,51,50,-1,50,47,46,-1,29,35,34,-1,34,30,29,-1,19,26,25,-1,25,20,19,-1,28,27,26,-1,26,19,28,-1,21,24,23,-1,23,22,21,-1,37,36,35,-1,35,29,37,-1,30,34,31,-1,20,25,24,-1,24,21,20,-1,31,34,33,-1,33,32,31,-1,3,19,20,-1,20,9,3,-1,9,20,21,-1,21,2,9,-1,2,21,22,-1,22,6,2,-1,42,41,40,-1,40,39,42,-1,7,23,24,-1,24,4,7,-1,4,24,25,-1,25,16,4,-1,16,25,26,-1,26,14,16,-1,14,26,27,-1,27,18,14,-1,50,49,48,-1,48,47,50,-1,11,28,19,-1,19,3,11,-1,0,29,30,-1,30,8,0,-1,8,30,31,-1,31,1,8,-1,1,31,32,-1,32,10,1,-1,46,53,52,-1,52,51,46,-1,17,33,34,-1,34,13,17,-1,13,34,35,-1,35,12,13,-1,12,35,36,-1,36,15,12,-1,38,45,44,-1,44,43,38,-1,5,37,29,-1,29,0,5,-1,15,38,39,-1,39,7,15,-1,7,39,40,-1,40,23,7,-1,23,40,41,-1,41,22,23,-1,22,41,42,-1,42,6,22,-1,6,42,43,-1,43,5,6,-1,5,43,44,-1,44,37,5,-1,37,44,45,-1,45,36,37,-1,36,45,38,-1,38,15,36,-1,10,46,47,-1,47,11,10,-1,11,47,48,-1,48,28,11,-1,28,48,49,-1,49,27,28,-1,27,49,50,-1,50,18,27,-1,18,50,51,-1,51,17,18,-1,17,51,52,-1,52,33,17,-1,33,52,53,-1,53,32,33,-1,32,53,46,-1,46,10,32,-1]
IndexedFaceSet148.creaseAngle = 3.14159
IndexedFaceSet148.texCoordIndex = [1,7,10,-1,10,0,1,-1,2,11,12,-1,12,3,2,-1,5,15,16,-1,16,6,5,-1,8,2,3,-1,3,9,8,-1,11,5,6,-1,6,12,11,-1,4,13,1,-1,1,0,4,-1,17,14,13,-1,13,4,17,-1,45,42,41,-1,41,46,45,-1,49,54,53,-1,53,50,49,-1,32,38,37,-1,37,33,32,-1,22,29,28,-1,28,23,22,-1,31,30,29,-1,29,22,31,-1,24,27,26,-1,26,25,24,-1,40,39,38,-1,38,32,40,-1,33,21,34,-1,23,28,27,-1,27,24,23,-1,34,37,36,-1,36,35,34,-1,6,22,23,-1,23,12,6,-1,12,23,24,-1,24,3,12,-1,3,24,25,-1,25,9,3,-1,45,44,43,-1,43,42,45,-1,10,26,27,-1,27,0,10,-1,20,27,28,-1,28,18,20,-1,18,28,29,-1,29,19,18,-1,4,29,30,-1,30,17,4,-1,53,52,51,-1,51,50,53,-1,16,31,22,-1,22,6,16,-1,2,32,33,-1,33,11,2,-1,11,33,34,-1,34,5,11,-1,5,34,35,-1,35,15,5,-1,49,56,55,-1,55,54,49,-1,14,36,37,-1,37,13,14,-1,13,37,38,-1,38,1,13,-1,1,38,39,-1,39,7,1,-1,41,48,47,-1,47,46,41,-1,8,40,32,-1,32,2,8,-1,7,41,42,-1,42,10,7,-1,10,42,43,-1,43,26,10,-1,26,43,44,-1,44,25,26,-1,25,44,45,-1,45,9,25,-1,9,45,46,-1,46,8,9,-1,8,46,47,-1,47,40,8,-1,40,47,48,-1,48,39,40,-1,39,48,41,-1,41,7,39,-1,15,49,50,-1,50,16,15,-1,16,50,51,-1,51,31,16,-1,31,51,52,-1,52,30,31,-1,30,52,53,-1,53,17,30,-1,17,53,54,-1,54,14,17,-1,14,54,55,-1,55,36,14,-1,36,55,56,-1,56,35,36,-1,35,56,49,-1,49,15,35,-1]
Coordinate149 = x3d.Coordinate()

IndexedFaceSet148.coord = Coordinate149
TextureCoordinate150 = x3d.TextureCoordinate()

IndexedFaceSet148.texCoord = TextureCoordinate150

Shape144.geometry = IndexedFaceSet148

Transform143.children.append(Shape144)

HAnimSegment142.children.append(Transform143)

HAnimJoint141.children.append(HAnimSegment142)
HAnimJoint151 = x3d.HAnimJoint()
HAnimJoint151.name = "l_metatarsophalangeal_2"
HAnimJoint151.DEF = "hanim_l_metatarsophalangeal_2"
HAnimJoint151.center = [0.08253,0.01857024,0.09782999999999999]
HAnimJoint151.ulimit = [0,0,0]
HAnimJoint151.llimit = [0,0,0]
HAnimSegment152 = x3d.HAnimSegment()
HAnimSegment152.name = "l_tarsal_proximal_phalanx_2"
HAnimSegment152.DEF = "hanim_l_tarsal_proximal_phalanx_2"
Transform153 = x3d.Transform()
Transform153.translation = [0.08253,0.01857024,0.09782999999999999]
Shape154 = x3d.Shape()
Appearance155 = x3d.Appearance()
Material156 = x3d.Material()
Material156.diffuseColor = [0.588,0.588,0.588]

Appearance155.material = Material156
ImageTexture157 = x3d.ImageTexture()
ImageTexture157.USE = "JinLOA4TextureAtlas"

Appearance155.texture = ImageTexture157

Shape154.appearance = Appearance155
IndexedFaceSet158 = x3d.IndexedFaceSet()
IndexedFaceSet158.coordIndex = [8,6,20,-1,20,18,8,-1,14,11,19,-1,19,21,14,-1,6,1,20,-1,19,11,15,-1,0,2,3,-1,3,14,0,-1,12,8,16,-1,16,17,12,-1,15,11,12,-1,12,17,15,-1,6,3,2,-1,2,1,6,-1,0,14,21,-1,16,8,18,-1,3,6,5,-1,5,4,3,-1,6,8,7,-1,7,5,6,-1,10,9,12,-1,12,11,10,-1,14,13,10,-1,10,11,14,-1,13,14,3,-1,3,4,13,-1,8,12,9,-1,9,7,8,-1,19,23,24,-1,24,21,19,-1,22,18,20,-1,20,25,22,-1,31,30,36,-1,31,36,35,-1,34,31,35,-1,5,7,9,-1,9,10,13,-1,5,9,13,-1,4,5,13,-1,29,28,27,-1,27,26,29,-1,37,43,42,-1,42,41,37,-1,31,34,33,-1,33,32,31,-1,41,40,39,-1,41,39,38,-1,37,41,38,-1,25,26,27,-1,27,22,25,-1,22,27,28,-1,28,23,22,-1,23,28,29,-1,29,24,23,-1,24,29,26,-1,26,25,24,-1,15,30,31,-1,31,19,15,-1,19,31,32,-1,32,23,19,-1,23,32,33,-1,33,22,23,-1,22,33,34,-1,34,18,22,-1,18,34,35,-1,35,16,18,-1,16,35,36,-1,36,17,16,-1,17,36,30,-1,30,15,17,-1,21,37,38,-1,38,0,21,-1,0,38,39,-1,39,2,0,-1,2,39,40,-1,40,1,2,-1,1,40,41,-1,41,20,1,-1,20,41,42,-1,42,25,20,-1,25,42,43,-1,43,24,25,-1,24,43,37,-1,37,21,24,-1]
IndexedFaceSet158.creaseAngle = 3.14159
IndexedFaceSet158.texCoordIndex = [1,0,30,-1,30,24,1,-1,3,2,25,-1,25,31,3,-1,0,4,30,-1,25,2,26,-1,9,10,5,-1,5,3,9,-1,7,1,27,-1,27,28,7,-1,26,2,8,-1,8,29,26,-1,0,6,11,-1,11,4,0,-1,9,3,31,-1,27,1,24,-1,12,15,14,-1,14,13,12,-1,15,17,16,-1,16,14,15,-1,19,18,21,-1,21,20,19,-1,23,22,19,-1,19,20,23,-1,22,23,12,-1,12,13,22,-1,17,21,18,-1,18,16,17,-1,35,37,38,-1,38,34,35,-1,36,32,33,-1,33,39,36,-1,45,44,50,-1,45,50,49,-1,48,45,49,-1,14,16,18,-1,18,19,22,-1,14,18,22,-1,13,14,22,-1,43,42,41,-1,41,40,43,-1,51,57,56,-1,56,55,51,-1,45,48,47,-1,47,46,45,-1,55,54,53,-1,55,53,52,-1,51,55,52,-1,39,40,41,-1,41,36,39,-1,36,41,42,-1,42,37,36,-1,37,42,43,-1,43,38,37,-1,38,43,40,-1,40,39,38,-1,26,44,45,-1,45,25,26,-1,35,45,46,-1,46,37,35,-1,37,46,47,-1,47,36,37,-1,36,47,48,-1,48,32,36,-1,24,48,49,-1,49,27,24,-1,27,49,50,-1,50,28,27,-1,29,50,44,-1,44,26,29,-1,31,51,52,-1,52,9,31,-1,9,52,53,-1,53,10,9,-1,11,53,54,-1,54,4,11,-1,4,54,55,-1,55,30,4,-1,33,55,56,-1,56,39,33,-1,39,56,57,-1,57,38,39,-1,38,57,51,-1,51,34,38,-1]
Coordinate159 = x3d.Coordinate()

IndexedFaceSet158.coord = Coordinate159
TextureCoordinate160 = x3d.TextureCoordinate()

IndexedFaceSet158.texCoord = TextureCoordinate160

Shape154.geometry = IndexedFaceSet158

Transform153.children.append(Shape154)

HAnimSegment152.children.append(Transform153)

HAnimJoint151.children.append(HAnimSegment152)
HAnimJoint161 = x3d.HAnimJoint()
HAnimJoint161.name = "l_tarsal_proximal_interphalangeal_2"
HAnimJoint161.DEF = "hanim_l_tarsal_proximal_interphalangeal_2"
HAnimJoint161.center = [0.0843075,0.015682590000000003,0.1140075]
HAnimJoint161.ulimit = [0,0,0]
HAnimJoint161.llimit = [0,0,0]
HAnimSegment162 = x3d.HAnimSegment()
HAnimSegment162.name = "l_tarsal_middle_phalanx_2"
HAnimSegment162.DEF = "hanim_l_tarsal_middle_phalanx_2"
Transform163 = x3d.Transform()
Transform163.translation = [0.0843075,0.015682590000000003,0.1140075]
Shape164 = x3d.Shape()
Appearance165 = x3d.Appearance()
Material166 = x3d.Material()
Material166.diffuseColor = [0.588,0.588,0.588]

Appearance165.material = Material166
ImageTexture167 = x3d.ImageTexture()
ImageTexture167.USE = "JinLOA4TextureAtlas"

Appearance165.texture = ImageTexture167

Shape164.appearance = Appearance165
IndexedFaceSet168 = x3d.IndexedFaceSet()
IndexedFaceSet168.coordIndex = [0,1,6,-1,6,7,0,-1,2,0,7,-1,7,8,2,-1,9,3,2,-1,2,8,9,-1,4,3,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,6,1,5,-1,5,11,6,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,0,18,19,-1,19,1,0,-1,1,19,20,-1,20,5,1,-1,5,20,21,-1,21,4,5,-1,4,21,22,-1,22,3,4,-1,3,22,23,-1,23,2,3,-1,2,23,18,-1,18,0,2,-1]
IndexedFaceSet168.creaseAngle = 3.14159
IndexedFaceSet168.texCoordIndex = [0,1,8,-1,8,9,0,-1,2,0,9,-1,9,10,2,-1,11,3,2,-1,2,10,11,-1,4,3,11,-1,11,13,4,-1,14,5,6,-1,6,12,14,-1,8,1,7,-1,7,15,8,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,13,11,-1,12,20,21,-1,21,14,12,-1,15,21,16,-1,16,8,15,-1,22,27,26,-1,26,25,24,-1,22,26,24,-1,23,22,24,-1,0,22,23,-1,23,1,0,-1,1,23,24,-1,24,7,1,-1,5,24,25,-1,25,6,5,-1,4,25,26,-1,26,3,4,-1,3,26,27,-1,27,2,3,-1,2,27,22,-1,22,0,2,-1]
Coordinate169 = x3d.Coordinate()

IndexedFaceSet168.coord = Coordinate169
TextureCoordinate170 = x3d.TextureCoordinate()

IndexedFaceSet168.texCoord = TextureCoordinate170

Shape164.geometry = IndexedFaceSet168

Transform163.children.append(Shape164)

HAnimSegment162.children.append(Transform163)

HAnimJoint161.children.append(HAnimSegment162)
HAnimJoint171 = x3d.HAnimJoint()
HAnimJoint171.name = "l_tarsal_distal_interphalangeal_2"
HAnimJoint171.DEF = "hanim_l_tarsal_distal_interphalangeal_2"
HAnimJoint171.center = [0.0843075,0.012183929999999999,0.12343499999999999]
HAnimJoint171.ulimit = [0,0,0]
HAnimJoint171.llimit = [0,0,0]
HAnimSegment172 = x3d.HAnimSegment()
HAnimSegment172.name = "l_tarsal_distal_phalanx_2"
HAnimSegment172.DEF = "hanim_l_tarsal_distal_phalanx_2"
Transform173 = x3d.Transform()
Transform173.translation = [0.0843075,0.012183929999999999,0.12343499999999999]
Shape174 = x3d.Shape()
Appearance175 = x3d.Appearance()
Material176 = x3d.Material()
Material176.diffuseColor = [0.588,0.588,0.588]

Appearance175.material = Material176
ImageTexture177 = x3d.ImageTexture()
ImageTexture177.USE = "JinLOA4TextureAtlas"

Appearance175.texture = ImageTexture177

Shape174.appearance = Appearance175
IndexedFaceSet178 = x3d.IndexedFaceSet()
IndexedFaceSet178.coordIndex = [0,3,2,-1,2,1,0,-1,5,1,2,-1,2,4,5,-1,0,1,7,-1,7,6,0,-1,3,0,6,-1,6,8,3,-1,9,2,3,-1,3,8,9,-1,4,2,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,7,1,5,-1,5,11,7,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,7,12,13,-1,13,6,7,-1,6,13,14,-1,14,8,6,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,7,11,-1]
IndexedFaceSet178.creaseAngle = 3.14159
IndexedFaceSet178.texCoordIndex = [0,3,2,-1,2,1,0,-1,5,1,2,-1,2,4,5,-1,0,1,9,-1,9,8,0,-1,3,0,8,-1,8,10,3,-1,11,2,3,-1,3,10,11,-1,4,2,11,-1,11,12,4,-1,14,7,6,-1,6,13,14,-1,9,1,5,-1,5,15,9,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,9,16,17,-1,17,8,9,-1,8,17,18,-1,18,10,8,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,12,11,-1,13,20,21,-1,21,14,13,-1,15,21,16,-1,16,9,15,-1]
Coordinate179 = x3d.Coordinate()

IndexedFaceSet178.coord = Coordinate179
TextureCoordinate180 = x3d.TextureCoordinate()

IndexedFaceSet178.texCoord = TextureCoordinate180

Shape174.geometry = IndexedFaceSet178

Transform173.children.append(Shape174)

HAnimSegment172.children.append(Transform173)

HAnimJoint171.children.append(HAnimSegment172)

HAnimJoint161.children.append(HAnimJoint171)

HAnimJoint151.children.append(HAnimJoint161)

HAnimJoint141.children.append(HAnimJoint151)

HAnimJoint131.children.append(HAnimJoint141)

HAnimJoint81.children.append(HAnimJoint131)
HAnimJoint181 = x3d.HAnimJoint()
HAnimJoint181.name = "l_cuneonavicular_3"
HAnimJoint181.DEF = "hanim_l_cuneonavicular_3"
HAnimJoint181.center = [0.09296999999999998,0.0414036,0.019818]
HAnimJoint181.ulimit = [0,0,0]
HAnimJoint181.llimit = [0,0,0]
HAnimSegment182 = x3d.HAnimSegment()
HAnimSegment182.name = "l_cuneiform_3"
HAnimSegment182.DEF = "hanim_l_cuneiform_3"
Transform183 = x3d.Transform()
Transform183.translation = [0.09296999999999998,0.0414036,0.019818]
Shape184 = x3d.Shape()
Appearance185 = x3d.Appearance()
Material186 = x3d.Material()
Material186.diffuseColor = [0.588,0.588,0.588]

Appearance185.material = Material186
ImageTexture187 = x3d.ImageTexture()
ImageTexture187.USE = "JinLOA4TextureAtlas"

Appearance185.texture = ImageTexture187

Shape184.appearance = Appearance185
IndexedFaceSet188 = x3d.IndexedFaceSet()
IndexedFaceSet188.coordIndex = [4,3,6,-1,6,0,4,-1,4,8,3,-1,5,2,7,-1,7,1,5,-1,2,9,7,-1,4,7,9,-1,9,8,4,-1,20,25,24,-1,24,21,20,-1,12,11,10,-1,10,13,12,-1,18,17,14,-1,14,19,18,-1,15,14,17,-1,17,16,15,-1,0,10,11,-1,11,4,0,-1,4,11,12,-1,12,7,4,-1,7,12,13,-1,13,1,7,-1,24,23,22,-1,22,21,24,-1,3,14,15,-1,15,6,3,-1,20,27,26,-1,26,25,20,-1,5,16,17,-1,17,2,5,-1,2,17,18,-1,18,9,2,-1,9,18,19,-1,19,8,9,-1,8,19,14,-1,14,3,8,-1,6,20,21,-1,21,0,6,-1,0,21,22,-1,22,10,0,-1,10,22,23,-1,23,13,10,-1,13,23,24,-1,24,1,13,-1,1,24,25,-1,25,5,1,-1,5,25,26,-1,26,16,5,-1,16,26,27,-1,27,15,16,-1,15,27,20,-1,20,6,15,-1]
IndexedFaceSet188.creaseAngle = 3.14159
IndexedFaceSet188.texCoordIndex = [4,3,6,-1,6,0,4,-1,4,8,3,-1,5,2,7,-1,7,1,5,-1,2,9,7,-1,4,11,10,-1,10,8,4,-1,22,27,26,-1,26,23,22,-1,14,13,12,-1,12,15,14,-1,20,19,16,-1,16,21,20,-1,17,16,19,-1,19,18,17,-1,0,12,13,-1,13,4,0,-1,4,13,14,-1,14,11,4,-1,7,14,15,-1,15,1,7,-1,26,25,24,-1,24,23,26,-1,3,16,17,-1,17,6,3,-1,22,29,28,-1,28,27,22,-1,5,18,19,-1,19,2,5,-1,2,19,20,-1,20,9,2,-1,10,20,21,-1,21,8,10,-1,8,21,16,-1,16,3,8,-1,6,22,23,-1,23,0,6,-1,0,23,24,-1,24,12,0,-1,12,24,25,-1,25,15,12,-1,15,25,26,-1,26,1,15,-1,1,26,27,-1,27,5,1,-1,5,27,28,-1,28,18,5,-1,18,28,29,-1,29,17,18,-1,17,29,22,-1,22,6,17,-1]
Coordinate189 = x3d.Coordinate()

IndexedFaceSet188.coord = Coordinate189
TextureCoordinate190 = x3d.TextureCoordinate()

IndexedFaceSet188.texCoord = TextureCoordinate190

Shape184.geometry = IndexedFaceSet188

Transform183.children.append(Shape184)

HAnimSegment182.children.append(Transform183)

HAnimJoint181.children.append(HAnimSegment182)
HAnimJoint191 = x3d.HAnimJoint()
HAnimJoint191.name = "l_tarsometatarsal_3"
HAnimJoint191.DEF = "hanim_l_tarsometatarsal_3"
HAnimJoint191.center = [0.09459,0.032364,0.039397499999999995]
HAnimJoint191.ulimit = [0,0,0]
HAnimJoint191.llimit = [0,0,0]
HAnimSegment192 = x3d.HAnimSegment()
HAnimSegment192.name = "l_metatarsal_3"
HAnimSegment192.DEF = "hanim_l_metatarsal_3"
Transform193 = x3d.Transform()
Transform193.translation = [0.09459,0.032364,0.039397499999999995]
Shape194 = x3d.Shape()
Appearance195 = x3d.Appearance()
Material196 = x3d.Material()
Material196.diffuseColor = [0.588,0.588,0.588]

Appearance195.material = Material196
ImageTexture197 = x3d.ImageTexture()
ImageTexture197.USE = "JinLOA4TextureAtlas"

Appearance195.texture = ImageTexture197

Shape194.appearance = Appearance195
IndexedFaceSet198 = x3d.IndexedFaceSet()
IndexedFaceSet198.coordIndex = [15,3,13,-1,13,12,15,-1,10,2,0,-1,0,7,10,-1,9,6,14,-1,14,1,9,-1,3,10,7,-1,7,13,3,-1,12,16,5,-1,5,15,12,-1,6,9,17,-1,17,8,6,-1,17,4,11,-1,11,8,17,-1,27,31,28,-1,34,33,32,-1,32,35,34,-1,28,31,30,-1,30,29,28,-1,35,32,31,-1,31,27,35,-1,23,20,24,-1,22,21,20,-1,20,23,22,-1,25,19,18,-1,18,26,25,-1,24,20,19,-1,19,25,24,-1,1,18,19,-1,19,9,1,-1,9,19,20,-1,20,17,9,-1,17,20,21,-1,21,4,17,-1,48,47,46,-1,46,45,48,-1,5,22,23,-1,23,15,5,-1,15,23,24,-1,24,3,15,-1,3,24,25,-1,25,10,3,-1,10,25,26,-1,26,2,10,-1,40,39,38,-1,38,37,40,-1,13,27,28,-1,28,12,13,-1,12,28,29,-1,29,16,12,-1,44,51,50,-1,50,49,44,-1,11,30,31,-1,31,8,11,-1,8,31,32,-1,32,6,8,-1,6,32,33,-1,33,14,6,-1,36,43,42,-1,42,41,36,-1,0,34,35,-1,35,7,0,-1,7,35,27,-1,27,13,7,-1,37,36,41,-1,41,40,37,-1,48,45,44,-1,44,49,48,-1,14,36,37,-1,37,1,14,-1,1,37,38,-1,38,18,1,-1,18,38,39,-1,39,26,18,-1,26,39,40,-1,40,2,26,-1,2,40,41,-1,41,0,2,-1,0,41,42,-1,42,34,0,-1,34,42,43,-1,43,33,34,-1,33,43,36,-1,36,14,33,-1,16,44,45,-1,45,5,16,-1,5,45,46,-1,46,22,5,-1,22,46,47,-1,47,21,22,-1,21,47,48,-1,48,4,21,-1,4,48,49,-1,49,11,4,-1,11,49,50,-1,50,30,11,-1,30,50,51,-1,51,29,30,-1,29,51,44,-1,44,16,29,-1]
IndexedFaceSet198.creaseAngle = 3.14159
IndexedFaceSet198.texCoordIndex = [25,3,16,-1,16,7,25,-1,12,2,0,-1,0,9,12,-1,22,18,20,-1,20,1,22,-1,13,23,19,-1,19,17,13,-1,15,26,5,-1,5,24,15,-1,8,11,28,-1,28,21,8,-1,14,4,6,-1,6,10,14,-1,43,27,45,-1,54,53,51,-1,51,55,54,-1,46,50,48,-1,48,47,46,-1,56,52,49,-1,49,44,56,-1,36,28,38,-1,35,34,33,-1,33,37,35,-1,40,30,29,-1,29,42,40,-1,39,32,31,-1,31,41,39,-1,1,29,30,-1,30,22,1,-1,11,31,32,-1,32,28,11,-1,14,33,34,-1,34,4,14,-1,70,69,68,-1,68,67,70,-1,5,35,37,-1,37,24,5,-1,25,36,38,-1,38,3,25,-1,13,39,41,-1,41,23,13,-1,12,40,42,-1,42,2,12,-1,62,61,60,-1,60,58,62,-1,16,43,45,-1,45,7,16,-1,15,46,47,-1,47,26,15,-1,66,74,73,-1,73,71,66,-1,6,48,50,-1,50,10,6,-1,21,49,52,-1,52,8,21,-1,18,51,53,-1,53,20,18,-1,57,65,64,-1,64,63,57,-1,0,54,55,-1,55,9,0,-1,19,56,44,-1,44,17,19,-1,59,57,63,-1,63,62,59,-1,70,67,66,-1,66,72,70,-1,20,57,59,-1,59,1,20,-1,1,58,60,-1,60,29,1,-1,29,60,61,-1,61,42,29,-1,42,61,62,-1,62,2,42,-1,2,62,63,-1,63,0,2,-1,0,63,64,-1,64,54,0,-1,54,64,65,-1,65,53,54,-1,53,65,57,-1,57,20,53,-1,26,66,67,-1,67,5,26,-1,5,67,68,-1,68,35,5,-1,35,68,69,-1,69,34,35,-1,34,69,70,-1,70,4,34,-1,4,70,72,-1,72,6,4,-1,6,71,73,-1,73,48,6,-1,48,73,74,-1,74,47,48,-1,47,74,66,-1,66,26,47,-1]
Coordinate199 = x3d.Coordinate()

IndexedFaceSet198.coord = Coordinate199
TextureCoordinate200 = x3d.TextureCoordinate()

IndexedFaceSet198.texCoord = TextureCoordinate200

Shape194.geometry = IndexedFaceSet198

Transform193.children.append(Shape194)

HAnimSegment192.children.append(Transform193)

HAnimJoint191.children.append(HAnimSegment192)
HAnimJoint201 = x3d.HAnimJoint()
HAnimJoint201.name = "l_metatarsophalangeal_3"
HAnimJoint201.DEF = "hanim_l_metatarsophalangeal_3"
HAnimJoint201.center = [0.09648,0.018670680000000002,0.0954225]
HAnimJoint201.ulimit = [0,0,0]
HAnimJoint201.llimit = [0,0,0]
HAnimSegment202 = x3d.HAnimSegment()
HAnimSegment202.name = "l_tarsal_proximal_phalanx_3"
HAnimSegment202.DEF = "hanim_l_tarsal_proximal_phalanx_3"
Transform203 = x3d.Transform()
Transform203.translation = [0.09648,0.018670680000000002,0.0954225]
Shape204 = x3d.Shape()
Appearance205 = x3d.Appearance()
Material206 = x3d.Material()
Material206.diffuseColor = [0.588,0.588,0.588]

Appearance205.material = Material206
ImageTexture207 = x3d.ImageTexture()
ImageTexture207.USE = "JinLOA4TextureAtlas"

Appearance205.texture = ImageTexture207

Shape204.appearance = Appearance205
IndexedFaceSet208 = x3d.IndexedFaceSet()
IndexedFaceSet208.coordIndex = [13,7,1,-1,1,0,13,-1,7,9,2,-1,2,1,7,-1,4,3,14,-1,14,6,4,-1,8,5,4,-1,4,6,8,-1,5,8,13,-1,13,0,5,-1,23,19,15,-1,15,17,23,-1,16,20,24,-1,24,18,16,-1,9,7,19,-1,19,23,9,-1,8,6,24,-1,24,20,8,-1,7,11,19,-1,24,6,21,-1,10,12,13,-1,13,8,10,-1,14,9,25,-1,25,22,14,-1,21,6,14,-1,14,22,21,-1,7,13,12,-1,12,11,7,-1,10,8,20,-1,25,9,23,-1,9,14,3,-1,3,2,9,-1,1,2,3,-1,3,4,5,-1,1,3,5,-1,0,1,5,-1,35,34,33,-1,35,33,32,-1,31,35,32,-1,41,37,43,-1,43,42,41,-1,28,27,26,-1,26,29,28,-1,35,31,30,-1,30,36,35,-1,41,40,39,-1,37,41,39,-1,37,39,38,-1,15,26,27,-1,27,17,15,-1,17,27,28,-1,28,18,17,-1,18,28,29,-1,29,16,18,-1,16,29,26,-1,26,15,16,-1,17,30,31,-1,31,23,17,-1,23,31,32,-1,32,25,23,-1,25,32,33,-1,33,22,25,-1,22,33,34,-1,34,21,22,-1,21,34,35,-1,35,24,21,-1,24,35,36,-1,36,18,24,-1,18,36,30,-1,30,17,18,-1,20,37,38,-1,38,10,20,-1,10,38,39,-1,39,12,10,-1,12,39,40,-1,40,11,12,-1,11,40,41,-1,41,19,11,-1,19,41,42,-1,42,15,19,-1,15,42,43,-1,43,16,15,-1,16,43,37,-1,37,20,16,-1]
IndexedFaceSet208.creaseAngle = 3.14159
IndexedFaceSet208.texCoordIndex = [22,7,0,-1,0,1,22,-1,7,9,2,-1,2,0,7,-1,4,3,23,-1,23,6,4,-1,8,5,4,-1,4,6,8,-1,5,8,22,-1,22,1,5,-1,36,29,24,-1,24,26,36,-1,25,31,38,-1,38,27,25,-1,11,10,28,-1,28,35,11,-1,13,12,37,-1,37,30,13,-1,10,15,28,-1,37,12,32,-1,14,20,16,-1,16,13,14,-1,18,11,39,-1,39,33,18,-1,32,12,19,-1,19,34,32,-1,10,17,21,-1,21,15,10,-1,14,13,30,-1,39,11,35,-1,9,23,3,-1,3,2,9,-1,0,2,3,-1,3,4,5,-1,0,3,5,-1,1,0,5,-1,49,48,47,-1,49,47,46,-1,45,49,46,-1,55,51,57,-1,57,56,55,-1,42,41,40,-1,40,43,42,-1,49,45,44,-1,44,50,49,-1,55,54,53,-1,51,55,53,-1,51,53,52,-1,24,40,41,-1,41,26,24,-1,26,41,42,-1,42,27,26,-1,27,42,43,-1,43,25,27,-1,25,43,40,-1,40,24,25,-1,26,44,45,-1,45,36,26,-1,35,45,46,-1,46,39,35,-1,39,46,47,-1,47,33,39,-1,34,47,48,-1,48,32,34,-1,32,48,49,-1,49,37,32,-1,38,49,50,-1,50,27,38,-1,27,50,44,-1,44,26,27,-1,30,51,52,-1,52,14,30,-1,14,52,53,-1,53,20,14,-1,21,53,54,-1,54,15,21,-1,15,54,55,-1,55,28,15,-1,29,55,56,-1,56,24,29,-1,24,56,57,-1,57,25,24,-1,25,57,51,-1,51,31,25,-1]
Coordinate209 = x3d.Coordinate()

IndexedFaceSet208.coord = Coordinate209
TextureCoordinate210 = x3d.TextureCoordinate()

IndexedFaceSet208.texCoord = TextureCoordinate210

Shape204.geometry = IndexedFaceSet208

Transform203.children.append(Shape204)

HAnimSegment202.children.append(Transform203)

HAnimJoint201.children.append(HAnimSegment202)
HAnimJoint211 = x3d.HAnimJoint()
HAnimJoint211.name = "l_tarsal_proximal_interphalangeal_3"
HAnimJoint211.DEF = "hanim_l_tarsal_proximal_interphalangeal_3"
HAnimJoint211.center = [0.098865,0.014784210000000002,0.110475]
HAnimJoint211.ulimit = [0,0,0]
HAnimJoint211.llimit = [0,0,0]
HAnimSegment212 = x3d.HAnimSegment()
HAnimSegment212.name = "l_tarsal_middle_phalanx_3"
HAnimSegment212.DEF = "hanim_l_tarsal_middle_phalanx_3"
Transform213 = x3d.Transform()
Transform213.translation = [0.098865,0.014784210000000002,0.110475]
Shape214 = x3d.Shape()
Appearance215 = x3d.Appearance()
Material216 = x3d.Material()
Material216.diffuseColor = [0.588,0.588,0.588]

Appearance215.material = Material216
ImageTexture217 = x3d.ImageTexture()
ImageTexture217.USE = "JinLOA4TextureAtlas"

Appearance215.texture = ImageTexture217

Shape214.appearance = Appearance215
IndexedFaceSet218 = x3d.IndexedFaceSet()
IndexedFaceSet218.coordIndex = [1,0,6,-1,6,7,1,-1,2,1,7,-1,7,8,2,-1,9,3,2,-1,2,8,9,-1,4,3,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,6,0,5,-1,5,11,6,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,1,18,19,-1,19,0,1,-1,0,19,20,-1,20,5,0,-1,5,20,21,-1,21,4,5,-1,4,21,22,-1,22,3,4,-1,3,22,23,-1,23,2,3,-1,2,23,18,-1,18,1,2,-1]
IndexedFaceSet218.creaseAngle = 3.14159
IndexedFaceSet218.texCoordIndex = [0,1,8,-1,8,9,0,-1,2,0,9,-1,9,10,2,-1,11,3,2,-1,2,10,11,-1,4,3,11,-1,11,13,4,-1,14,6,7,-1,7,12,14,-1,8,1,5,-1,5,15,8,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,13,11,-1,12,20,21,-1,21,14,12,-1,15,21,16,-1,16,8,15,-1,22,27,26,-1,26,25,24,-1,22,26,24,-1,23,22,24,-1,0,22,23,-1,23,1,0,-1,1,23,24,-1,24,5,1,-1,6,24,25,-1,25,7,6,-1,4,25,26,-1,26,3,4,-1,3,26,27,-1,27,2,3,-1,2,27,22,-1,22,0,2,-1]
Coordinate219 = x3d.Coordinate()

IndexedFaceSet218.coord = Coordinate219
TextureCoordinate220 = x3d.TextureCoordinate()

IndexedFaceSet218.texCoord = TextureCoordinate220

Shape214.geometry = IndexedFaceSet218

Transform213.children.append(Shape214)

HAnimSegment212.children.append(Transform213)

HAnimJoint211.children.append(HAnimSegment212)
HAnimJoint221 = x3d.HAnimJoint()
HAnimJoint221.name = "l_tarsal_distal_interphalangeal_3"
HAnimJoint221.DEF = "hanim_l_tarsal_distal_interphalangeal_3"
HAnimJoint221.center = [0.10041749999999999,0.012183929999999999,0.1197]
HAnimJoint221.ulimit = [0,0,0]
HAnimJoint221.llimit = [0,0,0]
HAnimSegment222 = x3d.HAnimSegment()
HAnimSegment222.name = "l_tarsal_distal_phalanx_3"
HAnimSegment222.DEF = "hanim_l_tarsal_distal_phalanx_3"
Transform223 = x3d.Transform()
Transform223.translation = [0.10041749999999999,0.012183929999999999,0.1197]
Shape224 = x3d.Shape()
Appearance225 = x3d.Appearance()
Material226 = x3d.Material()
Material226.diffuseColor = [0.588,0.588,0.588]

Appearance225.material = Material226
ImageTexture227 = x3d.ImageTexture()
ImageTexture227.USE = "JinLOA4TextureAtlas"

Appearance225.texture = ImageTexture227

Shape224.appearance = Appearance225
IndexedFaceSet228 = x3d.IndexedFaceSet()
IndexedFaceSet228.coordIndex = [1,2,3,-1,3,0,1,-1,5,0,3,-1,3,4,5,-1,1,0,6,-1,6,7,1,-1,2,1,7,-1,7,8,2,-1,9,3,2,-1,2,8,9,-1,4,3,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,6,0,5,-1,5,11,6,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1]
IndexedFaceSet228.creaseAngle = 3.14159
IndexedFaceSet228.texCoordIndex = [0,1,2,-1,2,3,0,-1,5,3,2,-1,2,4,5,-1,0,3,8,-1,8,9,0,-1,1,0,9,-1,9,10,1,-1,11,2,1,-1,1,10,11,-1,4,2,11,-1,11,12,4,-1,14,6,7,-1,7,13,14,-1,8,3,5,-1,5,15,8,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,12,11,-1,13,20,21,-1,21,14,13,-1,15,21,16,-1,16,8,15,-1]
Coordinate229 = x3d.Coordinate()

IndexedFaceSet228.coord = Coordinate229
TextureCoordinate230 = x3d.TextureCoordinate()

IndexedFaceSet228.texCoord = TextureCoordinate230

Shape224.geometry = IndexedFaceSet228

Transform223.children.append(Shape224)

HAnimSegment222.children.append(Transform223)

HAnimJoint221.children.append(HAnimSegment222)

HAnimJoint211.children.append(HAnimJoint221)

HAnimJoint201.children.append(HAnimJoint211)

HAnimJoint191.children.append(HAnimJoint201)

HAnimJoint181.children.append(HAnimJoint191)

HAnimJoint81.children.append(HAnimJoint181)

HAnimJoint71.children.append(HAnimJoint81)
HAnimJoint231 = x3d.HAnimJoint()
HAnimJoint231.name = "l_calcaneocuboid"
HAnimJoint231.DEF = "hanim_l_calcaneocuboid"
HAnimJoint231.center = [0.0891,0.0718983,-0.025965]
HAnimJoint231.ulimit = [0,0,0]
HAnimJoint231.llimit = [0,0,0]
HAnimSegment232 = x3d.HAnimSegment()
HAnimSegment232.name = "l_calcaneus"
HAnimSegment232.DEF = "hanim_l_calcaneus"
Transform233 = x3d.Transform()
Transform233.translation = [0.0891,0.0718983,-0.025965]
Shape234 = x3d.Shape()
Appearance235 = x3d.Appearance()
Material236 = x3d.Material()
Material236.diffuseColor = [0.588,0.588,0.588]

Appearance235.material = Material236
ImageTexture237 = x3d.ImageTexture()
ImageTexture237.USE = "JinLOA4TextureAtlas"

Appearance235.texture = ImageTexture237

Shape234.appearance = Appearance235
IndexedFaceSet238 = x3d.IndexedFaceSet()
IndexedFaceSet238.coordIndex = [1,2,3,-1,3,0,1,-1,4,5,6,-1,6,7,4,-1,4,7,19,-1,19,18,4,-1,0,3,9,-1,9,8,0,-1,10,11,3,-1,3,2,10,-1,12,13,7,-1,7,6,12,-1,13,20,19,-1,19,7,13,-1,25,9,14,-1,14,26,25,-1,3,11,14,-1,14,9,3,-1,15,16,11,-1,11,10,15,-1,13,17,21,-1,21,20,13,-1,11,16,14,-1,4,18,23,-1,23,5,4,-1,14,37,38,-1,34,35,16,-1,16,15,34,-1,17,36,39,-1,39,21,17,-1,17,13,12,-1,35,37,14,-1,14,16,35,-1,5,27,30,-1,30,6,5,-1,18,1,22,-1,22,23,18,-1,2,1,18,-1,18,19,2,-1,10,2,19,-1,19,20,10,-1,15,10,20,-1,20,21,15,-1,34,15,21,-1,21,39,34,-1,22,1,0,-1,0,8,22,-1,25,24,8,-1,8,9,25,-1,14,38,33,-1,33,26,14,-1,23,29,27,-1,27,5,23,-1,22,28,29,-1,29,23,22,-1,8,24,28,-1,28,22,8,-1,30,31,12,-1,12,6,30,-1,32,40,12,-1,12,31,32,-1,40,36,17,-1,17,12,40,-1,44,43,42,-1,42,41,49,-1,44,42,49,-1,49,48,47,-1,44,49,47,-1,45,44,47,-1,46,45,47,-1,55,54,53,-1,53,52,51,-1,55,53,51,-1,50,55,51,-1,55,50,59,-1,59,56,55,-1,56,59,58,-1,58,57,56,-1,34,41,42,-1,42,35,34,-1,35,42,43,-1,43,37,35,-1,37,43,44,-1,44,38,37,-1,38,44,45,-1,45,33,38,-1,33,45,46,-1,46,32,33,-1,32,46,47,-1,47,40,32,-1,40,47,48,-1,48,36,40,-1,36,48,49,-1,49,39,36,-1,39,49,41,-1,41,34,39,-1,25,50,51,-1,51,24,25,-1,24,51,52,-1,52,28,24,-1,28,52,53,-1,53,29,28,-1,29,53,54,-1,54,27,29,-1,27,54,55,-1,55,30,27,-1,30,55,56,-1,56,31,30,-1,31,56,57,-1,57,32,31,-1,32,57,58,-1,58,33,32,-1,33,58,59,-1,59,26,33,-1,26,59,50,-1,50,25,26,-1]
IndexedFaceSet238.creaseAngle = 3.14159
IndexedFaceSet238.texCoordIndex = [1,2,3,-1,3,0,1,-1,4,5,6,-1,6,7,4,-1,4,7,19,-1,19,18,4,-1,0,3,9,-1,9,8,0,-1,10,11,3,-1,3,2,10,-1,12,13,7,-1,7,6,12,-1,13,20,19,-1,19,7,13,-1,25,9,14,-1,14,26,25,-1,3,11,14,-1,14,9,3,-1,15,16,11,-1,11,10,15,-1,13,17,21,-1,21,20,13,-1,11,16,14,-1,4,18,23,-1,23,5,4,-1,14,37,38,-1,34,35,16,-1,16,15,34,-1,17,36,39,-1,39,21,17,-1,17,13,12,-1,35,37,14,-1,14,16,35,-1,5,27,30,-1,30,6,5,-1,18,1,22,-1,22,23,18,-1,2,1,18,-1,18,19,2,-1,10,2,19,-1,19,20,10,-1,15,10,20,-1,20,21,15,-1,34,15,21,-1,21,39,34,-1,22,1,0,-1,0,8,22,-1,25,24,8,-1,8,9,25,-1,14,38,33,-1,33,26,14,-1,23,29,27,-1,27,5,23,-1,22,28,29,-1,29,23,22,-1,8,24,28,-1,28,22,8,-1,30,31,12,-1,12,6,30,-1,32,40,12,-1,12,31,32,-1,40,36,17,-1,17,12,40,-1,44,43,42,-1,42,41,49,-1,44,42,49,-1,49,48,47,-1,44,49,47,-1,45,44,47,-1,46,45,47,-1,55,54,53,-1,53,52,51,-1,55,53,51,-1,50,55,51,-1,55,50,59,-1,59,56,55,-1,56,59,58,-1,58,57,56,-1,34,41,42,-1,42,35,34,-1,35,42,43,-1,43,37,35,-1,37,43,44,-1,44,38,37,-1,38,44,45,-1,45,33,38,-1,33,45,46,-1,46,32,33,-1,32,46,47,-1,47,40,32,-1,40,47,48,-1,48,36,40,-1,36,48,49,-1,49,39,36,-1,39,49,41,-1,41,34,39,-1,25,50,51,-1,51,24,25,-1,24,51,52,-1,52,28,24,-1,28,52,53,-1,53,29,28,-1,29,53,54,-1,54,27,29,-1,27,54,55,-1,55,30,27,-1,30,55,56,-1,56,31,30,-1,31,56,57,-1,57,32,31,-1,32,57,58,-1,58,33,32,-1,33,58,59,-1,59,26,33,-1,26,59,50,-1,50,25,26,-1]
Coordinate239 = x3d.Coordinate()

IndexedFaceSet238.coord = Coordinate239
TextureCoordinate240 = x3d.TextureCoordinate()

IndexedFaceSet238.texCoord = TextureCoordinate240

Shape234.geometry = IndexedFaceSet238

Transform233.children.append(Shape234)

HAnimSegment232.children.append(Transform233)

HAnimJoint231.children.append(HAnimSegment232)
HAnimJoint241 = x3d.HAnimJoint()
HAnimJoint241.name = "l_transversetarsal"
HAnimJoint241.DEF = "hanim_l_transversetarsal"
HAnimJoint241.center = [0.1106325,0.04374720000000001,0.002089125]
HAnimJoint241.ulimit = [0,0,0]
HAnimJoint241.llimit = [0,0,0]
HAnimSegment242 = x3d.HAnimSegment()
HAnimSegment242.name = "l_cuboid"
HAnimSegment242.DEF = "hanim_l_cuboid"
Transform243 = x3d.Transform()
Transform243.translation = [0.1106325,0.04374720000000001,0.002089125]
Shape244 = x3d.Shape()
Appearance245 = x3d.Appearance()
Material246 = x3d.Material()
Material246.diffuseColor = [0.588,0.588,0.588]

Appearance245.material = Material246
ImageTexture247 = x3d.ImageTexture()
ImageTexture247.USE = "JinLOA4TextureAtlas"

Appearance245.texture = ImageTexture247

Shape244.appearance = Appearance245
IndexedFaceSet248 = x3d.IndexedFaceSet()
IndexedFaceSet248.coordIndex = [1,0,16,-1,16,17,1,-1,3,0,5,-1,5,8,3,-1,6,1,2,-1,2,7,6,-1,2,10,4,-1,18,10,2,-1,4,12,13,-1,13,9,4,-1,11,12,4,-1,4,10,11,-1,6,5,0,-1,0,1,6,-1,9,7,2,-1,2,4,9,-1,8,15,14,-1,14,3,8,-1,3,19,16,-1,16,0,3,-1,14,19,3,-1,1,17,18,-1,18,2,1,-1,27,26,33,-1,33,32,31,-1,27,33,31,-1,30,27,31,-1,21,20,25,-1,25,24,21,-1,35,34,42,-1,36,35,42,-1,42,41,40,-1,36,42,40,-1,39,36,40,-1,22,21,24,-1,24,23,22,-1,11,20,21,-1,21,12,11,-1,12,21,22,-1,22,13,12,-1,39,38,37,-1,37,36,39,-1,15,23,24,-1,24,14,15,-1,14,24,25,-1,25,19,14,-1,30,29,28,-1,28,27,30,-1,10,26,27,-1,27,11,10,-1,11,27,28,-1,28,20,11,-1,20,28,29,-1,29,25,20,-1,25,29,30,-1,30,19,25,-1,19,30,31,-1,31,16,19,-1,16,31,32,-1,32,17,16,-1,17,32,33,-1,33,18,17,-1,18,33,26,-1,26,10,18,-1,5,34,35,-1,35,8,5,-1,8,35,36,-1,36,15,8,-1,15,36,37,-1,37,23,15,-1,23,37,38,-1,38,22,23,-1,22,38,39,-1,39,13,22,-1,13,39,40,-1,40,9,13,-1,9,40,41,-1,41,7,9,-1,7,41,42,-1,42,6,7,-1,6,42,34,-1,34,5,6,-1]
IndexedFaceSet248.creaseAngle = 3.14159
IndexedFaceSet248.texCoordIndex = [1,0,16,-1,16,17,1,-1,2,0,5,-1,5,8,2,-1,6,1,3,-1,3,7,6,-1,3,10,4,-1,18,10,3,-1,4,12,13,-1,13,9,4,-1,11,12,4,-1,4,10,11,-1,6,5,0,-1,0,1,6,-1,9,7,3,-1,3,4,9,-1,8,15,14,-1,14,2,8,-1,2,19,16,-1,16,0,2,-1,14,19,2,-1,1,17,18,-1,18,3,1,-1,27,26,33,-1,33,32,31,-1,27,33,31,-1,30,27,31,-1,21,20,25,-1,25,24,21,-1,35,34,42,-1,36,35,42,-1,42,41,40,-1,36,42,40,-1,39,36,40,-1,22,21,24,-1,24,23,22,-1,11,20,21,-1,21,12,11,-1,12,21,22,-1,22,13,12,-1,39,38,37,-1,37,36,39,-1,15,23,24,-1,24,14,15,-1,14,24,25,-1,25,19,14,-1,30,29,28,-1,28,27,30,-1,10,26,27,-1,27,11,10,-1,11,27,28,-1,28,20,11,-1,20,28,29,-1,29,25,20,-1,25,29,30,-1,30,19,25,-1,19,30,31,-1,31,16,19,-1,16,31,32,-1,32,17,16,-1,17,32,33,-1,33,18,17,-1,18,33,26,-1,26,10,18,-1,5,34,35,-1,35,8,5,-1,8,35,36,-1,36,15,8,-1,15,36,37,-1,37,23,15,-1,23,37,38,-1,38,22,23,-1,22,38,39,-1,39,13,22,-1,13,39,40,-1,40,9,13,-1,9,40,41,-1,41,7,9,-1,7,41,42,-1,42,6,7,-1,6,42,34,-1,34,5,6,-1]
Coordinate249 = x3d.Coordinate()

IndexedFaceSet248.coord = Coordinate249
TextureCoordinate250 = x3d.TextureCoordinate()

IndexedFaceSet248.texCoord = TextureCoordinate250

Shape244.geometry = IndexedFaceSet248

Transform243.children.append(Shape244)

HAnimSegment242.children.append(Transform243)

HAnimJoint241.children.append(HAnimSegment242)
HAnimJoint251 = x3d.HAnimJoint()
HAnimJoint251.name = "l_tarsometatarsal_4"
HAnimJoint251.DEF = "hanim_l_tarsometatarsal_4"
HAnimJoint251.center = [0.10649249999999999,0.0304389,0.03843]
HAnimJoint251.ulimit = [0,0,0]
HAnimJoint251.llimit = [0,0,0]
HAnimSegment252 = x3d.HAnimSegment()
HAnimSegment252.name = "l_metatarsal_4"
HAnimSegment252.DEF = "hanim_l_metatarsal_4"
Transform253 = x3d.Transform()
Transform253.translation = [0.10649249999999999,0.0304389,0.03843]
Shape254 = x3d.Shape()
Appearance255 = x3d.Appearance()
Material256 = x3d.Material()
Material256.diffuseColor = [0.588,0.588,0.588]

Appearance255.material = Material256
ImageTexture257 = x3d.ImageTexture()
ImageTexture257.USE = "JinLOA4TextureAtlas"

Appearance255.texture = ImageTexture257

Shape254.appearance = Appearance255
IndexedFaceSet258 = x3d.IndexedFaceSet()
IndexedFaceSet258.coordIndex = [11,16,17,-1,17,13,11,-1,10,14,16,-1,16,11,10,-1,5,7,3,-1,3,1,5,-1,0,4,6,-1,6,2,0,-1,14,10,12,-1,12,15,14,-1,7,4,0,-1,0,3,7,-1,8,9,5,-1,5,1,8,-1,40,37,36,-1,36,41,40,-1,48,45,44,-1,44,49,48,-1,27,31,28,-1,28,31,30,-1,30,29,28,-1,34,33,32,-1,32,35,34,-1,35,32,31,-1,31,27,35,-1,18,24,19,-1,26,25,24,-1,24,18,26,-1,20,23,22,-1,22,21,20,-1,19,24,23,-1,23,20,19,-1,5,18,19,-1,19,7,5,-1,7,19,20,-1,20,4,7,-1,4,20,21,-1,21,6,4,-1,40,39,38,-1,38,37,40,-1,15,22,23,-1,23,14,15,-1,14,23,24,-1,24,16,14,-1,16,24,25,-1,25,17,16,-1,44,51,50,-1,50,49,44,-1,9,26,18,-1,18,5,9,-1,3,27,28,-1,28,1,3,-1,1,28,29,-1,29,8,1,-1,48,47,46,-1,46,45,48,-1,13,30,31,-1,31,11,13,-1,11,31,32,-1,32,10,11,-1,10,32,33,-1,33,12,10,-1,36,43,42,-1,42,41,36,-1,2,34,35,-1,35,0,2,-1,0,35,27,-1,27,3,0,-1,12,36,37,-1,37,15,12,-1,15,37,38,-1,38,22,15,-1,22,38,39,-1,39,21,22,-1,21,39,40,-1,40,6,21,-1,6,40,41,-1,41,2,6,-1,2,41,42,-1,42,34,2,-1,34,42,43,-1,43,33,34,-1,33,43,36,-1,36,12,33,-1,17,44,45,-1,45,13,17,-1,13,45,46,-1,46,30,13,-1,30,46,47,-1,47,29,30,-1,29,47,48,-1,48,8,29,-1,8,48,49,-1,49,9,8,-1,9,49,50,-1,50,26,9,-1,26,50,51,-1,51,25,26,-1,25,51,44,-1,44,17,25,-1]
IndexedFaceSet258.creaseAngle = 3.14159
IndexedFaceSet258.texCoordIndex = [5,16,17,-1,17,13,5,-1,2,7,16,-1,16,5,2,-1,9,12,6,-1,6,1,9,-1,0,8,11,-1,11,4,0,-1,7,2,3,-1,3,10,7,-1,12,8,0,-1,0,6,12,-1,14,15,9,-1,9,1,14,-1,42,39,38,-1,38,43,42,-1,50,47,46,-1,46,51,50,-1,29,18,30,-1,30,33,32,-1,32,31,30,-1,36,35,34,-1,34,37,36,-1,37,34,33,-1,33,29,37,-1,20,19,21,-1,28,27,26,-1,26,20,28,-1,22,25,24,-1,24,23,22,-1,21,26,25,-1,25,22,21,-1,9,20,21,-1,21,12,9,-1,12,21,22,-1,22,8,12,-1,8,22,23,-1,23,11,8,-1,42,41,40,-1,40,39,42,-1,10,24,25,-1,25,7,10,-1,7,25,26,-1,26,16,7,-1,16,26,27,-1,27,17,16,-1,46,53,52,-1,52,51,46,-1,15,28,20,-1,20,9,15,-1,6,29,30,-1,30,1,6,-1,1,30,31,-1,31,14,1,-1,50,49,48,-1,48,47,50,-1,13,32,33,-1,33,5,13,-1,5,33,34,-1,34,2,5,-1,2,34,35,-1,35,3,2,-1,38,45,44,-1,44,43,38,-1,4,36,37,-1,37,0,4,-1,0,37,29,-1,29,6,0,-1,3,38,39,-1,39,10,3,-1,10,39,40,-1,40,24,10,-1,24,40,41,-1,41,23,24,-1,23,41,42,-1,42,11,23,-1,11,42,43,-1,43,4,11,-1,4,43,44,-1,44,36,4,-1,36,44,45,-1,45,35,36,-1,35,45,38,-1,38,3,35,-1,17,46,47,-1,47,13,17,-1,13,47,48,-1,48,32,13,-1,32,48,49,-1,49,31,32,-1,31,49,50,-1,50,14,31,-1,14,50,51,-1,51,15,14,-1,15,51,52,-1,52,28,15,-1,28,52,53,-1,53,27,28,-1,27,53,46,-1,46,17,27,-1]
Coordinate259 = x3d.Coordinate()

IndexedFaceSet258.coord = Coordinate259
TextureCoordinate260 = x3d.TextureCoordinate()

IndexedFaceSet258.texCoord = TextureCoordinate260

Shape254.geometry = IndexedFaceSet258

Transform253.children.append(Shape254)

HAnimSegment252.children.append(Transform253)

HAnimJoint251.children.append(HAnimSegment252)
HAnimJoint261 = x3d.HAnimJoint()
HAnimJoint261.name = "l_metatarsophalangeal_4"
HAnimJoint261.DEF = "hanim_l_metatarsophalangeal_4"
HAnimJoint261.center = [0.10986749999999999,0.017797410000000003,0.09116999999999999]
HAnimJoint261.ulimit = [0,0,0]
HAnimJoint261.llimit = [0,0,0]
HAnimSegment262 = x3d.HAnimSegment()
HAnimSegment262.name = "l_tarsal_proximal_phalanx_4"
HAnimSegment262.DEF = "hanim_l_tarsal_proximal_phalanx_4"
Transform263 = x3d.Transform()
Transform263.translation = [0.10986749999999999,0.017797410000000003,0.09116999999999999]
Shape264 = x3d.Shape()
Appearance265 = x3d.Appearance()
Material266 = x3d.Material()
Material266.diffuseColor = [0.588,0.588,0.588]

Appearance265.material = Material266
ImageTexture267 = x3d.ImageTexture()
ImageTexture267.USE = "JinLOA4TextureAtlas"

Appearance265.texture = ImageTexture267

Shape264.appearance = Appearance265
IndexedFaceSet268 = x3d.IndexedFaceSet()
IndexedFaceSet268.coordIndex = [13,10,1,-1,1,2,13,-1,10,8,3,-1,3,1,10,-1,3,8,0,-1,0,4,3,-1,0,9,5,-1,5,4,0,-1,7,6,5,-1,5,9,7,-1,6,7,13,-1,13,2,6,-1,22,14,18,-1,18,17,22,-1,20,15,21,-1,21,19,20,-1,9,21,15,-1,15,7,9,-1,10,16,14,-1,8,10,14,-1,14,22,8,-1,21,9,23,-1,11,12,13,-1,13,7,11,-1,0,8,24,-1,24,25,0,-1,16,10,13,-1,13,12,16,-1,23,9,0,-1,0,25,23,-1,11,7,15,-1,24,8,22,-1,35,34,33,-1,31,35,33,-1,31,33,32,-1,1,3,4,-1,4,5,6,-1,1,4,6,-1,2,1,6,-1,37,40,39,-1,39,38,37,-1,28,27,26,-1,26,29,28,-1,35,31,30,-1,30,36,35,-1,37,43,42,-1,40,37,42,-1,40,42,41,-1,18,26,27,-1,27,17,18,-1,17,27,28,-1,28,19,17,-1,19,28,29,-1,29,20,19,-1,20,29,26,-1,26,18,20,-1,17,30,31,-1,31,22,17,-1,22,31,32,-1,32,24,22,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,23,25,-1,23,34,35,-1,35,21,23,-1,21,35,36,-1,36,19,21,-1,19,36,30,-1,30,17,19,-1,14,37,38,-1,38,18,14,-1,18,38,39,-1,39,20,18,-1,20,39,40,-1,40,15,20,-1,15,40,41,-1,41,11,15,-1,11,41,42,-1,42,12,11,-1,12,42,43,-1,43,16,12,-1,16,43,37,-1,37,14,16,-1]
IndexedFaceSet268.creaseAngle = 3.14159
IndexedFaceSet268.texCoordIndex = [27,10,1,-1,1,2,27,-1,10,11,3,-1,3,1,10,-1,3,11,0,-1,0,4,3,-1,0,12,5,-1,5,4,0,-1,9,6,5,-1,5,12,9,-1,6,9,27,-1,27,2,6,-1,35,7,29,-1,29,28,35,-1,31,8,33,-1,33,30,31,-1,15,32,16,-1,16,14,15,-1,17,18,13,-1,19,17,13,-1,13,34,19,-1,32,15,36,-1,20,21,22,-1,22,14,20,-1,23,19,37,-1,37,38,23,-1,18,17,25,-1,25,24,18,-1,36,15,26,-1,26,39,36,-1,20,14,16,-1,37,19,34,-1,49,48,47,-1,45,49,47,-1,45,47,46,-1,1,3,4,-1,4,5,6,-1,1,4,6,-1,2,1,6,-1,51,54,53,-1,53,52,51,-1,42,41,40,-1,40,43,42,-1,49,45,44,-1,44,50,49,-1,51,57,56,-1,54,51,56,-1,54,56,55,-1,29,40,41,-1,41,28,29,-1,28,41,42,-1,42,30,28,-1,30,42,43,-1,43,31,30,-1,31,43,40,-1,40,29,31,-1,28,44,45,-1,45,35,28,-1,34,45,46,-1,46,37,34,-1,37,46,47,-1,47,38,37,-1,39,47,48,-1,48,36,39,-1,36,48,49,-1,49,32,36,-1,33,49,50,-1,50,30,33,-1,30,50,44,-1,44,28,30,-1,7,51,52,-1,52,29,7,-1,29,52,53,-1,53,31,29,-1,31,53,54,-1,54,8,31,-1,16,54,55,-1,55,20,16,-1,20,55,56,-1,56,21,20,-1,24,56,57,-1,57,18,24,-1,18,57,51,-1,51,13,18,-1]
Coordinate269 = x3d.Coordinate()

IndexedFaceSet268.coord = Coordinate269
TextureCoordinate270 = x3d.TextureCoordinate()

IndexedFaceSet268.texCoord = TextureCoordinate270

Shape264.geometry = IndexedFaceSet268

Transform263.children.append(Shape264)

HAnimSegment262.children.append(Transform263)

HAnimJoint261.children.append(HAnimSegment262)
HAnimJoint271 = x3d.HAnimJoint()
HAnimJoint271.name = "l_tarsal_proximal_interphalangeal_4"
HAnimJoint271.DEF = "hanim_l_tarsal_proximal_interphalangeal_4"
HAnimJoint271.center = [0.11416499999999999,0.015183180000000001,0.10631249999999999]
HAnimJoint271.ulimit = [0,0,0]
HAnimJoint271.llimit = [0,0,0]
HAnimSegment272 = x3d.HAnimSegment()
HAnimSegment272.name = "l_tarsal_middle_phalanx_4"
HAnimSegment272.DEF = "hanim_l_tarsal_middle_phalanx_4"
Transform273 = x3d.Transform()
Transform273.translation = [0.11416499999999999,0.015183180000000001,0.10631249999999999]
Shape274 = x3d.Shape()
Appearance275 = x3d.Appearance()
Material276 = x3d.Material()
Material276.diffuseColor = [0.588,0.588,0.588]

Appearance275.material = Material276
ImageTexture277 = x3d.ImageTexture()
ImageTexture277.USE = "JinLOA4TextureAtlas"

Appearance275.texture = ImageTexture277

Shape274.appearance = Appearance275
IndexedFaceSet278 = x3d.IndexedFaceSet()
IndexedFaceSet278.coordIndex = [0,1,7,-1,7,6,0,-1,2,0,6,-1,6,8,2,-1,9,3,2,-1,2,8,9,-1,4,3,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,7,1,5,-1,5,11,7,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,7,12,13,-1,13,6,7,-1,6,13,14,-1,14,8,6,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,7,11,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,0,18,19,-1,19,1,0,-1,1,19,20,-1,20,5,1,-1,5,20,21,-1,21,4,5,-1,4,21,22,-1,22,3,4,-1,3,22,23,-1,23,2,3,-1,2,23,18,-1,18,0,2,-1]
IndexedFaceSet278.creaseAngle = 3.14159
IndexedFaceSet278.texCoordIndex = [0,1,9,-1,9,8,0,-1,2,0,8,-1,8,10,2,-1,11,3,2,-1,2,10,11,-1,4,3,11,-1,11,12,4,-1,14,6,7,-1,7,13,14,-1,9,1,5,-1,5,15,9,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,9,16,17,-1,17,8,9,-1,8,17,18,-1,18,10,8,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,12,11,-1,13,20,21,-1,21,14,13,-1,15,21,16,-1,16,9,15,-1,22,27,26,-1,26,25,24,-1,22,26,24,-1,23,22,24,-1,0,22,23,-1,23,1,0,-1,1,23,24,-1,24,5,1,-1,6,24,25,-1,25,7,6,-1,4,25,26,-1,26,3,4,-1,3,26,27,-1,27,2,3,-1,2,27,22,-1,22,0,2,-1]
Coordinate279 = x3d.Coordinate()

IndexedFaceSet278.coord = Coordinate279
TextureCoordinate280 = x3d.TextureCoordinate()

IndexedFaceSet278.texCoord = TextureCoordinate280

Shape274.geometry = IndexedFaceSet278

Transform273.children.append(Shape274)

HAnimSegment272.children.append(Transform273)

HAnimJoint271.children.append(HAnimSegment272)
HAnimJoint281 = x3d.HAnimJoint()
HAnimJoint281.name = "l_tarsal_distal_interphalangeal_4"
HAnimJoint281.DEF = "hanim_l_tarsal_distal_interphalangeal_4"
HAnimJoint281.center = [0.1156725,0.01161756,0.11369249999999999]
HAnimJoint281.ulimit = [0,0,0]
HAnimJoint281.llimit = [0,0,0]
HAnimSegment282 = x3d.HAnimSegment()
HAnimSegment282.name = "l_tarsal_distal_phalanx_4"
HAnimSegment282.DEF = "hanim_l_tarsal_distal_phalanx_4"
Transform283 = x3d.Transform()
Transform283.translation = [0.1156725,0.01161756,0.11369249999999999]
Shape284 = x3d.Shape()
Appearance285 = x3d.Appearance()
Material286 = x3d.Material()
Material286.diffuseColor = [0.588,0.588,0.588]

Appearance285.material = Material286
ImageTexture287 = x3d.ImageTexture()
ImageTexture287.USE = "JinLOA4TextureAtlas"

Appearance285.texture = ImageTexture287

Shape284.appearance = Appearance285
IndexedFaceSet288 = x3d.IndexedFaceSet()
IndexedFaceSet288.coordIndex = [0,1,2,-1,2,3,0,-1,5,3,2,-1,2,4,5,-1,0,3,7,-1,7,6,0,-1,1,0,6,-1,6,8,1,-1,9,2,1,-1,1,8,9,-1,4,2,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,7,3,5,-1,5,11,7,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,7,12,13,-1,13,6,7,-1,6,13,14,-1,14,8,6,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,7,11,-1]
IndexedFaceSet288.creaseAngle = 3.14159
IndexedFaceSet288.texCoordIndex = [0,1,2,-1,2,3,0,-1,5,3,2,-1,2,4,5,-1,0,3,9,-1,9,8,0,-1,1,0,8,-1,8,10,1,-1,11,2,1,-1,1,10,11,-1,4,2,11,-1,11,12,4,-1,14,6,7,-1,7,13,14,-1,9,3,5,-1,5,15,9,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,9,16,17,-1,17,8,9,-1,8,17,18,-1,18,10,8,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,12,11,-1,13,20,21,-1,21,14,13,-1,15,21,16,-1,16,9,15,-1]
Coordinate289 = x3d.Coordinate()

IndexedFaceSet288.coord = Coordinate289
TextureCoordinate290 = x3d.TextureCoordinate()

IndexedFaceSet288.texCoord = TextureCoordinate290

Shape284.geometry = IndexedFaceSet288

Transform283.children.append(Shape284)

HAnimSegment282.children.append(Transform283)

HAnimJoint281.children.append(HAnimSegment282)

HAnimJoint271.children.append(HAnimJoint281)

HAnimJoint261.children.append(HAnimJoint271)

HAnimJoint251.children.append(HAnimJoint261)

HAnimJoint241.children.append(HAnimJoint251)
HAnimJoint291 = x3d.HAnimJoint()
HAnimJoint291.name = "l_tarsometatarsal_5"
HAnimJoint291.DEF = "hanim_l_tarsometatarsal_5"
HAnimJoint291.center = [0.120825,0.02597211,0.03474]
HAnimJoint291.ulimit = [0,0,0]
HAnimJoint291.llimit = [0,0,0]
HAnimSegment292 = x3d.HAnimSegment()
HAnimSegment292.name = "l_metatarsal_5"
HAnimSegment292.DEF = "hanim_l_metatarsal_5"
Transform293 = x3d.Transform()
Transform293.translation = [0.120825,0.02597211,0.03474]
Shape294 = x3d.Shape()
Appearance295 = x3d.Appearance()
Material296 = x3d.Material()
Material296.diffuseColor = [0.588,0.588,0.588]

Appearance295.material = Material296
ImageTexture297 = x3d.ImageTexture()
ImageTexture297.USE = "JinLOA4TextureAtlas"

Appearance295.texture = ImageTexture297

Shape294.appearance = Appearance295
IndexedFaceSet298 = x3d.IndexedFaceSet()
IndexedFaceSet298.coordIndex = [0,10,1,-1,2,9,17,-1,17,12,2,-1,6,14,11,-1,11,0,6,-1,2,8,7,-1,7,1,2,-1,3,18,19,-1,19,4,3,-1,13,5,20,-1,20,22,13,-1,5,9,10,-1,10,4,5,-1,6,0,1,-1,1,7,6,-1,8,2,12,-1,12,15,8,-1,9,5,13,-1,13,17,9,-1,0,11,16,-1,16,3,0,-1,9,2,1,-1,1,10,9,-1,3,4,10,-1,10,0,3,-1,16,21,18,-1,18,3,16,-1,19,20,5,-1,5,4,19,-1,35,34,33,-1,36,35,33,-1,32,36,33,-1,27,26,25,-1,25,24,27,-1,41,40,39,-1,41,39,45,-1,44,41,45,-1,28,23,29,-1,28,27,24,-1,24,23,28,-1,29,23,31,-1,31,30,29,-1,11,23,24,-1,24,16,11,-1,16,24,25,-1,25,21,16,-1,32,38,37,-1,37,36,32,-1,22,26,27,-1,27,13,22,-1,13,27,28,-1,28,17,13,-1,17,28,29,-1,29,12,17,-1,12,29,30,-1,30,15,12,-1,44,43,42,-1,42,41,44,-1,14,31,23,-1,23,11,14,-1,21,32,33,-1,33,18,21,-1,18,33,34,-1,34,19,18,-1,19,34,35,-1,35,20,19,-1,20,35,36,-1,36,22,20,-1,22,36,37,-1,37,26,22,-1,26,37,38,-1,38,25,26,-1,25,38,32,-1,32,21,25,-1,7,39,40,-1,40,6,7,-1,6,40,41,-1,41,14,6,-1,14,41,42,-1,42,31,14,-1,31,42,43,-1,43,30,31,-1,30,43,44,-1,44,15,30,-1,15,44,45,-1,45,8,15,-1,8,45,39,-1,39,7,8,-1]
IndexedFaceSet298.creaseAngle = 3.14159
IndexedFaceSet298.texCoordIndex = [0,10,1,-1,2,9,17,-1,17,12,2,-1,6,14,11,-1,11,0,6,-1,2,8,7,-1,7,1,2,-1,3,18,19,-1,19,4,3,-1,13,5,20,-1,20,22,13,-1,5,9,10,-1,10,4,5,-1,6,0,1,-1,1,7,6,-1,8,2,12,-1,12,15,8,-1,9,5,13,-1,13,17,9,-1,0,11,16,-1,16,3,0,-1,9,2,1,-1,1,10,9,-1,3,4,10,-1,10,0,3,-1,16,21,18,-1,18,3,16,-1,19,20,5,-1,5,4,19,-1,35,34,33,-1,36,35,33,-1,32,36,33,-1,27,26,25,-1,25,24,27,-1,41,40,39,-1,41,39,45,-1,44,41,45,-1,28,11,29,-1,28,27,24,-1,24,23,28,-1,29,23,31,-1,31,30,29,-1,11,23,24,-1,24,16,11,-1,16,24,25,-1,25,21,16,-1,32,38,37,-1,37,36,32,-1,22,26,27,-1,27,13,22,-1,13,27,28,-1,28,17,13,-1,17,28,29,-1,29,12,17,-1,12,29,30,-1,30,15,12,-1,44,43,42,-1,42,41,44,-1,14,31,23,-1,23,11,14,-1,21,32,33,-1,33,18,21,-1,18,33,34,-1,34,19,18,-1,19,34,35,-1,35,20,19,-1,20,35,36,-1,36,22,20,-1,22,36,37,-1,37,26,22,-1,26,37,38,-1,38,25,26,-1,25,38,32,-1,32,21,25,-1,7,39,40,-1,40,6,7,-1,6,40,41,-1,41,14,6,-1,14,41,42,-1,42,31,14,-1,31,42,43,-1,43,30,31,-1,30,43,44,-1,44,15,30,-1,15,44,45,-1,45,8,15,-1,8,45,39,-1,39,7,8,-1]
Coordinate299 = x3d.Coordinate()

IndexedFaceSet298.coord = Coordinate299
TextureCoordinate300 = x3d.TextureCoordinate()

IndexedFaceSet298.texCoord = TextureCoordinate300

Shape294.geometry = IndexedFaceSet298

Transform293.children.append(Shape294)

HAnimSegment292.children.append(Transform293)

HAnimJoint291.children.append(HAnimSegment292)
HAnimJoint301 = x3d.HAnimJoint()
HAnimJoint301.name = "l_metatarsophalangeal_5"
HAnimJoint301.DEF = "hanim_l_metatarsophalangeal_5"
HAnimJoint301.center = [0.124065,0.01695204,0.0865575]
HAnimJoint301.ulimit = [0,0,0]
HAnimJoint301.llimit = [0,0,0]
HAnimSegment302 = x3d.HAnimSegment()
HAnimSegment302.name = "l_tarsal_proximal_phalanx_5"
HAnimSegment302.DEF = "hanim_l_tarsal_proximal_phalanx_5"
Transform303 = x3d.Transform()
Transform303.translation = [0.124065,0.01695204,0.0865575]
Shape304 = x3d.Shape()
Appearance305 = x3d.Appearance()
Material306 = x3d.Material()
Material306.diffuseColor = [0.588,0.588,0.588]

Appearance305.material = Material306
ImageTexture307 = x3d.ImageTexture()
ImageTexture307.USE = "JinLOA4TextureAtlas"

Appearance305.texture = ImageTexture307

Shape304.appearance = Appearance305
IndexedFaceSet308 = x3d.IndexedFaceSet()
IndexedFaceSet308.coordIndex = [2,10,11,-1,11,3,2,-1,0,12,14,-1,14,5,0,-1,2,6,13,-1,13,10,2,-1,0,3,11,-1,11,12,0,-1,15,16,0,-1,0,5,15,-1,17,1,2,-1,2,3,17,-1,16,17,3,-1,3,0,16,-1,2,1,4,-1,4,6,2,-1,6,4,8,-1,7,9,18,-1,18,15,7,-1,8,4,18,-1,18,9,8,-1,7,15,5,-1,1,17,20,-1,20,19,1,-1,17,16,21,-1,21,20,17,-1,16,15,22,-1,22,21,16,-1,22,15,18,-1,18,23,22,-1,23,18,4,-1,4,24,23,-1,24,4,1,-1,1,19,24,-1,27,26,25,-1,28,27,25,-1,29,28,25,-1,20,21,22,-1,22,23,24,-1,20,22,24,-1,19,20,24,-1,30,33,32,-1,32,31,30,-1,30,36,35,-1,33,30,35,-1,33,35,34,-1,10,25,26,-1,26,11,10,-1,11,26,27,-1,27,12,11,-1,12,27,28,-1,28,14,12,-1,14,28,29,-1,29,13,14,-1,13,29,25,-1,25,10,13,-1,6,30,31,-1,31,13,6,-1,13,31,32,-1,32,14,13,-1,14,32,33,-1,33,5,14,-1,5,33,34,-1,34,7,5,-1,7,34,35,-1,35,9,7,-1,9,35,36,-1,36,8,9,-1,8,36,30,-1,30,6,8,-1]
IndexedFaceSet308.creaseAngle = 3.14159
IndexedFaceSet308.texCoordIndex = [0,23,24,-1,24,1,0,-1,3,25,27,-1,27,2,3,-1,0,4,26,-1,26,23,0,-1,3,1,24,-1,24,25,3,-1,5,6,7,-1,7,8,5,-1,9,10,11,-1,11,12,9,-1,6,13,14,-1,14,7,6,-1,11,10,17,-1,17,15,11,-1,15,17,18,-1,16,19,20,-1,20,5,16,-1,18,17,22,-1,22,21,18,-1,16,5,8,-1,31,30,35,-1,35,34,31,-1,30,29,36,-1,36,35,30,-1,29,28,37,-1,37,36,29,-1,37,28,33,-1,33,38,37,-1,38,33,32,-1,32,39,38,-1,39,32,31,-1,31,34,39,-1,42,41,40,-1,43,42,40,-1,44,43,40,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,34,35,39,-1,45,48,47,-1,47,46,45,-1,45,51,50,-1,48,45,50,-1,48,50,49,-1,23,40,41,-1,41,24,23,-1,24,41,42,-1,42,25,24,-1,25,42,43,-1,43,27,25,-1,27,43,44,-1,44,26,27,-1,26,44,40,-1,40,23,26,-1,4,45,46,-1,46,26,4,-1,26,46,47,-1,47,27,26,-1,27,47,48,-1,48,2,27,-1,8,48,49,-1,49,16,8,-1,16,49,50,-1,50,19,16,-1,21,50,51,-1,51,18,21,-1,18,51,45,-1,45,15,18,-1]
Coordinate309 = x3d.Coordinate()

IndexedFaceSet308.coord = Coordinate309
TextureCoordinate310 = x3d.TextureCoordinate()

IndexedFaceSet308.texCoord = TextureCoordinate310

Shape304.geometry = IndexedFaceSet308

Transform303.children.append(Shape304)

HAnimSegment302.children.append(Transform303)

HAnimJoint301.children.append(HAnimSegment302)
HAnimJoint311 = x3d.HAnimJoint()
HAnimJoint311.name = "l_tarsal_proximal_interphalangeal_5"
HAnimJoint311.DEF = "hanim_l_tarsal_proximal_interphalangeal_5"
HAnimJoint311.center = [0.1263825,0.01346175,0.09414]
HAnimJoint311.ulimit = [0,0,0]
HAnimJoint311.llimit = [0,0,0]
HAnimSegment312 = x3d.HAnimSegment()
HAnimSegment312.name = "l_tarsal_middle_phalanx_5"
HAnimSegment312.DEF = "hanim_l_tarsal_middle_phalanx_5"
Transform313 = x3d.Transform()
Transform313.translation = [0.1263825,0.01346175,0.09414]
Shape314 = x3d.Shape()
Appearance315 = x3d.Appearance()
Material316 = x3d.Material()
Material316.diffuseColor = [0.588,0.588,0.588]

Appearance315.material = Material316
ImageTexture317 = x3d.ImageTexture()
ImageTexture317.USE = "JinLOA4TextureAtlas"

Appearance315.texture = ImageTexture317

Shape314.appearance = Appearance315
IndexedFaceSet318 = x3d.IndexedFaceSet()
IndexedFaceSet318.coordIndex = [6,7,1,-1,1,0,6,-1,7,8,2,-1,2,1,7,-1,8,9,3,-1,3,2,8,-1,3,9,10,-1,10,4,3,-1,4,10,11,-1,11,5,4,-1,5,11,6,-1,6,0,5,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1,1,18,19,-1,19,0,1,-1,0,19,20,-1,20,5,0,-1,5,20,21,-1,21,4,5,-1,4,21,22,-1,22,3,4,-1,3,22,23,-1,23,2,3,-1,2,23,18,-1,18,1,2,-1]
IndexedFaceSet318.creaseAngle = 3.14159
IndexedFaceSet318.texCoordIndex = [6,7,0,-1,0,1,6,-1,7,8,2,-1,2,0,7,-1,8,9,3,-1,3,2,8,-1,3,9,10,-1,10,4,3,-1,4,10,11,-1,11,5,4,-1,5,11,6,-1,6,1,5,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1,0,18,19,-1,19,1,0,-1,1,19,20,-1,20,5,1,-1,5,20,21,-1,21,4,5,-1,4,21,22,-1,22,3,4,-1,3,22,23,-1,23,2,3,-1,2,23,18,-1,18,0,2,-1]
Coordinate319 = x3d.Coordinate()

IndexedFaceSet318.coord = Coordinate319
TextureCoordinate320 = x3d.TextureCoordinate()

IndexedFaceSet318.texCoord = TextureCoordinate320

Shape314.geometry = IndexedFaceSet318

Transform313.children.append(Shape314)

HAnimSegment312.children.append(Transform313)

HAnimJoint311.children.append(HAnimSegment312)
HAnimJoint321 = x3d.HAnimJoint()
HAnimJoint321.name = "l_tarsal_distal_interphalangeal_5"
HAnimJoint321.DEF = "hanim_l_tarsal_distal_interphalangeal_5"
HAnimJoint321.center = [0.1272825,0.01061874,0.10187999999999998]
HAnimJoint321.ulimit = [0,0,0]
HAnimJoint321.llimit = [0,0,0]
HAnimSegment322 = x3d.HAnimSegment()
HAnimSegment322.name = "l_tarsal_distal_phalanx_5"
HAnimSegment322.DEF = "hanim_l_tarsal_distal_phalanx_5"
Transform323 = x3d.Transform()
Transform323.translation = [0.1272825,0.01061874,0.10187999999999998]
Shape324 = x3d.Shape()
Appearance325 = x3d.Appearance()
Material326 = x3d.Material()
Material326.diffuseColor = [0.588,0.588,0.588]

Appearance325.material = Material326
ImageTexture327 = x3d.ImageTexture()
ImageTexture327.USE = "JinLOA4TextureAtlas"

Appearance325.texture = ImageTexture327

Shape324.appearance = Appearance325
IndexedFaceSet328 = x3d.IndexedFaceSet()
IndexedFaceSet328.coordIndex = [2,3,4,-1,4,1,2,-1,0,1,4,-1,4,5,0,-1,7,1,0,-1,0,6,7,-1,2,1,7,-1,7,8,2,-1,9,3,2,-1,2,8,9,-1,10,4,3,-1,3,9,10,-1,5,4,10,-1,10,11,5,-1,0,5,11,-1,11,6,0,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1]
IndexedFaceSet328.creaseAngle = 3.14159
IndexedFaceSet328.texCoordIndex = [1,2,3,-1,3,0,1,-1,5,0,3,-1,3,4,5,-1,9,0,5,-1,5,8,9,-1,1,0,9,-1,9,10,1,-1,12,6,7,-1,7,11,12,-1,14,3,2,-1,2,13,14,-1,4,3,14,-1,14,15,4,-1,5,4,15,-1,15,8,5,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,11,18,19,-1,19,12,11,-1,13,19,20,-1,20,14,13,-1,14,20,21,-1,21,15,14,-1,15,21,16,-1,16,8,15,-1]
Coordinate329 = x3d.Coordinate()

IndexedFaceSet328.coord = Coordinate329
TextureCoordinate330 = x3d.TextureCoordinate()

IndexedFaceSet328.texCoord = TextureCoordinate330

Shape324.geometry = IndexedFaceSet328

Transform323.children.append(Shape324)

HAnimSegment322.children.append(Transform323)

HAnimJoint321.children.append(HAnimSegment322)

HAnimJoint311.children.append(HAnimJoint321)

HAnimJoint301.children.append(HAnimJoint311)

HAnimJoint291.children.append(HAnimJoint301)

HAnimJoint241.children.append(HAnimJoint291)

HAnimJoint231.children.append(HAnimJoint241)

HAnimJoint71.children.append(HAnimJoint231)

HAnimJoint61.children.append(HAnimJoint71)

HAnimJoint51.children.append(HAnimJoint61)

HAnimJoint41.children.append(HAnimJoint51)
HAnimJoint331 = x3d.HAnimJoint()
HAnimJoint331.name = "r_hip"
HAnimJoint331.DEF = "hanim_r_hip"
HAnimJoint331.center = [-0.09465749999999999,1.0250460557999999,-0.01834875]
HAnimJoint331.ulimit = [0,0,0]
HAnimJoint331.llimit = [0,0,0]
HAnimSegment332 = x3d.HAnimSegment()
HAnimSegment332.name = "r_thigh"
HAnimSegment332.DEF = "hanim_r_thigh"
Transform333 = x3d.Transform()
Transform333.translation = [-0.09465749999999999,1.0250460557999999,-0.01834875]
Shape334 = x3d.Shape()
Appearance335 = x3d.Appearance()
Material336 = x3d.Material()
Material336.diffuseColor = [0.588,0.588,0.588]

Appearance335.material = Material336
ImageTexture337 = x3d.ImageTexture()
ImageTexture337.USE = "JinLOA4TextureAtlas"

Appearance335.texture = ImageTexture337

Shape334.appearance = Appearance335
IndexedFaceSet338 = x3d.IndexedFaceSet()
IndexedFaceSet338.coordIndex = [43,44,45,-1,42,43,45,-1,45,46,47,-1,42,45,47,-1,48,42,47,-1,0,7,8,-1,8,1,0,-1,1,8,9,-1,9,2,1,-1,2,9,10,-1,10,3,2,-1,3,10,11,-1,11,4,3,-1,4,11,12,-1,12,5,4,-1,5,12,13,-1,13,6,5,-1,6,13,7,-1,7,0,6,-1,7,14,15,-1,15,8,7,-1,8,15,16,-1,16,9,8,-1,9,16,17,-1,17,10,9,-1,10,17,18,-1,18,11,10,-1,11,18,19,-1,19,12,11,-1,12,19,20,-1,20,13,12,-1,13,20,14,-1,14,7,13,-1,14,21,22,-1,22,15,14,-1,15,22,23,-1,23,16,15,-1,16,23,24,-1,24,17,16,-1,17,24,25,-1,25,18,17,-1,18,25,26,-1,26,19,18,-1,19,26,27,-1,27,20,19,-1,20,27,21,-1,21,14,20,-1,60,59,58,-1,61,60,58,-1,58,57,56,-1,61,58,56,-1,62,61,56,-1,29,22,21,-1,21,28,29,-1,30,23,22,-1,22,29,30,-1,31,24,23,-1,23,30,31,-1,32,25,24,-1,24,31,32,-1,33,26,25,-1,25,32,33,-1,34,27,26,-1,26,33,34,-1,28,21,27,-1,27,34,28,-1,36,29,28,-1,28,35,36,-1,37,30,29,-1,29,36,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,35,28,34,-1,34,41,35,-1,42,0,1,-1,1,43,42,-1,43,1,2,-1,2,44,43,-1,44,2,3,-1,3,45,44,-1,45,3,4,-1,4,46,45,-1,46,4,5,-1,5,47,46,-1,47,5,6,-1,6,48,47,-1,48,6,0,-1,0,42,48,-1,50,36,35,-1,35,49,50,-1,51,37,36,-1,36,50,51,-1,52,38,37,-1,37,51,52,-1,53,39,38,-1,38,52,53,-1,54,40,39,-1,39,53,54,-1,55,41,40,-1,40,54,55,-1,49,35,41,-1,41,55,49,-1,57,50,49,-1,49,56,57,-1,58,51,50,-1,50,57,58,-1,59,52,51,-1,51,58,59,-1,60,53,52,-1,52,59,60,-1,61,54,53,-1,53,60,61,-1,62,55,54,-1,54,61,62,-1,56,49,55,-1,55,62,56,-1]
IndexedFaceSet338.creaseAngle = 3.14159
IndexedFaceSet338.texCoordIndex = [0,2,3,-1,1,0,3,-1,3,4,5,-1,1,3,5,-1,6,1,5,-1,7,9,8,-1,8,10,7,-1,10,8,11,-1,11,12,10,-1,12,11,13,-1,13,14,12,-1,14,13,15,-1,15,16,14,-1,16,15,17,-1,17,18,16,-1,18,17,19,-1,19,20,18,-1,20,19,9,-1,9,7,20,-1,9,22,21,-1,21,8,9,-1,8,21,23,-1,23,11,8,-1,11,23,24,-1,24,13,11,-1,13,24,25,-1,25,15,13,-1,15,25,26,-1,26,17,15,-1,17,26,27,-1,27,19,17,-1,19,27,22,-1,22,9,19,-1,22,29,28,-1,28,21,22,-1,21,28,30,-1,30,23,21,-1,23,30,31,-1,31,24,23,-1,24,31,32,-1,32,25,24,-1,25,32,33,-1,33,26,25,-1,26,33,34,-1,34,27,26,-1,27,34,29,-1,29,22,27,-1,46,45,44,-1,47,46,44,-1,44,43,42,-1,47,44,42,-1,48,47,42,-1,35,28,29,-1,29,36,35,-1,37,30,28,-1,28,35,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,36,29,34,-1,34,41,36,-1,51,50,49,-1,49,52,51,-1,54,53,50,-1,50,51,54,-1,56,55,53,-1,53,54,56,-1,58,57,55,-1,55,56,58,-1,60,59,57,-1,57,58,60,-1,62,61,59,-1,59,60,62,-1,52,49,61,-1,61,62,52,-1,1,7,10,-1,10,0,1,-1,0,10,12,-1,12,2,0,-1,2,12,14,-1,14,3,2,-1,3,14,16,-1,16,4,3,-1,4,16,18,-1,18,5,4,-1,5,18,20,-1,20,6,5,-1,6,20,7,-1,7,1,6,-1,63,51,52,-1,52,64,63,-1,65,54,51,-1,51,63,65,-1,66,56,54,-1,54,65,66,-1,67,58,56,-1,56,66,67,-1,68,60,58,-1,58,67,68,-1,69,62,60,-1,60,68,69,-1,64,52,62,-1,62,69,64,-1,43,63,64,-1,64,42,43,-1,44,65,63,-1,63,43,44,-1,45,66,65,-1,65,44,45,-1,46,67,66,-1,66,45,46,-1,47,68,67,-1,67,46,47,-1,48,69,68,-1,68,47,48,-1,42,64,69,-1,69,48,42,-1]
Coordinate339 = x3d.Coordinate()

IndexedFaceSet338.coord = Coordinate339
TextureCoordinate340 = x3d.TextureCoordinate()

IndexedFaceSet338.texCoord = TextureCoordinate340

Shape334.geometry = IndexedFaceSet338

Transform333.children.append(Shape334)

HAnimSegment332.children.append(Transform333)

HAnimJoint331.children.append(HAnimSegment332)
HAnimJoint341 = x3d.HAnimJoint()
HAnimJoint341.name = "r_knee"
HAnimJoint341.DEF = "hanim_r_knee"
HAnimJoint341.center = [-0.09260999999999998,0.506943,-0.01943775]
HAnimJoint341.ulimit = [0,0,0]
HAnimJoint341.llimit = [0,0,0]
HAnimSegment342 = x3d.HAnimSegment()
HAnimSegment342.name = "r_calf"
HAnimSegment342.DEF = "hanim_r_calf"
Transform343 = x3d.Transform()
Transform343.translation = [-0.09260999999999998,0.506943,-0.01943775]
Shape344 = x3d.Shape()
Appearance345 = x3d.Appearance()
Material346 = x3d.Material()
Material346.diffuseColor = [0.588,0.588,0.588]

Appearance345.material = Material346
ImageTexture347 = x3d.ImageTexture()
ImageTexture347.USE = "JinLOA4TextureAtlas"

Appearance345.texture = ImageTexture347

Shape344.appearance = Appearance345
IndexedFaceSet348 = x3d.IndexedFaceSet()
IndexedFaceSet348.coordIndex = [0,1,2,-1,2,3,4,-1,2,4,5,-1,0,2,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1]
IndexedFaceSet348.creaseAngle = 3.14159
IndexedFaceSet348.texCoordIndex = [0,1,2,-1,2,3,4,-1,2,4,5,-1,0,2,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1]
Coordinate349 = x3d.Coordinate()

IndexedFaceSet348.coord = Coordinate349
TextureCoordinate350 = x3d.TextureCoordinate()

IndexedFaceSet348.texCoord = TextureCoordinate350

Shape344.geometry = IndexedFaceSet348

Transform343.children.append(Shape344)

HAnimSegment342.children.append(Transform343)

HAnimJoint341.children.append(HAnimSegment342)
HAnimJoint351 = x3d.HAnimJoint()
HAnimJoint351.name = "r_talocrural"
HAnimJoint351.DEF = "hanim_r_talocrural"
HAnimJoint351.center = [-0.0884475,0.11835180000000001,-0.01045125]
HAnimJoint351.ulimit = [0,0,0]
HAnimJoint351.llimit = [0,0,0]
HAnimSegment352 = x3d.HAnimSegment()
HAnimSegment352.name = "r_talus"
HAnimSegment352.DEF = "hanim_r_talus"
Transform353 = x3d.Transform()
Transform353.translation = [-0.0884475,0.11835180000000001,-0.01045125]
Shape354 = x3d.Shape()
Appearance355 = x3d.Appearance()
Material356 = x3d.Material()
Material356.diffuseColor = [0.588,0.588,0.588]

Appearance355.material = Material356
ImageTexture357 = x3d.ImageTexture()
ImageTexture357.USE = "JinLOA4TextureAtlas"

Appearance355.texture = ImageTexture357

Shape354.appearance = Appearance355
IndexedFaceSet358 = x3d.IndexedFaceSet()
IndexedFaceSet358.coordIndex = [13,15,21,-1,21,34,13,-1,9,34,21,-1,21,20,9,-1,0,15,14,-1,14,2,0,-1,30,33,16,-1,16,3,30,-1,3,16,25,-1,25,4,3,-1,22,17,18,-1,18,5,22,-1,5,18,29,-1,29,6,5,-1,6,19,27,-1,7,20,21,-1,21,1,7,-1,1,21,15,-1,15,0,1,-1,15,13,32,-1,32,14,15,-1,33,11,12,-1,12,16,33,-1,25,16,12,-1,12,23,25,-1,17,24,10,-1,10,18,17,-1,18,10,28,-1,28,29,18,-1,19,8,26,-1,26,27,19,-1,4,25,17,-1,17,22,4,-1,25,23,24,-1,24,17,25,-1,20,27,26,-1,26,9,20,-1,6,27,20,-1,20,7,6,-1,29,28,8,-1,8,19,29,-1,6,29,19,-1,1,0,31,-1,0,2,31,-1,31,30,3,-1,3,4,31,-1,4,22,31,-1,22,5,31,-1,5,6,31,-1,6,7,31,-1,7,1,31,-1,2,30,31,-1,14,33,30,-1,30,2,14,-1,32,11,33,-1,33,14,32,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,39,43,45,-1,45,46,35,-1,39,45,35,-1,37,39,35,-1,36,37,35,-1,26,8,36,-1,36,35,26,-1,8,28,37,-1,37,36,8,-1,28,10,38,-1,38,37,28,-1,10,24,39,-1,39,38,10,-1,24,23,40,-1,40,39,24,-1,23,12,41,-1,41,40,23,-1,12,11,42,-1,42,41,12,-1,11,32,43,-1,43,42,11,-1,32,13,44,-1,44,43,32,-1,13,34,45,-1,45,44,13,-1,34,9,46,-1,46,45,34,-1,9,26,35,-1,35,46,9,-1]
IndexedFaceSet358.creaseAngle = 3.14159
IndexedFaceSet358.texCoordIndex = [5,12,27,-1,27,34,5,-1,7,34,27,-1,27,28,7,-1,9,12,11,-1,11,10,9,-1,30,33,14,-1,14,13,30,-1,13,14,16,-1,16,15,13,-1,17,20,19,-1,19,18,17,-1,18,19,22,-1,22,21,18,-1,21,24,23,-1,25,28,27,-1,27,26,25,-1,26,27,12,-1,12,9,26,-1,12,5,32,-1,32,11,12,-1,33,3,4,-1,4,14,33,-1,16,14,4,-1,4,8,16,-1,20,6,2,-1,2,19,20,-1,19,2,29,-1,29,22,19,-1,24,0,1,-1,1,23,24,-1,15,16,20,-1,20,17,15,-1,16,8,6,-1,6,20,16,-1,28,23,1,-1,1,7,28,-1,21,23,28,-1,28,25,21,-1,22,29,0,-1,0,24,22,-1,21,22,24,-1,26,9,31,-1,9,10,31,-1,31,30,13,-1,13,15,31,-1,15,17,31,-1,17,18,31,-1,18,21,31,-1,21,25,31,-1,25,26,31,-1,10,30,31,-1,11,33,30,-1,30,10,11,-1,32,3,33,-1,33,11,32,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,39,43,45,-1,45,46,35,-1,39,45,35,-1,37,39,35,-1,36,37,35,-1,1,0,36,-1,36,35,1,-1,0,29,37,-1,37,36,0,-1,29,2,38,-1,38,37,29,-1,2,6,39,-1,39,38,2,-1,6,8,40,-1,40,39,6,-1,8,4,41,-1,41,40,8,-1,4,3,42,-1,42,41,4,-1,3,32,43,-1,43,42,3,-1,32,5,44,-1,44,43,32,-1,5,34,45,-1,45,44,5,-1,34,7,46,-1,46,45,34,-1,7,1,35,-1,35,46,7,-1]
Coordinate359 = x3d.Coordinate()

IndexedFaceSet358.coord = Coordinate359
TextureCoordinate360 = x3d.TextureCoordinate()

IndexedFaceSet358.texCoord = TextureCoordinate360

Shape354.geometry = IndexedFaceSet358

Transform353.children.append(Shape354)

HAnimSegment352.children.append(Transform353)

HAnimJoint351.children.append(HAnimSegment352)
HAnimJoint361 = x3d.HAnimJoint()
HAnimJoint361.name = "r_talocalcaneonavicular"
HAnimJoint361.DEF = "hanim_r_talocalcaneonavicular"
HAnimJoint361.center = [-0.07794,0.045756,0.0048645]
HAnimJoint361.ulimit = [0,0,0]
HAnimJoint361.llimit = [0,0,0]
HAnimSegment362 = x3d.HAnimSegment()
HAnimSegment362.name = "r_navicular"
HAnimSegment362.DEF = "hanim_r_navicular"
Transform363 = x3d.Transform()
Transform363.translation = [-0.07794,0.045756,0.0048645]
Shape364 = x3d.Shape()
Appearance365 = x3d.Appearance()
Material366 = x3d.Material()
Material366.diffuseColor = [0.588,0.588,0.588]

Appearance365.material = Material366
ImageTexture367 = x3d.ImageTexture()
ImageTexture367.USE = "JinLOA4TextureAtlas"

Appearance365.texture = ImageTexture367

Shape364.appearance = Appearance365
IndexedFaceSet368 = x3d.IndexedFaceSet()
IndexedFaceSet368.coordIndex = [7,6,11,-1,11,12,7,-1,1,17,18,-1,18,2,1,-1,12,10,5,-1,5,7,12,-1,2,11,6,-1,5,10,13,-1,13,0,5,-1,1,3,14,-1,14,17,1,-1,11,2,18,-1,4,15,16,-1,16,8,4,-1,8,16,9,-1,3,9,16,-1,16,14,3,-1,26,27,28,-1,28,19,20,-1,20,21,22,-1,22,23,24,-1,20,22,24,-1,28,20,24,-1,26,28,24,-1,25,26,24,-1,38,39,42,-1,42,43,38,-1,37,29,30,-1,30,31,32,-1,37,30,32,-1,32,33,34,-1,37,32,34,-1,37,34,35,-1,37,35,36,-1,1,2,20,-1,20,19,1,-1,2,6,21,-1,21,20,2,-1,6,7,22,-1,22,21,6,-1,7,5,23,-1,23,22,7,-1,5,0,24,-1,24,23,5,-1,38,43,44,-1,44,45,38,-1,4,8,26,-1,26,25,4,-1,8,9,27,-1,27,26,8,-1,9,3,28,-1,28,27,9,-1,3,1,19,-1,19,28,3,-1,10,12,30,-1,30,29,10,-1,12,11,31,-1,31,30,12,-1,11,18,32,-1,32,31,11,-1,18,17,33,-1,33,32,18,-1,17,14,34,-1,34,33,17,-1,14,16,35,-1,35,34,14,-1,16,15,36,-1,36,35,16,-1,42,39,40,-1,40,41,42,-1,13,10,29,-1,29,37,13,-1,0,13,39,-1,39,38,0,-1,13,37,40,-1,40,39,13,-1,37,36,41,-1,41,40,37,-1,36,15,42,-1,42,41,36,-1,15,4,43,-1,43,42,15,-1,4,25,44,-1,44,43,4,-1,25,24,45,-1,45,44,25,-1,24,0,38,-1,38,45,24,-1]
IndexedFaceSet368.creaseAngle = 3.14159
IndexedFaceSet368.texCoordIndex = [7,6,11,-1,11,12,7,-1,1,17,18,-1,18,2,1,-1,12,10,5,-1,5,7,12,-1,2,11,6,-1,5,10,13,-1,13,0,5,-1,1,3,14,-1,14,17,1,-1,11,2,18,-1,4,15,16,-1,16,8,4,-1,8,16,9,-1,3,9,16,-1,16,14,3,-1,26,27,28,-1,28,19,20,-1,20,21,22,-1,22,23,24,-1,20,22,24,-1,28,20,24,-1,26,28,24,-1,25,26,24,-1,38,39,42,-1,42,43,38,-1,37,29,30,-1,30,31,32,-1,37,30,32,-1,32,33,34,-1,37,32,34,-1,37,34,35,-1,37,35,36,-1,1,2,20,-1,20,19,1,-1,2,6,21,-1,21,20,2,-1,6,7,22,-1,22,21,6,-1,7,5,23,-1,23,22,7,-1,5,0,24,-1,24,23,5,-1,38,43,44,-1,44,45,38,-1,4,8,26,-1,26,25,4,-1,8,9,27,-1,27,26,8,-1,9,3,28,-1,28,27,9,-1,3,1,19,-1,19,28,3,-1,10,12,30,-1,30,29,10,-1,12,11,31,-1,31,30,12,-1,11,18,32,-1,32,31,11,-1,18,17,33,-1,33,32,18,-1,17,14,34,-1,34,33,17,-1,14,16,35,-1,35,34,14,-1,16,15,36,-1,36,35,16,-1,42,39,40,-1,40,41,42,-1,13,10,29,-1,29,37,13,-1,0,13,39,-1,39,38,0,-1,13,37,40,-1,40,39,13,-1,37,36,41,-1,41,40,37,-1,36,15,42,-1,42,41,36,-1,15,4,43,-1,43,42,15,-1,4,25,44,-1,44,43,4,-1,25,24,45,-1,45,44,25,-1,24,0,38,-1,38,45,24,-1]
Coordinate369 = x3d.Coordinate()

IndexedFaceSet368.coord = Coordinate369
TextureCoordinate370 = x3d.TextureCoordinate()

IndexedFaceSet368.texCoord = TextureCoordinate370

Shape364.geometry = IndexedFaceSet368

Transform363.children.append(Shape364)

HAnimSegment362.children.append(Transform363)

HAnimJoint361.children.append(HAnimSegment362)
HAnimJoint371 = x3d.HAnimJoint()
HAnimJoint371.name = "r_cuneonavicular_1"
HAnimJoint371.DEF = "hanim_r_cuneonavicular_1"
HAnimJoint371.center = [-0.0669825,0.0398133,0.018391499999999998]
HAnimJoint371.ulimit = [0,0,0]
HAnimJoint371.llimit = [0,0,0]
HAnimSegment372 = x3d.HAnimSegment()
HAnimSegment372.name = "r_cuneiform_1"
HAnimSegment372.DEF = "hanim_r_cuneiform_1"
Transform373 = x3d.Transform()
Transform373.translation = [-0.0669825,0.0398133,0.018391499999999998]
Shape374 = x3d.Shape()
Appearance375 = x3d.Appearance()
Material376 = x3d.Material()
Material376.diffuseColor = [0.588,0.588,0.588]

Appearance375.material = Material376
ImageTexture377 = x3d.ImageTexture()
ImageTexture377.USE = "JinLOA4TextureAtlas"

Appearance375.texture = ImageTexture377

Shape374.appearance = Appearance375
IndexedFaceSet378 = x3d.IndexedFaceSet()
IndexedFaceSet378.coordIndex = [0,4,12,-1,1,7,6,-1,6,0,1,-1,10,1,0,-1,0,12,10,-1,1,10,11,-1,11,2,1,-1,8,5,2,-1,2,3,8,-1,11,13,2,-1,12,4,15,-1,9,4,0,-1,0,6,9,-1,1,2,5,-1,5,7,1,-1,3,2,13,-1,13,14,3,-1,22,23,24,-1,22,24,25,-1,28,22,25,-1,13,11,10,-1,10,12,15,-1,13,10,15,-1,14,13,15,-1,16,17,18,-1,18,19,16,-1,21,16,19,-1,19,20,21,-1,3,14,17,-1,17,16,3,-1,14,15,18,-1,18,17,14,-1,15,4,19,-1,19,18,15,-1,4,9,20,-1,20,19,4,-1,28,25,26,-1,26,27,28,-1,8,3,16,-1,16,21,8,-1,6,7,23,-1,23,22,6,-1,7,5,24,-1,24,23,7,-1,5,8,25,-1,25,24,5,-1,8,21,26,-1,26,25,8,-1,21,20,27,-1,27,26,21,-1,20,9,28,-1,28,27,20,-1,9,6,22,-1,22,28,9,-1]
IndexedFaceSet378.creaseAngle = 3.14159
IndexedFaceSet378.texCoordIndex = [0,1,12,-1,2,7,6,-1,6,0,2,-1,10,2,0,-1,0,12,10,-1,2,10,11,-1,11,3,2,-1,8,5,3,-1,3,4,8,-1,11,13,3,-1,12,1,15,-1,9,1,0,-1,0,6,9,-1,2,3,5,-1,5,7,2,-1,4,3,13,-1,13,14,4,-1,22,23,24,-1,22,24,25,-1,28,22,25,-1,13,11,10,-1,10,12,15,-1,13,10,15,-1,14,13,15,-1,16,17,18,-1,18,19,16,-1,21,16,19,-1,19,20,21,-1,4,14,17,-1,17,16,4,-1,14,15,18,-1,18,17,14,-1,15,1,19,-1,19,18,15,-1,1,9,20,-1,20,19,1,-1,28,25,26,-1,26,27,28,-1,8,4,16,-1,16,21,8,-1,6,7,23,-1,23,22,6,-1,7,5,24,-1,24,23,7,-1,5,8,25,-1,25,24,5,-1,8,21,26,-1,26,25,8,-1,21,20,27,-1,27,26,21,-1,20,9,28,-1,28,27,20,-1,9,6,22,-1,22,28,9,-1]
Coordinate379 = x3d.Coordinate()

IndexedFaceSet378.coord = Coordinate379
TextureCoordinate380 = x3d.TextureCoordinate()

IndexedFaceSet378.texCoord = TextureCoordinate380

Shape374.geometry = IndexedFaceSet378

Transform373.children.append(Shape374)

HAnimSegment372.children.append(Transform373)

HAnimJoint371.children.append(HAnimSegment372)
HAnimJoint381 = x3d.HAnimJoint()
HAnimJoint381.name = "r_tarsometatarsal_1"
HAnimJoint381.DEF = "hanim_r_tarsometatarsal_1"
HAnimJoint381.center = [-0.06426,0.028820699999999998,0.04419]
HAnimJoint381.ulimit = [0,0,0]
HAnimJoint381.llimit = [0,0,0]
HAnimSegment382 = x3d.HAnimSegment()
HAnimSegment382.name = "r_metatarsal_1"
HAnimSegment382.DEF = "hanim_r_metatarsal_1"
Transform383 = x3d.Transform()
Transform383.translation = [-0.06426,0.028820699999999998,0.04419]
Shape384 = x3d.Shape()
Appearance385 = x3d.Appearance()
Material386 = x3d.Material()
Material386.diffuseColor = [0.588,0.588,0.588]

Appearance385.material = Material386
ImageTexture387 = x3d.ImageTexture()
ImageTexture387.USE = "JinLOA4TextureAtlas"

Appearance385.texture = ImageTexture387

Shape384.appearance = Appearance385
IndexedFaceSet388 = x3d.IndexedFaceSet()
IndexedFaceSet388.coordIndex = [0,14,11,-1,5,0,2,-1,2,7,5,-1,1,2,9,-1,9,10,1,-1,15,23,20,-1,20,8,15,-1,3,21,19,-1,19,4,3,-1,13,18,10,-1,10,4,13,-1,12,16,6,-1,6,1,12,-1,6,7,2,-1,2,1,6,-1,5,17,14,-1,14,0,5,-1,10,9,3,-1,3,4,10,-1,9,2,0,-1,0,11,9,-1,10,18,12,-1,12,1,10,-1,8,3,9,-1,9,11,8,-1,8,11,14,-1,14,15,8,-1,21,3,8,-1,8,20,21,-1,13,4,19,-1,19,22,13,-1,34,35,36,-1,34,36,39,-1,34,39,33,-1,40,41,42,-1,46,40,42,-1,45,46,42,-1,31,32,29,-1,29,30,31,-1,32,24,29,-1,24,25,28,-1,28,29,24,-1,25,26,27,-1,27,28,25,-1,18,13,25,-1,25,24,18,-1,13,22,26,-1,26,25,13,-1,45,42,43,-1,43,44,45,-1,23,15,28,-1,28,27,23,-1,15,14,29,-1,29,28,15,-1,14,17,30,-1,30,29,14,-1,39,36,37,-1,37,38,39,-1,16,12,32,-1,32,31,16,-1,12,18,24,-1,24,32,12,-1,5,7,34,-1,34,33,5,-1,7,6,35,-1,35,34,7,-1,6,16,36,-1,36,35,6,-1,16,31,37,-1,37,36,16,-1,31,30,38,-1,38,37,31,-1,30,17,39,-1,39,38,30,-1,17,5,33,-1,33,39,17,-1,21,20,41,-1,41,40,21,-1,20,23,42,-1,42,41,20,-1,23,27,43,-1,43,42,23,-1,27,26,44,-1,44,43,27,-1,26,22,45,-1,45,44,26,-1,22,19,46,-1,46,45,22,-1,19,21,40,-1,40,46,19,-1]
IndexedFaceSet388.creaseAngle = 3.14159
IndexedFaceSet388.texCoordIndex = [1,14,11,-1,5,1,2,-1,2,7,5,-1,3,2,9,-1,9,10,3,-1,15,23,20,-1,20,8,15,-1,0,21,19,-1,19,4,0,-1,13,18,10,-1,10,4,13,-1,12,16,6,-1,6,3,12,-1,6,7,2,-1,2,3,6,-1,5,17,14,-1,14,1,5,-1,10,9,0,-1,0,4,10,-1,9,2,1,-1,1,11,9,-1,10,18,12,-1,12,3,10,-1,8,0,9,-1,9,11,8,-1,8,11,14,-1,14,15,8,-1,21,0,8,-1,8,20,21,-1,13,4,19,-1,19,22,13,-1,34,35,36,-1,34,36,39,-1,34,39,33,-1,40,41,42,-1,46,40,42,-1,45,46,42,-1,31,32,29,-1,29,30,31,-1,32,24,14,-1,24,25,28,-1,28,29,24,-1,25,26,27,-1,27,28,25,-1,18,13,25,-1,25,24,18,-1,13,22,26,-1,26,25,13,-1,45,42,43,-1,43,44,45,-1,23,15,28,-1,28,27,23,-1,15,14,29,-1,29,28,15,-1,14,17,30,-1,30,29,14,-1,39,36,37,-1,37,38,39,-1,16,12,32,-1,32,31,16,-1,12,18,24,-1,24,32,12,-1,5,7,34,-1,34,33,5,-1,7,6,35,-1,35,34,7,-1,6,16,36,-1,36,35,6,-1,16,31,37,-1,37,36,16,-1,31,30,38,-1,38,37,31,-1,30,17,39,-1,39,38,30,-1,17,5,33,-1,33,39,17,-1,21,20,41,-1,41,40,21,-1,20,23,42,-1,42,41,20,-1,23,27,43,-1,43,42,23,-1,27,26,44,-1,44,43,27,-1,26,22,45,-1,45,44,26,-1,22,19,46,-1,46,45,22,-1,19,21,40,-1,40,46,19,-1]
Coordinate389 = x3d.Coordinate()

IndexedFaceSet388.coord = Coordinate389
TextureCoordinate390 = x3d.TextureCoordinate()

IndexedFaceSet388.texCoord = TextureCoordinate390

Shape384.geometry = IndexedFaceSet388

Transform383.children.append(Shape384)

HAnimSegment382.children.append(Transform383)

HAnimJoint381.children.append(HAnimSegment382)
HAnimJoint391 = x3d.HAnimJoint()
HAnimJoint391.name = "r_metatarsophalangeal_1"
HAnimJoint391.DEF = "hanim_r_metatarsophalangeal_1"
HAnimJoint391.center = [-0.0617625,0.01788669,0.09362249999999998]
HAnimJoint391.ulimit = [0,0,0]
HAnimJoint391.llimit = [0,0,0]
HAnimSegment392 = x3d.HAnimSegment()
HAnimSegment392.name = "r_tarsal_proximal_phalanx_1"
HAnimSegment392.DEF = "hanim_r_tarsal_proximal_phalanx_1"
Transform393 = x3d.Transform()
Transform393.translation = [-0.0617625,0.01788669,0.09362249999999998]
Shape394 = x3d.Shape()
Appearance395 = x3d.Appearance()
Material396 = x3d.Material()
Material396.diffuseColor = [0.588,0.588,0.588]

Appearance395.material = Material396
ImageTexture397 = x3d.ImageTexture()
ImageTexture397.USE = "JinLOA4TextureAtlas"

Appearance395.texture = ImageTexture397

Shape394.appearance = Appearance395
IndexedFaceSet398 = x3d.IndexedFaceSet()
IndexedFaceSet398.coordIndex = [9,10,17,-1,17,16,9,-1,11,1,2,-1,2,8,11,-1,7,8,2,-1,2,3,7,-1,7,3,4,-1,4,13,7,-1,12,13,4,-1,4,5,12,-1,5,6,0,-1,0,12,5,-1,0,6,1,-1,1,11,0,-1,14,20,19,-1,19,15,14,-1,14,15,17,-1,17,10,14,-1,9,16,18,-1,18,21,9,-1,7,10,9,-1,9,8,7,-1,8,9,21,-1,21,11,8,-1,12,20,14,-1,14,13,12,-1,13,14,10,-1,10,7,13,-1,11,21,22,-1,0,24,23,-1,23,12,0,-1,11,22,24,-1,24,0,11,-1,23,20,12,-1,39,40,41,-1,41,42,37,-1,39,41,37,-1,38,39,37,-1,33,34,35,-1,32,33,35,-1,31,32,35,-1,28,29,25,-1,25,26,27,-1,28,25,27,-1,35,36,30,-1,30,31,35,-1,17,15,26,-1,26,25,17,-1,15,19,27,-1,27,26,15,-1,19,18,28,-1,28,27,19,-1,18,16,29,-1,29,28,18,-1,16,17,25,-1,25,29,16,-1,19,20,31,-1,31,30,19,-1,20,23,32,-1,32,31,20,-1,23,24,33,-1,33,32,23,-1,24,22,34,-1,34,33,24,-1,22,21,35,-1,35,34,22,-1,21,18,36,-1,36,35,21,-1,18,19,30,-1,30,36,18,-1,2,1,38,-1,38,37,2,-1,1,6,39,-1,39,38,1,-1,6,5,40,-1,40,39,6,-1,5,4,41,-1,41,40,5,-1,4,3,42,-1,42,41,4,-1,3,2,37,-1,37,42,3,-1]
IndexedFaceSet398.creaseAngle = 3.14159
IndexedFaceSet398.texCoordIndex = [2,1,29,-1,29,28,2,-1,11,5,4,-1,4,13,11,-1,10,13,4,-1,4,6,10,-1,10,6,7,-1,7,12,10,-1,14,12,7,-1,7,8,14,-1,8,9,3,-1,3,14,8,-1,3,9,5,-1,5,11,3,-1,0,33,31,-1,31,27,0,-1,0,27,29,-1,29,1,0,-1,2,28,30,-1,30,35,2,-1,15,18,17,-1,17,16,15,-1,16,17,34,-1,34,19,16,-1,20,32,22,-1,22,21,20,-1,21,22,24,-1,24,23,21,-1,19,34,36,-1,25,39,37,-1,37,20,25,-1,19,36,38,-1,38,26,19,-1,37,32,20,-1,54,55,56,-1,56,57,52,-1,54,56,52,-1,53,54,52,-1,48,49,50,-1,47,48,50,-1,46,47,50,-1,43,44,40,-1,40,41,42,-1,43,40,42,-1,50,51,45,-1,45,46,50,-1,29,27,41,-1,41,40,29,-1,27,31,42,-1,42,41,27,-1,31,30,43,-1,43,42,31,-1,30,28,44,-1,44,43,30,-1,28,29,40,-1,40,44,28,-1,31,33,46,-1,46,45,31,-1,32,37,47,-1,47,46,32,-1,37,39,48,-1,48,47,37,-1,38,36,49,-1,49,48,38,-1,36,34,50,-1,50,49,36,-1,35,30,51,-1,51,50,35,-1,30,31,45,-1,45,51,30,-1,4,5,53,-1,53,52,4,-1,5,9,54,-1,54,53,5,-1,9,8,55,-1,55,54,9,-1,8,7,56,-1,56,55,8,-1,7,6,57,-1,57,56,7,-1,6,4,52,-1,52,57,6,-1]
Coordinate399 = x3d.Coordinate()

IndexedFaceSet398.coord = Coordinate399
TextureCoordinate400 = x3d.TextureCoordinate()

IndexedFaceSet398.texCoord = TextureCoordinate400

Shape394.geometry = IndexedFaceSet398

Transform393.children.append(Shape394)

HAnimSegment392.children.append(Transform393)

HAnimJoint391.children.append(HAnimSegment392)
HAnimJoint401 = x3d.HAnimJoint()
HAnimJoint401.name = "r_tarsal_distal_interphalangeal_1"
HAnimJoint401.DEF = "hanim_r_tarsal_distal_interphalangeal_1"
HAnimJoint401.center = [-0.06174,0.01504926,0.1153125]
HAnimJoint401.ulimit = [0,0,0]
HAnimJoint401.llimit = [0,0,0]
HAnimSegment402 = x3d.HAnimSegment()
HAnimSegment402.name = "r_tarsal_distal_phalanx_1"
HAnimSegment402.DEF = "hanim_r_tarsal_distal_phalanx_1"
Transform403 = x3d.Transform()
Transform403.translation = [-0.06174,0.01504926,0.1153125]
Shape404 = x3d.Shape()
Appearance405 = x3d.Appearance()
Material406 = x3d.Material()
Material406.diffuseColor = [0.588,0.588,0.588]

Appearance405.material = Material406
ImageTexture407 = x3d.ImageTexture()
ImageTexture407.USE = "JinLOA4TextureAtlas"

Appearance405.texture = ImageTexture407

Shape404.appearance = Appearance405
IndexedFaceSet408 = x3d.IndexedFaceSet()
IndexedFaceSet408.coordIndex = [3,2,5,-1,5,4,3,-1,1,0,5,-1,5,2,1,-1,1,7,6,-1,6,0,1,-1,8,7,1,-1,1,2,8,-1,3,9,8,-1,8,2,3,-1,10,9,3,-1,3,4,10,-1,11,10,4,-1,4,5,11,-1,0,6,11,-1,11,5,0,-1,7,13,12,-1,12,6,7,-1,14,13,7,-1,7,8,14,-1,9,15,14,-1,14,8,9,-1,16,15,9,-1,9,10,16,-1,17,16,10,-1,10,11,17,-1,6,12,17,-1,17,11,6,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,12,13,19,-1,19,18,12,-1,13,14,20,-1,20,19,13,-1,14,15,21,-1,21,20,14,-1,15,16,22,-1,22,21,15,-1,16,17,23,-1,23,22,16,-1,17,12,18,-1,18,23,17,-1]
IndexedFaceSet408.creaseAngle = 3.14159
IndexedFaceSet408.texCoordIndex = [0,3,2,-1,2,1,0,-1,5,4,2,-1,2,3,5,-1,13,12,15,-1,15,14,13,-1,8,6,5,-1,5,3,8,-1,0,9,8,-1,8,3,0,-1,10,9,0,-1,0,1,10,-1,11,10,1,-1,1,2,11,-1,4,7,11,-1,11,2,4,-1,12,18,16,-1,16,15,12,-1,20,19,6,-1,6,8,20,-1,9,21,20,-1,20,8,9,-1,22,21,9,-1,9,10,22,-1,23,22,10,-1,10,11,23,-1,7,17,23,-1,23,11,7,-1,26,27,28,-1,28,29,24,-1,26,28,24,-1,25,26,24,-1,16,18,25,-1,25,24,16,-1,19,20,26,-1,26,25,19,-1,20,21,27,-1,27,26,20,-1,21,22,28,-1,28,27,21,-1,22,23,29,-1,29,28,22,-1,23,17,24,-1,24,29,23,-1]
Coordinate409 = x3d.Coordinate()

IndexedFaceSet408.coord = Coordinate409
TextureCoordinate410 = x3d.TextureCoordinate()

IndexedFaceSet408.texCoord = TextureCoordinate410

Shape404.geometry = IndexedFaceSet408

Transform403.children.append(Shape404)

HAnimSegment402.children.append(Transform403)

HAnimJoint401.children.append(HAnimSegment402)

HAnimJoint391.children.append(HAnimJoint401)

HAnimJoint381.children.append(HAnimJoint391)

HAnimJoint371.children.append(HAnimJoint381)

HAnimJoint361.children.append(HAnimJoint371)
HAnimJoint411 = x3d.HAnimJoint()
HAnimJoint411.name = "r_cuneonavicular_2"
HAnimJoint411.DEF = "hanim_r_cuneonavicular_2"
HAnimJoint411.center = [-0.08104499999999999,0.041571000000000004,0.02142675]
HAnimJoint411.ulimit = [0,0,0]
HAnimJoint411.llimit = [0,0,0]
HAnimSegment412 = x3d.HAnimSegment()
HAnimSegment412.name = "r_cuneiform_2"
HAnimSegment412.DEF = "hanim_r_cuneiform_2"
Transform413 = x3d.Transform()
Transform413.translation = [-0.08104499999999999,0.041571000000000004,0.02142675]
Shape414 = x3d.Shape()
Appearance415 = x3d.Appearance()
Material416 = x3d.Material()
Material416.diffuseColor = [0.588,0.588,0.588]

Appearance415.material = Material416
ImageTexture417 = x3d.ImageTexture()
ImageTexture417.USE = "JinLOA4TextureAtlas"

Appearance415.texture = ImageTexture417

Shape414.appearance = Appearance415
IndexedFaceSet418 = x3d.IndexedFaceSet()
IndexedFaceSet418.coordIndex = [1,4,9,-1,9,8,1,-1,5,7,2,-1,2,0,5,-1,4,1,3,-1,3,6,4,-1,10,11,5,-1,5,0,10,-1,32,33,36,-1,36,37,32,-1,24,25,28,-1,28,29,24,-1,19,20,21,-1,19,21,22,-1,19,22,23,-1,19,23,18,-1,13,14,15,-1,13,15,16,-1,13,16,17,-1,13,17,12,-1,9,4,13,-1,13,12,9,-1,4,6,14,-1,14,13,4,-1,24,29,30,-1,30,31,24,-1,7,5,16,-1,16,15,7,-1,5,11,17,-1,17,16,5,-1,36,33,34,-1,34,35,36,-1,3,1,19,-1,19,18,3,-1,1,8,20,-1,20,19,1,-1,32,37,38,-1,38,39,32,-1,10,0,22,-1,22,21,10,-1,0,2,23,-1,23,22,0,-1,28,25,26,-1,26,27,28,-1,6,3,25,-1,25,24,6,-1,3,18,26,-1,26,25,3,-1,18,23,27,-1,27,26,18,-1,23,2,28,-1,28,27,23,-1,2,7,29,-1,29,28,2,-1,7,15,30,-1,30,29,7,-1,15,14,31,-1,31,30,15,-1,14,6,24,-1,24,31,14,-1,8,9,33,-1,33,32,8,-1,9,12,34,-1,34,33,9,-1,12,17,35,-1,35,34,12,-1,17,11,36,-1,36,35,17,-1,11,10,37,-1,37,36,11,-1,10,21,38,-1,38,37,10,-1,21,20,39,-1,39,38,21,-1,20,8,32,-1,32,39,20,-1]
IndexedFaceSet418.creaseAngle = 3.14159
IndexedFaceSet418.texCoordIndex = [0,4,9,-1,9,8,0,-1,5,7,2,-1,2,1,5,-1,4,0,3,-1,3,6,4,-1,10,11,5,-1,5,1,10,-1,32,33,36,-1,36,37,32,-1,24,25,28,-1,28,29,24,-1,19,20,21,-1,19,21,22,-1,19,22,23,-1,19,23,18,-1,13,14,15,-1,13,15,16,-1,13,16,17,-1,13,17,12,-1,9,4,13,-1,13,12,9,-1,4,6,14,-1,14,13,4,-1,24,29,30,-1,30,31,24,-1,7,5,16,-1,16,15,7,-1,5,11,17,-1,17,16,5,-1,36,33,34,-1,34,35,36,-1,3,0,19,-1,19,18,3,-1,0,8,20,-1,20,19,0,-1,32,37,38,-1,38,39,32,-1,10,1,22,-1,22,21,10,-1,1,2,23,-1,23,22,1,-1,28,25,26,-1,26,27,28,-1,6,3,25,-1,25,24,6,-1,3,18,26,-1,26,25,3,-1,18,23,27,-1,27,26,18,-1,23,2,28,-1,28,27,23,-1,2,7,29,-1,29,28,2,-1,7,15,30,-1,30,29,7,-1,15,14,31,-1,31,30,15,-1,14,6,24,-1,24,31,14,-1,8,9,33,-1,33,32,8,-1,9,12,34,-1,34,33,9,-1,12,17,35,-1,35,34,12,-1,17,11,36,-1,36,35,17,-1,11,10,37,-1,37,36,11,-1,10,21,38,-1,38,37,10,-1,21,20,39,-1,39,38,21,-1,20,8,32,-1,32,39,20,-1]
Coordinate419 = x3d.Coordinate()

IndexedFaceSet418.coord = Coordinate419
TextureCoordinate420 = x3d.TextureCoordinate()

IndexedFaceSet418.texCoord = TextureCoordinate420

Shape414.geometry = IndexedFaceSet418

Transform413.children.append(Shape414)

HAnimSegment412.children.append(Transform413)

HAnimJoint411.children.append(HAnimSegment412)
HAnimJoint421 = x3d.HAnimJoint()
HAnimJoint421.name = "r_tarsometatarsal_2"
HAnimJoint421.DEF = "hanim_r_tarsometatarsal_2"
HAnimJoint421.center = [-0.07983,0.032364,0.041062499999999995]
HAnimJoint421.ulimit = [0,0,0]
HAnimJoint421.llimit = [0,0,0]
HAnimSegment422 = x3d.HAnimSegment()
HAnimSegment422.name = "r_metatarsal_2"
HAnimSegment422.DEF = "hanim_r_metatarsal_2"
Transform423 = x3d.Transform()
Transform423.translation = [-0.07983,0.032364,0.041062499999999995]
Shape424 = x3d.Shape()
Appearance425 = x3d.Appearance()
Material426 = x3d.Material()
Material426.diffuseColor = [0.588,0.588,0.588]

Appearance425.material = Material426
ImageTexture427 = x3d.ImageTexture()
ImageTexture427.USE = "JinLOA4TextureAtlas"

Appearance425.texture = ImageTexture427

Shape424.appearance = Appearance425
IndexedFaceSet428 = x3d.IndexedFaceSet()
IndexedFaceSet428.coordIndex = [12,4,7,-1,7,15,12,-1,0,2,9,-1,9,8,0,-1,1,3,11,-1,11,10,1,-1,5,6,2,-1,2,0,5,-1,8,9,3,-1,3,1,8,-1,14,4,12,-1,12,13,14,-1,18,14,13,-1,13,17,18,-1,42,43,38,-1,38,39,42,-1,46,47,50,-1,50,51,46,-1,29,30,34,-1,34,35,29,-1,19,20,25,-1,25,26,19,-1,28,19,26,-1,26,27,28,-1,21,22,23,-1,23,24,21,-1,37,29,35,-1,35,36,37,-1,30,31,34,-1,20,21,24,-1,24,25,20,-1,31,32,33,-1,33,34,31,-1,3,9,20,-1,20,19,3,-1,9,2,21,-1,21,20,9,-1,2,6,22,-1,22,21,2,-1,42,39,40,-1,40,41,42,-1,7,4,24,-1,24,23,7,-1,4,16,25,-1,25,24,4,-1,16,14,26,-1,26,25,16,-1,14,18,27,-1,27,26,14,-1,50,47,48,-1,48,49,50,-1,11,3,19,-1,19,28,11,-1,0,8,30,-1,30,29,0,-1,8,1,31,-1,31,30,8,-1,1,10,32,-1,32,31,1,-1,46,51,52,-1,52,53,46,-1,17,13,34,-1,34,33,17,-1,13,12,35,-1,35,34,13,-1,12,15,36,-1,36,35,12,-1,38,43,44,-1,44,45,38,-1,5,0,29,-1,29,37,5,-1,15,7,39,-1,39,38,15,-1,7,23,40,-1,40,39,7,-1,23,22,41,-1,41,40,23,-1,22,6,42,-1,42,41,22,-1,6,5,43,-1,43,42,6,-1,5,37,44,-1,44,43,5,-1,37,36,45,-1,45,44,37,-1,36,15,38,-1,38,45,36,-1,10,11,47,-1,47,46,10,-1,11,28,48,-1,48,47,11,-1,28,27,49,-1,49,48,28,-1,27,18,50,-1,50,49,27,-1,18,17,51,-1,51,50,18,-1,17,33,52,-1,52,51,17,-1,33,32,53,-1,53,52,33,-1,32,10,46,-1,46,53,32,-1]
IndexedFaceSet428.creaseAngle = 3.14159
IndexedFaceSet428.texCoordIndex = [1,0,10,-1,10,7,1,-1,2,3,12,-1,12,11,2,-1,5,6,16,-1,16,15,5,-1,8,9,3,-1,3,2,8,-1,11,12,6,-1,6,5,11,-1,4,0,1,-1,1,13,4,-1,17,4,13,-1,13,14,17,-1,45,46,41,-1,41,42,45,-1,49,50,53,-1,53,54,49,-1,32,33,37,-1,37,38,32,-1,22,23,28,-1,28,29,22,-1,31,22,29,-1,29,30,31,-1,24,25,26,-1,26,27,24,-1,40,32,38,-1,38,39,40,-1,33,34,21,-1,23,24,27,-1,27,28,23,-1,34,35,36,-1,36,37,34,-1,6,12,23,-1,23,22,6,-1,12,3,24,-1,24,23,12,-1,3,9,25,-1,25,24,3,-1,45,42,43,-1,43,44,45,-1,10,0,27,-1,27,26,10,-1,20,18,28,-1,28,27,20,-1,18,19,29,-1,29,28,18,-1,4,17,30,-1,30,29,4,-1,53,50,51,-1,51,52,53,-1,16,6,22,-1,22,31,16,-1,2,11,33,-1,33,32,2,-1,11,5,34,-1,34,33,11,-1,5,15,35,-1,35,34,5,-1,49,54,55,-1,55,56,49,-1,14,13,37,-1,37,36,14,-1,13,1,38,-1,38,37,13,-1,1,7,39,-1,39,38,1,-1,41,46,47,-1,47,48,41,-1,8,2,32,-1,32,40,8,-1,7,10,42,-1,42,41,7,-1,10,26,43,-1,43,42,10,-1,26,25,44,-1,44,43,26,-1,25,9,45,-1,45,44,25,-1,9,8,46,-1,46,45,9,-1,8,40,47,-1,47,46,8,-1,40,39,48,-1,48,47,40,-1,39,7,41,-1,41,48,39,-1,15,16,50,-1,50,49,15,-1,16,31,51,-1,51,50,16,-1,31,30,52,-1,52,51,31,-1,30,17,53,-1,53,52,30,-1,17,14,54,-1,54,53,17,-1,14,36,55,-1,55,54,14,-1,36,35,56,-1,56,55,36,-1,35,15,49,-1,49,56,35,-1]
Coordinate429 = x3d.Coordinate()

IndexedFaceSet428.coord = Coordinate429
TextureCoordinate430 = x3d.TextureCoordinate()

IndexedFaceSet428.texCoord = TextureCoordinate430

Shape424.geometry = IndexedFaceSet428

Transform423.children.append(Shape424)

HAnimSegment422.children.append(Transform423)

HAnimJoint421.children.append(HAnimSegment422)
HAnimJoint431 = x3d.HAnimJoint()
HAnimJoint431.name = "r_metatarsophalangeal_2"
HAnimJoint431.DEF = "hanim_r_metatarsophalangeal_2"
HAnimJoint431.center = [-0.0821475,0.01857024,0.09782999999999999]
HAnimJoint431.ulimit = [0,0,0]
HAnimJoint431.llimit = [0,0,0]
HAnimSegment432 = x3d.HAnimSegment()
HAnimSegment432.name = "r_tarsal_proximal_phalanx_2"
HAnimSegment432.DEF = "hanim_r_tarsal_proximal_phalanx_2"
Transform433 = x3d.Transform()
Transform433.translation = [-0.0821475,0.01857024,0.09782999999999999]
Shape434 = x3d.Shape()
Appearance435 = x3d.Appearance()
Material436 = x3d.Material()
Material436.diffuseColor = [0.588,0.588,0.588]

Appearance435.material = Material436
ImageTexture437 = x3d.ImageTexture()
ImageTexture437.USE = "JinLOA4TextureAtlas"

Appearance435.texture = ImageTexture437

Shape434.appearance = Appearance435
IndexedFaceSet438 = x3d.IndexedFaceSet()
IndexedFaceSet438.coordIndex = [8,18,20,-1,20,6,8,-1,14,21,19,-1,19,11,14,-1,6,20,1,-1,19,15,11,-1,0,14,3,-1,3,2,0,-1,12,17,16,-1,16,8,12,-1,15,17,12,-1,12,11,15,-1,6,1,2,-1,2,3,6,-1,0,21,14,-1,16,18,8,-1,3,4,5,-1,5,6,3,-1,6,5,7,-1,7,8,6,-1,10,11,12,-1,12,9,10,-1,14,11,10,-1,10,13,14,-1,13,4,3,-1,3,14,13,-1,8,7,9,-1,9,12,8,-1,19,21,24,-1,24,23,19,-1,22,25,20,-1,20,18,22,-1,36,30,31,-1,35,36,31,-1,34,35,31,-1,13,10,9,-1,9,7,5,-1,13,9,5,-1,4,13,5,-1,29,26,27,-1,27,28,29,-1,37,41,42,-1,42,43,37,-1,31,32,33,-1,33,34,31,-1,39,40,41,-1,38,39,41,-1,37,38,41,-1,25,22,27,-1,27,26,25,-1,22,23,28,-1,28,27,22,-1,23,24,29,-1,29,28,23,-1,24,25,26,-1,26,29,24,-1,15,19,31,-1,31,30,15,-1,19,23,32,-1,32,31,19,-1,23,22,33,-1,33,32,23,-1,22,18,34,-1,34,33,22,-1,18,16,35,-1,35,34,18,-1,16,17,36,-1,36,35,16,-1,17,15,30,-1,30,36,17,-1,21,0,38,-1,38,37,21,-1,0,2,39,-1,39,38,0,-1,2,1,40,-1,40,39,2,-1,1,20,41,-1,41,40,1,-1,20,25,42,-1,42,41,20,-1,25,24,43,-1,43,42,25,-1,24,21,37,-1,37,43,24,-1]
IndexedFaceSet438.creaseAngle = 3.14159
IndexedFaceSet438.texCoordIndex = [1,24,30,-1,30,0,1,-1,3,31,25,-1,25,2,3,-1,0,30,4,-1,25,26,2,-1,9,3,5,-1,5,10,9,-1,7,28,27,-1,27,1,7,-1,26,29,8,-1,8,2,26,-1,0,4,11,-1,11,6,0,-1,9,31,3,-1,27,24,1,-1,12,13,14,-1,14,15,12,-1,15,14,16,-1,16,17,15,-1,19,20,21,-1,21,18,19,-1,23,20,19,-1,19,22,23,-1,22,13,12,-1,12,23,22,-1,17,16,18,-1,18,21,17,-1,35,34,38,-1,38,37,35,-1,36,39,33,-1,33,32,36,-1,50,44,45,-1,49,50,45,-1,48,49,45,-1,22,19,18,-1,18,16,14,-1,22,18,14,-1,13,22,14,-1,43,40,41,-1,41,42,43,-1,51,55,56,-1,56,57,51,-1,45,46,47,-1,47,48,45,-1,53,54,55,-1,52,53,55,-1,51,52,55,-1,39,36,41,-1,41,40,39,-1,36,37,42,-1,42,41,36,-1,37,38,43,-1,43,42,37,-1,38,39,40,-1,40,43,38,-1,26,25,45,-1,45,44,26,-1,35,37,46,-1,46,45,35,-1,37,36,47,-1,47,46,37,-1,36,32,48,-1,48,47,36,-1,24,27,49,-1,49,48,24,-1,27,28,50,-1,50,49,27,-1,29,26,44,-1,44,50,29,-1,31,9,52,-1,52,51,31,-1,9,10,53,-1,53,52,9,-1,11,4,54,-1,54,53,11,-1,4,30,55,-1,55,54,4,-1,33,39,56,-1,56,55,33,-1,39,38,57,-1,57,56,39,-1,38,34,51,-1,51,57,38,-1]
Coordinate439 = x3d.Coordinate()

IndexedFaceSet438.coord = Coordinate439
TextureCoordinate440 = x3d.TextureCoordinate()

IndexedFaceSet438.texCoord = TextureCoordinate440

Shape434.geometry = IndexedFaceSet438

Transform433.children.append(Shape434)

HAnimSegment432.children.append(Transform433)

HAnimJoint431.children.append(HAnimSegment432)
HAnimJoint441 = x3d.HAnimJoint()
HAnimJoint441.name = "r_tarsal_proximal_interphalangeal_2"
HAnimJoint441.DEF = "hanim_r_tarsal_proximal_interphalangeal_2"
HAnimJoint441.center = [-0.083925,0.015682590000000003,0.1140075]
HAnimJoint441.ulimit = [0,0,0]
HAnimJoint441.llimit = [0,0,0]
HAnimSegment442 = x3d.HAnimSegment()
HAnimSegment442.name = "r_tarsal_middle_phalanx_2"
HAnimSegment442.DEF = "hanim_r_tarsal_middle_phalanx_2"
Transform443 = x3d.Transform()
Transform443.translation = [-0.083925,0.015682590000000003,0.1140075]
Shape444 = x3d.Shape()
Appearance445 = x3d.Appearance()
Material446 = x3d.Material()
Material446.diffuseColor = [0.588,0.588,0.588]

Appearance445.material = Material446
ImageTexture447 = x3d.ImageTexture()
ImageTexture447.USE = "JinLOA4TextureAtlas"

Appearance445.texture = ImageTexture447

Shape444.appearance = Appearance445
IndexedFaceSet448 = x3d.IndexedFaceSet()
IndexedFaceSet448.coordIndex = [0,7,6,-1,6,1,0,-1,2,8,7,-1,7,0,2,-1,9,8,2,-1,2,3,9,-1,4,10,9,-1,9,3,4,-1,11,10,4,-1,4,5,11,-1,6,11,5,-1,5,1,6,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,0,1,19,-1,19,18,0,-1,1,5,20,-1,20,19,1,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,18,-1,18,23,2,-1]
IndexedFaceSet448.creaseAngle = 3.14159
IndexedFaceSet448.texCoordIndex = [0,9,8,-1,8,1,0,-1,2,10,9,-1,9,0,2,-1,11,10,2,-1,2,3,11,-1,4,13,11,-1,11,3,4,-1,14,12,6,-1,6,5,14,-1,8,15,7,-1,7,1,8,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,13,20,-1,20,19,11,-1,12,14,21,-1,21,20,12,-1,15,8,16,-1,16,21,15,-1,24,25,26,-1,26,27,22,-1,24,26,22,-1,23,24,22,-1,0,1,23,-1,23,22,0,-1,1,7,24,-1,24,23,1,-1,5,6,25,-1,25,24,5,-1,4,3,26,-1,26,25,4,-1,3,2,27,-1,27,26,3,-1,2,0,22,-1,22,27,2,-1]
Coordinate449 = x3d.Coordinate()

IndexedFaceSet448.coord = Coordinate449
TextureCoordinate450 = x3d.TextureCoordinate()

IndexedFaceSet448.texCoord = TextureCoordinate450

Shape444.geometry = IndexedFaceSet448

Transform443.children.append(Shape444)

HAnimSegment442.children.append(Transform443)

HAnimJoint441.children.append(HAnimSegment442)
HAnimJoint451 = x3d.HAnimJoint()
HAnimJoint451.name = "r_tarsal_distal_interphalangeal_2"
HAnimJoint451.DEF = "hanim_r_tarsal_distal_interphalangeal_2"
HAnimJoint451.center = [-0.083925,0.012183929999999999,0.12343499999999999]
HAnimJoint451.ulimit = [0,0,0]
HAnimJoint451.llimit = [0,0,0]
HAnimSegment452 = x3d.HAnimSegment()
HAnimSegment452.name = "r_tarsal_distal_phalanx_2"
HAnimSegment452.DEF = "hanim_r_tarsal_distal_phalanx_2"
Transform453 = x3d.Transform()
Transform453.translation = [-0.083925,0.012183929999999999,0.12343499999999999]
Shape454 = x3d.Shape()
Appearance455 = x3d.Appearance()
Material456 = x3d.Material()
Material456.diffuseColor = [0.588,0.588,0.588]

Appearance455.material = Material456
ImageTexture457 = x3d.ImageTexture()
ImageTexture457.USE = "JinLOA4TextureAtlas"

Appearance455.texture = ImageTexture457

Shape454.appearance = Appearance455
IndexedFaceSet458 = x3d.IndexedFaceSet()
IndexedFaceSet458.coordIndex = [0,1,2,-1,2,3,0,-1,5,4,2,-1,2,1,5,-1,0,6,7,-1,7,1,0,-1,3,8,6,-1,6,0,3,-1,9,8,3,-1,3,2,9,-1,4,10,9,-1,9,2,4,-1,11,10,4,-1,4,5,11,-1,7,11,5,-1,5,1,7,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,7,6,13,-1,13,12,7,-1,6,8,14,-1,14,13,6,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,7,12,-1,12,17,11,-1]
IndexedFaceSet458.creaseAngle = 3.14159
IndexedFaceSet458.texCoordIndex = [0,1,2,-1,2,3,0,-1,5,4,2,-1,2,1,5,-1,0,8,9,-1,9,1,0,-1,3,10,8,-1,8,0,3,-1,11,10,3,-1,3,2,11,-1,4,12,11,-1,11,2,4,-1,14,13,6,-1,6,7,14,-1,9,15,5,-1,5,1,9,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,9,8,17,-1,17,16,9,-1,8,10,18,-1,18,17,8,-1,10,11,19,-1,19,18,10,-1,11,12,20,-1,20,19,11,-1,13,14,21,-1,21,20,13,-1,15,9,16,-1,16,21,15,-1]
Coordinate459 = x3d.Coordinate()

IndexedFaceSet458.coord = Coordinate459
TextureCoordinate460 = x3d.TextureCoordinate()

IndexedFaceSet458.texCoord = TextureCoordinate460

Shape454.geometry = IndexedFaceSet458

Transform453.children.append(Shape454)

HAnimSegment452.children.append(Transform453)

HAnimJoint451.children.append(HAnimSegment452)

HAnimJoint441.children.append(HAnimJoint451)

HAnimJoint431.children.append(HAnimJoint441)

HAnimJoint421.children.append(HAnimJoint431)

HAnimJoint411.children.append(HAnimJoint421)

HAnimJoint361.children.append(HAnimJoint411)
HAnimJoint461 = x3d.HAnimJoint()
HAnimJoint461.name = "r_cuneonavicular_3"
HAnimJoint461.DEF = "hanim_r_cuneonavicular_3"
HAnimJoint461.center = [-0.09260999999999998,0.0414036,0.019818]
HAnimJoint461.ulimit = [0,0,0]
HAnimJoint461.llimit = [0,0,0]
HAnimSegment462 = x3d.HAnimSegment()
HAnimSegment462.name = "r_cuneiform_3"
HAnimSegment462.DEF = "hanim_r_cuneiform_3"
Transform463 = x3d.Transform()
Transform463.translation = [-0.09260999999999998,0.0414036,0.019818]
Shape464 = x3d.Shape()
Appearance465 = x3d.Appearance()
Material466 = x3d.Material()
Material466.diffuseColor = [0.588,0.588,0.588]

Appearance465.material = Material466
ImageTexture467 = x3d.ImageTexture()
ImageTexture467.USE = "JinLOA4TextureAtlas"

Appearance465.texture = ImageTexture467

Shape464.appearance = Appearance465
IndexedFaceSet468 = x3d.IndexedFaceSet()
IndexedFaceSet468.coordIndex = [4,0,6,-1,6,3,4,-1,4,3,8,-1,5,1,7,-1,7,2,5,-1,2,7,9,-1,4,8,9,-1,9,7,4,-1,20,21,24,-1,24,25,20,-1,12,13,10,-1,10,11,12,-1,18,19,14,-1,14,17,18,-1,15,16,17,-1,17,14,15,-1,0,4,11,-1,11,10,0,-1,4,7,12,-1,12,11,4,-1,7,1,13,-1,13,12,7,-1,24,21,22,-1,22,23,24,-1,3,6,15,-1,15,14,3,-1,20,25,26,-1,26,27,20,-1,5,2,17,-1,17,16,5,-1,2,9,18,-1,18,17,2,-1,9,8,19,-1,19,18,9,-1,8,3,14,-1,14,19,8,-1,6,0,21,-1,21,20,6,-1,0,10,22,-1,22,21,0,-1,10,13,23,-1,23,22,10,-1,13,1,24,-1,24,23,13,-1,1,5,25,-1,25,24,1,-1,5,16,26,-1,26,25,5,-1,16,15,27,-1,27,26,16,-1,15,6,20,-1,20,27,15,-1]
IndexedFaceSet468.creaseAngle = 3.14159
IndexedFaceSet468.texCoordIndex = [4,0,6,-1,6,3,4,-1,4,3,8,-1,5,1,7,-1,7,2,5,-1,2,7,9,-1,4,8,10,-1,10,11,4,-1,22,23,26,-1,26,27,22,-1,14,15,12,-1,12,13,14,-1,20,21,16,-1,16,19,20,-1,17,18,19,-1,19,16,17,-1,0,4,13,-1,13,12,0,-1,4,11,14,-1,14,13,4,-1,7,1,15,-1,15,14,7,-1,26,23,24,-1,24,25,26,-1,3,6,17,-1,17,16,3,-1,22,27,28,-1,28,29,22,-1,5,2,19,-1,19,18,5,-1,2,9,20,-1,20,19,2,-1,10,8,21,-1,21,20,10,-1,8,3,16,-1,16,21,8,-1,6,0,23,-1,23,22,6,-1,0,12,24,-1,24,23,0,-1,12,15,25,-1,25,24,12,-1,15,1,26,-1,26,25,15,-1,1,5,27,-1,27,26,1,-1,5,18,28,-1,28,27,5,-1,18,17,29,-1,29,28,18,-1,17,6,22,-1,22,29,17,-1]
Coordinate469 = x3d.Coordinate()

IndexedFaceSet468.coord = Coordinate469
TextureCoordinate470 = x3d.TextureCoordinate()

IndexedFaceSet468.texCoord = TextureCoordinate470

Shape464.geometry = IndexedFaceSet468

Transform463.children.append(Shape464)

HAnimSegment462.children.append(Transform463)

HAnimJoint461.children.append(HAnimSegment462)
HAnimJoint471 = x3d.HAnimJoint()
HAnimJoint471.name = "r_tarsometatarsal_3"
HAnimJoint471.DEF = "hanim_r_tarsometatarsal_3"
HAnimJoint471.center = [-0.09423,0.032364,0.039397499999999995]
HAnimJoint471.ulimit = [0,0,0]
HAnimJoint471.llimit = [0,0,0]
HAnimSegment472 = x3d.HAnimSegment()
HAnimSegment472.name = "r_metatarsal_3"
HAnimSegment472.DEF = "hanim_r_metatarsal_3"
Transform473 = x3d.Transform()
Transform473.translation = [-0.09423,0.032364,0.039397499999999995]
Shape474 = x3d.Shape()
Appearance475 = x3d.Appearance()
Material476 = x3d.Material()
Material476.diffuseColor = [0.588,0.588,0.588]

Appearance475.material = Material476
ImageTexture477 = x3d.ImageTexture()
ImageTexture477.USE = "JinLOA4TextureAtlas"

Appearance475.texture = ImageTexture477

Shape474.appearance = Appearance475
IndexedFaceSet478 = x3d.IndexedFaceSet()
IndexedFaceSet478.coordIndex = [15,12,13,-1,13,3,15,-1,10,7,0,-1,0,2,10,-1,9,1,14,-1,14,6,9,-1,3,13,7,-1,7,10,3,-1,12,15,5,-1,5,16,12,-1,6,8,17,-1,17,9,6,-1,17,8,11,-1,11,4,17,-1,27,28,31,-1,34,35,32,-1,32,33,34,-1,28,29,30,-1,30,31,28,-1,35,27,31,-1,31,32,35,-1,23,24,20,-1,22,23,20,-1,20,21,22,-1,25,26,18,-1,18,19,25,-1,24,25,19,-1,19,20,24,-1,1,9,19,-1,19,18,1,-1,9,17,20,-1,20,19,9,-1,17,4,21,-1,21,20,17,-1,48,45,46,-1,46,47,48,-1,5,15,23,-1,23,22,5,-1,15,3,24,-1,24,23,15,-1,3,10,25,-1,25,24,3,-1,10,2,26,-1,26,25,10,-1,40,37,38,-1,38,39,40,-1,13,12,28,-1,28,27,13,-1,12,16,29,-1,29,28,12,-1,44,49,50,-1,50,51,44,-1,11,8,31,-1,31,30,11,-1,8,6,32,-1,32,31,8,-1,6,14,33,-1,33,32,6,-1,36,41,42,-1,42,43,36,-1,0,7,35,-1,35,34,0,-1,7,13,27,-1,27,35,7,-1,37,40,41,-1,41,36,37,-1,48,49,44,-1,44,45,48,-1,14,1,37,-1,37,36,14,-1,1,18,38,-1,38,37,1,-1,18,26,39,-1,39,38,18,-1,26,2,40,-1,40,39,26,-1,2,0,41,-1,41,40,2,-1,0,34,42,-1,42,41,0,-1,34,33,43,-1,43,42,34,-1,33,14,36,-1,36,43,33,-1,16,5,45,-1,45,44,16,-1,5,22,46,-1,46,45,5,-1,22,21,47,-1,47,46,22,-1,21,4,48,-1,48,47,21,-1,4,11,49,-1,49,48,4,-1,11,30,50,-1,50,49,11,-1,30,29,51,-1,51,50,30,-1,29,16,44,-1,44,51,29,-1]
IndexedFaceSet478.creaseAngle = 3.14159
IndexedFaceSet478.texCoordIndex = [25,7,16,-1,16,3,25,-1,12,9,0,-1,0,2,12,-1,22,1,20,-1,20,18,22,-1,13,17,19,-1,19,23,13,-1,15,24,5,-1,5,26,15,-1,8,21,28,-1,28,11,8,-1,14,10,6,-1,6,4,14,-1,43,45,27,-1,54,55,51,-1,51,53,54,-1,46,47,48,-1,48,50,46,-1,56,44,49,-1,49,52,56,-1,36,38,28,-1,35,37,33,-1,33,34,35,-1,40,42,29,-1,29,30,40,-1,39,41,31,-1,31,32,39,-1,1,22,30,-1,30,29,1,-1,11,28,32,-1,32,31,11,-1,14,4,34,-1,34,33,14,-1,70,67,68,-1,68,69,70,-1,5,24,37,-1,37,35,5,-1,25,3,38,-1,38,36,25,-1,13,23,41,-1,41,39,13,-1,12,2,42,-1,42,40,12,-1,62,58,60,-1,60,61,62,-1,16,7,45,-1,45,43,16,-1,15,26,47,-1,47,46,15,-1,66,71,73,-1,73,74,66,-1,6,10,50,-1,50,48,6,-1,21,8,52,-1,52,49,21,-1,18,20,53,-1,53,51,18,-1,57,63,64,-1,64,65,57,-1,0,9,55,-1,55,54,0,-1,19,17,44,-1,44,56,19,-1,59,62,63,-1,63,57,59,-1,70,72,66,-1,66,67,70,-1,20,1,59,-1,59,57,20,-1,1,29,60,-1,60,58,1,-1,29,42,61,-1,61,60,29,-1,42,2,62,-1,62,61,42,-1,2,0,63,-1,63,62,2,-1,0,54,64,-1,64,63,0,-1,54,53,65,-1,65,64,54,-1,53,20,57,-1,57,65,53,-1,26,5,67,-1,67,66,26,-1,5,35,68,-1,68,67,5,-1,35,34,69,-1,69,68,35,-1,34,4,70,-1,70,69,34,-1,4,6,72,-1,72,70,4,-1,6,48,73,-1,73,71,6,-1,48,47,74,-1,74,73,48,-1,47,26,66,-1,66,74,47,-1]
Coordinate479 = x3d.Coordinate()

IndexedFaceSet478.coord = Coordinate479
TextureCoordinate480 = x3d.TextureCoordinate()

IndexedFaceSet478.texCoord = TextureCoordinate480

Shape474.geometry = IndexedFaceSet478

Transform473.children.append(Shape474)

HAnimSegment472.children.append(Transform473)

HAnimJoint471.children.append(HAnimSegment472)
HAnimJoint481 = x3d.HAnimJoint()
HAnimJoint481.name = "r_metatarsophalangeal_3"
HAnimJoint481.DEF = "hanim_r_metatarsophalangeal_3"
HAnimJoint481.center = [-0.09609749999999999,0.018670680000000002,0.0954225]
HAnimJoint481.ulimit = [0,0,0]
HAnimJoint481.llimit = [0,0,0]
HAnimSegment482 = x3d.HAnimSegment()
HAnimSegment482.name = "r_tarsal_proximal_phalanx_3"
HAnimSegment482.DEF = "hanim_r_tarsal_proximal_phalanx_3"
Transform483 = x3d.Transform()
Transform483.translation = [-0.09609749999999999,0.018670680000000002,0.0954225]
Shape484 = x3d.Shape()
Appearance485 = x3d.Appearance()
Material486 = x3d.Material()
Material486.diffuseColor = [0.588,0.588,0.588]

Appearance485.material = Material486
ImageTexture487 = x3d.ImageTexture()
ImageTexture487.USE = "JinLOA4TextureAtlas"

Appearance485.texture = ImageTexture487

Shape484.appearance = Appearance485
IndexedFaceSet488 = x3d.IndexedFaceSet()
IndexedFaceSet488.coordIndex = [13,0,1,-1,1,7,13,-1,7,1,2,-1,2,9,7,-1,4,6,14,-1,14,3,4,-1,8,6,4,-1,4,5,8,-1,5,0,13,-1,13,8,5,-1,23,17,15,-1,15,19,23,-1,16,18,24,-1,24,20,16,-1,9,23,19,-1,19,7,9,-1,8,20,24,-1,24,6,8,-1,7,19,11,-1,24,21,6,-1,10,8,13,-1,13,12,10,-1,14,22,25,-1,25,9,14,-1,21,22,14,-1,14,6,21,-1,7,11,12,-1,12,13,7,-1,10,20,8,-1,25,23,9,-1,9,2,3,-1,3,14,9,-1,5,4,3,-1,3,2,1,-1,5,3,1,-1,0,5,1,-1,33,34,35,-1,32,33,35,-1,31,32,35,-1,41,42,43,-1,43,37,41,-1,28,29,26,-1,26,27,28,-1,35,36,30,-1,30,31,35,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,15,17,27,-1,27,26,15,-1,17,18,28,-1,28,27,17,-1,18,16,29,-1,29,28,18,-1,16,15,26,-1,26,29,16,-1,17,23,31,-1,31,30,17,-1,23,25,32,-1,32,31,23,-1,25,22,33,-1,33,32,25,-1,22,21,34,-1,34,33,22,-1,21,24,35,-1,35,34,21,-1,24,18,36,-1,36,35,24,-1,18,17,30,-1,30,36,18,-1,20,10,38,-1,38,37,20,-1,10,12,39,-1,39,38,10,-1,12,11,40,-1,40,39,12,-1,11,19,41,-1,41,40,11,-1,19,15,42,-1,42,41,19,-1,15,16,43,-1,43,42,15,-1,16,20,37,-1,37,43,16,-1]
IndexedFaceSet488.creaseAngle = 3.14159
IndexedFaceSet488.texCoordIndex = [22,1,0,-1,0,7,22,-1,7,0,2,-1,2,9,7,-1,4,6,23,-1,23,3,4,-1,8,6,4,-1,4,5,8,-1,5,1,22,-1,22,8,5,-1,36,26,24,-1,24,29,36,-1,25,27,38,-1,38,31,25,-1,11,35,28,-1,28,10,11,-1,13,30,37,-1,37,12,13,-1,10,28,15,-1,37,32,12,-1,14,13,16,-1,16,20,14,-1,18,33,39,-1,39,11,18,-1,32,34,19,-1,19,12,32,-1,10,15,21,-1,21,17,10,-1,14,30,13,-1,39,35,11,-1,9,2,3,-1,3,23,9,-1,5,4,3,-1,3,2,0,-1,5,3,0,-1,1,5,0,-1,47,48,49,-1,46,47,49,-1,45,46,49,-1,55,56,57,-1,57,51,55,-1,42,43,40,-1,40,41,42,-1,49,50,44,-1,44,45,49,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,24,26,41,-1,41,40,24,-1,26,27,42,-1,42,41,26,-1,27,25,43,-1,43,42,27,-1,25,24,40,-1,40,43,25,-1,26,36,45,-1,45,44,26,-1,35,39,46,-1,46,45,35,-1,39,33,47,-1,47,46,39,-1,34,32,48,-1,48,47,34,-1,32,37,49,-1,49,48,32,-1,38,27,50,-1,50,49,38,-1,27,26,44,-1,44,50,27,-1,30,14,52,-1,52,51,30,-1,14,20,53,-1,53,52,14,-1,21,15,54,-1,54,53,21,-1,15,28,55,-1,55,54,15,-1,29,24,56,-1,56,55,29,-1,24,25,57,-1,57,56,24,-1,25,31,51,-1,51,57,25,-1]
Coordinate489 = x3d.Coordinate()

IndexedFaceSet488.coord = Coordinate489
TextureCoordinate490 = x3d.TextureCoordinate()

IndexedFaceSet488.texCoord = TextureCoordinate490

Shape484.geometry = IndexedFaceSet488

Transform483.children.append(Shape484)

HAnimSegment482.children.append(Transform483)

HAnimJoint481.children.append(HAnimSegment482)
HAnimJoint491 = x3d.HAnimJoint()
HAnimJoint491.name = "r_tarsal_proximal_interphalangeal_3"
HAnimJoint491.DEF = "hanim_r_tarsal_proximal_interphalangeal_3"
HAnimJoint491.center = [-0.098505,0.014784210000000002,0.110475]
HAnimJoint491.ulimit = [0,0,0]
HAnimJoint491.llimit = [0,0,0]
HAnimSegment492 = x3d.HAnimSegment()
HAnimSegment492.name = "r_tarsal_middle_phalanx_3"
HAnimSegment492.DEF = "hanim_r_tarsal_middle_phalanx_3"
Transform493 = x3d.Transform()
Transform493.translation = [-0.098505,0.014784210000000002,0.110475]
Shape494 = x3d.Shape()
Appearance495 = x3d.Appearance()
Material496 = x3d.Material()
Material496.diffuseColor = [0.588,0.588,0.588]

Appearance495.material = Material496
ImageTexture497 = x3d.ImageTexture()
ImageTexture497.USE = "JinLOA4TextureAtlas"

Appearance495.texture = ImageTexture497

Shape494.appearance = Appearance495
IndexedFaceSet498 = x3d.IndexedFaceSet()
IndexedFaceSet498.coordIndex = [1,7,6,-1,6,0,1,-1,2,8,7,-1,7,1,2,-1,9,8,2,-1,2,3,9,-1,4,10,9,-1,9,3,4,-1,11,10,4,-1,4,5,11,-1,6,11,5,-1,5,0,6,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,1,0,19,-1,19,18,1,-1,0,5,20,-1,20,19,0,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,1,18,-1,18,23,2,-1]
IndexedFaceSet498.creaseAngle = 3.14159
IndexedFaceSet498.texCoordIndex = [0,9,8,-1,8,1,0,-1,2,10,9,-1,9,0,2,-1,11,10,2,-1,2,3,11,-1,4,13,11,-1,11,3,4,-1,14,12,7,-1,7,6,14,-1,8,15,5,-1,5,1,8,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,13,20,-1,20,19,11,-1,12,14,21,-1,21,20,12,-1,15,8,16,-1,16,21,15,-1,24,25,26,-1,26,27,22,-1,24,26,22,-1,23,24,22,-1,0,1,23,-1,23,22,0,-1,1,5,24,-1,24,23,1,-1,6,7,25,-1,25,24,6,-1,4,3,26,-1,26,25,4,-1,3,2,27,-1,27,26,3,-1,2,0,22,-1,22,27,2,-1]
Coordinate499 = x3d.Coordinate()

IndexedFaceSet498.coord = Coordinate499
TextureCoordinate500 = x3d.TextureCoordinate()

IndexedFaceSet498.texCoord = TextureCoordinate500

Shape494.geometry = IndexedFaceSet498

Transform493.children.append(Shape494)

HAnimSegment492.children.append(Transform493)

HAnimJoint491.children.append(HAnimSegment492)
HAnimJoint501 = x3d.HAnimJoint()
HAnimJoint501.name = "r_tarsal_distal_interphalangeal_3"
HAnimJoint501.DEF = "hanim_r_tarsal_distal_interphalangeal_3"
HAnimJoint501.center = [-0.10003499999999999,0.012183929999999999,0.1197]
HAnimJoint501.ulimit = [0,0,0]
HAnimJoint501.llimit = [0,0,0]
HAnimSegment502 = x3d.HAnimSegment()
HAnimSegment502.name = "r_tarsal_distal_phalanx_3"
HAnimSegment502.DEF = "hanim_r_tarsal_distal_phalanx_3"
Transform503 = x3d.Transform()
Transform503.translation = [-0.10003499999999999,0.012183929999999999,0.1197]
Shape504 = x3d.Shape()
Appearance505 = x3d.Appearance()
Material506 = x3d.Material()
Material506.diffuseColor = [0.588,0.588,0.588]

Appearance505.material = Material506
ImageTexture507 = x3d.ImageTexture()
ImageTexture507.USE = "JinLOA4TextureAtlas"

Appearance505.texture = ImageTexture507

Shape504.appearance = Appearance505
IndexedFaceSet508 = x3d.IndexedFaceSet()
IndexedFaceSet508.coordIndex = [1,0,3,-1,3,2,1,-1,5,4,3,-1,3,0,5,-1,1,7,6,-1,6,0,1,-1,2,8,7,-1,7,1,2,-1,9,8,2,-1,2,3,9,-1,4,10,9,-1,9,3,4,-1,11,10,4,-1,4,5,11,-1,6,11,5,-1,5,0,6,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1]
IndexedFaceSet508.creaseAngle = 3.14159
IndexedFaceSet508.texCoordIndex = [0,3,2,-1,2,1,0,-1,5,4,2,-1,2,3,5,-1,0,9,8,-1,8,3,0,-1,1,10,9,-1,9,0,1,-1,11,10,1,-1,1,2,11,-1,4,12,11,-1,11,2,4,-1,14,13,7,-1,7,6,14,-1,8,15,5,-1,5,3,8,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,12,20,-1,20,19,11,-1,13,14,21,-1,21,20,13,-1,15,8,16,-1,16,21,15,-1]
Coordinate509 = x3d.Coordinate()

IndexedFaceSet508.coord = Coordinate509
TextureCoordinate510 = x3d.TextureCoordinate()

IndexedFaceSet508.texCoord = TextureCoordinate510

Shape504.geometry = IndexedFaceSet508

Transform503.children.append(Shape504)

HAnimSegment502.children.append(Transform503)

HAnimJoint501.children.append(HAnimSegment502)

HAnimJoint491.children.append(HAnimJoint501)

HAnimJoint481.children.append(HAnimJoint491)

HAnimJoint471.children.append(HAnimJoint481)

HAnimJoint461.children.append(HAnimJoint471)

HAnimJoint361.children.append(HAnimJoint461)

HAnimJoint351.children.append(HAnimJoint361)
HAnimJoint511 = x3d.HAnimJoint()
HAnimJoint511.name = "r_calcaneocuboid"
HAnimJoint511.DEF = "hanim_r_calcaneocuboid"
HAnimJoint511.center = [-0.0887175,0.0718983,-0.025965]
HAnimJoint511.ulimit = [0,0,0]
HAnimJoint511.llimit = [0,0,0]
HAnimSegment512 = x3d.HAnimSegment()
HAnimSegment512.name = "r_calcaneus"
HAnimSegment512.DEF = "hanim_r_calcaneus"
Transform513 = x3d.Transform()
Transform513.translation = [-0.0887175,0.0718983,-0.025965]
Shape514 = x3d.Shape()
Appearance515 = x3d.Appearance()
Material516 = x3d.Material()
Material516.diffuseColor = [0.588,0.588,0.588]

Appearance515.material = Material516
ImageTexture517 = x3d.ImageTexture()
ImageTexture517.USE = "JinLOA4TextureAtlas"

Appearance515.texture = ImageTexture517

Shape514.appearance = Appearance515
IndexedFaceSet518 = x3d.IndexedFaceSet()
IndexedFaceSet518.coordIndex = [1,0,3,-1,3,2,1,-1,4,7,6,-1,6,5,4,-1,4,18,19,-1,19,7,4,-1,0,8,9,-1,9,3,0,-1,10,2,3,-1,3,11,10,-1,12,6,7,-1,7,13,12,-1,13,7,19,-1,19,20,13,-1,25,26,14,-1,14,9,25,-1,3,9,14,-1,14,11,3,-1,15,10,11,-1,11,16,15,-1,13,20,21,-1,21,17,13,-1,11,14,16,-1,4,5,23,-1,23,18,4,-1,14,38,37,-1,34,15,16,-1,16,35,34,-1,17,21,39,-1,39,36,17,-1,17,12,13,-1,35,16,14,-1,14,37,35,-1,5,6,30,-1,30,27,5,-1,18,23,22,-1,22,1,18,-1,2,19,18,-1,18,1,2,-1,10,20,19,-1,19,2,10,-1,15,21,20,-1,20,10,15,-1,34,39,21,-1,21,15,34,-1,22,8,0,-1,0,1,22,-1,25,9,8,-1,8,24,25,-1,14,26,33,-1,33,38,14,-1,23,5,27,-1,27,29,23,-1,22,23,29,-1,29,28,22,-1,8,22,28,-1,28,24,8,-1,30,6,12,-1,12,31,30,-1,32,31,12,-1,12,40,32,-1,40,12,17,-1,17,36,40,-1,47,48,49,-1,49,41,42,-1,42,43,44,-1,49,42,44,-1,47,49,44,-1,47,44,45,-1,46,47,45,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,50,51,55,-1,55,56,59,-1,59,50,55,-1,56,57,58,-1,58,59,56,-1,34,35,42,-1,42,41,34,-1,35,37,43,-1,43,42,35,-1,37,38,44,-1,44,43,37,-1,38,33,45,-1,45,44,38,-1,33,32,46,-1,46,45,33,-1,32,40,47,-1,47,46,32,-1,40,36,48,-1,48,47,40,-1,36,39,49,-1,49,48,36,-1,39,34,41,-1,41,49,39,-1,25,24,51,-1,51,50,25,-1,24,28,52,-1,52,51,24,-1,28,29,53,-1,53,52,28,-1,29,27,54,-1,54,53,29,-1,27,30,55,-1,55,54,27,-1,30,31,56,-1,56,55,30,-1,31,32,57,-1,57,56,31,-1,32,33,58,-1,58,57,32,-1,33,26,59,-1,59,58,33,-1,26,25,50,-1,50,59,26,-1]
IndexedFaceSet518.creaseAngle = 3.14159
IndexedFaceSet518.texCoordIndex = [1,0,3,-1,3,2,1,-1,4,7,6,-1,6,5,4,-1,4,18,19,-1,19,7,4,-1,0,8,9,-1,9,3,0,-1,10,2,3,-1,3,11,10,-1,12,6,7,-1,7,13,12,-1,13,7,19,-1,19,20,13,-1,25,26,14,-1,14,9,25,-1,3,9,14,-1,14,11,3,-1,15,10,11,-1,11,16,15,-1,13,20,21,-1,21,17,13,-1,11,14,16,-1,4,5,23,-1,23,18,4,-1,14,38,37,-1,34,15,16,-1,16,35,34,-1,17,21,39,-1,39,36,17,-1,17,12,13,-1,35,16,14,-1,14,37,35,-1,5,6,30,-1,30,27,5,-1,18,23,22,-1,22,1,18,-1,2,19,18,-1,18,1,2,-1,10,20,19,-1,19,2,10,-1,15,21,20,-1,20,10,15,-1,34,39,21,-1,21,15,34,-1,22,8,0,-1,0,1,22,-1,25,9,8,-1,8,24,25,-1,14,26,33,-1,33,38,14,-1,23,5,27,-1,27,29,23,-1,22,23,29,-1,29,28,22,-1,8,22,28,-1,28,24,8,-1,30,6,12,-1,12,31,30,-1,32,31,12,-1,12,40,32,-1,40,12,17,-1,17,36,40,-1,47,48,49,-1,49,41,42,-1,42,43,44,-1,49,42,44,-1,47,49,44,-1,47,44,45,-1,46,47,45,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,50,51,55,-1,55,56,59,-1,59,50,55,-1,56,57,58,-1,58,59,56,-1,34,35,42,-1,42,41,34,-1,35,37,43,-1,43,42,35,-1,37,38,44,-1,44,43,37,-1,38,33,45,-1,45,44,38,-1,33,32,46,-1,46,45,33,-1,32,40,47,-1,47,46,32,-1,40,36,48,-1,48,47,40,-1,36,39,49,-1,49,48,36,-1,39,34,41,-1,41,49,39,-1,25,24,51,-1,51,50,25,-1,24,28,52,-1,52,51,24,-1,28,29,53,-1,53,52,28,-1,29,27,54,-1,54,53,29,-1,27,30,55,-1,55,54,27,-1,30,31,56,-1,56,55,30,-1,31,32,57,-1,57,56,31,-1,32,33,58,-1,58,57,32,-1,33,26,59,-1,59,58,33,-1,26,25,50,-1,50,59,26,-1]
Coordinate519 = x3d.Coordinate()

IndexedFaceSet518.coord = Coordinate519
TextureCoordinate520 = x3d.TextureCoordinate()

IndexedFaceSet518.texCoord = TextureCoordinate520

Shape514.geometry = IndexedFaceSet518

Transform513.children.append(Shape514)

HAnimSegment512.children.append(Transform513)

HAnimJoint511.children.append(HAnimSegment512)
HAnimJoint521 = x3d.HAnimJoint()
HAnimJoint521.name = "r_transversetarsal"
HAnimJoint521.DEF = "hanim_r_transversetarsal"
HAnimJoint521.center = [-0.1102725,0.04374720000000001,0.002089125]
HAnimJoint521.ulimit = [0,0,0]
HAnimJoint521.llimit = [0,0,0]
HAnimSegment522 = x3d.HAnimSegment()
HAnimSegment522.name = "r_cuboid"
HAnimSegment522.DEF = "hanim_r_cuboid"
Transform523 = x3d.Transform()
Transform523.translation = [-0.1102725,0.04374720000000001,0.002089125]
Shape524 = x3d.Shape()
Appearance525 = x3d.Appearance()
Material526 = x3d.Material()
Material526.diffuseColor = [0.588,0.588,0.588]

Appearance525.material = Material526
ImageTexture527 = x3d.ImageTexture()
ImageTexture527.USE = "JinLOA4TextureAtlas"

Appearance525.texture = ImageTexture527

Shape524.appearance = Appearance525
IndexedFaceSet528 = x3d.IndexedFaceSet()
IndexedFaceSet528.coordIndex = [1,17,16,-1,16,0,1,-1,3,8,5,-1,5,0,3,-1,6,7,2,-1,2,1,6,-1,2,4,10,-1,18,2,10,-1,4,9,13,-1,13,12,4,-1,11,10,4,-1,4,12,11,-1,6,1,0,-1,0,5,6,-1,9,4,2,-1,2,7,9,-1,8,3,14,-1,14,15,8,-1,3,0,16,-1,16,19,3,-1,14,3,19,-1,1,2,18,-1,18,17,1,-1,31,32,33,-1,33,26,27,-1,31,33,27,-1,30,31,27,-1,21,24,25,-1,25,20,21,-1,40,41,42,-1,42,34,35,-1,42,35,36,-1,40,42,36,-1,39,40,36,-1,22,23,24,-1,24,21,22,-1,11,12,21,-1,21,20,11,-1,12,13,22,-1,22,21,12,-1,39,36,37,-1,37,38,39,-1,15,14,24,-1,24,23,15,-1,14,19,25,-1,25,24,14,-1,30,27,28,-1,28,29,30,-1,10,11,27,-1,27,26,10,-1,11,20,28,-1,28,27,11,-1,20,25,29,-1,29,28,20,-1,25,19,30,-1,30,29,25,-1,19,16,31,-1,31,30,19,-1,16,17,32,-1,32,31,16,-1,17,18,33,-1,33,32,17,-1,18,10,26,-1,26,33,18,-1,5,8,35,-1,35,34,5,-1,8,15,36,-1,36,35,8,-1,15,23,37,-1,37,36,15,-1,23,22,38,-1,38,37,23,-1,22,13,39,-1,39,38,22,-1,13,9,40,-1,40,39,13,-1,9,7,41,-1,41,40,9,-1,7,6,42,-1,42,41,7,-1,6,5,34,-1,34,42,6,-1]
IndexedFaceSet528.creaseAngle = 3.14159
IndexedFaceSet528.texCoordIndex = [1,17,16,-1,16,0,1,-1,2,8,5,-1,5,0,2,-1,6,7,3,-1,3,1,6,-1,3,4,10,-1,18,3,10,-1,4,9,13,-1,13,12,4,-1,11,10,4,-1,4,12,11,-1,6,1,0,-1,0,5,6,-1,9,4,3,-1,3,7,9,-1,8,2,14,-1,14,15,8,-1,2,0,16,-1,16,19,2,-1,14,2,19,-1,1,3,18,-1,18,17,1,-1,31,32,33,-1,33,26,27,-1,31,33,27,-1,30,31,27,-1,21,24,25,-1,25,20,21,-1,40,41,42,-1,42,34,35,-1,42,35,36,-1,40,42,36,-1,39,40,36,-1,22,23,24,-1,24,21,22,-1,11,12,21,-1,21,20,11,-1,12,13,22,-1,22,21,12,-1,39,36,37,-1,37,38,39,-1,15,14,24,-1,24,23,15,-1,14,19,25,-1,25,24,14,-1,30,27,28,-1,28,29,30,-1,10,11,27,-1,27,26,10,-1,11,20,28,-1,28,27,11,-1,20,25,29,-1,29,28,20,-1,25,19,30,-1,30,29,25,-1,19,16,31,-1,31,30,19,-1,16,17,32,-1,32,31,16,-1,17,18,33,-1,33,32,17,-1,18,10,26,-1,26,33,18,-1,5,8,35,-1,35,34,5,-1,8,15,36,-1,36,35,8,-1,15,23,37,-1,37,36,15,-1,23,22,38,-1,38,37,23,-1,22,13,39,-1,39,38,22,-1,13,9,40,-1,40,39,13,-1,9,7,41,-1,41,40,9,-1,7,6,42,-1,42,41,7,-1,6,5,34,-1,34,42,6,-1]
Coordinate529 = x3d.Coordinate()

IndexedFaceSet528.coord = Coordinate529
TextureCoordinate530 = x3d.TextureCoordinate()

IndexedFaceSet528.texCoord = TextureCoordinate530

Shape524.geometry = IndexedFaceSet528

Transform523.children.append(Shape524)

HAnimSegment522.children.append(Transform523)

HAnimJoint521.children.append(HAnimSegment522)
HAnimJoint531 = x3d.HAnimJoint()
HAnimJoint531.name = "r_tarsometatarsal_4"
HAnimJoint531.DEF = "hanim_r_tarsometatarsal_4"
HAnimJoint531.center = [-0.10613249999999999,0.0304389,0.03843]
HAnimJoint531.ulimit = [0,0,0]
HAnimJoint531.llimit = [0,0,0]
HAnimSegment532 = x3d.HAnimSegment()
HAnimSegment532.name = "r_metatarsal_4"
HAnimSegment532.DEF = "hanim_r_metatarsal_4"
Transform533 = x3d.Transform()
Transform533.translation = [-0.10613249999999999,0.0304389,0.03843]
Shape534 = x3d.Shape()
Appearance535 = x3d.Appearance()
Material536 = x3d.Material()
Material536.diffuseColor = [0.588,0.588,0.588]

Appearance535.material = Material536
ImageTexture537 = x3d.ImageTexture()
ImageTexture537.USE = "JinLOA4TextureAtlas"

Appearance535.texture = ImageTexture537

Shape534.appearance = Appearance535
IndexedFaceSet538 = x3d.IndexedFaceSet()
IndexedFaceSet538.coordIndex = [11,13,17,-1,17,16,11,-1,10,11,16,-1,16,14,10,-1,5,1,3,-1,3,7,5,-1,0,2,6,-1,6,4,0,-1,14,15,12,-1,12,10,14,-1,7,3,0,-1,0,4,7,-1,8,1,5,-1,5,9,8,-1,40,41,36,-1,36,37,40,-1,48,49,44,-1,44,45,48,-1,27,28,31,-1,28,29,30,-1,30,31,28,-1,34,35,32,-1,32,33,34,-1,35,27,31,-1,31,32,35,-1,18,19,24,-1,26,18,24,-1,24,25,26,-1,20,21,22,-1,22,23,20,-1,19,20,23,-1,23,24,19,-1,5,7,19,-1,19,18,5,-1,7,4,20,-1,20,19,7,-1,4,6,21,-1,21,20,4,-1,40,37,38,-1,38,39,40,-1,15,14,23,-1,23,22,15,-1,14,16,24,-1,24,23,14,-1,16,17,25,-1,25,24,16,-1,44,49,50,-1,50,51,44,-1,9,5,18,-1,18,26,9,-1,3,1,28,-1,28,27,3,-1,1,8,29,-1,29,28,1,-1,48,45,46,-1,46,47,48,-1,13,11,31,-1,31,30,13,-1,11,10,32,-1,32,31,11,-1,10,12,33,-1,33,32,10,-1,36,41,42,-1,42,43,36,-1,2,0,35,-1,35,34,2,-1,0,3,27,-1,27,35,0,-1,12,15,37,-1,37,36,12,-1,15,22,38,-1,38,37,15,-1,22,21,39,-1,39,38,22,-1,21,6,40,-1,40,39,21,-1,6,2,41,-1,41,40,6,-1,2,34,42,-1,42,41,2,-1,34,33,43,-1,43,42,34,-1,33,12,36,-1,36,43,33,-1,17,13,45,-1,45,44,17,-1,13,30,46,-1,46,45,13,-1,30,29,47,-1,47,46,30,-1,29,8,48,-1,48,47,29,-1,8,9,49,-1,49,48,8,-1,9,26,50,-1,50,49,9,-1,26,25,51,-1,51,50,26,-1,25,17,44,-1,44,51,25,-1]
IndexedFaceSet538.creaseAngle = 3.14159
IndexedFaceSet538.texCoordIndex = [5,13,17,-1,17,16,5,-1,2,5,16,-1,16,7,2,-1,9,1,6,-1,6,12,9,-1,0,4,11,-1,11,8,0,-1,7,10,3,-1,3,2,7,-1,12,6,0,-1,0,8,12,-1,14,1,9,-1,9,15,14,-1,42,43,38,-1,38,39,42,-1,50,51,46,-1,46,47,50,-1,29,30,18,-1,30,31,32,-1,32,33,30,-1,36,37,34,-1,34,35,36,-1,37,29,33,-1,33,34,37,-1,20,21,19,-1,28,20,26,-1,26,27,28,-1,22,23,24,-1,24,25,22,-1,21,22,25,-1,25,26,21,-1,9,12,21,-1,21,20,9,-1,12,8,22,-1,22,21,12,-1,8,11,23,-1,23,22,8,-1,42,39,40,-1,40,41,42,-1,10,7,25,-1,25,24,10,-1,7,16,26,-1,26,25,7,-1,16,17,27,-1,27,26,16,-1,46,51,52,-1,52,53,46,-1,15,9,20,-1,20,28,15,-1,6,1,30,-1,30,29,6,-1,1,14,31,-1,31,30,1,-1,50,47,48,-1,48,49,50,-1,13,5,33,-1,33,32,13,-1,5,2,34,-1,34,33,5,-1,2,3,35,-1,35,34,2,-1,38,43,44,-1,44,45,38,-1,4,0,37,-1,37,36,4,-1,0,6,29,-1,29,37,0,-1,3,10,39,-1,39,38,3,-1,10,24,40,-1,40,39,10,-1,24,23,41,-1,41,40,24,-1,23,11,42,-1,42,41,23,-1,11,4,43,-1,43,42,11,-1,4,36,44,-1,44,43,4,-1,36,35,45,-1,45,44,36,-1,35,3,38,-1,38,45,35,-1,17,13,47,-1,47,46,17,-1,13,32,48,-1,48,47,13,-1,32,31,49,-1,49,48,32,-1,31,14,50,-1,50,49,31,-1,14,15,51,-1,51,50,14,-1,15,28,52,-1,52,51,15,-1,28,27,53,-1,53,52,28,-1,27,17,46,-1,46,53,27,-1]
Coordinate539 = x3d.Coordinate()

IndexedFaceSet538.coord = Coordinate539
TextureCoordinate540 = x3d.TextureCoordinate()

IndexedFaceSet538.texCoord = TextureCoordinate540

Shape534.geometry = IndexedFaceSet538

Transform533.children.append(Shape534)

HAnimSegment532.children.append(Transform533)

HAnimJoint531.children.append(HAnimSegment532)
HAnimJoint541 = x3d.HAnimJoint()
HAnimJoint541.name = "r_metatarsophalangeal_4"
HAnimJoint541.DEF = "hanim_r_metatarsophalangeal_4"
HAnimJoint541.center = [-0.1095075,0.017797410000000003,0.09116999999999999]
HAnimJoint541.ulimit = [0,0,0]
HAnimJoint541.llimit = [0,0,0]
HAnimSegment542 = x3d.HAnimSegment()
HAnimSegment542.name = "r_tarsal_proximal_phalanx_4"
HAnimSegment542.DEF = "hanim_r_tarsal_proximal_phalanx_4"
Transform543 = x3d.Transform()
Transform543.translation = [-0.1095075,0.017797410000000003,0.09116999999999999]
Shape544 = x3d.Shape()
Appearance545 = x3d.Appearance()
Material546 = x3d.Material()
Material546.diffuseColor = [0.588,0.588,0.588]

Appearance545.material = Material546
ImageTexture547 = x3d.ImageTexture()
ImageTexture547.USE = "JinLOA4TextureAtlas"

Appearance545.texture = ImageTexture547

Shape544.appearance = Appearance545
IndexedFaceSet548 = x3d.IndexedFaceSet()
IndexedFaceSet548.coordIndex = [13,2,1,-1,1,10,13,-1,10,1,3,-1,3,8,10,-1,3,4,0,-1,0,8,3,-1,0,4,5,-1,5,9,0,-1,7,9,5,-1,5,6,7,-1,6,2,13,-1,13,7,6,-1,22,17,18,-1,18,14,22,-1,20,19,21,-1,21,15,20,-1,9,7,15,-1,15,21,9,-1,10,14,16,-1,8,22,14,-1,14,10,8,-1,21,23,9,-1,11,7,13,-1,13,12,11,-1,0,25,24,-1,24,8,0,-1,16,12,13,-1,13,10,16,-1,23,25,0,-1,0,9,23,-1,11,15,7,-1,24,22,8,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,6,5,4,-1,4,3,1,-1,6,4,1,-1,2,6,1,-1,37,38,39,-1,39,40,37,-1,28,29,26,-1,26,27,28,-1,35,36,30,-1,30,31,35,-1,40,41,42,-1,42,43,37,-1,40,42,37,-1,18,17,27,-1,27,26,18,-1,17,19,28,-1,28,27,17,-1,19,20,29,-1,29,28,19,-1,20,18,26,-1,26,29,20,-1,17,22,31,-1,31,30,17,-1,22,24,32,-1,32,31,22,-1,24,25,33,-1,33,32,24,-1,25,23,34,-1,34,33,25,-1,23,21,35,-1,35,34,23,-1,21,19,36,-1,36,35,21,-1,19,17,30,-1,30,36,19,-1,14,18,38,-1,38,37,14,-1,18,20,39,-1,39,38,18,-1,20,15,40,-1,40,39,20,-1,15,11,41,-1,41,40,15,-1,11,12,42,-1,42,41,11,-1,12,16,43,-1,43,42,12,-1,16,14,37,-1,37,43,16,-1]
IndexedFaceSet548.creaseAngle = 3.14159
IndexedFaceSet548.texCoordIndex = [27,2,1,-1,1,10,27,-1,10,1,3,-1,3,11,10,-1,3,4,0,-1,0,11,3,-1,0,4,5,-1,5,12,0,-1,9,12,5,-1,5,6,9,-1,6,2,27,-1,27,9,6,-1,35,28,29,-1,29,7,35,-1,31,30,33,-1,33,8,31,-1,15,14,16,-1,16,32,15,-1,17,13,18,-1,19,34,13,-1,13,17,19,-1,32,36,15,-1,20,14,22,-1,22,21,20,-1,23,38,37,-1,37,19,23,-1,18,24,25,-1,25,17,18,-1,36,39,26,-1,26,15,36,-1,20,16,14,-1,37,34,19,-1,45,46,47,-1,47,48,49,-1,45,47,49,-1,6,5,4,-1,4,3,1,-1,6,4,1,-1,2,6,1,-1,51,52,53,-1,53,54,51,-1,42,43,40,-1,40,41,42,-1,49,50,44,-1,44,45,49,-1,54,55,56,-1,56,57,51,-1,54,56,51,-1,29,28,41,-1,41,40,29,-1,28,30,42,-1,42,41,28,-1,30,31,43,-1,43,42,30,-1,31,29,40,-1,40,43,31,-1,28,35,45,-1,45,44,28,-1,34,37,46,-1,46,45,34,-1,37,38,47,-1,47,46,37,-1,39,36,48,-1,48,47,39,-1,36,32,49,-1,49,48,36,-1,33,30,50,-1,50,49,33,-1,30,28,44,-1,44,50,30,-1,7,29,52,-1,52,51,7,-1,29,31,53,-1,53,52,29,-1,31,8,54,-1,54,53,31,-1,16,20,55,-1,55,54,16,-1,20,21,56,-1,56,55,20,-1,24,18,57,-1,57,56,24,-1,18,13,51,-1,51,57,18,-1]
Coordinate549 = x3d.Coordinate()

IndexedFaceSet548.coord = Coordinate549
TextureCoordinate550 = x3d.TextureCoordinate()

IndexedFaceSet548.texCoord = TextureCoordinate550

Shape544.geometry = IndexedFaceSet548

Transform543.children.append(Shape544)

HAnimSegment542.children.append(Transform543)

HAnimJoint541.children.append(HAnimSegment542)
HAnimJoint551 = x3d.HAnimJoint()
HAnimJoint551.name = "r_tarsal_proximal_interphalangeal_4"
HAnimJoint551.DEF = "hanim_r_tarsal_proximal_interphalangeal_4"
HAnimJoint551.center = [-0.11378250000000001,0.015183180000000001,0.10631249999999999]
HAnimJoint551.ulimit = [0,0,0]
HAnimJoint551.llimit = [0,0,0]
HAnimSegment552 = x3d.HAnimSegment()
HAnimSegment552.name = "r_tarsal_middle_phalanx_4"
HAnimSegment552.DEF = "hanim_r_tarsal_middle_phalanx_4"
Transform553 = x3d.Transform()
Transform553.translation = [-0.11378250000000001,0.015183180000000001,0.10631249999999999]
Shape554 = x3d.Shape()
Appearance555 = x3d.Appearance()
Material556 = x3d.Material()
Material556.diffuseColor = [0.588,0.588,0.588]

Appearance555.material = Material556
ImageTexture557 = x3d.ImageTexture()
ImageTexture557.USE = "JinLOA4TextureAtlas"

Appearance555.texture = ImageTexture557

Shape554.appearance = Appearance555
IndexedFaceSet558 = x3d.IndexedFaceSet()
IndexedFaceSet558.coordIndex = [0,6,7,-1,7,1,0,-1,2,8,6,-1,6,0,2,-1,9,8,2,-1,2,3,9,-1,4,10,9,-1,9,3,4,-1,11,10,4,-1,4,5,11,-1,7,11,5,-1,5,1,7,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,7,6,13,-1,13,12,7,-1,6,8,14,-1,14,13,6,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,7,12,-1,12,17,11,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,0,1,19,-1,19,18,0,-1,1,5,20,-1,20,19,1,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,18,-1,18,23,2,-1]
IndexedFaceSet558.creaseAngle = 3.14159
IndexedFaceSet558.texCoordIndex = [0,8,9,-1,9,1,0,-1,2,10,8,-1,8,0,2,-1,11,10,2,-1,2,3,11,-1,4,12,11,-1,11,3,4,-1,14,13,7,-1,7,6,14,-1,9,15,5,-1,5,1,9,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,9,8,17,-1,17,16,9,-1,8,10,18,-1,18,17,8,-1,10,11,19,-1,19,18,10,-1,11,12,20,-1,20,19,11,-1,13,14,21,-1,21,20,13,-1,15,9,16,-1,16,21,15,-1,24,25,26,-1,26,27,22,-1,24,26,22,-1,23,24,22,-1,0,1,23,-1,23,22,0,-1,1,5,24,-1,24,23,1,-1,6,7,25,-1,25,24,6,-1,4,3,26,-1,26,25,4,-1,3,2,27,-1,27,26,3,-1,2,0,22,-1,22,27,2,-1]
Coordinate559 = x3d.Coordinate()

IndexedFaceSet558.coord = Coordinate559
TextureCoordinate560 = x3d.TextureCoordinate()

IndexedFaceSet558.texCoord = TextureCoordinate560

Shape554.geometry = IndexedFaceSet558

Transform553.children.append(Shape554)

HAnimSegment552.children.append(Transform553)

HAnimJoint551.children.append(HAnimSegment552)
HAnimJoint561 = x3d.HAnimJoint()
HAnimJoint561.name = "r_tarsal_distal_interphalangeal_4"
HAnimJoint561.DEF = "hanim_r_tarsal_distal_interphalangeal_4"
HAnimJoint561.center = [-0.1153125,0.01161756,0.11369249999999999]
HAnimJoint561.ulimit = [0,0,0]
HAnimJoint561.llimit = [0,0,0]
HAnimSegment562 = x3d.HAnimSegment()
HAnimSegment562.name = "r_tarsal_distal_phalanx_4"
HAnimSegment562.DEF = "hanim_r_tarsal_distal_phalanx_4"
Transform563 = x3d.Transform()
Transform563.translation = [-0.1153125,0.01161756,0.11369249999999999]
Shape564 = x3d.Shape()
Appearance565 = x3d.Appearance()
Material566 = x3d.Material()
Material566.diffuseColor = [0.588,0.588,0.588]

Appearance565.material = Material566
ImageTexture567 = x3d.ImageTexture()
ImageTexture567.USE = "JinLOA4TextureAtlas"

Appearance565.texture = ImageTexture567

Shape564.appearance = Appearance565
IndexedFaceSet568 = x3d.IndexedFaceSet()
IndexedFaceSet568.coordIndex = [0,3,2,-1,2,1,0,-1,5,4,2,-1,2,3,5,-1,0,6,7,-1,7,3,0,-1,1,8,6,-1,6,0,1,-1,9,8,1,-1,1,2,9,-1,4,10,9,-1,9,2,4,-1,11,10,4,-1,4,5,11,-1,7,11,5,-1,5,3,7,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,7,6,13,-1,13,12,7,-1,6,8,14,-1,14,13,6,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,7,12,-1,12,17,11,-1]
IndexedFaceSet568.creaseAngle = 3.14159
IndexedFaceSet568.texCoordIndex = [0,3,2,-1,2,1,0,-1,5,4,2,-1,2,3,5,-1,0,8,9,-1,9,3,0,-1,1,10,8,-1,8,0,1,-1,11,10,1,-1,1,2,11,-1,4,12,11,-1,11,2,4,-1,14,13,7,-1,7,6,14,-1,9,15,5,-1,5,3,9,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,9,8,17,-1,17,16,9,-1,8,10,18,-1,18,17,8,-1,10,11,19,-1,19,18,10,-1,11,12,20,-1,20,19,11,-1,13,14,21,-1,21,20,13,-1,15,9,16,-1,16,21,15,-1]
Coordinate569 = x3d.Coordinate()

IndexedFaceSet568.coord = Coordinate569
TextureCoordinate570 = x3d.TextureCoordinate()

IndexedFaceSet568.texCoord = TextureCoordinate570

Shape564.geometry = IndexedFaceSet568

Transform563.children.append(Shape564)

HAnimSegment562.children.append(Transform563)

HAnimJoint561.children.append(HAnimSegment562)

HAnimJoint551.children.append(HAnimJoint561)

HAnimJoint541.children.append(HAnimJoint551)

HAnimJoint531.children.append(HAnimJoint541)

HAnimJoint521.children.append(HAnimJoint531)
HAnimJoint571 = x3d.HAnimJoint()
HAnimJoint571.name = "r_tarsometatarsal_5"
HAnimJoint571.DEF = "hanim_r_tarsometatarsal_5"
HAnimJoint571.center = [-0.1204425,0.02597211,0.03474]
HAnimJoint571.ulimit = [0,0,0]
HAnimJoint571.llimit = [0,0,0]
HAnimSegment572 = x3d.HAnimSegment()
HAnimSegment572.name = "r_metatarsal_5"
HAnimSegment572.DEF = "hanim_r_metatarsal_5"
Transform573 = x3d.Transform()
Transform573.translation = [-0.1204425,0.02597211,0.03474]
Shape574 = x3d.Shape()
Appearance575 = x3d.Appearance()
Material576 = x3d.Material()
Material576.diffuseColor = [0.588,0.588,0.588]

Appearance575.material = Material576
ImageTexture577 = x3d.ImageTexture()
ImageTexture577.USE = "JinLOA4TextureAtlas"

Appearance575.texture = ImageTexture577

Shape574.appearance = Appearance575
IndexedFaceSet578 = x3d.IndexedFaceSet()
IndexedFaceSet578.coordIndex = [0,1,10,-1,2,12,17,-1,17,9,2,-1,6,0,11,-1,11,14,6,-1,2,1,7,-1,7,8,2,-1,3,4,19,-1,19,18,3,-1,13,22,20,-1,20,5,13,-1,5,4,10,-1,10,9,5,-1,6,7,1,-1,1,0,6,-1,8,15,12,-1,12,2,8,-1,9,17,13,-1,13,5,9,-1,0,3,16,-1,16,11,0,-1,9,10,1,-1,1,2,9,-1,3,0,10,-1,10,4,3,-1,16,3,18,-1,18,21,16,-1,19,4,5,-1,5,20,19,-1,33,34,35,-1,33,35,36,-1,32,33,36,-1,27,24,25,-1,25,26,27,-1,39,40,41,-1,45,39,41,-1,44,45,41,-1,28,29,23,-1,28,23,24,-1,24,27,28,-1,29,30,31,-1,31,23,29,-1,11,16,24,-1,24,23,11,-1,16,21,25,-1,25,24,16,-1,32,36,37,-1,37,38,32,-1,22,13,27,-1,27,26,22,-1,13,17,28,-1,28,27,13,-1,17,12,29,-1,29,28,17,-1,12,15,30,-1,30,29,12,-1,44,41,42,-1,42,43,44,-1,14,11,23,-1,23,31,14,-1,21,18,33,-1,33,32,21,-1,18,19,34,-1,34,33,18,-1,19,20,35,-1,35,34,19,-1,20,22,36,-1,36,35,20,-1,22,26,37,-1,37,36,22,-1,26,25,38,-1,38,37,26,-1,25,21,32,-1,32,38,25,-1,7,6,40,-1,40,39,7,-1,6,14,41,-1,41,40,6,-1,14,31,42,-1,42,41,14,-1,31,30,43,-1,43,42,31,-1,30,15,44,-1,44,43,30,-1,15,8,45,-1,45,44,15,-1,8,7,39,-1,39,45,8,-1]
IndexedFaceSet578.creaseAngle = 3.14159
IndexedFaceSet578.texCoordIndex = [0,1,10,-1,2,12,17,-1,17,9,2,-1,6,0,11,-1,11,14,6,-1,2,1,7,-1,7,8,2,-1,3,4,19,-1,19,18,3,-1,13,22,20,-1,20,5,13,-1,5,4,10,-1,10,9,5,-1,6,7,1,-1,1,0,6,-1,8,15,12,-1,12,2,8,-1,9,17,13,-1,13,5,9,-1,0,3,16,-1,16,11,0,-1,9,10,1,-1,1,2,9,-1,3,0,10,-1,10,4,3,-1,16,3,18,-1,18,21,16,-1,19,4,5,-1,5,20,19,-1,33,34,35,-1,33,35,36,-1,32,33,36,-1,27,24,25,-1,25,26,27,-1,39,40,41,-1,45,39,41,-1,44,45,41,-1,28,29,11,-1,28,23,24,-1,24,27,28,-1,29,30,31,-1,31,23,29,-1,11,16,24,-1,24,23,11,-1,16,21,25,-1,25,24,16,-1,32,36,37,-1,37,38,32,-1,22,13,27,-1,27,26,22,-1,13,17,28,-1,28,27,13,-1,17,12,29,-1,29,28,17,-1,12,15,30,-1,30,29,12,-1,44,41,42,-1,42,43,44,-1,14,11,23,-1,23,31,14,-1,21,18,33,-1,33,32,21,-1,18,19,34,-1,34,33,18,-1,19,20,35,-1,35,34,19,-1,20,22,36,-1,36,35,20,-1,22,26,37,-1,37,36,22,-1,26,25,38,-1,38,37,26,-1,25,21,32,-1,32,38,25,-1,7,6,40,-1,40,39,7,-1,6,14,41,-1,41,40,6,-1,14,31,42,-1,42,41,14,-1,31,30,43,-1,43,42,31,-1,30,15,44,-1,44,43,30,-1,15,8,45,-1,45,44,15,-1,8,7,39,-1,39,45,8,-1]
Coordinate579 = x3d.Coordinate()

IndexedFaceSet578.coord = Coordinate579
TextureCoordinate580 = x3d.TextureCoordinate()

IndexedFaceSet578.texCoord = TextureCoordinate580

Shape574.geometry = IndexedFaceSet578

Transform573.children.append(Shape574)

HAnimSegment572.children.append(Transform573)

HAnimJoint571.children.append(HAnimSegment572)
HAnimJoint581 = x3d.HAnimJoint()
HAnimJoint581.name = "r_metatarsophalangeal_5"
HAnimJoint581.DEF = "hanim_r_metatarsophalangeal_5"
HAnimJoint581.center = [-0.12368249999999999,0.01695204,0.0865575]
HAnimJoint581.ulimit = [0,0,0]
HAnimJoint581.llimit = [0,0,0]
HAnimSegment582 = x3d.HAnimSegment()
HAnimSegment582.name = "r_tarsal_proximal_phalanx_5"
HAnimSegment582.DEF = "hanim_r_tarsal_proximal_phalanx_5"
Transform583 = x3d.Transform()
Transform583.translation = [-0.12368249999999999,0.01695204,0.0865575]
Shape584 = x3d.Shape()
Appearance585 = x3d.Appearance()
Material586 = x3d.Material()
Material586.diffuseColor = [0.588,0.588,0.588]

Appearance585.material = Material586
ImageTexture587 = x3d.ImageTexture()
ImageTexture587.USE = "JinLOA4TextureAtlas"

Appearance585.texture = ImageTexture587

Shape584.appearance = Appearance585
IndexedFaceSet588 = x3d.IndexedFaceSet()
IndexedFaceSet588.coordIndex = [2,3,11,-1,11,10,2,-1,0,5,14,-1,14,12,0,-1,2,10,13,-1,13,6,2,-1,0,12,11,-1,11,3,0,-1,15,5,0,-1,0,16,15,-1,17,3,2,-1,2,1,17,-1,16,0,3,-1,3,17,16,-1,2,6,4,-1,4,1,2,-1,6,8,4,-1,7,15,18,-1,18,9,7,-1,8,9,18,-1,18,4,8,-1,7,5,15,-1,1,19,20,-1,20,17,1,-1,17,20,21,-1,21,16,17,-1,16,21,22,-1,22,15,16,-1,22,23,18,-1,18,15,22,-1,23,24,4,-1,4,18,23,-1,24,19,1,-1,1,4,24,-1,25,26,27,-1,25,27,28,-1,29,25,28,-1,24,23,22,-1,22,21,20,-1,24,22,20,-1,19,24,20,-1,30,31,32,-1,32,33,30,-1,33,34,35,-1,35,36,30,-1,33,35,30,-1,10,11,26,-1,26,25,10,-1,11,12,27,-1,27,26,11,-1,12,14,28,-1,28,27,12,-1,14,13,29,-1,29,28,14,-1,13,10,25,-1,25,29,13,-1,6,13,31,-1,31,30,6,-1,13,14,32,-1,32,31,13,-1,14,5,33,-1,33,32,14,-1,5,7,34,-1,34,33,5,-1,7,9,35,-1,35,34,7,-1,9,8,36,-1,36,35,9,-1,8,6,30,-1,30,36,8,-1]
IndexedFaceSet588.creaseAngle = 3.14159
IndexedFaceSet588.texCoordIndex = [0,1,24,-1,24,23,0,-1,3,2,27,-1,27,25,3,-1,0,23,26,-1,26,4,0,-1,3,25,24,-1,24,1,3,-1,5,8,7,-1,7,6,5,-1,9,12,11,-1,11,10,9,-1,6,7,14,-1,14,13,6,-1,11,15,17,-1,17,10,11,-1,15,18,17,-1,16,5,20,-1,20,19,16,-1,18,21,22,-1,22,17,18,-1,16,8,5,-1,31,34,35,-1,35,30,31,-1,30,35,36,-1,36,29,30,-1,29,36,37,-1,37,28,29,-1,37,38,33,-1,33,28,37,-1,38,39,32,-1,32,33,38,-1,39,34,31,-1,31,32,39,-1,40,41,42,-1,40,42,43,-1,44,40,43,-1,39,38,37,-1,37,36,35,-1,39,37,35,-1,34,39,35,-1,45,46,47,-1,47,48,45,-1,48,49,50,-1,50,51,45,-1,48,50,45,-1,23,24,41,-1,41,40,23,-1,24,25,42,-1,42,41,24,-1,25,27,43,-1,43,42,25,-1,27,26,44,-1,44,43,27,-1,26,23,40,-1,40,44,26,-1,4,26,46,-1,46,45,4,-1,26,27,47,-1,47,46,26,-1,27,2,48,-1,48,47,27,-1,8,16,49,-1,49,48,8,-1,16,19,50,-1,50,49,16,-1,21,18,51,-1,51,50,21,-1,18,15,45,-1,45,51,18,-1]
Coordinate589 = x3d.Coordinate()

IndexedFaceSet588.coord = Coordinate589
TextureCoordinate590 = x3d.TextureCoordinate()

IndexedFaceSet588.texCoord = TextureCoordinate590

Shape584.geometry = IndexedFaceSet588

Transform583.children.append(Shape584)

HAnimSegment582.children.append(Transform583)

HAnimJoint581.children.append(HAnimSegment582)
HAnimJoint591 = x3d.HAnimJoint()
HAnimJoint591.name = "r_tarsal_proximal_interphalangeal_5"
HAnimJoint591.DEF = "hanim_r_tarsal_proximal_interphalangeal_5"
HAnimJoint591.center = [-0.126,0.01346175,0.09414]
HAnimJoint591.ulimit = [0,0,0]
HAnimJoint591.llimit = [0,0,0]
HAnimSegment592 = x3d.HAnimSegment()
HAnimSegment592.name = "r_tarsal_middle_phalanx_5"
HAnimSegment592.DEF = "hanim_r_tarsal_middle_phalanx_5"
Transform593 = x3d.Transform()
Transform593.translation = [-0.126,0.01346175,0.09414]
Shape594 = x3d.Shape()
Appearance595 = x3d.Appearance()
Material596 = x3d.Material()
Material596.diffuseColor = [0.588,0.588,0.588]

Appearance595.material = Material596
ImageTexture597 = x3d.ImageTexture()
ImageTexture597.USE = "JinLOA4TextureAtlas"

Appearance595.texture = ImageTexture597

Shape594.appearance = Appearance595
IndexedFaceSet598 = x3d.IndexedFaceSet()
IndexedFaceSet598.coordIndex = [6,0,1,-1,1,7,6,-1,7,1,2,-1,2,8,7,-1,8,2,3,-1,3,9,8,-1,3,4,10,-1,10,9,3,-1,4,5,11,-1,11,10,4,-1,5,0,6,-1,6,11,5,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1,1,0,19,-1,19,18,1,-1,0,5,20,-1,20,19,0,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,1,18,-1,18,23,2,-1]
IndexedFaceSet598.creaseAngle = 3.14159
IndexedFaceSet598.texCoordIndex = [6,1,0,-1,0,7,6,-1,7,0,2,-1,2,8,7,-1,8,2,3,-1,3,9,8,-1,3,4,10,-1,10,9,3,-1,4,5,11,-1,11,10,4,-1,5,1,6,-1,6,11,5,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1,0,1,19,-1,19,18,0,-1,1,5,20,-1,20,19,1,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,18,-1,18,23,2,-1]
Coordinate599 = x3d.Coordinate()

IndexedFaceSet598.coord = Coordinate599
TextureCoordinate600 = x3d.TextureCoordinate()

IndexedFaceSet598.texCoord = TextureCoordinate600

Shape594.geometry = IndexedFaceSet598

Transform593.children.append(Shape594)

HAnimSegment592.children.append(Transform593)

HAnimJoint591.children.append(HAnimSegment592)
HAnimJoint601 = x3d.HAnimJoint()
HAnimJoint601.name = "r_tarsal_distal_interphalangeal_5"
HAnimJoint601.DEF = "hanim_r_tarsal_distal_interphalangeal_5"
HAnimJoint601.center = [-0.1269225,0.01061874,0.10187999999999998]
HAnimJoint601.ulimit = [0,0,0]
HAnimJoint601.llimit = [0,0,0]
HAnimSegment602 = x3d.HAnimSegment()
HAnimSegment602.name = "r_tarsal_distal_phalanx_5"
HAnimSegment602.DEF = "hanim_r_tarsal_distal_phalanx_5"
Transform603 = x3d.Transform()
Transform603.translation = [-0.1269225,0.01061874,0.10187999999999998]
Shape604 = x3d.Shape()
Appearance605 = x3d.Appearance()
Material606 = x3d.Material()
Material606.diffuseColor = [0.588,0.588,0.588]

Appearance605.material = Material606
ImageTexture607 = x3d.ImageTexture()
ImageTexture607.USE = "JinLOA4TextureAtlas"

Appearance605.texture = ImageTexture607

Shape604.appearance = Appearance605
IndexedFaceSet608 = x3d.IndexedFaceSet()
IndexedFaceSet608.coordIndex = [2,1,4,-1,4,3,2,-1,0,5,4,-1,4,1,0,-1,7,6,0,-1,0,1,7,-1,2,8,7,-1,7,1,2,-1,9,8,2,-1,2,3,9,-1,10,9,3,-1,3,4,10,-1,5,11,10,-1,10,4,5,-1,0,6,11,-1,11,5,0,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1]
IndexedFaceSet608.creaseAngle = 3.14159
IndexedFaceSet608.texCoordIndex = [1,0,3,-1,3,2,1,-1,5,4,3,-1,3,0,5,-1,9,8,5,-1,5,0,9,-1,1,10,9,-1,9,0,1,-1,12,11,7,-1,7,6,12,-1,14,13,2,-1,2,3,14,-1,4,15,14,-1,14,3,4,-1,5,8,15,-1,15,4,5,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,11,12,19,-1,19,18,11,-1,13,14,20,-1,20,19,13,-1,14,15,21,-1,21,20,14,-1,15,8,16,-1,16,21,15,-1]
Coordinate609 = x3d.Coordinate()

IndexedFaceSet608.coord = Coordinate609
TextureCoordinate610 = x3d.TextureCoordinate()

IndexedFaceSet608.texCoord = TextureCoordinate610

Shape604.geometry = IndexedFaceSet608

Transform603.children.append(Shape604)

HAnimSegment602.children.append(Transform603)

HAnimJoint601.children.append(HAnimSegment602)

HAnimJoint591.children.append(HAnimJoint601)

HAnimJoint581.children.append(HAnimJoint591)

HAnimJoint571.children.append(HAnimJoint581)

HAnimJoint521.children.append(HAnimJoint571)

HAnimJoint511.children.append(HAnimJoint521)

HAnimJoint351.children.append(HAnimJoint511)

HAnimJoint341.children.append(HAnimJoint351)

HAnimJoint331.children.append(HAnimJoint341)

HAnimJoint41.children.append(HAnimJoint331)
HAnimJoint611 = x3d.HAnimJoint()
HAnimJoint611.name = "vl5"
HAnimJoint611.DEF = "hanim_vl5"
HAnimJoint611.center = [0,1.1475270279,-0.01376325]
HAnimJoint611.ulimit = [0,0,0]
HAnimJoint611.llimit = [0,0,0]
HAnimSegment612 = x3d.HAnimSegment()
HAnimSegment612.name = "l5"
HAnimSegment612.DEF = "hanim_l5"
Transform613 = x3d.Transform()
Transform613.translation = [0,1.1475270279,-0.01376325]
Shape614 = x3d.Shape()
Appearance615 = x3d.Appearance()
Material616 = x3d.Material()
Material616.diffuseColor = [0.588,0.588,0.588]

Appearance615.material = Material616
ImageTexture617 = x3d.ImageTexture()
ImageTexture617.USE = "JinLOA4TextureAtlas"

Appearance615.texture = ImageTexture617

Shape614.appearance = Appearance615
IndexedFaceSet618 = x3d.IndexedFaceSet()
IndexedFaceSet618.coordIndex = [0,10,11,-1,11,5,0,-1,1,0,5,-1,5,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,1,6,-1,6,9,4,-1,2,7,26,-1,26,27,2,-1,8,5,11,-1,11,7,8,-1,9,6,5,-1,5,8,9,-1,11,10,13,-1,13,12,11,-1,7,11,12,-1,12,26,7,-1,16,15,14,-1,14,17,16,-1,19,18,15,-1,15,16,19,-1,22,21,20,-1,20,23,22,-1,23,20,24,-1,24,25,23,-1,25,24,18,-1,18,19,25,-1,22,27,26,-1,26,21,22,-1,20,21,14,-1,14,15,20,-1,24,20,15,-1,15,18,24,-1,14,12,13,-1,13,17,14,-1,21,26,12,-1,12,14,21,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,10,0,29,-1,29,28,10,-1,0,1,30,-1,30,29,0,-1,1,4,31,-1,31,30,1,-1,4,3,32,-1,32,31,4,-1,3,2,33,-1,33,32,3,-1,2,27,34,-1,34,33,2,-1,27,22,35,-1,35,34,27,-1,22,23,36,-1,36,35,22,-1,23,25,37,-1,37,36,23,-1,25,19,38,-1,38,37,25,-1,19,16,39,-1,39,38,19,-1,16,17,40,-1,40,39,16,-1,17,13,41,-1,41,40,17,-1,13,10,28,-1,28,41,13,-1]
IndexedFaceSet618.creaseAngle = 3.14159
IndexedFaceSet618.texCoordIndex = [1,0,6,-1,6,7,1,-1,2,1,7,-1,7,8,2,-1,4,3,9,-1,9,10,4,-1,3,5,11,-1,11,9,3,-1,5,2,8,-1,8,11,5,-1,12,13,15,-1,15,14,12,-1,9,7,6,-1,6,10,9,-1,11,8,7,-1,7,9,11,-1,6,0,17,-1,17,18,6,-1,10,6,18,-1,18,16,10,-1,21,20,19,-1,19,22,21,-1,24,23,20,-1,20,21,24,-1,27,26,25,-1,25,28,27,-1,28,25,29,-1,29,30,28,-1,30,29,23,-1,23,24,30,-1,31,34,33,-1,33,32,31,-1,25,26,19,-1,19,20,25,-1,29,25,20,-1,20,23,29,-1,19,35,36,-1,36,22,19,-1,26,37,35,-1,35,19,26,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,44,45,46,-1,43,44,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,43,46,50,-1,39,43,50,-1,39,50,51,-1,39,51,38,-1,0,1,39,-1,39,38,0,-1,1,2,40,-1,40,39,1,-1,2,5,41,-1,41,40,2,-1,5,3,42,-1,42,41,5,-1,3,4,43,-1,43,42,3,-1,12,14,44,-1,44,43,12,-1,34,31,45,-1,45,44,34,-1,27,28,46,-1,46,45,27,-1,28,30,47,-1,47,46,28,-1,30,24,48,-1,48,47,30,-1,24,21,49,-1,49,48,24,-1,21,22,50,-1,50,49,21,-1,22,36,51,-1,51,50,22,-1,17,0,38,-1,38,51,17,-1]
Coordinate619 = x3d.Coordinate()

IndexedFaceSet618.coord = Coordinate619
TextureCoordinate620 = x3d.TextureCoordinate()

IndexedFaceSet618.texCoord = TextureCoordinate620

Shape614.geometry = IndexedFaceSet618

Transform613.children.append(Shape614)

HAnimSegment612.children.append(Transform613)

HAnimJoint611.children.append(HAnimSegment612)
HAnimJoint621 = x3d.HAnimJoint()
HAnimJoint621.name = "vl4"
HAnimJoint621.DEF = "hanim_vl4"
HAnimJoint621.center = [0,1.1776589721000001,-0.01376325]
HAnimJoint621.ulimit = [0,0,0]
HAnimJoint621.llimit = [0,0,0]
HAnimSegment622 = x3d.HAnimSegment()
HAnimSegment622.name = "l4"
HAnimSegment622.DEF = "hanim_l4"
Transform623 = x3d.Transform()
Transform623.translation = [0,1.1776589721000001,-0.01376325]
Shape624 = x3d.Shape()
Appearance625 = x3d.Appearance()
Material626 = x3d.Material()
Material626.diffuseColor = [0.588,0.588,0.588]

Appearance625.material = Material626
ImageTexture627 = x3d.ImageTexture()
ImageTexture627.USE = "JinLOA4TextureAtlas"

Appearance625.texture = ImageTexture627

Shape624.appearance = Appearance625
IndexedFaceSet628 = x3d.IndexedFaceSet()
IndexedFaceSet628.coordIndex = [11,6,0,-1,0,3,11,-1,7,1,0,-1,0,6,7,-1,9,8,2,-1,2,4,9,-1,10,9,4,-1,4,5,10,-1,10,5,1,-1,1,7,10,-1,25,11,3,-1,3,26,25,-1,2,8,12,-1,12,27,2,-1,13,16,15,-1,15,14,13,-1,17,14,15,-1,15,18,17,-1,19,22,21,-1,21,20,19,-1,23,24,22,-1,22,19,23,-1,23,17,18,-1,18,24,23,-1,25,26,16,-1,16,13,25,-1,21,27,12,-1,12,20,21,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,48,50,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,48,51,55,-1,44,48,55,-1,43,44,55,-1,43,55,42,-1,3,0,29,-1,29,28,3,-1,0,1,30,-1,30,29,0,-1,1,5,31,-1,31,30,1,-1,5,4,32,-1,32,31,5,-1,4,2,33,-1,33,32,4,-1,2,27,34,-1,34,33,2,-1,27,21,35,-1,35,34,27,-1,21,22,36,-1,36,35,21,-1,22,24,37,-1,37,36,22,-1,24,18,38,-1,38,37,24,-1,18,15,39,-1,39,38,18,-1,15,16,40,-1,40,39,15,-1,16,26,41,-1,41,40,16,-1,26,3,28,-1,28,41,26,-1,6,11,43,-1,43,42,6,-1,11,25,44,-1,44,43,11,-1,25,13,45,-1,45,44,25,-1,13,14,46,-1,46,45,13,-1,14,17,47,-1,47,46,14,-1,17,23,48,-1,48,47,17,-1,23,19,49,-1,49,48,23,-1,19,20,50,-1,50,49,19,-1,20,12,51,-1,51,50,20,-1,12,8,52,-1,52,51,12,-1,8,9,53,-1,53,52,8,-1,9,10,54,-1,54,53,9,-1,10,7,55,-1,55,54,10,-1,7,6,42,-1,42,55,7,-1]
IndexedFaceSet628.creaseAngle = 3.14159
IndexedFaceSet628.texCoordIndex = [15,9,0,-1,0,4,15,-1,10,1,0,-1,0,9,10,-1,13,12,2,-1,2,5,13,-1,14,13,5,-1,5,6,14,-1,14,6,1,-1,1,10,14,-1,17,15,4,-1,4,7,17,-1,3,11,16,-1,16,8,3,-1,18,21,20,-1,20,19,18,-1,22,19,20,-1,20,23,22,-1,24,27,26,-1,26,25,24,-1,28,29,27,-1,27,24,28,-1,28,22,23,-1,23,29,28,-1,30,31,21,-1,21,18,30,-1,32,35,34,-1,34,33,32,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,37,41,48,-1,37,48,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,52,54,56,-1,56,57,58,-1,56,58,59,-1,59,60,61,-1,61,62,63,-1,59,61,63,-1,56,59,63,-1,52,56,63,-1,51,52,63,-1,51,63,50,-1,4,0,37,-1,37,36,4,-1,0,1,38,-1,38,37,0,-1,1,6,39,-1,39,38,1,-1,6,5,40,-1,40,39,6,-1,5,2,41,-1,41,40,5,-1,3,8,42,-1,42,41,3,-1,35,32,43,-1,43,42,35,-1,26,27,44,-1,44,43,26,-1,27,29,45,-1,45,44,27,-1,29,23,46,-1,46,45,29,-1,23,20,47,-1,47,46,23,-1,20,21,48,-1,48,47,20,-1,21,31,49,-1,49,48,21,-1,7,4,36,-1,36,49,7,-1,9,15,51,-1,51,50,9,-1,15,17,52,-1,52,51,15,-1,30,18,53,-1,53,52,30,-1,18,19,54,-1,54,53,18,-1,19,22,55,-1,55,54,19,-1,22,28,56,-1,56,55,22,-1,28,24,57,-1,57,56,28,-1,24,25,58,-1,58,57,24,-1,33,34,59,-1,59,58,33,-1,16,11,60,-1,60,59,16,-1,12,13,61,-1,61,60,12,-1,13,14,62,-1,62,61,13,-1,14,10,63,-1,63,62,14,-1,10,9,50,-1,50,63,10,-1]
Coordinate629 = x3d.Coordinate()

IndexedFaceSet628.coord = Coordinate629
TextureCoordinate630 = x3d.TextureCoordinate()

IndexedFaceSet628.texCoord = TextureCoordinate630

Shape624.geometry = IndexedFaceSet628

Transform623.children.append(Shape624)

HAnimSegment622.children.append(Transform623)

HAnimJoint621.children.append(HAnimSegment622)
HAnimJoint631 = x3d.HAnimJoint()
HAnimJoint631.name = "vl3"
HAnimJoint631.DEF = "hanim_vl3"
HAnimJoint631.center = [0,1.1977470000000001,-0.01376325]
HAnimJoint631.ulimit = [0,0,0]
HAnimJoint631.llimit = [0,0,0]
HAnimSegment632 = x3d.HAnimSegment()
HAnimSegment632.name = "l3"
HAnimSegment632.DEF = "hanim_l3"
Transform633 = x3d.Transform()
Transform633.translation = [0,1.1977470000000001,-0.01376325]
Shape634 = x3d.Shape()
Appearance635 = x3d.Appearance()
Material636 = x3d.Material()
Material636.diffuseColor = [0.588,0.588,0.588]

Appearance635.material = Material636
ImageTexture637 = x3d.ImageTexture()
ImageTexture637.USE = "JinLOA4TextureAtlas"

Appearance635.texture = ImageTexture637

Shape634.appearance = Appearance635
IndexedFaceSet638 = x3d.IndexedFaceSet()
IndexedFaceSet638.coordIndex = [1,8,15,-1,15,16,1,-1,0,4,9,-1,9,6,0,-1,7,5,0,-1,0,6,7,-1,1,2,10,-1,10,8,1,-1,2,3,11,-1,11,10,2,-1,11,3,5,-1,5,7,11,-1,4,27,12,-1,12,9,4,-1,13,16,15,-1,15,14,13,-1,18,17,20,-1,20,19,18,-1,21,17,18,-1,18,22,21,-1,13,14,24,-1,24,23,13,-1,23,24,26,-1,26,25,23,-1,26,21,22,-1,22,25,26,-1,19,20,12,-1,12,27,19,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,48,50,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,48,51,55,-1,44,48,55,-1,43,44,55,-1,43,55,42,-1,4,0,29,-1,29,28,4,-1,0,5,30,-1,30,29,0,-1,5,3,31,-1,31,30,5,-1,3,2,32,-1,32,31,3,-1,2,1,33,-1,33,32,2,-1,1,16,34,-1,34,33,1,-1,16,13,35,-1,35,34,16,-1,13,23,36,-1,36,35,13,-1,23,25,37,-1,37,36,23,-1,25,22,38,-1,38,37,25,-1,22,18,39,-1,39,38,22,-1,18,19,40,-1,40,39,18,-1,19,27,41,-1,41,40,19,-1,27,4,28,-1,28,41,27,-1,6,9,43,-1,43,42,6,-1,9,12,44,-1,44,43,9,-1,12,20,45,-1,45,44,12,-1,20,17,46,-1,46,45,20,-1,17,21,47,-1,47,46,17,-1,21,26,48,-1,48,47,21,-1,26,24,49,-1,49,48,26,-1,24,14,50,-1,50,49,24,-1,14,15,51,-1,51,50,14,-1,15,8,52,-1,52,51,15,-1,8,10,53,-1,53,52,8,-1,10,11,54,-1,54,53,10,-1,11,7,55,-1,55,54,11,-1,7,6,42,-1,42,55,7,-1]
IndexedFaceSet638.creaseAngle = 3.14159
IndexedFaceSet638.texCoordIndex = [4,11,17,-1,17,7,4,-1,0,1,13,-1,13,9,0,-1,10,2,0,-1,0,9,10,-1,3,5,14,-1,14,12,3,-1,5,6,15,-1,15,14,5,-1,15,6,2,-1,2,10,15,-1,1,8,16,-1,16,13,1,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,26,22,23,-1,23,27,26,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,33,26,27,-1,27,32,33,-1,24,25,35,-1,35,34,24,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,37,41,48,-1,37,48,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,52,54,56,-1,56,57,58,-1,56,58,59,-1,59,60,61,-1,61,62,63,-1,59,61,63,-1,56,59,63,-1,52,56,63,-1,51,52,63,-1,51,63,50,-1,1,0,37,-1,37,36,1,-1,0,2,38,-1,38,37,0,-1,2,6,39,-1,39,38,2,-1,6,5,40,-1,40,39,6,-1,5,3,41,-1,41,40,5,-1,4,7,42,-1,42,41,4,-1,21,18,43,-1,43,42,21,-1,29,30,44,-1,44,43,29,-1,30,32,45,-1,45,44,30,-1,32,27,46,-1,46,45,32,-1,27,23,47,-1,47,46,27,-1,23,24,48,-1,48,47,23,-1,24,34,49,-1,49,48,24,-1,8,1,36,-1,36,49,8,-1,9,13,51,-1,51,50,9,-1,13,16,52,-1,52,51,13,-1,35,25,53,-1,53,52,35,-1,25,22,54,-1,54,53,25,-1,22,26,55,-1,55,54,22,-1,26,33,56,-1,56,55,26,-1,33,31,57,-1,57,56,33,-1,31,28,58,-1,58,57,31,-1,19,20,59,-1,59,58,19,-1,17,11,60,-1,60,59,17,-1,12,14,61,-1,61,60,12,-1,14,15,62,-1,62,61,14,-1,15,10,63,-1,63,62,15,-1,10,9,50,-1,50,63,10,-1]
Coordinate639 = x3d.Coordinate()

IndexedFaceSet638.coord = Coordinate639
TextureCoordinate640 = x3d.TextureCoordinate()

IndexedFaceSet638.texCoord = TextureCoordinate640

Shape634.geometry = IndexedFaceSet638

Transform633.children.append(Shape634)

HAnimSegment632.children.append(Transform633)

HAnimJoint631.children.append(HAnimSegment632)
HAnimJoint641 = x3d.HAnimJoint()
HAnimJoint641.name = "vl2"
HAnimJoint641.DEF = "hanim_vl2"
HAnimJoint641.center = [0,1.218114,-0.01376325]
HAnimJoint641.ulimit = [0,0,0]
HAnimJoint641.llimit = [0,0,0]
HAnimSegment642 = x3d.HAnimSegment()
HAnimSegment642.name = "l2"
HAnimSegment642.DEF = "hanim_l2"
Transform643 = x3d.Transform()
Transform643.translation = [0,1.218114,-0.01376325]
Shape644 = x3d.Shape()
Appearance645 = x3d.Appearance()
Material646 = x3d.Material()
Material646.diffuseColor = [0.588,0.588,0.588]

Appearance645.material = Material646
ImageTexture647 = x3d.ImageTexture()
ImageTexture647.USE = "JinLOA4TextureAtlas"

Appearance645.texture = ImageTexture647

Shape644.appearance = Appearance645
IndexedFaceSet648 = x3d.IndexedFaceSet()
IndexedFaceSet648.coordIndex = [3,7,14,-1,14,15,3,-1,0,5,10,-1,10,6,0,-1,11,2,0,-1,0,6,11,-1,3,4,8,-1,8,7,3,-1,4,1,9,-1,9,8,4,-1,9,1,2,-1,2,11,9,-1,5,26,27,-1,27,10,5,-1,12,15,14,-1,14,13,12,-1,17,16,19,-1,19,18,17,-1,20,16,17,-1,17,21,20,-1,12,13,23,-1,23,22,12,-1,22,23,25,-1,25,24,22,-1,25,20,21,-1,21,24,25,-1,18,19,27,-1,27,26,18,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,48,50,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,48,51,55,-1,44,48,55,-1,43,44,55,-1,43,55,42,-1,5,0,29,-1,29,28,5,-1,0,2,30,-1,30,29,0,-1,2,1,31,-1,31,30,2,-1,1,4,32,-1,32,31,1,-1,4,3,33,-1,33,32,4,-1,3,15,34,-1,34,33,3,-1,15,12,35,-1,35,34,15,-1,12,22,36,-1,36,35,12,-1,22,24,37,-1,37,36,22,-1,24,21,38,-1,38,37,24,-1,21,17,39,-1,39,38,21,-1,17,18,40,-1,40,39,17,-1,18,26,41,-1,41,40,18,-1,26,5,28,-1,28,41,26,-1,6,10,43,-1,43,42,6,-1,10,27,44,-1,44,43,10,-1,27,19,45,-1,45,44,27,-1,19,16,46,-1,46,45,19,-1,16,20,47,-1,47,46,16,-1,20,25,48,-1,48,47,20,-1,25,23,49,-1,49,48,25,-1,23,13,50,-1,50,49,23,-1,13,14,51,-1,51,50,13,-1,14,7,52,-1,52,51,14,-1,7,8,53,-1,53,52,7,-1,8,9,54,-1,54,53,8,-1,9,11,55,-1,55,54,9,-1,11,6,42,-1,42,55,11,-1]
IndexedFaceSet648.creaseAngle = 3.14159
IndexedFaceSet648.texCoordIndex = [6,10,16,-1,16,7,6,-1,1,0,14,-1,14,9,1,-1,15,2,1,-1,1,9,15,-1,4,3,12,-1,12,11,4,-1,3,5,13,-1,13,12,3,-1,13,5,2,-1,2,15,13,-1,0,8,17,-1,17,14,0,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,26,22,23,-1,23,27,26,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,33,26,27,-1,27,32,33,-1,24,25,35,-1,35,34,24,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,52,54,56,-1,56,57,58,-1,56,58,59,-1,59,60,61,-1,61,62,63,-1,59,61,63,-1,56,59,63,-1,52,56,63,-1,51,52,63,-1,51,63,50,-1,0,1,37,-1,37,36,0,-1,1,2,38,-1,38,37,1,-1,2,5,39,-1,39,38,2,-1,5,3,40,-1,40,39,5,-1,3,4,41,-1,41,40,3,-1,6,7,42,-1,42,41,6,-1,21,18,43,-1,43,42,21,-1,29,30,44,-1,44,43,29,-1,30,32,45,-1,45,44,30,-1,32,27,46,-1,46,45,32,-1,27,23,47,-1,47,46,27,-1,23,24,48,-1,48,47,23,-1,24,34,49,-1,49,48,24,-1,8,0,36,-1,36,49,8,-1,9,14,51,-1,51,50,9,-1,14,17,52,-1,52,51,14,-1,35,25,53,-1,53,52,35,-1,25,22,54,-1,54,53,25,-1,22,26,55,-1,55,54,22,-1,26,33,56,-1,56,55,26,-1,33,31,57,-1,57,56,33,-1,31,28,58,-1,58,57,31,-1,19,20,59,-1,59,58,19,-1,16,10,60,-1,60,59,16,-1,11,12,61,-1,61,60,11,-1,12,13,62,-1,62,61,12,-1,13,15,63,-1,63,62,13,-1,15,9,50,-1,50,63,15,-1]
Coordinate649 = x3d.Coordinate()

IndexedFaceSet648.coord = Coordinate649
TextureCoordinate650 = x3d.TextureCoordinate()

IndexedFaceSet648.texCoord = TextureCoordinate650

Shape644.geometry = IndexedFaceSet648

Transform643.children.append(Shape644)

HAnimSegment642.children.append(Transform643)

HAnimJoint641.children.append(HAnimSegment642)
HAnimJoint651 = x3d.HAnimJoint()
HAnimJoint651.name = "vl1"
HAnimJoint651.DEF = "hanim_vl1"
HAnimJoint651.center = [0,1.239597,-0.01376325]
HAnimJoint651.ulimit = [0,0,0]
HAnimJoint651.llimit = [0,0,0]
HAnimSegment652 = x3d.HAnimSegment()
HAnimSegment652.name = "l1"
HAnimSegment652.DEF = "hanim_l1"
Transform653 = x3d.Transform()
Transform653.translation = [0,1.239597,-0.01376325]
Shape654 = x3d.Shape()
Appearance655 = x3d.Appearance()
Material656 = x3d.Material()
Material656.diffuseColor = [0.588,0.588,0.588]

Appearance655.material = Material656
ImageTexture657 = x3d.ImageTexture()
ImageTexture657.USE = "JinLOA4TextureAtlas"

Appearance655.texture = ImageTexture657

Shape654.appearance = Appearance655
IndexedFaceSet658 = x3d.IndexedFaceSet()
IndexedFaceSet658.coordIndex = [7,0,1,-1,1,14,7,-1,11,2,0,-1,0,7,11,-1,13,12,3,-1,3,4,13,-1,8,5,2,-1,2,11,8,-1,14,1,6,-1,6,9,14,-1,8,13,4,-1,4,5,8,-1,12,10,27,-1,27,3,12,-1,16,15,18,-1,18,17,16,-1,19,16,17,-1,17,20,19,-1,21,24,23,-1,23,22,21,-1,25,19,20,-1,20,26,25,-1,15,9,6,-1,6,18,15,-1,25,26,24,-1,24,21,25,-1,22,23,27,-1,27,10,22,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,44,45,46,-1,43,44,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,46,50,54,-1,43,46,54,-1,43,54,55,-1,43,55,42,-1,1,0,29,-1,29,28,1,-1,0,2,30,-1,30,29,0,-1,2,5,31,-1,31,30,2,-1,5,4,32,-1,32,31,5,-1,4,3,33,-1,33,32,4,-1,3,27,34,-1,34,33,3,-1,27,23,35,-1,35,34,27,-1,23,24,36,-1,36,35,23,-1,24,26,37,-1,37,36,24,-1,26,20,38,-1,38,37,26,-1,20,17,39,-1,39,38,20,-1,17,18,40,-1,40,39,17,-1,18,6,41,-1,41,40,18,-1,6,1,28,-1,28,41,6,-1,7,14,43,-1,43,42,7,-1,14,9,44,-1,44,43,14,-1,9,15,45,-1,45,44,9,-1,15,16,46,-1,46,45,15,-1,16,19,47,-1,47,46,16,-1,19,25,48,-1,48,47,19,-1,25,21,49,-1,49,48,25,-1,21,22,50,-1,50,49,21,-1,22,10,51,-1,51,50,22,-1,10,12,52,-1,52,51,10,-1,12,13,53,-1,53,52,12,-1,13,8,54,-1,54,53,13,-1,8,11,55,-1,55,54,8,-1,11,7,42,-1,42,55,11,-1]
IndexedFaceSet658.creaseAngle = 3.14159
IndexedFaceSet658.texCoordIndex = [9,0,1,-1,1,17,9,-1,13,2,0,-1,0,9,13,-1,16,15,3,-1,3,5,16,-1,10,6,2,-1,2,13,10,-1,17,1,8,-1,8,11,17,-1,10,16,5,-1,5,6,10,-1,14,12,7,-1,7,4,14,-1,19,18,21,-1,21,20,19,-1,22,19,20,-1,20,23,22,-1,24,27,26,-1,26,25,24,-1,28,22,23,-1,23,29,28,-1,18,30,31,-1,31,21,18,-1,28,29,27,-1,27,24,28,-1,33,32,35,-1,35,34,33,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,52,53,54,-1,51,52,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,54,58,62,-1,51,54,62,-1,51,62,63,-1,51,63,50,-1,1,0,37,-1,37,36,1,-1,0,2,38,-1,38,37,0,-1,2,6,39,-1,39,38,2,-1,6,5,40,-1,40,39,6,-1,5,3,41,-1,41,40,5,-1,4,7,42,-1,42,41,4,-1,35,32,43,-1,43,42,35,-1,26,27,44,-1,44,43,26,-1,27,29,45,-1,45,44,27,-1,29,23,46,-1,46,45,29,-1,23,20,47,-1,47,46,23,-1,20,21,48,-1,48,47,20,-1,21,31,49,-1,49,48,21,-1,8,1,36,-1,36,49,8,-1,9,17,51,-1,51,50,9,-1,17,11,52,-1,52,51,17,-1,30,18,53,-1,53,52,30,-1,18,19,54,-1,54,53,18,-1,19,22,55,-1,55,54,19,-1,22,28,56,-1,56,55,22,-1,28,24,57,-1,57,56,28,-1,24,25,58,-1,58,57,24,-1,33,34,59,-1,59,58,33,-1,12,14,60,-1,60,59,12,-1,15,16,61,-1,61,60,15,-1,16,10,62,-1,62,61,16,-1,10,13,63,-1,63,62,10,-1,13,9,50,-1,50,63,13,-1]
Coordinate659 = x3d.Coordinate()

IndexedFaceSet658.coord = Coordinate659
TextureCoordinate660 = x3d.TextureCoordinate()

IndexedFaceSet658.texCoord = TextureCoordinate660

Shape654.geometry = IndexedFaceSet658

Transform653.children.append(Shape654)

HAnimSegment652.children.append(Transform653)

HAnimJoint651.children.append(HAnimSegment652)
HAnimJoint661 = x3d.HAnimJoint()
HAnimJoint661.name = "vt12"
HAnimJoint661.DEF = "hanim_vt12"
HAnimJoint661.center = [0,1.2686130279,-0.01376325]
HAnimJoint661.ulimit = [0,0,0]
HAnimJoint661.llimit = [0,0,0]
HAnimSegment662 = x3d.HAnimSegment()
HAnimSegment662.name = "t12"
HAnimSegment662.DEF = "hanim_t12"
Transform663 = x3d.Transform()
Transform663.translation = [0,1.2686130279,-0.01376325]
Shape664 = x3d.Shape()
Appearance665 = x3d.Appearance()
Material666 = x3d.Material()
Material666.diffuseColor = [0.588,0.588,0.588]

Appearance665.material = Material666
ImageTexture667 = x3d.ImageTexture()
ImageTexture667.USE = "JinLOA4TextureAtlas"

Appearance665.texture = ImageTexture667

Shape664.appearance = Appearance665
IndexedFaceSet668 = x3d.IndexedFaceSet()
IndexedFaceSet668.coordIndex = [4,5,11,-1,11,10,4,-1,17,3,9,-1,9,20,17,-1,6,0,2,-1,2,7,6,-1,8,1,0,-1,0,6,8,-1,3,4,10,-1,10,9,3,-1,5,1,8,-1,8,11,5,-1,2,27,12,-1,12,7,2,-1,13,16,15,-1,15,14,13,-1,17,20,19,-1,19,18,17,-1,21,24,23,-1,23,22,21,-1,25,21,22,-1,22,26,25,-1,18,19,16,-1,16,13,18,-1,14,15,25,-1,25,26,14,-1,23,24,12,-1,12,27,23,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,44,45,46,-1,43,44,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,46,50,54,-1,43,46,54,-1,43,54,55,-1,43,55,42,-1,2,0,29,-1,29,28,2,-1,0,1,30,-1,30,29,0,-1,1,5,31,-1,31,30,1,-1,5,4,32,-1,32,31,5,-1,4,3,33,-1,33,32,4,-1,3,17,34,-1,34,33,3,-1,17,18,35,-1,35,34,17,-1,18,13,36,-1,36,35,18,-1,13,14,37,-1,37,36,13,-1,14,26,38,-1,38,37,14,-1,26,22,39,-1,39,38,26,-1,22,23,40,-1,40,39,22,-1,23,27,41,-1,41,40,23,-1,27,2,28,-1,28,41,27,-1,6,7,43,-1,43,42,6,-1,7,12,44,-1,44,43,7,-1,12,24,45,-1,45,44,12,-1,24,21,46,-1,46,45,24,-1,21,25,47,-1,47,46,21,-1,25,15,48,-1,48,47,25,-1,15,16,49,-1,49,48,15,-1,16,19,50,-1,50,49,16,-1,19,20,51,-1,51,50,19,-1,20,9,52,-1,52,51,20,-1,9,10,53,-1,53,52,9,-1,10,11,54,-1,54,53,10,-1,11,8,55,-1,55,54,11,-1,8,6,42,-1,42,55,8,-1]
IndexedFaceSet668.creaseAngle = 3.14159
IndexedFaceSet668.texCoordIndex = [5,6,15,-1,15,14,5,-1,7,4,12,-1,12,16,7,-1,9,0,2,-1,2,10,9,-1,11,1,0,-1,0,9,11,-1,3,5,14,-1,14,13,3,-1,6,1,11,-1,11,15,6,-1,2,8,17,-1,17,10,2,-1,18,21,20,-1,20,19,18,-1,22,25,24,-1,24,23,22,-1,26,29,28,-1,28,27,26,-1,30,26,27,-1,27,31,30,-1,33,32,21,-1,21,18,33,-1,19,20,30,-1,30,31,19,-1,28,29,35,-1,35,34,28,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,52,53,54,-1,51,52,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,54,58,62,-1,51,54,62,-1,51,62,63,-1,51,63,50,-1,2,0,37,-1,37,36,2,-1,0,1,38,-1,38,37,0,-1,1,6,39,-1,39,38,1,-1,6,5,40,-1,40,39,6,-1,5,3,41,-1,41,40,5,-1,4,7,42,-1,42,41,4,-1,22,23,43,-1,43,42,22,-1,33,18,44,-1,44,43,33,-1,18,19,45,-1,45,44,18,-1,19,31,46,-1,46,45,19,-1,31,27,47,-1,47,46,31,-1,27,28,48,-1,48,47,27,-1,28,34,49,-1,49,48,28,-1,8,2,36,-1,36,49,8,-1,9,10,51,-1,51,50,9,-1,10,17,52,-1,52,51,10,-1,35,29,53,-1,53,52,35,-1,29,26,54,-1,54,53,29,-1,26,30,55,-1,55,54,26,-1,30,20,56,-1,56,55,30,-1,20,21,57,-1,57,56,20,-1,21,32,58,-1,58,57,21,-1,24,25,59,-1,59,58,24,-1,16,12,60,-1,60,59,16,-1,13,14,61,-1,61,60,13,-1,14,15,62,-1,62,61,14,-1,15,11,63,-1,63,62,15,-1,11,9,50,-1,50,63,11,-1]
Coordinate669 = x3d.Coordinate()

IndexedFaceSet668.coord = Coordinate669
TextureCoordinate670 = x3d.TextureCoordinate()

IndexedFaceSet668.texCoord = TextureCoordinate670

Shape664.geometry = IndexedFaceSet668

Transform663.children.append(Shape664)

HAnimSegment662.children.append(Transform663)

HAnimJoint661.children.append(HAnimSegment662)
HAnimJoint671 = x3d.HAnimJoint()
HAnimJoint671.name = "vt11"
HAnimJoint671.DEF = "hanim_vt11"
HAnimJoint671.center = [0,1.297908,-0.01376325]
HAnimJoint671.ulimit = [0,0,0]
HAnimJoint671.llimit = [0,0,0]
HAnimSegment672 = x3d.HAnimSegment()
HAnimSegment672.name = "t11"
HAnimSegment672.DEF = "hanim_t11"
Transform673 = x3d.Transform()
Transform673.translation = [0,1.297908,-0.01376325]
Shape674 = x3d.Shape()
Appearance675 = x3d.Appearance()
Material676 = x3d.Material()
Material676.diffuseColor = [0.588,0.588,0.588]

Appearance675.material = Material676
ImageTexture677 = x3d.ImageTexture()
ImageTexture677.USE = "JinLOA4TextureAtlas"

Appearance675.texture = ImageTexture677

Shape674.appearance = Appearance675
IndexedFaceSet678 = x3d.IndexedFaceSet()
IndexedFaceSet678.coordIndex = [4,3,10,-1,10,12,4,-1,5,4,12,-1,12,13,5,-1,5,13,9,-1,9,1,5,-1,6,11,14,-1,14,7,6,-1,7,2,0,-1,0,6,7,-1,11,6,0,-1,0,8,11,-1,3,28,29,-1,29,10,3,-1,8,0,1,-1,1,9,8,-1,15,18,17,-1,17,16,15,-1,19,20,18,-1,18,15,19,-1,19,21,22,-1,22,20,19,-1,23,7,14,-1,14,24,23,-1,7,23,25,-1,25,26,7,-1,24,27,25,-1,25,23,24,-1,16,17,29,-1,29,28,16,-1,27,22,21,-1,21,25,27,-1,32,33,34,-1,31,32,34,-1,34,35,36,-1,36,37,38,-1,34,36,38,-1,38,39,40,-1,40,41,42,-1,38,40,42,-1,34,38,42,-1,31,34,42,-1,31,42,43,-1,31,43,30,-1,45,46,47,-1,47,48,49,-1,49,50,51,-1,47,49,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,47,51,55,-1,55,56,57,-1,47,55,57,-1,45,47,57,-1,45,57,44,-1,0,2,31,-1,31,30,0,-1,2,7,32,-1,32,31,2,-1,7,26,33,-1,33,32,7,-1,26,25,34,-1,34,33,26,-1,25,21,35,-1,35,34,25,-1,21,19,36,-1,36,35,21,-1,19,15,37,-1,37,36,19,-1,15,16,38,-1,38,37,15,-1,16,28,39,-1,39,38,16,-1,28,3,40,-1,40,39,28,-1,3,4,41,-1,41,40,3,-1,4,5,42,-1,42,41,4,-1,5,1,43,-1,43,42,5,-1,1,0,30,-1,30,43,1,-1,12,10,45,-1,45,44,12,-1,10,29,46,-1,46,45,10,-1,29,17,47,-1,47,46,29,-1,17,18,48,-1,48,47,17,-1,18,20,49,-1,49,48,18,-1,20,22,50,-1,50,49,20,-1,22,27,51,-1,51,50,22,-1,27,24,52,-1,52,51,27,-1,24,14,53,-1,53,52,24,-1,14,11,54,-1,54,53,14,-1,11,8,55,-1,55,54,11,-1,8,9,56,-1,56,55,8,-1,9,13,57,-1,57,56,9,-1,13,12,44,-1,44,57,13,-1]
IndexedFaceSet678.creaseAngle = 3.14159
IndexedFaceSet678.texCoordIndex = [6,5,14,-1,14,16,6,-1,7,6,16,-1,16,17,7,-1,7,17,12,-1,12,3,7,-1,8,15,18,-1,18,10,8,-1,10,0,1,-1,1,8,10,-1,15,8,2,-1,2,11,15,-1,4,9,19,-1,19,13,4,-1,11,2,3,-1,3,12,11,-1,20,23,22,-1,22,21,20,-1,24,25,23,-1,23,20,24,-1,24,26,27,-1,27,25,24,-1,29,28,31,-1,31,30,29,-1,28,29,32,-1,32,33,28,-1,30,35,34,-1,34,29,30,-1,37,36,39,-1,39,38,37,-1,35,27,26,-1,26,34,35,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,50,51,52,-1,48,50,52,-1,44,48,52,-1,41,44,52,-1,41,52,53,-1,41,53,40,-1,55,56,57,-1,57,58,59,-1,59,60,61,-1,57,59,61,-1,61,62,63,-1,63,64,65,-1,61,63,65,-1,57,61,65,-1,65,66,67,-1,57,65,67,-1,55,57,67,-1,55,67,54,-1,1,0,41,-1,41,40,1,-1,0,10,42,-1,42,41,0,-1,28,33,43,-1,43,42,28,-1,33,32,44,-1,44,43,33,-1,34,26,45,-1,45,44,34,-1,26,24,46,-1,46,45,26,-1,24,20,47,-1,47,46,24,-1,20,21,48,-1,48,47,20,-1,37,38,49,-1,49,48,37,-1,9,4,50,-1,50,49,9,-1,5,6,51,-1,51,50,5,-1,6,7,52,-1,52,51,6,-1,7,3,53,-1,53,52,7,-1,3,2,40,-1,40,53,3,-1,16,14,55,-1,55,54,16,-1,13,19,56,-1,56,55,13,-1,39,36,57,-1,57,56,39,-1,22,23,58,-1,58,57,22,-1,23,25,59,-1,59,58,23,-1,25,27,60,-1,60,59,25,-1,27,35,61,-1,61,60,27,-1,35,30,62,-1,62,61,35,-1,30,31,63,-1,63,62,30,-1,18,15,64,-1,64,63,18,-1,15,11,65,-1,65,64,15,-1,11,12,66,-1,66,65,11,-1,12,17,67,-1,67,66,12,-1,17,16,54,-1,54,67,17,-1]
Coordinate679 = x3d.Coordinate()

IndexedFaceSet678.coord = Coordinate679
TextureCoordinate680 = x3d.TextureCoordinate()

IndexedFaceSet678.texCoord = TextureCoordinate680

Shape674.geometry = IndexedFaceSet678

Transform673.children.append(Shape674)

HAnimSegment672.children.append(Transform673)

HAnimJoint671.children.append(HAnimSegment672)
HAnimJoint681 = x3d.HAnimJoint()
HAnimJoint681.name = "vt10"
HAnimJoint681.DEF = "hanim_vt10"
HAnimJoint681.center = [0,1.3191119721,-0.01378575]
HAnimJoint681.ulimit = [0,0,0]
HAnimJoint681.llimit = [0,0,0]
HAnimSegment682 = x3d.HAnimSegment()
HAnimSegment682.name = "t10"
HAnimSegment682.DEF = "hanim_t10"
Transform683 = x3d.Transform()
Transform683.translation = [0,1.3191119721,-0.01378575]
Shape684 = x3d.Shape()
Appearance685 = x3d.Appearance()
Material686 = x3d.Material()
Material686.diffuseColor = [0.588,0.588,0.588]

Appearance685.material = Material686
ImageTexture687 = x3d.ImageTexture()
ImageTexture687.USE = "JinLOA4TextureAtlas"

Appearance685.texture = ImageTexture687

Shape684.appearance = Appearance685
IndexedFaceSet688 = x3d.IndexedFaceSet()
IndexedFaceSet688.coordIndex = [11,7,4,-1,4,2,11,-1,7,8,5,-1,5,4,7,-1,8,10,1,-1,1,5,8,-1,3,6,12,-1,12,23,3,-1,6,3,0,-1,0,9,6,-1,2,26,27,-1,27,11,2,-1,0,1,10,-1,10,9,0,-1,14,13,16,-1,16,15,14,-1,15,16,18,-1,18,17,15,-1,17,18,20,-1,20,19,17,-1,21,23,12,-1,12,22,21,-1,22,25,24,-1,24,21,22,-1,13,14,27,-1,27,26,13,-1,24,25,19,-1,19,20,24,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,42,-1,50,54,42,-1,46,50,42,-1,44,46,42,-1,43,44,42,-1,2,4,29,-1,29,28,2,-1,4,5,30,-1,30,29,4,-1,5,1,31,-1,31,30,5,-1,1,0,32,-1,32,31,1,-1,0,3,33,-1,33,32,0,-1,3,23,34,-1,34,33,3,-1,23,21,35,-1,35,34,23,-1,21,24,36,-1,36,35,21,-1,24,20,37,-1,37,36,24,-1,20,18,38,-1,38,37,20,-1,18,16,39,-1,39,38,18,-1,16,13,40,-1,40,39,16,-1,13,26,41,-1,41,40,13,-1,26,2,28,-1,28,41,26,-1,6,9,43,-1,43,42,6,-1,9,10,44,-1,44,43,9,-1,10,8,45,-1,45,44,10,-1,8,7,46,-1,46,45,8,-1,7,11,47,-1,47,46,7,-1,11,27,48,-1,48,47,11,-1,27,14,49,-1,49,48,27,-1,14,15,50,-1,50,49,14,-1,15,17,51,-1,51,50,15,-1,17,19,52,-1,52,51,17,-1,19,25,53,-1,53,52,19,-1,25,22,54,-1,54,53,25,-1,22,12,55,-1,55,54,22,-1,12,6,42,-1,42,55,12,-1]
IndexedFaceSet688.creaseAngle = 3.14159
IndexedFaceSet688.texCoordIndex = [15,10,5,-1,5,2,15,-1,10,11,6,-1,6,5,10,-1,11,14,1,-1,1,6,11,-1,4,9,17,-1,17,7,4,-1,9,4,0,-1,0,13,9,-1,3,8,12,-1,12,16,3,-1,0,1,14,-1,14,13,0,-1,19,18,21,-1,21,20,19,-1,20,21,23,-1,23,22,20,-1,22,23,25,-1,25,24,22,-1,26,29,28,-1,28,27,26,-1,27,31,30,-1,30,26,27,-1,33,32,35,-1,35,34,33,-1,30,31,24,-1,24,25,30,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,37,41,48,-1,37,48,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,62,63,50,-1,58,62,50,-1,54,58,50,-1,52,54,50,-1,51,52,50,-1,2,5,37,-1,37,36,2,-1,5,6,38,-1,38,37,5,-1,6,1,39,-1,39,38,6,-1,1,0,40,-1,40,39,1,-1,0,4,41,-1,41,40,0,-1,4,7,42,-1,42,41,4,-1,29,26,43,-1,43,42,29,-1,26,30,44,-1,44,43,26,-1,30,25,45,-1,45,44,30,-1,25,23,46,-1,46,45,25,-1,23,21,47,-1,47,46,23,-1,21,18,48,-1,48,47,21,-1,33,34,49,-1,49,48,33,-1,8,3,36,-1,36,49,8,-1,9,13,51,-1,51,50,9,-1,13,14,52,-1,52,51,13,-1,14,11,53,-1,53,52,14,-1,11,10,54,-1,54,53,11,-1,10,15,55,-1,55,54,10,-1,16,12,56,-1,56,55,16,-1,35,32,57,-1,57,56,35,-1,19,20,58,-1,58,57,19,-1,20,22,59,-1,59,58,20,-1,22,24,60,-1,60,59,22,-1,24,31,61,-1,61,60,24,-1,31,27,62,-1,62,61,31,-1,27,28,63,-1,63,62,27,-1,17,9,50,-1,50,63,17,-1]
Coordinate689 = x3d.Coordinate()

IndexedFaceSet688.coord = Coordinate689
TextureCoordinate690 = x3d.TextureCoordinate()

IndexedFaceSet688.texCoord = TextureCoordinate690

Shape684.geometry = IndexedFaceSet688

Transform683.children.append(Shape684)

HAnimSegment682.children.append(Transform683)

HAnimJoint681.children.append(HAnimSegment682)
HAnimJoint691 = x3d.HAnimJoint()
HAnimJoint691.name = "vt9"
HAnimJoint691.DEF = "hanim_vt9"
HAnimJoint691.center = [0,1.337247,-0.01376325]
HAnimJoint691.ulimit = [0,0,0]
HAnimJoint691.llimit = [0,0,0]
HAnimSegment692 = x3d.HAnimSegment()
HAnimSegment692.name = "t9"
HAnimSegment692.DEF = "hanim_t9"
Transform693 = x3d.Transform()
Transform693.translation = [0,1.337247,-0.01376325]
Shape694 = x3d.Shape()
Appearance695 = x3d.Appearance()
Material696 = x3d.Material()
Material696.diffuseColor = [0.588,0.588,0.588]

Appearance695.material = Material696
ImageTexture697 = x3d.ImageTexture()
ImageTexture697.USE = "JinLOA4TextureAtlas"

Appearance695.texture = ImageTexture697

Shape694.appearance = Appearance695
IndexedFaceSet698 = x3d.IndexedFaceSet()
IndexedFaceSet698.coordIndex = [7,0,3,-1,3,10,7,-1,5,20,21,-1,21,12,5,-1,3,4,11,-1,11,10,3,-1,12,8,1,-1,1,5,12,-1,8,9,2,-1,2,1,8,-1,9,11,4,-1,4,2,9,-1,0,7,13,-1,13,6,0,-1,14,17,16,-1,16,15,14,-1,19,18,21,-1,21,20,19,-1,16,17,23,-1,23,22,16,-1,18,19,25,-1,25,24,18,-1,24,25,27,-1,27,26,24,-1,26,27,22,-1,22,23,26,-1,15,6,13,-1,13,14,15,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,47,48,49,-1,47,49,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,47,50,54,-1,43,47,54,-1,43,54,55,-1,43,55,42,-1,3,0,29,-1,29,28,3,-1,0,6,30,-1,30,29,0,-1,6,15,31,-1,31,30,6,-1,15,16,32,-1,32,31,15,-1,16,22,33,-1,33,32,16,-1,22,27,34,-1,34,33,22,-1,27,25,35,-1,35,34,27,-1,25,19,36,-1,36,35,25,-1,19,20,37,-1,37,36,19,-1,20,5,38,-1,38,37,20,-1,5,1,39,-1,39,38,5,-1,1,2,40,-1,40,39,1,-1,2,4,41,-1,41,40,2,-1,4,3,28,-1,28,41,4,-1,8,12,43,-1,43,42,8,-1,12,21,44,-1,44,43,12,-1,21,18,45,-1,45,44,21,-1,18,24,46,-1,46,45,18,-1,24,26,47,-1,47,46,24,-1,26,23,48,-1,48,47,26,-1,23,17,49,-1,49,48,23,-1,17,14,50,-1,50,49,17,-1,14,13,51,-1,51,50,14,-1,13,7,52,-1,52,51,13,-1,7,10,53,-1,53,52,7,-1,10,11,54,-1,54,53,10,-1,11,9,55,-1,55,54,11,-1,9,8,42,-1,42,55,9,-1]
IndexedFaceSet698.creaseAngle = 3.14159
IndexedFaceSet698.texCoordIndex = [9,0,4,-1,4,12,9,-1,7,3,17,-1,17,15,7,-1,4,5,13,-1,13,12,4,-1,14,10,1,-1,1,6,14,-1,10,11,2,-1,2,1,10,-1,11,13,5,-1,5,2,11,-1,0,9,16,-1,16,8,0,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,20,21,27,-1,27,26,20,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,32,33,26,-1,26,27,32,-1,19,35,34,-1,34,18,19,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,55,56,57,-1,55,57,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,55,58,62,-1,51,55,62,-1,51,62,63,-1,51,63,50,-1,4,0,37,-1,37,36,4,-1,0,8,38,-1,38,37,0,-1,35,19,39,-1,39,38,35,-1,19,20,40,-1,40,39,19,-1,20,26,41,-1,41,40,20,-1,26,33,42,-1,42,41,26,-1,33,31,43,-1,43,42,33,-1,31,28,44,-1,44,43,31,-1,23,24,45,-1,45,44,23,-1,3,7,46,-1,46,45,3,-1,6,1,47,-1,47,46,6,-1,1,2,48,-1,48,47,1,-1,2,5,49,-1,49,48,2,-1,5,4,36,-1,36,49,5,-1,10,14,51,-1,51,50,10,-1,15,17,52,-1,52,51,15,-1,25,22,53,-1,53,52,25,-1,29,30,54,-1,54,53,29,-1,30,32,55,-1,55,54,30,-1,32,27,56,-1,56,55,32,-1,27,21,57,-1,57,56,27,-1,21,18,58,-1,58,57,21,-1,18,34,59,-1,59,58,18,-1,16,9,60,-1,60,59,16,-1,9,12,61,-1,61,60,9,-1,12,13,62,-1,62,61,12,-1,13,11,63,-1,63,62,13,-1,11,10,50,-1,50,63,11,-1]
Coordinate699 = x3d.Coordinate()

IndexedFaceSet698.coord = Coordinate699
TextureCoordinate700 = x3d.TextureCoordinate()

IndexedFaceSet698.texCoord = TextureCoordinate700

Shape694.geometry = IndexedFaceSet698

Transform693.children.append(Shape694)

HAnimSegment692.children.append(Transform693)

HAnimJoint691.children.append(HAnimSegment692)
HAnimJoint701 = x3d.HAnimJoint()
HAnimJoint701.name = "vt8"
HAnimJoint701.DEF = "hanim_vt8"
HAnimJoint701.center = [0,1.3553820558,-0.01376325]
HAnimJoint701.ulimit = [0,0,0]
HAnimJoint701.llimit = [0,0,0]
HAnimSegment702 = x3d.HAnimSegment()
HAnimSegment702.name = "t8"
HAnimSegment702.DEF = "hanim_t8"
Transform703 = x3d.Transform()
Transform703.translation = [0,1.3553820558,-0.01376325]
Shape704 = x3d.Shape()
Appearance705 = x3d.Appearance()
Material706 = x3d.Material()
Material706.diffuseColor = [0.588,0.588,0.588]

Appearance705.material = Material706
ImageTexture707 = x3d.ImageTexture()
ImageTexture707.USE = "JinLOA4TextureAtlas"

Appearance705.texture = ImageTexture707

Shape704.appearance = Appearance705
IndexedFaceSet708 = x3d.IndexedFaceSet()
IndexedFaceSet708.coordIndex = [4,0,9,-1,9,3,4,-1,11,19,20,-1,20,6,11,-1,9,10,5,-1,5,3,9,-1,6,7,1,-1,1,11,6,-1,7,8,2,-1,2,1,7,-1,8,5,10,-1,10,2,8,-1,0,4,12,-1,12,27,0,-1,13,16,15,-1,15,14,13,-1,18,17,20,-1,20,19,18,-1,15,16,22,-1,22,21,15,-1,17,18,24,-1,24,23,17,-1,23,24,26,-1,26,25,23,-1,25,26,21,-1,21,22,25,-1,14,27,12,-1,12,13,14,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,43,44,45,-1,45,46,47,-1,47,48,49,-1,45,47,49,-1,49,50,51,-1,51,52,53,-1,49,51,53,-1,45,49,53,-1,53,54,55,-1,45,53,55,-1,43,45,55,-1,43,55,42,-1,11,1,29,-1,29,28,11,-1,1,2,30,-1,30,29,1,-1,2,10,31,-1,31,30,2,-1,10,9,32,-1,32,31,10,-1,9,0,33,-1,33,32,9,-1,0,27,34,-1,34,33,0,-1,27,14,35,-1,35,34,27,-1,14,15,36,-1,36,35,14,-1,15,21,37,-1,37,36,15,-1,21,26,38,-1,38,37,21,-1,26,24,39,-1,39,38,26,-1,24,18,40,-1,40,39,24,-1,18,19,41,-1,41,40,18,-1,19,11,28,-1,28,41,19,-1,12,4,43,-1,43,42,12,-1,4,3,44,-1,44,43,4,-1,3,5,45,-1,45,44,3,-1,5,8,46,-1,46,45,5,-1,8,7,47,-1,47,46,8,-1,7,6,48,-1,48,47,7,-1,6,20,49,-1,49,48,6,-1,20,17,50,-1,50,49,20,-1,17,23,51,-1,51,50,17,-1,23,25,52,-1,52,51,23,-1,25,22,53,-1,53,52,25,-1,22,16,54,-1,54,53,22,-1,16,13,55,-1,55,54,16,-1,13,12,42,-1,42,55,13,-1]
IndexedFaceSet708.creaseAngle = 3.14159
IndexedFaceSet708.texCoordIndex = [1,14,9,-1,9,0,1,-1,11,13,8,-1,8,5,11,-1,9,10,3,-1,3,0,9,-1,4,6,16,-1,16,12,4,-1,6,7,17,-1,17,16,6,-1,7,3,10,-1,10,17,7,-1,14,1,2,-1,2,15,14,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,20,21,27,-1,27,26,20,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,32,33,26,-1,26,27,32,-1,19,35,34,-1,34,18,19,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,51,52,53,-1,53,54,55,-1,55,56,57,-1,53,55,57,-1,57,58,59,-1,59,60,61,-1,57,59,61,-1,53,57,61,-1,61,62,63,-1,53,61,63,-1,51,53,63,-1,51,63,50,-1,12,16,37,-1,37,36,12,-1,16,17,38,-1,38,37,16,-1,17,10,39,-1,39,38,17,-1,10,9,40,-1,40,39,10,-1,9,14,41,-1,41,40,9,-1,14,15,42,-1,42,41,14,-1,35,19,43,-1,43,42,35,-1,19,20,44,-1,44,43,19,-1,20,26,45,-1,45,44,20,-1,26,33,46,-1,46,45,26,-1,33,31,47,-1,47,46,33,-1,31,28,48,-1,48,47,31,-1,23,24,49,-1,49,48,23,-1,13,11,36,-1,36,49,13,-1,2,1,51,-1,51,50,2,-1,1,0,52,-1,52,51,1,-1,0,3,53,-1,53,52,0,-1,3,7,54,-1,54,53,3,-1,7,6,55,-1,55,54,7,-1,6,4,56,-1,56,55,6,-1,5,8,57,-1,57,56,5,-1,25,22,58,-1,58,57,25,-1,29,30,59,-1,59,58,29,-1,30,32,60,-1,60,59,30,-1,32,27,61,-1,61,60,32,-1,27,21,62,-1,62,61,27,-1,21,18,63,-1,63,62,21,-1,18,34,50,-1,50,63,18,-1]
Coordinate709 = x3d.Coordinate()

IndexedFaceSet708.coord = Coordinate709
TextureCoordinate710 = x3d.TextureCoordinate()

IndexedFaceSet708.texCoord = TextureCoordinate710

Shape704.geometry = IndexedFaceSet708

Transform703.children.append(Shape704)

HAnimSegment702.children.append(Transform703)

HAnimJoint701.children.append(HAnimSegment702)
HAnimJoint711 = x3d.HAnimJoint()
HAnimJoint711.name = "vt7"
HAnimJoint711.DEF = "hanim_vt7"
HAnimJoint711.center = [0,1.3749119721,-0.01376325]
HAnimJoint711.ulimit = [0,0,0]
HAnimJoint711.llimit = [0,0,0]
HAnimSegment712 = x3d.HAnimSegment()
HAnimSegment712.name = "t7"
HAnimSegment712.DEF = "hanim_t7"
Transform713 = x3d.Transform()
Transform713.translation = [0,1.3749119721,-0.01376325]
Shape714 = x3d.Shape()
Appearance715 = x3d.Appearance()
Material716 = x3d.Material()
Material716.diffuseColor = [0.588,0.588,0.588]

Appearance715.material = Material716
ImageTexture717 = x3d.ImageTexture()
ImageTexture717.USE = "JinLOA4TextureAtlas"

Appearance715.texture = ImageTexture717

Shape714.appearance = Appearance715
IndexedFaceSet718 = x3d.IndexedFaceSet()
IndexedFaceSet718.coordIndex = [0,2,6,-1,6,8,0,-1,9,18,19,-1,19,1,9,-1,7,5,22,-1,22,23,7,-1,1,3,10,-1,10,9,1,-1,3,4,11,-1,11,10,3,-1,4,0,8,-1,8,11,4,-1,5,7,6,-1,6,2,5,-1,13,12,15,-1,15,14,13,-1,17,16,19,-1,19,18,17,-1,20,23,22,-1,22,21,20,-1,16,17,25,-1,25,24,16,-1,24,25,27,-1,27,26,24,-1,26,27,12,-1,12,13,26,-1,21,14,15,-1,15,20,21,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,46,50,54,-1,54,55,42,-1,46,54,42,-1,44,46,42,-1,43,44,42,-1,1,19,29,-1,29,28,1,-1,19,16,30,-1,30,29,19,-1,16,24,31,-1,31,30,16,-1,24,26,32,-1,32,31,24,-1,26,13,33,-1,33,32,26,-1,13,14,34,-1,34,33,13,-1,14,21,35,-1,35,34,14,-1,21,22,36,-1,36,35,21,-1,22,5,37,-1,37,36,22,-1,5,2,38,-1,38,37,5,-1,2,0,39,-1,39,38,2,-1,0,4,40,-1,40,39,0,-1,4,3,41,-1,41,40,4,-1,3,1,28,-1,28,41,3,-1,7,23,43,-1,43,42,7,-1,23,20,44,-1,44,43,23,-1,20,15,45,-1,45,44,20,-1,15,12,46,-1,46,45,15,-1,12,27,47,-1,47,46,12,-1,27,25,48,-1,48,47,27,-1,25,17,49,-1,49,48,25,-1,17,18,50,-1,50,49,17,-1,18,9,51,-1,51,50,18,-1,9,10,52,-1,52,51,9,-1,10,11,53,-1,53,52,10,-1,11,8,54,-1,54,53,11,-1,8,6,55,-1,55,54,8,-1,6,7,42,-1,42,55,6,-1]
IndexedFaceSet718.creaseAngle = 3.14159
IndexedFaceSet718.texCoordIndex = [3,8,9,-1,9,11,3,-1,13,16,6,-1,6,5,13,-1,10,0,7,-1,7,17,10,-1,2,1,14,-1,14,12,2,-1,1,4,15,-1,15,14,1,-1,4,3,11,-1,11,15,4,-1,0,10,9,-1,9,8,0,-1,19,18,21,-1,21,20,19,-1,23,22,25,-1,25,24,23,-1,26,29,28,-1,28,27,26,-1,31,30,33,-1,33,32,31,-1,32,33,35,-1,35,34,32,-1,34,35,18,-1,18,19,34,-1,27,20,21,-1,21,26,27,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,54,58,62,-1,62,63,50,-1,54,62,50,-1,52,54,50,-1,51,52,50,-1,5,6,37,-1,37,36,5,-1,25,22,38,-1,38,37,25,-1,31,32,39,-1,39,38,31,-1,32,34,40,-1,40,39,32,-1,34,19,41,-1,41,40,34,-1,19,20,42,-1,42,41,19,-1,20,27,43,-1,43,42,20,-1,27,28,44,-1,44,43,27,-1,7,0,45,-1,45,44,7,-1,0,8,46,-1,46,45,0,-1,8,3,47,-1,47,46,8,-1,3,4,48,-1,48,47,3,-1,4,1,49,-1,49,48,4,-1,1,2,36,-1,36,49,1,-1,10,17,51,-1,51,50,10,-1,29,26,52,-1,52,51,29,-1,26,21,53,-1,53,52,26,-1,21,18,54,-1,54,53,21,-1,18,35,55,-1,55,54,18,-1,35,33,56,-1,56,55,35,-1,33,30,57,-1,57,56,33,-1,23,24,58,-1,58,57,23,-1,16,13,59,-1,59,58,16,-1,12,14,60,-1,60,59,12,-1,14,15,61,-1,61,60,14,-1,15,11,62,-1,62,61,15,-1,11,9,63,-1,63,62,11,-1,9,10,50,-1,50,63,9,-1]
Coordinate719 = x3d.Coordinate()

IndexedFaceSet718.coord = Coordinate719
TextureCoordinate720 = x3d.TextureCoordinate()

IndexedFaceSet718.texCoord = TextureCoordinate720

Shape714.geometry = IndexedFaceSet718

Transform713.children.append(Shape714)

HAnimSegment712.children.append(Transform713)

HAnimJoint711.children.append(HAnimSegment712)
HAnimJoint721 = x3d.HAnimJoint()
HAnimJoint721.name = "vt6"
HAnimJoint721.DEF = "hanim_vt6"
HAnimJoint721.center = [0,1.3908149442,-0.01376325]
HAnimJoint721.ulimit = [0,0,0]
HAnimJoint721.llimit = [0,0,0]
HAnimSegment722 = x3d.HAnimSegment()
HAnimSegment722.name = "t6"
HAnimSegment722.DEF = "hanim_t6"
Transform723 = x3d.Transform()
Transform723.translation = [0,1.3908149442,-0.01376325]
Shape724 = x3d.Shape()
Appearance725 = x3d.Appearance()
Material726 = x3d.Material()
Material726.diffuseColor = [0.588,0.588,0.588]

Appearance725.material = Material726
ImageTexture727 = x3d.ImageTexture()
ImageTexture727.USE = "JinLOA4TextureAtlas"

Appearance725.texture = ImageTexture727

Shape724.appearance = Appearance725
IndexedFaceSet728 = x3d.IndexedFaceSet()
IndexedFaceSet728.coordIndex = [12,9,5,-1,5,3,12,-1,2,1,6,-1,6,11,2,-1,0,7,23,-1,23,24,0,-1,25,8,12,-1,12,3,25,-1,9,6,1,-1,1,5,9,-1,11,10,4,-1,4,2,11,-1,4,10,7,-1,7,0,4,-1,13,16,15,-1,15,14,13,-1,18,17,20,-1,20,19,18,-1,21,24,23,-1,23,22,21,-1,25,16,13,-1,13,8,25,-1,14,15,19,-1,19,20,14,-1,17,18,27,-1,27,26,17,-1,27,21,22,-1,22,26,27,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,42,-1,50,54,42,-1,46,50,42,-1,44,46,42,-1,43,44,42,-1,3,5,29,-1,29,28,3,-1,5,1,30,-1,30,29,5,-1,1,2,31,-1,31,30,1,-1,2,4,32,-1,32,31,2,-1,4,0,33,-1,33,32,4,-1,0,24,34,-1,34,33,0,-1,24,21,35,-1,35,34,24,-1,21,27,36,-1,36,35,21,-1,27,18,37,-1,37,36,27,-1,18,19,38,-1,38,37,18,-1,19,15,39,-1,39,38,19,-1,15,16,40,-1,40,39,15,-1,16,25,41,-1,41,40,16,-1,25,3,28,-1,28,41,25,-1,23,7,43,-1,43,42,23,-1,7,10,44,-1,44,43,7,-1,10,11,45,-1,45,44,10,-1,11,6,46,-1,46,45,11,-1,6,9,47,-1,47,46,6,-1,9,12,48,-1,48,47,9,-1,12,8,49,-1,49,48,12,-1,8,13,50,-1,50,49,8,-1,13,14,51,-1,51,50,13,-1,14,20,52,-1,52,51,14,-1,20,17,53,-1,53,52,20,-1,17,26,54,-1,54,53,17,-1,26,22,55,-1,55,54,26,-1,22,23,42,-1,42,55,22,-1]
IndexedFaceSet728.creaseAngle = 3.14159
IndexedFaceSet728.texCoordIndex = [17,13,8,-1,8,4,17,-1,3,2,9,-1,9,16,3,-1,1,10,14,-1,14,5,1,-1,6,12,17,-1,17,4,6,-1,13,9,2,-1,2,8,13,-1,16,15,7,-1,7,3,16,-1,7,15,11,-1,11,0,7,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,26,29,28,-1,28,27,26,-1,30,21,18,-1,18,31,30,-1,19,20,24,-1,24,25,19,-1,22,23,33,-1,33,32,22,-1,33,35,34,-1,34,32,33,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,62,63,50,-1,58,62,50,-1,54,58,50,-1,52,54,50,-1,51,52,50,-1,4,8,37,-1,37,36,4,-1,8,2,38,-1,38,37,8,-1,2,3,39,-1,39,38,2,-1,3,7,40,-1,40,39,3,-1,7,0,41,-1,41,40,7,-1,1,5,42,-1,42,41,1,-1,29,26,43,-1,43,42,29,-1,35,33,44,-1,44,43,35,-1,33,23,45,-1,45,44,33,-1,23,24,46,-1,46,45,23,-1,24,20,47,-1,47,46,24,-1,20,21,48,-1,48,47,20,-1,21,30,49,-1,49,48,21,-1,6,4,36,-1,36,49,6,-1,14,10,51,-1,51,50,14,-1,11,15,52,-1,52,51,11,-1,15,16,53,-1,53,52,15,-1,16,9,54,-1,54,53,16,-1,9,13,55,-1,55,54,9,-1,13,17,56,-1,56,55,13,-1,17,12,57,-1,57,56,17,-1,31,18,58,-1,58,57,31,-1,18,19,59,-1,59,58,18,-1,19,25,60,-1,60,59,19,-1,25,22,61,-1,61,60,25,-1,22,32,62,-1,62,61,22,-1,32,34,63,-1,63,62,32,-1,27,28,50,-1,50,63,27,-1]
Coordinate729 = x3d.Coordinate()

IndexedFaceSet728.coord = Coordinate729
TextureCoordinate730 = x3d.TextureCoordinate()

IndexedFaceSet728.texCoord = TextureCoordinate730

Shape724.geometry = IndexedFaceSet728

Transform723.children.append(Shape724)

HAnimSegment722.children.append(Transform723)

HAnimJoint721.children.append(HAnimSegment722)
HAnimJoint731 = x3d.HAnimJoint()
HAnimJoint731.name = "vt5"
HAnimJoint731.DEF = "hanim_vt5"
HAnimJoint731.center = [0,1.4100660279,-0.01376325]
HAnimJoint731.ulimit = [0,0,0]
HAnimJoint731.llimit = [0,0,0]
HAnimSegment732 = x3d.HAnimSegment()
HAnimSegment732.name = "t5"
HAnimSegment732.DEF = "hanim_t5"
Transform733 = x3d.Transform()
Transform733.translation = [0,1.4100660279,-0.01376325]
Shape734 = x3d.Shape()
Appearance735 = x3d.Appearance()
Material736 = x3d.Material()
Material736.diffuseColor = [0.588,0.588,0.588]

Appearance735.material = Material736
ImageTexture737 = x3d.ImageTexture()
ImageTexture737.USE = "JinLOA4TextureAtlas"

Appearance735.texture = ImageTexture737

Shape734.appearance = Appearance735
IndexedFaceSet738 = x3d.IndexedFaceSet()
IndexedFaceSet738.coordIndex = [0,6,16,-1,16,13,0,-1,17,10,9,-1,9,3,17,-1,12,7,5,-1,5,2,12,-1,8,11,4,-1,4,1,8,-1,4,11,6,-1,6,0,4,-1,2,3,9,-1,9,12,2,-1,1,5,7,-1,7,8,1,-1,14,13,16,-1,16,15,14,-1,17,19,18,-1,18,10,17,-1,21,20,23,-1,23,22,21,-1,25,24,27,-1,27,26,25,-1,27,14,15,-1,15,26,27,-1,20,21,18,-1,18,19,20,-1,24,25,22,-1,22,23,24,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,42,-1,50,54,42,-1,46,50,42,-1,44,46,42,-1,43,44,42,-1,3,2,29,-1,29,28,3,-1,2,5,30,-1,30,29,2,-1,5,1,31,-1,31,30,5,-1,1,4,32,-1,32,31,1,-1,4,0,33,-1,33,32,4,-1,0,13,34,-1,34,33,0,-1,13,14,35,-1,35,34,13,-1,14,27,36,-1,36,35,14,-1,27,24,37,-1,37,36,27,-1,24,23,38,-1,38,37,24,-1,23,20,39,-1,39,38,23,-1,20,19,40,-1,40,39,20,-1,19,17,41,-1,41,40,19,-1,17,3,28,-1,28,41,17,-1,12,9,43,-1,43,42,12,-1,9,10,44,-1,44,43,9,-1,10,18,45,-1,45,44,10,-1,18,21,46,-1,46,45,18,-1,21,22,47,-1,47,46,21,-1,22,25,48,-1,48,47,22,-1,25,26,49,-1,49,48,25,-1,26,15,50,-1,50,49,26,-1,15,16,51,-1,51,50,15,-1,16,6,52,-1,52,51,16,-1,6,11,53,-1,53,52,6,-1,11,8,54,-1,54,53,11,-1,8,7,55,-1,55,54,8,-1,7,12,42,-1,42,55,7,-1]
IndexedFaceSet738.creaseAngle = 3.14159
IndexedFaceSet738.texCoordIndex = [5,10,14,-1,14,2,5,-1,8,15,13,-1,13,7,8,-1,17,11,3,-1,3,6,17,-1,12,16,0,-1,0,4,12,-1,0,16,9,-1,9,1,0,-1,6,7,13,-1,13,17,6,-1,4,3,11,-1,11,12,4,-1,19,18,21,-1,21,20,19,-1,22,25,24,-1,24,23,22,-1,27,26,29,-1,29,28,27,-1,31,30,33,-1,33,32,31,-1,33,35,34,-1,34,32,33,-1,26,27,24,-1,24,25,26,-1,30,31,28,-1,28,29,30,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,62,63,50,-1,58,62,50,-1,54,58,50,-1,52,54,50,-1,51,52,50,-1,7,6,37,-1,37,36,7,-1,6,3,38,-1,38,37,6,-1,3,4,39,-1,39,38,3,-1,4,0,40,-1,40,39,4,-1,0,1,41,-1,41,40,0,-1,5,2,42,-1,42,41,5,-1,18,19,43,-1,43,42,18,-1,35,33,44,-1,44,43,35,-1,33,30,45,-1,45,44,33,-1,30,29,46,-1,46,45,30,-1,29,26,47,-1,47,46,29,-1,26,25,48,-1,48,47,26,-1,25,22,49,-1,49,48,25,-1,8,7,36,-1,36,49,8,-1,17,13,51,-1,51,50,17,-1,13,15,52,-1,52,51,13,-1,23,24,53,-1,53,52,23,-1,24,27,54,-1,54,53,24,-1,27,28,55,-1,55,54,27,-1,28,31,56,-1,56,55,28,-1,31,32,57,-1,57,56,31,-1,32,34,58,-1,58,57,32,-1,20,21,59,-1,59,58,20,-1,14,10,60,-1,60,59,14,-1,9,16,61,-1,61,60,9,-1,16,12,62,-1,62,61,16,-1,12,11,63,-1,63,62,12,-1,11,17,50,-1,50,63,11,-1]
Coordinate739 = x3d.Coordinate()

IndexedFaceSet738.coord = Coordinate739
TextureCoordinate740 = x3d.TextureCoordinate()

IndexedFaceSet738.texCoord = TextureCoordinate740

Shape734.geometry = IndexedFaceSet738

Transform733.children.append(Shape734)

HAnimSegment732.children.append(Transform733)

HAnimJoint731.children.append(HAnimSegment732)
HAnimJoint741 = x3d.HAnimJoint()
HAnimJoint741.name = "vt4"
HAnimJoint741.DEF = "hanim_vt4"
HAnimJoint741.center = [0,1.4290380279000001,-0.01376325]
HAnimJoint741.ulimit = [0,0,0]
HAnimJoint741.llimit = [0,0,0]
HAnimSegment742 = x3d.HAnimSegment()
HAnimSegment742.name = "t4"
HAnimSegment742.DEF = "hanim_t4"
Transform743 = x3d.Transform()
Transform743.translation = [0,1.4290380279000001,-0.01376325]
Shape744 = x3d.Shape()
Appearance745 = x3d.Appearance()
Material746 = x3d.Material()
Material746.diffuseColor = [0.588,0.588,0.588]

Appearance745.material = Material746
ImageTexture747 = x3d.ImageTexture()
ImageTexture747.USE = "JinLOA4TextureAtlas"

Appearance745.texture = ImageTexture747

Shape744.appearance = Appearance745
IndexedFaceSet748 = x3d.IndexedFaceSet()
IndexedFaceSet748.coordIndex = [2,3,9,-1,9,12,2,-1,3,0,10,-1,10,9,3,-1,7,20,21,-1,21,4,7,-1,11,7,4,-1,4,5,11,-1,25,26,10,-1,10,0,25,-1,6,11,5,-1,11,6,1,-1,1,8,11,-1,2,12,8,-1,8,1,2,-1,14,13,16,-1,16,15,14,-1,15,16,18,-1,18,17,15,-1,19,22,21,-1,21,20,19,-1,23,24,22,-1,22,19,23,-1,25,17,18,-1,18,26,25,-1,27,24,23,-1,23,29,28,-1,28,27,23,-1,14,28,29,-1,29,13,14,-1,31,32,33,-1,31,33,34,-1,34,35,36,-1,36,37,38,-1,34,36,38,-1,31,34,38,-1,38,39,40,-1,40,41,42,-1,38,40,42,-1,31,38,42,-1,42,43,44,-1,31,42,44,-1,31,44,45,-1,31,45,30,-1,48,49,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,46,-1,54,58,46,-1,50,54,46,-1,48,50,46,-1,47,48,46,-1,3,2,31,-1,31,30,3,-1,2,1,32,-1,32,31,2,-1,1,6,33,-1,33,32,1,-1,6,5,34,-1,34,33,6,-1,5,4,35,-1,35,34,5,-1,4,21,36,-1,36,35,4,-1,21,22,37,-1,37,36,21,-1,22,24,38,-1,38,37,22,-1,24,27,39,-1,39,38,24,-1,27,28,40,-1,40,39,27,-1,28,14,41,-1,41,40,28,-1,14,15,42,-1,42,41,14,-1,15,17,43,-1,43,42,15,-1,17,25,44,-1,44,43,17,-1,25,0,45,-1,45,44,25,-1,0,3,30,-1,30,45,0,-1,9,10,47,-1,47,46,9,-1,10,26,48,-1,48,47,10,-1,26,18,49,-1,49,48,26,-1,18,16,50,-1,50,49,18,-1,16,13,51,-1,51,50,16,-1,13,29,52,-1,52,51,13,-1,29,23,53,-1,53,52,29,-1,23,19,54,-1,54,53,23,-1,19,20,55,-1,55,54,19,-1,20,7,56,-1,56,55,20,-1,7,11,57,-1,57,56,7,-1,11,8,58,-1,58,57,11,-1,8,12,59,-1,59,58,8,-1,12,9,46,-1,46,59,12,-1]
IndexedFaceSet748.creaseAngle = 3.14159
IndexedFaceSet748.texCoordIndex = [3,4,14,-1,14,18,3,-1,4,1,15,-1,15,14,4,-1,10,17,7,-1,7,6,10,-1,16,11,5,-1,5,8,16,-1,0,19,15,-1,15,1,0,-1,9,16,8,-1,16,9,2,-1,2,12,16,-1,3,18,13,-1,13,2,3,-1,21,20,23,-1,23,22,21,-1,22,23,25,-1,25,24,22,-1,26,29,28,-1,28,27,26,-1,30,33,32,-1,32,31,30,-1,34,24,25,-1,25,35,34,-1,36,33,30,-1,30,38,37,-1,37,36,30,-1,21,37,39,-1,39,20,21,-1,41,42,43,-1,41,43,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,48,49,50,-1,50,51,52,-1,48,50,52,-1,41,48,52,-1,52,53,54,-1,41,52,54,-1,41,54,55,-1,41,55,40,-1,58,59,60,-1,60,61,62,-1,62,63,64,-1,60,62,64,-1,64,65,66,-1,66,67,68,-1,64,66,68,-1,68,69,56,-1,64,68,56,-1,60,64,56,-1,58,60,56,-1,57,58,56,-1,4,3,41,-1,41,40,4,-1,3,2,42,-1,42,41,3,-1,2,9,43,-1,43,42,2,-1,9,8,44,-1,44,43,9,-1,8,5,45,-1,45,44,8,-1,6,7,46,-1,46,45,6,-1,28,29,47,-1,47,46,28,-1,32,33,48,-1,48,47,32,-1,33,36,49,-1,49,48,33,-1,36,37,50,-1,50,49,36,-1,37,21,51,-1,51,50,37,-1,21,22,52,-1,52,51,21,-1,22,24,53,-1,53,52,22,-1,24,34,54,-1,54,53,24,-1,0,1,55,-1,55,54,0,-1,1,4,40,-1,40,55,1,-1,14,15,57,-1,57,56,14,-1,15,19,58,-1,58,57,15,-1,35,25,59,-1,59,58,35,-1,25,23,60,-1,60,59,25,-1,23,20,61,-1,61,60,23,-1,20,39,62,-1,62,61,20,-1,38,30,63,-1,63,62,38,-1,30,31,64,-1,64,63,30,-1,26,27,65,-1,65,64,26,-1,17,10,66,-1,66,65,17,-1,11,16,67,-1,67,66,11,-1,16,12,68,-1,68,67,16,-1,13,18,69,-1,69,68,13,-1,18,14,56,-1,56,69,18,-1]
Coordinate749 = x3d.Coordinate()

IndexedFaceSet748.coord = Coordinate749
TextureCoordinate750 = x3d.TextureCoordinate()

IndexedFaceSet748.texCoord = TextureCoordinate750

Shape744.geometry = IndexedFaceSet748

Transform743.children.append(Shape744)

HAnimSegment742.children.append(Transform743)

HAnimJoint741.children.append(HAnimSegment742)
HAnimJoint751 = x3d.HAnimJoint()
HAnimJoint751.name = "vt3"
HAnimJoint751.DEF = "hanim_vt3"
HAnimJoint751.center = [0,1.4519160279,-0.01376325]
HAnimJoint751.ulimit = [0,0,0]
HAnimJoint751.llimit = [0,0,0]
HAnimSegment752 = x3d.HAnimSegment()
HAnimSegment752.name = "t3"
HAnimSegment752.DEF = "hanim_t3"
Transform753 = x3d.Transform()
Transform753.translation = [0,1.4519160279,-0.01376325]
Shape754 = x3d.Shape()
Appearance755 = x3d.Appearance()
Material756 = x3d.Material()
Material756.diffuseColor = [0.588,0.588,0.588]

Appearance755.material = Material756
ImageTexture757 = x3d.ImageTexture()
ImageTexture757.USE = "JinLOA4TextureAtlas"

Appearance755.texture = ImageTexture757

Shape754.appearance = Appearance755
IndexedFaceSet758 = x3d.IndexedFaceSet()
IndexedFaceSet758.coordIndex = [16,15,0,-1,0,7,16,-1,0,15,8,-1,1,5,11,-1,11,10,1,-1,18,6,12,-1,12,17,18,-1,14,13,2,-1,2,3,14,-1,9,14,3,-1,3,4,9,-1,11,5,0,-1,0,8,11,-1,13,12,6,-1,6,2,13,-1,49,16,7,-1,7,0,5,-1,1,10,9,-1,9,4,1,-1,3,2,20,-1,20,19,3,-1,2,6,21,-1,21,20,2,-1,6,18,53,-1,53,21,6,-1,7,5,23,-1,23,22,7,-1,5,1,24,-1,24,23,5,-1,1,4,25,-1,25,24,1,-1,4,3,19,-1,19,25,4,-1,10,11,27,-1,27,26,10,-1,11,8,28,-1,28,27,11,-1,8,15,29,-1,29,28,8,-1,17,12,30,-1,30,62,17,-1,12,13,31,-1,31,30,12,-1,13,14,32,-1,32,31,13,-1,14,9,33,-1,33,32,14,-1,9,10,26,-1,26,33,9,-1,16,35,34,-1,34,15,16,-1,34,36,15,-1,38,37,40,-1,40,39,38,-1,18,17,42,-1,42,41,18,-1,44,43,46,-1,46,45,44,-1,48,47,43,-1,43,44,48,-1,40,36,34,-1,34,39,40,-1,45,46,41,-1,41,42,45,-1,49,35,16,-1,35,39,34,-1,38,47,48,-1,48,37,38,-1,43,51,50,-1,50,46,43,-1,46,50,52,-1,52,41,46,-1,41,52,53,-1,53,18,41,-1,35,55,54,-1,54,39,35,-1,39,54,56,-1,56,38,39,-1,38,56,57,-1,57,47,38,-1,47,57,51,-1,51,43,47,-1,37,59,58,-1,58,40,37,-1,40,58,60,-1,60,36,40,-1,36,60,29,-1,29,15,36,-1,17,62,61,-1,61,42,17,-1,42,61,63,-1,63,45,42,-1,45,63,64,-1,64,44,45,-1,44,64,65,-1,65,48,44,-1,48,65,59,-1,59,37,48,-1,27,28,29,-1,29,60,58,-1,58,59,65,-1,29,58,65,-1,65,64,63,-1,63,61,62,-1,65,63,62,-1,62,30,31,-1,31,32,33,-1,62,31,33,-1,65,62,33,-1,29,65,33,-1,27,29,33,-1,27,33,26,-1]
IndexedFaceSet758.creaseAngle = 3.14159
IndexedFaceSet758.texCoordIndex = [2,12,1,-1,1,0,2,-1,1,12,13,-1,4,8,16,-1,16,15,4,-1,11,10,17,-1,17,19,11,-1,21,20,5,-1,5,6,21,-1,14,21,6,-1,6,7,14,-1,16,8,1,-1,1,13,16,-1,20,18,9,-1,9,5,20,-1,3,2,0,-1,0,1,8,-1,4,15,14,-1,14,7,4,-1,6,5,23,-1,23,22,6,-1,5,9,24,-1,24,23,5,-1,10,11,25,-1,25,24,10,-1,0,8,27,-1,27,26,0,-1,8,4,28,-1,28,27,8,-1,4,7,29,-1,29,28,4,-1,7,6,22,-1,22,29,7,-1,15,16,31,-1,31,30,15,-1,16,13,32,-1,32,31,16,-1,13,12,33,-1,33,32,13,-1,19,17,35,-1,35,34,19,-1,18,20,36,-1,36,35,18,-1,20,21,37,-1,37,36,20,-1,21,14,38,-1,38,37,21,-1,14,15,30,-1,30,38,14,-1,42,41,40,-1,40,39,42,-1,40,43,39,-1,45,44,47,-1,47,46,45,-1,49,48,51,-1,51,50,49,-1,53,52,55,-1,55,54,53,-1,57,56,52,-1,52,53,57,-1,47,43,40,-1,40,46,47,-1,54,55,59,-1,59,58,54,-1,60,41,42,-1,41,46,40,-1,45,56,57,-1,57,44,45,-1,52,62,61,-1,61,55,52,-1,55,61,63,-1,63,59,55,-1,50,63,64,-1,64,49,50,-1,41,66,65,-1,65,46,41,-1,46,65,67,-1,67,45,46,-1,45,67,68,-1,68,56,45,-1,56,68,62,-1,62,52,56,-1,44,70,69,-1,69,47,44,-1,47,69,71,-1,71,43,47,-1,43,71,72,-1,72,39,43,-1,48,74,73,-1,73,51,48,-1,58,73,75,-1,75,54,58,-1,54,75,76,-1,76,53,54,-1,53,76,77,-1,77,57,53,-1,57,77,70,-1,70,44,57,-1,31,32,33,-1,33,71,69,-1,69,70,77,-1,33,69,77,-1,77,76,75,-1,75,73,74,-1,77,75,74,-1,74,35,36,-1,36,37,38,-1,74,36,38,-1,77,74,38,-1,33,77,38,-1,31,33,38,-1,31,38,30,-1]
Coordinate759 = x3d.Coordinate()

IndexedFaceSet758.coord = Coordinate759
TextureCoordinate760 = x3d.TextureCoordinate()

IndexedFaceSet758.texCoord = TextureCoordinate760

Shape754.geometry = IndexedFaceSet758

Transform753.children.append(Shape754)

HAnimSegment752.children.append(Transform753)

HAnimJoint751.children.append(HAnimSegment752)
HAnimJoint761 = x3d.HAnimJoint()
HAnimJoint761.name = "vt2"
HAnimJoint761.DEF = "hanim_vt2"
HAnimJoint761.center = [0,1.4826059721000002,-0.01378575]
HAnimJoint761.ulimit = [0,0,0]
HAnimJoint761.llimit = [0,0,0]
HAnimSegment762 = x3d.HAnimSegment()
HAnimSegment762.name = "t2"
HAnimSegment762.DEF = "hanim_t2"
Transform763 = x3d.Transform()
Transform763.translation = [0,1.4826059721000002,-0.01378575]
Shape764 = x3d.Shape()
Appearance765 = x3d.Appearance()
Material766 = x3d.Material()
Material766.diffuseColor = [0.588,0.588,0.588]

Appearance765.material = Material766
ImageTexture767 = x3d.ImageTexture()
ImageTexture767.USE = "JinLOA4TextureAtlas"

Appearance765.texture = ImageTexture767

Shape764.appearance = Appearance765
IndexedFaceSet768 = x3d.IndexedFaceSet()
IndexedFaceSet768.coordIndex = [1,5,12,-1,7,2,19,-1,19,0,7,-1,0,11,7,-1,2,7,5,-1,5,1,2,-1,17,0,19,-1,0,17,6,-1,6,11,0,-1,20,2,1,-1,1,4,20,-1,2,20,19,-1,10,9,15,-1,15,14,10,-1,9,16,15,-1,8,10,14,-1,14,18,8,-1,13,6,17,-1,3,8,18,-1,18,21,3,-1,51,4,1,-1,1,12,51,-1,6,13,16,-1,16,9,6,-1,6,9,23,-1,23,22,6,-1,9,10,24,-1,24,23,9,-1,10,8,25,-1,25,24,10,-1,8,3,56,-1,56,25,8,-1,14,15,27,-1,27,26,14,-1,15,16,28,-1,28,27,15,-1,16,13,29,-1,29,28,16,-1,13,17,30,-1,30,29,13,-1,17,19,31,-1,31,30,17,-1,19,20,63,-1,63,31,19,-1,21,18,32,-1,32,65,21,-1,18,14,26,-1,26,32,18,-1,33,35,34,-1,38,37,36,-1,36,39,38,-1,37,38,40,-1,39,33,34,-1,34,38,39,-1,41,36,37,-1,37,40,42,-1,42,41,37,-1,20,4,33,-1,33,39,20,-1,39,36,20,-1,43,46,45,-1,45,44,43,-1,44,45,47,-1,49,48,46,-1,46,43,49,-1,50,41,42,-1,3,21,48,-1,48,49,3,-1,51,35,33,-1,33,4,51,-1,42,44,47,-1,47,50,42,-1,42,53,52,-1,52,44,42,-1,44,52,54,-1,54,43,44,-1,43,54,55,-1,55,49,43,-1,49,55,56,-1,56,3,49,-1,46,58,57,-1,57,45,46,-1,45,57,59,-1,59,47,45,-1,47,59,60,-1,60,50,47,-1,50,60,61,-1,61,41,50,-1,41,61,62,-1,62,36,41,-1,36,62,63,-1,63,20,36,-1,21,65,64,-1,64,48,21,-1,48,64,58,-1,58,46,48,-1,28,29,30,-1,31,63,62,-1,30,31,62,-1,62,61,60,-1,60,59,57,-1,62,60,57,-1,62,57,58,-1,58,64,65,-1,65,32,26,-1,58,65,26,-1,62,58,26,-1,30,62,26,-1,28,30,26,-1,27,28,26,-1]
IndexedFaceSet768.creaseAngle = 3.14159
IndexedFaceSet768.texCoordIndex = [0,1,16,-1,4,5,26,-1,26,3,4,-1,3,15,4,-1,5,4,6,-1,6,7,5,-1,22,3,26,-1,3,22,8,-1,8,15,3,-1,27,5,7,-1,7,10,27,-1,5,27,26,-1,14,9,20,-1,20,19,14,-1,9,21,20,-1,13,14,19,-1,19,23,13,-1,18,8,22,-1,11,12,24,-1,24,25,11,-1,17,2,0,-1,0,16,17,-1,8,18,21,-1,21,9,8,-1,8,9,29,-1,29,28,8,-1,9,14,30,-1,30,29,9,-1,14,13,31,-1,31,30,14,-1,12,11,32,-1,32,31,12,-1,19,20,34,-1,34,33,19,-1,20,21,35,-1,35,34,20,-1,21,18,36,-1,36,35,21,-1,18,22,37,-1,37,36,18,-1,22,26,38,-1,38,37,22,-1,26,27,39,-1,39,38,26,-1,25,24,41,-1,41,40,25,-1,23,19,33,-1,33,41,23,-1,42,44,43,-1,47,46,45,-1,45,48,47,-1,46,47,49,-1,48,51,50,-1,50,47,48,-1,52,45,46,-1,46,49,53,-1,53,52,46,-1,55,54,51,-1,51,48,55,-1,48,45,55,-1,56,59,58,-1,58,57,56,-1,57,58,60,-1,62,61,59,-1,59,56,62,-1,63,52,53,-1,65,64,67,-1,67,66,65,-1,68,44,42,-1,42,69,68,-1,53,57,60,-1,60,63,53,-1,53,71,70,-1,70,57,53,-1,57,70,72,-1,72,56,57,-1,56,72,73,-1,73,62,56,-1,66,73,74,-1,74,65,66,-1,59,76,75,-1,75,58,59,-1,58,75,77,-1,77,60,58,-1,60,77,78,-1,78,63,60,-1,63,78,79,-1,79,52,63,-1,52,79,80,-1,80,45,52,-1,45,80,81,-1,81,55,45,-1,64,83,82,-1,82,67,64,-1,61,82,76,-1,76,59,61,-1,35,36,37,-1,38,39,80,-1,37,38,80,-1,80,79,78,-1,78,77,75,-1,80,78,75,-1,80,75,76,-1,76,82,83,-1,83,41,33,-1,76,83,33,-1,80,76,33,-1,37,80,33,-1,35,37,33,-1,34,35,33,-1]
Coordinate769 = x3d.Coordinate()

IndexedFaceSet768.coord = Coordinate769
TextureCoordinate770 = x3d.TextureCoordinate()

IndexedFaceSet768.texCoord = TextureCoordinate770

Shape764.geometry = IndexedFaceSet768

Transform763.children.append(Shape764)

HAnimSegment762.children.append(Transform763)

HAnimJoint761.children.append(HAnimSegment762)
HAnimJoint771 = x3d.HAnimJoint()
HAnimJoint771.name = "vt1"
HAnimJoint771.DEF = "hanim_vt1"
HAnimJoint771.center = [0,1.5121800279000002,-0.01376325]
HAnimJoint771.ulimit = [0,0,0]
HAnimJoint771.llimit = [0,0,0]
HAnimSegment772 = x3d.HAnimSegment()
HAnimSegment772.name = "t1"
HAnimSegment772.DEF = "hanim_t1"
Transform773 = x3d.Transform()
Transform773.translation = [0,1.5121800279000002,-0.01376325]
Shape774 = x3d.Shape()
Appearance775 = x3d.Appearance()
Material776 = x3d.Material()
Material776.diffuseColor = [0.588,0.588,0.588]

Appearance775.material = Material776
ImageTexture777 = x3d.ImageTexture()
ImageTexture777.USE = "JinLOA4TextureAtlas"

Appearance775.texture = ImageTexture777

Shape774.appearance = Appearance775
IndexedFaceSet778 = x3d.IndexedFaceSet()
IndexedFaceSet778.coordIndex = [1,5,3,-1,3,2,1,-1,5,6,3,-1,7,27,3,-1,3,6,7,-1,0,1,2,-1,43,11,10,-1,10,4,43,-1,5,1,12,-1,1,0,12,-1,35,26,12,-1,43,4,12,-1,4,5,12,-1,72,28,9,-1,9,28,27,-1,27,7,9,-1,5,4,10,-1,10,6,5,-1,29,72,8,-1,26,35,14,-1,14,49,26,-1,35,0,15,-1,15,14,35,-1,17,16,18,-1,18,19,17,-1,16,27,28,-1,28,18,16,-1,13,2,16,-1,27,16,2,-1,2,3,27,-1,19,18,29,-1,29,8,19,-1,18,28,72,-1,72,29,18,-1,0,13,15,-1,21,20,23,-1,23,61,21,-1,20,22,24,-1,24,23,20,-1,22,17,19,-1,19,24,22,-1,20,21,49,-1,49,14,20,-1,22,20,14,-1,14,15,22,-1,15,17,22,-1,61,23,30,-1,30,25,61,-1,23,24,33,-1,33,30,23,-1,24,19,8,-1,8,33,24,-1,0,2,13,-1,15,13,17,-1,16,17,13,-1,68,69,32,-1,32,31,68,-1,30,33,32,-1,33,8,34,-1,33,34,31,-1,31,32,33,-1,32,69,25,-1,25,30,32,-1,12,0,35,-1,37,36,58,-1,58,38,37,-1,38,58,39,-1,40,39,58,-1,58,41,40,-1,51,36,37,-1,43,42,44,-1,44,11,43,-1,38,12,37,-1,37,12,51,-1,45,12,26,-1,43,12,42,-1,42,12,38,-1,73,47,56,-1,47,40,41,-1,41,56,47,-1,38,39,44,-1,44,42,38,-1,46,59,73,-1,26,49,48,-1,48,45,26,-1,45,48,50,-1,50,51,45,-1,54,53,52,-1,52,55,54,-1,55,52,56,-1,56,41,55,-1,57,55,36,-1,41,58,36,-1,36,55,41,-1,53,59,46,-1,46,52,53,-1,52,46,73,-1,73,56,52,-1,51,50,57,-1,21,61,60,-1,60,62,21,-1,62,60,63,-1,63,64,62,-1,64,63,53,-1,53,54,64,-1,62,48,49,-1,49,21,62,-1,64,50,48,-1,48,62,64,-1,50,64,54,-1,61,25,65,-1,65,60,61,-1,60,65,66,-1,66,63,60,-1,63,66,59,-1,59,53,63,-1,51,57,36,-1,50,54,57,-1,55,57,54,-1,68,67,70,-1,70,69,68,-1,65,70,66,-1,66,71,59,-1,66,70,67,-1,67,71,66,-1,70,65,25,-1,25,69,70,-1,12,45,51,-1,81,82,83,-1,81,83,84,-1,81,84,85,-1,85,86,87,-1,81,85,87,-1,88,89,90,-1,88,90,91,-1,87,88,91,-1,91,74,75,-1,91,75,76,-1,87,91,76,-1,87,76,77,-1,81,87,77,-1,81,77,78,-1,81,78,79,-1,81,79,80,-1,7,6,75,-1,75,74,7,-1,6,10,76,-1,76,75,6,-1,10,11,77,-1,77,76,10,-1,11,44,78,-1,78,77,11,-1,44,39,79,-1,79,78,44,-1,39,40,80,-1,80,79,39,-1,40,47,81,-1,81,80,40,-1,47,73,82,-1,82,81,47,-1,73,59,83,-1,83,82,73,-1,59,71,84,-1,84,83,59,-1,71,67,85,-1,85,84,71,-1,67,68,86,-1,86,85,67,-1,68,31,87,-1,87,86,68,-1,31,34,88,-1,88,87,31,-1,34,8,89,-1,89,88,34,-1,8,72,90,-1,90,89,8,-1,72,9,91,-1,91,90,72,-1,9,7,74,-1,74,91,9,-1]
IndexedFaceSet778.creaseAngle = 3.14159
IndexedFaceSet778.texCoordIndex = [14,15,0,-1,0,16,14,-1,15,19,0,-1,21,10,11,-1,11,18,21,-1,5,2,1,-1,6,25,24,-1,24,4,6,-1,3,2,13,-1,2,5,13,-1,66,7,13,-1,6,4,17,-1,4,15,17,-1,20,9,23,-1,23,9,10,-1,10,21,23,-1,15,4,24,-1,24,19,15,-1,12,20,22,-1,48,47,26,-1,26,27,48,-1,47,49,28,-1,28,26,47,-1,31,32,29,-1,29,30,31,-1,32,53,54,-1,54,29,32,-1,33,50,32,-1,53,32,50,-1,50,51,53,-1,30,29,55,-1,55,56,30,-1,29,54,52,-1,52,55,29,-1,49,33,28,-1,36,41,40,-1,40,35,36,-1,37,39,38,-1,38,34,37,-1,39,31,30,-1,30,38,39,-1,42,36,43,-1,43,45,42,-1,39,37,26,-1,26,28,39,-1,28,31,39,-1,35,44,57,-1,57,46,35,-1,34,38,65,-1,65,58,34,-1,38,30,56,-1,56,65,38,-1,49,50,33,-1,28,33,31,-1,32,31,33,-1,62,63,64,-1,64,61,62,-1,57,65,64,-1,65,56,60,-1,65,60,61,-1,61,64,65,-1,64,63,59,-1,59,57,64,-1,13,8,66,-1,69,68,67,-1,67,70,69,-1,70,67,71,-1,74,73,72,-1,72,75,74,-1,76,78,77,-1,80,79,82,-1,82,81,80,-1,83,84,77,-1,77,84,76,-1,85,84,86,-1,80,87,79,-1,79,87,70,-1,132,90,89,-1,90,74,75,-1,75,89,90,-1,70,71,82,-1,82,79,70,-1,88,91,132,-1,94,93,92,-1,92,95,94,-1,95,92,96,-1,96,97,95,-1,100,99,98,-1,98,101,100,-1,101,98,102,-1,102,103,101,-1,104,101,105,-1,103,106,105,-1,105,101,103,-1,99,108,107,-1,107,98,99,-1,98,107,109,-1,109,102,98,-1,97,96,104,-1,112,111,110,-1,110,113,112,-1,116,115,114,-1,114,117,116,-1,117,114,99,-1,99,100,117,-1,120,119,118,-1,118,112,120,-1,117,96,92,-1,92,116,117,-1,96,117,100,-1,111,122,121,-1,121,123,111,-1,115,125,124,-1,124,114,115,-1,114,124,108,-1,108,99,114,-1,97,104,105,-1,96,100,104,-1,101,104,100,-1,127,126,129,-1,129,128,127,-1,121,129,124,-1,124,130,108,-1,124,129,126,-1,126,130,124,-1,129,121,131,-1,131,128,129,-1,84,85,133,-1,141,142,143,-1,141,143,144,-1,141,144,145,-1,145,146,147,-1,141,145,147,-1,148,149,150,-1,148,150,151,-1,147,148,151,-1,151,134,135,-1,151,135,136,-1,147,151,136,-1,147,136,137,-1,141,147,137,-1,141,137,138,-1,141,138,139,-1,141,139,140,-1,21,18,135,-1,135,134,21,-1,19,24,136,-1,136,135,19,-1,24,25,137,-1,137,136,24,-1,81,82,138,-1,138,137,81,-1,82,71,139,-1,139,138,82,-1,73,74,140,-1,140,139,73,-1,74,90,141,-1,141,140,74,-1,90,132,142,-1,142,141,90,-1,132,91,143,-1,143,142,132,-1,108,130,144,-1,144,143,108,-1,130,126,145,-1,145,144,130,-1,126,127,146,-1,146,145,126,-1,62,61,147,-1,147,146,62,-1,61,60,148,-1,148,147,61,-1,60,56,149,-1,149,148,60,-1,22,20,150,-1,150,149,22,-1,20,23,151,-1,151,150,20,-1,23,21,134,-1,134,151,23,-1]
Coordinate779 = x3d.Coordinate()

IndexedFaceSet778.coord = Coordinate779
TextureCoordinate780 = x3d.TextureCoordinate()

IndexedFaceSet778.texCoord = TextureCoordinate780

Shape774.geometry = IndexedFaceSet778

Transform773.children.append(Shape774)

HAnimSegment772.children.append(Transform773)

HAnimJoint771.children.append(HAnimSegment772)
HAnimJoint781 = x3d.HAnimJoint()
HAnimJoint781.name = "vc7"
HAnimJoint781.DEF = "hanim_vc7"
HAnimJoint781.center = [0,1.5442649442,-0.015063749999999999]
HAnimJoint781.ulimit = [0,0,0]
HAnimJoint781.llimit = [0,0,0]
HAnimSegment782 = x3d.HAnimSegment()
HAnimSegment782.name = "c7"
HAnimSegment782.DEF = "hanim_c7"
Transform783 = x3d.Transform()
Transform783.translation = [0,1.5442649442,-0.015063749999999999]
Shape784 = x3d.Shape()
Appearance785 = x3d.Appearance()
Material786 = x3d.Material()
Material786.diffuseColor = [0.588,0.588,0.588]

Appearance785.material = Material786
ImageTexture787 = x3d.ImageTexture()
ImageTexture787.USE = "JinLOA4TextureAtlas"

Appearance785.texture = ImageTexture787

Shape784.appearance = Appearance785
IndexedFaceSet788 = x3d.IndexedFaceSet()
IndexedFaceSet788.coordIndex = [5,6,33,-1,33,28,5,-1,34,32,1,-1,1,7,34,-1,30,34,7,-1,7,8,30,-1,28,29,11,-1,11,5,28,-1,29,35,10,-1,10,11,29,-1,14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,1,0,13,-1,13,12,1,-1,0,2,14,-1,14,13,0,-1,2,3,15,-1,15,14,2,-1,3,4,16,-1,16,15,3,-1,4,6,17,-1,17,16,4,-1,6,5,18,-1,18,17,6,-1,5,11,19,-1,19,18,5,-1,11,10,20,-1,20,19,11,-1,10,9,21,-1,21,20,10,-1,9,8,22,-1,22,21,9,-1,8,7,23,-1,23,22,8,-1,7,1,12,-1,12,23,7,-1,0,1,32,-1,32,24,0,-1,2,0,24,-1,24,25,2,-1,3,2,25,-1,25,26,3,-1,4,3,26,-1,26,27,4,-1,6,4,27,-1,27,33,6,-1,8,9,31,-1,31,30,8,-1,9,10,35,-1,35,31,9,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,24,32,37,-1,37,36,24,-1,32,34,38,-1,38,37,32,-1,34,30,39,-1,39,38,34,-1,30,31,40,-1,40,39,30,-1,31,35,41,-1,41,40,31,-1,35,29,42,-1,42,41,35,-1,29,28,43,-1,43,42,29,-1,28,33,44,-1,44,43,28,-1,33,27,45,-1,45,44,33,-1,27,26,46,-1,46,45,27,-1,26,25,47,-1,47,46,26,-1,25,24,36,-1,36,47,25,-1]
IndexedFaceSet788.creaseAngle = 3.14159
IndexedFaceSet788.texCoordIndex = [5,6,33,-1,33,28,5,-1,34,32,1,-1,1,7,34,-1,30,34,7,-1,7,8,30,-1,28,29,11,-1,11,5,28,-1,29,35,10,-1,10,11,29,-1,14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,1,0,13,-1,13,12,1,-1,0,2,14,-1,14,13,0,-1,2,3,15,-1,15,14,2,-1,3,4,16,-1,16,15,3,-1,4,6,17,-1,17,16,4,-1,6,5,18,-1,18,17,6,-1,5,11,19,-1,19,18,5,-1,11,10,20,-1,20,19,11,-1,10,9,21,-1,21,20,10,-1,9,8,22,-1,22,21,9,-1,8,7,23,-1,23,22,8,-1,7,1,12,-1,12,23,7,-1,0,1,32,-1,32,24,0,-1,2,0,24,-1,24,25,2,-1,3,2,25,-1,25,26,3,-1,4,3,26,-1,26,27,4,-1,6,4,27,-1,27,33,6,-1,8,9,31,-1,31,30,8,-1,9,10,35,-1,35,31,9,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,24,32,37,-1,37,36,24,-1,32,34,38,-1,38,37,32,-1,34,30,39,-1,39,38,34,-1,30,31,40,-1,40,39,30,-1,31,35,41,-1,41,40,31,-1,35,29,42,-1,42,41,35,-1,29,28,43,-1,43,42,29,-1,28,33,44,-1,44,43,28,-1,33,27,45,-1,45,44,33,-1,27,26,46,-1,46,45,27,-1,26,25,47,-1,47,46,26,-1,25,24,36,-1,36,47,25,-1]
Coordinate789 = x3d.Coordinate()

IndexedFaceSet788.coord = Coordinate789
TextureCoordinate790 = x3d.TextureCoordinate()

IndexedFaceSet788.texCoord = TextureCoordinate790

Shape784.geometry = IndexedFaceSet788

Transform783.children.append(Shape784)

HAnimSegment782.children.append(Transform783)

HAnimJoint781.children.append(HAnimSegment782)
HAnimJoint791 = x3d.HAnimJoint()
HAnimJoint791.name = "vc6"
HAnimJoint791.DEF = "hanim_vc6"
HAnimJoint791.center = [0,1.5593309721000002,-0.015063749999999999]
HAnimJoint791.ulimit = [0,0,0]
HAnimJoint791.llimit = [0,0,0]
HAnimSegment792 = x3d.HAnimSegment()
HAnimSegment792.name = "c6"
HAnimSegment792.DEF = "hanim_c6"
Transform793 = x3d.Transform()
Transform793.translation = [0,1.5593309721000002,-0.015063749999999999]
Shape794 = x3d.Shape()
Appearance795 = x3d.Appearance()
Material796 = x3d.Material()
Material796.diffuseColor = [0.588,0.588,0.588]

Appearance795.material = Material796
ImageTexture797 = x3d.ImageTexture()
ImageTexture797.USE = "JinLOA4TextureAtlas"

Appearance795.texture = ImageTexture797

Shape794.appearance = Appearance795
IndexedFaceSet798 = x3d.IndexedFaceSet()
IndexedFaceSet798.coordIndex = [12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1]
IndexedFaceSet798.creaseAngle = 3.14159
IndexedFaceSet798.texCoordIndex = [12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1]
Coordinate799 = x3d.Coordinate()

IndexedFaceSet798.coord = Coordinate799
TextureCoordinate800 = x3d.TextureCoordinate()

IndexedFaceSet798.texCoord = TextureCoordinate800

Shape794.geometry = IndexedFaceSet798

Transform793.children.append(Shape794)

HAnimSegment792.children.append(Transform793)

HAnimJoint791.children.append(HAnimSegment792)
HAnimJoint801 = x3d.HAnimJoint()
HAnimJoint801.name = "vc5"
HAnimJoint801.DEF = "hanim_vc5"
HAnimJoint801.center = [0,1.5746759721,-0.015063749999999999]
HAnimJoint801.ulimit = [0,0,0]
HAnimJoint801.llimit = [0,0,0]
HAnimSegment802 = x3d.HAnimSegment()
HAnimSegment802.name = "c5"
HAnimSegment802.DEF = "hanim_c5"
Transform803 = x3d.Transform()
Transform803.translation = [0,1.5746759721,-0.015063749999999999]
Shape804 = x3d.Shape()
Appearance805 = x3d.Appearance()
Material806 = x3d.Material()
Material806.diffuseColor = [0.588,0.588,0.588]

Appearance805.material = Material806
ImageTexture807 = x3d.ImageTexture()
ImageTexture807.USE = "JinLOA4TextureAtlas"

Appearance805.texture = ImageTexture807

Shape804.appearance = Appearance805
IndexedFaceSet808 = x3d.IndexedFaceSet()
IndexedFaceSet808.coordIndex = [12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1]
IndexedFaceSet808.creaseAngle = 3.14159
IndexedFaceSet808.texCoordIndex = [12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1]
Coordinate809 = x3d.Coordinate()

IndexedFaceSet808.coord = Coordinate809
TextureCoordinate810 = x3d.TextureCoordinate()

IndexedFaceSet808.texCoord = TextureCoordinate810

Shape804.geometry = IndexedFaceSet808

Transform803.children.append(Shape804)

HAnimSegment802.children.append(Transform803)

HAnimJoint801.children.append(HAnimSegment802)
HAnimJoint811 = x3d.HAnimJoint()
HAnimJoint811.name = "vc4"
HAnimJoint811.DEF = "hanim_vc4"
HAnimJoint811.center = [0,1.5900210558,-0.015063749999999999]
HAnimJoint811.ulimit = [0,0,0]
HAnimJoint811.llimit = [0,0,0]
HAnimSegment812 = x3d.HAnimSegment()
HAnimSegment812.name = "c4"
HAnimSegment812.DEF = "hanim_c4"
Transform813 = x3d.Transform()
Transform813.translation = [0,1.5900210558,-0.015063749999999999]
Shape814 = x3d.Shape()
Appearance815 = x3d.Appearance()
Material816 = x3d.Material()
Material816.diffuseColor = [0.588,0.588,0.588]

Appearance815.material = Material816
ImageTexture817 = x3d.ImageTexture()
ImageTexture817.USE = "JinLOA4TextureAtlas"

Appearance815.texture = ImageTexture817

Shape814.appearance = Appearance815
IndexedFaceSet818 = x3d.IndexedFaceSet()
IndexedFaceSet818.coordIndex = [12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1]
IndexedFaceSet818.creaseAngle = 3.14159
IndexedFaceSet818.texCoordIndex = [12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1]
Coordinate819 = x3d.Coordinate()

IndexedFaceSet818.coord = Coordinate819
TextureCoordinate820 = x3d.TextureCoordinate()

IndexedFaceSet818.texCoord = TextureCoordinate820

Shape814.geometry = IndexedFaceSet818

Transform813.children.append(Shape814)

HAnimSegment812.children.append(Transform813)

HAnimJoint811.children.append(HAnimSegment812)
HAnimJoint821 = x3d.HAnimJoint()
HAnimJoint821.name = "vc3"
HAnimJoint821.DEF = "hanim_vc3"
HAnimJoint821.center = [0,1.6059240279,-0.015063749999999999]
HAnimJoint821.ulimit = [0,0,0]
HAnimJoint821.llimit = [0,0,0]
HAnimSegment822 = x3d.HAnimSegment()
HAnimSegment822.name = "c3"
HAnimSegment822.DEF = "hanim_c3"
Transform823 = x3d.Transform()
Transform823.translation = [0,1.6059240279,-0.015063749999999999]
Shape824 = x3d.Shape()
Appearance825 = x3d.Appearance()
Material826 = x3d.Material()
Material826.diffuseColor = [0.588,0.588,0.588]

Appearance825.material = Material826
ImageTexture827 = x3d.ImageTexture()
ImageTexture827.USE = "JinLOA4TextureAtlas"

Appearance825.texture = ImageTexture827

Shape824.appearance = Appearance825
IndexedFaceSet828 = x3d.IndexedFaceSet()
IndexedFaceSet828.coordIndex = [8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1]
IndexedFaceSet828.creaseAngle = 3.14159
IndexedFaceSet828.texCoordIndex = [8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1]
Coordinate829 = x3d.Coordinate()

IndexedFaceSet828.coord = Coordinate829
TextureCoordinate830 = x3d.TextureCoordinate()

IndexedFaceSet828.texCoord = TextureCoordinate830

Shape824.geometry = IndexedFaceSet828

Transform823.children.append(Shape824)

HAnimSegment822.children.append(Transform823)

HAnimJoint821.children.append(HAnimSegment822)
HAnimJoint831 = x3d.HAnimJoint()
HAnimJoint831.name = "vc2"
HAnimJoint831.DEF = "hanim_vc2"
HAnimJoint831.center = [0,1.6204320558,-0.015063749999999999]
HAnimJoint831.ulimit = [0,0,0]
HAnimJoint831.llimit = [0,0,0]
HAnimSegment832 = x3d.HAnimSegment()
HAnimSegment832.name = "c2"
HAnimSegment832.DEF = "hanim_c2"
Transform833 = x3d.Transform()
Transform833.translation = [0,1.6204320558,-0.015063749999999999]
Shape834 = x3d.Shape()
Appearance835 = x3d.Appearance()
Material836 = x3d.Material()
Material836.diffuseColor = [0.588,0.588,0.588]

Appearance835.material = Material836
ImageTexture837 = x3d.ImageTexture()
ImageTexture837.USE = "JinLOA4TextureAtlas"

Appearance835.texture = ImageTexture837

Shape834.appearance = Appearance835
IndexedFaceSet838 = x3d.IndexedFaceSet()
IndexedFaceSet838.coordIndex = [14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,0,1,13,-1,13,12,0,-1,1,7,14,-1,14,13,1,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,6,19,-1,19,18,11,-1,6,5,20,-1,20,19,6,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,12,-1,12,23,2,-1,1,0,24,-1,24,32,1,-1,0,2,25,-1,25,24,0,-1,2,3,26,-1,26,25,2,-1,3,4,27,-1,27,26,3,-1,4,5,33,-1,33,27,4,-1,9,8,30,-1,30,31,9,-1,10,9,31,-1,31,35,10,-1,5,6,28,-1,28,33,5,-1,7,1,32,-1,32,34,7,-1,8,7,34,-1,34,30,8,-1,6,11,29,-1,29,28,6,-1,11,10,35,-1,35,29,11,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,32,24,37,-1,37,36,32,-1,24,25,38,-1,38,37,24,-1,25,26,39,-1,39,38,25,-1,26,27,40,-1,40,39,26,-1,27,33,41,-1,41,40,27,-1,33,28,42,-1,42,41,33,-1,28,29,43,-1,43,42,28,-1,29,35,44,-1,44,43,29,-1,35,31,45,-1,45,44,35,-1,31,30,46,-1,46,45,31,-1,30,34,47,-1,47,46,30,-1,34,32,36,-1,36,47,34,-1]
IndexedFaceSet838.creaseAngle = 3.14159
IndexedFaceSet838.texCoordIndex = [14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,0,1,13,-1,13,12,0,-1,1,7,14,-1,14,13,1,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,6,19,-1,19,18,11,-1,6,5,20,-1,20,19,6,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,12,-1,12,23,2,-1,1,0,24,-1,24,32,1,-1,0,2,25,-1,25,24,0,-1,2,3,26,-1,26,25,2,-1,3,4,27,-1,27,26,3,-1,4,5,33,-1,33,27,4,-1,9,8,30,-1,30,31,9,-1,10,9,31,-1,31,35,10,-1,5,6,28,-1,28,33,5,-1,7,1,32,-1,32,34,7,-1,8,7,34,-1,34,30,8,-1,6,11,29,-1,29,28,6,-1,11,10,35,-1,35,29,11,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,32,24,37,-1,37,36,32,-1,24,25,38,-1,38,37,24,-1,25,26,39,-1,39,38,25,-1,26,27,40,-1,40,39,26,-1,27,33,41,-1,41,40,27,-1,33,28,42,-1,42,41,33,-1,28,29,43,-1,43,42,28,-1,29,35,44,-1,44,43,29,-1,35,31,45,-1,45,44,35,-1,31,30,46,-1,46,45,31,-1,30,34,47,-1,47,46,30,-1,34,32,36,-1,36,47,34,-1]
Coordinate839 = x3d.Coordinate()

IndexedFaceSet838.coord = Coordinate839
TextureCoordinate840 = x3d.TextureCoordinate()

IndexedFaceSet838.texCoord = TextureCoordinate840

Shape834.geometry = IndexedFaceSet838

Transform833.children.append(Shape834)

HAnimSegment832.children.append(Transform833)

HAnimJoint831.children.append(HAnimSegment832)
HAnimJoint841 = x3d.HAnimJoint()
HAnimJoint841.name = "vc1"
HAnimJoint841.DEF = "hanim_vc1"
HAnimJoint841.center = [0,1.6349399442,-0.015063749999999999]
HAnimJoint841.ulimit = [0,0,0]
HAnimJoint841.llimit = [0,0,0]
HAnimSegment842 = x3d.HAnimSegment()
HAnimSegment842.name = "c1"
HAnimSegment842.DEF = "hanim_c1"
Transform843 = x3d.Transform()
Transform843.translation = [0,1.6349399442,-0.015063749999999999]
Shape844 = x3d.Shape()
Appearance845 = x3d.Appearance()
Material846 = x3d.Material()
Material846.diffuseColor = [0.588,0.588,0.588]

Appearance845.material = Material846
ImageTexture847 = x3d.ImageTexture()
ImageTexture847.USE = "JinLOA4TextureAtlas"

Appearance845.texture = ImageTexture847

Shape844.appearance = Appearance845
IndexedFaceSet848 = x3d.IndexedFaceSet()
IndexedFaceSet848.coordIndex = [8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1]
IndexedFaceSet848.creaseAngle = 3.14159
IndexedFaceSet848.texCoordIndex = [8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1]
Coordinate849 = x3d.Coordinate()

IndexedFaceSet848.coord = Coordinate849
TextureCoordinate850 = x3d.TextureCoordinate()

IndexedFaceSet848.texCoord = TextureCoordinate850

Shape844.geometry = IndexedFaceSet848

Transform843.children.append(Shape844)

HAnimSegment842.children.append(Transform843)

HAnimJoint841.children.append(HAnimSegment842)
HAnimJoint851 = x3d.HAnimJoint()
HAnimJoint851.name = "skullbase"
HAnimJoint851.DEF = "hanim_skullbase"
HAnimJoint851.center = [0,1.6276860000000002,-0.01544175]
HAnimJoint851.ulimit = [0,0,0]
HAnimJoint851.llimit = [0,0,0]
HAnimSegment852 = x3d.HAnimSegment()
HAnimSegment852.name = "skull"
HAnimSegment852.DEF = "hanim_skull"
Transform853 = x3d.Transform()
Transform853.translation = [0,1.6276860000000002,-0.01544175]
Shape854 = x3d.Shape()
Appearance855 = x3d.Appearance()
Material856 = x3d.Material()
Material856.diffuseColor = [0.588,0.588,0.588]

Appearance855.material = Material856
ImageTexture857 = x3d.ImageTexture()
ImageTexture857.USE = "JinLOA4TextureAtlas"

Appearance855.texture = ImageTexture857

Shape854.appearance = Appearance855
IndexedFaceSet858 = x3d.IndexedFaceSet()
IndexedFaceSet858.coordIndex = [51,38,41,-1,41,43,51,-1,43,52,171,-1,171,151,43,-1,49,42,41,-1,41,38,49,-1,44,186,171,-1,171,52,44,-1,78,76,51,-1,51,43,78,-1,189,78,43,-1,43,151,189,-1,9,172,13,-1,13,10,9,-1,73,193,9,-1,9,10,73,-1,11,50,27,-1,16,13,172,-1,13,67,14,-1,68,15,14,-1,7,6,67,-1,13,16,67,-1,7,67,16,-1,16,172,173,-1,7,16,136,-1,7,136,130,-1,131,132,173,-1,68,19,18,-1,18,15,68,-1,20,32,18,-1,17,8,32,-1,15,66,13,-1,13,14,15,-1,32,23,24,-1,24,17,32,-1,21,24,23,-1,21,22,24,-1,24,22,17,-1,27,25,11,-1,25,31,11,-1,22,28,17,-1,27,30,29,-1,12,26,29,-1,26,27,29,-1,27,28,30,-1,30,28,22,-1,6,14,67,-1,1,34,31,-1,34,36,35,-1,34,35,31,-1,34,1,36,-1,49,37,1,-1,1,40,49,-1,39,37,49,-1,49,38,39,-1,37,39,1,-1,42,49,40,-1,40,0,42,-1,44,52,0,-1,186,44,0,-1,0,149,186,-1,51,76,45,-1,45,76,77,-1,53,45,77,-1,1,39,45,-1,45,53,1,-1,45,39,38,-1,38,51,45,-1,53,77,46,-1,77,74,33,-1,33,46,77,-1,1,53,46,-1,46,36,1,-1,46,33,35,-1,35,36,46,-1,74,50,33,-1,8,17,47,-1,11,31,50,-1,35,33,50,-1,31,35,50,-1,50,74,75,-1,47,75,8,-1,27,50,28,-1,28,50,47,-1,28,47,17,-1,75,73,48,-1,48,73,10,-1,66,48,10,-1,10,13,66,-1,75,66,8,-1,66,75,48,-1,8,66,18,-1,18,32,8,-1,15,18,66,-1,47,50,75,-1,41,52,43,-1,42,0,41,-1,0,52,41,-1,0,54,149,-1,244,245,54,-1,0,56,54,-1,0,40,55,-1,55,57,0,-1,3,57,55,-1,0,57,56,-1,3,62,5,-1,5,62,58,-1,3,64,62,-1,2,61,62,-1,62,64,2,-1,3,60,64,-1,55,40,59,-1,64,60,59,-1,64,59,135,-1,149,54,245,-1,5,57,3,-1,54,5,244,-1,152,63,61,-1,153,63,152,-1,63,5,58,-1,153,244,63,-1,244,5,63,-1,58,61,63,-1,58,62,61,-1,56,5,54,-1,56,57,5,-1,60,3,55,-1,60,55,59,-1,1,133,135,-1,59,40,1,-1,59,1,135,-1,65,135,133,-1,2,65,133,-1,2,64,65,-1,64,135,65,-1,73,75,69,-1,263,193,73,-1,73,69,263,-1,69,75,74,-1,74,71,69,-1,71,74,77,-1,77,72,71,-1,69,71,266,-1,266,263,69,-1,72,70,266,-1,266,71,72,-1,78,72,77,-1,77,76,78,-1,189,70,72,-1,72,78,189,-1,138,123,113,-1,79,122,123,-1,122,79,80,-1,137,124,81,-1,137,81,82,-1,137,82,83,-1,83,79,137,-1,79,83,80,-1,84,116,122,-1,124,84,122,-1,84,119,116,-1,123,122,113,-1,113,122,109,-1,115,138,113,-1,113,114,115,-1,117,286,158,-1,158,112,117,-1,122,116,109,-1,79,123,133,-1,133,123,138,-1,133,137,79,-1,129,138,115,-1,110,117,112,-1,111,117,110,-1,2,133,138,-1,109,85,113,-1,86,113,85,-1,107,294,160,-1,160,126,107,-1,107,126,125,-1,125,108,107,-1,125,127,87,-1,87,108,125,-1,108,87,103,-1,103,104,108,-1,114,301,154,-1,154,115,114,-1,302,114,86,-1,86,159,302,-1,114,113,86,-1,116,105,109,-1,109,105,87,-1,85,88,86,-1,109,87,85,-1,104,174,305,-1,305,108,104,-1,305,175,108,-1,105,103,87,-1,307,91,170,-1,170,150,307,-1,174,104,95,-1,95,162,174,-1,311,150,170,-1,170,177,311,-1,116,90,105,-1,89,90,116,-1,94,168,167,-1,167,93,94,-1,105,90,96,-1,97,95,104,-1,104,103,97,-1,120,121,95,-1,95,97,120,-1,105,96,97,-1,97,103,105,-1,120,97,96,-1,96,98,120,-1,121,100,95,-1,163,91,162,-1,93,170,99,-1,98,96,90,-1,90,101,98,-1,99,163,100,-1,110,112,92,-1,101,90,89,-1,89,106,101,-1,92,112,165,-1,165,177,170,-1,175,294,107,-1,107,108,175,-1,119,89,116,-1,118,111,119,-1,118,117,111,-1,152,138,129,-1,2,138,61,-1,61,138,152,-1,87,127,88,-1,88,85,87,-1,124,119,84,-1,119,111,164,-1,111,166,164,-1,111,110,166,-1,92,166,110,-1,133,4,137,-1,133,134,4,-1,160,176,128,-1,128,126,160,-1,126,128,127,-1,127,125,126,-1,80,81,124,-1,124,122,80,-1,82,81,80,-1,80,83,82,-1,129,115,154,-1,154,152,129,-1,94,140,139,-1,139,102,94,-1,93,141,140,-1,140,94,93,-1,99,142,141,-1,141,93,99,-1,100,143,142,-1,142,99,100,-1,121,144,143,-1,143,100,121,-1,120,145,144,-1,144,121,120,-1,98,146,145,-1,145,120,98,-1,101,147,146,-1,146,98,101,-1,106,148,147,-1,147,101,106,-1,106,102,139,-1,139,148,106,-1,114,302,301,-1,88,127,155,-1,155,157,88,-1,127,161,156,-1,156,155,127,-1,352,353,156,-1,156,161,352,-1,156,353,354,-1,155,156,354,-1,155,354,157,-1,127,128,161,-1,161,128,176,-1,176,352,161,-1,168,94,102,-1,102,169,168,-1,170,93,167,-1,169,102,106,-1,106,164,169,-1,170,91,99,-1,99,91,163,-1,100,163,162,-1,162,95,100,-1,91,307,174,-1,174,162,91,-1,164,106,89,-1,164,89,119,-1,165,170,167,-1,92,165,167,-1,167,168,92,-1,166,92,168,-1,168,169,166,-1,164,166,169,-1,165,112,177,-1,177,112,158,-1,158,311,177,-1,180,179,178,-1,178,181,180,-1,179,151,171,-1,171,182,179,-1,183,181,178,-1,178,184,183,-1,185,182,171,-1,171,186,185,-1,187,179,180,-1,180,188,187,-1,189,151,179,-1,179,187,189,-1,9,191,190,-1,190,172,9,-1,192,191,9,-1,9,193,192,-1,194,196,195,-1,197,172,190,-1,190,199,198,-1,200,199,201,-1,202,198,203,-1,190,198,197,-1,202,197,198,-1,197,173,172,-1,202,204,197,-1,202,205,204,-1,206,173,207,-1,200,201,208,-1,208,209,200,-1,210,208,211,-1,212,211,213,-1,201,199,190,-1,190,214,201,-1,211,212,215,-1,215,216,211,-1,217,216,215,-1,217,215,218,-1,215,212,218,-1,196,194,219,-1,219,194,220,-1,218,212,221,-1,196,223,222,-1,224,223,225,-1,225,223,196,-1,196,222,221,-1,222,218,221,-1,203,198,199,-1,226,220,227,-1,227,229,228,-1,227,220,229,-1,227,228,226,-1,183,230,226,-1,226,231,183,-1,232,181,183,-1,183,231,232,-1,231,226,232,-1,184,233,230,-1,230,183,184,-1,185,233,182,-1,186,149,233,-1,233,185,186,-1,180,234,188,-1,234,235,188,-1,236,235,234,-1,226,236,234,-1,234,232,226,-1,234,180,181,-1,181,232,234,-1,236,237,235,-1,235,237,238,-1,238,239,235,-1,226,228,237,-1,237,236,226,-1,237,228,229,-1,229,238,237,-1,239,238,195,-1,213,240,212,-1,194,195,220,-1,229,195,238,-1,220,195,229,-1,195,241,239,-1,240,213,241,-1,196,221,195,-1,221,240,195,-1,221,212,240,-1,241,242,192,-1,242,191,192,-1,214,190,191,-1,191,242,214,-1,241,213,214,-1,214,242,241,-1,213,211,208,-1,208,214,213,-1,201,214,208,-1,240,241,195,-1,178,179,182,-1,184,178,233,-1,233,178,182,-1,233,149,243,-1,244,243,245,-1,233,243,246,-1,233,248,247,-1,247,230,233,-1,249,247,248,-1,233,246,248,-1,249,251,250,-1,251,252,250,-1,249,250,253,-1,254,253,250,-1,250,255,254,-1,249,253,256,-1,247,257,230,-1,253,257,256,-1,253,258,257,-1,149,245,243,-1,251,249,248,-1,243,244,251,-1,152,255,259,-1,153,152,259,-1,259,252,251,-1,153,259,244,-1,244,259,251,-1,252,259,255,-1,252,255,250,-1,246,243,251,-1,246,251,248,-1,256,247,249,-1,256,257,247,-1,226,258,260,-1,257,226,230,-1,257,258,226,-1,261,260,258,-1,254,260,261,-1,254,261,253,-1,253,261,258,-1,192,262,241,-1,263,262,192,-1,192,193,263,-1,262,264,239,-1,239,241,262,-1,264,265,235,-1,235,239,264,-1,262,263,266,-1,266,264,262,-1,265,264,266,-1,266,70,265,-1,187,188,235,-1,235,265,187,-1,189,187,265,-1,265,70,189,-1,267,269,268,-1,270,268,271,-1,271,272,270,-1,273,275,274,-1,273,276,275,-1,273,270,277,-1,277,276,273,-1,270,272,277,-1,278,271,279,-1,274,271,278,-1,278,279,280,-1,268,269,271,-1,269,281,271,-1,283,282,269,-1,269,267,283,-1,285,284,158,-1,158,286,285,-1,271,281,279,-1,270,260,268,-1,260,267,268,-1,260,270,273,-1,287,283,267,-1,288,284,285,-1,289,288,285,-1,254,267,260,-1,281,269,290,-1,291,290,269,-1,293,292,160,-1,160,294,293,-1,293,296,295,-1,295,292,293,-1,295,296,297,-1,297,298,295,-1,296,300,299,-1,299,297,296,-1,282,283,154,-1,154,301,282,-1,302,159,291,-1,291,282,302,-1,282,291,269,-1,279,281,303,-1,281,297,303,-1,290,291,304,-1,281,290,297,-1,300,296,305,-1,305,174,300,-1,305,296,175,-1,303,297,299,-1,307,150,306,-1,306,308,307,-1,174,310,309,-1,309,300,174,-1,311,312,306,-1,306,150,311,-1,279,303,313,-1,314,279,313,-1,315,318,317,-1,317,316,315,-1,303,319,313,-1,320,299,300,-1,300,309,320,-1,321,320,309,-1,309,322,321,-1,303,299,320,-1,320,319,303,-1,321,323,319,-1,319,320,321,-1,322,309,324,-1,325,310,308,-1,318,326,306,-1,323,327,313,-1,313,319,323,-1,326,324,325,-1,288,328,284,-1,327,329,314,-1,314,313,327,-1,328,330,284,-1,330,306,312,-1,175,293,294,-1,293,175,296,-1,280,279,314,-1,331,280,289,-1,331,289,285,-1,152,287,267,-1,254,255,267,-1,255,152,267,-1,297,290,304,-1,304,298,297,-1,274,278,280,-1,280,332,289,-1,289,332,333,-1,289,333,288,-1,328,288,333,-1,260,273,334,-1,260,334,335,-1,160,292,336,-1,336,176,160,-1,292,295,298,-1,298,336,292,-1,272,271,274,-1,274,275,272,-1,276,277,272,-1,272,275,276,-1,287,152,154,-1,154,283,287,-1,315,337,339,-1,339,338,315,-1,318,315,338,-1,338,340,318,-1,326,318,340,-1,340,341,326,-1,324,326,341,-1,341,342,324,-1,322,324,342,-1,342,343,322,-1,321,322,343,-1,343,344,321,-1,323,321,344,-1,344,345,323,-1,327,323,345,-1,345,346,327,-1,329,327,346,-1,346,347,329,-1,329,347,339,-1,339,337,329,-1,282,301,302,-1,304,349,348,-1,348,298,304,-1,298,348,351,-1,351,350,298,-1,352,350,351,-1,351,353,352,-1,348,349,354,-1,354,353,351,-1,348,354,351,-1,298,350,336,-1,350,352,176,-1,176,336,350,-1,316,355,337,-1,337,315,316,-1,306,317,318,-1,355,332,329,-1,329,337,355,-1,306,326,308,-1,326,325,308,-1,324,309,310,-1,310,325,324,-1,308,310,174,-1,174,307,308,-1,332,314,329,-1,332,280,314,-1,330,317,306,-1,328,316,317,-1,317,330,328,-1,333,355,316,-1,316,328,333,-1,332,355,333,-1,330,312,284,-1,312,311,158,-1,158,284,312,-1]
IndexedFaceSet858.creaseAngle = 3.14159
IndexedFaceSet858.texCoordIndex = [0,3,2,-1,2,1,0,-1,1,6,5,-1,5,4,1,-1,7,8,2,-1,2,3,7,-1,9,10,5,-1,5,6,9,-1,11,12,0,-1,0,1,11,-1,13,11,1,-1,1,4,13,-1,14,17,16,-1,16,15,14,-1,18,19,14,-1,14,15,18,-1,22,21,20,-1,23,16,17,-1,16,25,24,-1,27,26,24,-1,29,28,25,-1,16,23,25,-1,29,25,23,-1,31,17,30,-1,29,23,32,-1,33,32,31,-1,33,31,30,-1,27,35,34,-1,34,26,27,-1,37,36,34,-1,39,38,36,-1,26,40,16,-1,16,24,26,-1,36,42,41,-1,41,39,36,-1,43,41,42,-1,43,44,41,-1,41,44,39,-1,20,45,22,-1,45,46,22,-1,44,47,39,-1,20,49,50,-1,48,51,50,-1,51,20,50,-1,20,47,49,-1,49,47,44,-1,28,24,25,-1,53,52,46,-1,52,55,54,-1,52,54,46,-1,52,53,55,-1,7,57,53,-1,53,56,7,-1,58,57,7,-1,7,59,58,-1,57,58,53,-1,8,7,56,-1,56,60,8,-1,9,6,60,-1,10,9,60,-1,60,61,10,-1,0,12,62,-1,62,12,63,-1,64,62,63,-1,53,58,62,-1,62,64,53,-1,62,58,59,-1,59,0,62,-1,64,63,65,-1,63,67,66,-1,66,65,63,-1,53,64,65,-1,65,55,53,-1,65,66,54,-1,54,55,65,-1,67,21,66,-1,38,39,68,-1,22,46,21,-1,54,66,21,-1,46,54,21,-1,21,67,69,-1,68,69,38,-1,20,21,47,-1,47,21,68,-1,47,68,39,-1,69,18,70,-1,70,18,15,-1,40,70,15,-1,15,16,40,-1,69,71,38,-1,71,69,70,-1,38,71,34,-1,34,36,38,-1,26,34,71,-1,68,21,69,-1,2,6,1,-1,8,60,2,-1,60,6,2,-1,74,73,72,-1,77,76,75,-1,74,78,73,-1,74,81,80,-1,80,79,74,-1,82,79,80,-1,74,79,78,-1,82,84,83,-1,83,84,85,-1,82,86,84,-1,87,90,89,-1,89,88,87,-1,92,91,88,-1,80,81,93,-1,88,91,94,-1,86,93,95,-1,72,73,96,-1,83,79,82,-1,73,83,97,-1,100,99,98,-1,103,102,101,-1,99,83,85,-1,104,97,99,-1,97,83,99,-1,105,90,102,-1,105,89,90,-1,107,106,75,-1,107,108,106,-1,109,82,80,-1,109,80,93,-1,112,111,110,-1,93,81,113,-1,93,113,95,-1,114,110,111,-1,115,114,111,-1,87,86,116,-1,86,95,116,-1,18,69,117,-1,118,19,18,-1,18,117,118,-1,117,69,67,-1,67,119,117,-1,119,67,63,-1,63,120,119,-1,117,119,121,-1,121,118,117,-1,120,122,121,-1,121,119,120,-1,11,120,63,-1,63,12,11,-1,13,122,120,-1,120,11,13,-1,125,124,123,-1,127,126,124,-1,126,127,128,-1,131,130,129,-1,131,129,132,-1,131,132,133,-1,133,127,131,-1,127,133,128,-1,135,134,126,-1,130,135,126,-1,135,136,134,-1,124,126,123,-1,123,126,137,-1,138,125,123,-1,123,139,138,-1,140,143,142,-1,142,141,140,-1,126,134,137,-1,127,124,144,-1,144,124,125,-1,144,131,127,-1,145,125,138,-1,146,140,141,-1,147,140,146,-1,148,144,125,-1,137,149,123,-1,150,123,149,-1,153,156,155,-1,155,154,153,-1,153,154,158,-1,158,157,153,-1,158,160,159,-1,159,157,158,-1,157,159,162,-1,162,161,157,-1,139,215,164,-1,164,138,139,-1,163,139,150,-1,150,165,163,-1,139,123,150,-1,168,167,166,-1,166,167,159,-1,169,151,152,-1,166,159,169,-1,161,172,170,-1,170,157,161,-1,170,171,157,-1,167,162,159,-1,173,176,236,-1,236,174,173,-1,172,161,177,-1,177,233,172,-1,241,174,236,-1,236,240,241,-1,168,180,167,-1,181,180,168,-1,183,238,237,-1,237,231,183,-1,167,180,186,-1,187,177,161,-1,161,162,187,-1,188,189,177,-1,177,187,188,-1,167,186,187,-1,187,162,167,-1,188,187,186,-1,186,190,188,-1,189,192,177,-1,234,176,233,-1,231,175,191,-1,190,186,180,-1,180,193,190,-1,191,234,192,-1,146,141,195,-1,193,180,181,-1,181,194,193,-1,195,141,196,-1,196,240,236,-1,171,156,153,-1,153,157,171,-1,197,181,168,-1,198,147,242,-1,198,140,147,-1,199,125,145,-1,148,125,200,-1,200,125,199,-1,159,160,151,-1,151,169,159,-1,130,136,135,-1,242,147,184,-1,147,201,184,-1,147,146,201,-1,195,201,146,-1,144,202,131,-1,144,148,202,-1,155,204,203,-1,203,154,155,-1,154,203,160,-1,160,158,154,-1,205,208,207,-1,207,206,205,-1,209,208,205,-1,205,210,209,-1,213,214,211,-1,211,212,213,-1,191,191,192,-1,192,192,191,-1,191,191,191,-1,191,191,191,-1,191,191,191,-1,191,191,191,-1,192,192,191,-1,191,191,192,-1,189,189,192,-1,192,192,189,-1,188,188,189,-1,189,189,188,-1,190,190,188,-1,188,188,190,-1,193,193,190,-1,190,190,193,-1,194,194,193,-1,193,193,194,-1,194,232,232,-1,232,194,194,-1,139,163,215,-1,222,223,217,-1,217,216,222,-1,223,229,218,-1,218,217,223,-1,228,219,218,-1,218,229,228,-1,218,219,221,-1,217,218,221,-1,217,221,220,-1,224,225,226,-1,226,225,227,-1,227,230,226,-1,238,183,232,-1,232,239,238,-1,175,231,237,-1,239,232,194,-1,194,178,239,-1,175,176,191,-1,191,176,234,-1,192,234,233,-1,233,177,192,-1,176,173,172,-1,172,233,176,-1,178,194,181,-1,184,235,242,-1,196,236,179,-1,195,196,179,-1,179,182,195,-1,201,195,182,-1,182,185,201,-1,184,201,185,-1,196,141,240,-1,240,141,142,-1,142,241,240,-1,245,244,243,-1,243,246,245,-1,244,248,247,-1,247,249,244,-1,250,246,243,-1,243,251,250,-1,252,249,247,-1,247,253,252,-1,254,244,245,-1,245,255,254,-1,256,248,244,-1,244,254,256,-1,259,258,257,-1,257,260,259,-1,261,258,259,-1,259,262,261,-1,263,265,264,-1,266,260,257,-1,257,268,267,-1,269,268,270,-1,271,267,272,-1,257,267,266,-1,271,266,267,-1,273,274,260,-1,271,275,266,-1,276,273,275,-1,276,274,273,-1,269,270,277,-1,277,278,269,-1,279,277,280,-1,281,280,282,-1,270,268,257,-1,257,283,270,-1,280,281,284,-1,284,285,280,-1,286,285,284,-1,286,284,287,-1,284,281,287,-1,265,263,288,-1,288,263,289,-1,287,281,290,-1,265,292,291,-1,293,292,294,-1,294,292,265,-1,265,291,290,-1,291,287,290,-1,272,267,268,-1,295,289,296,-1,296,298,297,-1,296,289,298,-1,296,297,295,-1,250,299,295,-1,295,300,250,-1,302,301,250,-1,250,300,302,-1,300,295,302,-1,251,303,299,-1,299,250,251,-1,252,303,249,-1,253,304,303,-1,303,252,253,-1,245,305,255,-1,305,306,255,-1,307,306,305,-1,295,307,305,-1,305,302,295,-1,305,245,301,-1,301,302,305,-1,307,308,306,-1,306,308,309,-1,309,310,306,-1,295,297,308,-1,308,307,295,-1,308,297,298,-1,298,309,308,-1,310,309,264,-1,282,311,281,-1,263,264,289,-1,298,264,309,-1,289,264,298,-1,264,312,310,-1,311,282,312,-1,265,290,264,-1,290,311,264,-1,290,281,311,-1,312,313,261,-1,313,258,261,-1,283,257,258,-1,258,313,283,-1,312,282,314,-1,314,313,312,-1,282,280,277,-1,277,314,282,-1,270,314,277,-1,311,312,264,-1,243,244,249,-1,251,243,303,-1,303,243,249,-1,315,317,316,-1,318,320,319,-1,315,316,321,-1,315,323,322,-1,322,324,315,-1,325,322,323,-1,315,321,323,-1,325,327,326,-1,327,328,326,-1,325,326,329,-1,332,331,330,-1,330,333,332,-1,334,331,335,-1,322,336,324,-1,331,337,335,-1,329,338,336,-1,317,339,316,-1,327,325,323,-1,316,340,327,-1,341,343,342,-1,344,346,345,-1,342,328,327,-1,347,342,340,-1,340,342,327,-1,348,345,333,-1,348,333,330,-1,349,320,350,-1,349,350,351,-1,352,322,325,-1,352,336,322,-1,353,355,354,-1,336,356,324,-1,336,338,356,-1,357,354,355,-1,358,354,357,-1,332,359,329,-1,329,359,338,-1,261,360,312,-1,361,360,261,-1,261,262,361,-1,360,362,310,-1,310,312,360,-1,362,363,306,-1,306,310,362,-1,360,361,364,-1,364,362,360,-1,363,362,364,-1,364,365,363,-1,254,255,306,-1,306,363,254,-1,256,254,363,-1,363,365,256,-1,366,368,367,-1,369,367,370,-1,370,371,369,-1,372,374,373,-1,372,375,374,-1,372,369,376,-1,376,375,372,-1,369,371,376,-1,377,370,378,-1,373,370,377,-1,377,378,379,-1,367,368,370,-1,368,380,370,-1,382,381,368,-1,368,366,382,-1,385,384,383,-1,383,386,385,-1,370,380,378,-1,369,387,367,-1,387,366,367,-1,387,369,372,-1,388,382,366,-1,389,384,385,-1,390,389,385,-1,391,366,387,-1,380,368,392,-1,393,392,368,-1,396,395,394,-1,394,397,396,-1,396,399,398,-1,398,395,396,-1,398,399,400,-1,400,401,398,-1,399,403,402,-1,402,400,399,-1,381,382,405,-1,405,404,381,-1,406,407,393,-1,393,381,406,-1,381,393,368,-1,408,410,409,-1,410,400,409,-1,411,413,412,-1,410,411,400,-1,403,399,414,-1,414,415,403,-1,414,399,416,-1,409,400,402,-1,419,418,417,-1,417,420,419,-1,415,422,421,-1,421,403,415,-1,423,424,417,-1,417,418,423,-1,408,409,425,-1,426,408,425,-1,427,430,429,-1,429,428,427,-1,409,431,425,-1,432,402,403,-1,403,421,432,-1,433,432,421,-1,421,434,433,-1,409,402,432,-1,432,431,409,-1,433,435,431,-1,431,432,433,-1,434,421,436,-1,437,422,420,-1,430,439,438,-1,435,440,425,-1,425,431,435,-1,439,436,437,-1,389,441,384,-1,440,442,426,-1,426,425,440,-1,441,443,384,-1,443,417,424,-1,416,396,397,-1,396,416,399,-1,444,408,426,-1,445,446,390,-1,445,390,385,-1,447,388,366,-1,391,448,366,-1,448,447,366,-1,400,411,412,-1,412,401,400,-1,373,377,379,-1,446,449,390,-1,390,449,450,-1,390,450,389,-1,441,389,450,-1,387,372,451,-1,387,451,391,-1,394,395,452,-1,452,453,394,-1,395,398,401,-1,401,452,395,-1,456,455,454,-1,454,457,456,-1,459,458,456,-1,456,457,459,-1,462,461,460,-1,460,463,462,-1,439,436,436,-1,436,439,439,-1,439,439,439,-1,439,439,439,-1,439,439,439,-1,439,439,439,-1,436,439,439,-1,439,436,436,-1,434,436,436,-1,436,434,434,-1,433,434,434,-1,434,433,433,-1,435,433,433,-1,433,435,435,-1,440,435,435,-1,435,440,440,-1,442,440,440,-1,440,442,442,-1,442,442,464,-1,464,464,442,-1,381,404,406,-1,465,468,467,-1,467,466,465,-1,466,467,470,-1,470,469,466,-1,471,469,470,-1,470,472,471,-1,467,474,473,-1,473,472,470,-1,467,473,470,-1,475,477,476,-1,477,479,478,-1,478,476,477,-1,428,480,464,-1,464,427,428,-1,438,429,430,-1,480,481,442,-1,442,464,480,-1,438,439,420,-1,439,437,420,-1,436,421,422,-1,422,437,436,-1,420,422,415,-1,415,419,420,-1,481,426,442,-1,449,446,482,-1,443,483,417,-1,441,484,483,-1,483,443,441,-1,450,485,484,-1,484,441,450,-1,449,485,450,-1,443,424,384,-1,424,423,383,-1,383,384,424,-1]
Coordinate859 = x3d.Coordinate()

IndexedFaceSet858.coord = Coordinate859
TextureCoordinate860 = x3d.TextureCoordinate()

IndexedFaceSet858.texCoord = TextureCoordinate860

Shape854.geometry = IndexedFaceSet858

Transform853.children.append(Shape854)

HAnimSegment852.children.append(Transform853)

HAnimJoint851.children.append(HAnimSegment852)
HAnimJoint861 = x3d.HAnimJoint()
HAnimJoint861.name = "l_eyelid_joint"
HAnimJoint861.DEF = "hanim_l_eyelid_joint"
HAnimJoint861.center = [0.0505125,1.7660699721000002,0.03294]
HAnimJoint861.ulimit = [0,0,0]
HAnimJoint861.llimit = [0,0,0]
HAnimSegment862 = x3d.HAnimSegment()
HAnimSegment862.name = "l_eyelid"
HAnimSegment862.DEF = "hanim_l_eyelid"
Transform863 = x3d.Transform()
Transform863.translation = [0.0505125,1.7660699721000002,0.03294]
Shape864 = x3d.Shape()
Appearance865 = x3d.Appearance()
Material866 = x3d.Material()
Material866.diffuseColor = [0.588,0.588,0.588]

Appearance865.material = Material866
ImageTexture867 = x3d.ImageTexture()
ImageTexture867.USE = "JinLOA4TextureAtlas"

Appearance865.texture = ImageTexture867

Shape864.appearance = Appearance865
IndexedFaceSet868 = x3d.IndexedFaceSet()
IndexedFaceSet868.coordIndex = [0,1,25,-1,25,24,0,-1,2,26,25,-1,25,1,2,-1,2,3,8,-1,8,26,2,-1,10,27,9,-1,9,4,10,-1,10,0,24,-1,24,27,10,-1,1,0,12,-1,12,13,1,-1,2,1,13,-1,13,14,2,-1,3,2,14,-1,14,15,3,-1,10,4,16,-1,16,22,10,-1,5,6,18,-1,18,17,5,-1,6,7,19,-1,19,18,6,-1,7,8,20,-1,20,19,7,-1,9,11,23,-1,23,21,9,-1,8,3,15,-1,15,20,8,-1,4,9,21,-1,21,16,4,-1,0,10,22,-1,22,12,0,-1,11,5,17,-1,17,23,11,-1,6,5,24,-1,24,25,6,-1,7,6,25,-1,25,26,7,-1,5,11,27,-1,27,24,5,-1,27,11,9,-1,8,7,26,-1]
IndexedFaceSet868.creaseAngle = 3.14159
IndexedFaceSet868.texCoordIndex = [0,1,2,-1,2,3,0,-1,4,5,2,-1,2,1,4,-1,4,6,7,-1,7,5,4,-1,9,10,11,-1,11,8,9,-1,9,0,3,-1,3,10,9,-1,1,0,12,-1,12,13,1,-1,4,1,13,-1,13,14,4,-1,6,4,14,-1,14,15,6,-1,9,8,16,-1,16,17,9,-1,18,19,20,-1,20,21,18,-1,19,22,23,-1,23,20,19,-1,22,7,24,-1,24,23,22,-1,11,25,26,-1,26,27,11,-1,7,6,15,-1,15,24,7,-1,8,11,27,-1,27,16,8,-1,0,9,17,-1,17,12,0,-1,25,18,21,-1,21,26,25,-1,19,18,3,-1,3,2,19,-1,22,19,2,-1,2,5,22,-1,18,25,10,-1,10,3,18,-1,10,25,11,-1,7,22,5,-1]
Coordinate869 = x3d.Coordinate()

IndexedFaceSet868.coord = Coordinate869
TextureCoordinate870 = x3d.TextureCoordinate()

IndexedFaceSet868.texCoord = TextureCoordinate870

Shape864.geometry = IndexedFaceSet868

Transform863.children.append(Shape864)

HAnimSegment862.children.append(Transform863)

HAnimJoint861.children.append(HAnimSegment862)

HAnimJoint851.children.append(HAnimJoint861)
HAnimJoint871 = x3d.HAnimJoint()
HAnimJoint871.name = "r_eyelid_joint"
HAnimJoint871.DEF = "hanim_r_eyelid_joint"
HAnimJoint871.center = [-0.0505125,1.7660699721000002,0.03294]
HAnimJoint871.ulimit = [0,0,0]
HAnimJoint871.llimit = [0,0,0]
HAnimSegment872 = x3d.HAnimSegment()
HAnimSegment872.name = "r_eyelid"
HAnimSegment872.DEF = "hanim_r_eyelid"
Transform873 = x3d.Transform()
Transform873.translation = [-0.0505125,1.7660699721000002,0.03294]
Shape874 = x3d.Shape()
Appearance875 = x3d.Appearance()
Material876 = x3d.Material()
Material876.diffuseColor = [0.588,0.588,0.588]

Appearance875.material = Material876
ImageTexture877 = x3d.ImageTexture()
ImageTexture877.USE = "JinLOA4TextureAtlas"

Appearance875.texture = ImageTexture877

Shape874.appearance = Appearance875
IndexedFaceSet878 = x3d.IndexedFaceSet()
IndexedFaceSet878.coordIndex = [0,24,25,-1,25,1,0,-1,2,1,25,-1,25,26,2,-1,2,26,8,-1,8,3,2,-1,10,4,9,-1,9,27,10,-1,10,27,24,-1,24,0,10,-1,1,13,12,-1,12,0,1,-1,2,14,13,-1,13,1,2,-1,3,15,14,-1,14,2,3,-1,10,22,16,-1,16,4,10,-1,5,17,18,-1,18,6,5,-1,6,18,19,-1,19,7,6,-1,7,19,20,-1,20,8,7,-1,9,21,23,-1,23,11,9,-1,8,20,15,-1,15,3,8,-1,4,16,21,-1,21,9,4,-1,0,12,22,-1,22,10,0,-1,11,23,17,-1,17,5,11,-1,6,25,24,-1,24,5,6,-1,7,26,25,-1,25,6,7,-1,5,24,27,-1,27,11,5,-1,27,9,11,-1,8,26,7,-1]
IndexedFaceSet878.creaseAngle = 3.14159
IndexedFaceSet878.texCoordIndex = [0,3,2,-1,2,1,0,-1,4,1,2,-1,2,5,4,-1,4,5,7,-1,7,6,4,-1,9,8,11,-1,11,10,9,-1,9,10,3,-1,3,0,9,-1,1,13,12,-1,12,0,1,-1,4,14,13,-1,13,1,4,-1,6,15,14,-1,14,4,6,-1,9,17,16,-1,16,8,9,-1,18,21,20,-1,20,19,18,-1,19,20,23,-1,23,22,19,-1,22,23,24,-1,24,7,22,-1,11,27,26,-1,26,25,11,-1,7,24,15,-1,15,6,7,-1,8,16,27,-1,27,11,8,-1,0,12,17,-1,17,9,0,-1,25,26,21,-1,21,18,25,-1,19,2,3,-1,3,18,19,-1,22,5,2,-1,2,19,22,-1,18,3,10,-1,10,25,18,-1,10,11,25,-1,7,5,22,-1]
Coordinate879 = x3d.Coordinate()

IndexedFaceSet878.coord = Coordinate879
TextureCoordinate880 = x3d.TextureCoordinate()

IndexedFaceSet878.texCoord = TextureCoordinate880

Shape874.geometry = IndexedFaceSet878

Transform873.children.append(Shape874)

HAnimSegment872.children.append(Transform873)

HAnimJoint871.children.append(HAnimSegment872)

HAnimJoint851.children.append(HAnimJoint871)
HAnimJoint881 = x3d.HAnimJoint()
HAnimJoint881.name = "l_eyeball_joint"
HAnimJoint881.DEF = "hanim_l_eyeball_joint"
HAnimJoint881.center = [0.0481275,1.7420759721,0.0830475]
HAnimJoint881.ulimit = [0,0,0]
HAnimJoint881.llimit = [0,0,0]
HAnimSegment882 = x3d.HAnimSegment()
HAnimSegment882.name = "l_eyeball"
HAnimSegment882.DEF = "hanim_l_eyeball"
Transform883 = x3d.Transform()
Transform883.translation = [0.0481275,1.7420759721,0.0830475]
Shape884 = x3d.Shape()
Appearance885 = x3d.Appearance()
Material886 = x3d.Material()
Material886.diffuseColor = [0.588,0.588,0.588]

Appearance885.material = Material886
ImageTexture887 = x3d.ImageTexture()
ImageTexture887.USE = "JinLOA4TextureAtlas"

Appearance885.texture = ImageTexture887

Shape884.appearance = Appearance885
IndexedFaceSet888 = x3d.IndexedFaceSet()
IndexedFaceSet888.coordIndex = [1,6,16,-1,16,11,1,-1,0,1,11,-1,11,10,0,-1,8,9,19,-1,19,18,8,-1,2,8,18,-1,18,12,2,-1,3,0,10,-1,10,13,3,-1,9,4,14,-1,14,19,9,-1,5,2,12,-1,12,15,5,-1,4,3,13,-1,13,14,4,-1,6,7,17,-1,17,16,6,-1,7,5,15,-1,15,17,7,-1,11,16,21,-1,21,20,11,-1,16,17,22,-1,22,21,16,-1,17,15,23,-1,23,22,17,-1,15,12,24,-1,24,23,15,-1,12,18,25,-1,25,24,12,-1,18,19,26,-1,26,25,18,-1,19,14,27,-1,27,26,19,-1,14,13,28,-1,28,27,14,-1,13,10,29,-1,29,28,13,-1,10,11,20,-1,20,29,10,-1,6,1,30,-1,1,0,30,-1,0,3,30,-1,3,4,30,-1,4,9,30,-1,9,8,30,-1,8,2,30,-1,2,5,30,-1,5,7,30,-1,7,6,30,-1]
IndexedFaceSet888.creaseAngle = 3.14159
IndexedFaceSet888.texCoordIndex = [4,9,13,-1,13,14,4,-1,3,4,14,-1,14,15,3,-1,11,12,16,-1,16,17,11,-1,5,11,17,-1,17,18,5,-1,6,3,15,-1,15,6,6,-1,12,7,19,-1,19,16,12,-1,8,5,18,-1,18,20,8,-1,7,6,21,-1,21,19,7,-1,9,10,22,-1,22,13,9,-1,10,8,20,-1,20,22,10,-1,14,13,24,-1,24,23,14,-1,13,22,25,-1,25,24,13,-1,22,20,26,-1,26,25,22,-1,20,18,27,-1,27,26,20,-1,18,17,28,-1,28,27,18,-1,17,16,29,-1,29,28,17,-1,16,19,30,-1,30,29,16,-1,19,21,31,-1,31,30,19,-1,6,15,32,-1,32,31,6,-1,15,14,23,-1,23,32,15,-1,36,1,40,-1,1,0,40,-1,0,33,40,-1,33,34,40,-1,34,39,40,-1,39,38,40,-1,38,2,40,-1,2,35,40,-1,35,37,40,-1,37,36,40,-1]
Coordinate889 = x3d.Coordinate()

IndexedFaceSet888.coord = Coordinate889
TextureCoordinate890 = x3d.TextureCoordinate()

IndexedFaceSet888.texCoord = TextureCoordinate890

Shape884.geometry = IndexedFaceSet888

Transform883.children.append(Shape884)

HAnimSegment882.children.append(Transform883)

HAnimJoint881.children.append(HAnimSegment882)

HAnimJoint851.children.append(HAnimJoint881)
HAnimJoint891 = x3d.HAnimJoint()
HAnimJoint891.name = "r_eyeball_joint"
HAnimJoint891.DEF = "hanim_r_eyeball_joint"
HAnimJoint891.center = [-0.0481275,1.7420759721,0.0830475]
HAnimJoint891.ulimit = [0,0,0]
HAnimJoint891.llimit = [0,0,0]
HAnimSegment892 = x3d.HAnimSegment()
HAnimSegment892.name = "r_eyeball"
HAnimSegment892.DEF = "hanim_r_eyeball"
Transform893 = x3d.Transform()
Transform893.translation = [-0.0481275,1.7420759721,0.0830475]
Shape894 = x3d.Shape()
Appearance895 = x3d.Appearance()
Material896 = x3d.Material()
Material896.diffuseColor = [0.588,0.588,0.588]

Appearance895.material = Material896
ImageTexture897 = x3d.ImageTexture()
ImageTexture897.USE = "JinLOA4TextureAtlas"

Appearance895.texture = ImageTexture897

Shape894.appearance = Appearance895
IndexedFaceSet898 = x3d.IndexedFaceSet()
IndexedFaceSet898.coordIndex = [1,11,16,-1,16,6,1,-1,0,10,11,-1,11,1,0,-1,8,18,19,-1,19,9,8,-1,2,12,18,-1,18,8,2,-1,3,13,10,-1,10,0,3,-1,9,19,14,-1,14,4,9,-1,5,15,12,-1,12,2,5,-1,4,14,13,-1,13,3,4,-1,6,16,17,-1,17,7,6,-1,7,17,15,-1,15,5,7,-1,11,20,21,-1,21,16,11,-1,16,21,22,-1,22,17,16,-1,17,22,23,-1,23,15,17,-1,15,23,24,-1,24,12,15,-1,12,24,25,-1,25,18,12,-1,18,25,26,-1,26,19,18,-1,19,26,27,-1,27,14,19,-1,14,27,28,-1,28,13,14,-1,13,28,29,-1,29,10,13,-1,10,29,20,-1,20,11,10,-1,6,30,1,-1,1,30,0,-1,0,30,3,-1,3,30,4,-1,4,30,9,-1,9,30,8,-1,8,30,2,-1,2,30,5,-1,5,30,7,-1,7,30,6,-1]
IndexedFaceSet898.creaseAngle = 3.14159
IndexedFaceSet898.texCoordIndex = [4,14,13,-1,13,9,4,-1,3,15,14,-1,14,4,3,-1,11,17,16,-1,16,12,11,-1,5,18,17,-1,17,11,5,-1,6,6,15,-1,15,3,6,-1,12,16,19,-1,19,7,12,-1,8,20,18,-1,18,5,8,-1,7,19,21,-1,21,6,7,-1,9,13,22,-1,22,10,9,-1,10,22,20,-1,20,8,10,-1,14,23,24,-1,24,13,14,-1,13,24,25,-1,25,22,13,-1,22,25,26,-1,26,20,22,-1,20,26,27,-1,27,18,20,-1,18,27,28,-1,28,17,18,-1,17,28,29,-1,29,16,17,-1,16,29,30,-1,30,19,16,-1,19,30,31,-1,31,21,19,-1,6,31,32,-1,32,15,6,-1,15,32,23,-1,23,14,15,-1,36,40,1,-1,1,40,0,-1,0,40,33,-1,33,40,34,-1,34,40,39,-1,39,40,38,-1,38,40,2,-1,2,40,35,-1,35,40,37,-1,37,40,36,-1]
Coordinate899 = x3d.Coordinate()

IndexedFaceSet898.coord = Coordinate899
TextureCoordinate900 = x3d.TextureCoordinate()

IndexedFaceSet898.texCoord = TextureCoordinate900

Shape894.geometry = IndexedFaceSet898

Transform893.children.append(Shape894)

HAnimSegment892.children.append(Transform893)

HAnimJoint891.children.append(HAnimSegment892)

HAnimJoint851.children.append(HAnimJoint891)
HAnimJoint901 = x3d.HAnimJoint()
HAnimJoint901.name = "l_eyebrow_joint"
HAnimJoint901.DEF = "hanim_l_eyebrow_joint"
HAnimJoint901.center = [0.0217485,1.7532360000000002,0.1069425]
HAnimJoint901.ulimit = [0,0,0]
HAnimJoint901.llimit = [0,0,0]
HAnimSegment902 = x3d.HAnimSegment()
HAnimSegment902.name = "l_eyebrow"
HAnimSegment902.DEF = "hanim_l_eyebrow"
Transform903 = x3d.Transform()
Transform903.translation = [0.0217485,1.7532360000000002,0.1069425]
Shape904 = x3d.Shape()
Appearance905 = x3d.Appearance()
Material906 = x3d.Material()
Material906.diffuseColor = [0.588,0.588,0.588]

Appearance905.material = Material906
ImageTexture907 = x3d.ImageTexture()
ImageTexture907.USE = "JinLOA4TextureAtlas"

Appearance905.texture = ImageTexture907

Shape904.appearance = Appearance905
IndexedFaceSet908 = x3d.IndexedFaceSet()
IndexedFaceSet908.coordIndex = [2,20,21,-1,21,7,2,-1,4,3,8,-1,8,10,4,-1,3,2,7,-1,7,8,3,-1,2,1,5,-1,5,20,2,-1,4,6,3,-1,3,6,1,-1,1,2,3,-1,5,1,12,-1,12,14,5,-1,0,5,14,-1,14,11,0,-1,6,4,13,-1,13,15,6,-1,1,6,15,-1,15,12,1,-1,8,7,16,-1,16,17,8,-1,21,22,16,-1,16,7,21,-1,9,0,11,-1,11,18,9,-1,4,10,19,-1,19,13,4,-1,10,8,17,-1,17,19,10,-1,20,0,9,-1,9,21,20,-1,5,0,20,-1,21,9,18,-1,18,22,21,-1]
IndexedFaceSet908.creaseAngle = 3.14159
IndexedFaceSet908.texCoordIndex = [0,20,21,-1,21,7,0,-1,3,1,8,-1,8,10,3,-1,1,0,7,-1,7,8,1,-1,0,4,5,-1,5,20,0,-1,3,6,1,-1,1,6,4,-1,4,0,1,-1,5,4,11,-1,11,12,5,-1,2,5,12,-1,12,14,2,-1,6,3,15,-1,15,16,6,-1,4,6,16,-1,16,11,4,-1,8,7,13,-1,13,17,8,-1,21,22,13,-1,13,7,21,-1,9,2,14,-1,14,18,9,-1,3,10,19,-1,19,15,3,-1,10,8,17,-1,17,19,10,-1,20,2,9,-1,9,21,20,-1,5,2,20,-1,21,9,18,-1,18,22,21,-1]
Coordinate909 = x3d.Coordinate()

IndexedFaceSet908.coord = Coordinate909
TextureCoordinate910 = x3d.TextureCoordinate()

IndexedFaceSet908.texCoord = TextureCoordinate910

Shape904.geometry = IndexedFaceSet908

Transform903.children.append(Shape904)

HAnimSegment902.children.append(Transform903)

HAnimJoint901.children.append(HAnimSegment902)

HAnimJoint851.children.append(HAnimJoint901)
HAnimJoint911 = x3d.HAnimJoint()
HAnimJoint911.name = "r_eyebrow_joint"
HAnimJoint911.DEF = "hanim_r_eyebrow_joint"
HAnimJoint911.center = [-0.0217485,1.7532360000000002,0.1069425]
HAnimJoint911.ulimit = [0,0,0]
HAnimJoint911.llimit = [0,0,0]
HAnimSegment912 = x3d.HAnimSegment()
HAnimSegment912.name = "r_eyebrow"
HAnimSegment912.DEF = "hanim_r_eyebrow"
Transform913 = x3d.Transform()
Transform913.translation = [-0.0217485,1.7532360000000002,0.1069425]
Shape914 = x3d.Shape()
Appearance915 = x3d.Appearance()
Material916 = x3d.Material()
Material916.diffuseColor = [0.588,0.588,0.588]

Appearance915.material = Material916
ImageTexture917 = x3d.ImageTexture()
ImageTexture917.USE = "JinLOA4TextureAtlas"

Appearance915.texture = ImageTexture917

Shape914.appearance = Appearance915
IndexedFaceSet918 = x3d.IndexedFaceSet()
IndexedFaceSet918.coordIndex = [2,7,21,-1,21,20,2,-1,4,10,8,-1,8,3,4,-1,3,8,7,-1,7,2,3,-1,2,20,5,-1,5,1,2,-1,4,3,6,-1,3,2,1,-1,1,6,3,-1,5,14,12,-1,12,1,5,-1,0,11,14,-1,14,5,0,-1,6,15,13,-1,13,4,6,-1,1,12,15,-1,15,6,1,-1,8,17,16,-1,16,7,8,-1,21,7,16,-1,16,22,21,-1,9,18,11,-1,11,0,9,-1,4,13,19,-1,19,10,4,-1,10,19,17,-1,17,8,10,-1,20,21,9,-1,9,0,20,-1,5,20,0,-1,21,22,18,-1,18,9,21,-1]
IndexedFaceSet918.creaseAngle = 3.14159
IndexedFaceSet918.texCoordIndex = [0,7,21,-1,21,20,0,-1,3,10,8,-1,8,1,3,-1,1,8,7,-1,7,0,1,-1,0,20,5,-1,5,4,0,-1,3,1,6,-1,1,0,4,-1,4,6,1,-1,5,12,11,-1,11,4,5,-1,2,14,12,-1,12,5,2,-1,6,16,15,-1,15,3,6,-1,4,11,16,-1,16,6,4,-1,8,17,13,-1,13,7,8,-1,21,7,13,-1,13,22,21,-1,9,18,14,-1,14,2,9,-1,3,15,19,-1,19,10,3,-1,10,19,17,-1,17,8,10,-1,20,21,9,-1,9,2,20,-1,5,20,2,-1,21,22,18,-1,18,9,21,-1]
Coordinate919 = x3d.Coordinate()

IndexedFaceSet918.coord = Coordinate919
TextureCoordinate920 = x3d.TextureCoordinate()

IndexedFaceSet918.texCoord = TextureCoordinate920

Shape914.geometry = IndexedFaceSet918

Transform913.children.append(Shape914)

HAnimSegment912.children.append(Transform913)

HAnimJoint911.children.append(HAnimSegment912)

HAnimJoint851.children.append(HAnimJoint911)
HAnimJoint921 = x3d.HAnimJoint()
HAnimJoint921.name = "temporomandibular"
HAnimJoint921.DEF = "hanim_temporomandibular"
HAnimJoint921.center = [0,1.6279649442000002,0.01537875]
HAnimJoint921.ulimit = [0,0,0]
HAnimJoint921.llimit = [0,0,0]
HAnimSegment922 = x3d.HAnimSegment()
HAnimSegment922.name = "jaw"
HAnimSegment922.DEF = "hanim_jaw"
Transform923 = x3d.Transform()
Transform923.translation = [0,1.6279649442000002,0.01537875]
Shape924 = x3d.Shape()
Appearance925 = x3d.Appearance()
Material926 = x3d.Material()
Material926.diffuseColor = [0.588,0.588,0.588]

Appearance925.material = Material926
ImageTexture927 = x3d.ImageTexture()
ImageTexture927.USE = "JinLOA4TextureAtlas"

Appearance925.texture = ImageTexture927

Shape924.appearance = Appearance925
IndexedFaceSet928 = x3d.IndexedFaceSet()
IndexedFaceSet928.coordIndex = [0,2,12,-1,13,3,15,-1,3,13,4,-1,4,13,12,-1,4,12,2,-1,1,0,18,-1,18,9,1,-1,4,2,10,-1,10,6,8,-1,4,10,8,-1,3,7,24,-1,24,15,3,-1,4,8,7,-1,7,3,4,-1,5,26,24,-1,24,7,5,-1,8,6,5,-1,5,7,8,-1,0,1,2,-1,2,1,9,-1,9,10,2,-1,0,12,11,-1,13,15,14,-1,14,16,13,-1,16,12,13,-1,16,11,12,-1,17,19,18,-1,18,0,17,-1,22,21,20,-1,16,22,20,-1,16,20,11,-1,14,15,24,-1,24,23,14,-1,16,14,23,-1,23,22,16,-1,25,23,24,-1,24,26,25,-1,22,23,25,-1,25,21,22,-1,0,11,17,-1,11,20,19,-1,19,17,11,-1]
IndexedFaceSet928.creaseAngle = 3.14159
IndexedFaceSet928.texCoordIndex = [0,2,3,-1,4,5,6,-1,5,4,7,-1,7,4,3,-1,7,3,2,-1,1,0,0,-1,0,8,1,-1,7,2,2,-1,2,9,16,-1,7,2,16,-1,5,13,14,-1,14,6,5,-1,7,15,13,-1,13,5,7,-1,11,12,17,-1,17,10,11,-1,18,19,11,-1,11,10,18,-1,0,20,2,-1,2,20,21,-1,21,2,2,-1,0,22,2,-1,23,25,24,-1,24,26,23,-1,26,22,23,-1,26,2,22,-1,27,28,0,-1,0,0,27,-1,30,29,2,-1,26,30,2,-1,26,2,2,-1,24,25,32,-1,32,31,24,-1,26,24,31,-1,31,33,26,-1,35,34,37,-1,37,36,35,-1,38,34,35,-1,35,39,38,-1,0,2,40,-1,2,2,41,-1,41,40,2,-1]
Coordinate929 = x3d.Coordinate()

IndexedFaceSet928.coord = Coordinate929
TextureCoordinate930 = x3d.TextureCoordinate()

IndexedFaceSet928.texCoord = TextureCoordinate930

Shape924.geometry = IndexedFaceSet928

Transform923.children.append(Shape924)

HAnimSegment922.children.append(Transform923)

HAnimJoint921.children.append(HAnimSegment922)

HAnimJoint851.children.append(HAnimJoint921)

HAnimJoint841.children.append(HAnimJoint851)

HAnimJoint831.children.append(HAnimJoint841)

HAnimJoint821.children.append(HAnimJoint831)

HAnimJoint811.children.append(HAnimJoint821)

HAnimJoint801.children.append(HAnimJoint811)

HAnimJoint791.children.append(HAnimJoint801)

HAnimJoint781.children.append(HAnimJoint791)

HAnimJoint771.children.append(HAnimJoint781)
HAnimJoint931 = x3d.HAnimJoint()
HAnimJoint931.name = "l_acromioclavicular"
HAnimJoint931.DEF = "hanim_l_acromioclavicular"
HAnimJoint931.center = [0.038474999999999995,1.4987880279,-0.01378575]
HAnimJoint931.ulimit = [0,0,0]
HAnimJoint931.llimit = [0,0,0]
HAnimSegment932 = x3d.HAnimSegment()
HAnimSegment932.name = "l_clavicle"
HAnimSegment932.DEF = "hanim_l_clavicle"
Transform933 = x3d.Transform()
Transform933.translation = [0.038474999999999995,1.4987880279,-0.01378575]
Shape934 = x3d.Shape()
Appearance935 = x3d.Appearance()
Material936 = x3d.Material()
Material936.diffuseColor = [0.588,0.588,0.588]

Appearance935.material = Material936
ImageTexture937 = x3d.ImageTexture()
ImageTexture937.USE = "JinLOA4TextureAtlas"

Appearance935.texture = ImageTexture937

Shape934.appearance = Appearance935
IndexedFaceSet938 = x3d.IndexedFaceSet()
IndexedFaceSet938.coordIndex = [9,6,1,-1,1,0,9,-1,6,5,2,-1,2,1,6,-1,8,3,2,-1,2,5,8,-1,8,7,4,-1,4,3,8,-1,9,0,4,-1,4,7,9,-1,2,3,4,-1,2,4,0,-1,1,2,0,-1,13,14,10,-1,12,13,10,-1,11,12,10,-1,6,9,11,-1,11,10,6,-1,9,7,12,-1,12,11,9,-1,7,8,13,-1,13,12,7,-1,8,5,14,-1,14,13,8,-1,5,6,10,-1,10,14,5,-1]
IndexedFaceSet938.creaseAngle = 3.14159
IndexedFaceSet938.texCoordIndex = [9,6,1,-1,1,0,9,-1,6,5,2,-1,2,1,6,-1,8,3,2,-1,2,5,8,-1,8,7,4,-1,4,3,8,-1,9,0,4,-1,4,7,9,-1,2,3,4,-1,2,4,0,-1,1,2,0,-1,13,14,10,-1,12,13,10,-1,11,12,10,-1,6,9,11,-1,11,10,6,-1,9,7,12,-1,12,11,9,-1,7,8,13,-1,13,12,7,-1,8,5,14,-1,14,13,8,-1,5,6,10,-1,10,14,5,-1]
Coordinate939 = x3d.Coordinate()

IndexedFaceSet938.coord = Coordinate939
TextureCoordinate940 = x3d.TextureCoordinate()

IndexedFaceSet938.texCoord = TextureCoordinate940

Shape934.geometry = IndexedFaceSet938

Transform933.children.append(Shape934)

HAnimSegment932.children.append(Transform933)

HAnimJoint931.children.append(HAnimSegment932)
HAnimJoint941 = x3d.HAnimJoint()
HAnimJoint941.name = "l_sternoclavicular"
HAnimJoint941.DEF = "hanim_l_sternoclavicular"
HAnimJoint941.center = [0.12294000000000001,1.4778630279000002,-0.012897]
HAnimJoint941.ulimit = [0,0,0]
HAnimJoint941.llimit = [0,0,0]
HAnimSegment942 = x3d.HAnimSegment()
HAnimSegment942.name = "l_scapula"
HAnimSegment942.DEF = "hanim_l_scapula"
Transform943 = x3d.Transform()
Transform943.translation = [0.12294000000000001,1.4778630279000002,-0.012897]
Shape944 = x3d.Shape()
Appearance945 = x3d.Appearance()
Material946 = x3d.Material()
Material946.diffuseColor = [0.588,0.588,0.588]

Appearance945.material = Material946
ImageTexture947 = x3d.ImageTexture()
ImageTexture947.USE = "JinLOA4TextureAtlas"

Appearance945.texture = ImageTexture947

Shape944.appearance = Appearance945
IndexedFaceSet948 = x3d.IndexedFaceSet()
IndexedFaceSet948.coordIndex = [5,4,0,-1,0,1,5,-1,4,3,2,-1,2,0,4,-1,3,9,6,-1,6,2,3,-1,7,5,1,-1,1,8,7,-1,6,8,0,-1,0,2,6,-1,0,8,1,-1,9,7,8,-1,8,6,9,-1,4,5,11,-1,11,10,4,-1,5,7,12,-1,12,11,5,-1,7,9,13,-1,13,12,7,-1,9,3,14,-1,14,13,9,-1,3,4,10,-1,10,14,3,-1,10,11,15,-1,11,12,15,-1,12,13,15,-1,13,14,15,-1,14,10,15,-1]
IndexedFaceSet948.creaseAngle = 3.14159
IndexedFaceSet948.texCoordIndex = [5,4,0,-1,0,1,5,-1,4,3,2,-1,2,0,4,-1,3,8,6,-1,6,2,3,-1,9,5,1,-1,1,7,9,-1,6,7,0,-1,0,2,6,-1,0,7,1,-1,12,13,11,-1,11,10,12,-1,4,5,15,-1,15,14,4,-1,5,9,16,-1,16,15,5,-1,13,12,17,-1,17,16,13,-1,8,3,18,-1,18,17,8,-1,3,4,14,-1,14,18,3,-1,14,15,19,-1,15,16,19,-1,16,17,19,-1,17,18,19,-1,18,14,19,-1]
Coordinate949 = x3d.Coordinate()

IndexedFaceSet948.coord = Coordinate949
TextureCoordinate950 = x3d.TextureCoordinate()

IndexedFaceSet948.texCoord = TextureCoordinate950

Shape944.geometry = IndexedFaceSet948

Transform943.children.append(Shape944)

HAnimSegment942.children.append(Transform943)

HAnimJoint941.children.append(HAnimSegment942)
HAnimJoint951 = x3d.HAnimJoint()
HAnimJoint951.name = "l_shoulder"
HAnimJoint951.DEF = "hanim_l_shoulder"
HAnimJoint951.center = [0.16506,1.4614020279,-0.003267]
HAnimJoint951.ulimit = [0,0,0]
HAnimJoint951.llimit = [0,0,0]
HAnimSegment952 = x3d.HAnimSegment()
HAnimSegment952.name = "l_upperarm"
HAnimSegment952.DEF = "hanim_l_upperarm"
Transform953 = x3d.Transform()
Transform953.translation = [0.16506,1.4614020279,-0.003267]
Shape954 = x3d.Shape()
Appearance955 = x3d.Appearance()
Material956 = x3d.Material()
Material956.diffuseColor = [0.588,0.588,0.588]

Appearance955.material = Material956
ImageTexture957 = x3d.ImageTexture()
ImageTexture957.USE = "JinLOA4TextureAtlas"

Appearance955.texture = ImageTexture957

Shape954.appearance = Appearance955
IndexedFaceSet958 = x3d.IndexedFaceSet()
IndexedFaceSet958.coordIndex = [2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,36,37,38,-1,35,36,38,-1,39,35,38,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1,26,25,40,-1,40,41,26,-1,27,26,41,-1,41,42,27,-1,28,27,42,-1,42,43,28,-1,29,28,43,-1,43,44,29,-1,25,29,44,-1,44,40,25,-1,31,30,25,-1,25,26,31,-1,32,31,26,-1,26,27,32,-1,33,32,27,-1,27,28,33,-1,34,33,28,-1,28,29,34,-1,30,34,29,-1,29,25,30,-1,36,35,30,-1,30,31,36,-1,37,36,31,-1,31,32,37,-1,38,37,32,-1,32,33,38,-1,39,38,33,-1,33,34,39,-1,35,39,34,-1,34,30,35,-1]
IndexedFaceSet958.creaseAngle = 3.14159
IndexedFaceSet958.texCoordIndex = [2,0,1,-1,3,2,1,-1,55,3,1,-1,1,0,5,-1,5,6,1,-1,0,2,7,-1,7,5,0,-1,2,3,8,-1,8,7,2,-1,25,4,9,-1,9,26,25,-1,4,1,6,-1,6,9,4,-1,6,5,10,-1,10,11,6,-1,5,7,12,-1,12,10,5,-1,7,8,13,-1,13,12,7,-1,27,9,14,-1,14,28,27,-1,9,6,11,-1,11,14,9,-1,11,10,15,-1,15,16,11,-1,10,12,17,-1,17,15,10,-1,12,13,18,-1,18,17,12,-1,29,14,19,-1,19,30,29,-1,14,11,16,-1,16,19,14,-1,49,35,36,-1,48,49,36,-1,37,48,36,-1,20,21,16,-1,16,15,20,-1,22,20,15,-1,15,17,22,-1,23,22,17,-1,17,18,23,-1,24,32,31,-1,31,19,24,-1,21,24,19,-1,19,16,21,-1,38,39,56,-1,56,57,38,-1,40,50,58,-1,58,59,40,-1,41,40,59,-1,59,60,41,-1,42,41,60,-1,60,61,42,-1,39,42,61,-1,61,56,39,-1,43,44,39,-1,39,38,43,-1,45,52,51,-1,51,40,45,-1,46,45,40,-1,40,41,46,-1,47,46,41,-1,41,42,47,-1,44,47,42,-1,42,39,44,-1,34,33,44,-1,44,43,34,-1,35,54,53,-1,53,45,35,-1,36,35,45,-1,45,46,36,-1,37,36,46,-1,46,47,37,-1,33,37,47,-1,47,44,33,-1]
Coordinate959 = x3d.Coordinate()

IndexedFaceSet958.coord = Coordinate959
TextureCoordinate960 = x3d.TextureCoordinate()

IndexedFaceSet958.texCoord = TextureCoordinate960

Shape954.geometry = IndexedFaceSet958

Transform953.children.append(Shape954)

HAnimSegment952.children.append(Transform953)

HAnimJoint951.children.append(HAnimSegment952)
HAnimJoint961 = x3d.HAnimJoint()
HAnimJoint961.name = "l_elbow"
HAnimJoint961.DEF = "hanim_l_elbow"
HAnimJoint961.center = [0.1820925,1.1517119721,-0.005629499999999999]
HAnimJoint961.ulimit = [0,0,0]
HAnimJoint961.llimit = [0,0,0]
HAnimSegment962 = x3d.HAnimSegment()
HAnimSegment962.name = "l_forearm"
HAnimSegment962.DEF = "hanim_l_forearm"
Transform963 = x3d.Transform()
Transform963.translation = [0.1820925,1.1517119721,-0.005629499999999999]
Shape964 = x3d.Shape()
Appearance965 = x3d.Appearance()
Material966 = x3d.Material()
Material966.diffuseColor = [0.588,0.588,0.588]

Appearance965.material = Material966
ImageTexture967 = x3d.ImageTexture()
ImageTexture967.USE = "JinLOA4TextureAtlas"

Appearance965.texture = ImageTexture967

Shape964.appearance = Appearance965
IndexedFaceSet968 = x3d.IndexedFaceSet()
IndexedFaceSet968.coordIndex = [2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,21,22,23,-1,20,21,23,-1,24,20,23,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1]
IndexedFaceSet968.creaseAngle = 3.14159
IndexedFaceSet968.texCoordIndex = [2,3,4,-1,1,2,4,-1,0,1,4,-1,4,3,5,-1,5,6,4,-1,3,2,7,-1,7,5,3,-1,2,1,8,-1,8,7,2,-1,1,0,9,-1,9,8,1,-1,0,4,6,-1,6,9,0,-1,6,5,10,-1,10,11,6,-1,5,7,12,-1,12,10,5,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,6,11,-1,11,14,9,-1,11,10,15,-1,15,16,11,-1,10,12,17,-1,17,15,10,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,11,16,-1,16,19,14,-1,22,23,24,-1,21,22,24,-1,20,21,24,-1,22,21,16,-1,16,15,22,-1,23,22,15,-1,15,17,23,-1,24,23,17,-1,17,18,24,-1,20,24,18,-1,18,19,20,-1,21,20,19,-1,19,16,21,-1]
Coordinate969 = x3d.Coordinate()

IndexedFaceSet968.coord = Coordinate969
TextureCoordinate970 = x3d.TextureCoordinate()

IndexedFaceSet968.texCoord = TextureCoordinate970

Shape964.geometry = IndexedFaceSet968

Transform963.children.append(Shape964)

HAnimSegment962.children.append(Transform963)

HAnimJoint961.children.append(HAnimSegment962)
HAnimJoint971 = x3d.HAnimJoint()
HAnimJoint971.name = "l_radiocarpal"
HAnimJoint971.DEF = "hanim_l_radiocarpal"
HAnimJoint971.center = [0.181935,0.8981009721000001,-0.00502425]
HAnimJoint971.ulimit = [0,0,0]
HAnimJoint971.llimit = [0,0,0]
HAnimSegment972 = x3d.HAnimSegment()
HAnimSegment972.name = "l_carpal"
HAnimSegment972.DEF = "hanim_l_carpal"
Transform973 = x3d.Transform()
Transform973.translation = [0.181935,0.8981009721000001,-0.00502425]
Shape974 = x3d.Shape()
Appearance975 = x3d.Appearance()
Material976 = x3d.Material()
Material976.diffuseColor = [0.588,0.588,0.588]

Appearance975.material = Material976
ImageTexture977 = x3d.ImageTexture()
ImageTexture977.USE = "JinLOA4TextureAtlas"

Appearance975.texture = ImageTexture977

Shape974.appearance = Appearance975
IndexedFaceSet978 = x3d.IndexedFaceSet()
IndexedFaceSet978.coordIndex = [0,1,12,-1,12,11,0,-1,1,2,13,-1,13,12,1,-1,2,17,10,-1,10,13,2,-1,3,4,8,-1,8,16,3,-1,5,19,21,-1,21,20,5,-1,6,14,15,-1,15,18,6,-1,6,7,9,-1,9,14,6,-1,7,0,11,-1,11,9,7,-1,15,19,5,-1,5,18,15,-1,10,17,3,-1,3,16,10,-1,4,20,21,-1,21,8,4,-1,0,22,1,-1,1,22,2,-1,2,22,17,-1,17,22,3,-1,3,22,4,-1,4,22,20,-1,20,22,5,-1,5,22,18,-1,18,22,6,-1,6,22,7,-1,7,22,0,-1,16,23,24,-1,24,10,16,-1,10,24,25,-1,25,13,10,-1,13,25,26,-1,26,12,13,-1,12,26,27,-1,27,11,12,-1,11,27,28,-1,28,9,11,-1,9,28,29,-1,29,14,9,-1,14,29,30,-1,30,15,14,-1,15,30,31,-1,31,19,15,-1,19,31,32,-1,32,21,19,-1,21,32,33,-1,33,8,21,-1,8,33,23,-1,23,16,8,-1,23,34,24,-1,24,34,25,-1,25,34,26,-1,26,34,27,-1,27,34,28,-1,28,34,29,-1,29,34,30,-1,30,34,31,-1,31,34,32,-1,32,34,33,-1,33,34,23,-1]
IndexedFaceSet978.creaseAngle = 3.14159
IndexedFaceSet978.texCoordIndex = [2,1,0,-1,0,3,2,-1,1,5,4,-1,4,0,1,-1,5,6,7,-1,7,4,5,-1,10,9,8,-1,8,11,10,-1,12,15,38,-1,38,37,12,-1,17,16,19,-1,19,18,17,-1,17,21,20,-1,20,16,17,-1,21,35,36,-1,36,20,21,-1,19,15,12,-1,12,18,19,-1,7,6,10,-1,10,11,7,-1,9,13,14,-1,14,8,9,-1,2,22,1,-1,1,22,5,-1,5,22,6,-1,6,22,10,-1,10,22,9,-1,9,22,13,-1,37,39,12,-1,12,39,18,-1,18,39,17,-1,17,39,21,-1,21,39,35,-1,11,24,23,-1,23,7,11,-1,7,23,25,-1,25,4,7,-1,4,25,26,-1,26,0,4,-1,0,26,27,-1,27,3,0,-1,36,40,28,-1,28,20,36,-1,20,28,29,-1,29,16,20,-1,16,29,30,-1,30,19,16,-1,19,30,31,-1,31,15,19,-1,15,31,41,-1,41,38,15,-1,14,32,33,-1,33,8,14,-1,8,33,24,-1,24,11,8,-1,24,34,23,-1,23,34,25,-1,25,34,26,-1,26,34,27,-1,40,42,28,-1,28,42,29,-1,29,42,30,-1,30,42,31,-1,31,42,41,-1,32,34,33,-1,33,34,24,-1]
Coordinate979 = x3d.Coordinate()

IndexedFaceSet978.coord = Coordinate979
TextureCoordinate980 = x3d.TextureCoordinate()

IndexedFaceSet978.texCoord = TextureCoordinate980

Shape974.geometry = IndexedFaceSet978

Transform973.children.append(Shape974)

HAnimSegment972.children.append(Transform973)

HAnimJoint971.children.append(HAnimSegment972)
HAnimJoint981 = x3d.HAnimJoint()
HAnimJoint981.name = "l_midcarpal_1"
HAnimJoint981.DEF = "hanim_l_midcarpal_1"
HAnimJoint981.center = [0.1812825,0.8755019721,0.019327499999999997]
HAnimJoint981.ulimit = [0,0,0]
HAnimJoint981.llimit = [0,0,0]
HAnimSegment982 = x3d.HAnimSegment()
HAnimSegment982.name = "l_trapezium"
HAnimSegment982.DEF = "hanim_l_trapezium"
Transform983 = x3d.Transform()
Transform983.translation = [0.1812825,0.8755019721,0.019327499999999997]
Shape984 = x3d.Shape()
Appearance985 = x3d.Appearance()
Material986 = x3d.Material()
Material986.diffuseColor = [0.588,0.588,0.588]

Appearance985.material = Material986
ImageTexture987 = x3d.ImageTexture()
ImageTexture987.USE = "JinLOA4TextureAtlas"

Appearance985.texture = ImageTexture987

Shape984.appearance = Appearance985
IndexedFaceSet988 = x3d.IndexedFaceSet()
IndexedFaceSet988.coordIndex = [6,5,3,-1,3,0,6,-1,5,8,2,-1,2,3,5,-1,1,4,7,-1,2,8,7,-1,7,4,2,-1,14,17,16,-1,16,15,14,-1,9,13,10,-1,10,13,12,-1,12,11,10,-1,1,9,10,-1,10,4,1,-1,4,10,11,-1,11,2,4,-1,2,11,12,-1,12,3,2,-1,3,12,13,-1,13,0,3,-1,6,14,15,-1,15,5,6,-1,5,15,16,-1,16,8,5,-1,8,16,17,-1,17,7,8,-1,20,21,22,-1,22,23,24,-1,24,25,18,-1,22,24,18,-1,20,22,18,-1,19,20,18,-1,6,0,19,-1,19,18,6,-1,0,13,20,-1,20,19,0,-1,13,9,21,-1,21,20,13,-1,9,1,22,-1,22,21,9,-1,1,7,23,-1,23,22,1,-1,7,17,24,-1,24,23,7,-1,17,14,25,-1,25,24,17,-1,14,6,18,-1,18,25,14,-1]
IndexedFaceSet988.creaseAngle = 3.14159
IndexedFaceSet988.texCoordIndex = [0,3,2,-1,2,1,0,-1,3,5,4,-1,4,2,3,-1,7,8,6,-1,18,19,6,-1,6,8,18,-1,21,12,23,-1,23,22,21,-1,9,10,15,-1,15,10,17,-1,17,16,15,-1,7,20,24,-1,24,8,7,-1,8,24,25,-1,25,18,8,-1,4,16,17,-1,17,2,4,-1,2,17,10,-1,10,1,2,-1,0,11,13,-1,13,3,0,-1,3,13,14,-1,14,5,3,-1,19,23,12,-1,12,6,19,-1,28,29,30,-1,30,31,32,-1,32,33,26,-1,30,32,26,-1,28,30,26,-1,27,28,26,-1,0,1,27,-1,27,26,0,-1,1,10,28,-1,28,27,1,-1,10,9,29,-1,29,28,10,-1,20,7,30,-1,30,29,20,-1,7,6,31,-1,31,30,7,-1,6,12,32,-1,32,31,6,-1,12,21,33,-1,33,32,12,-1,11,0,26,-1,26,33,11,-1]
Coordinate989 = x3d.Coordinate()

IndexedFaceSet988.coord = Coordinate989
TextureCoordinate990 = x3d.TextureCoordinate()

IndexedFaceSet988.texCoord = TextureCoordinate990

Shape984.geometry = IndexedFaceSet988

Transform983.children.append(Shape984)

HAnimSegment982.children.append(Transform983)

HAnimJoint981.children.append(HAnimSegment982)
HAnimJoint991 = x3d.HAnimJoint()
HAnimJoint991.name = "l_carpometacarpal_1"
HAnimJoint991.DEF = "hanim_l_carpometacarpal_1"
HAnimJoint991.center = [0.180495,0.8587620279,0.0259875]
HAnimJoint991.ulimit = [0,0,0]
HAnimJoint991.llimit = [0,0,0]
HAnimSegment992 = x3d.HAnimSegment()
HAnimSegment992.name = "l_metacarpal_1"
HAnimSegment992.DEF = "hanim_l_metacarpal_1"
Transform993 = x3d.Transform()
Transform993.translation = [0.180495,0.8587620279,0.0259875]
Shape994 = x3d.Shape()
Appearance995 = x3d.Appearance()
Material996 = x3d.Material()
Material996.diffuseColor = [0.588,0.588,0.588]

Appearance995.material = Material996
ImageTexture997 = x3d.ImageTexture()
ImageTexture997.USE = "JinLOA4TextureAtlas"

Appearance995.texture = ImageTexture997

Shape994.appearance = Appearance995
IndexedFaceSet998 = x3d.IndexedFaceSet()
IndexedFaceSet998.coordIndex = [1,2,9,-1,9,8,1,-1,8,10,0,-1,0,1,8,-1,2,3,6,-1,6,9,2,-1,0,10,7,-1,7,4,0,-1,5,6,3,-1,22,21,25,-1,22,25,24,-1,23,22,24,-1,19,18,17,-1,17,20,19,-1,13,12,11,-1,11,14,13,-1,14,11,16,-1,16,15,14,-1,3,11,12,-1,12,5,3,-1,5,12,13,-1,13,4,5,-1,4,13,14,-1,14,0,4,-1,0,14,15,-1,15,1,0,-1,1,15,16,-1,16,2,1,-1,2,16,11,-1,11,3,2,-1,7,17,18,-1,18,4,7,-1,4,18,19,-1,19,5,4,-1,5,19,20,-1,20,6,5,-1,6,20,17,-1,17,7,6,-1,10,21,22,-1,22,7,10,-1,7,22,23,-1,23,6,7,-1,6,23,24,-1,24,9,6,-1,9,24,25,-1,25,8,9,-1,8,25,21,-1,21,10,8,-1]
IndexedFaceSet998.creaseAngle = 3.14159
IndexedFaceSet998.texCoordIndex = [0,3,2,-1,2,1,0,-1,27,4,28,-1,28,26,27,-1,3,6,7,-1,7,2,3,-1,28,4,30,-1,30,29,28,-1,10,7,6,-1,15,14,13,-1,15,13,12,-1,11,15,12,-1,16,19,18,-1,18,17,16,-1,20,23,22,-1,22,21,20,-1,21,22,25,-1,25,24,21,-1,6,22,23,-1,23,10,6,-1,10,23,20,-1,20,8,10,-1,8,20,21,-1,21,5,8,-1,5,21,24,-1,24,0,5,-1,0,24,25,-1,25,3,0,-1,3,25,22,-1,22,6,3,-1,30,34,35,-1,35,29,30,-1,8,19,16,-1,16,10,8,-1,10,16,17,-1,17,7,10,-1,7,17,18,-1,18,9,7,-1,4,32,33,-1,33,30,4,-1,9,15,11,-1,11,7,9,-1,7,11,12,-1,12,2,7,-1,2,12,13,-1,13,1,2,-1,27,31,32,-1,32,4,27,-1]
Coordinate999 = x3d.Coordinate()

IndexedFaceSet998.coord = Coordinate999
TextureCoordinate1000 = x3d.TextureCoordinate()

IndexedFaceSet998.texCoord = TextureCoordinate1000

Shape994.geometry = IndexedFaceSet998

Transform993.children.append(Shape994)

HAnimSegment992.children.append(Transform993)

HAnimJoint991.children.append(HAnimSegment992)
HAnimJoint1001 = x3d.HAnimJoint()
HAnimJoint1001.name = "l_metacarpophalangeal_1"
HAnimJoint1001.DEF = "hanim_l_metacarpophalangeal_1"
HAnimJoint1001.center = [0.18103499999999997,0.83421,0.035775]
HAnimJoint1001.ulimit = [0,0,0]
HAnimJoint1001.llimit = [0,0,0]
HAnimSegment1002 = x3d.HAnimSegment()
HAnimSegment1002.name = "l_carpal_proximal_phalanx_1"
HAnimSegment1002.DEF = "hanim_l_carpal_proximal_phalanx_1"
Transform1003 = x3d.Transform()
Transform1003.translation = [0.18103499999999997,0.83421,0.035775]
Shape1004 = x3d.Shape()
Appearance1005 = x3d.Appearance()
Material1006 = x3d.Material()
Material1006.diffuseColor = [0.588,0.588,0.588]

Appearance1005.material = Material1006
ImageTexture1007 = x3d.ImageTexture()
ImageTexture1007.USE = "JinLOA4TextureAtlas"

Appearance1005.texture = ImageTexture1007

Shape1004.appearance = Appearance1005
IndexedFaceSet1008 = x3d.IndexedFaceSet()
IndexedFaceSet1008.coordIndex = [5,0,6,-1,7,13,14,-1,14,3,7,-1,5,10,17,-1,17,0,5,-1,4,9,10,-1,10,5,4,-1,3,14,9,-1,9,4,3,-1,0,17,19,-1,19,1,0,-1,1,19,13,-1,13,7,1,-1,1,2,0,-1,0,2,8,-1,8,6,0,-1,9,12,11,-1,11,10,9,-1,13,16,15,-1,15,14,13,-1,10,11,18,-1,18,17,10,-1,19,20,16,-1,16,13,19,-1,17,18,20,-1,20,19,17,-1,14,15,12,-1,12,9,14,-1,15,16,20,-1,20,12,15,-1,11,12,20,-1,20,18,11,-1,26,25,24,-1,24,23,22,-1,26,24,22,-1,21,26,22,-1,28,27,30,-1,30,29,28,-1,8,21,22,-1,22,6,8,-1,6,22,23,-1,23,5,6,-1,5,23,24,-1,24,4,5,-1,4,24,25,-1,25,3,4,-1,3,25,26,-1,26,7,3,-1,27,32,31,-1,31,30,27,-1,7,27,28,-1,28,1,7,-1,1,28,29,-1,29,2,1,-1,2,29,30,-1,30,8,2,-1,8,30,31,-1,31,21,8,-1,21,31,32,-1,32,26,21,-1,26,32,27,-1,27,7,26,-1]
IndexedFaceSet1008.creaseAngle = 3.14159
IndexedFaceSet1008.texCoordIndex = [0,2,1,-1,36,35,34,-1,34,33,36,-1,0,8,7,-1,7,2,0,-1,10,9,8,-1,8,0,10,-1,33,34,37,-1,37,38,33,-1,2,7,12,-1,12,11,2,-1,39,40,35,-1,35,36,39,-1,11,13,2,-1,2,13,14,-1,14,1,2,-1,9,16,15,-1,15,8,9,-1,5,18,17,-1,17,4,5,-1,8,15,19,-1,19,7,8,-1,12,20,18,-1,18,5,12,-1,7,19,20,-1,20,12,7,-1,4,17,16,-1,16,9,4,-1,17,18,20,-1,20,16,17,-1,15,16,20,-1,20,19,15,-1,26,25,24,-1,24,23,22,-1,26,24,22,-1,21,26,22,-1,28,27,30,-1,30,29,28,-1,14,21,22,-1,22,1,14,-1,1,22,23,-1,23,0,1,-1,0,23,24,-1,24,10,0,-1,10,24,25,-1,25,3,10,-1,33,41,42,-1,42,36,33,-1,27,32,31,-1,31,30,27,-1,6,27,28,-1,28,11,6,-1,11,28,29,-1,29,13,11,-1,13,29,30,-1,30,14,13,-1,14,30,31,-1,31,21,14,-1,21,31,32,-1,32,26,21,-1,42,44,43,-1,43,36,42,-1]
Coordinate1009 = x3d.Coordinate()

IndexedFaceSet1008.coord = Coordinate1009
TextureCoordinate1010 = x3d.TextureCoordinate()

IndexedFaceSet1008.texCoord = TextureCoordinate1010

Shape1004.geometry = IndexedFaceSet1008

Transform1003.children.append(Shape1004)

HAnimSegment1002.children.append(Transform1003)

HAnimJoint1001.children.append(HAnimSegment1002)
HAnimJoint1011 = x3d.HAnimJoint()
HAnimJoint1011.name = "l_carpal_interphalangeal_1"
HAnimJoint1011.DEF = "hanim_l_carpal_interphalangeal_1"
HAnimJoint1011.center = [0.182655,0.811053,0.04965749999999999]
HAnimJoint1011.ulimit = [0,0,0]
HAnimJoint1011.llimit = [0,0,0]
HAnimSegment1012 = x3d.HAnimSegment()
HAnimSegment1012.name = "l_carpal_distal_phalanx_1"
HAnimSegment1012.DEF = "hanim_l_carpal_distal_phalanx_1"
Transform1013 = x3d.Transform()
Transform1013.translation = [0.182655,0.811053,0.04965749999999999]
Shape1014 = x3d.Shape()
Appearance1015 = x3d.Appearance()
Material1016 = x3d.Material()
Material1016.diffuseColor = [0.588,0.588,0.588]

Appearance1015.material = Material1016
ImageTexture1017 = x3d.ImageTexture()
ImageTexture1017.USE = "JinLOA4TextureAtlas"

Appearance1015.texture = ImageTexture1017

Shape1014.appearance = Appearance1015
IndexedFaceSet1018 = x3d.IndexedFaceSet()
IndexedFaceSet1018.coordIndex = [0,11,28,-1,28,29,0,-1,32,1,17,-1,17,2,32,-1,4,17,1,-1,1,3,4,-1,11,5,31,-1,31,28,11,-1,29,32,2,-1,2,0,29,-1,4,3,31,-1,31,5,4,-1,23,1,32,-1,24,31,3,-1,24,3,1,-1,1,23,24,-1,4,8,7,-1,7,6,4,-1,5,11,10,-1,10,9,5,-1,4,5,9,-1,9,8,4,-1,10,12,14,-1,14,13,10,-1,2,17,16,-1,16,15,2,-1,0,2,15,-1,15,12,0,-1,8,9,18,-1,18,7,8,-1,18,9,10,-1,10,13,18,-1,6,19,21,-1,21,20,6,-1,22,14,21,-1,21,19,22,-1,17,6,20,-1,20,16,17,-1,6,17,4,-1,11,0,12,-1,12,10,11,-1,13,14,22,-1,6,7,18,-1,18,19,6,-1,18,13,22,-1,22,19,18,-1,16,20,21,-1,21,15,16,-1,21,14,12,-1,12,15,21,-1,24,23,26,-1,26,25,24,-1,28,27,30,-1,30,29,28,-1,27,25,26,-1,26,30,27,-1,24,25,27,-1,27,31,24,-1,32,30,26,-1,26,23,32,-1,30,32,29,-1,28,31,27,-1]
IndexedFaceSet1018.creaseAngle = 3.14159
IndexedFaceSet1018.texCoordIndex = [3,2,34,-1,34,33,3,-1,4,7,6,-1,6,5,4,-1,9,6,7,-1,7,8,9,-1,2,38,37,-1,37,34,2,-1,33,35,36,-1,36,3,33,-1,9,8,10,-1,10,11,9,-1,12,7,4,-1,13,10,8,-1,13,8,7,-1,7,12,13,-1,9,16,15,-1,15,14,9,-1,38,2,18,-1,18,39,38,-1,9,11,17,-1,17,16,9,-1,18,19,21,-1,21,20,18,-1,5,6,23,-1,23,22,5,-1,3,36,40,-1,40,19,3,-1,16,17,24,-1,24,15,16,-1,41,39,18,-1,18,20,41,-1,14,25,27,-1,27,26,14,-1,28,21,43,-1,43,42,28,-1,6,14,26,-1,26,23,6,-1,14,6,9,-1,2,3,19,-1,19,18,2,-1,20,21,28,-1,14,15,24,-1,24,25,14,-1,41,20,28,-1,28,42,41,-1,23,26,27,-1,27,22,23,-1,43,21,19,-1,19,40,43,-1,13,12,30,-1,30,29,13,-1,1,31,32,-1,32,0,1,-1,31,29,30,-1,30,32,31,-1,13,29,31,-1,31,10,13,-1,4,32,30,-1,30,12,4,-1,32,4,0,-1,1,10,31,-1]
Coordinate1019 = x3d.Coordinate()

IndexedFaceSet1018.coord = Coordinate1019
TextureCoordinate1020 = x3d.TextureCoordinate()

IndexedFaceSet1018.texCoord = TextureCoordinate1020

Shape1014.geometry = IndexedFaceSet1018

Transform1013.children.append(Shape1014)

HAnimSegment1012.children.append(Transform1013)

HAnimJoint1011.children.append(HAnimSegment1012)

HAnimJoint1001.children.append(HAnimJoint1011)

HAnimJoint991.children.append(HAnimJoint1001)

HAnimJoint981.children.append(HAnimJoint991)

HAnimJoint971.children.append(HAnimJoint981)
HAnimJoint1021 = x3d.HAnimJoint()
HAnimJoint1021.name = "l_midcarpal_2"
HAnimJoint1021.DEF = "hanim_l_midcarpal_2"
HAnimJoint1021.center = [0.1812825,0.8766180000000001,0.00841725]
HAnimJoint1021.ulimit = [0,0,0]
HAnimJoint1021.llimit = [0,0,0]
HAnimSegment1022 = x3d.HAnimSegment()
HAnimSegment1022.name = "l_trapezoid"
HAnimSegment1022.DEF = "hanim_l_trapezoid"
Transform1023 = x3d.Transform()
Transform1023.translation = [0.1812825,0.8766180000000001,0.00841725]
Shape1024 = x3d.Shape()
Appearance1025 = x3d.Appearance()
Material1026 = x3d.Material()
Material1026.diffuseColor = [0.588,0.588,0.588]

Appearance1025.material = Material1026
ImageTexture1027 = x3d.ImageTexture()
ImageTexture1027.USE = "JinLOA4TextureAtlas"

Appearance1025.texture = ImageTexture1027

Shape1024.appearance = Appearance1025
IndexedFaceSet1028 = x3d.IndexedFaceSet()
IndexedFaceSet1028.coordIndex = [14,12,1,-1,1,2,14,-1,0,13,15,-1,15,3,0,-1,11,10,9,-1,9,8,11,-1,4,5,17,-1,17,16,4,-1,18,6,7,-1,7,19,18,-1,0,4,16,-1,16,13,0,-1,12,17,5,-1,5,1,12,-1,1,5,4,-1,4,0,1,-1,2,6,18,-1,18,14,2,-1,15,19,7,-1,7,3,15,-1,3,7,6,-1,6,2,3,-1,3,8,9,-1,9,0,3,-1,0,9,10,-1,10,1,0,-1,1,10,11,-1,11,2,1,-1,2,11,8,-1,8,3,2,-1,22,23,24,-1,24,25,26,-1,26,27,20,-1,24,26,20,-1,22,24,20,-1,21,22,20,-1,12,14,21,-1,21,20,12,-1,14,18,22,-1,22,21,14,-1,18,19,23,-1,23,22,18,-1,19,15,24,-1,24,23,19,-1,15,13,25,-1,25,24,15,-1,13,16,26,-1,26,25,13,-1,16,17,27,-1,27,26,16,-1,17,12,20,-1,20,27,17,-1]
IndexedFaceSet1028.creaseAngle = 3.14159
IndexedFaceSet1028.texCoordIndex = [21,19,1,-1,1,0,21,-1,12,20,22,-1,22,13,12,-1,5,4,7,-1,7,6,5,-1,8,9,25,-1,25,23,8,-1,26,17,18,-1,18,28,26,-1,12,16,24,-1,24,20,12,-1,19,25,9,-1,9,1,19,-1,1,9,8,-1,8,2,1,-1,0,10,27,-1,27,21,0,-1,22,28,18,-1,18,13,22,-1,3,11,10,-1,10,0,3,-1,13,14,15,-1,15,12,13,-1,2,7,4,-1,4,1,2,-1,1,4,5,-1,5,0,1,-1,0,5,6,-1,6,3,0,-1,31,32,33,-1,33,34,35,-1,35,36,29,-1,33,35,29,-1,31,33,29,-1,30,31,29,-1,19,21,30,-1,30,29,19,-1,21,27,31,-1,31,30,21,-1,26,28,32,-1,32,31,26,-1,28,22,33,-1,33,32,28,-1,22,20,34,-1,34,33,22,-1,20,24,35,-1,35,34,20,-1,23,25,36,-1,36,35,23,-1,25,19,29,-1,29,36,25,-1]
Coordinate1029 = x3d.Coordinate()

IndexedFaceSet1028.coord = Coordinate1029
TextureCoordinate1030 = x3d.TextureCoordinate()

IndexedFaceSet1028.texCoord = TextureCoordinate1030

Shape1024.geometry = IndexedFaceSet1028

Transform1023.children.append(Shape1024)

HAnimSegment1022.children.append(Transform1023)

HAnimJoint1021.children.append(HAnimSegment1022)
HAnimJoint1031 = x3d.HAnimJoint()
HAnimJoint1031.name = "l_carpometacarpal_2"
HAnimJoint1031.DEF = "hanim_l_carpometacarpal_2"
HAnimJoint1031.center = [0.1812825,0.8526239721000001,0.009729]
HAnimJoint1031.ulimit = [0,0,0]
HAnimJoint1031.llimit = [0,0,0]
HAnimSegment1032 = x3d.HAnimSegment()
HAnimSegment1032.name = "l_metacarpal_2"
HAnimSegment1032.DEF = "hanim_l_metacarpal_2"
Transform1033 = x3d.Transform()
Transform1033.translation = [0.1812825,0.8526239721000001,0.009729]
Shape1034 = x3d.Shape()
Appearance1035 = x3d.Appearance()
Material1036 = x3d.Material()
Material1036.diffuseColor = [0.588,0.588,0.588]

Appearance1035.material = Material1036
ImageTexture1037 = x3d.ImageTexture()
ImageTexture1037.USE = "JinLOA4TextureAtlas"

Appearance1035.texture = ImageTexture1037

Shape1034.appearance = Appearance1035
IndexedFaceSet1038 = x3d.IndexedFaceSet()
IndexedFaceSet1038.coordIndex = [0,3,8,-1,8,1,0,-1,5,7,3,-1,3,0,5,-1,10,2,4,-1,4,6,10,-1,2,1,8,-1,8,4,2,-1,14,11,6,-1,6,4,14,-1,8,3,17,-1,17,16,8,-1,9,7,12,-1,12,13,9,-1,15,4,8,-1,8,16,15,-1,15,14,4,-1,9,18,17,-1,17,3,9,-1,9,13,18,-1,25,31,30,-1,25,30,27,-1,26,25,27,-1,22,21,20,-1,20,19,22,-1,41,40,39,-1,39,38,41,-1,32,37,36,-1,33,32,36,-1,34,33,36,-1,35,34,36,-1,23,22,19,-1,19,24,23,-1,6,19,20,-1,20,10,6,-1,30,29,28,-1,28,27,30,-1,5,21,22,-1,22,7,5,-1,7,22,23,-1,23,12,7,-1,12,23,24,-1,24,11,12,-1,11,24,19,-1,19,6,11,-1,1,25,26,-1,26,0,1,-1,0,26,27,-1,27,5,0,-1,5,27,28,-1,28,21,5,-1,21,28,29,-1,29,20,21,-1,20,29,30,-1,30,10,20,-1,10,30,31,-1,31,2,10,-1,2,31,25,-1,25,1,2,-1,16,32,33,-1,33,15,16,-1,15,33,34,-1,34,14,15,-1,14,34,35,-1,35,13,14,-1,13,35,36,-1,36,18,13,-1,18,36,37,-1,37,17,18,-1,17,37,32,-1,32,16,17,-1,14,38,39,-1,39,11,14,-1,11,39,40,-1,40,12,11,-1,12,40,41,-1,41,13,12,-1,13,41,38,-1,38,14,13,-1,9,3,7,-1]
IndexedFaceSet1038.creaseAngle = 3.14159
IndexedFaceSet1038.texCoordIndex = [3,2,1,-1,1,0,3,-1,5,4,2,-1,2,3,5,-1,44,46,8,-1,8,45,44,-1,46,42,43,-1,43,8,46,-1,47,48,45,-1,45,8,47,-1,1,2,13,-1,13,12,1,-1,16,4,15,-1,15,14,16,-1,50,8,43,-1,43,49,50,-1,50,47,8,-1,16,18,13,-1,13,2,16,-1,16,14,18,-1,23,22,21,-1,23,21,20,-1,19,23,20,-1,25,24,27,-1,27,26,25,-1,29,28,31,-1,31,30,29,-1,35,34,33,-1,36,35,33,-1,37,36,33,-1,32,37,33,-1,38,25,26,-1,26,39,38,-1,7,26,27,-1,27,6,7,-1,21,41,40,-1,40,20,21,-1,5,24,25,-1,25,4,5,-1,4,25,38,-1,38,15,4,-1,15,38,39,-1,39,11,15,-1,48,56,51,-1,51,45,48,-1,0,23,19,-1,19,3,0,-1,3,19,20,-1,20,5,3,-1,5,20,40,-1,40,24,5,-1,24,40,41,-1,41,27,24,-1,27,41,21,-1,21,6,27,-1,6,21,22,-1,22,9,6,-1,9,22,23,-1,23,0,9,-1,12,35,36,-1,36,17,12,-1,50,54,55,-1,55,47,50,-1,10,37,32,-1,32,14,10,-1,14,32,33,-1,33,18,14,-1,18,33,34,-1,34,13,18,-1,13,34,35,-1,35,12,13,-1,47,52,53,-1,53,48,47,-1,11,31,28,-1,28,15,11,-1,15,28,29,-1,29,14,15,-1,14,29,30,-1,30,10,14,-1,16,2,4,-1]
Coordinate1039 = x3d.Coordinate()

IndexedFaceSet1038.coord = Coordinate1039
TextureCoordinate1040 = x3d.TextureCoordinate()

IndexedFaceSet1038.texCoord = TextureCoordinate1040

Shape1034.geometry = IndexedFaceSet1038

Transform1033.children.append(Shape1034)

HAnimSegment1032.children.append(Transform1033)

HAnimJoint1031.children.append(HAnimSegment1032)
HAnimJoint1041 = x3d.HAnimJoint()
HAnimJoint1041.name = "l_metacarpophalangeal_2"
HAnimJoint1041.DEF = "hanim_l_metacarpophalangeal_2"
HAnimJoint1041.center = [0.183735,0.790128,0.015075]
HAnimJoint1041.ulimit = [0,0,0]
HAnimJoint1041.llimit = [0,0,0]
HAnimSegment1042 = x3d.HAnimSegment()
HAnimSegment1042.name = "l_carpal_proximal_phalanx_2"
HAnimSegment1042.DEF = "hanim_l_carpal_proximal_phalanx_2"
Transform1043 = x3d.Transform()
Transform1043.translation = [0.183735,0.790128,0.015075]
Shape1044 = x3d.Shape()
Appearance1045 = x3d.Appearance()
Material1046 = x3d.Material()
Material1046.diffuseColor = [0.588,0.588,0.588]

Appearance1045.material = Material1046
ImageTexture1047 = x3d.ImageTexture()
ImageTexture1047.USE = "JinLOA4TextureAtlas"

Appearance1045.texture = ImageTexture1047

Shape1044.appearance = Appearance1045
IndexedFaceSet1048 = x3d.IndexedFaceSet()
IndexedFaceSet1048.coordIndex = [4,5,18,-1,18,19,4,-1,5,6,21,-1,21,18,5,-1,7,8,20,-1,20,25,7,-1,8,4,19,-1,19,20,8,-1,6,22,21,-1,1,10,8,-1,8,7,1,-1,6,5,11,-1,11,2,6,-1,5,4,0,-1,0,11,5,-1,4,8,10,-1,10,0,4,-1,1,7,9,-1,9,3,1,-1,9,6,2,-1,2,3,9,-1,9,7,23,-1,23,24,9,-1,6,9,24,-1,24,22,6,-1,23,7,25,-1,0,17,15,-1,15,11,0,-1,1,12,14,-1,14,10,1,-1,11,15,13,-1,13,2,11,-1,3,16,12,-1,12,1,3,-1,2,13,16,-1,16,3,2,-1,10,14,17,-1,17,0,10,-1,14,12,16,-1,16,17,14,-1,15,17,16,-1,16,13,15,-1,28,27,26,-1,29,28,26,-1,30,29,26,-1,18,26,27,-1,27,19,18,-1,19,27,28,-1,28,20,19,-1,20,28,29,-1,29,25,20,-1,36,35,34,-1,36,34,33,-1,33,32,31,-1,33,31,37,-1,36,33,37,-1,21,30,26,-1,26,18,21,-1,24,31,32,-1,32,22,24,-1,22,32,33,-1,33,21,22,-1,21,33,34,-1,34,30,21,-1,30,34,35,-1,35,29,30,-1,29,35,36,-1,36,25,29,-1,25,36,37,-1,37,23,25,-1,23,37,31,-1,31,24,23,-1]
IndexedFaceSet1048.creaseAngle = 3.14159
IndexedFaceSet1048.texCoordIndex = [0,3,2,-1,2,1,0,-1,3,5,4,-1,4,2,3,-1,6,9,41,-1,41,40,6,-1,9,38,39,-1,39,41,9,-1,5,10,4,-1,11,12,9,-1,9,6,11,-1,5,3,14,-1,14,13,5,-1,3,0,15,-1,15,14,3,-1,38,9,12,-1,12,42,38,-1,11,6,44,-1,44,43,11,-1,17,5,13,-1,13,16,17,-1,44,6,46,-1,46,45,44,-1,5,17,18,-1,18,10,5,-1,46,6,40,-1,15,21,20,-1,20,14,15,-1,11,23,22,-1,22,12,11,-1,14,20,24,-1,24,13,14,-1,43,48,23,-1,23,11,43,-1,13,24,25,-1,25,16,13,-1,12,22,47,-1,47,42,12,-1,22,23,48,-1,48,47,22,-1,20,21,25,-1,25,24,20,-1,29,28,27,-1,30,29,27,-1,26,30,27,-1,2,27,28,-1,28,1,2,-1,1,28,29,-1,29,8,1,-1,8,29,30,-1,30,7,8,-1,31,37,36,-1,31,36,35,-1,35,34,33,-1,35,33,32,-1,31,35,32,-1,4,26,27,-1,27,2,4,-1,18,33,34,-1,34,10,18,-1,10,34,35,-1,35,4,10,-1,4,35,36,-1,36,26,4,-1,26,36,37,-1,37,30,26,-1,30,37,31,-1,31,7,30,-1,7,31,32,-1,32,19,7,-1,19,32,33,-1,33,18,19,-1]
Coordinate1049 = x3d.Coordinate()

IndexedFaceSet1048.coord = Coordinate1049
TextureCoordinate1050 = x3d.TextureCoordinate()

IndexedFaceSet1048.texCoord = TextureCoordinate1050

Shape1044.geometry = IndexedFaceSet1048

Transform1043.children.append(Shape1044)

HAnimSegment1042.children.append(Transform1043)

HAnimJoint1041.children.append(HAnimSegment1042)
HAnimJoint1051 = x3d.HAnimJoint()
HAnimJoint1051.name = "l_carpal_proximal_interphalangeal_2"
HAnimJoint1051.DEF = "hanim_l_carpal_proximal_interphalangeal_2"
HAnimJoint1051.center = [0.18171,0.7524629721,0.014183999999999999]
HAnimJoint1051.ulimit = [0,0,0]
HAnimJoint1051.llimit = [0,0,0]
HAnimSegment1052 = x3d.HAnimSegment()
HAnimSegment1052.name = "l_carpal_middle_phalanx_2"
HAnimSegment1052.DEF = "hanim_l_carpal_middle_phalanx_2"
Transform1053 = x3d.Transform()
Transform1053.translation = [0.18171,0.7524629721,0.014183999999999999]
Shape1054 = x3d.Shape()
Appearance1055 = x3d.Appearance()
Material1056 = x3d.Material()
Material1056.diffuseColor = [0.588,0.588,0.588]

Appearance1055.material = Material1056
ImageTexture1057 = x3d.ImageTexture()
ImageTexture1057.USE = "JinLOA4TextureAtlas"

Appearance1055.texture = ImageTexture1057

Shape1054.appearance = Appearance1055
IndexedFaceSet1058 = x3d.IndexedFaceSet()
IndexedFaceSet1058.coordIndex = [1,15,14,-1,14,7,1,-1,8,14,3,-1,1,7,5,-1,5,18,1,-1,3,2,21,-1,21,4,3,-1,6,8,3,-1,3,4,6,-1,6,4,13,-1,0,18,5,-1,5,13,0,-1,13,4,21,-1,21,0,13,-1,2,3,14,-1,14,15,2,-1,8,6,12,-1,12,11,8,-1,7,10,9,-1,9,5,7,-1,10,11,12,-1,12,9,10,-1,8,11,10,-1,10,14,8,-1,13,9,12,-1,12,6,13,-1,9,13,5,-1,7,14,10,-1,15,17,16,-1,16,2,15,-1,18,20,19,-1,19,1,18,-1,2,16,22,-1,22,21,2,-1,0,23,20,-1,20,18,0,-1,21,22,23,-1,23,0,21,-1,1,19,17,-1,17,15,1,-1,19,20,23,-1,23,17,19,-1,16,17,23,-1,23,22,16,-1]
IndexedFaceSet1058.creaseAngle = 3.14159
IndexedFaceSet1058.texCoordIndex = [3,25,24,-1,24,0,3,-1,4,1,5,-1,3,0,7,-1,7,6,3,-1,5,10,9,-1,9,8,5,-1,11,4,5,-1,5,8,11,-1,11,8,12,-1,27,6,7,-1,7,26,27,-1,12,8,9,-1,9,13,12,-1,10,5,1,-1,1,2,10,-1,4,11,15,-1,15,14,4,-1,0,28,29,-1,29,7,0,-1,16,14,15,-1,15,17,16,-1,4,14,16,-1,16,1,4,-1,12,17,15,-1,15,11,12,-1,29,26,7,-1,0,24,28,-1,2,19,18,-1,18,10,2,-1,6,21,20,-1,20,3,6,-1,10,18,22,-1,22,9,10,-1,27,31,21,-1,21,6,27,-1,9,22,23,-1,23,13,9,-1,3,20,30,-1,30,25,3,-1,20,21,31,-1,31,30,20,-1,18,19,23,-1,23,22,18,-1]
Coordinate1059 = x3d.Coordinate()

IndexedFaceSet1058.coord = Coordinate1059
TextureCoordinate1060 = x3d.TextureCoordinate()

IndexedFaceSet1058.texCoord = TextureCoordinate1060

Shape1054.geometry = IndexedFaceSet1058

Transform1053.children.append(Shape1054)

HAnimSegment1052.children.append(Transform1053)

HAnimJoint1051.children.append(HAnimSegment1052)
HAnimJoint1061 = x3d.HAnimJoint()
HAnimJoint1061.name = "l_carpal_distal_interphalangeal_2"
HAnimJoint1061.DEF = "hanim_l_carpal_distal_interphalangeal_2"
HAnimJoint1061.center = [0.18067499999999997,0.721215,0.01338525]
HAnimJoint1061.ulimit = [0,0,0]
HAnimJoint1061.llimit = [0,0,0]
HAnimSegment1062 = x3d.HAnimSegment()
HAnimSegment1062.name = "l_carpal_distal_phalanx_2"
HAnimSegment1062.DEF = "hanim_l_carpal_distal_phalanx_2"
Transform1063 = x3d.Transform()
Transform1063.translation = [0.18067499999999997,0.721215,0.01338525]
Shape1064 = x3d.Shape()
Appearance1065 = x3d.Appearance()
Material1066 = x3d.Material()
Material1066.diffuseColor = [0.588,0.588,0.588]

Appearance1065.material = Material1066
ImageTexture1067 = x3d.ImageTexture()
ImageTexture1067.USE = "JinLOA4TextureAtlas"

Appearance1065.texture = ImageTexture1067

Shape1064.appearance = Appearance1065
IndexedFaceSet1068 = x3d.IndexedFaceSet()
IndexedFaceSet1068.coordIndex = [0,25,31,-1,24,1,32,-1,1,0,2,-1,2,3,1,-1,31,23,4,-1,4,5,31,-1,0,31,5,-1,5,2,0,-1,23,29,6,-1,6,4,23,-1,32,1,3,-1,3,7,32,-1,29,32,7,-1,7,6,29,-1,2,8,17,-1,17,14,2,-1,5,4,10,-1,10,11,5,-1,2,5,11,-1,11,8,2,-1,10,12,18,-1,18,21,10,-1,7,3,9,-1,9,13,7,-1,6,7,13,-1,13,12,6,-1,8,11,19,-1,19,17,8,-1,19,11,10,-1,10,21,19,-1,25,0,1,-1,1,24,25,-1,14,16,22,-1,22,20,14,-1,15,18,22,-1,22,16,15,-1,3,14,20,-1,20,9,3,-1,14,3,2,-1,4,6,12,-1,12,10,4,-1,21,18,15,-1,14,17,19,-1,19,16,14,-1,19,21,15,-1,15,16,19,-1,9,20,22,-1,22,13,9,-1,22,18,12,-1,12,13,22,-1,25,24,27,-1,27,26,25,-1,23,28,30,-1,30,29,23,-1,28,26,27,-1,27,30,28,-1,25,26,28,-1,28,31,25,-1,32,30,27,-1,27,24,32,-1,30,32,29,-1,23,31,28,-1]
IndexedFaceSet1068.creaseAngle = 3.14159
IndexedFaceSet1068.texCoordIndex = [0,2,1,-1,3,5,4,-1,5,0,7,-1,7,6,5,-1,33,10,9,-1,9,35,33,-1,0,1,8,-1,8,7,0,-1,10,12,11,-1,11,9,10,-1,4,5,6,-1,6,13,4,-1,12,34,36,-1,36,11,12,-1,7,16,15,-1,15,14,7,-1,35,9,18,-1,18,37,35,-1,7,8,17,-1,17,16,7,-1,18,19,21,-1,21,20,18,-1,13,6,23,-1,23,22,13,-1,11,36,38,-1,38,19,11,-1,16,17,24,-1,24,15,16,-1,39,37,18,-1,18,20,39,-1,2,0,5,-1,5,3,2,-1,14,25,27,-1,27,26,14,-1,28,21,41,-1,41,40,28,-1,6,14,26,-1,26,23,6,-1,14,6,7,-1,9,11,19,-1,19,18,9,-1,20,21,28,-1,14,15,24,-1,24,25,14,-1,39,20,28,-1,28,40,39,-1,23,26,27,-1,27,22,23,-1,41,21,19,-1,19,38,41,-1,2,3,30,-1,30,29,2,-1,10,42,43,-1,43,12,10,-1,31,29,30,-1,30,32,31,-1,2,29,31,-1,31,1,2,-1,4,32,30,-1,30,3,4,-1,43,34,12,-1,10,33,42,-1]
Coordinate1069 = x3d.Coordinate()

IndexedFaceSet1068.coord = Coordinate1069
TextureCoordinate1070 = x3d.TextureCoordinate()

IndexedFaceSet1068.texCoord = TextureCoordinate1070

Shape1064.geometry = IndexedFaceSet1068

Transform1063.children.append(Shape1064)

HAnimSegment1062.children.append(Transform1063)

HAnimJoint1061.children.append(HAnimSegment1062)

HAnimJoint1051.children.append(HAnimJoint1061)

HAnimJoint1041.children.append(HAnimJoint1051)

HAnimJoint1031.children.append(HAnimJoint1041)

HAnimJoint1021.children.append(HAnimJoint1031)

HAnimJoint971.children.append(HAnimJoint1021)
HAnimJoint1071 = x3d.HAnimJoint()
HAnimJoint1071.name = "l_midcarpal_3"
HAnimJoint1071.DEF = "hanim_l_midcarpal_3"
HAnimJoint1071.center = [0.18108,0.878571,-0.004797]
HAnimJoint1071.ulimit = [0,0,0]
HAnimJoint1071.llimit = [0,0,0]
HAnimSegment1072 = x3d.HAnimSegment()
HAnimSegment1072.name = "l_capitate"
HAnimSegment1072.DEF = "hanim_l_capitate"
Transform1073 = x3d.Transform()
Transform1073.translation = [0.18108,0.878571,-0.004797]
Shape1074 = x3d.Shape()
Appearance1075 = x3d.Appearance()
Material1076 = x3d.Material()
Material1076.diffuseColor = [0.588,0.588,0.588]

Appearance1075.material = Material1076
ImageTexture1077 = x3d.ImageTexture()
ImageTexture1077.USE = "JinLOA4TextureAtlas"

Appearance1075.texture = ImageTexture1077

Shape1074.appearance = Appearance1075
IndexedFaceSet1078 = x3d.IndexedFaceSet()
IndexedFaceSet1078.coordIndex = [5,6,4,-1,4,1,5,-1,7,0,3,-1,3,2,7,-1,8,11,10,-1,10,9,8,-1,12,15,14,-1,14,13,12,-1,1,8,9,-1,9,5,1,-1,5,9,10,-1,10,7,5,-1,7,10,11,-1,11,0,7,-1,0,11,8,-1,8,1,0,-1,6,12,13,-1,13,4,6,-1,4,13,14,-1,14,3,4,-1,3,14,15,-1,15,2,3,-1,2,15,12,-1,12,6,2,-1,22,21,20,-1,20,23,22,-1,18,17,16,-1,16,19,18,-1,5,16,17,-1,17,6,5,-1,6,17,18,-1,18,2,6,-1,2,18,19,-1,19,7,2,-1,7,19,16,-1,16,5,7,-1,0,20,21,-1,21,3,0,-1,3,21,22,-1,22,4,3,-1,4,22,23,-1,23,1,4,-1,1,23,20,-1,20,0,1,-1]
IndexedFaceSet1078.creaseAngle = 3.14159
IndexedFaceSet1078.texCoordIndex = [24,0,26,-1,26,25,24,-1,4,7,6,-1,6,5,4,-1,8,11,10,-1,10,9,8,-1,12,32,31,-1,31,30,12,-1,25,28,29,-1,29,24,25,-1,1,9,10,-1,10,4,1,-1,4,10,11,-1,11,7,4,-1,7,11,8,-1,8,2,7,-1,0,12,30,-1,30,26,0,-1,3,13,14,-1,14,6,3,-1,6,14,15,-1,15,5,6,-1,27,32,12,-1,12,0,27,-1,17,16,19,-1,19,18,17,-1,35,20,37,-1,37,36,35,-1,24,37,20,-1,20,0,24,-1,0,20,35,-1,35,27,0,-1,5,21,22,-1,22,4,5,-1,4,22,23,-1,23,1,4,-1,7,19,16,-1,16,6,7,-1,6,16,17,-1,17,3,6,-1,26,33,34,-1,34,25,26,-1,2,18,19,-1,19,7,2,-1]
Coordinate1079 = x3d.Coordinate()

IndexedFaceSet1078.coord = Coordinate1079
TextureCoordinate1080 = x3d.TextureCoordinate()

IndexedFaceSet1078.texCoord = TextureCoordinate1080

Shape1074.geometry = IndexedFaceSet1078

Transform1073.children.append(Shape1074)

HAnimSegment1072.children.append(Transform1073)

HAnimJoint1071.children.append(HAnimSegment1072)
HAnimJoint1081 = x3d.HAnimJoint()
HAnimJoint1081.name = "l_carpometacarpal_3"
HAnimJoint1081.DEF = "hanim_l_carpometacarpal_3"
HAnimJoint1081.center = [0.18108,0.850392,-0.00625275]
HAnimJoint1081.ulimit = [0,0,0]
HAnimJoint1081.llimit = [0,0,0]
HAnimSegment1082 = x3d.HAnimSegment()
HAnimSegment1082.name = "l_metacarpal_3"
HAnimSegment1082.DEF = "hanim_l_metacarpal_3"
Transform1083 = x3d.Transform()
Transform1083.translation = [0.18108,0.850392,-0.00625275]
Shape1084 = x3d.Shape()
Appearance1085 = x3d.Appearance()
Material1086 = x3d.Material()
Material1086.diffuseColor = [0.588,0.588,0.588]

Appearance1085.material = Material1086
ImageTexture1087 = x3d.ImageTexture()
ImageTexture1087.USE = "JinLOA4TextureAtlas"

Appearance1085.texture = ImageTexture1087

Shape1084.appearance = Appearance1085
IndexedFaceSet1088 = x3d.IndexedFaceSet()
IndexedFaceSet1088.coordIndex = [0,8,6,-1,6,3,0,-1,10,5,1,-1,1,7,10,-1,2,9,7,-1,7,1,2,-1,8,0,4,-1,4,11,8,-1,14,13,12,-1,12,15,14,-1,34,33,32,-1,32,35,34,-1,25,24,29,-1,29,28,25,-1,17,20,19,-1,19,18,17,-1,25,28,27,-1,27,26,25,-1,20,17,16,-1,16,21,20,-1,6,12,13,-1,13,3,6,-1,24,31,30,-1,30,29,24,-1,2,14,15,-1,15,9,2,-1,16,23,22,-1,22,21,16,-1,9,16,17,-1,17,7,9,-1,7,17,18,-1,18,10,7,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,8,11,-1,8,20,21,-1,21,6,8,-1,6,21,22,-1,22,12,6,-1,12,22,23,-1,23,15,12,-1,15,23,16,-1,16,9,15,-1,3,24,25,-1,25,0,3,-1,0,25,26,-1,26,4,0,-1,4,26,27,-1,27,5,4,-1,5,27,28,-1,28,1,5,-1,1,28,29,-1,29,2,1,-1,2,29,30,-1,30,14,2,-1,14,30,31,-1,31,13,14,-1,13,31,24,-1,24,3,13,-1,10,32,33,-1,33,5,10,-1,5,33,34,-1,34,4,5,-1,4,34,35,-1,35,11,4,-1,11,35,32,-1,32,10,11,-1]
IndexedFaceSet1088.creaseAngle = 3.14159
IndexedFaceSet1088.texCoordIndex = [2,1,0,-1,0,3,2,-1,39,38,37,-1,37,36,39,-1,40,41,36,-1,36,37,40,-1,1,2,11,-1,11,10,1,-1,12,15,14,-1,14,13,12,-1,43,46,45,-1,45,44,43,-1,20,23,22,-1,22,21,20,-1,48,51,50,-1,50,49,48,-1,20,21,29,-1,29,28,20,-1,27,24,31,-1,31,30,27,-1,0,14,15,-1,15,3,0,-1,23,33,32,-1,32,22,23,-1,8,12,13,-1,13,9,8,-1,31,35,34,-1,34,30,31,-1,9,31,24,-1,24,4,9,-1,36,48,49,-1,49,39,36,-1,7,25,26,-1,26,10,7,-1,10,26,27,-1,27,1,10,-1,1,27,30,-1,30,0,1,-1,0,30,34,-1,34,14,0,-1,14,34,35,-1,35,13,14,-1,13,35,31,-1,31,9,13,-1,3,23,20,-1,20,2,3,-1,2,20,28,-1,28,11,2,-1,42,52,53,-1,53,38,42,-1,38,53,47,-1,47,37,38,-1,5,21,22,-1,22,8,5,-1,8,22,32,-1,32,12,8,-1,12,32,33,-1,33,15,12,-1,15,33,23,-1,23,3,15,-1,39,45,46,-1,46,38,39,-1,6,19,16,-1,16,11,6,-1,11,16,17,-1,17,10,11,-1,10,17,18,-1,18,7,10,-1]
Coordinate1089 = x3d.Coordinate()

IndexedFaceSet1088.coord = Coordinate1089
TextureCoordinate1090 = x3d.TextureCoordinate()

IndexedFaceSet1088.texCoord = TextureCoordinate1090

Shape1084.geometry = IndexedFaceSet1088

Transform1083.children.append(Shape1084)

HAnimSegment1082.children.append(Transform1083)

HAnimJoint1081.children.append(HAnimSegment1082)
HAnimJoint1091 = x3d.HAnimJoint()
HAnimJoint1091.name = "l_metacarpophalangeal_3"
HAnimJoint1091.DEF = "hanim_l_metacarpophalangeal_3"
HAnimJoint1091.center = [0.18369,0.7873379721000001,-0.00391725]
HAnimJoint1091.ulimit = [0,0,0]
HAnimJoint1091.llimit = [0,0,0]
HAnimSegment1092 = x3d.HAnimSegment()
HAnimSegment1092.name = "l_carpal_proximal_phalanx_3"
HAnimSegment1092.DEF = "hanim_l_carpal_proximal_phalanx_3"
Transform1093 = x3d.Transform()
Transform1093.translation = [0.18369,0.7873379721000001,-0.00391725]
Shape1094 = x3d.Shape()
Appearance1095 = x3d.Appearance()
Material1096 = x3d.Material()
Material1096.diffuseColor = [0.588,0.588,0.588]

Appearance1095.material = Material1096
ImageTexture1097 = x3d.ImageTexture()
ImageTexture1097.USE = "JinLOA4TextureAtlas"

Appearance1095.texture = ImageTexture1097

Shape1094.appearance = Appearance1095
IndexedFaceSet1098 = x3d.IndexedFaceSet()
IndexedFaceSet1098.coordIndex = [3,4,26,-1,26,21,3,-1,5,6,27,-1,27,25,5,-1,4,23,26,-1,0,14,6,-1,6,5,0,-1,4,3,17,-1,17,1,4,-1,0,5,7,-1,7,2,0,-1,7,4,1,-1,1,2,7,-1,7,5,24,-1,24,22,7,-1,4,7,22,-1,22,23,4,-1,24,5,25,-1,15,13,11,-1,11,17,15,-1,0,8,10,-1,10,14,0,-1,17,11,9,-1,9,1,17,-1,2,12,8,-1,8,0,2,-1,1,9,12,-1,12,2,1,-1,14,10,13,-1,13,15,14,-1,10,8,12,-1,12,13,10,-1,11,13,12,-1,12,9,11,-1,3,21,18,-1,14,15,16,-1,16,6,14,-1,16,15,17,-1,17,3,16,-1,16,20,19,-1,19,6,16,-1,3,18,20,-1,20,16,3,-1,19,27,6,-1,31,30,29,-1,29,28,31,-1,26,28,29,-1,29,21,26,-1,38,37,36,-1,38,36,35,-1,35,34,33,-1,35,33,32,-1,38,35,32,-1,27,30,31,-1,31,25,27,-1,44,43,42,-1,44,42,41,-1,41,40,39,-1,44,41,39,-1,44,39,45,-1,18,32,33,-1,33,20,18,-1,20,33,34,-1,34,19,20,-1,19,34,35,-1,35,27,19,-1,27,35,36,-1,36,30,27,-1,30,36,37,-1,37,29,30,-1,29,37,38,-1,38,21,29,-1,21,38,32,-1,32,18,21,-1,22,39,40,-1,40,23,22,-1,23,40,41,-1,41,26,23,-1,26,41,42,-1,42,28,26,-1,28,42,43,-1,43,31,28,-1,31,43,44,-1,44,25,31,-1,25,44,45,-1,45,24,25,-1,24,45,39,-1,39,22,24,-1]
IndexedFaceSet1098.creaseAngle = 3.14159
IndexedFaceSet1098.texCoordIndex = [0,3,2,-1,2,1,0,-1,4,7,47,-1,47,46,4,-1,3,8,2,-1,9,10,7,-1,7,4,9,-1,3,0,12,-1,12,11,3,-1,9,4,49,-1,49,48,9,-1,14,3,11,-1,11,13,14,-1,49,4,51,-1,51,50,49,-1,3,14,15,-1,15,8,3,-1,51,4,46,-1,17,19,18,-1,18,12,17,-1,9,21,20,-1,20,10,9,-1,12,18,22,-1,22,11,12,-1,48,54,21,-1,21,9,48,-1,11,22,23,-1,23,13,11,-1,10,20,53,-1,53,52,10,-1,20,21,54,-1,54,53,20,-1,18,19,23,-1,23,22,18,-1,0,1,24,-1,10,52,55,-1,55,7,10,-1,25,17,12,-1,12,0,25,-1,55,57,56,-1,56,7,55,-1,0,24,27,-1,27,25,0,-1,56,47,7,-1,31,30,29,-1,29,28,31,-1,2,28,29,-1,29,1,2,-1,32,38,37,-1,32,37,36,-1,36,35,34,-1,36,34,33,-1,32,36,33,-1,6,30,31,-1,31,5,6,-1,39,45,44,-1,39,44,43,-1,43,42,41,-1,39,43,41,-1,39,41,40,-1,24,33,34,-1,34,27,24,-1,27,34,35,-1,35,26,27,-1,26,35,36,-1,36,6,26,-1,6,36,37,-1,37,30,6,-1,30,37,38,-1,38,29,30,-1,29,38,32,-1,32,1,29,-1,1,32,33,-1,33,24,1,-1,15,41,42,-1,42,8,15,-1,8,42,43,-1,43,2,8,-1,2,43,44,-1,44,28,2,-1,28,44,45,-1,45,31,28,-1,31,45,39,-1,39,5,31,-1,5,39,40,-1,40,16,5,-1,16,40,41,-1,41,15,16,-1]
Coordinate1099 = x3d.Coordinate()

IndexedFaceSet1098.coord = Coordinate1099
TextureCoordinate1100 = x3d.TextureCoordinate()

IndexedFaceSet1098.texCoord = TextureCoordinate1100

Shape1094.geometry = IndexedFaceSet1098

Transform1093.children.append(Shape1094)

HAnimSegment1092.children.append(Transform1093)

HAnimJoint1091.children.append(HAnimSegment1092)
HAnimJoint1101 = x3d.HAnimJoint()
HAnimJoint1101.name = "l_carpal_proximal_interphalangeal_3"
HAnimJoint1101.DEF = "hanim_l_carpal_proximal_interphalangeal_3"
HAnimJoint1101.center = [0.18171,0.7479989721000001,-0.003537]
HAnimJoint1101.ulimit = [0,0,0]
HAnimJoint1101.llimit = [0,0,0]
HAnimSegment1102 = x3d.HAnimSegment()
HAnimSegment1102.name = "l_carpal_middle_phalanx_3"
HAnimSegment1102.DEF = "hanim_l_carpal_middle_phalanx_3"
Transform1103 = x3d.Transform()
Transform1103.translation = [0.18171,0.7479989721000001,-0.003537]
Shape1104 = x3d.Shape()
Appearance1105 = x3d.Appearance()
Material1106 = x3d.Material()
Material1106.diffuseColor = [0.588,0.588,0.588]

Appearance1105.material = Material1106
ImageTexture1107 = x3d.ImageTexture()
ImageTexture1107.USE = "JinLOA4TextureAtlas"

Appearance1105.texture = ImageTexture1107

Shape1104.appearance = Appearance1105
IndexedFaceSet1108 = x3d.IndexedFaceSet()
IndexedFaceSet1108.coordIndex = [1,15,14,-1,14,7,1,-1,8,14,3,-1,1,7,5,-1,5,18,1,-1,3,2,21,-1,21,4,3,-1,6,8,3,-1,3,4,6,-1,6,4,13,-1,0,18,5,-1,5,13,0,-1,13,4,21,-1,21,0,13,-1,2,3,14,-1,14,15,2,-1,8,6,12,-1,12,11,8,-1,7,10,9,-1,9,5,7,-1,10,11,12,-1,12,9,10,-1,8,11,10,-1,10,14,8,-1,13,9,12,-1,12,6,13,-1,9,13,5,-1,7,14,10,-1,15,17,16,-1,16,2,15,-1,18,20,19,-1,19,1,18,-1,2,16,22,-1,22,21,2,-1,0,23,20,-1,20,18,0,-1,21,22,23,-1,23,0,21,-1,1,19,17,-1,17,15,1,-1,19,20,23,-1,23,17,19,-1,16,17,23,-1,23,22,16,-1]
IndexedFaceSet1108.creaseAngle = 3.14159
IndexedFaceSet1108.texCoordIndex = [3,25,24,-1,24,0,3,-1,4,1,5,-1,3,0,7,-1,7,6,3,-1,5,10,9,-1,9,8,5,-1,11,4,5,-1,5,8,11,-1,11,8,12,-1,27,6,7,-1,7,26,27,-1,12,8,9,-1,9,13,12,-1,10,5,1,-1,1,2,10,-1,4,11,15,-1,15,14,4,-1,0,28,29,-1,29,7,0,-1,16,14,15,-1,15,17,16,-1,4,14,16,-1,16,1,4,-1,12,17,15,-1,15,11,12,-1,29,26,7,-1,0,24,28,-1,2,19,18,-1,18,10,2,-1,6,21,20,-1,20,3,6,-1,10,18,22,-1,22,9,10,-1,27,31,21,-1,21,6,27,-1,9,22,23,-1,23,13,9,-1,3,20,30,-1,30,25,3,-1,20,21,31,-1,31,30,20,-1,18,19,23,-1,23,22,18,-1]
Coordinate1109 = x3d.Coordinate()

IndexedFaceSet1108.coord = Coordinate1109
TextureCoordinate1110 = x3d.TextureCoordinate()

IndexedFaceSet1108.texCoord = TextureCoordinate1110

Shape1104.geometry = IndexedFaceSet1108

Transform1103.children.append(Shape1104)

HAnimSegment1102.children.append(Transform1103)

HAnimJoint1101.children.append(HAnimSegment1102)
HAnimJoint1111 = x3d.HAnimJoint()
HAnimJoint1111.name = "l_carpal_distal_interphalangeal_3"
HAnimJoint1111.DEF = "hanim_l_carpal_distal_interphalangeal_3"
HAnimJoint1111.center = [0.18067499999999997,0.713403,-0.0037597499999999996]
HAnimJoint1111.ulimit = [0,0,0]
HAnimJoint1111.llimit = [0,0,0]
HAnimSegment1112 = x3d.HAnimSegment()
HAnimSegment1112.name = "l_carpal_distal_phalanx_3"
HAnimSegment1112.DEF = "hanim_l_carpal_distal_phalanx_3"
Transform1113 = x3d.Transform()
Transform1113.translation = [0.18067499999999997,0.713403,-0.0037597499999999996]
Shape1114 = x3d.Shape()
Appearance1115 = x3d.Appearance()
Material1116 = x3d.Material()
Material1116.diffuseColor = [0.588,0.588,0.588]

Appearance1115.material = Material1116
ImageTexture1117 = x3d.ImageTexture()
ImageTexture1117.USE = "JinLOA4TextureAtlas"

Appearance1115.texture = ImageTexture1117

Shape1114.appearance = Appearance1115
IndexedFaceSet1118 = x3d.IndexedFaceSet()
IndexedFaceSet1118.coordIndex = [0,25,31,-1,24,1,32,-1,1,0,2,-1,2,3,1,-1,31,23,4,-1,4,5,31,-1,0,31,5,-1,5,2,0,-1,23,29,6,-1,6,4,23,-1,32,1,3,-1,3,7,32,-1,29,32,7,-1,7,6,29,-1,2,8,17,-1,17,14,2,-1,5,4,10,-1,10,11,5,-1,2,5,11,-1,11,8,2,-1,10,12,18,-1,18,21,10,-1,7,3,9,-1,9,13,7,-1,6,7,13,-1,13,12,6,-1,8,11,19,-1,19,17,8,-1,19,11,10,-1,10,21,19,-1,25,0,1,-1,1,24,25,-1,14,16,22,-1,22,20,14,-1,15,18,22,-1,22,16,15,-1,3,14,20,-1,20,9,3,-1,14,3,2,-1,4,6,12,-1,12,10,4,-1,21,18,15,-1,14,17,19,-1,19,16,14,-1,19,21,15,-1,15,16,19,-1,9,20,22,-1,22,13,9,-1,22,18,12,-1,12,13,22,-1,25,24,27,-1,27,26,25,-1,23,28,30,-1,30,29,23,-1,28,26,27,-1,27,30,28,-1,25,26,28,-1,28,31,25,-1,32,30,27,-1,27,24,32,-1,30,32,29,-1,23,31,28,-1]
IndexedFaceSet1118.creaseAngle = 3.14159
IndexedFaceSet1118.texCoordIndex = [0,2,1,-1,3,5,4,-1,5,0,7,-1,7,6,5,-1,33,10,9,-1,9,35,33,-1,0,1,8,-1,8,7,0,-1,10,12,11,-1,11,9,10,-1,4,5,6,-1,6,13,4,-1,12,34,36,-1,36,11,12,-1,7,16,15,-1,15,14,7,-1,35,9,18,-1,18,37,35,-1,7,8,17,-1,17,16,7,-1,18,19,21,-1,21,20,18,-1,13,6,23,-1,23,22,13,-1,11,36,38,-1,38,19,11,-1,16,17,24,-1,24,15,16,-1,39,37,18,-1,18,20,39,-1,2,0,5,-1,5,3,2,-1,14,25,27,-1,27,26,14,-1,28,21,41,-1,41,40,28,-1,6,14,26,-1,26,23,6,-1,14,6,7,-1,9,11,19,-1,19,18,9,-1,20,21,28,-1,14,15,24,-1,24,25,14,-1,39,20,28,-1,28,40,39,-1,23,26,27,-1,27,22,23,-1,41,21,19,-1,19,38,41,-1,2,3,30,-1,30,29,2,-1,10,42,43,-1,43,12,10,-1,31,29,30,-1,30,32,31,-1,2,29,31,-1,31,1,2,-1,4,32,30,-1,30,3,4,-1,43,34,12,-1,10,33,42,-1]
Coordinate1119 = x3d.Coordinate()

IndexedFaceSet1118.coord = Coordinate1119
TextureCoordinate1120 = x3d.TextureCoordinate()

IndexedFaceSet1118.texCoord = TextureCoordinate1120

Shape1114.geometry = IndexedFaceSet1118

Transform1113.children.append(Shape1114)

HAnimSegment1112.children.append(Transform1113)

HAnimJoint1111.children.append(HAnimSegment1112)

HAnimJoint1101.children.append(HAnimJoint1111)

HAnimJoint1091.children.append(HAnimJoint1101)

HAnimJoint1081.children.append(HAnimJoint1091)

HAnimJoint1071.children.append(HAnimJoint1081)

HAnimJoint971.children.append(HAnimJoint1071)
HAnimJoint1121 = x3d.HAnimJoint()
HAnimJoint1121.name = "l_midcarpal_4_5"
HAnimJoint1121.DEF = "hanim_l_midcarpal_4_5"
HAnimJoint1121.center = [0.18108,0.8752230279,-0.025739999999999996]
HAnimJoint1121.ulimit = [0,0,0]
HAnimJoint1121.llimit = [0,0,0]
HAnimSegment1122 = x3d.HAnimSegment()
HAnimSegment1122.name = "l_hamate"
HAnimSegment1122.DEF = "hanim_l_hamate"
Transform1123 = x3d.Transform()
Transform1123.translation = [0.18108,0.8752230279,-0.025739999999999996]
Shape1124 = x3d.Shape()
Appearance1125 = x3d.Appearance()
Material1126 = x3d.Material()
Material1126.diffuseColor = [0.588,0.588,0.588]

Appearance1125.material = Material1126
ImageTexture1127 = x3d.ImageTexture()
ImageTexture1127.USE = "JinLOA4TextureAtlas"

Appearance1125.texture = ImageTexture1127

Shape1124.appearance = Appearance1125
IndexedFaceSet1128 = x3d.IndexedFaceSet()
IndexedFaceSet1128.coordIndex = [6,7,4,-1,4,3,6,-1,7,8,9,-1,9,0,7,-1,11,5,1,-1,1,2,11,-1,5,6,3,-1,3,1,5,-1,2,10,11,-1,4,7,0,-1,17,16,15,-1,17,15,14,-1,13,17,14,-1,20,22,21,-1,27,26,25,-1,25,24,27,-1,17,13,12,-1,12,18,17,-1,23,22,20,-1,20,19,23,-1,9,12,13,-1,13,0,9,-1,0,13,14,-1,14,4,0,-1,4,14,15,-1,15,3,4,-1,3,15,16,-1,16,1,3,-1,1,16,17,-1,17,2,1,-1,2,17,18,-1,18,10,2,-1,10,18,12,-1,12,9,10,-1,11,19,20,-1,20,5,11,-1,5,20,21,-1,21,6,5,-1,6,21,22,-1,22,7,6,-1,7,22,23,-1,23,8,7,-1,8,23,19,-1,19,11,8,-1,8,24,25,-1,25,9,8,-1,9,25,26,-1,26,10,9,-1,10,26,27,-1,27,11,10,-1,11,27,24,-1,24,8,11,-1]
IndexedFaceSet1128.creaseAngle = 3.14159
IndexedFaceSet1128.texCoordIndex = [0,3,2,-1,2,1,0,-1,3,6,5,-1,5,4,3,-1,7,10,9,-1,9,8,7,-1,10,28,29,-1,29,9,10,-1,8,11,7,-1,2,3,4,-1,16,15,14,-1,16,14,13,-1,12,16,13,-1,35,37,36,-1,23,22,39,-1,39,38,23,-1,16,12,25,-1,25,24,16,-1,26,19,17,-1,17,27,26,-1,5,25,12,-1,12,4,5,-1,4,12,13,-1,13,2,4,-1,2,13,14,-1,14,1,2,-1,29,32,33,-1,33,9,29,-1,9,33,34,-1,34,8,9,-1,8,34,40,-1,40,11,8,-1,11,40,41,-1,41,30,11,-1,7,43,35,-1,35,10,7,-1,10,35,36,-1,36,28,10,-1,0,18,19,-1,19,3,0,-1,3,19,26,-1,26,6,3,-1,31,42,43,-1,43,7,31,-1,6,20,21,-1,21,5,6,-1,30,39,22,-1,22,11,30,-1,11,22,23,-1,23,7,11,-1,7,23,38,-1,38,31,7,-1]
Coordinate1129 = x3d.Coordinate()

IndexedFaceSet1128.coord = Coordinate1129
TextureCoordinate1130 = x3d.TextureCoordinate()

IndexedFaceSet1128.texCoord = TextureCoordinate1130

Shape1124.geometry = IndexedFaceSet1128

Transform1123.children.append(Shape1124)

HAnimSegment1122.children.append(Transform1123)

HAnimJoint1121.children.append(HAnimSegment1122)
HAnimJoint1131 = x3d.HAnimJoint()
HAnimJoint1131.name = "l_carpometacarpal_4"
HAnimJoint1131.DEF = "hanim_l_carpometacarpal_4"
HAnimJoint1131.center = [0.18108,0.85095,-0.01991925]
HAnimJoint1131.ulimit = [0,0,0]
HAnimJoint1131.llimit = [0,0,0]
HAnimSegment1132 = x3d.HAnimSegment()
HAnimSegment1132.name = "l_metacarpal_4"
HAnimSegment1132.DEF = "hanim_l_metacarpal_4"
Transform1133 = x3d.Transform()
Transform1133.translation = [0.18108,0.85095,-0.01991925]
Shape1134 = x3d.Shape()
Appearance1135 = x3d.Appearance()
Material1136 = x3d.Material()
Material1136.diffuseColor = [0.588,0.588,0.588]

Appearance1135.material = Material1136
ImageTexture1137 = x3d.ImageTexture()
ImageTexture1137.USE = "JinLOA4TextureAtlas"

Appearance1135.texture = ImageTexture1137

Shape1134.appearance = Appearance1135
IndexedFaceSet1138 = x3d.IndexedFaceSet()
IndexedFaceSet1138.coordIndex = [9,2,0,-1,0,6,9,-1,6,0,4,-1,4,10,6,-1,7,1,3,-1,3,8,7,-1,7,11,5,-1,5,1,7,-1,12,15,14,-1,14,13,12,-1,34,33,32,-1,32,35,34,-1,17,16,21,-1,21,20,17,-1,29,24,31,-1,31,30,29,-1,17,20,19,-1,19,18,17,-1,24,29,28,-1,28,25,24,-1,9,12,13,-1,13,2,9,-1,16,23,22,-1,22,21,16,-1,3,14,15,-1,15,8,3,-1,28,27,26,-1,26,25,28,-1,2,16,17,-1,17,0,2,-1,0,17,18,-1,18,4,0,-1,4,18,19,-1,19,5,4,-1,5,19,20,-1,20,1,5,-1,1,20,21,-1,21,3,1,-1,3,21,22,-1,22,14,3,-1,14,22,23,-1,23,13,14,-1,13,23,16,-1,16,2,13,-1,6,24,25,-1,25,9,6,-1,9,25,26,-1,26,12,9,-1,12,26,27,-1,27,15,12,-1,15,27,28,-1,28,8,15,-1,8,28,29,-1,29,7,8,-1,7,29,30,-1,30,11,7,-1,11,30,31,-1,31,10,11,-1,10,31,24,-1,24,6,10,-1,4,32,33,-1,33,10,4,-1,10,33,34,-1,34,11,10,-1,11,34,35,-1,35,5,11,-1,5,35,32,-1,32,4,5,-1]
IndexedFaceSet1138.creaseAngle = 3.14159
IndexedFaceSet1138.texCoordIndex = [0,3,2,-1,2,1,0,-1,1,2,5,-1,5,4,1,-1,38,9,40,-1,40,39,38,-1,38,42,41,-1,41,9,38,-1,12,15,14,-1,14,13,12,-1,16,45,44,-1,44,43,16,-1,20,23,22,-1,22,21,20,-1,48,51,50,-1,50,49,48,-1,20,21,29,-1,29,28,20,-1,27,24,31,-1,31,30,27,-1,0,12,13,-1,13,3,0,-1,23,33,32,-1,32,22,23,-1,8,14,15,-1,15,7,8,-1,31,35,34,-1,34,30,31,-1,3,23,20,-1,20,2,3,-1,2,20,28,-1,28,5,2,-1,37,52,53,-1,53,41,37,-1,41,53,46,-1,46,9,41,-1,9,46,47,-1,47,40,9,-1,8,22,32,-1,32,14,8,-1,14,32,33,-1,33,13,14,-1,13,33,23,-1,23,3,13,-1,1,27,30,-1,30,0,1,-1,0,30,34,-1,34,12,0,-1,12,34,35,-1,35,15,12,-1,15,35,31,-1,31,7,15,-1,7,31,24,-1,24,6,7,-1,38,48,49,-1,49,42,38,-1,11,25,26,-1,26,4,11,-1,4,26,27,-1,27,1,4,-1,5,18,19,-1,19,4,5,-1,36,45,16,-1,16,42,36,-1,42,16,43,-1,43,41,42,-1,10,17,18,-1,18,5,10,-1]
Coordinate1139 = x3d.Coordinate()

IndexedFaceSet1138.coord = Coordinate1139
TextureCoordinate1140 = x3d.TextureCoordinate()

IndexedFaceSet1138.texCoord = TextureCoordinate1140

Shape1134.geometry = IndexedFaceSet1138

Transform1133.children.append(Shape1134)

HAnimSegment1132.children.append(Transform1133)

HAnimJoint1131.children.append(HAnimSegment1132)
HAnimJoint1141 = x3d.HAnimJoint()
HAnimJoint1141.name = "l_metacarpophalangeal_4"
HAnimJoint1141.DEF = "hanim_l_metacarpophalangeal_4"
HAnimJoint1141.center = [0.18369,0.786222,-0.021440249999999998]
HAnimJoint1141.ulimit = [0,0,0]
HAnimJoint1141.llimit = [0,0,0]
HAnimSegment1142 = x3d.HAnimSegment()
HAnimSegment1142.name = "l_carpal_proximal_phalanx_4"
HAnimSegment1142.DEF = "hanim_l_carpal_proximal_phalanx_4"
Transform1143 = x3d.Transform()
Transform1143.translation = [0.18369,0.786222,-0.021440249999999998]
Shape1144 = x3d.Shape()
Appearance1145 = x3d.Appearance()
Material1146 = x3d.Material()
Material1146.diffuseColor = [0.588,0.588,0.588]

Appearance1145.material = Material1146
ImageTexture1147 = x3d.ImageTexture()
ImageTexture1147.USE = "JinLOA4TextureAtlas"

Appearance1145.texture = ImageTexture1147

Shape1144.appearance = Appearance1145
IndexedFaceSet1148 = x3d.IndexedFaceSet()
IndexedFaceSet1148.coordIndex = [3,4,22,-1,22,23,3,-1,5,6,31,-1,31,32,5,-1,4,44,22,-1,0,14,6,-1,6,5,0,-1,4,3,17,-1,17,1,4,-1,0,5,7,-1,7,2,0,-1,7,4,1,-1,1,2,7,-1,7,5,45,-1,45,43,7,-1,4,7,43,-1,43,44,4,-1,45,5,32,-1,15,13,11,-1,11,17,15,-1,0,8,10,-1,10,14,0,-1,17,11,9,-1,9,1,17,-1,2,12,8,-1,8,0,2,-1,1,9,12,-1,12,2,1,-1,14,10,13,-1,13,15,14,-1,10,8,12,-1,12,13,10,-1,11,13,12,-1,12,9,11,-1,3,23,40,-1,14,15,16,-1,16,6,14,-1,16,15,17,-1,17,3,16,-1,16,41,42,-1,42,6,16,-1,3,40,41,-1,41,16,3,-1,42,31,6,-1,21,20,19,-1,19,18,21,-1,22,18,19,-1,19,23,22,-1,24,30,29,-1,24,29,28,-1,28,27,26,-1,28,26,25,-1,24,28,25,-1,31,20,21,-1,21,32,31,-1,33,39,38,-1,33,38,37,-1,37,36,35,-1,33,37,35,-1,33,35,34,-1,40,25,26,-1,26,41,40,-1,41,26,27,-1,27,42,41,-1,42,27,28,-1,28,31,42,-1,31,28,29,-1,29,20,31,-1,20,29,30,-1,30,19,20,-1,19,30,24,-1,24,23,19,-1,23,24,25,-1,25,40,23,-1,43,35,36,-1,36,44,43,-1,44,36,37,-1,37,22,44,-1,22,37,38,-1,38,18,22,-1,18,38,39,-1,39,21,18,-1,21,39,33,-1,33,32,21,-1,32,33,34,-1,34,45,32,-1,45,34,35,-1,35,43,45,-1]
IndexedFaceSet1148.creaseAngle = 3.14159
IndexedFaceSet1148.texCoordIndex = [0,3,2,-1,2,1,0,-1,4,7,47,-1,47,46,4,-1,3,8,2,-1,9,10,7,-1,7,4,9,-1,3,0,12,-1,12,11,3,-1,9,4,49,-1,49,48,9,-1,14,3,11,-1,11,13,14,-1,49,4,51,-1,51,50,49,-1,3,14,15,-1,15,8,3,-1,51,4,46,-1,17,19,18,-1,18,12,17,-1,9,21,20,-1,20,10,9,-1,12,18,22,-1,22,11,12,-1,48,54,21,-1,21,9,48,-1,11,22,23,-1,23,13,11,-1,10,20,53,-1,53,52,10,-1,20,21,54,-1,54,53,20,-1,18,19,23,-1,23,22,18,-1,0,1,24,-1,10,52,55,-1,55,7,10,-1,25,17,12,-1,12,0,25,-1,55,57,56,-1,56,7,55,-1,0,24,27,-1,27,25,0,-1,56,47,7,-1,31,30,29,-1,29,28,31,-1,2,28,29,-1,29,1,2,-1,32,38,37,-1,32,37,36,-1,36,35,34,-1,36,34,33,-1,32,36,33,-1,6,30,31,-1,31,5,6,-1,39,45,44,-1,39,44,43,-1,43,42,41,-1,39,43,41,-1,39,41,40,-1,24,33,34,-1,34,27,24,-1,27,34,35,-1,35,26,27,-1,26,35,36,-1,36,6,26,-1,6,36,37,-1,37,30,6,-1,30,37,38,-1,38,29,30,-1,29,38,32,-1,32,1,29,-1,1,32,33,-1,33,24,1,-1,15,41,42,-1,42,8,15,-1,8,42,43,-1,43,2,8,-1,2,43,44,-1,44,28,2,-1,28,44,45,-1,45,31,28,-1,31,45,39,-1,39,5,31,-1,5,39,40,-1,40,16,5,-1,16,40,41,-1,41,15,16,-1]
Coordinate1149 = x3d.Coordinate()

IndexedFaceSet1148.coord = Coordinate1149
TextureCoordinate1150 = x3d.TextureCoordinate()

IndexedFaceSet1148.texCoord = TextureCoordinate1150

Shape1144.geometry = IndexedFaceSet1148

Transform1143.children.append(Shape1144)

HAnimSegment1142.children.append(Transform1143)

HAnimJoint1141.children.append(HAnimSegment1142)
HAnimJoint1151 = x3d.HAnimJoint()
HAnimJoint1151.name = "l_carpal_proximal_interphalangeal_4"
HAnimJoint1151.DEF = "hanim_l_carpal_proximal_interphalangeal_4"
HAnimJoint1151.center = [0.18171,0.7521839721,-0.020645999999999998]
HAnimJoint1151.ulimit = [0,0,0]
HAnimJoint1151.llimit = [0,0,0]
HAnimSegment1152 = x3d.HAnimSegment()
HAnimSegment1152.name = "l_carpal_middle_phalanx_4"
HAnimSegment1152.DEF = "hanim_l_carpal_middle_phalanx_4"
Transform1153 = x3d.Transform()
Transform1153.translation = [0.18171,0.7521839721,-0.020645999999999998]
Shape1154 = x3d.Shape()
Appearance1155 = x3d.Appearance()
Material1156 = x3d.Material()
Material1156.diffuseColor = [0.588,0.588,0.588]

Appearance1155.material = Material1156
ImageTexture1157 = x3d.ImageTexture()
ImageTexture1157.USE = "JinLOA4TextureAtlas"

Appearance1155.texture = ImageTexture1157

Shape1154.appearance = Appearance1155
IndexedFaceSet1158 = x3d.IndexedFaceSet()
IndexedFaceSet1158.coordIndex = [1,15,14,-1,14,7,1,-1,8,14,3,-1,1,7,5,-1,5,18,1,-1,3,2,21,-1,21,4,3,-1,6,8,3,-1,3,4,6,-1,6,4,13,-1,0,18,5,-1,5,13,0,-1,13,4,21,-1,21,0,13,-1,2,3,14,-1,14,15,2,-1,8,6,12,-1,12,11,8,-1,7,10,9,-1,9,5,7,-1,10,11,12,-1,12,9,10,-1,8,11,10,-1,10,14,8,-1,13,9,12,-1,12,6,13,-1,9,13,5,-1,7,14,10,-1,15,17,16,-1,16,2,15,-1,18,20,19,-1,19,1,18,-1,2,16,22,-1,22,21,2,-1,0,23,20,-1,20,18,0,-1,21,22,23,-1,23,0,21,-1,1,19,17,-1,17,15,1,-1,19,20,23,-1,23,17,19,-1,16,17,23,-1,23,22,16,-1]
IndexedFaceSet1158.creaseAngle = 3.14159
IndexedFaceSet1158.texCoordIndex = [3,25,24,-1,24,0,3,-1,4,1,5,-1,3,0,7,-1,7,6,3,-1,5,10,9,-1,9,8,5,-1,11,4,5,-1,5,8,11,-1,11,8,12,-1,27,6,7,-1,7,26,27,-1,12,8,9,-1,9,13,12,-1,10,5,1,-1,1,2,10,-1,4,11,15,-1,15,14,4,-1,0,28,29,-1,29,7,0,-1,16,14,15,-1,15,17,16,-1,4,14,16,-1,16,1,4,-1,12,17,15,-1,15,11,12,-1,29,26,7,-1,0,24,28,-1,2,19,18,-1,18,10,2,-1,6,21,20,-1,20,3,6,-1,10,18,22,-1,22,9,10,-1,27,31,21,-1,21,6,27,-1,9,22,23,-1,23,13,9,-1,3,20,30,-1,30,25,3,-1,20,21,31,-1,31,30,20,-1,18,19,23,-1,23,22,18,-1]
Coordinate1159 = x3d.Coordinate()

IndexedFaceSet1158.coord = Coordinate1159
TextureCoordinate1160 = x3d.TextureCoordinate()

IndexedFaceSet1158.texCoord = TextureCoordinate1160

Shape1154.geometry = IndexedFaceSet1158

Transform1153.children.append(Shape1154)

HAnimSegment1152.children.append(Transform1153)

HAnimJoint1151.children.append(HAnimSegment1152)
HAnimJoint1161 = x3d.HAnimJoint()
HAnimJoint1161.name = "l_carpal_distal_interphalangeal_4"
HAnimJoint1161.DEF = "hanim_l_carpal_distal_interphalangeal_4"
HAnimJoint1161.center = [0.18067499999999997,0.7200989721000001,-0.0197775]
HAnimJoint1161.ulimit = [0,0,0]
HAnimJoint1161.llimit = [0,0,0]
HAnimSegment1162 = x3d.HAnimSegment()
HAnimSegment1162.name = "l_carpal_distal_phalanx_4"
HAnimSegment1162.DEF = "hanim_l_carpal_distal_phalanx_4"
Transform1163 = x3d.Transform()
Transform1163.translation = [0.18067499999999997,0.7200989721000001,-0.0197775]
Shape1164 = x3d.Shape()
Appearance1165 = x3d.Appearance()
Material1166 = x3d.Material()
Material1166.diffuseColor = [0.588,0.588,0.588]

Appearance1165.material = Material1166
ImageTexture1167 = x3d.ImageTexture()
ImageTexture1167.USE = "JinLOA4TextureAtlas"

Appearance1165.texture = ImageTexture1167

Shape1164.appearance = Appearance1165
IndexedFaceSet1168 = x3d.IndexedFaceSet()
IndexedFaceSet1168.coordIndex = [0,25,31,-1,24,1,32,-1,1,0,2,-1,2,3,1,-1,31,23,4,-1,4,5,31,-1,0,31,5,-1,5,2,0,-1,23,29,6,-1,6,4,23,-1,32,1,3,-1,3,7,32,-1,29,32,7,-1,7,6,29,-1,2,8,17,-1,17,14,2,-1,5,4,10,-1,10,11,5,-1,2,5,11,-1,11,8,2,-1,10,12,18,-1,18,21,10,-1,7,3,9,-1,9,13,7,-1,6,7,13,-1,13,12,6,-1,8,11,19,-1,19,17,8,-1,19,11,10,-1,10,21,19,-1,25,0,1,-1,1,24,25,-1,14,16,22,-1,22,20,14,-1,15,18,22,-1,22,16,15,-1,3,14,20,-1,20,9,3,-1,14,3,2,-1,4,6,12,-1,12,10,4,-1,21,18,15,-1,14,17,19,-1,19,16,14,-1,19,21,15,-1,15,16,19,-1,9,20,22,-1,22,13,9,-1,22,18,12,-1,12,13,22,-1,25,24,27,-1,27,26,25,-1,23,28,30,-1,30,29,23,-1,28,26,27,-1,27,30,28,-1,25,26,28,-1,28,31,25,-1,32,30,27,-1,27,24,32,-1,30,32,29,-1,23,31,28,-1]
IndexedFaceSet1168.creaseAngle = 3.14159
IndexedFaceSet1168.texCoordIndex = [0,2,1,-1,3,5,4,-1,5,0,7,-1,7,6,5,-1,33,10,9,-1,9,35,33,-1,0,1,8,-1,8,7,0,-1,10,12,11,-1,11,9,10,-1,4,5,6,-1,6,13,4,-1,12,34,36,-1,36,11,12,-1,7,16,15,-1,15,14,7,-1,35,9,18,-1,18,37,35,-1,7,8,17,-1,17,16,7,-1,18,19,21,-1,21,20,18,-1,13,6,23,-1,23,22,13,-1,11,36,38,-1,38,19,11,-1,16,17,24,-1,24,15,16,-1,39,37,18,-1,18,20,39,-1,2,0,5,-1,5,3,2,-1,14,25,27,-1,27,26,14,-1,28,21,41,-1,41,40,28,-1,6,14,26,-1,26,23,6,-1,14,6,7,-1,9,11,19,-1,19,18,9,-1,20,21,28,-1,14,15,24,-1,24,25,14,-1,39,20,28,-1,28,40,39,-1,23,26,27,-1,27,22,23,-1,41,21,19,-1,19,38,41,-1,2,3,30,-1,30,29,2,-1,10,42,43,-1,43,12,10,-1,31,29,30,-1,30,32,31,-1,2,29,31,-1,31,1,2,-1,4,32,30,-1,30,3,4,-1,43,34,12,-1,10,33,42,-1]
Coordinate1169 = x3d.Coordinate()

IndexedFaceSet1168.coord = Coordinate1169
TextureCoordinate1170 = x3d.TextureCoordinate()

IndexedFaceSet1168.texCoord = TextureCoordinate1170

Shape1164.geometry = IndexedFaceSet1168

Transform1163.children.append(Shape1164)

HAnimSegment1162.children.append(Transform1163)

HAnimJoint1161.children.append(HAnimSegment1162)

HAnimJoint1151.children.append(HAnimJoint1161)

HAnimJoint1141.children.append(HAnimJoint1151)

HAnimJoint1131.children.append(HAnimJoint1141)

HAnimJoint1121.children.append(HAnimJoint1131)

HAnimJoint971.children.append(HAnimJoint1121)
HAnimJoint1171 = x3d.HAnimJoint()
HAnimJoint1171.name = "l_carpometacarpal_5"
HAnimJoint1171.DEF = "hanim_l_carpometacarpal_5"
HAnimJoint1171.center = [0.1816425,0.853461,-0.0327825]
HAnimJoint1171.ulimit = [0,0,0]
HAnimJoint1171.llimit = [0,0,0]
HAnimSegment1172 = x3d.HAnimSegment()
HAnimSegment1172.name = "l_metacarpal_5"
HAnimSegment1172.DEF = "hanim_l_metacarpal_5"
Transform1173 = x3d.Transform()
Transform1173.translation = [0.1816425,0.853461,-0.0327825]
Shape1174 = x3d.Shape()
Appearance1175 = x3d.Appearance()
Material1176 = x3d.Material()
Material1176.diffuseColor = [0.588,0.588,0.588]

Appearance1175.material = Material1176
ImageTexture1177 = x3d.ImageTexture()
ImageTexture1177.USE = "JinLOA4TextureAtlas"

Appearance1175.texture = ImageTexture1177

Shape1174.appearance = Appearance1175
IndexedFaceSet1178 = x3d.IndexedFaceSet()
IndexedFaceSet1178.coordIndex = [11,3,0,-1,0,9,11,-1,5,4,1,-1,1,2,5,-1,3,5,2,-1,2,0,3,-1,9,0,8,-1,8,13,9,-1,2,1,6,-1,6,7,2,-1,6,1,10,-1,10,14,6,-1,1,4,12,-1,12,10,1,-1,0,2,7,-1,7,8,0,-1,25,20,27,-1,27,26,25,-1,18,17,16,-1,19,18,16,-1,15,19,16,-1,32,31,30,-1,32,30,29,-1,28,32,29,-1,11,15,16,-1,16,3,11,-1,3,16,17,-1,17,5,3,-1,5,17,18,-1,18,4,5,-1,4,18,19,-1,19,12,4,-1,24,23,22,-1,22,21,24,-1,20,25,24,-1,24,21,20,-1,9,20,21,-1,21,11,9,-1,11,21,22,-1,22,15,11,-1,15,22,23,-1,23,19,15,-1,19,23,24,-1,24,12,19,-1,12,24,25,-1,25,10,12,-1,10,25,26,-1,26,14,10,-1,14,26,27,-1,27,13,14,-1,13,27,20,-1,20,9,13,-1,14,28,29,-1,29,6,14,-1,6,29,30,-1,30,7,6,-1,7,30,31,-1,31,8,7,-1,8,31,32,-1,32,13,8,-1,13,32,28,-1,28,14,13,-1]
IndexedFaceSet1178.creaseAngle = 3.14159
IndexedFaceSet1178.texCoordIndex = [0,3,2,-1,2,1,0,-1,33,35,6,-1,6,34,33,-1,3,4,5,-1,5,2,3,-1,1,2,9,-1,9,8,1,-1,34,6,11,-1,11,37,34,-1,11,6,38,-1,38,12,11,-1,6,35,39,-1,39,38,6,-1,2,5,10,-1,10,9,2,-1,40,42,41,-1,41,16,40,-1,22,21,20,-1,23,22,20,-1,19,23,20,-1,45,44,43,-1,45,43,25,-1,24,45,25,-1,0,19,20,-1,20,3,0,-1,3,20,21,-1,21,4,3,-1,4,21,22,-1,22,7,4,-1,7,22,23,-1,23,14,7,-1,29,32,31,-1,31,30,29,-1,18,15,29,-1,29,30,18,-1,1,18,30,-1,30,0,1,-1,0,30,31,-1,31,19,0,-1,19,31,32,-1,32,23,19,-1,23,32,29,-1,29,14,23,-1,14,29,15,-1,15,13,14,-1,38,40,16,-1,16,12,38,-1,12,16,41,-1,41,36,12,-1,8,17,18,-1,18,1,8,-1,12,24,25,-1,25,11,12,-1,11,25,43,-1,43,37,11,-1,10,26,27,-1,27,9,10,-1,9,27,28,-1,28,8,9,-1,36,45,24,-1,24,12,36,-1]
Coordinate1179 = x3d.Coordinate()

IndexedFaceSet1178.coord = Coordinate1179
TextureCoordinate1180 = x3d.TextureCoordinate()

IndexedFaceSet1178.texCoord = TextureCoordinate1180

Shape1174.geometry = IndexedFaceSet1178

Transform1173.children.append(Shape1174)

HAnimSegment1172.children.append(Transform1173)

HAnimJoint1171.children.append(HAnimSegment1172)
HAnimJoint1181 = x3d.HAnimJoint()
HAnimJoint1181.name = "l_metacarpophalangeal_5"
HAnimJoint1181.DEF = "hanim_l_metacarpophalangeal_5"
HAnimJoint1181.center = [0.18333,0.7912440279,-0.0370575]
HAnimJoint1181.ulimit = [0,0,0]
HAnimJoint1181.llimit = [0,0,0]
HAnimSegment1182 = x3d.HAnimSegment()
HAnimSegment1182.name = "l_carpal_proximal_phalanx_5"
HAnimSegment1182.DEF = "hanim_l_carpal_proximal_phalanx_5"
Transform1183 = x3d.Transform()
Transform1183.translation = [0.18333,0.7912440279,-0.0370575]
Shape1184 = x3d.Shape()
Appearance1185 = x3d.Appearance()
Material1186 = x3d.Material()
Material1186.diffuseColor = [0.588,0.588,0.588]

Appearance1185.material = Material1186
ImageTexture1187 = x3d.ImageTexture()
ImageTexture1187.USE = "JinLOA4TextureAtlas"

Appearance1185.texture = ImageTexture1187

Shape1184.appearance = Appearance1185
IndexedFaceSet1188 = x3d.IndexedFaceSet()
IndexedFaceSet1188.coordIndex = [10,8,6,-1,6,11,10,-1,0,3,5,-1,5,9,0,-1,11,6,4,-1,4,1,11,-1,2,7,3,-1,3,0,2,-1,1,4,7,-1,7,2,1,-1,9,5,8,-1,8,10,9,-1,5,3,7,-1,7,8,5,-1,6,8,7,-1,7,4,6,-1,17,13,1,-1,1,2,17,-1,14,15,26,-1,26,25,14,-1,0,9,15,-1,15,14,0,-1,13,12,11,-1,11,1,13,-1,2,0,14,-1,14,17,2,-1,12,34,36,-1,9,10,16,-1,16,15,9,-1,16,10,11,-1,11,12,16,-1,16,35,37,-1,37,15,16,-1,12,36,35,-1,35,16,12,-1,37,26,15,-1,12,13,23,-1,23,34,12,-1,13,17,24,-1,24,23,13,-1,17,14,25,-1,25,24,17,-1,19,20,21,-1,19,21,22,-1,18,19,22,-1,23,24,20,-1,20,19,23,-1,24,25,21,-1,21,20,24,-1,25,26,22,-1,22,21,25,-1,29,30,31,-1,28,29,31,-1,27,28,31,-1,27,31,32,-1,27,32,33,-1,34,23,19,-1,19,18,34,-1,35,36,30,-1,30,29,35,-1,36,34,31,-1,31,30,36,-1,34,18,32,-1,32,31,34,-1,18,22,33,-1,33,32,18,-1,22,26,27,-1,27,33,22,-1,26,37,28,-1,28,27,26,-1,37,35,29,-1,29,28,37,-1]
IndexedFaceSet1188.creaseAngle = 3.14159
IndexedFaceSet1188.texCoordIndex = [0,3,2,-1,2,1,0,-1,4,7,6,-1,6,5,4,-1,1,2,9,-1,9,8,1,-1,40,41,7,-1,7,4,40,-1,8,9,11,-1,11,10,8,-1,5,6,39,-1,39,38,5,-1,6,7,41,-1,41,39,6,-1,2,3,11,-1,11,9,2,-1,12,13,8,-1,8,10,12,-1,14,17,44,-1,44,43,14,-1,4,5,17,-1,17,14,4,-1,13,18,1,-1,1,8,13,-1,40,4,14,-1,14,42,40,-1,18,20,19,-1,5,38,45,-1,45,17,5,-1,21,0,1,-1,1,18,21,-1,45,47,46,-1,46,17,45,-1,18,19,23,-1,23,21,18,-1,46,44,17,-1,18,13,24,-1,24,20,18,-1,13,12,25,-1,25,24,13,-1,42,14,43,-1,43,48,42,-1,30,29,28,-1,30,28,27,-1,26,30,27,-1,24,25,29,-1,29,30,24,-1,25,15,28,-1,28,29,25,-1,15,16,27,-1,27,28,15,-1,36,35,34,-1,37,36,34,-1,31,37,34,-1,31,34,33,-1,31,33,32,-1,20,24,30,-1,30,26,20,-1,23,19,35,-1,35,36,23,-1,19,20,34,-1,34,35,19,-1,20,26,33,-1,33,34,20,-1,26,27,32,-1,32,33,26,-1,27,16,31,-1,31,32,27,-1,16,22,37,-1,37,31,16,-1,22,23,36,-1,36,37,22,-1]
Coordinate1189 = x3d.Coordinate()

IndexedFaceSet1188.coord = Coordinate1189
TextureCoordinate1190 = x3d.TextureCoordinate()

IndexedFaceSet1188.texCoord = TextureCoordinate1190

Shape1184.geometry = IndexedFaceSet1188

Transform1183.children.append(Shape1184)

HAnimSegment1182.children.append(Transform1183)

HAnimJoint1181.children.append(HAnimSegment1182)
HAnimJoint1191 = x3d.HAnimJoint()
HAnimJoint1191.name = "l_carpal_proximal_interphalangeal_5"
HAnimJoint1191.DEF = "hanim_l_carpal_proximal_interphalangeal_5"
HAnimJoint1191.center = [0.181665,0.7700400000000001,-0.0371475]
HAnimJoint1191.ulimit = [0,0,0]
HAnimJoint1191.llimit = [0,0,0]
HAnimSegment1192 = x3d.HAnimSegment()
HAnimSegment1192.name = "l_carpal_middle_phalanx_5"
HAnimSegment1192.DEF = "hanim_l_carpal_middle_phalanx_5"
Transform1193 = x3d.Transform()
Transform1193.translation = [0.181665,0.7700400000000001,-0.0371475]
Shape1194 = x3d.Shape()
Appearance1195 = x3d.Appearance()
Material1196 = x3d.Material()
Material1196.diffuseColor = [0.588,0.588,0.588]

Appearance1195.material = Material1196
ImageTexture1197 = x3d.ImageTexture()
ImageTexture1197.USE = "JinLOA4TextureAtlas"

Appearance1195.texture = ImageTexture1197

Shape1194.appearance = Appearance1195
IndexedFaceSet1198 = x3d.IndexedFaceSet()
IndexedFaceSet1198.coordIndex = [1,15,14,-1,14,7,1,-1,8,14,3,-1,1,7,5,-1,5,18,1,-1,3,2,21,-1,21,4,3,-1,6,8,3,-1,3,4,6,-1,6,4,13,-1,0,18,5,-1,5,13,0,-1,13,4,21,-1,21,0,13,-1,2,3,14,-1,14,15,2,-1,8,6,12,-1,12,11,8,-1,7,10,9,-1,9,5,7,-1,10,11,12,-1,12,9,10,-1,8,11,10,-1,10,14,8,-1,13,9,12,-1,12,6,13,-1,9,13,5,-1,7,14,10,-1,15,17,16,-1,16,2,15,-1,18,20,19,-1,19,1,18,-1,2,16,22,-1,22,21,2,-1,0,23,20,-1,20,18,0,-1,21,22,23,-1,23,0,21,-1,1,19,17,-1,17,15,1,-1,19,20,23,-1,23,17,19,-1,16,17,23,-1,23,22,16,-1]
IndexedFaceSet1198.creaseAngle = 3.14159
IndexedFaceSet1198.texCoordIndex = [3,25,24,-1,24,0,3,-1,4,1,5,-1,3,0,7,-1,7,6,3,-1,5,10,9,-1,9,8,5,-1,11,4,5,-1,5,8,11,-1,11,8,12,-1,27,6,7,-1,7,26,27,-1,12,8,9,-1,9,13,12,-1,10,5,1,-1,1,2,10,-1,4,11,15,-1,15,14,4,-1,0,28,29,-1,29,7,0,-1,16,14,15,-1,15,17,16,-1,4,14,16,-1,16,1,4,-1,12,17,15,-1,15,11,12,-1,29,26,7,-1,0,24,28,-1,2,19,18,-1,18,10,2,-1,6,21,20,-1,20,3,6,-1,10,18,22,-1,22,9,10,-1,27,31,21,-1,21,6,27,-1,9,22,23,-1,23,13,9,-1,3,20,30,-1,30,25,3,-1,20,21,31,-1,31,30,20,-1,18,19,23,-1,23,22,18,-1]
Coordinate1199 = x3d.Coordinate()

IndexedFaceSet1198.coord = Coordinate1199
TextureCoordinate1200 = x3d.TextureCoordinate()

IndexedFaceSet1198.texCoord = TextureCoordinate1200

Shape1194.geometry = IndexedFaceSet1198

Transform1193.children.append(Shape1194)

HAnimSegment1192.children.append(Transform1193)

HAnimJoint1191.children.append(HAnimSegment1192)
HAnimJoint1201 = x3d.HAnimJoint()
HAnimJoint1201.name = "l_carpal_distal_interphalangeal_5"
HAnimJoint1201.DEF = "hanim_l_carpal_distal_interphalangeal_5"
HAnimJoint1201.center = [0.18080999999999997,0.7468830000000001,-0.0369675]
HAnimJoint1201.ulimit = [0,0,0]
HAnimJoint1201.llimit = [0,0,0]
HAnimSegment1202 = x3d.HAnimSegment()
HAnimSegment1202.name = "l_carpal_distal_phalanx_5"
HAnimSegment1202.DEF = "hanim_l_carpal_distal_phalanx_5"
Transform1203 = x3d.Transform()
Transform1203.translation = [0.18080999999999997,0.7468830000000001,-0.0369675]
Shape1204 = x3d.Shape()
Appearance1205 = x3d.Appearance()
Material1206 = x3d.Material()
Material1206.diffuseColor = [0.588,0.588,0.588]

Appearance1205.material = Material1206
ImageTexture1207 = x3d.ImageTexture()
ImageTexture1207.USE = "JinLOA4TextureAtlas"

Appearance1205.texture = ImageTexture1207

Shape1204.appearance = Appearance1205
IndexedFaceSet1208 = x3d.IndexedFaceSet()
IndexedFaceSet1208.coordIndex = [0,25,31,-1,24,1,32,-1,1,0,2,-1,2,3,1,-1,31,23,4,-1,4,5,31,-1,0,31,5,-1,5,2,0,-1,23,29,6,-1,6,4,23,-1,32,1,3,-1,3,7,32,-1,29,32,7,-1,7,6,29,-1,2,8,17,-1,17,14,2,-1,5,4,10,-1,10,11,5,-1,2,5,11,-1,11,8,2,-1,10,12,18,-1,18,21,10,-1,7,3,9,-1,9,13,7,-1,6,7,13,-1,13,12,6,-1,8,11,19,-1,19,17,8,-1,19,11,10,-1,10,21,19,-1,25,0,1,-1,1,24,25,-1,14,16,22,-1,22,20,14,-1,15,18,22,-1,22,16,15,-1,3,14,20,-1,20,9,3,-1,14,3,2,-1,4,6,12,-1,12,10,4,-1,21,18,15,-1,14,17,19,-1,19,16,14,-1,19,21,15,-1,15,16,19,-1,9,20,22,-1,22,13,9,-1,22,18,12,-1,12,13,22,-1,25,24,27,-1,27,26,25,-1,23,28,30,-1,30,29,23,-1,28,26,27,-1,27,30,28,-1,25,26,28,-1,28,31,25,-1,32,30,27,-1,27,24,32,-1,30,32,29,-1,23,31,28,-1]
IndexedFaceSet1208.creaseAngle = 3.14159
IndexedFaceSet1208.texCoordIndex = [0,2,1,-1,3,5,4,-1,5,0,7,-1,7,6,5,-1,33,10,9,-1,9,35,33,-1,0,1,8,-1,8,7,0,-1,10,12,11,-1,11,9,10,-1,4,5,6,-1,6,13,4,-1,12,34,36,-1,36,11,12,-1,7,16,15,-1,15,14,7,-1,35,9,18,-1,18,37,35,-1,7,8,17,-1,17,16,7,-1,18,19,21,-1,21,20,18,-1,13,6,23,-1,23,22,13,-1,11,36,38,-1,38,19,11,-1,16,17,24,-1,24,15,16,-1,39,37,18,-1,18,20,39,-1,2,0,5,-1,5,3,2,-1,14,25,27,-1,27,26,14,-1,28,21,41,-1,41,40,28,-1,6,14,26,-1,26,23,6,-1,14,6,7,-1,9,11,19,-1,19,18,9,-1,20,21,28,-1,14,15,24,-1,24,25,14,-1,39,20,28,-1,28,40,39,-1,23,26,27,-1,27,22,23,-1,41,21,19,-1,19,38,41,-1,2,3,30,-1,30,29,2,-1,10,42,43,-1,43,12,10,-1,31,29,30,-1,30,32,31,-1,2,29,31,-1,31,1,2,-1,4,32,30,-1,30,3,4,-1,43,34,12,-1,10,33,42,-1]
Coordinate1209 = x3d.Coordinate()

IndexedFaceSet1208.coord = Coordinate1209
TextureCoordinate1210 = x3d.TextureCoordinate()

IndexedFaceSet1208.texCoord = TextureCoordinate1210

Shape1204.geometry = IndexedFaceSet1208

Transform1203.children.append(Shape1204)

HAnimSegment1202.children.append(Transform1203)

HAnimJoint1201.children.append(HAnimSegment1202)

HAnimJoint1191.children.append(HAnimJoint1201)

HAnimJoint1181.children.append(HAnimJoint1191)

HAnimJoint1171.children.append(HAnimJoint1181)

HAnimJoint971.children.append(HAnimJoint1171)

HAnimJoint961.children.append(HAnimJoint971)

HAnimJoint951.children.append(HAnimJoint961)

HAnimJoint941.children.append(HAnimJoint951)

HAnimJoint931.children.append(HAnimJoint941)

HAnimJoint771.children.append(HAnimJoint931)
HAnimJoint1211 = x3d.HAnimJoint()
HAnimJoint1211.name = "r_acromioclavicular"
HAnimJoint1211.DEF = "hanim_r_acromioclavicular"
HAnimJoint1211.center = [-0.038474999999999995,1.4987880279,-0.01378575]
HAnimJoint1211.ulimit = [0,0,0]
HAnimJoint1211.llimit = [0,0,0]
HAnimSegment1212 = x3d.HAnimSegment()
HAnimSegment1212.name = "r_clavicle"
HAnimSegment1212.DEF = "hanim_r_clavicle"
Transform1213 = x3d.Transform()
Transform1213.translation = [-0.038474999999999995,1.4987880279,-0.01378575]
Shape1214 = x3d.Shape()
Appearance1215 = x3d.Appearance()
Material1216 = x3d.Material()
Material1216.diffuseColor = [0.588,0.588,0.588]

Appearance1215.material = Material1216
ImageTexture1217 = x3d.ImageTexture()
ImageTexture1217.USE = "JinLOA4TextureAtlas"

Appearance1215.texture = ImageTexture1217

Shape1214.appearance = Appearance1215
IndexedFaceSet1218 = x3d.IndexedFaceSet()
IndexedFaceSet1218.coordIndex = [9,0,1,-1,1,6,9,-1,6,1,2,-1,2,5,6,-1,8,5,2,-1,2,3,8,-1,8,3,4,-1,4,7,8,-1,9,7,4,-1,4,0,9,-1,4,3,2,-1,0,4,2,-1,1,0,2,-1,10,14,13,-1,10,13,12,-1,11,10,12,-1,6,10,11,-1,11,9,6,-1,9,11,12,-1,12,7,9,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,5,8,-1,5,14,10,-1,10,6,5,-1]
IndexedFaceSet1218.creaseAngle = 3.14159
IndexedFaceSet1218.texCoordIndex = [9,0,1,-1,1,6,9,-1,6,1,2,-1,2,5,6,-1,8,5,2,-1,2,3,8,-1,8,3,4,-1,4,7,8,-1,9,7,4,-1,4,0,9,-1,4,3,2,-1,0,4,2,-1,1,0,2,-1,10,14,13,-1,10,13,12,-1,11,10,12,-1,6,10,11,-1,11,9,6,-1,9,11,12,-1,12,7,9,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,5,8,-1,5,14,10,-1,10,6,5,-1]
Coordinate1219 = x3d.Coordinate()

IndexedFaceSet1218.coord = Coordinate1219
TextureCoordinate1220 = x3d.TextureCoordinate()

IndexedFaceSet1218.texCoord = TextureCoordinate1220

Shape1214.geometry = IndexedFaceSet1218

Transform1213.children.append(Shape1214)

HAnimSegment1212.children.append(Transform1213)

HAnimJoint1211.children.append(HAnimSegment1212)
HAnimJoint1221 = x3d.HAnimJoint()
HAnimJoint1221.name = "r_sternoclavicular"
HAnimJoint1221.DEF = "hanim_r_sternoclavicular"
HAnimJoint1221.center = [-0.12294000000000001,1.4778630279000002,-0.012897]
HAnimJoint1221.ulimit = [0,0,0]
HAnimJoint1221.llimit = [0,0,0]
HAnimSegment1222 = x3d.HAnimSegment()
HAnimSegment1222.name = "r_scapula"
HAnimSegment1222.DEF = "hanim_r_scapula"
Transform1223 = x3d.Transform()
Transform1223.translation = [-0.12294000000000001,1.4778630279000002,-0.012897]
Shape1224 = x3d.Shape()
Appearance1225 = x3d.Appearance()
Material1226 = x3d.Material()
Material1226.diffuseColor = [0.588,0.588,0.588]

Appearance1225.material = Material1226
ImageTexture1227 = x3d.ImageTexture()
ImageTexture1227.USE = "JinLOA4TextureAtlas"

Appearance1225.texture = ImageTexture1227

Shape1224.appearance = Appearance1225
IndexedFaceSet1228 = x3d.IndexedFaceSet()
IndexedFaceSet1228.coordIndex = [5,1,0,-1,0,4,5,-1,4,0,2,-1,2,3,4,-1,3,2,6,-1,6,9,3,-1,7,8,1,-1,1,5,7,-1,6,2,0,-1,0,8,6,-1,0,1,8,-1,9,6,8,-1,8,7,9,-1,4,10,11,-1,11,5,4,-1,5,11,12,-1,12,7,5,-1,7,12,13,-1,13,9,7,-1,9,13,14,-1,14,3,9,-1,3,14,10,-1,10,4,3,-1,10,15,11,-1,11,15,12,-1,12,15,13,-1,13,15,14,-1,14,15,10,-1]
IndexedFaceSet1228.creaseAngle = 3.14159
IndexedFaceSet1228.texCoordIndex = [5,1,0,-1,0,4,5,-1,4,0,2,-1,2,3,4,-1,3,2,6,-1,6,8,3,-1,9,7,1,-1,1,5,9,-1,6,2,0,-1,0,7,6,-1,0,1,7,-1,12,10,11,-1,11,13,12,-1,4,14,15,-1,15,5,4,-1,5,15,16,-1,16,9,5,-1,13,16,17,-1,17,12,13,-1,8,17,18,-1,18,3,8,-1,3,18,14,-1,14,4,3,-1,14,19,15,-1,15,19,16,-1,16,19,17,-1,17,19,18,-1,18,19,14,-1]
Coordinate1229 = x3d.Coordinate()

IndexedFaceSet1228.coord = Coordinate1229
TextureCoordinate1230 = x3d.TextureCoordinate()

IndexedFaceSet1228.texCoord = TextureCoordinate1230

Shape1224.geometry = IndexedFaceSet1228

Transform1223.children.append(Shape1224)

HAnimSegment1222.children.append(Transform1223)

HAnimJoint1221.children.append(HAnimSegment1222)
HAnimJoint1231 = x3d.HAnimJoint()
HAnimJoint1231.name = "r_shoulder"
HAnimJoint1231.DEF = "hanim_r_shoulder"
HAnimJoint1231.center = [-0.1647,1.4614020279,-0.003267]
HAnimJoint1231.ulimit = [0,0,0]
HAnimJoint1231.llimit = [0,0,0]
HAnimSegment1232 = x3d.HAnimSegment()
HAnimSegment1232.name = "r_upperarm"
HAnimSegment1232.DEF = "hanim_r_upperarm"
Transform1233 = x3d.Transform()
Transform1233.translation = [-0.1647,1.4614020279,-0.003267]
Shape1234 = x3d.Shape()
Appearance1235 = x3d.Appearance()
Material1236 = x3d.Material()
Material1236.diffuseColor = [0.588,0.588,0.588]

Appearance1235.material = Material1236
ImageTexture1237 = x3d.ImageTexture()
ImageTexture1237.USE = "JinLOA4TextureAtlas"

Appearance1235.texture = ImageTexture1237

Shape1234.appearance = Appearance1235
IndexedFaceSet1238 = x3d.IndexedFaceSet()
IndexedFaceSet1238.coordIndex = [0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,38,37,36,-1,38,36,35,-1,39,38,35,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1,26,41,40,-1,40,25,26,-1,27,42,41,-1,41,26,27,-1,28,43,42,-1,42,27,28,-1,29,44,43,-1,43,28,29,-1,25,40,44,-1,44,29,25,-1,31,26,25,-1,25,30,31,-1,32,27,26,-1,26,31,32,-1,33,28,27,-1,27,32,33,-1,34,29,28,-1,28,33,34,-1,30,25,29,-1,29,34,30,-1,36,31,30,-1,30,35,36,-1,37,32,31,-1,31,36,37,-1,38,33,32,-1,32,37,38,-1,39,34,33,-1,33,38,39,-1,35,30,34,-1,34,39,35,-1]
IndexedFaceSet1238.creaseAngle = 3.14159
IndexedFaceSet1238.texCoordIndex = [1,0,2,-1,1,2,3,-1,55,1,3,-1,1,6,5,-1,5,0,1,-1,0,5,7,-1,7,2,0,-1,2,7,8,-1,8,3,2,-1,25,26,9,-1,9,4,25,-1,4,9,6,-1,6,1,4,-1,6,11,10,-1,10,5,6,-1,5,10,12,-1,12,7,5,-1,7,12,13,-1,13,8,7,-1,27,28,14,-1,14,9,27,-1,9,14,11,-1,11,6,9,-1,11,16,15,-1,15,10,11,-1,10,15,17,-1,17,12,10,-1,12,17,18,-1,18,13,12,-1,29,30,19,-1,19,14,29,-1,14,19,16,-1,16,11,14,-1,36,35,49,-1,36,49,48,-1,37,36,48,-1,20,15,16,-1,16,21,20,-1,22,17,15,-1,15,20,22,-1,23,18,17,-1,17,22,23,-1,24,19,31,-1,31,32,24,-1,21,16,19,-1,19,24,21,-1,38,57,56,-1,56,39,38,-1,40,59,58,-1,58,50,40,-1,41,60,59,-1,59,40,41,-1,42,61,60,-1,60,41,42,-1,39,56,61,-1,61,42,39,-1,43,38,39,-1,39,44,43,-1,45,40,51,-1,51,52,45,-1,46,41,40,-1,40,45,46,-1,47,42,41,-1,41,46,47,-1,44,39,42,-1,42,47,44,-1,34,43,44,-1,44,33,34,-1,35,45,53,-1,53,54,35,-1,36,46,45,-1,45,35,36,-1,37,47,46,-1,46,36,37,-1,33,44,47,-1,47,37,33,-1]
Coordinate1239 = x3d.Coordinate()

IndexedFaceSet1238.coord = Coordinate1239
TextureCoordinate1240 = x3d.TextureCoordinate()

IndexedFaceSet1238.texCoord = TextureCoordinate1240

Shape1234.geometry = IndexedFaceSet1238

Transform1233.children.append(Shape1234)

HAnimSegment1232.children.append(Transform1233)

HAnimJoint1231.children.append(HAnimSegment1232)
HAnimJoint1241 = x3d.HAnimJoint()
HAnimJoint1241.name = "r_elbow"
HAnimJoint1241.DEF = "hanim_r_elbow"
HAnimJoint1241.center = [-0.1817325,1.1517119721,-0.005629499999999999]
HAnimJoint1241.ulimit = [0,0,0]
HAnimJoint1241.llimit = [0,0,0]
HAnimSegment1242 = x3d.HAnimSegment()
HAnimSegment1242.name = "r_forearm"
HAnimSegment1242.DEF = "hanim_r_forearm"
Transform1243 = x3d.Transform()
Transform1243.translation = [-0.1817325,1.1517119721,-0.005629499999999999]
Shape1244 = x3d.Shape()
Appearance1245 = x3d.Appearance()
Material1246 = x3d.Material()
Material1246.diffuseColor = [0.588,0.588,0.588]

Appearance1245.material = Material1246
ImageTexture1247 = x3d.ImageTexture()
ImageTexture1247.USE = "JinLOA4TextureAtlas"

Appearance1245.texture = ImageTexture1247

Shape1244.appearance = Appearance1245
IndexedFaceSet1248 = x3d.IndexedFaceSet()
IndexedFaceSet1248.coordIndex = [0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,23,22,21,-1,23,21,20,-1,24,23,20,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1]
IndexedFaceSet1248.creaseAngle = 3.14159
IndexedFaceSet1248.texCoordIndex = [4,3,2,-1,4,2,1,-1,0,4,1,-1,4,6,5,-1,5,3,4,-1,3,5,7,-1,7,2,3,-1,2,7,8,-1,8,1,2,-1,1,8,9,-1,9,0,1,-1,0,9,6,-1,6,4,0,-1,6,11,10,-1,10,5,6,-1,5,10,12,-1,12,7,5,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,11,-1,11,6,9,-1,11,16,15,-1,15,10,11,-1,10,15,17,-1,17,12,10,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,16,-1,16,11,14,-1,24,23,22,-1,24,22,21,-1,20,24,21,-1,22,15,16,-1,16,21,22,-1,23,17,15,-1,15,22,23,-1,24,18,17,-1,17,23,24,-1,20,19,18,-1,18,24,20,-1,21,16,19,-1,19,20,21,-1]
Coordinate1249 = x3d.Coordinate()

IndexedFaceSet1248.coord = Coordinate1249
TextureCoordinate1250 = x3d.TextureCoordinate()

IndexedFaceSet1248.texCoord = TextureCoordinate1250

Shape1244.geometry = IndexedFaceSet1248

Transform1243.children.append(Shape1244)

HAnimSegment1242.children.append(Transform1243)

HAnimJoint1241.children.append(HAnimSegment1242)
HAnimJoint1251 = x3d.HAnimJoint()
HAnimJoint1251.name = "r_radiocarpal"
HAnimJoint1251.DEF = "hanim_r_radiocarpal"
HAnimJoint1251.center = [-0.181575,0.8981009721000001,-0.005022]
HAnimJoint1251.ulimit = [0,0,0]
HAnimJoint1251.llimit = [0,0,0]
HAnimSegment1252 = x3d.HAnimSegment()
HAnimSegment1252.name = "r_carpal"
HAnimSegment1252.DEF = "hanim_r_carpal"
Transform1253 = x3d.Transform()
Transform1253.translation = [-0.181575,0.8981009721000001,-0.005022]
Shape1254 = x3d.Shape()
Appearance1255 = x3d.Appearance()
Material1256 = x3d.Material()
Material1256.diffuseColor = [0.588,0.588,0.588]

Appearance1255.material = Material1256
ImageTexture1257 = x3d.ImageTexture()
ImageTexture1257.USE = "JinLOA4TextureAtlas"

Appearance1255.texture = ImageTexture1257

Shape1254.appearance = Appearance1255
IndexedFaceSet1258 = x3d.IndexedFaceSet()
IndexedFaceSet1258.coordIndex = [0,11,12,-1,12,1,0,-1,1,12,13,-1,13,2,1,-1,2,13,10,-1,10,17,2,-1,3,16,8,-1,8,4,3,-1,5,20,21,-1,21,19,5,-1,6,18,15,-1,15,14,6,-1,6,14,9,-1,9,7,6,-1,7,9,11,-1,11,0,7,-1,15,18,5,-1,5,19,15,-1,10,16,3,-1,3,17,10,-1,4,8,21,-1,21,20,4,-1,0,1,22,-1,1,2,22,-1,2,17,22,-1,17,3,22,-1,3,4,22,-1,4,20,22,-1,20,5,22,-1,5,18,22,-1,18,6,22,-1,6,7,22,-1,7,0,22,-1,16,10,24,-1,24,23,16,-1,10,13,25,-1,25,24,10,-1,13,12,26,-1,26,25,13,-1,12,11,27,-1,27,26,12,-1,11,9,28,-1,28,27,11,-1,9,14,29,-1,29,28,9,-1,14,15,30,-1,30,29,14,-1,15,19,31,-1,31,30,15,-1,19,21,32,-1,32,31,19,-1,21,8,33,-1,33,32,21,-1,8,16,23,-1,23,33,8,-1,23,24,34,-1,24,25,34,-1,25,26,34,-1,26,27,34,-1,27,28,34,-1,28,29,34,-1,29,30,34,-1,30,31,34,-1,31,32,34,-1,32,33,34,-1,33,23,34,-1]
IndexedFaceSet1258.creaseAngle = 3.14159
IndexedFaceSet1258.texCoordIndex = [2,3,0,-1,0,1,2,-1,1,0,4,-1,4,5,1,-1,5,4,7,-1,7,6,5,-1,10,11,8,-1,8,9,10,-1,12,37,38,-1,38,15,12,-1,17,18,19,-1,19,16,17,-1,17,16,20,-1,20,21,17,-1,21,20,36,-1,36,35,21,-1,19,18,12,-1,12,15,19,-1,7,11,10,-1,10,6,7,-1,9,8,14,-1,14,13,9,-1,2,1,22,-1,1,5,22,-1,5,6,22,-1,6,10,22,-1,10,9,22,-1,9,13,22,-1,37,12,39,-1,12,18,39,-1,18,17,39,-1,17,21,39,-1,21,35,39,-1,11,7,23,-1,23,24,11,-1,7,4,25,-1,25,23,7,-1,4,0,26,-1,26,25,4,-1,0,3,27,-1,27,26,0,-1,36,20,28,-1,28,40,36,-1,20,16,29,-1,29,28,20,-1,16,19,30,-1,30,29,16,-1,19,15,31,-1,31,30,19,-1,15,38,41,-1,41,31,15,-1,14,8,33,-1,33,32,14,-1,8,11,24,-1,24,33,8,-1,24,23,34,-1,23,25,34,-1,25,26,34,-1,26,27,34,-1,40,28,42,-1,28,29,42,-1,29,30,42,-1,30,31,42,-1,31,41,42,-1,32,33,34,-1,33,24,34,-1]
Coordinate1259 = x3d.Coordinate()

IndexedFaceSet1258.coord = Coordinate1259
TextureCoordinate1260 = x3d.TextureCoordinate()

IndexedFaceSet1258.texCoord = TextureCoordinate1260

Shape1254.geometry = IndexedFaceSet1258

Transform1253.children.append(Shape1254)

HAnimSegment1252.children.append(Transform1253)

HAnimJoint1251.children.append(HAnimSegment1252)
HAnimJoint1261 = x3d.HAnimJoint()
HAnimJoint1261.name = "r_midcarpal_1"
HAnimJoint1261.DEF = "hanim_r_midcarpal_1"
HAnimJoint1261.center = [-0.18096749999999998,0.8755019721,0.019327499999999997]
HAnimJoint1261.ulimit = [0,0,0]
HAnimJoint1261.llimit = [0,0,0]
HAnimSegment1262 = x3d.HAnimSegment()
HAnimSegment1262.name = "r_trapezium"
HAnimSegment1262.DEF = "hanim_r_trapezium"
Transform1263 = x3d.Transform()
Transform1263.translation = [-0.18096749999999998,0.8755019721,0.019327499999999997]
Shape1264 = x3d.Shape()
Appearance1265 = x3d.Appearance()
Material1266 = x3d.Material()
Material1266.diffuseColor = [0.588,0.588,0.588]

Appearance1265.material = Material1266
ImageTexture1267 = x3d.ImageTexture()
ImageTexture1267.USE = "JinLOA4TextureAtlas"

Appearance1265.texture = ImageTexture1267

Shape1264.appearance = Appearance1265
IndexedFaceSet1268 = x3d.IndexedFaceSet()
IndexedFaceSet1268.coordIndex = [6,0,3,-1,3,5,6,-1,5,3,2,-1,2,8,5,-1,1,7,4,-1,2,7,8,-1,7,2,4,-1,14,15,16,-1,16,17,14,-1,9,10,13,-1,10,11,12,-1,12,13,10,-1,1,4,10,-1,10,9,1,-1,4,2,11,-1,11,10,4,-1,2,3,12,-1,12,11,2,-1,3,0,13,-1,13,12,3,-1,6,5,15,-1,15,14,6,-1,5,8,16,-1,16,15,5,-1,8,7,17,-1,17,16,8,-1,18,25,24,-1,24,23,22,-1,18,24,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,6,18,19,-1,19,0,6,-1,0,19,20,-1,20,13,0,-1,13,20,21,-1,21,9,13,-1,9,21,22,-1,22,1,9,-1,1,22,23,-1,23,7,1,-1,7,23,24,-1,24,17,7,-1,17,24,25,-1,25,14,17,-1,14,25,18,-1,18,6,14,-1]
IndexedFaceSet1268.creaseAngle = 3.14159
IndexedFaceSet1268.texCoordIndex = [0,1,2,-1,2,3,0,-1,3,2,4,-1,4,5,3,-1,7,6,8,-1,18,6,19,-1,6,18,8,-1,21,22,23,-1,23,12,21,-1,9,15,10,-1,15,16,17,-1,17,10,15,-1,7,8,24,-1,24,20,7,-1,8,18,25,-1,25,24,8,-1,4,2,17,-1,17,16,4,-1,2,1,10,-1,10,17,2,-1,0,3,13,-1,13,11,0,-1,3,5,14,-1,14,13,3,-1,19,6,12,-1,12,23,19,-1,26,33,32,-1,32,31,30,-1,26,32,30,-1,30,29,28,-1,26,30,28,-1,27,26,28,-1,0,26,27,-1,27,1,0,-1,1,27,28,-1,28,10,1,-1,10,28,29,-1,29,9,10,-1,20,29,30,-1,30,7,20,-1,7,30,31,-1,31,6,7,-1,6,31,32,-1,32,12,6,-1,12,32,33,-1,33,21,12,-1,11,33,26,-1,26,0,11,-1]
Coordinate1269 = x3d.Coordinate()

IndexedFaceSet1268.coord = Coordinate1269
TextureCoordinate1270 = x3d.TextureCoordinate()

IndexedFaceSet1268.texCoord = TextureCoordinate1270

Shape1264.geometry = IndexedFaceSet1268

Transform1263.children.append(Shape1264)

HAnimSegment1262.children.append(Transform1263)

HAnimJoint1261.children.append(HAnimSegment1262)
HAnimJoint1271 = x3d.HAnimJoint()
HAnimJoint1271.name = "r_carpometacarpal_1"
HAnimJoint1271.DEF = "hanim_r_carpometacarpal_1"
HAnimJoint1271.center = [-0.180135,0.8587620279,0.0259875]
HAnimJoint1271.ulimit = [0,0,0]
HAnimJoint1271.llimit = [0,0,0]
HAnimSegment1272 = x3d.HAnimSegment()
HAnimSegment1272.name = "r_metacarpal_1"
HAnimSegment1272.DEF = "hanim_r_metacarpal_1"
Transform1273 = x3d.Transform()
Transform1273.translation = [-0.180135,0.8587620279,0.0259875]
Shape1274 = x3d.Shape()
Appearance1275 = x3d.Appearance()
Material1276 = x3d.Material()
Material1276.diffuseColor = [0.588,0.588,0.588]

Appearance1275.material = Material1276
ImageTexture1277 = x3d.ImageTexture()
ImageTexture1277.USE = "JinLOA4TextureAtlas"

Appearance1275.texture = ImageTexture1277

Shape1274.appearance = Appearance1275
IndexedFaceSet1278 = x3d.IndexedFaceSet()
IndexedFaceSet1278.coordIndex = [1,8,9,-1,9,2,1,-1,8,1,0,-1,0,10,8,-1,2,9,6,-1,6,3,2,-1,0,4,7,-1,7,10,0,-1,5,3,6,-1,25,21,22,-1,24,25,22,-1,23,24,22,-1,19,20,17,-1,17,18,19,-1,13,14,11,-1,11,12,13,-1,14,15,16,-1,16,11,14,-1,3,5,12,-1,12,11,3,-1,5,4,13,-1,13,12,5,-1,4,0,14,-1,14,13,4,-1,0,1,15,-1,15,14,0,-1,1,2,16,-1,16,15,1,-1,2,3,11,-1,11,16,2,-1,7,4,18,-1,18,17,7,-1,4,5,19,-1,19,18,4,-1,5,6,20,-1,20,19,5,-1,6,7,17,-1,17,20,6,-1,10,7,22,-1,22,21,10,-1,7,6,23,-1,23,22,7,-1,6,9,24,-1,24,23,6,-1,9,8,25,-1,25,24,9,-1,8,10,21,-1,21,25,8,-1]
IndexedFaceSet1278.creaseAngle = 3.14159
IndexedFaceSet1278.texCoordIndex = [0,1,2,-1,2,3,0,-1,27,26,28,-1,28,4,27,-1,3,2,7,-1,7,6,3,-1,28,29,30,-1,30,4,28,-1,10,6,7,-1,13,14,15,-1,12,13,15,-1,11,12,15,-1,16,17,18,-1,18,19,16,-1,20,21,22,-1,22,23,20,-1,21,24,25,-1,25,22,21,-1,6,10,23,-1,23,22,6,-1,10,8,20,-1,20,23,10,-1,8,5,21,-1,21,20,8,-1,5,0,24,-1,24,21,5,-1,0,3,25,-1,25,24,0,-1,3,6,22,-1,22,25,3,-1,30,29,35,-1,35,34,30,-1,8,10,16,-1,16,19,8,-1,10,7,17,-1,17,16,10,-1,7,9,18,-1,18,17,7,-1,4,30,33,-1,33,32,4,-1,9,7,11,-1,11,15,9,-1,7,2,12,-1,12,11,7,-1,2,1,13,-1,13,12,2,-1,27,4,32,-1,32,31,27,-1]
Coordinate1279 = x3d.Coordinate()

IndexedFaceSet1278.coord = Coordinate1279
TextureCoordinate1280 = x3d.TextureCoordinate()

IndexedFaceSet1278.texCoord = TextureCoordinate1280

Shape1274.geometry = IndexedFaceSet1278

Transform1273.children.append(Shape1274)

HAnimSegment1272.children.append(Transform1273)

HAnimJoint1271.children.append(HAnimSegment1272)
HAnimJoint1281 = x3d.HAnimJoint()
HAnimJoint1281.name = "r_metacarpophalangeal_1"
HAnimJoint1281.DEF = "hanim_r_metacarpophalangeal_1"
HAnimJoint1281.center = [-0.1806525,0.83421,0.035775]
HAnimJoint1281.ulimit = [0,0,0]
HAnimJoint1281.llimit = [0,0,0]
HAnimSegment1282 = x3d.HAnimSegment()
HAnimSegment1282.name = "r_carpal_proximal_phalanx_1"
HAnimSegment1282.DEF = "hanim_r_carpal_proximal_phalanx_1"
Transform1283 = x3d.Transform()
Transform1283.translation = [-0.1806525,0.83421,0.035775]
Shape1284 = x3d.Shape()
Appearance1285 = x3d.Appearance()
Material1286 = x3d.Material()
Material1286.diffuseColor = [0.588,0.588,0.588]

Appearance1285.material = Material1286
ImageTexture1287 = x3d.ImageTexture()
ImageTexture1287.USE = "JinLOA4TextureAtlas"

Appearance1285.texture = ImageTexture1287

Shape1284.appearance = Appearance1285
IndexedFaceSet1288 = x3d.IndexedFaceSet()
IndexedFaceSet1288.coordIndex = [5,6,0,-1,7,3,14,-1,14,13,7,-1,5,0,17,-1,17,10,5,-1,4,5,10,-1,10,9,4,-1,3,4,9,-1,9,14,3,-1,0,1,19,-1,19,17,0,-1,1,7,13,-1,13,19,1,-1,1,0,2,-1,0,6,8,-1,8,2,0,-1,9,10,11,-1,11,12,9,-1,13,14,15,-1,15,16,13,-1,10,17,18,-1,18,11,10,-1,19,13,16,-1,16,20,19,-1,17,19,20,-1,20,18,17,-1,14,9,12,-1,12,15,14,-1,15,12,20,-1,20,16,15,-1,11,18,20,-1,20,12,11,-1,22,23,24,-1,24,25,26,-1,22,24,26,-1,21,22,26,-1,28,29,30,-1,30,27,28,-1,8,6,22,-1,22,21,8,-1,6,5,23,-1,23,22,6,-1,5,4,24,-1,24,23,5,-1,4,3,25,-1,25,24,4,-1,3,7,26,-1,26,25,3,-1,27,30,31,-1,31,32,27,-1,7,1,28,-1,28,27,7,-1,1,2,29,-1,29,28,1,-1,2,8,30,-1,30,29,2,-1,8,21,31,-1,31,30,8,-1,21,26,32,-1,32,31,21,-1,26,7,27,-1,27,32,26,-1]
IndexedFaceSet1288.creaseAngle = 3.14159
IndexedFaceSet1288.texCoordIndex = [0,1,2,-1,36,33,34,-1,34,35,36,-1,0,2,7,-1,7,8,0,-1,10,0,8,-1,8,9,10,-1,33,38,37,-1,37,34,33,-1,2,11,12,-1,12,7,2,-1,39,36,35,-1,35,40,39,-1,11,2,13,-1,2,1,14,-1,14,13,2,-1,9,8,15,-1,15,16,9,-1,5,4,17,-1,17,18,5,-1,8,7,19,-1,19,15,8,-1,12,5,18,-1,18,20,12,-1,7,12,20,-1,20,19,7,-1,4,9,16,-1,16,17,4,-1,17,16,20,-1,20,18,17,-1,15,19,20,-1,20,16,15,-1,22,23,24,-1,24,25,26,-1,22,24,26,-1,21,22,26,-1,28,29,30,-1,30,27,28,-1,14,1,22,-1,22,21,14,-1,1,0,23,-1,23,22,1,-1,0,10,24,-1,24,23,0,-1,10,3,25,-1,25,24,10,-1,33,36,42,-1,42,41,33,-1,27,30,31,-1,31,32,27,-1,6,11,28,-1,28,27,6,-1,11,13,29,-1,29,28,11,-1,13,14,30,-1,30,29,13,-1,14,21,31,-1,31,30,14,-1,21,26,32,-1,32,31,21,-1,42,36,43,-1,43,44,42,-1]
Coordinate1289 = x3d.Coordinate()

IndexedFaceSet1288.coord = Coordinate1289
TextureCoordinate1290 = x3d.TextureCoordinate()

IndexedFaceSet1288.texCoord = TextureCoordinate1290

Shape1284.geometry = IndexedFaceSet1288

Transform1283.children.append(Shape1284)

HAnimSegment1282.children.append(Transform1283)

HAnimJoint1281.children.append(HAnimSegment1282)
HAnimJoint1291 = x3d.HAnimJoint()
HAnimJoint1291.name = "r_carpal_interphalangeal_1"
HAnimJoint1291.DEF = "hanim_r_carpal_interphalangeal_1"
HAnimJoint1291.center = [-0.1822725,0.811053,0.04965749999999999]
HAnimJoint1291.ulimit = [0,0,0]
HAnimJoint1291.llimit = [0,0,0]
HAnimSegment1292 = x3d.HAnimSegment()
HAnimSegment1292.name = "r_carpal_distal_phalanx_1"
HAnimSegment1292.DEF = "hanim_r_carpal_distal_phalanx_1"
Transform1293 = x3d.Transform()
Transform1293.translation = [-0.1822725,0.811053,0.04965749999999999]
Shape1294 = x3d.Shape()
Appearance1295 = x3d.Appearance()
Material1296 = x3d.Material()
Material1296.diffuseColor = [0.588,0.588,0.588]

Appearance1295.material = Material1296
ImageTexture1297 = x3d.ImageTexture()
ImageTexture1297.USE = "JinLOA4TextureAtlas"

Appearance1295.texture = ImageTexture1297

Shape1294.appearance = Appearance1295
IndexedFaceSet1298 = x3d.IndexedFaceSet()
IndexedFaceSet1298.coordIndex = [0,29,28,-1,28,11,0,-1,32,2,17,-1,17,1,32,-1,4,3,1,-1,1,17,4,-1,11,28,31,-1,31,5,11,-1,29,0,2,-1,2,32,29,-1,4,5,31,-1,31,3,4,-1,23,32,1,-1,24,3,31,-1,24,23,1,-1,1,3,24,-1,4,6,7,-1,7,8,4,-1,5,9,10,-1,10,11,5,-1,4,8,9,-1,9,5,4,-1,10,13,14,-1,14,12,10,-1,2,15,16,-1,16,17,2,-1,0,12,15,-1,15,2,0,-1,8,7,18,-1,18,9,8,-1,18,13,10,-1,10,9,18,-1,6,20,21,-1,21,19,6,-1,22,19,21,-1,21,14,22,-1,17,16,20,-1,20,6,17,-1,6,4,17,-1,11,10,12,-1,12,0,11,-1,13,22,14,-1,6,19,18,-1,18,7,6,-1,18,19,22,-1,22,13,18,-1,16,15,21,-1,21,20,16,-1,21,15,12,-1,12,14,21,-1,24,25,26,-1,26,23,24,-1,28,29,30,-1,30,27,28,-1,27,30,26,-1,26,25,27,-1,24,31,27,-1,27,25,24,-1,32,23,26,-1,26,30,32,-1,30,29,32,-1,28,27,31,-1]
IndexedFaceSet1298.creaseAngle = 3.14159
IndexedFaceSet1298.texCoordIndex = [3,33,34,-1,34,2,3,-1,4,5,6,-1,6,7,4,-1,9,8,7,-1,7,6,9,-1,2,34,37,-1,37,38,2,-1,33,3,36,-1,36,35,33,-1,9,11,10,-1,10,8,9,-1,12,4,7,-1,13,8,10,-1,13,12,7,-1,7,8,13,-1,9,14,15,-1,15,16,9,-1,38,39,18,-1,18,2,38,-1,9,16,17,-1,17,11,9,-1,18,20,21,-1,21,19,18,-1,5,22,23,-1,23,6,5,-1,3,19,40,-1,40,36,3,-1,16,15,24,-1,24,17,16,-1,41,20,18,-1,18,39,41,-1,14,26,27,-1,27,25,14,-1,28,42,43,-1,43,21,28,-1,6,23,26,-1,26,14,6,-1,14,9,6,-1,2,18,19,-1,19,3,2,-1,20,28,21,-1,14,25,24,-1,24,15,14,-1,41,42,28,-1,28,20,41,-1,23,22,27,-1,27,26,23,-1,43,40,19,-1,19,21,43,-1,13,29,30,-1,30,12,13,-1,1,0,32,-1,32,31,1,-1,31,32,30,-1,30,29,31,-1,13,10,31,-1,31,29,13,-1,4,12,30,-1,30,32,4,-1,32,0,4,-1,1,31,10,-1]
Coordinate1299 = x3d.Coordinate()

IndexedFaceSet1298.coord = Coordinate1299
TextureCoordinate1300 = x3d.TextureCoordinate()

IndexedFaceSet1298.texCoord = TextureCoordinate1300

Shape1294.geometry = IndexedFaceSet1298

Transform1293.children.append(Shape1294)

HAnimSegment1292.children.append(Transform1293)

HAnimJoint1291.children.append(HAnimSegment1292)

HAnimJoint1281.children.append(HAnimJoint1291)

HAnimJoint1271.children.append(HAnimJoint1281)

HAnimJoint1261.children.append(HAnimJoint1271)

HAnimJoint1251.children.append(HAnimJoint1261)
HAnimJoint1301 = x3d.HAnimJoint()
HAnimJoint1301.name = "r_midcarpal_2"
HAnimJoint1301.DEF = "hanim_r_midcarpal_2"
HAnimJoint1301.center = [-0.18096749999999998,0.8766180000000001,0.00841725]
HAnimJoint1301.ulimit = [0,0,0]
HAnimJoint1301.llimit = [0,0,0]
HAnimSegment1302 = x3d.HAnimSegment()
HAnimSegment1302.name = "r_trapezoid"
HAnimSegment1302.DEF = "hanim_r_trapezoid"
Transform1303 = x3d.Transform()
Transform1303.translation = [-0.18096749999999998,0.8766180000000001,0.00841725]
Shape1304 = x3d.Shape()
Appearance1305 = x3d.Appearance()
Material1306 = x3d.Material()
Material1306.diffuseColor = [0.588,0.588,0.588]

Appearance1305.material = Material1306
ImageTexture1307 = x3d.ImageTexture()
ImageTexture1307.USE = "JinLOA4TextureAtlas"

Appearance1305.texture = ImageTexture1307

Shape1304.appearance = Appearance1305
IndexedFaceSet1308 = x3d.IndexedFaceSet()
IndexedFaceSet1308.coordIndex = [14,2,1,-1,1,12,14,-1,0,3,15,-1,15,13,0,-1,11,8,9,-1,9,10,11,-1,4,16,17,-1,17,5,4,-1,18,19,7,-1,7,6,18,-1,0,13,16,-1,16,4,0,-1,12,1,5,-1,5,17,12,-1,1,0,4,-1,4,5,1,-1,2,14,18,-1,18,6,2,-1,15,3,7,-1,7,19,15,-1,3,2,6,-1,6,7,3,-1,3,0,9,-1,9,8,3,-1,0,1,10,-1,10,9,0,-1,1,2,11,-1,11,10,1,-1,2,3,8,-1,8,11,2,-1,20,27,26,-1,26,25,24,-1,20,26,24,-1,24,23,22,-1,20,24,22,-1,21,20,22,-1,12,20,21,-1,21,14,12,-1,14,21,22,-1,22,18,14,-1,18,22,23,-1,23,19,18,-1,19,23,24,-1,24,15,19,-1,15,24,25,-1,25,13,15,-1,13,25,26,-1,26,16,13,-1,16,26,27,-1,27,17,16,-1,17,27,20,-1,20,12,17,-1]
IndexedFaceSet1308.creaseAngle = 3.14159
IndexedFaceSet1308.texCoordIndex = [21,0,1,-1,1,19,21,-1,12,13,22,-1,22,20,12,-1,5,6,7,-1,7,4,5,-1,8,23,25,-1,25,9,8,-1,26,28,18,-1,18,17,26,-1,12,20,24,-1,24,16,12,-1,19,1,9,-1,9,25,19,-1,1,2,8,-1,8,9,1,-1,0,21,27,-1,27,10,0,-1,22,13,18,-1,18,28,22,-1,3,0,10,-1,10,11,3,-1,13,12,15,-1,15,14,13,-1,2,1,4,-1,4,7,2,-1,1,0,5,-1,5,4,1,-1,0,3,6,-1,6,5,0,-1,29,36,35,-1,35,34,33,-1,29,35,33,-1,33,32,31,-1,29,33,31,-1,30,29,31,-1,19,29,30,-1,30,21,19,-1,21,30,31,-1,31,27,21,-1,26,31,32,-1,32,28,26,-1,28,32,33,-1,33,22,28,-1,22,33,34,-1,34,20,22,-1,20,34,35,-1,35,24,20,-1,23,35,36,-1,36,25,23,-1,25,36,29,-1,29,19,25,-1]
Coordinate1309 = x3d.Coordinate()

IndexedFaceSet1308.coord = Coordinate1309
TextureCoordinate1310 = x3d.TextureCoordinate()

IndexedFaceSet1308.texCoord = TextureCoordinate1310

Shape1304.geometry = IndexedFaceSet1308

Transform1303.children.append(Shape1304)

HAnimSegment1302.children.append(Transform1303)

HAnimJoint1301.children.append(HAnimSegment1302)
HAnimJoint1311 = x3d.HAnimJoint()
HAnimJoint1311.name = "r_carpometacarpal_2"
HAnimJoint1311.DEF = "hanim_r_carpometacarpal_2"
HAnimJoint1311.center = [-0.18089999999999998,0.8526239721000001,0.009729]
HAnimJoint1311.ulimit = [0,0,0]
HAnimJoint1311.llimit = [0,0,0]
HAnimSegment1312 = x3d.HAnimSegment()
HAnimSegment1312.name = "r_metacarpal_2"
HAnimSegment1312.DEF = "hanim_r_metacarpal_2"
Transform1313 = x3d.Transform()
Transform1313.translation = [-0.18089999999999998,0.8526239721000001,0.009729]
Shape1314 = x3d.Shape()
Appearance1315 = x3d.Appearance()
Material1316 = x3d.Material()
Material1316.diffuseColor = [0.588,0.588,0.588]

Appearance1315.material = Material1316
ImageTexture1317 = x3d.ImageTexture()
ImageTexture1317.USE = "JinLOA4TextureAtlas"

Appearance1315.texture = ImageTexture1317

Shape1314.appearance = Appearance1315
IndexedFaceSet1318 = x3d.IndexedFaceSet()
IndexedFaceSet1318.coordIndex = [0,1,8,-1,8,3,0,-1,5,0,3,-1,3,7,5,-1,10,6,4,-1,4,2,10,-1,2,4,8,-1,8,1,2,-1,14,4,6,-1,6,11,14,-1,8,16,17,-1,17,3,8,-1,9,13,12,-1,12,7,9,-1,15,16,8,-1,8,4,15,-1,15,4,14,-1,9,3,17,-1,17,18,9,-1,9,18,13,-1,30,31,25,-1,27,30,25,-1,26,27,25,-1,22,19,20,-1,20,21,22,-1,41,38,39,-1,39,40,41,-1,36,37,32,-1,36,32,33,-1,36,33,34,-1,35,36,34,-1,23,24,19,-1,19,22,23,-1,6,10,20,-1,20,19,6,-1,30,27,28,-1,28,29,30,-1,5,7,22,-1,22,21,5,-1,7,12,23,-1,23,22,7,-1,12,11,24,-1,24,23,12,-1,11,6,19,-1,19,24,11,-1,1,0,26,-1,26,25,1,-1,0,5,27,-1,27,26,0,-1,5,21,28,-1,28,27,5,-1,21,20,29,-1,29,28,21,-1,20,10,30,-1,30,29,20,-1,10,2,31,-1,31,30,10,-1,2,1,25,-1,25,31,2,-1,16,15,33,-1,33,32,16,-1,15,14,34,-1,34,33,15,-1,14,13,35,-1,35,34,14,-1,13,18,36,-1,36,35,13,-1,18,17,37,-1,37,36,18,-1,17,16,32,-1,32,37,17,-1,14,11,39,-1,39,38,14,-1,11,12,40,-1,40,39,11,-1,12,13,41,-1,41,40,12,-1,13,14,38,-1,38,41,13,-1,9,7,3,-1]
IndexedFaceSet1318.creaseAngle = 3.14159
IndexedFaceSet1318.texCoordIndex = [3,0,1,-1,1,2,3,-1,5,3,2,-1,2,4,5,-1,44,45,8,-1,8,46,44,-1,46,8,43,-1,43,42,46,-1,47,8,45,-1,45,48,47,-1,1,12,13,-1,13,2,1,-1,16,14,15,-1,15,4,16,-1,50,49,43,-1,43,8,50,-1,50,8,47,-1,16,2,13,-1,13,18,16,-1,16,18,14,-1,21,22,23,-1,20,21,23,-1,19,20,23,-1,25,26,27,-1,27,24,25,-1,29,30,31,-1,31,28,29,-1,33,34,35,-1,33,35,36,-1,33,36,37,-1,32,33,37,-1,38,39,26,-1,26,25,38,-1,7,6,27,-1,27,26,7,-1,21,20,40,-1,40,41,21,-1,5,4,25,-1,25,24,5,-1,4,15,38,-1,38,25,4,-1,15,11,39,-1,39,38,15,-1,48,45,51,-1,51,56,48,-1,0,3,19,-1,19,23,0,-1,3,5,20,-1,20,19,3,-1,5,24,40,-1,40,20,5,-1,24,27,41,-1,41,40,24,-1,27,6,21,-1,21,41,27,-1,6,9,22,-1,22,21,6,-1,9,0,23,-1,23,22,9,-1,12,17,36,-1,36,35,12,-1,50,47,55,-1,55,54,50,-1,10,14,32,-1,32,37,10,-1,14,18,33,-1,33,32,14,-1,18,13,34,-1,34,33,18,-1,13,12,35,-1,35,34,13,-1,47,48,53,-1,53,52,47,-1,11,15,28,-1,28,31,11,-1,15,14,29,-1,29,28,15,-1,14,10,30,-1,30,29,14,-1,16,4,2,-1]
Coordinate1319 = x3d.Coordinate()

IndexedFaceSet1318.coord = Coordinate1319
TextureCoordinate1320 = x3d.TextureCoordinate()

IndexedFaceSet1318.texCoord = TextureCoordinate1320

Shape1314.geometry = IndexedFaceSet1318

Transform1313.children.append(Shape1314)

HAnimSegment1312.children.append(Transform1313)

HAnimJoint1311.children.append(HAnimSegment1312)
HAnimJoint1321 = x3d.HAnimJoint()
HAnimJoint1321.name = "r_metacarpophalangeal_2"
HAnimJoint1321.DEF = "hanim_r_metacarpophalangeal_2"
HAnimJoint1321.center = [-0.18335249999999997,0.790128,0.015075]
HAnimJoint1321.ulimit = [0,0,0]
HAnimJoint1321.llimit = [0,0,0]
HAnimSegment1322 = x3d.HAnimSegment()
HAnimSegment1322.name = "r_carpal_proximal_phalanx_2"
HAnimSegment1322.DEF = "hanim_r_carpal_proximal_phalanx_2"
Transform1323 = x3d.Transform()
Transform1323.translation = [-0.18335249999999997,0.790128,0.015075]
Shape1324 = x3d.Shape()
Appearance1325 = x3d.Appearance()
Material1326 = x3d.Material()
Material1326.diffuseColor = [0.588,0.588,0.588]

Appearance1325.material = Material1326
ImageTexture1327 = x3d.ImageTexture()
ImageTexture1327.USE = "JinLOA4TextureAtlas"

Appearance1325.texture = ImageTexture1327

Shape1324.appearance = Appearance1325
IndexedFaceSet1328 = x3d.IndexedFaceSet()
IndexedFaceSet1328.coordIndex = [4,19,18,-1,18,5,4,-1,5,18,21,-1,21,6,5,-1,7,25,20,-1,20,8,7,-1,8,20,19,-1,19,4,8,-1,6,21,22,-1,1,7,8,-1,8,10,1,-1,6,2,11,-1,11,5,6,-1,5,11,0,-1,0,4,5,-1,4,0,10,-1,10,8,4,-1,1,3,9,-1,9,7,1,-1,9,3,2,-1,2,6,9,-1,9,24,23,-1,23,7,9,-1,6,22,24,-1,24,9,6,-1,23,25,7,-1,0,11,15,-1,15,17,0,-1,1,10,14,-1,14,12,1,-1,11,2,13,-1,13,15,11,-1,3,1,12,-1,12,16,3,-1,2,3,16,-1,16,13,2,-1,10,0,17,-1,17,14,10,-1,14,17,16,-1,16,12,14,-1,15,13,16,-1,16,17,15,-1,26,27,28,-1,26,28,29,-1,30,26,29,-1,18,19,27,-1,27,26,18,-1,19,20,28,-1,28,27,19,-1,20,25,29,-1,29,28,20,-1,31,32,33,-1,37,31,33,-1,36,37,33,-1,36,33,34,-1,36,34,35,-1,21,18,26,-1,26,30,21,-1,24,22,32,-1,32,31,24,-1,22,21,33,-1,33,32,22,-1,21,30,34,-1,34,33,21,-1,30,29,35,-1,35,34,30,-1,29,25,36,-1,36,35,29,-1,25,23,37,-1,37,36,25,-1,23,24,31,-1,31,37,23,-1]
IndexedFaceSet1328.creaseAngle = 3.14159
IndexedFaceSet1328.texCoordIndex = [0,1,2,-1,2,3,0,-1,3,2,4,-1,4,5,3,-1,6,40,41,-1,41,9,6,-1,9,41,39,-1,39,38,9,-1,5,4,10,-1,11,6,9,-1,9,12,11,-1,5,13,14,-1,14,3,5,-1,3,14,15,-1,15,0,3,-1,38,42,12,-1,12,9,38,-1,11,43,44,-1,44,6,11,-1,17,16,13,-1,13,5,17,-1,44,45,46,-1,46,6,44,-1,5,10,18,-1,18,17,5,-1,46,40,6,-1,15,14,20,-1,20,21,15,-1,11,12,22,-1,22,23,11,-1,14,13,24,-1,24,20,14,-1,43,11,23,-1,23,48,43,-1,13,16,25,-1,25,24,13,-1,12,42,47,-1,47,22,12,-1,22,47,48,-1,48,23,22,-1,20,24,25,-1,25,21,20,-1,27,28,29,-1,27,29,30,-1,26,27,30,-1,2,1,28,-1,28,27,2,-1,1,8,29,-1,29,28,1,-1,8,7,30,-1,30,29,8,-1,33,34,35,-1,32,33,35,-1,31,32,35,-1,31,35,36,-1,31,36,37,-1,4,2,27,-1,27,26,4,-1,18,10,34,-1,34,33,18,-1,10,4,35,-1,35,34,10,-1,4,26,36,-1,36,35,4,-1,26,30,37,-1,37,36,26,-1,30,7,31,-1,31,37,30,-1,7,19,32,-1,32,31,7,-1,19,18,33,-1,33,32,19,-1]
Coordinate1329 = x3d.Coordinate()

IndexedFaceSet1328.coord = Coordinate1329
TextureCoordinate1330 = x3d.TextureCoordinate()

IndexedFaceSet1328.texCoord = TextureCoordinate1330

Shape1324.geometry = IndexedFaceSet1328

Transform1323.children.append(Shape1324)

HAnimSegment1322.children.append(Transform1323)

HAnimJoint1321.children.append(HAnimSegment1322)
HAnimJoint1331 = x3d.HAnimJoint()
HAnimJoint1331.name = "r_carpal_proximal_interphalangeal_2"
HAnimJoint1331.DEF = "hanim_r_carpal_proximal_interphalangeal_2"
HAnimJoint1331.center = [-0.18132749999999997,0.7524629721,0.014183999999999999]
HAnimJoint1331.ulimit = [0,0,0]
HAnimJoint1331.llimit = [0,0,0]
HAnimSegment1332 = x3d.HAnimSegment()
HAnimSegment1332.name = "r_carpal_middle_phalanx_2"
HAnimSegment1332.DEF = "hanim_r_carpal_middle_phalanx_2"
Transform1333 = x3d.Transform()
Transform1333.translation = [-0.18132749999999997,0.7524629721,0.014183999999999999]
Shape1334 = x3d.Shape()
Appearance1335 = x3d.Appearance()
Material1336 = x3d.Material()
Material1336.diffuseColor = [0.588,0.588,0.588]

Appearance1335.material = Material1336
ImageTexture1337 = x3d.ImageTexture()
ImageTexture1337.USE = "JinLOA4TextureAtlas"

Appearance1335.texture = ImageTexture1337

Shape1334.appearance = Appearance1335
IndexedFaceSet1338 = x3d.IndexedFaceSet()
IndexedFaceSet1338.coordIndex = [1,7,14,-1,14,15,1,-1,8,3,14,-1,1,18,5,-1,5,7,1,-1,3,4,21,-1,21,2,3,-1,6,4,3,-1,3,8,6,-1,6,13,4,-1,0,13,5,-1,5,18,0,-1,13,0,21,-1,21,4,13,-1,2,15,14,-1,14,3,2,-1,8,11,12,-1,12,6,8,-1,7,5,9,-1,9,10,7,-1,10,9,12,-1,12,11,10,-1,8,14,10,-1,10,11,8,-1,13,6,12,-1,12,9,13,-1,9,5,13,-1,7,10,14,-1,15,2,16,-1,16,17,15,-1,18,1,19,-1,19,20,18,-1,2,21,22,-1,22,16,2,-1,0,18,20,-1,20,23,0,-1,21,0,23,-1,23,22,21,-1,1,15,17,-1,17,19,1,-1,19,17,23,-1,23,20,19,-1,16,22,23,-1,23,17,16,-1]
IndexedFaceSet1338.creaseAngle = 3.14159
IndexedFaceSet1338.texCoordIndex = [3,0,24,-1,24,25,3,-1,4,5,1,-1,3,6,7,-1,7,0,3,-1,5,8,9,-1,9,10,5,-1,11,8,5,-1,5,4,11,-1,11,12,8,-1,27,26,7,-1,7,6,27,-1,12,13,9,-1,9,8,12,-1,10,2,1,-1,1,5,10,-1,4,14,15,-1,15,11,4,-1,0,7,29,-1,29,28,0,-1,16,17,15,-1,15,14,16,-1,4,1,16,-1,16,14,4,-1,12,11,15,-1,15,17,12,-1,29,7,26,-1,0,28,24,-1,2,10,18,-1,18,19,2,-1,6,3,20,-1,20,21,6,-1,10,9,22,-1,22,18,10,-1,27,6,21,-1,21,31,27,-1,9,13,23,-1,23,22,9,-1,3,25,30,-1,30,20,3,-1,20,30,31,-1,31,21,20,-1,18,22,23,-1,23,19,18,-1]
Coordinate1339 = x3d.Coordinate()

IndexedFaceSet1338.coord = Coordinate1339
TextureCoordinate1340 = x3d.TextureCoordinate()

IndexedFaceSet1338.texCoord = TextureCoordinate1340

Shape1334.geometry = IndexedFaceSet1338

Transform1333.children.append(Shape1334)

HAnimSegment1332.children.append(Transform1333)

HAnimJoint1331.children.append(HAnimSegment1332)
HAnimJoint1341 = x3d.HAnimJoint()
HAnimJoint1341.name = "r_carpal_distal_interphalangeal_2"
HAnimJoint1341.DEF = "hanim_r_carpal_distal_interphalangeal_2"
HAnimJoint1341.center = [-0.1802925,0.721215,0.01338525]
HAnimJoint1341.ulimit = [0,0,0]
HAnimJoint1341.llimit = [0,0,0]
HAnimSegment1342 = x3d.HAnimSegment()
HAnimSegment1342.name = "r_carpal_distal_phalanx_2"
HAnimSegment1342.DEF = "hanim_r_carpal_distal_phalanx_2"
Transform1343 = x3d.Transform()
Transform1343.translation = [-0.1802925,0.721215,0.01338525]
Shape1344 = x3d.Shape()
Appearance1345 = x3d.Appearance()
Material1346 = x3d.Material()
Material1346.diffuseColor = [0.588,0.588,0.588]

Appearance1345.material = Material1346
ImageTexture1347 = x3d.ImageTexture()
ImageTexture1347.USE = "JinLOA4TextureAtlas"

Appearance1345.texture = ImageTexture1347

Shape1344.appearance = Appearance1345
IndexedFaceSet1348 = x3d.IndexedFaceSet()
IndexedFaceSet1348.coordIndex = [0,31,25,-1,24,32,1,-1,1,3,2,-1,2,0,1,-1,31,5,4,-1,4,23,31,-1,0,2,5,-1,5,31,0,-1,23,4,6,-1,6,29,23,-1,32,7,3,-1,3,1,32,-1,29,6,7,-1,7,32,29,-1,2,14,17,-1,17,8,2,-1,5,11,10,-1,10,4,5,-1,2,8,11,-1,11,5,2,-1,10,21,18,-1,18,12,10,-1,7,13,9,-1,9,3,7,-1,6,12,13,-1,13,7,6,-1,8,17,19,-1,19,11,8,-1,19,21,10,-1,10,11,19,-1,25,24,1,-1,1,0,25,-1,14,20,22,-1,22,16,14,-1,15,16,22,-1,22,18,15,-1,3,9,20,-1,20,14,3,-1,14,2,3,-1,4,10,12,-1,12,6,4,-1,21,15,18,-1,14,16,19,-1,19,17,14,-1,19,16,15,-1,15,21,19,-1,9,13,22,-1,22,20,9,-1,22,13,12,-1,12,18,22,-1,25,26,27,-1,27,24,25,-1,23,29,30,-1,30,28,23,-1,28,30,27,-1,27,26,28,-1,25,31,28,-1,28,26,25,-1,32,24,27,-1,27,30,32,-1,30,29,32,-1,23,28,31,-1]
IndexedFaceSet1348.creaseAngle = 3.14159
IndexedFaceSet1348.texCoordIndex = [0,1,2,-1,3,4,5,-1,5,6,7,-1,7,0,5,-1,33,35,9,-1,9,10,33,-1,0,7,8,-1,8,1,0,-1,10,9,11,-1,11,12,10,-1,4,13,6,-1,6,5,4,-1,12,11,36,-1,36,34,12,-1,7,14,15,-1,15,16,7,-1,35,37,18,-1,18,9,35,-1,7,16,17,-1,17,8,7,-1,18,20,21,-1,21,19,18,-1,13,22,23,-1,23,6,13,-1,11,19,38,-1,38,36,11,-1,16,15,24,-1,24,17,16,-1,39,20,18,-1,18,37,39,-1,2,3,5,-1,5,0,2,-1,14,26,27,-1,27,25,14,-1,28,40,41,-1,41,21,28,-1,6,23,26,-1,26,14,6,-1,14,7,6,-1,9,18,19,-1,19,11,9,-1,20,28,21,-1,14,25,24,-1,24,15,14,-1,39,40,28,-1,28,20,39,-1,23,22,27,-1,27,26,23,-1,41,38,19,-1,19,21,41,-1,2,29,30,-1,30,3,2,-1,10,12,43,-1,43,42,10,-1,31,32,30,-1,30,29,31,-1,2,1,31,-1,31,29,2,-1,4,3,30,-1,30,32,4,-1,43,12,34,-1,10,42,33,-1]
Coordinate1349 = x3d.Coordinate()

IndexedFaceSet1348.coord = Coordinate1349
TextureCoordinate1350 = x3d.TextureCoordinate()

IndexedFaceSet1348.texCoord = TextureCoordinate1350

Shape1344.geometry = IndexedFaceSet1348

Transform1343.children.append(Shape1344)

HAnimSegment1342.children.append(Transform1343)

HAnimJoint1341.children.append(HAnimSegment1342)

HAnimJoint1331.children.append(HAnimJoint1341)

HAnimJoint1321.children.append(HAnimJoint1331)

HAnimJoint1311.children.append(HAnimJoint1321)

HAnimJoint1301.children.append(HAnimJoint1311)

HAnimJoint1251.children.append(HAnimJoint1301)
HAnimJoint1351 = x3d.HAnimJoint()
HAnimJoint1351.name = "r_midcarpal_3"
HAnimJoint1351.DEF = "hanim_r_midcarpal_3"
HAnimJoint1351.center = [-0.18072,0.878571,-0.004797]
HAnimJoint1351.ulimit = [0,0,0]
HAnimJoint1351.llimit = [0,0,0]
HAnimSegment1352 = x3d.HAnimSegment()
HAnimSegment1352.name = "r_capitate"
HAnimSegment1352.DEF = "hanim_r_capitate"
Transform1353 = x3d.Transform()
Transform1353.translation = [-0.18072,0.878571,-0.004797]
Shape1354 = x3d.Shape()
Appearance1355 = x3d.Appearance()
Material1356 = x3d.Material()
Material1356.diffuseColor = [0.588,0.588,0.588]

Appearance1355.material = Material1356
ImageTexture1357 = x3d.ImageTexture()
ImageTexture1357.USE = "JinLOA4TextureAtlas"

Appearance1355.texture = ImageTexture1357

Shape1354.appearance = Appearance1355
IndexedFaceSet1358 = x3d.IndexedFaceSet()
IndexedFaceSet1358.coordIndex = [5,1,4,-1,4,6,5,-1,7,2,3,-1,3,0,7,-1,8,9,10,-1,10,11,8,-1,12,13,14,-1,14,15,12,-1,1,5,9,-1,9,8,1,-1,5,7,10,-1,10,9,5,-1,7,0,11,-1,11,10,7,-1,0,1,8,-1,8,11,0,-1,6,4,13,-1,13,12,6,-1,4,3,14,-1,14,13,4,-1,3,2,15,-1,15,14,3,-1,2,6,12,-1,12,15,2,-1,22,23,20,-1,20,21,22,-1,18,19,16,-1,16,17,18,-1,5,6,17,-1,17,16,5,-1,6,2,18,-1,18,17,6,-1,2,7,19,-1,19,18,2,-1,7,5,16,-1,16,19,7,-1,0,3,21,-1,21,20,0,-1,3,4,22,-1,22,21,3,-1,4,1,23,-1,23,22,4,-1,1,0,20,-1,20,23,1,-1]
IndexedFaceSet1358.creaseAngle = 3.14159
IndexedFaceSet1358.texCoordIndex = [24,25,26,-1,26,0,24,-1,4,5,6,-1,6,7,4,-1,8,9,10,-1,10,11,8,-1,12,30,31,-1,31,32,12,-1,25,24,29,-1,29,28,25,-1,1,4,10,-1,10,9,1,-1,4,7,11,-1,11,10,4,-1,7,2,8,-1,8,11,7,-1,0,26,30,-1,30,12,0,-1,3,6,14,-1,14,13,3,-1,6,5,15,-1,15,14,6,-1,27,0,12,-1,12,32,27,-1,17,18,19,-1,19,16,17,-1,35,36,37,-1,37,20,35,-1,24,0,20,-1,20,37,24,-1,0,27,35,-1,35,20,0,-1,5,4,22,-1,22,21,5,-1,4,1,23,-1,23,22,4,-1,7,6,16,-1,16,19,7,-1,6,3,17,-1,17,16,6,-1,26,25,34,-1,34,33,26,-1,2,7,19,-1,19,18,2,-1]
Coordinate1359 = x3d.Coordinate()

IndexedFaceSet1358.coord = Coordinate1359
TextureCoordinate1360 = x3d.TextureCoordinate()

IndexedFaceSet1358.texCoord = TextureCoordinate1360

Shape1354.geometry = IndexedFaceSet1358

Transform1353.children.append(Shape1354)

HAnimSegment1352.children.append(Transform1353)

HAnimJoint1351.children.append(HAnimSegment1352)
HAnimJoint1361 = x3d.HAnimJoint()
HAnimJoint1361.name = "r_carpometacarpal_3"
HAnimJoint1361.DEF = "hanim_r_carpometacarpal_3"
HAnimJoint1361.center = [-0.18072,0.850392,-0.00625275]
HAnimJoint1361.ulimit = [0,0,0]
HAnimJoint1361.llimit = [0,0,0]
HAnimSegment1362 = x3d.HAnimSegment()
HAnimSegment1362.name = "r_metacarpal_3"
HAnimSegment1362.DEF = "hanim_r_metacarpal_3"
Transform1363 = x3d.Transform()
Transform1363.translation = [-0.18072,0.850392,-0.00625275]
Shape1364 = x3d.Shape()
Appearance1365 = x3d.Appearance()
Material1366 = x3d.Material()
Material1366.diffuseColor = [0.588,0.588,0.588]

Appearance1365.material = Material1366
ImageTexture1367 = x3d.ImageTexture()
ImageTexture1367.USE = "JinLOA4TextureAtlas"

Appearance1365.texture = ImageTexture1367

Shape1364.appearance = Appearance1365
IndexedFaceSet1368 = x3d.IndexedFaceSet()
IndexedFaceSet1368.coordIndex = [0,3,6,-1,6,8,0,-1,10,7,1,-1,1,5,10,-1,2,1,7,-1,7,9,2,-1,8,11,4,-1,4,0,8,-1,14,15,12,-1,12,13,14,-1,34,35,32,-1,32,33,34,-1,25,28,29,-1,29,24,25,-1,17,18,19,-1,19,20,17,-1,25,26,27,-1,27,28,25,-1,20,21,16,-1,16,17,20,-1,6,3,13,-1,13,12,6,-1,24,29,30,-1,30,31,24,-1,2,9,15,-1,15,14,2,-1,16,21,22,-1,22,23,16,-1,9,7,17,-1,17,16,9,-1,7,10,18,-1,18,17,7,-1,10,11,19,-1,19,18,10,-1,11,8,20,-1,20,19,11,-1,8,6,21,-1,21,20,8,-1,6,12,22,-1,22,21,6,-1,12,15,23,-1,23,22,12,-1,15,9,16,-1,16,23,15,-1,3,0,25,-1,25,24,3,-1,0,4,26,-1,26,25,0,-1,4,5,27,-1,27,26,4,-1,5,1,28,-1,28,27,5,-1,1,2,29,-1,29,28,1,-1,2,14,30,-1,30,29,2,-1,14,13,31,-1,31,30,14,-1,13,3,24,-1,24,31,13,-1,10,5,33,-1,33,32,10,-1,5,4,34,-1,34,33,5,-1,4,11,35,-1,35,34,4,-1,11,10,32,-1,32,35,11,-1]
IndexedFaceSet1368.creaseAngle = 3.14159
IndexedFaceSet1368.texCoordIndex = [2,3,0,-1,0,1,2,-1,39,36,37,-1,37,38,39,-1,40,37,36,-1,36,41,40,-1,1,10,11,-1,11,2,1,-1,12,13,14,-1,14,15,12,-1,43,44,45,-1,45,46,43,-1,20,21,22,-1,22,23,20,-1,48,49,50,-1,50,51,48,-1,20,28,29,-1,29,21,20,-1,27,30,31,-1,31,24,27,-1,0,3,15,-1,15,14,0,-1,23,22,32,-1,32,33,23,-1,8,9,13,-1,13,12,8,-1,31,30,34,-1,34,35,31,-1,9,4,24,-1,24,31,9,-1,36,39,49,-1,49,48,36,-1,7,10,26,-1,26,25,7,-1,10,1,27,-1,27,26,10,-1,1,0,30,-1,30,27,1,-1,0,14,34,-1,34,30,0,-1,14,13,35,-1,35,34,14,-1,13,9,31,-1,31,35,13,-1,3,2,20,-1,20,23,3,-1,2,11,28,-1,28,20,2,-1,42,38,53,-1,53,52,42,-1,38,37,47,-1,47,53,38,-1,5,8,22,-1,22,21,5,-1,8,12,32,-1,32,22,8,-1,12,15,33,-1,33,32,12,-1,15,3,23,-1,23,33,15,-1,39,38,46,-1,46,45,39,-1,6,11,16,-1,16,19,6,-1,11,10,17,-1,17,16,11,-1,10,7,18,-1,18,17,10,-1]
Coordinate1369 = x3d.Coordinate()

IndexedFaceSet1368.coord = Coordinate1369
TextureCoordinate1370 = x3d.TextureCoordinate()

IndexedFaceSet1368.texCoord = TextureCoordinate1370

Shape1364.geometry = IndexedFaceSet1368

Transform1363.children.append(Shape1364)

HAnimSegment1362.children.append(Transform1363)

HAnimJoint1361.children.append(HAnimSegment1362)
HAnimJoint1371 = x3d.HAnimJoint()
HAnimJoint1371.name = "r_metacarpophalangeal_3"
HAnimJoint1371.DEF = "hanim_r_metacarpophalangeal_3"
HAnimJoint1371.center = [-0.1833075,0.7873379721000001,-0.00391725]
HAnimJoint1371.ulimit = [0,0,0]
HAnimJoint1371.llimit = [0,0,0]
HAnimSegment1372 = x3d.HAnimSegment()
HAnimSegment1372.name = "r_carpal_proximal_phalanx_3"
HAnimSegment1372.DEF = "hanim_r_carpal_proximal_phalanx_3"
Transform1373 = x3d.Transform()
Transform1373.translation = [-0.1833075,0.7873379721000001,-0.00391725]
Shape1374 = x3d.Shape()
Appearance1375 = x3d.Appearance()
Material1376 = x3d.Material()
Material1376.diffuseColor = [0.588,0.588,0.588]

Appearance1375.material = Material1376
ImageTexture1377 = x3d.ImageTexture()
ImageTexture1377.USE = "JinLOA4TextureAtlas"

Appearance1375.texture = ImageTexture1377

Shape1374.appearance = Appearance1375
IndexedFaceSet1378 = x3d.IndexedFaceSet()
IndexedFaceSet1378.coordIndex = [3,21,26,-1,26,4,3,-1,5,25,27,-1,27,6,5,-1,4,26,23,-1,0,5,6,-1,6,14,0,-1,4,1,17,-1,17,3,4,-1,0,2,7,-1,7,5,0,-1,7,2,1,-1,1,4,7,-1,7,22,24,-1,24,5,7,-1,4,23,22,-1,22,7,4,-1,24,25,5,-1,15,17,11,-1,11,13,15,-1,0,14,10,-1,10,8,0,-1,17,1,9,-1,9,11,17,-1,2,0,8,-1,8,12,2,-1,1,2,12,-1,12,9,1,-1,14,15,13,-1,13,10,14,-1,10,13,12,-1,12,8,10,-1,11,9,12,-1,12,13,11,-1,3,18,21,-1,14,6,16,-1,16,15,14,-1,16,3,17,-1,17,15,16,-1,16,6,19,-1,19,20,16,-1,3,16,20,-1,20,18,3,-1,19,6,27,-1,31,28,29,-1,29,30,31,-1,26,21,29,-1,29,28,26,-1,33,34,35,-1,32,33,35,-1,38,32,35,-1,38,35,36,-1,38,36,37,-1,27,25,31,-1,31,30,27,-1,44,45,39,-1,39,40,41,-1,44,39,41,-1,44,41,42,-1,44,42,43,-1,18,20,33,-1,33,32,18,-1,20,19,34,-1,34,33,20,-1,19,27,35,-1,35,34,19,-1,27,30,36,-1,36,35,27,-1,30,29,37,-1,37,36,30,-1,29,21,38,-1,38,37,29,-1,21,18,32,-1,32,38,21,-1,22,23,40,-1,40,39,22,-1,23,26,41,-1,41,40,23,-1,26,28,42,-1,42,41,26,-1,28,31,43,-1,43,42,28,-1,31,25,44,-1,44,43,31,-1,25,24,45,-1,45,44,25,-1,24,22,39,-1,39,45,24,-1]
IndexedFaceSet1378.creaseAngle = 3.14159
IndexedFaceSet1378.texCoordIndex = [0,1,2,-1,2,3,0,-1,4,46,47,-1,47,7,4,-1,3,2,8,-1,9,4,7,-1,7,10,9,-1,3,11,12,-1,12,0,3,-1,9,48,49,-1,49,4,9,-1,14,13,11,-1,11,3,14,-1,49,50,51,-1,51,4,49,-1,3,8,15,-1,15,14,3,-1,51,46,4,-1,17,12,18,-1,18,19,17,-1,9,10,20,-1,20,21,9,-1,12,11,22,-1,22,18,12,-1,48,9,21,-1,21,54,48,-1,11,13,23,-1,23,22,11,-1,10,52,53,-1,53,20,10,-1,20,53,54,-1,54,21,20,-1,18,22,23,-1,23,19,18,-1,0,24,1,-1,10,7,55,-1,55,52,10,-1,25,0,12,-1,12,17,25,-1,55,7,56,-1,56,57,55,-1,0,25,27,-1,27,24,0,-1,56,7,47,-1,31,28,29,-1,29,30,31,-1,2,1,29,-1,29,28,2,-1,34,35,36,-1,33,34,36,-1,32,33,36,-1,32,36,37,-1,32,37,38,-1,6,5,31,-1,31,30,6,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,39,43,44,-1,39,44,45,-1,24,27,34,-1,34,33,24,-1,27,26,35,-1,35,34,27,-1,26,6,36,-1,36,35,26,-1,6,30,37,-1,37,36,6,-1,30,29,38,-1,38,37,30,-1,29,1,32,-1,32,38,29,-1,1,24,33,-1,33,32,1,-1,15,8,42,-1,42,41,15,-1,8,2,43,-1,43,42,8,-1,2,28,44,-1,44,43,2,-1,28,31,45,-1,45,44,28,-1,31,5,39,-1,39,45,31,-1,5,16,40,-1,40,39,5,-1,16,15,41,-1,41,40,16,-1]
Coordinate1379 = x3d.Coordinate()

IndexedFaceSet1378.coord = Coordinate1379
TextureCoordinate1380 = x3d.TextureCoordinate()

IndexedFaceSet1378.texCoord = TextureCoordinate1380

Shape1374.geometry = IndexedFaceSet1378

Transform1373.children.append(Shape1374)

HAnimSegment1372.children.append(Transform1373)

HAnimJoint1371.children.append(HAnimSegment1372)
HAnimJoint1381 = x3d.HAnimJoint()
HAnimJoint1381.name = "r_carpal_proximal_interphalangeal_3"
HAnimJoint1381.DEF = "hanim_r_carpal_proximal_interphalangeal_3"
HAnimJoint1381.center = [-0.18132749999999997,0.7479989721000001,-0.003537]
HAnimJoint1381.ulimit = [0,0,0]
HAnimJoint1381.llimit = [0,0,0]
HAnimSegment1382 = x3d.HAnimSegment()
HAnimSegment1382.name = "r_carpal_middle_phalanx_3"
HAnimSegment1382.DEF = "hanim_r_carpal_middle_phalanx_3"
Transform1383 = x3d.Transform()
Transform1383.translation = [-0.18132749999999997,0.7479989721000001,-0.003537]
Shape1384 = x3d.Shape()
Appearance1385 = x3d.Appearance()
Material1386 = x3d.Material()
Material1386.diffuseColor = [0.588,0.588,0.588]

Appearance1385.material = Material1386
ImageTexture1387 = x3d.ImageTexture()
ImageTexture1387.USE = "JinLOA4TextureAtlas"

Appearance1385.texture = ImageTexture1387

Shape1384.appearance = Appearance1385
IndexedFaceSet1388 = x3d.IndexedFaceSet()
IndexedFaceSet1388.coordIndex = [1,7,14,-1,14,15,1,-1,8,3,14,-1,1,18,5,-1,5,7,1,-1,3,4,21,-1,21,2,3,-1,6,4,3,-1,3,8,6,-1,6,13,4,-1,0,13,5,-1,5,18,0,-1,13,0,21,-1,21,4,13,-1,2,15,14,-1,14,3,2,-1,8,11,12,-1,12,6,8,-1,7,5,9,-1,9,10,7,-1,10,9,12,-1,12,11,10,-1,8,14,10,-1,10,11,8,-1,13,6,12,-1,12,9,13,-1,9,5,13,-1,7,10,14,-1,15,2,16,-1,16,17,15,-1,18,1,19,-1,19,20,18,-1,2,21,22,-1,22,16,2,-1,0,18,20,-1,20,23,0,-1,21,0,23,-1,23,22,21,-1,1,15,17,-1,17,19,1,-1,19,17,23,-1,23,20,19,-1,16,22,23,-1,23,17,16,-1]
IndexedFaceSet1388.creaseAngle = 3.14159
IndexedFaceSet1388.texCoordIndex = [3,0,24,-1,24,25,3,-1,4,5,1,-1,3,6,7,-1,7,0,3,-1,5,8,9,-1,9,10,5,-1,11,8,5,-1,5,4,11,-1,11,12,8,-1,27,26,7,-1,7,6,27,-1,12,13,9,-1,9,8,12,-1,10,2,1,-1,1,5,10,-1,4,14,15,-1,15,11,4,-1,0,7,29,-1,29,28,0,-1,16,17,15,-1,15,14,16,-1,4,1,16,-1,16,14,4,-1,12,11,15,-1,15,17,12,-1,29,7,26,-1,0,28,24,-1,2,10,18,-1,18,19,2,-1,6,3,20,-1,20,21,6,-1,10,9,22,-1,22,18,10,-1,27,6,21,-1,21,31,27,-1,9,13,23,-1,23,22,9,-1,3,25,30,-1,30,20,3,-1,20,30,31,-1,31,21,20,-1,18,22,23,-1,23,19,18,-1]
Coordinate1389 = x3d.Coordinate()

IndexedFaceSet1388.coord = Coordinate1389
TextureCoordinate1390 = x3d.TextureCoordinate()

IndexedFaceSet1388.texCoord = TextureCoordinate1390

Shape1384.geometry = IndexedFaceSet1388

Transform1383.children.append(Shape1384)

HAnimSegment1382.children.append(Transform1383)

HAnimJoint1381.children.append(HAnimSegment1382)
HAnimJoint1391 = x3d.HAnimJoint()
HAnimJoint1391.name = "r_carpal_distal_interphalangeal_3"
HAnimJoint1391.DEF = "hanim_r_carpal_distal_interphalangeal_3"
HAnimJoint1391.center = [-0.1802925,0.713403,-0.0037597499999999996]
HAnimJoint1391.ulimit = [0,0,0]
HAnimJoint1391.llimit = [0,0,0]
HAnimSegment1392 = x3d.HAnimSegment()
HAnimSegment1392.name = "r_carpal_distal_phalanx_3"
HAnimSegment1392.DEF = "hanim_r_carpal_distal_phalanx_3"
Transform1393 = x3d.Transform()
Transform1393.translation = [-0.1802925,0.713403,-0.0037597499999999996]
Shape1394 = x3d.Shape()
Appearance1395 = x3d.Appearance()
Material1396 = x3d.Material()
Material1396.diffuseColor = [0.588,0.588,0.588]

Appearance1395.material = Material1396
ImageTexture1397 = x3d.ImageTexture()
ImageTexture1397.USE = "JinLOA4TextureAtlas"

Appearance1395.texture = ImageTexture1397

Shape1394.appearance = Appearance1395
IndexedFaceSet1398 = x3d.IndexedFaceSet()
IndexedFaceSet1398.coordIndex = [0,31,25,-1,24,32,1,-1,1,3,2,-1,2,0,1,-1,31,5,4,-1,4,23,31,-1,0,2,5,-1,5,31,0,-1,23,4,6,-1,6,29,23,-1,32,7,3,-1,3,1,32,-1,29,6,7,-1,7,32,29,-1,2,14,17,-1,17,8,2,-1,5,11,10,-1,10,4,5,-1,2,8,11,-1,11,5,2,-1,10,21,18,-1,18,12,10,-1,7,13,9,-1,9,3,7,-1,6,12,13,-1,13,7,6,-1,8,17,19,-1,19,11,8,-1,19,21,10,-1,10,11,19,-1,25,24,1,-1,1,0,25,-1,14,20,22,-1,22,16,14,-1,15,16,22,-1,22,18,15,-1,3,9,20,-1,20,14,3,-1,14,2,3,-1,4,10,12,-1,12,6,4,-1,21,15,18,-1,14,16,19,-1,19,17,14,-1,19,16,15,-1,15,21,19,-1,9,13,22,-1,22,20,9,-1,22,13,12,-1,12,18,22,-1,25,26,27,-1,27,24,25,-1,23,29,30,-1,30,28,23,-1,28,30,27,-1,27,26,28,-1,25,31,28,-1,28,26,25,-1,32,24,27,-1,27,30,32,-1,30,29,32,-1,23,28,31,-1]
IndexedFaceSet1398.creaseAngle = 3.14159
IndexedFaceSet1398.texCoordIndex = [0,1,2,-1,3,4,5,-1,5,6,7,-1,7,0,5,-1,33,35,9,-1,9,10,33,-1,0,7,8,-1,8,1,0,-1,10,9,11,-1,11,12,10,-1,4,13,6,-1,6,5,4,-1,12,11,36,-1,36,34,12,-1,7,14,15,-1,15,16,7,-1,35,37,18,-1,18,9,35,-1,7,16,17,-1,17,8,7,-1,18,20,21,-1,21,19,18,-1,13,22,23,-1,23,6,13,-1,11,19,38,-1,38,36,11,-1,16,15,24,-1,24,17,16,-1,39,20,18,-1,18,37,39,-1,2,3,5,-1,5,0,2,-1,14,26,27,-1,27,25,14,-1,28,40,41,-1,41,21,28,-1,6,23,26,-1,26,14,6,-1,14,7,6,-1,9,18,19,-1,19,11,9,-1,20,28,21,-1,14,25,24,-1,24,15,14,-1,39,40,28,-1,28,20,39,-1,23,22,27,-1,27,26,23,-1,41,38,19,-1,19,21,41,-1,2,29,30,-1,30,3,2,-1,10,12,43,-1,43,42,10,-1,31,32,30,-1,30,29,31,-1,2,1,31,-1,31,29,2,-1,4,3,30,-1,30,32,4,-1,43,12,34,-1,10,42,33,-1]
Coordinate1399 = x3d.Coordinate()

IndexedFaceSet1398.coord = Coordinate1399
TextureCoordinate1400 = x3d.TextureCoordinate()

IndexedFaceSet1398.texCoord = TextureCoordinate1400

Shape1394.geometry = IndexedFaceSet1398

Transform1393.children.append(Shape1394)

HAnimSegment1392.children.append(Transform1393)

HAnimJoint1391.children.append(HAnimSegment1392)

HAnimJoint1381.children.append(HAnimJoint1391)

HAnimJoint1371.children.append(HAnimJoint1381)

HAnimJoint1361.children.append(HAnimJoint1371)

HAnimJoint1351.children.append(HAnimJoint1361)

HAnimJoint1251.children.append(HAnimJoint1351)
HAnimJoint1401 = x3d.HAnimJoint()
HAnimJoint1401.name = "r_midcarpal_4_5"
HAnimJoint1401.DEF = "hanim_r_midcarpal_4_5"
HAnimJoint1401.center = [-0.18072,0.8752230279,-0.025739999999999996]
HAnimJoint1401.ulimit = [0,0,0]
HAnimJoint1401.llimit = [0,0,0]
HAnimSegment1402 = x3d.HAnimSegment()
HAnimSegment1402.name = "r_hamate"
HAnimSegment1402.DEF = "hanim_r_hamate"
Transform1403 = x3d.Transform()
Transform1403.translation = [-0.18072,0.8752230279,-0.025739999999999996]
Shape1404 = x3d.Shape()
Appearance1405 = x3d.Appearance()
Material1406 = x3d.Material()
Material1406.diffuseColor = [0.588,0.588,0.588]

Appearance1405.material = Material1406
ImageTexture1407 = x3d.ImageTexture()
ImageTexture1407.USE = "JinLOA4TextureAtlas"

Appearance1405.texture = ImageTexture1407

Shape1404.appearance = Appearance1405
IndexedFaceSet1408 = x3d.IndexedFaceSet()
IndexedFaceSet1408.coordIndex = [6,3,4,-1,4,7,6,-1,7,0,9,-1,9,8,7,-1,11,2,1,-1,1,5,11,-1,5,1,3,-1,3,6,5,-1,2,11,10,-1,4,0,7,-1,15,16,17,-1,14,15,17,-1,13,14,17,-1,20,21,22,-1,27,24,25,-1,25,26,27,-1,17,18,12,-1,12,13,17,-1,23,19,20,-1,20,22,23,-1,9,0,13,-1,13,12,9,-1,0,4,14,-1,14,13,0,-1,4,3,15,-1,15,14,4,-1,3,1,16,-1,16,15,3,-1,1,2,17,-1,17,16,1,-1,2,10,18,-1,18,17,2,-1,10,9,12,-1,12,18,10,-1,11,5,20,-1,20,19,11,-1,5,6,21,-1,21,20,5,-1,6,7,22,-1,22,21,6,-1,7,8,23,-1,23,22,7,-1,8,11,19,-1,19,23,8,-1,8,9,25,-1,25,24,8,-1,9,10,26,-1,26,25,9,-1,10,11,27,-1,27,26,10,-1,11,8,24,-1,24,27,11,-1]
IndexedFaceSet1408.creaseAngle = 3.14159
IndexedFaceSet1408.texCoordIndex = [0,1,2,-1,2,3,0,-1,3,4,5,-1,5,6,3,-1,7,8,9,-1,9,10,7,-1,10,9,29,-1,29,28,10,-1,8,7,11,-1,2,4,3,-1,14,15,16,-1,13,14,16,-1,12,13,16,-1,35,36,37,-1,23,38,39,-1,39,22,23,-1,16,24,25,-1,25,12,16,-1,26,27,17,-1,17,19,26,-1,5,4,12,-1,12,25,5,-1,4,2,13,-1,13,12,4,-1,2,1,14,-1,14,13,2,-1,29,9,33,-1,33,32,29,-1,9,8,34,-1,34,33,9,-1,8,11,40,-1,40,34,8,-1,11,30,41,-1,41,40,11,-1,7,10,35,-1,35,43,7,-1,10,28,36,-1,36,35,10,-1,0,3,19,-1,19,18,0,-1,3,6,26,-1,26,19,3,-1,31,7,43,-1,43,42,31,-1,6,5,21,-1,21,20,6,-1,30,11,22,-1,22,39,30,-1,11,7,23,-1,23,22,11,-1,7,31,38,-1,38,23,7,-1]
Coordinate1409 = x3d.Coordinate()

IndexedFaceSet1408.coord = Coordinate1409
TextureCoordinate1410 = x3d.TextureCoordinate()

IndexedFaceSet1408.texCoord = TextureCoordinate1410

Shape1404.geometry = IndexedFaceSet1408

Transform1403.children.append(Shape1404)

HAnimSegment1402.children.append(Transform1403)

HAnimJoint1401.children.append(HAnimSegment1402)
HAnimJoint1411 = x3d.HAnimJoint()
HAnimJoint1411.name = "r_carpometacarpal_4"
HAnimJoint1411.DEF = "hanim_r_carpometacarpal_4"
HAnimJoint1411.center = [-0.18072,0.85095,-0.01991925]
HAnimJoint1411.ulimit = [0,0,0]
HAnimJoint1411.llimit = [0,0,0]
HAnimSegment1412 = x3d.HAnimSegment()
HAnimSegment1412.name = "r_metacarpal_4"
HAnimSegment1412.DEF = "hanim_r_metacarpal_4"
Transform1413 = x3d.Transform()
Transform1413.translation = [-0.18072,0.85095,-0.01991925]
Shape1414 = x3d.Shape()
Appearance1415 = x3d.Appearance()
Material1416 = x3d.Material()
Material1416.diffuseColor = [0.588,0.588,0.588]

Appearance1415.material = Material1416
ImageTexture1417 = x3d.ImageTexture()
ImageTexture1417.USE = "JinLOA4TextureAtlas"

Appearance1415.texture = ImageTexture1417

Shape1414.appearance = Appearance1415
IndexedFaceSet1418 = x3d.IndexedFaceSet()
IndexedFaceSet1418.coordIndex = [9,6,0,-1,0,2,9,-1,6,10,4,-1,4,0,6,-1,7,8,3,-1,3,1,7,-1,7,1,5,-1,5,11,7,-1,12,13,14,-1,14,15,12,-1,34,35,32,-1,32,33,34,-1,17,20,21,-1,21,16,17,-1,29,30,31,-1,31,24,29,-1,17,18,19,-1,19,20,17,-1,24,25,28,-1,28,29,24,-1,9,2,13,-1,13,12,9,-1,16,21,22,-1,22,23,16,-1,3,8,15,-1,15,14,3,-1,28,25,26,-1,26,27,28,-1,2,0,17,-1,17,16,2,-1,0,4,18,-1,18,17,0,-1,4,5,19,-1,19,18,4,-1,5,1,20,-1,20,19,5,-1,1,3,21,-1,21,20,1,-1,3,14,22,-1,22,21,3,-1,14,13,23,-1,23,22,14,-1,13,2,16,-1,16,23,13,-1,6,9,25,-1,25,24,6,-1,9,12,26,-1,26,25,9,-1,12,15,27,-1,27,26,12,-1,15,8,28,-1,28,27,15,-1,8,7,29,-1,29,28,8,-1,7,11,30,-1,30,29,7,-1,11,10,31,-1,31,30,11,-1,10,6,24,-1,24,31,10,-1,4,10,33,-1,33,32,4,-1,10,11,34,-1,34,33,10,-1,11,5,35,-1,35,34,11,-1,5,4,32,-1,32,35,5,-1]
IndexedFaceSet1418.creaseAngle = 3.14159
IndexedFaceSet1418.texCoordIndex = [0,1,2,-1,2,3,0,-1,1,4,5,-1,5,2,1,-1,38,39,40,-1,40,9,38,-1,38,9,41,-1,41,42,38,-1,12,13,14,-1,14,15,12,-1,16,43,44,-1,44,45,16,-1,20,21,22,-1,22,23,20,-1,48,49,50,-1,50,51,48,-1,20,28,29,-1,29,21,20,-1,27,30,31,-1,31,24,27,-1,0,3,13,-1,13,12,0,-1,23,22,32,-1,32,33,23,-1,8,7,15,-1,15,14,8,-1,31,30,34,-1,34,35,31,-1,3,2,20,-1,20,23,3,-1,2,5,28,-1,28,20,2,-1,37,41,53,-1,53,52,37,-1,41,9,46,-1,46,53,41,-1,9,40,47,-1,47,46,9,-1,8,14,32,-1,32,22,8,-1,14,13,33,-1,33,32,14,-1,13,3,23,-1,23,33,13,-1,1,0,30,-1,30,27,1,-1,0,12,34,-1,34,30,0,-1,12,15,35,-1,35,34,12,-1,15,7,31,-1,31,35,15,-1,7,6,24,-1,24,31,7,-1,38,42,49,-1,49,48,38,-1,11,4,26,-1,26,25,11,-1,4,1,27,-1,27,26,4,-1,5,4,19,-1,19,18,5,-1,36,42,16,-1,16,45,36,-1,42,41,43,-1,43,16,42,-1,10,5,18,-1,18,17,10,-1]
Coordinate1419 = x3d.Coordinate()

IndexedFaceSet1418.coord = Coordinate1419
TextureCoordinate1420 = x3d.TextureCoordinate()

IndexedFaceSet1418.texCoord = TextureCoordinate1420

Shape1414.geometry = IndexedFaceSet1418

Transform1413.children.append(Shape1414)

HAnimSegment1412.children.append(Transform1413)

HAnimJoint1411.children.append(HAnimSegment1412)
HAnimJoint1421 = x3d.HAnimJoint()
HAnimJoint1421.name = "r_metacarpophalangeal_4"
HAnimJoint1421.DEF = "hanim_r_metacarpophalangeal_4"
HAnimJoint1421.center = [-0.1833075,0.786222,-0.021440249999999998]
HAnimJoint1421.ulimit = [0,0,0]
HAnimJoint1421.llimit = [0,0,0]
HAnimSegment1422 = x3d.HAnimSegment()
HAnimSegment1422.name = "r_carpal_proximal_phalanx_4"
HAnimSegment1422.DEF = "hanim_r_carpal_proximal_phalanx_4"
Transform1423 = x3d.Transform()
Transform1423.translation = [-0.1833075,0.786222,-0.021440249999999998]
Shape1424 = x3d.Shape()
Appearance1425 = x3d.Appearance()
Material1426 = x3d.Material()
Material1426.diffuseColor = [0.588,0.588,0.588]

Appearance1425.material = Material1426
ImageTexture1427 = x3d.ImageTexture()
ImageTexture1427.USE = "JinLOA4TextureAtlas"

Appearance1425.texture = ImageTexture1427

Shape1424.appearance = Appearance1425
IndexedFaceSet1428 = x3d.IndexedFaceSet()
IndexedFaceSet1428.coordIndex = [3,23,22,-1,22,4,3,-1,5,32,31,-1,31,6,5,-1,4,22,44,-1,0,5,6,-1,6,14,0,-1,4,1,17,-1,17,3,4,-1,0,2,7,-1,7,5,0,-1,7,2,1,-1,1,4,7,-1,7,43,45,-1,45,5,7,-1,4,44,43,-1,43,7,4,-1,45,32,5,-1,15,17,11,-1,11,13,15,-1,0,14,10,-1,10,8,0,-1,17,1,9,-1,9,11,17,-1,2,0,8,-1,8,12,2,-1,1,2,12,-1,12,9,1,-1,14,15,13,-1,13,10,14,-1,10,13,12,-1,12,8,10,-1,11,9,12,-1,12,13,11,-1,3,40,23,-1,14,6,16,-1,16,15,14,-1,16,3,17,-1,17,15,16,-1,16,6,42,-1,42,41,16,-1,3,16,41,-1,41,40,3,-1,42,6,31,-1,21,18,19,-1,19,20,21,-1,22,23,19,-1,19,18,22,-1,26,27,28,-1,25,26,28,-1,24,25,28,-1,24,28,29,-1,24,29,30,-1,31,32,21,-1,21,20,31,-1,33,34,35,-1,35,36,37,-1,33,35,37,-1,33,37,38,-1,33,38,39,-1,40,41,26,-1,26,25,40,-1,41,42,27,-1,27,26,41,-1,42,31,28,-1,28,27,42,-1,31,20,29,-1,29,28,31,-1,20,19,30,-1,30,29,20,-1,19,23,24,-1,24,30,19,-1,23,40,25,-1,25,24,23,-1,43,44,36,-1,36,35,43,-1,44,22,37,-1,37,36,44,-1,22,18,38,-1,38,37,22,-1,18,21,39,-1,39,38,18,-1,21,32,33,-1,33,39,21,-1,32,45,34,-1,34,33,32,-1,45,43,35,-1,35,34,45,-1]
IndexedFaceSet1428.creaseAngle = 3.14159
IndexedFaceSet1428.texCoordIndex = [0,1,2,-1,2,3,0,-1,4,46,47,-1,47,7,4,-1,3,2,8,-1,9,4,7,-1,7,10,9,-1,3,11,12,-1,12,0,3,-1,9,48,49,-1,49,4,9,-1,14,13,11,-1,11,3,14,-1,49,50,51,-1,51,4,49,-1,3,8,15,-1,15,14,3,-1,51,46,4,-1,17,12,18,-1,18,19,17,-1,9,10,20,-1,20,21,9,-1,12,11,22,-1,22,18,12,-1,48,9,21,-1,21,54,48,-1,11,13,23,-1,23,22,11,-1,10,52,53,-1,53,20,10,-1,20,53,54,-1,54,21,20,-1,18,22,23,-1,23,19,18,-1,0,24,1,-1,10,7,55,-1,55,52,10,-1,25,0,12,-1,12,17,25,-1,55,7,56,-1,56,57,55,-1,0,25,27,-1,27,24,0,-1,56,7,47,-1,31,28,29,-1,29,30,31,-1,2,1,29,-1,29,28,2,-1,34,35,36,-1,33,34,36,-1,32,33,36,-1,32,36,37,-1,32,37,38,-1,6,5,31,-1,31,30,6,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,39,43,44,-1,39,44,45,-1,24,27,34,-1,34,33,24,-1,27,26,35,-1,35,34,27,-1,26,6,36,-1,36,35,26,-1,6,30,37,-1,37,36,6,-1,30,29,38,-1,38,37,30,-1,29,1,32,-1,32,38,29,-1,1,24,33,-1,33,32,1,-1,15,8,42,-1,42,41,15,-1,8,2,43,-1,43,42,8,-1,2,28,44,-1,44,43,2,-1,28,31,45,-1,45,44,28,-1,31,5,39,-1,39,45,31,-1,5,16,40,-1,40,39,5,-1,16,15,41,-1,41,40,16,-1]
Coordinate1429 = x3d.Coordinate()

IndexedFaceSet1428.coord = Coordinate1429
TextureCoordinate1430 = x3d.TextureCoordinate()

IndexedFaceSet1428.texCoord = TextureCoordinate1430

Shape1424.geometry = IndexedFaceSet1428

Transform1423.children.append(Shape1424)

HAnimSegment1422.children.append(Transform1423)

HAnimJoint1421.children.append(HAnimSegment1422)
HAnimJoint1431 = x3d.HAnimJoint()
HAnimJoint1431.name = "r_carpal_proximal_interphalangeal_4"
HAnimJoint1431.DEF = "hanim_r_carpal_proximal_interphalangeal_4"
HAnimJoint1431.center = [-0.18132749999999997,0.7521839721,-0.020645999999999998]
HAnimJoint1431.ulimit = [0,0,0]
HAnimJoint1431.llimit = [0,0,0]
HAnimSegment1432 = x3d.HAnimSegment()
HAnimSegment1432.name = "r_carpal_middle_phalanx_4"
HAnimSegment1432.DEF = "hanim_r_carpal_middle_phalanx_4"
Transform1433 = x3d.Transform()
Transform1433.translation = [-0.18132749999999997,0.7521839721,-0.020645999999999998]
Shape1434 = x3d.Shape()
Appearance1435 = x3d.Appearance()
Material1436 = x3d.Material()
Material1436.diffuseColor = [0.588,0.588,0.588]

Appearance1435.material = Material1436
ImageTexture1437 = x3d.ImageTexture()
ImageTexture1437.USE = "JinLOA4TextureAtlas"

Appearance1435.texture = ImageTexture1437

Shape1434.appearance = Appearance1435
IndexedFaceSet1438 = x3d.IndexedFaceSet()
IndexedFaceSet1438.coordIndex = [1,7,14,-1,14,15,1,-1,8,3,14,-1,1,18,5,-1,5,7,1,-1,3,4,21,-1,21,2,3,-1,6,4,3,-1,3,8,6,-1,6,13,4,-1,0,13,5,-1,5,18,0,-1,13,0,21,-1,21,4,13,-1,2,15,14,-1,14,3,2,-1,8,11,12,-1,12,6,8,-1,7,5,9,-1,9,10,7,-1,10,9,12,-1,12,11,10,-1,8,14,10,-1,10,11,8,-1,13,6,12,-1,12,9,13,-1,9,5,13,-1,7,10,14,-1,15,2,16,-1,16,17,15,-1,18,1,19,-1,19,20,18,-1,2,21,22,-1,22,16,2,-1,0,18,20,-1,20,23,0,-1,21,0,23,-1,23,22,21,-1,1,15,17,-1,17,19,1,-1,19,17,23,-1,23,20,19,-1,16,22,23,-1,23,17,16,-1]
IndexedFaceSet1438.creaseAngle = 3.14159
IndexedFaceSet1438.texCoordIndex = [3,0,24,-1,24,25,3,-1,4,5,1,-1,3,6,7,-1,7,0,3,-1,5,8,9,-1,9,10,5,-1,11,8,5,-1,5,4,11,-1,11,12,8,-1,27,26,7,-1,7,6,27,-1,12,13,9,-1,9,8,12,-1,10,2,1,-1,1,5,10,-1,4,14,15,-1,15,11,4,-1,0,7,29,-1,29,28,0,-1,16,17,15,-1,15,14,16,-1,4,1,16,-1,16,14,4,-1,12,11,15,-1,15,17,12,-1,29,7,26,-1,0,28,24,-1,2,10,18,-1,18,19,2,-1,6,3,20,-1,20,21,6,-1,10,9,22,-1,22,18,10,-1,27,6,21,-1,21,31,27,-1,9,13,23,-1,23,22,9,-1,3,25,30,-1,30,20,3,-1,20,30,31,-1,31,21,20,-1,18,22,23,-1,23,19,18,-1]
Coordinate1439 = x3d.Coordinate()

IndexedFaceSet1438.coord = Coordinate1439
TextureCoordinate1440 = x3d.TextureCoordinate()

IndexedFaceSet1438.texCoord = TextureCoordinate1440

Shape1434.geometry = IndexedFaceSet1438

Transform1433.children.append(Shape1434)

HAnimSegment1432.children.append(Transform1433)

HAnimJoint1431.children.append(HAnimSegment1432)
HAnimJoint1441 = x3d.HAnimJoint()
HAnimJoint1441.name = "r_carpal_distal_interphalangeal_4"
HAnimJoint1441.DEF = "hanim_r_carpal_distal_interphalangeal_4"
HAnimJoint1441.center = [-0.1802925,0.7200989721000001,-0.0197775]
HAnimJoint1441.ulimit = [0,0,0]
HAnimJoint1441.llimit = [0,0,0]
HAnimSegment1442 = x3d.HAnimSegment()
HAnimSegment1442.name = "r_carpal_distal_phalanx_4"
HAnimSegment1442.DEF = "hanim_r_carpal_distal_phalanx_4"
Transform1443 = x3d.Transform()
Transform1443.translation = [-0.1802925,0.7200989721000001,-0.0197775]
Shape1444 = x3d.Shape()
Appearance1445 = x3d.Appearance()
Material1446 = x3d.Material()
Material1446.diffuseColor = [0.588,0.588,0.588]

Appearance1445.material = Material1446
ImageTexture1447 = x3d.ImageTexture()
ImageTexture1447.USE = "JinLOA4TextureAtlas"

Appearance1445.texture = ImageTexture1447

Shape1444.appearance = Appearance1445
IndexedFaceSet1448 = x3d.IndexedFaceSet()
IndexedFaceSet1448.coordIndex = [0,31,25,-1,24,32,1,-1,1,3,2,-1,2,0,1,-1,31,5,4,-1,4,23,31,-1,0,2,5,-1,5,31,0,-1,23,4,6,-1,6,29,23,-1,32,7,3,-1,3,1,32,-1,29,6,7,-1,7,32,29,-1,2,14,17,-1,17,8,2,-1,5,11,10,-1,10,4,5,-1,2,8,11,-1,11,5,2,-1,10,21,18,-1,18,12,10,-1,7,13,9,-1,9,3,7,-1,6,12,13,-1,13,7,6,-1,8,17,19,-1,19,11,8,-1,19,21,10,-1,10,11,19,-1,25,24,1,-1,1,0,25,-1,14,20,22,-1,22,16,14,-1,15,16,22,-1,22,18,15,-1,3,9,20,-1,20,14,3,-1,14,2,3,-1,4,10,12,-1,12,6,4,-1,21,15,18,-1,14,16,19,-1,19,17,14,-1,19,16,15,-1,15,21,19,-1,9,13,22,-1,22,20,9,-1,22,13,12,-1,12,18,22,-1,25,26,27,-1,27,24,25,-1,23,29,30,-1,30,28,23,-1,28,30,27,-1,27,26,28,-1,25,31,28,-1,28,26,25,-1,32,24,27,-1,27,30,32,-1,30,29,32,-1,23,28,31,-1]
IndexedFaceSet1448.creaseAngle = 3.14159
IndexedFaceSet1448.texCoordIndex = [0,1,2,-1,3,4,5,-1,5,6,7,-1,7,0,5,-1,33,35,9,-1,9,10,33,-1,0,7,8,-1,8,1,0,-1,10,9,11,-1,11,12,10,-1,4,13,6,-1,6,5,4,-1,12,11,36,-1,36,34,12,-1,7,14,15,-1,15,16,7,-1,35,37,18,-1,18,9,35,-1,7,16,17,-1,17,8,7,-1,18,20,21,-1,21,19,18,-1,13,22,23,-1,23,6,13,-1,11,19,38,-1,38,36,11,-1,16,15,24,-1,24,17,16,-1,39,20,18,-1,18,37,39,-1,2,3,5,-1,5,0,2,-1,14,26,27,-1,27,25,14,-1,28,40,41,-1,41,21,28,-1,6,23,26,-1,26,14,6,-1,14,7,6,-1,9,18,19,-1,19,11,9,-1,20,28,21,-1,14,25,24,-1,24,15,14,-1,39,40,28,-1,28,20,39,-1,23,22,27,-1,27,26,23,-1,41,38,19,-1,19,21,41,-1,2,29,30,-1,30,3,2,-1,10,12,43,-1,43,42,10,-1,31,32,30,-1,30,29,31,-1,2,1,31,-1,31,29,2,-1,4,3,30,-1,30,32,4,-1,43,12,34,-1,10,42,33,-1]
Coordinate1449 = x3d.Coordinate()

IndexedFaceSet1448.coord = Coordinate1449
TextureCoordinate1450 = x3d.TextureCoordinate()

IndexedFaceSet1448.texCoord = TextureCoordinate1450

Shape1444.geometry = IndexedFaceSet1448

Transform1443.children.append(Shape1444)

HAnimSegment1442.children.append(Transform1443)

HAnimJoint1441.children.append(HAnimSegment1442)

HAnimJoint1431.children.append(HAnimJoint1441)

HAnimJoint1421.children.append(HAnimJoint1431)

HAnimJoint1411.children.append(HAnimJoint1421)

HAnimJoint1401.children.append(HAnimJoint1411)

HAnimJoint1251.children.append(HAnimJoint1401)
HAnimJoint1451 = x3d.HAnimJoint()
HAnimJoint1451.name = "r_carpometacarpal_5"
HAnimJoint1451.DEF = "hanim_r_carpometacarpal_5"
HAnimJoint1451.center = [-0.18125999999999998,0.853461,-0.0327825]
HAnimJoint1451.ulimit = [0,0,0]
HAnimJoint1451.llimit = [0,0,0]
HAnimSegment1452 = x3d.HAnimSegment()
HAnimSegment1452.name = "r_metacarpal_5"
HAnimSegment1452.DEF = "hanim_r_metacarpal_5"
Transform1453 = x3d.Transform()
Transform1453.translation = [-0.18125999999999998,0.853461,-0.0327825]
Shape1454 = x3d.Shape()
Appearance1455 = x3d.Appearance()
Material1456 = x3d.Material()
Material1456.diffuseColor = [0.588,0.588,0.588]

Appearance1455.material = Material1456
ImageTexture1457 = x3d.ImageTexture()
ImageTexture1457.USE = "JinLOA4TextureAtlas"

Appearance1455.texture = ImageTexture1457

Shape1454.appearance = Appearance1455
IndexedFaceSet1458 = x3d.IndexedFaceSet()
IndexedFaceSet1458.coordIndex = [11,9,0,-1,0,3,11,-1,5,2,1,-1,1,4,5,-1,3,0,2,-1,2,5,3,-1,9,13,8,-1,8,0,9,-1,2,7,6,-1,6,1,2,-1,6,14,10,-1,10,1,6,-1,1,10,12,-1,12,4,1,-1,0,8,7,-1,7,2,0,-1,25,26,27,-1,27,20,25,-1,16,17,18,-1,16,18,19,-1,15,16,19,-1,30,31,32,-1,29,30,32,-1,28,29,32,-1,11,3,16,-1,16,15,11,-1,3,5,17,-1,17,16,3,-1,5,4,18,-1,18,17,5,-1,4,12,19,-1,19,18,4,-1,24,21,22,-1,22,23,24,-1,20,21,24,-1,24,25,20,-1,9,11,21,-1,21,20,9,-1,11,15,22,-1,22,21,11,-1,15,19,23,-1,23,22,15,-1,19,12,24,-1,24,23,19,-1,12,10,25,-1,25,24,12,-1,10,14,26,-1,26,25,10,-1,14,13,27,-1,27,26,14,-1,13,9,20,-1,20,27,13,-1,14,6,29,-1,29,28,14,-1,6,7,30,-1,30,29,6,-1,7,8,31,-1,31,30,7,-1,8,13,32,-1,32,31,8,-1,13,14,28,-1,28,32,13,-1]
IndexedFaceSet1458.creaseAngle = 3.14159
IndexedFaceSet1458.texCoordIndex = [0,1,2,-1,2,3,0,-1,33,34,6,-1,6,35,33,-1,3,2,5,-1,5,4,3,-1,1,8,9,-1,9,2,1,-1,34,37,11,-1,11,6,34,-1,11,12,38,-1,38,6,11,-1,6,38,39,-1,39,35,6,-1,2,9,10,-1,10,5,2,-1,40,16,41,-1,41,42,40,-1,20,21,22,-1,20,22,23,-1,19,20,23,-1,43,44,45,-1,25,43,45,-1,24,25,45,-1,0,3,20,-1,20,19,0,-1,3,4,21,-1,21,20,3,-1,4,7,22,-1,22,21,4,-1,7,14,23,-1,23,22,7,-1,29,30,31,-1,31,32,29,-1,18,30,29,-1,29,15,18,-1,1,0,30,-1,30,18,1,-1,0,19,31,-1,31,30,0,-1,19,23,32,-1,32,31,19,-1,23,14,29,-1,29,32,23,-1,14,13,15,-1,15,29,14,-1,38,12,16,-1,16,40,38,-1,12,36,41,-1,41,16,12,-1,8,1,18,-1,18,17,8,-1,12,11,25,-1,25,24,12,-1,11,37,43,-1,43,25,11,-1,10,9,27,-1,27,26,10,-1,9,8,28,-1,28,27,9,-1,36,12,24,-1,24,45,36,-1]
Coordinate1459 = x3d.Coordinate()

IndexedFaceSet1458.coord = Coordinate1459
TextureCoordinate1460 = x3d.TextureCoordinate()

IndexedFaceSet1458.texCoord = TextureCoordinate1460

Shape1454.geometry = IndexedFaceSet1458

Transform1453.children.append(Shape1454)

HAnimSegment1452.children.append(Transform1453)

HAnimJoint1451.children.append(HAnimSegment1452)
HAnimJoint1461 = x3d.HAnimJoint()
HAnimJoint1461.name = "r_metacarpophalangeal_5"
HAnimJoint1461.DEF = "hanim_r_metacarpophalangeal_5"
HAnimJoint1461.center = [-0.18297,0.7912440279,-0.0370575]
HAnimJoint1461.ulimit = [0,0,0]
HAnimJoint1461.llimit = [0,0,0]
HAnimSegment1462 = x3d.HAnimSegment()
HAnimSegment1462.name = "r_carpal_proximal_phalanx_5"
HAnimSegment1462.DEF = "hanim_r_carpal_proximal_phalanx_5"
Transform1463 = x3d.Transform()
Transform1463.translation = [-0.18297,0.7912440279,-0.0370575]
Shape1464 = x3d.Shape()
Appearance1465 = x3d.Appearance()
Material1466 = x3d.Material()
Material1466.diffuseColor = [0.588,0.588,0.588]

Appearance1465.material = Material1466
ImageTexture1467 = x3d.ImageTexture()
ImageTexture1467.USE = "JinLOA4TextureAtlas"

Appearance1465.texture = ImageTexture1467

Shape1464.appearance = Appearance1465
IndexedFaceSet1468 = x3d.IndexedFaceSet()
IndexedFaceSet1468.coordIndex = [10,11,6,-1,6,8,10,-1,0,9,5,-1,5,3,0,-1,11,1,4,-1,4,6,11,-1,2,0,3,-1,3,7,2,-1,1,2,7,-1,7,4,1,-1,9,10,8,-1,8,5,9,-1,5,8,7,-1,7,3,5,-1,6,4,7,-1,7,8,6,-1,17,2,1,-1,1,13,17,-1,14,25,26,-1,26,15,14,-1,0,14,15,-1,15,9,0,-1,13,1,11,-1,11,12,13,-1,2,17,14,-1,14,0,2,-1,12,36,34,-1,9,15,16,-1,16,10,9,-1,16,12,11,-1,11,10,16,-1,16,15,37,-1,37,35,16,-1,12,16,35,-1,35,36,12,-1,37,15,26,-1,12,34,23,-1,23,13,12,-1,13,23,24,-1,24,17,13,-1,17,24,25,-1,25,14,17,-1,21,20,19,-1,22,21,19,-1,18,22,19,-1,23,19,20,-1,20,24,23,-1,24,20,21,-1,21,25,24,-1,25,21,22,-1,22,26,25,-1,27,33,32,-1,27,32,31,-1,31,30,29,-1,31,29,28,-1,27,31,28,-1,34,18,19,-1,19,23,34,-1,35,29,30,-1,30,36,35,-1,36,30,31,-1,31,34,36,-1,34,31,32,-1,32,18,34,-1,18,32,33,-1,33,22,18,-1,22,33,27,-1,27,26,22,-1,26,27,28,-1,28,37,26,-1,37,28,29,-1,29,35,37,-1]
IndexedFaceSet1468.creaseAngle = 3.14159
IndexedFaceSet1468.texCoordIndex = [0,1,2,-1,2,3,0,-1,4,5,6,-1,6,7,4,-1,1,8,9,-1,9,2,1,-1,40,4,7,-1,7,41,40,-1,8,10,11,-1,11,9,8,-1,5,38,39,-1,39,6,5,-1,6,39,41,-1,41,7,6,-1,2,9,11,-1,11,3,2,-1,12,10,8,-1,8,13,12,-1,14,43,44,-1,44,17,14,-1,4,14,17,-1,17,5,4,-1,13,8,1,-1,1,18,13,-1,40,42,14,-1,14,4,40,-1,18,19,20,-1,5,17,45,-1,45,38,5,-1,21,18,1,-1,1,0,21,-1,45,17,46,-1,46,47,45,-1,18,21,23,-1,23,19,18,-1,46,17,44,-1,18,20,24,-1,24,13,18,-1,13,24,25,-1,25,12,13,-1,42,48,43,-1,43,14,42,-1,28,29,30,-1,27,28,30,-1,26,27,30,-1,24,30,29,-1,29,25,24,-1,25,29,28,-1,28,15,25,-1,15,28,27,-1,27,16,15,-1,31,32,33,-1,31,33,34,-1,34,35,36,-1,34,36,37,-1,31,34,37,-1,20,26,30,-1,30,24,20,-1,23,36,35,-1,35,19,23,-1,19,35,34,-1,34,20,19,-1,20,34,33,-1,33,26,20,-1,26,33,32,-1,32,27,26,-1,27,32,31,-1,31,16,27,-1,16,31,37,-1,37,22,16,-1,22,37,36,-1,36,23,22,-1]
Coordinate1469 = x3d.Coordinate()

IndexedFaceSet1468.coord = Coordinate1469
TextureCoordinate1470 = x3d.TextureCoordinate()

IndexedFaceSet1468.texCoord = TextureCoordinate1470

Shape1464.geometry = IndexedFaceSet1468

Transform1463.children.append(Shape1464)

HAnimSegment1462.children.append(Transform1463)

HAnimJoint1461.children.append(HAnimSegment1462)
HAnimJoint1471 = x3d.HAnimJoint()
HAnimJoint1471.name = "r_carpal_proximal_interphalangeal_5"
HAnimJoint1471.DEF = "hanim_r_carpal_proximal_interphalangeal_5"
HAnimJoint1471.center = [-0.181305,0.7700400000000001,-0.0371475]
HAnimJoint1471.ulimit = [0,0,0]
HAnimJoint1471.llimit = [0,0,0]
HAnimSegment1472 = x3d.HAnimSegment()
HAnimSegment1472.name = "r_carpal_middle_phalanx_5"
HAnimSegment1472.DEF = "hanim_r_carpal_middle_phalanx_5"
Transform1473 = x3d.Transform()
Transform1473.translation = [-0.181305,0.7700400000000001,-0.0371475]
Shape1474 = x3d.Shape()
Appearance1475 = x3d.Appearance()
Material1476 = x3d.Material()
Material1476.diffuseColor = [0.588,0.588,0.588]

Appearance1475.material = Material1476
ImageTexture1477 = x3d.ImageTexture()
ImageTexture1477.USE = "JinLOA4TextureAtlas"

Appearance1475.texture = ImageTexture1477

Shape1474.appearance = Appearance1475
IndexedFaceSet1478 = x3d.IndexedFaceSet()
IndexedFaceSet1478.coordIndex = [1,7,14,-1,14,15,1,-1,8,3,14,-1,1,18,5,-1,5,7,1,-1,3,4,21,-1,21,2,3,-1,6,4,3,-1,3,8,6,-1,6,13,4,-1,0,13,5,-1,5,18,0,-1,13,0,21,-1,21,4,13,-1,2,15,14,-1,14,3,2,-1,8,11,12,-1,12,6,8,-1,7,5,9,-1,9,10,7,-1,10,9,12,-1,12,11,10,-1,8,14,10,-1,10,11,8,-1,13,6,12,-1,12,9,13,-1,9,5,13,-1,7,10,14,-1,15,2,16,-1,16,17,15,-1,18,1,19,-1,19,20,18,-1,2,21,22,-1,22,16,2,-1,0,18,20,-1,20,23,0,-1,21,0,23,-1,23,22,21,-1,1,15,17,-1,17,19,1,-1,19,17,23,-1,23,20,19,-1,16,22,23,-1,23,17,16,-1]
IndexedFaceSet1478.creaseAngle = 3.14159
IndexedFaceSet1478.texCoordIndex = [3,0,24,-1,24,25,3,-1,4,5,1,-1,3,6,7,-1,7,0,3,-1,5,8,9,-1,9,10,5,-1,11,8,5,-1,5,4,11,-1,11,12,8,-1,27,26,7,-1,7,6,27,-1,12,13,9,-1,9,8,12,-1,10,2,1,-1,1,5,10,-1,4,14,15,-1,15,11,4,-1,0,7,29,-1,29,28,0,-1,16,17,15,-1,15,14,16,-1,4,1,16,-1,16,14,4,-1,12,11,15,-1,15,17,12,-1,29,7,26,-1,0,28,24,-1,2,10,18,-1,18,19,2,-1,6,3,20,-1,20,21,6,-1,10,9,22,-1,22,18,10,-1,27,6,21,-1,21,31,27,-1,9,13,23,-1,23,22,9,-1,3,25,30,-1,30,20,3,-1,20,30,31,-1,31,21,20,-1,18,22,23,-1,23,19,18,-1]
Coordinate1479 = x3d.Coordinate()

IndexedFaceSet1478.coord = Coordinate1479
TextureCoordinate1480 = x3d.TextureCoordinate()

IndexedFaceSet1478.texCoord = TextureCoordinate1480

Shape1474.geometry = IndexedFaceSet1478

Transform1473.children.append(Shape1474)

HAnimSegment1472.children.append(Transform1473)

HAnimJoint1471.children.append(HAnimSegment1472)
HAnimJoint1481 = x3d.HAnimJoint()
HAnimJoint1481.name = "r_carpal_distal_interphalangeal_5"
HAnimJoint1481.DEF = "hanim_r_carpal_distal_interphalangeal_5"
HAnimJoint1481.center = [-0.18044999999999997,0.7468830000000001,-0.0369675]
HAnimJoint1481.ulimit = [0,0,0]
HAnimJoint1481.llimit = [0,0,0]
HAnimSegment1482 = x3d.HAnimSegment()
HAnimSegment1482.name = "r_carpal_distal_phalanx_5"
HAnimSegment1482.DEF = "hanim_r_carpal_distal_phalanx_5"
Transform1483 = x3d.Transform()
Transform1483.translation = [-0.18044999999999997,0.7468830000000001,-0.0369675]
Shape1484 = x3d.Shape()
Appearance1485 = x3d.Appearance()
Material1486 = x3d.Material()
Material1486.diffuseColor = [0.588,0.588,0.588]

Appearance1485.material = Material1486
ImageTexture1487 = x3d.ImageTexture()
ImageTexture1487.USE = "JinLOA4TextureAtlas"

Appearance1485.texture = ImageTexture1487

Shape1484.appearance = Appearance1485
IndexedFaceSet1488 = x3d.IndexedFaceSet()
IndexedFaceSet1488.coordIndex = [0,31,25,-1,24,32,1,-1,1,3,2,-1,2,0,1,-1,31,5,4,-1,4,23,31,-1,0,2,5,-1,5,31,0,-1,23,4,6,-1,6,29,23,-1,32,7,3,-1,3,1,32,-1,29,6,7,-1,7,32,29,-1,2,14,17,-1,17,8,2,-1,5,11,10,-1,10,4,5,-1,2,8,11,-1,11,5,2,-1,10,21,18,-1,18,12,10,-1,7,13,9,-1,9,3,7,-1,6,12,13,-1,13,7,6,-1,8,17,19,-1,19,11,8,-1,19,21,10,-1,10,11,19,-1,25,24,1,-1,1,0,25,-1,14,20,22,-1,22,16,14,-1,15,16,22,-1,22,18,15,-1,3,9,20,-1,20,14,3,-1,14,2,3,-1,4,10,12,-1,12,6,4,-1,21,15,18,-1,14,16,19,-1,19,17,14,-1,19,16,15,-1,15,21,19,-1,9,13,22,-1,22,20,9,-1,22,13,12,-1,12,18,22,-1,25,26,27,-1,27,24,25,-1,23,29,30,-1,30,28,23,-1,28,30,27,-1,27,26,28,-1,25,31,28,-1,28,26,25,-1,32,24,27,-1,27,30,32,-1,30,29,32,-1,23,28,31,-1]
IndexedFaceSet1488.creaseAngle = 3.14159
IndexedFaceSet1488.texCoordIndex = [0,1,2,-1,3,4,5,-1,5,6,7,-1,7,0,5,-1,33,35,9,-1,9,10,33,-1,0,7,8,-1,8,1,0,-1,10,9,11,-1,11,12,10,-1,4,13,6,-1,6,5,4,-1,12,11,36,-1,36,34,12,-1,7,14,15,-1,15,16,7,-1,35,37,18,-1,18,9,35,-1,7,16,17,-1,17,8,7,-1,18,20,21,-1,21,19,18,-1,13,22,23,-1,23,6,13,-1,11,19,38,-1,38,36,11,-1,16,15,24,-1,24,17,16,-1,39,20,18,-1,18,37,39,-1,2,3,5,-1,5,0,2,-1,14,26,27,-1,27,25,14,-1,28,40,41,-1,41,21,28,-1,6,23,26,-1,26,14,6,-1,14,7,6,-1,9,18,19,-1,19,11,9,-1,20,28,21,-1,14,25,24,-1,24,15,14,-1,39,40,28,-1,28,20,39,-1,23,22,27,-1,27,26,23,-1,41,38,19,-1,19,21,41,-1,2,29,30,-1,30,3,2,-1,10,12,43,-1,43,42,10,-1,31,32,30,-1,30,29,31,-1,2,1,31,-1,31,29,2,-1,4,3,30,-1,30,32,4,-1,43,12,34,-1,10,42,33,-1]
Coordinate1489 = x3d.Coordinate()

IndexedFaceSet1488.coord = Coordinate1489
TextureCoordinate1490 = x3d.TextureCoordinate()

IndexedFaceSet1488.texCoord = TextureCoordinate1490

Shape1484.geometry = IndexedFaceSet1488

Transform1483.children.append(Shape1484)

HAnimSegment1482.children.append(Transform1483)

HAnimJoint1481.children.append(HAnimSegment1482)

HAnimJoint1471.children.append(HAnimJoint1481)

HAnimJoint1461.children.append(HAnimJoint1471)

HAnimJoint1451.children.append(HAnimJoint1461)

HAnimJoint1251.children.append(HAnimJoint1451)

HAnimJoint1241.children.append(HAnimJoint1251)

HAnimJoint1231.children.append(HAnimJoint1241)

HAnimJoint1221.children.append(HAnimJoint1231)

HAnimJoint1211.children.append(HAnimJoint1221)

HAnimJoint771.children.append(HAnimJoint1211)

HAnimJoint761.children.append(HAnimJoint771)

HAnimJoint751.children.append(HAnimJoint761)

HAnimJoint741.children.append(HAnimJoint751)

HAnimJoint731.children.append(HAnimJoint741)

HAnimJoint721.children.append(HAnimJoint731)

HAnimJoint711.children.append(HAnimJoint721)

HAnimJoint701.children.append(HAnimJoint711)

HAnimJoint691.children.append(HAnimJoint701)

HAnimJoint681.children.append(HAnimJoint691)

HAnimJoint671.children.append(HAnimJoint681)

HAnimJoint661.children.append(HAnimJoint671)

HAnimJoint651.children.append(HAnimJoint661)

HAnimJoint641.children.append(HAnimJoint651)

HAnimJoint631.children.append(HAnimJoint641)

HAnimJoint621.children.append(HAnimJoint631)

HAnimJoint611.children.append(HAnimJoint621)

HAnimJoint41.children.append(HAnimJoint611)

HAnimJoint31.children.append(HAnimJoint41)

HAnimHumanoid23.skeleton.append(HAnimJoint31)
HAnimJoint1491 = x3d.HAnimJoint()
HAnimJoint1491.USE = "hanim_humanoid_root"

HAnimHumanoid23.joints.append(HAnimJoint1491)
HAnimJoint1492 = x3d.HAnimJoint()
HAnimJoint1492.USE = "hanim_sacroiliac"

HAnimHumanoid23.joints.append(HAnimJoint1492)
HAnimJoint1493 = x3d.HAnimJoint()
HAnimJoint1493.USE = "hanim_vl5"

HAnimHumanoid23.joints.append(HAnimJoint1493)
HAnimJoint1494 = x3d.HAnimJoint()
HAnimJoint1494.USE = "hanim_vl4"

HAnimHumanoid23.joints.append(HAnimJoint1494)
HAnimJoint1495 = x3d.HAnimJoint()
HAnimJoint1495.USE = "hanim_vl3"

HAnimHumanoid23.joints.append(HAnimJoint1495)
HAnimJoint1496 = x3d.HAnimJoint()
HAnimJoint1496.USE = "hanim_vl2"

HAnimHumanoid23.joints.append(HAnimJoint1496)
HAnimJoint1497 = x3d.HAnimJoint()
HAnimJoint1497.USE = "hanim_vl1"

HAnimHumanoid23.joints.append(HAnimJoint1497)
HAnimJoint1498 = x3d.HAnimJoint()
HAnimJoint1498.USE = "hanim_vt12"

HAnimHumanoid23.joints.append(HAnimJoint1498)
HAnimJoint1499 = x3d.HAnimJoint()
HAnimJoint1499.USE = "hanim_vt11"

HAnimHumanoid23.joints.append(HAnimJoint1499)
HAnimJoint1500 = x3d.HAnimJoint()
HAnimJoint1500.USE = "hanim_vt10"

HAnimHumanoid23.joints.append(HAnimJoint1500)
HAnimJoint1501 = x3d.HAnimJoint()
HAnimJoint1501.USE = "hanim_vt9"

HAnimHumanoid23.joints.append(HAnimJoint1501)
HAnimJoint1502 = x3d.HAnimJoint()
HAnimJoint1502.USE = "hanim_vt8"

HAnimHumanoid23.joints.append(HAnimJoint1502)
HAnimJoint1503 = x3d.HAnimJoint()
HAnimJoint1503.USE = "hanim_vt7"

HAnimHumanoid23.joints.append(HAnimJoint1503)
HAnimJoint1504 = x3d.HAnimJoint()
HAnimJoint1504.USE = "hanim_vt6"

HAnimHumanoid23.joints.append(HAnimJoint1504)
HAnimJoint1505 = x3d.HAnimJoint()
HAnimJoint1505.USE = "hanim_vt5"

HAnimHumanoid23.joints.append(HAnimJoint1505)
HAnimJoint1506 = x3d.HAnimJoint()
HAnimJoint1506.USE = "hanim_vt4"

HAnimHumanoid23.joints.append(HAnimJoint1506)
HAnimJoint1507 = x3d.HAnimJoint()
HAnimJoint1507.USE = "hanim_vt3"

HAnimHumanoid23.joints.append(HAnimJoint1507)
HAnimJoint1508 = x3d.HAnimJoint()
HAnimJoint1508.USE = "hanim_vt2"

HAnimHumanoid23.joints.append(HAnimJoint1508)
HAnimJoint1509 = x3d.HAnimJoint()
HAnimJoint1509.USE = "hanim_vt1"

HAnimHumanoid23.joints.append(HAnimJoint1509)
HAnimJoint1510 = x3d.HAnimJoint()
HAnimJoint1510.USE = "hanim_vc7"

HAnimHumanoid23.joints.append(HAnimJoint1510)
HAnimJoint1511 = x3d.HAnimJoint()
HAnimJoint1511.USE = "hanim_vc6"

HAnimHumanoid23.joints.append(HAnimJoint1511)
HAnimJoint1512 = x3d.HAnimJoint()
HAnimJoint1512.USE = "hanim_vc5"

HAnimHumanoid23.joints.append(HAnimJoint1512)
HAnimJoint1513 = x3d.HAnimJoint()
HAnimJoint1513.USE = "hanim_vc4"

HAnimHumanoid23.joints.append(HAnimJoint1513)
HAnimJoint1514 = x3d.HAnimJoint()
HAnimJoint1514.USE = "hanim_vc3"

HAnimHumanoid23.joints.append(HAnimJoint1514)
HAnimJoint1515 = x3d.HAnimJoint()
HAnimJoint1515.USE = "hanim_vc2"

HAnimHumanoid23.joints.append(HAnimJoint1515)
HAnimJoint1516 = x3d.HAnimJoint()
HAnimJoint1516.USE = "hanim_vc1"

HAnimHumanoid23.joints.append(HAnimJoint1516)
HAnimJoint1517 = x3d.HAnimJoint()
HAnimJoint1517.USE = "hanim_skullbase"

HAnimHumanoid23.joints.append(HAnimJoint1517)
HAnimJoint1518 = x3d.HAnimJoint()
HAnimJoint1518.USE = "hanim_temporomandibular"

HAnimHumanoid23.joints.append(HAnimJoint1518)
HAnimJoint1519 = x3d.HAnimJoint()
HAnimJoint1519.USE = "hanim_l_acromioclavicular"

HAnimHumanoid23.joints.append(HAnimJoint1519)
HAnimJoint1520 = x3d.HAnimJoint()
HAnimJoint1520.USE = "hanim_r_acromioclavicular"

HAnimHumanoid23.joints.append(HAnimJoint1520)
HAnimJoint1521 = x3d.HAnimJoint()
HAnimJoint1521.USE = "hanim_l_calcaneocuboid"

HAnimHumanoid23.joints.append(HAnimJoint1521)
HAnimJoint1522 = x3d.HAnimJoint()
HAnimJoint1522.USE = "hanim_r_calcaneocuboid"

HAnimHumanoid23.joints.append(HAnimJoint1522)
HAnimJoint1523 = x3d.HAnimJoint()
HAnimJoint1523.USE = "hanim_l_carpal_distal_interphalangeal_2"

HAnimHumanoid23.joints.append(HAnimJoint1523)
HAnimJoint1524 = x3d.HAnimJoint()
HAnimJoint1524.USE = "hanim_r_carpal_distal_interphalangeal_2"

HAnimHumanoid23.joints.append(HAnimJoint1524)
HAnimJoint1525 = x3d.HAnimJoint()
HAnimJoint1525.USE = "hanim_l_carpal_distal_interphalangeal_3"

HAnimHumanoid23.joints.append(HAnimJoint1525)
HAnimJoint1526 = x3d.HAnimJoint()
HAnimJoint1526.USE = "hanim_r_carpal_distal_interphalangeal_3"

HAnimHumanoid23.joints.append(HAnimJoint1526)
HAnimJoint1527 = x3d.HAnimJoint()
HAnimJoint1527.USE = "hanim_l_carpal_distal_interphalangeal_4"

HAnimHumanoid23.joints.append(HAnimJoint1527)
HAnimJoint1528 = x3d.HAnimJoint()
HAnimJoint1528.USE = "hanim_r_carpal_distal_interphalangeal_4"

HAnimHumanoid23.joints.append(HAnimJoint1528)
HAnimJoint1529 = x3d.HAnimJoint()
HAnimJoint1529.USE = "hanim_l_carpal_distal_interphalangeal_5"

HAnimHumanoid23.joints.append(HAnimJoint1529)
HAnimJoint1530 = x3d.HAnimJoint()
HAnimJoint1530.USE = "hanim_r_carpal_distal_interphalangeal_5"

HAnimHumanoid23.joints.append(HAnimJoint1530)
HAnimJoint1531 = x3d.HAnimJoint()
HAnimJoint1531.USE = "hanim_l_carpal_interphalangeal_1"

HAnimHumanoid23.joints.append(HAnimJoint1531)
HAnimJoint1532 = x3d.HAnimJoint()
HAnimJoint1532.USE = "hanim_r_carpal_interphalangeal_1"

HAnimHumanoid23.joints.append(HAnimJoint1532)
HAnimJoint1533 = x3d.HAnimJoint()
HAnimJoint1533.USE = "hanim_l_carpal_proximal_interphalangeal_2"

HAnimHumanoid23.joints.append(HAnimJoint1533)
HAnimJoint1534 = x3d.HAnimJoint()
HAnimJoint1534.USE = "hanim_r_carpal_proximal_interphalangeal_2"

HAnimHumanoid23.joints.append(HAnimJoint1534)
HAnimJoint1535 = x3d.HAnimJoint()
HAnimJoint1535.USE = "hanim_l_carpal_proximal_interphalangeal_3"

HAnimHumanoid23.joints.append(HAnimJoint1535)
HAnimJoint1536 = x3d.HAnimJoint()
HAnimJoint1536.USE = "hanim_r_carpal_proximal_interphalangeal_3"

HAnimHumanoid23.joints.append(HAnimJoint1536)
HAnimJoint1537 = x3d.HAnimJoint()
HAnimJoint1537.USE = "hanim_l_carpal_proximal_interphalangeal_4"

HAnimHumanoid23.joints.append(HAnimJoint1537)
HAnimJoint1538 = x3d.HAnimJoint()
HAnimJoint1538.USE = "hanim_r_carpal_proximal_interphalangeal_4"

HAnimHumanoid23.joints.append(HAnimJoint1538)
HAnimJoint1539 = x3d.HAnimJoint()
HAnimJoint1539.USE = "hanim_l_carpal_proximal_interphalangeal_5"

HAnimHumanoid23.joints.append(HAnimJoint1539)
HAnimJoint1540 = x3d.HAnimJoint()
HAnimJoint1540.USE = "hanim_r_carpal_proximal_interphalangeal_5"

HAnimHumanoid23.joints.append(HAnimJoint1540)
HAnimJoint1541 = x3d.HAnimJoint()
HAnimJoint1541.USE = "hanim_l_carpometacarpal_1"

HAnimHumanoid23.joints.append(HAnimJoint1541)
HAnimJoint1542 = x3d.HAnimJoint()
HAnimJoint1542.USE = "hanim_r_carpometacarpal_1"

HAnimHumanoid23.joints.append(HAnimJoint1542)
HAnimJoint1543 = x3d.HAnimJoint()
HAnimJoint1543.USE = "hanim_l_carpometacarpal_2"

HAnimHumanoid23.joints.append(HAnimJoint1543)
HAnimJoint1544 = x3d.HAnimJoint()
HAnimJoint1544.USE = "hanim_r_carpometacarpal_2"

HAnimHumanoid23.joints.append(HAnimJoint1544)
HAnimJoint1545 = x3d.HAnimJoint()
HAnimJoint1545.USE = "hanim_l_carpometacarpal_3"

HAnimHumanoid23.joints.append(HAnimJoint1545)
HAnimJoint1546 = x3d.HAnimJoint()
HAnimJoint1546.USE = "hanim_r_carpometacarpal_3"

HAnimHumanoid23.joints.append(HAnimJoint1546)
HAnimJoint1547 = x3d.HAnimJoint()
HAnimJoint1547.USE = "hanim_l_carpometacarpal_4"

HAnimHumanoid23.joints.append(HAnimJoint1547)
HAnimJoint1548 = x3d.HAnimJoint()
HAnimJoint1548.USE = "hanim_r_carpometacarpal_4"

HAnimHumanoid23.joints.append(HAnimJoint1548)
HAnimJoint1549 = x3d.HAnimJoint()
HAnimJoint1549.USE = "hanim_l_carpometacarpal_5"

HAnimHumanoid23.joints.append(HAnimJoint1549)
HAnimJoint1550 = x3d.HAnimJoint()
HAnimJoint1550.USE = "hanim_r_carpometacarpal_5"

HAnimHumanoid23.joints.append(HAnimJoint1550)
HAnimJoint1551 = x3d.HAnimJoint()
HAnimJoint1551.USE = "hanim_l_cuneonavicular_1"

HAnimHumanoid23.joints.append(HAnimJoint1551)
HAnimJoint1552 = x3d.HAnimJoint()
HAnimJoint1552.USE = "hanim_r_cuneonavicular_1"

HAnimHumanoid23.joints.append(HAnimJoint1552)
HAnimJoint1553 = x3d.HAnimJoint()
HAnimJoint1553.USE = "hanim_l_cuneonavicular_2"

HAnimHumanoid23.joints.append(HAnimJoint1553)
HAnimJoint1554 = x3d.HAnimJoint()
HAnimJoint1554.USE = "hanim_r_cuneonavicular_2"

HAnimHumanoid23.joints.append(HAnimJoint1554)
HAnimJoint1555 = x3d.HAnimJoint()
HAnimJoint1555.USE = "hanim_l_cuneonavicular_3"

HAnimHumanoid23.joints.append(HAnimJoint1555)
HAnimJoint1556 = x3d.HAnimJoint()
HAnimJoint1556.USE = "hanim_r_cuneonavicular_3"

HAnimHumanoid23.joints.append(HAnimJoint1556)
HAnimJoint1557 = x3d.HAnimJoint()
HAnimJoint1557.USE = "hanim_l_elbow"

HAnimHumanoid23.joints.append(HAnimJoint1557)
HAnimJoint1558 = x3d.HAnimJoint()
HAnimJoint1558.USE = "hanim_r_elbow"

HAnimHumanoid23.joints.append(HAnimJoint1558)
HAnimJoint1559 = x3d.HAnimJoint()
HAnimJoint1559.USE = "hanim_l_eyeball_joint"

HAnimHumanoid23.joints.append(HAnimJoint1559)
HAnimJoint1560 = x3d.HAnimJoint()
HAnimJoint1560.USE = "hanim_r_eyeball_joint"

HAnimHumanoid23.joints.append(HAnimJoint1560)
HAnimJoint1561 = x3d.HAnimJoint()
HAnimJoint1561.USE = "hanim_l_eyebrow_joint"

HAnimHumanoid23.joints.append(HAnimJoint1561)
HAnimJoint1562 = x3d.HAnimJoint()
HAnimJoint1562.USE = "hanim_r_eyebrow_joint"

HAnimHumanoid23.joints.append(HAnimJoint1562)
HAnimJoint1563 = x3d.HAnimJoint()
HAnimJoint1563.USE = "hanim_l_eyelid_joint"

HAnimHumanoid23.joints.append(HAnimJoint1563)
HAnimJoint1564 = x3d.HAnimJoint()
HAnimJoint1564.USE = "hanim_r_eyelid_joint"

HAnimHumanoid23.joints.append(HAnimJoint1564)
HAnimJoint1565 = x3d.HAnimJoint()
HAnimJoint1565.USE = "hanim_l_hip"

HAnimHumanoid23.joints.append(HAnimJoint1565)
HAnimJoint1566 = x3d.HAnimJoint()
HAnimJoint1566.USE = "hanim_r_hip"

HAnimHumanoid23.joints.append(HAnimJoint1566)
HAnimJoint1567 = x3d.HAnimJoint()
HAnimJoint1567.USE = "hanim_l_knee"

HAnimHumanoid23.joints.append(HAnimJoint1567)
HAnimJoint1568 = x3d.HAnimJoint()
HAnimJoint1568.USE = "hanim_r_knee"

HAnimHumanoid23.joints.append(HAnimJoint1568)
HAnimJoint1569 = x3d.HAnimJoint()
HAnimJoint1569.USE = "hanim_l_metacarpophalangeal_1"

HAnimHumanoid23.joints.append(HAnimJoint1569)
HAnimJoint1570 = x3d.HAnimJoint()
HAnimJoint1570.USE = "hanim_r_metacarpophalangeal_1"

HAnimHumanoid23.joints.append(HAnimJoint1570)
HAnimJoint1571 = x3d.HAnimJoint()
HAnimJoint1571.USE = "hanim_l_metacarpophalangeal_2"

HAnimHumanoid23.joints.append(HAnimJoint1571)
HAnimJoint1572 = x3d.HAnimJoint()
HAnimJoint1572.USE = "hanim_r_metacarpophalangeal_2"

HAnimHumanoid23.joints.append(HAnimJoint1572)
HAnimJoint1573 = x3d.HAnimJoint()
HAnimJoint1573.USE = "hanim_l_metacarpophalangeal_3"

HAnimHumanoid23.joints.append(HAnimJoint1573)
HAnimJoint1574 = x3d.HAnimJoint()
HAnimJoint1574.USE = "hanim_r_metacarpophalangeal_3"

HAnimHumanoid23.joints.append(HAnimJoint1574)
HAnimJoint1575 = x3d.HAnimJoint()
HAnimJoint1575.USE = "hanim_l_metacarpophalangeal_4"

HAnimHumanoid23.joints.append(HAnimJoint1575)
HAnimJoint1576 = x3d.HAnimJoint()
HAnimJoint1576.USE = "hanim_r_metacarpophalangeal_4"

HAnimHumanoid23.joints.append(HAnimJoint1576)
HAnimJoint1577 = x3d.HAnimJoint()
HAnimJoint1577.USE = "hanim_l_metacarpophalangeal_5"

HAnimHumanoid23.joints.append(HAnimJoint1577)
HAnimJoint1578 = x3d.HAnimJoint()
HAnimJoint1578.USE = "hanim_r_metacarpophalangeal_5"

HAnimHumanoid23.joints.append(HAnimJoint1578)
HAnimJoint1579 = x3d.HAnimJoint()
HAnimJoint1579.USE = "hanim_l_metatarsophalangeal_1"

HAnimHumanoid23.joints.append(HAnimJoint1579)
HAnimJoint1580 = x3d.HAnimJoint()
HAnimJoint1580.USE = "hanim_r_metatarsophalangeal_1"

HAnimHumanoid23.joints.append(HAnimJoint1580)
HAnimJoint1581 = x3d.HAnimJoint()
HAnimJoint1581.USE = "hanim_l_metatarsophalangeal_2"

HAnimHumanoid23.joints.append(HAnimJoint1581)
HAnimJoint1582 = x3d.HAnimJoint()
HAnimJoint1582.USE = "hanim_r_metatarsophalangeal_2"

HAnimHumanoid23.joints.append(HAnimJoint1582)
HAnimJoint1583 = x3d.HAnimJoint()
HAnimJoint1583.USE = "hanim_l_metatarsophalangeal_3"

HAnimHumanoid23.joints.append(HAnimJoint1583)
HAnimJoint1584 = x3d.HAnimJoint()
HAnimJoint1584.USE = "hanim_r_metatarsophalangeal_3"

HAnimHumanoid23.joints.append(HAnimJoint1584)
HAnimJoint1585 = x3d.HAnimJoint()
HAnimJoint1585.USE = "hanim_l_metatarsophalangeal_4"

HAnimHumanoid23.joints.append(HAnimJoint1585)
HAnimJoint1586 = x3d.HAnimJoint()
HAnimJoint1586.USE = "hanim_r_metatarsophalangeal_4"

HAnimHumanoid23.joints.append(HAnimJoint1586)
HAnimJoint1587 = x3d.HAnimJoint()
HAnimJoint1587.USE = "hanim_l_metatarsophalangeal_5"

HAnimHumanoid23.joints.append(HAnimJoint1587)
HAnimJoint1588 = x3d.HAnimJoint()
HAnimJoint1588.USE = "hanim_r_metatarsophalangeal_5"

HAnimHumanoid23.joints.append(HAnimJoint1588)
HAnimJoint1589 = x3d.HAnimJoint()
HAnimJoint1589.USE = "hanim_l_midcarpal_1"

HAnimHumanoid23.joints.append(HAnimJoint1589)
HAnimJoint1590 = x3d.HAnimJoint()
HAnimJoint1590.USE = "hanim_r_midcarpal_1"

HAnimHumanoid23.joints.append(HAnimJoint1590)
HAnimJoint1591 = x3d.HAnimJoint()
HAnimJoint1591.USE = "hanim_l_midcarpal_2"

HAnimHumanoid23.joints.append(HAnimJoint1591)
HAnimJoint1592 = x3d.HAnimJoint()
HAnimJoint1592.USE = "hanim_r_midcarpal_2"

HAnimHumanoid23.joints.append(HAnimJoint1592)
HAnimJoint1593 = x3d.HAnimJoint()
HAnimJoint1593.USE = "hanim_l_midcarpal_3"

HAnimHumanoid23.joints.append(HAnimJoint1593)
HAnimJoint1594 = x3d.HAnimJoint()
HAnimJoint1594.USE = "hanim_r_midcarpal_3"

HAnimHumanoid23.joints.append(HAnimJoint1594)
HAnimJoint1595 = x3d.HAnimJoint()
HAnimJoint1595.USE = "hanim_l_midcarpal_4_5"

HAnimHumanoid23.joints.append(HAnimJoint1595)
HAnimJoint1596 = x3d.HAnimJoint()
HAnimJoint1596.USE = "hanim_r_midcarpal_4_5"

HAnimHumanoid23.joints.append(HAnimJoint1596)
HAnimJoint1597 = x3d.HAnimJoint()
HAnimJoint1597.USE = "hanim_l_radiocarpal"

HAnimHumanoid23.joints.append(HAnimJoint1597)
HAnimJoint1598 = x3d.HAnimJoint()
HAnimJoint1598.USE = "hanim_r_radiocarpal"

HAnimHumanoid23.joints.append(HAnimJoint1598)
HAnimJoint1599 = x3d.HAnimJoint()
HAnimJoint1599.USE = "hanim_l_shoulder"

HAnimHumanoid23.joints.append(HAnimJoint1599)
HAnimJoint1600 = x3d.HAnimJoint()
HAnimJoint1600.USE = "hanim_r_shoulder"

HAnimHumanoid23.joints.append(HAnimJoint1600)
HAnimJoint1601 = x3d.HAnimJoint()
HAnimJoint1601.USE = "hanim_l_sternoclavicular"

HAnimHumanoid23.joints.append(HAnimJoint1601)
HAnimJoint1602 = x3d.HAnimJoint()
HAnimJoint1602.USE = "hanim_r_sternoclavicular"

HAnimHumanoid23.joints.append(HAnimJoint1602)
HAnimJoint1603 = x3d.HAnimJoint()
HAnimJoint1603.USE = "hanim_l_talocalcaneonavicular"

HAnimHumanoid23.joints.append(HAnimJoint1603)
HAnimJoint1604 = x3d.HAnimJoint()
HAnimJoint1604.USE = "hanim_r_talocalcaneonavicular"

HAnimHumanoid23.joints.append(HAnimJoint1604)
HAnimJoint1605 = x3d.HAnimJoint()
HAnimJoint1605.USE = "hanim_l_talocrural"

HAnimHumanoid23.joints.append(HAnimJoint1605)
HAnimJoint1606 = x3d.HAnimJoint()
HAnimJoint1606.USE = "hanim_r_talocrural"

HAnimHumanoid23.joints.append(HAnimJoint1606)
HAnimJoint1607 = x3d.HAnimJoint()
HAnimJoint1607.USE = "hanim_l_tarsal_distal_interphalangeal_1"

HAnimHumanoid23.joints.append(HAnimJoint1607)
HAnimJoint1608 = x3d.HAnimJoint()
HAnimJoint1608.USE = "hanim_r_tarsal_distal_interphalangeal_1"

HAnimHumanoid23.joints.append(HAnimJoint1608)
HAnimJoint1609 = x3d.HAnimJoint()
HAnimJoint1609.USE = "hanim_l_tarsal_distal_interphalangeal_2"

HAnimHumanoid23.joints.append(HAnimJoint1609)
HAnimJoint1610 = x3d.HAnimJoint()
HAnimJoint1610.USE = "hanim_r_tarsal_distal_interphalangeal_2"

HAnimHumanoid23.joints.append(HAnimJoint1610)
HAnimJoint1611 = x3d.HAnimJoint()
HAnimJoint1611.USE = "hanim_l_tarsal_distal_interphalangeal_3"

HAnimHumanoid23.joints.append(HAnimJoint1611)
HAnimJoint1612 = x3d.HAnimJoint()
HAnimJoint1612.USE = "hanim_r_tarsal_distal_interphalangeal_3"

HAnimHumanoid23.joints.append(HAnimJoint1612)
HAnimJoint1613 = x3d.HAnimJoint()
HAnimJoint1613.USE = "hanim_l_tarsal_distal_interphalangeal_4"

HAnimHumanoid23.joints.append(HAnimJoint1613)
HAnimJoint1614 = x3d.HAnimJoint()
HAnimJoint1614.USE = "hanim_r_tarsal_distal_interphalangeal_4"

HAnimHumanoid23.joints.append(HAnimJoint1614)
HAnimJoint1615 = x3d.HAnimJoint()
HAnimJoint1615.USE = "hanim_l_tarsal_distal_interphalangeal_5"

HAnimHumanoid23.joints.append(HAnimJoint1615)
HAnimJoint1616 = x3d.HAnimJoint()
HAnimJoint1616.USE = "hanim_r_tarsal_distal_interphalangeal_5"

HAnimHumanoid23.joints.append(HAnimJoint1616)
HAnimJoint1617 = x3d.HAnimJoint()
HAnimJoint1617.USE = "hanim_l_tarsal_proximal_interphalangeal_2"

HAnimHumanoid23.joints.append(HAnimJoint1617)
HAnimJoint1618 = x3d.HAnimJoint()
HAnimJoint1618.USE = "hanim_r_tarsal_proximal_interphalangeal_2"

HAnimHumanoid23.joints.append(HAnimJoint1618)
HAnimJoint1619 = x3d.HAnimJoint()
HAnimJoint1619.USE = "hanim_l_tarsal_proximal_interphalangeal_3"

HAnimHumanoid23.joints.append(HAnimJoint1619)
HAnimJoint1620 = x3d.HAnimJoint()
HAnimJoint1620.USE = "hanim_r_tarsal_proximal_interphalangeal_3"

HAnimHumanoid23.joints.append(HAnimJoint1620)
HAnimJoint1621 = x3d.HAnimJoint()
HAnimJoint1621.USE = "hanim_l_tarsal_proximal_interphalangeal_4"

HAnimHumanoid23.joints.append(HAnimJoint1621)
HAnimJoint1622 = x3d.HAnimJoint()
HAnimJoint1622.USE = "hanim_r_tarsal_proximal_interphalangeal_4"

HAnimHumanoid23.joints.append(HAnimJoint1622)
HAnimJoint1623 = x3d.HAnimJoint()
HAnimJoint1623.USE = "hanim_l_tarsal_proximal_interphalangeal_5"

HAnimHumanoid23.joints.append(HAnimJoint1623)
HAnimJoint1624 = x3d.HAnimJoint()
HAnimJoint1624.USE = "hanim_r_tarsal_proximal_interphalangeal_5"

HAnimHumanoid23.joints.append(HAnimJoint1624)
HAnimJoint1625 = x3d.HAnimJoint()
HAnimJoint1625.USE = "hanim_l_tarsometatarsal_1"

HAnimHumanoid23.joints.append(HAnimJoint1625)
HAnimJoint1626 = x3d.HAnimJoint()
HAnimJoint1626.USE = "hanim_r_tarsometatarsal_1"

HAnimHumanoid23.joints.append(HAnimJoint1626)
HAnimJoint1627 = x3d.HAnimJoint()
HAnimJoint1627.USE = "hanim_l_tarsometatarsal_2"

HAnimHumanoid23.joints.append(HAnimJoint1627)
HAnimJoint1628 = x3d.HAnimJoint()
HAnimJoint1628.USE = "hanim_r_tarsometatarsal_2"

HAnimHumanoid23.joints.append(HAnimJoint1628)
HAnimJoint1629 = x3d.HAnimJoint()
HAnimJoint1629.USE = "hanim_l_tarsometatarsal_3"

HAnimHumanoid23.joints.append(HAnimJoint1629)
HAnimJoint1630 = x3d.HAnimJoint()
HAnimJoint1630.USE = "hanim_r_tarsometatarsal_3"

HAnimHumanoid23.joints.append(HAnimJoint1630)
HAnimJoint1631 = x3d.HAnimJoint()
HAnimJoint1631.USE = "hanim_l_tarsometatarsal_4"

HAnimHumanoid23.joints.append(HAnimJoint1631)
HAnimJoint1632 = x3d.HAnimJoint()
HAnimJoint1632.USE = "hanim_r_tarsometatarsal_4"

HAnimHumanoid23.joints.append(HAnimJoint1632)
HAnimJoint1633 = x3d.HAnimJoint()
HAnimJoint1633.USE = "hanim_l_tarsometatarsal_5"

HAnimHumanoid23.joints.append(HAnimJoint1633)
HAnimJoint1634 = x3d.HAnimJoint()
HAnimJoint1634.USE = "hanim_r_tarsometatarsal_5"

HAnimHumanoid23.joints.append(HAnimJoint1634)
HAnimJoint1635 = x3d.HAnimJoint()
HAnimJoint1635.USE = "hanim_l_transversetarsal"

HAnimHumanoid23.joints.append(HAnimJoint1635)
HAnimJoint1636 = x3d.HAnimJoint()
HAnimJoint1636.USE = "hanim_r_transversetarsal"

HAnimHumanoid23.joints.append(HAnimJoint1636)
HAnimSegment1637 = x3d.HAnimSegment()
HAnimSegment1637.USE = "hanim_sacrum"

HAnimHumanoid23.segments.append(HAnimSegment1637)
HAnimSegment1638 = x3d.HAnimSegment()
HAnimSegment1638.USE = "hanim_pelvis"

HAnimHumanoid23.segments.append(HAnimSegment1638)
HAnimSegment1639 = x3d.HAnimSegment()
HAnimSegment1639.USE = "hanim_l5"

HAnimHumanoid23.segments.append(HAnimSegment1639)
HAnimSegment1640 = x3d.HAnimSegment()
HAnimSegment1640.USE = "hanim_l4"

HAnimHumanoid23.segments.append(HAnimSegment1640)
HAnimSegment1641 = x3d.HAnimSegment()
HAnimSegment1641.USE = "hanim_l3"

HAnimHumanoid23.segments.append(HAnimSegment1641)
HAnimSegment1642 = x3d.HAnimSegment()
HAnimSegment1642.USE = "hanim_l2"

HAnimHumanoid23.segments.append(HAnimSegment1642)
HAnimSegment1643 = x3d.HAnimSegment()
HAnimSegment1643.USE = "hanim_l1"

HAnimHumanoid23.segments.append(HAnimSegment1643)
HAnimSegment1644 = x3d.HAnimSegment()
HAnimSegment1644.USE = "hanim_t12"

HAnimHumanoid23.segments.append(HAnimSegment1644)
HAnimSegment1645 = x3d.HAnimSegment()
HAnimSegment1645.USE = "hanim_t11"

HAnimHumanoid23.segments.append(HAnimSegment1645)
HAnimSegment1646 = x3d.HAnimSegment()
HAnimSegment1646.USE = "hanim_t10"

HAnimHumanoid23.segments.append(HAnimSegment1646)
HAnimSegment1647 = x3d.HAnimSegment()
HAnimSegment1647.USE = "hanim_t9"

HAnimHumanoid23.segments.append(HAnimSegment1647)
HAnimSegment1648 = x3d.HAnimSegment()
HAnimSegment1648.USE = "hanim_t8"

HAnimHumanoid23.segments.append(HAnimSegment1648)
HAnimSegment1649 = x3d.HAnimSegment()
HAnimSegment1649.USE = "hanim_t7"

HAnimHumanoid23.segments.append(HAnimSegment1649)
HAnimSegment1650 = x3d.HAnimSegment()
HAnimSegment1650.USE = "hanim_t6"

HAnimHumanoid23.segments.append(HAnimSegment1650)
HAnimSegment1651 = x3d.HAnimSegment()
HAnimSegment1651.USE = "hanim_t5"

HAnimHumanoid23.segments.append(HAnimSegment1651)
HAnimSegment1652 = x3d.HAnimSegment()
HAnimSegment1652.USE = "hanim_t4"

HAnimHumanoid23.segments.append(HAnimSegment1652)
HAnimSegment1653 = x3d.HAnimSegment()
HAnimSegment1653.USE = "hanim_t3"

HAnimHumanoid23.segments.append(HAnimSegment1653)
HAnimSegment1654 = x3d.HAnimSegment()
HAnimSegment1654.USE = "hanim_t2"

HAnimHumanoid23.segments.append(HAnimSegment1654)
HAnimSegment1655 = x3d.HAnimSegment()
HAnimSegment1655.USE = "hanim_t1"

HAnimHumanoid23.segments.append(HAnimSegment1655)
HAnimSegment1656 = x3d.HAnimSegment()
HAnimSegment1656.USE = "hanim_c7"

HAnimHumanoid23.segments.append(HAnimSegment1656)
HAnimSegment1657 = x3d.HAnimSegment()
HAnimSegment1657.USE = "hanim_c6"

HAnimHumanoid23.segments.append(HAnimSegment1657)
HAnimSegment1658 = x3d.HAnimSegment()
HAnimSegment1658.USE = "hanim_c5"

HAnimHumanoid23.segments.append(HAnimSegment1658)
HAnimSegment1659 = x3d.HAnimSegment()
HAnimSegment1659.USE = "hanim_c4"

HAnimHumanoid23.segments.append(HAnimSegment1659)
HAnimSegment1660 = x3d.HAnimSegment()
HAnimSegment1660.USE = "hanim_c3"

HAnimHumanoid23.segments.append(HAnimSegment1660)
HAnimSegment1661 = x3d.HAnimSegment()
HAnimSegment1661.USE = "hanim_c2"

HAnimHumanoid23.segments.append(HAnimSegment1661)
HAnimSegment1662 = x3d.HAnimSegment()
HAnimSegment1662.USE = "hanim_c1"

HAnimHumanoid23.segments.append(HAnimSegment1662)
HAnimSegment1663 = x3d.HAnimSegment()
HAnimSegment1663.USE = "hanim_skull"

HAnimHumanoid23.segments.append(HAnimSegment1663)
HAnimSegment1664 = x3d.HAnimSegment()
HAnimSegment1664.USE = "hanim_jaw"

HAnimHumanoid23.segments.append(HAnimSegment1664)
HAnimSegment1665 = x3d.HAnimSegment()
HAnimSegment1665.USE = "hanim_l_calcaneus"

HAnimHumanoid23.segments.append(HAnimSegment1665)
HAnimSegment1666 = x3d.HAnimSegment()
HAnimSegment1666.USE = "hanim_r_calcaneus"

HAnimHumanoid23.segments.append(HAnimSegment1666)
HAnimSegment1667 = x3d.HAnimSegment()
HAnimSegment1667.USE = "hanim_l_calf"

HAnimHumanoid23.segments.append(HAnimSegment1667)
HAnimSegment1668 = x3d.HAnimSegment()
HAnimSegment1668.USE = "hanim_r_calf"

HAnimHumanoid23.segments.append(HAnimSegment1668)
HAnimSegment1669 = x3d.HAnimSegment()
HAnimSegment1669.USE = "hanim_l_capitate"

HAnimHumanoid23.segments.append(HAnimSegment1669)
HAnimSegment1670 = x3d.HAnimSegment()
HAnimSegment1670.USE = "hanim_r_capitate"

HAnimHumanoid23.segments.append(HAnimSegment1670)
HAnimSegment1671 = x3d.HAnimSegment()
HAnimSegment1671.USE = "hanim_l_carpal"

HAnimHumanoid23.segments.append(HAnimSegment1671)
HAnimSegment1672 = x3d.HAnimSegment()
HAnimSegment1672.USE = "hanim_r_carpal"

HAnimHumanoid23.segments.append(HAnimSegment1672)
HAnimSegment1673 = x3d.HAnimSegment()
HAnimSegment1673.USE = "hanim_l_carpal_distal_phalanx_1"

HAnimHumanoid23.segments.append(HAnimSegment1673)
HAnimSegment1674 = x3d.HAnimSegment()
HAnimSegment1674.USE = "hanim_r_carpal_distal_phalanx_1"

HAnimHumanoid23.segments.append(HAnimSegment1674)
HAnimSegment1675 = x3d.HAnimSegment()
HAnimSegment1675.USE = "hanim_l_carpal_distal_phalanx_2"

HAnimHumanoid23.segments.append(HAnimSegment1675)
HAnimSegment1676 = x3d.HAnimSegment()
HAnimSegment1676.USE = "hanim_r_carpal_distal_phalanx_2"

HAnimHumanoid23.segments.append(HAnimSegment1676)
HAnimSegment1677 = x3d.HAnimSegment()
HAnimSegment1677.USE = "hanim_l_carpal_distal_phalanx_3"

HAnimHumanoid23.segments.append(HAnimSegment1677)
HAnimSegment1678 = x3d.HAnimSegment()
HAnimSegment1678.USE = "hanim_r_carpal_distal_phalanx_3"

HAnimHumanoid23.segments.append(HAnimSegment1678)
HAnimSegment1679 = x3d.HAnimSegment()
HAnimSegment1679.USE = "hanim_l_carpal_distal_phalanx_4"

HAnimHumanoid23.segments.append(HAnimSegment1679)
HAnimSegment1680 = x3d.HAnimSegment()
HAnimSegment1680.USE = "hanim_r_carpal_distal_phalanx_4"

HAnimHumanoid23.segments.append(HAnimSegment1680)
HAnimSegment1681 = x3d.HAnimSegment()
HAnimSegment1681.USE = "hanim_l_carpal_distal_phalanx_5"

HAnimHumanoid23.segments.append(HAnimSegment1681)
HAnimSegment1682 = x3d.HAnimSegment()
HAnimSegment1682.USE = "hanim_r_carpal_distal_phalanx_5"

HAnimHumanoid23.segments.append(HAnimSegment1682)
HAnimSegment1683 = x3d.HAnimSegment()
HAnimSegment1683.USE = "hanim_l_carpal_middle_phalanx_2"

HAnimHumanoid23.segments.append(HAnimSegment1683)
HAnimSegment1684 = x3d.HAnimSegment()
HAnimSegment1684.USE = "hanim_r_carpal_middle_phalanx_2"

HAnimHumanoid23.segments.append(HAnimSegment1684)
HAnimSegment1685 = x3d.HAnimSegment()
HAnimSegment1685.USE = "hanim_l_carpal_middle_phalanx_3"

HAnimHumanoid23.segments.append(HAnimSegment1685)
HAnimSegment1686 = x3d.HAnimSegment()
HAnimSegment1686.USE = "hanim_r_carpal_middle_phalanx_3"

HAnimHumanoid23.segments.append(HAnimSegment1686)
HAnimSegment1687 = x3d.HAnimSegment()
HAnimSegment1687.USE = "hanim_l_carpal_middle_phalanx_4"

HAnimHumanoid23.segments.append(HAnimSegment1687)
HAnimSegment1688 = x3d.HAnimSegment()
HAnimSegment1688.USE = "hanim_r_carpal_middle_phalanx_4"

HAnimHumanoid23.segments.append(HAnimSegment1688)
HAnimSegment1689 = x3d.HAnimSegment()
HAnimSegment1689.USE = "hanim_l_carpal_middle_phalanx_5"

HAnimHumanoid23.segments.append(HAnimSegment1689)
HAnimSegment1690 = x3d.HAnimSegment()
HAnimSegment1690.USE = "hanim_r_carpal_middle_phalanx_5"

HAnimHumanoid23.segments.append(HAnimSegment1690)
HAnimSegment1691 = x3d.HAnimSegment()
HAnimSegment1691.USE = "hanim_l_carpal_proximal_phalanx_1"

HAnimHumanoid23.segments.append(HAnimSegment1691)
HAnimSegment1692 = x3d.HAnimSegment()
HAnimSegment1692.USE = "hanim_r_carpal_proximal_phalanx_1"

HAnimHumanoid23.segments.append(HAnimSegment1692)
HAnimSegment1693 = x3d.HAnimSegment()
HAnimSegment1693.USE = "hanim_l_carpal_proximal_phalanx_2"

HAnimHumanoid23.segments.append(HAnimSegment1693)
HAnimSegment1694 = x3d.HAnimSegment()
HAnimSegment1694.USE = "hanim_r_carpal_proximal_phalanx_2"

HAnimHumanoid23.segments.append(HAnimSegment1694)
HAnimSegment1695 = x3d.HAnimSegment()
HAnimSegment1695.USE = "hanim_l_carpal_proximal_phalanx_3"

HAnimHumanoid23.segments.append(HAnimSegment1695)
HAnimSegment1696 = x3d.HAnimSegment()
HAnimSegment1696.USE = "hanim_r_carpal_proximal_phalanx_3"

HAnimHumanoid23.segments.append(HAnimSegment1696)
HAnimSegment1697 = x3d.HAnimSegment()
HAnimSegment1697.USE = "hanim_l_carpal_proximal_phalanx_4"

HAnimHumanoid23.segments.append(HAnimSegment1697)
HAnimSegment1698 = x3d.HAnimSegment()
HAnimSegment1698.USE = "hanim_r_carpal_proximal_phalanx_4"

HAnimHumanoid23.segments.append(HAnimSegment1698)
HAnimSegment1699 = x3d.HAnimSegment()
HAnimSegment1699.USE = "hanim_l_carpal_proximal_phalanx_5"

HAnimHumanoid23.segments.append(HAnimSegment1699)
HAnimSegment1700 = x3d.HAnimSegment()
HAnimSegment1700.USE = "hanim_r_carpal_proximal_phalanx_5"

HAnimHumanoid23.segments.append(HAnimSegment1700)
HAnimSegment1701 = x3d.HAnimSegment()
HAnimSegment1701.USE = "hanim_l_clavicle"

HAnimHumanoid23.segments.append(HAnimSegment1701)
HAnimSegment1702 = x3d.HAnimSegment()
HAnimSegment1702.USE = "hanim_r_clavicle"

HAnimHumanoid23.segments.append(HAnimSegment1702)
HAnimSegment1703 = x3d.HAnimSegment()
HAnimSegment1703.USE = "hanim_l_cuboid"

HAnimHumanoid23.segments.append(HAnimSegment1703)
HAnimSegment1704 = x3d.HAnimSegment()
HAnimSegment1704.USE = "hanim_r_cuboid"

HAnimHumanoid23.segments.append(HAnimSegment1704)
HAnimSegment1705 = x3d.HAnimSegment()
HAnimSegment1705.USE = "hanim_l_cuneiform_1"

HAnimHumanoid23.segments.append(HAnimSegment1705)
HAnimSegment1706 = x3d.HAnimSegment()
HAnimSegment1706.USE = "hanim_r_cuneiform_1"

HAnimHumanoid23.segments.append(HAnimSegment1706)
HAnimSegment1707 = x3d.HAnimSegment()
HAnimSegment1707.USE = "hanim_l_cuneiform_2"

HAnimHumanoid23.segments.append(HAnimSegment1707)
HAnimSegment1708 = x3d.HAnimSegment()
HAnimSegment1708.USE = "hanim_r_cuneiform_2"

HAnimHumanoid23.segments.append(HAnimSegment1708)
HAnimSegment1709 = x3d.HAnimSegment()
HAnimSegment1709.USE = "hanim_l_cuneiform_3"

HAnimHumanoid23.segments.append(HAnimSegment1709)
HAnimSegment1710 = x3d.HAnimSegment()
HAnimSegment1710.USE = "hanim_r_cuneiform_3"

HAnimHumanoid23.segments.append(HAnimSegment1710)
HAnimSegment1711 = x3d.HAnimSegment()
HAnimSegment1711.USE = "hanim_l_eyeball"

HAnimHumanoid23.segments.append(HAnimSegment1711)
HAnimSegment1712 = x3d.HAnimSegment()
HAnimSegment1712.USE = "hanim_r_eyeball"

HAnimHumanoid23.segments.append(HAnimSegment1712)
HAnimSegment1713 = x3d.HAnimSegment()
HAnimSegment1713.USE = "hanim_l_eyebrow"

HAnimHumanoid23.segments.append(HAnimSegment1713)
HAnimSegment1714 = x3d.HAnimSegment()
HAnimSegment1714.USE = "hanim_r_eyebrow"

HAnimHumanoid23.segments.append(HAnimSegment1714)
HAnimSegment1715 = x3d.HAnimSegment()
HAnimSegment1715.USE = "hanim_l_eyelid"

HAnimHumanoid23.segments.append(HAnimSegment1715)
HAnimSegment1716 = x3d.HAnimSegment()
HAnimSegment1716.USE = "hanim_r_eyelid"

HAnimHumanoid23.segments.append(HAnimSegment1716)
HAnimSegment1717 = x3d.HAnimSegment()
HAnimSegment1717.USE = "hanim_l_forearm"

HAnimHumanoid23.segments.append(HAnimSegment1717)
HAnimSegment1718 = x3d.HAnimSegment()
HAnimSegment1718.USE = "hanim_r_forearm"

HAnimHumanoid23.segments.append(HAnimSegment1718)
HAnimSegment1719 = x3d.HAnimSegment()
HAnimSegment1719.USE = "hanim_l_hamate"

HAnimHumanoid23.segments.append(HAnimSegment1719)
HAnimSegment1720 = x3d.HAnimSegment()
HAnimSegment1720.USE = "hanim_r_hamate"

HAnimHumanoid23.segments.append(HAnimSegment1720)
HAnimSegment1721 = x3d.HAnimSegment()
HAnimSegment1721.USE = "hanim_l_metacarpal_1"

HAnimHumanoid23.segments.append(HAnimSegment1721)
HAnimSegment1722 = x3d.HAnimSegment()
HAnimSegment1722.USE = "hanim_r_metacarpal_1"

HAnimHumanoid23.segments.append(HAnimSegment1722)
HAnimSegment1723 = x3d.HAnimSegment()
HAnimSegment1723.USE = "hanim_l_metacarpal_2"

HAnimHumanoid23.segments.append(HAnimSegment1723)
HAnimSegment1724 = x3d.HAnimSegment()
HAnimSegment1724.USE = "hanim_r_metacarpal_2"

HAnimHumanoid23.segments.append(HAnimSegment1724)
HAnimSegment1725 = x3d.HAnimSegment()
HAnimSegment1725.USE = "hanim_l_metacarpal_3"

HAnimHumanoid23.segments.append(HAnimSegment1725)
HAnimSegment1726 = x3d.HAnimSegment()
HAnimSegment1726.USE = "hanim_r_metacarpal_3"

HAnimHumanoid23.segments.append(HAnimSegment1726)
HAnimSegment1727 = x3d.HAnimSegment()
HAnimSegment1727.USE = "hanim_l_metacarpal_4"

HAnimHumanoid23.segments.append(HAnimSegment1727)
HAnimSegment1728 = x3d.HAnimSegment()
HAnimSegment1728.USE = "hanim_r_metacarpal_4"

HAnimHumanoid23.segments.append(HAnimSegment1728)
HAnimSegment1729 = x3d.HAnimSegment()
HAnimSegment1729.USE = "hanim_l_metacarpal_5"

HAnimHumanoid23.segments.append(HAnimSegment1729)
HAnimSegment1730 = x3d.HAnimSegment()
HAnimSegment1730.USE = "hanim_r_metacarpal_5"

HAnimHumanoid23.segments.append(HAnimSegment1730)
HAnimSegment1731 = x3d.HAnimSegment()
HAnimSegment1731.USE = "hanim_l_metatarsal_1"

HAnimHumanoid23.segments.append(HAnimSegment1731)
HAnimSegment1732 = x3d.HAnimSegment()
HAnimSegment1732.USE = "hanim_r_metatarsal_1"

HAnimHumanoid23.segments.append(HAnimSegment1732)
HAnimSegment1733 = x3d.HAnimSegment()
HAnimSegment1733.USE = "hanim_l_metatarsal_2"

HAnimHumanoid23.segments.append(HAnimSegment1733)
HAnimSegment1734 = x3d.HAnimSegment()
HAnimSegment1734.USE = "hanim_r_metatarsal_2"

HAnimHumanoid23.segments.append(HAnimSegment1734)
HAnimSegment1735 = x3d.HAnimSegment()
HAnimSegment1735.USE = "hanim_l_metatarsal_3"

HAnimHumanoid23.segments.append(HAnimSegment1735)
HAnimSegment1736 = x3d.HAnimSegment()
HAnimSegment1736.USE = "hanim_r_metatarsal_3"

HAnimHumanoid23.segments.append(HAnimSegment1736)
HAnimSegment1737 = x3d.HAnimSegment()
HAnimSegment1737.USE = "hanim_l_metatarsal_4"

HAnimHumanoid23.segments.append(HAnimSegment1737)
HAnimSegment1738 = x3d.HAnimSegment()
HAnimSegment1738.USE = "hanim_r_metatarsal_4"

HAnimHumanoid23.segments.append(HAnimSegment1738)
HAnimSegment1739 = x3d.HAnimSegment()
HAnimSegment1739.USE = "hanim_l_metatarsal_5"

HAnimHumanoid23.segments.append(HAnimSegment1739)
HAnimSegment1740 = x3d.HAnimSegment()
HAnimSegment1740.USE = "hanim_r_metatarsal_5"

HAnimHumanoid23.segments.append(HAnimSegment1740)
HAnimSegment1741 = x3d.HAnimSegment()
HAnimSegment1741.USE = "hanim_l_navicular"

HAnimHumanoid23.segments.append(HAnimSegment1741)
HAnimSegment1742 = x3d.HAnimSegment()
HAnimSegment1742.USE = "hanim_r_navicular"

HAnimHumanoid23.segments.append(HAnimSegment1742)
HAnimSegment1743 = x3d.HAnimSegment()
HAnimSegment1743.USE = "hanim_l_scapula"

HAnimHumanoid23.segments.append(HAnimSegment1743)
HAnimSegment1744 = x3d.HAnimSegment()
HAnimSegment1744.USE = "hanim_r_scapula"

HAnimHumanoid23.segments.append(HAnimSegment1744)
HAnimSegment1745 = x3d.HAnimSegment()
HAnimSegment1745.USE = "hanim_l_talus"

HAnimHumanoid23.segments.append(HAnimSegment1745)
HAnimSegment1746 = x3d.HAnimSegment()
HAnimSegment1746.USE = "hanim_r_talus"

HAnimHumanoid23.segments.append(HAnimSegment1746)
HAnimSegment1747 = x3d.HAnimSegment()
HAnimSegment1747.USE = "hanim_l_tarsal_distal_phalanx_1"

HAnimHumanoid23.segments.append(HAnimSegment1747)
HAnimSegment1748 = x3d.HAnimSegment()
HAnimSegment1748.USE = "hanim_r_tarsal_distal_phalanx_1"

HAnimHumanoid23.segments.append(HAnimSegment1748)
HAnimSegment1749 = x3d.HAnimSegment()
HAnimSegment1749.USE = "hanim_l_tarsal_distal_phalanx_2"

HAnimHumanoid23.segments.append(HAnimSegment1749)
HAnimSegment1750 = x3d.HAnimSegment()
HAnimSegment1750.USE = "hanim_r_tarsal_distal_phalanx_2"

HAnimHumanoid23.segments.append(HAnimSegment1750)
HAnimSegment1751 = x3d.HAnimSegment()
HAnimSegment1751.USE = "hanim_l_tarsal_distal_phalanx_3"

HAnimHumanoid23.segments.append(HAnimSegment1751)
HAnimSegment1752 = x3d.HAnimSegment()
HAnimSegment1752.USE = "hanim_r_tarsal_distal_phalanx_3"

HAnimHumanoid23.segments.append(HAnimSegment1752)
HAnimSegment1753 = x3d.HAnimSegment()
HAnimSegment1753.USE = "hanim_l_tarsal_distal_phalanx_4"

HAnimHumanoid23.segments.append(HAnimSegment1753)
HAnimSegment1754 = x3d.HAnimSegment()
HAnimSegment1754.USE = "hanim_r_tarsal_distal_phalanx_4"

HAnimHumanoid23.segments.append(HAnimSegment1754)
HAnimSegment1755 = x3d.HAnimSegment()
HAnimSegment1755.USE = "hanim_l_tarsal_distal_phalanx_5"

HAnimHumanoid23.segments.append(HAnimSegment1755)
HAnimSegment1756 = x3d.HAnimSegment()
HAnimSegment1756.USE = "hanim_r_tarsal_distal_phalanx_5"

HAnimHumanoid23.segments.append(HAnimSegment1756)
HAnimSegment1757 = x3d.HAnimSegment()
HAnimSegment1757.USE = "hanim_l_tarsal_middle_phalanx_2"

HAnimHumanoid23.segments.append(HAnimSegment1757)
HAnimSegment1758 = x3d.HAnimSegment()
HAnimSegment1758.USE = "hanim_r_tarsal_middle_phalanx_2"

HAnimHumanoid23.segments.append(HAnimSegment1758)
HAnimSegment1759 = x3d.HAnimSegment()
HAnimSegment1759.USE = "hanim_l_tarsal_middle_phalanx_3"

HAnimHumanoid23.segments.append(HAnimSegment1759)
HAnimSegment1760 = x3d.HAnimSegment()
HAnimSegment1760.USE = "hanim_r_tarsal_middle_phalanx_3"

HAnimHumanoid23.segments.append(HAnimSegment1760)
HAnimSegment1761 = x3d.HAnimSegment()
HAnimSegment1761.USE = "hanim_l_tarsal_middle_phalanx_4"

HAnimHumanoid23.segments.append(HAnimSegment1761)
HAnimSegment1762 = x3d.HAnimSegment()
HAnimSegment1762.USE = "hanim_r_tarsal_middle_phalanx_4"

HAnimHumanoid23.segments.append(HAnimSegment1762)
HAnimSegment1763 = x3d.HAnimSegment()
HAnimSegment1763.USE = "hanim_l_tarsal_middle_phalanx_5"

HAnimHumanoid23.segments.append(HAnimSegment1763)
HAnimSegment1764 = x3d.HAnimSegment()
HAnimSegment1764.USE = "hanim_r_tarsal_middle_phalanx_5"

HAnimHumanoid23.segments.append(HAnimSegment1764)
HAnimSegment1765 = x3d.HAnimSegment()
HAnimSegment1765.USE = "hanim_l_tarsal_proximal_phalanx_1"

HAnimHumanoid23.segments.append(HAnimSegment1765)
HAnimSegment1766 = x3d.HAnimSegment()
HAnimSegment1766.USE = "hanim_r_tarsal_proximal_phalanx_1"

HAnimHumanoid23.segments.append(HAnimSegment1766)
HAnimSegment1767 = x3d.HAnimSegment()
HAnimSegment1767.USE = "hanim_l_tarsal_proximal_phalanx_2"

HAnimHumanoid23.segments.append(HAnimSegment1767)
HAnimSegment1768 = x3d.HAnimSegment()
HAnimSegment1768.USE = "hanim_r_tarsal_proximal_phalanx_2"

HAnimHumanoid23.segments.append(HAnimSegment1768)
HAnimSegment1769 = x3d.HAnimSegment()
HAnimSegment1769.USE = "hanim_l_tarsal_proximal_phalanx_3"

HAnimHumanoid23.segments.append(HAnimSegment1769)
HAnimSegment1770 = x3d.HAnimSegment()
HAnimSegment1770.USE = "hanim_r_tarsal_proximal_phalanx_3"

HAnimHumanoid23.segments.append(HAnimSegment1770)
HAnimSegment1771 = x3d.HAnimSegment()
HAnimSegment1771.USE = "hanim_l_tarsal_proximal_phalanx_4"

HAnimHumanoid23.segments.append(HAnimSegment1771)
HAnimSegment1772 = x3d.HAnimSegment()
HAnimSegment1772.USE = "hanim_r_tarsal_proximal_phalanx_4"

HAnimHumanoid23.segments.append(HAnimSegment1772)
HAnimSegment1773 = x3d.HAnimSegment()
HAnimSegment1773.USE = "hanim_l_tarsal_proximal_phalanx_5"

HAnimHumanoid23.segments.append(HAnimSegment1773)
HAnimSegment1774 = x3d.HAnimSegment()
HAnimSegment1774.USE = "hanim_r_tarsal_proximal_phalanx_5"

HAnimHumanoid23.segments.append(HAnimSegment1774)
HAnimSegment1775 = x3d.HAnimSegment()
HAnimSegment1775.USE = "hanim_l_thigh"

HAnimHumanoid23.segments.append(HAnimSegment1775)
HAnimSegment1776 = x3d.HAnimSegment()
HAnimSegment1776.USE = "hanim_r_thigh"

HAnimHumanoid23.segments.append(HAnimSegment1776)
HAnimSegment1777 = x3d.HAnimSegment()
HAnimSegment1777.USE = "hanim_l_trapezium"

HAnimHumanoid23.segments.append(HAnimSegment1777)
HAnimSegment1778 = x3d.HAnimSegment()
HAnimSegment1778.USE = "hanim_r_trapezium"

HAnimHumanoid23.segments.append(HAnimSegment1778)
HAnimSegment1779 = x3d.HAnimSegment()
HAnimSegment1779.USE = "hanim_l_trapezoid"

HAnimHumanoid23.segments.append(HAnimSegment1779)
HAnimSegment1780 = x3d.HAnimSegment()
HAnimSegment1780.USE = "hanim_r_trapezoid"

HAnimHumanoid23.segments.append(HAnimSegment1780)
HAnimSegment1781 = x3d.HAnimSegment()
HAnimSegment1781.USE = "hanim_l_upperarm"

HAnimHumanoid23.segments.append(HAnimSegment1781)
HAnimSegment1782 = x3d.HAnimSegment()
HAnimSegment1782.USE = "hanim_r_upperarm"

HAnimHumanoid23.segments.append(HAnimSegment1782)

Scene19.children.append(HAnimHumanoid23)

X3D0.Scene = Scene19
f = open("../data/JinLOA4_4.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/JinLOA4_4.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
