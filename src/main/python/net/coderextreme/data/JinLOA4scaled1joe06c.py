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
meta3.content = "JinLOA4Scaled1joe6b.x3d"

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
meta8.content = "27 January 2023"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "modified"
meta9.content = "25 March 2024"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "modifiers"
meta10.content = "John and Joe"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "description"
meta11.content = " Articulated 3D game character designed with a general graphics tool,  then converted into an loa4 X3D HAnim model,  then this Scaled version drawn directly in default HAnim coordinate space, and added Sites"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "reference"
meta12.content = "KoreanCharacter00ReadMe.txt"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "reference"
meta13.content = "KoreanCharacterHumanMotion_Infotech2014_140706.pdf"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "reference"
meta14.content = "KoreanCharactersIllustrated.pdf"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "identifier"
meta15.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JinLOA4.x3d"

head1.children.append(meta15)
meta16 = x3d.meta()
meta16.name = "generator"
meta16.content = "3DS MAX, http://www.autodesk.com/products/autodesk-3ds-max/overview"

head1.children.append(meta16)
meta17 = x3d.meta()
meta17.name = "generator"
meta17.content = "Suwon HAnim Converter"

head1.children.append(meta17)
meta18 = x3d.meta()
meta18.name = "generator"
meta18.content = "joedwillyNotePad"

head1.children.append(meta18)
meta19 = x3d.meta()
meta19.name = "generator"
meta19.content = "Gnu Image Manipulation Program, http://www.gimp.org"

head1.children.append(meta19)
meta20 = x3d.meta()
meta20.name = "generator"
meta20.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta20)
meta21 = x3d.meta()
meta21.name = "license"
meta21.content = "../license.html"

head1.children.append(meta21)
"""Scaled 1:1, Added Animations"""
"""Added Sites"""

X3D0.head = head1
Scene22 = x3d.Scene()
WorldInfo23 = x3d.WorldInfo()
WorldInfo23.title = "Jin LOA4 Level1 All Joints, Segments, Sites"

Scene22.children.append(WorldInfo23)
NavigationInfo24 = x3d.NavigationInfo()
NavigationInfo24.speed = 1.5

Scene22.children.append(NavigationInfo24)
Viewpoint25 = x3d.Viewpoint()
Viewpoint25.centerOfRotation = [0,1,0]
Viewpoint25.description = "JinLOA4"
Viewpoint25.position = [0,1,3]

Scene22.children.append(Viewpoint25)
HAnimHumanoid26 = x3d.HAnimHumanoid()
HAnimHumanoid26.name = "JinLOA4"
HAnimHumanoid26.DEF = "hanim_JinLOA4"
HAnimHumanoid26.loa = 4
HAnimHumanoid26.version = "2.0"
MetadataSet27 = x3d.MetadataSet()
MetadataSet27.name = "HAnimHumanoid.info"
MetadataSet27.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"
MetadataString28 = x3d.MetadataString()
MetadataString28.name = "authorName"
MetadataString28.value = ["Jin Hoon Lee and Min Joo Lee, Chul Hee Jung and Myeong Won Lee"]

if MetadataSet27.value is None:
    MetadataSet27.value = []
MetadataSet27.value.append(MetadataString28)
MetadataString29 = x3d.MetadataString()
MetadataString29.name = "authorEmail"
MetadataString29.value = ["myeongwonlee@gmail.com"]

if MetadataSet27.value is None:
    MetadataSet27.value = []
MetadataSet27.value.append(MetadataString29)
MetadataString30 = x3d.MetadataString()
MetadataString30.name = "creationDate"
MetadataString30.value = ["31 March 2011"]

if MetadataSet27.value is None:
    MetadataSet27.value = []
MetadataSet27.value.append(MetadataString30)
MetadataString31 = x3d.MetadataString()
MetadataString31.name = "John and Joe"
MetadataString31.value = ["Modifiers"]

if MetadataSet27.value is None:
    MetadataSet27.value = []
MetadataSet27.value.append(MetadataString31)
MetadataString32 = x3d.MetadataString()
MetadataString32.name = "modificationDate"
MetadataString32.value = ["25 March 2024"]

if MetadataSet27.value is None:
    MetadataSet27.value = []
MetadataSet27.value.append(MetadataString32)
MetadataString33 = x3d.MetadataString()
MetadataString33.name = "gender"
MetadataString33.value = ["female"]

if MetadataSet27.value is None:
    MetadataSet27.value = []
MetadataSet27.value.append(MetadataString33)
MetadataFloat34 = x3d.MetadataFloat()
MetadataFloat34.name = "height"
MetadataFloat34.value = [1.5]

if MetadataSet27.value is None:
    MetadataSet27.value = []
MetadataSet27.value.append(MetadataFloat34)
MetadataString35 = x3d.MetadataString()
MetadataString35.name = "humanoidVersion"
MetadataString35.value = ["2.0"]

if MetadataSet27.value is None:
    MetadataSet27.value = []
MetadataSet27.value.append(MetadataString35)

HAnimHumanoid26.metadata = MetadataSet27
HAnimJoint36 = x3d.HAnimJoint()
HAnimJoint36.name = "humanoid_root"
HAnimJoint36.DEF = "hanim_humanoid_root"
HAnimJoint36.center = [0,0.826,-0.016]
HAnimJoint36.ulimit = [0,0,0]
HAnimJoint36.llimit = [0,0,0]
HAnimSegment37 = x3d.HAnimSegment()
HAnimSegment37.name = "sacrum"
HAnimSegment37.DEF = "hanim_sacrum"
Shape38 = x3d.Shape()
Shape38.DEF = "sacrum_Shape"
Appearance39 = x3d.Appearance()
Material40 = x3d.Material()
Material40.DEF = "SurfaceDefault"
Material40.diffuseColor = [0.588,0.588,0.588]

Appearance39.material = Material40
ImageTexture41 = x3d.ImageTexture()
ImageTexture41.DEF = "JinLOA4TextureAtlas"
ImageTexture41.url = ["images/Jin.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/images/Jin.png"]

Appearance39.texture = ImageTexture41

Shape38.appearance = Appearance39
IndexedFaceSet42 = x3d.IndexedFaceSet()
IndexedFaceSet42.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]
IndexedFaceSet42.creaseAngle = 3.14159
IndexedFaceSet42.texCoordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]
Coordinate43 = x3d.Coordinate()

IndexedFaceSet42.coord = Coordinate43
TextureCoordinate44 = x3d.TextureCoordinate()

IndexedFaceSet42.texCoord = TextureCoordinate44

Shape38.geometry = IndexedFaceSet42

HAnimSegment37.children.append(Shape38)
HAnimSite45 = x3d.HAnimSite()
HAnimSite45.DEF = "sacrum_Sites"
"""None"""

HAnimSegment37.children.append(HAnimSite45)

HAnimJoint36.children.append(HAnimSegment37)
HAnimJoint46 = x3d.HAnimJoint()
HAnimJoint46.name = "sacroiliac"
HAnimJoint46.DEF = "hanim_sacroiliac"
HAnimJoint46.center = [0,0.707,-0.016]
HAnimJoint46.ulimit = [0,0,0]
HAnimJoint46.llimit = [0,0,0]
HAnimSegment47 = x3d.HAnimSegment()
HAnimSegment47.name = "pelvis"
HAnimSegment47.DEF = "hanim_pelvis"
Shape48 = x3d.Shape()
Shape48.DEF = "pelvis_Shape"
Appearance49 = x3d.Appearance()
Material50 = x3d.Material()
Material50.USE = "SurfaceDefault"

Appearance49.material = Material50
ImageTexture51 = x3d.ImageTexture()
ImageTexture51.USE = "JinLOA4TextureAtlas"

Appearance49.texture = ImageTexture51

Shape48.appearance = Appearance49
IndexedFaceSet52 = x3d.IndexedFaceSet()
IndexedFaceSet52.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]
IndexedFaceSet52.creaseAngle = 3.14159
IndexedFaceSet52.texCoordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]
Coordinate53 = x3d.Coordinate()

IndexedFaceSet52.coord = Coordinate53
TextureCoordinate54 = x3d.TextureCoordinate()

IndexedFaceSet52.texCoord = TextureCoordinate54

Shape48.geometry = IndexedFaceSet52

HAnimSegment47.children.append(Shape48)
HAnimSite55 = x3d.HAnimSite()
HAnimSite55.DEF = "pelvis_Sites"
"""(r_iliocristale -0.1525 1.0628 0.0035) (r_trochanterion -0.1689 0.8419 0.0352) (l_iliocristale 0.1612 1.0537 0.0008) (l_trochanterion 0.1677 0.8336 0.0303) (r_asis -0.0887 1.0021 0.1112) (l_asis 0.0774 1.0190 -0.1151) (r_psis -0.0716 1.0190 -0.1138) (l_psis 0.0774 1.0190 -0.1151) (crotch 0.0034 0.8266 0.0257)"""

HAnimSegment47.children.append(HAnimSite55)

HAnimJoint46.children.append(HAnimSegment47)
HAnimJoint56 = x3d.HAnimJoint()
HAnimJoint56.name = "l_hip"
HAnimJoint56.DEF = "hanim_l_hip"
HAnimJoint56.center = [0.095,0.8266,-0.0183]
HAnimJoint56.ulimit = [0,0,0]
HAnimJoint56.llimit = [0,0,0]
HAnimSegment57 = x3d.HAnimSegment()
HAnimSegment57.name = "l_thigh"
HAnimSegment57.DEF = "hanim_l_thigh"
Shape58 = x3d.Shape()
Shape58.DEF = "l_thigh_Shape"
Appearance59 = x3d.Appearance()
Material60 = x3d.Material()
Material60.USE = "SurfaceDefault"

Appearance59.material = Material60
ImageTexture61 = x3d.ImageTexture()
ImageTexture61.USE = "JinLOA4TextureAtlas"

Appearance59.texture = ImageTexture61

Shape58.appearance = Appearance59
IndexedFaceSet62 = x3d.IndexedFaceSet()
IndexedFaceSet62.coordIndex = [47,46,45,-1,45,44,43,-1,45,43,42,-1,47,45,42,-1,48,47,42,-1,0,1,8,-1,8,7,0,-1,1,2,9,-1,9,8,1,-1,2,3,10,-1,10,9,2,-1,3,4,11,-1,11,10,3,-1,4,5,12,-1,12,11,4,-1,5,6,13,-1,13,12,5,-1,6,0,7,-1,7,13,6,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,12,19,-1,19,18,11,-1,12,13,20,-1,20,19,12,-1,13,7,14,-1,14,20,13,-1,14,15,22,-1,22,21,14,-1,15,16,23,-1,23,22,15,-1,16,17,24,-1,24,23,16,-1,17,18,25,-1,25,24,17,-1,18,19,26,-1,26,25,18,-1,19,20,27,-1,27,26,19,-1,20,14,21,-1,21,27,20,-1,56,57,58,-1,58,59,60,-1,58,60,61,-1,56,58,61,-1,62,56,61,-1,29,28,21,-1,21,22,29,-1,30,29,22,-1,22,23,30,-1,31,30,23,-1,23,24,31,-1,32,31,24,-1,24,25,32,-1,33,32,25,-1,25,26,33,-1,34,33,26,-1,26,27,34,-1,28,34,27,-1,27,21,28,-1,36,35,28,-1,28,29,36,-1,37,36,29,-1,29,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,35,41,34,-1,34,28,35,-1,42,43,1,-1,1,0,42,-1,43,44,2,-1,2,1,43,-1,44,45,3,-1,3,2,44,-1,45,46,4,-1,4,3,45,-1,46,47,5,-1,5,4,46,-1,47,48,6,-1,6,5,47,-1,48,42,0,-1,0,6,48,-1,50,49,35,-1,35,36,50,-1,51,50,36,-1,36,37,51,-1,52,51,37,-1,37,38,52,-1,53,52,38,-1,38,39,53,-1,54,53,39,-1,39,40,54,-1,55,54,40,-1,40,41,55,-1,49,55,41,-1,41,35,49,-1,57,56,49,-1,49,50,57,-1,58,57,50,-1,50,51,58,-1,59,58,51,-1,51,52,59,-1,60,59,52,-1,52,53,60,-1,61,60,53,-1,53,54,61,-1,62,61,54,-1,54,55,62,-1,56,62,55,-1,55,49,56,-1]
IndexedFaceSet62.creaseAngle = 3.14159
IndexedFaceSet62.texCoordIndex = [5,4,3,-1,3,2,0,-1,3,0,1,-1,5,3,1,-1,6,5,1,-1,7,10,8,-1,8,9,7,-1,10,12,11,-1,11,8,10,-1,12,14,13,-1,13,11,12,-1,14,16,15,-1,15,13,14,-1,16,18,17,-1,17,15,16,-1,18,20,19,-1,19,17,18,-1,20,7,9,-1,9,19,20,-1,9,8,21,-1,21,22,9,-1,8,11,23,-1,23,21,8,-1,11,13,24,-1,24,23,11,-1,13,15,25,-1,25,24,13,-1,15,17,26,-1,26,25,15,-1,17,19,27,-1,27,26,17,-1,19,9,22,-1,22,27,19,-1,22,21,28,-1,28,29,22,-1,21,23,30,-1,30,28,21,-1,23,24,31,-1,31,30,23,-1,24,25,32,-1,32,31,24,-1,25,26,33,-1,33,32,25,-1,26,27,34,-1,34,33,26,-1,27,22,29,-1,29,34,27,-1,42,43,44,-1,44,45,46,-1,44,46,47,-1,42,44,47,-1,48,42,47,-1,35,36,29,-1,29,28,35,-1,37,35,28,-1,28,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,36,41,34,-1,34,29,36,-1,51,52,49,-1,49,50,51,-1,54,51,50,-1,50,53,54,-1,56,54,53,-1,53,55,56,-1,58,56,55,-1,55,57,58,-1,60,58,57,-1,57,59,60,-1,62,60,59,-1,59,61,62,-1,52,62,61,-1,61,49,52,-1,1,0,10,-1,10,7,1,-1,0,2,12,-1,12,10,0,-1,2,3,14,-1,14,12,2,-1,3,4,16,-1,16,14,3,-1,4,5,18,-1,18,16,4,-1,5,6,20,-1,20,18,5,-1,6,1,7,-1,7,20,6,-1,63,64,52,-1,52,51,63,-1,65,63,51,-1,51,54,65,-1,66,65,54,-1,54,56,66,-1,67,66,56,-1,56,58,67,-1,68,67,58,-1,58,60,68,-1,69,68,60,-1,60,62,69,-1,64,69,62,-1,62,52,64,-1,43,42,64,-1,64,63,43,-1,44,43,63,-1,63,65,44,-1,45,44,65,-1,65,66,45,-1,46,45,66,-1,66,67,46,-1,47,46,67,-1,67,68,47,-1,48,47,68,-1,68,69,48,-1,42,48,69,-1,69,64,42,-1]
Coordinate63 = x3d.Coordinate()

IndexedFaceSet62.coord = Coordinate63
TextureCoordinate64 = x3d.TextureCoordinate()

IndexedFaceSet62.texCoord = TextureCoordinate64

Shape58.geometry = IndexedFaceSet62

HAnimSegment57.children.append(Shape58)
HAnimSite65 = x3d.HAnimSite()
HAnimSite65.DEF = "l_thigh_Sites"
"""(l_knee_crease 0.0993 0.4881 -0.0309) (l_femoral_medial_epicondyles 0.0398 0.4946 0.0303) (l_femoral_lateral_epicondyles 0.1598 0.4967 0.0297) (l_suprapatella x y z)"""

HAnimSegment57.children.append(HAnimSite65)

HAnimJoint56.children.append(HAnimSegment57)
HAnimJoint66 = x3d.HAnimJoint()
HAnimJoint66.name = "l_knee"
HAnimJoint66.DEF = "hanim_l_knee"
HAnimJoint66.center = [0.09261001,0.408825,-0.01943775]
HAnimJoint66.ulimit = [0,0,0]
HAnimJoint66.llimit = [0,0,0]
HAnimSegment67 = x3d.HAnimSegment()
HAnimSegment67.name = "l_calf"
HAnimSegment67.DEF = "hanim_l_calf"
Shape68 = x3d.Shape()
Shape68.DEF = "l_calf_Shape"
Appearance69 = x3d.Appearance()
Material70 = x3d.Material()
Material70.USE = "SurfaceDefault"

Appearance69.material = Material70
ImageTexture71 = x3d.ImageTexture()
ImageTexture71.USE = "JinLOA4TextureAtlas"

Appearance69.texture = ImageTexture71

Shape68.appearance = Appearance69
IndexedFaceSet72 = x3d.IndexedFaceSet()
IndexedFaceSet72.coordIndex = [4,3,2,-1,5,4,2,-1,2,1,0,-1,5,2,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1]
IndexedFaceSet72.creaseAngle = 3.14159
IndexedFaceSet72.texCoordIndex = [4,3,2,-1,5,4,2,-1,2,1,0,-1,5,2,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1]
Coordinate73 = x3d.Coordinate()

IndexedFaceSet72.coord = Coordinate73
TextureCoordinate74 = x3d.TextureCoordinate()

IndexedFaceSet72.texCoord = TextureCoordinate74

Shape68.geometry = IndexedFaceSet72

HAnimSegment67.children.append(Shape68)
HAnimSite75 = x3d.HAnimSite()
HAnimSite75.DEF = "l_calf_Sites"
"""(l_tibiale x y z) (l_medial_malleolus 0.0890 0.0716 -0.0881) (l_lateral_malleolus 0.1308 0.0597 -0.1032)"""

HAnimSegment67.children.append(HAnimSite75)

HAnimJoint66.children.append(HAnimSegment67)
HAnimJoint76 = x3d.HAnimJoint()
HAnimJoint76.name = "l_talocrural"
HAnimJoint76.DEF = "hanim_l_talocrural"
HAnimJoint76.center = [0.08883,0.09544501,-0.010451251]
HAnimJoint76.ulimit = [0,0,0]
HAnimJoint76.llimit = [0,0,0]
HAnimSegment77 = x3d.HAnimSegment()
HAnimSegment77.name = "l_talus"
HAnimSegment77.DEF = "hanim_l_talus"
Shape78 = x3d.Shape()
Shape78.DEF = "l_talus_Shape"
Appearance79 = x3d.Appearance()
Material80 = x3d.Material()
Material80.USE = "SurfaceDefault"

Appearance79.material = Material80
ImageTexture81 = x3d.ImageTexture()
ImageTexture81.USE = "JinLOA4TextureAtlas"

Appearance79.texture = ImageTexture81

Shape78.appearance = Appearance79
IndexedFaceSet82 = x3d.IndexedFaceSet()
IndexedFaceSet82.coordIndex = [13,34,21,-1,21,15,13,-1,9,20,21,-1,21,34,9,-1,0,2,14,-1,14,15,0,-1,30,3,16,-1,16,33,30,-1,3,4,25,-1,25,16,3,-1,22,5,18,-1,18,17,22,-1,5,6,29,-1,29,18,5,-1,6,27,19,-1,7,1,21,-1,21,20,7,-1,1,0,15,-1,15,21,1,-1,15,14,32,-1,32,13,15,-1,33,16,12,-1,12,11,33,-1,25,23,12,-1,12,16,25,-1,17,18,10,-1,10,24,17,-1,18,29,28,-1,28,10,18,-1,19,27,26,-1,26,8,19,-1,4,22,17,-1,17,25,4,-1,25,17,24,-1,24,23,25,-1,20,9,26,-1,26,27,20,-1,6,7,20,-1,20,27,6,-1,29,19,8,-1,8,28,29,-1,6,19,29,-1,1,31,0,-1,0,31,2,-1,31,3,30,-1,3,31,4,-1,4,31,22,-1,22,31,5,-1,5,31,6,-1,6,31,7,-1,7,31,1,-1,2,31,30,-1,14,2,30,-1,30,33,14,-1,32,14,33,-1,33,11,32,-1,35,46,45,-1,45,44,43,-1,43,42,41,-1,41,40,39,-1,43,41,39,-1,45,43,39,-1,35,45,39,-1,39,38,37,-1,35,39,37,-1,36,35,37,-1,26,35,36,-1,36,8,26,-1,8,36,37,-1,37,28,8,-1,28,37,38,-1,38,10,28,-1,10,38,39,-1,39,24,10,-1,24,39,40,-1,40,23,24,-1,23,40,41,-1,41,12,23,-1,12,41,42,-1,42,11,12,-1,11,42,43,-1,43,32,11,-1,32,43,44,-1,44,13,32,-1,13,44,45,-1,45,34,13,-1,34,45,46,-1,46,9,34,-1,9,46,35,-1,35,26,9,-1]
IndexedFaceSet82.creaseAngle = 3.14159
IndexedFaceSet82.texCoordIndex = [5,34,27,-1,27,12,5,-1,7,28,27,-1,27,34,7,-1,9,10,11,-1,11,12,9,-1,30,13,14,-1,14,33,30,-1,13,15,16,-1,16,14,13,-1,17,18,19,-1,19,20,17,-1,18,21,22,-1,22,19,18,-1,21,23,24,-1,25,26,27,-1,27,28,25,-1,26,9,12,-1,12,27,26,-1,12,11,32,-1,32,5,12,-1,33,14,4,-1,4,3,33,-1,16,8,4,-1,4,14,16,-1,20,19,2,-1,2,6,20,-1,19,22,29,-1,29,2,19,-1,24,23,1,-1,1,0,24,-1,15,17,20,-1,20,16,15,-1,16,20,6,-1,6,8,16,-1,28,7,1,-1,1,23,28,-1,21,25,28,-1,28,23,21,-1,22,24,0,-1,0,29,22,-1,21,24,22,-1,26,31,9,-1,9,31,10,-1,31,13,30,-1,13,31,15,-1,15,31,17,-1,17,31,18,-1,18,31,21,-1,21,31,25,-1,25,31,26,-1,10,31,30,-1,11,10,30,-1,30,33,11,-1,32,11,33,-1,33,3,32,-1,35,46,45,-1,45,44,43,-1,43,42,41,-1,41,40,39,-1,43,41,39,-1,45,43,39,-1,35,45,39,-1,39,38,37,-1,35,39,37,-1,36,35,37,-1,1,35,36,-1,36,0,1,-1,0,36,37,-1,37,29,0,-1,29,37,38,-1,38,2,29,-1,2,38,39,-1,39,6,2,-1,6,39,40,-1,40,8,6,-1,8,40,41,-1,41,4,8,-1,4,41,42,-1,42,3,4,-1,3,42,43,-1,43,32,3,-1,32,43,44,-1,44,5,32,-1,5,44,45,-1,45,34,5,-1,34,45,46,-1,46,7,34,-1,7,46,35,-1,35,1,7,-1]
Coordinate83 = x3d.Coordinate()

IndexedFaceSet82.coord = Coordinate83
TextureCoordinate84 = x3d.TextureCoordinate()

IndexedFaceSet82.texCoord = TextureCoordinate84

Shape78.geometry = IndexedFaceSet82

HAnimSegment77.children.append(Shape78)
HAnimSite85 = x3d.HAnimSite()
HAnimSite85.DEF = "l_talus_Sites"
"""(l_sphyrion 0.0890 0.0575 -0.0943) (l_calcaneous_posterior 0.0974 0.0259 -0.1171)"""

HAnimSegment77.children.append(HAnimSite85)

HAnimJoint76.children.append(HAnimSegment77)
HAnimJoint86 = x3d.HAnimJoint()
HAnimJoint86.name = "l_talocalcaneonavicular"
HAnimJoint86.DEF = "hanim_l_talocalcaneonavicular"
HAnimJoint86.center = [0.07830001,0.036900003,0.0048645]
HAnimJoint86.ulimit = [0,0,0]
HAnimJoint86.llimit = [0,0,0]
HAnimSegment87 = x3d.HAnimSegment()
HAnimSegment87.name = "l_navicular"
HAnimSegment87.DEF = "hanim_l_navicular"
Shape88 = x3d.Shape()
Shape88.DEF = "l_navicular_Shape"
Appearance89 = x3d.Appearance()
Material90 = x3d.Material()
Material90.USE = "SurfaceDefault"

Appearance89.material = Material90
ImageTexture91 = x3d.ImageTexture()
ImageTexture91.USE = "JinLOA4TextureAtlas"

Appearance89.texture = ImageTexture91

Shape88.appearance = Appearance89
IndexedFaceSet92 = x3d.IndexedFaceSet()
IndexedFaceSet92.coordIndex = [7,12,11,-1,11,6,7,-1,1,2,18,-1,18,17,1,-1,12,7,5,-1,5,10,12,-1,2,6,11,-1,5,0,13,-1,13,10,5,-1,1,17,14,-1,14,3,1,-1,11,18,2,-1,4,8,16,-1,16,15,4,-1,8,9,16,-1,3,14,16,-1,16,9,3,-1,24,23,22,-1,22,21,20,-1,24,22,20,-1,20,19,28,-1,24,20,28,-1,28,27,26,-1,24,28,26,-1,25,24,26,-1,38,43,42,-1,42,39,38,-1,37,36,35,-1,37,35,34,-1,34,33,32,-1,37,34,32,-1,32,31,30,-1,37,32,30,-1,37,30,29,-1,1,19,20,-1,20,2,1,-1,2,20,21,-1,21,6,2,-1,6,21,22,-1,22,7,6,-1,7,22,23,-1,23,5,7,-1,5,23,24,-1,24,0,5,-1,38,45,44,-1,44,43,38,-1,4,25,26,-1,26,8,4,-1,8,26,27,-1,27,9,8,-1,9,27,28,-1,28,3,9,-1,3,28,19,-1,19,1,3,-1,10,29,30,-1,30,12,10,-1,12,30,31,-1,31,11,12,-1,11,31,32,-1,32,18,11,-1,18,32,33,-1,33,17,18,-1,17,33,34,-1,34,14,17,-1,14,34,35,-1,35,16,14,-1,16,35,36,-1,36,15,16,-1,42,41,40,-1,40,39,42,-1,13,37,29,-1,29,10,13,-1,0,38,39,-1,39,13,0,-1,13,39,40,-1,40,37,13,-1,37,40,41,-1,41,36,37,-1,36,41,42,-1,42,15,36,-1,15,42,43,-1,43,4,15,-1,4,43,44,-1,44,25,4,-1,25,44,45,-1,45,24,25,-1,24,45,38,-1,38,0,24,-1]
IndexedFaceSet92.creaseAngle = 3.14159
IndexedFaceSet92.texCoordIndex = [7,12,11,-1,11,6,7,-1,1,2,18,-1,18,17,1,-1,12,7,5,-1,5,10,12,-1,2,6,11,-1,5,0,13,-1,13,10,5,-1,1,17,14,-1,14,3,1,-1,11,18,2,-1,4,8,16,-1,16,15,4,-1,8,9,16,-1,3,14,16,-1,16,9,3,-1,24,23,22,-1,22,21,20,-1,24,22,20,-1,20,19,28,-1,24,20,28,-1,28,27,26,-1,24,28,26,-1,25,24,26,-1,38,43,42,-1,42,39,38,-1,37,36,35,-1,37,35,34,-1,34,33,32,-1,37,34,32,-1,32,31,30,-1,37,32,30,-1,37,30,29,-1,1,19,20,-1,20,2,1,-1,2,20,21,-1,21,6,2,-1,6,21,22,-1,22,7,6,-1,7,22,23,-1,23,5,7,-1,5,23,24,-1,24,0,5,-1,38,45,44,-1,44,43,38,-1,4,25,26,-1,26,8,4,-1,8,26,27,-1,27,9,8,-1,9,27,28,-1,28,3,9,-1,3,28,19,-1,19,1,3,-1,10,29,30,-1,30,12,10,-1,12,30,31,-1,31,11,12,-1,11,31,32,-1,32,18,11,-1,18,32,33,-1,33,17,18,-1,17,33,34,-1,34,14,17,-1,14,34,35,-1,35,16,14,-1,16,35,36,-1,36,15,16,-1,42,41,40,-1,40,39,42,-1,13,37,29,-1,29,10,13,-1,0,38,39,-1,39,13,0,-1,13,39,40,-1,40,37,13,-1,37,40,41,-1,41,36,37,-1,36,41,42,-1,42,15,36,-1,15,42,43,-1,43,4,15,-1,4,43,44,-1,44,25,4,-1,25,44,45,-1,45,24,25,-1,24,45,38,-1,38,0,24,-1]
Coordinate93 = x3d.Coordinate()

IndexedFaceSet92.coord = Coordinate93
TextureCoordinate94 = x3d.TextureCoordinate()

IndexedFaceSet92.texCoord = TextureCoordinate94

Shape88.geometry = IndexedFaceSet92

HAnimSegment87.children.append(Shape88)
HAnimSite95 = x3d.HAnimSite()
HAnimSite95.DEF = "l_navicular_Sites"
"""None"""

HAnimSegment87.children.append(HAnimSite95)

HAnimJoint86.children.append(HAnimSegment87)
HAnimJoint96 = x3d.HAnimJoint()
HAnimJoint96.name = "l_cuneonavicular_1"
HAnimJoint96.DEF = "hanim_l_cuneonavicular_1"
HAnimJoint96.center = [0.067365,0.032107502,0.018391501]
HAnimJoint96.ulimit = [0,0,0]
HAnimJoint96.llimit = [0,0,0]
HAnimSegment97 = x3d.HAnimSegment()
HAnimSegment97.name = "l_cuneiform_1"
HAnimSegment97.DEF = "hanim_1"
Shape98 = x3d.Shape()
Shape98.DEF = "l_cuneiform_1_Shape"
Appearance99 = x3d.Appearance()
Material100 = x3d.Material()
Material100.USE = "SurfaceDefault"

Appearance99.material = Material100
ImageTexture101 = x3d.ImageTexture()
ImageTexture101.USE = "JinLOA4TextureAtlas"

Appearance99.texture = ImageTexture101

Shape98.appearance = Appearance99
IndexedFaceSet102 = x3d.IndexedFaceSet()
IndexedFaceSet102.coordIndex = [0,12,4,-1,1,0,6,-1,6,7,1,-1,10,12,0,-1,0,1,10,-1,1,2,11,-1,11,10,1,-1,8,3,2,-1,2,5,8,-1,11,2,13,-1,12,15,4,-1,9,6,0,-1,0,4,9,-1,1,7,5,-1,5,2,1,-1,3,14,13,-1,13,2,3,-1,24,23,22,-1,25,24,22,-1,28,25,22,-1,15,12,10,-1,10,11,13,-1,15,10,13,-1,14,15,13,-1,16,19,18,-1,18,17,16,-1,21,20,19,-1,19,16,21,-1,3,16,17,-1,17,14,3,-1,14,17,18,-1,18,15,14,-1,15,18,19,-1,19,4,15,-1,4,19,20,-1,20,9,4,-1,28,27,26,-1,26,25,28,-1,8,21,16,-1,16,3,8,-1,6,22,23,-1,23,7,6,-1,7,23,24,-1,24,5,7,-1,5,24,25,-1,25,8,5,-1,8,25,26,-1,26,21,8,-1,21,26,27,-1,27,20,21,-1,20,27,28,-1,28,9,20,-1,9,28,22,-1,22,6,9,-1]
IndexedFaceSet102.creaseAngle = 3.14159
IndexedFaceSet102.texCoordIndex = [0,12,1,-1,2,0,6,-1,6,7,2,-1,10,12,0,-1,0,2,10,-1,2,3,11,-1,11,10,2,-1,8,4,3,-1,3,5,8,-1,11,3,13,-1,12,15,1,-1,9,6,0,-1,0,1,9,-1,2,7,5,-1,5,3,2,-1,4,14,13,-1,13,3,4,-1,24,23,22,-1,25,24,22,-1,28,25,22,-1,15,12,10,-1,10,11,13,-1,15,10,13,-1,14,15,13,-1,16,19,18,-1,18,17,16,-1,21,20,19,-1,19,16,21,-1,4,16,17,-1,17,14,4,-1,14,17,18,-1,18,15,14,-1,15,18,19,-1,19,1,15,-1,1,19,20,-1,20,9,1,-1,28,27,26,-1,26,25,28,-1,8,21,16,-1,16,4,8,-1,6,22,23,-1,23,7,6,-1,7,23,24,-1,24,5,7,-1,5,24,25,-1,25,8,5,-1,8,25,26,-1,26,21,8,-1,21,26,27,-1,27,20,21,-1,20,27,28,-1,28,9,20,-1,9,28,22,-1,22,6,9,-1]
Coordinate103 = x3d.Coordinate()

IndexedFaceSet102.coord = Coordinate103
TextureCoordinate104 = x3d.TextureCoordinate()

IndexedFaceSet102.texCoord = TextureCoordinate104

Shape98.geometry = IndexedFaceSet102

HAnimSegment97.children.append(Shape98)
HAnimSite105 = x3d.HAnimSite()
HAnimSite105.DEF = "l_cuneiform_1_Sites"
"""None"""

HAnimSegment97.children.append(HAnimSite105)

HAnimJoint96.children.append(HAnimSegment97)
HAnimJoint106 = x3d.HAnimJoint()
HAnimJoint106.name = "l_tarsometatarsal_1"
HAnimJoint106.DEF = "hanim_l_tarsometatarsal_1"
HAnimJoint106.center = [0.06462,0.023242502,0.04419]
HAnimJoint106.ulimit = [0,0,0]
HAnimJoint106.llimit = [0,0,0]
HAnimSegment107 = x3d.HAnimSegment()
HAnimSegment107.name = "l_metatarsal_1"
HAnimSegment107.DEF = "hanim_l_metatarsal_1"
Shape108 = x3d.Shape()
Shape108.DEF = "l_metatarsal_1_Shape"
Appearance109 = x3d.Appearance()
Material110 = x3d.Material()
Material110.USE = "SurfaceDefault"

Appearance109.material = Material110
ImageTexture111 = x3d.ImageTexture()
ImageTexture111.USE = "JinLOA4TextureAtlas"

Appearance109.texture = ImageTexture111

Shape108.appearance = Appearance109
IndexedFaceSet112 = x3d.IndexedFaceSet()
IndexedFaceSet112.coordIndex = [0,11,14,-1,5,7,2,-1,2,0,5,-1,1,10,9,-1,9,2,1,-1,15,8,20,-1,20,23,15,-1,3,4,19,-1,19,21,3,-1,13,4,10,-1,10,18,13,-1,12,1,6,-1,6,16,12,-1,6,1,2,-1,2,7,6,-1,5,0,14,-1,14,17,5,-1,10,4,3,-1,3,9,10,-1,9,11,0,-1,0,2,9,-1,10,1,12,-1,12,18,10,-1,8,11,9,-1,9,3,8,-1,8,15,14,-1,14,11,8,-1,21,20,8,-1,8,3,21,-1,13,22,19,-1,19,4,13,-1,34,33,39,-1,34,39,36,-1,34,36,35,-1,42,41,40,-1,42,40,46,-1,45,42,46,-1,31,30,29,-1,29,32,31,-1,32,29,24,-1,24,29,28,-1,28,25,24,-1,25,28,27,-1,27,26,25,-1,18,24,25,-1,25,13,18,-1,13,25,26,-1,26,22,13,-1,45,44,43,-1,43,42,45,-1,23,27,28,-1,28,15,23,-1,15,28,29,-1,29,14,15,-1,14,29,30,-1,30,17,14,-1,39,38,37,-1,37,36,39,-1,16,31,32,-1,32,12,16,-1,12,32,24,-1,24,18,12,-1,5,33,34,-1,34,7,5,-1,7,34,35,-1,35,6,7,-1,6,35,36,-1,36,16,6,-1,16,36,37,-1,37,31,16,-1,31,37,38,-1,38,30,31,-1,30,38,39,-1,39,17,30,-1,17,39,33,-1,33,5,17,-1,21,40,41,-1,41,20,21,-1,20,41,42,-1,42,23,20,-1,23,42,43,-1,43,27,23,-1,27,43,44,-1,44,26,27,-1,26,44,45,-1,45,22,26,-1,22,45,46,-1,46,19,22,-1,19,46,40,-1,40,21,19,-1]
IndexedFaceSet112.creaseAngle = 3.14159
IndexedFaceSet112.texCoordIndex = [1,11,14,-1,5,7,2,-1,2,1,5,-1,3,10,9,-1,9,2,3,-1,15,8,20,-1,20,23,15,-1,0,4,19,-1,19,21,0,-1,13,4,10,-1,10,18,13,-1,12,3,6,-1,6,16,12,-1,6,3,2,-1,2,7,6,-1,5,1,14,-1,14,17,5,-1,10,4,0,-1,0,9,10,-1,9,11,1,-1,1,2,9,-1,10,3,12,-1,12,18,10,-1,8,11,9,-1,9,0,8,-1,8,15,14,-1,14,11,8,-1,21,20,8,-1,8,0,21,-1,13,22,19,-1,19,4,13,-1,34,33,39,-1,34,39,36,-1,34,36,35,-1,42,41,40,-1,42,40,46,-1,45,42,46,-1,31,30,29,-1,29,32,31,-1,32,14,24,-1,24,29,28,-1,28,25,24,-1,25,28,27,-1,27,26,25,-1,18,24,25,-1,25,13,18,-1,13,25,26,-1,26,22,13,-1,45,44,43,-1,43,42,45,-1,23,27,28,-1,28,15,23,-1,15,28,29,-1,29,14,15,-1,14,29,30,-1,30,17,14,-1,39,38,37,-1,37,36,39,-1,16,31,32,-1,32,12,16,-1,12,32,24,-1,24,18,12,-1,5,33,34,-1,34,7,5,-1,7,34,35,-1,35,6,7,-1,6,35,36,-1,36,16,6,-1,16,36,37,-1,37,31,16,-1,31,37,38,-1,38,30,31,-1,30,38,39,-1,39,17,30,-1,17,39,33,-1,33,5,17,-1,21,40,41,-1,41,20,21,-1,20,41,42,-1,42,23,20,-1,23,42,43,-1,43,27,23,-1,27,43,44,-1,44,26,27,-1,26,44,45,-1,45,22,26,-1,22,45,46,-1,46,19,22,-1,19,46,40,-1,40,21,19,-1]
Coordinate113 = x3d.Coordinate()

IndexedFaceSet112.coord = Coordinate113
TextureCoordinate114 = x3d.TextureCoordinate()

IndexedFaceSet112.texCoord = TextureCoordinate114

Shape108.geometry = IndexedFaceSet112

HAnimSegment107.children.append(Shape108)
HAnimSite115 = x3d.HAnimSite()
HAnimSite115.DEF = "l_metatarsal_1_Sites"
"""None"""

HAnimSegment107.children.append(HAnimSite115)

HAnimJoint106.children.append(HAnimSegment107)
HAnimJoint116 = x3d.HAnimJoint()
HAnimJoint116.name = "l_metatarsophalangeal_1"
HAnimJoint116.DEF = "hanim_l_metatarsophalangeal_1"
HAnimJoint116.center = [0.0621225,0.014424751,0.0936225]
HAnimJoint116.ulimit = [0,0,0]
HAnimJoint116.llimit = [0,0,0]
HAnimSegment117 = x3d.HAnimSegment()
HAnimSegment117.name = "l_tarsal_proximal_phalanx_1"
HAnimSegment117.DEF = "hanim_l_tarsal_proximal_phalanx_1"
Shape118 = x3d.Shape()
Shape118.DEF = "l_tarsal_proximal_phalanx_1_Shape"
Appearance119 = x3d.Appearance()
Material120 = x3d.Material()
Material120.USE = "SurfaceDefault"

Appearance119.material = Material120
ImageTexture121 = x3d.ImageTexture()
ImageTexture121.USE = "JinLOA4TextureAtlas"

Appearance119.texture = ImageTexture121

Shape118.appearance = Appearance119
IndexedFaceSet122 = x3d.IndexedFaceSet()
IndexedFaceSet122.coordIndex = [9,16,17,-1,17,10,9,-1,11,8,2,-1,2,1,11,-1,7,3,2,-1,2,8,7,-1,7,13,4,-1,4,3,7,-1,12,5,4,-1,4,13,12,-1,5,12,0,-1,0,6,5,-1,0,11,1,-1,1,6,0,-1,14,15,19,-1,19,20,14,-1,14,10,17,-1,17,15,14,-1,9,21,18,-1,18,16,9,-1,7,8,9,-1,9,10,7,-1,8,11,21,-1,21,9,8,-1,12,13,14,-1,14,20,12,-1,13,7,10,-1,10,14,13,-1,11,22,21,-1,0,12,23,-1,23,24,0,-1,11,0,24,-1,24,22,11,-1,23,12,20,-1,37,42,41,-1,41,40,39,-1,37,41,39,-1,38,37,39,-1,35,34,33,-1,35,33,32,-1,31,35,32,-1,27,26,25,-1,28,27,25,-1,28,25,29,-1,35,31,30,-1,30,36,35,-1,17,25,26,-1,26,15,17,-1,15,26,27,-1,27,19,15,-1,19,27,28,-1,28,18,19,-1,18,28,29,-1,29,16,18,-1,16,29,25,-1,25,17,16,-1,19,30,31,-1,31,20,19,-1,20,31,32,-1,32,23,20,-1,23,32,33,-1,33,24,23,-1,24,33,34,-1,34,22,24,-1,22,34,35,-1,35,21,22,-1,21,35,36,-1,36,18,21,-1,18,36,30,-1,30,19,18,-1,2,37,38,-1,38,1,2,-1,1,38,39,-1,39,6,1,-1,6,39,40,-1,40,5,6,-1,5,40,41,-1,41,4,5,-1,4,41,42,-1,42,3,4,-1,3,42,37,-1,37,2,3,-1]
IndexedFaceSet122.creaseAngle = 3.14159
IndexedFaceSet122.texCoordIndex = [2,28,29,-1,29,1,2,-1,11,13,4,-1,4,5,11,-1,10,6,4,-1,4,13,10,-1,10,12,7,-1,7,6,10,-1,14,8,7,-1,7,12,14,-1,8,14,3,-1,3,9,8,-1,3,11,5,-1,5,9,3,-1,0,27,31,-1,31,33,0,-1,0,1,29,-1,29,27,0,-1,2,35,30,-1,30,28,2,-1,15,16,17,-1,17,18,15,-1,16,19,34,-1,34,17,16,-1,20,21,22,-1,22,32,20,-1,21,23,24,-1,24,22,21,-1,19,36,34,-1,25,20,37,-1,37,39,25,-1,19,26,38,-1,38,36,19,-1,37,20,32,-1,52,57,56,-1,56,55,54,-1,52,56,54,-1,53,52,54,-1,50,49,48,-1,50,48,47,-1,46,50,47,-1,42,41,40,-1,43,42,40,-1,43,40,44,-1,50,46,45,-1,45,51,50,-1,29,40,41,-1,41,27,29,-1,27,41,42,-1,42,31,27,-1,31,42,43,-1,43,30,31,-1,30,43,44,-1,44,28,30,-1,28,44,40,-1,40,29,28,-1,31,45,46,-1,46,33,31,-1,32,46,47,-1,47,37,32,-1,37,47,48,-1,48,39,37,-1,38,48,49,-1,49,36,38,-1,36,49,50,-1,50,34,36,-1,35,50,51,-1,51,30,35,-1,30,51,45,-1,45,31,30,-1,4,52,53,-1,53,5,4,-1,5,53,54,-1,54,9,5,-1,9,54,55,-1,55,8,9,-1,8,55,56,-1,56,7,8,-1,7,56,57,-1,57,6,7,-1,6,57,52,-1,52,4,6,-1]
Coordinate123 = x3d.Coordinate()

IndexedFaceSet122.coord = Coordinate123
TextureCoordinate124 = x3d.TextureCoordinate()

IndexedFaceSet122.texCoord = TextureCoordinate124

Shape118.geometry = IndexedFaceSet122

HAnimSegment117.children.append(Shape118)
HAnimSite125 = x3d.HAnimSite()
HAnimSite125.DEF = "l_tarsal_proximal_phalanx_1_Sites"
"""(l_metatarsal_phalanx_1 0.0816 0.0232 0.0106)"""

HAnimSegment117.children.append(HAnimSite125)

HAnimJoint116.children.append(HAnimSegment117)
HAnimJoint126 = x3d.HAnimJoint()
HAnimJoint126.name = "l_tarsal_interphalangeal_1"
HAnimJoint126.DEF = "hanim_l_tarsal_interphalangeal_1"
HAnimJoint126.center = [0.0621225,0.0121365,0.1153125]
HAnimJoint126.ulimit = [0,0,0]
HAnimJoint126.llimit = [0,0,0]
HAnimSegment127 = x3d.HAnimSegment()
HAnimSegment127.name = "l_tarsal_distal_phalanx_1"
HAnimSegment127.DEF = "hanim_l_tarsal_distal_phalanx_1"
Shape128 = x3d.Shape()
Shape128.DEF = "l_tarsal_distal_phalanx_1_Shape"
Appearance129 = x3d.Appearance()
Material130 = x3d.Material()
Material130.USE = "SurfaceDefault"

Appearance129.material = Material130
ImageTexture131 = x3d.ImageTexture()
ImageTexture131.USE = "JinLOA4TextureAtlas"

Appearance129.texture = ImageTexture131

Shape128.appearance = Appearance129
IndexedFaceSet132 = x3d.IndexedFaceSet()
IndexedFaceSet132.coordIndex = [3,4,5,-1,5,2,3,-1,1,2,5,-1,5,0,1,-1,1,0,6,-1,6,7,1,-1,8,2,1,-1,1,7,8,-1,3,2,8,-1,8,9,3,-1,10,4,3,-1,3,9,10,-1,11,5,4,-1,4,10,11,-1,0,5,11,-1,11,6,0,-1,7,6,12,-1,12,13,7,-1,14,8,7,-1,7,13,14,-1,9,8,14,-1,14,15,9,-1,16,10,9,-1,9,15,16,-1,17,11,10,-1,10,16,17,-1,6,11,17,-1,17,12,6,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,12,18,19,-1,19,13,12,-1,13,19,20,-1,20,14,13,-1,14,20,21,-1,21,15,14,-1,15,21,22,-1,22,16,15,-1,16,22,23,-1,23,17,16,-1,17,23,18,-1,18,12,17,-1]
IndexedFaceSet132.creaseAngle = 3.14159
IndexedFaceSet132.texCoordIndex = [0,1,2,-1,2,3,0,-1,5,3,2,-1,2,4,5,-1,13,14,15,-1,15,12,13,-1,8,3,5,-1,5,6,8,-1,0,3,8,-1,8,9,0,-1,10,1,0,-1,0,9,10,-1,11,2,1,-1,1,10,11,-1,4,2,11,-1,11,7,4,-1,12,15,16,-1,16,18,12,-1,20,8,6,-1,6,19,20,-1,9,8,20,-1,20,21,9,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,7,11,23,-1,23,17,7,-1,24,29,28,-1,28,27,26,-1,24,28,26,-1,25,24,26,-1,16,24,25,-1,25,18,16,-1,19,25,26,-1,26,20,19,-1,20,26,27,-1,27,21,20,-1,21,27,28,-1,28,22,21,-1,22,28,29,-1,29,23,22,-1,23,29,24,-1,24,17,23,-1]
Coordinate133 = x3d.Coordinate()

IndexedFaceSet132.coord = Coordinate133
TextureCoordinate134 = x3d.TextureCoordinate()

IndexedFaceSet132.texCoord = TextureCoordinate134

Shape128.geometry = IndexedFaceSet132

HAnimSegment127.children.append(Shape128)
HAnimSite135 = x3d.HAnimSite()
HAnimSite135.DEF = "l_tarsal_distal_phalanx_1_Sites"
"""(l_tarsal_distal_phalanx_1_tip 0.090 0.012 0.188)"""

HAnimSegment127.children.append(HAnimSite135)

HAnimJoint126.children.append(HAnimSegment127)

HAnimJoint116.children.append(HAnimJoint126)

HAnimJoint106.children.append(HAnimJoint116)

HAnimJoint96.children.append(HAnimJoint106)

HAnimJoint86.children.append(HAnimJoint96)
HAnimJoint136 = x3d.HAnimJoint()
HAnimJoint136.name = "l_cuneonavicular_2"
HAnimJoint136.DEF = "hanim_l_cuneonavicular_2"
HAnimJoint136.center = [0.0814275,0.033525,0.02142675]
HAnimJoint136.ulimit = [0,0,0]
HAnimJoint136.llimit = [0,0,0]
HAnimSegment137 = x3d.HAnimSegment()
HAnimSegment137.name = "l_cuneiform_2"
HAnimSegment137.DEF = "hanim_l_cuneiform_2"
Shape138 = x3d.Shape()
Shape138.DEF = "l_cuneiform_2_Shape"
Appearance139 = x3d.Appearance()
Material140 = x3d.Material()
Material140.USE = "SurfaceDefault"

Appearance139.material = Material140
ImageTexture141 = x3d.ImageTexture()
ImageTexture141.USE = "JinLOA4TextureAtlas"

Appearance139.texture = ImageTexture141

Shape138.appearance = Appearance139
IndexedFaceSet142 = x3d.IndexedFaceSet()
IndexedFaceSet142.coordIndex = [1,8,9,-1,9,4,1,-1,5,0,2,-1,2,7,5,-1,4,6,3,-1,3,1,4,-1,10,0,5,-1,5,11,10,-1,32,37,36,-1,36,33,32,-1,24,29,28,-1,28,25,24,-1,19,18,23,-1,19,23,22,-1,19,22,21,-1,19,21,20,-1,13,12,17,-1,13,17,16,-1,13,16,15,-1,13,15,14,-1,9,12,13,-1,13,4,9,-1,4,13,14,-1,14,6,4,-1,24,31,30,-1,30,29,24,-1,7,15,16,-1,16,5,7,-1,5,16,17,-1,17,11,5,-1,36,35,34,-1,34,33,36,-1,3,18,19,-1,19,1,3,-1,1,19,20,-1,20,8,1,-1,32,39,38,-1,38,37,32,-1,10,21,22,-1,22,0,10,-1,0,22,23,-1,23,2,0,-1,28,27,26,-1,26,25,28,-1,6,24,25,-1,25,3,6,-1,3,25,26,-1,26,18,3,-1,18,26,27,-1,27,23,18,-1,23,27,28,-1,28,2,23,-1,2,28,29,-1,29,7,2,-1,7,29,30,-1,30,15,7,-1,15,30,31,-1,31,14,15,-1,14,31,24,-1,24,6,14,-1,8,32,33,-1,33,9,8,-1,9,33,34,-1,34,12,9,-1,12,34,35,-1,35,17,12,-1,17,35,36,-1,36,11,17,-1,11,36,37,-1,37,10,11,-1,10,37,38,-1,38,21,10,-1,21,38,39,-1,39,20,21,-1,20,39,32,-1,32,8,20,-1]
IndexedFaceSet142.creaseAngle = 3.14159
IndexedFaceSet142.texCoordIndex = [0,8,9,-1,9,4,0,-1,5,1,2,-1,2,7,5,-1,4,6,3,-1,3,0,4,-1,10,1,5,-1,5,11,10,-1,32,37,36,-1,36,33,32,-1,24,29,28,-1,28,25,24,-1,19,18,23,-1,19,23,22,-1,19,22,21,-1,19,21,20,-1,13,12,17,-1,13,17,16,-1,13,16,15,-1,13,15,14,-1,9,12,13,-1,13,4,9,-1,4,13,14,-1,14,6,4,-1,24,31,30,-1,30,29,24,-1,7,15,16,-1,16,5,7,-1,5,16,17,-1,17,11,5,-1,36,35,34,-1,34,33,36,-1,3,18,19,-1,19,0,3,-1,0,19,20,-1,20,8,0,-1,32,39,38,-1,38,37,32,-1,10,21,22,-1,22,1,10,-1,1,22,23,-1,23,2,1,-1,28,27,26,-1,26,25,28,-1,6,24,25,-1,25,3,6,-1,3,25,26,-1,26,18,3,-1,18,26,27,-1,27,23,18,-1,23,27,28,-1,28,2,23,-1,2,28,29,-1,29,7,2,-1,7,29,30,-1,30,15,7,-1,15,30,31,-1,31,14,15,-1,14,31,24,-1,24,6,14,-1,8,32,33,-1,33,9,8,-1,9,33,34,-1,34,12,9,-1,12,34,35,-1,35,17,12,-1,17,35,36,-1,36,11,17,-1,11,36,37,-1,37,10,11,-1,10,37,38,-1,38,21,10,-1,21,38,39,-1,39,20,21,-1,20,39,32,-1,32,8,20,-1]
Coordinate143 = x3d.Coordinate()

IndexedFaceSet142.coord = Coordinate143
TextureCoordinate144 = x3d.TextureCoordinate()

IndexedFaceSet142.texCoord = TextureCoordinate144

Shape138.geometry = IndexedFaceSet142

HAnimSegment137.children.append(Shape138)
HAnimSite145 = x3d.HAnimSite()
HAnimSite145.DEF = "l_cuneiform_2_Sites"
"""None"""

HAnimSegment137.children.append(HAnimSite145)

HAnimJoint136.children.append(HAnimSegment137)
HAnimJoint146 = x3d.HAnimJoint()
HAnimJoint146.name = "l_tarsometatarsal_2"
HAnimJoint146.DEF = "hanim_l_tarsometatarsal_2"
HAnimJoint146.center = [0.08019,0.0261,0.041062504]
HAnimJoint146.ulimit = [0,0,0]
HAnimJoint146.llimit = [0,0,0]
HAnimSegment147 = x3d.HAnimSegment()
HAnimSegment147.name = "l_metatarsal_2"
HAnimSegment147.DEF = "hanim_l_metatarsal_2"
Shape148 = x3d.Shape()
Shape148.DEF = "l_metatarsal_2_Shape"
Appearance149 = x3d.Appearance()
Material150 = x3d.Material()
Material150.USE = "SurfaceDefault"

Appearance149.material = Material150
ImageTexture151 = x3d.ImageTexture()
ImageTexture151.USE = "JinLOA4TextureAtlas"

Appearance149.texture = ImageTexture151

Shape148.appearance = Appearance149
IndexedFaceSet152 = x3d.IndexedFaceSet()
IndexedFaceSet152.coordIndex = [12,15,7,-1,7,4,12,-1,0,8,9,-1,9,2,0,-1,1,10,11,-1,11,3,1,-1,5,0,2,-1,2,6,5,-1,8,1,3,-1,3,9,8,-1,14,13,12,-1,12,4,14,-1,18,17,13,-1,13,14,18,-1,42,39,38,-1,38,43,42,-1,46,51,50,-1,50,47,46,-1,29,35,34,-1,34,30,29,-1,19,26,25,-1,25,20,19,-1,28,27,26,-1,26,19,28,-1,21,24,23,-1,23,22,21,-1,37,36,35,-1,35,29,37,-1,30,34,31,-1,20,25,24,-1,24,21,20,-1,31,34,33,-1,33,32,31,-1,3,19,20,-1,20,9,3,-1,9,20,21,-1,21,2,9,-1,2,21,22,-1,22,6,2,-1,42,41,40,-1,40,39,42,-1,7,23,24,-1,24,4,7,-1,4,24,25,-1,25,16,4,-1,16,25,26,-1,26,14,16,-1,14,26,27,-1,27,18,14,-1,50,49,48,-1,48,47,50,-1,11,28,19,-1,19,3,11,-1,0,29,30,-1,30,8,0,-1,8,30,31,-1,31,1,8,-1,1,31,32,-1,32,10,1,-1,46,53,52,-1,52,51,46,-1,17,33,34,-1,34,13,17,-1,13,34,35,-1,35,12,13,-1,12,35,36,-1,36,15,12,-1,38,45,44,-1,44,43,38,-1,5,37,29,-1,29,0,5,-1,15,38,39,-1,39,7,15,-1,7,39,40,-1,40,23,7,-1,23,40,41,-1,41,22,23,-1,22,41,42,-1,42,6,22,-1,6,42,43,-1,43,5,6,-1,5,43,44,-1,44,37,5,-1,37,44,45,-1,45,36,37,-1,36,45,38,-1,38,15,36,-1,10,46,47,-1,47,11,10,-1,11,47,48,-1,48,28,11,-1,28,48,49,-1,49,27,28,-1,27,49,50,-1,50,18,27,-1,18,50,51,-1,51,17,18,-1,17,51,52,-1,52,33,17,-1,33,52,53,-1,53,32,33,-1,32,53,46,-1,46,10,32,-1]
IndexedFaceSet152.creaseAngle = 3.14159
IndexedFaceSet152.texCoordIndex = [1,7,10,-1,10,0,1,-1,2,11,12,-1,12,3,2,-1,5,15,16,-1,16,6,5,-1,8,2,3,-1,3,9,8,-1,11,5,6,-1,6,12,11,-1,4,13,1,-1,1,0,4,-1,17,14,13,-1,13,4,17,-1,45,42,41,-1,41,46,45,-1,49,54,53,-1,53,50,49,-1,32,38,37,-1,37,33,32,-1,22,29,28,-1,28,23,22,-1,31,30,29,-1,29,22,31,-1,24,27,26,-1,26,25,24,-1,40,39,38,-1,38,32,40,-1,33,21,34,-1,23,28,27,-1,27,24,23,-1,34,37,36,-1,36,35,34,-1,6,22,23,-1,23,12,6,-1,12,23,24,-1,24,3,12,-1,3,24,25,-1,25,9,3,-1,45,44,43,-1,43,42,45,-1,10,26,27,-1,27,0,10,-1,20,27,28,-1,28,18,20,-1,18,28,29,-1,29,19,18,-1,4,29,30,-1,30,17,4,-1,53,52,51,-1,51,50,53,-1,16,31,22,-1,22,6,16,-1,2,32,33,-1,33,11,2,-1,11,33,34,-1,34,5,11,-1,5,34,35,-1,35,15,5,-1,49,56,55,-1,55,54,49,-1,14,36,37,-1,37,13,14,-1,13,37,38,-1,38,1,13,-1,1,38,39,-1,39,7,1,-1,41,48,47,-1,47,46,41,-1,8,40,32,-1,32,2,8,-1,7,41,42,-1,42,10,7,-1,10,42,43,-1,43,26,10,-1,26,43,44,-1,44,25,26,-1,25,44,45,-1,45,9,25,-1,9,45,46,-1,46,8,9,-1,8,46,47,-1,47,40,8,-1,40,47,48,-1,48,39,40,-1,39,48,41,-1,41,7,39,-1,15,49,50,-1,50,16,15,-1,16,50,51,-1,51,31,16,-1,31,51,52,-1,52,30,31,-1,30,52,53,-1,53,17,30,-1,17,53,54,-1,54,14,17,-1,14,54,55,-1,55,36,14,-1,36,55,56,-1,56,35,36,-1,35,56,49,-1,49,15,35,-1]
Coordinate153 = x3d.Coordinate()

IndexedFaceSet152.coord = Coordinate153
TextureCoordinate154 = x3d.TextureCoordinate()

IndexedFaceSet152.texCoord = TextureCoordinate154

Shape148.geometry = IndexedFaceSet152

HAnimSegment147.children.append(Shape148)
HAnimSite155 = x3d.HAnimSite()
HAnimSite155.DEF = "l_metatarsal_2_Sites"
"""None"""

HAnimSegment147.children.append(HAnimSite155)

HAnimJoint146.children.append(HAnimSegment147)
HAnimJoint156 = x3d.HAnimJoint()
HAnimJoint156.name = "l_metatarsophalangeal_2"
HAnimJoint156.DEF = "hanim_l_metatarsophalangeal_2"
HAnimJoint156.center = [0.08253,0.014976,0.097830005]
HAnimJoint156.ulimit = [0,0,0]
HAnimJoint156.llimit = [0,0,0]
HAnimSegment157 = x3d.HAnimSegment()
HAnimSegment157.name = "l_tarsal_proximal_phalanx_2"
HAnimSegment157.DEF = "hanim_l_tarsal_proximal_phalanx_2"
Shape158 = x3d.Shape()
Shape158.DEF = "l_tarsal_proximal_phalanx_2_Shape"
Appearance159 = x3d.Appearance()
Material160 = x3d.Material()
Material160.USE = "SurfaceDefault"

Appearance159.material = Material160
ImageTexture161 = x3d.ImageTexture()
ImageTexture161.USE = "JinLOA4TextureAtlas"

Appearance159.texture = ImageTexture161

Shape158.appearance = Appearance159
IndexedFaceSet162 = x3d.IndexedFaceSet()
IndexedFaceSet162.coordIndex = [8,6,20,-1,20,18,8,-1,14,11,19,-1,19,21,14,-1,6,1,20,-1,19,11,15,-1,0,2,3,-1,3,14,0,-1,12,8,16,-1,16,17,12,-1,15,11,12,-1,12,17,15,-1,6,3,2,-1,2,1,6,-1,0,14,21,-1,16,8,18,-1,3,6,5,-1,5,4,3,-1,6,8,7,-1,7,5,6,-1,10,9,12,-1,12,11,10,-1,14,13,10,-1,10,11,14,-1,13,14,3,-1,3,4,13,-1,8,12,9,-1,9,7,8,-1,19,23,24,-1,24,21,19,-1,22,18,20,-1,20,25,22,-1,31,30,36,-1,31,36,35,-1,34,31,35,-1,5,7,9,-1,9,10,13,-1,5,9,13,-1,4,5,13,-1,29,28,27,-1,27,26,29,-1,37,43,42,-1,42,41,37,-1,31,34,33,-1,33,32,31,-1,41,40,39,-1,41,39,38,-1,37,41,38,-1,25,26,27,-1,27,22,25,-1,22,27,28,-1,28,23,22,-1,23,28,29,-1,29,24,23,-1,24,29,26,-1,26,25,24,-1,15,30,31,-1,31,19,15,-1,19,31,32,-1,32,23,19,-1,23,32,33,-1,33,22,23,-1,22,33,34,-1,34,18,22,-1,18,34,35,-1,35,16,18,-1,16,35,36,-1,36,17,16,-1,17,36,30,-1,30,15,17,-1,21,37,38,-1,38,0,21,-1,0,38,39,-1,39,2,0,-1,2,39,40,-1,40,1,2,-1,1,40,41,-1,41,20,1,-1,20,41,42,-1,42,25,20,-1,25,42,43,-1,43,24,25,-1,24,43,37,-1,37,21,24,-1]
IndexedFaceSet162.creaseAngle = 3.14159
IndexedFaceSet162.texCoordIndex = [1,0,30,-1,30,24,1,-1,3,2,25,-1,25,31,3,-1,0,4,30,-1,25,2,26,-1,9,10,5,-1,5,3,9,-1,7,1,27,-1,27,28,7,-1,26,2,8,-1,8,29,26,-1,0,6,11,-1,11,4,0,-1,9,3,31,-1,27,1,24,-1,12,15,14,-1,14,13,12,-1,15,17,16,-1,16,14,15,-1,19,18,21,-1,21,20,19,-1,23,22,19,-1,19,20,23,-1,22,23,12,-1,12,13,22,-1,17,21,18,-1,18,16,17,-1,35,37,38,-1,38,34,35,-1,36,32,33,-1,33,39,36,-1,45,44,50,-1,45,50,49,-1,48,45,49,-1,14,16,18,-1,18,19,22,-1,14,18,22,-1,13,14,22,-1,43,42,41,-1,41,40,43,-1,51,57,56,-1,56,55,51,-1,45,48,47,-1,47,46,45,-1,55,54,53,-1,55,53,52,-1,51,55,52,-1,39,40,41,-1,41,36,39,-1,36,41,42,-1,42,37,36,-1,37,42,43,-1,43,38,37,-1,38,43,40,-1,40,39,38,-1,26,44,45,-1,45,25,26,-1,35,45,46,-1,46,37,35,-1,37,46,47,-1,47,36,37,-1,36,47,48,-1,48,32,36,-1,24,48,49,-1,49,27,24,-1,27,49,50,-1,50,28,27,-1,29,50,44,-1,44,26,29,-1,31,51,52,-1,52,9,31,-1,9,52,53,-1,53,10,9,-1,11,53,54,-1,54,4,11,-1,4,54,55,-1,55,30,4,-1,33,55,56,-1,56,39,33,-1,39,56,57,-1,57,38,39,-1,38,57,51,-1,51,34,38,-1]
Coordinate163 = x3d.Coordinate()

IndexedFaceSet162.coord = Coordinate163
TextureCoordinate164 = x3d.TextureCoordinate()

IndexedFaceSet162.texCoord = TextureCoordinate164

Shape158.geometry = IndexedFaceSet162

HAnimSegment157.children.append(Shape158)
HAnimSite165 = x3d.HAnimSite()
HAnimSite165.DEF = "l_tarsal_proximal_phalanx_2_Sites"
"""None"""

HAnimSegment157.children.append(HAnimSite165)

HAnimJoint156.children.append(HAnimSegment157)
HAnimJoint166 = x3d.HAnimJoint()
HAnimJoint166.name = "l_tarsal_proximal_interphalangeal_2"
HAnimJoint166.DEF = "hanim_l_tarsal_proximal_interphalangeal_2"
HAnimJoint166.center = [0.0843075,0.012647251,0.1140075]
HAnimJoint166.ulimit = [0,0,0]
HAnimJoint166.llimit = [0,0,0]
HAnimSegment167 = x3d.HAnimSegment()
HAnimSegment167.name = "l_tarsal_middle_phalanx_2"
HAnimSegment167.DEF = "hanim_l_tarsal_middle_phalanx_2"
Shape168 = x3d.Shape()
Shape168.DEF = "l_tarsal_middle_phalanx_2_Shape"
Appearance169 = x3d.Appearance()
Material170 = x3d.Material()
Material170.USE = "SurfaceDefault"

Appearance169.material = Material170
ImageTexture171 = x3d.ImageTexture()
ImageTexture171.USE = "JinLOA4TextureAtlas"

Appearance169.texture = ImageTexture171

Shape168.appearance = Appearance169
IndexedFaceSet172 = x3d.IndexedFaceSet()
IndexedFaceSet172.coordIndex = [0,1,6,-1,6,7,0,-1,2,0,7,-1,7,8,2,-1,9,3,2,-1,2,8,9,-1,4,3,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,6,1,5,-1,5,11,6,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,0,18,19,-1,19,1,0,-1,1,19,20,-1,20,5,1,-1,5,20,21,-1,21,4,5,-1,4,21,22,-1,22,3,4,-1,3,22,23,-1,23,2,3,-1,2,23,18,-1,18,0,2,-1]
IndexedFaceSet172.creaseAngle = 3.14159
IndexedFaceSet172.texCoordIndex = [0,1,8,-1,8,9,0,-1,2,0,9,-1,9,10,2,-1,11,3,2,-1,2,10,11,-1,4,3,11,-1,11,13,4,-1,14,5,6,-1,6,12,14,-1,8,1,7,-1,7,15,8,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,13,11,-1,12,20,21,-1,21,14,12,-1,15,21,16,-1,16,8,15,-1,22,27,26,-1,26,25,24,-1,22,26,24,-1,23,22,24,-1,0,22,23,-1,23,1,0,-1,1,23,24,-1,24,7,1,-1,5,24,25,-1,25,6,5,-1,4,25,26,-1,26,3,4,-1,3,26,27,-1,27,2,3,-1,2,27,22,-1,22,0,2,-1]
Coordinate173 = x3d.Coordinate()

IndexedFaceSet172.coord = Coordinate173
TextureCoordinate174 = x3d.TextureCoordinate()

IndexedFaceSet172.texCoord = TextureCoordinate174

Shape168.geometry = IndexedFaceSet172

HAnimSegment167.children.append(Shape168)
HAnimSite175 = x3d.HAnimSite()
HAnimSite175.DEF = "l_tarsal_middle_phalanx_2_Sites"
"""None"""

HAnimSegment167.children.append(HAnimSite175)

HAnimJoint166.children.append(HAnimSegment167)
HAnimJoint176 = x3d.HAnimJoint()
HAnimJoint176.name = "l_tarsal_distal_interphalangeal_2"
HAnimJoint176.DEF = "hanim_l_tarsal_distal_interphalangeal_2"
HAnimJoint176.center = [0.0843075,0.00982575,0.123435006]
HAnimJoint176.ulimit = [0,0,0]
HAnimJoint176.llimit = [0,0,0]
HAnimSegment177 = x3d.HAnimSegment()
HAnimSegment177.name = "l_tarsal_distal_phalanx_2"
HAnimSegment177.DEF = "hanim_l_tarsal_distal_phalanx_2"
Shape178 = x3d.Shape()
Shape178.DEF = "l_tarsal_distal_phalanx_2_Shape"
Appearance179 = x3d.Appearance()
Material180 = x3d.Material()
Material180.USE = "SurfaceDefault"

Appearance179.material = Material180
ImageTexture181 = x3d.ImageTexture()
ImageTexture181.USE = "JinLOA4TextureAtlas"

Appearance179.texture = ImageTexture181

Shape178.appearance = Appearance179
IndexedFaceSet182 = x3d.IndexedFaceSet()
IndexedFaceSet182.coordIndex = [0,3,2,-1,2,1,0,-1,5,1,2,-1,2,4,5,-1,0,1,7,-1,7,6,0,-1,3,0,6,-1,6,8,3,-1,9,2,3,-1,3,8,9,-1,4,2,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,7,1,5,-1,5,11,7,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,7,12,13,-1,13,6,7,-1,6,13,14,-1,14,8,6,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,7,11,-1]
IndexedFaceSet182.creaseAngle = 3.14159
IndexedFaceSet182.texCoordIndex = [0,3,2,-1,2,1,0,-1,5,1,2,-1,2,4,5,-1,0,1,9,-1,9,8,0,-1,3,0,8,-1,8,10,3,-1,11,2,3,-1,3,10,11,-1,4,2,11,-1,11,12,4,-1,14,7,6,-1,6,13,14,-1,9,1,5,-1,5,15,9,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,9,16,17,-1,17,8,9,-1,8,17,18,-1,18,10,8,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,12,11,-1,13,20,21,-1,21,14,13,-1,15,21,16,-1,16,9,15,-1]
Coordinate183 = x3d.Coordinate()

IndexedFaceSet182.coord = Coordinate183
TextureCoordinate184 = x3d.TextureCoordinate()

IndexedFaceSet182.texCoord = TextureCoordinate184

Shape178.geometry = IndexedFaceSet182

HAnimSegment177.children.append(Shape178)
HAnimSite185 = x3d.HAnimSite()
HAnimSite185.DEF = "l_tarsal_distal_phalanx_2"
"""(l_tarsal_distal_phalanx_2_tip 0.110 0.011 0.19)"""

HAnimSegment177.children.append(HAnimSite185)

HAnimJoint176.children.append(HAnimSegment177)

HAnimJoint166.children.append(HAnimJoint176)

HAnimJoint156.children.append(HAnimJoint166)

HAnimJoint146.children.append(HAnimJoint156)

HAnimJoint136.children.append(HAnimJoint146)

HAnimJoint86.children.append(HAnimJoint136)
HAnimJoint186 = x3d.HAnimJoint()
HAnimJoint186.name = "l_cuneonavicular_3"
HAnimJoint186.DEF = "hanim_l_cuneonavicular_3"
HAnimJoint186.center = [0.092970006,0.03339,0.019818]
HAnimJoint186.ulimit = [0,0,0]
HAnimJoint186.llimit = [0,0,0]
HAnimSegment187 = x3d.HAnimSegment()
HAnimSegment187.name = "l_cuneiform_3"
HAnimSegment187.DEF = "hanim_l_cuneiform_3"
Shape188 = x3d.Shape()
Shape188.DEF = "l_cuneiform_3_Shape"
Appearance189 = x3d.Appearance()
Material190 = x3d.Material()
Material190.USE = "SurfaceDefault"

Appearance189.material = Material190
ImageTexture191 = x3d.ImageTexture()
ImageTexture191.USE = "JinLOA4TextureAtlas"

Appearance189.texture = ImageTexture191

Shape188.appearance = Appearance189
IndexedFaceSet192 = x3d.IndexedFaceSet()
IndexedFaceSet192.coordIndex = [4,3,6,-1,6,0,4,-1,4,8,3,-1,5,2,7,-1,7,1,5,-1,2,9,7,-1,4,7,9,-1,9,8,4,-1,20,25,24,-1,24,21,20,-1,12,11,10,-1,10,13,12,-1,18,17,14,-1,14,19,18,-1,15,14,17,-1,17,16,15,-1,0,10,11,-1,11,4,0,-1,4,11,12,-1,12,7,4,-1,7,12,13,-1,13,1,7,-1,24,23,22,-1,22,21,24,-1,3,14,15,-1,15,6,3,-1,20,27,26,-1,26,25,20,-1,5,16,17,-1,17,2,5,-1,2,17,18,-1,18,9,2,-1,9,18,19,-1,19,8,9,-1,8,19,14,-1,14,3,8,-1,6,20,21,-1,21,0,6,-1,0,21,22,-1,22,10,0,-1,10,22,23,-1,23,13,10,-1,13,23,24,-1,24,1,13,-1,1,24,25,-1,25,5,1,-1,5,25,26,-1,26,16,5,-1,16,26,27,-1,27,15,16,-1,15,27,20,-1,20,6,15,-1]
IndexedFaceSet192.creaseAngle = 3.14159
IndexedFaceSet192.texCoordIndex = [4,3,6,-1,6,0,4,-1,4,8,3,-1,5,2,7,-1,7,1,5,-1,2,9,7,-1,4,11,10,-1,10,8,4,-1,22,27,26,-1,26,23,22,-1,14,13,12,-1,12,15,14,-1,20,19,16,-1,16,21,20,-1,17,16,19,-1,19,18,17,-1,0,12,13,-1,13,4,0,-1,4,13,14,-1,14,11,4,-1,7,14,15,-1,15,1,7,-1,26,25,24,-1,24,23,26,-1,3,16,17,-1,17,6,3,-1,22,29,28,-1,28,27,22,-1,5,18,19,-1,19,2,5,-1,2,19,20,-1,20,9,2,-1,10,20,21,-1,21,8,10,-1,8,21,16,-1,16,3,8,-1,6,22,23,-1,23,0,6,-1,0,23,24,-1,24,12,0,-1,12,24,25,-1,25,15,12,-1,15,25,26,-1,26,1,15,-1,1,26,27,-1,27,5,1,-1,5,27,28,-1,28,18,5,-1,18,28,29,-1,29,17,18,-1,17,29,22,-1,22,6,17,-1]
Coordinate193 = x3d.Coordinate()

IndexedFaceSet192.coord = Coordinate193
TextureCoordinate194 = x3d.TextureCoordinate()

IndexedFaceSet192.texCoord = TextureCoordinate194

Shape188.geometry = IndexedFaceSet192

HAnimSegment187.children.append(Shape188)
HAnimSite195 = x3d.HAnimSite()
HAnimSite195.DEF = "l_cuneiform_3_Sites"
"""None"""

HAnimSegment187.children.append(HAnimSite195)

HAnimJoint186.children.append(HAnimSegment187)
HAnimJoint196 = x3d.HAnimJoint()
HAnimJoint196.name = "l_tarsometatarsal_3"
HAnimJoint196.DEF = "hanim_l_tarsometatarsal_3"
HAnimJoint196.center = [0.09459,0.0261,0.039397504]
HAnimJoint196.ulimit = [0,0,0]
HAnimJoint196.llimit = [0,0,0]
HAnimSegment197 = x3d.HAnimSegment()
HAnimSegment197.name = "l_metatarsal_3"
HAnimSegment197.DEF = "hanim_l_metatarsal_3"
Shape198 = x3d.Shape()
Shape198.DEF = "l_metatarsal_3_Shape"
Appearance199 = x3d.Appearance()
Material200 = x3d.Material()
Material200.USE = "SurfaceDefault"

Appearance199.material = Material200
ImageTexture201 = x3d.ImageTexture()
ImageTexture201.USE = "JinLOA4TextureAtlas"

Appearance199.texture = ImageTexture201

Shape198.appearance = Appearance199
IndexedFaceSet202 = x3d.IndexedFaceSet()
IndexedFaceSet202.coordIndex = [15,3,13,-1,13,12,15,-1,10,2,0,-1,0,7,10,-1,9,6,14,-1,14,1,9,-1,3,10,7,-1,7,13,3,-1,12,16,5,-1,5,15,12,-1,6,9,17,-1,17,8,6,-1,17,4,11,-1,11,8,17,-1,27,31,28,-1,34,33,32,-1,32,35,34,-1,28,31,30,-1,30,29,28,-1,35,32,31,-1,31,27,35,-1,23,20,24,-1,22,21,20,-1,20,23,22,-1,25,19,18,-1,18,26,25,-1,24,20,19,-1,19,25,24,-1,1,18,19,-1,19,9,1,-1,9,19,20,-1,20,17,9,-1,17,20,21,-1,21,4,17,-1,48,47,46,-1,46,45,48,-1,5,22,23,-1,23,15,5,-1,15,23,24,-1,24,3,15,-1,3,24,25,-1,25,10,3,-1,10,25,26,-1,26,2,10,-1,40,39,38,-1,38,37,40,-1,13,27,28,-1,28,12,13,-1,12,28,29,-1,29,16,12,-1,44,51,50,-1,50,49,44,-1,11,30,31,-1,31,8,11,-1,8,31,32,-1,32,6,8,-1,6,32,33,-1,33,14,6,-1,36,43,42,-1,42,41,36,-1,0,34,35,-1,35,7,0,-1,7,35,27,-1,27,13,7,-1,37,36,41,-1,41,40,37,-1,48,45,44,-1,44,49,48,-1,14,36,37,-1,37,1,14,-1,1,37,38,-1,38,18,1,-1,18,38,39,-1,39,26,18,-1,26,39,40,-1,40,2,26,-1,2,40,41,-1,41,0,2,-1,0,41,42,-1,42,34,0,-1,34,42,43,-1,43,33,34,-1,33,43,36,-1,36,14,33,-1,16,44,45,-1,45,5,16,-1,5,45,46,-1,46,22,5,-1,22,46,47,-1,47,21,22,-1,21,47,48,-1,48,4,21,-1,4,48,49,-1,49,11,4,-1,11,49,50,-1,50,30,11,-1,30,50,51,-1,51,29,30,-1,29,51,44,-1,44,16,29,-1]
IndexedFaceSet202.creaseAngle = 3.14159
IndexedFaceSet202.texCoordIndex = [25,3,16,-1,16,7,25,-1,12,2,0,-1,0,9,12,-1,22,18,20,-1,20,1,22,-1,13,23,19,-1,19,17,13,-1,15,26,5,-1,5,24,15,-1,8,11,28,-1,28,21,8,-1,14,4,6,-1,6,10,14,-1,43,27,45,-1,54,53,51,-1,51,55,54,-1,46,50,48,-1,48,47,46,-1,56,52,49,-1,49,44,56,-1,36,28,38,-1,35,34,33,-1,33,37,35,-1,40,30,29,-1,29,42,40,-1,39,32,31,-1,31,41,39,-1,1,29,30,-1,30,22,1,-1,11,31,32,-1,32,28,11,-1,14,33,34,-1,34,4,14,-1,70,69,68,-1,68,67,70,-1,5,35,37,-1,37,24,5,-1,25,36,38,-1,38,3,25,-1,13,39,41,-1,41,23,13,-1,12,40,42,-1,42,2,12,-1,62,61,60,-1,60,58,62,-1,16,43,45,-1,45,7,16,-1,15,46,47,-1,47,26,15,-1,66,74,73,-1,73,71,66,-1,6,48,50,-1,50,10,6,-1,21,49,52,-1,52,8,21,-1,18,51,53,-1,53,20,18,-1,57,65,64,-1,64,63,57,-1,0,54,55,-1,55,9,0,-1,19,56,44,-1,44,17,19,-1,59,57,63,-1,63,62,59,-1,70,67,66,-1,66,72,70,-1,20,57,59,-1,59,1,20,-1,1,58,60,-1,60,29,1,-1,29,60,61,-1,61,42,29,-1,42,61,62,-1,62,2,42,-1,2,62,63,-1,63,0,2,-1,0,63,64,-1,64,54,0,-1,54,64,65,-1,65,53,54,-1,53,65,57,-1,57,20,53,-1,26,66,67,-1,67,5,26,-1,5,67,68,-1,68,35,5,-1,35,68,69,-1,69,34,35,-1,34,69,70,-1,70,4,34,-1,4,70,72,-1,72,6,4,-1,6,71,73,-1,73,48,6,-1,48,73,74,-1,74,47,48,-1,47,74,66,-1,66,26,47,-1]
Coordinate203 = x3d.Coordinate()

IndexedFaceSet202.coord = Coordinate203
TextureCoordinate204 = x3d.TextureCoordinate()

IndexedFaceSet202.texCoord = TextureCoordinate204

Shape198.geometry = IndexedFaceSet202

HAnimSegment197.children.append(Shape198)
HAnimSite205 = x3d.HAnimSite()
HAnimSite205.DEF = "l_metatarsal_3_Sites"
"""None"""

HAnimSegment197.children.append(HAnimSite205)

HAnimJoint196.children.append(HAnimSegment197)
HAnimJoint206 = x3d.HAnimJoint()
HAnimJoint206.name = "l_metatarsophalangeal_3"
HAnimJoint206.DEF = "hanim_l_metatarsophalangeal_3"
HAnimJoint206.center = [0.096480004,0.015057,0.09542251]
HAnimJoint206.ulimit = [0,0,0]
HAnimJoint206.llimit = [0,0,0]
HAnimSegment207 = x3d.HAnimSegment()
HAnimSegment207.name = "l_tarsal_proximal_phalanx_3"
HAnimSegment207.DEF = "hanim_l_tarsal_proximal_phalanx_3"
Shape208 = x3d.Shape()
Shape208.DEF = "l_tarsal_proximal_phalanx_3_Shape"
Appearance209 = x3d.Appearance()
Material210 = x3d.Material()
Material210.USE = "SurfaceDefault"

Appearance209.material = Material210
ImageTexture211 = x3d.ImageTexture()
ImageTexture211.USE = "JinLOA4TextureAtlas"

Appearance209.texture = ImageTexture211

Shape208.appearance = Appearance209
IndexedFaceSet212 = x3d.IndexedFaceSet()
IndexedFaceSet212.coordIndex = [13,7,1,-1,1,0,13,-1,7,9,2,-1,2,1,7,-1,4,3,14,-1,14,6,4,-1,8,5,4,-1,4,6,8,-1,5,8,13,-1,13,0,5,-1,23,19,15,-1,15,17,23,-1,16,20,24,-1,24,18,16,-1,9,7,19,-1,19,23,9,-1,8,6,24,-1,24,20,8,-1,7,11,19,-1,24,6,21,-1,10,12,13,-1,13,8,10,-1,14,9,25,-1,25,22,14,-1,21,6,14,-1,14,22,21,-1,7,13,12,-1,12,11,7,-1,10,8,20,-1,25,9,23,-1,9,14,3,-1,3,2,9,-1,1,2,3,-1,3,4,5,-1,1,3,5,-1,0,1,5,-1,35,34,33,-1,35,33,32,-1,31,35,32,-1,41,37,43,-1,43,42,41,-1,28,27,26,-1,26,29,28,-1,35,31,30,-1,30,36,35,-1,41,40,39,-1,37,41,39,-1,37,39,38,-1,15,26,27,-1,27,17,15,-1,17,27,28,-1,28,18,17,-1,18,28,29,-1,29,16,18,-1,16,29,26,-1,26,15,16,-1,17,30,31,-1,31,23,17,-1,23,31,32,-1,32,25,23,-1,25,32,33,-1,33,22,25,-1,22,33,34,-1,34,21,22,-1,21,34,35,-1,35,24,21,-1,24,35,36,-1,36,18,24,-1,18,36,30,-1,30,17,18,-1,20,37,38,-1,38,10,20,-1,10,38,39,-1,39,12,10,-1,12,39,40,-1,40,11,12,-1,11,40,41,-1,41,19,11,-1,19,41,42,-1,42,15,19,-1,15,42,43,-1,43,16,15,-1,16,43,37,-1,37,20,16,-1]
IndexedFaceSet212.creaseAngle = 3.14159
IndexedFaceSet212.texCoordIndex = [22,7,0,-1,0,1,22,-1,7,9,2,-1,2,0,7,-1,4,3,23,-1,23,6,4,-1,8,5,4,-1,4,6,8,-1,5,8,22,-1,22,1,5,-1,36,29,24,-1,24,26,36,-1,25,31,38,-1,38,27,25,-1,11,10,28,-1,28,35,11,-1,13,12,37,-1,37,30,13,-1,10,15,28,-1,37,12,32,-1,14,20,16,-1,16,13,14,-1,18,11,39,-1,39,33,18,-1,32,12,19,-1,19,34,32,-1,10,17,21,-1,21,15,10,-1,14,13,30,-1,39,11,35,-1,9,23,3,-1,3,2,9,-1,0,2,3,-1,3,4,5,-1,0,3,5,-1,1,0,5,-1,49,48,47,-1,49,47,46,-1,45,49,46,-1,55,51,57,-1,57,56,55,-1,42,41,40,-1,40,43,42,-1,49,45,44,-1,44,50,49,-1,55,54,53,-1,51,55,53,-1,51,53,52,-1,24,40,41,-1,41,26,24,-1,26,41,42,-1,42,27,26,-1,27,42,43,-1,43,25,27,-1,25,43,40,-1,40,24,25,-1,26,44,45,-1,45,36,26,-1,35,45,46,-1,46,39,35,-1,39,46,47,-1,47,33,39,-1,34,47,48,-1,48,32,34,-1,32,48,49,-1,49,37,32,-1,38,49,50,-1,50,27,38,-1,27,50,44,-1,44,26,27,-1,30,51,52,-1,52,14,30,-1,14,52,53,-1,53,20,14,-1,21,53,54,-1,54,15,21,-1,15,54,55,-1,55,28,15,-1,29,55,56,-1,56,24,29,-1,24,56,57,-1,57,25,24,-1,25,57,51,-1,51,31,25,-1]
Coordinate213 = x3d.Coordinate()

IndexedFaceSet212.coord = Coordinate213
TextureCoordinate214 = x3d.TextureCoordinate()

IndexedFaceSet212.texCoord = TextureCoordinate214

Shape208.geometry = IndexedFaceSet212

HAnimSegment207.children.append(Shape208)
HAnimSite215 = x3d.HAnimSite()
HAnimSite215.DEF = "l_tarsal_proximal_phalanx_3_Sites"
"""None"""

HAnimSegment207.children.append(HAnimSite215)

HAnimJoint206.children.append(HAnimSegment207)
HAnimJoint216 = x3d.HAnimJoint()
HAnimJoint216.name = "l_tarsal_proximal_interphalangeal_3"
HAnimJoint216.DEF = "hanim_l_tarsal_proximal_interphalangeal_3"
HAnimJoint216.center = [0.098865,0.011922751,0.110475]
HAnimJoint216.ulimit = [0,0,0]
HAnimJoint216.llimit = [0,0,0]
HAnimSegment217 = x3d.HAnimSegment()
HAnimSegment217.name = "l_tarsal_middle_phalanx_3"
HAnimSegment217.DEF = "hanim_l_tarsal_middle_phalanx_3"
Shape218 = x3d.Shape()
Shape218.DEF = "l_tarsal_middle_phalanx_3_Shape"
Appearance219 = x3d.Appearance()
Material220 = x3d.Material()
Material220.USE = "SurfaceDefault"

Appearance219.material = Material220
ImageTexture221 = x3d.ImageTexture()
ImageTexture221.USE = "JinLOA4TextureAtlas"

Appearance219.texture = ImageTexture221

Shape218.appearance = Appearance219
IndexedFaceSet222 = x3d.IndexedFaceSet()
IndexedFaceSet222.coordIndex = [1,0,6,-1,6,7,1,-1,2,1,7,-1,7,8,2,-1,9,3,2,-1,2,8,9,-1,4,3,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,6,0,5,-1,5,11,6,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,1,18,19,-1,19,0,1,-1,0,19,20,-1,20,5,0,-1,5,20,21,-1,21,4,5,-1,4,21,22,-1,22,3,4,-1,3,22,23,-1,23,2,3,-1,2,23,18,-1,18,1,2,-1]
IndexedFaceSet222.creaseAngle = 3.14159
IndexedFaceSet222.texCoordIndex = [0,1,8,-1,8,9,0,-1,2,0,9,-1,9,10,2,-1,11,3,2,-1,2,10,11,-1,4,3,11,-1,11,13,4,-1,14,6,7,-1,7,12,14,-1,8,1,5,-1,5,15,8,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,13,11,-1,12,20,21,-1,21,14,12,-1,15,21,16,-1,16,8,15,-1,22,27,26,-1,26,25,24,-1,22,26,24,-1,23,22,24,-1,0,22,23,-1,23,1,0,-1,1,23,24,-1,24,5,1,-1,6,24,25,-1,25,7,6,-1,4,25,26,-1,26,3,4,-1,3,26,27,-1,27,2,3,-1,2,27,22,-1,22,0,2,-1]
Coordinate223 = x3d.Coordinate()

IndexedFaceSet222.coord = Coordinate223
TextureCoordinate224 = x3d.TextureCoordinate()

IndexedFaceSet222.texCoord = TextureCoordinate224

Shape218.geometry = IndexedFaceSet222

HAnimSegment217.children.append(Shape218)
HAnimSite225 = x3d.HAnimSite()
HAnimSite225.DEF = "l_tarsal_middle_phalanx_3_Sites"
"""None"""

HAnimSegment217.children.append(HAnimSite225)

HAnimJoint216.children.append(HAnimSegment217)
HAnimJoint226 = x3d.HAnimJoint()
HAnimJoint226.name = "l_tarsal_distal_interphalangeal_3"
HAnimJoint226.DEF = "hanim_l_tarsal_distal_interphalangeal_3"
HAnimJoint226.center = [0.1004175,0.00982575,0.11970001]
HAnimJoint226.ulimit = [0,0,0]
HAnimJoint226.llimit = [0,0,0]
HAnimSegment227 = x3d.HAnimSegment()
HAnimSegment227.name = "l_tarsal_distal_phalanx_3"
HAnimSegment227.DEF = "hanim_l_tarsal_distal_phalanx_3"
Shape228 = x3d.Shape()
Shape228.DEF = "l_tarsal_distal_phalanx_3_Shape"
Appearance229 = x3d.Appearance()
Material230 = x3d.Material()
Material230.USE = "SurfaceDefault"

Appearance229.material = Material230
ImageTexture231 = x3d.ImageTexture()
ImageTexture231.USE = "JinLOA4TextureAtlas"

Appearance229.texture = ImageTexture231

Shape228.appearance = Appearance229
IndexedFaceSet232 = x3d.IndexedFaceSet()
IndexedFaceSet232.coordIndex = [1,2,3,-1,3,0,1,-1,5,0,3,-1,3,4,5,-1,1,0,6,-1,6,7,1,-1,2,1,7,-1,7,8,2,-1,9,3,2,-1,2,8,9,-1,4,3,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,6,0,5,-1,5,11,6,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1]
IndexedFaceSet232.creaseAngle = 3.14159
IndexedFaceSet232.texCoordIndex = [0,1,2,-1,2,3,0,-1,5,3,2,-1,2,4,5,-1,0,3,8,-1,8,9,0,-1,1,0,9,-1,9,10,1,-1,11,2,1,-1,1,10,11,-1,4,2,11,-1,11,12,4,-1,14,6,7,-1,7,13,14,-1,8,3,5,-1,5,15,8,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,12,11,-1,13,20,21,-1,21,14,13,-1,15,21,16,-1,16,8,15,-1]
Coordinate233 = x3d.Coordinate()

IndexedFaceSet232.coord = Coordinate233
TextureCoordinate234 = x3d.TextureCoordinate()

IndexedFaceSet232.texCoord = TextureCoordinate234

Shape228.geometry = IndexedFaceSet232

HAnimSegment227.children.append(Shape228)
HAnimSite235 = x3d.HAnimSite()
HAnimSite235.DEF = "l_tarsal_distal_phalanx_3_Sites"
"""(l_tarsal_distal_phalanx_3_tip 0.128 0.011 0.185)"""

HAnimSegment227.children.append(HAnimSite235)

HAnimJoint226.children.append(HAnimSegment227)

HAnimJoint216.children.append(HAnimJoint226)

HAnimJoint206.children.append(HAnimJoint216)

HAnimJoint196.children.append(HAnimJoint206)

HAnimJoint186.children.append(HAnimJoint196)

HAnimJoint86.children.append(HAnimJoint186)

HAnimJoint76.children.append(HAnimJoint86)
HAnimJoint236 = x3d.HAnimJoint()
HAnimJoint236.name = "l_calcaneocuboid"
HAnimJoint236.DEF = "hanim_l_calcaneocuboid"
HAnimJoint236.center = [0.0891,0.0579825,-0.025965001]
HAnimJoint236.ulimit = [0,0,0]
HAnimJoint236.llimit = [0,0,0]
HAnimSegment237 = x3d.HAnimSegment()
HAnimSegment237.name = "l_calcaneus"
HAnimSegment237.DEF = "hanim_l_calcaneus"
Shape238 = x3d.Shape()
Shape238.DEF = "l_calcaneus_Shape"
Appearance239 = x3d.Appearance()
Material240 = x3d.Material()
Material240.USE = "SurfaceDefault"

Appearance239.material = Material240
ImageTexture241 = x3d.ImageTexture()
ImageTexture241.USE = "JinLOA4TextureAtlas"

Appearance239.texture = ImageTexture241

Shape238.appearance = Appearance239
IndexedFaceSet242 = x3d.IndexedFaceSet()
IndexedFaceSet242.coordIndex = [1,2,3,-1,3,0,1,-1,4,5,6,-1,6,7,4,-1,4,7,19,-1,19,18,4,-1,0,3,9,-1,9,8,0,-1,10,11,3,-1,3,2,10,-1,12,13,7,-1,7,6,12,-1,13,20,19,-1,19,7,13,-1,25,9,14,-1,14,26,25,-1,3,11,14,-1,14,9,3,-1,15,16,11,-1,11,10,15,-1,13,17,21,-1,21,20,13,-1,11,16,14,-1,4,18,23,-1,23,5,4,-1,14,37,38,-1,34,35,16,-1,16,15,34,-1,17,36,39,-1,39,21,17,-1,17,13,12,-1,35,37,14,-1,14,16,35,-1,5,27,30,-1,30,6,5,-1,18,1,22,-1,22,23,18,-1,2,1,18,-1,18,19,2,-1,10,2,19,-1,19,20,10,-1,15,10,20,-1,20,21,15,-1,34,15,21,-1,21,39,34,-1,22,1,0,-1,0,8,22,-1,25,24,8,-1,8,9,25,-1,14,38,33,-1,33,26,14,-1,23,29,27,-1,27,5,23,-1,22,28,29,-1,29,23,22,-1,8,24,28,-1,28,22,8,-1,30,31,12,-1,12,6,30,-1,32,40,12,-1,12,31,32,-1,40,36,17,-1,17,12,40,-1,44,43,42,-1,42,41,49,-1,44,42,49,-1,49,48,47,-1,44,49,47,-1,45,44,47,-1,46,45,47,-1,55,54,53,-1,53,52,51,-1,55,53,51,-1,50,55,51,-1,55,50,59,-1,59,56,55,-1,56,59,58,-1,58,57,56,-1,34,41,42,-1,42,35,34,-1,35,42,43,-1,43,37,35,-1,37,43,44,-1,44,38,37,-1,38,44,45,-1,45,33,38,-1,33,45,46,-1,46,32,33,-1,32,46,47,-1,47,40,32,-1,40,47,48,-1,48,36,40,-1,36,48,49,-1,49,39,36,-1,39,49,41,-1,41,34,39,-1,25,50,51,-1,51,24,25,-1,24,51,52,-1,52,28,24,-1,28,52,53,-1,53,29,28,-1,29,53,54,-1,54,27,29,-1,27,54,55,-1,55,30,27,-1,30,55,56,-1,56,31,30,-1,31,56,57,-1,57,32,31,-1,32,57,58,-1,58,33,32,-1,33,58,59,-1,59,26,33,-1,26,59,50,-1,50,25,26,-1]
IndexedFaceSet242.creaseAngle = 3.14159
IndexedFaceSet242.texCoordIndex = [1,2,3,-1,3,0,1,-1,4,5,6,-1,6,7,4,-1,4,7,19,-1,19,18,4,-1,0,3,9,-1,9,8,0,-1,10,11,3,-1,3,2,10,-1,12,13,7,-1,7,6,12,-1,13,20,19,-1,19,7,13,-1,25,9,14,-1,14,26,25,-1,3,11,14,-1,14,9,3,-1,15,16,11,-1,11,10,15,-1,13,17,21,-1,21,20,13,-1,11,16,14,-1,4,18,23,-1,23,5,4,-1,14,37,38,-1,34,35,16,-1,16,15,34,-1,17,36,39,-1,39,21,17,-1,17,13,12,-1,35,37,14,-1,14,16,35,-1,5,27,30,-1,30,6,5,-1,18,1,22,-1,22,23,18,-1,2,1,18,-1,18,19,2,-1,10,2,19,-1,19,20,10,-1,15,10,20,-1,20,21,15,-1,34,15,21,-1,21,39,34,-1,22,1,0,-1,0,8,22,-1,25,24,8,-1,8,9,25,-1,14,38,33,-1,33,26,14,-1,23,29,27,-1,27,5,23,-1,22,28,29,-1,29,23,22,-1,8,24,28,-1,28,22,8,-1,30,31,12,-1,12,6,30,-1,32,40,12,-1,12,31,32,-1,40,36,17,-1,17,12,40,-1,44,43,42,-1,42,41,49,-1,44,42,49,-1,49,48,47,-1,44,49,47,-1,45,44,47,-1,46,45,47,-1,55,54,53,-1,53,52,51,-1,55,53,51,-1,50,55,51,-1,55,50,59,-1,59,56,55,-1,56,59,58,-1,58,57,56,-1,34,41,42,-1,42,35,34,-1,35,42,43,-1,43,37,35,-1,37,43,44,-1,44,38,37,-1,38,44,45,-1,45,33,38,-1,33,45,46,-1,46,32,33,-1,32,46,47,-1,47,40,32,-1,40,47,48,-1,48,36,40,-1,36,48,49,-1,49,39,36,-1,39,49,41,-1,41,34,39,-1,25,50,51,-1,51,24,25,-1,24,51,52,-1,52,28,24,-1,28,52,53,-1,53,29,28,-1,29,53,54,-1,54,27,29,-1,27,54,55,-1,55,30,27,-1,30,55,56,-1,56,31,30,-1,31,56,57,-1,57,32,31,-1,32,57,58,-1,58,33,32,-1,33,58,59,-1,59,26,33,-1,26,59,50,-1,50,25,26,-1]
Coordinate243 = x3d.Coordinate()

IndexedFaceSet242.coord = Coordinate243
TextureCoordinate244 = x3d.TextureCoordinate()

IndexedFaceSet242.texCoord = TextureCoordinate244

Shape238.geometry = IndexedFaceSet242

HAnimSegment237.children.append(Shape238)
HAnimSite245 = x3d.HAnimSite()
HAnimSite245.DEF = "l_calcaneus_Sites"
"""None"""

HAnimSegment237.children.append(HAnimSite245)

HAnimJoint236.children.append(HAnimSegment237)
HAnimJoint246 = x3d.HAnimJoint()
HAnimJoint246.name = "l_transversetarsal"
HAnimJoint246.DEF = "hanim_l_transversetarsal"
HAnimJoint246.center = [0.1106325,0.03528,0.002089125]
HAnimJoint246.ulimit = [0,0,0]
HAnimJoint246.llimit = [0,0,0]
HAnimSegment247 = x3d.HAnimSegment()
HAnimSegment247.name = "l_cuboid"
HAnimSegment247.DEF = "hanim_l_cuboid"
Shape248 = x3d.Shape()
Shape248.DEF = "l_cuboid_Shape"
Appearance249 = x3d.Appearance()
Material250 = x3d.Material()
Material250.USE = "SurfaceDefault"

Appearance249.material = Material250
ImageTexture251 = x3d.ImageTexture()
ImageTexture251.USE = "JinLOA4TextureAtlas"

Appearance249.texture = ImageTexture251

Shape248.appearance = Appearance249
IndexedFaceSet252 = x3d.IndexedFaceSet()
IndexedFaceSet252.coordIndex = [1,0,16,-1,16,17,1,-1,3,0,5,-1,5,8,3,-1,6,1,2,-1,2,7,6,-1,2,10,4,-1,18,10,2,-1,4,12,13,-1,13,9,4,-1,11,12,4,-1,4,10,11,-1,6,5,0,-1,0,1,6,-1,9,7,2,-1,2,4,9,-1,8,15,14,-1,14,3,8,-1,3,19,16,-1,16,0,3,-1,14,19,3,-1,1,17,18,-1,18,2,1,-1,27,26,33,-1,33,32,31,-1,27,33,31,-1,30,27,31,-1,21,20,25,-1,25,24,21,-1,35,34,42,-1,36,35,42,-1,42,41,40,-1,36,42,40,-1,39,36,40,-1,22,21,24,-1,24,23,22,-1,11,20,21,-1,21,12,11,-1,12,21,22,-1,22,13,12,-1,39,38,37,-1,37,36,39,-1,15,23,24,-1,24,14,15,-1,14,24,25,-1,25,19,14,-1,30,29,28,-1,28,27,30,-1,10,26,27,-1,27,11,10,-1,11,27,28,-1,28,20,11,-1,20,28,29,-1,29,25,20,-1,25,29,30,-1,30,19,25,-1,19,30,31,-1,31,16,19,-1,16,31,32,-1,32,17,16,-1,17,32,33,-1,33,18,17,-1,18,33,26,-1,26,10,18,-1,5,34,35,-1,35,8,5,-1,8,35,36,-1,36,15,8,-1,15,36,37,-1,37,23,15,-1,23,37,38,-1,38,22,23,-1,22,38,39,-1,39,13,22,-1,13,39,40,-1,40,9,13,-1,9,40,41,-1,41,7,9,-1,7,41,42,-1,42,6,7,-1,6,42,34,-1,34,5,6,-1]
IndexedFaceSet252.creaseAngle = 3.14159
IndexedFaceSet252.texCoordIndex = [1,0,16,-1,16,17,1,-1,2,0,5,-1,5,8,2,-1,6,1,3,-1,3,7,6,-1,3,10,4,-1,18,10,3,-1,4,12,13,-1,13,9,4,-1,11,12,4,-1,4,10,11,-1,6,5,0,-1,0,1,6,-1,9,7,3,-1,3,4,9,-1,8,15,14,-1,14,2,8,-1,2,19,16,-1,16,0,2,-1,14,19,2,-1,1,17,18,-1,18,3,1,-1,27,26,33,-1,33,32,31,-1,27,33,31,-1,30,27,31,-1,21,20,25,-1,25,24,21,-1,35,34,42,-1,36,35,42,-1,42,41,40,-1,36,42,40,-1,39,36,40,-1,22,21,24,-1,24,23,22,-1,11,20,21,-1,21,12,11,-1,12,21,22,-1,22,13,12,-1,39,38,37,-1,37,36,39,-1,15,23,24,-1,24,14,15,-1,14,24,25,-1,25,19,14,-1,30,29,28,-1,28,27,30,-1,10,26,27,-1,27,11,10,-1,11,27,28,-1,28,20,11,-1,20,28,29,-1,29,25,20,-1,25,29,30,-1,30,19,25,-1,19,30,31,-1,31,16,19,-1,16,31,32,-1,32,17,16,-1,17,32,33,-1,33,18,17,-1,18,33,26,-1,26,10,18,-1,5,34,35,-1,35,8,5,-1,8,35,36,-1,36,15,8,-1,15,36,37,-1,37,23,15,-1,23,37,38,-1,38,22,23,-1,22,38,39,-1,39,13,22,-1,13,39,40,-1,40,9,13,-1,9,40,41,-1,41,7,9,-1,7,41,42,-1,42,6,7,-1,6,42,34,-1,34,5,6,-1]
Coordinate253 = x3d.Coordinate()

IndexedFaceSet252.coord = Coordinate253
TextureCoordinate254 = x3d.TextureCoordinate()

IndexedFaceSet252.texCoord = TextureCoordinate254

Shape248.geometry = IndexedFaceSet252

HAnimSegment247.children.append(Shape248)
HAnimSite255 = x3d.HAnimSite()
HAnimSite255.DEF = "l_cuboid_Sites"
"""None"""

HAnimSegment247.children.append(HAnimSite255)

HAnimJoint246.children.append(HAnimSegment247)
HAnimJoint256 = x3d.HAnimJoint()
HAnimJoint256.name = "l_tarsometatarsal_4"
HAnimJoint256.DEF = "hanim_l_tarsometatarsal_4"
HAnimJoint256.center = [0.1064925,0.0245475,0.03843]
HAnimJoint256.ulimit = [0,0,0]
HAnimJoint256.llimit = [0,0,0]
HAnimSegment257 = x3d.HAnimSegment()
HAnimSegment257.name = "l_metatarsal_4"
HAnimSegment257.DEF = "hanim_l_metatarsal_4"
Shape258 = x3d.Shape()
Shape258.DEF = "l_metatarsal_4_Shape"
Appearance259 = x3d.Appearance()
Material260 = x3d.Material()
Material260.USE = "SurfaceDefault"

Appearance259.material = Material260
ImageTexture261 = x3d.ImageTexture()
ImageTexture261.USE = "JinLOA4TextureAtlas"

Appearance259.texture = ImageTexture261

Shape258.appearance = Appearance259
IndexedFaceSet262 = x3d.IndexedFaceSet()
IndexedFaceSet262.coordIndex = [11,16,17,-1,17,13,11,-1,10,14,16,-1,16,11,10,-1,5,7,3,-1,3,1,5,-1,0,4,6,-1,6,2,0,-1,14,10,12,-1,12,15,14,-1,7,4,0,-1,0,3,7,-1,8,9,5,-1,5,1,8,-1,40,37,36,-1,36,41,40,-1,48,45,44,-1,44,49,48,-1,27,31,28,-1,28,31,30,-1,30,29,28,-1,34,33,32,-1,32,35,34,-1,35,32,31,-1,31,27,35,-1,18,24,19,-1,26,25,24,-1,24,18,26,-1,20,23,22,-1,22,21,20,-1,19,24,23,-1,23,20,19,-1,5,18,19,-1,19,7,5,-1,7,19,20,-1,20,4,7,-1,4,20,21,-1,21,6,4,-1,40,39,38,-1,38,37,40,-1,15,22,23,-1,23,14,15,-1,14,23,24,-1,24,16,14,-1,16,24,25,-1,25,17,16,-1,44,51,50,-1,50,49,44,-1,9,26,18,-1,18,5,9,-1,3,27,28,-1,28,1,3,-1,1,28,29,-1,29,8,1,-1,48,47,46,-1,46,45,48,-1,13,30,31,-1,31,11,13,-1,11,31,32,-1,32,10,11,-1,10,32,33,-1,33,12,10,-1,36,43,42,-1,42,41,36,-1,2,34,35,-1,35,0,2,-1,0,35,27,-1,27,3,0,-1,12,36,37,-1,37,15,12,-1,15,37,38,-1,38,22,15,-1,22,38,39,-1,39,21,22,-1,21,39,40,-1,40,6,21,-1,6,40,41,-1,41,2,6,-1,2,41,42,-1,42,34,2,-1,34,42,43,-1,43,33,34,-1,33,43,36,-1,36,12,33,-1,17,44,45,-1,45,13,17,-1,13,45,46,-1,46,30,13,-1,30,46,47,-1,47,29,30,-1,29,47,48,-1,48,8,29,-1,8,48,49,-1,49,9,8,-1,9,49,50,-1,50,26,9,-1,26,50,51,-1,51,25,26,-1,25,51,44,-1,44,17,25,-1]
IndexedFaceSet262.creaseAngle = 3.14159
IndexedFaceSet262.texCoordIndex = [5,16,17,-1,17,13,5,-1,2,7,16,-1,16,5,2,-1,9,12,6,-1,6,1,9,-1,0,8,11,-1,11,4,0,-1,7,2,3,-1,3,10,7,-1,12,8,0,-1,0,6,12,-1,14,15,9,-1,9,1,14,-1,42,39,38,-1,38,43,42,-1,50,47,46,-1,46,51,50,-1,29,18,30,-1,30,33,32,-1,32,31,30,-1,36,35,34,-1,34,37,36,-1,37,34,33,-1,33,29,37,-1,20,19,21,-1,28,27,26,-1,26,20,28,-1,22,25,24,-1,24,23,22,-1,21,26,25,-1,25,22,21,-1,9,20,21,-1,21,12,9,-1,12,21,22,-1,22,8,12,-1,8,22,23,-1,23,11,8,-1,42,41,40,-1,40,39,42,-1,10,24,25,-1,25,7,10,-1,7,25,26,-1,26,16,7,-1,16,26,27,-1,27,17,16,-1,46,53,52,-1,52,51,46,-1,15,28,20,-1,20,9,15,-1,6,29,30,-1,30,1,6,-1,1,30,31,-1,31,14,1,-1,50,49,48,-1,48,47,50,-1,13,32,33,-1,33,5,13,-1,5,33,34,-1,34,2,5,-1,2,34,35,-1,35,3,2,-1,38,45,44,-1,44,43,38,-1,4,36,37,-1,37,0,4,-1,0,37,29,-1,29,6,0,-1,3,38,39,-1,39,10,3,-1,10,39,40,-1,40,24,10,-1,24,40,41,-1,41,23,24,-1,23,41,42,-1,42,11,23,-1,11,42,43,-1,43,4,11,-1,4,43,44,-1,44,36,4,-1,36,44,45,-1,45,35,36,-1,35,45,38,-1,38,3,35,-1,17,46,47,-1,47,13,17,-1,13,47,48,-1,48,32,13,-1,32,48,49,-1,49,31,32,-1,31,49,50,-1,50,14,31,-1,14,50,51,-1,51,15,14,-1,15,51,52,-1,52,28,15,-1,28,52,53,-1,53,27,28,-1,27,53,46,-1,46,17,27,-1]
Coordinate263 = x3d.Coordinate()

IndexedFaceSet262.coord = Coordinate263
TextureCoordinate264 = x3d.TextureCoordinate()

IndexedFaceSet262.texCoord = TextureCoordinate264

Shape258.geometry = IndexedFaceSet262

HAnimSegment257.children.append(Shape258)
HAnimSite265 = x3d.HAnimSite()
HAnimSite265.DEF = "l_metatarsal_4_Sites"
"""None"""

HAnimSegment257.children.append(HAnimSite265)

HAnimJoint256.children.append(HAnimSegment257)
HAnimJoint266 = x3d.HAnimJoint()
HAnimJoint266.name = "l_metatarsophalangeal_4"
HAnimJoint266.DEF = "hanim_l_metatarsophalangeal_4"
HAnimJoint266.center = [0.109867506,0.01435275,0.091170006]
HAnimJoint266.ulimit = [0,0,0]
HAnimJoint266.llimit = [0,0,0]
HAnimSegment267 = x3d.HAnimSegment()
HAnimSegment267.name = "l_tarsal_proximal_phalanx_4"
HAnimSegment267.DEF = "hanim_l_tarsal_proximal_phalanx_4"
Shape268 = x3d.Shape()
Shape268.DEF = "l_tarsal_proximal_phalanx_4_Shape"
Appearance269 = x3d.Appearance()
Material270 = x3d.Material()
Material270.USE = "SurfaceDefault"

Appearance269.material = Material270
ImageTexture271 = x3d.ImageTexture()
ImageTexture271.USE = "JinLOA4TextureAtlas"

Appearance269.texture = ImageTexture271

Shape268.appearance = Appearance269
IndexedFaceSet272 = x3d.IndexedFaceSet()
IndexedFaceSet272.coordIndex = [13,10,1,-1,1,2,13,-1,10,8,3,-1,3,1,10,-1,3,8,0,-1,0,4,3,-1,0,9,5,-1,5,4,0,-1,7,6,5,-1,5,9,7,-1,6,7,13,-1,13,2,6,-1,22,14,18,-1,18,17,22,-1,20,15,21,-1,21,19,20,-1,9,21,15,-1,15,7,9,-1,10,16,14,-1,8,10,14,-1,14,22,8,-1,21,9,23,-1,11,12,13,-1,13,7,11,-1,0,8,24,-1,24,25,0,-1,16,10,13,-1,13,12,16,-1,23,9,0,-1,0,25,23,-1,11,7,15,-1,24,8,22,-1,35,34,33,-1,31,35,33,-1,31,33,32,-1,1,3,4,-1,4,5,6,-1,1,4,6,-1,2,1,6,-1,37,40,39,-1,39,38,37,-1,28,27,26,-1,26,29,28,-1,35,31,30,-1,30,36,35,-1,37,43,42,-1,40,37,42,-1,40,42,41,-1,18,26,27,-1,27,17,18,-1,17,27,28,-1,28,19,17,-1,19,28,29,-1,29,20,19,-1,20,29,26,-1,26,18,20,-1,17,30,31,-1,31,22,17,-1,22,31,32,-1,32,24,22,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,23,25,-1,23,34,35,-1,35,21,23,-1,21,35,36,-1,36,19,21,-1,19,36,30,-1,30,17,19,-1,14,37,38,-1,38,18,14,-1,18,38,39,-1,39,20,18,-1,20,39,40,-1,40,15,20,-1,15,40,41,-1,41,11,15,-1,11,41,42,-1,42,12,11,-1,12,42,43,-1,43,16,12,-1,16,43,37,-1,37,14,16,-1]
IndexedFaceSet272.creaseAngle = 3.14159
IndexedFaceSet272.texCoordIndex = [27,10,1,-1,1,2,27,-1,10,11,3,-1,3,1,10,-1,3,11,0,-1,0,4,3,-1,0,12,5,-1,5,4,0,-1,9,6,5,-1,5,12,9,-1,6,9,27,-1,27,2,6,-1,35,7,29,-1,29,28,35,-1,31,8,33,-1,33,30,31,-1,15,32,16,-1,16,14,15,-1,17,18,13,-1,19,17,13,-1,13,34,19,-1,32,15,36,-1,20,21,22,-1,22,14,20,-1,23,19,37,-1,37,38,23,-1,18,17,25,-1,25,24,18,-1,36,15,26,-1,26,39,36,-1,20,14,16,-1,37,19,34,-1,49,48,47,-1,45,49,47,-1,45,47,46,-1,1,3,4,-1,4,5,6,-1,1,4,6,-1,2,1,6,-1,51,54,53,-1,53,52,51,-1,42,41,40,-1,40,43,42,-1,49,45,44,-1,44,50,49,-1,51,57,56,-1,54,51,56,-1,54,56,55,-1,29,40,41,-1,41,28,29,-1,28,41,42,-1,42,30,28,-1,30,42,43,-1,43,31,30,-1,31,43,40,-1,40,29,31,-1,28,44,45,-1,45,35,28,-1,34,45,46,-1,46,37,34,-1,37,46,47,-1,47,38,37,-1,39,47,48,-1,48,36,39,-1,36,48,49,-1,49,32,36,-1,33,49,50,-1,50,30,33,-1,30,50,44,-1,44,28,30,-1,7,51,52,-1,52,29,7,-1,29,52,53,-1,53,31,29,-1,31,53,54,-1,54,8,31,-1,16,54,55,-1,55,20,16,-1,20,55,56,-1,56,21,20,-1,24,56,57,-1,57,18,24,-1,18,57,51,-1,51,13,18,-1]
Coordinate273 = x3d.Coordinate()

IndexedFaceSet272.coord = Coordinate273
TextureCoordinate274 = x3d.TextureCoordinate()

IndexedFaceSet272.texCoord = TextureCoordinate274

Shape268.geometry = IndexedFaceSet272

HAnimSegment267.children.append(Shape268)
HAnimSite275 = x3d.HAnimSite()
HAnimSite275.DEF = "l_tarsal_proximal_phalanx_4_Sites"
"""None"""

HAnimSegment267.children.append(HAnimSite275)

HAnimJoint266.children.append(HAnimSegment267)
HAnimJoint276 = x3d.HAnimJoint()
HAnimJoint276.name = "l_tarsal_proximal_interphalangeal_4"
HAnimJoint276.DEF = "hanim_l_tarsal_proximal_interphalangeal_4"
HAnimJoint276.center = [0.114165,0.0122445,0.1063125]
HAnimJoint276.ulimit = [0,0,0]
HAnimJoint276.llimit = [0,0,0]
HAnimSegment277 = x3d.HAnimSegment()
HAnimSegment277.name = "l_tarsal_middle_phalanx_4"
HAnimSegment277.DEF = "hanim_l_tarsal_middle_phalanx_4"
Shape278 = x3d.Shape()
Shape278.DEF = "l_tarsal_middle_phalanx_4_Shape"
Appearance279 = x3d.Appearance()
Material280 = x3d.Material()
Material280.USE = "SurfaceDefault"

Appearance279.material = Material280
ImageTexture281 = x3d.ImageTexture()
ImageTexture281.USE = "JinLOA4TextureAtlas"

Appearance279.texture = ImageTexture281

Shape278.appearance = Appearance279
IndexedFaceSet282 = x3d.IndexedFaceSet()
IndexedFaceSet282.coordIndex = [0,1,7,-1,7,6,0,-1,2,0,6,-1,6,8,2,-1,9,3,2,-1,2,8,9,-1,4,3,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,7,1,5,-1,5,11,7,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,7,12,13,-1,13,6,7,-1,6,13,14,-1,14,8,6,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,7,11,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,0,18,19,-1,19,1,0,-1,1,19,20,-1,20,5,1,-1,5,20,21,-1,21,4,5,-1,4,21,22,-1,22,3,4,-1,3,22,23,-1,23,2,3,-1,2,23,18,-1,18,0,2,-1]
IndexedFaceSet282.creaseAngle = 3.14159
IndexedFaceSet282.texCoordIndex = [0,1,9,-1,9,8,0,-1,2,0,8,-1,8,10,2,-1,11,3,2,-1,2,10,11,-1,4,3,11,-1,11,12,4,-1,14,6,7,-1,7,13,14,-1,9,1,5,-1,5,15,9,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,9,16,17,-1,17,8,9,-1,8,17,18,-1,18,10,8,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,12,11,-1,13,20,21,-1,21,14,13,-1,15,21,16,-1,16,9,15,-1,22,27,26,-1,26,25,24,-1,22,26,24,-1,23,22,24,-1,0,22,23,-1,23,1,0,-1,1,23,24,-1,24,5,1,-1,6,24,25,-1,25,7,6,-1,4,25,26,-1,26,3,4,-1,3,26,27,-1,27,2,3,-1,2,27,22,-1,22,0,2,-1]
Coordinate283 = x3d.Coordinate()

IndexedFaceSet282.coord = Coordinate283
TextureCoordinate284 = x3d.TextureCoordinate()

IndexedFaceSet282.texCoord = TextureCoordinate284

Shape278.geometry = IndexedFaceSet282

HAnimSegment277.children.append(Shape278)
HAnimSite285 = x3d.HAnimSite()
HAnimSite285.DEF = "l_tarsal_middle_phalanx_4_Sites"
"""None"""

HAnimSegment277.children.append(HAnimSite285)

HAnimJoint276.children.append(HAnimSegment277)
HAnimJoint286 = x3d.HAnimJoint()
HAnimJoint286.name = "l_tarsal_distal_interphalangeal_4"
HAnimJoint286.DEF = "hanim_l_tarsal_distal_interphalangeal_4"
HAnimJoint286.center = [0.1156725,0.009369,0.11369251]
HAnimJoint286.ulimit = [0,0,0]
HAnimJoint286.llimit = [0,0,0]
HAnimSegment287 = x3d.HAnimSegment()
HAnimSegment287.name = "l_tarsal_distal_phalanx_4"
HAnimSegment287.DEF = "hanim_l_tarsal_distal_phalanx_4"
Shape288 = x3d.Shape()
Shape288.DEF = "l_tarsal_distal_phalanx_4_Shape"
Appearance289 = x3d.Appearance()
Material290 = x3d.Material()
Material290.USE = "SurfaceDefault"

Appearance289.material = Material290
ImageTexture291 = x3d.ImageTexture()
ImageTexture291.USE = "JinLOA4TextureAtlas"

Appearance289.texture = ImageTexture291

Shape288.appearance = Appearance289
IndexedFaceSet292 = x3d.IndexedFaceSet()
IndexedFaceSet292.coordIndex = [0,1,2,-1,2,3,0,-1,5,3,2,-1,2,4,5,-1,0,3,7,-1,7,6,0,-1,1,0,6,-1,6,8,1,-1,9,2,1,-1,1,8,9,-1,4,2,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,7,3,5,-1,5,11,7,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,7,12,13,-1,13,6,7,-1,6,13,14,-1,14,8,6,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,7,11,-1]
IndexedFaceSet292.creaseAngle = 3.14159
IndexedFaceSet292.texCoordIndex = [0,1,2,-1,2,3,0,-1,5,3,2,-1,2,4,5,-1,0,3,9,-1,9,8,0,-1,1,0,8,-1,8,10,1,-1,11,2,1,-1,1,10,11,-1,4,2,11,-1,11,12,4,-1,14,6,7,-1,7,13,14,-1,9,3,5,-1,5,15,9,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,9,16,17,-1,17,8,9,-1,8,17,18,-1,18,10,8,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,12,11,-1,13,20,21,-1,21,14,13,-1,15,21,16,-1,16,9,15,-1]
Coordinate293 = x3d.Coordinate()

IndexedFaceSet292.coord = Coordinate293
TextureCoordinate294 = x3d.TextureCoordinate()

IndexedFaceSet292.texCoord = TextureCoordinate294

Shape288.geometry = IndexedFaceSet292

HAnimSegment287.children.append(Shape288)
HAnimSite295 = x3d.HAnimSite()
HAnimSite295.DEF = "l_tarsal_distal_phalanx_4_Sites"
"""(l_tarsal_distal_phalanx_4_tip 0.142 0.011 0.178)"""

HAnimSegment287.children.append(HAnimSite295)

HAnimJoint286.children.append(HAnimSegment287)

HAnimJoint276.children.append(HAnimJoint286)

HAnimJoint266.children.append(HAnimJoint276)

HAnimJoint256.children.append(HAnimJoint266)

HAnimJoint246.children.append(HAnimJoint256)
HAnimJoint296 = x3d.HAnimJoint()
HAnimJoint296.name = "l_tarsometatarsal_5"
HAnimJoint296.DEF = "hanim_l_tarsometatarsal_5"
HAnimJoint296.center = [0.120825,0.020945251,0.03474]
HAnimJoint296.ulimit = [0,0,0]
HAnimJoint296.llimit = [0,0,0]
HAnimSegment297 = x3d.HAnimSegment()
HAnimSegment297.name = "l_metatarsal_5"
HAnimSegment297.DEF = "hanim_l_metatarsal_5"
Shape298 = x3d.Shape()
Shape298.DEF = "l_metatarsal_5_Shape"
Appearance299 = x3d.Appearance()
Material300 = x3d.Material()
Material300.USE = "SurfaceDefault"

Appearance299.material = Material300
ImageTexture301 = x3d.ImageTexture()
ImageTexture301.USE = "JinLOA4TextureAtlas"

Appearance299.texture = ImageTexture301

Shape298.appearance = Appearance299
IndexedFaceSet302 = x3d.IndexedFaceSet()
IndexedFaceSet302.coordIndex = [0,10,1,-1,2,9,17,-1,17,12,2,-1,6,14,11,-1,11,0,6,-1,2,8,7,-1,7,1,2,-1,3,18,19,-1,19,4,3,-1,13,5,20,-1,20,22,13,-1,5,9,10,-1,10,4,5,-1,6,0,1,-1,1,7,6,-1,8,2,12,-1,12,15,8,-1,9,5,13,-1,13,17,9,-1,0,11,16,-1,16,3,0,-1,9,2,1,-1,1,10,9,-1,3,4,10,-1,10,0,3,-1,16,21,18,-1,18,3,16,-1,19,20,5,-1,5,4,19,-1,35,34,33,-1,36,35,33,-1,32,36,33,-1,27,26,25,-1,25,24,27,-1,41,40,39,-1,41,39,45,-1,44,41,45,-1,28,23,29,-1,28,27,24,-1,24,23,28,-1,29,23,31,-1,31,30,29,-1,11,23,24,-1,24,16,11,-1,16,24,25,-1,25,21,16,-1,32,38,37,-1,37,36,32,-1,22,26,27,-1,27,13,22,-1,13,27,28,-1,28,17,13,-1,17,28,29,-1,29,12,17,-1,12,29,30,-1,30,15,12,-1,44,43,42,-1,42,41,44,-1,14,31,23,-1,23,11,14,-1,21,32,33,-1,33,18,21,-1,18,33,34,-1,34,19,18,-1,19,34,35,-1,35,20,19,-1,20,35,36,-1,36,22,20,-1,22,36,37,-1,37,26,22,-1,26,37,38,-1,38,25,26,-1,25,38,32,-1,32,21,25,-1,7,39,40,-1,40,6,7,-1,6,40,41,-1,41,14,6,-1,14,41,42,-1,42,31,14,-1,31,42,43,-1,43,30,31,-1,30,43,44,-1,44,15,30,-1,15,44,45,-1,45,8,15,-1,8,45,39,-1,39,7,8,-1]
IndexedFaceSet302.creaseAngle = 3.14159
IndexedFaceSet302.texCoordIndex = [0,10,1,-1,2,9,17,-1,17,12,2,-1,6,14,11,-1,11,0,6,-1,2,8,7,-1,7,1,2,-1,3,18,19,-1,19,4,3,-1,13,5,20,-1,20,22,13,-1,5,9,10,-1,10,4,5,-1,6,0,1,-1,1,7,6,-1,8,2,12,-1,12,15,8,-1,9,5,13,-1,13,17,9,-1,0,11,16,-1,16,3,0,-1,9,2,1,-1,1,10,9,-1,3,4,10,-1,10,0,3,-1,16,21,18,-1,18,3,16,-1,19,20,5,-1,5,4,19,-1,35,34,33,-1,36,35,33,-1,32,36,33,-1,27,26,25,-1,25,24,27,-1,41,40,39,-1,41,39,45,-1,44,41,45,-1,28,11,29,-1,28,27,24,-1,24,23,28,-1,29,23,31,-1,31,30,29,-1,11,23,24,-1,24,16,11,-1,16,24,25,-1,25,21,16,-1,32,38,37,-1,37,36,32,-1,22,26,27,-1,27,13,22,-1,13,27,28,-1,28,17,13,-1,17,28,29,-1,29,12,17,-1,12,29,30,-1,30,15,12,-1,44,43,42,-1,42,41,44,-1,14,31,23,-1,23,11,14,-1,21,32,33,-1,33,18,21,-1,18,33,34,-1,34,19,18,-1,19,34,35,-1,35,20,19,-1,20,35,36,-1,36,22,20,-1,22,36,37,-1,37,26,22,-1,26,37,38,-1,38,25,26,-1,25,38,32,-1,32,21,25,-1,7,39,40,-1,40,6,7,-1,6,40,41,-1,41,14,6,-1,14,41,42,-1,42,31,14,-1,31,42,43,-1,43,30,31,-1,30,43,44,-1,44,15,30,-1,15,44,45,-1,45,8,15,-1,8,45,39,-1,39,7,8,-1]
Coordinate303 = x3d.Coordinate()

IndexedFaceSet302.coord = Coordinate303
TextureCoordinate304 = x3d.TextureCoordinate()

IndexedFaceSet302.texCoord = TextureCoordinate304

Shape298.geometry = IndexedFaceSet302

HAnimSegment297.children.append(Shape298)
HAnimSite305 = x3d.HAnimSite()
HAnimSite305.DEF = "l_metatarsal_5_Sites"
"""None"""

HAnimSegment297.children.append(HAnimSite305)

HAnimJoint296.children.append(HAnimSegment297)
HAnimJoint306 = x3d.HAnimJoint()
HAnimJoint306.name = "l_metatarsophalangeal_5"
HAnimJoint306.DEF = "hanim_l_metatarsophalangeal_5"
HAnimJoint306.center = [0.124065004,0.013671,0.0865575]
HAnimJoint306.ulimit = [0,0,0]
HAnimJoint306.llimit = [0,0,0]
HAnimSegment307 = x3d.HAnimSegment()
HAnimSegment307.name = "l_tarsal_proximal_phalanx_5"
HAnimSegment307.DEF = "hanim_l_tarsal_proximal_phalanx_5"
Shape308 = x3d.Shape()
Shape308.DEF = "l_tarsal_proximal_phalanx_5_Shape"
Appearance309 = x3d.Appearance()
Material310 = x3d.Material()
Material310.USE = "SurfaceDefault"

Appearance309.material = Material310
ImageTexture311 = x3d.ImageTexture()
ImageTexture311.USE = "JinLOA4TextureAtlas"

Appearance309.texture = ImageTexture311

Shape308.appearance = Appearance309
IndexedFaceSet312 = x3d.IndexedFaceSet()
IndexedFaceSet312.coordIndex = [2,10,11,-1,11,3,2,-1,0,12,14,-1,14,5,0,-1,2,6,13,-1,13,10,2,-1,0,3,11,-1,11,12,0,-1,15,16,0,-1,0,5,15,-1,17,1,2,-1,2,3,17,-1,16,17,3,-1,3,0,16,-1,2,1,4,-1,4,6,2,-1,6,4,8,-1,7,9,18,-1,18,15,7,-1,8,4,18,-1,18,9,8,-1,7,15,5,-1,1,17,20,-1,20,19,1,-1,17,16,21,-1,21,20,17,-1,16,15,22,-1,22,21,16,-1,22,15,18,-1,18,23,22,-1,23,18,4,-1,4,24,23,-1,24,4,1,-1,1,19,24,-1,27,26,25,-1,28,27,25,-1,29,28,25,-1,20,21,22,-1,22,23,24,-1,20,22,24,-1,19,20,24,-1,30,33,32,-1,32,31,30,-1,30,36,35,-1,33,30,35,-1,33,35,34,-1,10,25,26,-1,26,11,10,-1,11,26,27,-1,27,12,11,-1,12,27,28,-1,28,14,12,-1,14,28,29,-1,29,13,14,-1,13,29,25,-1,25,10,13,-1,6,30,31,-1,31,13,6,-1,13,31,32,-1,32,14,13,-1,14,32,33,-1,33,5,14,-1,5,33,34,-1,34,7,5,-1,7,34,35,-1,35,9,7,-1,9,35,36,-1,36,8,9,-1,8,36,30,-1,30,6,8,-1]
IndexedFaceSet312.creaseAngle = 3.14159
IndexedFaceSet312.texCoordIndex = [0,23,24,-1,24,1,0,-1,3,25,27,-1,27,2,3,-1,0,4,26,-1,26,23,0,-1,3,1,24,-1,24,25,3,-1,5,6,7,-1,7,8,5,-1,9,10,11,-1,11,12,9,-1,6,13,14,-1,14,7,6,-1,11,10,17,-1,17,15,11,-1,15,17,18,-1,16,19,20,-1,20,5,16,-1,18,17,22,-1,22,21,18,-1,16,5,8,-1,31,30,35,-1,35,34,31,-1,30,29,36,-1,36,35,30,-1,29,28,37,-1,37,36,29,-1,37,28,33,-1,33,38,37,-1,38,33,32,-1,32,39,38,-1,39,32,31,-1,31,34,39,-1,42,41,40,-1,43,42,40,-1,44,43,40,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,34,35,39,-1,45,48,47,-1,47,46,45,-1,45,51,50,-1,48,45,50,-1,48,50,49,-1,23,40,41,-1,41,24,23,-1,24,41,42,-1,42,25,24,-1,25,42,43,-1,43,27,25,-1,27,43,44,-1,44,26,27,-1,26,44,40,-1,40,23,26,-1,4,45,46,-1,46,26,4,-1,26,46,47,-1,47,27,26,-1,27,47,48,-1,48,2,27,-1,8,48,49,-1,49,16,8,-1,16,49,50,-1,50,19,16,-1,21,50,51,-1,51,18,21,-1,18,51,45,-1,45,15,18,-1]
Coordinate313 = x3d.Coordinate()

IndexedFaceSet312.coord = Coordinate313
TextureCoordinate314 = x3d.TextureCoordinate()

IndexedFaceSet312.texCoord = TextureCoordinate314

Shape308.geometry = IndexedFaceSet312

HAnimSegment307.children.append(Shape308)
HAnimSite315 = x3d.HAnimSite()
HAnimSite315.DEF = "l_tarsal_proximal_phalanx_5_Sites"
"""None"""

HAnimSegment307.children.append(HAnimSite315)

HAnimJoint306.children.append(HAnimSegment307)
HAnimJoint316 = x3d.HAnimJoint()
HAnimJoint316.name = "l_tarsal_proximal_interphalangeal_5"
HAnimJoint316.DEF = "hanim_l_tarsal_proximal_interphalangeal_5"
HAnimJoint316.center = [0.1263825,0.01085625,0.09414]
HAnimJoint316.ulimit = [0,0,0]
HAnimJoint316.llimit = [0,0,0]
HAnimSegment317 = x3d.HAnimSegment()
HAnimSegment317.name = "l_tarsal_middle_phalanx_5"
HAnimSegment317.DEF = "hanim_l_tarsal_middle_phalanx_5"
Shape318 = x3d.Shape()
Shape318.DEF = "l_tarsal_middle_phalanx_5_Shape"
Appearance319 = x3d.Appearance()
Material320 = x3d.Material()
Material320.USE = "SurfaceDefault"

Appearance319.material = Material320
ImageTexture321 = x3d.ImageTexture()
ImageTexture321.USE = "JinLOA4TextureAtlas"

Appearance319.texture = ImageTexture321

Shape318.appearance = Appearance319
IndexedFaceSet322 = x3d.IndexedFaceSet()
IndexedFaceSet322.coordIndex = [6,7,1,-1,1,0,6,-1,7,8,2,-1,2,1,7,-1,8,9,3,-1,3,2,8,-1,3,9,10,-1,10,4,3,-1,4,10,11,-1,11,5,4,-1,5,11,6,-1,6,0,5,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1,1,18,19,-1,19,0,1,-1,0,19,20,-1,20,5,0,-1,5,20,21,-1,21,4,5,-1,4,21,22,-1,22,3,4,-1,3,22,23,-1,23,2,3,-1,2,23,18,-1,18,1,2,-1]
IndexedFaceSet322.creaseAngle = 3.14159
IndexedFaceSet322.texCoordIndex = [6,7,0,-1,0,1,6,-1,7,8,2,-1,2,0,7,-1,8,9,3,-1,3,2,8,-1,3,9,10,-1,10,4,3,-1,4,10,11,-1,11,5,4,-1,5,11,6,-1,6,1,5,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1,0,18,19,-1,19,1,0,-1,1,19,20,-1,20,5,1,-1,5,20,21,-1,21,4,5,-1,4,21,22,-1,22,3,4,-1,3,22,23,-1,23,2,3,-1,2,23,18,-1,18,0,2,-1]
Coordinate323 = x3d.Coordinate()

IndexedFaceSet322.coord = Coordinate323
TextureCoordinate324 = x3d.TextureCoordinate()

IndexedFaceSet322.texCoord = TextureCoordinate324

Shape318.geometry = IndexedFaceSet322

HAnimSegment317.children.append(Shape318)
HAnimSite325 = x3d.HAnimSite()
HAnimSite325.DEF = "l_tarsal_middle_phalanx_5_Sites"
"""(l_metatarsal_phalanx_5 0.1825 0.0070 0.0928)"""

HAnimSegment317.children.append(HAnimSite325)

HAnimJoint316.children.append(HAnimSegment317)
HAnimJoint326 = x3d.HAnimJoint()
HAnimJoint326.name = "l_tarsal_distal_interphalangeal_5"
HAnimJoint326.DEF = "hanim_l_tarsal_distal_interphalangeal_5"
HAnimJoint326.center = [0.1272825,0.008563501,0.10188]
HAnimJoint326.ulimit = [0,0,0]
HAnimJoint326.llimit = [0,0,0]
HAnimSegment327 = x3d.HAnimSegment()
HAnimSegment327.name = "l_tarsal_distal_phalanx_5"
HAnimSegment327.DEF = "hanim_l_tarsal_distal_phalanx_5"
Shape328 = x3d.Shape()
Shape328.DEF = "l_tarsal_distal_phalanx_5_Shape"
Appearance329 = x3d.Appearance()
Material330 = x3d.Material()
Material330.USE = "SurfaceDefault"

Appearance329.material = Material330
ImageTexture331 = x3d.ImageTexture()
ImageTexture331.USE = "JinLOA4TextureAtlas"

Appearance329.texture = ImageTexture331

Shape328.appearance = Appearance329
IndexedFaceSet332 = x3d.IndexedFaceSet()
IndexedFaceSet332.coordIndex = [2,3,4,-1,4,1,2,-1,0,1,4,-1,4,5,0,-1,7,1,0,-1,0,6,7,-1,2,1,7,-1,7,8,2,-1,9,3,2,-1,2,8,9,-1,10,4,3,-1,3,9,10,-1,5,4,10,-1,10,11,5,-1,0,5,11,-1,11,6,0,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1]
IndexedFaceSet332.creaseAngle = 3.14159
IndexedFaceSet332.texCoordIndex = [1,2,3,-1,3,0,1,-1,5,0,3,-1,3,4,5,-1,9,0,5,-1,5,8,9,-1,1,0,9,-1,9,10,1,-1,12,6,7,-1,7,11,12,-1,14,3,2,-1,2,13,14,-1,4,3,14,-1,14,15,4,-1,5,4,15,-1,15,8,5,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,11,18,19,-1,19,12,11,-1,13,19,20,-1,20,14,13,-1,14,20,21,-1,21,15,14,-1,15,21,16,-1,16,8,15,-1]
Coordinate333 = x3d.Coordinate()

IndexedFaceSet332.coord = Coordinate333
TextureCoordinate334 = x3d.TextureCoordinate()

IndexedFaceSet332.texCoord = TextureCoordinate334

Shape328.geometry = IndexedFaceSet332

HAnimSegment327.children.append(Shape328)
HAnimSite335 = x3d.HAnimSite()
HAnimSite335.DEF = "l_tarsal_distal_phalanx_5_Sites"
"""(l_tarsal_distal_phalanx_5_tip 0.154 0.010 0.168)"""

HAnimSegment327.children.append(HAnimSite335)

HAnimJoint326.children.append(HAnimSegment327)

HAnimJoint316.children.append(HAnimJoint326)

HAnimJoint306.children.append(HAnimJoint316)

HAnimJoint296.children.append(HAnimJoint306)

HAnimJoint246.children.append(HAnimJoint296)

HAnimJoint236.children.append(HAnimJoint246)

HAnimJoint76.children.append(HAnimJoint236)

HAnimJoint66.children.append(HAnimJoint76)

HAnimJoint56.children.append(HAnimJoint66)

HAnimJoint46.children.append(HAnimJoint56)
HAnimJoint336 = x3d.HAnimJoint()
HAnimJoint336.name = "r_hip"
HAnimJoint336.DEF = "hanim_r_hip"
HAnimJoint336.center = [-0.094657496,0.8266501,-0.018348752]
HAnimJoint336.ulimit = [0,0,0]
HAnimJoint336.llimit = [0,0,0]
HAnimSegment337 = x3d.HAnimSegment()
HAnimSegment337.name = "r_thigh"
HAnimSegment337.DEF = "hanim_r_thigh"
Shape338 = x3d.Shape()
Shape338.DEF = "r_thigh_Shape"
Appearance339 = x3d.Appearance()
Material340 = x3d.Material()
Material340.USE = "SurfaceDefault"

Appearance339.material = Material340
ImageTexture341 = x3d.ImageTexture()
ImageTexture341.USE = "JinLOA4TextureAtlas"

Appearance339.texture = ImageTexture341

Shape338.appearance = Appearance339
IndexedFaceSet342 = x3d.IndexedFaceSet()
IndexedFaceSet342.coordIndex = [43,44,45,-1,42,43,45,-1,45,46,47,-1,42,45,47,-1,48,42,47,-1,0,7,8,-1,8,1,0,-1,1,8,9,-1,9,2,1,-1,2,9,10,-1,10,3,2,-1,3,10,11,-1,11,4,3,-1,4,11,12,-1,12,5,4,-1,5,12,13,-1,13,6,5,-1,6,13,7,-1,7,0,6,-1,7,14,15,-1,15,8,7,-1,8,15,16,-1,16,9,8,-1,9,16,17,-1,17,10,9,-1,10,17,18,-1,18,11,10,-1,11,18,19,-1,19,12,11,-1,12,19,20,-1,20,13,12,-1,13,20,14,-1,14,7,13,-1,14,21,22,-1,22,15,14,-1,15,22,23,-1,23,16,15,-1,16,23,24,-1,24,17,16,-1,17,24,25,-1,25,18,17,-1,18,25,26,-1,26,19,18,-1,19,26,27,-1,27,20,19,-1,20,27,21,-1,21,14,20,-1,60,59,58,-1,61,60,58,-1,58,57,56,-1,61,58,56,-1,62,61,56,-1,29,22,21,-1,21,28,29,-1,30,23,22,-1,22,29,30,-1,31,24,23,-1,23,30,31,-1,32,25,24,-1,24,31,32,-1,33,26,25,-1,25,32,33,-1,34,27,26,-1,26,33,34,-1,28,21,27,-1,27,34,28,-1,36,29,28,-1,28,35,36,-1,37,30,29,-1,29,36,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,35,28,34,-1,34,41,35,-1,42,0,1,-1,1,43,42,-1,43,1,2,-1,2,44,43,-1,44,2,3,-1,3,45,44,-1,45,3,4,-1,4,46,45,-1,46,4,5,-1,5,47,46,-1,47,5,6,-1,6,48,47,-1,48,6,0,-1,0,42,48,-1,50,36,35,-1,35,49,50,-1,51,37,36,-1,36,50,51,-1,52,38,37,-1,37,51,52,-1,53,39,38,-1,38,52,53,-1,54,40,39,-1,39,53,54,-1,55,41,40,-1,40,54,55,-1,49,35,41,-1,41,55,49,-1,57,50,49,-1,49,56,57,-1,58,51,50,-1,50,57,58,-1,59,52,51,-1,51,58,59,-1,60,53,52,-1,52,59,60,-1,61,54,53,-1,53,60,61,-1,62,55,54,-1,54,61,62,-1,56,49,55,-1,55,62,56,-1]
IndexedFaceSet342.creaseAngle = 3.14159
IndexedFaceSet342.texCoordIndex = [0,2,3,-1,1,0,3,-1,3,4,5,-1,1,3,5,-1,6,1,5,-1,7,9,8,-1,8,10,7,-1,10,8,11,-1,11,12,10,-1,12,11,13,-1,13,14,12,-1,14,13,15,-1,15,16,14,-1,16,15,17,-1,17,18,16,-1,18,17,19,-1,19,20,18,-1,20,19,9,-1,9,7,20,-1,9,22,21,-1,21,8,9,-1,8,21,23,-1,23,11,8,-1,11,23,24,-1,24,13,11,-1,13,24,25,-1,25,15,13,-1,15,25,26,-1,26,17,15,-1,17,26,27,-1,27,19,17,-1,19,27,22,-1,22,9,19,-1,22,29,28,-1,28,21,22,-1,21,28,30,-1,30,23,21,-1,23,30,31,-1,31,24,23,-1,24,31,32,-1,32,25,24,-1,25,32,33,-1,33,26,25,-1,26,33,34,-1,34,27,26,-1,27,34,29,-1,29,22,27,-1,46,45,44,-1,47,46,44,-1,44,43,42,-1,47,44,42,-1,48,47,42,-1,35,28,29,-1,29,36,35,-1,37,30,28,-1,28,35,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,36,29,34,-1,34,41,36,-1,51,50,49,-1,49,52,51,-1,54,53,50,-1,50,51,54,-1,56,55,53,-1,53,54,56,-1,58,57,55,-1,55,56,58,-1,60,59,57,-1,57,58,60,-1,62,61,59,-1,59,60,62,-1,52,49,61,-1,61,62,52,-1,1,7,10,-1,10,0,1,-1,0,10,12,-1,12,2,0,-1,2,12,14,-1,14,3,2,-1,3,14,16,-1,16,4,3,-1,4,16,18,-1,18,5,4,-1,5,18,20,-1,20,6,5,-1,6,20,7,-1,7,1,6,-1,63,51,52,-1,52,64,63,-1,65,54,51,-1,51,63,65,-1,66,56,54,-1,54,65,66,-1,67,58,56,-1,56,66,67,-1,68,60,58,-1,58,67,68,-1,69,62,60,-1,60,68,69,-1,64,52,62,-1,62,69,64,-1,43,63,64,-1,64,42,43,-1,44,65,63,-1,63,43,44,-1,45,66,65,-1,65,44,45,-1,46,67,66,-1,66,45,46,-1,47,68,67,-1,67,46,47,-1,48,69,68,-1,68,47,48,-1,42,64,69,-1,69,48,42,-1]
Coordinate343 = x3d.Coordinate()

IndexedFaceSet342.coord = Coordinate343
TextureCoordinate344 = x3d.TextureCoordinate()

IndexedFaceSet342.texCoord = TextureCoordinate344

Shape338.geometry = IndexedFaceSet342

HAnimSegment337.children.append(Shape338)
HAnimSite345 = x3d.HAnimSite()
HAnimSite345.DEF = "r_thigh_Sites"
"""(r_knee_crease -0.0825 0.4932 -0.0326) (r_femoral_lateral_epicn -0.1421 0.4992 0.0310) (r_femoral_medial_epicn -0.0221 0.5014 0.0289) (r_suprapatella x y z)"""

HAnimSegment337.children.append(HAnimSite345)

HAnimJoint336.children.append(HAnimSegment337)
HAnimJoint346 = x3d.HAnimJoint()
HAnimJoint346.name = "r_knee"
HAnimJoint346.DEF = "hanim_r_knee"
HAnimJoint346.center = [-0.09261001,0.408825,-0.01943775]
HAnimJoint346.ulimit = [0,0,0]
HAnimJoint346.llimit = [0,0,0]
HAnimSegment347 = x3d.HAnimSegment()
HAnimSegment347.name = "r_calf"
HAnimSegment347.DEF = "hanim_r_calf"
Shape348 = x3d.Shape()
Shape348.DEF = "r_calf_Shape"
Appearance349 = x3d.Appearance()
Material350 = x3d.Material()
Material350.USE = "SurfaceDefault"

Appearance349.material = Material350
ImageTexture351 = x3d.ImageTexture()
ImageTexture351.USE = "JinLOA4TextureAtlas"

Appearance349.texture = ImageTexture351

Shape348.appearance = Appearance349
IndexedFaceSet352 = x3d.IndexedFaceSet()
IndexedFaceSet352.coordIndex = [0,1,2,-1,2,3,4,-1,2,4,5,-1,0,2,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1]
IndexedFaceSet352.creaseAngle = 3.14159
IndexedFaceSet352.texCoordIndex = [0,1,2,-1,2,3,4,-1,2,4,5,-1,0,2,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1]
Coordinate353 = x3d.Coordinate()

IndexedFaceSet352.coord = Coordinate353
TextureCoordinate354 = x3d.TextureCoordinate()

IndexedFaceSet352.texCoord = TextureCoordinate354

Shape348.geometry = IndexedFaceSet352

HAnimSegment347.children.append(Shape348)
HAnimSite355 = x3d.HAnimSite()
HAnimSite355.DEF = "r_calf_Sites"
"""(r_tibiale x y z) (r_medial_malleolus -0.0591 0.0760 -0.0928) (r_lateral_malleolus -0.1006 0.0658 -0.1075)"""

HAnimSegment347.children.append(HAnimSite355)

HAnimJoint346.children.append(HAnimSegment347)
HAnimJoint356 = x3d.HAnimJoint()
HAnimJoint356.name = "r_talocrural"
HAnimJoint356.DEF = "hanim_r_talocrural"
HAnimJoint356.center = [-0.088447504,0.09544501,-0.010451251]
HAnimJoint356.ulimit = [0,0,0]
HAnimJoint356.llimit = [0,0,0]
HAnimSegment357 = x3d.HAnimSegment()
HAnimSegment357.name = "r_talus"
HAnimSegment357.DEF = "hanim_r_talus"
Shape358 = x3d.Shape()
Shape358.DEF = "r_talus_Shape"
Appearance359 = x3d.Appearance()
Material360 = x3d.Material()
Material360.USE = "SurfaceDefault"

Appearance359.material = Material360
ImageTexture361 = x3d.ImageTexture()
ImageTexture361.USE = "JinLOA4TextureAtlas"

Appearance359.texture = ImageTexture361

Shape358.appearance = Appearance359
IndexedFaceSet362 = x3d.IndexedFaceSet()
IndexedFaceSet362.coordIndex = [13,15,21,-1,21,34,13,-1,9,34,21,-1,21,20,9,-1,0,15,14,-1,14,2,0,-1,30,33,16,-1,16,3,30,-1,3,16,25,-1,25,4,3,-1,22,17,18,-1,18,5,22,-1,5,18,29,-1,29,6,5,-1,6,19,27,-1,7,20,21,-1,21,1,7,-1,1,21,15,-1,15,0,1,-1,15,13,32,-1,32,14,15,-1,33,11,12,-1,12,16,33,-1,25,16,12,-1,12,23,25,-1,17,24,10,-1,10,18,17,-1,18,10,28,-1,28,29,18,-1,19,8,26,-1,26,27,19,-1,4,25,17,-1,17,22,4,-1,25,23,24,-1,24,17,25,-1,20,27,26,-1,26,9,20,-1,6,27,20,-1,20,7,6,-1,29,28,8,-1,8,19,29,-1,6,29,19,-1,1,0,31,-1,0,2,31,-1,31,30,3,-1,3,4,31,-1,4,22,31,-1,22,5,31,-1,5,6,31,-1,6,7,31,-1,7,1,31,-1,2,30,31,-1,14,33,30,-1,30,2,14,-1,32,11,33,-1,33,14,32,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,39,43,45,-1,45,46,35,-1,39,45,35,-1,37,39,35,-1,36,37,35,-1,26,8,36,-1,36,35,26,-1,8,28,37,-1,37,36,8,-1,28,10,38,-1,38,37,28,-1,10,24,39,-1,39,38,10,-1,24,23,40,-1,40,39,24,-1,23,12,41,-1,41,40,23,-1,12,11,42,-1,42,41,12,-1,11,32,43,-1,43,42,11,-1,32,13,44,-1,44,43,32,-1,13,34,45,-1,45,44,13,-1,34,9,46,-1,46,45,34,-1,9,26,35,-1,35,46,9,-1]
IndexedFaceSet362.creaseAngle = 3.14159
IndexedFaceSet362.texCoordIndex = [5,12,27,-1,27,34,5,-1,7,34,27,-1,27,28,7,-1,9,12,11,-1,11,10,9,-1,30,33,14,-1,14,13,30,-1,13,14,16,-1,16,15,13,-1,17,20,19,-1,19,18,17,-1,18,19,22,-1,22,21,18,-1,21,24,23,-1,25,28,27,-1,27,26,25,-1,26,27,12,-1,12,9,26,-1,12,5,32,-1,32,11,12,-1,33,3,4,-1,4,14,33,-1,16,14,4,-1,4,8,16,-1,20,6,2,-1,2,19,20,-1,19,2,29,-1,29,22,19,-1,24,0,1,-1,1,23,24,-1,15,16,20,-1,20,17,15,-1,16,8,6,-1,6,20,16,-1,28,23,1,-1,1,7,28,-1,21,23,28,-1,28,25,21,-1,22,29,0,-1,0,24,22,-1,21,22,24,-1,26,9,31,-1,9,10,31,-1,31,30,13,-1,13,15,31,-1,15,17,31,-1,17,18,31,-1,18,21,31,-1,21,25,31,-1,25,26,31,-1,10,30,31,-1,11,33,30,-1,30,10,11,-1,32,3,33,-1,33,11,32,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,39,43,45,-1,45,46,35,-1,39,45,35,-1,37,39,35,-1,36,37,35,-1,1,0,36,-1,36,35,1,-1,0,29,37,-1,37,36,0,-1,29,2,38,-1,38,37,29,-1,2,6,39,-1,39,38,2,-1,6,8,40,-1,40,39,6,-1,8,4,41,-1,41,40,8,-1,4,3,42,-1,42,41,4,-1,3,32,43,-1,43,42,3,-1,32,5,44,-1,44,43,32,-1,5,34,45,-1,45,44,5,-1,34,7,46,-1,46,45,34,-1,7,1,35,-1,35,46,7,-1]
Coordinate363 = x3d.Coordinate()

IndexedFaceSet362.coord = Coordinate363
TextureCoordinate364 = x3d.TextureCoordinate()

IndexedFaceSet362.texCoord = TextureCoordinate364

Shape358.geometry = IndexedFaceSet362

HAnimSegment357.children.append(Shape358)
HAnimSite365 = x3d.HAnimSite()
HAnimSite365.DEF = "r_talus_Sites"
"""(r_sphyrion -0.0603 0.0610 -0.1002) (r_calcaneous_posterior -0.0692 0.0297 -0.1221)"""

HAnimSegment357.children.append(HAnimSite365)

HAnimJoint356.children.append(HAnimSegment357)
HAnimJoint366 = x3d.HAnimJoint()
HAnimJoint366.name = "r_talocalcaneonavicular"
HAnimJoint366.DEF = "hanim_r_talocalcaneonavicular"
HAnimJoint366.center = [-0.07794,0.036900003,0.0048645]
HAnimJoint366.ulimit = [0,0,0]
HAnimJoint366.llimit = [0,0,0]
HAnimSegment367 = x3d.HAnimSegment()
HAnimSegment367.name = "r_navicular"
HAnimSegment367.DEF = "hanim_r_navicular"
Shape368 = x3d.Shape()
Shape368.DEF = "r_navicular_Shape"
Appearance369 = x3d.Appearance()
Material370 = x3d.Material()
Material370.USE = "SurfaceDefault"

Appearance369.material = Material370
ImageTexture371 = x3d.ImageTexture()
ImageTexture371.USE = "JinLOA4TextureAtlas"

Appearance369.texture = ImageTexture371

Shape368.appearance = Appearance369
IndexedFaceSet372 = x3d.IndexedFaceSet()
IndexedFaceSet372.coordIndex = [7,6,11,-1,11,12,7,-1,1,17,18,-1,18,2,1,-1,12,10,5,-1,5,7,12,-1,2,11,6,-1,5,10,13,-1,13,0,5,-1,1,3,14,-1,14,17,1,-1,11,2,18,-1,4,15,16,-1,16,8,4,-1,8,16,9,-1,3,9,16,-1,16,14,3,-1,26,27,28,-1,28,19,20,-1,20,21,22,-1,22,23,24,-1,20,22,24,-1,28,20,24,-1,26,28,24,-1,25,26,24,-1,38,39,42,-1,42,43,38,-1,37,29,30,-1,30,31,32,-1,37,30,32,-1,32,33,34,-1,37,32,34,-1,37,34,35,-1,37,35,36,-1,1,2,20,-1,20,19,1,-1,2,6,21,-1,21,20,2,-1,6,7,22,-1,22,21,6,-1,7,5,23,-1,23,22,7,-1,5,0,24,-1,24,23,5,-1,38,43,44,-1,44,45,38,-1,4,8,26,-1,26,25,4,-1,8,9,27,-1,27,26,8,-1,9,3,28,-1,28,27,9,-1,3,1,19,-1,19,28,3,-1,10,12,30,-1,30,29,10,-1,12,11,31,-1,31,30,12,-1,11,18,32,-1,32,31,11,-1,18,17,33,-1,33,32,18,-1,17,14,34,-1,34,33,17,-1,14,16,35,-1,35,34,14,-1,16,15,36,-1,36,35,16,-1,42,39,40,-1,40,41,42,-1,13,10,29,-1,29,37,13,-1,0,13,39,-1,39,38,0,-1,13,37,40,-1,40,39,13,-1,37,36,41,-1,41,40,37,-1,36,15,42,-1,42,41,36,-1,15,4,43,-1,43,42,15,-1,4,25,44,-1,44,43,4,-1,25,24,45,-1,45,44,25,-1,24,0,38,-1,38,45,24,-1]
IndexedFaceSet372.creaseAngle = 3.14159
IndexedFaceSet372.texCoordIndex = [7,6,11,-1,11,12,7,-1,1,17,18,-1,18,2,1,-1,12,10,5,-1,5,7,12,-1,2,11,6,-1,5,10,13,-1,13,0,5,-1,1,3,14,-1,14,17,1,-1,11,2,18,-1,4,15,16,-1,16,8,4,-1,8,16,9,-1,3,9,16,-1,16,14,3,-1,26,27,28,-1,28,19,20,-1,20,21,22,-1,22,23,24,-1,20,22,24,-1,28,20,24,-1,26,28,24,-1,25,26,24,-1,38,39,42,-1,42,43,38,-1,37,29,30,-1,30,31,32,-1,37,30,32,-1,32,33,34,-1,37,32,34,-1,37,34,35,-1,37,35,36,-1,1,2,20,-1,20,19,1,-1,2,6,21,-1,21,20,2,-1,6,7,22,-1,22,21,6,-1,7,5,23,-1,23,22,7,-1,5,0,24,-1,24,23,5,-1,38,43,44,-1,44,45,38,-1,4,8,26,-1,26,25,4,-1,8,9,27,-1,27,26,8,-1,9,3,28,-1,28,27,9,-1,3,1,19,-1,19,28,3,-1,10,12,30,-1,30,29,10,-1,12,11,31,-1,31,30,12,-1,11,18,32,-1,32,31,11,-1,18,17,33,-1,33,32,18,-1,17,14,34,-1,34,33,17,-1,14,16,35,-1,35,34,14,-1,16,15,36,-1,36,35,16,-1,42,39,40,-1,40,41,42,-1,13,10,29,-1,29,37,13,-1,0,13,39,-1,39,38,0,-1,13,37,40,-1,40,39,13,-1,37,36,41,-1,41,40,37,-1,36,15,42,-1,42,41,36,-1,15,4,43,-1,43,42,15,-1,4,25,44,-1,44,43,4,-1,25,24,45,-1,45,44,25,-1,24,0,38,-1,38,45,24,-1]
Coordinate373 = x3d.Coordinate()

IndexedFaceSet372.coord = Coordinate373
TextureCoordinate374 = x3d.TextureCoordinate()

IndexedFaceSet372.texCoord = TextureCoordinate374

Shape368.geometry = IndexedFaceSet372

HAnimSegment367.children.append(Shape368)
HAnimSite375 = x3d.HAnimSite()
HAnimSite375.DEF = "r_navicular_Sites"
"""None"""

HAnimSegment367.children.append(HAnimSite375)

HAnimJoint366.children.append(HAnimSegment367)
HAnimJoint376 = x3d.HAnimJoint()
HAnimJoint376.name = "r_cuneonavicular_1"
HAnimJoint376.DEF = "hanim_r_cuneonavicular_1"
HAnimJoint376.center = [-0.0669825,0.032107502,0.018391501]
HAnimJoint376.ulimit = [0,0,0]
HAnimJoint376.llimit = [0,0,0]
HAnimSegment377 = x3d.HAnimSegment()
HAnimSegment377.name = "r_cuneiform_1"
HAnimSegment377.DEF = "hanim_r_cuneiform_1"
Shape378 = x3d.Shape()
Shape378.DEF = "r_cuneiform_1_Shape"
Appearance379 = x3d.Appearance()
Material380 = x3d.Material()
Material380.USE = "SurfaceDefault"

Appearance379.material = Material380
ImageTexture381 = x3d.ImageTexture()
ImageTexture381.USE = "JinLOA4TextureAtlas"

Appearance379.texture = ImageTexture381

Shape378.appearance = Appearance379
IndexedFaceSet382 = x3d.IndexedFaceSet()
IndexedFaceSet382.coordIndex = [0,4,12,-1,1,7,6,-1,6,0,1,-1,10,1,0,-1,0,12,10,-1,1,10,11,-1,11,2,1,-1,8,5,2,-1,2,3,8,-1,11,13,2,-1,12,4,15,-1,9,4,0,-1,0,6,9,-1,1,2,5,-1,5,7,1,-1,3,2,13,-1,13,14,3,-1,22,23,24,-1,22,24,25,-1,28,22,25,-1,13,11,10,-1,10,12,15,-1,13,10,15,-1,14,13,15,-1,16,17,18,-1,18,19,16,-1,21,16,19,-1,19,20,21,-1,3,14,17,-1,17,16,3,-1,14,15,18,-1,18,17,14,-1,15,4,19,-1,19,18,15,-1,4,9,20,-1,20,19,4,-1,28,25,26,-1,26,27,28,-1,8,3,16,-1,16,21,8,-1,6,7,23,-1,23,22,6,-1,7,5,24,-1,24,23,7,-1,5,8,25,-1,25,24,5,-1,8,21,26,-1,26,25,8,-1,21,20,27,-1,27,26,21,-1,20,9,28,-1,28,27,20,-1,9,6,22,-1,22,28,9,-1]
IndexedFaceSet382.creaseAngle = 3.14159
IndexedFaceSet382.texCoordIndex = [0,1,12,-1,2,7,6,-1,6,0,2,-1,10,2,0,-1,0,12,10,-1,2,10,11,-1,11,3,2,-1,8,5,3,-1,3,4,8,-1,11,13,3,-1,12,1,15,-1,9,1,0,-1,0,6,9,-1,2,3,5,-1,5,7,2,-1,4,3,13,-1,13,14,4,-1,22,23,24,-1,22,24,25,-1,28,22,25,-1,13,11,10,-1,10,12,15,-1,13,10,15,-1,14,13,15,-1,16,17,18,-1,18,19,16,-1,21,16,19,-1,19,20,21,-1,4,14,17,-1,17,16,4,-1,14,15,18,-1,18,17,14,-1,15,1,19,-1,19,18,15,-1,1,9,20,-1,20,19,1,-1,28,25,26,-1,26,27,28,-1,8,4,16,-1,16,21,8,-1,6,7,23,-1,23,22,6,-1,7,5,24,-1,24,23,7,-1,5,8,25,-1,25,24,5,-1,8,21,26,-1,26,25,8,-1,21,20,27,-1,27,26,21,-1,20,9,28,-1,28,27,20,-1,9,6,22,-1,22,28,9,-1]
Coordinate383 = x3d.Coordinate()

IndexedFaceSet382.coord = Coordinate383
TextureCoordinate384 = x3d.TextureCoordinate()

IndexedFaceSet382.texCoord = TextureCoordinate384

Shape378.geometry = IndexedFaceSet382

HAnimSegment377.children.append(Shape378)
HAnimSite385 = x3d.HAnimSite()
HAnimSite385.DEF = "r_cuneiform_1_Sites"
"""None"""

HAnimSegment377.children.append(HAnimSite385)

HAnimJoint376.children.append(HAnimSegment377)
HAnimJoint386 = x3d.HAnimJoint()
HAnimJoint386.name = "r_tarsometatarsal_1"
HAnimJoint386.DEF = "hanim_r_tarsometatarsal_1"
HAnimJoint386.center = [-0.06426,0.023242502,0.04419]
HAnimJoint386.ulimit = [0,0,0]
HAnimJoint386.llimit = [0,0,0]
HAnimSegment387 = x3d.HAnimSegment()
HAnimSegment387.name = "r_metatarsal_1"
HAnimSegment387.DEF = "hanim_r_metatarsal_1"
Shape388 = x3d.Shape()
Shape388.DEF = "r_metatarsal_1_Shape"
Appearance389 = x3d.Appearance()
Material390 = x3d.Material()
Material390.USE = "SurfaceDefault"

Appearance389.material = Material390
ImageTexture391 = x3d.ImageTexture()
ImageTexture391.USE = "JinLOA4TextureAtlas"

Appearance389.texture = ImageTexture391

Shape388.appearance = Appearance389
IndexedFaceSet392 = x3d.IndexedFaceSet()
IndexedFaceSet392.coordIndex = [0,14,11,-1,5,0,2,-1,2,7,5,-1,1,2,9,-1,9,10,1,-1,15,23,20,-1,20,8,15,-1,3,21,19,-1,19,4,3,-1,13,18,10,-1,10,4,13,-1,12,16,6,-1,6,1,12,-1,6,7,2,-1,2,1,6,-1,5,17,14,-1,14,0,5,-1,10,9,3,-1,3,4,10,-1,9,2,0,-1,0,11,9,-1,10,18,12,-1,12,1,10,-1,8,3,9,-1,9,11,8,-1,8,11,14,-1,14,15,8,-1,21,3,8,-1,8,20,21,-1,13,4,19,-1,19,22,13,-1,34,35,36,-1,34,36,39,-1,34,39,33,-1,40,41,42,-1,46,40,42,-1,45,46,42,-1,31,32,29,-1,29,30,31,-1,32,24,29,-1,24,25,28,-1,28,29,24,-1,25,26,27,-1,27,28,25,-1,18,13,25,-1,25,24,18,-1,13,22,26,-1,26,25,13,-1,45,42,43,-1,43,44,45,-1,23,15,28,-1,28,27,23,-1,15,14,29,-1,29,28,15,-1,14,17,30,-1,30,29,14,-1,39,36,37,-1,37,38,39,-1,16,12,32,-1,32,31,16,-1,12,18,24,-1,24,32,12,-1,5,7,34,-1,34,33,5,-1,7,6,35,-1,35,34,7,-1,6,16,36,-1,36,35,6,-1,16,31,37,-1,37,36,16,-1,31,30,38,-1,38,37,31,-1,30,17,39,-1,39,38,30,-1,17,5,33,-1,33,39,17,-1,21,20,41,-1,41,40,21,-1,20,23,42,-1,42,41,20,-1,23,27,43,-1,43,42,23,-1,27,26,44,-1,44,43,27,-1,26,22,45,-1,45,44,26,-1,22,19,46,-1,46,45,22,-1,19,21,40,-1,40,46,19,-1]
IndexedFaceSet392.creaseAngle = 3.14159
IndexedFaceSet392.texCoordIndex = [1,14,11,-1,5,1,2,-1,2,7,5,-1,3,2,9,-1,9,10,3,-1,15,23,20,-1,20,8,15,-1,0,21,19,-1,19,4,0,-1,13,18,10,-1,10,4,13,-1,12,16,6,-1,6,3,12,-1,6,7,2,-1,2,3,6,-1,5,17,14,-1,14,1,5,-1,10,9,0,-1,0,4,10,-1,9,2,1,-1,1,11,9,-1,10,18,12,-1,12,3,10,-1,8,0,9,-1,9,11,8,-1,8,11,14,-1,14,15,8,-1,21,0,8,-1,8,20,21,-1,13,4,19,-1,19,22,13,-1,34,35,36,-1,34,36,39,-1,34,39,33,-1,40,41,42,-1,46,40,42,-1,45,46,42,-1,31,32,29,-1,29,30,31,-1,32,24,14,-1,24,25,28,-1,28,29,24,-1,25,26,27,-1,27,28,25,-1,18,13,25,-1,25,24,18,-1,13,22,26,-1,26,25,13,-1,45,42,43,-1,43,44,45,-1,23,15,28,-1,28,27,23,-1,15,14,29,-1,29,28,15,-1,14,17,30,-1,30,29,14,-1,39,36,37,-1,37,38,39,-1,16,12,32,-1,32,31,16,-1,12,18,24,-1,24,32,12,-1,5,7,34,-1,34,33,5,-1,7,6,35,-1,35,34,7,-1,6,16,36,-1,36,35,6,-1,16,31,37,-1,37,36,16,-1,31,30,38,-1,38,37,31,-1,30,17,39,-1,39,38,30,-1,17,5,33,-1,33,39,17,-1,21,20,41,-1,41,40,21,-1,20,23,42,-1,42,41,20,-1,23,27,43,-1,43,42,23,-1,27,26,44,-1,44,43,27,-1,26,22,45,-1,45,44,26,-1,22,19,46,-1,46,45,22,-1,19,21,40,-1,40,46,19,-1]
Coordinate393 = x3d.Coordinate()

IndexedFaceSet392.coord = Coordinate393
TextureCoordinate394 = x3d.TextureCoordinate()

IndexedFaceSet392.texCoord = TextureCoordinate394

Shape388.geometry = IndexedFaceSet392

HAnimSegment387.children.append(Shape388)
HAnimSite395 = x3d.HAnimSite()
HAnimSite395.DEF = "r_metatarsal_1_Sites"
"""None"""

HAnimSegment387.children.append(HAnimSite395)

HAnimJoint386.children.append(HAnimSegment387)
HAnimJoint396 = x3d.HAnimJoint()
HAnimJoint396.name = "r_metatarsophalangeal_1"
HAnimJoint396.DEF = "hanim_r_metatarsophalangeal_1"
HAnimJoint396.center = [-0.0617625,0.014424751,0.0936225]
HAnimJoint396.ulimit = [0,0,0]
HAnimJoint396.llimit = [0,0,0]
HAnimSegment397 = x3d.HAnimSegment()
HAnimSegment397.name = "r_tarsal_proximal_phalanx_1"
HAnimSegment397.DEF = "hanim_r_tarsal_proximal_phalanx_1"
Shape398 = x3d.Shape()
Shape398.DEF = "r_tarsal_proximal_phalanx_1_Shape"
Appearance399 = x3d.Appearance()
Material400 = x3d.Material()
Material400.USE = "SurfaceDefault"

Appearance399.material = Material400
ImageTexture401 = x3d.ImageTexture()
ImageTexture401.USE = "JinLOA4TextureAtlas"

Appearance399.texture = ImageTexture401

Shape398.appearance = Appearance399
IndexedFaceSet402 = x3d.IndexedFaceSet()
IndexedFaceSet402.coordIndex = [9,10,17,-1,17,16,9,-1,11,1,2,-1,2,8,11,-1,7,8,2,-1,2,3,7,-1,7,3,4,-1,4,13,7,-1,12,13,4,-1,4,5,12,-1,5,6,0,-1,0,12,5,-1,0,6,1,-1,1,11,0,-1,14,20,19,-1,19,15,14,-1,14,15,17,-1,17,10,14,-1,9,16,18,-1,18,21,9,-1,7,10,9,-1,9,8,7,-1,8,9,21,-1,21,11,8,-1,12,20,14,-1,14,13,12,-1,13,14,10,-1,10,7,13,-1,11,21,22,-1,0,24,23,-1,23,12,0,-1,11,22,24,-1,24,0,11,-1,23,20,12,-1,39,40,41,-1,41,42,37,-1,39,41,37,-1,38,39,37,-1,33,34,35,-1,32,33,35,-1,31,32,35,-1,28,29,25,-1,25,26,27,-1,28,25,27,-1,35,36,30,-1,30,31,35,-1,17,15,26,-1,26,25,17,-1,15,19,27,-1,27,26,15,-1,19,18,28,-1,28,27,19,-1,18,16,29,-1,29,28,18,-1,16,17,25,-1,25,29,16,-1,19,20,31,-1,31,30,19,-1,20,23,32,-1,32,31,20,-1,23,24,33,-1,33,32,23,-1,24,22,34,-1,34,33,24,-1,22,21,35,-1,35,34,22,-1,21,18,36,-1,36,35,21,-1,18,19,30,-1,30,36,18,-1,2,1,38,-1,38,37,2,-1,1,6,39,-1,39,38,1,-1,6,5,40,-1,40,39,6,-1,5,4,41,-1,41,40,5,-1,4,3,42,-1,42,41,4,-1,3,2,37,-1,37,42,3,-1]
IndexedFaceSet402.creaseAngle = 3.14159
IndexedFaceSet402.texCoordIndex = [2,1,29,-1,29,28,2,-1,11,5,4,-1,4,13,11,-1,10,13,4,-1,4,6,10,-1,10,6,7,-1,7,12,10,-1,14,12,7,-1,7,8,14,-1,8,9,3,-1,3,14,8,-1,3,9,5,-1,5,11,3,-1,0,33,31,-1,31,27,0,-1,0,27,29,-1,29,1,0,-1,2,28,30,-1,30,35,2,-1,15,18,17,-1,17,16,15,-1,16,17,34,-1,34,19,16,-1,20,32,22,-1,22,21,20,-1,21,22,24,-1,24,23,21,-1,19,34,36,-1,25,39,37,-1,37,20,25,-1,19,36,38,-1,38,26,19,-1,37,32,20,-1,54,55,56,-1,56,57,52,-1,54,56,52,-1,53,54,52,-1,48,49,50,-1,47,48,50,-1,46,47,50,-1,43,44,40,-1,40,41,42,-1,43,40,42,-1,50,51,45,-1,45,46,50,-1,29,27,41,-1,41,40,29,-1,27,31,42,-1,42,41,27,-1,31,30,43,-1,43,42,31,-1,30,28,44,-1,44,43,30,-1,28,29,40,-1,40,44,28,-1,31,33,46,-1,46,45,31,-1,32,37,47,-1,47,46,32,-1,37,39,48,-1,48,47,37,-1,38,36,49,-1,49,48,38,-1,36,34,50,-1,50,49,36,-1,35,30,51,-1,51,50,35,-1,30,31,45,-1,45,51,30,-1,4,5,53,-1,53,52,4,-1,5,9,54,-1,54,53,5,-1,9,8,55,-1,55,54,9,-1,8,7,56,-1,56,55,8,-1,7,6,57,-1,57,56,7,-1,6,4,52,-1,52,57,6,-1]
Coordinate403 = x3d.Coordinate()

IndexedFaceSet402.coord = Coordinate403
TextureCoordinate404 = x3d.TextureCoordinate()

IndexedFaceSet402.texCoord = TextureCoordinate404

Shape398.geometry = IndexedFaceSet402

HAnimSegment397.children.append(Shape398)
HAnimSite405 = x3d.HAnimSite()
HAnimSite405.DEF = "r_tarsal_proximal_phalanx_1_Sites"
"""None"""

HAnimSegment397.children.append(HAnimSite405)

HAnimJoint396.children.append(HAnimSegment397)
HAnimJoint406 = x3d.HAnimJoint()
HAnimJoint406.name = "r_tarsal_interphalangeal_1"
HAnimJoint406.DEF = "hanim_r_tarsal_interphalangeal_1"
HAnimJoint406.center = [-0.06174,0.0121365,0.1153125]
HAnimJoint406.ulimit = [0,0,0]
HAnimJoint406.llimit = [0,0,0]
HAnimSegment407 = x3d.HAnimSegment()
HAnimSegment407.name = "r_tarsal_distal_phalanx_1"
HAnimSegment407.DEF = "hanim_r_tarsal_distal_phalanx_1"
Shape408 = x3d.Shape()
Shape408.DEF = "r_tarsal_distal_phalanx_1_Shape"
Appearance409 = x3d.Appearance()
Material410 = x3d.Material()
Material410.USE = "SurfaceDefault"

Appearance409.material = Material410
ImageTexture411 = x3d.ImageTexture()
ImageTexture411.USE = "JinLOA4TextureAtlas"

Appearance409.texture = ImageTexture411

Shape408.appearance = Appearance409
IndexedFaceSet412 = x3d.IndexedFaceSet()
IndexedFaceSet412.coordIndex = [3,2,5,-1,5,4,3,-1,1,0,5,-1,5,2,1,-1,1,7,6,-1,6,0,1,-1,8,7,1,-1,1,2,8,-1,3,9,8,-1,8,2,3,-1,10,9,3,-1,3,4,10,-1,11,10,4,-1,4,5,11,-1,0,6,11,-1,11,5,0,-1,7,13,12,-1,12,6,7,-1,14,13,7,-1,7,8,14,-1,9,15,14,-1,14,8,9,-1,16,15,9,-1,9,10,16,-1,17,16,10,-1,10,11,17,-1,6,12,17,-1,17,11,6,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,12,13,19,-1,19,18,12,-1,13,14,20,-1,20,19,13,-1,14,15,21,-1,21,20,14,-1,15,16,22,-1,22,21,15,-1,16,17,23,-1,23,22,16,-1,17,12,18,-1,18,23,17,-1]
IndexedFaceSet412.creaseAngle = 3.14159
IndexedFaceSet412.texCoordIndex = [0,3,2,-1,2,1,0,-1,5,4,2,-1,2,3,5,-1,13,12,15,-1,15,14,13,-1,8,6,5,-1,5,3,8,-1,0,9,8,-1,8,3,0,-1,10,9,0,-1,0,1,10,-1,11,10,1,-1,1,2,11,-1,4,7,11,-1,11,2,4,-1,12,18,16,-1,16,15,12,-1,20,19,6,-1,6,8,20,-1,9,21,20,-1,20,8,9,-1,22,21,9,-1,9,10,22,-1,23,22,10,-1,10,11,23,-1,7,17,23,-1,23,11,7,-1,26,27,28,-1,28,29,24,-1,26,28,24,-1,25,26,24,-1,16,18,25,-1,25,24,16,-1,19,20,26,-1,26,25,19,-1,20,21,27,-1,27,26,20,-1,21,22,28,-1,28,27,21,-1,22,23,29,-1,29,28,22,-1,23,17,24,-1,24,29,23,-1]
Coordinate413 = x3d.Coordinate()

IndexedFaceSet412.coord = Coordinate413
TextureCoordinate414 = x3d.TextureCoordinate()

IndexedFaceSet412.texCoord = TextureCoordinate414

Shape408.geometry = IndexedFaceSet412

HAnimSegment407.children.append(Shape408)
HAnimSite415 = x3d.HAnimSite()
HAnimSite415.DEF = "r_tarsal_distal_phalanx_1_Sites"
"""(r_metatarsal_phalanx_1 x y z) (r_tarsal_distal_phalanx_1_tip -0.1043 -0.0227 0.1450)"""

HAnimSegment407.children.append(HAnimSite415)

HAnimJoint406.children.append(HAnimSegment407)

HAnimJoint396.children.append(HAnimJoint406)

HAnimJoint386.children.append(HAnimJoint396)

HAnimJoint376.children.append(HAnimJoint386)

HAnimJoint366.children.append(HAnimJoint376)
HAnimJoint416 = x3d.HAnimJoint()
HAnimJoint416.name = "r_cuneonavicular_2"
HAnimJoint416.DEF = "hanim_r_cuneonavicular_2"
HAnimJoint416.center = [-0.081045,0.033525,0.02142675]
HAnimJoint416.ulimit = [0,0,0]
HAnimJoint416.llimit = [0,0,0]
HAnimSegment417 = x3d.HAnimSegment()
HAnimSegment417.name = "r_cuneiform_2"
HAnimSegment417.DEF = "hanim_r_cuneiform_2"
Shape418 = x3d.Shape()
Shape418.DEF = "r_cuneiform_2_Shape"
Appearance419 = x3d.Appearance()
Material420 = x3d.Material()
Material420.USE = "SurfaceDefault"

Appearance419.material = Material420
ImageTexture421 = x3d.ImageTexture()
ImageTexture421.USE = "JinLOA4TextureAtlas"

Appearance419.texture = ImageTexture421

Shape418.appearance = Appearance419
IndexedFaceSet422 = x3d.IndexedFaceSet()
IndexedFaceSet422.coordIndex = [1,4,9,-1,9,8,1,-1,5,7,2,-1,2,0,5,-1,4,1,3,-1,3,6,4,-1,10,11,5,-1,5,0,10,-1,32,33,36,-1,36,37,32,-1,24,25,28,-1,28,29,24,-1,19,20,21,-1,19,21,22,-1,19,22,23,-1,19,23,18,-1,13,14,15,-1,13,15,16,-1,13,16,17,-1,13,17,12,-1,9,4,13,-1,13,12,9,-1,4,6,14,-1,14,13,4,-1,24,29,30,-1,30,31,24,-1,7,5,16,-1,16,15,7,-1,5,11,17,-1,17,16,5,-1,36,33,34,-1,34,35,36,-1,3,1,19,-1,19,18,3,-1,1,8,20,-1,20,19,1,-1,32,37,38,-1,38,39,32,-1,10,0,22,-1,22,21,10,-1,0,2,23,-1,23,22,0,-1,28,25,26,-1,26,27,28,-1,6,3,25,-1,25,24,6,-1,3,18,26,-1,26,25,3,-1,18,23,27,-1,27,26,18,-1,23,2,28,-1,28,27,23,-1,2,7,29,-1,29,28,2,-1,7,15,30,-1,30,29,7,-1,15,14,31,-1,31,30,15,-1,14,6,24,-1,24,31,14,-1,8,9,33,-1,33,32,8,-1,9,12,34,-1,34,33,9,-1,12,17,35,-1,35,34,12,-1,17,11,36,-1,36,35,17,-1,11,10,37,-1,37,36,11,-1,10,21,38,-1,38,37,10,-1,21,20,39,-1,39,38,21,-1,20,8,32,-1,32,39,20,-1]
IndexedFaceSet422.creaseAngle = 3.14159
IndexedFaceSet422.texCoordIndex = [0,4,9,-1,9,8,0,-1,5,7,2,-1,2,1,5,-1,4,0,3,-1,3,6,4,-1,10,11,5,-1,5,1,10,-1,32,33,36,-1,36,37,32,-1,24,25,28,-1,28,29,24,-1,19,20,21,-1,19,21,22,-1,19,22,23,-1,19,23,18,-1,13,14,15,-1,13,15,16,-1,13,16,17,-1,13,17,12,-1,9,4,13,-1,13,12,9,-1,4,6,14,-1,14,13,4,-1,24,29,30,-1,30,31,24,-1,7,5,16,-1,16,15,7,-1,5,11,17,-1,17,16,5,-1,36,33,34,-1,34,35,36,-1,3,0,19,-1,19,18,3,-1,0,8,20,-1,20,19,0,-1,32,37,38,-1,38,39,32,-1,10,1,22,-1,22,21,10,-1,1,2,23,-1,23,22,1,-1,28,25,26,-1,26,27,28,-1,6,3,25,-1,25,24,6,-1,3,18,26,-1,26,25,3,-1,18,23,27,-1,27,26,18,-1,23,2,28,-1,28,27,23,-1,2,7,29,-1,29,28,2,-1,7,15,30,-1,30,29,7,-1,15,14,31,-1,31,30,15,-1,14,6,24,-1,24,31,14,-1,8,9,33,-1,33,32,8,-1,9,12,34,-1,34,33,9,-1,12,17,35,-1,35,34,12,-1,17,11,36,-1,36,35,17,-1,11,10,37,-1,37,36,11,-1,10,21,38,-1,38,37,10,-1,21,20,39,-1,39,38,21,-1,20,8,32,-1,32,39,20,-1]
Coordinate423 = x3d.Coordinate()

IndexedFaceSet422.coord = Coordinate423
TextureCoordinate424 = x3d.TextureCoordinate()

IndexedFaceSet422.texCoord = TextureCoordinate424

Shape418.geometry = IndexedFaceSet422

HAnimSegment417.children.append(Shape418)
HAnimSite425 = x3d.HAnimSite()
HAnimSite425.DEF = "r_cuneiform_2_Sites"
"""None"""

HAnimSegment417.children.append(HAnimSite425)

HAnimJoint416.children.append(HAnimSegment417)
HAnimJoint426 = x3d.HAnimJoint()
HAnimJoint426.name = "r_tarsometatarsal_2"
HAnimJoint426.DEF = "hanim_r_tarsometatarsal_2"
HAnimJoint426.center = [-0.079830006,0.0261,0.041062504]
HAnimJoint426.ulimit = [0,0,0]
HAnimJoint426.llimit = [0,0,0]
HAnimSegment427 = x3d.HAnimSegment()
HAnimSegment427.name = "r_metatarsal_2"
HAnimSegment427.DEF = "hanim_r_metatarsal_2"
Shape428 = x3d.Shape()
Shape428.DEF = "r_metatarsal_2_Shape"
Appearance429 = x3d.Appearance()
Material430 = x3d.Material()
Material430.USE = "SurfaceDefault"

Appearance429.material = Material430
ImageTexture431 = x3d.ImageTexture()
ImageTexture431.USE = "JinLOA4TextureAtlas"

Appearance429.texture = ImageTexture431

Shape428.appearance = Appearance429
IndexedFaceSet432 = x3d.IndexedFaceSet()
IndexedFaceSet432.coordIndex = [12,4,7,-1,7,15,12,-1,0,2,9,-1,9,8,0,-1,1,3,11,-1,11,10,1,-1,5,6,2,-1,2,0,5,-1,8,9,3,-1,3,1,8,-1,14,4,12,-1,12,13,14,-1,18,14,13,-1,13,17,18,-1,42,43,38,-1,38,39,42,-1,46,47,50,-1,50,51,46,-1,29,30,34,-1,34,35,29,-1,19,20,25,-1,25,26,19,-1,28,19,26,-1,26,27,28,-1,21,22,23,-1,23,24,21,-1,37,29,35,-1,35,36,37,-1,30,31,34,-1,20,21,24,-1,24,25,20,-1,31,32,33,-1,33,34,31,-1,3,9,20,-1,20,19,3,-1,9,2,21,-1,21,20,9,-1,2,6,22,-1,22,21,2,-1,42,39,40,-1,40,41,42,-1,7,4,24,-1,24,23,7,-1,4,16,25,-1,25,24,4,-1,16,14,26,-1,26,25,16,-1,14,18,27,-1,27,26,14,-1,50,47,48,-1,48,49,50,-1,11,3,19,-1,19,28,11,-1,0,8,30,-1,30,29,0,-1,8,1,31,-1,31,30,8,-1,1,10,32,-1,32,31,1,-1,46,51,52,-1,52,53,46,-1,17,13,34,-1,34,33,17,-1,13,12,35,-1,35,34,13,-1,12,15,36,-1,36,35,12,-1,38,43,44,-1,44,45,38,-1,5,0,29,-1,29,37,5,-1,15,7,39,-1,39,38,15,-1,7,23,40,-1,40,39,7,-1,23,22,41,-1,41,40,23,-1,22,6,42,-1,42,41,22,-1,6,5,43,-1,43,42,6,-1,5,37,44,-1,44,43,5,-1,37,36,45,-1,45,44,37,-1,36,15,38,-1,38,45,36,-1,10,11,47,-1,47,46,10,-1,11,28,48,-1,48,47,11,-1,28,27,49,-1,49,48,28,-1,27,18,50,-1,50,49,27,-1,18,17,51,-1,51,50,18,-1,17,33,52,-1,52,51,17,-1,33,32,53,-1,53,52,33,-1,32,10,46,-1,46,53,32,-1]
IndexedFaceSet432.creaseAngle = 3.14159
IndexedFaceSet432.texCoordIndex = [1,0,10,-1,10,7,1,-1,2,3,12,-1,12,11,2,-1,5,6,16,-1,16,15,5,-1,8,9,3,-1,3,2,8,-1,11,12,6,-1,6,5,11,-1,4,0,1,-1,1,13,4,-1,17,4,13,-1,13,14,17,-1,45,46,41,-1,41,42,45,-1,49,50,53,-1,53,54,49,-1,32,33,37,-1,37,38,32,-1,22,23,28,-1,28,29,22,-1,31,22,29,-1,29,30,31,-1,24,25,26,-1,26,27,24,-1,40,32,38,-1,38,39,40,-1,33,34,21,-1,23,24,27,-1,27,28,23,-1,34,35,36,-1,36,37,34,-1,6,12,23,-1,23,22,6,-1,12,3,24,-1,24,23,12,-1,3,9,25,-1,25,24,3,-1,45,42,43,-1,43,44,45,-1,10,0,27,-1,27,26,10,-1,20,18,28,-1,28,27,20,-1,18,19,29,-1,29,28,18,-1,4,17,30,-1,30,29,4,-1,53,50,51,-1,51,52,53,-1,16,6,22,-1,22,31,16,-1,2,11,33,-1,33,32,2,-1,11,5,34,-1,34,33,11,-1,5,15,35,-1,35,34,5,-1,49,54,55,-1,55,56,49,-1,14,13,37,-1,37,36,14,-1,13,1,38,-1,38,37,13,-1,1,7,39,-1,39,38,1,-1,41,46,47,-1,47,48,41,-1,8,2,32,-1,32,40,8,-1,7,10,42,-1,42,41,7,-1,10,26,43,-1,43,42,10,-1,26,25,44,-1,44,43,26,-1,25,9,45,-1,45,44,25,-1,9,8,46,-1,46,45,9,-1,8,40,47,-1,47,46,8,-1,40,39,48,-1,48,47,40,-1,39,7,41,-1,41,48,39,-1,15,16,50,-1,50,49,15,-1,16,31,51,-1,51,50,16,-1,31,30,52,-1,52,51,31,-1,30,17,53,-1,53,52,30,-1,17,14,54,-1,54,53,17,-1,14,36,55,-1,55,54,14,-1,36,35,56,-1,56,55,36,-1,35,15,49,-1,49,56,35,-1]
Coordinate433 = x3d.Coordinate()

IndexedFaceSet432.coord = Coordinate433
TextureCoordinate434 = x3d.TextureCoordinate()

IndexedFaceSet432.texCoord = TextureCoordinate434

Shape428.geometry = IndexedFaceSet432

HAnimSegment427.children.append(Shape428)
HAnimSite435 = x3d.HAnimSite()
HAnimSite435.DEF = "r_metatarsal_2_Sites"
"""None"""

HAnimSegment427.children.append(HAnimSite435)

HAnimJoint426.children.append(HAnimSegment427)
HAnimJoint436 = x3d.HAnimJoint()
HAnimJoint436.name = "r_metatarsophalangeal_2"
HAnimJoint436.DEF = "hanim_r_metatarsophalangeal_2"
HAnimJoint436.center = [-0.0821475,0.014976,0.097830005]
HAnimJoint436.ulimit = [0,0,0]
HAnimJoint436.llimit = [0,0,0]
HAnimSegment437 = x3d.HAnimSegment()
HAnimSegment437.name = "r_tarsal_proximal_phalanx_2"
HAnimSegment437.DEF = "hanim_r_tarsal_proximal_phalanx_2"
Shape438 = x3d.Shape()
Shape438.DEF = "r_tarsal_proximal_phalanx_2_Shape"
Appearance439 = x3d.Appearance()
Material440 = x3d.Material()
Material440.USE = "SurfaceDefault"

Appearance439.material = Material440
ImageTexture441 = x3d.ImageTexture()
ImageTexture441.USE = "JinLOA4TextureAtlas"

Appearance439.texture = ImageTexture441

Shape438.appearance = Appearance439
IndexedFaceSet442 = x3d.IndexedFaceSet()
IndexedFaceSet442.coordIndex = [8,18,20,-1,20,6,8,-1,14,21,19,-1,19,11,14,-1,6,20,1,-1,19,15,11,-1,0,14,3,-1,3,2,0,-1,12,17,16,-1,16,8,12,-1,15,17,12,-1,12,11,15,-1,6,1,2,-1,2,3,6,-1,0,21,14,-1,16,18,8,-1,3,4,5,-1,5,6,3,-1,6,5,7,-1,7,8,6,-1,10,11,12,-1,12,9,10,-1,14,11,10,-1,10,13,14,-1,13,4,3,-1,3,14,13,-1,8,7,9,-1,9,12,8,-1,19,21,24,-1,24,23,19,-1,22,25,20,-1,20,18,22,-1,36,30,31,-1,35,36,31,-1,34,35,31,-1,13,10,9,-1,9,7,5,-1,13,9,5,-1,4,13,5,-1,29,26,27,-1,27,28,29,-1,37,41,42,-1,42,43,37,-1,31,32,33,-1,33,34,31,-1,39,40,41,-1,38,39,41,-1,37,38,41,-1,25,22,27,-1,27,26,25,-1,22,23,28,-1,28,27,22,-1,23,24,29,-1,29,28,23,-1,24,25,26,-1,26,29,24,-1,15,19,31,-1,31,30,15,-1,19,23,32,-1,32,31,19,-1,23,22,33,-1,33,32,23,-1,22,18,34,-1,34,33,22,-1,18,16,35,-1,35,34,18,-1,16,17,36,-1,36,35,16,-1,17,15,30,-1,30,36,17,-1,21,0,38,-1,38,37,21,-1,0,2,39,-1,39,38,0,-1,2,1,40,-1,40,39,2,-1,1,20,41,-1,41,40,1,-1,20,25,42,-1,42,41,20,-1,25,24,43,-1,43,42,25,-1,24,21,37,-1,37,43,24,-1]
IndexedFaceSet442.creaseAngle = 3.14159
IndexedFaceSet442.texCoordIndex = [1,24,30,-1,30,0,1,-1,3,31,25,-1,25,2,3,-1,0,30,4,-1,25,26,2,-1,9,3,5,-1,5,10,9,-1,7,28,27,-1,27,1,7,-1,26,29,8,-1,8,2,26,-1,0,4,11,-1,11,6,0,-1,9,31,3,-1,27,24,1,-1,12,13,14,-1,14,15,12,-1,15,14,16,-1,16,17,15,-1,19,20,21,-1,21,18,19,-1,23,20,19,-1,19,22,23,-1,22,13,12,-1,12,23,22,-1,17,16,18,-1,18,21,17,-1,35,34,38,-1,38,37,35,-1,36,39,33,-1,33,32,36,-1,50,44,45,-1,49,50,45,-1,48,49,45,-1,22,19,18,-1,18,16,14,-1,22,18,14,-1,13,22,14,-1,43,40,41,-1,41,42,43,-1,51,55,56,-1,56,57,51,-1,45,46,47,-1,47,48,45,-1,53,54,55,-1,52,53,55,-1,51,52,55,-1,39,36,41,-1,41,40,39,-1,36,37,42,-1,42,41,36,-1,37,38,43,-1,43,42,37,-1,38,39,40,-1,40,43,38,-1,26,25,45,-1,45,44,26,-1,35,37,46,-1,46,45,35,-1,37,36,47,-1,47,46,37,-1,36,32,48,-1,48,47,36,-1,24,27,49,-1,49,48,24,-1,27,28,50,-1,50,49,27,-1,29,26,44,-1,44,50,29,-1,31,9,52,-1,52,51,31,-1,9,10,53,-1,53,52,9,-1,11,4,54,-1,54,53,11,-1,4,30,55,-1,55,54,4,-1,33,39,56,-1,56,55,33,-1,39,38,57,-1,57,56,39,-1,38,34,51,-1,51,57,38,-1]
Coordinate443 = x3d.Coordinate()

IndexedFaceSet442.coord = Coordinate443
TextureCoordinate444 = x3d.TextureCoordinate()

IndexedFaceSet442.texCoord = TextureCoordinate444

Shape438.geometry = IndexedFaceSet442

HAnimSegment437.children.append(Shape438)
HAnimSite445 = x3d.HAnimSite()
HAnimSite445.DEF = "r_tarsal_proximal_phalanx_2_Sites"
"""None"""

HAnimSegment437.children.append(HAnimSite445)

HAnimJoint436.children.append(HAnimSegment437)
HAnimJoint446 = x3d.HAnimJoint()
HAnimJoint446.name = "r_tarsal_proximal_interphalangeal_2"
HAnimJoint446.DEF = "hanim_r_tarsal_proximal_interphalangeal_2"
HAnimJoint446.center = [-0.083925,0.012647251,0.1140075]
HAnimJoint446.ulimit = [0,0,0]
HAnimJoint446.llimit = [0,0,0]
HAnimSegment447 = x3d.HAnimSegment()
HAnimSegment447.name = "r_tarsal_middle_phalanx_2"
HAnimSegment447.DEF = "hanim_r_tarsal_middle_phalanx_2"
Shape448 = x3d.Shape()
Shape448.DEF = "r_tarsal_middle_phalanx_2_Shape"
Appearance449 = x3d.Appearance()
Material450 = x3d.Material()
Material450.USE = "SurfaceDefault"

Appearance449.material = Material450
ImageTexture451 = x3d.ImageTexture()
ImageTexture451.USE = "JinLOA4TextureAtlas"

Appearance449.texture = ImageTexture451

Shape448.appearance = Appearance449
IndexedFaceSet452 = x3d.IndexedFaceSet()
IndexedFaceSet452.coordIndex = [0,7,6,-1,6,1,0,-1,2,8,7,-1,7,0,2,-1,9,8,2,-1,2,3,9,-1,4,10,9,-1,9,3,4,-1,11,10,4,-1,4,5,11,-1,6,11,5,-1,5,1,6,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,0,1,19,-1,19,18,0,-1,1,5,20,-1,20,19,1,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,18,-1,18,23,2,-1]
IndexedFaceSet452.creaseAngle = 3.14159
IndexedFaceSet452.texCoordIndex = [0,9,8,-1,8,1,0,-1,2,10,9,-1,9,0,2,-1,11,10,2,-1,2,3,11,-1,4,13,11,-1,11,3,4,-1,14,12,6,-1,6,5,14,-1,8,15,7,-1,7,1,8,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,13,20,-1,20,19,11,-1,12,14,21,-1,21,20,12,-1,15,8,16,-1,16,21,15,-1,24,25,26,-1,26,27,22,-1,24,26,22,-1,23,24,22,-1,0,1,23,-1,23,22,0,-1,1,7,24,-1,24,23,1,-1,5,6,25,-1,25,24,5,-1,4,3,26,-1,26,25,4,-1,3,2,27,-1,27,26,3,-1,2,0,22,-1,22,27,2,-1]
Coordinate453 = x3d.Coordinate()

IndexedFaceSet452.coord = Coordinate453
TextureCoordinate454 = x3d.TextureCoordinate()

IndexedFaceSet452.texCoord = TextureCoordinate454

Shape448.geometry = IndexedFaceSet452

HAnimSegment447.children.append(Shape448)
HAnimSite455 = x3d.HAnimSite()
HAnimSite455.DEF = "r_tarsal_middle_phalanx_2_Sites"
"""None"""

HAnimSegment447.children.append(HAnimSite455)

HAnimJoint446.children.append(HAnimSegment447)
HAnimJoint456 = x3d.HAnimJoint()
HAnimJoint456.name = "r_tarsal_distal_interphalangeal_2"
HAnimJoint456.DEF = "hanim_r_tarsal_distal_interphalangeal_2"
HAnimJoint456.center = [-0.083925,0.00982575,0.123435006]
HAnimJoint456.ulimit = [0,0,0]
HAnimJoint456.llimit = [0,0,0]
HAnimSegment457 = x3d.HAnimSegment()
HAnimSegment457.name = "r_tarsal_distal_phalanx_2"
HAnimSegment457.DEF = "hanim_r_tarsal_distal_phalanx_2"
Shape458 = x3d.Shape()
Shape458.DEF = "r_tarsal_distal_phalanx_2_Shape"
Appearance459 = x3d.Appearance()
Material460 = x3d.Material()
Material460.USE = "SurfaceDefault"

Appearance459.material = Material460
ImageTexture461 = x3d.ImageTexture()
ImageTexture461.USE = "JinLOA4TextureAtlas"

Appearance459.texture = ImageTexture461

Shape458.appearance = Appearance459
IndexedFaceSet462 = x3d.IndexedFaceSet()
IndexedFaceSet462.coordIndex = [0,1,2,-1,2,3,0,-1,5,4,2,-1,2,1,5,-1,0,6,7,-1,7,1,0,-1,3,8,6,-1,6,0,3,-1,9,8,3,-1,3,2,9,-1,4,10,9,-1,9,2,4,-1,11,10,4,-1,4,5,11,-1,7,11,5,-1,5,1,7,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,7,6,13,-1,13,12,7,-1,6,8,14,-1,14,13,6,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,7,12,-1,12,17,11,-1]
IndexedFaceSet462.creaseAngle = 3.14159
IndexedFaceSet462.texCoordIndex = [0,1,2,-1,2,3,0,-1,5,4,2,-1,2,1,5,-1,0,8,9,-1,9,1,0,-1,3,10,8,-1,8,0,3,-1,11,10,3,-1,3,2,11,-1,4,12,11,-1,11,2,4,-1,14,13,6,-1,6,7,14,-1,9,15,5,-1,5,1,9,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,9,8,17,-1,17,16,9,-1,8,10,18,-1,18,17,8,-1,10,11,19,-1,19,18,10,-1,11,12,20,-1,20,19,11,-1,13,14,21,-1,21,20,13,-1,15,9,16,-1,16,21,15,-1]
Coordinate463 = x3d.Coordinate()

IndexedFaceSet462.coord = Coordinate463
TextureCoordinate464 = x3d.TextureCoordinate()

IndexedFaceSet462.texCoord = TextureCoordinate464

Shape458.geometry = IndexedFaceSet462

HAnimSegment457.children.append(Shape458)
HAnimSite465 = x3d.HAnimSite()
HAnimSite465.DEF = "r_tarsal_distal_phalanx_2_Sites"
"""(r_tarsal_distal_phalanx_2_tip -0.110 0.011 0.19)"""

HAnimSegment457.children.append(HAnimSite465)

HAnimJoint456.children.append(HAnimSegment457)

HAnimJoint446.children.append(HAnimJoint456)

HAnimJoint436.children.append(HAnimJoint446)

HAnimJoint426.children.append(HAnimJoint436)

HAnimJoint416.children.append(HAnimJoint426)

HAnimJoint366.children.append(HAnimJoint416)
HAnimJoint466 = x3d.HAnimJoint()
HAnimJoint466.name = "r_cuneonavicular_3"
HAnimJoint466.DEF = "hanim_r_cuneonavicular_3"
HAnimJoint466.center = [-0.09261001,0.03339,0.019818]
HAnimJoint466.ulimit = [0,0,0]
HAnimJoint466.llimit = [0,0,0]
HAnimSegment467 = x3d.HAnimSegment()
HAnimSegment467.name = "r_cuneiform_3"
HAnimSegment467.DEF = "hanim_r_cuneiform_3"
Shape468 = x3d.Shape()
Shape468.DEF = "r_cuneiform_3_Shape"
Appearance469 = x3d.Appearance()
Material470 = x3d.Material()
Material470.USE = "SurfaceDefault"

Appearance469.material = Material470
ImageTexture471 = x3d.ImageTexture()
ImageTexture471.USE = "JinLOA4TextureAtlas"

Appearance469.texture = ImageTexture471

Shape468.appearance = Appearance469
IndexedFaceSet472 = x3d.IndexedFaceSet()
IndexedFaceSet472.coordIndex = [4,0,6,-1,6,3,4,-1,4,3,8,-1,5,1,7,-1,7,2,5,-1,2,7,9,-1,4,8,9,-1,9,7,4,-1,20,21,24,-1,24,25,20,-1,12,13,10,-1,10,11,12,-1,18,19,14,-1,14,17,18,-1,15,16,17,-1,17,14,15,-1,0,4,11,-1,11,10,0,-1,4,7,12,-1,12,11,4,-1,7,1,13,-1,13,12,7,-1,24,21,22,-1,22,23,24,-1,3,6,15,-1,15,14,3,-1,20,25,26,-1,26,27,20,-1,5,2,17,-1,17,16,5,-1,2,9,18,-1,18,17,2,-1,9,8,19,-1,19,18,9,-1,8,3,14,-1,14,19,8,-1,6,0,21,-1,21,20,6,-1,0,10,22,-1,22,21,0,-1,10,13,23,-1,23,22,10,-1,13,1,24,-1,24,23,13,-1,1,5,25,-1,25,24,1,-1,5,16,26,-1,26,25,5,-1,16,15,27,-1,27,26,16,-1,15,6,20,-1,20,27,15,-1]
IndexedFaceSet472.creaseAngle = 3.14159
IndexedFaceSet472.texCoordIndex = [4,0,6,-1,6,3,4,-1,4,3,8,-1,5,1,7,-1,7,2,5,-1,2,7,9,-1,4,8,10,-1,10,11,4,-1,22,23,26,-1,26,27,22,-1,14,15,12,-1,12,13,14,-1,20,21,16,-1,16,19,20,-1,17,18,19,-1,19,16,17,-1,0,4,13,-1,13,12,0,-1,4,11,14,-1,14,13,4,-1,7,1,15,-1,15,14,7,-1,26,23,24,-1,24,25,26,-1,3,6,17,-1,17,16,3,-1,22,27,28,-1,28,29,22,-1,5,2,19,-1,19,18,5,-1,2,9,20,-1,20,19,2,-1,10,8,21,-1,21,20,10,-1,8,3,16,-1,16,21,8,-1,6,0,23,-1,23,22,6,-1,0,12,24,-1,24,23,0,-1,12,15,25,-1,25,24,12,-1,15,1,26,-1,26,25,15,-1,1,5,27,-1,27,26,1,-1,5,18,28,-1,28,27,5,-1,18,17,29,-1,29,28,18,-1,17,6,22,-1,22,29,17,-1]
Coordinate473 = x3d.Coordinate()

IndexedFaceSet472.coord = Coordinate473
TextureCoordinate474 = x3d.TextureCoordinate()

IndexedFaceSet472.texCoord = TextureCoordinate474

Shape468.geometry = IndexedFaceSet472

HAnimSegment467.children.append(Shape468)
HAnimSite475 = x3d.HAnimSite()
HAnimSite475.DEF = "r_cuneiform_3_Sites"
"""None"""

HAnimSegment467.children.append(HAnimSite475)

HAnimJoint466.children.append(HAnimSegment467)
HAnimJoint476 = x3d.HAnimJoint()
HAnimJoint476.name = "r_tarsometatarsal_3"
HAnimJoint476.DEF = "hanim_r_tarsometatarsal_3"
HAnimJoint476.center = [-0.09423001,0.0261,0.039397504]
HAnimJoint476.ulimit = [0,0,0]
HAnimJoint476.llimit = [0,0,0]
HAnimSegment477 = x3d.HAnimSegment()
HAnimSegment477.name = "r_metatarsal_3"
HAnimSegment477.DEF = "hanim_r_metatarsal_3"
Shape478 = x3d.Shape()
Shape478.DEF = "r_metatarsal_3_Shape"
Appearance479 = x3d.Appearance()
Material480 = x3d.Material()
Material480.USE = "SurfaceDefault"

Appearance479.material = Material480
ImageTexture481 = x3d.ImageTexture()
ImageTexture481.USE = "JinLOA4TextureAtlas"

Appearance479.texture = ImageTexture481

Shape478.appearance = Appearance479
IndexedFaceSet482 = x3d.IndexedFaceSet()
IndexedFaceSet482.coordIndex = [15,12,13,-1,13,3,15,-1,10,7,0,-1,0,2,10,-1,9,1,14,-1,14,6,9,-1,3,13,7,-1,7,10,3,-1,12,15,5,-1,5,16,12,-1,6,8,17,-1,17,9,6,-1,17,8,11,-1,11,4,17,-1,27,28,31,-1,34,35,32,-1,32,33,34,-1,28,29,30,-1,30,31,28,-1,35,27,31,-1,31,32,35,-1,23,24,20,-1,22,23,20,-1,20,21,22,-1,25,26,18,-1,18,19,25,-1,24,25,19,-1,19,20,24,-1,1,9,19,-1,19,18,1,-1,9,17,20,-1,20,19,9,-1,17,4,21,-1,21,20,17,-1,48,45,46,-1,46,47,48,-1,5,15,23,-1,23,22,5,-1,15,3,24,-1,24,23,15,-1,3,10,25,-1,25,24,3,-1,10,2,26,-1,26,25,10,-1,40,37,38,-1,38,39,40,-1,13,12,28,-1,28,27,13,-1,12,16,29,-1,29,28,12,-1,44,49,50,-1,50,51,44,-1,11,8,31,-1,31,30,11,-1,8,6,32,-1,32,31,8,-1,6,14,33,-1,33,32,6,-1,36,41,42,-1,42,43,36,-1,0,7,35,-1,35,34,0,-1,7,13,27,-1,27,35,7,-1,37,40,41,-1,41,36,37,-1,48,49,44,-1,44,45,48,-1,14,1,37,-1,37,36,14,-1,1,18,38,-1,38,37,1,-1,18,26,39,-1,39,38,18,-1,26,2,40,-1,40,39,26,-1,2,0,41,-1,41,40,2,-1,0,34,42,-1,42,41,0,-1,34,33,43,-1,43,42,34,-1,33,14,36,-1,36,43,33,-1,16,5,45,-1,45,44,16,-1,5,22,46,-1,46,45,5,-1,22,21,47,-1,47,46,22,-1,21,4,48,-1,48,47,21,-1,4,11,49,-1,49,48,4,-1,11,30,50,-1,50,49,11,-1,30,29,51,-1,51,50,30,-1,29,16,44,-1,44,51,29,-1]
IndexedFaceSet482.creaseAngle = 3.14159
IndexedFaceSet482.texCoordIndex = [25,7,16,-1,16,3,25,-1,12,9,0,-1,0,2,12,-1,22,1,20,-1,20,18,22,-1,13,17,19,-1,19,23,13,-1,15,24,5,-1,5,26,15,-1,8,21,28,-1,28,11,8,-1,14,10,6,-1,6,4,14,-1,43,45,27,-1,54,55,51,-1,51,53,54,-1,46,47,48,-1,48,50,46,-1,56,44,49,-1,49,52,56,-1,36,38,28,-1,35,37,33,-1,33,34,35,-1,40,42,29,-1,29,30,40,-1,39,41,31,-1,31,32,39,-1,1,22,30,-1,30,29,1,-1,11,28,32,-1,32,31,11,-1,14,4,34,-1,34,33,14,-1,70,67,68,-1,68,69,70,-1,5,24,37,-1,37,35,5,-1,25,3,38,-1,38,36,25,-1,13,23,41,-1,41,39,13,-1,12,2,42,-1,42,40,12,-1,62,58,60,-1,60,61,62,-1,16,7,45,-1,45,43,16,-1,15,26,47,-1,47,46,15,-1,66,71,73,-1,73,74,66,-1,6,10,50,-1,50,48,6,-1,21,8,52,-1,52,49,21,-1,18,20,53,-1,53,51,18,-1,57,63,64,-1,64,65,57,-1,0,9,55,-1,55,54,0,-1,19,17,44,-1,44,56,19,-1,59,62,63,-1,63,57,59,-1,70,72,66,-1,66,67,70,-1,20,1,59,-1,59,57,20,-1,1,29,60,-1,60,58,1,-1,29,42,61,-1,61,60,29,-1,42,2,62,-1,62,61,42,-1,2,0,63,-1,63,62,2,-1,0,54,64,-1,64,63,0,-1,54,53,65,-1,65,64,54,-1,53,20,57,-1,57,65,53,-1,26,5,67,-1,67,66,26,-1,5,35,68,-1,68,67,5,-1,35,34,69,-1,69,68,35,-1,34,4,70,-1,70,69,34,-1,4,6,72,-1,72,70,4,-1,6,48,73,-1,73,71,6,-1,48,47,74,-1,74,73,48,-1,47,26,66,-1,66,74,47,-1]
Coordinate483 = x3d.Coordinate()

IndexedFaceSet482.coord = Coordinate483
TextureCoordinate484 = x3d.TextureCoordinate()

IndexedFaceSet482.texCoord = TextureCoordinate484

Shape478.geometry = IndexedFaceSet482

HAnimSegment477.children.append(Shape478)
HAnimSite485 = x3d.HAnimSite()
HAnimSite485.DEF = "r_metatarsal_3_Sites"
"""None"""

HAnimSegment477.children.append(HAnimSite485)

HAnimJoint476.children.append(HAnimSegment477)
HAnimJoint486 = x3d.HAnimJoint()
HAnimJoint486.name = "r_metatarsophalangeal_3"
HAnimJoint486.DEF = "hanim_r_metatarsophalangeal_3"
HAnimJoint486.center = [-0.0960975,0.015057,0.09542251]
HAnimJoint486.ulimit = [0,0,0]
HAnimJoint486.llimit = [0,0,0]
HAnimSegment487 = x3d.HAnimSegment()
HAnimSegment487.name = "r_tarsal_proximal_phalanx_3"
HAnimSegment487.DEF = "hanim_r_tarsal_proximal_phalanx_3"
Shape488 = x3d.Shape()
Shape488.DEF = "r_tarsal_proximal_phalanx_3_Shape"
Appearance489 = x3d.Appearance()
Material490 = x3d.Material()
Material490.USE = "SurfaceDefault"

Appearance489.material = Material490
ImageTexture491 = x3d.ImageTexture()
ImageTexture491.USE = "JinLOA4TextureAtlas"

Appearance489.texture = ImageTexture491

Shape488.appearance = Appearance489
IndexedFaceSet492 = x3d.IndexedFaceSet()
IndexedFaceSet492.coordIndex = [13,0,1,-1,1,7,13,-1,7,1,2,-1,2,9,7,-1,4,6,14,-1,14,3,4,-1,8,6,4,-1,4,5,8,-1,5,0,13,-1,13,8,5,-1,23,17,15,-1,15,19,23,-1,16,18,24,-1,24,20,16,-1,9,23,19,-1,19,7,9,-1,8,20,24,-1,24,6,8,-1,7,19,11,-1,24,21,6,-1,10,8,13,-1,13,12,10,-1,14,22,25,-1,25,9,14,-1,21,22,14,-1,14,6,21,-1,7,11,12,-1,12,13,7,-1,10,20,8,-1,25,23,9,-1,9,2,3,-1,3,14,9,-1,5,4,3,-1,3,2,1,-1,5,3,1,-1,0,5,1,-1,33,34,35,-1,32,33,35,-1,31,32,35,-1,41,42,43,-1,43,37,41,-1,28,29,26,-1,26,27,28,-1,35,36,30,-1,30,31,35,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,15,17,27,-1,27,26,15,-1,17,18,28,-1,28,27,17,-1,18,16,29,-1,29,28,18,-1,16,15,26,-1,26,29,16,-1,17,23,31,-1,31,30,17,-1,23,25,32,-1,32,31,23,-1,25,22,33,-1,33,32,25,-1,22,21,34,-1,34,33,22,-1,21,24,35,-1,35,34,21,-1,24,18,36,-1,36,35,24,-1,18,17,30,-1,30,36,18,-1,20,10,38,-1,38,37,20,-1,10,12,39,-1,39,38,10,-1,12,11,40,-1,40,39,12,-1,11,19,41,-1,41,40,11,-1,19,15,42,-1,42,41,19,-1,15,16,43,-1,43,42,15,-1,16,20,37,-1,37,43,16,-1]
IndexedFaceSet492.creaseAngle = 3.14159
IndexedFaceSet492.texCoordIndex = [22,1,0,-1,0,7,22,-1,7,0,2,-1,2,9,7,-1,4,6,23,-1,23,3,4,-1,8,6,4,-1,4,5,8,-1,5,1,22,-1,22,8,5,-1,36,26,24,-1,24,29,36,-1,25,27,38,-1,38,31,25,-1,11,35,28,-1,28,10,11,-1,13,30,37,-1,37,12,13,-1,10,28,15,-1,37,32,12,-1,14,13,16,-1,16,20,14,-1,18,33,39,-1,39,11,18,-1,32,34,19,-1,19,12,32,-1,10,15,21,-1,21,17,10,-1,14,30,13,-1,39,35,11,-1,9,2,3,-1,3,23,9,-1,5,4,3,-1,3,2,0,-1,5,3,0,-1,1,5,0,-1,47,48,49,-1,46,47,49,-1,45,46,49,-1,55,56,57,-1,57,51,55,-1,42,43,40,-1,40,41,42,-1,49,50,44,-1,44,45,49,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,24,26,41,-1,41,40,24,-1,26,27,42,-1,42,41,26,-1,27,25,43,-1,43,42,27,-1,25,24,40,-1,40,43,25,-1,26,36,45,-1,45,44,26,-1,35,39,46,-1,46,45,35,-1,39,33,47,-1,47,46,39,-1,34,32,48,-1,48,47,34,-1,32,37,49,-1,49,48,32,-1,38,27,50,-1,50,49,38,-1,27,26,44,-1,44,50,27,-1,30,14,52,-1,52,51,30,-1,14,20,53,-1,53,52,14,-1,21,15,54,-1,54,53,21,-1,15,28,55,-1,55,54,15,-1,29,24,56,-1,56,55,29,-1,24,25,57,-1,57,56,24,-1,25,31,51,-1,51,57,25,-1]
Coordinate493 = x3d.Coordinate()

IndexedFaceSet492.coord = Coordinate493
TextureCoordinate494 = x3d.TextureCoordinate()

IndexedFaceSet492.texCoord = TextureCoordinate494

Shape488.geometry = IndexedFaceSet492

HAnimSegment487.children.append(Shape488)
HAnimSite495 = x3d.HAnimSite()
HAnimSite495.DEF = "r_tarsal_proximal_phalanx_3_Sites"
"""None"""

HAnimSegment487.children.append(HAnimSite495)

HAnimJoint486.children.append(HAnimSegment487)
HAnimJoint496 = x3d.HAnimJoint()
HAnimJoint496.name = "r_tarsal_proximal_interphalangeal_3"
HAnimJoint496.DEF = "hanim_r_tarsal_proximal_interphalangeal_3"
HAnimJoint496.center = [-0.098505,0.011922751,0.110475]
HAnimJoint496.ulimit = [0,0,0]
HAnimJoint496.llimit = [0,0,0]
HAnimSegment497 = x3d.HAnimSegment()
HAnimSegment497.name = "r_tarsal_middle_phalanx_3"
HAnimSegment497.DEF = "hanim_r_tarsal_middle_phalanx_3"
Shape498 = x3d.Shape()
Shape498.DEF = "r_tarsal_middle_phalanx_3_Shape"
Appearance499 = x3d.Appearance()
Material500 = x3d.Material()
Material500.USE = "SurfaceDefault"

Appearance499.material = Material500
ImageTexture501 = x3d.ImageTexture()
ImageTexture501.USE = "JinLOA4TextureAtlas"

Appearance499.texture = ImageTexture501

Shape498.appearance = Appearance499
IndexedFaceSet502 = x3d.IndexedFaceSet()
IndexedFaceSet502.coordIndex = [1,7,6,-1,6,0,1,-1,2,8,7,-1,7,1,2,-1,9,8,2,-1,2,3,9,-1,4,10,9,-1,9,3,4,-1,11,10,4,-1,4,5,11,-1,6,11,5,-1,5,0,6,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,1,0,19,-1,19,18,1,-1,0,5,20,-1,20,19,0,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,1,18,-1,18,23,2,-1]
IndexedFaceSet502.creaseAngle = 3.14159
IndexedFaceSet502.texCoordIndex = [0,9,8,-1,8,1,0,-1,2,10,9,-1,9,0,2,-1,11,10,2,-1,2,3,11,-1,4,13,11,-1,11,3,4,-1,14,12,7,-1,7,6,14,-1,8,15,5,-1,5,1,8,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,13,20,-1,20,19,11,-1,12,14,21,-1,21,20,12,-1,15,8,16,-1,16,21,15,-1,24,25,26,-1,26,27,22,-1,24,26,22,-1,23,24,22,-1,0,1,23,-1,23,22,0,-1,1,5,24,-1,24,23,1,-1,6,7,25,-1,25,24,6,-1,4,3,26,-1,26,25,4,-1,3,2,27,-1,27,26,3,-1,2,0,22,-1,22,27,2,-1]
Coordinate503 = x3d.Coordinate()

IndexedFaceSet502.coord = Coordinate503
TextureCoordinate504 = x3d.TextureCoordinate()

IndexedFaceSet502.texCoord = TextureCoordinate504

Shape498.geometry = IndexedFaceSet502

HAnimSegment497.children.append(Shape498)
HAnimSite505 = x3d.HAnimSite()
HAnimSite505.DEF = "r_tarsal_middle_phalanx_3_Sites"
"""None"""

HAnimSegment497.children.append(HAnimSite505)

HAnimJoint496.children.append(HAnimSegment497)
HAnimJoint506 = x3d.HAnimJoint()
HAnimJoint506.name = "r_tarsal_distal_interphalangeal_3"
HAnimJoint506.DEF = "hanim_r_tarsal_distal_interphalangeal_3"
HAnimJoint506.center = [-0.100035004,0.00982575,0.11970001]
HAnimJoint506.ulimit = [0,0,0]
HAnimJoint506.llimit = [0,0,0]
HAnimSegment507 = x3d.HAnimSegment()
HAnimSegment507.name = "r_tarsal_distal_phalanx_3"
HAnimSegment507.DEF = "hanim_r_tarsal_distal_phalanx_3"
Shape508 = x3d.Shape()
Shape508.DEF = "r_tarsal_distal_phalanx_3_Shape"
Appearance509 = x3d.Appearance()
Material510 = x3d.Material()
Material510.USE = "SurfaceDefault"

Appearance509.material = Material510
ImageTexture511 = x3d.ImageTexture()
ImageTexture511.USE = "JinLOA4TextureAtlas"

Appearance509.texture = ImageTexture511

Shape508.appearance = Appearance509
IndexedFaceSet512 = x3d.IndexedFaceSet()
IndexedFaceSet512.coordIndex = [1,0,3,-1,3,2,1,-1,5,4,3,-1,3,0,5,-1,1,7,6,-1,6,0,1,-1,2,8,7,-1,7,1,2,-1,9,8,2,-1,2,3,9,-1,4,10,9,-1,9,3,4,-1,11,10,4,-1,4,5,11,-1,6,11,5,-1,5,0,6,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1]
IndexedFaceSet512.creaseAngle = 3.14159
IndexedFaceSet512.texCoordIndex = [0,3,2,-1,2,1,0,-1,5,4,2,-1,2,3,5,-1,0,9,8,-1,8,3,0,-1,1,10,9,-1,9,0,1,-1,11,10,1,-1,1,2,11,-1,4,12,11,-1,11,2,4,-1,14,13,7,-1,7,6,14,-1,8,15,5,-1,5,3,8,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,12,20,-1,20,19,11,-1,13,14,21,-1,21,20,13,-1,15,8,16,-1,16,21,15,-1]
Coordinate513 = x3d.Coordinate()

IndexedFaceSet512.coord = Coordinate513
TextureCoordinate514 = x3d.TextureCoordinate()

IndexedFaceSet512.texCoord = TextureCoordinate514

Shape508.geometry = IndexedFaceSet512

HAnimSegment507.children.append(Shape508)
HAnimSite515 = x3d.HAnimSite()
HAnimSite515.DEF = "r_tarsal_distal_phalanx_3_Sites"
"""(r_tarsal_distal_phalanx_3_tip -0.128 0.011 0.185)"""

HAnimSegment507.children.append(HAnimSite515)

HAnimJoint506.children.append(HAnimSegment507)

HAnimJoint496.children.append(HAnimJoint506)

HAnimJoint486.children.append(HAnimJoint496)

HAnimJoint476.children.append(HAnimJoint486)

HAnimJoint466.children.append(HAnimJoint476)

HAnimJoint366.children.append(HAnimJoint466)

HAnimJoint356.children.append(HAnimJoint366)
HAnimJoint516 = x3d.HAnimJoint()
HAnimJoint516.name = "r_calcaneocuboid"
HAnimJoint516.DEF = "hanim_r_calcaneocuboid"
HAnimJoint516.center = [-0.088717505,0.0579825,-0.025965001]
HAnimJoint516.ulimit = [0,0,0]
HAnimJoint516.llimit = [0,0,0]
HAnimSegment517 = x3d.HAnimSegment()
HAnimSegment517.name = "r_calcaneus"
HAnimSegment517.DEF = "hanim_r_calcaneus"
Shape518 = x3d.Shape()
Shape518.DEF = "r_calcaneus_Shape"
Appearance519 = x3d.Appearance()
Material520 = x3d.Material()
Material520.USE = "SurfaceDefault"

Appearance519.material = Material520
ImageTexture521 = x3d.ImageTexture()
ImageTexture521.USE = "JinLOA4TextureAtlas"

Appearance519.texture = ImageTexture521

Shape518.appearance = Appearance519
IndexedFaceSet522 = x3d.IndexedFaceSet()
IndexedFaceSet522.coordIndex = [1,0,3,-1,3,2,1,-1,4,7,6,-1,6,5,4,-1,4,18,19,-1,19,7,4,-1,0,8,9,-1,9,3,0,-1,10,2,3,-1,3,11,10,-1,12,6,7,-1,7,13,12,-1,13,7,19,-1,19,20,13,-1,25,26,14,-1,14,9,25,-1,3,9,14,-1,14,11,3,-1,15,10,11,-1,11,16,15,-1,13,20,21,-1,21,17,13,-1,11,14,16,-1,4,5,23,-1,23,18,4,-1,14,38,37,-1,34,15,16,-1,16,35,34,-1,17,21,39,-1,39,36,17,-1,17,12,13,-1,35,16,14,-1,14,37,35,-1,5,6,30,-1,30,27,5,-1,18,23,22,-1,22,1,18,-1,2,19,18,-1,18,1,2,-1,10,20,19,-1,19,2,10,-1,15,21,20,-1,20,10,15,-1,34,39,21,-1,21,15,34,-1,22,8,0,-1,0,1,22,-1,25,9,8,-1,8,24,25,-1,14,26,33,-1,33,38,14,-1,23,5,27,-1,27,29,23,-1,22,23,29,-1,29,28,22,-1,8,22,28,-1,28,24,8,-1,30,6,12,-1,12,31,30,-1,32,31,12,-1,12,40,32,-1,40,12,17,-1,17,36,40,-1,47,48,49,-1,49,41,42,-1,42,43,44,-1,49,42,44,-1,47,49,44,-1,47,44,45,-1,46,47,45,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,50,51,55,-1,55,56,59,-1,59,50,55,-1,56,57,58,-1,58,59,56,-1,34,35,42,-1,42,41,34,-1,35,37,43,-1,43,42,35,-1,37,38,44,-1,44,43,37,-1,38,33,45,-1,45,44,38,-1,33,32,46,-1,46,45,33,-1,32,40,47,-1,47,46,32,-1,40,36,48,-1,48,47,40,-1,36,39,49,-1,49,48,36,-1,39,34,41,-1,41,49,39,-1,25,24,51,-1,51,50,25,-1,24,28,52,-1,52,51,24,-1,28,29,53,-1,53,52,28,-1,29,27,54,-1,54,53,29,-1,27,30,55,-1,55,54,27,-1,30,31,56,-1,56,55,30,-1,31,32,57,-1,57,56,31,-1,32,33,58,-1,58,57,32,-1,33,26,59,-1,59,58,33,-1,26,25,50,-1,50,59,26,-1]
IndexedFaceSet522.creaseAngle = 3.14159
IndexedFaceSet522.texCoordIndex = [1,0,3,-1,3,2,1,-1,4,7,6,-1,6,5,4,-1,4,18,19,-1,19,7,4,-1,0,8,9,-1,9,3,0,-1,10,2,3,-1,3,11,10,-1,12,6,7,-1,7,13,12,-1,13,7,19,-1,19,20,13,-1,25,26,14,-1,14,9,25,-1,3,9,14,-1,14,11,3,-1,15,10,11,-1,11,16,15,-1,13,20,21,-1,21,17,13,-1,11,14,16,-1,4,5,23,-1,23,18,4,-1,14,38,37,-1,34,15,16,-1,16,35,34,-1,17,21,39,-1,39,36,17,-1,17,12,13,-1,35,16,14,-1,14,37,35,-1,5,6,30,-1,30,27,5,-1,18,23,22,-1,22,1,18,-1,2,19,18,-1,18,1,2,-1,10,20,19,-1,19,2,10,-1,15,21,20,-1,20,10,15,-1,34,39,21,-1,21,15,34,-1,22,8,0,-1,0,1,22,-1,25,9,8,-1,8,24,25,-1,14,26,33,-1,33,38,14,-1,23,5,27,-1,27,29,23,-1,22,23,29,-1,29,28,22,-1,8,22,28,-1,28,24,8,-1,30,6,12,-1,12,31,30,-1,32,31,12,-1,12,40,32,-1,40,12,17,-1,17,36,40,-1,47,48,49,-1,49,41,42,-1,42,43,44,-1,49,42,44,-1,47,49,44,-1,47,44,45,-1,46,47,45,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,50,51,55,-1,55,56,59,-1,59,50,55,-1,56,57,58,-1,58,59,56,-1,34,35,42,-1,42,41,34,-1,35,37,43,-1,43,42,35,-1,37,38,44,-1,44,43,37,-1,38,33,45,-1,45,44,38,-1,33,32,46,-1,46,45,33,-1,32,40,47,-1,47,46,32,-1,40,36,48,-1,48,47,40,-1,36,39,49,-1,49,48,36,-1,39,34,41,-1,41,49,39,-1,25,24,51,-1,51,50,25,-1,24,28,52,-1,52,51,24,-1,28,29,53,-1,53,52,28,-1,29,27,54,-1,54,53,29,-1,27,30,55,-1,55,54,27,-1,30,31,56,-1,56,55,30,-1,31,32,57,-1,57,56,31,-1,32,33,58,-1,58,57,32,-1,33,26,59,-1,59,58,33,-1,26,25,50,-1,50,59,26,-1]
Coordinate523 = x3d.Coordinate()

IndexedFaceSet522.coord = Coordinate523
TextureCoordinate524 = x3d.TextureCoordinate()

IndexedFaceSet522.texCoord = TextureCoordinate524

Shape518.geometry = IndexedFaceSet522

HAnimSegment517.children.append(Shape518)
HAnimSite525 = x3d.HAnimSite()
HAnimSite525.DEF = "r_calcaneus_Sites"
"""None"""

HAnimSegment517.children.append(HAnimSite525)

HAnimJoint516.children.append(HAnimSegment517)
HAnimJoint526 = x3d.HAnimJoint()
HAnimJoint526.name = "r_transversetarsal"
HAnimJoint526.DEF = "hanim_r_transversetarsal"
HAnimJoint526.center = [-0.110272504,0.03528,0.002089125]
HAnimJoint526.ulimit = [0,0,0]
HAnimJoint526.llimit = [0,0,0]
HAnimSegment527 = x3d.HAnimSegment()
HAnimSegment527.name = "r_cuboid"
HAnimSegment527.DEF = "hanim_r_cuboid"
Shape528 = x3d.Shape()
Shape528.DEF = "r_cuboid_Shape"
Appearance529 = x3d.Appearance()
Material530 = x3d.Material()
Material530.USE = "SurfaceDefault"

Appearance529.material = Material530
ImageTexture531 = x3d.ImageTexture()
ImageTexture531.USE = "JinLOA4TextureAtlas"

Appearance529.texture = ImageTexture531

Shape528.appearance = Appearance529
IndexedFaceSet532 = x3d.IndexedFaceSet()
IndexedFaceSet532.coordIndex = [1,17,16,-1,16,0,1,-1,3,8,5,-1,5,0,3,-1,6,7,2,-1,2,1,6,-1,2,4,10,-1,18,2,10,-1,4,9,13,-1,13,12,4,-1,11,10,4,-1,4,12,11,-1,6,1,0,-1,0,5,6,-1,9,4,2,-1,2,7,9,-1,8,3,14,-1,14,15,8,-1,3,0,16,-1,16,19,3,-1,14,3,19,-1,1,2,18,-1,18,17,1,-1,31,32,33,-1,33,26,27,-1,31,33,27,-1,30,31,27,-1,21,24,25,-1,25,20,21,-1,40,41,42,-1,42,34,35,-1,42,35,36,-1,40,42,36,-1,39,40,36,-1,22,23,24,-1,24,21,22,-1,11,12,21,-1,21,20,11,-1,12,13,22,-1,22,21,12,-1,39,36,37,-1,37,38,39,-1,15,14,24,-1,24,23,15,-1,14,19,25,-1,25,24,14,-1,30,27,28,-1,28,29,30,-1,10,11,27,-1,27,26,10,-1,11,20,28,-1,28,27,11,-1,20,25,29,-1,29,28,20,-1,25,19,30,-1,30,29,25,-1,19,16,31,-1,31,30,19,-1,16,17,32,-1,32,31,16,-1,17,18,33,-1,33,32,17,-1,18,10,26,-1,26,33,18,-1,5,8,35,-1,35,34,5,-1,8,15,36,-1,36,35,8,-1,15,23,37,-1,37,36,15,-1,23,22,38,-1,38,37,23,-1,22,13,39,-1,39,38,22,-1,13,9,40,-1,40,39,13,-1,9,7,41,-1,41,40,9,-1,7,6,42,-1,42,41,7,-1,6,5,34,-1,34,42,6,-1]
IndexedFaceSet532.creaseAngle = 3.14159
IndexedFaceSet532.texCoordIndex = [1,17,16,-1,16,0,1,-1,2,8,5,-1,5,0,2,-1,6,7,3,-1,3,1,6,-1,3,4,10,-1,18,3,10,-1,4,9,13,-1,13,12,4,-1,11,10,4,-1,4,12,11,-1,6,1,0,-1,0,5,6,-1,9,4,3,-1,3,7,9,-1,8,2,14,-1,14,15,8,-1,2,0,16,-1,16,19,2,-1,14,2,19,-1,1,3,18,-1,18,17,1,-1,31,32,33,-1,33,26,27,-1,31,33,27,-1,30,31,27,-1,21,24,25,-1,25,20,21,-1,40,41,42,-1,42,34,35,-1,42,35,36,-1,40,42,36,-1,39,40,36,-1,22,23,24,-1,24,21,22,-1,11,12,21,-1,21,20,11,-1,12,13,22,-1,22,21,12,-1,39,36,37,-1,37,38,39,-1,15,14,24,-1,24,23,15,-1,14,19,25,-1,25,24,14,-1,30,27,28,-1,28,29,30,-1,10,11,27,-1,27,26,10,-1,11,20,28,-1,28,27,11,-1,20,25,29,-1,29,28,20,-1,25,19,30,-1,30,29,25,-1,19,16,31,-1,31,30,19,-1,16,17,32,-1,32,31,16,-1,17,18,33,-1,33,32,17,-1,18,10,26,-1,26,33,18,-1,5,8,35,-1,35,34,5,-1,8,15,36,-1,36,35,8,-1,15,23,37,-1,37,36,15,-1,23,22,38,-1,38,37,23,-1,22,13,39,-1,39,38,22,-1,13,9,40,-1,40,39,13,-1,9,7,41,-1,41,40,9,-1,7,6,42,-1,42,41,7,-1,6,5,34,-1,34,42,6,-1]
Coordinate533 = x3d.Coordinate()

IndexedFaceSet532.coord = Coordinate533
TextureCoordinate534 = x3d.TextureCoordinate()

IndexedFaceSet532.texCoord = TextureCoordinate534

Shape528.geometry = IndexedFaceSet532

HAnimSegment527.children.append(Shape528)
HAnimSite535 = x3d.HAnimSite()
HAnimSite535.DEF = "r_cuboid_Sites"
"""None"""

HAnimSegment527.children.append(HAnimSite535)

HAnimJoint526.children.append(HAnimSegment527)
HAnimJoint536 = x3d.HAnimJoint()
HAnimJoint536.name = "r_tarsometatarsal_4"
HAnimJoint536.DEF = "hanim_r_tarsometatarsal_4"
HAnimJoint536.center = [-0.10613251,0.0245475,0.03843]
HAnimJoint536.ulimit = [0,0,0]
HAnimJoint536.llimit = [0,0,0]
HAnimSegment537 = x3d.HAnimSegment()
HAnimSegment537.name = "r_metatarsal_4"
HAnimSegment537.DEF = "hanim_r_metatarsal_4"
Shape538 = x3d.Shape()
Shape538.DEF = "r_metatarsal_4_Shape"
Appearance539 = x3d.Appearance()
Material540 = x3d.Material()
Material540.USE = "SurfaceDefault"

Appearance539.material = Material540
ImageTexture541 = x3d.ImageTexture()
ImageTexture541.USE = "JinLOA4TextureAtlas"

Appearance539.texture = ImageTexture541

Shape538.appearance = Appearance539
IndexedFaceSet542 = x3d.IndexedFaceSet()
IndexedFaceSet542.coordIndex = [11,13,17,-1,17,16,11,-1,10,11,16,-1,16,14,10,-1,5,1,3,-1,3,7,5,-1,0,2,6,-1,6,4,0,-1,14,15,12,-1,12,10,14,-1,7,3,0,-1,0,4,7,-1,8,1,5,-1,5,9,8,-1,40,41,36,-1,36,37,40,-1,48,49,44,-1,44,45,48,-1,27,28,31,-1,28,29,30,-1,30,31,28,-1,34,35,32,-1,32,33,34,-1,35,27,31,-1,31,32,35,-1,18,19,24,-1,26,18,24,-1,24,25,26,-1,20,21,22,-1,22,23,20,-1,19,20,23,-1,23,24,19,-1,5,7,19,-1,19,18,5,-1,7,4,20,-1,20,19,7,-1,4,6,21,-1,21,20,4,-1,40,37,38,-1,38,39,40,-1,15,14,23,-1,23,22,15,-1,14,16,24,-1,24,23,14,-1,16,17,25,-1,25,24,16,-1,44,49,50,-1,50,51,44,-1,9,5,18,-1,18,26,9,-1,3,1,28,-1,28,27,3,-1,1,8,29,-1,29,28,1,-1,48,45,46,-1,46,47,48,-1,13,11,31,-1,31,30,13,-1,11,10,32,-1,32,31,11,-1,10,12,33,-1,33,32,10,-1,36,41,42,-1,42,43,36,-1,2,0,35,-1,35,34,2,-1,0,3,27,-1,27,35,0,-1,12,15,37,-1,37,36,12,-1,15,22,38,-1,38,37,15,-1,22,21,39,-1,39,38,22,-1,21,6,40,-1,40,39,21,-1,6,2,41,-1,41,40,6,-1,2,34,42,-1,42,41,2,-1,34,33,43,-1,43,42,34,-1,33,12,36,-1,36,43,33,-1,17,13,45,-1,45,44,17,-1,13,30,46,-1,46,45,13,-1,30,29,47,-1,47,46,30,-1,29,8,48,-1,48,47,29,-1,8,9,49,-1,49,48,8,-1,9,26,50,-1,50,49,9,-1,26,25,51,-1,51,50,26,-1,25,17,44,-1,44,51,25,-1]
IndexedFaceSet542.creaseAngle = 3.14159
IndexedFaceSet542.texCoordIndex = [5,13,17,-1,17,16,5,-1,2,5,16,-1,16,7,2,-1,9,1,6,-1,6,12,9,-1,0,4,11,-1,11,8,0,-1,7,10,3,-1,3,2,7,-1,12,6,0,-1,0,8,12,-1,14,1,9,-1,9,15,14,-1,42,43,38,-1,38,39,42,-1,50,51,46,-1,46,47,50,-1,29,30,18,-1,30,31,32,-1,32,33,30,-1,36,37,34,-1,34,35,36,-1,37,29,33,-1,33,34,37,-1,20,21,19,-1,28,20,26,-1,26,27,28,-1,22,23,24,-1,24,25,22,-1,21,22,25,-1,25,26,21,-1,9,12,21,-1,21,20,9,-1,12,8,22,-1,22,21,12,-1,8,11,23,-1,23,22,8,-1,42,39,40,-1,40,41,42,-1,10,7,25,-1,25,24,10,-1,7,16,26,-1,26,25,7,-1,16,17,27,-1,27,26,16,-1,46,51,52,-1,52,53,46,-1,15,9,20,-1,20,28,15,-1,6,1,30,-1,30,29,6,-1,1,14,31,-1,31,30,1,-1,50,47,48,-1,48,49,50,-1,13,5,33,-1,33,32,13,-1,5,2,34,-1,34,33,5,-1,2,3,35,-1,35,34,2,-1,38,43,44,-1,44,45,38,-1,4,0,37,-1,37,36,4,-1,0,6,29,-1,29,37,0,-1,3,10,39,-1,39,38,3,-1,10,24,40,-1,40,39,10,-1,24,23,41,-1,41,40,24,-1,23,11,42,-1,42,41,23,-1,11,4,43,-1,43,42,11,-1,4,36,44,-1,44,43,4,-1,36,35,45,-1,45,44,36,-1,35,3,38,-1,38,45,35,-1,17,13,47,-1,47,46,17,-1,13,32,48,-1,48,47,13,-1,32,31,49,-1,49,48,32,-1,31,14,50,-1,50,49,31,-1,14,15,51,-1,51,50,14,-1,15,28,52,-1,52,51,15,-1,28,27,53,-1,53,52,28,-1,27,17,46,-1,46,53,27,-1]
Coordinate543 = x3d.Coordinate()

IndexedFaceSet542.coord = Coordinate543
TextureCoordinate544 = x3d.TextureCoordinate()

IndexedFaceSet542.texCoord = TextureCoordinate544

Shape538.geometry = IndexedFaceSet542

HAnimSegment537.children.append(Shape538)
HAnimSite545 = x3d.HAnimSite()
HAnimSite545.DEF = "r_metatarsal_4_Sites"
"""None"""

HAnimSegment537.children.append(HAnimSite545)

HAnimJoint536.children.append(HAnimSegment537)
HAnimJoint546 = x3d.HAnimJoint()
HAnimJoint546.name = "r_metatarsophalangeal_4"
HAnimJoint546.DEF = "hanim_r_metatarsophalangeal_4"
HAnimJoint546.center = [-0.10950751,0.01435275,0.091170006]
HAnimJoint546.ulimit = [0,0,0]
HAnimJoint546.llimit = [0,0,0]
HAnimSegment547 = x3d.HAnimSegment()
HAnimSegment547.name = "r_tarsal_proximal_phalanx_4"
HAnimSegment547.DEF = "hanim_r_tarsal_proximal_phalanx_4"
Shape548 = x3d.Shape()
Shape548.DEF = "r_tarsal_proximal_phalanx_4_Shape"
Appearance549 = x3d.Appearance()
Material550 = x3d.Material()
Material550.USE = "SurfaceDefault"

Appearance549.material = Material550
ImageTexture551 = x3d.ImageTexture()
ImageTexture551.USE = "JinLOA4TextureAtlas"

Appearance549.texture = ImageTexture551

Shape548.appearance = Appearance549
IndexedFaceSet552 = x3d.IndexedFaceSet()
IndexedFaceSet552.coordIndex = [13,2,1,-1,1,10,13,-1,10,1,3,-1,3,8,10,-1,3,4,0,-1,0,8,3,-1,0,4,5,-1,5,9,0,-1,7,9,5,-1,5,6,7,-1,6,2,13,-1,13,7,6,-1,22,17,18,-1,18,14,22,-1,20,19,21,-1,21,15,20,-1,9,7,15,-1,15,21,9,-1,10,14,16,-1,8,22,14,-1,14,10,8,-1,21,23,9,-1,11,7,13,-1,13,12,11,-1,0,25,24,-1,24,8,0,-1,16,12,13,-1,13,10,16,-1,23,25,0,-1,0,9,23,-1,11,15,7,-1,24,22,8,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,6,5,4,-1,4,3,1,-1,6,4,1,-1,2,6,1,-1,37,38,39,-1,39,40,37,-1,28,29,26,-1,26,27,28,-1,35,36,30,-1,30,31,35,-1,40,41,42,-1,42,43,37,-1,40,42,37,-1,18,17,27,-1,27,26,18,-1,17,19,28,-1,28,27,17,-1,19,20,29,-1,29,28,19,-1,20,18,26,-1,26,29,20,-1,17,22,31,-1,31,30,17,-1,22,24,32,-1,32,31,22,-1,24,25,33,-1,33,32,24,-1,25,23,34,-1,34,33,25,-1,23,21,35,-1,35,34,23,-1,21,19,36,-1,36,35,21,-1,19,17,30,-1,30,36,19,-1,14,18,38,-1,38,37,14,-1,18,20,39,-1,39,38,18,-1,20,15,40,-1,40,39,20,-1,15,11,41,-1,41,40,15,-1,11,12,42,-1,42,41,11,-1,12,16,43,-1,43,42,12,-1,16,14,37,-1,37,43,16,-1]
IndexedFaceSet552.creaseAngle = 3.14159
IndexedFaceSet552.texCoordIndex = [27,2,1,-1,1,10,27,-1,10,1,3,-1,3,11,10,-1,3,4,0,-1,0,11,3,-1,0,4,5,-1,5,12,0,-1,9,12,5,-1,5,6,9,-1,6,2,27,-1,27,9,6,-1,35,28,29,-1,29,7,35,-1,31,30,33,-1,33,8,31,-1,15,14,16,-1,16,32,15,-1,17,13,18,-1,19,34,13,-1,13,17,19,-1,32,36,15,-1,20,14,22,-1,22,21,20,-1,23,38,37,-1,37,19,23,-1,18,24,25,-1,25,17,18,-1,36,39,26,-1,26,15,36,-1,20,16,14,-1,37,34,19,-1,45,46,47,-1,47,48,49,-1,45,47,49,-1,6,5,4,-1,4,3,1,-1,6,4,1,-1,2,6,1,-1,51,52,53,-1,53,54,51,-1,42,43,40,-1,40,41,42,-1,49,50,44,-1,44,45,49,-1,54,55,56,-1,56,57,51,-1,54,56,51,-1,29,28,41,-1,41,40,29,-1,28,30,42,-1,42,41,28,-1,30,31,43,-1,43,42,30,-1,31,29,40,-1,40,43,31,-1,28,35,45,-1,45,44,28,-1,34,37,46,-1,46,45,34,-1,37,38,47,-1,47,46,37,-1,39,36,48,-1,48,47,39,-1,36,32,49,-1,49,48,36,-1,33,30,50,-1,50,49,33,-1,30,28,44,-1,44,50,30,-1,7,29,52,-1,52,51,7,-1,29,31,53,-1,53,52,29,-1,31,8,54,-1,54,53,31,-1,16,20,55,-1,55,54,16,-1,20,21,56,-1,56,55,20,-1,24,18,57,-1,57,56,24,-1,18,13,51,-1,51,57,18,-1]
Coordinate553 = x3d.Coordinate()

IndexedFaceSet552.coord = Coordinate553
TextureCoordinate554 = x3d.TextureCoordinate()

IndexedFaceSet552.texCoord = TextureCoordinate554

Shape548.geometry = IndexedFaceSet552

HAnimSegment547.children.append(Shape548)
HAnimSite555 = x3d.HAnimSite()
HAnimSite555.DEF = "r_tarsal_proximal_phalanx_4_Sites"
"""None"""

HAnimSegment547.children.append(HAnimSite555)

HAnimJoint546.children.append(HAnimSegment547)
HAnimJoint556 = x3d.HAnimJoint()
HAnimJoint556.name = "r_tarsal_proximal_interphalangeal_4"
HAnimJoint556.DEF = "hanim_r_tarsal_proximal_interphalangeal_4"
HAnimJoint556.center = [-0.11378251,0.0122445,0.1063125]
HAnimJoint556.ulimit = [0,0,0]
HAnimJoint556.llimit = [0,0,0]
HAnimSegment557 = x3d.HAnimSegment()
HAnimSegment557.name = "r_tarsal_middle_phalanx_4"
HAnimSegment557.DEF = "hanim_r_tarsal_middle_phalanx_4"
Shape558 = x3d.Shape()
Shape558.DEF = "r_tarsal_middle_phalanx_4_Shape"
Appearance559 = x3d.Appearance()
Material560 = x3d.Material()
Material560.USE = "SurfaceDefault"

Appearance559.material = Material560
ImageTexture561 = x3d.ImageTexture()
ImageTexture561.USE = "JinLOA4TextureAtlas"

Appearance559.texture = ImageTexture561

Shape558.appearance = Appearance559
IndexedFaceSet562 = x3d.IndexedFaceSet()
IndexedFaceSet562.coordIndex = [0,6,7,-1,7,1,0,-1,2,8,6,-1,6,0,2,-1,9,8,2,-1,2,3,9,-1,4,10,9,-1,9,3,4,-1,11,10,4,-1,4,5,11,-1,7,11,5,-1,5,1,7,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,7,6,13,-1,13,12,7,-1,6,8,14,-1,14,13,6,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,7,12,-1,12,17,11,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,0,1,19,-1,19,18,0,-1,1,5,20,-1,20,19,1,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,18,-1,18,23,2,-1]
IndexedFaceSet562.creaseAngle = 3.14159
IndexedFaceSet562.texCoordIndex = [0,8,9,-1,9,1,0,-1,2,10,8,-1,8,0,2,-1,11,10,2,-1,2,3,11,-1,4,12,11,-1,11,3,4,-1,14,13,7,-1,7,6,14,-1,9,15,5,-1,5,1,9,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,9,8,17,-1,17,16,9,-1,8,10,18,-1,18,17,8,-1,10,11,19,-1,19,18,10,-1,11,12,20,-1,20,19,11,-1,13,14,21,-1,21,20,13,-1,15,9,16,-1,16,21,15,-1,24,25,26,-1,26,27,22,-1,24,26,22,-1,23,24,22,-1,0,1,23,-1,23,22,0,-1,1,5,24,-1,24,23,1,-1,6,7,25,-1,25,24,6,-1,4,3,26,-1,26,25,4,-1,3,2,27,-1,27,26,3,-1,2,0,22,-1,22,27,2,-1]
Coordinate563 = x3d.Coordinate()

IndexedFaceSet562.coord = Coordinate563
TextureCoordinate564 = x3d.TextureCoordinate()

IndexedFaceSet562.texCoord = TextureCoordinate564

Shape558.geometry = IndexedFaceSet562

HAnimSegment557.children.append(Shape558)
HAnimSite565 = x3d.HAnimSite()
HAnimSite565.DEF = "r_tarsal_middle_phalanx_4_Sites"
"""None"""

HAnimSegment557.children.append(HAnimSite565)

HAnimJoint556.children.append(HAnimSegment557)
HAnimJoint566 = x3d.HAnimJoint()
HAnimJoint566.name = "r_tarsal_distal_interphalangeal_4"
HAnimJoint566.DEF = "hanim_r_tarsal_distal_interphalangeal_4"
HAnimJoint566.center = [-0.1153125,0.009369,0.11369251]
HAnimJoint566.ulimit = [0,0,0]
HAnimJoint566.llimit = [0,0,0]
HAnimSegment567 = x3d.HAnimSegment()
HAnimSegment567.name = "r_tarsal_distal_phalanx_4"
HAnimSegment567.DEF = "hanim_r_tarsal_distal_phalanx_4"
Shape568 = x3d.Shape()
Shape568.DEF = "r_tarsal_distal_phalanx_4_Shape"
Appearance569 = x3d.Appearance()
Material570 = x3d.Material()
Material570.USE = "SurfaceDefault"

Appearance569.material = Material570
ImageTexture571 = x3d.ImageTexture()
ImageTexture571.USE = "JinLOA4TextureAtlas"

Appearance569.texture = ImageTexture571

Shape568.appearance = Appearance569
IndexedFaceSet572 = x3d.IndexedFaceSet()
IndexedFaceSet572.coordIndex = [0,3,2,-1,2,1,0,-1,5,4,2,-1,2,3,5,-1,0,6,7,-1,7,3,0,-1,1,8,6,-1,6,0,1,-1,9,8,1,-1,1,2,9,-1,4,10,9,-1,9,2,4,-1,11,10,4,-1,4,5,11,-1,7,11,5,-1,5,3,7,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,7,6,13,-1,13,12,7,-1,6,8,14,-1,14,13,6,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,7,12,-1,12,17,11,-1]
IndexedFaceSet572.creaseAngle = 3.14159
IndexedFaceSet572.texCoordIndex = [0,3,2,-1,2,1,0,-1,5,4,2,-1,2,3,5,-1,0,8,9,-1,9,3,0,-1,1,10,8,-1,8,0,1,-1,11,10,1,-1,1,2,11,-1,4,12,11,-1,11,2,4,-1,14,13,7,-1,7,6,14,-1,9,15,5,-1,5,3,9,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,9,8,17,-1,17,16,9,-1,8,10,18,-1,18,17,8,-1,10,11,19,-1,19,18,10,-1,11,12,20,-1,20,19,11,-1,13,14,21,-1,21,20,13,-1,15,9,16,-1,16,21,15,-1]
Coordinate573 = x3d.Coordinate()

IndexedFaceSet572.coord = Coordinate573
TextureCoordinate574 = x3d.TextureCoordinate()

IndexedFaceSet572.texCoord = TextureCoordinate574

Shape568.geometry = IndexedFaceSet572

HAnimSegment567.children.append(Shape568)
HAnimSite575 = x3d.HAnimSite()
HAnimSite575.DEF = "r_tarsal_distal_phalanx_4_Sites"
"""(r_tarsal_distal_phalanx_4_tip -0.142 0.011 0.178)"""

HAnimSegment567.children.append(HAnimSite575)

HAnimJoint566.children.append(HAnimSegment567)

HAnimJoint556.children.append(HAnimJoint566)

HAnimJoint546.children.append(HAnimJoint556)

HAnimJoint536.children.append(HAnimJoint546)

HAnimJoint526.children.append(HAnimJoint536)
HAnimJoint576 = x3d.HAnimJoint()
HAnimJoint576.name = "r_tarsometatarsal_5"
HAnimJoint576.DEF = "hanim_r_tarsometatarsal_5"
HAnimJoint576.center = [-0.12044251,0.020945251,0.03474]
HAnimJoint576.ulimit = [0,0,0]
HAnimJoint576.llimit = [0,0,0]
HAnimSegment577 = x3d.HAnimSegment()
HAnimSegment577.name = "r_metatarsal_5"
HAnimSegment577.DEF = "hanim_r_metatarsal_5"
Shape578 = x3d.Shape()
Shape578.DEF = "r_metatarsal_5_Shape"
Appearance579 = x3d.Appearance()
Material580 = x3d.Material()
Material580.USE = "SurfaceDefault"

Appearance579.material = Material580
ImageTexture581 = x3d.ImageTexture()
ImageTexture581.USE = "JinLOA4TextureAtlas"

Appearance579.texture = ImageTexture581

Shape578.appearance = Appearance579
IndexedFaceSet582 = x3d.IndexedFaceSet()
IndexedFaceSet582.coordIndex = [0,1,10,-1,2,12,17,-1,17,9,2,-1,6,0,11,-1,11,14,6,-1,2,1,7,-1,7,8,2,-1,3,4,19,-1,19,18,3,-1,13,22,20,-1,20,5,13,-1,5,4,10,-1,10,9,5,-1,6,7,1,-1,1,0,6,-1,8,15,12,-1,12,2,8,-1,9,17,13,-1,13,5,9,-1,0,3,16,-1,16,11,0,-1,9,10,1,-1,1,2,9,-1,3,0,10,-1,10,4,3,-1,16,3,18,-1,18,21,16,-1,19,4,5,-1,5,20,19,-1,33,34,35,-1,33,35,36,-1,32,33,36,-1,27,24,25,-1,25,26,27,-1,39,40,41,-1,45,39,41,-1,44,45,41,-1,28,29,23,-1,28,23,24,-1,24,27,28,-1,29,30,31,-1,31,23,29,-1,11,16,24,-1,24,23,11,-1,16,21,25,-1,25,24,16,-1,32,36,37,-1,37,38,32,-1,22,13,27,-1,27,26,22,-1,13,17,28,-1,28,27,13,-1,17,12,29,-1,29,28,17,-1,12,15,30,-1,30,29,12,-1,44,41,42,-1,42,43,44,-1,14,11,23,-1,23,31,14,-1,21,18,33,-1,33,32,21,-1,18,19,34,-1,34,33,18,-1,19,20,35,-1,35,34,19,-1,20,22,36,-1,36,35,20,-1,22,26,37,-1,37,36,22,-1,26,25,38,-1,38,37,26,-1,25,21,32,-1,32,38,25,-1,7,6,40,-1,40,39,7,-1,6,14,41,-1,41,40,6,-1,14,31,42,-1,42,41,14,-1,31,30,43,-1,43,42,31,-1,30,15,44,-1,44,43,30,-1,15,8,45,-1,45,44,15,-1,8,7,39,-1,39,45,8,-1]
IndexedFaceSet582.creaseAngle = 3.14159
IndexedFaceSet582.texCoordIndex = [0,1,10,-1,2,12,17,-1,17,9,2,-1,6,0,11,-1,11,14,6,-1,2,1,7,-1,7,8,2,-1,3,4,19,-1,19,18,3,-1,13,22,20,-1,20,5,13,-1,5,4,10,-1,10,9,5,-1,6,7,1,-1,1,0,6,-1,8,15,12,-1,12,2,8,-1,9,17,13,-1,13,5,9,-1,0,3,16,-1,16,11,0,-1,9,10,1,-1,1,2,9,-1,3,0,10,-1,10,4,3,-1,16,3,18,-1,18,21,16,-1,19,4,5,-1,5,20,19,-1,33,34,35,-1,33,35,36,-1,32,33,36,-1,27,24,25,-1,25,26,27,-1,39,40,41,-1,45,39,41,-1,44,45,41,-1,28,29,11,-1,28,23,24,-1,24,27,28,-1,29,30,31,-1,31,23,29,-1,11,16,24,-1,24,23,11,-1,16,21,25,-1,25,24,16,-1,32,36,37,-1,37,38,32,-1,22,13,27,-1,27,26,22,-1,13,17,28,-1,28,27,13,-1,17,12,29,-1,29,28,17,-1,12,15,30,-1,30,29,12,-1,44,41,42,-1,42,43,44,-1,14,11,23,-1,23,31,14,-1,21,18,33,-1,33,32,21,-1,18,19,34,-1,34,33,18,-1,19,20,35,-1,35,34,19,-1,20,22,36,-1,36,35,20,-1,22,26,37,-1,37,36,22,-1,26,25,38,-1,38,37,26,-1,25,21,32,-1,32,38,25,-1,7,6,40,-1,40,39,7,-1,6,14,41,-1,41,40,6,-1,14,31,42,-1,42,41,14,-1,31,30,43,-1,43,42,31,-1,30,15,44,-1,44,43,30,-1,15,8,45,-1,45,44,15,-1,8,7,39,-1,39,45,8,-1]
Coordinate583 = x3d.Coordinate()

IndexedFaceSet582.coord = Coordinate583
TextureCoordinate584 = x3d.TextureCoordinate()

IndexedFaceSet582.texCoord = TextureCoordinate584

Shape578.geometry = IndexedFaceSet582

HAnimSegment577.children.append(Shape578)
HAnimSite585 = x3d.HAnimSite()
HAnimSite585.DEF = "r_metatarsal__Sites"
"""None"""

HAnimSegment577.children.append(HAnimSite585)

HAnimJoint576.children.append(HAnimSegment577)
HAnimJoint586 = x3d.HAnimJoint()
HAnimJoint586.name = "r_metatarsophalangeal_5"
HAnimJoint586.DEF = "hanim_r_metatarsophalangeal_5"
HAnimJoint586.center = [-0.12368251,0.013671,0.0865575]
HAnimJoint586.ulimit = [0,0,0]
HAnimJoint586.llimit = [0,0,0]
HAnimSegment587 = x3d.HAnimSegment()
HAnimSegment587.name = "r_tarsal_proximal_phalanx_5"
HAnimSegment587.DEF = "hanim_r_tarsal_proximal_phalanx_5"
Shape588 = x3d.Shape()
Shape588.DEF = "r_tarsal_proximal_phalanx_5_Shape"
Appearance589 = x3d.Appearance()
Material590 = x3d.Material()
Material590.USE = "SurfaceDefault"

Appearance589.material = Material590
ImageTexture591 = x3d.ImageTexture()
ImageTexture591.USE = "JinLOA4TextureAtlas"

Appearance589.texture = ImageTexture591

Shape588.appearance = Appearance589
IndexedFaceSet592 = x3d.IndexedFaceSet()
IndexedFaceSet592.coordIndex = [2,3,11,-1,11,10,2,-1,0,5,14,-1,14,12,0,-1,2,10,13,-1,13,6,2,-1,0,12,11,-1,11,3,0,-1,15,5,0,-1,0,16,15,-1,17,3,2,-1,2,1,17,-1,16,0,3,-1,3,17,16,-1,2,6,4,-1,4,1,2,-1,6,8,4,-1,7,15,18,-1,18,9,7,-1,8,9,18,-1,18,4,8,-1,7,5,15,-1,1,19,20,-1,20,17,1,-1,17,20,21,-1,21,16,17,-1,16,21,22,-1,22,15,16,-1,22,23,18,-1,18,15,22,-1,23,24,4,-1,4,18,23,-1,24,19,1,-1,1,4,24,-1,25,26,27,-1,25,27,28,-1,29,25,28,-1,24,23,22,-1,22,21,20,-1,24,22,20,-1,19,24,20,-1,30,31,32,-1,32,33,30,-1,33,34,35,-1,35,36,30,-1,33,35,30,-1,10,11,26,-1,26,25,10,-1,11,12,27,-1,27,26,11,-1,12,14,28,-1,28,27,12,-1,14,13,29,-1,29,28,14,-1,13,10,25,-1,25,29,13,-1,6,13,31,-1,31,30,6,-1,13,14,32,-1,32,31,13,-1,14,5,33,-1,33,32,14,-1,5,7,34,-1,34,33,5,-1,7,9,35,-1,35,34,7,-1,9,8,36,-1,36,35,9,-1,8,6,30,-1,30,36,8,-1]
IndexedFaceSet592.creaseAngle = 3.14159
IndexedFaceSet592.texCoordIndex = [0,1,24,-1,24,23,0,-1,3,2,27,-1,27,25,3,-1,0,23,26,-1,26,4,0,-1,3,25,24,-1,24,1,3,-1,5,8,7,-1,7,6,5,-1,9,12,11,-1,11,10,9,-1,6,7,14,-1,14,13,6,-1,11,15,17,-1,17,10,11,-1,15,18,17,-1,16,5,20,-1,20,19,16,-1,18,21,22,-1,22,17,18,-1,16,8,5,-1,31,34,35,-1,35,30,31,-1,30,35,36,-1,36,29,30,-1,29,36,37,-1,37,28,29,-1,37,38,33,-1,33,28,37,-1,38,39,32,-1,32,33,38,-1,39,34,31,-1,31,32,39,-1,40,41,42,-1,40,42,43,-1,44,40,43,-1,39,38,37,-1,37,36,35,-1,39,37,35,-1,34,39,35,-1,45,46,47,-1,47,48,45,-1,48,49,50,-1,50,51,45,-1,48,50,45,-1,23,24,41,-1,41,40,23,-1,24,25,42,-1,42,41,24,-1,25,27,43,-1,43,42,25,-1,27,26,44,-1,44,43,27,-1,26,23,40,-1,40,44,26,-1,4,26,46,-1,46,45,4,-1,26,27,47,-1,47,46,26,-1,27,2,48,-1,48,47,27,-1,8,16,49,-1,49,48,8,-1,16,19,50,-1,50,49,16,-1,21,18,51,-1,51,50,21,-1,18,15,45,-1,45,51,18,-1]
Coordinate593 = x3d.Coordinate()

IndexedFaceSet592.coord = Coordinate593
TextureCoordinate594 = x3d.TextureCoordinate()

IndexedFaceSet592.texCoord = TextureCoordinate594

Shape588.geometry = IndexedFaceSet592

HAnimSegment587.children.append(Shape588)
HAnimSite595 = x3d.HAnimSite()
HAnimSite595.DEF = "r_tarsal_proximal_phalanx_5_Sites"
"""None"""

HAnimSegment587.children.append(HAnimSite595)

HAnimJoint586.children.append(HAnimSegment587)
HAnimJoint596 = x3d.HAnimJoint()
HAnimJoint596.name = "r_tarsal_proximal_interphalangeal_5"
HAnimJoint596.DEF = "hanim_r_tarsal_proximal_interphalangeal_5"
HAnimJoint596.center = [-0.126,0.01085625,0.09414]
HAnimJoint596.ulimit = [0,0,0]
HAnimJoint596.llimit = [0,0,0]
HAnimSegment597 = x3d.HAnimSegment()
HAnimSegment597.name = "r_tarsal_middle_phalanx_5"
HAnimSegment597.DEF = "hanim_r_tarsal_middle_phalanx_5"
Shape598 = x3d.Shape()
Shape598.DEF = "r_tarsal_middle_phalanx_5_Shape"
Appearance599 = x3d.Appearance()
Material600 = x3d.Material()
Material600.USE = "SurfaceDefault"

Appearance599.material = Material600
ImageTexture601 = x3d.ImageTexture()
ImageTexture601.USE = "JinLOA4TextureAtlas"

Appearance599.texture = ImageTexture601

Shape598.appearance = Appearance599
IndexedFaceSet602 = x3d.IndexedFaceSet()
IndexedFaceSet602.coordIndex = [6,0,1,-1,1,7,6,-1,7,1,2,-1,2,8,7,-1,8,2,3,-1,3,9,8,-1,3,4,10,-1,10,9,3,-1,4,5,11,-1,11,10,4,-1,5,0,6,-1,6,11,5,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1,1,0,19,-1,19,18,1,-1,0,5,20,-1,20,19,0,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,1,18,-1,18,23,2,-1]
IndexedFaceSet602.creaseAngle = 3.14159
IndexedFaceSet602.texCoordIndex = [6,1,0,-1,0,7,6,-1,7,0,2,-1,2,8,7,-1,8,2,3,-1,3,9,8,-1,3,4,10,-1,10,9,3,-1,4,5,11,-1,11,10,4,-1,5,1,6,-1,6,11,5,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1,0,1,19,-1,19,18,0,-1,1,5,20,-1,20,19,1,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,18,-1,18,23,2,-1]
Coordinate603 = x3d.Coordinate()

IndexedFaceSet602.coord = Coordinate603
TextureCoordinate604 = x3d.TextureCoordinate()

IndexedFaceSet602.texCoord = TextureCoordinate604

Shape598.geometry = IndexedFaceSet602

HAnimSegment597.children.append(Shape598)
HAnimSite605 = x3d.HAnimSite()
HAnimSite605.DEF = "r_tarsal_middle_phalanx_5_Sites"
"""(r_metatarsal_phalanx_5 x y z)"""

HAnimSegment597.children.append(HAnimSite605)

HAnimJoint596.children.append(HAnimSegment597)
HAnimJoint606 = x3d.HAnimJoint()
HAnimJoint606.name = "r_tarsal_distal_interphalangeal_5"
HAnimJoint606.DEF = "hanim_r_tarsal_distal_interphalangeal_5"
HAnimJoint606.center = [-0.1269225,0.008563501,0.10188]
HAnimJoint606.ulimit = [0,0,0]
HAnimJoint606.llimit = [0,0,0]
HAnimSegment607 = x3d.HAnimSegment()
HAnimSegment607.name = "r_tarsal_distal_phalanx_5"
HAnimSegment607.DEF = "hanim_r_tarsal_distal_phalanx_5"
Shape608 = x3d.Shape()
Shape608.DEF = "r_tarsal_distal_phalanx_5_Shape"
Appearance609 = x3d.Appearance()
Material610 = x3d.Material()
Material610.USE = "SurfaceDefault"

Appearance609.material = Material610
ImageTexture611 = x3d.ImageTexture()
ImageTexture611.USE = "JinLOA4TextureAtlas"

Appearance609.texture = ImageTexture611

Shape608.appearance = Appearance609
IndexedFaceSet612 = x3d.IndexedFaceSet()
IndexedFaceSet612.coordIndex = [2,1,4,-1,4,3,2,-1,0,5,4,-1,4,1,0,-1,7,6,0,-1,0,1,7,-1,2,8,7,-1,7,1,2,-1,9,8,2,-1,2,3,9,-1,10,9,3,-1,3,4,10,-1,5,11,10,-1,10,4,5,-1,0,6,11,-1,11,5,0,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1]
IndexedFaceSet612.creaseAngle = 3.14159
IndexedFaceSet612.texCoordIndex = [1,0,3,-1,3,2,1,-1,5,4,3,-1,3,0,5,-1,9,8,5,-1,5,0,9,-1,1,10,9,-1,9,0,1,-1,12,11,7,-1,7,6,12,-1,14,13,2,-1,2,3,14,-1,4,15,14,-1,14,3,4,-1,5,8,15,-1,15,4,5,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,11,12,19,-1,19,18,11,-1,13,14,20,-1,20,19,13,-1,14,15,21,-1,21,20,14,-1,15,8,16,-1,16,21,15,-1]
Coordinate613 = x3d.Coordinate()

IndexedFaceSet612.coord = Coordinate613
TextureCoordinate614 = x3d.TextureCoordinate()

IndexedFaceSet612.texCoord = TextureCoordinate614

Shape608.geometry = IndexedFaceSet612

HAnimSegment607.children.append(Shape608)
HAnimSite615 = x3d.HAnimSite()
HAnimSite615.DEF = "r_tarsal_distal_phalanx_5_Sites"
"""(r_tarsal_distal_phalanx_5_tip -0.154 0.010 0.168)"""

HAnimSegment607.children.append(HAnimSite615)

HAnimJoint606.children.append(HAnimSegment607)

HAnimJoint596.children.append(HAnimJoint606)

HAnimJoint586.children.append(HAnimJoint596)

HAnimJoint576.children.append(HAnimJoint586)

HAnimJoint526.children.append(HAnimJoint576)

HAnimJoint516.children.append(HAnimJoint526)

HAnimJoint356.children.append(HAnimJoint516)

HAnimJoint346.children.append(HAnimJoint356)

HAnimJoint336.children.append(HAnimJoint346)

HAnimJoint46.children.append(HAnimJoint336)
HAnimJoint616 = x3d.HAnimJoint()
HAnimJoint616.name = "vl5"
HAnimJoint616.DEF = "hanim_vl5"
HAnimJoint616.center = [0,0.92542505,-0.013763251]
HAnimJoint616.ulimit = [0,0,0]
HAnimJoint616.llimit = [0,0,0]
HAnimSegment617 = x3d.HAnimSegment()
HAnimSegment617.name = "l5"
HAnimSegment617.DEF = "hanim_l5"
Shape618 = x3d.Shape()
Shape618.DEF = "l5_Shape"
Appearance619 = x3d.Appearance()
Material620 = x3d.Material()
Material620.USE = "SurfaceDefault"

Appearance619.material = Material620
ImageTexture621 = x3d.ImageTexture()
ImageTexture621.USE = "JinLOA4TextureAtlas"

Appearance619.texture = ImageTexture621

Shape618.appearance = Appearance619
IndexedFaceSet622 = x3d.IndexedFaceSet()
IndexedFaceSet622.coordIndex = [0,10,11,-1,11,5,0,-1,1,0,5,-1,5,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,1,6,-1,6,9,4,-1,2,7,26,-1,26,27,2,-1,8,5,11,-1,11,7,8,-1,9,6,5,-1,5,8,9,-1,11,10,13,-1,13,12,11,-1,7,11,12,-1,12,26,7,-1,16,15,14,-1,14,17,16,-1,19,18,15,-1,15,16,19,-1,22,21,20,-1,20,23,22,-1,23,20,24,-1,24,25,23,-1,25,24,18,-1,18,19,25,-1,22,27,26,-1,26,21,22,-1,20,21,14,-1,14,15,20,-1,24,20,15,-1,15,18,24,-1,14,12,13,-1,13,17,14,-1,21,26,12,-1,12,14,21,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,10,0,29,-1,29,28,10,-1,0,1,30,-1,30,29,0,-1,1,4,31,-1,31,30,1,-1,4,3,32,-1,32,31,4,-1,3,2,33,-1,33,32,3,-1,2,27,34,-1,34,33,2,-1,27,22,35,-1,35,34,27,-1,22,23,36,-1,36,35,22,-1,23,25,37,-1,37,36,23,-1,25,19,38,-1,38,37,25,-1,19,16,39,-1,39,38,19,-1,16,17,40,-1,40,39,16,-1,17,13,41,-1,41,40,17,-1,13,10,28,-1,28,41,13,-1]
IndexedFaceSet622.creaseAngle = 3.14159
IndexedFaceSet622.texCoordIndex = [1,0,6,-1,6,7,1,-1,2,1,7,-1,7,8,2,-1,4,3,9,-1,9,10,4,-1,3,5,11,-1,11,9,3,-1,5,2,8,-1,8,11,5,-1,12,13,15,-1,15,14,12,-1,9,7,6,-1,6,10,9,-1,11,8,7,-1,7,9,11,-1,6,0,17,-1,17,18,6,-1,10,6,18,-1,18,16,10,-1,21,20,19,-1,19,22,21,-1,24,23,20,-1,20,21,24,-1,27,26,25,-1,25,28,27,-1,28,25,29,-1,29,30,28,-1,30,29,23,-1,23,24,30,-1,31,34,33,-1,33,32,31,-1,25,26,19,-1,19,20,25,-1,29,25,20,-1,20,23,29,-1,19,35,36,-1,36,22,19,-1,26,37,35,-1,35,19,26,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,44,45,46,-1,43,44,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,43,46,50,-1,39,43,50,-1,39,50,51,-1,39,51,38,-1,0,1,39,-1,39,38,0,-1,1,2,40,-1,40,39,1,-1,2,5,41,-1,41,40,2,-1,5,3,42,-1,42,41,5,-1,3,4,43,-1,43,42,3,-1,12,14,44,-1,44,43,12,-1,34,31,45,-1,45,44,34,-1,27,28,46,-1,46,45,27,-1,28,30,47,-1,47,46,28,-1,30,24,48,-1,48,47,30,-1,24,21,49,-1,49,48,24,-1,21,22,50,-1,50,49,21,-1,22,36,51,-1,51,50,22,-1,17,0,38,-1,38,51,17,-1]
Coordinate623 = x3d.Coordinate()

IndexedFaceSet622.coord = Coordinate623
TextureCoordinate624 = x3d.TextureCoordinate()

IndexedFaceSet622.texCoord = TextureCoordinate624

Shape618.geometry = IndexedFaceSet622

HAnimSegment617.children.append(Shape618)
HAnimSite625 = x3d.HAnimSite()
HAnimSite625.DEF = "l5_Sites"
"""(spine_2_lower_back x y z) (waist_preferred_anterior x y z) (waist_preferred_posterior 0.2900 1.0915 -0.1091)"""

HAnimSegment617.children.append(HAnimSite625)

HAnimJoint616.children.append(HAnimSegment617)
HAnimJoint626 = x3d.HAnimJoint()
HAnimJoint626.name = "vl4"
HAnimJoint626.DEF = "hanim_vl4"
HAnimJoint626.center = [0,0.94972503,-0.013763251]
HAnimJoint626.ulimit = [0,0,0]
HAnimJoint626.llimit = [0,0,0]
HAnimSegment627 = x3d.HAnimSegment()
HAnimSegment627.name = "l4"
HAnimSegment627.DEF = "hanim_l4"
Shape628 = x3d.Shape()
Shape628.DEF = "l4_Shape"
Appearance629 = x3d.Appearance()
Material630 = x3d.Material()
Material630.USE = "SurfaceDefault"

Appearance629.material = Material630
ImageTexture631 = x3d.ImageTexture()
ImageTexture631.USE = "JinLOA4TextureAtlas"

Appearance629.texture = ImageTexture631

Shape628.appearance = Appearance629
IndexedFaceSet632 = x3d.IndexedFaceSet()
IndexedFaceSet632.coordIndex = [11,6,0,-1,0,3,11,-1,7,1,0,-1,0,6,7,-1,9,8,2,-1,2,4,9,-1,10,9,4,-1,4,5,10,-1,10,5,1,-1,1,7,10,-1,25,11,3,-1,3,26,25,-1,2,8,12,-1,12,27,2,-1,13,16,15,-1,15,14,13,-1,17,14,15,-1,15,18,17,-1,19,22,21,-1,21,20,19,-1,23,24,22,-1,22,19,23,-1,23,17,18,-1,18,24,23,-1,25,26,16,-1,16,13,25,-1,21,27,12,-1,12,20,21,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,48,50,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,48,51,55,-1,44,48,55,-1,43,44,55,-1,43,55,42,-1,3,0,29,-1,29,28,3,-1,0,1,30,-1,30,29,0,-1,1,5,31,-1,31,30,1,-1,5,4,32,-1,32,31,5,-1,4,2,33,-1,33,32,4,-1,2,27,34,-1,34,33,2,-1,27,21,35,-1,35,34,27,-1,21,22,36,-1,36,35,21,-1,22,24,37,-1,37,36,22,-1,24,18,38,-1,38,37,24,-1,18,15,39,-1,39,38,18,-1,15,16,40,-1,40,39,15,-1,16,26,41,-1,41,40,16,-1,26,3,28,-1,28,41,26,-1,6,11,43,-1,43,42,6,-1,11,25,44,-1,44,43,11,-1,25,13,45,-1,45,44,25,-1,13,14,46,-1,46,45,13,-1,14,17,47,-1,47,46,14,-1,17,23,48,-1,48,47,17,-1,23,19,49,-1,49,48,23,-1,19,20,50,-1,50,49,19,-1,20,12,51,-1,51,50,20,-1,12,8,52,-1,52,51,12,-1,8,9,53,-1,53,52,8,-1,9,10,54,-1,54,53,9,-1,10,7,55,-1,55,54,10,-1,7,6,42,-1,42,55,7,-1]
IndexedFaceSet632.creaseAngle = 3.14159
IndexedFaceSet632.texCoordIndex = [15,9,0,-1,0,4,15,-1,10,1,0,-1,0,9,10,-1,13,12,2,-1,2,5,13,-1,14,13,5,-1,5,6,14,-1,14,6,1,-1,1,10,14,-1,17,15,4,-1,4,7,17,-1,3,11,16,-1,16,8,3,-1,18,21,20,-1,20,19,18,-1,22,19,20,-1,20,23,22,-1,24,27,26,-1,26,25,24,-1,28,29,27,-1,27,24,28,-1,28,22,23,-1,23,29,28,-1,30,31,21,-1,21,18,30,-1,32,35,34,-1,34,33,32,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,37,41,48,-1,37,48,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,52,54,56,-1,56,57,58,-1,56,58,59,-1,59,60,61,-1,61,62,63,-1,59,61,63,-1,56,59,63,-1,52,56,63,-1,51,52,63,-1,51,63,50,-1,4,0,37,-1,37,36,4,-1,0,1,38,-1,38,37,0,-1,1,6,39,-1,39,38,1,-1,6,5,40,-1,40,39,6,-1,5,2,41,-1,41,40,5,-1,3,8,42,-1,42,41,3,-1,35,32,43,-1,43,42,35,-1,26,27,44,-1,44,43,26,-1,27,29,45,-1,45,44,27,-1,29,23,46,-1,46,45,29,-1,23,20,47,-1,47,46,23,-1,20,21,48,-1,48,47,20,-1,21,31,49,-1,49,48,21,-1,7,4,36,-1,36,49,7,-1,9,15,51,-1,51,50,9,-1,15,17,52,-1,52,51,15,-1,30,18,53,-1,53,52,30,-1,18,19,54,-1,54,53,18,-1,19,22,55,-1,55,54,19,-1,22,28,56,-1,56,55,22,-1,28,24,57,-1,57,56,28,-1,24,25,58,-1,58,57,24,-1,33,34,59,-1,59,58,33,-1,16,11,60,-1,60,59,16,-1,12,13,61,-1,61,60,12,-1,13,14,62,-1,62,61,13,-1,14,10,63,-1,63,62,14,-1,10,9,50,-1,50,63,10,-1]
Coordinate633 = x3d.Coordinate()

IndexedFaceSet632.coord = Coordinate633
TextureCoordinate634 = x3d.TextureCoordinate()

IndexedFaceSet632.texCoord = TextureCoordinate634

Shape628.geometry = IndexedFaceSet632

HAnimSegment627.children.append(Shape628)
HAnimSite635 = x3d.HAnimSite()
HAnimSite635.DEF = "l4_Sites"
"""None"""

HAnimSegment627.children.append(HAnimSite635)

HAnimJoint626.children.append(HAnimSegment627)
HAnimJoint636 = x3d.HAnimJoint()
HAnimJoint636.name = "vl3"
HAnimJoint636.DEF = "hanim_vl3"
HAnimJoint636.center = [0,0.96592504,-0.013763251]
HAnimJoint636.ulimit = [0,0,0]
HAnimJoint636.llimit = [0,0,0]
HAnimSegment637 = x3d.HAnimSegment()
HAnimSegment637.name = "l3"
HAnimSegment637.DEF = "hanim_l3"
Shape638 = x3d.Shape()
Shape638.DEF = "l3_Shape"
Appearance639 = x3d.Appearance()
Material640 = x3d.Material()
Material640.USE = "SurfaceDefault"

Appearance639.material = Material640
ImageTexture641 = x3d.ImageTexture()
ImageTexture641.USE = "JinLOA4TextureAtlas"

Appearance639.texture = ImageTexture641

Shape638.appearance = Appearance639
IndexedFaceSet642 = x3d.IndexedFaceSet()
IndexedFaceSet642.coordIndex = [1,8,15,-1,15,16,1,-1,0,4,9,-1,9,6,0,-1,7,5,0,-1,0,6,7,-1,1,2,10,-1,10,8,1,-1,2,3,11,-1,11,10,2,-1,11,3,5,-1,5,7,11,-1,4,27,12,-1,12,9,4,-1,13,16,15,-1,15,14,13,-1,18,17,20,-1,20,19,18,-1,21,17,18,-1,18,22,21,-1,13,14,24,-1,24,23,13,-1,23,24,26,-1,26,25,23,-1,26,21,22,-1,22,25,26,-1,19,20,12,-1,12,27,19,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,48,50,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,48,51,55,-1,44,48,55,-1,43,44,55,-1,43,55,42,-1,4,0,29,-1,29,28,4,-1,0,5,30,-1,30,29,0,-1,5,3,31,-1,31,30,5,-1,3,2,32,-1,32,31,3,-1,2,1,33,-1,33,32,2,-1,1,16,34,-1,34,33,1,-1,16,13,35,-1,35,34,16,-1,13,23,36,-1,36,35,13,-1,23,25,37,-1,37,36,23,-1,25,22,38,-1,38,37,25,-1,22,18,39,-1,39,38,22,-1,18,19,40,-1,40,39,18,-1,19,27,41,-1,41,40,19,-1,27,4,28,-1,28,41,27,-1,6,9,43,-1,43,42,6,-1,9,12,44,-1,44,43,9,-1,12,20,45,-1,45,44,12,-1,20,17,46,-1,46,45,20,-1,17,21,47,-1,47,46,17,-1,21,26,48,-1,48,47,21,-1,26,24,49,-1,49,48,26,-1,24,14,50,-1,50,49,24,-1,14,15,51,-1,51,50,14,-1,15,8,52,-1,52,51,15,-1,8,10,53,-1,53,52,8,-1,10,11,54,-1,54,53,10,-1,11,7,55,-1,55,54,11,-1,7,6,42,-1,42,55,7,-1]
IndexedFaceSet642.creaseAngle = 3.14159
IndexedFaceSet642.texCoordIndex = [4,11,17,-1,17,7,4,-1,0,1,13,-1,13,9,0,-1,10,2,0,-1,0,9,10,-1,3,5,14,-1,14,12,3,-1,5,6,15,-1,15,14,5,-1,15,6,2,-1,2,10,15,-1,1,8,16,-1,16,13,1,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,26,22,23,-1,23,27,26,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,33,26,27,-1,27,32,33,-1,24,25,35,-1,35,34,24,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,37,41,48,-1,37,48,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,52,54,56,-1,56,57,58,-1,56,58,59,-1,59,60,61,-1,61,62,63,-1,59,61,63,-1,56,59,63,-1,52,56,63,-1,51,52,63,-1,51,63,50,-1,1,0,37,-1,37,36,1,-1,0,2,38,-1,38,37,0,-1,2,6,39,-1,39,38,2,-1,6,5,40,-1,40,39,6,-1,5,3,41,-1,41,40,5,-1,4,7,42,-1,42,41,4,-1,21,18,43,-1,43,42,21,-1,29,30,44,-1,44,43,29,-1,30,32,45,-1,45,44,30,-1,32,27,46,-1,46,45,32,-1,27,23,47,-1,47,46,27,-1,23,24,48,-1,48,47,23,-1,24,34,49,-1,49,48,24,-1,8,1,36,-1,36,49,8,-1,9,13,51,-1,51,50,9,-1,13,16,52,-1,52,51,13,-1,35,25,53,-1,53,52,35,-1,25,22,54,-1,54,53,25,-1,22,26,55,-1,55,54,22,-1,26,33,56,-1,56,55,26,-1,33,31,57,-1,57,56,33,-1,31,28,58,-1,58,57,31,-1,19,20,59,-1,59,58,19,-1,17,11,60,-1,60,59,17,-1,12,14,61,-1,61,60,12,-1,14,15,62,-1,62,61,14,-1,15,10,63,-1,63,62,15,-1,10,9,50,-1,50,63,10,-1]
Coordinate643 = x3d.Coordinate()

IndexedFaceSet642.coord = Coordinate643
TextureCoordinate644 = x3d.TextureCoordinate()

IndexedFaceSet642.texCoord = TextureCoordinate644

Shape638.geometry = IndexedFaceSet642

HAnimSegment637.children.append(Shape638)
HAnimSite645 = x3d.HAnimSite()
HAnimSite645.DEF = "l3_Sites"
"""None"""

HAnimSegment637.children.append(HAnimSite645)

HAnimJoint636.children.append(HAnimSegment637)
HAnimJoint646 = x3d.HAnimJoint()
HAnimJoint646.name = "vl2"
HAnimJoint646.DEF = "hanim_vl2"
HAnimJoint646.center = [0,0.98235005,-0.013763251]
HAnimJoint646.ulimit = [0,0,0]
HAnimJoint646.llimit = [0,0,0]
HAnimSegment647 = x3d.HAnimSegment()
HAnimSegment647.name = "l2"
HAnimSegment647.DEF = "hanim_l2"
Shape648 = x3d.Shape()
Shape648.DEF = "l2_Shape"
Appearance649 = x3d.Appearance()
Material650 = x3d.Material()
Material650.USE = "SurfaceDefault"

Appearance649.material = Material650
ImageTexture651 = x3d.ImageTexture()
ImageTexture651.USE = "JinLOA4TextureAtlas"

Appearance649.texture = ImageTexture651

Shape648.appearance = Appearance649
IndexedFaceSet652 = x3d.IndexedFaceSet()
IndexedFaceSet652.coordIndex = [3,7,14,-1,14,15,3,-1,0,5,10,-1,10,6,0,-1,11,2,0,-1,0,6,11,-1,3,4,8,-1,8,7,3,-1,4,1,9,-1,9,8,4,-1,9,1,2,-1,2,11,9,-1,5,26,27,-1,27,10,5,-1,12,15,14,-1,14,13,12,-1,17,16,19,-1,19,18,17,-1,20,16,17,-1,17,21,20,-1,12,13,23,-1,23,22,12,-1,22,23,25,-1,25,24,22,-1,25,20,21,-1,21,24,25,-1,18,19,27,-1,27,26,18,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,48,50,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,48,51,55,-1,44,48,55,-1,43,44,55,-1,43,55,42,-1,5,0,29,-1,29,28,5,-1,0,2,30,-1,30,29,0,-1,2,1,31,-1,31,30,2,-1,1,4,32,-1,32,31,1,-1,4,3,33,-1,33,32,4,-1,3,15,34,-1,34,33,3,-1,15,12,35,-1,35,34,15,-1,12,22,36,-1,36,35,12,-1,22,24,37,-1,37,36,22,-1,24,21,38,-1,38,37,24,-1,21,17,39,-1,39,38,21,-1,17,18,40,-1,40,39,17,-1,18,26,41,-1,41,40,18,-1,26,5,28,-1,28,41,26,-1,6,10,43,-1,43,42,6,-1,10,27,44,-1,44,43,10,-1,27,19,45,-1,45,44,27,-1,19,16,46,-1,46,45,19,-1,16,20,47,-1,47,46,16,-1,20,25,48,-1,48,47,20,-1,25,23,49,-1,49,48,25,-1,23,13,50,-1,50,49,23,-1,13,14,51,-1,51,50,13,-1,14,7,52,-1,52,51,14,-1,7,8,53,-1,53,52,7,-1,8,9,54,-1,54,53,8,-1,9,11,55,-1,55,54,9,-1,11,6,42,-1,42,55,11,-1]
IndexedFaceSet652.creaseAngle = 3.14159
IndexedFaceSet652.texCoordIndex = [6,10,16,-1,16,7,6,-1,1,0,14,-1,14,9,1,-1,15,2,1,-1,1,9,15,-1,4,3,12,-1,12,11,4,-1,3,5,13,-1,13,12,3,-1,13,5,2,-1,2,15,13,-1,0,8,17,-1,17,14,0,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,26,22,23,-1,23,27,26,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,33,26,27,-1,27,32,33,-1,24,25,35,-1,35,34,24,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,52,54,56,-1,56,57,58,-1,56,58,59,-1,59,60,61,-1,61,62,63,-1,59,61,63,-1,56,59,63,-1,52,56,63,-1,51,52,63,-1,51,63,50,-1,0,1,37,-1,37,36,0,-1,1,2,38,-1,38,37,1,-1,2,5,39,-1,39,38,2,-1,5,3,40,-1,40,39,5,-1,3,4,41,-1,41,40,3,-1,6,7,42,-1,42,41,6,-1,21,18,43,-1,43,42,21,-1,29,30,44,-1,44,43,29,-1,30,32,45,-1,45,44,30,-1,32,27,46,-1,46,45,32,-1,27,23,47,-1,47,46,27,-1,23,24,48,-1,48,47,23,-1,24,34,49,-1,49,48,24,-1,8,0,36,-1,36,49,8,-1,9,14,51,-1,51,50,9,-1,14,17,52,-1,52,51,14,-1,35,25,53,-1,53,52,35,-1,25,22,54,-1,54,53,25,-1,22,26,55,-1,55,54,22,-1,26,33,56,-1,56,55,26,-1,33,31,57,-1,57,56,33,-1,31,28,58,-1,58,57,31,-1,19,20,59,-1,59,58,19,-1,16,10,60,-1,60,59,16,-1,11,12,61,-1,61,60,11,-1,12,13,62,-1,62,61,12,-1,13,15,63,-1,63,62,13,-1,15,9,50,-1,50,63,15,-1]
Coordinate653 = x3d.Coordinate()

IndexedFaceSet652.coord = Coordinate653
TextureCoordinate654 = x3d.TextureCoordinate()

IndexedFaceSet652.texCoord = TextureCoordinate654

Shape648.geometry = IndexedFaceSet652

HAnimSegment647.children.append(Shape648)
HAnimSite655 = x3d.HAnimSite()
HAnimSite655.DEF = "l2_Sites"
"""(l_rib_10 0.0871 1.1925 0.0992) (r_rib_10 -0.0711 1.1941 0.1016) (rib_10_midspine 0.0049 1.1908 -0.1113)"""

HAnimSegment647.children.append(HAnimSite655)

HAnimJoint646.children.append(HAnimSegment647)
HAnimJoint656 = x3d.HAnimJoint()
HAnimJoint656.name = "vl1"
HAnimJoint656.DEF = "hanim_vl1"
HAnimJoint656.center = [0,0.99967504,-0.013763251]
HAnimJoint656.ulimit = [0,0,0]
HAnimJoint656.llimit = [0,0,0]
HAnimSegment657 = x3d.HAnimSegment()
HAnimSegment657.name = "l1"
HAnimSegment657.DEF = "hanim_l1"
Shape658 = x3d.Shape()
Shape658.DEF = "l1_Shape"
Appearance659 = x3d.Appearance()
Material660 = x3d.Material()
Material660.USE = "SurfaceDefault"

Appearance659.material = Material660
ImageTexture661 = x3d.ImageTexture()
ImageTexture661.USE = "JinLOA4TextureAtlas"

Appearance659.texture = ImageTexture661

Shape658.appearance = Appearance659
IndexedFaceSet662 = x3d.IndexedFaceSet()
IndexedFaceSet662.coordIndex = [7,0,1,-1,1,14,7,-1,11,2,0,-1,0,7,11,-1,13,12,3,-1,3,4,13,-1,8,5,2,-1,2,11,8,-1,14,1,6,-1,6,9,14,-1,8,13,4,-1,4,5,8,-1,12,10,27,-1,27,3,12,-1,16,15,18,-1,18,17,16,-1,19,16,17,-1,17,20,19,-1,21,24,23,-1,23,22,21,-1,25,19,20,-1,20,26,25,-1,15,9,6,-1,6,18,15,-1,25,26,24,-1,24,21,25,-1,22,23,27,-1,27,10,22,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,44,45,46,-1,43,44,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,46,50,54,-1,43,46,54,-1,43,54,55,-1,43,55,42,-1,1,0,29,-1,29,28,1,-1,0,2,30,-1,30,29,0,-1,2,5,31,-1,31,30,2,-1,5,4,32,-1,32,31,5,-1,4,3,33,-1,33,32,4,-1,3,27,34,-1,34,33,3,-1,27,23,35,-1,35,34,27,-1,23,24,36,-1,36,35,23,-1,24,26,37,-1,37,36,24,-1,26,20,38,-1,38,37,26,-1,20,17,39,-1,39,38,20,-1,17,18,40,-1,40,39,17,-1,18,6,41,-1,41,40,18,-1,6,1,28,-1,28,41,6,-1,7,14,43,-1,43,42,7,-1,14,9,44,-1,44,43,14,-1,9,15,45,-1,45,44,9,-1,15,16,46,-1,46,45,15,-1,16,19,47,-1,47,46,16,-1,19,25,48,-1,48,47,19,-1,25,21,49,-1,49,48,25,-1,21,22,50,-1,50,49,21,-1,22,10,51,-1,51,50,22,-1,10,12,52,-1,52,51,10,-1,12,13,53,-1,53,52,12,-1,13,8,54,-1,54,53,13,-1,8,11,55,-1,55,54,8,-1,11,7,42,-1,42,55,11,-1]
IndexedFaceSet662.creaseAngle = 3.14159
IndexedFaceSet662.texCoordIndex = [9,0,1,-1,1,17,9,-1,13,2,0,-1,0,9,13,-1,16,15,3,-1,3,5,16,-1,10,6,2,-1,2,13,10,-1,17,1,8,-1,8,11,17,-1,10,16,5,-1,5,6,10,-1,14,12,7,-1,7,4,14,-1,19,18,21,-1,21,20,19,-1,22,19,20,-1,20,23,22,-1,24,27,26,-1,26,25,24,-1,28,22,23,-1,23,29,28,-1,18,30,31,-1,31,21,18,-1,28,29,27,-1,27,24,28,-1,33,32,35,-1,35,34,33,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,52,53,54,-1,51,52,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,54,58,62,-1,51,54,62,-1,51,62,63,-1,51,63,50,-1,1,0,37,-1,37,36,1,-1,0,2,38,-1,38,37,0,-1,2,6,39,-1,39,38,2,-1,6,5,40,-1,40,39,6,-1,5,3,41,-1,41,40,5,-1,4,7,42,-1,42,41,4,-1,35,32,43,-1,43,42,35,-1,26,27,44,-1,44,43,26,-1,27,29,45,-1,45,44,27,-1,29,23,46,-1,46,45,29,-1,23,20,47,-1,47,46,23,-1,20,21,48,-1,48,47,20,-1,21,31,49,-1,49,48,21,-1,8,1,36,-1,36,49,8,-1,9,17,51,-1,51,50,9,-1,17,11,52,-1,52,51,17,-1,30,18,53,-1,53,52,30,-1,18,19,54,-1,54,53,18,-1,19,22,55,-1,55,54,19,-1,22,28,56,-1,56,55,22,-1,28,24,57,-1,57,56,28,-1,24,25,58,-1,58,57,24,-1,33,34,59,-1,59,58,33,-1,12,14,60,-1,60,59,12,-1,15,16,61,-1,61,60,15,-1,16,10,62,-1,62,61,16,-1,10,13,63,-1,63,62,10,-1,13,9,50,-1,50,63,13,-1]
Coordinate663 = x3d.Coordinate()

IndexedFaceSet662.coord = Coordinate663
TextureCoordinate664 = x3d.TextureCoordinate()

IndexedFaceSet662.texCoord = TextureCoordinate664

Shape658.geometry = IndexedFaceSet662

HAnimSegment657.children.append(Shape658)
HAnimSite665 = x3d.HAnimSite()
HAnimSite665.DEF = "l1_Sites"
"""None"""

HAnimSegment657.children.append(HAnimSite665)

HAnimJoint656.children.append(HAnimSegment657)
HAnimJoint666 = x3d.HAnimJoint()
HAnimJoint666.name = "vt12"
HAnimJoint666.DEF = "hanim_vt12"
HAnimJoint666.center = [0,1.0230751,-0.013763251]
HAnimJoint666.ulimit = [0,0,0]
HAnimJoint666.llimit = [0,0,0]
HAnimSegment667 = x3d.HAnimSegment()
HAnimSegment667.name = "t12"
HAnimSegment667.DEF = "hanim_t12"
Shape668 = x3d.Shape()
Shape668.DEF = "t12_Shape"
Appearance669 = x3d.Appearance()
Material670 = x3d.Material()
Material670.USE = "SurfaceDefault"

Appearance669.material = Material670
ImageTexture671 = x3d.ImageTexture()
ImageTexture671.USE = "JinLOA4TextureAtlas"

Appearance669.texture = ImageTexture671

Shape668.appearance = Appearance669
IndexedFaceSet672 = x3d.IndexedFaceSet()
IndexedFaceSet672.coordIndex = [4,5,11,-1,11,10,4,-1,17,3,9,-1,9,20,17,-1,6,0,2,-1,2,7,6,-1,8,1,0,-1,0,6,8,-1,3,4,10,-1,10,9,3,-1,5,1,8,-1,8,11,5,-1,2,27,12,-1,12,7,2,-1,13,16,15,-1,15,14,13,-1,17,20,19,-1,19,18,17,-1,21,24,23,-1,23,22,21,-1,25,21,22,-1,22,26,25,-1,18,19,16,-1,16,13,18,-1,14,15,25,-1,25,26,14,-1,23,24,12,-1,12,27,23,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,44,45,46,-1,43,44,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,46,50,54,-1,43,46,54,-1,43,54,55,-1,43,55,42,-1,2,0,29,-1,29,28,2,-1,0,1,30,-1,30,29,0,-1,1,5,31,-1,31,30,1,-1,5,4,32,-1,32,31,5,-1,4,3,33,-1,33,32,4,-1,3,17,34,-1,34,33,3,-1,17,18,35,-1,35,34,17,-1,18,13,36,-1,36,35,18,-1,13,14,37,-1,37,36,13,-1,14,26,38,-1,38,37,14,-1,26,22,39,-1,39,38,26,-1,22,23,40,-1,40,39,22,-1,23,27,41,-1,41,40,23,-1,27,2,28,-1,28,41,27,-1,6,7,43,-1,43,42,6,-1,7,12,44,-1,44,43,7,-1,12,24,45,-1,45,44,12,-1,24,21,46,-1,46,45,24,-1,21,25,47,-1,47,46,21,-1,25,15,48,-1,48,47,25,-1,15,16,49,-1,49,48,15,-1,16,19,50,-1,50,49,16,-1,19,20,51,-1,51,50,19,-1,20,9,52,-1,52,51,20,-1,9,10,53,-1,53,52,9,-1,10,11,54,-1,54,53,10,-1,11,8,55,-1,55,54,11,-1,8,6,42,-1,42,55,8,-1]
IndexedFaceSet672.creaseAngle = 3.14159
IndexedFaceSet672.texCoordIndex = [5,6,15,-1,15,14,5,-1,7,4,12,-1,12,16,7,-1,9,0,2,-1,2,10,9,-1,11,1,0,-1,0,9,11,-1,3,5,14,-1,14,13,3,-1,6,1,11,-1,11,15,6,-1,2,8,17,-1,17,10,2,-1,18,21,20,-1,20,19,18,-1,22,25,24,-1,24,23,22,-1,26,29,28,-1,28,27,26,-1,30,26,27,-1,27,31,30,-1,33,32,21,-1,21,18,33,-1,19,20,30,-1,30,31,19,-1,28,29,35,-1,35,34,28,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,52,53,54,-1,51,52,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,54,58,62,-1,51,54,62,-1,51,62,63,-1,51,63,50,-1,2,0,37,-1,37,36,2,-1,0,1,38,-1,38,37,0,-1,1,6,39,-1,39,38,1,-1,6,5,40,-1,40,39,6,-1,5,3,41,-1,41,40,5,-1,4,7,42,-1,42,41,4,-1,22,23,43,-1,43,42,22,-1,33,18,44,-1,44,43,33,-1,18,19,45,-1,45,44,18,-1,19,31,46,-1,46,45,19,-1,31,27,47,-1,47,46,31,-1,27,28,48,-1,48,47,27,-1,28,34,49,-1,49,48,28,-1,8,2,36,-1,36,49,8,-1,9,10,51,-1,51,50,9,-1,10,17,52,-1,52,51,10,-1,35,29,53,-1,53,52,35,-1,29,26,54,-1,54,53,29,-1,26,30,55,-1,55,54,26,-1,30,20,56,-1,56,55,30,-1,20,21,57,-1,57,56,20,-1,21,32,58,-1,58,57,21,-1,24,25,59,-1,59,58,24,-1,16,12,60,-1,60,59,16,-1,13,14,61,-1,61,60,13,-1,14,15,62,-1,62,61,14,-1,15,11,63,-1,63,62,15,-1,11,9,50,-1,50,63,11,-1]
Coordinate673 = x3d.Coordinate()

IndexedFaceSet672.coord = Coordinate673
TextureCoordinate674 = x3d.TextureCoordinate()

IndexedFaceSet672.texCoord = TextureCoordinate674

Shape668.geometry = IndexedFaceSet672

HAnimSegment667.children.append(Shape668)
HAnimSite675 = x3d.HAnimSite()
HAnimSite675.DEF = "t12_Sites"
"""None"""

HAnimSegment667.children.append(HAnimSite675)

HAnimJoint666.children.append(HAnimSegment667)
HAnimJoint676 = x3d.HAnimJoint()
HAnimJoint676.name = "vt11"
HAnimJoint676.DEF = "hanim_vt11"
HAnimJoint676.center = [0,1.0467,-0.013763251]
HAnimJoint676.ulimit = [0,0,0]
HAnimJoint676.llimit = [0,0,0]
HAnimSegment677 = x3d.HAnimSegment()
HAnimSegment677.name = "t11"
HAnimSegment677.DEF = "hanim_t11"
Shape678 = x3d.Shape()
Shape678.DEF = "t11_Shape"
Appearance679 = x3d.Appearance()
Material680 = x3d.Material()
Material680.USE = "SurfaceDefault"

Appearance679.material = Material680
ImageTexture681 = x3d.ImageTexture()
ImageTexture681.USE = "JinLOA4TextureAtlas"

Appearance679.texture = ImageTexture681

Shape678.appearance = Appearance679
IndexedFaceSet682 = x3d.IndexedFaceSet()
IndexedFaceSet682.coordIndex = [4,3,10,-1,10,12,4,-1,5,4,12,-1,12,13,5,-1,5,13,9,-1,9,1,5,-1,6,11,14,-1,14,7,6,-1,7,2,0,-1,0,6,7,-1,11,6,0,-1,0,8,11,-1,3,28,29,-1,29,10,3,-1,8,0,1,-1,1,9,8,-1,15,18,17,-1,17,16,15,-1,19,20,18,-1,18,15,19,-1,19,21,22,-1,22,20,19,-1,23,7,14,-1,14,24,23,-1,7,23,25,-1,25,26,7,-1,24,27,25,-1,25,23,24,-1,16,17,29,-1,29,28,16,-1,27,22,21,-1,21,25,27,-1,32,33,34,-1,31,32,34,-1,34,35,36,-1,36,37,38,-1,34,36,38,-1,38,39,40,-1,40,41,42,-1,38,40,42,-1,34,38,42,-1,31,34,42,-1,31,42,43,-1,31,43,30,-1,45,46,47,-1,47,48,49,-1,49,50,51,-1,47,49,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,47,51,55,-1,55,56,57,-1,47,55,57,-1,45,47,57,-1,45,57,44,-1,0,2,31,-1,31,30,0,-1,2,7,32,-1,32,31,2,-1,7,26,33,-1,33,32,7,-1,26,25,34,-1,34,33,26,-1,25,21,35,-1,35,34,25,-1,21,19,36,-1,36,35,21,-1,19,15,37,-1,37,36,19,-1,15,16,38,-1,38,37,15,-1,16,28,39,-1,39,38,16,-1,28,3,40,-1,40,39,28,-1,3,4,41,-1,41,40,3,-1,4,5,42,-1,42,41,4,-1,5,1,43,-1,43,42,5,-1,1,0,30,-1,30,43,1,-1,12,10,45,-1,45,44,12,-1,10,29,46,-1,46,45,10,-1,29,17,47,-1,47,46,29,-1,17,18,48,-1,48,47,17,-1,18,20,49,-1,49,48,18,-1,20,22,50,-1,50,49,20,-1,22,27,51,-1,51,50,22,-1,27,24,52,-1,52,51,27,-1,24,14,53,-1,53,52,24,-1,14,11,54,-1,54,53,14,-1,11,8,55,-1,55,54,11,-1,8,9,56,-1,56,55,8,-1,9,13,57,-1,57,56,9,-1,13,12,44,-1,44,57,13,-1]
IndexedFaceSet682.creaseAngle = 3.14159
IndexedFaceSet682.texCoordIndex = [6,5,14,-1,14,16,6,-1,7,6,16,-1,16,17,7,-1,7,17,12,-1,12,3,7,-1,8,15,18,-1,18,10,8,-1,10,0,1,-1,1,8,10,-1,15,8,2,-1,2,11,15,-1,4,9,19,-1,19,13,4,-1,11,2,3,-1,3,12,11,-1,20,23,22,-1,22,21,20,-1,24,25,23,-1,23,20,24,-1,24,26,27,-1,27,25,24,-1,29,28,31,-1,31,30,29,-1,28,29,32,-1,32,33,28,-1,30,35,34,-1,34,29,30,-1,37,36,39,-1,39,38,37,-1,35,27,26,-1,26,34,35,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,50,51,52,-1,48,50,52,-1,44,48,52,-1,41,44,52,-1,41,52,53,-1,41,53,40,-1,55,56,57,-1,57,58,59,-1,59,60,61,-1,57,59,61,-1,61,62,63,-1,63,64,65,-1,61,63,65,-1,57,61,65,-1,65,66,67,-1,57,65,67,-1,55,57,67,-1,55,67,54,-1,1,0,41,-1,41,40,1,-1,0,10,42,-1,42,41,0,-1,28,33,43,-1,43,42,28,-1,33,32,44,-1,44,43,33,-1,34,26,45,-1,45,44,34,-1,26,24,46,-1,46,45,26,-1,24,20,47,-1,47,46,24,-1,20,21,48,-1,48,47,20,-1,37,38,49,-1,49,48,37,-1,9,4,50,-1,50,49,9,-1,5,6,51,-1,51,50,5,-1,6,7,52,-1,52,51,6,-1,7,3,53,-1,53,52,7,-1,3,2,40,-1,40,53,3,-1,16,14,55,-1,55,54,16,-1,13,19,56,-1,56,55,13,-1,39,36,57,-1,57,56,39,-1,22,23,58,-1,58,57,22,-1,23,25,59,-1,59,58,23,-1,25,27,60,-1,60,59,25,-1,27,35,61,-1,61,60,27,-1,35,30,62,-1,62,61,35,-1,30,31,63,-1,63,62,30,-1,18,15,64,-1,64,63,18,-1,15,11,65,-1,65,64,15,-1,11,12,66,-1,66,65,11,-1,12,17,67,-1,67,66,12,-1,17,16,54,-1,54,67,17,-1]
Coordinate683 = x3d.Coordinate()

IndexedFaceSet682.coord = Coordinate683
TextureCoordinate684 = x3d.TextureCoordinate()

IndexedFaceSet682.texCoord = TextureCoordinate684

Shape678.geometry = IndexedFaceSet682

HAnimSegment677.children.append(Shape678)
HAnimSite685 = x3d.HAnimSite()
HAnimSite685.DEF = "t11_Sites"
"""None"""

HAnimSegment677.children.append(HAnimSite685)

HAnimJoint676.children.append(HAnimSegment677)
HAnimJoint686 = x3d.HAnimJoint()
HAnimJoint686.name = "vt10"
HAnimJoint686.DEF = "hanim_vt10"
HAnimJoint686.center = [0,1.0638,-0.013785751]
HAnimJoint686.ulimit = [0,0,0]
HAnimJoint686.llimit = [0,0,0]
HAnimSegment687 = x3d.HAnimSegment()
HAnimSegment687.name = "t10"
HAnimSegment687.DEF = "hanim_t10"
Shape688 = x3d.Shape()
Shape688.DEF = "t10_Shape"
Appearance689 = x3d.Appearance()
Material690 = x3d.Material()
Material690.USE = "SurfaceDefault"

Appearance689.material = Material690
ImageTexture691 = x3d.ImageTexture()
ImageTexture691.USE = "JinLOA4TextureAtlas"

Appearance689.texture = ImageTexture691

Shape688.appearance = Appearance689
IndexedFaceSet692 = x3d.IndexedFaceSet()
IndexedFaceSet692.coordIndex = [11,7,4,-1,4,2,11,-1,7,8,5,-1,5,4,7,-1,8,10,1,-1,1,5,8,-1,3,6,12,-1,12,23,3,-1,6,3,0,-1,0,9,6,-1,2,26,27,-1,27,11,2,-1,0,1,10,-1,10,9,0,-1,14,13,16,-1,16,15,14,-1,15,16,18,-1,18,17,15,-1,17,18,20,-1,20,19,17,-1,21,23,12,-1,12,22,21,-1,22,25,24,-1,24,21,22,-1,13,14,27,-1,27,26,13,-1,24,25,19,-1,19,20,24,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,42,-1,50,54,42,-1,46,50,42,-1,44,46,42,-1,43,44,42,-1,2,4,29,-1,29,28,2,-1,4,5,30,-1,30,29,4,-1,5,1,31,-1,31,30,5,-1,1,0,32,-1,32,31,1,-1,0,3,33,-1,33,32,0,-1,3,23,34,-1,34,33,3,-1,23,21,35,-1,35,34,23,-1,21,24,36,-1,36,35,21,-1,24,20,37,-1,37,36,24,-1,20,18,38,-1,38,37,20,-1,18,16,39,-1,39,38,18,-1,16,13,40,-1,40,39,16,-1,13,26,41,-1,41,40,13,-1,26,2,28,-1,28,41,26,-1,6,9,43,-1,43,42,6,-1,9,10,44,-1,44,43,9,-1,10,8,45,-1,45,44,10,-1,8,7,46,-1,46,45,8,-1,7,11,47,-1,47,46,7,-1,11,27,48,-1,48,47,11,-1,27,14,49,-1,49,48,27,-1,14,15,50,-1,50,49,14,-1,15,17,51,-1,51,50,15,-1,17,19,52,-1,52,51,17,-1,19,25,53,-1,53,52,19,-1,25,22,54,-1,54,53,25,-1,22,12,55,-1,55,54,22,-1,12,6,42,-1,42,55,12,-1]
IndexedFaceSet692.creaseAngle = 3.14159
IndexedFaceSet692.texCoordIndex = [15,10,5,-1,5,2,15,-1,10,11,6,-1,6,5,10,-1,11,14,1,-1,1,6,11,-1,4,9,17,-1,17,7,4,-1,9,4,0,-1,0,13,9,-1,3,8,12,-1,12,16,3,-1,0,1,14,-1,14,13,0,-1,19,18,21,-1,21,20,19,-1,20,21,23,-1,23,22,20,-1,22,23,25,-1,25,24,22,-1,26,29,28,-1,28,27,26,-1,27,31,30,-1,30,26,27,-1,33,32,35,-1,35,34,33,-1,30,31,24,-1,24,25,30,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,37,41,48,-1,37,48,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,62,63,50,-1,58,62,50,-1,54,58,50,-1,52,54,50,-1,51,52,50,-1,2,5,37,-1,37,36,2,-1,5,6,38,-1,38,37,5,-1,6,1,39,-1,39,38,6,-1,1,0,40,-1,40,39,1,-1,0,4,41,-1,41,40,0,-1,4,7,42,-1,42,41,4,-1,29,26,43,-1,43,42,29,-1,26,30,44,-1,44,43,26,-1,30,25,45,-1,45,44,30,-1,25,23,46,-1,46,45,25,-1,23,21,47,-1,47,46,23,-1,21,18,48,-1,48,47,21,-1,33,34,49,-1,49,48,33,-1,8,3,36,-1,36,49,8,-1,9,13,51,-1,51,50,9,-1,13,14,52,-1,52,51,13,-1,14,11,53,-1,53,52,14,-1,11,10,54,-1,54,53,11,-1,10,15,55,-1,55,54,10,-1,16,12,56,-1,56,55,16,-1,35,32,57,-1,57,56,35,-1,19,20,58,-1,58,57,19,-1,20,22,59,-1,59,58,20,-1,22,24,60,-1,60,59,22,-1,24,31,61,-1,61,60,24,-1,31,27,62,-1,62,61,31,-1,27,28,63,-1,63,62,27,-1,17,9,50,-1,50,63,17,-1]
Coordinate693 = x3d.Coordinate()

IndexedFaceSet692.coord = Coordinate693
TextureCoordinate694 = x3d.TextureCoordinate()

IndexedFaceSet692.texCoord = TextureCoordinate694

Shape688.geometry = IndexedFaceSet692

HAnimSegment687.children.append(Shape688)
HAnimSite695 = x3d.HAnimSite()
HAnimSite695.DEF = "t10_Sites"
"""(substernale 0.0085 1.2995 0.1147) (mesosternale x y z)"""

HAnimSegment687.children.append(HAnimSite695)

HAnimJoint686.children.append(HAnimSegment687)
HAnimJoint696 = x3d.HAnimJoint()
HAnimJoint696.name = "vt9"
HAnimJoint696.DEF = "hanim_vt9"
HAnimJoint696.center = [0,1.078425,-0.013763251]
HAnimJoint696.ulimit = [0,0,0]
HAnimJoint696.llimit = [0,0,0]
HAnimSegment697 = x3d.HAnimSegment()
HAnimSegment697.name = "t9"
HAnimSegment697.DEF = "hanim_t9"
Shape698 = x3d.Shape()
Shape698.DEF = "t9_Shape"
Appearance699 = x3d.Appearance()
Material700 = x3d.Material()
Material700.USE = "SurfaceDefault"

Appearance699.material = Material700
ImageTexture701 = x3d.ImageTexture()
ImageTexture701.USE = "JinLOA4TextureAtlas"

Appearance699.texture = ImageTexture701

Shape698.appearance = Appearance699
IndexedFaceSet702 = x3d.IndexedFaceSet()
IndexedFaceSet702.coordIndex = [7,0,3,-1,3,10,7,-1,5,20,21,-1,21,12,5,-1,3,4,11,-1,11,10,3,-1,12,8,1,-1,1,5,12,-1,8,9,2,-1,2,1,8,-1,9,11,4,-1,4,2,9,-1,0,7,13,-1,13,6,0,-1,14,17,16,-1,16,15,14,-1,19,18,21,-1,21,20,19,-1,16,17,23,-1,23,22,16,-1,18,19,25,-1,25,24,18,-1,24,25,27,-1,27,26,24,-1,26,27,22,-1,22,23,26,-1,15,6,13,-1,13,14,15,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,47,48,49,-1,47,49,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,47,50,54,-1,43,47,54,-1,43,54,55,-1,43,55,42,-1,3,0,29,-1,29,28,3,-1,0,6,30,-1,30,29,0,-1,6,15,31,-1,31,30,6,-1,15,16,32,-1,32,31,15,-1,16,22,33,-1,33,32,16,-1,22,27,34,-1,34,33,22,-1,27,25,35,-1,35,34,27,-1,25,19,36,-1,36,35,25,-1,19,20,37,-1,37,36,19,-1,20,5,38,-1,38,37,20,-1,5,1,39,-1,39,38,5,-1,1,2,40,-1,40,39,1,-1,2,4,41,-1,41,40,2,-1,4,3,28,-1,28,41,4,-1,8,12,43,-1,43,42,8,-1,12,21,44,-1,44,43,12,-1,21,18,45,-1,45,44,21,-1,18,24,46,-1,46,45,18,-1,24,26,47,-1,47,46,24,-1,26,23,48,-1,48,47,26,-1,23,17,49,-1,49,48,23,-1,17,14,50,-1,50,49,17,-1,14,13,51,-1,51,50,14,-1,13,7,52,-1,52,51,13,-1,7,10,53,-1,53,52,7,-1,10,11,54,-1,54,53,10,-1,11,9,55,-1,55,54,11,-1,9,8,42,-1,42,55,9,-1]
IndexedFaceSet702.creaseAngle = 3.14159
IndexedFaceSet702.texCoordIndex = [9,0,4,-1,4,12,9,-1,7,3,17,-1,17,15,7,-1,4,5,13,-1,13,12,4,-1,14,10,1,-1,1,6,14,-1,10,11,2,-1,2,1,10,-1,11,13,5,-1,5,2,11,-1,0,9,16,-1,16,8,0,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,20,21,27,-1,27,26,20,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,32,33,26,-1,26,27,32,-1,19,35,34,-1,34,18,19,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,55,56,57,-1,55,57,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,55,58,62,-1,51,55,62,-1,51,62,63,-1,51,63,50,-1,4,0,37,-1,37,36,4,-1,0,8,38,-1,38,37,0,-1,35,19,39,-1,39,38,35,-1,19,20,40,-1,40,39,19,-1,20,26,41,-1,41,40,20,-1,26,33,42,-1,42,41,26,-1,33,31,43,-1,43,42,33,-1,31,28,44,-1,44,43,31,-1,23,24,45,-1,45,44,23,-1,3,7,46,-1,46,45,3,-1,6,1,47,-1,47,46,6,-1,1,2,48,-1,48,47,1,-1,2,5,49,-1,49,48,2,-1,5,4,36,-1,36,49,5,-1,10,14,51,-1,51,50,10,-1,15,17,52,-1,52,51,15,-1,25,22,53,-1,53,52,25,-1,29,30,54,-1,54,53,29,-1,30,32,55,-1,55,54,30,-1,32,27,56,-1,56,55,32,-1,27,21,57,-1,57,56,27,-1,21,18,58,-1,58,57,21,-1,18,34,59,-1,59,58,18,-1,16,9,60,-1,60,59,16,-1,9,12,61,-1,61,60,9,-1,12,13,62,-1,62,61,12,-1,13,11,63,-1,63,62,13,-1,11,10,50,-1,50,63,11,-1]
Coordinate703 = x3d.Coordinate()

IndexedFaceSet702.coord = Coordinate703
TextureCoordinate704 = x3d.TextureCoordinate()

IndexedFaceSet702.texCoord = TextureCoordinate704

Shape698.geometry = IndexedFaceSet702

HAnimSegment697.children.append(Shape698)
HAnimSite705 = x3d.HAnimSite()
HAnimSite705.DEF = "t9_Sites"
"""(l_thelion 0.0918 1.3382 0.1192) (r_thelion -0.0736 1.3385 0.1217) (rear_center_midsagittal_plane x y z) (l_chest_midsagittal_plane x y z) (r_chest_midsagittal_plane x y z)"""

HAnimSegment697.children.append(HAnimSite705)

HAnimJoint696.children.append(HAnimSegment697)
HAnimJoint706 = x3d.HAnimJoint()
HAnimJoint706.name = "vt8"
HAnimJoint706.DEF = "hanim_vt8"
HAnimJoint706.center = [0,1.0930501,-0.013763251]
HAnimJoint706.ulimit = [0,0,0]
HAnimJoint706.llimit = [0,0,0]
HAnimSegment707 = x3d.HAnimSegment()
HAnimSegment707.name = "t8"
HAnimSegment707.DEF = "hanim_t8"
Shape708 = x3d.Shape()
Shape708.DEF = "t8_Shape"
Appearance709 = x3d.Appearance()
Material710 = x3d.Material()
Material710.USE = "SurfaceDefault"

Appearance709.material = Material710
ImageTexture711 = x3d.ImageTexture()
ImageTexture711.USE = "JinLOA4TextureAtlas"

Appearance709.texture = ImageTexture711

Shape708.appearance = Appearance709
IndexedFaceSet712 = x3d.IndexedFaceSet()
IndexedFaceSet712.coordIndex = [4,0,9,-1,9,3,4,-1,11,19,20,-1,20,6,11,-1,9,10,5,-1,5,3,9,-1,6,7,1,-1,1,11,6,-1,7,8,2,-1,2,1,7,-1,8,5,10,-1,10,2,8,-1,0,4,12,-1,12,27,0,-1,13,16,15,-1,15,14,13,-1,18,17,20,-1,20,19,18,-1,15,16,22,-1,22,21,15,-1,17,18,24,-1,24,23,17,-1,23,24,26,-1,26,25,23,-1,25,26,21,-1,21,22,25,-1,14,27,12,-1,12,13,14,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,43,44,45,-1,45,46,47,-1,47,48,49,-1,45,47,49,-1,49,50,51,-1,51,52,53,-1,49,51,53,-1,45,49,53,-1,53,54,55,-1,45,53,55,-1,43,45,55,-1,43,55,42,-1,11,1,29,-1,29,28,11,-1,1,2,30,-1,30,29,1,-1,2,10,31,-1,31,30,2,-1,10,9,32,-1,32,31,10,-1,9,0,33,-1,33,32,9,-1,0,27,34,-1,34,33,0,-1,27,14,35,-1,35,34,27,-1,14,15,36,-1,36,35,14,-1,15,21,37,-1,37,36,15,-1,21,26,38,-1,38,37,21,-1,26,24,39,-1,39,38,26,-1,24,18,40,-1,40,39,24,-1,18,19,41,-1,41,40,18,-1,19,11,28,-1,28,41,19,-1,12,4,43,-1,43,42,12,-1,4,3,44,-1,44,43,4,-1,3,5,45,-1,45,44,3,-1,5,8,46,-1,46,45,5,-1,8,7,47,-1,47,46,8,-1,7,6,48,-1,48,47,7,-1,6,20,49,-1,49,48,6,-1,20,17,50,-1,50,49,20,-1,17,23,51,-1,51,50,17,-1,23,25,52,-1,52,51,23,-1,25,22,53,-1,53,52,25,-1,22,16,54,-1,54,53,22,-1,16,13,55,-1,55,54,16,-1,13,12,42,-1,42,55,13,-1]
IndexedFaceSet712.creaseAngle = 3.14159
IndexedFaceSet712.texCoordIndex = [1,14,9,-1,9,0,1,-1,11,13,8,-1,8,5,11,-1,9,10,3,-1,3,0,9,-1,4,6,16,-1,16,12,4,-1,6,7,17,-1,17,16,6,-1,7,3,10,-1,10,17,7,-1,14,1,2,-1,2,15,14,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,20,21,27,-1,27,26,20,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,32,33,26,-1,26,27,32,-1,19,35,34,-1,34,18,19,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,51,52,53,-1,53,54,55,-1,55,56,57,-1,53,55,57,-1,57,58,59,-1,59,60,61,-1,57,59,61,-1,53,57,61,-1,61,62,63,-1,53,61,63,-1,51,53,63,-1,51,63,50,-1,12,16,37,-1,37,36,12,-1,16,17,38,-1,38,37,16,-1,17,10,39,-1,39,38,17,-1,10,9,40,-1,40,39,10,-1,9,14,41,-1,41,40,9,-1,14,15,42,-1,42,41,14,-1,35,19,43,-1,43,42,35,-1,19,20,44,-1,44,43,19,-1,20,26,45,-1,45,44,20,-1,26,33,46,-1,46,45,26,-1,33,31,47,-1,47,46,33,-1,31,28,48,-1,48,47,31,-1,23,24,49,-1,49,48,23,-1,13,11,36,-1,36,49,13,-1,2,1,51,-1,51,50,2,-1,1,0,52,-1,52,51,1,-1,0,3,53,-1,53,52,0,-1,3,7,54,-1,54,53,3,-1,7,6,55,-1,55,54,7,-1,6,4,56,-1,56,55,6,-1,5,8,57,-1,57,56,5,-1,25,22,58,-1,58,57,25,-1,29,30,59,-1,59,58,29,-1,30,32,60,-1,60,59,30,-1,32,27,61,-1,61,60,32,-1,27,21,62,-1,62,61,27,-1,21,18,63,-1,63,62,21,-1,18,34,50,-1,50,63,18,-1]
Coordinate713 = x3d.Coordinate()

IndexedFaceSet712.coord = Coordinate713
TextureCoordinate714 = x3d.TextureCoordinate()

IndexedFaceSet712.texCoord = TextureCoordinate714

Shape708.geometry = IndexedFaceSet712

HAnimSegment707.children.append(Shape708)
HAnimSite715 = x3d.HAnimSite()
HAnimSite715.DEF = "t8_Sites"
"""None"""

HAnimSegment707.children.append(HAnimSite715)

HAnimJoint706.children.append(HAnimSegment707)
HAnimJoint716 = x3d.HAnimJoint()
HAnimJoint716.name = "vt7"
HAnimJoint716.DEF = "hanim_vt7"
HAnimJoint716.center = [0,1.1088,-0.013763251]
HAnimJoint716.ulimit = [0,0,0]
HAnimJoint716.llimit = [0,0,0]
HAnimSegment717 = x3d.HAnimSegment()
HAnimSegment717.name = "t7"
HAnimSegment717.DEF = "hanim_t7"
Shape718 = x3d.Shape()
Shape718.DEF = "t7_Shape"
Appearance719 = x3d.Appearance()
Material720 = x3d.Material()
Material720.USE = "SurfaceDefault"

Appearance719.material = Material720
ImageTexture721 = x3d.ImageTexture()
ImageTexture721.USE = "JinLOA4TextureAtlas"

Appearance719.texture = ImageTexture721

Shape718.appearance = Appearance719
IndexedFaceSet722 = x3d.IndexedFaceSet()
IndexedFaceSet722.coordIndex = [0,2,6,-1,6,8,0,-1,9,18,19,-1,19,1,9,-1,7,5,22,-1,22,23,7,-1,1,3,10,-1,10,9,1,-1,3,4,11,-1,11,10,3,-1,4,0,8,-1,8,11,4,-1,5,7,6,-1,6,2,5,-1,13,12,15,-1,15,14,13,-1,17,16,19,-1,19,18,17,-1,20,23,22,-1,22,21,20,-1,16,17,25,-1,25,24,16,-1,24,25,27,-1,27,26,24,-1,26,27,12,-1,12,13,26,-1,21,14,15,-1,15,20,21,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,46,50,54,-1,54,55,42,-1,46,54,42,-1,44,46,42,-1,43,44,42,-1,1,19,29,-1,29,28,1,-1,19,16,30,-1,30,29,19,-1,16,24,31,-1,31,30,16,-1,24,26,32,-1,32,31,24,-1,26,13,33,-1,33,32,26,-1,13,14,34,-1,34,33,13,-1,14,21,35,-1,35,34,14,-1,21,22,36,-1,36,35,21,-1,22,5,37,-1,37,36,22,-1,5,2,38,-1,38,37,5,-1,2,0,39,-1,39,38,2,-1,0,4,40,-1,40,39,0,-1,4,3,41,-1,41,40,4,-1,3,1,28,-1,28,41,3,-1,7,23,43,-1,43,42,7,-1,23,20,44,-1,44,43,23,-1,20,15,45,-1,45,44,20,-1,15,12,46,-1,46,45,15,-1,12,27,47,-1,47,46,12,-1,27,25,48,-1,48,47,27,-1,25,17,49,-1,49,48,25,-1,17,18,50,-1,50,49,17,-1,18,9,51,-1,51,50,18,-1,9,10,52,-1,52,51,9,-1,10,11,53,-1,53,52,10,-1,11,8,54,-1,54,53,11,-1,8,6,55,-1,55,54,8,-1,6,7,42,-1,42,55,6,-1]
IndexedFaceSet722.creaseAngle = 3.14159
IndexedFaceSet722.texCoordIndex = [3,8,9,-1,9,11,3,-1,13,16,6,-1,6,5,13,-1,10,0,7,-1,7,17,10,-1,2,1,14,-1,14,12,2,-1,1,4,15,-1,15,14,1,-1,4,3,11,-1,11,15,4,-1,0,10,9,-1,9,8,0,-1,19,18,21,-1,21,20,19,-1,23,22,25,-1,25,24,23,-1,26,29,28,-1,28,27,26,-1,31,30,33,-1,33,32,31,-1,32,33,35,-1,35,34,32,-1,34,35,18,-1,18,19,34,-1,27,20,21,-1,21,26,27,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,54,58,62,-1,62,63,50,-1,54,62,50,-1,52,54,50,-1,51,52,50,-1,5,6,37,-1,37,36,5,-1,25,22,38,-1,38,37,25,-1,31,32,39,-1,39,38,31,-1,32,34,40,-1,40,39,32,-1,34,19,41,-1,41,40,34,-1,19,20,42,-1,42,41,19,-1,20,27,43,-1,43,42,20,-1,27,28,44,-1,44,43,27,-1,7,0,45,-1,45,44,7,-1,0,8,46,-1,46,45,0,-1,8,3,47,-1,47,46,8,-1,3,4,48,-1,48,47,3,-1,4,1,49,-1,49,48,4,-1,1,2,36,-1,36,49,1,-1,10,17,51,-1,51,50,10,-1,29,26,52,-1,52,51,29,-1,26,21,53,-1,53,52,26,-1,21,18,54,-1,54,53,21,-1,18,35,55,-1,55,54,18,-1,35,33,56,-1,56,55,35,-1,33,30,57,-1,57,56,33,-1,23,24,58,-1,58,57,23,-1,16,13,59,-1,59,58,16,-1,12,14,60,-1,60,59,12,-1,14,15,61,-1,61,60,14,-1,15,11,62,-1,62,61,15,-1,11,9,63,-1,63,62,11,-1,9,10,50,-1,50,63,9,-1]
Coordinate723 = x3d.Coordinate()

IndexedFaceSet722.coord = Coordinate723
TextureCoordinate724 = x3d.TextureCoordinate()

IndexedFaceSet722.texCoord = TextureCoordinate724

Shape718.geometry = IndexedFaceSet722

HAnimSegment717.children.append(Shape718)
HAnimSite725 = x3d.HAnimSite()
HAnimSite725.DEF = "t7_Sites"
"""None"""

HAnimSegment717.children.append(HAnimSite725)

HAnimJoint716.children.append(HAnimSegment717)
HAnimJoint726 = x3d.HAnimJoint()
HAnimJoint726.name = "vt6"
HAnimJoint726.DEF = "hanim_vt6"
HAnimJoint726.center = [0,1.1216251,-0.013763251]
HAnimJoint726.ulimit = [0,0,0]
HAnimJoint726.llimit = [0,0,0]
HAnimSegment727 = x3d.HAnimSegment()
HAnimSegment727.name = "t6"
HAnimSegment727.DEF = "hanim_t6"
Shape728 = x3d.Shape()
Shape728.DEF = "t6_Shape"
Appearance729 = x3d.Appearance()
Material730 = x3d.Material()
Material730.USE = "SurfaceDefault"

Appearance729.material = Material730
ImageTexture731 = x3d.ImageTexture()
ImageTexture731.USE = "JinLOA4TextureAtlas"

Appearance729.texture = ImageTexture731

Shape728.appearance = Appearance729
IndexedFaceSet732 = x3d.IndexedFaceSet()
IndexedFaceSet732.coordIndex = [12,9,5,-1,5,3,12,-1,2,1,6,-1,6,11,2,-1,0,7,23,-1,23,24,0,-1,25,8,12,-1,12,3,25,-1,9,6,1,-1,1,5,9,-1,11,10,4,-1,4,2,11,-1,4,10,7,-1,7,0,4,-1,13,16,15,-1,15,14,13,-1,18,17,20,-1,20,19,18,-1,21,24,23,-1,23,22,21,-1,25,16,13,-1,13,8,25,-1,14,15,19,-1,19,20,14,-1,17,18,27,-1,27,26,17,-1,27,21,22,-1,22,26,27,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,42,-1,50,54,42,-1,46,50,42,-1,44,46,42,-1,43,44,42,-1,3,5,29,-1,29,28,3,-1,5,1,30,-1,30,29,5,-1,1,2,31,-1,31,30,1,-1,2,4,32,-1,32,31,2,-1,4,0,33,-1,33,32,4,-1,0,24,34,-1,34,33,0,-1,24,21,35,-1,35,34,24,-1,21,27,36,-1,36,35,21,-1,27,18,37,-1,37,36,27,-1,18,19,38,-1,38,37,18,-1,19,15,39,-1,39,38,19,-1,15,16,40,-1,40,39,15,-1,16,25,41,-1,41,40,16,-1,25,3,28,-1,28,41,25,-1,23,7,43,-1,43,42,23,-1,7,10,44,-1,44,43,7,-1,10,11,45,-1,45,44,10,-1,11,6,46,-1,46,45,11,-1,6,9,47,-1,47,46,6,-1,9,12,48,-1,48,47,9,-1,12,8,49,-1,49,48,12,-1,8,13,50,-1,50,49,8,-1,13,14,51,-1,51,50,13,-1,14,20,52,-1,52,51,14,-1,20,17,53,-1,53,52,20,-1,17,26,54,-1,54,53,17,-1,26,22,55,-1,55,54,26,-1,22,23,42,-1,42,55,22,-1]
IndexedFaceSet732.creaseAngle = 3.14159
IndexedFaceSet732.texCoordIndex = [17,13,8,-1,8,4,17,-1,3,2,9,-1,9,16,3,-1,1,10,14,-1,14,5,1,-1,6,12,17,-1,17,4,6,-1,13,9,2,-1,2,8,13,-1,16,15,7,-1,7,3,16,-1,7,15,11,-1,11,0,7,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,26,29,28,-1,28,27,26,-1,30,21,18,-1,18,31,30,-1,19,20,24,-1,24,25,19,-1,22,23,33,-1,33,32,22,-1,33,35,34,-1,34,32,33,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,62,63,50,-1,58,62,50,-1,54,58,50,-1,52,54,50,-1,51,52,50,-1,4,8,37,-1,37,36,4,-1,8,2,38,-1,38,37,8,-1,2,3,39,-1,39,38,2,-1,3,7,40,-1,40,39,3,-1,7,0,41,-1,41,40,7,-1,1,5,42,-1,42,41,1,-1,29,26,43,-1,43,42,29,-1,35,33,44,-1,44,43,35,-1,33,23,45,-1,45,44,33,-1,23,24,46,-1,46,45,23,-1,24,20,47,-1,47,46,24,-1,20,21,48,-1,48,47,20,-1,21,30,49,-1,49,48,21,-1,6,4,36,-1,36,49,6,-1,14,10,51,-1,51,50,14,-1,11,15,52,-1,52,51,11,-1,15,16,53,-1,53,52,15,-1,16,9,54,-1,54,53,16,-1,9,13,55,-1,55,54,9,-1,13,17,56,-1,56,55,13,-1,17,12,57,-1,57,56,17,-1,31,18,58,-1,58,57,31,-1,18,19,59,-1,59,58,18,-1,19,25,60,-1,60,59,19,-1,25,22,61,-1,61,60,25,-1,22,32,62,-1,62,61,22,-1,32,34,63,-1,63,62,32,-1,27,28,50,-1,50,63,27,-1]
Coordinate733 = x3d.Coordinate()

IndexedFaceSet732.coord = Coordinate733
TextureCoordinate734 = x3d.TextureCoordinate()

IndexedFaceSet732.texCoord = TextureCoordinate734

Shape728.geometry = IndexedFaceSet732

HAnimSegment727.children.append(Shape728)
HAnimSite735 = x3d.HAnimSite()
HAnimSite735.DEF = "t6_Sites"
"""None"""

HAnimSegment727.children.append(HAnimSite735)

HAnimJoint726.children.append(HAnimSegment727)
HAnimJoint736 = x3d.HAnimJoint()
HAnimJoint736.name = "vt5"
HAnimJoint736.DEF = "hanim_vt5"
HAnimJoint736.center = [0,1.13715,-0.013763251]
HAnimJoint736.ulimit = [0,0,0]
HAnimJoint736.llimit = [0,0,0]
HAnimSegment737 = x3d.HAnimSegment()
HAnimSegment737.name = "t5"
HAnimSegment737.DEF = "hanim_t5"
Shape738 = x3d.Shape()
Shape738.DEF = "t5_Shape"
Appearance739 = x3d.Appearance()
Material740 = x3d.Material()
Material740.USE = "SurfaceDefault"

Appearance739.material = Material740
ImageTexture741 = x3d.ImageTexture()
ImageTexture741.USE = "JinLOA4TextureAtlas"

Appearance739.texture = ImageTexture741

Shape738.appearance = Appearance739
IndexedFaceSet742 = x3d.IndexedFaceSet()
IndexedFaceSet742.coordIndex = [0,6,16,-1,16,13,0,-1,17,10,9,-1,9,3,17,-1,12,7,5,-1,5,2,12,-1,8,11,4,-1,4,1,8,-1,4,11,6,-1,6,0,4,-1,2,3,9,-1,9,12,2,-1,1,5,7,-1,7,8,1,-1,14,13,16,-1,16,15,14,-1,17,19,18,-1,18,10,17,-1,21,20,23,-1,23,22,21,-1,25,24,27,-1,27,26,25,-1,27,14,15,-1,15,26,27,-1,20,21,18,-1,18,19,20,-1,24,25,22,-1,22,23,24,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,42,-1,50,54,42,-1,46,50,42,-1,44,46,42,-1,43,44,42,-1,3,2,29,-1,29,28,3,-1,2,5,30,-1,30,29,2,-1,5,1,31,-1,31,30,5,-1,1,4,32,-1,32,31,1,-1,4,0,33,-1,33,32,4,-1,0,13,34,-1,34,33,0,-1,13,14,35,-1,35,34,13,-1,14,27,36,-1,36,35,14,-1,27,24,37,-1,37,36,27,-1,24,23,38,-1,38,37,24,-1,23,20,39,-1,39,38,23,-1,20,19,40,-1,40,39,20,-1,19,17,41,-1,41,40,19,-1,17,3,28,-1,28,41,17,-1,12,9,43,-1,43,42,12,-1,9,10,44,-1,44,43,9,-1,10,18,45,-1,45,44,10,-1,18,21,46,-1,46,45,18,-1,21,22,47,-1,47,46,21,-1,22,25,48,-1,48,47,22,-1,25,26,49,-1,49,48,25,-1,26,15,50,-1,50,49,26,-1,15,16,51,-1,51,50,15,-1,16,6,52,-1,52,51,16,-1,6,11,53,-1,53,52,6,-1,11,8,54,-1,54,53,11,-1,8,7,55,-1,55,54,8,-1,7,12,42,-1,42,55,7,-1]
IndexedFaceSet742.creaseAngle = 3.14159
IndexedFaceSet742.texCoordIndex = [5,10,14,-1,14,2,5,-1,8,15,13,-1,13,7,8,-1,17,11,3,-1,3,6,17,-1,12,16,0,-1,0,4,12,-1,0,16,9,-1,9,1,0,-1,6,7,13,-1,13,17,6,-1,4,3,11,-1,11,12,4,-1,19,18,21,-1,21,20,19,-1,22,25,24,-1,24,23,22,-1,27,26,29,-1,29,28,27,-1,31,30,33,-1,33,32,31,-1,33,35,34,-1,34,32,33,-1,26,27,24,-1,24,25,26,-1,30,31,28,-1,28,29,30,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,62,63,50,-1,58,62,50,-1,54,58,50,-1,52,54,50,-1,51,52,50,-1,7,6,37,-1,37,36,7,-1,6,3,38,-1,38,37,6,-1,3,4,39,-1,39,38,3,-1,4,0,40,-1,40,39,4,-1,0,1,41,-1,41,40,0,-1,5,2,42,-1,42,41,5,-1,18,19,43,-1,43,42,18,-1,35,33,44,-1,44,43,35,-1,33,30,45,-1,45,44,33,-1,30,29,46,-1,46,45,30,-1,29,26,47,-1,47,46,29,-1,26,25,48,-1,48,47,26,-1,25,22,49,-1,49,48,25,-1,8,7,36,-1,36,49,8,-1,17,13,51,-1,51,50,17,-1,13,15,52,-1,52,51,13,-1,23,24,53,-1,53,52,23,-1,24,27,54,-1,54,53,24,-1,27,28,55,-1,55,54,27,-1,28,31,56,-1,56,55,28,-1,31,32,57,-1,57,56,31,-1,32,34,58,-1,58,57,32,-1,20,21,59,-1,59,58,20,-1,14,10,60,-1,60,59,14,-1,9,16,61,-1,61,60,9,-1,16,12,62,-1,62,61,16,-1,12,11,63,-1,63,62,12,-1,11,17,50,-1,50,63,11,-1]
Coordinate743 = x3d.Coordinate()

IndexedFaceSet742.coord = Coordinate743
TextureCoordinate744 = x3d.TextureCoordinate()

IndexedFaceSet742.texCoord = TextureCoordinate744

Shape738.geometry = IndexedFaceSet742

HAnimSegment737.children.append(Shape738)
HAnimSite745 = x3d.HAnimSite()
HAnimSite745.DEF = "t5_Sites"
"""None"""

HAnimSegment737.children.append(HAnimSite745)

HAnimJoint736.children.append(HAnimSegment737)
HAnimJoint746 = x3d.HAnimJoint()
HAnimJoint746.name = "vt4"
HAnimJoint746.DEF = "hanim_vt4"
HAnimJoint746.center = [0,1.1524501,-0.013763251]
HAnimJoint746.ulimit = [0,0,0]
HAnimJoint746.llimit = [0,0,0]
HAnimSegment747 = x3d.HAnimSegment()
HAnimSegment747.name = "t4"
HAnimSegment747.DEF = "hanim_t4"
Shape748 = x3d.Shape()
Shape748.DEF = "t4_Shape"
Appearance749 = x3d.Appearance()
Material750 = x3d.Material()
Material750.USE = "SurfaceDefault"

Appearance749.material = Material750
ImageTexture751 = x3d.ImageTexture()
ImageTexture751.USE = "JinLOA4TextureAtlas"

Appearance749.texture = ImageTexture751

Shape748.appearance = Appearance749
IndexedFaceSet752 = x3d.IndexedFaceSet()
IndexedFaceSet752.coordIndex = [2,3,9,-1,9,12,2,-1,3,0,10,-1,10,9,3,-1,7,20,21,-1,21,4,7,-1,11,7,4,-1,4,5,11,-1,25,26,10,-1,10,0,25,-1,6,11,5,-1,11,6,1,-1,1,8,11,-1,2,12,8,-1,8,1,2,-1,14,13,16,-1,16,15,14,-1,15,16,18,-1,18,17,15,-1,19,22,21,-1,21,20,19,-1,23,24,22,-1,22,19,23,-1,25,17,18,-1,18,26,25,-1,27,24,23,-1,23,29,28,-1,28,27,23,-1,14,28,29,-1,29,13,14,-1,31,32,33,-1,31,33,34,-1,34,35,36,-1,36,37,38,-1,34,36,38,-1,31,34,38,-1,38,39,40,-1,40,41,42,-1,38,40,42,-1,31,38,42,-1,42,43,44,-1,31,42,44,-1,31,44,45,-1,31,45,30,-1,48,49,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,46,-1,54,58,46,-1,50,54,46,-1,48,50,46,-1,47,48,46,-1,3,2,31,-1,31,30,3,-1,2,1,32,-1,32,31,2,-1,1,6,33,-1,33,32,1,-1,6,5,34,-1,34,33,6,-1,5,4,35,-1,35,34,5,-1,4,21,36,-1,36,35,4,-1,21,22,37,-1,37,36,21,-1,22,24,38,-1,38,37,22,-1,24,27,39,-1,39,38,24,-1,27,28,40,-1,40,39,27,-1,28,14,41,-1,41,40,28,-1,14,15,42,-1,42,41,14,-1,15,17,43,-1,43,42,15,-1,17,25,44,-1,44,43,17,-1,25,0,45,-1,45,44,25,-1,0,3,30,-1,30,45,0,-1,9,10,47,-1,47,46,9,-1,10,26,48,-1,48,47,10,-1,26,18,49,-1,49,48,26,-1,18,16,50,-1,50,49,18,-1,16,13,51,-1,51,50,16,-1,13,29,52,-1,52,51,13,-1,29,23,53,-1,53,52,29,-1,23,19,54,-1,54,53,23,-1,19,20,55,-1,55,54,19,-1,20,7,56,-1,56,55,20,-1,7,11,57,-1,57,56,7,-1,11,8,58,-1,58,57,11,-1,8,12,59,-1,59,58,8,-1,12,9,46,-1,46,59,12,-1]
IndexedFaceSet752.creaseAngle = 3.14159
IndexedFaceSet752.texCoordIndex = [3,4,14,-1,14,18,3,-1,4,1,15,-1,15,14,4,-1,10,17,7,-1,7,6,10,-1,16,11,5,-1,5,8,16,-1,0,19,15,-1,15,1,0,-1,9,16,8,-1,16,9,2,-1,2,12,16,-1,3,18,13,-1,13,2,3,-1,21,20,23,-1,23,22,21,-1,22,23,25,-1,25,24,22,-1,26,29,28,-1,28,27,26,-1,30,33,32,-1,32,31,30,-1,34,24,25,-1,25,35,34,-1,36,33,30,-1,30,38,37,-1,37,36,30,-1,21,37,39,-1,39,20,21,-1,41,42,43,-1,41,43,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,48,49,50,-1,50,51,52,-1,48,50,52,-1,41,48,52,-1,52,53,54,-1,41,52,54,-1,41,54,55,-1,41,55,40,-1,58,59,60,-1,60,61,62,-1,62,63,64,-1,60,62,64,-1,64,65,66,-1,66,67,68,-1,64,66,68,-1,68,69,56,-1,64,68,56,-1,60,64,56,-1,58,60,56,-1,57,58,56,-1,4,3,41,-1,41,40,4,-1,3,2,42,-1,42,41,3,-1,2,9,43,-1,43,42,2,-1,9,8,44,-1,44,43,9,-1,8,5,45,-1,45,44,8,-1,6,7,46,-1,46,45,6,-1,28,29,47,-1,47,46,28,-1,32,33,48,-1,48,47,32,-1,33,36,49,-1,49,48,33,-1,36,37,50,-1,50,49,36,-1,37,21,51,-1,51,50,37,-1,21,22,52,-1,52,51,21,-1,22,24,53,-1,53,52,22,-1,24,34,54,-1,54,53,24,-1,0,1,55,-1,55,54,0,-1,1,4,40,-1,40,55,1,-1,14,15,57,-1,57,56,14,-1,15,19,58,-1,58,57,15,-1,35,25,59,-1,59,58,35,-1,25,23,60,-1,60,59,25,-1,23,20,61,-1,61,60,23,-1,20,39,62,-1,62,61,20,-1,38,30,63,-1,63,62,38,-1,30,31,64,-1,64,63,30,-1,26,27,65,-1,65,64,26,-1,17,10,66,-1,66,65,17,-1,11,16,67,-1,67,66,11,-1,16,12,68,-1,68,67,16,-1,13,18,69,-1,69,68,13,-1,18,14,56,-1,56,69,18,-1]
Coordinate753 = x3d.Coordinate()

IndexedFaceSet752.coord = Coordinate753
TextureCoordinate754 = x3d.TextureCoordinate()

IndexedFaceSet752.texCoord = TextureCoordinate754

Shape748.geometry = IndexedFaceSet752

HAnimSegment747.children.append(Shape748)
HAnimSite755 = x3d.HAnimSite()
HAnimSite755.DEF = "t4_Sites"
"""None"""

HAnimSegment747.children.append(HAnimSite755)

HAnimJoint746.children.append(HAnimSegment747)
HAnimJoint756 = x3d.HAnimJoint()
HAnimJoint756.name = "vt3"
HAnimJoint756.DEF = "hanim_vt3"
HAnimJoint756.center = [0,1.1709001,-0.013763251]
HAnimJoint756.ulimit = [0,0,0]
HAnimJoint756.llimit = [0,0,0]
HAnimSegment757 = x3d.HAnimSegment()
HAnimSegment757.name = "t3"
HAnimSegment757.DEF = "hanim_t3"
Shape758 = x3d.Shape()
Shape758.DEF = "t3_Shape"
Appearance759 = x3d.Appearance()
Material760 = x3d.Material()
Material760.USE = "SurfaceDefault"

Appearance759.material = Material760
ImageTexture761 = x3d.ImageTexture()
ImageTexture761.USE = "JinLOA4TextureAtlas"

Appearance759.texture = ImageTexture761

Shape758.appearance = Appearance759
IndexedFaceSet762 = x3d.IndexedFaceSet()
IndexedFaceSet762.coordIndex = [16,15,0,-1,0,7,16,-1,0,15,8,-1,1,5,11,-1,11,10,1,-1,18,6,12,-1,12,17,18,-1,14,13,2,-1,2,3,14,-1,9,14,3,-1,3,4,9,-1,11,5,0,-1,0,8,11,-1,13,12,6,-1,6,2,13,-1,49,16,7,-1,7,0,5,-1,1,10,9,-1,9,4,1,-1,3,2,20,-1,20,19,3,-1,2,6,21,-1,21,20,2,-1,6,18,53,-1,53,21,6,-1,7,5,23,-1,23,22,7,-1,5,1,24,-1,24,23,5,-1,1,4,25,-1,25,24,1,-1,4,3,19,-1,19,25,4,-1,10,11,27,-1,27,26,10,-1,11,8,28,-1,28,27,11,-1,8,15,29,-1,29,28,8,-1,17,12,30,-1,30,62,17,-1,12,13,31,-1,31,30,12,-1,13,14,32,-1,32,31,13,-1,14,9,33,-1,33,32,14,-1,9,10,26,-1,26,33,9,-1,16,35,34,-1,34,15,16,-1,34,36,15,-1,38,37,40,-1,40,39,38,-1,18,17,42,-1,42,41,18,-1,44,43,46,-1,46,45,44,-1,48,47,43,-1,43,44,48,-1,40,36,34,-1,34,39,40,-1,45,46,41,-1,41,42,45,-1,49,35,16,-1,35,39,34,-1,38,47,48,-1,48,37,38,-1,43,51,50,-1,50,46,43,-1,46,50,52,-1,52,41,46,-1,41,52,53,-1,53,18,41,-1,35,55,54,-1,54,39,35,-1,39,54,56,-1,56,38,39,-1,38,56,57,-1,57,47,38,-1,47,57,51,-1,51,43,47,-1,37,59,58,-1,58,40,37,-1,40,58,60,-1,60,36,40,-1,36,60,29,-1,29,15,36,-1,17,62,61,-1,61,42,17,-1,42,61,63,-1,63,45,42,-1,45,63,64,-1,64,44,45,-1,44,64,65,-1,65,48,44,-1,48,65,59,-1,59,37,48,-1,27,28,29,-1,29,60,58,-1,58,59,65,-1,29,58,65,-1,65,64,63,-1,63,61,62,-1,65,63,62,-1,62,30,31,-1,31,32,33,-1,62,31,33,-1,65,62,33,-1,29,65,33,-1,27,29,33,-1,27,33,26,-1]
IndexedFaceSet762.creaseAngle = 3.14159
IndexedFaceSet762.texCoordIndex = [2,12,1,-1,1,0,2,-1,1,12,13,-1,4,8,16,-1,16,15,4,-1,11,10,17,-1,17,19,11,-1,21,20,5,-1,5,6,21,-1,14,21,6,-1,6,7,14,-1,16,8,1,-1,1,13,16,-1,20,18,9,-1,9,5,20,-1,3,2,0,-1,0,1,8,-1,4,15,14,-1,14,7,4,-1,6,5,23,-1,23,22,6,-1,5,9,24,-1,24,23,5,-1,10,11,25,-1,25,24,10,-1,0,8,27,-1,27,26,0,-1,8,4,28,-1,28,27,8,-1,4,7,29,-1,29,28,4,-1,7,6,22,-1,22,29,7,-1,15,16,31,-1,31,30,15,-1,16,13,32,-1,32,31,16,-1,13,12,33,-1,33,32,13,-1,19,17,35,-1,35,34,19,-1,18,20,36,-1,36,35,18,-1,20,21,37,-1,37,36,20,-1,21,14,38,-1,38,37,21,-1,14,15,30,-1,30,38,14,-1,42,41,40,-1,40,39,42,-1,40,43,39,-1,45,44,47,-1,47,46,45,-1,49,48,51,-1,51,50,49,-1,53,52,55,-1,55,54,53,-1,57,56,52,-1,52,53,57,-1,47,43,40,-1,40,46,47,-1,54,55,59,-1,59,58,54,-1,60,41,42,-1,41,46,40,-1,45,56,57,-1,57,44,45,-1,52,62,61,-1,61,55,52,-1,55,61,63,-1,63,59,55,-1,50,63,64,-1,64,49,50,-1,41,66,65,-1,65,46,41,-1,46,65,67,-1,67,45,46,-1,45,67,68,-1,68,56,45,-1,56,68,62,-1,62,52,56,-1,44,70,69,-1,69,47,44,-1,47,69,71,-1,71,43,47,-1,43,71,72,-1,72,39,43,-1,48,74,73,-1,73,51,48,-1,58,73,75,-1,75,54,58,-1,54,75,76,-1,76,53,54,-1,53,76,77,-1,77,57,53,-1,57,77,70,-1,70,44,57,-1,31,32,33,-1,33,71,69,-1,69,70,77,-1,33,69,77,-1,77,76,75,-1,75,73,74,-1,77,75,74,-1,74,35,36,-1,36,37,38,-1,74,36,38,-1,77,74,38,-1,33,77,38,-1,31,33,38,-1,31,38,30,-1]
Coordinate763 = x3d.Coordinate()

IndexedFaceSet762.coord = Coordinate763
TextureCoordinate764 = x3d.TextureCoordinate()

IndexedFaceSet762.texCoord = TextureCoordinate764

Shape758.geometry = IndexedFaceSet762

HAnimSegment757.children.append(Shape758)
HAnimSite765 = x3d.HAnimSite()
HAnimSite765.DEF = "t3_Sites"
"""None"""

HAnimSegment757.children.append(HAnimSite765)

HAnimJoint756.children.append(HAnimSegment757)
HAnimJoint766 = x3d.HAnimJoint()
HAnimJoint766.name = "vt2"
HAnimJoint766.DEF = "hanim_vt2"
HAnimJoint766.center = [0,1.19565,-0.013785751]
HAnimJoint766.ulimit = [0,0,0]
HAnimJoint766.llimit = [0,0,0]
HAnimSegment767 = x3d.HAnimSegment()
HAnimSegment767.name = "t2"
HAnimSegment767.DEF = "hanim_t2"
Shape768 = x3d.Shape()
Shape768.DEF = "t2_Shape"
Appearance769 = x3d.Appearance()
Material770 = x3d.Material()
Material770.USE = "SurfaceDefault"

Appearance769.material = Material770
ImageTexture771 = x3d.ImageTexture()
ImageTexture771.USE = "JinLOA4TextureAtlas"

Appearance769.texture = ImageTexture771

Shape768.appearance = Appearance769
IndexedFaceSet772 = x3d.IndexedFaceSet()
IndexedFaceSet772.coordIndex = [1,5,12,-1,7,2,19,-1,19,0,7,-1,0,11,7,-1,2,7,5,-1,5,1,2,-1,17,0,19,-1,0,17,6,-1,6,11,0,-1,20,2,1,-1,1,4,20,-1,2,20,19,-1,10,9,15,-1,15,14,10,-1,9,16,15,-1,8,10,14,-1,14,18,8,-1,13,6,17,-1,3,8,18,-1,18,21,3,-1,51,4,1,-1,1,12,51,-1,6,13,16,-1,16,9,6,-1,6,9,23,-1,23,22,6,-1,9,10,24,-1,24,23,9,-1,10,8,25,-1,25,24,10,-1,8,3,56,-1,56,25,8,-1,14,15,27,-1,27,26,14,-1,15,16,28,-1,28,27,15,-1,16,13,29,-1,29,28,16,-1,13,17,30,-1,30,29,13,-1,17,19,31,-1,31,30,17,-1,19,20,63,-1,63,31,19,-1,21,18,32,-1,32,65,21,-1,18,14,26,-1,26,32,18,-1,33,35,34,-1,38,37,36,-1,36,39,38,-1,37,38,40,-1,39,33,34,-1,34,38,39,-1,41,36,37,-1,37,40,42,-1,42,41,37,-1,20,4,33,-1,33,39,20,-1,39,36,20,-1,43,46,45,-1,45,44,43,-1,44,45,47,-1,49,48,46,-1,46,43,49,-1,50,41,42,-1,3,21,48,-1,48,49,3,-1,51,35,33,-1,33,4,51,-1,42,44,47,-1,47,50,42,-1,42,53,52,-1,52,44,42,-1,44,52,54,-1,54,43,44,-1,43,54,55,-1,55,49,43,-1,49,55,56,-1,56,3,49,-1,46,58,57,-1,57,45,46,-1,45,57,59,-1,59,47,45,-1,47,59,60,-1,60,50,47,-1,50,60,61,-1,61,41,50,-1,41,61,62,-1,62,36,41,-1,36,62,63,-1,63,20,36,-1,21,65,64,-1,64,48,21,-1,48,64,58,-1,58,46,48,-1,28,29,30,-1,31,63,62,-1,30,31,62,-1,62,61,60,-1,60,59,57,-1,62,60,57,-1,62,57,58,-1,58,64,65,-1,65,32,26,-1,58,65,26,-1,62,58,26,-1,30,62,26,-1,28,30,26,-1,27,28,26,-1]
IndexedFaceSet772.creaseAngle = 3.14159
IndexedFaceSet772.texCoordIndex = [0,1,16,-1,4,5,26,-1,26,3,4,-1,3,15,4,-1,5,4,6,-1,6,7,5,-1,22,3,26,-1,3,22,8,-1,8,15,3,-1,27,5,7,-1,7,10,27,-1,5,27,26,-1,14,9,20,-1,20,19,14,-1,9,21,20,-1,13,14,19,-1,19,23,13,-1,18,8,22,-1,11,12,24,-1,24,25,11,-1,17,2,0,-1,0,16,17,-1,8,18,21,-1,21,9,8,-1,8,9,29,-1,29,28,8,-1,9,14,30,-1,30,29,9,-1,14,13,31,-1,31,30,14,-1,12,11,32,-1,32,31,12,-1,19,20,34,-1,34,33,19,-1,20,21,35,-1,35,34,20,-1,21,18,36,-1,36,35,21,-1,18,22,37,-1,37,36,18,-1,22,26,38,-1,38,37,22,-1,26,27,39,-1,39,38,26,-1,25,24,41,-1,41,40,25,-1,23,19,33,-1,33,41,23,-1,42,44,43,-1,47,46,45,-1,45,48,47,-1,46,47,49,-1,48,51,50,-1,50,47,48,-1,52,45,46,-1,46,49,53,-1,53,52,46,-1,55,54,51,-1,51,48,55,-1,48,45,55,-1,56,59,58,-1,58,57,56,-1,57,58,60,-1,62,61,59,-1,59,56,62,-1,63,52,53,-1,65,64,67,-1,67,66,65,-1,68,44,42,-1,42,69,68,-1,53,57,60,-1,60,63,53,-1,53,71,70,-1,70,57,53,-1,57,70,72,-1,72,56,57,-1,56,72,73,-1,73,62,56,-1,66,73,74,-1,74,65,66,-1,59,76,75,-1,75,58,59,-1,58,75,77,-1,77,60,58,-1,60,77,78,-1,78,63,60,-1,63,78,79,-1,79,52,63,-1,52,79,80,-1,80,45,52,-1,45,80,81,-1,81,55,45,-1,64,83,82,-1,82,67,64,-1,61,82,76,-1,76,59,61,-1,35,36,37,-1,38,39,80,-1,37,38,80,-1,80,79,78,-1,78,77,75,-1,80,78,75,-1,80,75,76,-1,76,82,83,-1,83,41,33,-1,76,83,33,-1,80,76,33,-1,37,80,33,-1,35,37,33,-1,34,35,33,-1]
Coordinate773 = x3d.Coordinate()

IndexedFaceSet772.coord = Coordinate773
TextureCoordinate774 = x3d.TextureCoordinate()

IndexedFaceSet772.texCoord = TextureCoordinate774

Shape768.geometry = IndexedFaceSet772

HAnimSegment767.children.append(Shape768)
HAnimSite775 = x3d.HAnimSite()
HAnimSite775.DEF = "t2_Sites"
"""None"""

HAnimSegment767.children.append(HAnimSite775)

HAnimJoint766.children.append(HAnimSegment767)
HAnimJoint776 = x3d.HAnimJoint()
HAnimJoint776.name = "vt1"
HAnimJoint776.DEF = "hanim_vt1"
HAnimJoint776.center = [0,1.2195001,-0.013763251]
HAnimJoint776.ulimit = [0,0,0]
HAnimJoint776.llimit = [0,0,0]
HAnimSegment777 = x3d.HAnimSegment()
HAnimSegment777.name = "t1"
HAnimSegment777.DEF = "hanim_t1"
Shape778 = x3d.Shape()
Shape778.DEF = "t1_Shape"
Appearance779 = x3d.Appearance()
Material780 = x3d.Material()
Material780.USE = "SurfaceDefault"

Appearance779.material = Material780
ImageTexture781 = x3d.ImageTexture()
ImageTexture781.USE = "JinLOA4TextureAtlas"

Appearance779.texture = ImageTexture781

Shape778.appearance = Appearance779
IndexedFaceSet782 = x3d.IndexedFaceSet()
IndexedFaceSet782.coordIndex = [1,5,3,-1,3,2,1,-1,5,6,3,-1,7,27,3,-1,3,6,7,-1,0,1,2,-1,43,11,10,-1,10,4,43,-1,5,1,12,-1,1,0,12,-1,35,26,12,-1,43,4,12,-1,4,5,12,-1,72,28,9,-1,9,28,27,-1,27,7,9,-1,5,4,10,-1,10,6,5,-1,29,72,8,-1,26,35,14,-1,14,49,26,-1,35,0,15,-1,15,14,35,-1,17,16,18,-1,18,19,17,-1,16,27,28,-1,28,18,16,-1,13,2,16,-1,27,16,2,-1,2,3,27,-1,19,18,29,-1,29,8,19,-1,18,28,72,-1,72,29,18,-1,0,13,15,-1,21,20,23,-1,23,61,21,-1,20,22,24,-1,24,23,20,-1,22,17,19,-1,19,24,22,-1,20,21,49,-1,49,14,20,-1,22,20,14,-1,14,15,22,-1,15,17,22,-1,61,23,30,-1,30,25,61,-1,23,24,33,-1,33,30,23,-1,24,19,8,-1,8,33,24,-1,0,2,13,-1,15,13,17,-1,16,17,13,-1,68,69,32,-1,32,31,68,-1,30,33,32,-1,33,8,34,-1,33,34,31,-1,31,32,33,-1,32,69,25,-1,25,30,32,-1,12,0,35,-1,37,36,58,-1,58,38,37,-1,38,58,39,-1,40,39,58,-1,58,41,40,-1,51,36,37,-1,43,42,44,-1,44,11,43,-1,38,12,37,-1,37,12,51,-1,45,12,26,-1,43,12,42,-1,42,12,38,-1,73,47,56,-1,47,40,41,-1,41,56,47,-1,38,39,44,-1,44,42,38,-1,46,59,73,-1,26,49,48,-1,48,45,26,-1,45,48,50,-1,50,51,45,-1,54,53,52,-1,52,55,54,-1,55,52,56,-1,56,41,55,-1,57,55,36,-1,41,58,36,-1,36,55,41,-1,53,59,46,-1,46,52,53,-1,52,46,73,-1,73,56,52,-1,51,50,57,-1,21,61,60,-1,60,62,21,-1,62,60,63,-1,63,64,62,-1,64,63,53,-1,53,54,64,-1,62,48,49,-1,49,21,62,-1,64,50,48,-1,48,62,64,-1,50,64,54,-1,61,25,65,-1,65,60,61,-1,60,65,66,-1,66,63,60,-1,63,66,59,-1,59,53,63,-1,51,57,36,-1,50,54,57,-1,55,57,54,-1,68,67,70,-1,70,69,68,-1,65,70,66,-1,66,71,59,-1,66,70,67,-1,67,71,66,-1,70,65,25,-1,25,69,70,-1,12,45,51,-1,81,82,83,-1,81,83,84,-1,81,84,85,-1,85,86,87,-1,81,85,87,-1,88,89,90,-1,88,90,91,-1,87,88,91,-1,91,74,75,-1,91,75,76,-1,87,91,76,-1,87,76,77,-1,81,87,77,-1,81,77,78,-1,81,78,79,-1,81,79,80,-1,7,6,75,-1,75,74,7,-1,6,10,76,-1,76,75,6,-1,10,11,77,-1,77,76,10,-1,11,44,78,-1,78,77,11,-1,44,39,79,-1,79,78,44,-1,39,40,80,-1,80,79,39,-1,40,47,81,-1,81,80,40,-1,47,73,82,-1,82,81,47,-1,73,59,83,-1,83,82,73,-1,59,71,84,-1,84,83,59,-1,71,67,85,-1,85,84,71,-1,67,68,86,-1,86,85,67,-1,68,31,87,-1,87,86,68,-1,31,34,88,-1,88,87,31,-1,34,8,89,-1,89,88,34,-1,8,72,90,-1,90,89,8,-1,72,9,91,-1,91,90,72,-1,9,7,74,-1,74,91,9,-1]
IndexedFaceSet782.creaseAngle = 3.14159
IndexedFaceSet782.texCoordIndex = [14,15,0,-1,0,16,14,-1,15,19,0,-1,21,10,11,-1,11,18,21,-1,5,2,1,-1,6,25,24,-1,24,4,6,-1,3,2,13,-1,2,5,13,-1,66,7,13,-1,6,4,17,-1,4,15,17,-1,20,9,23,-1,23,9,10,-1,10,21,23,-1,15,4,24,-1,24,19,15,-1,12,20,22,-1,48,47,26,-1,26,27,48,-1,47,49,28,-1,28,26,47,-1,31,32,29,-1,29,30,31,-1,32,53,54,-1,54,29,32,-1,33,50,32,-1,53,32,50,-1,50,51,53,-1,30,29,55,-1,55,56,30,-1,29,54,52,-1,52,55,29,-1,49,33,28,-1,36,41,40,-1,40,35,36,-1,37,39,38,-1,38,34,37,-1,39,31,30,-1,30,38,39,-1,42,36,43,-1,43,45,42,-1,39,37,26,-1,26,28,39,-1,28,31,39,-1,35,44,57,-1,57,46,35,-1,34,38,65,-1,65,58,34,-1,38,30,56,-1,56,65,38,-1,49,50,33,-1,28,33,31,-1,32,31,33,-1,62,63,64,-1,64,61,62,-1,57,65,64,-1,65,56,60,-1,65,60,61,-1,61,64,65,-1,64,63,59,-1,59,57,64,-1,13,8,66,-1,69,68,67,-1,67,70,69,-1,70,67,71,-1,74,73,72,-1,72,75,74,-1,76,78,77,-1,80,79,82,-1,82,81,80,-1,83,84,77,-1,77,84,76,-1,85,84,86,-1,80,87,79,-1,79,87,70,-1,132,90,89,-1,90,74,75,-1,75,89,90,-1,70,71,82,-1,82,79,70,-1,88,91,132,-1,94,93,92,-1,92,95,94,-1,95,92,96,-1,96,97,95,-1,100,99,98,-1,98,101,100,-1,101,98,102,-1,102,103,101,-1,104,101,105,-1,103,106,105,-1,105,101,103,-1,99,108,107,-1,107,98,99,-1,98,107,109,-1,109,102,98,-1,97,96,104,-1,112,111,110,-1,110,113,112,-1,116,115,114,-1,114,117,116,-1,117,114,99,-1,99,100,117,-1,120,119,118,-1,118,112,120,-1,117,96,92,-1,92,116,117,-1,96,117,100,-1,111,122,121,-1,121,123,111,-1,115,125,124,-1,124,114,115,-1,114,124,108,-1,108,99,114,-1,97,104,105,-1,96,100,104,-1,101,104,100,-1,127,126,129,-1,129,128,127,-1,121,129,124,-1,124,130,108,-1,124,129,126,-1,126,130,124,-1,129,121,131,-1,131,128,129,-1,84,85,133,-1,141,142,143,-1,141,143,144,-1,141,144,145,-1,145,146,147,-1,141,145,147,-1,148,149,150,-1,148,150,151,-1,147,148,151,-1,151,134,135,-1,151,135,136,-1,147,151,136,-1,147,136,137,-1,141,147,137,-1,141,137,138,-1,141,138,139,-1,141,139,140,-1,21,18,135,-1,135,134,21,-1,19,24,136,-1,136,135,19,-1,24,25,137,-1,137,136,24,-1,81,82,138,-1,138,137,81,-1,82,71,139,-1,139,138,82,-1,73,74,140,-1,140,139,73,-1,74,90,141,-1,141,140,74,-1,90,132,142,-1,142,141,90,-1,132,91,143,-1,143,142,132,-1,108,130,144,-1,144,143,108,-1,130,126,145,-1,145,144,130,-1,126,127,146,-1,146,145,126,-1,62,61,147,-1,147,146,62,-1,61,60,148,-1,148,147,61,-1,60,56,149,-1,149,148,60,-1,22,20,150,-1,150,149,22,-1,20,23,151,-1,151,150,20,-1,23,21,134,-1,134,151,23,-1]
Coordinate783 = x3d.Coordinate()

IndexedFaceSet782.coord = Coordinate783
TextureCoordinate784 = x3d.TextureCoordinate()

IndexedFaceSet782.texCoord = TextureCoordinate784

Shape778.geometry = IndexedFaceSet782

HAnimSegment777.children.append(Shape778)
HAnimSite785 = x3d.HAnimSite()
HAnimSite785.DEF = "t1_Sites"
"""(suprasternale 0.0084 1.4714 0.0551) (cervicale 0.0064 1.520 -0.0815)"""

HAnimSegment777.children.append(HAnimSite785)

HAnimJoint776.children.append(HAnimSegment777)
HAnimJoint786 = x3d.HAnimJoint()
HAnimJoint786.name = "vc7"
HAnimJoint786.DEF = "hanim_vc7"
HAnimJoint786.center = [0,1.245375,-0.015063751]
HAnimJoint786.ulimit = [0,0,0]
HAnimJoint786.llimit = [0,0,0]
HAnimSegment787 = x3d.HAnimSegment()
HAnimSegment787.name = "c7"
HAnimSegment787.DEF = "hanim_c7"
Shape788 = x3d.Shape()
Shape788.DEF = "c7_Shape"
Appearance789 = x3d.Appearance()
Material790 = x3d.Material()
Material790.USE = "SurfaceDefault"

Appearance789.material = Material790
ImageTexture791 = x3d.ImageTexture()
ImageTexture791.USE = "JinLOA4TextureAtlas"

Appearance789.texture = ImageTexture791

Shape788.appearance = Appearance789
IndexedFaceSet792 = x3d.IndexedFaceSet()
IndexedFaceSet792.coordIndex = [5,6,33,-1,33,28,5,-1,34,32,1,-1,1,7,34,-1,30,34,7,-1,7,8,30,-1,28,29,11,-1,11,5,28,-1,29,35,10,-1,10,11,29,-1,14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,1,0,13,-1,13,12,1,-1,0,2,14,-1,14,13,0,-1,2,3,15,-1,15,14,2,-1,3,4,16,-1,16,15,3,-1,4,6,17,-1,17,16,4,-1,6,5,18,-1,18,17,6,-1,5,11,19,-1,19,18,5,-1,11,10,20,-1,20,19,11,-1,10,9,21,-1,21,20,10,-1,9,8,22,-1,22,21,9,-1,8,7,23,-1,23,22,8,-1,7,1,12,-1,12,23,7,-1,0,1,32,-1,32,24,0,-1,2,0,24,-1,24,25,2,-1,3,2,25,-1,25,26,3,-1,4,3,26,-1,26,27,4,-1,6,4,27,-1,27,33,6,-1,8,9,31,-1,31,30,8,-1,9,10,35,-1,35,31,9,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,24,32,37,-1,37,36,24,-1,32,34,38,-1,38,37,32,-1,34,30,39,-1,39,38,34,-1,30,31,40,-1,40,39,30,-1,31,35,41,-1,41,40,31,-1,35,29,42,-1,42,41,35,-1,29,28,43,-1,43,42,29,-1,28,33,44,-1,44,43,28,-1,33,27,45,-1,45,44,33,-1,27,26,46,-1,46,45,27,-1,26,25,47,-1,47,46,26,-1,25,24,36,-1,36,47,25,-1]
IndexedFaceSet792.creaseAngle = 3.14159
IndexedFaceSet792.texCoordIndex = [5,6,33,-1,33,28,5,-1,34,32,1,-1,1,7,34,-1,30,34,7,-1,7,8,30,-1,28,29,11,-1,11,5,28,-1,29,35,10,-1,10,11,29,-1,14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,1,0,13,-1,13,12,1,-1,0,2,14,-1,14,13,0,-1,2,3,15,-1,15,14,2,-1,3,4,16,-1,16,15,3,-1,4,6,17,-1,17,16,4,-1,6,5,18,-1,18,17,6,-1,5,11,19,-1,19,18,5,-1,11,10,20,-1,20,19,11,-1,10,9,21,-1,21,20,10,-1,9,8,22,-1,22,21,9,-1,8,7,23,-1,23,22,8,-1,7,1,12,-1,12,23,7,-1,0,1,32,-1,32,24,0,-1,2,0,24,-1,24,25,2,-1,3,2,25,-1,25,26,3,-1,4,3,26,-1,26,27,4,-1,6,4,27,-1,27,33,6,-1,8,9,31,-1,31,30,8,-1,9,10,35,-1,35,31,9,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,24,32,37,-1,37,36,24,-1,32,34,38,-1,38,37,32,-1,34,30,39,-1,39,38,34,-1,30,31,40,-1,40,39,30,-1,31,35,41,-1,41,40,31,-1,35,29,42,-1,42,41,35,-1,29,28,43,-1,43,42,29,-1,28,33,44,-1,44,43,28,-1,33,27,45,-1,45,44,33,-1,27,26,46,-1,46,45,27,-1,26,25,47,-1,47,46,26,-1,25,24,36,-1,36,47,25,-1]
Coordinate793 = x3d.Coordinate()

IndexedFaceSet792.coord = Coordinate793
TextureCoordinate794 = x3d.TextureCoordinate()

IndexedFaceSet792.texCoord = TextureCoordinate794

Shape788.geometry = IndexedFaceSet792

HAnimSegment787.children.append(Shape788)
HAnimSite795 = x3d.HAnimSite()
HAnimSite795.DEF = "c7_Sites"
"""(l_neck_base 0.0646 1.5141 -0.0380) (r_neck_base -0.0419 1.5149 -0.0220)"""

HAnimSegment787.children.append(HAnimSite795)

HAnimJoint786.children.append(HAnimSegment787)
HAnimJoint796 = x3d.HAnimJoint()
HAnimJoint796.name = "vc6"
HAnimJoint796.DEF = "hanim_vc6"
HAnimJoint796.center = [0,1.2575251,-0.015063751]
HAnimJoint796.ulimit = [0,0,0]
HAnimJoint796.llimit = [0,0,0]
HAnimSegment797 = x3d.HAnimSegment()
HAnimSegment797.name = "c6"
HAnimSegment797.DEF = "hanim_c6"
Shape798 = x3d.Shape()
Shape798.DEF = "c6_Shape"
Appearance799 = x3d.Appearance()
Material800 = x3d.Material()
Material800.USE = "SurfaceDefault"

Appearance799.material = Material800
ImageTexture801 = x3d.ImageTexture()
ImageTexture801.USE = "JinLOA4TextureAtlas"

Appearance799.texture = ImageTexture801

Shape798.appearance = Appearance799
IndexedFaceSet802 = x3d.IndexedFaceSet()
IndexedFaceSet802.coordIndex = [12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1]
IndexedFaceSet802.creaseAngle = 3.14159
IndexedFaceSet802.texCoordIndex = [12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1]
Coordinate803 = x3d.Coordinate()

IndexedFaceSet802.coord = Coordinate803
TextureCoordinate804 = x3d.TextureCoordinate()

IndexedFaceSet802.texCoord = TextureCoordinate804

Shape798.geometry = IndexedFaceSet802

HAnimSegment797.children.append(Shape798)
HAnimSite805 = x3d.HAnimSite()
HAnimSite805.DEF = "c6_Sites"
"""None"""

HAnimSegment797.children.append(HAnimSite805)

HAnimJoint796.children.append(HAnimSegment797)
HAnimJoint806 = x3d.HAnimJoint()
HAnimJoint806.name = "vc5"
HAnimJoint806.DEF = "hanim_vc5"
HAnimJoint806.center = [0,1.2699,-0.015063751]
HAnimJoint806.ulimit = [0,0,0]
HAnimJoint806.llimit = [0,0,0]
HAnimSegment807 = x3d.HAnimSegment()
HAnimSegment807.name = "c5"
HAnimSegment807.DEF = "hanim_c5"
Shape808 = x3d.Shape()
Shape808.DEF = "c5_Shape"
Appearance809 = x3d.Appearance()
Material810 = x3d.Material()
Material810.USE = "SurfaceDefault"

Appearance809.material = Material810
ImageTexture811 = x3d.ImageTexture()
ImageTexture811.USE = "JinLOA4TextureAtlas"

Appearance809.texture = ImageTexture811

Shape808.appearance = Appearance809
IndexedFaceSet812 = x3d.IndexedFaceSet()
IndexedFaceSet812.coordIndex = [12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1]
IndexedFaceSet812.creaseAngle = 3.14159
IndexedFaceSet812.texCoordIndex = [12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1]
Coordinate813 = x3d.Coordinate()

IndexedFaceSet812.coord = Coordinate813
TextureCoordinate814 = x3d.TextureCoordinate()

IndexedFaceSet812.texCoord = TextureCoordinate814

Shape808.geometry = IndexedFaceSet812

HAnimSegment807.children.append(Shape808)
HAnimSite815 = x3d.HAnimSite()
HAnimSite815.DEF = "c5_Sites"
"""None"""

HAnimSegment807.children.append(HAnimSite815)

HAnimJoint806.children.append(HAnimSegment807)
HAnimJoint816 = x3d.HAnimJoint()
HAnimJoint816.name = "vc4"
HAnimJoint816.DEF = "hanim_vc4"
HAnimJoint816.center = [0,1.2822751,-0.015063751]
HAnimJoint816.ulimit = [0,0,0]
HAnimJoint816.llimit = [0,0,0]
HAnimSegment817 = x3d.HAnimSegment()
HAnimSegment817.name = "c4"
HAnimSegment817.DEF = "hanim_c4"
Shape818 = x3d.Shape()
Shape818.DEF = "c4_Shape"
Appearance819 = x3d.Appearance()
Material820 = x3d.Material()
Material820.USE = "SurfaceDefault"

Appearance819.material = Material820
ImageTexture821 = x3d.ImageTexture()
ImageTexture821.USE = "JinLOA4TextureAtlas"

Appearance819.texture = ImageTexture821

Shape818.appearance = Appearance819
IndexedFaceSet822 = x3d.IndexedFaceSet()
IndexedFaceSet822.coordIndex = [12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1]
IndexedFaceSet822.creaseAngle = 3.14159
IndexedFaceSet822.texCoordIndex = [12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1]
Coordinate823 = x3d.Coordinate()

IndexedFaceSet822.coord = Coordinate823
TextureCoordinate824 = x3d.TextureCoordinate()

IndexedFaceSet822.texCoord = TextureCoordinate824

Shape818.geometry = IndexedFaceSet822

HAnimSegment817.children.append(Shape818)
HAnimSite825 = x3d.HAnimSite()
HAnimSite825.DEF = "c4_Sites"
"""None"""

HAnimSegment817.children.append(HAnimSite825)

HAnimJoint816.children.append(HAnimSegment817)
HAnimJoint826 = x3d.HAnimJoint()
HAnimJoint826.name = "vc3"
HAnimJoint826.DEF = "hanim_vc3"
HAnimJoint826.center = [0,1.2951001,-0.015063751]
HAnimJoint826.ulimit = [0,0,0]
HAnimJoint826.llimit = [0,0,0]
HAnimSegment827 = x3d.HAnimSegment()
HAnimSegment827.name = "c3"
HAnimSegment827.DEF = "hanim_c3"
Shape828 = x3d.Shape()
Shape828.DEF = "c3_Shape"
Appearance829 = x3d.Appearance()
Material830 = x3d.Material()
Material830.USE = "SurfaceDefault"

Appearance829.material = Material830
ImageTexture831 = x3d.ImageTexture()
ImageTexture831.USE = "JinLOA4TextureAtlas"

Appearance829.texture = ImageTexture831

Shape828.appearance = Appearance829
IndexedFaceSet832 = x3d.IndexedFaceSet()
IndexedFaceSet832.coordIndex = [8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1]
IndexedFaceSet832.creaseAngle = 3.14159
IndexedFaceSet832.texCoordIndex = [8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1]
Coordinate833 = x3d.Coordinate()

IndexedFaceSet832.coord = Coordinate833
TextureCoordinate834 = x3d.TextureCoordinate()

IndexedFaceSet832.texCoord = TextureCoordinate834

Shape828.geometry = IndexedFaceSet832

HAnimSegment827.children.append(Shape828)
HAnimSite835 = x3d.HAnimSite()
HAnimSite835.DEF = "c3_Sites"
"""None"""

HAnimSegment827.children.append(HAnimSite835)

HAnimJoint826.children.append(HAnimSegment827)
HAnimJoint836 = x3d.HAnimJoint()
HAnimJoint836.name = "vc2"
HAnimJoint836.DEF = "hanim_vc2"
HAnimJoint836.center = [0,1.3068001,-0.015063751]
HAnimJoint836.ulimit = [0,0,0]
HAnimJoint836.llimit = [0,0,0]
HAnimSegment837 = x3d.HAnimSegment()
HAnimSegment837.name = "c2"
HAnimSegment837.DEF = "hanim_c2"
Shape838 = x3d.Shape()
Shape838.DEF = "c2_Shape"
Appearance839 = x3d.Appearance()
Material840 = x3d.Material()
Material840.USE = "SurfaceDefault"

Appearance839.material = Material840
ImageTexture841 = x3d.ImageTexture()
ImageTexture841.USE = "JinLOA4TextureAtlas"

Appearance839.texture = ImageTexture841

Shape838.appearance = Appearance839
IndexedFaceSet842 = x3d.IndexedFaceSet()
IndexedFaceSet842.coordIndex = [14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,0,1,13,-1,13,12,0,-1,1,7,14,-1,14,13,1,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,6,19,-1,19,18,11,-1,6,5,20,-1,20,19,6,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,12,-1,12,23,2,-1,1,0,24,-1,24,32,1,-1,0,2,25,-1,25,24,0,-1,2,3,26,-1,26,25,2,-1,3,4,27,-1,27,26,3,-1,4,5,33,-1,33,27,4,-1,9,8,30,-1,30,31,9,-1,10,9,31,-1,31,35,10,-1,5,6,28,-1,28,33,5,-1,7,1,32,-1,32,34,7,-1,8,7,34,-1,34,30,8,-1,6,11,29,-1,29,28,6,-1,11,10,35,-1,35,29,11,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,32,24,37,-1,37,36,32,-1,24,25,38,-1,38,37,24,-1,25,26,39,-1,39,38,25,-1,26,27,40,-1,40,39,26,-1,27,33,41,-1,41,40,27,-1,33,28,42,-1,42,41,33,-1,28,29,43,-1,43,42,28,-1,29,35,44,-1,44,43,29,-1,35,31,45,-1,45,44,35,-1,31,30,46,-1,46,45,31,-1,30,34,47,-1,47,46,30,-1,34,32,36,-1,36,47,34,-1]
IndexedFaceSet842.creaseAngle = 3.14159
IndexedFaceSet842.texCoordIndex = [14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,0,1,13,-1,13,12,0,-1,1,7,14,-1,14,13,1,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,6,19,-1,19,18,11,-1,6,5,20,-1,20,19,6,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,12,-1,12,23,2,-1,1,0,24,-1,24,32,1,-1,0,2,25,-1,25,24,0,-1,2,3,26,-1,26,25,2,-1,3,4,27,-1,27,26,3,-1,4,5,33,-1,33,27,4,-1,9,8,30,-1,30,31,9,-1,10,9,31,-1,31,35,10,-1,5,6,28,-1,28,33,5,-1,7,1,32,-1,32,34,7,-1,8,7,34,-1,34,30,8,-1,6,11,29,-1,29,28,6,-1,11,10,35,-1,35,29,11,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,32,24,37,-1,37,36,32,-1,24,25,38,-1,38,37,24,-1,25,26,39,-1,39,38,25,-1,26,27,40,-1,40,39,26,-1,27,33,41,-1,41,40,27,-1,33,28,42,-1,42,41,33,-1,28,29,43,-1,43,42,28,-1,29,35,44,-1,44,43,29,-1,35,31,45,-1,45,44,35,-1,31,30,46,-1,46,45,31,-1,30,34,47,-1,47,46,30,-1,34,32,36,-1,36,47,34,-1]
Coordinate843 = x3d.Coordinate()

IndexedFaceSet842.coord = Coordinate843
TextureCoordinate844 = x3d.TextureCoordinate()

IndexedFaceSet842.texCoord = TextureCoordinate844

Shape838.geometry = IndexedFaceSet842

HAnimSegment837.children.append(Shape838)
HAnimSite845 = x3d.HAnimSite()
HAnimSite845.DEF = "c2_Sites"
"""None"""

HAnimSegment837.children.append(HAnimSite845)

HAnimJoint836.children.append(HAnimSegment837)
HAnimJoint846 = x3d.HAnimJoint()
HAnimJoint846.name = "vc1"
HAnimJoint846.DEF = "hanim_vc1"
HAnimJoint846.center = [0,1.3185,-0.015063751]
HAnimJoint846.ulimit = [0,0,0]
HAnimJoint846.llimit = [0,0,0]
HAnimSegment847 = x3d.HAnimSegment()
HAnimSegment847.name = "c1"
HAnimSegment847.DEF = "hanim_c1"
Shape848 = x3d.Shape()
Shape848.DEF = "c1_Shape"
Appearance849 = x3d.Appearance()
Material850 = x3d.Material()
Material850.USE = "SurfaceDefault"

Appearance849.material = Material850
ImageTexture851 = x3d.ImageTexture()
ImageTexture851.USE = "JinLOA4TextureAtlas"

Appearance849.texture = ImageTexture851

Shape848.appearance = Appearance849
IndexedFaceSet852 = x3d.IndexedFaceSet()
IndexedFaceSet852.coordIndex = [8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1]
IndexedFaceSet852.creaseAngle = 3.14159
IndexedFaceSet852.texCoordIndex = [8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1]
Coordinate853 = x3d.Coordinate()

IndexedFaceSet852.coord = Coordinate853
TextureCoordinate854 = x3d.TextureCoordinate()

IndexedFaceSet852.texCoord = TextureCoordinate854

Shape848.geometry = IndexedFaceSet852

HAnimSegment847.children.append(Shape848)
HAnimSite855 = x3d.HAnimSite()
HAnimSite855.DEF = "c1_Sites"
"""None"""

HAnimSegment847.children.append(HAnimSite855)

HAnimJoint846.children.append(HAnimSegment847)
HAnimJoint856 = x3d.HAnimJoint()
HAnimJoint856.name = "skullbase"
HAnimJoint856.DEF = "hanim_skullbase"
HAnimJoint856.center = [0,1.3126501,-0.01544175]
HAnimJoint856.ulimit = [0,0,0]
HAnimJoint856.llimit = [0,0,0]
HAnimSegment857 = x3d.HAnimSegment()
HAnimSegment857.name = "skull"
HAnimSegment857.DEF = "hanim_skull"
Shape858 = x3d.Shape()
Shape858.DEF = "skull_Shape"
Appearance859 = x3d.Appearance()
Material860 = x3d.Material()
Material860.USE = "SurfaceDefault"

Appearance859.material = Material860
ImageTexture861 = x3d.ImageTexture()
ImageTexture861.USE = "JinLOA4TextureAtlas"

Appearance859.texture = ImageTexture861

Shape858.appearance = Appearance859
IndexedFaceSet862 = x3d.IndexedFaceSet()
IndexedFaceSet862.coordIndex = [51,38,41,-1,41,43,51,-1,43,52,171,-1,171,151,43,-1,49,42,41,-1,41,38,49,-1,44,186,171,-1,171,52,44,-1,78,76,51,-1,51,43,78,-1,189,78,43,-1,43,151,189,-1,9,172,13,-1,13,10,9,-1,73,193,9,-1,9,10,73,-1,11,50,27,-1,16,13,172,-1,13,67,14,-1,68,15,14,-1,7,6,67,-1,13,16,67,-1,7,67,16,-1,16,172,173,-1,7,16,136,-1,7,136,130,-1,131,132,173,-1,68,19,18,-1,18,15,68,-1,20,32,18,-1,17,8,32,-1,15,66,13,-1,13,14,15,-1,32,23,24,-1,24,17,32,-1,21,24,23,-1,21,22,24,-1,24,22,17,-1,27,25,11,-1,25,31,11,-1,22,28,17,-1,27,30,29,-1,12,26,29,-1,26,27,29,-1,27,28,30,-1,30,28,22,-1,6,14,67,-1,1,34,31,-1,34,36,35,-1,34,35,31,-1,34,1,36,-1,49,37,1,-1,1,40,49,-1,39,37,49,-1,49,38,39,-1,37,39,1,-1,42,49,40,-1,40,0,42,-1,44,52,0,-1,186,44,0,-1,0,149,186,-1,51,76,45,-1,45,76,77,-1,53,45,77,-1,1,39,45,-1,45,53,1,-1,45,39,38,-1,38,51,45,-1,53,77,46,-1,77,74,33,-1,33,46,77,-1,1,53,46,-1,46,36,1,-1,46,33,35,-1,35,36,46,-1,74,50,33,-1,8,17,47,-1,11,31,50,-1,35,33,50,-1,31,35,50,-1,50,74,75,-1,47,75,8,-1,27,50,28,-1,28,50,47,-1,28,47,17,-1,75,73,48,-1,48,73,10,-1,66,48,10,-1,10,13,66,-1,75,66,8,-1,66,75,48,-1,8,66,18,-1,18,32,8,-1,15,18,66,-1,47,50,75,-1,41,52,43,-1,42,0,41,-1,0,52,41,-1,0,54,149,-1,244,245,54,-1,0,56,54,-1,0,40,55,-1,55,57,0,-1,3,57,55,-1,0,57,56,-1,3,62,5,-1,5,62,58,-1,3,64,62,-1,2,61,62,-1,62,64,2,-1,3,60,64,-1,55,40,59,-1,64,60,59,-1,64,59,135,-1,149,54,245,-1,5,57,3,-1,54,5,244,-1,152,63,61,-1,153,63,152,-1,63,5,58,-1,153,244,63,-1,244,5,63,-1,58,61,63,-1,58,62,61,-1,56,5,54,-1,56,57,5,-1,60,3,55,-1,60,55,59,-1,1,133,135,-1,59,40,1,-1,59,1,135,-1,65,135,133,-1,2,65,133,-1,2,64,65,-1,64,135,65,-1,73,75,69,-1,263,193,73,-1,73,69,263,-1,69,75,74,-1,74,71,69,-1,71,74,77,-1,77,72,71,-1,69,71,266,-1,266,263,69,-1,72,70,266,-1,266,71,72,-1,78,72,77,-1,77,76,78,-1,189,70,72,-1,72,78,189,-1,138,123,113,-1,79,122,123,-1,122,79,80,-1,137,124,81,-1,137,81,82,-1,137,82,83,-1,83,79,137,-1,79,83,80,-1,84,116,122,-1,124,84,122,-1,84,119,116,-1,123,122,113,-1,113,122,109,-1,115,138,113,-1,113,114,115,-1,117,286,158,-1,158,112,117,-1,122,116,109,-1,79,123,133,-1,133,123,138,-1,133,137,79,-1,129,138,115,-1,110,117,112,-1,111,117,110,-1,2,133,138,-1,109,85,113,-1,86,113,85,-1,107,294,160,-1,160,126,107,-1,107,126,125,-1,125,108,107,-1,125,127,87,-1,87,108,125,-1,108,87,103,-1,103,104,108,-1,114,301,154,-1,154,115,114,-1,302,114,86,-1,86,159,302,-1,114,113,86,-1,116,105,109,-1,109,105,87,-1,85,88,86,-1,109,87,85,-1,104,174,305,-1,305,108,104,-1,305,175,108,-1,105,103,87,-1,307,91,170,-1,170,150,307,-1,174,104,95,-1,95,162,174,-1,311,150,170,-1,170,177,311,-1,116,90,105,-1,89,90,116,-1,94,168,167,-1,167,93,94,-1,105,90,96,-1,97,95,104,-1,104,103,97,-1,120,121,95,-1,95,97,120,-1,105,96,97,-1,97,103,105,-1,120,97,96,-1,96,98,120,-1,121,100,95,-1,163,91,162,-1,93,170,99,-1,98,96,90,-1,90,101,98,-1,99,163,100,-1,110,112,92,-1,101,90,89,-1,89,106,101,-1,92,112,165,-1,165,177,170,-1,175,294,107,-1,107,108,175,-1,119,89,116,-1,118,111,119,-1,118,117,111,-1,152,138,129,-1,2,138,61,-1,61,138,152,-1,87,127,88,-1,88,85,87,-1,124,119,84,-1,119,111,164,-1,111,166,164,-1,111,110,166,-1,92,166,110,-1,133,4,137,-1,133,134,4,-1,160,176,128,-1,128,126,160,-1,126,128,127,-1,127,125,126,-1,80,81,124,-1,124,122,80,-1,82,81,80,-1,80,83,82,-1,129,115,154,-1,154,152,129,-1,94,140,139,-1,139,102,94,-1,93,141,140,-1,140,94,93,-1,99,142,141,-1,141,93,99,-1,100,143,142,-1,142,99,100,-1,121,144,143,-1,143,100,121,-1,120,145,144,-1,144,121,120,-1,98,146,145,-1,145,120,98,-1,101,147,146,-1,146,98,101,-1,106,148,147,-1,147,101,106,-1,106,102,139,-1,139,148,106,-1,114,302,301,-1,88,127,155,-1,155,157,88,-1,127,161,156,-1,156,155,127,-1,352,353,156,-1,156,161,352,-1,156,353,354,-1,155,156,354,-1,155,354,157,-1,127,128,161,-1,161,128,176,-1,176,352,161,-1,168,94,102,-1,102,169,168,-1,170,93,167,-1,169,102,106,-1,106,164,169,-1,170,91,99,-1,99,91,163,-1,100,163,162,-1,162,95,100,-1,91,307,174,-1,174,162,91,-1,164,106,89,-1,164,89,119,-1,165,170,167,-1,92,165,167,-1,167,168,92,-1,166,92,168,-1,168,169,166,-1,164,166,169,-1,165,112,177,-1,177,112,158,-1,158,311,177,-1,180,179,178,-1,178,181,180,-1,179,151,171,-1,171,182,179,-1,183,181,178,-1,178,184,183,-1,185,182,171,-1,171,186,185,-1,187,179,180,-1,180,188,187,-1,189,151,179,-1,179,187,189,-1,9,191,190,-1,190,172,9,-1,192,191,9,-1,9,193,192,-1,194,196,195,-1,197,172,190,-1,190,199,198,-1,200,199,201,-1,202,198,203,-1,190,198,197,-1,202,197,198,-1,197,173,172,-1,202,204,197,-1,202,205,204,-1,206,173,207,-1,200,201,208,-1,208,209,200,-1,210,208,211,-1,212,211,213,-1,201,199,190,-1,190,214,201,-1,211,212,215,-1,215,216,211,-1,217,216,215,-1,217,215,218,-1,215,212,218,-1,196,194,219,-1,219,194,220,-1,218,212,221,-1,196,223,222,-1,224,223,225,-1,225,223,196,-1,196,222,221,-1,222,218,221,-1,203,198,199,-1,226,220,227,-1,227,229,228,-1,227,220,229,-1,227,228,226,-1,183,230,226,-1,226,231,183,-1,232,181,183,-1,183,231,232,-1,231,226,232,-1,184,233,230,-1,230,183,184,-1,185,233,182,-1,186,149,233,-1,233,185,186,-1,180,234,188,-1,234,235,188,-1,236,235,234,-1,226,236,234,-1,234,232,226,-1,234,180,181,-1,181,232,234,-1,236,237,235,-1,235,237,238,-1,238,239,235,-1,226,228,237,-1,237,236,226,-1,237,228,229,-1,229,238,237,-1,239,238,195,-1,213,240,212,-1,194,195,220,-1,229,195,238,-1,220,195,229,-1,195,241,239,-1,240,213,241,-1,196,221,195,-1,221,240,195,-1,221,212,240,-1,241,242,192,-1,242,191,192,-1,214,190,191,-1,191,242,214,-1,241,213,214,-1,214,242,241,-1,213,211,208,-1,208,214,213,-1,201,214,208,-1,240,241,195,-1,178,179,182,-1,184,178,233,-1,233,178,182,-1,233,149,243,-1,244,243,245,-1,233,243,246,-1,233,248,247,-1,247,230,233,-1,249,247,248,-1,233,246,248,-1,249,251,250,-1,251,252,250,-1,249,250,253,-1,254,253,250,-1,250,255,254,-1,249,253,256,-1,247,257,230,-1,253,257,256,-1,253,258,257,-1,149,245,243,-1,251,249,248,-1,243,244,251,-1,152,255,259,-1,153,152,259,-1,259,252,251,-1,153,259,244,-1,244,259,251,-1,252,259,255,-1,252,255,250,-1,246,243,251,-1,246,251,248,-1,256,247,249,-1,256,257,247,-1,226,258,260,-1,257,226,230,-1,257,258,226,-1,261,260,258,-1,254,260,261,-1,254,261,253,-1,253,261,258,-1,192,262,241,-1,263,262,192,-1,192,193,263,-1,262,264,239,-1,239,241,262,-1,264,265,235,-1,235,239,264,-1,262,263,266,-1,266,264,262,-1,265,264,266,-1,266,70,265,-1,187,188,235,-1,235,265,187,-1,189,187,265,-1,265,70,189,-1,267,269,268,-1,270,268,271,-1,271,272,270,-1,273,275,274,-1,273,276,275,-1,273,270,277,-1,277,276,273,-1,270,272,277,-1,278,271,279,-1,274,271,278,-1,278,279,280,-1,268,269,271,-1,269,281,271,-1,283,282,269,-1,269,267,283,-1,285,284,158,-1,158,286,285,-1,271,281,279,-1,270,260,268,-1,260,267,268,-1,260,270,273,-1,287,283,267,-1,288,284,285,-1,289,288,285,-1,254,267,260,-1,281,269,290,-1,291,290,269,-1,293,292,160,-1,160,294,293,-1,293,296,295,-1,295,292,293,-1,295,296,297,-1,297,298,295,-1,296,300,299,-1,299,297,296,-1,282,283,154,-1,154,301,282,-1,302,159,291,-1,291,282,302,-1,282,291,269,-1,279,281,303,-1,281,297,303,-1,290,291,304,-1,281,290,297,-1,300,296,305,-1,305,174,300,-1,305,296,175,-1,303,297,299,-1,307,150,306,-1,306,308,307,-1,174,310,309,-1,309,300,174,-1,311,312,306,-1,306,150,311,-1,279,303,313,-1,314,279,313,-1,315,318,317,-1,317,316,315,-1,303,319,313,-1,320,299,300,-1,300,309,320,-1,321,320,309,-1,309,322,321,-1,303,299,320,-1,320,319,303,-1,321,323,319,-1,319,320,321,-1,322,309,324,-1,325,310,308,-1,318,326,306,-1,323,327,313,-1,313,319,323,-1,326,324,325,-1,288,328,284,-1,327,329,314,-1,314,313,327,-1,328,330,284,-1,330,306,312,-1,175,293,294,-1,293,175,296,-1,280,279,314,-1,331,280,289,-1,331,289,285,-1,152,287,267,-1,254,255,267,-1,255,152,267,-1,297,290,304,-1,304,298,297,-1,274,278,280,-1,280,332,289,-1,289,332,333,-1,289,333,288,-1,328,288,333,-1,260,273,334,-1,260,334,335,-1,160,292,336,-1,336,176,160,-1,292,295,298,-1,298,336,292,-1,272,271,274,-1,274,275,272,-1,276,277,272,-1,272,275,276,-1,287,152,154,-1,154,283,287,-1,315,337,339,-1,339,338,315,-1,318,315,338,-1,338,340,318,-1,326,318,340,-1,340,341,326,-1,324,326,341,-1,341,342,324,-1,322,324,342,-1,342,343,322,-1,321,322,343,-1,343,344,321,-1,323,321,344,-1,344,345,323,-1,327,323,345,-1,345,346,327,-1,329,327,346,-1,346,347,329,-1,329,347,339,-1,339,337,329,-1,282,301,302,-1,304,349,348,-1,348,298,304,-1,298,348,351,-1,351,350,298,-1,352,350,351,-1,351,353,352,-1,348,349,354,-1,354,353,351,-1,348,354,351,-1,298,350,336,-1,350,352,176,-1,176,336,350,-1,316,355,337,-1,337,315,316,-1,306,317,318,-1,355,332,329,-1,329,337,355,-1,306,326,308,-1,326,325,308,-1,324,309,310,-1,310,325,324,-1,308,310,174,-1,174,307,308,-1,332,314,329,-1,332,280,314,-1,330,317,306,-1,328,316,317,-1,317,330,328,-1,333,355,316,-1,316,328,333,-1,332,355,333,-1,330,312,284,-1,312,311,158,-1,158,284,312,-1]
IndexedFaceSet862.creaseAngle = 3.14159
IndexedFaceSet862.texCoordIndex = [0,3,2,-1,2,1,0,-1,1,6,5,-1,5,4,1,-1,7,8,2,-1,2,3,7,-1,9,10,5,-1,5,6,9,-1,11,12,0,-1,0,1,11,-1,13,11,1,-1,1,4,13,-1,14,17,16,-1,16,15,14,-1,18,19,14,-1,14,15,18,-1,22,21,20,-1,23,16,17,-1,16,25,24,-1,27,26,24,-1,29,28,25,-1,16,23,25,-1,29,25,23,-1,31,17,30,-1,29,23,32,-1,33,32,31,-1,33,31,30,-1,27,35,34,-1,34,26,27,-1,37,36,34,-1,39,38,36,-1,26,40,16,-1,16,24,26,-1,36,42,41,-1,41,39,36,-1,43,41,42,-1,43,44,41,-1,41,44,39,-1,20,45,22,-1,45,46,22,-1,44,47,39,-1,20,49,50,-1,48,51,50,-1,51,20,50,-1,20,47,49,-1,49,47,44,-1,28,24,25,-1,53,52,46,-1,52,55,54,-1,52,54,46,-1,52,53,55,-1,7,57,53,-1,53,56,7,-1,58,57,7,-1,7,59,58,-1,57,58,53,-1,8,7,56,-1,56,60,8,-1,9,6,60,-1,10,9,60,-1,60,61,10,-1,0,12,62,-1,62,12,63,-1,64,62,63,-1,53,58,62,-1,62,64,53,-1,62,58,59,-1,59,0,62,-1,64,63,65,-1,63,67,66,-1,66,65,63,-1,53,64,65,-1,65,55,53,-1,65,66,54,-1,54,55,65,-1,67,21,66,-1,38,39,68,-1,22,46,21,-1,54,66,21,-1,46,54,21,-1,21,67,69,-1,68,69,38,-1,20,21,47,-1,47,21,68,-1,47,68,39,-1,69,18,70,-1,70,18,15,-1,40,70,15,-1,15,16,40,-1,69,71,38,-1,71,69,70,-1,38,71,34,-1,34,36,38,-1,26,34,71,-1,68,21,69,-1,2,6,1,-1,8,60,2,-1,60,6,2,-1,74,73,72,-1,77,76,75,-1,74,78,73,-1,74,81,80,-1,80,79,74,-1,82,79,80,-1,74,79,78,-1,82,84,83,-1,83,84,85,-1,82,86,84,-1,87,90,89,-1,89,88,87,-1,92,91,88,-1,80,81,93,-1,88,91,94,-1,86,93,95,-1,72,73,96,-1,83,79,82,-1,73,83,97,-1,100,99,98,-1,103,102,101,-1,99,83,85,-1,104,97,99,-1,97,83,99,-1,105,90,102,-1,105,89,90,-1,107,106,75,-1,107,108,106,-1,109,82,80,-1,109,80,93,-1,112,111,110,-1,93,81,113,-1,93,113,95,-1,114,110,111,-1,115,114,111,-1,87,86,116,-1,86,95,116,-1,18,69,117,-1,118,19,18,-1,18,117,118,-1,117,69,67,-1,67,119,117,-1,119,67,63,-1,63,120,119,-1,117,119,121,-1,121,118,117,-1,120,122,121,-1,121,119,120,-1,11,120,63,-1,63,12,11,-1,13,122,120,-1,120,11,13,-1,125,124,123,-1,127,126,124,-1,126,127,128,-1,131,130,129,-1,131,129,132,-1,131,132,133,-1,133,127,131,-1,127,133,128,-1,135,134,126,-1,130,135,126,-1,135,136,134,-1,124,126,123,-1,123,126,137,-1,138,125,123,-1,123,139,138,-1,140,143,142,-1,142,141,140,-1,126,134,137,-1,127,124,144,-1,144,124,125,-1,144,131,127,-1,145,125,138,-1,146,140,141,-1,147,140,146,-1,148,144,125,-1,137,149,123,-1,150,123,149,-1,153,156,155,-1,155,154,153,-1,153,154,158,-1,158,157,153,-1,158,160,159,-1,159,157,158,-1,157,159,162,-1,162,161,157,-1,139,215,164,-1,164,138,139,-1,163,139,150,-1,150,165,163,-1,139,123,150,-1,168,167,166,-1,166,167,159,-1,169,151,152,-1,166,159,169,-1,161,172,170,-1,170,157,161,-1,170,171,157,-1,167,162,159,-1,173,176,236,-1,236,174,173,-1,172,161,177,-1,177,233,172,-1,241,174,236,-1,236,240,241,-1,168,180,167,-1,181,180,168,-1,183,238,237,-1,237,231,183,-1,167,180,186,-1,187,177,161,-1,161,162,187,-1,188,189,177,-1,177,187,188,-1,167,186,187,-1,187,162,167,-1,188,187,186,-1,186,190,188,-1,189,192,177,-1,234,176,233,-1,231,175,191,-1,190,186,180,-1,180,193,190,-1,191,234,192,-1,146,141,195,-1,193,180,181,-1,181,194,193,-1,195,141,196,-1,196,240,236,-1,171,156,153,-1,153,157,171,-1,197,181,168,-1,198,147,242,-1,198,140,147,-1,199,125,145,-1,148,125,200,-1,200,125,199,-1,159,160,151,-1,151,169,159,-1,130,136,135,-1,242,147,184,-1,147,201,184,-1,147,146,201,-1,195,201,146,-1,144,202,131,-1,144,148,202,-1,155,204,203,-1,203,154,155,-1,154,203,160,-1,160,158,154,-1,205,208,207,-1,207,206,205,-1,209,208,205,-1,205,210,209,-1,213,214,211,-1,211,212,213,-1,191,191,192,-1,192,192,191,-1,191,191,191,-1,191,191,191,-1,191,191,191,-1,191,191,191,-1,192,192,191,-1,191,191,192,-1,189,189,192,-1,192,192,189,-1,188,188,189,-1,189,189,188,-1,190,190,188,-1,188,188,190,-1,193,193,190,-1,190,190,193,-1,194,194,193,-1,193,193,194,-1,194,232,232,-1,232,194,194,-1,139,163,215,-1,222,223,217,-1,217,216,222,-1,223,229,218,-1,218,217,223,-1,228,219,218,-1,218,229,228,-1,218,219,221,-1,217,218,221,-1,217,221,220,-1,224,225,226,-1,226,225,227,-1,227,230,226,-1,238,183,232,-1,232,239,238,-1,175,231,237,-1,239,232,194,-1,194,178,239,-1,175,176,191,-1,191,176,234,-1,192,234,233,-1,233,177,192,-1,176,173,172,-1,172,233,176,-1,178,194,181,-1,184,235,242,-1,196,236,179,-1,195,196,179,-1,179,182,195,-1,201,195,182,-1,182,185,201,-1,184,201,185,-1,196,141,240,-1,240,141,142,-1,142,241,240,-1,245,244,243,-1,243,246,245,-1,244,248,247,-1,247,249,244,-1,250,246,243,-1,243,251,250,-1,252,249,247,-1,247,253,252,-1,254,244,245,-1,245,255,254,-1,256,248,244,-1,244,254,256,-1,259,258,257,-1,257,260,259,-1,261,258,259,-1,259,262,261,-1,263,265,264,-1,266,260,257,-1,257,268,267,-1,269,268,270,-1,271,267,272,-1,257,267,266,-1,271,266,267,-1,273,274,260,-1,271,275,266,-1,276,273,275,-1,276,274,273,-1,269,270,277,-1,277,278,269,-1,279,277,280,-1,281,280,282,-1,270,268,257,-1,257,283,270,-1,280,281,284,-1,284,285,280,-1,286,285,284,-1,286,284,287,-1,284,281,287,-1,265,263,288,-1,288,263,289,-1,287,281,290,-1,265,292,291,-1,293,292,294,-1,294,292,265,-1,265,291,290,-1,291,287,290,-1,272,267,268,-1,295,289,296,-1,296,298,297,-1,296,289,298,-1,296,297,295,-1,250,299,295,-1,295,300,250,-1,302,301,250,-1,250,300,302,-1,300,295,302,-1,251,303,299,-1,299,250,251,-1,252,303,249,-1,253,304,303,-1,303,252,253,-1,245,305,255,-1,305,306,255,-1,307,306,305,-1,295,307,305,-1,305,302,295,-1,305,245,301,-1,301,302,305,-1,307,308,306,-1,306,308,309,-1,309,310,306,-1,295,297,308,-1,308,307,295,-1,308,297,298,-1,298,309,308,-1,310,309,264,-1,282,311,281,-1,263,264,289,-1,298,264,309,-1,289,264,298,-1,264,312,310,-1,311,282,312,-1,265,290,264,-1,290,311,264,-1,290,281,311,-1,312,313,261,-1,313,258,261,-1,283,257,258,-1,258,313,283,-1,312,282,314,-1,314,313,312,-1,282,280,277,-1,277,314,282,-1,270,314,277,-1,311,312,264,-1,243,244,249,-1,251,243,303,-1,303,243,249,-1,315,317,316,-1,318,320,319,-1,315,316,321,-1,315,323,322,-1,322,324,315,-1,325,322,323,-1,315,321,323,-1,325,327,326,-1,327,328,326,-1,325,326,329,-1,332,331,330,-1,330,333,332,-1,334,331,335,-1,322,336,324,-1,331,337,335,-1,329,338,336,-1,317,339,316,-1,327,325,323,-1,316,340,327,-1,341,343,342,-1,344,346,345,-1,342,328,327,-1,347,342,340,-1,340,342,327,-1,348,345,333,-1,348,333,330,-1,349,320,350,-1,349,350,351,-1,352,322,325,-1,352,336,322,-1,353,355,354,-1,336,356,324,-1,336,338,356,-1,357,354,355,-1,358,354,357,-1,332,359,329,-1,329,359,338,-1,261,360,312,-1,361,360,261,-1,261,262,361,-1,360,362,310,-1,310,312,360,-1,362,363,306,-1,306,310,362,-1,360,361,364,-1,364,362,360,-1,363,362,364,-1,364,365,363,-1,254,255,306,-1,306,363,254,-1,256,254,363,-1,363,365,256,-1,366,368,367,-1,369,367,370,-1,370,371,369,-1,372,374,373,-1,372,375,374,-1,372,369,376,-1,376,375,372,-1,369,371,376,-1,377,370,378,-1,373,370,377,-1,377,378,379,-1,367,368,370,-1,368,380,370,-1,382,381,368,-1,368,366,382,-1,385,384,383,-1,383,386,385,-1,370,380,378,-1,369,387,367,-1,387,366,367,-1,387,369,372,-1,388,382,366,-1,389,384,385,-1,390,389,385,-1,391,366,387,-1,380,368,392,-1,393,392,368,-1,396,395,394,-1,394,397,396,-1,396,399,398,-1,398,395,396,-1,398,399,400,-1,400,401,398,-1,399,403,402,-1,402,400,399,-1,381,382,405,-1,405,404,381,-1,406,407,393,-1,393,381,406,-1,381,393,368,-1,408,410,409,-1,410,400,409,-1,411,413,412,-1,410,411,400,-1,403,399,414,-1,414,415,403,-1,414,399,416,-1,409,400,402,-1,419,418,417,-1,417,420,419,-1,415,422,421,-1,421,403,415,-1,423,424,417,-1,417,418,423,-1,408,409,425,-1,426,408,425,-1,427,430,429,-1,429,428,427,-1,409,431,425,-1,432,402,403,-1,403,421,432,-1,433,432,421,-1,421,434,433,-1,409,402,432,-1,432,431,409,-1,433,435,431,-1,431,432,433,-1,434,421,436,-1,437,422,420,-1,430,439,438,-1,435,440,425,-1,425,431,435,-1,439,436,437,-1,389,441,384,-1,440,442,426,-1,426,425,440,-1,441,443,384,-1,443,417,424,-1,416,396,397,-1,396,416,399,-1,444,408,426,-1,445,446,390,-1,445,390,385,-1,447,388,366,-1,391,448,366,-1,448,447,366,-1,400,411,412,-1,412,401,400,-1,373,377,379,-1,446,449,390,-1,390,449,450,-1,390,450,389,-1,441,389,450,-1,387,372,451,-1,387,451,391,-1,394,395,452,-1,452,453,394,-1,395,398,401,-1,401,452,395,-1,456,455,454,-1,454,457,456,-1,459,458,456,-1,456,457,459,-1,462,461,460,-1,460,463,462,-1,439,436,436,-1,436,439,439,-1,439,439,439,-1,439,439,439,-1,439,439,439,-1,439,439,439,-1,436,439,439,-1,439,436,436,-1,434,436,436,-1,436,434,434,-1,433,434,434,-1,434,433,433,-1,435,433,433,-1,433,435,435,-1,440,435,435,-1,435,440,440,-1,442,440,440,-1,440,442,442,-1,442,442,464,-1,464,464,442,-1,381,404,406,-1,465,468,467,-1,467,466,465,-1,466,467,470,-1,470,469,466,-1,471,469,470,-1,470,472,471,-1,467,474,473,-1,473,472,470,-1,467,473,470,-1,475,477,476,-1,477,479,478,-1,478,476,477,-1,428,480,464,-1,464,427,428,-1,438,429,430,-1,480,481,442,-1,442,464,480,-1,438,439,420,-1,439,437,420,-1,436,421,422,-1,422,437,436,-1,420,422,415,-1,415,419,420,-1,481,426,442,-1,449,446,482,-1,443,483,417,-1,441,484,483,-1,483,443,441,-1,450,485,484,-1,484,441,450,-1,449,485,450,-1,443,424,384,-1,424,423,383,-1,383,384,424,-1]
Coordinate863 = x3d.Coordinate()

IndexedFaceSet862.coord = Coordinate863
TextureCoordinate864 = x3d.TextureCoordinate()

IndexedFaceSet862.texCoord = TextureCoordinate864

Shape858.geometry = IndexedFaceSet862

HAnimSegment857.children.append(Shape858)
HAnimSite865 = x3d.HAnimSite()
HAnimSite865.DEF = "skull_Sites"
"""(skull_vertex 0.0050 1.7504 0.0055) (sellion 0.0058 1.6316 0.0852) (r_infraorbitale -0.0237 1.6171 0.0752) (l_infraorbitale 0.0341 1.6171 0.0752) (r_tragion -0.0646 1.6347 0.0302) (l_tragion 0.0739 1.6348 0.0282) (nuchale 0.0039 1.5972 -0.0796) (opisthocranion x y z) (glabella x y z) (l_ectocanthus x y z) (r_ectocanthus x y z)"""

HAnimSegment857.children.append(HAnimSite865)

HAnimJoint856.children.append(HAnimSegment857)
HAnimJoint866 = x3d.HAnimJoint()
HAnimJoint866.name = "l_eyelid_joint"
HAnimJoint866.DEF = "hanim_l_eyelid_joint"
HAnimJoint866.center = [0.0505125,1.42425,0.03294]
HAnimJoint866.ulimit = [0,0,0]
HAnimJoint866.llimit = [0,0,0]
HAnimSegment867 = x3d.HAnimSegment()
HAnimSegment867.name = "l_eyelid"
HAnimSegment867.DEF = "hanim_l_eyelid"
Shape868 = x3d.Shape()
Shape868.DEF = "l_eyelid_Shape"
Appearance869 = x3d.Appearance()
Material870 = x3d.Material()
Material870.USE = "SurfaceDefault"

Appearance869.material = Material870
ImageTexture871 = x3d.ImageTexture()
ImageTexture871.USE = "JinLOA4TextureAtlas"

Appearance869.texture = ImageTexture871

Shape868.appearance = Appearance869
IndexedFaceSet872 = x3d.IndexedFaceSet()
IndexedFaceSet872.coordIndex = [0,1,25,-1,25,24,0,-1,2,26,25,-1,25,1,2,-1,2,3,8,-1,8,26,2,-1,10,27,9,-1,9,4,10,-1,10,0,24,-1,24,27,10,-1,1,0,12,-1,12,13,1,-1,2,1,13,-1,13,14,2,-1,3,2,14,-1,14,15,3,-1,10,4,16,-1,16,22,10,-1,5,6,18,-1,18,17,5,-1,6,7,19,-1,19,18,6,-1,7,8,20,-1,20,19,7,-1,9,11,23,-1,23,21,9,-1,8,3,15,-1,15,20,8,-1,4,9,21,-1,21,16,4,-1,0,10,22,-1,22,12,0,-1,11,5,17,-1,17,23,11,-1,6,5,24,-1,24,25,6,-1,7,6,25,-1,25,26,7,-1,5,11,27,-1,27,24,5,-1,27,11,9,-1,8,7,26,-1]
IndexedFaceSet872.creaseAngle = 3.14159
IndexedFaceSet872.texCoordIndex = [0,1,2,-1,2,3,0,-1,4,5,2,-1,2,1,4,-1,4,6,7,-1,7,5,4,-1,9,10,11,-1,11,8,9,-1,9,0,3,-1,3,10,9,-1,1,0,12,-1,12,13,1,-1,4,1,13,-1,13,14,4,-1,6,4,14,-1,14,15,6,-1,9,8,16,-1,16,17,9,-1,18,19,20,-1,20,21,18,-1,19,22,23,-1,23,20,19,-1,22,7,24,-1,24,23,22,-1,11,25,26,-1,26,27,11,-1,7,6,15,-1,15,24,7,-1,8,11,27,-1,27,16,8,-1,0,9,17,-1,17,12,0,-1,25,18,21,-1,21,26,25,-1,19,18,3,-1,3,2,19,-1,22,19,2,-1,2,5,22,-1,18,25,10,-1,10,3,18,-1,10,25,11,-1,7,22,5,-1]
Coordinate873 = x3d.Coordinate()

IndexedFaceSet872.coord = Coordinate873
TextureCoordinate874 = x3d.TextureCoordinate()

IndexedFaceSet872.texCoord = TextureCoordinate874

Shape868.geometry = IndexedFaceSet872

HAnimSegment867.children.append(Shape868)
HAnimSite875 = x3d.HAnimSite()
HAnimSite875.DEF = "l_eyelid_Sites"
"""(l_eyelid_tip x y z)"""

HAnimSegment867.children.append(HAnimSite875)

HAnimJoint866.children.append(HAnimSegment867)

HAnimJoint856.children.append(HAnimJoint866)
HAnimJoint876 = x3d.HAnimJoint()
HAnimJoint876.name = "r_eyelid_joint"
HAnimJoint876.DEF = "hanim_r_eyelid_joint"
HAnimJoint876.center = [-0.0505125,1.42425,0.03294]
HAnimJoint876.ulimit = [0,0,0]
HAnimJoint876.llimit = [0,0,0]
HAnimSegment877 = x3d.HAnimSegment()
HAnimSegment877.name = "r_eyelid"
HAnimSegment877.DEF = "hanim_r_eyelid"
Shape878 = x3d.Shape()
Shape878.DEF = "r_eyelid_Shape"
Appearance879 = x3d.Appearance()
Material880 = x3d.Material()
Material880.USE = "SurfaceDefault"

Appearance879.material = Material880
ImageTexture881 = x3d.ImageTexture()
ImageTexture881.USE = "JinLOA4TextureAtlas"

Appearance879.texture = ImageTexture881

Shape878.appearance = Appearance879
IndexedFaceSet882 = x3d.IndexedFaceSet()
IndexedFaceSet882.coordIndex = [0,24,25,-1,25,1,0,-1,2,1,25,-1,25,26,2,-1,2,26,8,-1,8,3,2,-1,10,4,9,-1,9,27,10,-1,10,27,24,-1,24,0,10,-1,1,13,12,-1,12,0,1,-1,2,14,13,-1,13,1,2,-1,3,15,14,-1,14,2,3,-1,10,22,16,-1,16,4,10,-1,5,17,18,-1,18,6,5,-1,6,18,19,-1,19,7,6,-1,7,19,20,-1,20,8,7,-1,9,21,23,-1,23,11,9,-1,8,20,15,-1,15,3,8,-1,4,16,21,-1,21,9,4,-1,0,12,22,-1,22,10,0,-1,11,23,17,-1,17,5,11,-1,6,25,24,-1,24,5,6,-1,7,26,25,-1,25,6,7,-1,5,24,27,-1,27,11,5,-1,27,9,11,-1,8,26,7,-1]
IndexedFaceSet882.creaseAngle = 3.14159
IndexedFaceSet882.texCoordIndex = [0,3,2,-1,2,1,0,-1,4,1,2,-1,2,5,4,-1,4,5,7,-1,7,6,4,-1,9,8,11,-1,11,10,9,-1,9,10,3,-1,3,0,9,-1,1,13,12,-1,12,0,1,-1,4,14,13,-1,13,1,4,-1,6,15,14,-1,14,4,6,-1,9,17,16,-1,16,8,9,-1,18,21,20,-1,20,19,18,-1,19,20,23,-1,23,22,19,-1,22,23,24,-1,24,7,22,-1,11,27,26,-1,26,25,11,-1,7,24,15,-1,15,6,7,-1,8,16,27,-1,27,11,8,-1,0,12,17,-1,17,9,0,-1,25,26,21,-1,21,18,25,-1,19,2,3,-1,3,18,19,-1,22,5,2,-1,2,19,22,-1,18,3,10,-1,10,25,18,-1,10,11,25,-1,7,5,22,-1]
Coordinate883 = x3d.Coordinate()

IndexedFaceSet882.coord = Coordinate883
TextureCoordinate884 = x3d.TextureCoordinate()

IndexedFaceSet882.texCoord = TextureCoordinate884

Shape878.geometry = IndexedFaceSet882

HAnimSegment877.children.append(Shape878)
HAnimSite885 = x3d.HAnimSite()
HAnimSite885.DEF = "r_eyelid_Sites"
"""(r_eyelid_tip x y z)"""

HAnimSegment877.children.append(HAnimSite885)

HAnimJoint876.children.append(HAnimSegment877)

HAnimJoint856.children.append(HAnimJoint876)
HAnimJoint886 = x3d.HAnimJoint()
HAnimJoint886.name = "l_eyeball_joint"
HAnimJoint886.DEF = "hanim_l_eyeball_joint"
HAnimJoint886.center = [0.048127502,1.4049001,0.0830475]
HAnimJoint886.ulimit = [0,0,0]
HAnimJoint886.llimit = [0,0,0]
HAnimSegment887 = x3d.HAnimSegment()
HAnimSegment887.name = "l_eyeball"
HAnimSegment887.DEF = "hanim_l_eyeball"
Shape888 = x3d.Shape()
Shape888.DEF = "l_eyeball_Shape"
Appearance889 = x3d.Appearance()
Material890 = x3d.Material()
Material890.USE = "SurfaceDefault"

Appearance889.material = Material890
ImageTexture891 = x3d.ImageTexture()
ImageTexture891.USE = "JinLOA4TextureAtlas"

Appearance889.texture = ImageTexture891

Shape888.appearance = Appearance889
IndexedFaceSet892 = x3d.IndexedFaceSet()
IndexedFaceSet892.coordIndex = [1,6,16,-1,16,11,1,-1,0,1,11,-1,11,10,0,-1,8,9,19,-1,19,18,8,-1,2,8,18,-1,18,12,2,-1,3,0,10,-1,10,13,3,-1,9,4,14,-1,14,19,9,-1,5,2,12,-1,12,15,5,-1,4,3,13,-1,13,14,4,-1,6,7,17,-1,17,16,6,-1,7,5,15,-1,15,17,7,-1,11,16,21,-1,21,20,11,-1,16,17,22,-1,22,21,16,-1,17,15,23,-1,23,22,17,-1,15,12,24,-1,24,23,15,-1,12,18,25,-1,25,24,12,-1,18,19,26,-1,26,25,18,-1,19,14,27,-1,27,26,19,-1,14,13,28,-1,28,27,14,-1,13,10,29,-1,29,28,13,-1,10,11,20,-1,20,29,10,-1,6,1,30,-1,1,0,30,-1,0,3,30,-1,3,4,30,-1,4,9,30,-1,9,8,30,-1,8,2,30,-1,2,5,30,-1,5,7,30,-1,7,6,30,-1]
IndexedFaceSet892.creaseAngle = 3.14159
IndexedFaceSet892.texCoordIndex = [4,9,13,-1,13,14,4,-1,3,4,14,-1,14,15,3,-1,11,12,16,-1,16,17,11,-1,5,11,17,-1,17,18,5,-1,6,3,15,-1,15,6,6,-1,12,7,19,-1,19,16,12,-1,8,5,18,-1,18,20,8,-1,7,6,21,-1,21,19,7,-1,9,10,22,-1,22,13,9,-1,10,8,20,-1,20,22,10,-1,14,13,24,-1,24,23,14,-1,13,22,25,-1,25,24,13,-1,22,20,26,-1,26,25,22,-1,20,18,27,-1,27,26,20,-1,18,17,28,-1,28,27,18,-1,17,16,29,-1,29,28,17,-1,16,19,30,-1,30,29,16,-1,19,21,31,-1,31,30,19,-1,6,15,32,-1,32,31,6,-1,15,14,23,-1,23,32,15,-1,36,1,40,-1,1,0,40,-1,0,33,40,-1,33,34,40,-1,34,39,40,-1,39,38,40,-1,38,2,40,-1,2,35,40,-1,35,37,40,-1,37,36,40,-1]
Coordinate893 = x3d.Coordinate()

IndexedFaceSet892.coord = Coordinate893
TextureCoordinate894 = x3d.TextureCoordinate()

IndexedFaceSet892.texCoord = TextureCoordinate894

Shape888.geometry = IndexedFaceSet892

HAnimSegment887.children.append(Shape888)
HAnimSite895 = x3d.HAnimSite()
HAnimSite895.DEF = "l_eyeball_Sites"
"""(l_eyeball_tip x y z)"""

HAnimSegment887.children.append(HAnimSite895)

HAnimJoint886.children.append(HAnimSegment887)

HAnimJoint856.children.append(HAnimJoint886)
HAnimJoint896 = x3d.HAnimJoint()
HAnimJoint896.name = "r_eyeball_joint"
HAnimJoint896.DEF = "hanim_r_eyeball_joint"
HAnimJoint896.center = [-0.048127502,1.4049001,0.0830475]
HAnimJoint896.ulimit = [0,0,0]
HAnimJoint896.llimit = [0,0,0]
HAnimSegment897 = x3d.HAnimSegment()
HAnimSegment897.name = "r_eyeball"
HAnimSegment897.DEF = "hanim_r_eyeball"
Shape898 = x3d.Shape()
Shape898.DEF = "r_eyeball_Shape"
Appearance899 = x3d.Appearance()
Material900 = x3d.Material()
Material900.USE = "SurfaceDefault"

Appearance899.material = Material900
ImageTexture901 = x3d.ImageTexture()
ImageTexture901.USE = "JinLOA4TextureAtlas"

Appearance899.texture = ImageTexture901

Shape898.appearance = Appearance899
IndexedFaceSet902 = x3d.IndexedFaceSet()
IndexedFaceSet902.coordIndex = [1,11,16,-1,16,6,1,-1,0,10,11,-1,11,1,0,-1,8,18,19,-1,19,9,8,-1,2,12,18,-1,18,8,2,-1,3,13,10,-1,10,0,3,-1,9,19,14,-1,14,4,9,-1,5,15,12,-1,12,2,5,-1,4,14,13,-1,13,3,4,-1,6,16,17,-1,17,7,6,-1,7,17,15,-1,15,5,7,-1,11,20,21,-1,21,16,11,-1,16,21,22,-1,22,17,16,-1,17,22,23,-1,23,15,17,-1,15,23,24,-1,24,12,15,-1,12,24,25,-1,25,18,12,-1,18,25,26,-1,26,19,18,-1,19,26,27,-1,27,14,19,-1,14,27,28,-1,28,13,14,-1,13,28,29,-1,29,10,13,-1,10,29,20,-1,20,11,10,-1,6,30,1,-1,1,30,0,-1,0,30,3,-1,3,30,4,-1,4,30,9,-1,9,30,8,-1,8,30,2,-1,2,30,5,-1,5,30,7,-1,7,30,6,-1]
IndexedFaceSet902.creaseAngle = 3.14159
IndexedFaceSet902.texCoordIndex = [4,14,13,-1,13,9,4,-1,3,15,14,-1,14,4,3,-1,11,17,16,-1,16,12,11,-1,5,18,17,-1,17,11,5,-1,6,6,15,-1,15,3,6,-1,12,16,19,-1,19,7,12,-1,8,20,18,-1,18,5,8,-1,7,19,21,-1,21,6,7,-1,9,13,22,-1,22,10,9,-1,10,22,20,-1,20,8,10,-1,14,23,24,-1,24,13,14,-1,13,24,25,-1,25,22,13,-1,22,25,26,-1,26,20,22,-1,20,26,27,-1,27,18,20,-1,18,27,28,-1,28,17,18,-1,17,28,29,-1,29,16,17,-1,16,29,30,-1,30,19,16,-1,19,30,31,-1,31,21,19,-1,6,31,32,-1,32,15,6,-1,15,32,23,-1,23,14,15,-1,36,40,1,-1,1,40,0,-1,0,40,33,-1,33,40,34,-1,34,40,39,-1,39,40,38,-1,38,40,2,-1,2,40,35,-1,35,40,37,-1,37,40,36,-1]
Coordinate903 = x3d.Coordinate()

IndexedFaceSet902.coord = Coordinate903
TextureCoordinate904 = x3d.TextureCoordinate()

IndexedFaceSet902.texCoord = TextureCoordinate904

Shape898.geometry = IndexedFaceSet902

HAnimSegment897.children.append(Shape898)
HAnimSite905 = x3d.HAnimSite()
HAnimSite905.DEF = "r_eyeball_Sites"
"""(r_eyeball_tip x y z)"""

HAnimSegment897.children.append(HAnimSite905)

HAnimJoint896.children.append(HAnimSegment897)

HAnimJoint856.children.append(HAnimJoint896)
HAnimJoint906 = x3d.HAnimJoint()
HAnimJoint906.name = "l_eyebrow_joint"
HAnimJoint906.DEF = "hanim_l_eyebrow_joint"
HAnimJoint906.center = [0.021748502,1.4139,0.1069425]
HAnimJoint906.ulimit = [0,0,0]
HAnimJoint906.llimit = [0,0,0]
HAnimSegment907 = x3d.HAnimSegment()
HAnimSegment907.name = "l_eyebrow"
HAnimSegment907.DEF = "hanim_l_eyebrow"
Shape908 = x3d.Shape()
Shape908.DEF = "l_eyebrow_Shape"
Appearance909 = x3d.Appearance()
Material910 = x3d.Material()
Material910.USE = "SurfaceDefault"

Appearance909.material = Material910
ImageTexture911 = x3d.ImageTexture()
ImageTexture911.USE = "JinLOA4TextureAtlas"

Appearance909.texture = ImageTexture911

Shape908.appearance = Appearance909
IndexedFaceSet912 = x3d.IndexedFaceSet()
IndexedFaceSet912.coordIndex = [2,20,21,-1,21,7,2,-1,4,3,8,-1,8,10,4,-1,3,2,7,-1,7,8,3,-1,2,1,5,-1,5,20,2,-1,4,6,3,-1,3,6,1,-1,1,2,3,-1,5,1,12,-1,12,14,5,-1,0,5,14,-1,14,11,0,-1,6,4,13,-1,13,15,6,-1,1,6,15,-1,15,12,1,-1,8,7,16,-1,16,17,8,-1,21,22,16,-1,16,7,21,-1,9,0,11,-1,11,18,9,-1,4,10,19,-1,19,13,4,-1,10,8,17,-1,17,19,10,-1,20,0,9,-1,9,21,20,-1,5,0,20,-1,21,9,18,-1,18,22,21,-1]
IndexedFaceSet912.creaseAngle = 3.14159
IndexedFaceSet912.texCoordIndex = [0,20,21,-1,21,7,0,-1,3,1,8,-1,8,10,3,-1,1,0,7,-1,7,8,1,-1,0,4,5,-1,5,20,0,-1,3,6,1,-1,1,6,4,-1,4,0,1,-1,5,4,11,-1,11,12,5,-1,2,5,12,-1,12,14,2,-1,6,3,15,-1,15,16,6,-1,4,6,16,-1,16,11,4,-1,8,7,13,-1,13,17,8,-1,21,22,13,-1,13,7,21,-1,9,2,14,-1,14,18,9,-1,3,10,19,-1,19,15,3,-1,10,8,17,-1,17,19,10,-1,20,2,9,-1,9,21,20,-1,5,2,20,-1,21,9,18,-1,18,22,21,-1]
Coordinate913 = x3d.Coordinate()

IndexedFaceSet912.coord = Coordinate913
TextureCoordinate914 = x3d.TextureCoordinate()

IndexedFaceSet912.texCoord = TextureCoordinate914

Shape908.geometry = IndexedFaceSet912

HAnimSegment907.children.append(Shape908)
HAnimSite915 = x3d.HAnimSite()
HAnimSite915.DEF = "l_eyebrow_Sites"
"""(l_eyebrow_tip x y z)"""

HAnimSegment907.children.append(HAnimSite915)

HAnimJoint906.children.append(HAnimSegment907)

HAnimJoint856.children.append(HAnimJoint906)
HAnimJoint916 = x3d.HAnimJoint()
HAnimJoint916.name = "r_eyebrow_joint"
HAnimJoint916.DEF = "hanim_r_eyebrow_joint"
HAnimJoint916.center = [-0.021748502,1.4139,0.1069425]
HAnimJoint916.ulimit = [0,0,0]
HAnimJoint916.llimit = [0,0,0]
HAnimSegment917 = x3d.HAnimSegment()
HAnimSegment917.name = "r_eyebrow"
HAnimSegment917.DEF = "hanim_r_eyebrow"
Shape918 = x3d.Shape()
Shape918.DEF = "r_eyebrow_Shape"
Appearance919 = x3d.Appearance()
Material920 = x3d.Material()
Material920.USE = "SurfaceDefault"

Appearance919.material = Material920
ImageTexture921 = x3d.ImageTexture()
ImageTexture921.USE = "JinLOA4TextureAtlas"

Appearance919.texture = ImageTexture921

Shape918.appearance = Appearance919
IndexedFaceSet922 = x3d.IndexedFaceSet()
IndexedFaceSet922.coordIndex = [2,7,21,-1,21,20,2,-1,4,10,8,-1,8,3,4,-1,3,8,7,-1,7,2,3,-1,2,20,5,-1,5,1,2,-1,4,3,6,-1,3,2,1,-1,1,6,3,-1,5,14,12,-1,12,1,5,-1,0,11,14,-1,14,5,0,-1,6,15,13,-1,13,4,6,-1,1,12,15,-1,15,6,1,-1,8,17,16,-1,16,7,8,-1,21,7,16,-1,16,22,21,-1,9,18,11,-1,11,0,9,-1,4,13,19,-1,19,10,4,-1,10,19,17,-1,17,8,10,-1,20,21,9,-1,9,0,20,-1,5,20,0,-1,21,22,18,-1,18,9,21,-1]
IndexedFaceSet922.creaseAngle = 3.14159
IndexedFaceSet922.texCoordIndex = [0,7,21,-1,21,20,0,-1,3,10,8,-1,8,1,3,-1,1,8,7,-1,7,0,1,-1,0,20,5,-1,5,4,0,-1,3,1,6,-1,1,0,4,-1,4,6,1,-1,5,12,11,-1,11,4,5,-1,2,14,12,-1,12,5,2,-1,6,16,15,-1,15,3,6,-1,4,11,16,-1,16,6,4,-1,8,17,13,-1,13,7,8,-1,21,7,13,-1,13,22,21,-1,9,18,14,-1,14,2,9,-1,3,15,19,-1,19,10,3,-1,10,19,17,-1,17,8,10,-1,20,21,9,-1,9,2,20,-1,5,20,2,-1,21,22,18,-1,18,9,21,-1]
Coordinate923 = x3d.Coordinate()

IndexedFaceSet922.coord = Coordinate923
TextureCoordinate924 = x3d.TextureCoordinate()

IndexedFaceSet922.texCoord = TextureCoordinate924

Shape918.geometry = IndexedFaceSet922

HAnimSegment917.children.append(Shape918)
HAnimSite925 = x3d.HAnimSite()
HAnimSite925.DEF = "r_eyebrow_Sites"
"""(r_eyebrow_tip x y z)"""

HAnimSegment917.children.append(HAnimSite925)

HAnimJoint916.children.append(HAnimSegment917)

HAnimJoint856.children.append(HAnimJoint916)
HAnimJoint926 = x3d.HAnimJoint()
HAnimJoint926.name = "temporomandibular"
HAnimJoint926.DEF = "hanim_temporomandibular"
HAnimJoint926.center = [0,1.312875,0.015378751]
HAnimJoint926.ulimit = [0,0,0]
HAnimJoint926.llimit = [0,0,0]
HAnimSegment927 = x3d.HAnimSegment()
HAnimSegment927.name = "jaw"
HAnimSegment927.DEF = "hanim_jaw"
Shape928 = x3d.Shape()
Shape928.DEF = "jaw_Shape"
Appearance929 = x3d.Appearance()
Material930 = x3d.Material()
Material930.USE = "SurfaceDefault"

Appearance929.material = Material930
ImageTexture931 = x3d.ImageTexture()
ImageTexture931.USE = "JinLOA4TextureAtlas"

Appearance929.texture = ImageTexture931

Shape928.appearance = Appearance929
IndexedFaceSet932 = x3d.IndexedFaceSet()
IndexedFaceSet932.coordIndex = [0,2,12,-1,13,3,15,-1,3,13,4,-1,4,13,12,-1,4,12,2,-1,1,0,18,-1,18,9,1,-1,4,2,10,-1,10,6,8,-1,4,10,8,-1,3,7,24,-1,24,15,3,-1,4,8,7,-1,7,3,4,-1,5,26,24,-1,24,7,5,-1,8,6,5,-1,5,7,8,-1,0,1,2,-1,2,1,9,-1,9,10,2,-1,0,12,11,-1,13,15,14,-1,14,16,13,-1,16,12,13,-1,16,11,12,-1,17,19,18,-1,18,0,17,-1,22,21,20,-1,16,22,20,-1,16,20,11,-1,14,15,24,-1,24,23,14,-1,16,14,23,-1,23,22,16,-1,25,23,24,-1,24,26,25,-1,22,23,25,-1,25,21,22,-1,0,11,17,-1,11,20,19,-1,19,17,11,-1]
IndexedFaceSet932.creaseAngle = 3.14159
IndexedFaceSet932.texCoordIndex = [0,2,3,-1,4,5,6,-1,5,4,7,-1,7,4,3,-1,7,3,2,-1,1,0,0,-1,0,8,1,-1,7,2,2,-1,2,9,16,-1,7,2,16,-1,5,13,14,-1,14,6,5,-1,7,15,13,-1,13,5,7,-1,11,12,17,-1,17,10,11,-1,18,19,11,-1,11,10,18,-1,0,20,2,-1,2,20,21,-1,21,2,2,-1,0,22,2,-1,23,25,24,-1,24,26,23,-1,26,22,23,-1,26,2,22,-1,27,28,0,-1,0,0,27,-1,30,29,2,-1,26,30,2,-1,26,2,2,-1,24,25,32,-1,32,31,24,-1,26,24,31,-1,31,33,26,-1,35,34,37,-1,37,36,35,-1,38,34,35,-1,35,39,38,-1,0,2,40,-1,2,2,41,-1,41,40,2,-1]
Coordinate933 = x3d.Coordinate()

IndexedFaceSet932.coord = Coordinate933
TextureCoordinate934 = x3d.TextureCoordinate()

IndexedFaceSet932.texCoord = TextureCoordinate934

Shape928.geometry = IndexedFaceSet932

HAnimSegment927.children.append(Shape928)
HAnimSite935 = x3d.HAnimSite()
HAnimSite935.DEF = "jaw_Sites"
"""(r_gonion -0.0520 1.5529 0.0347) (l_gonion 0.0631 1.5530 0.0330) (supramenton 0.0061 1.5410 0.0805) (menton x y z)"""

HAnimSegment927.children.append(HAnimSite935)

HAnimJoint926.children.append(HAnimSegment927)

HAnimJoint856.children.append(HAnimJoint926)

HAnimJoint846.children.append(HAnimJoint856)

HAnimJoint836.children.append(HAnimJoint846)

HAnimJoint826.children.append(HAnimJoint836)

HAnimJoint816.children.append(HAnimJoint826)

HAnimJoint806.children.append(HAnimJoint816)

HAnimJoint796.children.append(HAnimJoint806)

HAnimJoint786.children.append(HAnimJoint796)

HAnimJoint776.children.append(HAnimJoint786)
HAnimJoint936 = x3d.HAnimJoint()
HAnimJoint936.name = "l_sternoclavicular"
HAnimJoint936.DEF = "hanim_l_sternoclavicular"
HAnimJoint936.center = [0.038475003,1.2087001,-0.013785751]
HAnimJoint936.ulimit = [0,0,0]
HAnimJoint936.llimit = [0,0,0]
HAnimSegment937 = x3d.HAnimSegment()
HAnimSegment937.name = "l_clavicle"
HAnimSegment937.DEF = "hanim_l_clavicle"
Shape938 = x3d.Shape()
Shape938.DEF = "l_clavicle_Shape"
Appearance939 = x3d.Appearance()
Material940 = x3d.Material()
Material940.USE = "SurfaceDefault"

Appearance939.material = Material940
ImageTexture941 = x3d.ImageTexture()
ImageTexture941.USE = "JinLOA4TextureAtlas"

Appearance939.texture = ImageTexture941

Shape938.appearance = Appearance939
IndexedFaceSet942 = x3d.IndexedFaceSet()
IndexedFaceSet942.coordIndex = [9,6,1,-1,1,0,9,-1,6,5,2,-1,2,1,6,-1,8,3,2,-1,2,5,8,-1,8,7,4,-1,4,3,8,-1,9,0,4,-1,4,7,9,-1,2,3,4,-1,2,4,0,-1,1,2,0,-1,13,14,10,-1,12,13,10,-1,11,12,10,-1,6,9,11,-1,11,10,6,-1,9,7,12,-1,12,11,9,-1,7,8,13,-1,13,12,7,-1,8,5,14,-1,14,13,8,-1,5,6,10,-1,10,14,5,-1]
IndexedFaceSet942.creaseAngle = 3.14159
IndexedFaceSet942.texCoordIndex = [9,6,1,-1,1,0,9,-1,6,5,2,-1,2,1,6,-1,8,3,2,-1,2,5,8,-1,8,7,4,-1,4,3,8,-1,9,0,4,-1,4,7,9,-1,2,3,4,-1,2,4,0,-1,1,2,0,-1,13,14,10,-1,12,13,10,-1,11,12,10,-1,6,9,11,-1,11,10,6,-1,9,7,12,-1,12,11,9,-1,7,8,13,-1,13,12,7,-1,8,5,14,-1,14,13,8,-1,5,6,10,-1,10,14,5,-1]
Coordinate943 = x3d.Coordinate()

IndexedFaceSet942.coord = Coordinate943
TextureCoordinate944 = x3d.TextureCoordinate()

IndexedFaceSet942.texCoord = TextureCoordinate944

Shape938.geometry = IndexedFaceSet942

HAnimSegment937.children.append(Shape938)
HAnimSite945 = x3d.HAnimSite()
HAnimSite945.DEF = "l_clavicle_Sites"
"""(l_clavicale 0.0271 1.4943 0.0394)"""

HAnimSegment937.children.append(HAnimSite945)

HAnimJoint936.children.append(HAnimSegment937)
HAnimJoint946 = x3d.HAnimJoint()
HAnimJoint946.name = "l_acromioclavicular"
HAnimJoint946.DEF = "hanim_l_acromioclavicular"
HAnimJoint946.center = [0.12294001,1.191825,-0.012897001]
HAnimJoint946.ulimit = [0,0,0]
HAnimJoint946.llimit = [0,0,0]
HAnimSegment947 = x3d.HAnimSegment()
HAnimSegment947.name = "l_scapula"
HAnimSegment947.DEF = "hanim_l_scapula"
Shape948 = x3d.Shape()
Shape948.DEF = "l_scapula_Shape"
Appearance949 = x3d.Appearance()
Material950 = x3d.Material()
Material950.USE = "SurfaceDefault"

Appearance949.material = Material950
ImageTexture951 = x3d.ImageTexture()
ImageTexture951.USE = "JinLOA4TextureAtlas"

Appearance949.texture = ImageTexture951

Shape948.appearance = Appearance949
IndexedFaceSet952 = x3d.IndexedFaceSet()
IndexedFaceSet952.coordIndex = [5,4,0,-1,0,1,5,-1,4,3,2,-1,2,0,4,-1,3,9,6,-1,6,2,3,-1,7,5,1,-1,1,8,7,-1,6,8,0,-1,0,2,6,-1,0,8,1,-1,9,7,8,-1,8,6,9,-1,4,5,11,-1,11,10,4,-1,5,7,12,-1,12,11,5,-1,7,9,13,-1,13,12,7,-1,9,3,14,-1,14,13,9,-1,3,4,10,-1,10,14,3,-1,10,11,15,-1,11,12,15,-1,12,13,15,-1,13,14,15,-1,14,10,15,-1]
IndexedFaceSet952.creaseAngle = 3.14159
IndexedFaceSet952.texCoordIndex = [5,4,0,-1,0,1,5,-1,4,3,2,-1,2,0,4,-1,3,8,6,-1,6,2,3,-1,9,5,1,-1,1,7,9,-1,6,7,0,-1,0,2,6,-1,0,7,1,-1,12,13,11,-1,11,10,12,-1,4,5,15,-1,15,14,4,-1,5,9,16,-1,16,15,5,-1,13,12,17,-1,17,16,13,-1,8,3,18,-1,18,17,8,-1,3,4,14,-1,14,18,3,-1,14,15,19,-1,15,16,19,-1,16,17,19,-1,17,18,19,-1,18,14,19,-1]
Coordinate953 = x3d.Coordinate()

IndexedFaceSet952.coord = Coordinate953
TextureCoordinate954 = x3d.TextureCoordinate()

IndexedFaceSet952.texCoord = TextureCoordinate954

Shape948.geometry = IndexedFaceSet952

HAnimSegment947.children.append(Shape948)
HAnimSite955 = x3d.HAnimSite()
HAnimSite955.DEF = "l_scapula_Sites"
"""(l_acromion 0.2032 1.4760 -0.0490) (l_axilla_proximal 0.1777 1.4065 -0.0075) (l_axilla_distal 0.1706 1.4072 -0.0875) (l_axilla_posterior_folds x y z)"""

HAnimSegment947.children.append(HAnimSite955)

HAnimJoint946.children.append(HAnimSegment947)
HAnimJoint956 = x3d.HAnimJoint()
HAnimJoint956.name = "l_shoulder"
HAnimJoint956.DEF = "hanim_l_shoulder"
HAnimJoint956.center = [0.16506,1.1785501,-0.0032670002]
HAnimJoint956.ulimit = [0,0,0]
HAnimJoint956.llimit = [0,0,0]
HAnimSegment957 = x3d.HAnimSegment()
HAnimSegment957.name = "l_upperarm"
HAnimSegment957.DEF = "hanim_l_upperarm"
Shape958 = x3d.Shape()
Shape958.DEF = "l_upperarm_Shape"
Appearance959 = x3d.Appearance()
Material960 = x3d.Material()
Material960.USE = "SurfaceDefault"

Appearance959.material = Material960
ImageTexture961 = x3d.ImageTexture()
ImageTexture961.USE = "JinLOA4TextureAtlas"

Appearance959.texture = ImageTexture961

Shape958.appearance = Appearance959
IndexedFaceSet962 = x3d.IndexedFaceSet()
IndexedFaceSet962.coordIndex = [2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,36,37,38,-1,35,36,38,-1,39,35,38,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1,26,25,40,-1,40,41,26,-1,27,26,41,-1,41,42,27,-1,28,27,42,-1,42,43,28,-1,29,28,43,-1,43,44,29,-1,25,29,44,-1,44,40,25,-1,31,30,25,-1,25,26,31,-1,32,31,26,-1,26,27,32,-1,33,32,27,-1,27,28,33,-1,34,33,28,-1,28,29,34,-1,30,34,29,-1,29,25,30,-1,36,35,30,-1,30,31,36,-1,37,36,31,-1,31,32,37,-1,38,37,32,-1,32,33,38,-1,39,38,33,-1,33,34,39,-1,35,39,34,-1,34,30,35,-1]
IndexedFaceSet962.creaseAngle = 3.14159
IndexedFaceSet962.texCoordIndex = [2,0,1,-1,3,2,1,-1,55,3,1,-1,1,0,5,-1,5,6,1,-1,0,2,7,-1,7,5,0,-1,2,3,8,-1,8,7,2,-1,25,4,9,-1,9,26,25,-1,4,1,6,-1,6,9,4,-1,6,5,10,-1,10,11,6,-1,5,7,12,-1,12,10,5,-1,7,8,13,-1,13,12,7,-1,27,9,14,-1,14,28,27,-1,9,6,11,-1,11,14,9,-1,11,10,15,-1,15,16,11,-1,10,12,17,-1,17,15,10,-1,12,13,18,-1,18,17,12,-1,29,14,19,-1,19,30,29,-1,14,11,16,-1,16,19,14,-1,49,35,36,-1,48,49,36,-1,37,48,36,-1,20,21,16,-1,16,15,20,-1,22,20,15,-1,15,17,22,-1,23,22,17,-1,17,18,23,-1,24,32,31,-1,31,19,24,-1,21,24,19,-1,19,16,21,-1,38,39,56,-1,56,57,38,-1,40,50,58,-1,58,59,40,-1,41,40,59,-1,59,60,41,-1,42,41,60,-1,60,61,42,-1,39,42,61,-1,61,56,39,-1,43,44,39,-1,39,38,43,-1,45,52,51,-1,51,40,45,-1,46,45,40,-1,40,41,46,-1,47,46,41,-1,41,42,47,-1,44,47,42,-1,42,39,44,-1,34,33,44,-1,44,43,34,-1,35,54,53,-1,53,45,35,-1,36,35,45,-1,45,46,36,-1,37,36,46,-1,46,47,37,-1,33,37,47,-1,47,44,33,-1]
Coordinate963 = x3d.Coordinate()

IndexedFaceSet962.coord = Coordinate963
TextureCoordinate964 = x3d.TextureCoordinate()

IndexedFaceSet962.texCoord = TextureCoordinate964

Shape958.geometry = IndexedFaceSet962

HAnimSegment957.children.append(Shape958)
HAnimSite965 = x3d.HAnimSite()
HAnimSite965.DEF = "l_upperarm_Sites"
"""(l_humeral_lateral_epicondyles 0.2280 1.1482 -0.1100) (l_humeral_medial_epicondyles 0.1735 1.1272 -0.1113) (l_radiale 0.2182 1.1212 -0.1167) (l_bideltoid x y z)"""

HAnimSegment957.children.append(HAnimSite965)

HAnimJoint956.children.append(HAnimSegment957)
HAnimJoint966 = x3d.HAnimJoint()
HAnimJoint966.name = "l_elbow"
HAnimJoint966.DEF = "hanim_l_elbow"
HAnimJoint966.center = [0.18209252,0.9288,-0.0056295004]
HAnimJoint966.ulimit = [0,0,0]
HAnimJoint966.llimit = [0,0,0]
HAnimSegment967 = x3d.HAnimSegment()
HAnimSegment967.name = "l_forearm"
HAnimSegment967.DEF = "hanim_l_forearm"
Shape968 = x3d.Shape()
Shape968.DEF = "l_forearm_Shape"
Appearance969 = x3d.Appearance()
Material970 = x3d.Material()
Material970.USE = "SurfaceDefault"

Appearance969.material = Material970
ImageTexture971 = x3d.ImageTexture()
ImageTexture971.USE = "JinLOA4TextureAtlas"

Appearance969.texture = ImageTexture971

Shape968.appearance = Appearance969
IndexedFaceSet972 = x3d.IndexedFaceSet()
IndexedFaceSet972.coordIndex = [2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,21,22,23,-1,20,21,23,-1,24,20,23,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1]
IndexedFaceSet972.creaseAngle = 3.14159
IndexedFaceSet972.texCoordIndex = [2,3,4,-1,1,2,4,-1,0,1,4,-1,4,3,5,-1,5,6,4,-1,3,2,7,-1,7,5,3,-1,2,1,8,-1,8,7,2,-1,1,0,9,-1,9,8,1,-1,0,4,6,-1,6,9,0,-1,6,5,10,-1,10,11,6,-1,5,7,12,-1,12,10,5,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,6,11,-1,11,14,9,-1,11,10,15,-1,15,16,11,-1,10,12,17,-1,17,15,10,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,11,16,-1,16,19,14,-1,22,23,24,-1,21,22,24,-1,20,21,24,-1,22,21,16,-1,16,15,22,-1,23,22,15,-1,15,17,23,-1,24,23,17,-1,17,18,24,-1,20,24,18,-1,18,19,20,-1,21,20,19,-1,19,16,21,-1]
Coordinate973 = x3d.Coordinate()

IndexedFaceSet972.coord = Coordinate973
TextureCoordinate974 = x3d.TextureCoordinate()

IndexedFaceSet972.texCoord = TextureCoordinate974

Shape968.geometry = IndexedFaceSet972

HAnimSegment967.children.append(Shape968)
HAnimSite975 = x3d.HAnimSite()
HAnimSite975.DEF = "l_forearm_Sites"
"""(l_radial_styloid 0.1901 0.8645 -0.0415) (l_olecranon -0.1962 1.1375 -0.1123)"""

HAnimSegment967.children.append(HAnimSite975)

HAnimJoint966.children.append(HAnimSegment967)
HAnimJoint976 = x3d.HAnimJoint()
HAnimJoint976.name = "l_radiocarpal"
HAnimJoint976.DEF = "hanim_l_radiocarpal"
HAnimJoint976.center = [0.18193501,0.724275,-0.00502425]
HAnimJoint976.ulimit = [0,0,0]
HAnimJoint976.llimit = [0,0,0]
HAnimSegment977 = x3d.HAnimSegment()
HAnimSegment977.name = "l_carpal"
HAnimSegment977.DEF = "hanim_l_carpal"
Shape978 = x3d.Shape()
Shape978.DEF = "l_carpal_Shape"
Appearance979 = x3d.Appearance()
Material980 = x3d.Material()
Material980.USE = "SurfaceDefault"

Appearance979.material = Material980
ImageTexture981 = x3d.ImageTexture()
ImageTexture981.USE = "JinLOA4TextureAtlas"

Appearance979.texture = ImageTexture981

Shape978.appearance = Appearance979
IndexedFaceSet982 = x3d.IndexedFaceSet()
IndexedFaceSet982.coordIndex = [0,1,12,-1,12,11,0,-1,1,2,13,-1,13,12,1,-1,2,17,10,-1,10,13,2,-1,3,4,8,-1,8,16,3,-1,5,19,21,-1,21,20,5,-1,6,14,15,-1,15,18,6,-1,6,7,9,-1,9,14,6,-1,7,0,11,-1,11,9,7,-1,15,19,5,-1,5,18,15,-1,10,17,3,-1,3,16,10,-1,4,20,21,-1,21,8,4,-1,0,22,1,-1,1,22,2,-1,2,22,17,-1,17,22,3,-1,3,22,4,-1,4,22,20,-1,20,22,5,-1,5,22,18,-1,18,22,6,-1,6,22,7,-1,7,22,0,-1,16,23,24,-1,24,10,16,-1,10,24,25,-1,25,13,10,-1,13,25,26,-1,26,12,13,-1,12,26,27,-1,27,11,12,-1,11,27,28,-1,28,9,11,-1,9,28,29,-1,29,14,9,-1,14,29,30,-1,30,15,14,-1,15,30,31,-1,31,19,15,-1,19,31,32,-1,32,21,19,-1,21,32,33,-1,33,8,21,-1,8,33,23,-1,23,16,8,-1,23,34,24,-1,24,34,25,-1,25,34,26,-1,26,34,27,-1,27,34,28,-1,28,34,29,-1,29,34,30,-1,30,34,31,-1,31,34,32,-1,32,34,33,-1,33,34,23,-1]
IndexedFaceSet982.creaseAngle = 3.14159
IndexedFaceSet982.texCoordIndex = [2,1,0,-1,0,3,2,-1,1,5,4,-1,4,0,1,-1,5,6,7,-1,7,4,5,-1,10,9,8,-1,8,11,10,-1,12,15,38,-1,38,37,12,-1,17,16,19,-1,19,18,17,-1,17,21,20,-1,20,16,17,-1,21,35,36,-1,36,20,21,-1,19,15,12,-1,12,18,19,-1,7,6,10,-1,10,11,7,-1,9,13,14,-1,14,8,9,-1,2,22,1,-1,1,22,5,-1,5,22,6,-1,6,22,10,-1,10,22,9,-1,9,22,13,-1,37,39,12,-1,12,39,18,-1,18,39,17,-1,17,39,21,-1,21,39,35,-1,11,24,23,-1,23,7,11,-1,7,23,25,-1,25,4,7,-1,4,25,26,-1,26,0,4,-1,0,26,27,-1,27,3,0,-1,36,40,28,-1,28,20,36,-1,20,28,29,-1,29,16,20,-1,16,29,30,-1,30,19,16,-1,19,30,31,-1,31,15,19,-1,15,31,41,-1,41,38,15,-1,14,32,33,-1,33,8,14,-1,8,33,24,-1,24,11,8,-1,24,34,23,-1,23,34,25,-1,25,34,26,-1,26,34,27,-1,40,42,28,-1,28,42,29,-1,29,42,30,-1,30,42,31,-1,31,42,41,-1,32,34,33,-1,33,34,24,-1]
Coordinate983 = x3d.Coordinate()

IndexedFaceSet982.coord = Coordinate983
TextureCoordinate984 = x3d.TextureCoordinate()

IndexedFaceSet982.texCoord = TextureCoordinate984

Shape978.geometry = IndexedFaceSet982

HAnimSegment977.children.append(Shape978)
HAnimSite985 = x3d.HAnimSite()
HAnimSite985.DEF = "l_carpal_Sites"
"""(l_ulnar_styloid -0.2142 0.8529 -0.0648)"""

HAnimSegment977.children.append(HAnimSite985)

HAnimJoint976.children.append(HAnimSegment977)
HAnimJoint986 = x3d.HAnimJoint()
HAnimJoint986.name = "l_midcarpal_1"
HAnimJoint986.DEF = "hanim_l_midcarpal_1"
HAnimJoint986.center = [0.1812825,0.70605004,0.0193275]
HAnimJoint986.ulimit = [0,0,0]
HAnimJoint986.llimit = [0,0,0]
HAnimSegment987 = x3d.HAnimSegment()
HAnimSegment987.name = "l_trapezium"
HAnimSegment987.DEF = "hanim_l_trapezium"
Shape988 = x3d.Shape()
Shape988.DEF = "l_trapezium_Shape"
Appearance989 = x3d.Appearance()
Material990 = x3d.Material()
Material990.USE = "SurfaceDefault"

Appearance989.material = Material990
ImageTexture991 = x3d.ImageTexture()
ImageTexture991.USE = "JinLOA4TextureAtlas"

Appearance989.texture = ImageTexture991

Shape988.appearance = Appearance989
IndexedFaceSet992 = x3d.IndexedFaceSet()
IndexedFaceSet992.coordIndex = [6,5,3,-1,3,0,6,-1,5,8,2,-1,2,3,5,-1,1,4,7,-1,2,8,7,-1,7,4,2,-1,14,17,16,-1,16,15,14,-1,9,13,10,-1,10,13,12,-1,12,11,10,-1,1,9,10,-1,10,4,1,-1,4,10,11,-1,11,2,4,-1,2,11,12,-1,12,3,2,-1,3,12,13,-1,13,0,3,-1,6,14,15,-1,15,5,6,-1,5,15,16,-1,16,8,5,-1,8,16,17,-1,17,7,8,-1,20,21,22,-1,22,23,24,-1,24,25,18,-1,22,24,18,-1,20,22,18,-1,19,20,18,-1,6,0,19,-1,19,18,6,-1,0,13,20,-1,20,19,0,-1,13,9,21,-1,21,20,13,-1,9,1,22,-1,22,21,9,-1,1,7,23,-1,23,22,1,-1,7,17,24,-1,24,23,7,-1,17,14,25,-1,25,24,17,-1,14,6,18,-1,18,25,14,-1]
IndexedFaceSet992.creaseAngle = 3.14159
IndexedFaceSet992.texCoordIndex = [0,3,2,-1,2,1,0,-1,3,5,4,-1,4,2,3,-1,7,8,6,-1,18,19,6,-1,6,8,18,-1,21,12,23,-1,23,22,21,-1,9,10,15,-1,15,10,17,-1,17,16,15,-1,7,20,24,-1,24,8,7,-1,8,24,25,-1,25,18,8,-1,4,16,17,-1,17,2,4,-1,2,17,10,-1,10,1,2,-1,0,11,13,-1,13,3,0,-1,3,13,14,-1,14,5,3,-1,19,23,12,-1,12,6,19,-1,28,29,30,-1,30,31,32,-1,32,33,26,-1,30,32,26,-1,28,30,26,-1,27,28,26,-1,0,1,27,-1,27,26,0,-1,1,10,28,-1,28,27,1,-1,10,9,29,-1,29,28,10,-1,20,7,30,-1,30,29,20,-1,7,6,31,-1,31,30,7,-1,6,12,32,-1,32,31,6,-1,12,21,33,-1,33,32,12,-1,11,0,26,-1,26,33,11,-1]
Coordinate993 = x3d.Coordinate()

IndexedFaceSet992.coord = Coordinate993
TextureCoordinate994 = x3d.TextureCoordinate()

IndexedFaceSet992.texCoord = TextureCoordinate994

Shape988.geometry = IndexedFaceSet992

HAnimSegment987.children.append(Shape988)
HAnimSite995 = x3d.HAnimSite()
HAnimSite995.DEF = "l_trapezium_Sites"
"""None"""

HAnimSegment987.children.append(HAnimSite995)

HAnimJoint986.children.append(HAnimSegment987)
HAnimJoint996 = x3d.HAnimJoint()
HAnimJoint996.name = "l_carpometacarpal_1"
HAnimJoint996.DEF = "hanim_l_carpometacarpal_1"
HAnimJoint996.center = [0.18049501,0.69255006,0.0259875]
HAnimJoint996.ulimit = [0,0,0]
HAnimJoint996.llimit = [0,0,0]
HAnimSegment997 = x3d.HAnimSegment()
HAnimSegment997.name = "l_metacarpal_1"
HAnimSegment997.DEF = "hanim_l_metacarpal_1"
Shape998 = x3d.Shape()
Shape998.DEF = "l_metacarpal_1_Shape"
Appearance999 = x3d.Appearance()
Material1000 = x3d.Material()
Material1000.USE = "SurfaceDefault"

Appearance999.material = Material1000
ImageTexture1001 = x3d.ImageTexture()
ImageTexture1001.USE = "JinLOA4TextureAtlas"

Appearance999.texture = ImageTexture1001

Shape998.appearance = Appearance999
IndexedFaceSet1002 = x3d.IndexedFaceSet()
IndexedFaceSet1002.coordIndex = [1,2,9,-1,9,8,1,-1,8,10,0,-1,0,1,8,-1,2,3,6,-1,6,9,2,-1,0,10,7,-1,7,4,0,-1,5,6,3,-1,22,21,25,-1,22,25,24,-1,23,22,24,-1,19,18,17,-1,17,20,19,-1,13,12,11,-1,11,14,13,-1,14,11,16,-1,16,15,14,-1,3,11,12,-1,12,5,3,-1,5,12,13,-1,13,4,5,-1,4,13,14,-1,14,0,4,-1,0,14,15,-1,15,1,0,-1,1,15,16,-1,16,2,1,-1,2,16,11,-1,11,3,2,-1,7,17,18,-1,18,4,7,-1,4,18,19,-1,19,5,4,-1,5,19,20,-1,20,6,5,-1,6,20,17,-1,17,7,6,-1,10,21,22,-1,22,7,10,-1,7,22,23,-1,23,6,7,-1,6,23,24,-1,24,9,6,-1,9,24,25,-1,25,8,9,-1,8,25,21,-1,21,10,8,-1]
IndexedFaceSet1002.creaseAngle = 3.14159
IndexedFaceSet1002.texCoordIndex = [0,3,2,-1,2,1,0,-1,27,4,28,-1,28,26,27,-1,3,6,7,-1,7,2,3,-1,28,4,30,-1,30,29,28,-1,10,7,6,-1,15,14,13,-1,15,13,12,-1,11,15,12,-1,16,19,18,-1,18,17,16,-1,20,23,22,-1,22,21,20,-1,21,22,25,-1,25,24,21,-1,6,22,23,-1,23,10,6,-1,10,23,20,-1,20,8,10,-1,8,20,21,-1,21,5,8,-1,5,21,24,-1,24,0,5,-1,0,24,25,-1,25,3,0,-1,3,25,22,-1,22,6,3,-1,30,34,35,-1,35,29,30,-1,8,19,16,-1,16,10,8,-1,10,16,17,-1,17,7,10,-1,7,17,18,-1,18,9,7,-1,4,32,33,-1,33,30,4,-1,9,15,11,-1,11,7,9,-1,7,11,12,-1,12,2,7,-1,2,12,13,-1,13,1,2,-1,27,31,32,-1,32,4,27,-1]
Coordinate1003 = x3d.Coordinate()

IndexedFaceSet1002.coord = Coordinate1003
TextureCoordinate1004 = x3d.TextureCoordinate()

IndexedFaceSet1002.texCoord = TextureCoordinate1004

Shape998.geometry = IndexedFaceSet1002

HAnimSegment997.children.append(Shape998)
HAnimSite1005 = x3d.HAnimSite()
HAnimSite1005.DEF = "l_metacarpal_1_Sites"
"""(l_metacarpal_phalanx_2 0.2009 0.8139 -0.0237)"""

HAnimSegment997.children.append(HAnimSite1005)

HAnimJoint996.children.append(HAnimSegment997)
HAnimJoint1006 = x3d.HAnimJoint()
HAnimJoint1006.name = "l_metacarpophalangeal_1"
HAnimJoint1006.DEF = "hanim_l_metacarpophalangeal_1"
HAnimJoint1006.center = [0.181035,0.67275,0.035775002]
HAnimJoint1006.ulimit = [0,0,0]
HAnimJoint1006.llimit = [0,0,0]
HAnimSegment1007 = x3d.HAnimSegment()
HAnimSegment1007.name = "l_carpal_proximal_phalanx_1"
HAnimSegment1007.DEF = "hanim_l_carpal_proximal_phalanx_1"
Shape1008 = x3d.Shape()
Shape1008.DEF = "l_carpal_proximal_phalanx_1_Shape"
Appearance1009 = x3d.Appearance()
Material1010 = x3d.Material()
Material1010.USE = "SurfaceDefault"

Appearance1009.material = Material1010
ImageTexture1011 = x3d.ImageTexture()
ImageTexture1011.USE = "JinLOA4TextureAtlas"

Appearance1009.texture = ImageTexture1011

Shape1008.appearance = Appearance1009
IndexedFaceSet1012 = x3d.IndexedFaceSet()
IndexedFaceSet1012.coordIndex = [5,0,6,-1,7,13,14,-1,14,3,7,-1,5,10,17,-1,17,0,5,-1,4,9,10,-1,10,5,4,-1,3,14,9,-1,9,4,3,-1,0,17,19,-1,19,1,0,-1,1,19,13,-1,13,7,1,-1,1,2,0,-1,0,2,8,-1,8,6,0,-1,9,12,11,-1,11,10,9,-1,13,16,15,-1,15,14,13,-1,10,11,18,-1,18,17,10,-1,19,20,16,-1,16,13,19,-1,17,18,20,-1,20,19,17,-1,14,15,12,-1,12,9,14,-1,15,16,20,-1,20,12,15,-1,11,12,20,-1,20,18,11,-1,26,25,24,-1,24,23,22,-1,26,24,22,-1,21,26,22,-1,28,27,30,-1,30,29,28,-1,8,21,22,-1,22,6,8,-1,6,22,23,-1,23,5,6,-1,5,23,24,-1,24,4,5,-1,4,24,25,-1,25,3,4,-1,3,25,26,-1,26,7,3,-1,27,32,31,-1,31,30,27,-1,7,27,28,-1,28,1,7,-1,1,28,29,-1,29,2,1,-1,2,29,30,-1,30,8,2,-1,8,30,31,-1,31,21,8,-1,21,31,32,-1,32,26,21,-1,26,32,27,-1,27,7,26,-1]
IndexedFaceSet1012.creaseAngle = 3.14159
IndexedFaceSet1012.texCoordIndex = [0,2,1,-1,36,35,34,-1,34,33,36,-1,0,8,7,-1,7,2,0,-1,10,9,8,-1,8,0,10,-1,33,34,37,-1,37,38,33,-1,2,7,12,-1,12,11,2,-1,39,40,35,-1,35,36,39,-1,11,13,2,-1,2,13,14,-1,14,1,2,-1,9,16,15,-1,15,8,9,-1,5,18,17,-1,17,4,5,-1,8,15,19,-1,19,7,8,-1,12,20,18,-1,18,5,12,-1,7,19,20,-1,20,12,7,-1,4,17,16,-1,16,9,4,-1,17,18,20,-1,20,16,17,-1,15,16,20,-1,20,19,15,-1,26,25,24,-1,24,23,22,-1,26,24,22,-1,21,26,22,-1,28,27,30,-1,30,29,28,-1,14,21,22,-1,22,1,14,-1,1,22,23,-1,23,0,1,-1,0,23,24,-1,24,10,0,-1,10,24,25,-1,25,3,10,-1,33,41,42,-1,42,36,33,-1,27,32,31,-1,31,30,27,-1,6,27,28,-1,28,11,6,-1,11,28,29,-1,29,13,11,-1,13,29,30,-1,30,14,13,-1,14,30,31,-1,31,21,14,-1,21,31,32,-1,32,26,21,-1,42,44,43,-1,43,36,42,-1]
Coordinate1013 = x3d.Coordinate()

IndexedFaceSet1012.coord = Coordinate1013
TextureCoordinate1014 = x3d.TextureCoordinate()

IndexedFaceSet1012.texCoord = TextureCoordinate1014

Shape1008.geometry = IndexedFaceSet1012

HAnimSegment1007.children.append(Shape1008)
HAnimSite1015 = x3d.HAnimSite()
HAnimSite1015.DEF = "l_carpal_proximal_phalanx_1_Sites"
"""None"""

HAnimSegment1007.children.append(HAnimSite1015)

HAnimJoint1006.children.append(HAnimSegment1007)
HAnimJoint1016 = x3d.HAnimJoint()
HAnimJoint1016.name = "l_carpal_interphalangeal_1"
HAnimJoint1016.DEF = "hanim_l_carpal_interphalangeal_1"
HAnimJoint1016.center = [0.182655,0.654075,0.0496575]
HAnimJoint1016.ulimit = [0,0,0]
HAnimJoint1016.llimit = [0,0,0]
HAnimSegment1017 = x3d.HAnimSegment()
HAnimSegment1017.name = "l_carpal_distal_phalanx_1"
HAnimSegment1017.DEF = "hanim_l_carpal_distal_phalanx_1"
Shape1018 = x3d.Shape()
Shape1018.DEF = "l_carpal_distal_phalanx_1_Shape"
Appearance1019 = x3d.Appearance()
Material1020 = x3d.Material()
Material1020.USE = "SurfaceDefault"

Appearance1019.material = Material1020
ImageTexture1021 = x3d.ImageTexture()
ImageTexture1021.USE = "JinLOA4TextureAtlas"

Appearance1019.texture = ImageTexture1021

Shape1018.appearance = Appearance1019
IndexedFaceSet1022 = x3d.IndexedFaceSet()
IndexedFaceSet1022.coordIndex = [0,11,28,-1,28,29,0,-1,32,1,17,-1,17,2,32,-1,4,17,1,-1,1,3,4,-1,11,5,31,-1,31,28,11,-1,29,32,2,-1,2,0,29,-1,4,3,31,-1,31,5,4,-1,23,1,32,-1,24,31,3,-1,24,3,1,-1,1,23,24,-1,4,8,7,-1,7,6,4,-1,5,11,10,-1,10,9,5,-1,4,5,9,-1,9,8,4,-1,10,12,14,-1,14,13,10,-1,2,17,16,-1,16,15,2,-1,0,2,15,-1,15,12,0,-1,8,9,18,-1,18,7,8,-1,18,9,10,-1,10,13,18,-1,6,19,21,-1,21,20,6,-1,22,14,21,-1,21,19,22,-1,17,6,20,-1,20,16,17,-1,6,17,4,-1,11,0,12,-1,12,10,11,-1,13,14,22,-1,6,7,18,-1,18,19,6,-1,18,13,22,-1,22,19,18,-1,16,20,21,-1,21,15,16,-1,21,14,12,-1,12,15,21,-1,24,23,26,-1,26,25,24,-1,28,27,30,-1,30,29,28,-1,27,25,26,-1,26,30,27,-1,24,25,27,-1,27,31,24,-1,32,30,26,-1,26,23,32,-1,30,32,29,-1,28,31,27,-1]
IndexedFaceSet1022.creaseAngle = 3.14159
IndexedFaceSet1022.texCoordIndex = [3,2,34,-1,34,33,3,-1,4,7,6,-1,6,5,4,-1,9,6,7,-1,7,8,9,-1,2,38,37,-1,37,34,2,-1,33,35,36,-1,36,3,33,-1,9,8,10,-1,10,11,9,-1,12,7,4,-1,13,10,8,-1,13,8,7,-1,7,12,13,-1,9,16,15,-1,15,14,9,-1,38,2,18,-1,18,39,38,-1,9,11,17,-1,17,16,9,-1,18,19,21,-1,21,20,18,-1,5,6,23,-1,23,22,5,-1,3,36,40,-1,40,19,3,-1,16,17,24,-1,24,15,16,-1,41,39,18,-1,18,20,41,-1,14,25,27,-1,27,26,14,-1,28,21,43,-1,43,42,28,-1,6,14,26,-1,26,23,6,-1,14,6,9,-1,2,3,19,-1,19,18,2,-1,20,21,28,-1,14,15,24,-1,24,25,14,-1,41,20,28,-1,28,42,41,-1,23,26,27,-1,27,22,23,-1,43,21,19,-1,19,40,43,-1,13,12,30,-1,30,29,13,-1,1,31,32,-1,32,0,1,-1,31,29,30,-1,30,32,31,-1,13,29,31,-1,31,10,13,-1,4,32,30,-1,30,12,4,-1,32,4,0,-1,1,10,31,-1]
Coordinate1023 = x3d.Coordinate()

IndexedFaceSet1022.coord = Coordinate1023
TextureCoordinate1024 = x3d.TextureCoordinate()

IndexedFaceSet1022.texCoord = TextureCoordinate1024

Shape1018.geometry = IndexedFaceSet1022

HAnimSegment1017.children.append(Shape1018)
HAnimSite1025 = x3d.HAnimSite()
HAnimSite1025.DEF = "l_carpal_distal_phalanx_1_Sites"
"""(l_carpal_distal_phalanx_1_tip 0.1982 0.8061 0.0759)"""

HAnimSegment1017.children.append(HAnimSite1025)

HAnimJoint1016.children.append(HAnimSegment1017)

HAnimJoint1006.children.append(HAnimJoint1016)

HAnimJoint996.children.append(HAnimJoint1006)

HAnimJoint986.children.append(HAnimJoint996)

HAnimJoint976.children.append(HAnimJoint986)
HAnimJoint1026 = x3d.HAnimJoint()
HAnimJoint1026.name = "l_midcarpal_2"
HAnimJoint1026.DEF = "hanim_l_midcarpal_2"
HAnimJoint1026.center = [0.1812825,0.70695,0.008417251]
HAnimJoint1026.ulimit = [0,0,0]
HAnimJoint1026.llimit = [0,0,0]
HAnimSegment1027 = x3d.HAnimSegment()
HAnimSegment1027.name = "l_trapezoid"
HAnimSegment1027.DEF = "hanim_l_trapezoid"
Shape1028 = x3d.Shape()
Shape1028.DEF = "l_trapezoid_Shape"
Appearance1029 = x3d.Appearance()
Material1030 = x3d.Material()
Material1030.USE = "SurfaceDefault"

Appearance1029.material = Material1030
ImageTexture1031 = x3d.ImageTexture()
ImageTexture1031.USE = "JinLOA4TextureAtlas"

Appearance1029.texture = ImageTexture1031

Shape1028.appearance = Appearance1029
IndexedFaceSet1032 = x3d.IndexedFaceSet()
IndexedFaceSet1032.coordIndex = [14,12,1,-1,1,2,14,-1,0,13,15,-1,15,3,0,-1,11,10,9,-1,9,8,11,-1,4,5,17,-1,17,16,4,-1,18,6,7,-1,7,19,18,-1,0,4,16,-1,16,13,0,-1,12,17,5,-1,5,1,12,-1,1,5,4,-1,4,0,1,-1,2,6,18,-1,18,14,2,-1,15,19,7,-1,7,3,15,-1,3,7,6,-1,6,2,3,-1,3,8,9,-1,9,0,3,-1,0,9,10,-1,10,1,0,-1,1,10,11,-1,11,2,1,-1,2,11,8,-1,8,3,2,-1,22,23,24,-1,24,25,26,-1,26,27,20,-1,24,26,20,-1,22,24,20,-1,21,22,20,-1,12,14,21,-1,21,20,12,-1,14,18,22,-1,22,21,14,-1,18,19,23,-1,23,22,18,-1,19,15,24,-1,24,23,19,-1,15,13,25,-1,25,24,15,-1,13,16,26,-1,26,25,13,-1,16,17,27,-1,27,26,16,-1,17,12,20,-1,20,27,17,-1]
IndexedFaceSet1032.creaseAngle = 3.14159
IndexedFaceSet1032.texCoordIndex = [21,19,1,-1,1,0,21,-1,12,20,22,-1,22,13,12,-1,5,4,7,-1,7,6,5,-1,8,9,25,-1,25,23,8,-1,26,17,18,-1,18,28,26,-1,12,16,24,-1,24,20,12,-1,19,25,9,-1,9,1,19,-1,1,9,8,-1,8,2,1,-1,0,10,27,-1,27,21,0,-1,22,28,18,-1,18,13,22,-1,3,11,10,-1,10,0,3,-1,13,14,15,-1,15,12,13,-1,2,7,4,-1,4,1,2,-1,1,4,5,-1,5,0,1,-1,0,5,6,-1,6,3,0,-1,31,32,33,-1,33,34,35,-1,35,36,29,-1,33,35,29,-1,31,33,29,-1,30,31,29,-1,19,21,30,-1,30,29,19,-1,21,27,31,-1,31,30,21,-1,26,28,32,-1,32,31,26,-1,28,22,33,-1,33,32,28,-1,22,20,34,-1,34,33,22,-1,20,24,35,-1,35,34,20,-1,23,25,36,-1,36,35,23,-1,25,19,29,-1,29,36,25,-1]
Coordinate1033 = x3d.Coordinate()

IndexedFaceSet1032.coord = Coordinate1033
TextureCoordinate1034 = x3d.TextureCoordinate()

IndexedFaceSet1032.texCoord = TextureCoordinate1034

Shape1028.geometry = IndexedFaceSet1032

HAnimSegment1027.children.append(Shape1028)
HAnimSite1035 = x3d.HAnimSite()
HAnimSite1035.DEF = "l_trapezoid_Sites"
"""None"""

HAnimSegment1027.children.append(HAnimSite1035)

HAnimJoint1026.children.append(HAnimSegment1027)
HAnimJoint1036 = x3d.HAnimJoint()
HAnimJoint1036.name = "l_carpometacarpal_2"
HAnimJoint1036.DEF = "hanim_l_carpometacarpal_2"
HAnimJoint1036.center = [0.1812825,0.6876,0.009729]
HAnimJoint1036.ulimit = [0,0,0]
HAnimJoint1036.llimit = [0,0,0]
HAnimSegment1037 = x3d.HAnimSegment()
HAnimSegment1037.name = "l_metacarpal_2"
HAnimSegment1037.DEF = "hanim_l_metacarpal_2"
Shape1038 = x3d.Shape()
Shape1038.DEF = "l_metacarpal_2_Shape"
Appearance1039 = x3d.Appearance()
Material1040 = x3d.Material()
Material1040.USE = "SurfaceDefault"

Appearance1039.material = Material1040
ImageTexture1041 = x3d.ImageTexture()
ImageTexture1041.USE = "JinLOA4TextureAtlas"

Appearance1039.texture = ImageTexture1041

Shape1038.appearance = Appearance1039
IndexedFaceSet1042 = x3d.IndexedFaceSet()
IndexedFaceSet1042.coordIndex = [0,3,8,-1,8,1,0,-1,5,7,3,-1,3,0,5,-1,10,2,4,-1,4,6,10,-1,2,1,8,-1,8,4,2,-1,14,11,6,-1,6,4,14,-1,8,3,17,-1,17,16,8,-1,9,7,12,-1,12,13,9,-1,15,4,8,-1,8,16,15,-1,15,14,4,-1,9,18,17,-1,17,3,9,-1,9,13,18,-1,25,31,30,-1,25,30,27,-1,26,25,27,-1,22,21,20,-1,20,19,22,-1,41,40,39,-1,39,38,41,-1,32,37,36,-1,33,32,36,-1,34,33,36,-1,35,34,36,-1,23,22,19,-1,19,24,23,-1,6,19,20,-1,20,10,6,-1,30,29,28,-1,28,27,30,-1,5,21,22,-1,22,7,5,-1,7,22,23,-1,23,12,7,-1,12,23,24,-1,24,11,12,-1,11,24,19,-1,19,6,11,-1,1,25,26,-1,26,0,1,-1,0,26,27,-1,27,5,0,-1,5,27,28,-1,28,21,5,-1,21,28,29,-1,29,20,21,-1,20,29,30,-1,30,10,20,-1,10,30,31,-1,31,2,10,-1,2,31,25,-1,25,1,2,-1,16,32,33,-1,33,15,16,-1,15,33,34,-1,34,14,15,-1,14,34,35,-1,35,13,14,-1,13,35,36,-1,36,18,13,-1,18,36,37,-1,37,17,18,-1,17,37,32,-1,32,16,17,-1,14,38,39,-1,39,11,14,-1,11,39,40,-1,40,12,11,-1,12,40,41,-1,41,13,12,-1,13,41,38,-1,38,14,13,-1,9,3,7,-1]
IndexedFaceSet1042.creaseAngle = 3.14159
IndexedFaceSet1042.texCoordIndex = [3,2,1,-1,1,0,3,-1,5,4,2,-1,2,3,5,-1,44,46,8,-1,8,45,44,-1,46,42,43,-1,43,8,46,-1,47,48,45,-1,45,8,47,-1,1,2,13,-1,13,12,1,-1,16,4,15,-1,15,14,16,-1,50,8,43,-1,43,49,50,-1,50,47,8,-1,16,18,13,-1,13,2,16,-1,16,14,18,-1,23,22,21,-1,23,21,20,-1,19,23,20,-1,25,24,27,-1,27,26,25,-1,29,28,31,-1,31,30,29,-1,35,34,33,-1,36,35,33,-1,37,36,33,-1,32,37,33,-1,38,25,26,-1,26,39,38,-1,7,26,27,-1,27,6,7,-1,21,41,40,-1,40,20,21,-1,5,24,25,-1,25,4,5,-1,4,25,38,-1,38,15,4,-1,15,38,39,-1,39,11,15,-1,48,56,51,-1,51,45,48,-1,0,23,19,-1,19,3,0,-1,3,19,20,-1,20,5,3,-1,5,20,40,-1,40,24,5,-1,24,40,41,-1,41,27,24,-1,27,41,21,-1,21,6,27,-1,6,21,22,-1,22,9,6,-1,9,22,23,-1,23,0,9,-1,12,35,36,-1,36,17,12,-1,50,54,55,-1,55,47,50,-1,10,37,32,-1,32,14,10,-1,14,32,33,-1,33,18,14,-1,18,33,34,-1,34,13,18,-1,13,34,35,-1,35,12,13,-1,47,52,53,-1,53,48,47,-1,11,31,28,-1,28,15,11,-1,15,28,29,-1,29,14,15,-1,14,29,30,-1,30,10,14,-1,16,2,4,-1]
Coordinate1043 = x3d.Coordinate()

IndexedFaceSet1042.coord = Coordinate1043
TextureCoordinate1044 = x3d.TextureCoordinate()

IndexedFaceSet1042.texCoord = TextureCoordinate1044

Shape1038.geometry = IndexedFaceSet1042

HAnimSegment1037.children.append(Shape1038)
HAnimSite1045 = x3d.HAnimSite()
HAnimSite1045.DEF = "l_metacarpal_2_Sites"
"""None"""

HAnimSegment1037.children.append(HAnimSite1045)

HAnimJoint1036.children.append(HAnimSegment1037)
HAnimJoint1046 = x3d.HAnimJoint()
HAnimJoint1046.name = "l_metacarpophalangeal_2"
HAnimJoint1046.DEF = "hanim_l_metacarpophalangeal_2"
HAnimJoint1046.center = [0.18373501,0.6372,0.015075001]
HAnimJoint1046.ulimit = [0,0,0]
HAnimJoint1046.llimit = [0,0,0]
HAnimSegment1047 = x3d.HAnimSegment()
HAnimSegment1047.name = "l_carpal_proximal_phalanx_2"
HAnimSegment1047.DEF = "hanim_l_carpal_proximal_phalanx_2"
Shape1048 = x3d.Shape()
Shape1048.DEF = "l_carpal_proximal_phalanx_2_Shape"
Appearance1049 = x3d.Appearance()
Material1050 = x3d.Material()
Material1050.USE = "SurfaceDefault"

Appearance1049.material = Material1050
ImageTexture1051 = x3d.ImageTexture()
ImageTexture1051.USE = "JinLOA4TextureAtlas"

Appearance1049.texture = ImageTexture1051

Shape1048.appearance = Appearance1049
IndexedFaceSet1052 = x3d.IndexedFaceSet()
IndexedFaceSet1052.coordIndex = [4,5,18,-1,18,19,4,-1,5,6,21,-1,21,18,5,-1,7,8,20,-1,20,25,7,-1,8,4,19,-1,19,20,8,-1,6,22,21,-1,1,10,8,-1,8,7,1,-1,6,5,11,-1,11,2,6,-1,5,4,0,-1,0,11,5,-1,4,8,10,-1,10,0,4,-1,1,7,9,-1,9,3,1,-1,9,6,2,-1,2,3,9,-1,9,7,23,-1,23,24,9,-1,6,9,24,-1,24,22,6,-1,23,7,25,-1,0,17,15,-1,15,11,0,-1,1,12,14,-1,14,10,1,-1,11,15,13,-1,13,2,11,-1,3,16,12,-1,12,1,3,-1,2,13,16,-1,16,3,2,-1,10,14,17,-1,17,0,10,-1,14,12,16,-1,16,17,14,-1,15,17,16,-1,16,13,15,-1,28,27,26,-1,29,28,26,-1,30,29,26,-1,18,26,27,-1,27,19,18,-1,19,27,28,-1,28,20,19,-1,20,28,29,-1,29,25,20,-1,36,35,34,-1,36,34,33,-1,33,32,31,-1,33,31,37,-1,36,33,37,-1,21,30,26,-1,26,18,21,-1,24,31,32,-1,32,22,24,-1,22,32,33,-1,33,21,22,-1,21,33,34,-1,34,30,21,-1,30,34,35,-1,35,29,30,-1,29,35,36,-1,36,25,29,-1,25,36,37,-1,37,23,25,-1,23,37,31,-1,31,24,23,-1]
IndexedFaceSet1052.creaseAngle = 3.14159
IndexedFaceSet1052.texCoordIndex = [0,3,2,-1,2,1,0,-1,3,5,4,-1,4,2,3,-1,6,9,41,-1,41,40,6,-1,9,38,39,-1,39,41,9,-1,5,10,4,-1,11,12,9,-1,9,6,11,-1,5,3,14,-1,14,13,5,-1,3,0,15,-1,15,14,3,-1,38,9,12,-1,12,42,38,-1,11,6,44,-1,44,43,11,-1,17,5,13,-1,13,16,17,-1,44,6,46,-1,46,45,44,-1,5,17,18,-1,18,10,5,-1,46,6,40,-1,15,21,20,-1,20,14,15,-1,11,23,22,-1,22,12,11,-1,14,20,24,-1,24,13,14,-1,43,48,23,-1,23,11,43,-1,13,24,25,-1,25,16,13,-1,12,22,47,-1,47,42,12,-1,22,23,48,-1,48,47,22,-1,20,21,25,-1,25,24,20,-1,29,28,27,-1,30,29,27,-1,26,30,27,-1,2,27,28,-1,28,1,2,-1,1,28,29,-1,29,8,1,-1,8,29,30,-1,30,7,8,-1,31,37,36,-1,31,36,35,-1,35,34,33,-1,35,33,32,-1,31,35,32,-1,4,26,27,-1,27,2,4,-1,18,33,34,-1,34,10,18,-1,10,34,35,-1,35,4,10,-1,4,35,36,-1,36,26,4,-1,26,36,37,-1,37,30,26,-1,30,37,31,-1,31,7,30,-1,7,31,32,-1,32,19,7,-1,19,32,33,-1,33,18,19,-1]
Coordinate1053 = x3d.Coordinate()

IndexedFaceSet1052.coord = Coordinate1053
TextureCoordinate1054 = x3d.TextureCoordinate()

IndexedFaceSet1052.texCoord = TextureCoordinate1054

Shape1048.geometry = IndexedFaceSet1052

HAnimSegment1047.children.append(Shape1048)
HAnimSite1055 = x3d.HAnimSite()
HAnimSite1055.DEF = "l_carpal_proximal_phalanx_2_Sites"
"""None"""

HAnimSegment1047.children.append(HAnimSite1055)

HAnimJoint1046.children.append(HAnimSegment1047)
HAnimJoint1056 = x3d.HAnimJoint()
HAnimJoint1056.name = "l_carpal_proximal_interphalangeal_2"
HAnimJoint1056.DEF = "hanim_l_carpal_proximal_interphalangeal_2"
HAnimJoint1056.center = [0.18171,0.606825,0.014184001]
HAnimJoint1056.ulimit = [0,0,0]
HAnimJoint1056.llimit = [0,0,0]
HAnimSegment1057 = x3d.HAnimSegment()
HAnimSegment1057.name = "l_carpal_middle_phalanx_2"
HAnimSegment1057.DEF = "hanim_l_carpal_middle_phalanx_2"
Shape1058 = x3d.Shape()
Shape1058.DEF = "l_carpal_middle_phalanx_2_Shape"
Appearance1059 = x3d.Appearance()
Material1060 = x3d.Material()
Material1060.USE = "SurfaceDefault"

Appearance1059.material = Material1060
ImageTexture1061 = x3d.ImageTexture()
ImageTexture1061.USE = "JinLOA4TextureAtlas"

Appearance1059.texture = ImageTexture1061

Shape1058.appearance = Appearance1059
IndexedFaceSet1062 = x3d.IndexedFaceSet()
IndexedFaceSet1062.coordIndex = [1,15,14,-1,14,7,1,-1,8,14,3,-1,1,7,5,-1,5,18,1,-1,3,2,21,-1,21,4,3,-1,6,8,3,-1,3,4,6,-1,6,4,13,-1,0,18,5,-1,5,13,0,-1,13,4,21,-1,21,0,13,-1,2,3,14,-1,14,15,2,-1,8,6,12,-1,12,11,8,-1,7,10,9,-1,9,5,7,-1,10,11,12,-1,12,9,10,-1,8,11,10,-1,10,14,8,-1,13,9,12,-1,12,6,13,-1,9,13,5,-1,7,14,10,-1,15,17,16,-1,16,2,15,-1,18,20,19,-1,19,1,18,-1,2,16,22,-1,22,21,2,-1,0,23,20,-1,20,18,0,-1,21,22,23,-1,23,0,21,-1,1,19,17,-1,17,15,1,-1,19,20,23,-1,23,17,19,-1,16,17,23,-1,23,22,16,-1]
IndexedFaceSet1062.creaseAngle = 3.14159
IndexedFaceSet1062.texCoordIndex = [3,25,24,-1,24,0,3,-1,4,1,5,-1,3,0,7,-1,7,6,3,-1,5,10,9,-1,9,8,5,-1,11,4,5,-1,5,8,11,-1,11,8,12,-1,27,6,7,-1,7,26,27,-1,12,8,9,-1,9,13,12,-1,10,5,1,-1,1,2,10,-1,4,11,15,-1,15,14,4,-1,0,28,29,-1,29,7,0,-1,16,14,15,-1,15,17,16,-1,4,14,16,-1,16,1,4,-1,12,17,15,-1,15,11,12,-1,29,26,7,-1,0,24,28,-1,2,19,18,-1,18,10,2,-1,6,21,20,-1,20,3,6,-1,10,18,22,-1,22,9,10,-1,27,31,21,-1,21,6,27,-1,9,22,23,-1,23,13,9,-1,3,20,30,-1,30,25,3,-1,20,21,31,-1,31,30,20,-1,18,19,23,-1,23,22,18,-1]
Coordinate1063 = x3d.Coordinate()

IndexedFaceSet1062.coord = Coordinate1063
TextureCoordinate1064 = x3d.TextureCoordinate()

IndexedFaceSet1062.texCoord = TextureCoordinate1064

Shape1058.geometry = IndexedFaceSet1062

HAnimSegment1057.children.append(Shape1058)
HAnimSite1065 = x3d.HAnimSite()
HAnimSite1065.DEF = "l_carpal_middle_phalanx_2_Sites"
"""None"""

HAnimSegment1057.children.append(HAnimSite1065)

HAnimJoint1056.children.append(HAnimSegment1057)
HAnimJoint1066 = x3d.HAnimJoint()
HAnimJoint1066.name = "l_carpal_distal_interphalangeal_2"
HAnimJoint1066.DEF = "hanim_l_carpal_distal_interphalangeal_2"
HAnimJoint1066.center = [0.180675,0.58162504,0.013385251]
HAnimJoint1066.ulimit = [0,0,0]
HAnimJoint1066.llimit = [0,0,0]
HAnimSegment1067 = x3d.HAnimSegment()
HAnimSegment1067.name = "l_carpal_distal_phalanx_2"
HAnimSegment1067.DEF = "hanim_l_carpal_distal_phalanx_2"
Shape1068 = x3d.Shape()
Shape1068.DEF = "l_carpal_distal_phalanx_2_Shape"
Appearance1069 = x3d.Appearance()
Material1070 = x3d.Material()
Material1070.USE = "SurfaceDefault"

Appearance1069.material = Material1070
ImageTexture1071 = x3d.ImageTexture()
ImageTexture1071.USE = "JinLOA4TextureAtlas"

Appearance1069.texture = ImageTexture1071

Shape1068.appearance = Appearance1069
IndexedFaceSet1072 = x3d.IndexedFaceSet()
IndexedFaceSet1072.coordIndex = [0,25,31,-1,24,1,32,-1,1,0,2,-1,2,3,1,-1,31,23,4,-1,4,5,31,-1,0,31,5,-1,5,2,0,-1,23,29,6,-1,6,4,23,-1,32,1,3,-1,3,7,32,-1,29,32,7,-1,7,6,29,-1,2,8,17,-1,17,14,2,-1,5,4,10,-1,10,11,5,-1,2,5,11,-1,11,8,2,-1,10,12,18,-1,18,21,10,-1,7,3,9,-1,9,13,7,-1,6,7,13,-1,13,12,6,-1,8,11,19,-1,19,17,8,-1,19,11,10,-1,10,21,19,-1,25,0,1,-1,1,24,25,-1,14,16,22,-1,22,20,14,-1,15,18,22,-1,22,16,15,-1,3,14,20,-1,20,9,3,-1,14,3,2,-1,4,6,12,-1,12,10,4,-1,21,18,15,-1,14,17,19,-1,19,16,14,-1,19,21,15,-1,15,16,19,-1,9,20,22,-1,22,13,9,-1,22,18,12,-1,12,13,22,-1,25,24,27,-1,27,26,25,-1,23,28,30,-1,30,29,23,-1,28,26,27,-1,27,30,28,-1,25,26,28,-1,28,31,25,-1,32,30,27,-1,27,24,32,-1,30,32,29,-1,23,31,28,-1]
IndexedFaceSet1072.creaseAngle = 3.14159
IndexedFaceSet1072.texCoordIndex = [0,2,1,-1,3,5,4,-1,5,0,7,-1,7,6,5,-1,33,10,9,-1,9,35,33,-1,0,1,8,-1,8,7,0,-1,10,12,11,-1,11,9,10,-1,4,5,6,-1,6,13,4,-1,12,34,36,-1,36,11,12,-1,7,16,15,-1,15,14,7,-1,35,9,18,-1,18,37,35,-1,7,8,17,-1,17,16,7,-1,18,19,21,-1,21,20,18,-1,13,6,23,-1,23,22,13,-1,11,36,38,-1,38,19,11,-1,16,17,24,-1,24,15,16,-1,39,37,18,-1,18,20,39,-1,2,0,5,-1,5,3,2,-1,14,25,27,-1,27,26,14,-1,28,21,41,-1,41,40,28,-1,6,14,26,-1,26,23,6,-1,14,6,7,-1,9,11,19,-1,19,18,9,-1,20,21,28,-1,14,15,24,-1,24,25,14,-1,39,20,28,-1,28,40,39,-1,23,26,27,-1,27,22,23,-1,41,21,19,-1,19,38,41,-1,2,3,30,-1,30,29,2,-1,10,42,43,-1,43,12,10,-1,31,29,30,-1,30,32,31,-1,2,29,31,-1,31,1,2,-1,4,32,30,-1,30,3,4,-1,43,34,12,-1,10,33,42,-1]
Coordinate1073 = x3d.Coordinate()

IndexedFaceSet1072.coord = Coordinate1073
TextureCoordinate1074 = x3d.TextureCoordinate()

IndexedFaceSet1072.texCoord = TextureCoordinate1074

Shape1068.geometry = IndexedFaceSet1072

HAnimSegment1067.children.append(Shape1068)
HAnimSite1075 = x3d.HAnimSite()
HAnimSite1075.DEF = "l_carpal_distal_phalanx_2_Sites"
"""(l_carpal_distal_phalanx_2_tip 0.2089 0.6858 -0.0245)"""

HAnimSegment1067.children.append(HAnimSite1075)

HAnimJoint1066.children.append(HAnimSegment1067)

HAnimJoint1056.children.append(HAnimJoint1066)

HAnimJoint1046.children.append(HAnimJoint1056)

HAnimJoint1036.children.append(HAnimJoint1046)

HAnimJoint1026.children.append(HAnimJoint1036)

HAnimJoint976.children.append(HAnimJoint1026)
HAnimJoint1076 = x3d.HAnimJoint()
HAnimJoint1076.name = "l_midcarpal_3"
HAnimJoint1076.DEF = "hanim_l_midcarpal_3"
HAnimJoint1076.center = [0.18108001,0.708525,-0.0047970004]
HAnimJoint1076.ulimit = [0,0,0]
HAnimJoint1076.llimit = [0,0,0]
HAnimSegment1077 = x3d.HAnimSegment()
HAnimSegment1077.name = "l_capitate"
HAnimSegment1077.DEF = "hanim_l_capitate"
Shape1078 = x3d.Shape()
Shape1078.DEF = "l_capitate_Shape"
Appearance1079 = x3d.Appearance()
Material1080 = x3d.Material()
Material1080.USE = "SurfaceDefault"

Appearance1079.material = Material1080
ImageTexture1081 = x3d.ImageTexture()
ImageTexture1081.USE = "JinLOA4TextureAtlas"

Appearance1079.texture = ImageTexture1081

Shape1078.appearance = Appearance1079
IndexedFaceSet1082 = x3d.IndexedFaceSet()
IndexedFaceSet1082.coordIndex = [5,6,4,-1,4,1,5,-1,7,0,3,-1,3,2,7,-1,8,11,10,-1,10,9,8,-1,12,15,14,-1,14,13,12,-1,1,8,9,-1,9,5,1,-1,5,9,10,-1,10,7,5,-1,7,10,11,-1,11,0,7,-1,0,11,8,-1,8,1,0,-1,6,12,13,-1,13,4,6,-1,4,13,14,-1,14,3,4,-1,3,14,15,-1,15,2,3,-1,2,15,12,-1,12,6,2,-1,22,21,20,-1,20,23,22,-1,18,17,16,-1,16,19,18,-1,5,16,17,-1,17,6,5,-1,6,17,18,-1,18,2,6,-1,2,18,19,-1,19,7,2,-1,7,19,16,-1,16,5,7,-1,0,20,21,-1,21,3,0,-1,3,21,22,-1,22,4,3,-1,4,22,23,-1,23,1,4,-1,1,23,20,-1,20,0,1,-1]
IndexedFaceSet1082.creaseAngle = 3.14159
IndexedFaceSet1082.texCoordIndex = [24,0,26,-1,26,25,24,-1,4,7,6,-1,6,5,4,-1,8,11,10,-1,10,9,8,-1,12,32,31,-1,31,30,12,-1,25,28,29,-1,29,24,25,-1,1,9,10,-1,10,4,1,-1,4,10,11,-1,11,7,4,-1,7,11,8,-1,8,2,7,-1,0,12,30,-1,30,26,0,-1,3,13,14,-1,14,6,3,-1,6,14,15,-1,15,5,6,-1,27,32,12,-1,12,0,27,-1,17,16,19,-1,19,18,17,-1,35,20,37,-1,37,36,35,-1,24,37,20,-1,20,0,24,-1,0,20,35,-1,35,27,0,-1,5,21,22,-1,22,4,5,-1,4,22,23,-1,23,1,4,-1,7,19,16,-1,16,6,7,-1,6,16,17,-1,17,3,6,-1,26,33,34,-1,34,25,26,-1,2,18,19,-1,19,7,2,-1]
Coordinate1083 = x3d.Coordinate()

IndexedFaceSet1082.coord = Coordinate1083
TextureCoordinate1084 = x3d.TextureCoordinate()

IndexedFaceSet1082.texCoord = TextureCoordinate1084

Shape1078.geometry = IndexedFaceSet1082

HAnimSegment1077.children.append(Shape1078)
HAnimSite1085 = x3d.HAnimSite()
HAnimSite1085.DEF = "l_capitate_Sites"
"""None"""

HAnimSegment1077.children.append(HAnimSite1085)

HAnimJoint1076.children.append(HAnimSegment1077)
HAnimJoint1086 = x3d.HAnimJoint()
HAnimJoint1086.name = "l_carpometacarpal_3"
HAnimJoint1086.DEF = "hanim_l_carpometacarpal_3"
HAnimJoint1086.center = [0.18108001,0.6858,-0.0062527503]
HAnimJoint1086.ulimit = [0,0,0]
HAnimJoint1086.llimit = [0,0,0]
HAnimSegment1087 = x3d.HAnimSegment()
HAnimSegment1087.name = "l_metacarpal_3"
HAnimSegment1087.DEF = "hanim_l_metacarpal_3"
Shape1088 = x3d.Shape()
Shape1088.DEF = "l_metacarpal_3_Shape"
Appearance1089 = x3d.Appearance()
Material1090 = x3d.Material()
Material1090.USE = "SurfaceDefault"

Appearance1089.material = Material1090
ImageTexture1091 = x3d.ImageTexture()
ImageTexture1091.USE = "JinLOA4TextureAtlas"

Appearance1089.texture = ImageTexture1091

Shape1088.appearance = Appearance1089
IndexedFaceSet1092 = x3d.IndexedFaceSet()
IndexedFaceSet1092.coordIndex = [0,8,6,-1,6,3,0,-1,10,5,1,-1,1,7,10,-1,2,9,7,-1,7,1,2,-1,8,0,4,-1,4,11,8,-1,14,13,12,-1,12,15,14,-1,34,33,32,-1,32,35,34,-1,25,24,29,-1,29,28,25,-1,17,20,19,-1,19,18,17,-1,25,28,27,-1,27,26,25,-1,20,17,16,-1,16,21,20,-1,6,12,13,-1,13,3,6,-1,24,31,30,-1,30,29,24,-1,2,14,15,-1,15,9,2,-1,16,23,22,-1,22,21,16,-1,9,16,17,-1,17,7,9,-1,7,17,18,-1,18,10,7,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,8,11,-1,8,20,21,-1,21,6,8,-1,6,21,22,-1,22,12,6,-1,12,22,23,-1,23,15,12,-1,15,23,16,-1,16,9,15,-1,3,24,25,-1,25,0,3,-1,0,25,26,-1,26,4,0,-1,4,26,27,-1,27,5,4,-1,5,27,28,-1,28,1,5,-1,1,28,29,-1,29,2,1,-1,2,29,30,-1,30,14,2,-1,14,30,31,-1,31,13,14,-1,13,31,24,-1,24,3,13,-1,10,32,33,-1,33,5,10,-1,5,33,34,-1,34,4,5,-1,4,34,35,-1,35,11,4,-1,11,35,32,-1,32,10,11,-1]
IndexedFaceSet1092.creaseAngle = 3.14159
IndexedFaceSet1092.texCoordIndex = [2,1,0,-1,0,3,2,-1,39,38,37,-1,37,36,39,-1,40,41,36,-1,36,37,40,-1,1,2,11,-1,11,10,1,-1,12,15,14,-1,14,13,12,-1,43,46,45,-1,45,44,43,-1,20,23,22,-1,22,21,20,-1,48,51,50,-1,50,49,48,-1,20,21,29,-1,29,28,20,-1,27,24,31,-1,31,30,27,-1,0,14,15,-1,15,3,0,-1,23,33,32,-1,32,22,23,-1,8,12,13,-1,13,9,8,-1,31,35,34,-1,34,30,31,-1,9,31,24,-1,24,4,9,-1,36,48,49,-1,49,39,36,-1,7,25,26,-1,26,10,7,-1,10,26,27,-1,27,1,10,-1,1,27,30,-1,30,0,1,-1,0,30,34,-1,34,14,0,-1,14,34,35,-1,35,13,14,-1,13,35,31,-1,31,9,13,-1,3,23,20,-1,20,2,3,-1,2,20,28,-1,28,11,2,-1,42,52,53,-1,53,38,42,-1,38,53,47,-1,47,37,38,-1,5,21,22,-1,22,8,5,-1,8,22,32,-1,32,12,8,-1,12,32,33,-1,33,15,12,-1,15,33,23,-1,23,3,15,-1,39,45,46,-1,46,38,39,-1,6,19,16,-1,16,11,6,-1,11,16,17,-1,17,10,11,-1,10,17,18,-1,18,7,10,-1]
Coordinate1093 = x3d.Coordinate()

IndexedFaceSet1092.coord = Coordinate1093
TextureCoordinate1094 = x3d.TextureCoordinate()

IndexedFaceSet1092.texCoord = TextureCoordinate1094

Shape1088.geometry = IndexedFaceSet1092

HAnimSegment1087.children.append(Shape1088)
HAnimSite1095 = x3d.HAnimSite()
HAnimSite1095.DEF = "l_metacarpal_3_Sites"
"""None"""

HAnimSegment1087.children.append(HAnimSite1095)

HAnimJoint1086.children.append(HAnimSegment1087)
HAnimJoint1096 = x3d.HAnimJoint()
HAnimJoint1096.name = "l_metacarpophalangeal_3"
HAnimJoint1096.DEF = "hanim_l_metacarpophalangeal_3"
HAnimJoint1096.center = [0.18369,0.63495,-0.00391725]
HAnimJoint1096.ulimit = [0,0,0]
HAnimJoint1096.llimit = [0,0,0]
HAnimSegment1097 = x3d.HAnimSegment()
HAnimSegment1097.name = "l_carpal_proximal_phalanx_3"
HAnimSegment1097.DEF = "hanim_l_carpal_proximal_phalanx_3"
Shape1098 = x3d.Shape()
Shape1098.DEF = "l_carpal_proximal_phalanx_3_Shape"
Appearance1099 = x3d.Appearance()
Material1100 = x3d.Material()
Material1100.USE = "SurfaceDefault"

Appearance1099.material = Material1100
ImageTexture1101 = x3d.ImageTexture()
ImageTexture1101.USE = "JinLOA4TextureAtlas"

Appearance1099.texture = ImageTexture1101

Shape1098.appearance = Appearance1099
IndexedFaceSet1102 = x3d.IndexedFaceSet()
IndexedFaceSet1102.coordIndex = [3,4,26,-1,26,21,3,-1,5,6,27,-1,27,25,5,-1,4,23,26,-1,0,14,6,-1,6,5,0,-1,4,3,17,-1,17,1,4,-1,0,5,7,-1,7,2,0,-1,7,4,1,-1,1,2,7,-1,7,5,24,-1,24,22,7,-1,4,7,22,-1,22,23,4,-1,24,5,25,-1,15,13,11,-1,11,17,15,-1,0,8,10,-1,10,14,0,-1,17,11,9,-1,9,1,17,-1,2,12,8,-1,8,0,2,-1,1,9,12,-1,12,2,1,-1,14,10,13,-1,13,15,14,-1,10,8,12,-1,12,13,10,-1,11,13,12,-1,12,9,11,-1,3,21,18,-1,14,15,16,-1,16,6,14,-1,16,15,17,-1,17,3,16,-1,16,20,19,-1,19,6,16,-1,3,18,20,-1,20,16,3,-1,19,27,6,-1,31,30,29,-1,29,28,31,-1,26,28,29,-1,29,21,26,-1,38,37,36,-1,38,36,35,-1,35,34,33,-1,35,33,32,-1,38,35,32,-1,27,30,31,-1,31,25,27,-1,44,43,42,-1,44,42,41,-1,41,40,39,-1,44,41,39,-1,44,39,45,-1,18,32,33,-1,33,20,18,-1,20,33,34,-1,34,19,20,-1,19,34,35,-1,35,27,19,-1,27,35,36,-1,36,30,27,-1,30,36,37,-1,37,29,30,-1,29,37,38,-1,38,21,29,-1,21,38,32,-1,32,18,21,-1,22,39,40,-1,40,23,22,-1,23,40,41,-1,41,26,23,-1,26,41,42,-1,42,28,26,-1,28,42,43,-1,43,31,28,-1,31,43,44,-1,44,25,31,-1,25,44,45,-1,45,24,25,-1,24,45,39,-1,39,22,24,-1]
IndexedFaceSet1102.creaseAngle = 3.14159
IndexedFaceSet1102.texCoordIndex = [0,3,2,-1,2,1,0,-1,4,7,47,-1,47,46,4,-1,3,8,2,-1,9,10,7,-1,7,4,9,-1,3,0,12,-1,12,11,3,-1,9,4,49,-1,49,48,9,-1,14,3,11,-1,11,13,14,-1,49,4,51,-1,51,50,49,-1,3,14,15,-1,15,8,3,-1,51,4,46,-1,17,19,18,-1,18,12,17,-1,9,21,20,-1,20,10,9,-1,12,18,22,-1,22,11,12,-1,48,54,21,-1,21,9,48,-1,11,22,23,-1,23,13,11,-1,10,20,53,-1,53,52,10,-1,20,21,54,-1,54,53,20,-1,18,19,23,-1,23,22,18,-1,0,1,24,-1,10,52,55,-1,55,7,10,-1,25,17,12,-1,12,0,25,-1,55,57,56,-1,56,7,55,-1,0,24,27,-1,27,25,0,-1,56,47,7,-1,31,30,29,-1,29,28,31,-1,2,28,29,-1,29,1,2,-1,32,38,37,-1,32,37,36,-1,36,35,34,-1,36,34,33,-1,32,36,33,-1,6,30,31,-1,31,5,6,-1,39,45,44,-1,39,44,43,-1,43,42,41,-1,39,43,41,-1,39,41,40,-1,24,33,34,-1,34,27,24,-1,27,34,35,-1,35,26,27,-1,26,35,36,-1,36,6,26,-1,6,36,37,-1,37,30,6,-1,30,37,38,-1,38,29,30,-1,29,38,32,-1,32,1,29,-1,1,32,33,-1,33,24,1,-1,15,41,42,-1,42,8,15,-1,8,42,43,-1,43,2,8,-1,2,43,44,-1,44,28,2,-1,28,44,45,-1,45,31,28,-1,31,45,39,-1,39,5,31,-1,5,39,40,-1,40,16,5,-1,16,40,41,-1,41,15,16,-1]
Coordinate1103 = x3d.Coordinate()

IndexedFaceSet1102.coord = Coordinate1103
TextureCoordinate1104 = x3d.TextureCoordinate()

IndexedFaceSet1102.texCoord = TextureCoordinate1104

Shape1098.geometry = IndexedFaceSet1102

HAnimSegment1097.children.append(Shape1098)
HAnimSite1105 = x3d.HAnimSite()
HAnimSite1105.DEF = "l_carpal_proximal_phalanx_3_Sites"
"""None"""

HAnimSegment1097.children.append(HAnimSite1105)

HAnimJoint1096.children.append(HAnimSegment1097)
HAnimJoint1106 = x3d.HAnimJoint()
HAnimJoint1106.name = "l_carpal_proximal_interphalangeal_3"
HAnimJoint1106.DEF = "hanim_l_carpal_proximal_interphalangeal_3"
HAnimJoint1106.center = [0.18171,0.603225,-0.003537]
HAnimJoint1106.ulimit = [0,0,0]
HAnimJoint1106.llimit = [0,0,0]
HAnimSegment1107 = x3d.HAnimSegment()
HAnimSegment1107.name = "l_carpal_middle_phalanx_3"
HAnimSegment1107.DEF = "hanim_l_carpal_middle_phalanx_3"
Shape1108 = x3d.Shape()
Shape1108.DEF = "l_carpal_middle_phalanx_3_Shape"
Appearance1109 = x3d.Appearance()
Material1110 = x3d.Material()
Material1110.USE = "SurfaceDefault"

Appearance1109.material = Material1110
ImageTexture1111 = x3d.ImageTexture()
ImageTexture1111.USE = "JinLOA4TextureAtlas"

Appearance1109.texture = ImageTexture1111

Shape1108.appearance = Appearance1109
IndexedFaceSet1112 = x3d.IndexedFaceSet()
IndexedFaceSet1112.coordIndex = [1,15,14,-1,14,7,1,-1,8,14,3,-1,1,7,5,-1,5,18,1,-1,3,2,21,-1,21,4,3,-1,6,8,3,-1,3,4,6,-1,6,4,13,-1,0,18,5,-1,5,13,0,-1,13,4,21,-1,21,0,13,-1,2,3,14,-1,14,15,2,-1,8,6,12,-1,12,11,8,-1,7,10,9,-1,9,5,7,-1,10,11,12,-1,12,9,10,-1,8,11,10,-1,10,14,8,-1,13,9,12,-1,12,6,13,-1,9,13,5,-1,7,14,10,-1,15,17,16,-1,16,2,15,-1,18,20,19,-1,19,1,18,-1,2,16,22,-1,22,21,2,-1,0,23,20,-1,20,18,0,-1,21,22,23,-1,23,0,21,-1,1,19,17,-1,17,15,1,-1,19,20,23,-1,23,17,19,-1,16,17,23,-1,23,22,16,-1]
IndexedFaceSet1112.creaseAngle = 3.14159
IndexedFaceSet1112.texCoordIndex = [3,25,24,-1,24,0,3,-1,4,1,5,-1,3,0,7,-1,7,6,3,-1,5,10,9,-1,9,8,5,-1,11,4,5,-1,5,8,11,-1,11,8,12,-1,27,6,7,-1,7,26,27,-1,12,8,9,-1,9,13,12,-1,10,5,1,-1,1,2,10,-1,4,11,15,-1,15,14,4,-1,0,28,29,-1,29,7,0,-1,16,14,15,-1,15,17,16,-1,4,14,16,-1,16,1,4,-1,12,17,15,-1,15,11,12,-1,29,26,7,-1,0,24,28,-1,2,19,18,-1,18,10,2,-1,6,21,20,-1,20,3,6,-1,10,18,22,-1,22,9,10,-1,27,31,21,-1,21,6,27,-1,9,22,23,-1,23,13,9,-1,3,20,30,-1,30,25,3,-1,20,21,31,-1,31,30,20,-1,18,19,23,-1,23,22,18,-1]
Coordinate1113 = x3d.Coordinate()

IndexedFaceSet1112.coord = Coordinate1113
TextureCoordinate1114 = x3d.TextureCoordinate()

IndexedFaceSet1112.texCoord = TextureCoordinate1114

Shape1108.geometry = IndexedFaceSet1112

HAnimSegment1107.children.append(Shape1108)
HAnimSite1115 = x3d.HAnimSite()
HAnimSite1115.DEF = "l_carpal_middle_phalanx_3_Sites"
"""None"""

HAnimSegment1107.children.append(HAnimSite1115)

HAnimJoint1106.children.append(HAnimSegment1107)
HAnimJoint1116 = x3d.HAnimJoint()
HAnimJoint1116.name = "l_carpal_distal_interphalangeal_3"
HAnimJoint1116.DEF = "hanim_l_carpal_distal_interphalangeal_3"
HAnimJoint1116.center = [0.180675,0.575325,-0.0037597502]
HAnimJoint1116.ulimit = [0,0,0]
HAnimJoint1116.llimit = [0,0,0]
HAnimSegment1117 = x3d.HAnimSegment()
HAnimSegment1117.name = "l_carpal_distal_phalanx_3"
HAnimSegment1117.DEF = "hanim_l_carpal_distal_phalanx_3"
Shape1118 = x3d.Shape()
Shape1118.DEF = "l_carpal_distal_phalanx_3_Shape"
Appearance1119 = x3d.Appearance()
Material1120 = x3d.Material()
Material1120.USE = "SurfaceDefault"

Appearance1119.material = Material1120
ImageTexture1121 = x3d.ImageTexture()
ImageTexture1121.USE = "JinLOA4TextureAtlas"

Appearance1119.texture = ImageTexture1121

Shape1118.appearance = Appearance1119
IndexedFaceSet1122 = x3d.IndexedFaceSet()
IndexedFaceSet1122.coordIndex = [0,25,31,-1,24,1,32,-1,1,0,2,-1,2,3,1,-1,31,23,4,-1,4,5,31,-1,0,31,5,-1,5,2,0,-1,23,29,6,-1,6,4,23,-1,32,1,3,-1,3,7,32,-1,29,32,7,-1,7,6,29,-1,2,8,17,-1,17,14,2,-1,5,4,10,-1,10,11,5,-1,2,5,11,-1,11,8,2,-1,10,12,18,-1,18,21,10,-1,7,3,9,-1,9,13,7,-1,6,7,13,-1,13,12,6,-1,8,11,19,-1,19,17,8,-1,19,11,10,-1,10,21,19,-1,25,0,1,-1,1,24,25,-1,14,16,22,-1,22,20,14,-1,15,18,22,-1,22,16,15,-1,3,14,20,-1,20,9,3,-1,14,3,2,-1,4,6,12,-1,12,10,4,-1,21,18,15,-1,14,17,19,-1,19,16,14,-1,19,21,15,-1,15,16,19,-1,9,20,22,-1,22,13,9,-1,22,18,12,-1,12,13,22,-1,25,24,27,-1,27,26,25,-1,23,28,30,-1,30,29,23,-1,28,26,27,-1,27,30,28,-1,25,26,28,-1,28,31,25,-1,32,30,27,-1,27,24,32,-1,30,32,29,-1,23,31,28,-1]
IndexedFaceSet1122.creaseAngle = 3.14159
IndexedFaceSet1122.texCoordIndex = [0,2,1,-1,3,5,4,-1,5,0,7,-1,7,6,5,-1,33,10,9,-1,9,35,33,-1,0,1,8,-1,8,7,0,-1,10,12,11,-1,11,9,10,-1,4,5,6,-1,6,13,4,-1,12,34,36,-1,36,11,12,-1,7,16,15,-1,15,14,7,-1,35,9,18,-1,18,37,35,-1,7,8,17,-1,17,16,7,-1,18,19,21,-1,21,20,18,-1,13,6,23,-1,23,22,13,-1,11,36,38,-1,38,19,11,-1,16,17,24,-1,24,15,16,-1,39,37,18,-1,18,20,39,-1,2,0,5,-1,5,3,2,-1,14,25,27,-1,27,26,14,-1,28,21,41,-1,41,40,28,-1,6,14,26,-1,26,23,6,-1,14,6,7,-1,9,11,19,-1,19,18,9,-1,20,21,28,-1,14,15,24,-1,24,25,14,-1,39,20,28,-1,28,40,39,-1,23,26,27,-1,27,22,23,-1,41,21,19,-1,19,38,41,-1,2,3,30,-1,30,29,2,-1,10,42,43,-1,43,12,10,-1,31,29,30,-1,30,32,31,-1,2,29,31,-1,31,1,2,-1,4,32,30,-1,30,3,4,-1,43,34,12,-1,10,33,42,-1]
Coordinate1123 = x3d.Coordinate()

IndexedFaceSet1122.coord = Coordinate1123
TextureCoordinate1124 = x3d.TextureCoordinate()

IndexedFaceSet1122.texCoord = TextureCoordinate1124

Shape1118.geometry = IndexedFaceSet1122

HAnimSegment1117.children.append(Shape1118)
HAnimSite1125 = x3d.HAnimSite()
HAnimSite1125.DEF = "l_carpal_distal_phalanx_3_Sites"
"""(l_dactylion 0.2056 0.6743 -0.0482) (l_carpal_distal_phalanx_3_tip 0.2080 0.6731 -0.0491)"""

HAnimSegment1117.children.append(HAnimSite1125)

HAnimJoint1116.children.append(HAnimSegment1117)

HAnimJoint1106.children.append(HAnimJoint1116)

HAnimJoint1096.children.append(HAnimJoint1106)

HAnimJoint1086.children.append(HAnimJoint1096)

HAnimJoint1076.children.append(HAnimJoint1086)

HAnimJoint976.children.append(HAnimJoint1076)
HAnimJoint1126 = x3d.HAnimJoint()
HAnimJoint1126.name = "l_midcarpal_4_5"
HAnimJoint1126.DEF = "hanim_l_midcarpal_4_5"
HAnimJoint1126.center = [0.18108001,0.70582503,-0.025740001]
HAnimJoint1126.ulimit = [0,0,0]
HAnimJoint1126.llimit = [0,0,0]
HAnimSegment1127 = x3d.HAnimSegment()
HAnimSegment1127.name = "l_hamate"
HAnimSegment1127.DEF = "hanim_l_hamate"
Shape1128 = x3d.Shape()
Shape1128.DEF = "l_hamate_Shape"
Appearance1129 = x3d.Appearance()
Material1130 = x3d.Material()
Material1130.USE = "SurfaceDefault"

Appearance1129.material = Material1130
ImageTexture1131 = x3d.ImageTexture()
ImageTexture1131.USE = "JinLOA4TextureAtlas"

Appearance1129.texture = ImageTexture1131

Shape1128.appearance = Appearance1129
IndexedFaceSet1132 = x3d.IndexedFaceSet()
IndexedFaceSet1132.coordIndex = [6,7,4,-1,4,3,6,-1,7,8,9,-1,9,0,7,-1,11,5,1,-1,1,2,11,-1,5,6,3,-1,3,1,5,-1,2,10,11,-1,4,7,0,-1,17,16,15,-1,17,15,14,-1,13,17,14,-1,20,22,21,-1,27,26,25,-1,25,24,27,-1,17,13,12,-1,12,18,17,-1,23,22,20,-1,20,19,23,-1,9,12,13,-1,13,0,9,-1,0,13,14,-1,14,4,0,-1,4,14,15,-1,15,3,4,-1,3,15,16,-1,16,1,3,-1,1,16,17,-1,17,2,1,-1,2,17,18,-1,18,10,2,-1,10,18,12,-1,12,9,10,-1,11,19,20,-1,20,5,11,-1,5,20,21,-1,21,6,5,-1,6,21,22,-1,22,7,6,-1,7,22,23,-1,23,8,7,-1,8,23,19,-1,19,11,8,-1,8,24,25,-1,25,9,8,-1,9,25,26,-1,26,10,9,-1,10,26,27,-1,27,11,10,-1,11,27,24,-1,24,8,11,-1]
IndexedFaceSet1132.creaseAngle = 3.14159
IndexedFaceSet1132.texCoordIndex = [0,3,2,-1,2,1,0,-1,3,6,5,-1,5,4,3,-1,7,10,9,-1,9,8,7,-1,10,28,29,-1,29,9,10,-1,8,11,7,-1,2,3,4,-1,16,15,14,-1,16,14,13,-1,12,16,13,-1,35,37,36,-1,23,22,39,-1,39,38,23,-1,16,12,25,-1,25,24,16,-1,26,19,17,-1,17,27,26,-1,5,25,12,-1,12,4,5,-1,4,12,13,-1,13,2,4,-1,2,13,14,-1,14,1,2,-1,29,32,33,-1,33,9,29,-1,9,33,34,-1,34,8,9,-1,8,34,40,-1,40,11,8,-1,11,40,41,-1,41,30,11,-1,7,43,35,-1,35,10,7,-1,10,35,36,-1,36,28,10,-1,0,18,19,-1,19,3,0,-1,3,19,26,-1,26,6,3,-1,31,42,43,-1,43,7,31,-1,6,20,21,-1,21,5,6,-1,30,39,22,-1,22,11,30,-1,11,22,23,-1,23,7,11,-1,7,23,38,-1,38,31,7,-1]
Coordinate1133 = x3d.Coordinate()

IndexedFaceSet1132.coord = Coordinate1133
TextureCoordinate1134 = x3d.TextureCoordinate()

IndexedFaceSet1132.texCoord = TextureCoordinate1134

Shape1128.geometry = IndexedFaceSet1132

HAnimSegment1127.children.append(Shape1128)
HAnimSite1135 = x3d.HAnimSite()
HAnimSite1135.DEF = "l_hamate_Sites"
"""None"""

HAnimSegment1127.children.append(HAnimSite1135)

HAnimJoint1126.children.append(HAnimSegment1127)
HAnimJoint1136 = x3d.HAnimJoint()
HAnimJoint1136.name = "l_carpometacarpal_4"
HAnimJoint1136.DEF = "hanim_l_carpometacarpal_4"
HAnimJoint1136.center = [0.18108001,0.68625003,-0.01991925]
HAnimJoint1136.ulimit = [0,0,0]
HAnimJoint1136.llimit = [0,0,0]
HAnimSegment1137 = x3d.HAnimSegment()
HAnimSegment1137.name = "l_metacarpal_4"
HAnimSegment1137.DEF = "hanim_l_metacarpal_4"
Shape1138 = x3d.Shape()
Shape1138.DEF = "l_metacarpal_4_Shape"
Appearance1139 = x3d.Appearance()
Material1140 = x3d.Material()
Material1140.USE = "SurfaceDefault"

Appearance1139.material = Material1140
ImageTexture1141 = x3d.ImageTexture()
ImageTexture1141.USE = "JinLOA4TextureAtlas"

Appearance1139.texture = ImageTexture1141

Shape1138.appearance = Appearance1139
IndexedFaceSet1142 = x3d.IndexedFaceSet()
IndexedFaceSet1142.coordIndex = [9,2,0,-1,0,6,9,-1,6,0,4,-1,4,10,6,-1,7,1,3,-1,3,8,7,-1,7,11,5,-1,5,1,7,-1,12,15,14,-1,14,13,12,-1,34,33,32,-1,32,35,34,-1,17,16,21,-1,21,20,17,-1,29,24,31,-1,31,30,29,-1,17,20,19,-1,19,18,17,-1,24,29,28,-1,28,25,24,-1,9,12,13,-1,13,2,9,-1,16,23,22,-1,22,21,16,-1,3,14,15,-1,15,8,3,-1,28,27,26,-1,26,25,28,-1,2,16,17,-1,17,0,2,-1,0,17,18,-1,18,4,0,-1,4,18,19,-1,19,5,4,-1,5,19,20,-1,20,1,5,-1,1,20,21,-1,21,3,1,-1,3,21,22,-1,22,14,3,-1,14,22,23,-1,23,13,14,-1,13,23,16,-1,16,2,13,-1,6,24,25,-1,25,9,6,-1,9,25,26,-1,26,12,9,-1,12,26,27,-1,27,15,12,-1,15,27,28,-1,28,8,15,-1,8,28,29,-1,29,7,8,-1,7,29,30,-1,30,11,7,-1,11,30,31,-1,31,10,11,-1,10,31,24,-1,24,6,10,-1,4,32,33,-1,33,10,4,-1,10,33,34,-1,34,11,10,-1,11,34,35,-1,35,5,11,-1,5,35,32,-1,32,4,5,-1]
IndexedFaceSet1142.creaseAngle = 3.14159
IndexedFaceSet1142.texCoordIndex = [0,3,2,-1,2,1,0,-1,1,2,5,-1,5,4,1,-1,38,9,40,-1,40,39,38,-1,38,42,41,-1,41,9,38,-1,12,15,14,-1,14,13,12,-1,16,45,44,-1,44,43,16,-1,20,23,22,-1,22,21,20,-1,48,51,50,-1,50,49,48,-1,20,21,29,-1,29,28,20,-1,27,24,31,-1,31,30,27,-1,0,12,13,-1,13,3,0,-1,23,33,32,-1,32,22,23,-1,8,14,15,-1,15,7,8,-1,31,35,34,-1,34,30,31,-1,3,23,20,-1,20,2,3,-1,2,20,28,-1,28,5,2,-1,37,52,53,-1,53,41,37,-1,41,53,46,-1,46,9,41,-1,9,46,47,-1,47,40,9,-1,8,22,32,-1,32,14,8,-1,14,32,33,-1,33,13,14,-1,13,33,23,-1,23,3,13,-1,1,27,30,-1,30,0,1,-1,0,30,34,-1,34,12,0,-1,12,34,35,-1,35,15,12,-1,15,35,31,-1,31,7,15,-1,7,31,24,-1,24,6,7,-1,38,48,49,-1,49,42,38,-1,11,25,26,-1,26,4,11,-1,4,26,27,-1,27,1,4,-1,5,18,19,-1,19,4,5,-1,36,45,16,-1,16,42,36,-1,42,16,43,-1,43,41,42,-1,10,17,18,-1,18,5,10,-1]
Coordinate1143 = x3d.Coordinate()

IndexedFaceSet1142.coord = Coordinate1143
TextureCoordinate1144 = x3d.TextureCoordinate()

IndexedFaceSet1142.texCoord = TextureCoordinate1144

Shape1138.geometry = IndexedFaceSet1142

HAnimSegment1137.children.append(Shape1138)
HAnimSite1145 = x3d.HAnimSite()
HAnimSite1145.DEF = "l_metacarpal_4_Sites"
"""None"""

HAnimSegment1137.children.append(HAnimSite1145)

HAnimJoint1136.children.append(HAnimSegment1137)
HAnimJoint1146 = x3d.HAnimJoint()
HAnimJoint1146.name = "l_metacarpophalangeal_4"
HAnimJoint1146.DEF = "hanim_l_metacarpophalangeal_4"
HAnimJoint1146.center = [0.18369,0.63405,-0.02144025]
HAnimJoint1146.ulimit = [0,0,0]
HAnimJoint1146.llimit = [0,0,0]
HAnimSegment1147 = x3d.HAnimSegment()
HAnimSegment1147.name = "l_carpal_proximal_phalanx_4"
HAnimSegment1147.DEF = "hanim_l_carpal_proximal_phalanx_4"
Shape1148 = x3d.Shape()
Shape1148.DEF = "l_carpal_proximal_phalanx_4_Shape"
Appearance1149 = x3d.Appearance()
Material1150 = x3d.Material()
Material1150.USE = "SurfaceDefault"

Appearance1149.material = Material1150
ImageTexture1151 = x3d.ImageTexture()
ImageTexture1151.USE = "JinLOA4TextureAtlas"

Appearance1149.texture = ImageTexture1151

Shape1148.appearance = Appearance1149
IndexedFaceSet1152 = x3d.IndexedFaceSet()
IndexedFaceSet1152.coordIndex = [3,4,22,-1,22,23,3,-1,5,6,31,-1,31,32,5,-1,4,44,22,-1,0,14,6,-1,6,5,0,-1,4,3,17,-1,17,1,4,-1,0,5,7,-1,7,2,0,-1,7,4,1,-1,1,2,7,-1,7,5,45,-1,45,43,7,-1,4,7,43,-1,43,44,4,-1,45,5,32,-1,15,13,11,-1,11,17,15,-1,0,8,10,-1,10,14,0,-1,17,11,9,-1,9,1,17,-1,2,12,8,-1,8,0,2,-1,1,9,12,-1,12,2,1,-1,14,10,13,-1,13,15,14,-1,10,8,12,-1,12,13,10,-1,11,13,12,-1,12,9,11,-1,3,23,40,-1,14,15,16,-1,16,6,14,-1,16,15,17,-1,17,3,16,-1,16,41,42,-1,42,6,16,-1,3,40,41,-1,41,16,3,-1,42,31,6,-1,21,20,19,-1,19,18,21,-1,22,18,19,-1,19,23,22,-1,24,30,29,-1,24,29,28,-1,28,27,26,-1,28,26,25,-1,24,28,25,-1,31,20,21,-1,21,32,31,-1,33,39,38,-1,33,38,37,-1,37,36,35,-1,33,37,35,-1,33,35,34,-1,40,25,26,-1,26,41,40,-1,41,26,27,-1,27,42,41,-1,42,27,28,-1,28,31,42,-1,31,28,29,-1,29,20,31,-1,20,29,30,-1,30,19,20,-1,19,30,24,-1,24,23,19,-1,23,24,25,-1,25,40,23,-1,43,35,36,-1,36,44,43,-1,44,36,37,-1,37,22,44,-1,22,37,38,-1,38,18,22,-1,18,38,39,-1,39,21,18,-1,21,39,33,-1,33,32,21,-1,32,33,34,-1,34,45,32,-1,45,34,35,-1,35,43,45,-1]
IndexedFaceSet1152.creaseAngle = 3.14159
IndexedFaceSet1152.texCoordIndex = [0,3,2,-1,2,1,0,-1,4,7,47,-1,47,46,4,-1,3,8,2,-1,9,10,7,-1,7,4,9,-1,3,0,12,-1,12,11,3,-1,9,4,49,-1,49,48,9,-1,14,3,11,-1,11,13,14,-1,49,4,51,-1,51,50,49,-1,3,14,15,-1,15,8,3,-1,51,4,46,-1,17,19,18,-1,18,12,17,-1,9,21,20,-1,20,10,9,-1,12,18,22,-1,22,11,12,-1,48,54,21,-1,21,9,48,-1,11,22,23,-1,23,13,11,-1,10,20,53,-1,53,52,10,-1,20,21,54,-1,54,53,20,-1,18,19,23,-1,23,22,18,-1,0,1,24,-1,10,52,55,-1,55,7,10,-1,25,17,12,-1,12,0,25,-1,55,57,56,-1,56,7,55,-1,0,24,27,-1,27,25,0,-1,56,47,7,-1,31,30,29,-1,29,28,31,-1,2,28,29,-1,29,1,2,-1,32,38,37,-1,32,37,36,-1,36,35,34,-1,36,34,33,-1,32,36,33,-1,6,30,31,-1,31,5,6,-1,39,45,44,-1,39,44,43,-1,43,42,41,-1,39,43,41,-1,39,41,40,-1,24,33,34,-1,34,27,24,-1,27,34,35,-1,35,26,27,-1,26,35,36,-1,36,6,26,-1,6,36,37,-1,37,30,6,-1,30,37,38,-1,38,29,30,-1,29,38,32,-1,32,1,29,-1,1,32,33,-1,33,24,1,-1,15,41,42,-1,42,8,15,-1,8,42,43,-1,43,2,8,-1,2,43,44,-1,44,28,2,-1,28,44,45,-1,45,31,28,-1,31,45,39,-1,39,5,31,-1,5,39,40,-1,40,16,5,-1,16,40,41,-1,41,15,16,-1]
Coordinate1153 = x3d.Coordinate()

IndexedFaceSet1152.coord = Coordinate1153
TextureCoordinate1154 = x3d.TextureCoordinate()

IndexedFaceSet1152.texCoord = TextureCoordinate1154

Shape1148.geometry = IndexedFaceSet1152

HAnimSegment1147.children.append(Shape1148)
HAnimSite1155 = x3d.HAnimSite()
HAnimSite1155.DEF = "l_carpal_proximal_phalanx_4_Sites"
"""None"""

HAnimSegment1147.children.append(HAnimSite1155)

HAnimJoint1146.children.append(HAnimSegment1147)
HAnimJoint1156 = x3d.HAnimJoint()
HAnimJoint1156.name = "l_carpal_proximal_interphalangeal_4"
HAnimJoint1156.DEF = "hanim_l_carpal_proximal_interphalangeal_4"
HAnimJoint1156.center = [0.18171,0.6066,-0.020646]
HAnimJoint1156.ulimit = [0,0,0]
HAnimJoint1156.llimit = [0,0,0]
HAnimSegment1157 = x3d.HAnimSegment()
HAnimSegment1157.name = "l_carpal_middle_phalanx_4"
HAnimSegment1157.DEF = "hanim_l_carpal_middle_phalanx_4"
Shape1158 = x3d.Shape()
Shape1158.DEF = "l_carpal_middle_phalanx_4_Shape"
Appearance1159 = x3d.Appearance()
Material1160 = x3d.Material()
Material1160.USE = "SurfaceDefault"

Appearance1159.material = Material1160
ImageTexture1161 = x3d.ImageTexture()
ImageTexture1161.USE = "JinLOA4TextureAtlas"

Appearance1159.texture = ImageTexture1161

Shape1158.appearance = Appearance1159
IndexedFaceSet1162 = x3d.IndexedFaceSet()
IndexedFaceSet1162.coordIndex = [1,15,14,-1,14,7,1,-1,8,14,3,-1,1,7,5,-1,5,18,1,-1,3,2,21,-1,21,4,3,-1,6,8,3,-1,3,4,6,-1,6,4,13,-1,0,18,5,-1,5,13,0,-1,13,4,21,-1,21,0,13,-1,2,3,14,-1,14,15,2,-1,8,6,12,-1,12,11,8,-1,7,10,9,-1,9,5,7,-1,10,11,12,-1,12,9,10,-1,8,11,10,-1,10,14,8,-1,13,9,12,-1,12,6,13,-1,9,13,5,-1,7,14,10,-1,15,17,16,-1,16,2,15,-1,18,20,19,-1,19,1,18,-1,2,16,22,-1,22,21,2,-1,0,23,20,-1,20,18,0,-1,21,22,23,-1,23,0,21,-1,1,19,17,-1,17,15,1,-1,19,20,23,-1,23,17,19,-1,16,17,23,-1,23,22,16,-1]
IndexedFaceSet1162.creaseAngle = 3.14159
IndexedFaceSet1162.texCoordIndex = [3,25,24,-1,24,0,3,-1,4,1,5,-1,3,0,7,-1,7,6,3,-1,5,10,9,-1,9,8,5,-1,11,4,5,-1,5,8,11,-1,11,8,12,-1,27,6,7,-1,7,26,27,-1,12,8,9,-1,9,13,12,-1,10,5,1,-1,1,2,10,-1,4,11,15,-1,15,14,4,-1,0,28,29,-1,29,7,0,-1,16,14,15,-1,15,17,16,-1,4,14,16,-1,16,1,4,-1,12,17,15,-1,15,11,12,-1,29,26,7,-1,0,24,28,-1,2,19,18,-1,18,10,2,-1,6,21,20,-1,20,3,6,-1,10,18,22,-1,22,9,10,-1,27,31,21,-1,21,6,27,-1,9,22,23,-1,23,13,9,-1,3,20,30,-1,30,25,3,-1,20,21,31,-1,31,30,20,-1,18,19,23,-1,23,22,18,-1]
Coordinate1163 = x3d.Coordinate()

IndexedFaceSet1162.coord = Coordinate1163
TextureCoordinate1164 = x3d.TextureCoordinate()

IndexedFaceSet1162.texCoord = TextureCoordinate1164

Shape1158.geometry = IndexedFaceSet1162

HAnimSegment1157.children.append(Shape1158)
HAnimSite1165 = x3d.HAnimSite()
HAnimSite1165.DEF = "l_carpal_middle_phalanx_4_Sites"
"""None"""

HAnimSegment1157.children.append(HAnimSite1165)

HAnimJoint1156.children.append(HAnimSegment1157)
HAnimJoint1166 = x3d.HAnimJoint()
HAnimJoint1166.name = "l_carpal_distal_interphalangeal_4"
HAnimJoint1166.DEF = "hanim_l_carpal_distal_interphalangeal_4"
HAnimJoint1166.center = [0.180675,0.580725,-0.019777501]
HAnimJoint1166.ulimit = [0,0,0]
HAnimJoint1166.llimit = [0,0,0]
HAnimSegment1167 = x3d.HAnimSegment()
HAnimSegment1167.name = "l_carpal_distal_phalanx_4"
HAnimSegment1167.DEF = "hanim_l_carpal_distal_phalanx_4"
Shape1168 = x3d.Shape()
Shape1168.DEF = "l_carpal_distal_phalanx_4_Shape"
Appearance1169 = x3d.Appearance()
Material1170 = x3d.Material()
Material1170.USE = "SurfaceDefault"

Appearance1169.material = Material1170
ImageTexture1171 = x3d.ImageTexture()
ImageTexture1171.USE = "JinLOA4TextureAtlas"

Appearance1169.texture = ImageTexture1171

Shape1168.appearance = Appearance1169
IndexedFaceSet1172 = x3d.IndexedFaceSet()
IndexedFaceSet1172.coordIndex = [0,25,31,-1,24,1,32,-1,1,0,2,-1,2,3,1,-1,31,23,4,-1,4,5,31,-1,0,31,5,-1,5,2,0,-1,23,29,6,-1,6,4,23,-1,32,1,3,-1,3,7,32,-1,29,32,7,-1,7,6,29,-1,2,8,17,-1,17,14,2,-1,5,4,10,-1,10,11,5,-1,2,5,11,-1,11,8,2,-1,10,12,18,-1,18,21,10,-1,7,3,9,-1,9,13,7,-1,6,7,13,-1,13,12,6,-1,8,11,19,-1,19,17,8,-1,19,11,10,-1,10,21,19,-1,25,0,1,-1,1,24,25,-1,14,16,22,-1,22,20,14,-1,15,18,22,-1,22,16,15,-1,3,14,20,-1,20,9,3,-1,14,3,2,-1,4,6,12,-1,12,10,4,-1,21,18,15,-1,14,17,19,-1,19,16,14,-1,19,21,15,-1,15,16,19,-1,9,20,22,-1,22,13,9,-1,22,18,12,-1,12,13,22,-1,25,24,27,-1,27,26,25,-1,23,28,30,-1,30,29,23,-1,28,26,27,-1,27,30,28,-1,25,26,28,-1,28,31,25,-1,32,30,27,-1,27,24,32,-1,30,32,29,-1,23,31,28,-1]
IndexedFaceSet1172.creaseAngle = 3.14159
IndexedFaceSet1172.texCoordIndex = [0,2,1,-1,3,5,4,-1,5,0,7,-1,7,6,5,-1,33,10,9,-1,9,35,33,-1,0,1,8,-1,8,7,0,-1,10,12,11,-1,11,9,10,-1,4,5,6,-1,6,13,4,-1,12,34,36,-1,36,11,12,-1,7,16,15,-1,15,14,7,-1,35,9,18,-1,18,37,35,-1,7,8,17,-1,17,16,7,-1,18,19,21,-1,21,20,18,-1,13,6,23,-1,23,22,13,-1,11,36,38,-1,38,19,11,-1,16,17,24,-1,24,15,16,-1,39,37,18,-1,18,20,39,-1,2,0,5,-1,5,3,2,-1,14,25,27,-1,27,26,14,-1,28,21,41,-1,41,40,28,-1,6,14,26,-1,26,23,6,-1,14,6,7,-1,9,11,19,-1,19,18,9,-1,20,21,28,-1,14,15,24,-1,24,25,14,-1,39,20,28,-1,28,40,39,-1,23,26,27,-1,27,22,23,-1,41,21,19,-1,19,38,41,-1,2,3,30,-1,30,29,2,-1,10,42,43,-1,43,12,10,-1,31,29,30,-1,30,32,31,-1,2,29,31,-1,31,1,2,-1,4,32,30,-1,30,3,4,-1,43,34,12,-1,10,33,42,-1]
Coordinate1173 = x3d.Coordinate()

IndexedFaceSet1172.coord = Coordinate1173
TextureCoordinate1174 = x3d.TextureCoordinate()

IndexedFaceSet1172.texCoord = TextureCoordinate1174

Shape1168.geometry = IndexedFaceSet1172

HAnimSegment1167.children.append(Shape1168)
HAnimSite1175 = x3d.HAnimSite()
HAnimSite1175.DEF = "l_carpal_distal_phalanx_4_Sites"
"""(l_carpal_distal_phalanx_4_tip 0.2035 0.6750 -0.0756)"""

HAnimSegment1167.children.append(HAnimSite1175)

HAnimJoint1166.children.append(HAnimSegment1167)

HAnimJoint1156.children.append(HAnimJoint1166)

HAnimJoint1146.children.append(HAnimJoint1156)

HAnimJoint1136.children.append(HAnimJoint1146)

HAnimJoint1126.children.append(HAnimJoint1136)

HAnimJoint976.children.append(HAnimJoint1126)
HAnimJoint1176 = x3d.HAnimJoint()
HAnimJoint1176.name = "l_carpometacarpal_5"
HAnimJoint1176.DEF = "hanim_l_carpometacarpal_5"
HAnimJoint1176.center = [0.1816425,0.68827504,-0.032782502]
HAnimJoint1176.ulimit = [0,0,0]
HAnimJoint1176.llimit = [0,0,0]
HAnimSegment1177 = x3d.HAnimSegment()
HAnimSegment1177.name = "l_metacarpal_5"
HAnimSegment1177.DEF = "hanim_l_metacarpal_5"
Shape1178 = x3d.Shape()
Shape1178.DEF = "l_metacarpal_5_Shape"
Appearance1179 = x3d.Appearance()
Material1180 = x3d.Material()
Material1180.USE = "SurfaceDefault"

Appearance1179.material = Material1180
ImageTexture1181 = x3d.ImageTexture()
ImageTexture1181.USE = "JinLOA4TextureAtlas"

Appearance1179.texture = ImageTexture1181

Shape1178.appearance = Appearance1179
IndexedFaceSet1182 = x3d.IndexedFaceSet()
IndexedFaceSet1182.coordIndex = [11,3,0,-1,0,9,11,-1,5,4,1,-1,1,2,5,-1,3,5,2,-1,2,0,3,-1,9,0,8,-1,8,13,9,-1,2,1,6,-1,6,7,2,-1,6,1,10,-1,10,14,6,-1,1,4,12,-1,12,10,1,-1,0,2,7,-1,7,8,0,-1,25,20,27,-1,27,26,25,-1,18,17,16,-1,19,18,16,-1,15,19,16,-1,32,31,30,-1,32,30,29,-1,28,32,29,-1,11,15,16,-1,16,3,11,-1,3,16,17,-1,17,5,3,-1,5,17,18,-1,18,4,5,-1,4,18,19,-1,19,12,4,-1,24,23,22,-1,22,21,24,-1,20,25,24,-1,24,21,20,-1,9,20,21,-1,21,11,9,-1,11,21,22,-1,22,15,11,-1,15,22,23,-1,23,19,15,-1,19,23,24,-1,24,12,19,-1,12,24,25,-1,25,10,12,-1,10,25,26,-1,26,14,10,-1,14,26,27,-1,27,13,14,-1,13,27,20,-1,20,9,13,-1,14,28,29,-1,29,6,14,-1,6,29,30,-1,30,7,6,-1,7,30,31,-1,31,8,7,-1,8,31,32,-1,32,13,8,-1,13,32,28,-1,28,14,13,-1]
IndexedFaceSet1182.creaseAngle = 3.14159
IndexedFaceSet1182.texCoordIndex = [0,3,2,-1,2,1,0,-1,33,35,6,-1,6,34,33,-1,3,4,5,-1,5,2,3,-1,1,2,9,-1,9,8,1,-1,34,6,11,-1,11,37,34,-1,11,6,38,-1,38,12,11,-1,6,35,39,-1,39,38,6,-1,2,5,10,-1,10,9,2,-1,40,42,41,-1,41,16,40,-1,22,21,20,-1,23,22,20,-1,19,23,20,-1,45,44,43,-1,45,43,25,-1,24,45,25,-1,0,19,20,-1,20,3,0,-1,3,20,21,-1,21,4,3,-1,4,21,22,-1,22,7,4,-1,7,22,23,-1,23,14,7,-1,29,32,31,-1,31,30,29,-1,18,15,29,-1,29,30,18,-1,1,18,30,-1,30,0,1,-1,0,30,31,-1,31,19,0,-1,19,31,32,-1,32,23,19,-1,23,32,29,-1,29,14,23,-1,14,29,15,-1,15,13,14,-1,38,40,16,-1,16,12,38,-1,12,16,41,-1,41,36,12,-1,8,17,18,-1,18,1,8,-1,12,24,25,-1,25,11,12,-1,11,25,43,-1,43,37,11,-1,10,26,27,-1,27,9,10,-1,9,27,28,-1,28,8,9,-1,36,45,24,-1,24,12,36,-1]
Coordinate1183 = x3d.Coordinate()

IndexedFaceSet1182.coord = Coordinate1183
TextureCoordinate1184 = x3d.TextureCoordinate()

IndexedFaceSet1182.texCoord = TextureCoordinate1184

Shape1178.geometry = IndexedFaceSet1182

HAnimSegment1177.children.append(Shape1178)
HAnimSite1185 = x3d.HAnimSite()
HAnimSite1185.DEF = "l_metacarpal_5_Sites"
"""(l_metacarpal_phalanx_5 0.1929 0.7860 -0.1122)"""

HAnimSegment1177.children.append(HAnimSite1185)

HAnimJoint1176.children.append(HAnimSegment1177)
HAnimJoint1186 = x3d.HAnimJoint()
HAnimJoint1186.name = "l_metacarpophalangeal_5"
HAnimJoint1186.DEF = "hanim_l_metacarpophalangeal_5"
HAnimJoint1186.center = [0.18333,0.6381,-0.0370575]
HAnimJoint1186.ulimit = [0,0,0]
HAnimJoint1186.llimit = [0,0,0]
HAnimSegment1187 = x3d.HAnimSegment()
HAnimSegment1187.name = "l_carpal_proximal_phalanx_5"
HAnimSegment1187.DEF = "hanim_l_carpal_proximal_phalanx_5"
Shape1188 = x3d.Shape()
Shape1188.DEF = "l_carpal_proximal_phalanx_5_Shape"
Appearance1189 = x3d.Appearance()
Material1190 = x3d.Material()
Material1190.USE = "SurfaceDefault"

Appearance1189.material = Material1190
ImageTexture1191 = x3d.ImageTexture()
ImageTexture1191.USE = "JinLOA4TextureAtlas"

Appearance1189.texture = ImageTexture1191

Shape1188.appearance = Appearance1189
IndexedFaceSet1192 = x3d.IndexedFaceSet()
IndexedFaceSet1192.coordIndex = [10,8,6,-1,6,11,10,-1,0,3,5,-1,5,9,0,-1,11,6,4,-1,4,1,11,-1,2,7,3,-1,3,0,2,-1,1,4,7,-1,7,2,1,-1,9,5,8,-1,8,10,9,-1,5,3,7,-1,7,8,5,-1,6,8,7,-1,7,4,6,-1,17,13,1,-1,1,2,17,-1,14,15,26,-1,26,25,14,-1,0,9,15,-1,15,14,0,-1,13,12,11,-1,11,1,13,-1,2,0,14,-1,14,17,2,-1,12,34,36,-1,9,10,16,-1,16,15,9,-1,16,10,11,-1,11,12,16,-1,16,35,37,-1,37,15,16,-1,12,36,35,-1,35,16,12,-1,37,26,15,-1,12,13,23,-1,23,34,12,-1,13,17,24,-1,24,23,13,-1,17,14,25,-1,25,24,17,-1,19,20,21,-1,19,21,22,-1,18,19,22,-1,23,24,20,-1,20,19,23,-1,24,25,21,-1,21,20,24,-1,25,26,22,-1,22,21,25,-1,29,30,31,-1,28,29,31,-1,27,28,31,-1,27,31,32,-1,27,32,33,-1,34,23,19,-1,19,18,34,-1,35,36,30,-1,30,29,35,-1,36,34,31,-1,31,30,36,-1,34,18,32,-1,32,31,34,-1,18,22,33,-1,33,32,18,-1,22,26,27,-1,27,33,22,-1,26,37,28,-1,28,27,26,-1,37,35,29,-1,29,28,37,-1]
IndexedFaceSet1192.creaseAngle = 3.14159
IndexedFaceSet1192.texCoordIndex = [0,3,2,-1,2,1,0,-1,4,7,6,-1,6,5,4,-1,1,2,9,-1,9,8,1,-1,40,41,7,-1,7,4,40,-1,8,9,11,-1,11,10,8,-1,5,6,39,-1,39,38,5,-1,6,7,41,-1,41,39,6,-1,2,3,11,-1,11,9,2,-1,12,13,8,-1,8,10,12,-1,14,17,44,-1,44,43,14,-1,4,5,17,-1,17,14,4,-1,13,18,1,-1,1,8,13,-1,40,4,14,-1,14,42,40,-1,18,20,19,-1,5,38,45,-1,45,17,5,-1,21,0,1,-1,1,18,21,-1,45,47,46,-1,46,17,45,-1,18,19,23,-1,23,21,18,-1,46,44,17,-1,18,13,24,-1,24,20,18,-1,13,12,25,-1,25,24,13,-1,42,14,43,-1,43,48,42,-1,30,29,28,-1,30,28,27,-1,26,30,27,-1,24,25,29,-1,29,30,24,-1,25,15,28,-1,28,29,25,-1,15,16,27,-1,27,28,15,-1,36,35,34,-1,37,36,34,-1,31,37,34,-1,31,34,33,-1,31,33,32,-1,20,24,30,-1,30,26,20,-1,23,19,35,-1,35,36,23,-1,19,20,34,-1,34,35,19,-1,20,26,33,-1,33,34,20,-1,26,27,32,-1,32,33,26,-1,27,16,31,-1,31,32,27,-1,16,22,37,-1,37,31,16,-1,22,23,36,-1,36,37,22,-1]
Coordinate1193 = x3d.Coordinate()

IndexedFaceSet1192.coord = Coordinate1193
TextureCoordinate1194 = x3d.TextureCoordinate()

IndexedFaceSet1192.texCoord = TextureCoordinate1194

Shape1188.geometry = IndexedFaceSet1192

HAnimSegment1187.children.append(Shape1188)
HAnimSite1195 = x3d.HAnimSite()
HAnimSite1195.DEF = "l_carpal_proximal_phalanx_5_Sites"
"""None"""

HAnimSegment1187.children.append(HAnimSite1195)

HAnimJoint1186.children.append(HAnimSegment1187)
HAnimJoint1196 = x3d.HAnimJoint()
HAnimJoint1196.name = "l_carpal_proximal_interphalangeal_5"
HAnimJoint1196.DEF = "hanim_l_carpal_proximal_interphalangeal_5"
HAnimJoint1196.center = [0.18166502,0.62100005,-0.037147503]
HAnimJoint1196.ulimit = [0,0,0]
HAnimJoint1196.llimit = [0,0,0]
HAnimSegment1197 = x3d.HAnimSegment()
HAnimSegment1197.name = "l_carpal_middle_phalanx_5"
HAnimSegment1197.DEF = "hanim_l_carpal_middle_phalanx_5"
Shape1198 = x3d.Shape()
Shape1198.DEF = "l_carpal_middle_phalanx_5_Shape"
Appearance1199 = x3d.Appearance()
Material1200 = x3d.Material()
Material1200.USE = "SurfaceDefault"

Appearance1199.material = Material1200
ImageTexture1201 = x3d.ImageTexture()
ImageTexture1201.USE = "JinLOA4TextureAtlas"

Appearance1199.texture = ImageTexture1201

Shape1198.appearance = Appearance1199
IndexedFaceSet1202 = x3d.IndexedFaceSet()
IndexedFaceSet1202.coordIndex = [1,15,14,-1,14,7,1,-1,8,14,3,-1,1,7,5,-1,5,18,1,-1,3,2,21,-1,21,4,3,-1,6,8,3,-1,3,4,6,-1,6,4,13,-1,0,18,5,-1,5,13,0,-1,13,4,21,-1,21,0,13,-1,2,3,14,-1,14,15,2,-1,8,6,12,-1,12,11,8,-1,7,10,9,-1,9,5,7,-1,10,11,12,-1,12,9,10,-1,8,11,10,-1,10,14,8,-1,13,9,12,-1,12,6,13,-1,9,13,5,-1,7,14,10,-1,15,17,16,-1,16,2,15,-1,18,20,19,-1,19,1,18,-1,2,16,22,-1,22,21,2,-1,0,23,20,-1,20,18,0,-1,21,22,23,-1,23,0,21,-1,1,19,17,-1,17,15,1,-1,19,20,23,-1,23,17,19,-1,16,17,23,-1,23,22,16,-1]
IndexedFaceSet1202.creaseAngle = 3.14159
IndexedFaceSet1202.texCoordIndex = [3,25,24,-1,24,0,3,-1,4,1,5,-1,3,0,7,-1,7,6,3,-1,5,10,9,-1,9,8,5,-1,11,4,5,-1,5,8,11,-1,11,8,12,-1,27,6,7,-1,7,26,27,-1,12,8,9,-1,9,13,12,-1,10,5,1,-1,1,2,10,-1,4,11,15,-1,15,14,4,-1,0,28,29,-1,29,7,0,-1,16,14,15,-1,15,17,16,-1,4,14,16,-1,16,1,4,-1,12,17,15,-1,15,11,12,-1,29,26,7,-1,0,24,28,-1,2,19,18,-1,18,10,2,-1,6,21,20,-1,20,3,6,-1,10,18,22,-1,22,9,10,-1,27,31,21,-1,21,6,27,-1,9,22,23,-1,23,13,9,-1,3,20,30,-1,30,25,3,-1,20,21,31,-1,31,30,20,-1,18,19,23,-1,23,22,18,-1]
Coordinate1203 = x3d.Coordinate()

IndexedFaceSet1202.coord = Coordinate1203
TextureCoordinate1204 = x3d.TextureCoordinate()

IndexedFaceSet1202.texCoord = TextureCoordinate1204

Shape1198.geometry = IndexedFaceSet1202

HAnimSegment1197.children.append(Shape1198)
HAnimSite1205 = x3d.HAnimSite()
HAnimSite1205.DEF = "l_carpal_middle_phalanx_5_Sites"
"""None"""

HAnimSegment1197.children.append(HAnimSite1205)

HAnimJoint1196.children.append(HAnimSegment1197)
HAnimJoint1206 = x3d.HAnimJoint()
HAnimJoint1206.name = "l_carpal_distal_interphalangeal_5"
HAnimJoint1206.DEF = "hanim_l_carpal_distal_interphalangeal_5"
HAnimJoint1206.center = [0.18081002,0.602325,-0.0369675]
HAnimJoint1206.ulimit = [0,0,0]
HAnimJoint1206.llimit = [0,0,0]
HAnimSegment1207 = x3d.HAnimSegment()
HAnimSegment1207.name = "l_carpal_distal_phalanx_5"
HAnimSegment1207.DEF = "hanim_l_carpal_distal_phalanx_5"
Shape1208 = x3d.Shape()
Shape1208.DEF = "l_carpal_distal_phalanx_5_Shape"
Appearance1209 = x3d.Appearance()
Material1210 = x3d.Material()
Material1210.USE = "SurfaceDefault"

Appearance1209.material = Material1210
ImageTexture1211 = x3d.ImageTexture()
ImageTexture1211.USE = "JinLOA4TextureAtlas"

Appearance1209.texture = ImageTexture1211

Shape1208.appearance = Appearance1209
IndexedFaceSet1212 = x3d.IndexedFaceSet()
IndexedFaceSet1212.coordIndex = [0,25,31,-1,24,1,32,-1,1,0,2,-1,2,3,1,-1,31,23,4,-1,4,5,31,-1,0,31,5,-1,5,2,0,-1,23,29,6,-1,6,4,23,-1,32,1,3,-1,3,7,32,-1,29,32,7,-1,7,6,29,-1,2,8,17,-1,17,14,2,-1,5,4,10,-1,10,11,5,-1,2,5,11,-1,11,8,2,-1,10,12,18,-1,18,21,10,-1,7,3,9,-1,9,13,7,-1,6,7,13,-1,13,12,6,-1,8,11,19,-1,19,17,8,-1,19,11,10,-1,10,21,19,-1,25,0,1,-1,1,24,25,-1,14,16,22,-1,22,20,14,-1,15,18,22,-1,22,16,15,-1,3,14,20,-1,20,9,3,-1,14,3,2,-1,4,6,12,-1,12,10,4,-1,21,18,15,-1,14,17,19,-1,19,16,14,-1,19,21,15,-1,15,16,19,-1,9,20,22,-1,22,13,9,-1,22,18,12,-1,12,13,22,-1,25,24,27,-1,27,26,25,-1,23,28,30,-1,30,29,23,-1,28,26,27,-1,27,30,28,-1,25,26,28,-1,28,31,25,-1,32,30,27,-1,27,24,32,-1,30,32,29,-1,23,31,28,-1]
IndexedFaceSet1212.creaseAngle = 3.14159
IndexedFaceSet1212.texCoordIndex = [0,2,1,-1,3,5,4,-1,5,0,7,-1,7,6,5,-1,33,10,9,-1,9,35,33,-1,0,1,8,-1,8,7,0,-1,10,12,11,-1,11,9,10,-1,4,5,6,-1,6,13,4,-1,12,34,36,-1,36,11,12,-1,7,16,15,-1,15,14,7,-1,35,9,18,-1,18,37,35,-1,7,8,17,-1,17,16,7,-1,18,19,21,-1,21,20,18,-1,13,6,23,-1,23,22,13,-1,11,36,38,-1,38,19,11,-1,16,17,24,-1,24,15,16,-1,39,37,18,-1,18,20,39,-1,2,0,5,-1,5,3,2,-1,14,25,27,-1,27,26,14,-1,28,21,41,-1,41,40,28,-1,6,14,26,-1,26,23,6,-1,14,6,7,-1,9,11,19,-1,19,18,9,-1,20,21,28,-1,14,15,24,-1,24,25,14,-1,39,20,28,-1,28,40,39,-1,23,26,27,-1,27,22,23,-1,41,21,19,-1,19,38,41,-1,2,3,30,-1,30,29,2,-1,10,42,43,-1,43,12,10,-1,31,29,30,-1,30,32,31,-1,2,29,31,-1,31,1,2,-1,4,32,30,-1,30,3,4,-1,43,34,12,-1,10,33,42,-1]
Coordinate1213 = x3d.Coordinate()

IndexedFaceSet1212.coord = Coordinate1213
TextureCoordinate1214 = x3d.TextureCoordinate()

IndexedFaceSet1212.texCoord = TextureCoordinate1214

Shape1208.geometry = IndexedFaceSet1212

HAnimSegment1207.children.append(Shape1208)
HAnimSite1215 = x3d.HAnimSite()
HAnimSite1215.DEF = "l_carpal_distal_phalanx_5_Sites"
"""(l_carpal_distal_phalanx_5_tip 0.2014 0.7009 -0.1012)"""

HAnimSegment1207.children.append(HAnimSite1215)

HAnimJoint1206.children.append(HAnimSegment1207)

HAnimJoint1196.children.append(HAnimJoint1206)

HAnimJoint1186.children.append(HAnimJoint1196)

HAnimJoint1176.children.append(HAnimJoint1186)

HAnimJoint976.children.append(HAnimJoint1176)

HAnimJoint966.children.append(HAnimJoint976)

HAnimJoint956.children.append(HAnimJoint966)

HAnimJoint946.children.append(HAnimJoint956)

HAnimJoint936.children.append(HAnimJoint946)

HAnimJoint776.children.append(HAnimJoint936)
HAnimJoint1216 = x3d.HAnimJoint()
HAnimJoint1216.name = "r_sternoclavicular"
HAnimJoint1216.DEF = "hanim_r_sternoclavicular"
HAnimJoint1216.center = [-0.038475003,1.2087001,-0.013785751]
HAnimJoint1216.ulimit = [0,0,0]
HAnimJoint1216.llimit = [0,0,0]
HAnimSegment1217 = x3d.HAnimSegment()
HAnimSegment1217.name = "r_clavicle"
HAnimSegment1217.DEF = "hanim_r_clavicle"
Shape1218 = x3d.Shape()
Shape1218.DEF = "r_clavicle_Shape"
Appearance1219 = x3d.Appearance()
Material1220 = x3d.Material()
Material1220.USE = "SurfaceDefault"

Appearance1219.material = Material1220
ImageTexture1221 = x3d.ImageTexture()
ImageTexture1221.USE = "JinLOA4TextureAtlas"

Appearance1219.texture = ImageTexture1221

Shape1218.appearance = Appearance1219
IndexedFaceSet1222 = x3d.IndexedFaceSet()
IndexedFaceSet1222.coordIndex = [9,0,1,-1,1,6,9,-1,6,1,2,-1,2,5,6,-1,8,5,2,-1,2,3,8,-1,8,3,4,-1,4,7,8,-1,9,7,4,-1,4,0,9,-1,4,3,2,-1,0,4,2,-1,1,0,2,-1,10,14,13,-1,10,13,12,-1,11,10,12,-1,6,10,11,-1,11,9,6,-1,9,11,12,-1,12,7,9,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,5,8,-1,5,14,10,-1,10,6,5,-1]
IndexedFaceSet1222.creaseAngle = 3.14159
IndexedFaceSet1222.texCoordIndex = [9,0,1,-1,1,6,9,-1,6,1,2,-1,2,5,6,-1,8,5,2,-1,2,3,8,-1,8,3,4,-1,4,7,8,-1,9,7,4,-1,4,0,9,-1,4,3,2,-1,0,4,2,-1,1,0,2,-1,10,14,13,-1,10,13,12,-1,11,10,12,-1,6,10,11,-1,11,9,6,-1,9,11,12,-1,12,7,9,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,5,8,-1,5,14,10,-1,10,6,5,-1]
Coordinate1223 = x3d.Coordinate()

IndexedFaceSet1222.coord = Coordinate1223
TextureCoordinate1224 = x3d.TextureCoordinate()

IndexedFaceSet1222.texCoord = TextureCoordinate1224

Shape1218.geometry = IndexedFaceSet1222

HAnimSegment1217.children.append(Shape1218)
HAnimSite1225 = x3d.HAnimSite()
HAnimSite1225.DEF = "r_clavicle_Sites"
"""(r_clavicale -0.0115 1.4943 0.0400)"""

HAnimSegment1217.children.append(HAnimSite1225)

HAnimJoint1216.children.append(HAnimSegment1217)
HAnimJoint1226 = x3d.HAnimJoint()
HAnimJoint1226.name = "r_acromioclavicular"
HAnimJoint1226.DEF = "hanim_r_acromioclavicular"
HAnimJoint1226.center = [-0.12294001,1.191825,-0.012897001]
HAnimJoint1226.ulimit = [0,0,0]
HAnimJoint1226.llimit = [0,0,0]
HAnimSegment1227 = x3d.HAnimSegment()
HAnimSegment1227.name = "r_scapula"
HAnimSegment1227.DEF = "hanim_r_scapula"
Shape1228 = x3d.Shape()
Shape1228.DEF = "r_scapula_Shape"
Appearance1229 = x3d.Appearance()
Material1230 = x3d.Material()
Material1230.USE = "SurfaceDefault"

Appearance1229.material = Material1230
ImageTexture1231 = x3d.ImageTexture()
ImageTexture1231.USE = "JinLOA4TextureAtlas"

Appearance1229.texture = ImageTexture1231

Shape1228.appearance = Appearance1229
IndexedFaceSet1232 = x3d.IndexedFaceSet()
IndexedFaceSet1232.coordIndex = [5,1,0,-1,0,4,5,-1,4,0,2,-1,2,3,4,-1,3,2,6,-1,6,9,3,-1,7,8,1,-1,1,5,7,-1,6,2,0,-1,0,8,6,-1,0,1,8,-1,9,6,8,-1,8,7,9,-1,4,10,11,-1,11,5,4,-1,5,11,12,-1,12,7,5,-1,7,12,13,-1,13,9,7,-1,9,13,14,-1,14,3,9,-1,3,14,10,-1,10,4,3,-1,10,15,11,-1,11,15,12,-1,12,15,13,-1,13,15,14,-1,14,15,10,-1]
IndexedFaceSet1232.creaseAngle = 3.14159
IndexedFaceSet1232.texCoordIndex = [5,1,0,-1,0,4,5,-1,4,0,2,-1,2,3,4,-1,3,2,6,-1,6,8,3,-1,9,7,1,-1,1,5,9,-1,6,2,0,-1,0,7,6,-1,0,1,7,-1,12,10,11,-1,11,13,12,-1,4,14,15,-1,15,5,4,-1,5,15,16,-1,16,9,5,-1,13,16,17,-1,17,12,13,-1,8,17,18,-1,18,3,8,-1,3,18,14,-1,14,4,3,-1,14,19,15,-1,15,19,16,-1,16,19,17,-1,17,19,18,-1,18,19,14,-1]
Coordinate1233 = x3d.Coordinate()

IndexedFaceSet1232.coord = Coordinate1233
TextureCoordinate1234 = x3d.TextureCoordinate()

IndexedFaceSet1232.texCoord = TextureCoordinate1234

Shape1228.geometry = IndexedFaceSet1232

HAnimSegment1227.children.append(Shape1228)
HAnimSite1235 = x3d.HAnimSite()
HAnimSite1235.DEF = "r_scapula_Sites"
"""(r_acromion -0.1905 1.4791 -0.0431) (r_axilla_proximal -0.1626 1.4072 -0.0031) (r_axilla_distal -0.1603 1.4098 -0.0826) (r_axilla_posterior_folds x y z)"""

HAnimSegment1227.children.append(HAnimSite1235)

HAnimJoint1226.children.append(HAnimSegment1227)
HAnimJoint1236 = x3d.HAnimJoint()
HAnimJoint1236.name = "r_shoulder"
HAnimJoint1236.DEF = "hanim_r_shoulder"
HAnimJoint1236.center = [-0.16470002,1.1785501,-0.0032670002]
HAnimJoint1236.ulimit = [0,0,0]
HAnimJoint1236.llimit = [0,0,0]
HAnimSegment1237 = x3d.HAnimSegment()
HAnimSegment1237.name = "r_upperarm"
HAnimSegment1237.DEF = "hanim_r_upperarm"
Shape1238 = x3d.Shape()
Shape1238.DEF = "r_upperarm_Shape"
Appearance1239 = x3d.Appearance()
Material1240 = x3d.Material()
Material1240.USE = "SurfaceDefault"

Appearance1239.material = Material1240
ImageTexture1241 = x3d.ImageTexture()
ImageTexture1241.USE = "JinLOA4TextureAtlas"

Appearance1239.texture = ImageTexture1241

Shape1238.appearance = Appearance1239
IndexedFaceSet1242 = x3d.IndexedFaceSet()
IndexedFaceSet1242.coordIndex = [0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,38,37,36,-1,38,36,35,-1,39,38,35,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1,26,41,40,-1,40,25,26,-1,27,42,41,-1,41,26,27,-1,28,43,42,-1,42,27,28,-1,29,44,43,-1,43,28,29,-1,25,40,44,-1,44,29,25,-1,31,26,25,-1,25,30,31,-1,32,27,26,-1,26,31,32,-1,33,28,27,-1,27,32,33,-1,34,29,28,-1,28,33,34,-1,30,25,29,-1,29,34,30,-1,36,31,30,-1,30,35,36,-1,37,32,31,-1,31,36,37,-1,38,33,32,-1,32,37,38,-1,39,34,33,-1,33,38,39,-1,35,30,34,-1,34,39,35,-1]
IndexedFaceSet1242.creaseAngle = 3.14159
IndexedFaceSet1242.texCoordIndex = [1,0,2,-1,1,2,3,-1,55,1,3,-1,1,6,5,-1,5,0,1,-1,0,5,7,-1,7,2,0,-1,2,7,8,-1,8,3,2,-1,25,26,9,-1,9,4,25,-1,4,9,6,-1,6,1,4,-1,6,11,10,-1,10,5,6,-1,5,10,12,-1,12,7,5,-1,7,12,13,-1,13,8,7,-1,27,28,14,-1,14,9,27,-1,9,14,11,-1,11,6,9,-1,11,16,15,-1,15,10,11,-1,10,15,17,-1,17,12,10,-1,12,17,18,-1,18,13,12,-1,29,30,19,-1,19,14,29,-1,14,19,16,-1,16,11,14,-1,36,35,49,-1,36,49,48,-1,37,36,48,-1,20,15,16,-1,16,21,20,-1,22,17,15,-1,15,20,22,-1,23,18,17,-1,17,22,23,-1,24,19,31,-1,31,32,24,-1,21,16,19,-1,19,24,21,-1,38,57,56,-1,56,39,38,-1,40,59,58,-1,58,50,40,-1,41,60,59,-1,59,40,41,-1,42,61,60,-1,60,41,42,-1,39,56,61,-1,61,42,39,-1,43,38,39,-1,39,44,43,-1,45,40,51,-1,51,52,45,-1,46,41,40,-1,40,45,46,-1,47,42,41,-1,41,46,47,-1,44,39,42,-1,42,47,44,-1,34,43,44,-1,44,33,34,-1,35,45,53,-1,53,54,35,-1,36,46,45,-1,45,35,36,-1,37,47,46,-1,46,36,37,-1,33,44,47,-1,47,37,33,-1]
Coordinate1243 = x3d.Coordinate()

IndexedFaceSet1242.coord = Coordinate1243
TextureCoordinate1244 = x3d.TextureCoordinate()

IndexedFaceSet1242.texCoord = TextureCoordinate1244

Shape1238.geometry = IndexedFaceSet1242

HAnimSegment1237.children.append(Shape1238)
HAnimSite1245 = x3d.HAnimSite()
HAnimSite1245.DEF = "r_upperarm_Sites"
"""(r_humeral_lateral_epicondyles -0.2224 1.1517 -0.1033) (r_humeral_medial_epicondyles -0.1680 1.1298 -0.1062) (r_radiale -0.2130 1.1305 -0.1091) (r_bideltoid x y z)"""

HAnimSegment1237.children.append(HAnimSite1245)

HAnimJoint1236.children.append(HAnimSegment1237)
HAnimJoint1246 = x3d.HAnimJoint()
HAnimJoint1246.name = "r_elbow"
HAnimJoint1246.DEF = "hanim_r_elbow"
HAnimJoint1246.center = [-0.1817325,0.9288,-0.0056295004]
HAnimJoint1246.ulimit = [0,0,0]
HAnimJoint1246.llimit = [0,0,0]
HAnimSegment1247 = x3d.HAnimSegment()
HAnimSegment1247.name = "r_forearm"
HAnimSegment1247.DEF = "hanim_r_forearm"
Shape1248 = x3d.Shape()
Shape1248.DEF = "r_forearm_Shape"
Appearance1249 = x3d.Appearance()
Material1250 = x3d.Material()
Material1250.USE = "SurfaceDefault"

Appearance1249.material = Material1250
ImageTexture1251 = x3d.ImageTexture()
ImageTexture1251.USE = "JinLOA4TextureAtlas"

Appearance1249.texture = ImageTexture1251

Shape1248.appearance = Appearance1249
IndexedFaceSet1252 = x3d.IndexedFaceSet()
IndexedFaceSet1252.coordIndex = [0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,23,22,21,-1,23,21,20,-1,24,23,20,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1]
IndexedFaceSet1252.creaseAngle = 3.14159
IndexedFaceSet1252.texCoordIndex = [4,3,2,-1,4,2,1,-1,0,4,1,-1,4,6,5,-1,5,3,4,-1,3,5,7,-1,7,2,3,-1,2,7,8,-1,8,1,2,-1,1,8,9,-1,9,0,1,-1,0,9,6,-1,6,4,0,-1,6,11,10,-1,10,5,6,-1,5,10,12,-1,12,7,5,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,11,-1,11,6,9,-1,11,16,15,-1,15,10,11,-1,10,15,17,-1,17,12,10,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,16,-1,16,11,14,-1,24,23,22,-1,24,22,21,-1,20,24,21,-1,22,15,16,-1,16,21,22,-1,23,17,15,-1,15,22,23,-1,24,18,17,-1,17,23,24,-1,20,19,18,-1,18,24,20,-1,21,16,19,-1,19,20,21,-1]
Coordinate1253 = x3d.Coordinate()

IndexedFaceSet1252.coord = Coordinate1253
TextureCoordinate1254 = x3d.TextureCoordinate()

IndexedFaceSet1252.texCoord = TextureCoordinate1254

Shape1248.geometry = IndexedFaceSet1252

HAnimSegment1247.children.append(Shape1248)
HAnimSite1255 = x3d.HAnimSite()
HAnimSite1255.DEF = "r_forearm_Sites"
"""(r_radial_styloid -0.1884 0.8676 -0.0360) (r_olecranon -0.1907 1.1405 -0.1065)"""

HAnimSegment1247.children.append(HAnimSite1255)

HAnimJoint1246.children.append(HAnimSegment1247)
HAnimJoint1256 = x3d.HAnimJoint()
HAnimJoint1256.name = "r_radiocarpal"
HAnimJoint1256.DEF = "hanim_r_radiocarpal"
HAnimJoint1256.center = [-0.181575,0.724275,-0.005022]
HAnimJoint1256.ulimit = [0,0,0]
HAnimJoint1256.llimit = [0,0,0]
HAnimSegment1257 = x3d.HAnimSegment()
HAnimSegment1257.name = "r_carpal"
HAnimSegment1257.DEF = "hanim_r_carpal"
Shape1258 = x3d.Shape()
Shape1258.DEF = "r_carpal_Shape"
Appearance1259 = x3d.Appearance()
Material1260 = x3d.Material()
Material1260.USE = "SurfaceDefault"

Appearance1259.material = Material1260
ImageTexture1261 = x3d.ImageTexture()
ImageTexture1261.USE = "JinLOA4TextureAtlas"

Appearance1259.texture = ImageTexture1261

Shape1258.appearance = Appearance1259
IndexedFaceSet1262 = x3d.IndexedFaceSet()
IndexedFaceSet1262.coordIndex = [0,11,12,-1,12,1,0,-1,1,12,13,-1,13,2,1,-1,2,13,10,-1,10,17,2,-1,3,16,8,-1,8,4,3,-1,5,20,21,-1,21,19,5,-1,6,18,15,-1,15,14,6,-1,6,14,9,-1,9,7,6,-1,7,9,11,-1,11,0,7,-1,15,18,5,-1,5,19,15,-1,10,16,3,-1,3,17,10,-1,4,8,21,-1,21,20,4,-1,0,1,22,-1,1,2,22,-1,2,17,22,-1,17,3,22,-1,3,4,22,-1,4,20,22,-1,20,5,22,-1,5,18,22,-1,18,6,22,-1,6,7,22,-1,7,0,22,-1,16,10,24,-1,24,23,16,-1,10,13,25,-1,25,24,10,-1,13,12,26,-1,26,25,13,-1,12,11,27,-1,27,26,12,-1,11,9,28,-1,28,27,11,-1,9,14,29,-1,29,28,9,-1,14,15,30,-1,30,29,14,-1,15,19,31,-1,31,30,15,-1,19,21,32,-1,32,31,19,-1,21,8,33,-1,33,32,21,-1,8,16,23,-1,23,33,8,-1,23,24,34,-1,24,25,34,-1,25,26,34,-1,26,27,34,-1,27,28,34,-1,28,29,34,-1,29,30,34,-1,30,31,34,-1,31,32,34,-1,32,33,34,-1,33,23,34,-1]
IndexedFaceSet1262.creaseAngle = 3.14159
IndexedFaceSet1262.texCoordIndex = [2,3,0,-1,0,1,2,-1,1,0,4,-1,4,5,1,-1,5,4,7,-1,7,6,5,-1,10,11,8,-1,8,9,10,-1,12,37,38,-1,38,15,12,-1,17,18,19,-1,19,16,17,-1,17,16,20,-1,20,21,17,-1,21,20,36,-1,36,35,21,-1,19,18,12,-1,12,15,19,-1,7,11,10,-1,10,6,7,-1,9,8,14,-1,14,13,9,-1,2,1,22,-1,1,5,22,-1,5,6,22,-1,6,10,22,-1,10,9,22,-1,9,13,22,-1,37,12,39,-1,12,18,39,-1,18,17,39,-1,17,21,39,-1,21,35,39,-1,11,7,23,-1,23,24,11,-1,7,4,25,-1,25,23,7,-1,4,0,26,-1,26,25,4,-1,0,3,27,-1,27,26,0,-1,36,20,28,-1,28,40,36,-1,20,16,29,-1,29,28,20,-1,16,19,30,-1,30,29,16,-1,19,15,31,-1,31,30,19,-1,15,38,41,-1,41,31,15,-1,14,8,33,-1,33,32,14,-1,8,11,24,-1,24,33,8,-1,24,23,34,-1,23,25,34,-1,25,26,34,-1,26,27,34,-1,40,28,42,-1,28,29,42,-1,29,30,42,-1,30,31,42,-1,31,41,42,-1,32,33,34,-1,33,24,34,-1]
Coordinate1263 = x3d.Coordinate()

IndexedFaceSet1262.coord = Coordinate1263
TextureCoordinate1264 = x3d.TextureCoordinate()

IndexedFaceSet1262.texCoord = TextureCoordinate1264

Shape1258.geometry = IndexedFaceSet1262

HAnimSegment1257.children.append(Shape1258)
HAnimSite1265 = x3d.HAnimSite()
HAnimSite1265.DEF = "r_carpal_Sites"
"""(r_ulnar_styloid -0.2117 0.8562 -0.0584)"""

HAnimSegment1257.children.append(HAnimSite1265)

HAnimJoint1256.children.append(HAnimSegment1257)
HAnimJoint1266 = x3d.HAnimJoint()
HAnimJoint1266.name = "r_midcarpal_1"
HAnimJoint1266.DEF = "hanim_r_midcarpal_1"
HAnimJoint1266.center = [-0.18096751,0.70605004,0.0193275]
HAnimJoint1266.ulimit = [0,0,0]
HAnimJoint1266.llimit = [0,0,0]
HAnimSegment1267 = x3d.HAnimSegment()
HAnimSegment1267.name = "r_trapezium"
HAnimSegment1267.DEF = "hanim_r_trapezium"
Shape1268 = x3d.Shape()
Shape1268.DEF = "r_trapezium_Shape"
Appearance1269 = x3d.Appearance()
Material1270 = x3d.Material()
Material1270.USE = "SurfaceDefault"

Appearance1269.material = Material1270
ImageTexture1271 = x3d.ImageTexture()
ImageTexture1271.USE = "JinLOA4TextureAtlas"

Appearance1269.texture = ImageTexture1271

Shape1268.appearance = Appearance1269
IndexedFaceSet1272 = x3d.IndexedFaceSet()
IndexedFaceSet1272.coordIndex = [6,0,3,-1,3,5,6,-1,5,3,2,-1,2,8,5,-1,1,7,4,-1,2,7,8,-1,7,2,4,-1,14,15,16,-1,16,17,14,-1,9,10,13,-1,10,11,12,-1,12,13,10,-1,1,4,10,-1,10,9,1,-1,4,2,11,-1,11,10,4,-1,2,3,12,-1,12,11,2,-1,3,0,13,-1,13,12,3,-1,6,5,15,-1,15,14,6,-1,5,8,16,-1,16,15,5,-1,8,7,17,-1,17,16,8,-1,18,25,24,-1,24,23,22,-1,18,24,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,6,18,19,-1,19,0,6,-1,0,19,20,-1,20,13,0,-1,13,20,21,-1,21,9,13,-1,9,21,22,-1,22,1,9,-1,1,22,23,-1,23,7,1,-1,7,23,24,-1,24,17,7,-1,17,24,25,-1,25,14,17,-1,14,25,18,-1,18,6,14,-1]
IndexedFaceSet1272.creaseAngle = 3.14159
IndexedFaceSet1272.texCoordIndex = [0,1,2,-1,2,3,0,-1,3,2,4,-1,4,5,3,-1,7,6,8,-1,18,6,19,-1,6,18,8,-1,21,22,23,-1,23,12,21,-1,9,15,10,-1,15,16,17,-1,17,10,15,-1,7,8,24,-1,24,20,7,-1,8,18,25,-1,25,24,8,-1,4,2,17,-1,17,16,4,-1,2,1,10,-1,10,17,2,-1,0,3,13,-1,13,11,0,-1,3,5,14,-1,14,13,3,-1,19,6,12,-1,12,23,19,-1,26,33,32,-1,32,31,30,-1,26,32,30,-1,30,29,28,-1,26,30,28,-1,27,26,28,-1,0,26,27,-1,27,1,0,-1,1,27,28,-1,28,10,1,-1,10,28,29,-1,29,9,10,-1,20,29,30,-1,30,7,20,-1,7,30,31,-1,31,6,7,-1,6,31,32,-1,32,12,6,-1,12,32,33,-1,33,21,12,-1,11,33,26,-1,26,0,11,-1]
Coordinate1273 = x3d.Coordinate()

IndexedFaceSet1272.coord = Coordinate1273
TextureCoordinate1274 = x3d.TextureCoordinate()

IndexedFaceSet1272.texCoord = TextureCoordinate1274

Shape1268.geometry = IndexedFaceSet1272

HAnimSegment1267.children.append(Shape1268)
HAnimSite1275 = x3d.HAnimSite()
HAnimSite1275.DEF = "r_trapezium_Sites"
"""None"""

HAnimSegment1267.children.append(HAnimSite1275)

HAnimJoint1266.children.append(HAnimSegment1267)
HAnimJoint1276 = x3d.HAnimJoint()
HAnimJoint1276.name = "r_carpometacarpal_1"
HAnimJoint1276.DEF = "hanim_r_carpometacarpal_1"
HAnimJoint1276.center = [-0.180135,0.69255006,0.0259875]
HAnimJoint1276.ulimit = [0,0,0]
HAnimJoint1276.llimit = [0,0,0]
HAnimSegment1277 = x3d.HAnimSegment()
HAnimSegment1277.name = "r_metacarpal_1"
HAnimSegment1277.DEF = "hanim_r_metacarpal_1"
Shape1278 = x3d.Shape()
Shape1278.DEF = "r_metacarpal_1_Shape"
Appearance1279 = x3d.Appearance()
Material1280 = x3d.Material()
Material1280.USE = "SurfaceDefault"

Appearance1279.material = Material1280
ImageTexture1281 = x3d.ImageTexture()
ImageTexture1281.USE = "JinLOA4TextureAtlas"

Appearance1279.texture = ImageTexture1281

Shape1278.appearance = Appearance1279
IndexedFaceSet1282 = x3d.IndexedFaceSet()
IndexedFaceSet1282.coordIndex = [1,8,9,-1,9,2,1,-1,8,1,0,-1,0,10,8,-1,2,9,6,-1,6,3,2,-1,0,4,7,-1,7,10,0,-1,5,3,6,-1,25,21,22,-1,24,25,22,-1,23,24,22,-1,19,20,17,-1,17,18,19,-1,13,14,11,-1,11,12,13,-1,14,15,16,-1,16,11,14,-1,3,5,12,-1,12,11,3,-1,5,4,13,-1,13,12,5,-1,4,0,14,-1,14,13,4,-1,0,1,15,-1,15,14,0,-1,1,2,16,-1,16,15,1,-1,2,3,11,-1,11,16,2,-1,7,4,18,-1,18,17,7,-1,4,5,19,-1,19,18,4,-1,5,6,20,-1,20,19,5,-1,6,7,17,-1,17,20,6,-1,10,7,22,-1,22,21,10,-1,7,6,23,-1,23,22,7,-1,6,9,24,-1,24,23,6,-1,9,8,25,-1,25,24,9,-1,8,10,21,-1,21,25,8,-1]
IndexedFaceSet1282.creaseAngle = 3.14159
IndexedFaceSet1282.texCoordIndex = [0,1,2,-1,2,3,0,-1,27,26,28,-1,28,4,27,-1,3,2,7,-1,7,6,3,-1,28,29,30,-1,30,4,28,-1,10,6,7,-1,13,14,15,-1,12,13,15,-1,11,12,15,-1,16,17,18,-1,18,19,16,-1,20,21,22,-1,22,23,20,-1,21,24,25,-1,25,22,21,-1,6,10,23,-1,23,22,6,-1,10,8,20,-1,20,23,10,-1,8,5,21,-1,21,20,8,-1,5,0,24,-1,24,21,5,-1,0,3,25,-1,25,24,0,-1,3,6,22,-1,22,25,3,-1,30,29,35,-1,35,34,30,-1,8,10,16,-1,16,19,8,-1,10,7,17,-1,17,16,10,-1,7,9,18,-1,18,17,7,-1,4,30,33,-1,33,32,4,-1,9,7,11,-1,11,15,9,-1,7,2,12,-1,12,11,7,-1,2,1,13,-1,13,12,2,-1,27,4,32,-1,32,31,27,-1]
Coordinate1283 = x3d.Coordinate()

IndexedFaceSet1282.coord = Coordinate1283
TextureCoordinate1284 = x3d.TextureCoordinate()

IndexedFaceSet1282.texCoord = TextureCoordinate1284

Shape1278.geometry = IndexedFaceSet1282

HAnimSegment1277.children.append(Shape1278)
HAnimSite1285 = x3d.HAnimSite()
HAnimSite1285.DEF = "r_metacarpal_1_Sites"
"""(r_metacarpal_phalanx_2 -0.1977 0.8169 -0.0177)"""

HAnimSegment1277.children.append(HAnimSite1285)

HAnimJoint1276.children.append(HAnimSegment1277)
HAnimJoint1286 = x3d.HAnimJoint()
HAnimJoint1286.name = "r_metacarpophalangeal_1"
HAnimJoint1286.DEF = "hanim_r_metacarpophalangeal_1"
HAnimJoint1286.center = [-0.18065251,0.67275,0.035775002]
HAnimJoint1286.ulimit = [0,0,0]
HAnimJoint1286.llimit = [0,0,0]
HAnimSegment1287 = x3d.HAnimSegment()
HAnimSegment1287.name = "r_carpal_proximal_phalanx_1"
HAnimSegment1287.DEF = "hanim_r_carpal_proximal_phalanx_1"
Shape1288 = x3d.Shape()
Shape1288.DEF = "r_carpal_proximal_phalanx_1_Shape"
Appearance1289 = x3d.Appearance()
Material1290 = x3d.Material()
Material1290.USE = "SurfaceDefault"

Appearance1289.material = Material1290
ImageTexture1291 = x3d.ImageTexture()
ImageTexture1291.USE = "JinLOA4TextureAtlas"

Appearance1289.texture = ImageTexture1291

Shape1288.appearance = Appearance1289
IndexedFaceSet1292 = x3d.IndexedFaceSet()
IndexedFaceSet1292.coordIndex = [5,6,0,-1,7,3,14,-1,14,13,7,-1,5,0,17,-1,17,10,5,-1,4,5,10,-1,10,9,4,-1,3,4,9,-1,9,14,3,-1,0,1,19,-1,19,17,0,-1,1,7,13,-1,13,19,1,-1,1,0,2,-1,0,6,8,-1,8,2,0,-1,9,10,11,-1,11,12,9,-1,13,14,15,-1,15,16,13,-1,10,17,18,-1,18,11,10,-1,19,13,16,-1,16,20,19,-1,17,19,20,-1,20,18,17,-1,14,9,12,-1,12,15,14,-1,15,12,20,-1,20,16,15,-1,11,18,20,-1,20,12,11,-1,22,23,24,-1,24,25,26,-1,22,24,26,-1,21,22,26,-1,28,29,30,-1,30,27,28,-1,8,6,22,-1,22,21,8,-1,6,5,23,-1,23,22,6,-1,5,4,24,-1,24,23,5,-1,4,3,25,-1,25,24,4,-1,3,7,26,-1,26,25,3,-1,27,30,31,-1,31,32,27,-1,7,1,28,-1,28,27,7,-1,1,2,29,-1,29,28,1,-1,2,8,30,-1,30,29,2,-1,8,21,31,-1,31,30,8,-1,21,26,32,-1,32,31,21,-1,26,7,27,-1,27,32,26,-1]
IndexedFaceSet1292.creaseAngle = 3.14159
IndexedFaceSet1292.texCoordIndex = [0,1,2,-1,36,33,34,-1,34,35,36,-1,0,2,7,-1,7,8,0,-1,10,0,8,-1,8,9,10,-1,33,38,37,-1,37,34,33,-1,2,11,12,-1,12,7,2,-1,39,36,35,-1,35,40,39,-1,11,2,13,-1,2,1,14,-1,14,13,2,-1,9,8,15,-1,15,16,9,-1,5,4,17,-1,17,18,5,-1,8,7,19,-1,19,15,8,-1,12,5,18,-1,18,20,12,-1,7,12,20,-1,20,19,7,-1,4,9,16,-1,16,17,4,-1,17,16,20,-1,20,18,17,-1,15,19,20,-1,20,16,15,-1,22,23,24,-1,24,25,26,-1,22,24,26,-1,21,22,26,-1,28,29,30,-1,30,27,28,-1,14,1,22,-1,22,21,14,-1,1,0,23,-1,23,22,1,-1,0,10,24,-1,24,23,0,-1,10,3,25,-1,25,24,10,-1,33,36,42,-1,42,41,33,-1,27,30,31,-1,31,32,27,-1,6,11,28,-1,28,27,6,-1,11,13,29,-1,29,28,11,-1,13,14,30,-1,30,29,13,-1,14,21,31,-1,31,30,14,-1,21,26,32,-1,32,31,21,-1,42,36,43,-1,43,44,42,-1]
Coordinate1293 = x3d.Coordinate()

IndexedFaceSet1292.coord = Coordinate1293
TextureCoordinate1294 = x3d.TextureCoordinate()

IndexedFaceSet1292.texCoord = TextureCoordinate1294

Shape1288.geometry = IndexedFaceSet1292

HAnimSegment1287.children.append(Shape1288)
HAnimSite1295 = x3d.HAnimSite()
HAnimSite1295.DEF = "r_carpal_proximal_phalanx_1_Sites"
"""None"""

HAnimSegment1287.children.append(HAnimSite1295)

HAnimJoint1286.children.append(HAnimSegment1287)
HAnimJoint1296 = x3d.HAnimJoint()
HAnimJoint1296.name = "r_carpal_interphalangeal_1"
HAnimJoint1296.DEF = "hanim_r_carpal_interphalangeal_1"
HAnimJoint1296.center = [-0.18227251,0.654075,0.0496575]
HAnimJoint1296.ulimit = [0,0,0]
HAnimJoint1296.llimit = [0,0,0]
HAnimSegment1297 = x3d.HAnimSegment()
HAnimSegment1297.name = "r_carpal_distal_phalanx_1"
HAnimSegment1297.DEF = "hanim_r_carpal_distal_phalanx_1"
Shape1298 = x3d.Shape()
Shape1298.DEF = "r_carpal_distal_phalanx_1_Shape"
Appearance1299 = x3d.Appearance()
Material1300 = x3d.Material()
Material1300.USE = "SurfaceDefault"

Appearance1299.material = Material1300
ImageTexture1301 = x3d.ImageTexture()
ImageTexture1301.USE = "JinLOA4TextureAtlas"

Appearance1299.texture = ImageTexture1301

Shape1298.appearance = Appearance1299
IndexedFaceSet1302 = x3d.IndexedFaceSet()
IndexedFaceSet1302.coordIndex = [0,29,28,-1,28,11,0,-1,32,2,17,-1,17,1,32,-1,4,3,1,-1,1,17,4,-1,11,28,31,-1,31,5,11,-1,29,0,2,-1,2,32,29,-1,4,5,31,-1,31,3,4,-1,23,32,1,-1,24,3,31,-1,24,23,1,-1,1,3,24,-1,4,6,7,-1,7,8,4,-1,5,9,10,-1,10,11,5,-1,4,8,9,-1,9,5,4,-1,10,13,14,-1,14,12,10,-1,2,15,16,-1,16,17,2,-1,0,12,15,-1,15,2,0,-1,8,7,18,-1,18,9,8,-1,18,13,10,-1,10,9,18,-1,6,20,21,-1,21,19,6,-1,22,19,21,-1,21,14,22,-1,17,16,20,-1,20,6,17,-1,6,4,17,-1,11,10,12,-1,12,0,11,-1,13,22,14,-1,6,19,18,-1,18,7,6,-1,18,19,22,-1,22,13,18,-1,16,15,21,-1,21,20,16,-1,21,15,12,-1,12,14,21,-1,24,25,26,-1,26,23,24,-1,28,29,30,-1,30,27,28,-1,27,30,26,-1,26,25,27,-1,24,31,27,-1,27,25,24,-1,32,23,26,-1,26,30,32,-1,30,29,32,-1,28,27,31,-1]
IndexedFaceSet1302.creaseAngle = 3.14159
IndexedFaceSet1302.texCoordIndex = [3,33,34,-1,34,2,3,-1,4,5,6,-1,6,7,4,-1,9,8,7,-1,7,6,9,-1,2,34,37,-1,37,38,2,-1,33,3,36,-1,36,35,33,-1,9,11,10,-1,10,8,9,-1,12,4,7,-1,13,8,10,-1,13,12,7,-1,7,8,13,-1,9,14,15,-1,15,16,9,-1,38,39,18,-1,18,2,38,-1,9,16,17,-1,17,11,9,-1,18,20,21,-1,21,19,18,-1,5,22,23,-1,23,6,5,-1,3,19,40,-1,40,36,3,-1,16,15,24,-1,24,17,16,-1,41,20,18,-1,18,39,41,-1,14,26,27,-1,27,25,14,-1,28,42,43,-1,43,21,28,-1,6,23,26,-1,26,14,6,-1,14,9,6,-1,2,18,19,-1,19,3,2,-1,20,28,21,-1,14,25,24,-1,24,15,14,-1,41,42,28,-1,28,20,41,-1,23,22,27,-1,27,26,23,-1,43,40,19,-1,19,21,43,-1,13,29,30,-1,30,12,13,-1,1,0,32,-1,32,31,1,-1,31,32,30,-1,30,29,31,-1,13,10,31,-1,31,29,13,-1,4,12,30,-1,30,32,4,-1,32,0,4,-1,1,31,10,-1]
Coordinate1303 = x3d.Coordinate()

IndexedFaceSet1302.coord = Coordinate1303
TextureCoordinate1304 = x3d.TextureCoordinate()

IndexedFaceSet1302.texCoord = TextureCoordinate1304

Shape1298.geometry = IndexedFaceSet1302

HAnimSegment1297.children.append(Shape1298)
HAnimSite1305 = x3d.HAnimSite()
HAnimSite1305.DEF = "r_carpal_distal_phalanx_1_Sites"
"""(r_carpal_distal_phalanx_1_tip -0.1869 0.8090 0.0820)"""

HAnimSegment1297.children.append(HAnimSite1305)

HAnimJoint1296.children.append(HAnimSegment1297)

HAnimJoint1286.children.append(HAnimJoint1296)

HAnimJoint1276.children.append(HAnimJoint1286)

HAnimJoint1266.children.append(HAnimJoint1276)

HAnimJoint1256.children.append(HAnimJoint1266)
HAnimJoint1306 = x3d.HAnimJoint()
HAnimJoint1306.name = "r_midcarpal_2"
HAnimJoint1306.DEF = "hanim_r_midcarpal_2"
HAnimJoint1306.center = [-0.18096751,0.70695,0.008417251]
HAnimJoint1306.ulimit = [0,0,0]
HAnimJoint1306.llimit = [0,0,0]
HAnimSegment1307 = x3d.HAnimSegment()
HAnimSegment1307.name = "r_trapezoid"
HAnimSegment1307.DEF = "hanim_r_trapezoid"
Shape1308 = x3d.Shape()
Shape1308.DEF = "r_trapezoid_Shape"
Appearance1309 = x3d.Appearance()
Material1310 = x3d.Material()
Material1310.USE = "SurfaceDefault"

Appearance1309.material = Material1310
ImageTexture1311 = x3d.ImageTexture()
ImageTexture1311.USE = "JinLOA4TextureAtlas"

Appearance1309.texture = ImageTexture1311

Shape1308.appearance = Appearance1309
IndexedFaceSet1312 = x3d.IndexedFaceSet()
IndexedFaceSet1312.coordIndex = [14,2,1,-1,1,12,14,-1,0,3,15,-1,15,13,0,-1,11,8,9,-1,9,10,11,-1,4,16,17,-1,17,5,4,-1,18,19,7,-1,7,6,18,-1,0,13,16,-1,16,4,0,-1,12,1,5,-1,5,17,12,-1,1,0,4,-1,4,5,1,-1,2,14,18,-1,18,6,2,-1,15,3,7,-1,7,19,15,-1,3,2,6,-1,6,7,3,-1,3,0,9,-1,9,8,3,-1,0,1,10,-1,10,9,0,-1,1,2,11,-1,11,10,1,-1,2,3,8,-1,8,11,2,-1,20,27,26,-1,26,25,24,-1,20,26,24,-1,24,23,22,-1,20,24,22,-1,21,20,22,-1,12,20,21,-1,21,14,12,-1,14,21,22,-1,22,18,14,-1,18,22,23,-1,23,19,18,-1,19,23,24,-1,24,15,19,-1,15,24,25,-1,25,13,15,-1,13,25,26,-1,26,16,13,-1,16,26,27,-1,27,17,16,-1,17,27,20,-1,20,12,17,-1]
IndexedFaceSet1312.creaseAngle = 3.14159
IndexedFaceSet1312.texCoordIndex = [21,0,1,-1,1,19,21,-1,12,13,22,-1,22,20,12,-1,5,6,7,-1,7,4,5,-1,8,23,25,-1,25,9,8,-1,26,28,18,-1,18,17,26,-1,12,20,24,-1,24,16,12,-1,19,1,9,-1,9,25,19,-1,1,2,8,-1,8,9,1,-1,0,21,27,-1,27,10,0,-1,22,13,18,-1,18,28,22,-1,3,0,10,-1,10,11,3,-1,13,12,15,-1,15,14,13,-1,2,1,4,-1,4,7,2,-1,1,0,5,-1,5,4,1,-1,0,3,6,-1,6,5,0,-1,29,36,35,-1,35,34,33,-1,29,35,33,-1,33,32,31,-1,29,33,31,-1,30,29,31,-1,19,29,30,-1,30,21,19,-1,21,30,31,-1,31,27,21,-1,26,31,32,-1,32,28,26,-1,28,32,33,-1,33,22,28,-1,22,33,34,-1,34,20,22,-1,20,34,35,-1,35,24,20,-1,23,35,36,-1,36,25,23,-1,25,36,29,-1,29,19,25,-1]
Coordinate1313 = x3d.Coordinate()

IndexedFaceSet1312.coord = Coordinate1313
TextureCoordinate1314 = x3d.TextureCoordinate()

IndexedFaceSet1312.texCoord = TextureCoordinate1314

Shape1308.geometry = IndexedFaceSet1312

HAnimSegment1307.children.append(Shape1308)
HAnimSite1315 = x3d.HAnimSite()
HAnimSite1315.DEF = "r_trapezoid_Sites"
"""None"""

HAnimSegment1307.children.append(HAnimSite1315)

HAnimJoint1306.children.append(HAnimSegment1307)
HAnimJoint1316 = x3d.HAnimJoint()
HAnimJoint1316.name = "r_carpometacarpal_2"
HAnimJoint1316.DEF = "hanim_r_carpometacarpal_2"
HAnimJoint1316.center = [-0.18090001,0.6876,0.009729]
HAnimJoint1316.ulimit = [0,0,0]
HAnimJoint1316.llimit = [0,0,0]
HAnimSegment1317 = x3d.HAnimSegment()
HAnimSegment1317.name = "r_metacarpal_2"
HAnimSegment1317.DEF = "hanim_r_metacarpal_2"
Shape1318 = x3d.Shape()
Shape1318.DEF = "r_metacarpal_2_Shape"
Appearance1319 = x3d.Appearance()
Material1320 = x3d.Material()
Material1320.USE = "SurfaceDefault"

Appearance1319.material = Material1320
ImageTexture1321 = x3d.ImageTexture()
ImageTexture1321.USE = "JinLOA4TextureAtlas"

Appearance1319.texture = ImageTexture1321

Shape1318.appearance = Appearance1319
IndexedFaceSet1322 = x3d.IndexedFaceSet()
IndexedFaceSet1322.coordIndex = [0,1,8,-1,8,3,0,-1,5,0,3,-1,3,7,5,-1,10,6,4,-1,4,2,10,-1,2,4,8,-1,8,1,2,-1,14,4,6,-1,6,11,14,-1,8,16,17,-1,17,3,8,-1,9,13,12,-1,12,7,9,-1,15,16,8,-1,8,4,15,-1,15,4,14,-1,9,3,17,-1,17,18,9,-1,9,18,13,-1,30,31,25,-1,27,30,25,-1,26,27,25,-1,22,19,20,-1,20,21,22,-1,41,38,39,-1,39,40,41,-1,36,37,32,-1,36,32,33,-1,36,33,34,-1,35,36,34,-1,23,24,19,-1,19,22,23,-1,6,10,20,-1,20,19,6,-1,30,27,28,-1,28,29,30,-1,5,7,22,-1,22,21,5,-1,7,12,23,-1,23,22,7,-1,12,11,24,-1,24,23,12,-1,11,6,19,-1,19,24,11,-1,1,0,26,-1,26,25,1,-1,0,5,27,-1,27,26,0,-1,5,21,28,-1,28,27,5,-1,21,20,29,-1,29,28,21,-1,20,10,30,-1,30,29,20,-1,10,2,31,-1,31,30,10,-1,2,1,25,-1,25,31,2,-1,16,15,33,-1,33,32,16,-1,15,14,34,-1,34,33,15,-1,14,13,35,-1,35,34,14,-1,13,18,36,-1,36,35,13,-1,18,17,37,-1,37,36,18,-1,17,16,32,-1,32,37,17,-1,14,11,39,-1,39,38,14,-1,11,12,40,-1,40,39,11,-1,12,13,41,-1,41,40,12,-1,13,14,38,-1,38,41,13,-1,9,7,3,-1]
IndexedFaceSet1322.creaseAngle = 3.14159
IndexedFaceSet1322.texCoordIndex = [3,0,1,-1,1,2,3,-1,5,3,2,-1,2,4,5,-1,44,45,8,-1,8,46,44,-1,46,8,43,-1,43,42,46,-1,47,8,45,-1,45,48,47,-1,1,12,13,-1,13,2,1,-1,16,14,15,-1,15,4,16,-1,50,49,43,-1,43,8,50,-1,50,8,47,-1,16,2,13,-1,13,18,16,-1,16,18,14,-1,21,22,23,-1,20,21,23,-1,19,20,23,-1,25,26,27,-1,27,24,25,-1,29,30,31,-1,31,28,29,-1,33,34,35,-1,33,35,36,-1,33,36,37,-1,32,33,37,-1,38,39,26,-1,26,25,38,-1,7,6,27,-1,27,26,7,-1,21,20,40,-1,40,41,21,-1,5,4,25,-1,25,24,5,-1,4,15,38,-1,38,25,4,-1,15,11,39,-1,39,38,15,-1,48,45,51,-1,51,56,48,-1,0,3,19,-1,19,23,0,-1,3,5,20,-1,20,19,3,-1,5,24,40,-1,40,20,5,-1,24,27,41,-1,41,40,24,-1,27,6,21,-1,21,41,27,-1,6,9,22,-1,22,21,6,-1,9,0,23,-1,23,22,9,-1,12,17,36,-1,36,35,12,-1,50,47,55,-1,55,54,50,-1,10,14,32,-1,32,37,10,-1,14,18,33,-1,33,32,14,-1,18,13,34,-1,34,33,18,-1,13,12,35,-1,35,34,13,-1,47,48,53,-1,53,52,47,-1,11,15,28,-1,28,31,11,-1,15,14,29,-1,29,28,15,-1,14,10,30,-1,30,29,14,-1,16,4,2,-1]
Coordinate1323 = x3d.Coordinate()

IndexedFaceSet1322.coord = Coordinate1323
TextureCoordinate1324 = x3d.TextureCoordinate()

IndexedFaceSet1322.texCoord = TextureCoordinate1324

Shape1318.geometry = IndexedFaceSet1322

HAnimSegment1317.children.append(Shape1318)
HAnimSite1325 = x3d.HAnimSite()
HAnimSite1325.DEF = "r_metacarpal_2_Sites"
"""None"""

HAnimSegment1317.children.append(HAnimSite1325)

HAnimJoint1316.children.append(HAnimSegment1317)
HAnimJoint1326 = x3d.HAnimJoint()
HAnimJoint1326.name = "r_metacarpophalangeal_2"
HAnimJoint1326.DEF = "hanim_r_metacarpophalangeal_2"
HAnimJoint1326.center = [-0.18335252,0.6372,0.015075001]
HAnimJoint1326.ulimit = [0,0,0]
HAnimJoint1326.llimit = [0,0,0]
HAnimSegment1327 = x3d.HAnimSegment()
HAnimSegment1327.name = "r_carpal_proximal_phalanx_2"
HAnimSegment1327.DEF = "hanim_r_carpal_proximal_phalanx_2"
Shape1328 = x3d.Shape()
Shape1328.DEF = "r_carpal_proximal_phalanx_2_Shape"
Appearance1329 = x3d.Appearance()
Material1330 = x3d.Material()
Material1330.USE = "SurfaceDefault"

Appearance1329.material = Material1330
ImageTexture1331 = x3d.ImageTexture()
ImageTexture1331.USE = "JinLOA4TextureAtlas"

Appearance1329.texture = ImageTexture1331

Shape1328.appearance = Appearance1329
IndexedFaceSet1332 = x3d.IndexedFaceSet()
IndexedFaceSet1332.coordIndex = [4,19,18,-1,18,5,4,-1,5,18,21,-1,21,6,5,-1,7,25,20,-1,20,8,7,-1,8,20,19,-1,19,4,8,-1,6,21,22,-1,1,7,8,-1,8,10,1,-1,6,2,11,-1,11,5,6,-1,5,11,0,-1,0,4,5,-1,4,0,10,-1,10,8,4,-1,1,3,9,-1,9,7,1,-1,9,3,2,-1,2,6,9,-1,9,24,23,-1,23,7,9,-1,6,22,24,-1,24,9,6,-1,23,25,7,-1,0,11,15,-1,15,17,0,-1,1,10,14,-1,14,12,1,-1,11,2,13,-1,13,15,11,-1,3,1,12,-1,12,16,3,-1,2,3,16,-1,16,13,2,-1,10,0,17,-1,17,14,10,-1,14,17,16,-1,16,12,14,-1,15,13,16,-1,16,17,15,-1,26,27,28,-1,26,28,29,-1,30,26,29,-1,18,19,27,-1,27,26,18,-1,19,20,28,-1,28,27,19,-1,20,25,29,-1,29,28,20,-1,31,32,33,-1,37,31,33,-1,36,37,33,-1,36,33,34,-1,36,34,35,-1,21,18,26,-1,26,30,21,-1,24,22,32,-1,32,31,24,-1,22,21,33,-1,33,32,22,-1,21,30,34,-1,34,33,21,-1,30,29,35,-1,35,34,30,-1,29,25,36,-1,36,35,29,-1,25,23,37,-1,37,36,25,-1,23,24,31,-1,31,37,23,-1]
IndexedFaceSet1332.creaseAngle = 3.14159
IndexedFaceSet1332.texCoordIndex = [0,1,2,-1,2,3,0,-1,3,2,4,-1,4,5,3,-1,6,40,41,-1,41,9,6,-1,9,41,39,-1,39,38,9,-1,5,4,10,-1,11,6,9,-1,9,12,11,-1,5,13,14,-1,14,3,5,-1,3,14,15,-1,15,0,3,-1,38,42,12,-1,12,9,38,-1,11,43,44,-1,44,6,11,-1,17,16,13,-1,13,5,17,-1,44,45,46,-1,46,6,44,-1,5,10,18,-1,18,17,5,-1,46,40,6,-1,15,14,20,-1,20,21,15,-1,11,12,22,-1,22,23,11,-1,14,13,24,-1,24,20,14,-1,43,11,23,-1,23,48,43,-1,13,16,25,-1,25,24,13,-1,12,42,47,-1,47,22,12,-1,22,47,48,-1,48,23,22,-1,20,24,25,-1,25,21,20,-1,27,28,29,-1,27,29,30,-1,26,27,30,-1,2,1,28,-1,28,27,2,-1,1,8,29,-1,29,28,1,-1,8,7,30,-1,30,29,8,-1,33,34,35,-1,32,33,35,-1,31,32,35,-1,31,35,36,-1,31,36,37,-1,4,2,27,-1,27,26,4,-1,18,10,34,-1,34,33,18,-1,10,4,35,-1,35,34,10,-1,4,26,36,-1,36,35,4,-1,26,30,37,-1,37,36,26,-1,30,7,31,-1,31,37,30,-1,7,19,32,-1,32,31,7,-1,19,18,33,-1,33,32,19,-1]
Coordinate1333 = x3d.Coordinate()

IndexedFaceSet1332.coord = Coordinate1333
TextureCoordinate1334 = x3d.TextureCoordinate()

IndexedFaceSet1332.texCoord = TextureCoordinate1334

Shape1328.geometry = IndexedFaceSet1332

HAnimSegment1327.children.append(Shape1328)
HAnimSite1335 = x3d.HAnimSite()
HAnimSite1335.DEF = "r_carpal_proximal_phalanx_2_Sites"
"""None"""

HAnimSegment1327.children.append(HAnimSite1335)

HAnimJoint1326.children.append(HAnimSegment1327)
HAnimJoint1336 = x3d.HAnimJoint()
HAnimJoint1336.name = "r_carpal_proximal_interphalangeal_2"
HAnimJoint1336.DEF = "hanim_r_carpal_proximal_interphalangeal_2"
HAnimJoint1336.center = [-0.1813275,0.606825,0.014184001]
HAnimJoint1336.ulimit = [0,0,0]
HAnimJoint1336.llimit = [0,0,0]
HAnimSegment1337 = x3d.HAnimSegment()
HAnimSegment1337.name = "r_carpal_middle_phalanx_2"
HAnimSegment1337.DEF = "hanim_r_carpal_middle_phalanx_2"
Shape1338 = x3d.Shape()
Shape1338.DEF = "r_carpal_middle_phalanx_2_Shape"
Appearance1339 = x3d.Appearance()
Material1340 = x3d.Material()
Material1340.USE = "SurfaceDefault"

Appearance1339.material = Material1340
ImageTexture1341 = x3d.ImageTexture()
ImageTexture1341.USE = "JinLOA4TextureAtlas"

Appearance1339.texture = ImageTexture1341

Shape1338.appearance = Appearance1339
IndexedFaceSet1342 = x3d.IndexedFaceSet()
IndexedFaceSet1342.coordIndex = [1,7,14,-1,14,15,1,-1,8,3,14,-1,1,18,5,-1,5,7,1,-1,3,4,21,-1,21,2,3,-1,6,4,3,-1,3,8,6,-1,6,13,4,-1,0,13,5,-1,5,18,0,-1,13,0,21,-1,21,4,13,-1,2,15,14,-1,14,3,2,-1,8,11,12,-1,12,6,8,-1,7,5,9,-1,9,10,7,-1,10,9,12,-1,12,11,10,-1,8,14,10,-1,10,11,8,-1,13,6,12,-1,12,9,13,-1,9,5,13,-1,7,10,14,-1,15,2,16,-1,16,17,15,-1,18,1,19,-1,19,20,18,-1,2,21,22,-1,22,16,2,-1,0,18,20,-1,20,23,0,-1,21,0,23,-1,23,22,21,-1,1,15,17,-1,17,19,1,-1,19,17,23,-1,23,20,19,-1,16,22,23,-1,23,17,16,-1]
IndexedFaceSet1342.creaseAngle = 3.14159
IndexedFaceSet1342.texCoordIndex = [3,0,24,-1,24,25,3,-1,4,5,1,-1,3,6,7,-1,7,0,3,-1,5,8,9,-1,9,10,5,-1,11,8,5,-1,5,4,11,-1,11,12,8,-1,27,26,7,-1,7,6,27,-1,12,13,9,-1,9,8,12,-1,10,2,1,-1,1,5,10,-1,4,14,15,-1,15,11,4,-1,0,7,29,-1,29,28,0,-1,16,17,15,-1,15,14,16,-1,4,1,16,-1,16,14,4,-1,12,11,15,-1,15,17,12,-1,29,7,26,-1,0,28,24,-1,2,10,18,-1,18,19,2,-1,6,3,20,-1,20,21,6,-1,10,9,22,-1,22,18,10,-1,27,6,21,-1,21,31,27,-1,9,13,23,-1,23,22,9,-1,3,25,30,-1,30,20,3,-1,20,30,31,-1,31,21,20,-1,18,22,23,-1,23,19,18,-1]
Coordinate1343 = x3d.Coordinate()

IndexedFaceSet1342.coord = Coordinate1343
TextureCoordinate1344 = x3d.TextureCoordinate()

IndexedFaceSet1342.texCoord = TextureCoordinate1344

Shape1338.geometry = IndexedFaceSet1342

HAnimSegment1337.children.append(Shape1338)
HAnimSite1345 = x3d.HAnimSite()
HAnimSite1345.DEF = "r_carpal_middle_phalanx_2_Sites"
"""None"""

HAnimSegment1337.children.append(HAnimSite1345)

HAnimJoint1336.children.append(HAnimSegment1337)
HAnimJoint1346 = x3d.HAnimJoint()
HAnimJoint1346.name = "r_carpal_distal_interphalangeal_2"
HAnimJoint1346.DEF = "hanim_r_carpal_distal_interphalangeal_2"
HAnimJoint1346.center = [-0.1802925,0.58162504,0.013385251]
HAnimJoint1346.ulimit = [0,0,0]
HAnimJoint1346.llimit = [0,0,0]
HAnimSegment1347 = x3d.HAnimSegment()
HAnimSegment1347.name = "r_carpal_distal_phalanx_2"
HAnimSegment1347.DEF = "hanim_r_carpal_distal_phalanx_2"
Shape1348 = x3d.Shape()
Shape1348.DEF = "r_carpal_distal_phalanx_2_Shape"
Appearance1349 = x3d.Appearance()
Material1350 = x3d.Material()
Material1350.USE = "SurfaceDefault"

Appearance1349.material = Material1350
ImageTexture1351 = x3d.ImageTexture()
ImageTexture1351.USE = "JinLOA4TextureAtlas"

Appearance1349.texture = ImageTexture1351

Shape1348.appearance = Appearance1349
IndexedFaceSet1352 = x3d.IndexedFaceSet()
IndexedFaceSet1352.coordIndex = [0,31,25,-1,24,32,1,-1,1,3,2,-1,2,0,1,-1,31,5,4,-1,4,23,31,-1,0,2,5,-1,5,31,0,-1,23,4,6,-1,6,29,23,-1,32,7,3,-1,3,1,32,-1,29,6,7,-1,7,32,29,-1,2,14,17,-1,17,8,2,-1,5,11,10,-1,10,4,5,-1,2,8,11,-1,11,5,2,-1,10,21,18,-1,18,12,10,-1,7,13,9,-1,9,3,7,-1,6,12,13,-1,13,7,6,-1,8,17,19,-1,19,11,8,-1,19,21,10,-1,10,11,19,-1,25,24,1,-1,1,0,25,-1,14,20,22,-1,22,16,14,-1,15,16,22,-1,22,18,15,-1,3,9,20,-1,20,14,3,-1,14,2,3,-1,4,10,12,-1,12,6,4,-1,21,15,18,-1,14,16,19,-1,19,17,14,-1,19,16,15,-1,15,21,19,-1,9,13,22,-1,22,20,9,-1,22,13,12,-1,12,18,22,-1,25,26,27,-1,27,24,25,-1,23,29,30,-1,30,28,23,-1,28,30,27,-1,27,26,28,-1,25,31,28,-1,28,26,25,-1,32,24,27,-1,27,30,32,-1,30,29,32,-1,23,28,31,-1]
IndexedFaceSet1352.creaseAngle = 3.14159
IndexedFaceSet1352.texCoordIndex = [0,1,2,-1,3,4,5,-1,5,6,7,-1,7,0,5,-1,33,35,9,-1,9,10,33,-1,0,7,8,-1,8,1,0,-1,10,9,11,-1,11,12,10,-1,4,13,6,-1,6,5,4,-1,12,11,36,-1,36,34,12,-1,7,14,15,-1,15,16,7,-1,35,37,18,-1,18,9,35,-1,7,16,17,-1,17,8,7,-1,18,20,21,-1,21,19,18,-1,13,22,23,-1,23,6,13,-1,11,19,38,-1,38,36,11,-1,16,15,24,-1,24,17,16,-1,39,20,18,-1,18,37,39,-1,2,3,5,-1,5,0,2,-1,14,26,27,-1,27,25,14,-1,28,40,41,-1,41,21,28,-1,6,23,26,-1,26,14,6,-1,14,7,6,-1,9,18,19,-1,19,11,9,-1,20,28,21,-1,14,25,24,-1,24,15,14,-1,39,40,28,-1,28,20,39,-1,23,22,27,-1,27,26,23,-1,41,38,19,-1,19,21,41,-1,2,29,30,-1,30,3,2,-1,10,12,43,-1,43,42,10,-1,31,32,30,-1,30,29,31,-1,2,1,31,-1,31,29,2,-1,4,3,30,-1,30,32,4,-1,43,12,34,-1,10,42,33,-1]
Coordinate1353 = x3d.Coordinate()

IndexedFaceSet1352.coord = Coordinate1353
TextureCoordinate1354 = x3d.TextureCoordinate()

IndexedFaceSet1352.texCoord = TextureCoordinate1354

Shape1348.geometry = IndexedFaceSet1352

HAnimSegment1347.children.append(Shape1348)
HAnimSite1355 = x3d.HAnimSite()
HAnimSite1355.DEF = "r_carpal_distal_phalanx_2_Sites"
"""(r_carpal_distal_phalanx_2_tip -0.1980 0.6883 -0.0180)"""

HAnimSegment1347.children.append(HAnimSite1355)

HAnimJoint1346.children.append(HAnimSegment1347)

HAnimJoint1336.children.append(HAnimJoint1346)

HAnimJoint1326.children.append(HAnimJoint1336)

HAnimJoint1316.children.append(HAnimJoint1326)

HAnimJoint1306.children.append(HAnimJoint1316)

HAnimJoint1256.children.append(HAnimJoint1306)
HAnimJoint1356 = x3d.HAnimJoint()
HAnimJoint1356.name = "r_midcarpal_3"
HAnimJoint1356.DEF = "hanim_r_midcarpal_3"
HAnimJoint1356.center = [-0.18072,0.708525,-0.0047970004]
HAnimJoint1356.ulimit = [0,0,0]
HAnimJoint1356.llimit = [0,0,0]
HAnimSegment1357 = x3d.HAnimSegment()
HAnimSegment1357.name = "r_capitate"
HAnimSegment1357.DEF = "hanim_r_capitate"
Shape1358 = x3d.Shape()
Shape1358.DEF = "r_capitate_Shape"
Appearance1359 = x3d.Appearance()
Material1360 = x3d.Material()
Material1360.USE = "SurfaceDefault"

Appearance1359.material = Material1360
ImageTexture1361 = x3d.ImageTexture()
ImageTexture1361.USE = "JinLOA4TextureAtlas"

Appearance1359.texture = ImageTexture1361

Shape1358.appearance = Appearance1359
IndexedFaceSet1362 = x3d.IndexedFaceSet()
IndexedFaceSet1362.coordIndex = [5,1,4,-1,4,6,5,-1,7,2,3,-1,3,0,7,-1,8,9,10,-1,10,11,8,-1,12,13,14,-1,14,15,12,-1,1,5,9,-1,9,8,1,-1,5,7,10,-1,10,9,5,-1,7,0,11,-1,11,10,7,-1,0,1,8,-1,8,11,0,-1,6,4,13,-1,13,12,6,-1,4,3,14,-1,14,13,4,-1,3,2,15,-1,15,14,3,-1,2,6,12,-1,12,15,2,-1,22,23,20,-1,20,21,22,-1,18,19,16,-1,16,17,18,-1,5,6,17,-1,17,16,5,-1,6,2,18,-1,18,17,6,-1,2,7,19,-1,19,18,2,-1,7,5,16,-1,16,19,7,-1,0,3,21,-1,21,20,0,-1,3,4,22,-1,22,21,3,-1,4,1,23,-1,23,22,4,-1,1,0,20,-1,20,23,1,-1]
IndexedFaceSet1362.creaseAngle = 3.14159
IndexedFaceSet1362.texCoordIndex = [24,25,26,-1,26,0,24,-1,4,5,6,-1,6,7,4,-1,8,9,10,-1,10,11,8,-1,12,30,31,-1,31,32,12,-1,25,24,29,-1,29,28,25,-1,1,4,10,-1,10,9,1,-1,4,7,11,-1,11,10,4,-1,7,2,8,-1,8,11,7,-1,0,26,30,-1,30,12,0,-1,3,6,14,-1,14,13,3,-1,6,5,15,-1,15,14,6,-1,27,0,12,-1,12,32,27,-1,17,18,19,-1,19,16,17,-1,35,36,37,-1,37,20,35,-1,24,0,20,-1,20,37,24,-1,0,27,35,-1,35,20,0,-1,5,4,22,-1,22,21,5,-1,4,1,23,-1,23,22,4,-1,7,6,16,-1,16,19,7,-1,6,3,17,-1,17,16,6,-1,26,25,34,-1,34,33,26,-1,2,7,19,-1,19,18,2,-1]
Coordinate1363 = x3d.Coordinate()

IndexedFaceSet1362.coord = Coordinate1363
TextureCoordinate1364 = x3d.TextureCoordinate()

IndexedFaceSet1362.texCoord = TextureCoordinate1364

Shape1358.geometry = IndexedFaceSet1362

HAnimSegment1357.children.append(Shape1358)
HAnimSite1365 = x3d.HAnimSite()
HAnimSite1365.DEF = "r_capitate_Sites"
"""None"""

HAnimSegment1357.children.append(HAnimSite1365)

HAnimJoint1356.children.append(HAnimSegment1357)
HAnimJoint1366 = x3d.HAnimJoint()
HAnimJoint1366.name = "r_carpometacarpal_3"
HAnimJoint1366.DEF = "hanim_r_carpometacarpal_3"
HAnimJoint1366.center = [-0.18072,0.6858,-0.0062527503]
HAnimJoint1366.ulimit = [0,0,0]
HAnimJoint1366.llimit = [0,0,0]
HAnimSegment1367 = x3d.HAnimSegment()
HAnimSegment1367.name = "r_metacarpal_3"
HAnimSegment1367.DEF = "hanim_r_metacarpal_3"
Shape1368 = x3d.Shape()
Shape1368.DEF = "r_metacarpal_3_Shape"
Appearance1369 = x3d.Appearance()
Material1370 = x3d.Material()
Material1370.USE = "SurfaceDefault"

Appearance1369.material = Material1370
ImageTexture1371 = x3d.ImageTexture()
ImageTexture1371.USE = "JinLOA4TextureAtlas"

Appearance1369.texture = ImageTexture1371

Shape1368.appearance = Appearance1369
IndexedFaceSet1372 = x3d.IndexedFaceSet()
IndexedFaceSet1372.coordIndex = [0,3,6,-1,6,8,0,-1,10,7,1,-1,1,5,10,-1,2,1,7,-1,7,9,2,-1,8,11,4,-1,4,0,8,-1,14,15,12,-1,12,13,14,-1,34,35,32,-1,32,33,34,-1,25,28,29,-1,29,24,25,-1,17,18,19,-1,19,20,17,-1,25,26,27,-1,27,28,25,-1,20,21,16,-1,16,17,20,-1,6,3,13,-1,13,12,6,-1,24,29,30,-1,30,31,24,-1,2,9,15,-1,15,14,2,-1,16,21,22,-1,22,23,16,-1,9,7,17,-1,17,16,9,-1,7,10,18,-1,18,17,7,-1,10,11,19,-1,19,18,10,-1,11,8,20,-1,20,19,11,-1,8,6,21,-1,21,20,8,-1,6,12,22,-1,22,21,6,-1,12,15,23,-1,23,22,12,-1,15,9,16,-1,16,23,15,-1,3,0,25,-1,25,24,3,-1,0,4,26,-1,26,25,0,-1,4,5,27,-1,27,26,4,-1,5,1,28,-1,28,27,5,-1,1,2,29,-1,29,28,1,-1,2,14,30,-1,30,29,2,-1,14,13,31,-1,31,30,14,-1,13,3,24,-1,24,31,13,-1,10,5,33,-1,33,32,10,-1,5,4,34,-1,34,33,5,-1,4,11,35,-1,35,34,4,-1,11,10,32,-1,32,35,11,-1]
IndexedFaceSet1372.creaseAngle = 3.14159
IndexedFaceSet1372.texCoordIndex = [2,3,0,-1,0,1,2,-1,39,36,37,-1,37,38,39,-1,40,37,36,-1,36,41,40,-1,1,10,11,-1,11,2,1,-1,12,13,14,-1,14,15,12,-1,43,44,45,-1,45,46,43,-1,20,21,22,-1,22,23,20,-1,48,49,50,-1,50,51,48,-1,20,28,29,-1,29,21,20,-1,27,30,31,-1,31,24,27,-1,0,3,15,-1,15,14,0,-1,23,22,32,-1,32,33,23,-1,8,9,13,-1,13,12,8,-1,31,30,34,-1,34,35,31,-1,9,4,24,-1,24,31,9,-1,36,39,49,-1,49,48,36,-1,7,10,26,-1,26,25,7,-1,10,1,27,-1,27,26,10,-1,1,0,30,-1,30,27,1,-1,0,14,34,-1,34,30,0,-1,14,13,35,-1,35,34,14,-1,13,9,31,-1,31,35,13,-1,3,2,20,-1,20,23,3,-1,2,11,28,-1,28,20,2,-1,42,38,53,-1,53,52,42,-1,38,37,47,-1,47,53,38,-1,5,8,22,-1,22,21,5,-1,8,12,32,-1,32,22,8,-1,12,15,33,-1,33,32,12,-1,15,3,23,-1,23,33,15,-1,39,38,46,-1,46,45,39,-1,6,11,16,-1,16,19,6,-1,11,10,17,-1,17,16,11,-1,10,7,18,-1,18,17,10,-1]
Coordinate1373 = x3d.Coordinate()

IndexedFaceSet1372.coord = Coordinate1373
TextureCoordinate1374 = x3d.TextureCoordinate()

IndexedFaceSet1372.texCoord = TextureCoordinate1374

Shape1368.geometry = IndexedFaceSet1372

HAnimSegment1367.children.append(Shape1368)
HAnimSite1375 = x3d.HAnimSite()
HAnimSite1375.DEF = "r_metacarpal_3_Sites"
"""(r_metacarpal_phalanx_3 x y z)"""

HAnimSegment1367.children.append(HAnimSite1375)

HAnimJoint1366.children.append(HAnimSegment1367)
HAnimJoint1376 = x3d.HAnimJoint()
HAnimJoint1376.name = "r_metacarpophalangeal_3"
HAnimJoint1376.DEF = "hanim_r_metacarpophalangeal_3"
HAnimJoint1376.center = [-0.18330751,0.63495,-0.00391725]
HAnimJoint1376.ulimit = [0,0,0]
HAnimJoint1376.llimit = [0,0,0]
HAnimSegment1377 = x3d.HAnimSegment()
HAnimSegment1377.name = "r_carpal_proximal_phalanx_3"
HAnimSegment1377.DEF = "hanim_r_carpal_proximal_phalanx_3"
Shape1378 = x3d.Shape()
Shape1378.DEF = "r_carpal_proximal_phalanx_3_Shape"
Appearance1379 = x3d.Appearance()
Material1380 = x3d.Material()
Material1380.USE = "SurfaceDefault"

Appearance1379.material = Material1380
ImageTexture1381 = x3d.ImageTexture()
ImageTexture1381.USE = "JinLOA4TextureAtlas"

Appearance1379.texture = ImageTexture1381

Shape1378.appearance = Appearance1379
IndexedFaceSet1382 = x3d.IndexedFaceSet()
IndexedFaceSet1382.coordIndex = [3,21,26,-1,26,4,3,-1,5,25,27,-1,27,6,5,-1,4,26,23,-1,0,5,6,-1,6,14,0,-1,4,1,17,-1,17,3,4,-1,0,2,7,-1,7,5,0,-1,7,2,1,-1,1,4,7,-1,7,22,24,-1,24,5,7,-1,4,23,22,-1,22,7,4,-1,24,25,5,-1,15,17,11,-1,11,13,15,-1,0,14,10,-1,10,8,0,-1,17,1,9,-1,9,11,17,-1,2,0,8,-1,8,12,2,-1,1,2,12,-1,12,9,1,-1,14,15,13,-1,13,10,14,-1,10,13,12,-1,12,8,10,-1,11,9,12,-1,12,13,11,-1,3,18,21,-1,14,6,16,-1,16,15,14,-1,16,3,17,-1,17,15,16,-1,16,6,19,-1,19,20,16,-1,3,16,20,-1,20,18,3,-1,19,6,27,-1,31,28,29,-1,29,30,31,-1,26,21,29,-1,29,28,26,-1,33,34,35,-1,32,33,35,-1,38,32,35,-1,38,35,36,-1,38,36,37,-1,27,25,31,-1,31,30,27,-1,44,45,39,-1,39,40,41,-1,44,39,41,-1,44,41,42,-1,44,42,43,-1,18,20,33,-1,33,32,18,-1,20,19,34,-1,34,33,20,-1,19,27,35,-1,35,34,19,-1,27,30,36,-1,36,35,27,-1,30,29,37,-1,37,36,30,-1,29,21,38,-1,38,37,29,-1,21,18,32,-1,32,38,21,-1,22,23,40,-1,40,39,22,-1,23,26,41,-1,41,40,23,-1,26,28,42,-1,42,41,26,-1,28,31,43,-1,43,42,28,-1,31,25,44,-1,44,43,31,-1,25,24,45,-1,45,44,25,-1,24,22,39,-1,39,45,24,-1]
IndexedFaceSet1382.creaseAngle = 3.14159
IndexedFaceSet1382.texCoordIndex = [0,1,2,-1,2,3,0,-1,4,46,47,-1,47,7,4,-1,3,2,8,-1,9,4,7,-1,7,10,9,-1,3,11,12,-1,12,0,3,-1,9,48,49,-1,49,4,9,-1,14,13,11,-1,11,3,14,-1,49,50,51,-1,51,4,49,-1,3,8,15,-1,15,14,3,-1,51,46,4,-1,17,12,18,-1,18,19,17,-1,9,10,20,-1,20,21,9,-1,12,11,22,-1,22,18,12,-1,48,9,21,-1,21,54,48,-1,11,13,23,-1,23,22,11,-1,10,52,53,-1,53,20,10,-1,20,53,54,-1,54,21,20,-1,18,22,23,-1,23,19,18,-1,0,24,1,-1,10,7,55,-1,55,52,10,-1,25,0,12,-1,12,17,25,-1,55,7,56,-1,56,57,55,-1,0,25,27,-1,27,24,0,-1,56,7,47,-1,31,28,29,-1,29,30,31,-1,2,1,29,-1,29,28,2,-1,34,35,36,-1,33,34,36,-1,32,33,36,-1,32,36,37,-1,32,37,38,-1,6,5,31,-1,31,30,6,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,39,43,44,-1,39,44,45,-1,24,27,34,-1,34,33,24,-1,27,26,35,-1,35,34,27,-1,26,6,36,-1,36,35,26,-1,6,30,37,-1,37,36,6,-1,30,29,38,-1,38,37,30,-1,29,1,32,-1,32,38,29,-1,1,24,33,-1,33,32,1,-1,15,8,42,-1,42,41,15,-1,8,2,43,-1,43,42,8,-1,2,28,44,-1,44,43,2,-1,28,31,45,-1,45,44,28,-1,31,5,39,-1,39,45,31,-1,5,16,40,-1,40,39,5,-1,16,15,41,-1,41,40,16,-1]
Coordinate1383 = x3d.Coordinate()

IndexedFaceSet1382.coord = Coordinate1383
TextureCoordinate1384 = x3d.TextureCoordinate()

IndexedFaceSet1382.texCoord = TextureCoordinate1384

Shape1378.geometry = IndexedFaceSet1382

HAnimSegment1377.children.append(Shape1378)
HAnimSite1385 = x3d.HAnimSite()
HAnimSite1385.DEF = "r_carpal_proximal_phalanx_3_Sites"
"""None"""

HAnimSegment1377.children.append(HAnimSite1385)

HAnimJoint1376.children.append(HAnimSegment1377)
HAnimJoint1386 = x3d.HAnimJoint()
HAnimJoint1386.name = "r_carpal_proximal_interphalangeal_3"
HAnimJoint1386.DEF = "hanim_r_carpal_proximal_interphalangeal_3"
HAnimJoint1386.center = [-0.1813275,0.603225,-0.003537]
HAnimJoint1386.ulimit = [0,0,0]
HAnimJoint1386.llimit = [0,0,0]
HAnimSegment1387 = x3d.HAnimSegment()
HAnimSegment1387.name = "r_carpal_middle_phalanx_3"
HAnimSegment1387.DEF = "hanim_r_carpal_middle_phalanx_3"
Shape1388 = x3d.Shape()
Shape1388.DEF = "r_carpal_middle_phalanx_3_Shape"
Appearance1389 = x3d.Appearance()
Material1390 = x3d.Material()
Material1390.USE = "SurfaceDefault"

Appearance1389.material = Material1390
ImageTexture1391 = x3d.ImageTexture()
ImageTexture1391.USE = "JinLOA4TextureAtlas"

Appearance1389.texture = ImageTexture1391

Shape1388.appearance = Appearance1389
IndexedFaceSet1392 = x3d.IndexedFaceSet()
IndexedFaceSet1392.coordIndex = [1,7,14,-1,14,15,1,-1,8,3,14,-1,1,18,5,-1,5,7,1,-1,3,4,21,-1,21,2,3,-1,6,4,3,-1,3,8,6,-1,6,13,4,-1,0,13,5,-1,5,18,0,-1,13,0,21,-1,21,4,13,-1,2,15,14,-1,14,3,2,-1,8,11,12,-1,12,6,8,-1,7,5,9,-1,9,10,7,-1,10,9,12,-1,12,11,10,-1,8,14,10,-1,10,11,8,-1,13,6,12,-1,12,9,13,-1,9,5,13,-1,7,10,14,-1,15,2,16,-1,16,17,15,-1,18,1,19,-1,19,20,18,-1,2,21,22,-1,22,16,2,-1,0,18,20,-1,20,23,0,-1,21,0,23,-1,23,22,21,-1,1,15,17,-1,17,19,1,-1,19,17,23,-1,23,20,19,-1,16,22,23,-1,23,17,16,-1]
IndexedFaceSet1392.creaseAngle = 3.14159
IndexedFaceSet1392.texCoordIndex = [3,0,24,-1,24,25,3,-1,4,5,1,-1,3,6,7,-1,7,0,3,-1,5,8,9,-1,9,10,5,-1,11,8,5,-1,5,4,11,-1,11,12,8,-1,27,26,7,-1,7,6,27,-1,12,13,9,-1,9,8,12,-1,10,2,1,-1,1,5,10,-1,4,14,15,-1,15,11,4,-1,0,7,29,-1,29,28,0,-1,16,17,15,-1,15,14,16,-1,4,1,16,-1,16,14,4,-1,12,11,15,-1,15,17,12,-1,29,7,26,-1,0,28,24,-1,2,10,18,-1,18,19,2,-1,6,3,20,-1,20,21,6,-1,10,9,22,-1,22,18,10,-1,27,6,21,-1,21,31,27,-1,9,13,23,-1,23,22,9,-1,3,25,30,-1,30,20,3,-1,20,30,31,-1,31,21,20,-1,18,22,23,-1,23,19,18,-1]
Coordinate1393 = x3d.Coordinate()

IndexedFaceSet1392.coord = Coordinate1393
TextureCoordinate1394 = x3d.TextureCoordinate()

IndexedFaceSet1392.texCoord = TextureCoordinate1394

Shape1388.geometry = IndexedFaceSet1392

HAnimSegment1387.children.append(Shape1388)
HAnimSite1395 = x3d.HAnimSite()
HAnimSite1395.DEF = "r_carpal_middle_phalanx_3_Sites"
"""None"""

HAnimSegment1387.children.append(HAnimSite1395)

HAnimJoint1386.children.append(HAnimSegment1387)
HAnimJoint1396 = x3d.HAnimJoint()
HAnimJoint1396.name = "r_carpal_distal_interphalangeal_3"
HAnimJoint1396.DEF = "hanim_r_carpal_distal_interphalangeal_3"
HAnimJoint1396.center = [-0.1802925,0.575325,-0.0037597502]
HAnimJoint1396.ulimit = [0,0,0]
HAnimJoint1396.llimit = [0,0,0]
HAnimSegment1397 = x3d.HAnimSegment()
HAnimSegment1397.name = "r_carpal_distal_phalanx_3"
HAnimSegment1397.DEF = "hanim_r_carpal_distal_phalanx_3"
Shape1398 = x3d.Shape()
Shape1398.DEF = "r_carpal_distal_phalanx_3_Shape"
Appearance1399 = x3d.Appearance()
Material1400 = x3d.Material()
Material1400.USE = "SurfaceDefault"

Appearance1399.material = Material1400
ImageTexture1401 = x3d.ImageTexture()
ImageTexture1401.USE = "JinLOA4TextureAtlas"

Appearance1399.texture = ImageTexture1401

Shape1398.appearance = Appearance1399
IndexedFaceSet1402 = x3d.IndexedFaceSet()
IndexedFaceSet1402.coordIndex = [0,31,25,-1,24,32,1,-1,1,3,2,-1,2,0,1,-1,31,5,4,-1,4,23,31,-1,0,2,5,-1,5,31,0,-1,23,4,6,-1,6,29,23,-1,32,7,3,-1,3,1,32,-1,29,6,7,-1,7,32,29,-1,2,14,17,-1,17,8,2,-1,5,11,10,-1,10,4,5,-1,2,8,11,-1,11,5,2,-1,10,21,18,-1,18,12,10,-1,7,13,9,-1,9,3,7,-1,6,12,13,-1,13,7,6,-1,8,17,19,-1,19,11,8,-1,19,21,10,-1,10,11,19,-1,25,24,1,-1,1,0,25,-1,14,20,22,-1,22,16,14,-1,15,16,22,-1,22,18,15,-1,3,9,20,-1,20,14,3,-1,14,2,3,-1,4,10,12,-1,12,6,4,-1,21,15,18,-1,14,16,19,-1,19,17,14,-1,19,16,15,-1,15,21,19,-1,9,13,22,-1,22,20,9,-1,22,13,12,-1,12,18,22,-1,25,26,27,-1,27,24,25,-1,23,29,30,-1,30,28,23,-1,28,30,27,-1,27,26,28,-1,25,31,28,-1,28,26,25,-1,32,24,27,-1,27,30,32,-1,30,29,32,-1,23,28,31,-1]
IndexedFaceSet1402.creaseAngle = 3.14159
IndexedFaceSet1402.texCoordIndex = [0,1,2,-1,3,4,5,-1,5,6,7,-1,7,0,5,-1,33,35,9,-1,9,10,33,-1,0,7,8,-1,8,1,0,-1,10,9,11,-1,11,12,10,-1,4,13,6,-1,6,5,4,-1,12,11,36,-1,36,34,12,-1,7,14,15,-1,15,16,7,-1,35,37,18,-1,18,9,35,-1,7,16,17,-1,17,8,7,-1,18,20,21,-1,21,19,18,-1,13,22,23,-1,23,6,13,-1,11,19,38,-1,38,36,11,-1,16,15,24,-1,24,17,16,-1,39,20,18,-1,18,37,39,-1,2,3,5,-1,5,0,2,-1,14,26,27,-1,27,25,14,-1,28,40,41,-1,41,21,28,-1,6,23,26,-1,26,14,6,-1,14,7,6,-1,9,18,19,-1,19,11,9,-1,20,28,21,-1,14,25,24,-1,24,15,14,-1,39,40,28,-1,28,20,39,-1,23,22,27,-1,27,26,23,-1,41,38,19,-1,19,21,41,-1,2,29,30,-1,30,3,2,-1,10,12,43,-1,43,42,10,-1,31,32,30,-1,30,29,31,-1,2,1,31,-1,31,29,2,-1,4,3,30,-1,30,32,4,-1,43,12,34,-1,10,42,33,-1]
Coordinate1403 = x3d.Coordinate()

IndexedFaceSet1402.coord = Coordinate1403
TextureCoordinate1404 = x3d.TextureCoordinate()

IndexedFaceSet1402.texCoord = TextureCoordinate1404

Shape1398.geometry = IndexedFaceSet1402

HAnimSegment1397.children.append(Shape1398)
HAnimSite1405 = x3d.HAnimSite()
HAnimSite1405.DEF = "r_carpal_distal_phalanx_3_Sites"
"""(r_carpal_distal_phalanx_3_tip -0.1969 0.6758 -0.0427) (r_dactylion -0.1941 0.6772 -0.0423"""

HAnimSegment1397.children.append(HAnimSite1405)

HAnimJoint1396.children.append(HAnimSegment1397)

HAnimJoint1386.children.append(HAnimJoint1396)

HAnimJoint1376.children.append(HAnimJoint1386)

HAnimJoint1366.children.append(HAnimJoint1376)

HAnimJoint1356.children.append(HAnimJoint1366)

HAnimJoint1256.children.append(HAnimJoint1356)
HAnimJoint1406 = x3d.HAnimJoint()
HAnimJoint1406.name = "r_midcarpal_4_5"
HAnimJoint1406.DEF = "hanim_r_midcarpal_4_5"
HAnimJoint1406.center = [-0.18072,0.70582503,-0.025740001]
HAnimJoint1406.ulimit = [0,0,0]
HAnimJoint1406.llimit = [0,0,0]
HAnimSegment1407 = x3d.HAnimSegment()
HAnimSegment1407.name = "r_hamate"
HAnimSegment1407.DEF = "hanim_r_hamate"
Shape1408 = x3d.Shape()
Shape1408.DEF = "r_hamate_Shape"
Appearance1409 = x3d.Appearance()
Material1410 = x3d.Material()
Material1410.USE = "SurfaceDefault"

Appearance1409.material = Material1410
ImageTexture1411 = x3d.ImageTexture()
ImageTexture1411.USE = "JinLOA4TextureAtlas"

Appearance1409.texture = ImageTexture1411

Shape1408.appearance = Appearance1409
IndexedFaceSet1412 = x3d.IndexedFaceSet()
IndexedFaceSet1412.coordIndex = [6,3,4,-1,4,7,6,-1,7,0,9,-1,9,8,7,-1,11,2,1,-1,1,5,11,-1,5,1,3,-1,3,6,5,-1,2,11,10,-1,4,0,7,-1,15,16,17,-1,14,15,17,-1,13,14,17,-1,20,21,22,-1,27,24,25,-1,25,26,27,-1,17,18,12,-1,12,13,17,-1,23,19,20,-1,20,22,23,-1,9,0,13,-1,13,12,9,-1,0,4,14,-1,14,13,0,-1,4,3,15,-1,15,14,4,-1,3,1,16,-1,16,15,3,-1,1,2,17,-1,17,16,1,-1,2,10,18,-1,18,17,2,-1,10,9,12,-1,12,18,10,-1,11,5,20,-1,20,19,11,-1,5,6,21,-1,21,20,5,-1,6,7,22,-1,22,21,6,-1,7,8,23,-1,23,22,7,-1,8,11,19,-1,19,23,8,-1,8,9,25,-1,25,24,8,-1,9,10,26,-1,26,25,9,-1,10,11,27,-1,27,26,10,-1,11,8,24,-1,24,27,11,-1]
IndexedFaceSet1412.creaseAngle = 3.14159
IndexedFaceSet1412.texCoordIndex = [0,1,2,-1,2,3,0,-1,3,4,5,-1,5,6,3,-1,7,8,9,-1,9,10,7,-1,10,9,29,-1,29,28,10,-1,8,7,11,-1,2,4,3,-1,14,15,16,-1,13,14,16,-1,12,13,16,-1,35,36,37,-1,23,38,39,-1,39,22,23,-1,16,24,25,-1,25,12,16,-1,26,27,17,-1,17,19,26,-1,5,4,12,-1,12,25,5,-1,4,2,13,-1,13,12,4,-1,2,1,14,-1,14,13,2,-1,29,9,33,-1,33,32,29,-1,9,8,34,-1,34,33,9,-1,8,11,40,-1,40,34,8,-1,11,30,41,-1,41,40,11,-1,7,10,35,-1,35,43,7,-1,10,28,36,-1,36,35,10,-1,0,3,19,-1,19,18,0,-1,3,6,26,-1,26,19,3,-1,31,7,43,-1,43,42,31,-1,6,5,21,-1,21,20,6,-1,30,11,22,-1,22,39,30,-1,11,7,23,-1,23,22,11,-1,7,31,38,-1,38,23,7,-1]
Coordinate1413 = x3d.Coordinate()

IndexedFaceSet1412.coord = Coordinate1413
TextureCoordinate1414 = x3d.TextureCoordinate()

IndexedFaceSet1412.texCoord = TextureCoordinate1414

Shape1408.geometry = IndexedFaceSet1412

HAnimSegment1407.children.append(Shape1408)
HAnimSite1415 = x3d.HAnimSite()
HAnimSite1415.DEF = "r_hamate_Sites"
"""None"""

HAnimSegment1407.children.append(HAnimSite1415)

HAnimJoint1406.children.append(HAnimSegment1407)
HAnimJoint1416 = x3d.HAnimJoint()
HAnimJoint1416.name = "r_carpometacarpal_4"
HAnimJoint1416.DEF = "hanim_r_carpometacarpal_4"
HAnimJoint1416.center = [-0.18072,0.68625003,-0.01991925]
HAnimJoint1416.ulimit = [0,0,0]
HAnimJoint1416.llimit = [0,0,0]
HAnimSegment1417 = x3d.HAnimSegment()
HAnimSegment1417.name = "r_metacarpal_4"
HAnimSegment1417.DEF = "hanim_r_metacarpal_4"
Shape1418 = x3d.Shape()
Shape1418.DEF = "r_metacarpal_4_Shape"
Appearance1419 = x3d.Appearance()
Material1420 = x3d.Material()
Material1420.USE = "SurfaceDefault"

Appearance1419.material = Material1420
ImageTexture1421 = x3d.ImageTexture()
ImageTexture1421.USE = "JinLOA4TextureAtlas"

Appearance1419.texture = ImageTexture1421

Shape1418.appearance = Appearance1419
IndexedFaceSet1422 = x3d.IndexedFaceSet()
IndexedFaceSet1422.coordIndex = [9,6,0,-1,0,2,9,-1,6,10,4,-1,4,0,6,-1,7,8,3,-1,3,1,7,-1,7,1,5,-1,5,11,7,-1,12,13,14,-1,14,15,12,-1,34,35,32,-1,32,33,34,-1,17,20,21,-1,21,16,17,-1,29,30,31,-1,31,24,29,-1,17,18,19,-1,19,20,17,-1,24,25,28,-1,28,29,24,-1,9,2,13,-1,13,12,9,-1,16,21,22,-1,22,23,16,-1,3,8,15,-1,15,14,3,-1,28,25,26,-1,26,27,28,-1,2,0,17,-1,17,16,2,-1,0,4,18,-1,18,17,0,-1,4,5,19,-1,19,18,4,-1,5,1,20,-1,20,19,5,-1,1,3,21,-1,21,20,1,-1,3,14,22,-1,22,21,3,-1,14,13,23,-1,23,22,14,-1,13,2,16,-1,16,23,13,-1,6,9,25,-1,25,24,6,-1,9,12,26,-1,26,25,9,-1,12,15,27,-1,27,26,12,-1,15,8,28,-1,28,27,15,-1,8,7,29,-1,29,28,8,-1,7,11,30,-1,30,29,7,-1,11,10,31,-1,31,30,11,-1,10,6,24,-1,24,31,10,-1,4,10,33,-1,33,32,4,-1,10,11,34,-1,34,33,10,-1,11,5,35,-1,35,34,11,-1,5,4,32,-1,32,35,5,-1]
IndexedFaceSet1422.creaseAngle = 3.14159
IndexedFaceSet1422.texCoordIndex = [0,1,2,-1,2,3,0,-1,1,4,5,-1,5,2,1,-1,38,39,40,-1,40,9,38,-1,38,9,41,-1,41,42,38,-1,12,13,14,-1,14,15,12,-1,16,43,44,-1,44,45,16,-1,20,21,22,-1,22,23,20,-1,48,49,50,-1,50,51,48,-1,20,28,29,-1,29,21,20,-1,27,30,31,-1,31,24,27,-1,0,3,13,-1,13,12,0,-1,23,22,32,-1,32,33,23,-1,8,7,15,-1,15,14,8,-1,31,30,34,-1,34,35,31,-1,3,2,20,-1,20,23,3,-1,2,5,28,-1,28,20,2,-1,37,41,53,-1,53,52,37,-1,41,9,46,-1,46,53,41,-1,9,40,47,-1,47,46,9,-1,8,14,32,-1,32,22,8,-1,14,13,33,-1,33,32,14,-1,13,3,23,-1,23,33,13,-1,1,0,30,-1,30,27,1,-1,0,12,34,-1,34,30,0,-1,12,15,35,-1,35,34,12,-1,15,7,31,-1,31,35,15,-1,7,6,24,-1,24,31,7,-1,38,42,49,-1,49,48,38,-1,11,4,26,-1,26,25,11,-1,4,1,27,-1,27,26,4,-1,5,4,19,-1,19,18,5,-1,36,42,16,-1,16,45,36,-1,42,41,43,-1,43,16,42,-1,10,5,18,-1,18,17,10,-1]
Coordinate1423 = x3d.Coordinate()

IndexedFaceSet1422.coord = Coordinate1423
TextureCoordinate1424 = x3d.TextureCoordinate()

IndexedFaceSet1422.texCoord = TextureCoordinate1424

Shape1418.geometry = IndexedFaceSet1422

HAnimSegment1417.children.append(Shape1418)
HAnimSite1425 = x3d.HAnimSite()
HAnimSite1425.DEF = "r_metacarpal_4_Sites"
"""None"""

HAnimSegment1417.children.append(HAnimSite1425)

HAnimJoint1416.children.append(HAnimSegment1417)
HAnimJoint1426 = x3d.HAnimJoint()
HAnimJoint1426.name = "r_metacarpophalangeal_4"
HAnimJoint1426.DEF = "hanim_r_metacarpophalangeal_4"
HAnimJoint1426.center = [-0.18330751,0.63405,-0.02144025]
HAnimJoint1426.ulimit = [0,0,0]
HAnimJoint1426.llimit = [0,0,0]
HAnimSegment1427 = x3d.HAnimSegment()
HAnimSegment1427.name = "r_carpal_proximal_phalanx_4"
HAnimSegment1427.DEF = "hanim_r_carpal_proximal_phalanx_4"
Shape1428 = x3d.Shape()
Shape1428.DEF = "r_carpal_proximal_phalanx_4_Shape"
Appearance1429 = x3d.Appearance()
Material1430 = x3d.Material()
Material1430.USE = "SurfaceDefault"

Appearance1429.material = Material1430
ImageTexture1431 = x3d.ImageTexture()
ImageTexture1431.USE = "JinLOA4TextureAtlas"

Appearance1429.texture = ImageTexture1431

Shape1428.appearance = Appearance1429
IndexedFaceSet1432 = x3d.IndexedFaceSet()
IndexedFaceSet1432.coordIndex = [3,23,22,-1,22,4,3,-1,5,32,31,-1,31,6,5,-1,4,22,44,-1,0,5,6,-1,6,14,0,-1,4,1,17,-1,17,3,4,-1,0,2,7,-1,7,5,0,-1,7,2,1,-1,1,4,7,-1,7,43,45,-1,45,5,7,-1,4,44,43,-1,43,7,4,-1,45,32,5,-1,15,17,11,-1,11,13,15,-1,0,14,10,-1,10,8,0,-1,17,1,9,-1,9,11,17,-1,2,0,8,-1,8,12,2,-1,1,2,12,-1,12,9,1,-1,14,15,13,-1,13,10,14,-1,10,13,12,-1,12,8,10,-1,11,9,12,-1,12,13,11,-1,3,40,23,-1,14,6,16,-1,16,15,14,-1,16,3,17,-1,17,15,16,-1,16,6,42,-1,42,41,16,-1,3,16,41,-1,41,40,3,-1,42,6,31,-1,21,18,19,-1,19,20,21,-1,22,23,19,-1,19,18,22,-1,26,27,28,-1,25,26,28,-1,24,25,28,-1,24,28,29,-1,24,29,30,-1,31,32,21,-1,21,20,31,-1,33,34,35,-1,35,36,37,-1,33,35,37,-1,33,37,38,-1,33,38,39,-1,40,41,26,-1,26,25,40,-1,41,42,27,-1,27,26,41,-1,42,31,28,-1,28,27,42,-1,31,20,29,-1,29,28,31,-1,20,19,30,-1,30,29,20,-1,19,23,24,-1,24,30,19,-1,23,40,25,-1,25,24,23,-1,43,44,36,-1,36,35,43,-1,44,22,37,-1,37,36,44,-1,22,18,38,-1,38,37,22,-1,18,21,39,-1,39,38,18,-1,21,32,33,-1,33,39,21,-1,32,45,34,-1,34,33,32,-1,45,43,35,-1,35,34,45,-1]
IndexedFaceSet1432.creaseAngle = 3.14159
IndexedFaceSet1432.texCoordIndex = [0,1,2,-1,2,3,0,-1,4,46,47,-1,47,7,4,-1,3,2,8,-1,9,4,7,-1,7,10,9,-1,3,11,12,-1,12,0,3,-1,9,48,49,-1,49,4,9,-1,14,13,11,-1,11,3,14,-1,49,50,51,-1,51,4,49,-1,3,8,15,-1,15,14,3,-1,51,46,4,-1,17,12,18,-1,18,19,17,-1,9,10,20,-1,20,21,9,-1,12,11,22,-1,22,18,12,-1,48,9,21,-1,21,54,48,-1,11,13,23,-1,23,22,11,-1,10,52,53,-1,53,20,10,-1,20,53,54,-1,54,21,20,-1,18,22,23,-1,23,19,18,-1,0,24,1,-1,10,7,55,-1,55,52,10,-1,25,0,12,-1,12,17,25,-1,55,7,56,-1,56,57,55,-1,0,25,27,-1,27,24,0,-1,56,7,47,-1,31,28,29,-1,29,30,31,-1,2,1,29,-1,29,28,2,-1,34,35,36,-1,33,34,36,-1,32,33,36,-1,32,36,37,-1,32,37,38,-1,6,5,31,-1,31,30,6,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,39,43,44,-1,39,44,45,-1,24,27,34,-1,34,33,24,-1,27,26,35,-1,35,34,27,-1,26,6,36,-1,36,35,26,-1,6,30,37,-1,37,36,6,-1,30,29,38,-1,38,37,30,-1,29,1,32,-1,32,38,29,-1,1,24,33,-1,33,32,1,-1,15,8,42,-1,42,41,15,-1,8,2,43,-1,43,42,8,-1,2,28,44,-1,44,43,2,-1,28,31,45,-1,45,44,28,-1,31,5,39,-1,39,45,31,-1,5,16,40,-1,40,39,5,-1,16,15,41,-1,41,40,16,-1]
Coordinate1433 = x3d.Coordinate()

IndexedFaceSet1432.coord = Coordinate1433
TextureCoordinate1434 = x3d.TextureCoordinate()

IndexedFaceSet1432.texCoord = TextureCoordinate1434

Shape1428.geometry = IndexedFaceSet1432

HAnimSegment1427.children.append(Shape1428)
HAnimSite1435 = x3d.HAnimSite()
HAnimSite1435.DEF = "r_carpal_proximal_phalanx_4_Sites"
"""None"""

HAnimSegment1427.children.append(HAnimSite1435)

HAnimJoint1426.children.append(HAnimSegment1427)
HAnimJoint1436 = x3d.HAnimJoint()
HAnimJoint1436.name = "r_carpal_proximal_interphalangeal_4"
HAnimJoint1436.DEF = "hanim_r_carpal_proximal_interphalangeal_4"
HAnimJoint1436.center = [-0.1813275,0.6066,-0.020646]
HAnimJoint1436.ulimit = [0,0,0]
HAnimJoint1436.llimit = [0,0,0]
HAnimSegment1437 = x3d.HAnimSegment()
HAnimSegment1437.name = "r_carpal_middle_phalanx_4"
HAnimSegment1437.DEF = "hanim_r_carpal_middle_phalanx_4"
Shape1438 = x3d.Shape()
Shape1438.DEF = "r_carpal_middle_phalanx_4_Shape"
Appearance1439 = x3d.Appearance()
Material1440 = x3d.Material()
Material1440.USE = "SurfaceDefault"

Appearance1439.material = Material1440
ImageTexture1441 = x3d.ImageTexture()
ImageTexture1441.USE = "JinLOA4TextureAtlas"

Appearance1439.texture = ImageTexture1441

Shape1438.appearance = Appearance1439
IndexedFaceSet1442 = x3d.IndexedFaceSet()
IndexedFaceSet1442.coordIndex = [1,7,14,-1,14,15,1,-1,8,3,14,-1,1,18,5,-1,5,7,1,-1,3,4,21,-1,21,2,3,-1,6,4,3,-1,3,8,6,-1,6,13,4,-1,0,13,5,-1,5,18,0,-1,13,0,21,-1,21,4,13,-1,2,15,14,-1,14,3,2,-1,8,11,12,-1,12,6,8,-1,7,5,9,-1,9,10,7,-1,10,9,12,-1,12,11,10,-1,8,14,10,-1,10,11,8,-1,13,6,12,-1,12,9,13,-1,9,5,13,-1,7,10,14,-1,15,2,16,-1,16,17,15,-1,18,1,19,-1,19,20,18,-1,2,21,22,-1,22,16,2,-1,0,18,20,-1,20,23,0,-1,21,0,23,-1,23,22,21,-1,1,15,17,-1,17,19,1,-1,19,17,23,-1,23,20,19,-1,16,22,23,-1,23,17,16,-1]
IndexedFaceSet1442.creaseAngle = 3.14159
IndexedFaceSet1442.texCoordIndex = [3,0,24,-1,24,25,3,-1,4,5,1,-1,3,6,7,-1,7,0,3,-1,5,8,9,-1,9,10,5,-1,11,8,5,-1,5,4,11,-1,11,12,8,-1,27,26,7,-1,7,6,27,-1,12,13,9,-1,9,8,12,-1,10,2,1,-1,1,5,10,-1,4,14,15,-1,15,11,4,-1,0,7,29,-1,29,28,0,-1,16,17,15,-1,15,14,16,-1,4,1,16,-1,16,14,4,-1,12,11,15,-1,15,17,12,-1,29,7,26,-1,0,28,24,-1,2,10,18,-1,18,19,2,-1,6,3,20,-1,20,21,6,-1,10,9,22,-1,22,18,10,-1,27,6,21,-1,21,31,27,-1,9,13,23,-1,23,22,9,-1,3,25,30,-1,30,20,3,-1,20,30,31,-1,31,21,20,-1,18,22,23,-1,23,19,18,-1]
Coordinate1443 = x3d.Coordinate()

IndexedFaceSet1442.coord = Coordinate1443
TextureCoordinate1444 = x3d.TextureCoordinate()

IndexedFaceSet1442.texCoord = TextureCoordinate1444

Shape1438.geometry = IndexedFaceSet1442

HAnimSegment1437.children.append(Shape1438)
HAnimSite1445 = x3d.HAnimSite()
HAnimSite1445.DEF = "r_carpal_middle_phalanx_4_Sites"
"""None"""

HAnimSegment1437.children.append(HAnimSite1445)

HAnimJoint1436.children.append(HAnimSegment1437)
HAnimJoint1446 = x3d.HAnimJoint()
HAnimJoint1446.name = "r_carpal_distal_interphalangeal_4"
HAnimJoint1446.DEF = "hanim_r_carpal_distal_interphalangeal_4"
HAnimJoint1446.center = [-0.1802925,0.580725,-0.019777501]
HAnimJoint1446.ulimit = [0,0,0]
HAnimJoint1446.llimit = [0,0,0]
HAnimSegment1447 = x3d.HAnimSegment()
HAnimSegment1447.name = "r_carpal_distal_phalanx_4"
HAnimSegment1447.DEF = "hanim_r_carpal_distal_phalanx_4"
Shape1448 = x3d.Shape()
Shape1448.DEF = "r_carpal_distal_phalanx_4_Shape"
Appearance1449 = x3d.Appearance()
Material1450 = x3d.Material()
Material1450.USE = "SurfaceDefault"

Appearance1449.material = Material1450
ImageTexture1451 = x3d.ImageTexture()
ImageTexture1451.USE = "JinLOA4TextureAtlas"

Appearance1449.texture = ImageTexture1451

Shape1448.appearance = Appearance1449
IndexedFaceSet1452 = x3d.IndexedFaceSet()
IndexedFaceSet1452.coordIndex = [0,31,25,-1,24,32,1,-1,1,3,2,-1,2,0,1,-1,31,5,4,-1,4,23,31,-1,0,2,5,-1,5,31,0,-1,23,4,6,-1,6,29,23,-1,32,7,3,-1,3,1,32,-1,29,6,7,-1,7,32,29,-1,2,14,17,-1,17,8,2,-1,5,11,10,-1,10,4,5,-1,2,8,11,-1,11,5,2,-1,10,21,18,-1,18,12,10,-1,7,13,9,-1,9,3,7,-1,6,12,13,-1,13,7,6,-1,8,17,19,-1,19,11,8,-1,19,21,10,-1,10,11,19,-1,25,24,1,-1,1,0,25,-1,14,20,22,-1,22,16,14,-1,15,16,22,-1,22,18,15,-1,3,9,20,-1,20,14,3,-1,14,2,3,-1,4,10,12,-1,12,6,4,-1,21,15,18,-1,14,16,19,-1,19,17,14,-1,19,16,15,-1,15,21,19,-1,9,13,22,-1,22,20,9,-1,22,13,12,-1,12,18,22,-1,25,26,27,-1,27,24,25,-1,23,29,30,-1,30,28,23,-1,28,30,27,-1,27,26,28,-1,25,31,28,-1,28,26,25,-1,32,24,27,-1,27,30,32,-1,30,29,32,-1,23,28,31,-1]
IndexedFaceSet1452.creaseAngle = 3.14159
IndexedFaceSet1452.texCoordIndex = [0,1,2,-1,3,4,5,-1,5,6,7,-1,7,0,5,-1,33,35,9,-1,9,10,33,-1,0,7,8,-1,8,1,0,-1,10,9,11,-1,11,12,10,-1,4,13,6,-1,6,5,4,-1,12,11,36,-1,36,34,12,-1,7,14,15,-1,15,16,7,-1,35,37,18,-1,18,9,35,-1,7,16,17,-1,17,8,7,-1,18,20,21,-1,21,19,18,-1,13,22,23,-1,23,6,13,-1,11,19,38,-1,38,36,11,-1,16,15,24,-1,24,17,16,-1,39,20,18,-1,18,37,39,-1,2,3,5,-1,5,0,2,-1,14,26,27,-1,27,25,14,-1,28,40,41,-1,41,21,28,-1,6,23,26,-1,26,14,6,-1,14,7,6,-1,9,18,19,-1,19,11,9,-1,20,28,21,-1,14,25,24,-1,24,15,14,-1,39,40,28,-1,28,20,39,-1,23,22,27,-1,27,26,23,-1,41,38,19,-1,19,21,41,-1,2,29,30,-1,30,3,2,-1,10,12,43,-1,43,42,10,-1,31,32,30,-1,30,29,31,-1,2,1,31,-1,31,29,2,-1,4,3,30,-1,30,32,4,-1,43,12,34,-1,10,42,33,-1]
Coordinate1453 = x3d.Coordinate()

IndexedFaceSet1452.coord = Coordinate1453
TextureCoordinate1454 = x3d.TextureCoordinate()

IndexedFaceSet1452.texCoord = TextureCoordinate1454

Shape1448.geometry = IndexedFaceSet1452

HAnimSegment1447.children.append(Shape1448)
HAnimSite1455 = x3d.HAnimSite()
HAnimSite1455.DEF = "hanim_r_carpal_distal_phalanx_4_Sites"
"""(r_carpal_distal_phalanx_4_tip -0.1934 0.6778 -0.0693)"""

HAnimSegment1447.children.append(HAnimSite1455)

HAnimJoint1446.children.append(HAnimSegment1447)

HAnimJoint1436.children.append(HAnimJoint1446)

HAnimJoint1426.children.append(HAnimJoint1436)

HAnimJoint1416.children.append(HAnimJoint1426)

HAnimJoint1406.children.append(HAnimJoint1416)

HAnimJoint1256.children.append(HAnimJoint1406)
HAnimJoint1456 = x3d.HAnimJoint()
HAnimJoint1456.name = "r_carpometacarpal_5"
HAnimJoint1456.DEF = "hanim_r_carpometacarpal_5"
HAnimJoint1456.center = [-0.18126,0.68827504,-0.032782502]
HAnimJoint1456.ulimit = [0,0,0]
HAnimJoint1456.llimit = [0,0,0]
HAnimSegment1457 = x3d.HAnimSegment()
HAnimSegment1457.name = "r_metacarpal_5"
HAnimSegment1457.DEF = "hanim_r_metacarpal_5"
Shape1458 = x3d.Shape()
Shape1458.DEF = "r_metacarpal_5_Shape"
Appearance1459 = x3d.Appearance()
Material1460 = x3d.Material()
Material1460.USE = "SurfaceDefault"

Appearance1459.material = Material1460
ImageTexture1461 = x3d.ImageTexture()
ImageTexture1461.USE = "JinLOA4TextureAtlas"

Appearance1459.texture = ImageTexture1461

Shape1458.appearance = Appearance1459
IndexedFaceSet1462 = x3d.IndexedFaceSet()
IndexedFaceSet1462.coordIndex = [11,9,0,-1,0,3,11,-1,5,2,1,-1,1,4,5,-1,3,0,2,-1,2,5,3,-1,9,13,8,-1,8,0,9,-1,2,7,6,-1,6,1,2,-1,6,14,10,-1,10,1,6,-1,1,10,12,-1,12,4,1,-1,0,8,7,-1,7,2,0,-1,25,26,27,-1,27,20,25,-1,16,17,18,-1,16,18,19,-1,15,16,19,-1,30,31,32,-1,29,30,32,-1,28,29,32,-1,11,3,16,-1,16,15,11,-1,3,5,17,-1,17,16,3,-1,5,4,18,-1,18,17,5,-1,4,12,19,-1,19,18,4,-1,24,21,22,-1,22,23,24,-1,20,21,24,-1,24,25,20,-1,9,11,21,-1,21,20,9,-1,11,15,22,-1,22,21,11,-1,15,19,23,-1,23,22,15,-1,19,12,24,-1,24,23,19,-1,12,10,25,-1,25,24,12,-1,10,14,26,-1,26,25,10,-1,14,13,27,-1,27,26,14,-1,13,9,20,-1,20,27,13,-1,14,6,29,-1,29,28,14,-1,6,7,30,-1,30,29,6,-1,7,8,31,-1,31,30,7,-1,8,13,32,-1,32,31,8,-1,13,14,28,-1,28,32,13,-1]
IndexedFaceSet1462.creaseAngle = 3.14159
IndexedFaceSet1462.texCoordIndex = [0,1,2,-1,2,3,0,-1,33,34,6,-1,6,35,33,-1,3,2,5,-1,5,4,3,-1,1,8,9,-1,9,2,1,-1,34,37,11,-1,11,6,34,-1,11,12,38,-1,38,6,11,-1,6,38,39,-1,39,35,6,-1,2,9,10,-1,10,5,2,-1,40,16,41,-1,41,42,40,-1,20,21,22,-1,20,22,23,-1,19,20,23,-1,43,44,45,-1,25,43,45,-1,24,25,45,-1,0,3,20,-1,20,19,0,-1,3,4,21,-1,21,20,3,-1,4,7,22,-1,22,21,4,-1,7,14,23,-1,23,22,7,-1,29,30,31,-1,31,32,29,-1,18,30,29,-1,29,15,18,-1,1,0,30,-1,30,18,1,-1,0,19,31,-1,31,30,0,-1,19,23,32,-1,32,31,19,-1,23,14,29,-1,29,32,23,-1,14,13,15,-1,15,29,14,-1,38,12,16,-1,16,40,38,-1,12,36,41,-1,41,16,12,-1,8,1,18,-1,18,17,8,-1,12,11,25,-1,25,24,12,-1,11,37,43,-1,43,25,11,-1,10,9,27,-1,27,26,10,-1,9,8,28,-1,28,27,9,-1,36,12,24,-1,24,45,36,-1]
Coordinate1463 = x3d.Coordinate()

IndexedFaceSet1462.coord = Coordinate1463
TextureCoordinate1464 = x3d.TextureCoordinate()

IndexedFaceSet1462.texCoord = TextureCoordinate1464

Shape1458.geometry = IndexedFaceSet1462

HAnimSegment1457.children.append(Shape1458)
HAnimSite1465 = x3d.HAnimSite()
HAnimSite1465.DEF = "r_metacarpal_5_Sites"
"""(r_metacarpal_phalanx_5 -0.1929 0.7890 -0.1064)"""

HAnimSegment1457.children.append(HAnimSite1465)

HAnimJoint1456.children.append(HAnimSegment1457)
HAnimJoint1466 = x3d.HAnimJoint()
HAnimJoint1466.name = "r_metacarpophalangeal_5"
HAnimJoint1466.DEF = "hanim_r_metacarpophalangeal_5"
HAnimJoint1466.center = [-0.18297,0.6381,-0.0370575]
HAnimJoint1466.ulimit = [0,0,0]
HAnimJoint1466.llimit = [0,0,0]
HAnimSegment1467 = x3d.HAnimSegment()
HAnimSegment1467.name = "r_carpal_proximal_phalanx_5"
HAnimSegment1467.DEF = "hanim_r_carpal_proximal_phalanx_5"
Shape1468 = x3d.Shape()
Shape1468.DEF = "r_carpal_proximal_phalanx_5_Shape"
Appearance1469 = x3d.Appearance()
Material1470 = x3d.Material()
Material1470.USE = "SurfaceDefault"

Appearance1469.material = Material1470
ImageTexture1471 = x3d.ImageTexture()
ImageTexture1471.USE = "JinLOA4TextureAtlas"

Appearance1469.texture = ImageTexture1471

Shape1468.appearance = Appearance1469
IndexedFaceSet1472 = x3d.IndexedFaceSet()
IndexedFaceSet1472.coordIndex = [10,11,6,-1,6,8,10,-1,0,9,5,-1,5,3,0,-1,11,1,4,-1,4,6,11,-1,2,0,3,-1,3,7,2,-1,1,2,7,-1,7,4,1,-1,9,10,8,-1,8,5,9,-1,5,8,7,-1,7,3,5,-1,6,4,7,-1,7,8,6,-1,17,2,1,-1,1,13,17,-1,14,25,26,-1,26,15,14,-1,0,14,15,-1,15,9,0,-1,13,1,11,-1,11,12,13,-1,2,17,14,-1,14,0,2,-1,12,36,34,-1,9,15,16,-1,16,10,9,-1,16,12,11,-1,11,10,16,-1,16,15,37,-1,37,35,16,-1,12,16,35,-1,35,36,12,-1,37,15,26,-1,12,34,23,-1,23,13,12,-1,13,23,24,-1,24,17,13,-1,17,24,25,-1,25,14,17,-1,21,20,19,-1,22,21,19,-1,18,22,19,-1,23,19,20,-1,20,24,23,-1,24,20,21,-1,21,25,24,-1,25,21,22,-1,22,26,25,-1,27,33,32,-1,27,32,31,-1,31,30,29,-1,31,29,28,-1,27,31,28,-1,34,18,19,-1,19,23,34,-1,35,29,30,-1,30,36,35,-1,36,30,31,-1,31,34,36,-1,34,31,32,-1,32,18,34,-1,18,32,33,-1,33,22,18,-1,22,33,27,-1,27,26,22,-1,26,27,28,-1,28,37,26,-1,37,28,29,-1,29,35,37,-1]
IndexedFaceSet1472.creaseAngle = 3.14159
IndexedFaceSet1472.texCoordIndex = [0,1,2,-1,2,3,0,-1,4,5,6,-1,6,7,4,-1,1,8,9,-1,9,2,1,-1,40,4,7,-1,7,41,40,-1,8,10,11,-1,11,9,8,-1,5,38,39,-1,39,6,5,-1,6,39,41,-1,41,7,6,-1,2,9,11,-1,11,3,2,-1,12,10,8,-1,8,13,12,-1,14,43,44,-1,44,17,14,-1,4,14,17,-1,17,5,4,-1,13,8,1,-1,1,18,13,-1,40,42,14,-1,14,4,40,-1,18,19,20,-1,5,17,45,-1,45,38,5,-1,21,18,1,-1,1,0,21,-1,45,17,46,-1,46,47,45,-1,18,21,23,-1,23,19,18,-1,46,17,44,-1,18,20,24,-1,24,13,18,-1,13,24,25,-1,25,12,13,-1,42,48,43,-1,43,14,42,-1,28,29,30,-1,27,28,30,-1,26,27,30,-1,24,30,29,-1,29,25,24,-1,25,29,28,-1,28,15,25,-1,15,28,27,-1,27,16,15,-1,31,32,33,-1,31,33,34,-1,34,35,36,-1,34,36,37,-1,31,34,37,-1,20,26,30,-1,30,24,20,-1,23,36,35,-1,35,19,23,-1,19,35,34,-1,34,20,19,-1,20,34,33,-1,33,26,20,-1,26,33,32,-1,32,27,26,-1,27,32,31,-1,31,16,27,-1,16,31,37,-1,37,22,16,-1,22,37,36,-1,36,23,22,-1]
Coordinate1473 = x3d.Coordinate()

IndexedFaceSet1472.coord = Coordinate1473
TextureCoordinate1474 = x3d.TextureCoordinate()

IndexedFaceSet1472.texCoord = TextureCoordinate1474

Shape1468.geometry = IndexedFaceSet1472

HAnimSegment1467.children.append(Shape1468)
HAnimSite1475 = x3d.HAnimSite()
HAnimSite1475.DEF = "r_carpal_proximal_phalanx_5_Sites"
"""None"""

HAnimSegment1467.children.append(HAnimSite1475)

HAnimJoint1466.children.append(HAnimSegment1467)
HAnimJoint1476 = x3d.HAnimJoint()
HAnimJoint1476.name = "r_carpal_proximal_interphalangeal_5"
HAnimJoint1476.DEF = "hanim_r_carpal_proximal_interphalangeal_5"
HAnimJoint1476.center = [-0.18130499,0.62100005,-0.037147503]
HAnimJoint1476.ulimit = [0,0,0]
HAnimJoint1476.llimit = [0,0,0]
HAnimSegment1477 = x3d.HAnimSegment()
HAnimSegment1477.name = "r_carpal_middle_phalanx_5"
HAnimSegment1477.DEF = "hanim_r_carpal_middle_phalanx_5"
Shape1478 = x3d.Shape()
Shape1478.DEF = "r_carpal_middle_phalanx_5_Shape"
Appearance1479 = x3d.Appearance()
Material1480 = x3d.Material()
Material1480.USE = "SurfaceDefault"

Appearance1479.material = Material1480
ImageTexture1481 = x3d.ImageTexture()
ImageTexture1481.USE = "JinLOA4TextureAtlas"

Appearance1479.texture = ImageTexture1481

Shape1478.appearance = Appearance1479
IndexedFaceSet1482 = x3d.IndexedFaceSet()
IndexedFaceSet1482.coordIndex = [1,7,14,-1,14,15,1,-1,8,3,14,-1,1,18,5,-1,5,7,1,-1,3,4,21,-1,21,2,3,-1,6,4,3,-1,3,8,6,-1,6,13,4,-1,0,13,5,-1,5,18,0,-1,13,0,21,-1,21,4,13,-1,2,15,14,-1,14,3,2,-1,8,11,12,-1,12,6,8,-1,7,5,9,-1,9,10,7,-1,10,9,12,-1,12,11,10,-1,8,14,10,-1,10,11,8,-1,13,6,12,-1,12,9,13,-1,9,5,13,-1,7,10,14,-1,15,2,16,-1,16,17,15,-1,18,1,19,-1,19,20,18,-1,2,21,22,-1,22,16,2,-1,0,18,20,-1,20,23,0,-1,21,0,23,-1,23,22,21,-1,1,15,17,-1,17,19,1,-1,19,17,23,-1,23,20,19,-1,16,22,23,-1,23,17,16,-1]
IndexedFaceSet1482.creaseAngle = 3.14159
IndexedFaceSet1482.texCoordIndex = [3,0,24,-1,24,25,3,-1,4,5,1,-1,3,6,7,-1,7,0,3,-1,5,8,9,-1,9,10,5,-1,11,8,5,-1,5,4,11,-1,11,12,8,-1,27,26,7,-1,7,6,27,-1,12,13,9,-1,9,8,12,-1,10,2,1,-1,1,5,10,-1,4,14,15,-1,15,11,4,-1,0,7,29,-1,29,28,0,-1,16,17,15,-1,15,14,16,-1,4,1,16,-1,16,14,4,-1,12,11,15,-1,15,17,12,-1,29,7,26,-1,0,28,24,-1,2,10,18,-1,18,19,2,-1,6,3,20,-1,20,21,6,-1,10,9,22,-1,22,18,10,-1,27,6,21,-1,21,31,27,-1,9,13,23,-1,23,22,9,-1,3,25,30,-1,30,20,3,-1,20,30,31,-1,31,21,20,-1,18,22,23,-1,23,19,18,-1]
Coordinate1483 = x3d.Coordinate()

IndexedFaceSet1482.coord = Coordinate1483
TextureCoordinate1484 = x3d.TextureCoordinate()

IndexedFaceSet1482.texCoord = TextureCoordinate1484

Shape1478.geometry = IndexedFaceSet1482

HAnimSegment1477.children.append(Shape1478)
HAnimSite1485 = x3d.HAnimSite()
HAnimSite1485.DEF = "r_carpal_middle_phalanx_5_Sites"
"""None"""

HAnimSegment1477.children.append(HAnimSite1485)

HAnimJoint1476.children.append(HAnimSegment1477)
HAnimJoint1486 = x3d.HAnimJoint()
HAnimJoint1486.name = "r_carpal_distal_interphalangeal_5"
HAnimJoint1486.DEF = "hanim_r_carpal_distal_interphalangeal_5"
HAnimJoint1486.center = [-0.18045002,0.602325,-0.0369675]
HAnimJoint1486.ulimit = [0,0,0]
HAnimJoint1486.llimit = [0,0,0]
HAnimSegment1487 = x3d.HAnimSegment()
HAnimSegment1487.name = "r_carpal_distal_phalanx_5"
HAnimSegment1487.DEF = "hanim_r_carpal_distal_phalanx_5"
Shape1488 = x3d.Shape()
Shape1488.DEF = "r_carpal_distal_phalanx_5_Shape"
Appearance1489 = x3d.Appearance()
Material1490 = x3d.Material()
Material1490.USE = "SurfaceDefault"

Appearance1489.material = Material1490
ImageTexture1491 = x3d.ImageTexture()
ImageTexture1491.USE = "JinLOA4TextureAtlas"

Appearance1489.texture = ImageTexture1491

Shape1488.appearance = Appearance1489
IndexedFaceSet1492 = x3d.IndexedFaceSet()
IndexedFaceSet1492.coordIndex = [0,31,25,-1,24,32,1,-1,1,3,2,-1,2,0,1,-1,31,5,4,-1,4,23,31,-1,0,2,5,-1,5,31,0,-1,23,4,6,-1,6,29,23,-1,32,7,3,-1,3,1,32,-1,29,6,7,-1,7,32,29,-1,2,14,17,-1,17,8,2,-1,5,11,10,-1,10,4,5,-1,2,8,11,-1,11,5,2,-1,10,21,18,-1,18,12,10,-1,7,13,9,-1,9,3,7,-1,6,12,13,-1,13,7,6,-1,8,17,19,-1,19,11,8,-1,19,21,10,-1,10,11,19,-1,25,24,1,-1,1,0,25,-1,14,20,22,-1,22,16,14,-1,15,16,22,-1,22,18,15,-1,3,9,20,-1,20,14,3,-1,14,2,3,-1,4,10,12,-1,12,6,4,-1,21,15,18,-1,14,16,19,-1,19,17,14,-1,19,16,15,-1,15,21,19,-1,9,13,22,-1,22,20,9,-1,22,13,12,-1,12,18,22,-1,25,26,27,-1,27,24,25,-1,23,29,30,-1,30,28,23,-1,28,30,27,-1,27,26,28,-1,25,31,28,-1,28,26,25,-1,32,24,27,-1,27,30,32,-1,30,29,32,-1,23,28,31,-1]
IndexedFaceSet1492.creaseAngle = 3.14159
IndexedFaceSet1492.texCoordIndex = [0,1,2,-1,3,4,5,-1,5,6,7,-1,7,0,5,-1,33,35,9,-1,9,10,33,-1,0,7,8,-1,8,1,0,-1,10,9,11,-1,11,12,10,-1,4,13,6,-1,6,5,4,-1,12,11,36,-1,36,34,12,-1,7,14,15,-1,15,16,7,-1,35,37,18,-1,18,9,35,-1,7,16,17,-1,17,8,7,-1,18,20,21,-1,21,19,18,-1,13,22,23,-1,23,6,13,-1,11,19,38,-1,38,36,11,-1,16,15,24,-1,24,17,16,-1,39,20,18,-1,18,37,39,-1,2,3,5,-1,5,0,2,-1,14,26,27,-1,27,25,14,-1,28,40,41,-1,41,21,28,-1,6,23,26,-1,26,14,6,-1,14,7,6,-1,9,18,19,-1,19,11,9,-1,20,28,21,-1,14,25,24,-1,24,15,14,-1,39,40,28,-1,28,20,39,-1,23,22,27,-1,27,26,23,-1,41,38,19,-1,19,21,41,-1,2,29,30,-1,30,3,2,-1,10,12,43,-1,43,42,10,-1,31,32,30,-1,30,29,31,-1,2,1,31,-1,31,29,2,-1,4,3,30,-1,30,32,4,-1,43,12,34,-1,10,42,33,-1]
Coordinate1493 = x3d.Coordinate()

IndexedFaceSet1492.coord = Coordinate1493
TextureCoordinate1494 = x3d.TextureCoordinate()

IndexedFaceSet1492.texCoord = TextureCoordinate1494

Shape1488.geometry = IndexedFaceSet1492

HAnimSegment1487.children.append(Shape1488)
HAnimSite1495 = x3d.HAnimSite()
HAnimSite1495.DEF = "r_carpal_distal_phalanx_5_Sites"
"""(r_carpal_distal_phalanx_5_tip -0.1938 0.7035 -0.0949)"""

HAnimSegment1487.children.append(HAnimSite1495)

HAnimJoint1486.children.append(HAnimSegment1487)

HAnimJoint1476.children.append(HAnimJoint1486)

HAnimJoint1466.children.append(HAnimJoint1476)

HAnimJoint1456.children.append(HAnimJoint1466)

HAnimJoint1256.children.append(HAnimJoint1456)

HAnimJoint1246.children.append(HAnimJoint1256)

HAnimJoint1236.children.append(HAnimJoint1246)

HAnimJoint1226.children.append(HAnimJoint1236)

HAnimJoint1216.children.append(HAnimJoint1226)

HAnimJoint776.children.append(HAnimJoint1216)

HAnimJoint766.children.append(HAnimJoint776)

HAnimJoint756.children.append(HAnimJoint766)

HAnimJoint746.children.append(HAnimJoint756)

HAnimJoint736.children.append(HAnimJoint746)

HAnimJoint726.children.append(HAnimJoint736)

HAnimJoint716.children.append(HAnimJoint726)

HAnimJoint706.children.append(HAnimJoint716)

HAnimJoint696.children.append(HAnimJoint706)

HAnimJoint686.children.append(HAnimJoint696)

HAnimJoint676.children.append(HAnimJoint686)

HAnimJoint666.children.append(HAnimJoint676)

HAnimJoint656.children.append(HAnimJoint666)

HAnimJoint646.children.append(HAnimJoint656)

HAnimJoint636.children.append(HAnimJoint646)

HAnimJoint626.children.append(HAnimJoint636)

HAnimJoint616.children.append(HAnimJoint626)

HAnimJoint46.children.append(HAnimJoint616)

HAnimJoint36.children.append(HAnimJoint46)

HAnimHumanoid26.skeleton.append(HAnimJoint36)

Scene22.children.append(HAnimHumanoid26)
Group1496 = x3d.Group()
Group1496.DEF = "StopAnimation_loa4"
TimeSensor1497 = x3d.TimeSensor()
TimeSensor1497.DEF = "StopTimer"
TimeSensor1497.cycleInterval = 5.5
TimeSensor1497.loop = True

Group1496.children.append(TimeSensor1497)
PositionInterpolator1498 = x3d.PositionInterpolator()
PositionInterpolator1498.DEF = "Stop_humanoid_root_TranslationInterpolator"
PositionInterpolator1498.key = [0,0.5,1]

Group1496.children.append(PositionInterpolator1498)
OrientationInterpolator1499 = x3d.OrientationInterpolator()
OrientationInterpolator1499.DEF = "Stop_humanoid_root_RotationInterpolator"
OrientationInterpolator1499.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1499)
OrientationInterpolator1500 = x3d.OrientationInterpolator()
OrientationInterpolator1500.DEF = "Stop_sacroiliac_RotationInterpolator"
OrientationInterpolator1500.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1500)
OrientationInterpolator1501 = x3d.OrientationInterpolator()
OrientationInterpolator1501.DEF = "Stop_l_hip_RotationInterpolator"
OrientationInterpolator1501.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1501)
OrientationInterpolator1502 = x3d.OrientationInterpolator()
OrientationInterpolator1502.DEF = "Stop_l_knee_RotationInterpolator"
OrientationInterpolator1502.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1502)
OrientationInterpolator1503 = x3d.OrientationInterpolator()
OrientationInterpolator1503.DEF = "Stop_l_talocrural_RotationInterpolator"
OrientationInterpolator1503.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1503)
OrientationInterpolator1504 = x3d.OrientationInterpolator()
OrientationInterpolator1504.DEF = "Stop_l_talocalcaneonavicular_RotationInterpolator"
OrientationInterpolator1504.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1504)
OrientationInterpolator1505 = x3d.OrientationInterpolator()
OrientationInterpolator1505.DEF = "Stop_l_cuneonavicular_1_RotationInterpolator"
OrientationInterpolator1505.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1505)
OrientationInterpolator1506 = x3d.OrientationInterpolator()
OrientationInterpolator1506.DEF = "Stop_l_tarsometatarsal_1_RotationInterpolator"
OrientationInterpolator1506.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1506)
OrientationInterpolator1507 = x3d.OrientationInterpolator()
OrientationInterpolator1507.DEF = "Stop_l_metatarsophalangeal_1_RotationInterpolator"
OrientationInterpolator1507.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1507)
OrientationInterpolator1508 = x3d.OrientationInterpolator()
OrientationInterpolator1508.DEF = "Stop_l_tarsal_interphalangeal_1_RotationInterpolator"
OrientationInterpolator1508.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1508)
OrientationInterpolator1509 = x3d.OrientationInterpolator()
OrientationInterpolator1509.DEF = "Stop_l_cuneonavicular_2_RotationInterpolator"
OrientationInterpolator1509.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1509)
OrientationInterpolator1510 = x3d.OrientationInterpolator()
OrientationInterpolator1510.DEF = "Stop_l_tarsometatarsal_2_RotationInterpolator"
OrientationInterpolator1510.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1510)
OrientationInterpolator1511 = x3d.OrientationInterpolator()
OrientationInterpolator1511.DEF = "Stop_l_metatarsophalangeal_2_RotationInterpolator"
OrientationInterpolator1511.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1511)
OrientationInterpolator1512 = x3d.OrientationInterpolator()
OrientationInterpolator1512.DEF = "Stop_l_tarsal_proximal_interphalangeal_2_RotationInterpolator"
OrientationInterpolator1512.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1512)
OrientationInterpolator1513 = x3d.OrientationInterpolator()
OrientationInterpolator1513.DEF = "Stop_l_tarsal_distal_interphalangeal_2_RotationInterpolator"
OrientationInterpolator1513.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1513)
OrientationInterpolator1514 = x3d.OrientationInterpolator()
OrientationInterpolator1514.DEF = "Stop_l_cuneonavicular_3_RotationInterpolator"
OrientationInterpolator1514.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1514)
OrientationInterpolator1515 = x3d.OrientationInterpolator()
OrientationInterpolator1515.DEF = "Stop_l_tarsometatarsal_3_RotationInterpolator"
OrientationInterpolator1515.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1515)
OrientationInterpolator1516 = x3d.OrientationInterpolator()
OrientationInterpolator1516.DEF = "Stop_l_metatarsophalangeal_3_RotationInterpolator"
OrientationInterpolator1516.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1516)
OrientationInterpolator1517 = x3d.OrientationInterpolator()
OrientationInterpolator1517.DEF = "Stop_l_tarsal_proximal_interphalangeal_3_RotationInterpolator"
OrientationInterpolator1517.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1517)
OrientationInterpolator1518 = x3d.OrientationInterpolator()
OrientationInterpolator1518.DEF = "Stop_l_tarsal_distal_interphalangeal_3_RotationInterpolator"
OrientationInterpolator1518.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1518)
OrientationInterpolator1519 = x3d.OrientationInterpolator()
OrientationInterpolator1519.DEF = "Stop_l_calcaneocuboid_RotationInterpolator"
OrientationInterpolator1519.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1519)
OrientationInterpolator1520 = x3d.OrientationInterpolator()
OrientationInterpolator1520.DEF = "Stop_l_transversetarsal_RotationInterpolator"
OrientationInterpolator1520.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1520)
OrientationInterpolator1521 = x3d.OrientationInterpolator()
OrientationInterpolator1521.DEF = "Stop_l_tarsometatarsal_4_RotationInterpolator"
OrientationInterpolator1521.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1521)
OrientationInterpolator1522 = x3d.OrientationInterpolator()
OrientationInterpolator1522.DEF = "Stop_l_metatarsophalangeal_4_RotationInterpolator"
OrientationInterpolator1522.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1522)
OrientationInterpolator1523 = x3d.OrientationInterpolator()
OrientationInterpolator1523.DEF = "Stop_l_tarsal_proximal_interphalangeal_4_RotationInterpolator"
OrientationInterpolator1523.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1523)
OrientationInterpolator1524 = x3d.OrientationInterpolator()
OrientationInterpolator1524.DEF = "Stop_l_tarsal_distal_interphalangeal_4_RotationInterpolator"
OrientationInterpolator1524.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1524)
OrientationInterpolator1525 = x3d.OrientationInterpolator()
OrientationInterpolator1525.DEF = "Stop_l_tarsometatarsal_5_RotationInterpolator"
OrientationInterpolator1525.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1525)
OrientationInterpolator1526 = x3d.OrientationInterpolator()
OrientationInterpolator1526.DEF = "Stop_l_metatarsophalangeal_5_RotationInterpolator"
OrientationInterpolator1526.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1526)
OrientationInterpolator1527 = x3d.OrientationInterpolator()
OrientationInterpolator1527.DEF = "Stop_l_tarsal_proximal_interphalangeal_5_RotationInterpolator"
OrientationInterpolator1527.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1527)
OrientationInterpolator1528 = x3d.OrientationInterpolator()
OrientationInterpolator1528.DEF = "Stop_l_tarsal_distal_interphalangeal_5_RotationInterpolator"
OrientationInterpolator1528.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1528)
OrientationInterpolator1529 = x3d.OrientationInterpolator()
OrientationInterpolator1529.DEF = "Stop_r_hip_RotationInterpolator"
OrientationInterpolator1529.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1529)
OrientationInterpolator1530 = x3d.OrientationInterpolator()
OrientationInterpolator1530.DEF = "Stop_r_knee_RotationInterpolator"
OrientationInterpolator1530.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1530)
OrientationInterpolator1531 = x3d.OrientationInterpolator()
OrientationInterpolator1531.DEF = "Stop_r_talocrural_RotationInterpolator"
OrientationInterpolator1531.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1531)
OrientationInterpolator1532 = x3d.OrientationInterpolator()
OrientationInterpolator1532.DEF = "Stop_r_talocalcaneonavicular_RotationInterpolator"
OrientationInterpolator1532.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1532)
OrientationInterpolator1533 = x3d.OrientationInterpolator()
OrientationInterpolator1533.DEF = "Stop_r_cuneonavicular_1_RotationInterpolator"
OrientationInterpolator1533.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1533)
OrientationInterpolator1534 = x3d.OrientationInterpolator()
OrientationInterpolator1534.DEF = "Stop_r_tarsometatarsal_1_RotationInterpolator"
OrientationInterpolator1534.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1534)
OrientationInterpolator1535 = x3d.OrientationInterpolator()
OrientationInterpolator1535.DEF = "Stop_r_metatarsophalangeal_1_RotationInterpolator"
OrientationInterpolator1535.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1535)
OrientationInterpolator1536 = x3d.OrientationInterpolator()
OrientationInterpolator1536.DEF = "Stop_r_tarsal_interphalangeal_1_RotationInterpolator"
OrientationInterpolator1536.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1536)
OrientationInterpolator1537 = x3d.OrientationInterpolator()
OrientationInterpolator1537.DEF = "Stop_r_cuneonavicular_2_RotationInterpolator"
OrientationInterpolator1537.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1537)
OrientationInterpolator1538 = x3d.OrientationInterpolator()
OrientationInterpolator1538.DEF = "Stop_r_tarsometatarsal_2_RotationInterpolator"
OrientationInterpolator1538.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1538)
OrientationInterpolator1539 = x3d.OrientationInterpolator()
OrientationInterpolator1539.DEF = "Stop_r_metatarsophalangeal_2_RotationInterpolator"
OrientationInterpolator1539.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1539)
OrientationInterpolator1540 = x3d.OrientationInterpolator()
OrientationInterpolator1540.DEF = "Stop_r_tarsal_proximal_interphalangeal_2_RotationInterpolator"
OrientationInterpolator1540.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1540)
OrientationInterpolator1541 = x3d.OrientationInterpolator()
OrientationInterpolator1541.DEF = "Stop_r_tarsal_distal_interphalangeal_2_RotationInterpolator"
OrientationInterpolator1541.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1541)
OrientationInterpolator1542 = x3d.OrientationInterpolator()
OrientationInterpolator1542.DEF = "Stop_r_cuneonavicular_3_RotationInterpolator"
OrientationInterpolator1542.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1542)
OrientationInterpolator1543 = x3d.OrientationInterpolator()
OrientationInterpolator1543.DEF = "Stop_r_tarsometatarsal_3_RotationInterpolator"
OrientationInterpolator1543.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1543)
OrientationInterpolator1544 = x3d.OrientationInterpolator()
OrientationInterpolator1544.DEF = "Stop_r_metatarsophalangeal_3_RotationInterpolator"
OrientationInterpolator1544.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1544)
OrientationInterpolator1545 = x3d.OrientationInterpolator()
OrientationInterpolator1545.DEF = "Stop_r_tarsal_proximal_interphalangeal_3_RotationInterpolator"
OrientationInterpolator1545.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1545)
OrientationInterpolator1546 = x3d.OrientationInterpolator()
OrientationInterpolator1546.DEF = "Stop_r_tarsal_distal_interphalangeal_3_RotationInterpolator"
OrientationInterpolator1546.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1546)
OrientationInterpolator1547 = x3d.OrientationInterpolator()
OrientationInterpolator1547.DEF = "Stop_r_calcaneocuboid_RotationInterpolator"
OrientationInterpolator1547.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1547)
OrientationInterpolator1548 = x3d.OrientationInterpolator()
OrientationInterpolator1548.DEF = "Stop_r_transversetarsal_RotationInterpolator"
OrientationInterpolator1548.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1548)
OrientationInterpolator1549 = x3d.OrientationInterpolator()
OrientationInterpolator1549.DEF = "Stop_r_tarsometatarsal_4_RotationInterpolator"
OrientationInterpolator1549.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1549)
OrientationInterpolator1550 = x3d.OrientationInterpolator()
OrientationInterpolator1550.DEF = "Stop_r_metatarsophalangeal_4_RotationInterpolator"
OrientationInterpolator1550.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1550)
OrientationInterpolator1551 = x3d.OrientationInterpolator()
OrientationInterpolator1551.DEF = "Stop_r_tarsal_proximal_interphalangeal_4_RotationInterpolator"
OrientationInterpolator1551.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1551)
OrientationInterpolator1552 = x3d.OrientationInterpolator()
OrientationInterpolator1552.DEF = "Stop_r_tarsal_distal_interphalangeal_4_RotationInterpolator"
OrientationInterpolator1552.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1552)
OrientationInterpolator1553 = x3d.OrientationInterpolator()
OrientationInterpolator1553.DEF = "Stop_r_tarsometatarsal_5_RotationInterpolator"
OrientationInterpolator1553.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1553)
OrientationInterpolator1554 = x3d.OrientationInterpolator()
OrientationInterpolator1554.DEF = "Stop_r_metatarsophalangeal_5_RotationInterpolator"
OrientationInterpolator1554.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1554)
OrientationInterpolator1555 = x3d.OrientationInterpolator()
OrientationInterpolator1555.DEF = "Stop_r_tarsal_proximal_interphalangeal_5_RotationInterpolator"
OrientationInterpolator1555.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1555)
OrientationInterpolator1556 = x3d.OrientationInterpolator()
OrientationInterpolator1556.DEF = "Stop_r_tarsal_distal_interphalangeal_5_RotationInterpolator"
OrientationInterpolator1556.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1556)
OrientationInterpolator1557 = x3d.OrientationInterpolator()
OrientationInterpolator1557.DEF = "Stop_vl5_RotationInterpolator"
OrientationInterpolator1557.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1557)
OrientationInterpolator1558 = x3d.OrientationInterpolator()
OrientationInterpolator1558.DEF = "Stop_vl4_RotationInterpolator"
OrientationInterpolator1558.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1558)
OrientationInterpolator1559 = x3d.OrientationInterpolator()
OrientationInterpolator1559.DEF = "Stop_vl3_RotationInterpolator"
OrientationInterpolator1559.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1559)
OrientationInterpolator1560 = x3d.OrientationInterpolator()
OrientationInterpolator1560.DEF = "Stop_vl2_RotationInterpolator"
OrientationInterpolator1560.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1560)
OrientationInterpolator1561 = x3d.OrientationInterpolator()
OrientationInterpolator1561.DEF = "Stop_vl1_RotationInterpolator"
OrientationInterpolator1561.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1561)
OrientationInterpolator1562 = x3d.OrientationInterpolator()
OrientationInterpolator1562.DEF = "Stop_vt12_RotationInterpolator"
OrientationInterpolator1562.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1562)
OrientationInterpolator1563 = x3d.OrientationInterpolator()
OrientationInterpolator1563.DEF = "Stop_vt11_RotationInterpolator"
OrientationInterpolator1563.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1563)
OrientationInterpolator1564 = x3d.OrientationInterpolator()
OrientationInterpolator1564.DEF = "Stop_vt10_RotationInterpolator"
OrientationInterpolator1564.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1564)
OrientationInterpolator1565 = x3d.OrientationInterpolator()
OrientationInterpolator1565.DEF = "Stop_vt9_RotationInterpolator"
OrientationInterpolator1565.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1565)
OrientationInterpolator1566 = x3d.OrientationInterpolator()
OrientationInterpolator1566.DEF = "Stop_vt8_RotationInterpolator"
OrientationInterpolator1566.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1566)
OrientationInterpolator1567 = x3d.OrientationInterpolator()
OrientationInterpolator1567.DEF = "Stop_vt7_RotationInterpolator"
OrientationInterpolator1567.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1567)
OrientationInterpolator1568 = x3d.OrientationInterpolator()
OrientationInterpolator1568.DEF = "Stop_vt6_RotationInterpolator"
OrientationInterpolator1568.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1568)
OrientationInterpolator1569 = x3d.OrientationInterpolator()
OrientationInterpolator1569.DEF = "Stop_vt5_RotationInterpolator"
OrientationInterpolator1569.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1569)
OrientationInterpolator1570 = x3d.OrientationInterpolator()
OrientationInterpolator1570.DEF = "Stop_vt4_RotationInterpolator"
OrientationInterpolator1570.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1570)
OrientationInterpolator1571 = x3d.OrientationInterpolator()
OrientationInterpolator1571.DEF = "Stop_vt3_RotationInterpolator"
OrientationInterpolator1571.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1571)
OrientationInterpolator1572 = x3d.OrientationInterpolator()
OrientationInterpolator1572.DEF = "Stop_vt2_RotationInterpolator"
OrientationInterpolator1572.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1572)
OrientationInterpolator1573 = x3d.OrientationInterpolator()
OrientationInterpolator1573.DEF = "Stop_vt1_RotationInterpolator"
OrientationInterpolator1573.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1573)
OrientationInterpolator1574 = x3d.OrientationInterpolator()
OrientationInterpolator1574.DEF = "Stop_vc7_RotationInterpolator"
OrientationInterpolator1574.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1574)
OrientationInterpolator1575 = x3d.OrientationInterpolator()
OrientationInterpolator1575.DEF = "Stop_vc6_RotationInterpolator"
OrientationInterpolator1575.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1575)
OrientationInterpolator1576 = x3d.OrientationInterpolator()
OrientationInterpolator1576.DEF = "Stop_vc5_RotationInterpolator"
OrientationInterpolator1576.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1576)
OrientationInterpolator1577 = x3d.OrientationInterpolator()
OrientationInterpolator1577.DEF = "Stop_vc4_RotationInterpolator"
OrientationInterpolator1577.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1577)
OrientationInterpolator1578 = x3d.OrientationInterpolator()
OrientationInterpolator1578.DEF = "Stop_vc3_RotationInterpolator"
OrientationInterpolator1578.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1578)
OrientationInterpolator1579 = x3d.OrientationInterpolator()
OrientationInterpolator1579.DEF = "Stop_vc2_RotationInterpolator"
OrientationInterpolator1579.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1579)
OrientationInterpolator1580 = x3d.OrientationInterpolator()
OrientationInterpolator1580.DEF = "Stop_vc1_RotationInterpolator"
OrientationInterpolator1580.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1580)
OrientationInterpolator1581 = x3d.OrientationInterpolator()
OrientationInterpolator1581.DEF = "Stop_skullbase_RotationInterpolator"
OrientationInterpolator1581.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1581)
OrientationInterpolator1582 = x3d.OrientationInterpolator()
OrientationInterpolator1582.DEF = "Stop_l_eyelid_joint_RotationInterpolator"
OrientationInterpolator1582.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1582)
OrientationInterpolator1583 = x3d.OrientationInterpolator()
OrientationInterpolator1583.DEF = "Stop_r_eyelid_joint_RotationInterpolator"
OrientationInterpolator1583.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1583)
OrientationInterpolator1584 = x3d.OrientationInterpolator()
OrientationInterpolator1584.DEF = "Stop_l_eyeball_joint_RotationInterpolator"
OrientationInterpolator1584.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1584)
OrientationInterpolator1585 = x3d.OrientationInterpolator()
OrientationInterpolator1585.DEF = "Stop_r_eyeball_joint_RotationInterpolator"
OrientationInterpolator1585.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1585)
OrientationInterpolator1586 = x3d.OrientationInterpolator()
OrientationInterpolator1586.DEF = "Stop_l_eyebrow_joint_RotationInterpolator"
OrientationInterpolator1586.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1586)
OrientationInterpolator1587 = x3d.OrientationInterpolator()
OrientationInterpolator1587.DEF = "Stop_r_eyebrow_joint_RotationInterpolator"
OrientationInterpolator1587.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1587)
OrientationInterpolator1588 = x3d.OrientationInterpolator()
OrientationInterpolator1588.DEF = "Stop_temporomandibular_RotationInterpolator"
OrientationInterpolator1588.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1588)
OrientationInterpolator1589 = x3d.OrientationInterpolator()
OrientationInterpolator1589.DEF = "Stop_l_sternoclavicular_RotationInterpolator"
OrientationInterpolator1589.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1589)
OrientationInterpolator1590 = x3d.OrientationInterpolator()
OrientationInterpolator1590.DEF = "Stop_l_acromioclavicular_RotationInterpolator"
OrientationInterpolator1590.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1590)
OrientationInterpolator1591 = x3d.OrientationInterpolator()
OrientationInterpolator1591.DEF = "Stop_l_shoulder_RotationInterpolator"
OrientationInterpolator1591.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1591)
OrientationInterpolator1592 = x3d.OrientationInterpolator()
OrientationInterpolator1592.DEF = "Stop_l_elbow_RotationInterpolator"
OrientationInterpolator1592.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1592)
OrientationInterpolator1593 = x3d.OrientationInterpolator()
OrientationInterpolator1593.DEF = "Stop_l_radiocarpal_RotationInterpolator"
OrientationInterpolator1593.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1593)
OrientationInterpolator1594 = x3d.OrientationInterpolator()
OrientationInterpolator1594.DEF = "Stop_l_midcarpal_1_RotationInterpolator"
OrientationInterpolator1594.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1594)
OrientationInterpolator1595 = x3d.OrientationInterpolator()
OrientationInterpolator1595.DEF = "Stop_l_carpometacarpal_1_RotationInterpolator"
OrientationInterpolator1595.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1595)
OrientationInterpolator1596 = x3d.OrientationInterpolator()
OrientationInterpolator1596.DEF = "Stop_l_metacarpophalangeal_1_RotationInterpolator"
OrientationInterpolator1596.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1596)
OrientationInterpolator1597 = x3d.OrientationInterpolator()
OrientationInterpolator1597.DEF = "Stop_l_carpal_interphalangeal_1_RotationInterpolator"
OrientationInterpolator1597.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1597)
OrientationInterpolator1598 = x3d.OrientationInterpolator()
OrientationInterpolator1598.DEF = "Stop_l_midcarpal_2_RotationInterpolator"
OrientationInterpolator1598.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1598)
OrientationInterpolator1599 = x3d.OrientationInterpolator()
OrientationInterpolator1599.DEF = "Stop_l_carpometacarpal_2_RotationInterpolator"
OrientationInterpolator1599.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1599)
OrientationInterpolator1600 = x3d.OrientationInterpolator()
OrientationInterpolator1600.DEF = "Stop_l_metacarpophalangeal_2_RotationInterpolator"
OrientationInterpolator1600.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1600)
OrientationInterpolator1601 = x3d.OrientationInterpolator()
OrientationInterpolator1601.DEF = "Stop_l_carpal_proximal_interphalangeal_2_RotationInterpolator"
OrientationInterpolator1601.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1601)
OrientationInterpolator1602 = x3d.OrientationInterpolator()
OrientationInterpolator1602.DEF = "Stop_l_carpal_distal_interphalangeal_2_RotationInterpolator"
OrientationInterpolator1602.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1602)
OrientationInterpolator1603 = x3d.OrientationInterpolator()
OrientationInterpolator1603.DEF = "Stop_l_midcarpal_3_RotationInterpolator"
OrientationInterpolator1603.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1603)
OrientationInterpolator1604 = x3d.OrientationInterpolator()
OrientationInterpolator1604.DEF = "Stop_l_carpometacarpal_3_RotationInterpolator"
OrientationInterpolator1604.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1604)
OrientationInterpolator1605 = x3d.OrientationInterpolator()
OrientationInterpolator1605.DEF = "Stop_l_metacarpophalangeal_3_RotationInterpolator"
OrientationInterpolator1605.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1605)
OrientationInterpolator1606 = x3d.OrientationInterpolator()
OrientationInterpolator1606.DEF = "Stop_l_carpal_proximal_interphalangeal_3_RotationInterpolator"
OrientationInterpolator1606.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1606)
OrientationInterpolator1607 = x3d.OrientationInterpolator()
OrientationInterpolator1607.DEF = "Stop_l_carpal_distal_interphalangeal_3_RotationInterpolator"
OrientationInterpolator1607.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1607)
OrientationInterpolator1608 = x3d.OrientationInterpolator()
OrientationInterpolator1608.DEF = "Stop_l_midcarpal_4_5_RotationInterpolator"
OrientationInterpolator1608.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1608)
OrientationInterpolator1609 = x3d.OrientationInterpolator()
OrientationInterpolator1609.DEF = "Stop_l_carpometacarpal_4_RotationInterpolator"
OrientationInterpolator1609.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1609)
OrientationInterpolator1610 = x3d.OrientationInterpolator()
OrientationInterpolator1610.DEF = "Stop_l_metacarpophalangeal_4_RotationInterpolator"
OrientationInterpolator1610.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1610)
OrientationInterpolator1611 = x3d.OrientationInterpolator()
OrientationInterpolator1611.DEF = "Stop_l_carpal_proximal_interphalangeal_4_RotationInterpolator"
OrientationInterpolator1611.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1611)
OrientationInterpolator1612 = x3d.OrientationInterpolator()
OrientationInterpolator1612.DEF = "Stop_l_carpal_distal_interphalangeal_4_RotationInterpolator"
OrientationInterpolator1612.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1612)
OrientationInterpolator1613 = x3d.OrientationInterpolator()
OrientationInterpolator1613.DEF = "Stop_l_carpometacarpal_5_RotationInterpolator"
OrientationInterpolator1613.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1613)
OrientationInterpolator1614 = x3d.OrientationInterpolator()
OrientationInterpolator1614.DEF = "Stop_l_metacarpophalangeal_5_RotationInterpolator"
OrientationInterpolator1614.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1614)
OrientationInterpolator1615 = x3d.OrientationInterpolator()
OrientationInterpolator1615.DEF = "Stop_l_carpal_proximal_interphalangeal_5_RotationInterpolator"
OrientationInterpolator1615.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1615)
OrientationInterpolator1616 = x3d.OrientationInterpolator()
OrientationInterpolator1616.DEF = "Stop_l_carpal_distal_interphalangeal_5_RotationInterpolator"
OrientationInterpolator1616.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1616)
OrientationInterpolator1617 = x3d.OrientationInterpolator()
OrientationInterpolator1617.DEF = "Stop_r_sternoclavicular_RotationInterpolator"
OrientationInterpolator1617.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1617)
OrientationInterpolator1618 = x3d.OrientationInterpolator()
OrientationInterpolator1618.DEF = "Stop_r_acromioclavicular_RotationInterpolator"
OrientationInterpolator1618.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1618)
OrientationInterpolator1619 = x3d.OrientationInterpolator()
OrientationInterpolator1619.DEF = "Stop_r_shoulder_RotationInterpolator"
OrientationInterpolator1619.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1619)
OrientationInterpolator1620 = x3d.OrientationInterpolator()
OrientationInterpolator1620.DEF = "Stop_r_elbow_RotationInterpolator"
OrientationInterpolator1620.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1620)
OrientationInterpolator1621 = x3d.OrientationInterpolator()
OrientationInterpolator1621.DEF = "Stop_r_radiocarpal_RotationInterpolator"
OrientationInterpolator1621.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1621)
OrientationInterpolator1622 = x3d.OrientationInterpolator()
OrientationInterpolator1622.DEF = "Stop_r_midcarpal_1_RotationInterpolator"
OrientationInterpolator1622.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1622)
OrientationInterpolator1623 = x3d.OrientationInterpolator()
OrientationInterpolator1623.DEF = "Stop_r_carpometacarpal_1_RotationInterpolator"
OrientationInterpolator1623.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1623)
OrientationInterpolator1624 = x3d.OrientationInterpolator()
OrientationInterpolator1624.DEF = "Stop_r_metacarpophalangeal_1_RotationInterpolator"
OrientationInterpolator1624.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1624)
OrientationInterpolator1625 = x3d.OrientationInterpolator()
OrientationInterpolator1625.DEF = "Stop_r_carpal_interphalangeal_1_RotationInterpolator"
OrientationInterpolator1625.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1625)
OrientationInterpolator1626 = x3d.OrientationInterpolator()
OrientationInterpolator1626.DEF = "Stop_r_midcarpal_2_RotationInterpolator"
OrientationInterpolator1626.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1626)
OrientationInterpolator1627 = x3d.OrientationInterpolator()
OrientationInterpolator1627.DEF = "Stop_r_carpometacarpal_2_RotationInterpolator"
OrientationInterpolator1627.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1627)
OrientationInterpolator1628 = x3d.OrientationInterpolator()
OrientationInterpolator1628.DEF = "Stop_r_metacarpophalangeal_2_RotationInterpolator"
OrientationInterpolator1628.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1628)
OrientationInterpolator1629 = x3d.OrientationInterpolator()
OrientationInterpolator1629.DEF = "Stop_r_carpal_proximal_interphalangeal_2_RotationInterpolator"
OrientationInterpolator1629.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1629)
OrientationInterpolator1630 = x3d.OrientationInterpolator()
OrientationInterpolator1630.DEF = "Stop_r_carpal_distal_interphalangeal_2_RotationInterpolator"
OrientationInterpolator1630.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1630)
OrientationInterpolator1631 = x3d.OrientationInterpolator()
OrientationInterpolator1631.DEF = "Stop_r_midcarpal_3_RotationInterpolator"
OrientationInterpolator1631.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1631)
OrientationInterpolator1632 = x3d.OrientationInterpolator()
OrientationInterpolator1632.DEF = "Stop_r_carpometacarpal_3_RotationInterpolator"
OrientationInterpolator1632.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1632)
OrientationInterpolator1633 = x3d.OrientationInterpolator()
OrientationInterpolator1633.DEF = "Stop_r_metacarpophalangeal_3_RotationInterpolator"
OrientationInterpolator1633.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1633)
OrientationInterpolator1634 = x3d.OrientationInterpolator()
OrientationInterpolator1634.DEF = "Stop_r_carpal_proximal_interphalangeal_3_RotationInterpolator"
OrientationInterpolator1634.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1634)
OrientationInterpolator1635 = x3d.OrientationInterpolator()
OrientationInterpolator1635.DEF = "Stop_r_carpal_distal_interphalangeal_3_RotationInterpolator"
OrientationInterpolator1635.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1635)
OrientationInterpolator1636 = x3d.OrientationInterpolator()
OrientationInterpolator1636.DEF = "Stop_r_midcarpal_4_5_RotationInterpolator"
OrientationInterpolator1636.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1636)
OrientationInterpolator1637 = x3d.OrientationInterpolator()
OrientationInterpolator1637.DEF = "Stop_r_carpometacarpal_4_RotationInterpolator"
OrientationInterpolator1637.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1637)
OrientationInterpolator1638 = x3d.OrientationInterpolator()
OrientationInterpolator1638.DEF = "Stop_r_metacarpophalangeal_4_RotationInterpolator"
OrientationInterpolator1638.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1638)
OrientationInterpolator1639 = x3d.OrientationInterpolator()
OrientationInterpolator1639.DEF = "Stop_r_carpal_proximal_interphalangeal_4_RotationInterpolator"
OrientationInterpolator1639.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1639)
OrientationInterpolator1640 = x3d.OrientationInterpolator()
OrientationInterpolator1640.DEF = "Stop_r_carpal_distal_interphalangeal_4_RotationInterpolator"
OrientationInterpolator1640.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1640)
OrientationInterpolator1641 = x3d.OrientationInterpolator()
OrientationInterpolator1641.DEF = "Stop_r_carpometacarpal_5_RotationInterpolator"
OrientationInterpolator1641.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1641)
OrientationInterpolator1642 = x3d.OrientationInterpolator()
OrientationInterpolator1642.DEF = "Stop_r_metacarpophalangeal_5_RotationInterpolator"
OrientationInterpolator1642.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1642)
OrientationInterpolator1643 = x3d.OrientationInterpolator()
OrientationInterpolator1643.DEF = "Stop_r_carpal_proximal_interphalangeal_5_RotationInterpolator"
OrientationInterpolator1643.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1643)
OrientationInterpolator1644 = x3d.OrientationInterpolator()
OrientationInterpolator1644.DEF = "Stop_r_carpal_distal_interphalangeal_5_RotationInterpolator"
OrientationInterpolator1644.key = [0,0.5,1]

Group1496.children.append(OrientationInterpolator1644)
ROUTE1645 = x3d.ROUTE()
ROUTE1645.fromField = "fraction_changed"
ROUTE1645.fromNode = "StopTimer"
ROUTE1645.toField = "set_fraction"
ROUTE1645.toNode = "Stop_humanoid_root_TranslationInterpolator"

Group1496.children.append(ROUTE1645)
ROUTE1646 = x3d.ROUTE()
ROUTE1646.fromField = "fraction_changed"
ROUTE1646.fromNode = "StopTimer"
ROUTE1646.toField = "set_fraction"
ROUTE1646.toNode = "Stop_humanoid_root_RotationInterpolator"

Group1496.children.append(ROUTE1646)
ROUTE1647 = x3d.ROUTE()
ROUTE1647.fromField = "fraction_changed"
ROUTE1647.fromNode = "StopTimer"
ROUTE1647.toField = "set_fraction"
ROUTE1647.toNode = "Stop_sacroiliac_RotationInterpolator"

Group1496.children.append(ROUTE1647)
ROUTE1648 = x3d.ROUTE()
ROUTE1648.fromField = "fraction_changed"
ROUTE1648.fromNode = "StopTimer"
ROUTE1648.toField = "set_fraction"
ROUTE1648.toNode = "Stop_l_hip_RotationInterpolator"

Group1496.children.append(ROUTE1648)
ROUTE1649 = x3d.ROUTE()
ROUTE1649.fromField = "fraction_changed"
ROUTE1649.fromNode = "StopTimer"
ROUTE1649.toField = "set_fraction"
ROUTE1649.toNode = "Stop_l_knee_RotationInterpolator"

Group1496.children.append(ROUTE1649)
ROUTE1650 = x3d.ROUTE()
ROUTE1650.fromField = "fraction_changed"
ROUTE1650.fromNode = "StopTimer"
ROUTE1650.toField = "set_fraction"
ROUTE1650.toNode = "Stop_l_talocrural_RotationInterpolator"

Group1496.children.append(ROUTE1650)
ROUTE1651 = x3d.ROUTE()
ROUTE1651.fromField = "fraction_changed"
ROUTE1651.fromNode = "StopTimer"
ROUTE1651.toField = "set_fraction"
ROUTE1651.toNode = "Stop_l_talocalcaneonavicular_RotationInterpolator"

Group1496.children.append(ROUTE1651)
ROUTE1652 = x3d.ROUTE()
ROUTE1652.fromField = "fraction_changed"
ROUTE1652.fromNode = "StopTimer"
ROUTE1652.toField = "set_fraction"
ROUTE1652.toNode = "Stop_l_cuneonavicular_1_RotationInterpolator"

Group1496.children.append(ROUTE1652)
ROUTE1653 = x3d.ROUTE()
ROUTE1653.fromField = "fraction_changed"
ROUTE1653.fromNode = "StopTimer"
ROUTE1653.toField = "set_fraction"
ROUTE1653.toNode = "Stop_l_tarsometatarsal_1_RotationInterpolator"

Group1496.children.append(ROUTE1653)
ROUTE1654 = x3d.ROUTE()
ROUTE1654.fromField = "fraction_changed"
ROUTE1654.fromNode = "StopTimer"
ROUTE1654.toField = "set_fraction"
ROUTE1654.toNode = "Stop_l_metatarsophalangeal_1_RotationInterpolator"

Group1496.children.append(ROUTE1654)
ROUTE1655 = x3d.ROUTE()
ROUTE1655.fromField = "fraction_changed"
ROUTE1655.fromNode = "StopTimer"
ROUTE1655.toField = "set_fraction"
ROUTE1655.toNode = "Stop_l_tarsal_interphalangeal_1_RotationInterpolator"

Group1496.children.append(ROUTE1655)
ROUTE1656 = x3d.ROUTE()
ROUTE1656.fromField = "fraction_changed"
ROUTE1656.fromNode = "StopTimer"
ROUTE1656.toField = "set_fraction"
ROUTE1656.toNode = "Stop_l_cuneonavicular_2_RotationInterpolator"

Group1496.children.append(ROUTE1656)
ROUTE1657 = x3d.ROUTE()
ROUTE1657.fromField = "fraction_changed"
ROUTE1657.fromNode = "StopTimer"
ROUTE1657.toField = "set_fraction"
ROUTE1657.toNode = "Stop_l_tarsometatarsal_2_RotationInterpolator"

Group1496.children.append(ROUTE1657)
ROUTE1658 = x3d.ROUTE()
ROUTE1658.fromField = "fraction_changed"
ROUTE1658.fromNode = "StopTimer"
ROUTE1658.toField = "set_fraction"
ROUTE1658.toNode = "Stop_l_metatarsophalangeal_2_RotationInterpolator"

Group1496.children.append(ROUTE1658)
ROUTE1659 = x3d.ROUTE()
ROUTE1659.fromField = "fraction_changed"
ROUTE1659.fromNode = "StopTimer"
ROUTE1659.toField = "set_fraction"
ROUTE1659.toNode = "Stop_l_tarsal_proximal_interphalangeal_2_RotationInterpolator"

Group1496.children.append(ROUTE1659)
ROUTE1660 = x3d.ROUTE()
ROUTE1660.fromField = "fraction_changed"
ROUTE1660.fromNode = "StopTimer"
ROUTE1660.toField = "set_fraction"
ROUTE1660.toNode = "Stop_l_tarsal_distal_interphalangeal_2_RotationInterpolator"

Group1496.children.append(ROUTE1660)
ROUTE1661 = x3d.ROUTE()
ROUTE1661.fromField = "fraction_changed"
ROUTE1661.fromNode = "StopTimer"
ROUTE1661.toField = "set_fraction"
ROUTE1661.toNode = "Stop_l_cuneonavicular_3_RotationInterpolator"

Group1496.children.append(ROUTE1661)
ROUTE1662 = x3d.ROUTE()
ROUTE1662.fromField = "fraction_changed"
ROUTE1662.fromNode = "StopTimer"
ROUTE1662.toField = "set_fraction"
ROUTE1662.toNode = "Stop_l_tarsometatarsal_3_RotationInterpolator"

Group1496.children.append(ROUTE1662)
ROUTE1663 = x3d.ROUTE()
ROUTE1663.fromField = "fraction_changed"
ROUTE1663.fromNode = "StopTimer"
ROUTE1663.toField = "set_fraction"
ROUTE1663.toNode = "Stop_l_metatarsophalangeal_3_RotationInterpolator"

Group1496.children.append(ROUTE1663)
ROUTE1664 = x3d.ROUTE()
ROUTE1664.fromField = "fraction_changed"
ROUTE1664.fromNode = "StopTimer"
ROUTE1664.toField = "set_fraction"
ROUTE1664.toNode = "Stop_l_tarsal_proximal_interphalangeal_3_RotationInterpolator"

Group1496.children.append(ROUTE1664)
ROUTE1665 = x3d.ROUTE()
ROUTE1665.fromField = "fraction_changed"
ROUTE1665.fromNode = "StopTimer"
ROUTE1665.toField = "set_fraction"
ROUTE1665.toNode = "Stop_l_tarsal_distal_interphalangeal_3_RotationInterpolator"

Group1496.children.append(ROUTE1665)
ROUTE1666 = x3d.ROUTE()
ROUTE1666.fromField = "fraction_changed"
ROUTE1666.fromNode = "StopTimer"
ROUTE1666.toField = "set_fraction"
ROUTE1666.toNode = "Stop_l_calcaneocuboid_RotationInterpolator"

Group1496.children.append(ROUTE1666)
ROUTE1667 = x3d.ROUTE()
ROUTE1667.fromField = "fraction_changed"
ROUTE1667.fromNode = "StopTimer"
ROUTE1667.toField = "set_fraction"
ROUTE1667.toNode = "Stop_l_transversetarsal_RotationInterpolator"

Group1496.children.append(ROUTE1667)
ROUTE1668 = x3d.ROUTE()
ROUTE1668.fromField = "fraction_changed"
ROUTE1668.fromNode = "StopTimer"
ROUTE1668.toField = "set_fraction"
ROUTE1668.toNode = "Stop_l_tarsometatarsal_4_RotationInterpolator"

Group1496.children.append(ROUTE1668)
ROUTE1669 = x3d.ROUTE()
ROUTE1669.fromField = "fraction_changed"
ROUTE1669.fromNode = "StopTimer"
ROUTE1669.toField = "set_fraction"
ROUTE1669.toNode = "Stop_l_metatarsophalangeal_4_RotationInterpolator"

Group1496.children.append(ROUTE1669)
ROUTE1670 = x3d.ROUTE()
ROUTE1670.fromField = "fraction_changed"
ROUTE1670.fromNode = "StopTimer"
ROUTE1670.toField = "set_fraction"
ROUTE1670.toNode = "Stop_l_tarsal_proximal_interphalangeal_4_RotationInterpolator"

Group1496.children.append(ROUTE1670)
ROUTE1671 = x3d.ROUTE()
ROUTE1671.fromField = "fraction_changed"
ROUTE1671.fromNode = "StopTimer"
ROUTE1671.toField = "set_fraction"
ROUTE1671.toNode = "Stop_l_tarsal_distal_interphalangeal_4_RotationInterpolator"

Group1496.children.append(ROUTE1671)
ROUTE1672 = x3d.ROUTE()
ROUTE1672.fromField = "fraction_changed"
ROUTE1672.fromNode = "StopTimer"
ROUTE1672.toField = "set_fraction"
ROUTE1672.toNode = "Stop_l_tarsometatarsal_5_RotationInterpolator"

Group1496.children.append(ROUTE1672)
ROUTE1673 = x3d.ROUTE()
ROUTE1673.fromField = "fraction_changed"
ROUTE1673.fromNode = "StopTimer"
ROUTE1673.toField = "set_fraction"
ROUTE1673.toNode = "Stop_l_metatarsophalangeal_5_RotationInterpolator"

Group1496.children.append(ROUTE1673)
ROUTE1674 = x3d.ROUTE()
ROUTE1674.fromField = "fraction_changed"
ROUTE1674.fromNode = "StopTimer"
ROUTE1674.toField = "set_fraction"
ROUTE1674.toNode = "Stop_l_tarsal_proximal_interphalangeal_5_RotationInterpolator"

Group1496.children.append(ROUTE1674)
ROUTE1675 = x3d.ROUTE()
ROUTE1675.fromField = "fraction_changed"
ROUTE1675.fromNode = "StopTimer"
ROUTE1675.toField = "set_fraction"
ROUTE1675.toNode = "Stop_l_tarsal_distal_interphalangeal_5_RotationInterpolator"

Group1496.children.append(ROUTE1675)
ROUTE1676 = x3d.ROUTE()
ROUTE1676.fromField = "fraction_changed"
ROUTE1676.fromNode = "StopTimer"
ROUTE1676.toField = "set_fraction"
ROUTE1676.toNode = "Stop_r_hip_RotationInterpolator"

Group1496.children.append(ROUTE1676)
ROUTE1677 = x3d.ROUTE()
ROUTE1677.fromField = "fraction_changed"
ROUTE1677.fromNode = "StopTimer"
ROUTE1677.toField = "set_fraction"
ROUTE1677.toNode = "Stop_r_knee_RotationInterpolator"

Group1496.children.append(ROUTE1677)
ROUTE1678 = x3d.ROUTE()
ROUTE1678.fromField = "fraction_changed"
ROUTE1678.fromNode = "StopTimer"
ROUTE1678.toField = "set_fraction"
ROUTE1678.toNode = "Stop_r_talocrural_RotationInterpolator"

Group1496.children.append(ROUTE1678)
ROUTE1679 = x3d.ROUTE()
ROUTE1679.fromField = "fraction_changed"
ROUTE1679.fromNode = "StopTimer"
ROUTE1679.toField = "set_fraction"
ROUTE1679.toNode = "Stop_r_talocalcaneonavicular_RotationInterpolator"

Group1496.children.append(ROUTE1679)
ROUTE1680 = x3d.ROUTE()
ROUTE1680.fromField = "fraction_changed"
ROUTE1680.fromNode = "StopTimer"
ROUTE1680.toField = "set_fraction"
ROUTE1680.toNode = "Stop_r_cuneonavicular_1_RotationInterpolator"

Group1496.children.append(ROUTE1680)
ROUTE1681 = x3d.ROUTE()
ROUTE1681.fromField = "fraction_changed"
ROUTE1681.fromNode = "StopTimer"
ROUTE1681.toField = "set_fraction"
ROUTE1681.toNode = "Stop_r_tarsometatarsal_1_RotationInterpolator"

Group1496.children.append(ROUTE1681)
ROUTE1682 = x3d.ROUTE()
ROUTE1682.fromField = "fraction_changed"
ROUTE1682.fromNode = "StopTimer"
ROUTE1682.toField = "set_fraction"
ROUTE1682.toNode = "Stop_r_metatarsophalangeal_1_RotationInterpolator"

Group1496.children.append(ROUTE1682)
ROUTE1683 = x3d.ROUTE()
ROUTE1683.fromField = "fraction_changed"
ROUTE1683.fromNode = "StopTimer"
ROUTE1683.toField = "set_fraction"
ROUTE1683.toNode = "Stop_r_tarsal_interphalangeal_1_RotationInterpolator"

Group1496.children.append(ROUTE1683)
ROUTE1684 = x3d.ROUTE()
ROUTE1684.fromField = "fraction_changed"
ROUTE1684.fromNode = "StopTimer"
ROUTE1684.toField = "set_fraction"
ROUTE1684.toNode = "Stop_r_cuneonavicular_2_RotationInterpolator"

Group1496.children.append(ROUTE1684)
ROUTE1685 = x3d.ROUTE()
ROUTE1685.fromField = "fraction_changed"
ROUTE1685.fromNode = "StopTimer"
ROUTE1685.toField = "set_fraction"
ROUTE1685.toNode = "Stop_r_tarsometatarsal_2_RotationInterpolator"

Group1496.children.append(ROUTE1685)
ROUTE1686 = x3d.ROUTE()
ROUTE1686.fromField = "fraction_changed"
ROUTE1686.fromNode = "StopTimer"
ROUTE1686.toField = "set_fraction"
ROUTE1686.toNode = "Stop_r_metatarsophalangeal_2_RotationInterpolator"

Group1496.children.append(ROUTE1686)
ROUTE1687 = x3d.ROUTE()
ROUTE1687.fromField = "fraction_changed"
ROUTE1687.fromNode = "StopTimer"
ROUTE1687.toField = "set_fraction"
ROUTE1687.toNode = "Stop_r_tarsal_proximal_interphalangeal_2_RotationInterpolator"

Group1496.children.append(ROUTE1687)
ROUTE1688 = x3d.ROUTE()
ROUTE1688.fromField = "fraction_changed"
ROUTE1688.fromNode = "StopTimer"
ROUTE1688.toField = "set_fraction"
ROUTE1688.toNode = "Stop_r_tarsal_distal_interphalangeal_2_RotationInterpolator"

Group1496.children.append(ROUTE1688)
ROUTE1689 = x3d.ROUTE()
ROUTE1689.fromField = "fraction_changed"
ROUTE1689.fromNode = "StopTimer"
ROUTE1689.toField = "set_fraction"
ROUTE1689.toNode = "Stop_r_cuneonavicular_3_RotationInterpolator"

Group1496.children.append(ROUTE1689)
ROUTE1690 = x3d.ROUTE()
ROUTE1690.fromField = "fraction_changed"
ROUTE1690.fromNode = "StopTimer"
ROUTE1690.toField = "set_fraction"
ROUTE1690.toNode = "Stop_r_tarsometatarsal_3_RotationInterpolator"

Group1496.children.append(ROUTE1690)
ROUTE1691 = x3d.ROUTE()
ROUTE1691.fromField = "fraction_changed"
ROUTE1691.fromNode = "StopTimer"
ROUTE1691.toField = "set_fraction"
ROUTE1691.toNode = "Stop_r_metatarsophalangeal_3_RotationInterpolator"

Group1496.children.append(ROUTE1691)
ROUTE1692 = x3d.ROUTE()
ROUTE1692.fromField = "fraction_changed"
ROUTE1692.fromNode = "StopTimer"
ROUTE1692.toField = "set_fraction"
ROUTE1692.toNode = "Stop_r_tarsal_proximal_interphalangeal_3_RotationInterpolator"

Group1496.children.append(ROUTE1692)
ROUTE1693 = x3d.ROUTE()
ROUTE1693.fromField = "fraction_changed"
ROUTE1693.fromNode = "StopTimer"
ROUTE1693.toField = "set_fraction"
ROUTE1693.toNode = "Stop_r_tarsal_distal_interphalangeal_3_RotationInterpolator"

Group1496.children.append(ROUTE1693)
ROUTE1694 = x3d.ROUTE()
ROUTE1694.fromField = "fraction_changed"
ROUTE1694.fromNode = "StopTimer"
ROUTE1694.toField = "set_fraction"
ROUTE1694.toNode = "Stop_r_calcaneocuboid_RotationInterpolator"

Group1496.children.append(ROUTE1694)
ROUTE1695 = x3d.ROUTE()
ROUTE1695.fromField = "fraction_changed"
ROUTE1695.fromNode = "StopTimer"
ROUTE1695.toField = "set_fraction"
ROUTE1695.toNode = "Stop_r_transversetarsal_RotationInterpolator"

Group1496.children.append(ROUTE1695)
ROUTE1696 = x3d.ROUTE()
ROUTE1696.fromField = "fraction_changed"
ROUTE1696.fromNode = "StopTimer"
ROUTE1696.toField = "set_fraction"
ROUTE1696.toNode = "Stop_r_tarsometatarsal_4_RotationInterpolator"

Group1496.children.append(ROUTE1696)
ROUTE1697 = x3d.ROUTE()
ROUTE1697.fromField = "fraction_changed"
ROUTE1697.fromNode = "StopTimer"
ROUTE1697.toField = "set_fraction"
ROUTE1697.toNode = "Stop_r_metatarsophalangeal_4_RotationInterpolator"

Group1496.children.append(ROUTE1697)
ROUTE1698 = x3d.ROUTE()
ROUTE1698.fromField = "fraction_changed"
ROUTE1698.fromNode = "StopTimer"
ROUTE1698.toField = "set_fraction"
ROUTE1698.toNode = "Stop_r_tarsal_proximal_interphalangeal_4_RotationInterpolator"

Group1496.children.append(ROUTE1698)
ROUTE1699 = x3d.ROUTE()
ROUTE1699.fromField = "fraction_changed"
ROUTE1699.fromNode = "StopTimer"
ROUTE1699.toField = "set_fraction"
ROUTE1699.toNode = "Stop_r_tarsal_distal_interphalangeal_4_RotationInterpolator"

Group1496.children.append(ROUTE1699)
ROUTE1700 = x3d.ROUTE()
ROUTE1700.fromField = "fraction_changed"
ROUTE1700.fromNode = "StopTimer"
ROUTE1700.toField = "set_fraction"
ROUTE1700.toNode = "Stop_r_tarsometatarsal_5_RotationInterpolator"

Group1496.children.append(ROUTE1700)
ROUTE1701 = x3d.ROUTE()
ROUTE1701.fromField = "fraction_changed"
ROUTE1701.fromNode = "StopTimer"
ROUTE1701.toField = "set_fraction"
ROUTE1701.toNode = "Stop_r_metatarsophalangeal_5_RotationInterpolator"

Group1496.children.append(ROUTE1701)
ROUTE1702 = x3d.ROUTE()
ROUTE1702.fromField = "fraction_changed"
ROUTE1702.fromNode = "StopTimer"
ROUTE1702.toField = "set_fraction"
ROUTE1702.toNode = "Stop_r_tarsal_proximal_interphalangeal_5_RotationInterpolator"

Group1496.children.append(ROUTE1702)
ROUTE1703 = x3d.ROUTE()
ROUTE1703.fromField = "fraction_changed"
ROUTE1703.fromNode = "StopTimer"
ROUTE1703.toField = "set_fraction"
ROUTE1703.toNode = "Stop_r_tarsal_distal_interphalangeal_5_RotationInterpolator"

Group1496.children.append(ROUTE1703)
ROUTE1704 = x3d.ROUTE()
ROUTE1704.fromField = "fraction_changed"
ROUTE1704.fromNode = "StopTimer"
ROUTE1704.toField = "set_fraction"
ROUTE1704.toNode = "Stop_vl5_RotationInterpolator"

Group1496.children.append(ROUTE1704)
ROUTE1705 = x3d.ROUTE()
ROUTE1705.fromField = "fraction_changed"
ROUTE1705.fromNode = "StopTimer"
ROUTE1705.toField = "set_fraction"
ROUTE1705.toNode = "Stop_vl4_RotationInterpolator"

Group1496.children.append(ROUTE1705)
ROUTE1706 = x3d.ROUTE()
ROUTE1706.fromField = "fraction_changed"
ROUTE1706.fromNode = "StopTimer"
ROUTE1706.toField = "set_fraction"
ROUTE1706.toNode = "Stop_vl3_RotationInterpolator"

Group1496.children.append(ROUTE1706)
ROUTE1707 = x3d.ROUTE()
ROUTE1707.fromField = "fraction_changed"
ROUTE1707.fromNode = "StopTimer"
ROUTE1707.toField = "set_fraction"
ROUTE1707.toNode = "Stop_vl2_RotationInterpolator"

Group1496.children.append(ROUTE1707)
ROUTE1708 = x3d.ROUTE()
ROUTE1708.fromField = "fraction_changed"
ROUTE1708.fromNode = "StopTimer"
ROUTE1708.toField = "set_fraction"
ROUTE1708.toNode = "Stop_vl1_RotationInterpolator"

Group1496.children.append(ROUTE1708)
ROUTE1709 = x3d.ROUTE()
ROUTE1709.fromField = "fraction_changed"
ROUTE1709.fromNode = "StopTimer"
ROUTE1709.toField = "set_fraction"
ROUTE1709.toNode = "Stop_vt12_RotationInterpolator"

Group1496.children.append(ROUTE1709)
ROUTE1710 = x3d.ROUTE()
ROUTE1710.fromField = "fraction_changed"
ROUTE1710.fromNode = "StopTimer"
ROUTE1710.toField = "set_fraction"
ROUTE1710.toNode = "Stop_vt11_RotationInterpolator"

Group1496.children.append(ROUTE1710)
ROUTE1711 = x3d.ROUTE()
ROUTE1711.fromField = "fraction_changed"
ROUTE1711.fromNode = "StopTimer"
ROUTE1711.toField = "set_fraction"
ROUTE1711.toNode = "Stop_vt10_RotationInterpolator"

Group1496.children.append(ROUTE1711)
ROUTE1712 = x3d.ROUTE()
ROUTE1712.fromField = "fraction_changed"
ROUTE1712.fromNode = "StopTimer"
ROUTE1712.toField = "set_fraction"
ROUTE1712.toNode = "Stop_vt9_RotationInterpolator"

Group1496.children.append(ROUTE1712)
ROUTE1713 = x3d.ROUTE()
ROUTE1713.fromField = "fraction_changed"
ROUTE1713.fromNode = "StopTimer"
ROUTE1713.toField = "set_fraction"
ROUTE1713.toNode = "Stop_vt8_RotationInterpolator"

Group1496.children.append(ROUTE1713)
ROUTE1714 = x3d.ROUTE()
ROUTE1714.fromField = "fraction_changed"
ROUTE1714.fromNode = "StopTimer"
ROUTE1714.toField = "set_fraction"
ROUTE1714.toNode = "Stop_vt7_RotationInterpolator"

Group1496.children.append(ROUTE1714)
ROUTE1715 = x3d.ROUTE()
ROUTE1715.fromField = "fraction_changed"
ROUTE1715.fromNode = "StopTimer"
ROUTE1715.toField = "set_fraction"
ROUTE1715.toNode = "Stop_vt6_RotationInterpolator"

Group1496.children.append(ROUTE1715)
ROUTE1716 = x3d.ROUTE()
ROUTE1716.fromField = "fraction_changed"
ROUTE1716.fromNode = "StopTimer"
ROUTE1716.toField = "set_fraction"
ROUTE1716.toNode = "Stop_vt5_RotationInterpolator"

Group1496.children.append(ROUTE1716)
ROUTE1717 = x3d.ROUTE()
ROUTE1717.fromField = "fraction_changed"
ROUTE1717.fromNode = "StopTimer"
ROUTE1717.toField = "set_fraction"
ROUTE1717.toNode = "Stop_vt4_RotationInterpolator"

Group1496.children.append(ROUTE1717)
ROUTE1718 = x3d.ROUTE()
ROUTE1718.fromField = "fraction_changed"
ROUTE1718.fromNode = "StopTimer"
ROUTE1718.toField = "set_fraction"
ROUTE1718.toNode = "Stop_vt3_RotationInterpolator"

Group1496.children.append(ROUTE1718)
ROUTE1719 = x3d.ROUTE()
ROUTE1719.fromField = "fraction_changed"
ROUTE1719.fromNode = "StopTimer"
ROUTE1719.toField = "set_fraction"
ROUTE1719.toNode = "Stop_vt2_RotationInterpolator"

Group1496.children.append(ROUTE1719)
ROUTE1720 = x3d.ROUTE()
ROUTE1720.fromField = "fraction_changed"
ROUTE1720.fromNode = "StopTimer"
ROUTE1720.toField = "set_fraction"
ROUTE1720.toNode = "Stop_vt1_RotationInterpolator"

Group1496.children.append(ROUTE1720)
ROUTE1721 = x3d.ROUTE()
ROUTE1721.fromField = "fraction_changed"
ROUTE1721.fromNode = "StopTimer"
ROUTE1721.toField = "set_fraction"
ROUTE1721.toNode = "Stop_vc7_RotationInterpolator"

Group1496.children.append(ROUTE1721)
ROUTE1722 = x3d.ROUTE()
ROUTE1722.fromField = "fraction_changed"
ROUTE1722.fromNode = "StopTimer"
ROUTE1722.toField = "set_fraction"
ROUTE1722.toNode = "Stop_vc6_RotationInterpolator"

Group1496.children.append(ROUTE1722)
ROUTE1723 = x3d.ROUTE()
ROUTE1723.fromField = "fraction_changed"
ROUTE1723.fromNode = "StopTimer"
ROUTE1723.toField = "set_fraction"
ROUTE1723.toNode = "Stop_vc5_RotationInterpolator"

Group1496.children.append(ROUTE1723)
ROUTE1724 = x3d.ROUTE()
ROUTE1724.fromField = "fraction_changed"
ROUTE1724.fromNode = "StopTimer"
ROUTE1724.toField = "set_fraction"
ROUTE1724.toNode = "Stop_vc4_RotationInterpolator"

Group1496.children.append(ROUTE1724)
ROUTE1725 = x3d.ROUTE()
ROUTE1725.fromField = "fraction_changed"
ROUTE1725.fromNode = "StopTimer"
ROUTE1725.toField = "set_fraction"
ROUTE1725.toNode = "Stop_vc3_RotationInterpolator"

Group1496.children.append(ROUTE1725)
ROUTE1726 = x3d.ROUTE()
ROUTE1726.fromField = "fraction_changed"
ROUTE1726.fromNode = "StopTimer"
ROUTE1726.toField = "set_fraction"
ROUTE1726.toNode = "Stop_vc2_RotationInterpolator"

Group1496.children.append(ROUTE1726)
ROUTE1727 = x3d.ROUTE()
ROUTE1727.fromField = "fraction_changed"
ROUTE1727.fromNode = "StopTimer"
ROUTE1727.toField = "set_fraction"
ROUTE1727.toNode = "Stop_vc1_RotationInterpolator"

Group1496.children.append(ROUTE1727)
ROUTE1728 = x3d.ROUTE()
ROUTE1728.fromField = "fraction_changed"
ROUTE1728.fromNode = "StopTimer"
ROUTE1728.toField = "set_fraction"
ROUTE1728.toNode = "Stop_skullbase_RotationInterpolator"

Group1496.children.append(ROUTE1728)
ROUTE1729 = x3d.ROUTE()
ROUTE1729.fromField = "fraction_changed"
ROUTE1729.fromNode = "StopTimer"
ROUTE1729.toField = "set_fraction"
ROUTE1729.toNode = "Stop_l_eyelid_joint_RotationInterpolator"

Group1496.children.append(ROUTE1729)
ROUTE1730 = x3d.ROUTE()
ROUTE1730.fromField = "fraction_changed"
ROUTE1730.fromNode = "StopTimer"
ROUTE1730.toField = "set_fraction"
ROUTE1730.toNode = "Stop_r_eyelid_joint_RotationInterpolator"

Group1496.children.append(ROUTE1730)
ROUTE1731 = x3d.ROUTE()
ROUTE1731.fromField = "fraction_changed"
ROUTE1731.fromNode = "StopTimer"
ROUTE1731.toField = "set_fraction"
ROUTE1731.toNode = "Stop_l_eyeball_joint_RotationInterpolator"

Group1496.children.append(ROUTE1731)
ROUTE1732 = x3d.ROUTE()
ROUTE1732.fromField = "fraction_changed"
ROUTE1732.fromNode = "StopTimer"
ROUTE1732.toField = "set_fraction"
ROUTE1732.toNode = "Stop_r_eyeball_joint_RotationInterpolator"

Group1496.children.append(ROUTE1732)
ROUTE1733 = x3d.ROUTE()
ROUTE1733.fromField = "fraction_changed"
ROUTE1733.fromNode = "StopTimer"
ROUTE1733.toField = "set_fraction"
ROUTE1733.toNode = "Stop_l_eyebrow_joint_RotationInterpolator"

Group1496.children.append(ROUTE1733)
ROUTE1734 = x3d.ROUTE()
ROUTE1734.fromField = "fraction_changed"
ROUTE1734.fromNode = "StopTimer"
ROUTE1734.toField = "set_fraction"
ROUTE1734.toNode = "Stop_r_eyebrow_joint_RotationInterpolator"

Group1496.children.append(ROUTE1734)
ROUTE1735 = x3d.ROUTE()
ROUTE1735.fromField = "fraction_changed"
ROUTE1735.fromNode = "StopTimer"
ROUTE1735.toField = "set_fraction"
ROUTE1735.toNode = "Stop_temporomandibular_RotationInterpolator"

Group1496.children.append(ROUTE1735)
ROUTE1736 = x3d.ROUTE()
ROUTE1736.fromField = "fraction_changed"
ROUTE1736.fromNode = "StopTimer"
ROUTE1736.toField = "set_fraction"
ROUTE1736.toNode = "Stop_l_sternoclavicular_RotationInterpolator"

Group1496.children.append(ROUTE1736)
ROUTE1737 = x3d.ROUTE()
ROUTE1737.fromField = "fraction_changed"
ROUTE1737.fromNode = "StopTimer"
ROUTE1737.toField = "set_fraction"
ROUTE1737.toNode = "Stop_l_acromioclavicular_RotationInterpolator"

Group1496.children.append(ROUTE1737)
ROUTE1738 = x3d.ROUTE()
ROUTE1738.fromField = "fraction_changed"
ROUTE1738.fromNode = "StopTimer"
ROUTE1738.toField = "set_fraction"
ROUTE1738.toNode = "Stop_l_shoulder_RotationInterpolator"

Group1496.children.append(ROUTE1738)
ROUTE1739 = x3d.ROUTE()
ROUTE1739.fromField = "fraction_changed"
ROUTE1739.fromNode = "StopTimer"
ROUTE1739.toField = "set_fraction"
ROUTE1739.toNode = "Stop_l_elbow_RotationInterpolator"

Group1496.children.append(ROUTE1739)
ROUTE1740 = x3d.ROUTE()
ROUTE1740.fromField = "fraction_changed"
ROUTE1740.fromNode = "StopTimer"
ROUTE1740.toField = "set_fraction"
ROUTE1740.toNode = "Stop_l_radiocarpal_RotationInterpolator"

Group1496.children.append(ROUTE1740)
ROUTE1741 = x3d.ROUTE()
ROUTE1741.fromField = "fraction_changed"
ROUTE1741.fromNode = "StopTimer"
ROUTE1741.toField = "set_fraction"
ROUTE1741.toNode = "Stop_l_midcarpal_1_RotationInterpolator"

Group1496.children.append(ROUTE1741)
ROUTE1742 = x3d.ROUTE()
ROUTE1742.fromField = "fraction_changed"
ROUTE1742.fromNode = "StopTimer"
ROUTE1742.toField = "set_fraction"
ROUTE1742.toNode = "Stop_l_carpometacarpal_1_RotationInterpolator"

Group1496.children.append(ROUTE1742)
ROUTE1743 = x3d.ROUTE()
ROUTE1743.fromField = "fraction_changed"
ROUTE1743.fromNode = "StopTimer"
ROUTE1743.toField = "set_fraction"
ROUTE1743.toNode = "Stop_l_metacarpophalangeal_1_RotationInterpolator"

Group1496.children.append(ROUTE1743)
ROUTE1744 = x3d.ROUTE()
ROUTE1744.fromField = "fraction_changed"
ROUTE1744.fromNode = "StopTimer"
ROUTE1744.toField = "set_fraction"
ROUTE1744.toNode = "Stop_l_carpal_interphalangeal_1_RotationInterpolator"

Group1496.children.append(ROUTE1744)
ROUTE1745 = x3d.ROUTE()
ROUTE1745.fromField = "fraction_changed"
ROUTE1745.fromNode = "StopTimer"
ROUTE1745.toField = "set_fraction"
ROUTE1745.toNode = "Stop_l_midcarpal_2_RotationInterpolator"

Group1496.children.append(ROUTE1745)
ROUTE1746 = x3d.ROUTE()
ROUTE1746.fromField = "fraction_changed"
ROUTE1746.fromNode = "StopTimer"
ROUTE1746.toField = "set_fraction"
ROUTE1746.toNode = "Stop_l_carpometacarpal_2_RotationInterpolator"

Group1496.children.append(ROUTE1746)
ROUTE1747 = x3d.ROUTE()
ROUTE1747.fromField = "fraction_changed"
ROUTE1747.fromNode = "StopTimer"
ROUTE1747.toField = "set_fraction"
ROUTE1747.toNode = "Stop_l_metacarpophalangeal_2_RotationInterpolator"

Group1496.children.append(ROUTE1747)
ROUTE1748 = x3d.ROUTE()
ROUTE1748.fromField = "fraction_changed"
ROUTE1748.fromNode = "StopTimer"
ROUTE1748.toField = "set_fraction"
ROUTE1748.toNode = "Stop_l_carpal_proximal_interphalangeal_2_RotationInterpolator"

Group1496.children.append(ROUTE1748)
ROUTE1749 = x3d.ROUTE()
ROUTE1749.fromField = "fraction_changed"
ROUTE1749.fromNode = "StopTimer"
ROUTE1749.toField = "set_fraction"
ROUTE1749.toNode = "Stop_l_carpal_distal_interphalangeal_2_RotationInterpolator"

Group1496.children.append(ROUTE1749)
ROUTE1750 = x3d.ROUTE()
ROUTE1750.fromField = "fraction_changed"
ROUTE1750.fromNode = "StopTimer"
ROUTE1750.toField = "set_fraction"
ROUTE1750.toNode = "Stop_l_midcarpal_3_RotationInterpolator"

Group1496.children.append(ROUTE1750)
ROUTE1751 = x3d.ROUTE()
ROUTE1751.fromField = "fraction_changed"
ROUTE1751.fromNode = "StopTimer"
ROUTE1751.toField = "set_fraction"
ROUTE1751.toNode = "Stop_l_carpometacarpal_3_RotationInterpolator"

Group1496.children.append(ROUTE1751)
ROUTE1752 = x3d.ROUTE()
ROUTE1752.fromField = "fraction_changed"
ROUTE1752.fromNode = "StopTimer"
ROUTE1752.toField = "set_fraction"
ROUTE1752.toNode = "Stop_l_metacarpophalangeal_3_RotationInterpolator"

Group1496.children.append(ROUTE1752)
ROUTE1753 = x3d.ROUTE()
ROUTE1753.fromField = "fraction_changed"
ROUTE1753.fromNode = "StopTimer"
ROUTE1753.toField = "set_fraction"
ROUTE1753.toNode = "Stop_l_carpal_proximal_interphalangeal_3_RotationInterpolator"

Group1496.children.append(ROUTE1753)
ROUTE1754 = x3d.ROUTE()
ROUTE1754.fromField = "fraction_changed"
ROUTE1754.fromNode = "StopTimer"
ROUTE1754.toField = "set_fraction"
ROUTE1754.toNode = "Stop_l_carpal_distal_interphalangeal_3_RotationInterpolator"

Group1496.children.append(ROUTE1754)
ROUTE1755 = x3d.ROUTE()
ROUTE1755.fromField = "fraction_changed"
ROUTE1755.fromNode = "StopTimer"
ROUTE1755.toField = "set_fraction"
ROUTE1755.toNode = "Stop_l_midcarpal_4_5_RotationInterpolator"

Group1496.children.append(ROUTE1755)
ROUTE1756 = x3d.ROUTE()
ROUTE1756.fromField = "fraction_changed"
ROUTE1756.fromNode = "StopTimer"
ROUTE1756.toField = "set_fraction"
ROUTE1756.toNode = "Stop_l_carpometacarpal_4_RotationInterpolator"

Group1496.children.append(ROUTE1756)
ROUTE1757 = x3d.ROUTE()
ROUTE1757.fromField = "fraction_changed"
ROUTE1757.fromNode = "StopTimer"
ROUTE1757.toField = "set_fraction"
ROUTE1757.toNode = "Stop_l_metacarpophalangeal_4_RotationInterpolator"

Group1496.children.append(ROUTE1757)
ROUTE1758 = x3d.ROUTE()
ROUTE1758.fromField = "fraction_changed"
ROUTE1758.fromNode = "StopTimer"
ROUTE1758.toField = "set_fraction"
ROUTE1758.toNode = "Stop_l_carpal_proximal_interphalangeal_4_RotationInterpolator"

Group1496.children.append(ROUTE1758)
ROUTE1759 = x3d.ROUTE()
ROUTE1759.fromField = "fraction_changed"
ROUTE1759.fromNode = "StopTimer"
ROUTE1759.toField = "set_fraction"
ROUTE1759.toNode = "Stop_l_carpal_distal_interphalangeal_4_RotationInterpolator"

Group1496.children.append(ROUTE1759)
ROUTE1760 = x3d.ROUTE()
ROUTE1760.fromField = "fraction_changed"
ROUTE1760.fromNode = "StopTimer"
ROUTE1760.toField = "set_fraction"
ROUTE1760.toNode = "Stop_l_carpometacarpal_5_RotationInterpolator"

Group1496.children.append(ROUTE1760)
ROUTE1761 = x3d.ROUTE()
ROUTE1761.fromField = "fraction_changed"
ROUTE1761.fromNode = "StopTimer"
ROUTE1761.toField = "set_fraction"
ROUTE1761.toNode = "Stop_l_metacarpophalangeal_5_RotationInterpolator"

Group1496.children.append(ROUTE1761)
ROUTE1762 = x3d.ROUTE()
ROUTE1762.fromField = "fraction_changed"
ROUTE1762.fromNode = "StopTimer"
ROUTE1762.toField = "set_fraction"
ROUTE1762.toNode = "Stop_l_carpal_proximal_interphalangeal_5_RotationInterpolator"

Group1496.children.append(ROUTE1762)
ROUTE1763 = x3d.ROUTE()
ROUTE1763.fromField = "fraction_changed"
ROUTE1763.fromNode = "StopTimer"
ROUTE1763.toField = "set_fraction"
ROUTE1763.toNode = "Stop_l_carpal_distal_interphalangeal_5_RotationInterpolator"

Group1496.children.append(ROUTE1763)
ROUTE1764 = x3d.ROUTE()
ROUTE1764.fromField = "fraction_changed"
ROUTE1764.fromNode = "StopTimer"
ROUTE1764.toField = "set_fraction"
ROUTE1764.toNode = "Stop_r_sternoclavicular_RotationInterpolator"

Group1496.children.append(ROUTE1764)
ROUTE1765 = x3d.ROUTE()
ROUTE1765.fromField = "fraction_changed"
ROUTE1765.fromNode = "StopTimer"
ROUTE1765.toField = "set_fraction"
ROUTE1765.toNode = "Stop_r_acromioclavicular_RotationInterpolator"

Group1496.children.append(ROUTE1765)
ROUTE1766 = x3d.ROUTE()
ROUTE1766.fromField = "fraction_changed"
ROUTE1766.fromNode = "StopTimer"
ROUTE1766.toField = "set_fraction"
ROUTE1766.toNode = "Stop_r_shoulder_RotationInterpolator"

Group1496.children.append(ROUTE1766)
ROUTE1767 = x3d.ROUTE()
ROUTE1767.fromField = "fraction_changed"
ROUTE1767.fromNode = "StopTimer"
ROUTE1767.toField = "set_fraction"
ROUTE1767.toNode = "Stop_r_elbow_RotationInterpolator"

Group1496.children.append(ROUTE1767)
ROUTE1768 = x3d.ROUTE()
ROUTE1768.fromField = "fraction_changed"
ROUTE1768.fromNode = "StopTimer"
ROUTE1768.toField = "set_fraction"
ROUTE1768.toNode = "Stop_r_radiocarpal_RotationInterpolator"

Group1496.children.append(ROUTE1768)
ROUTE1769 = x3d.ROUTE()
ROUTE1769.fromField = "fraction_changed"
ROUTE1769.fromNode = "StopTimer"
ROUTE1769.toField = "set_fraction"
ROUTE1769.toNode = "Stop_r_midcarpal_1_RotationInterpolator"

Group1496.children.append(ROUTE1769)
ROUTE1770 = x3d.ROUTE()
ROUTE1770.fromField = "fraction_changed"
ROUTE1770.fromNode = "StopTimer"
ROUTE1770.toField = "set_fraction"
ROUTE1770.toNode = "Stop_r_carpometacarpal_1_RotationInterpolator"

Group1496.children.append(ROUTE1770)
ROUTE1771 = x3d.ROUTE()
ROUTE1771.fromField = "fraction_changed"
ROUTE1771.fromNode = "StopTimer"
ROUTE1771.toField = "set_fraction"
ROUTE1771.toNode = "Stop_r_metacarpophalangeal_1_RotationInterpolator"

Group1496.children.append(ROUTE1771)
ROUTE1772 = x3d.ROUTE()
ROUTE1772.fromField = "fraction_changed"
ROUTE1772.fromNode = "StopTimer"
ROUTE1772.toField = "set_fraction"
ROUTE1772.toNode = "Stop_r_carpal_interphalangeal_1_RotationInterpolator"

Group1496.children.append(ROUTE1772)
ROUTE1773 = x3d.ROUTE()
ROUTE1773.fromField = "fraction_changed"
ROUTE1773.fromNode = "StopTimer"
ROUTE1773.toField = "set_fraction"
ROUTE1773.toNode = "Stop_r_midcarpal_2_RotationInterpolator"

Group1496.children.append(ROUTE1773)
ROUTE1774 = x3d.ROUTE()
ROUTE1774.fromField = "fraction_changed"
ROUTE1774.fromNode = "StopTimer"
ROUTE1774.toField = "set_fraction"
ROUTE1774.toNode = "Stop_r_carpometacarpal_2_RotationInterpolator"

Group1496.children.append(ROUTE1774)
ROUTE1775 = x3d.ROUTE()
ROUTE1775.fromField = "fraction_changed"
ROUTE1775.fromNode = "StopTimer"
ROUTE1775.toField = "set_fraction"
ROUTE1775.toNode = "Stop_r_metacarpophalangeal_2_RotationInterpolator"

Group1496.children.append(ROUTE1775)
ROUTE1776 = x3d.ROUTE()
ROUTE1776.fromField = "fraction_changed"
ROUTE1776.fromNode = "StopTimer"
ROUTE1776.toField = "set_fraction"
ROUTE1776.toNode = "Stop_r_carpal_proximal_interphalangeal_2_RotationInterpolator"

Group1496.children.append(ROUTE1776)
ROUTE1777 = x3d.ROUTE()
ROUTE1777.fromField = "fraction_changed"
ROUTE1777.fromNode = "StopTimer"
ROUTE1777.toField = "set_fraction"
ROUTE1777.toNode = "Stop_r_carpal_distal_interphalangeal_2_RotationInterpolator"

Group1496.children.append(ROUTE1777)
ROUTE1778 = x3d.ROUTE()
ROUTE1778.fromField = "fraction_changed"
ROUTE1778.fromNode = "StopTimer"
ROUTE1778.toField = "set_fraction"
ROUTE1778.toNode = "Stop_r_midcarpal_3_RotationInterpolator"

Group1496.children.append(ROUTE1778)
ROUTE1779 = x3d.ROUTE()
ROUTE1779.fromField = "fraction_changed"
ROUTE1779.fromNode = "StopTimer"
ROUTE1779.toField = "set_fraction"
ROUTE1779.toNode = "Stop_r_carpometacarpal_3_RotationInterpolator"

Group1496.children.append(ROUTE1779)
ROUTE1780 = x3d.ROUTE()
ROUTE1780.fromField = "fraction_changed"
ROUTE1780.fromNode = "StopTimer"
ROUTE1780.toField = "set_fraction"
ROUTE1780.toNode = "Stop_r_metacarpophalangeal_3_RotationInterpolator"

Group1496.children.append(ROUTE1780)
ROUTE1781 = x3d.ROUTE()
ROUTE1781.fromField = "fraction_changed"
ROUTE1781.fromNode = "StopTimer"
ROUTE1781.toField = "set_fraction"
ROUTE1781.toNode = "Stop_r_carpal_proximal_interphalangeal_3_RotationInterpolator"

Group1496.children.append(ROUTE1781)
ROUTE1782 = x3d.ROUTE()
ROUTE1782.fromField = "fraction_changed"
ROUTE1782.fromNode = "StopTimer"
ROUTE1782.toField = "set_fraction"
ROUTE1782.toNode = "Stop_r_carpal_distal_interphalangeal_3_RotationInterpolator"

Group1496.children.append(ROUTE1782)
ROUTE1783 = x3d.ROUTE()
ROUTE1783.fromField = "fraction_changed"
ROUTE1783.fromNode = "StopTimer"
ROUTE1783.toField = "set_fraction"
ROUTE1783.toNode = "Stop_r_midcarpal_4_5_RotationInterpolator"

Group1496.children.append(ROUTE1783)
ROUTE1784 = x3d.ROUTE()
ROUTE1784.fromField = "fraction_changed"
ROUTE1784.fromNode = "StopTimer"
ROUTE1784.toField = "set_fraction"
ROUTE1784.toNode = "Stop_r_carpometacarpal_4_RotationInterpolator"

Group1496.children.append(ROUTE1784)
ROUTE1785 = x3d.ROUTE()
ROUTE1785.fromField = "fraction_changed"
ROUTE1785.fromNode = "StopTimer"
ROUTE1785.toField = "set_fraction"
ROUTE1785.toNode = "Stop_r_metacarpophalangeal_4_RotationInterpolator"

Group1496.children.append(ROUTE1785)
ROUTE1786 = x3d.ROUTE()
ROUTE1786.fromField = "fraction_changed"
ROUTE1786.fromNode = "StopTimer"
ROUTE1786.toField = "set_fraction"
ROUTE1786.toNode = "Stop_r_carpal_proximal_interphalangeal_4_RotationInterpolator"

Group1496.children.append(ROUTE1786)
ROUTE1787 = x3d.ROUTE()
ROUTE1787.fromField = "fraction_changed"
ROUTE1787.fromNode = "StopTimer"
ROUTE1787.toField = "set_fraction"
ROUTE1787.toNode = "Stop_r_carpal_distal_interphalangeal_4_RotationInterpolator"

Group1496.children.append(ROUTE1787)
ROUTE1788 = x3d.ROUTE()
ROUTE1788.fromField = "fraction_changed"
ROUTE1788.fromNode = "StopTimer"
ROUTE1788.toField = "set_fraction"
ROUTE1788.toNode = "Stop_r_carpometacarpal_5_RotationInterpolator"

Group1496.children.append(ROUTE1788)
ROUTE1789 = x3d.ROUTE()
ROUTE1789.fromField = "fraction_changed"
ROUTE1789.fromNode = "StopTimer"
ROUTE1789.toField = "set_fraction"
ROUTE1789.toNode = "Stop_r_metacarpophalangeal_5_RotationInterpolator"

Group1496.children.append(ROUTE1789)
ROUTE1790 = x3d.ROUTE()
ROUTE1790.fromField = "fraction_changed"
ROUTE1790.fromNode = "StopTimer"
ROUTE1790.toField = "set_fraction"
ROUTE1790.toNode = "Stop_r_carpal_proximal_interphalangeal_5_RotationInterpolator"

Group1496.children.append(ROUTE1790)
ROUTE1791 = x3d.ROUTE()
ROUTE1791.fromField = "fraction_changed"
ROUTE1791.fromNode = "StopTimer"
ROUTE1791.toField = "set_fraction"
ROUTE1791.toNode = "Stop_r_carpal_distal_interphalangeal_5_RotationInterpolator"

Group1496.children.append(ROUTE1791)
ROUTE1792 = x3d.ROUTE()
ROUTE1792.fromField = "value_changed"
ROUTE1792.fromNode = "Stop_humanoid_root_TranslationInterpolator"
ROUTE1792.toField = "set_translation"
ROUTE1792.toNode = "hanim_humanoid_root"

Group1496.children.append(ROUTE1792)
ROUTE1793 = x3d.ROUTE()
ROUTE1793.fromField = "value_changed"
ROUTE1793.fromNode = "Stop_humanoid_root_RotationInterpolator"
ROUTE1793.toField = "set_rotation"
ROUTE1793.toNode = "hanim_humanoid_root"

Group1496.children.append(ROUTE1793)
ROUTE1794 = x3d.ROUTE()
ROUTE1794.fromField = "value_changed"
ROUTE1794.fromNode = "Stop_sacroiliac_RotationInterpolator"
ROUTE1794.toField = "set_rotation"
ROUTE1794.toNode = "hanim_sacroiliac"

Group1496.children.append(ROUTE1794)
ROUTE1795 = x3d.ROUTE()
ROUTE1795.fromField = "value_changed"
ROUTE1795.fromNode = "Stop_l_hip_RotationInterpolator"
ROUTE1795.toField = "set_rotation"
ROUTE1795.toNode = "hanim_l_hip"

Group1496.children.append(ROUTE1795)
ROUTE1796 = x3d.ROUTE()
ROUTE1796.fromField = "value_changed"
ROUTE1796.fromNode = "Stop_l_knee_RotationInterpolator"
ROUTE1796.toField = "set_rotation"
ROUTE1796.toNode = "hanim_l_knee"

Group1496.children.append(ROUTE1796)
ROUTE1797 = x3d.ROUTE()
ROUTE1797.fromField = "value_changed"
ROUTE1797.fromNode = "Stop_l_talocrural_RotationInterpolator"
ROUTE1797.toField = "set_rotation"
ROUTE1797.toNode = "hanim_l_talocrural"

Group1496.children.append(ROUTE1797)
ROUTE1798 = x3d.ROUTE()
ROUTE1798.fromField = "value_changed"
ROUTE1798.fromNode = "Stop_l_talocalcaneonavicular_RotationInterpolator"
ROUTE1798.toField = "set_rotation"
ROUTE1798.toNode = "hanim_l_talocalcaneonavicular"

Group1496.children.append(ROUTE1798)
ROUTE1799 = x3d.ROUTE()
ROUTE1799.fromField = "value_changed"
ROUTE1799.fromNode = "Stop_l_cuneonavicular_1_RotationInterpolator"
ROUTE1799.toField = "set_rotation"
ROUTE1799.toNode = "hanim_l_cuneonavicular_1"

Group1496.children.append(ROUTE1799)
ROUTE1800 = x3d.ROUTE()
ROUTE1800.fromField = "value_changed"
ROUTE1800.fromNode = "Stop_l_tarsometatarsal_1_RotationInterpolator"
ROUTE1800.toField = "set_rotation"
ROUTE1800.toNode = "hanim_l_tarsometatarsal_1"

Group1496.children.append(ROUTE1800)
ROUTE1801 = x3d.ROUTE()
ROUTE1801.fromField = "value_changed"
ROUTE1801.fromNode = "Stop_l_metatarsophalangeal_1_RotationInterpolator"
ROUTE1801.toField = "set_rotation"
ROUTE1801.toNode = "hanim_l_metatarsophalangeal_1"

Group1496.children.append(ROUTE1801)
ROUTE1802 = x3d.ROUTE()
ROUTE1802.fromField = "value_changed"
ROUTE1802.fromNode = "Stop_l_tarsal_interphalangeal_1_RotationInterpolator"
ROUTE1802.toField = "set_rotation"
ROUTE1802.toNode = "hanim_l_tarsal_interphalangeal_1"

Group1496.children.append(ROUTE1802)
ROUTE1803 = x3d.ROUTE()
ROUTE1803.fromField = "value_changed"
ROUTE1803.fromNode = "Stop_l_cuneonavicular_2_RotationInterpolator"
ROUTE1803.toField = "set_rotation"
ROUTE1803.toNode = "hanim_l_cuneonavicular_2"

Group1496.children.append(ROUTE1803)
ROUTE1804 = x3d.ROUTE()
ROUTE1804.fromField = "value_changed"
ROUTE1804.fromNode = "Stop_l_tarsometatarsal_2_RotationInterpolator"
ROUTE1804.toField = "set_rotation"
ROUTE1804.toNode = "hanim_l_tarsometatarsal_2"

Group1496.children.append(ROUTE1804)
ROUTE1805 = x3d.ROUTE()
ROUTE1805.fromField = "value_changed"
ROUTE1805.fromNode = "Stop_l_metatarsophalangeal_2_RotationInterpolator"
ROUTE1805.toField = "set_rotation"
ROUTE1805.toNode = "hanim_l_metatarsophalangeal_2"

Group1496.children.append(ROUTE1805)
ROUTE1806 = x3d.ROUTE()
ROUTE1806.fromField = "value_changed"
ROUTE1806.fromNode = "Stop_l_tarsal_proximal_interphalangeal_2_RotationInterpolator"
ROUTE1806.toField = "set_rotation"
ROUTE1806.toNode = "hanim_l_tarsal_proximal_interphalangeal_2"

Group1496.children.append(ROUTE1806)
ROUTE1807 = x3d.ROUTE()
ROUTE1807.fromField = "value_changed"
ROUTE1807.fromNode = "Stop_l_tarsal_distal_interphalangeal_2_RotationInterpolator"
ROUTE1807.toField = "set_rotation"
ROUTE1807.toNode = "hanim_l_tarsal_distal_interphalangeal_2"

Group1496.children.append(ROUTE1807)
ROUTE1808 = x3d.ROUTE()
ROUTE1808.fromField = "value_changed"
ROUTE1808.fromNode = "Stop_l_cuneonavicular_3_RotationInterpolator"
ROUTE1808.toField = "set_rotation"
ROUTE1808.toNode = "hanim_l_cuneonavicular_3"

Group1496.children.append(ROUTE1808)
ROUTE1809 = x3d.ROUTE()
ROUTE1809.fromField = "value_changed"
ROUTE1809.fromNode = "Stop_l_tarsometatarsal_3_RotationInterpolator"
ROUTE1809.toField = "set_rotation"
ROUTE1809.toNode = "hanim_l_tarsometatarsal_3"

Group1496.children.append(ROUTE1809)
ROUTE1810 = x3d.ROUTE()
ROUTE1810.fromField = "value_changed"
ROUTE1810.fromNode = "Stop_l_metatarsophalangeal_3_RotationInterpolator"
ROUTE1810.toField = "set_rotation"
ROUTE1810.toNode = "hanim_l_metatarsophalangeal_3"

Group1496.children.append(ROUTE1810)
ROUTE1811 = x3d.ROUTE()
ROUTE1811.fromField = "value_changed"
ROUTE1811.fromNode = "Stop_l_tarsal_proximal_interphalangeal_3_RotationInterpolator"
ROUTE1811.toField = "set_rotation"
ROUTE1811.toNode = "hanim_l_tarsal_proximal_interphalangeal_3"

Group1496.children.append(ROUTE1811)
ROUTE1812 = x3d.ROUTE()
ROUTE1812.fromField = "value_changed"
ROUTE1812.fromNode = "Stop_l_tarsal_distal_interphalangeal_3_RotationInterpolator"
ROUTE1812.toField = "set_rotation"
ROUTE1812.toNode = "hanim_l_tarsal_distal_interphalangeal_3"

Group1496.children.append(ROUTE1812)
ROUTE1813 = x3d.ROUTE()
ROUTE1813.fromField = "value_changed"
ROUTE1813.fromNode = "Stop_l_calcaneocuboid_RotationInterpolator"
ROUTE1813.toField = "set_rotation"
ROUTE1813.toNode = "hanim_l_calcaneocuboid"

Group1496.children.append(ROUTE1813)
ROUTE1814 = x3d.ROUTE()
ROUTE1814.fromField = "value_changed"
ROUTE1814.fromNode = "Stop_l_transversetarsal_RotationInterpolator"
ROUTE1814.toField = "set_rotation"
ROUTE1814.toNode = "hanim_l_transversetarsal"

Group1496.children.append(ROUTE1814)
ROUTE1815 = x3d.ROUTE()
ROUTE1815.fromField = "value_changed"
ROUTE1815.fromNode = "Stop_l_tarsometatarsal_4_RotationInterpolator"
ROUTE1815.toField = "set_rotation"
ROUTE1815.toNode = "hanim_l_tarsometatarsal_4"

Group1496.children.append(ROUTE1815)
ROUTE1816 = x3d.ROUTE()
ROUTE1816.fromField = "value_changed"
ROUTE1816.fromNode = "Stop_l_metatarsophalangeal_4_RotationInterpolator"
ROUTE1816.toField = "set_rotation"
ROUTE1816.toNode = "hanim_l_metatarsophalangeal_4"

Group1496.children.append(ROUTE1816)
ROUTE1817 = x3d.ROUTE()
ROUTE1817.fromField = "value_changed"
ROUTE1817.fromNode = "Stop_l_tarsal_proximal_interphalangeal_4_RotationInterpolator"
ROUTE1817.toField = "set_rotation"
ROUTE1817.toNode = "hanim_l_tarsal_proximal_interphalangeal_4"

Group1496.children.append(ROUTE1817)
ROUTE1818 = x3d.ROUTE()
ROUTE1818.fromField = "value_changed"
ROUTE1818.fromNode = "Stop_l_tarsal_distal_interphalangeal_4_RotationInterpolator"
ROUTE1818.toField = "set_rotation"
ROUTE1818.toNode = "hanim_l_tarsal_distal_interphalangeal_4"

Group1496.children.append(ROUTE1818)
ROUTE1819 = x3d.ROUTE()
ROUTE1819.fromField = "value_changed"
ROUTE1819.fromNode = "Stop_l_tarsometatarsal_5_RotationInterpolator"
ROUTE1819.toField = "set_rotation"
ROUTE1819.toNode = "hanim_l_tarsometatarsal_5"

Group1496.children.append(ROUTE1819)
ROUTE1820 = x3d.ROUTE()
ROUTE1820.fromField = "value_changed"
ROUTE1820.fromNode = "Stop_l_metatarsophalangeal_5_RotationInterpolator"
ROUTE1820.toField = "set_rotation"
ROUTE1820.toNode = "hanim_l_metatarsophalangeal_5"

Group1496.children.append(ROUTE1820)
ROUTE1821 = x3d.ROUTE()
ROUTE1821.fromField = "value_changed"
ROUTE1821.fromNode = "Stop_l_tarsal_proximal_interphalangeal_5_RotationInterpolator"
ROUTE1821.toField = "set_rotation"
ROUTE1821.toNode = "hanim_l_tarsal_proximal_interphalangeal_5"

Group1496.children.append(ROUTE1821)
ROUTE1822 = x3d.ROUTE()
ROUTE1822.fromField = "value_changed"
ROUTE1822.fromNode = "Stop_l_tarsal_distal_interphalangeal_5_RotationInterpolator"
ROUTE1822.toField = "set_rotation"
ROUTE1822.toNode = "hanim_l_tarsal_distal_interphalangeal_5"

Group1496.children.append(ROUTE1822)
ROUTE1823 = x3d.ROUTE()
ROUTE1823.fromField = "value_changed"
ROUTE1823.fromNode = "Stop_r_hip_RotationInterpolator"
ROUTE1823.toField = "set_rotation"
ROUTE1823.toNode = "hanim_r_hip"

Group1496.children.append(ROUTE1823)
ROUTE1824 = x3d.ROUTE()
ROUTE1824.fromField = "value_changed"
ROUTE1824.fromNode = "Stop_r_knee_RotationInterpolator"
ROUTE1824.toField = "set_rotation"
ROUTE1824.toNode = "hanim_r_knee"

Group1496.children.append(ROUTE1824)
ROUTE1825 = x3d.ROUTE()
ROUTE1825.fromField = "value_changed"
ROUTE1825.fromNode = "Stop_r_talocrural_RotationInterpolator"
ROUTE1825.toField = "set_rotation"
ROUTE1825.toNode = "hanim_r_talocrural"

Group1496.children.append(ROUTE1825)
ROUTE1826 = x3d.ROUTE()
ROUTE1826.fromField = "value_changed"
ROUTE1826.fromNode = "Stop_r_talocalcaneonavicular_RotationInterpolator"
ROUTE1826.toField = "set_rotation"
ROUTE1826.toNode = "hanim_r_talocalcaneonavicular"

Group1496.children.append(ROUTE1826)
ROUTE1827 = x3d.ROUTE()
ROUTE1827.fromField = "value_changed"
ROUTE1827.fromNode = "Stop_r_cuneonavicular_1_RotationInterpolator"
ROUTE1827.toField = "set_rotation"
ROUTE1827.toNode = "hanim_r_cuneonavicular_1"

Group1496.children.append(ROUTE1827)
ROUTE1828 = x3d.ROUTE()
ROUTE1828.fromField = "value_changed"
ROUTE1828.fromNode = "Stop_r_tarsometatarsal_1_RotationInterpolator"
ROUTE1828.toField = "set_rotation"
ROUTE1828.toNode = "hanim_r_tarsometatarsal_1"

Group1496.children.append(ROUTE1828)
ROUTE1829 = x3d.ROUTE()
ROUTE1829.fromField = "value_changed"
ROUTE1829.fromNode = "Stop_r_metatarsophalangeal_1_RotationInterpolator"
ROUTE1829.toField = "set_rotation"
ROUTE1829.toNode = "hanim_r_metatarsophalangeal_1"

Group1496.children.append(ROUTE1829)
ROUTE1830 = x3d.ROUTE()
ROUTE1830.fromField = "value_changed"
ROUTE1830.fromNode = "Stop_r_tarsal_interphalangeal_1_RotationInterpolator"
ROUTE1830.toField = "set_rotation"
ROUTE1830.toNode = "hanim_r_tarsal_interphalangeal_1"

Group1496.children.append(ROUTE1830)
ROUTE1831 = x3d.ROUTE()
ROUTE1831.fromField = "value_changed"
ROUTE1831.fromNode = "Stop_r_cuneonavicular_2_RotationInterpolator"
ROUTE1831.toField = "set_rotation"
ROUTE1831.toNode = "hanim_r_cuneonavicular_2"

Group1496.children.append(ROUTE1831)
ROUTE1832 = x3d.ROUTE()
ROUTE1832.fromField = "value_changed"
ROUTE1832.fromNode = "Stop_r_tarsometatarsal_2_RotationInterpolator"
ROUTE1832.toField = "set_rotation"
ROUTE1832.toNode = "hanim_r_tarsometatarsal_2"

Group1496.children.append(ROUTE1832)
ROUTE1833 = x3d.ROUTE()
ROUTE1833.fromField = "value_changed"
ROUTE1833.fromNode = "Stop_r_metatarsophalangeal_2_RotationInterpolator"
ROUTE1833.toField = "set_rotation"
ROUTE1833.toNode = "hanim_r_metatarsophalangeal_2"

Group1496.children.append(ROUTE1833)
ROUTE1834 = x3d.ROUTE()
ROUTE1834.fromField = "value_changed"
ROUTE1834.fromNode = "Stop_r_tarsal_proximal_interphalangeal_2_RotationInterpolator"
ROUTE1834.toField = "set_rotation"
ROUTE1834.toNode = "hanim_r_tarsal_proximal_interphalangeal_2"

Group1496.children.append(ROUTE1834)
ROUTE1835 = x3d.ROUTE()
ROUTE1835.fromField = "value_changed"
ROUTE1835.fromNode = "Stop_r_tarsal_distal_interphalangeal_2_RotationInterpolator"
ROUTE1835.toField = "set_rotation"
ROUTE1835.toNode = "hanim_r_tarsal_distal_interphalangeal_2"

Group1496.children.append(ROUTE1835)
ROUTE1836 = x3d.ROUTE()
ROUTE1836.fromField = "value_changed"
ROUTE1836.fromNode = "Stop_r_cuneonavicular_3_RotationInterpolator"
ROUTE1836.toField = "set_rotation"
ROUTE1836.toNode = "hanim_r_cuneonavicular_3"

Group1496.children.append(ROUTE1836)
ROUTE1837 = x3d.ROUTE()
ROUTE1837.fromField = "value_changed"
ROUTE1837.fromNode = "Stop_r_tarsometatarsal_3_RotationInterpolator"
ROUTE1837.toField = "set_rotation"
ROUTE1837.toNode = "hanim_r_tarsometatarsal_3"

Group1496.children.append(ROUTE1837)
ROUTE1838 = x3d.ROUTE()
ROUTE1838.fromField = "value_changed"
ROUTE1838.fromNode = "Stop_r_metatarsophalangeal_3_RotationInterpolator"
ROUTE1838.toField = "set_rotation"
ROUTE1838.toNode = "hanim_r_metatarsophalangeal_3"

Group1496.children.append(ROUTE1838)
ROUTE1839 = x3d.ROUTE()
ROUTE1839.fromField = "value_changed"
ROUTE1839.fromNode = "Stop_r_tarsal_proximal_interphalangeal_3_RotationInterpolator"
ROUTE1839.toField = "set_rotation"
ROUTE1839.toNode = "hanim_r_tarsal_proximal_interphalangeal_3"

Group1496.children.append(ROUTE1839)
ROUTE1840 = x3d.ROUTE()
ROUTE1840.fromField = "value_changed"
ROUTE1840.fromNode = "Stop_r_tarsal_distal_interphalangeal_3_RotationInterpolator"
ROUTE1840.toField = "set_rotation"
ROUTE1840.toNode = "hanim_r_tarsal_distal_interphalangeal_3"

Group1496.children.append(ROUTE1840)
ROUTE1841 = x3d.ROUTE()
ROUTE1841.fromField = "value_changed"
ROUTE1841.fromNode = "Stop_r_calcaneocuboid_RotationInterpolator"
ROUTE1841.toField = "set_rotation"
ROUTE1841.toNode = "hanim_r_calcaneocuboid"

Group1496.children.append(ROUTE1841)
ROUTE1842 = x3d.ROUTE()
ROUTE1842.fromField = "value_changed"
ROUTE1842.fromNode = "Stop_r_transversetarsal_RotationInterpolator"
ROUTE1842.toField = "set_rotation"
ROUTE1842.toNode = "hanim_r_transversetarsal"

Group1496.children.append(ROUTE1842)
ROUTE1843 = x3d.ROUTE()
ROUTE1843.fromField = "value_changed"
ROUTE1843.fromNode = "Stop_r_tarsometatarsal_4_RotationInterpolator"
ROUTE1843.toField = "set_rotation"
ROUTE1843.toNode = "hanim_r_tarsometatarsal_4"

Group1496.children.append(ROUTE1843)
ROUTE1844 = x3d.ROUTE()
ROUTE1844.fromField = "value_changed"
ROUTE1844.fromNode = "Stop_r_metatarsophalangeal_4_RotationInterpolator"
ROUTE1844.toField = "set_rotation"
ROUTE1844.toNode = "hanim_r_metatarsophalangeal_4"

Group1496.children.append(ROUTE1844)
ROUTE1845 = x3d.ROUTE()
ROUTE1845.fromField = "value_changed"
ROUTE1845.fromNode = "Stop_r_tarsal_proximal_interphalangeal_4_RotationInterpolator"
ROUTE1845.toField = "set_rotation"
ROUTE1845.toNode = "hanim_r_tarsal_proximal_interphalangeal_4"

Group1496.children.append(ROUTE1845)
ROUTE1846 = x3d.ROUTE()
ROUTE1846.fromField = "value_changed"
ROUTE1846.fromNode = "Stop_r_tarsal_distal_interphalangeal_4_RotationInterpolator"
ROUTE1846.toField = "set_rotation"
ROUTE1846.toNode = "hanim_r_tarsal_distal_interphalangeal_4"

Group1496.children.append(ROUTE1846)
ROUTE1847 = x3d.ROUTE()
ROUTE1847.fromField = "value_changed"
ROUTE1847.fromNode = "Stop_r_tarsometatarsal_5_RotationInterpolator"
ROUTE1847.toField = "set_rotation"
ROUTE1847.toNode = "hanim_r_tarsometatarsal_5"

Group1496.children.append(ROUTE1847)
ROUTE1848 = x3d.ROUTE()
ROUTE1848.fromField = "value_changed"
ROUTE1848.fromNode = "Stop_r_metatarsophalangeal_5_RotationInterpolator"
ROUTE1848.toField = "set_rotation"
ROUTE1848.toNode = "hanim_r_metatarsophalangeal_5"

Group1496.children.append(ROUTE1848)
ROUTE1849 = x3d.ROUTE()
ROUTE1849.fromField = "value_changed"
ROUTE1849.fromNode = "Stop_r_tarsal_proximal_interphalangeal_5_RotationInterpolator"
ROUTE1849.toField = "set_rotation"
ROUTE1849.toNode = "hanim_r_tarsal_proximal_interphalangeal_5"

Group1496.children.append(ROUTE1849)
ROUTE1850 = x3d.ROUTE()
ROUTE1850.fromField = "value_changed"
ROUTE1850.fromNode = "Stop_r_tarsal_distal_interphalangeal_5_RotationInterpolator"
ROUTE1850.toField = "set_rotation"
ROUTE1850.toNode = "hanim_r_tarsal_distal_interphalangeal_5"

Group1496.children.append(ROUTE1850)
ROUTE1851 = x3d.ROUTE()
ROUTE1851.fromField = "value_changed"
ROUTE1851.fromNode = "Stop_vl5_RotationInterpolator"
ROUTE1851.toField = "set_rotation"
ROUTE1851.toNode = "hanim_vl5"

Group1496.children.append(ROUTE1851)
ROUTE1852 = x3d.ROUTE()
ROUTE1852.fromField = "value_changed"
ROUTE1852.fromNode = "Stop_vl4_RotationInterpolator"
ROUTE1852.toField = "set_rotation"
ROUTE1852.toNode = "hanim_vl4"

Group1496.children.append(ROUTE1852)
ROUTE1853 = x3d.ROUTE()
ROUTE1853.fromField = "value_changed"
ROUTE1853.fromNode = "Stop_vl3_RotationInterpolator"
ROUTE1853.toField = "set_rotation"
ROUTE1853.toNode = "hanim_vl3"

Group1496.children.append(ROUTE1853)
ROUTE1854 = x3d.ROUTE()
ROUTE1854.fromField = "value_changed"
ROUTE1854.fromNode = "Stop_vl2_RotationInterpolator"
ROUTE1854.toField = "set_rotation"
ROUTE1854.toNode = "hanim_vl2"

Group1496.children.append(ROUTE1854)
ROUTE1855 = x3d.ROUTE()
ROUTE1855.fromField = "value_changed"
ROUTE1855.fromNode = "Stop_vl1_RotationInterpolator"
ROUTE1855.toField = "set_rotation"
ROUTE1855.toNode = "hanim_vl1"

Group1496.children.append(ROUTE1855)
ROUTE1856 = x3d.ROUTE()
ROUTE1856.fromField = "value_changed"
ROUTE1856.fromNode = "Stop_vt12_RotationInterpolator"
ROUTE1856.toField = "set_rotation"
ROUTE1856.toNode = "hanim_vt12"

Group1496.children.append(ROUTE1856)
ROUTE1857 = x3d.ROUTE()
ROUTE1857.fromField = "value_changed"
ROUTE1857.fromNode = "Stop_vt11_RotationInterpolator"
ROUTE1857.toField = "set_rotation"
ROUTE1857.toNode = "hanim_vt11"

Group1496.children.append(ROUTE1857)
ROUTE1858 = x3d.ROUTE()
ROUTE1858.fromField = "value_changed"
ROUTE1858.fromNode = "Stop_vt10_RotationInterpolator"
ROUTE1858.toField = "set_rotation"
ROUTE1858.toNode = "hanim_vt10"

Group1496.children.append(ROUTE1858)
ROUTE1859 = x3d.ROUTE()
ROUTE1859.fromField = "value_changed"
ROUTE1859.fromNode = "Stop_vt9_RotationInterpolator"
ROUTE1859.toField = "set_rotation"
ROUTE1859.toNode = "hanim_vt9"

Group1496.children.append(ROUTE1859)
ROUTE1860 = x3d.ROUTE()
ROUTE1860.fromField = "value_changed"
ROUTE1860.fromNode = "Stop_vt8_RotationInterpolator"
ROUTE1860.toField = "set_rotation"
ROUTE1860.toNode = "hanim_vt8"

Group1496.children.append(ROUTE1860)
ROUTE1861 = x3d.ROUTE()
ROUTE1861.fromField = "value_changed"
ROUTE1861.fromNode = "Stop_vt7_RotationInterpolator"
ROUTE1861.toField = "set_rotation"
ROUTE1861.toNode = "hanim_vt7"

Group1496.children.append(ROUTE1861)
ROUTE1862 = x3d.ROUTE()
ROUTE1862.fromField = "value_changed"
ROUTE1862.fromNode = "Stop_vt6_RotationInterpolator"
ROUTE1862.toField = "set_rotation"
ROUTE1862.toNode = "hanim_vt6"

Group1496.children.append(ROUTE1862)
ROUTE1863 = x3d.ROUTE()
ROUTE1863.fromField = "value_changed"
ROUTE1863.fromNode = "Stop_vt5_RotationInterpolator"
ROUTE1863.toField = "set_rotation"
ROUTE1863.toNode = "hanim_vt5"

Group1496.children.append(ROUTE1863)
ROUTE1864 = x3d.ROUTE()
ROUTE1864.fromField = "value_changed"
ROUTE1864.fromNode = "Stop_vt4_RotationInterpolator"
ROUTE1864.toField = "set_rotation"
ROUTE1864.toNode = "hanim_vt4"

Group1496.children.append(ROUTE1864)
ROUTE1865 = x3d.ROUTE()
ROUTE1865.fromField = "value_changed"
ROUTE1865.fromNode = "Stop_vt3_RotationInterpolator"
ROUTE1865.toField = "set_rotation"
ROUTE1865.toNode = "hanim_vt3"

Group1496.children.append(ROUTE1865)
ROUTE1866 = x3d.ROUTE()
ROUTE1866.fromField = "value_changed"
ROUTE1866.fromNode = "Stop_vt2_RotationInterpolator"
ROUTE1866.toField = "set_rotation"
ROUTE1866.toNode = "hanim_vt2"

Group1496.children.append(ROUTE1866)
ROUTE1867 = x3d.ROUTE()
ROUTE1867.fromField = "value_changed"
ROUTE1867.fromNode = "Stop_vt1_RotationInterpolator"
ROUTE1867.toField = "set_rotation"
ROUTE1867.toNode = "hanim_vt1"

Group1496.children.append(ROUTE1867)
ROUTE1868 = x3d.ROUTE()
ROUTE1868.fromField = "value_changed"
ROUTE1868.fromNode = "Stop_vc7_RotationInterpolator"
ROUTE1868.toField = "set_rotation"
ROUTE1868.toNode = "hanim_vc7"

Group1496.children.append(ROUTE1868)
ROUTE1869 = x3d.ROUTE()
ROUTE1869.fromField = "value_changed"
ROUTE1869.fromNode = "Stop_vc6_RotationInterpolator"
ROUTE1869.toField = "set_rotation"
ROUTE1869.toNode = "hanim_vc6"

Group1496.children.append(ROUTE1869)
ROUTE1870 = x3d.ROUTE()
ROUTE1870.fromField = "value_changed"
ROUTE1870.fromNode = "Stop_vc5_RotationInterpolator"
ROUTE1870.toField = "set_rotation"
ROUTE1870.toNode = "hanim_vc5"

Group1496.children.append(ROUTE1870)
ROUTE1871 = x3d.ROUTE()
ROUTE1871.fromField = "value_changed"
ROUTE1871.fromNode = "Stop_vc4_RotationInterpolator"
ROUTE1871.toField = "set_rotation"
ROUTE1871.toNode = "hanim_vc4"

Group1496.children.append(ROUTE1871)
ROUTE1872 = x3d.ROUTE()
ROUTE1872.fromField = "value_changed"
ROUTE1872.fromNode = "Stop_vc3_RotationInterpolator"
ROUTE1872.toField = "set_rotation"
ROUTE1872.toNode = "hanim_vc3"

Group1496.children.append(ROUTE1872)
ROUTE1873 = x3d.ROUTE()
ROUTE1873.fromField = "value_changed"
ROUTE1873.fromNode = "Stop_vc2_RotationInterpolator"
ROUTE1873.toField = "set_rotation"
ROUTE1873.toNode = "hanim_vc2"

Group1496.children.append(ROUTE1873)
ROUTE1874 = x3d.ROUTE()
ROUTE1874.fromField = "value_changed"
ROUTE1874.fromNode = "Stop_vc1_RotationInterpolator"
ROUTE1874.toField = "set_rotation"
ROUTE1874.toNode = "hanim_vc1"

Group1496.children.append(ROUTE1874)
ROUTE1875 = x3d.ROUTE()
ROUTE1875.fromField = "value_changed"
ROUTE1875.fromNode = "Stop_skullbase_RotationInterpolator"
ROUTE1875.toField = "set_rotation"
ROUTE1875.toNode = "hanim_skullbase"

Group1496.children.append(ROUTE1875)
ROUTE1876 = x3d.ROUTE()
ROUTE1876.fromField = "value_changed"
ROUTE1876.fromNode = "Stop_l_eyelid_joint_RotationInterpolator"
ROUTE1876.toField = "set_rotation"
ROUTE1876.toNode = "hanim_l_eyelid_joint"

Group1496.children.append(ROUTE1876)
ROUTE1877 = x3d.ROUTE()
ROUTE1877.fromField = "value_changed"
ROUTE1877.fromNode = "Stop_r_eyelid_joint_RotationInterpolator"
ROUTE1877.toField = "set_rotation"
ROUTE1877.toNode = "hanim_r_eyelid_joint"

Group1496.children.append(ROUTE1877)
ROUTE1878 = x3d.ROUTE()
ROUTE1878.fromField = "value_changed"
ROUTE1878.fromNode = "Stop_l_eyeball_joint_RotationInterpolator"
ROUTE1878.toField = "set_rotation"
ROUTE1878.toNode = "hanim_l_eyeball_joint"

Group1496.children.append(ROUTE1878)
ROUTE1879 = x3d.ROUTE()
ROUTE1879.fromField = "value_changed"
ROUTE1879.fromNode = "Stop_r_eyeball_joint_RotationInterpolator"
ROUTE1879.toField = "set_rotation"
ROUTE1879.toNode = "hanim_r_eyeball_joint"

Group1496.children.append(ROUTE1879)
ROUTE1880 = x3d.ROUTE()
ROUTE1880.fromField = "value_changed"
ROUTE1880.fromNode = "Stop_l_eyebrow_joint_RotationInterpolator"
ROUTE1880.toField = "set_rotation"
ROUTE1880.toNode = "hanim_l_eyebrow_joint"

Group1496.children.append(ROUTE1880)
ROUTE1881 = x3d.ROUTE()
ROUTE1881.fromField = "value_changed"
ROUTE1881.fromNode = "Stop_r_eyebrow_joint_RotationInterpolator"
ROUTE1881.toField = "set_rotation"
ROUTE1881.toNode = "hanim_r_eyebrow_joint"

Group1496.children.append(ROUTE1881)
ROUTE1882 = x3d.ROUTE()
ROUTE1882.fromField = "value_changed"
ROUTE1882.fromNode = "Stop_temporomandibular_RotationInterpolator"
ROUTE1882.toField = "set_rotation"
ROUTE1882.toNode = "hanim_temporomandibular"

Group1496.children.append(ROUTE1882)
ROUTE1883 = x3d.ROUTE()
ROUTE1883.fromField = "value_changed"
ROUTE1883.fromNode = "Stop_l_sternoclavicular_RotationInterpolator"
ROUTE1883.toField = "set_rotation"
ROUTE1883.toNode = "hanim_l_sternoclavicular"

Group1496.children.append(ROUTE1883)
ROUTE1884 = x3d.ROUTE()
ROUTE1884.fromField = "value_changed"
ROUTE1884.fromNode = "Stop_l_acromioclavicular_RotationInterpolator"
ROUTE1884.toField = "set_rotation"
ROUTE1884.toNode = "hanim_l_acromioclavicular"

Group1496.children.append(ROUTE1884)
ROUTE1885 = x3d.ROUTE()
ROUTE1885.fromField = "value_changed"
ROUTE1885.fromNode = "Stop_l_shoulder_RotationInterpolator"
ROUTE1885.toField = "set_rotation"
ROUTE1885.toNode = "hanim_l_shoulder"

Group1496.children.append(ROUTE1885)
ROUTE1886 = x3d.ROUTE()
ROUTE1886.fromField = "value_changed"
ROUTE1886.fromNode = "Stop_l_elbow_RotationInterpolator"
ROUTE1886.toField = "set_rotation"
ROUTE1886.toNode = "hanim_l_elbow"

Group1496.children.append(ROUTE1886)
ROUTE1887 = x3d.ROUTE()
ROUTE1887.fromField = "value_changed"
ROUTE1887.fromNode = "Stop_l_radiocarpal_RotationInterpolator"
ROUTE1887.toField = "set_rotation"
ROUTE1887.toNode = "hanim_l_radiocarpal"

Group1496.children.append(ROUTE1887)
ROUTE1888 = x3d.ROUTE()
ROUTE1888.fromField = "value_changed"
ROUTE1888.fromNode = "Stop_l_midcarpal_1_RotationInterpolator"
ROUTE1888.toField = "set_rotation"
ROUTE1888.toNode = "hanim_l_midcarpal_1"

Group1496.children.append(ROUTE1888)
ROUTE1889 = x3d.ROUTE()
ROUTE1889.fromField = "value_changed"
ROUTE1889.fromNode = "Stop_l_carpometacarpal_1_RotationInterpolator"
ROUTE1889.toField = "set_rotation"
ROUTE1889.toNode = "hanim_l_carpometacarpal_1"

Group1496.children.append(ROUTE1889)
ROUTE1890 = x3d.ROUTE()
ROUTE1890.fromField = "value_changed"
ROUTE1890.fromNode = "Stop_l_metacarpophalangeal_1_RotationInterpolator"
ROUTE1890.toField = "set_rotation"
ROUTE1890.toNode = "hanim_l_metacarpophalangeal_1"

Group1496.children.append(ROUTE1890)
ROUTE1891 = x3d.ROUTE()
ROUTE1891.fromField = "value_changed"
ROUTE1891.fromNode = "Stop_l_carpal_interphalangeal_1_RotationInterpolator"
ROUTE1891.toField = "set_rotation"
ROUTE1891.toNode = "hanim_l_carpal_interphalangeal_1"

Group1496.children.append(ROUTE1891)
ROUTE1892 = x3d.ROUTE()
ROUTE1892.fromField = "value_changed"
ROUTE1892.fromNode = "Stop_l_midcarpal_2_RotationInterpolator"
ROUTE1892.toField = "set_rotation"
ROUTE1892.toNode = "hanim_l_midcarpal_2"

Group1496.children.append(ROUTE1892)
ROUTE1893 = x3d.ROUTE()
ROUTE1893.fromField = "value_changed"
ROUTE1893.fromNode = "Stop_l_carpometacarpal_2_RotationInterpolator"
ROUTE1893.toField = "set_rotation"
ROUTE1893.toNode = "hanim_l_carpometacarpal_2"

Group1496.children.append(ROUTE1893)
ROUTE1894 = x3d.ROUTE()
ROUTE1894.fromField = "value_changed"
ROUTE1894.fromNode = "Stop_l_metacarpophalangeal_2_RotationInterpolator"
ROUTE1894.toField = "set_rotation"
ROUTE1894.toNode = "hanim_l_metacarpophalangeal_2"

Group1496.children.append(ROUTE1894)
ROUTE1895 = x3d.ROUTE()
ROUTE1895.fromField = "value_changed"
ROUTE1895.fromNode = "Stop_l_carpal_proximal_interphalangeal_2_RotationInterpolator"
ROUTE1895.toField = "set_rotation"
ROUTE1895.toNode = "hanim_l_carpal_proximal_interphalangeal_2"

Group1496.children.append(ROUTE1895)
ROUTE1896 = x3d.ROUTE()
ROUTE1896.fromField = "value_changed"
ROUTE1896.fromNode = "Stop_l_carpal_distal_interphalangeal_2_RotationInterpolator"
ROUTE1896.toField = "set_rotation"
ROUTE1896.toNode = "hanim_l_carpal_distal_interphalangeal_2"

Group1496.children.append(ROUTE1896)
ROUTE1897 = x3d.ROUTE()
ROUTE1897.fromField = "value_changed"
ROUTE1897.fromNode = "Stop_l_midcarpal_3_RotationInterpolator"
ROUTE1897.toField = "set_rotation"
ROUTE1897.toNode = "hanim_l_midcarpal_3"

Group1496.children.append(ROUTE1897)
ROUTE1898 = x3d.ROUTE()
ROUTE1898.fromField = "value_changed"
ROUTE1898.fromNode = "Stop_l_carpometacarpal_3_RotationInterpolator"
ROUTE1898.toField = "set_rotation"
ROUTE1898.toNode = "hanim_l_carpometacarpal_3"

Group1496.children.append(ROUTE1898)
ROUTE1899 = x3d.ROUTE()
ROUTE1899.fromField = "value_changed"
ROUTE1899.fromNode = "Stop_l_carpometacarpal_3_RotationInterpolator"
ROUTE1899.toField = "set_rotation"
ROUTE1899.toNode = "hanim_l_metacarpophalangeal_3"

Group1496.children.append(ROUTE1899)
ROUTE1900 = x3d.ROUTE()
ROUTE1900.fromField = "value_changed"
ROUTE1900.fromNode = "Stop_l_carpal_proximal_interphalangeal_3_RotationInterpolator"
ROUTE1900.toField = "set_rotation"
ROUTE1900.toNode = "hanim_l_carpal_proximal_interphalangeal_3"

Group1496.children.append(ROUTE1900)
ROUTE1901 = x3d.ROUTE()
ROUTE1901.fromField = "value_changed"
ROUTE1901.fromNode = "Stop_l_carpal_distal_interphalangeal_3_RotationInterpolator"
ROUTE1901.toField = "set_rotation"
ROUTE1901.toNode = "hanim_l_carpal_distal_interphalangeal_3"

Group1496.children.append(ROUTE1901)
ROUTE1902 = x3d.ROUTE()
ROUTE1902.fromField = "value_changed"
ROUTE1902.fromNode = "Stop_l_midcarpal_4_5_RotationInterpolator"
ROUTE1902.toField = "set_rotation"
ROUTE1902.toNode = "hanim_l_midcarpal_4_5"

Group1496.children.append(ROUTE1902)
ROUTE1903 = x3d.ROUTE()
ROUTE1903.fromField = "value_changed"
ROUTE1903.fromNode = "Stop_l_carpometacarpal_4_RotationInterpolator"
ROUTE1903.toField = "set_rotation"
ROUTE1903.toNode = "hanim_l_carpometacarpal_4"

Group1496.children.append(ROUTE1903)
ROUTE1904 = x3d.ROUTE()
ROUTE1904.fromField = "value_changed"
ROUTE1904.fromNode = "Stop_l_metacarpophalangeal_4_RotationInterpolator"
ROUTE1904.toField = "set_rotation"
ROUTE1904.toNode = "hanim_l_metacarpophalangeal_4"

Group1496.children.append(ROUTE1904)
ROUTE1905 = x3d.ROUTE()
ROUTE1905.fromField = "value_changed"
ROUTE1905.fromNode = "Stop_l_carpal_proximal_interphalangeal_4_RotationInterpolator"
ROUTE1905.toField = "set_rotation"
ROUTE1905.toNode = "hanim_l_carpal_proximal_interphalangeal_4"

Group1496.children.append(ROUTE1905)
ROUTE1906 = x3d.ROUTE()
ROUTE1906.fromField = "value_changed"
ROUTE1906.fromNode = "Stop_l_carpal_distal_interphalangeal_4_RotationInterpolator"
ROUTE1906.toField = "set_rotation"
ROUTE1906.toNode = "hanim_l_carpal_distal_interphalangeal_4"

Group1496.children.append(ROUTE1906)
ROUTE1907 = x3d.ROUTE()
ROUTE1907.fromField = "value_changed"
ROUTE1907.fromNode = "Stop_l_carpometacarpal_5_RotationInterpolator"
ROUTE1907.toField = "set_rotation"
ROUTE1907.toNode = "hanim_l_carpometacarpal_5"

Group1496.children.append(ROUTE1907)
ROUTE1908 = x3d.ROUTE()
ROUTE1908.fromField = "value_changed"
ROUTE1908.fromNode = "Stop_l_metacarpophalangeal_5_RotationInterpolator"
ROUTE1908.toField = "set_rotation"
ROUTE1908.toNode = "hanim_l_metacarpophalangeal_5"

Group1496.children.append(ROUTE1908)
ROUTE1909 = x3d.ROUTE()
ROUTE1909.fromField = "value_changed"
ROUTE1909.fromNode = "Stop_l_carpal_proximal_interphalangeal_5_RotationInterpolator"
ROUTE1909.toField = "set_rotation"
ROUTE1909.toNode = "hanim_l_carpal_proximal_interphalangeal_5"

Group1496.children.append(ROUTE1909)
ROUTE1910 = x3d.ROUTE()
ROUTE1910.fromField = "value_changed"
ROUTE1910.fromNode = "Stop_l_carpal_distal_interphalangeal_5_RotationInterpolator"
ROUTE1910.toField = "set_rotation"
ROUTE1910.toNode = "hanim_l_carpal_distal_interphalangeal_5"

Group1496.children.append(ROUTE1910)
ROUTE1911 = x3d.ROUTE()
ROUTE1911.fromField = "value_changed"
ROUTE1911.fromNode = "Stop_r_sternoclavicular_RotationInterpolator"
ROUTE1911.toField = "set_rotation"
ROUTE1911.toNode = "hanim_r_sternoclavicular"

Group1496.children.append(ROUTE1911)
ROUTE1912 = x3d.ROUTE()
ROUTE1912.fromField = "value_changed"
ROUTE1912.fromNode = "Stop_r_acromioclavicular_RotationInterpolator"
ROUTE1912.toField = "set_rotation"
ROUTE1912.toNode = "hanim_r_acromioclavicular"

Group1496.children.append(ROUTE1912)
ROUTE1913 = x3d.ROUTE()
ROUTE1913.fromField = "value_changed"
ROUTE1913.fromNode = "Stop_r_shoulder_RotationInterpolator"
ROUTE1913.toField = "set_rotation"
ROUTE1913.toNode = "hanim_r_shoulder"

Group1496.children.append(ROUTE1913)
ROUTE1914 = x3d.ROUTE()
ROUTE1914.fromField = "value_changed"
ROUTE1914.fromNode = "Stop_r_elbow_RotationInterpolator"
ROUTE1914.toField = "set_rotation"
ROUTE1914.toNode = "hanim_r_elbow"

Group1496.children.append(ROUTE1914)
ROUTE1915 = x3d.ROUTE()
ROUTE1915.fromField = "value_changed"
ROUTE1915.fromNode = "Stop_r_radiocarpal_RotationInterpolator"
ROUTE1915.toField = "set_rotation"
ROUTE1915.toNode = "hanim_r_radiocarpal"

Group1496.children.append(ROUTE1915)
ROUTE1916 = x3d.ROUTE()
ROUTE1916.fromField = "value_changed"
ROUTE1916.fromNode = "Stop_r_midcarpal_1_RotationInterpolator"
ROUTE1916.toField = "set_rotation"
ROUTE1916.toNode = "hanim_r_midcarpal_1"

Group1496.children.append(ROUTE1916)
ROUTE1917 = x3d.ROUTE()
ROUTE1917.fromField = "value_changed"
ROUTE1917.fromNode = "Stop_r_carpometacarpal_1_RotationInterpolator"
ROUTE1917.toField = "set_rotation"
ROUTE1917.toNode = "hanim_r_carpometacarpal_1"

Group1496.children.append(ROUTE1917)
ROUTE1918 = x3d.ROUTE()
ROUTE1918.fromField = "value_changed"
ROUTE1918.fromNode = "Stop_r_metacarpophalangeal_1_RotationInterpolator"
ROUTE1918.toField = "set_rotation"
ROUTE1918.toNode = "hanim_r_metacarpophalangeal_1"

Group1496.children.append(ROUTE1918)
ROUTE1919 = x3d.ROUTE()
ROUTE1919.fromField = "value_changed"
ROUTE1919.fromNode = "Stop_r_carpal_interphalangeal_1_RotationInterpolator"
ROUTE1919.toField = "set_rotation"
ROUTE1919.toNode = "hanim_r_carpal_interphalangeal_1"

Group1496.children.append(ROUTE1919)
ROUTE1920 = x3d.ROUTE()
ROUTE1920.fromField = "value_changed"
ROUTE1920.fromNode = "Stop_r_midcarpal_2_RotationInterpolator"
ROUTE1920.toField = "set_rotation"
ROUTE1920.toNode = "hanim_r_midcarpal_2"

Group1496.children.append(ROUTE1920)
ROUTE1921 = x3d.ROUTE()
ROUTE1921.fromField = "value_changed"
ROUTE1921.fromNode = "Stop_r_carpometacarpal_2_RotationInterpolator"
ROUTE1921.toField = "set_rotation"
ROUTE1921.toNode = "hanim_r_carpometacarpal_2"

Group1496.children.append(ROUTE1921)
ROUTE1922 = x3d.ROUTE()
ROUTE1922.fromField = "value_changed"
ROUTE1922.fromNode = "Stop_r_metacarpophalangeal_2_RotationInterpolator"
ROUTE1922.toField = "set_rotation"
ROUTE1922.toNode = "hanim_r_metacarpophalangeal_2"

Group1496.children.append(ROUTE1922)
ROUTE1923 = x3d.ROUTE()
ROUTE1923.fromField = "value_changed"
ROUTE1923.fromNode = "Stop_r_carpal_proximal_interphalangeal_2_RotationInterpolator"
ROUTE1923.toField = "set_rotation"
ROUTE1923.toNode = "hanim_r_carpal_proximal_interphalangeal_2"

Group1496.children.append(ROUTE1923)
ROUTE1924 = x3d.ROUTE()
ROUTE1924.fromField = "value_changed"
ROUTE1924.fromNode = "Stop_r_carpal_distal_interphalangeal_2_RotationInterpolator"
ROUTE1924.toField = "set_rotation"
ROUTE1924.toNode = "hanim_r_carpal_distal_interphalangeal_2"

Group1496.children.append(ROUTE1924)
ROUTE1925 = x3d.ROUTE()
ROUTE1925.fromField = "value_changed"
ROUTE1925.fromNode = "Stop_r_midcarpal_3_RotationInterpolator"
ROUTE1925.toField = "set_rotation"
ROUTE1925.toNode = "hanim_r_midcarpal_3"

Group1496.children.append(ROUTE1925)
ROUTE1926 = x3d.ROUTE()
ROUTE1926.fromField = "value_changed"
ROUTE1926.fromNode = "Stop_r_carpometacarpal_3_RotationInterpolator"
ROUTE1926.toField = "set_rotation"
ROUTE1926.toNode = "hanim_r_carpometacarpal_3"

Group1496.children.append(ROUTE1926)
ROUTE1927 = x3d.ROUTE()
ROUTE1927.fromField = "value_changed"
ROUTE1927.fromNode = "Stop_r_carpometacarpal_3_RotationInterpolator"
ROUTE1927.toField = "set_rotation"
ROUTE1927.toNode = "hanim_r_metacarpophalangeal_3"

Group1496.children.append(ROUTE1927)
ROUTE1928 = x3d.ROUTE()
ROUTE1928.fromField = "value_changed"
ROUTE1928.fromNode = "Stop_r_carpal_proximal_interphalangeal_3_RotationInterpolator"
ROUTE1928.toField = "set_rotation"
ROUTE1928.toNode = "hanim_r_carpal_proximal_interphalangeal_3"

Group1496.children.append(ROUTE1928)
ROUTE1929 = x3d.ROUTE()
ROUTE1929.fromField = "value_changed"
ROUTE1929.fromNode = "Stop_r_carpal_distal_interphalangeal_3_RotationInterpolator"
ROUTE1929.toField = "set_rotation"
ROUTE1929.toNode = "hanim_r_carpal_distal_interphalangeal_3"

Group1496.children.append(ROUTE1929)
ROUTE1930 = x3d.ROUTE()
ROUTE1930.fromField = "value_changed"
ROUTE1930.fromNode = "Stop_r_midcarpal_4_5_RotationInterpolator"
ROUTE1930.toField = "set_rotation"
ROUTE1930.toNode = "hanim_r_midcarpal_4_5"

Group1496.children.append(ROUTE1930)
ROUTE1931 = x3d.ROUTE()
ROUTE1931.fromField = "value_changed"
ROUTE1931.fromNode = "Stop_r_carpometacarpal_4_RotationInterpolator"
ROUTE1931.toField = "set_rotation"
ROUTE1931.toNode = "hanim_r_carpometacarpal_4"

Group1496.children.append(ROUTE1931)
ROUTE1932 = x3d.ROUTE()
ROUTE1932.fromField = "value_changed"
ROUTE1932.fromNode = "Stop_r_metacarpophalangeal_4_RotationInterpolator"
ROUTE1932.toField = "set_rotation"
ROUTE1932.toNode = "hanim_r_metacarpophalangeal_4"

Group1496.children.append(ROUTE1932)
ROUTE1933 = x3d.ROUTE()
ROUTE1933.fromField = "value_changed"
ROUTE1933.fromNode = "Stop_r_carpal_proximal_interphalangeal_4_RotationInterpolator"
ROUTE1933.toField = "set_rotation"
ROUTE1933.toNode = "hanim_r_carpal_proximal_interphalangeal_4"

Group1496.children.append(ROUTE1933)
ROUTE1934 = x3d.ROUTE()
ROUTE1934.fromField = "value_changed"
ROUTE1934.fromNode = "Stop_r_carpal_distal_interphalangeal_4_RotationInterpolator"
ROUTE1934.toField = "set_rotation"
ROUTE1934.toNode = "hanim_r_carpal_distal_interphalangeal_4"

Group1496.children.append(ROUTE1934)
ROUTE1935 = x3d.ROUTE()
ROUTE1935.fromField = "value_changed"
ROUTE1935.fromNode = "Stop_r_carpometacarpal_5_RotationInterpolator"
ROUTE1935.toField = "set_rotation"
ROUTE1935.toNode = "hanim_r_carpometacarpal_5"

Group1496.children.append(ROUTE1935)
ROUTE1936 = x3d.ROUTE()
ROUTE1936.fromField = "value_changed"
ROUTE1936.fromNode = "Stop_r_metacarpophalangeal_5_RotationInterpolator"
ROUTE1936.toField = "set_rotation"
ROUTE1936.toNode = "hanim_r_metacarpophalangeal_5"

Group1496.children.append(ROUTE1936)
ROUTE1937 = x3d.ROUTE()
ROUTE1937.fromField = "value_changed"
ROUTE1937.fromNode = "Stop_r_carpal_proximal_interphalangeal_5_RotationInterpolator"
ROUTE1937.toField = "set_rotation"
ROUTE1937.toNode = "hanim_r_carpal_proximal_interphalangeal_5"

Group1496.children.append(ROUTE1937)
ROUTE1938 = x3d.ROUTE()
ROUTE1938.fromField = "value_changed"
ROUTE1938.fromNode = "Stop_r_carpal_distal_interphalangeal_5_RotationInterpolator"
ROUTE1938.toField = "set_rotation"
ROUTE1938.toNode = "hanim_r_carpal_distal_interphalangeal_5"

Group1496.children.append(ROUTE1938)

Scene22.children.append(Group1496)
Group1939 = x3d.Group()
Group1939.DEF = "StandAnimation"
TimeSensor1940 = x3d.TimeSensor()
TimeSensor1940.DEF = "StandTimer"
TimeSensor1940.cycleInterval = 5.73
TimeSensor1940.loop = True

Group1939.children.append(TimeSensor1940)
OrientationInterpolator1941 = x3d.OrientationInterpolator()
OrientationInterpolator1941.DEF = "Stand_r_metatarsal_PitchInterpolator"
OrientationInterpolator1941.key = [0,0.2,0.4,0.6,0.7,1]

Group1939.children.append(OrientationInterpolator1941)
OrientationInterpolator1942 = x3d.OrientationInterpolator()
OrientationInterpolator1942.DEF = "Stand_r_talocrural_RotationInterpolator"
OrientationInterpolator1942.key = [0,0.5,1]

Group1939.children.append(OrientationInterpolator1942)
OrientationInterpolator1943 = x3d.OrientationInterpolator()
OrientationInterpolator1943.DEF = "Stand_r_knee_RotationInterpolator"
OrientationInterpolator1943.key = [0,0.5,1]

Group1939.children.append(OrientationInterpolator1943)
OrientationInterpolator1944 = x3d.OrientationInterpolator()
OrientationInterpolator1944.DEF = "Stand_r_hip_RotationInterpolator"
OrientationInterpolator1944.key = [0,0.5,1]

Group1939.children.append(OrientationInterpolator1944)
OrientationInterpolator1945 = x3d.OrientationInterpolator()
OrientationInterpolator1945.DEF = "Stand_l_talocrural_RotationInterpolator"
OrientationInterpolator1945.key = [0,0.5,1]

Group1939.children.append(OrientationInterpolator1945)
OrientationInterpolator1946 = x3d.OrientationInterpolator()
OrientationInterpolator1946.DEF = "Stand_l_knee_RotationInterpolator"
OrientationInterpolator1946.key = [0,0.5,1]

Group1939.children.append(OrientationInterpolator1946)
OrientationInterpolator1947 = x3d.OrientationInterpolator()
OrientationInterpolator1947.DEF = "Stand_l_hip_RotationInterpolator"
OrientationInterpolator1947.key = [0,0.5,1]

Group1939.children.append(OrientationInterpolator1947)
OrientationInterpolator1948 = x3d.OrientationInterpolator()
OrientationInterpolator1948.DEF = "Stand_r_radiocarpal_RotationInterpolator"
OrientationInterpolator1948.key = [0,0.5,1]

Group1939.children.append(OrientationInterpolator1948)
OrientationInterpolator1949 = x3d.OrientationInterpolator()
OrientationInterpolator1949.DEF = "Stand_r_elbow_RotationInterpolator"
OrientationInterpolator1949.key = [0,0.5,1]

Group1939.children.append(OrientationInterpolator1949)
OrientationInterpolator1950 = x3d.OrientationInterpolator()
OrientationInterpolator1950.DEF = "Stand_r_shoulder_RotationInterpolator"
OrientationInterpolator1950.key = [0,0.5,1]

Group1939.children.append(OrientationInterpolator1950)
OrientationInterpolator1951 = x3d.OrientationInterpolator()
OrientationInterpolator1951.DEF = "Stand_l_radiocarpal_RotationInterpolator"
OrientationInterpolator1951.key = [0,0.5,1]

Group1939.children.append(OrientationInterpolator1951)
OrientationInterpolator1952 = x3d.OrientationInterpolator()
OrientationInterpolator1952.DEF = "Stand_l_elbow_RotationInterpolator"
OrientationInterpolator1952.key = [0,0.5,1]

Group1939.children.append(OrientationInterpolator1952)
OrientationInterpolator1953 = x3d.OrientationInterpolator()
OrientationInterpolator1953.DEF = "Stand_l_shoulder_RotationInterpolator"
OrientationInterpolator1953.key = [0,0.5,1]

Group1939.children.append(OrientationInterpolator1953)
OrientationInterpolator1954 = x3d.OrientationInterpolator()
OrientationInterpolator1954.DEF = "Stand_head_RotationInterpolator"
OrientationInterpolator1954.key = [0,0.5,1]

Group1939.children.append(OrientationInterpolator1954)
OrientationInterpolator1955 = x3d.OrientationInterpolator()
OrientationInterpolator1955.DEF = "Stand_neck_RotationInterpolator"
OrientationInterpolator1955.key = [0,0.5,1]

Group1939.children.append(OrientationInterpolator1955)
OrientationInterpolator1956 = x3d.OrientationInterpolator()
OrientationInterpolator1956.DEF = "Stand_l_eyeball_RotationInterpolator"
OrientationInterpolator1956.key = [0,0.4,0.7,1]

Group1939.children.append(OrientationInterpolator1956)
OrientationInterpolator1957 = x3d.OrientationInterpolator()
OrientationInterpolator1957.DEF = "Stand_r_eyeball_RotationInterpolator"
OrientationInterpolator1957.key = [0,0.4,0.7,1]

Group1939.children.append(OrientationInterpolator1957)
OrientationInterpolator1958 = x3d.OrientationInterpolator()
OrientationInterpolator1958.DEF = "Stand_lower_body_RotationInterpolator"
OrientationInterpolator1958.key = [0,0.5,1]

Group1939.children.append(OrientationInterpolator1958)
OrientationInterpolator1959 = x3d.OrientationInterpolator()
OrientationInterpolator1959.DEF = "Stand_upper_body_RotationInterpolator"
OrientationInterpolator1959.key = [0,0.5,1]

Group1939.children.append(OrientationInterpolator1959)
OrientationInterpolator1960 = x3d.OrientationInterpolator()
OrientationInterpolator1960.DEF = "Stand_whole_body_RotationInterpolator"
OrientationInterpolator1960.key = [0,0.5,1]

Group1939.children.append(OrientationInterpolator1960)
PositionInterpolator1961 = x3d.PositionInterpolator()
PositionInterpolator1961.DEF = "Stand_whole_body_TranslationInterpolator"
PositionInterpolator1961.key = [0,0.5,1]

Group1939.children.append(PositionInterpolator1961)
OrientationInterpolator1962 = x3d.OrientationInterpolator()
OrientationInterpolator1962.DEF = "Stand_l_sternoclavicular_RollInterpolator"
OrientationInterpolator1962.key = [0,0.2,0.4,0.6,0.8,1]

Group1939.children.append(OrientationInterpolator1962)
OrientationInterpolator1963 = x3d.OrientationInterpolator()
OrientationInterpolator1963.DEF = "Stand_l_acromioclavicular_RollInterpolator"
OrientationInterpolator1963.key = [0,0.2,0.4,0.6,0.8,1]

Group1939.children.append(OrientationInterpolator1963)
OrientationInterpolator1964 = x3d.OrientationInterpolator()
OrientationInterpolator1964.DEF = "Stand_r_sternoclavicular_RollInterpolator"
OrientationInterpolator1964.key = [0,0.2,0.4,0.6,0.8,1]

Group1939.children.append(OrientationInterpolator1964)
OrientationInterpolator1965 = x3d.OrientationInterpolator()
OrientationInterpolator1965.DEF = "Stand_r_acromioclavicular_RollInterpolator"
OrientationInterpolator1965.key = [0,0.2,0.4,0.6,0.8,1]

Group1939.children.append(OrientationInterpolator1965)
OrientationInterpolator1966 = x3d.OrientationInterpolator()
OrientationInterpolator1966.DEF = "Stand_sacroiliac_YawInterpolator"
OrientationInterpolator1966.key = [0,0.2,0.4,0.6,0.8,1]

Group1939.children.append(OrientationInterpolator1966)
OrientationInterpolator1967 = x3d.OrientationInterpolator()
OrientationInterpolator1967.DEF = "Stand_vl5_YawInterpolator"
OrientationInterpolator1967.key = [0,0.2,0.4,0.5,0.6,0.8,1]

Group1939.children.append(OrientationInterpolator1967)
OrientationInterpolator1968 = x3d.OrientationInterpolator()
OrientationInterpolator1968.DEF = "Stand_vc6_YawInterpolator"
OrientationInterpolator1968.key = [0,0.2,0.4,0.5,0.6,0.8,1]

Group1939.children.append(OrientationInterpolator1968)
OrientationInterpolator1969 = x3d.OrientationInterpolator()
OrientationInterpolator1969.DEF = "Stand_l_thumb1_PitchInterpolator"
OrientationInterpolator1969.key = [0,0.2,0.4,0.6,0.8,1]

Group1939.children.append(OrientationInterpolator1969)
OrientationInterpolator1970 = x3d.OrientationInterpolator()
OrientationInterpolator1970.DEF = "Stand_r_thumb1_PitchInterpolator"
OrientationInterpolator1970.key = [0,0.2,0.4,0.6,0.8,1]

Group1939.children.append(OrientationInterpolator1970)
OrientationInterpolator1971 = x3d.OrientationInterpolator()
OrientationInterpolator1971.DEF = "Stand_r_index1_RollInterpolator"
OrientationInterpolator1971.key = [0,0.2,0.4,0.5,0.8,1]

Group1939.children.append(OrientationInterpolator1971)
OrientationInterpolator1972 = x3d.OrientationInterpolator()
OrientationInterpolator1972.DEF = "Stand_r_index2_RollInterpolator"
OrientationInterpolator1972.key = [0,0.2,0.4,0.5,0.8,1]

Group1939.children.append(OrientationInterpolator1972)
OrientationInterpolator1973 = x3d.OrientationInterpolator()
OrientationInterpolator1973.DEF = "Stand_r_index3_RollInterpolator"
OrientationInterpolator1973.key = [0,0.2,0.4,0.5,0.8,1]

Group1939.children.append(OrientationInterpolator1973)

Scene22.children.append(Group1939)
Group1974 = x3d.Group()
Group1974.DEF = "PitchesAnimation"
TimeSensor1975 = x3d.TimeSensor()
TimeSensor1975.DEF = "PitchTimer"
TimeSensor1975.cycleInterval = 5.73
TimeSensor1975.loop = True

Group1974.children.append(TimeSensor1975)
OrientationInterpolator1976 = x3d.OrientationInterpolator()
OrientationInterpolator1976.DEF = "Pitch_r_metatarsal_PitchInterpolator"
OrientationInterpolator1976.key = [0,0.2,0.4,0.6,0.7,1]

Group1974.children.append(OrientationInterpolator1976)
OrientationInterpolator1977 = x3d.OrientationInterpolator()
OrientationInterpolator1977.DEF = "Pitches_r_talocrural_RotationInterpolator"
OrientationInterpolator1977.key = [0,0.25,0.5,0.75,1]

Group1974.children.append(OrientationInterpolator1977)
OrientationInterpolator1978 = x3d.OrientationInterpolator()
OrientationInterpolator1978.DEF = "Pitches_r_knee_RotationInterpolator"
OrientationInterpolator1978.key = [0,0.5,1]

Group1974.children.append(OrientationInterpolator1978)
OrientationInterpolator1979 = x3d.OrientationInterpolator()
OrientationInterpolator1979.DEF = "Pitches_r_hip_RotationInterpolator"
OrientationInterpolator1979.key = [0,0.25,0.5,0.75,1]

Group1974.children.append(OrientationInterpolator1979)
OrientationInterpolator1980 = x3d.OrientationInterpolator()
OrientationInterpolator1980.DEF = "Pitches_l_talocrural_RotationInterpolator"
OrientationInterpolator1980.key = [0,0.25,0.5,0.75,1]

Group1974.children.append(OrientationInterpolator1980)
OrientationInterpolator1981 = x3d.OrientationInterpolator()
OrientationInterpolator1981.DEF = "Pitches_l_knee_RotationInterpolator"
OrientationInterpolator1981.key = [0,0.5,1]

Group1974.children.append(OrientationInterpolator1981)
OrientationInterpolator1982 = x3d.OrientationInterpolator()
OrientationInterpolator1982.DEF = "Pitches_l_hip_RotationInterpolator"
OrientationInterpolator1982.key = [0,0.25,0.5,0.75,1]

Group1974.children.append(OrientationInterpolator1982)
OrientationInterpolator1983 = x3d.OrientationInterpolator()
OrientationInterpolator1983.DEF = "Pitches_r_radiocarpal_RotationInterpolator"
OrientationInterpolator1983.key = [0,0.5,1]

Group1974.children.append(OrientationInterpolator1983)
OrientationInterpolator1984 = x3d.OrientationInterpolator()
OrientationInterpolator1984.DEF = "Pitches_r_elbow_RotationInterpolator"
OrientationInterpolator1984.key = [0,0.5,1]

Group1974.children.append(OrientationInterpolator1984)
OrientationInterpolator1985 = x3d.OrientationInterpolator()
OrientationInterpolator1985.DEF = "Pitches_r_shoulder_RotationInterpolator"
OrientationInterpolator1985.key = [0,0.25,0.5,0.75,1]

Group1974.children.append(OrientationInterpolator1985)
OrientationInterpolator1986 = x3d.OrientationInterpolator()
OrientationInterpolator1986.DEF = "Pitches_l_radiocarpal_RotationInterpolator"
OrientationInterpolator1986.key = [0,0.5,1]

Group1974.children.append(OrientationInterpolator1986)
OrientationInterpolator1987 = x3d.OrientationInterpolator()
OrientationInterpolator1987.DEF = "Pitches_l_elbow_RotationInterpolator"
OrientationInterpolator1987.key = [0,0.5,1]

Group1974.children.append(OrientationInterpolator1987)
OrientationInterpolator1988 = x3d.OrientationInterpolator()
OrientationInterpolator1988.DEF = "Pitches_l_shoulder_RotationInterpolator"
OrientationInterpolator1988.key = [0,0.25,0.5,0.75,1]

Group1974.children.append(OrientationInterpolator1988)
OrientationInterpolator1989 = x3d.OrientationInterpolator()
OrientationInterpolator1989.DEF = "Pitches_head_RotationInterpolator"
OrientationInterpolator1989.key = [0,0.5,1]

Group1974.children.append(OrientationInterpolator1989)
OrientationInterpolator1990 = x3d.OrientationInterpolator()
OrientationInterpolator1990.DEF = "Pitches_neck_RotationInterpolator"
OrientationInterpolator1990.key = [0,0.25,0.55,1]

Group1974.children.append(OrientationInterpolator1990)
OrientationInterpolator1991 = x3d.OrientationInterpolator()
OrientationInterpolator1991.DEF = "Pitches_lower_body_RotationInterpolator"
OrientationInterpolator1991.key = [0,0.5,1]

Group1974.children.append(OrientationInterpolator1991)
OrientationInterpolator1992 = x3d.OrientationInterpolator()
OrientationInterpolator1992.DEF = "Pitches_upper_body_RotationInterpolator"
OrientationInterpolator1992.key = [0,0.5,1]

Group1974.children.append(OrientationInterpolator1992)
OrientationInterpolator1993 = x3d.OrientationInterpolator()
OrientationInterpolator1993.DEF = "Pitches_whole_body_RotationInterpolator"
OrientationInterpolator1993.key = [0,0.5,1]

Group1974.children.append(OrientationInterpolator1993)
PositionInterpolator1994 = x3d.PositionInterpolator()
PositionInterpolator1994.DEF = "Pitches_whole_body_TranslationInterpolator"
PositionInterpolator1994.key = [0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]

Group1974.children.append(PositionInterpolator1994)
OrientationInterpolator1995 = x3d.OrientationInterpolator()
OrientationInterpolator1995.DEF = "Pitch_l_sternoclavicular_RollInterpolator"
OrientationInterpolator1995.key = [0,0.2,0.4,0.6,0.8,1]

Group1974.children.append(OrientationInterpolator1995)
OrientationInterpolator1996 = x3d.OrientationInterpolator()
OrientationInterpolator1996.DEF = "Pitch_l_acromioclavicular_RollInterpolator"
OrientationInterpolator1996.key = [0,0.2,0.4,0.6,0.8,1]

Group1974.children.append(OrientationInterpolator1996)
OrientationInterpolator1997 = x3d.OrientationInterpolator()
OrientationInterpolator1997.DEF = "Pitch_r_sternoclavicular_RollInterpolator"
OrientationInterpolator1997.key = [0,0.2,0.4,0.6,0.8,1]

Group1974.children.append(OrientationInterpolator1997)
OrientationInterpolator1998 = x3d.OrientationInterpolator()
OrientationInterpolator1998.DEF = "Pitch_r_acromioclavicular_RollInterpolator"
OrientationInterpolator1998.key = [0,0.2,0.4,0.6,0.8,1]

Group1974.children.append(OrientationInterpolator1998)
OrientationInterpolator1999 = x3d.OrientationInterpolator()
OrientationInterpolator1999.DEF = "Pitch_sacroiliac_YawInterpolator"
OrientationInterpolator1999.key = [0,0.2,0.4,0.6,0.8,1]

Group1974.children.append(OrientationInterpolator1999)
OrientationInterpolator2000 = x3d.OrientationInterpolator()
OrientationInterpolator2000.DEF = "Pitch_vl5_YawInterpolator"
OrientationInterpolator2000.key = [0,0.2,0.4,0.5,0.6,0.8,1]

Group1974.children.append(OrientationInterpolator2000)
OrientationInterpolator2001 = x3d.OrientationInterpolator()
OrientationInterpolator2001.DEF = "Pitch_vc6_YawInterpolator"
OrientationInterpolator2001.key = [0,0.2,0.4,0.5,0.6,0.8,1]

Group1974.children.append(OrientationInterpolator2001)
OrientationInterpolator2002 = x3d.OrientationInterpolator()
OrientationInterpolator2002.DEF = "Pitch_l_thumb1_PitchInterpolator"
OrientationInterpolator2002.key = [0,0.2,0.4,0.6,0.8,1]

Group1974.children.append(OrientationInterpolator2002)
OrientationInterpolator2003 = x3d.OrientationInterpolator()
OrientationInterpolator2003.DEF = "Pitch_r_thumb1_PitchInterpolator"
OrientationInterpolator2003.key = [0,0.2,0.4,0.6,0.8,1]

Group1974.children.append(OrientationInterpolator2003)

Scene22.children.append(Group1974)
Group2004 = x3d.Group()
Group2004.DEF = "YawsAnimation"
TimeSensor2005 = x3d.TimeSensor()
TimeSensor2005.DEF = "YawTimer"
TimeSensor2005.cycleInterval = 5.73
TimeSensor2005.loop = True

Group2004.children.append(TimeSensor2005)
OrientationInterpolator2006 = x3d.OrientationInterpolator()
OrientationInterpolator2006.DEF = "Yaw_r_metatarsal_PitchInterpolator"
OrientationInterpolator2006.key = [0,0.2,0.4,0.6,0.7,1]

Group2004.children.append(OrientationInterpolator2006)
OrientationInterpolator2007 = x3d.OrientationInterpolator()
OrientationInterpolator2007.DEF = "Yaws_r_talocrural_RotationInterpolator"
OrientationInterpolator2007.key = [0,0.25,0.5,0.75,1]

Group2004.children.append(OrientationInterpolator2007)
OrientationInterpolator2008 = x3d.OrientationInterpolator()
OrientationInterpolator2008.DEF = "Yaws_r_knee_RotationInterpolator"
OrientationInterpolator2008.key = [0,0.25,0.5,0.75,1]

Group2004.children.append(OrientationInterpolator2008)
OrientationInterpolator2009 = x3d.OrientationInterpolator()
OrientationInterpolator2009.DEF = "Yaws_r_hip_RotationInterpolator"
OrientationInterpolator2009.key = [0,0.5,1]

Group2004.children.append(OrientationInterpolator2009)
OrientationInterpolator2010 = x3d.OrientationInterpolator()
OrientationInterpolator2010.DEF = "Yaws_l_talocrural_RotationInterpolator"
OrientationInterpolator2010.key = [0,0.25,0.5,0.75,1]

Group2004.children.append(OrientationInterpolator2010)
OrientationInterpolator2011 = x3d.OrientationInterpolator()
OrientationInterpolator2011.DEF = "Yaws_l_knee_RotationInterpolator"
OrientationInterpolator2011.key = [0,0.25,0.5,0.75,1]

Group2004.children.append(OrientationInterpolator2011)
OrientationInterpolator2012 = x3d.OrientationInterpolator()
OrientationInterpolator2012.DEF = "Yaws_l_hip_RotationInterpolator"
OrientationInterpolator2012.key = [0,0.5,1]

Group2004.children.append(OrientationInterpolator2012)
OrientationInterpolator2013 = x3d.OrientationInterpolator()
OrientationInterpolator2013.DEF = "Yaws_r_radiocarpal_RotationInterpolator"
OrientationInterpolator2013.key = [0,0.5,1]

Group2004.children.append(OrientationInterpolator2013)
OrientationInterpolator2014 = x3d.OrientationInterpolator()
OrientationInterpolator2014.DEF = "Yaws_r_elbow_RotationInterpolator"
OrientationInterpolator2014.key = [0,0.5,1]

Group2004.children.append(OrientationInterpolator2014)
OrientationInterpolator2015 = x3d.OrientationInterpolator()
OrientationInterpolator2015.DEF = "Yaws_r_shoulder_RotationInterpolator"
OrientationInterpolator2015.key = [0,0.5,1]

Group2004.children.append(OrientationInterpolator2015)
OrientationInterpolator2016 = x3d.OrientationInterpolator()
OrientationInterpolator2016.DEF = "Yaws_l_radiocarpal_RotationInterpolator"
OrientationInterpolator2016.key = [0,0.5,1]

Group2004.children.append(OrientationInterpolator2016)
OrientationInterpolator2017 = x3d.OrientationInterpolator()
OrientationInterpolator2017.DEF = "Yaws_l_elbow_RotationInterpolator"
OrientationInterpolator2017.key = [0,0.5,1]

Group2004.children.append(OrientationInterpolator2017)
OrientationInterpolator2018 = x3d.OrientationInterpolator()
OrientationInterpolator2018.DEF = "Yaws_l_shoulder_RotationInterpolator"
OrientationInterpolator2018.key = [0,0.5,1]

Group2004.children.append(OrientationInterpolator2018)
OrientationInterpolator2019 = x3d.OrientationInterpolator()
OrientationInterpolator2019.DEF = "Yaws_head_RotationInterpolator"
OrientationInterpolator2019.key = [0,0.5,1]

Group2004.children.append(OrientationInterpolator2019)
OrientationInterpolator2020 = x3d.OrientationInterpolator()
OrientationInterpolator2020.DEF = "Yaws_neck_RotationInterpolator"
OrientationInterpolator2020.key = [0,0.25,0.5,0.75,1]

Group2004.children.append(OrientationInterpolator2020)
OrientationInterpolator2021 = x3d.OrientationInterpolator()
OrientationInterpolator2021.DEF = "Yaws_upper_body_RotationInterpolator"
OrientationInterpolator2021.key = [0,0.25,0.5,0.75,1]

Group2004.children.append(OrientationInterpolator2021)
OrientationInterpolator2022 = x3d.OrientationInterpolator()
OrientationInterpolator2022.DEF = "Yaws_lower_body_RotationInterpolator"
OrientationInterpolator2022.key = [0,0.5,1]

Group2004.children.append(OrientationInterpolator2022)
OrientationInterpolator2023 = x3d.OrientationInterpolator()
OrientationInterpolator2023.DEF = "Yaws_whole_body_RotationInterpolator"
OrientationInterpolator2023.key = [0,0.5,1]

Group2004.children.append(OrientationInterpolator2023)
PositionInterpolator2024 = x3d.PositionInterpolator()
PositionInterpolator2024.DEF = "Yaws_whole_body_TranslationInterpolator"
PositionInterpolator2024.key = [0,0.5,1]

Group2004.children.append(PositionInterpolator2024)
OrientationInterpolator2025 = x3d.OrientationInterpolator()
OrientationInterpolator2025.DEF = "Yaw_l_sternoclavicular_RollInterpolator"
OrientationInterpolator2025.key = [0,0.2,0.4,0.6,0.8,1]

Group2004.children.append(OrientationInterpolator2025)
OrientationInterpolator2026 = x3d.OrientationInterpolator()
OrientationInterpolator2026.DEF = "Yaw_l_acromioclavicular_RollInterpolator"
OrientationInterpolator2026.key = [0,0.2,0.4,0.6,0.8,1]

Group2004.children.append(OrientationInterpolator2026)
OrientationInterpolator2027 = x3d.OrientationInterpolator()
OrientationInterpolator2027.DEF = "Yaw_r_sternoclavicular_RollInterpolator"
OrientationInterpolator2027.key = [0,0.2,0.4,0.6,0.8,1]

Group2004.children.append(OrientationInterpolator2027)
OrientationInterpolator2028 = x3d.OrientationInterpolator()
OrientationInterpolator2028.DEF = "Yaw_r_acromioclavicular_RollInterpolator"
OrientationInterpolator2028.key = [0,0.2,0.4,0.6,0.8,1]

Group2004.children.append(OrientationInterpolator2028)
OrientationInterpolator2029 = x3d.OrientationInterpolator()
OrientationInterpolator2029.DEF = "Yaw_sacroiliac_YawInterpolator"
OrientationInterpolator2029.key = [0,0.2,0.4,0.6,0.8,1]

Group2004.children.append(OrientationInterpolator2029)
OrientationInterpolator2030 = x3d.OrientationInterpolator()
OrientationInterpolator2030.DEF = "Yaw_vl5_YawInterpolator"
OrientationInterpolator2030.key = [0,0.2,0.4,0.5,0.6,0.8,1]

Group2004.children.append(OrientationInterpolator2030)
OrientationInterpolator2031 = x3d.OrientationInterpolator()
OrientationInterpolator2031.DEF = "Yaw_vc6_YawInterpolator"
OrientationInterpolator2031.key = [0,0.2,0.4,0.5,0.6,0.8,1]

Group2004.children.append(OrientationInterpolator2031)
OrientationInterpolator2032 = x3d.OrientationInterpolator()
OrientationInterpolator2032.DEF = "Yaw_l_thumb1_PitchInterpolator"
OrientationInterpolator2032.key = [0,0.2,0.4,0.6,0.8,1]

Group2004.children.append(OrientationInterpolator2032)
OrientationInterpolator2033 = x3d.OrientationInterpolator()
OrientationInterpolator2033.DEF = "Yaw_r_thumb1_PitchInterpolator"
OrientationInterpolator2033.key = [0,0.2,0.4,0.6,0.8,1]

Group2004.children.append(OrientationInterpolator2033)

Scene22.children.append(Group2004)
Group2034 = x3d.Group()
Group2034.DEF = "RollsAnimation"
TimeSensor2035 = x3d.TimeSensor()
TimeSensor2035.DEF = "RollTimer"
TimeSensor2035.cycleInterval = 5.73
TimeSensor2035.loop = True

Group2034.children.append(TimeSensor2035)
OrientationInterpolator2036 = x3d.OrientationInterpolator()
OrientationInterpolator2036.DEF = "Roll_r_metatarsal_PitchInterpolator"
OrientationInterpolator2036.key = [0,0.2,0.4,0.6,0.7,1]

Group2034.children.append(OrientationInterpolator2036)
OrientationInterpolator2037 = x3d.OrientationInterpolator()
OrientationInterpolator2037.DEF = "Rolls_r_talocrural_RotationInterpolator"
OrientationInterpolator2037.key = [0,0.25,0.5,0.75,1]

Group2034.children.append(OrientationInterpolator2037)
OrientationInterpolator2038 = x3d.OrientationInterpolator()
OrientationInterpolator2038.DEF = "Rolls_r_knee_RotationInterpolator"
OrientationInterpolator2038.key = [0,0.5,1]

Group2034.children.append(OrientationInterpolator2038)
OrientationInterpolator2039 = x3d.OrientationInterpolator()
OrientationInterpolator2039.DEF = "Rolls_r_hip_RotationInterpolator"
OrientationInterpolator2039.key = [0,0.25,0.5,0.75,1]

Group2034.children.append(OrientationInterpolator2039)
OrientationInterpolator2040 = x3d.OrientationInterpolator()
OrientationInterpolator2040.DEF = "Rolls_l_talocrural_RotationInterpolator"
OrientationInterpolator2040.key = [0,0.25,0.5,0.75,1]

Group2034.children.append(OrientationInterpolator2040)
OrientationInterpolator2041 = x3d.OrientationInterpolator()
OrientationInterpolator2041.DEF = "Rolls_l_knee_RotationInterpolator"
OrientationInterpolator2041.key = [0,0.5,1]

Group2034.children.append(OrientationInterpolator2041)
OrientationInterpolator2042 = x3d.OrientationInterpolator()
OrientationInterpolator2042.DEF = "Rolls_l_hip_RotationInterpolator"
OrientationInterpolator2042.key = [0,0.25,0.5,0.75,1]

Group2034.children.append(OrientationInterpolator2042)
OrientationInterpolator2043 = x3d.OrientationInterpolator()
OrientationInterpolator2043.DEF = "Rolls_r_radiocarpal_RotationInterpolator"
OrientationInterpolator2043.key = [0,0.25,0.5,0.75,1]

Group2034.children.append(OrientationInterpolator2043)
OrientationInterpolator2044 = x3d.OrientationInterpolator()
OrientationInterpolator2044.DEF = "Rolls_r_elbow_RotationInterpolator"
OrientationInterpolator2044.key = [0,0.5,1]

Group2034.children.append(OrientationInterpolator2044)
OrientationInterpolator2045 = x3d.OrientationInterpolator()
OrientationInterpolator2045.DEF = "Rolls_r_shoulder_RotationInterpolator"
OrientationInterpolator2045.key = [0,0.25,0.5,0.75,1]

Group2034.children.append(OrientationInterpolator2045)
OrientationInterpolator2046 = x3d.OrientationInterpolator()
OrientationInterpolator2046.DEF = "Rolls_l_radiocarpal_RotationInterpolator"
OrientationInterpolator2046.key = [0,0.25,0.5,0.75,1]

Group2034.children.append(OrientationInterpolator2046)
OrientationInterpolator2047 = x3d.OrientationInterpolator()
OrientationInterpolator2047.DEF = "Rolls_l_elbow_RotationInterpolator"
OrientationInterpolator2047.key = [0,0.5,1]

Group2034.children.append(OrientationInterpolator2047)
OrientationInterpolator2048 = x3d.OrientationInterpolator()
OrientationInterpolator2048.DEF = "Rolls_l_shoulder_RotationInterpolator"
OrientationInterpolator2048.key = [0,0.25,0.5,0.75,1]

Group2034.children.append(OrientationInterpolator2048)
OrientationInterpolator2049 = x3d.OrientationInterpolator()
OrientationInterpolator2049.DEF = "Rolls_head_RotationInterpolator"
OrientationInterpolator2049.key = [0,0.5,1]

Group2034.children.append(OrientationInterpolator2049)
OrientationInterpolator2050 = x3d.OrientationInterpolator()
OrientationInterpolator2050.DEF = "Rolls_neck_RotationInterpolator"
OrientationInterpolator2050.key = [0,0.25,0.5,0.75,1]

Group2034.children.append(OrientationInterpolator2050)
OrientationInterpolator2051 = x3d.OrientationInterpolator()
OrientationInterpolator2051.DEF = "Rolls_lower_body_RotationInterpolator"
OrientationInterpolator2051.key = [0,0.5,1]

Group2034.children.append(OrientationInterpolator2051)
OrientationInterpolator2052 = x3d.OrientationInterpolator()
OrientationInterpolator2052.DEF = "Rolls_upper_body_RotationInterpolator"
OrientationInterpolator2052.key = [0,0.5,1]

Group2034.children.append(OrientationInterpolator2052)
OrientationInterpolator2053 = x3d.OrientationInterpolator()
OrientationInterpolator2053.DEF = "Rolls_whole_body_RotationInterpolator"
OrientationInterpolator2053.key = [0,0.5,1]

Group2034.children.append(OrientationInterpolator2053)
PositionInterpolator2054 = x3d.PositionInterpolator()
PositionInterpolator2054.DEF = "Rolls_whole_body_TranslationInterpolator"
PositionInterpolator2054.key = [0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]

Group2034.children.append(PositionInterpolator2054)
OrientationInterpolator2055 = x3d.OrientationInterpolator()
OrientationInterpolator2055.DEF = "Roll_l_sternoclavicular_RollInterpolator"
OrientationInterpolator2055.key = [0,0.2,0.4,0.6,0.8,1]

Group2034.children.append(OrientationInterpolator2055)
OrientationInterpolator2056 = x3d.OrientationInterpolator()
OrientationInterpolator2056.DEF = "Roll_l_acromioclavicular_RollInterpolator"
OrientationInterpolator2056.key = [0,0.2,0.4,0.6,0.8,1]

Group2034.children.append(OrientationInterpolator2056)
OrientationInterpolator2057 = x3d.OrientationInterpolator()
OrientationInterpolator2057.DEF = "Roll_r_sternoclavicular_RollInterpolator"
OrientationInterpolator2057.key = [0,0.2,0.4,0.6,0.8,1]

Group2034.children.append(OrientationInterpolator2057)
OrientationInterpolator2058 = x3d.OrientationInterpolator()
OrientationInterpolator2058.DEF = "Roll_r_acromioclavicular_RollInterpolator"
OrientationInterpolator2058.key = [0,0.2,0.4,0.6,0.8,1]

Group2034.children.append(OrientationInterpolator2058)
OrientationInterpolator2059 = x3d.OrientationInterpolator()
OrientationInterpolator2059.DEF = "Roll_sacroiliac_YawInterpolator"
OrientationInterpolator2059.key = [0,0.2,0.4,0.6,0.8,1]

Group2034.children.append(OrientationInterpolator2059)
OrientationInterpolator2060 = x3d.OrientationInterpolator()
OrientationInterpolator2060.DEF = "Roll_vl5_YawInterpolator"
OrientationInterpolator2060.key = [0,0.2,0.4,0.5,0.6,0.8,1]

Group2034.children.append(OrientationInterpolator2060)
OrientationInterpolator2061 = x3d.OrientationInterpolator()
OrientationInterpolator2061.DEF = "Roll_vc6_YawInterpolator"
OrientationInterpolator2061.key = [0,0.2,0.4,0.5,0.6,0.8,1]

Group2034.children.append(OrientationInterpolator2061)
OrientationInterpolator2062 = x3d.OrientationInterpolator()
OrientationInterpolator2062.DEF = "Roll_l_thumb1_PitchInterpolator"
OrientationInterpolator2062.key = [0,0.2,0.4,0.6,0.8,1]

Group2034.children.append(OrientationInterpolator2062)
OrientationInterpolator2063 = x3d.OrientationInterpolator()
OrientationInterpolator2063.DEF = "Roll_r_thumb1_PitchInterpolator"
OrientationInterpolator2063.key = [0,0.2,0.4,0.6,0.8,1]

Group2034.children.append(OrientationInterpolator2063)

Scene22.children.append(Group2034)
Group2064 = x3d.Group()
Group2064.DEF = "WalkAnimation"
TimeSensor2065 = x3d.TimeSensor()
TimeSensor2065.DEF = "WalkTimer"
TimeSensor2065.cycleInterval = 1.73
TimeSensor2065.loop = True

Group2064.children.append(TimeSensor2065)
OrientationInterpolator2066 = x3d.OrientationInterpolator()
OrientationInterpolator2066.DEF = "Walk_r_metatarsal_PitchInterpolator"
OrientationInterpolator2066.key = [0,0.2,0.4,0.6,0.7,1]

Group2064.children.append(OrientationInterpolator2066)
OrientationInterpolator2067 = x3d.OrientationInterpolator()
OrientationInterpolator2067.DEF = "Walk_r_talocrural_RotationInterpolator"
OrientationInterpolator2067.key = [0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]

Group2064.children.append(OrientationInterpolator2067)
OrientationInterpolator2068 = x3d.OrientationInterpolator()
OrientationInterpolator2068.DEF = "Walk_r_knee_RotationInterpolator"
OrientationInterpolator2068.key = [0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]

Group2064.children.append(OrientationInterpolator2068)
OrientationInterpolator2069 = x3d.OrientationInterpolator()
OrientationInterpolator2069.DEF = "Walk_r_hip_RotationInterpolator"
OrientationInterpolator2069.key = [0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]

Group2064.children.append(OrientationInterpolator2069)
OrientationInterpolator2070 = x3d.OrientationInterpolator()
OrientationInterpolator2070.DEF = "Walk_l_talocrural_RotationInterpolator"
OrientationInterpolator2070.key = [0,0.125,0.2083,0.375,0.6667,0.9167,1]

Group2064.children.append(OrientationInterpolator2070)
OrientationInterpolator2071 = x3d.OrientationInterpolator()
OrientationInterpolator2071.DEF = "Walk_l_knee_RotationInterpolator"
OrientationInterpolator2071.key = [0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]

Group2064.children.append(OrientationInterpolator2071)
OrientationInterpolator2072 = x3d.OrientationInterpolator()
OrientationInterpolator2072.DEF = "Walk_l_hip_RotationInterpolator"
OrientationInterpolator2072.key = [0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]

Group2064.children.append(OrientationInterpolator2072)
OrientationInterpolator2073 = x3d.OrientationInterpolator()
OrientationInterpolator2073.DEF = "Walk_lower_body_RotationInterpolator"
OrientationInterpolator2073.key = [0,0.5,1]

Group2064.children.append(OrientationInterpolator2073)
OrientationInterpolator2074 = x3d.OrientationInterpolator()
OrientationInterpolator2074.DEF = "Walk_r_radiocarpal_RotationInterpolator"
OrientationInterpolator2074.key = [0,0.375,0.9167,1]

Group2064.children.append(OrientationInterpolator2074)
OrientationInterpolator2075 = x3d.OrientationInterpolator()
OrientationInterpolator2075.DEF = "Walk_r_elbow_RotationInterpolator"
OrientationInterpolator2075.key = [0,0.375,0.9167,1]

Group2064.children.append(OrientationInterpolator2075)
OrientationInterpolator2076 = x3d.OrientationInterpolator()
OrientationInterpolator2076.DEF = "Walk_r_shoulder_RotationInterpolator"
OrientationInterpolator2076.key = [0,0.375,0.9167,1]

Group2064.children.append(OrientationInterpolator2076)
OrientationInterpolator2077 = x3d.OrientationInterpolator()
OrientationInterpolator2077.DEF = "Walk_l_radiocarpal_RotationInterpolator"
OrientationInterpolator2077.key = [0,0.375,0.9167,1]

Group2064.children.append(OrientationInterpolator2077)
OrientationInterpolator2078 = x3d.OrientationInterpolator()
OrientationInterpolator2078.DEF = "Walk_l_elbow_RotationInterpolator"
OrientationInterpolator2078.key = [0,0.375,0.9167,1]

Group2064.children.append(OrientationInterpolator2078)
OrientationInterpolator2079 = x3d.OrientationInterpolator()
OrientationInterpolator2079.DEF = "Walk_l_shoulder_RotationInterpolator"
OrientationInterpolator2079.key = [0,0.375,0.9167,1]

Group2064.children.append(OrientationInterpolator2079)
OrientationInterpolator2080 = x3d.OrientationInterpolator()
OrientationInterpolator2080.DEF = "Walk_head_RotationInterpolator"
OrientationInterpolator2080.key = [0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]

Group2064.children.append(OrientationInterpolator2080)
OrientationInterpolator2081 = x3d.OrientationInterpolator()
OrientationInterpolator2081.DEF = "Walk_neck_RotationInterpolator"
OrientationInterpolator2081.key = [0,1]

Group2064.children.append(OrientationInterpolator2081)
OrientationInterpolator2082 = x3d.OrientationInterpolator()
OrientationInterpolator2082.DEF = "Walk_upper_body_RotationInterpolator"
OrientationInterpolator2082.key = [0,0.2083,0.375,0.75,0.8333,1]

Group2064.children.append(OrientationInterpolator2082)
OrientationInterpolator2083 = x3d.OrientationInterpolator()
OrientationInterpolator2083.DEF = "Walk_whole_body_RotationInterpolator"
OrientationInterpolator2083.key = [0,1]

Group2064.children.append(OrientationInterpolator2083)
PositionInterpolator2084 = x3d.PositionInterpolator()
PositionInterpolator2084.DEF = "Walk_whole_body_TranslationInterpolator"
PositionInterpolator2084.key = [0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]

Group2064.children.append(PositionInterpolator2084)
OrientationInterpolator2085 = x3d.OrientationInterpolator()
OrientationInterpolator2085.DEF = "Walk_l_sternoclavicular_RollInterpolator"
OrientationInterpolator2085.key = [0,0.2,0.4,0.6,0.8,1]

Group2064.children.append(OrientationInterpolator2085)
OrientationInterpolator2086 = x3d.OrientationInterpolator()
OrientationInterpolator2086.DEF = "Walk_l_acromioclavicular_RollInterpolator"
OrientationInterpolator2086.key = [0,0.2,0.4,0.6,0.8,1]

Group2064.children.append(OrientationInterpolator2086)
OrientationInterpolator2087 = x3d.OrientationInterpolator()
OrientationInterpolator2087.DEF = "Walk_r_sternoclavicular_RollInterpolator"
OrientationInterpolator2087.key = [0,0.2,0.4,0.6,0.8,1]

Group2064.children.append(OrientationInterpolator2087)
OrientationInterpolator2088 = x3d.OrientationInterpolator()
OrientationInterpolator2088.DEF = "Walk_r_acromioclavicular_RollInterpolator"
OrientationInterpolator2088.key = [0,0.2,0.4,0.6,0.8,1]

Group2064.children.append(OrientationInterpolator2088)
OrientationInterpolator2089 = x3d.OrientationInterpolator()
OrientationInterpolator2089.DEF = "Walk_sacroiliac_YawInterpolator"
OrientationInterpolator2089.key = [0,0.2,0.4,0.6,0.8,1]

Group2064.children.append(OrientationInterpolator2089)
OrientationInterpolator2090 = x3d.OrientationInterpolator()
OrientationInterpolator2090.DEF = "Walk_vl5_YawInterpolator"
OrientationInterpolator2090.key = [0,0.2,0.4,0.5,0.6,0.8,1]

Group2064.children.append(OrientationInterpolator2090)
OrientationInterpolator2091 = x3d.OrientationInterpolator()
OrientationInterpolator2091.DEF = "Walk_vc6_YawInterpolator"
OrientationInterpolator2091.key = [0,0.2,0.4,0.5,0.6,0.8,1]

Group2064.children.append(OrientationInterpolator2091)
OrientationInterpolator2092 = x3d.OrientationInterpolator()
OrientationInterpolator2092.DEF = "Walk_l_thumb1_PitchInterpolator"
OrientationInterpolator2092.key = [0,0.2,0.4,0.6,0.8,1]

Group2064.children.append(OrientationInterpolator2092)
OrientationInterpolator2093 = x3d.OrientationInterpolator()
OrientationInterpolator2093.DEF = "Walk_r_thumb1_PitchInterpolator"
OrientationInterpolator2093.key = [0,0.2,0.4,0.6,0.8,1]

Group2064.children.append(OrientationInterpolator2093)

Scene22.children.append(Group2064)
Group2094 = x3d.Group()
Group2094.DEF = "RunAnimation"
TimeSensor2095 = x3d.TimeSensor()
TimeSensor2095.DEF = "RunTimer"
TimeSensor2095.cycleInterval = 0.9
TimeSensor2095.loop = True

Group2094.children.append(TimeSensor2095)
OrientationInterpolator2096 = x3d.OrientationInterpolator()
OrientationInterpolator2096.DEF = "Run_r_metatarsal_PitchInterpolator"
OrientationInterpolator2096.key = [0,0.2,0.4,0.6,0.7,1]

Group2094.children.append(OrientationInterpolator2096)
OrientationInterpolator2097 = x3d.OrientationInterpolator()
OrientationInterpolator2097.DEF = "Run_l_hip_RotationInterpolator_Run"
OrientationInterpolator2097.key = [0,0.2182,0.4909,0.7455,1]

Group2094.children.append(OrientationInterpolator2097)
OrientationInterpolator2098 = x3d.OrientationInterpolator()
OrientationInterpolator2098.DEF = "Run_l_knee_RotationInterpolator_Run"
OrientationInterpolator2098.key = [0,0.2182,0.4909,0.7455,1]

Group2094.children.append(OrientationInterpolator2098)
OrientationInterpolator2099 = x3d.OrientationInterpolator()
OrientationInterpolator2099.DEF = "Run_l_talocrural_RotationInterpolator_Run"
OrientationInterpolator2099.key = [0,0.22,0.3,0.4,1]

Group2094.children.append(OrientationInterpolator2099)
OrientationInterpolator2100 = x3d.OrientationInterpolator()
OrientationInterpolator2100.DEF = "Run_r_hip_RotationInterpolator_Run"
OrientationInterpolator2100.key = [0,0.2545,0.4909,0.7091,1]

Group2094.children.append(OrientationInterpolator2100)
OrientationInterpolator2101 = x3d.OrientationInterpolator()
OrientationInterpolator2101.DEF = "Run_r_knee_RotationInterpolator_Run"
OrientationInterpolator2101.key = [0,0.2545,0.4909,0.7091,1]

Group2094.children.append(OrientationInterpolator2101)
OrientationInterpolator2102 = x3d.OrientationInterpolator()
OrientationInterpolator2102.DEF = "Run_r_talocrural_RotationInterpolator_Run"
OrientationInterpolator2102.key = [0,0.4,0.71,0.8,0.82,1]

Group2094.children.append(OrientationInterpolator2102)
OrientationInterpolator2103 = x3d.OrientationInterpolator()
OrientationInterpolator2103.DEF = "Run_l_shoulder_RotationInterpolator_Run"
OrientationInterpolator2103.key = [0,0.2182,0.4909,0.7455,1]

Group2094.children.append(OrientationInterpolator2103)
OrientationInterpolator2104 = x3d.OrientationInterpolator()
OrientationInterpolator2104.DEF = "Run_l_elbow_RotationInterpolator_Run"
OrientationInterpolator2104.key = [0,0.2182,0.4909,0.7455,1]

Group2094.children.append(OrientationInterpolator2104)
OrientationInterpolator2105 = x3d.OrientationInterpolator()
OrientationInterpolator2105.DEF = "Run_l_radiocarpal_RotationInterpolator_Run"
OrientationInterpolator2105.key = [0,0.25,0.5,0.75,1]

Group2094.children.append(OrientationInterpolator2105)
OrientationInterpolator2106 = x3d.OrientationInterpolator()
OrientationInterpolator2106.DEF = "Run_r_shoulder_RotationInterpolator_Run"
OrientationInterpolator2106.key = [0,0.2545,0.4909,0.7091,1]

Group2094.children.append(OrientationInterpolator2106)
OrientationInterpolator2107 = x3d.OrientationInterpolator()
OrientationInterpolator2107.DEF = "Run_r_elbow_RotationInterpolator_Run"
OrientationInterpolator2107.key = [0,0.2545,0.4909,0.7091,1]

Group2094.children.append(OrientationInterpolator2107)
OrientationInterpolator2108 = x3d.OrientationInterpolator()
OrientationInterpolator2108.DEF = "Run_r_radiocarpal_RotationInterpolator_Run"
OrientationInterpolator2108.key = [0,1]

Group2094.children.append(OrientationInterpolator2108)
OrientationInterpolator2109 = x3d.OrientationInterpolator()
OrientationInterpolator2109.DEF = "Run_lower_body_RotationInterpolator_Run"
OrientationInterpolator2109.key = [0,0.2182,0.4909,0.7455,1]

Group2094.children.append(OrientationInterpolator2109)
OrientationInterpolator2110 = x3d.OrientationInterpolator()
OrientationInterpolator2110.DEF = "Run_head_RotationInterpolator_Run"
OrientationInterpolator2110.key = [0,0.2545,0.4909,0.7091,1]

Group2094.children.append(OrientationInterpolator2110)
OrientationInterpolator2111 = x3d.OrientationInterpolator()
OrientationInterpolator2111.DEF = "Run_neck_RotationInterpolator_Run"
OrientationInterpolator2111.key = [0,0.2545,0.4909,0.7091,1]

Group2094.children.append(OrientationInterpolator2111)
OrientationInterpolator2112 = x3d.OrientationInterpolator()
OrientationInterpolator2112.DEF = "Run_upper_body_RotationInterpolator_Run"
OrientationInterpolator2112.key = [0,0.2545,0.4909,0.7636,1]

Group2094.children.append(OrientationInterpolator2112)
OrientationInterpolator2113 = x3d.OrientationInterpolator()
OrientationInterpolator2113.DEF = "Run_whole_body_RotationInterpolator_Run"
OrientationInterpolator2113.key = [0,0.25,0.5,0.75,1]

Group2094.children.append(OrientationInterpolator2113)
PositionInterpolator2114 = x3d.PositionInterpolator()
PositionInterpolator2114.DEF = "Run_whole_body_TranslationInterpolator_Run"
PositionInterpolator2114.key = [0,0.22,0.3,0.31,0.5,0.69,0.7,0.78,1]

Group2094.children.append(PositionInterpolator2114)
OrientationInterpolator2115 = x3d.OrientationInterpolator()
OrientationInterpolator2115.DEF = "Run_l_sternoclavicular_RollInterpolator"
OrientationInterpolator2115.key = [0,0.2,0.4,0.6,0.8,1]

Group2094.children.append(OrientationInterpolator2115)
OrientationInterpolator2116 = x3d.OrientationInterpolator()
OrientationInterpolator2116.DEF = "Run_l_acromioclavicular_RollInterpolator"
OrientationInterpolator2116.key = [0,0.2,0.4,0.6,0.8,1]

Group2094.children.append(OrientationInterpolator2116)
OrientationInterpolator2117 = x3d.OrientationInterpolator()
OrientationInterpolator2117.DEF = "Run_r_sternoclavicular_RollInterpolator"
OrientationInterpolator2117.key = [0,0.2,0.4,0.6,0.8,1]

Group2094.children.append(OrientationInterpolator2117)
OrientationInterpolator2118 = x3d.OrientationInterpolator()
OrientationInterpolator2118.DEF = "Run_r_acromioclavicular_RollInterpolator"
OrientationInterpolator2118.key = [0,0.2,0.4,0.6,0.8,1]

Group2094.children.append(OrientationInterpolator2118)
OrientationInterpolator2119 = x3d.OrientationInterpolator()
OrientationInterpolator2119.DEF = "Run_sacroiliac_YawInterpolator"
OrientationInterpolator2119.key = [0,0.2,0.4,0.6,0.8,1]

Group2094.children.append(OrientationInterpolator2119)
OrientationInterpolator2120 = x3d.OrientationInterpolator()
OrientationInterpolator2120.DEF = "Run_vl5_YawInterpolator"
OrientationInterpolator2120.key = [0,0.2,0.4,0.5,0.6,0.8,1]

Group2094.children.append(OrientationInterpolator2120)
OrientationInterpolator2121 = x3d.OrientationInterpolator()
OrientationInterpolator2121.DEF = "Run_vc6_YawInterpolator"
OrientationInterpolator2121.key = [0,0.2,0.4,0.5,0.6,0.8,1]

Group2094.children.append(OrientationInterpolator2121)
OrientationInterpolator2122 = x3d.OrientationInterpolator()
OrientationInterpolator2122.DEF = "Run_l_thumb1_PitchInterpolator"
OrientationInterpolator2122.key = [0,0.2,0.4,0.6,0.8,1]

Group2094.children.append(OrientationInterpolator2122)
OrientationInterpolator2123 = x3d.OrientationInterpolator()
OrientationInterpolator2123.DEF = "Run_r_thumb1_PitchInterpolator"
OrientationInterpolator2123.key = [0,0.2,0.4,0.6,0.8,1]

Group2094.children.append(OrientationInterpolator2123)

Scene22.children.append(Group2094)
Group2124 = x3d.Group()
Group2124.DEF = "JumpAnimation"
TimeSensor2125 = x3d.TimeSensor()
TimeSensor2125.DEF = "JumpTimer"
TimeSensor2125.cycleInterval = 3.73
TimeSensor2125.loop = True

Group2124.children.append(TimeSensor2125)
OrientationInterpolator2126 = x3d.OrientationInterpolator()
OrientationInterpolator2126.DEF = "Jump_r_metatarsal_PitchInterpolator"
OrientationInterpolator2126.key = [0,0.2,0.4,0.6,0.7,1]

Group2124.children.append(OrientationInterpolator2126)
OrientationInterpolator2127 = x3d.OrientationInterpolator()
OrientationInterpolator2127.DEF = "Jump_r_talocrural_RotationInterpolator"
OrientationInterpolator2127.key = [0,0.1,0.15,0.25,0.28,0.32,0.35,0.64,0.76,0.84,0.88,0.92,0.96,1]

Group2124.children.append(OrientationInterpolator2127)
OrientationInterpolator2128 = x3d.OrientationInterpolator()
OrientationInterpolator2128.DEF = "Jump_r_knee_RotationInterpolator"
OrientationInterpolator2128.key = [0,0.2,0.25,0.3,0.64,0.76,0.88,1]

Group2124.children.append(OrientationInterpolator2128)
OrientationInterpolator2129 = x3d.OrientationInterpolator()
OrientationInterpolator2129.DEF = "Jump_r_hip_RotationInterpolator"
OrientationInterpolator2129.key = [0,0.18,0.24,0.26,0.28,0.32,0.48,0.64,0.76,0.88,1]

Group2124.children.append(OrientationInterpolator2129)
OrientationInterpolator2130 = x3d.OrientationInterpolator()
OrientationInterpolator2130.DEF = "Jump_l_talocrural_RotationInterpolator"
OrientationInterpolator2130.key = [0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1]

Group2124.children.append(OrientationInterpolator2130)
OrientationInterpolator2131 = x3d.OrientationInterpolator()
OrientationInterpolator2131.DEF = "Jump_l_knee_RotationInterpolator"
OrientationInterpolator2131.key = [0,0.28,0.32,0.48,0.64,0.76,0.88,1]

Group2124.children.append(OrientationInterpolator2131)
OrientationInterpolator2132 = x3d.OrientationInterpolator()
OrientationInterpolator2132.DEF = "Jump_l_hip_RotationInterpolator"
OrientationInterpolator2132.key = [0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1]

Group2124.children.append(OrientationInterpolator2132)
OrientationInterpolator2133 = x3d.OrientationInterpolator()
OrientationInterpolator2133.DEF = "Jump_lower_body_RotationInterpolator"
OrientationInterpolator2133.key = [0,0.28,0.32,0.48,0.76,1]

Group2124.children.append(OrientationInterpolator2133)
OrientationInterpolator2134 = x3d.OrientationInterpolator()
OrientationInterpolator2134.DEF = "Jump_r_radiocarpal_RotationInterpolator"
OrientationInterpolator2134.key = [0,0.28,0.32,0.64,0.76,1]

Group2124.children.append(OrientationInterpolator2134)
OrientationInterpolator2135 = x3d.OrientationInterpolator()
OrientationInterpolator2135.DEF = "Jump_r_elbow_RotationInterpolator"
OrientationInterpolator2135.key = [0,0.28,0.32,0.64,0.76,1]

Group2124.children.append(OrientationInterpolator2135)
OrientationInterpolator2136 = x3d.OrientationInterpolator()
OrientationInterpolator2136.DEF = "Jump_r_shoulder_RotationInterpolator"
OrientationInterpolator2136.key = [0,0.28,0.32,0.64,0.76,0.88,1]

Group2124.children.append(OrientationInterpolator2136)
OrientationInterpolator2137 = x3d.OrientationInterpolator()
OrientationInterpolator2137.DEF = "Jump_l_radiocarpal_RotationInterpolator"
OrientationInterpolator2137.key = [0,0.48,0.52,0.64,0.76,0.88,1]

Group2124.children.append(OrientationInterpolator2137)
OrientationInterpolator2138 = x3d.OrientationInterpolator()
OrientationInterpolator2138.DEF = "Jump_l_elbow_RotationInterpolator"
OrientationInterpolator2138.key = [0,0.28,0.32,0.58,0.72,1]

Group2124.children.append(OrientationInterpolator2138)
OrientationInterpolator2139 = x3d.OrientationInterpolator()
OrientationInterpolator2139.DEF = "Jump_l_shoulder_RotationInterpolator"
OrientationInterpolator2139.key = [0,0.28,0.32,0.64,0.76,0.88,1]

Group2124.children.append(OrientationInterpolator2139)
OrientationInterpolator2140 = x3d.OrientationInterpolator()
OrientationInterpolator2140.DEF = "Jump_head_RotationInterpolator"
OrientationInterpolator2140.key = [0,0.28,0.32,0.48,0.76,1]

Group2124.children.append(OrientationInterpolator2140)
OrientationInterpolator2141 = x3d.OrientationInterpolator()
OrientationInterpolator2141.DEF = "Jump_neck_RotationInterpolator"
OrientationInterpolator2141.key = [0,0.28,0.32,0.48,0.76,1]

Group2124.children.append(OrientationInterpolator2141)
OrientationInterpolator2142 = x3d.OrientationInterpolator()
OrientationInterpolator2142.DEF = "Jump_upper_body_RotationInterpolator"
OrientationInterpolator2142.key = [0,0.22,0.28,0.34,0.71,0.88,1]

Group2124.children.append(OrientationInterpolator2142)
OrientationInterpolator2143 = x3d.OrientationInterpolator()
OrientationInterpolator2143.DEF = "Jump_whole_body_RotationInterpolator"
OrientationInterpolator2143.key = [0,0.28,0.32,0.48,0.64,0.76,1]

Group2124.children.append(OrientationInterpolator2143)
PositionInterpolator2144 = x3d.PositionInterpolator()
PositionInterpolator2144.DEF = "Jump_whole_body_TranslationInterpolator"
PositionInterpolator2144.key = [0,0.04,0.07,0.11,0.15,0.19,0.22,0.25,0.27,0.31,0.33,0.35,0.38,0.53,0.544,0.76,0.8,0.84,0.88,0.92,0.96,1]

Group2124.children.append(PositionInterpolator2144)
OrientationInterpolator2145 = x3d.OrientationInterpolator()
OrientationInterpolator2145.DEF = "Jump_l_sternoclavicular_RollInterpolator"
OrientationInterpolator2145.key = [0,0.2,0.4,0.6,0.8,1]

Group2124.children.append(OrientationInterpolator2145)
OrientationInterpolator2146 = x3d.OrientationInterpolator()
OrientationInterpolator2146.DEF = "Jump_l_acromioclavicular_RollInterpolator"
OrientationInterpolator2146.key = [0,0.2,0.4,0.6,0.8,1]

Group2124.children.append(OrientationInterpolator2146)
OrientationInterpolator2147 = x3d.OrientationInterpolator()
OrientationInterpolator2147.DEF = "Jump_r_sternoclavicular_RollInterpolator"
OrientationInterpolator2147.key = [0,0.2,0.4,0.6,0.8,1]

Group2124.children.append(OrientationInterpolator2147)
OrientationInterpolator2148 = x3d.OrientationInterpolator()
OrientationInterpolator2148.DEF = "Jump_r_acromioclavicular_RollInterpolator"
OrientationInterpolator2148.key = [0,0.2,0.4,0.6,0.8,1]

Group2124.children.append(OrientationInterpolator2148)
OrientationInterpolator2149 = x3d.OrientationInterpolator()
OrientationInterpolator2149.DEF = "Jump_sacroiliac_YawInterpolator"
OrientationInterpolator2149.key = [0,0.2,0.4,0.6,0.8,1]

Group2124.children.append(OrientationInterpolator2149)
OrientationInterpolator2150 = x3d.OrientationInterpolator()
OrientationInterpolator2150.DEF = "Jump_vl5_YawInterpolator"
OrientationInterpolator2150.key = [0,0.2,0.4,0.5,0.6,0.8,1]

Group2124.children.append(OrientationInterpolator2150)
OrientationInterpolator2151 = x3d.OrientationInterpolator()
OrientationInterpolator2151.DEF = "Jump_vc6_YawInterpolator"
OrientationInterpolator2151.key = [0,0.2,0.4,0.5,0.6,0.8,1]

Group2124.children.append(OrientationInterpolator2151)
OrientationInterpolator2152 = x3d.OrientationInterpolator()
OrientationInterpolator2152.DEF = "Jump_l_thumb1_PitchInterpolator"
OrientationInterpolator2152.key = [0,0.2,0.4,0.6,0.8,1]

Group2124.children.append(OrientationInterpolator2152)
OrientationInterpolator2153 = x3d.OrientationInterpolator()
OrientationInterpolator2153.DEF = "Jump_r_thumb1_PitchInterpolator"
OrientationInterpolator2153.key = [0,0.2,0.4,0.6,0.8,1]

Group2124.children.append(OrientationInterpolator2153)

Scene22.children.append(Group2124)
Group2154 = x3d.Group()
Group2154.DEF = "KickAnimation"
TimeSensor2155 = x3d.TimeSensor()
TimeSensor2155.DEF = "KickTimer"
TimeSensor2155.cycleInterval = 3.73
TimeSensor2155.loop = True

Group2154.children.append(TimeSensor2155)
OrientationInterpolator2156 = x3d.OrientationInterpolator()
OrientationInterpolator2156.DEF = "Kick_l_sternoclavicular_RollInterpolator"
OrientationInterpolator2156.key = [0,0.2,0.4,0.6,0.8,1]

Group2154.children.append(OrientationInterpolator2156)
OrientationInterpolator2157 = x3d.OrientationInterpolator()
OrientationInterpolator2157.DEF = "Kick_l_acromioclavicular_RollInterpolator"
OrientationInterpolator2157.key = [0,0.2,0.4,0.6,0.8,1]

Group2154.children.append(OrientationInterpolator2157)
OrientationInterpolator2158 = x3d.OrientationInterpolator()
OrientationInterpolator2158.DEF = "Kick_l_shoulder_RollInterpolator"
OrientationInterpolator2158.key = [0,0.2,0.4,0.6,0.8,1]

Group2154.children.append(OrientationInterpolator2158)
OrientationInterpolator2159 = x3d.OrientationInterpolator()
OrientationInterpolator2159.DEF = "Kick_l_ForeArm_PitchInterpolator"
OrientationInterpolator2159.key = [0,0.2,0.4,0.6,0.8,1]

Group2154.children.append(OrientationInterpolator2159)
OrientationInterpolator2160 = x3d.OrientationInterpolator()
OrientationInterpolator2160.DEF = "Kick_l_radiocarpal_RollInterpolator"
OrientationInterpolator2160.key = [0,0.2,0.4,0.6,0.8,1]

Group2154.children.append(OrientationInterpolator2160)
OrientationInterpolator2161 = x3d.OrientationInterpolator()
OrientationInterpolator2161.DEF = "Kick_l_thumb1_PitchInterpolator"
OrientationInterpolator2161.key = [0,0.2,0.4,0.6,0.8,1]

Group2154.children.append(OrientationInterpolator2161)
OrientationInterpolator2162 = x3d.OrientationInterpolator()
OrientationInterpolator2162.DEF = "Kick_r_sternoclavicular_RollInterpolator"
OrientationInterpolator2162.key = [0,0.2,0.4,0.6,0.8,1]

Group2154.children.append(OrientationInterpolator2162)
OrientationInterpolator2163 = x3d.OrientationInterpolator()
OrientationInterpolator2163.DEF = "Kick_r_acromioclavicular_RollInterpolator"
OrientationInterpolator2163.key = [0,0.2,0.4,0.6,0.8,1]

Group2154.children.append(OrientationInterpolator2163)
OrientationInterpolator2164 = x3d.OrientationInterpolator()
OrientationInterpolator2164.DEF = "Kick_r_shoulder_RollInterpolator"
OrientationInterpolator2164.key = [0,0.2,0.4,0.6,0.8,1]

Group2154.children.append(OrientationInterpolator2164)
OrientationInterpolator2165 = x3d.OrientationInterpolator()
OrientationInterpolator2165.DEF = "Kick_r_ForeArm_PitchInterpolator"
OrientationInterpolator2165.key = [0,0.2,0.4,0.6,0.8,1]

Group2154.children.append(OrientationInterpolator2165)
OrientationInterpolator2166 = x3d.OrientationInterpolator()
OrientationInterpolator2166.DEF = "Kick_r_radiocarpal_RollInterpolator"
OrientationInterpolator2166.key = [0,0.2,0.4,0.6,0.8,1]

Group2154.children.append(OrientationInterpolator2166)
OrientationInterpolator2167 = x3d.OrientationInterpolator()
OrientationInterpolator2167.DEF = "Kick_r_thumb1_PitchInterpolator"
OrientationInterpolator2167.key = [0,0.2,0.4,0.6,0.8,1]

Group2154.children.append(OrientationInterpolator2167)
OrientationInterpolator2168 = x3d.OrientationInterpolator()
OrientationInterpolator2168.DEF = "Kick_r_hip_PitchInterpolator"
OrientationInterpolator2168.key = [0,0.2,0.3,0.5,0.6,0.9,1]

Group2154.children.append(OrientationInterpolator2168)
OrientationInterpolator2169 = x3d.OrientationInterpolator()
OrientationInterpolator2169.DEF = "Kick_r_knee_PitchInterpolator"
OrientationInterpolator2169.key = [0,0.2,0.4,0.6,0.8,1]

Group2154.children.append(OrientationInterpolator2169)
OrientationInterpolator2170 = x3d.OrientationInterpolator()
OrientationInterpolator2170.DEF = "Kick_l_hip_PitchInterpolator"
OrientationInterpolator2170.key = [0,0.2,0.3,0.5,0.6,0.9,1]

Group2154.children.append(OrientationInterpolator2170)
OrientationInterpolator2171 = x3d.OrientationInterpolator()
OrientationInterpolator2171.DEF = "Kick_l_knee_PitchInterpolator"
OrientationInterpolator2171.key = [0,0.2,0.4,0.6,0.8,1]

Group2154.children.append(OrientationInterpolator2171)
OrientationInterpolator2172 = x3d.OrientationInterpolator()
OrientationInterpolator2172.DEF = "Kick_r_talocrural_PitchInterpolator"
OrientationInterpolator2172.key = [0,0.2,0.4,0.6,0.7,1]

Group2154.children.append(OrientationInterpolator2172)
OrientationInterpolator2173 = x3d.OrientationInterpolator()
OrientationInterpolator2173.DEF = "Kick_r_metatarsal_PitchInterpolator"
OrientationInterpolator2173.key = [0,0.2,0.4,0.6,0.7,1]

Group2154.children.append(OrientationInterpolator2173)
OrientationInterpolator2174 = x3d.OrientationInterpolator()
OrientationInterpolator2174.DEF = "Kick_sacroiliac_YawInterpolator"
OrientationInterpolator2174.key = [0,0.2,0.4,0.6,0.8,1]

Group2154.children.append(OrientationInterpolator2174)
OrientationInterpolator2175 = x3d.OrientationInterpolator()
OrientationInterpolator2175.DEF = "Kick_vl5_YawInterpolator"
OrientationInterpolator2175.key = [0,0.2,0.4,0.5,0.6,0.8,1]

Group2154.children.append(OrientationInterpolator2175)
OrientationInterpolator2176 = x3d.OrientationInterpolator()
OrientationInterpolator2176.DEF = "Kick_vc6_YawInterpolator"
OrientationInterpolator2176.key = [0,0.2,0.4,0.5,0.6,0.8,1]

Group2154.children.append(OrientationInterpolator2176)
OrientationInterpolator2177 = x3d.OrientationInterpolator()
OrientationInterpolator2177.DEF = "Kick_lower_body_RotationInterpolator"
OrientationInterpolator2177.key = [0,0.5,1]

Group2154.children.append(OrientationInterpolator2177)
OrientationInterpolator2178 = x3d.OrientationInterpolator()
OrientationInterpolator2178.DEF = "Kick_upper_body_RotationInterpolator"
OrientationInterpolator2178.key = [0,0.5,1]

Group2154.children.append(OrientationInterpolator2178)
OrientationInterpolator2179 = x3d.OrientationInterpolator()
OrientationInterpolator2179.DEF = "Kick_whole_body_RotationInterpolator"
OrientationInterpolator2179.key = [0,0.5,1]

Group2154.children.append(OrientationInterpolator2179)
PositionInterpolator2180 = x3d.PositionInterpolator()
PositionInterpolator2180.DEF = "Kick_whole_body_TranslationInterpolator"
PositionInterpolator2180.key = [0,0.5,1]

Group2154.children.append(PositionInterpolator2180)
OrientationInterpolator2181 = x3d.OrientationInterpolator()
OrientationInterpolator2181.DEF = "Kick_neck_RotationInterpolator"
OrientationInterpolator2181.key = [0,0.25,0.55,1]

Group2154.children.append(OrientationInterpolator2181)

Scene22.children.append(Group2154)
ROUTE2182 = x3d.ROUTE()
ROUTE2182.fromField = "fraction_changed"
ROUTE2182.fromNode = "StandTimer"
ROUTE2182.toField = "set_fraction"
ROUTE2182.toNode = "Stand_r_talocrural_RotationInterpolator"

Scene22.children.append(ROUTE2182)
ROUTE2183 = x3d.ROUTE()
ROUTE2183.fromField = "fraction_changed"
ROUTE2183.fromNode = "StandTimer"
ROUTE2183.toField = "set_fraction"
ROUTE2183.toNode = "Stand_r_knee_RotationInterpolator"

Scene22.children.append(ROUTE2183)
ROUTE2184 = x3d.ROUTE()
ROUTE2184.fromField = "fraction_changed"
ROUTE2184.fromNode = "StandTimer"
ROUTE2184.toField = "set_fraction"
ROUTE2184.toNode = "Stand_r_hip_RotationInterpolator"

Scene22.children.append(ROUTE2184)
ROUTE2185 = x3d.ROUTE()
ROUTE2185.fromField = "fraction_changed"
ROUTE2185.fromNode = "StandTimer"
ROUTE2185.toField = "set_fraction"
ROUTE2185.toNode = "Stand_l_talocrural_RotationInterpolator"

Scene22.children.append(ROUTE2185)
ROUTE2186 = x3d.ROUTE()
ROUTE2186.fromField = "fraction_changed"
ROUTE2186.fromNode = "StandTimer"
ROUTE2186.toField = "set_fraction"
ROUTE2186.toNode = "Stand_l_knee_RotationInterpolator"

Scene22.children.append(ROUTE2186)
ROUTE2187 = x3d.ROUTE()
ROUTE2187.fromField = "fraction_changed"
ROUTE2187.fromNode = "StandTimer"
ROUTE2187.toField = "set_fraction"
ROUTE2187.toNode = "Stand_l_hip_RotationInterpolator"

Scene22.children.append(ROUTE2187)
ROUTE2188 = x3d.ROUTE()
ROUTE2188.fromField = "fraction_changed"
ROUTE2188.fromNode = "StandTimer"
ROUTE2188.toField = "set_fraction"
ROUTE2188.toNode = "Stand_lower_body_RotationInterpolator"

Scene22.children.append(ROUTE2188)
ROUTE2189 = x3d.ROUTE()
ROUTE2189.fromField = "fraction_changed"
ROUTE2189.fromNode = "StandTimer"
ROUTE2189.toField = "set_fraction"
ROUTE2189.toNode = "Stand_r_radiocarpal_RotationInterpolator"

Scene22.children.append(ROUTE2189)
ROUTE2190 = x3d.ROUTE()
ROUTE2190.fromField = "fraction_changed"
ROUTE2190.fromNode = "StandTimer"
ROUTE2190.toField = "set_fraction"
ROUTE2190.toNode = "Stand_r_elbow_RotationInterpolator"

Scene22.children.append(ROUTE2190)
ROUTE2191 = x3d.ROUTE()
ROUTE2191.fromField = "fraction_changed"
ROUTE2191.fromNode = "StandTimer"
ROUTE2191.toField = "set_fraction"
ROUTE2191.toNode = "Stand_r_shoulder_RotationInterpolator"

Scene22.children.append(ROUTE2191)
ROUTE2192 = x3d.ROUTE()
ROUTE2192.fromField = "fraction_changed"
ROUTE2192.fromNode = "StandTimer"
ROUTE2192.toField = "set_fraction"
ROUTE2192.toNode = "Stand_l_radiocarpal_RotationInterpolator"

Scene22.children.append(ROUTE2192)
ROUTE2193 = x3d.ROUTE()
ROUTE2193.fromField = "fraction_changed"
ROUTE2193.fromNode = "StandTimer"
ROUTE2193.toField = "set_fraction"
ROUTE2193.toNode = "Stand_l_elbow_RotationInterpolator"

Scene22.children.append(ROUTE2193)
ROUTE2194 = x3d.ROUTE()
ROUTE2194.fromField = "fraction_changed"
ROUTE2194.fromNode = "StandTimer"
ROUTE2194.toField = "set_fraction"
ROUTE2194.toNode = "Stand_l_shoulder_RotationInterpolator"

Scene22.children.append(ROUTE2194)
ROUTE2195 = x3d.ROUTE()
ROUTE2195.fromField = "fraction_changed"
ROUTE2195.fromNode = "StandTimer"
ROUTE2195.toField = "set_fraction"
ROUTE2195.toNode = "Stand_head_RotationInterpolator"

Scene22.children.append(ROUTE2195)
ROUTE2196 = x3d.ROUTE()
ROUTE2196.fromField = "fraction_changed"
ROUTE2196.fromNode = "StandTimer"
ROUTE2196.toField = "set_fraction"
ROUTE2196.toNode = "Stand_neck_RotationInterpolator"

Scene22.children.append(ROUTE2196)
ROUTE2197 = x3d.ROUTE()
ROUTE2197.fromField = "fraction_changed"
ROUTE2197.fromNode = "StandTimer"
ROUTE2197.toField = "set_fraction"
ROUTE2197.toNode = "Stand_l_eyeball_RotationInterpolator"

Scene22.children.append(ROUTE2197)
ROUTE2198 = x3d.ROUTE()
ROUTE2198.fromField = "fraction_changed"
ROUTE2198.fromNode = "StandTimer"
ROUTE2198.toField = "set_fraction"
ROUTE2198.toNode = "Stand_r_eyeball_RotationInterpolator"

Scene22.children.append(ROUTE2198)
ROUTE2199 = x3d.ROUTE()
ROUTE2199.fromField = "fraction_changed"
ROUTE2199.fromNode = "StandTimer"
ROUTE2199.toField = "set_fraction"
ROUTE2199.toNode = "Stand_upper_body_RotationInterpolator"

Scene22.children.append(ROUTE2199)
ROUTE2200 = x3d.ROUTE()
ROUTE2200.fromField = "fraction_changed"
ROUTE2200.fromNode = "StandTimer"
ROUTE2200.toField = "set_fraction"
ROUTE2200.toNode = "Stand_whole_body_RotationInterpolator"

Scene22.children.append(ROUTE2200)
ROUTE2201 = x3d.ROUTE()
ROUTE2201.fromField = "fraction_changed"
ROUTE2201.fromNode = "StandTimer"
ROUTE2201.toField = "set_fraction"
ROUTE2201.toNode = "Stand_whole_body_TranslationInterpolator"

Scene22.children.append(ROUTE2201)
ROUTE2202 = x3d.ROUTE()
ROUTE2202.fromField = "fraction_changed"
ROUTE2202.fromNode = "StandTimer"
ROUTE2202.toField = "set_fraction"
ROUTE2202.toNode = "Stand_l_sternoclavicular_RollInterpolator"

Scene22.children.append(ROUTE2202)
ROUTE2203 = x3d.ROUTE()
ROUTE2203.fromField = "fraction_changed"
ROUTE2203.fromNode = "StandTimer"
ROUTE2203.toField = "set_fraction"
ROUTE2203.toNode = "Stand_l_acromioclavicular_RollInterpolator"

Scene22.children.append(ROUTE2203)
ROUTE2204 = x3d.ROUTE()
ROUTE2204.fromField = "fraction_changed"
ROUTE2204.fromNode = "StandTimer"
ROUTE2204.toField = "set_fraction"
ROUTE2204.toNode = "Stand_r_sternoclavicular_RollInterpolator"

Scene22.children.append(ROUTE2204)
ROUTE2205 = x3d.ROUTE()
ROUTE2205.fromField = "fraction_changed"
ROUTE2205.fromNode = "StandTimer"
ROUTE2205.toField = "set_fraction"
ROUTE2205.toNode = "Stand_r_acromioclavicular_RollInterpolator"

Scene22.children.append(ROUTE2205)
ROUTE2206 = x3d.ROUTE()
ROUTE2206.fromField = "fraction_changed"
ROUTE2206.fromNode = "StandTimer"
ROUTE2206.toField = "set_fraction"
ROUTE2206.toNode = "Stand_r_metatarsal_PitchInterpolator"

Scene22.children.append(ROUTE2206)
ROUTE2207 = x3d.ROUTE()
ROUTE2207.fromField = "fraction_changed"
ROUTE2207.fromNode = "StandTimer"
ROUTE2207.toField = "set_fraction"
ROUTE2207.toNode = "Stand_sacroiliac_YawInterpolator"

Scene22.children.append(ROUTE2207)
ROUTE2208 = x3d.ROUTE()
ROUTE2208.fromField = "fraction_changed"
ROUTE2208.fromNode = "StandTimer"
ROUTE2208.toField = "set_fraction"
ROUTE2208.toNode = "Stand_vl5_YawInterpolator"

Scene22.children.append(ROUTE2208)
ROUTE2209 = x3d.ROUTE()
ROUTE2209.fromField = "fraction_changed"
ROUTE2209.fromNode = "StandTimer"
ROUTE2209.toField = "set_fraction"
ROUTE2209.toNode = "Stand_vc6_YawInterpolator"

Scene22.children.append(ROUTE2209)
ROUTE2210 = x3d.ROUTE()
ROUTE2210.fromField = "fraction_changed"
ROUTE2210.fromNode = "StandTimer"
ROUTE2210.toField = "set_fraction"
ROUTE2210.toNode = "Stand_l_thumb1_PitchInterpolator"

Scene22.children.append(ROUTE2210)
ROUTE2211 = x3d.ROUTE()
ROUTE2211.fromField = "fraction_changed"
ROUTE2211.fromNode = "StandTimer"
ROUTE2211.toField = "set_fraction"
ROUTE2211.toNode = "Stand_r_thumb1_PitchInterpolator"

Scene22.children.append(ROUTE2211)
ROUTE2212 = x3d.ROUTE()
ROUTE2212.fromField = "fraction_changed"
ROUTE2212.fromNode = "StandTimer"
ROUTE2212.toField = "set_fraction"
ROUTE2212.toNode = "Stand_r_index1_RollInterpolator"

Scene22.children.append(ROUTE2212)
ROUTE2213 = x3d.ROUTE()
ROUTE2213.fromField = "fraction_changed"
ROUTE2213.fromNode = "StandTimer"
ROUTE2213.toField = "set_fraction"
ROUTE2213.toNode = "Stand_r_index2_RollInterpolator"

Scene22.children.append(ROUTE2213)
ROUTE2214 = x3d.ROUTE()
ROUTE2214.fromField = "fraction_changed"
ROUTE2214.fromNode = "StandTimer"
ROUTE2214.toField = "set_fraction"
ROUTE2214.toNode = "Stand_r_index3_RollInterpolator"

Scene22.children.append(ROUTE2214)
ROUTE2215 = x3d.ROUTE()
ROUTE2215.fromField = "value_changed"
ROUTE2215.fromNode = "Stand_r_talocrural_RotationInterpolator"
ROUTE2215.toField = "set_rotation"
ROUTE2215.toNode = "hanim_r_talocrural"

Scene22.children.append(ROUTE2215)
ROUTE2216 = x3d.ROUTE()
ROUTE2216.fromField = "value_changed"
ROUTE2216.fromNode = "Stand_r_knee_RotationInterpolator"
ROUTE2216.toField = "set_rotation"
ROUTE2216.toNode = "hanim_r_knee"

Scene22.children.append(ROUTE2216)
ROUTE2217 = x3d.ROUTE()
ROUTE2217.fromField = "value_changed"
ROUTE2217.fromNode = "Stand_r_hip_RotationInterpolator"
ROUTE2217.toField = "set_rotation"
ROUTE2217.toNode = "hanim_r_hip"

Scene22.children.append(ROUTE2217)
ROUTE2218 = x3d.ROUTE()
ROUTE2218.fromField = "value_changed"
ROUTE2218.fromNode = "Stand_l_talocrural_RotationInterpolator"
ROUTE2218.toField = "set_rotation"
ROUTE2218.toNode = "hanim_l_talocrural"

Scene22.children.append(ROUTE2218)
ROUTE2219 = x3d.ROUTE()
ROUTE2219.fromField = "value_changed"
ROUTE2219.fromNode = "Stand_l_knee_RotationInterpolator"
ROUTE2219.toField = "set_rotation"
ROUTE2219.toNode = "hanim_l_knee"

Scene22.children.append(ROUTE2219)
ROUTE2220 = x3d.ROUTE()
ROUTE2220.fromField = "value_changed"
ROUTE2220.fromNode = "Stand_l_hip_RotationInterpolator"
ROUTE2220.toField = "set_rotation"
ROUTE2220.toNode = "hanim_l_hip"

Scene22.children.append(ROUTE2220)
ROUTE2221 = x3d.ROUTE()
ROUTE2221.fromField = "value_changed"
ROUTE2221.fromNode = "Stand_r_radiocarpal_RotationInterpolator"
ROUTE2221.toField = "set_rotation"
ROUTE2221.toNode = "hanim_r_radiocarpal"

Scene22.children.append(ROUTE2221)
ROUTE2222 = x3d.ROUTE()
ROUTE2222.fromField = "value_changed"
ROUTE2222.fromNode = "Stand_r_elbow_RotationInterpolator"
ROUTE2222.toField = "set_rotation"
ROUTE2222.toNode = "hanim_r_elbow"

Scene22.children.append(ROUTE2222)
ROUTE2223 = x3d.ROUTE()
ROUTE2223.fromField = "value_changed"
ROUTE2223.fromNode = "Stand_r_shoulder_RotationInterpolator"
ROUTE2223.toField = "set_rotation"
ROUTE2223.toNode = "hanim_r_shoulder"

Scene22.children.append(ROUTE2223)
ROUTE2224 = x3d.ROUTE()
ROUTE2224.fromField = "value_changed"
ROUTE2224.fromNode = "Stand_l_radiocarpal_RotationInterpolator"
ROUTE2224.toField = "set_rotation"
ROUTE2224.toNode = "hanim_l_radiocarpal"

Scene22.children.append(ROUTE2224)
ROUTE2225 = x3d.ROUTE()
ROUTE2225.fromField = "value_changed"
ROUTE2225.fromNode = "Stand_l_elbow_RotationInterpolator"
ROUTE2225.toField = "set_rotation"
ROUTE2225.toNode = "hanim_l_elbow"

Scene22.children.append(ROUTE2225)
ROUTE2226 = x3d.ROUTE()
ROUTE2226.fromField = "value_changed"
ROUTE2226.fromNode = "Stand_l_shoulder_RotationInterpolator"
ROUTE2226.toField = "set_rotation"
ROUTE2226.toNode = "hanim_l_shoulder"

Scene22.children.append(ROUTE2226)
ROUTE2227 = x3d.ROUTE()
ROUTE2227.fromField = "value_changed"
ROUTE2227.fromNode = "Stand_head_RotationInterpolator"
ROUTE2227.toField = "set_rotation"
ROUTE2227.toNode = "hanim_skullbase"

Scene22.children.append(ROUTE2227)
ROUTE2228 = x3d.ROUTE()
ROUTE2228.fromField = "value_changed"
ROUTE2228.fromNode = "Stand_whole_body_RotationInterpolator"
ROUTE2228.toField = "set_rotation"
ROUTE2228.toNode = "hanim_humanoid_root"

Scene22.children.append(ROUTE2228)
ROUTE2229 = x3d.ROUTE()
ROUTE2229.fromField = "value_changed"
ROUTE2229.fromNode = "Stand_whole_body_TranslationInterpolator"
ROUTE2229.toField = "set_translation"
ROUTE2229.toNode = "hanim_humanoid_root"

Scene22.children.append(ROUTE2229)
ROUTE2230 = x3d.ROUTE()
ROUTE2230.fromField = "value_changed"
ROUTE2230.fromNode = "Stand_vl5_YawInterpolator"
ROUTE2230.toField = "set_rotation"
ROUTE2230.toNode = "hanim_vl5"

Scene22.children.append(ROUTE2230)
ROUTE2231 = x3d.ROUTE()
ROUTE2231.fromField = "fraction_changed"
ROUTE2231.fromNode = "PitchTimer"
ROUTE2231.toField = "set_fraction"
ROUTE2231.toNode = "Pitches_r_talocrural_RotationInterpolator"

Scene22.children.append(ROUTE2231)
ROUTE2232 = x3d.ROUTE()
ROUTE2232.fromField = "fraction_changed"
ROUTE2232.fromNode = "PitchTimer"
ROUTE2232.toField = "set_fraction"
ROUTE2232.toNode = "Pitches_r_knee_RotationInterpolator"

Scene22.children.append(ROUTE2232)
ROUTE2233 = x3d.ROUTE()
ROUTE2233.fromField = "fraction_changed"
ROUTE2233.fromNode = "PitchTimer"
ROUTE2233.toField = "set_fraction"
ROUTE2233.toNode = "Pitches_r_hip_RotationInterpolator"

Scene22.children.append(ROUTE2233)
ROUTE2234 = x3d.ROUTE()
ROUTE2234.fromField = "fraction_changed"
ROUTE2234.fromNode = "PitchTimer"
ROUTE2234.toField = "set_fraction"
ROUTE2234.toNode = "Pitches_l_talocrural_RotationInterpolator"

Scene22.children.append(ROUTE2234)
ROUTE2235 = x3d.ROUTE()
ROUTE2235.fromField = "fraction_changed"
ROUTE2235.fromNode = "PitchTimer"
ROUTE2235.toField = "set_fraction"
ROUTE2235.toNode = "Pitches_l_knee_RotationInterpolator"

Scene22.children.append(ROUTE2235)
ROUTE2236 = x3d.ROUTE()
ROUTE2236.fromField = "fraction_changed"
ROUTE2236.fromNode = "PitchTimer"
ROUTE2236.toField = "set_fraction"
ROUTE2236.toNode = "Pitches_l_hip_RotationInterpolator"

Scene22.children.append(ROUTE2236)
ROUTE2237 = x3d.ROUTE()
ROUTE2237.fromField = "fraction_changed"
ROUTE2237.fromNode = "PitchTimer"
ROUTE2237.toField = "set_fraction"
ROUTE2237.toNode = "Pitches_lower_body_RotationInterpolator"

Scene22.children.append(ROUTE2237)
ROUTE2238 = x3d.ROUTE()
ROUTE2238.fromField = "fraction_changed"
ROUTE2238.fromNode = "PitchTimer"
ROUTE2238.toField = "set_fraction"
ROUTE2238.toNode = "Pitches_r_radiocarpal_RotationInterpolator"

Scene22.children.append(ROUTE2238)
ROUTE2239 = x3d.ROUTE()
ROUTE2239.fromField = "fraction_changed"
ROUTE2239.fromNode = "PitchTimer"
ROUTE2239.toField = "set_fraction"
ROUTE2239.toNode = "Pitches_r_elbow_RotationInterpolator"

Scene22.children.append(ROUTE2239)
ROUTE2240 = x3d.ROUTE()
ROUTE2240.fromField = "fraction_changed"
ROUTE2240.fromNode = "PitchTimer"
ROUTE2240.toField = "set_fraction"
ROUTE2240.toNode = "Pitches_r_shoulder_RotationInterpolator"

Scene22.children.append(ROUTE2240)
ROUTE2241 = x3d.ROUTE()
ROUTE2241.fromField = "fraction_changed"
ROUTE2241.fromNode = "PitchTimer"
ROUTE2241.toField = "set_fraction"
ROUTE2241.toNode = "Pitches_l_radiocarpal_RotationInterpolator"

Scene22.children.append(ROUTE2241)
ROUTE2242 = x3d.ROUTE()
ROUTE2242.fromField = "fraction_changed"
ROUTE2242.fromNode = "PitchTimer"
ROUTE2242.toField = "set_fraction"
ROUTE2242.toNode = "Pitches_l_elbow_RotationInterpolator"

Scene22.children.append(ROUTE2242)
ROUTE2243 = x3d.ROUTE()
ROUTE2243.fromField = "fraction_changed"
ROUTE2243.fromNode = "PitchTimer"
ROUTE2243.toField = "set_fraction"
ROUTE2243.toNode = "Pitches_l_shoulder_RotationInterpolator"

Scene22.children.append(ROUTE2243)
ROUTE2244 = x3d.ROUTE()
ROUTE2244.fromField = "fraction_changed"
ROUTE2244.fromNode = "PitchTimer"
ROUTE2244.toField = "set_fraction"
ROUTE2244.toNode = "Pitches_head_RotationInterpolator"

Scene22.children.append(ROUTE2244)
ROUTE2245 = x3d.ROUTE()
ROUTE2245.fromField = "fraction_changed"
ROUTE2245.fromNode = "PitchTimer"
ROUTE2245.toField = "set_fraction"
ROUTE2245.toNode = "Pitches_neck_RotationInterpolator"

Scene22.children.append(ROUTE2245)
ROUTE2246 = x3d.ROUTE()
ROUTE2246.fromField = "fraction_changed"
ROUTE2246.fromNode = "PitchTimer"
ROUTE2246.toField = "set_fraction"
ROUTE2246.toNode = "Pitches_upper_body_RotationInterpolator"

Scene22.children.append(ROUTE2246)
ROUTE2247 = x3d.ROUTE()
ROUTE2247.fromField = "fraction_changed"
ROUTE2247.fromNode = "PitchTimer"
ROUTE2247.toField = "set_fraction"
ROUTE2247.toNode = "Pitches_whole_body_RotationInterpolator"

Scene22.children.append(ROUTE2247)
ROUTE2248 = x3d.ROUTE()
ROUTE2248.fromField = "fraction_changed"
ROUTE2248.fromNode = "PitchTimer"
ROUTE2248.toField = "set_fraction"
ROUTE2248.toNode = "Pitches_whole_body_TranslationInterpolator"

Scene22.children.append(ROUTE2248)
ROUTE2249 = x3d.ROUTE()
ROUTE2249.fromField = "fraction_changed"
ROUTE2249.fromNode = "PitchTimer"
ROUTE2249.toField = "set_fraction"
ROUTE2249.toNode = "Pitch_l_sternoclavicular_RollInterpolator"

Scene22.children.append(ROUTE2249)
ROUTE2250 = x3d.ROUTE()
ROUTE2250.fromField = "fraction_changed"
ROUTE2250.fromNode = "PitchTimer"
ROUTE2250.toField = "set_fraction"
ROUTE2250.toNode = "Pitch_l_acromioclavicular_RollInterpolator"

Scene22.children.append(ROUTE2250)
ROUTE2251 = x3d.ROUTE()
ROUTE2251.fromField = "fraction_changed"
ROUTE2251.fromNode = "PitchTimer"
ROUTE2251.toField = "set_fraction"
ROUTE2251.toNode = "Pitch_r_sternoclavicular_RollInterpolator"

Scene22.children.append(ROUTE2251)
ROUTE2252 = x3d.ROUTE()
ROUTE2252.fromField = "fraction_changed"
ROUTE2252.fromNode = "PitchTimer"
ROUTE2252.toField = "set_fraction"
ROUTE2252.toNode = "Pitch_r_acromioclavicular_RollInterpolator"

Scene22.children.append(ROUTE2252)
ROUTE2253 = x3d.ROUTE()
ROUTE2253.fromField = "fraction_changed"
ROUTE2253.fromNode = "PitchTimer"
ROUTE2253.toField = "set_fraction"
ROUTE2253.toNode = "Pitch_r_metatarsal_PitchInterpolator"

Scene22.children.append(ROUTE2253)
ROUTE2254 = x3d.ROUTE()
ROUTE2254.fromField = "fraction_changed"
ROUTE2254.fromNode = "PitchTimer"
ROUTE2254.toField = "set_fraction"
ROUTE2254.toNode = "Pitch_sacroiliac_YawInterpolator"

Scene22.children.append(ROUTE2254)
ROUTE2255 = x3d.ROUTE()
ROUTE2255.fromField = "fraction_changed"
ROUTE2255.fromNode = "PitchTimer"
ROUTE2255.toField = "set_fraction"
ROUTE2255.toNode = "Pitch_vl5_YawInterpolator"

Scene22.children.append(ROUTE2255)
ROUTE2256 = x3d.ROUTE()
ROUTE2256.fromField = "fraction_changed"
ROUTE2256.fromNode = "PitchTimer"
ROUTE2256.toField = "set_fraction"
ROUTE2256.toNode = "Pitch_vc6_YawInterpolator"

Scene22.children.append(ROUTE2256)
ROUTE2257 = x3d.ROUTE()
ROUTE2257.fromField = "fraction_changed"
ROUTE2257.fromNode = "PitchTimer"
ROUTE2257.toField = "set_fraction"
ROUTE2257.toNode = "Pitch_l_thumb1_PitchInterpolator"

Scene22.children.append(ROUTE2257)
ROUTE2258 = x3d.ROUTE()
ROUTE2258.fromField = "fraction_changed"
ROUTE2258.fromNode = "PitchTimer"
ROUTE2258.toField = "set_fraction"
ROUTE2258.toNode = "Pitch_r_thumb1_PitchInterpolator"

Scene22.children.append(ROUTE2258)
ROUTE2259 = x3d.ROUTE()
ROUTE2259.fromField = "value_changed"
ROUTE2259.fromNode = "Pitches_r_talocrural_RotationInterpolator"
ROUTE2259.toField = "set_rotation"
ROUTE2259.toNode = "hanim_r_talocrural"

Scene22.children.append(ROUTE2259)
ROUTE2260 = x3d.ROUTE()
ROUTE2260.fromField = "value_changed"
ROUTE2260.fromNode = "Pitches_r_knee_RotationInterpolator"
ROUTE2260.toField = "set_rotation"
ROUTE2260.toNode = "hanim_r_knee"

Scene22.children.append(ROUTE2260)
ROUTE2261 = x3d.ROUTE()
ROUTE2261.fromField = "value_changed"
ROUTE2261.fromNode = "Pitches_r_hip_RotationInterpolator"
ROUTE2261.toField = "set_rotation"
ROUTE2261.toNode = "hanim_r_hip"

Scene22.children.append(ROUTE2261)
ROUTE2262 = x3d.ROUTE()
ROUTE2262.fromField = "value_changed"
ROUTE2262.fromNode = "Pitches_l_talocrural_RotationInterpolator"
ROUTE2262.toField = "set_rotation"
ROUTE2262.toNode = "hanim_l_talocrural"

Scene22.children.append(ROUTE2262)
ROUTE2263 = x3d.ROUTE()
ROUTE2263.fromField = "value_changed"
ROUTE2263.fromNode = "Pitches_l_knee_RotationInterpolator"
ROUTE2263.toField = "set_rotation"
ROUTE2263.toNode = "hanim_l_knee"

Scene22.children.append(ROUTE2263)
ROUTE2264 = x3d.ROUTE()
ROUTE2264.fromField = "value_changed"
ROUTE2264.fromNode = "Pitches_l_hip_RotationInterpolator"
ROUTE2264.toField = "set_rotation"
ROUTE2264.toNode = "hanim_l_hip"

Scene22.children.append(ROUTE2264)
ROUTE2265 = x3d.ROUTE()
ROUTE2265.fromField = "value_changed"
ROUTE2265.fromNode = "Pitches_r_radiocarpal_RotationInterpolator"
ROUTE2265.toField = "set_rotation"
ROUTE2265.toNode = "hanim_r_radiocarpal"

Scene22.children.append(ROUTE2265)
ROUTE2266 = x3d.ROUTE()
ROUTE2266.fromField = "value_changed"
ROUTE2266.fromNode = "Pitches_r_elbow_RotationInterpolator"
ROUTE2266.toField = "set_rotation"
ROUTE2266.toNode = "hanim_r_elbow"

Scene22.children.append(ROUTE2266)
ROUTE2267 = x3d.ROUTE()
ROUTE2267.fromField = "value_changed"
ROUTE2267.fromNode = "Pitches_r_shoulder_RotationInterpolator"
ROUTE2267.toField = "set_rotation"
ROUTE2267.toNode = "hanim_r_shoulder"

Scene22.children.append(ROUTE2267)
ROUTE2268 = x3d.ROUTE()
ROUTE2268.fromField = "value_changed"
ROUTE2268.fromNode = "Pitches_l_radiocarpal_RotationInterpolator"
ROUTE2268.toField = "set_rotation"
ROUTE2268.toNode = "hanim_l_radiocarpal"

Scene22.children.append(ROUTE2268)
ROUTE2269 = x3d.ROUTE()
ROUTE2269.fromField = "value_changed"
ROUTE2269.fromNode = "Pitches_l_elbow_RotationInterpolator"
ROUTE2269.toField = "set_rotation"
ROUTE2269.toNode = "hanim_l_elbow"

Scene22.children.append(ROUTE2269)
ROUTE2270 = x3d.ROUTE()
ROUTE2270.fromField = "value_changed"
ROUTE2270.fromNode = "Pitches_l_shoulder_RotationInterpolator"
ROUTE2270.toField = "set_rotation"
ROUTE2270.toNode = "hanim_l_shoulder"

Scene22.children.append(ROUTE2270)
ROUTE2271 = x3d.ROUTE()
ROUTE2271.fromField = "value_changed"
ROUTE2271.fromNode = "Pitches_head_RotationInterpolator"
ROUTE2271.toField = "set_rotation"
ROUTE2271.toNode = "hanim_skullbase"

Scene22.children.append(ROUTE2271)
ROUTE2272 = x3d.ROUTE()
ROUTE2272.fromField = "value_changed"
ROUTE2272.fromNode = "Pitches_whole_body_RotationInterpolator"
ROUTE2272.toField = "set_rotation"
ROUTE2272.toNode = "hanim_humanoid_root"

Scene22.children.append(ROUTE2272)
ROUTE2273 = x3d.ROUTE()
ROUTE2273.fromField = "value_changed"
ROUTE2273.fromNode = "Pitches_whole_body_TranslationInterpolator"
ROUTE2273.toField = "set_translation"
ROUTE2273.toNode = "hanim_humanoid_root"

Scene22.children.append(ROUTE2273)
ROUTE2274 = x3d.ROUTE()
ROUTE2274.fromField = "value_changed"
ROUTE2274.fromNode = "Pitch_vl5_YawInterpolator"
ROUTE2274.toField = "set_rotation"
ROUTE2274.toNode = "hanim_vl5"

Scene22.children.append(ROUTE2274)
ROUTE2275 = x3d.ROUTE()
ROUTE2275.fromField = "fraction_changed"
ROUTE2275.fromNode = "YawTimer"
ROUTE2275.toField = "set_fraction"
ROUTE2275.toNode = "Yaws_r_talocrural_RotationInterpolator"

Scene22.children.append(ROUTE2275)
ROUTE2276 = x3d.ROUTE()
ROUTE2276.fromField = "fraction_changed"
ROUTE2276.fromNode = "YawTimer"
ROUTE2276.toField = "set_fraction"
ROUTE2276.toNode = "Yaws_r_knee_RotationInterpolator"

Scene22.children.append(ROUTE2276)
ROUTE2277 = x3d.ROUTE()
ROUTE2277.fromField = "fraction_changed"
ROUTE2277.fromNode = "YawTimer"
ROUTE2277.toField = "set_fraction"
ROUTE2277.toNode = "Yaws_r_hip_RotationInterpolator"

Scene22.children.append(ROUTE2277)
ROUTE2278 = x3d.ROUTE()
ROUTE2278.fromField = "fraction_changed"
ROUTE2278.fromNode = "YawTimer"
ROUTE2278.toField = "set_fraction"
ROUTE2278.toNode = "Yaws_l_talocrural_RotationInterpolator"

Scene22.children.append(ROUTE2278)
ROUTE2279 = x3d.ROUTE()
ROUTE2279.fromField = "fraction_changed"
ROUTE2279.fromNode = "YawTimer"
ROUTE2279.toField = "set_fraction"
ROUTE2279.toNode = "Yaws_l_knee_RotationInterpolator"

Scene22.children.append(ROUTE2279)
ROUTE2280 = x3d.ROUTE()
ROUTE2280.fromField = "fraction_changed"
ROUTE2280.fromNode = "YawTimer"
ROUTE2280.toField = "set_fraction"
ROUTE2280.toNode = "Yaws_l_hip_RotationInterpolator"

Scene22.children.append(ROUTE2280)
ROUTE2281 = x3d.ROUTE()
ROUTE2281.fromField = "fraction_changed"
ROUTE2281.fromNode = "YawTimer"
ROUTE2281.toField = "set_fraction"
ROUTE2281.toNode = "Yaws_lower_body_RotationInterpolator"

Scene22.children.append(ROUTE2281)
ROUTE2282 = x3d.ROUTE()
ROUTE2282.fromField = "fraction_changed"
ROUTE2282.fromNode = "YawTimer"
ROUTE2282.toField = "set_fraction"
ROUTE2282.toNode = "Yaws_r_radiocarpal_RotationInterpolator"

Scene22.children.append(ROUTE2282)
ROUTE2283 = x3d.ROUTE()
ROUTE2283.fromField = "fraction_changed"
ROUTE2283.fromNode = "YawTimer"
ROUTE2283.toField = "set_fraction"
ROUTE2283.toNode = "Yaws_r_elbow_RotationInterpolator"

Scene22.children.append(ROUTE2283)
ROUTE2284 = x3d.ROUTE()
ROUTE2284.fromField = "fraction_changed"
ROUTE2284.fromNode = "YawTimer"
ROUTE2284.toField = "set_fraction"
ROUTE2284.toNode = "Yaws_r_shoulder_RotationInterpolator"

Scene22.children.append(ROUTE2284)
ROUTE2285 = x3d.ROUTE()
ROUTE2285.fromField = "fraction_changed"
ROUTE2285.fromNode = "YawTimer"
ROUTE2285.toField = "set_fraction"
ROUTE2285.toNode = "Yaws_l_radiocarpal_RotationInterpolator"

Scene22.children.append(ROUTE2285)
ROUTE2286 = x3d.ROUTE()
ROUTE2286.fromField = "fraction_changed"
ROUTE2286.fromNode = "YawTimer"
ROUTE2286.toField = "set_fraction"
ROUTE2286.toNode = "Yaws_l_elbow_RotationInterpolator"

Scene22.children.append(ROUTE2286)
ROUTE2287 = x3d.ROUTE()
ROUTE2287.fromField = "fraction_changed"
ROUTE2287.fromNode = "YawTimer"
ROUTE2287.toField = "set_fraction"
ROUTE2287.toNode = "Yaws_l_shoulder_RotationInterpolator"

Scene22.children.append(ROUTE2287)
ROUTE2288 = x3d.ROUTE()
ROUTE2288.fromField = "fraction_changed"
ROUTE2288.fromNode = "YawTimer"
ROUTE2288.toField = "set_fraction"
ROUTE2288.toNode = "Yaws_head_RotationInterpolator"

Scene22.children.append(ROUTE2288)
ROUTE2289 = x3d.ROUTE()
ROUTE2289.fromField = "fraction_changed"
ROUTE2289.fromNode = "YawTimer"
ROUTE2289.toField = "set_fraction"
ROUTE2289.toNode = "Yaws_neck_RotationInterpolator"

Scene22.children.append(ROUTE2289)
ROUTE2290 = x3d.ROUTE()
ROUTE2290.fromField = "fraction_changed"
ROUTE2290.fromNode = "YawTimer"
ROUTE2290.toField = "set_fraction"
ROUTE2290.toNode = "Yaws_upper_body_RotationInterpolator"

Scene22.children.append(ROUTE2290)
ROUTE2291 = x3d.ROUTE()
ROUTE2291.fromField = "fraction_changed"
ROUTE2291.fromNode = "YawTimer"
ROUTE2291.toField = "set_fraction"
ROUTE2291.toNode = "Yaws_whole_body_RotationInterpolator"

Scene22.children.append(ROUTE2291)
ROUTE2292 = x3d.ROUTE()
ROUTE2292.fromField = "fraction_changed"
ROUTE2292.fromNode = "YawTimer"
ROUTE2292.toField = "set_fraction"
ROUTE2292.toNode = "Yaws_whole_body_TranslationInterpolator"

Scene22.children.append(ROUTE2292)
ROUTE2293 = x3d.ROUTE()
ROUTE2293.fromField = "fraction_changed"
ROUTE2293.fromNode = "YawTimer"
ROUTE2293.toField = "set_fraction"
ROUTE2293.toNode = "Yaw_l_sternoclavicular_RollInterpolator"

Scene22.children.append(ROUTE2293)
ROUTE2294 = x3d.ROUTE()
ROUTE2294.fromField = "fraction_changed"
ROUTE2294.fromNode = "YawTimer"
ROUTE2294.toField = "set_fraction"
ROUTE2294.toNode = "Yaw_l_acromioclavicular_RollInterpolator"

Scene22.children.append(ROUTE2294)
ROUTE2295 = x3d.ROUTE()
ROUTE2295.fromField = "fraction_changed"
ROUTE2295.fromNode = "YawTimer"
ROUTE2295.toField = "set_fraction"
ROUTE2295.toNode = "Yaw_r_sternoclavicular_RollInterpolator"

Scene22.children.append(ROUTE2295)
ROUTE2296 = x3d.ROUTE()
ROUTE2296.fromField = "fraction_changed"
ROUTE2296.fromNode = "YawTimer"
ROUTE2296.toField = "set_fraction"
ROUTE2296.toNode = "Yaw_r_acromioclavicular_RollInterpolator"

Scene22.children.append(ROUTE2296)
ROUTE2297 = x3d.ROUTE()
ROUTE2297.fromField = "fraction_changed"
ROUTE2297.fromNode = "YawTimer"
ROUTE2297.toField = "set_fraction"
ROUTE2297.toNode = "Yaw_r_metatarsal_PitchInterpolator"

Scene22.children.append(ROUTE2297)
ROUTE2298 = x3d.ROUTE()
ROUTE2298.fromField = "fraction_changed"
ROUTE2298.fromNode = "YawTimer"
ROUTE2298.toField = "set_fraction"
ROUTE2298.toNode = "Yaw_sacroiliac_YawInterpolator"

Scene22.children.append(ROUTE2298)
ROUTE2299 = x3d.ROUTE()
ROUTE2299.fromField = "fraction_changed"
ROUTE2299.fromNode = "YawTimer"
ROUTE2299.toField = "set_fraction"
ROUTE2299.toNode = "Yaw_vl5_YawInterpolator"

Scene22.children.append(ROUTE2299)
ROUTE2300 = x3d.ROUTE()
ROUTE2300.fromField = "fraction_changed"
ROUTE2300.fromNode = "YawTimer"
ROUTE2300.toField = "set_fraction"
ROUTE2300.toNode = "Yaw_vc6_YawInterpolator"

Scene22.children.append(ROUTE2300)
ROUTE2301 = x3d.ROUTE()
ROUTE2301.fromField = "fraction_changed"
ROUTE2301.fromNode = "YawTimer"
ROUTE2301.toField = "set_fraction"
ROUTE2301.toNode = "Yaw_l_thumb1_PitchInterpolator"

Scene22.children.append(ROUTE2301)
ROUTE2302 = x3d.ROUTE()
ROUTE2302.fromField = "fraction_changed"
ROUTE2302.fromNode = "YawTimer"
ROUTE2302.toField = "set_fraction"
ROUTE2302.toNode = "Yaw_r_thumb1_PitchInterpolator"

Scene22.children.append(ROUTE2302)
ROUTE2303 = x3d.ROUTE()
ROUTE2303.fromField = "value_changed"
ROUTE2303.fromNode = "Yaws_r_talocrural_RotationInterpolator"
ROUTE2303.toField = "set_rotation"
ROUTE2303.toNode = "hanim_r_talocrural"

Scene22.children.append(ROUTE2303)
ROUTE2304 = x3d.ROUTE()
ROUTE2304.fromField = "value_changed"
ROUTE2304.fromNode = "Yaws_r_knee_RotationInterpolator"
ROUTE2304.toField = "set_rotation"
ROUTE2304.toNode = "hanim_r_knee"

Scene22.children.append(ROUTE2304)
ROUTE2305 = x3d.ROUTE()
ROUTE2305.fromField = "value_changed"
ROUTE2305.fromNode = "Yaws_r_hip_RotationInterpolator"
ROUTE2305.toField = "set_rotation"
ROUTE2305.toNode = "hanim_r_hip"

Scene22.children.append(ROUTE2305)
ROUTE2306 = x3d.ROUTE()
ROUTE2306.fromField = "value_changed"
ROUTE2306.fromNode = "Yaws_l_talocrural_RotationInterpolator"
ROUTE2306.toField = "set_rotation"
ROUTE2306.toNode = "hanim_l_talocrural"

Scene22.children.append(ROUTE2306)
ROUTE2307 = x3d.ROUTE()
ROUTE2307.fromField = "value_changed"
ROUTE2307.fromNode = "Yaws_l_knee_RotationInterpolator"
ROUTE2307.toField = "set_rotation"
ROUTE2307.toNode = "hanim_l_knee"

Scene22.children.append(ROUTE2307)
ROUTE2308 = x3d.ROUTE()
ROUTE2308.fromField = "value_changed"
ROUTE2308.fromNode = "Yaws_l_hip_RotationInterpolator"
ROUTE2308.toField = "set_rotation"
ROUTE2308.toNode = "hanim_l_hip"

Scene22.children.append(ROUTE2308)
ROUTE2309 = x3d.ROUTE()
ROUTE2309.fromField = "value_changed"
ROUTE2309.fromNode = "Yaws_r_radiocarpal_RotationInterpolator"
ROUTE2309.toField = "set_rotation"
ROUTE2309.toNode = "hanim_r_radiocarpal"

Scene22.children.append(ROUTE2309)
ROUTE2310 = x3d.ROUTE()
ROUTE2310.fromField = "value_changed"
ROUTE2310.fromNode = "Yaws_r_elbow_RotationInterpolator"
ROUTE2310.toField = "set_rotation"
ROUTE2310.toNode = "hanim_r_elbow"

Scene22.children.append(ROUTE2310)
ROUTE2311 = x3d.ROUTE()
ROUTE2311.fromField = "value_changed"
ROUTE2311.fromNode = "Yaws_r_shoulder_RotationInterpolator"
ROUTE2311.toField = "set_rotation"
ROUTE2311.toNode = "hanim_r_shoulder"

Scene22.children.append(ROUTE2311)
ROUTE2312 = x3d.ROUTE()
ROUTE2312.fromField = "value_changed"
ROUTE2312.fromNode = "Yaws_l_radiocarpal_RotationInterpolator"
ROUTE2312.toField = "set_rotation"
ROUTE2312.toNode = "hanim_l_radiocarpal"

Scene22.children.append(ROUTE2312)
ROUTE2313 = x3d.ROUTE()
ROUTE2313.fromField = "value_changed"
ROUTE2313.fromNode = "Yaws_l_elbow_RotationInterpolator"
ROUTE2313.toField = "set_rotation"
ROUTE2313.toNode = "hanim_l_elbow"

Scene22.children.append(ROUTE2313)
ROUTE2314 = x3d.ROUTE()
ROUTE2314.fromField = "value_changed"
ROUTE2314.fromNode = "Yaws_l_shoulder_RotationInterpolator"
ROUTE2314.toField = "set_rotation"
ROUTE2314.toNode = "hanim_l_shoulder"

Scene22.children.append(ROUTE2314)
ROUTE2315 = x3d.ROUTE()
ROUTE2315.fromField = "value_changed"
ROUTE2315.fromNode = "Yaws_head_RotationInterpolator"
ROUTE2315.toField = "set_rotation"
ROUTE2315.toNode = "hanim_skullbase"

Scene22.children.append(ROUTE2315)
ROUTE2316 = x3d.ROUTE()
ROUTE2316.fromField = "value_changed"
ROUTE2316.fromNode = "Yaws_whole_body_RotationInterpolator"
ROUTE2316.toField = "set_rotation"
ROUTE2316.toNode = "hanim_humanoid_root"

Scene22.children.append(ROUTE2316)
ROUTE2317 = x3d.ROUTE()
ROUTE2317.fromField = "value_changed"
ROUTE2317.fromNode = "Yaws_whole_body_TranslationInterpolator"
ROUTE2317.toField = "set_translation"
ROUTE2317.toNode = "hanim_humanoid_root"

Scene22.children.append(ROUTE2317)
ROUTE2318 = x3d.ROUTE()
ROUTE2318.fromField = "value_changed"
ROUTE2318.fromNode = "Yaw_vl5_YawInterpolator"
ROUTE2318.toField = "set_rotation"
ROUTE2318.toNode = "hanim_vl5"

Scene22.children.append(ROUTE2318)
ROUTE2319 = x3d.ROUTE()
ROUTE2319.fromField = "fraction_changed"
ROUTE2319.fromNode = "RollTimer"
ROUTE2319.toField = "set_fraction"
ROUTE2319.toNode = "Rolls_r_talocrural_RotationInterpolator"

Scene22.children.append(ROUTE2319)
ROUTE2320 = x3d.ROUTE()
ROUTE2320.fromField = "fraction_changed"
ROUTE2320.fromNode = "RollTimer"
ROUTE2320.toField = "set_fraction"
ROUTE2320.toNode = "Rolls_r_knee_RotationInterpolator"

Scene22.children.append(ROUTE2320)
ROUTE2321 = x3d.ROUTE()
ROUTE2321.fromField = "fraction_changed"
ROUTE2321.fromNode = "RollTimer"
ROUTE2321.toField = "set_fraction"
ROUTE2321.toNode = "Rolls_r_hip_RotationInterpolator"

Scene22.children.append(ROUTE2321)
ROUTE2322 = x3d.ROUTE()
ROUTE2322.fromField = "fraction_changed"
ROUTE2322.fromNode = "RollTimer"
ROUTE2322.toField = "set_fraction"
ROUTE2322.toNode = "Rolls_l_talocrural_RotationInterpolator"

Scene22.children.append(ROUTE2322)
ROUTE2323 = x3d.ROUTE()
ROUTE2323.fromField = "fraction_changed"
ROUTE2323.fromNode = "RollTimer"
ROUTE2323.toField = "set_fraction"
ROUTE2323.toNode = "Rolls_l_knee_RotationInterpolator"

Scene22.children.append(ROUTE2323)
ROUTE2324 = x3d.ROUTE()
ROUTE2324.fromField = "fraction_changed"
ROUTE2324.fromNode = "RollTimer"
ROUTE2324.toField = "set_fraction"
ROUTE2324.toNode = "Rolls_l_hip_RotationInterpolator"

Scene22.children.append(ROUTE2324)
ROUTE2325 = x3d.ROUTE()
ROUTE2325.fromField = "fraction_changed"
ROUTE2325.fromNode = "RollTimer"
ROUTE2325.toField = "set_fraction"
ROUTE2325.toNode = "Rolls_lower_body_RotationInterpolator"

Scene22.children.append(ROUTE2325)
ROUTE2326 = x3d.ROUTE()
ROUTE2326.fromField = "fraction_changed"
ROUTE2326.fromNode = "RollTimer"
ROUTE2326.toField = "set_fraction"
ROUTE2326.toNode = "Rolls_r_radiocarpal_RotationInterpolator"

Scene22.children.append(ROUTE2326)
ROUTE2327 = x3d.ROUTE()
ROUTE2327.fromField = "fraction_changed"
ROUTE2327.fromNode = "RollTimer"
ROUTE2327.toField = "set_fraction"
ROUTE2327.toNode = "Rolls_r_elbow_RotationInterpolator"

Scene22.children.append(ROUTE2327)
ROUTE2328 = x3d.ROUTE()
ROUTE2328.fromField = "fraction_changed"
ROUTE2328.fromNode = "RollTimer"
ROUTE2328.toField = "set_fraction"
ROUTE2328.toNode = "Rolls_r_shoulder_RotationInterpolator"

Scene22.children.append(ROUTE2328)
ROUTE2329 = x3d.ROUTE()
ROUTE2329.fromField = "fraction_changed"
ROUTE2329.fromNode = "RollTimer"
ROUTE2329.toField = "set_fraction"
ROUTE2329.toNode = "Rolls_l_radiocarpal_RotationInterpolator"

Scene22.children.append(ROUTE2329)
ROUTE2330 = x3d.ROUTE()
ROUTE2330.fromField = "fraction_changed"
ROUTE2330.fromNode = "RollTimer"
ROUTE2330.toField = "set_fraction"
ROUTE2330.toNode = "Rolls_l_elbow_RotationInterpolator"

Scene22.children.append(ROUTE2330)
ROUTE2331 = x3d.ROUTE()
ROUTE2331.fromField = "fraction_changed"
ROUTE2331.fromNode = "RollTimer"
ROUTE2331.toField = "set_fraction"
ROUTE2331.toNode = "Rolls_l_shoulder_RotationInterpolator"

Scene22.children.append(ROUTE2331)
ROUTE2332 = x3d.ROUTE()
ROUTE2332.fromField = "fraction_changed"
ROUTE2332.fromNode = "RollTimer"
ROUTE2332.toField = "set_fraction"
ROUTE2332.toNode = "Rolls_head_RotationInterpolator"

Scene22.children.append(ROUTE2332)
ROUTE2333 = x3d.ROUTE()
ROUTE2333.fromField = "fraction_changed"
ROUTE2333.fromNode = "RollTimer"
ROUTE2333.toField = "set_fraction"
ROUTE2333.toNode = "Rolls_neck_RotationInterpolator"

Scene22.children.append(ROUTE2333)
ROUTE2334 = x3d.ROUTE()
ROUTE2334.fromField = "fraction_changed"
ROUTE2334.fromNode = "RollTimer"
ROUTE2334.toField = "set_fraction"
ROUTE2334.toNode = "Rolls_upper_body_RotationInterpolator"

Scene22.children.append(ROUTE2334)
ROUTE2335 = x3d.ROUTE()
ROUTE2335.fromField = "fraction_changed"
ROUTE2335.fromNode = "RollTimer"
ROUTE2335.toField = "set_fraction"
ROUTE2335.toNode = "Rolls_whole_body_RotationInterpolator"

Scene22.children.append(ROUTE2335)
ROUTE2336 = x3d.ROUTE()
ROUTE2336.fromField = "fraction_changed"
ROUTE2336.fromNode = "RollTimer"
ROUTE2336.toField = "set_fraction"
ROUTE2336.toNode = "Rolls_whole_body_TranslationInterpolator"

Scene22.children.append(ROUTE2336)
ROUTE2337 = x3d.ROUTE()
ROUTE2337.fromField = "fraction_changed"
ROUTE2337.fromNode = "RollTimer"
ROUTE2337.toField = "set_fraction"
ROUTE2337.toNode = "Roll_l_sternoclavicular_RollInterpolator"

Scene22.children.append(ROUTE2337)
ROUTE2338 = x3d.ROUTE()
ROUTE2338.fromField = "fraction_changed"
ROUTE2338.fromNode = "RollTimer"
ROUTE2338.toField = "set_fraction"
ROUTE2338.toNode = "Roll_l_acromioclavicular_RollInterpolator"

Scene22.children.append(ROUTE2338)
ROUTE2339 = x3d.ROUTE()
ROUTE2339.fromField = "fraction_changed"
ROUTE2339.fromNode = "RollTimer"
ROUTE2339.toField = "set_fraction"
ROUTE2339.toNode = "Roll_r_sternoclavicular_RollInterpolator"

Scene22.children.append(ROUTE2339)
ROUTE2340 = x3d.ROUTE()
ROUTE2340.fromField = "fraction_changed"
ROUTE2340.fromNode = "RollTimer"
ROUTE2340.toField = "set_fraction"
ROUTE2340.toNode = "Roll_r_acromioclavicular_RollInterpolator"

Scene22.children.append(ROUTE2340)
ROUTE2341 = x3d.ROUTE()
ROUTE2341.fromField = "fraction_changed"
ROUTE2341.fromNode = "RollTimer"
ROUTE2341.toField = "set_fraction"
ROUTE2341.toNode = "Roll_r_metatarsal_PitchInterpolator"

Scene22.children.append(ROUTE2341)
ROUTE2342 = x3d.ROUTE()
ROUTE2342.fromField = "fraction_changed"
ROUTE2342.fromNode = "RollTimer"
ROUTE2342.toField = "set_fraction"
ROUTE2342.toNode = "Roll_sacroiliac_YawInterpolator"

Scene22.children.append(ROUTE2342)
ROUTE2343 = x3d.ROUTE()
ROUTE2343.fromField = "fraction_changed"
ROUTE2343.fromNode = "RollTimer"
ROUTE2343.toField = "set_fraction"
ROUTE2343.toNode = "Roll_vl5_YawInterpolator"

Scene22.children.append(ROUTE2343)
ROUTE2344 = x3d.ROUTE()
ROUTE2344.fromField = "fraction_changed"
ROUTE2344.fromNode = "RollTimer"
ROUTE2344.toField = "set_fraction"
ROUTE2344.toNode = "Roll_vc6_YawInterpolator"

Scene22.children.append(ROUTE2344)
ROUTE2345 = x3d.ROUTE()
ROUTE2345.fromField = "fraction_changed"
ROUTE2345.fromNode = "RollTimer"
ROUTE2345.toField = "set_fraction"
ROUTE2345.toNode = "Roll_l_thumb1_PitchInterpolator"

Scene22.children.append(ROUTE2345)
ROUTE2346 = x3d.ROUTE()
ROUTE2346.fromField = "fraction_changed"
ROUTE2346.fromNode = "RollTimer"
ROUTE2346.toField = "set_fraction"
ROUTE2346.toNode = "Roll_r_thumb1_PitchInterpolator"

Scene22.children.append(ROUTE2346)
ROUTE2347 = x3d.ROUTE()
ROUTE2347.fromField = "value_changed"
ROUTE2347.fromNode = "Rolls_r_talocrural_RotationInterpolator"
ROUTE2347.toField = "set_rotation"
ROUTE2347.toNode = "hanim_r_talocrural"

Scene22.children.append(ROUTE2347)
ROUTE2348 = x3d.ROUTE()
ROUTE2348.fromField = "value_changed"
ROUTE2348.fromNode = "Rolls_r_knee_RotationInterpolator"
ROUTE2348.toField = "set_rotation"
ROUTE2348.toNode = "hanim_r_knee"

Scene22.children.append(ROUTE2348)
ROUTE2349 = x3d.ROUTE()
ROUTE2349.fromField = "value_changed"
ROUTE2349.fromNode = "Rolls_r_hip_RotationInterpolator"
ROUTE2349.toField = "set_rotation"
ROUTE2349.toNode = "hanim_r_hip"

Scene22.children.append(ROUTE2349)
ROUTE2350 = x3d.ROUTE()
ROUTE2350.fromField = "value_changed"
ROUTE2350.fromNode = "Rolls_l_talocrural_RotationInterpolator"
ROUTE2350.toField = "set_rotation"
ROUTE2350.toNode = "hanim_l_talocrural"

Scene22.children.append(ROUTE2350)
ROUTE2351 = x3d.ROUTE()
ROUTE2351.fromField = "value_changed"
ROUTE2351.fromNode = "Rolls_l_knee_RotationInterpolator"
ROUTE2351.toField = "set_rotation"
ROUTE2351.toNode = "hanim_l_knee"

Scene22.children.append(ROUTE2351)
ROUTE2352 = x3d.ROUTE()
ROUTE2352.fromField = "value_changed"
ROUTE2352.fromNode = "Rolls_l_hip_RotationInterpolator"
ROUTE2352.toField = "set_rotation"
ROUTE2352.toNode = "hanim_l_hip"

Scene22.children.append(ROUTE2352)
ROUTE2353 = x3d.ROUTE()
ROUTE2353.fromField = "value_changed"
ROUTE2353.fromNode = "Rolls_r_radiocarpal_RotationInterpolator"
ROUTE2353.toField = "set_rotation"
ROUTE2353.toNode = "hanim_r_radiocarpal"

Scene22.children.append(ROUTE2353)
ROUTE2354 = x3d.ROUTE()
ROUTE2354.fromField = "value_changed"
ROUTE2354.fromNode = "Rolls_r_elbow_RotationInterpolator"
ROUTE2354.toField = "set_rotation"
ROUTE2354.toNode = "hanim_r_elbow"

Scene22.children.append(ROUTE2354)
ROUTE2355 = x3d.ROUTE()
ROUTE2355.fromField = "value_changed"
ROUTE2355.fromNode = "Rolls_r_shoulder_RotationInterpolator"
ROUTE2355.toField = "set_rotation"
ROUTE2355.toNode = "hanim_r_shoulder"

Scene22.children.append(ROUTE2355)
ROUTE2356 = x3d.ROUTE()
ROUTE2356.fromField = "value_changed"
ROUTE2356.fromNode = "Rolls_l_radiocarpal_RotationInterpolator"
ROUTE2356.toField = "set_rotation"
ROUTE2356.toNode = "hanim_l_radiocarpal"

Scene22.children.append(ROUTE2356)
ROUTE2357 = x3d.ROUTE()
ROUTE2357.fromField = "value_changed"
ROUTE2357.fromNode = "Rolls_l_elbow_RotationInterpolator"
ROUTE2357.toField = "set_rotation"
ROUTE2357.toNode = "hanim_l_elbow"

Scene22.children.append(ROUTE2357)
ROUTE2358 = x3d.ROUTE()
ROUTE2358.fromField = "value_changed"
ROUTE2358.fromNode = "Rolls_l_shoulder_RotationInterpolator"
ROUTE2358.toField = "set_rotation"
ROUTE2358.toNode = "hanim_l_shoulder"

Scene22.children.append(ROUTE2358)
ROUTE2359 = x3d.ROUTE()
ROUTE2359.fromField = "value_changed"
ROUTE2359.fromNode = "Rolls_head_RotationInterpolator"
ROUTE2359.toField = "set_rotation"
ROUTE2359.toNode = "hanim_skullbase"

Scene22.children.append(ROUTE2359)
ROUTE2360 = x3d.ROUTE()
ROUTE2360.fromField = "value_changed"
ROUTE2360.fromNode = "Rolls_whole_body_RotationInterpolator"
ROUTE2360.toField = "set_rotation"
ROUTE2360.toNode = "hanim_humanoid_root"

Scene22.children.append(ROUTE2360)
ROUTE2361 = x3d.ROUTE()
ROUTE2361.fromField = "value_changed"
ROUTE2361.fromNode = "Rolls_whole_body_TranslationInterpolator"
ROUTE2361.toField = "set_translation"
ROUTE2361.toNode = "hanim_humanoid_root"

Scene22.children.append(ROUTE2361)
ROUTE2362 = x3d.ROUTE()
ROUTE2362.fromField = "value_changed"
ROUTE2362.fromNode = "Roll_vl5_YawInterpolator"
ROUTE2362.toField = "set_rotation"
ROUTE2362.toNode = "hanim_vl5"

Scene22.children.append(ROUTE2362)
ROUTE2363 = x3d.ROUTE()
ROUTE2363.fromField = "fraction_changed"
ROUTE2363.fromNode = "WalkTimer"
ROUTE2363.toField = "set_fraction"
ROUTE2363.toNode = "Walk_r_talocrural_RotationInterpolator"

Scene22.children.append(ROUTE2363)
ROUTE2364 = x3d.ROUTE()
ROUTE2364.fromField = "fraction_changed"
ROUTE2364.fromNode = "WalkTimer"
ROUTE2364.toField = "set_fraction"
ROUTE2364.toNode = "Walk_r_knee_RotationInterpolator"

Scene22.children.append(ROUTE2364)
ROUTE2365 = x3d.ROUTE()
ROUTE2365.fromField = "fraction_changed"
ROUTE2365.fromNode = "WalkTimer"
ROUTE2365.toField = "set_fraction"
ROUTE2365.toNode = "Walk_r_hip_RotationInterpolator"

Scene22.children.append(ROUTE2365)
ROUTE2366 = x3d.ROUTE()
ROUTE2366.fromField = "fraction_changed"
ROUTE2366.fromNode = "WalkTimer"
ROUTE2366.toField = "set_fraction"
ROUTE2366.toNode = "Walk_l_talocrural_RotationInterpolator"

Scene22.children.append(ROUTE2366)
ROUTE2367 = x3d.ROUTE()
ROUTE2367.fromField = "fraction_changed"
ROUTE2367.fromNode = "WalkTimer"
ROUTE2367.toField = "set_fraction"
ROUTE2367.toNode = "Walk_l_knee_RotationInterpolator"

Scene22.children.append(ROUTE2367)
ROUTE2368 = x3d.ROUTE()
ROUTE2368.fromField = "fraction_changed"
ROUTE2368.fromNode = "WalkTimer"
ROUTE2368.toField = "set_fraction"
ROUTE2368.toNode = "Walk_l_hip_RotationInterpolator"

Scene22.children.append(ROUTE2368)
ROUTE2369 = x3d.ROUTE()
ROUTE2369.fromField = "fraction_changed"
ROUTE2369.fromNode = "WalkTimer"
ROUTE2369.toField = "set_fraction"
ROUTE2369.toNode = "Walk_lower_body_RotationInterpolator"

Scene22.children.append(ROUTE2369)
ROUTE2370 = x3d.ROUTE()
ROUTE2370.fromField = "fraction_changed"
ROUTE2370.fromNode = "WalkTimer"
ROUTE2370.toField = "set_fraction"
ROUTE2370.toNode = "Walk_r_radiocarpal_RotationInterpolator"

Scene22.children.append(ROUTE2370)
ROUTE2371 = x3d.ROUTE()
ROUTE2371.fromField = "fraction_changed"
ROUTE2371.fromNode = "WalkTimer"
ROUTE2371.toField = "set_fraction"
ROUTE2371.toNode = "Walk_r_elbow_RotationInterpolator"

Scene22.children.append(ROUTE2371)
ROUTE2372 = x3d.ROUTE()
ROUTE2372.fromField = "fraction_changed"
ROUTE2372.fromNode = "WalkTimer"
ROUTE2372.toField = "set_fraction"
ROUTE2372.toNode = "Walk_r_shoulder_RotationInterpolator"

Scene22.children.append(ROUTE2372)
ROUTE2373 = x3d.ROUTE()
ROUTE2373.fromField = "fraction_changed"
ROUTE2373.fromNode = "WalkTimer"
ROUTE2373.toField = "set_fraction"
ROUTE2373.toNode = "Walk_l_radiocarpal_RotationInterpolator"

Scene22.children.append(ROUTE2373)
ROUTE2374 = x3d.ROUTE()
ROUTE2374.fromField = "fraction_changed"
ROUTE2374.fromNode = "WalkTimer"
ROUTE2374.toField = "set_fraction"
ROUTE2374.toNode = "Walk_l_elbow_RotationInterpolator"

Scene22.children.append(ROUTE2374)
ROUTE2375 = x3d.ROUTE()
ROUTE2375.fromField = "fraction_changed"
ROUTE2375.fromNode = "WalkTimer"
ROUTE2375.toField = "set_fraction"
ROUTE2375.toNode = "Walk_l_shoulder_RotationInterpolator"

Scene22.children.append(ROUTE2375)
ROUTE2376 = x3d.ROUTE()
ROUTE2376.fromField = "fraction_changed"
ROUTE2376.fromNode = "WalkTimer"
ROUTE2376.toField = "set_fraction"
ROUTE2376.toNode = "Walk_head_RotationInterpolator"

Scene22.children.append(ROUTE2376)
ROUTE2377 = x3d.ROUTE()
ROUTE2377.fromField = "fraction_changed"
ROUTE2377.fromNode = "WalkTimer"
ROUTE2377.toField = "set_fraction"
ROUTE2377.toNode = "Walk_neck_RotationInterpolator"

Scene22.children.append(ROUTE2377)
ROUTE2378 = x3d.ROUTE()
ROUTE2378.fromField = "fraction_changed"
ROUTE2378.fromNode = "WalkTimer"
ROUTE2378.toField = "set_fraction"
ROUTE2378.toNode = "Walk_upper_body_RotationInterpolator"

Scene22.children.append(ROUTE2378)
ROUTE2379 = x3d.ROUTE()
ROUTE2379.fromField = "fraction_changed"
ROUTE2379.fromNode = "WalkTimer"
ROUTE2379.toField = "set_fraction"
ROUTE2379.toNode = "Walk_whole_body_RotationInterpolator"

Scene22.children.append(ROUTE2379)
ROUTE2380 = x3d.ROUTE()
ROUTE2380.fromField = "fraction_changed"
ROUTE2380.fromNode = "WalkTimer"
ROUTE2380.toField = "set_fraction"
ROUTE2380.toNode = "Walk_whole_body_TranslationInterpolator"

Scene22.children.append(ROUTE2380)
ROUTE2381 = x3d.ROUTE()
ROUTE2381.fromField = "fraction_changed"
ROUTE2381.fromNode = "WalkTimer"
ROUTE2381.toField = "set_fraction"
ROUTE2381.toNode = "Walk_l_sternoclavicular_RollInterpolator"

Scene22.children.append(ROUTE2381)
ROUTE2382 = x3d.ROUTE()
ROUTE2382.fromField = "fraction_changed"
ROUTE2382.fromNode = "WalkTimer"
ROUTE2382.toField = "set_fraction"
ROUTE2382.toNode = "Walk_l_acromioclavicular_RollInterpolator"

Scene22.children.append(ROUTE2382)
ROUTE2383 = x3d.ROUTE()
ROUTE2383.fromField = "fraction_changed"
ROUTE2383.fromNode = "WalkTimer"
ROUTE2383.toField = "set_fraction"
ROUTE2383.toNode = "Walk_r_sternoclavicular_RollInterpolator"

Scene22.children.append(ROUTE2383)
ROUTE2384 = x3d.ROUTE()
ROUTE2384.fromField = "fraction_changed"
ROUTE2384.fromNode = "WalkTimer"
ROUTE2384.toField = "set_fraction"
ROUTE2384.toNode = "Walk_r_acromioclavicular_RollInterpolator"

Scene22.children.append(ROUTE2384)
ROUTE2385 = x3d.ROUTE()
ROUTE2385.fromField = "fraction_changed"
ROUTE2385.fromNode = "WalkTimer"
ROUTE2385.toField = "set_fraction"
ROUTE2385.toNode = "Walk_r_metatarsal_PitchInterpolator"

Scene22.children.append(ROUTE2385)
ROUTE2386 = x3d.ROUTE()
ROUTE2386.fromField = "fraction_changed"
ROUTE2386.fromNode = "WalkTimer"
ROUTE2386.toField = "set_fraction"
ROUTE2386.toNode = "Walk_sacroiliac_YawInterpolator"

Scene22.children.append(ROUTE2386)
ROUTE2387 = x3d.ROUTE()
ROUTE2387.fromField = "fraction_changed"
ROUTE2387.fromNode = "WalkTimer"
ROUTE2387.toField = "set_fraction"
ROUTE2387.toNode = "Walk_vl5_YawInterpolator"

Scene22.children.append(ROUTE2387)
ROUTE2388 = x3d.ROUTE()
ROUTE2388.fromField = "fraction_changed"
ROUTE2388.fromNode = "WalkTimer"
ROUTE2388.toField = "set_fraction"
ROUTE2388.toNode = "Walk_vc6_YawInterpolator"

Scene22.children.append(ROUTE2388)
ROUTE2389 = x3d.ROUTE()
ROUTE2389.fromField = "fraction_changed"
ROUTE2389.fromNode = "WalkTimer"
ROUTE2389.toField = "set_fraction"
ROUTE2389.toNode = "Walk_l_thumb1_PitchInterpolator"

Scene22.children.append(ROUTE2389)
ROUTE2390 = x3d.ROUTE()
ROUTE2390.fromField = "fraction_changed"
ROUTE2390.fromNode = "WalkTimer"
ROUTE2390.toField = "set_fraction"
ROUTE2390.toNode = "Walk_r_thumb1_PitchInterpolator"

Scene22.children.append(ROUTE2390)
ROUTE2391 = x3d.ROUTE()
ROUTE2391.fromField = "value_changed"
ROUTE2391.fromNode = "Walk_r_talocrural_RotationInterpolator"
ROUTE2391.toField = "set_rotation"
ROUTE2391.toNode = "hanim_r_talocrural"

Scene22.children.append(ROUTE2391)
ROUTE2392 = x3d.ROUTE()
ROUTE2392.fromField = "value_changed"
ROUTE2392.fromNode = "Walk_r_knee_RotationInterpolator"
ROUTE2392.toField = "set_rotation"
ROUTE2392.toNode = "hanim_r_knee"

Scene22.children.append(ROUTE2392)
ROUTE2393 = x3d.ROUTE()
ROUTE2393.fromField = "value_changed"
ROUTE2393.fromNode = "Walk_r_hip_RotationInterpolator"
ROUTE2393.toField = "set_rotation"
ROUTE2393.toNode = "hanim_r_hip"

Scene22.children.append(ROUTE2393)
ROUTE2394 = x3d.ROUTE()
ROUTE2394.fromField = "value_changed"
ROUTE2394.fromNode = "Walk_l_talocrural_RotationInterpolator"
ROUTE2394.toField = "set_rotation"
ROUTE2394.toNode = "hanim_l_talocrural"

Scene22.children.append(ROUTE2394)
ROUTE2395 = x3d.ROUTE()
ROUTE2395.fromField = "value_changed"
ROUTE2395.fromNode = "Walk_l_knee_RotationInterpolator"
ROUTE2395.toField = "set_rotation"
ROUTE2395.toNode = "hanim_l_knee"

Scene22.children.append(ROUTE2395)
ROUTE2396 = x3d.ROUTE()
ROUTE2396.fromField = "value_changed"
ROUTE2396.fromNode = "Walk_l_hip_RotationInterpolator"
ROUTE2396.toField = "set_rotation"
ROUTE2396.toNode = "hanim_l_hip"

Scene22.children.append(ROUTE2396)
ROUTE2397 = x3d.ROUTE()
ROUTE2397.fromField = "value_changed"
ROUTE2397.fromNode = "Walk_r_radiocarpal_RotationInterpolator"
ROUTE2397.toField = "set_rotation"
ROUTE2397.toNode = "hanim_r_radiocarpal"

Scene22.children.append(ROUTE2397)
ROUTE2398 = x3d.ROUTE()
ROUTE2398.fromField = "value_changed"
ROUTE2398.fromNode = "Walk_r_elbow_RotationInterpolator"
ROUTE2398.toField = "set_rotation"
ROUTE2398.toNode = "hanim_r_elbow"

Scene22.children.append(ROUTE2398)
ROUTE2399 = x3d.ROUTE()
ROUTE2399.fromField = "value_changed"
ROUTE2399.fromNode = "Walk_r_shoulder_RotationInterpolator"
ROUTE2399.toField = "set_rotation"
ROUTE2399.toNode = "hanim_r_shoulder"

Scene22.children.append(ROUTE2399)
ROUTE2400 = x3d.ROUTE()
ROUTE2400.fromField = "value_changed"
ROUTE2400.fromNode = "Walk_l_radiocarpal_RotationInterpolator"
ROUTE2400.toField = "set_rotation"
ROUTE2400.toNode = "hanim_l_radiocarpal"

Scene22.children.append(ROUTE2400)
ROUTE2401 = x3d.ROUTE()
ROUTE2401.fromField = "value_changed"
ROUTE2401.fromNode = "Walk_l_elbow_RotationInterpolator"
ROUTE2401.toField = "set_rotation"
ROUTE2401.toNode = "hanim_l_elbow"

Scene22.children.append(ROUTE2401)
ROUTE2402 = x3d.ROUTE()
ROUTE2402.fromField = "value_changed"
ROUTE2402.fromNode = "Walk_l_shoulder_RotationInterpolator"
ROUTE2402.toField = "set_rotation"
ROUTE2402.toNode = "hanim_l_shoulder"

Scene22.children.append(ROUTE2402)
ROUTE2403 = x3d.ROUTE()
ROUTE2403.fromField = "value_changed"
ROUTE2403.fromNode = "Walk_head_RotationInterpolator"
ROUTE2403.toField = "set_rotation"
ROUTE2403.toNode = "hanim_skullbase"

Scene22.children.append(ROUTE2403)
ROUTE2404 = x3d.ROUTE()
ROUTE2404.fromField = "value_changed"
ROUTE2404.fromNode = "Walk_whole_body_RotationInterpolator"
ROUTE2404.toField = "set_rotation"
ROUTE2404.toNode = "hanim_humanoid_root"

Scene22.children.append(ROUTE2404)
ROUTE2405 = x3d.ROUTE()
ROUTE2405.fromField = "value_changed"
ROUTE2405.fromNode = "Walk_whole_body_TranslationInterpolator"
ROUTE2405.toField = "set_translation"
ROUTE2405.toNode = "hanim_humanoid_root"

Scene22.children.append(ROUTE2405)
ROUTE2406 = x3d.ROUTE()
ROUTE2406.fromField = "value_changed"
ROUTE2406.fromNode = "Walk_vl5_YawInterpolator"
ROUTE2406.toField = "set_rotation"
ROUTE2406.toNode = "hanim_vl5"

Scene22.children.append(ROUTE2406)
ROUTE2407 = x3d.ROUTE()
ROUTE2407.fromField = "fraction_changed"
ROUTE2407.fromNode = "RunTimer"
ROUTE2407.toField = "set_fraction"
ROUTE2407.toNode = "Run_r_talocrural_RotationInterpolator_Run"

Scene22.children.append(ROUTE2407)
ROUTE2408 = x3d.ROUTE()
ROUTE2408.fromField = "fraction_changed"
ROUTE2408.fromNode = "RunTimer"
ROUTE2408.toField = "set_fraction"
ROUTE2408.toNode = "Run_r_knee_RotationInterpolator_Run"

Scene22.children.append(ROUTE2408)
ROUTE2409 = x3d.ROUTE()
ROUTE2409.fromField = "fraction_changed"
ROUTE2409.fromNode = "RunTimer"
ROUTE2409.toField = "set_fraction"
ROUTE2409.toNode = "Run_r_hip_RotationInterpolator_Run"

Scene22.children.append(ROUTE2409)
ROUTE2410 = x3d.ROUTE()
ROUTE2410.fromField = "fraction_changed"
ROUTE2410.fromNode = "RunTimer"
ROUTE2410.toField = "set_fraction"
ROUTE2410.toNode = "Run_l_talocrural_RotationInterpolator_Run"

Scene22.children.append(ROUTE2410)
ROUTE2411 = x3d.ROUTE()
ROUTE2411.fromField = "fraction_changed"
ROUTE2411.fromNode = "RunTimer"
ROUTE2411.toField = "set_fraction"
ROUTE2411.toNode = "Run_l_knee_RotationInterpolator_Run"

Scene22.children.append(ROUTE2411)
ROUTE2412 = x3d.ROUTE()
ROUTE2412.fromField = "fraction_changed"
ROUTE2412.fromNode = "RunTimer"
ROUTE2412.toField = "set_fraction"
ROUTE2412.toNode = "Run_l_hip_RotationInterpolator_Run"

Scene22.children.append(ROUTE2412)
ROUTE2413 = x3d.ROUTE()
ROUTE2413.fromField = "fraction_changed"
ROUTE2413.fromNode = "RunTimer"
ROUTE2413.toField = "set_fraction"
ROUTE2413.toNode = "Run_lower_body_RotationInterpolator_Run"

Scene22.children.append(ROUTE2413)
ROUTE2414 = x3d.ROUTE()
ROUTE2414.fromField = "fraction_changed"
ROUTE2414.fromNode = "RunTimer"
ROUTE2414.toField = "set_fraction"
ROUTE2414.toNode = "Run_r_radiocarpal_RotationInterpolator_Run"

Scene22.children.append(ROUTE2414)
ROUTE2415 = x3d.ROUTE()
ROUTE2415.fromField = "fraction_changed"
ROUTE2415.fromNode = "RunTimer"
ROUTE2415.toField = "set_fraction"
ROUTE2415.toNode = "Run_r_elbow_RotationInterpolator_Run"

Scene22.children.append(ROUTE2415)
ROUTE2416 = x3d.ROUTE()
ROUTE2416.fromField = "fraction_changed"
ROUTE2416.fromNode = "RunTimer"
ROUTE2416.toField = "set_fraction"
ROUTE2416.toNode = "Run_r_shoulder_RotationInterpolator_Run"

Scene22.children.append(ROUTE2416)
ROUTE2417 = x3d.ROUTE()
ROUTE2417.fromField = "fraction_changed"
ROUTE2417.fromNode = "RunTimer"
ROUTE2417.toField = "set_fraction"
ROUTE2417.toNode = "Run_l_radiocarpal_RotationInterpolator_Run"

Scene22.children.append(ROUTE2417)
ROUTE2418 = x3d.ROUTE()
ROUTE2418.fromField = "fraction_changed"
ROUTE2418.fromNode = "RunTimer"
ROUTE2418.toField = "set_fraction"
ROUTE2418.toNode = "Run_l_elbow_RotationInterpolator_Run"

Scene22.children.append(ROUTE2418)
ROUTE2419 = x3d.ROUTE()
ROUTE2419.fromField = "fraction_changed"
ROUTE2419.fromNode = "RunTimer"
ROUTE2419.toField = "set_fraction"
ROUTE2419.toNode = "Run_l_shoulder_RotationInterpolator_Run"

Scene22.children.append(ROUTE2419)
ROUTE2420 = x3d.ROUTE()
ROUTE2420.fromField = "fraction_changed"
ROUTE2420.fromNode = "RunTimer"
ROUTE2420.toField = "set_fraction"
ROUTE2420.toNode = "Run_head_RotationInterpolator_Run"

Scene22.children.append(ROUTE2420)
ROUTE2421 = x3d.ROUTE()
ROUTE2421.fromField = "fraction_changed"
ROUTE2421.fromNode = "RunTimer"
ROUTE2421.toField = "set_fraction"
ROUTE2421.toNode = "Run_neck_RotationInterpolator_Run"

Scene22.children.append(ROUTE2421)
ROUTE2422 = x3d.ROUTE()
ROUTE2422.fromField = "fraction_changed"
ROUTE2422.fromNode = "RunTimer"
ROUTE2422.toField = "set_fraction"
ROUTE2422.toNode = "Run_upper_body_RotationInterpolator_Run"

Scene22.children.append(ROUTE2422)
ROUTE2423 = x3d.ROUTE()
ROUTE2423.fromField = "fraction_changed"
ROUTE2423.fromNode = "RunTimer"
ROUTE2423.toField = "set_fraction"
ROUTE2423.toNode = "Run_whole_body_RotationInterpolator_Run"

Scene22.children.append(ROUTE2423)
ROUTE2424 = x3d.ROUTE()
ROUTE2424.fromField = "fraction_changed"
ROUTE2424.fromNode = "RunTimer"
ROUTE2424.toField = "set_fraction"
ROUTE2424.toNode = "Run_whole_body_TranslationInterpolator_Run"

Scene22.children.append(ROUTE2424)
ROUTE2425 = x3d.ROUTE()
ROUTE2425.fromField = "fraction_changed"
ROUTE2425.fromNode = "RunTimer"
ROUTE2425.toField = "set_fraction"
ROUTE2425.toNode = "Run_l_sternoclavicular_RollInterpolator"

Scene22.children.append(ROUTE2425)
ROUTE2426 = x3d.ROUTE()
ROUTE2426.fromField = "fraction_changed"
ROUTE2426.fromNode = "RunTimer"
ROUTE2426.toField = "set_fraction"
ROUTE2426.toNode = "Run_l_acromioclavicular_RollInterpolator"

Scene22.children.append(ROUTE2426)
ROUTE2427 = x3d.ROUTE()
ROUTE2427.fromField = "fraction_changed"
ROUTE2427.fromNode = "RunTimer"
ROUTE2427.toField = "set_fraction"
ROUTE2427.toNode = "Run_r_sternoclavicular_RollInterpolator"

Scene22.children.append(ROUTE2427)
ROUTE2428 = x3d.ROUTE()
ROUTE2428.fromField = "fraction_changed"
ROUTE2428.fromNode = "RunTimer"
ROUTE2428.toField = "set_fraction"
ROUTE2428.toNode = "Run_r_acromioclavicular_RollInterpolator"

Scene22.children.append(ROUTE2428)
ROUTE2429 = x3d.ROUTE()
ROUTE2429.fromField = "fraction_changed"
ROUTE2429.fromNode = "RunTimer"
ROUTE2429.toField = "set_fraction"
ROUTE2429.toNode = "Run_r_metatarsal_PitchInterpolator"

Scene22.children.append(ROUTE2429)
ROUTE2430 = x3d.ROUTE()
ROUTE2430.fromField = "fraction_changed"
ROUTE2430.fromNode = "RunTimer"
ROUTE2430.toField = "set_fraction"
ROUTE2430.toNode = "Run_sacroiliac_YawInterpolator"

Scene22.children.append(ROUTE2430)
ROUTE2431 = x3d.ROUTE()
ROUTE2431.fromField = "fraction_changed"
ROUTE2431.fromNode = "RunTimer"
ROUTE2431.toField = "set_fraction"
ROUTE2431.toNode = "Run_vl5_YawInterpolator"

Scene22.children.append(ROUTE2431)
ROUTE2432 = x3d.ROUTE()
ROUTE2432.fromField = "fraction_changed"
ROUTE2432.fromNode = "RunTimer"
ROUTE2432.toField = "set_fraction"
ROUTE2432.toNode = "Run_vc6_YawInterpolator"

Scene22.children.append(ROUTE2432)
ROUTE2433 = x3d.ROUTE()
ROUTE2433.fromField = "fraction_changed"
ROUTE2433.fromNode = "RunTimer"
ROUTE2433.toField = "set_fraction"
ROUTE2433.toNode = "Run_l_thumb1_PitchInterpolator"

Scene22.children.append(ROUTE2433)
ROUTE2434 = x3d.ROUTE()
ROUTE2434.fromField = "fraction_changed"
ROUTE2434.fromNode = "RunTimer"
ROUTE2434.toField = "set_fraction"
ROUTE2434.toNode = "Run_r_thumb1_PitchInterpolator"

Scene22.children.append(ROUTE2434)
ROUTE2435 = x3d.ROUTE()
ROUTE2435.fromField = "value_changed"
ROUTE2435.fromNode = "Run_r_talocrural_RotationInterpolator_Run"
ROUTE2435.toField = "set_rotation"
ROUTE2435.toNode = "hanim_r_talocrural"

Scene22.children.append(ROUTE2435)
ROUTE2436 = x3d.ROUTE()
ROUTE2436.fromField = "value_changed"
ROUTE2436.fromNode = "Run_r_knee_RotationInterpolator_Run"
ROUTE2436.toField = "set_rotation"
ROUTE2436.toNode = "hanim_r_knee"

Scene22.children.append(ROUTE2436)
ROUTE2437 = x3d.ROUTE()
ROUTE2437.fromField = "value_changed"
ROUTE2437.fromNode = "Run_r_hip_RotationInterpolator_Run"
ROUTE2437.toField = "set_rotation"
ROUTE2437.toNode = "hanim_r_hip"

Scene22.children.append(ROUTE2437)
ROUTE2438 = x3d.ROUTE()
ROUTE2438.fromField = "value_changed"
ROUTE2438.fromNode = "Run_l_talocrural_RotationInterpolator_Run"
ROUTE2438.toField = "set_rotation"
ROUTE2438.toNode = "hanim_l_talocrural"

Scene22.children.append(ROUTE2438)
ROUTE2439 = x3d.ROUTE()
ROUTE2439.fromField = "value_changed"
ROUTE2439.fromNode = "Run_l_knee_RotationInterpolator_Run"
ROUTE2439.toField = "set_rotation"
ROUTE2439.toNode = "hanim_l_knee"

Scene22.children.append(ROUTE2439)
ROUTE2440 = x3d.ROUTE()
ROUTE2440.fromField = "value_changed"
ROUTE2440.fromNode = "Run_l_hip_RotationInterpolator_Run"
ROUTE2440.toField = "set_rotation"
ROUTE2440.toNode = "hanim_l_hip"

Scene22.children.append(ROUTE2440)
ROUTE2441 = x3d.ROUTE()
ROUTE2441.fromField = "value_changed"
ROUTE2441.fromNode = "Run_r_radiocarpal_RotationInterpolator_Run"
ROUTE2441.toField = "set_rotation"
ROUTE2441.toNode = "hanim_r_radiocarpal"

Scene22.children.append(ROUTE2441)
ROUTE2442 = x3d.ROUTE()
ROUTE2442.fromField = "value_changed"
ROUTE2442.fromNode = "Run_r_elbow_RotationInterpolator_Run"
ROUTE2442.toField = "set_rotation"
ROUTE2442.toNode = "hanim_r_elbow"

Scene22.children.append(ROUTE2442)
ROUTE2443 = x3d.ROUTE()
ROUTE2443.fromField = "value_changed"
ROUTE2443.fromNode = "Run_r_shoulder_RotationInterpolator_Run"
ROUTE2443.toField = "set_rotation"
ROUTE2443.toNode = "hanim_r_shoulder"

Scene22.children.append(ROUTE2443)
ROUTE2444 = x3d.ROUTE()
ROUTE2444.fromField = "value_changed"
ROUTE2444.fromNode = "Run_l_radiocarpal_RotationInterpolator_Run"
ROUTE2444.toField = "set_rotation"
ROUTE2444.toNode = "hanim_l_radiocarpal"

Scene22.children.append(ROUTE2444)
ROUTE2445 = x3d.ROUTE()
ROUTE2445.fromField = "value_changed"
ROUTE2445.fromNode = "Run_l_elbow_RotationInterpolator_Run"
ROUTE2445.toField = "set_rotation"
ROUTE2445.toNode = "hanim_l_elbow"

Scene22.children.append(ROUTE2445)
ROUTE2446 = x3d.ROUTE()
ROUTE2446.fromField = "value_changed"
ROUTE2446.fromNode = "Run_l_shoulder_RotationInterpolator_Run"
ROUTE2446.toField = "set_rotation"
ROUTE2446.toNode = "hanim_l_shoulder"

Scene22.children.append(ROUTE2446)
ROUTE2447 = x3d.ROUTE()
ROUTE2447.fromField = "value_changed"
ROUTE2447.fromNode = "Run_head_RotationInterpolator_Run"
ROUTE2447.toField = "set_rotation"
ROUTE2447.toNode = "hanim_skullbase"

Scene22.children.append(ROUTE2447)
ROUTE2448 = x3d.ROUTE()
ROUTE2448.fromField = "value_changed"
ROUTE2448.fromNode = "Run_whole_body_RotationInterpolator_Run"
ROUTE2448.toField = "set_rotation"
ROUTE2448.toNode = "hanim_humanoid_root"

Scene22.children.append(ROUTE2448)
ROUTE2449 = x3d.ROUTE()
ROUTE2449.fromField = "value_changed"
ROUTE2449.fromNode = "Run_whole_body_TranslationInterpolator_Run"
ROUTE2449.toField = "set_translation"
ROUTE2449.toNode = "hanim_humanoid_root"

Scene22.children.append(ROUTE2449)
ROUTE2450 = x3d.ROUTE()
ROUTE2450.fromField = "value_changed"
ROUTE2450.fromNode = "Run_vl5_YawInterpolator"
ROUTE2450.toField = "set_rotation"
ROUTE2450.toNode = "hanim_vl5"

Scene22.children.append(ROUTE2450)
ROUTE2451 = x3d.ROUTE()
ROUTE2451.fromField = "fraction_changed"
ROUTE2451.fromNode = "JumpTimer"
ROUTE2451.toField = "set_fraction"
ROUTE2451.toNode = "Jump_r_talocrural_RotationInterpolator"

Scene22.children.append(ROUTE2451)
ROUTE2452 = x3d.ROUTE()
ROUTE2452.fromField = "fraction_changed"
ROUTE2452.fromNode = "JumpTimer"
ROUTE2452.toField = "set_fraction"
ROUTE2452.toNode = "Jump_r_knee_RotationInterpolator"

Scene22.children.append(ROUTE2452)
ROUTE2453 = x3d.ROUTE()
ROUTE2453.fromField = "fraction_changed"
ROUTE2453.fromNode = "JumpTimer"
ROUTE2453.toField = "set_fraction"
ROUTE2453.toNode = "Jump_r_hip_RotationInterpolator"

Scene22.children.append(ROUTE2453)
ROUTE2454 = x3d.ROUTE()
ROUTE2454.fromField = "fraction_changed"
ROUTE2454.fromNode = "JumpTimer"
ROUTE2454.toField = "set_fraction"
ROUTE2454.toNode = "Jump_l_talocrural_RotationInterpolator"

Scene22.children.append(ROUTE2454)
ROUTE2455 = x3d.ROUTE()
ROUTE2455.fromField = "fraction_changed"
ROUTE2455.fromNode = "JumpTimer"
ROUTE2455.toField = "set_fraction"
ROUTE2455.toNode = "Jump_l_knee_RotationInterpolator"

Scene22.children.append(ROUTE2455)
ROUTE2456 = x3d.ROUTE()
ROUTE2456.fromField = "fraction_changed"
ROUTE2456.fromNode = "JumpTimer"
ROUTE2456.toField = "set_fraction"
ROUTE2456.toNode = "Jump_l_hip_RotationInterpolator"

Scene22.children.append(ROUTE2456)
ROUTE2457 = x3d.ROUTE()
ROUTE2457.fromField = "fraction_changed"
ROUTE2457.fromNode = "JumpTimer"
ROUTE2457.toField = "set_fraction"
ROUTE2457.toNode = "Jump_lower_body_RotationInterpolator"

Scene22.children.append(ROUTE2457)
ROUTE2458 = x3d.ROUTE()
ROUTE2458.fromField = "fraction_changed"
ROUTE2458.fromNode = "JumpTimer"
ROUTE2458.toField = "set_fraction"
ROUTE2458.toNode = "Jump_r_radiocarpal_RotationInterpolator"

Scene22.children.append(ROUTE2458)
ROUTE2459 = x3d.ROUTE()
ROUTE2459.fromField = "fraction_changed"
ROUTE2459.fromNode = "JumpTimer"
ROUTE2459.toField = "set_fraction"
ROUTE2459.toNode = "Jump_r_elbow_RotationInterpolator"

Scene22.children.append(ROUTE2459)
ROUTE2460 = x3d.ROUTE()
ROUTE2460.fromField = "fraction_changed"
ROUTE2460.fromNode = "JumpTimer"
ROUTE2460.toField = "set_fraction"
ROUTE2460.toNode = "Jump_r_shoulder_RotationInterpolator"

Scene22.children.append(ROUTE2460)
ROUTE2461 = x3d.ROUTE()
ROUTE2461.fromField = "fraction_changed"
ROUTE2461.fromNode = "JumpTimer"
ROUTE2461.toField = "set_fraction"
ROUTE2461.toNode = "Jump_l_radiocarpal_RotationInterpolator"

Scene22.children.append(ROUTE2461)
ROUTE2462 = x3d.ROUTE()
ROUTE2462.fromField = "fraction_changed"
ROUTE2462.fromNode = "JumpTimer"
ROUTE2462.toField = "set_fraction"
ROUTE2462.toNode = "Jump_l_elbow_RotationInterpolator"

Scene22.children.append(ROUTE2462)
ROUTE2463 = x3d.ROUTE()
ROUTE2463.fromField = "fraction_changed"
ROUTE2463.fromNode = "JumpTimer"
ROUTE2463.toField = "set_fraction"
ROUTE2463.toNode = "Jump_l_shoulder_RotationInterpolator"

Scene22.children.append(ROUTE2463)
ROUTE2464 = x3d.ROUTE()
ROUTE2464.fromField = "fraction_changed"
ROUTE2464.fromNode = "JumpTimer"
ROUTE2464.toField = "set_fraction"
ROUTE2464.toNode = "Jump_head_RotationInterpolator"

Scene22.children.append(ROUTE2464)
ROUTE2465 = x3d.ROUTE()
ROUTE2465.fromField = "fraction_changed"
ROUTE2465.fromNode = "JumpTimer"
ROUTE2465.toField = "set_fraction"
ROUTE2465.toNode = "Jump_neck_RotationInterpolator"

Scene22.children.append(ROUTE2465)
ROUTE2466 = x3d.ROUTE()
ROUTE2466.fromField = "fraction_changed"
ROUTE2466.fromNode = "JumpTimer"
ROUTE2466.toField = "set_fraction"
ROUTE2466.toNode = "Jump_upper_body_RotationInterpolator"

Scene22.children.append(ROUTE2466)
ROUTE2467 = x3d.ROUTE()
ROUTE2467.fromField = "fraction_changed"
ROUTE2467.fromNode = "JumpTimer"
ROUTE2467.toField = "set_fraction"
ROUTE2467.toNode = "Jump_whole_body_RotationInterpolator"

Scene22.children.append(ROUTE2467)
ROUTE2468 = x3d.ROUTE()
ROUTE2468.fromField = "fraction_changed"
ROUTE2468.fromNode = "JumpTimer"
ROUTE2468.toField = "set_fraction"
ROUTE2468.toNode = "Jump_whole_body_TranslationInterpolator"

Scene22.children.append(ROUTE2468)
ROUTE2469 = x3d.ROUTE()
ROUTE2469.fromField = "fraction_changed"
ROUTE2469.fromNode = "JumpTimer"
ROUTE2469.toField = "set_fraction"
ROUTE2469.toNode = "Jump_l_sternoclavicular_RollInterpolator"

Scene22.children.append(ROUTE2469)
ROUTE2470 = x3d.ROUTE()
ROUTE2470.fromField = "fraction_changed"
ROUTE2470.fromNode = "JumpTimer"
ROUTE2470.toField = "set_fraction"
ROUTE2470.toNode = "Jump_l_acromioclavicular_RollInterpolator"

Scene22.children.append(ROUTE2470)
ROUTE2471 = x3d.ROUTE()
ROUTE2471.fromField = "fraction_changed"
ROUTE2471.fromNode = "JumpTimer"
ROUTE2471.toField = "set_fraction"
ROUTE2471.toNode = "Jump_r_sternoclavicular_RollInterpolator"

Scene22.children.append(ROUTE2471)
ROUTE2472 = x3d.ROUTE()
ROUTE2472.fromField = "fraction_changed"
ROUTE2472.fromNode = "JumpTimer"
ROUTE2472.toField = "set_fraction"
ROUTE2472.toNode = "Jump_r_acromioclavicular_RollInterpolator"

Scene22.children.append(ROUTE2472)
ROUTE2473 = x3d.ROUTE()
ROUTE2473.fromField = "fraction_changed"
ROUTE2473.fromNode = "JumpTimer"
ROUTE2473.toField = "set_fraction"
ROUTE2473.toNode = "Jump_r_metatarsal_PitchInterpolator"

Scene22.children.append(ROUTE2473)
ROUTE2474 = x3d.ROUTE()
ROUTE2474.fromField = "fraction_changed"
ROUTE2474.fromNode = "JumpTimer"
ROUTE2474.toField = "set_fraction"
ROUTE2474.toNode = "Jump_sacroiliac_YawInterpolator"

Scene22.children.append(ROUTE2474)
ROUTE2475 = x3d.ROUTE()
ROUTE2475.fromField = "fraction_changed"
ROUTE2475.fromNode = "JumpTimer"
ROUTE2475.toField = "set_fraction"
ROUTE2475.toNode = "Jump_vl5_YawInterpolator"

Scene22.children.append(ROUTE2475)
ROUTE2476 = x3d.ROUTE()
ROUTE2476.fromField = "fraction_changed"
ROUTE2476.fromNode = "JumpTimer"
ROUTE2476.toField = "set_fraction"
ROUTE2476.toNode = "Jump_vc6_YawInterpolator"

Scene22.children.append(ROUTE2476)
ROUTE2477 = x3d.ROUTE()
ROUTE2477.fromField = "fraction_changed"
ROUTE2477.fromNode = "JumpTimer"
ROUTE2477.toField = "set_fraction"
ROUTE2477.toNode = "Jump_l_thumb1_PitchInterpolator"

Scene22.children.append(ROUTE2477)
ROUTE2478 = x3d.ROUTE()
ROUTE2478.fromField = "fraction_changed"
ROUTE2478.fromNode = "JumpTimer"
ROUTE2478.toField = "set_fraction"
ROUTE2478.toNode = "Jump_r_thumb1_PitchInterpolator"

Scene22.children.append(ROUTE2478)
ROUTE2479 = x3d.ROUTE()
ROUTE2479.fromField = "value_changed"
ROUTE2479.fromNode = "Jump_r_talocrural_RotationInterpolator"
ROUTE2479.toField = "set_rotation"
ROUTE2479.toNode = "hanim_r_talocrural"

Scene22.children.append(ROUTE2479)
ROUTE2480 = x3d.ROUTE()
ROUTE2480.fromField = "value_changed"
ROUTE2480.fromNode = "Jump_r_knee_RotationInterpolator"
ROUTE2480.toField = "set_rotation"
ROUTE2480.toNode = "hanim_r_knee"

Scene22.children.append(ROUTE2480)
ROUTE2481 = x3d.ROUTE()
ROUTE2481.fromField = "value_changed"
ROUTE2481.fromNode = "Jump_r_hip_RotationInterpolator"
ROUTE2481.toField = "set_rotation"
ROUTE2481.toNode = "hanim_r_hip"

Scene22.children.append(ROUTE2481)
ROUTE2482 = x3d.ROUTE()
ROUTE2482.fromField = "value_changed"
ROUTE2482.fromNode = "Jump_l_talocrural_RotationInterpolator"
ROUTE2482.toField = "set_rotation"
ROUTE2482.toNode = "hanim_l_talocrural"

Scene22.children.append(ROUTE2482)
ROUTE2483 = x3d.ROUTE()
ROUTE2483.fromField = "value_changed"
ROUTE2483.fromNode = "Jump_l_knee_RotationInterpolator"
ROUTE2483.toField = "set_rotation"
ROUTE2483.toNode = "hanim_l_knee"

Scene22.children.append(ROUTE2483)
ROUTE2484 = x3d.ROUTE()
ROUTE2484.fromField = "value_changed"
ROUTE2484.fromNode = "Jump_l_hip_RotationInterpolator"
ROUTE2484.toField = "set_rotation"
ROUTE2484.toNode = "hanim_l_hip"

Scene22.children.append(ROUTE2484)
ROUTE2485 = x3d.ROUTE()
ROUTE2485.fromField = "value_changed"
ROUTE2485.fromNode = "Jump_r_radiocarpal_RotationInterpolator"
ROUTE2485.toField = "set_rotation"
ROUTE2485.toNode = "hanim_r_radiocarpal"

Scene22.children.append(ROUTE2485)
ROUTE2486 = x3d.ROUTE()
ROUTE2486.fromField = "value_changed"
ROUTE2486.fromNode = "Jump_r_elbow_RotationInterpolator"
ROUTE2486.toField = "set_rotation"
ROUTE2486.toNode = "hanim_r_elbow"

Scene22.children.append(ROUTE2486)
ROUTE2487 = x3d.ROUTE()
ROUTE2487.fromField = "value_changed"
ROUTE2487.fromNode = "Jump_r_shoulder_RotationInterpolator"
ROUTE2487.toField = "set_rotation"
ROUTE2487.toNode = "hanim_r_shoulder"

Scene22.children.append(ROUTE2487)
ROUTE2488 = x3d.ROUTE()
ROUTE2488.fromField = "value_changed"
ROUTE2488.fromNode = "Jump_l_radiocarpal_RotationInterpolator"
ROUTE2488.toField = "set_rotation"
ROUTE2488.toNode = "hanim_l_radiocarpal"

Scene22.children.append(ROUTE2488)
ROUTE2489 = x3d.ROUTE()
ROUTE2489.fromField = "value_changed"
ROUTE2489.fromNode = "Jump_l_elbow_RotationInterpolator"
ROUTE2489.toField = "set_rotation"
ROUTE2489.toNode = "hanim_l_elbow"

Scene22.children.append(ROUTE2489)
ROUTE2490 = x3d.ROUTE()
ROUTE2490.fromField = "value_changed"
ROUTE2490.fromNode = "Jump_l_shoulder_RotationInterpolator"
ROUTE2490.toField = "set_rotation"
ROUTE2490.toNode = "hanim_l_shoulder"

Scene22.children.append(ROUTE2490)
ROUTE2491 = x3d.ROUTE()
ROUTE2491.fromField = "value_changed"
ROUTE2491.fromNode = "Jump_head_RotationInterpolator"
ROUTE2491.toField = "set_rotation"
ROUTE2491.toNode = "hanim_skullbase"

Scene22.children.append(ROUTE2491)
ROUTE2492 = x3d.ROUTE()
ROUTE2492.fromField = "value_changed"
ROUTE2492.fromNode = "Jump_whole_body_RotationInterpolator"
ROUTE2492.toField = "set_rotation"
ROUTE2492.toNode = "hanim_humanoid_root"

Scene22.children.append(ROUTE2492)
ROUTE2493 = x3d.ROUTE()
ROUTE2493.fromField = "value_changed"
ROUTE2493.fromNode = "Jump_whole_body_TranslationInterpolator"
ROUTE2493.toField = "set_translation"
ROUTE2493.toNode = "hanim_humanoid_root"

Scene22.children.append(ROUTE2493)
ROUTE2494 = x3d.ROUTE()
ROUTE2494.fromField = "value_changed"
ROUTE2494.fromNode = "Jump_vl5_YawInterpolator"
ROUTE2494.toField = "set_rotation"
ROUTE2494.toNode = "hanim_vl5"

Scene22.children.append(ROUTE2494)
ROUTE2495 = x3d.ROUTE()
ROUTE2495.fromField = "fraction_changed"
ROUTE2495.fromNode = "KickTimer"
ROUTE2495.toField = "set_fraction"
ROUTE2495.toNode = "Kick_l_sternoclavicular_RollInterpolator"

Scene22.children.append(ROUTE2495)
ROUTE2496 = x3d.ROUTE()
ROUTE2496.fromField = "fraction_changed"
ROUTE2496.fromNode = "KickTimer"
ROUTE2496.toField = "set_fraction"
ROUTE2496.toNode = "Kick_l_acromioclavicular_RollInterpolator"

Scene22.children.append(ROUTE2496)
ROUTE2497 = x3d.ROUTE()
ROUTE2497.fromField = "fraction_changed"
ROUTE2497.fromNode = "KickTimer"
ROUTE2497.toField = "set_fraction"
ROUTE2497.toNode = "Kick_l_shoulder_RollInterpolator"

Scene22.children.append(ROUTE2497)
ROUTE2498 = x3d.ROUTE()
ROUTE2498.fromField = "fraction_changed"
ROUTE2498.fromNode = "KickTimer"
ROUTE2498.toField = "set_fraction"
ROUTE2498.toNode = "Kick_l_ForeArm_PitchInterpolator"

Scene22.children.append(ROUTE2498)
ROUTE2499 = x3d.ROUTE()
ROUTE2499.fromField = "fraction_changed"
ROUTE2499.fromNode = "KickTimer"
ROUTE2499.toField = "set_fraction"
ROUTE2499.toNode = "Kick_l_radiocarpal_RollInterpolator"

Scene22.children.append(ROUTE2499)
ROUTE2500 = x3d.ROUTE()
ROUTE2500.fromField = "fraction_changed"
ROUTE2500.fromNode = "KickTimer"
ROUTE2500.toField = "set_fraction"
ROUTE2500.toNode = "Kick_l_thumb1_PitchInterpolator"

Scene22.children.append(ROUTE2500)
ROUTE2501 = x3d.ROUTE()
ROUTE2501.fromField = "fraction_changed"
ROUTE2501.fromNode = "KickTimer"
ROUTE2501.toField = "set_fraction"
ROUTE2501.toNode = "Kick_r_sternoclavicular_RollInterpolator"

Scene22.children.append(ROUTE2501)
ROUTE2502 = x3d.ROUTE()
ROUTE2502.fromField = "fraction_changed"
ROUTE2502.fromNode = "KickTimer"
ROUTE2502.toField = "set_fraction"
ROUTE2502.toNode = "Kick_r_acromioclavicular_RollInterpolator"

Scene22.children.append(ROUTE2502)
ROUTE2503 = x3d.ROUTE()
ROUTE2503.fromField = "fraction_changed"
ROUTE2503.fromNode = "KickTimer"
ROUTE2503.toField = "set_fraction"
ROUTE2503.toNode = "Kick_r_shoulder_RollInterpolator"

Scene22.children.append(ROUTE2503)
ROUTE2504 = x3d.ROUTE()
ROUTE2504.fromField = "fraction_changed"
ROUTE2504.fromNode = "KickTimer"
ROUTE2504.toField = "set_fraction"
ROUTE2504.toNode = "Kick_r_ForeArm_PitchInterpolator"

Scene22.children.append(ROUTE2504)
ROUTE2505 = x3d.ROUTE()
ROUTE2505.fromField = "fraction_changed"
ROUTE2505.fromNode = "KickTimer"
ROUTE2505.toField = "set_fraction"
ROUTE2505.toNode = "Kick_r_radiocarpal_RollInterpolator"

Scene22.children.append(ROUTE2505)
ROUTE2506 = x3d.ROUTE()
ROUTE2506.fromField = "fraction_changed"
ROUTE2506.fromNode = "KickTimer"
ROUTE2506.toField = "set_fraction"
ROUTE2506.toNode = "Kick_r_thumb1_PitchInterpolator"

Scene22.children.append(ROUTE2506)
ROUTE2507 = x3d.ROUTE()
ROUTE2507.fromField = "fraction_changed"
ROUTE2507.fromNode = "KickTimer"
ROUTE2507.toField = "set_fraction"
ROUTE2507.toNode = "Kick_r_hip_PitchInterpolator"

Scene22.children.append(ROUTE2507)
ROUTE2508 = x3d.ROUTE()
ROUTE2508.fromField = "fraction_changed"
ROUTE2508.fromNode = "KickTimer"
ROUTE2508.toField = "set_fraction"
ROUTE2508.toNode = "Kick_r_knee_PitchInterpolator"

Scene22.children.append(ROUTE2508)
ROUTE2509 = x3d.ROUTE()
ROUTE2509.fromField = "fraction_changed"
ROUTE2509.fromNode = "KickTimer"
ROUTE2509.toField = "set_fraction"
ROUTE2509.toNode = "Kick_l_hip_PitchInterpolator"

Scene22.children.append(ROUTE2509)
ROUTE2510 = x3d.ROUTE()
ROUTE2510.fromField = "fraction_changed"
ROUTE2510.fromNode = "KickTimer"
ROUTE2510.toField = "set_fraction"
ROUTE2510.toNode = "Kick_l_knee_PitchInterpolator"

Scene22.children.append(ROUTE2510)
ROUTE2511 = x3d.ROUTE()
ROUTE2511.fromField = "fraction_changed"
ROUTE2511.fromNode = "KickTimer"
ROUTE2511.toField = "set_fraction"
ROUTE2511.toNode = "Kick_r_talocrural_PitchInterpolator"

Scene22.children.append(ROUTE2511)
ROUTE2512 = x3d.ROUTE()
ROUTE2512.fromField = "fraction_changed"
ROUTE2512.fromNode = "KickTimer"
ROUTE2512.toField = "set_fraction"
ROUTE2512.toNode = "Kick_r_metatarsal_PitchInterpolator"

Scene22.children.append(ROUTE2512)
ROUTE2513 = x3d.ROUTE()
ROUTE2513.fromField = "fraction_changed"
ROUTE2513.fromNode = "KickTimer"
ROUTE2513.toField = "set_fraction"
ROUTE2513.toNode = "Kick_sacroiliac_YawInterpolator"

Scene22.children.append(ROUTE2513)
ROUTE2514 = x3d.ROUTE()
ROUTE2514.fromField = "fraction_changed"
ROUTE2514.fromNode = "KickTimer"
ROUTE2514.toField = "set_fraction"
ROUTE2514.toNode = "Kick_vl5_YawInterpolator"

Scene22.children.append(ROUTE2514)
ROUTE2515 = x3d.ROUTE()
ROUTE2515.fromField = "fraction_changed"
ROUTE2515.fromNode = "KickTimer"
ROUTE2515.toField = "set_fraction"
ROUTE2515.toNode = "Kick_vc6_YawInterpolator"

Scene22.children.append(ROUTE2515)
ROUTE2516 = x3d.ROUTE()
ROUTE2516.fromField = "fraction_changed"
ROUTE2516.fromNode = "KickTimer"
ROUTE2516.toField = "set_fraction"
ROUTE2516.toNode = "Kick_lower_body_RotationInterpolator"

Scene22.children.append(ROUTE2516)
ROUTE2517 = x3d.ROUTE()
ROUTE2517.fromField = "fraction_changed"
ROUTE2517.fromNode = "KickTimer"
ROUTE2517.toField = "set_fraction"
ROUTE2517.toNode = "Kick_upper_body_RotationInterpolator"

Scene22.children.append(ROUTE2517)
ROUTE2518 = x3d.ROUTE()
ROUTE2518.fromField = "fraction_changed"
ROUTE2518.fromNode = "KickTimer"
ROUTE2518.toField = "set_fraction"
ROUTE2518.toNode = "Kick_whole_body_RotationInterpolator"

Scene22.children.append(ROUTE2518)
ROUTE2519 = x3d.ROUTE()
ROUTE2519.fromField = "fraction_changed"
ROUTE2519.fromNode = "KickTimer"
ROUTE2519.toField = "set_fraction"
ROUTE2519.toNode = "Kick_whole_body_TranslationInterpolator"

Scene22.children.append(ROUTE2519)
ROUTE2520 = x3d.ROUTE()
ROUTE2520.fromField = "fraction_changed"
ROUTE2520.fromNode = "KickTimer"
ROUTE2520.toField = "set_fraction"
ROUTE2520.toNode = "Kick_neck_RotationInterpolator"

Scene22.children.append(ROUTE2520)
ROUTE2521 = x3d.ROUTE()
ROUTE2521.fromField = "value_changed"
ROUTE2521.fromNode = "Kick_l_shoulder_RollInterpolator"
ROUTE2521.toField = "set_rotation"
ROUTE2521.toNode = "hanim_l_shoulder"

Scene22.children.append(ROUTE2521)
ROUTE2522 = x3d.ROUTE()
ROUTE2522.fromField = "value_changed"
ROUTE2522.fromNode = "Kick_l_ForeArm_PitchInterpolator"
ROUTE2522.toField = "set_rotation"
ROUTE2522.toNode = "hanim_l_elbow"

Scene22.children.append(ROUTE2522)
ROUTE2523 = x3d.ROUTE()
ROUTE2523.fromField = "value_changed"
ROUTE2523.fromNode = "Kick_l_radiocarpal_RollInterpolator"
ROUTE2523.toField = "set_rotation"
ROUTE2523.toNode = "hanim_l_radiocarpal"

Scene22.children.append(ROUTE2523)
ROUTE2524 = x3d.ROUTE()
ROUTE2524.fromField = "value_changed"
ROUTE2524.fromNode = "Kick_r_shoulder_RollInterpolator"
ROUTE2524.toField = "set_rotation"
ROUTE2524.toNode = "hanim_r_shoulder"

Scene22.children.append(ROUTE2524)
ROUTE2525 = x3d.ROUTE()
ROUTE2525.fromField = "value_changed"
ROUTE2525.fromNode = "Kick_r_ForeArm_PitchInterpolator"
ROUTE2525.toField = "set_rotation"
ROUTE2525.toNode = "hanim_r_elbow"

Scene22.children.append(ROUTE2525)
ROUTE2526 = x3d.ROUTE()
ROUTE2526.fromField = "value_changed"
ROUTE2526.fromNode = "Kick_r_radiocarpal_RollInterpolator"
ROUTE2526.toField = "set_rotation"
ROUTE2526.toNode = "hanim_r_radiocarpal"

Scene22.children.append(ROUTE2526)
ROUTE2527 = x3d.ROUTE()
ROUTE2527.fromField = "value_changed"
ROUTE2527.fromNode = "Kick_r_hip_PitchInterpolator"
ROUTE2527.toField = "set_rotation"
ROUTE2527.toNode = "hanim_r_hip"

Scene22.children.append(ROUTE2527)
ROUTE2528 = x3d.ROUTE()
ROUTE2528.fromField = "value_changed"
ROUTE2528.fromNode = "Kick_r_knee_PitchInterpolator"
ROUTE2528.toField = "set_rotation"
ROUTE2528.toNode = "hanim_r_knee"

Scene22.children.append(ROUTE2528)
ROUTE2529 = x3d.ROUTE()
ROUTE2529.fromField = "value_changed"
ROUTE2529.fromNode = "Kick_r_talocrural_PitchInterpolator"
ROUTE2529.toField = "set_rotation"
ROUTE2529.toNode = "hanim_r_talocrural"

Scene22.children.append(ROUTE2529)
ROUTE2530 = x3d.ROUTE()
ROUTE2530.fromField = "value_changed"
ROUTE2530.fromNode = "Kick_l_hip_PitchInterpolator"
ROUTE2530.toField = "set_rotation"
ROUTE2530.toNode = "hanim_l_hip"

Scene22.children.append(ROUTE2530)
ROUTE2531 = x3d.ROUTE()
ROUTE2531.fromField = "value_changed"
ROUTE2531.fromNode = "Kick_l_knee_PitchInterpolator"
ROUTE2531.toField = "set_rotation"
ROUTE2531.toNode = "hanim_l_knee"

Scene22.children.append(ROUTE2531)
ROUTE2532 = x3d.ROUTE()
ROUTE2532.fromField = "value_changed"
ROUTE2532.fromNode = "Kick_r_talocrural_PitchInterpolator"
ROUTE2532.toField = "set_rotation"
ROUTE2532.toNode = "hanim_l_talocrural"

Scene22.children.append(ROUTE2532)
ROUTE2533 = x3d.ROUTE()
ROUTE2533.fromField = "value_changed"
ROUTE2533.fromNode = "Kick_vl5_YawInterpolator"
ROUTE2533.toField = "set_rotation"
ROUTE2533.toNode = "hanim_vl5"

Scene22.children.append(ROUTE2533)
ROUTE2534 = x3d.ROUTE()
ROUTE2534.fromField = "value_changed"
ROUTE2534.fromNode = "Kick_whole_body_RotationInterpolator"
ROUTE2534.toField = "set_rotation"
ROUTE2534.toNode = "hanim_humanoid_root"

Scene22.children.append(ROUTE2534)
ROUTE2535 = x3d.ROUTE()
ROUTE2535.fromField = "value_changed"
ROUTE2535.fromNode = "Kick_whole_body_TranslationInterpolator"
ROUTE2535.toField = "set_translation"
ROUTE2535.toNode = "hanim_humanoid_root"

Scene22.children.append(ROUTE2535)
Group2536 = x3d.Group()
Group2536.DEF = "Interface"
Transform2537 = x3d.Transform()
Transform2537.DEF = "CoordinateSystemFloor"
Transform2537.scale = [0.1,0.1,0.1]
Shape2538 = x3d.Shape()
Shape2538.DEF = "AxisLines_Shape"
IndexedLineSet2539 = x3d.IndexedLineSet()
IndexedLineSet2539.colorIndex = [0,1,2]
IndexedLineSet2539.colorPerVertex = False
IndexedLineSet2539.coordIndex = [0,1,-1,0,2,-1,0,3,-1]
Color2540 = x3d.Color()

IndexedLineSet2539.color = Color2540
Coordinate2541 = x3d.Coordinate()

IndexedLineSet2539.coord = Coordinate2541

Shape2538.geometry = IndexedLineSet2539

Transform2537.children.append(Shape2538)

Group2536.children.append(Transform2537)
ProximitySensor2542 = x3d.ProximitySensor()
ProximitySensor2542.DEF = "HudProx"
ProximitySensor2542.size = [50,50,50]

Group2536.children.append(ProximitySensor2542)
Transform2543 = x3d.Transform()
Transform2543.DEF = "HudXform"
Transform2543.rotation = [0,1,0,0.78]
Transform2543.translation = [2,1,2]
Transform2544 = x3d.Transform()
Transform2544.scale = [0.02,0.02,0.02]
Transform2544.translation = [-0.4,-0.01,-0.75]
Transform2545 = x3d.Transform()
Transform2545.DEF = "Stand_Text"
Transform2545.translation = [0,-0.9,0]
TouchSensor2546 = x3d.TouchSensor()
TouchSensor2546.DEF = "Stand_Touch"

Transform2545.children.append(TouchSensor2546)
Shape2547 = x3d.Shape()
Shape2547.DEF = "StandText"
Appearance2548 = x3d.Appearance()
Material2549 = x3d.Material()
Material2549.DEF = "text_color"
Material2549.ambientIntensity = 1
Material2549.diffuseColor = [0.819,0.521,0.169]
Material2549.emissiveColor = [0.819,0.521,0.169]
Material2549.specularColor = [0.819,0.521,0.169]

Appearance2548.material = Material2549

Shape2547.appearance = Appearance2548
Text2550 = x3d.Text()
Text2550.string = ["Stand"]
FontStyle2551 = x3d.FontStyle()
FontStyle2551.family = ["SANS"]

Text2550.fontStyle = FontStyle2551

Shape2547.geometry = Text2550

Transform2545.children.append(Shape2547)
Shape2552 = x3d.Shape()
Shape2552.DEF = "Stand_Back"
Appearance2553 = x3d.Appearance()
Material2554 = x3d.Material()
Material2554.DEF = "Clear"
Material2554.ambientIntensity = 1
Material2554.diffuseColor = [0,0.5,0]
Material2554.emissiveColor = [0,0.5,0]
Material2554.transparency = 0.8

Appearance2553.material = Material2554

Shape2552.appearance = Appearance2553
IndexedFaceSet2555 = x3d.IndexedFaceSet()
IndexedFaceSet2555.DEF = "Backing"
IndexedFaceSet2555.coordIndex = [0,1,2,3,-1]
Coordinate2556 = x3d.Coordinate()

IndexedFaceSet2555.coord = Coordinate2556

Shape2552.geometry = IndexedFaceSet2555

Transform2545.children.append(Shape2552)

Transform2544.children.append(Transform2545)
Transform2557 = x3d.Transform()
Transform2557.DEF = "Pitch_Text"
Transform2557.translation = [0,-2.4,0]
TouchSensor2558 = x3d.TouchSensor()
TouchSensor2558.DEF = "Pitch_Touch"

Transform2557.children.append(TouchSensor2558)
Shape2559 = x3d.Shape()
Shape2559.DEF = "PitchText"
Appearance2560 = x3d.Appearance()
Material2561 = x3d.Material()
Material2561.USE = "text_color"

Appearance2560.material = Material2561

Shape2559.appearance = Appearance2560
Text2562 = x3d.Text()
Text2562.string = ["Pitch"]
FontStyle2563 = x3d.FontStyle()
FontStyle2563.family = ["SANS"]

Text2562.fontStyle = FontStyle2563

Shape2559.geometry = Text2562

Transform2557.children.append(Shape2559)
Shape2564 = x3d.Shape()
Shape2564.DEF = "Pitch_Back"
Appearance2565 = x3d.Appearance()
Material2566 = x3d.Material()
Material2566.USE = "Clear"

Appearance2565.material = Material2566

Shape2564.appearance = Appearance2565
IndexedFaceSet2567 = x3d.IndexedFaceSet()
IndexedFaceSet2567.USE = "Backing"

Shape2564.geometry = IndexedFaceSet2567

Transform2557.children.append(Shape2564)

Transform2544.children.append(Transform2557)
Transform2568 = x3d.Transform()
Transform2568.DEF = "Yaw_Text"
Transform2568.translation = [0,-3.8,0]
TouchSensor2569 = x3d.TouchSensor()
TouchSensor2569.DEF = "Yaw_Touch"

Transform2568.children.append(TouchSensor2569)
Shape2570 = x3d.Shape()
Shape2570.DEF = "YawText"
Appearance2571 = x3d.Appearance()
Material2572 = x3d.Material()
Material2572.USE = "text_color"

Appearance2571.material = Material2572

Shape2570.appearance = Appearance2571
Text2573 = x3d.Text()
Text2573.string = ["Yaw"]
FontStyle2574 = x3d.FontStyle()
FontStyle2574.family = ["SANS"]

Text2573.fontStyle = FontStyle2574

Shape2570.geometry = Text2573

Transform2568.children.append(Shape2570)
Shape2575 = x3d.Shape()
Shape2575.DEF = "Yaw_Back"
Appearance2576 = x3d.Appearance()
Material2577 = x3d.Material()
Material2577.USE = "Clear"

Appearance2576.material = Material2577

Shape2575.appearance = Appearance2576
IndexedFaceSet2578 = x3d.IndexedFaceSet()
IndexedFaceSet2578.USE = "Backing"

Shape2575.geometry = IndexedFaceSet2578

Transform2568.children.append(Shape2575)

Transform2544.children.append(Transform2568)
Transform2579 = x3d.Transform()
Transform2579.DEF = "Roll_Text"
Transform2579.translation = [0,-5.2,0]
TouchSensor2580 = x3d.TouchSensor()
TouchSensor2580.DEF = "Roll_Touch"

Transform2579.children.append(TouchSensor2580)
Shape2581 = x3d.Shape()
Shape2581.DEF = "RollText"
Appearance2582 = x3d.Appearance()
Material2583 = x3d.Material()
Material2583.USE = "text_color"

Appearance2582.material = Material2583

Shape2581.appearance = Appearance2582
Text2584 = x3d.Text()
Text2584.string = ["Roll"]
FontStyle2585 = x3d.FontStyle()
FontStyle2585.family = ["SANS"]

Text2584.fontStyle = FontStyle2585

Shape2581.geometry = Text2584

Transform2579.children.append(Shape2581)
Shape2586 = x3d.Shape()
Shape2586.DEF = "Roll_Back"
Appearance2587 = x3d.Appearance()
Material2588 = x3d.Material()
Material2588.USE = "Clear"

Appearance2587.material = Material2588

Shape2586.appearance = Appearance2587
IndexedFaceSet2589 = x3d.IndexedFaceSet()
IndexedFaceSet2589.USE = "Backing"

Shape2586.geometry = IndexedFaceSet2589

Transform2579.children.append(Shape2586)

Transform2544.children.append(Transform2579)
Transform2590 = x3d.Transform()
Transform2590.DEF = "Walk_Text"
Transform2590.translation = [0,-6.6,0]
TouchSensor2591 = x3d.TouchSensor()
TouchSensor2591.DEF = "Walk_Touch"

Transform2590.children.append(TouchSensor2591)
Shape2592 = x3d.Shape()
Shape2592.DEF = "WalkText"
Appearance2593 = x3d.Appearance()
Material2594 = x3d.Material()
Material2594.USE = "text_color"

Appearance2593.material = Material2594

Shape2592.appearance = Appearance2593
Text2595 = x3d.Text()
Text2595.string = ["Walk"]
FontStyle2596 = x3d.FontStyle()
FontStyle2596.family = ["SANS"]

Text2595.fontStyle = FontStyle2596

Shape2592.geometry = Text2595

Transform2590.children.append(Shape2592)
Shape2597 = x3d.Shape()
Shape2597.DEF = "Walk_Back"
Appearance2598 = x3d.Appearance()
Material2599 = x3d.Material()
Material2599.USE = "Clear"

Appearance2598.material = Material2599

Shape2597.appearance = Appearance2598
IndexedFaceSet2600 = x3d.IndexedFaceSet()
IndexedFaceSet2600.USE = "Backing"

Shape2597.geometry = IndexedFaceSet2600

Transform2590.children.append(Shape2597)

Transform2544.children.append(Transform2590)
Transform2601 = x3d.Transform()
Transform2601.DEF = "Run_Text"
Transform2601.translation = [0,-8,0]
TouchSensor2602 = x3d.TouchSensor()
TouchSensor2602.DEF = "Run_Touch"

Transform2601.children.append(TouchSensor2602)
Shape2603 = x3d.Shape()
Shape2603.DEF = "RunText"
Appearance2604 = x3d.Appearance()
Material2605 = x3d.Material()
Material2605.USE = "text_color"

Appearance2604.material = Material2605

Shape2603.appearance = Appearance2604
Text2606 = x3d.Text()
Text2606.string = ["Run"]
FontStyle2607 = x3d.FontStyle()
FontStyle2607.family = ["SANS"]

Text2606.fontStyle = FontStyle2607

Shape2603.geometry = Text2606

Transform2601.children.append(Shape2603)
Shape2608 = x3d.Shape()
Shape2608.DEF = "Run_Back"
Appearance2609 = x3d.Appearance()
Material2610 = x3d.Material()
Material2610.USE = "Clear"

Appearance2609.material = Material2610

Shape2608.appearance = Appearance2609
IndexedFaceSet2611 = x3d.IndexedFaceSet()
IndexedFaceSet2611.USE = "Backing"

Shape2608.geometry = IndexedFaceSet2611

Transform2601.children.append(Shape2608)

Transform2544.children.append(Transform2601)
Transform2612 = x3d.Transform()
Transform2612.DEF = "Jump_Text"
Transform2612.translation = [0,-9.4,0]
TouchSensor2613 = x3d.TouchSensor()
TouchSensor2613.DEF = "Jump_Touch"

Transform2612.children.append(TouchSensor2613)
Shape2614 = x3d.Shape()
Shape2614.DEF = "JumpText"
Appearance2615 = x3d.Appearance()
Material2616 = x3d.Material()
Material2616.USE = "text_color"

Appearance2615.material = Material2616

Shape2614.appearance = Appearance2615
Text2617 = x3d.Text()
Text2617.string = ["Jump"]
FontStyle2618 = x3d.FontStyle()
FontStyle2618.family = ["SANS"]

Text2617.fontStyle = FontStyle2618

Shape2614.geometry = Text2617

Transform2612.children.append(Shape2614)
Shape2619 = x3d.Shape()
Shape2619.DEF = "Jump_Back"
Appearance2620 = x3d.Appearance()
Material2621 = x3d.Material()
Material2621.USE = "Clear"

Appearance2620.material = Material2621

Shape2619.appearance = Appearance2620
IndexedFaceSet2622 = x3d.IndexedFaceSet()
IndexedFaceSet2622.USE = "Backing"

Shape2619.geometry = IndexedFaceSet2622

Transform2612.children.append(Shape2619)

Transform2544.children.append(Transform2612)
Transform2623 = x3d.Transform()
Transform2623.DEF = "Kick_Text"
Transform2623.translation = [0,-10.8,0]
TouchSensor2624 = x3d.TouchSensor()
TouchSensor2624.DEF = "Kick_Touch"

Transform2623.children.append(TouchSensor2624)
Shape2625 = x3d.Shape()
Shape2625.DEF = "KickText"
Appearance2626 = x3d.Appearance()
Material2627 = x3d.Material()
Material2627.USE = "text_color"

Appearance2626.material = Material2627

Shape2625.appearance = Appearance2626
Text2628 = x3d.Text()
Text2628.string = ["Kick"]
FontStyle2629 = x3d.FontStyle()
FontStyle2629.family = ["SANS"]

Text2628.fontStyle = FontStyle2629

Shape2625.geometry = Text2628

Transform2623.children.append(Shape2625)
Shape2630 = x3d.Shape()
Shape2630.DEF = "Kick_Back"
Appearance2631 = x3d.Appearance()
Material2632 = x3d.Material()
Material2632.USE = "Clear"

Appearance2631.material = Material2632

Shape2630.appearance = Appearance2631
IndexedFaceSet2633 = x3d.IndexedFaceSet()
IndexedFaceSet2633.USE = "Backing"

Shape2630.geometry = IndexedFaceSet2633

Transform2623.children.append(Shape2630)

Transform2544.children.append(Transform2623)
Transform2634 = x3d.Transform()
Transform2634.DEF = "Stop_Text"
Transform2634.translation = [0,0.4,0]
TouchSensor2635 = x3d.TouchSensor()
TouchSensor2635.DEF = "Stop_Touch"

Transform2634.children.append(TouchSensor2635)
Shape2636 = x3d.Shape()
Shape2636.DEF = "StopText"
Appearance2637 = x3d.Appearance()
Material2638 = x3d.Material()
Material2638.USE = "text_color"

Appearance2637.material = Material2638

Shape2636.appearance = Appearance2637
Text2639 = x3d.Text()
Text2639.string = ["Default"]
FontStyle2640 = x3d.FontStyle()
FontStyle2640.family = ["SANS"]

Text2639.fontStyle = FontStyle2640

Shape2636.geometry = Text2639

Transform2634.children.append(Shape2636)
Shape2641 = x3d.Shape()
Shape2641.DEF = "Stop_Back"
Appearance2642 = x3d.Appearance()
Material2643 = x3d.Material()
Material2643.USE = "Clear"

Appearance2642.material = Material2643

Shape2641.appearance = Appearance2642
IndexedFaceSet2644 = x3d.IndexedFaceSet()
IndexedFaceSet2644.USE = "Backing"

Shape2641.geometry = IndexedFaceSet2644

Transform2634.children.append(Shape2641)

Transform2544.children.append(Transform2634)
Transform2645 = x3d.Transform()
Transform2645.DEF = "SceneLabel"
Transform2645.translation = [1.3,3,0]
Shape2646 = x3d.Shape()
Shape2646.DEF = "SceneLabelText"
Appearance2647 = x3d.Appearance()
Material2648 = x3d.Material()
Material2648.USE = "text_color"

Appearance2647.material = Material2648

Shape2646.appearance = Appearance2647
Text2649 = x3d.Text()
Text2649.string = ["JinLOA4","Animation"]
FontStyle2650 = x3d.FontStyle()
FontStyle2650.family = ["SANS"]
FontStyle2650.justify = ["MIDDLE","MIDDLE"]

Text2649.fontStyle = FontStyle2650

Shape2646.geometry = Text2649

Transform2645.children.append(Shape2646)

Transform2544.children.append(Transform2645)

Transform2543.children.append(Transform2544)

Group2536.children.append(Transform2543)

Scene22.children.append(Group2536)
ROUTE2651 = x3d.ROUTE()
ROUTE2651.fromField = "position_changed"
ROUTE2651.fromNode = "HudProx"
ROUTE2651.toField = "set_translation"
ROUTE2651.toNode = "HudXform"

Scene22.children.append(ROUTE2651)
ROUTE2652 = x3d.ROUTE()
ROUTE2652.fromField = "orientation_changed"
ROUTE2652.fromNode = "HudProx"
ROUTE2652.toField = "set_rotation"
ROUTE2652.toNode = "HudXform"

Scene22.children.append(ROUTE2652)
ROUTE2653 = x3d.ROUTE()
ROUTE2653.fromField = "touchTime"
ROUTE2653.fromNode = "Stand_Touch"
ROUTE2653.toField = "set_stopTime"
ROUTE2653.toNode = "PitchTimer"

Scene22.children.append(ROUTE2653)
ROUTE2654 = x3d.ROUTE()
ROUTE2654.fromField = "touchTime"
ROUTE2654.fromNode = "Stand_Touch"
ROUTE2654.toField = "set_stopTime"
ROUTE2654.toNode = "YawTimer"

Scene22.children.append(ROUTE2654)
ROUTE2655 = x3d.ROUTE()
ROUTE2655.fromField = "touchTime"
ROUTE2655.fromNode = "Stand_Touch"
ROUTE2655.toField = "set_stopTime"
ROUTE2655.toNode = "RollTimer"

Scene22.children.append(ROUTE2655)
ROUTE2656 = x3d.ROUTE()
ROUTE2656.fromField = "touchTime"
ROUTE2656.fromNode = "Stand_Touch"
ROUTE2656.toField = "set_stopTime"
ROUTE2656.toNode = "WalkTimer"

Scene22.children.append(ROUTE2656)
ROUTE2657 = x3d.ROUTE()
ROUTE2657.fromField = "touchTime"
ROUTE2657.fromNode = "Stand_Touch"
ROUTE2657.toField = "set_stopTime"
ROUTE2657.toNode = "RunTimer"

Scene22.children.append(ROUTE2657)
ROUTE2658 = x3d.ROUTE()
ROUTE2658.fromField = "touchTime"
ROUTE2658.fromNode = "Stand_Touch"
ROUTE2658.toField = "set_stopTime"
ROUTE2658.toNode = "JumpTimer"

Scene22.children.append(ROUTE2658)
ROUTE2659 = x3d.ROUTE()
ROUTE2659.fromField = "touchTime"
ROUTE2659.fromNode = "Stand_Touch"
ROUTE2659.toField = "set_stopTime"
ROUTE2659.toNode = "KickTimer"

Scene22.children.append(ROUTE2659)
ROUTE2660 = x3d.ROUTE()
ROUTE2660.fromField = "touchTime"
ROUTE2660.fromNode = "Stand_Touch"
ROUTE2660.toField = "set_stopTime"
ROUTE2660.toNode = "StopTimer"

Scene22.children.append(ROUTE2660)
ROUTE2661 = x3d.ROUTE()
ROUTE2661.fromField = "touchTime"
ROUTE2661.fromNode = "Stand_Touch"
ROUTE2661.toField = "set_startTime"
ROUTE2661.toNode = "StandTimer"

Scene22.children.append(ROUTE2661)
ROUTE2662 = x3d.ROUTE()
ROUTE2662.fromField = "touchTime"
ROUTE2662.fromNode = "Pitch_Touch"
ROUTE2662.toField = "set_stopTime"
ROUTE2662.toNode = "StandTimer"

Scene22.children.append(ROUTE2662)
ROUTE2663 = x3d.ROUTE()
ROUTE2663.fromField = "touchTime"
ROUTE2663.fromNode = "Pitch_Touch"
ROUTE2663.toField = "set_stopTime"
ROUTE2663.toNode = "YawTimer"

Scene22.children.append(ROUTE2663)
ROUTE2664 = x3d.ROUTE()
ROUTE2664.fromField = "touchTime"
ROUTE2664.fromNode = "Pitch_Touch"
ROUTE2664.toField = "set_stopTime"
ROUTE2664.toNode = "RollTimer"

Scene22.children.append(ROUTE2664)
ROUTE2665 = x3d.ROUTE()
ROUTE2665.fromField = "touchTime"
ROUTE2665.fromNode = "Pitch_Touch"
ROUTE2665.toField = "set_stopTime"
ROUTE2665.toNode = "WalkTimer"

Scene22.children.append(ROUTE2665)
ROUTE2666 = x3d.ROUTE()
ROUTE2666.fromField = "touchTime"
ROUTE2666.fromNode = "Pitch_Touch"
ROUTE2666.toField = "set_stopTime"
ROUTE2666.toNode = "RunTimer"

Scene22.children.append(ROUTE2666)
ROUTE2667 = x3d.ROUTE()
ROUTE2667.fromField = "touchTime"
ROUTE2667.fromNode = "Pitch_Touch"
ROUTE2667.toField = "set_stopTime"
ROUTE2667.toNode = "JumpTimer"

Scene22.children.append(ROUTE2667)
ROUTE2668 = x3d.ROUTE()
ROUTE2668.fromField = "touchTime"
ROUTE2668.fromNode = "Pitch_Touch"
ROUTE2668.toField = "set_stopTime"
ROUTE2668.toNode = "KickTimer"

Scene22.children.append(ROUTE2668)
ROUTE2669 = x3d.ROUTE()
ROUTE2669.fromField = "touchTime"
ROUTE2669.fromNode = "Pitch_Touch"
ROUTE2669.toField = "set_stopTime"
ROUTE2669.toNode = "StopTimer"

Scene22.children.append(ROUTE2669)
ROUTE2670 = x3d.ROUTE()
ROUTE2670.fromField = "touchTime"
ROUTE2670.fromNode = "Pitch_Touch"
ROUTE2670.toField = "set_startTime"
ROUTE2670.toNode = "PitchTimer"

Scene22.children.append(ROUTE2670)
ROUTE2671 = x3d.ROUTE()
ROUTE2671.fromField = "touchTime"
ROUTE2671.fromNode = "Yaw_Touch"
ROUTE2671.toField = "set_stopTime"
ROUTE2671.toNode = "StandTimer"

Scene22.children.append(ROUTE2671)
ROUTE2672 = x3d.ROUTE()
ROUTE2672.fromField = "touchTime"
ROUTE2672.fromNode = "Yaw_Touch"
ROUTE2672.toField = "set_stopTime"
ROUTE2672.toNode = "PitchTimer"

Scene22.children.append(ROUTE2672)
ROUTE2673 = x3d.ROUTE()
ROUTE2673.fromField = "touchTime"
ROUTE2673.fromNode = "Yaw_Touch"
ROUTE2673.toField = "set_stopTime"
ROUTE2673.toNode = "RollTimer"

Scene22.children.append(ROUTE2673)
ROUTE2674 = x3d.ROUTE()
ROUTE2674.fromField = "touchTime"
ROUTE2674.fromNode = "Yaw_Touch"
ROUTE2674.toField = "set_stopTime"
ROUTE2674.toNode = "WalkTimer"

Scene22.children.append(ROUTE2674)
ROUTE2675 = x3d.ROUTE()
ROUTE2675.fromField = "touchTime"
ROUTE2675.fromNode = "Yaw_Touch"
ROUTE2675.toField = "set_stopTime"
ROUTE2675.toNode = "RunTimer"

Scene22.children.append(ROUTE2675)
ROUTE2676 = x3d.ROUTE()
ROUTE2676.fromField = "touchTime"
ROUTE2676.fromNode = "Yaw_Touch"
ROUTE2676.toField = "set_stopTime"
ROUTE2676.toNode = "JumpTimer"

Scene22.children.append(ROUTE2676)
ROUTE2677 = x3d.ROUTE()
ROUTE2677.fromField = "touchTime"
ROUTE2677.fromNode = "Yaw_Touch"
ROUTE2677.toField = "set_stopTime"
ROUTE2677.toNode = "KickTimer"

Scene22.children.append(ROUTE2677)
ROUTE2678 = x3d.ROUTE()
ROUTE2678.fromField = "touchTime"
ROUTE2678.fromNode = "Yaw_Touch"
ROUTE2678.toField = "set_stopTime"
ROUTE2678.toNode = "StopTimer"

Scene22.children.append(ROUTE2678)
ROUTE2679 = x3d.ROUTE()
ROUTE2679.fromField = "touchTime"
ROUTE2679.fromNode = "Yaw_Touch"
ROUTE2679.toField = "set_startTime"
ROUTE2679.toNode = "YawTimer"

Scene22.children.append(ROUTE2679)
ROUTE2680 = x3d.ROUTE()
ROUTE2680.fromField = "touchTime"
ROUTE2680.fromNode = "Walk_Touch"
ROUTE2680.toField = "set_stopTime"
ROUTE2680.toNode = "StandTimer"

Scene22.children.append(ROUTE2680)
ROUTE2681 = x3d.ROUTE()
ROUTE2681.fromField = "touchTime"
ROUTE2681.fromNode = "Walk_Touch"
ROUTE2681.toField = "set_stopTime"
ROUTE2681.toNode = "PitchTimer"

Scene22.children.append(ROUTE2681)
ROUTE2682 = x3d.ROUTE()
ROUTE2682.fromField = "touchTime"
ROUTE2682.fromNode = "Walk_Touch"
ROUTE2682.toField = "set_stopTime"
ROUTE2682.toNode = "YawTimer"

Scene22.children.append(ROUTE2682)
ROUTE2683 = x3d.ROUTE()
ROUTE2683.fromField = "touchTime"
ROUTE2683.fromNode = "Walk_Touch"
ROUTE2683.toField = "set_stopTime"
ROUTE2683.toNode = "RollTimer"

Scene22.children.append(ROUTE2683)
ROUTE2684 = x3d.ROUTE()
ROUTE2684.fromField = "touchTime"
ROUTE2684.fromNode = "Walk_Touch"
ROUTE2684.toField = "set_stopTime"
ROUTE2684.toNode = "RunTimer"

Scene22.children.append(ROUTE2684)
ROUTE2685 = x3d.ROUTE()
ROUTE2685.fromField = "touchTime"
ROUTE2685.fromNode = "Walk_Touch"
ROUTE2685.toField = "set_stopTime"
ROUTE2685.toNode = "JumpTimer"

Scene22.children.append(ROUTE2685)
ROUTE2686 = x3d.ROUTE()
ROUTE2686.fromField = "touchTime"
ROUTE2686.fromNode = "Walk_Touch"
ROUTE2686.toField = "set_stopTime"
ROUTE2686.toNode = "KickTimer"

Scene22.children.append(ROUTE2686)
ROUTE2687 = x3d.ROUTE()
ROUTE2687.fromField = "touchTime"
ROUTE2687.fromNode = "Walk_Touch"
ROUTE2687.toField = "set_stopTime"
ROUTE2687.toNode = "StopTimer"

Scene22.children.append(ROUTE2687)
ROUTE2688 = x3d.ROUTE()
ROUTE2688.fromField = "touchTime"
ROUTE2688.fromNode = "Walk_Touch"
ROUTE2688.toField = "set_startTime"
ROUTE2688.toNode = "WalkTimer"

Scene22.children.append(ROUTE2688)
ROUTE2689 = x3d.ROUTE()
ROUTE2689.fromField = "touchTime"
ROUTE2689.fromNode = "Roll_Touch"
ROUTE2689.toField = "set_stopTime"
ROUTE2689.toNode = "StandTimer"

Scene22.children.append(ROUTE2689)
ROUTE2690 = x3d.ROUTE()
ROUTE2690.fromField = "touchTime"
ROUTE2690.fromNode = "Roll_Touch"
ROUTE2690.toField = "set_stopTime"
ROUTE2690.toNode = "PitchTimer"

Scene22.children.append(ROUTE2690)
ROUTE2691 = x3d.ROUTE()
ROUTE2691.fromField = "touchTime"
ROUTE2691.fromNode = "Roll_Touch"
ROUTE2691.toField = "set_stopTime"
ROUTE2691.toNode = "YawTimer"

Scene22.children.append(ROUTE2691)
ROUTE2692 = x3d.ROUTE()
ROUTE2692.fromField = "touchTime"
ROUTE2692.fromNode = "Roll_Touch"
ROUTE2692.toField = "set_stopTime"
ROUTE2692.toNode = "WalkTimer"

Scene22.children.append(ROUTE2692)
ROUTE2693 = x3d.ROUTE()
ROUTE2693.fromField = "touchTime"
ROUTE2693.fromNode = "Roll_Touch"
ROUTE2693.toField = "set_stopTime"
ROUTE2693.toNode = "RunTimer"

Scene22.children.append(ROUTE2693)
ROUTE2694 = x3d.ROUTE()
ROUTE2694.fromField = "touchTime"
ROUTE2694.fromNode = "Roll_Touch"
ROUTE2694.toField = "set_stopTime"
ROUTE2694.toNode = "JumpTimer"

Scene22.children.append(ROUTE2694)
ROUTE2695 = x3d.ROUTE()
ROUTE2695.fromField = "touchTime"
ROUTE2695.fromNode = "Roll_Touch"
ROUTE2695.toField = "set_stopTime"
ROUTE2695.toNode = "KickTimer"

Scene22.children.append(ROUTE2695)
ROUTE2696 = x3d.ROUTE()
ROUTE2696.fromField = "touchTime"
ROUTE2696.fromNode = "Roll_Touch"
ROUTE2696.toField = "set_stopTime"
ROUTE2696.toNode = "StopTimer"

Scene22.children.append(ROUTE2696)
ROUTE2697 = x3d.ROUTE()
ROUTE2697.fromField = "touchTime"
ROUTE2697.fromNode = "Roll_Touch"
ROUTE2697.toField = "set_startTime"
ROUTE2697.toNode = "RollTimer"

Scene22.children.append(ROUTE2697)
ROUTE2698 = x3d.ROUTE()
ROUTE2698.fromField = "touchTime"
ROUTE2698.fromNode = "Run_Touch"
ROUTE2698.toField = "set_stopTime"
ROUTE2698.toNode = "StandTimer"

Scene22.children.append(ROUTE2698)
ROUTE2699 = x3d.ROUTE()
ROUTE2699.fromField = "touchTime"
ROUTE2699.fromNode = "Run_Touch"
ROUTE2699.toField = "set_stopTime"
ROUTE2699.toNode = "PitchTimer"

Scene22.children.append(ROUTE2699)
ROUTE2700 = x3d.ROUTE()
ROUTE2700.fromField = "touchTime"
ROUTE2700.fromNode = "Run_Touch"
ROUTE2700.toField = "set_stopTime"
ROUTE2700.toNode = "YawTimer"

Scene22.children.append(ROUTE2700)
ROUTE2701 = x3d.ROUTE()
ROUTE2701.fromField = "touchTime"
ROUTE2701.fromNode = "Run_Touch"
ROUTE2701.toField = "set_stopTime"
ROUTE2701.toNode = "RollTimer"

Scene22.children.append(ROUTE2701)
ROUTE2702 = x3d.ROUTE()
ROUTE2702.fromField = "touchTime"
ROUTE2702.fromNode = "Run_Touch"
ROUTE2702.toField = "set_stopTime"
ROUTE2702.toNode = "WalkTimer"

Scene22.children.append(ROUTE2702)
ROUTE2703 = x3d.ROUTE()
ROUTE2703.fromField = "touchTime"
ROUTE2703.fromNode = "Run_Touch"
ROUTE2703.toField = "set_stopTime"
ROUTE2703.toNode = "JumpTimer"

Scene22.children.append(ROUTE2703)
ROUTE2704 = x3d.ROUTE()
ROUTE2704.fromField = "touchTime"
ROUTE2704.fromNode = "Run_Touch"
ROUTE2704.toField = "set_stopTime"
ROUTE2704.toNode = "KickTimer"

Scene22.children.append(ROUTE2704)
ROUTE2705 = x3d.ROUTE()
ROUTE2705.fromField = "touchTime"
ROUTE2705.fromNode = "Run_Touch"
ROUTE2705.toField = "set_stopTime"
ROUTE2705.toNode = "StopTimer"

Scene22.children.append(ROUTE2705)
ROUTE2706 = x3d.ROUTE()
ROUTE2706.fromField = "touchTime"
ROUTE2706.fromNode = "Run_Touch"
ROUTE2706.toField = "set_startTime"
ROUTE2706.toNode = "RunTimer"

Scene22.children.append(ROUTE2706)
ROUTE2707 = x3d.ROUTE()
ROUTE2707.fromField = "touchTime"
ROUTE2707.fromNode = "Jump_Touch"
ROUTE2707.toField = "set_stopTime"
ROUTE2707.toNode = "StandTimer"

Scene22.children.append(ROUTE2707)
ROUTE2708 = x3d.ROUTE()
ROUTE2708.fromField = "touchTime"
ROUTE2708.fromNode = "Jump_Touch"
ROUTE2708.toField = "set_stopTime"
ROUTE2708.toNode = "PitchTimer"

Scene22.children.append(ROUTE2708)
ROUTE2709 = x3d.ROUTE()
ROUTE2709.fromField = "touchTime"
ROUTE2709.fromNode = "Jump_Touch"
ROUTE2709.toField = "set_stopTime"
ROUTE2709.toNode = "YawTimer"

Scene22.children.append(ROUTE2709)
ROUTE2710 = x3d.ROUTE()
ROUTE2710.fromField = "touchTime"
ROUTE2710.fromNode = "Jump_Touch"
ROUTE2710.toField = "set_stopTime"
ROUTE2710.toNode = "RollTimer"

Scene22.children.append(ROUTE2710)
ROUTE2711 = x3d.ROUTE()
ROUTE2711.fromField = "touchTime"
ROUTE2711.fromNode = "Jump_Touch"
ROUTE2711.toField = "set_stopTime"
ROUTE2711.toNode = "WalkTimer"

Scene22.children.append(ROUTE2711)
ROUTE2712 = x3d.ROUTE()
ROUTE2712.fromField = "touchTime"
ROUTE2712.fromNode = "Jump_Touch"
ROUTE2712.toField = "set_stopTime"
ROUTE2712.toNode = "RunTimer"

Scene22.children.append(ROUTE2712)
ROUTE2713 = x3d.ROUTE()
ROUTE2713.fromField = "touchTime"
ROUTE2713.fromNode = "Jump_Touch"
ROUTE2713.toField = "set_stopTime"
ROUTE2713.toNode = "KickTimer"

Scene22.children.append(ROUTE2713)
ROUTE2714 = x3d.ROUTE()
ROUTE2714.fromField = "touchTime"
ROUTE2714.fromNode = "Jump_Touch"
ROUTE2714.toField = "set_stopTime"
ROUTE2714.toNode = "StopTimer"

Scene22.children.append(ROUTE2714)
ROUTE2715 = x3d.ROUTE()
ROUTE2715.fromField = "touchTime"
ROUTE2715.fromNode = "Jump_Touch"
ROUTE2715.toField = "set_startTime"
ROUTE2715.toNode = "JumpTimer"

Scene22.children.append(ROUTE2715)
ROUTE2716 = x3d.ROUTE()
ROUTE2716.fromField = "touchTime"
ROUTE2716.fromNode = "Kick_Touch"
ROUTE2716.toField = "set_stopTime"
ROUTE2716.toNode = "StandTimer"

Scene22.children.append(ROUTE2716)
ROUTE2717 = x3d.ROUTE()
ROUTE2717.fromField = "touchTime"
ROUTE2717.fromNode = "Kick_Touch"
ROUTE2717.toField = "set_stopTime"
ROUTE2717.toNode = "PitchTimer"

Scene22.children.append(ROUTE2717)
ROUTE2718 = x3d.ROUTE()
ROUTE2718.fromField = "touchTime"
ROUTE2718.fromNode = "Kick_Touch"
ROUTE2718.toField = "set_stopTime"
ROUTE2718.toNode = "YawTimer"

Scene22.children.append(ROUTE2718)
ROUTE2719 = x3d.ROUTE()
ROUTE2719.fromField = "touchTime"
ROUTE2719.fromNode = "Kick_Touch"
ROUTE2719.toField = "set_stopTime"
ROUTE2719.toNode = "RollTimer"

Scene22.children.append(ROUTE2719)
ROUTE2720 = x3d.ROUTE()
ROUTE2720.fromField = "touchTime"
ROUTE2720.fromNode = "Kick_Touch"
ROUTE2720.toField = "set_stopTime"
ROUTE2720.toNode = "WalkTimer"

Scene22.children.append(ROUTE2720)
ROUTE2721 = x3d.ROUTE()
ROUTE2721.fromField = "touchTime"
ROUTE2721.fromNode = "Kick_Touch"
ROUTE2721.toField = "set_stopTime"
ROUTE2721.toNode = "RunTimer"

Scene22.children.append(ROUTE2721)
ROUTE2722 = x3d.ROUTE()
ROUTE2722.fromField = "touchTime"
ROUTE2722.fromNode = "Kick_Touch"
ROUTE2722.toField = "set_stopTime"
ROUTE2722.toNode = "JumpTimer"

Scene22.children.append(ROUTE2722)
ROUTE2723 = x3d.ROUTE()
ROUTE2723.fromField = "touchTime"
ROUTE2723.fromNode = "Kick_Touch"
ROUTE2723.toField = "set_stopTime"
ROUTE2723.toNode = "StopTimer"

Scene22.children.append(ROUTE2723)
ROUTE2724 = x3d.ROUTE()
ROUTE2724.fromField = "touchTime"
ROUTE2724.fromNode = "Kick_Touch"
ROUTE2724.toField = "set_startTime"
ROUTE2724.toNode = "KickTimer"

Scene22.children.append(ROUTE2724)
ROUTE2725 = x3d.ROUTE()
ROUTE2725.fromField = "touchTime"
ROUTE2725.fromNode = "Stop_Touch"
ROUTE2725.toField = "set_stopTime"
ROUTE2725.toNode = "StandTimer"

Scene22.children.append(ROUTE2725)
ROUTE2726 = x3d.ROUTE()
ROUTE2726.fromField = "touchTime"
ROUTE2726.fromNode = "Stop_Touch"
ROUTE2726.toField = "set_stopTime"
ROUTE2726.toNode = "PitchTimer"

Scene22.children.append(ROUTE2726)
ROUTE2727 = x3d.ROUTE()
ROUTE2727.fromField = "touchTime"
ROUTE2727.fromNode = "Stop_Touch"
ROUTE2727.toField = "set_stopTime"
ROUTE2727.toNode = "YawTimer"

Scene22.children.append(ROUTE2727)
ROUTE2728 = x3d.ROUTE()
ROUTE2728.fromField = "touchTime"
ROUTE2728.fromNode = "Stop_Touch"
ROUTE2728.toField = "set_stopTime"
ROUTE2728.toNode = "RollTimer"

Scene22.children.append(ROUTE2728)
ROUTE2729 = x3d.ROUTE()
ROUTE2729.fromField = "touchTime"
ROUTE2729.fromNode = "Stop_Touch"
ROUTE2729.toField = "set_stopTime"
ROUTE2729.toNode = "WalkTimer"

Scene22.children.append(ROUTE2729)
ROUTE2730 = x3d.ROUTE()
ROUTE2730.fromField = "touchTime"
ROUTE2730.fromNode = "Stop_Touch"
ROUTE2730.toField = "set_stopTime"
ROUTE2730.toNode = "RunTimer"

Scene22.children.append(ROUTE2730)
ROUTE2731 = x3d.ROUTE()
ROUTE2731.fromField = "touchTime"
ROUTE2731.fromNode = "Stop_Touch"
ROUTE2731.toField = "set_stopTime"
ROUTE2731.toNode = "JumpTimer"

Scene22.children.append(ROUTE2731)
ROUTE2732 = x3d.ROUTE()
ROUTE2732.fromField = "touchTime"
ROUTE2732.fromNode = "Stop_Touch"
ROUTE2732.toField = "set_stopTime"
ROUTE2732.toNode = "KickTimer"

Scene22.children.append(ROUTE2732)
ROUTE2733 = x3d.ROUTE()
ROUTE2733.fromField = "touchTime"
ROUTE2733.fromNode = "Stop_Touch"
ROUTE2733.toField = "set_startTime"
ROUTE2733.toNode = "StopTimer"

Scene22.children.append(ROUTE2733)

X3D0.Scene = Scene22
f = open("../data/JinLOA4scaled1joe06c.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/JinLOA4scaled1joe06c.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
