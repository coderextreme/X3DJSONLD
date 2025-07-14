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
meta3.content = "KoreanCharacter05Ju.x3d"

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
meta9.name = "warning"
meta9.content = "HAnimJoint and HAnimSegment names upgraded to HAnim2 but graph topology has inconsistencies that do not match loa=1 specification hierarchy"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "description"
meta10.content = "Articulated 3D game character designed with a general graphics tool, then converted into an X3D HAnim model."

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "reference"
meta11.content = "KoreanCharacter00ReadMe.txt"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "reference"
meta12.content = "KoreanCharacterHumanMotion_Infotech2014_140706.pdf"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "reference"
meta13.content = "KoreanCharactersIllustrated.pdf"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "identifier"
meta14.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter05Ju.x3d"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "generator"
meta15.content = "3DS MAX, http://www.autodesk.com/products/autodesk-3ds-max/overview"

head1.children.append(meta15)
meta16 = x3d.meta()
meta16.name = "generator"
meta16.content = "Suwon University HAnim Editor"

head1.children.append(meta16)
meta17 = x3d.meta()
meta17.name = "generator"
meta17.content = "Gnu Image Manipulation Program, http://www.gimp.org"

head1.children.append(meta17)
meta18 = x3d.meta()
meta18.name = "generator"
meta18.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta18)
meta19 = x3d.meta()
meta19.name = "license"
meta19.content = "../license.html"

head1.children.append(meta19)

X3D0.head = head1
Scene20 = x3d.Scene()
WorldInfo21 = x3d.WorldInfo()
WorldInfo21.title = "KoreanCharacter05Ju.x3d"

Scene20.children.append(WorldInfo21)
NavigationInfo22 = x3d.NavigationInfo()
NavigationInfo22.speed = 1.5

Scene20.children.append(NavigationInfo22)
Viewpoint23 = x3d.Viewpoint()
Viewpoint23.centerOfRotation = [0,1,0]
Viewpoint23.description = "Ju"
Viewpoint23.position = [0,1,3]

Scene20.children.append(Viewpoint23)
HAnimHumanoid24 = x3d.HAnimHumanoid()
HAnimHumanoid24.name = "Ju"
HAnimHumanoid24.DEF = "hanim_Ju"
HAnimHumanoid24.scale = [0.0225,0.0225,0.0225]
HAnimHumanoid24.version = "2.0"
"""original HAnimHumanoid info='\"authorName=Chul Hee Jung and Myeong Won Lee\" \"authorEmail=myeongwonlee@gmail.com\" \"creationDate=31 March 2011\" \"humanoidVersion=2.0\" \"gender=female\" \"height=1.5\"'"""
MetadataSet25 = x3d.MetadataSet()
MetadataSet25.name = "HAnimHumanoid.info"
MetadataSet25.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"
MetadataString26 = x3d.MetadataString()
MetadataString26.name = "authorName"
MetadataString26.value = ["Chul Hee Jung and Myeong Won Lee"]

if MetadataSet25.value is None:
    MetadataSet25.value = []
MetadataSet25.value.append(MetadataString26)
MetadataString27 = x3d.MetadataString()
MetadataString27.name = "authorEmail"
MetadataString27.value = ["myeongwonlee@gmail.com"]

if MetadataSet25.value is None:
    MetadataSet25.value = []
MetadataSet25.value.append(MetadataString27)
MetadataString28 = x3d.MetadataString()
MetadataString28.name = "creationDate"
MetadataString28.value = ["31 March 2011"]

if MetadataSet25.value is None:
    MetadataSet25.value = []
MetadataSet25.value.append(MetadataString28)
MetadataString29 = x3d.MetadataString()
MetadataString29.name = "gender"
MetadataString29.value = ["female"]

if MetadataSet25.value is None:
    MetadataSet25.value = []
MetadataSet25.value.append(MetadataString29)
MetadataFloat30 = x3d.MetadataFloat()
MetadataFloat30.name = "height"
MetadataFloat30.value = [1.5]

if MetadataSet25.value is None:
    MetadataSet25.value = []
MetadataSet25.value.append(MetadataFloat30)
MetadataString31 = x3d.MetadataString()
MetadataString31.name = "humanoidVersion"
MetadataString31.value = ["2.0"]

if MetadataSet25.value is None:
    MetadataSet25.value = []
MetadataSet25.value.append(MetadataString31)

HAnimHumanoid24.metadata = MetadataSet25
HAnimJoint32 = x3d.HAnimJoint()
HAnimJoint32.name = "humanoid_root"
HAnimJoint32.DEF = "hanim_humanoid_root"
HAnimJoint32.center = [0,36,-0.008798]
HAnimJoint32.ulimit = [0,0,0]
HAnimJoint32.llimit = [0,0,0]
HAnimSegment33 = x3d.HAnimSegment()
HAnimSegment33.name = "sacrum"
HAnimSegment33.DEF = "hanim_sacrum"
Transform34 = x3d.Transform()
Transform34.translation = [0,36,-0.008798]
Shape35 = x3d.Shape()
Appearance36 = x3d.Appearance()
Material37 = x3d.Material()
Material37.diffuseColor = [0.588,0.588,0.588]

Appearance36.material = Material37
ImageTexture38 = x3d.ImageTexture()
ImageTexture38.DEF = "JuTextureAtlas"
ImageTexture38.url = ["images/Ju.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/images/Ju.png"]

Appearance36.texture = ImageTexture38

Shape35.appearance = Appearance36
IndexedFaceSet39 = x3d.IndexedFaceSet()
IndexedFaceSet39.coordIndex = [2,3,0,-1,0,1,2,-1,4,5,3,-1,3,2,4,-1,6,7,5,-1,5,4,6,-1,8,9,7,-1,7,6,8,-1,10,11,9,-1,9,8,10,-1,12,13,11,-1,11,10,12,-1,14,15,13,-1,13,12,14,-1,16,17,15,-1,15,14,16,-1,18,19,17,-1,17,16,18,-1,20,21,19,-1,19,18,20,-1,22,23,21,-1,21,20,22,-1,1,0,23,-1,23,22,1,-1,25,2,1,-1,1,24,25,-1,26,4,2,-1,2,25,26,-1,27,6,4,-1,4,26,27,-1,28,8,6,-1,6,27,28,-1,29,10,8,-1,8,28,29,-1,30,12,10,-1,10,29,30,-1,31,14,12,-1,12,30,31,-1,32,16,14,-1,14,31,32,-1,33,18,16,-1,16,32,33,-1,34,20,18,-1,18,33,34,-1,35,22,20,-1,20,34,35,-1,24,1,22,-1,22,35,24,-1,37,25,24,-1,24,36,37,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,36,24,35,-1,35,47,36,-1,48,37,36,-1,48,38,37,-1,48,39,38,-1,48,40,39,-1,48,41,40,-1,48,42,41,-1,48,43,42,-1,48,44,43,-1,48,45,44,-1,48,46,45,-1,48,47,46,-1,48,36,47,-1,0,3,50,-1,50,49,0,-1,3,5,51,-1,51,50,3,-1,5,7,52,-1,52,51,5,-1,7,9,53,-1,53,52,7,-1,9,11,54,-1,54,53,9,-1,11,13,55,-1,55,54,11,-1,13,15,56,-1,56,55,13,-1,15,17,57,-1,57,56,15,-1,17,19,58,-1,58,57,17,-1,19,21,59,-1,59,58,19,-1,21,23,60,-1,60,59,21,-1,23,0,49,-1,49,60,23,-1,49,50,61,-1,50,51,61,-1,51,52,61,-1,52,53,61,-1,53,54,61,-1,54,55,61,-1,55,56,61,-1,56,57,61,-1,57,58,61,-1,58,59,61,-1,59,60,61,-1,60,49,61,-1]
IndexedFaceSet39.creaseAngle = 1.57
IndexedFaceSet39.texCoordIndex = [2,3,0,-1,0,1,2,-1,4,5,3,-1,3,2,4,-1,6,7,5,-1,5,4,6,-1,8,9,7,-1,7,6,8,-1,10,11,9,-1,9,8,10,-1,12,13,11,-1,11,10,12,-1,14,15,13,-1,13,12,14,-1,16,17,15,-1,15,14,16,-1,18,19,17,-1,17,16,18,-1,20,21,19,-1,19,18,20,-1,22,23,21,-1,21,20,22,-1,1,0,23,-1,23,22,1,-1,25,2,1,-1,1,24,25,-1,26,4,2,-1,2,25,26,-1,27,6,4,-1,4,26,27,-1,28,8,6,-1,6,27,28,-1,29,10,8,-1,8,28,29,-1,30,12,10,-1,10,29,30,-1,31,14,12,-1,12,30,31,-1,32,16,14,-1,14,31,32,-1,33,18,16,-1,16,32,33,-1,34,20,18,-1,18,33,34,-1,35,22,20,-1,20,34,35,-1,24,1,22,-1,22,35,24,-1,37,25,24,-1,24,36,37,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,36,24,35,-1,35,47,36,-1,48,37,36,-1,48,38,37,-1,48,39,38,-1,48,40,39,-1,48,41,40,-1,48,42,41,-1,48,43,42,-1,48,44,43,-1,48,45,44,-1,48,46,45,-1,48,47,46,-1,48,36,47,-1,0,3,50,-1,50,49,0,-1,3,5,51,-1,51,50,3,-1,5,7,52,-1,52,51,5,-1,7,9,53,-1,53,52,7,-1,9,11,54,-1,54,53,9,-1,11,13,55,-1,55,54,11,-1,13,15,56,-1,56,55,13,-1,15,17,57,-1,57,56,15,-1,17,19,58,-1,58,57,17,-1,19,21,59,-1,59,58,19,-1,21,23,60,-1,60,59,21,-1,23,0,49,-1,49,60,23,-1,49,50,61,-1,50,51,61,-1,51,52,61,-1,52,53,61,-1,53,54,61,-1,54,55,61,-1,55,56,61,-1,56,57,61,-1,57,58,61,-1,58,59,61,-1,59,60,61,-1,60,49,61,-1]
Coordinate40 = x3d.Coordinate()

IndexedFaceSet39.coord = Coordinate40
TextureCoordinate41 = x3d.TextureCoordinate()

IndexedFaceSet39.texCoord = TextureCoordinate41

Shape35.geometry = IndexedFaceSet39

Transform34.children.append(Shape35)

HAnimSegment33.children.append(Transform34)

HAnimJoint32.children.append(HAnimSegment33)
HAnimJoint42 = x3d.HAnimJoint()
HAnimJoint42.name = "l_hip"
HAnimJoint42.DEF = "hanim_l_hip"
HAnimJoint42.center = [3.22,33.619999,-0.2832]
HAnimJoint42.ulimit = [0,0,0]
HAnimJoint42.llimit = [0,0,0]
HAnimSegment43 = x3d.HAnimSegment()
HAnimSegment43.name = "l_thigh"
HAnimSegment43.DEF = "hanim_l_thigh"
Transform44 = x3d.Transform()
Transform44.translation = [3.22,33.619999,-0.2832]
Shape45 = x3d.Shape()
Appearance46 = x3d.Appearance()
Material47 = x3d.Material()
Material47.diffuseColor = [0.588,0.588,0.588]

Appearance46.material = Material47
ImageTexture48 = x3d.ImageTexture()
ImageTexture48.USE = "JuTextureAtlas"

Appearance46.texture = ImageTexture48

