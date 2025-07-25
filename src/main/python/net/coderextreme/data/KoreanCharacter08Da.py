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
meta3.content = "KoreanCharacter08Da.x3d"

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
meta13.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter08Da.x3d"

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
WorldInfo20.title = "KoreanCharacter08Da.x3d"

Scene19.children.append(WorldInfo20)
NavigationInfo21 = x3d.NavigationInfo()
NavigationInfo21.speed = 1.5

Scene19.children.append(NavigationInfo21)
Viewpoint22 = x3d.Viewpoint()
Viewpoint22.centerOfRotation = [0,1,0]
Viewpoint22.description = "Da"
Viewpoint22.position = [0,1,3]

Scene19.children.append(Viewpoint22)
HAnimHumanoid23 = x3d.HAnimHumanoid()
HAnimHumanoid23.name = "Da"
HAnimHumanoid23.DEF = "hanim_Da"
HAnimHumanoid23.scale = [0.0225,0.0225,0.0225]
HAnimHumanoid23.version = "2.0"
"""original HAnimHumanoid info='\"authorName=Chul Hee Jung and Myeong Won Lee\" \"authorEmail=myeongwonlee@gmail.com\" \"creationDate=31 March 2011\" \"humanoidVersion=2.0\" \"gender=female\" \"height=1.5\"'"""
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
MetadataString28.value = ["female"]

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
HAnimJoint31.center = [0,32.73,-1.981]
HAnimJoint31.ulimit = [0,0,0]
HAnimJoint31.llimit = [0,0,0]
HAnimSegment32 = x3d.HAnimSegment()
HAnimSegment32.name = "sacrum"
HAnimSegment32.DEF = "hanim_sacrum"
Transform33 = x3d.Transform()
Transform33.translation = [0,32.73,-1.981]
Shape34 = x3d.Shape()
Appearance35 = x3d.Appearance()
Material36 = x3d.Material()
Material36.diffuseColor = [0.588,0.588,0.588]

Appearance35.material = Material36
ImageTexture37 = x3d.ImageTexture()
ImageTexture37.DEF = "DaTextureAtlas"
ImageTexture37.url = ["images/Da.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/images/Da.png"]

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
HAnimJoint41.center = [3.18,31.25,-0.9491]
HAnimJoint41.ulimit = [0,0,0]
HAnimJoint41.llimit = [0,0,0]
HAnimSegment42 = x3d.HAnimSegment()
HAnimSegment42.name = "l_thigh"
HAnimSegment42.DEF = "hanim_l_thigh"
Transform43 = x3d.Transform()
Transform43.translation = [3.18,31.25,-0.9491]
Shape44 = x3d.Shape()
Appearance45 = x3d.Appearance()
Material46 = x3d.Material()
Material46.diffuseColor = [0.588,0.588,0.588]

Appearance45.material = Material46
ImageTexture47 = x3d.ImageTexture()
ImageTexture47.USE = "DaTextureAtlas"

Appearance45.texture = ImageTexture47

Shape44.appearance = Appearance45
IndexedFaceSet48 = x3d.IndexedFaceSet()
IndexedFaceSet48.coordIndex = [2,3,4,-1,4,5,6,-1,2,4,6,-1,6,7,8,-1,2,6,8,-1,2,8,0,-1,1,2,0,-1,40,43,1,-1,1,0,40,-1,43,44,2,-1,2,1,43,-1,44,45,3,-1,3,2,44,-1,45,46,4,-1,4,3,45,-1,46,41,5,-1,5,4,46,-1,41,42,6,-1,6,5,41,-1,42,48,7,-1,7,6,42,-1,48,49,8,-1,8,7,48,-1,49,40,0,-1,0,8,49,-1,9,10,16,-1,16,17,9,-1,10,11,18,-1,18,16,10,-1,11,36,37,-1,37,18,11,-1,12,13,20,-1,20,19,12,-1,13,14,21,-1,21,20,13,-1,15,22,21,-1,21,14,15,-1,9,17,22,-1,22,15,9,-1,16,29,35,-1,35,17,16,-1,30,29,16,-1,16,18,30,-1,31,39,37,-1,37,19,31,-1,32,31,19,-1,19,20,32,-1,33,32,20,-1,20,21,33,-1,22,34,33,-1,33,21,22,-1,17,35,34,-1,34,22,17,-1,24,42,41,-1,41,23,24,-1,48,42,24,-1,24,47,48,-1,43,40,38,-1,38,25,43,-1,26,44,43,-1,43,25,26,-1,27,45,44,-1,44,26,27,-1,28,46,45,-1,45,27,28,-1,23,41,46,-1,46,28,23,-1,29,24,23,-1,23,35,29,-1,47,24,29,-1,29,30,47,-1,25,38,39,-1,39,31,25,-1,26,25,31,-1,31,32,26,-1,27,26,32,-1,32,33,27,-1,34,28,27,-1,27,33,34,-1,35,23,28,-1,28,34,35,-1,37,36,12,-1,12,19,37,-1,39,30,18,-1,18,37,39,-1,38,47,30,-1,30,39,38,-1,47,38,40,-1,40,49,47,-1,49,48,47,-1,52,53,54,-1,54,55,56,-1,56,57,50,-1,54,56,50,-1,52,54,50,-1,51,52,50,-1,10,9,51,-1,51,50,10,-1,9,15,52,-1,52,51,9,-1,15,14,53,-1,53,52,15,-1,14,13,54,-1,54,53,14,-1,13,12,55,-1,55,54,13,-1,12,36,56,-1,56,55,12,-1,36,11,57,-1,57,56,36,-1,11,10,50,-1,50,57,11,-1]
IndexedFaceSet48.creaseAngle = 1.57
IndexedFaceSet48.texCoordIndex = [2,3,4,-1,4,5,6,-1,2,4,6,-1,6,7,8,-1,2,6,8,-1,2,8,0,-1,1,2,0,-1,9,12,1,-1,1,0,9,-1,13,14,2,-1,2,1,13,-1,14,15,3,-1,3,2,14,-1,15,16,4,-1,4,3,15,-1,16,10,5,-1,5,4,16,-1,10,11,6,-1,6,5,10,-1,11,17,7,-1,7,6,11,-1,18,19,8,-1,8,7,18,-1,20,9,0,-1,0,8,20,-1,21,22,23,-1,23,24,21,-1,22,25,26,-1,26,23,22,-1,25,27,28,-1,28,26,25,-1,29,30,31,-1,31,32,29,-1,30,33,34,-1,34,31,30,-1,35,36,34,-1,34,33,35,-1,21,24,36,-1,36,35,21,-1,23,37,38,-1,38,24,23,-1,39,37,23,-1,23,26,39,-1,40,41,28,-1,28,53,40,-1,42,54,32,-1,32,31,42,-1,43,42,31,-1,31,34,43,-1,36,44,43,-1,43,34,36,-1,24,38,44,-1,44,36,24,-1,45,59,58,-1,58,46,45,-1,60,59,45,-1,45,56,60,-1,62,57,48,-1,48,47,62,-1,49,64,63,-1,63,55,49,-1,50,65,64,-1,64,49,50,-1,51,66,65,-1,65,50,51,-1,46,58,66,-1,66,51,46,-1,37,45,46,-1,46,38,37,-1,56,45,37,-1,37,39,56,-1,47,48,41,-1,41,40,47,-1,49,55,54,-1,54,42,49,-1,50,49,42,-1,42,43,50,-1,44,51,50,-1,50,43,44,-1,38,46,51,-1,51,44,38,-1,28,27,52,-1,52,53,28,-1,41,39,26,-1,26,28,41,-1,48,56,39,-1,39,41,48,-1,56,48,57,-1,57,61,56,-1,69,68,67,-1,72,73,74,-1,74,75,76,-1,76,77,70,-1,74,76,70,-1,72,74,70,-1,71,72,70,-1,22,21,71,-1,71,70,22,-1,21,35,72,-1,72,71,21,-1,35,33,73,-1,73,72,35,-1,33,30,74,-1,74,73,33,-1,30,29,75,-1,75,74,30,-1,52,27,76,-1,76,75,52,-1,27,25,77,-1,77,76,27,-1,25,22,70,-1,70,77,25,-1]
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
HAnimJoint51.center = [3.414,17.040001,-0.9556]
HAnimJoint51.ulimit = [0,0,0]
HAnimJoint51.llimit = [0,0,0]
HAnimSegment52 = x3d.HAnimSegment()
HAnimSegment52.name = "l_calf"
HAnimSegment52.DEF = "hanim_l_calf"
Transform53 = x3d.Transform()
Transform53.translation = [3.414,17.040001,-0.9556]
Shape54 = x3d.Shape()
Appearance55 = x3d.Appearance()
Material56 = x3d.Material()
Material56.diffuseColor = [0.588,0.588,0.588]

Appearance55.material = Material56
ImageTexture57 = x3d.ImageTexture()
ImageTexture57.USE = "DaTextureAtlas"

Appearance55.texture = ImageTexture57

Shape54.appearance = Appearance55
IndexedFaceSet58 = x3d.IndexedFaceSet()
IndexedFaceSet58.coordIndex = [32,38,1,-1,1,0,32,-1,33,32,0,-1,0,2,33,-1,34,39,14,-1,14,3,34,-1,35,34,3,-1,3,4,35,-1,5,36,35,-1,35,4,5,-1,6,37,36,-1,36,5,6,-1,1,38,37,-1,37,6,1,-1,24,7,8,-1,8,25,24,-1,26,25,8,-1,8,9,26,-1,15,10,27,-1,27,31,15,-1,11,28,27,-1,27,10,11,-1,12,29,28,-1,28,11,12,-1,13,30,29,-1,29,12,13,-1,24,30,13,-1,13,7,24,-1,9,18,20,-1,20,15,9,-1,31,26,9,-1,9,15,31,-1,8,7,17,-1,17,16,8,-1,9,8,16,-1,16,18,9,-1,19,10,15,-1,15,20,19,-1,21,11,10,-1,10,19,21,-1,22,12,11,-1,11,21,22,-1,23,13,12,-1,12,22,23,-1,7,13,23,-1,23,17,7,-1,33,39,20,-1,20,18,33,-1,16,17,38,-1,38,32,16,-1,18,16,32,-1,32,33,18,-1,19,20,39,-1,39,34,19,-1,35,21,19,-1,19,34,35,-1,36,22,21,-1,21,35,36,-1,37,23,22,-1,22,36,37,-1,38,17,23,-1,23,37,38,-1,2,14,39,-1,39,33,2,-1,0,1,40,-1,1,6,40,-1,6,5,40,-1,5,4,40,-1,4,3,40,-1,3,14,40,-1,14,2,40,-1,2,0,40,-1,24,25,42,-1,42,41,24,-1,25,26,43,-1,43,42,25,-1,26,31,44,-1,44,43,26,-1,31,27,45,-1,45,44,31,-1,27,28,46,-1,46,45,27,-1,28,29,47,-1,47,46,28,-1,29,30,48,-1,48,47,29,-1,30,24,41,-1,41,48,30,-1,43,44,45,-1,45,46,47,-1,47,48,41,-1,45,47,41,-1,43,45,41,-1,42,43,41,-1]
IndexedFaceSet58.creaseAngle = 1.57
IndexedFaceSet58.texCoordIndex = [1,2,3,-1,3,0,1,-1,5,1,0,-1,0,4,5,-1,7,8,9,-1,9,6,7,-1,11,7,6,-1,6,10,11,-1,12,13,11,-1,11,10,12,-1,14,15,13,-1,13,12,14,-1,3,2,15,-1,15,14,3,-1,18,19,16,-1,16,17,18,-1,21,17,16,-1,16,20,21,-1,24,25,22,-1,22,23,24,-1,26,27,22,-1,22,25,26,-1,28,29,27,-1,27,26,28,-1,30,31,29,-1,29,28,30,-1,18,31,30,-1,30,19,18,-1,20,32,33,-1,33,44,20,-1,43,21,20,-1,20,44,43,-1,16,19,35,-1,35,34,16,-1,20,16,34,-1,34,32,20,-1,36,25,24,-1,24,45,36,-1,37,26,25,-1,25,36,37,-1,38,28,26,-1,26,37,38,-1,39,30,28,-1,28,38,39,-1,19,30,39,-1,39,35,19,-1,5,41,33,-1,33,32,5,-1,34,35,2,-1,2,1,34,-1,32,34,1,-1,1,5,32,-1,36,45,8,-1,8,7,36,-1,11,37,36,-1,36,7,11,-1,13,38,37,-1,37,11,13,-1,15,39,38,-1,38,13,15,-1,2,35,39,-1,39,15,2,-1,4,42,41,-1,41,5,4,-1,0,3,40,-1,3,14,40,-1,14,12,40,-1,12,10,40,-1,10,6,40,-1,6,9,40,-1,42,4,40,-1,4,0,40,-1,18,17,47,-1,47,46,18,-1,17,21,48,-1,48,47,17,-1,21,43,49,-1,49,48,21,-1,23,22,50,-1,50,49,23,-1,22,27,51,-1,51,50,22,-1,27,29,52,-1,52,51,27,-1,29,31,53,-1,53,52,29,-1,31,18,46,-1,46,53,31,-1,48,49,50,-1,50,51,52,-1,52,53,46,-1,50,52,46,-1,48,50,46,-1,47,48,46,-1]
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
HAnimJoint61.center = [3.631,4.504,-0.7461]
HAnimJoint61.ulimit = [0,0,0]
HAnimJoint61.llimit = [0,0,0]
HAnimSegment62 = x3d.HAnimSegment()
HAnimSegment62.name = "l_talus"
HAnimSegment62.DEF = "hanim_l_talus"
Transform63 = x3d.Transform()
Transform63.translation = [3.631,4.504,-0.7461]
Shape64 = x3d.Shape()
Appearance65 = x3d.Appearance()
Material66 = x3d.Material()
Material66.diffuseColor = [0.588,0.588,0.588]

Appearance65.material = Material66
ImageTexture67 = x3d.ImageTexture()
ImageTexture67.USE = "DaTextureAtlas"

Appearance65.texture = ImageTexture67

Shape64.appearance = Appearance65
IndexedFaceSet68 = x3d.IndexedFaceSet()
IndexedFaceSet68.coordIndex = [0,1,19,-1,19,25,0,-1,2,20,19,-1,19,1,2,-1,3,21,20,-1,20,2,3,-1,4,22,21,-1,21,3,4,-1,0,25,24,-1,26,28,4,-1,4,3,26,-1,29,26,3,-1,3,2,29,-1,30,29,2,-1,2,1,30,-1,27,30,1,-1,1,0,27,-1,16,15,28,-1,28,26,16,-1,17,16,26,-1,26,29,17,-1,18,17,29,-1,29,30,18,-1,14,18,30,-1,30,27,14,-1,19,7,6,-1,6,25,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,11,10,22,-1,22,23,11,-1,5,12,11,-1,11,23,5,-1,13,12,5,-1,5,24,13,-1,6,13,24,-1,24,25,6,-1,6,7,31,-1,7,8,31,-1,8,9,31,-1,9,10,31,-1,10,11,31,-1,11,12,31,-1,12,13,31,-1,13,6,31,-1,16,33,32,-1,32,15,16,-1,17,18,33,-1,33,16,17,-1,18,14,32,-1,32,33,18,-1,23,22,4,-1,35,36,37,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,41,42,43,-1,37,41,43,-1,35,37,43,-1,35,43,34,-1,5,23,35,-1,35,34,5,-1,23,4,36,-1,36,35,23,-1,4,28,37,-1,37,36,4,-1,28,15,38,-1,38,37,28,-1,15,32,39,-1,39,38,15,-1,32,14,40,-1,40,39,32,-1,14,27,41,-1,41,40,14,-1,27,0,42,-1,42,41,27,-1,0,24,43,-1,43,42,0,-1,24,5,34,-1,34,43,24,-1]
IndexedFaceSet68.creaseAngle = 1.57
IndexedFaceSet68.texCoordIndex = [0,1,2,-1,2,5,0,-1,3,4,2,-1,2,1,3,-1,1,2,4,-1,4,3,1,-1,0,5,2,-1,2,1,0,-1,0,5,13,-1,19,10,0,-1,0,1,19,-1,23,19,1,-1,1,3,23,-1,19,23,3,-1,3,1,19,-1,10,19,1,-1,1,0,10,-1,30,28,10,-1,10,19,30,-1,31,30,19,-1,19,23,31,-1,29,32,26,-1,26,25,29,-1,27,29,25,-1,25,24,27,-1,2,39,41,-1,41,5,2,-1,4,40,39,-1,39,2,4,-1,2,39,40,-1,40,4,2,-1,5,41,39,-1,39,2,5,-1,42,41,5,-1,5,13,42,-1,14,44,42,-1,42,13,14,-1,42,44,14,-1,14,13,42,-1,41,42,13,-1,13,5,41,-1,41,39,43,-1,39,40,43,-1,40,39,43,-1,39,41,43,-1,41,42,43,-1,42,44,43,-1,44,42,43,-1,42,41,43,-1,34,35,22,-1,22,8,34,-1,36,37,35,-1,35,34,36,-1,37,33,22,-1,22,35,37,-1,13,5,0,-1,16,17,18,-1,18,49,20,-1,20,21,18,-1,18,20,18,-1,18,17,16,-1,18,18,16,-1,16,18,16,-1,16,16,15,-1,14,13,46,-1,46,45,14,-1,13,0,47,-1,47,46,13,-1,0,10,48,-1,48,47,0,-1,11,12,49,-1,49,18,11,-1,6,7,20,-1,20,49,6,-1,9,38,51,-1,51,50,9,-1,12,11,18,-1,18,21,12,-1,10,0,47,-1,47,48,10,-1,0,13,46,-1,46,47,0,-1,13,14,45,-1,45,46,13,-1]
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
HAnimJoint71.center = [3.631,3.792,0.05479]
HAnimJoint71.ulimit = [0,0,0]
HAnimJoint71.llimit = [0,0,0]
HAnimSegment72 = x3d.HAnimSegment()
HAnimSegment72.name = "l_tarsal_proximal_phalanx_2"
HAnimSegment72.DEF = "hanim_l_tarsal_proximal_phalanx_2"
Transform73 = x3d.Transform()
Transform73.translation = [3.631,3.792,0.05479]
Shape74 = x3d.Shape()
Appearance75 = x3d.Appearance()
Material76 = x3d.Material()
Material76.diffuseColor = [0.588,0.588,0.588]

Appearance75.material = Material76
ImageTexture77 = x3d.ImageTexture()
ImageTexture77.USE = "DaTextureAtlas"

Appearance75.texture = ImageTexture77

