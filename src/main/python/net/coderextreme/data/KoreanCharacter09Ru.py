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
meta3.content = "KoreanCharacter09Ru.x3d"

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
meta8.content = "23 December 2021"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "description"
meta9.content = "Articulated 3D game character designed with a general graphics tool, then converted into an X3D HAnim model."

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
meta13.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter09Ru.x3d"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "generator"
meta14.content = "3DS MAX, http://www.autodesk.com/products/autodesk-3ds-max/overview"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "generator"
meta15.content = "Suwon University HAnim Editor"

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
WorldInfo20.title = "KoreanCharacter09Ru.x3d"

Scene19.children.append(WorldInfo20)
NavigationInfo21 = x3d.NavigationInfo()
NavigationInfo21.speed = 1.5

Scene19.children.append(NavigationInfo21)
Viewpoint22 = x3d.Viewpoint()
Viewpoint22.centerOfRotation = [0,1,0]
Viewpoint22.description = "Ru"
Viewpoint22.position = [0,1,3]

Scene19.children.append(Viewpoint22)
HAnimHumanoid23 = x3d.HAnimHumanoid()
HAnimHumanoid23.name = "Ru"
HAnimHumanoid23.DEF = "hanim_Ru"
HAnimHumanoid23.scale = [0.0225,0.0225,0.0225]
HAnimHumanoid23.version = "2.0"
"""original HAnimHumanoid info='\"authorName=Chul Hee Jung and Myeong Won Lee\" \"authorEmail=myeongwonlee@gmail.com\" \"creationDate=31 March 2011\" \"humanoidVersion=2.0\" \"gender=male\" \"height=1.5\"'"""
MetadataSet24 = x3d.MetadataSet()
MetadataSet24.name = "HAnimHumanoid.info"
MetadataSet24.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"
MetadataString25 = x3d.MetadataString()
MetadataString25.name = "authorName"
MetadataString25.value = ["Chul Hee Jung and Myeong Won Lee"]

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
MetadataString28.value = ["male"]

if MetadataSet24.value is None:
    MetadataSet24.value = []
MetadataSet24.value.append(MetadataString28)
MetadataFloat29 = x3d.MetadataFloat()
MetadataFloat29.name = "height"
MetadataFloat29.value = [1.5]

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
HAnimJoint31.center = [0,35.950001,-1.712]
HAnimJoint31.ulimit = [0,0,0]
HAnimJoint31.llimit = [0,0,0]
HAnimSegment32 = x3d.HAnimSegment()
HAnimSegment32.name = "sacrum"
HAnimSegment32.DEF = "hanim_sacrum"
Transform33 = x3d.Transform()
Transform33.translation = [0,35.950001,-1.712]
Shape34 = x3d.Shape()
Appearance35 = x3d.Appearance()
Material36 = x3d.Material()
Material36.diffuseColor = [0.588,0.588,0.588]

Appearance35.material = Material36
ImageTexture37 = x3d.ImageTexture()
ImageTexture37.DEF = "RuTextureAtlas"
ImageTexture37.url = ["images/Ru.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/images/Ru.png"]

Appearance35.texture = ImageTexture37

Shape34.appearance = Appearance35
IndexedFaceSet38 = x3d.IndexedFaceSet()
IndexedFaceSet38.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,1,-1,10,2,1,-1,1,9,10,-1,11,3,2,-1,2,10,11,-1,12,4,3,-1,3,11,12,-1,13,5,4,-1,4,12,13,-1,14,6,5,-1,5,13,14,-1,15,7,6,-1,6,14,15,-1,16,8,7,-1,7,15,16,-1,9,1,8,-1,8,16,9,-1,18,10,9,-1,9,17,18,-1,19,11,10,-1,10,18,19,-1,20,12,11,-1,11,19,20,-1,21,13,12,-1,12,20,21,-1,22,14,13,-1,13,21,22,-1,23,15,14,-1,14,22,23,-1,24,16,15,-1,15,23,24,-1,17,9,16,-1,16,24,17,-1,25,18,17,-1,25,19,18,-1,25,20,19,-1,25,21,20,-1,25,22,21,-1,25,23,22,-1,25,24,23,-1,25,17,24,-1]
IndexedFaceSet38.creaseAngle = 1.57
IndexedFaceSet38.texCoordIndex = [0,8,9,-1,1,9,10,-1,2,10,11,-1,3,11,12,-1,4,12,13,-1,5,13,14,-1,6,14,15,-1,7,15,16,-1,18,9,8,-1,8,17,18,-1,19,10,9,-1,9,18,19,-1,20,11,10,-1,10,19,20,-1,21,12,11,-1,11,20,21,-1,22,13,12,-1,12,21,22,-1,23,14,13,-1,13,22,23,-1,24,15,14,-1,14,23,24,-1,25,16,15,-1,15,24,25,-1,27,18,17,-1,17,26,27,-1,28,19,18,-1,18,27,28,-1,29,20,19,-1,19,28,29,-1,30,21,20,-1,20,29,30,-1,31,22,21,-1,21,30,31,-1,32,23,22,-1,22,31,32,-1,33,24,23,-1,23,32,33,-1,34,25,24,-1,24,33,34,-1,35,27,26,-1,36,28,27,-1,37,29,28,-1,38,30,29,-1,39,31,30,-1,40,32,31,-1,41,33,32,-1,42,34,33,-1]
Coordinate39 = x3d.Coordinate()

IndexedFaceSet38.coord = Coordinate39
TextureCoordinate40 = x3d.TextureCoordinate()

IndexedFaceSet38.texCoord = TextureCoordinate40

Shape34.geometry = IndexedFaceSet38

Transform33.children.append(Shape34)

HAnimSegment32.children.append(Transform33)

HAnimJoint31.children.append(HAnimSegment32)
HAnimJoint41 = x3d.HAnimJoint()
HAnimJoint41.name = "l_hip"
HAnimJoint41.DEF = "hanim_l_hip"
HAnimJoint41.center = [3.602,33.740002,-1.967]
HAnimJoint41.ulimit = [0,0,0]
HAnimJoint41.llimit = [0,0,0]
HAnimSegment42 = x3d.HAnimSegment()
HAnimSegment42.name = "l_thigh"
HAnimSegment42.DEF = "hanim_l_thigh"
Transform43 = x3d.Transform()
Transform43.translation = [3.602,33.740002,-1.967]
Shape44 = x3d.Shape()
Appearance45 = x3d.Appearance()
Material46 = x3d.Material()
Material46.diffuseColor = [0.588,0.588,0.588]

Appearance45.material = Material46
ImageTexture47 = x3d.ImageTexture()
ImageTexture47.USE = "RuTextureAtlas"

Appearance45.texture = ImageTexture47

Shape44.appearance = Appearance45
IndexedFaceSet48 = x3d.IndexedFaceSet()
IndexedFaceSet48.coordIndex = [47,16,2,-1,2,48,47,-1,1,18,15,-1,15,0,1,-1,2,16,18,-1,18,1,2,-1,4,19,3,-1,5,20,19,-1,19,4,5,-1,0,15,20,-1,20,5,0,-1,17,14,6,-1,6,10,17,-1,1,0,7,-1,7,8,1,-1,2,1,8,-1,8,9,2,-1,3,17,10,-1,10,11,3,-1,4,3,11,-1,11,12,4,-1,5,4,12,-1,12,13,5,-1,0,5,13,-1,13,7,0,-1,14,48,6,-1,10,6,45,-1,45,39,10,-1,8,7,36,-1,36,37,8,-1,9,8,37,-1,37,38,9,-1,10,39,40,-1,40,11,10,-1,11,40,41,-1,41,12,11,-1,12,41,42,-1,42,13,12,-1,13,42,36,-1,36,7,13,-1,6,9,38,-1,38,45,6,-1,15,50,49,-1,49,20,15,-1,18,51,50,-1,50,15,18,-1,16,52,51,-1,51,18,16,-1,47,57,52,-1,52,16,47,-1,17,54,53,-1,53,14,17,-1,3,55,54,-1,54,17,3,-1,19,56,55,-1,55,3,19,-1,19,20,49,-1,49,56,19,-1,22,23,29,-1,29,30,22,-1,23,24,31,-1,31,29,23,-1,24,43,44,-1,44,31,24,-1,25,26,33,-1,33,32,25,-1,26,27,34,-1,34,33,26,-1,28,35,34,-1,34,27,28,-1,22,30,35,-1,35,28,22,-1,29,37,36,-1,36,30,29,-1,38,37,29,-1,29,31,38,-1,39,45,44,-1,44,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,35,42,41,-1,41,34,35,-1,30,36,42,-1,42,35,30,-1,44,43,25,-1,25,32,44,-1,45,38,31,-1,31,44,45,-1,23,22,46,-1,22,28,46,-1,28,27,46,-1,27,26,46,-1,26,25,46,-1,25,43,46,-1,43,24,46,-1,24,23,46,-1,47,14,53,-1,53,57,47,-1,48,14,47,-1,48,2,9,-1,9,6,48,-1,50,21,49,-1,51,21,50,-1,52,21,51,-1,57,21,52,-1,54,21,53,-1,55,21,54,-1,56,21,55,-1,49,21,56,-1,53,21,57,-1]
IndexedFaceSet48.creaseAngle = 1.57
IndexedFaceSet48.texCoordIndex = [0,1,2,-1,2,3,0,-1,4,5,6,-1,6,7,4,-1,2,1,5,-1,5,4,2,-1,8,9,10,-1,11,12,9,-1,9,8,11,-1,7,6,12,-1,12,11,7,-1,13,14,15,-1,15,16,13,-1,4,7,17,-1,17,18,4,-1,2,4,18,-1,18,19,2,-1,10,58,59,-1,59,20,10,-1,8,10,20,-1,20,21,8,-1,11,8,21,-1,21,22,11,-1,7,11,22,-1,22,17,7,-1,14,3,15,-1,16,15,23,-1,23,24,16,-1,18,17,25,-1,25,26,18,-1,19,18,26,-1,26,27,19,-1,59,60,28,-1,28,20,59,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,25,-1,25,17,22,-1,15,19,27,-1,27,23,15,-1,6,31,32,-1,32,12,6,-1,5,33,31,-1,31,6,5,-1,1,34,33,-1,33,5,1,-1,0,35,34,-1,34,1,0,-1,13,36,37,-1,37,14,13,-1,10,38,61,-1,61,58,10,-1,9,39,38,-1,38,10,9,-1,9,12,32,-1,32,39,9,-1,40,41,42,-1,42,43,40,-1,41,44,45,-1,45,42,41,-1,44,46,47,-1,47,45,44,-1,48,49,50,-1,50,63,48,-1,49,52,53,-1,53,50,49,-1,54,55,53,-1,53,52,54,-1,40,43,55,-1,55,54,40,-1,42,26,25,-1,25,43,42,-1,27,26,42,-1,42,45,27,-1,24,23,47,-1,47,51,24,-1,28,60,63,-1,63,50,28,-1,29,28,50,-1,50,53,29,-1,55,30,29,-1,29,53,55,-1,43,25,30,-1,30,55,43,-1,47,46,62,-1,62,51,47,-1,23,27,45,-1,45,47,23,-1,41,40,56,-1,40,54,56,-1,54,52,56,-1,52,49,56,-1,49,48,56,-1,62,46,56,-1,46,44,56,-1,44,41,56,-1,0,14,37,-1,37,35,0,-1,3,14,0,-1,3,2,19,-1,19,15,3,-1,31,57,32,-1,33,57,31,-1,34,57,33,-1,35,57,34,-1,36,57,37,-1,38,57,61,-1,39,57,38,-1,32,57,39,-1,37,57,35,-1]
Coordinate49 = x3d.Coordinate()

IndexedFaceSet48.coord = Coordinate49
TextureCoordinate50 = x3d.TextureCoordinate()

IndexedFaceSet48.texCoord = TextureCoordinate50

Shape44.geometry = IndexedFaceSet48

Transform43.children.append(Shape44)

HAnimSegment42.children.append(Transform43)

HAnimJoint41.children.append(HAnimSegment42)
HAnimJoint51 = x3d.HAnimJoint()
HAnimJoint51.name = "l_knee"
HAnimJoint51.DEF = "hanim_l_knee"
HAnimJoint51.center = [3.931,18.23,-1.935]
HAnimJoint51.ulimit = [0,0,0]
HAnimJoint51.llimit = [0,0,0]
"""weight values go here in HAnimJoint, or within animating HAnimDisplacer"""
HAnimSegment52 = x3d.HAnimSegment()
HAnimSegment52.name = "l_calf"
HAnimSegment52.DEF = "hanim_l_calf"
Transform53 = x3d.Transform()
Transform53.translation = [3.931,18.23,-1.935]
Shape54 = x3d.Shape()
Appearance55 = x3d.Appearance()
Material56 = x3d.Material()
Material56.diffuseColor = [0.588,0.588,0.588]

Appearance55.material = Material56
ImageTexture57 = x3d.ImageTexture()
ImageTexture57.USE = "RuTextureAtlas"

Appearance55.texture = ImageTexture57

Shape54.appearance = Appearance55
IndexedFaceSet58 = x3d.IndexedFaceSet()
IndexedFaceSet58.coordIndex = [32,38,1,-1,1,0,32,-1,33,32,0,-1,0,2,33,-1,34,39,14,-1,14,3,34,-1,35,34,3,-1,3,4,35,-1,5,36,35,-1,35,4,5,-1,6,37,36,-1,36,5,6,-1,1,38,37,-1,37,6,1,-1,24,7,8,-1,8,25,24,-1,26,25,8,-1,8,9,26,-1,15,10,27,-1,27,31,15,-1,11,28,27,-1,27,10,11,-1,12,29,28,-1,28,11,12,-1,13,30,29,-1,29,12,13,-1,24,30,13,-1,13,7,24,-1,9,18,20,-1,20,15,9,-1,31,26,9,-1,9,15,31,-1,8,7,17,-1,17,16,8,-1,9,8,16,-1,16,18,9,-1,19,10,15,-1,15,20,19,-1,21,11,10,-1,10,19,21,-1,22,12,11,-1,11,21,22,-1,23,13,12,-1,12,22,23,-1,7,13,23,-1,23,17,7,-1,33,39,20,-1,20,18,33,-1,16,17,38,-1,38,32,16,-1,18,16,32,-1,32,33,18,-1,19,20,39,-1,39,34,19,-1,35,21,19,-1,19,34,35,-1,36,22,21,-1,21,35,36,-1,37,23,22,-1,22,36,37,-1,38,17,23,-1,23,37,38,-1,2,14,39,-1,39,33,2,-1,24,25,40,-1,25,26,40,-1,26,31,40,-1,31,27,40,-1,27,28,40,-1,28,29,40,-1,29,30,40,-1,30,24,40,-1,0,1,41,-1,1,6,41,-1,6,5,41,-1,5,4,41,-1,4,3,41,-1,3,14,41,-1,14,2,41,-1,2,0,41,-1]
IndexedFaceSet58.creaseAngle = 1.57
IndexedFaceSet58.texCoordIndex = [1,2,3,-1,3,0,1,-1,5,1,0,-1,0,4,5,-1,7,8,9,-1,9,6,7,-1,11,43,42,-1,42,10,11,-1,12,13,11,-1,11,10,12,-1,14,15,13,-1,13,12,14,-1,3,2,15,-1,15,14,3,-1,18,19,16,-1,16,17,18,-1,21,17,16,-1,16,20,21,-1,24,25,22,-1,22,23,24,-1,26,27,44,-1,44,45,26,-1,28,29,27,-1,27,26,28,-1,30,31,29,-1,29,28,30,-1,18,31,30,-1,30,19,18,-1,20,32,33,-1,33,24,20,-1,23,21,20,-1,20,24,23,-1,16,19,35,-1,35,34,16,-1,20,16,34,-1,34,32,20,-1,36,25,24,-1,24,33,36,-1,37,26,45,-1,45,46,37,-1,38,28,26,-1,26,37,38,-1,39,30,28,-1,28,38,39,-1,19,30,39,-1,39,35,19,-1,5,8,33,-1,33,32,5,-1,34,35,2,-1,2,1,34,-1,32,34,1,-1,1,5,32,-1,36,33,8,-1,8,7,36,-1,11,37,46,-1,46,43,11,-1,13,38,37,-1,37,11,13,-1,15,39,38,-1,38,13,15,-1,2,35,39,-1,39,15,2,-1,4,9,8,-1,8,5,4,-1,18,17,40,-1,17,21,40,-1,21,23,40,-1,23,22,40,-1,44,27,40,-1,27,29,40,-1,29,31,40,-1,31,18,40,-1,0,3,41,-1,3,14,41,-1,14,12,41,-1,12,10,41,-1,10,42,41,-1,6,9,41,-1,9,4,41,-1,4,0,41,-1]
Coordinate59 = x3d.Coordinate()

IndexedFaceSet58.coord = Coordinate59
TextureCoordinate60 = x3d.TextureCoordinate()

IndexedFaceSet58.texCoord = TextureCoordinate60

Shape54.geometry = IndexedFaceSet58

Transform53.children.append(Shape54)

HAnimSegment52.children.append(Transform53)

HAnimJoint51.children.append(HAnimSegment52)
HAnimJoint61 = x3d.HAnimJoint()
HAnimJoint61.name = "l_talocrural"
HAnimJoint61.DEF = "hanim_l_talocrural"
HAnimJoint61.center = [4.077,4.031,-1.998]
HAnimJoint61.ulimit = [0,0,0]
HAnimJoint61.llimit = [0,0,0]
HAnimSegment62 = x3d.HAnimSegment()
HAnimSegment62.name = "l_talus"
HAnimSegment62.DEF = "hanim_l_talus"
Transform63 = x3d.Transform()
Transform63.translation = [4.077,4.031,-1.998]
Shape64 = x3d.Shape()
Appearance65 = x3d.Appearance()
Material66 = x3d.Material()
Material66.diffuseColor = [0.588,0.588,0.588]

Appearance65.material = Material66
ImageTexture67 = x3d.ImageTexture()
ImageTexture67.USE = "RuTextureAtlas"

Appearance65.texture = ImageTexture67

Shape64.appearance = Appearance65
IndexedFaceSet68 = x3d.IndexedFaceSet()
IndexedFaceSet68.coordIndex = [0,1,10,-1,10,16,0,-1,2,11,10,-1,10,1,2,-1,3,12,11,-1,11,2,3,-1,4,13,12,-1,12,3,4,-1,41,0,16,-1,16,15,41,-1,0,41,44,-1,44,18,0,-1,17,19,4,-1,4,3,17,-1,20,17,3,-1,3,2,20,-1,21,20,2,-1,2,1,21,-1,18,21,1,-1,1,0,18,-1,18,44,42,-1,42,6,18,-1,8,7,19,-1,19,17,8,-1,23,8,17,-1,17,20,23,-1,9,23,20,-1,20,21,9,-1,6,9,21,-1,21,18,6,-1,10,24,26,-1,26,16,10,-1,11,25,24,-1,24,10,11,-1,12,27,25,-1,25,11,12,-1,13,28,27,-1,27,12,13,-1,5,28,13,-1,13,14,5,-1,30,29,39,-1,39,15,30,-1,26,30,15,-1,15,16,26,-1,8,23,22,-1,22,7,8,-1,9,6,22,-1,22,23,9,-1,6,42,46,-1,46,22,6,-1,33,34,35,-1,35,36,37,-1,37,38,31,-1,35,37,31,-1,33,35,31,-1,32,33,31,-1,28,5,32,-1,32,31,28,-1,5,29,33,-1,33,32,5,-1,29,30,34,-1,34,33,29,-1,30,26,35,-1,35,34,30,-1,26,24,36,-1,36,35,26,-1,24,25,37,-1,37,36,24,-1,25,27,38,-1,38,37,25,-1,27,28,31,-1,31,38,27,-1,39,29,5,-1,5,14,39,-1,7,22,46,-1,46,43,7,-1,4,19,45,-1,45,40,4,-1,19,7,43,-1,43,45,19,-1,4,40,14,-1,14,13,4,-1,48,49,50,-1,50,51,52,-1,48,50,52,-1,53,54,55,-1,52,53,55,-1,48,52,55,-1,48,55,56,-1,48,56,47,-1,15,39,48,-1,48,47,15,-1,39,14,49,-1,49,48,39,-1,14,40,50,-1,50,49,14,-1,40,45,51,-1,51,50,40,-1,45,43,52,-1,52,51,45,-1,43,46,53,-1,53,52,43,-1,46,42,54,-1,54,53,46,-1,42,44,55,-1,55,54,42,-1,44,41,56,-1,56,55,44,-1,41,15,47,-1,47,56,41,-1]
IndexedFaceSet68.creaseAngle = 1.57
IndexedFaceSet68.texCoordIndex = [0,1,2,-1,2,3,0,-1,4,5,2,-1,2,1,4,-1,6,7,5,-1,5,4,6,-1,8,9,7,-1,7,6,8,-1,10,0,3,-1,3,11,10,-1,0,10,12,-1,12,13,0,-1,14,15,8,-1,8,6,14,-1,16,14,6,-1,6,4,16,-1,17,16,4,-1,4,1,17,-1,13,17,1,-1,1,0,13,-1,66,65,18,-1,18,19,66,-1,20,21,68,-1,68,67,20,-1,22,20,67,-1,67,69,22,-1,23,22,69,-1,69,70,23,-1,19,23,70,-1,70,66,19,-1,2,24,25,-1,25,3,2,-1,5,26,24,-1,24,2,5,-1,7,27,26,-1,26,5,7,-1,9,28,27,-1,27,7,9,-1,30,28,9,-1,9,29,30,-1,31,32,33,-1,33,11,31,-1,25,31,11,-1,11,3,25,-1,59,61,34,-1,34,60,59,-1,62,58,34,-1,34,61,62,-1,58,57,63,-1,63,34,58,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,37,39,43,-1,36,37,43,-1,28,30,36,-1,36,43,28,-1,30,32,37,-1,37,36,30,-1,32,31,38,-1,38,37,32,-1,31,25,39,-1,39,38,31,-1,25,24,40,-1,40,39,25,-1,24,26,41,-1,41,40,24,-1,26,27,42,-1,42,41,26,-1,27,28,43,-1,43,42,27,-1,33,32,30,-1,30,29,33,-1,60,34,63,-1,63,64,60,-1,8,15,46,-1,46,45,8,-1,68,21,44,-1,44,71,68,-1,8,45,29,-1,29,9,8,-1,47,48,49,-1,49,50,51,-1,47,49,51,-1,52,53,54,-1,51,52,54,-1,47,51,54,-1,47,54,55,-1,47,55,56,-1,11,33,47,-1,47,56,11,-1,33,29,48,-1,48,47,33,-1,29,45,49,-1,49,48,29,-1,45,46,50,-1,50,49,45,-1,71,44,73,-1,73,72,71,-1,44,35,74,-1,74,73,44,-1,35,18,75,-1,75,74,35,-1,18,65,76,-1,76,75,18,-1,12,10,55,-1,55,54,12,-1,10,11,56,-1,56,55,10,-1]
Coordinate69 = x3d.Coordinate()