Shape45.appearance = Appearance46
IndexedFaceSet49 = x3d.IndexedFaceSet()
IndexedFaceSet49.coordIndex = [33,32,31,-1,31,30,29,-1,31,29,28,-1,33,31,28,-1,34,33,28,-1,0,1,8,-1,8,7,0,-1,1,2,9,-1,9,8,1,-1,2,3,10,-1,10,9,2,-1,3,4,11,-1,11,10,3,-1,4,5,12,-1,12,11,4,-1,5,6,13,-1,13,12,5,-1,6,0,7,-1,7,13,6,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,12,19,-1,19,18,11,-1,12,13,20,-1,20,19,12,-1,13,7,14,-1,14,20,13,-1,14,15,22,-1,22,21,14,-1,15,16,23,-1,23,22,15,-1,16,17,24,-1,24,23,16,-1,17,18,25,-1,25,24,17,-1,18,19,26,-1,26,25,18,-1,19,20,27,-1,27,26,19,-1,20,14,21,-1,21,27,20,-1,28,29,1,-1,1,0,28,-1,29,30,2,-1,2,1,29,-1,30,31,3,-1,3,2,30,-1,31,32,4,-1,4,3,31,-1,32,33,5,-1,5,4,32,-1,33,34,6,-1,6,5,33,-1,34,28,0,-1,0,6,34,-1,21,22,35,-1,35,36,21,-1,22,23,37,-1,37,35,22,-1,23,24,38,-1,38,37,23,-1,24,25,39,-1,39,38,24,-1,25,26,40,-1,40,39,25,-1,26,27,41,-1,41,40,26,-1,27,21,36,-1,36,41,27,-1,36,35,42,-1,42,43,36,-1,35,37,44,-1,44,42,35,-1,37,38,45,-1,45,44,37,-1,38,39,46,-1,46,45,38,-1,39,40,47,-1,47,46,39,-1,40,41,48,-1,48,47,40,-1,41,36,43,-1,43,48,41,-1,43,42,49,-1,42,44,49,-1,44,45,49,-1,45,46,49,-1,46,47,49,-1,47,48,49,-1,48,43,49,-1]
IndexedFaceSet49.creaseAngle = 1.57
IndexedFaceSet49.texCoordIndex = [5,4,3,-1,3,2,0,-1,3,0,1,-1,5,3,1,-1,6,5,1,-1,7,10,8,-1,8,9,7,-1,10,12,11,-1,11,8,10,-1,12,14,13,-1,13,11,12,-1,14,16,15,-1,15,13,14,-1,16,18,17,-1,17,15,16,-1,18,20,19,-1,19,17,18,-1,20,7,9,-1,9,19,20,-1,9,8,21,-1,21,22,9,-1,8,11,23,-1,23,21,8,-1,11,13,24,-1,24,23,11,-1,13,15,25,-1,25,24,13,-1,15,17,26,-1,26,25,15,-1,17,19,27,-1,27,26,17,-1,19,9,22,-1,22,27,19,-1,22,21,28,-1,28,29,22,-1,21,23,30,-1,30,28,21,-1,23,24,31,-1,31,30,23,-1,24,25,32,-1,32,31,24,-1,25,26,33,-1,33,32,25,-1,26,27,34,-1,34,33,26,-1,27,22,29,-1,29,34,27,-1,1,0,10,-1,10,7,1,-1,0,2,12,-1,12,10,0,-1,2,3,14,-1,14,12,2,-1,3,4,16,-1,16,14,3,-1,4,5,18,-1,18,16,4,-1,5,6,20,-1,20,18,5,-1,6,1,7,-1,7,20,6,-1,29,28,35,-1,35,36,29,-1,28,30,37,-1,37,35,28,-1,30,31,38,-1,38,37,30,-1,31,32,39,-1,39,38,31,-1,32,33,40,-1,40,39,32,-1,33,34,41,-1,41,40,33,-1,34,29,36,-1,36,41,34,-1,36,35,42,-1,42,43,36,-1,35,37,44,-1,44,42,35,-1,37,38,45,-1,45,44,37,-1,38,39,46,-1,46,45,38,-1,39,40,47,-1,47,46,39,-1,40,41,48,-1,48,47,40,-1,41,36,43,-1,43,48,41,-1,43,42,49,-1,42,44,49,-1,44,45,49,-1,45,46,49,-1,46,47,49,-1,47,48,49,-1,48,43,49,-1]
Coordinate50 = x3d.Coordinate()

IndexedFaceSet49.coord = Coordinate50
TextureCoordinate51 = x3d.TextureCoordinate()

IndexedFaceSet49.texCoord = TextureCoordinate51

Shape45.geometry = IndexedFaceSet49

Transform44.children.append(Shape45)

HAnimSegment43.children.append(Transform44)

HAnimJoint42.children.append(HAnimSegment43)
HAnimJoint52 = x3d.HAnimJoint()
HAnimJoint52.name = "l_knee"
HAnimJoint52.DEF = "hanim_l_knee"
HAnimJoint52.center = [3.454,18.67,-0.02158]
HAnimJoint52.ulimit = [0,0,0]
HAnimJoint52.llimit = [0,0,0]
HAnimSegment53 = x3d.HAnimSegment()
HAnimSegment53.name = "l_calf"
HAnimSegment53.DEF = "hanim_l_calf"
Transform54 = x3d.Transform()
Transform54.translation = [3.454,18.67,-0.02158]
Shape55 = x3d.Shape()
Appearance56 = x3d.Appearance()
Material57 = x3d.Material()
Material57.diffuseColor = [0.588,0.588,0.588]

Appearance56.material = Material57
ImageTexture58 = x3d.ImageTexture()
ImageTexture58.USE = "JuTextureAtlas"

Appearance56.texture = ImageTexture58

Shape55.appearance = Appearance56
IndexedFaceSet59 = x3d.IndexedFaceSet()
IndexedFaceSet59.coordIndex = [4,3,2,-1,2,1,0,-1,4,2,0,-1,5,4,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1]
IndexedFaceSet59.creaseAngle = 1.57
IndexedFaceSet59.texCoordIndex = [4,3,2,-1,2,1,0,-1,4,2,0,-1,5,4,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1]
Coordinate60 = x3d.Coordinate()

IndexedFaceSet59.coord = Coordinate60
TextureCoordinate61 = x3d.TextureCoordinate()

IndexedFaceSet59.texCoord = TextureCoordinate61

Shape55.geometry = IndexedFaceSet59

Transform54.children.append(Shape55)

HAnimSegment53.children.append(Transform54)

HAnimJoint52.children.append(HAnimSegment53)
HAnimJoint62 = x3d.HAnimJoint()
HAnimJoint62.name = "l_talocrural"
HAnimJoint62.DEF = "hanim_l_talocrural"
HAnimJoint62.center = [3.467,3.522,0.118]
HAnimJoint62.ulimit = [0,0,0]
HAnimJoint62.llimit = [0,0,0]
HAnimSegment63 = x3d.HAnimSegment()
HAnimSegment63.name = "l_talus"
HAnimSegment63.DEF = "hanim_l_talus"
Transform64 = x3d.Transform()
Transform64.translation = [3.467,3.522,0.118]
Shape65 = x3d.Shape()
Appearance66 = x3d.Appearance()
Material67 = x3d.Material()
Material67.diffuseColor = [0.588,0.588,0.588]

Appearance66.material = Material67
ImageTexture68 = x3d.ImageTexture()
ImageTexture68.USE = "JuTextureAtlas"

Appearance66.texture = ImageTexture68

Shape65.appearance = Appearance66
IndexedFaceSet69 = x3d.IndexedFaceSet()
IndexedFaceSet69.coordIndex = [1,11,12,-1,3,4,5,-1,5,6,3,-1,1,0,4,-1,4,3,1,-1,0,2,5,-1,5,4,0,-1,11,1,3,-1,3,6,11,-1,18,2,0,-1,0,17,18,-1,0,1,25,-1,25,17,0,-1,25,1,12,-1,7,13,11,-1,8,6,5,-1,5,9,8,-1,7,8,9,-1,9,10,7,-1,10,9,5,-1,5,2,10,-1,11,6,8,-1,8,7,11,-1,18,21,10,-1,10,2,18,-1,10,21,27,-1,27,7,10,-1,27,13,7,-1,12,11,37,-1,37,35,12,-1,11,13,36,-1,36,37,11,-1,20,18,17,-1,17,14,20,-1,23,14,17,-1,17,25,23,-1,16,20,14,-1,14,15,16,-1,24,15,14,-1,14,23,24,-1,15,24,29,-1,29,16,15,-1,20,19,21,-1,21,18,20,-1,26,27,21,-1,21,19,26,-1,16,22,19,-1,19,20,16,-1,28,26,19,-1,19,22,28,-1,22,16,29,-1,29,28,22,-1,36,32,33,-1,34,30,31,-1,33,34,31,-1,36,33,31,-1,36,31,35,-1,24,23,31,-1,31,30,24,-1,23,25,35,-1,35,31,23,-1,27,26,32,-1,32,36,27,-1,26,28,33,-1,33,32,26,-1,28,29,34,-1,34,33,28,-1,29,24,30,-1,30,34,29,-1,36,35,37,-1,12,35,25,-1,27,36,13,-1]
IndexedFaceSet69.creaseAngle = 1.57
IndexedFaceSet69.texCoordIndex = [1,14,18,-1,3,4,5,-1,5,6,3,-1,1,0,4,-1,4,3,1,-1,0,2,5,-1,5,4,0,-1,14,1,3,-1,3,6,14,-1,19,2,0,-1,0,16,19,-1,0,1,17,-1,17,16,0,-1,17,1,18,-1,7,23,15,-1,9,8,11,-1,11,10,9,-1,7,9,10,-1,10,12,7,-1,12,10,11,-1,11,13,12,-1,15,8,9,-1,9,7,15,-1,20,21,12,-1,12,13,20,-1,12,21,22,-1,22,7,12,-1,22,23,7,-1,18,14,25,-1,25,24,18,-1,15,23,26,-1,26,25,15,-1,29,33,32,-1,32,27,29,-1,41,27,32,-1,32,43,41,-1,30,29,27,-1,27,28,30,-1,42,28,27,-1,27,41,42,-1,28,42,48,-1,48,31,28,-1,35,34,37,-1,37,36,35,-1,44,45,37,-1,37,34,44,-1,39,38,34,-1,34,35,39,-1,46,44,34,-1,34,38,46,-1,38,40,47,-1,47,46,38,-1,52,53,54,-1,55,49,50,-1,54,55,50,-1,52,54,50,-1,52,50,51,-1,42,41,50,-1,50,49,42,-1,41,43,51,-1,51,50,41,-1,45,44,53,-1,53,52,45,-1,44,46,54,-1,54,53,44,-1,46,47,55,-1,55,54,46,-1,48,42,49,-1,49,55,48,-1,52,51,56,-1,18,24,43,-1,22,52,23,-1]
Coordinate70 = x3d.Coordinate()

IndexedFaceSet69.coord = Coordinate70
TextureCoordinate71 = x3d.TextureCoordinate()

IndexedFaceSet69.texCoord = TextureCoordinate71

Shape65.geometry = IndexedFaceSet69

Transform64.children.append(Shape65)

HAnimSegment63.children.append(Transform64)

HAnimJoint62.children.append(HAnimSegment63)
HAnimJoint72 = x3d.HAnimJoint()
HAnimJoint72.name = "l_metatarsophalangeal_2"
HAnimJoint72.DEF = "hanim_l_metatarsophalangeal_2"
HAnimJoint72.center = [3.467,3.251,1.465]
HAnimJoint72.ulimit = [0,0,0]
HAnimJoint72.llimit = [0,0,0]
HAnimSegment73 = x3d.HAnimSegment()
HAnimSegment73.name = "l_tarsal_proximal_phalanx_2"
HAnimSegment73.DEF = "hanim_l_tarsal_proximal_phalanx_2"
Transform74 = x3d.Transform()
Transform74.translation = [3.467,3.251,1.465]
Shape75 = x3d.Shape()
Appearance76 = x3d.Appearance()
Material77 = x3d.Material()
Material77.diffuseColor = [0.588,0.588,0.588]

Appearance76.material = Material77
ImageTexture78 = x3d.ImageTexture()
ImageTexture78.USE = "JuTextureAtlas"

Appearance76.texture = ImageTexture78