Shape74.appearance = Appearance75
IndexedFaceSet78 = x3d.IndexedFaceSet()
IndexedFaceSet78.coordIndex = [34,0,38,-1,0,6,35,-1,35,38,0,-1,35,6,1,-1,1,39,35,-1,3,4,37,-1,37,42,3,-1,23,40,33,-1,33,1,23,-1,24,30,17,-1,17,18,24,-1,31,24,18,-1,18,19,31,-1,41,25,0,-1,0,34,41,-1,2,36,40,-1,40,23,2,-1,21,20,30,-1,30,24,21,-1,22,21,24,-1,24,31,22,-1,37,4,25,-1,25,41,37,-1,8,9,3,-1,3,2,8,-1,9,10,4,-1,4,3,9,-1,5,26,23,-1,23,1,5,-1,27,7,0,-1,0,25,27,-1,26,8,2,-1,2,23,26,-1,10,27,25,-1,25,4,10,-1,11,28,26,-1,26,5,11,-1,29,13,7,-1,7,27,29,-1,14,15,9,-1,9,8,14,-1,28,14,8,-1,8,26,28,-1,16,29,27,-1,27,10,16,-1,15,16,10,-1,10,9,15,-1,18,17,11,-1,11,12,18,-1,17,30,28,-1,28,11,17,-1,19,18,12,-1,12,13,19,-1,31,19,13,-1,13,29,31,-1,20,21,15,-1,15,14,20,-1,30,20,14,-1,14,28,30,-1,22,31,29,-1,29,16,22,-1,21,22,16,-1,16,15,21,-1,36,2,3,-1,3,42,36,-1,7,32,6,-1,6,0,7,-1,6,32,5,-1,5,1,6,-1,13,12,32,-1,32,7,13,-1,5,32,12,-1,12,11,5,-1,39,1,33,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,49,50,51,-1,48,49,51,-1,44,48,51,-1,44,51,52,-1,44,52,43,-1,38,35,44,-1,44,43,38,-1,35,39,45,-1,45,44,35,-1,39,33,46,-1,46,45,39,-1,33,40,47,-1,47,46,33,-1,40,36,48,-1,48,47,40,-1,36,42,49,-1,49,48,36,-1,42,37,50,-1,50,49,42,-1,37,41,51,-1,51,50,37,-1,41,34,52,-1,52,51,41,-1,34,38,43,-1,43,52,34,-1]
IndexedFaceSet78.creaseAngle = 1.57
IndexedFaceSet78.texCoordIndex = [30,3,35,-1,3,22,31,-1,31,35,3,-1,31,22,3,-1,3,35,31,-1,0,1,34,-1,34,37,0,-1,7,36,30,-1,30,3,7,-1,6,5,4,-1,4,2,6,-1,5,6,2,-1,2,4,5,-1,36,7,3,-1,3,30,36,-1,53,59,61,-1,61,49,53,-1,52,51,47,-1,47,48,52,-1,11,12,69,-1,69,68,11,-1,33,15,70,-1,70,73,33,-1,9,10,45,-1,45,50,9,-1,10,13,46,-1,46,45,10,-1,16,23,7,-1,7,3,16,-1,23,16,3,-1,3,7,23,-1,54,55,53,-1,53,49,54,-1,24,71,70,-1,70,15,24,-1,25,27,23,-1,23,16,25,-1,27,25,16,-1,16,23,27,-1,14,17,10,-1,10,9,14,-1,56,57,55,-1,55,54,56,-1,28,72,71,-1,71,24,28,-1,17,18,13,-1,13,10,17,-1,2,4,25,-1,25,26,2,-1,4,5,27,-1,27,25,4,-1,4,2,26,-1,26,25,4,-1,5,4,25,-1,25,27,5,-1,19,20,17,-1,17,14,19,-1,47,51,57,-1,57,56,47,-1,11,68,72,-1,72,28,11,-1,20,21,18,-1,18,17,20,-1,32,8,0,-1,0,37,32,-1,16,29,22,-1,22,3,16,-1,22,29,16,-1,16,3,22,-1,25,26,29,-1,29,16,25,-1,16,29,26,-1,26,25,16,-1,35,3,30,-1,64,63,65,-1,65,66,42,-1,64,65,42,-1,43,67,66,-1,42,43,66,-1,64,42,66,-1,64,66,65,-1,64,65,63,-1,35,31,39,-1,39,38,35,-1,31,35,38,-1,38,39,31,-1,35,30,40,-1,40,38,35,-1,30,36,41,-1,41,40,30,-1,61,59,42,-1,42,66,61,-1,58,62,43,-1,43,42,58,-1,62,60,67,-1,67,43,62,-1,33,73,74,-1,74,44,33,-1,36,30,40,-1,40,41,36,-1,30,35,38,-1,38,40,30,-1]
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
HAnimJoint81.center = [-3.18,31.25,-0.9491]
HAnimJoint81.ulimit = [0,0,0]
HAnimJoint81.llimit = [0,0,0]
HAnimSegment82 = x3d.HAnimSegment()
HAnimSegment82.name = "r_thigh"
HAnimSegment82.DEF = "hanim_r_thigh"
Transform83 = x3d.Transform()
Transform83.translation = [-3.18,31.25,-0.9491]
Shape84 = x3d.Shape()
Appearance85 = x3d.Appearance()
Material86 = x3d.Material()
Material86.diffuseColor = [0.588,0.588,0.588]

Appearance85.material = Material86
ImageTexture87 = x3d.ImageTexture()
ImageTexture87.USE = "DaTextureAtlas"

Appearance85.texture = ImageTexture87

Shape84.appearance = Appearance85
IndexedFaceSet88 = x3d.IndexedFaceSet()
IndexedFaceSet88.coordIndex = [8,7,6,-1,6,5,4,-1,4,3,2,-1,6,4,2,-1,8,6,2,-1,0,8,2,-1,1,0,2,-1,40,0,1,-1,1,43,40,-1,43,1,2,-1,2,44,43,-1,44,2,3,-1,3,45,44,-1,45,3,4,-1,4,46,45,-1,46,4,5,-1,5,41,46,-1,41,5,6,-1,6,42,41,-1,42,6,7,-1,7,48,42,-1,48,7,8,-1,8,49,48,-1,49,8,0,-1,0,40,49,-1,9,17,16,-1,16,10,9,-1,10,16,18,-1,18,11,10,-1,11,18,37,-1,37,36,11,-1,12,19,20,-1,20,13,12,-1,13,20,21,-1,21,14,13,-1,15,14,21,-1,21,22,15,-1,9,15,22,-1,22,17,9,-1,16,17,35,-1,35,29,16,-1,30,18,16,-1,16,29,30,-1,31,19,37,-1,37,39,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,22,21,33,-1,33,34,22,-1,17,22,34,-1,34,35,17,-1,24,23,41,-1,41,42,24,-1,48,47,24,-1,24,42,48,-1,43,25,38,-1,38,40,43,-1,26,25,43,-1,43,44,26,-1,27,26,44,-1,44,45,27,-1,28,27,45,-1,45,46,28,-1,23,28,46,-1,46,41,23,-1,29,35,23,-1,23,24,29,-1,47,30,29,-1,29,24,47,-1,25,31,39,-1,39,38,25,-1,26,32,31,-1,31,25,26,-1,27,33,32,-1,32,26,27,-1,34,33,27,-1,27,28,34,-1,35,34,28,-1,28,23,35,-1,37,19,12,-1,12,36,37,-1,39,37,18,-1,18,30,39,-1,38,39,30,-1,30,47,38,-1,47,49,40,-1,40,38,47,-1,49,47,48,-1,50,57,56,-1,56,55,54,-1,50,56,54,-1,54,53,52,-1,50,54,52,-1,51,50,52,-1,10,50,51,-1,51,9,10,-1,9,51,52,-1,52,15,9,-1,15,52,53,-1,53,14,15,-1,14,53,54,-1,54,13,14,-1,13,54,55,-1,55,12,13,-1,12,55,56,-1,56,36,12,-1,36,56,57,-1,57,11,36,-1,11,57,50,-1,50,10,11,-1]
IndexedFaceSet88.creaseAngle = 1.57
IndexedFaceSet88.texCoordIndex = [8,7,6,-1,6,5,4,-1,4,3,2,-1,6,4,2,-1,8,6,2,-1,0,8,2,-1,1,0,2,-1,9,0,1,-1,1,12,9,-1,13,1,2,-1,2,14,13,-1,14,2,3,-1,3,15,14,-1,15,3,4,-1,4,16,15,-1,16,4,5,-1,5,10,16,-1,10,5,6,-1,6,11,10,-1,11,6,7,-1,7,17,11,-1,18,7,8,-1,8,19,18,-1,20,8,0,-1,0,9,20,-1,21,24,23,-1,23,22,21,-1,22,23,26,-1,26,25,22,-1,25,26,28,-1,28,27,25,-1,29,32,31,-1,31,30,29,-1,30,31,34,-1,34,33,30,-1,35,33,34,-1,34,36,35,-1,21,35,36,-1,36,24,21,-1,23,24,38,-1,38,37,23,-1,39,26,23,-1,23,37,39,-1,40,53,28,-1,28,41,40,-1,42,31,32,-1,32,54,42,-1,43,34,31,-1,31,42,43,-1,36,34,43,-1,43,44,36,-1,24,36,44,-1,44,38,24,-1,45,46,58,-1,58,59,45,-1,60,56,45,-1,45,59,60,-1,62,47,48,-1,48,57,62,-1,49,55,63,-1,63,64,49,-1,50,49,64,-1,64,65,50,-1,51,50,65,-1,65,66,51,-1,46,51,66,-1,66,58,46,-1,37,38,46,-1,46,45,37,-1,56,39,37,-1,37,45,56,-1,47,40,41,-1,41,48,47,-1,49,42,54,-1,54,55,49,-1,50,43,42,-1,42,49,50,-1,44,43,50,-1,50,51,44,-1,38,44,51,-1,51,46,38,-1,28,53,52,-1,52,27,28,-1,41,28,26,-1,26,39,41,-1,48,41,39,-1,39,56,48,-1,56,61,57,-1,57,48,56,-1,69,67,68,-1,70,77,76,-1,76,75,74,-1,70,76,74,-1,74,73,72,-1,70,74,72,-1,71,70,72,-1,22,70,71,-1,71,21,22,-1,21,71,72,-1,72,35,21,-1,35,72,73,-1,73,33,35,-1,33,73,74,-1,74,30,33,-1,30,74,75,-1,75,29,30,-1,52,75,76,-1,76,27,52,-1,27,76,77,-1,77,25,27,-1,25,77,70,-1,70,22,25,-1]
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
HAnimJoint91.center = [-3.414,17.040001,-0.9556]
HAnimJoint91.ulimit = [0,0,0]
HAnimJoint91.llimit = [0,0,0]
HAnimSegment92 = x3d.HAnimSegment()
HAnimSegment92.name = "r_calf"
HAnimSegment92.DEF = "hanim_r_calf"
Transform93 = x3d.Transform()
Transform93.translation = [-3.414,17.040001,-0.9556]
Shape94 = x3d.Shape()
Appearance95 = x3d.Appearance()
Material96 = x3d.Material()
Material96.diffuseColor = [0.588,0.588,0.588]

Appearance95.material = Material96
ImageTexture97 = x3d.ImageTexture()
ImageTexture97.USE = "DaTextureAtlas"

Appearance95.texture = ImageTexture97

Shape94.appearance = Appearance95
IndexedFaceSet98 = x3d.IndexedFaceSet()
IndexedFaceSet98.coordIndex = [32,0,1,-1,1,38,32,-1,33,2,0,-1,0,32,33,-1,34,3,14,-1,14,39,34,-1,35,4,3,-1,3,34,35,-1,5,4,35,-1,35,36,5,-1,6,5,36,-1,36,37,6,-1,1,6,37,-1,37,38,1,-1,24,25,8,-1,8,7,24,-1,26,9,8,-1,8,25,26,-1,15,31,27,-1,27,10,15,-1,11,10,27,-1,27,28,11,-1,12,11,28,-1,28,29,12,-1,13,12,29,-1,29,30,13,-1,24,7,13,-1,13,30,24,-1,9,15,20,-1,20,18,9,-1,31,15,9,-1,9,26,31,-1,8,16,17,-1,17,7,8,-1,9,18,16,-1,16,8,9,-1,19,20,15,-1,15,10,19,-1,21,19,10,-1,10,11,21,-1,22,21,11,-1,11,12,22,-1,23,22,12,-1,12,13,23,-1,7,17,23,-1,23,13,7,-1,33,18,20,-1,20,39,33,-1,16,32,38,-1,38,17,16,-1,18,33,32,-1,32,16,18,-1,19,34,39,-1,39,20,19,-1,35,34,19,-1,19,21,35,-1,36,35,21,-1,21,22,36,-1,37,36,22,-1,22,23,37,-1,38,37,23,-1,23,17,38,-1,2,33,39,-1,39,14,2,-1,0,40,1,-1,1,40,6,-1,6,40,5,-1,5,40,4,-1,4,40,3,-1,3,40,14,-1,14,40,2,-1,2,40,0,-1,24,41,42,-1,42,25,24,-1,25,42,43,-1,43,26,25,-1,26,43,44,-1,44,31,26,-1,31,44,45,-1,45,27,31,-1,27,45,46,-1,46,28,27,-1,28,46,47,-1,47,29,28,-1,29,47,48,-1,48,30,29,-1,30,48,41,-1,41,24,30,-1,41,48,47,-1,47,46,45,-1,41,47,45,-1,45,44,43,-1,41,45,43,-1,42,41,43,-1]
IndexedFaceSet98.creaseAngle = 1.57
IndexedFaceSet98.texCoordIndex = [1,0,3,-1,3,2,1,-1,5,4,0,-1,0,1,5,-1,7,6,9,-1,9,8,7,-1,11,10,6,-1,6,7,11,-1,12,10,11,-1,11,13,12,-1,14,12,13,-1,13,15,14,-1,3,14,15,-1,15,2,3,-1,18,17,16,-1,16,19,18,-1,21,20,16,-1,16,17,21,-1,24,23,22,-1,22,25,24,-1,26,25,22,-1,22,27,26,-1,28,26,27,-1,27,29,28,-1,30,28,29,-1,29,31,30,-1,18,19,30,-1,30,31,18,-1,20,44,33,-1,33,32,20,-1,43,44,20,-1,20,21,43,-1,16,34,35,-1,35,19,16,-1,20,32,34,-1,34,16,20,-1,36,45,24,-1,24,25,36,-1,37,36,25,-1,25,26,37,-1,38,37,26,-1,26,28,38,-1,39,38,28,-1,28,30,39,-1,19,35,39,-1,39,30,19,-1,5,32,33,-1,33,41,5,-1,34,1,2,-1,2,35,34,-1,32,5,1,-1,1,34,32,-1,36,7,8,-1,8,45,36,-1,11,7,36,-1,36,37,11,-1,13,11,37,-1,37,38,13,-1,15,13,38,-1,38,39,15,-1,2,15,39,-1,39,35,2,-1,4,5,41,-1,41,42,4,-1,0,40,3,-1,3,40,14,-1,14,40,12,-1,12,40,10,-1,10,40,6,-1,6,40,9,-1,42,40,4,-1,4,40,0,-1,18,46,47,-1,47,17,18,-1,17,47,48,-1,48,21,17,-1,21,48,49,-1,49,43,21,-1,23,49,50,-1,50,22,23,-1,22,50,51,-1,51,27,22,-1,27,51,52,-1,52,29,27,-1,29,52,53,-1,53,31,29,-1,31,53,46,-1,46,18,31,-1,46,53,52,-1,52,51,50,-1,46,52,50,-1,50,49,48,-1,46,50,48,-1,47,46,48,-1]
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
HAnimJoint101.center = [-3.631,4.504,-0.7461]
HAnimJoint101.ulimit = [0,0,0]
HAnimJoint101.llimit = [0,0,0]
HAnimSegment102 = x3d.HAnimSegment()
HAnimSegment102.name = "r_talus"
HAnimSegment102.DEF = "hanim_r_talus"
Transform103 = x3d.Transform()
Transform103.translation = [-3.631,4.504,-0.7461]
Shape104 = x3d.Shape()
Appearance105 = x3d.Appearance()
Material106 = x3d.Material()
Material106.diffuseColor = [0.588,0.588,0.588]

Appearance105.material = Material106
ImageTexture107 = x3d.ImageTexture()
ImageTexture107.USE = "DaTextureAtlas"

Appearance105.texture = ImageTexture107

Shape104.appearance = Appearance105
IndexedFaceSet108 = x3d.IndexedFaceSet()
IndexedFaceSet108.coordIndex = [0,25,19,-1,19,1,0,-1,2,1,19,-1,19,20,2,-1,3,2,20,-1,20,21,3,-1,4,3,21,-1,21,22,4,-1,0,24,25,-1,26,3,4,-1,4,28,26,-1,29,2,3,-1,3,26,29,-1,30,1,2,-1,2,29,30,-1,27,0,1,-1,1,30,27,-1,16,26,28,-1,28,15,16,-1,17,29,26,-1,26,16,17,-1,18,30,29,-1,29,17,18,-1,14,27,30,-1,30,18,14,-1,19,25,6,-1,6,7,19,-1,20,19,7,-1,7,8,20,-1,21,20,8,-1,8,9,21,-1,22,21,9,-1,9,10,22,-1,11,23,22,-1,22,10,11,-1,5,23,11,-1,11,12,5,-1,13,24,5,-1,5,12,13,-1,6,25,24,-1,24,13,6,-1,6,31,7,-1,7,31,8,-1,8,31,9,-1,9,31,10,-1,10,31,11,-1,11,31,12,-1,12,31,13,-1,13,31,6,-1,16,15,32,-1,32,33,16,-1,17,16,33,-1,33,18,17,-1,18,33,32,-1,32,14,18,-1,23,4,22,-1,35,34,43,-1,43,42,41,-1,41,40,39,-1,39,38,37,-1,41,39,37,-1,43,41,37,-1,35,43,37,-1,35,37,36,-1,5,34,35,-1,35,23,5,-1,23,35,36,-1,36,4,23,-1,4,36,37,-1,37,28,4,-1,28,37,38,-1,38,15,28,-1,15,38,39,-1,39,32,15,-1,32,39,40,-1,40,14,32,-1,14,40,41,-1,41,27,14,-1,27,41,42,-1,42,0,27,-1,0,42,43,-1,43,24,0,-1,24,43,34,-1,34,5,24,-1]
IndexedFaceSet108.creaseAngle = 1.57
IndexedFaceSet108.texCoordIndex = [0,5,2,-1,2,1,0,-1,3,1,2,-1,2,4,3,-1,1,3,4,-1,4,2,1,-1,0,1,2,-1,2,5,0,-1,0,13,5,-1,19,1,0,-1,0,10,19,-1,23,3,1,-1,1,19,23,-1,19,1,3,-1,3,23,19,-1,10,0,1,-1,1,19,10,-1,30,19,10,-1,10,28,30,-1,31,23,19,-1,19,30,31,-1,29,25,26,-1,26,32,29,-1,27,24,25,-1,25,29,27,-1,2,5,41,-1,41,39,2,-1,4,2,39,-1,39,40,4,-1,2,4,40,-1,40,39,2,-1,5,2,39,-1,39,41,5,-1,42,13,5,-1,5,41,42,-1,14,13,42,-1,42,44,14,-1,42,13,14,-1,14,44,42,-1,41,5,13,-1,13,42,41,-1,41,43,39,-1,39,43,40,-1,40,43,39,-1,39,43,41,-1,41,43,42,-1,42,43,44,-1,44,43,42,-1,42,43,41,-1,34,8,22,-1,22,35,34,-1,36,34,35,-1,35,37,36,-1,37,35,22,-1,22,33,37,-1,13,0,5,-1,16,15,16,-1,16,17,18,-1,18,21,20,-1,20,49,18,-1,18,20,18,-1,16,18,18,-1,16,16,18,-1,16,18,17,-1,14,45,46,-1,46,13,14,-1,13,46,47,-1,47,0,13,-1,0,47,48,-1,48,10,0,-1,11,18,49,-1,49,12,11,-1,6,49,20,-1,20,7,6,-1,9,50,51,-1,51,38,9,-1,12,21,18,-1,18,11,12,-1,10,48,47,-1,47,0,10,-1,0,47,46,-1,46,13,0,-1,13,46,45,-1,45,14,13,-1]
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
HAnimJoint111.center = [-3.631,3.792,0.05479]
HAnimJoint111.ulimit = [0,0,0]
HAnimJoint111.llimit = [0,0,0]
HAnimSegment112 = x3d.HAnimSegment()
HAnimSegment112.name = "r_tarsal_proximal_phalanx_2"
HAnimSegment112.DEF = "hanim_r_tarsal_proximal_phalanx_2"
Transform113 = x3d.Transform()
Transform113.translation = [-3.631,3.792,0.05479]
Shape114 = x3d.Shape()
Appearance115 = x3d.Appearance()
Material116 = x3d.Material()
Material116.diffuseColor = [0.588,0.588,0.588]

