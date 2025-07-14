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
meta3.content = "KoreanCharacterMotionAnnexC01Jin.x3d"

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
meta8.content = "7 January 2023"

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
meta13.name = "specificationSection"
meta13.content = "HAnim 2.0 Part 2: Humanoid animation (HAnim) motion data animation, Annex C (informative) An example of HAnim motion data animation using interpolators"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "specificationUrl"
meta14.content = "https://www.web3d.org/documents/specifications/19774/V2.0/MotionDataAnimation/ExampleMocapAnimationInterpolators.html"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "identifier"
meta15.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/KoreanCharacterMotionAnnexC01Jin.x3d"

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
meta18.content = "Gnu Image Manipulation Program, http://www.gimp.org"

head1.children.append(meta18)
meta19 = x3d.meta()
meta19.name = "generator"
meta19.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta19)
meta20 = x3d.meta()
meta20.name = "license"
meta20.content = "../license.html"

head1.children.append(meta20)

X3D0.head = head1
Scene21 = x3d.Scene()
WorldInfo22 = x3d.WorldInfo()
WorldInfo22.title = "KoreanCharacterMotionAnnexC01Jin.x3d"

Scene21.children.append(WorldInfo22)
NavigationInfo23 = x3d.NavigationInfo()
NavigationInfo23.speed = 1.5

Scene21.children.append(NavigationInfo23)
Viewpoint24 = x3d.Viewpoint()
Viewpoint24.centerOfRotation = [0,1,0]
Viewpoint24.description = "AnnexC01Jin"
Viewpoint24.position = [0,1,3]

Scene21.children.append(Viewpoint24)
HAnimHumanoid25 = x3d.HAnimHumanoid()
HAnimHumanoid25.name = "AnnexC01Jin"
HAnimHumanoid25.DEF = "hanim_AnnexC01Jin"
HAnimHumanoid25.scale = [0.0225,0.0225,0.0225]
HAnimHumanoid25.version = "2.0"
"""original HAnimHumanoid info='\"humanoidVersion=2.0\"'"""
MetadataSet26 = x3d.MetadataSet()
MetadataSet26.name = "HAnimHumanoid.info"
MetadataSet26.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"
MetadataString27 = x3d.MetadataString()
MetadataString27.name = "humanoidVersion"
MetadataString27.value = ["2.0"]

if MetadataSet26.value is None:
    MetadataSet26.value = []
MetadataSet26.value.append(MetadataString27)

HAnimHumanoid25.metadata = MetadataSet26
HAnimJoint28 = x3d.HAnimJoint()
HAnimJoint28.name = "humanoid_root"
HAnimJoint28.DEF = "hanim_humanoid_root"
HAnimJoint28.center = [0,30.53,-0.7076]
HAnimJoint28.ulimit = [0,0,0]
HAnimJoint28.llimit = [0,0,0]
HAnimSegment29 = x3d.HAnimSegment()
HAnimSegment29.name = "sacrum"
HAnimSegment29.DEF = "hanim_sacrum"
Transform30 = x3d.Transform()
Transform30.translation = [0,30.53,-0.7076]
Shape31 = x3d.Shape()
Appearance32 = x3d.Appearance()
Material33 = x3d.Material()
Material33.diffuseColor = [0.588,0.588,0.588]

Appearance32.material = Material33
ImageTexture34 = x3d.ImageTexture()
ImageTexture34.DEF = "AnnexC01JinTextureAtlas"
ImageTexture34.url = ["Jin.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/HAnimSpecification/Jin.png"]

Appearance32.texture = ImageTexture34

Shape31.appearance = Appearance32
IndexedFaceSet35 = x3d.IndexedFaceSet()
IndexedFaceSet35.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]
IndexedFaceSet35.creaseAngle = 3.14159
IndexedFaceSet35.texCoordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]
Coordinate36 = x3d.Coordinate()

IndexedFaceSet35.coord = Coordinate36
TextureCoordinate37 = x3d.TextureCoordinate()

IndexedFaceSet35.texCoord = TextureCoordinate37

Shape31.geometry = IndexedFaceSet35

Transform30.children.append(Shape31)

HAnimSegment29.children.append(Transform30)

HAnimJoint28.children.append(HAnimSegment29)
HAnimJoint38 = x3d.HAnimJoint()
HAnimJoint38.name = "sacroiliac"
HAnimJoint38.DEF = "hanim_sacroiliac"
HAnimJoint38.center = [0,35.8,-0.7076]
HAnimJoint38.ulimit = [0,0,0]
HAnimJoint38.llimit = [0,0,0]
HAnimSegment39 = x3d.HAnimSegment()
HAnimSegment39.name = "pelvis"
HAnimSegment39.DEF = "hanim_pelvis"
Transform40 = x3d.Transform()
Transform40.translation = [0,35.8,-0.7076]
Shape41 = x3d.Shape()
Appearance42 = x3d.Appearance()
Material43 = x3d.Material()
Material43.diffuseColor = [0.588,0.588,0.588]

Appearance42.material = Material43
ImageTexture44 = x3d.ImageTexture()
ImageTexture44.USE = "AnnexC01JinTextureAtlas"

Appearance42.texture = ImageTexture44

Shape41.appearance = Appearance42
IndexedFaceSet45 = x3d.IndexedFaceSet()
IndexedFaceSet45.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]
IndexedFaceSet45.creaseAngle = 3.14159
IndexedFaceSet45.texCoordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]
Coordinate46 = x3d.Coordinate()

IndexedFaceSet45.coord = Coordinate46
TextureCoordinate47 = x3d.TextureCoordinate()

IndexedFaceSet45.texCoord = TextureCoordinate47

Shape41.geometry = IndexedFaceSet45

Transform40.children.append(Shape41)

HAnimSegment39.children.append(Transform40)

HAnimJoint38.children.append(HAnimSegment39)
HAnimJoint48 = x3d.HAnimJoint()
HAnimJoint48.name = "l_hip"
HAnimJoint48.DEF = "hanim_l_hip"
HAnimJoint48.center = [4.207,32.02,-0.8155]
HAnimJoint48.ulimit = [0,0,0]
HAnimJoint48.llimit = [0,0,0]
HAnimSegment49 = x3d.HAnimSegment()
HAnimSegment49.name = "l_thigh"
HAnimSegment49.DEF = "hanim_l_thigh"
Transform50 = x3d.Transform()
Transform50.translation = [4.207,32.02,-0.8155]
Shape51 = x3d.Shape()
Appearance52 = x3d.Appearance()
Material53 = x3d.Material()
Material53.diffuseColor = [0.588,0.588,0.588]

Appearance52.material = Material53
ImageTexture54 = x3d.ImageTexture()
ImageTexture54.USE = "AnnexC01JinTextureAtlas"

Appearance52.texture = ImageTexture54

Shape51.appearance = Appearance52
IndexedFaceSet55 = x3d.IndexedFaceSet()
IndexedFaceSet55.coordIndex = [47,46,45,-1,45,44,43,-1,45,43,42,-1,47,45,42,-1,48,47,42,-1,0,1,8,-1,8,7,0,-1,1,2,9,-1,9,8,1,-1,2,3,10,-1,10,9,2,-1,3,4,11,-1,11,10,3,-1,4,5,12,-1,12,11,4,-1,5,6,13,-1,13,12,5,-1,6,0,7,-1,7,13,6,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,12,19,-1,19,18,11,-1,12,13,20,-1,20,19,12,-1,13,7,14,-1,14,20,13,-1,14,15,22,-1,22,21,14,-1,15,16,23,-1,23,22,15,-1,16,17,24,-1,24,23,16,-1,17,18,25,-1,25,24,17,-1,18,19,26,-1,26,25,18,-1,19,20,27,-1,27,26,19,-1,20,14,21,-1,21,27,20,-1,56,57,58,-1,58,59,60,-1,58,60,61,-1,56,58,61,-1,62,56,61,-1,29,28,21,-1,21,22,29,-1,30,29,22,-1,22,23,30,-1,31,30,23,-1,23,24,31,-1,32,31,24,-1,24,25,32,-1,33,32,25,-1,25,26,33,-1,34,33,26,-1,26,27,34,-1,28,34,27,-1,27,21,28,-1,36,35,28,-1,28,29,36,-1,37,36,29,-1,29,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,35,41,34,-1,34,28,35,-1,42,43,1,-1,1,0,42,-1,43,44,2,-1,2,1,43,-1,44,45,3,-1,3,2,44,-1,45,46,4,-1,4,3,45,-1,46,47,5,-1,5,4,46,-1,47,48,6,-1,6,5,47,-1,48,42,0,-1,0,6,48,-1,50,49,35,-1,35,36,50,-1,51,50,36,-1,36,37,51,-1,52,51,37,-1,37,38,52,-1,53,52,38,-1,38,39,53,-1,54,53,39,-1,39,40,54,-1,55,54,40,-1,40,41,55,-1,49,55,41,-1,41,35,49,-1,57,56,49,-1,49,50,57,-1,58,57,50,-1,50,51,58,-1,59,58,51,-1,51,52,59,-1,60,59,52,-1,52,53,60,-1,61,60,53,-1,53,54,61,-1,62,61,54,-1,54,55,62,-1,56,62,55,-1,55,49,56,-1]
IndexedFaceSet55.creaseAngle = 3.14159
IndexedFaceSet55.texCoordIndex = [5,4,3,-1,3,2,0,-1,3,0,1,-1,5,3,1,-1,6,5,1,-1,7,10,8,-1,8,9,7,-1,10,12,11,-1,11,8,10,-1,12,14,13,-1,13,11,12,-1,14,16,15,-1,15,13,14,-1,16,18,17,-1,17,15,16,-1,18,20,19,-1,19,17,18,-1,20,7,9,-1,9,19,20,-1,9,8,21,-1,21,22,9,-1,8,11,23,-1,23,21,8,-1,11,13,24,-1,24,23,11,-1,13,15,25,-1,25,24,13,-1,15,17,26,-1,26,25,15,-1,17,19,27,-1,27,26,17,-1,19,9,22,-1,22,27,19,-1,22,21,28,-1,28,29,22,-1,21,23,30,-1,30,28,21,-1,23,24,31,-1,31,30,23,-1,24,25,32,-1,32,31,24,-1,25,26,33,-1,33,32,25,-1,26,27,34,-1,34,33,26,-1,27,22,29,-1,29,34,27,-1,42,43,44,-1,44,45,46,-1,44,46,47,-1,42,44,47,-1,48,42,47,-1,35,36,29,-1,29,28,35,-1,37,35,28,-1,28,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,36,41,34,-1,34,29,36,-1,51,52,49,-1,49,50,51,-1,54,51,50,-1,50,53,54,-1,56,54,53,-1,53,55,56,-1,58,56,55,-1,55,57,58,-1,60,58,57,-1,57,59,60,-1,62,60,59,-1,59,61,62,-1,52,62,61,-1,61,49,52,-1,1,0,10,-1,10,7,1,-1,0,2,12,-1,12,10,0,-1,2,3,14,-1,14,12,2,-1,3,4,16,-1,16,14,3,-1,4,5,18,-1,18,16,4,-1,5,6,20,-1,20,18,5,-1,6,1,7,-1,7,20,6,-1,63,64,52,-1,52,51,63,-1,65,63,51,-1,51,54,65,-1,66,65,54,-1,54,56,66,-1,67,66,56,-1,56,58,67,-1,68,67,58,-1,58,60,68,-1,69,68,60,-1,60,62,69,-1,64,69,62,-1,62,52,64,-1,43,42,64,-1,64,63,43,-1,44,43,63,-1,63,65,44,-1,45,44,65,-1,65,66,45,-1,46,45,66,-1,66,67,46,-1,47,46,67,-1,67,68,47,-1,48,47,68,-1,68,69,48,-1,42,48,69,-1,69,64,42,-1]
Coordinate56 = x3d.Coordinate()

IndexedFaceSet55.coord = Coordinate56
TextureCoordinate57 = x3d.TextureCoordinate()

IndexedFaceSet55.texCoord = TextureCoordinate57

Shape51.geometry = IndexedFaceSet55

Transform50.children.append(Shape51)

HAnimSegment49.children.append(Transform50)

HAnimJoint48.children.append(HAnimSegment49)
HAnimJoint58 = x3d.HAnimJoint()
HAnimJoint58.name = "l_knee"
HAnimJoint58.DEF = "hanim_l_knee"
HAnimJoint58.center = [4.116,17.26,-0.8639]
HAnimJoint58.ulimit = [0,0,0]
HAnimJoint58.llimit = [0,0,0]
HAnimSegment59 = x3d.HAnimSegment()
HAnimSegment59.name = "l_calf"
HAnimSegment59.DEF = "hanim_l_calf"
Transform60 = x3d.Transform()
Transform60.translation = [4.116,17.26,-0.8639]
Shape61 = x3d.Shape()
Appearance62 = x3d.Appearance()
Material63 = x3d.Material()
Material63.diffuseColor = [0.588,0.588,0.588]

Appearance62.material = Material63
ImageTexture64 = x3d.ImageTexture()
ImageTexture64.USE = "AnnexC01JinTextureAtlas"

Appearance62.texture = ImageTexture64

Shape61.appearance = Appearance62
IndexedFaceSet65 = x3d.IndexedFaceSet()
IndexedFaceSet65.coordIndex = [4,3,2,-1,5,4,2,-1,2,1,0,-1,5,2,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1]
IndexedFaceSet65.creaseAngle = 3.14159
IndexedFaceSet65.texCoordIndex = [4,3,2,-1,5,4,2,-1,2,1,0,-1,5,2,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1]
Coordinate66 = x3d.Coordinate()

IndexedFaceSet65.coord = Coordinate66
TextureCoordinate67 = x3d.TextureCoordinate()

IndexedFaceSet65.texCoord = TextureCoordinate67

Shape61.geometry = IndexedFaceSet65

Transform60.children.append(Shape61)

HAnimSegment59.children.append(Transform60)

HAnimJoint58.children.append(HAnimSegment59)
HAnimJoint68 = x3d.HAnimJoint()
HAnimJoint68.name = "l_talocrural"
HAnimJoint68.DEF = "hanim_l_talocrural"
HAnimJoint68.center = [3.854,3.939,-0.7038]
HAnimJoint68.ulimit = [0,0,0]
HAnimJoint68.llimit = [0,0,0]
HAnimSegment69 = x3d.HAnimSegment()
HAnimSegment69.name = "l_talus"
HAnimSegment69.DEF = "hanim_l_talus"
Transform70 = x3d.Transform()
Transform70.translation = [3.854,3.939,-0.7038]
Shape71 = x3d.Shape()
Appearance72 = x3d.Appearance()
Material73 = x3d.Material()
Material73.diffuseColor = [0.588,0.588,0.588]

Appearance72.material = Material73
ImageTexture74 = x3d.ImageTexture()
ImageTexture74.USE = "AnnexC01JinTextureAtlas"

Appearance72.texture = ImageTexture74

Shape71.appearance = Appearance72
IndexedFaceSet75 = x3d.IndexedFaceSet()
IndexedFaceSet75.coordIndex = [1,11,14,-1,3,4,5,-1,5,6,3,-1,1,0,4,-1,4,3,1,-1,0,2,5,-1,5,4,0,-1,11,1,3,-1,3,6,11,-1,15,2,0,-1,0,12,15,-1,0,1,13,-1,13,12,0,-1,13,1,14,-1,7,18,11,-1,8,6,5,-1,5,9,8,-1,7,8,9,-1,9,10,7,-1,10,9,5,-1,5,2,10,-1,11,6,8,-1,8,7,11,-1,15,16,10,-1,10,2,15,-1,10,16,17,-1,17,7,10,-1,17,18,7,-1,21,22,23,-1,23,24,25,-1,25,26,19,-1,23,25,19,-1,21,23,19,-1,20,21,19,-1,15,12,20,-1,20,19,15,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,11,23,-1,23,22,14,-1,11,18,24,-1,24,23,11,-1,18,17,25,-1,25,24,18,-1,17,16,26,-1,26,25,17,-1,16,15,19,-1,19,26,16,-1,33,31,30,-1,30,27,33,-1,36,27,30,-1,30,38,36,-1,29,33,27,-1,27,28,29,-1,37,28,27,-1,27,36,37,-1,28,37,42,-1,42,29,28,-1,33,32,34,-1,34,31,33,-1,39,40,34,-1,34,32,39,-1,29,35,32,-1,32,33,29,-1,41,39,32,-1,32,35,41,-1,35,29,42,-1,42,41,35,-1,44,45,46,-1,44,46,47,-1,44,47,43,-1,51,52,53,-1,54,48,49,-1,53,54,49,-1,51,53,49,-1,51,49,50,-1,30,31,44,-1,44,43,30,-1,31,34,45,-1,45,44,31,-1,34,40,46,-1,46,45,34,-1,40,38,47,-1,47,46,40,-1,38,30,43,-1,43,47,38,-1,37,36,49,-1,49,48,37,-1,36,38,50,-1,50,49,36,-1,38,40,51,-1,51,50,38,-1,40,39,52,-1,52,51,40,-1,39,41,53,-1,53,52,39,-1,41,42,54,-1,54,53,41,-1,42,37,48,-1,48,54,42,-1]
IndexedFaceSet75.creaseAngle = 3.14159
IndexedFaceSet75.texCoordIndex = [1,14,18,-1,3,4,5,-1,5,6,3,-1,1,0,4,-1,4,3,1,-1,0,2,5,-1,5,4,0,-1,14,1,3,-1,3,6,14,-1,19,2,0,-1,0,16,19,-1,0,1,17,-1,17,16,0,-1,17,1,18,-1,7,23,15,-1,9,8,11,-1,11,10,9,-1,7,9,10,-1,10,12,7,-1,12,10,11,-1,11,13,12,-1,15,8,9,-1,9,7,15,-1,20,21,12,-1,12,13,20,-1,12,21,22,-1,22,7,12,-1,22,23,7,-1,26,27,28,-1,28,29,30,-1,30,31,24,-1,28,30,24,-1,26,28,24,-1,25,26,24,-1,19,16,25,-1,25,24,19,-1,16,17,26,-1,26,25,16,-1,17,18,27,-1,27,26,17,-1,18,14,28,-1,28,27,18,-1,15,23,29,-1,29,28,15,-1,23,22,30,-1,30,29,23,-1,22,21,31,-1,31,30,22,-1,21,20,24,-1,24,31,21,-1,34,38,37,-1,37,32,34,-1,46,32,37,-1,37,48,46,-1,35,34,32,-1,32,33,35,-1,47,33,32,-1,32,46,47,-1,33,47,53,-1,53,36,33,-1,40,39,42,-1,42,41,40,-1,49,50,42,-1,42,39,49,-1,44,43,39,-1,39,40,44,-1,51,49,39,-1,39,43,51,-1,43,45,52,-1,52,51,43,-1,55,56,57,-1,55,57,58,-1,55,58,54,-1,62,63,64,-1,65,59,60,-1,64,65,60,-1,62,64,60,-1,62,60,61,-1,37,38,55,-1,55,54,37,-1,41,42,56,-1,56,55,41,-1,42,50,57,-1,57,56,42,-1,50,48,58,-1,58,57,50,-1,48,37,54,-1,54,58,48,-1,47,46,60,-1,60,59,47,-1,46,48,61,-1,61,60,46,-1,48,50,62,-1,62,61,48,-1,50,49,63,-1,63,62,50,-1,49,51,64,-1,64,63,49,-1,51,52,65,-1,65,64,51,-1,53,47,59,-1,59,65,53,-1]
Coordinate76 = x3d.Coordinate()

IndexedFaceSet75.coord = Coordinate76
TextureCoordinate77 = x3d.TextureCoordinate()

IndexedFaceSet75.texCoord = TextureCoordinate77

Shape71.geometry = IndexedFaceSet75

Transform70.children.append(Shape71)

HAnimSegment69.children.append(Transform70)

HAnimJoint68.children.append(HAnimSegment69)
HAnimJoint78 = x3d.HAnimJoint()
HAnimJoint78.name = "l_metatarsophalangeal_2"
HAnimJoint78.DEF = "hanim_l_metatarsophalangeal_2"
HAnimJoint78.center = [3.854,3.64,0.7402]
HAnimJoint78.ulimit = [0,0,0]
HAnimJoint78.llimit = [0,0,0]
HAnimSegment79 = x3d.HAnimSegment()
HAnimSegment79.name = "l_tarsal_proximal_phalanx_2"
HAnimSegment79.DEF = "hanim_l_tarsal_proximal_phalanx_2"
Transform80 = x3d.Transform()
Transform80.translation = [3.854,3.64,0.7402]
Shape81 = x3d.Shape()
Appearance82 = x3d.Appearance()
Material83 = x3d.Material()
Material83.diffuseColor = [0.588,0.588,0.588]

Appearance82.material = Material83
ImageTexture84 = x3d.ImageTexture()
ImageTexture84.USE = "AnnexC01JinTextureAtlas"

Appearance82.texture = ImageTexture84

Shape81.appearance = Appearance82
IndexedFaceSet85 = x3d.IndexedFaceSet()
IndexedFaceSet85.coordIndex = [3,4,10,-1,3,10,11,-1,0,3,11,-1,1,0,11,-1,11,12,1,-1,1,12,16,-1,16,9,1,-1,2,17,10,-1,10,4,2,-1,13,8,6,-1,14,13,6,-1,5,14,6,-1,7,15,14,-1,14,5,7,-1,7,9,16,-1,16,15,7,-1,2,8,13,-1,13,17,2,-1,20,21,22,-1,20,22,23,-1,20,23,24,-1,19,20,24,-1,19,24,18,-1,0,1,19,-1,19,18,0,-1,1,9,20,-1,20,19,1,-1,9,7,21,-1,21,20,9,-1,7,5,22,-1,22,21,7,-1,5,6,23,-1,23,22,5,-1,6,3,24,-1,24,23,6,-1,3,0,18,-1,18,24,3,-1,6,8,2,-1,3,6,2,-1,4,3,2,-1,28,26,25,-1,25,29,28,-1,35,27,26,-1,26,28,35,-1,27,35,40,-1,25,26,31,-1,31,30,25,-1,31,26,27,-1,27,32,31,-1,32,27,40,-1,40,41,32,-1,42,29,25,-1,25,30,42,-1,28,29,34,-1,34,33,28,-1,35,28,33,-1,33,36,35,-1,36,40,35,-1,34,37,38,-1,38,33,34,-1,38,39,36,-1,36,33,38,-1,39,41,40,-1,40,36,39,-1,42,37,34,-1,34,29,42,-1]
IndexedFaceSet85.creaseAngle = 3.14159
IndexedFaceSet85.texCoordIndex = [4,5,12,-1,4,12,13,-1,0,4,13,-1,1,0,13,-1,13,14,1,-1,1,14,19,-1,19,3,1,-1,2,21,12,-1,12,5,2,-1,15,10,7,-1,16,15,7,-1,6,16,7,-1,8,17,16,-1,16,6,8,-1,8,11,18,-1,18,17,8,-1,9,10,15,-1,15,20,9,-1,24,25,26,-1,24,26,27,-1,24,27,28,-1,23,24,28,-1,23,28,22,-1,0,1,23,-1,23,22,0,-1,1,3,24,-1,24,23,1,-1,11,8,25,-1,25,24,11,-1,8,6,26,-1,26,25,8,-1,6,7,27,-1,27,26,6,-1,7,4,28,-1,28,27,7,-1,4,0,22,-1,22,28,4,-1,7,10,9,-1,4,7,9,-1,5,4,9,-1,30,32,31,-1,31,29,30,-1,33,34,32,-1,32,30,33,-1,34,33,35,-1,31,32,37,-1,37,36,31,-1,37,32,34,-1,34,38,37,-1,38,34,35,-1,35,39,38,-1,40,29,31,-1,31,36,40,-1,41,44,43,-1,43,42,41,-1,45,41,42,-1,42,46,45,-1,46,50,45,-1,43,47,48,-1,48,42,43,-1,48,49,46,-1,46,42,48,-1,49,51,50,-1,50,46,49,-1,52,47,43,-1,43,44,52,-1]
Coordinate86 = x3d.Coordinate()

IndexedFaceSet85.coord = Coordinate86
TextureCoordinate87 = x3d.TextureCoordinate()

IndexedFaceSet85.texCoord = TextureCoordinate87

Shape81.geometry = IndexedFaceSet85

Transform80.children.append(Shape81)

HAnimSegment79.children.append(Transform80)

HAnimJoint78.children.append(HAnimSegment79)

HAnimJoint68.children.append(HAnimJoint78)

HAnimJoint58.children.append(HAnimJoint68)

HAnimJoint48.children.append(HAnimJoint58)

HAnimJoint38.children.append(HAnimJoint48)
HAnimJoint88 = x3d.HAnimJoint()
HAnimJoint88.name = "r_hip"
HAnimJoint88.DEF = "hanim_r_hip"
HAnimJoint88.center = [-4.207,32.02,-0.8155]
HAnimJoint88.ulimit = [0,0,0]
HAnimJoint88.llimit = [0,0,0]
HAnimSegment89 = x3d.HAnimSegment()
HAnimSegment89.name = "r_thigh"
HAnimSegment89.DEF = "hanim_r_thigh"
Transform90 = x3d.Transform()
Transform90.translation = [-4.207,32.02,-0.8155]
Shape91 = x3d.Shape()
Appearance92 = x3d.Appearance()
Material93 = x3d.Material()
Material93.diffuseColor = [0.588,0.588,0.588]

Appearance92.material = Material93
ImageTexture94 = x3d.ImageTexture()
ImageTexture94.USE = "AnnexC01JinTextureAtlas"

Appearance92.texture = ImageTexture94

Shape91.appearance = Appearance92
IndexedFaceSet95 = x3d.IndexedFaceSet()
IndexedFaceSet95.coordIndex = [43,44,45,-1,42,43,45,-1,45,46,47,-1,42,45,47,-1,48,42,47,-1,0,7,8,-1,8,1,0,-1,1,8,9,-1,9,2,1,-1,2,9,10,-1,10,3,2,-1,3,10,11,-1,11,4,3,-1,4,11,12,-1,12,5,4,-1,5,12,13,-1,13,6,5,-1,6,13,7,-1,7,0,6,-1,7,14,15,-1,15,8,7,-1,8,15,16,-1,16,9,8,-1,9,16,17,-1,17,10,9,-1,10,17,18,-1,18,11,10,-1,11,18,19,-1,19,12,11,-1,12,19,20,-1,20,13,12,-1,13,20,14,-1,14,7,13,-1,14,21,22,-1,22,15,14,-1,15,22,23,-1,23,16,15,-1,16,23,24,-1,24,17,16,-1,17,24,25,-1,25,18,17,-1,18,25,26,-1,26,19,18,-1,19,26,27,-1,27,20,19,-1,20,27,21,-1,21,14,20,-1,60,59,58,-1,61,60,58,-1,58,57,56,-1,61,58,56,-1,62,61,56,-1,29,22,21,-1,21,28,29,-1,30,23,22,-1,22,29,30,-1,31,24,23,-1,23,30,31,-1,32,25,24,-1,24,31,32,-1,33,26,25,-1,25,32,33,-1,34,27,26,-1,26,33,34,-1,28,21,27,-1,27,34,28,-1,36,29,28,-1,28,35,36,-1,37,30,29,-1,29,36,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,35,28,34,-1,34,41,35,-1,42,0,1,-1,1,43,42,-1,43,1,2,-1,2,44,43,-1,44,2,3,-1,3,45,44,-1,45,3,4,-1,4,46,45,-1,46,4,5,-1,5,47,46,-1,47,5,6,-1,6,48,47,-1,48,6,0,-1,0,42,48,-1,50,36,35,-1,35,49,50,-1,51,37,36,-1,36,50,51,-1,52,38,37,-1,37,51,52,-1,53,39,38,-1,38,52,53,-1,54,40,39,-1,39,53,54,-1,55,41,40,-1,40,54,55,-1,49,35,41,-1,41,55,49,-1,57,50,49,-1,49,56,57,-1,58,51,50,-1,50,57,58,-1,59,52,51,-1,51,58,59,-1,60,53,52,-1,52,59,60,-1,61,54,53,-1,53,60,61,-1,62,55,54,-1,54,61,62,-1,56,49,55,-1,55,62,56,-1]
IndexedFaceSet95.creaseAngle = 3.14159
IndexedFaceSet95.texCoordIndex = [0,2,3,-1,1,0,3,-1,3,4,5,-1,1,3,5,-1,6,1,5,-1,7,9,8,-1,8,10,7,-1,10,8,11,-1,11,12,10,-1,12,11,13,-1,13,14,12,-1,14,13,15,-1,15,16,14,-1,16,15,17,-1,17,18,16,-1,18,17,19,-1,19,20,18,-1,20,19,9,-1,9,7,20,-1,9,22,21,-1,21,8,9,-1,8,21,23,-1,23,11,8,-1,11,23,24,-1,24,13,11,-1,13,24,25,-1,25,15,13,-1,15,25,26,-1,26,17,15,-1,17,26,27,-1,27,19,17,-1,19,27,22,-1,22,9,19,-1,22,29,28,-1,28,21,22,-1,21,28,30,-1,30,23,21,-1,23,30,31,-1,31,24,23,-1,24,31,32,-1,32,25,24,-1,25,32,33,-1,33,26,25,-1,26,33,34,-1,34,27,26,-1,27,34,29,-1,29,22,27,-1,46,45,44,-1,47,46,44,-1,44,43,42,-1,47,44,42,-1,48,47,42,-1,35,28,29,-1,29,36,35,-1,37,30,28,-1,28,35,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,36,29,34,-1,34,41,36,-1,51,50,49,-1,49,52,51,-1,54,53,50,-1,50,51,54,-1,56,55,53,-1,53,54,56,-1,58,57,55,-1,55,56,58,-1,60,59,57,-1,57,58,60,-1,62,61,59,-1,59,60,62,-1,52,49,61,-1,61,62,52,-1,1,7,10,-1,10,0,1,-1,0,10,12,-1,12,2,0,-1,2,12,14,-1,14,3,2,-1,3,14,16,-1,16,4,3,-1,4,16,18,-1,18,5,4,-1,5,18,20,-1,20,6,5,-1,6,20,7,-1,7,1,6,-1,63,51,52,-1,52,64,63,-1,65,54,51,-1,51,63,65,-1,66,56,54,-1,54,65,66,-1,67,58,56,-1,56,66,67,-1,68,60,58,-1,58,67,68,-1,69,62,60,-1,60,68,69,-1,64,52,62,-1,62,69,64,-1,43,63,64,-1,64,42,43,-1,44,65,63,-1,63,43,44,-1,45,66,65,-1,65,44,45,-1,46,67,66,-1,66,45,46,-1,47,68,67,-1,67,46,47,-1,48,69,68,-1,68,47,48,-1,42,64,69,-1,69,48,42,-1]
Coordinate96 = x3d.Coordinate()

IndexedFaceSet95.coord = Coordinate96
TextureCoordinate97 = x3d.TextureCoordinate()

IndexedFaceSet95.texCoord = TextureCoordinate97

Shape91.geometry = IndexedFaceSet95

Transform90.children.append(Shape91)

HAnimSegment89.children.append(Transform90)

HAnimJoint88.children.append(HAnimSegment89)
HAnimJoint98 = x3d.HAnimJoint()
HAnimJoint98.name = "r_knee"
HAnimJoint98.DEF = "hanim_r_knee"
HAnimJoint98.center = [-4.116,17.26,-0.8639]
HAnimJoint98.ulimit = [0,0,0]
HAnimJoint98.llimit = [0,0,0]
HAnimSegment99 = x3d.HAnimSegment()
HAnimSegment99.name = "r_calf"
HAnimSegment99.DEF = "hanim_r_calf"
Transform100 = x3d.Transform()
Transform100.translation = [-4.116,17.26,-0.8639]
Shape101 = x3d.Shape()
Appearance102 = x3d.Appearance()
Material103 = x3d.Material()
Material103.diffuseColor = [0.588,0.588,0.588]

Appearance102.material = Material103
ImageTexture104 = x3d.ImageTexture()
ImageTexture104.USE = "AnnexC01JinTextureAtlas"

Appearance102.texture = ImageTexture104

Shape101.appearance = Appearance102
IndexedFaceSet105 = x3d.IndexedFaceSet()
IndexedFaceSet105.coordIndex = [0,1,2,-1,2,3,4,-1,2,4,5,-1,0,2,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1]
IndexedFaceSet105.creaseAngle = 3.14159
IndexedFaceSet105.texCoordIndex = [0,1,2,-1,2,3,4,-1,2,4,5,-1,0,2,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1]
Coordinate106 = x3d.Coordinate()