IndexedFaceSet68.coord = Coordinate69
TextureCoordinate70 = x3d.TextureCoordinate()

IndexedFaceSet68.texCoord = TextureCoordinate70

Shape64.geometry = IndexedFaceSet68

Transform63.children.append(Shape64)

HAnimSegment62.children.append(Transform63)

HAnimJoint61.children.append(HAnimSegment62)
HAnimJoint71 = x3d.HAnimJoint()
HAnimJoint71.name = "l_metatarsophalangeal_2"
HAnimJoint71.DEF = "hanim_l_metatarsophalangeal_2"
HAnimJoint71.center = [4.077,3.104,-0.9239]
HAnimJoint71.ulimit = [0,0,0]
HAnimJoint71.llimit = [0,0,0]
HAnimSegment72 = x3d.HAnimSegment()
HAnimSegment72.name = "l_tarsal_proximal_phalanx_2"
HAnimSegment72.DEF = "hanim_l_tarsal_proximal_phalanx_2"
Transform73 = x3d.Transform()
Transform73.translation = [4.077,3.104,-0.9239]
Shape74 = x3d.Shape()
Appearance75 = x3d.Appearance()
Material76 = x3d.Material()
Material76.diffuseColor = [0.588,0.588,0.588]

Appearance75.material = Material76
ImageTexture77 = x3d.ImageTexture()
ImageTexture77.USE = "RuTextureAtlas"

Appearance75.texture = ImageTexture77

Shape74.appearance = Appearance75
IndexedFaceSet78 = x3d.IndexedFaceSet()
IndexedFaceSet78.coordIndex = [36,0,33,-1,1,35,33,-1,33,0,1,-1,34,35,1,-1,1,2,34,-1,5,39,42,-1,42,4,5,-1,25,31,18,-1,18,19,25,-1,32,25,19,-1,19,20,32,-1,36,41,26,-1,26,0,36,-1,22,21,31,-1,31,25,22,-1,23,22,25,-1,25,32,23,-1,41,39,5,-1,5,26,41,-1,7,6,2,-1,2,1,7,-1,8,7,1,-1,1,0,8,-1,9,10,4,-1,4,3,9,-1,10,11,5,-1,5,4,10,-1,6,27,24,-1,24,2,6,-1,28,8,0,-1,0,26,28,-1,27,9,3,-1,3,24,27,-1,11,28,26,-1,26,5,11,-1,13,12,6,-1,6,7,13,-1,12,29,27,-1,27,6,12,-1,14,13,7,-1,7,8,14,-1,30,14,8,-1,8,28,30,-1,15,16,10,-1,10,9,15,-1,29,15,9,-1,9,27,29,-1,17,30,28,-1,28,11,17,-1,16,17,11,-1,11,10,16,-1,19,18,12,-1,12,13,19,-1,18,31,29,-1,29,12,18,-1,20,19,13,-1,13,14,20,-1,32,20,14,-1,14,30,32,-1,21,22,16,-1,16,15,21,-1,31,21,15,-1,15,29,31,-1,23,32,30,-1,30,17,23,-1,22,23,17,-1,17,16,22,-1,37,2,24,-1,24,40,37,-1,40,24,3,-1,3,38,40,-1,38,3,4,-1,4,42,38,-1,34,2,37,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,46,50,52,-1,44,46,52,-1,44,52,43,-1,35,34,44,-1,44,43,35,-1,34,37,45,-1,45,44,34,-1,37,40,46,-1,46,45,37,-1,40,38,47,-1,47,46,40,-1,38,42,48,-1,48,47,38,-1,42,39,49,-1,49,48,42,-1,39,41,50,-1,50,49,39,-1,41,36,51,-1,51,50,41,-1,36,33,52,-1,52,51,36,-1,33,35,43,-1,43,52,33,-1]
IndexedFaceSet78.creaseAngle = 1.57
IndexedFaceSet78.texCoordIndex = [0,1,2,-1,3,4,2,-1,2,1,3,-1,6,4,3,-1,3,5,6,-1,53,54,55,-1,55,7,53,-1,13,14,11,-1,11,12,13,-1,16,13,12,-1,12,15,16,-1,0,17,18,-1,18,1,0,-1,19,20,66,-1,66,65,19,-1,21,19,65,-1,65,67,21,-1,68,9,8,-1,8,69,68,-1,22,23,5,-1,5,3,22,-1,24,22,3,-1,3,1,24,-1,60,27,7,-1,7,59,60,-1,27,61,53,-1,53,7,27,-1,23,30,29,-1,29,5,23,-1,31,24,1,-1,1,18,31,-1,71,26,25,-1,25,70,71,-1,28,72,69,-1,69,8,28,-1,32,33,23,-1,23,22,32,-1,33,34,30,-1,30,23,33,-1,35,32,22,-1,22,24,35,-1,36,35,24,-1,24,31,36,-1,62,38,27,-1,27,60,62,-1,73,37,26,-1,26,71,73,-1,39,74,72,-1,72,28,39,-1,38,63,61,-1,61,27,38,-1,12,11,33,-1,33,32,12,-1,11,14,34,-1,34,33,11,-1,15,12,32,-1,32,35,15,-1,16,15,35,-1,35,36,16,-1,57,56,38,-1,38,62,57,-1,66,20,37,-1,37,73,66,-1,21,67,74,-1,74,39,21,-1,56,58,63,-1,63,38,56,-1,40,5,29,-1,29,41,40,-1,75,70,25,-1,25,42,75,-1,64,59,7,-1,7,55,64,-1,6,5,40,-1,43,44,45,-1,45,46,47,-1,47,48,49,-1,45,47,49,-1,49,50,51,-1,45,49,51,-1,43,45,51,-1,43,51,52,-1,4,6,43,-1,43,52,4,-1,6,40,44,-1,44,43,6,-1,40,41,45,-1,45,44,40,-1,75,42,77,-1,77,76,75,-1,42,10,78,-1,78,77,42,-1,10,9,79,-1,79,78,10,-1,9,68,80,-1,80,79,9,-1,17,0,50,-1,50,49,17,-1,0,2,51,-1,51,50,0,-1,2,4,52,-1,52,51,2,-1]
Coordinate79 = x3d.Coordinate()

IndexedFaceSet78.coord = Coordinate79
TextureCoordinate80 = x3d.TextureCoordinate()

IndexedFaceSet78.texCoord = TextureCoordinate80

Shape74.geometry = IndexedFaceSet78

Transform73.children.append(Shape74)

HAnimSegment72.children.append(Transform73)

HAnimJoint71.children.append(HAnimSegment72)

HAnimJoint61.children.append(HAnimJoint71)

HAnimJoint51.children.append(HAnimJoint61)

HAnimJoint41.children.append(HAnimJoint51)

HAnimJoint31.children.append(HAnimJoint41)
HAnimJoint81 = x3d.HAnimJoint()
HAnimJoint81.name = "r_hip"
HAnimJoint81.DEF = "hanim_r_hip"
HAnimJoint81.center = [-3.602,33.740002,-1.967]
HAnimJoint81.ulimit = [0,0,0]
HAnimJoint81.llimit = [0,0,0]
HAnimSegment82 = x3d.HAnimSegment()
HAnimSegment82.name = "r_thigh"
HAnimSegment82.DEF = "hanim_r_thigh"
Transform83 = x3d.Transform()
Transform83.translation = [-3.602,33.740002,-1.967]
Shape84 = x3d.Shape()
Appearance85 = x3d.Appearance()
Material86 = x3d.Material()
Material86.diffuseColor = [0.588,0.588,0.588]

Appearance85.material = Material86
ImageTexture87 = x3d.ImageTexture()
ImageTexture87.USE = "RuTextureAtlas"

Appearance85.texture = ImageTexture87

Shape84.appearance = Appearance85
IndexedFaceSet88 = x3d.IndexedFaceSet()
IndexedFaceSet88.coordIndex = [47,48,2,-1,2,16,47,-1,1,0,15,-1,15,18,1,-1,2,1,18,-1,18,16,2,-1,4,3,19,-1,5,4,19,-1,19,20,5,-1,0,5,20,-1,20,15,0,-1,17,10,6,-1,6,14,17,-1,1,8,7,-1,7,0,1,-1,2,9,8,-1,8,1,2,-1,3,11,10,-1,10,17,3,-1,4,12,11,-1,11,3,4,-1,5,13,12,-1,12,4,5,-1,0,7,13,-1,13,5,0,-1,14,6,48,-1,10,39,45,-1,45,6,10,-1,8,37,36,-1,36,7,8,-1,9,38,37,-1,37,8,9,-1,10,11,40,-1,40,39,10,-1,11,12,41,-1,41,40,11,-1,12,13,42,-1,42,41,12,-1,13,7,36,-1,36,42,13,-1,6,45,38,-1,38,9,6,-1,15,20,49,-1,49,50,15,-1,18,15,50,-1,50,51,18,-1,16,18,51,-1,51,52,16,-1,47,16,52,-1,52,57,47,-1,17,14,53,-1,53,54,17,-1,3,17,54,-1,54,55,3,-1,19,3,55,-1,55,56,19,-1,19,56,49,-1,49,20,19,-1,22,30,29,-1,29,23,22,-1,23,29,31,-1,31,24,23,-1,24,31,44,-1,44,43,24,-1,25,32,33,-1,33,26,25,-1,26,33,34,-1,34,27,26,-1,28,27,34,-1,34,35,28,-1,22,28,35,-1,35,30,22,-1,29,30,36,-1,36,37,29,-1,38,31,29,-1,29,37,38,-1,39,32,44,-1,44,45,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,35,34,41,-1,41,42,35,-1,30,35,42,-1,42,36,30,-1,44,32,25,-1,25,43,44,-1,45,44,31,-1,31,38,45,-1,23,46,22,-1,22,46,28,-1,28,46,27,-1,27,46,26,-1,26,46,25,-1,25,46,43,-1,43,46,24,-1,24,46,23,-1,47,57,53,-1,53,14,47,-1,48,47,14,-1,48,6,9,-1,9,2,48,-1,50,49,21,-1,51,50,21,-1,52,51,21,-1,57,52,21,-1,54,53,21,-1,55,54,21,-1,56,55,21,-1,49,56,21,-1,53,57,21,-1]
IndexedFaceSet88.creaseAngle = 1.57
IndexedFaceSet88.texCoordIndex = [0,3,2,-1,2,1,0,-1,4,7,6,-1,6,5,4,-1,2,4,5,-1,5,1,2,-1,8,10,9,-1,11,8,9,-1,9,12,11,-1,7,11,12,-1,12,6,7,-1,13,16,15,-1,15,14,13,-1,4,18,17,-1,17,7,4,-1,2,19,18,-1,18,4,2,-1,10,20,59,-1,59,58,10,-1,8,21,20,-1,20,10,8,-1,11,22,21,-1,21,8,11,-1,7,17,22,-1,22,11,7,-1,14,15,3,-1,16,24,23,-1,23,15,16,-1,18,26,25,-1,25,17,18,-1,19,27,26,-1,26,18,19,-1,59,20,28,-1,28,60,59,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,17,25,-1,25,30,22,-1,15,23,27,-1,27,19,15,-1,6,12,32,-1,32,31,6,-1,5,6,31,-1,31,33,5,-1,1,5,33,-1,33,34,1,-1,0,1,34,-1,34,35,0,-1,13,14,37,-1,37,36,13,-1,10,58,61,-1,61,38,10,-1,9,10,38,-1,38,39,9,-1,9,39,32,-1,32,12,9,-1,40,43,42,-1,42,41,40,-1,41,42,45,-1,45,44,41,-1,44,45,47,-1,47,46,44,-1,48,63,50,-1,50,49,48,-1,49,50,53,-1,53,52,49,-1,54,52,53,-1,53,55,54,-1,40,54,55,-1,55,43,40,-1,42,43,25,-1,25,26,42,-1,27,45,42,-1,42,26,27,-1,24,51,47,-1,47,23,24,-1,28,50,63,-1,63,60,28,-1,29,53,50,-1,50,28,29,-1,55,53,29,-1,29,30,55,-1,43,55,30,-1,30,25,43,-1,47,51,62,-1,62,46,47,-1,23,47,45,-1,45,27,23,-1,41,56,40,-1,40,56,54,-1,54,56,52,-1,52,56,49,-1,49,56,48,-1,62,56,46,-1,46,56,44,-1,44,56,41,-1,0,35,37,-1,37,14,0,-1,3,0,14,-1,3,15,19,-1,19,2,3,-1,31,32,57,-1,33,31,57,-1,34,33,57,-1,35,34,57,-1,36,37,57,-1,38,61,57,-1,39,38,57,-1,32,39,57,-1,37,35,57,-1]
Coordinate89 = x3d.Coordinate()

IndexedFaceSet88.coord = Coordinate89
TextureCoordinate90 = x3d.TextureCoordinate()

IndexedFaceSet88.texCoord = TextureCoordinate90

Shape84.geometry = IndexedFaceSet88

Transform83.children.append(Shape84)

HAnimSegment82.children.append(Transform83)

HAnimJoint81.children.append(HAnimSegment82)
HAnimJoint91 = x3d.HAnimJoint()
HAnimJoint91.name = "r_knee"
HAnimJoint91.DEF = "hanim_r_knee"
HAnimJoint91.center = [-3.931,18.23,-1.935]
HAnimJoint91.ulimit = [0,0,0]
HAnimJoint91.llimit = [0,0,0]
HAnimSegment92 = x3d.HAnimSegment()
HAnimSegment92.name = "r_calf"
HAnimSegment92.DEF = "hanim_r_calf"
Transform93 = x3d.Transform()
Transform93.translation = [-3.931,18.23,-1.935]
Shape94 = x3d.Shape()
Appearance95 = x3d.Appearance()
Material96 = x3d.Material()
Material96.diffuseColor = [0.588,0.588,0.588]

Appearance95.material = Material96
ImageTexture97 = x3d.ImageTexture()
ImageTexture97.USE = "RuTextureAtlas"

Appearance95.texture = ImageTexture97

Shape94.appearance = Appearance95
IndexedFaceSet98 = x3d.IndexedFaceSet()
IndexedFaceSet98.coordIndex = [32,0,1,-1,1,38,32,-1,33,2,0,-1,0,32,33,-1,34,3,14,-1,14,39,34,-1,35,4,3,-1,3,34,35,-1,5,4,35,-1,35,36,5,-1,6,5,36,-1,36,37,6,-1,1,6,37,-1,37,38,1,-1,24,25,8,-1,8,7,24,-1,26,9,8,-1,8,25,26,-1,15,31,27,-1,27,10,15,-1,11,10,27,-1,27,28,11,-1,12,11,28,-1,28,29,12,-1,13,12,29,-1,29,30,13,-1,24,7,13,-1,13,30,24,-1,9,15,20,-1,20,18,9,-1,31,15,9,-1,9,26,31,-1,8,16,17,-1,17,7,8,-1,9,18,16,-1,16,8,9,-1,19,20,15,-1,15,10,19,-1,21,19,10,-1,10,11,21,-1,22,21,11,-1,11,12,22,-1,23,22,12,-1,12,13,23,-1,7,17,23,-1,23,13,7,-1,33,18,20,-1,20,39,33,-1,16,32,38,-1,38,17,16,-1,18,33,32,-1,32,16,18,-1,19,34,39,-1,39,20,19,-1,35,34,19,-1,19,21,35,-1,36,35,21,-1,21,22,36,-1,37,36,22,-1,22,23,37,-1,38,37,23,-1,23,17,38,-1,2,33,39,-1,39,14,2,-1,24,40,25,-1,25,40,26,-1,26,40,31,-1,31,40,27,-1,27,40,28,-1,28,40,29,-1,29,40,30,-1,30,40,24,-1,0,41,1,-1,1,41,6,-1,6,41,5,-1,5,41,4,-1,4,41,3,-1,3,41,14,-1,14,41,2,-1,2,41,0,-1]
IndexedFaceSet98.creaseAngle = 1.57
IndexedFaceSet98.texCoordIndex = [1,0,3,-1,3,2,1,-1,5,4,0,-1,0,1,5,-1,7,6,9,-1,9,8,7,-1,11,10,42,-1,42,43,11,-1,12,10,11,-1,11,13,12,-1,14,12,13,-1,13,15,14,-1,3,14,15,-1,15,2,3,-1,18,17,16,-1,16,19,18,-1,21,20,16,-1,16,17,21,-1,24,23,22,-1,22,25,24,-1,26,45,44,-1,44,27,26,-1,28,26,27,-1,27,29,28,-1,30,28,29,-1,29,31,30,-1,18,19,30,-1,30,31,18,-1,20,24,33,-1,33,32,20,-1,23,24,20,-1,20,21,23,-1,16,34,35,-1,35,19,16,-1,20,32,34,-1,34,16,20,-1,36,33,24,-1,24,25,36,-1,37,46,45,-1,45,26,37,-1,38,37,26,-1,26,28,38,-1,39,38,28,-1,28,30,39,-1,19,35,39,-1,39,30,19,-1,5,32,33,-1,33,8,5,-1,34,1,2,-1,2,35,34,-1,32,5,1,-1,1,34,32,-1,36,7,8,-1,8,33,36,-1,11,43,46,-1,46,37,11,-1,13,11,37,-1,37,38,13,-1,15,13,38,-1,38,39,15,-1,2,15,39,-1,39,35,2,-1,4,5,8,-1,8,9,4,-1,18,40,17,-1,17,40,21,-1,21,40,23,-1,23,40,22,-1,44,40,27,-1,27,40,29,-1,29,40,31,-1,31,40,18,-1,0,41,3,-1,3,41,14,-1,14,41,12,-1,12,41,10,-1,10,41,42,-1,6,41,9,-1,9,41,4,-1,4,41,0,-1]
Coordinate99 = x3d.Coordinate()

IndexedFaceSet98.coord = Coordinate99
TextureCoordinate100 = x3d.TextureCoordinate()

IndexedFaceSet98.texCoord = TextureCoordinate100

Shape94.geometry = IndexedFaceSet98

Transform93.children.append(Shape94)

HAnimSegment92.children.append(Transform93)

HAnimJoint91.children.append(HAnimSegment92)
HAnimJoint101 = x3d.HAnimJoint()
HAnimJoint101.name = "r_talocrural"
HAnimJoint101.DEF = "hanim_r_talocrural"
HAnimJoint101.center = [-4.077,4.031,-1.998]
HAnimJoint101.ulimit = [0,0,0]
HAnimJoint101.llimit = [0,0,0]
HAnimSegment102 = x3d.HAnimSegment()
HAnimSegment102.name = "r_talus"
HAnimSegment102.DEF = "hanim_r_talus"
Transform103 = x3d.Transform()
Transform103.translation = [-4.077,4.031,-1.998]
Shape104 = x3d.Shape()
Appearance105 = x3d.Appearance()
Material106 = x3d.Material()
Material106.diffuseColor = [0.588,0.588,0.588]