Appearance115.material = Material116
ImageTexture117 = x3d.ImageTexture()
ImageTexture117.USE = "DaTextureAtlas"

Appearance115.texture = ImageTexture117

Shape114.appearance = Appearance115
IndexedFaceSet118 = x3d.IndexedFaceSet()
IndexedFaceSet118.coordIndex = [34,38,0,-1,0,38,35,-1,35,6,0,-1,35,39,1,-1,1,6,35,-1,3,42,37,-1,37,4,3,-1,23,1,33,-1,33,40,23,-1,24,18,17,-1,17,30,24,-1,31,19,18,-1,18,24,31,-1,41,34,0,-1,0,25,41,-1,2,23,40,-1,40,36,2,-1,21,24,30,-1,30,20,21,-1,22,31,24,-1,24,21,22,-1,37,41,25,-1,25,4,37,-1,8,2,3,-1,3,9,8,-1,9,3,4,-1,4,10,9,-1,5,1,23,-1,23,26,5,-1,27,25,0,-1,0,7,27,-1,26,23,2,-1,2,8,26,-1,10,4,25,-1,25,27,10,-1,11,5,26,-1,26,28,11,-1,29,27,7,-1,7,13,29,-1,14,8,9,-1,9,15,14,-1,28,26,8,-1,8,14,28,-1,16,10,27,-1,27,29,16,-1,15,9,10,-1,10,16,15,-1,18,12,11,-1,11,17,18,-1,17,11,28,-1,28,30,17,-1,19,13,12,-1,12,18,19,-1,31,29,13,-1,13,19,31,-1,20,14,15,-1,15,21,20,-1,30,28,14,-1,14,20,30,-1,22,16,29,-1,29,31,22,-1,21,15,16,-1,16,22,21,-1,36,42,3,-1,3,2,36,-1,7,0,6,-1,6,32,7,-1,6,1,5,-1,5,32,6,-1,13,7,32,-1,32,12,13,-1,5,11,12,-1,12,32,5,-1,39,33,1,-1,44,43,52,-1,44,52,51,-1,51,50,49,-1,51,49,48,-1,44,51,48,-1,48,47,46,-1,44,48,46,-1,44,46,45,-1,38,43,44,-1,44,35,38,-1,35,44,45,-1,45,39,35,-1,39,45,46,-1,46,33,39,-1,33,46,47,-1,47,40,33,-1,40,47,48,-1,48,36,40,-1,36,48,49,-1,49,42,36,-1,42,49,50,-1,50,37,42,-1,37,50,51,-1,51,41,37,-1,41,51,52,-1,52,34,41,-1,34,52,43,-1,43,38,34,-1]
IndexedFaceSet118.creaseAngle = 1.57
IndexedFaceSet118.texCoordIndex = [30,35,3,-1,3,35,31,-1,31,22,3,-1,31,35,3,-1,3,22,31,-1,0,37,34,-1,34,1,0,-1,7,3,30,-1,30,36,7,-1,6,2,4,-1,4,5,6,-1,5,4,2,-1,2,6,5,-1,36,30,3,-1,3,7,36,-1,53,49,61,-1,61,59,53,-1,52,48,47,-1,47,51,52,-1,11,68,69,-1,69,12,11,-1,33,73,70,-1,70,15,33,-1,9,50,45,-1,45,10,9,-1,10,45,46,-1,46,13,10,-1,16,3,7,-1,7,23,16,-1,23,7,3,-1,3,16,23,-1,54,49,53,-1,53,55,54,-1,24,15,70,-1,70,71,24,-1,25,16,23,-1,23,27,25,-1,27,23,16,-1,16,25,27,-1,14,9,10,-1,10,17,14,-1,56,54,55,-1,55,57,56,-1,28,24,71,-1,71,72,28,-1,17,10,13,-1,13,18,17,-1,2,26,25,-1,25,4,2,-1,4,25,27,-1,27,5,4,-1,4,25,26,-1,26,2,4,-1,5,27,25,-1,25,4,5,-1,19,14,17,-1,17,20,19,-1,47,56,57,-1,57,51,47,-1,11,28,72,-1,72,68,11,-1,20,17,18,-1,18,21,20,-1,32,37,0,-1,0,8,32,-1,16,3,22,-1,22,29,16,-1,22,3,16,-1,16,29,22,-1,25,16,29,-1,29,26,25,-1,16,25,26,-1,26,29,16,-1,35,30,3,-1,64,63,65,-1,64,65,66,-1,66,67,43,-1,66,43,42,-1,64,66,42,-1,42,66,65,-1,64,42,65,-1,64,65,63,-1,35,38,39,-1,39,31,35,-1,31,39,38,-1,38,35,31,-1,35,38,40,-1,40,30,35,-1,30,40,41,-1,41,36,30,-1,61,66,42,-1,42,59,61,-1,58,42,43,-1,43,62,58,-1,62,43,67,-1,67,60,62,-1,33,44,74,-1,74,73,33,-1,36,41,40,-1,40,30,36,-1,30,40,38,-1,38,35,30,-1]
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
HAnimJoint121.center = [0,29.620001,-1.431]
HAnimJoint121.ulimit = [0,0,0]
HAnimJoint121.llimit = [0,0,0]
HAnimSegment122 = x3d.HAnimSegment()
HAnimSegment122.name = "pelvis"
HAnimSegment122.DEF = "hanim_pelvis"
Transform123 = x3d.Transform()
Transform123.translation = [0,29.620001,-1.431]
Shape124 = x3d.Shape()
Appearance125 = x3d.Appearance()
Material126 = x3d.Material()
Material126.diffuseColor = [0.588,0.588,0.588]

Appearance125.material = Material126
ImageTexture127 = x3d.ImageTexture()
ImageTexture127.USE = "DaTextureAtlas"

Appearance125.texture = ImageTexture127

Shape124.appearance = Appearance125
IndexedFaceSet128 = x3d.IndexedFaceSet()
IndexedFaceSet128.coordIndex = [12,0,6,-1,6,7,12,-1,11,23,45,-1,45,9,11,-1,21,4,2,-1,2,20,21,-1,13,5,3,-1,3,11,13,-1,17,18,6,-1,6,0,17,-1,14,7,6,-1,6,1,14,-1,15,35,24,-1,24,2,15,-1,19,60,37,-1,37,3,19,-1,12,8,4,-1,4,0,12,-1,16,22,5,-1,5,1,16,-1,13,11,9,-1,17,0,4,-1,4,21,17,-1,14,1,5,-1,5,13,14,-1,8,15,2,-1,2,4,8,-1,22,19,3,-1,3,5,22,-1,18,16,1,-1,1,6,18,-1,31,38,66,-1,66,26,31,-1,25,15,30,-1,28,12,7,-1,7,27,28,-1,29,8,12,-1,12,28,29,-1,15,8,29,-1,29,30,15,-1,32,9,31,-1,33,13,9,-1,9,32,33,-1,34,14,13,-1,13,33,34,-1,27,7,14,-1,14,34,27,-1,35,15,25,-1,25,39,35,-1,10,20,2,-1,2,24,10,-1,11,3,37,-1,37,23,11,-1,38,31,9,-1,9,45,38,-1,26,66,39,-1,39,25,26,-1,30,26,25,-1,18,17,36,-1,17,21,36,-1,21,20,36,-1,20,10,36,-1,60,19,36,-1,19,22,36,-1,22,16,36,-1,16,18,36,-1,30,29,28,-1,28,27,34,-1,34,33,32,-1,28,34,32,-1,30,28,32,-1,30,32,31,-1,26,30,31,-1,40,43,42,-1,42,41,40,-1,44,46,45,-1,45,23,44,-1,48,47,50,-1,50,49,48,-1,51,44,53,-1,53,52,51,-1,54,41,42,-1,42,55,54,-1,57,56,42,-1,42,43,57,-1,58,50,24,-1,24,35,58,-1,59,53,37,-1,37,60,59,-1,40,41,49,-1,49,61,40,-1,62,56,52,-1,52,63,62,-1,51,46,44,-1,54,48,49,-1,49,41,54,-1,57,51,52,-1,52,56,57,-1,61,49,50,-1,50,58,61,-1,63,52,53,-1,53,59,63,-1,55,42,56,-1,56,62,55,-1,65,64,66,-1,66,38,65,-1,67,68,58,-1,69,70,43,-1,43,40,69,-1,71,69,40,-1,40,61,71,-1,58,68,71,-1,71,61,58,-1,72,65,46,-1,73,72,46,-1,46,51,73,-1,74,73,51,-1,51,57,74,-1,70,74,57,-1,57,43,70,-1,35,39,67,-1,67,58,35,-1,10,24,50,-1,50,47,10,-1,44,23,37,-1,37,53,44,-1,38,45,46,-1,46,65,38,-1,64,67,39,-1,39,66,64,-1,68,67,64,-1,55,36,54,-1,54,36,48,-1,48,36,47,-1,47,36,10,-1,60,36,59,-1,59,36,63,-1,63,36,62,-1,62,36,55,-1,72,73,74,-1,74,70,69,-1,72,74,69,-1,69,71,68,-1,72,69,68,-1,65,72,68,-1,64,65,68,-1]
IndexedFaceSet128.creaseAngle = 1.57
IndexedFaceSet128.texCoordIndex = [0,1,2,-1,2,3,0,-1,4,5,6,-1,6,7,4,-1,9,10,11,-1,11,8,9,-1,12,13,14,-1,14,4,12,-1,15,16,2,-1,2,1,15,-1,18,3,2,-1,2,17,18,-1,19,20,21,-1,21,11,19,-1,22,23,24,-1,24,14,22,-1,0,25,10,-1,10,1,0,-1,26,27,13,-1,13,17,26,-1,12,4,7,-1,15,1,10,-1,10,9,15,-1,18,17,13,-1,13,12,18,-1,25,19,11,-1,11,10,25,-1,27,22,14,-1,14,13,27,-1,16,26,17,-1,17,2,16,-1,29,38,30,-1,30,28,29,-1,40,19,31,-1,32,0,3,-1,3,33,32,-1,34,25,0,-1,0,32,34,-1,19,25,34,-1,34,31,19,-1,35,7,29,-1,36,12,7,-1,7,35,36,-1,37,18,12,-1,12,36,37,-1,33,3,18,-1,18,37,33,-1,20,19,40,-1,40,41,20,-1,39,8,11,-1,11,21,39,-1,4,14,24,-1,24,5,4,-1,38,29,7,-1,7,6,38,-1,28,30,41,-1,41,40,28,-1,31,28,40,-1,16,15,42,-1,15,9,42,-1,9,8,42,-1,8,39,42,-1,23,22,42,-1,22,27,42,-1,27,26,42,-1,26,16,42,-1,31,34,32,-1,32,33,37,-1,37,36,35,-1,32,37,35,-1,31,32,35,-1,31,35,29,-1,28,31,29,-1,43,46,45,-1,45,44,43,-1,47,50,49,-1,49,48,47,-1,52,51,54,-1,54,53,52,-1,55,47,57,-1,57,56,55,-1,58,44,45,-1,45,59,58,-1,61,60,45,-1,45,46,61,-1,62,54,64,-1,64,63,62,-1,65,57,67,-1,67,66,65,-1,43,44,53,-1,53,68,43,-1,69,60,56,-1,56,70,69,-1,55,50,47,-1,58,52,53,-1,53,44,58,-1,61,55,56,-1,56,60,61,-1,68,53,54,-1,54,62,68,-1,70,56,57,-1,57,65,70,-1,59,45,60,-1,60,69,59,-1,72,71,74,-1,74,73,72,-1,75,76,62,-1,77,78,46,-1,46,43,77,-1,79,77,43,-1,43,68,79,-1,62,76,79,-1,79,68,62,-1,80,72,50,-1,81,80,50,-1,50,55,81,-1,82,81,55,-1,55,61,82,-1,78,82,61,-1,61,46,78,-1,63,83,75,-1,75,62,63,-1,84,64,54,-1,54,51,84,-1,47,48,67,-1,67,57,47,-1,73,49,50,-1,50,72,73,-1,71,75,83,-1,83,74,71,-1,76,75,71,-1,59,85,58,-1,58,85,52,-1,52,85,51,-1,51,85,84,-1,66,85,65,-1,65,85,70,-1,70,85,69,-1,69,85,59,-1,80,81,82,-1,82,78,77,-1,80,82,77,-1,77,79,76,-1,80,77,76,-1,72,80,76,-1,71,72,76,-1]
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
HAnimJoint131.center = [6.32,49.709999,-1.215]
HAnimJoint131.ulimit = [0,0,0]
HAnimJoint131.llimit = [0,0,0]
HAnimSegment132 = x3d.HAnimSegment()
HAnimSegment132.name = "l_upperarm"
HAnimSegment132.DEF = "hanim_l_upperarm"
Transform133 = x3d.Transform()
Transform133.translation = [6.32,49.709999,-1.215]
Shape134 = x3d.Shape()
Appearance135 = x3d.Appearance()
Material136 = x3d.Material()
Material136.diffuseColor = [0.588,0.588,0.588]

Appearance135.material = Material136
ImageTexture137 = x3d.ImageTexture()
ImageTexture137.USE = "DaTextureAtlas"

Appearance135.texture = ImageTexture137

Shape134.appearance = Appearance135
IndexedFaceSet138 = x3d.IndexedFaceSet()
IndexedFaceSet138.coordIndex = [1,22,18,-1,18,2,1,-1,3,0,22,-1,22,1,3,-1,19,0,3,-1,3,4,19,-1,20,19,4,-1,4,5,20,-1,6,21,20,-1,20,5,6,-1,7,23,21,-1,21,6,7,-1,24,23,7,-1,7,8,24,-1,18,24,8,-1,8,2,18,-1,1,2,10,-1,10,9,1,-1,3,1,9,-1,9,11,3,-1,12,4,3,-1,3,11,12,-1,13,5,4,-1,4,12,13,-1,14,6,5,-1,5,13,14,-1,15,7,6,-1,6,14,15,-1,8,7,15,-1,15,16,8,-1,2,8,16,-1,16,10,2,-1,10,17,9,-1,9,17,11,-1,11,17,12,-1,12,17,13,-1,13,17,14,-1,14,17,15,-1,15,17,16,-1,16,17,10,-1,27,28,29,-1,29,30,31,-1,31,32,25,-1,29,31,25,-1,27,29,25,-1,26,27,25,-1,0,19,26,-1,26,25,0,-1,19,20,27,-1,27,26,19,-1,20,21,28,-1,28,27,20,-1,21,23,29,-1,29,28,21,-1,23,24,30,-1,30,29,23,-1,24,18,31,-1,31,30,24,-1,18,22,32,-1,32,31,18,-1,22,0,25,-1,25,32,22,-1]
IndexedFaceSet138.creaseAngle = 1.57
IndexedFaceSet138.texCoordIndex = [9,0,1,-1,1,10,9,-1,11,2,0,-1,0,9,11,-1,3,2,11,-1,11,12,3,-1,4,3,12,-1,12,13,4,-1,14,5,4,-1,4,13,14,-1,15,6,5,-1,5,14,15,-1,8,7,17,-1,17,16,8,-1,1,8,16,-1,16,10,1,-1,9,10,19,-1,19,18,9,-1,11,9,18,-1,18,20,11,-1,21,12,11,-1,11,20,21,-1,22,13,12,-1,12,21,22,-1,23,14,13,-1,13,22,23,-1,24,15,14,-1,14,23,24,-1,16,17,26,-1,26,25,16,-1,10,16,25,-1,25,19,10,-1,19,27,18,-1,18,27,20,-1,20,27,21,-1,21,27,22,-1,22,27,23,-1,23,27,24,-1,26,27,25,-1,25,27,19,-1,30,31,32,-1,32,33,34,-1,34,35,28,-1,32,34,28,-1,30,32,28,-1,29,30,28,-1,2,3,29,-1,29,28,2,-1,3,4,30,-1,30,29,3,-1,4,5,31,-1,31,30,4,-1,5,6,32,-1,32,31,5,-1,7,8,33,-1,33,32,7,-1,8,1,34,-1,34,33,8,-1,1,0,35,-1,35,34,1,-1,0,2,28,-1,28,35,0,-1]
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
HAnimJoint141.center = [6.687,42.259998,-1.215]
HAnimJoint141.ulimit = [0,0,0]
HAnimJoint141.llimit = [0,0,0]
HAnimSegment142 = x3d.HAnimSegment()
HAnimSegment142.name = "l_forearm"
HAnimSegment142.DEF = "hanim_l_forearm"
Transform143 = x3d.Transform()
Transform143.translation = [6.687,42.259998,-1.215]
Shape144 = x3d.Shape()
Appearance145 = x3d.Appearance()
Material146 = x3d.Material()
Material146.diffuseColor = [0.588,0.588,0.588]

Appearance145.material = Material146
ImageTexture147 = x3d.ImageTexture()
ImageTexture147.USE = "DaTextureAtlas"

Appearance145.texture = ImageTexture147

Shape144.appearance = Appearance145
IndexedFaceSet148 = x3d.IndexedFaceSet()
IndexedFaceSet148.coordIndex = [25,29,8,-1,8,9,25,-1,29,24,10,-1,10,8,29,-1,10,24,26,-1,26,11,10,-1,11,26,27,-1,27,12,11,-1,12,27,28,-1,28,13,12,-1,13,28,30,-1,30,14,13,-1,15,31,25,-1,25,9,15,-1,30,31,15,-1,15,14,30,-1,9,8,7,-1,7,0,9,-1,8,10,1,-1,1,7,8,-1,1,10,11,-1,11,4,1,-1,4,11,12,-1,12,5,4,-1,5,12,13,-1,13,6,5,-1,6,13,14,-1,14,2,6,-1,3,15,9,-1,9,0,3,-1,14,15,3,-1,3,2,14,-1,18,19,20,-1,20,21,22,-1,18,20,22,-1,22,23,16,-1,18,22,16,-1,17,18,16,-1,0,7,17,-1,17,16,0,-1,7,1,18,-1,18,17,7,-1,1,4,19,-1,19,18,1,-1,4,5,20,-1,20,19,4,-1,5,6,21,-1,21,20,5,-1,6,2,22,-1,22,21,6,-1,2,3,23,-1,23,22,2,-1,3,0,16,-1,16,23,3,-1,34,35,36,-1,36,37,38,-1,38,39,32,-1,36,38,32,-1,34,36,32,-1,33,34,32,-1,26,24,33,-1,33,32,26,-1,24,29,34,-1,34,33,24,-1,29,25,35,-1,35,34,29,-1,25,31,36,-1,36,35,25,-1,31,30,37,-1,37,36,31,-1,30,28,38,-1,38,37,30,-1,28,27,39,-1,39,38,28,-1,27,26,32,-1,32,39,27,-1]
IndexedFaceSet148.creaseAngle = 1.57
IndexedFaceSet148.texCoordIndex = [27,31,9,-1,9,10,27,-1,31,26,11,-1,11,9,31,-1,11,26,28,-1,28,12,11,-1,12,28,29,-1,29,13,12,-1,13,29,30,-1,30,14,13,-1,14,30,32,-1,32,15,14,-1,17,34,27,-1,27,10,17,-1,33,34,17,-1,17,16,33,-1,10,9,0,-1,0,1,10,-1,9,11,2,-1,2,0,9,-1,2,11,12,-1,12,3,2,-1,3,12,13,-1,13,4,3,-1,4,13,14,-1,14,5,4,-1,5,14,15,-1,15,6,5,-1,7,17,10,-1,10,1,7,-1,16,17,7,-1,7,8,16,-1,20,21,22,-1,22,23,24,-1,20,22,24,-1,24,25,18,-1,20,24,18,-1,19,20,18,-1,1,0,19,-1,19,18,1,-1,0,2,20,-1,20,19,0,-1,2,3,21,-1,21,20,2,-1,3,4,22,-1,22,21,3,-1,4,5,23,-1,23,22,4,-1,5,6,24,-1,24,23,5,-1,8,7,25,-1,25,24,8,-1,7,1,18,-1,18,25,7,-1,37,38,39,-1,39,40,41,-1,41,42,35,-1,39,41,35,-1,37,39,35,-1,36,37,35,-1,28,26,36,-1,36,35,28,-1,26,31,37,-1,37,36,26,-1,31,27,38,-1,38,37,31,-1,27,34,39,-1,39,38,27,-1,34,33,40,-1,40,39,34,-1,32,30,41,-1,41,40,32,-1,30,29,42,-1,42,41,30,-1,29,28,35,-1,35,42,29,-1]
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
HAnimJoint151.center = [7.341,34.169998,-1.443]
HAnimJoint151.ulimit = [0,0,0]
HAnimJoint151.llimit = [0,0,0]
HAnimSegment152 = x3d.HAnimSegment()
HAnimSegment152.name = "l_carpal"
HAnimSegment152.DEF = "hanim_l_carpal"
Transform153 = x3d.Transform()
Transform153.translation = [7.341,34.169998,-1.443]
Shape154 = x3d.Shape()
Appearance155 = x3d.Appearance()
Material156 = x3d.Material()
Material156.diffuseColor = [0.588,0.588,0.588]