IndexedFaceSet105.coord = Coordinate106
TextureCoordinate107 = x3d.TextureCoordinate()

IndexedFaceSet105.texCoord = TextureCoordinate107

Shape101.geometry = IndexedFaceSet105

Transform100.children.append(Shape101)

HAnimSegment99.children.append(Transform100)

HAnimJoint98.children.append(HAnimSegment99)
HAnimJoint108 = x3d.HAnimJoint()
HAnimJoint108.name = "r_talocrural"
HAnimJoint108.DEF = "hanim_r_talocrural"
HAnimJoint108.center = [-3.854,3.939,-0.7038]
HAnimJoint108.ulimit = [0,0,0]
HAnimJoint108.llimit = [0,0,0]
HAnimSegment109 = x3d.HAnimSegment()
HAnimSegment109.name = "r_talus"
HAnimSegment109.DEF = "hanim_r_talus"
Transform110 = x3d.Transform()
Transform110.translation = [-3.854,3.939,-0.7038]
Shape111 = x3d.Shape()
Appearance112 = x3d.Appearance()
Material113 = x3d.Material()
Material113.diffuseColor = [0.588,0.588,0.588]

Appearance112.material = Material113
ImageTexture114 = x3d.ImageTexture()
ImageTexture114.USE = "AnnexC01JinTextureAtlas"

Appearance112.texture = ImageTexture114

Shape111.appearance = Appearance112
IndexedFaceSet115 = x3d.IndexedFaceSet()
IndexedFaceSet115.coordIndex = [1,14,11,-1,3,6,5,-1,5,4,3,-1,1,3,4,-1,4,0,1,-1,0,4,5,-1,5,2,0,-1,11,6,3,-1,3,1,11,-1,15,12,0,-1,0,2,15,-1,0,12,13,-1,13,1,0,-1,13,14,1,-1,7,11,18,-1,8,9,5,-1,5,6,8,-1,7,10,9,-1,9,8,7,-1,10,2,5,-1,5,9,10,-1,11,7,8,-1,8,6,11,-1,15,2,10,-1,10,16,15,-1,10,7,17,-1,17,16,10,-1,17,7,18,-1,19,26,25,-1,25,24,23,-1,19,25,23,-1,23,22,21,-1,19,23,21,-1,20,19,21,-1,15,19,20,-1,20,12,15,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,11,14,-1,11,23,24,-1,24,18,11,-1,18,24,25,-1,25,17,18,-1,17,25,26,-1,26,16,17,-1,16,26,19,-1,19,15,16,-1,33,27,30,-1,30,31,33,-1,36,38,30,-1,30,27,36,-1,29,28,27,-1,27,33,29,-1,37,36,27,-1,27,28,37,-1,28,29,42,-1,42,37,28,-1,33,31,34,-1,34,32,33,-1,39,32,34,-1,34,40,39,-1,29,33,32,-1,32,35,29,-1,41,35,32,-1,32,39,41,-1,35,41,42,-1,42,29,35,-1,44,43,47,-1,44,47,46,-1,44,46,45,-1,51,50,49,-1,49,48,54,-1,49,54,53,-1,51,49,53,-1,51,53,52,-1,30,43,44,-1,44,31,30,-1,31,44,45,-1,45,34,31,-1,34,45,46,-1,46,40,34,-1,40,46,47,-1,47,38,40,-1,38,47,43,-1,43,30,38,-1,37,48,49,-1,49,36,37,-1,36,49,50,-1,50,38,36,-1,38,50,51,-1,51,40,38,-1,40,51,52,-1,52,39,40,-1,39,52,53,-1,53,41,39,-1,41,53,54,-1,54,42,41,-1,42,54,48,-1,48,37,42,-1]
IndexedFaceSet115.creaseAngle = 3.14159
IndexedFaceSet115.texCoordIndex = [1,18,14,-1,3,6,5,-1,5,4,3,-1,1,3,4,-1,4,0,1,-1,0,4,5,-1,5,2,0,-1,14,6,3,-1,3,1,14,-1,19,16,0,-1,0,2,19,-1,0,16,17,-1,17,1,0,-1,17,18,1,-1,7,15,23,-1,9,10,11,-1,11,8,9,-1,7,12,10,-1,10,9,7,-1,12,13,11,-1,11,10,12,-1,15,7,9,-1,9,8,15,-1,20,13,12,-1,12,21,20,-1,12,7,22,-1,22,21,12,-1,22,7,23,-1,24,31,30,-1,30,29,28,-1,24,30,28,-1,28,27,26,-1,24,28,26,-1,25,24,26,-1,19,24,25,-1,25,16,19,-1,16,25,26,-1,26,17,16,-1,17,26,27,-1,27,18,17,-1,18,27,28,-1,28,14,18,-1,15,28,29,-1,29,23,15,-1,23,29,30,-1,30,22,23,-1,22,30,31,-1,31,21,22,-1,21,31,24,-1,24,20,21,-1,34,32,37,-1,37,38,34,-1,46,48,37,-1,37,32,46,-1,35,33,32,-1,32,34,35,-1,47,46,32,-1,32,33,47,-1,33,36,53,-1,53,47,33,-1,40,41,42,-1,42,39,40,-1,49,39,42,-1,42,50,49,-1,44,40,39,-1,39,43,44,-1,51,43,39,-1,39,49,51,-1,43,51,52,-1,52,45,43,-1,55,54,58,-1,55,58,57,-1,55,57,56,-1,62,61,60,-1,60,59,65,-1,60,65,64,-1,62,60,64,-1,62,64,63,-1,37,54,55,-1,55,38,37,-1,41,55,56,-1,56,42,41,-1,42,56,57,-1,57,50,42,-1,50,57,58,-1,58,48,50,-1,48,58,54,-1,54,37,48,-1,47,59,60,-1,60,46,47,-1,46,60,61,-1,61,48,46,-1,48,61,62,-1,62,50,48,-1,50,62,63,-1,63,49,50,-1,49,63,64,-1,64,51,49,-1,51,64,65,-1,65,52,51,-1,53,65,59,-1,59,47,53,-1]
Coordinate116 = x3d.Coordinate()

IndexedFaceSet115.coord = Coordinate116
TextureCoordinate117 = x3d.TextureCoordinate()

IndexedFaceSet115.texCoord = TextureCoordinate117

Shape111.geometry = IndexedFaceSet115

Transform110.children.append(Shape111)

HAnimSegment109.children.append(Transform110)

HAnimJoint108.children.append(HAnimSegment109)
HAnimJoint118 = x3d.HAnimJoint()
HAnimJoint118.name = "r_metatarsophalangeal_2"
HAnimJoint118.DEF = "hanim_r_metatarsophalangeal_2"
HAnimJoint118.center = [-3.854,3.64,0.7402]
HAnimJoint118.ulimit = [0,0,0]
HAnimJoint118.llimit = [0,0,0]
HAnimSegment119 = x3d.HAnimSegment()
HAnimSegment119.name = "r_tarsal_proximal_phalanx_2"
HAnimSegment119.DEF = "hanim_r_tarsal_proximal_phalanx_2"
Transform120 = x3d.Transform()
Transform120.translation = [-3.854,3.64,0.7402]
Shape121 = x3d.Shape()
Appearance122 = x3d.Appearance()
Material123 = x3d.Material()
Material123.diffuseColor = [0.588,0.588,0.588]

Appearance122.material = Material123
ImageTexture124 = x3d.ImageTexture()
ImageTexture124.USE = "AnnexC01JinTextureAtlas"

Appearance122.texture = ImageTexture124

Shape121.appearance = Appearance122
IndexedFaceSet125 = x3d.IndexedFaceSet()
IndexedFaceSet125.coordIndex = [10,4,3,-1,11,10,3,-1,0,11,3,-1,1,12,11,-1,11,0,1,-1,1,9,16,-1,16,12,1,-1,2,4,10,-1,10,17,2,-1,6,8,13,-1,6,13,14,-1,5,6,14,-1,7,5,14,-1,14,15,7,-1,7,15,16,-1,16,9,7,-1,2,17,13,-1,13,8,2,-1,19,18,24,-1,22,21,20,-1,23,22,20,-1,24,23,20,-1,19,24,20,-1,0,18,19,-1,19,1,0,-1,1,19,20,-1,20,9,1,-1,9,20,21,-1,21,7,9,-1,7,21,22,-1,22,5,7,-1,5,22,23,-1,23,6,5,-1,6,23,24,-1,24,3,6,-1,3,24,18,-1,18,0,3,-1,2,8,6,-1,2,6,3,-1,4,2,3,-1,28,29,25,-1,25,26,28,-1,35,28,26,-1,26,27,35,-1,27,40,35,-1,25,30,31,-1,31,26,25,-1,31,32,27,-1,27,26,31,-1,32,41,40,-1,40,27,32,-1,42,30,25,-1,25,29,42,-1,28,33,34,-1,34,29,28,-1,35,36,33,-1,33,28,35,-1,36,35,40,-1,34,33,38,-1,38,37,34,-1,38,33,36,-1,36,39,38,-1,39,36,40,-1,40,41,39,-1,42,29,34,-1,34,37,42,-1]
IndexedFaceSet125.creaseAngle = 3.14159
IndexedFaceSet125.texCoordIndex = [12,5,4,-1,13,12,4,-1,0,13,4,-1,1,14,13,-1,13,0,1,-1,1,3,19,-1,19,14,1,-1,2,5,12,-1,12,21,2,-1,7,10,15,-1,7,15,16,-1,6,7,16,-1,8,6,16,-1,16,17,8,-1,8,17,18,-1,18,11,8,-1,9,20,15,-1,15,10,9,-1,23,22,28,-1,26,25,24,-1,27,26,24,-1,28,27,24,-1,23,28,24,-1,0,22,23,-1,23,1,0,-1,1,23,24,-1,24,3,1,-1,11,24,25,-1,25,8,11,-1,8,25,26,-1,26,6,8,-1,6,26,27,-1,27,7,6,-1,7,27,28,-1,28,4,7,-1,4,28,22,-1,22,0,4,-1,9,10,7,-1,9,7,4,-1,5,9,4,-1,30,29,31,-1,31,32,30,-1,33,30,32,-1,32,34,33,-1,34,35,33,-1,31,36,37,-1,37,32,31,-1,37,38,34,-1,34,32,37,-1,38,39,35,-1,35,34,38,-1,40,36,31,-1,31,29,40,-1,41,42,43,-1,43,44,41,-1,45,46,42,-1,42,41,45,-1,46,45,50,-1,43,42,48,-1,48,47,43,-1,48,42,46,-1,46,49,48,-1,49,46,50,-1,50,51,49,-1,52,44,43,-1,43,47,52,-1]
Coordinate126 = x3d.Coordinate()

IndexedFaceSet125.coord = Coordinate126
TextureCoordinate127 = x3d.TextureCoordinate()

IndexedFaceSet125.texCoord = TextureCoordinate127

Shape121.geometry = IndexedFaceSet125

Transform120.children.append(Shape121)

HAnimSegment119.children.append(Transform120)

HAnimJoint118.children.append(HAnimSegment119)

HAnimJoint108.children.append(HAnimJoint118)

HAnimJoint98.children.append(HAnimJoint108)

HAnimJoint88.children.append(HAnimJoint98)

HAnimJoint38.children.append(HAnimJoint88)
HAnimJoint128 = x3d.HAnimJoint()
HAnimJoint128.name = "vl5"
HAnimJoint128.DEF = "hanim_vl5"
HAnimJoint128.center = [0,40.23,-0.8527]
HAnimJoint128.ulimit = [0,0,0]
HAnimJoint128.llimit = [0,0,0]
HAnimSegment129 = x3d.HAnimSegment()
HAnimSegment129.name = "l5"
HAnimSegment129.DEF = "hanim_l5"
Transform130 = x3d.Transform()
Transform130.translation = [0,40.23,-0.8527]
Shape131 = x3d.Shape()
Appearance132 = x3d.Appearance()
Material133 = x3d.Material()
Material133.diffuseColor = [0.588,0.588,0.588]

Appearance132.material = Material133
ImageTexture134 = x3d.ImageTexture()
ImageTexture134.USE = "AnnexC01JinTextureAtlas"

Appearance132.texture = ImageTexture134

Shape131.appearance = Appearance132
IndexedFaceSet135 = x3d.IndexedFaceSet()
IndexedFaceSet135.coordIndex = [3,4,7,-1,7,5,3,-1,4,66,68,-1,68,8,4,-1,4,8,7,-1,1,0,9,-1,9,10,1,-1,0,2,11,-1,11,9,0,-1,15,71,73,-1,73,16,15,-1,14,15,16,-1,16,17,14,-1,71,15,8,-1,8,68,71,-1,15,14,7,-1,7,8,15,-1,73,72,69,-1,69,70,73,-1,16,73,70,-1,70,12,16,-1,16,12,13,-1,13,17,16,-1,21,20,22,-1,22,23,21,-1,20,14,17,-1,17,22,20,-1,20,21,6,-1,6,5,20,-1,14,20,5,-1,5,7,14,-1,23,22,18,-1,18,19,23,-1,22,17,13,-1,13,18,22,-1,2,6,11,-1,28,27,30,-1,30,31,28,-1,27,29,32,-1,32,30,27,-1,29,21,23,-1,23,32,29,-1,27,28,10,-1,10,9,27,-1,29,27,9,-1,9,11,29,-1,21,29,11,-1,11,6,21,-1,31,30,24,-1,24,25,31,-1,30,32,26,-1,26,24,30,-1,32,23,19,-1,19,26,32,-1,12,70,74,-1,74,33,12,-1,24,26,36,-1,36,35,24,-1,33,74,75,-1,75,37,33,-1,34,33,37,-1,37,38,34,-1,39,12,33,-1,33,34,39,-1,19,40,26,-1,26,40,41,-1,41,36,26,-1,39,34,41,-1,41,40,39,-1,35,36,43,-1,43,42,35,-1,36,41,44,-1,44,43,36,-1,41,34,38,-1,38,44,41,-1,37,75,76,-1,76,45,37,-1,38,37,45,-1,45,46,38,-1,42,43,48,-1,48,47,42,-1,44,38,46,-1,46,49,44,-1,45,76,77,-1,77,50,45,-1,46,45,50,-1,50,51,46,-1,47,48,53,-1,53,52,47,-1,48,49,54,-1,54,53,48,-1,49,46,51,-1,51,54,49,-1,50,77,78,-1,78,55,50,-1,51,50,55,-1,55,56,51,-1,52,53,58,-1,58,57,52,-1,53,54,59,-1,59,58,53,-1,54,51,56,-1,56,59,54,-1,19,18,60,-1,60,61,19,-1,18,13,62,-1,62,60,18,-1,13,39,63,-1,63,62,13,-1,40,19,61,-1,61,64,40,-1,39,40,64,-1,64,63,39,-1,2,3,5,-1,2,5,6,-1,13,12,39,-1,25,24,35,-1,70,69,74,-1,67,68,66,-1,66,65,67,-1,79,71,68,-1,68,67,79,-1,72,73,71,-1,71,79,72,-1,49,48,43,-1,43,44,49,-1,63,64,60,-1,60,62,63,-1,60,64,61,-1,86,83,82,-1,82,84,86,-1,141,140,83,-1,83,87,141,-1,83,86,87,-1,88,80,1,-1,1,10,88,-1,89,81,80,-1,80,88,89,-1,144,143,93,-1,93,94,144,-1,94,93,92,-1,92,95,94,-1,87,93,143,-1,143,141,87,-1,86,92,93,-1,93,87,86,-1,69,72,144,-1,144,142,69,-1,142,144,94,-1,94,90,142,-1,91,90,94,-1,94,95,91,-1,100,98,99,-1,99,101,100,-1,95,92,98,-1,98,100,95,-1,85,99,98,-1,98,84,85,-1,84,98,92,-1,92,86,84,-1,96,100,101,-1,101,97,96,-1,91,95,100,-1,100,96,91,-1,81,89,85,-1,106,104,28,-1,28,31,106,-1,107,105,104,-1,104,106,107,-1,101,99,105,-1,105,107,101,-1,10,28,104,-1,104,88,10,-1,88,104,105,-1,105,89,88,-1,89,105,99,-1,99,85,89,-1,102,106,31,-1,31,25,102,-1,103,107,106,-1,106,102,103,-1,97,101,107,-1,107,103,97,-1,145,142,90,-1,90,108,145,-1,111,103,102,-1,102,110,111,-1,146,145,108,-1,108,112,146,-1,112,108,109,-1,109,113,112,-1,108,90,114,-1,114,109,108,-1,97,103,115,-1,116,115,103,-1,103,111,116,-1,116,109,114,-1,114,115,116,-1,118,111,110,-1,110,117,118,-1,119,116,111,-1,111,118,119,-1,113,109,116,-1,116,119,113,-1,147,146,112,-1,112,120,147,-1,120,112,113,-1,113,121,120,-1,123,118,117,-1,117,122,123,-1,121,113,119,-1,119,124,121,-1,148,147,120,-1,120,125,148,-1,125,120,121,-1,121,126,125,-1,128,123,122,-1,122,127,128,-1,129,124,123,-1,123,128,129,-1,126,121,124,-1,124,129,126,-1,149,148,125,-1,125,130,149,-1,130,125,126,-1,126,131,130,-1,133,128,127,-1,127,132,133,-1,134,129,128,-1,128,133,134,-1,131,126,129,-1,129,134,131,-1,135,96,97,-1,97,136,135,-1,137,91,96,-1,96,135,137,-1,138,114,91,-1,91,137,138,-1,136,97,115,-1,115,139,136,-1,139,115,114,-1,114,138,139,-1,81,84,82,-1,81,85,84,-1,91,114,90,-1,25,110,102,-1,142,145,69,-1,140,141,67,-1,67,65,140,-1,141,143,79,-1,79,67,141,-1,143,144,72,-1,72,79,143,-1,118,123,124,-1,124,119,118,-1,135,139,138,-1,138,137,135,-1,135,136,139,-1,25,35,110,-1,117,110,35,-1,35,42,117,-1,47,122,117,-1,117,42,47,-1,127,122,47,-1,47,52,127,-1,132,127,52,-1,52,57,132,-1,69,145,74,-1,75,74,145,-1,145,146,75,-1,76,75,146,-1,146,147,76,-1,77,76,147,-1,147,148,77,-1,78,77,148,-1,148,149,78,-1,57,78,149,-1,149,132,57,-1,58,55,78,-1,78,57,58,-1,59,56,55,-1,55,58,59,-1,132,149,130,-1,130,133,132,-1,133,130,131,-1,131,134,133,-1,151,150,155,-1,155,156,151,-1,150,152,157,-1,157,155,150,-1,152,153,158,-1,158,157,152,-1,153,154,159,-1,159,158,153,-1,160,161,162,-1,162,163,160,-1,154,160,163,-1,163,159,154,-1,168,164,151,-1,151,156,168,-1,169,165,164,-1,164,168,169,-1,170,166,165,-1,165,169,170,-1,171,167,166,-1,166,170,171,-1,162,161,172,-1,172,173,162,-1,173,172,167,-1,167,171,173,-1,4,3,158,-1,158,159,4,-1,66,4,159,-1,159,163,66,-1,0,1,156,-1,156,155,0,-1,2,0,155,-1,155,157,2,-1,3,2,157,-1,157,158,3,-1,65,66,163,-1,163,162,65,-1,82,83,171,-1,171,170,82,-1,83,140,173,-1,173,171,83,-1,1,80,168,-1,168,156,1,-1,80,81,169,-1,169,168,80,-1,81,82,170,-1,170,169,81,-1,140,65,162,-1,162,173,140,-1]
IndexedFaceSet135.creaseAngle = 3.14159
IndexedFaceSet135.texCoordIndex = [2,3,0,-1,0,1,2,-1,3,6,4,-1,4,5,3,-1,3,5,0,-1,20,21,18,-1,18,19,20,-1,21,23,22,-1,22,18,21,-1,26,27,24,-1,24,25,26,-1,29,26,25,-1,25,28,29,-1,27,26,30,-1,30,31,27,-1,26,29,32,-1,32,30,26,-1,24,35,33,-1,33,34,24,-1,25,24,34,-1,34,36,25,-1,25,36,37,-1,37,28,25,-1,40,41,38,-1,38,39,40,-1,41,29,28,-1,28,38,41,-1,41,40,42,-1,42,43,41,-1,29,41,43,-1,43,32,29,-1,39,38,44,-1,44,45,39,-1,38,28,37,-1,37,44,38,-1,23,42,22,-1,48,162,161,-1,161,47,48,-1,49,51,50,-1,50,46,49,-1,51,40,39,-1,39,50,51,-1,163,48,164,-1,164,181,163,-1,51,49,18,-1,18,22,51,-1,40,51,22,-1,22,42,40,-1,47,166,165,-1,165,53,47,-1,46,50,54,-1,54,52,46,-1,50,39,45,-1,45,54,50,-1,36,34,55,-1,55,56,36,-1,52,54,57,-1,57,58,52,-1,56,55,59,-1,59,60,56,-1,62,56,60,-1,60,61,62,-1,63,36,56,-1,56,62,63,-1,45,64,54,-1,54,64,65,-1,65,57,54,-1,63,62,65,-1,65,64,63,-1,58,57,66,-1,66,67,58,-1,57,65,68,-1,68,66,57,-1,65,62,61,-1,61,68,65,-1,60,59,69,-1,69,70,60,-1,61,60,70,-1,70,71,61,-1,67,66,72,-1,72,73,67,-1,68,61,71,-1,71,74,68,-1,70,69,75,-1,75,76,70,-1,71,70,76,-1,76,77,71,-1,73,72,78,-1,78,79,73,-1,72,74,80,-1,80,78,72,-1,74,71,77,-1,77,80,74,-1,76,75,81,-1,81,82,76,-1,77,76,82,-1,82,83,77,-1,79,78,84,-1,84,85,79,-1,78,80,86,-1,86,84,78,-1,80,77,83,-1,83,86,80,-1,45,44,87,-1,87,88,45,-1,44,37,89,-1,89,87,44,-1,37,63,90,-1,90,89,37,-1,64,45,88,-1,88,91,64,-1,63,64,91,-1,91,90,63,-1,7,2,1,-1,23,43,42,-1,37,36,63,-1,53,167,168,-1,34,33,55,-1,9,4,6,-1,6,8,9,-1,93,27,31,-1,31,92,93,-1,35,24,27,-1,27,93,35,-1,74,72,66,-1,66,68,74,-1,90,91,87,-1,87,89,90,-1,87,91,88,-1,10,11,12,-1,12,13,10,-1,14,15,11,-1,11,16,14,-1,11,10,16,-1,94,95,169,-1,169,170,94,-1,96,97,95,-1,95,94,96,-1,98,101,99,-1,99,100,98,-1,100,99,102,-1,102,103,100,-1,104,99,101,-1,101,105,104,-1,106,102,99,-1,99,104,106,-1,33,35,98,-1,98,107,33,-1,107,98,100,-1,100,108,107,-1,109,108,100,-1,100,103,109,-1,110,113,111,-1,111,112,110,-1,103,102,113,-1,113,110,103,-1,114,111,113,-1,113,115,114,-1,115,113,102,-1,102,106,115,-1,116,110,112,-1,112,117,116,-1,109,103,110,-1,110,116,109,-1,97,96,114,-1,118,119,48,-1,48,47,118,-1,120,121,119,-1,119,118,120,-1,112,111,121,-1,121,120,112,-1,171,48,119,-1,119,94,171,-1,94,119,121,-1,121,96,94,-1,96,121,111,-1,111,114,96,-1,122,118,47,-1,47,53,122,-1,123,120,118,-1,118,122,123,-1,117,112,120,-1,120,123,117,-1,124,107,108,-1,108,125,124,-1,126,123,122,-1,122,127,126,-1,128,124,125,-1,125,129,128,-1,129,125,130,-1,130,131,129,-1,125,108,132,-1,132,130,125,-1,117,123,133,-1,134,133,123,-1,123,126,134,-1,134,130,132,-1,132,133,134,-1,135,126,127,-1,127,136,135,-1,137,134,126,-1,126,135,137,-1,131,130,134,-1,134,137,131,-1,138,128,129,-1,129,139,138,-1,139,129,131,-1,131,140,139,-1,141,135,136,-1,136,142,141,-1,140,131,137,-1,137,143,140,-1,144,138,139,-1,139,145,144,-1,145,139,140,-1,140,146,145,-1,147,141,142,-1,142,148,147,-1,149,143,141,-1,141,147,149,-1,146,140,143,-1,143,149,146,-1,150,144,145,-1,145,151,150,-1,151,145,146,-1,146,152,151,-1,153,147,148,-1,148,154,153,-1,155,149,147,-1,147,153,155,-1,152,146,149,-1,149,155,152,-1,156,116,117,-1,117,157,156,-1,158,109,116,-1,116,156,158,-1,159,132,109,-1,109,158,159,-1,157,117,133,-1,133,160,157,-1,160,133,132,-1,132,159,160,-1,17,13,12,-1,97,114,115,-1,109,132,108,-1,53,127,122,-1,107,124,33,-1,15,14,9,-1,9,8,15,-1,105,101,93,-1,93,92,105,-1,101,98,35,-1,35,93,101,-1,135,141,143,-1,143,137,135,-1,156,160,159,-1,159,158,156,-1,156,157,160,-1,53,172,127,-1,136,127,173,-1,173,174,136,-1,176,142,136,-1,136,175,176,-1,148,142,177,-1,177,178,148,-1,154,148,179,-1,179,180,154,-1,33,124,55,-1,59,55,124,-1,124,128,59,-1,69,59,128,-1,128,138,69,-1,75,69,138,-1,138,144,75,-1,81,75,144,-1,144,150,81,-1,85,81,150,-1,150,182,85,-1,84,82,81,-1,81,85,84,-1,86,83,82,-1,82,84,86,-1,154,150,151,-1,151,153,154,-1,153,151,152,-1,152,155,153,-1,185,186,183,-1,183,184,185,-1,186,188,187,-1,187,183,186,-1,188,190,189,-1,189,187,188,-1,190,192,191,-1,191,189,190,-1,195,196,193,-1,193,194,195,-1,192,195,194,-1,194,191,192,-1,197,198,185,-1,185,184,197,-1,199,200,198,-1,198,197,199,-1,201,202,200,-1,200,199,201,-1,203,204,202,-1,202,201,203,-1,193,196,205,-1,205,206,193,-1,206,205,204,-1,204,203,206,-1,3,2,189,-1,189,191,3,-1,6,3,191,-1,191,194,6,-1,207,208,184,-1,184,183,207,-1,7,207,183,-1,183,187,7,-1,2,7,187,-1,187,189,2,-1,8,6,194,-1,194,193,8,-1,12,11,203,-1,203,201,12,-1,11,15,206,-1,206,203,11,-1,208,209,197,-1,197,184,208,-1,209,17,199,-1,199,197,209,-1,17,12,201,-1,201,199,17,-1,15,8,193,-1,193,206,15,-1]
Coordinate136 = x3d.Coordinate()

IndexedFaceSet135.coord = Coordinate136
TextureCoordinate137 = x3d.TextureCoordinate()

IndexedFaceSet135.texCoord = TextureCoordinate137

Shape131.geometry = IndexedFaceSet135

Transform130.children.append(Shape131)

HAnimSegment129.children.append(Transform130)

HAnimJoint128.children.append(HAnimSegment129)
HAnimJoint138 = x3d.HAnimJoint()
HAnimJoint138.name = "skullbase"
HAnimJoint138.DEF = "hanim_skullbase"
HAnimJoint138.center = [0,57.43,-0.6863]
HAnimJoint138.ulimit = [0,0,0]
HAnimJoint138.llimit = [0,0,0]
HAnimSegment139 = x3d.HAnimSegment()
HAnimSegment139.name = "skull"
HAnimSegment139.DEF = "hanim_skull"
Transform140 = x3d.Transform()
Transform140.translation = [0,57.43,-0.6863]
Shape141 = x3d.Shape()
Appearance142 = x3d.Appearance()
Material143 = x3d.Material()
Material143.diffuseColor = [0.588,0.588,0.588]

Appearance142.material = Material143
ImageTexture144 = x3d.ImageTexture()
ImageTexture144.USE = "AnnexC01JinTextureAtlas"

Appearance142.texture = ImageTexture144