Appearance105.material = Material106
ImageTexture107 = x3d.ImageTexture()
ImageTexture107.USE = "RuTextureAtlas"

Appearance105.texture = ImageTexture107

Shape104.appearance = Appearance105
IndexedFaceSet108 = x3d.IndexedFaceSet()
IndexedFaceSet108.coordIndex = [0,16,10,-1,10,1,0,-1,2,1,10,-1,10,11,2,-1,3,2,11,-1,11,12,3,-1,4,3,12,-1,12,13,4,-1,41,15,16,-1,16,0,41,-1,0,18,44,-1,44,41,0,-1,17,3,4,-1,4,19,17,-1,20,2,3,-1,3,17,20,-1,21,1,2,-1,2,20,21,-1,18,0,1,-1,1,21,18,-1,18,6,42,-1,42,44,18,-1,8,17,19,-1,19,7,8,-1,23,20,17,-1,17,8,23,-1,9,21,20,-1,20,23,9,-1,6,18,21,-1,21,9,6,-1,10,16,26,-1,26,24,10,-1,11,10,24,-1,24,25,11,-1,12,11,25,-1,25,27,12,-1,13,12,27,-1,27,28,13,-1,5,14,13,-1,13,28,5,-1,30,15,39,-1,39,29,30,-1,26,16,15,-1,15,30,26,-1,8,7,22,-1,22,23,8,-1,9,23,22,-1,22,6,9,-1,6,22,46,-1,46,42,6,-1,31,38,37,-1,37,36,35,-1,31,37,35,-1,35,34,33,-1,31,35,33,-1,32,31,33,-1,28,31,32,-1,32,5,28,-1,5,32,33,-1,33,29,5,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,26,30,-1,26,35,36,-1,36,24,26,-1,24,36,37,-1,37,25,24,-1,25,37,38,-1,38,27,25,-1,27,38,31,-1,31,28,27,-1,39,14,5,-1,5,29,39,-1,7,43,46,-1,46,22,7,-1,4,40,45,-1,45,19,4,-1,19,45,43,-1,43,7,19,-1,4,13,14,-1,14,40,4,-1,48,47,56,-1,48,56,55,-1,55,54,53,-1,55,53,52,-1,48,55,52,-1,52,51,50,-1,48,52,50,-1,48,50,49,-1,15,47,48,-1,48,39,15,-1,39,48,49,-1,49,14,39,-1,14,49,50,-1,50,40,14,-1,40,50,51,-1,51,45,40,-1,45,51,52,-1,52,43,45,-1,43,52,53,-1,53,46,43,-1,46,53,54,-1,54,42,46,-1,42,54,55,-1,55,44,42,-1,44,55,56,-1,56,41,44,-1,41,56,47,-1,47,15,41,-1]
IndexedFaceSet108.creaseAngle = 1.57
IndexedFaceSet108.texCoordIndex = [0,3,2,-1,2,1,0,-1,4,1,2,-1,2,5,4,-1,6,4,5,-1,5,7,6,-1,8,6,7,-1,7,9,8,-1,10,11,3,-1,3,0,10,-1,0,13,12,-1,12,10,0,-1,14,6,8,-1,8,15,14,-1,16,4,6,-1,6,14,16,-1,17,1,4,-1,4,16,17,-1,13,0,1,-1,1,17,13,-1,66,19,18,-1,18,65,66,-1,20,67,68,-1,68,21,20,-1,22,69,67,-1,67,20,22,-1,23,70,69,-1,69,22,23,-1,19,66,70,-1,70,23,19,-1,2,3,25,-1,25,24,2,-1,5,2,24,-1,24,26,5,-1,7,5,26,-1,26,27,7,-1,9,7,27,-1,27,28,9,-1,30,29,9,-1,9,28,30,-1,31,11,33,-1,33,32,31,-1,25,3,11,-1,11,31,25,-1,59,60,34,-1,34,61,59,-1,62,61,34,-1,34,58,62,-1,58,34,63,-1,63,57,58,-1,43,42,41,-1,41,40,39,-1,43,41,39,-1,39,38,37,-1,43,39,37,-1,36,43,37,-1,28,43,36,-1,36,30,28,-1,30,36,37,-1,37,32,30,-1,32,37,38,-1,38,31,32,-1,31,38,39,-1,39,25,31,-1,25,39,40,-1,40,24,25,-1,24,40,41,-1,41,26,24,-1,26,41,42,-1,42,27,26,-1,27,42,43,-1,43,28,27,-1,33,29,30,-1,30,32,33,-1,60,64,63,-1,63,34,60,-1,8,45,46,-1,46,15,8,-1,68,71,44,-1,44,21,68,-1,8,9,29,-1,29,45,8,-1,47,56,55,-1,47,55,54,-1,54,53,52,-1,54,52,51,-1,47,54,51,-1,51,50,49,-1,47,51,49,-1,47,49,48,-1,11,56,47,-1,47,33,11,-1,33,47,48,-1,48,29,33,-1,29,48,49,-1,49,45,29,-1,45,49,50,-1,50,46,45,-1,71,72,73,-1,73,44,71,-1,44,73,74,-1,74,35,44,-1,35,74,75,-1,75,18,35,-1,18,75,76,-1,76,65,18,-1,12,54,55,-1,55,10,12,-1,10,55,56,-1,56,11,10,-1]
Coordinate109 = x3d.Coordinate()

IndexedFaceSet108.coord = Coordinate109
TextureCoordinate110 = x3d.TextureCoordinate()

IndexedFaceSet108.texCoord = TextureCoordinate110

Shape104.geometry = IndexedFaceSet108

Transform103.children.append(Shape104)

HAnimSegment102.children.append(Transform103)

HAnimJoint101.children.append(HAnimSegment102)
HAnimJoint111 = x3d.HAnimJoint()
HAnimJoint111.name = "r_metatarsophalangeal_2"
HAnimJoint111.DEF = "hanim_r_metatarsophalangeal_2"
HAnimJoint111.center = [-4.077,3.104,-0.9239]
HAnimJoint111.ulimit = [0,0,0]
HAnimJoint111.llimit = [0,0,0]
HAnimSegment112 = x3d.HAnimSegment()
HAnimSegment112.name = "r_tarsal_proximal_phalanx_2"
HAnimSegment112.DEF = "hanim_r_tarsal_proximal_phalanx_2"
Transform113 = x3d.Transform()
Transform113.translation = [-4.077,3.104,-0.9239]
Shape114 = x3d.Shape()
Appearance115 = x3d.Appearance()
Material116 = x3d.Material()
Material116.diffuseColor = [0.588,0.588,0.588]

Appearance115.material = Material116
ImageTexture117 = x3d.ImageTexture()
ImageTexture117.USE = "RuTextureAtlas"

Appearance115.texture = ImageTexture117

Shape114.appearance = Appearance115
IndexedFaceSet118 = x3d.IndexedFaceSet()
IndexedFaceSet118.coordIndex = [36,33,0,-1,1,0,33,-1,33,35,1,-1,34,2,1,-1,1,35,34,-1,5,4,42,-1,42,39,5,-1,25,19,18,-1,18,31,25,-1,32,20,19,-1,19,25,32,-1,36,0,26,-1,26,41,36,-1,22,25,31,-1,31,21,22,-1,23,32,25,-1,25,22,23,-1,41,26,5,-1,5,39,41,-1,7,1,2,-1,2,6,7,-1,8,0,1,-1,1,7,8,-1,9,3,4,-1,4,10,9,-1,10,4,5,-1,5,11,10,-1,6,2,24,-1,24,27,6,-1,28,26,0,-1,0,8,28,-1,27,24,3,-1,3,9,27,-1,11,5,26,-1,26,28,11,-1,13,7,6,-1,6,12,13,-1,12,6,27,-1,27,29,12,-1,14,8,7,-1,7,13,14,-1,30,28,8,-1,8,14,30,-1,15,9,10,-1,10,16,15,-1,29,27,9,-1,9,15,29,-1,17,11,28,-1,28,30,17,-1,16,10,11,-1,11,17,16,-1,19,13,12,-1,12,18,19,-1,18,12,29,-1,29,31,18,-1,20,14,13,-1,13,19,20,-1,32,30,14,-1,14,20,32,-1,21,15,16,-1,16,22,21,-1,31,29,15,-1,15,21,31,-1,23,17,30,-1,30,32,23,-1,22,16,17,-1,17,23,22,-1,37,40,24,-1,24,2,37,-1,40,38,3,-1,3,24,40,-1,38,42,4,-1,4,3,38,-1,34,37,2,-1,44,43,52,-1,52,51,50,-1,50,49,48,-1,48,47,46,-1,50,48,46,-1,52,50,46,-1,44,52,46,-1,44,46,45,-1,35,43,44,-1,44,34,35,-1,34,44,45,-1,45,37,34,-1,37,45,46,-1,46,40,37,-1,40,46,47,-1,47,38,40,-1,38,47,48,-1,48,42,38,-1,42,48,49,-1,49,39,42,-1,39,49,50,-1,50,41,39,-1,41,50,51,-1,51,36,41,-1,36,51,52,-1,52,33,36,-1,33,52,43,-1,43,35,33,-1]
IndexedFaceSet118.creaseAngle = 1.57
IndexedFaceSet118.texCoordIndex = [0,2,1,-1,3,1,2,-1,2,4,3,-1,6,5,3,-1,3,4,6,-1,53,7,55,-1,55,54,53,-1,13,12,11,-1,11,14,13,-1,16,15,12,-1,12,13,16,-1,0,1,18,-1,18,17,0,-1,19,65,66,-1,66,20,19,-1,21,67,65,-1,65,19,21,-1,68,69,8,-1,8,9,68,-1,22,3,5,-1,5,23,22,-1,24,1,3,-1,3,22,24,-1,60,59,7,-1,7,27,60,-1,27,7,53,-1,53,61,27,-1,23,5,29,-1,29,30,23,-1,31,18,1,-1,1,24,31,-1,71,70,25,-1,25,26,71,-1,28,8,69,-1,69,72,28,-1,32,22,23,-1,23,33,32,-1,33,23,30,-1,30,34,33,-1,35,24,22,-1,22,32,35,-1,36,31,24,-1,24,35,36,-1,62,60,27,-1,27,38,62,-1,73,71,26,-1,26,37,73,-1,39,28,72,-1,72,74,39,-1,38,27,61,-1,61,63,38,-1,12,32,33,-1,33,11,12,-1,11,33,34,-1,34,14,11,-1,15,35,32,-1,32,12,15,-1,16,36,35,-1,35,15,16,-1,57,62,38,-1,38,56,57,-1,66,73,37,-1,37,20,66,-1,21,39,74,-1,74,67,21,-1,56,38,63,-1,63,58,56,-1,40,41,29,-1,29,5,40,-1,75,42,25,-1,25,70,75,-1,64,55,7,-1,7,59,64,-1,6,40,5,-1,43,52,51,-1,51,50,49,-1,49,48,47,-1,47,46,45,-1,49,47,45,-1,51,49,45,-1,43,51,45,-1,43,45,44,-1,4,52,43,-1,43,6,4,-1,6,43,44,-1,44,40,6,-1,40,44,45,-1,45,41,40,-1,75,76,77,-1,77,42,75,-1,42,77,78,-1,78,10,42,-1,10,78,79,-1,79,9,10,-1,9,79,80,-1,80,68,9,-1,17,49,50,-1,50,0,17,-1,0,50,51,-1,51,2,0,-1,2,51,52,-1,52,4,2,-1]
Coordinate119 = x3d.Coordinate()

IndexedFaceSet118.coord = Coordinate119
TextureCoordinate120 = x3d.TextureCoordinate()

IndexedFaceSet118.texCoord = TextureCoordinate120

Shape114.geometry = IndexedFaceSet118

Transform113.children.append(Shape114)

HAnimSegment112.children.append(Transform113)

HAnimJoint111.children.append(HAnimSegment112)

HAnimJoint101.children.append(HAnimJoint111)

HAnimJoint91.children.append(HAnimJoint101)

HAnimJoint81.children.append(HAnimJoint91)

HAnimJoint31.children.append(HAnimJoint81)
HAnimJoint121 = x3d.HAnimJoint()
HAnimJoint121.name = "sacroiliac"
HAnimJoint121.DEF = "hanim_sacroiliac"
HAnimJoint121.center = [0,32.209999,-2.058]
HAnimJoint121.ulimit = [0,0,0]
HAnimJoint121.llimit = [0,0,0]
HAnimSegment122 = x3d.HAnimSegment()
HAnimSegment122.name = "pelvis"
HAnimSegment122.DEF = "hanim_pelvis"
Transform123 = x3d.Transform()
Transform123.translation = [0,32.209999,-2.058]
Shape124 = x3d.Shape()
Appearance125 = x3d.Appearance()
Material126 = x3d.Material()
Material126.diffuseColor = [0.588,0.588,0.588]

Appearance125.material = Material126
ImageTexture127 = x3d.ImageTexture()
ImageTexture127.USE = "RuTextureAtlas"

Appearance125.texture = ImageTexture127

Shape124.appearance = Appearance125
IndexedFaceSet128 = x3d.IndexedFaceSet()
IndexedFaceSet128.coordIndex = [18,0,6,-1,6,8,18,-1,30,31,10,-1,10,12,30,-1,14,5,3,-1,3,12,14,-1,15,8,6,-1,6,1,15,-1,19,48,22,-1,22,2,19,-1,18,20,4,-1,4,0,18,-1,14,12,10,-1,15,1,5,-1,5,14,15,-1,9,16,19,-1,19,20,9,-1,11,33,55,-1,55,7,11,-1,7,55,57,-1,57,17,7,-1,16,58,48,-1,48,19,16,-1,13,9,20,-1,20,18,13,-1,2,4,20,-1,20,19,2,-1,8,13,18,-1,8,15,21,-1,15,14,21,-1,14,10,21,-1,10,11,21,-1,11,7,21,-1,7,17,21,-1,17,16,9,-1,9,13,21,-1,13,8,21,-1,17,57,58,-1,58,16,17,-1,12,3,61,-1,61,30,12,-1,11,10,31,-1,31,33,11,-1,3,24,34,-1,34,61,3,-1,0,29,23,-1,23,6,0,-1,5,25,24,-1,24,3,5,-1,1,26,25,-1,25,5,1,-1,1,6,23,-1,23,26,1,-1,2,22,32,-1,32,27,2,-1,4,2,27,-1,27,28,4,-1,0,4,28,-1,28,29,0,-1,24,69,34,-1,29,69,23,-1,25,69,24,-1,26,69,25,-1,23,69,26,-1,32,69,27,-1,27,69,28,-1,28,69,29,-1,9,21,17,-1,35,38,37,-1,37,36,35,-1,30,39,40,-1,40,31,30,-1,41,39,43,-1,43,42,41,-1,45,44,37,-1,37,38,45,-1,47,46,22,-1,22,48,47,-1,35,36,50,-1,50,49,35,-1,41,40,39,-1,45,41,42,-1,42,44,45,-1,51,49,47,-1,47,52,51,-1,54,53,55,-1,55,33,54,-1,53,56,57,-1,57,55,53,-1,52,47,48,-1,48,58,52,-1,59,35,49,-1,49,51,59,-1,46,47,49,-1,49,50,46,-1,38,35,59,-1,38,60,45,-1,45,60,41,-1,41,60,40,-1,40,60,54,-1,54,60,53,-1,53,60,56,-1,56,51,52,-1,51,60,59,-1,59,60,38,-1,56,52,58,-1,58,57,56,-1,39,30,61,-1,61,43,39,-1,54,33,31,-1,31,40,54,-1,43,61,34,-1,34,62,43,-1,36,37,64,-1,64,63,36,-1,42,43,62,-1,62,65,42,-1,44,42,65,-1,65,66,44,-1,44,66,64,-1,64,37,44,-1,46,67,32,-1,32,22,46,-1,50,68,67,-1,67,46,50,-1,36,63,68,-1,68,50,36,-1,62,34,69,-1,63,64,69,-1,65,62,69,-1,66,65,69,-1,64,66,69,-1,32,67,69,-1,67,68,69,-1,68,63,69,-1,51,56,60,-1]
IndexedFaceSet128.creaseAngle = 1.57
IndexedFaceSet128.texCoordIndex = [0,1,2,-1,2,3,0,-1,5,6,7,-1,7,4,5,-1,8,9,10,-1,10,4,8,-1,12,3,2,-1,2,11,12,-1,14,15,16,-1,16,13,14,-1,0,17,18,-1,18,1,0,-1,8,4,7,-1,12,11,9,-1,9,8,12,-1,19,20,14,-1,14,17,19,-1,22,23,24,-1,24,21,22,-1,21,24,26,-1,26,25,21,-1,20,27,15,-1,15,14,20,-1,28,19,17,-1,17,0,28,-1,13,18,17,-1,17,14,13,-1,3,28,0,-1,3,12,29,-1,12,8,29,-1,8,7,29,-1,7,22,29,-1,22,21,29,-1,21,25,29,-1,25,20,19,-1,19,28,29,-1,28,3,29,-1,25,26,27,-1,27,20,25,-1,4,10,30,-1,30,5,4,-1,22,7,6,-1,6,23,22,-1,10,31,32,-1,32,30,10,-1,1,33,34,-1,34,2,1,-1,9,35,31,-1,31,10,9,-1,11,36,35,-1,35,9,11,-1,11,2,34,-1,34,36,11,-1,13,16,37,-1,37,38,13,-1,18,13,38,-1,38,39,18,-1,1,18,39,-1,39,33,1,-1,31,40,32,-1,33,40,34,-1,35,40,31,-1,36,40,35,-1,34,40,36,-1,37,40,38,-1,38,40,39,-1,39,40,33,-1,19,29,25,-1,41,44,43,-1,43,42,41,-1,46,45,48,-1,48,47,46,-1,49,45,51,-1,51,50,49,-1,53,52,43,-1,43,44,53,-1,55,54,57,-1,57,56,55,-1,41,42,59,-1,59,58,41,-1,49,48,45,-1,53,49,50,-1,50,52,53,-1,60,58,55,-1,55,61,60,-1,63,62,65,-1,65,64,63,-1,62,66,67,-1,67,65,62,-1,61,55,56,-1,56,68,61,-1,69,41,58,-1,58,60,69,-1,54,55,58,-1,58,59,54,-1,44,41,69,-1,44,70,53,-1,53,70,49,-1,49,70,48,-1,48,70,63,-1,63,70,62,-1,62,70,66,-1,66,60,61,-1,60,70,69,-1,69,70,44,-1,66,61,68,-1,68,67,66,-1,45,46,71,-1,71,51,45,-1,63,64,47,-1,47,48,63,-1,51,71,73,-1,73,72,51,-1,42,43,75,-1,75,74,42,-1,50,51,72,-1,72,76,50,-1,52,50,76,-1,76,77,52,-1,52,77,75,-1,75,43,52,-1,54,79,78,-1,78,57,54,-1,59,80,79,-1,79,54,59,-1,42,74,80,-1,80,59,42,-1,72,73,81,-1,74,75,81,-1,76,72,81,-1,77,76,81,-1,75,77,81,-1,78,79,81,-1,79,80,81,-1,80,74,81,-1,60,66,70,-1]
Coordinate129 = x3d.Coordinate()

IndexedFaceSet128.coord = Coordinate129
TextureCoordinate130 = x3d.TextureCoordinate()

IndexedFaceSet128.texCoord = TextureCoordinate130

Shape124.geometry = IndexedFaceSet128

Transform123.children.append(Shape124)

HAnimSegment122.children.append(Transform123)

HAnimJoint121.children.append(HAnimSegment122)
HAnimJoint131 = x3d.HAnimJoint()
HAnimJoint131.name = "l_shoulder"
HAnimJoint131.DEF = "hanim_l_shoulder"
HAnimJoint131.center = [6.479,53.209999,-2.007]
HAnimJoint131.ulimit = [0,0,0]
HAnimJoint131.llimit = [0,0,0]
HAnimSegment132 = x3d.HAnimSegment()
HAnimSegment132.name = "l_upperarm"
HAnimSegment132.DEF = "hanim_l_upperarm"
Transform133 = x3d.Transform()
Transform133.translation = [6.479,53.209999,-2.007]
Shape134 = x3d.Shape()
Appearance135 = x3d.Appearance()
Material136 = x3d.Material()
Material136.diffuseColor = [0.588,0.588,0.588]

Appearance135.material = Material136
ImageTexture137 = x3d.ImageTexture()
ImageTexture137.USE = "RuTextureAtlas"

Appearance135.texture = ImageTexture137