Shape75.appearance = Appearance76
IndexedFaceSet79 = x3d.IndexedFaceSet()
IndexedFaceSet79.coordIndex = [3,4,25,-1,3,25,26,-1,0,3,26,-1,1,0,26,-1,26,10,1,-1,1,10,12,-1,12,9,1,-1,2,34,25,-1,25,4,2,-1,31,8,6,-1,32,31,6,-1,5,32,6,-1,7,11,32,-1,32,5,7,-1,7,9,12,-1,12,11,7,-1,2,8,31,-1,31,34,2,-1,15,16,17,-1,15,17,18,-1,15,18,19,-1,14,15,19,-1,14,19,13,-1,0,1,14,-1,14,13,0,-1,1,9,15,-1,15,14,1,-1,9,7,16,-1,16,15,9,-1,7,5,17,-1,17,16,7,-1,5,6,18,-1,18,17,5,-1,6,3,19,-1,19,18,6,-1,3,0,13,-1,13,19,3,-1,6,8,2,-1,3,6,2,-1,4,3,2,-1,23,21,20,-1,20,24,23,-1,29,22,21,-1,21,23,29,-1,22,29,33,-1,20,21,26,-1,26,25,20,-1,26,21,22,-1,22,10,26,-1,10,22,33,-1,33,12,10,-1,34,24,20,-1,20,25,34,-1,23,24,28,-1,28,27,23,-1,29,23,27,-1,27,30,29,-1,30,33,29,-1,28,31,32,-1,32,27,28,-1,32,11,30,-1,30,27,32,-1,11,12,33,-1,33,30,11,-1,34,31,28,-1,28,24,34,-1]
IndexedFaceSet79.creaseAngle = 1.57
IndexedFaceSet79.texCoordIndex = [4,5,12,-1,4,12,13,-1,0,4,13,-1,1,0,13,-1,13,14,1,-1,1,14,18,-1,18,3,1,-1,2,20,12,-1,12,5,2,-1,12,10,7,-1,15,12,7,-1,6,15,7,-1,8,16,15,-1,15,6,8,-1,8,11,17,-1,17,16,8,-1,9,10,12,-1,12,19,9,-1,23,24,25,-1,23,25,26,-1,23,26,27,-1,22,23,27,-1,22,27,21,-1,0,1,22,-1,22,21,0,-1,1,3,23,-1,23,22,1,-1,11,8,24,-1,24,23,11,-1,8,6,25,-1,25,24,8,-1,6,7,26,-1,26,25,6,-1,7,4,27,-1,27,26,7,-1,4,0,21,-1,21,27,4,-1,7,10,9,-1,4,7,9,-1,5,4,9,-1,29,30,12,-1,12,28,29,-1,31,32,30,-1,30,29,31,-1,32,31,33,-1,12,30,34,-1,34,12,12,-1,34,30,32,-1,32,35,34,-1,35,32,33,-1,33,36,35,-1,37,28,12,-1,12,12,37,-1,38,40,12,-1,12,39,38,-1,41,38,39,-1,39,42,41,-1,42,45,41,-1,12,12,43,-1,43,39,12,-1,43,44,42,-1,42,39,43,-1,44,46,45,-1,45,42,44,-1,47,12,12,-1,12,40,47,-1]
Coordinate80 = x3d.Coordinate()

IndexedFaceSet79.coord = Coordinate80
TextureCoordinate81 = x3d.TextureCoordinate()

IndexedFaceSet79.texCoord = TextureCoordinate81

Shape75.geometry = IndexedFaceSet79

Transform74.children.append(Shape75)

HAnimSegment73.children.append(Transform74)

HAnimJoint72.children.append(HAnimSegment73)

HAnimJoint62.children.append(HAnimJoint72)

HAnimJoint52.children.append(HAnimJoint62)

HAnimJoint42.children.append(HAnimJoint52)

HAnimJoint32.children.append(HAnimJoint42)
HAnimJoint82 = x3d.HAnimJoint()
HAnimJoint82.name = "r_hip"
HAnimJoint82.DEF = "hanim_r_hip"
HAnimJoint82.center = [-3.22,33.619999,-0.2832]
HAnimJoint82.ulimit = [0,0,0]
HAnimJoint82.llimit = [0,0,0]
HAnimSegment83 = x3d.HAnimSegment()
HAnimSegment83.name = "r_thigh"
HAnimSegment83.DEF = "hanim_r_thigh"
Transform84 = x3d.Transform()
Transform84.translation = [-3.22,33.619999,-0.2832]
Shape85 = x3d.Shape()
Appearance86 = x3d.Appearance()
Material87 = x3d.Material()
Material87.diffuseColor = [0.588,0.588,0.588]

Appearance86.material = Material87
ImageTexture88 = x3d.ImageTexture()
ImageTexture88.USE = "JuTextureAtlas"

Appearance86.texture = ImageTexture88

Shape85.appearance = Appearance86
IndexedFaceSet89 = x3d.IndexedFaceSet()
IndexedFaceSet89.coordIndex = [29,30,31,-1,28,29,31,-1,31,32,33,-1,28,31,33,-1,34,28,33,-1,0,7,8,-1,8,1,0,-1,1,8,9,-1,9,2,1,-1,2,9,10,-1,10,3,2,-1,3,10,11,-1,11,4,3,-1,4,11,12,-1,12,5,4,-1,5,12,13,-1,13,6,5,-1,6,13,7,-1,7,0,6,-1,7,14,15,-1,15,8,7,-1,8,15,16,-1,16,9,8,-1,9,16,17,-1,17,10,9,-1,10,17,18,-1,18,11,10,-1,11,18,19,-1,19,12,11,-1,12,19,20,-1,20,13,12,-1,13,20,14,-1,14,7,13,-1,14,21,22,-1,22,15,14,-1,15,22,23,-1,23,16,15,-1,16,23,24,-1,24,17,16,-1,17,24,25,-1,25,18,17,-1,18,25,26,-1,26,19,18,-1,19,26,27,-1,27,20,19,-1,20,27,21,-1,21,14,20,-1,28,0,1,-1,1,29,28,-1,29,1,2,-1,2,30,29,-1,30,2,3,-1,3,31,30,-1,31,3,4,-1,4,32,31,-1,32,4,5,-1,5,33,32,-1,33,5,6,-1,6,34,33,-1,34,6,0,-1,0,28,34,-1,21,36,35,-1,35,22,21,-1,22,35,37,-1,37,23,22,-1,23,37,38,-1,38,24,23,-1,24,38,39,-1,39,25,24,-1,25,39,40,-1,40,26,25,-1,26,40,41,-1,41,27,26,-1,27,41,36,-1,36,21,27,-1,36,43,42,-1,42,35,36,-1,35,42,44,-1,44,37,35,-1,37,44,45,-1,45,38,37,-1,38,45,46,-1,46,39,38,-1,39,46,47,-1,47,40,39,-1,40,47,48,-1,48,41,40,-1,41,48,43,-1,43,36,41,-1,43,49,42,-1,42,49,44,-1,44,49,45,-1,45,49,46,-1,46,49,47,-1,47,49,48,-1,48,49,43,-1]
IndexedFaceSet89.creaseAngle = 1.57
IndexedFaceSet89.texCoordIndex = [0,2,3,-1,1,0,3,-1,3,4,5,-1,1,3,5,-1,6,1,5,-1,7,9,8,-1,8,10,7,-1,10,8,11,-1,11,12,10,-1,12,11,13,-1,13,14,12,-1,14,13,15,-1,15,16,14,-1,16,15,17,-1,17,18,16,-1,18,17,19,-1,19,20,18,-1,20,19,9,-1,9,7,20,-1,9,22,21,-1,21,8,9,-1,8,21,23,-1,23,11,8,-1,11,23,24,-1,24,13,11,-1,13,24,25,-1,25,15,13,-1,15,25,26,-1,26,17,15,-1,17,26,27,-1,27,19,17,-1,19,27,22,-1,22,9,19,-1,22,29,28,-1,28,21,22,-1,21,28,30,-1,30,23,21,-1,23,30,31,-1,31,24,23,-1,24,31,32,-1,32,25,24,-1,25,32,33,-1,33,26,25,-1,26,33,34,-1,34,27,26,-1,27,34,29,-1,29,22,27,-1,1,7,10,-1,10,0,1,-1,0,10,12,-1,12,2,0,-1,2,12,14,-1,14,3,2,-1,3,14,16,-1,16,4,3,-1,4,16,18,-1,18,5,4,-1,5,18,20,-1,20,6,5,-1,6,20,7,-1,7,1,6,-1,29,36,35,-1,35,28,29,-1,28,35,37,-1,37,30,28,-1,30,37,38,-1,38,31,30,-1,31,38,39,-1,39,32,31,-1,32,39,40,-1,40,33,32,-1,33,40,41,-1,41,34,33,-1,34,41,36,-1,36,29,34,-1,36,43,42,-1,42,35,36,-1,35,42,44,-1,44,37,35,-1,37,44,45,-1,45,38,37,-1,38,45,46,-1,46,39,38,-1,39,46,47,-1,47,40,39,-1,40,47,48,-1,48,41,40,-1,41,48,43,-1,43,36,41,-1,43,49,42,-1,42,49,44,-1,44,49,45,-1,45,49,46,-1,46,49,47,-1,47,49,48,-1,48,49,43,-1]
Coordinate90 = x3d.Coordinate()

IndexedFaceSet89.coord = Coordinate90
TextureCoordinate91 = x3d.TextureCoordinate()

IndexedFaceSet89.texCoord = TextureCoordinate91

Shape85.geometry = IndexedFaceSet89

Transform84.children.append(Shape85)

HAnimSegment83.children.append(Transform84)

HAnimJoint82.children.append(HAnimSegment83)
HAnimJoint92 = x3d.HAnimJoint()
HAnimJoint92.name = "r_knee"
HAnimJoint92.DEF = "hanim_r_knee"
HAnimJoint92.center = [-3.454,18.67,-0.02158]
HAnimJoint92.ulimit = [0,0,0]
HAnimJoint92.llimit = [0,0,0]
HAnimSegment93 = x3d.HAnimSegment()
HAnimSegment93.name = "r_calf"
HAnimSegment93.DEF = "hanim_r_calf"
Transform94 = x3d.Transform()
Transform94.translation = [-3.454,18.67,-0.02158]
Shape95 = x3d.Shape()
Appearance96 = x3d.Appearance()
Material97 = x3d.Material()
Material97.diffuseColor = [0.588,0.588,0.588]

Appearance96.material = Material97
ImageTexture98 = x3d.ImageTexture()
ImageTexture98.USE = "JuTextureAtlas"

Appearance96.texture = ImageTexture98

Shape95.appearance = Appearance96
IndexedFaceSet99 = x3d.IndexedFaceSet()
IndexedFaceSet99.coordIndex = [0,1,2,-1,2,3,4,-1,0,2,4,-1,0,4,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1]
IndexedFaceSet99.creaseAngle = 1.57
IndexedFaceSet99.texCoordIndex = [0,1,2,-1,2,3,4,-1,0,2,4,-1,0,4,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1]
Coordinate100 = x3d.Coordinate()

IndexedFaceSet99.coord = Coordinate100
TextureCoordinate101 = x3d.TextureCoordinate()

IndexedFaceSet99.texCoord = TextureCoordinate101

Shape95.geometry = IndexedFaceSet99

Transform94.children.append(Shape95)

HAnimSegment93.children.append(Transform94)

HAnimJoint92.children.append(HAnimSegment93)
HAnimJoint102 = x3d.HAnimJoint()
HAnimJoint102.name = "r_talocrural"
HAnimJoint102.DEF = "hanim_r_talocrural"
HAnimJoint102.center = [-3.679,3.522,0.118]
HAnimJoint102.ulimit = [0,0,0]
HAnimJoint102.llimit = [0,0,0]
HAnimSegment103 = x3d.HAnimSegment()
HAnimSegment103.name = "r_talus"
HAnimSegment103.DEF = "hanim_r_talus"
Transform104 = x3d.Transform()
Transform104.translation = [-3.679,3.522,0.118]
Shape105 = x3d.Shape()
Appearance106 = x3d.Appearance()
Material107 = x3d.Material()
Material107.diffuseColor = [0.588,0.588,0.588]

Appearance106.material = Material107
ImageTexture108 = x3d.ImageTexture()
ImageTexture108.USE = "JuTextureAtlas"

Appearance106.texture = ImageTexture108