Shape141.appearance = Appearance142
IndexedFaceSet145 = x3d.IndexedFaceSet()
IndexedFaceSet145.coordIndex = [58,44,47,-1,47,49,58,-1,49,60,59,-1,59,1,49,-1,56,48,47,-1,47,44,56,-1,50,51,59,-1,59,60,50,-1,173,168,58,-1,58,49,173,-1,171,173,49,-1,49,1,171,-1,14,12,18,-1,18,15,14,-1,162,160,14,-1,14,15,162,-1,16,57,33,-1,21,18,12,-1,18,79,19,-1,80,20,19,-1,11,10,79,-1,18,21,79,-1,11,79,21,-1,21,12,78,-1,11,21,22,-1,321,345,320,-1,322,323,346,-1,80,25,24,-1,24,20,80,-1,26,38,24,-1,23,13,38,-1,20,77,18,-1,18,19,20,-1,38,29,30,-1,30,23,38,-1,27,30,29,-1,27,28,30,-1,30,28,23,-1,33,31,16,-1,31,37,16,-1,28,34,23,-1,17,35,36,-1,36,28,17,-1,33,36,35,-1,17,32,35,-1,32,33,35,-1,33,34,36,-1,36,34,28,-1,10,19,79,-1,4,40,37,-1,40,42,41,-1,40,41,37,-1,40,4,42,-1,56,43,4,-1,4,46,56,-1,45,43,56,-1,56,44,45,-1,43,45,4,-1,48,56,46,-1,46,3,48,-1,50,60,3,-1,51,50,3,-1,3,2,51,-1,58,168,52,-1,52,168,170,-1,61,52,170,-1,4,45,52,-1,52,61,4,-1,52,45,44,-1,44,58,52,-1,61,170,53,-1,170,165,39,-1,39,53,170,-1,4,61,53,-1,53,42,4,-1,53,39,41,-1,41,42,53,-1,165,57,39,-1,13,23,54,-1,16,37,57,-1,41,39,57,-1,37,41,57,-1,57,165,166,-1,54,166,13,-1,33,57,34,-1,34,57,54,-1,34,54,23,-1,166,162,55,-1,55,162,15,-1,77,55,15,-1,15,18,77,-1,166,77,13,-1,77,166,55,-1,13,77,24,-1,24,38,13,-1,20,24,77,-1,54,57,166,-1,47,60,49,-1,48,3,47,-1,3,60,47,-1,3,63,2,-1,72,62,63,-1,3,65,63,-1,3,46,64,-1,64,66,3,-1,6,66,64,-1,3,66,65,-1,6,73,8,-1,8,73,67,-1,6,75,73,-1,5,71,73,-1,73,75,5,-1,6,70,75,-1,64,46,69,-1,75,70,69,-1,75,69,344,-1,2,63,62,-1,8,66,6,-1,63,8,72,-1,9,74,71,-1,68,74,9,-1,74,8,67,-1,68,72,74,-1,72,8,74,-1,67,71,74,-1,67,73,71,-1,65,8,63,-1,65,66,8,-1,70,6,64,-1,70,64,69,-1,4,0,344,-1,69,46,4,-1,69,4,344,-1,76,344,0,-1,5,76,0,-1,5,75,76,-1,75,344,76,-1,133,125,123,-1,123,120,133,-1,125,1,59,-1,59,134,125,-1,131,120,123,-1,123,124,131,-1,126,134,59,-1,59,51,126,-1,172,125,133,-1,133,167,172,-1,171,1,125,-1,125,172,171,-1,14,91,94,-1,94,12,14,-1,161,91,14,-1,14,160,161,-1,109,132,92,-1,12,94,97,-1,95,149,94,-1,95,96,150,-1,149,88,89,-1,149,97,94,-1,97,149,89,-1,78,12,97,-1,98,97,89,-1,325,348,324,-1,354,326,327,-1,150,96,100,-1,100,101,150,-1,100,114,102,-1,114,90,99,-1,96,95,94,-1,94,148,96,-1,114,99,106,-1,106,105,114,-1,105,106,103,-1,106,104,103,-1,99,104,106,-1,92,107,109,-1,92,113,107,-1,99,110,104,-1,93,104,112,-1,112,111,93,-1,111,112,109,-1,111,108,93,-1,111,109,108,-1,112,110,109,-1,104,110,112,-1,149,95,88,-1,113,116,83,-1,117,118,116,-1,113,117,116,-1,118,83,116,-1,131,122,83,-1,83,119,131,-1,121,120,131,-1,131,119,121,-1,83,121,119,-1,124,82,122,-1,122,131,124,-1,82,134,126,-1,51,2,82,-1,82,126,51,-1,127,167,133,-1,169,167,127,-1,169,127,135,-1,83,135,127,-1,127,121,83,-1,127,133,120,-1,120,121,127,-1,128,169,135,-1,169,128,115,-1,115,163,169,-1,83,118,128,-1,128,135,83,-1,128,118,117,-1,117,115,128,-1,115,132,163,-1,129,99,90,-1,132,113,92,-1,132,115,117,-1,132,117,113,-1,164,163,132,-1,90,164,129,-1,110,132,109,-1,129,132,110,-1,99,129,110,-1,130,161,164,-1,91,161,130,-1,148,94,91,-1,91,130,148,-1,90,148,164,-1,130,164,148,-1,90,114,100,-1,100,148,90,-1,148,100,96,-1,164,132,129,-1,125,134,123,-1,123,82,124,-1,123,134,82,-1,2,136,82,-1,136,62,72,-1,136,138,82,-1,82,139,137,-1,137,122,82,-1,137,139,85,-1,138,139,82,-1,87,144,85,-1,140,144,87,-1,144,146,85,-1,84,146,144,-1,144,143,84,-1,146,142,85,-1,141,122,137,-1,141,142,146,-1,347,141,146,-1,62,136,2,-1,85,139,87,-1,72,87,136,-1,143,145,9,-1,9,145,68,-1,145,140,87,-1,68,145,72,-1,72,145,87,-1,145,143,140,-1,143,144,140,-1,136,87,138,-1,87,139,138,-1,137,85,142,-1,141,137,142,-1,347,81,83,-1,83,122,141,-1,347,83,141,-1,81,347,147,-1,81,147,84,-1,147,146,84,-1,147,347,146,-1,162,166,152,-1,151,160,162,-1,162,152,151,-1,152,166,165,-1,165,154,152,-1,154,165,170,-1,170,156,154,-1,152,154,155,-1,155,151,152,-1,156,153,155,-1,155,154,156,-1,173,156,170,-1,170,168,173,-1,171,153,156,-1,156,173,171,-1,157,164,161,-1,151,157,161,-1,161,160,151,-1,157,158,163,-1,163,164,157,-1,158,159,169,-1,169,163,158,-1,157,151,155,-1,155,158,157,-1,159,158,155,-1,155,153,159,-1,172,167,169,-1,169,159,172,-1,171,172,159,-1,159,153,171,-1,355,237,223,-1,174,236,237,-1,236,174,175,-1,179,238,176,-1,179,176,177,-1,179,177,178,-1,178,174,179,-1,174,178,175,-1,180,226,236,-1,238,180,236,-1,180,230,226,-1,237,236,223,-1,223,236,218,-1,225,355,223,-1,223,224,225,-1,328,329,239,-1,330,331,350,-1,228,227,219,-1,219,222,228,-1,236,226,218,-1,174,237,0,-1,0,237,355,-1,0,179,174,-1,318,355,225,-1,220,228,222,-1,221,228,220,-1,5,0,355,-1,218,182,223,-1,183,223,182,-1,181,183,185,-1,181,185,242,-1,213,212,244,-1,244,246,213,-1,213,246,245,-1,245,214,213,-1,245,247,184,-1,184,214,245,-1,214,184,206,-1,206,207,214,-1,217,319,225,-1,225,224,217,-1,183,181,217,-1,217,224,183,-1,224,223,183,-1,226,209,218,-1,218,209,184,-1,182,185,183,-1,218,184,182,-1,207,208,232,-1,232,214,207,-1,232,215,214,-1,209,206,184,-1,186,192,190,-1,190,188,186,-1,197,192,208,-1,208,207,197,-1,190,222,219,-1,219,188,190,-1,194,195,190,-1,226,189,209,-1,187,189,226,-1,192,186,208,-1,191,216,205,-1,196,205,216,-1,195,196,216,-1,196,195,194,-1,209,189,198,-1,199,197,207,-1,207,206,199,-1,233,234,197,-1,197,199,233,-1,209,198,199,-1,199,206,209,-1,233,199,198,-1,198,200,233,-1,248,194,202,-1,201,205,250,-1,248,249,196,-1,196,194,248,-1,196,249,250,-1,250,205,196,-1,234,203,197,-1,203,192,197,-1,194,190,202,-1,200,198,189,-1,189,204,200,-1,202,190,192,-1,202,192,203,-1,205,210,191,-1,210,205,201,-1,220,222,193,-1,204,189,187,-1,187,210,204,-1,210,201,204,-1,210,187,191,-1,195,211,190,-1,195,193,211,-1,193,222,211,-1,211,222,190,-1,215,212,213,-1,213,214,215,-1,230,187,226,-1,230,191,187,-1,229,221,230,-1,229,228,221,-1,9,355,318,-1,5,355,71,-1,71,355,9,-1,231,247,185,-1,182,231,185,-1,184,231,182,-1,184,247,231,-1,238,230,180,-1,230,221,191,-1,221,235,191,-1,191,235,216,-1,221,220,235,-1,193,235,220,-1,216,235,193,-1,193,195,216,-1,250,249,233,-1,203,234,248,-1,234,233,249,-1,250,233,200,-1,249,248,234,-1,243,241,240,-1,241,243,247,-1,204,201,250,-1,200,204,250,-1,203,248,202,-1,247,243,242,-1,247,242,185,-1,332,333,349,-1,334,335,7,-1,292,304,353,-1,304,303,251,-1,252,251,303,-1,253,305,256,-1,254,253,256,-1,256,251,255,-1,255,254,256,-1,252,255,251,-1,303,295,257,-1,303,257,305,-1,295,298,257,-1,292,303,304,-1,288,303,292,-1,294,352,292,-1,292,353,294,-1,336,337,293,-1,306,338,339,-1,296,291,219,-1,219,227,296,-1,288,295,303,-1,81,304,251,-1,353,304,81,-1,251,256,81,-1,294,353,317,-1,291,296,289,-1,289,296,290,-1,353,81,84,-1,292,258,288,-1,258,292,259,-1,261,259,181,-1,242,261,181,-1,285,309,244,-1,244,212,285,-1,285,286,308,-1,308,309,285,-1,308,286,260,-1,260,310,308,-1,286,281,280,-1,280,260,286,-1,217,352,294,-1,294,319,217,-1,259,352,217,-1,217,181,259,-1,259,292,352,-1,288,282,295,-1,260,282,288,-1,259,261,258,-1,258,260,288,-1,281,286,232,-1,232,208,281,-1,286,215,232,-1,260,280,282,-1,186,188,264,-1,264,266,186,-1,271,281,208,-1,208,266,271,-1,264,188,219,-1,219,291,264,-1,264,269,268,-1,282,263,295,-1,295,263,262,-1,208,186,266,-1,279,287,265,-1,287,279,270,-1,287,270,269,-1,268,269,270,-1,272,263,282,-1,273,280,281,-1,281,271,273,-1,300,273,271,-1,271,301,300,-1,282,280,273,-1,273,272,282,-1,300,274,272,-1,272,273,300,-1,276,268,311,-1,313,279,275,-1,311,268,270,-1,270,312,311,-1,270,279,313,-1,313,312,270,-1,271,277,301,-1,271,266,277,-1,276,264,268,-1,274,278,263,-1,263,272,274,-1,266,264,276,-1,277,266,276,-1,265,283,279,-1,275,279,283,-1,267,291,289,-1,278,283,262,-1,262,263,278,-1,278,275,283,-1,265,262,283,-1,264,284,269,-1,284,267,269,-1,284,291,267,-1,264,291,284,-1,285,212,215,-1,215,286,285,-1,295,262,298,-1,262,265,298,-1,298,290,297,-1,290,296,297,-1,317,353,9,-1,143,353,84,-1,9,353,143,-1,261,310,299,-1,261,299,258,-1,258,299,260,-1,299,310,260,-1,257,298,305,-1,265,290,298,-1,265,302,290,-1,287,302,265,-1,302,289,290,-1,289,302,267,-1,287,269,267,-1,267,302,287,-1,300,312,313,-1,311,301,277,-1,312,300,301,-1,274,300,313,-1,301,311,312,-1,240,307,243,-1,310,243,307,-1,313,275,278,-1,313,278,274,-1,276,311,277,-1,242,243,310,-1,261,242,310,-1,351,340,341,-1,86,342,343,-1,244,314,315,-1,315,246,244,-1,246,315,247,-1,247,245,246,-1,244,309,316,-1,316,314,244,-1,309,308,310,-1,310,316,309,-1,175,176,238,-1,238,236,175,-1,177,176,175,-1,175,178,177,-1,252,303,305,-1,305,253,252,-1,254,255,252,-1,252,253,254,-1,318,225,319,-1,319,9,318,-1,317,9,319,-1,319,294,317,-1]
IndexedFaceSet145.creaseAngle = 3.14159
IndexedFaceSet145.texCoordIndex = [0,3,2,-1,2,1,0,-1,1,6,5,-1,5,4,1,-1,7,8,2,-1,2,3,7,-1,9,10,5,-1,5,6,9,-1,11,12,0,-1,0,1,11,-1,13,11,1,-1,1,4,13,-1,14,17,16,-1,16,15,14,-1,18,19,14,-1,14,15,18,-1,22,21,20,-1,23,16,17,-1,16,25,24,-1,27,26,24,-1,29,28,25,-1,16,23,25,-1,29,25,23,-1,31,17,30,-1,29,23,32,-1,33,32,31,-1,33,31,30,-1,27,35,34,-1,34,26,27,-1,37,36,34,-1,39,38,36,-1,26,40,16,-1,16,24,26,-1,36,42,41,-1,41,39,36,-1,43,41,42,-1,43,44,41,-1,41,44,39,-1,20,45,22,-1,45,46,22,-1,44,47,39,-1,48,50,49,-1,49,44,48,-1,20,49,50,-1,48,51,50,-1,51,20,50,-1,20,47,49,-1,49,47,44,-1,28,24,25,-1,53,52,46,-1,52,55,54,-1,52,54,46,-1,52,53,55,-1,7,57,53,-1,53,56,7,-1,58,57,7,-1,7,59,58,-1,57,58,53,-1,8,7,56,-1,56,60,8,-1,9,6,60,-1,10,9,60,-1,60,61,10,-1,0,12,62,-1,62,12,63,-1,64,62,63,-1,53,58,62,-1,62,64,53,-1,62,58,59,-1,59,0,62,-1,64,63,65,-1,63,67,66,-1,66,65,63,-1,53,64,65,-1,65,55,53,-1,65,66,54,-1,54,55,65,-1,67,21,66,-1,38,39,68,-1,22,46,21,-1,54,66,21,-1,46,54,21,-1,21,67,69,-1,68,69,38,-1,20,21,47,-1,47,21,68,-1,47,68,39,-1,69,18,70,-1,70,18,15,-1,40,70,15,-1,15,16,40,-1,69,71,38,-1,71,69,70,-1,38,71,34,-1,34,36,38,-1,26,34,71,-1,68,21,69,-1,2,6,1,-1,8,60,2,-1,60,6,2,-1,74,73,72,-1,77,76,75,-1,74,78,73,-1,74,81,80,-1,80,79,74,-1,82,79,80,-1,74,79,78,-1,82,84,83,-1,83,84,85,-1,82,86,84,-1,87,90,89,-1,89,88,87,-1,92,91,88,-1,80,81,93,-1,88,91,94,-1,86,93,95,-1,72,73,96,-1,83,79,82,-1,73,83,97,-1,100,99,98,-1,103,102,101,-1,99,83,85,-1,104,97,99,-1,97,83,99,-1,105,90,102,-1,105,89,90,-1,107,106,75,-1,107,108,106,-1,109,82,80,-1,109,80,93,-1,112,111,110,-1,93,81,113,-1,93,113,95,-1,114,110,111,-1,115,114,111,-1,87,86,116,-1,86,95,116,-1,117,120,119,-1,119,118,117,-1,120,123,122,-1,122,121,120,-1,124,118,119,-1,119,125,124,-1,126,121,122,-1,122,127,126,-1,128,120,117,-1,117,129,128,-1,130,123,120,-1,120,128,130,-1,14,132,131,-1,131,17,14,-1,133,132,14,-1,14,19,133,-1,136,135,134,-1,17,131,137,-1,139,138,131,-1,139,141,140,-1,138,143,142,-1,138,137,131,-1,137,138,142,-1,30,17,144,-1,145,137,142,-1,144,145,146,-1,30,144,146,-1,140,141,148,-1,148,147,140,-1,148,150,149,-1,150,152,151,-1,141,139,131,-1,131,153,141,-1,150,151,155,-1,155,154,150,-1,154,155,156,-1,155,157,156,-1,151,157,155,-1,134,158,136,-1,134,159,158,-1,151,160,157,-1,161,157,163,-1,163,162,161,-1,162,163,136,-1,162,164,161,-1,162,136,164,-1,163,160,136,-1,157,160,163,-1,138,139,143,-1,159,166,165,-1,168,167,166,-1,159,168,166,-1,167,165,166,-1,124,170,165,-1,165,169,124,-1,171,172,124,-1,124,169,171,-1,165,171,169,-1,125,173,170,-1,170,124,125,-1,173,121,126,-1,127,174,173,-1,173,126,127,-1,175,129,117,-1,176,129,175,-1,176,175,177,-1,165,177,175,-1,175,171,165,-1,175,117,172,-1,172,171,175,-1,178,176,177,-1,176,178,180,-1,180,179,176,-1,165,167,178,-1,178,177,165,-1,178,167,168,-1,168,180,178,-1,180,135,179,-1,181,151,152,-1,135,159,134,-1,135,180,168,-1,135,168,159,-1,182,179,135,-1,152,182,181,-1,160,135,136,-1,181,135,160,-1,151,181,160,-1,183,133,182,-1,132,133,183,-1,153,131,132,-1,132,183,153,-1,152,184,182,-1,183,182,184,-1,152,150,148,-1,148,184,152,-1,184,148,141,-1,182,135,181,-1,120,121,119,-1,119,173,125,-1,119,121,173,-1,72,186,185,-1,187,76,77,-1,186,188,185,-1,185,191,190,-1,190,189,185,-1,190,191,192,-1,188,191,185,-1,194,193,192,-1,195,193,194,-1,193,196,192,-1,197,200,199,-1,199,198,197,-1,200,202,201,-1,203,189,190,-1,204,202,200,-1,205,203,196,-1,96,186,72,-1,192,191,194,-1,97,194,186,-1,207,206,100,-1,101,208,103,-1,206,195,194,-1,104,206,97,-1,97,206,194,-1,208,198,209,-1,198,199,209,-1,187,211,210,-1,211,212,210,-1,190,192,213,-1,203,190,213,-1,216,215,214,-1,217,189,203,-1,205,217,203,-1,215,216,218,-1,215,218,219,-1,220,196,197,-1,220,205,196,-1,18,69,221,-1,222,19,18,-1,18,221,222,-1,221,69,67,-1,67,223,221,-1,223,67,63,-1,63,224,223,-1,221,223,225,-1,225,222,221,-1,224,226,225,-1,225,223,224,-1,11,224,63,-1,63,12,11,-1,13,226,224,-1,224,11,13,-1,227,182,133,-1,222,227,133,-1,133,19,222,-1,227,228,179,-1,179,182,227,-1,228,229,176,-1,176,179,228,-1,227,222,225,-1,225,228,227,-1,229,228,225,-1,225,230,229,-1,128,129,176,-1,176,229,128,-1,130,128,229,-1,229,230,130,-1,233,232,231,-1,235,234,232,-1,234,235,236,-1,239,238,237,-1,239,237,240,-1,239,240,241,-1,241,235,239,-1,235,241,236,-1,243,242,234,-1,238,243,234,-1,243,244,242,-1,232,234,231,-1,231,234,245,-1,246,233,231,-1,231,247,246,-1,247,246,233,-1,231,247,233,-1,248,251,250,-1,250,249,248,-1,234,242,245,-1,235,232,252,-1,252,232,233,-1,252,239,235,-1,253,233,246,-1,254,248,249,-1,255,248,254,-1,256,252,233,-1,245,257,231,-1,258,231,257,-1,261,260,259,-1,261,259,262,-1,263,266,265,-1,265,264,263,-1,263,264,268,-1,268,267,263,-1,268,270,269,-1,269,267,268,-1,267,269,272,-1,272,271,267,-1,273,274,246,-1,246,247,273,-1,258,275,273,-1,273,247,258,-1,247,231,258,-1,278,277,276,-1,276,277,269,-1,279,259,260,-1,276,269,279,-1,271,281,280,-1,280,267,271,-1,280,282,267,-1,277,272,269,-1,284,287,286,-1,286,285,284,-1,288,287,281,-1,281,271,288,-1,286,249,250,-1,250,285,286,-1,290,289,286,-1,278,291,277,-1,292,291,278,-1,287,284,283,-1,295,294,293,-1,296,293,294,-1,289,296,294,-1,296,289,290,-1,277,291,297,-1,298,288,271,-1,271,272,298,-1,299,300,288,-1,288,298,299,-1,277,297,298,-1,298,272,277,-1,299,298,297,-1,297,301,299,-1,303,290,302,-1,305,293,304,-1,303,306,296,-1,296,290,303,-1,296,306,304,-1,304,293,296,-1,300,307,288,-1,307,287,288,-1,290,286,302,-1,301,297,291,-1,291,308,301,-1,302,286,287,-1,309,287,307,-1,293,310,295,-1,310,293,305,-1,254,249,311,-1,308,291,292,-1,292,310,308,-1,310,305,308,-1,310,292,295,-1,289,312,286,-1,289,311,312,-1,311,249,312,-1,312,249,286,-1,282,266,263,-1,263,267,282,-1,313,292,278,-1,313,295,292,-1,314,255,313,-1,314,248,255,-1,315,233,253,-1,256,233,316,-1,316,233,315,-1,317,270,259,-1,279,317,259,-1,269,317,279,-1,269,270,317,-1,238,244,243,-1,313,255,295,-1,255,318,295,-1,295,318,294,-1,255,254,318,-1,311,318,254,-1,294,318,311,-1,311,289,294,-1,304,306,299,-1,307,300,303,-1,300,299,306,-1,304,299,301,-1,306,303,300,-1,321,320,319,-1,320,321,270,-1,308,305,304,-1,301,308,304,-1,307,303,309,-1,270,321,262,-1,270,262,259,-1,252,322,239,-1,252,256,322,-1,231,232,233,-1,232,234,235,-1,236,235,234,-1,237,238,239,-1,240,237,239,-1,239,235,241,-1,241,240,239,-1,236,241,235,-1,234,242,243,-1,234,243,238,-1,242,244,243,-1,231,234,232,-1,245,234,231,-1,246,247,231,-1,231,233,246,-1,233,246,247,-1,233,247,231,-1,323,324,250,-1,250,251,323,-1,245,242,234,-1,252,232,235,-1,233,232,252,-1,235,239,252,-1,246,233,253,-1,324,323,325,-1,325,323,326,-1,233,252,256,-1,231,257,245,-1,257,231,258,-1,329,328,327,-1,330,329,327,-1,331,332,265,-1,265,266,331,-1,331,334,333,-1,333,332,331,-1,333,334,336,-1,336,335,333,-1,334,338,337,-1,337,336,334,-1,273,247,246,-1,246,274,273,-1,258,247,273,-1,273,275,258,-1,258,231,247,-1,341,340,339,-1,336,340,341,-1,328,329,342,-1,342,336,341,-1,338,334,280,-1,280,343,338,-1,334,282,280,-1,336,337,340,-1,284,285,345,-1,345,344,284,-1,346,338,343,-1,343,344,346,-1,345,285,250,-1,250,324,345,-1,345,348,347,-1,340,349,339,-1,339,349,350,-1,283,284,344,-1,353,352,351,-1,352,353,354,-1,352,354,348,-1,347,348,354,-1,355,349,340,-1,356,337,338,-1,338,346,356,-1,357,356,346,-1,346,358,357,-1,340,337,356,-1,356,355,340,-1,357,359,355,-1,355,356,357,-1,361,347,360,-1,363,353,362,-1,360,347,354,-1,354,364,360,-1,354,353,363,-1,363,364,354,-1,346,365,358,-1,346,344,365,-1,361,345,347,-1,359,366,349,-1,349,355,359,-1,344,345,361,-1,365,344,367,-1,351,368,353,-1,362,353,368,-1,369,324,325,-1,366,368,350,-1,350,349,366,-1,366,362,368,-1,351,350,368,-1,345,370,348,-1,370,369,348,-1,370,324,369,-1,345,324,370,-1,331,266,282,-1,282,334,331,-1,339,350,371,-1,350,351,371,-1,371,326,372,-1,326,323,372,-1,253,233,315,-1,316,233,256,-1,315,233,316,-1,329,335,373,-1,329,373,342,-1,342,373,336,-1,373,335,336,-1,243,244,238,-1,351,326,371,-1,351,374,326,-1,352,374,351,-1,374,325,326,-1,325,374,369,-1,352,348,369,-1,369,374,352,-1,357,364,363,-1,360,358,365,-1,364,357,358,-1,359,357,363,-1,358,360,364,-1,319,376,375,-1,335,375,376,-1,363,362,366,-1,363,366,359,-1,367,360,365,-1,330,375,335,-1,329,330,335,-1,239,322,252,-1,322,256,252,-1,265,378,377,-1,377,264,265,-1,264,377,270,-1,270,268,264,-1,265,332,379,-1,379,378,265,-1,332,333,335,-1,335,379,332,-1,380,383,382,-1,382,381,380,-1,384,383,380,-1,380,385,384,-1,380,381,382,-1,382,383,380,-1,384,385,380,-1,380,383,384,-1,253,246,274,-1,274,100,253,-1,253,100,274,-1,274,246,253,-1]
Coordinate146 = x3d.Coordinate()

IndexedFaceSet145.coord = Coordinate146
TextureCoordinate147 = x3d.TextureCoordinate()

IndexedFaceSet145.texCoord = TextureCoordinate147

Shape141.geometry = IndexedFaceSet145

Transform140.children.append(Shape141)

HAnimSegment139.children.append(Transform140)

HAnimJoint138.children.append(HAnimSegment139)

HAnimJoint128.children.append(HAnimJoint138)
HAnimJoint148 = x3d.HAnimJoint()
HAnimJoint148.name = "l_shoulder"
HAnimJoint148.DEF = "hanim_l_shoulder"
HAnimJoint148.center = [5.975,52,-0.1452]
HAnimJoint148.ulimit = [0,0,0]
HAnimJoint148.llimit = [0,0,0]
HAnimSegment149 = x3d.HAnimSegment()
HAnimSegment149.name = "l_upperarm"
HAnimSegment149.DEF = "hanim_l_upperarm"
Transform150 = x3d.Transform()
Transform150.translation = [5.975,52,-0.1452]
Shape151 = x3d.Shape()
Appearance152 = x3d.Appearance()
Material153 = x3d.Material()
Material153.diffuseColor = [0.588,0.588,0.588]

Appearance152.material = Material153
ImageTexture154 = x3d.ImageTexture()
ImageTexture154.USE = "AnnexC01JinTextureAtlas"

Appearance152.texture = ImageTexture154

Shape151.appearance = Appearance152
IndexedFaceSet155 = x3d.IndexedFaceSet()
IndexedFaceSet155.coordIndex = [2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,36,37,38,-1,35,36,38,-1,39,35,38,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1,26,25,20,-1,20,21,26,-1,27,26,21,-1,21,22,27,-1,28,27,22,-1,22,23,28,-1,29,28,23,-1,23,24,29,-1,25,29,24,-1,24,20,25,-1,31,30,25,-1,25,26,31,-1,32,31,26,-1,26,27,32,-1,33,32,27,-1,27,28,33,-1,34,33,28,-1,28,29,34,-1,30,34,29,-1,29,25,30,-1,36,35,30,-1,30,31,36,-1,37,36,31,-1,31,32,37,-1,38,37,32,-1,32,33,38,-1,39,38,33,-1,33,34,39,-1,35,39,34,-1,34,30,35,-1]
IndexedFaceSet155.creaseAngle = 3.14159
IndexedFaceSet155.texCoordIndex = [2,0,1,-1,3,2,1,-1,61,3,1,-1,1,0,5,-1,5,6,1,-1,0,2,7,-1,7,5,0,-1,2,3,8,-1,8,7,2,-1,25,4,9,-1,9,26,25,-1,4,1,6,-1,6,9,4,-1,6,5,10,-1,10,11,6,-1,5,7,12,-1,12,10,5,-1,7,8,13,-1,13,12,7,-1,27,9,14,-1,14,28,27,-1,9,6,11,-1,11,14,9,-1,11,10,15,-1,15,16,11,-1,10,12,17,-1,17,15,10,-1,12,13,18,-1,18,17,12,-1,29,14,19,-1,19,30,29,-1,14,11,16,-1,16,19,14,-1,54,35,36,-1,53,54,36,-1,37,53,36,-1,20,21,16,-1,16,15,20,-1,22,20,15,-1,15,17,22,-1,23,22,17,-1,17,18,23,-1,24,32,31,-1,31,19,24,-1,21,24,19,-1,19,16,21,-1,40,41,38,-1,38,39,40,-1,43,56,55,-1,55,42,43,-1,45,43,42,-1,42,44,45,-1,47,45,44,-1,44,46,47,-1,41,47,46,-1,46,38,41,-1,48,49,41,-1,41,40,48,-1,50,58,57,-1,57,43,50,-1,51,50,43,-1,43,45,51,-1,52,51,45,-1,45,47,52,-1,49,52,47,-1,47,41,49,-1,34,33,49,-1,49,48,34,-1,35,60,59,-1,59,50,35,-1,36,35,50,-1,50,51,36,-1,37,36,51,-1,51,52,37,-1,33,37,52,-1,52,49,33,-1]
Coordinate156 = x3d.Coordinate()

IndexedFaceSet155.coord = Coordinate156
TextureCoordinate157 = x3d.TextureCoordinate()

IndexedFaceSet155.texCoord = TextureCoordinate157

Shape151.geometry = IndexedFaceSet155

Transform150.children.append(Shape151)

HAnimSegment149.children.append(Transform150)

HAnimJoint148.children.append(HAnimSegment149)
HAnimJoint158 = x3d.HAnimJoint()
HAnimJoint158.name = "l_elbow"
HAnimJoint158.DEF = "hanim_l_elbow"
HAnimJoint158.center = [8.093,40.38,-0.2502]
HAnimJoint158.ulimit = [0,0,0]
HAnimJoint158.llimit = [0,0,0]
HAnimSegment159 = x3d.HAnimSegment()
HAnimSegment159.name = "l_forearm"
HAnimSegment159.DEF = "hanim_l_forearm"
Transform160 = x3d.Transform()
Transform160.translation = [8.093,40.38,-0.2502]
Shape161 = x3d.Shape()
Appearance162 = x3d.Appearance()
Material163 = x3d.Material()
Material163.diffuseColor = [0.588,0.588,0.588]

Appearance162.material = Material163
ImageTexture164 = x3d.ImageTexture()
ImageTexture164.USE = "AnnexC01JinTextureAtlas"

Appearance162.texture = ImageTexture164

Shape161.appearance = Appearance162
IndexedFaceSet165 = x3d.IndexedFaceSet()
IndexedFaceSet165.coordIndex = [2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,21,22,23,-1,20,21,23,-1,24,20,23,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1]
IndexedFaceSet165.creaseAngle = 3.14159
IndexedFaceSet165.texCoordIndex = [2,25,26,-1,3,2,26,-1,4,3,26,-1,0,1,6,-1,6,5,0,-1,27,2,7,-1,7,28,27,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,29,7,12,-1,12,30,29,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,31,12,17,-1,17,32,31,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,34,22,23,-1,33,34,23,-1,24,33,23,-1,21,20,15,-1,15,16,21,-1,22,36,35,-1,35,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1]
Coordinate166 = x3d.Coordinate()

IndexedFaceSet165.coord = Coordinate166
TextureCoordinate167 = x3d.TextureCoordinate()

IndexedFaceSet165.texCoord = TextureCoordinate167

Shape161.geometry = IndexedFaceSet165

Transform160.children.append(Shape161)

HAnimSegment159.children.append(Transform160)

HAnimJoint158.children.append(HAnimSegment159)
HAnimJoint168 = x3d.HAnimJoint()
HAnimJoint168.name = "l_radiocarpal"
HAnimJoint168.DEF = "hanim_l_radiocarpal"
HAnimJoint168.center = [7.808,31.46,-0.05849]
HAnimJoint168.ulimit = [0,0,0]
HAnimJoint168.llimit = [0,0,0]
HAnimSegment169 = x3d.HAnimSegment()
HAnimSegment169.name = "l_carpal"
HAnimSegment169.DEF = "hanim_l_carpal"
Transform170 = x3d.Transform()
Transform170.translation = [7.808,31.46,-0.05849]
Shape171 = x3d.Shape()
Appearance172 = x3d.Appearance()
Material173 = x3d.Material()
Material173.diffuseColor = [0.588,0.588,0.588]

Appearance172.material = Material173
ImageTexture174 = x3d.ImageTexture()
ImageTexture174.USE = "AnnexC01JinTextureAtlas"

Appearance172.texture = ImageTexture174

Shape171.appearance = Appearance172
IndexedFaceSet175 = x3d.IndexedFaceSet()
IndexedFaceSet175.coordIndex = [4,5,0,-1,0,2,4,-1,6,7,3,-1,3,1,6,-1,1,0,5,-1,5,6,1,-1,8,9,5,-1,5,4,8,-1,10,11,7,-1,7,6,10,-1,9,10,6,-1,6,5,9,-1,12,13,9,-1,9,8,12,-1,14,15,11,-1,11,10,14,-1,13,14,10,-1,10,9,13,-1,4,2,16,-1,2,3,7,-1,7,16,2,-1,17,19,18,-1,18,20,17,-1,21,16,7,-1,7,11,21,-1,8,21,12,-1,12,21,11,-1,11,15,12,-1,13,12,15,-1,15,14,13,-1,8,4,19,-1,19,17,8,-1,4,16,18,-1,18,19,4,-1,16,21,20,-1,20,18,16,-1,21,8,17,-1,17,20,21,-1,22,27,23,-1,26,25,24,-1]
IndexedFaceSet175.creaseAngle = 3.14159
IndexedFaceSet175.texCoordIndex = [4,6,5,-1,5,7,4,-1,2,3,1,-1,1,0,2,-1,14,16,15,-1,15,17,14,-1,8,9,6,-1,6,4,8,-1,38,40,39,-1,39,41,38,-1,18,19,36,-1,36,37,18,-1,10,11,9,-1,9,8,10,-1,42,43,40,-1,40,38,42,-1,20,21,19,-1,19,18,20,-1,22,24,23,-1,24,26,25,-1,25,23,24,-1,27,29,28,-1,28,30,27,-1,31,23,25,-1,25,32,31,-1,33,31,34,-1,34,31,32,-1,32,35,34,-1,20,34,35,-1,35,21,20,-1,8,4,12,-1,12,13,8,-1,22,23,28,-1,28,29,22,-1,23,31,30,-1,30,28,23,-1,31,33,27,-1,27,30,31,-1,14,24,26,-1,14,16,24,-1]
Coordinate176 = x3d.Coordinate()

IndexedFaceSet175.coord = Coordinate176
TextureCoordinate177 = x3d.TextureCoordinate()

IndexedFaceSet175.texCoord = TextureCoordinate177

Shape171.geometry = IndexedFaceSet175

Transform170.children.append(Shape171)

HAnimSegment169.children.append(Transform170)

HAnimJoint168.children.append(HAnimSegment169)

HAnimJoint158.children.append(HAnimJoint168)

HAnimJoint148.children.append(HAnimJoint158)

HAnimJoint128.children.append(HAnimJoint148)
HAnimJoint178 = x3d.HAnimJoint()
HAnimJoint178.name = "r_shoulder"
HAnimJoint178.DEF = "hanim_r_shoulder"
HAnimJoint178.center = [-5.975,52,-0.1452]
HAnimJoint178.ulimit = [0,0,0]
HAnimJoint178.llimit = [0,0,0]
HAnimSegment179 = x3d.HAnimSegment()
HAnimSegment179.name = "r_upperarm"
HAnimSegment179.DEF = "hanim_r_upperarm"
Transform180 = x3d.Transform()
Transform180.translation = [-5.975,52,-0.1452]
Shape181 = x3d.Shape()
Appearance182 = x3d.Appearance()
Material183 = x3d.Material()
Material183.diffuseColor = [0.588,0.588,0.588]