Appearance155.material = Material156
ImageTexture157 = x3d.ImageTexture()
ImageTexture157.USE = "DaTextureAtlas"

Appearance155.texture = ImageTexture157

Shape154.appearance = Appearance155
IndexedFaceSet158 = x3d.IndexedFaceSet()
IndexedFaceSet158.coordIndex = [14,17,18,-1,18,13,14,-1,12,19,20,-1,20,11,12,-1,4,8,6,-1,6,0,4,-1,10,21,22,-1,22,9,10,-1,16,18,17,-1,17,15,16,-1,2,6,8,-1,8,5,2,-1,13,20,19,-1,19,14,13,-1,3,5,8,-1,8,7,3,-1,15,22,21,-1,21,16,15,-1,8,4,1,-1,1,7,8,-1,2,5,17,-1,17,14,2,-1,18,32,28,-1,28,13,18,-1,12,0,6,-1,6,19,12,-1,20,35,24,-1,24,11,20,-1,10,26,36,-1,36,21,10,-1,22,7,1,-1,1,9,22,-1,30,32,18,-1,18,16,30,-1,17,5,3,-1,3,15,17,-1,28,35,20,-1,20,13,28,-1,19,6,2,-1,2,14,19,-1,3,7,22,-1,22,15,3,-1,21,36,30,-1,30,16,21,-1,28,32,33,-1,33,27,28,-1,24,35,34,-1,34,23,24,-1,25,37,36,-1,36,26,25,-1,30,29,33,-1,33,32,30,-1,31,23,34,-1,34,38,31,-1,29,37,38,-1,38,33,29,-1,28,27,34,-1,34,35,28,-1,29,30,36,-1,36,37,29,-1,27,33,38,-1,38,34,27,-1,31,38,37,-1,37,25,31,-1,67,44,43,-1,43,39,67,-1,40,46,45,-1,45,41,40,-1,42,39,43,-1,43,48,42,-1,47,55,41,-1,41,45,47,-1,42,48,46,-1,46,40,42,-1,9,1,50,-1,50,52,9,-1,4,0,49,-1,49,51,4,-1,11,24,54,-1,54,58,11,-1,1,4,51,-1,51,50,1,-1,10,9,52,-1,52,53,10,-1,26,10,53,-1,53,68,26,-1,0,12,70,-1,70,49,0,-1,31,25,61,-1,61,100,31,-1,25,26,68,-1,68,61,25,-1,24,23,95,-1,95,54,24,-1,23,31,100,-1,100,95,23,-1,95,96,54,-1,39,42,97,-1,97,96,39,-1,42,40,98,-1,98,97,42,-1,40,41,99,-1,99,98,40,-1,99,41,55,-1,55,100,99,-1,100,55,67,-1,67,95,100,-1,54,96,56,-1,56,58,54,-1,96,97,57,-1,57,56,96,-1,97,98,59,-1,59,57,97,-1,98,99,60,-1,60,59,98,-1,99,100,60,-1,52,50,63,-1,63,65,52,-1,51,49,62,-1,62,64,51,-1,50,51,64,-1,64,63,50,-1,53,52,65,-1,65,66,53,-1,70,71,62,-1,62,49,70,-1,68,69,60,-1,60,61,68,-1,72,73,65,-1,65,63,72,-1,73,74,66,-1,66,65,73,-1,81,69,66,-1,66,74,81,-1,75,76,59,-1,59,60,75,-1,76,77,57,-1,57,59,76,-1,77,78,56,-1,56,57,77,-1,82,71,56,-1,56,78,82,-1,79,80,64,-1,64,62,79,-1,80,72,63,-1,63,64,80,-1,55,47,44,-1,44,67,55,-1,95,67,39,-1,39,96,95,-1,68,53,66,-1,66,69,68,-1,75,60,69,-1,69,81,75,-1,100,61,60,-1,58,56,71,-1,71,70,58,-1,79,62,71,-1,71,82,79,-1,12,11,58,-1,58,70,12,-1,47,45,46,-1,46,48,47,-1,47,48,43,-1,43,44,47,-1,72,85,84,-1,84,73,72,-1,80,86,85,-1,85,72,80,-1,79,87,86,-1,86,80,79,-1,82,88,87,-1,87,79,82,-1,78,89,88,-1,88,82,78,-1,77,90,89,-1,89,78,77,-1,76,91,90,-1,90,77,76,-1,75,92,91,-1,91,76,75,-1,81,93,92,-1,92,75,81,-1,74,94,93,-1,93,81,74,-1,74,73,84,-1,84,94,74,-1,85,83,84,-1,86,83,85,-1,87,83,86,-1,88,83,87,-1,89,83,88,-1,90,83,89,-1,91,83,90,-1,92,83,91,-1,93,83,92,-1,94,83,93,-1,84,83,94,-1]
IndexedFaceSet158.creaseAngle = 1.57
IndexedFaceSet158.texCoordIndex = [1,2,3,-1,3,0,1,-1,5,6,7,-1,7,4,5,-1,9,10,11,-1,11,8,9,-1,13,14,15,-1,15,12,13,-1,17,96,95,-1,95,16,17,-1,19,11,10,-1,10,18,19,-1,0,7,6,-1,6,1,0,-1,21,99,98,-1,98,20,21,-1,16,15,14,-1,14,17,16,-1,98,97,22,-1,22,20,98,-1,19,18,2,-1,2,1,19,-1,3,23,24,-1,24,0,3,-1,5,8,11,-1,11,6,5,-1,7,25,26,-1,26,4,7,-1,13,27,28,-1,28,14,13,-1,15,20,22,-1,22,12,15,-1,29,100,96,-1,96,17,29,-1,95,99,21,-1,21,16,95,-1,24,25,7,-1,7,0,24,-1,6,11,19,-1,19,1,6,-1,21,20,15,-1,15,16,21,-1,14,28,29,-1,29,17,14,-1,24,23,31,-1,31,30,24,-1,26,25,33,-1,33,32,26,-1,34,35,28,-1,28,27,34,-1,29,36,101,-1,101,100,29,-1,37,32,33,-1,33,39,37,-1,36,35,38,-1,38,101,36,-1,24,30,33,-1,33,25,24,-1,36,29,28,-1,28,35,36,-1,30,31,39,-1,39,33,30,-1,102,38,35,-1,35,34,102,-1,41,42,47,-1,47,40,41,-1,44,45,46,-1,46,43,44,-1,48,40,47,-1,47,53,48,-1,49,50,43,-1,43,46,49,-1,103,104,45,-1,45,44,103,-1,12,22,51,-1,51,52,12,-1,9,8,54,-1,54,55,9,-1,4,26,56,-1,56,59,4,-1,22,97,105,-1,105,51,22,-1,13,12,52,-1,52,57,13,-1,27,13,57,-1,57,58,27,-1,8,5,62,-1,62,54,8,-1,102,34,60,-1,60,61,102,-1,34,27,58,-1,58,60,34,-1,26,32,63,-1,63,56,26,-1,32,37,64,-1,64,63,32,-1,63,67,56,-1,40,48,127,-1,127,125,40,-1,103,44,128,-1,128,126,103,-1,44,43,129,-1,129,128,44,-1,129,43,50,-1,50,130,129,-1,131,73,41,-1,41,124,131,-1,56,67,74,-1,74,59,56,-1,67,68,76,-1,76,74,67,-1,106,65,69,-1,69,107,106,-1,65,66,70,-1,70,69,65,-1,66,61,70,-1,52,51,71,-1,71,72,52,-1,55,54,85,-1,85,86,55,-1,51,105,108,-1,108,71,51,-1,57,52,72,-1,72,75,57,-1,62,87,85,-1,85,54,62,-1,58,77,70,-1,70,60,58,-1,78,79,72,-1,72,71,78,-1,79,80,75,-1,75,72,79,-1,81,77,75,-1,75,80,81,-1,82,83,69,-1,69,70,82,-1,83,84,107,-1,107,69,83,-1,88,89,74,-1,74,76,88,-1,90,87,74,-1,74,89,90,-1,91,92,86,-1,86,85,91,-1,109,78,71,-1,71,108,109,-1,73,93,42,-1,42,41,73,-1,124,41,40,-1,40,125,124,-1,58,57,75,-1,75,77,58,-1,82,70,77,-1,77,81,82,-1,61,60,70,-1,59,74,87,-1,87,62,59,-1,91,85,87,-1,87,90,91,-1,5,4,59,-1,59,62,5,-1,49,46,45,-1,45,104,49,-1,93,53,47,-1,47,42,93,-1,78,112,111,-1,111,79,78,-1,109,113,112,-1,112,78,109,-1,91,115,114,-1,114,92,91,-1,90,116,115,-1,115,91,90,-1,89,117,116,-1,116,90,89,-1,88,118,117,-1,117,89,88,-1,83,120,119,-1,119,84,83,-1,82,121,120,-1,120,83,82,-1,81,122,121,-1,121,82,81,-1,80,123,122,-1,122,81,80,-1,80,79,111,-1,111,123,80,-1,112,110,111,-1,113,110,112,-1,115,94,114,-1,116,94,115,-1,117,94,116,-1,118,94,117,-1,120,110,119,-1,121,110,120,-1,122,110,121,-1,123,110,122,-1,111,110,123,-1]
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
HAnimJoint161.center = [-6.32,49.709999,-1.215]
HAnimJoint161.ulimit = [0,0,0]
HAnimJoint161.llimit = [0,0,0]
HAnimSegment162 = x3d.HAnimSegment()
HAnimSegment162.name = "r_upperarm"
HAnimSegment162.DEF = "hanim_r_upperarm"
Transform163 = x3d.Transform()
Transform163.translation = [-6.32,49.709999,-1.215]
Shape164 = x3d.Shape()
Appearance165 = x3d.Appearance()
Material166 = x3d.Material()
Material166.diffuseColor = [0.588,0.588,0.588]

Appearance165.material = Material166
ImageTexture167 = x3d.ImageTexture()
ImageTexture167.USE = "DaTextureAtlas"

Appearance165.texture = ImageTexture167

Shape164.appearance = Appearance165
IndexedFaceSet168 = x3d.IndexedFaceSet()
IndexedFaceSet168.coordIndex = [1,2,18,-1,18,22,1,-1,3,1,22,-1,22,0,3,-1,19,4,3,-1,3,0,19,-1,20,5,4,-1,4,19,20,-1,6,5,20,-1,20,21,6,-1,7,6,21,-1,21,23,7,-1,24,8,7,-1,7,23,24,-1,18,2,8,-1,8,24,18,-1,1,9,10,-1,10,2,1,-1,3,11,9,-1,9,1,3,-1,12,11,3,-1,3,4,12,-1,13,12,4,-1,4,5,13,-1,14,13,5,-1,5,6,14,-1,15,14,6,-1,6,7,15,-1,8,16,15,-1,15,7,8,-1,2,10,16,-1,16,8,2,-1,10,9,17,-1,9,11,17,-1,11,12,17,-1,12,13,17,-1,13,14,17,-1,14,15,17,-1,15,16,17,-1,16,10,17,-1,25,32,31,-1,31,30,29,-1,25,31,29,-1,29,28,27,-1,25,29,27,-1,26,25,27,-1,0,25,26,-1,26,19,0,-1,19,26,27,-1,27,20,19,-1,20,27,28,-1,28,21,20,-1,21,28,29,-1,29,23,21,-1,23,29,30,-1,30,24,23,-1,24,30,31,-1,31,18,24,-1,18,31,32,-1,32,22,18,-1,22,32,25,-1,25,0,22,-1]
IndexedFaceSet168.creaseAngle = 1.57
IndexedFaceSet168.texCoordIndex = [9,10,1,-1,1,0,9,-1,11,9,0,-1,0,2,11,-1,3,12,11,-1,11,2,3,-1,4,13,12,-1,12,3,4,-1,14,13,4,-1,4,5,14,-1,15,14,5,-1,5,6,15,-1,8,16,17,-1,17,7,8,-1,1,10,16,-1,16,8,1,-1,9,18,19,-1,19,10,9,-1,11,20,18,-1,18,9,11,-1,21,20,11,-1,11,12,21,-1,22,21,12,-1,12,13,22,-1,23,22,13,-1,13,14,23,-1,24,23,14,-1,14,15,24,-1,16,25,26,-1,26,17,16,-1,10,19,25,-1,25,16,10,-1,19,18,27,-1,18,20,27,-1,20,21,27,-1,21,22,27,-1,22,23,27,-1,23,24,27,-1,26,25,27,-1,25,19,27,-1,28,35,34,-1,34,33,32,-1,28,34,32,-1,32,31,30,-1,28,32,30,-1,29,28,30,-1,2,28,29,-1,29,3,2,-1,3,29,30,-1,30,4,3,-1,4,30,31,-1,31,5,4,-1,5,31,32,-1,32,6,5,-1,7,32,33,-1,33,8,7,-1,8,33,34,-1,34,1,8,-1,1,34,35,-1,35,0,1,-1,0,35,28,-1,28,2,0,-1]
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
HAnimJoint171.center = [-6.687,42.259998,-1.215]
HAnimJoint171.ulimit = [0,0,0]
HAnimJoint171.llimit = [0,0,0]
HAnimSegment172 = x3d.HAnimSegment()
HAnimSegment172.name = "r_forearm"
HAnimSegment172.DEF = "hanim_r_forearm"
Transform173 = x3d.Transform()
Transform173.translation = [-6.687,42.259998,-1.215]
Shape174 = x3d.Shape()
Appearance175 = x3d.Appearance()
Material176 = x3d.Material()
Material176.diffuseColor = [0.588,0.588,0.588]

Appearance175.material = Material176
ImageTexture177 = x3d.ImageTexture()
ImageTexture177.USE = "DaTextureAtlas"

Appearance175.texture = ImageTexture177

Shape174.appearance = Appearance175
IndexedFaceSet178 = x3d.IndexedFaceSet()
IndexedFaceSet178.coordIndex = [25,9,8,-1,8,29,25,-1,29,8,10,-1,10,24,29,-1,10,11,26,-1,26,24,10,-1,11,12,27,-1,27,26,11,-1,12,13,28,-1,28,27,12,-1,13,14,30,-1,30,28,13,-1,15,9,25,-1,25,31,15,-1,30,14,15,-1,15,31,30,-1,9,0,7,-1,7,8,9,-1,8,7,1,-1,1,10,8,-1,1,4,11,-1,11,10,1,-1,4,5,12,-1,12,11,4,-1,5,6,13,-1,13,12,5,-1,6,2,14,-1,14,13,6,-1,3,0,9,-1,9,15,3,-1,14,2,3,-1,3,15,14,-1,16,23,22,-1,22,21,20,-1,20,19,18,-1,22,20,18,-1,16,22,18,-1,17,16,18,-1,0,16,17,-1,17,7,0,-1,7,17,18,-1,18,1,7,-1,1,18,19,-1,19,4,1,-1,4,19,20,-1,20,5,4,-1,5,20,21,-1,21,6,5,-1,6,21,22,-1,22,2,6,-1,2,22,23,-1,23,3,2,-1,3,23,16,-1,16,0,3,-1,32,39,38,-1,38,37,36,-1,32,38,36,-1,36,35,34,-1,32,36,34,-1,33,32,34,-1,26,32,33,-1,33,24,26,-1,24,33,34,-1,34,29,24,-1,29,34,35,-1,35,25,29,-1,25,35,36,-1,36,31,25,-1,31,36,37,-1,37,30,31,-1,30,37,38,-1,38,28,30,-1,28,38,39,-1,39,27,28,-1,27,39,32,-1,32,26,27,-1]
IndexedFaceSet178.creaseAngle = 1.57
IndexedFaceSet178.texCoordIndex = [27,10,9,-1,9,31,27,-1,31,9,11,-1,11,26,31,-1,11,12,28,-1,28,26,11,-1,12,13,29,-1,29,28,12,-1,13,14,30,-1,30,29,13,-1,14,15,32,-1,32,30,14,-1,17,10,27,-1,27,34,17,-1,33,16,17,-1,17,34,33,-1,10,1,0,-1,0,9,10,-1,9,0,2,-1,2,11,9,-1,2,3,12,-1,12,11,2,-1,3,4,13,-1,13,12,3,-1,4,5,14,-1,14,13,4,-1,5,6,15,-1,15,14,5,-1,7,1,10,-1,10,17,7,-1,16,8,7,-1,7,17,16,-1,18,25,24,-1,24,23,22,-1,22,21,20,-1,24,22,20,-1,18,24,20,-1,19,18,20,-1,1,18,19,-1,19,0,1,-1,0,19,20,-1,20,2,0,-1,2,20,21,-1,21,3,2,-1,3,21,22,-1,22,4,3,-1,4,22,23,-1,23,5,4,-1,5,23,24,-1,24,6,5,-1,8,24,25,-1,25,7,8,-1,7,25,18,-1,18,1,7,-1,35,42,41,-1,41,40,39,-1,35,41,39,-1,39,38,37,-1,35,39,37,-1,36,35,37,-1,28,35,36,-1,36,26,28,-1,26,36,37,-1,37,31,26,-1,31,37,38,-1,38,27,31,-1,27,38,39,-1,39,34,27,-1,34,39,40,-1,40,33,34,-1,32,40,41,-1,41,30,32,-1,30,41,42,-1,42,29,30,-1,29,42,35,-1,35,28,29,-1]
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
HAnimJoint181.center = [-7.341,34.169998,-1.443]
HAnimJoint181.ulimit = [0,0,0]
HAnimJoint181.llimit = [0,0,0]
HAnimSegment182 = x3d.HAnimSegment()
HAnimSegment182.name = "r_carpal"
HAnimSegment182.DEF = "hanim_r_carpal"
Transform183 = x3d.Transform()
Transform183.translation = [-7.341,34.169998,-1.443]
Shape184 = x3d.Shape()
Appearance185 = x3d.Appearance()
Material186 = x3d.Material()
Material186.diffuseColor = [0.588,0.588,0.588]