Shape105.appearance = Appearance106
IndexedFaceSet109 = x3d.IndexedFaceSet()
IndexedFaceSet109.coordIndex = [1,12,11,-1,3,6,5,-1,5,4,3,-1,1,3,4,-1,4,0,1,-1,0,4,5,-1,5,2,0,-1,11,6,3,-1,3,1,11,-1,18,17,0,-1,0,2,18,-1,0,17,25,-1,25,1,0,-1,25,12,1,-1,7,11,13,-1,8,9,5,-1,5,6,8,-1,7,10,9,-1,9,8,7,-1,10,2,5,-1,5,9,10,-1,11,7,8,-1,8,6,11,-1,18,2,10,-1,10,21,18,-1,10,7,27,-1,27,21,10,-1,27,7,13,-1,12,35,37,-1,37,11,12,-1,11,37,36,-1,36,13,11,-1,20,14,17,-1,17,18,20,-1,23,25,17,-1,17,14,23,-1,16,15,14,-1,14,20,16,-1,24,23,14,-1,14,15,24,-1,15,16,29,-1,29,24,15,-1,20,18,21,-1,21,19,20,-1,26,19,21,-1,21,27,26,-1,16,20,19,-1,19,22,16,-1,28,22,19,-1,19,26,28,-1,22,28,29,-1,29,16,22,-1,36,35,31,-1,31,30,34,-1,31,34,33,-1,36,31,33,-1,36,33,32,-1,24,30,31,-1,31,23,24,-1,23,31,35,-1,35,25,23,-1,27,36,32,-1,32,26,27,-1,26,32,33,-1,33,28,26,-1,28,33,34,-1,34,29,28,-1,29,34,30,-1,30,24,29,-1,36,37,35,-1,12,25,35,-1,27,13,36,-1]
IndexedFaceSet109.creaseAngle = 1.57
IndexedFaceSet109.texCoordIndex = [1,18,14,-1,3,6,5,-1,5,4,3,-1,1,3,4,-1,4,0,1,-1,0,4,5,-1,5,2,0,-1,14,6,3,-1,3,1,14,-1,19,16,0,-1,0,2,19,-1,0,16,17,-1,17,1,0,-1,17,18,1,-1,7,15,23,-1,9,10,11,-1,11,8,9,-1,7,12,10,-1,10,9,7,-1,12,13,11,-1,11,10,12,-1,15,7,9,-1,9,8,15,-1,20,13,12,-1,12,21,20,-1,12,7,22,-1,22,21,12,-1,22,7,23,-1,18,24,25,-1,25,14,18,-1,15,25,26,-1,26,23,15,-1,29,27,32,-1,32,33,29,-1,41,43,32,-1,32,27,41,-1,30,28,27,-1,27,29,30,-1,42,41,27,-1,27,28,42,-1,28,31,48,-1,48,42,28,-1,35,36,37,-1,37,34,35,-1,44,34,37,-1,37,45,44,-1,39,35,34,-1,34,38,39,-1,46,38,34,-1,34,44,46,-1,38,46,47,-1,47,40,38,-1,52,51,50,-1,50,49,55,-1,50,55,54,-1,52,50,54,-1,52,54,53,-1,42,49,50,-1,50,41,42,-1,41,50,51,-1,51,43,41,-1,45,52,53,-1,53,44,45,-1,44,53,54,-1,54,46,44,-1,46,54,55,-1,55,47,46,-1,48,55,49,-1,49,42,48,-1,52,56,51,-1,18,43,24,-1,22,23,52,-1]
Coordinate110 = x3d.Coordinate()

IndexedFaceSet109.coord = Coordinate110
TextureCoordinate111 = x3d.TextureCoordinate()

IndexedFaceSet109.texCoord = TextureCoordinate111

Shape105.geometry = IndexedFaceSet109

Transform104.children.append(Shape105)

HAnimSegment103.children.append(Transform104)

HAnimJoint102.children.append(HAnimSegment103)
HAnimJoint112 = x3d.HAnimJoint()
HAnimJoint112.name = "r_metatarsophalangeal_2"
HAnimJoint112.DEF = "hanim_r_metatarsophalangeal_2"
HAnimJoint112.center = [-3.679,3.251,1.465]
HAnimJoint112.ulimit = [0,0,0]
HAnimJoint112.llimit = [0,0,0]
HAnimSegment113 = x3d.HAnimSegment()
HAnimSegment113.name = "r_tarsal_proximal_phalanx_2"
HAnimSegment113.DEF = "hanim_r_tarsal_proximal_phalanx_2"
Transform114 = x3d.Transform()
Transform114.translation = [-3.679,3.251,1.465]
Shape115 = x3d.Shape()
Appearance116 = x3d.Appearance()
Material117 = x3d.Material()
Material117.diffuseColor = [0.588,0.588,0.588]

Appearance116.material = Material117
ImageTexture118 = x3d.ImageTexture()
ImageTexture118.USE = "JuTextureAtlas"

Appearance116.texture = ImageTexture118

Shape115.appearance = Appearance116
IndexedFaceSet119 = x3d.IndexedFaceSet()
IndexedFaceSet119.coordIndex = [25,4,3,-1,26,25,3,-1,0,26,3,-1,1,10,26,-1,26,0,1,-1,1,9,12,-1,12,10,1,-1,2,4,25,-1,25,34,2,-1,6,8,31,-1,6,31,32,-1,5,6,32,-1,7,5,32,-1,32,11,7,-1,7,11,12,-1,12,9,7,-1,2,34,31,-1,31,8,2,-1,14,13,19,-1,17,16,15,-1,18,17,15,-1,19,18,15,-1,14,19,15,-1,0,13,14,-1,14,1,0,-1,1,14,15,-1,15,9,1,-1,9,15,16,-1,16,7,9,-1,7,16,17,-1,17,5,7,-1,5,17,18,-1,18,6,5,-1,6,18,19,-1,19,3,6,-1,3,19,13,-1,13,0,3,-1,2,8,6,-1,2,6,3,-1,4,2,3,-1,23,24,20,-1,20,21,23,-1,29,23,21,-1,21,22,29,-1,22,33,29,-1,20,25,26,-1,26,21,20,-1,26,10,22,-1,22,21,26,-1,10,12,33,-1,33,22,10,-1,34,25,20,-1,20,24,34,-1,23,27,28,-1,28,24,23,-1,29,30,27,-1,27,23,29,-1,30,29,33,-1,28,27,32,-1,32,31,28,-1,32,27,30,-1,30,11,32,-1,11,30,33,-1,33,12,11,-1,34,24,28,-1,28,31,34,-1]
IndexedFaceSet119.creaseAngle = 1.57
IndexedFaceSet119.texCoordIndex = [12,5,4,-1,13,12,4,-1,0,13,4,-1,1,14,13,-1,13,0,1,-1,1,3,18,-1,18,14,1,-1,2,5,12,-1,12,20,2,-1,7,10,12,-1,7,12,15,-1,6,7,15,-1,8,6,15,-1,15,16,8,-1,8,16,17,-1,17,11,8,-1,9,19,12,-1,12,10,9,-1,22,21,27,-1,25,24,23,-1,26,25,23,-1,27,26,23,-1,22,27,23,-1,0,21,22,-1,22,1,0,-1,1,22,23,-1,23,3,1,-1,11,23,24,-1,24,8,11,-1,8,24,25,-1,25,6,8,-1,6,25,26,-1,26,7,6,-1,7,26,27,-1,27,4,7,-1,4,27,21,-1,21,0,4,-1,9,10,7,-1,9,7,4,-1,5,9,4,-1,29,28,12,-1,12,30,29,-1,31,29,30,-1,30,32,31,-1,32,33,31,-1,12,12,34,-1,34,30,12,-1,34,35,32,-1,32,30,34,-1,35,36,33,-1,33,32,35,-1,37,12,12,-1,12,28,37,-1,38,39,12,-1,12,40,38,-1,41,42,39,-1,39,38,41,-1,42,41,45,-1,12,39,43,-1,43,12,12,-1,43,39,42,-1,42,44,43,-1,44,42,45,-1,45,46,44,-1,47,40,12,-1,12,12,47,-1]
Coordinate120 = x3d.Coordinate()

IndexedFaceSet119.coord = Coordinate120
TextureCoordinate121 = x3d.TextureCoordinate()

IndexedFaceSet119.texCoord = TextureCoordinate121

Shape115.geometry = IndexedFaceSet119

Transform114.children.append(Shape115)

HAnimSegment113.children.append(Transform114)

HAnimJoint112.children.append(HAnimSegment113)

HAnimJoint102.children.append(HAnimJoint112)

HAnimJoint92.children.append(HAnimJoint102)

HAnimJoint82.children.append(HAnimJoint92)

HAnimJoint32.children.append(HAnimJoint82)
HAnimJoint122 = x3d.HAnimJoint()
HAnimJoint122.name = "sacroiliac"
HAnimJoint122.DEF = "hanim_sacroiliac"
HAnimJoint122.center = [0.000034,31.26,-0.008798]
HAnimJoint122.ulimit = [0,0,0]
HAnimJoint122.llimit = [0,0,0]
HAnimSegment123 = x3d.HAnimSegment()
HAnimSegment123.name = "pelvis"
HAnimSegment123.DEF = "hanim_pelvis"
Transform124 = x3d.Transform()
Transform124.translation = [0.000034,31.26,-0.008798]
Shape125 = x3d.Shape()
Appearance126 = x3d.Appearance()
Material127 = x3d.Material()
Material127.diffuseColor = [0.588,0.588,0.588]

Appearance126.material = Material127
ImageTexture128 = x3d.ImageTexture()
ImageTexture128.USE = "JuTextureAtlas"

Appearance126.texture = ImageTexture128

Shape125.appearance = Appearance126
IndexedFaceSet129 = x3d.IndexedFaceSet()
IndexedFaceSet129.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,63,62,-1,62,25,26,-1,27,64,63,-1,63,26,27,-1,28,65,64,-1,64,27,28,-1,29,66,65,-1,65,28,29,-1,30,67,66,-1,66,29,30,-1,31,68,67,-1,67,30,31,-1,32,69,68,-1,68,31,32,-1,33,70,69,-1,69,32,33,-1,34,71,70,-1,70,33,34,-1,35,72,71,-1,71,34,35,-1,36,73,72,-1,72,35,36,-1,25,62,73,-1,73,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1,62,63,14,-1,14,13,62,-1,63,64,15,-1,15,14,63,-1,64,65,16,-1,16,15,64,-1,65,66,17,-1,17,16,65,-1,66,67,18,-1,18,17,66,-1,67,68,19,-1,19,18,67,-1,68,69,20,-1,20,19,68,-1,69,70,21,-1,21,20,69,-1,70,71,22,-1,22,21,70,-1,71,72,23,-1,23,22,71,-1,72,73,24,-1,24,23,72,-1,73,62,13,-1,13,24,73,-1]
IndexedFaceSet129.creaseAngle = 1.57
IndexedFaceSet129.texCoordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,39,40,37,-1,37,38,39,-1,41,42,40,-1,40,39,41,-1,43,44,42,-1,42,41,43,-1,45,46,44,-1,44,43,45,-1,47,48,46,-1,46,45,47,-1,49,50,48,-1,48,47,49,-1,51,52,50,-1,50,49,51,-1,53,54,52,-1,52,51,53,-1,55,56,54,-1,54,53,55,-1,57,58,56,-1,56,55,57,-1,59,60,58,-1,58,57,59,-1,38,37,60,-1,60,59,38,-1,62,39,38,-1,38,61,62,-1,63,41,39,-1,39,62,63,-1,64,43,41,-1,41,63,64,-1,65,45,43,-1,43,64,65,-1,66,47,45,-1,45,65,66,-1,67,49,47,-1,47,66,67,-1,68,51,49,-1,49,67,68,-1,69,53,51,-1,51,68,69,-1,70,55,53,-1,53,69,70,-1,71,57,55,-1,55,70,71,-1,72,59,57,-1,57,71,72,-1,61,38,59,-1,59,72,61,-1,74,62,61,-1,61,73,74,-1,75,63,62,-1,62,74,75,-1,76,64,63,-1,63,75,76,-1,77,65,64,-1,64,76,77,-1,78,66,65,-1,65,77,78,-1,79,67,66,-1,66,78,79,-1,80,68,67,-1,67,79,80,-1,81,69,68,-1,68,80,81,-1,82,70,69,-1,69,81,82,-1,83,71,70,-1,70,82,83,-1,84,72,71,-1,71,83,84,-1,73,61,72,-1,72,84,73,-1,85,74,73,-1,85,75,74,-1,85,76,75,-1,85,77,76,-1,85,78,77,-1,85,79,78,-1,85,80,79,-1,85,81,80,-1,85,82,81,-1,85,83,82,-1,85,84,83,-1,85,73,84,-1,25,26,14,-1,14,13,25,-1,26,27,15,-1,15,14,26,-1,27,28,16,-1,16,15,27,-1,28,29,17,-1,17,16,28,-1,29,30,18,-1,18,17,29,-1,30,31,19,-1,19,18,30,-1,31,32,20,-1,20,19,31,-1,32,33,21,-1,21,20,32,-1,33,34,22,-1,22,21,33,-1,34,35,23,-1,23,22,34,-1,35,36,24,-1,24,23,35,-1,36,25,13,-1,13,24,36,-1]
Coordinate130 = x3d.Coordinate()

IndexedFaceSet129.coord = Coordinate130
TextureCoordinate131 = x3d.TextureCoordinate()

IndexedFaceSet129.texCoord = TextureCoordinate131

Shape125.geometry = IndexedFaceSet129

Transform124.children.append(Shape125)

HAnimSegment123.children.append(Transform124)