Appearance182.material = Material183
ImageTexture184 = x3d.ImageTexture()
ImageTexture184.USE = "AnnexC01JinTextureAtlas"

Appearance182.texture = ImageTexture184

Shape181.appearance = Appearance182
IndexedFaceSet185 = x3d.IndexedFaceSet()
IndexedFaceSet185.coordIndex = [0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,38,37,36,-1,38,36,35,-1,39,38,35,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1,26,21,20,-1,20,25,26,-1,27,22,21,-1,21,26,27,-1,28,23,22,-1,22,27,28,-1,29,24,23,-1,23,28,29,-1,25,20,24,-1,24,29,25,-1,31,26,25,-1,25,30,31,-1,32,27,26,-1,26,31,32,-1,33,28,27,-1,27,32,33,-1,34,29,28,-1,28,33,34,-1,30,25,29,-1,29,34,30,-1,36,31,30,-1,30,35,36,-1,37,32,31,-1,31,36,37,-1,38,33,32,-1,32,37,38,-1,39,34,33,-1,33,38,39,-1,35,30,34,-1,34,39,35,-1]
IndexedFaceSet185.creaseAngle = 3.14159
IndexedFaceSet185.texCoordIndex = [1,0,2,-1,1,2,3,-1,61,1,3,-1,1,6,5,-1,5,0,1,-1,0,5,7,-1,7,2,0,-1,2,7,8,-1,8,3,2,-1,25,26,9,-1,9,4,25,-1,4,9,6,-1,6,1,4,-1,6,11,10,-1,10,5,6,-1,5,10,12,-1,12,7,5,-1,7,12,13,-1,13,8,7,-1,27,28,14,-1,14,9,27,-1,9,14,11,-1,11,6,9,-1,11,16,15,-1,15,10,11,-1,10,15,17,-1,17,12,10,-1,12,17,18,-1,18,13,12,-1,29,30,19,-1,19,14,29,-1,14,19,16,-1,16,11,14,-1,36,35,54,-1,36,54,53,-1,37,36,53,-1,20,15,16,-1,16,21,20,-1,22,17,15,-1,15,20,22,-1,23,18,17,-1,17,22,23,-1,24,19,31,-1,31,32,24,-1,21,16,19,-1,19,24,21,-1,40,39,38,-1,38,41,40,-1,43,42,55,-1,55,56,43,-1,45,44,42,-1,42,43,45,-1,47,46,44,-1,44,45,47,-1,41,38,46,-1,46,47,41,-1,48,40,41,-1,41,49,48,-1,50,43,57,-1,57,58,50,-1,51,45,43,-1,43,50,51,-1,52,47,45,-1,45,51,52,-1,49,41,47,-1,47,52,49,-1,34,48,49,-1,49,33,34,-1,35,50,59,-1,59,60,35,-1,36,51,50,-1,50,35,36,-1,37,52,51,-1,51,36,37,-1,33,49,52,-1,52,37,33,-1]
Coordinate186 = x3d.Coordinate()

IndexedFaceSet185.coord = Coordinate186
TextureCoordinate187 = x3d.TextureCoordinate()

IndexedFaceSet185.texCoord = TextureCoordinate187

Shape181.geometry = IndexedFaceSet185

Transform180.children.append(Shape181)

HAnimSegment179.children.append(Transform180)

HAnimJoint178.children.append(HAnimSegment179)
HAnimJoint188 = x3d.HAnimJoint()
HAnimJoint188.name = "r_elbow"
HAnimJoint188.DEF = "hanim_r_elbow"
HAnimJoint188.center = [-8.093,40.38,-0.2502]
HAnimJoint188.ulimit = [0,0,0]
HAnimJoint188.llimit = [0,0,0]
HAnimSegment189 = x3d.HAnimSegment()
HAnimSegment189.name = "r_forearm"
HAnimSegment189.DEF = "hanim_r_forearm"
Transform190 = x3d.Transform()
Transform190.translation = [-8.093,40.38,-0.2502]
Shape191 = x3d.Shape()
Appearance192 = x3d.Appearance()
Material193 = x3d.Material()
Material193.diffuseColor = [0.588,0.588,0.588]

Appearance192.material = Material193
ImageTexture194 = x3d.ImageTexture()
ImageTexture194.USE = "AnnexC01JinTextureAtlas"

Appearance192.texture = ImageTexture194

Shape191.appearance = Appearance192
IndexedFaceSet195 = x3d.IndexedFaceSet()
IndexedFaceSet195.coordIndex = [0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,23,22,21,-1,23,21,20,-1,24,23,20,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1]
IndexedFaceSet195.creaseAngle = 3.14159
IndexedFaceSet195.texCoordIndex = [26,25,2,-1,26,2,3,-1,4,26,3,-1,0,5,6,-1,6,1,0,-1,27,28,7,-1,7,2,27,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,29,30,12,-1,12,7,29,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,31,32,17,-1,17,12,31,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,23,22,34,-1,23,34,33,-1,24,23,33,-1,21,16,15,-1,15,20,21,-1,22,17,35,-1,35,36,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1]
Coordinate196 = x3d.Coordinate()

IndexedFaceSet195.coord = Coordinate196
TextureCoordinate197 = x3d.TextureCoordinate()

IndexedFaceSet195.texCoord = TextureCoordinate197

Shape191.geometry = IndexedFaceSet195

Transform190.children.append(Shape191)

HAnimSegment189.children.append(Transform190)

HAnimJoint188.children.append(HAnimSegment189)
HAnimJoint198 = x3d.HAnimJoint()
HAnimJoint198.name = "r_radiocarpal"
HAnimJoint198.DEF = "hanim_r_radiocarpal"
HAnimJoint198.center = [-7.808,31.46,-0.05849]
HAnimJoint198.ulimit = [0,0,0]
HAnimJoint198.llimit = [0,0,0]
HAnimSegment199 = x3d.HAnimSegment()
HAnimSegment199.name = "r_carpal"
HAnimSegment199.DEF = "hanim_r_carpal"
Transform200 = x3d.Transform()
Transform200.translation = [-7.808,31.46,-0.05849]
Shape201 = x3d.Shape()
Appearance202 = x3d.Appearance()
Material203 = x3d.Material()
Material203.diffuseColor = [0.588,0.588,0.588]

Appearance202.material = Material203
ImageTexture204 = x3d.ImageTexture()
ImageTexture204.USE = "AnnexC01JinTextureAtlas"

Appearance202.texture = ImageTexture204

Shape201.appearance = Appearance202
IndexedFaceSet205 = x3d.IndexedFaceSet()
IndexedFaceSet205.coordIndex = [4,2,0,-1,0,5,4,-1,6,1,3,-1,3,7,6,-1,1,6,5,-1,5,0,1,-1,8,4,5,-1,5,9,8,-1,10,6,7,-1,7,11,10,-1,9,5,6,-1,6,10,9,-1,12,8,9,-1,9,13,12,-1,14,10,11,-1,11,15,14,-1,13,9,10,-1,10,14,13,-1,4,16,2,-1,2,16,7,-1,7,3,2,-1,17,20,18,-1,18,19,17,-1,21,11,7,-1,7,16,21,-1,8,12,21,-1,12,15,11,-1,11,21,12,-1,13,14,15,-1,15,12,13,-1,8,17,19,-1,19,4,8,-1,4,19,18,-1,18,16,4,-1,16,18,20,-1,20,21,16,-1,21,20,17,-1,17,8,21,-1,22,23,27,-1,26,24,25,-1]
IndexedFaceSet205.creaseAngle = 3.14159
IndexedFaceSet205.texCoordIndex = [4,7,5,-1,5,6,4,-1,2,0,1,-1,1,3,2,-1,14,17,15,-1,15,16,14,-1,8,4,6,-1,6,9,8,-1,38,41,39,-1,39,40,38,-1,18,37,36,-1,36,19,18,-1,10,8,9,-1,9,11,10,-1,42,38,40,-1,40,43,42,-1,20,18,19,-1,19,21,20,-1,22,23,24,-1,24,23,25,-1,25,26,24,-1,27,30,28,-1,28,29,27,-1,31,32,25,-1,25,23,31,-1,33,34,31,-1,34,35,32,-1,32,31,34,-1,20,21,35,-1,35,34,20,-1,8,13,12,-1,12,4,8,-1,22,29,28,-1,28,23,22,-1,23,28,30,-1,30,31,23,-1,31,30,27,-1,27,33,31,-1,14,26,24,-1,14,24,16,-1]
Coordinate206 = x3d.Coordinate()

IndexedFaceSet205.coord = Coordinate206
TextureCoordinate207 = x3d.TextureCoordinate()

IndexedFaceSet205.texCoord = TextureCoordinate207

Shape201.geometry = IndexedFaceSet205

Transform200.children.append(Shape201)

HAnimSegment199.children.append(Transform200)

HAnimJoint198.children.append(HAnimSegment199)

HAnimJoint188.children.append(HAnimJoint198)

HAnimJoint178.children.append(HAnimJoint188)

HAnimJoint128.children.append(HAnimJoint178)

HAnimJoint38.children.append(HAnimJoint128)

HAnimJoint28.children.append(HAnimJoint38)

HAnimHumanoid25.skeleton.append(HAnimJoint28)
HAnimJoint208 = x3d.HAnimJoint()
HAnimJoint208.USE = "hanim_humanoid_root"

HAnimHumanoid25.joints.append(HAnimJoint208)
HAnimJoint209 = x3d.HAnimJoint()
HAnimJoint209.USE = "hanim_sacroiliac"

HAnimHumanoid25.joints.append(HAnimJoint209)
HAnimJoint210 = x3d.HAnimJoint()
HAnimJoint210.USE = "hanim_vl5"

HAnimHumanoid25.joints.append(HAnimJoint210)
HAnimJoint211 = x3d.HAnimJoint()
HAnimJoint211.USE = "hanim_skullbase"

HAnimHumanoid25.joints.append(HAnimJoint211)
HAnimJoint212 = x3d.HAnimJoint()
HAnimJoint212.USE = "hanim_l_elbow"

HAnimHumanoid25.joints.append(HAnimJoint212)
HAnimJoint213 = x3d.HAnimJoint()
HAnimJoint213.USE = "hanim_r_elbow"

HAnimHumanoid25.joints.append(HAnimJoint213)
HAnimJoint214 = x3d.HAnimJoint()
HAnimJoint214.USE = "hanim_l_hip"

HAnimHumanoid25.joints.append(HAnimJoint214)
HAnimJoint215 = x3d.HAnimJoint()
HAnimJoint215.USE = "hanim_r_hip"

HAnimHumanoid25.joints.append(HAnimJoint215)
HAnimJoint216 = x3d.HAnimJoint()
HAnimJoint216.USE = "hanim_l_knee"

HAnimHumanoid25.joints.append(HAnimJoint216)
HAnimJoint217 = x3d.HAnimJoint()
HAnimJoint217.USE = "hanim_r_knee"

HAnimHumanoid25.joints.append(HAnimJoint217)
HAnimJoint218 = x3d.HAnimJoint()
HAnimJoint218.USE = "hanim_l_metatarsophalangeal_2"

HAnimHumanoid25.joints.append(HAnimJoint218)
HAnimJoint219 = x3d.HAnimJoint()
HAnimJoint219.USE = "hanim_r_metatarsophalangeal_2"

HAnimHumanoid25.joints.append(HAnimJoint219)
HAnimJoint220 = x3d.HAnimJoint()
HAnimJoint220.USE = "hanim_l_radiocarpal"

HAnimHumanoid25.joints.append(HAnimJoint220)
HAnimJoint221 = x3d.HAnimJoint()
HAnimJoint221.USE = "hanim_r_radiocarpal"

HAnimHumanoid25.joints.append(HAnimJoint221)
HAnimJoint222 = x3d.HAnimJoint()
HAnimJoint222.USE = "hanim_l_shoulder"

HAnimHumanoid25.joints.append(HAnimJoint222)
HAnimJoint223 = x3d.HAnimJoint()
HAnimJoint223.USE = "hanim_r_shoulder"

HAnimHumanoid25.joints.append(HAnimJoint223)
HAnimJoint224 = x3d.HAnimJoint()
HAnimJoint224.USE = "hanim_l_talocrural"

HAnimHumanoid25.joints.append(HAnimJoint224)
HAnimJoint225 = x3d.HAnimJoint()
HAnimJoint225.USE = "hanim_r_talocrural"

HAnimHumanoid25.joints.append(HAnimJoint225)
HAnimSegment226 = x3d.HAnimSegment()
HAnimSegment226.USE = "hanim_sacrum"

HAnimHumanoid25.segments.append(HAnimSegment226)
HAnimSegment227 = x3d.HAnimSegment()
HAnimSegment227.USE = "hanim_pelvis"

HAnimHumanoid25.segments.append(HAnimSegment227)
HAnimSegment228 = x3d.HAnimSegment()
HAnimSegment228.USE = "hanim_l5"

HAnimHumanoid25.segments.append(HAnimSegment228)
HAnimSegment229 = x3d.HAnimSegment()
HAnimSegment229.USE = "hanim_skull"

HAnimHumanoid25.segments.append(HAnimSegment229)
HAnimSegment230 = x3d.HAnimSegment()
HAnimSegment230.USE = "hanim_l_calf"

HAnimHumanoid25.segments.append(HAnimSegment230)
HAnimSegment231 = x3d.HAnimSegment()
HAnimSegment231.USE = "hanim_r_calf"

HAnimHumanoid25.segments.append(HAnimSegment231)
HAnimSegment232 = x3d.HAnimSegment()
HAnimSegment232.USE = "hanim_l_carpal"

HAnimHumanoid25.segments.append(HAnimSegment232)
HAnimSegment233 = x3d.HAnimSegment()
HAnimSegment233.USE = "hanim_r_carpal"

HAnimHumanoid25.segments.append(HAnimSegment233)
HAnimSegment234 = x3d.HAnimSegment()
HAnimSegment234.USE = "hanim_l_forearm"

HAnimHumanoid25.segments.append(HAnimSegment234)
HAnimSegment235 = x3d.HAnimSegment()
HAnimSegment235.USE = "hanim_r_forearm"

HAnimHumanoid25.segments.append(HAnimSegment235)
HAnimSegment236 = x3d.HAnimSegment()
HAnimSegment236.USE = "hanim_l_talus"

HAnimHumanoid25.segments.append(HAnimSegment236)
HAnimSegment237 = x3d.HAnimSegment()
HAnimSegment237.USE = "hanim_r_talus"

HAnimHumanoid25.segments.append(HAnimSegment237)
HAnimSegment238 = x3d.HAnimSegment()
HAnimSegment238.USE = "hanim_l_tarsal_proximal_phalanx_2"

HAnimHumanoid25.segments.append(HAnimSegment238)
HAnimSegment239 = x3d.HAnimSegment()
HAnimSegment239.USE = "hanim_r_tarsal_proximal_phalanx_2"

HAnimHumanoid25.segments.append(HAnimSegment239)
HAnimSegment240 = x3d.HAnimSegment()
HAnimSegment240.USE = "hanim_l_thigh"

HAnimHumanoid25.segments.append(HAnimSegment240)
HAnimSegment241 = x3d.HAnimSegment()
HAnimSegment241.USE = "hanim_r_thigh"

HAnimHumanoid25.segments.append(HAnimSegment241)
HAnimSegment242 = x3d.HAnimSegment()
HAnimSegment242.USE = "hanim_l_upperarm"

HAnimHumanoid25.segments.append(HAnimSegment242)
HAnimSegment243 = x3d.HAnimSegment()
HAnimSegment243.USE = "hanim_r_upperarm"

HAnimHumanoid25.segments.append(HAnimSegment243)

Scene21.children.append(HAnimHumanoid25)
Group244 = x3d.Group()
Group244.DEF = "KeyframeAnimation"
TimeSensor245 = x3d.TimeSensor()
TimeSensor245.DEF = "KeyframeTimer"
TimeSensor245.cycleInterval = 8.033494
TimeSensor245.loop = True

Group244.children.append(TimeSensor245)
PositionInterpolator246 = x3d.PositionInterpolator()
PositionInterpolator246.DEF = "Keyframe_humanoid_root_Position"
PositionInterpolator246.key = [0,0.002074689,0.004149377,0.006224066,0.008298755,0.01037344,0.01244813,0.01452282,0.01659751,0.0186722,0.02074689,0.02282158,0.02489626,0.02697095,0.02904564,0.03112033,0.03319502,0.03526971,0.0373444,0.03941908,0.04149377,0.04356846,0.04564315,0.04771784,0.04979253,0.05186722,0.05394191,0.05601659,0.05809128,0.06016597,0.06224066,0.06431535,0.06639004,0.06846473,0.07053941,0.0726141,0.07468879,0.07676348,0.07883817,0.08091286,0.08298755,0.08506224,0.08713692,0.08921161,0.0912863,0.09336099,0.09543568,0.09751037,0.09958506,0.1016597,0.1037344,0.1058091,0.1078838,0.1099585,0.1120332,0.1141079,0.1161826,0.1182573,0.1203319,0.1224066,0.1244813,0.126556,0.1286307,0.1307054,0.1327801,0.1348548,0.1369295,0.1390041,0.1410788,0.1431535,0.1452282,0.1473029,0.1493776,0.1514523,0.153527,0.1556017,0.1576763,0.159751,0.1618257,0.1639004,0.1659751,0.1680498,0.1701245,0.1721992,0.1742738,0.1763485,0.1784232,0.1804979,0.1825726,0.1846473,0.186722,0.1887967,0.1908714,0.192946,0.1950207,0.1970954,0.1991701,0.2012448,0.2033195,0.2053942,0.2074689,0.2095436,0.2116182,0.2136929,0.2157676,0.2178423,0.219917,0.2219917,0.2240664,0.2261411,0.2282158,0.2302904,0.2323651,0.2344398,0.2365145,0.2385892,0.2406639,0.2427386,0.2448133,0.246888,0.2489626,0.2510373,0.253112,0.2551867,0.2572614,0.2593361,0.2614108,0.2634855,0.2655602,0.2676348,0.2697095,0.2717842,0.2738589,0.2759336,0.2780083,0.280083,0.2821577,0.2842323,0.286307,0.2883817,0.2904564,0.2925311,0.2946058,0.2966805,0.2987552,0.3008299,0.3029045,0.3049792,0.3070539,0.3091286,0.3112033,0.313278,0.3153527,0.3174274,0.3195021,0.3215767,0.3236514,0.3257261,0.3278008,0.3298755,0.3319502,0.3340249,0.3360996,0.3381743,0.3402489,0.3423236,0.3443983,0.346473,0.3485477,0.3506224,0.3526971,0.3547718,0.3568465,0.3589211,0.3609958,0.3630705,0.3651452,0.3672199,0.3692946,0.3713693,0.373444,0.3755186,0.3775933,0.379668,0.3817427,0.3838174,0.3858921,0.3879668,0.3900415,0.3921162,0.3941908,0.3962655,0.3983402,0.4004149,0.4024896,0.4045643,0.406639,0.4087137,0.4107884,0.412863,0.4149377,0.4170124,0.4190871,0.4211618,0.4232365,0.4253112,0.4273859,0.4294606,0.4315352,0.4336099,0.4356846,0.4377593,0.439834,0.4419087,0.4439834,0.4460581,0.4481328,0.4502074,0.4522821,0.4543568,0.4564315,0.4585062,0.4605809,0.4626556,0.4647303,0.466805,0.4688796,0.4709543,0.473029,0.4751037,0.4771784,0.4792531,0.4813278,0.4834025,0.4854771,0.4875518,0.4896265,0.4917012,0.4937759,0.4958506,0.4979253,0.5,0.5020747,0.5041494,0.506224,0.5082988,0.5103734,0.5124481,0.5145228,0.5165975,0.5186722,0.5207469,0.5228215,0.5248963,0.5269709,0.5290456,0.5311203,0.533195,0.5352697,0.5373444,0.5394191,0.5414938,0.5435684,0.5456432,0.5477178,0.5497925,0.5518672,0.5539419,0.5560166,0.5580913,0.5601659,0.5622407,0.5643153,0.56639,0.5684647,0.5705394,0.5726141,0.5746888,0.5767635,0.5788382,0.5809128,0.5829875,0.5850622,0.5871369,0.5892116,0.5912863,0.593361,0.5954357,0.5975103,0.5995851,0.6016597,0.6037344,0.6058091,0.6078838,0.6099585,0.6120332,0.6141078,0.6161826,0.6182572,0.6203319,0.6224066,0.6244813,0.626556,0.6286307,0.6307054,0.6327801,0.6348547,0.6369295,0.6390041,0.6410788,0.6431535,0.6452282,0.6473029,0.6493776,0.6514522,0.653527,0.6556016,0.6576763,0.659751,0.6618257,0.6639004,0.6659751,0.6680498,0.6701245,0.6721991,0.6742738,0.6763485,0.6784232,0.6804979,0.6825726,0.6846473,0.686722,0.6887966,0.6908714,0.692946,0.6950207,0.6970954,0.6991701,0.7012448,0.7033195,0.7053941,0.7074689,0.7095435,0.7116182,0.7136929,0.7157676,0.7178423,0.719917,0.7219917,0.7240664,0.726141,0.7282158,0.7302904,0.7323651,0.7344398,0.7365145,0.7385892,0.7406639,0.7427385,0.7448133,0.7468879,0.7489626,0.7510373,0.753112,0.7551867,0.7572614,0.7593361,0.7614108,0.7634854,0.7655602,0.7676348,0.7697095,0.7717842,0.7738589,0.7759336,0.7780083,0.7800829,0.7821577,0.7842323,0.786307,0.7883817,0.7904564,0.7925311,0.7946058,0.7966805,0.7987552,0.8008298,0.8029045,0.8049792,0.8070539,0.8091286,0.8112033,0.813278,0.8153527,0.8174273,0.8195021,0.8215767,0.8236514,0.8257261,0.8278008,0.8298755,0.8319502,0.8340248,0.8360996,0.8381742,0.8402489,0.8423236,0.8443983,0.846473,0.8485477,0.8506224,0.8526971,0.8547717,0.8568465,0.8589211,0.8609958,0.8630705,0.8651452,0.8672199,0.8692946,0.8713692,0.873444,0.8755186,0.8775933,0.879668,0.8817427,0.8838174,0.8858921,0.8879668,0.8900415,0.8921161,0.8941908,0.8962655,0.8983402,0.9004149,0.9024896,0.9045643,0.906639,0.9087136,0.9107884,0.912863,0.9149377,0.9170124,0.9190871,0.9211618,0.9232365,0.9253111,0.9273859,0.9294605,0.9315352,0.9336099,0.9356846,0.9377593,0.939834,0.9419087,0.9439834,0.946058,0.9481328,0.9502074,0.9522821,0.9543568,0.9564315,0.9585062,0.9605809,0.9626555,0.9647303,0.9668049,0.9688796,0.9709543,0.973029,0.9751037,0.9771784,0.9792531,0.9813278,0.9834024,0.9854771,0.9875518,0.9896265,0.9917012,0.9937759,0.9958506,0.9979253]

Group244.children.append(PositionInterpolator246)
OrientationInterpolator247 = x3d.OrientationInterpolator()
OrientationInterpolator247.DEF = "Keyframe_humanoid_root"
OrientationInterpolator247.key = [0,0.002074689,0.004149377,0.006224066,0.008298755,0.01037344,0.01244813,0.01452282,0.01659751,0.0186722,0.02074689,0.02282158,0.02489626,0.02697095,0.02904564,0.03112033,0.03319502,0.03526971,0.0373444,0.03941908,0.04149377,0.04356846,0.04564315,0.04771784,0.04979253,0.05186722,0.05394191,0.05601659,0.05809128,0.06016597,0.06224066,0.06431535,0.06639004,0.06846473,0.07053941,0.0726141,0.07468879,0.07676348,0.07883817,0.08091286,0.08298755,0.08506224,0.08713692,0.08921161,0.0912863,0.09336099,0.09543568,0.09751037,0.09958506,0.1016597,0.1037344,0.1058091,0.1078838,0.1099585,0.1120332,0.1141079,0.1161826,0.1182573,0.1203319,0.1224066,0.1244813,0.126556,0.1286307,0.1307054,0.1327801,0.1348548,0.1369295,0.1390041,0.1410788,0.1431535,0.1452282,0.1473029,0.1493776,0.1514523,0.153527,0.1556017,0.1576763,0.159751,0.1618257,0.1639004,0.1659751,0.1680498,0.1701245,0.1721992,0.1742738,0.1763485,0.1784232,0.1804979,0.1825726,0.1846473,0.186722,0.1887967,0.1908714,0.192946,0.1950207,0.1970954,0.1991701,0.2012448,0.2033195,0.2053942,0.2074689,0.2095436,0.2116182,0.2136929,0.2157676,0.2178423,0.219917,0.2219917,0.2240664,0.2261411,0.2282158,0.2302904,0.2323651,0.2344398,0.2365145,0.2385892,0.2406639,0.2427386,0.2448133,0.246888,0.2489626,0.2510373,0.253112,0.2551867,0.2572614,0.2593361,0.2614108,0.2634855,0.2655602,0.2676348,0.2697095,0.2717842,0.2738589,0.2759336,0.2780083,0.280083,0.2821577,0.2842323,0.286307,0.2883817,0.2904564,0.2925311,0.2946058,0.2966805,0.2987552,0.3008299,0.3029045,0.3049792,0.3070539,0.3091286,0.3112033,0.313278,0.3153527,0.3174274,0.3195021,0.3215767,0.3236514,0.3257261,0.3278008,0.3298755,0.3319502,0.3340249,0.3360996,0.3381743,0.3402489,0.3423236,0.3443983,0.346473,0.3485477,0.3506224,0.3526971,0.3547718,0.3568465,0.3589211,0.3609958,0.3630705,0.3651452,0.3672199,0.3692946,0.3713693,0.373444,0.3755186,0.3775933,0.379668,0.3817427,0.3838174,0.3858921,0.3879668,0.3900415,0.3921162,0.3941908,0.3962655,0.3983402,0.4004149,0.4024896,0.4045643,0.406639,0.4087137,0.4107884,0.412863,0.4149377,0.4170124,0.4190871,0.4211618,0.4232365,0.4253112,0.4273859,0.4294606,0.4315352,0.4336099,0.4356846,0.4377593,0.439834,0.4419087,0.4439834,0.4460581,0.4481328,0.4502074,0.4522821,0.4543568,0.4564315,0.4585062,0.4605809,0.4626556,0.4647303,0.466805,0.4688796,0.4709543,0.473029,0.4751037,0.4771784,0.4792531,0.4813278,0.4834025,0.4854771,0.4875518,0.4896265,0.4917012,0.4937759,0.4958506,0.4979253,0.5,0.5020747,0.5041494,0.506224,0.5082988,0.5103734,0.5124481,0.5145228,0.5165975,0.5186722,0.5207469,0.5228215,0.5248963,0.5269709,0.5290456,0.5311203,0.533195,0.5352697,0.5373444,0.5394191,0.5414938,0.5435684,0.5456432,0.5477178,0.5497925,0.5518672,0.5539419,0.5560166,0.5580913,0.5601659,0.5622407,0.5643153,0.56639,0.5684647,0.5705394,0.5726141,0.5746888,0.5767635,0.5788382,0.5809128,0.5829875,0.5850622,0.5871369,0.5892116,0.5912863,0.593361,0.5954357,0.5975103,0.5995851,0.6016597,0.6037344,0.6058091,0.6078838,0.6099585,0.6120332,0.6141078,0.6161826,0.6182572,0.6203319,0.6224066,0.6244813,0.626556,0.6286307,0.6307054,0.6327801,0.6348547,0.6369295,0.6390041,0.6410788,0.6431535,0.6452282,0.6473029,0.6493776,0.6514522,0.653527,0.6556016,0.6576763,0.659751,0.6618257,0.6639004,0.6659751,0.6680498,0.6701245,0.6721991,0.6742738,0.6763485,0.6784232,0.6804979,0.6825726,0.6846473,0.686722,0.6887966,0.6908714,0.692946,0.6950207,0.6970954,0.6991701,0.7012448,0.7033195,0.7053941,0.7074689,0.7095435,0.7116182,0.7136929,0.7157676,0.7178423,0.719917,0.7219917,0.7240664,0.726141,0.7282158,0.7302904,0.7323651,0.7344398,0.7365145,0.7385892,0.7406639,0.7427385,0.7448133,0.7468879,0.7489626,0.7510373,0.753112,0.7551867,0.7572614,0.7593361,0.7614108,0.7634854,0.7655602,0.7676348,0.7697095,0.7717842,0.7738589,0.7759336,0.7780083,0.7800829,0.7821577,0.7842323,0.786307,0.7883817,0.7904564,0.7925311,0.7946058,0.7966805,0.7987552,0.8008298,0.8029045,0.8049792,0.8070539,0.8091286,0.8112033,0.813278,0.8153527,0.8174273,0.8195021,0.8215767,0.8236514,0.8257261,0.8278008,0.8298755,0.8319502,0.8340248,0.8360996,0.8381742,0.8402489,0.8423236,0.8443983,0.846473,0.8485477,0.8506224,0.8526971,0.8547717,0.8568465,0.8589211,0.8609958,0.8630705,0.8651452,0.8672199,0.8692946,0.8713692,0.873444,0.8755186,0.8775933,0.879668,0.8817427,0.8838174,0.8858921,0.8879668,0.8900415,0.8921161,0.8941908,0.8962655,0.8983402,0.9004149,0.9024896,0.9045643,0.906639,0.9087136,0.9107884,0.912863,0.9149377,0.9170124,0.9190871,0.9211618,0.9232365,0.9253111,0.9273859,0.9294605,0.9315352,0.9336099,0.9356846,0.9377593,0.939834,0.9419087,0.9439834,0.946058,0.9481328,0.9502074,0.9522821,0.9543568,0.9564315,0.9585062,0.9605809,0.9626555,0.9647303,0.9668049,0.9688796,0.9709543,0.973029,0.9751037,0.9771784,0.9792531,0.9813278,0.9834024,0.9854771,0.9875518,0.9896265,0.9917012,0.9937759,0.9958506,0.9979253]