Appearance185.material = Material186
ImageTexture187 = x3d.ImageTexture()
ImageTexture187.USE = "DaTextureAtlas"

Appearance185.texture = ImageTexture187

Shape184.appearance = Appearance185
IndexedFaceSet188 = x3d.IndexedFaceSet()
IndexedFaceSet188.coordIndex = [14,13,18,-1,18,17,14,-1,12,11,20,-1,20,19,12,-1,4,0,6,-1,6,8,4,-1,10,9,22,-1,22,21,10,-1,16,15,17,-1,17,18,16,-1,2,5,8,-1,8,6,2,-1,13,14,19,-1,19,20,13,-1,3,7,8,-1,8,5,3,-1,15,16,21,-1,21,22,15,-1,8,7,1,-1,1,4,8,-1,2,14,17,-1,17,5,2,-1,18,13,28,-1,28,32,18,-1,12,19,6,-1,6,0,12,-1,20,11,24,-1,24,35,20,-1,10,21,36,-1,36,26,10,-1,22,9,1,-1,1,7,22,-1,30,16,18,-1,18,32,30,-1,17,15,3,-1,3,5,17,-1,28,13,20,-1,20,35,28,-1,19,14,2,-1,2,6,19,-1,3,15,22,-1,22,7,3,-1,21,16,30,-1,30,36,21,-1,28,27,33,-1,33,32,28,-1,24,23,34,-1,34,35,24,-1,25,26,36,-1,36,37,25,-1,30,32,33,-1,33,29,30,-1,31,38,34,-1,34,23,31,-1,29,33,38,-1,38,37,29,-1,28,35,34,-1,34,27,28,-1,29,37,36,-1,36,30,29,-1,27,34,38,-1,38,33,27,-1,31,25,37,-1,37,38,31,-1,67,39,43,-1,43,44,67,-1,40,41,45,-1,45,46,40,-1,42,48,43,-1,43,39,42,-1,47,45,41,-1,41,55,47,-1,42,40,46,-1,46,48,42,-1,9,52,50,-1,50,1,9,-1,4,51,49,-1,49,0,4,-1,11,58,54,-1,54,24,11,-1,1,50,51,-1,51,4,1,-1,10,53,52,-1,52,9,10,-1,26,68,53,-1,53,10,26,-1,0,49,70,-1,70,12,0,-1,31,100,61,-1,61,25,31,-1,25,61,68,-1,68,26,25,-1,24,54,95,-1,95,23,24,-1,23,95,100,-1,100,31,23,-1,95,54,96,-1,39,96,97,-1,97,42,39,-1,42,97,98,-1,98,40,42,-1,40,98,99,-1,99,41,40,-1,99,100,55,-1,55,41,99,-1,100,95,67,-1,67,55,100,-1,54,58,56,-1,56,96,54,-1,96,56,57,-1,57,97,96,-1,97,57,59,-1,59,98,97,-1,98,59,60,-1,60,99,98,-1,99,60,100,-1,52,65,63,-1,63,50,52,-1,51,64,62,-1,62,49,51,-1,50,63,64,-1,64,51,50,-1,53,66,65,-1,65,52,53,-1,70,49,62,-1,62,71,70,-1,68,61,60,-1,60,69,68,-1,72,63,65,-1,65,73,72,-1,73,65,66,-1,66,74,73,-1,81,74,66,-1,66,69,81,-1,75,60,59,-1,59,76,75,-1,76,59,57,-1,57,77,76,-1,77,57,56,-1,56,78,77,-1,82,78,56,-1,56,71,82,-1,79,62,64,-1,64,80,79,-1,80,64,63,-1,63,72,80,-1,55,67,44,-1,44,47,55,-1,95,96,39,-1,39,67,95,-1,68,69,66,-1,66,53,68,-1,75,81,69,-1,69,60,75,-1,100,60,61,-1,58,70,71,-1,71,56,58,-1,79,82,71,-1,71,62,79,-1,12,70,58,-1,58,11,12,-1,47,48,46,-1,46,45,47,-1,47,44,43,-1,43,48,47,-1,72,73,84,-1,84,85,72,-1,80,72,85,-1,85,86,80,-1,79,80,86,-1,86,87,79,-1,82,79,87,-1,87,88,82,-1,78,82,88,-1,88,89,78,-1,77,78,89,-1,89,90,77,-1,76,77,90,-1,90,91,76,-1,75,76,91,-1,91,92,75,-1,81,75,92,-1,92,93,81,-1,74,81,93,-1,93,94,74,-1,74,94,84,-1,84,73,74,-1,85,84,83,-1,86,85,83,-1,87,86,83,-1,88,87,83,-1,89,88,83,-1,90,89,83,-1,91,90,83,-1,92,91,83,-1,93,92,83,-1,94,93,83,-1,84,94,83,-1]
IndexedFaceSet188.creaseAngle = 1.57
IndexedFaceSet188.texCoordIndex = [1,0,3,-1,3,2,1,-1,5,4,7,-1,7,6,5,-1,9,8,11,-1,11,10,9,-1,13,12,15,-1,15,14,13,-1,17,16,95,-1,95,96,17,-1,19,18,10,-1,10,11,19,-1,0,1,6,-1,6,7,0,-1,21,20,98,-1,98,99,21,-1,16,17,14,-1,14,15,16,-1,98,20,22,-1,22,97,98,-1,19,1,2,-1,2,18,19,-1,3,0,24,-1,24,23,3,-1,5,6,11,-1,11,8,5,-1,7,4,26,-1,26,25,7,-1,13,14,28,-1,28,27,13,-1,15,12,22,-1,22,20,15,-1,29,17,96,-1,96,100,29,-1,95,16,21,-1,21,99,95,-1,24,0,7,-1,7,25,24,-1,6,1,19,-1,19,11,6,-1,21,16,15,-1,15,20,21,-1,14,17,29,-1,29,28,14,-1,24,30,31,-1,31,23,24,-1,26,32,33,-1,33,25,26,-1,34,27,28,-1,28,35,34,-1,29,100,101,-1,101,36,29,-1,37,39,33,-1,33,32,37,-1,36,101,38,-1,38,35,36,-1,24,25,33,-1,33,30,24,-1,36,35,28,-1,28,29,36,-1,30,33,39,-1,39,31,30,-1,102,34,35,-1,35,38,102,-1,41,40,47,-1,47,42,41,-1,44,43,46,-1,46,45,44,-1,48,53,47,-1,47,40,48,-1,49,46,43,-1,43,50,49,-1,103,44,45,-1,45,104,103,-1,12,52,51,-1,51,22,12,-1,9,55,54,-1,54,8,9,-1,4,59,56,-1,56,26,4,-1,22,51,105,-1,105,97,22,-1,13,57,52,-1,52,12,13,-1,27,58,57,-1,57,13,27,-1,8,54,62,-1,62,5,8,-1,102,61,60,-1,60,34,102,-1,34,60,58,-1,58,27,34,-1,26,56,63,-1,63,32,26,-1,32,63,64,-1,64,37,32,-1,63,56,67,-1,40,125,127,-1,127,48,40,-1,103,126,128,-1,128,44,103,-1,44,128,129,-1,129,43,44,-1,129,130,50,-1,50,43,129,-1,131,124,41,-1,41,73,131,-1,56,59,74,-1,74,67,56,-1,67,74,76,-1,76,68,67,-1,106,107,69,-1,69,65,106,-1,65,69,70,-1,70,66,65,-1,66,70,61,-1,52,72,71,-1,71,51,52,-1,55,86,85,-1,85,54,55,-1,51,71,108,-1,108,105,51,-1,57,75,72,-1,72,52,57,-1,62,54,85,-1,85,87,62,-1,58,60,70,-1,70,77,58,-1,78,71,72,-1,72,79,78,-1,79,72,75,-1,75,80,79,-1,81,80,75,-1,75,77,81,-1,82,70,69,-1,69,83,82,-1,83,69,107,-1,107,84,83,-1,88,76,74,-1,74,89,88,-1,90,89,74,-1,74,87,90,-1,91,85,86,-1,86,92,91,-1,109,108,71,-1,71,78,109,-1,73,41,42,-1,42,93,73,-1,124,125,40,-1,40,41,124,-1,58,77,75,-1,75,57,58,-1,82,81,77,-1,77,70,82,-1,61,70,60,-1,59,62,87,-1,87,74,59,-1,91,90,87,-1,87,85,91,-1,5,62,59,-1,59,4,5,-1,49,104,45,-1,45,46,49,-1,93,42,47,-1,47,53,93,-1,78,79,111,-1,111,112,78,-1,109,78,112,-1,112,113,109,-1,91,92,114,-1,114,115,91,-1,90,91,115,-1,115,116,90,-1,89,90,116,-1,116,117,89,-1,88,89,117,-1,117,118,88,-1,83,84,119,-1,119,120,83,-1,82,83,120,-1,120,121,82,-1,81,82,121,-1,121,122,81,-1,80,81,122,-1,122,123,80,-1,80,123,111,-1,111,79,80,-1,112,111,110,-1,113,112,110,-1,115,114,94,-1,116,115,94,-1,117,116,94,-1,118,117,94,-1,120,119,110,-1,121,120,110,-1,122,121,110,-1,123,122,110,-1,111,123,110,-1]
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
HAnimJoint191.center = [0,36.869999,-1.035]
HAnimJoint191.ulimit = [0,0,0]
HAnimJoint191.llimit = [0,0,0]
HAnimSegment192 = x3d.HAnimSegment()
HAnimSegment192.name = "l5"
HAnimSegment192.DEF = "hanim_l5"
Transform193 = x3d.Transform()
Transform193.translation = [0,36.869999,-1.035]
Shape194 = x3d.Shape()
Appearance195 = x3d.Appearance()
Material196 = x3d.Material()
Material196.diffuseColor = [0.588,0.588,0.588]

Appearance195.material = Material196
ImageTexture197 = x3d.ImageTexture()
ImageTexture197.USE = "DaTextureAtlas"

Appearance195.texture = ImageTexture197