HAnimJoint122.children.append(HAnimSegment123)
HAnimJoint132 = x3d.HAnimJoint()
HAnimJoint132.name = "l_shoulder"
HAnimJoint132.DEF = "hanim_l_shoulder"
HAnimJoint132.center = [4.778,51.029999,-2.069]
HAnimJoint132.ulimit = [0,0,0]
HAnimJoint132.llimit = [0,0,0]
HAnimSegment133 = x3d.HAnimSegment()
HAnimSegment133.name = "l_upperarm"
HAnimSegment133.DEF = "hanim_l_upperarm"
Transform134 = x3d.Transform()
Transform134.translation = [4.778,51.029999,-2.069]
Shape135 = x3d.Shape()
Appearance136 = x3d.Appearance()
Material137 = x3d.Material()
Material137.diffuseColor = [0.588,0.588,0.588]

Appearance136.material = Material137
ImageTexture138 = x3d.ImageTexture()
ImageTexture138.USE = "JuTextureAtlas"

Appearance136.texture = ImageTexture138

Shape135.appearance = Appearance136
IndexedFaceSet139 = x3d.IndexedFaceSet()
IndexedFaceSet139.coordIndex = [2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,36,37,38,-1,35,36,38,-1,39,35,38,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1,26,25,20,-1,20,21,26,-1,27,26,21,-1,21,22,27,-1,28,27,22,-1,22,23,28,-1,29,28,23,-1,23,24,29,-1,25,29,24,-1,24,20,25,-1,31,30,25,-1,25,26,31,-1,32,31,26,-1,26,27,32,-1,33,32,27,-1,27,28,33,-1,34,33,28,-1,28,29,34,-1,30,34,29,-1,29,25,30,-1,36,35,30,-1,30,31,36,-1,37,36,31,-1,31,32,37,-1,38,37,32,-1,32,33,38,-1,39,38,33,-1,33,34,39,-1,35,39,34,-1,34,30,35,-1]
IndexedFaceSet139.creaseAngle = 1.57
IndexedFaceSet139.texCoordIndex = [2,0,53,-1,3,2,53,-1,54,3,53,-1,1,0,5,-1,5,6,1,-1,0,2,7,-1,7,5,0,-1,2,3,8,-1,8,7,2,-1,25,4,9,-1,9,26,25,-1,4,1,6,-1,6,9,4,-1,6,5,10,-1,10,11,6,-1,5,7,12,-1,12,10,5,-1,7,8,13,-1,13,12,7,-1,27,9,14,-1,14,28,27,-1,9,6,11,-1,11,14,9,-1,11,10,15,-1,15,16,11,-1,10,12,17,-1,17,15,10,-1,12,13,18,-1,18,17,12,-1,29,14,19,-1,19,30,29,-1,14,11,16,-1,16,19,14,-1,34,35,36,-1,33,34,36,-1,37,33,36,-1,20,21,16,-1,16,15,20,-1,22,20,15,-1,15,17,22,-1,23,22,17,-1,17,18,23,-1,24,32,31,-1,31,19,24,-1,21,24,19,-1,19,16,21,-1,40,41,38,-1,38,39,40,-1,43,40,39,-1,39,42,43,-1,45,43,42,-1,42,44,45,-1,47,45,44,-1,44,46,47,-1,41,47,46,-1,46,38,41,-1,48,49,41,-1,41,40,48,-1,50,48,40,-1,40,43,50,-1,51,50,43,-1,43,45,51,-1,52,51,45,-1,45,47,52,-1,49,52,47,-1,47,41,49,-1,34,33,49,-1,49,48,34,-1,35,34,48,-1,48,50,35,-1,36,35,50,-1,50,51,36,-1,37,36,51,-1,51,52,37,-1,33,37,52,-1,52,49,33,-1]
Coordinate140 = x3d.Coordinate()

IndexedFaceSet139.coord = Coordinate140
TextureCoordinate141 = x3d.TextureCoordinate()

IndexedFaceSet139.texCoord = TextureCoordinate141

Shape135.geometry = IndexedFaceSet139

Transform134.children.append(Shape135)

HAnimSegment133.children.append(Transform134)

HAnimJoint132.children.append(HAnimSegment133)
HAnimJoint142 = x3d.HAnimJoint()
HAnimJoint142.name = "l_elbow"
HAnimJoint142.DEF = "hanim_l_elbow"
HAnimJoint142.center = [5.297,40.119999,-2.055]
HAnimJoint142.ulimit = [0,0,0]
HAnimJoint142.llimit = [0,0,0]
HAnimSegment143 = x3d.HAnimSegment()
HAnimSegment143.name = "l_forearm"
HAnimSegment143.DEF = "hanim_l_forearm"
Transform144 = x3d.Transform()
Transform144.translation = [5.297,40.119999,-2.055]
Shape145 = x3d.Shape()
Appearance146 = x3d.Appearance()
Material147 = x3d.Material()
Material147.diffuseColor = [0.588,0.588,0.588]

Appearance146.material = Material147
ImageTexture148 = x3d.ImageTexture()
ImageTexture148.USE = "JuTextureAtlas"

Appearance146.texture = ImageTexture148

Shape145.appearance = Appearance146
IndexedFaceSet149 = x3d.IndexedFaceSet()
IndexedFaceSet149.coordIndex = [3,2,1,-1,3,1,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,21,22,23,-1,20,21,23,-1,24,20,23,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1]
IndexedFaceSet149.creaseAngle = 1.57
IndexedFaceSet149.texCoordIndex = [3,2,0,-1,3,0,1,-1,4,3,1,-1,1,0,5,-1,5,6,1,-1,0,2,7,-1,7,5,0,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,1,6,-1,6,9,4,-1,6,5,10,-1,10,11,6,-1,5,7,12,-1,12,10,5,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,6,11,-1,11,14,9,-1,11,10,15,-1,15,16,11,-1,10,12,17,-1,17,15,10,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,11,16,-1,16,19,14,-1,21,22,23,-1,20,21,23,-1,24,20,23,-1,21,20,16,-1,16,15,21,-1,22,21,15,-1,15,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,16,20,-1]
Coordinate150 = x3d.Coordinate()

IndexedFaceSet149.coord = Coordinate150
TextureCoordinate151 = x3d.TextureCoordinate()

IndexedFaceSet149.texCoord = TextureCoordinate151

Shape145.geometry = IndexedFaceSet149

Transform144.children.append(Shape145)

HAnimSegment143.children.append(Transform144)

HAnimJoint142.children.append(HAnimSegment143)
HAnimJoint152 = x3d.HAnimJoint()
HAnimJoint152.name = "l_radiocarpal"
HAnimJoint152.DEF = "hanim_l_radiocarpal"
HAnimJoint152.center = [5.07,31.99,-1.559]
HAnimJoint152.ulimit = [0,0,0]
HAnimJoint152.llimit = [0,0,0]
HAnimSegment153 = x3d.HAnimSegment()
HAnimSegment153.name = "l_carpal"
HAnimSegment153.DEF = "hanim_l_carpal"
Transform154 = x3d.Transform()
Transform154.translation = [5.07,31.99,-1.559]
Shape155 = x3d.Shape()
Appearance156 = x3d.Appearance()
Material157 = x3d.Material()
Material157.diffuseColor = [0.588,0.588,0.588]

Appearance156.material = Material157
ImageTexture158 = x3d.ImageTexture()
ImageTexture158.USE = "JuTextureAtlas"

Appearance156.texture = ImageTexture158

Shape155.appearance = Appearance156
IndexedFaceSet159 = x3d.IndexedFaceSet()
IndexedFaceSet159.coordIndex = [4,5,0,-1,0,2,4,-1,6,7,3,-1,3,1,6,-1,1,0,5,-1,5,6,1,-1,8,9,5,-1,5,4,8,-1,10,11,7,-1,7,6,10,-1,9,10,6,-1,6,5,9,-1,12,13,9,-1,9,8,12,-1,14,15,11,-1,11,10,14,-1,13,14,10,-1,10,9,13,-1,4,2,16,-1,2,3,7,-1,7,16,2,-1,17,19,18,-1,18,20,17,-1,21,16,7,-1,7,11,21,-1,8,21,12,-1,12,21,11,-1,11,15,12,-1,13,12,15,-1,15,14,13,-1,8,4,19,-1,19,17,8,-1,4,16,18,-1,18,19,4,-1,16,21,20,-1,20,18,16,-1,21,8,17,-1,17,20,21,-1,3,2,0,-1,0,1,3,-1]
IndexedFaceSet159.creaseAngle = 1.57
IndexedFaceSet159.texCoordIndex = [0,2,1,-1,1,3,0,-1,36,38,37,-1,37,39,36,-1,28,30,29,-1,29,31,28,-1,4,5,2,-1,2,0,4,-1,40,41,38,-1,38,36,40,-1,32,33,31,-1,31,29,32,-1,6,7,5,-1,5,4,6,-1,42,43,41,-1,41,40,42,-1,34,35,33,-1,33,32,34,-1,10,12,11,-1,12,14,13,-1,13,11,12,-1,15,17,16,-1,16,18,15,-1,19,11,13,-1,13,20,19,-1,21,19,22,-1,22,19,20,-1,20,23,22,-1,24,22,23,-1,23,25,24,-1,4,0,8,-1,8,9,4,-1,10,11,16,-1,16,17,10,-1,11,19,18,-1,18,16,11,-1,19,21,15,-1,15,18,19,-1,14,12,26,-1,26,27,14,-1]
Coordinate160 = x3d.Coordinate()

IndexedFaceSet159.coord = Coordinate160
TextureCoordinate161 = x3d.TextureCoordinate()

IndexedFaceSet159.texCoord = TextureCoordinate161

Shape155.geometry = IndexedFaceSet159

Transform154.children.append(Shape155)

HAnimSegment153.children.append(Transform154)

HAnimJoint152.children.append(HAnimSegment153)

HAnimJoint142.children.append(HAnimJoint152)

HAnimJoint132.children.append(HAnimJoint142)

HAnimJoint122.children.append(HAnimJoint132)
HAnimJoint162 = x3d.HAnimJoint()
HAnimJoint162.name = "r_shoulder"
HAnimJoint162.DEF = "hanim_r_shoulder"
HAnimJoint162.center = [-4.778,51.029999,-2.069]
HAnimJoint162.ulimit = [0,0,0]
HAnimJoint162.llimit = [0,0,0]
HAnimSegment163 = x3d.HAnimSegment()
HAnimSegment163.name = "r_upperarm"
HAnimSegment163.DEF = "hanim_r_upperarm"
Transform164 = x3d.Transform()
Transform164.translation = [-4.778,51.029999,-2.069]
Shape165 = x3d.Shape()
Appearance166 = x3d.Appearance()
Material167 = x3d.Material()
Material167.diffuseColor = [0.588,0.588,0.588]

Appearance166.material = Material167
ImageTexture168 = x3d.ImageTexture()
ImageTexture168.USE = "JuTextureAtlas"

Appearance166.texture = ImageTexture168

Shape165.appearance = Appearance166
IndexedFaceSet169 = x3d.IndexedFaceSet()
IndexedFaceSet169.coordIndex = [0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,38,37,36,-1,38,36,35,-1,39,38,35,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1,26,21,20,-1,20,25,26,-1,27,22,21,-1,21,26,27,-1,28,23,22,-1,22,27,28,-1,29,24,23,-1,23,28,29,-1,25,20,24,-1,24,29,25,-1,31,26,25,-1,25,30,31,-1,32,27,26,-1,26,31,32,-1,33,28,27,-1,27,32,33,-1,34,29,28,-1,28,33,34,-1,30,25,29,-1,29,34,30,-1,36,31,30,-1,30,35,36,-1,37,32,31,-1,31,36,37,-1,38,33,32,-1,32,37,38,-1,39,34,33,-1,33,38,39,-1,35,30,34,-1,34,39,35,-1]
IndexedFaceSet169.creaseAngle = 1.57
IndexedFaceSet169.texCoordIndex = [53,0,2,-1,53,2,3,-1,54,53,3,-1,1,6,5,-1,5,0,1,-1,0,5,7,-1,7,2,0,-1,2,7,8,-1,8,3,2,-1,25,26,9,-1,9,4,25,-1,4,9,6,-1,6,1,4,-1,6,11,10,-1,10,5,6,-1,5,10,12,-1,12,7,5,-1,7,12,13,-1,13,8,7,-1,27,28,14,-1,14,9,27,-1,9,14,11,-1,11,6,9,-1,11,16,15,-1,15,10,11,-1,10,15,17,-1,17,12,10,-1,12,17,18,-1,18,13,12,-1,29,30,19,-1,19,14,29,-1,14,19,16,-1,16,11,14,-1,36,35,34,-1,36,34,33,-1,37,36,33,-1,20,15,16,-1,16,21,20,-1,22,17,15,-1,15,20,22,-1,23,18,17,-1,17,22,23,-1,24,19,31,-1,31,32,24,-1,21,16,19,-1,19,24,21,-1,40,39,38,-1,38,41,40,-1,43,42,39,-1,39,40,43,-1,45,44,42,-1,42,43,45,-1,47,46,44,-1,44,45,47,-1,41,38,46,-1,46,47,41,-1,48,40,41,-1,41,49,48,-1,50,43,40,-1,40,48,50,-1,51,45,43,-1,43,50,51,-1,52,47,45,-1,45,51,52,-1,49,41,47,-1,47,52,49,-1,34,48,49,-1,49,33,34,-1,35,50,48,-1,48,34,35,-1,36,51,50,-1,50,35,36,-1,37,52,51,-1,51,36,37,-1,33,49,52,-1,52,37,33,-1]
Coordinate170 = x3d.Coordinate()