Group244.children.append(OrientationInterpolator247)
OrientationInterpolator248 = x3d.OrientationInterpolator()
OrientationInterpolator248.DEF = "Keyframe_sacroiliac"
OrientationInterpolator248.key = [0,0.002074689,0.004149377,0.006224066,0.008298755,0.01037344,0.01244813,0.01452282,0.01659751,0.0186722,0.02074689,0.02282158,0.02489626,0.02697095,0.02904564,0.03112033,0.03319502,0.03526971,0.0373444,0.03941908,0.04149377,0.04356846,0.04564315,0.04771784,0.04979253,0.05186722,0.05394191,0.05601659,0.05809128,0.06016597,0.06224066,0.06431535,0.06639004,0.06846473,0.07053941,0.0726141,0.07468879,0.07676348,0.07883817,0.08091286,0.08298755,0.08506224,0.08713692,0.08921161,0.0912863,0.09336099,0.09543568,0.09751037,0.09958506,0.1016597,0.1037344,0.1058091,0.1078838,0.1099585,0.1120332,0.1141079,0.1161826,0.1182573,0.1203319,0.1224066,0.1244813,0.126556,0.1286307,0.1307054,0.1327801,0.1348548,0.1369295,0.1390041,0.1410788,0.1431535,0.1452282,0.1473029,0.1493776,0.1514523,0.153527,0.1556017,0.1576763,0.159751,0.1618257,0.1639004,0.1659751,0.1680498,0.1701245,0.1721992,0.1742738,0.1763485,0.1784232,0.1804979,0.1825726,0.1846473,0.186722,0.1887967,0.1908714,0.192946,0.1950207,0.1970954,0.1991701,0.2012448,0.2033195,0.2053942,0.2074689,0.2095436,0.2116182,0.2136929,0.2157676,0.2178423,0.219917,0.2219917,0.2240664,0.2261411,0.2282158,0.2302904,0.2323651,0.2344398,0.2365145,0.2385892,0.2406639,0.2427386,0.2448133,0.246888,0.2489626,0.2510373,0.253112,0.2551867,0.2572614,0.2593361,0.2614108,0.2634855,0.2655602,0.2676348,0.2697095,0.2717842,0.2738589,0.2759336,0.2780083,0.280083,0.2821577,0.2842323,0.286307,0.2883817,0.2904564,0.2925311,0.2946058,0.2966805,0.2987552,0.3008299,0.3029045,0.3049792,0.3070539,0.3091286,0.3112033,0.313278,0.3153527,0.3174274,0.3195021,0.3215767,0.3236514,0.3257261,0.3278008,0.3298755,0.3319502,0.3340249,0.3360996,0.3381743,0.3402489,0.3423236,0.3443983,0.346473,0.3485477,0.3506224,0.3526971,0.3547718,0.3568465,0.3589211,0.3609958,0.3630705,0.3651452,0.3672199,0.3692946,0.3713693,0.373444,0.3755186,0.3775933,0.379668,0.3817427,0.3838174,0.3858921,0.3879668,0.3900415,0.3921162,0.3941908,0.3962655,0.3983402,0.4004149,0.4024896,0.4045643,0.406639,0.4087137,0.4107884,0.412863,0.4149377,0.4170124,0.4190871,0.4211618,0.4232365,0.4253112,0.4273859,0.4294606,0.4315352,0.4336099,0.4356846,0.4377593,0.439834,0.4419087,0.4439834,0.4460581,0.4481328,0.4502074,0.4522821,0.4543568,0.4564315,0.4585062,0.4605809,0.4626556,0.4647303,0.466805,0.4688796,0.4709543,0.473029,0.4751037,0.4771784,0.4792531,0.4813278,0.4834025,0.4854771,0.4875518,0.4896265,0.4917012,0.4937759,0.4958506,0.4979253,0.5,0.5020747,0.5041494,0.506224,0.5082988,0.5103734,0.5124481,0.5145228,0.5165975,0.5186722,0.5207469,0.5228215,0.5248963,0.5269709,0.5290456,0.5311203,0.533195,0.5352697,0.5373444,0.5394191,0.5414938,0.5435684,0.5456432,0.5477178,0.5497925,0.5518672,0.5539419,0.5560166,0.5580913,0.5601659,0.5622407,0.5643153,0.56639,0.5684647,0.5705394,0.5726141,0.5746888,0.5767635,0.5788382,0.5809128,0.5829875,0.5850622,0.5871369,0.5892116,0.5912863,0.593361,0.5954357,0.5975103,0.5995851,0.6016597,0.6037344,0.6058091,0.6078838,0.6099585,0.6120332,0.6141078,0.6161826,0.6182572,0.6203319,0.6224066,0.6244813,0.626556,0.6286307,0.6307054,0.6327801,0.6348547,0.6369295,0.6390041,0.6410788,0.6431535,0.6452282,0.6473029,0.6493776,0.6514522,0.653527,0.6556016,0.6576763,0.659751,0.6618257,0.6639004,0.6659751,0.6680498,0.6701245,0.6721991,0.6742738,0.6763485,0.6784232,0.6804979,0.6825726,0.6846473,0.686722,0.6887966,0.6908714,0.692946,0.6950207,0.6970954,0.6991701,0.7012448,0.7033195,0.7053941,0.7074689,0.7095435,0.7116182,0.7136929,0.7157676,0.7178423,0.719917,0.7219917,0.7240664,0.726141,0.7282158,0.7302904,0.7323651,0.7344398,0.7365145,0.7385892,0.7406639,0.7427385,0.7448133,0.7468879,0.7489626,0.7510373,0.753112,0.7551867,0.7572614,0.7593361,0.7614108,0.7634854,0.7655602,0.7676348,0.7697095,0.7717842,0.7738589,0.7759336,0.7780083,0.7800829,0.7821577,0.7842323,0.786307,0.7883817,0.7904564,0.7925311,0.7946058,0.7966805,0.7987552,0.8008298,0.8029045,0.8049792,0.8070539,0.8091286,0.8112033,0.813278,0.8153527,0.8174273,0.8195021,0.8215767,0.8236514,0.8257261,0.8278008,0.8298755,0.8319502,0.8340248,0.8360996,0.8381742,0.8402489,0.8423236,0.8443983,0.846473,0.8485477,0.8506224,0.8526971,0.8547717,0.8568465,0.8589211,0.8609958,0.8630705,0.8651452,0.8672199,0.8692946,0.8713692,0.873444,0.8755186,0.8775933,0.879668,0.8817427,0.8838174,0.8858921,0.8879668,0.8900415,0.8921161,0.8941908,0.8962655,0.8983402,0.9004149,0.9024896,0.9045643,0.906639,0.9087136,0.9107884,0.912863,0.9149377,0.9170124,0.9190871,0.9211618,0.9232365,0.9253111,0.9273859,0.9294605,0.9315352,0.9336099,0.9356846,0.9377593,0.939834,0.9419087,0.9439834,0.946058,0.9481328,0.9502074,0.9522821,0.9543568,0.9564315,0.9585062,0.9605809,0.9626555,0.9647303,0.9668049,0.9688796,0.9709543,0.973029,0.9751037,0.9771784,0.9792531,0.9813278,0.9834024,0.9854771,0.9875518,0.9896265,0.9917012,0.9937759,0.9958506,0.9979253]

Group244.children.append(OrientationInterpolator248)
OrientationInterpolator249 = x3d.OrientationInterpolator()
OrientationInterpolator249.DEF = "Keyframe_l_shoulder"
OrientationInterpolator249.key = [0,0.002074689,0.004149377,0.006224066,0.008298755,0.01037344,0.01244813,0.01452282,0.01659751,0.0186722,0.02074689,0.02282158,0.02489626,0.02697095,0.02904564,0.03112033,0.03319502,0.03526971,0.0373444,0.03941908,0.04149377,0.04356846,0.04564315,0.04771784,0.04979253,0.05186722,0.05394191,0.05601659,0.05809128,0.06016597,0.06224066,0.06431535,0.06639004,0.06846473,0.07053941,0.0726141,0.07468879,0.07676348,0.07883817,0.08091286,0.08298755,0.08506224,0.08713692,0.08921161,0.0912863,0.09336099,0.09543568,0.09751037,0.09958506,0.1016597,0.1037344,0.1058091,0.1078838,0.1099585,0.1120332,0.1141079,0.1161826,0.1182573,0.1203319,0.1224066,0.1244813,0.126556,0.1286307,0.1307054,0.1327801,0.1348548,0.1369295,0.1390041,0.1410788,0.1431535,0.1452282,0.1473029,0.1493776,0.1514523,0.153527,0.1556017,0.1576763,0.159751,0.1618257,0.1639004,0.1659751,0.1680498,0.1701245,0.1721992,0.1742738,0.1763485,0.1784232,0.1804979,0.1825726,0.1846473,0.186722,0.1887967,0.1908714,0.192946,0.1950207,0.1970954,0.1991701,0.2012448,0.2033195,0.2053942,0.2074689,0.2095436,0.2116182,0.2136929,0.2157676,0.2178423,0.219917,0.2219917,0.2240664,0.2261411,0.2282158,0.2302904,0.2323651,0.2344398,0.2365145,0.2385892,0.2406639,0.2427386,0.2448133,0.246888,0.2489626,0.2510373,0.253112,0.2551867,0.2572614,0.2593361,0.2614108,0.2634855,0.2655602,0.2676348,0.2697095,0.2717842,0.2738589,0.2759336,0.2780083,0.280083,0.2821577,0.2842323,0.286307,0.2883817,0.2904564,0.2925311,0.2946058,0.2966805,0.2987552,0.3008299,0.3029045,0.3049792,0.3070539,0.3091286,0.3112033,0.313278,0.3153527,0.3174274,0.3195021,0.3215767,0.3236514,0.3257261,0.3278008,0.3298755,0.3319502,0.3340249,0.3360996,0.3381743,0.3402489,0.3423236,0.3443983,0.346473,0.3485477,0.3506224,0.3526971,0.3547718,0.3568465,0.3589211,0.3609958,0.3630705,0.3651452,0.3672199,0.3692946,0.3713693,0.373444,0.3755186,0.3775933,0.379668,0.3817427,0.3838174,0.3858921,0.3879668,0.3900415,0.3921162,0.3941908,0.3962655,0.3983402,0.4004149,0.4024896,0.4045643,0.406639,0.4087137,0.4107884,0.412863,0.4149377,0.4170124,0.4190871,0.4211618,0.4232365,0.4253112,0.4273859,0.4294606,0.4315352,0.4336099,0.4356846,0.4377593,0.439834,0.4419087,0.4439834,0.4460581,0.4481328,0.4502074,0.4522821,0.4543568,0.4564315,0.4585062,0.4605809,0.4626556,0.4647303,0.466805,0.4688796,0.4709543,0.473029,0.4751037,0.4771784,0.4792531,0.4813278,0.4834025,0.4854771,0.4875518,0.4896265,0.4917012,0.4937759,0.4958506,0.4979253,0.5,0.5020747,0.5041494,0.506224,0.5082988,0.5103734,0.5124481,0.5145228,0.5165975,0.5186722,0.5207469,0.5228215,0.5248963,0.5269709,0.5290456,0.5311203,0.533195,0.5352697,0.5373444,0.5394191,0.5414938,0.5435684,0.5456432,0.5477178,0.5497925,0.5518672,0.5539419,0.5560166,0.5580913,0.5601659,0.5622407,0.5643153,0.56639,0.5684647,0.5705394,0.5726141,0.5746888,0.5767635,0.5788382,0.5809128,0.5829875,0.5850622,0.5871369,0.5892116,0.5912863,0.593361,0.5954357,0.5975103,0.5995851,0.6016597,0.6037344,0.6058091,0.6078838,0.6099585,0.6120332,0.6141078,0.6161826,0.6182572,0.6203319,0.6224066,0.6244813,0.626556,0.6286307,0.6307054,0.6327801,0.6348547,0.6369295,0.6390041,0.6410788,0.6431535,0.6452282,0.6473029,0.6493776,0.6514522,0.653527,0.6556016,0.6576763,0.659751,0.6618257,0.6639004,0.6659751,0.6680498,0.6701245,0.6721991,0.6742738,0.6763485,0.6784232,0.6804979,0.6825726,0.6846473,0.686722,0.6887966,0.6908714,0.692946,0.6950207,0.6970954,0.6991701,0.7012448,0.7033195,0.7053941,0.7074689,0.7095435,0.7116182,0.7136929,0.7157676,0.7178423,0.719917,0.7219917,0.7240664,0.726141,0.7282158,0.7302904,0.7323651,0.7344398,0.7365145,0.7385892,0.7406639,0.7427385,0.7448133,0.7468879,0.7489626,0.7510373,0.753112,0.7551867,0.7572614,0.7593361,0.7614108,0.7634854,0.7655602,0.7676348,0.7697095,0.7717842,0.7738589,0.7759336,0.7780083,0.7800829,0.7821577,0.7842323,0.786307,0.7883817,0.7904564,0.7925311,0.7946058,0.7966805,0.7987552,0.8008298,0.8029045,0.8049792,0.8070539,0.8091286,0.8112033,0.813278,0.8153527,0.8174273,0.8195021,0.8215767,0.8236514,0.8257261,0.8278008,0.8298755,0.8319502,0.8340248,0.8360996,0.8381742,0.8402489,0.8423236,0.8443983,0.846473,0.8485477,0.8506224,0.8526971,0.8547717,0.8568465,0.8589211,0.8609958,0.8630705,0.8651452,0.8672199,0.8692946,0.8713692,0.873444,0.8755186,0.8775933,0.879668,0.8817427,0.8838174,0.8858921,0.8879668,0.8900415,0.8921161,0.8941908,0.8962655,0.8983402,0.9004149,0.9024896,0.9045643,0.906639,0.9087136,0.9107884,0.912863,0.9149377,0.9170124,0.9190871,0.9211618,0.9232365,0.9253111,0.9273859,0.9294605,0.9315352,0.9336099,0.9356846,0.9377593,0.939834,0.9419087,0.9439834,0.946058,0.9481328,0.9502074,0.9522821,0.9543568,0.9564315,0.9585062,0.9605809,0.9626555,0.9647303,0.9668049,0.9688796,0.9709543,0.973029,0.9751037,0.9771784,0.9792531,0.9813278,0.9834024,0.9854771,0.9875518,0.9896265,0.9917012,0.9937759,0.9958506,0.9979253]

Group244.children.append(OrientationInterpolator249)
OrientationInterpolator250 = x3d.OrientationInterpolator()
OrientationInterpolator250.DEF = "Keyframe_l_elbow"
OrientationInterpolator250.key = [0,0.002074689,0.004149377,0.006224066,0.008298755,0.01037344,0.01244813,0.01452282,0.01659751,0.0186722,0.02074689,0.02282158,0.02489626,0.02697095,0.02904564,0.03112033,0.03319502,0.03526971,0.0373444,0.03941908,0.04149377,0.04356846,0.04564315,0.04771784,0.04979253,0.05186722,0.05394191,0.05601659,0.05809128,0.06016597,0.06224066,0.06431535,0.06639004,0.06846473,0.07053941,0.0726141,0.07468879,0.07676348,0.07883817,0.08091286,0.08298755,0.08506224,0.08713692,0.08921161,0.0912863,0.09336099,0.09543568,0.09751037,0.09958506,0.1016597,0.1037344,0.1058091,0.1078838,0.1099585,0.1120332,0.1141079,0.1161826,0.1182573,0.1203319,0.1224066,0.1244813,0.126556,0.1286307,0.1307054,0.1327801,0.1348548,0.1369295,0.1390041,0.1410788,0.1431535,0.1452282,0.1473029,0.1493776,0.1514523,0.153527,0.1556017,0.1576763,0.159751,0.1618257,0.1639004,0.1659751,0.1680498,0.1701245,0.1721992,0.1742738,0.1763485,0.1784232,0.1804979,0.1825726,0.1846473,0.186722,0.1887967,0.1908714,0.192946,0.1950207,0.1970954,0.1991701,0.2012448,0.2033195,0.2053942,0.2074689,0.2095436,0.2116182,0.2136929,0.2157676,0.2178423,0.219917,0.2219917,0.2240664,0.2261411,0.2282158,0.2302904,0.2323651,0.2344398,0.2365145,0.2385892,0.2406639,0.2427386,0.2448133,0.246888,0.2489626,0.2510373,0.253112,0.2551867,0.2572614,0.2593361,0.2614108,0.2634855,0.2655602,0.2676348,0.2697095,0.2717842,0.2738589,0.2759336,0.2780083,0.280083,0.2821577,0.2842323,0.286307,0.2883817,0.2904564,0.2925311,0.2946058,0.2966805,0.2987552,0.3008299,0.3029045,0.3049792,0.3070539,0.3091286,0.3112033,0.313278,0.3153527,0.3174274,0.3195021,0.3215767,0.3236514,0.3257261,0.3278008,0.3298755,0.3319502,0.3340249,0.3360996,0.3381743,0.3402489,0.3423236,0.3443983,0.346473,0.3485477,0.3506224,0.3526971,0.3547718,0.3568465,0.3589211,0.3609958,0.3630705,0.3651452,0.3672199,0.3692946,0.3713693,0.373444,0.3755186,0.3775933,0.379668,0.3817427,0.3838174,0.3858921,0.3879668,0.3900415,0.3921162,0.3941908,0.3962655,0.3983402,0.4004149,0.4024896,0.4045643,0.406639,0.4087137,0.4107884,0.412863,0.4149377,0.4170124,0.4190871,0.4211618,0.4232365,0.4253112,0.4273859,0.4294606,0.4315352,0.4336099,0.4356846,0.4377593,0.439834,0.4419087,0.4439834,0.4460581,0.4481328,0.4502074,0.4522821,0.4543568,0.4564315,0.4585062,0.4605809,0.4626556,0.4647303,0.466805,0.4688796,0.4709543,0.473029,0.4751037,0.4771784,0.4792531,0.4813278,0.4834025,0.4854771,0.4875518,0.4896265,0.4917012,0.4937759,0.4958506,0.4979253,0.5,0.5020747,0.5041494,0.506224,0.5082988,0.5103734,0.5124481,0.5145228,0.5165975,0.5186722,0.5207469,0.5228215,0.5248963,0.5269709,0.5290456,0.5311203,0.533195,0.5352697,0.5373444,0.5394191,0.5414938,0.5435684,0.5456432,0.5477178,0.5497925,0.5518672,0.5539419,0.5560166,0.5580913,0.5601659,0.5622407,0.5643153,0.56639,0.5684647,0.5705394,0.5726141,0.5746888,0.5767635,0.5788382,0.5809128,0.5829875,0.5850622,0.5871369,0.5892116,0.5912863,0.593361,0.5954357,0.5975103,0.5995851,0.6016597,0.6037344,0.6058091,0.6078838,0.6099585,0.6120332,0.6141078,0.6161826,0.6182572,0.6203319,0.6224066,0.6244813,0.626556,0.6286307,0.6307054,0.6327801,0.6348547,0.6369295,0.6390041,0.6410788,0.6431535,0.6452282,0.6473029,0.6493776,0.6514522,0.653527,0.6556016,0.6576763,0.659751,0.6618257,0.6639004,0.6659751,0.6680498,0.6701245,0.6721991,0.6742738,0.6763485,0.6784232,0.6804979,0.6825726,0.6846473,0.686722,0.6887966,0.6908714,0.692946,0.6950207,0.6970954,0.6991701,0.7012448,0.7033195,0.7053941,0.7074689,0.7095435,0.7116182,0.7136929,0.7157676,0.7178423,0.719917,0.7219917,0.7240664,0.726141,0.7282158,0.7302904,0.7323651,0.7344398,0.7365145,0.7385892,0.7406639,0.7427385,0.7448133,0.7468879,0.7489626,0.7510373,0.753112,0.7551867,0.7572614,0.7593361,0.7614108,0.7634854,0.7655602,0.7676348,0.7697095,0.7717842,0.7738589,0.7759336,0.7780083,0.7800829,0.7821577,0.7842323,0.786307,0.7883817,0.7904564,0.7925311,0.7946058,0.7966805,0.7987552,0.8008298,0.8029045,0.8049792,0.8070539,0.8091286,0.8112033,0.813278,0.8153527,0.8174273,0.8195021,0.8215767,0.8236514,0.8257261,0.8278008,0.8298755,0.8319502,0.8340248,0.8360996,0.8381742,0.8402489,0.8423236,0.8443983,0.846473,0.8485477,0.8506224,0.8526971,0.8547717,0.8568465,0.8589211,0.8609958,0.8630705,0.8651452,0.8672199,0.8692946,0.8713692,0.873444,0.8755186,0.8775933,0.879668,0.8817427,0.8838174,0.8858921,0.8879668,0.8900415,0.8921161,0.8941908,0.8962655,0.8983402,0.9004149,0.9024896,0.9045643,0.906639,0.9087136,0.9107884,0.912863,0.9149377,0.9170124,0.9190871,0.9211618,0.9232365,0.9253111,0.9273859,0.9294605,0.9315352,0.9336099,0.9356846,0.9377593,0.939834,0.9419087,0.9439834,0.946058,0.9481328,0.9502074,0.9522821,0.9543568,0.9564315,0.9585062,0.9605809,0.9626555,0.9647303,0.9668049,0.9688796,0.9709543,0.973029,0.9751037,0.9771784,0.9792531,0.9813278,0.9834024,0.9854771,0.9875518,0.9896265,0.9917012,0.9937759,0.9958506,0.9979253]

Group244.children.append(OrientationInterpolator250)
OrientationInterpolator251 = x3d.OrientationInterpolator()
OrientationInterpolator251.DEF = "Keyframe_l_radiocarpal"
OrientationInterpolator251.key = [0,0.002074689,0.004149377,0.006224066,0.008298755,0.01037344,0.01244813,0.01452282,0.01659751,0.0186722,0.02074689,0.02282158,0.02489626,0.02697095,0.02904564,0.03112033,0.03319502,0.03526971,0.0373444,0.03941908,0.04149377,0.04356846,0.04564315,0.04771784,0.04979253,0.05186722,0.05394191,0.05601659,0.05809128,0.06016597,0.06224066,0.06431535,0.06639004,0.06846473,0.07053941,0.0726141,0.07468879,0.07676348,0.07883817,0.08091286,0.08298755,0.08506224,0.08713692,0.08921161,0.0912863,0.09336099,0.09543568,0.09751037,0.09958506,0.1016597,0.1037344,0.1058091,0.1078838,0.1099585,0.1120332,0.1141079,0.1161826,0.1182573,0.1203319,0.1224066,0.1244813,0.126556,0.1286307,0.1307054,0.1327801,0.1348548,0.1369295,0.1390041,0.1410788,0.1431535,0.1452282,0.1473029,0.1493776,0.1514523,0.153527,0.1556017,0.1576763,0.159751,0.1618257,0.1639004,0.1659751,0.1680498,0.1701245,0.1721992,0.1742738,0.1763485,0.1784232,0.1804979,0.1825726,0.1846473,0.186722,0.1887967,0.1908714,0.192946,0.1950207,0.1970954,0.1991701,0.2012448,0.2033195,0.2053942,0.2074689,0.2095436,0.2116182,0.2136929,0.2157676,0.2178423,0.219917,0.2219917,0.2240664,0.2261411,0.2282158,0.2302904,0.2323651,0.2344398,0.2365145,0.2385892,0.2406639,0.2427386,0.2448133,0.246888,0.2489626,0.2510373,0.253112,0.2551867,0.2572614,0.2593361,0.2614108,0.2634855,0.2655602,0.2676348,0.2697095,0.2717842,0.2738589,0.2759336,0.2780083,0.280083,0.2821577,0.2842323,0.286307,0.2883817,0.2904564,0.2925311,0.2946058,0.2966805,0.2987552,0.3008299,0.3029045,0.3049792,0.3070539,0.3091286,0.3112033,0.313278,0.3153527,0.3174274,0.3195021,0.3215767,0.3236514,0.3257261,0.3278008,0.3298755,0.3319502,0.3340249,0.3360996,0.3381743,0.3402489,0.3423236,0.3443983,0.346473,0.3485477,0.3506224,0.3526971,0.3547718,0.3568465,0.3589211,0.3609958,0.3630705,0.3651452,0.3672199,0.3692946,0.3713693,0.373444,0.3755186,0.3775933,0.379668,0.3817427,0.3838174,0.3858921,0.3879668,0.3900415,0.3921162,0.3941908,0.3962655,0.3983402,0.4004149,0.4024896,0.4045643,0.406639,0.4087137,0.4107884,0.412863,0.4149377,0.4170124,0.4190871,0.4211618,0.4232365,0.4253112,0.4273859,0.4294606,0.4315352,0.4336099,0.4356846,0.4377593,0.439834,0.4419087,0.4439834,0.4460581,0.4481328,0.4502074,0.4522821,0.4543568,0.4564315,0.4585062,0.4605809,0.4626556,0.4647303,0.466805,0.4688796,0.4709543,0.473029,0.4751037,0.4771784,0.4792531,0.4813278,0.4834025,0.4854771,0.4875518,0.4896265,0.4917012,0.4937759,0.4958506,0.4979253,0.5,0.5020747,0.5041494,0.506224,0.5082988,0.5103734,0.5124481,0.5145228,0.5165975,0.5186722,0.5207469,0.5228215,0.5248963,0.5269709,0.5290456,0.5311203,0.533195,0.5352697,0.5373444,0.5394191,0.5414938,0.5435684,0.5456432,0.5477178,0.5497925,0.5518672,0.5539419,0.5560166,0.5580913,0.5601659,0.5622407,0.5643153,0.56639,0.5684647,0.5705394,0.5726141,0.5746888,0.5767635,0.5788382,0.5809128,0.5829875,0.5850622,0.5871369,0.5892116,0.5912863,0.593361,0.5954357,0.5975103,0.5995851,0.6016597,0.6037344,0.6058091,0.6078838,0.6099585,0.6120332,0.6141078,0.6161826,0.6182572,0.6203319,0.6224066,0.6244813,0.626556,0.6286307,0.6307054,0.6327801,0.6348547,0.6369295,0.6390041,0.6410788,0.6431535,0.6452282,0.6473029,0.6493776,0.6514522,0.653527,0.6556016,0.6576763,0.659751,0.6618257,0.6639004,0.6659751,0.6680498,0.6701245,0.6721991,0.6742738,0.6763485,0.6784232,0.6804979,0.6825726,0.6846473,0.686722,0.6887966,0.6908714,0.692946,0.6950207,0.6970954,0.6991701,0.7012448,0.7033195,0.7053941,0.7074689,0.7095435,0.7116182,0.7136929,0.7157676,0.7178423,0.719917,0.7219917,0.7240664,0.726141,0.7282158,0.7302904,0.7323651,0.7344398,0.7365145,0.7385892,0.7406639,0.7427385,0.7448133,0.7468879,0.7489626,0.7510373,0.753112,0.7551867,0.7572614,0.7593361,0.7614108,0.7634854,0.7655602,0.7676348,0.7697095,0.7717842,0.7738589,0.7759336,0.7780083,0.7800829,0.7821577,0.7842323,0.786307,0.7883817,0.7904564,0.7925311,0.7946058,0.7966805,0.7987552,0.8008298,0.8029045,0.8049792,0.8070539,0.8091286,0.8112033,0.813278,0.8153527,0.8174273,0.8195021,0.8215767,0.8236514,0.8257261,0.8278008,0.8298755,0.8319502,0.8340248,0.8360996,0.8381742,0.8402489,0.8423236,0.8443983,0.846473,0.8485477,0.8506224,0.8526971,0.8547717,0.8568465,0.8589211,0.8609958,0.8630705,0.8651452,0.8672199,0.8692946,0.8713692,0.873444,0.8755186,0.8775933,0.879668,0.8817427,0.8838174,0.8858921,0.8879668,0.8900415,0.8921161,0.8941908,0.8962655,0.8983402,0.9004149,0.9024896,0.9045643,0.906639,0.9087136,0.9107884,0.912863,0.9149377,0.9170124,0.9190871,0.9211618,0.9232365,0.9253111,0.9273859,0.9294605,0.9315352,0.9336099,0.9356846,0.9377593,0.939834,0.9419087,0.9439834,0.946058,0.9481328,0.9502074,0.9522821,0.9543568,0.9564315,0.9585062,0.9605809,0.9626555,0.9647303,0.9668049,0.9688796,0.9709543,0.973029,0.9751037,0.9771784,0.9792531,0.9813278,0.9834024,0.9854771,0.9875518,0.9896265,0.9917012,0.9937759,0.9958506,0.9979253]

Group244.children.append(OrientationInterpolator251)
OrientationInterpolator252 = x3d.OrientationInterpolator()
OrientationInterpolator252.DEF = "Keyframe_r_shoulder"
OrientationInterpolator252.key = [0,0.002074689,0.004149377,0.006224066,0.008298755,0.01037344,0.01244813,0.01452282,0.01659751,0.0186722,0.02074689,0.02282158,0.02489626,0.02697095,0.02904564,0.03112033,0.03319502,0.03526971,0.0373444,0.03941908,0.04149377,0.04356846,0.04564315,0.04771784,0.04979253,0.05186722,0.05394191,0.05601659,0.05809128,0.06016597,0.06224066,0.06431535,0.06639004,0.06846473,0.07053941,0.0726141,0.07468879,0.07676348,0.07883817,0.08091286,0.08298755,0.08506224,0.08713692,0.08921161,0.0912863,0.09336099,0.09543568,0.09751037,0.09958506,0.1016597,0.1037344,0.1058091,0.1078838,0.1099585,0.1120332,0.1141079,0.1161826,0.1182573,0.1203319,0.1224066,0.1244813,0.126556,0.1286307,0.1307054,0.1327801,0.1348548,0.1369295,0.1390041,0.1410788,0.1431535,0.1452282,0.1473029,0.1493776,0.1514523,0.153527,0.1556017,0.1576763,0.159751,0.1618257,0.1639004,0.1659751,0.1680498,0.1701245,0.1721992,0.1742738,0.1763485,0.1784232,0.1804979,0.1825726,0.1846473,0.186722,0.1887967,0.1908714,0.192946,0.1950207,0.1970954,0.1991701,0.2012448,0.2033195,0.2053942,0.2074689,0.2095436,0.2116182,0.2136929,0.2157676,0.2178423,0.219917,0.2219917,0.2240664,0.2261411,0.2282158,0.2302904,0.2323651,0.2344398,0.2365145,0.2385892,0.2406639,0.2427386,0.2448133,0.246888,0.2489626,0.2510373,0.253112,0.2551867,0.2572614,0.2593361,0.2614108,0.2634855,0.2655602,0.2676348,0.2697095,0.2717842,0.2738589,0.2759336,0.2780083,0.280083,0.2821577,0.2842323,0.286307,0.2883817,0.2904564,0.2925311,0.2946058,0.2966805,0.2987552,0.3008299,0.3029045,0.3049792,0.3070539,0.3091286,0.3112033,0.313278,0.3153527,0.3174274,0.3195021,0.3215767,0.3236514,0.3257261,0.3278008,0.3298755,0.3319502,0.3340249,0.3360996,0.3381743,0.3402489,0.3423236,0.3443983,0.346473,0.3485477,0.3506224,0.3526971,0.3547718,0.3568465,0.3589211,0.3609958,0.3630705,0.3651452,0.3672199,0.3692946,0.3713693,0.373444,0.3755186,0.3775933,0.379668,0.3817427,0.3838174,0.3858921,0.3879668,0.3900415,0.3921162,0.3941908,0.3962655,0.3983402,0.4004149,0.4024896,0.4045643,0.406639,0.4087137,0.4107884,0.412863,0.4149377,0.4170124,0.4190871,0.4211618,0.4232365,0.4253112,0.4273859,0.4294606,0.4315352,0.4336099,0.4356846,0.4377593,0.439834,0.4419087,0.4439834,0.4460581,0.4481328,0.4502074,0.4522821,0.4543568,0.4564315,0.4585062,0.4605809,0.4626556,0.4647303,0.466805,0.4688796,0.4709543,0.473029,0.4751037,0.4771784,0.4792531,0.4813278,0.4834025,0.4854771,0.4875518,0.4896265,0.4917012,0.4937759,0.4958506,0.4979253,0.5,0.5020747,0.5041494,0.506224,0.5082988,0.5103734,0.5124481,0.5145228,0.5165975,0.5186722,0.5207469,0.5228215,0.5248963,0.5269709,0.5290456,0.5311203,0.533195,0.5352697,0.5373444,0.5394191,0.5414938,0.5435684,0.5456432,0.5477178,0.5497925,0.5518672,0.5539419,0.5560166,0.5580913,0.5601659,0.5622407,0.5643153,0.56639,0.5684647,0.5705394,0.5726141,0.5746888,0.5767635,0.5788382,0.5809128,0.5829875,0.5850622,0.5871369,0.5892116,0.5912863,0.593361,0.5954357,0.5975103,0.5995851,0.6016597,0.6037344,0.6058091,0.6078838,0.6099585,0.6120332,0.6141078,0.6161826,0.6182572,0.6203319,0.6224066,0.6244813,0.626556,0.6286307,0.6307054,0.6327801,0.6348547,0.6369295,0.6390041,0.6410788,0.6431535,0.6452282,0.6473029,0.6493776,0.6514522,0.653527,0.6556016,0.6576763,0.659751,0.6618257,0.6639004,0.6659751,0.6680498,0.6701245,0.6721991,0.6742738,0.6763485,0.6784232,0.6804979,0.6825726,0.6846473,0.686722,0.6887966,0.6908714,0.692946,0.6950207,0.6970954,0.6991701,0.7012448,0.7033195,0.7053941,0.7074689,0.7095435,0.7116182,0.7136929,0.7157676,0.7178423,0.719917,0.7219917,0.7240664,0.726141,0.7282158,0.7302904,0.7323651,0.7344398,0.7365145,0.7385892,0.7406639,0.7427385,0.7448133,0.7468879,0.7489626,0.7510373,0.753112,0.7551867,0.7572614,0.7593361,0.7614108,0.7634854,0.7655602,0.7676348,0.7697095,0.7717842,0.7738589,0.7759336,0.7780083,0.7800829,0.7821577,0.7842323,0.786307,0.7883817,0.7904564,0.7925311,0.7946058,0.7966805,0.7987552,0.8008298,0.8029045,0.8049792,0.8070539,0.8091286,0.8112033,0.813278,0.8153527,0.8174273,0.8195021,0.8215767,0.8236514,0.8257261,0.8278008,0.8298755,0.8319502,0.8340248,0.8360996,0.8381742,0.8402489,0.8423236,0.8443983,0.846473,0.8485477,0.8506224,0.8526971,0.8547717,0.8568465,0.8589211,0.8609958,0.8630705,0.8651452,0.8672199,0.8692946,0.8713692,0.873444,0.8755186,0.8775933,0.879668,0.8817427,0.8838174,0.8858921,0.8879668,0.8900415,0.8921161,0.8941908,0.8962655,0.8983402,0.9004149,0.9024896,0.9045643,0.906639,0.9087136,0.9107884,0.912863,0.9149377,0.9170124,0.9190871,0.9211618,0.9232365,0.9253111,0.9273859,0.9294605,0.9315352,0.9336099,0.9356846,0.9377593,0.939834,0.9419087,0.9439834,0.946058,0.9481328,0.9502074,0.9522821,0.9543568,0.9564315,0.9585062,0.9605809,0.9626555,0.9647303,0.9668049,0.9688796,0.9709543,0.973029,0.9751037,0.9771784,0.9792531,0.9813278,0.9834024,0.9854771,0.9875518,0.9896265,0.9917012,0.9937759,0.9958506,0.9979253]