Shape194.appearance = Appearance195
IndexedFaceSet198 = x3d.IndexedFaceSet()
IndexedFaceSet198.coordIndex = [32,6,7,-1,7,33,32,-1,51,52,5,-1,5,0,51,-1,38,20,19,-1,19,37,38,-1,41,42,6,-1,6,75,41,-1,11,83,84,-1,84,12,11,-1,7,39,40,-1,40,4,7,-1,36,18,20,-1,20,38,36,-1,32,31,29,-1,29,6,32,-1,34,33,7,-1,7,4,34,-1,17,8,53,-1,53,54,17,-1,16,24,25,-1,25,11,16,-1,12,9,16,-1,16,11,12,-1,84,88,58,-1,58,12,84,-1,280,281,13,-1,13,58,280,-1,13,14,15,-1,15,9,13,-1,10,26,24,-1,24,16,10,-1,9,15,10,-1,10,16,9,-1,12,58,13,-1,13,9,12,-1,76,78,172,-1,172,169,76,-1,77,292,293,-1,293,171,77,-1,81,80,166,-1,166,167,81,-1,82,79,168,-1,168,170,82,-1,10,15,17,-1,14,303,304,-1,304,8,14,-1,20,5,3,-1,3,19,20,-1,18,0,5,-1,5,20,18,-1,19,3,174,-1,174,91,19,-1,4,30,35,-1,35,34,4,-1,15,14,8,-1,8,17,15,-1,10,17,1,-1,1,26,10,-1,36,23,21,-1,21,18,36,-1,22,0,18,-1,18,21,22,-1,56,55,22,-1,22,1,56,-1,21,24,26,-1,26,22,21,-1,1,22,26,-1,27,37,89,-1,89,175,27,-1,29,38,37,-1,37,27,29,-1,4,2,28,-1,28,30,4,-1,31,36,38,-1,38,29,31,-1,28,2,86,-1,86,85,28,-1,19,91,89,-1,89,37,19,-1,68,69,45,-1,45,44,68,-1,46,70,325,-1,325,326,46,-1,43,71,72,-1,72,49,43,-1,48,47,73,-1,73,74,48,-1,45,69,71,-1,71,43,45,-1,44,48,74,-1,74,68,44,-1,49,72,70,-1,70,46,49,-1,50,2,4,-1,4,40,50,-1,42,39,7,-1,7,6,42,-1,76,79,52,-1,52,51,76,-1,77,80,54,-1,54,53,77,-1,0,22,55,-1,55,51,0,-1,8,304,336,-1,336,53,8,-1,1,17,54,-1,54,56,1,-1,57,3,5,-1,5,52,57,-1,56,81,78,-1,78,55,56,-1,57,82,92,-1,92,60,57,-1,33,150,149,-1,149,32,33,-1,34,151,150,-1,150,33,34,-1,35,152,151,-1,151,34,35,-1,25,153,152,-1,152,35,25,-1,156,164,161,-1,161,153,156,-1,156,154,162,-1,162,164,156,-1,31,155,154,-1,154,36,31,-1,31,32,149,-1,149,155,31,-1,41,75,350,-1,350,349,41,-1,3,57,60,-1,60,174,3,-1,86,87,353,-1,353,351,86,-1,303,14,13,-1,13,281,303,-1,47,176,165,-1,165,73,47,-1,68,61,62,-1,62,69,68,-1,70,63,357,-1,357,325,70,-1,71,64,65,-1,65,72,71,-1,73,66,67,-1,67,74,73,-1,69,62,64,-1,64,71,69,-1,74,67,61,-1,61,68,74,-1,72,65,63,-1,63,70,72,-1,66,73,165,-1,165,90,66,-1,75,27,175,-1,175,350,75,-1,29,27,75,-1,75,6,29,-1,169,168,79,-1,79,76,169,-1,171,166,80,-1,80,77,171,-1,81,167,172,-1,172,78,81,-1,82,170,173,-1,173,92,82,-1,51,55,78,-1,78,76,51,-1,53,336,292,-1,292,77,53,-1,56,54,80,-1,80,81,56,-1,57,52,79,-1,79,82,57,-1,83,30,28,-1,28,84,83,-1,84,28,85,-1,85,88,84,-1,351,362,85,-1,85,86,351,-1,2,50,87,-1,87,86,2,-1,362,363,88,-1,88,85,362,-1,363,280,58,-1,58,88,363,-1,25,24,21,-1,21,23,25,-1,25,35,30,-1,30,83,25,-1,83,11,25,-1,93,94,102,-1,102,101,93,-1,94,95,103,-1,103,102,94,-1,95,96,104,-1,104,103,95,-1,96,97,105,-1,105,104,96,-1,97,98,106,-1,106,105,97,-1,98,99,107,-1,107,106,98,-1,99,100,108,-1,108,107,99,-1,100,93,101,-1,101,108,100,-1,101,102,110,-1,110,109,101,-1,102,103,111,-1,111,110,102,-1,103,104,112,-1,112,111,103,-1,104,105,113,-1,113,112,104,-1,105,106,114,-1,114,113,105,-1,106,107,115,-1,115,114,106,-1,107,108,116,-1,116,115,107,-1,108,101,109,-1,109,116,108,-1,109,110,118,-1,118,117,109,-1,110,111,119,-1,119,118,110,-1,111,112,120,-1,120,119,111,-1,112,113,121,-1,121,120,112,-1,113,114,122,-1,122,121,113,-1,114,115,123,-1,123,122,114,-1,115,116,124,-1,124,123,115,-1,116,109,117,-1,117,124,116,-1,117,118,126,-1,126,125,117,-1,118,119,127,-1,127,126,118,-1,119,120,128,-1,128,127,119,-1,120,121,129,-1,129,128,120,-1,121,122,130,-1,130,129,121,-1,122,123,131,-1,131,130,122,-1,123,124,132,-1,132,131,123,-1,124,117,125,-1,125,132,124,-1,125,126,141,-1,141,142,125,-1,126,127,143,-1,143,141,126,-1,128,144,143,-1,143,127,128,-1,129,145,144,-1,144,128,129,-1,130,146,145,-1,145,129,130,-1,131,147,146,-1,146,130,131,-1,131,132,148,-1,148,147,131,-1,132,125,142,-1,142,148,132,-1,99,98,97,-1,97,96,95,-1,95,94,93,-1,97,95,93,-1,99,97,93,-1,100,99,93,-1,134,135,136,-1,136,137,138,-1,138,139,140,-1,136,138,140,-1,134,136,140,-1,133,134,140,-1,134,133,142,-1,142,141,134,-1,135,134,141,-1,141,143,135,-1,144,136,135,-1,135,143,144,-1,145,137,136,-1,136,144,145,-1,146,138,137,-1,137,145,146,-1,147,139,138,-1,138,146,147,-1,140,139,147,-1,147,148,140,-1,133,140,148,-1,148,142,133,-1,150,158,157,-1,157,149,150,-1,151,159,158,-1,158,150,151,-1,152,160,159,-1,159,151,152,-1,153,161,160,-1,160,152,153,-1,155,163,162,-1,162,154,155,-1,155,149,157,-1,157,163,155,-1,23,156,153,-1,153,25,23,-1,23,36,154,-1,154,156,23,-1,164,59,161,-1,162,59,164,-1,158,59,157,-1,159,59,158,-1,160,59,159,-1,161,59,160,-1,163,59,162,-1,157,59,163,-1,62,61,169,-1,169,172,62,-1,357,63,171,-1,171,293,357,-1,65,64,167,-1,167,166,65,-1,67,66,170,-1,170,168,67,-1,61,67,168,-1,168,169,61,-1,63,65,166,-1,166,171,63,-1,167,64,62,-1,62,172,167,-1,66,90,173,-1,173,170,66,-1,177,178,182,-1,182,186,177,-1,178,179,183,-1,183,182,178,-1,179,432,433,-1,433,183,179,-1,181,185,184,-1,184,180,181,-1,177,186,185,-1,185,181,177,-1,187,191,186,-1,186,182,187,-1,188,187,182,-1,182,183,188,-1,189,442,443,-1,443,184,189,-1,189,184,185,-1,185,190,189,-1,190,185,186,-1,186,191,190,-1,193,192,191,-1,191,187,193,-1,194,193,187,-1,187,188,194,-1,190,196,195,-1,195,189,190,-1,191,192,196,-1,196,190,191,-1,180,184,443,-1,443,198,180,-1,197,188,183,-1,183,433,197,-1,194,188,197,-1,197,450,194,-1,189,195,451,-1,451,442,189,-1,200,199,192,-1,192,193,200,-1,203,200,193,-1,193,194,203,-1,196,202,201,-1,201,195,196,-1,192,199,202,-1,202,196,192,-1,195,201,457,-1,457,451,195,-1,203,194,450,-1,450,458,203,-1,40,39,199,-1,199,200,40,-1,50,40,200,-1,200,203,50,-1,42,41,201,-1,201,202,42,-1,39,42,202,-1,202,199,39,-1,87,50,203,-1,203,458,87,-1,41,349,457,-1,457,201,41,-1,353,87,458,-1,206,238,239,-1,239,204,206,-1,209,206,204,-1,204,208,209,-1,206,209,210,-1,206,210,211,-1,206,211,212,-1,212,240,238,-1,238,206,212,-1,207,213,214,-1,207,214,215,-1,207,215,216,-1,217,205,207,-1,207,216,217,-1,219,209,208,-1,208,218,219,-1,220,210,209,-1,209,219,220,-1,221,211,210,-1,210,220,221,-1,222,212,211,-1,211,221,222,-1,222,241,240,-1,240,212,222,-1,224,214,213,-1,213,223,224,-1,225,215,214,-1,214,224,225,-1,226,216,215,-1,215,225,226,-1,227,217,216,-1,216,226,227,-1,229,219,218,-1,218,228,229,-1,230,220,219,-1,219,229,230,-1,231,221,220,-1,220,230,231,-1,232,222,221,-1,221,231,232,-1,232,242,241,-1,241,222,232,-1,234,224,223,-1,223,233,234,-1,235,225,224,-1,224,234,235,-1,236,226,225,-1,225,235,236,-1,237,227,226,-1,226,236,237,-1,207,205,239,-1,239,238,207,-1,213,207,238,-1,238,240,213,-1,223,213,240,-1,240,241,223,-1,233,223,241,-1,241,242,233,-1,243,246,245,-1,245,244,243,-1,248,247,250,-1,250,249,248,-1,252,251,254,-1,254,253,252,-1,255,257,244,-1,244,256,255,-1,259,258,261,-1,261,260,259,-1,245,262,264,-1,264,263,245,-1,265,252,253,-1,253,266,265,-1,243,244,268,-1,268,267,243,-1,269,262,245,-1,245,246,269,-1,270,273,272,-1,272,271,270,-1,274,259,276,-1,276,275,274,-1,258,259,274,-1,274,277,258,-1,261,258,279,-1,279,278,261,-1,280,279,282,-1,282,281,280,-1,282,277,284,-1,284,283,282,-1,285,274,275,-1,275,286,285,-1,277,274,285,-1,285,284,277,-1,258,277,282,-1,282,279,258,-1,287,290,289,-1,289,288,287,-1,291,294,293,-1,293,292,291,-1,295,298,297,-1,297,296,295,-1,299,302,301,-1,301,300,299,-1,285,270,284,-1,283,271,304,-1,304,303,283,-1,253,254,305,-1,305,250,253,-1,266,253,250,-1,250,247,266,-1,254,91,174,-1,174,305,254,-1,262,269,307,-1,307,306,262,-1,284,270,271,-1,271,283,284,-1,285,286,308,-1,308,270,285,-1,265,266,310,-1,310,309,265,-1,311,310,266,-1,266,247,311,-1,312,308,311,-1,311,313,312,-1,310,311,286,-1,286,275,310,-1,308,286,311,-1,314,175,89,-1,89,251,314,-1,268,314,251,-1,251,252,268,-1,262,306,316,-1,316,315,262,-1,267,268,252,-1,252,265,267,-1,316,318,317,-1,317,315,316,-1,254,251,89,-1,89,91,254,-1,320,319,322,-1,322,321,320,-1,323,326,325,-1,325,324,323,-1,327,330,329,-1,329,328,327,-1,331,334,333,-1,333,332,331,-1,322,327,328,-1,328,321,322,-1,319,320,334,-1,334,331,319,-1,330,323,324,-1,324,329,330,-1,335,264,262,-1,262,315,335,-1,256,244,245,-1,245,263,256,-1,287,248,249,-1,249,300,287,-1,291,272,273,-1,273,296,291,-1,247,248,313,-1,313,311,247,-1,271,272,336,-1,336,304,271,-1,308,312,273,-1,273,270,308,-1,337,249,250,-1,250,305,337,-1,312,313,288,-1,288,295,312,-1,337,60,92,-1,92,299,337,-1,246,243,339,-1,339,338,246,-1,269,246,338,-1,338,340,269,-1,307,269,340,-1,340,341,307,-1,276,307,341,-1,341,342,276,-1,343,342,345,-1,345,344,343,-1,343,344,347,-1,347,346,343,-1,267,265,346,-1,346,348,267,-1,267,348,339,-1,339,243,267,-1,255,349,350,-1,350,257,255,-1,305,174,60,-1,60,337,305,-1,317,351,353,-1,353,352,317,-1,303,281,282,-1,282,283,303,-1,332,333,165,-1,165,176,332,-1,320,321,355,-1,355,354,320,-1,324,325,357,-1,357,356,324,-1,328,329,359,-1,359,358,328,-1,333,334,361,-1,361,360,333,-1,321,328,358,-1,358,355,321,-1,334,320,354,-1,354,361,334,-1,329,324,356,-1,356,359,329,-1,360,90,165,-1,165,333,360,-1,257,350,175,-1,175,314,257,-1,268,244,257,-1,257,314,268,-1,290,287,300,-1,300,301,290,-1,294,291,296,-1,296,297,294,-1,295,288,289,-1,289,298,295,-1,299,92,173,-1,173,302,299,-1,248,287,288,-1,288,313,248,-1,272,291,292,-1,292,336,272,-1,312,295,296,-1,296,273,312,-1,337,299,300,-1,300,249,337,-1,260,261,316,-1,316,306,260,-1,261,278,318,-1,318,316,261,-1,351,317,318,-1,318,362,351,-1,315,317,352,-1,352,335,315,-1,362,318,278,-1,278,363,362,-1,363,278,279,-1,279,280,363,-1,276,309,310,-1,310,275,276,-1,276,260,306,-1,306,307,276,-1,260,276,259,-1,364,367,366,-1,366,365,364,-1,365,366,369,-1,369,368,365,-1,368,369,371,-1,371,370,368,-1,370,371,373,-1,373,372,370,-1,372,373,375,-1,375,374,372,-1,374,375,377,-1,377,376,374,-1,376,377,379,-1,379,378,376,-1,378,379,367,-1,367,364,378,-1,367,381,380,-1,380,366,367,-1,366,380,382,-1,382,369,366,-1,369,382,383,-1,383,371,369,-1,371,383,384,-1,384,373,371,-1,373,384,385,-1,385,375,373,-1,375,385,386,-1,386,377,375,-1,377,386,387,-1,387,379,377,-1,379,387,381,-1,381,367,379,-1,381,389,388,-1,388,380,381,-1,380,388,390,-1,390,382,380,-1,382,390,391,-1,391,383,382,-1,383,391,392,-1,392,384,383,-1,384,392,393,-1,393,385,384,-1,385,393,394,-1,394,386,385,-1,386,394,395,-1,395,387,386,-1,387,395,389,-1,389,381,387,-1,389,397,396,-1,396,388,389,-1,388,396,398,-1,398,390,388,-1,390,398,399,-1,399,391,390,-1,391,399,400,-1,400,392,391,-1,392,400,401,-1,401,393,392,-1,393,401,402,-1,402,394,393,-1,394,402,403,-1,403,395,394,-1,395,403,397,-1,397,389,395,-1,397,405,404,-1,404,396,397,-1,396,404,406,-1,406,398,396,-1,399,398,406,-1,406,407,399,-1,400,399,407,-1,407,408,400,-1,401,400,408,-1,408,409,401,-1,402,401,409,-1,409,410,402,-1,402,410,411,-1,411,403,402,-1,403,411,405,-1,405,397,403,-1,364,365,368,-1,368,370,372,-1,364,368,372,-1,372,374,376,-1,364,372,376,-1,378,364,376,-1,419,418,417,-1,417,416,415,-1,419,417,415,-1,415,414,413,-1,419,415,413,-1,412,419,413,-1,413,404,405,-1,405,412,413,-1,414,406,404,-1,404,413,414,-1,407,406,414,-1,414,415,407,-1,408,407,415,-1,415,416,408,-1,409,408,416,-1,416,417,409,-1,410,409,417,-1,417,418,410,-1,419,411,410,-1,410,418,419,-1,412,405,411,-1,411,419,412,-1,338,339,421,-1,421,420,338,-1,340,338,420,-1,420,422,340,-1,341,340,422,-1,422,423,341,-1,342,341,423,-1,423,345,342,-1,348,346,347,-1,347,424,348,-1,348,424,421,-1,421,339,348,-1,309,276,342,-1,342,343,309,-1,309,343,346,-1,346,265,309,-1,344,345,425,-1,347,344,425,-1,420,421,425,-1,422,420,425,-1,423,422,425,-1,345,423,425,-1,424,347,425,-1,421,424,425,-1,355,289,290,-1,290,354,355,-1,357,293,294,-1,294,356,357,-1,359,297,298,-1,298,358,359,-1,361,301,302,-1,302,360,361,-1,354,290,301,-1,301,361,354,-1,356,294,297,-1,297,359,356,-1,298,289,355,-1,355,358,298,-1,360,302,173,-1,173,90,360,-1,426,429,428,-1,428,427,426,-1,427,428,431,-1,431,430,427,-1,430,431,433,-1,433,432,430,-1,435,434,437,-1,437,436,435,-1,426,435,436,-1,436,429,426,-1,438,428,429,-1,429,439,438,-1,440,431,428,-1,428,438,440,-1,441,437,443,-1,443,442,441,-1,441,444,436,-1,436,437,441,-1,444,439,429,-1,429,436,444,-1,445,438,439,-1,439,446,445,-1,447,440,438,-1,438,445,447,-1,444,441,449,-1,449,448,444,-1,439,444,448,-1,448,446,439,-1,434,198,443,-1,443,437,434,-1,197,433,431,-1,431,440,197,-1,447,450,197,-1,197,440,447,-1,441,442,451,-1,451,449,441,-1,452,445,446,-1,446,453,452,-1,454,447,445,-1,445,452,454,-1,448,449,456,-1,456,455,448,-1,446,448,455,-1,455,453,446,-1,449,451,457,-1,457,456,449,-1,454,458,450,-1,450,447,454,-1,264,452,453,-1,453,263,264,-1,335,454,452,-1,452,264,335,-1,256,455,456,-1,456,255,256,-1,263,453,455,-1,455,256,263,-1,352,458,454,-1,454,335,352,-1,255,456,457,-1,457,349,255,-1,353,458,352,-1,460,459,462,-1,462,461,460,-1,464,463,459,-1,459,460,464,-1,460,465,464,-1,460,466,465,-1,460,467,466,-1,467,460,461,-1,461,468,467,-1,469,471,470,-1,469,472,471,-1,469,473,472,-1,474,473,469,-1,469,475,474,-1,477,476,463,-1,463,464,477,-1,478,477,464,-1,464,465,478,-1,479,478,465,-1,465,466,479,-1,480,479,466,-1,466,467,480,-1,480,467,468,-1,468,481,480,-1,483,482,470,-1,470,471,483,-1,484,483,471,-1,471,472,484,-1,485,484,472,-1,472,473,485,-1,486,485,473,-1,473,474,486,-1,488,487,476,-1,476,477,488,-1,489,488,477,-1,477,478,489,-1,490,489,478,-1,478,479,490,-1,491,490,479,-1,479,480,491,-1,491,480,481,-1,481,492,491,-1,494,493,482,-1,482,483,494,-1,495,494,483,-1,483,484,495,-1,496,495,484,-1,484,485,496,-1,497,496,485,-1,485,486,497,-1,469,461,462,-1,462,475,469,-1,470,468,461,-1,461,469,470,-1,482,481,468,-1,468,470,482,-1,493,492,481,-1,481,482,493,-1]
IndexedFaceSet198.creaseAngle = 1.57
IndexedFaceSet198.texCoordIndex = [0,1,2,-1,2,3,0,-1,5,6,7,-1,7,4,5,-1,9,10,11,-1,11,8,9,-1,12,13,1,-1,1,14,12,-1,16,17,18,-1,18,15,16,-1,20,21,26,-1,26,19,20,-1,22,23,10,-1,10,9,22,-1,0,24,25,-1,25,1,0,-1,27,3,20,-1,20,19,27,-1,28,29,30,-1,30,31,28,-1,32,33,34,-1,34,16,32,-1,15,35,32,-1,32,16,15,-1,18,36,37,-1,37,15,18,-1,38,39,40,-1,40,37,38,-1,40,41,42,-1,42,35,40,-1,45,46,33,-1,33,32,45,-1,35,42,45,-1,45,32,35,-1,15,37,40,-1,40,35,15,-1,88,104,192,-1,192,189,88,-1,103,111,193,-1,193,191,103,-1,107,105,186,-1,186,187,107,-1,93,89,188,-1,188,190,93,-1,45,42,28,-1,41,56,57,-1,57,29,41,-1,10,7,53,-1,53,11,10,-1,23,4,7,-1,7,10,23,-1,11,53,54,-1,54,55,11,-1,19,58,62,-1,62,27,19,-1,42,41,29,-1,29,28,42,-1,45,28,63,-1,63,46,45,-1,22,59,60,-1,60,23,22,-1,61,4,23,-1,23,60,61,-1,67,68,61,-1,61,63,67,-1,60,33,46,-1,46,61,60,-1,63,61,46,-1,64,8,65,-1,65,66,64,-1,25,9,8,-1,8,64,25,-1,19,73,74,-1,74,58,19,-1,24,22,9,-1,9,25,24,-1,74,73,75,-1,75,76,74,-1,11,55,65,-1,65,8,11,-1,70,71,72,-1,72,69,70,-1,77,78,79,-1,79,80,77,-1,85,87,90,-1,90,91,85,-1,81,82,83,-1,83,84,81,-1,72,71,87,-1,87,85,72,-1,69,81,84,-1,84,70,69,-1,91,90,78,-1,78,77,91,-1,99,73,19,-1,19,26,99,-1,13,86,2,-1,2,1,13,-1,88,89,6,-1,6,5,88,-1,103,105,31,-1,31,30,103,-1,4,61,68,-1,68,5,4,-1,29,57,106,-1,106,30,29,-1,63,28,31,-1,31,67,63,-1,92,53,7,-1,7,6,92,-1,67,107,104,-1,104,68,67,-1,92,93,94,-1,94,95,92,-1,3,171,170,-1,170,0,3,-1,27,172,171,-1,171,3,27,-1,62,173,172,-1,172,27,62,-1,34,174,173,-1,173,62,34,-1,177,185,182,-1,182,174,177,-1,177,175,183,-1,183,185,177,-1,24,176,175,-1,175,22,24,-1,24,0,170,-1,170,176,24,-1,12,14,98,-1,98,97,12,-1,53,92,95,-1,95,54,53,-1,75,109,110,-1,110,108,75,-1,56,41,40,-1,40,39,56,-1,82,100,101,-1,101,83,82,-1,70,44,43,-1,43,71,70,-1,78,48,47,-1,47,79,78,-1,87,52,51,-1,51,90,87,-1,83,50,49,-1,49,84,83,-1,71,43,52,-1,52,87,71,-1,84,49,44,-1,44,70,84,-1,90,51,48,-1,48,78,90,-1,50,83,101,-1,101,102,50,-1,14,64,66,-1,66,98,14,-1,25,64,14,-1,14,1,25,-1,189,188,89,-1,89,88,189,-1,191,186,105,-1,105,103,191,-1,107,187,192,-1,192,104,107,-1,93,190,194,-1,194,94,93,-1,5,68,104,-1,104,88,5,-1,30,106,111,-1,111,103,30,-1,67,31,105,-1,105,107,67,-1,92,6,89,-1,89,93,92,-1,17,58,74,-1,74,18,17,-1,18,74,76,-1,76,36,18,-1,108,112,76,-1,76,75,108,-1,73,99,109,-1,109,75,73,-1,112,113,36,-1,36,76,112,-1,113,38,37,-1,37,36,113,-1,34,33,60,-1,60,59,34,-1,34,62,58,-1,58,17,34,-1,17,16,34,-1,114,115,116,-1,116,117,114,-1,115,118,119,-1,119,116,115,-1,118,120,121,-1,121,119,118,-1,120,122,123,-1,123,121,120,-1,122,124,125,-1,125,123,122,-1,124,126,127,-1,127,125,124,-1,126,128,129,-1,129,127,126,-1,128,114,117,-1,117,129,128,-1,117,116,130,-1,130,131,117,-1,116,119,132,-1,132,130,116,-1,119,121,133,-1,133,132,119,-1,121,123,134,-1,134,133,121,-1,123,125,135,-1,135,134,123,-1,125,127,136,-1,136,135,125,-1,127,129,137,-1,137,136,127,-1,129,117,131,-1,131,137,129,-1,131,130,138,-1,138,139,131,-1,130,132,140,-1,140,138,130,-1,132,133,141,-1,141,140,132,-1,133,134,142,-1,142,141,133,-1,134,135,143,-1,143,142,134,-1,135,136,144,-1,144,143,135,-1,136,137,145,-1,145,144,136,-1,137,131,139,-1,139,145,137,-1,139,138,146,-1,146,147,139,-1,138,140,148,-1,148,146,138,-1,140,141,149,-1,149,148,140,-1,141,142,150,-1,150,149,141,-1,142,143,151,-1,151,150,142,-1,143,144,152,-1,152,151,143,-1,144,145,153,-1,153,152,144,-1,145,139,147,-1,147,153,145,-1,147,146,154,-1,154,155,147,-1,146,148,156,-1,156,154,146,-1,149,157,156,-1,156,148,149,-1,150,158,157,-1,157,149,150,-1,151,159,158,-1,158,150,151,-1,152,160,159,-1,159,151,152,-1,152,153,161,-1,161,160,152,-1,153,147,155,-1,155,161,153,-1,126,124,122,-1,122,120,118,-1,118,115,114,-1,122,118,114,-1,126,122,114,-1,128,126,114,-1,163,164,165,-1,165,166,167,-1,167,168,169,-1,165,167,169,-1,163,165,169,-1,162,163,169,-1,163,162,155,-1,155,154,163,-1,164,163,154,-1,154,156,164,-1,157,165,164,-1,164,156,157,-1,158,166,165,-1,165,157,158,-1,159,167,166,-1,166,158,159,-1,160,168,167,-1,167,159,160,-1,169,168,160,-1,160,161,169,-1,162,169,161,-1,161,155,162,-1,171,179,178,-1,178,170,171,-1,172,180,179,-1,179,171,172,-1,173,181,180,-1,180,172,173,-1,174,182,181,-1,181,173,174,-1,176,184,183,-1,183,175,176,-1,176,170,178,-1,178,184,176,-1,59,177,174,-1,174,34,59,-1,59,22,175,-1,175,177,59,-1,185,96,182,-1,183,96,185,-1,179,96,178,-1,180,96,179,-1,181,96,180,-1,182,96,181,-1,184,96,183,-1,178,96,184,-1,43,44,189,-1,189,192,43,-1,47,48,191,-1,191,193,47,-1,51,52,187,-1,187,186,51,-1,49,50,190,-1,190,188,49,-1,44,49,188,-1,188,189,44,-1,48,51,186,-1,186,191,48,-1,187,52,43,-1,43,192,187,-1,50,102,194,-1,194,190,50,-1,195,196,197,-1,197,198,195,-1,196,199,200,-1,200,197,196,-1,199,201,202,-1,202,200,199,-1,204,205,206,-1,206,203,204,-1,195,198,205,-1,205,204,195,-1,207,208,198,-1,198,197,207,-1,209,207,197,-1,197,200,209,-1,210,211,212,-1,212,206,210,-1,210,206,205,-1,205,213,210,-1,213,205,198,-1,198,208,213,-1,214,215,208,-1,208,207,214,-1,216,214,207,-1,207,209,216,-1,213,217,218,-1,218,210,213,-1,208,215,217,-1,217,213,208,-1,203,206,212,-1,212,219,203,-1,220,209,200,-1,200,202,220,-1,216,209,220,-1,220,221,216,-1,210,218,222,-1,222,211,210,-1,223,224,215,-1,215,214,223,-1,225,223,214,-1,214,216,225,-1,217,226,227,-1,227,218,217,-1,215,224,226,-1,226,217,215,-1,218,227,228,-1,228,222,218,-1,225,216,221,-1,221,229,225,-1,26,21,230,-1,230,231,26,-1,99,26,231,-1,231,232,99,-1,13,12,233,-1,233,234,13,-1,86,13,234,-1,234,235,86,-1,109,99,232,-1,232,236,109,-1,12,97,237,-1,237,233,12,-1,110,109,236,-1,240,272,273,-1,273,238,240,-1,243,240,238,-1,238,242,243,-1,240,243,244,-1,240,244,245,-1,240,245,246,-1,246,274,272,-1,272,240,246,-1,241,247,248,-1,241,248,249,-1,241,249,250,-1,251,239,241,-1,241,250,251,-1,253,243,242,-1,242,252,253,-1,254,244,243,-1,243,253,254,-1,255,245,244,-1,244,254,255,-1,256,246,245,-1,245,255,256,-1,256,275,274,-1,274,246,256,-1,258,248,247,-1,247,257,258,-1,259,249,248,-1,248,258,259,-1,260,250,249,-1,249,259,260,-1,261,251,250,-1,250,260,261,-1,263,253,252,-1,252,262,263,-1,264,254,253,-1,253,263,264,-1,265,255,254,-1,254,264,265,-1,266,256,255,-1,255,265,266,-1,266,276,275,-1,275,256,266,-1,268,258,257,-1,257,267,268,-1,269,259,258,-1,258,268,269,-1,270,260,259,-1,259,269,270,-1,271,261,260,-1,260,270,271,-1,241,239,273,-1,273,272,241,-1,247,241,272,-1,272,274,247,-1,257,247,274,-1,274,275,257,-1,267,257,275,-1,275,276,267,-1,277,280,279,-1,279,278,277,-1,282,281,284,-1,284,283,282,-1,286,285,288,-1,288,287,286,-1,289,291,278,-1,278,290,289,-1,293,292,295,-1,295,294,293,-1,297,296,299,-1,299,298,297,-1,300,286,287,-1,287,301,300,-1,277,278,303,-1,303,302,277,-1,304,296,297,-1,297,280,304,-1,305,308,307,-1,307,306,305,-1,309,293,311,-1,311,310,309,-1,292,293,309,-1,309,312,292,-1,295,292,314,-1,314,313,295,-1,315,314,317,-1,317,316,315,-1,317,312,319,-1,319,318,317,-1,320,309,310,-1,310,321,320,-1,312,309,320,-1,320,319,312,-1,292,312,317,-1,317,314,292,-1,322,325,324,-1,324,323,322,-1,326,329,328,-1,328,327,326,-1,330,333,332,-1,332,331,330,-1,334,337,336,-1,336,335,334,-1,320,305,319,-1,318,306,339,-1,339,338,318,-1,287,288,340,-1,340,284,287,-1,301,287,284,-1,284,281,301,-1,288,342,341,-1,341,340,288,-1,296,304,344,-1,344,343,296,-1,319,305,306,-1,306,318,319,-1,320,321,345,-1,345,305,320,-1,300,301,347,-1,347,346,300,-1,348,347,301,-1,301,281,348,-1,349,345,348,-1,348,350,349,-1,347,348,321,-1,321,310,347,-1,345,321,348,-1,351,353,352,-1,352,285,351,-1,303,351,285,-1,285,286,303,-1,296,343,355,-1,355,354,296,-1,302,303,286,-1,286,300,302,-1,355,357,356,-1,356,354,355,-1,288,285,352,-1,352,342,288,-1,359,358,361,-1,361,360,359,-1,362,365,364,-1,364,363,362,-1,366,369,368,-1,368,367,366,-1,370,373,372,-1,372,371,370,-1,361,366,367,-1,367,360,361,-1,358,359,373,-1,373,370,358,-1,369,362,363,-1,363,368,369,-1,374,299,296,-1,296,354,374,-1,290,278,279,-1,279,375,290,-1,322,282,283,-1,283,335,322,-1,326,307,308,-1,308,331,326,-1,281,282,350,-1,350,348,281,-1,306,307,376,-1,376,339,306,-1,345,349,308,-1,308,305,345,-1,377,283,284,-1,284,340,377,-1,349,350,323,-1,323,330,349,-1,377,379,378,-1,378,334,377,-1,280,277,381,-1,381,380,280,-1,304,280,380,-1,380,382,304,-1,344,304,382,-1,382,383,344,-1,311,344,383,-1,383,384,311,-1,385,384,387,-1,387,386,385,-1,385,386,389,-1,389,388,385,-1,302,300,388,-1,388,390,302,-1,302,390,381,-1,381,277,302,-1,289,391,392,-1,392,291,289,-1,340,341,379,-1,379,377,340,-1,356,393,395,-1,395,394,356,-1,338,316,317,-1,317,318,338,-1,371,372,397,-1,397,396,371,-1,359,360,399,-1,399,398,359,-1,363,364,401,-1,401,400,363,-1,367,368,403,-1,403,402,367,-1,372,373,405,-1,405,404,372,-1,360,367,402,-1,402,399,360,-1,373,359,398,-1,398,405,373,-1,368,363,400,-1,400,403,368,-1,404,406,397,-1,397,372,404,-1,291,392,353,-1,353,351,291,-1,303,278,291,-1,291,351,303,-1,325,322,335,-1,335,336,325,-1,329,326,331,-1,331,332,329,-1,330,323,324,-1,324,333,330,-1,334,378,407,-1,407,337,334,-1,282,322,323,-1,323,350,282,-1,307,326,327,-1,327,376,307,-1,349,330,331,-1,331,308,349,-1,377,334,335,-1,335,283,377,-1,294,295,355,-1,355,343,294,-1,295,313,357,-1,357,355,295,-1,393,356,357,-1,357,408,393,-1,354,356,394,-1,394,374,354,-1,408,357,313,-1,313,409,408,-1,409,313,314,-1,314,315,409,-1,311,346,347,-1,347,310,311,-1,311,294,343,-1,343,344,311,-1,294,311,293,-1,410,413,412,-1,412,411,410,-1,411,412,415,-1,415,414,411,-1,414,415,417,-1,417,416,414,-1,416,417,419,-1,419,418,416,-1,418,419,421,-1,421,420,418,-1,420,421,423,-1,423,422,420,-1,422,423,425,-1,425,424,422,-1,424,425,413,-1,413,410,424,-1,413,427,426,-1,426,412,413,-1,412,426,428,-1,428,415,412,-1,415,428,429,-1,429,417,415,-1,417,429,430,-1,430,419,417,-1,419,430,431,-1,431,421,419,-1,421,431,432,-1,432,423,421,-1,423,432,433,-1,433,425,423,-1,425,433,427,-1,427,413,425,-1,427,435,434,-1,434,426,427,-1,426,434,436,-1,436,428,426,-1,428,436,437,-1,437,429,428,-1,429,437,438,-1,438,430,429,-1,430,438,439,-1,439,431,430,-1,431,439,440,-1,440,432,431,-1,432,440,441,-1,441,433,432,-1,433,441,435,-1,435,427,433,-1,435,443,442,-1,442,434,435,-1,434,442,444,-1,444,436,434,-1,436,444,445,-1,445,437,436,-1,437,445,446,-1,446,438,437,-1,438,446,447,-1,447,439,438,-1,439,447,448,-1,448,440,439,-1,440,448,449,-1,449,441,440,-1,441,449,443,-1,443,435,441,-1,443,451,450,-1,450,442,443,-1,442,450,452,-1,452,444,442,-1,445,444,452,-1,452,453,445,-1,446,445,453,-1,453,454,446,-1,447,446,454,-1,454,455,447,-1,448,447,455,-1,455,456,448,-1,448,456,457,-1,457,449,448,-1,449,457,451,-1,451,443,449,-1,410,411,414,-1,414,416,418,-1,410,414,418,-1,418,420,422,-1,410,418,422,-1,424,410,422,-1,465,464,463,-1,463,462,461,-1,465,463,461,-1,461,460,459,-1,465,461,459,-1,458,465,459,-1,459,450,451,-1,451,458,459,-1,460,452,450,-1,450,459,460,-1,453,452,460,-1,460,461,453,-1,454,453,461,-1,461,462,454,-1,455,454,462,-1,462,463,455,-1,456,455,463,-1,463,464,456,-1,465,457,456,-1,456,464,465,-1,458,451,457,-1,457,465,458,-1,380,381,467,-1,467,466,380,-1,382,380,466,-1,466,468,382,-1,383,382,468,-1,468,469,383,-1,384,383,469,-1,469,387,384,-1,390,388,389,-1,389,470,390,-1,390,470,467,-1,467,381,390,-1,346,311,384,-1,384,385,346,-1,346,385,388,-1,388,300,346,-1,386,387,471,-1,389,386,471,-1,466,467,471,-1,468,466,471,-1,469,468,471,-1,387,469,471,-1,470,389,471,-1,467,470,471,-1,399,324,325,-1,325,398,399,-1,401,328,329,-1,329,400,401,-1,403,332,333,-1,333,402,403,-1,405,336,337,-1,337,404,405,-1,398,325,336,-1,336,405,398,-1,400,329,332,-1,332,403,400,-1,333,324,399,-1,399,402,333,-1,404,337,407,-1,407,406,404,-1,472,475,474,-1,474,473,472,-1,473,474,477,-1,477,476,473,-1,476,477,479,-1,479,478,476,-1,481,480,483,-1,483,482,481,-1,472,481,482,-1,482,475,472,-1,484,474,475,-1,475,485,484,-1,486,477,474,-1,474,484,486,-1,487,483,489,-1,489,488,487,-1,487,490,482,-1,482,483,487,-1,490,485,475,-1,475,482,490,-1,491,484,485,-1,485,492,491,-1,493,486,484,-1,484,491,493,-1,490,487,495,-1,495,494,490,-1,485,490,494,-1,494,492,485,-1,480,496,489,-1,489,483,480,-1,497,479,477,-1,477,486,497,-1,493,498,497,-1,497,486,493,-1,487,488,499,-1,499,495,487,-1,500,491,492,-1,492,501,500,-1,502,493,491,-1,491,500,502,-1,494,495,504,-1,504,503,494,-1,492,494,503,-1,503,501,492,-1,495,499,505,-1,505,504,495,-1,502,506,498,-1,498,493,502,-1,299,508,507,-1,507,298,299,-1,374,509,508,-1,508,299,374,-1,290,511,510,-1,510,289,290,-1,375,512,511,-1,511,290,375,-1,394,513,509,-1,509,374,394,-1,289,510,514,-1,514,391,289,-1,395,513,394,-1,516,515,518,-1,518,517,516,-1,520,519,515,-1,515,516,520,-1,516,521,520,-1,516,522,521,-1,516,523,522,-1,523,516,517,-1,517,524,523,-1,525,527,526,-1,525,528,527,-1,525,529,528,-1,530,529,525,-1,525,531,530,-1,533,532,519,-1,519,520,533,-1,534,533,520,-1,520,521,534,-1,535,534,521,-1,521,522,535,-1,536,535,522,-1,522,523,536,-1,536,523,524,-1,524,537,536,-1,539,538,526,-1,526,527,539,-1,540,539,527,-1,527,528,540,-1,541,540,528,-1,528,529,541,-1,542,541,529,-1,529,530,542,-1,544,543,532,-1,532,533,544,-1,545,544,533,-1,533,534,545,-1,546,545,534,-1,534,535,546,-1,547,546,535,-1,535,536,547,-1,547,536,537,-1,537,548,547,-1,550,549,538,-1,538,539,550,-1,551,550,539,-1,539,540,551,-1,552,551,540,-1,540,541,552,-1,553,552,541,-1,541,542,553,-1,525,517,518,-1,518,531,525,-1,526,524,517,-1,517,525,526,-1,538,537,524,-1,524,526,538,-1,549,548,537,-1,537,538,549,-1]
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
HAnimJoint201.center = [0,53.98,-1.219]
HAnimJoint201.ulimit = [0,0,0]
HAnimJoint201.llimit = [0,0,0]
HAnimSegment202 = x3d.HAnimSegment()
HAnimSegment202.name = "skull"
HAnimSegment202.DEF = "hanim_skull"
Transform203 = x3d.Transform()
Transform203.translation = [0,53.98,-1.219]
Shape204 = x3d.Shape()
Appearance205 = x3d.Appearance()
Material206 = x3d.Material()
Material206.diffuseColor = [0.588,0.588,0.588]