IndexedFaceSet169.coord = Coordinate170
TextureCoordinate171 = x3d.TextureCoordinate()

IndexedFaceSet169.texCoord = TextureCoordinate171

Shape165.geometry = IndexedFaceSet169

Transform164.children.append(Shape165)

HAnimSegment163.children.append(Transform164)

HAnimJoint162.children.append(HAnimSegment163)
HAnimJoint172 = x3d.HAnimJoint()
HAnimJoint172.name = "r_elbow"
HAnimJoint172.DEF = "hanim_r_elbow"
HAnimJoint172.center = [-5.297,40.119999,-2.055]
HAnimJoint172.ulimit = [0,0,0]
HAnimJoint172.llimit = [0,0,0]
HAnimSegment173 = x3d.HAnimSegment()
HAnimSegment173.name = "r_forearm"
HAnimSegment173.DEF = "hanim_r_forearm"
Transform174 = x3d.Transform()
Transform174.translation = [-5.297,40.119999,-2.055]
Shape175 = x3d.Shape()
Appearance176 = x3d.Appearance()
Material177 = x3d.Material()
Material177.diffuseColor = [0.588,0.588,0.588]

Appearance176.material = Material177
ImageTexture178 = x3d.ImageTexture()
ImageTexture178.USE = "JuTextureAtlas"

Appearance176.texture = ImageTexture178

Shape175.appearance = Appearance176
IndexedFaceSet179 = x3d.IndexedFaceSet()
IndexedFaceSet179.coordIndex = [1,2,3,-1,0,1,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,23,22,21,-1,23,21,20,-1,24,23,20,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1]
IndexedFaceSet179.creaseAngle = 1.57
IndexedFaceSet179.texCoordIndex = [0,2,3,-1,1,0,3,-1,4,1,3,-1,1,6,5,-1,5,0,1,-1,0,5,7,-1,7,2,0,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,6,-1,6,1,4,-1,6,11,10,-1,10,5,6,-1,5,10,12,-1,12,7,5,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,11,-1,11,6,9,-1,11,16,15,-1,15,10,11,-1,10,15,17,-1,17,12,10,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,16,-1,16,11,14,-1,23,22,21,-1,23,21,20,-1,24,23,20,-1,21,15,16,-1,16,20,21,-1,22,17,15,-1,15,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,16,19,-1,19,24,20,-1]
Coordinate180 = x3d.Coordinate()

IndexedFaceSet179.coord = Coordinate180
TextureCoordinate181 = x3d.TextureCoordinate()

IndexedFaceSet179.texCoord = TextureCoordinate181

Shape175.geometry = IndexedFaceSet179

Transform174.children.append(Shape175)

HAnimSegment173.children.append(Transform174)

HAnimJoint172.children.append(HAnimSegment173)
HAnimJoint182 = x3d.HAnimJoint()
HAnimJoint182.name = "r_radiocarpal"
HAnimJoint182.DEF = "hanim_r_radiocarpal"
HAnimJoint182.center = [-5.07,31.99,-1.559]
HAnimJoint182.ulimit = [0,0,0]
HAnimJoint182.llimit = [0,0,0]
HAnimSegment183 = x3d.HAnimSegment()
HAnimSegment183.name = "r_carpal"
HAnimSegment183.DEF = "hanim_r_carpal"
Transform184 = x3d.Transform()
Transform184.translation = [-5.07,31.99,-1.559]
Shape185 = x3d.Shape()
Appearance186 = x3d.Appearance()
Material187 = x3d.Material()
Material187.diffuseColor = [0.588,0.588,0.588]

Appearance186.material = Material187
ImageTexture188 = x3d.ImageTexture()
ImageTexture188.USE = "JuTextureAtlas"

Appearance186.texture = ImageTexture188

Shape185.appearance = Appearance186
IndexedFaceSet189 = x3d.IndexedFaceSet()
IndexedFaceSet189.coordIndex = [4,2,0,-1,0,5,4,-1,6,1,3,-1,3,7,6,-1,1,6,5,-1,5,0,1,-1,8,4,5,-1,5,9,8,-1,10,6,7,-1,7,11,10,-1,9,5,6,-1,6,10,9,-1,12,8,9,-1,9,13,12,-1,14,10,11,-1,11,15,14,-1,13,9,10,-1,10,14,13,-1,4,16,2,-1,2,16,7,-1,7,3,2,-1,17,20,18,-1,18,19,17,-1,21,11,7,-1,7,16,21,-1,8,12,21,-1,12,15,11,-1,11,21,12,-1,13,14,15,-1,15,12,13,-1,8,17,19,-1,19,4,8,-1,4,19,18,-1,18,16,4,-1,16,18,20,-1,20,21,16,-1,21,20,17,-1,17,8,21,-1,3,1,0,-1,0,2,3,-1]
IndexedFaceSet189.creaseAngle = 1.57
IndexedFaceSet189.texCoordIndex = [0,3,1,-1,1,2,0,-1,36,39,37,-1,37,38,36,-1,28,31,29,-1,29,30,28,-1,4,0,2,-1,2,5,4,-1,40,36,38,-1,38,41,40,-1,32,29,31,-1,31,33,32,-1,6,4,5,-1,5,7,6,-1,42,40,41,-1,41,43,42,-1,34,32,33,-1,33,35,34,-1,10,11,12,-1,12,11,13,-1,13,14,12,-1,15,18,16,-1,16,17,15,-1,19,20,13,-1,13,11,19,-1,21,22,19,-1,22,23,20,-1,20,19,22,-1,24,25,23,-1,23,22,24,-1,4,9,8,-1,8,0,4,-1,10,17,16,-1,16,11,10,-1,11,16,18,-1,18,19,11,-1,19,18,15,-1,15,21,19,-1,14,27,26,-1,26,12,14,-1]
Coordinate190 = x3d.Coordinate()

IndexedFaceSet189.coord = Coordinate190
TextureCoordinate191 = x3d.TextureCoordinate()

IndexedFaceSet189.texCoord = TextureCoordinate191

Shape185.geometry = IndexedFaceSet189

Transform184.children.append(Shape185)

HAnimSegment183.children.append(Transform184)

HAnimJoint182.children.append(HAnimSegment183)

HAnimJoint172.children.append(HAnimJoint182)

HAnimJoint162.children.append(HAnimJoint172)

HAnimJoint122.children.append(HAnimJoint162)
HAnimJoint192 = x3d.HAnimJoint()
HAnimJoint192.name = "vl5"
HAnimJoint192.DEF = "hanim_vl5"
HAnimJoint192.center = [0.000025,39.84,0.1163]
HAnimJoint192.ulimit = [0,0,0]
HAnimJoint192.llimit = [0,0,0]
HAnimSegment193 = x3d.HAnimSegment()
HAnimSegment193.name = "l5"
HAnimSegment193.DEF = "hanim_l5"
Transform194 = x3d.Transform()
Transform194.translation = [0.000025,39.84,0.1163]
Shape195 = x3d.Shape()
Appearance196 = x3d.Appearance()
Material197 = x3d.Material()
Material197.diffuseColor = [0.588,0.588,0.588]

Appearance196.material = Material197
ImageTexture198 = x3d.ImageTexture()
ImageTexture198.USE = "JuTextureAtlas"

Appearance196.texture = ImageTexture198

Shape195.appearance = Appearance196
IndexedFaceSet199 = x3d.IndexedFaceSet()
IndexedFaceSet199.coordIndex = [7,10,11,-1,11,9,7,-1,33,10,7,-1,34,10,33,-1,7,9,13,-1,13,12,7,-1,12,33,7,-1,11,8,9,-1,8,13,9,-1,33,12,0,-1,14,17,1,-1,14,1,0,-1,17,2,1,-1,16,42,17,-1,42,2,17,-1,42,16,15,-1,15,4,42,-1,11,16,8,-1,11,15,16,-1,11,6,15,-1,6,11,10,-1,34,6,10,-1,19,6,5,-1,22,16,17,-1,17,23,22,-1,23,17,14,-1,14,21,23,-1,23,21,20,-1,20,22,23,-1,13,21,14,-1,21,13,20,-1,8,20,13,-1,6,19,15,-1,18,15,19,-1,18,4,15,-1,52,4,18,-1,14,0,12,-1,13,14,12,-1,5,6,34,-1,3,5,34,-1,19,5,24,-1,24,25,19,-1,18,19,25,-1,25,26,18,-1,52,18,26,-1,26,27,52,-1,5,3,28,-1,28,24,5,-1,16,22,20,-1,20,8,16,-1,31,30,29,-1,29,32,31,-1,33,31,32,-1,34,33,32,-1,31,36,35,-1,35,30,31,-1,36,31,33,-1,29,30,37,-1,37,30,35,-1,33,0,36,-1,38,40,39,-1,38,0,40,-1,39,40,2,-1,41,39,42,-1,42,39,2,-1,42,4,43,-1,43,41,42,-1,29,37,41,-1,29,41,43,-1,29,43,44,-1,44,32,29,-1,34,32,44,-1,45,46,44,-1,48,47,39,-1,39,41,48,-1,47,49,38,-1,38,39,47,-1,47,48,50,-1,50,49,47,-1,35,38,49,-1,49,50,35,-1,37,35,50,-1,44,43,45,-1,51,45,43,-1,51,43,4,-1,52,51,4,-1,38,36,0,-1,35,36,38,-1,46,34,44,-1,3,34,46,-1,45,54,53,-1,53,46,45,-1,51,55,54,-1,54,45,51,-1,52,27,55,-1,55,51,52,-1,46,53,28,-1,28,3,46,-1,41,37,50,-1,50,48,41,-1,68,69,58,-1,58,56,68,-1,56,58,59,-1,59,57,56,-1,69,60,61,-1,61,58,69,-1,58,61,62,-1,62,59,58,-1,59,62,75,-1,75,72,59,-1,60,76,63,-1,63,61,60,-1,61,63,64,-1,64,62,61,-1,66,63,76,-1,76,65,66,-1,67,64,63,-1,63,66,67,-1,64,67,80,-1,80,78,64,-1,68,71,70,-1,70,69,68,-1,71,73,72,-1,72,70,71,-1,73,57,59,-1,59,72,73,-1,69,70,74,-1,74,60,69,-1,70,72,75,-1,75,74,70,-1,60,74,77,-1,77,76,60,-1,74,75,78,-1,78,77,74,-1,75,62,64,-1,64,78,75,-1,79,65,76,-1,76,77,79,-1,80,79,77,-1,77,78,80,-1,57,73,71,-1,57,71,68,-1,56,57,68,-1,80,67,66,-1,79,80,66,-1,65,79,66,-1]
IndexedFaceSet199.creaseAngle = 1.57
IndexedFaceSet199.texCoordIndex = [2,3,0,-1,0,1,2,-1,4,3,2,-1,5,3,4,-1,2,1,6,-1,6,7,2,-1,7,4,2,-1,0,8,1,-1,8,6,1,-1,4,7,9,-1,10,11,12,-1,10,12,9,-1,11,13,12,-1,14,15,11,-1,15,13,11,-1,15,14,16,-1,16,17,15,-1,0,14,8,-1,0,16,14,-1,0,18,16,-1,18,0,3,-1,5,18,3,-1,19,18,20,-1,22,14,11,-1,11,21,22,-1,21,11,10,-1,10,23,21,-1,21,23,24,-1,24,22,21,-1,6,23,10,-1,23,6,24,-1,8,24,6,-1,18,19,16,-1,25,16,19,-1,25,17,16,-1,26,17,25,-1,10,9,7,-1,6,10,7,-1,20,18,5,-1,27,20,5,-1,19,20,28,-1,28,29,19,-1,25,19,29,-1,29,30,25,-1,26,25,30,-1,30,31,26,-1,20,27,32,-1,32,28,20,-1,14,22,24,-1,24,8,14,-1,35,34,33,-1,33,36,35,-1,37,35,36,-1,38,37,36,-1,35,40,39,-1,39,34,35,-1,40,35,37,-1,33,34,41,-1,41,34,39,-1,37,42,40,-1,43,45,44,-1,43,42,45,-1,44,45,46,-1,47,44,48,-1,48,44,46,-1,48,50,49,-1,49,47,48,-1,33,41,47,-1,33,47,49,-1,33,49,51,-1,51,36,33,-1,38,36,51,-1,52,53,51,-1,55,54,44,-1,44,47,55,-1,54,56,43,-1,43,44,54,-1,54,55,57,-1,57,56,54,-1,39,43,56,-1,56,57,39,-1,41,39,57,-1,51,49,52,-1,58,52,49,-1,58,49,50,-1,59,58,50,-1,43,40,42,-1,39,40,43,-1,53,38,51,-1,60,38,53,-1,52,62,61,-1,61,53,52,-1,58,63,62,-1,62,52,58,-1,59,64,63,-1,63,58,59,-1,53,61,65,-1,65,60,53,-1,47,41,57,-1,57,55,47,-1,67,70,69,-1,69,66,67,-1,66,69,71,-1,71,68,66,-1,70,73,72,-1,72,69,70,-1,69,72,74,-1,74,71,69,-1,71,74,89,-1,89,85,71,-1,73,76,75,-1,75,72,73,-1,72,75,77,-1,77,74,72,-1,79,75,76,-1,76,78,79,-1,80,77,75,-1,75,79,80,-1,77,80,95,-1,95,92,77,-1,81,84,83,-1,83,82,81,-1,84,86,85,-1,85,83,84,-1,86,68,71,-1,71,85,86,-1,82,83,88,-1,88,87,82,-1,83,85,89,-1,89,88,83,-1,87,88,91,-1,91,90,87,-1,88,89,92,-1,92,91,88,-1,89,74,77,-1,77,92,89,-1,94,93,90,-1,90,91,94,-1,95,94,91,-1,91,92,95,-1,68,86,84,-1,68,84,81,-1,66,68,81,-1,95,80,79,-1,94,95,79,-1,78,94,79,-1]
Coordinate200 = x3d.Coordinate()