Shape134.appearance = Appearance135
IndexedFaceSet138 = x3d.IndexedFaceSet()
IndexedFaceSet138.coordIndex = [0,1,2,-1,2,3,0,-1,4,5,1,-1,1,0,4,-1,7,5,4,-1,4,6,7,-1,9,7,6,-1,6,8,9,-1,11,9,8,-1,8,10,11,-1,13,11,10,-1,10,12,13,-1,12,15,14,-1,14,13,12,-1,3,2,14,-1,14,15,3,-1,16,0,3,-1,3,17,16,-1,18,4,0,-1,0,16,18,-1,6,4,18,-1,18,19,6,-1,8,6,19,-1,19,20,8,-1,21,10,8,-1,8,20,21,-1,22,12,10,-1,10,21,22,-1,15,12,22,-1,22,23,15,-1,3,15,23,-1,23,17,3,-1,2,1,24,-1,1,5,24,-1,5,7,24,-1,7,9,24,-1,9,11,24,-1,11,13,24,-1,13,14,24,-1,14,2,24,-1,16,17,26,-1,26,27,16,-1,18,16,27,-1,27,28,18,-1,29,19,18,-1,18,28,29,-1,30,20,19,-1,19,29,30,-1,31,21,20,-1,20,30,31,-1,32,22,21,-1,21,31,32,-1,23,22,32,-1,32,33,23,-1,17,23,33,-1,33,26,17,-1,25,35,34,-1,25,36,35,-1,25,37,36,-1,25,38,37,-1,25,39,38,-1,25,40,39,-1,25,41,40,-1,25,34,41,-1,27,26,34,-1,34,35,27,-1,28,27,35,-1,35,36,28,-1,29,28,36,-1,36,37,29,-1,30,29,37,-1,37,38,30,-1,31,30,38,-1,38,39,31,-1,32,31,39,-1,39,40,32,-1,33,32,40,-1,40,41,33,-1,33,41,34,-1,34,26,33,-1]
IndexedFaceSet138.creaseAngle = 1.57
IndexedFaceSet138.texCoordIndex = [0,1,2,-1,2,3,0,-1,4,5,1,-1,1,0,4,-1,7,5,4,-1,4,6,7,-1,9,7,6,-1,6,8,9,-1,11,9,8,-1,8,10,11,-1,13,11,10,-1,10,12,13,-1,42,15,14,-1,14,43,42,-1,3,2,14,-1,14,15,3,-1,16,0,3,-1,3,17,16,-1,18,4,0,-1,0,16,18,-1,6,4,18,-1,18,19,6,-1,8,6,19,-1,19,20,8,-1,21,10,8,-1,8,20,21,-1,22,12,10,-1,10,21,22,-1,15,42,44,-1,44,23,15,-1,3,15,23,-1,23,17,3,-1,2,1,24,-1,1,5,24,-1,5,7,24,-1,7,9,24,-1,9,11,24,-1,11,13,24,-1,43,14,24,-1,14,2,24,-1,16,17,26,-1,26,25,16,-1,18,16,25,-1,25,27,18,-1,28,19,18,-1,18,27,28,-1,29,20,19,-1,19,28,29,-1,30,21,20,-1,20,29,30,-1,31,22,21,-1,21,30,31,-1,23,44,45,-1,45,32,23,-1,17,23,32,-1,32,26,17,-1,33,34,35,-1,33,36,34,-1,33,37,36,-1,33,38,37,-1,33,39,38,-1,33,40,39,-1,33,41,46,-1,33,35,41,-1,25,26,35,-1,35,34,25,-1,27,25,34,-1,34,36,27,-1,28,27,36,-1,36,37,28,-1,29,28,37,-1,37,38,29,-1,30,29,38,-1,38,39,30,-1,31,30,39,-1,39,40,31,-1,32,45,46,-1,46,41,32,-1,32,41,35,-1,35,26,32,-1]
Coordinate139 = x3d.Coordinate()

IndexedFaceSet138.coord = Coordinate139
TextureCoordinate140 = x3d.TextureCoordinate()

IndexedFaceSet138.texCoord = TextureCoordinate140

Shape134.geometry = IndexedFaceSet138

Transform133.children.append(Shape134)

HAnimSegment132.children.append(Transform133)

HAnimJoint131.children.append(HAnimSegment132)
HAnimJoint141 = x3d.HAnimJoint()
HAnimJoint141.name = "l_elbow"
HAnimJoint141.DEF = "hanim_l_elbow"
HAnimJoint141.center = [7.489,44.990002,-2.016]
HAnimJoint141.ulimit = [0,0,0]
HAnimJoint141.llimit = [0,0,0]
HAnimSegment142 = x3d.HAnimSegment()
HAnimSegment142.name = "l_forearm"
HAnimSegment142.DEF = "hanim_l_forearm"
Transform143 = x3d.Transform()
Transform143.translation = [7.489,44.990002,-2.016]
Shape144 = x3d.Shape()
Appearance145 = x3d.Appearance()
Material146 = x3d.Material()
Material146.diffuseColor = [0.588,0.588,0.588]

Appearance145.material = Material146
ImageTexture147 = x3d.ImageTexture()
ImageTexture147.USE = "RuTextureAtlas"

Appearance145.texture = ImageTexture147

Shape144.appearance = Appearance145
IndexedFaceSet148 = x3d.IndexedFaceSet()
IndexedFaceSet148.coordIndex = [14,12,0,-1,0,20,14,-1,13,12,14,-1,14,15,13,-1,1,13,15,-1,15,21,1,-1,2,1,21,-1,21,22,2,-1,3,2,22,-1,22,23,3,-1,18,3,23,-1,23,16,18,-1,18,16,17,-1,17,19,18,-1,20,0,19,-1,19,17,20,-1,0,12,34,-1,34,35,0,-1,12,13,36,-1,36,34,12,-1,36,13,1,-1,1,37,36,-1,37,1,2,-1,2,38,37,-1,38,2,3,-1,3,39,38,-1,39,3,18,-1,18,40,39,-1,41,19,0,-1,0,35,41,-1,18,19,41,-1,41,40,18,-1,4,11,31,-1,31,24,4,-1,11,5,25,-1,25,31,11,-1,5,8,28,-1,28,25,5,-1,10,6,26,-1,26,30,10,-1,7,4,24,-1,24,27,7,-1,8,9,29,-1,29,28,8,-1,9,10,30,-1,30,29,9,-1,6,7,27,-1,27,26,6,-1,24,31,32,-1,31,25,32,-1,25,28,32,-1,28,29,32,-1,29,30,32,-1,30,26,32,-1,26,27,32,-1,27,24,32,-1,14,20,33,-1,20,17,33,-1,17,16,33,-1,16,23,33,-1,23,22,33,-1,22,21,33,-1,21,15,33,-1,15,14,33,-1,35,34,11,-1,11,4,35,-1,34,36,5,-1,5,11,34,-1,5,36,37,-1,37,8,5,-1,8,37,38,-1,38,9,8,-1,9,38,39,-1,39,10,9,-1,10,39,40,-1,40,6,10,-1,7,41,35,-1,35,4,7,-1,40,41,7,-1,7,6,40,-1]
IndexedFaceSet148.creaseAngle = 1.57
IndexedFaceSet148.texCoordIndex = [0,1,2,-1,2,3,0,-1,5,1,0,-1,0,4,5,-1,7,5,4,-1,4,6,7,-1,9,7,6,-1,6,8,9,-1,11,9,8,-1,8,10,11,-1,13,11,10,-1,10,12,13,-1,35,34,14,-1,14,15,35,-1,3,2,15,-1,15,14,3,-1,2,1,38,-1,38,39,2,-1,1,5,40,-1,40,38,1,-1,40,5,7,-1,7,41,40,-1,41,7,9,-1,9,42,41,-1,42,9,11,-1,11,43,42,-1,43,11,13,-1,13,44,43,-1,46,15,2,-1,2,39,46,-1,35,15,46,-1,46,45,35,-1,17,16,24,-1,24,25,17,-1,16,18,26,-1,26,24,16,-1,18,19,27,-1,27,26,18,-1,21,22,28,-1,28,29,21,-1,23,17,25,-1,25,30,23,-1,19,20,31,-1,31,27,19,-1,20,21,29,-1,29,31,20,-1,36,23,30,-1,30,37,36,-1,25,24,32,-1,24,26,32,-1,26,27,32,-1,27,31,32,-1,31,29,32,-1,29,28,32,-1,37,30,32,-1,30,25,32,-1,0,3,33,-1,3,14,33,-1,14,34,33,-1,12,10,33,-1,10,8,33,-1,8,6,33,-1,6,4,33,-1,4,0,33,-1,39,38,16,-1,16,17,39,-1,38,40,18,-1,18,16,38,-1,18,40,41,-1,41,19,18,-1,19,41,42,-1,42,20,19,-1,20,42,43,-1,43,21,20,-1,21,43,44,-1,44,22,21,-1,23,46,39,-1,39,17,23,-1,45,46,23,-1,23,36,45,-1]
Coordinate149 = x3d.Coordinate()

IndexedFaceSet148.coord = Coordinate149
TextureCoordinate150 = x3d.TextureCoordinate()

IndexedFaceSet148.texCoord = TextureCoordinate150

Shape144.geometry = IndexedFaceSet148

Transform143.children.append(Shape144)

HAnimSegment142.children.append(Transform143)

HAnimJoint141.children.append(HAnimSegment142)
HAnimJoint151 = x3d.HAnimJoint()
HAnimJoint151.name = "l_radiocarpal"
HAnimJoint151.DEF = "hanim_l_radiocarpal"
HAnimJoint151.center = [7.938,35.98,-1.856]
HAnimJoint151.ulimit = [0,0,0]
HAnimJoint151.llimit = [0,0,0]
HAnimSegment152 = x3d.HAnimSegment()
HAnimSegment152.name = "l_carpal"
HAnimSegment152.DEF = "hanim_l_carpal"
Transform153 = x3d.Transform()
Transform153.translation = [7.938,35.98,-1.856]
Shape154 = x3d.Shape()
Appearance155 = x3d.Appearance()
Material156 = x3d.Material()
Material156.diffuseColor = [0.588,0.588,0.588]

Appearance155.material = Material156
ImageTexture157 = x3d.ImageTexture()
ImageTexture157.USE = "RuTextureAtlas"

Appearance155.texture = ImageTexture157

Shape154.appearance = Appearance155
IndexedFaceSet158 = x3d.IndexedFaceSet()
IndexedFaceSet158.coordIndex = [14,17,18,-1,18,13,14,-1,12,19,20,-1,20,11,12,-1,4,8,6,-1,6,0,4,-1,10,21,22,-1,22,9,10,-1,16,18,17,-1,17,15,16,-1,2,6,8,-1,8,5,2,-1,13,20,19,-1,19,14,13,-1,3,5,8,-1,8,7,3,-1,15,22,21,-1,21,16,15,-1,8,4,1,-1,1,7,8,-1,2,5,17,-1,17,14,2,-1,18,32,28,-1,28,13,18,-1,12,0,6,-1,6,19,12,-1,20,35,24,-1,24,11,20,-1,10,26,36,-1,36,21,10,-1,22,7,1,-1,1,9,22,-1,30,32,18,-1,18,16,30,-1,17,5,3,-1,3,15,17,-1,28,35,20,-1,20,13,28,-1,19,6,2,-1,2,14,19,-1,3,7,22,-1,22,15,3,-1,21,36,30,-1,30,16,21,-1,28,32,33,-1,33,27,28,-1,24,35,34,-1,34,23,24,-1,25,37,36,-1,36,26,25,-1,30,29,33,-1,33,32,30,-1,31,23,34,-1,34,38,31,-1,29,37,38,-1,38,33,29,-1,28,27,34,-1,34,35,28,-1,29,30,36,-1,36,37,29,-1,27,33,38,-1,38,34,27,-1,31,38,37,-1,37,25,31,-1,73,44,43,-1,43,39,73,-1,40,46,45,-1,45,41,40,-1,42,39,43,-1,43,48,42,-1,47,60,41,-1,41,45,47,-1,42,48,46,-1,46,40,42,-1,9,1,50,-1,50,52,9,-1,4,0,49,-1,49,51,4,-1,11,24,57,-1,57,64,11,-1,1,4,51,-1,51,50,1,-1,10,9,52,-1,52,53,10,-1,26,10,53,-1,53,74,26,-1,0,12,76,-1,76,49,0,-1,31,25,67,-1,67,61,31,-1,25,26,74,-1,74,67,25,-1,24,23,54,-1,54,57,24,-1,23,31,61,-1,61,54,23,-1,54,55,57,-1,39,42,56,-1,56,55,39,-1,42,40,58,-1,58,56,42,-1,40,41,59,-1,59,58,40,-1,59,41,60,-1,60,61,59,-1,61,60,73,-1,73,54,61,-1,57,55,62,-1,62,64,57,-1,55,56,63,-1,63,62,55,-1,56,58,65,-1,65,63,56,-1,58,59,66,-1,66,65,58,-1,59,61,66,-1,52,50,69,-1,69,71,52,-1,51,49,68,-1,68,70,51,-1,50,51,70,-1,70,69,50,-1,53,52,71,-1,71,72,53,-1,76,77,68,-1,68,49,76,-1,74,75,66,-1,66,67,74,-1,78,79,71,-1,71,69,78,-1,79,80,72,-1,72,71,79,-1,87,75,72,-1,72,80,87,-1,81,82,65,-1,65,66,81,-1,82,83,63,-1,63,65,82,-1,83,84,62,-1,62,63,83,-1,88,77,62,-1,62,84,88,-1,85,86,70,-1,70,68,85,-1,86,78,69,-1,69,70,86,-1,60,47,44,-1,44,73,60,-1,54,73,39,-1,39,55,54,-1,74,53,72,-1,72,75,74,-1,81,66,75,-1,75,87,81,-1,61,67,66,-1,64,62,77,-1,77,76,64,-1,85,68,77,-1,77,88,85,-1,12,11,64,-1,64,76,12,-1,47,45,46,-1,46,48,47,-1,47,48,43,-1,43,44,47,-1,78,91,90,-1,90,79,78,-1,86,92,91,-1,91,78,86,-1,85,93,92,-1,92,86,85,-1,88,94,93,-1,93,85,88,-1,84,95,94,-1,94,88,84,-1,83,96,95,-1,95,84,83,-1,82,97,96,-1,96,83,82,-1,81,98,97,-1,97,82,81,-1,87,99,98,-1,98,81,87,-1,80,100,99,-1,99,87,80,-1,80,79,90,-1,90,100,80,-1,91,89,90,-1,92,89,91,-1,93,89,92,-1,94,89,93,-1,95,89,94,-1,96,89,95,-1,97,89,96,-1,98,89,97,-1,99,89,98,-1,100,89,99,-1,90,89,100,-1]
IndexedFaceSet158.creaseAngle = 1.57
IndexedFaceSet158.texCoordIndex = [1,2,3,-1,3,0,1,-1,5,6,7,-1,7,4,5,-1,9,10,11,-1,11,8,9,-1,13,14,15,-1,15,12,13,-1,17,96,95,-1,95,16,17,-1,19,11,10,-1,10,18,19,-1,0,7,6,-1,6,1,0,-1,21,99,98,-1,98,20,21,-1,16,15,14,-1,14,17,16,-1,98,97,22,-1,22,20,98,-1,19,18,2,-1,2,1,19,-1,3,23,24,-1,24,0,3,-1,5,8,11,-1,11,6,5,-1,7,25,26,-1,26,4,7,-1,13,27,28,-1,28,14,13,-1,15,20,22,-1,22,12,15,-1,29,100,96,-1,96,17,29,-1,95,99,21,-1,21,16,95,-1,24,25,7,-1,7,0,24,-1,6,11,19,-1,19,1,6,-1,21,20,15,-1,15,16,21,-1,14,28,29,-1,29,17,14,-1,24,23,31,-1,31,30,24,-1,26,25,33,-1,33,32,26,-1,34,35,28,-1,28,27,34,-1,29,36,101,-1,101,100,29,-1,37,32,33,-1,33,39,37,-1,36,35,38,-1,38,101,36,-1,24,30,33,-1,33,25,24,-1,36,29,28,-1,28,35,36,-1,30,31,39,-1,39,33,30,-1,102,38,35,-1,35,34,102,-1,41,42,47,-1,47,40,41,-1,44,45,46,-1,46,43,44,-1,48,40,47,-1,47,53,48,-1,49,50,43,-1,43,46,49,-1,103,104,45,-1,45,44,103,-1,12,22,51,-1,51,52,12,-1,9,8,54,-1,54,55,9,-1,4,26,56,-1,56,59,4,-1,22,97,105,-1,105,51,22,-1,13,12,52,-1,52,57,13,-1,27,13,57,-1,57,58,27,-1,8,5,62,-1,62,54,8,-1,102,34,60,-1,60,61,102,-1,34,27,58,-1,58,60,34,-1,26,32,63,-1,63,56,26,-1,32,37,64,-1,64,63,32,-1,63,67,56,-1,40,48,68,-1,68,67,40,-1,103,44,65,-1,65,106,103,-1,44,43,66,-1,66,65,44,-1,66,43,50,-1,50,61,66,-1,64,73,41,-1,41,63,64,-1,56,67,74,-1,74,59,56,-1,67,68,76,-1,76,74,67,-1,106,65,69,-1,69,107,106,-1,65,66,70,-1,70,69,65,-1,66,61,70,-1,52,51,71,-1,71,72,52,-1,55,54,85,-1,85,86,55,-1,51,105,108,-1,108,71,51,-1,57,52,72,-1,72,75,57,-1,62,87,85,-1,85,54,62,-1,58,77,70,-1,70,60,58,-1,78,79,72,-1,72,71,78,-1,79,80,75,-1,75,72,79,-1,81,77,75,-1,75,80,81,-1,82,83,69,-1,69,70,82,-1,83,84,107,-1,107,69,83,-1,88,89,74,-1,74,76,88,-1,90,87,74,-1,74,89,90,-1,91,92,86,-1,86,85,91,-1,109,78,71,-1,71,108,109,-1,73,93,42,-1,42,41,73,-1,63,41,40,-1,40,67,63,-1,58,57,75,-1,75,77,58,-1,82,70,77,-1,77,81,82,-1,61,60,70,-1,59,74,87,-1,87,62,59,-1,91,85,87,-1,87,90,91,-1,5,4,59,-1,59,62,5,-1,49,46,45,-1,45,104,49,-1,93,53,47,-1,47,42,93,-1,78,112,111,-1,111,79,78,-1,109,113,112,-1,112,78,109,-1,91,115,114,-1,114,92,91,-1,90,116,115,-1,115,91,90,-1,89,117,116,-1,116,90,89,-1,88,118,117,-1,117,89,88,-1,83,120,119,-1,119,84,83,-1,82,121,120,-1,120,83,82,-1,81,122,121,-1,121,82,81,-1,80,123,122,-1,122,81,80,-1,80,79,111,-1,111,123,80,-1,112,110,111,-1,113,110,112,-1,115,94,114,-1,116,94,115,-1,117,94,116,-1,118,94,117,-1,120,110,119,-1,121,110,120,-1,122,110,121,-1,123,110,122,-1,111,110,123,-1]
Coordinate159 = x3d.Coordinate()

IndexedFaceSet158.coord = Coordinate159
TextureCoordinate160 = x3d.TextureCoordinate()

IndexedFaceSet158.texCoord = TextureCoordinate160

Shape154.geometry = IndexedFaceSet158

Transform153.children.append(Shape154)

HAnimSegment152.children.append(Transform153)

HAnimJoint151.children.append(HAnimSegment152)

HAnimJoint141.children.append(HAnimJoint151)

HAnimJoint131.children.append(HAnimJoint141)

HAnimJoint121.children.append(HAnimJoint131)
HAnimJoint161 = x3d.HAnimJoint()
HAnimJoint161.name = "r_shoulder"
HAnimJoint161.DEF = "hanim_r_shoulder"
HAnimJoint161.center = [-6.479,53.209999,-2.007]
HAnimJoint161.ulimit = [0,0,0]
HAnimJoint161.llimit = [0,0,0]
HAnimSegment162 = x3d.HAnimSegment()
HAnimSegment162.name = "r_upperarm"
HAnimSegment162.DEF = "hanim_r_upperarm"
Transform163 = x3d.Transform()
Transform163.translation = [-6.479,53.209999,-2.007]
Shape164 = x3d.Shape()
Appearance165 = x3d.Appearance()
Material166 = x3d.Material()
Material166.diffuseColor = [0.588,0.588,0.588]

Appearance165.material = Material166
ImageTexture167 = x3d.ImageTexture()
ImageTexture167.USE = "RuTextureAtlas"

Appearance165.texture = ImageTexture167