Group244.children.append(OrientationInterpolator252)
OrientationInterpolator253 = x3d.OrientationInterpolator()
OrientationInterpolator253.DEF = "Keyframe_r_elbow"
OrientationInterpolator253.key = [0,0.002074689,0.004149377,0.006224066,0.008298755,0.01037344,0.01244813,0.01452282,0.01659751,0.0186722,0.02074689,0.02282158,0.02489626,0.02697095,0.02904564,0.03112033,0.03319502,0.03526971,0.0373444,0.03941908,0.04149377,0.04356846,0.04564315,0.04771784,0.04979253,0.05186722,0.05394191,0.05601659,0.05809128,0.06016597,0.06224066,0.06431535,0.06639004,0.06846473,0.07053941,0.0726141,0.07468879,0.07676348,0.07883817,0.08091286,0.08298755,0.08506224,0.08713692,0.08921161,0.0912863,0.09336099,0.09543568,0.09751037,0.09958506,0.1016597,0.1037344,0.1058091,0.1078838,0.1099585,0.1120332,0.1141079,0.1161826,0.1182573,0.1203319,0.1224066,0.1244813,0.126556,0.1286307,0.1307054,0.1327801,0.1348548,0.1369295,0.1390041,0.1410788,0.1431535,0.1452282,0.1473029,0.1493776,0.1514523,0.153527,0.1556017,0.1576763,0.159751,0.1618257,0.1639004,0.1659751,0.1680498,0.1701245,0.1721992,0.1742738,0.1763485,0.1784232,0.1804979,0.1825726,0.1846473,0.186722,0.1887967,0.1908714,0.192946,0.1950207,0.1970954,0.1991701,0.2012448,0.2033195,0.2053942,0.2074689,0.2095436,0.2116182,0.2136929,0.2157676,0.2178423,0.219917,0.2219917,0.2240664,0.2261411,0.2282158,0.2302904,0.2323651,0.2344398,0.2365145,0.2385892,0.2406639,0.2427386,0.2448133,0.246888,0.2489626,0.2510373,0.253112,0.2551867,0.2572614,0.2593361,0.2614108,0.2634855,0.2655602,0.2676348,0.2697095,0.2717842,0.2738589,0.2759336,0.2780083,0.280083,0.2821577,0.2842323,0.286307,0.2883817,0.2904564,0.2925311,0.2946058,0.2966805,0.2987552,0.3008299,0.3029045,0.3049792,0.3070539,0.3091286,0.3112033,0.313278,0.3153527,0.3174274,0.3195021,0.3215767,0.3236514,0.3257261,0.3278008,0.3298755,0.3319502,0.3340249,0.3360996,0.3381743,0.3402489,0.3423236,0.3443983,0.346473,0.3485477,0.3506224,0.3526971,0.3547718,0.3568465,0.3589211,0.3609958,0.3630705,0.3651452,0.3672199,0.3692946,0.3713693,0.373444,0.3755186,0.3775933,0.379668,0.3817427,0.3838174,0.3858921,0.3879668,0.3900415,0.3921162,0.3941908,0.3962655,0.3983402,0.4004149,0.4024896,0.4045643,0.406639,0.4087137,0.4107884,0.412863,0.4149377,0.4170124,0.4190871,0.4211618,0.4232365,0.4253112,0.4273859,0.4294606,0.4315352,0.4336099,0.4356846,0.4377593,0.439834,0.4419087,0.4439834,0.4460581,0.4481328,0.4502074,0.4522821,0.4543568,0.4564315,0.4585062,0.4605809,0.4626556,0.4647303,0.466805,0.4688796,0.4709543,0.473029,0.4751037,0.4771784,0.4792531,0.4813278,0.4834025,0.4854771,0.4875518,0.4896265,0.4917012,0.4937759,0.4958506,0.4979253,0.5,0.5020747,0.5041494,0.506224,0.5082988,0.5103734,0.5124481,0.5145228,0.5165975,0.5186722,0.5207469,0.5228215,0.5248963,0.5269709,0.5290456,0.5311203,0.533195,0.5352697,0.5373444,0.5394191,0.5414938,0.5435684,0.5456432,0.5477178,0.5497925,0.5518672,0.5539419,0.5560166,0.5580913,0.5601659,0.5622407,0.5643153,0.56639,0.5684647,0.5705394,0.5726141,0.5746888,0.5767635,0.5788382,0.5809128,0.5829875,0.5850622,0.5871369,0.5892116,0.5912863,0.593361,0.5954357,0.5975103,0.5995851,0.6016597,0.6037344,0.6058091,0.6078838,0.6099585,0.6120332,0.6141078,0.6161826,0.6182572,0.6203319,0.6224066,0.6244813,0.626556,0.6286307,0.6307054,0.6327801,0.6348547,0.6369295,0.6390041,0.6410788,0.6431535,0.6452282,0.6473029,0.6493776,0.6514522,0.653527,0.6556016,0.6576763,0.659751,0.6618257,0.6639004,0.6659751,0.6680498,0.6701245,0.6721991,0.6742738,0.6763485,0.6784232,0.6804979,0.6825726,0.6846473,0.686722,0.6887966,0.6908714,0.692946,0.6950207,0.6970954,0.6991701,0.7012448,0.7033195,0.7053941,0.7074689,0.7095435,0.7116182,0.7136929,0.7157676,0.7178423,0.719917,0.7219917,0.7240664,0.726141,0.7282158,0.7302904,0.7323651,0.7344398,0.7365145,0.7385892,0.7406639,0.7427385,0.7448133,0.7468879,0.7489626,0.7510373,0.753112,0.7551867,0.7572614,0.7593361,0.7614108,0.7634854,0.7655602,0.7676348,0.7697095,0.7717842,0.7738589,0.7759336,0.7780083,0.7800829,0.7821577,0.7842323,0.786307,0.7883817,0.7904564,0.7925311,0.7946058,0.7966805,0.7987552,0.8008298,0.8029045,0.8049792,0.8070539,0.8091286,0.8112033,0.813278,0.8153527,0.8174273,0.8195021,0.8215767,0.8236514,0.8257261,0.8278008,0.8298755,0.8319502,0.8340248,0.8360996,0.8381742,0.8402489,0.8423236,0.8443983,0.846473,0.8485477,0.8506224,0.8526971,0.8547717,0.8568465,0.8589211,0.8609958,0.8630705,0.8651452,0.8672199,0.8692946,0.8713692,0.873444,0.8755186,0.8775933,0.879668,0.8817427,0.8838174,0.8858921,0.8879668,0.8900415,0.8921161,0.8941908,0.8962655,0.8983402,0.9004149,0.9024896,0.9045643,0.906639,0.9087136,0.9107884,0.912863,0.9149377,0.9170124,0.9190871,0.9211618,0.9232365,0.9253111,0.9273859,0.9294605,0.9315352,0.9336099,0.9356846,0.9377593,0.939834,0.9419087,0.9439834,0.946058,0.9481328,0.9502074,0.9522821,0.9543568,0.9564315,0.9585062,0.9605809,0.9626555,0.9647303,0.9668049,0.9688796,0.9709543,0.973029,0.9751037,0.9771784,0.9792531,0.9813278,0.9834024,0.9854771,0.9875518,0.9896265,0.9917012,0.9937759,0.9958506,0.9979253]

Group244.children.append(OrientationInterpolator253)
OrientationInterpolator254 = x3d.OrientationInterpolator()
OrientationInterpolator254.DEF = "Keyframe_r_radiocarpal"
OrientationInterpolator254.key = [0,0.002074689,0.004149377,0.006224066,0.008298755,0.01037344,0.01244813,0.01452282,0.01659751,0.0186722,0.02074689,0.02282158,0.02489626,0.02697095,0.02904564,0.03112033,0.03319502,0.03526971,0.0373444,0.03941908,0.04149377,0.04356846,0.04564315,0.04771784,0.04979253,0.05186722,0.05394191,0.05601659,0.05809128,0.06016597,0.06224066,0.06431535,0.06639004,0.06846473,0.07053941,0.0726141,0.07468879,0.07676348,0.07883817,0.08091286,0.08298755,0.08506224,0.08713692,0.08921161,0.0912863,0.09336099,0.09543568,0.09751037,0.09958506,0.1016597,0.1037344,0.1058091,0.1078838,0.1099585,0.1120332,0.1141079,0.1161826,0.1182573,0.1203319,0.1224066,0.1244813,0.126556,0.1286307,0.1307054,0.1327801,0.1348548,0.1369295,0.1390041,0.1410788,0.1431535,0.1452282,0.1473029,0.1493776,0.1514523,0.153527,0.1556017,0.1576763,0.159751,0.1618257,0.1639004,0.1659751,0.1680498,0.1701245,0.1721992,0.1742738,0.1763485,0.1784232,0.1804979,0.1825726,0.1846473,0.186722,0.1887967,0.1908714,0.192946,0.1950207,0.1970954,0.1991701,0.2012448,0.2033195,0.2053942,0.2074689,0.2095436,0.2116182,0.2136929,0.2157676,0.2178423,0.219917,0.2219917,0.2240664,0.2261411,0.2282158,0.2302904,0.2323651,0.2344398,0.2365145,0.2385892,0.2406639,0.2427386,0.2448133,0.246888,0.2489626,0.2510373,0.253112,0.2551867,0.2572614,0.2593361,0.2614108,0.2634855,0.2655602,0.2676348,0.2697095,0.2717842,0.2738589,0.2759336,0.2780083,0.280083,0.2821577,0.2842323,0.286307,0.2883817,0.2904564,0.2925311,0.2946058,0.2966805,0.2987552,0.3008299,0.3029045,0.3049792,0.3070539,0.3091286,0.3112033,0.313278,0.3153527,0.3174274,0.3195021,0.3215767,0.3236514,0.3257261,0.3278008,0.3298755,0.3319502,0.3340249,0.3360996,0.3381743,0.3402489,0.3423236,0.3443983,0.346473,0.3485477,0.3506224,0.3526971,0.3547718,0.3568465,0.3589211,0.3609958,0.3630705,0.3651452,0.3672199,0.3692946,0.3713693,0.373444,0.3755186,0.3775933,0.379668,0.3817427,0.3838174,0.3858921,0.3879668,0.3900415,0.3921162,0.3941908,0.3962655,0.3983402,0.4004149,0.4024896,0.4045643,0.406639,0.4087137,0.4107884,0.412863,0.4149377,0.4170124,0.4190871,0.4211618,0.4232365,0.4253112,0.4273859,0.4294606,0.4315352,0.4336099,0.4356846,0.4377593,0.439834,0.4419087,0.4439834,0.4460581,0.4481328,0.4502074,0.4522821,0.4543568,0.4564315,0.4585062,0.4605809,0.4626556,0.4647303,0.466805,0.4688796,0.4709543,0.473029,0.4751037,0.4771784,0.4792531,0.4813278,0.4834025,0.4854771,0.4875518,0.4896265,0.4917012,0.4937759,0.4958506,0.4979253,0.5,0.5020747,0.5041494,0.506224,0.5082988,0.5103734,0.5124481,0.5145228,0.5165975,0.5186722,0.5207469,0.5228215,0.5248963,0.5269709,0.5290456,0.5311203,0.533195,0.5352697,0.5373444,0.5394191,0.5414938,0.5435684,0.5456432,0.5477178,0.5497925,0.5518672,0.5539419,0.5560166,0.5580913,0.5601659,0.5622407,0.5643153,0.56639,0.5684647,0.5705394,0.5726141,0.5746888,0.5767635,0.5788382,0.5809128,0.5829875,0.5850622,0.5871369,0.5892116,0.5912863,0.593361,0.5954357,0.5975103,0.5995851,0.6016597,0.6037344,0.6058091,0.6078838,0.6099585,0.6120332,0.6141078,0.6161826,0.6182572,0.6203319,0.6224066,0.6244813,0.626556,0.6286307,0.6307054,0.6327801,0.6348547,0.6369295,0.6390041,0.6410788,0.6431535,0.6452282,0.6473029,0.6493776,0.6514522,0.653527,0.6556016,0.6576763,0.659751,0.6618257,0.6639004,0.6659751,0.6680498,0.6701245,0.6721991,0.6742738,0.6763485,0.6784232,0.6804979,0.6825726,0.6846473,0.686722,0.6887966,0.6908714,0.692946,0.6950207,0.6970954,0.6991701,0.7012448,0.7033195,0.7053941,0.7074689,0.7095435,0.7116182,0.7136929,0.7157676,0.7178423,0.719917,0.7219917,0.7240664,0.726141,0.7282158,0.7302904,0.7323651,0.7344398,0.7365145,0.7385892,0.7406639,0.7427385,0.7448133,0.7468879,0.7489626,0.7510373,0.753112,0.7551867,0.7572614,0.7593361,0.7614108,0.7634854,0.7655602,0.7676348,0.7697095,0.7717842,0.7738589,0.7759336,0.7780083,0.7800829,0.7821577,0.7842323,0.786307,0.7883817,0.7904564,0.7925311,0.7946058,0.7966805,0.7987552,0.8008298,0.8029045,0.8049792,0.8070539,0.8091286,0.8112033,0.813278,0.8153527,0.8174273,0.8195021,0.8215767,0.8236514,0.8257261,0.8278008,0.8298755,0.8319502,0.8340248,0.8360996,0.8381742,0.8402489,0.8423236,0.8443983,0.846473,0.8485477,0.8506224,0.8526971,0.8547717,0.8568465,0.8589211,0.8609958,0.8630705,0.8651452,0.8672199,0.8692946,0.8713692,0.873444,0.8755186,0.8775933,0.879668,0.8817427,0.8838174,0.8858921,0.8879668,0.8900415,0.8921161,0.8941908,0.8962655,0.8983402,0.9004149,0.9024896,0.9045643,0.906639,0.9087136,0.9107884,0.912863,0.9149377,0.9170124,0.9190871,0.9211618,0.9232365,0.9253111,0.9273859,0.9294605,0.9315352,0.9336099,0.9356846,0.9377593,0.939834,0.9419087,0.9439834,0.946058,0.9481328,0.9502074,0.9522821,0.9543568,0.9564315,0.9585062,0.9605809,0.9626555,0.9647303,0.9668049,0.9688796,0.9709543,0.973029,0.9751037,0.9771784,0.9792531,0.9813278,0.9834024,0.9854771,0.9875518,0.9896265,0.9917012,0.9937759,0.9958506,0.9979253]

Group244.children.append(OrientationInterpolator254)
OrientationInterpolator255 = x3d.OrientationInterpolator()
OrientationInterpolator255.DEF = "Keyframe_vl5"
OrientationInterpolator255.key = [0,0.002074689,0.004149377,0.006224066,0.008298755,0.01037344,0.01244813,0.01452282,0.01659751,0.0186722,0.02074689,0.02282158,0.02489626,0.02697095,0.02904564,0.03112033,0.03319502,0.03526971,0.0373444,0.03941908,0.04149377,0.04356846,0.04564315,0.04771784,0.04979253,0.05186722,0.05394191,0.05601659,0.05809128,0.06016597,0.06224066,0.06431535,0.06639004,0.06846473,0.07053941,0.0726141,0.07468879,0.07676348,0.07883817,0.08091286,0.08298755,0.08506224,0.08713692,0.08921161,0.0912863,0.09336099,0.09543568,0.09751037,0.09958506,0.1016597,0.1037344,0.1058091,0.1078838,0.1099585,0.1120332,0.1141079,0.1161826,0.1182573,0.1203319,0.1224066,0.1244813,0.126556,0.1286307,0.1307054,0.1327801,0.1348548,0.1369295,0.1390041,0.1410788,0.1431535,0.1452282,0.1473029,0.1493776,0.1514523,0.153527,0.1556017,0.1576763,0.159751,0.1618257,0.1639004,0.1659751,0.1680498,0.1701245,0.1721992,0.1742738,0.1763485,0.1784232,0.1804979,0.1825726,0.1846473,0.186722,0.1887967,0.1908714,0.192946,0.1950207,0.1970954,0.1991701,0.2012448,0.2033195,0.2053942,0.2074689,0.2095436,0.2116182,0.2136929,0.2157676,0.2178423,0.219917,0.2219917,0.2240664,0.2261411,0.2282158,0.2302904,0.2323651,0.2344398,0.2365145,0.2385892,0.2406639,0.2427386,0.2448133,0.246888,0.2489626,0.2510373,0.253112,0.2551867,0.2572614,0.2593361,0.2614108,0.2634855,0.2655602,0.2676348,0.2697095,0.2717842,0.2738589,0.2759336,0.2780083,0.280083,0.2821577,0.2842323,0.286307,0.2883817,0.2904564,0.2925311,0.2946058,0.2966805,0.2987552,0.3008299,0.3029045,0.3049792,0.3070539,0.3091286,0.3112033,0.313278,0.3153527,0.3174274,0.3195021,0.3215767,0.3236514,0.3257261,0.3278008,0.3298755,0.3319502,0.3340249,0.3360996,0.3381743,0.3402489,0.3423236,0.3443983,0.346473,0.3485477,0.3506224,0.3526971,0.3547718,0.3568465,0.3589211,0.3609958,0.3630705,0.3651452,0.3672199,0.3692946,0.3713693,0.373444,0.3755186,0.3775933,0.379668,0.3817427,0.3838174,0.3858921,0.3879668,0.3900415,0.3921162,0.3941908,0.3962655,0.3983402,0.4004149,0.4024896,0.4045643,0.406639,0.4087137,0.4107884,0.412863,0.4149377,0.4170124,0.4190871,0.4211618,0.4232365,0.4253112,0.4273859,0.4294606,0.4315352,0.4336099,0.4356846,0.4377593,0.439834,0.4419087,0.4439834,0.4460581,0.4481328,0.4502074,0.4522821,0.4543568,0.4564315,0.4585062,0.4605809,0.4626556,0.4647303,0.466805,0.4688796,0.4709543,0.473029,0.4751037,0.4771784,0.4792531,0.4813278,0.4834025,0.4854771,0.4875518,0.4896265,0.4917012,0.4937759,0.4958506,0.4979253,0.5,0.5020747,0.5041494,0.506224,0.5082988,0.5103734,0.5124481,0.5145228,0.5165975,0.5186722,0.5207469,0.5228215,0.5248963,0.5269709,0.5290456,0.5311203,0.533195,0.5352697,0.5373444,0.5394191,0.5414938,0.5435684,0.5456432,0.5477178,0.5497925,0.5518672,0.5539419,0.5560166,0.5580913,0.5601659,0.5622407,0.5643153,0.56639,0.5684647,0.5705394,0.5726141,0.5746888,0.5767635,0.5788382,0.5809128,0.5829875,0.5850622,0.5871369,0.5892116,0.5912863,0.593361,0.5954357,0.5975103,0.5995851,0.6016597,0.6037344,0.6058091,0.6078838,0.6099585,0.6120332,0.6141078,0.6161826,0.6182572,0.6203319,0.6224066,0.6244813,0.626556,0.6286307,0.6307054,0.6327801,0.6348547,0.6369295,0.6390041,0.6410788,0.6431535,0.6452282,0.6473029,0.6493776,0.6514522,0.653527,0.6556016,0.6576763,0.659751,0.6618257,0.6639004,0.6659751,0.6680498,0.6701245,0.6721991,0.6742738,0.6763485,0.6784232,0.6804979,0.6825726,0.6846473,0.686722,0.6887966,0.6908714,0.692946,0.6950207,0.6970954,0.6991701,0.7012448,0.7033195,0.7053941,0.7074689,0.7095435,0.7116182,0.7136929,0.7157676,0.7178423,0.719917,0.7219917,0.7240664,0.726141,0.7282158,0.7302904,0.7323651,0.7344398,0.7365145,0.7385892,0.7406639,0.7427385,0.7448133,0.7468879,0.7489626,0.7510373,0.753112,0.7551867,0.7572614,0.7593361,0.7614108,0.7634854,0.7655602,0.7676348,0.7697095,0.7717842,0.7738589,0.7759336,0.7780083,0.7800829,0.7821577,0.7842323,0.786307,0.7883817,0.7904564,0.7925311,0.7946058,0.7966805,0.7987552,0.8008298,0.8029045,0.8049792,0.8070539,0.8091286,0.8112033,0.813278,0.8153527,0.8174273,0.8195021,0.8215767,0.8236514,0.8257261,0.8278008,0.8298755,0.8319502,0.8340248,0.8360996,0.8381742,0.8402489,0.8423236,0.8443983,0.846473,0.8485477,0.8506224,0.8526971,0.8547717,0.8568465,0.8589211,0.8609958,0.8630705,0.8651452,0.8672199,0.8692946,0.8713692,0.873444,0.8755186,0.8775933,0.879668,0.8817427,0.8838174,0.8858921,0.8879668,0.8900415,0.8921161,0.8941908,0.8962655,0.8983402,0.9004149,0.9024896,0.9045643,0.906639,0.9087136,0.9107884,0.912863,0.9149377,0.9170124,0.9190871,0.9211618,0.9232365,0.9253111,0.9273859,0.9294605,0.9315352,0.9336099,0.9356846,0.9377593,0.939834,0.9419087,0.9439834,0.946058,0.9481328,0.9502074,0.9522821,0.9543568,0.9564315,0.9585062,0.9605809,0.9626555,0.9647303,0.9668049,0.9688796,0.9709543,0.973029,0.9751037,0.9771784,0.9792531,0.9813278,0.9834024,0.9854771,0.9875518,0.9896265,0.9917012,0.9937759,0.9958506,0.9979253]

Group244.children.append(OrientationInterpolator255)
OrientationInterpolator256 = x3d.OrientationInterpolator()
OrientationInterpolator256.DEF = "Keyframe_skullbase"
OrientationInterpolator256.key = [0,0.002074689,0.004149377,0.006224066,0.008298755,0.01037344,0.01244813,0.01452282,0.01659751,0.0186722,0.02074689,0.02282158,0.02489626,0.02697095,0.02904564,0.03112033,0.03319502,0.03526971,0.0373444,0.03941908,0.04149377,0.04356846,0.04564315,0.04771784,0.04979253,0.05186722,0.05394191,0.05601659,0.05809128,0.06016597,0.06224066,0.06431535,0.06639004,0.06846473,0.07053941,0.0726141,0.07468879,0.07676348,0.07883817,0.08091286,0.08298755,0.08506224,0.08713692,0.08921161,0.0912863,0.09336099,0.09543568,0.09751037,0.09958506,0.1016597,0.1037344,0.1058091,0.1078838,0.1099585,0.1120332,0.1141079,0.1161826,0.1182573,0.1203319,0.1224066,0.1244813,0.126556,0.1286307,0.1307054,0.1327801,0.1348548,0.1369295,0.1390041,0.1410788,0.1431535,0.1452282,0.1473029,0.1493776,0.1514523,0.153527,0.1556017,0.1576763,0.159751,0.1618257,0.1639004,0.1659751,0.1680498,0.1701245,0.1721992,0.1742738,0.1763485,0.1784232,0.1804979,0.1825726,0.1846473,0.186722,0.1887967,0.1908714,0.192946,0.1950207,0.1970954,0.1991701,0.2012448,0.2033195,0.2053942,0.2074689,0.2095436,0.2116182,0.2136929,0.2157676,0.2178423,0.219917,0.2219917,0.2240664,0.2261411,0.2282158,0.2302904,0.2323651,0.2344398,0.2365145,0.2385892,0.2406639,0.2427386,0.2448133,0.246888,0.2489626,0.2510373,0.253112,0.2551867,0.2572614,0.2593361,0.2614108,0.2634855,0.2655602,0.2676348,0.2697095,0.2717842,0.2738589,0.2759336,0.2780083,0.280083,0.2821577,0.2842323,0.286307,0.2883817,0.2904564,0.2925311,0.2946058,0.2966805,0.2987552,0.3008299,0.3029045,0.3049792,0.3070539,0.3091286,0.3112033,0.313278,0.3153527,0.3174274,0.3195021,0.3215767,0.3236514,0.3257261,0.3278008,0.3298755,0.3319502,0.3340249,0.3360996,0.3381743,0.3402489,0.3423236,0.3443983,0.346473,0.3485477,0.3506224,0.3526971,0.3547718,0.3568465,0.3589211,0.3609958,0.3630705,0.3651452,0.3672199,0.3692946,0.3713693,0.373444,0.3755186,0.3775933,0.379668,0.3817427,0.3838174,0.3858921,0.3879668,0.3900415,0.3921162,0.3941908,0.3962655,0.3983402,0.4004149,0.4024896,0.4045643,0.406639,0.4087137,0.4107884,0.412863,0.4149377,0.4170124,0.4190871,0.4211618,0.4232365,0.4253112,0.4273859,0.4294606,0.4315352,0.4336099,0.4356846,0.4377593,0.439834,0.4419087,0.4439834,0.4460581,0.4481328,0.4502074,0.4522821,0.4543568,0.4564315,0.4585062,0.4605809,0.4626556,0.4647303,0.466805,0.4688796,0.4709543,0.473029,0.4751037,0.4771784,0.4792531,0.4813278,0.4834025,0.4854771,0.4875518,0.4896265,0.4917012,0.4937759,0.4958506,0.4979253,0.5,0.5020747,0.5041494,0.506224,0.5082988,0.5103734,0.5124481,0.5145228,0.5165975,0.5186722,0.5207469,0.5228215,0.5248963,0.5269709,0.5290456,0.5311203,0.533195,0.5352697,0.5373444,0.5394191,0.5414938,0.5435684,0.5456432,0.5477178,0.5497925,0.5518672,0.5539419,0.5560166,0.5580913,0.5601659,0.5622407,0.5643153,0.56639,0.5684647,0.5705394,0.5726141,0.5746888,0.5767635,0.5788382,0.5809128,0.5829875,0.5850622,0.5871369,0.5892116,0.5912863,0.593361,0.5954357,0.5975103,0.5995851,0.6016597,0.6037344,0.6058091,0.6078838,0.6099585,0.6120332,0.6141078,0.6161826,0.6182572,0.6203319,0.6224066,0.6244813,0.626556,0.6286307,0.6307054,0.6327801,0.6348547,0.6369295,0.6390041,0.6410788,0.6431535,0.6452282,0.6473029,0.6493776,0.6514522,0.653527,0.6556016,0.6576763,0.659751,0.6618257,0.6639004,0.6659751,0.6680498,0.6701245,0.6721991,0.6742738,0.6763485,0.6784232,0.6804979,0.6825726,0.6846473,0.686722,0.6887966,0.6908714,0.692946,0.6950207,0.6970954,0.6991701,0.7012448,0.7033195,0.7053941,0.7074689,0.7095435,0.7116182,0.7136929,0.7157676,0.7178423,0.719917,0.7219917,0.7240664,0.726141,0.7282158,0.7302904,0.7323651,0.7344398,0.7365145,0.7385892,0.7406639,0.7427385,0.7448133,0.7468879,0.7489626,0.7510373,0.753112,0.7551867,0.7572614,0.7593361,0.7614108,0.7634854,0.7655602,0.7676348,0.7697095,0.7717842,0.7738589,0.7759336,0.7780083,0.7800829,0.7821577,0.7842323,0.786307,0.7883817,0.7904564,0.7925311,0.7946058,0.7966805,0.7987552,0.8008298,0.8029045,0.8049792,0.8070539,0.8091286,0.8112033,0.813278,0.8153527,0.8174273,0.8195021,0.8215767,0.8236514,0.8257261,0.8278008,0.8298755,0.8319502,0.8340248,0.8360996,0.8381742,0.8402489,0.8423236,0.8443983,0.846473,0.8485477,0.8506224,0.8526971,0.8547717,0.8568465,0.8589211,0.8609958,0.8630705,0.8651452,0.8672199,0.8692946,0.8713692,0.873444,0.8755186,0.8775933,0.879668,0.8817427,0.8838174,0.8858921,0.8879668,0.8900415,0.8921161,0.8941908,0.8962655,0.8983402,0.9004149,0.9024896,0.9045643,0.906639,0.9087136,0.9107884,0.912863,0.9149377,0.9170124,0.9190871,0.9211618,0.9232365,0.9253111,0.9273859,0.9294605,0.9315352,0.9336099,0.9356846,0.9377593,0.939834,0.9419087,0.9439834,0.946058,0.9481328,0.9502074,0.9522821,0.9543568,0.9564315,0.9585062,0.9605809,0.9626555,0.9647303,0.9668049,0.9688796,0.9709543,0.973029,0.9751037,0.9771784,0.9792531,0.9813278,0.9834024,0.9854771,0.9875518,0.9896265,0.9917012,0.9937759,0.9958506,0.9979253]