IndexedFaceSet199.coord = Coordinate200
TextureCoordinate201 = x3d.TextureCoordinate()

IndexedFaceSet199.texCoord = TextureCoordinate201

Shape195.geometry = IndexedFaceSet199

Transform194.children.append(Shape195)

HAnimSegment193.children.append(Transform194)

HAnimJoint192.children.append(HAnimSegment193)
HAnimJoint202 = x3d.HAnimJoint()
HAnimJoint202.name = "skullbase"
HAnimJoint202.DEF = "hanim_skullbase"
HAnimJoint202.center = [0.000025,56.07,-1.554]
HAnimJoint202.ulimit = [0,0,0]
HAnimJoint202.llimit = [0,0,0]
HAnimSegment203 = x3d.HAnimSegment()
HAnimSegment203.name = "skull"
HAnimSegment203.DEF = "hanim_skull"
Transform204 = x3d.Transform()
Transform204.translation = [0.000025,56.07,-1.554]
Shape205 = x3d.Shape()
Appearance206 = x3d.Appearance()
Material207 = x3d.Material()
Material207.diffuseColor = [0.588,0.588,0.588]

Appearance206.material = Material207
ImageTexture208 = x3d.ImageTexture()
ImageTexture208.USE = "JuTextureAtlas"

Appearance206.texture = ImageTexture208

Shape205.appearance = Appearance206
IndexedFaceSet209 = x3d.IndexedFaceSet()
IndexedFaceSet209.coordIndex = [66,67,10,-1,10,9,66,-1,67,66,0,-1,0,1,67,-1,9,10,8,-1,8,119,9,-1,2,11,5,-1,6,11,2,-1,69,12,68,-1,10,67,68,-1,68,12,10,-1,10,12,7,-1,7,8,10,-1,71,72,7,-1,7,12,71,-1,70,12,69,-1,70,71,12,-1,72,73,13,-1,13,7,72,-1,73,72,3,-1,3,4,73,-1,73,74,13,-1,66,9,149,-1,149,153,66,-1,119,149,9,-1,149,119,16,-1,16,15,149,-1,74,14,18,-1,18,13,74,-1,19,17,18,-1,18,14,19,-1,22,25,27,-1,27,21,22,-1,26,25,16,-1,27,25,26,-1,18,17,26,-1,22,23,28,-1,28,25,22,-1,25,28,15,-1,15,16,25,-1,65,153,149,-1,149,24,65,-1,15,24,149,-1,15,28,24,-1,28,23,24,-1,38,37,36,-1,36,34,38,-1,29,161,16,-1,16,119,29,-1,30,29,119,-1,119,164,30,-1,29,30,31,-1,18,161,13,-1,18,26,161,-1,17,27,26,-1,13,161,7,-1,7,161,8,-1,147,130,119,-1,160,161,130,-1,119,130,161,-1,161,131,119,-1,164,119,131,-1,131,132,164,-1,150,132,131,-1,32,33,26,-1,26,16,35,-1,32,26,35,-1,33,34,161,-1,161,26,33,-1,16,161,34,-1,34,36,35,-1,16,34,35,-1,37,35,36,-1,34,33,38,-1,37,38,33,-1,33,32,37,-1,35,37,32,-1,20,21,27,-1,41,20,27,-1,43,41,27,-1,43,27,44,-1,17,46,45,-1,17,45,39,-1,17,39,44,-1,17,44,27,-1,20,41,152,-1,39,43,44,-1,151,45,46,-1,52,47,39,-1,39,45,52,-1,51,49,41,-1,41,43,51,-1,49,50,152,-1,152,41,49,-1,47,51,43,-1,43,39,47,-1,48,52,45,-1,45,151,48,-1,58,53,47,-1,47,52,58,-1,57,55,49,-1,49,51,57,-1,53,57,51,-1,51,47,53,-1,55,56,50,-1,50,49,55,-1,54,58,52,-1,52,48,54,-1,64,59,53,-1,53,58,64,-1,63,61,55,-1,55,57,63,-1,59,63,57,-1,57,53,59,-1,61,62,56,-1,56,55,61,-1,60,64,58,-1,58,54,60,-1,65,148,153,-1,0,66,153,-1,153,148,0,-1,5,68,67,-1,67,1,5,-1,11,69,68,-1,68,5,11,-1,6,70,69,-1,69,11,6,-1,3,71,70,-1,70,6,3,-1,71,3,72,-1,14,74,73,-1,73,4,14,-1,75,78,77,-1,77,76,75,-1,0,77,78,-1,78,1,0,-1,79,75,76,-1,76,136,79,-1,2,5,80,-1,6,2,80,-1,81,83,82,-1,83,78,75,-1,75,82,83,-1,84,82,75,-1,75,79,84,-1,84,88,85,-1,85,82,84,-1,86,81,82,-1,86,82,85,-1,87,89,88,-1,88,84,87,-1,3,88,89,-1,89,4,3,-1,89,87,90,-1,163,76,77,-1,77,156,163,-1,136,76,163,-1,92,136,163,-1,163,93,92,-1,94,91,90,-1,90,87,94,-1,94,17,19,-1,19,91,94,-1,95,96,22,-1,22,21,95,-1,97,92,96,-1,95,97,96,-1,94,97,17,-1,98,23,22,-1,22,96,98,-1,93,98,96,-1,96,92,93,-1,163,156,65,-1,65,24,163,-1,93,163,24,-1,93,24,98,-1,98,24,23,-1,101,110,100,-1,100,99,101,-1,92,103,102,-1,102,136,92,-1,136,102,104,-1,104,165,136,-1,102,105,104,-1,94,87,103,-1,94,103,97,-1,17,97,95,-1,139,165,134,-1,87,84,103,-1,84,79,103,-1,154,139,135,-1,162,135,103,-1,139,103,135,-1,103,139,137,-1,165,137,136,-1,137,165,138,-1,157,137,138,-1,165,139,155,-1,107,92,97,-1,108,107,97,-1,108,97,109,-1,103,99,109,-1,109,97,103,-1,107,101,99,-1,92,107,99,-1,92,99,103,-1,110,101,107,-1,99,100,109,-1,109,100,110,-1,110,108,109,-1,107,108,110,-1,111,106,95,-1,95,21,20,-1,95,20,152,-1,111,95,152,-1,17,95,106,-1,17,106,112,-1,17,112,151,-1,17,151,46,-1,140,141,42,-1,112,106,111,-1,142,143,40,-1,65,156,148,-1,156,77,0,-1,0,148,156,-1,78,83,5,-1,5,1,78,-1,83,81,80,-1,80,5,83,-1,81,86,6,-1,6,80,81,-1,86,85,3,-1,3,6,86,-1,85,88,3,-1,89,90,91,-1,91,4,89,-1,112,113,48,-1,48,151,112,-1,152,50,114,-1,114,111,152,-1,111,114,113,-1,113,112,111,-1,113,115,54,-1,54,48,113,-1,50,56,116,-1,116,114,50,-1,114,116,115,-1,115,113,114,-1,115,117,60,-1,60,54,115,-1,56,62,118,-1,118,116,56,-1,116,118,117,-1,117,115,116,-1,122,125,158,-1,158,121,122,-1,120,121,158,-1,158,124,120,-1,122,123,119,-1,119,125,122,-1,129,127,126,-1,126,159,129,-1,126,120,124,-1,124,159,126,-1,128,127,129,-1,129,139,128,-1,124,144,146,-1,146,159,124,-1,144,124,158,-1,158,145,144,-1,125,133,145,-1,145,158,125,-1,159,146,155,-1,155,129,159,-1,155,139,129,-1,133,125,119,-1,4,19,14,-1,4,91,19,-1,167,168,169,-1,169,170,171,-1,167,169,171,-1,171,172,173,-1,171,173,166,-1,167,171,166,-1,166,59,64,-1,64,167,166,-1,64,60,168,-1,168,167,64,-1,60,117,169,-1,169,168,60,-1,117,118,170,-1,170,169,117,-1,118,62,171,-1,171,170,118,-1,62,61,172,-1,172,171,62,-1,61,63,173,-1,173,172,61,-1,63,59,166,-1,166,173,63,-1]
IndexedFaceSet209.creaseAngle = 1.57
IndexedFaceSet209.texCoordIndex = [55,58,53,-1,53,54,55,-1,58,55,56,-1,56,57,58,-1,54,53,59,-1,59,60,54,-1,61,62,63,-1,64,62,61,-1,65,66,67,-1,53,58,67,-1,67,66,53,-1,53,66,68,-1,68,59,53,-1,69,72,68,-1,68,66,69,-1,70,66,65,-1,70,69,66,-1,72,75,71,-1,71,68,72,-1,75,72,73,-1,73,74,75,-1,75,76,71,-1,30,1,4,-1,4,29,30,-1,2,4,1,-1,136,137,134,-1,134,135,136,-1,157,160,158,-1,158,159,157,-1,161,162,158,-1,158,160,161,-1,165,166,163,-1,163,164,165,-1,167,166,168,-1,163,166,167,-1,158,162,167,-1,165,171,170,-1,170,166,165,-1,166,170,172,-1,172,168,166,-1,139,145,136,-1,136,138,139,-1,135,138,136,-1,172,170,173,-1,170,171,173,-1,78,83,79,-1,79,77,78,-1,140,141,134,-1,134,137,140,-1,143,140,137,-1,137,142,143,-1,140,143,144,-1,158,174,159,-1,158,167,174,-1,162,163,167,-1,71,80,68,-1,68,80,59,-1,59,81,60,-1,59,80,81,-1,137,134,141,-1,141,140,137,-1,142,137,140,-1,140,143,142,-1,144,143,140,-1,177,178,167,-1,167,168,176,-1,177,167,176,-1,178,179,174,-1,174,167,178,-1,81,80,77,-1,77,79,82,-1,81,77,82,-1,83,82,79,-1,77,84,78,-1,83,78,84,-1,84,85,83,-1,82,83,85,-1,169,164,163,-1,181,169,163,-1,180,181,163,-1,180,163,175,-1,162,186,182,-1,162,182,183,-1,162,183,175,-1,162,175,163,-1,169,181,184,-1,183,180,175,-1,185,182,186,-1,16,13,6,-1,6,9,16,-1,17,15,8,-1,8,7,17,-1,14,20,11,-1,11,5,14,-1,13,17,7,-1,7,6,13,-1,18,19,12,-1,12,10,18,-1,24,21,13,-1,13,16,24,-1,25,23,15,-1,15,17,25,-1,21,25,17,-1,17,13,21,-1,22,28,20,-1,20,14,22,-1,26,27,19,-1,19,18,26,-1,207,208,205,-1,205,206,207,-1,211,212,209,-1,209,210,211,-1,208,211,210,-1,210,205,208,-1,212,214,213,-1,213,209,212,-1,216,207,206,-1,206,215,216,-1,139,146,145,-1,0,30,29,-1,29,3,0,-1,63,67,58,-1,58,57,63,-1,62,65,67,-1,67,63,62,-1,64,70,65,-1,65,62,64,-1,73,69,70,-1,70,64,73,-1,69,73,72,-1,86,76,75,-1,75,74,86,-1,87,90,88,-1,88,89,87,-1,56,88,90,-1,90,57,56,-1,91,87,89,-1,89,92,91,-1,61,63,93,-1,64,61,93,-1,94,95,96,-1,95,90,87,-1,87,96,95,-1,97,96,87,-1,87,91,97,-1,97,101,98,-1,98,96,97,-1,99,94,96,-1,99,96,98,-1,100,102,101,-1,101,97,100,-1,73,101,102,-1,102,74,73,-1,102,100,103,-1,35,31,32,-1,32,36,35,-1,34,31,35,-1,147,150,148,-1,148,149,147,-1,189,190,187,-1,187,188,189,-1,189,162,161,-1,161,190,189,-1,191,192,165,-1,165,164,191,-1,193,194,192,-1,191,193,192,-1,189,193,162,-1,195,171,165,-1,165,192,195,-1,196,195,192,-1,192,194,196,-1,148,156,139,-1,139,138,148,-1,149,148,138,-1,196,173,195,-1,195,173,171,-1,105,110,106,-1,106,104,105,-1,147,152,151,-1,151,150,147,-1,150,151,153,-1,153,154,150,-1,151,155,153,-1,189,188,197,-1,189,197,193,-1,162,193,191,-1,38,39,37,-1,100,97,107,-1,97,91,107,-1,91,92,108,-1,91,108,107,-1,150,152,147,-1,152,150,151,-1,154,151,150,-1,151,154,153,-1,155,151,153,-1,154,150,148,-1,199,194,193,-1,200,199,193,-1,200,193,201,-1,197,202,201,-1,201,193,197,-1,109,105,104,-1,108,109,104,-1,108,104,107,-1,110,105,109,-1,104,106,111,-1,111,106,110,-1,110,112,111,-1,109,112,110,-1,203,198,191,-1,191,164,169,-1,191,169,184,-1,203,191,184,-1,162,191,198,-1,162,198,204,-1,162,204,185,-1,162,185,186,-1,169,181,184,-1,204,198,203,-1,182,186,185,-1,139,156,146,-1,36,32,33,-1,33,40,36,-1,90,95,63,-1,63,57,90,-1,95,94,93,-1,93,63,95,-1,94,99,64,-1,64,93,94,-1,99,98,73,-1,73,64,99,-1,98,101,73,-1,102,103,113,-1,113,74,102,-1,41,44,43,-1,43,42,41,-1,45,48,47,-1,47,46,45,-1,46,47,44,-1,44,41,46,-1,44,50,49,-1,49,43,44,-1,48,52,51,-1,51,47,48,-1,47,51,50,-1,50,44,47,-1,217,218,216,-1,216,215,217,-1,213,214,219,-1,219,220,213,-1,220,219,218,-1,218,217,220,-1,117,118,115,-1,115,116,117,-1,120,116,115,-1,115,119,120,-1,117,122,121,-1,121,118,117,-1,125,126,123,-1,123,124,125,-1,123,120,119,-1,119,124,123,-1,128,126,125,-1,125,127,128,-1,119,130,129,-1,129,124,119,-1,130,119,115,-1,115,131,130,-1,118,132,131,-1,131,115,118,-1,124,129,133,-1,133,125,124,-1,133,127,125,-1,132,118,121,-1,74,114,86,-1,74,113,114,-1,222,223,224,-1,224,225,226,-1,222,224,226,-1,226,227,228,-1,226,228,221,-1,222,226,221,-1,221,208,207,-1,207,222,221,-1,207,216,223,-1,223,222,207,-1,216,218,224,-1,224,223,216,-1,218,219,225,-1,225,224,218,-1,219,214,226,-1,226,225,219,-1,214,212,227,-1,227,226,214,-1,212,211,228,-1,228,227,212,-1,211,208,221,-1,221,228,211,-1]
Coordinate210 = x3d.Coordinate()