Shape164.appearance = Appearance165
IndexedFaceSet168 = x3d.IndexedFaceSet()
IndexedFaceSet168.coordIndex = [0,3,2,-1,2,1,0,-1,4,0,1,-1,1,5,4,-1,7,6,4,-1,4,5,7,-1,9,8,6,-1,6,7,9,-1,11,10,8,-1,8,9,11,-1,13,12,10,-1,10,11,13,-1,12,13,14,-1,14,15,12,-1,3,15,14,-1,14,2,3,-1,16,17,3,-1,3,0,16,-1,18,16,0,-1,0,4,18,-1,6,19,18,-1,18,4,6,-1,8,20,19,-1,19,6,8,-1,21,20,8,-1,8,10,21,-1,22,21,10,-1,10,12,22,-1,15,23,22,-1,22,12,15,-1,3,17,23,-1,23,15,3,-1,2,24,1,-1,1,24,5,-1,5,24,7,-1,7,24,9,-1,9,24,11,-1,11,24,13,-1,13,24,14,-1,14,24,2,-1,16,27,26,-1,26,17,16,-1,18,28,27,-1,27,16,18,-1,29,28,18,-1,18,19,29,-1,30,29,19,-1,19,20,30,-1,31,30,20,-1,20,21,31,-1,32,31,21,-1,21,22,32,-1,23,33,32,-1,32,22,23,-1,17,26,33,-1,33,23,17,-1,25,34,35,-1,25,35,36,-1,25,36,37,-1,25,37,38,-1,25,38,39,-1,25,39,40,-1,25,40,41,-1,25,41,34,-1,27,35,34,-1,34,26,27,-1,28,36,35,-1,35,27,28,-1,29,37,36,-1,36,28,29,-1,30,38,37,-1,37,29,30,-1,31,39,38,-1,38,30,31,-1,32,40,39,-1,39,31,32,-1,33,41,40,-1,40,32,33,-1,33,26,34,-1,34,41,33,-1]
IndexedFaceSet168.creaseAngle = 1.57
IndexedFaceSet168.texCoordIndex = [0,3,2,-1,2,1,0,-1,4,0,1,-1,1,5,4,-1,7,6,4,-1,4,5,7,-1,9,8,6,-1,6,7,9,-1,11,10,8,-1,8,9,11,-1,13,12,10,-1,10,11,13,-1,42,43,14,-1,14,15,42,-1,3,15,14,-1,14,2,3,-1,16,17,3,-1,3,0,16,-1,18,16,0,-1,0,4,18,-1,6,19,18,-1,18,4,6,-1,8,20,19,-1,19,6,8,-1,21,20,8,-1,8,10,21,-1,22,21,10,-1,10,12,22,-1,15,23,44,-1,44,42,15,-1,3,17,23,-1,23,15,3,-1,2,24,1,-1,1,24,5,-1,5,24,7,-1,7,24,9,-1,9,24,11,-1,11,24,13,-1,43,24,14,-1,14,24,2,-1,16,25,26,-1,26,17,16,-1,18,27,25,-1,25,16,18,-1,28,27,18,-1,18,19,28,-1,29,28,19,-1,19,20,29,-1,30,29,20,-1,20,21,30,-1,31,30,21,-1,21,22,31,-1,23,32,45,-1,45,44,23,-1,17,26,32,-1,32,23,17,-1,33,35,34,-1,33,34,36,-1,33,36,37,-1,33,37,38,-1,33,38,39,-1,33,39,40,-1,33,46,41,-1,33,41,35,-1,25,34,35,-1,35,26,25,-1,27,36,34,-1,34,25,27,-1,28,37,36,-1,36,27,28,-1,29,38,37,-1,37,28,29,-1,30,39,38,-1,38,29,30,-1,31,40,39,-1,39,30,31,-1,32,41,46,-1,46,45,32,-1,32,26,35,-1,35,41,32,-1]
Coordinate169 = x3d.Coordinate()

IndexedFaceSet168.coord = Coordinate169
TextureCoordinate170 = x3d.TextureCoordinate()

IndexedFaceSet168.texCoord = TextureCoordinate170

Shape164.geometry = IndexedFaceSet168

Transform163.children.append(Shape164)

HAnimSegment162.children.append(Transform163)

HAnimJoint161.children.append(HAnimSegment162)
HAnimJoint171 = x3d.HAnimJoint()
HAnimJoint171.name = "r_elbow"
HAnimJoint171.DEF = "hanim_r_elbow"
HAnimJoint171.center = [-7.489,44.990002,-2.016]
HAnimJoint171.ulimit = [0,0,0]
HAnimJoint171.llimit = [0,0,0]
HAnimSegment172 = x3d.HAnimSegment()
HAnimSegment172.name = "r_forearm"
HAnimSegment172.DEF = "hanim_r_forearm"
Transform173 = x3d.Transform()
Transform173.translation = [-7.489,44.990002,-2.016]
Shape174 = x3d.Shape()
Appearance175 = x3d.Appearance()
Material176 = x3d.Material()
Material176.diffuseColor = [0.588,0.588,0.588]

Appearance175.material = Material176
ImageTexture177 = x3d.ImageTexture()
ImageTexture177.USE = "RuTextureAtlas"

Appearance175.texture = ImageTexture177

Shape174.appearance = Appearance175
IndexedFaceSet178 = x3d.IndexedFaceSet()
IndexedFaceSet178.coordIndex = [14,20,0,-1,0,12,14,-1,13,15,14,-1,14,12,13,-1,1,21,15,-1,15,13,1,-1,2,22,21,-1,21,1,2,-1,3,23,22,-1,22,2,3,-1,18,16,23,-1,23,3,18,-1,18,19,17,-1,17,16,18,-1,20,17,19,-1,19,0,20,-1,0,35,34,-1,34,12,0,-1,12,34,36,-1,36,13,12,-1,36,37,1,-1,1,13,36,-1,37,38,2,-1,2,1,37,-1,38,39,3,-1,3,2,38,-1,39,40,18,-1,18,3,39,-1,41,35,0,-1,0,19,41,-1,18,40,41,-1,41,19,18,-1,4,24,31,-1,31,11,4,-1,11,31,25,-1,25,5,11,-1,5,25,28,-1,28,8,5,-1,10,30,26,-1,26,6,10,-1,7,27,24,-1,24,4,7,-1,8,28,29,-1,29,9,8,-1,9,29,30,-1,30,10,9,-1,6,26,27,-1,27,7,6,-1,24,32,31,-1,31,32,25,-1,25,32,28,-1,28,32,29,-1,29,32,30,-1,30,32,26,-1,26,32,27,-1,27,32,24,-1,14,33,20,-1,20,33,17,-1,17,33,16,-1,16,33,23,-1,23,33,22,-1,22,33,21,-1,21,33,15,-1,15,33,14,-1,35,4,11,-1,11,34,35,-1,34,11,5,-1,5,36,34,-1,5,8,37,-1,37,36,5,-1,8,9,38,-1,38,37,8,-1,9,10,39,-1,39,38,9,-1,10,6,40,-1,40,39,10,-1,7,4,35,-1,35,41,7,-1,40,6,7,-1,7,41,40,-1]
IndexedFaceSet178.creaseAngle = 1.57
IndexedFaceSet178.texCoordIndex = [0,3,2,-1,2,1,0,-1,5,4,0,-1,0,1,5,-1,7,6,4,-1,4,5,7,-1,9,8,6,-1,6,7,9,-1,11,10,8,-1,8,9,11,-1,13,12,10,-1,10,11,13,-1,35,15,14,-1,14,34,35,-1,3,14,15,-1,15,2,3,-1,2,39,38,-1,38,1,2,-1,1,38,40,-1,40,5,1,-1,40,41,7,-1,7,5,40,-1,41,42,9,-1,9,7,41,-1,42,43,11,-1,11,9,42,-1,43,44,13,-1,13,11,43,-1,46,39,2,-1,2,15,46,-1,35,45,46,-1,46,15,35,-1,17,25,24,-1,24,16,17,-1,16,24,26,-1,26,18,16,-1,18,26,27,-1,27,19,18,-1,21,29,28,-1,28,22,21,-1,23,30,25,-1,25,17,23,-1,19,27,31,-1,31,20,19,-1,20,31,29,-1,29,21,20,-1,36,37,30,-1,30,23,36,-1,25,32,24,-1,24,32,26,-1,26,32,27,-1,27,32,31,-1,31,32,29,-1,29,32,28,-1,37,32,30,-1,30,32,25,-1,0,33,3,-1,3,33,14,-1,14,33,34,-1,12,33,10,-1,10,33,8,-1,8,33,6,-1,6,33,4,-1,4,33,0,-1,39,17,16,-1,16,38,39,-1,38,16,18,-1,18,40,38,-1,18,19,41,-1,41,40,18,-1,19,20,42,-1,42,41,19,-1,20,21,43,-1,43,42,20,-1,21,22,44,-1,44,43,21,-1,23,17,39,-1,39,46,23,-1,45,36,23,-1,23,46,45,-1]
Coordinate179 = x3d.Coordinate()

IndexedFaceSet178.coord = Coordinate179
TextureCoordinate180 = x3d.TextureCoordinate()

IndexedFaceSet178.texCoord = TextureCoordinate180

Shape174.geometry = IndexedFaceSet178

Transform173.children.append(Shape174)

HAnimSegment172.children.append(Transform173)

HAnimJoint171.children.append(HAnimSegment172)
HAnimJoint181 = x3d.HAnimJoint()
HAnimJoint181.name = "r_radiocarpal"
HAnimJoint181.DEF = "hanim_r_radiocarpal"
HAnimJoint181.center = [-7.938,35.98,-1.856]
HAnimJoint181.ulimit = [0,0,0]
HAnimJoint181.llimit = [0,0,0]
HAnimSegment182 = x3d.HAnimSegment()
HAnimSegment182.name = "r_carpal"
HAnimSegment182.DEF = "hanim_r_carpal"
Transform183 = x3d.Transform()
Transform183.translation = [-7.938,35.98,-1.856]
Shape184 = x3d.Shape()
Appearance185 = x3d.Appearance()
Material186 = x3d.Material()
Material186.diffuseColor = [0.588,0.588,0.588]

Appearance185.material = Material186
ImageTexture187 = x3d.ImageTexture()
ImageTexture187.USE = "RuTextureAtlas"

Appearance185.texture = ImageTexture187

Shape184.appearance = Appearance185
IndexedFaceSet188 = x3d.IndexedFaceSet()
IndexedFaceSet188.coordIndex = [14,13,18,-1,18,17,14,-1,12,11,20,-1,20,19,12,-1,4,0,6,-1,6,8,4,-1,10,9,22,-1,22,21,10,-1,16,15,17,-1,17,18,16,-1,2,5,8,-1,8,6,2,-1,13,14,19,-1,19,20,13,-1,3,7,8,-1,8,5,3,-1,15,16,21,-1,21,22,15,-1,8,7,1,-1,1,4,8,-1,2,14,17,-1,17,5,2,-1,18,13,28,-1,28,32,18,-1,12,19,6,-1,6,0,12,-1,20,11,24,-1,24,35,20,-1,10,21,36,-1,36,26,10,-1,22,9,1,-1,1,7,22,-1,30,16,18,-1,18,32,30,-1,17,15,3,-1,3,5,17,-1,28,13,20,-1,20,35,28,-1,19,14,2,-1,2,6,19,-1,3,15,22,-1,22,7,3,-1,21,16,30,-1,30,36,21,-1,28,27,33,-1,33,32,28,-1,24,23,34,-1,34,35,24,-1,25,26,36,-1,36,37,25,-1,30,32,33,-1,33,29,30,-1,31,38,34,-1,34,23,31,-1,29,33,38,-1,38,37,29,-1,28,35,34,-1,34,27,28,-1,29,37,36,-1,36,30,29,-1,27,34,38,-1,38,33,27,-1,31,25,37,-1,37,38,31,-1,73,39,43,-1,43,44,73,-1,40,41,45,-1,45,46,40,-1,42,48,43,-1,43,39,42,-1,47,45,41,-1,41,60,47,-1,42,40,46,-1,46,48,42,-1,9,52,50,-1,50,1,9,-1,4,51,49,-1,49,0,4,-1,11,64,57,-1,57,24,11,-1,1,50,51,-1,51,4,1,-1,10,53,52,-1,52,9,10,-1,26,74,53,-1,53,10,26,-1,0,49,76,-1,76,12,0,-1,31,61,67,-1,67,25,31,-1,25,67,74,-1,74,26,25,-1,24,57,54,-1,54,23,24,-1,23,54,61,-1,61,31,23,-1,54,57,55,-1,39,55,56,-1,56,42,39,-1,42,56,58,-1,58,40,42,-1,40,58,59,-1,59,41,40,-1,59,61,60,-1,60,41,59,-1,61,54,73,-1,73,60,61,-1,57,64,62,-1,62,55,57,-1,55,62,63,-1,63,56,55,-1,56,63,65,-1,65,58,56,-1,58,65,66,-1,66,59,58,-1,59,66,61,-1,52,71,69,-1,69,50,52,-1,51,70,68,-1,68,49,51,-1,50,69,70,-1,70,51,50,-1,53,72,71,-1,71,52,53,-1,76,49,68,-1,68,77,76,-1,74,67,66,-1,66,75,74,-1,78,69,71,-1,71,79,78,-1,79,71,72,-1,72,80,79,-1,87,80,72,-1,72,75,87,-1,81,66,65,-1,65,82,81,-1,82,65,63,-1,63,83,82,-1,83,63,62,-1,62,84,83,-1,88,84,62,-1,62,77,88,-1,85,68,70,-1,70,86,85,-1,86,70,69,-1,69,78,86,-1,60,73,44,-1,44,47,60,-1,54,55,39,-1,39,73,54,-1,74,75,72,-1,72,53,74,-1,81,87,75,-1,75,66,81,-1,61,66,67,-1,64,76,77,-1,77,62,64,-1,85,88,77,-1,77,68,85,-1,12,76,64,-1,64,11,12,-1,47,48,46,-1,46,45,47,-1,47,44,43,-1,43,48,47,-1,78,79,90,-1,90,91,78,-1,86,78,91,-1,91,92,86,-1,85,86,92,-1,92,93,85,-1,88,85,93,-1,93,94,88,-1,84,88,94,-1,94,95,84,-1,83,84,95,-1,95,96,83,-1,82,83,96,-1,96,97,82,-1,81,82,97,-1,97,98,81,-1,87,81,98,-1,98,99,87,-1,80,87,99,-1,99,100,80,-1,80,100,90,-1,90,79,80,-1,91,90,89,-1,92,91,89,-1,93,92,89,-1,94,93,89,-1,95,94,89,-1,96,95,89,-1,97,96,89,-1,98,97,89,-1,99,98,89,-1,100,99,89,-1,90,100,89,-1]
IndexedFaceSet188.creaseAngle = 1.57
IndexedFaceSet188.texCoordIndex = [1,0,3,-1,3,2,1,-1,5,4,7,-1,7,6,5,-1,9,8,11,-1,11,10,9,-1,13,12,15,-1,15,14,13,-1,17,16,95,-1,95,96,17,-1,19,18,10,-1,10,11,19,-1,0,1,6,-1,6,7,0,-1,21,20,98,-1,98,99,21,-1,16,17,14,-1,14,15,16,-1,98,20,22,-1,22,97,98,-1,19,1,2,-1,2,18,19,-1,3,0,24,-1,24,23,3,-1,5,6,11,-1,11,8,5,-1,7,4,26,-1,26,25,7,-1,13,14,28,-1,28,27,13,-1,15,12,22,-1,22,20,15,-1,29,17,96,-1,96,100,29,-1,95,16,21,-1,21,99,95,-1,24,0,7,-1,7,25,24,-1,6,1,19,-1,19,11,6,-1,21,16,15,-1,15,20,21,-1,14,17,29,-1,29,28,14,-1,24,30,31,-1,31,23,24,-1,26,32,33,-1,33,25,26,-1,34,27,28,-1,28,35,34,-1,29,100,101,-1,101,36,29,-1,37,39,33,-1,33,32,37,-1,36,101,38,-1,38,35,36,-1,24,25,33,-1,33,30,24,-1,36,35,28,-1,28,29,36,-1,30,33,39,-1,39,31,30,-1,102,34,35,-1,35,38,102,-1,41,40,47,-1,47,42,41,-1,44,43,46,-1,46,45,44,-1,48,53,47,-1,47,40,48,-1,49,46,43,-1,43,50,49,-1,103,44,45,-1,45,104,103,-1,12,52,51,-1,51,22,12,-1,9,55,54,-1,54,8,9,-1,4,59,56,-1,56,26,4,-1,22,51,105,-1,105,97,22,-1,13,57,52,-1,52,12,13,-1,27,58,57,-1,57,13,27,-1,8,54,62,-1,62,5,8,-1,102,61,60,-1,60,34,102,-1,34,60,58,-1,58,27,34,-1,26,56,63,-1,63,32,26,-1,32,63,64,-1,64,37,32,-1,63,56,67,-1,40,67,68,-1,68,48,40,-1,103,106,65,-1,65,44,103,-1,44,65,66,-1,66,43,44,-1,66,61,50,-1,50,43,66,-1,64,63,41,-1,41,73,64,-1,56,59,74,-1,74,67,56,-1,67,74,76,-1,76,68,67,-1,106,107,69,-1,69,65,106,-1,65,69,70,-1,70,66,65,-1,66,70,61,-1,52,72,71,-1,71,51,52,-1,55,86,85,-1,85,54,55,-1,51,71,108,-1,108,105,51,-1,57,75,72,-1,72,52,57,-1,62,54,85,-1,85,87,62,-1,58,60,70,-1,70,77,58,-1,78,71,72,-1,72,79,78,-1,79,72,75,-1,75,80,79,-1,81,80,75,-1,75,77,81,-1,82,70,69,-1,69,83,82,-1,83,69,107,-1,107,84,83,-1,88,76,74,-1,74,89,88,-1,90,89,74,-1,74,87,90,-1,91,85,86,-1,86,92,91,-1,109,108,71,-1,71,78,109,-1,73,41,42,-1,42,93,73,-1,63,67,40,-1,40,41,63,-1,58,77,75,-1,75,57,58,-1,82,81,77,-1,77,70,82,-1,61,70,60,-1,59,62,87,-1,87,74,59,-1,91,90,87,-1,87,85,91,-1,5,62,59,-1,59,4,5,-1,49,104,45,-1,45,46,49,-1,93,42,47,-1,47,53,93,-1,78,79,111,-1,111,112,78,-1,109,78,112,-1,112,113,109,-1,91,92,114,-1,114,115,91,-1,90,91,115,-1,115,116,90,-1,89,90,116,-1,116,117,89,-1,88,89,117,-1,117,118,88,-1,83,84,119,-1,119,120,83,-1,82,83,120,-1,120,121,82,-1,81,82,121,-1,121,122,81,-1,80,81,122,-1,122,123,80,-1,80,123,111,-1,111,79,80,-1,112,111,110,-1,113,112,110,-1,115,114,94,-1,116,115,94,-1,117,116,94,-1,118,117,94,-1,120,119,110,-1,121,120,110,-1,122,121,110,-1,123,122,110,-1,111,123,110,-1]
Coordinate189 = x3d.Coordinate()

IndexedFaceSet188.coord = Coordinate189
TextureCoordinate190 = x3d.TextureCoordinate()

IndexedFaceSet188.texCoord = TextureCoordinate190

Shape184.geometry = IndexedFaceSet188

Transform183.children.append(Shape184)

HAnimSegment182.children.append(Transform183)

HAnimJoint181.children.append(HAnimSegment182)

HAnimJoint171.children.append(HAnimJoint181)

HAnimJoint161.children.append(HAnimJoint171)

HAnimJoint121.children.append(HAnimJoint161)
HAnimJoint191 = x3d.HAnimJoint()
HAnimJoint191.name = "vl5"
HAnimJoint191.DEF = "hanim_vl5"
HAnimJoint191.center = [0,38.25,-1.903]
HAnimJoint191.ulimit = [0,0,0]
HAnimJoint191.llimit = [0,0,0]
HAnimSegment192 = x3d.HAnimSegment()
HAnimSegment192.name = "l5"
HAnimSegment192.DEF = "hanim_l5"
Transform193 = x3d.Transform()
Transform193.translation = [0,38.25,-1.903]
Shape194 = x3d.Shape()
Appearance195 = x3d.Appearance()
Material196 = x3d.Material()
Material196.diffuseColor = [0.588,0.588,0.588]

Appearance195.material = Material196
ImageTexture197 = x3d.ImageTexture()
ImageTexture197.USE = "RuTextureAtlas"

Appearance195.texture = ImageTexture197