Group244.children.append(OrientationInterpolator256)
OrientationInterpolator257 = x3d.OrientationInterpolator()
OrientationInterpolator257.DEF = "Keyframe_l_hip"
OrientationInterpolator257.key = [0,0.002074689,0.004149377,0.006224066,0.008298755,0.01037344,0.01244813,0.01452282,0.01659751,0.0186722,0.02074689,0.02282158,0.02489626,0.02697095,0.02904564,0.03112033,0.03319502,0.03526971,0.0373444,0.03941908,0.04149377,0.04356846,0.04564315,0.04771784,0.04979253,0.05186722,0.05394191,0.05601659,0.05809128,0.06016597,0.06224066,0.06431535,0.06639004,0.06846473,0.07053941,0.0726141,0.07468879,0.07676348,0.07883817,0.08091286,0.08298755,0.08506224,0.08713692,0.08921161,0.0912863,0.09336099,0.09543568,0.09751037,0.09958506,0.1016597,0.1037344,0.1058091,0.1078838,0.1099585,0.1120332,0.1141079,0.1161826,0.1182573,0.1203319,0.1224066,0.1244813,0.126556,0.1286307,0.1307054,0.1327801,0.1348548,0.1369295,0.1390041,0.1410788,0.1431535,0.1452282,0.1473029,0.1493776,0.1514523,0.153527,0.1556017,0.1576763,0.159751,0.1618257,0.1639004,0.1659751,0.1680498,0.1701245,0.1721992,0.1742738,0.1763485,0.1784232,0.1804979,0.1825726,0.1846473,0.186722,0.1887967,0.1908714,0.192946,0.1950207,0.1970954,0.1991701,0.2012448,0.2033195,0.2053942,0.2074689,0.2095436,0.2116182,0.2136929,0.2157676,0.2178423,0.219917,0.2219917,0.2240664,0.2261411,0.2282158,0.2302904,0.2323651,0.2344398,0.2365145,0.2385892,0.2406639,0.2427386,0.2448133,0.246888,0.2489626,0.2510373,0.253112,0.2551867,0.2572614,0.2593361,0.2614108,0.2634855,0.2655602,0.2676348,0.2697095,0.2717842,0.2738589,0.2759336,0.2780083,0.280083,0.2821577,0.2842323,0.286307,0.2883817,0.2904564,0.2925311,0.2946058,0.2966805,0.2987552,0.3008299,0.3029045,0.3049792,0.3070539,0.3091286,0.3112033,0.313278,0.3153527,0.3174274,0.3195021,0.3215767,0.3236514,0.3257261,0.3278008,0.3298755,0.3319502,0.3340249,0.3360996,0.3381743,0.3402489,0.3423236,0.3443983,0.346473,0.3485477,0.3506224,0.3526971,0.3547718,0.3568465,0.3589211,0.3609958,0.3630705,0.3651452,0.3672199,0.3692946,0.3713693,0.373444,0.3755186,0.3775933,0.379668,0.3817427,0.3838174,0.3858921,0.3879668,0.3900415,0.3921162,0.3941908,0.3962655,0.3983402,0.4004149,0.4024896,0.4045643,0.406639,0.4087137,0.4107884,0.412863,0.4149377,0.4170124,0.4190871,0.4211618,0.4232365,0.4253112,0.4273859,0.4294606,0.4315352,0.4336099,0.4356846,0.4377593,0.439834,0.4419087,0.4439834,0.4460581,0.4481328,0.4502074,0.4522821,0.4543568,0.4564315,0.4585062,0.4605809,0.4626556,0.4647303,0.466805,0.4688796,0.4709543,0.473029,0.4751037,0.4771784,0.4792531,0.4813278,0.4834025,0.4854771,0.4875518,0.4896265,0.4917012,0.4937759,0.4958506,0.4979253,0.5,0.5020747,0.5041494,0.506224,0.5082988,0.5103734,0.5124481,0.5145228,0.5165975,0.5186722,0.5207469,0.5228215,0.5248963,0.5269709,0.5290456,0.5311203,0.533195,0.5352697,0.5373444,0.5394191,0.5414938,0.5435684,0.5456432,0.5477178,0.5497925,0.5518672,0.5539419,0.5560166,0.5580913,0.5601659,0.5622407,0.5643153,0.56639,0.5684647,0.5705394,0.5726141,0.5746888,0.5767635,0.5788382,0.5809128,0.5829875,0.5850622,0.5871369,0.5892116,0.5912863,0.593361,0.5954357,0.5975103,0.5995851,0.6016597,0.6037344,0.6058091,0.6078838,0.6099585,0.6120332,0.6141078,0.6161826,0.6182572,0.6203319,0.6224066,0.6244813,0.626556,0.6286307,0.6307054,0.6327801,0.6348547,0.6369295,0.6390041,0.6410788,0.6431535,0.6452282,0.6473029,0.6493776,0.6514522,0.653527,0.6556016,0.6576763,0.659751,0.6618257,0.6639004,0.6659751,0.6680498,0.6701245,0.6721991,0.6742738,0.6763485,0.6784232,0.6804979,0.6825726,0.6846473,0.686722,0.6887966,0.6908714,0.692946,0.6950207,0.6970954,0.6991701,0.7012448,0.7033195,0.7053941,0.7074689,0.7095435,0.7116182,0.7136929,0.7157676,0.7178423,0.719917,0.7219917,0.7240664,0.726141,0.7282158,0.7302904,0.7323651,0.7344398,0.7365145,0.7385892,0.7406639,0.7427385,0.7448133,0.7468879,0.7489626,0.7510373,0.753112,0.7551867,0.7572614,0.7593361,0.7614108,0.7634854,0.7655602,0.7676348,0.7697095,0.7717842,0.7738589,0.7759336,0.7780083,0.7800829,0.7821577,0.7842323,0.786307,0.7883817,0.7904564,0.7925311,0.7946058,0.7966805,0.7987552,0.8008298,0.8029045,0.8049792,0.8070539,0.8091286,0.8112033,0.813278,0.8153527,0.8174273,0.8195021,0.8215767,0.8236514,0.8257261,0.8278008,0.8298755,0.8319502,0.8340248,0.8360996,0.8381742,0.8402489,0.8423236,0.8443983,0.846473,0.8485477,0.8506224,0.8526971,0.8547717,0.8568465,0.8589211,0.8609958,0.8630705,0.8651452,0.8672199,0.8692946,0.8713692,0.873444,0.8755186,0.8775933,0.879668,0.8817427,0.8838174,0.8858921,0.8879668,0.8900415,0.8921161,0.8941908,0.8962655,0.8983402,0.9004149,0.9024896,0.9045643,0.906639,0.9087136,0.9107884,0.912863,0.9149377,0.9170124,0.9190871,0.9211618,0.9232365,0.9253111,0.9273859,0.9294605,0.9315352,0.9336099,0.9356846,0.9377593,0.939834,0.9419087,0.9439834,0.946058,0.9481328,0.9502074,0.9522821,0.9543568,0.9564315,0.9585062,0.9605809,0.9626555,0.9647303,0.9668049,0.9688796,0.9709543,0.973029,0.9751037,0.9771784,0.9792531,0.9813278,0.9834024,0.9854771,0.9875518,0.9896265,0.9917012,0.9937759,0.9958506,0.9979253]

Group244.children.append(OrientationInterpolator257)
OrientationInterpolator258 = x3d.OrientationInterpolator()
OrientationInterpolator258.DEF = "Keyframe_l_knee"
OrientationInterpolator258.key = [0,0.002074689,0.004149377,0.006224066,0.008298755,0.01037344,0.01244813,0.01452282,0.01659751,0.0186722,0.02074689,0.02282158,0.02489626,0.02697095,0.02904564,0.03112033,0.03319502,0.03526971,0.0373444,0.03941908,0.04149377,0.04356846,0.04564315,0.04771784,0.04979253,0.05186722,0.05394191,0.05601659,0.05809128,0.06016597,0.06224066,0.06431535,0.06639004,0.06846473,0.07053941,0.0726141,0.07468879,0.07676348,0.07883817,0.08091286,0.08298755,0.08506224,0.08713692,0.08921161,0.0912863,0.09336099,0.09543568,0.09751037,0.09958506,0.1016597,0.1037344,0.1058091,0.1078838,0.1099585,0.1120332,0.1141079,0.1161826,0.1182573,0.1203319,0.1224066,0.1244813,0.126556,0.1286307,0.1307054,0.1327801,0.1348548,0.1369295,0.1390041,0.1410788,0.1431535,0.1452282,0.1473029,0.1493776,0.1514523,0.153527,0.1556017,0.1576763,0.159751,0.1618257,0.1639004,0.1659751,0.1680498,0.1701245,0.1721992,0.1742738,0.1763485,0.1784232,0.1804979,0.1825726,0.1846473,0.186722,0.1887967,0.1908714,0.192946,0.1950207,0.1970954,0.1991701,0.2012448,0.2033195,0.2053942,0.2074689,0.2095436,0.2116182,0.2136929,0.2157676,0.2178423,0.219917,0.2219917,0.2240664,0.2261411,0.2282158,0.2302904,0.2323651,0.2344398,0.2365145,0.2385892,0.2406639,0.2427386,0.2448133,0.246888,0.2489626,0.2510373,0.253112,0.2551867,0.2572614,0.2593361,0.2614108,0.2634855,0.2655602,0.2676348,0.2697095,0.2717842,0.2738589,0.2759336,0.2780083,0.280083,0.2821577,0.2842323,0.286307,0.2883817,0.2904564,0.2925311,0.2946058,0.2966805,0.2987552,0.3008299,0.3029045,0.3049792,0.3070539,0.3091286,0.3112033,0.313278,0.3153527,0.3174274,0.3195021,0.3215767,0.3236514,0.3257261,0.3278008,0.3298755,0.3319502,0.3340249,0.3360996,0.3381743,0.3402489,0.3423236,0.3443983,0.346473,0.3485477,0.3506224,0.3526971,0.3547718,0.3568465,0.3589211,0.3609958,0.3630705,0.3651452,0.3672199,0.3692946,0.3713693,0.373444,0.3755186,0.3775933,0.379668,0.3817427,0.3838174,0.3858921,0.3879668,0.3900415,0.3921162,0.3941908,0.3962655,0.3983402,0.4004149,0.4024896,0.4045643,0.406639,0.4087137,0.4107884,0.412863,0.4149377,0.4170124,0.4190871,0.4211618,0.4232365,0.4253112,0.4273859,0.4294606,0.4315352,0.4336099,0.4356846,0.4377593,0.439834,0.4419087,0.4439834,0.4460581,0.4481328,0.4502074,0.4522821,0.4543568,0.4564315,0.4585062,0.4605809,0.4626556,0.4647303,0.466805,0.4688796,0.4709543,0.473029,0.4751037,0.4771784,0.4792531,0.4813278,0.4834025,0.4854771,0.4875518,0.4896265,0.4917012,0.4937759,0.4958506,0.4979253,0.5,0.5020747,0.5041494,0.506224,0.5082988,0.5103734,0.5124481,0.5145228,0.5165975,0.5186722,0.5207469,0.5228215,0.5248963,0.5269709,0.5290456,0.5311203,0.533195,0.5352697,0.5373444,0.5394191,0.5414938,0.5435684,0.5456432,0.5477178,0.5497925,0.5518672,0.5539419,0.5560166,0.5580913,0.5601659,0.5622407,0.5643153,0.56639,0.5684647,0.5705394,0.5726141,0.5746888,0.5767635,0.5788382,0.5809128,0.5829875,0.5850622,0.5871369,0.5892116,0.5912863,0.593361,0.5954357,0.5975103,0.5995851,0.6016597,0.6037344,0.6058091,0.6078838,0.6099585,0.6120332,0.6141078,0.6161826,0.6182572,0.6203319,0.6224066,0.6244813,0.626556,0.6286307,0.6307054,0.6327801,0.6348547,0.6369295,0.6390041,0.6410788,0.6431535,0.6452282,0.6473029,0.6493776,0.6514522,0.653527,0.6556016,0.6576763,0.659751,0.6618257,0.6639004,0.6659751,0.6680498,0.6701245,0.6721991,0.6742738,0.6763485,0.6784232,0.6804979,0.6825726,0.6846473,0.686722,0.6887966,0.6908714,0.692946,0.6950207,0.6970954,0.6991701,0.7012448,0.7033195,0.7053941,0.7074689,0.7095435,0.7116182,0.7136929,0.7157676,0.7178423,0.719917,0.7219917,0.7240664,0.726141,0.7282158,0.7302904,0.7323651,0.7344398,0.7365145,0.7385892,0.7406639,0.7427385,0.7448133,0.7468879,0.7489626,0.7510373,0.753112,0.7551867,0.7572614,0.7593361,0.7614108,0.7634854,0.7655602,0.7676348,0.7697095,0.7717842,0.7738589,0.7759336,0.7780083,0.7800829,0.7821577,0.7842323,0.786307,0.7883817,0.7904564,0.7925311,0.7946058,0.7966805,0.7987552,0.8008298,0.8029045,0.8049792,0.8070539,0.8091286,0.8112033,0.813278,0.8153527,0.8174273,0.8195021,0.8215767,0.8236514,0.8257261,0.8278008,0.8298755,0.8319502,0.8340248,0.8360996,0.8381742,0.8402489,0.8423236,0.8443983,0.846473,0.8485477,0.8506224,0.8526971,0.8547717,0.8568465,0.8589211,0.8609958,0.8630705,0.8651452,0.8672199,0.8692946,0.8713692,0.873444,0.8755186,0.8775933,0.879668,0.8817427,0.8838174,0.8858921,0.8879668,0.8900415,0.8921161,0.8941908,0.8962655,0.8983402,0.9004149,0.9024896,0.9045643,0.906639,0.9087136,0.9107884,0.912863,0.9149377,0.9170124,0.9190871,0.9211618,0.9232365,0.9253111,0.9273859,0.9294605,0.9315352,0.9336099,0.9356846,0.9377593,0.939834,0.9419087,0.9439834,0.946058,0.9481328,0.9502074,0.9522821,0.9543568,0.9564315,0.9585062,0.9605809,0.9626555,0.9647303,0.9668049,0.9688796,0.9709543,0.973029,0.9751037,0.9771784,0.9792531,0.9813278,0.9834024,0.9854771,0.9875518,0.9896265,0.9917012,0.9937759,0.9958506,0.9979253]

Group244.children.append(OrientationInterpolator258)
OrientationInterpolator259 = x3d.OrientationInterpolator()
OrientationInterpolator259.DEF = "Keyframe_l_talocrural"
OrientationInterpolator259.key = [0,0.002074689,0.004149377,0.006224066,0.008298755,0.01037344,0.01244813,0.01452282,0.01659751,0.0186722,0.02074689,0.02282158,0.02489626,0.02697095,0.02904564,0.03112033,0.03319502,0.03526971,0.0373444,0.03941908,0.04149377,0.04356846,0.04564315,0.04771784,0.04979253,0.05186722,0.05394191,0.05601659,0.05809128,0.06016597,0.06224066,0.06431535,0.06639004,0.06846473,0.07053941,0.0726141,0.07468879,0.07676348,0.07883817,0.08091286,0.08298755,0.08506224,0.08713692,0.08921161,0.0912863,0.09336099,0.09543568,0.09751037,0.09958506,0.1016597,0.1037344,0.1058091,0.1078838,0.1099585,0.1120332,0.1141079,0.1161826,0.1182573,0.1203319,0.1224066,0.1244813,0.126556,0.1286307,0.1307054,0.1327801,0.1348548,0.1369295,0.1390041,0.1410788,0.1431535,0.1452282,0.1473029,0.1493776,0.1514523,0.153527,0.1556017,0.1576763,0.159751,0.1618257,0.1639004,0.1659751,0.1680498,0.1701245,0.1721992,0.1742738,0.1763485,0.1784232,0.1804979,0.1825726,0.1846473,0.186722,0.1887967,0.1908714,0.192946,0.1950207,0.1970954,0.1991701,0.2012448,0.2033195,0.2053942,0.2074689,0.2095436,0.2116182,0.2136929,0.2157676,0.2178423,0.219917,0.2219917,0.2240664,0.2261411,0.2282158,0.2302904,0.2323651,0.2344398,0.2365145,0.2385892,0.2406639,0.2427386,0.2448133,0.246888,0.2489626,0.2510373,0.253112,0.2551867,0.2572614,0.2593361,0.2614108,0.2634855,0.2655602,0.2676348,0.2697095,0.2717842,0.2738589,0.2759336,0.2780083,0.280083,0.2821577,0.2842323,0.286307,0.2883817,0.2904564,0.2925311,0.2946058,0.2966805,0.2987552,0.3008299,0.3029045,0.3049792,0.3070539,0.3091286,0.3112033,0.313278,0.3153527,0.3174274,0.3195021,0.3215767,0.3236514,0.3257261,0.3278008,0.3298755,0.3319502,0.3340249,0.3360996,0.3381743,0.3402489,0.3423236,0.3443983,0.346473,0.3485477,0.3506224,0.3526971,0.3547718,0.3568465,0.3589211,0.3609958,0.3630705,0.3651452,0.3672199,0.3692946,0.3713693,0.373444,0.3755186,0.3775933,0.379668,0.3817427,0.3838174,0.3858921,0.3879668,0.3900415,0.3921162,0.3941908,0.3962655,0.3983402,0.4004149,0.4024896,0.4045643,0.406639,0.4087137,0.4107884,0.412863,0.4149377,0.4170124,0.4190871,0.4211618,0.4232365,0.4253112,0.4273859,0.4294606,0.4315352,0.4336099,0.4356846,0.4377593,0.439834,0.4419087,0.4439834,0.4460581,0.4481328,0.4502074,0.4522821,0.4543568,0.4564315,0.4585062,0.4605809,0.4626556,0.4647303,0.466805,0.4688796,0.4709543,0.473029,0.4751037,0.4771784,0.4792531,0.4813278,0.4834025,0.4854771,0.4875518,0.4896265,0.4917012,0.4937759,0.4958506,0.4979253,0.5,0.5020747,0.5041494,0.506224,0.5082988,0.5103734,0.5124481,0.5145228,0.5165975,0.5186722,0.5207469,0.5228215,0.5248963,0.5269709,0.5290456,0.5311203,0.533195,0.5352697,0.5373444,0.5394191,0.5414938,0.5435684,0.5456432,0.5477178,0.5497925,0.5518672,0.5539419,0.5560166,0.5580913,0.5601659,0.5622407,0.5643153,0.56639,0.5684647,0.5705394,0.5726141,0.5746888,0.5767635,0.5788382,0.5809128,0.5829875,0.5850622,0.5871369,0.5892116,0.5912863,0.593361,0.5954357,0.5975103,0.5995851,0.6016597,0.6037344,0.6058091,0.6078838,0.6099585,0.6120332,0.6141078,0.6161826,0.6182572,0.6203319,0.6224066,0.6244813,0.626556,0.6286307,0.6307054,0.6327801,0.6348547,0.6369295,0.6390041,0.6410788,0.6431535,0.6452282,0.6473029,0.6493776,0.6514522,0.653527,0.6556016,0.6576763,0.659751,0.6618257,0.6639004,0.6659751,0.6680498,0.6701245,0.6721991,0.6742738,0.6763485,0.6784232,0.6804979,0.6825726,0.6846473,0.686722,0.6887966,0.6908714,0.692946,0.6950207,0.6970954,0.6991701,0.7012448,0.7033195,0.7053941,0.7074689,0.7095435,0.7116182,0.7136929,0.7157676,0.7178423,0.719917,0.7219917,0.7240664,0.726141,0.7282158,0.7302904,0.7323651,0.7344398,0.7365145,0.7385892,0.7406639,0.7427385,0.7448133,0.7468879,0.7489626,0.7510373,0.753112,0.7551867,0.7572614,0.7593361,0.7614108,0.7634854,0.7655602,0.7676348,0.7697095,0.7717842,0.7738589,0.7759336,0.7780083,0.7800829,0.7821577,0.7842323,0.786307,0.7883817,0.7904564,0.7925311,0.7946058,0.7966805,0.7987552,0.8008298,0.8029045,0.8049792,0.8070539,0.8091286,0.8112033,0.813278,0.8153527,0.8174273,0.8195021,0.8215767,0.8236514,0.8257261,0.8278008,0.8298755,0.8319502,0.8340248,0.8360996,0.8381742,0.8402489,0.8423236,0.8443983,0.846473,0.8485477,0.8506224,0.8526971,0.8547717,0.8568465,0.8589211,0.8609958,0.8630705,0.8651452,0.8672199,0.8692946,0.8713692,0.873444,0.8755186,0.8775933,0.879668,0.8817427,0.8838174,0.8858921,0.8879668,0.8900415,0.8921161,0.8941908,0.8962655,0.8983402,0.9004149,0.9024896,0.9045643,0.906639,0.9087136,0.9107884,0.912863,0.9149377,0.9170124,0.9190871,0.9211618,0.9232365,0.9253111,0.9273859,0.9294605,0.9315352,0.9336099,0.9356846,0.9377593,0.939834,0.9419087,0.9439834,0.946058,0.9481328,0.9502074,0.9522821,0.9543568,0.9564315,0.9585062,0.9605809,0.9626555,0.9647303,0.9668049,0.9688796,0.9709543,0.973029,0.9751037,0.9771784,0.9792531,0.9813278,0.9834024,0.9854771,0.9875518,0.9896265,0.9917012,0.9937759,0.9958506,0.9979253]

Group244.children.append(OrientationInterpolator259)
OrientationInterpolator260 = x3d.OrientationInterpolator()
OrientationInterpolator260.DEF = "Keyframe_l_metatarsophalangeal_2"
OrientationInterpolator260.key = [0,0.002074689,0.004149377,0.006224066,0.008298755,0.01037344,0.01244813,0.01452282,0.01659751,0.0186722,0.02074689,0.02282158,0.02489626,0.02697095,0.02904564,0.03112033,0.03319502,0.03526971,0.0373444,0.03941908,0.04149377,0.04356846,0.04564315,0.04771784,0.04979253,0.05186722,0.05394191,0.05601659,0.05809128,0.06016597,0.06224066,0.06431535,0.06639004,0.06846473,0.07053941,0.0726141,0.07468879,0.07676348,0.07883817,0.08091286,0.08298755,0.08506224,0.08713692,0.08921161,0.0912863,0.09336099,0.09543568,0.09751037,0.09958506,0.1016597,0.1037344,0.1058091,0.1078838,0.1099585,0.1120332,0.1141079,0.1161826,0.1182573,0.1203319,0.1224066,0.1244813,0.126556,0.1286307,0.1307054,0.1327801,0.1348548,0.1369295,0.1390041,0.1410788,0.1431535,0.1452282,0.1473029,0.1493776,0.1514523,0.153527,0.1556017,0.1576763,0.159751,0.1618257,0.1639004,0.1659751,0.1680498,0.1701245,0.1721992,0.1742738,0.1763485,0.1784232,0.1804979,0.1825726,0.1846473,0.186722,0.1887967,0.1908714,0.192946,0.1950207,0.1970954,0.1991701,0.2012448,0.2033195,0.2053942,0.2074689,0.2095436,0.2116182,0.2136929,0.2157676,0.2178423,0.219917,0.2219917,0.2240664,0.2261411,0.2282158,0.2302904,0.2323651,0.2344398,0.2365145,0.2385892,0.2406639,0.2427386,0.2448133,0.246888,0.2489626,0.2510373,0.253112,0.2551867,0.2572614,0.2593361,0.2614108,0.2634855,0.2655602,0.2676348,0.2697095,0.2717842,0.2738589,0.2759336,0.2780083,0.280083,0.2821577,0.2842323,0.286307,0.2883817,0.2904564,0.2925311,0.2946058,0.2966805,0.2987552,0.3008299,0.3029045,0.3049792,0.3070539,0.3091286,0.3112033,0.313278,0.3153527,0.3174274,0.3195021,0.3215767,0.3236514,0.3257261,0.3278008,0.3298755,0.3319502,0.3340249,0.3360996,0.3381743,0.3402489,0.3423236,0.3443983,0.346473,0.3485477,0.3506224,0.3526971,0.3547718,0.3568465,0.3589211,0.3609958,0.3630705,0.3651452,0.3672199,0.3692946,0.3713693,0.373444,0.3755186,0.3775933,0.379668,0.3817427,0.3838174,0.3858921,0.3879668,0.3900415,0.3921162,0.3941908,0.3962655,0.3983402,0.4004149,0.4024896,0.4045643,0.406639,0.4087137,0.4107884,0.412863,0.4149377,0.4170124,0.4190871,0.4211618,0.4232365,0.4253112,0.4273859,0.4294606,0.4315352,0.4336099,0.4356846,0.4377593,0.439834,0.4419087,0.4439834,0.4460581,0.4481328,0.4502074,0.4522821,0.4543568,0.4564315,0.4585062,0.4605809,0.4626556,0.4647303,0.466805,0.4688796,0.4709543,0.473029,0.4751037,0.4771784,0.4792531,0.4813278,0.4834025,0.4854771,0.4875518,0.4896265,0.4917012,0.4937759,0.4958506,0.4979253,0.5,0.5020747,0.5041494,0.506224,0.5082988,0.5103734,0.5124481,0.5145228,0.5165975,0.5186722,0.5207469,0.5228215,0.5248963,0.5269709,0.5290456,0.5311203,0.533195,0.5352697,0.5373444,0.5394191,0.5414938,0.5435684,0.5456432,0.5477178,0.5497925,0.5518672,0.5539419,0.5560166,0.5580913,0.5601659,0.5622407,0.5643153,0.56639,0.5684647,0.5705394,0.5726141,0.5746888,0.5767635,0.5788382,0.5809128,0.5829875,0.5850622,0.5871369,0.5892116,0.5912863,0.593361,0.5954357,0.5975103,0.5995851,0.6016597,0.6037344,0.6058091,0.6078838,0.6099585,0.6120332,0.6141078,0.6161826,0.6182572,0.6203319,0.6224066,0.6244813,0.626556,0.6286307,0.6307054,0.6327801,0.6348547,0.6369295,0.6390041,0.6410788,0.6431535,0.6452282,0.6473029,0.6493776,0.6514522,0.653527,0.6556016,0.6576763,0.659751,0.6618257,0.6639004,0.6659751,0.6680498,0.6701245,0.6721991,0.6742738,0.6763485,0.6784232,0.6804979,0.6825726,0.6846473,0.686722,0.6887966,0.6908714,0.692946,0.6950207,0.6970954,0.6991701,0.7012448,0.7033195,0.7053941,0.7074689,0.7095435,0.7116182,0.7136929,0.7157676,0.7178423,0.719917,0.7219917,0.7240664,0.726141,0.7282158,0.7302904,0.7323651,0.7344398,0.7365145,0.7385892,0.7406639,0.7427385,0.7448133,0.7468879,0.7489626,0.7510373,0.753112,0.7551867,0.7572614,0.7593361,0.7614108,0.7634854,0.7655602,0.7676348,0.7697095,0.7717842,0.7738589,0.7759336,0.7780083,0.7800829,0.7821577,0.7842323,0.786307,0.7883817,0.7904564,0.7925311,0.7946058,0.7966805,0.7987552,0.8008298,0.8029045,0.8049792,0.8070539,0.8091286,0.8112033,0.813278,0.8153527,0.8174273,0.8195021,0.8215767,0.8236514,0.8257261,0.8278008,0.8298755,0.8319502,0.8340248,0.8360996,0.8381742,0.8402489,0.8423236,0.8443983,0.846473,0.8485477,0.8506224,0.8526971,0.8547717,0.8568465,0.8589211,0.8609958,0.8630705,0.8651452,0.8672199,0.8692946,0.8713692,0.873444,0.8755186,0.8775933,0.879668,0.8817427,0.8838174,0.8858921,0.8879668,0.8900415,0.8921161,0.8941908,0.8962655,0.8983402,0.9004149,0.9024896,0.9045643,0.906639,0.9087136,0.9107884,0.912863,0.9149377,0.9170124,0.9190871,0.9211618,0.9232365,0.9253111,0.9273859,0.9294605,0.9315352,0.9336099,0.9356846,0.9377593,0.939834,0.9419087,0.9439834,0.946058,0.9481328,0.9502074,0.9522821,0.9543568,0.9564315,0.9585062,0.9605809,0.9626555,0.9647303,0.9668049,0.9688796,0.9709543,0.973029,0.9751037,0.9771784,0.9792531,0.9813278,0.9834024,0.9854771,0.9875518,0.9896265,0.9917012,0.9937759,0.9958506,0.9979253]

Group244.children.append(OrientationInterpolator260)
OrientationInterpolator261 = x3d.OrientationInterpolator()
OrientationInterpolator261.DEF = "Keyframe_r_hip"
OrientationInterpolator261.key = [0,0.002074689,0.004149377,0.006224066,0.008298755,0.01037344,0.01244813,0.01452282,0.01659751,0.0186722,0.02074689,0.02282158,0.02489626,0.02697095,0.02904564,0.03112033,0.03319502,0.03526971,0.0373444,0.03941908,0.04149377,0.04356846,0.04564315,0.04771784,0.04979253,0.05186722,0.05394191,0.05601659,0.05809128,0.06016597,0.06224066,0.06431535,0.06639004,0.06846473,0.07053941,0.0726141,0.07468879,0.07676348,0.07883817,0.08091286,0.08298755,0.08506224,0.08713692,0.08921161,0.0912863,0.09336099,0.09543568,0.09751037,0.09958506,0.1016597,0.1037344,0.1058091,0.1078838,0.1099585,0.1120332,0.1141079,0.1161826,0.1182573,0.1203319,0.1224066,0.1244813,0.126556,0.1286307,0.1307054,0.1327801,0.1348548,0.1369295,0.1390041,0.1410788,0.1431535,0.1452282,0.1473029,0.1493776,0.1514523,0.153527,0.1556017,0.1576763,0.159751,0.1618257,0.1639004,0.1659751,0.1680498,0.1701245,0.1721992,0.1742738,0.1763485,0.1784232,0.1804979,0.1825726,0.1846473,0.186722,0.1887967,0.1908714,0.192946,0.1950207,0.1970954,0.1991701,0.2012448,0.2033195,0.2053942,0.2074689,0.2095436,0.2116182,0.2136929,0.2157676,0.2178423,0.219917,0.2219917,0.2240664,0.2261411,0.2282158,0.2302904,0.2323651,0.2344398,0.2365145,0.2385892,0.2406639,0.2427386,0.2448133,0.246888,0.2489626,0.2510373,0.253112,0.2551867,0.2572614,0.2593361,0.2614108,0.2634855,0.2655602,0.2676348,0.2697095,0.2717842,0.2738589,0.2759336,0.2780083,0.280083,0.2821577,0.2842323,0.286307,0.2883817,0.2904564,0.2925311,0.2946058,0.2966805,0.2987552,0.3008299,0.3029045,0.3049792,0.3070539,0.3091286,0.3112033,0.313278,0.3153527,0.3174274,0.3195021,0.3215767,0.3236514,0.3257261,0.3278008,0.3298755,0.3319502,0.3340249,0.3360996,0.3381743,0.3402489,0.3423236,0.3443983,0.346473,0.3485477,0.3506224,0.3526971,0.3547718,0.3568465,0.3589211,0.3609958,0.3630705,0.3651452,0.3672199,0.3692946,0.3713693,0.373444,0.3755186,0.3775933,0.379668,0.3817427,0.3838174,0.3858921,0.3879668,0.3900415,0.3921162,0.3941908,0.3962655,0.3983402,0.4004149,0.4024896,0.4045643,0.406639,0.4087137,0.4107884,0.412863,0.4149377,0.4170124,0.4190871,0.4211618,0.4232365,0.4253112,0.4273859,0.4294606,0.4315352,0.4336099,0.4356846,0.4377593,0.439834,0.4419087,0.4439834,0.4460581,0.4481328,0.4502074,0.4522821,0.4543568,0.4564315,0.4585062,0.4605809,0.4626556,0.4647303,0.466805,0.4688796,0.4709543,0.473029,0.4751037,0.4771784,0.4792531,0.4813278,0.4834025,0.4854771,0.4875518,0.4896265,0.4917012,0.4937759,0.4958506,0.4979253,0.5,0.5020747,0.5041494,0.506224,0.5082988,0.5103734,0.5124481,0.5145228,0.5165975,0.5186722,0.5207469,0.5228215,0.5248963,0.5269709,0.5290456,0.5311203,0.533195,0.5352697,0.5373444,0.5394191,0.5414938,0.5435684,0.5456432,0.5477178,0.5497925,0.5518672,0.5539419,0.5560166,0.5580913,0.5601659,0.5622407,0.5643153,0.56639,0.5684647,0.5705394,0.5726141,0.5746888,0.5767635,0.5788382,0.5809128,0.5829875,0.5850622,0.5871369,0.5892116,0.5912863,0.593361,0.5954357,0.5975103,0.5995851,0.6016597,0.6037344,0.6058091,0.6078838,0.6099585,0.6120332,0.6141078,0.6161826,0.6182572,0.6203319,0.6224066,0.6244813,0.626556,0.6286307,0.6307054,0.6327801,0.6348547,0.6369295,0.6390041,0.6410788,0.6431535,0.6452282,0.6473029,0.6493776,0.6514522,0.653527,0.6556016,0.6576763,0.659751,0.6618257,0.6639004,0.6659751,0.6680498,0.6701245,0.6721991,0.6742738,0.6763485,0.6784232,0.6804979,0.6825726,0.6846473,0.686722,0.6887966,0.6908714,0.692946,0.6950207,0.6970954,0.6991701,0.7012448,0.7033195,0.7053941,0.7074689,0.7095435,0.7116182,0.7136929,0.7157676,0.7178423,0.719917,0.7219917,0.7240664,0.726141,0.7282158,0.7302904,0.7323651,0.7344398,0.7365145,0.7385892,0.7406639,0.7427385,0.7448133,0.7468879,0.7489626,0.7510373,0.753112,0.7551867,0.7572614,0.7593361,0.7614108,0.7634854,0.7655602,0.7676348,0.7697095,0.7717842,0.7738589,0.7759336,0.7780083,0.7800829,0.7821577,0.7842323,0.786307,0.7883817,0.7904564,0.7925311,0.7946058,0.7966805,0.7987552,0.8008298,0.8029045,0.8049792,0.8070539,0.8091286,0.8112033,0.813278,0.8153527,0.8174273,0.8195021,0.8215767,0.8236514,0.8257261,0.8278008,0.8298755,0.8319502,0.8340248,0.8360996,0.8381742,0.8402489,0.8423236,0.8443983,0.846473,0.8485477,0.8506224,0.8526971,0.8547717,0.8568465,0.8589211,0.8609958,0.8630705,0.8651452,0.8672199,0.8692946,0.8713692,0.873444,0.8755186,0.8775933,0.879668,0.8817427,0.8838174,0.8858921,0.8879668,0.8900415,0.8921161,0.8941908,0.8962655,0.8983402,0.9004149,0.9024896,0.9045643,0.906639,0.9087136,0.9107884,0.912863,0.9149377,0.9170124,0.9190871,0.9211618,0.9232365,0.9253111,0.9273859,0.9294605,0.9315352,0.9336099,0.9356846,0.9377593,0.939834,0.9419087,0.9439834,0.946058,0.9481328,0.9502074,0.9522821,0.9543568,0.9564315,0.9585062,0.9605809,0.9626555,0.9647303,0.9668049,0.9688796,0.9709543,0.973029,0.9751037,0.9771784,0.9792531,0.9813278,0.9834024,0.9854771,0.9875518,0.9896265,0.9917012,0.9937759,0.9958506,0.9979253]