Appearance205.material = Material206
ImageTexture207 = x3d.ImageTexture()
ImageTexture207.USE = "DaTextureAtlas"

Appearance205.texture = ImageTexture207

Shape204.appearance = Appearance205
IndexedFaceSet208 = x3d.IndexedFaceSet()
IndexedFaceSet208.coordIndex = [39,40,17,-1,17,8,39,-1,9,7,16,-1,16,14,9,-1,10,15,16,-1,16,7,10,-1,9,14,48,-1,48,33,9,-1,21,23,15,-1,15,10,21,-1,20,41,42,-1,42,6,20,-1,13,68,69,-1,69,8,13,-1,9,31,12,-1,12,7,9,-1,7,12,11,-1,11,10,7,-1,17,23,21,-1,21,8,17,-1,26,24,30,-1,30,0,26,-1,27,5,30,-1,30,24,27,-1,25,80,81,-1,81,5,25,-1,13,8,21,-1,21,22,13,-1,43,84,68,-1,68,13,43,-1,2,1,44,-1,44,32,2,-1,44,42,11,-1,11,12,44,-1,69,89,39,-1,39,8,69,-1,23,17,25,-1,25,29,23,-1,14,26,28,-1,28,48,14,-1,0,92,93,-1,93,36,0,-1,35,28,26,-1,36,35,26,-1,0,36,26,-1,3,43,41,-1,41,20,3,-1,10,11,22,-1,22,21,10,-1,30,97,92,-1,92,0,30,-1,5,81,97,-1,97,30,5,-1,26,14,16,-1,16,24,26,-1,24,16,15,-1,15,27,24,-1,27,15,23,-1,23,29,27,-1,19,18,38,-1,38,37,19,-1,28,35,38,-1,38,18,28,-1,4,2,32,-1,31,9,33,-1,33,34,31,-1,32,31,34,-1,34,4,32,-1,5,27,29,-1,29,25,5,-1,104,105,40,-1,40,39,104,-1,40,105,106,-1,41,22,11,-1,11,42,41,-1,3,107,84,-1,84,43,3,-1,1,6,42,-1,42,44,1,-1,13,22,41,-1,41,43,13,-1,12,31,32,-1,32,44,12,-1,19,37,46,-1,46,45,19,-1,108,17,40,-1,40,106,108,-1,25,17,108,-1,108,80,25,-1,104,39,89,-1,28,18,47,-1,47,48,28,-1,50,49,52,-1,52,51,50,-1,53,56,55,-1,55,54,53,-1,57,54,55,-1,55,58,57,-1,53,60,59,-1,59,56,53,-1,61,57,58,-1,58,62,61,-1,64,63,66,-1,66,65,64,-1,67,49,69,-1,69,68,67,-1,53,54,71,-1,71,70,53,-1,54,57,72,-1,72,71,54,-1,52,49,61,-1,61,62,52,-1,73,76,75,-1,75,74,73,-1,77,74,75,-1,75,78,77,-1,79,78,81,-1,81,80,79,-1,67,82,61,-1,61,49,67,-1,83,67,68,-1,68,84,83,-1,86,85,88,-1,88,87,86,-1,88,71,72,-1,72,66,88,-1,69,49,50,-1,50,89,69,-1,62,90,79,-1,79,52,62,-1,56,59,91,-1,91,73,56,-1,76,94,93,-1,93,92,76,-1,73,91,95,-1,73,95,94,-1,76,73,94,-1,96,64,65,-1,65,83,96,-1,57,61,82,-1,82,72,57,-1,75,76,92,-1,92,97,75,-1,78,75,97,-1,97,81,78,-1,73,74,55,-1,55,56,73,-1,74,77,58,-1,58,55,74,-1,77,90,62,-1,62,58,77,-1,98,101,100,-1,100,99,98,-1,91,99,100,-1,100,95,91,-1,102,85,86,-1,70,103,60,-1,60,53,70,-1,85,102,103,-1,103,70,85,-1,78,79,90,-1,90,77,78,-1,104,50,51,-1,51,105,104,-1,51,106,105,-1,65,66,72,-1,72,82,65,-1,96,83,84,-1,84,107,96,-1,87,88,66,-1,66,63,87,-1,67,83,65,-1,65,82,67,-1,71,88,85,-1,85,70,71,-1,98,45,46,-1,46,101,98,-1,108,106,51,-1,51,52,108,-1,79,80,108,-1,108,52,79,-1,104,89,50,-1,91,59,109,-1,109,99,91,-1,110,119,120,-1,120,111,110,-1,112,121,119,-1,119,110,112,-1,110,111,114,-1,114,113,110,-1,112,110,113,-1,113,115,112,-1,113,114,123,-1,123,122,113,-1,115,113,122,-1,122,124,115,-1,117,116,122,-1,122,123,117,-1,118,128,154,-1,154,124,118,-1,116,118,124,-1,124,122,116,-1,114,111,120,-1,120,123,114,-1,123,120,138,-1,138,117,123,-1,120,119,125,-1,125,138,120,-1,157,158,126,-1,126,121,157,-1,119,121,126,-1,126,125,119,-1,121,112,129,-1,129,157,121,-1,112,115,127,-1,127,129,112,-1,115,124,154,-1,154,127,115,-1,134,135,194,-1,194,117,134,-1,130,131,132,-1,132,133,130,-1,131,130,193,-1,193,136,131,-1,133,132,166,-1,166,165,133,-1,134,136,193,-1,193,135,134,-1,134,117,138,-1,138,137,134,-1,142,141,140,-1,140,139,142,-1,143,142,139,-1,139,144,143,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,146,149,148,-1,148,145,146,-1,147,150,149,-1,149,146,147,-1,151,148,149,-1,149,152,151,-1,153,150,154,-1,154,128,153,-1,152,149,150,-1,150,153,152,-1,145,148,140,-1,140,141,145,-1,148,151,155,-1,155,140,148,-1,140,155,156,-1,156,139,140,-1,157,144,159,-1,159,158,157,-1,139,156,159,-1,159,144,139,-1,144,157,129,-1,129,143,144,-1,143,129,127,-1,127,147,143,-1,147,127,154,-1,154,150,147,-1,160,151,196,-1,196,195,160,-1,197,198,162,-1,162,161,197,-1,161,163,164,-1,164,197,161,-1,198,165,166,-1,166,162,198,-1,160,195,164,-1,164,163,160,-1,160,167,155,-1,155,151,160,-1,172,169,170,-1,170,171,172,-1,173,175,177,-1,177,178,173,-1,130,171,168,-1,168,193,130,-1,172,133,165,-1,165,179,172,-1,133,172,171,-1,171,130,133,-1,171,170,176,-1,176,168,171,-1,170,169,175,-1,175,176,170,-1,169,172,179,-1,179,180,169,-1,174,194,135,-1,174,168,192,-1,169,180,177,-1,177,175,169,-1,175,173,176,-1,181,164,195,-1,195,182,181,-1,187,186,185,-1,185,184,187,-1,188,178,177,-1,177,189,188,-1,197,164,181,-1,181,186,197,-1,187,179,165,-1,165,198,187,-1,198,197,186,-1,186,187,198,-1,186,181,190,-1,190,185,186,-1,185,190,189,-1,189,184,185,-1,184,180,179,-1,179,187,184,-1,182,195,196,-1,196,183,182,-1,181,182,191,-1,191,190,181,-1,184,189,177,-1,177,180,184,-1,188,189,190,-1,190,191,188,-1,191,182,183,-1,174,135,193,-1,193,168,174,-1,192,168,176,-1,199,206,204,-1,204,203,199,-1,202,204,206,-1,206,205,202,-1,202,205,283,-1,283,267,202,-1,208,268,283,-1,283,205,208,-1,220,214,232,-1,232,219,220,-1,221,222,223,-1,202,267,230,-1,230,227,202,-1,203,204,229,-1,229,228,203,-1,217,215,233,-1,233,269,217,-1,220,219,223,-1,223,222,220,-1,215,214,297,-1,297,233,215,-1,216,217,269,-1,269,270,216,-1,297,214,220,-1,220,299,297,-1,222,221,226,-1,226,300,222,-1,299,220,222,-1,222,300,299,-1,229,227,224,-1,224,223,229,-1,216,270,271,-1,271,218,216,-1,221,224,272,-1,272,226,221,-1,208,205,206,-1,206,207,208,-1,207,206,199,-1,199,211,207,-1,212,209,201,-1,201,200,212,-1,218,225,209,-1,209,216,218,-1,209,225,210,-1,210,201,209,-1,201,210,211,-1,211,199,201,-1,217,216,209,-1,209,212,217,-1,199,203,200,-1,200,201,199,-1,272,224,227,-1,227,230,272,-1,229,223,219,-1,219,228,229,-1,204,202,227,-1,227,229,204,-1,203,228,213,-1,213,200,203,-1,215,217,212,-1,212,231,215,-1,212,200,213,-1,213,231,212,-1,213,228,219,-1,219,232,213,-1,214,215,231,-1,231,232,214,-1,232,231,213,-1,268,208,234,-1,234,314,268,-1,208,207,235,-1,235,234,208,-1,207,211,236,-1,236,235,207,-1,211,210,237,-1,237,236,211,-1,210,225,238,-1,238,237,210,-1,225,218,239,-1,239,238,225,-1,218,271,320,-1,320,239,218,-1,223,224,221,-1,273,321,241,-1,273,241,242,-1,273,242,243,-1,273,243,244,-1,273,244,245,-1,273,245,240,-1,247,241,321,-1,321,327,247,-1,248,242,241,-1,241,247,248,-1,249,243,242,-1,242,248,249,-1,250,244,243,-1,243,249,250,-1,251,245,244,-1,244,250,251,-1,246,240,245,-1,245,251,246,-1,252,247,327,-1,327,274,252,-1,253,248,247,-1,247,252,253,-1,254,249,248,-1,248,253,254,-1,255,250,249,-1,249,254,255,-1,256,251,250,-1,250,255,256,-1,338,246,251,-1,251,256,338,-1,257,252,274,-1,274,275,257,-1,258,253,252,-1,252,257,258,-1,259,254,253,-1,253,258,259,-1,260,255,254,-1,254,259,260,-1,261,256,255,-1,255,260,261,-1,344,338,256,-1,256,261,344,-1,262,257,275,-1,275,276,262,-1,263,258,257,-1,257,262,263,-1,264,259,258,-1,258,263,264,-1,265,260,259,-1,259,264,265,-1,266,261,260,-1,260,265,266,-1,350,344,261,-1,261,266,350,-1,351,262,276,-1,351,263,262,-1,351,264,263,-1,351,265,264,-1,351,266,265,-1,351,350,266,-1,277,280,279,-1,279,278,277,-1,282,281,278,-1,278,279,282,-1,282,267,283,-1,283,281,282,-1,284,281,283,-1,283,268,284,-1,286,285,288,-1,288,287,286,-1,289,291,290,-1,282,292,230,-1,230,267,282,-1,280,294,293,-1,293,279,280,-1,295,269,233,-1,233,296,295,-1,286,290,291,-1,291,285,286,-1,296,233,297,-1,297,287,296,-1,298,270,269,-1,269,295,298,-1,297,299,286,-1,286,287,297,-1,290,300,226,-1,226,289,290,-1,299,300,290,-1,290,286,299,-1,293,291,301,-1,301,292,293,-1,298,302,271,-1,271,270,298,-1,289,226,272,-1,272,301,289,-1,284,303,278,-1,278,281,284,-1,303,304,277,-1,277,278,303,-1,305,308,307,-1,307,306,305,-1,302,298,306,-1,306,309,302,-1,306,307,310,-1,310,309,306,-1,307,277,304,-1,304,310,307,-1,295,305,306,-1,306,298,295,-1,277,307,308,-1,308,280,277,-1,272,230,292,-1,292,301,272,-1,293,294,285,-1,285,291,293,-1,279,293,292,-1,292,282,279,-1,280,308,311,-1,311,294,280,-1,296,312,305,-1,305,295,296,-1,305,312,311,-1,311,308,305,-1,311,288,285,-1,285,294,311,-1,287,288,312,-1,312,296,287,-1,288,311,312,-1,268,314,313,-1,313,284,268,-1,284,313,315,-1,315,303,284,-1,303,315,316,-1,316,304,303,-1,304,316,317,-1,317,310,304,-1,310,317,318,-1,318,309,310,-1,309,318,319,-1,319,302,309,-1,302,319,320,-1,320,271,302,-1,291,289,301,-1,273,322,321,-1,273,323,322,-1,273,324,323,-1,273,325,324,-1,273,326,325,-1,273,240,326,-1,328,327,321,-1,321,322,328,-1,329,328,322,-1,322,323,329,-1,330,329,323,-1,323,324,330,-1,331,330,324,-1,324,325,331,-1,332,331,325,-1,325,326,332,-1,246,332,326,-1,326,240,246,-1,333,274,327,-1,327,328,333,-1,334,333,328,-1,328,329,334,-1,335,334,329,-1,329,330,335,-1,336,335,330,-1,330,331,336,-1,337,336,331,-1,331,332,337,-1,338,337,332,-1,332,246,338,-1,339,275,274,-1,274,333,339,-1,340,339,333,-1,333,334,340,-1,341,340,334,-1,334,335,341,-1,342,341,335,-1,335,336,342,-1,343,342,336,-1,336,337,343,-1,344,343,337,-1,337,338,344,-1,345,276,275,-1,275,339,345,-1,346,345,339,-1,339,340,346,-1,347,346,340,-1,340,341,347,-1,348,347,341,-1,341,342,348,-1,349,348,342,-1,342,343,349,-1,350,349,343,-1,343,344,350,-1,351,276,345,-1,351,345,346,-1,351,346,347,-1,351,347,348,-1,351,348,349,-1,351,349,350,-1]
IndexedFaceSet208.creaseAngle = 1.57
IndexedFaceSet208.texCoordIndex = [1,2,3,-1,3,0,1,-1,4,5,6,-1,6,7,4,-1,8,9,6,-1,6,5,8,-1,4,7,10,-1,10,11,4,-1,12,13,9,-1,9,8,12,-1,15,16,17,-1,17,14,15,-1,18,47,59,-1,59,0,18,-1,4,19,20,-1,20,5,4,-1,5,20,21,-1,21,8,5,-1,3,13,12,-1,12,0,3,-1,22,23,24,-1,24,25,22,-1,26,27,24,-1,24,23,26,-1,28,48,55,-1,55,27,28,-1,18,0,12,-1,12,29,18,-1,30,53,47,-1,47,18,30,-1,32,33,34,-1,34,31,32,-1,34,17,21,-1,21,20,34,-1,59,61,1,-1,1,0,59,-1,13,3,28,-1,28,35,13,-1,7,22,36,-1,36,10,7,-1,25,49,57,-1,57,39,25,-1,40,36,22,-1,39,40,22,-1,25,39,22,-1,41,30,16,-1,16,15,41,-1,8,21,29,-1,29,12,8,-1,24,56,49,-1,49,25,24,-1,27,55,56,-1,56,24,27,-1,22,7,6,-1,6,23,22,-1,23,6,9,-1,9,26,23,-1,26,9,13,-1,13,35,26,-1,38,37,42,-1,42,43,38,-1,36,40,42,-1,42,37,36,-1,44,32,31,-1,19,4,11,-1,11,45,19,-1,31,19,45,-1,45,44,31,-1,27,26,35,-1,35,28,27,-1,51,58,2,-1,2,1,51,-1,2,58,52,-1,16,29,21,-1,21,17,16,-1,41,46,53,-1,53,30,41,-1,33,14,17,-1,17,34,33,-1,18,29,16,-1,16,30,18,-1,20,19,31,-1,31,34,20,-1,38,43,50,-1,50,54,38,-1,60,3,2,-1,2,52,60,-1,28,3,60,-1,60,48,28,-1,51,1,61,-1,36,37,62,-1,62,63,36,-1,65,64,67,-1,67,66,65,-1,68,71,70,-1,70,69,68,-1,72,69,70,-1,70,73,72,-1,68,75,74,-1,74,71,68,-1,76,72,73,-1,73,77,76,-1,79,78,81,-1,81,80,79,-1,82,64,84,-1,84,83,82,-1,68,69,86,-1,86,85,68,-1,69,72,87,-1,87,86,69,-1,67,64,76,-1,76,77,67,-1,88,91,90,-1,90,89,88,-1,92,89,90,-1,90,93,92,-1,94,93,96,-1,96,95,94,-1,82,97,76,-1,76,64,82,-1,98,82,83,-1,83,99,98,-1,101,100,103,-1,103,102,101,-1,103,86,87,-1,87,81,103,-1,84,64,65,-1,65,104,84,-1,77,105,94,-1,94,67,77,-1,71,74,106,-1,106,88,71,-1,91,109,108,-1,108,107,91,-1,88,106,110,-1,88,110,109,-1,91,88,109,-1,111,79,80,-1,80,98,111,-1,72,76,97,-1,97,87,72,-1,90,91,107,-1,107,112,90,-1,93,90,112,-1,112,96,93,-1,88,89,70,-1,70,71,88,-1,89,92,73,-1,73,70,89,-1,92,105,77,-1,77,73,92,-1,113,116,115,-1,115,114,113,-1,106,114,115,-1,115,110,106,-1,117,100,101,-1,85,118,75,-1,75,68,85,-1,100,117,118,-1,118,85,100,-1,93,94,105,-1,105,92,93,-1,119,65,66,-1,66,120,119,-1,66,121,120,-1,80,81,87,-1,87,97,80,-1,111,98,99,-1,99,122,111,-1,102,103,81,-1,81,78,102,-1,82,98,80,-1,80,97,82,-1,86,103,100,-1,100,85,86,-1,113,124,123,-1,123,116,113,-1,125,121,66,-1,66,67,125,-1,94,95,125,-1,125,67,94,-1,119,104,65,-1,106,127,126,-1,126,114,106,-1,130,128,129,-1,129,131,130,-1,133,132,128,-1,128,130,133,-1,130,131,134,-1,134,135,130,-1,133,130,135,-1,135,136,133,-1,135,134,141,-1,141,140,135,-1,136,135,140,-1,140,142,136,-1,137,138,140,-1,140,141,137,-1,139,152,153,-1,153,142,139,-1,138,139,142,-1,142,140,138,-1,134,131,143,-1,143,144,134,-1,144,143,145,-1,145,146,144,-1,129,128,147,-1,147,148,129,-1,154,155,149,-1,149,132,154,-1,128,132,149,-1,149,147,128,-1,132,133,150,-1,150,154,132,-1,133,136,151,-1,151,150,133,-1,136,142,153,-1,153,151,136,-1,157,158,159,-1,159,156,157,-1,161,162,163,-1,163,164,161,-1,162,161,160,-1,160,167,162,-1,164,163,166,-1,166,165,164,-1,157,167,160,-1,160,158,157,-1,157,156,168,-1,168,169,157,-1,173,172,171,-1,171,170,173,-1,174,173,170,-1,170,175,174,-1,173,177,176,-1,176,172,173,-1,174,178,177,-1,177,173,174,-1,177,180,179,-1,179,176,177,-1,178,181,180,-1,180,177,178,-1,182,179,180,-1,180,183,182,-1,184,181,186,-1,186,185,184,-1,183,180,181,-1,181,184,183,-1,176,188,187,-1,187,172,176,-1,188,190,189,-1,189,187,188,-1,171,192,191,-1,191,170,171,-1,193,175,195,-1,195,194,193,-1,170,191,195,-1,195,175,170,-1,175,193,196,-1,196,174,175,-1,174,196,197,-1,197,178,174,-1,178,197,186,-1,186,181,178,-1,199,198,201,-1,201,200,199,-1,202,205,204,-1,204,203,202,-1,203,206,207,-1,207,202,203,-1,205,208,209,-1,209,204,205,-1,199,200,207,-1,207,206,199,-1,199,211,210,-1,210,198,199,-1,216,213,214,-1,214,215,216,-1,217,218,219,-1,219,220,217,-1,239,215,212,-1,212,237,239,-1,216,240,247,-1,247,221,216,-1,240,216,215,-1,215,239,240,-1,215,214,222,-1,222,212,215,-1,214,213,218,-1,218,222,214,-1,213,216,221,-1,221,223,213,-1,224,238,241,-1,224,212,225,-1,213,223,219,-1,219,218,213,-1,218,217,222,-1,227,244,242,-1,242,226,227,-1,229,230,231,-1,231,228,229,-1,232,220,219,-1,219,233,232,-1,245,244,227,-1,227,230,245,-1,229,221,247,-1,247,246,229,-1,246,245,230,-1,230,229,246,-1,230,227,234,-1,234,231,230,-1,231,234,233,-1,233,228,231,-1,228,223,221,-1,221,229,228,-1,226,242,243,-1,243,235,226,-1,227,226,236,-1,236,234,227,-1,228,233,219,-1,219,223,228,-1,232,233,234,-1,234,236,232,-1,236,226,235,-1,224,241,237,-1,237,212,224,-1,225,212,222,-1,248,256,254,-1,254,253,248,-1,251,254,256,-1,256,255,251,-1,251,255,259,-1,259,252,251,-1,257,258,259,-1,259,255,257,-1,270,265,292,-1,292,269,270,-1,271,272,273,-1,251,252,290,-1,290,287,251,-1,253,254,289,-1,289,288,253,-1,268,266,276,-1,276,277,268,-1,270,269,273,-1,273,272,270,-1,266,265,280,-1,280,276,266,-1,267,268,277,-1,277,281,267,-1,280,265,270,-1,270,282,280,-1,272,271,284,-1,284,283,272,-1,282,270,272,-1,272,283,282,-1,289,287,274,-1,274,273,289,-1,267,281,286,-1,286,279,267,-1,271,274,275,-1,275,284,271,-1,257,255,256,-1,256,262,257,-1,262,256,248,-1,248,285,262,-1,263,260,250,-1,250,249,263,-1,279,278,260,-1,260,267,279,-1,260,278,261,-1,261,250,260,-1,250,261,285,-1,285,248,250,-1,268,267,260,-1,260,263,268,-1,248,253,249,-1,249,250,248,-1,275,274,287,-1,287,290,275,-1,289,273,269,-1,269,288,289,-1,254,251,287,-1,287,289,254,-1,253,288,264,-1,264,249,253,-1,266,268,263,-1,263,291,266,-1,263,249,264,-1,264,291,263,-1,264,288,269,-1,269,292,264,-1,265,266,291,-1,291,292,265,-1,292,291,264,-1,258,257,294,-1,294,293,258,-1,257,262,295,-1,295,294,257,-1,262,285,296,-1,296,295,262,-1,285,261,297,-1,297,296,285,-1,261,278,298,-1,298,297,261,-1,278,279,299,-1,299,298,278,-1,279,286,300,-1,300,299,279,-1,273,274,271,-1,301,302,303,-1,301,303,304,-1,301,304,305,-1,301,305,306,-1,301,306,307,-1,301,307,308,-1,310,303,302,-1,302,309,310,-1,311,304,303,-1,303,310,311,-1,312,305,304,-1,304,311,312,-1,313,306,305,-1,305,312,313,-1,314,307,306,-1,306,313,314,-1,315,308,307,-1,307,314,315,-1,317,310,309,-1,309,316,317,-1,318,311,310,-1,310,317,318,-1,319,312,311,-1,311,318,319,-1,320,313,312,-1,312,319,320,-1,321,314,313,-1,313,320,321,-1,322,315,314,-1,314,321,322,-1,324,317,316,-1,316,323,324,-1,325,318,317,-1,317,324,325,-1,326,319,318,-1,318,325,326,-1,327,320,319,-1,319,326,327,-1,328,321,320,-1,320,327,328,-1,329,322,321,-1,321,328,329,-1,331,324,323,-1,323,330,331,-1,332,325,324,-1,324,331,332,-1,333,326,325,-1,325,332,333,-1,334,327,326,-1,326,333,334,-1,335,328,327,-1,327,334,335,-1,336,329,328,-1,328,335,336,-1,337,331,330,-1,337,332,331,-1,337,333,332,-1,337,334,333,-1,337,335,334,-1,337,336,335,-1,338,341,340,-1,340,339,338,-1,343,342,339,-1,339,340,343,-1,343,344,345,-1,345,342,343,-1,346,342,345,-1,345,347,346,-1,349,348,351,-1,351,350,349,-1,352,354,353,-1,343,356,355,-1,355,344,343,-1,341,358,357,-1,357,340,341,-1,359,362,361,-1,361,360,359,-1,349,353,354,-1,354,348,349,-1,360,361,363,-1,363,350,360,-1,365,364,362,-1,362,359,365,-1,363,366,349,-1,349,350,363,-1,353,367,368,-1,368,352,353,-1,366,367,353,-1,353,349,366,-1,357,354,369,-1,369,356,357,-1,365,370,371,-1,371,364,365,-1,352,368,372,-1,372,369,352,-1,346,373,339,-1,339,342,346,-1,373,374,338,-1,338,339,373,-1,375,378,377,-1,377,376,375,-1,370,365,376,-1,376,379,370,-1,376,377,380,-1,380,379,376,-1,377,338,374,-1,374,380,377,-1,359,375,376,-1,376,365,359,-1,338,377,378,-1,378,341,338,-1,372,355,356,-1,356,369,372,-1,357,358,348,-1,348,354,357,-1,340,357,356,-1,356,343,340,-1,341,378,381,-1,381,358,341,-1,360,382,375,-1,375,359,360,-1,375,382,381,-1,381,378,375,-1,381,351,348,-1,348,358,381,-1,350,351,382,-1,382,360,350,-1,351,381,382,-1,347,384,383,-1,383,346,347,-1,346,383,385,-1,385,373,346,-1,373,385,386,-1,386,374,373,-1,374,386,387,-1,387,380,374,-1,380,387,388,-1,388,379,380,-1,379,388,389,-1,389,370,379,-1,370,389,390,-1,390,371,370,-1,354,352,369,-1,391,393,392,-1,391,394,393,-1,391,395,394,-1,391,396,395,-1,391,397,396,-1,391,398,397,-1,400,399,392,-1,392,393,400,-1,401,400,393,-1,393,394,401,-1,402,401,394,-1,394,395,402,-1,403,402,395,-1,395,396,403,-1,404,403,396,-1,396,397,404,-1,405,404,397,-1,397,398,405,-1,407,406,399,-1,399,400,407,-1,408,407,400,-1,400,401,408,-1,409,408,401,-1,401,402,409,-1,410,409,402,-1,402,403,410,-1,411,410,403,-1,403,404,411,-1,412,411,404,-1,404,405,412,-1,414,413,406,-1,406,407,414,-1,415,414,407,-1,407,408,415,-1,416,415,408,-1,408,409,416,-1,417,416,409,-1,409,410,417,-1,418,417,410,-1,410,411,418,-1,419,418,411,-1,411,412,419,-1,421,420,413,-1,413,414,421,-1,422,421,414,-1,414,415,422,-1,423,422,415,-1,415,416,423,-1,424,423,416,-1,416,417,424,-1,425,424,417,-1,417,418,425,-1,426,425,418,-1,418,419,426,-1,427,420,421,-1,427,421,422,-1,427,422,423,-1,427,423,424,-1,427,424,425,-1,427,425,426,-1]
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
f = open("../data/KoreanCharacter08Da.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/KoreanCharacter08Da.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