Shape194.appearance = Appearance195
IndexedFaceSet198 = x3d.IndexedFaceSet()
IndexedFaceSet198.coordIndex = [6,4,2,-1,2,3,6,-1,3,7,6,-1,85,0,8,-1,8,165,85,-1,9,8,0,-1,0,1,9,-1,56,14,13,-1,14,15,12,-1,12,13,14,-1,56,13,7,-1,6,7,13,-1,13,12,6,-1,56,75,14,-1,11,15,14,-1,14,75,11,-1,5,4,18,-1,15,20,18,-1,18,12,15,-1,4,6,12,-1,12,18,4,-1,16,17,21,-1,21,20,16,-1,11,16,20,-1,20,15,11,-1,1,5,9,-1,24,104,184,-1,184,121,24,-1,25,105,104,-1,104,24,25,-1,19,21,106,-1,106,25,19,-1,165,8,24,-1,24,121,165,-1,8,9,25,-1,25,24,8,-1,9,5,19,-1,19,25,9,-1,22,192,189,-1,189,26,22,-1,23,22,26,-1,26,27,23,-1,106,107,23,-1,23,27,106,-1,56,102,103,-1,103,75,56,-1,31,30,22,-1,22,23,31,-1,58,77,76,-1,76,57,58,-1,77,32,29,-1,29,76,77,-1,33,100,75,-1,75,103,33,-1,17,98,107,-1,96,90,31,-1,31,23,96,-1,35,34,33,-1,33,29,35,-1,37,36,30,-1,30,31,37,-1,31,90,91,-1,91,37,31,-1,32,38,35,-1,35,29,32,-1,59,78,77,-1,77,58,59,-1,78,39,32,-1,32,77,78,-1,41,40,36,-1,36,37,41,-1,39,42,38,-1,38,32,39,-1,60,79,78,-1,78,59,60,-1,79,43,39,-1,39,78,79,-1,45,44,40,-1,40,41,45,-1,41,92,93,-1,93,45,41,-1,43,46,42,-1,42,39,43,-1,61,47,79,-1,79,60,61,-1,47,48,43,-1,43,79,47,-1,112,111,44,-1,44,45,112,-1,93,94,112,-1,112,45,93,-1,48,113,46,-1,46,43,48,-1,51,52,17,-1,17,16,51,-1,53,51,16,-1,16,11,53,-1,100,101,53,-1,53,11,100,-1,34,96,97,-1,97,55,34,-1,55,54,33,-1,33,34,55,-1,4,5,1,-1,1,2,4,-1,42,92,91,-1,91,38,42,-1,62,63,116,-1,116,245,62,-1,7,3,63,-1,63,62,7,-1,117,81,62,-1,62,245,117,-1,81,10,7,-1,7,62,81,-1,81,108,109,-1,109,10,81,-1,108,110,253,-1,253,64,108,-1,28,64,65,-1,65,72,28,-1,257,65,64,-1,64,253,257,-1,82,73,72,-1,72,65,82,-1,260,82,65,-1,65,257,260,-1,83,86,73,-1,73,82,83,-1,263,83,82,-1,82,260,263,-1,66,67,86,-1,86,83,66,-1,266,66,83,-1,83,263,266,-1,68,69,67,-1,67,66,68,-1,269,68,66,-1,66,266,269,-1,86,67,84,-1,84,74,86,-1,70,71,80,-1,80,84,70,-1,69,70,84,-1,84,67,69,-1,118,192,22,-1,22,30,118,-1,36,119,118,-1,118,30,36,-1,40,275,119,-1,119,36,40,-1,120,275,40,-1,40,44,120,-1,122,120,44,-1,44,111,122,-1,52,51,87,-1,51,53,87,-1,53,101,87,-1,54,55,87,-1,55,97,87,-1,49,50,89,-1,89,88,49,-1,115,95,89,-1,89,50,115,-1,114,49,88,-1,88,283,114,-1,34,35,90,-1,90,96,34,-1,35,38,91,-1,91,90,35,-1,92,42,46,-1,46,93,92,-1,93,46,113,-1,113,94,93,-1,41,37,91,-1,91,92,41,-1,115,80,71,-1,71,95,115,-1,96,98,99,-1,99,97,96,-1,98,17,52,-1,52,99,98,-1,33,54,101,-1,101,100,33,-1,97,99,87,-1,99,52,87,-1,101,54,87,-1,102,57,76,-1,76,103,102,-1,33,103,76,-1,76,29,33,-1,100,11,75,-1,26,189,184,-1,184,104,26,-1,27,26,104,-1,104,105,27,-1,21,17,107,-1,107,106,21,-1,98,96,23,-1,23,107,98,-1,106,27,105,-1,105,25,106,-1,108,64,28,-1,28,109,108,-1,81,117,110,-1,110,108,81,-1,18,19,5,-1,20,21,19,-1,19,18,20,-1,123,124,130,-1,130,129,123,-1,124,125,131,-1,131,130,124,-1,125,126,132,-1,132,131,125,-1,126,127,133,-1,133,132,126,-1,127,128,134,-1,134,133,127,-1,128,123,129,-1,129,134,128,-1,129,130,136,-1,136,135,129,-1,130,131,137,-1,137,136,130,-1,131,132,138,-1,138,137,131,-1,132,133,139,-1,139,138,132,-1,133,134,140,-1,140,139,133,-1,134,129,135,-1,135,140,134,-1,135,136,142,-1,142,141,135,-1,136,137,143,-1,143,142,136,-1,137,138,144,-1,144,143,137,-1,138,139,145,-1,145,144,138,-1,139,140,146,-1,146,145,139,-1,140,135,141,-1,141,146,140,-1,141,142,148,-1,148,147,141,-1,142,143,149,-1,149,148,142,-1,143,144,150,-1,150,149,143,-1,144,145,151,-1,151,150,144,-1,145,146,152,-1,152,151,145,-1,146,141,147,-1,147,152,146,-1,147,148,154,-1,154,153,147,-1,148,149,155,-1,155,154,148,-1,149,150,156,-1,156,155,149,-1,150,151,157,-1,157,156,150,-1,151,152,158,-1,158,157,151,-1,152,147,153,-1,153,158,152,-1,127,126,125,-1,125,124,123,-1,127,125,123,-1,128,127,123,-1,154,155,156,-1,156,157,158,-1,154,156,158,-1,153,154,158,-1,161,160,159,-1,159,162,161,-1,160,161,163,-1,85,165,164,-1,164,166,85,-1,168,167,166,-1,166,164,168,-1,169,171,170,-1,170,171,172,-1,172,173,170,-1,169,163,171,-1,161,172,171,-1,171,163,161,-1,169,170,174,-1,175,174,170,-1,170,173,175,-1,176,177,162,-1,173,172,177,-1,177,178,173,-1,162,177,172,-1,172,161,162,-1,180,178,179,-1,179,181,180,-1,175,173,178,-1,178,180,175,-1,167,168,176,-1,182,121,184,-1,184,183,182,-1,185,182,183,-1,183,186,185,-1,187,185,188,-1,188,179,187,-1,165,121,182,-1,182,164,165,-1,164,182,185,-1,185,168,164,-1,168,185,187,-1,187,176,168,-1,191,190,189,-1,189,192,191,-1,194,193,190,-1,190,191,194,-1,188,193,194,-1,194,195,188,-1,169,174,197,-1,197,196,169,-1,198,194,191,-1,191,199,198,-1,202,201,200,-1,200,203,202,-1,203,200,204,-1,204,205,203,-1,206,197,174,-1,174,207,206,-1,181,195,208,-1,209,194,198,-1,198,210,209,-1,211,204,206,-1,206,212,211,-1,213,198,199,-1,199,214,213,-1,198,213,215,-1,215,210,198,-1,205,204,211,-1,211,216,205,-1,217,202,203,-1,203,218,217,-1,218,203,205,-1,205,219,218,-1,220,213,214,-1,214,221,220,-1,219,205,216,-1,216,222,219,-1,223,217,218,-1,218,224,223,-1,224,218,219,-1,219,225,224,-1,226,220,221,-1,221,227,226,-1,220,226,229,-1,229,228,220,-1,225,219,222,-1,222,230,225,-1,231,223,224,-1,224,232,231,-1,232,224,225,-1,225,233,232,-1,234,226,227,-1,227,235,234,-1,229,226,234,-1,234,236,229,-1,233,225,230,-1,230,237,233,-1,238,180,181,-1,181,239,238,-1,240,175,180,-1,180,238,240,-1,207,175,240,-1,240,241,207,-1,212,243,242,-1,242,209,212,-1,243,212,206,-1,206,244,243,-1,162,159,167,-1,167,176,162,-1,222,216,215,-1,215,228,222,-1,246,245,116,-1,116,247,246,-1,163,246,247,-1,247,160,163,-1,117,245,246,-1,246,248,117,-1,248,246,163,-1,163,249,248,-1,248,249,251,-1,251,250,248,-1,250,252,253,-1,253,110,250,-1,256,255,254,-1,254,252,256,-1,257,253,252,-1,252,254,257,-1,258,254,255,-1,255,259,258,-1,260,257,254,-1,254,258,260,-1,261,258,259,-1,259,262,261,-1,263,260,258,-1,258,261,263,-1,264,261,262,-1,262,265,264,-1,266,263,261,-1,261,264,266,-1,267,264,265,-1,265,268,267,-1,269,266,264,-1,264,267,269,-1,262,271,270,-1,270,265,262,-1,273,270,272,-1,272,274,273,-1,268,265,270,-1,270,273,268,-1,118,199,191,-1,191,192,118,-1,214,199,118,-1,118,119,214,-1,221,214,119,-1,119,275,221,-1,120,227,221,-1,221,275,120,-1,122,235,227,-1,227,120,122,-1,239,276,238,-1,238,276,240,-1,240,276,241,-1,244,276,243,-1,243,276,242,-1,277,280,279,-1,279,278,277,-1,281,278,279,-1,279,282,281,-1,114,283,280,-1,280,277,114,-1,212,209,210,-1,210,211,212,-1,211,210,215,-1,215,216,211,-1,228,229,230,-1,230,222,228,-1,229,236,237,-1,237,230,229,-1,220,228,215,-1,215,213,220,-1,281,282,274,-1,274,272,281,-1,209,242,284,-1,284,208,209,-1,208,284,239,-1,239,181,208,-1,206,207,241,-1,241,244,206,-1,242,276,284,-1,284,276,239,-1,241,276,244,-1,196,197,200,-1,200,201,196,-1,206,204,200,-1,200,197,206,-1,207,174,175,-1,190,183,184,-1,184,189,190,-1,193,186,183,-1,183,190,193,-1,179,188,195,-1,195,181,179,-1,208,195,194,-1,194,209,208,-1,188,185,186,-1,186,193,188,-1,250,251,256,-1,256,252,250,-1,248,250,110,-1,110,117,248,-1,177,176,187,-1,178,177,187,-1,187,179,178,-1,285,288,287,-1,287,286,285,-1,286,287,290,-1,290,289,286,-1,289,290,292,-1,292,291,289,-1,291,292,294,-1,294,293,291,-1,293,294,296,-1,296,295,293,-1,295,296,288,-1,288,285,295,-1,288,298,297,-1,297,287,288,-1,287,297,299,-1,299,290,287,-1,290,299,300,-1,300,292,290,-1,292,300,301,-1,301,294,292,-1,294,301,302,-1,302,296,294,-1,296,302,298,-1,298,288,296,-1,298,304,303,-1,303,297,298,-1,297,303,305,-1,305,299,297,-1,299,305,306,-1,306,300,299,-1,300,306,307,-1,307,301,300,-1,301,307,308,-1,308,302,301,-1,302,308,304,-1,304,298,302,-1,304,310,309,-1,309,303,304,-1,303,309,311,-1,311,305,303,-1,305,311,312,-1,312,306,305,-1,306,312,313,-1,313,307,306,-1,307,313,314,-1,314,308,307,-1,308,314,310,-1,310,304,308,-1,310,316,315,-1,315,309,310,-1,309,315,317,-1,317,311,309,-1,311,317,318,-1,318,312,311,-1,312,318,319,-1,319,313,312,-1,313,319,320,-1,320,314,313,-1,314,320,316,-1,316,310,314,-1,285,286,289,-1,289,291,293,-1,285,289,293,-1,295,285,293,-1,320,319,318,-1,318,317,315,-1,320,318,315,-1,316,320,315,-1,321,322,326,-1,326,330,321,-1,322,323,327,-1,327,326,322,-1,323,342,343,-1,343,327,323,-1,325,329,328,-1,328,324,325,-1,321,330,329,-1,329,325,321,-1,331,335,330,-1,330,326,331,-1,332,331,326,-1,326,327,332,-1,333,341,358,-1,358,328,333,-1,333,328,329,-1,329,334,333,-1,334,329,330,-1,330,335,334,-1,337,336,335,-1,335,331,337,-1,338,337,331,-1,331,332,338,-1,334,340,339,-1,339,333,334,-1,335,336,340,-1,340,334,335,-1,324,328,358,-1,358,365,324,-1,366,332,327,-1,327,343,366,-1,338,332,366,-1,366,367,338,-1,333,339,368,-1,368,341,333,-1,337,372,371,-1,371,336,337,-1,338,373,372,-1,372,337,338,-1,340,370,369,-1,369,339,340,-1,336,371,370,-1,370,340,336,-1,367,375,373,-1,373,338,367,-1,339,369,374,-1,374,368,339,-1,344,347,346,-1,346,345,344,-1,345,346,349,-1,349,348,345,-1,348,349,343,-1,343,342,348,-1,351,350,353,-1,353,352,351,-1,344,351,352,-1,352,347,344,-1,354,346,347,-1,347,355,354,-1,356,349,346,-1,346,354,356,-1,357,353,358,-1,358,341,357,-1,357,359,352,-1,352,353,357,-1,359,355,347,-1,347,352,359,-1,360,354,355,-1,355,361,360,-1,362,356,354,-1,354,360,362,-1,359,357,364,-1,364,363,359,-1,355,359,363,-1,363,361,355,-1,350,365,358,-1,358,353,350,-1,366,343,349,-1,349,356,366,-1,362,367,366,-1,366,356,362,-1,357,341,368,-1,368,364,357,-1,376,377,360,-1,360,361,376,-1,377,380,362,-1,362,360,377,-1,378,379,363,-1,363,364,378,-1,379,376,361,-1,361,363,379,-1,380,375,367,-1,367,362,380,-1,374,378,364,-1,364,368,374,-1,3,2,371,-1,371,372,3,-1,0,85,374,-1,374,369,0,-1,1,0,369,-1,369,370,1,-1,2,1,370,-1,370,371,2,-1,116,63,373,-1,373,375,116,-1,63,3,372,-1,372,373,63,-1,159,160,377,-1,377,376,159,-1,85,166,378,-1,378,374,85,-1,166,167,379,-1,379,378,166,-1,167,159,376,-1,376,379,167,-1,247,116,375,-1,375,380,247,-1,160,247,380,-1,380,377,160,-1]
IndexedFaceSet198.creaseAngle = 1.57
IndexedFaceSet198.texCoordIndex = [2,3,0,-1,0,1,2,-1,1,4,2,-1,20,21,18,-1,18,19,20,-1,23,18,21,-1,21,22,23,-1,24,25,26,-1,25,28,27,-1,27,26,25,-1,24,26,29,-1,30,29,26,-1,26,27,30,-1,24,31,25,-1,32,28,25,-1,25,31,32,-1,33,34,35,-1,28,36,35,-1,35,27,28,-1,34,30,27,-1,27,35,34,-1,38,39,37,-1,37,36,38,-1,32,38,36,-1,36,28,32,-1,22,33,23,-1,41,42,43,-1,43,40,41,-1,44,45,42,-1,42,41,44,-1,46,37,47,-1,47,44,46,-1,19,18,41,-1,41,40,19,-1,18,23,44,-1,44,41,18,-1,23,33,46,-1,46,44,23,-1,50,51,48,-1,48,49,50,-1,53,50,49,-1,49,52,53,-1,47,54,53,-1,53,52,47,-1,24,55,56,-1,56,31,24,-1,57,58,50,-1,50,53,57,-1,61,62,59,-1,59,60,61,-1,62,64,63,-1,63,59,62,-1,65,66,31,-1,31,56,65,-1,39,67,54,-1,68,69,57,-1,57,53,68,-1,70,71,65,-1,65,63,70,-1,72,73,58,-1,58,57,72,-1,57,69,74,-1,74,72,57,-1,64,75,70,-1,70,63,64,-1,76,77,62,-1,62,61,76,-1,77,78,64,-1,64,62,77,-1,79,80,73,-1,73,72,79,-1,78,81,75,-1,75,64,78,-1,82,83,77,-1,77,76,82,-1,83,84,78,-1,78,77,83,-1,85,86,80,-1,80,79,85,-1,79,87,88,-1,88,85,79,-1,84,89,81,-1,81,78,84,-1,90,91,83,-1,83,82,90,-1,91,92,84,-1,84,83,91,-1,93,122,86,-1,86,85,93,-1,88,123,93,-1,93,85,88,-1,92,124,89,-1,89,84,92,-1,125,126,39,-1,39,38,125,-1,127,125,38,-1,38,32,127,-1,66,128,127,-1,127,32,66,-1,71,68,129,-1,129,130,71,-1,130,131,65,-1,65,71,130,-1,34,33,22,-1,22,132,34,-1,81,87,74,-1,74,75,81,-1,7,8,5,-1,5,6,7,-1,4,1,8,-1,8,7,4,-1,9,10,7,-1,7,6,9,-1,10,11,4,-1,4,7,10,-1,10,12,13,-1,13,11,10,-1,12,15,16,-1,16,14,12,-1,95,14,17,-1,17,94,95,-1,96,17,14,-1,14,16,96,-1,97,98,94,-1,94,17,97,-1,99,97,17,-1,17,96,99,-1,100,101,98,-1,98,97,100,-1,102,100,97,-1,97,99,102,-1,103,104,101,-1,101,100,103,-1,105,103,100,-1,100,102,105,-1,106,107,104,-1,104,103,106,-1,108,106,103,-1,103,105,108,-1,101,104,109,-1,109,110,101,-1,112,113,111,-1,111,109,112,-1,107,112,109,-1,109,104,107,-1,133,51,50,-1,50,58,133,-1,73,134,133,-1,133,58,73,-1,80,135,134,-1,134,73,80,-1,136,135,80,-1,80,86,136,-1,137,136,86,-1,86,122,137,-1,126,125,138,-1,125,127,138,-1,127,128,138,-1,131,130,138,-1,130,129,138,-1,114,115,116,-1,116,117,114,-1,118,119,116,-1,116,115,118,-1,120,114,117,-1,117,121,120,-1,71,70,69,-1,69,68,71,-1,70,75,74,-1,74,69,70,-1,87,81,89,-1,89,88,87,-1,88,89,124,-1,124,123,88,-1,79,72,74,-1,74,87,79,-1,118,111,113,-1,113,119,118,-1,68,67,139,-1,139,129,68,-1,67,39,126,-1,126,139,67,-1,65,131,128,-1,128,66,65,-1,129,139,138,-1,139,126,138,-1,128,131,138,-1,55,60,59,-1,59,56,55,-1,65,56,59,-1,59,63,65,-1,66,32,31,-1,49,48,43,-1,43,42,49,-1,52,49,42,-1,42,45,52,-1,37,39,54,-1,54,47,37,-1,67,68,53,-1,53,54,67,-1,47,52,45,-1,45,44,47,-1,12,14,95,-1,95,13,12,-1,10,9,15,-1,15,12,10,-1,35,46,33,-1,36,37,46,-1,46,35,36,-1,140,141,142,-1,142,143,140,-1,141,144,145,-1,145,142,141,-1,144,146,147,-1,147,145,144,-1,146,148,149,-1,149,147,146,-1,148,150,151,-1,151,149,148,-1,150,140,143,-1,143,151,150,-1,143,142,152,-1,152,153,143,-1,142,145,154,-1,154,152,142,-1,145,147,155,-1,155,154,145,-1,147,149,156,-1,156,155,147,-1,149,151,157,-1,157,156,149,-1,151,143,153,-1,153,157,151,-1,153,152,158,-1,158,159,153,-1,152,154,160,-1,160,158,152,-1,154,155,161,-1,161,160,154,-1,155,156,162,-1,162,161,155,-1,156,157,163,-1,163,162,156,-1,157,153,159,-1,159,163,157,-1,159,158,164,-1,164,165,159,-1,158,160,166,-1,166,164,158,-1,160,161,167,-1,167,166,160,-1,161,162,168,-1,168,167,161,-1,162,163,169,-1,169,168,162,-1,163,159,165,-1,165,169,163,-1,165,164,170,-1,170,171,165,-1,164,166,172,-1,172,170,164,-1,166,167,173,-1,173,172,166,-1,167,168,174,-1,174,173,167,-1,168,169,175,-1,175,174,168,-1,169,165,171,-1,171,175,169,-1,148,146,144,-1,144,141,140,-1,148,144,140,-1,150,148,140,-1,170,172,173,-1,173,174,175,-1,170,173,175,-1,171,170,175,-1,178,177,176,-1,176,179,178,-1,177,178,180,-1,183,182,181,-1,181,184,183,-1,186,185,184,-1,184,181,186,-1,187,189,188,-1,188,189,190,-1,190,191,188,-1,187,192,189,-1,193,190,189,-1,189,192,193,-1,187,188,194,-1,195,194,188,-1,188,191,195,-1,196,198,197,-1,191,190,198,-1,198,199,191,-1,197,198,190,-1,190,193,197,-1,201,199,200,-1,200,202,201,-1,195,191,199,-1,199,201,195,-1,185,186,196,-1,204,203,206,-1,206,205,204,-1,207,204,205,-1,205,208,207,-1,209,207,210,-1,210,200,209,-1,182,203,204,-1,204,181,182,-1,181,204,207,-1,207,186,181,-1,186,207,209,-1,209,196,186,-1,213,212,211,-1,211,214,213,-1,216,215,212,-1,212,213,216,-1,210,215,216,-1,216,217,210,-1,187,194,219,-1,219,218,187,-1,220,216,213,-1,213,221,220,-1,224,223,222,-1,222,225,224,-1,225,222,226,-1,226,227,225,-1,228,219,194,-1,194,229,228,-1,202,217,230,-1,231,216,220,-1,220,232,231,-1,233,226,228,-1,228,234,233,-1,235,220,221,-1,221,236,235,-1,220,235,237,-1,237,232,220,-1,227,226,233,-1,233,238,227,-1,239,224,225,-1,225,240,239,-1,240,225,227,-1,227,241,240,-1,242,235,236,-1,236,243,242,-1,241,227,238,-1,238,244,241,-1,245,239,240,-1,240,246,245,-1,246,240,241,-1,241,247,246,-1,248,242,243,-1,243,249,248,-1,242,248,251,-1,251,250,242,-1,247,241,244,-1,244,252,247,-1,253,245,246,-1,246,254,253,-1,254,246,247,-1,247,255,254,-1,256,248,249,-1,249,257,256,-1,251,248,256,-1,256,258,251,-1,255,247,252,-1,252,259,255,-1,260,201,202,-1,202,261,260,-1,262,195,201,-1,201,260,262,-1,229,195,262,-1,262,263,229,-1,234,265,264,-1,264,231,234,-1,265,234,228,-1,228,266,265,-1,197,267,185,-1,185,196,197,-1,244,238,237,-1,237,250,244,-1,270,269,268,-1,268,271,270,-1,180,270,271,-1,271,177,180,-1,272,269,270,-1,270,273,272,-1,273,270,180,-1,180,274,273,-1,273,274,276,-1,276,275,273,-1,275,277,279,-1,279,278,275,-1,282,281,280,-1,280,277,282,-1,283,279,277,-1,277,280,283,-1,284,280,281,-1,281,285,284,-1,286,283,280,-1,280,284,286,-1,287,284,285,-1,285,288,287,-1,289,286,284,-1,284,287,289,-1,290,287,288,-1,288,291,290,-1,292,289,287,-1,287,290,292,-1,293,290,291,-1,291,294,293,-1,295,292,290,-1,290,293,295,-1,288,297,296,-1,296,291,288,-1,299,296,298,-1,298,300,299,-1,294,291,296,-1,296,299,294,-1,301,221,213,-1,213,214,301,-1,236,221,301,-1,301,302,236,-1,243,236,302,-1,302,303,243,-1,304,249,243,-1,243,303,304,-1,305,257,249,-1,249,304,305,-1,261,306,260,-1,260,306,262,-1,262,306,263,-1,266,306,265,-1,265,306,264,-1,307,310,309,-1,309,308,307,-1,311,308,309,-1,309,312,311,-1,313,314,310,-1,310,307,313,-1,234,231,232,-1,232,233,234,-1,233,232,237,-1,237,238,233,-1,250,251,252,-1,252,244,250,-1,251,258,259,-1,259,252,251,-1,242,250,237,-1,237,235,242,-1,311,312,300,-1,300,298,311,-1,231,264,315,-1,315,230,231,-1,230,315,261,-1,261,202,230,-1,228,229,263,-1,263,266,228,-1,264,306,315,-1,315,306,261,-1,263,306,266,-1,218,219,222,-1,222,223,218,-1,228,226,222,-1,222,219,228,-1,229,194,195,-1,212,205,206,-1,206,211,212,-1,215,208,205,-1,205,212,215,-1,200,210,217,-1,217,202,200,-1,230,217,216,-1,216,231,230,-1,210,207,208,-1,208,215,210,-1,275,276,282,-1,282,277,275,-1,273,275,278,-1,278,272,273,-1,198,196,209,-1,199,198,209,-1,209,200,199,-1,316,319,318,-1,318,317,316,-1,317,318,321,-1,321,320,317,-1,320,321,323,-1,323,322,320,-1,322,323,325,-1,325,324,322,-1,324,325,327,-1,327,326,324,-1,326,327,319,-1,319,316,326,-1,319,329,328,-1,328,318,319,-1,318,328,330,-1,330,321,318,-1,321,330,331,-1,331,323,321,-1,323,331,332,-1,332,325,323,-1,325,332,333,-1,333,327,325,-1,327,333,329,-1,329,319,327,-1,329,335,334,-1,334,328,329,-1,328,334,336,-1,336,330,328,-1,330,336,337,-1,337,331,330,-1,331,337,338,-1,338,332,331,-1,332,338,339,-1,339,333,332,-1,333,339,335,-1,335,329,333,-1,335,341,340,-1,340,334,335,-1,334,340,342,-1,342,336,334,-1,336,342,343,-1,343,337,336,-1,337,343,344,-1,344,338,337,-1,338,344,345,-1,345,339,338,-1,339,345,341,-1,341,335,339,-1,341,347,346,-1,346,340,341,-1,340,346,348,-1,348,342,340,-1,342,348,349,-1,349,343,342,-1,343,349,350,-1,350,344,343,-1,344,350,351,-1,351,345,344,-1,345,351,347,-1,347,341,345,-1,316,317,320,-1,320,322,324,-1,316,320,324,-1,326,316,324,-1,351,350,349,-1,349,348,346,-1,351,349,346,-1,347,351,346,-1,352,353,354,-1,354,355,352,-1,353,356,357,-1,357,354,353,-1,356,358,359,-1,359,357,356,-1,361,362,363,-1,363,360,361,-1,352,355,362,-1,362,361,352,-1,364,365,355,-1,355,354,364,-1,366,364,354,-1,354,357,366,-1,367,368,369,-1,369,363,367,-1,367,363,362,-1,362,370,367,-1,370,362,355,-1,355,365,370,-1,371,372,365,-1,365,364,371,-1,373,371,364,-1,364,366,373,-1,370,374,375,-1,375,367,370,-1,365,372,374,-1,374,370,365,-1,360,363,369,-1,369,376,360,-1,377,366,357,-1,357,359,377,-1,373,366,377,-1,377,378,373,-1,367,375,379,-1,379,368,367,-1,371,409,408,-1,408,372,371,-1,373,410,409,-1,409,371,373,-1,374,412,411,-1,411,375,374,-1,372,408,412,-1,412,374,372,-1,378,419,410,-1,410,373,378,-1,375,411,421,-1,421,379,375,-1,380,383,382,-1,382,381,380,-1,381,382,385,-1,385,384,381,-1,384,385,387,-1,387,386,384,-1,389,388,391,-1,391,390,389,-1,380,389,390,-1,390,383,380,-1,392,382,383,-1,383,393,392,-1,394,385,382,-1,382,392,394,-1,395,391,397,-1,397,396,395,-1,395,398,390,-1,390,391,395,-1,398,393,383,-1,383,390,398,-1,399,392,393,-1,393,400,399,-1,401,394,392,-1,392,399,401,-1,398,395,403,-1,403,402,398,-1,393,398,402,-1,402,400,393,-1,388,404,397,-1,397,391,388,-1,405,387,385,-1,385,394,405,-1,401,406,405,-1,405,394,401,-1,395,396,407,-1,407,403,395,-1,414,413,399,-1,399,400,414,-1,413,415,401,-1,401,399,413,-1,417,416,402,-1,402,403,417,-1,416,414,400,-1,400,402,416,-1,415,418,406,-1,406,401,415,-1,420,417,403,-1,403,407,420,-1,1,0,422,-1,422,423,1,-1,21,20,424,-1,424,425,21,-1,22,21,425,-1,425,426,22,-1,132,22,426,-1,426,427,132,-1,5,8,428,-1,428,429,5,-1,8,1,423,-1,423,428,8,-1,176,177,430,-1,430,431,176,-1,183,184,432,-1,432,433,183,-1,184,185,434,-1,434,432,184,-1,185,267,435,-1,435,434,185,-1,271,268,436,-1,436,437,271,-1,177,271,437,-1,437,430,177,-1]
Coordinate199 = x3d.Coordinate()