IndexedFaceSet209.coord = Coordinate210
TextureCoordinate211 = x3d.TextureCoordinate()

IndexedFaceSet209.texCoord = TextureCoordinate211

Shape205.geometry = IndexedFaceSet209

Transform204.children.append(Shape205)

HAnimSegment203.children.append(Transform204)

HAnimJoint202.children.append(HAnimSegment203)

HAnimJoint192.children.append(HAnimJoint202)

HAnimJoint122.children.append(HAnimJoint192)

HAnimJoint32.children.append(HAnimJoint122)

HAnimHumanoid24.skeleton.append(HAnimJoint32)
HAnimJoint212 = x3d.HAnimJoint()
HAnimJoint212.USE = "hanim_humanoid_root"

HAnimHumanoid24.joints.append(HAnimJoint212)
HAnimJoint213 = x3d.HAnimJoint()
HAnimJoint213.USE = "hanim_sacroiliac"

HAnimHumanoid24.joints.append(HAnimJoint213)
HAnimJoint214 = x3d.HAnimJoint()
HAnimJoint214.USE = "hanim_skullbase"

HAnimHumanoid24.joints.append(HAnimJoint214)
HAnimJoint215 = x3d.HAnimJoint()
HAnimJoint215.USE = "hanim_vl5"

HAnimHumanoid24.joints.append(HAnimJoint215)
HAnimJoint216 = x3d.HAnimJoint()
HAnimJoint216.USE = "hanim_l_elbow"

HAnimHumanoid24.joints.append(HAnimJoint216)
HAnimJoint217 = x3d.HAnimJoint()
HAnimJoint217.USE = "hanim_r_elbow"

HAnimHumanoid24.joints.append(HAnimJoint217)
HAnimJoint218 = x3d.HAnimJoint()
HAnimJoint218.USE = "hanim_l_hip"

HAnimHumanoid24.joints.append(HAnimJoint218)
HAnimJoint219 = x3d.HAnimJoint()
HAnimJoint219.USE = "hanim_r_hip"

HAnimHumanoid24.joints.append(HAnimJoint219)
HAnimJoint220 = x3d.HAnimJoint()
HAnimJoint220.USE = "hanim_l_knee"

HAnimHumanoid24.joints.append(HAnimJoint220)
HAnimJoint221 = x3d.HAnimJoint()
HAnimJoint221.USE = "hanim_r_knee"

HAnimHumanoid24.joints.append(HAnimJoint221)
HAnimJoint222 = x3d.HAnimJoint()
HAnimJoint222.USE = "hanim_l_metatarsophalangeal_2"

HAnimHumanoid24.joints.append(HAnimJoint222)
HAnimJoint223 = x3d.HAnimJoint()
HAnimJoint223.USE = "hanim_r_metatarsophalangeal_2"

HAnimHumanoid24.joints.append(HAnimJoint223)
HAnimJoint224 = x3d.HAnimJoint()
HAnimJoint224.USE = "hanim_l_radiocarpal"

HAnimHumanoid24.joints.append(HAnimJoint224)
HAnimJoint225 = x3d.HAnimJoint()
HAnimJoint225.USE = "hanim_r_radiocarpal"

HAnimHumanoid24.joints.append(HAnimJoint225)
HAnimJoint226 = x3d.HAnimJoint()
HAnimJoint226.USE = "hanim_l_shoulder"

HAnimHumanoid24.joints.append(HAnimJoint226)
HAnimJoint227 = x3d.HAnimJoint()
HAnimJoint227.USE = "hanim_r_shoulder"

HAnimHumanoid24.joints.append(HAnimJoint227)
HAnimJoint228 = x3d.HAnimJoint()
HAnimJoint228.USE = "hanim_l_talocrural"

HAnimHumanoid24.joints.append(HAnimJoint228)
HAnimJoint229 = x3d.HAnimJoint()
HAnimJoint229.USE = "hanim_r_talocrural"

HAnimHumanoid24.joints.append(HAnimJoint229)
HAnimSegment230 = x3d.HAnimSegment()
HAnimSegment230.USE = "hanim_l5"

HAnimHumanoid24.segments.append(HAnimSegment230)
HAnimSegment231 = x3d.HAnimSegment()
HAnimSegment231.USE = "hanim_pelvis"

HAnimHumanoid24.segments.append(HAnimSegment231)
HAnimSegment232 = x3d.HAnimSegment()
HAnimSegment232.USE = "hanim_sacrum"

HAnimHumanoid24.segments.append(HAnimSegment232)
HAnimSegment233 = x3d.HAnimSegment()
HAnimSegment233.USE = "hanim_skull"

HAnimHumanoid24.segments.append(HAnimSegment233)
HAnimSegment234 = x3d.HAnimSegment()
HAnimSegment234.USE = "hanim_l_calf"

HAnimHumanoid24.segments.append(HAnimSegment234)
HAnimSegment235 = x3d.HAnimSegment()
HAnimSegment235.USE = "hanim_r_calf"

HAnimHumanoid24.segments.append(HAnimSegment235)
HAnimSegment236 = x3d.HAnimSegment()
HAnimSegment236.USE = "hanim_l_carpal"

HAnimHumanoid24.segments.append(HAnimSegment236)
HAnimSegment237 = x3d.HAnimSegment()
HAnimSegment237.USE = "hanim_r_carpal"

HAnimHumanoid24.segments.append(HAnimSegment237)
HAnimSegment238 = x3d.HAnimSegment()
HAnimSegment238.USE = "hanim_l_forearm"

HAnimHumanoid24.segments.append(HAnimSegment238)
HAnimSegment239 = x3d.HAnimSegment()
HAnimSegment239.USE = "hanim_r_forearm"

HAnimHumanoid24.segments.append(HAnimSegment239)
HAnimSegment240 = x3d.HAnimSegment()
HAnimSegment240.USE = "hanim_l_talus"

HAnimHumanoid24.segments.append(HAnimSegment240)
HAnimSegment241 = x3d.HAnimSegment()
HAnimSegment241.USE = "hanim_r_talus"

HAnimHumanoid24.segments.append(HAnimSegment241)
HAnimSegment242 = x3d.HAnimSegment()
HAnimSegment242.USE = "hanim_l_tarsal_proximal_phalanx_2"

HAnimHumanoid24.segments.append(HAnimSegment242)
HAnimSegment243 = x3d.HAnimSegment()
HAnimSegment243.USE = "hanim_r_tarsal_proximal_phalanx_2"

HAnimHumanoid24.segments.append(HAnimSegment243)
HAnimSegment244 = x3d.HAnimSegment()
HAnimSegment244.USE = "hanim_l_thigh"

HAnimHumanoid24.segments.append(HAnimSegment244)
HAnimSegment245 = x3d.HAnimSegment()
HAnimSegment245.USE = "hanim_r_thigh"

HAnimHumanoid24.segments.append(HAnimSegment245)
HAnimSegment246 = x3d.HAnimSegment()
HAnimSegment246.USE = "hanim_l_upperarm"

HAnimHumanoid24.segments.append(HAnimSegment246)
HAnimSegment247 = x3d.HAnimSegment()
HAnimSegment247.USE = "hanim_r_upperarm"

HAnimHumanoid24.segments.append(HAnimSegment247)

Scene20.children.append(HAnimHumanoid24)

X3D0.Scene = Scene20
f = open("../data/KoreanCharacter05Ju.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/KoreanCharacter05Ju.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