Group244.children.append(OrientationInterpolator261)
OrientationInterpolator262 = x3d.OrientationInterpolator()
OrientationInterpolator262.DEF = "Keyframe_r_knee"
OrientationInterpolator262.key = [0,0.002074689,0.004149377,0.006224066,0.008298755,0.01037344,0.01244813,0.01452282,0.01659751,0.0186722,0.02074689,0.02282158,0.02489626,0.02697095,0.02904564,0.03112033,0.03319502,0.03526971,0.0373444,0.03941908,0.04149377,0.04356846,0.04564315,0.04771784,0.04979253,0.05186722,0.05394191,0.05601659,0.05809128,0.06016597,0.06224066,0.06431535,0.06639004,0.06846473,0.07053941,0.0726141,0.07468879,0.07676348,0.07883817,0.08091286,0.08298755,0.08506224,0.08713692,0.08921161,0.0912863,0.09336099,0.09543568,0.09751037,0.09958506,0.1016597,0.1037344,0.1058091,0.1078838,0.1099585,0.1120332,0.1141079,0.1161826,0.1182573,0.1203319,0.1224066,0.1244813,0.126556,0.1286307,0.1307054,0.1327801,0.1348548,0.1369295,0.1390041,0.1410788,0.1431535,0.1452282,0.1473029,0.1493776,0.1514523,0.153527,0.1556017,0.1576763,0.159751,0.1618257,0.1639004,0.1659751,0.1680498,0.1701245,0.1721992,0.1742738,0.1763485,0.1784232,0.1804979,0.1825726,0.1846473,0.186722,0.1887967,0.1908714,0.192946,0.1950207,0.1970954,0.1991701,0.2012448,0.2033195,0.2053942,0.2074689,0.2095436,0.2116182,0.2136929,0.2157676,0.2178423,0.219917,0.2219917,0.2240664,0.2261411,0.2282158,0.2302904,0.2323651,0.2344398,0.2365145,0.2385892,0.2406639,0.2427386,0.2448133,0.246888,0.2489626,0.2510373,0.253112,0.2551867,0.2572614,0.2593361,0.2614108,0.2634855,0.2655602,0.2676348,0.2697095,0.2717842,0.2738589,0.2759336,0.2780083,0.280083,0.2821577,0.2842323,0.286307,0.2883817,0.2904564,0.2925311,0.2946058,0.2966805,0.2987552,0.3008299,0.3029045,0.3049792,0.3070539,0.3091286,0.3112033,0.313278,0.3153527,0.3174274,0.3195021,0.3215767,0.3236514,0.3257261,0.3278008,0.3298755,0.3319502,0.3340249,0.3360996,0.3381743,0.3402489,0.3423236,0.3443983,0.346473,0.3485477,0.3506224,0.3526971,0.3547718,0.3568465,0.3589211,0.3609958,0.3630705,0.3651452,0.3672199,0.3692946,0.3713693,0.373444,0.3755186,0.3775933,0.379668,0.3817427,0.3838174,0.3858921,0.3879668,0.3900415,0.3921162,0.3941908,0.3962655,0.3983402,0.4004149,0.4024896,0.4045643,0.406639,0.4087137,0.4107884,0.412863,0.4149377,0.4170124,0.4190871,0.4211618,0.4232365,0.4253112,0.4273859,0.4294606,0.4315352,0.4336099,0.4356846,0.4377593,0.439834,0.4419087,0.4439834,0.4460581,0.4481328,0.4502074,0.4522821,0.4543568,0.4564315,0.4585062,0.4605809,0.4626556,0.4647303,0.466805,0.4688796,0.4709543,0.473029,0.4751037,0.4771784,0.4792531,0.4813278,0.4834025,0.4854771,0.4875518,0.4896265,0.4917012,0.4937759,0.4958506,0.4979253,0.5,0.5020747,0.5041494,0.506224,0.5082988,0.5103734,0.5124481,0.5145228,0.5165975,0.5186722,0.5207469,0.5228215,0.5248963,0.5269709,0.5290456,0.5311203,0.533195,0.5352697,0.5373444,0.5394191,0.5414938,0.5435684,0.5456432,0.5477178,0.5497925,0.5518672,0.5539419,0.5560166,0.5580913,0.5601659,0.5622407,0.5643153,0.56639,0.5684647,0.5705394,0.5726141,0.5746888,0.5767635,0.5788382,0.5809128,0.5829875,0.5850622,0.5871369,0.5892116,0.5912863,0.593361,0.5954357,0.5975103,0.5995851,0.6016597,0.6037344,0.6058091,0.6078838,0.6099585,0.6120332,0.6141078,0.6161826,0.6182572,0.6203319,0.6224066,0.6244813,0.626556,0.6286307,0.6307054,0.6327801,0.6348547,0.6369295,0.6390041,0.6410788,0.6431535,0.6452282,0.6473029,0.6493776,0.6514522,0.653527,0.6556016,0.6576763,0.659751,0.6618257,0.6639004,0.6659751,0.6680498,0.6701245,0.6721991,0.6742738,0.6763485,0.6784232,0.6804979,0.6825726,0.6846473,0.686722,0.6887966,0.6908714,0.692946,0.6950207,0.6970954,0.6991701,0.7012448,0.7033195,0.7053941,0.7074689,0.7095435,0.7116182,0.7136929,0.7157676,0.7178423,0.719917,0.7219917,0.7240664,0.726141,0.7282158,0.7302904,0.7323651,0.7344398,0.7365145,0.7385892,0.7406639,0.7427385,0.7448133,0.7468879,0.7489626,0.7510373,0.753112,0.7551867,0.7572614,0.7593361,0.7614108,0.7634854,0.7655602,0.7676348,0.7697095,0.7717842,0.7738589,0.7759336,0.7780083,0.7800829,0.7821577,0.7842323,0.786307,0.7883817,0.7904564,0.7925311,0.7946058,0.7966805,0.7987552,0.8008298,0.8029045,0.8049792,0.8070539,0.8091286,0.8112033,0.813278,0.8153527,0.8174273,0.8195021,0.8215767,0.8236514,0.8257261,0.8278008,0.8298755,0.8319502,0.8340248,0.8360996,0.8381742,0.8402489,0.8423236,0.8443983,0.846473,0.8485477,0.8506224,0.8526971,0.8547717,0.8568465,0.8589211,0.8609958,0.8630705,0.8651452,0.8672199,0.8692946,0.8713692,0.873444,0.8755186,0.8775933,0.879668,0.8817427,0.8838174,0.8858921,0.8879668,0.8900415,0.8921161,0.8941908,0.8962655,0.8983402,0.9004149,0.9024896,0.9045643,0.906639,0.9087136,0.9107884,0.912863,0.9149377,0.9170124,0.9190871,0.9211618,0.9232365,0.9253111,0.9273859,0.9294605,0.9315352,0.9336099,0.9356846,0.9377593,0.939834,0.9419087,0.9439834,0.946058,0.9481328,0.9502074,0.9522821,0.9543568,0.9564315,0.9585062,0.9605809,0.9626555,0.9647303,0.9668049,0.9688796,0.9709543,0.973029,0.9751037,0.9771784,0.9792531,0.9813278,0.9834024,0.9854771,0.9875518,0.9896265,0.9917012,0.9937759,0.9958506,0.9979253]

Group244.children.append(OrientationInterpolator262)
OrientationInterpolator263 = x3d.OrientationInterpolator()
OrientationInterpolator263.DEF = "Keyframe_r_talocrural"
OrientationInterpolator263.key = [0,0.002074689,0.004149377,0.006224066,0.008298755,0.01037344,0.01244813,0.01452282,0.01659751,0.0186722,0.02074689,0.02282158,0.02489626,0.02697095,0.02904564,0.03112033,0.03319502,0.03526971,0.0373444,0.03941908,0.04149377,0.04356846,0.04564315,0.04771784,0.04979253,0.05186722,0.05394191,0.05601659,0.05809128,0.06016597,0.06224066,0.06431535,0.06639004,0.06846473,0.07053941,0.0726141,0.07468879,0.07676348,0.07883817,0.08091286,0.08298755,0.08506224,0.08713692,0.08921161,0.0912863,0.09336099,0.09543568,0.09751037,0.09958506,0.1016597,0.1037344,0.1058091,0.1078838,0.1099585,0.1120332,0.1141079,0.1161826,0.1182573,0.1203319,0.1224066,0.1244813,0.126556,0.1286307,0.1307054,0.1327801,0.1348548,0.1369295,0.1390041,0.1410788,0.1431535,0.1452282,0.1473029,0.1493776,0.1514523,0.153527,0.1556017,0.1576763,0.159751,0.1618257,0.1639004,0.1659751,0.1680498,0.1701245,0.1721992,0.1742738,0.1763485,0.1784232,0.1804979,0.1825726,0.1846473,0.186722,0.1887967,0.1908714,0.192946,0.1950207,0.1970954,0.1991701,0.2012448,0.2033195,0.2053942,0.2074689,0.2095436,0.2116182,0.2136929,0.2157676,0.2178423,0.219917,0.2219917,0.2240664,0.2261411,0.2282158,0.2302904,0.2323651,0.2344398,0.2365145,0.2385892,0.2406639,0.2427386,0.2448133,0.246888,0.2489626,0.2510373,0.253112,0.2551867,0.2572614,0.2593361,0.2614108,0.2634855,0.2655602,0.2676348,0.2697095,0.2717842,0.2738589,0.2759336,0.2780083,0.280083,0.2821577,0.2842323,0.286307,0.2883817,0.2904564,0.2925311,0.2946058,0.2966805,0.2987552,0.3008299,0.3029045,0.3049792,0.3070539,0.3091286,0.3112033,0.313278,0.3153527,0.3174274,0.3195021,0.3215767,0.3236514,0.3257261,0.3278008,0.3298755,0.3319502,0.3340249,0.3360996,0.3381743,0.3402489,0.3423236,0.3443983,0.346473,0.3485477,0.3506224,0.3526971,0.3547718,0.3568465,0.3589211,0.3609958,0.3630705,0.3651452,0.3672199,0.3692946,0.3713693,0.373444,0.3755186,0.3775933,0.379668,0.3817427,0.3838174,0.3858921,0.3879668,0.3900415,0.3921162,0.3941908,0.3962655,0.3983402,0.4004149,0.4024896,0.4045643,0.406639,0.4087137,0.4107884,0.412863,0.4149377,0.4170124,0.4190871,0.4211618,0.4232365,0.4253112,0.4273859,0.4294606,0.4315352,0.4336099,0.4356846,0.4377593,0.439834,0.4419087,0.4439834,0.4460581,0.4481328,0.4502074,0.4522821,0.4543568,0.4564315,0.4585062,0.4605809,0.4626556,0.4647303,0.466805,0.4688796,0.4709543,0.473029,0.4751037,0.4771784,0.4792531,0.4813278,0.4834025,0.4854771,0.4875518,0.4896265,0.4917012,0.4937759,0.4958506,0.4979253,0.5,0.5020747,0.5041494,0.506224,0.5082988,0.5103734,0.5124481,0.5145228,0.5165975,0.5186722,0.5207469,0.5228215,0.5248963,0.5269709,0.5290456,0.5311203,0.533195,0.5352697,0.5373444,0.5394191,0.5414938,0.5435684,0.5456432,0.5477178,0.5497925,0.5518672,0.5539419,0.5560166,0.5580913,0.5601659,0.5622407,0.5643153,0.56639,0.5684647,0.5705394,0.5726141,0.5746888,0.5767635,0.5788382,0.5809128,0.5829875,0.5850622,0.5871369,0.5892116,0.5912863,0.593361,0.5954357,0.5975103,0.5995851,0.6016597,0.6037344,0.6058091,0.6078838,0.6099585,0.6120332,0.6141078,0.6161826,0.6182572,0.6203319,0.6224066,0.6244813,0.626556,0.6286307,0.6307054,0.6327801,0.6348547,0.6369295,0.6390041,0.6410788,0.6431535,0.6452282,0.6473029,0.6493776,0.6514522,0.653527,0.6556016,0.6576763,0.659751,0.6618257,0.6639004,0.6659751,0.6680498,0.6701245,0.6721991,0.6742738,0.6763485,0.6784232,0.6804979,0.6825726,0.6846473,0.686722,0.6887966,0.6908714,0.692946,0.6950207,0.6970954,0.6991701,0.7012448,0.7033195,0.7053941,0.7074689,0.7095435,0.7116182,0.7136929,0.7157676,0.7178423,0.719917,0.7219917,0.7240664,0.726141,0.7282158,0.7302904,0.7323651,0.7344398,0.7365145,0.7385892,0.7406639,0.7427385,0.7448133,0.7468879,0.7489626,0.7510373,0.753112,0.7551867,0.7572614,0.7593361,0.7614108,0.7634854,0.7655602,0.7676348,0.7697095,0.7717842,0.7738589,0.7759336,0.7780083,0.7800829,0.7821577,0.7842323,0.786307,0.7883817,0.7904564,0.7925311,0.7946058,0.7966805,0.7987552,0.8008298,0.8029045,0.8049792,0.8070539,0.8091286,0.8112033,0.813278,0.8153527,0.8174273,0.8195021,0.8215767,0.8236514,0.8257261,0.8278008,0.8298755,0.8319502,0.8340248,0.8360996,0.8381742,0.8402489,0.8423236,0.8443983,0.846473,0.8485477,0.8506224,0.8526971,0.8547717,0.8568465,0.8589211,0.8609958,0.8630705,0.8651452,0.8672199,0.8692946,0.8713692,0.873444,0.8755186,0.8775933,0.879668,0.8817427,0.8838174,0.8858921,0.8879668,0.8900415,0.8921161,0.8941908,0.8962655,0.8983402,0.9004149,0.9024896,0.9045643,0.906639,0.9087136,0.9107884,0.912863,0.9149377,0.9170124,0.9190871,0.9211618,0.9232365,0.9253111,0.9273859,0.9294605,0.9315352,0.9336099,0.9356846,0.9377593,0.939834,0.9419087,0.9439834,0.946058,0.9481328,0.9502074,0.9522821,0.9543568,0.9564315,0.9585062,0.9605809,0.9626555,0.9647303,0.9668049,0.9688796,0.9709543,0.973029,0.9751037,0.9771784,0.9792531,0.9813278,0.9834024,0.9854771,0.9875518,0.9896265,0.9917012,0.9937759,0.9958506,0.9979253]

Group244.children.append(OrientationInterpolator263)
OrientationInterpolator264 = x3d.OrientationInterpolator()
OrientationInterpolator264.DEF = "Keyframe_r_metatarsophalangeal_2"
OrientationInterpolator264.key = [0,0.002074689,0.004149377,0.006224066,0.008298755,0.01037344,0.01244813,0.01452282,0.01659751,0.0186722,0.02074689,0.02282158,0.02489626,0.02697095,0.02904564,0.03112033,0.03319502,0.03526971,0.0373444,0.03941908,0.04149377,0.04356846,0.04564315,0.04771784,0.04979253,0.05186722,0.05394191,0.05601659,0.05809128,0.06016597,0.06224066,0.06431535,0.06639004,0.06846473,0.07053941,0.0726141,0.07468879,0.07676348,0.07883817,0.08091286,0.08298755,0.08506224,0.08713692,0.08921161,0.0912863,0.09336099,0.09543568,0.09751037,0.09958506,0.1016597,0.1037344,0.1058091,0.1078838,0.1099585,0.1120332,0.1141079,0.1161826,0.1182573,0.1203319,0.1224066,0.1244813,0.126556,0.1286307,0.1307054,0.1327801,0.1348548,0.1369295,0.1390041,0.1410788,0.1431535,0.1452282,0.1473029,0.1493776,0.1514523,0.153527,0.1556017,0.1576763,0.159751,0.1618257,0.1639004,0.1659751,0.1680498,0.1701245,0.1721992,0.1742738,0.1763485,0.1784232,0.1804979,0.1825726,0.1846473,0.186722,0.1887967,0.1908714,0.192946,0.1950207,0.1970954,0.1991701,0.2012448,0.2033195,0.2053942,0.2074689,0.2095436,0.2116182,0.2136929,0.2157676,0.2178423,0.219917,0.2219917,0.2240664,0.2261411,0.2282158,0.2302904,0.2323651,0.2344398,0.2365145,0.2385892,0.2406639,0.2427386,0.2448133,0.246888,0.2489626,0.2510373,0.253112,0.2551867,0.2572614,0.2593361,0.2614108,0.2634855,0.2655602,0.2676348,0.2697095,0.2717842,0.2738589,0.2759336,0.2780083,0.280083,0.2821577,0.2842323,0.286307,0.2883817,0.2904564,0.2925311,0.2946058,0.2966805,0.2987552,0.3008299,0.3029045,0.3049792,0.3070539,0.3091286,0.3112033,0.313278,0.3153527,0.3174274,0.3195021,0.3215767,0.3236514,0.3257261,0.3278008,0.3298755,0.3319502,0.3340249,0.3360996,0.3381743,0.3402489,0.3423236,0.3443983,0.346473,0.3485477,0.3506224,0.3526971,0.3547718,0.3568465,0.3589211,0.3609958,0.3630705,0.3651452,0.3672199,0.3692946,0.3713693,0.373444,0.3755186,0.3775933,0.379668,0.3817427,0.3838174,0.3858921,0.3879668,0.3900415,0.3921162,0.3941908,0.3962655,0.3983402,0.4004149,0.4024896,0.4045643,0.406639,0.4087137,0.4107884,0.412863,0.4149377,0.4170124,0.4190871,0.4211618,0.4232365,0.4253112,0.4273859,0.4294606,0.4315352,0.4336099,0.4356846,0.4377593,0.439834,0.4419087,0.4439834,0.4460581,0.4481328,0.4502074,0.4522821,0.4543568,0.4564315,0.4585062,0.4605809,0.4626556,0.4647303,0.466805,0.4688796,0.4709543,0.473029,0.4751037,0.4771784,0.4792531,0.4813278,0.4834025,0.4854771,0.4875518,0.4896265,0.4917012,0.4937759,0.4958506,0.4979253,0.5,0.5020747,0.5041494,0.506224,0.5082988,0.5103734,0.5124481,0.5145228,0.5165975,0.5186722,0.5207469,0.5228215,0.5248963,0.5269709,0.5290456,0.5311203,0.533195,0.5352697,0.5373444,0.5394191,0.5414938,0.5435684,0.5456432,0.5477178,0.5497925,0.5518672,0.5539419,0.5560166,0.5580913,0.5601659,0.5622407,0.5643153,0.56639,0.5684647,0.5705394,0.5726141,0.5746888,0.5767635,0.5788382,0.5809128,0.5829875,0.5850622,0.5871369,0.5892116,0.5912863,0.593361,0.5954357,0.5975103,0.5995851,0.6016597,0.6037344,0.6058091,0.6078838,0.6099585,0.6120332,0.6141078,0.6161826,0.6182572,0.6203319,0.6224066,0.6244813,0.626556,0.6286307,0.6307054,0.6327801,0.6348547,0.6369295,0.6390041,0.6410788,0.6431535,0.6452282,0.6473029,0.6493776,0.6514522,0.653527,0.6556016,0.6576763,0.659751,0.6618257,0.6639004,0.6659751,0.6680498,0.6701245,0.6721991,0.6742738,0.6763485,0.6784232,0.6804979,0.6825726,0.6846473,0.686722,0.6887966,0.6908714,0.692946,0.6950207,0.6970954,0.6991701,0.7012448,0.7033195,0.7053941,0.7074689,0.7095435,0.7116182,0.7136929,0.7157676,0.7178423,0.719917,0.7219917,0.7240664,0.726141,0.7282158,0.7302904,0.7323651,0.7344398,0.7365145,0.7385892,0.7406639,0.7427385,0.7448133,0.7468879,0.7489626,0.7510373,0.753112,0.7551867,0.7572614,0.7593361,0.7614108,0.7634854,0.7655602,0.7676348,0.7697095,0.7717842,0.7738589,0.7759336,0.7780083,0.7800829,0.7821577,0.7842323,0.786307,0.7883817,0.7904564,0.7925311,0.7946058,0.7966805,0.7987552,0.8008298,0.8029045,0.8049792,0.8070539,0.8091286,0.8112033,0.813278,0.8153527,0.8174273,0.8195021,0.8215767,0.8236514,0.8257261,0.8278008,0.8298755,0.8319502,0.8340248,0.8360996,0.8381742,0.8402489,0.8423236,0.8443983,0.846473,0.8485477,0.8506224,0.8526971,0.8547717,0.8568465,0.8589211,0.8609958,0.8630705,0.8651452,0.8672199,0.8692946,0.8713692,0.873444,0.8755186,0.8775933,0.879668,0.8817427,0.8838174,0.8858921,0.8879668,0.8900415,0.8921161,0.8941908,0.8962655,0.8983402,0.9004149,0.9024896,0.9045643,0.906639,0.9087136,0.9107884,0.912863,0.9149377,0.9170124,0.9190871,0.9211618,0.9232365,0.9253111,0.9273859,0.9294605,0.9315352,0.9336099,0.9356846,0.9377593,0.939834,0.9419087,0.9439834,0.946058,0.9481328,0.9502074,0.9522821,0.9543568,0.9564315,0.9585062,0.9605809,0.9626555,0.9647303,0.9668049,0.9688796,0.9709543,0.973029,0.9751037,0.9771784,0.9792531,0.9813278,0.9834024,0.9854771,0.9875518,0.9896265,0.9917012,0.9937759,0.9958506,0.9979253]

Group244.children.append(OrientationInterpolator264)
ROUTE265 = x3d.ROUTE()
ROUTE265.fromField = "fraction_changed"
ROUTE265.fromNode = "KeyframeTimer"
ROUTE265.toField = "set_fraction"
ROUTE265.toNode = "Keyframe_humanoid_root_Position"

Group244.children.append(ROUTE265)
ROUTE266 = x3d.ROUTE()
ROUTE266.fromField = "fraction_changed"
ROUTE266.fromNode = "KeyframeTimer"
ROUTE266.toField = "set_fraction"
ROUTE266.toNode = "Keyframe_humanoid_root"

Group244.children.append(ROUTE266)
ROUTE267 = x3d.ROUTE()
ROUTE267.fromField = "fraction_changed"
ROUTE267.fromNode = "KeyframeTimer"
ROUTE267.toField = "set_fraction"
ROUTE267.toNode = "Keyframe_sacroiliac"

Group244.children.append(ROUTE267)
ROUTE268 = x3d.ROUTE()
ROUTE268.fromField = "fraction_changed"
ROUTE268.fromNode = "KeyframeTimer"
ROUTE268.toField = "set_fraction"
ROUTE268.toNode = "Keyframe_l_shoulder"

Group244.children.append(ROUTE268)
ROUTE269 = x3d.ROUTE()
ROUTE269.fromField = "fraction_changed"
ROUTE269.fromNode = "KeyframeTimer"
ROUTE269.toField = "set_fraction"
ROUTE269.toNode = "Keyframe_l_elbow"

Group244.children.append(ROUTE269)
ROUTE270 = x3d.ROUTE()
ROUTE270.fromField = "fraction_changed"
ROUTE270.fromNode = "KeyframeTimer"
ROUTE270.toField = "set_fraction"
ROUTE270.toNode = "Keyframe_l_radiocarpal"

Group244.children.append(ROUTE270)
ROUTE271 = x3d.ROUTE()
ROUTE271.fromField = "fraction_changed"
ROUTE271.fromNode = "KeyframeTimer"
ROUTE271.toField = "set_fraction"
ROUTE271.toNode = "Keyframe_r_shoulder"

Group244.children.append(ROUTE271)
ROUTE272 = x3d.ROUTE()
ROUTE272.fromField = "fraction_changed"
ROUTE272.fromNode = "KeyframeTimer"
ROUTE272.toField = "set_fraction"
ROUTE272.toNode = "Keyframe_r_elbow"

Group244.children.append(ROUTE272)
ROUTE273 = x3d.ROUTE()
ROUTE273.fromField = "fraction_changed"
ROUTE273.fromNode = "KeyframeTimer"
ROUTE273.toField = "set_fraction"
ROUTE273.toNode = "Keyframe_r_radiocarpal"

Group244.children.append(ROUTE273)
ROUTE274 = x3d.ROUTE()
ROUTE274.fromField = "fraction_changed"
ROUTE274.fromNode = "KeyframeTimer"
ROUTE274.toField = "set_fraction"
ROUTE274.toNode = "Keyframe_vl5"

Group244.children.append(ROUTE274)
ROUTE275 = x3d.ROUTE()
ROUTE275.fromField = "fraction_changed"
ROUTE275.fromNode = "KeyframeTimer"
ROUTE275.toField = "set_fraction"
ROUTE275.toNode = "Keyframe_skullbase"

Group244.children.append(ROUTE275)
ROUTE276 = x3d.ROUTE()
ROUTE276.fromField = "fraction_changed"
ROUTE276.fromNode = "KeyframeTimer"
ROUTE276.toField = "set_fraction"
ROUTE276.toNode = "Keyframe_l_hip"

Group244.children.append(ROUTE276)
ROUTE277 = x3d.ROUTE()
ROUTE277.fromField = "fraction_changed"
ROUTE277.fromNode = "KeyframeTimer"
ROUTE277.toField = "set_fraction"
ROUTE277.toNode = "Keyframe_l_knee"

Group244.children.append(ROUTE277)
ROUTE278 = x3d.ROUTE()
ROUTE278.fromField = "fraction_changed"
ROUTE278.fromNode = "KeyframeTimer"
ROUTE278.toField = "set_fraction"
ROUTE278.toNode = "Keyframe_l_talocrural"

Group244.children.append(ROUTE278)
ROUTE279 = x3d.ROUTE()
ROUTE279.fromField = "fraction_changed"
ROUTE279.fromNode = "KeyframeTimer"
ROUTE279.toField = "set_fraction"
ROUTE279.toNode = "Keyframe_l_metatarsophalangeal_2"

Group244.children.append(ROUTE279)
ROUTE280 = x3d.ROUTE()
ROUTE280.fromField = "fraction_changed"
ROUTE280.fromNode = "KeyframeTimer"
ROUTE280.toField = "set_fraction"
ROUTE280.toNode = "Keyframe_r_hip"

Group244.children.append(ROUTE280)
ROUTE281 = x3d.ROUTE()
ROUTE281.fromField = "fraction_changed"
ROUTE281.fromNode = "KeyframeTimer"
ROUTE281.toField = "set_fraction"
ROUTE281.toNode = "Keyframe_r_knee"

Group244.children.append(ROUTE281)
ROUTE282 = x3d.ROUTE()
ROUTE282.fromField = "fraction_changed"
ROUTE282.fromNode = "KeyframeTimer"
ROUTE282.toField = "set_fraction"
ROUTE282.toNode = "Keyframe_r_talocrural"

Group244.children.append(ROUTE282)
ROUTE283 = x3d.ROUTE()
ROUTE283.fromField = "fraction_changed"
ROUTE283.fromNode = "KeyframeTimer"
ROUTE283.toField = "set_fraction"
ROUTE283.toNode = "Keyframe_r_metatarsophalangeal_2"

Group244.children.append(ROUTE283)
ROUTE284 = x3d.ROUTE()
ROUTE284.fromField = "value_changed"
ROUTE284.fromNode = "Keyframe_humanoid_root_Position"
ROUTE284.toField = "translation"
ROUTE284.toNode = "hanim_humanoid_root"

Group244.children.append(ROUTE284)
ROUTE285 = x3d.ROUTE()
ROUTE285.fromField = "value_changed"
ROUTE285.fromNode = "Keyframe_humanoid_root"
ROUTE285.toField = "rotation"
ROUTE285.toNode = "hanim_humanoid_root"

Group244.children.append(ROUTE285)
ROUTE286 = x3d.ROUTE()
ROUTE286.fromField = "value_changed"
ROUTE286.fromNode = "Keyframe_sacroiliac"
ROUTE286.toField = "rotation"
ROUTE286.toNode = "hanim_sacroiliac"

Group244.children.append(ROUTE286)
ROUTE287 = x3d.ROUTE()
ROUTE287.fromField = "value_changed"
ROUTE287.fromNode = "Keyframe_l_shoulder"
ROUTE287.toField = "rotation"
ROUTE287.toNode = "hanim_l_shoulder"

Group244.children.append(ROUTE287)
ROUTE288 = x3d.ROUTE()
ROUTE288.fromField = "value_changed"
ROUTE288.fromNode = "Keyframe_l_elbow"
ROUTE288.toField = "rotation"
ROUTE288.toNode = "hanim_l_elbow"

Group244.children.append(ROUTE288)
ROUTE289 = x3d.ROUTE()
ROUTE289.fromField = "value_changed"
ROUTE289.fromNode = "Keyframe_l_radiocarpal"
ROUTE289.toField = "rotation"
ROUTE289.toNode = "hanim_l_radiocarpal"

Group244.children.append(ROUTE289)
ROUTE290 = x3d.ROUTE()
ROUTE290.fromField = "value_changed"
ROUTE290.fromNode = "Keyframe_r_shoulder"
ROUTE290.toField = "rotation"
ROUTE290.toNode = "hanim_r_shoulder"

Group244.children.append(ROUTE290)
ROUTE291 = x3d.ROUTE()
ROUTE291.fromField = "value_changed"
ROUTE291.fromNode = "Keyframe_r_elbow"
ROUTE291.toField = "rotation"
ROUTE291.toNode = "hanim_r_elbow"

Group244.children.append(ROUTE291)
ROUTE292 = x3d.ROUTE()
ROUTE292.fromField = "value_changed"
ROUTE292.fromNode = "Keyframe_r_radiocarpal"
ROUTE292.toField = "rotation"
ROUTE292.toNode = "hanim_r_radiocarpal"

Group244.children.append(ROUTE292)
ROUTE293 = x3d.ROUTE()
ROUTE293.fromField = "value_changed"
ROUTE293.fromNode = "Keyframe_vl5"
ROUTE293.toField = "rotation"
ROUTE293.toNode = "hanim_vl5"

Group244.children.append(ROUTE293)
ROUTE294 = x3d.ROUTE()
ROUTE294.fromField = "value_changed"
ROUTE294.fromNode = "Keyframe_skullbase"
ROUTE294.toField = "rotation"
ROUTE294.toNode = "hanim_skullbase"

Group244.children.append(ROUTE294)
ROUTE295 = x3d.ROUTE()
ROUTE295.fromField = "value_changed"
ROUTE295.fromNode = "Keyframe_l_hip"
ROUTE295.toField = "rotation"
ROUTE295.toNode = "hanim_l_hip"

Group244.children.append(ROUTE295)
ROUTE296 = x3d.ROUTE()
ROUTE296.fromField = "value_changed"
ROUTE296.fromNode = "Keyframe_l_knee"
ROUTE296.toField = "rotation"
ROUTE296.toNode = "hanim_l_knee"

Group244.children.append(ROUTE296)
ROUTE297 = x3d.ROUTE()
ROUTE297.fromField = "value_changed"
ROUTE297.fromNode = "Keyframe_l_talocrural"
ROUTE297.toField = "rotation"
ROUTE297.toNode = "hanim_l_talocrural"

Group244.children.append(ROUTE297)
ROUTE298 = x3d.ROUTE()
ROUTE298.fromField = "value_changed"
ROUTE298.fromNode = "Keyframe_l_talocrural"
ROUTE298.toField = "rotation"
ROUTE298.toNode = "hanim_l_metatarsophalangeal_2"

Group244.children.append(ROUTE298)
ROUTE299 = x3d.ROUTE()
ROUTE299.fromField = "value_changed"
ROUTE299.fromNode = "Keyframe_r_hip"
ROUTE299.toField = "rotation"
ROUTE299.toNode = "hanim_r_hip"

Group244.children.append(ROUTE299)
ROUTE300 = x3d.ROUTE()
ROUTE300.fromField = "value_changed"
ROUTE300.fromNode = "Keyframe_r_knee"
ROUTE300.toField = "rotation"
ROUTE300.toNode = "hanim_r_knee"

Group244.children.append(ROUTE300)
ROUTE301 = x3d.ROUTE()
ROUTE301.fromField = "value_changed"
ROUTE301.fromNode = "Keyframe_l_talocrural"
ROUTE301.toField = "rotation"
ROUTE301.toNode = "hanim_r_talocrural"

Group244.children.append(ROUTE301)
ROUTE302 = x3d.ROUTE()
ROUTE302.fromField = "value_changed"
ROUTE302.fromNode = "Keyframe_r_metatarsophalangeal_2"
ROUTE302.toField = "rotation"
ROUTE302.toNode = "hanim_r_metatarsophalangeal_2"

Group244.children.append(ROUTE302)

Scene21.children.append(Group244)

X3D0.Scene = Scene21
f = open("../data/KoreanCharacterMotionAnnexC01Jin.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/KoreanCharacterMotionAnnexC01Jin.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