IndexedFaceSet198.coord = Coordinate199
TextureCoordinate200 = x3d.TextureCoordinate()

IndexedFaceSet198.texCoord = TextureCoordinate200

Shape194.geometry = IndexedFaceSet198

Transform193.children.append(Shape194)

HAnimSegment192.children.append(Transform193)

HAnimJoint191.children.append(HAnimSegment192)
HAnimJoint201 = x3d.HAnimJoint()
HAnimJoint201.name = "skullbase"
HAnimJoint201.DEF = "hanim_skullbase"
HAnimJoint201.center = [0,58.450001,-1.829]
HAnimJoint201.ulimit = [0,0,0]
HAnimJoint201.llimit = [0,0,0]
HAnimSegment202 = x3d.HAnimSegment()
HAnimSegment202.name = "skull"
HAnimSegment202.DEF = "hanim_skull"
Transform203 = x3d.Transform()
Transform203.translation = [0,58.450001,-1.829]
Shape204 = x3d.Shape()
Appearance205 = x3d.Appearance()
Material206 = x3d.Material()
Material206.diffuseColor = [0.588,0.588,0.588]

Appearance205.material = Material206
ImageTexture207 = x3d.ImageTexture()
ImageTexture207.USE = "RuTextureAtlas"

Appearance205.texture = ImageTexture207

Shape204.appearance = Appearance205
IndexedFaceSet208 = x3d.IndexedFaceSet()
IndexedFaceSet208.coordIndex = [56,57,19,-1,19,8,56,-1,7,6,18,-1,18,16,7,-1,10,17,18,-1,18,6,10,-1,15,63,9,-1,25,26,17,-1,17,10,25,-1,24,58,59,-1,59,5,24,-1,14,178,62,-1,62,8,14,-1,7,33,13,-1,13,6,7,-1,6,13,12,-1,12,10,6,-1,46,47,49,-1,49,48,46,-1,19,26,25,-1,25,8,19,-1,29,27,32,-1,32,0,29,-1,28,144,191,-1,191,32,28,-1,60,193,178,-1,178,14,60,-1,2,1,61,-1,61,34,2,-1,61,59,12,-1,12,13,61,-1,62,198,56,-1,56,8,62,-1,26,19,28,-1,28,31,26,-1,16,29,30,-1,30,15,16,-1,15,30,20,-1,20,22,15,-1,22,20,21,-1,21,23,22,-1,23,21,205,-1,205,206,23,-1,145,315,53,-1,53,0,145,-1,52,30,29,-1,29,143,52,-1,3,60,58,-1,58,24,3,-1,32,191,145,-1,145,0,32,-1,29,16,18,-1,18,27,29,-1,27,18,17,-1,17,31,27,-1,17,26,31,-1,21,20,55,-1,55,54,21,-1,30,52,55,-1,55,20,30,-1,4,2,34,-1,34,35,4,-1,9,37,42,-1,42,36,9,-1,9,11,38,-1,38,37,9,-1,11,35,39,-1,39,38,11,-1,35,34,40,-1,34,33,41,-1,41,40,34,-1,33,7,36,-1,36,41,33,-1,42,37,38,-1,38,43,42,-1,43,38,39,-1,39,44,43,-1,11,9,63,-1,63,45,11,-1,35,11,45,-1,45,4,35,-1,44,46,48,-1,48,43,44,-1,44,40,47,-1,47,46,44,-1,40,41,49,-1,49,47,40,-1,41,36,50,-1,50,49,41,-1,36,42,51,-1,51,50,36,-1,42,43,48,-1,48,51,42,-1,32,27,31,-1,31,28,32,-1,9,7,16,-1,16,15,9,-1,56,228,57,-1,57,228,229,-1,3,65,193,-1,193,60,3,-1,1,5,59,-1,59,61,1,-1,13,33,34,-1,34,61,13,-1,21,54,66,-1,66,205,21,-1,67,19,57,-1,57,229,67,-1,28,19,67,-1,67,144,28,-1,228,56,198,-1,48,49,50,-1,50,51,48,-1,40,44,39,-1,39,35,40,-1,36,7,9,-1,15,22,64,-1,64,63,15,-1,58,60,14,-1,14,68,58,-1,14,8,25,-1,25,68,14,-1,10,12,68,-1,68,25,10,-1,58,68,12,-1,12,59,58,-1,98,99,81,-1,81,72,98,-1,146,147,122,-1,122,114,146,-1,72,78,98,-1,74,92,91,-1,91,73,74,-1,74,114,122,-1,122,92,74,-1,114,74,104,-1,104,115,114,-1,129,76,105,-1,105,82,129,-1,148,250,116,-1,116,124,148,-1,114,115,252,-1,252,146,114,-1,116,250,149,-1,149,125,116,-1,79,104,74,-1,74,73,79,-1,70,100,99,-1,99,71,70,-1,75,95,97,-1,97,81,75,-1,77,140,129,-1,129,82,77,-1,107,106,77,-1,77,82,107,-1,83,84,109,-1,109,110,83,-1,86,111,88,-1,88,118,86,-1,150,275,276,-1,102,150,276,-1,119,102,276,-1,84,83,71,-1,71,69,84,-1,83,87,70,-1,70,71,83,-1,120,117,109,-1,109,112,120,-1,120,112,113,-1,113,121,120,-1,147,284,123,-1,123,122,147,-1,91,89,84,-1,84,69,91,-1,92,90,89,-1,89,91,92,-1,88,85,151,-1,151,152,88,-1,87,83,110,-1,110,111,87,-1,87,86,103,-1,103,70,87,-1,85,117,290,-1,290,151,85,-1,118,88,152,-1,152,291,118,-1,290,117,120,-1,120,153,290,-1,121,154,153,-1,153,120,121,-1,72,81,97,-1,97,96,72,-1,95,80,94,-1,94,97,95,-1,97,94,93,-1,93,96,97,-1,69,71,99,-1,99,98,69,-1,100,75,81,-1,81,99,100,-1,73,91,69,-1,69,98,73,-1,92,122,123,-1,123,90,92,-1,70,103,101,-1,101,100,70,-1,291,297,150,-1,118,291,150,-1,102,118,150,-1,121,123,284,-1,284,154,121,-1,107,108,104,-1,104,79,107,-1,116,125,108,-1,108,105,116,-1,116,105,76,-1,76,124,116,-1,79,78,106,-1,106,107,79,-1,252,115,125,-1,125,149,252,-1,107,82,105,-1,105,108,107,-1,115,104,108,-1,108,125,115,-1,117,85,110,-1,110,109,117,-1,86,87,111,-1,112,89,90,-1,90,113,112,-1,84,89,112,-1,112,109,84,-1,113,90,123,-1,123,121,113,-1,101,103,102,-1,102,119,101,-1,88,111,110,-1,110,85,88,-1,102,103,86,-1,86,118,102,-1,78,79,73,-1,73,98,78,-1,119,276,127,-1,127,128,119,-1,101,119,128,-1,128,126,101,-1,100,101,126,-1,126,75,100,-1,76,137,138,-1,138,124,76,-1,124,138,155,-1,155,148,124,-1,129,139,137,-1,137,76,129,-1,130,141,142,-1,142,131,130,-1,131,142,308,-1,308,156,131,-1,132,140,141,-1,141,130,132,-1,135,133,134,-1,134,136,135,-1,136,134,314,-1,314,157,136,-1,77,106,133,-1,133,135,77,-1,137,130,131,-1,131,138,137,-1,138,131,156,-1,156,155,138,-1,139,132,130,-1,130,137,139,-1,141,135,136,-1,136,142,141,-1,142,136,157,-1,157,308,142,-1,140,77,135,-1,135,141,140,-1,140,132,139,-1,139,129,140,-1,53,143,29,-1,29,0,53,-1,159,158,161,-1,161,160,159,-1,162,165,164,-1,164,163,162,-1,166,163,164,-1,164,167,166,-1,168,170,169,-1,171,166,167,-1,167,172,171,-1,174,173,176,-1,176,175,174,-1,177,158,62,-1,62,178,177,-1,162,163,180,-1,180,179,162,-1,163,166,181,-1,181,180,163,-1,183,182,185,-1,185,184,183,-1,161,158,171,-1,171,172,161,-1,186,189,188,-1,188,187,186,-1,190,188,191,-1,191,144,190,-1,192,177,178,-1,178,193,192,-1,195,194,197,-1,197,196,195,-1,197,180,181,-1,181,176,197,-1,62,158,159,-1,159,198,62,-1,172,199,190,-1,190,161,172,-1,165,168,200,-1,200,186,165,-1,168,202,201,-1,201,200,168,-1,202,204,203,-1,203,201,202,-1,204,206,205,-1,205,203,204,-1,145,189,207,-1,207,315,145,-1,209,208,186,-1,186,200,209,-1,210,174,175,-1,175,192,210,-1,188,189,145,-1,145,191,188,-1,186,187,164,-1,164,165,186,-1,187,199,167,-1,167,164,187,-1,167,199,172,-1,203,212,211,-1,211,201,203,-1,200,201,211,-1,211,209,200,-1,214,213,194,-1,194,195,214,-1,170,217,216,-1,216,215,170,-1,170,215,219,-1,219,218,170,-1,218,219,220,-1,220,213,218,-1,213,221,194,-1,194,221,222,-1,222,179,194,-1,179,222,217,-1,217,162,179,-1,216,223,219,-1,219,215,216,-1,223,224,220,-1,220,219,223,-1,218,225,169,-1,169,170,218,-1,213,214,225,-1,225,218,213,-1,224,223,182,-1,182,183,224,-1,224,183,184,-1,184,221,224,-1,221,184,185,-1,185,222,221,-1,222,185,226,-1,226,217,222,-1,217,226,227,-1,227,216,217,-1,216,227,182,-1,182,223,216,-1,188,190,199,-1,199,187,188,-1,170,168,165,-1,165,162,170,-1,159,160,228,-1,160,229,228,-1,210,192,193,-1,193,65,210,-1,196,197,176,-1,176,173,196,-1,180,197,194,-1,194,179,180,-1,203,205,66,-1,66,212,203,-1,67,229,160,-1,160,161,67,-1,190,144,67,-1,67,161,190,-1,228,198,159,-1,182,227,226,-1,226,185,182,-1,221,213,220,-1,220,224,221,-1,217,170,162,-1,168,169,230,-1,230,202,168,-1,175,231,177,-1,177,192,175,-1,177,231,171,-1,171,158,177,-1,166,171,231,-1,231,181,166,-1,175,176,181,-1,181,231,175,-1,233,232,235,-1,235,234,233,-1,146,236,237,-1,237,147,146,-1,232,233,238,-1,240,239,242,-1,242,241,240,-1,240,241,237,-1,237,236,240,-1,236,243,244,-1,244,240,236,-1,245,248,247,-1,247,246,245,-1,148,249,251,-1,251,250,148,-1,236,146,252,-1,252,243,236,-1,251,253,149,-1,149,250,251,-1,254,239,240,-1,240,244,254,-1,256,255,234,-1,234,257,256,-1,258,235,260,-1,260,259,258,-1,261,248,245,-1,245,262,261,-1,263,248,261,-1,261,264,263,-1,265,268,267,-1,267,266,265,-1,269,272,271,-1,271,270,269,-1,276,275,150,-1,276,150,274,-1,273,276,274,-1,266,277,255,-1,255,265,266,-1,265,255,256,-1,256,278,265,-1,280,279,267,-1,267,281,280,-1,280,282,283,-1,283,279,280,-1,147,237,285,-1,285,284,147,-1,242,277,266,-1,266,286,242,-1,241,242,286,-1,286,287,241,-1,271,152,151,-1,151,288,271,-1,278,270,268,-1,268,265,278,-1,278,256,289,-1,289,269,278,-1,288,151,290,-1,290,281,288,-1,272,291,152,-1,152,271,272,-1,290,153,280,-1,280,281,290,-1,282,280,153,-1,153,154,282,-1,232,292,260,-1,260,235,232,-1,259,260,294,-1,294,293,259,-1,260,292,295,-1,295,294,260,-1,277,233,234,-1,234,255,277,-1,257,234,235,-1,235,258,257,-1,239,233,277,-1,277,242,239,-1,241,287,285,-1,285,237,241,-1,256,257,296,-1,296,289,256,-1,150,297,291,-1,150,291,272,-1,274,150,272,-1,282,154,284,-1,284,285,282,-1,263,254,244,-1,244,298,263,-1,251,247,298,-1,298,253,251,-1,251,249,246,-1,246,247,251,-1,254,263,264,-1,264,238,254,-1,252,149,253,-1,253,243,252,-1,263,298,247,-1,247,248,263,-1,243,253,298,-1,298,244,243,-1,281,267,268,-1,268,288,281,-1,269,270,278,-1,279,283,287,-1,287,286,279,-1,266,267,279,-1,279,286,266,-1,283,282,285,-1,285,287,283,-1,296,273,274,-1,274,289,296,-1,271,288,268,-1,268,270,271,-1,274,272,269,-1,269,289,274,-1,238,233,239,-1,239,254,238,-1,273,299,127,-1,127,276,273,-1,296,300,299,-1,299,273,296,-1,257,258,300,-1,300,296,257,-1,246,249,302,-1,302,301,246,-1,249,148,155,-1,155,302,249,-1,245,246,301,-1,301,303,245,-1,305,304,307,-1,307,306,305,-1,304,156,308,-1,308,307,304,-1,309,305,306,-1,306,262,309,-1,310,313,312,-1,312,311,310,-1,313,157,314,-1,314,312,313,-1,261,310,311,-1,311,264,261,-1,301,302,304,-1,304,305,301,-1,302,155,156,-1,156,304,302,-1,303,301,305,-1,305,309,303,-1,306,307,313,-1,313,310,306,-1,307,308,157,-1,157,313,307,-1,262,306,310,-1,310,261,262,-1,262,245,303,-1,303,309,262,-1,207,189,186,-1,186,208,207,-1]
IndexedFaceSet208.creaseAngle = 1.57
IndexedFaceSet208.texCoordIndex = [1,2,3,-1,3,0,1,-1,4,5,6,-1,6,7,4,-1,8,9,6,-1,6,5,8,-1,10,11,12,-1,13,14,9,-1,9,8,13,-1,16,17,18,-1,18,15,16,-1,19,20,21,-1,21,0,19,-1,4,22,23,-1,23,5,4,-1,5,23,24,-1,24,8,5,-1,26,27,28,-1,28,25,26,-1,3,14,13,-1,13,0,3,-1,29,30,31,-1,31,32,29,-1,33,34,54,-1,54,31,33,-1,35,36,20,-1,20,19,35,-1,38,39,40,-1,40,37,38,-1,40,18,24,-1,24,23,40,-1,21,41,1,-1,1,0,21,-1,14,3,33,-1,33,42,14,-1,7,29,43,-1,43,10,7,-1,10,43,44,-1,44,45,10,-1,45,44,46,-1,46,47,45,-1,47,46,48,-1,48,49,47,-1,50,361,51,-1,51,32,50,-1,52,43,29,-1,29,176,52,-1,53,35,17,-1,17,16,53,-1,31,54,50,-1,50,32,31,-1,29,7,6,-1,6,30,29,-1,30,6,9,-1,9,42,30,-1,9,14,42,-1,46,44,55,-1,55,56,46,-1,43,52,55,-1,55,44,43,-1,58,38,37,-1,37,57,58,-1,76,59,60,-1,60,61,76,-1,76,62,63,-1,63,59,76,-1,62,77,64,-1,64,63,62,-1,77,37,65,-1,37,22,66,-1,66,65,37,-1,22,4,61,-1,61,66,22,-1,60,59,63,-1,63,67,60,-1,67,63,64,-1,64,68,67,-1,78,12,11,-1,11,69,78,-1,57,78,69,-1,69,58,57,-1,68,26,25,-1,25,67,68,-1,68,65,27,-1,27,26,68,-1,65,66,28,-1,28,27,65,-1,66,61,70,-1,70,28,66,-1,61,60,71,-1,71,70,61,-1,60,67,25,-1,25,71,60,-1,31,30,42,-1,42,33,31,-1,12,4,7,-1,7,10,12,-1,1,72,2,-1,2,72,73,-1,53,74,36,-1,36,35,53,-1,39,15,18,-1,18,40,39,-1,23,22,37,-1,37,40,23,-1,46,56,79,-1,79,48,46,-1,75,3,2,-1,2,73,75,-1,33,3,75,-1,75,34,33,-1,72,1,41,-1,25,28,70,-1,70,71,25,-1,65,68,64,-1,64,77,65,-1,61,4,76,-1,10,45,80,-1,80,81,10,-1,17,35,19,-1,19,82,17,-1,19,0,13,-1,13,82,19,-1,8,24,82,-1,82,13,8,-1,17,82,24,-1,24,18,17,-1,84,85,86,-1,86,83,84,-1,88,89,90,-1,90,87,88,-1,83,91,84,-1,93,94,95,-1,95,92,93,-1,93,87,90,-1,90,94,93,-1,87,93,97,-1,97,96,87,-1,98,99,100,-1,100,101,98,-1,103,104,105,-1,105,102,103,-1,87,96,106,-1,106,88,87,-1,105,104,107,-1,107,108,105,-1,109,97,93,-1,93,92,109,-1,111,112,85,-1,85,110,111,-1,113,114,115,-1,115,86,113,-1,116,117,98,-1,98,101,116,-1,118,119,116,-1,116,101,118,-1,120,121,122,-1,122,123,120,-1,124,125,126,-1,126,127,124,-1,177,179,130,-1,129,177,130,-1,128,129,130,-1,121,120,110,-1,110,131,121,-1,120,132,111,-1,111,110,120,-1,134,135,122,-1,122,133,134,-1,134,133,137,-1,137,136,134,-1,89,138,139,-1,139,90,89,-1,95,140,121,-1,121,131,95,-1,94,141,140,-1,140,95,94,-1,126,142,143,-1,143,144,126,-1,132,120,123,-1,123,125,132,-1,132,124,145,-1,145,111,132,-1,142,135,146,-1,146,143,142,-1,127,126,144,-1,144,147,127,-1,146,135,134,-1,134,148,146,-1,136,149,148,-1,148,134,136,-1,83,86,115,-1,115,150,83,-1,114,151,152,-1,152,115,114,-1,115,152,153,-1,153,150,115,-1,131,110,85,-1,85,84,131,-1,112,113,86,-1,86,85,112,-1,92,95,131,-1,131,84,92,-1,94,90,139,-1,139,141,94,-1,111,145,154,-1,154,112,111,-1,147,178,177,-1,127,147,177,-1,129,127,177,-1,136,139,138,-1,138,149,136,-1,118,155,97,-1,97,109,118,-1,105,108,155,-1,155,100,105,-1,105,100,99,-1,99,102,105,-1,109,91,119,-1,119,118,109,-1,106,96,108,-1,108,107,106,-1,118,101,100,-1,100,155,118,-1,96,97,155,-1,155,108,96,-1,135,142,123,-1,123,122,135,-1,124,132,125,-1,133,140,141,-1,141,137,133,-1,121,140,133,-1,133,122,121,-1,137,141,139,-1,139,136,137,-1,154,145,129,-1,129,128,154,-1,126,125,123,-1,123,142,126,-1,129,145,124,-1,124,127,129,-1,91,109,92,-1,92,84,91,-1,128,130,156,-1,156,157,128,-1,154,128,157,-1,157,158,154,-1,112,154,158,-1,158,113,112,-1,99,159,160,-1,160,102,99,-1,102,160,161,-1,161,103,102,-1,98,162,159,-1,159,99,98,-1,164,165,166,-1,166,163,164,-1,163,166,168,-1,168,167,163,-1,169,117,165,-1,165,164,169,-1,170,171,172,-1,172,173,170,-1,173,172,174,-1,174,175,173,-1,116,119,171,-1,171,170,116,-1,159,164,163,-1,163,160,159,-1,160,163,167,-1,167,161,160,-1,162,169,164,-1,164,159,162,-1,165,170,173,-1,173,166,165,-1,166,173,175,-1,175,168,166,-1,117,116,170,-1,170,165,117,-1,117,169,162,-1,162,98,117,-1,51,176,29,-1,29,32,51,-1,181,180,183,-1,183,182,181,-1,184,187,186,-1,186,185,184,-1,188,185,186,-1,186,189,188,-1,190,192,191,-1,193,188,189,-1,189,194,193,-1,196,195,198,-1,198,197,196,-1,199,180,201,-1,201,200,199,-1,184,185,203,-1,203,202,184,-1,185,188,204,-1,204,203,185,-1,206,205,208,-1,208,207,206,-1,183,180,193,-1,193,194,183,-1,209,212,211,-1,211,210,209,-1,213,211,215,-1,215,214,213,-1,216,199,200,-1,200,217,216,-1,219,218,221,-1,221,220,219,-1,221,203,204,-1,204,198,221,-1,201,180,181,-1,181,222,201,-1,194,223,213,-1,213,183,194,-1,187,190,224,-1,224,209,187,-1,190,226,225,-1,225,224,190,-1,226,228,227,-1,227,225,226,-1,228,230,229,-1,229,227,228,-1,231,212,232,-1,232,360,231,-1,234,233,209,-1,209,224,234,-1,235,196,197,-1,197,216,235,-1,211,212,231,-1,231,215,211,-1,209,210,186,-1,186,187,209,-1,210,223,189,-1,189,186,210,-1,189,223,194,-1,227,237,236,-1,236,225,227,-1,224,225,236,-1,236,234,224,-1,239,238,218,-1,218,219,239,-1,240,243,242,-1,242,241,240,-1,240,241,245,-1,245,244,240,-1,244,245,247,-1,247,246,244,-1,246,248,218,-1,218,248,249,-1,249,202,218,-1,202,249,243,-1,243,184,202,-1,242,250,245,-1,245,241,242,-1,250,251,247,-1,247,245,250,-1,253,252,191,-1,191,192,253,-1,238,239,252,-1,252,253,238,-1,251,250,205,-1,205,206,251,-1,251,206,207,-1,207,248,251,-1,248,207,208,-1,208,249,248,-1,249,208,254,-1,254,243,249,-1,243,254,255,-1,255,242,243,-1,242,255,205,-1,205,250,242,-1,211,213,223,-1,223,210,211,-1,192,190,187,-1,187,184,192,-1,181,182,256,-1,182,257,256,-1,235,216,217,-1,217,258,235,-1,220,221,198,-1,198,195,220,-1,203,221,218,-1,218,202,203,-1,227,229,259,-1,259,237,227,-1,260,257,182,-1,182,183,260,-1,213,214,260,-1,260,183,213,-1,256,222,181,-1,205,255,254,-1,254,208,205,-1,248,246,247,-1,247,251,248,-1,243,240,184,-1,190,262,261,-1,261,226,190,-1,197,263,199,-1,199,216,197,-1,199,263,193,-1,193,180,199,-1,188,193,263,-1,263,204,188,-1,197,198,204,-1,204,263,197,-1,265,264,267,-1,267,266,265,-1,269,268,271,-1,271,270,269,-1,264,265,272,-1,274,273,276,-1,276,275,274,-1,274,275,271,-1,271,268,274,-1,268,277,278,-1,278,274,268,-1,279,282,281,-1,281,280,279,-1,284,283,286,-1,286,285,284,-1,268,269,287,-1,287,277,268,-1,286,289,288,-1,288,285,286,-1,290,273,274,-1,274,278,290,-1,292,291,266,-1,266,293,292,-1,294,267,296,-1,296,295,294,-1,297,282,279,-1,279,298,297,-1,299,282,297,-1,297,300,299,-1,301,304,303,-1,303,302,301,-1,305,308,307,-1,307,306,305,-1,313,312,311,-1,313,311,310,-1,309,313,310,-1,302,314,291,-1,291,301,302,-1,301,291,292,-1,292,315,301,-1,317,316,303,-1,303,318,317,-1,317,319,320,-1,320,316,317,-1,270,271,322,-1,322,321,270,-1,276,314,302,-1,302,323,276,-1,275,276,323,-1,323,324,275,-1,307,327,326,-1,326,325,307,-1,315,306,304,-1,304,301,315,-1,315,292,328,-1,328,305,315,-1,325,326,329,-1,329,318,325,-1,308,330,327,-1,327,307,308,-1,329,331,317,-1,317,318,329,-1,319,317,331,-1,331,332,319,-1,264,333,296,-1,296,267,264,-1,295,296,335,-1,335,334,295,-1,296,333,336,-1,336,335,296,-1,314,265,266,-1,266,291,314,-1,293,266,267,-1,267,294,293,-1,273,265,314,-1,314,276,273,-1,275,324,322,-1,322,271,275,-1,292,293,337,-1,337,328,292,-1,311,338,330,-1,311,330,308,-1,310,311,308,-1,319,332,321,-1,321,322,319,-1,299,290,278,-1,278,339,299,-1,286,281,339,-1,339,289,286,-1,286,283,280,-1,280,281,286,-1,290,299,300,-1,300,272,290,-1,287,288,289,-1,289,277,287,-1,299,339,281,-1,281,282,299,-1,277,289,339,-1,339,278,277,-1,318,303,304,-1,304,325,318,-1,305,306,315,-1,316,320,324,-1,324,323,316,-1,302,303,316,-1,316,323,302,-1,320,319,322,-1,322,324,320,-1,337,309,310,-1,310,328,337,-1,307,325,304,-1,304,306,307,-1,310,308,305,-1,305,328,310,-1,272,265,273,-1,273,290,272,-1,309,341,340,-1,340,313,309,-1,337,342,341,-1,341,309,337,-1,293,294,342,-1,342,337,293,-1,280,283,344,-1,344,343,280,-1,283,284,345,-1,345,344,283,-1,279,280,343,-1,343,346,279,-1,348,347,350,-1,350,349,348,-1,347,351,352,-1,352,350,347,-1,353,348,349,-1,349,298,353,-1,354,357,356,-1,356,355,354,-1,357,359,358,-1,358,356,357,-1,297,354,355,-1,355,300,297,-1,343,344,347,-1,347,348,343,-1,344,345,351,-1,351,347,344,-1,346,343,348,-1,348,353,346,-1,349,350,357,-1,357,354,349,-1,350,352,359,-1,359,357,350,-1,298,349,354,-1,354,297,298,-1,298,279,346,-1,346,353,298,-1,232,212,209,-1,209,233,232,-1]
Coordinate209 = x3d.Coordinate()

IndexedFaceSet208.coord = Coordinate209
TextureCoordinate210 = x3d.TextureCoordinate()

IndexedFaceSet208.texCoord = TextureCoordinate210

Shape204.geometry = IndexedFaceSet208

Transform203.children.append(Shape204)

HAnimSegment202.children.append(Transform203)

HAnimJoint201.children.append(HAnimSegment202)

HAnimJoint191.children.append(HAnimJoint201)

HAnimJoint121.children.append(HAnimJoint191)

HAnimJoint31.children.append(HAnimJoint121)

HAnimHumanoid23.skeleton.append(HAnimJoint31)
HAnimJoint211 = x3d.HAnimJoint()
HAnimJoint211.USE = "hanim_humanoid_root"

HAnimHumanoid23.joints.append(HAnimJoint211)
HAnimJoint212 = x3d.HAnimJoint()
HAnimJoint212.USE = "hanim_sacroiliac"

HAnimHumanoid23.joints.append(HAnimJoint212)
HAnimJoint213 = x3d.HAnimJoint()
HAnimJoint213.USE = "hanim_skullbase"

HAnimHumanoid23.joints.append(HAnimJoint213)
HAnimJoint214 = x3d.HAnimJoint()
HAnimJoint214.USE = "hanim_vl5"

HAnimHumanoid23.joints.append(HAnimJoint214)
HAnimJoint215 = x3d.HAnimJoint()
HAnimJoint215.USE = "hanim_l_elbow"

HAnimHumanoid23.joints.append(HAnimJoint215)
HAnimJoint216 = x3d.HAnimJoint()
HAnimJoint216.USE = "hanim_r_elbow"

HAnimHumanoid23.joints.append(HAnimJoint216)
HAnimJoint217 = x3d.HAnimJoint()
HAnimJoint217.USE = "hanim_l_hip"

HAnimHumanoid23.joints.append(HAnimJoint217)
HAnimJoint218 = x3d.HAnimJoint()
HAnimJoint218.USE = "hanim_r_hip"

HAnimHumanoid23.joints.append(HAnimJoint218)
HAnimJoint219 = x3d.HAnimJoint()
HAnimJoint219.USE = "hanim_l_knee"

HAnimHumanoid23.joints.append(HAnimJoint219)
HAnimJoint220 = x3d.HAnimJoint()
HAnimJoint220.USE = "hanim_r_knee"

HAnimHumanoid23.joints.append(HAnimJoint220)
HAnimJoint221 = x3d.HAnimJoint()
HAnimJoint221.USE = "hanim_l_metatarsophalangeal_2"

HAnimHumanoid23.joints.append(HAnimJoint221)
HAnimJoint222 = x3d.HAnimJoint()
HAnimJoint222.USE = "hanim_r_metatarsophalangeal_2"

HAnimHumanoid23.joints.append(HAnimJoint222)
HAnimJoint223 = x3d.HAnimJoint()
HAnimJoint223.USE = "hanim_l_radiocarpal"

HAnimHumanoid23.joints.append(HAnimJoint223)
HAnimJoint224 = x3d.HAnimJoint()
HAnimJoint224.USE = "hanim_r_radiocarpal"

HAnimHumanoid23.joints.append(HAnimJoint224)
HAnimJoint225 = x3d.HAnimJoint()
HAnimJoint225.USE = "hanim_l_shoulder"

HAnimHumanoid23.joints.append(HAnimJoint225)
HAnimJoint226 = x3d.HAnimJoint()
HAnimJoint226.USE = "hanim_r_shoulder"

HAnimHumanoid23.joints.append(HAnimJoint226)
HAnimJoint227 = x3d.HAnimJoint()
HAnimJoint227.USE = "hanim_l_talocrural"

HAnimHumanoid23.joints.append(HAnimJoint227)
HAnimJoint228 = x3d.HAnimJoint()
HAnimJoint228.USE = "hanim_r_talocrural"

HAnimHumanoid23.joints.append(HAnimJoint228)
HAnimSegment229 = x3d.HAnimSegment()
HAnimSegment229.USE = "hanim_l5"

HAnimHumanoid23.segments.append(HAnimSegment229)
HAnimSegment230 = x3d.HAnimSegment()
HAnimSegment230.USE = "hanim_pelvis"

HAnimHumanoid23.segments.append(HAnimSegment230)
HAnimSegment231 = x3d.HAnimSegment()
HAnimSegment231.USE = "hanim_sacrum"

HAnimHumanoid23.segments.append(HAnimSegment231)
HAnimSegment232 = x3d.HAnimSegment()
HAnimSegment232.USE = "hanim_skull"

HAnimHumanoid23.segments.append(HAnimSegment232)
HAnimSegment233 = x3d.HAnimSegment()
HAnimSegment233.USE = "hanim_l_calf"

HAnimHumanoid23.segments.append(HAnimSegment233)
HAnimSegment234 = x3d.HAnimSegment()
HAnimSegment234.USE = "hanim_r_calf"

HAnimHumanoid23.segments.append(HAnimSegment234)
HAnimSegment235 = x3d.HAnimSegment()
HAnimSegment235.USE = "hanim_l_carpal"

HAnimHumanoid23.segments.append(HAnimSegment235)
HAnimSegment236 = x3d.HAnimSegment()
HAnimSegment236.USE = "hanim_r_carpal"

HAnimHumanoid23.segments.append(HAnimSegment236)
HAnimSegment237 = x3d.HAnimSegment()
HAnimSegment237.USE = "hanim_l_forearm"

HAnimHumanoid23.segments.append(HAnimSegment237)
HAnimSegment238 = x3d.HAnimSegment()
HAnimSegment238.USE = "hanim_r_forearm"

HAnimHumanoid23.segments.append(HAnimSegment238)
HAnimSegment239 = x3d.HAnimSegment()
HAnimSegment239.USE = "hanim_l_talus"

HAnimHumanoid23.segments.append(HAnimSegment239)
HAnimSegment240 = x3d.HAnimSegment()
HAnimSegment240.USE = "hanim_r_talus"

HAnimHumanoid23.segments.append(HAnimSegment240)
HAnimSegment241 = x3d.HAnimSegment()
HAnimSegment241.USE = "hanim_l_tarsal_proximal_phalanx_2"

HAnimHumanoid23.segments.append(HAnimSegment241)
HAnimSegment242 = x3d.HAnimSegment()
HAnimSegment242.USE = "hanim_r_tarsal_proximal_phalanx_2"

HAnimHumanoid23.segments.append(HAnimSegment242)
HAnimSegment243 = x3d.HAnimSegment()
HAnimSegment243.USE = "hanim_l_thigh"

HAnimHumanoid23.segments.append(HAnimSegment243)
HAnimSegment244 = x3d.HAnimSegment()
HAnimSegment244.USE = "hanim_r_thigh"

HAnimHumanoid23.segments.append(HAnimSegment244)
HAnimSegment245 = x3d.HAnimSegment()
HAnimSegment245.USE = "hanim_l_upperarm"

HAnimHumanoid23.segments.append(HAnimSegment245)
HAnimSegment246 = x3d.HAnimSegment()
HAnimSegment246.USE = "hanim_r_upperarm"

HAnimHumanoid23.segments.append(HAnimSegment246)

Scene19.children.append(HAnimHumanoid23)

X3D0.Scene = Scene19
f = open("../data/KoreanCharacter09Ru.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/KoreanCharacter09Ru.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
