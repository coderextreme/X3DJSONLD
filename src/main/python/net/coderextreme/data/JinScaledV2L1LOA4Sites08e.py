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
meta3.content = "JinScaledV2L1LOA4Sites07f.x3d"

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
WorldInfo23.title = "Jin LOA4 Level 1 All Joints, Segments, Sites"

Scene22.children.append(WorldInfo23)
NavigationInfo24 = x3d.NavigationInfo()

Scene22.children.append(NavigationInfo24)
Group25 = x3d.Group()
Group25.DEF = "SceneViewpoints"
Viewpoint26 = x3d.Viewpoint()
Viewpoint26.centerOfRotation = [0,1,0]
Viewpoint26.description = "JinLOA4"
Viewpoint26.position = [0,1,3]

Group25.children.append(Viewpoint26)
Viewpoint27 = x3d.Viewpoint()
Viewpoint27.centerOfRotation = [0,0.9149,0.0016]
Viewpoint27.description = "JinLOA4 Front"
Viewpoint27.position = [0,0.4,4]

Group25.children.append(Viewpoint27)
Viewpoint28 = x3d.Viewpoint()
Viewpoint28.centerOfRotation = [0,0.9149,0.0016]
Viewpoint28.description = "JinLOA4 Front Close"
Viewpoint28.position = [0,0.8,2]

Group25.children.append(Viewpoint28)
Viewpoint29 = x3d.Viewpoint()
Viewpoint29.centerOfRotation = [0,0.9149,0.0016]
Viewpoint29.description = "JinLOA4 Front Closer"
Viewpoint29.position = [0,1.2,1]

Group25.children.append(Viewpoint29)
Viewpoint30 = x3d.Viewpoint()
Viewpoint30.centerOfRotation = [0,1.5,0.0016]
Viewpoint30.description = "JinLOA4 Front Face"
Viewpoint30.position = [0,1.63,1]

Group25.children.append(Viewpoint30)
Viewpoint31 = x3d.Viewpoint()
Viewpoint31.centerOfRotation = [0,0.9149,0.0016]
Viewpoint31.description = "JinLOA4 Right Side"
Viewpoint31.orientation = [0,1,0,1.5708]
Viewpoint31.position = [2.6,0.8,0]

Group25.children.append(Viewpoint31)
Viewpoint32 = x3d.Viewpoint()
Viewpoint32.centerOfRotation = [0,0.9149,0.0016]
Viewpoint32.description = "JinLOA4 Right Side Close"
Viewpoint32.orientation = [0,1,0,1.2]
Viewpoint32.position = [1,0.8,0.5]

Group25.children.append(Viewpoint32)
Viewpoint33 = x3d.Viewpoint()
Viewpoint33.centerOfRotation = [0,0.9149,0.0016]
Viewpoint33.description = "JinLOA4 Left Side Close"
Viewpoint33.orientation = [0,1,0,-1.2]
Viewpoint33.position = [-1,0.8,0.5]

Group25.children.append(Viewpoint33)
Viewpoint34 = x3d.Viewpoint()
Viewpoint34.centerOfRotation = [0,0.9149,0.0016]
Viewpoint34.description = "JinLOA4 Left Side"
Viewpoint34.orientation = [0,1,0,-1.5708]
Viewpoint34.position = [-2.6,0.8,0]

Group25.children.append(Viewpoint34)
Viewpoint35 = x3d.Viewpoint()
Viewpoint35.centerOfRotation = [0,0.9149,0.0016]
Viewpoint35.description = "JinLOA4 Top"
Viewpoint35.orientation = [1,0,0,-1.5708]
Viewpoint35.position = [0,3.5,0]

Group25.children.append(Viewpoint35)

Scene22.children.append(Group25)
Group36 = x3d.Group()
Group36.DEF = "Markers"
Transform37 = x3d.Transform()
Transform37.DEF = "SiteMarker"
Shape38 = x3d.Shape()
Shape38.DEF = "HAnimSiteShape"
Sphere39 = x3d.Sphere()
Sphere39.radius = 0.01

Shape38.geometry = Sphere39
Appearance40 = x3d.Appearance()
Material41 = x3d.Material()
Material41.diffuseColor = [0,1,0]
Material41.emissiveColor = [0,1,0]

Appearance40.material = Material41

Shape38.appearance = Appearance40

Transform37.children.append(Shape38)

Group36.children.append(Transform37)

Scene22.children.append(Group36)
HAnimHumanoid42 = x3d.HAnimHumanoid()
HAnimHumanoid42.name = "JinLOA4"
HAnimHumanoid42.DEF = "hanim_JinLOA4"
HAnimHumanoid42.loa = 4
HAnimHumanoid42.version = "2.0"
MetadataSet43 = x3d.MetadataSet()
MetadataSet43.name = "HAnimHumanoid.info"
MetadataSet43.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"
MetadataString44 = x3d.MetadataString()
MetadataString44.name = "authorName"
MetadataString44.value = ["Jin Hoon Lee and Min Joo Lee, Chul Hee Jung and Myeong Won Lee"]

if MetadataSet43.value is None:
    MetadataSet43.value = []
MetadataSet43.value.append(MetadataString44)
MetadataString45 = x3d.MetadataString()
MetadataString45.name = "authorEmail"
MetadataString45.value = ["myeongwonlee@gmail.com"]

if MetadataSet43.value is None:
    MetadataSet43.value = []
MetadataSet43.value.append(MetadataString45)
MetadataString46 = x3d.MetadataString()
MetadataString46.name = "creationDate"
MetadataString46.value = ["31 March 2011"]

if MetadataSet43.value is None:
    MetadataSet43.value = []
MetadataSet43.value.append(MetadataString46)
MetadataString47 = x3d.MetadataString()
MetadataString47.name = "John and Joe"
MetadataString47.value = ["Modifiers"]

if MetadataSet43.value is None:
    MetadataSet43.value = []
MetadataSet43.value.append(MetadataString47)
MetadataString48 = x3d.MetadataString()
MetadataString48.name = "modificationDate"
MetadataString48.value = ["25 March 2024"]

if MetadataSet43.value is None:
    MetadataSet43.value = []
MetadataSet43.value.append(MetadataString48)
MetadataString49 = x3d.MetadataString()
MetadataString49.name = "gender"
MetadataString49.value = ["female"]

if MetadataSet43.value is None:
    MetadataSet43.value = []
MetadataSet43.value.append(MetadataString49)
MetadataFloat50 = x3d.MetadataFloat()
MetadataFloat50.name = "height"
MetadataFloat50.value = [1.5]

if MetadataSet43.value is None:
    MetadataSet43.value = []
MetadataSet43.value.append(MetadataFloat50)
MetadataString51 = x3d.MetadataString()
MetadataString51.name = "humanoidVersion"
MetadataString51.value = ["2.0"]

if MetadataSet43.value is None:
    MetadataSet43.value = []
MetadataSet43.value.append(MetadataString51)

HAnimHumanoid42.metadata = MetadataSet43
HAnimJoint52 = x3d.HAnimJoint()
HAnimJoint52.name = "humanoid_root"
HAnimJoint52.DEF = "hanim_humanoid_root"
HAnimJoint52.center = [0,0.826,-0.016]
HAnimJoint52.ulimit = [0,0,0]
HAnimJoint52.llimit = [0,0,0]
HAnimSegment53 = x3d.HAnimSegment()
HAnimSegment53.name = "sacrum"
HAnimSegment53.DEF = "hanim_sacrum"
Shape54 = x3d.Shape()
Shape54.DEF = "sacrum_Shape"
Appearance55 = x3d.Appearance()
Material56 = x3d.Material()
Material56.DEF = "SurfaceDefault"
Material56.diffuseColor = [0.588,0.588,0.588]
Material56.transparency = 0.8

Appearance55.material = Material56
ImageTexture57 = x3d.ImageTexture()
ImageTexture57.DEF = "JinLOA4TextureAtlas"
ImageTexture57.url = ["images/Jin.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/images/Jin.png"]

Appearance55.texture = ImageTexture57

Shape54.appearance = Appearance55
IndexedFaceSet58 = x3d.IndexedFaceSet()
IndexedFaceSet58.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]
IndexedFaceSet58.creaseAngle = 3.14159
IndexedFaceSet58.texCoordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]
Coordinate59 = x3d.Coordinate()

IndexedFaceSet58.coord = Coordinate59
TextureCoordinate60 = x3d.TextureCoordinate()

IndexedFaceSet58.texCoord = TextureCoordinate60

Shape54.geometry = IndexedFaceSet58

HAnimSegment53.children.append(Shape54)
Group61 = x3d.Group()
Group61.DEF = "sacrum_Sites"
"""None (example site and site marker code) <HAnimSite DEF='hanim_sitename_pt' name='sitename_pt' translation='sitename_ptTranslation'> <TouchSensor description='HAnimSite sitename_pt nnfromtable'/> <Shape USE='HAnimSiteShape'/> </HAnimSite>"""

HAnimSegment53.children.append(Group61)

HAnimJoint52.children.append(HAnimSegment53)
HAnimJoint62 = x3d.HAnimJoint()
HAnimJoint62.name = "sacroiliac"
HAnimJoint62.DEF = "hanim_sacroiliac"
HAnimJoint62.center = [0,0.707,-0.016]
HAnimJoint62.ulimit = [0,0,0]
HAnimJoint62.llimit = [0,0,0]
HAnimSegment63 = x3d.HAnimSegment()
HAnimSegment63.name = "pelvis"
HAnimSegment63.DEF = "hanim_pelvis"
Shape64 = x3d.Shape()
Shape64.DEF = "pelvis_Shape"
Appearance65 = x3d.Appearance()
Material66 = x3d.Material()
Material66.USE = "SurfaceDefault"

Appearance65.material = Material66
ImageTexture67 = x3d.ImageTexture()
ImageTexture67.USE = "JinLOA4TextureAtlas"

Appearance65.texture = ImageTexture67

Shape64.appearance = Appearance65
IndexedFaceSet68 = x3d.IndexedFaceSet()
IndexedFaceSet68.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]
IndexedFaceSet68.creaseAngle = 3.14159
IndexedFaceSet68.texCoordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]
Coordinate69 = x3d.Coordinate()

IndexedFaceSet68.coord = Coordinate69
TextureCoordinate70 = x3d.TextureCoordinate()

IndexedFaceSet68.texCoord = TextureCoordinate70

Shape64.geometry = IndexedFaceSet68

HAnimSegment63.children.append(Shape64)
Group71 = x3d.Group()
Group71.DEF = "pelvis_Sites"
"""(r_iliocristale_pt '-0.1525 1.0628 0.0035) (r_trochanterion_pt -0.1689 0.8419 0.0352) (l_iliocristale_pt 0.1612 1.0537 0.0008) (l_trochanterion_pt 0.1677 0.8336 0.0303) (r_asis_pt -0.0887 1.0021 0.1112) (l_asis_pt 0.0774 1.0190 -0.1151) (r_psis_pt -0.0716 1.0190 -0.1138) (l_psis_pt 0.0774 1.0190 -0.1151) (crotch_pt 0.0034 0.8266 0.0257) (buttocks_standing_wall_contact_point x y z)"""
HAnimSite72 = x3d.HAnimSite()
HAnimSite72.name = "r_iliocristale_pt"
HAnimSite72.DEF = "hanim_r_iliocristale_pt"
HAnimSite72.translation = [-0.13,0.92,0.0035]
TouchSensor73 = x3d.TouchSensor()
TouchSensor73.description = "HAnimSite r_iliocristale_pt 36"

HAnimSite72.children.append(TouchSensor73)
Shape74 = x3d.Shape()
Shape74.USE = "HAnimSiteShape"

HAnimSite72.children.append(Shape74)

Group71.children.append(HAnimSite72)
HAnimSite75 = x3d.HAnimSite()
HAnimSite75.name = "r_trochanterion_pt"
HAnimSite75.DEF = "hanim_r_trochanterion_pt"
HAnimSite75.translation = [-0.14,0.8,0.0035]
TouchSensor76 = x3d.TouchSensor()
TouchSensor76.description = "HAnimSite r_trochanterion_pt 46"

HAnimSite75.children.append(TouchSensor76)
Shape77 = x3d.Shape()
Shape77.USE = "HAnimSiteShape"

HAnimSite75.children.append(Shape77)

Group71.children.append(HAnimSite75)
HAnimSite78 = x3d.HAnimSite()
HAnimSite78.name = "l_iliocristale_pt"
HAnimSite78.DEF = "hanim_l_iliocristale_pt"
HAnimSite78.translation = [0.13,0.92,0.0035]
TouchSensor79 = x3d.TouchSensor()
TouchSensor79.description = "HAnimSite l_iliocristale_pt 33"

HAnimSite78.children.append(TouchSensor79)
Shape80 = x3d.Shape()
Shape80.USE = "HAnimSiteShape"

HAnimSite78.children.append(Shape80)

Group71.children.append(HAnimSite78)
HAnimSite81 = x3d.HAnimSite()
HAnimSite81.name = "l_trochanterion_pt"
HAnimSite81.DEF = "hanim_l_trochanterion_pt"
HAnimSite81.translation = [0.14,0.8,0.0035]
TouchSensor82 = x3d.TouchSensor()
TouchSensor82.description = "HAnimSite l_trochanterion_pt 42"

HAnimSite81.children.append(TouchSensor82)
Shape83 = x3d.Shape()
Shape83.USE = "HAnimSiteShape"

HAnimSite81.children.append(Shape83)

Group71.children.append(HAnimSite81)
HAnimSite84 = x3d.HAnimSite()
HAnimSite84.name = "r_asis_pt"
HAnimSite84.DEF = "hanim_r_asis_pt"
HAnimSite84.translation = [-0.1,0.86,0.0035]
TouchSensor85 = x3d.TouchSensor()
TouchSensor85.description = "HAnimSite r_asis_pt 35"

HAnimSite84.children.append(TouchSensor85)
Shape86 = x3d.Shape()
Shape86.USE = "HAnimSiteShape"

HAnimSite84.children.append(Shape86)

Group71.children.append(HAnimSite84)
HAnimSite87 = x3d.HAnimSite()
HAnimSite87.name = "l_asis_pt"
HAnimSite87.DEF = "hanim_l_asis_pt"
HAnimSite87.translation = [0.1,0.86,0.0035]
TouchSensor88 = x3d.TouchSensor()
TouchSensor88.description = "HAnimSite l_asis_pt 32"

HAnimSite87.children.append(TouchSensor88)
Shape89 = x3d.Shape()
Shape89.USE = "HAnimSiteShape"

HAnimSite87.children.append(Shape89)

Group71.children.append(HAnimSite87)
HAnimSite90 = x3d.HAnimSite()
HAnimSite90.name = "r_psis_pt"
HAnimSite90.DEF = "hanim_r_psis_pt"
HAnimSite90.translation = [-0.05,0.84,-0.11]
TouchSensor91 = x3d.TouchSensor()
TouchSensor91.description = "HAnimSite r_psis_pt 37"

HAnimSite90.children.append(TouchSensor91)
Shape92 = x3d.Shape()
Shape92.USE = "HAnimSiteShape"

HAnimSite90.children.append(Shape92)

Group71.children.append(HAnimSite90)
HAnimSite93 = x3d.HAnimSite()
HAnimSite93.name = "l_psis_pt"
HAnimSite93.DEF = "hanim_l_psis_pt"
HAnimSite93.translation = [0.05,0.84,-0.11]
TouchSensor94 = x3d.TouchSensor()
TouchSensor94.description = "HAnimSite l_psis_pt 34"

HAnimSite93.children.append(TouchSensor94)
Shape95 = x3d.Shape()
Shape95.USE = "HAnimSiteShape"

HAnimSite93.children.append(Shape95)

Group71.children.append(HAnimSite93)
HAnimSite96 = x3d.HAnimSite()
HAnimSite96.name = "crotch_pt"
HAnimSite96.DEF = "hanim_crotch_pt"
HAnimSite96.translation = [0,0.703,0]
TouchSensor97 = x3d.TouchSensor()
TouchSensor97.description = "HAnimSite crotch_pt 38"

HAnimSite96.children.append(TouchSensor97)
Shape98 = x3d.Shape()
Shape98.USE = "HAnimSiteShape"

HAnimSite96.children.append(Shape98)

Group71.children.append(HAnimSite96)
HAnimSite99 = x3d.HAnimSite()
HAnimSite99.name = "buttocks_standing_wall_contact_point_pt"
HAnimSite99.DEF = "hanim_buttocks_standing_wall_contact_point_pt"
HAnimSite99.translation = [0,0.8,-0.15]
TouchSensor100 = x3d.TouchSensor()
TouchSensor100.description = "HAnimSite buttocks_standing_wall_contact_point_pt 93"

HAnimSite99.children.append(TouchSensor100)
Shape101 = x3d.Shape()
Shape101.USE = "HAnimSiteShape"

HAnimSite99.children.append(Shape101)

Group71.children.append(HAnimSite99)

HAnimSegment63.children.append(Group71)

HAnimJoint62.children.append(HAnimSegment63)
HAnimJoint102 = x3d.HAnimJoint()
HAnimJoint102.name = "l_hip"
HAnimJoint102.DEF = "hanim_l_hip"
HAnimJoint102.center = [0.095,0.8266,-0.0183]
HAnimJoint102.ulimit = [0,0,0]
HAnimJoint102.llimit = [0,0,0]
HAnimSegment103 = x3d.HAnimSegment()
HAnimSegment103.name = "l_thigh"
HAnimSegment103.DEF = "hanim_l_thigh"
Shape104 = x3d.Shape()
Shape104.DEF = "l_thigh_Shape"
Appearance105 = x3d.Appearance()
Material106 = x3d.Material()
Material106.USE = "SurfaceDefault"

Appearance105.material = Material106
ImageTexture107 = x3d.ImageTexture()
ImageTexture107.USE = "JinLOA4TextureAtlas"

Appearance105.texture = ImageTexture107

Shape104.appearance = Appearance105
IndexedFaceSet108 = x3d.IndexedFaceSet()
IndexedFaceSet108.coordIndex = [47,46,45,-1,45,44,43,-1,45,43,42,-1,47,45,42,-1,48,47,42,-1,0,1,8,-1,8,7,0,-1,1,2,9,-1,9,8,1,-1,2,3,10,-1,10,9,2,-1,3,4,11,-1,11,10,3,-1,4,5,12,-1,12,11,4,-1,5,6,13,-1,13,12,5,-1,6,0,7,-1,7,13,6,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,12,19,-1,19,18,11,-1,12,13,20,-1,20,19,12,-1,13,7,14,-1,14,20,13,-1,14,15,22,-1,22,21,14,-1,15,16,23,-1,23,22,15,-1,16,17,24,-1,24,23,16,-1,17,18,25,-1,25,24,17,-1,18,19,26,-1,26,25,18,-1,19,20,27,-1,27,26,19,-1,20,14,21,-1,21,27,20,-1,56,57,58,-1,58,59,60,-1,58,60,61,-1,56,58,61,-1,62,56,61,-1,29,28,21,-1,21,22,29,-1,30,29,22,-1,22,23,30,-1,31,30,23,-1,23,24,31,-1,32,31,24,-1,24,25,32,-1,33,32,25,-1,25,26,33,-1,34,33,26,-1,26,27,34,-1,28,34,27,-1,27,21,28,-1,36,35,28,-1,28,29,36,-1,37,36,29,-1,29,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,35,41,34,-1,34,28,35,-1,42,43,1,-1,1,0,42,-1,43,44,2,-1,2,1,43,-1,44,45,3,-1,3,2,44,-1,45,46,4,-1,4,3,45,-1,46,47,5,-1,5,4,46,-1,47,48,6,-1,6,5,47,-1,48,42,0,-1,0,6,48,-1,50,49,35,-1,35,36,50,-1,51,50,36,-1,36,37,51,-1,52,51,37,-1,37,38,52,-1,53,52,38,-1,38,39,53,-1,54,53,39,-1,39,40,54,-1,55,54,40,-1,40,41,55,-1,49,55,41,-1,41,35,49,-1,57,56,49,-1,49,50,57,-1,58,57,50,-1,50,51,58,-1,59,58,51,-1,51,52,59,-1,60,59,52,-1,52,53,60,-1,61,60,53,-1,53,54,61,-1,62,61,54,-1,54,55,62,-1,56,62,55,-1,55,49,56,-1]
IndexedFaceSet108.creaseAngle = 3.14159
IndexedFaceSet108.texCoordIndex = [5,4,3,-1,3,2,0,-1,3,0,1,-1,5,3,1,-1,6,5,1,-1,7,10,8,-1,8,9,7,-1,10,12,11,-1,11,8,10,-1,12,14,13,-1,13,11,12,-1,14,16,15,-1,15,13,14,-1,16,18,17,-1,17,15,16,-1,18,20,19,-1,19,17,18,-1,20,7,9,-1,9,19,20,-1,9,8,21,-1,21,22,9,-1,8,11,23,-1,23,21,8,-1,11,13,24,-1,24,23,11,-1,13,15,25,-1,25,24,13,-1,15,17,26,-1,26,25,15,-1,17,19,27,-1,27,26,17,-1,19,9,22,-1,22,27,19,-1,22,21,28,-1,28,29,22,-1,21,23,30,-1,30,28,21,-1,23,24,31,-1,31,30,23,-1,24,25,32,-1,32,31,24,-1,25,26,33,-1,33,32,25,-1,26,27,34,-1,34,33,26,-1,27,22,29,-1,29,34,27,-1,42,43,44,-1,44,45,46,-1,44,46,47,-1,42,44,47,-1,48,42,47,-1,35,36,29,-1,29,28,35,-1,37,35,28,-1,28,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,36,41,34,-1,34,29,36,-1,51,52,49,-1,49,50,51,-1,54,51,50,-1,50,53,54,-1,56,54,53,-1,53,55,56,-1,58,56,55,-1,55,57,58,-1,60,58,57,-1,57,59,60,-1,62,60,59,-1,59,61,62,-1,52,62,61,-1,61,49,52,-1,1,0,10,-1,10,7,1,-1,0,2,12,-1,12,10,0,-1,2,3,14,-1,14,12,2,-1,3,4,16,-1,16,14,3,-1,4,5,18,-1,18,16,4,-1,5,6,20,-1,20,18,5,-1,6,1,7,-1,7,20,6,-1,63,64,52,-1,52,51,63,-1,65,63,51,-1,51,54,65,-1,66,65,54,-1,54,56,66,-1,67,66,56,-1,56,58,67,-1,68,67,58,-1,58,60,68,-1,69,68,60,-1,60,62,69,-1,64,69,62,-1,62,52,64,-1,43,42,64,-1,64,63,43,-1,44,43,63,-1,63,65,44,-1,45,44,65,-1,65,66,45,-1,46,45,66,-1,66,67,46,-1,47,46,67,-1,67,68,47,-1,48,47,68,-1,68,69,48,-1,42,48,69,-1,69,64,42,-1]
Coordinate109 = x3d.Coordinate()

IndexedFaceSet108.coord = Coordinate109
TextureCoordinate110 = x3d.TextureCoordinate()

IndexedFaceSet108.texCoord = TextureCoordinate110

Shape104.geometry = IndexedFaceSet108

HAnimSegment103.children.append(Shape104)
Group111 = x3d.Group()
Group111.DEF = "l_thigh_Sites"
"""(l_knee_crease_pt 0.0993 0.4881 -0.0309) (l_femoral_medial_epicondyles_pt 0.0398 0.4946 0.0303) (l_femoral_lateral_epicondyles 0.1598 0.4967 0.0297) (l_suprapatella_pt x y z)"""
HAnimSite112 = x3d.HAnimSite()
HAnimSite112.name = "l_knee_crease_pt"
HAnimSite112.DEF = "hanim_l_knee_crease_pt"
HAnimSite112.translation = [0.09,0.41,-0.056]
TouchSensor113 = x3d.TouchSensor()
TouchSensor113.description = "HAnimSite l_knee_crease_pt 90"

HAnimSite112.children.append(TouchSensor113)
Shape114 = x3d.Shape()
Shape114.USE = "HAnimSiteShape"

HAnimSite112.children.append(Shape114)

Group111.children.append(HAnimSite112)
HAnimSite115 = x3d.HAnimSite()
HAnimSite115.name = "l_femoral_medial_epicondyles_pt"
HAnimSite115.DEF = "hanim_l_femoral_medial_epicondyles_pt"
HAnimSite115.translation = [0.039,0.41,-0.01]
TouchSensor116 = x3d.TouchSensor()
TouchSensor116.description = "HAnimSite l_femoral_medial_epicondyles_pt 39"

HAnimSite115.children.append(TouchSensor116)
Shape117 = x3d.Shape()
Shape117.USE = "HAnimSiteShape"

HAnimSite115.children.append(Shape117)

Group111.children.append(HAnimSite115)
HAnimSite118 = x3d.HAnimSite()
HAnimSite118.name = "l_femoral_lateral_epicondyles_pt"
HAnimSite118.DEF = "hanim_l_femoral_lateral_epicondyles_pt"
HAnimSite118.translation = [0.127,0.41,-0.01]
TouchSensor119 = x3d.TouchSensor()
TouchSensor119.description = "l_femoral_lateral_epicondyles_pt 40"

HAnimSite118.children.append(TouchSensor119)
Shape120 = x3d.Shape()
Shape120.USE = "HAnimSiteShape"

HAnimSite118.children.append(Shape120)

Group111.children.append(HAnimSite118)
HAnimSite121 = x3d.HAnimSite()
HAnimSite121.name = "l_suprapatella_pt"
HAnimSite121.DEF = "hanim_l_suprapatella_pt"
HAnimSite121.translation = [0.085,0.41,0.042]
TouchSensor122 = x3d.TouchSensor()
TouchSensor122.description = "HAnimSite l_suprapatella_pt 41"

HAnimSite121.children.append(TouchSensor122)
Shape123 = x3d.Shape()
Shape123.USE = "HAnimSiteShape"

HAnimSite121.children.append(Shape123)

Group111.children.append(HAnimSite121)

HAnimSegment103.children.append(Group111)

HAnimJoint102.children.append(HAnimSegment103)
HAnimJoint124 = x3d.HAnimJoint()
HAnimJoint124.name = "l_knee"
HAnimJoint124.DEF = "hanim_l_knee"
HAnimJoint124.center = [0.09261001,0.408825,-0.01943775]
HAnimJoint124.ulimit = [0,0,0]
HAnimJoint124.llimit = [0,0,0]
HAnimSegment125 = x3d.HAnimSegment()
HAnimSegment125.name = "l_calf"
HAnimSegment125.DEF = "hanim_l_calf"
Shape126 = x3d.Shape()
Shape126.DEF = "l_calf_Shape"
Appearance127 = x3d.Appearance()
Material128 = x3d.Material()
Material128.USE = "SurfaceDefault"

Appearance127.material = Material128
ImageTexture129 = x3d.ImageTexture()
ImageTexture129.USE = "JinLOA4TextureAtlas"

Appearance127.texture = ImageTexture129

Shape126.appearance = Appearance127
IndexedFaceSet130 = x3d.IndexedFaceSet()
IndexedFaceSet130.coordIndex = [4,3,2,-1,5,4,2,-1,2,1,0,-1,5,2,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1]
IndexedFaceSet130.creaseAngle = 3.14159
IndexedFaceSet130.texCoordIndex = [4,3,2,-1,5,4,2,-1,2,1,0,-1,5,2,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1]
Coordinate131 = x3d.Coordinate()

IndexedFaceSet130.coord = Coordinate131
TextureCoordinate132 = x3d.TextureCoordinate()

IndexedFaceSet130.texCoord = TextureCoordinate132

Shape126.geometry = IndexedFaceSet130

HAnimSegment125.children.append(Shape126)
Group133 = x3d.Group()
Group133.DEF = "l_calf_Sites"
"""(l_tibiale_pt x y z) (l_medial_malleolus_pt 0.0890 0.0716 -0.0881) (l_lateral_malleolus_pt 0.1308 0.0597 -0.1032)"""
HAnimSite134 = x3d.HAnimSite()
HAnimSite134.name = "l_tibiale_pt"
HAnimSite134.DEF = "hanim_l_tibiale_pt"
HAnimSite134.translation = [0.09,0.31,0.038]
TouchSensor135 = x3d.TouchSensor()
TouchSensor135.description = "HAnimSite l_tibiale_pt 47"

HAnimSite134.children.append(TouchSensor135)
Shape136 = x3d.Shape()
Shape136.USE = "HAnimSiteShape"

HAnimSite134.children.append(Shape136)

Group133.children.append(HAnimSite134)
HAnimSite137 = x3d.HAnimSite()
HAnimSite137.name = "l_medial_malleolus_pt"
HAnimSite137.DEF = "hanim_l_medial_malleolus_pt"
HAnimSite137.translation = [0.061,0.095,-0.02]
TouchSensor138 = x3d.TouchSensor()
TouchSensor138.description = "HAnimSite l_medial_malleolus_pt 48"

HAnimSite137.children.append(TouchSensor138)
Shape139 = x3d.Shape()
Shape139.USE = "HAnimSiteShape"

HAnimSite137.children.append(Shape139)

Group133.children.append(HAnimSite137)
HAnimSite140 = x3d.HAnimSite()
HAnimSite140.name = "l_lateral_malleolus_pt"
HAnimSite140.DEF = "hanim_l_lateral_malleolus_pt"
HAnimSite140.translation = [0.12,0.095,-0.02]
TouchSensor141 = x3d.TouchSensor()
TouchSensor141.description = "HAnimSite l_lateral_malleolus_pt 49"

HAnimSite140.children.append(TouchSensor141)
Shape142 = x3d.Shape()
Shape142.USE = "HAnimSiteShape"

HAnimSite140.children.append(Shape142)

Group133.children.append(HAnimSite140)

HAnimSegment125.children.append(Group133)

HAnimJoint124.children.append(HAnimSegment125)
HAnimJoint143 = x3d.HAnimJoint()
HAnimJoint143.name = "l_talocrural"
HAnimJoint143.DEF = "hanim_l_talocrural"
HAnimJoint143.center = [0.08883,0.09544501,-0.010451251]
HAnimJoint143.ulimit = [0,0,0]
HAnimJoint143.llimit = [0,0,0]
HAnimSegment144 = x3d.HAnimSegment()
HAnimSegment144.name = "l_talus"
HAnimSegment144.DEF = "hanim_l_talus"
Shape145 = x3d.Shape()
Shape145.DEF = "l_talus_Shape"
Appearance146 = x3d.Appearance()
Material147 = x3d.Material()
Material147.USE = "SurfaceDefault"

Appearance146.material = Material147
ImageTexture148 = x3d.ImageTexture()
ImageTexture148.USE = "JinLOA4TextureAtlas"

Appearance146.texture = ImageTexture148

Shape145.appearance = Appearance146
IndexedFaceSet149 = x3d.IndexedFaceSet()
IndexedFaceSet149.coordIndex = [13,34,21,-1,21,15,13,-1,9,20,21,-1,21,34,9,-1,0,2,14,-1,14,15,0,-1,30,3,16,-1,16,33,30,-1,3,4,25,-1,25,16,3,-1,22,5,18,-1,18,17,22,-1,5,6,29,-1,29,18,5,-1,6,27,19,-1,7,1,21,-1,21,20,7,-1,1,0,15,-1,15,21,1,-1,15,14,32,-1,32,13,15,-1,33,16,12,-1,12,11,33,-1,25,23,12,-1,12,16,25,-1,17,18,10,-1,10,24,17,-1,18,29,28,-1,28,10,18,-1,19,27,26,-1,26,8,19,-1,4,22,17,-1,17,25,4,-1,25,17,24,-1,24,23,25,-1,20,9,26,-1,26,27,20,-1,6,7,20,-1,20,27,6,-1,29,19,8,-1,8,28,29,-1,6,19,29,-1,1,31,0,-1,0,31,2,-1,31,3,30,-1,3,31,4,-1,4,31,22,-1,22,31,5,-1,5,31,6,-1,6,31,7,-1,7,31,1,-1,2,31,30,-1,14,2,30,-1,30,33,14,-1,32,14,33,-1,33,11,32,-1,35,46,45,-1,45,44,43,-1,43,42,41,-1,41,40,39,-1,43,41,39,-1,45,43,39,-1,35,45,39,-1,39,38,37,-1,35,39,37,-1,36,35,37,-1,26,35,36,-1,36,8,26,-1,8,36,37,-1,37,28,8,-1,28,37,38,-1,38,10,28,-1,10,38,39,-1,39,24,10,-1,24,39,40,-1,40,23,24,-1,23,40,41,-1,41,12,23,-1,12,41,42,-1,42,11,12,-1,11,42,43,-1,43,32,11,-1,32,43,44,-1,44,13,32,-1,13,44,45,-1,45,34,13,-1,34,45,46,-1,46,9,34,-1,9,46,35,-1,35,26,9,-1]
IndexedFaceSet149.creaseAngle = 3.14159
IndexedFaceSet149.texCoordIndex = [5,34,27,-1,27,12,5,-1,7,28,27,-1,27,34,7,-1,9,10,11,-1,11,12,9,-1,30,13,14,-1,14,33,30,-1,13,15,16,-1,16,14,13,-1,17,18,19,-1,19,20,17,-1,18,21,22,-1,22,19,18,-1,21,23,24,-1,25,26,27,-1,27,28,25,-1,26,9,12,-1,12,27,26,-1,12,11,32,-1,32,5,12,-1,33,14,4,-1,4,3,33,-1,16,8,4,-1,4,14,16,-1,20,19,2,-1,2,6,20,-1,19,22,29,-1,29,2,19,-1,24,23,1,-1,1,0,24,-1,15,17,20,-1,20,16,15,-1,16,20,6,-1,6,8,16,-1,28,7,1,-1,1,23,28,-1,21,25,28,-1,28,23,21,-1,22,24,0,-1,0,29,22,-1,21,24,22,-1,26,31,9,-1,9,31,10,-1,31,13,30,-1,13,31,15,-1,15,31,17,-1,17,31,18,-1,18,31,21,-1,21,31,25,-1,25,31,26,-1,10,31,30,-1,11,10,30,-1,30,33,11,-1,32,11,33,-1,33,3,32,-1,35,46,45,-1,45,44,43,-1,43,42,41,-1,41,40,39,-1,43,41,39,-1,45,43,39,-1,35,45,39,-1,39,38,37,-1,35,39,37,-1,36,35,37,-1,1,35,36,-1,36,0,1,-1,0,36,37,-1,37,29,0,-1,29,37,38,-1,38,2,29,-1,2,38,39,-1,39,6,2,-1,6,39,40,-1,40,8,6,-1,8,40,41,-1,41,4,8,-1,4,41,42,-1,42,3,4,-1,3,42,43,-1,43,32,3,-1,32,43,44,-1,44,5,32,-1,5,44,45,-1,45,34,5,-1,34,45,46,-1,46,7,34,-1,7,46,35,-1,35,1,7,-1]
Coordinate150 = x3d.Coordinate()

IndexedFaceSet149.coord = Coordinate150
TextureCoordinate151 = x3d.TextureCoordinate()

IndexedFaceSet149.texCoord = TextureCoordinate151

Shape145.geometry = IndexedFaceSet149

HAnimSegment144.children.append(Shape145)
Group152 = x3d.Group()
Group152.DEF = "l_talus_Sites"
"""(l_sphyrion_pt 0.0890 0.0575 -0.0943) (l_calcaneus_posterior_pt 0.0974 0.0259 -0.1171)"""
HAnimSite153 = x3d.HAnimSite()
HAnimSite153.name = "l_sphyrion_pt"
HAnimSite153.DEF = "hanim_l_sphyrion_pt"
HAnimSite153.translation = [0.054,0.065,-0.02]
TouchSensor154 = x3d.TouchSensor()
TouchSensor154.description = "HAnimSite l_sphyrion_pt 50"

HAnimSite153.children.append(TouchSensor154)
Shape155 = x3d.Shape()
Shape155.USE = "HAnimSiteShape"

HAnimSite153.children.append(Shape155)

Group152.children.append(HAnimSite153)
HAnimSite156 = x3d.HAnimSite()
HAnimSite156.name = "l_calcaneus_posterior_pt"
HAnimSite156.DEF = "hanim_l_calcaneus_posterior_pt"
HAnimSite156.translation = [0.09,0.03,-0.06]
TouchSensor157 = x3d.TouchSensor()
TouchSensor157.description = "HAnimSite l_calcaneus_posterior_pt 58"

HAnimSite156.children.append(TouchSensor157)
Shape158 = x3d.Shape()
Shape158.USE = "HAnimSiteShape"

HAnimSite156.children.append(Shape158)

Group152.children.append(HAnimSite156)

HAnimSegment144.children.append(Group152)

HAnimJoint143.children.append(HAnimSegment144)
HAnimJoint159 = x3d.HAnimJoint()
HAnimJoint159.name = "l_talocalcaneonavicular"
HAnimJoint159.DEF = "hanim_l_talocalcaneonavicular"
HAnimJoint159.center = [0.07830001,0.036900003,0.0048645]
HAnimJoint159.ulimit = [0,0,0]
HAnimJoint159.llimit = [0,0,0]
HAnimSegment160 = x3d.HAnimSegment()
HAnimSegment160.name = "l_navicular"
HAnimSegment160.DEF = "hanim_l_navicular"
Shape161 = x3d.Shape()
Shape161.DEF = "l_navicular_Shape"
Appearance162 = x3d.Appearance()
Material163 = x3d.Material()
Material163.USE = "SurfaceDefault"

Appearance162.material = Material163
ImageTexture164 = x3d.ImageTexture()
ImageTexture164.USE = "JinLOA4TextureAtlas"

Appearance162.texture = ImageTexture164

Shape161.appearance = Appearance162
IndexedFaceSet165 = x3d.IndexedFaceSet()
IndexedFaceSet165.coordIndex = [7,12,11,-1,11,6,7,-1,1,2,18,-1,18,17,1,-1,12,7,5,-1,5,10,12,-1,2,6,11,-1,5,0,13,-1,13,10,5,-1,1,17,14,-1,14,3,1,-1,11,18,2,-1,4,8,16,-1,16,15,4,-1,8,9,16,-1,3,14,16,-1,16,9,3,-1,24,23,22,-1,22,21,20,-1,24,22,20,-1,20,19,28,-1,24,20,28,-1,28,27,26,-1,24,28,26,-1,25,24,26,-1,38,43,42,-1,42,39,38,-1,37,36,35,-1,37,35,34,-1,34,33,32,-1,37,34,32,-1,32,31,30,-1,37,32,30,-1,37,30,29,-1,1,19,20,-1,20,2,1,-1,2,20,21,-1,21,6,2,-1,6,21,22,-1,22,7,6,-1,7,22,23,-1,23,5,7,-1,5,23,24,-1,24,0,5,-1,38,45,44,-1,44,43,38,-1,4,25,26,-1,26,8,4,-1,8,26,27,-1,27,9,8,-1,9,27,28,-1,28,3,9,-1,3,28,19,-1,19,1,3,-1,10,29,30,-1,30,12,10,-1,12,30,31,-1,31,11,12,-1,11,31,32,-1,32,18,11,-1,18,32,33,-1,33,17,18,-1,17,33,34,-1,34,14,17,-1,14,34,35,-1,35,16,14,-1,16,35,36,-1,36,15,16,-1,42,41,40,-1,40,39,42,-1,13,37,29,-1,29,10,13,-1,0,38,39,-1,39,13,0,-1,13,39,40,-1,40,37,13,-1,37,40,41,-1,41,36,37,-1,36,41,42,-1,42,15,36,-1,15,42,43,-1,43,4,15,-1,4,43,44,-1,44,25,4,-1,25,44,45,-1,45,24,25,-1,24,45,38,-1,38,0,24,-1]
IndexedFaceSet165.creaseAngle = 3.14159
IndexedFaceSet165.texCoordIndex = [7,12,11,-1,11,6,7,-1,1,2,18,-1,18,17,1,-1,12,7,5,-1,5,10,12,-1,2,6,11,-1,5,0,13,-1,13,10,5,-1,1,17,14,-1,14,3,1,-1,11,18,2,-1,4,8,16,-1,16,15,4,-1,8,9,16,-1,3,14,16,-1,16,9,3,-1,24,23,22,-1,22,21,20,-1,24,22,20,-1,20,19,28,-1,24,20,28,-1,28,27,26,-1,24,28,26,-1,25,24,26,-1,38,43,42,-1,42,39,38,-1,37,36,35,-1,37,35,34,-1,34,33,32,-1,37,34,32,-1,32,31,30,-1,37,32,30,-1,37,30,29,-1,1,19,20,-1,20,2,1,-1,2,20,21,-1,21,6,2,-1,6,21,22,-1,22,7,6,-1,7,22,23,-1,23,5,7,-1,5,23,24,-1,24,0,5,-1,38,45,44,-1,44,43,38,-1,4,25,26,-1,26,8,4,-1,8,26,27,-1,27,9,8,-1,9,27,28,-1,28,3,9,-1,3,28,19,-1,19,1,3,-1,10,29,30,-1,30,12,10,-1,12,30,31,-1,31,11,12,-1,11,31,32,-1,32,18,11,-1,18,32,33,-1,33,17,18,-1,17,33,34,-1,34,14,17,-1,14,34,35,-1,35,16,14,-1,16,35,36,-1,36,15,16,-1,42,41,40,-1,40,39,42,-1,13,37,29,-1,29,10,13,-1,0,38,39,-1,39,13,0,-1,13,39,40,-1,40,37,13,-1,37,40,41,-1,41,36,37,-1,36,41,42,-1,42,15,36,-1,15,42,43,-1,43,4,15,-1,4,43,44,-1,44,25,4,-1,25,44,45,-1,45,24,25,-1,24,45,38,-1,38,0,24,-1]
Coordinate166 = x3d.Coordinate()

IndexedFaceSet165.coord = Coordinate166
TextureCoordinate167 = x3d.TextureCoordinate()

IndexedFaceSet165.texCoord = TextureCoordinate167

Shape161.geometry = IndexedFaceSet165

HAnimSegment160.children.append(Shape161)
Group168 = x3d.Group()
Group168.DEF = "l_navicular_Sites"
"""None"""

HAnimSegment160.children.append(Group168)

HAnimJoint159.children.append(HAnimSegment160)
HAnimJoint169 = x3d.HAnimJoint()
HAnimJoint169.name = "l_cuneonavicular_1"
HAnimJoint169.DEF = "hanim_l_cuneonavicular_1"
HAnimJoint169.center = [0.067365,0.032107502,0.018391501]
HAnimJoint169.ulimit = [0,0,0]
HAnimJoint169.llimit = [0,0,0]
HAnimSegment170 = x3d.HAnimSegment()
HAnimSegment170.name = "l_cuneiform_1"
HAnimSegment170.DEF = "hanim_1"
Shape171 = x3d.Shape()
Shape171.DEF = "l_cuneiform_1_Shape"
Appearance172 = x3d.Appearance()
Material173 = x3d.Material()
Material173.USE = "SurfaceDefault"

Appearance172.material = Material173
ImageTexture174 = x3d.ImageTexture()
ImageTexture174.USE = "JinLOA4TextureAtlas"

Appearance172.texture = ImageTexture174

Shape171.appearance = Appearance172
IndexedFaceSet175 = x3d.IndexedFaceSet()
IndexedFaceSet175.coordIndex = [0,12,4,-1,1,0,6,-1,6,7,1,-1,10,12,0,-1,0,1,10,-1,1,2,11,-1,11,10,1,-1,8,3,2,-1,2,5,8,-1,11,2,13,-1,12,15,4,-1,9,6,0,-1,0,4,9,-1,1,7,5,-1,5,2,1,-1,3,14,13,-1,13,2,3,-1,24,23,22,-1,25,24,22,-1,28,25,22,-1,15,12,10,-1,10,11,13,-1,15,10,13,-1,14,15,13,-1,16,19,18,-1,18,17,16,-1,21,20,19,-1,19,16,21,-1,3,16,17,-1,17,14,3,-1,14,17,18,-1,18,15,14,-1,15,18,19,-1,19,4,15,-1,4,19,20,-1,20,9,4,-1,28,27,26,-1,26,25,28,-1,8,21,16,-1,16,3,8,-1,6,22,23,-1,23,7,6,-1,7,23,24,-1,24,5,7,-1,5,24,25,-1,25,8,5,-1,8,25,26,-1,26,21,8,-1,21,26,27,-1,27,20,21,-1,20,27,28,-1,28,9,20,-1,9,28,22,-1,22,6,9,-1]
IndexedFaceSet175.creaseAngle = 3.14159
IndexedFaceSet175.texCoordIndex = [0,12,1,-1,2,0,6,-1,6,7,2,-1,10,12,0,-1,0,2,10,-1,2,3,11,-1,11,10,2,-1,8,4,3,-1,3,5,8,-1,11,3,13,-1,12,15,1,-1,9,6,0,-1,0,1,9,-1,2,7,5,-1,5,3,2,-1,4,14,13,-1,13,3,4,-1,24,23,22,-1,25,24,22,-1,28,25,22,-1,15,12,10,-1,10,11,13,-1,15,10,13,-1,14,15,13,-1,16,19,18,-1,18,17,16,-1,21,20,19,-1,19,16,21,-1,4,16,17,-1,17,14,4,-1,14,17,18,-1,18,15,14,-1,15,18,19,-1,19,1,15,-1,1,19,20,-1,20,9,1,-1,28,27,26,-1,26,25,28,-1,8,21,16,-1,16,4,8,-1,6,22,23,-1,23,7,6,-1,7,23,24,-1,24,5,7,-1,5,24,25,-1,25,8,5,-1,8,25,26,-1,26,21,8,-1,21,26,27,-1,27,20,21,-1,20,27,28,-1,28,9,20,-1,9,28,22,-1,22,6,9,-1]
Coordinate176 = x3d.Coordinate()

IndexedFaceSet175.coord = Coordinate176
TextureCoordinate177 = x3d.TextureCoordinate()

IndexedFaceSet175.texCoord = TextureCoordinate177

Shape171.geometry = IndexedFaceSet175

HAnimSegment170.children.append(Shape171)
Group178 = x3d.Group()
Group178.DEF = "l_cuneiform_1_Sites"
"""None"""

HAnimSegment170.children.append(Group178)

HAnimJoint169.children.append(HAnimSegment170)
HAnimJoint179 = x3d.HAnimJoint()
HAnimJoint179.name = "l_tarsometatarsal_1"
HAnimJoint179.DEF = "hanim_l_tarsometatarsal_1"
HAnimJoint179.center = [0.06462,0.023242502,0.04419]
HAnimJoint179.ulimit = [0,0,0]
HAnimJoint179.llimit = [0,0,0]
HAnimSegment180 = x3d.HAnimSegment()
HAnimSegment180.name = "l_metatarsal_1"
HAnimSegment180.DEF = "hanim_l_metatarsal_1"
Shape181 = x3d.Shape()
Shape181.DEF = "l_metatarsal_1_Shape"
Appearance182 = x3d.Appearance()
Material183 = x3d.Material()
Material183.USE = "SurfaceDefault"

Appearance182.material = Material183
ImageTexture184 = x3d.ImageTexture()
ImageTexture184.USE = "JinLOA4TextureAtlas"

Appearance182.texture = ImageTexture184

Shape181.appearance = Appearance182
IndexedFaceSet185 = x3d.IndexedFaceSet()
IndexedFaceSet185.coordIndex = [0,11,14,-1,5,7,2,-1,2,0,5,-1,1,10,9,-1,9,2,1,-1,15,8,20,-1,20,23,15,-1,3,4,19,-1,19,21,3,-1,13,4,10,-1,10,18,13,-1,12,1,6,-1,6,16,12,-1,6,1,2,-1,2,7,6,-1,5,0,14,-1,14,17,5,-1,10,4,3,-1,3,9,10,-1,9,11,0,-1,0,2,9,-1,10,1,12,-1,12,18,10,-1,8,11,9,-1,9,3,8,-1,8,15,14,-1,14,11,8,-1,21,20,8,-1,8,3,21,-1,13,22,19,-1,19,4,13,-1,34,33,39,-1,34,39,36,-1,34,36,35,-1,42,41,40,-1,42,40,46,-1,45,42,46,-1,31,30,29,-1,29,32,31,-1,32,29,24,-1,24,29,28,-1,28,25,24,-1,25,28,27,-1,27,26,25,-1,18,24,25,-1,25,13,18,-1,13,25,26,-1,26,22,13,-1,45,44,43,-1,43,42,45,-1,23,27,28,-1,28,15,23,-1,15,28,29,-1,29,14,15,-1,14,29,30,-1,30,17,14,-1,39,38,37,-1,37,36,39,-1,16,31,32,-1,32,12,16,-1,12,32,24,-1,24,18,12,-1,5,33,34,-1,34,7,5,-1,7,34,35,-1,35,6,7,-1,6,35,36,-1,36,16,6,-1,16,36,37,-1,37,31,16,-1,31,37,38,-1,38,30,31,-1,30,38,39,-1,39,17,30,-1,17,39,33,-1,33,5,17,-1,21,40,41,-1,41,20,21,-1,20,41,42,-1,42,23,20,-1,23,42,43,-1,43,27,23,-1,27,43,44,-1,44,26,27,-1,26,44,45,-1,45,22,26,-1,22,45,46,-1,46,19,22,-1,19,46,40,-1,40,21,19,-1]
IndexedFaceSet185.creaseAngle = 3.14159
IndexedFaceSet185.texCoordIndex = [1,11,14,-1,5,7,2,-1,2,1,5,-1,3,10,9,-1,9,2,3,-1,15,8,20,-1,20,23,15,-1,0,4,19,-1,19,21,0,-1,13,4,10,-1,10,18,13,-1,12,3,6,-1,6,16,12,-1,6,3,2,-1,2,7,6,-1,5,1,14,-1,14,17,5,-1,10,4,0,-1,0,9,10,-1,9,11,1,-1,1,2,9,-1,10,3,12,-1,12,18,10,-1,8,11,9,-1,9,0,8,-1,8,15,14,-1,14,11,8,-1,21,20,8,-1,8,0,21,-1,13,22,19,-1,19,4,13,-1,34,33,39,-1,34,39,36,-1,34,36,35,-1,42,41,40,-1,42,40,46,-1,45,42,46,-1,31,30,29,-1,29,32,31,-1,32,14,24,-1,24,29,28,-1,28,25,24,-1,25,28,27,-1,27,26,25,-1,18,24,25,-1,25,13,18,-1,13,25,26,-1,26,22,13,-1,45,44,43,-1,43,42,45,-1,23,27,28,-1,28,15,23,-1,15,28,29,-1,29,14,15,-1,14,29,30,-1,30,17,14,-1,39,38,37,-1,37,36,39,-1,16,31,32,-1,32,12,16,-1,12,32,24,-1,24,18,12,-1,5,33,34,-1,34,7,5,-1,7,34,35,-1,35,6,7,-1,6,35,36,-1,36,16,6,-1,16,36,37,-1,37,31,16,-1,31,37,38,-1,38,30,31,-1,30,38,39,-1,39,17,30,-1,17,39,33,-1,33,5,17,-1,21,40,41,-1,41,20,21,-1,20,41,42,-1,42,23,20,-1,23,42,43,-1,43,27,23,-1,27,43,44,-1,44,26,27,-1,26,44,45,-1,45,22,26,-1,22,45,46,-1,46,19,22,-1,19,46,40,-1,40,21,19,-1]
Coordinate186 = x3d.Coordinate()

IndexedFaceSet185.coord = Coordinate186
TextureCoordinate187 = x3d.TextureCoordinate()

IndexedFaceSet185.texCoord = TextureCoordinate187

Shape181.geometry = IndexedFaceSet185

HAnimSegment180.children.append(Shape181)
Group188 = x3d.Group()
Group188.DEF = "l_metatarsal_1_Sites"
"""None"""

HAnimSegment180.children.append(Group188)

HAnimJoint179.children.append(HAnimSegment180)
HAnimJoint189 = x3d.HAnimJoint()
HAnimJoint189.name = "l_metatarsophalangeal_1"
HAnimJoint189.DEF = "hanim_l_metatarsophalangeal_1"
HAnimJoint189.center = [0.0621225,0.014424751,0.0936225]
HAnimJoint189.ulimit = [0,0,0]
HAnimJoint189.llimit = [0,0,0]
HAnimSegment190 = x3d.HAnimSegment()
HAnimSegment190.name = "l_tarsal_proximal_phalanx_1"
HAnimSegment190.DEF = "hanim_l_tarsal_proximal_phalanx_1"
Shape191 = x3d.Shape()
Shape191.DEF = "l_tarsal_proximal_phalanx_1_Shape"
Appearance192 = x3d.Appearance()
Material193 = x3d.Material()
Material193.USE = "SurfaceDefault"

Appearance192.material = Material193
ImageTexture194 = x3d.ImageTexture()
ImageTexture194.USE = "JinLOA4TextureAtlas"

Appearance192.texture = ImageTexture194

Shape191.appearance = Appearance192
IndexedFaceSet195 = x3d.IndexedFaceSet()
IndexedFaceSet195.coordIndex = [9,16,17,-1,17,10,9,-1,11,8,2,-1,2,1,11,-1,7,3,2,-1,2,8,7,-1,7,13,4,-1,4,3,7,-1,12,5,4,-1,4,13,12,-1,5,12,0,-1,0,6,5,-1,0,11,1,-1,1,6,0,-1,14,15,19,-1,19,20,14,-1,14,10,17,-1,17,15,14,-1,9,21,18,-1,18,16,9,-1,7,8,9,-1,9,10,7,-1,8,11,21,-1,21,9,8,-1,12,13,14,-1,14,20,12,-1,13,7,10,-1,10,14,13,-1,11,22,21,-1,0,12,23,-1,23,24,0,-1,11,0,24,-1,24,22,11,-1,23,12,20,-1,37,42,41,-1,41,40,39,-1,37,41,39,-1,38,37,39,-1,35,34,33,-1,35,33,32,-1,31,35,32,-1,27,26,25,-1,28,27,25,-1,28,25,29,-1,35,31,30,-1,30,36,35,-1,17,25,26,-1,26,15,17,-1,15,26,27,-1,27,19,15,-1,19,27,28,-1,28,18,19,-1,18,28,29,-1,29,16,18,-1,16,29,25,-1,25,17,16,-1,19,30,31,-1,31,20,19,-1,20,31,32,-1,32,23,20,-1,23,32,33,-1,33,24,23,-1,24,33,34,-1,34,22,24,-1,22,34,35,-1,35,21,22,-1,21,35,36,-1,36,18,21,-1,18,36,30,-1,30,19,18,-1,2,37,38,-1,38,1,2,-1,1,38,39,-1,39,6,1,-1,6,39,40,-1,40,5,6,-1,5,40,41,-1,41,4,5,-1,4,41,42,-1,42,3,4,-1,3,42,37,-1,37,2,3,-1]
IndexedFaceSet195.creaseAngle = 3.14159
IndexedFaceSet195.texCoordIndex = [2,28,29,-1,29,1,2,-1,11,13,4,-1,4,5,11,-1,10,6,4,-1,4,13,10,-1,10,12,7,-1,7,6,10,-1,14,8,7,-1,7,12,14,-1,8,14,3,-1,3,9,8,-1,3,11,5,-1,5,9,3,-1,0,27,31,-1,31,33,0,-1,0,1,29,-1,29,27,0,-1,2,35,30,-1,30,28,2,-1,15,16,17,-1,17,18,15,-1,16,19,34,-1,34,17,16,-1,20,21,22,-1,22,32,20,-1,21,23,24,-1,24,22,21,-1,19,36,34,-1,25,20,37,-1,37,39,25,-1,19,26,38,-1,38,36,19,-1,37,20,32,-1,52,57,56,-1,56,55,54,-1,52,56,54,-1,53,52,54,-1,50,49,48,-1,50,48,47,-1,46,50,47,-1,42,41,40,-1,43,42,40,-1,43,40,44,-1,50,46,45,-1,45,51,50,-1,29,40,41,-1,41,27,29,-1,27,41,42,-1,42,31,27,-1,31,42,43,-1,43,30,31,-1,30,43,44,-1,44,28,30,-1,28,44,40,-1,40,29,28,-1,31,45,46,-1,46,33,31,-1,32,46,47,-1,47,37,32,-1,37,47,48,-1,48,39,37,-1,38,48,49,-1,49,36,38,-1,36,49,50,-1,50,34,36,-1,35,50,51,-1,51,30,35,-1,30,51,45,-1,45,31,30,-1,4,52,53,-1,53,5,4,-1,5,53,54,-1,54,9,5,-1,9,54,55,-1,55,8,9,-1,8,55,56,-1,56,7,8,-1,7,56,57,-1,57,6,7,-1,6,57,52,-1,52,4,6,-1]
Coordinate196 = x3d.Coordinate()

IndexedFaceSet195.coord = Coordinate196
TextureCoordinate197 = x3d.TextureCoordinate()

IndexedFaceSet195.texCoord = TextureCoordinate197

Shape191.geometry = IndexedFaceSet195

HAnimSegment190.children.append(Shape191)
Group198 = x3d.Group()
Group198.DEF = "l_tarsal_proximal_phalanx_1_Sites"
"""(l_metatarsal_phalanx_1_pt 0.0816 0.0232 0.0106)"""
HAnimSite199 = x3d.HAnimSite()
HAnimSite199.name = "l_metatarsal_phalanx_1_pt"
HAnimSite199.DEF = "hanim_l_metatarsal_phalanx_1_pt"
HAnimSite199.translation = [0.062,0.012,0.1]
TouchSensor200 = x3d.TouchSensor()
TouchSensor200.description = "HAnimSite l_metatarsal_phalanx_1_pt 55"

HAnimSite199.children.append(TouchSensor200)
Shape201 = x3d.Shape()
Shape201.USE = "HAnimSiteShape"

HAnimSite199.children.append(Shape201)

Group198.children.append(HAnimSite199)

HAnimSegment190.children.append(Group198)

HAnimJoint189.children.append(HAnimSegment190)
HAnimJoint202 = x3d.HAnimJoint()
HAnimJoint202.name = "l_tarsal_interphalangeal_1"
HAnimJoint202.DEF = "hanim_l_tarsal_interphalangeal_1"
HAnimJoint202.center = [0.062,0.012,0.115]
HAnimJoint202.ulimit = [0,0,0]
HAnimJoint202.llimit = [0,0,0]
HAnimSegment203 = x3d.HAnimSegment()
HAnimSegment203.name = "l_tarsal_distal_phalanx_1"
HAnimSegment203.DEF = "hanim_l_tarsal_distal_phalanx_1"
Shape204 = x3d.Shape()
Shape204.DEF = "l_tarsal_distal_phalanx_1_Shape"
Appearance205 = x3d.Appearance()
Material206 = x3d.Material()
Material206.USE = "SurfaceDefault"

Appearance205.material = Material206
ImageTexture207 = x3d.ImageTexture()
ImageTexture207.USE = "JinLOA4TextureAtlas"

Appearance205.texture = ImageTexture207

Shape204.appearance = Appearance205
IndexedFaceSet208 = x3d.IndexedFaceSet()
IndexedFaceSet208.coordIndex = [3,4,5,-1,5,2,3,-1,1,2,5,-1,5,0,1,-1,1,0,6,-1,6,7,1,-1,8,2,1,-1,1,7,8,-1,3,2,8,-1,8,9,3,-1,10,4,3,-1,3,9,10,-1,11,5,4,-1,4,10,11,-1,0,5,11,-1,11,6,0,-1,7,6,12,-1,12,13,7,-1,14,8,7,-1,7,13,14,-1,9,8,14,-1,14,15,9,-1,16,10,9,-1,9,15,16,-1,17,11,10,-1,10,16,17,-1,6,11,17,-1,17,12,6,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,12,18,19,-1,19,13,12,-1,13,19,20,-1,20,14,13,-1,14,20,21,-1,21,15,14,-1,15,21,22,-1,22,16,15,-1,16,22,23,-1,23,17,16,-1,17,23,18,-1,18,12,17,-1]
IndexedFaceSet208.creaseAngle = 3.14159
IndexedFaceSet208.texCoordIndex = [0,1,2,-1,2,3,0,-1,5,3,2,-1,2,4,5,-1,13,14,15,-1,15,12,13,-1,8,3,5,-1,5,6,8,-1,0,3,8,-1,8,9,0,-1,10,1,0,-1,0,9,10,-1,11,2,1,-1,1,10,11,-1,4,2,11,-1,11,7,4,-1,12,15,16,-1,16,18,12,-1,20,8,6,-1,6,19,20,-1,9,8,20,-1,20,21,9,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,7,11,23,-1,23,17,7,-1,24,29,28,-1,28,27,26,-1,24,28,26,-1,25,24,26,-1,16,24,25,-1,25,18,16,-1,19,25,26,-1,26,20,19,-1,20,26,27,-1,27,21,20,-1,21,27,28,-1,28,22,21,-1,22,28,29,-1,29,23,22,-1,23,29,24,-1,24,17,23,-1]
Coordinate209 = x3d.Coordinate()

IndexedFaceSet208.coord = Coordinate209
TextureCoordinate210 = x3d.TextureCoordinate()

IndexedFaceSet208.texCoord = TextureCoordinate210

Shape204.geometry = IndexedFaceSet208

HAnimSegment203.children.append(Shape204)
Group211 = x3d.Group()
Group211.DEF = "l_tarsal_distal_phalanx_1_Sites"
"""(l_tarsal_distal_phalanx_1_tip -0.1043 -0.0227 0.1450)"""
HAnimSite212 = x3d.HAnimSite()
HAnimSite212.name = "l_tarsal_distal_phalanx_1_tip"
HAnimSite212.DEF = "hanim_l_tarsal_distal_phalanx_1_tip"
HAnimSite212.translation = [0.062,0.012,0.134]
TouchSensor213 = x3d.TouchSensor()
TouchSensor213.description = "HAnimSite l_tarsal_distal_phalanx_1_tip 111"

HAnimSite212.children.append(TouchSensor213)
Shape214 = x3d.Shape()
Shape214.USE = "HAnimSiteShape"

HAnimSite212.children.append(Shape214)

Group211.children.append(HAnimSite212)

HAnimSegment203.children.append(Group211)

HAnimJoint202.children.append(HAnimSegment203)

HAnimJoint189.children.append(HAnimJoint202)

HAnimJoint179.children.append(HAnimJoint189)

HAnimJoint169.children.append(HAnimJoint179)

HAnimJoint159.children.append(HAnimJoint169)
HAnimJoint215 = x3d.HAnimJoint()
HAnimJoint215.name = "l_cuneonavicular_2"
HAnimJoint215.DEF = "hanim_l_cuneonavicular_2"
HAnimJoint215.center = [0.0814275,0.033525,0.02142675]
HAnimJoint215.ulimit = [0,0,0]
HAnimJoint215.llimit = [0,0,0]
HAnimSegment216 = x3d.HAnimSegment()
HAnimSegment216.name = "l_cuneiform_2"
HAnimSegment216.DEF = "hanim_l_cuneiform_2"
Shape217 = x3d.Shape()
Shape217.DEF = "l_cuneiform_2_Shape"
Appearance218 = x3d.Appearance()
Material219 = x3d.Material()
Material219.USE = "SurfaceDefault"

Appearance218.material = Material219
ImageTexture220 = x3d.ImageTexture()
ImageTexture220.USE = "JinLOA4TextureAtlas"

Appearance218.texture = ImageTexture220

Shape217.appearance = Appearance218
IndexedFaceSet221 = x3d.IndexedFaceSet()
IndexedFaceSet221.coordIndex = [1,8,9,-1,9,4,1,-1,5,0,2,-1,2,7,5,-1,4,6,3,-1,3,1,4,-1,10,0,5,-1,5,11,10,-1,32,37,36,-1,36,33,32,-1,24,29,28,-1,28,25,24,-1,19,18,23,-1,19,23,22,-1,19,22,21,-1,19,21,20,-1,13,12,17,-1,13,17,16,-1,13,16,15,-1,13,15,14,-1,9,12,13,-1,13,4,9,-1,4,13,14,-1,14,6,4,-1,24,31,30,-1,30,29,24,-1,7,15,16,-1,16,5,7,-1,5,16,17,-1,17,11,5,-1,36,35,34,-1,34,33,36,-1,3,18,19,-1,19,1,3,-1,1,19,20,-1,20,8,1,-1,32,39,38,-1,38,37,32,-1,10,21,22,-1,22,0,10,-1,0,22,23,-1,23,2,0,-1,28,27,26,-1,26,25,28,-1,6,24,25,-1,25,3,6,-1,3,25,26,-1,26,18,3,-1,18,26,27,-1,27,23,18,-1,23,27,28,-1,28,2,23,-1,2,28,29,-1,29,7,2,-1,7,29,30,-1,30,15,7,-1,15,30,31,-1,31,14,15,-1,14,31,24,-1,24,6,14,-1,8,32,33,-1,33,9,8,-1,9,33,34,-1,34,12,9,-1,12,34,35,-1,35,17,12,-1,17,35,36,-1,36,11,17,-1,11,36,37,-1,37,10,11,-1,10,37,38,-1,38,21,10,-1,21,38,39,-1,39,20,21,-1,20,39,32,-1,32,8,20,-1]
IndexedFaceSet221.creaseAngle = 3.14159
IndexedFaceSet221.texCoordIndex = [0,8,9,-1,9,4,0,-1,5,1,2,-1,2,7,5,-1,4,6,3,-1,3,0,4,-1,10,1,5,-1,5,11,10,-1,32,37,36,-1,36,33,32,-1,24,29,28,-1,28,25,24,-1,19,18,23,-1,19,23,22,-1,19,22,21,-1,19,21,20,-1,13,12,17,-1,13,17,16,-1,13,16,15,-1,13,15,14,-1,9,12,13,-1,13,4,9,-1,4,13,14,-1,14,6,4,-1,24,31,30,-1,30,29,24,-1,7,15,16,-1,16,5,7,-1,5,16,17,-1,17,11,5,-1,36,35,34,-1,34,33,36,-1,3,18,19,-1,19,0,3,-1,0,19,20,-1,20,8,0,-1,32,39,38,-1,38,37,32,-1,10,21,22,-1,22,1,10,-1,1,22,23,-1,23,2,1,-1,28,27,26,-1,26,25,28,-1,6,24,25,-1,25,3,6,-1,3,25,26,-1,26,18,3,-1,18,26,27,-1,27,23,18,-1,23,27,28,-1,28,2,23,-1,2,28,29,-1,29,7,2,-1,7,29,30,-1,30,15,7,-1,15,30,31,-1,31,14,15,-1,14,31,24,-1,24,6,14,-1,8,32,33,-1,33,9,8,-1,9,33,34,-1,34,12,9,-1,12,34,35,-1,35,17,12,-1,17,35,36,-1,36,11,17,-1,11,36,37,-1,37,10,11,-1,10,37,38,-1,38,21,10,-1,21,38,39,-1,39,20,21,-1,20,39,32,-1,32,8,20,-1]
Coordinate222 = x3d.Coordinate()

IndexedFaceSet221.coord = Coordinate222
TextureCoordinate223 = x3d.TextureCoordinate()

IndexedFaceSet221.texCoord = TextureCoordinate223

Shape217.geometry = IndexedFaceSet221

HAnimSegment216.children.append(Shape217)
Group224 = x3d.Group()
Group224.DEF = "l_cuneiform_2_Sites"
"""None"""

HAnimSegment216.children.append(Group224)

HAnimJoint215.children.append(HAnimSegment216)
HAnimJoint225 = x3d.HAnimJoint()
HAnimJoint225.name = "l_tarsometatarsal_2"
HAnimJoint225.DEF = "hanim_l_tarsometatarsal_2"
HAnimJoint225.center = [0.08019,0.0261,0.041062504]
HAnimJoint225.ulimit = [0,0,0]
HAnimJoint225.llimit = [0,0,0]
HAnimSegment226 = x3d.HAnimSegment()
HAnimSegment226.name = "l_metatarsal_2"
HAnimSegment226.DEF = "hanim_l_metatarsal_2"
Shape227 = x3d.Shape()
Shape227.DEF = "l_metatarsal_2_Shape"
Appearance228 = x3d.Appearance()
Material229 = x3d.Material()
Material229.USE = "SurfaceDefault"

Appearance228.material = Material229
ImageTexture230 = x3d.ImageTexture()
ImageTexture230.USE = "JinLOA4TextureAtlas"

Appearance228.texture = ImageTexture230

Shape227.appearance = Appearance228
IndexedFaceSet231 = x3d.IndexedFaceSet()
IndexedFaceSet231.coordIndex = [12,15,7,-1,7,4,12,-1,0,8,9,-1,9,2,0,-1,1,10,11,-1,11,3,1,-1,5,0,2,-1,2,6,5,-1,8,1,3,-1,3,9,8,-1,14,13,12,-1,12,4,14,-1,18,17,13,-1,13,14,18,-1,42,39,38,-1,38,43,42,-1,46,51,50,-1,50,47,46,-1,29,35,34,-1,34,30,29,-1,19,26,25,-1,25,20,19,-1,28,27,26,-1,26,19,28,-1,21,24,23,-1,23,22,21,-1,37,36,35,-1,35,29,37,-1,30,34,31,-1,20,25,24,-1,24,21,20,-1,31,34,33,-1,33,32,31,-1,3,19,20,-1,20,9,3,-1,9,20,21,-1,21,2,9,-1,2,21,22,-1,22,6,2,-1,42,41,40,-1,40,39,42,-1,7,23,24,-1,24,4,7,-1,4,24,25,-1,25,16,4,-1,16,25,26,-1,26,14,16,-1,14,26,27,-1,27,18,14,-1,50,49,48,-1,48,47,50,-1,11,28,19,-1,19,3,11,-1,0,29,30,-1,30,8,0,-1,8,30,31,-1,31,1,8,-1,1,31,32,-1,32,10,1,-1,46,53,52,-1,52,51,46,-1,17,33,34,-1,34,13,17,-1,13,34,35,-1,35,12,13,-1,12,35,36,-1,36,15,12,-1,38,45,44,-1,44,43,38,-1,5,37,29,-1,29,0,5,-1,15,38,39,-1,39,7,15,-1,7,39,40,-1,40,23,7,-1,23,40,41,-1,41,22,23,-1,22,41,42,-1,42,6,22,-1,6,42,43,-1,43,5,6,-1,5,43,44,-1,44,37,5,-1,37,44,45,-1,45,36,37,-1,36,45,38,-1,38,15,36,-1,10,46,47,-1,47,11,10,-1,11,47,48,-1,48,28,11,-1,28,48,49,-1,49,27,28,-1,27,49,50,-1,50,18,27,-1,18,50,51,-1,51,17,18,-1,17,51,52,-1,52,33,17,-1,33,52,53,-1,53,32,33,-1,32,53,46,-1,46,10,32,-1]
IndexedFaceSet231.creaseAngle = 3.14159
IndexedFaceSet231.texCoordIndex = [1,7,10,-1,10,0,1,-1,2,11,12,-1,12,3,2,-1,5,15,16,-1,16,6,5,-1,8,2,3,-1,3,9,8,-1,11,5,6,-1,6,12,11,-1,4,13,1,-1,1,0,4,-1,17,14,13,-1,13,4,17,-1,45,42,41,-1,41,46,45,-1,49,54,53,-1,53,50,49,-1,32,38,37,-1,37,33,32,-1,22,29,28,-1,28,23,22,-1,31,30,29,-1,29,22,31,-1,24,27,26,-1,26,25,24,-1,40,39,38,-1,38,32,40,-1,33,21,34,-1,23,28,27,-1,27,24,23,-1,34,37,36,-1,36,35,34,-1,6,22,23,-1,23,12,6,-1,12,23,24,-1,24,3,12,-1,3,24,25,-1,25,9,3,-1,45,44,43,-1,43,42,45,-1,10,26,27,-1,27,0,10,-1,20,27,28,-1,28,18,20,-1,18,28,29,-1,29,19,18,-1,4,29,30,-1,30,17,4,-1,53,52,51,-1,51,50,53,-1,16,31,22,-1,22,6,16,-1,2,32,33,-1,33,11,2,-1,11,33,34,-1,34,5,11,-1,5,34,35,-1,35,15,5,-1,49,56,55,-1,55,54,49,-1,14,36,37,-1,37,13,14,-1,13,37,38,-1,38,1,13,-1,1,38,39,-1,39,7,1,-1,41,48,47,-1,47,46,41,-1,8,40,32,-1,32,2,8,-1,7,41,42,-1,42,10,7,-1,10,42,43,-1,43,26,10,-1,26,43,44,-1,44,25,26,-1,25,44,45,-1,45,9,25,-1,9,45,46,-1,46,8,9,-1,8,46,47,-1,47,40,8,-1,40,47,48,-1,48,39,40,-1,39,48,41,-1,41,7,39,-1,15,49,50,-1,50,16,15,-1,16,50,51,-1,51,31,16,-1,31,51,52,-1,52,30,31,-1,30,52,53,-1,53,17,30,-1,17,53,54,-1,54,14,17,-1,14,54,55,-1,55,36,14,-1,36,55,56,-1,56,35,36,-1,35,56,49,-1,49,15,35,-1]
Coordinate232 = x3d.Coordinate()

IndexedFaceSet231.coord = Coordinate232
TextureCoordinate233 = x3d.TextureCoordinate()

IndexedFaceSet231.texCoord = TextureCoordinate233

Shape227.geometry = IndexedFaceSet231

HAnimSegment226.children.append(Shape227)
Group234 = x3d.Group()
Group234.DEF = "l_metatarsal_2_Sites"
"""None"""

HAnimSegment226.children.append(Group234)

HAnimJoint225.children.append(HAnimSegment226)
HAnimJoint235 = x3d.HAnimJoint()
HAnimJoint235.name = "l_metatarsophalangeal_2"
HAnimJoint235.DEF = "hanim_l_metatarsophalangeal_2"
HAnimJoint235.center = [0.08253,0.014976,0.097830005]
HAnimJoint235.ulimit = [0,0,0]
HAnimJoint235.llimit = [0,0,0]
HAnimSegment236 = x3d.HAnimSegment()
HAnimSegment236.name = "l_tarsal_proximal_phalanx_2"
HAnimSegment236.DEF = "hanim_l_tarsal_proximal_phalanx_2"
Shape237 = x3d.Shape()
Shape237.DEF = "l_tarsal_proximal_phalanx_2_Shape"
Appearance238 = x3d.Appearance()
Material239 = x3d.Material()
Material239.USE = "SurfaceDefault"

Appearance238.material = Material239
ImageTexture240 = x3d.ImageTexture()
ImageTexture240.USE = "JinLOA4TextureAtlas"

Appearance238.texture = ImageTexture240

Shape237.appearance = Appearance238
IndexedFaceSet241 = x3d.IndexedFaceSet()
IndexedFaceSet241.coordIndex = [8,6,20,-1,20,18,8,-1,14,11,19,-1,19,21,14,-1,6,1,20,-1,19,11,15,-1,0,2,3,-1,3,14,0,-1,12,8,16,-1,16,17,12,-1,15,11,12,-1,12,17,15,-1,6,3,2,-1,2,1,6,-1,0,14,21,-1,16,8,18,-1,3,6,5,-1,5,4,3,-1,6,8,7,-1,7,5,6,-1,10,9,12,-1,12,11,10,-1,14,13,10,-1,10,11,14,-1,13,14,3,-1,3,4,13,-1,8,12,9,-1,9,7,8,-1,19,23,24,-1,24,21,19,-1,22,18,20,-1,20,25,22,-1,31,30,36,-1,31,36,35,-1,34,31,35,-1,5,7,9,-1,9,10,13,-1,5,9,13,-1,4,5,13,-1,29,28,27,-1,27,26,29,-1,37,43,42,-1,42,41,37,-1,31,34,33,-1,33,32,31,-1,41,40,39,-1,41,39,38,-1,37,41,38,-1,25,26,27,-1,27,22,25,-1,22,27,28,-1,28,23,22,-1,23,28,29,-1,29,24,23,-1,24,29,26,-1,26,25,24,-1,15,30,31,-1,31,19,15,-1,19,31,32,-1,32,23,19,-1,23,32,33,-1,33,22,23,-1,22,33,34,-1,34,18,22,-1,18,34,35,-1,35,16,18,-1,16,35,36,-1,36,17,16,-1,17,36,30,-1,30,15,17,-1,21,37,38,-1,38,0,21,-1,0,38,39,-1,39,2,0,-1,2,39,40,-1,40,1,2,-1,1,40,41,-1,41,20,1,-1,20,41,42,-1,42,25,20,-1,25,42,43,-1,43,24,25,-1,24,43,37,-1,37,21,24,-1]
IndexedFaceSet241.creaseAngle = 3.14159
IndexedFaceSet241.texCoordIndex = [1,0,30,-1,30,24,1,-1,3,2,25,-1,25,31,3,-1,0,4,30,-1,25,2,26,-1,9,10,5,-1,5,3,9,-1,7,1,27,-1,27,28,7,-1,26,2,8,-1,8,29,26,-1,0,6,11,-1,11,4,0,-1,9,3,31,-1,27,1,24,-1,12,15,14,-1,14,13,12,-1,15,17,16,-1,16,14,15,-1,19,18,21,-1,21,20,19,-1,23,22,19,-1,19,20,23,-1,22,23,12,-1,12,13,22,-1,17,21,18,-1,18,16,17,-1,35,37,38,-1,38,34,35,-1,36,32,33,-1,33,39,36,-1,45,44,50,-1,45,50,49,-1,48,45,49,-1,14,16,18,-1,18,19,22,-1,14,18,22,-1,13,14,22,-1,43,42,41,-1,41,40,43,-1,51,57,56,-1,56,55,51,-1,45,48,47,-1,47,46,45,-1,55,54,53,-1,55,53,52,-1,51,55,52,-1,39,40,41,-1,41,36,39,-1,36,41,42,-1,42,37,36,-1,37,42,43,-1,43,38,37,-1,38,43,40,-1,40,39,38,-1,26,44,45,-1,45,25,26,-1,35,45,46,-1,46,37,35,-1,37,46,47,-1,47,36,37,-1,36,47,48,-1,48,32,36,-1,24,48,49,-1,49,27,24,-1,27,49,50,-1,50,28,27,-1,29,50,44,-1,44,26,29,-1,31,51,52,-1,52,9,31,-1,9,52,53,-1,53,10,9,-1,11,53,54,-1,54,4,11,-1,4,54,55,-1,55,30,4,-1,33,55,56,-1,56,39,33,-1,39,56,57,-1,57,38,39,-1,38,57,51,-1,51,34,38,-1]
Coordinate242 = x3d.Coordinate()

IndexedFaceSet241.coord = Coordinate242
TextureCoordinate243 = x3d.TextureCoordinate()

IndexedFaceSet241.texCoord = TextureCoordinate243

Shape237.geometry = IndexedFaceSet241

HAnimSegment236.children.append(Shape237)
Group244 = x3d.Group()
Group244.DEF = "l_tarsal_proximal_phalanx_2_Sites"
"""None"""

HAnimSegment236.children.append(Group244)

HAnimJoint235.children.append(HAnimSegment236)
HAnimJoint245 = x3d.HAnimJoint()
HAnimJoint245.name = "l_tarsal_proximal_interphalangeal_2"
HAnimJoint245.DEF = "hanim_l_tarsal_proximal_interphalangeal_2"
HAnimJoint245.center = [0.0843075,0.012647251,0.1140075]
HAnimJoint245.ulimit = [0,0,0]
HAnimJoint245.llimit = [0,0,0]
HAnimSegment246 = x3d.HAnimSegment()
HAnimSegment246.name = "l_tarsal_middle_phalanx_2"
HAnimSegment246.DEF = "hanim_l_tarsal_middle_phalanx_2"
Shape247 = x3d.Shape()
Shape247.DEF = "l_tarsal_middle_phalanx_2_Shape"
Appearance248 = x3d.Appearance()
Material249 = x3d.Material()
Material249.USE = "SurfaceDefault"

Appearance248.material = Material249
ImageTexture250 = x3d.ImageTexture()
ImageTexture250.USE = "JinLOA4TextureAtlas"

Appearance248.texture = ImageTexture250

Shape247.appearance = Appearance248
IndexedFaceSet251 = x3d.IndexedFaceSet()
IndexedFaceSet251.coordIndex = [0,1,6,-1,6,7,0,-1,2,0,7,-1,7,8,2,-1,9,3,2,-1,2,8,9,-1,4,3,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,6,1,5,-1,5,11,6,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,0,18,19,-1,19,1,0,-1,1,19,20,-1,20,5,1,-1,5,20,21,-1,21,4,5,-1,4,21,22,-1,22,3,4,-1,3,22,23,-1,23,2,3,-1,2,23,18,-1,18,0,2,-1]
IndexedFaceSet251.creaseAngle = 3.14159
IndexedFaceSet251.texCoordIndex = [0,1,8,-1,8,9,0,-1,2,0,9,-1,9,10,2,-1,11,3,2,-1,2,10,11,-1,4,3,11,-1,11,13,4,-1,14,5,6,-1,6,12,14,-1,8,1,7,-1,7,15,8,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,13,11,-1,12,20,21,-1,21,14,12,-1,15,21,16,-1,16,8,15,-1,22,27,26,-1,26,25,24,-1,22,26,24,-1,23,22,24,-1,0,22,23,-1,23,1,0,-1,1,23,24,-1,24,7,1,-1,5,24,25,-1,25,6,5,-1,4,25,26,-1,26,3,4,-1,3,26,27,-1,27,2,3,-1,2,27,22,-1,22,0,2,-1]
Coordinate252 = x3d.Coordinate()

IndexedFaceSet251.coord = Coordinate252
TextureCoordinate253 = x3d.TextureCoordinate()

IndexedFaceSet251.texCoord = TextureCoordinate253

Shape247.geometry = IndexedFaceSet251

HAnimSegment246.children.append(Shape247)
Group254 = x3d.Group()
Group254.DEF = "l_tarsal_middle_phalanx_2_Sites"
"""None"""

HAnimSegment246.children.append(Group254)

HAnimJoint245.children.append(HAnimSegment246)
HAnimJoint255 = x3d.HAnimJoint()
HAnimJoint255.name = "l_tarsal_distal_interphalangeal_2"
HAnimJoint255.DEF = "hanim_l_tarsal_distal_interphalangeal_2"
HAnimJoint255.center = [0.0843075,0.00982575,0.123435006]
HAnimJoint255.ulimit = [0,0,0]
HAnimJoint255.llimit = [0,0,0]
HAnimSegment256 = x3d.HAnimSegment()
HAnimSegment256.name = "l_tarsal_distal_phalanx_2"
HAnimSegment256.DEF = "hanim_l_tarsal_distal_phalanx_2"
Shape257 = x3d.Shape()
Shape257.DEF = "l_tarsal_distal_phalanx_2_Shape"
Appearance258 = x3d.Appearance()
Material259 = x3d.Material()
Material259.USE = "SurfaceDefault"

Appearance258.material = Material259
ImageTexture260 = x3d.ImageTexture()
ImageTexture260.USE = "JinLOA4TextureAtlas"

Appearance258.texture = ImageTexture260

Shape257.appearance = Appearance258
IndexedFaceSet261 = x3d.IndexedFaceSet()
IndexedFaceSet261.coordIndex = [0,3,2,-1,2,1,0,-1,5,1,2,-1,2,4,5,-1,0,1,7,-1,7,6,0,-1,3,0,6,-1,6,8,3,-1,9,2,3,-1,3,8,9,-1,4,2,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,7,1,5,-1,5,11,7,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,7,12,13,-1,13,6,7,-1,6,13,14,-1,14,8,6,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,7,11,-1]
IndexedFaceSet261.creaseAngle = 3.14159
IndexedFaceSet261.texCoordIndex = [0,3,2,-1,2,1,0,-1,5,1,2,-1,2,4,5,-1,0,1,9,-1,9,8,0,-1,3,0,8,-1,8,10,3,-1,11,2,3,-1,3,10,11,-1,4,2,11,-1,11,12,4,-1,14,7,6,-1,6,13,14,-1,9,1,5,-1,5,15,9,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,9,16,17,-1,17,8,9,-1,8,17,18,-1,18,10,8,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,12,11,-1,13,20,21,-1,21,14,13,-1,15,21,16,-1,16,9,15,-1]
Coordinate262 = x3d.Coordinate()

IndexedFaceSet261.coord = Coordinate262
TextureCoordinate263 = x3d.TextureCoordinate()

IndexedFaceSet261.texCoord = TextureCoordinate263

Shape257.geometry = IndexedFaceSet261

HAnimSegment256.children.append(Shape257)
Group264 = x3d.Group()
Group264.DEF = "l_tarsal_distal_phalanx_2"
"""(l_tarsal_distal_phalanx_2_tip 0.110 0.011 0.19)"""
HAnimSite265 = x3d.HAnimSite()
HAnimSite265.name = "l_tarsal_distal_phalanx_2_tip"
HAnimSite265.DEF = "hanim_l_tarsal_distal_phalanx_2_tip"
HAnimSite265.translation = [0.08,0.016,0.14]
TouchSensor266 = x3d.TouchSensor()
TouchSensor266.description = "HAnimSite l_tarsal_distal_phalanx_2_tip 112"

HAnimSite265.children.append(TouchSensor266)
Shape267 = x3d.Shape()
Shape267.USE = "HAnimSiteShape"

HAnimSite265.children.append(Shape267)

Group264.children.append(HAnimSite265)

HAnimSegment256.children.append(Group264)

HAnimJoint255.children.append(HAnimSegment256)

HAnimJoint245.children.append(HAnimJoint255)

HAnimJoint235.children.append(HAnimJoint245)

HAnimJoint225.children.append(HAnimJoint235)

HAnimJoint215.children.append(HAnimJoint225)

HAnimJoint159.children.append(HAnimJoint215)
HAnimJoint268 = x3d.HAnimJoint()
HAnimJoint268.name = "l_cuneonavicular_3"
HAnimJoint268.DEF = "hanim_l_cuneonavicular_3"
HAnimJoint268.center = [0.092970006,0.03339,0.019818]
HAnimJoint268.ulimit = [0,0,0]
HAnimJoint268.llimit = [0,0,0]
HAnimSegment269 = x3d.HAnimSegment()
HAnimSegment269.name = "l_cuneiform_3"
HAnimSegment269.DEF = "hanim_l_cuneiform_3"
Shape270 = x3d.Shape()
Shape270.DEF = "l_cuneiform_3_Shape"
Appearance271 = x3d.Appearance()
Material272 = x3d.Material()
Material272.USE = "SurfaceDefault"

Appearance271.material = Material272
ImageTexture273 = x3d.ImageTexture()
ImageTexture273.USE = "JinLOA4TextureAtlas"

Appearance271.texture = ImageTexture273

Shape270.appearance = Appearance271
IndexedFaceSet274 = x3d.IndexedFaceSet()
IndexedFaceSet274.coordIndex = [4,3,6,-1,6,0,4,-1,4,8,3,-1,5,2,7,-1,7,1,5,-1,2,9,7,-1,4,7,9,-1,9,8,4,-1,20,25,24,-1,24,21,20,-1,12,11,10,-1,10,13,12,-1,18,17,14,-1,14,19,18,-1,15,14,17,-1,17,16,15,-1,0,10,11,-1,11,4,0,-1,4,11,12,-1,12,7,4,-1,7,12,13,-1,13,1,7,-1,24,23,22,-1,22,21,24,-1,3,14,15,-1,15,6,3,-1,20,27,26,-1,26,25,20,-1,5,16,17,-1,17,2,5,-1,2,17,18,-1,18,9,2,-1,9,18,19,-1,19,8,9,-1,8,19,14,-1,14,3,8,-1,6,20,21,-1,21,0,6,-1,0,21,22,-1,22,10,0,-1,10,22,23,-1,23,13,10,-1,13,23,24,-1,24,1,13,-1,1,24,25,-1,25,5,1,-1,5,25,26,-1,26,16,5,-1,16,26,27,-1,27,15,16,-1,15,27,20,-1,20,6,15,-1]
IndexedFaceSet274.creaseAngle = 3.14159
IndexedFaceSet274.texCoordIndex = [4,3,6,-1,6,0,4,-1,4,8,3,-1,5,2,7,-1,7,1,5,-1,2,9,7,-1,4,11,10,-1,10,8,4,-1,22,27,26,-1,26,23,22,-1,14,13,12,-1,12,15,14,-1,20,19,16,-1,16,21,20,-1,17,16,19,-1,19,18,17,-1,0,12,13,-1,13,4,0,-1,4,13,14,-1,14,11,4,-1,7,14,15,-1,15,1,7,-1,26,25,24,-1,24,23,26,-1,3,16,17,-1,17,6,3,-1,22,29,28,-1,28,27,22,-1,5,18,19,-1,19,2,5,-1,2,19,20,-1,20,9,2,-1,10,20,21,-1,21,8,10,-1,8,21,16,-1,16,3,8,-1,6,22,23,-1,23,0,6,-1,0,23,24,-1,24,12,0,-1,12,24,25,-1,25,15,12,-1,15,25,26,-1,26,1,15,-1,1,26,27,-1,27,5,1,-1,5,27,28,-1,28,18,5,-1,18,28,29,-1,29,17,18,-1,17,29,22,-1,22,6,17,-1]
Coordinate275 = x3d.Coordinate()

IndexedFaceSet274.coord = Coordinate275
TextureCoordinate276 = x3d.TextureCoordinate()

IndexedFaceSet274.texCoord = TextureCoordinate276

Shape270.geometry = IndexedFaceSet274

HAnimSegment269.children.append(Shape270)
Group277 = x3d.Group()
Group277.DEF = "l_cuneiform_3_Sites"
"""None"""

HAnimSegment269.children.append(Group277)

HAnimJoint268.children.append(HAnimSegment269)
HAnimJoint278 = x3d.HAnimJoint()
HAnimJoint278.name = "l_tarsometatarsal_3"
HAnimJoint278.DEF = "hanim_l_tarsometatarsal_3"
HAnimJoint278.center = [0.09459,0.0261,0.039397504]
HAnimJoint278.ulimit = [0,0,0]
HAnimJoint278.llimit = [0,0,0]
HAnimSegment279 = x3d.HAnimSegment()
HAnimSegment279.name = "l_metatarsal_3"
HAnimSegment279.DEF = "hanim_l_metatarsal_3"
Shape280 = x3d.Shape()
Shape280.DEF = "l_metatarsal_3_Shape"
Appearance281 = x3d.Appearance()
Material282 = x3d.Material()
Material282.USE = "SurfaceDefault"

Appearance281.material = Material282
ImageTexture283 = x3d.ImageTexture()
ImageTexture283.USE = "JinLOA4TextureAtlas"

Appearance281.texture = ImageTexture283

Shape280.appearance = Appearance281
IndexedFaceSet284 = x3d.IndexedFaceSet()
IndexedFaceSet284.coordIndex = [15,3,13,-1,13,12,15,-1,10,2,0,-1,0,7,10,-1,9,6,14,-1,14,1,9,-1,3,10,7,-1,7,13,3,-1,12,16,5,-1,5,15,12,-1,6,9,17,-1,17,8,6,-1,17,4,11,-1,11,8,17,-1,27,31,28,-1,34,33,32,-1,32,35,34,-1,28,31,30,-1,30,29,28,-1,35,32,31,-1,31,27,35,-1,23,20,24,-1,22,21,20,-1,20,23,22,-1,25,19,18,-1,18,26,25,-1,24,20,19,-1,19,25,24,-1,1,18,19,-1,19,9,1,-1,9,19,20,-1,20,17,9,-1,17,20,21,-1,21,4,17,-1,48,47,46,-1,46,45,48,-1,5,22,23,-1,23,15,5,-1,15,23,24,-1,24,3,15,-1,3,24,25,-1,25,10,3,-1,10,25,26,-1,26,2,10,-1,40,39,38,-1,38,37,40,-1,13,27,28,-1,28,12,13,-1,12,28,29,-1,29,16,12,-1,44,51,50,-1,50,49,44,-1,11,30,31,-1,31,8,11,-1,8,31,32,-1,32,6,8,-1,6,32,33,-1,33,14,6,-1,36,43,42,-1,42,41,36,-1,0,34,35,-1,35,7,0,-1,7,35,27,-1,27,13,7,-1,37,36,41,-1,41,40,37,-1,48,45,44,-1,44,49,48,-1,14,36,37,-1,37,1,14,-1,1,37,38,-1,38,18,1,-1,18,38,39,-1,39,26,18,-1,26,39,40,-1,40,2,26,-1,2,40,41,-1,41,0,2,-1,0,41,42,-1,42,34,0,-1,34,42,43,-1,43,33,34,-1,33,43,36,-1,36,14,33,-1,16,44,45,-1,45,5,16,-1,5,45,46,-1,46,22,5,-1,22,46,47,-1,47,21,22,-1,21,47,48,-1,48,4,21,-1,4,48,49,-1,49,11,4,-1,11,49,50,-1,50,30,11,-1,30,50,51,-1,51,29,30,-1,29,51,44,-1,44,16,29,-1]
IndexedFaceSet284.creaseAngle = 3.14159
IndexedFaceSet284.texCoordIndex = [25,3,16,-1,16,7,25,-1,12,2,0,-1,0,9,12,-1,22,18,20,-1,20,1,22,-1,13,23,19,-1,19,17,13,-1,15,26,5,-1,5,24,15,-1,8,11,28,-1,28,21,8,-1,14,4,6,-1,6,10,14,-1,43,27,45,-1,54,53,51,-1,51,55,54,-1,46,50,48,-1,48,47,46,-1,56,52,49,-1,49,44,56,-1,36,28,38,-1,35,34,33,-1,33,37,35,-1,40,30,29,-1,29,42,40,-1,39,32,31,-1,31,41,39,-1,1,29,30,-1,30,22,1,-1,11,31,32,-1,32,28,11,-1,14,33,34,-1,34,4,14,-1,70,69,68,-1,68,67,70,-1,5,35,37,-1,37,24,5,-1,25,36,38,-1,38,3,25,-1,13,39,41,-1,41,23,13,-1,12,40,42,-1,42,2,12,-1,62,61,60,-1,60,58,62,-1,16,43,45,-1,45,7,16,-1,15,46,47,-1,47,26,15,-1,66,74,73,-1,73,71,66,-1,6,48,50,-1,50,10,6,-1,21,49,52,-1,52,8,21,-1,18,51,53,-1,53,20,18,-1,57,65,64,-1,64,63,57,-1,0,54,55,-1,55,9,0,-1,19,56,44,-1,44,17,19,-1,59,57,63,-1,63,62,59,-1,70,67,66,-1,66,72,70,-1,20,57,59,-1,59,1,20,-1,1,58,60,-1,60,29,1,-1,29,60,61,-1,61,42,29,-1,42,61,62,-1,62,2,42,-1,2,62,63,-1,63,0,2,-1,0,63,64,-1,64,54,0,-1,54,64,65,-1,65,53,54,-1,53,65,57,-1,57,20,53,-1,26,66,67,-1,67,5,26,-1,5,67,68,-1,68,35,5,-1,35,68,69,-1,69,34,35,-1,34,69,70,-1,70,4,34,-1,4,70,72,-1,72,6,4,-1,6,71,73,-1,73,48,6,-1,48,73,74,-1,74,47,48,-1,47,74,66,-1,66,26,47,-1]
Coordinate285 = x3d.Coordinate()

IndexedFaceSet284.coord = Coordinate285
TextureCoordinate286 = x3d.TextureCoordinate()

IndexedFaceSet284.texCoord = TextureCoordinate286

Shape280.geometry = IndexedFaceSet284

HAnimSegment279.children.append(Shape280)
Group287 = x3d.Group()
Group287.DEF = "l_metatarsal_3_Sites"
"""None"""

HAnimSegment279.children.append(Group287)

HAnimJoint278.children.append(HAnimSegment279)
HAnimJoint288 = x3d.HAnimJoint()
HAnimJoint288.name = "l_metatarsophalangeal_3"
HAnimJoint288.DEF = "hanim_l_metatarsophalangeal_3"
HAnimJoint288.center = [0.096480004,0.015057,0.09542251]
HAnimJoint288.ulimit = [0,0,0]
HAnimJoint288.llimit = [0,0,0]
HAnimSegment289 = x3d.HAnimSegment()
HAnimSegment289.name = "l_tarsal_proximal_phalanx_3"
HAnimSegment289.DEF = "hanim_l_tarsal_proximal_phalanx_3"
Shape290 = x3d.Shape()
Shape290.DEF = "l_tarsal_proximal_phalanx_3_Shape"
Appearance291 = x3d.Appearance()
Material292 = x3d.Material()
Material292.USE = "SurfaceDefault"

Appearance291.material = Material292
ImageTexture293 = x3d.ImageTexture()
ImageTexture293.USE = "JinLOA4TextureAtlas"

Appearance291.texture = ImageTexture293

Shape290.appearance = Appearance291
IndexedFaceSet294 = x3d.IndexedFaceSet()
IndexedFaceSet294.coordIndex = [13,7,1,-1,1,0,13,-1,7,9,2,-1,2,1,7,-1,4,3,14,-1,14,6,4,-1,8,5,4,-1,4,6,8,-1,5,8,13,-1,13,0,5,-1,23,19,15,-1,15,17,23,-1,16,20,24,-1,24,18,16,-1,9,7,19,-1,19,23,9,-1,8,6,24,-1,24,20,8,-1,7,11,19,-1,24,6,21,-1,10,12,13,-1,13,8,10,-1,14,9,25,-1,25,22,14,-1,21,6,14,-1,14,22,21,-1,7,13,12,-1,12,11,7,-1,10,8,20,-1,25,9,23,-1,9,14,3,-1,3,2,9,-1,1,2,3,-1,3,4,5,-1,1,3,5,-1,0,1,5,-1,35,34,33,-1,35,33,32,-1,31,35,32,-1,41,37,43,-1,43,42,41,-1,28,27,26,-1,26,29,28,-1,35,31,30,-1,30,36,35,-1,41,40,39,-1,37,41,39,-1,37,39,38,-1,15,26,27,-1,27,17,15,-1,17,27,28,-1,28,18,17,-1,18,28,29,-1,29,16,18,-1,16,29,26,-1,26,15,16,-1,17,30,31,-1,31,23,17,-1,23,31,32,-1,32,25,23,-1,25,32,33,-1,33,22,25,-1,22,33,34,-1,34,21,22,-1,21,34,35,-1,35,24,21,-1,24,35,36,-1,36,18,24,-1,18,36,30,-1,30,17,18,-1,20,37,38,-1,38,10,20,-1,10,38,39,-1,39,12,10,-1,12,39,40,-1,40,11,12,-1,11,40,41,-1,41,19,11,-1,19,41,42,-1,42,15,19,-1,15,42,43,-1,43,16,15,-1,16,43,37,-1,37,20,16,-1]
IndexedFaceSet294.creaseAngle = 3.14159
IndexedFaceSet294.texCoordIndex = [22,7,0,-1,0,1,22,-1,7,9,2,-1,2,0,7,-1,4,3,23,-1,23,6,4,-1,8,5,4,-1,4,6,8,-1,5,8,22,-1,22,1,5,-1,36,29,24,-1,24,26,36,-1,25,31,38,-1,38,27,25,-1,11,10,28,-1,28,35,11,-1,13,12,37,-1,37,30,13,-1,10,15,28,-1,37,12,32,-1,14,20,16,-1,16,13,14,-1,18,11,39,-1,39,33,18,-1,32,12,19,-1,19,34,32,-1,10,17,21,-1,21,15,10,-1,14,13,30,-1,39,11,35,-1,9,23,3,-1,3,2,9,-1,0,2,3,-1,3,4,5,-1,0,3,5,-1,1,0,5,-1,49,48,47,-1,49,47,46,-1,45,49,46,-1,55,51,57,-1,57,56,55,-1,42,41,40,-1,40,43,42,-1,49,45,44,-1,44,50,49,-1,55,54,53,-1,51,55,53,-1,51,53,52,-1,24,40,41,-1,41,26,24,-1,26,41,42,-1,42,27,26,-1,27,42,43,-1,43,25,27,-1,25,43,40,-1,40,24,25,-1,26,44,45,-1,45,36,26,-1,35,45,46,-1,46,39,35,-1,39,46,47,-1,47,33,39,-1,34,47,48,-1,48,32,34,-1,32,48,49,-1,49,37,32,-1,38,49,50,-1,50,27,38,-1,27,50,44,-1,44,26,27,-1,30,51,52,-1,52,14,30,-1,14,52,53,-1,53,20,14,-1,21,53,54,-1,54,15,21,-1,15,54,55,-1,55,28,15,-1,29,55,56,-1,56,24,29,-1,24,56,57,-1,57,25,24,-1,25,57,51,-1,51,31,25,-1]
Coordinate295 = x3d.Coordinate()

IndexedFaceSet294.coord = Coordinate295
TextureCoordinate296 = x3d.TextureCoordinate()

IndexedFaceSet294.texCoord = TextureCoordinate296

Shape290.geometry = IndexedFaceSet294

HAnimSegment289.children.append(Shape290)
Group297 = x3d.Group()
Group297.DEF = "l_tarsal_proximal_phalanx_3_Sites"
"""None"""

HAnimSegment289.children.append(Group297)

HAnimJoint288.children.append(HAnimSegment289)
HAnimJoint298 = x3d.HAnimJoint()
HAnimJoint298.name = "l_tarsal_proximal_interphalangeal_3"
HAnimJoint298.DEF = "hanim_l_tarsal_proximal_interphalangeal_3"
HAnimJoint298.center = [0.098865,0.011922751,0.110475]
HAnimJoint298.ulimit = [0,0,0]
HAnimJoint298.llimit = [0,0,0]
HAnimSegment299 = x3d.HAnimSegment()
HAnimSegment299.name = "l_tarsal_middle_phalanx_3"
HAnimSegment299.DEF = "hanim_l_tarsal_middle_phalanx_3"
Shape300 = x3d.Shape()
Shape300.DEF = "l_tarsal_middle_phalanx_3_Shape"
Appearance301 = x3d.Appearance()
Material302 = x3d.Material()
Material302.USE = "SurfaceDefault"

Appearance301.material = Material302
ImageTexture303 = x3d.ImageTexture()
ImageTexture303.USE = "JinLOA4TextureAtlas"

Appearance301.texture = ImageTexture303

Shape300.appearance = Appearance301
IndexedFaceSet304 = x3d.IndexedFaceSet()
IndexedFaceSet304.coordIndex = [1,0,6,-1,6,7,1,-1,2,1,7,-1,7,8,2,-1,9,3,2,-1,2,8,9,-1,4,3,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,6,0,5,-1,5,11,6,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,1,18,19,-1,19,0,1,-1,0,19,20,-1,20,5,0,-1,5,20,21,-1,21,4,5,-1,4,21,22,-1,22,3,4,-1,3,22,23,-1,23,2,3,-1,2,23,18,-1,18,1,2,-1]
IndexedFaceSet304.creaseAngle = 3.14159
IndexedFaceSet304.texCoordIndex = [0,1,8,-1,8,9,0,-1,2,0,9,-1,9,10,2,-1,11,3,2,-1,2,10,11,-1,4,3,11,-1,11,13,4,-1,14,6,7,-1,7,12,14,-1,8,1,5,-1,5,15,8,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,13,11,-1,12,20,21,-1,21,14,12,-1,15,21,16,-1,16,8,15,-1,22,27,26,-1,26,25,24,-1,22,26,24,-1,23,22,24,-1,0,22,23,-1,23,1,0,-1,1,23,24,-1,24,5,1,-1,6,24,25,-1,25,7,6,-1,4,25,26,-1,26,3,4,-1,3,26,27,-1,27,2,3,-1,2,27,22,-1,22,0,2,-1]
Coordinate305 = x3d.Coordinate()

IndexedFaceSet304.coord = Coordinate305
TextureCoordinate306 = x3d.TextureCoordinate()

IndexedFaceSet304.texCoord = TextureCoordinate306

Shape300.geometry = IndexedFaceSet304

HAnimSegment299.children.append(Shape300)
Group307 = x3d.Group()
Group307.DEF = "l_tarsal_middle_phalanx_3_Sites"
"""None"""

HAnimSegment299.children.append(Group307)

HAnimJoint298.children.append(HAnimSegment299)
HAnimJoint308 = x3d.HAnimJoint()
HAnimJoint308.name = "l_tarsal_distal_interphalangeal_3"
HAnimJoint308.DEF = "hanim_l_tarsal_distal_interphalangeal_3"
HAnimJoint308.center = [0.1004175,0.00982575,0.11970001]
HAnimJoint308.ulimit = [0,0,0]
HAnimJoint308.llimit = [0,0,0]
HAnimSegment309 = x3d.HAnimSegment()
HAnimSegment309.name = "l_tarsal_distal_phalanx_3"
HAnimSegment309.DEF = "hanim_l_tarsal_distal_phalanx_3"
Shape310 = x3d.Shape()
Shape310.DEF = "l_tarsal_distal_phalanx_3_Shape"
Appearance311 = x3d.Appearance()
Material312 = x3d.Material()
Material312.USE = "SurfaceDefault"

Appearance311.material = Material312
ImageTexture313 = x3d.ImageTexture()
ImageTexture313.USE = "JinLOA4TextureAtlas"

Appearance311.texture = ImageTexture313

Shape310.appearance = Appearance311
IndexedFaceSet314 = x3d.IndexedFaceSet()
IndexedFaceSet314.coordIndex = [1,2,3,-1,3,0,1,-1,5,0,3,-1,3,4,5,-1,1,0,6,-1,6,7,1,-1,2,1,7,-1,7,8,2,-1,9,3,2,-1,2,8,9,-1,4,3,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,6,0,5,-1,5,11,6,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1]
IndexedFaceSet314.creaseAngle = 3.14159
IndexedFaceSet314.texCoordIndex = [0,1,2,-1,2,3,0,-1,5,3,2,-1,2,4,5,-1,0,3,8,-1,8,9,0,-1,1,0,9,-1,9,10,1,-1,11,2,1,-1,1,10,11,-1,4,2,11,-1,11,12,4,-1,14,6,7,-1,7,13,14,-1,8,3,5,-1,5,15,8,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,12,11,-1,13,20,21,-1,21,14,13,-1,15,21,16,-1,16,8,15,-1]
Coordinate315 = x3d.Coordinate()

IndexedFaceSet314.coord = Coordinate315
TextureCoordinate316 = x3d.TextureCoordinate()

IndexedFaceSet314.texCoord = TextureCoordinate316

Shape310.geometry = IndexedFaceSet314

HAnimSegment309.children.append(Shape310)
Group317 = x3d.Group()
Group317.DEF = "l_tarsal_distal_phalanx_3_Sites"
"""(l_tarsal_distal_phalanx_3_tip 0.128 0.011 0.185)"""
HAnimSite318 = x3d.HAnimSite()
HAnimSite318.name = "l_tarsal_distal_phalanx_3_tip"
HAnimSite318.DEF = "hanim_l_tarsal_distal_phalanx_3_tip"
HAnimSite318.translation = [0.1,0.016,0.14]
TouchSensor319 = x3d.TouchSensor()
TouchSensor319.description = "HAnimSite l_tarsal_distal_phalanx_3_tip 113"

HAnimSite318.children.append(TouchSensor319)
Shape320 = x3d.Shape()
Shape320.USE = "HAnimSiteShape"

HAnimSite318.children.append(Shape320)

Group317.children.append(HAnimSite318)

HAnimSegment309.children.append(Group317)

HAnimJoint308.children.append(HAnimSegment309)

HAnimJoint298.children.append(HAnimJoint308)

HAnimJoint288.children.append(HAnimJoint298)

HAnimJoint278.children.append(HAnimJoint288)

HAnimJoint268.children.append(HAnimJoint278)

HAnimJoint159.children.append(HAnimJoint268)

HAnimJoint143.children.append(HAnimJoint159)
HAnimJoint321 = x3d.HAnimJoint()
HAnimJoint321.name = "l_calcaneocuboid"
HAnimJoint321.DEF = "hanim_l_calcaneocuboid"
HAnimJoint321.center = [0.0891,0.0579825,-0.025965001]
HAnimJoint321.ulimit = [0,0,0]
HAnimJoint321.llimit = [0,0,0]
HAnimSegment322 = x3d.HAnimSegment()
HAnimSegment322.name = "l_calcaneus"
HAnimSegment322.DEF = "hanim_l_calcaneus"
Shape323 = x3d.Shape()
Shape323.DEF = "l_calcaneus_Shape"
Appearance324 = x3d.Appearance()
Material325 = x3d.Material()
Material325.USE = "SurfaceDefault"

Appearance324.material = Material325
ImageTexture326 = x3d.ImageTexture()
ImageTexture326.USE = "JinLOA4TextureAtlas"

Appearance324.texture = ImageTexture326

Shape323.appearance = Appearance324
IndexedFaceSet327 = x3d.IndexedFaceSet()
IndexedFaceSet327.coordIndex = [1,2,3,-1,3,0,1,-1,4,5,6,-1,6,7,4,-1,4,7,19,-1,19,18,4,-1,0,3,9,-1,9,8,0,-1,10,11,3,-1,3,2,10,-1,12,13,7,-1,7,6,12,-1,13,20,19,-1,19,7,13,-1,25,9,14,-1,14,26,25,-1,3,11,14,-1,14,9,3,-1,15,16,11,-1,11,10,15,-1,13,17,21,-1,21,20,13,-1,11,16,14,-1,4,18,23,-1,23,5,4,-1,14,37,38,-1,34,35,16,-1,16,15,34,-1,17,36,39,-1,39,21,17,-1,17,13,12,-1,35,37,14,-1,14,16,35,-1,5,27,30,-1,30,6,5,-1,18,1,22,-1,22,23,18,-1,2,1,18,-1,18,19,2,-1,10,2,19,-1,19,20,10,-1,15,10,20,-1,20,21,15,-1,34,15,21,-1,21,39,34,-1,22,1,0,-1,0,8,22,-1,25,24,8,-1,8,9,25,-1,14,38,33,-1,33,26,14,-1,23,29,27,-1,27,5,23,-1,22,28,29,-1,29,23,22,-1,8,24,28,-1,28,22,8,-1,30,31,12,-1,12,6,30,-1,32,40,12,-1,12,31,32,-1,40,36,17,-1,17,12,40,-1,44,43,42,-1,42,41,49,-1,44,42,49,-1,49,48,47,-1,44,49,47,-1,45,44,47,-1,46,45,47,-1,55,54,53,-1,53,52,51,-1,55,53,51,-1,50,55,51,-1,55,50,59,-1,59,56,55,-1,56,59,58,-1,58,57,56,-1,34,41,42,-1,42,35,34,-1,35,42,43,-1,43,37,35,-1,37,43,44,-1,44,38,37,-1,38,44,45,-1,45,33,38,-1,33,45,46,-1,46,32,33,-1,32,46,47,-1,47,40,32,-1,40,47,48,-1,48,36,40,-1,36,48,49,-1,49,39,36,-1,39,49,41,-1,41,34,39,-1,25,50,51,-1,51,24,25,-1,24,51,52,-1,52,28,24,-1,28,52,53,-1,53,29,28,-1,29,53,54,-1,54,27,29,-1,27,54,55,-1,55,30,27,-1,30,55,56,-1,56,31,30,-1,31,56,57,-1,57,32,31,-1,32,57,58,-1,58,33,32,-1,33,58,59,-1,59,26,33,-1,26,59,50,-1,50,25,26,-1]
IndexedFaceSet327.creaseAngle = 3.14159
IndexedFaceSet327.texCoordIndex = [1,2,3,-1,3,0,1,-1,4,5,6,-1,6,7,4,-1,4,7,19,-1,19,18,4,-1,0,3,9,-1,9,8,0,-1,10,11,3,-1,3,2,10,-1,12,13,7,-1,7,6,12,-1,13,20,19,-1,19,7,13,-1,25,9,14,-1,14,26,25,-1,3,11,14,-1,14,9,3,-1,15,16,11,-1,11,10,15,-1,13,17,21,-1,21,20,13,-1,11,16,14,-1,4,18,23,-1,23,5,4,-1,14,37,38,-1,34,35,16,-1,16,15,34,-1,17,36,39,-1,39,21,17,-1,17,13,12,-1,35,37,14,-1,14,16,35,-1,5,27,30,-1,30,6,5,-1,18,1,22,-1,22,23,18,-1,2,1,18,-1,18,19,2,-1,10,2,19,-1,19,20,10,-1,15,10,20,-1,20,21,15,-1,34,15,21,-1,21,39,34,-1,22,1,0,-1,0,8,22,-1,25,24,8,-1,8,9,25,-1,14,38,33,-1,33,26,14,-1,23,29,27,-1,27,5,23,-1,22,28,29,-1,29,23,22,-1,8,24,28,-1,28,22,8,-1,30,31,12,-1,12,6,30,-1,32,40,12,-1,12,31,32,-1,40,36,17,-1,17,12,40,-1,44,43,42,-1,42,41,49,-1,44,42,49,-1,49,48,47,-1,44,49,47,-1,45,44,47,-1,46,45,47,-1,55,54,53,-1,53,52,51,-1,55,53,51,-1,50,55,51,-1,55,50,59,-1,59,56,55,-1,56,59,58,-1,58,57,56,-1,34,41,42,-1,42,35,34,-1,35,42,43,-1,43,37,35,-1,37,43,44,-1,44,38,37,-1,38,44,45,-1,45,33,38,-1,33,45,46,-1,46,32,33,-1,32,46,47,-1,47,40,32,-1,40,47,48,-1,48,36,40,-1,36,48,49,-1,49,39,36,-1,39,49,41,-1,41,34,39,-1,25,50,51,-1,51,24,25,-1,24,51,52,-1,52,28,24,-1,28,52,53,-1,53,29,28,-1,29,53,54,-1,54,27,29,-1,27,54,55,-1,55,30,27,-1,30,55,56,-1,56,31,30,-1,31,56,57,-1,57,32,31,-1,32,57,58,-1,58,33,32,-1,33,58,59,-1,59,26,33,-1,26,59,50,-1,50,25,26,-1]
Coordinate328 = x3d.Coordinate()

IndexedFaceSet327.coord = Coordinate328
TextureCoordinate329 = x3d.TextureCoordinate()

IndexedFaceSet327.texCoord = TextureCoordinate329

Shape323.geometry = IndexedFaceSet327

HAnimSegment322.children.append(Shape323)
Group330 = x3d.Group()
Group330.DEF = "l_calcaneus_Sites"
"""None"""

HAnimSegment322.children.append(Group330)

HAnimJoint321.children.append(HAnimSegment322)
HAnimJoint331 = x3d.HAnimJoint()
HAnimJoint331.name = "l_transversetarsal"
HAnimJoint331.DEF = "hanim_l_transversetarsal"
HAnimJoint331.center = [0.1106325,0.03528,0.002089125]
HAnimJoint331.ulimit = [0,0,0]
HAnimJoint331.llimit = [0,0,0]
HAnimSegment332 = x3d.HAnimSegment()
HAnimSegment332.name = "l_cuboid"
HAnimSegment332.DEF = "hanim_l_cuboid"
Shape333 = x3d.Shape()
Shape333.DEF = "l_cuboid_Shape"
Appearance334 = x3d.Appearance()
Material335 = x3d.Material()
Material335.USE = "SurfaceDefault"

Appearance334.material = Material335
ImageTexture336 = x3d.ImageTexture()
ImageTexture336.USE = "JinLOA4TextureAtlas"

Appearance334.texture = ImageTexture336

Shape333.appearance = Appearance334
IndexedFaceSet337 = x3d.IndexedFaceSet()
IndexedFaceSet337.coordIndex = [1,0,16,-1,16,17,1,-1,3,0,5,-1,5,8,3,-1,6,1,2,-1,2,7,6,-1,2,10,4,-1,18,10,2,-1,4,12,13,-1,13,9,4,-1,11,12,4,-1,4,10,11,-1,6,5,0,-1,0,1,6,-1,9,7,2,-1,2,4,9,-1,8,15,14,-1,14,3,8,-1,3,19,16,-1,16,0,3,-1,14,19,3,-1,1,17,18,-1,18,2,1,-1,27,26,33,-1,33,32,31,-1,27,33,31,-1,30,27,31,-1,21,20,25,-1,25,24,21,-1,35,34,42,-1,36,35,42,-1,42,41,40,-1,36,42,40,-1,39,36,40,-1,22,21,24,-1,24,23,22,-1,11,20,21,-1,21,12,11,-1,12,21,22,-1,22,13,12,-1,39,38,37,-1,37,36,39,-1,15,23,24,-1,24,14,15,-1,14,24,25,-1,25,19,14,-1,30,29,28,-1,28,27,30,-1,10,26,27,-1,27,11,10,-1,11,27,28,-1,28,20,11,-1,20,28,29,-1,29,25,20,-1,25,29,30,-1,30,19,25,-1,19,30,31,-1,31,16,19,-1,16,31,32,-1,32,17,16,-1,17,32,33,-1,33,18,17,-1,18,33,26,-1,26,10,18,-1,5,34,35,-1,35,8,5,-1,8,35,36,-1,36,15,8,-1,15,36,37,-1,37,23,15,-1,23,37,38,-1,38,22,23,-1,22,38,39,-1,39,13,22,-1,13,39,40,-1,40,9,13,-1,9,40,41,-1,41,7,9,-1,7,41,42,-1,42,6,7,-1,6,42,34,-1,34,5,6,-1]
IndexedFaceSet337.creaseAngle = 3.14159
IndexedFaceSet337.texCoordIndex = [1,0,16,-1,16,17,1,-1,2,0,5,-1,5,8,2,-1,6,1,3,-1,3,7,6,-1,3,10,4,-1,18,10,3,-1,4,12,13,-1,13,9,4,-1,11,12,4,-1,4,10,11,-1,6,5,0,-1,0,1,6,-1,9,7,3,-1,3,4,9,-1,8,15,14,-1,14,2,8,-1,2,19,16,-1,16,0,2,-1,14,19,2,-1,1,17,18,-1,18,3,1,-1,27,26,33,-1,33,32,31,-1,27,33,31,-1,30,27,31,-1,21,20,25,-1,25,24,21,-1,35,34,42,-1,36,35,42,-1,42,41,40,-1,36,42,40,-1,39,36,40,-1,22,21,24,-1,24,23,22,-1,11,20,21,-1,21,12,11,-1,12,21,22,-1,22,13,12,-1,39,38,37,-1,37,36,39,-1,15,23,24,-1,24,14,15,-1,14,24,25,-1,25,19,14,-1,30,29,28,-1,28,27,30,-1,10,26,27,-1,27,11,10,-1,11,27,28,-1,28,20,11,-1,20,28,29,-1,29,25,20,-1,25,29,30,-1,30,19,25,-1,19,30,31,-1,31,16,19,-1,16,31,32,-1,32,17,16,-1,17,32,33,-1,33,18,17,-1,18,33,26,-1,26,10,18,-1,5,34,35,-1,35,8,5,-1,8,35,36,-1,36,15,8,-1,15,36,37,-1,37,23,15,-1,23,37,38,-1,38,22,23,-1,22,38,39,-1,39,13,22,-1,13,39,40,-1,40,9,13,-1,9,40,41,-1,41,7,9,-1,7,41,42,-1,42,6,7,-1,6,42,34,-1,34,5,6,-1]
Coordinate338 = x3d.Coordinate()

IndexedFaceSet337.coord = Coordinate338
TextureCoordinate339 = x3d.TextureCoordinate()

IndexedFaceSet337.texCoord = TextureCoordinate339

Shape333.geometry = IndexedFaceSet337

HAnimSegment332.children.append(Shape333)
Group340 = x3d.Group()
Group340.DEF = "l_cuboid_Sites"
"""None"""

HAnimSegment332.children.append(Group340)

HAnimJoint331.children.append(HAnimSegment332)
HAnimJoint341 = x3d.HAnimJoint()
HAnimJoint341.name = "l_tarsometatarsal_4"
HAnimJoint341.DEF = "hanim_l_tarsometatarsal_4"
HAnimJoint341.center = [0.1064925,0.0245475,0.03843]
HAnimJoint341.ulimit = [0,0,0]
HAnimJoint341.llimit = [0,0,0]
HAnimSegment342 = x3d.HAnimSegment()
HAnimSegment342.name = "l_metatarsal_4"
HAnimSegment342.DEF = "hanim_l_metatarsal_4"
Shape343 = x3d.Shape()
Shape343.DEF = "l_metatarsal_4_Shape"
Appearance344 = x3d.Appearance()
Material345 = x3d.Material()
Material345.USE = "SurfaceDefault"

Appearance344.material = Material345
ImageTexture346 = x3d.ImageTexture()
ImageTexture346.USE = "JinLOA4TextureAtlas"

Appearance344.texture = ImageTexture346

Shape343.appearance = Appearance344
IndexedFaceSet347 = x3d.IndexedFaceSet()
IndexedFaceSet347.coordIndex = [11,16,17,-1,17,13,11,-1,10,14,16,-1,16,11,10,-1,5,7,3,-1,3,1,5,-1,0,4,6,-1,6,2,0,-1,14,10,12,-1,12,15,14,-1,7,4,0,-1,0,3,7,-1,8,9,5,-1,5,1,8,-1,40,37,36,-1,36,41,40,-1,48,45,44,-1,44,49,48,-1,27,31,28,-1,28,31,30,-1,30,29,28,-1,34,33,32,-1,32,35,34,-1,35,32,31,-1,31,27,35,-1,18,24,19,-1,26,25,24,-1,24,18,26,-1,20,23,22,-1,22,21,20,-1,19,24,23,-1,23,20,19,-1,5,18,19,-1,19,7,5,-1,7,19,20,-1,20,4,7,-1,4,20,21,-1,21,6,4,-1,40,39,38,-1,38,37,40,-1,15,22,23,-1,23,14,15,-1,14,23,24,-1,24,16,14,-1,16,24,25,-1,25,17,16,-1,44,51,50,-1,50,49,44,-1,9,26,18,-1,18,5,9,-1,3,27,28,-1,28,1,3,-1,1,28,29,-1,29,8,1,-1,48,47,46,-1,46,45,48,-1,13,30,31,-1,31,11,13,-1,11,31,32,-1,32,10,11,-1,10,32,33,-1,33,12,10,-1,36,43,42,-1,42,41,36,-1,2,34,35,-1,35,0,2,-1,0,35,27,-1,27,3,0,-1,12,36,37,-1,37,15,12,-1,15,37,38,-1,38,22,15,-1,22,38,39,-1,39,21,22,-1,21,39,40,-1,40,6,21,-1,6,40,41,-1,41,2,6,-1,2,41,42,-1,42,34,2,-1,34,42,43,-1,43,33,34,-1,33,43,36,-1,36,12,33,-1,17,44,45,-1,45,13,17,-1,13,45,46,-1,46,30,13,-1,30,46,47,-1,47,29,30,-1,29,47,48,-1,48,8,29,-1,8,48,49,-1,49,9,8,-1,9,49,50,-1,50,26,9,-1,26,50,51,-1,51,25,26,-1,25,51,44,-1,44,17,25,-1]
IndexedFaceSet347.creaseAngle = 3.14159
IndexedFaceSet347.texCoordIndex = [5,16,17,-1,17,13,5,-1,2,7,16,-1,16,5,2,-1,9,12,6,-1,6,1,9,-1,0,8,11,-1,11,4,0,-1,7,2,3,-1,3,10,7,-1,12,8,0,-1,0,6,12,-1,14,15,9,-1,9,1,14,-1,42,39,38,-1,38,43,42,-1,50,47,46,-1,46,51,50,-1,29,18,30,-1,30,33,32,-1,32,31,30,-1,36,35,34,-1,34,37,36,-1,37,34,33,-1,33,29,37,-1,20,19,21,-1,28,27,26,-1,26,20,28,-1,22,25,24,-1,24,23,22,-1,21,26,25,-1,25,22,21,-1,9,20,21,-1,21,12,9,-1,12,21,22,-1,22,8,12,-1,8,22,23,-1,23,11,8,-1,42,41,40,-1,40,39,42,-1,10,24,25,-1,25,7,10,-1,7,25,26,-1,26,16,7,-1,16,26,27,-1,27,17,16,-1,46,53,52,-1,52,51,46,-1,15,28,20,-1,20,9,15,-1,6,29,30,-1,30,1,6,-1,1,30,31,-1,31,14,1,-1,50,49,48,-1,48,47,50,-1,13,32,33,-1,33,5,13,-1,5,33,34,-1,34,2,5,-1,2,34,35,-1,35,3,2,-1,38,45,44,-1,44,43,38,-1,4,36,37,-1,37,0,4,-1,0,37,29,-1,29,6,0,-1,3,38,39,-1,39,10,3,-1,10,39,40,-1,40,24,10,-1,24,40,41,-1,41,23,24,-1,23,41,42,-1,42,11,23,-1,11,42,43,-1,43,4,11,-1,4,43,44,-1,44,36,4,-1,36,44,45,-1,45,35,36,-1,35,45,38,-1,38,3,35,-1,17,46,47,-1,47,13,17,-1,13,47,48,-1,48,32,13,-1,32,48,49,-1,49,31,32,-1,31,49,50,-1,50,14,31,-1,14,50,51,-1,51,15,14,-1,15,51,52,-1,52,28,15,-1,28,52,53,-1,53,27,28,-1,27,53,46,-1,46,17,27,-1]
Coordinate348 = x3d.Coordinate()

IndexedFaceSet347.coord = Coordinate348
TextureCoordinate349 = x3d.TextureCoordinate()

IndexedFaceSet347.texCoord = TextureCoordinate349

Shape343.geometry = IndexedFaceSet347

HAnimSegment342.children.append(Shape343)
Group350 = x3d.Group()
Group350.DEF = "l_metatarsal_4_Sites"
"""None"""

HAnimSegment342.children.append(Group350)

HAnimJoint341.children.append(HAnimSegment342)
HAnimJoint351 = x3d.HAnimJoint()
HAnimJoint351.name = "l_metatarsophalangeal_4"
HAnimJoint351.DEF = "hanim_l_metatarsophalangeal_4"
HAnimJoint351.center = [0.109867506,0.01435275,0.091170006]
HAnimJoint351.ulimit = [0,0,0]
HAnimJoint351.llimit = [0,0,0]
HAnimSegment352 = x3d.HAnimSegment()
HAnimSegment352.name = "l_tarsal_proximal_phalanx_4"
HAnimSegment352.DEF = "hanim_l_tarsal_proximal_phalanx_4"
Shape353 = x3d.Shape()
Shape353.DEF = "l_tarsal_proximal_phalanx_4_Shape"
Appearance354 = x3d.Appearance()
Material355 = x3d.Material()
Material355.USE = "SurfaceDefault"

Appearance354.material = Material355
ImageTexture356 = x3d.ImageTexture()
ImageTexture356.USE = "JinLOA4TextureAtlas"

Appearance354.texture = ImageTexture356

Shape353.appearance = Appearance354
IndexedFaceSet357 = x3d.IndexedFaceSet()
IndexedFaceSet357.coordIndex = [13,10,1,-1,1,2,13,-1,10,8,3,-1,3,1,10,-1,3,8,0,-1,0,4,3,-1,0,9,5,-1,5,4,0,-1,7,6,5,-1,5,9,7,-1,6,7,13,-1,13,2,6,-1,22,14,18,-1,18,17,22,-1,20,15,21,-1,21,19,20,-1,9,21,15,-1,15,7,9,-1,10,16,14,-1,8,10,14,-1,14,22,8,-1,21,9,23,-1,11,12,13,-1,13,7,11,-1,0,8,24,-1,24,25,0,-1,16,10,13,-1,13,12,16,-1,23,9,0,-1,0,25,23,-1,11,7,15,-1,24,8,22,-1,35,34,33,-1,31,35,33,-1,31,33,32,-1,1,3,4,-1,4,5,6,-1,1,4,6,-1,2,1,6,-1,37,40,39,-1,39,38,37,-1,28,27,26,-1,26,29,28,-1,35,31,30,-1,30,36,35,-1,37,43,42,-1,40,37,42,-1,40,42,41,-1,18,26,27,-1,27,17,18,-1,17,27,28,-1,28,19,17,-1,19,28,29,-1,29,20,19,-1,20,29,26,-1,26,18,20,-1,17,30,31,-1,31,22,17,-1,22,31,32,-1,32,24,22,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,23,25,-1,23,34,35,-1,35,21,23,-1,21,35,36,-1,36,19,21,-1,19,36,30,-1,30,17,19,-1,14,37,38,-1,38,18,14,-1,18,38,39,-1,39,20,18,-1,20,39,40,-1,40,15,20,-1,15,40,41,-1,41,11,15,-1,11,41,42,-1,42,12,11,-1,12,42,43,-1,43,16,12,-1,16,43,37,-1,37,14,16,-1]
IndexedFaceSet357.creaseAngle = 3.14159
IndexedFaceSet357.texCoordIndex = [27,10,1,-1,1,2,27,-1,10,11,3,-1,3,1,10,-1,3,11,0,-1,0,4,3,-1,0,12,5,-1,5,4,0,-1,9,6,5,-1,5,12,9,-1,6,9,27,-1,27,2,6,-1,35,7,29,-1,29,28,35,-1,31,8,33,-1,33,30,31,-1,15,32,16,-1,16,14,15,-1,17,18,13,-1,19,17,13,-1,13,34,19,-1,32,15,36,-1,20,21,22,-1,22,14,20,-1,23,19,37,-1,37,38,23,-1,18,17,25,-1,25,24,18,-1,36,15,26,-1,26,39,36,-1,20,14,16,-1,37,19,34,-1,49,48,47,-1,45,49,47,-1,45,47,46,-1,1,3,4,-1,4,5,6,-1,1,4,6,-1,2,1,6,-1,51,54,53,-1,53,52,51,-1,42,41,40,-1,40,43,42,-1,49,45,44,-1,44,50,49,-1,51,57,56,-1,54,51,56,-1,54,56,55,-1,29,40,41,-1,41,28,29,-1,28,41,42,-1,42,30,28,-1,30,42,43,-1,43,31,30,-1,31,43,40,-1,40,29,31,-1,28,44,45,-1,45,35,28,-1,34,45,46,-1,46,37,34,-1,37,46,47,-1,47,38,37,-1,39,47,48,-1,48,36,39,-1,36,48,49,-1,49,32,36,-1,33,49,50,-1,50,30,33,-1,30,50,44,-1,44,28,30,-1,7,51,52,-1,52,29,7,-1,29,52,53,-1,53,31,29,-1,31,53,54,-1,54,8,31,-1,16,54,55,-1,55,20,16,-1,20,55,56,-1,56,21,20,-1,24,56,57,-1,57,18,24,-1,18,57,51,-1,51,13,18,-1]
Coordinate358 = x3d.Coordinate()

IndexedFaceSet357.coord = Coordinate358
TextureCoordinate359 = x3d.TextureCoordinate()

IndexedFaceSet357.texCoord = TextureCoordinate359

Shape353.geometry = IndexedFaceSet357

HAnimSegment352.children.append(Shape353)
Group360 = x3d.Group()
Group360.DEF = "l_tarsal_proximal_phalanx_4_Sites"
"""None"""

HAnimSegment352.children.append(Group360)

HAnimJoint351.children.append(HAnimSegment352)
HAnimJoint361 = x3d.HAnimJoint()
HAnimJoint361.name = "l_tarsal_proximal_interphalangeal_4"
HAnimJoint361.DEF = "hanim_l_tarsal_proximal_interphalangeal_4"
HAnimJoint361.center = [0.114165,0.0122445,0.1063125]
HAnimJoint361.ulimit = [0,0,0]
HAnimJoint361.llimit = [0,0,0]
HAnimSegment362 = x3d.HAnimSegment()
HAnimSegment362.name = "l_tarsal_middle_phalanx_4"
HAnimSegment362.DEF = "hanim_l_tarsal_middle_phalanx_4"
Shape363 = x3d.Shape()
Shape363.DEF = "l_tarsal_middle_phalanx_4_Shape"
Appearance364 = x3d.Appearance()
Material365 = x3d.Material()
Material365.USE = "SurfaceDefault"

Appearance364.material = Material365
ImageTexture366 = x3d.ImageTexture()
ImageTexture366.USE = "JinLOA4TextureAtlas"

Appearance364.texture = ImageTexture366

Shape363.appearance = Appearance364
IndexedFaceSet367 = x3d.IndexedFaceSet()
IndexedFaceSet367.coordIndex = [0,1,7,-1,7,6,0,-1,2,0,6,-1,6,8,2,-1,9,3,2,-1,2,8,9,-1,4,3,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,7,1,5,-1,5,11,7,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,7,12,13,-1,13,6,7,-1,6,13,14,-1,14,8,6,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,7,11,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,0,18,19,-1,19,1,0,-1,1,19,20,-1,20,5,1,-1,5,20,21,-1,21,4,5,-1,4,21,22,-1,22,3,4,-1,3,22,23,-1,23,2,3,-1,2,23,18,-1,18,0,2,-1]
IndexedFaceSet367.creaseAngle = 3.14159
IndexedFaceSet367.texCoordIndex = [0,1,9,-1,9,8,0,-1,2,0,8,-1,8,10,2,-1,11,3,2,-1,2,10,11,-1,4,3,11,-1,11,12,4,-1,14,6,7,-1,7,13,14,-1,9,1,5,-1,5,15,9,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,9,16,17,-1,17,8,9,-1,8,17,18,-1,18,10,8,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,12,11,-1,13,20,21,-1,21,14,13,-1,15,21,16,-1,16,9,15,-1,22,27,26,-1,26,25,24,-1,22,26,24,-1,23,22,24,-1,0,22,23,-1,23,1,0,-1,1,23,24,-1,24,5,1,-1,6,24,25,-1,25,7,6,-1,4,25,26,-1,26,3,4,-1,3,26,27,-1,27,2,3,-1,2,27,22,-1,22,0,2,-1]
Coordinate368 = x3d.Coordinate()

IndexedFaceSet367.coord = Coordinate368
TextureCoordinate369 = x3d.TextureCoordinate()

IndexedFaceSet367.texCoord = TextureCoordinate369

Shape363.geometry = IndexedFaceSet367

HAnimSegment362.children.append(Shape363)
Group370 = x3d.Group()
Group370.DEF = "l_tarsal_middle_phalanx_4_Sites"
"""None"""

HAnimSegment362.children.append(Group370)

HAnimJoint361.children.append(HAnimSegment362)
HAnimJoint371 = x3d.HAnimJoint()
HAnimJoint371.name = "l_tarsal_distal_interphalangeal_4"
HAnimJoint371.DEF = "hanim_l_tarsal_distal_interphalangeal_4"
HAnimJoint371.center = [0.1156725,0.009369,0.11369251]
HAnimJoint371.ulimit = [0,0,0]
HAnimJoint371.llimit = [0,0,0]
HAnimSegment372 = x3d.HAnimSegment()
HAnimSegment372.name = "l_tarsal_distal_phalanx_4"
HAnimSegment372.DEF = "hanim_l_tarsal_distal_phalanx_4"
Shape373 = x3d.Shape()
Shape373.DEF = "l_tarsal_distal_phalanx_4_Shape"
Appearance374 = x3d.Appearance()
Material375 = x3d.Material()
Material375.USE = "SurfaceDefault"

Appearance374.material = Material375
ImageTexture376 = x3d.ImageTexture()
ImageTexture376.USE = "JinLOA4TextureAtlas"

Appearance374.texture = ImageTexture376

Shape373.appearance = Appearance374
IndexedFaceSet377 = x3d.IndexedFaceSet()
IndexedFaceSet377.coordIndex = [0,1,2,-1,2,3,0,-1,5,3,2,-1,2,4,5,-1,0,3,7,-1,7,6,0,-1,1,0,6,-1,6,8,1,-1,9,2,1,-1,1,8,9,-1,4,2,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,7,3,5,-1,5,11,7,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,7,12,13,-1,13,6,7,-1,6,13,14,-1,14,8,6,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,7,11,-1]
IndexedFaceSet377.creaseAngle = 3.14159
IndexedFaceSet377.texCoordIndex = [0,1,2,-1,2,3,0,-1,5,3,2,-1,2,4,5,-1,0,3,9,-1,9,8,0,-1,1,0,8,-1,8,10,1,-1,11,2,1,-1,1,10,11,-1,4,2,11,-1,11,12,4,-1,14,6,7,-1,7,13,14,-1,9,3,5,-1,5,15,9,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,9,16,17,-1,17,8,9,-1,8,17,18,-1,18,10,8,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,12,11,-1,13,20,21,-1,21,14,13,-1,15,21,16,-1,16,9,15,-1]
Coordinate378 = x3d.Coordinate()

IndexedFaceSet377.coord = Coordinate378
TextureCoordinate379 = x3d.TextureCoordinate()

IndexedFaceSet377.texCoord = TextureCoordinate379

Shape373.geometry = IndexedFaceSet377

HAnimSegment372.children.append(Shape373)
Group380 = x3d.Group()
Group380.DEF = "l_tarsal_distal_phalanx_4_Sites"
"""(l_tarsal_distal_phalanx_4_tip 0.142 0.011 0.178)"""
HAnimSite381 = x3d.HAnimSite()
HAnimSite381.name = "l_tarsal_distal_phalanx_4_tip"
HAnimSite381.DEF = "hanim_l_tarsal_distal_phalanx_4_tip"
HAnimSite381.translation = [0.115,0.016,0.13]
TouchSensor382 = x3d.TouchSensor()
TouchSensor382.description = "HAnimSite l_tarsal_distal_phalanx_4_tip 114"

HAnimSite381.children.append(TouchSensor382)
Shape383 = x3d.Shape()
Shape383.USE = "HAnimSiteShape"

HAnimSite381.children.append(Shape383)

Group380.children.append(HAnimSite381)

HAnimSegment372.children.append(Group380)

HAnimJoint371.children.append(HAnimSegment372)

HAnimJoint361.children.append(HAnimJoint371)

HAnimJoint351.children.append(HAnimJoint361)

HAnimJoint341.children.append(HAnimJoint351)

HAnimJoint331.children.append(HAnimJoint341)
HAnimJoint384 = x3d.HAnimJoint()
HAnimJoint384.name = "l_tarsometatarsal_5"
HAnimJoint384.DEF = "hanim_l_tarsometatarsal_5"
HAnimJoint384.center = [0.120825,0.020945251,0.03474]
HAnimJoint384.ulimit = [0,0,0]
HAnimJoint384.llimit = [0,0,0]
HAnimSegment385 = x3d.HAnimSegment()
HAnimSegment385.name = "l_metatarsal_5"
HAnimSegment385.DEF = "hanim_l_metatarsal_5"
Shape386 = x3d.Shape()
Shape386.DEF = "l_metatarsal_5_Shape"
Appearance387 = x3d.Appearance()
Material388 = x3d.Material()
Material388.USE = "SurfaceDefault"

Appearance387.material = Material388
ImageTexture389 = x3d.ImageTexture()
ImageTexture389.USE = "JinLOA4TextureAtlas"

Appearance387.texture = ImageTexture389

Shape386.appearance = Appearance387
IndexedFaceSet390 = x3d.IndexedFaceSet()
IndexedFaceSet390.coordIndex = [0,10,1,-1,2,9,17,-1,17,12,2,-1,6,14,11,-1,11,0,6,-1,2,8,7,-1,7,1,2,-1,3,18,19,-1,19,4,3,-1,13,5,20,-1,20,22,13,-1,5,9,10,-1,10,4,5,-1,6,0,1,-1,1,7,6,-1,8,2,12,-1,12,15,8,-1,9,5,13,-1,13,17,9,-1,0,11,16,-1,16,3,0,-1,9,2,1,-1,1,10,9,-1,3,4,10,-1,10,0,3,-1,16,21,18,-1,18,3,16,-1,19,20,5,-1,5,4,19,-1,35,34,33,-1,36,35,33,-1,32,36,33,-1,27,26,25,-1,25,24,27,-1,41,40,39,-1,41,39,45,-1,44,41,45,-1,28,23,29,-1,28,27,24,-1,24,23,28,-1,29,23,31,-1,31,30,29,-1,11,23,24,-1,24,16,11,-1,16,24,25,-1,25,21,16,-1,32,38,37,-1,37,36,32,-1,22,26,27,-1,27,13,22,-1,13,27,28,-1,28,17,13,-1,17,28,29,-1,29,12,17,-1,12,29,30,-1,30,15,12,-1,44,43,42,-1,42,41,44,-1,14,31,23,-1,23,11,14,-1,21,32,33,-1,33,18,21,-1,18,33,34,-1,34,19,18,-1,19,34,35,-1,35,20,19,-1,20,35,36,-1,36,22,20,-1,22,36,37,-1,37,26,22,-1,26,37,38,-1,38,25,26,-1,25,38,32,-1,32,21,25,-1,7,39,40,-1,40,6,7,-1,6,40,41,-1,41,14,6,-1,14,41,42,-1,42,31,14,-1,31,42,43,-1,43,30,31,-1,30,43,44,-1,44,15,30,-1,15,44,45,-1,45,8,15,-1,8,45,39,-1,39,7,8,-1]
IndexedFaceSet390.creaseAngle = 3.14159
IndexedFaceSet390.texCoordIndex = [0,10,1,-1,2,9,17,-1,17,12,2,-1,6,14,11,-1,11,0,6,-1,2,8,7,-1,7,1,2,-1,3,18,19,-1,19,4,3,-1,13,5,20,-1,20,22,13,-1,5,9,10,-1,10,4,5,-1,6,0,1,-1,1,7,6,-1,8,2,12,-1,12,15,8,-1,9,5,13,-1,13,17,9,-1,0,11,16,-1,16,3,0,-1,9,2,1,-1,1,10,9,-1,3,4,10,-1,10,0,3,-1,16,21,18,-1,18,3,16,-1,19,20,5,-1,5,4,19,-1,35,34,33,-1,36,35,33,-1,32,36,33,-1,27,26,25,-1,25,24,27,-1,41,40,39,-1,41,39,45,-1,44,41,45,-1,28,11,29,-1,28,27,24,-1,24,23,28,-1,29,23,31,-1,31,30,29,-1,11,23,24,-1,24,16,11,-1,16,24,25,-1,25,21,16,-1,32,38,37,-1,37,36,32,-1,22,26,27,-1,27,13,22,-1,13,27,28,-1,28,17,13,-1,17,28,29,-1,29,12,17,-1,12,29,30,-1,30,15,12,-1,44,43,42,-1,42,41,44,-1,14,31,23,-1,23,11,14,-1,21,32,33,-1,33,18,21,-1,18,33,34,-1,34,19,18,-1,19,34,35,-1,35,20,19,-1,20,35,36,-1,36,22,20,-1,22,36,37,-1,37,26,22,-1,26,37,38,-1,38,25,26,-1,25,38,32,-1,32,21,25,-1,7,39,40,-1,40,6,7,-1,6,40,41,-1,41,14,6,-1,14,41,42,-1,42,31,14,-1,31,42,43,-1,43,30,31,-1,30,43,44,-1,44,15,30,-1,15,44,45,-1,45,8,15,-1,8,45,39,-1,39,7,8,-1]
Coordinate391 = x3d.Coordinate()

IndexedFaceSet390.coord = Coordinate391
TextureCoordinate392 = x3d.TextureCoordinate()

IndexedFaceSet390.texCoord = TextureCoordinate392

Shape386.geometry = IndexedFaceSet390

HAnimSegment385.children.append(Shape386)
Group393 = x3d.Group()
Group393.DEF = "l_metatarsal_5_Sites"
"""None"""

HAnimSegment385.children.append(Group393)

HAnimJoint384.children.append(HAnimSegment385)
HAnimJoint394 = x3d.HAnimJoint()
HAnimJoint394.name = "l_metatarsophalangeal_5"
HAnimJoint394.DEF = "hanim_l_metatarsophalangeal_5"
HAnimJoint394.center = [0.124065004,0.013671,0.0865575]
HAnimJoint394.ulimit = [0,0,0]
HAnimJoint394.llimit = [0,0,0]
HAnimSegment395 = x3d.HAnimSegment()
HAnimSegment395.name = "l_tarsal_proximal_phalanx_5"
HAnimSegment395.DEF = "hanim_l_tarsal_proximal_phalanx_5"
Shape396 = x3d.Shape()
Shape396.DEF = "l_tarsal_proximal_phalanx_5_Shape"
Appearance397 = x3d.Appearance()
Material398 = x3d.Material()
Material398.USE = "SurfaceDefault"

Appearance397.material = Material398
ImageTexture399 = x3d.ImageTexture()
ImageTexture399.USE = "JinLOA4TextureAtlas"

Appearance397.texture = ImageTexture399

Shape396.appearance = Appearance397
IndexedFaceSet400 = x3d.IndexedFaceSet()
IndexedFaceSet400.coordIndex = [2,10,11,-1,11,3,2,-1,0,12,14,-1,14,5,0,-1,2,6,13,-1,13,10,2,-1,0,3,11,-1,11,12,0,-1,15,16,0,-1,0,5,15,-1,17,1,2,-1,2,3,17,-1,16,17,3,-1,3,0,16,-1,2,1,4,-1,4,6,2,-1,6,4,8,-1,7,9,18,-1,18,15,7,-1,8,4,18,-1,18,9,8,-1,7,15,5,-1,1,17,20,-1,20,19,1,-1,17,16,21,-1,21,20,17,-1,16,15,22,-1,22,21,16,-1,22,15,18,-1,18,23,22,-1,23,18,4,-1,4,24,23,-1,24,4,1,-1,1,19,24,-1,27,26,25,-1,28,27,25,-1,29,28,25,-1,20,21,22,-1,22,23,24,-1,20,22,24,-1,19,20,24,-1,30,33,32,-1,32,31,30,-1,30,36,35,-1,33,30,35,-1,33,35,34,-1,10,25,26,-1,26,11,10,-1,11,26,27,-1,27,12,11,-1,12,27,28,-1,28,14,12,-1,14,28,29,-1,29,13,14,-1,13,29,25,-1,25,10,13,-1,6,30,31,-1,31,13,6,-1,13,31,32,-1,32,14,13,-1,14,32,33,-1,33,5,14,-1,5,33,34,-1,34,7,5,-1,7,34,35,-1,35,9,7,-1,9,35,36,-1,36,8,9,-1,8,36,30,-1,30,6,8,-1]
IndexedFaceSet400.creaseAngle = 3.14159
IndexedFaceSet400.texCoordIndex = [0,23,24,-1,24,1,0,-1,3,25,27,-1,27,2,3,-1,0,4,26,-1,26,23,0,-1,3,1,24,-1,24,25,3,-1,5,6,7,-1,7,8,5,-1,9,10,11,-1,11,12,9,-1,6,13,14,-1,14,7,6,-1,11,10,17,-1,17,15,11,-1,15,17,18,-1,16,19,20,-1,20,5,16,-1,18,17,22,-1,22,21,18,-1,16,5,8,-1,31,30,35,-1,35,34,31,-1,30,29,36,-1,36,35,30,-1,29,28,37,-1,37,36,29,-1,37,28,33,-1,33,38,37,-1,38,33,32,-1,32,39,38,-1,39,32,31,-1,31,34,39,-1,42,41,40,-1,43,42,40,-1,44,43,40,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,34,35,39,-1,45,48,47,-1,47,46,45,-1,45,51,50,-1,48,45,50,-1,48,50,49,-1,23,40,41,-1,41,24,23,-1,24,41,42,-1,42,25,24,-1,25,42,43,-1,43,27,25,-1,27,43,44,-1,44,26,27,-1,26,44,40,-1,40,23,26,-1,4,45,46,-1,46,26,4,-1,26,46,47,-1,47,27,26,-1,27,47,48,-1,48,2,27,-1,8,48,49,-1,49,16,8,-1,16,49,50,-1,50,19,16,-1,21,50,51,-1,51,18,21,-1,18,51,45,-1,45,15,18,-1]
Coordinate401 = x3d.Coordinate()

IndexedFaceSet400.coord = Coordinate401
TextureCoordinate402 = x3d.TextureCoordinate()

IndexedFaceSet400.texCoord = TextureCoordinate402

Shape396.geometry = IndexedFaceSet400

HAnimSegment395.children.append(Shape396)
Group403 = x3d.Group()
Group403.DEF = "l_tarsal_proximal_phalanx_5_Sites"
"""None"""

HAnimSegment395.children.append(Group403)

HAnimJoint394.children.append(HAnimSegment395)
HAnimJoint404 = x3d.HAnimJoint()
HAnimJoint404.name = "l_tarsal_proximal_interphalangeal_5"
HAnimJoint404.DEF = "hanim_l_tarsal_proximal_interphalangeal_5"
HAnimJoint404.center = [0.1263825,0.01085625,0.09414]
HAnimJoint404.ulimit = [0,0,0]
HAnimJoint404.llimit = [0,0,0]
HAnimSegment405 = x3d.HAnimSegment()
HAnimSegment405.name = "l_tarsal_middle_phalanx_5"
HAnimSegment405.DEF = "hanim_l_tarsal_middle_phalanx_5"
Shape406 = x3d.Shape()
Shape406.DEF = "l_tarsal_middle_phalanx_5_Shape"
Appearance407 = x3d.Appearance()
Material408 = x3d.Material()
Material408.USE = "SurfaceDefault"

Appearance407.material = Material408
ImageTexture409 = x3d.ImageTexture()
ImageTexture409.USE = "JinLOA4TextureAtlas"

Appearance407.texture = ImageTexture409

Shape406.appearance = Appearance407
IndexedFaceSet410 = x3d.IndexedFaceSet()
IndexedFaceSet410.coordIndex = [6,7,1,-1,1,0,6,-1,7,8,2,-1,2,1,7,-1,8,9,3,-1,3,2,8,-1,3,9,10,-1,10,4,3,-1,4,10,11,-1,11,5,4,-1,5,11,6,-1,6,0,5,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1,1,18,19,-1,19,0,1,-1,0,19,20,-1,20,5,0,-1,5,20,21,-1,21,4,5,-1,4,21,22,-1,22,3,4,-1,3,22,23,-1,23,2,3,-1,2,23,18,-1,18,1,2,-1]
IndexedFaceSet410.creaseAngle = 3.14159
IndexedFaceSet410.texCoordIndex = [6,7,0,-1,0,1,6,-1,7,8,2,-1,2,0,7,-1,8,9,3,-1,3,2,8,-1,3,9,10,-1,10,4,3,-1,4,10,11,-1,11,5,4,-1,5,11,6,-1,6,1,5,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1,0,18,19,-1,19,1,0,-1,1,19,20,-1,20,5,1,-1,5,20,21,-1,21,4,5,-1,4,21,22,-1,22,3,4,-1,3,22,23,-1,23,2,3,-1,2,23,18,-1,18,0,2,-1]
Coordinate411 = x3d.Coordinate()

IndexedFaceSet410.coord = Coordinate411
TextureCoordinate412 = x3d.TextureCoordinate()

IndexedFaceSet410.texCoord = TextureCoordinate412

Shape406.geometry = IndexedFaceSet410

HAnimSegment405.children.append(Shape406)
Group413 = x3d.Group()
Group413.DEF = "l_tarsal_middle_phalanx_5_Sites"
"""(l_metatarsal_phalanx_5_pt 0.1825 0.0070 0.0928)"""
HAnimSite414 = x3d.HAnimSite()
HAnimSite414.name = "l_metatarsal_phalanx_5_pt"
HAnimSite414.DEF = "hanim_l_metatarsal_phalanx_5_pt"
HAnimSite414.translation = [0.12,0.02,0.04]
TouchSensor415 = x3d.TouchSensor()
TouchSensor415.description = "HAnimSite l_metatarsal_phalanx_5_pt 56"

HAnimSite414.children.append(TouchSensor415)
Shape416 = x3d.Shape()
Shape416.USE = "HAnimSiteShape"

HAnimSite414.children.append(Shape416)

Group413.children.append(HAnimSite414)

HAnimSegment405.children.append(Group413)

HAnimJoint404.children.append(HAnimSegment405)
HAnimJoint417 = x3d.HAnimJoint()
HAnimJoint417.name = "l_tarsal_distal_interphalangeal_5"
HAnimJoint417.DEF = "hanim_l_tarsal_distal_interphalangeal_5"
HAnimJoint417.center = [0.1272825,0.008563501,0.10188]
HAnimJoint417.ulimit = [0,0,0]
HAnimJoint417.llimit = [0,0,0]
HAnimSegment418 = x3d.HAnimSegment()
HAnimSegment418.name = "l_tarsal_distal_phalanx_5"
HAnimSegment418.DEF = "hanim_l_tarsal_distal_phalanx_5"
Shape419 = x3d.Shape()
Shape419.DEF = "l_tarsal_distal_phalanx_5_Shape"
Appearance420 = x3d.Appearance()
Material421 = x3d.Material()
Material421.USE = "SurfaceDefault"

Appearance420.material = Material421
ImageTexture422 = x3d.ImageTexture()
ImageTexture422.USE = "JinLOA4TextureAtlas"

Appearance420.texture = ImageTexture422

Shape419.appearance = Appearance420
IndexedFaceSet423 = x3d.IndexedFaceSet()
IndexedFaceSet423.coordIndex = [2,3,4,-1,4,1,2,-1,0,1,4,-1,4,5,0,-1,7,1,0,-1,0,6,7,-1,2,1,7,-1,7,8,2,-1,9,3,2,-1,2,8,9,-1,10,4,3,-1,3,9,10,-1,5,4,10,-1,10,11,5,-1,0,5,11,-1,11,6,0,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1]
IndexedFaceSet423.creaseAngle = 3.14159
IndexedFaceSet423.texCoordIndex = [1,2,3,-1,3,0,1,-1,5,0,3,-1,3,4,5,-1,9,0,5,-1,5,8,9,-1,1,0,9,-1,9,10,1,-1,12,6,7,-1,7,11,12,-1,14,3,2,-1,2,13,14,-1,4,3,14,-1,14,15,4,-1,5,4,15,-1,15,8,5,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,11,18,19,-1,19,12,11,-1,13,19,20,-1,20,14,13,-1,14,20,21,-1,21,15,14,-1,15,21,16,-1,16,8,15,-1]
Coordinate424 = x3d.Coordinate()

IndexedFaceSet423.coord = Coordinate424
TextureCoordinate425 = x3d.TextureCoordinate()

IndexedFaceSet423.texCoord = TextureCoordinate425

Shape419.geometry = IndexedFaceSet423

HAnimSegment418.children.append(Shape419)
Group426 = x3d.Group()
Group426.DEF = "l_tarsal_distal_phalanx_5_Sites"
"""(l_tarsal_distal_phalanx_5_tip 0.154 0.010 0.168)"""
HAnimSite427 = x3d.HAnimSite()
HAnimSite427.name = "l_tarsal_distal_phalanx_5_tip"
HAnimSite427.DEF = "hanim_l_tarsal_distal_phalanx_5_tip"
HAnimSite427.translation = [0.125,0.016,0.115]
TouchSensor428 = x3d.TouchSensor()
TouchSensor428.description = "HAnimSite l_tarsal_distal_phalanx_5_tip 115"

HAnimSite427.children.append(TouchSensor428)
Shape429 = x3d.Shape()
Shape429.USE = "HAnimSiteShape"

HAnimSite427.children.append(Shape429)

Group426.children.append(HAnimSite427)

HAnimSegment418.children.append(Group426)

HAnimJoint417.children.append(HAnimSegment418)

HAnimJoint404.children.append(HAnimJoint417)

HAnimJoint394.children.append(HAnimJoint404)

HAnimJoint384.children.append(HAnimJoint394)

HAnimJoint331.children.append(HAnimJoint384)

HAnimJoint321.children.append(HAnimJoint331)

HAnimJoint143.children.append(HAnimJoint321)

HAnimJoint124.children.append(HAnimJoint143)

HAnimJoint102.children.append(HAnimJoint124)

HAnimJoint62.children.append(HAnimJoint102)
HAnimJoint430 = x3d.HAnimJoint()
HAnimJoint430.name = "r_hip"
HAnimJoint430.DEF = "hanim_r_hip"
HAnimJoint430.center = [-0.094657496,0.8266501,-0.018348752]
HAnimJoint430.ulimit = [0,0,0]
HAnimJoint430.llimit = [0,0,0]
HAnimSegment431 = x3d.HAnimSegment()
HAnimSegment431.name = "r_thigh"
HAnimSegment431.DEF = "hanim_r_thigh"
Shape432 = x3d.Shape()
Shape432.DEF = "r_thigh_Shape"
Appearance433 = x3d.Appearance()
Material434 = x3d.Material()
Material434.USE = "SurfaceDefault"

Appearance433.material = Material434
ImageTexture435 = x3d.ImageTexture()
ImageTexture435.USE = "JinLOA4TextureAtlas"

Appearance433.texture = ImageTexture435

Shape432.appearance = Appearance433
IndexedFaceSet436 = x3d.IndexedFaceSet()
IndexedFaceSet436.coordIndex = [43,44,45,-1,42,43,45,-1,45,46,47,-1,42,45,47,-1,48,42,47,-1,0,7,8,-1,8,1,0,-1,1,8,9,-1,9,2,1,-1,2,9,10,-1,10,3,2,-1,3,10,11,-1,11,4,3,-1,4,11,12,-1,12,5,4,-1,5,12,13,-1,13,6,5,-1,6,13,7,-1,7,0,6,-1,7,14,15,-1,15,8,7,-1,8,15,16,-1,16,9,8,-1,9,16,17,-1,17,10,9,-1,10,17,18,-1,18,11,10,-1,11,18,19,-1,19,12,11,-1,12,19,20,-1,20,13,12,-1,13,20,14,-1,14,7,13,-1,14,21,22,-1,22,15,14,-1,15,22,23,-1,23,16,15,-1,16,23,24,-1,24,17,16,-1,17,24,25,-1,25,18,17,-1,18,25,26,-1,26,19,18,-1,19,26,27,-1,27,20,19,-1,20,27,21,-1,21,14,20,-1,60,59,58,-1,61,60,58,-1,58,57,56,-1,61,58,56,-1,62,61,56,-1,29,22,21,-1,21,28,29,-1,30,23,22,-1,22,29,30,-1,31,24,23,-1,23,30,31,-1,32,25,24,-1,24,31,32,-1,33,26,25,-1,25,32,33,-1,34,27,26,-1,26,33,34,-1,28,21,27,-1,27,34,28,-1,36,29,28,-1,28,35,36,-1,37,30,29,-1,29,36,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,35,28,34,-1,34,41,35,-1,42,0,1,-1,1,43,42,-1,43,1,2,-1,2,44,43,-1,44,2,3,-1,3,45,44,-1,45,3,4,-1,4,46,45,-1,46,4,5,-1,5,47,46,-1,47,5,6,-1,6,48,47,-1,48,6,0,-1,0,42,48,-1,50,36,35,-1,35,49,50,-1,51,37,36,-1,36,50,51,-1,52,38,37,-1,37,51,52,-1,53,39,38,-1,38,52,53,-1,54,40,39,-1,39,53,54,-1,55,41,40,-1,40,54,55,-1,49,35,41,-1,41,55,49,-1,57,50,49,-1,49,56,57,-1,58,51,50,-1,50,57,58,-1,59,52,51,-1,51,58,59,-1,60,53,52,-1,52,59,60,-1,61,54,53,-1,53,60,61,-1,62,55,54,-1,54,61,62,-1,56,49,55,-1,55,62,56,-1]
IndexedFaceSet436.creaseAngle = 3.14159
IndexedFaceSet436.texCoordIndex = [0,2,3,-1,1,0,3,-1,3,4,5,-1,1,3,5,-1,6,1,5,-1,7,9,8,-1,8,10,7,-1,10,8,11,-1,11,12,10,-1,12,11,13,-1,13,14,12,-1,14,13,15,-1,15,16,14,-1,16,15,17,-1,17,18,16,-1,18,17,19,-1,19,20,18,-1,20,19,9,-1,9,7,20,-1,9,22,21,-1,21,8,9,-1,8,21,23,-1,23,11,8,-1,11,23,24,-1,24,13,11,-1,13,24,25,-1,25,15,13,-1,15,25,26,-1,26,17,15,-1,17,26,27,-1,27,19,17,-1,19,27,22,-1,22,9,19,-1,22,29,28,-1,28,21,22,-1,21,28,30,-1,30,23,21,-1,23,30,31,-1,31,24,23,-1,24,31,32,-1,32,25,24,-1,25,32,33,-1,33,26,25,-1,26,33,34,-1,34,27,26,-1,27,34,29,-1,29,22,27,-1,46,45,44,-1,47,46,44,-1,44,43,42,-1,47,44,42,-1,48,47,42,-1,35,28,29,-1,29,36,35,-1,37,30,28,-1,28,35,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,36,29,34,-1,34,41,36,-1,51,50,49,-1,49,52,51,-1,54,53,50,-1,50,51,54,-1,56,55,53,-1,53,54,56,-1,58,57,55,-1,55,56,58,-1,60,59,57,-1,57,58,60,-1,62,61,59,-1,59,60,62,-1,52,49,61,-1,61,62,52,-1,1,7,10,-1,10,0,1,-1,0,10,12,-1,12,2,0,-1,2,12,14,-1,14,3,2,-1,3,14,16,-1,16,4,3,-1,4,16,18,-1,18,5,4,-1,5,18,20,-1,20,6,5,-1,6,20,7,-1,7,1,6,-1,63,51,52,-1,52,64,63,-1,65,54,51,-1,51,63,65,-1,66,56,54,-1,54,65,66,-1,67,58,56,-1,56,66,67,-1,68,60,58,-1,58,67,68,-1,69,62,60,-1,60,68,69,-1,64,52,62,-1,62,69,64,-1,43,63,64,-1,64,42,43,-1,44,65,63,-1,63,43,44,-1,45,66,65,-1,65,44,45,-1,46,67,66,-1,66,45,46,-1,47,68,67,-1,67,46,47,-1,48,69,68,-1,68,47,48,-1,42,64,69,-1,69,48,42,-1]
Coordinate437 = x3d.Coordinate()

IndexedFaceSet436.coord = Coordinate437
TextureCoordinate438 = x3d.TextureCoordinate()

IndexedFaceSet436.texCoord = TextureCoordinate438

Shape432.geometry = IndexedFaceSet436

HAnimSegment431.children.append(Shape432)
Group439 = x3d.Group()
Group439.DEF = "r_thigh_Sites"
"""(r_knee_crease_pt -0.0825 0.4932 -0.0326) (r_femoral_medial_epicondyles_pt -0.0221 0.5014 0.0289) (r_femoral_lateral_epicondyles_pt -0.1421 0.4992 0.0310) (r_suprapatella_pt x y z)"""
HAnimSite440 = x3d.HAnimSite()
HAnimSite440.name = "r_knee_crease_pt"
HAnimSite440.DEF = "hanim_r_knee_crease_pt"
HAnimSite440.translation = [-0.09,0.41,-0.056]
TouchSensor441 = x3d.TouchSensor()
TouchSensor441.description = "HAnimSite r_knee_crease_pt 91"

HAnimSite440.children.append(TouchSensor441)
Shape442 = x3d.Shape()
Shape442.USE = "HAnimSiteShape"

HAnimSite440.children.append(Shape442)

Group439.children.append(HAnimSite440)
HAnimSite443 = x3d.HAnimSite()
HAnimSite443.name = "r_femoral_medial_epicondyles_pt"
HAnimSite443.DEF = "hanim_r_femoral_medial_epicondyles_pt"
HAnimSite443.translation = [-0.039,0.41,-0.01]
TouchSensor444 = x3d.TouchSensor()
TouchSensor444.description = "HAnimSite r_femoral_medial_epicondyles_pt 43"

HAnimSite443.children.append(TouchSensor444)
Shape445 = x3d.Shape()
Shape445.USE = "HAnimSiteShape"

HAnimSite443.children.append(Shape445)

Group439.children.append(HAnimSite443)
HAnimSite446 = x3d.HAnimSite()
HAnimSite446.name = "r_femoral_lateral_epicondyles_pt"
HAnimSite446.DEF = "hanim_r_femoral_lateral_epicondyles_pt"
HAnimSite446.translation = [-0.127,0.41,-0.01]
TouchSensor447 = x3d.TouchSensor()
TouchSensor447.description = "HAnimSite r_femoral_lateral_epicondyles_pt 44"

HAnimSite446.children.append(TouchSensor447)
Shape448 = x3d.Shape()
Shape448.USE = "HAnimSiteShape"

HAnimSite446.children.append(Shape448)

Group439.children.append(HAnimSite446)
HAnimSite449 = x3d.HAnimSite()
HAnimSite449.name = "r_suprapatella_pt"
HAnimSite449.DEF = "hanim_r_suprapatella_pt"
HAnimSite449.translation = [-0.085,0.41,0.042]
TouchSensor450 = x3d.TouchSensor()
TouchSensor450.description = "HAnimSite r_suprapatella_pt 45"

HAnimSite449.children.append(TouchSensor450)
Shape451 = x3d.Shape()
Shape451.USE = "HAnimSiteShape"

HAnimSite449.children.append(Shape451)

Group439.children.append(HAnimSite449)

HAnimSegment431.children.append(Group439)

HAnimJoint430.children.append(HAnimSegment431)
HAnimJoint452 = x3d.HAnimJoint()
HAnimJoint452.name = "r_knee"
HAnimJoint452.DEF = "hanim_r_knee"
HAnimJoint452.center = [-0.09261001,0.408825,-0.01943775]
HAnimJoint452.ulimit = [0,0,0]
HAnimJoint452.llimit = [0,0,0]
HAnimSegment453 = x3d.HAnimSegment()
HAnimSegment453.name = "r_calf"
HAnimSegment453.DEF = "hanim_r_calf"
Shape454 = x3d.Shape()
Shape454.DEF = "r_calf_Shape"
Appearance455 = x3d.Appearance()
Material456 = x3d.Material()
Material456.USE = "SurfaceDefault"

Appearance455.material = Material456
ImageTexture457 = x3d.ImageTexture()
ImageTexture457.USE = "JinLOA4TextureAtlas"

Appearance455.texture = ImageTexture457

Shape454.appearance = Appearance455
IndexedFaceSet458 = x3d.IndexedFaceSet()
IndexedFaceSet458.coordIndex = [0,1,2,-1,2,3,4,-1,2,4,5,-1,0,2,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1]
IndexedFaceSet458.creaseAngle = 3.14159
IndexedFaceSet458.texCoordIndex = [0,1,2,-1,2,3,4,-1,2,4,5,-1,0,2,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1]
Coordinate459 = x3d.Coordinate()

IndexedFaceSet458.coord = Coordinate459
TextureCoordinate460 = x3d.TextureCoordinate()

IndexedFaceSet458.texCoord = TextureCoordinate460

Shape454.geometry = IndexedFaceSet458

HAnimSegment453.children.append(Shape454)
Group461 = x3d.Group()
Group461.DEF = "r_calf_Sites"
"""(r_tibiale_pt x y z) (r_medial_malleolus_pt -0.0591 0.0760 -0.0928) (r_lateral_malleolus_pt -0.1006 0.0658 -0.1075)"""
HAnimSite462 = x3d.HAnimSite()
HAnimSite462.name = "r_tibiale_pt"
HAnimSite462.DEF = "hanim_r_tibiale_pt"
HAnimSite462.translation = [-0.09,0.31,0.038]
TouchSensor463 = x3d.TouchSensor()
TouchSensor463.description = "HAnimSite r_tibiale_pt 51"

HAnimSite462.children.append(TouchSensor463)
Shape464 = x3d.Shape()
Shape464.USE = "HAnimSiteShape"

HAnimSite462.children.append(Shape464)

Group461.children.append(HAnimSite462)
HAnimSite465 = x3d.HAnimSite()
HAnimSite465.name = "r_medial_malleolus_pt"
HAnimSite465.DEF = "hanim_r_medial_malleolus_pt"
HAnimSite465.translation = [-0.061,0.095,-0.02]
TouchSensor466 = x3d.TouchSensor()
TouchSensor466.description = "HAnimSite r_medial_malleolus_pt 52"

HAnimSite465.children.append(TouchSensor466)
Shape467 = x3d.Shape()
Shape467.USE = "HAnimSiteShape"

HAnimSite465.children.append(Shape467)

Group461.children.append(HAnimSite465)
HAnimSite468 = x3d.HAnimSite()
HAnimSite468.name = "r_lateral_malleolus_pt"
HAnimSite468.DEF = "hanim_r_lateral_malleolus_pt"
HAnimSite468.translation = [-0.12,0.095,-0.02]
TouchSensor469 = x3d.TouchSensor()
TouchSensor469.description = "HAnimSite r_lateral_malleolus_pt 53"

HAnimSite468.children.append(TouchSensor469)
Shape470 = x3d.Shape()
Shape470.USE = "HAnimSiteShape"

HAnimSite468.children.append(Shape470)

Group461.children.append(HAnimSite468)

HAnimSegment453.children.append(Group461)

HAnimJoint452.children.append(HAnimSegment453)
HAnimJoint471 = x3d.HAnimJoint()
HAnimJoint471.name = "r_talocrural"
HAnimJoint471.DEF = "hanim_r_talocrural"
HAnimJoint471.center = [-0.088447504,0.09544501,-0.010451251]
HAnimJoint471.ulimit = [0,0,0]
HAnimJoint471.llimit = [0,0,0]
HAnimSegment472 = x3d.HAnimSegment()
HAnimSegment472.name = "r_talus"
HAnimSegment472.DEF = "hanim_r_talus"
Shape473 = x3d.Shape()
Shape473.DEF = "r_talus_Shape"
Appearance474 = x3d.Appearance()
Material475 = x3d.Material()
Material475.USE = "SurfaceDefault"

Appearance474.material = Material475
ImageTexture476 = x3d.ImageTexture()
ImageTexture476.USE = "JinLOA4TextureAtlas"

Appearance474.texture = ImageTexture476

Shape473.appearance = Appearance474
IndexedFaceSet477 = x3d.IndexedFaceSet()
IndexedFaceSet477.coordIndex = [13,15,21,-1,21,34,13,-1,9,34,21,-1,21,20,9,-1,0,15,14,-1,14,2,0,-1,30,33,16,-1,16,3,30,-1,3,16,25,-1,25,4,3,-1,22,17,18,-1,18,5,22,-1,5,18,29,-1,29,6,5,-1,6,19,27,-1,7,20,21,-1,21,1,7,-1,1,21,15,-1,15,0,1,-1,15,13,32,-1,32,14,15,-1,33,11,12,-1,12,16,33,-1,25,16,12,-1,12,23,25,-1,17,24,10,-1,10,18,17,-1,18,10,28,-1,28,29,18,-1,19,8,26,-1,26,27,19,-1,4,25,17,-1,17,22,4,-1,25,23,24,-1,24,17,25,-1,20,27,26,-1,26,9,20,-1,6,27,20,-1,20,7,6,-1,29,28,8,-1,8,19,29,-1,6,29,19,-1,1,0,31,-1,0,2,31,-1,31,30,3,-1,3,4,31,-1,4,22,31,-1,22,5,31,-1,5,6,31,-1,6,7,31,-1,7,1,31,-1,2,30,31,-1,14,33,30,-1,30,2,14,-1,32,11,33,-1,33,14,32,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,39,43,45,-1,45,46,35,-1,39,45,35,-1,37,39,35,-1,36,37,35,-1,26,8,36,-1,36,35,26,-1,8,28,37,-1,37,36,8,-1,28,10,38,-1,38,37,28,-1,10,24,39,-1,39,38,10,-1,24,23,40,-1,40,39,24,-1,23,12,41,-1,41,40,23,-1,12,11,42,-1,42,41,12,-1,11,32,43,-1,43,42,11,-1,32,13,44,-1,44,43,32,-1,13,34,45,-1,45,44,13,-1,34,9,46,-1,46,45,34,-1,9,26,35,-1,35,46,9,-1]
IndexedFaceSet477.creaseAngle = 3.14159
IndexedFaceSet477.texCoordIndex = [5,12,27,-1,27,34,5,-1,7,34,27,-1,27,28,7,-1,9,12,11,-1,11,10,9,-1,30,33,14,-1,14,13,30,-1,13,14,16,-1,16,15,13,-1,17,20,19,-1,19,18,17,-1,18,19,22,-1,22,21,18,-1,21,24,23,-1,25,28,27,-1,27,26,25,-1,26,27,12,-1,12,9,26,-1,12,5,32,-1,32,11,12,-1,33,3,4,-1,4,14,33,-1,16,14,4,-1,4,8,16,-1,20,6,2,-1,2,19,20,-1,19,2,29,-1,29,22,19,-1,24,0,1,-1,1,23,24,-1,15,16,20,-1,20,17,15,-1,16,8,6,-1,6,20,16,-1,28,23,1,-1,1,7,28,-1,21,23,28,-1,28,25,21,-1,22,29,0,-1,0,24,22,-1,21,22,24,-1,26,9,31,-1,9,10,31,-1,31,30,13,-1,13,15,31,-1,15,17,31,-1,17,18,31,-1,18,21,31,-1,21,25,31,-1,25,26,31,-1,10,30,31,-1,11,33,30,-1,30,10,11,-1,32,3,33,-1,33,11,32,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,39,43,45,-1,45,46,35,-1,39,45,35,-1,37,39,35,-1,36,37,35,-1,1,0,36,-1,36,35,1,-1,0,29,37,-1,37,36,0,-1,29,2,38,-1,38,37,29,-1,2,6,39,-1,39,38,2,-1,6,8,40,-1,40,39,6,-1,8,4,41,-1,41,40,8,-1,4,3,42,-1,42,41,4,-1,3,32,43,-1,43,42,3,-1,32,5,44,-1,44,43,32,-1,5,34,45,-1,45,44,5,-1,34,7,46,-1,46,45,34,-1,7,1,35,-1,35,46,7,-1]
Coordinate478 = x3d.Coordinate()

IndexedFaceSet477.coord = Coordinate478
TextureCoordinate479 = x3d.TextureCoordinate()

IndexedFaceSet477.texCoord = TextureCoordinate479

Shape473.geometry = IndexedFaceSet477

HAnimSegment472.children.append(Shape473)
Group480 = x3d.Group()
Group480.DEF = "r_talus_Sites"
"""(r_sphyrion_pt -0.0603 0.0610 -0.1002) (r_calcaneus_posterior_pt -0.0692 0.0297 -0.1221)"""
HAnimSite481 = x3d.HAnimSite()
HAnimSite481.name = "r_sphyrion_pt"
HAnimSite481.DEF = "hanim_r_sphyrion_pt"
HAnimSite481.translation = [-0.054,0.065,-0.02]
TouchSensor482 = x3d.TouchSensor()
TouchSensor482.description = "HAnimSite r_sphyrion_pt 54"

HAnimSite481.children.append(TouchSensor482)
Shape483 = x3d.Shape()
Shape483.USE = "HAnimSiteShape"

HAnimSite481.children.append(Shape483)

Group480.children.append(HAnimSite481)
HAnimSite484 = x3d.HAnimSite()
HAnimSite484.name = "r_calcaneus_posterior_pt"
HAnimSite484.DEF = "hanim_r_calcaneus_posterior_pt"
HAnimSite484.translation = [-0.09,0.03,-0.06]
TouchSensor485 = x3d.TouchSensor()
TouchSensor485.description = "HAnimSite r_calcaneus_posterior_pt 62"

HAnimSite484.children.append(TouchSensor485)
Shape486 = x3d.Shape()
Shape486.USE = "HAnimSiteShape"

HAnimSite484.children.append(Shape486)

Group480.children.append(HAnimSite484)

HAnimSegment472.children.append(Group480)

HAnimJoint471.children.append(HAnimSegment472)
HAnimJoint487 = x3d.HAnimJoint()
HAnimJoint487.name = "r_talocalcaneonavicular"
HAnimJoint487.DEF = "hanim_r_talocalcaneonavicular"
HAnimJoint487.center = [-0.07794,0.036900003,0.0048645]
HAnimJoint487.ulimit = [0,0,0]
HAnimJoint487.llimit = [0,0,0]
HAnimSegment488 = x3d.HAnimSegment()
HAnimSegment488.name = "r_navicular"
HAnimSegment488.DEF = "hanim_r_navicular"
Shape489 = x3d.Shape()
Shape489.DEF = "r_navicular_Shape"
Appearance490 = x3d.Appearance()
Material491 = x3d.Material()
Material491.USE = "SurfaceDefault"

Appearance490.material = Material491
ImageTexture492 = x3d.ImageTexture()
ImageTexture492.USE = "JinLOA4TextureAtlas"

Appearance490.texture = ImageTexture492

Shape489.appearance = Appearance490
IndexedFaceSet493 = x3d.IndexedFaceSet()
IndexedFaceSet493.coordIndex = [7,6,11,-1,11,12,7,-1,1,17,18,-1,18,2,1,-1,12,10,5,-1,5,7,12,-1,2,11,6,-1,5,10,13,-1,13,0,5,-1,1,3,14,-1,14,17,1,-1,11,2,18,-1,4,15,16,-1,16,8,4,-1,8,16,9,-1,3,9,16,-1,16,14,3,-1,26,27,28,-1,28,19,20,-1,20,21,22,-1,22,23,24,-1,20,22,24,-1,28,20,24,-1,26,28,24,-1,25,26,24,-1,38,39,42,-1,42,43,38,-1,37,29,30,-1,30,31,32,-1,37,30,32,-1,32,33,34,-1,37,32,34,-1,37,34,35,-1,37,35,36,-1,1,2,20,-1,20,19,1,-1,2,6,21,-1,21,20,2,-1,6,7,22,-1,22,21,6,-1,7,5,23,-1,23,22,7,-1,5,0,24,-1,24,23,5,-1,38,43,44,-1,44,45,38,-1,4,8,26,-1,26,25,4,-1,8,9,27,-1,27,26,8,-1,9,3,28,-1,28,27,9,-1,3,1,19,-1,19,28,3,-1,10,12,30,-1,30,29,10,-1,12,11,31,-1,31,30,12,-1,11,18,32,-1,32,31,11,-1,18,17,33,-1,33,32,18,-1,17,14,34,-1,34,33,17,-1,14,16,35,-1,35,34,14,-1,16,15,36,-1,36,35,16,-1,42,39,40,-1,40,41,42,-1,13,10,29,-1,29,37,13,-1,0,13,39,-1,39,38,0,-1,13,37,40,-1,40,39,13,-1,37,36,41,-1,41,40,37,-1,36,15,42,-1,42,41,36,-1,15,4,43,-1,43,42,15,-1,4,25,44,-1,44,43,4,-1,25,24,45,-1,45,44,25,-1,24,0,38,-1,38,45,24,-1]
IndexedFaceSet493.creaseAngle = 3.14159
IndexedFaceSet493.texCoordIndex = [7,6,11,-1,11,12,7,-1,1,17,18,-1,18,2,1,-1,12,10,5,-1,5,7,12,-1,2,11,6,-1,5,10,13,-1,13,0,5,-1,1,3,14,-1,14,17,1,-1,11,2,18,-1,4,15,16,-1,16,8,4,-1,8,16,9,-1,3,9,16,-1,16,14,3,-1,26,27,28,-1,28,19,20,-1,20,21,22,-1,22,23,24,-1,20,22,24,-1,28,20,24,-1,26,28,24,-1,25,26,24,-1,38,39,42,-1,42,43,38,-1,37,29,30,-1,30,31,32,-1,37,30,32,-1,32,33,34,-1,37,32,34,-1,37,34,35,-1,37,35,36,-1,1,2,20,-1,20,19,1,-1,2,6,21,-1,21,20,2,-1,6,7,22,-1,22,21,6,-1,7,5,23,-1,23,22,7,-1,5,0,24,-1,24,23,5,-1,38,43,44,-1,44,45,38,-1,4,8,26,-1,26,25,4,-1,8,9,27,-1,27,26,8,-1,9,3,28,-1,28,27,9,-1,3,1,19,-1,19,28,3,-1,10,12,30,-1,30,29,10,-1,12,11,31,-1,31,30,12,-1,11,18,32,-1,32,31,11,-1,18,17,33,-1,33,32,18,-1,17,14,34,-1,34,33,17,-1,14,16,35,-1,35,34,14,-1,16,15,36,-1,36,35,16,-1,42,39,40,-1,40,41,42,-1,13,10,29,-1,29,37,13,-1,0,13,39,-1,39,38,0,-1,13,37,40,-1,40,39,13,-1,37,36,41,-1,41,40,37,-1,36,15,42,-1,42,41,36,-1,15,4,43,-1,43,42,15,-1,4,25,44,-1,44,43,4,-1,25,24,45,-1,45,44,25,-1,24,0,38,-1,38,45,24,-1]
Coordinate494 = x3d.Coordinate()

IndexedFaceSet493.coord = Coordinate494
TextureCoordinate495 = x3d.TextureCoordinate()

IndexedFaceSet493.texCoord = TextureCoordinate495

Shape489.geometry = IndexedFaceSet493

HAnimSegment488.children.append(Shape489)
Group496 = x3d.Group()
Group496.DEF = "r_navicular_Sites"
"""None"""

HAnimSegment488.children.append(Group496)

HAnimJoint487.children.append(HAnimSegment488)
HAnimJoint497 = x3d.HAnimJoint()
HAnimJoint497.name = "r_cuneonavicular_1"
HAnimJoint497.DEF = "hanim_r_cuneonavicular_1"
HAnimJoint497.center = [-0.0669825,0.032107502,0.018391501]
HAnimJoint497.ulimit = [0,0,0]
HAnimJoint497.llimit = [0,0,0]
HAnimSegment498 = x3d.HAnimSegment()
HAnimSegment498.name = "r_cuneiform_1"
HAnimSegment498.DEF = "hanim_r_cuneiform_1"
Shape499 = x3d.Shape()
Shape499.DEF = "r_cuneiform_1_Shape"
Appearance500 = x3d.Appearance()
Material501 = x3d.Material()
Material501.USE = "SurfaceDefault"

Appearance500.material = Material501
ImageTexture502 = x3d.ImageTexture()
ImageTexture502.USE = "JinLOA4TextureAtlas"

Appearance500.texture = ImageTexture502

Shape499.appearance = Appearance500
IndexedFaceSet503 = x3d.IndexedFaceSet()
IndexedFaceSet503.coordIndex = [0,4,12,-1,1,7,6,-1,6,0,1,-1,10,1,0,-1,0,12,10,-1,1,10,11,-1,11,2,1,-1,8,5,2,-1,2,3,8,-1,11,13,2,-1,12,4,15,-1,9,4,0,-1,0,6,9,-1,1,2,5,-1,5,7,1,-1,3,2,13,-1,13,14,3,-1,22,23,24,-1,22,24,25,-1,28,22,25,-1,13,11,10,-1,10,12,15,-1,13,10,15,-1,14,13,15,-1,16,17,18,-1,18,19,16,-1,21,16,19,-1,19,20,21,-1,3,14,17,-1,17,16,3,-1,14,15,18,-1,18,17,14,-1,15,4,19,-1,19,18,15,-1,4,9,20,-1,20,19,4,-1,28,25,26,-1,26,27,28,-1,8,3,16,-1,16,21,8,-1,6,7,23,-1,23,22,6,-1,7,5,24,-1,24,23,7,-1,5,8,25,-1,25,24,5,-1,8,21,26,-1,26,25,8,-1,21,20,27,-1,27,26,21,-1,20,9,28,-1,28,27,20,-1,9,6,22,-1,22,28,9,-1]
IndexedFaceSet503.creaseAngle = 3.14159
IndexedFaceSet503.texCoordIndex = [0,1,12,-1,2,7,6,-1,6,0,2,-1,10,2,0,-1,0,12,10,-1,2,10,11,-1,11,3,2,-1,8,5,3,-1,3,4,8,-1,11,13,3,-1,12,1,15,-1,9,1,0,-1,0,6,9,-1,2,3,5,-1,5,7,2,-1,4,3,13,-1,13,14,4,-1,22,23,24,-1,22,24,25,-1,28,22,25,-1,13,11,10,-1,10,12,15,-1,13,10,15,-1,14,13,15,-1,16,17,18,-1,18,19,16,-1,21,16,19,-1,19,20,21,-1,4,14,17,-1,17,16,4,-1,14,15,18,-1,18,17,14,-1,15,1,19,-1,19,18,15,-1,1,9,20,-1,20,19,1,-1,28,25,26,-1,26,27,28,-1,8,4,16,-1,16,21,8,-1,6,7,23,-1,23,22,6,-1,7,5,24,-1,24,23,7,-1,5,8,25,-1,25,24,5,-1,8,21,26,-1,26,25,8,-1,21,20,27,-1,27,26,21,-1,20,9,28,-1,28,27,20,-1,9,6,22,-1,22,28,9,-1]
Coordinate504 = x3d.Coordinate()

IndexedFaceSet503.coord = Coordinate504
TextureCoordinate505 = x3d.TextureCoordinate()

IndexedFaceSet503.texCoord = TextureCoordinate505

Shape499.geometry = IndexedFaceSet503

HAnimSegment498.children.append(Shape499)
Group506 = x3d.Group()
Group506.DEF = "r_cuneiform_1_Sites"
"""None"""

HAnimSegment498.children.append(Group506)

HAnimJoint497.children.append(HAnimSegment498)
HAnimJoint507 = x3d.HAnimJoint()
HAnimJoint507.name = "r_tarsometatarsal_1"
HAnimJoint507.DEF = "hanim_r_tarsometatarsal_1"
HAnimJoint507.center = [-0.06426,0.023242502,0.04419]
HAnimJoint507.ulimit = [0,0,0]
HAnimJoint507.llimit = [0,0,0]
HAnimSegment508 = x3d.HAnimSegment()
HAnimSegment508.name = "r_metatarsal_1"
HAnimSegment508.DEF = "hanim_r_metatarsal_1"
Shape509 = x3d.Shape()
Shape509.DEF = "r_metatarsal_1_Shape"
Appearance510 = x3d.Appearance()
Material511 = x3d.Material()
Material511.USE = "SurfaceDefault"

Appearance510.material = Material511
ImageTexture512 = x3d.ImageTexture()
ImageTexture512.USE = "JinLOA4TextureAtlas"

Appearance510.texture = ImageTexture512

Shape509.appearance = Appearance510
IndexedFaceSet513 = x3d.IndexedFaceSet()
IndexedFaceSet513.coordIndex = [0,14,11,-1,5,0,2,-1,2,7,5,-1,1,2,9,-1,9,10,1,-1,15,23,20,-1,20,8,15,-1,3,21,19,-1,19,4,3,-1,13,18,10,-1,10,4,13,-1,12,16,6,-1,6,1,12,-1,6,7,2,-1,2,1,6,-1,5,17,14,-1,14,0,5,-1,10,9,3,-1,3,4,10,-1,9,2,0,-1,0,11,9,-1,10,18,12,-1,12,1,10,-1,8,3,9,-1,9,11,8,-1,8,11,14,-1,14,15,8,-1,21,3,8,-1,8,20,21,-1,13,4,19,-1,19,22,13,-1,34,35,36,-1,34,36,39,-1,34,39,33,-1,40,41,42,-1,46,40,42,-1,45,46,42,-1,31,32,29,-1,29,30,31,-1,32,24,29,-1,24,25,28,-1,28,29,24,-1,25,26,27,-1,27,28,25,-1,18,13,25,-1,25,24,18,-1,13,22,26,-1,26,25,13,-1,45,42,43,-1,43,44,45,-1,23,15,28,-1,28,27,23,-1,15,14,29,-1,29,28,15,-1,14,17,30,-1,30,29,14,-1,39,36,37,-1,37,38,39,-1,16,12,32,-1,32,31,16,-1,12,18,24,-1,24,32,12,-1,5,7,34,-1,34,33,5,-1,7,6,35,-1,35,34,7,-1,6,16,36,-1,36,35,6,-1,16,31,37,-1,37,36,16,-1,31,30,38,-1,38,37,31,-1,30,17,39,-1,39,38,30,-1,17,5,33,-1,33,39,17,-1,21,20,41,-1,41,40,21,-1,20,23,42,-1,42,41,20,-1,23,27,43,-1,43,42,23,-1,27,26,44,-1,44,43,27,-1,26,22,45,-1,45,44,26,-1,22,19,46,-1,46,45,22,-1,19,21,40,-1,40,46,19,-1]
IndexedFaceSet513.creaseAngle = 3.14159
IndexedFaceSet513.texCoordIndex = [1,14,11,-1,5,1,2,-1,2,7,5,-1,3,2,9,-1,9,10,3,-1,15,23,20,-1,20,8,15,-1,0,21,19,-1,19,4,0,-1,13,18,10,-1,10,4,13,-1,12,16,6,-1,6,3,12,-1,6,7,2,-1,2,3,6,-1,5,17,14,-1,14,1,5,-1,10,9,0,-1,0,4,10,-1,9,2,1,-1,1,11,9,-1,10,18,12,-1,12,3,10,-1,8,0,9,-1,9,11,8,-1,8,11,14,-1,14,15,8,-1,21,0,8,-1,8,20,21,-1,13,4,19,-1,19,22,13,-1,34,35,36,-1,34,36,39,-1,34,39,33,-1,40,41,42,-1,46,40,42,-1,45,46,42,-1,31,32,29,-1,29,30,31,-1,32,24,14,-1,24,25,28,-1,28,29,24,-1,25,26,27,-1,27,28,25,-1,18,13,25,-1,25,24,18,-1,13,22,26,-1,26,25,13,-1,45,42,43,-1,43,44,45,-1,23,15,28,-1,28,27,23,-1,15,14,29,-1,29,28,15,-1,14,17,30,-1,30,29,14,-1,39,36,37,-1,37,38,39,-1,16,12,32,-1,32,31,16,-1,12,18,24,-1,24,32,12,-1,5,7,34,-1,34,33,5,-1,7,6,35,-1,35,34,7,-1,6,16,36,-1,36,35,6,-1,16,31,37,-1,37,36,16,-1,31,30,38,-1,38,37,31,-1,30,17,39,-1,39,38,30,-1,17,5,33,-1,33,39,17,-1,21,20,41,-1,41,40,21,-1,20,23,42,-1,42,41,20,-1,23,27,43,-1,43,42,23,-1,27,26,44,-1,44,43,27,-1,26,22,45,-1,45,44,26,-1,22,19,46,-1,46,45,22,-1,19,21,40,-1,40,46,19,-1]
Coordinate514 = x3d.Coordinate()

IndexedFaceSet513.coord = Coordinate514
TextureCoordinate515 = x3d.TextureCoordinate()

IndexedFaceSet513.texCoord = TextureCoordinate515

Shape509.geometry = IndexedFaceSet513

HAnimSegment508.children.append(Shape509)
Group516 = x3d.Group()
Group516.DEF = "r_metatarsal_1_Sites"
"""None"""

HAnimSegment508.children.append(Group516)

HAnimJoint507.children.append(HAnimSegment508)
HAnimJoint517 = x3d.HAnimJoint()
HAnimJoint517.name = "r_metatarsophalangeal_1"
HAnimJoint517.DEF = "hanim_r_metatarsophalangeal_1"
HAnimJoint517.center = [-0.0617625,0.014424751,0.0936225]
HAnimJoint517.ulimit = [0,0,0]
HAnimJoint517.llimit = [0,0,0]
HAnimSegment518 = x3d.HAnimSegment()
HAnimSegment518.name = "r_tarsal_proximal_phalanx_1"
HAnimSegment518.DEF = "hanim_r_tarsal_proximal_phalanx_1"
Shape519 = x3d.Shape()
Shape519.DEF = "r_tarsal_proximal_phalanx_1_Shape"
Appearance520 = x3d.Appearance()
Material521 = x3d.Material()
Material521.USE = "SurfaceDefault"

Appearance520.material = Material521
ImageTexture522 = x3d.ImageTexture()
ImageTexture522.USE = "JinLOA4TextureAtlas"

Appearance520.texture = ImageTexture522

Shape519.appearance = Appearance520
IndexedFaceSet523 = x3d.IndexedFaceSet()
IndexedFaceSet523.coordIndex = [9,10,17,-1,17,16,9,-1,11,1,2,-1,2,8,11,-1,7,8,2,-1,2,3,7,-1,7,3,4,-1,4,13,7,-1,12,13,4,-1,4,5,12,-1,5,6,0,-1,0,12,5,-1,0,6,1,-1,1,11,0,-1,14,20,19,-1,19,15,14,-1,14,15,17,-1,17,10,14,-1,9,16,18,-1,18,21,9,-1,7,10,9,-1,9,8,7,-1,8,9,21,-1,21,11,8,-1,12,20,14,-1,14,13,12,-1,13,14,10,-1,10,7,13,-1,11,21,22,-1,0,24,23,-1,23,12,0,-1,11,22,24,-1,24,0,11,-1,23,20,12,-1,39,40,41,-1,41,42,37,-1,39,41,37,-1,38,39,37,-1,33,34,35,-1,32,33,35,-1,31,32,35,-1,28,29,25,-1,25,26,27,-1,28,25,27,-1,35,36,30,-1,30,31,35,-1,17,15,26,-1,26,25,17,-1,15,19,27,-1,27,26,15,-1,19,18,28,-1,28,27,19,-1,18,16,29,-1,29,28,18,-1,16,17,25,-1,25,29,16,-1,19,20,31,-1,31,30,19,-1,20,23,32,-1,32,31,20,-1,23,24,33,-1,33,32,23,-1,24,22,34,-1,34,33,24,-1,22,21,35,-1,35,34,22,-1,21,18,36,-1,36,35,21,-1,18,19,30,-1,30,36,18,-1,2,1,38,-1,38,37,2,-1,1,6,39,-1,39,38,1,-1,6,5,40,-1,40,39,6,-1,5,4,41,-1,41,40,5,-1,4,3,42,-1,42,41,4,-1,3,2,37,-1,37,42,3,-1]
IndexedFaceSet523.creaseAngle = 3.14159
IndexedFaceSet523.texCoordIndex = [2,1,29,-1,29,28,2,-1,11,5,4,-1,4,13,11,-1,10,13,4,-1,4,6,10,-1,10,6,7,-1,7,12,10,-1,14,12,7,-1,7,8,14,-1,8,9,3,-1,3,14,8,-1,3,9,5,-1,5,11,3,-1,0,33,31,-1,31,27,0,-1,0,27,29,-1,29,1,0,-1,2,28,30,-1,30,35,2,-1,15,18,17,-1,17,16,15,-1,16,17,34,-1,34,19,16,-1,20,32,22,-1,22,21,20,-1,21,22,24,-1,24,23,21,-1,19,34,36,-1,25,39,37,-1,37,20,25,-1,19,36,38,-1,38,26,19,-1,37,32,20,-1,54,55,56,-1,56,57,52,-1,54,56,52,-1,53,54,52,-1,48,49,50,-1,47,48,50,-1,46,47,50,-1,43,44,40,-1,40,41,42,-1,43,40,42,-1,50,51,45,-1,45,46,50,-1,29,27,41,-1,41,40,29,-1,27,31,42,-1,42,41,27,-1,31,30,43,-1,43,42,31,-1,30,28,44,-1,44,43,30,-1,28,29,40,-1,40,44,28,-1,31,33,46,-1,46,45,31,-1,32,37,47,-1,47,46,32,-1,37,39,48,-1,48,47,37,-1,38,36,49,-1,49,48,38,-1,36,34,50,-1,50,49,36,-1,35,30,51,-1,51,50,35,-1,30,31,45,-1,45,51,30,-1,4,5,53,-1,53,52,4,-1,5,9,54,-1,54,53,5,-1,9,8,55,-1,55,54,9,-1,8,7,56,-1,56,55,8,-1,7,6,57,-1,57,56,7,-1,6,4,52,-1,52,57,6,-1]
Coordinate524 = x3d.Coordinate()

IndexedFaceSet523.coord = Coordinate524
TextureCoordinate525 = x3d.TextureCoordinate()

IndexedFaceSet523.texCoord = TextureCoordinate525

Shape519.geometry = IndexedFaceSet523

HAnimSegment518.children.append(Shape519)
Group526 = x3d.Group()
Group526.DEF = "r_tarsal_proximal_phalanx_1_Sites"
"""(r_metatarsal_phalanx_1_pt 0.0816 0.0232 0.0106)"""
HAnimSite527 = x3d.HAnimSite()
HAnimSite527.name = "r_metatarsal_phalanx_1_pt"
HAnimSite527.DEF = "hanim_r_metatarsal_phalanx_1_pt"
HAnimSite527.translation = [-0.062,0.012,0.1]
TouchSensor528 = x3d.TouchSensor()
TouchSensor528.description = "HAnimSite r_metatarsal_phalanx_1_pt 59"

HAnimSite527.children.append(TouchSensor528)
Shape529 = x3d.Shape()
Shape529.USE = "HAnimSiteShape"

HAnimSite527.children.append(Shape529)

Group526.children.append(HAnimSite527)

HAnimSegment518.children.append(Group526)

HAnimJoint517.children.append(HAnimSegment518)
HAnimJoint530 = x3d.HAnimJoint()
HAnimJoint530.name = "r_tarsal_interphalangeal_1"
HAnimJoint530.DEF = "hanim_r_tarsal_interphalangeal_1"
HAnimJoint530.center = [-0.06174,0.0121365,0.1153125]
HAnimJoint530.ulimit = [0,0,0]
HAnimJoint530.llimit = [0,0,0]
HAnimSegment531 = x3d.HAnimSegment()
HAnimSegment531.name = "r_tarsal_distal_phalanx_1"
HAnimSegment531.DEF = "hanim_r_tarsal_distal_phalanx_1"
Shape532 = x3d.Shape()
Shape532.DEF = "r_tarsal_distal_phalanx_1_Shape"
Appearance533 = x3d.Appearance()
Material534 = x3d.Material()
Material534.USE = "SurfaceDefault"

Appearance533.material = Material534
ImageTexture535 = x3d.ImageTexture()
ImageTexture535.USE = "JinLOA4TextureAtlas"

Appearance533.texture = ImageTexture535

Shape532.appearance = Appearance533
IndexedFaceSet536 = x3d.IndexedFaceSet()
IndexedFaceSet536.coordIndex = [3,2,5,-1,5,4,3,-1,1,0,5,-1,5,2,1,-1,1,7,6,-1,6,0,1,-1,8,7,1,-1,1,2,8,-1,3,9,8,-1,8,2,3,-1,10,9,3,-1,3,4,10,-1,11,10,4,-1,4,5,11,-1,0,6,11,-1,11,5,0,-1,7,13,12,-1,12,6,7,-1,14,13,7,-1,7,8,14,-1,9,15,14,-1,14,8,9,-1,16,15,9,-1,9,10,16,-1,17,16,10,-1,10,11,17,-1,6,12,17,-1,17,11,6,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,12,13,19,-1,19,18,12,-1,13,14,20,-1,20,19,13,-1,14,15,21,-1,21,20,14,-1,15,16,22,-1,22,21,15,-1,16,17,23,-1,23,22,16,-1,17,12,18,-1,18,23,17,-1]
IndexedFaceSet536.creaseAngle = 3.14159
IndexedFaceSet536.texCoordIndex = [0,3,2,-1,2,1,0,-1,5,4,2,-1,2,3,5,-1,13,12,15,-1,15,14,13,-1,8,6,5,-1,5,3,8,-1,0,9,8,-1,8,3,0,-1,10,9,0,-1,0,1,10,-1,11,10,1,-1,1,2,11,-1,4,7,11,-1,11,2,4,-1,12,18,16,-1,16,15,12,-1,20,19,6,-1,6,8,20,-1,9,21,20,-1,20,8,9,-1,22,21,9,-1,9,10,22,-1,23,22,10,-1,10,11,23,-1,7,17,23,-1,23,11,7,-1,26,27,28,-1,28,29,24,-1,26,28,24,-1,25,26,24,-1,16,18,25,-1,25,24,16,-1,19,20,26,-1,26,25,19,-1,20,21,27,-1,27,26,20,-1,21,22,28,-1,28,27,21,-1,22,23,29,-1,29,28,22,-1,23,17,24,-1,24,29,23,-1]
Coordinate537 = x3d.Coordinate()

IndexedFaceSet536.coord = Coordinate537
TextureCoordinate538 = x3d.TextureCoordinate()

IndexedFaceSet536.texCoord = TextureCoordinate538

Shape532.geometry = IndexedFaceSet536

HAnimSegment531.children.append(Shape532)
Group539 = x3d.Group()
Group539.DEF = "r_tarsal_distal_phalanx_1_Sites"
"""(r_tarsal_distal_phalanx_1_tip -0.1043 -0.0227 0.1450)"""
HAnimSite540 = x3d.HAnimSite()
HAnimSite540.name = "r_tarsal_distal_phalanx_1_tip"
HAnimSite540.DEF = "hanim_r_tarsal_distal_phalanx_1_tip"
HAnimSite540.translation = [-0.06,0.012,0.14]
TouchSensor541 = x3d.TouchSensor()
TouchSensor541.description = "HAnimSite r_tarsal_distal_phalanx_1_tip 116"

HAnimSite540.children.append(TouchSensor541)
Shape542 = x3d.Shape()
Shape542.USE = "HAnimSiteShape"

HAnimSite540.children.append(Shape542)

Group539.children.append(HAnimSite540)

HAnimSegment531.children.append(Group539)

HAnimJoint530.children.append(HAnimSegment531)

HAnimJoint517.children.append(HAnimJoint530)

HAnimJoint507.children.append(HAnimJoint517)

HAnimJoint497.children.append(HAnimJoint507)

HAnimJoint487.children.append(HAnimJoint497)
HAnimJoint543 = x3d.HAnimJoint()
HAnimJoint543.name = "r_cuneonavicular_2"
HAnimJoint543.DEF = "hanim_r_cuneonavicular_2"
HAnimJoint543.center = [-0.081045,0.033525,0.02142675]
HAnimJoint543.ulimit = [0,0,0]
HAnimJoint543.llimit = [0,0,0]
HAnimSegment544 = x3d.HAnimSegment()
HAnimSegment544.name = "r_cuneiform_2"
HAnimSegment544.DEF = "hanim_r_cuneiform_2"
Shape545 = x3d.Shape()
Shape545.DEF = "r_cuneiform_2_Shape"
Appearance546 = x3d.Appearance()
Material547 = x3d.Material()
Material547.USE = "SurfaceDefault"

Appearance546.material = Material547
ImageTexture548 = x3d.ImageTexture()
ImageTexture548.USE = "JinLOA4TextureAtlas"

Appearance546.texture = ImageTexture548

Shape545.appearance = Appearance546
IndexedFaceSet549 = x3d.IndexedFaceSet()
IndexedFaceSet549.coordIndex = [1,4,9,-1,9,8,1,-1,5,7,2,-1,2,0,5,-1,4,1,3,-1,3,6,4,-1,10,11,5,-1,5,0,10,-1,32,33,36,-1,36,37,32,-1,24,25,28,-1,28,29,24,-1,19,20,21,-1,19,21,22,-1,19,22,23,-1,19,23,18,-1,13,14,15,-1,13,15,16,-1,13,16,17,-1,13,17,12,-1,9,4,13,-1,13,12,9,-1,4,6,14,-1,14,13,4,-1,24,29,30,-1,30,31,24,-1,7,5,16,-1,16,15,7,-1,5,11,17,-1,17,16,5,-1,36,33,34,-1,34,35,36,-1,3,1,19,-1,19,18,3,-1,1,8,20,-1,20,19,1,-1,32,37,38,-1,38,39,32,-1,10,0,22,-1,22,21,10,-1,0,2,23,-1,23,22,0,-1,28,25,26,-1,26,27,28,-1,6,3,25,-1,25,24,6,-1,3,18,26,-1,26,25,3,-1,18,23,27,-1,27,26,18,-1,23,2,28,-1,28,27,23,-1,2,7,29,-1,29,28,2,-1,7,15,30,-1,30,29,7,-1,15,14,31,-1,31,30,15,-1,14,6,24,-1,24,31,14,-1,8,9,33,-1,33,32,8,-1,9,12,34,-1,34,33,9,-1,12,17,35,-1,35,34,12,-1,17,11,36,-1,36,35,17,-1,11,10,37,-1,37,36,11,-1,10,21,38,-1,38,37,10,-1,21,20,39,-1,39,38,21,-1,20,8,32,-1,32,39,20,-1]
IndexedFaceSet549.creaseAngle = 3.14159
IndexedFaceSet549.texCoordIndex = [0,4,9,-1,9,8,0,-1,5,7,2,-1,2,1,5,-1,4,0,3,-1,3,6,4,-1,10,11,5,-1,5,1,10,-1,32,33,36,-1,36,37,32,-1,24,25,28,-1,28,29,24,-1,19,20,21,-1,19,21,22,-1,19,22,23,-1,19,23,18,-1,13,14,15,-1,13,15,16,-1,13,16,17,-1,13,17,12,-1,9,4,13,-1,13,12,9,-1,4,6,14,-1,14,13,4,-1,24,29,30,-1,30,31,24,-1,7,5,16,-1,16,15,7,-1,5,11,17,-1,17,16,5,-1,36,33,34,-1,34,35,36,-1,3,0,19,-1,19,18,3,-1,0,8,20,-1,20,19,0,-1,32,37,38,-1,38,39,32,-1,10,1,22,-1,22,21,10,-1,1,2,23,-1,23,22,1,-1,28,25,26,-1,26,27,28,-1,6,3,25,-1,25,24,6,-1,3,18,26,-1,26,25,3,-1,18,23,27,-1,27,26,18,-1,23,2,28,-1,28,27,23,-1,2,7,29,-1,29,28,2,-1,7,15,30,-1,30,29,7,-1,15,14,31,-1,31,30,15,-1,14,6,24,-1,24,31,14,-1,8,9,33,-1,33,32,8,-1,9,12,34,-1,34,33,9,-1,12,17,35,-1,35,34,12,-1,17,11,36,-1,36,35,17,-1,11,10,37,-1,37,36,11,-1,10,21,38,-1,38,37,10,-1,21,20,39,-1,39,38,21,-1,20,8,32,-1,32,39,20,-1]
Coordinate550 = x3d.Coordinate()

IndexedFaceSet549.coord = Coordinate550
TextureCoordinate551 = x3d.TextureCoordinate()

IndexedFaceSet549.texCoord = TextureCoordinate551

Shape545.geometry = IndexedFaceSet549

HAnimSegment544.children.append(Shape545)
Group552 = x3d.Group()
Group552.DEF = "r_cuneiform_2_Sites"
"""None"""

HAnimSegment544.children.append(Group552)

HAnimJoint543.children.append(HAnimSegment544)
HAnimJoint553 = x3d.HAnimJoint()
HAnimJoint553.name = "r_tarsometatarsal_2"
HAnimJoint553.DEF = "hanim_r_tarsometatarsal_2"
HAnimJoint553.center = [-0.079830006,0.0261,0.041062504]
HAnimJoint553.ulimit = [0,0,0]
HAnimJoint553.llimit = [0,0,0]
HAnimSegment554 = x3d.HAnimSegment()
HAnimSegment554.name = "r_metatarsal_2"
HAnimSegment554.DEF = "hanim_r_metatarsal_2"
Shape555 = x3d.Shape()
Shape555.DEF = "r_metatarsal_2_Shape"
Appearance556 = x3d.Appearance()
Material557 = x3d.Material()
Material557.USE = "SurfaceDefault"

Appearance556.material = Material557
ImageTexture558 = x3d.ImageTexture()
ImageTexture558.USE = "JinLOA4TextureAtlas"

Appearance556.texture = ImageTexture558

Shape555.appearance = Appearance556
IndexedFaceSet559 = x3d.IndexedFaceSet()
IndexedFaceSet559.coordIndex = [12,4,7,-1,7,15,12,-1,0,2,9,-1,9,8,0,-1,1,3,11,-1,11,10,1,-1,5,6,2,-1,2,0,5,-1,8,9,3,-1,3,1,8,-1,14,4,12,-1,12,13,14,-1,18,14,13,-1,13,17,18,-1,42,43,38,-1,38,39,42,-1,46,47,50,-1,50,51,46,-1,29,30,34,-1,34,35,29,-1,19,20,25,-1,25,26,19,-1,28,19,26,-1,26,27,28,-1,21,22,23,-1,23,24,21,-1,37,29,35,-1,35,36,37,-1,30,31,34,-1,20,21,24,-1,24,25,20,-1,31,32,33,-1,33,34,31,-1,3,9,20,-1,20,19,3,-1,9,2,21,-1,21,20,9,-1,2,6,22,-1,22,21,2,-1,42,39,40,-1,40,41,42,-1,7,4,24,-1,24,23,7,-1,4,16,25,-1,25,24,4,-1,16,14,26,-1,26,25,16,-1,14,18,27,-1,27,26,14,-1,50,47,48,-1,48,49,50,-1,11,3,19,-1,19,28,11,-1,0,8,30,-1,30,29,0,-1,8,1,31,-1,31,30,8,-1,1,10,32,-1,32,31,1,-1,46,51,52,-1,52,53,46,-1,17,13,34,-1,34,33,17,-1,13,12,35,-1,35,34,13,-1,12,15,36,-1,36,35,12,-1,38,43,44,-1,44,45,38,-1,5,0,29,-1,29,37,5,-1,15,7,39,-1,39,38,15,-1,7,23,40,-1,40,39,7,-1,23,22,41,-1,41,40,23,-1,22,6,42,-1,42,41,22,-1,6,5,43,-1,43,42,6,-1,5,37,44,-1,44,43,5,-1,37,36,45,-1,45,44,37,-1,36,15,38,-1,38,45,36,-1,10,11,47,-1,47,46,10,-1,11,28,48,-1,48,47,11,-1,28,27,49,-1,49,48,28,-1,27,18,50,-1,50,49,27,-1,18,17,51,-1,51,50,18,-1,17,33,52,-1,52,51,17,-1,33,32,53,-1,53,52,33,-1,32,10,46,-1,46,53,32,-1]
IndexedFaceSet559.creaseAngle = 3.14159
IndexedFaceSet559.texCoordIndex = [1,0,10,-1,10,7,1,-1,2,3,12,-1,12,11,2,-1,5,6,16,-1,16,15,5,-1,8,9,3,-1,3,2,8,-1,11,12,6,-1,6,5,11,-1,4,0,1,-1,1,13,4,-1,17,4,13,-1,13,14,17,-1,45,46,41,-1,41,42,45,-1,49,50,53,-1,53,54,49,-1,32,33,37,-1,37,38,32,-1,22,23,28,-1,28,29,22,-1,31,22,29,-1,29,30,31,-1,24,25,26,-1,26,27,24,-1,40,32,38,-1,38,39,40,-1,33,34,21,-1,23,24,27,-1,27,28,23,-1,34,35,36,-1,36,37,34,-1,6,12,23,-1,23,22,6,-1,12,3,24,-1,24,23,12,-1,3,9,25,-1,25,24,3,-1,45,42,43,-1,43,44,45,-1,10,0,27,-1,27,26,10,-1,20,18,28,-1,28,27,20,-1,18,19,29,-1,29,28,18,-1,4,17,30,-1,30,29,4,-1,53,50,51,-1,51,52,53,-1,16,6,22,-1,22,31,16,-1,2,11,33,-1,33,32,2,-1,11,5,34,-1,34,33,11,-1,5,15,35,-1,35,34,5,-1,49,54,55,-1,55,56,49,-1,14,13,37,-1,37,36,14,-1,13,1,38,-1,38,37,13,-1,1,7,39,-1,39,38,1,-1,41,46,47,-1,47,48,41,-1,8,2,32,-1,32,40,8,-1,7,10,42,-1,42,41,7,-1,10,26,43,-1,43,42,10,-1,26,25,44,-1,44,43,26,-1,25,9,45,-1,45,44,25,-1,9,8,46,-1,46,45,9,-1,8,40,47,-1,47,46,8,-1,40,39,48,-1,48,47,40,-1,39,7,41,-1,41,48,39,-1,15,16,50,-1,50,49,15,-1,16,31,51,-1,51,50,16,-1,31,30,52,-1,52,51,31,-1,30,17,53,-1,53,52,30,-1,17,14,54,-1,54,53,17,-1,14,36,55,-1,55,54,14,-1,36,35,56,-1,56,55,36,-1,35,15,49,-1,49,56,35,-1]
Coordinate560 = x3d.Coordinate()

IndexedFaceSet559.coord = Coordinate560
TextureCoordinate561 = x3d.TextureCoordinate()

IndexedFaceSet559.texCoord = TextureCoordinate561

Shape555.geometry = IndexedFaceSet559

HAnimSegment554.children.append(Shape555)
Group562 = x3d.Group()
Group562.DEF = "r_metatarsal_2_Sites"
"""None"""

HAnimSegment554.children.append(Group562)

HAnimJoint553.children.append(HAnimSegment554)
HAnimJoint563 = x3d.HAnimJoint()
HAnimJoint563.name = "r_metatarsophalangeal_2"
HAnimJoint563.DEF = "hanim_r_metatarsophalangeal_2"
HAnimJoint563.center = [-0.0821475,0.014976,0.097830005]
HAnimJoint563.ulimit = [0,0,0]
HAnimJoint563.llimit = [0,0,0]
HAnimSegment564 = x3d.HAnimSegment()
HAnimSegment564.name = "r_tarsal_proximal_phalanx_2"
HAnimSegment564.DEF = "hanim_r_tarsal_proximal_phalanx_2"
Shape565 = x3d.Shape()
Shape565.DEF = "r_tarsal_proximal_phalanx_2_Shape"
Appearance566 = x3d.Appearance()
Material567 = x3d.Material()
Material567.USE = "SurfaceDefault"

Appearance566.material = Material567
ImageTexture568 = x3d.ImageTexture()
ImageTexture568.USE = "JinLOA4TextureAtlas"

Appearance566.texture = ImageTexture568

Shape565.appearance = Appearance566
IndexedFaceSet569 = x3d.IndexedFaceSet()
IndexedFaceSet569.coordIndex = [8,18,20,-1,20,6,8,-1,14,21,19,-1,19,11,14,-1,6,20,1,-1,19,15,11,-1,0,14,3,-1,3,2,0,-1,12,17,16,-1,16,8,12,-1,15,17,12,-1,12,11,15,-1,6,1,2,-1,2,3,6,-1,0,21,14,-1,16,18,8,-1,3,4,5,-1,5,6,3,-1,6,5,7,-1,7,8,6,-1,10,11,12,-1,12,9,10,-1,14,11,10,-1,10,13,14,-1,13,4,3,-1,3,14,13,-1,8,7,9,-1,9,12,8,-1,19,21,24,-1,24,23,19,-1,22,25,20,-1,20,18,22,-1,36,30,31,-1,35,36,31,-1,34,35,31,-1,13,10,9,-1,9,7,5,-1,13,9,5,-1,4,13,5,-1,29,26,27,-1,27,28,29,-1,37,41,42,-1,42,43,37,-1,31,32,33,-1,33,34,31,-1,39,40,41,-1,38,39,41,-1,37,38,41,-1,25,22,27,-1,27,26,25,-1,22,23,28,-1,28,27,22,-1,23,24,29,-1,29,28,23,-1,24,25,26,-1,26,29,24,-1,15,19,31,-1,31,30,15,-1,19,23,32,-1,32,31,19,-1,23,22,33,-1,33,32,23,-1,22,18,34,-1,34,33,22,-1,18,16,35,-1,35,34,18,-1,16,17,36,-1,36,35,16,-1,17,15,30,-1,30,36,17,-1,21,0,38,-1,38,37,21,-1,0,2,39,-1,39,38,0,-1,2,1,40,-1,40,39,2,-1,1,20,41,-1,41,40,1,-1,20,25,42,-1,42,41,20,-1,25,24,43,-1,43,42,25,-1,24,21,37,-1,37,43,24,-1]
IndexedFaceSet569.creaseAngle = 3.14159
IndexedFaceSet569.texCoordIndex = [1,24,30,-1,30,0,1,-1,3,31,25,-1,25,2,3,-1,0,30,4,-1,25,26,2,-1,9,3,5,-1,5,10,9,-1,7,28,27,-1,27,1,7,-1,26,29,8,-1,8,2,26,-1,0,4,11,-1,11,6,0,-1,9,31,3,-1,27,24,1,-1,12,13,14,-1,14,15,12,-1,15,14,16,-1,16,17,15,-1,19,20,21,-1,21,18,19,-1,23,20,19,-1,19,22,23,-1,22,13,12,-1,12,23,22,-1,17,16,18,-1,18,21,17,-1,35,34,38,-1,38,37,35,-1,36,39,33,-1,33,32,36,-1,50,44,45,-1,49,50,45,-1,48,49,45,-1,22,19,18,-1,18,16,14,-1,22,18,14,-1,13,22,14,-1,43,40,41,-1,41,42,43,-1,51,55,56,-1,56,57,51,-1,45,46,47,-1,47,48,45,-1,53,54,55,-1,52,53,55,-1,51,52,55,-1,39,36,41,-1,41,40,39,-1,36,37,42,-1,42,41,36,-1,37,38,43,-1,43,42,37,-1,38,39,40,-1,40,43,38,-1,26,25,45,-1,45,44,26,-1,35,37,46,-1,46,45,35,-1,37,36,47,-1,47,46,37,-1,36,32,48,-1,48,47,36,-1,24,27,49,-1,49,48,24,-1,27,28,50,-1,50,49,27,-1,29,26,44,-1,44,50,29,-1,31,9,52,-1,52,51,31,-1,9,10,53,-1,53,52,9,-1,11,4,54,-1,54,53,11,-1,4,30,55,-1,55,54,4,-1,33,39,56,-1,56,55,33,-1,39,38,57,-1,57,56,39,-1,38,34,51,-1,51,57,38,-1]
Coordinate570 = x3d.Coordinate()

IndexedFaceSet569.coord = Coordinate570
TextureCoordinate571 = x3d.TextureCoordinate()

IndexedFaceSet569.texCoord = TextureCoordinate571

Shape565.geometry = IndexedFaceSet569

HAnimSegment564.children.append(Shape565)
Group572 = x3d.Group()
Group572.DEF = "r_tarsal_proximal_phalanx_2_Sites"
"""None"""

HAnimSegment564.children.append(Group572)

HAnimJoint563.children.append(HAnimSegment564)
HAnimJoint573 = x3d.HAnimJoint()
HAnimJoint573.name = "r_tarsal_proximal_interphalangeal_2"
HAnimJoint573.DEF = "hanim_r_tarsal_proximal_interphalangeal_2"
HAnimJoint573.center = [-0.083925,0.012647251,0.1140075]
HAnimJoint573.ulimit = [0,0,0]
HAnimJoint573.llimit = [0,0,0]
HAnimSegment574 = x3d.HAnimSegment()
HAnimSegment574.name = "r_tarsal_middle_phalanx_2"
HAnimSegment574.DEF = "hanim_r_tarsal_middle_phalanx_2"
Shape575 = x3d.Shape()
Shape575.DEF = "r_tarsal_middle_phalanx_2_Shape"
Appearance576 = x3d.Appearance()
Material577 = x3d.Material()
Material577.USE = "SurfaceDefault"

Appearance576.material = Material577
ImageTexture578 = x3d.ImageTexture()
ImageTexture578.USE = "JinLOA4TextureAtlas"

Appearance576.texture = ImageTexture578

Shape575.appearance = Appearance576
IndexedFaceSet579 = x3d.IndexedFaceSet()
IndexedFaceSet579.coordIndex = [0,7,6,-1,6,1,0,-1,2,8,7,-1,7,0,2,-1,9,8,2,-1,2,3,9,-1,4,10,9,-1,9,3,4,-1,11,10,4,-1,4,5,11,-1,6,11,5,-1,5,1,6,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,0,1,19,-1,19,18,0,-1,1,5,20,-1,20,19,1,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,18,-1,18,23,2,-1]
IndexedFaceSet579.creaseAngle = 3.14159
IndexedFaceSet579.texCoordIndex = [0,9,8,-1,8,1,0,-1,2,10,9,-1,9,0,2,-1,11,10,2,-1,2,3,11,-1,4,13,11,-1,11,3,4,-1,14,12,6,-1,6,5,14,-1,8,15,7,-1,7,1,8,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,13,20,-1,20,19,11,-1,12,14,21,-1,21,20,12,-1,15,8,16,-1,16,21,15,-1,24,25,26,-1,26,27,22,-1,24,26,22,-1,23,24,22,-1,0,1,23,-1,23,22,0,-1,1,7,24,-1,24,23,1,-1,5,6,25,-1,25,24,5,-1,4,3,26,-1,26,25,4,-1,3,2,27,-1,27,26,3,-1,2,0,22,-1,22,27,2,-1]
Coordinate580 = x3d.Coordinate()

IndexedFaceSet579.coord = Coordinate580
TextureCoordinate581 = x3d.TextureCoordinate()

IndexedFaceSet579.texCoord = TextureCoordinate581

Shape575.geometry = IndexedFaceSet579

HAnimSegment574.children.append(Shape575)
Group582 = x3d.Group()
Group582.DEF = "r_tarsal_middle_phalanx_2_Sites"
"""None"""

HAnimSegment574.children.append(Group582)

HAnimJoint573.children.append(HAnimSegment574)
HAnimJoint583 = x3d.HAnimJoint()
HAnimJoint583.name = "r_tarsal_distal_interphalangeal_2"
HAnimJoint583.DEF = "hanim_r_tarsal_distal_interphalangeal_2"
HAnimJoint583.center = [-0.083925,0.00982575,0.123435006]
HAnimJoint583.ulimit = [0,0,0]
HAnimJoint583.llimit = [0,0,0]
HAnimSegment584 = x3d.HAnimSegment()
HAnimSegment584.name = "r_tarsal_distal_phalanx_2"
HAnimSegment584.DEF = "hanim_r_tarsal_distal_phalanx_2"
Shape585 = x3d.Shape()
Shape585.DEF = "r_tarsal_distal_phalanx_2_Shape"
Appearance586 = x3d.Appearance()
Material587 = x3d.Material()
Material587.USE = "SurfaceDefault"

Appearance586.material = Material587
ImageTexture588 = x3d.ImageTexture()
ImageTexture588.USE = "JinLOA4TextureAtlas"

Appearance586.texture = ImageTexture588

Shape585.appearance = Appearance586
IndexedFaceSet589 = x3d.IndexedFaceSet()
IndexedFaceSet589.coordIndex = [0,1,2,-1,2,3,0,-1,5,4,2,-1,2,1,5,-1,0,6,7,-1,7,1,0,-1,3,8,6,-1,6,0,3,-1,9,8,3,-1,3,2,9,-1,4,10,9,-1,9,2,4,-1,11,10,4,-1,4,5,11,-1,7,11,5,-1,5,1,7,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,7,6,13,-1,13,12,7,-1,6,8,14,-1,14,13,6,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,7,12,-1,12,17,11,-1]
IndexedFaceSet589.creaseAngle = 3.14159
IndexedFaceSet589.texCoordIndex = [0,1,2,-1,2,3,0,-1,5,4,2,-1,2,1,5,-1,0,8,9,-1,9,1,0,-1,3,10,8,-1,8,0,3,-1,11,10,3,-1,3,2,11,-1,4,12,11,-1,11,2,4,-1,14,13,6,-1,6,7,14,-1,9,15,5,-1,5,1,9,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,9,8,17,-1,17,16,9,-1,8,10,18,-1,18,17,8,-1,10,11,19,-1,19,18,10,-1,11,12,20,-1,20,19,11,-1,13,14,21,-1,21,20,13,-1,15,9,16,-1,16,21,15,-1]
Coordinate590 = x3d.Coordinate()

IndexedFaceSet589.coord = Coordinate590
TextureCoordinate591 = x3d.TextureCoordinate()

IndexedFaceSet589.texCoord = TextureCoordinate591

Shape585.geometry = IndexedFaceSet589

HAnimSegment584.children.append(Shape585)
Group592 = x3d.Group()
Group592.DEF = "r_tarsal_distal_phalanx_2_Sites"
"""(r_tarsal_distal_phalanx_2_tip -0.110 0.011 0.19)"""
HAnimSite593 = x3d.HAnimSite()
HAnimSite593.name = "r_tarsal_distal_phalanx_2_tip"
HAnimSite593.DEF = "hanim_r_tarsal_distal_phalanx_2_tip"
HAnimSite593.translation = [-0.08,0.016,0.14]
TouchSensor594 = x3d.TouchSensor()
TouchSensor594.description = "HAnimSite r_tarsal_distal_phalanx_2_tip 117"

HAnimSite593.children.append(TouchSensor594)
Shape595 = x3d.Shape()
Shape595.USE = "HAnimSiteShape"

HAnimSite593.children.append(Shape595)

Group592.children.append(HAnimSite593)

HAnimSegment584.children.append(Group592)

HAnimJoint583.children.append(HAnimSegment584)

HAnimJoint573.children.append(HAnimJoint583)

HAnimJoint563.children.append(HAnimJoint573)

HAnimJoint553.children.append(HAnimJoint563)

HAnimJoint543.children.append(HAnimJoint553)

HAnimJoint487.children.append(HAnimJoint543)
HAnimJoint596 = x3d.HAnimJoint()
HAnimJoint596.name = "r_cuneonavicular_3"
HAnimJoint596.DEF = "hanim_r_cuneonavicular_3"
HAnimJoint596.center = [-0.09261001,0.03339,0.019818]
HAnimJoint596.ulimit = [0,0,0]
HAnimJoint596.llimit = [0,0,0]
HAnimSegment597 = x3d.HAnimSegment()
HAnimSegment597.name = "r_cuneiform_3"
HAnimSegment597.DEF = "hanim_r_cuneiform_3"
Shape598 = x3d.Shape()
Shape598.DEF = "r_cuneiform_3_Shape"
Appearance599 = x3d.Appearance()
Material600 = x3d.Material()
Material600.USE = "SurfaceDefault"

Appearance599.material = Material600
ImageTexture601 = x3d.ImageTexture()
ImageTexture601.USE = "JinLOA4TextureAtlas"

Appearance599.texture = ImageTexture601

Shape598.appearance = Appearance599
IndexedFaceSet602 = x3d.IndexedFaceSet()
IndexedFaceSet602.coordIndex = [4,0,6,-1,6,3,4,-1,4,3,8,-1,5,1,7,-1,7,2,5,-1,2,7,9,-1,4,8,9,-1,9,7,4,-1,20,21,24,-1,24,25,20,-1,12,13,10,-1,10,11,12,-1,18,19,14,-1,14,17,18,-1,15,16,17,-1,17,14,15,-1,0,4,11,-1,11,10,0,-1,4,7,12,-1,12,11,4,-1,7,1,13,-1,13,12,7,-1,24,21,22,-1,22,23,24,-1,3,6,15,-1,15,14,3,-1,20,25,26,-1,26,27,20,-1,5,2,17,-1,17,16,5,-1,2,9,18,-1,18,17,2,-1,9,8,19,-1,19,18,9,-1,8,3,14,-1,14,19,8,-1,6,0,21,-1,21,20,6,-1,0,10,22,-1,22,21,0,-1,10,13,23,-1,23,22,10,-1,13,1,24,-1,24,23,13,-1,1,5,25,-1,25,24,1,-1,5,16,26,-1,26,25,5,-1,16,15,27,-1,27,26,16,-1,15,6,20,-1,20,27,15,-1]
IndexedFaceSet602.creaseAngle = 3.14159
IndexedFaceSet602.texCoordIndex = [4,0,6,-1,6,3,4,-1,4,3,8,-1,5,1,7,-1,7,2,5,-1,2,7,9,-1,4,8,10,-1,10,11,4,-1,22,23,26,-1,26,27,22,-1,14,15,12,-1,12,13,14,-1,20,21,16,-1,16,19,20,-1,17,18,19,-1,19,16,17,-1,0,4,13,-1,13,12,0,-1,4,11,14,-1,14,13,4,-1,7,1,15,-1,15,14,7,-1,26,23,24,-1,24,25,26,-1,3,6,17,-1,17,16,3,-1,22,27,28,-1,28,29,22,-1,5,2,19,-1,19,18,5,-1,2,9,20,-1,20,19,2,-1,10,8,21,-1,21,20,10,-1,8,3,16,-1,16,21,8,-1,6,0,23,-1,23,22,6,-1,0,12,24,-1,24,23,0,-1,12,15,25,-1,25,24,12,-1,15,1,26,-1,26,25,15,-1,1,5,27,-1,27,26,1,-1,5,18,28,-1,28,27,5,-1,18,17,29,-1,29,28,18,-1,17,6,22,-1,22,29,17,-1]
Coordinate603 = x3d.Coordinate()

IndexedFaceSet602.coord = Coordinate603
TextureCoordinate604 = x3d.TextureCoordinate()

IndexedFaceSet602.texCoord = TextureCoordinate604

Shape598.geometry = IndexedFaceSet602

HAnimSegment597.children.append(Shape598)
Group605 = x3d.Group()
Group605.DEF = "r_cuneiform_3_Sites"
"""None"""

HAnimSegment597.children.append(Group605)

HAnimJoint596.children.append(HAnimSegment597)
HAnimJoint606 = x3d.HAnimJoint()
HAnimJoint606.name = "r_tarsometatarsal_3"
HAnimJoint606.DEF = "hanim_r_tarsometatarsal_3"
HAnimJoint606.center = [-0.09423001,0.0261,0.039397504]
HAnimJoint606.ulimit = [0,0,0]
HAnimJoint606.llimit = [0,0,0]
HAnimSegment607 = x3d.HAnimSegment()
HAnimSegment607.name = "r_metatarsal_3"
HAnimSegment607.DEF = "hanim_r_metatarsal_3"
Shape608 = x3d.Shape()
Shape608.DEF = "r_metatarsal_3_Shape"
Appearance609 = x3d.Appearance()
Material610 = x3d.Material()
Material610.USE = "SurfaceDefault"

Appearance609.material = Material610
ImageTexture611 = x3d.ImageTexture()
ImageTexture611.USE = "JinLOA4TextureAtlas"

Appearance609.texture = ImageTexture611

Shape608.appearance = Appearance609
IndexedFaceSet612 = x3d.IndexedFaceSet()
IndexedFaceSet612.coordIndex = [15,12,13,-1,13,3,15,-1,10,7,0,-1,0,2,10,-1,9,1,14,-1,14,6,9,-1,3,13,7,-1,7,10,3,-1,12,15,5,-1,5,16,12,-1,6,8,17,-1,17,9,6,-1,17,8,11,-1,11,4,17,-1,27,28,31,-1,34,35,32,-1,32,33,34,-1,28,29,30,-1,30,31,28,-1,35,27,31,-1,31,32,35,-1,23,24,20,-1,22,23,20,-1,20,21,22,-1,25,26,18,-1,18,19,25,-1,24,25,19,-1,19,20,24,-1,1,9,19,-1,19,18,1,-1,9,17,20,-1,20,19,9,-1,17,4,21,-1,21,20,17,-1,48,45,46,-1,46,47,48,-1,5,15,23,-1,23,22,5,-1,15,3,24,-1,24,23,15,-1,3,10,25,-1,25,24,3,-1,10,2,26,-1,26,25,10,-1,40,37,38,-1,38,39,40,-1,13,12,28,-1,28,27,13,-1,12,16,29,-1,29,28,12,-1,44,49,50,-1,50,51,44,-1,11,8,31,-1,31,30,11,-1,8,6,32,-1,32,31,8,-1,6,14,33,-1,33,32,6,-1,36,41,42,-1,42,43,36,-1,0,7,35,-1,35,34,0,-1,7,13,27,-1,27,35,7,-1,37,40,41,-1,41,36,37,-1,48,49,44,-1,44,45,48,-1,14,1,37,-1,37,36,14,-1,1,18,38,-1,38,37,1,-1,18,26,39,-1,39,38,18,-1,26,2,40,-1,40,39,26,-1,2,0,41,-1,41,40,2,-1,0,34,42,-1,42,41,0,-1,34,33,43,-1,43,42,34,-1,33,14,36,-1,36,43,33,-1,16,5,45,-1,45,44,16,-1,5,22,46,-1,46,45,5,-1,22,21,47,-1,47,46,22,-1,21,4,48,-1,48,47,21,-1,4,11,49,-1,49,48,4,-1,11,30,50,-1,50,49,11,-1,30,29,51,-1,51,50,30,-1,29,16,44,-1,44,51,29,-1]
IndexedFaceSet612.creaseAngle = 3.14159
IndexedFaceSet612.texCoordIndex = [25,7,16,-1,16,3,25,-1,12,9,0,-1,0,2,12,-1,22,1,20,-1,20,18,22,-1,13,17,19,-1,19,23,13,-1,15,24,5,-1,5,26,15,-1,8,21,28,-1,28,11,8,-1,14,10,6,-1,6,4,14,-1,43,45,27,-1,54,55,51,-1,51,53,54,-1,46,47,48,-1,48,50,46,-1,56,44,49,-1,49,52,56,-1,36,38,28,-1,35,37,33,-1,33,34,35,-1,40,42,29,-1,29,30,40,-1,39,41,31,-1,31,32,39,-1,1,22,30,-1,30,29,1,-1,11,28,32,-1,32,31,11,-1,14,4,34,-1,34,33,14,-1,70,67,68,-1,68,69,70,-1,5,24,37,-1,37,35,5,-1,25,3,38,-1,38,36,25,-1,13,23,41,-1,41,39,13,-1,12,2,42,-1,42,40,12,-1,62,58,60,-1,60,61,62,-1,16,7,45,-1,45,43,16,-1,15,26,47,-1,47,46,15,-1,66,71,73,-1,73,74,66,-1,6,10,50,-1,50,48,6,-1,21,8,52,-1,52,49,21,-1,18,20,53,-1,53,51,18,-1,57,63,64,-1,64,65,57,-1,0,9,55,-1,55,54,0,-1,19,17,44,-1,44,56,19,-1,59,62,63,-1,63,57,59,-1,70,72,66,-1,66,67,70,-1,20,1,59,-1,59,57,20,-1,1,29,60,-1,60,58,1,-1,29,42,61,-1,61,60,29,-1,42,2,62,-1,62,61,42,-1,2,0,63,-1,63,62,2,-1,0,54,64,-1,64,63,0,-1,54,53,65,-1,65,64,54,-1,53,20,57,-1,57,65,53,-1,26,5,67,-1,67,66,26,-1,5,35,68,-1,68,67,5,-1,35,34,69,-1,69,68,35,-1,34,4,70,-1,70,69,34,-1,4,6,72,-1,72,70,4,-1,6,48,73,-1,73,71,6,-1,48,47,74,-1,74,73,48,-1,47,26,66,-1,66,74,47,-1]
Coordinate613 = x3d.Coordinate()

IndexedFaceSet612.coord = Coordinate613
TextureCoordinate614 = x3d.TextureCoordinate()

IndexedFaceSet612.texCoord = TextureCoordinate614

Shape608.geometry = IndexedFaceSet612

HAnimSegment607.children.append(Shape608)
Group615 = x3d.Group()
Group615.DEF = "r_metatarsal_3_Sites"
"""None"""

HAnimSegment607.children.append(Group615)

HAnimJoint606.children.append(HAnimSegment607)
HAnimJoint616 = x3d.HAnimJoint()
HAnimJoint616.name = "r_metatarsophalangeal_3"
HAnimJoint616.DEF = "hanim_r_metatarsophalangeal_3"
HAnimJoint616.center = [-0.0960975,0.015057,0.09542251]
HAnimJoint616.ulimit = [0,0,0]
HAnimJoint616.llimit = [0,0,0]
HAnimSegment617 = x3d.HAnimSegment()
HAnimSegment617.name = "r_tarsal_proximal_phalanx_3"
HAnimSegment617.DEF = "hanim_r_tarsal_proximal_phalanx_3"
Shape618 = x3d.Shape()
Shape618.DEF = "r_tarsal_proximal_phalanx_3_Shape"
Appearance619 = x3d.Appearance()
Material620 = x3d.Material()
Material620.USE = "SurfaceDefault"

Appearance619.material = Material620
ImageTexture621 = x3d.ImageTexture()
ImageTexture621.USE = "JinLOA4TextureAtlas"

Appearance619.texture = ImageTexture621

Shape618.appearance = Appearance619
IndexedFaceSet622 = x3d.IndexedFaceSet()
IndexedFaceSet622.coordIndex = [13,0,1,-1,1,7,13,-1,7,1,2,-1,2,9,7,-1,4,6,14,-1,14,3,4,-1,8,6,4,-1,4,5,8,-1,5,0,13,-1,13,8,5,-1,23,17,15,-1,15,19,23,-1,16,18,24,-1,24,20,16,-1,9,23,19,-1,19,7,9,-1,8,20,24,-1,24,6,8,-1,7,19,11,-1,24,21,6,-1,10,8,13,-1,13,12,10,-1,14,22,25,-1,25,9,14,-1,21,22,14,-1,14,6,21,-1,7,11,12,-1,12,13,7,-1,10,20,8,-1,25,23,9,-1,9,2,3,-1,3,14,9,-1,5,4,3,-1,3,2,1,-1,5,3,1,-1,0,5,1,-1,33,34,35,-1,32,33,35,-1,31,32,35,-1,41,42,43,-1,43,37,41,-1,28,29,26,-1,26,27,28,-1,35,36,30,-1,30,31,35,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,15,17,27,-1,27,26,15,-1,17,18,28,-1,28,27,17,-1,18,16,29,-1,29,28,18,-1,16,15,26,-1,26,29,16,-1,17,23,31,-1,31,30,17,-1,23,25,32,-1,32,31,23,-1,25,22,33,-1,33,32,25,-1,22,21,34,-1,34,33,22,-1,21,24,35,-1,35,34,21,-1,24,18,36,-1,36,35,24,-1,18,17,30,-1,30,36,18,-1,20,10,38,-1,38,37,20,-1,10,12,39,-1,39,38,10,-1,12,11,40,-1,40,39,12,-1,11,19,41,-1,41,40,11,-1,19,15,42,-1,42,41,19,-1,15,16,43,-1,43,42,15,-1,16,20,37,-1,37,43,16,-1]
IndexedFaceSet622.creaseAngle = 3.14159
IndexedFaceSet622.texCoordIndex = [22,1,0,-1,0,7,22,-1,7,0,2,-1,2,9,7,-1,4,6,23,-1,23,3,4,-1,8,6,4,-1,4,5,8,-1,5,1,22,-1,22,8,5,-1,36,26,24,-1,24,29,36,-1,25,27,38,-1,38,31,25,-1,11,35,28,-1,28,10,11,-1,13,30,37,-1,37,12,13,-1,10,28,15,-1,37,32,12,-1,14,13,16,-1,16,20,14,-1,18,33,39,-1,39,11,18,-1,32,34,19,-1,19,12,32,-1,10,15,21,-1,21,17,10,-1,14,30,13,-1,39,35,11,-1,9,2,3,-1,3,23,9,-1,5,4,3,-1,3,2,0,-1,5,3,0,-1,1,5,0,-1,47,48,49,-1,46,47,49,-1,45,46,49,-1,55,56,57,-1,57,51,55,-1,42,43,40,-1,40,41,42,-1,49,50,44,-1,44,45,49,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,24,26,41,-1,41,40,24,-1,26,27,42,-1,42,41,26,-1,27,25,43,-1,43,42,27,-1,25,24,40,-1,40,43,25,-1,26,36,45,-1,45,44,26,-1,35,39,46,-1,46,45,35,-1,39,33,47,-1,47,46,39,-1,34,32,48,-1,48,47,34,-1,32,37,49,-1,49,48,32,-1,38,27,50,-1,50,49,38,-1,27,26,44,-1,44,50,27,-1,30,14,52,-1,52,51,30,-1,14,20,53,-1,53,52,14,-1,21,15,54,-1,54,53,21,-1,15,28,55,-1,55,54,15,-1,29,24,56,-1,56,55,29,-1,24,25,57,-1,57,56,24,-1,25,31,51,-1,51,57,25,-1]
Coordinate623 = x3d.Coordinate()

IndexedFaceSet622.coord = Coordinate623
TextureCoordinate624 = x3d.TextureCoordinate()

IndexedFaceSet622.texCoord = TextureCoordinate624

Shape618.geometry = IndexedFaceSet622

HAnimSegment617.children.append(Shape618)
Group625 = x3d.Group()
Group625.DEF = "r_tarsal_proximal_phalanx_3_Sites"
"""None"""

HAnimSegment617.children.append(Group625)

HAnimJoint616.children.append(HAnimSegment617)
HAnimJoint626 = x3d.HAnimJoint()
HAnimJoint626.name = "r_tarsal_proximal_interphalangeal_3"
HAnimJoint626.DEF = "hanim_r_tarsal_proximal_interphalangeal_3"
HAnimJoint626.center = [-0.098505,0.011922751,0.110475]
HAnimJoint626.ulimit = [0,0,0]
HAnimJoint626.llimit = [0,0,0]
HAnimSegment627 = x3d.HAnimSegment()
HAnimSegment627.name = "r_tarsal_middle_phalanx_3"
HAnimSegment627.DEF = "hanim_r_tarsal_middle_phalanx_3"
Shape628 = x3d.Shape()
Shape628.DEF = "r_tarsal_middle_phalanx_3_Shape"
Appearance629 = x3d.Appearance()
Material630 = x3d.Material()
Material630.USE = "SurfaceDefault"

Appearance629.material = Material630
ImageTexture631 = x3d.ImageTexture()
ImageTexture631.USE = "JinLOA4TextureAtlas"

Appearance629.texture = ImageTexture631

Shape628.appearance = Appearance629
IndexedFaceSet632 = x3d.IndexedFaceSet()
IndexedFaceSet632.coordIndex = [1,7,6,-1,6,0,1,-1,2,8,7,-1,7,1,2,-1,9,8,2,-1,2,3,9,-1,4,10,9,-1,9,3,4,-1,11,10,4,-1,4,5,11,-1,6,11,5,-1,5,0,6,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,1,0,19,-1,19,18,1,-1,0,5,20,-1,20,19,0,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,1,18,-1,18,23,2,-1]
IndexedFaceSet632.creaseAngle = 3.14159
IndexedFaceSet632.texCoordIndex = [0,9,8,-1,8,1,0,-1,2,10,9,-1,9,0,2,-1,11,10,2,-1,2,3,11,-1,4,13,11,-1,11,3,4,-1,14,12,7,-1,7,6,14,-1,8,15,5,-1,5,1,8,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,13,20,-1,20,19,11,-1,12,14,21,-1,21,20,12,-1,15,8,16,-1,16,21,15,-1,24,25,26,-1,26,27,22,-1,24,26,22,-1,23,24,22,-1,0,1,23,-1,23,22,0,-1,1,5,24,-1,24,23,1,-1,6,7,25,-1,25,24,6,-1,4,3,26,-1,26,25,4,-1,3,2,27,-1,27,26,3,-1,2,0,22,-1,22,27,2,-1]
Coordinate633 = x3d.Coordinate()

IndexedFaceSet632.coord = Coordinate633
TextureCoordinate634 = x3d.TextureCoordinate()

IndexedFaceSet632.texCoord = TextureCoordinate634

Shape628.geometry = IndexedFaceSet632

HAnimSegment627.children.append(Shape628)
Group635 = x3d.Group()
Group635.DEF = "r_tarsal_middle_phalanx_3_Sites"
"""None"""

HAnimSegment627.children.append(Group635)

HAnimJoint626.children.append(HAnimSegment627)
HAnimJoint636 = x3d.HAnimJoint()
HAnimJoint636.name = "r_tarsal_distal_interphalangeal_3"
HAnimJoint636.DEF = "hanim_r_tarsal_distal_interphalangeal_3"
HAnimJoint636.center = [-0.100035004,0.00982575,0.11970001]
HAnimJoint636.ulimit = [0,0,0]
HAnimJoint636.llimit = [0,0,0]
HAnimSegment637 = x3d.HAnimSegment()
HAnimSegment637.name = "r_tarsal_distal_phalanx_3"
HAnimSegment637.DEF = "hanim_r_tarsal_distal_phalanx_3"
Shape638 = x3d.Shape()
Shape638.DEF = "r_tarsal_distal_phalanx_3_Shape"
Appearance639 = x3d.Appearance()
Material640 = x3d.Material()
Material640.USE = "SurfaceDefault"

Appearance639.material = Material640
ImageTexture641 = x3d.ImageTexture()
ImageTexture641.USE = "JinLOA4TextureAtlas"

Appearance639.texture = ImageTexture641

Shape638.appearance = Appearance639
IndexedFaceSet642 = x3d.IndexedFaceSet()
IndexedFaceSet642.coordIndex = [1,0,3,-1,3,2,1,-1,5,4,3,-1,3,0,5,-1,1,7,6,-1,6,0,1,-1,2,8,7,-1,7,1,2,-1,9,8,2,-1,2,3,9,-1,4,10,9,-1,9,3,4,-1,11,10,4,-1,4,5,11,-1,6,11,5,-1,5,0,6,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1]
IndexedFaceSet642.creaseAngle = 3.14159
IndexedFaceSet642.texCoordIndex = [0,3,2,-1,2,1,0,-1,5,4,2,-1,2,3,5,-1,0,9,8,-1,8,3,0,-1,1,10,9,-1,9,0,1,-1,11,10,1,-1,1,2,11,-1,4,12,11,-1,11,2,4,-1,14,13,7,-1,7,6,14,-1,8,15,5,-1,5,3,8,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,12,20,-1,20,19,11,-1,13,14,21,-1,21,20,13,-1,15,8,16,-1,16,21,15,-1]
Coordinate643 = x3d.Coordinate()

IndexedFaceSet642.coord = Coordinate643
TextureCoordinate644 = x3d.TextureCoordinate()

IndexedFaceSet642.texCoord = TextureCoordinate644

Shape638.geometry = IndexedFaceSet642

HAnimSegment637.children.append(Shape638)
Group645 = x3d.Group()
Group645.DEF = "r_tarsal_distal_phalanx_3_Sites"
"""(r_tarsal_distal_phalanx_3_tip -0.128 0.011 0.185)"""
HAnimSite646 = x3d.HAnimSite()
HAnimSite646.name = "r_tarsal_distal_phalanx_3_tip"
HAnimSite646.DEF = "hanim_r_tarsal_distal_phalanx_3_tip"
HAnimSite646.translation = [-0.1,0.016,0.14]
TouchSensor647 = x3d.TouchSensor()
TouchSensor647.description = "HAnimSite r_tarsal_distal_phalanx_3_tip 118"

HAnimSite646.children.append(TouchSensor647)
Shape648 = x3d.Shape()
Shape648.USE = "HAnimSiteShape"

HAnimSite646.children.append(Shape648)

Group645.children.append(HAnimSite646)

HAnimSegment637.children.append(Group645)

HAnimJoint636.children.append(HAnimSegment637)

HAnimJoint626.children.append(HAnimJoint636)

HAnimJoint616.children.append(HAnimJoint626)

HAnimJoint606.children.append(HAnimJoint616)

HAnimJoint596.children.append(HAnimJoint606)

HAnimJoint487.children.append(HAnimJoint596)

HAnimJoint471.children.append(HAnimJoint487)
HAnimJoint649 = x3d.HAnimJoint()
HAnimJoint649.name = "r_calcaneocuboid"
HAnimJoint649.DEF = "hanim_r_calcaneocuboid"
HAnimJoint649.center = [-0.088717505,0.0579825,-0.025965001]
HAnimJoint649.ulimit = [0,0,0]
HAnimJoint649.llimit = [0,0,0]
HAnimSegment650 = x3d.HAnimSegment()
HAnimSegment650.name = "r_calcaneus"
HAnimSegment650.DEF = "hanim_r_calcaneus"
Shape651 = x3d.Shape()
Shape651.DEF = "r_calcaneus_Shape"
Appearance652 = x3d.Appearance()
Material653 = x3d.Material()
Material653.USE = "SurfaceDefault"

Appearance652.material = Material653
ImageTexture654 = x3d.ImageTexture()
ImageTexture654.USE = "JinLOA4TextureAtlas"

Appearance652.texture = ImageTexture654

Shape651.appearance = Appearance652
IndexedFaceSet655 = x3d.IndexedFaceSet()
IndexedFaceSet655.coordIndex = [1,0,3,-1,3,2,1,-1,4,7,6,-1,6,5,4,-1,4,18,19,-1,19,7,4,-1,0,8,9,-1,9,3,0,-1,10,2,3,-1,3,11,10,-1,12,6,7,-1,7,13,12,-1,13,7,19,-1,19,20,13,-1,25,26,14,-1,14,9,25,-1,3,9,14,-1,14,11,3,-1,15,10,11,-1,11,16,15,-1,13,20,21,-1,21,17,13,-1,11,14,16,-1,4,5,23,-1,23,18,4,-1,14,38,37,-1,34,15,16,-1,16,35,34,-1,17,21,39,-1,39,36,17,-1,17,12,13,-1,35,16,14,-1,14,37,35,-1,5,6,30,-1,30,27,5,-1,18,23,22,-1,22,1,18,-1,2,19,18,-1,18,1,2,-1,10,20,19,-1,19,2,10,-1,15,21,20,-1,20,10,15,-1,34,39,21,-1,21,15,34,-1,22,8,0,-1,0,1,22,-1,25,9,8,-1,8,24,25,-1,14,26,33,-1,33,38,14,-1,23,5,27,-1,27,29,23,-1,22,23,29,-1,29,28,22,-1,8,22,28,-1,28,24,8,-1,30,6,12,-1,12,31,30,-1,32,31,12,-1,12,40,32,-1,40,12,17,-1,17,36,40,-1,47,48,49,-1,49,41,42,-1,42,43,44,-1,49,42,44,-1,47,49,44,-1,47,44,45,-1,46,47,45,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,50,51,55,-1,55,56,59,-1,59,50,55,-1,56,57,58,-1,58,59,56,-1,34,35,42,-1,42,41,34,-1,35,37,43,-1,43,42,35,-1,37,38,44,-1,44,43,37,-1,38,33,45,-1,45,44,38,-1,33,32,46,-1,46,45,33,-1,32,40,47,-1,47,46,32,-1,40,36,48,-1,48,47,40,-1,36,39,49,-1,49,48,36,-1,39,34,41,-1,41,49,39,-1,25,24,51,-1,51,50,25,-1,24,28,52,-1,52,51,24,-1,28,29,53,-1,53,52,28,-1,29,27,54,-1,54,53,29,-1,27,30,55,-1,55,54,27,-1,30,31,56,-1,56,55,30,-1,31,32,57,-1,57,56,31,-1,32,33,58,-1,58,57,32,-1,33,26,59,-1,59,58,33,-1,26,25,50,-1,50,59,26,-1]
IndexedFaceSet655.creaseAngle = 3.14159
IndexedFaceSet655.texCoordIndex = [1,0,3,-1,3,2,1,-1,4,7,6,-1,6,5,4,-1,4,18,19,-1,19,7,4,-1,0,8,9,-1,9,3,0,-1,10,2,3,-1,3,11,10,-1,12,6,7,-1,7,13,12,-1,13,7,19,-1,19,20,13,-1,25,26,14,-1,14,9,25,-1,3,9,14,-1,14,11,3,-1,15,10,11,-1,11,16,15,-1,13,20,21,-1,21,17,13,-1,11,14,16,-1,4,5,23,-1,23,18,4,-1,14,38,37,-1,34,15,16,-1,16,35,34,-1,17,21,39,-1,39,36,17,-1,17,12,13,-1,35,16,14,-1,14,37,35,-1,5,6,30,-1,30,27,5,-1,18,23,22,-1,22,1,18,-1,2,19,18,-1,18,1,2,-1,10,20,19,-1,19,2,10,-1,15,21,20,-1,20,10,15,-1,34,39,21,-1,21,15,34,-1,22,8,0,-1,0,1,22,-1,25,9,8,-1,8,24,25,-1,14,26,33,-1,33,38,14,-1,23,5,27,-1,27,29,23,-1,22,23,29,-1,29,28,22,-1,8,22,28,-1,28,24,8,-1,30,6,12,-1,12,31,30,-1,32,31,12,-1,12,40,32,-1,40,12,17,-1,17,36,40,-1,47,48,49,-1,49,41,42,-1,42,43,44,-1,49,42,44,-1,47,49,44,-1,47,44,45,-1,46,47,45,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,50,51,55,-1,55,56,59,-1,59,50,55,-1,56,57,58,-1,58,59,56,-1,34,35,42,-1,42,41,34,-1,35,37,43,-1,43,42,35,-1,37,38,44,-1,44,43,37,-1,38,33,45,-1,45,44,38,-1,33,32,46,-1,46,45,33,-1,32,40,47,-1,47,46,32,-1,40,36,48,-1,48,47,40,-1,36,39,49,-1,49,48,36,-1,39,34,41,-1,41,49,39,-1,25,24,51,-1,51,50,25,-1,24,28,52,-1,52,51,24,-1,28,29,53,-1,53,52,28,-1,29,27,54,-1,54,53,29,-1,27,30,55,-1,55,54,27,-1,30,31,56,-1,56,55,30,-1,31,32,57,-1,57,56,31,-1,32,33,58,-1,58,57,32,-1,33,26,59,-1,59,58,33,-1,26,25,50,-1,50,59,26,-1]
Coordinate656 = x3d.Coordinate()

IndexedFaceSet655.coord = Coordinate656
TextureCoordinate657 = x3d.TextureCoordinate()

IndexedFaceSet655.texCoord = TextureCoordinate657

Shape651.geometry = IndexedFaceSet655

HAnimSegment650.children.append(Shape651)
Group658 = x3d.Group()
Group658.DEF = "r_calcaneus_Sites"
"""None"""

HAnimSegment650.children.append(Group658)

HAnimJoint649.children.append(HAnimSegment650)
HAnimJoint659 = x3d.HAnimJoint()
HAnimJoint659.name = "r_transversetarsal"
HAnimJoint659.DEF = "hanim_r_transversetarsal"
HAnimJoint659.center = [-0.110272504,0.03528,0.002089125]
HAnimJoint659.ulimit = [0,0,0]
HAnimJoint659.llimit = [0,0,0]
HAnimSegment660 = x3d.HAnimSegment()
HAnimSegment660.name = "r_cuboid"
HAnimSegment660.DEF = "hanim_r_cuboid"
Shape661 = x3d.Shape()
Shape661.DEF = "r_cuboid_Shape"
Appearance662 = x3d.Appearance()
Material663 = x3d.Material()
Material663.USE = "SurfaceDefault"

Appearance662.material = Material663
ImageTexture664 = x3d.ImageTexture()
ImageTexture664.USE = "JinLOA4TextureAtlas"

Appearance662.texture = ImageTexture664

Shape661.appearance = Appearance662
IndexedFaceSet665 = x3d.IndexedFaceSet()
IndexedFaceSet665.coordIndex = [1,17,16,-1,16,0,1,-1,3,8,5,-1,5,0,3,-1,6,7,2,-1,2,1,6,-1,2,4,10,-1,18,2,10,-1,4,9,13,-1,13,12,4,-1,11,10,4,-1,4,12,11,-1,6,1,0,-1,0,5,6,-1,9,4,2,-1,2,7,9,-1,8,3,14,-1,14,15,8,-1,3,0,16,-1,16,19,3,-1,14,3,19,-1,1,2,18,-1,18,17,1,-1,31,32,33,-1,33,26,27,-1,31,33,27,-1,30,31,27,-1,21,24,25,-1,25,20,21,-1,40,41,42,-1,42,34,35,-1,42,35,36,-1,40,42,36,-1,39,40,36,-1,22,23,24,-1,24,21,22,-1,11,12,21,-1,21,20,11,-1,12,13,22,-1,22,21,12,-1,39,36,37,-1,37,38,39,-1,15,14,24,-1,24,23,15,-1,14,19,25,-1,25,24,14,-1,30,27,28,-1,28,29,30,-1,10,11,27,-1,27,26,10,-1,11,20,28,-1,28,27,11,-1,20,25,29,-1,29,28,20,-1,25,19,30,-1,30,29,25,-1,19,16,31,-1,31,30,19,-1,16,17,32,-1,32,31,16,-1,17,18,33,-1,33,32,17,-1,18,10,26,-1,26,33,18,-1,5,8,35,-1,35,34,5,-1,8,15,36,-1,36,35,8,-1,15,23,37,-1,37,36,15,-1,23,22,38,-1,38,37,23,-1,22,13,39,-1,39,38,22,-1,13,9,40,-1,40,39,13,-1,9,7,41,-1,41,40,9,-1,7,6,42,-1,42,41,7,-1,6,5,34,-1,34,42,6,-1]
IndexedFaceSet665.creaseAngle = 3.14159
IndexedFaceSet665.texCoordIndex = [1,17,16,-1,16,0,1,-1,2,8,5,-1,5,0,2,-1,6,7,3,-1,3,1,6,-1,3,4,10,-1,18,3,10,-1,4,9,13,-1,13,12,4,-1,11,10,4,-1,4,12,11,-1,6,1,0,-1,0,5,6,-1,9,4,3,-1,3,7,9,-1,8,2,14,-1,14,15,8,-1,2,0,16,-1,16,19,2,-1,14,2,19,-1,1,3,18,-1,18,17,1,-1,31,32,33,-1,33,26,27,-1,31,33,27,-1,30,31,27,-1,21,24,25,-1,25,20,21,-1,40,41,42,-1,42,34,35,-1,42,35,36,-1,40,42,36,-1,39,40,36,-1,22,23,24,-1,24,21,22,-1,11,12,21,-1,21,20,11,-1,12,13,22,-1,22,21,12,-1,39,36,37,-1,37,38,39,-1,15,14,24,-1,24,23,15,-1,14,19,25,-1,25,24,14,-1,30,27,28,-1,28,29,30,-1,10,11,27,-1,27,26,10,-1,11,20,28,-1,28,27,11,-1,20,25,29,-1,29,28,20,-1,25,19,30,-1,30,29,25,-1,19,16,31,-1,31,30,19,-1,16,17,32,-1,32,31,16,-1,17,18,33,-1,33,32,17,-1,18,10,26,-1,26,33,18,-1,5,8,35,-1,35,34,5,-1,8,15,36,-1,36,35,8,-1,15,23,37,-1,37,36,15,-1,23,22,38,-1,38,37,23,-1,22,13,39,-1,39,38,22,-1,13,9,40,-1,40,39,13,-1,9,7,41,-1,41,40,9,-1,7,6,42,-1,42,41,7,-1,6,5,34,-1,34,42,6,-1]
Coordinate666 = x3d.Coordinate()

IndexedFaceSet665.coord = Coordinate666
TextureCoordinate667 = x3d.TextureCoordinate()

IndexedFaceSet665.texCoord = TextureCoordinate667

Shape661.geometry = IndexedFaceSet665

HAnimSegment660.children.append(Shape661)
Group668 = x3d.Group()
Group668.DEF = "r_cuboid_Sites"
"""None"""

HAnimSegment660.children.append(Group668)

HAnimJoint659.children.append(HAnimSegment660)
HAnimJoint669 = x3d.HAnimJoint()
HAnimJoint669.name = "r_tarsometatarsal_4"
HAnimJoint669.DEF = "hanim_r_tarsometatarsal_4"
HAnimJoint669.center = [-0.10613251,0.0245475,0.03843]
HAnimJoint669.ulimit = [0,0,0]
HAnimJoint669.llimit = [0,0,0]
HAnimSegment670 = x3d.HAnimSegment()
HAnimSegment670.name = "r_metatarsal_4"
HAnimSegment670.DEF = "hanim_r_metatarsal_4"
Shape671 = x3d.Shape()
Shape671.DEF = "r_metatarsal_4_Shape"
Appearance672 = x3d.Appearance()
Material673 = x3d.Material()
Material673.USE = "SurfaceDefault"

Appearance672.material = Material673
ImageTexture674 = x3d.ImageTexture()
ImageTexture674.USE = "JinLOA4TextureAtlas"

Appearance672.texture = ImageTexture674

Shape671.appearance = Appearance672
IndexedFaceSet675 = x3d.IndexedFaceSet()
IndexedFaceSet675.coordIndex = [11,13,17,-1,17,16,11,-1,10,11,16,-1,16,14,10,-1,5,1,3,-1,3,7,5,-1,0,2,6,-1,6,4,0,-1,14,15,12,-1,12,10,14,-1,7,3,0,-1,0,4,7,-1,8,1,5,-1,5,9,8,-1,40,41,36,-1,36,37,40,-1,48,49,44,-1,44,45,48,-1,27,28,31,-1,28,29,30,-1,30,31,28,-1,34,35,32,-1,32,33,34,-1,35,27,31,-1,31,32,35,-1,18,19,24,-1,26,18,24,-1,24,25,26,-1,20,21,22,-1,22,23,20,-1,19,20,23,-1,23,24,19,-1,5,7,19,-1,19,18,5,-1,7,4,20,-1,20,19,7,-1,4,6,21,-1,21,20,4,-1,40,37,38,-1,38,39,40,-1,15,14,23,-1,23,22,15,-1,14,16,24,-1,24,23,14,-1,16,17,25,-1,25,24,16,-1,44,49,50,-1,50,51,44,-1,9,5,18,-1,18,26,9,-1,3,1,28,-1,28,27,3,-1,1,8,29,-1,29,28,1,-1,48,45,46,-1,46,47,48,-1,13,11,31,-1,31,30,13,-1,11,10,32,-1,32,31,11,-1,10,12,33,-1,33,32,10,-1,36,41,42,-1,42,43,36,-1,2,0,35,-1,35,34,2,-1,0,3,27,-1,27,35,0,-1,12,15,37,-1,37,36,12,-1,15,22,38,-1,38,37,15,-1,22,21,39,-1,39,38,22,-1,21,6,40,-1,40,39,21,-1,6,2,41,-1,41,40,6,-1,2,34,42,-1,42,41,2,-1,34,33,43,-1,43,42,34,-1,33,12,36,-1,36,43,33,-1,17,13,45,-1,45,44,17,-1,13,30,46,-1,46,45,13,-1,30,29,47,-1,47,46,30,-1,29,8,48,-1,48,47,29,-1,8,9,49,-1,49,48,8,-1,9,26,50,-1,50,49,9,-1,26,25,51,-1,51,50,26,-1,25,17,44,-1,44,51,25,-1]
IndexedFaceSet675.creaseAngle = 3.14159
IndexedFaceSet675.texCoordIndex = [5,13,17,-1,17,16,5,-1,2,5,16,-1,16,7,2,-1,9,1,6,-1,6,12,9,-1,0,4,11,-1,11,8,0,-1,7,10,3,-1,3,2,7,-1,12,6,0,-1,0,8,12,-1,14,1,9,-1,9,15,14,-1,42,43,38,-1,38,39,42,-1,50,51,46,-1,46,47,50,-1,29,30,18,-1,30,31,32,-1,32,33,30,-1,36,37,34,-1,34,35,36,-1,37,29,33,-1,33,34,37,-1,20,21,19,-1,28,20,26,-1,26,27,28,-1,22,23,24,-1,24,25,22,-1,21,22,25,-1,25,26,21,-1,9,12,21,-1,21,20,9,-1,12,8,22,-1,22,21,12,-1,8,11,23,-1,23,22,8,-1,42,39,40,-1,40,41,42,-1,10,7,25,-1,25,24,10,-1,7,16,26,-1,26,25,7,-1,16,17,27,-1,27,26,16,-1,46,51,52,-1,52,53,46,-1,15,9,20,-1,20,28,15,-1,6,1,30,-1,30,29,6,-1,1,14,31,-1,31,30,1,-1,50,47,48,-1,48,49,50,-1,13,5,33,-1,33,32,13,-1,5,2,34,-1,34,33,5,-1,2,3,35,-1,35,34,2,-1,38,43,44,-1,44,45,38,-1,4,0,37,-1,37,36,4,-1,0,6,29,-1,29,37,0,-1,3,10,39,-1,39,38,3,-1,10,24,40,-1,40,39,10,-1,24,23,41,-1,41,40,24,-1,23,11,42,-1,42,41,23,-1,11,4,43,-1,43,42,11,-1,4,36,44,-1,44,43,4,-1,36,35,45,-1,45,44,36,-1,35,3,38,-1,38,45,35,-1,17,13,47,-1,47,46,17,-1,13,32,48,-1,48,47,13,-1,32,31,49,-1,49,48,32,-1,31,14,50,-1,50,49,31,-1,14,15,51,-1,51,50,14,-1,15,28,52,-1,52,51,15,-1,28,27,53,-1,53,52,28,-1,27,17,46,-1,46,53,27,-1]
Coordinate676 = x3d.Coordinate()

IndexedFaceSet675.coord = Coordinate676
TextureCoordinate677 = x3d.TextureCoordinate()

IndexedFaceSet675.texCoord = TextureCoordinate677

Shape671.geometry = IndexedFaceSet675

HAnimSegment670.children.append(Shape671)
Group678 = x3d.Group()
Group678.DEF = "r_metatarsal_4_Sites"
"""None"""

HAnimSegment670.children.append(Group678)

HAnimJoint669.children.append(HAnimSegment670)
HAnimJoint679 = x3d.HAnimJoint()
HAnimJoint679.name = "r_metatarsophalangeal_4"
HAnimJoint679.DEF = "hanim_r_metatarsophalangeal_4"
HAnimJoint679.center = [-0.10950751,0.01435275,0.091170006]
HAnimJoint679.ulimit = [0,0,0]
HAnimJoint679.llimit = [0,0,0]
HAnimSegment680 = x3d.HAnimSegment()
HAnimSegment680.name = "r_tarsal_proximal_phalanx_4"
HAnimSegment680.DEF = "hanim_r_tarsal_proximal_phalanx_4"
Shape681 = x3d.Shape()
Shape681.DEF = "r_tarsal_proximal_phalanx_4_Shape"
Appearance682 = x3d.Appearance()
Material683 = x3d.Material()
Material683.USE = "SurfaceDefault"

Appearance682.material = Material683
ImageTexture684 = x3d.ImageTexture()
ImageTexture684.USE = "JinLOA4TextureAtlas"

Appearance682.texture = ImageTexture684

Shape681.appearance = Appearance682
IndexedFaceSet685 = x3d.IndexedFaceSet()
IndexedFaceSet685.coordIndex = [13,2,1,-1,1,10,13,-1,10,1,3,-1,3,8,10,-1,3,4,0,-1,0,8,3,-1,0,4,5,-1,5,9,0,-1,7,9,5,-1,5,6,7,-1,6,2,13,-1,13,7,6,-1,22,17,18,-1,18,14,22,-1,20,19,21,-1,21,15,20,-1,9,7,15,-1,15,21,9,-1,10,14,16,-1,8,22,14,-1,14,10,8,-1,21,23,9,-1,11,7,13,-1,13,12,11,-1,0,25,24,-1,24,8,0,-1,16,12,13,-1,13,10,16,-1,23,25,0,-1,0,9,23,-1,11,15,7,-1,24,22,8,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,6,5,4,-1,4,3,1,-1,6,4,1,-1,2,6,1,-1,37,38,39,-1,39,40,37,-1,28,29,26,-1,26,27,28,-1,35,36,30,-1,30,31,35,-1,40,41,42,-1,42,43,37,-1,40,42,37,-1,18,17,27,-1,27,26,18,-1,17,19,28,-1,28,27,17,-1,19,20,29,-1,29,28,19,-1,20,18,26,-1,26,29,20,-1,17,22,31,-1,31,30,17,-1,22,24,32,-1,32,31,22,-1,24,25,33,-1,33,32,24,-1,25,23,34,-1,34,33,25,-1,23,21,35,-1,35,34,23,-1,21,19,36,-1,36,35,21,-1,19,17,30,-1,30,36,19,-1,14,18,38,-1,38,37,14,-1,18,20,39,-1,39,38,18,-1,20,15,40,-1,40,39,20,-1,15,11,41,-1,41,40,15,-1,11,12,42,-1,42,41,11,-1,12,16,43,-1,43,42,12,-1,16,14,37,-1,37,43,16,-1]
IndexedFaceSet685.creaseAngle = 3.14159
IndexedFaceSet685.texCoordIndex = [27,2,1,-1,1,10,27,-1,10,1,3,-1,3,11,10,-1,3,4,0,-1,0,11,3,-1,0,4,5,-1,5,12,0,-1,9,12,5,-1,5,6,9,-1,6,2,27,-1,27,9,6,-1,35,28,29,-1,29,7,35,-1,31,30,33,-1,33,8,31,-1,15,14,16,-1,16,32,15,-1,17,13,18,-1,19,34,13,-1,13,17,19,-1,32,36,15,-1,20,14,22,-1,22,21,20,-1,23,38,37,-1,37,19,23,-1,18,24,25,-1,25,17,18,-1,36,39,26,-1,26,15,36,-1,20,16,14,-1,37,34,19,-1,45,46,47,-1,47,48,49,-1,45,47,49,-1,6,5,4,-1,4,3,1,-1,6,4,1,-1,2,6,1,-1,51,52,53,-1,53,54,51,-1,42,43,40,-1,40,41,42,-1,49,50,44,-1,44,45,49,-1,54,55,56,-1,56,57,51,-1,54,56,51,-1,29,28,41,-1,41,40,29,-1,28,30,42,-1,42,41,28,-1,30,31,43,-1,43,42,30,-1,31,29,40,-1,40,43,31,-1,28,35,45,-1,45,44,28,-1,34,37,46,-1,46,45,34,-1,37,38,47,-1,47,46,37,-1,39,36,48,-1,48,47,39,-1,36,32,49,-1,49,48,36,-1,33,30,50,-1,50,49,33,-1,30,28,44,-1,44,50,30,-1,7,29,52,-1,52,51,7,-1,29,31,53,-1,53,52,29,-1,31,8,54,-1,54,53,31,-1,16,20,55,-1,55,54,16,-1,20,21,56,-1,56,55,20,-1,24,18,57,-1,57,56,24,-1,18,13,51,-1,51,57,18,-1]
Coordinate686 = x3d.Coordinate()

IndexedFaceSet685.coord = Coordinate686
TextureCoordinate687 = x3d.TextureCoordinate()

IndexedFaceSet685.texCoord = TextureCoordinate687

Shape681.geometry = IndexedFaceSet685

HAnimSegment680.children.append(Shape681)
Group688 = x3d.Group()
Group688.DEF = "r_tarsal_proximal_phalanx_4_Sites"
"""None"""

HAnimSegment680.children.append(Group688)

HAnimJoint679.children.append(HAnimSegment680)
HAnimJoint689 = x3d.HAnimJoint()
HAnimJoint689.name = "r_tarsal_proximal_interphalangeal_4"
HAnimJoint689.DEF = "hanim_r_tarsal_proximal_interphalangeal_4"
HAnimJoint689.center = [-0.11378251,0.0122445,0.1063125]
HAnimJoint689.ulimit = [0,0,0]
HAnimJoint689.llimit = [0,0,0]
HAnimSegment690 = x3d.HAnimSegment()
HAnimSegment690.name = "r_tarsal_middle_phalanx_4"
HAnimSegment690.DEF = "hanim_r_tarsal_middle_phalanx_4"
Shape691 = x3d.Shape()
Shape691.DEF = "r_tarsal_middle_phalanx_4_Shape"
Appearance692 = x3d.Appearance()
Material693 = x3d.Material()
Material693.USE = "SurfaceDefault"

Appearance692.material = Material693
ImageTexture694 = x3d.ImageTexture()
ImageTexture694.USE = "JinLOA4TextureAtlas"

Appearance692.texture = ImageTexture694

Shape691.appearance = Appearance692
IndexedFaceSet695 = x3d.IndexedFaceSet()
IndexedFaceSet695.coordIndex = [0,6,7,-1,7,1,0,-1,2,8,6,-1,6,0,2,-1,9,8,2,-1,2,3,9,-1,4,10,9,-1,9,3,4,-1,11,10,4,-1,4,5,11,-1,7,11,5,-1,5,1,7,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,7,6,13,-1,13,12,7,-1,6,8,14,-1,14,13,6,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,7,12,-1,12,17,11,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,0,1,19,-1,19,18,0,-1,1,5,20,-1,20,19,1,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,18,-1,18,23,2,-1]
IndexedFaceSet695.creaseAngle = 3.14159
IndexedFaceSet695.texCoordIndex = [0,8,9,-1,9,1,0,-1,2,10,8,-1,8,0,2,-1,11,10,2,-1,2,3,11,-1,4,12,11,-1,11,3,4,-1,14,13,7,-1,7,6,14,-1,9,15,5,-1,5,1,9,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,9,8,17,-1,17,16,9,-1,8,10,18,-1,18,17,8,-1,10,11,19,-1,19,18,10,-1,11,12,20,-1,20,19,11,-1,13,14,21,-1,21,20,13,-1,15,9,16,-1,16,21,15,-1,24,25,26,-1,26,27,22,-1,24,26,22,-1,23,24,22,-1,0,1,23,-1,23,22,0,-1,1,5,24,-1,24,23,1,-1,6,7,25,-1,25,24,6,-1,4,3,26,-1,26,25,4,-1,3,2,27,-1,27,26,3,-1,2,0,22,-1,22,27,2,-1]
Coordinate696 = x3d.Coordinate()

IndexedFaceSet695.coord = Coordinate696
TextureCoordinate697 = x3d.TextureCoordinate()

IndexedFaceSet695.texCoord = TextureCoordinate697

Shape691.geometry = IndexedFaceSet695

HAnimSegment690.children.append(Shape691)
Group698 = x3d.Group()
Group698.DEF = "r_tarsal_middle_phalanx_4_Sites"
"""None"""

HAnimSegment690.children.append(Group698)

HAnimJoint689.children.append(HAnimSegment690)
HAnimJoint699 = x3d.HAnimJoint()
HAnimJoint699.name = "r_tarsal_distal_interphalangeal_4"
HAnimJoint699.DEF = "hanim_r_tarsal_distal_interphalangeal_4"
HAnimJoint699.center = [-0.1153125,0.009369,0.11369251]
HAnimJoint699.ulimit = [0,0,0]
HAnimJoint699.llimit = [0,0,0]
HAnimSegment700 = x3d.HAnimSegment()
HAnimSegment700.name = "r_tarsal_distal_phalanx_4"
HAnimSegment700.DEF = "hanim_r_tarsal_distal_phalanx_4"
Shape701 = x3d.Shape()
Shape701.DEF = "r_tarsal_distal_phalanx_4_Shape"
Appearance702 = x3d.Appearance()
Material703 = x3d.Material()
Material703.USE = "SurfaceDefault"

Appearance702.material = Material703
ImageTexture704 = x3d.ImageTexture()
ImageTexture704.USE = "JinLOA4TextureAtlas"

Appearance702.texture = ImageTexture704

Shape701.appearance = Appearance702
IndexedFaceSet705 = x3d.IndexedFaceSet()
IndexedFaceSet705.coordIndex = [0,3,2,-1,2,1,0,-1,5,4,2,-1,2,3,5,-1,0,6,7,-1,7,3,0,-1,1,8,6,-1,6,0,1,-1,9,8,1,-1,1,2,9,-1,4,10,9,-1,9,2,4,-1,11,10,4,-1,4,5,11,-1,7,11,5,-1,5,3,7,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,7,6,13,-1,13,12,7,-1,6,8,14,-1,14,13,6,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,7,12,-1,12,17,11,-1]
IndexedFaceSet705.creaseAngle = 3.14159
IndexedFaceSet705.texCoordIndex = [0,3,2,-1,2,1,0,-1,5,4,2,-1,2,3,5,-1,0,8,9,-1,9,3,0,-1,1,10,8,-1,8,0,1,-1,11,10,1,-1,1,2,11,-1,4,12,11,-1,11,2,4,-1,14,13,7,-1,7,6,14,-1,9,15,5,-1,5,3,9,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,9,8,17,-1,17,16,9,-1,8,10,18,-1,18,17,8,-1,10,11,19,-1,19,18,10,-1,11,12,20,-1,20,19,11,-1,13,14,21,-1,21,20,13,-1,15,9,16,-1,16,21,15,-1]
Coordinate706 = x3d.Coordinate()

IndexedFaceSet705.coord = Coordinate706
TextureCoordinate707 = x3d.TextureCoordinate()

IndexedFaceSet705.texCoord = TextureCoordinate707

Shape701.geometry = IndexedFaceSet705

HAnimSegment700.children.append(Shape701)
Group708 = x3d.Group()
Group708.DEF = "r_tarsal_distal_phalanx_4_Sites"
"""(r_tarsal_distal_phalanx_4_tip -0.142 0.011 0.178)"""
HAnimSite709 = x3d.HAnimSite()
HAnimSite709.name = "r_tarsal_distal_phalanx_4_tip"
HAnimSite709.DEF = "hanim_r_tarsal_distal_phalanx_4_tip"
HAnimSite709.translation = [-0.115,0.016,0.13]
TouchSensor710 = x3d.TouchSensor()
TouchSensor710.description = "HAnimSite r_tarsal_distal_phalanx_4_tip 119"

HAnimSite709.children.append(TouchSensor710)
Shape711 = x3d.Shape()
Shape711.USE = "HAnimSiteShape"

HAnimSite709.children.append(Shape711)

Group708.children.append(HAnimSite709)

HAnimSegment700.children.append(Group708)

HAnimJoint699.children.append(HAnimSegment700)

HAnimJoint689.children.append(HAnimJoint699)

HAnimJoint679.children.append(HAnimJoint689)

HAnimJoint669.children.append(HAnimJoint679)

HAnimJoint659.children.append(HAnimJoint669)
HAnimJoint712 = x3d.HAnimJoint()
HAnimJoint712.name = "r_tarsometatarsal_5"
HAnimJoint712.DEF = "hanim_r_tarsometatarsal_5"
HAnimJoint712.center = [-0.12044251,0.020945251,0.03474]
HAnimJoint712.ulimit = [0,0,0]
HAnimJoint712.llimit = [0,0,0]
HAnimSegment713 = x3d.HAnimSegment()
HAnimSegment713.name = "r_metatarsal_5"
HAnimSegment713.DEF = "hanim_r_metatarsal_5"
Shape714 = x3d.Shape()
Shape714.DEF = "r_metatarsal_5_Shape"
Appearance715 = x3d.Appearance()
Material716 = x3d.Material()
Material716.USE = "SurfaceDefault"

Appearance715.material = Material716
ImageTexture717 = x3d.ImageTexture()
ImageTexture717.USE = "JinLOA4TextureAtlas"

Appearance715.texture = ImageTexture717

Shape714.appearance = Appearance715
IndexedFaceSet718 = x3d.IndexedFaceSet()
IndexedFaceSet718.coordIndex = [0,1,10,-1,2,12,17,-1,17,9,2,-1,6,0,11,-1,11,14,6,-1,2,1,7,-1,7,8,2,-1,3,4,19,-1,19,18,3,-1,13,22,20,-1,20,5,13,-1,5,4,10,-1,10,9,5,-1,6,7,1,-1,1,0,6,-1,8,15,12,-1,12,2,8,-1,9,17,13,-1,13,5,9,-1,0,3,16,-1,16,11,0,-1,9,10,1,-1,1,2,9,-1,3,0,10,-1,10,4,3,-1,16,3,18,-1,18,21,16,-1,19,4,5,-1,5,20,19,-1,33,34,35,-1,33,35,36,-1,32,33,36,-1,27,24,25,-1,25,26,27,-1,39,40,41,-1,45,39,41,-1,44,45,41,-1,28,29,23,-1,28,23,24,-1,24,27,28,-1,29,30,31,-1,31,23,29,-1,11,16,24,-1,24,23,11,-1,16,21,25,-1,25,24,16,-1,32,36,37,-1,37,38,32,-1,22,13,27,-1,27,26,22,-1,13,17,28,-1,28,27,13,-1,17,12,29,-1,29,28,17,-1,12,15,30,-1,30,29,12,-1,44,41,42,-1,42,43,44,-1,14,11,23,-1,23,31,14,-1,21,18,33,-1,33,32,21,-1,18,19,34,-1,34,33,18,-1,19,20,35,-1,35,34,19,-1,20,22,36,-1,36,35,20,-1,22,26,37,-1,37,36,22,-1,26,25,38,-1,38,37,26,-1,25,21,32,-1,32,38,25,-1,7,6,40,-1,40,39,7,-1,6,14,41,-1,41,40,6,-1,14,31,42,-1,42,41,14,-1,31,30,43,-1,43,42,31,-1,30,15,44,-1,44,43,30,-1,15,8,45,-1,45,44,15,-1,8,7,39,-1,39,45,8,-1]
IndexedFaceSet718.creaseAngle = 3.14159
IndexedFaceSet718.texCoordIndex = [0,1,10,-1,2,12,17,-1,17,9,2,-1,6,0,11,-1,11,14,6,-1,2,1,7,-1,7,8,2,-1,3,4,19,-1,19,18,3,-1,13,22,20,-1,20,5,13,-1,5,4,10,-1,10,9,5,-1,6,7,1,-1,1,0,6,-1,8,15,12,-1,12,2,8,-1,9,17,13,-1,13,5,9,-1,0,3,16,-1,16,11,0,-1,9,10,1,-1,1,2,9,-1,3,0,10,-1,10,4,3,-1,16,3,18,-1,18,21,16,-1,19,4,5,-1,5,20,19,-1,33,34,35,-1,33,35,36,-1,32,33,36,-1,27,24,25,-1,25,26,27,-1,39,40,41,-1,45,39,41,-1,44,45,41,-1,28,29,11,-1,28,23,24,-1,24,27,28,-1,29,30,31,-1,31,23,29,-1,11,16,24,-1,24,23,11,-1,16,21,25,-1,25,24,16,-1,32,36,37,-1,37,38,32,-1,22,13,27,-1,27,26,22,-1,13,17,28,-1,28,27,13,-1,17,12,29,-1,29,28,17,-1,12,15,30,-1,30,29,12,-1,44,41,42,-1,42,43,44,-1,14,11,23,-1,23,31,14,-1,21,18,33,-1,33,32,21,-1,18,19,34,-1,34,33,18,-1,19,20,35,-1,35,34,19,-1,20,22,36,-1,36,35,20,-1,22,26,37,-1,37,36,22,-1,26,25,38,-1,38,37,26,-1,25,21,32,-1,32,38,25,-1,7,6,40,-1,40,39,7,-1,6,14,41,-1,41,40,6,-1,14,31,42,-1,42,41,14,-1,31,30,43,-1,43,42,31,-1,30,15,44,-1,44,43,30,-1,15,8,45,-1,45,44,15,-1,8,7,39,-1,39,45,8,-1]
Coordinate719 = x3d.Coordinate()

IndexedFaceSet718.coord = Coordinate719
TextureCoordinate720 = x3d.TextureCoordinate()

IndexedFaceSet718.texCoord = TextureCoordinate720

Shape714.geometry = IndexedFaceSet718

HAnimSegment713.children.append(Shape714)
Group721 = x3d.Group()
Group721.DEF = "r_metatarsal__Sites"
"""None"""

HAnimSegment713.children.append(Group721)

HAnimJoint712.children.append(HAnimSegment713)
HAnimJoint722 = x3d.HAnimJoint()
HAnimJoint722.name = "r_metatarsophalangeal_5"
HAnimJoint722.DEF = "hanim_r_metatarsophalangeal_5"
HAnimJoint722.center = [-0.12368251,0.013671,0.0865575]
HAnimJoint722.ulimit = [0,0,0]
HAnimJoint722.llimit = [0,0,0]
HAnimSegment723 = x3d.HAnimSegment()
HAnimSegment723.name = "r_tarsal_proximal_phalanx_5"
HAnimSegment723.DEF = "hanim_r_tarsal_proximal_phalanx_5"
Shape724 = x3d.Shape()
Shape724.DEF = "r_tarsal_proximal_phalanx_5_Shape"
Appearance725 = x3d.Appearance()
Material726 = x3d.Material()
Material726.USE = "SurfaceDefault"

Appearance725.material = Material726
ImageTexture727 = x3d.ImageTexture()
ImageTexture727.USE = "JinLOA4TextureAtlas"

Appearance725.texture = ImageTexture727

Shape724.appearance = Appearance725
IndexedFaceSet728 = x3d.IndexedFaceSet()
IndexedFaceSet728.coordIndex = [2,3,11,-1,11,10,2,-1,0,5,14,-1,14,12,0,-1,2,10,13,-1,13,6,2,-1,0,12,11,-1,11,3,0,-1,15,5,0,-1,0,16,15,-1,17,3,2,-1,2,1,17,-1,16,0,3,-1,3,17,16,-1,2,6,4,-1,4,1,2,-1,6,8,4,-1,7,15,18,-1,18,9,7,-1,8,9,18,-1,18,4,8,-1,7,5,15,-1,1,19,20,-1,20,17,1,-1,17,20,21,-1,21,16,17,-1,16,21,22,-1,22,15,16,-1,22,23,18,-1,18,15,22,-1,23,24,4,-1,4,18,23,-1,24,19,1,-1,1,4,24,-1,25,26,27,-1,25,27,28,-1,29,25,28,-1,24,23,22,-1,22,21,20,-1,24,22,20,-1,19,24,20,-1,30,31,32,-1,32,33,30,-1,33,34,35,-1,35,36,30,-1,33,35,30,-1,10,11,26,-1,26,25,10,-1,11,12,27,-1,27,26,11,-1,12,14,28,-1,28,27,12,-1,14,13,29,-1,29,28,14,-1,13,10,25,-1,25,29,13,-1,6,13,31,-1,31,30,6,-1,13,14,32,-1,32,31,13,-1,14,5,33,-1,33,32,14,-1,5,7,34,-1,34,33,5,-1,7,9,35,-1,35,34,7,-1,9,8,36,-1,36,35,9,-1,8,6,30,-1,30,36,8,-1]
IndexedFaceSet728.creaseAngle = 3.14159
IndexedFaceSet728.texCoordIndex = [0,1,24,-1,24,23,0,-1,3,2,27,-1,27,25,3,-1,0,23,26,-1,26,4,0,-1,3,25,24,-1,24,1,3,-1,5,8,7,-1,7,6,5,-1,9,12,11,-1,11,10,9,-1,6,7,14,-1,14,13,6,-1,11,15,17,-1,17,10,11,-1,15,18,17,-1,16,5,20,-1,20,19,16,-1,18,21,22,-1,22,17,18,-1,16,8,5,-1,31,34,35,-1,35,30,31,-1,30,35,36,-1,36,29,30,-1,29,36,37,-1,37,28,29,-1,37,38,33,-1,33,28,37,-1,38,39,32,-1,32,33,38,-1,39,34,31,-1,31,32,39,-1,40,41,42,-1,40,42,43,-1,44,40,43,-1,39,38,37,-1,37,36,35,-1,39,37,35,-1,34,39,35,-1,45,46,47,-1,47,48,45,-1,48,49,50,-1,50,51,45,-1,48,50,45,-1,23,24,41,-1,41,40,23,-1,24,25,42,-1,42,41,24,-1,25,27,43,-1,43,42,25,-1,27,26,44,-1,44,43,27,-1,26,23,40,-1,40,44,26,-1,4,26,46,-1,46,45,4,-1,26,27,47,-1,47,46,26,-1,27,2,48,-1,48,47,27,-1,8,16,49,-1,49,48,8,-1,16,19,50,-1,50,49,16,-1,21,18,51,-1,51,50,21,-1,18,15,45,-1,45,51,18,-1]
Coordinate729 = x3d.Coordinate()

IndexedFaceSet728.coord = Coordinate729
TextureCoordinate730 = x3d.TextureCoordinate()

IndexedFaceSet728.texCoord = TextureCoordinate730

Shape724.geometry = IndexedFaceSet728

HAnimSegment723.children.append(Shape724)
Group731 = x3d.Group()
Group731.DEF = "r_tarsal_proximal_phalanx_5_Sites"
"""None"""

HAnimSegment723.children.append(Group731)

HAnimJoint722.children.append(HAnimSegment723)
HAnimJoint732 = x3d.HAnimJoint()
HAnimJoint732.name = "r_tarsal_proximal_interphalangeal_5"
HAnimJoint732.DEF = "hanim_r_tarsal_proximal_interphalangeal_5"
HAnimJoint732.center = [-0.126,0.01085625,0.09414]
HAnimJoint732.ulimit = [0,0,0]
HAnimJoint732.llimit = [0,0,0]
HAnimSegment733 = x3d.HAnimSegment()
HAnimSegment733.name = "r_tarsal_middle_phalanx_5"
HAnimSegment733.DEF = "hanim_r_tarsal_middle_phalanx_5"
Shape734 = x3d.Shape()
Shape734.DEF = "r_tarsal_middle_phalanx_5_Shape"
Appearance735 = x3d.Appearance()
Material736 = x3d.Material()
Material736.USE = "SurfaceDefault"

Appearance735.material = Material736
ImageTexture737 = x3d.ImageTexture()
ImageTexture737.USE = "JinLOA4TextureAtlas"

Appearance735.texture = ImageTexture737

Shape734.appearance = Appearance735
IndexedFaceSet738 = x3d.IndexedFaceSet()
IndexedFaceSet738.coordIndex = [6,0,1,-1,1,7,6,-1,7,1,2,-1,2,8,7,-1,8,2,3,-1,3,9,8,-1,3,4,10,-1,10,9,3,-1,4,5,11,-1,11,10,4,-1,5,0,6,-1,6,11,5,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1,1,0,19,-1,19,18,1,-1,0,5,20,-1,20,19,0,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,1,18,-1,18,23,2,-1]
IndexedFaceSet738.creaseAngle = 3.14159
IndexedFaceSet738.texCoordIndex = [6,1,0,-1,0,7,6,-1,7,0,2,-1,2,8,7,-1,8,2,3,-1,3,9,8,-1,3,4,10,-1,10,9,3,-1,4,5,11,-1,11,10,4,-1,5,1,6,-1,6,11,5,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1,0,1,19,-1,19,18,0,-1,1,5,20,-1,20,19,1,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,18,-1,18,23,2,-1]
Coordinate739 = x3d.Coordinate()

IndexedFaceSet738.coord = Coordinate739
TextureCoordinate740 = x3d.TextureCoordinate()

IndexedFaceSet738.texCoord = TextureCoordinate740

Shape734.geometry = IndexedFaceSet738

HAnimSegment733.children.append(Shape734)
Group741 = x3d.Group()
Group741.DEF = "r_tarsal_middle_phalanx_5_Sites"
"""(r_metatarsal_phalanx_5_pt x y z)"""
HAnimSite742 = x3d.HAnimSite()
HAnimSite742.name = "r_metatarsal_phalanx_5_pt"
HAnimSite742.DEF = "hanim_r_metatarsal_phalanx_5_pt"
HAnimSite742.translation = [-0.12,0.02,0.04]
TouchSensor743 = x3d.TouchSensor()
TouchSensor743.description = "HAnimSite r_metatarsal_phalanx_5_pt 60"

HAnimSite742.children.append(TouchSensor743)
Shape744 = x3d.Shape()
Shape744.USE = "HAnimSiteShape"

HAnimSite742.children.append(Shape744)

Group741.children.append(HAnimSite742)

HAnimSegment733.children.append(Group741)

HAnimJoint732.children.append(HAnimSegment733)
HAnimJoint745 = x3d.HAnimJoint()
HAnimJoint745.name = "r_tarsal_distal_interphalangeal_5"
HAnimJoint745.DEF = "hanim_r_tarsal_distal_interphalangeal_5"
HAnimJoint745.center = [-0.1269225,0.008563501,0.10188]
HAnimJoint745.ulimit = [0,0,0]
HAnimJoint745.llimit = [0,0,0]
HAnimSegment746 = x3d.HAnimSegment()
HAnimSegment746.name = "r_tarsal_distal_phalanx_5"
HAnimSegment746.DEF = "hanim_r_tarsal_distal_phalanx_5"
Shape747 = x3d.Shape()
Shape747.DEF = "r_tarsal_distal_phalanx_5_Shape"
Appearance748 = x3d.Appearance()
Material749 = x3d.Material()
Material749.USE = "SurfaceDefault"

Appearance748.material = Material749
ImageTexture750 = x3d.ImageTexture()
ImageTexture750.USE = "JinLOA4TextureAtlas"

Appearance748.texture = ImageTexture750

Shape747.appearance = Appearance748
IndexedFaceSet751 = x3d.IndexedFaceSet()
IndexedFaceSet751.coordIndex = [2,1,4,-1,4,3,2,-1,0,5,4,-1,4,1,0,-1,7,6,0,-1,0,1,7,-1,2,8,7,-1,7,1,2,-1,9,8,2,-1,2,3,9,-1,10,9,3,-1,3,4,10,-1,5,11,10,-1,10,4,5,-1,0,6,11,-1,11,5,0,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1]
IndexedFaceSet751.creaseAngle = 3.14159
IndexedFaceSet751.texCoordIndex = [1,0,3,-1,3,2,1,-1,5,4,3,-1,3,0,5,-1,9,8,5,-1,5,0,9,-1,1,10,9,-1,9,0,1,-1,12,11,7,-1,7,6,12,-1,14,13,2,-1,2,3,14,-1,4,15,14,-1,14,3,4,-1,5,8,15,-1,15,4,5,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,11,12,19,-1,19,18,11,-1,13,14,20,-1,20,19,13,-1,14,15,21,-1,21,20,14,-1,15,8,16,-1,16,21,15,-1]
Coordinate752 = x3d.Coordinate()

IndexedFaceSet751.coord = Coordinate752
TextureCoordinate753 = x3d.TextureCoordinate()

IndexedFaceSet751.texCoord = TextureCoordinate753

Shape747.geometry = IndexedFaceSet751

HAnimSegment746.children.append(Shape747)
Group754 = x3d.Group()
Group754.DEF = "r_tarsal_distal_phalanx_5_Sites"
"""(r_tarsal_distal_phalanx_5_tip -0.154 0.010 0.168)"""
HAnimSite755 = x3d.HAnimSite()
HAnimSite755.name = "r_tarsal_distal_phalanx_5_tip"
HAnimSite755.DEF = "hanim_r_tarsal_distal_phalanx_5_tip"
HAnimSite755.translation = [-0.125,0.016,0.115]
TouchSensor756 = x3d.TouchSensor()
TouchSensor756.description = "HAnimSite r_tarsal_distal_phalanx_5_tip 120"

HAnimSite755.children.append(TouchSensor756)
Shape757 = x3d.Shape()
Shape757.USE = "HAnimSiteShape"

HAnimSite755.children.append(Shape757)

Group754.children.append(HAnimSite755)

HAnimSegment746.children.append(Group754)

HAnimJoint745.children.append(HAnimSegment746)

HAnimJoint732.children.append(HAnimJoint745)

HAnimJoint722.children.append(HAnimJoint732)

HAnimJoint712.children.append(HAnimJoint722)

HAnimJoint659.children.append(HAnimJoint712)

HAnimJoint649.children.append(HAnimJoint659)

HAnimJoint471.children.append(HAnimJoint649)

HAnimJoint452.children.append(HAnimJoint471)

HAnimJoint430.children.append(HAnimJoint452)

HAnimJoint62.children.append(HAnimJoint430)
HAnimJoint758 = x3d.HAnimJoint()
HAnimJoint758.name = "vl5"
HAnimJoint758.DEF = "hanim_vl5"
HAnimJoint758.center = [0,0.92542505,-0.013763251]
HAnimJoint758.ulimit = [0,0,0]
HAnimJoint758.llimit = [0,0,0]
HAnimSegment759 = x3d.HAnimSegment()
HAnimSegment759.name = "l5"
HAnimSegment759.DEF = "hanim_l5"
Shape760 = x3d.Shape()
Shape760.DEF = "l5_Shape"
Appearance761 = x3d.Appearance()
Material762 = x3d.Material()
Material762.USE = "SurfaceDefault"

Appearance761.material = Material762
ImageTexture763 = x3d.ImageTexture()
ImageTexture763.USE = "JinLOA4TextureAtlas"

Appearance761.texture = ImageTexture763

Shape760.appearance = Appearance761
IndexedFaceSet764 = x3d.IndexedFaceSet()
IndexedFaceSet764.coordIndex = [0,10,11,-1,11,5,0,-1,1,0,5,-1,5,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,1,6,-1,6,9,4,-1,2,7,26,-1,26,27,2,-1,8,5,11,-1,11,7,8,-1,9,6,5,-1,5,8,9,-1,11,10,13,-1,13,12,11,-1,7,11,12,-1,12,26,7,-1,16,15,14,-1,14,17,16,-1,19,18,15,-1,15,16,19,-1,22,21,20,-1,20,23,22,-1,23,20,24,-1,24,25,23,-1,25,24,18,-1,18,19,25,-1,22,27,26,-1,26,21,22,-1,20,21,14,-1,14,15,20,-1,24,20,15,-1,15,18,24,-1,14,12,13,-1,13,17,14,-1,21,26,12,-1,12,14,21,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,10,0,29,-1,29,28,10,-1,0,1,30,-1,30,29,0,-1,1,4,31,-1,31,30,1,-1,4,3,32,-1,32,31,4,-1,3,2,33,-1,33,32,3,-1,2,27,34,-1,34,33,2,-1,27,22,35,-1,35,34,27,-1,22,23,36,-1,36,35,22,-1,23,25,37,-1,37,36,23,-1,25,19,38,-1,38,37,25,-1,19,16,39,-1,39,38,19,-1,16,17,40,-1,40,39,16,-1,17,13,41,-1,41,40,17,-1,13,10,28,-1,28,41,13,-1]
IndexedFaceSet764.creaseAngle = 3.14159
IndexedFaceSet764.texCoordIndex = [1,0,6,-1,6,7,1,-1,2,1,7,-1,7,8,2,-1,4,3,9,-1,9,10,4,-1,3,5,11,-1,11,9,3,-1,5,2,8,-1,8,11,5,-1,12,13,15,-1,15,14,12,-1,9,7,6,-1,6,10,9,-1,11,8,7,-1,7,9,11,-1,6,0,17,-1,17,18,6,-1,10,6,18,-1,18,16,10,-1,21,20,19,-1,19,22,21,-1,24,23,20,-1,20,21,24,-1,27,26,25,-1,25,28,27,-1,28,25,29,-1,29,30,28,-1,30,29,23,-1,23,24,30,-1,31,34,33,-1,33,32,31,-1,25,26,19,-1,19,20,25,-1,29,25,20,-1,20,23,29,-1,19,35,36,-1,36,22,19,-1,26,37,35,-1,35,19,26,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,44,45,46,-1,43,44,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,43,46,50,-1,39,43,50,-1,39,50,51,-1,39,51,38,-1,0,1,39,-1,39,38,0,-1,1,2,40,-1,40,39,1,-1,2,5,41,-1,41,40,2,-1,5,3,42,-1,42,41,5,-1,3,4,43,-1,43,42,3,-1,12,14,44,-1,44,43,12,-1,34,31,45,-1,45,44,34,-1,27,28,46,-1,46,45,27,-1,28,30,47,-1,47,46,28,-1,30,24,48,-1,48,47,30,-1,24,21,49,-1,49,48,24,-1,21,22,50,-1,50,49,21,-1,22,36,51,-1,51,50,22,-1,17,0,38,-1,38,51,17,-1]
Coordinate765 = x3d.Coordinate()

IndexedFaceSet764.coord = Coordinate765
TextureCoordinate766 = x3d.TextureCoordinate()

IndexedFaceSet764.texCoord = TextureCoordinate766

Shape760.geometry = IndexedFaceSet764

HAnimSegment759.children.append(Shape760)
Group767 = x3d.Group()
Group767.DEF = "l5_Sites"
"""(spine_1_middle_back x y z) (spine_2_lower_back_pt x y z) (waist_preferred_anterior_pt x y z) (waist_preferred_posterior_pt 0.2900 1.0915 -0.1091) (navel 0.0069 1.0966 0.1017)"""
HAnimSite768 = x3d.HAnimSite()
HAnimSite768.name = "spine_1_middle_back_pt"
HAnimSite768.DEF = "hanim_spine_1_middle_back_pt"
HAnimSite768.translation = [0,1,-0.1]
TouchSensor769 = x3d.TouchSensor()
TouchSensor769.description = "HAnimSite spine_1_middle_back_pt 24"

HAnimSite768.children.append(TouchSensor769)
Shape770 = x3d.Shape()
Shape770.USE = "HAnimSiteShape"

HAnimSite768.children.append(Shape770)

Group767.children.append(HAnimSite768)
HAnimSite771 = x3d.HAnimSite()
HAnimSite771.name = "spine_2_lower_back_pt"
HAnimSite771.DEF = "hanim_spine_2_lower_back_pt"
HAnimSite771.translation = [0,0.95,-0.1]
TouchSensor772 = x3d.TouchSensor()
TouchSensor772.description = "HAnimSite spine_2_lower_back_pt 25"

HAnimSite771.children.append(TouchSensor772)
Shape773 = x3d.Shape()
Shape773.USE = "HAnimSiteShape"

HAnimSite771.children.append(Shape773)

Group767.children.append(HAnimSite771)
HAnimSite774 = x3d.HAnimSite()
HAnimSite774.name = "waist_preferred_anterior_pt"
HAnimSite774.DEF = "hanim_waist_preferred_anterior_pt"
HAnimSite774.translation = [0,0.9,0.1]
TouchSensor775 = x3d.TouchSensor()
TouchSensor775.description = "HAnimSiteA waist_preferred_anterior_pt 26"

HAnimSite774.children.append(TouchSensor775)
Shape776 = x3d.Shape()
Shape776.USE = "HAnimSiteShape"

HAnimSite774.children.append(Shape776)

Group767.children.append(HAnimSite774)
HAnimSite777 = x3d.HAnimSite()
HAnimSite777.name = "waist_preferred_posterior_pt"
HAnimSite777.DEF = "hanim_waist_preferred_posterior_pt"
HAnimSite777.translation = [0,0.9,-0.1]
TouchSensor778 = x3d.TouchSensor()
TouchSensor778.description = "HAnimSite waist_preferred_posterior_pt 27"

HAnimSite777.children.append(TouchSensor778)
Shape779 = x3d.Shape()
Shape779.USE = "HAnimSiteShape"

HAnimSite777.children.append(Shape779)

Group767.children.append(HAnimSite777)
HAnimSite780 = x3d.HAnimSite()
HAnimSite780.name = "navel_pt"
HAnimSite780.DEF = "hanim_navel_pt"
HAnimSite780.translation = [0,0.9,-0.1]
TouchSensor781 = x3d.TouchSensor()
TouchSensor781.description = "HAnimSite navel 84"

HAnimSite780.children.append(TouchSensor781)
Shape782 = x3d.Shape()
Shape782.USE = "HAnimSiteShape"

HAnimSite780.children.append(Shape782)

Group767.children.append(HAnimSite780)

HAnimSegment759.children.append(Group767)

HAnimJoint758.children.append(HAnimSegment759)
HAnimJoint783 = x3d.HAnimJoint()
HAnimJoint783.name = "vl4"
HAnimJoint783.DEF = "hanim_vl4"
HAnimJoint783.center = [0,0.94972503,-0.013763251]
HAnimJoint783.ulimit = [0,0,0]
HAnimJoint783.llimit = [0,0,0]
HAnimSegment784 = x3d.HAnimSegment()
HAnimSegment784.name = "l4"
HAnimSegment784.DEF = "hanim_l4"
Shape785 = x3d.Shape()
Shape785.DEF = "l4_Shape"
Appearance786 = x3d.Appearance()
Material787 = x3d.Material()
Material787.USE = "SurfaceDefault"

Appearance786.material = Material787
ImageTexture788 = x3d.ImageTexture()
ImageTexture788.USE = "JinLOA4TextureAtlas"

Appearance786.texture = ImageTexture788

Shape785.appearance = Appearance786
IndexedFaceSet789 = x3d.IndexedFaceSet()
IndexedFaceSet789.coordIndex = [11,6,0,-1,0,3,11,-1,7,1,0,-1,0,6,7,-1,9,8,2,-1,2,4,9,-1,10,9,4,-1,4,5,10,-1,10,5,1,-1,1,7,10,-1,25,11,3,-1,3,26,25,-1,2,8,12,-1,12,27,2,-1,13,16,15,-1,15,14,13,-1,17,14,15,-1,15,18,17,-1,19,22,21,-1,21,20,19,-1,23,24,22,-1,22,19,23,-1,23,17,18,-1,18,24,23,-1,25,26,16,-1,16,13,25,-1,21,27,12,-1,12,20,21,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,48,50,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,48,51,55,-1,44,48,55,-1,43,44,55,-1,43,55,42,-1,3,0,29,-1,29,28,3,-1,0,1,30,-1,30,29,0,-1,1,5,31,-1,31,30,1,-1,5,4,32,-1,32,31,5,-1,4,2,33,-1,33,32,4,-1,2,27,34,-1,34,33,2,-1,27,21,35,-1,35,34,27,-1,21,22,36,-1,36,35,21,-1,22,24,37,-1,37,36,22,-1,24,18,38,-1,38,37,24,-1,18,15,39,-1,39,38,18,-1,15,16,40,-1,40,39,15,-1,16,26,41,-1,41,40,16,-1,26,3,28,-1,28,41,26,-1,6,11,43,-1,43,42,6,-1,11,25,44,-1,44,43,11,-1,25,13,45,-1,45,44,25,-1,13,14,46,-1,46,45,13,-1,14,17,47,-1,47,46,14,-1,17,23,48,-1,48,47,17,-1,23,19,49,-1,49,48,23,-1,19,20,50,-1,50,49,19,-1,20,12,51,-1,51,50,20,-1,12,8,52,-1,52,51,12,-1,8,9,53,-1,53,52,8,-1,9,10,54,-1,54,53,9,-1,10,7,55,-1,55,54,10,-1,7,6,42,-1,42,55,7,-1]
IndexedFaceSet789.creaseAngle = 3.14159
IndexedFaceSet789.texCoordIndex = [15,9,0,-1,0,4,15,-1,10,1,0,-1,0,9,10,-1,13,12,2,-1,2,5,13,-1,14,13,5,-1,5,6,14,-1,14,6,1,-1,1,10,14,-1,17,15,4,-1,4,7,17,-1,3,11,16,-1,16,8,3,-1,18,21,20,-1,20,19,18,-1,22,19,20,-1,20,23,22,-1,24,27,26,-1,26,25,24,-1,28,29,27,-1,27,24,28,-1,28,22,23,-1,23,29,28,-1,30,31,21,-1,21,18,30,-1,32,35,34,-1,34,33,32,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,37,41,48,-1,37,48,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,52,54,56,-1,56,57,58,-1,56,58,59,-1,59,60,61,-1,61,62,63,-1,59,61,63,-1,56,59,63,-1,52,56,63,-1,51,52,63,-1,51,63,50,-1,4,0,37,-1,37,36,4,-1,0,1,38,-1,38,37,0,-1,1,6,39,-1,39,38,1,-1,6,5,40,-1,40,39,6,-1,5,2,41,-1,41,40,5,-1,3,8,42,-1,42,41,3,-1,35,32,43,-1,43,42,35,-1,26,27,44,-1,44,43,26,-1,27,29,45,-1,45,44,27,-1,29,23,46,-1,46,45,29,-1,23,20,47,-1,47,46,23,-1,20,21,48,-1,48,47,20,-1,21,31,49,-1,49,48,21,-1,7,4,36,-1,36,49,7,-1,9,15,51,-1,51,50,9,-1,15,17,52,-1,52,51,15,-1,30,18,53,-1,53,52,30,-1,18,19,54,-1,54,53,18,-1,19,22,55,-1,55,54,19,-1,22,28,56,-1,56,55,22,-1,28,24,57,-1,57,56,28,-1,24,25,58,-1,58,57,24,-1,33,34,59,-1,59,58,33,-1,16,11,60,-1,60,59,16,-1,12,13,61,-1,61,60,12,-1,13,14,62,-1,62,61,13,-1,14,10,63,-1,63,62,14,-1,10,9,50,-1,50,63,10,-1]
Coordinate790 = x3d.Coordinate()

IndexedFaceSet789.coord = Coordinate790
TextureCoordinate791 = x3d.TextureCoordinate()

IndexedFaceSet789.texCoord = TextureCoordinate791

Shape785.geometry = IndexedFaceSet789

HAnimSegment784.children.append(Shape785)
Group792 = x3d.Group()
Group792.DEF = "l4_Sites"
"""None"""

HAnimSegment784.children.append(Group792)

HAnimJoint783.children.append(HAnimSegment784)
HAnimJoint793 = x3d.HAnimJoint()
HAnimJoint793.name = "vl3"
HAnimJoint793.DEF = "hanim_vl3"
HAnimJoint793.center = [0,0.96592504,-0.013763251]
HAnimJoint793.ulimit = [0,0,0]
HAnimJoint793.llimit = [0,0,0]
HAnimSegment794 = x3d.HAnimSegment()
HAnimSegment794.name = "l3"
HAnimSegment794.DEF = "hanim_l3"
Shape795 = x3d.Shape()
Shape795.DEF = "l3_Shape"
Appearance796 = x3d.Appearance()
Material797 = x3d.Material()
Material797.USE = "SurfaceDefault"

Appearance796.material = Material797
ImageTexture798 = x3d.ImageTexture()
ImageTexture798.USE = "JinLOA4TextureAtlas"

Appearance796.texture = ImageTexture798

Shape795.appearance = Appearance796
IndexedFaceSet799 = x3d.IndexedFaceSet()
IndexedFaceSet799.coordIndex = [1,8,15,-1,15,16,1,-1,0,4,9,-1,9,6,0,-1,7,5,0,-1,0,6,7,-1,1,2,10,-1,10,8,1,-1,2,3,11,-1,11,10,2,-1,11,3,5,-1,5,7,11,-1,4,27,12,-1,12,9,4,-1,13,16,15,-1,15,14,13,-1,18,17,20,-1,20,19,18,-1,21,17,18,-1,18,22,21,-1,13,14,24,-1,24,23,13,-1,23,24,26,-1,26,25,23,-1,26,21,22,-1,22,25,26,-1,19,20,12,-1,12,27,19,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,48,50,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,48,51,55,-1,44,48,55,-1,43,44,55,-1,43,55,42,-1,4,0,29,-1,29,28,4,-1,0,5,30,-1,30,29,0,-1,5,3,31,-1,31,30,5,-1,3,2,32,-1,32,31,3,-1,2,1,33,-1,33,32,2,-1,1,16,34,-1,34,33,1,-1,16,13,35,-1,35,34,16,-1,13,23,36,-1,36,35,13,-1,23,25,37,-1,37,36,23,-1,25,22,38,-1,38,37,25,-1,22,18,39,-1,39,38,22,-1,18,19,40,-1,40,39,18,-1,19,27,41,-1,41,40,19,-1,27,4,28,-1,28,41,27,-1,6,9,43,-1,43,42,6,-1,9,12,44,-1,44,43,9,-1,12,20,45,-1,45,44,12,-1,20,17,46,-1,46,45,20,-1,17,21,47,-1,47,46,17,-1,21,26,48,-1,48,47,21,-1,26,24,49,-1,49,48,26,-1,24,14,50,-1,50,49,24,-1,14,15,51,-1,51,50,14,-1,15,8,52,-1,52,51,15,-1,8,10,53,-1,53,52,8,-1,10,11,54,-1,54,53,10,-1,11,7,55,-1,55,54,11,-1,7,6,42,-1,42,55,7,-1]
IndexedFaceSet799.creaseAngle = 3.14159
IndexedFaceSet799.texCoordIndex = [4,11,17,-1,17,7,4,-1,0,1,13,-1,13,9,0,-1,10,2,0,-1,0,9,10,-1,3,5,14,-1,14,12,3,-1,5,6,15,-1,15,14,5,-1,15,6,2,-1,2,10,15,-1,1,8,16,-1,16,13,1,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,26,22,23,-1,23,27,26,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,33,26,27,-1,27,32,33,-1,24,25,35,-1,35,34,24,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,37,41,48,-1,37,48,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,52,54,56,-1,56,57,58,-1,56,58,59,-1,59,60,61,-1,61,62,63,-1,59,61,63,-1,56,59,63,-1,52,56,63,-1,51,52,63,-1,51,63,50,-1,1,0,37,-1,37,36,1,-1,0,2,38,-1,38,37,0,-1,2,6,39,-1,39,38,2,-1,6,5,40,-1,40,39,6,-1,5,3,41,-1,41,40,5,-1,4,7,42,-1,42,41,4,-1,21,18,43,-1,43,42,21,-1,29,30,44,-1,44,43,29,-1,30,32,45,-1,45,44,30,-1,32,27,46,-1,46,45,32,-1,27,23,47,-1,47,46,27,-1,23,24,48,-1,48,47,23,-1,24,34,49,-1,49,48,24,-1,8,1,36,-1,36,49,8,-1,9,13,51,-1,51,50,9,-1,13,16,52,-1,52,51,13,-1,35,25,53,-1,53,52,35,-1,25,22,54,-1,54,53,25,-1,22,26,55,-1,55,54,22,-1,26,33,56,-1,56,55,26,-1,33,31,57,-1,57,56,33,-1,31,28,58,-1,58,57,31,-1,19,20,59,-1,59,58,19,-1,17,11,60,-1,60,59,17,-1,12,14,61,-1,61,60,12,-1,14,15,62,-1,62,61,14,-1,15,10,63,-1,63,62,15,-1,10,9,50,-1,50,63,10,-1]
Coordinate800 = x3d.Coordinate()

IndexedFaceSet799.coord = Coordinate800
TextureCoordinate801 = x3d.TextureCoordinate()

IndexedFaceSet799.texCoord = TextureCoordinate801

Shape795.geometry = IndexedFaceSet799

HAnimSegment794.children.append(Shape795)
Group802 = x3d.Group()
Group802.DEF = "l3_Sites"
"""None"""

HAnimSegment794.children.append(Group802)

HAnimJoint793.children.append(HAnimSegment794)
HAnimJoint803 = x3d.HAnimJoint()
HAnimJoint803.name = "vl2"
HAnimJoint803.DEF = "hanim_vl2"
HAnimJoint803.center = [0,0.98235005,-0.013763251]
HAnimJoint803.ulimit = [0,0,0]
HAnimJoint803.llimit = [0,0,0]
HAnimSegment804 = x3d.HAnimSegment()
HAnimSegment804.name = "l2"
HAnimSegment804.DEF = "hanim_l2"
Shape805 = x3d.Shape()
Shape805.DEF = "l2_Shape"
Appearance806 = x3d.Appearance()
Material807 = x3d.Material()
Material807.USE = "SurfaceDefault"

Appearance806.material = Material807
ImageTexture808 = x3d.ImageTexture()
ImageTexture808.USE = "JinLOA4TextureAtlas"

Appearance806.texture = ImageTexture808

Shape805.appearance = Appearance806
IndexedFaceSet809 = x3d.IndexedFaceSet()
IndexedFaceSet809.coordIndex = [3,7,14,-1,14,15,3,-1,0,5,10,-1,10,6,0,-1,11,2,0,-1,0,6,11,-1,3,4,8,-1,8,7,3,-1,4,1,9,-1,9,8,4,-1,9,1,2,-1,2,11,9,-1,5,26,27,-1,27,10,5,-1,12,15,14,-1,14,13,12,-1,17,16,19,-1,19,18,17,-1,20,16,17,-1,17,21,20,-1,12,13,23,-1,23,22,12,-1,22,23,25,-1,25,24,22,-1,25,20,21,-1,21,24,25,-1,18,19,27,-1,27,26,18,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,48,50,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,48,51,55,-1,44,48,55,-1,43,44,55,-1,43,55,42,-1,5,0,29,-1,29,28,5,-1,0,2,30,-1,30,29,0,-1,2,1,31,-1,31,30,2,-1,1,4,32,-1,32,31,1,-1,4,3,33,-1,33,32,4,-1,3,15,34,-1,34,33,3,-1,15,12,35,-1,35,34,15,-1,12,22,36,-1,36,35,12,-1,22,24,37,-1,37,36,22,-1,24,21,38,-1,38,37,24,-1,21,17,39,-1,39,38,21,-1,17,18,40,-1,40,39,17,-1,18,26,41,-1,41,40,18,-1,26,5,28,-1,28,41,26,-1,6,10,43,-1,43,42,6,-1,10,27,44,-1,44,43,10,-1,27,19,45,-1,45,44,27,-1,19,16,46,-1,46,45,19,-1,16,20,47,-1,47,46,16,-1,20,25,48,-1,48,47,20,-1,25,23,49,-1,49,48,25,-1,23,13,50,-1,50,49,23,-1,13,14,51,-1,51,50,13,-1,14,7,52,-1,52,51,14,-1,7,8,53,-1,53,52,7,-1,8,9,54,-1,54,53,8,-1,9,11,55,-1,55,54,9,-1,11,6,42,-1,42,55,11,-1]
IndexedFaceSet809.creaseAngle = 3.14159
IndexedFaceSet809.texCoordIndex = [6,10,16,-1,16,7,6,-1,1,0,14,-1,14,9,1,-1,15,2,1,-1,1,9,15,-1,4,3,12,-1,12,11,4,-1,3,5,13,-1,13,12,3,-1,13,5,2,-1,2,15,13,-1,0,8,17,-1,17,14,0,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,26,22,23,-1,23,27,26,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,33,26,27,-1,27,32,33,-1,24,25,35,-1,35,34,24,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,52,54,56,-1,56,57,58,-1,56,58,59,-1,59,60,61,-1,61,62,63,-1,59,61,63,-1,56,59,63,-1,52,56,63,-1,51,52,63,-1,51,63,50,-1,0,1,37,-1,37,36,0,-1,1,2,38,-1,38,37,1,-1,2,5,39,-1,39,38,2,-1,5,3,40,-1,40,39,5,-1,3,4,41,-1,41,40,3,-1,6,7,42,-1,42,41,6,-1,21,18,43,-1,43,42,21,-1,29,30,44,-1,44,43,29,-1,30,32,45,-1,45,44,30,-1,32,27,46,-1,46,45,32,-1,27,23,47,-1,47,46,27,-1,23,24,48,-1,48,47,23,-1,24,34,49,-1,49,48,24,-1,8,0,36,-1,36,49,8,-1,9,14,51,-1,51,50,9,-1,14,17,52,-1,52,51,14,-1,35,25,53,-1,53,52,35,-1,25,22,54,-1,54,53,25,-1,22,26,55,-1,55,54,22,-1,26,33,56,-1,56,55,26,-1,33,31,57,-1,57,56,33,-1,31,28,58,-1,58,57,31,-1,19,20,59,-1,59,58,19,-1,16,10,60,-1,60,59,16,-1,11,12,61,-1,61,60,11,-1,12,13,62,-1,62,61,12,-1,13,15,63,-1,63,62,13,-1,15,9,50,-1,50,63,15,-1]
Coordinate810 = x3d.Coordinate()

IndexedFaceSet809.coord = Coordinate810
TextureCoordinate811 = x3d.TextureCoordinate()

IndexedFaceSet809.texCoord = TextureCoordinate811

Shape805.geometry = IndexedFaceSet809

HAnimSegment804.children.append(Shape805)
Group812 = x3d.Group()
Group812.DEF = "l2_Sites"
"""(l_rib_10_pt 0.0871 1.1925 0.0992) (r_rib_10_pt -0.0711 1.1941 0.1016)"""
HAnimSite813 = x3d.HAnimSite()
HAnimSite813.name = "l_rib_10_pt"
HAnimSite813.DEF = "hanim_l_rib_10_pt"
HAnimSite813.translation = [0.09,1,0.04]
TouchSensor814 = x3d.TouchSensor()
TouchSensor814.description = "HAnimSite l_rib_10_pt 28"

HAnimSite813.children.append(TouchSensor814)
Shape815 = x3d.Shape()
Shape815.USE = "HAnimSiteShape"

HAnimSite813.children.append(Shape815)

Group812.children.append(HAnimSite813)
HAnimSite816 = x3d.HAnimSite()
HAnimSite816.name = "r_rib_10_pt"
HAnimSite816.DEF = "hanim_r_rib_10_pt"
HAnimSite816.translation = [-0.09,1,0.04]
TouchSensor817 = x3d.TouchSensor()
TouchSensor817.description = "HAnimSite r_rib_10_pt 30"

HAnimSite816.children.append(TouchSensor817)
Shape818 = x3d.Shape()
Shape818.USE = "HAnimSiteShape"

HAnimSite816.children.append(Shape818)

Group812.children.append(HAnimSite816)

HAnimSegment804.children.append(Group812)

HAnimJoint803.children.append(HAnimSegment804)
HAnimJoint819 = x3d.HAnimJoint()
HAnimJoint819.name = "vl1"
HAnimJoint819.DEF = "hanim_vl1"
HAnimJoint819.center = [0,0.99967504,-0.013763251]
HAnimJoint819.ulimit = [0,0,0]
HAnimJoint819.llimit = [0,0,0]
HAnimSegment820 = x3d.HAnimSegment()
HAnimSegment820.name = "l1"
HAnimSegment820.DEF = "hanim_l1"
Shape821 = x3d.Shape()
Shape821.DEF = "l1_Shape"
Appearance822 = x3d.Appearance()
Material823 = x3d.Material()
Material823.USE = "SurfaceDefault"

Appearance822.material = Material823
ImageTexture824 = x3d.ImageTexture()
ImageTexture824.USE = "JinLOA4TextureAtlas"

Appearance822.texture = ImageTexture824

Shape821.appearance = Appearance822
IndexedFaceSet825 = x3d.IndexedFaceSet()
IndexedFaceSet825.coordIndex = [7,0,1,-1,1,14,7,-1,11,2,0,-1,0,7,11,-1,13,12,3,-1,3,4,13,-1,8,5,2,-1,2,11,8,-1,14,1,6,-1,6,9,14,-1,8,13,4,-1,4,5,8,-1,12,10,27,-1,27,3,12,-1,16,15,18,-1,18,17,16,-1,19,16,17,-1,17,20,19,-1,21,24,23,-1,23,22,21,-1,25,19,20,-1,20,26,25,-1,15,9,6,-1,6,18,15,-1,25,26,24,-1,24,21,25,-1,22,23,27,-1,27,10,22,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,44,45,46,-1,43,44,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,46,50,54,-1,43,46,54,-1,43,54,55,-1,43,55,42,-1,1,0,29,-1,29,28,1,-1,0,2,30,-1,30,29,0,-1,2,5,31,-1,31,30,2,-1,5,4,32,-1,32,31,5,-1,4,3,33,-1,33,32,4,-1,3,27,34,-1,34,33,3,-1,27,23,35,-1,35,34,27,-1,23,24,36,-1,36,35,23,-1,24,26,37,-1,37,36,24,-1,26,20,38,-1,38,37,26,-1,20,17,39,-1,39,38,20,-1,17,18,40,-1,40,39,17,-1,18,6,41,-1,41,40,18,-1,6,1,28,-1,28,41,6,-1,7,14,43,-1,43,42,7,-1,14,9,44,-1,44,43,14,-1,9,15,45,-1,45,44,9,-1,15,16,46,-1,46,45,15,-1,16,19,47,-1,47,46,16,-1,19,25,48,-1,48,47,19,-1,25,21,49,-1,49,48,25,-1,21,22,50,-1,50,49,21,-1,22,10,51,-1,51,50,22,-1,10,12,52,-1,52,51,10,-1,12,13,53,-1,53,52,12,-1,13,8,54,-1,54,53,13,-1,8,11,55,-1,55,54,8,-1,11,7,42,-1,42,55,11,-1]
IndexedFaceSet825.creaseAngle = 3.14159
IndexedFaceSet825.texCoordIndex = [9,0,1,-1,1,17,9,-1,13,2,0,-1,0,9,13,-1,16,15,3,-1,3,5,16,-1,10,6,2,-1,2,13,10,-1,17,1,8,-1,8,11,17,-1,10,16,5,-1,5,6,10,-1,14,12,7,-1,7,4,14,-1,19,18,21,-1,21,20,19,-1,22,19,20,-1,20,23,22,-1,24,27,26,-1,26,25,24,-1,28,22,23,-1,23,29,28,-1,18,30,31,-1,31,21,18,-1,28,29,27,-1,27,24,28,-1,33,32,35,-1,35,34,33,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,52,53,54,-1,51,52,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,54,58,62,-1,51,54,62,-1,51,62,63,-1,51,63,50,-1,1,0,37,-1,37,36,1,-1,0,2,38,-1,38,37,0,-1,2,6,39,-1,39,38,2,-1,6,5,40,-1,40,39,6,-1,5,3,41,-1,41,40,5,-1,4,7,42,-1,42,41,4,-1,35,32,43,-1,43,42,35,-1,26,27,44,-1,44,43,26,-1,27,29,45,-1,45,44,27,-1,29,23,46,-1,46,45,29,-1,23,20,47,-1,47,46,23,-1,20,21,48,-1,48,47,20,-1,21,31,49,-1,49,48,21,-1,8,1,36,-1,36,49,8,-1,9,17,51,-1,51,50,9,-1,17,11,52,-1,52,51,17,-1,30,18,53,-1,53,52,30,-1,18,19,54,-1,54,53,18,-1,19,22,55,-1,55,54,19,-1,22,28,56,-1,56,55,22,-1,28,24,57,-1,57,56,28,-1,24,25,58,-1,58,57,24,-1,33,34,59,-1,59,58,33,-1,12,14,60,-1,60,59,12,-1,15,16,61,-1,61,60,15,-1,16,10,62,-1,62,61,16,-1,10,13,63,-1,63,62,10,-1,13,9,50,-1,50,63,13,-1]
Coordinate826 = x3d.Coordinate()

IndexedFaceSet825.coord = Coordinate826
TextureCoordinate827 = x3d.TextureCoordinate()

IndexedFaceSet825.texCoord = TextureCoordinate827

Shape821.geometry = IndexedFaceSet825

HAnimSegment820.children.append(Shape821)
Group828 = x3d.Group()
Group828.DEF = "l1_Sites"
"""None"""

HAnimSegment820.children.append(Group828)

HAnimJoint819.children.append(HAnimSegment820)
HAnimJoint829 = x3d.HAnimJoint()
HAnimJoint829.name = "vt12"
HAnimJoint829.DEF = "hanim_vt12"
HAnimJoint829.center = [0,1.0230751,-0.013763251]
HAnimJoint829.ulimit = [0,0,0]
HAnimJoint829.llimit = [0,0,0]
HAnimSegment830 = x3d.HAnimSegment()
HAnimSegment830.name = "t12"
HAnimSegment830.DEF = "hanim_t12"
Shape831 = x3d.Shape()
Shape831.DEF = "t12_Shape"
Appearance832 = x3d.Appearance()
Material833 = x3d.Material()
Material833.USE = "SurfaceDefault"

Appearance832.material = Material833
ImageTexture834 = x3d.ImageTexture()
ImageTexture834.USE = "JinLOA4TextureAtlas"

Appearance832.texture = ImageTexture834

Shape831.appearance = Appearance832
IndexedFaceSet835 = x3d.IndexedFaceSet()
IndexedFaceSet835.coordIndex = [4,5,11,-1,11,10,4,-1,17,3,9,-1,9,20,17,-1,6,0,2,-1,2,7,6,-1,8,1,0,-1,0,6,8,-1,3,4,10,-1,10,9,3,-1,5,1,8,-1,8,11,5,-1,2,27,12,-1,12,7,2,-1,13,16,15,-1,15,14,13,-1,17,20,19,-1,19,18,17,-1,21,24,23,-1,23,22,21,-1,25,21,22,-1,22,26,25,-1,18,19,16,-1,16,13,18,-1,14,15,25,-1,25,26,14,-1,23,24,12,-1,12,27,23,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,44,45,46,-1,43,44,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,46,50,54,-1,43,46,54,-1,43,54,55,-1,43,55,42,-1,2,0,29,-1,29,28,2,-1,0,1,30,-1,30,29,0,-1,1,5,31,-1,31,30,1,-1,5,4,32,-1,32,31,5,-1,4,3,33,-1,33,32,4,-1,3,17,34,-1,34,33,3,-1,17,18,35,-1,35,34,17,-1,18,13,36,-1,36,35,18,-1,13,14,37,-1,37,36,13,-1,14,26,38,-1,38,37,14,-1,26,22,39,-1,39,38,26,-1,22,23,40,-1,40,39,22,-1,23,27,41,-1,41,40,23,-1,27,2,28,-1,28,41,27,-1,6,7,43,-1,43,42,6,-1,7,12,44,-1,44,43,7,-1,12,24,45,-1,45,44,12,-1,24,21,46,-1,46,45,24,-1,21,25,47,-1,47,46,21,-1,25,15,48,-1,48,47,25,-1,15,16,49,-1,49,48,15,-1,16,19,50,-1,50,49,16,-1,19,20,51,-1,51,50,19,-1,20,9,52,-1,52,51,20,-1,9,10,53,-1,53,52,9,-1,10,11,54,-1,54,53,10,-1,11,8,55,-1,55,54,11,-1,8,6,42,-1,42,55,8,-1]
IndexedFaceSet835.creaseAngle = 3.14159
IndexedFaceSet835.texCoordIndex = [5,6,15,-1,15,14,5,-1,7,4,12,-1,12,16,7,-1,9,0,2,-1,2,10,9,-1,11,1,0,-1,0,9,11,-1,3,5,14,-1,14,13,3,-1,6,1,11,-1,11,15,6,-1,2,8,17,-1,17,10,2,-1,18,21,20,-1,20,19,18,-1,22,25,24,-1,24,23,22,-1,26,29,28,-1,28,27,26,-1,30,26,27,-1,27,31,30,-1,33,32,21,-1,21,18,33,-1,19,20,30,-1,30,31,19,-1,28,29,35,-1,35,34,28,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,52,53,54,-1,51,52,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,54,58,62,-1,51,54,62,-1,51,62,63,-1,51,63,50,-1,2,0,37,-1,37,36,2,-1,0,1,38,-1,38,37,0,-1,1,6,39,-1,39,38,1,-1,6,5,40,-1,40,39,6,-1,5,3,41,-1,41,40,5,-1,4,7,42,-1,42,41,4,-1,22,23,43,-1,43,42,22,-1,33,18,44,-1,44,43,33,-1,18,19,45,-1,45,44,18,-1,19,31,46,-1,46,45,19,-1,31,27,47,-1,47,46,31,-1,27,28,48,-1,48,47,27,-1,28,34,49,-1,49,48,28,-1,8,2,36,-1,36,49,8,-1,9,10,51,-1,51,50,9,-1,10,17,52,-1,52,51,10,-1,35,29,53,-1,53,52,35,-1,29,26,54,-1,54,53,29,-1,26,30,55,-1,55,54,26,-1,30,20,56,-1,56,55,30,-1,20,21,57,-1,57,56,20,-1,21,32,58,-1,58,57,21,-1,24,25,59,-1,59,58,24,-1,16,12,60,-1,60,59,16,-1,13,14,61,-1,61,60,13,-1,14,15,62,-1,62,61,14,-1,15,11,63,-1,63,62,15,-1,11,9,50,-1,50,63,11,-1]
Coordinate836 = x3d.Coordinate()

IndexedFaceSet835.coord = Coordinate836
TextureCoordinate837 = x3d.TextureCoordinate()

IndexedFaceSet835.texCoord = TextureCoordinate837

Shape831.geometry = IndexedFaceSet835

HAnimSegment830.children.append(Shape831)
Group838 = x3d.Group()
Group838.DEF = "t12_Sites"
"""None"""

HAnimSegment830.children.append(Group838)

HAnimJoint829.children.append(HAnimSegment830)
HAnimJoint839 = x3d.HAnimJoint()
HAnimJoint839.name = "vt11"
HAnimJoint839.DEF = "hanim_vt11"
HAnimJoint839.center = [0,1.0467,-0.013763251]
HAnimJoint839.ulimit = [0,0,0]
HAnimJoint839.llimit = [0,0,0]
HAnimSegment840 = x3d.HAnimSegment()
HAnimSegment840.name = "t11"
HAnimSegment840.DEF = "hanim_t11"
Shape841 = x3d.Shape()
Shape841.DEF = "t11_Shape"
Appearance842 = x3d.Appearance()
Material843 = x3d.Material()
Material843.USE = "SurfaceDefault"

Appearance842.material = Material843
ImageTexture844 = x3d.ImageTexture()
ImageTexture844.USE = "JinLOA4TextureAtlas"

Appearance842.texture = ImageTexture844

Shape841.appearance = Appearance842
IndexedFaceSet845 = x3d.IndexedFaceSet()
IndexedFaceSet845.coordIndex = [4,3,10,-1,10,12,4,-1,5,4,12,-1,12,13,5,-1,5,13,9,-1,9,1,5,-1,6,11,14,-1,14,7,6,-1,7,2,0,-1,0,6,7,-1,11,6,0,-1,0,8,11,-1,3,28,29,-1,29,10,3,-1,8,0,1,-1,1,9,8,-1,15,18,17,-1,17,16,15,-1,19,20,18,-1,18,15,19,-1,19,21,22,-1,22,20,19,-1,23,7,14,-1,14,24,23,-1,7,23,25,-1,25,26,7,-1,24,27,25,-1,25,23,24,-1,16,17,29,-1,29,28,16,-1,27,22,21,-1,21,25,27,-1,32,33,34,-1,31,32,34,-1,34,35,36,-1,36,37,38,-1,34,36,38,-1,38,39,40,-1,40,41,42,-1,38,40,42,-1,34,38,42,-1,31,34,42,-1,31,42,43,-1,31,43,30,-1,45,46,47,-1,47,48,49,-1,49,50,51,-1,47,49,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,47,51,55,-1,55,56,57,-1,47,55,57,-1,45,47,57,-1,45,57,44,-1,0,2,31,-1,31,30,0,-1,2,7,32,-1,32,31,2,-1,7,26,33,-1,33,32,7,-1,26,25,34,-1,34,33,26,-1,25,21,35,-1,35,34,25,-1,21,19,36,-1,36,35,21,-1,19,15,37,-1,37,36,19,-1,15,16,38,-1,38,37,15,-1,16,28,39,-1,39,38,16,-1,28,3,40,-1,40,39,28,-1,3,4,41,-1,41,40,3,-1,4,5,42,-1,42,41,4,-1,5,1,43,-1,43,42,5,-1,1,0,30,-1,30,43,1,-1,12,10,45,-1,45,44,12,-1,10,29,46,-1,46,45,10,-1,29,17,47,-1,47,46,29,-1,17,18,48,-1,48,47,17,-1,18,20,49,-1,49,48,18,-1,20,22,50,-1,50,49,20,-1,22,27,51,-1,51,50,22,-1,27,24,52,-1,52,51,27,-1,24,14,53,-1,53,52,24,-1,14,11,54,-1,54,53,14,-1,11,8,55,-1,55,54,11,-1,8,9,56,-1,56,55,8,-1,9,13,57,-1,57,56,9,-1,13,12,44,-1,44,57,13,-1]
IndexedFaceSet845.creaseAngle = 3.14159
IndexedFaceSet845.texCoordIndex = [6,5,14,-1,14,16,6,-1,7,6,16,-1,16,17,7,-1,7,17,12,-1,12,3,7,-1,8,15,18,-1,18,10,8,-1,10,0,1,-1,1,8,10,-1,15,8,2,-1,2,11,15,-1,4,9,19,-1,19,13,4,-1,11,2,3,-1,3,12,11,-1,20,23,22,-1,22,21,20,-1,24,25,23,-1,23,20,24,-1,24,26,27,-1,27,25,24,-1,29,28,31,-1,31,30,29,-1,28,29,32,-1,32,33,28,-1,30,35,34,-1,34,29,30,-1,37,36,39,-1,39,38,37,-1,35,27,26,-1,26,34,35,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,50,51,52,-1,48,50,52,-1,44,48,52,-1,41,44,52,-1,41,52,53,-1,41,53,40,-1,55,56,57,-1,57,58,59,-1,59,60,61,-1,57,59,61,-1,61,62,63,-1,63,64,65,-1,61,63,65,-1,57,61,65,-1,65,66,67,-1,57,65,67,-1,55,57,67,-1,55,67,54,-1,1,0,41,-1,41,40,1,-1,0,10,42,-1,42,41,0,-1,28,33,43,-1,43,42,28,-1,33,32,44,-1,44,43,33,-1,34,26,45,-1,45,44,34,-1,26,24,46,-1,46,45,26,-1,24,20,47,-1,47,46,24,-1,20,21,48,-1,48,47,20,-1,37,38,49,-1,49,48,37,-1,9,4,50,-1,50,49,9,-1,5,6,51,-1,51,50,5,-1,6,7,52,-1,52,51,6,-1,7,3,53,-1,53,52,7,-1,3,2,40,-1,40,53,3,-1,16,14,55,-1,55,54,16,-1,13,19,56,-1,56,55,13,-1,39,36,57,-1,57,56,39,-1,22,23,58,-1,58,57,22,-1,23,25,59,-1,59,58,23,-1,25,27,60,-1,60,59,25,-1,27,35,61,-1,61,60,27,-1,35,30,62,-1,62,61,35,-1,30,31,63,-1,63,62,30,-1,18,15,64,-1,64,63,18,-1,15,11,65,-1,65,64,15,-1,11,12,66,-1,66,65,11,-1,12,17,67,-1,67,66,12,-1,17,16,54,-1,54,67,17,-1]
Coordinate846 = x3d.Coordinate()

IndexedFaceSet845.coord = Coordinate846
TextureCoordinate847 = x3d.TextureCoordinate()

IndexedFaceSet845.texCoord = TextureCoordinate847

Shape841.geometry = IndexedFaceSet845

HAnimSegment840.children.append(Shape841)
Group848 = x3d.Group()
Group848.DEF = "t11_Sites"
"""None"""

HAnimSegment840.children.append(Group848)

HAnimJoint839.children.append(HAnimSegment840)
HAnimJoint849 = x3d.HAnimJoint()
HAnimJoint849.name = "vt10"
HAnimJoint849.DEF = "hanim_vt10"
HAnimJoint849.center = [0,1.0638,-0.013785751]
HAnimJoint849.ulimit = [0,0,0]
HAnimJoint849.llimit = [0,0,0]
HAnimSegment850 = x3d.HAnimSegment()
HAnimSegment850.name = "t10"
HAnimSegment850.DEF = "hanim_t10"
Shape851 = x3d.Shape()
Shape851.DEF = "t10_Shape"
Appearance852 = x3d.Appearance()
Material853 = x3d.Material()
Material853.USE = "SurfaceDefault"

Appearance852.material = Material853
ImageTexture854 = x3d.ImageTexture()
ImageTexture854.USE = "JinLOA4TextureAtlas"

Appearance852.texture = ImageTexture854

Shape851.appearance = Appearance852
IndexedFaceSet855 = x3d.IndexedFaceSet()
IndexedFaceSet855.coordIndex = [11,7,4,-1,4,2,11,-1,7,8,5,-1,5,4,7,-1,8,10,1,-1,1,5,8,-1,3,6,12,-1,12,23,3,-1,6,3,0,-1,0,9,6,-1,2,26,27,-1,27,11,2,-1,0,1,10,-1,10,9,0,-1,14,13,16,-1,16,15,14,-1,15,16,18,-1,18,17,15,-1,17,18,20,-1,20,19,17,-1,21,23,12,-1,12,22,21,-1,22,25,24,-1,24,21,22,-1,13,14,27,-1,27,26,13,-1,24,25,19,-1,19,20,24,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,42,-1,50,54,42,-1,46,50,42,-1,44,46,42,-1,43,44,42,-1,2,4,29,-1,29,28,2,-1,4,5,30,-1,30,29,4,-1,5,1,31,-1,31,30,5,-1,1,0,32,-1,32,31,1,-1,0,3,33,-1,33,32,0,-1,3,23,34,-1,34,33,3,-1,23,21,35,-1,35,34,23,-1,21,24,36,-1,36,35,21,-1,24,20,37,-1,37,36,24,-1,20,18,38,-1,38,37,20,-1,18,16,39,-1,39,38,18,-1,16,13,40,-1,40,39,16,-1,13,26,41,-1,41,40,13,-1,26,2,28,-1,28,41,26,-1,6,9,43,-1,43,42,6,-1,9,10,44,-1,44,43,9,-1,10,8,45,-1,45,44,10,-1,8,7,46,-1,46,45,8,-1,7,11,47,-1,47,46,7,-1,11,27,48,-1,48,47,11,-1,27,14,49,-1,49,48,27,-1,14,15,50,-1,50,49,14,-1,15,17,51,-1,51,50,15,-1,17,19,52,-1,52,51,17,-1,19,25,53,-1,53,52,19,-1,25,22,54,-1,54,53,25,-1,22,12,55,-1,55,54,22,-1,12,6,42,-1,42,55,12,-1]
IndexedFaceSet855.creaseAngle = 3.14159
IndexedFaceSet855.texCoordIndex = [15,10,5,-1,5,2,15,-1,10,11,6,-1,6,5,10,-1,11,14,1,-1,1,6,11,-1,4,9,17,-1,17,7,4,-1,9,4,0,-1,0,13,9,-1,3,8,12,-1,12,16,3,-1,0,1,14,-1,14,13,0,-1,19,18,21,-1,21,20,19,-1,20,21,23,-1,23,22,20,-1,22,23,25,-1,25,24,22,-1,26,29,28,-1,28,27,26,-1,27,31,30,-1,30,26,27,-1,33,32,35,-1,35,34,33,-1,30,31,24,-1,24,25,30,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,37,41,48,-1,37,48,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,62,63,50,-1,58,62,50,-1,54,58,50,-1,52,54,50,-1,51,52,50,-1,2,5,37,-1,37,36,2,-1,5,6,38,-1,38,37,5,-1,6,1,39,-1,39,38,6,-1,1,0,40,-1,40,39,1,-1,0,4,41,-1,41,40,0,-1,4,7,42,-1,42,41,4,-1,29,26,43,-1,43,42,29,-1,26,30,44,-1,44,43,26,-1,30,25,45,-1,45,44,30,-1,25,23,46,-1,46,45,25,-1,23,21,47,-1,47,46,23,-1,21,18,48,-1,48,47,21,-1,33,34,49,-1,49,48,33,-1,8,3,36,-1,36,49,8,-1,9,13,51,-1,51,50,9,-1,13,14,52,-1,52,51,13,-1,14,11,53,-1,53,52,14,-1,11,10,54,-1,54,53,11,-1,10,15,55,-1,55,54,10,-1,16,12,56,-1,56,55,16,-1,35,32,57,-1,57,56,35,-1,19,20,58,-1,58,57,19,-1,20,22,59,-1,59,58,20,-1,22,24,60,-1,60,59,22,-1,24,31,61,-1,61,60,24,-1,31,27,62,-1,62,61,31,-1,27,28,63,-1,63,62,27,-1,17,9,50,-1,50,63,17,-1]
Coordinate856 = x3d.Coordinate()

IndexedFaceSet855.coord = Coordinate856
TextureCoordinate857 = x3d.TextureCoordinate()

IndexedFaceSet855.texCoord = TextureCoordinate857

Shape851.geometry = IndexedFaceSet855

HAnimSegment850.children.append(Shape851)
Group858 = x3d.Group()
Group858.DEF = "t10_Sites"
"""(substernale_pt 0.0085 1.2995 0.1147) (mesosternale_pt x y z)"""
HAnimSite859 = x3d.HAnimSite()
HAnimSite859.name = "substernale_pt"
HAnimSite859.DEF = "hanim_substernale_pt"
HAnimSite859.translation = [0,1.08,0.076]
TouchSensor860 = x3d.TouchSensor()
TouchSensor860.description = "HAnimSite substernale_pt 13"

HAnimSite859.children.append(TouchSensor860)
Shape861 = x3d.Shape()
Shape861.USE = "HAnimSiteShape"

HAnimSite859.children.append(Shape861)

Group858.children.append(HAnimSite859)
HAnimSite862 = x3d.HAnimSite()
HAnimSite862.name = "mesosternale_pt"
HAnimSite862.DEF = "hanim_mesosternale_pt"
HAnimSite862.translation = [0,1.15,0.076]
TouchSensor863 = x3d.TouchSensor()
TouchSensor863.description = "HAnimSite mesosternale_pt 88"

HAnimSite862.children.append(TouchSensor863)
Shape864 = x3d.Shape()
Shape864.USE = "HAnimSiteShape"

HAnimSite862.children.append(Shape864)

Group858.children.append(HAnimSite862)

HAnimSegment850.children.append(Group858)

HAnimJoint849.children.append(HAnimSegment850)
HAnimJoint865 = x3d.HAnimJoint()
HAnimJoint865.name = "vt9"
HAnimJoint865.DEF = "hanim_vt9"
HAnimJoint865.center = [0,1.078425,-0.013763251]
HAnimJoint865.ulimit = [0,0,0]
HAnimJoint865.llimit = [0,0,0]
HAnimSegment866 = x3d.HAnimSegment()
HAnimSegment866.name = "t9"
HAnimSegment866.DEF = "hanim_t9"
Shape867 = x3d.Shape()
Shape867.DEF = "t9_Shape"
Appearance868 = x3d.Appearance()
Material869 = x3d.Material()
Material869.USE = "SurfaceDefault"

Appearance868.material = Material869
ImageTexture870 = x3d.ImageTexture()
ImageTexture870.USE = "JinLOA4TextureAtlas"

Appearance868.texture = ImageTexture870

Shape867.appearance = Appearance868
IndexedFaceSet871 = x3d.IndexedFaceSet()
IndexedFaceSet871.coordIndex = [7,0,3,-1,3,10,7,-1,5,20,21,-1,21,12,5,-1,3,4,11,-1,11,10,3,-1,12,8,1,-1,1,5,12,-1,8,9,2,-1,2,1,8,-1,9,11,4,-1,4,2,9,-1,0,7,13,-1,13,6,0,-1,14,17,16,-1,16,15,14,-1,19,18,21,-1,21,20,19,-1,16,17,23,-1,23,22,16,-1,18,19,25,-1,25,24,18,-1,24,25,27,-1,27,26,24,-1,26,27,22,-1,22,23,26,-1,15,6,13,-1,13,14,15,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,47,48,49,-1,47,49,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,47,50,54,-1,43,47,54,-1,43,54,55,-1,43,55,42,-1,3,0,29,-1,29,28,3,-1,0,6,30,-1,30,29,0,-1,6,15,31,-1,31,30,6,-1,15,16,32,-1,32,31,15,-1,16,22,33,-1,33,32,16,-1,22,27,34,-1,34,33,22,-1,27,25,35,-1,35,34,27,-1,25,19,36,-1,36,35,25,-1,19,20,37,-1,37,36,19,-1,20,5,38,-1,38,37,20,-1,5,1,39,-1,39,38,5,-1,1,2,40,-1,40,39,1,-1,2,4,41,-1,41,40,2,-1,4,3,28,-1,28,41,4,-1,8,12,43,-1,43,42,8,-1,12,21,44,-1,44,43,12,-1,21,18,45,-1,45,44,21,-1,18,24,46,-1,46,45,18,-1,24,26,47,-1,47,46,24,-1,26,23,48,-1,48,47,26,-1,23,17,49,-1,49,48,23,-1,17,14,50,-1,50,49,17,-1,14,13,51,-1,51,50,14,-1,13,7,52,-1,52,51,13,-1,7,10,53,-1,53,52,7,-1,10,11,54,-1,54,53,10,-1,11,9,55,-1,55,54,11,-1,9,8,42,-1,42,55,9,-1]
IndexedFaceSet871.creaseAngle = 3.14159
IndexedFaceSet871.texCoordIndex = [9,0,4,-1,4,12,9,-1,7,3,17,-1,17,15,7,-1,4,5,13,-1,13,12,4,-1,14,10,1,-1,1,6,14,-1,10,11,2,-1,2,1,10,-1,11,13,5,-1,5,2,11,-1,0,9,16,-1,16,8,0,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,20,21,27,-1,27,26,20,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,32,33,26,-1,26,27,32,-1,19,35,34,-1,34,18,19,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,55,56,57,-1,55,57,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,55,58,62,-1,51,55,62,-1,51,62,63,-1,51,63,50,-1,4,0,37,-1,37,36,4,-1,0,8,38,-1,38,37,0,-1,35,19,39,-1,39,38,35,-1,19,20,40,-1,40,39,19,-1,20,26,41,-1,41,40,20,-1,26,33,42,-1,42,41,26,-1,33,31,43,-1,43,42,33,-1,31,28,44,-1,44,43,31,-1,23,24,45,-1,45,44,23,-1,3,7,46,-1,46,45,3,-1,6,1,47,-1,47,46,6,-1,1,2,48,-1,48,47,1,-1,2,5,49,-1,49,48,2,-1,5,4,36,-1,36,49,5,-1,10,14,51,-1,51,50,10,-1,15,17,52,-1,52,51,15,-1,25,22,53,-1,53,52,25,-1,29,30,54,-1,54,53,29,-1,30,32,55,-1,55,54,30,-1,32,27,56,-1,56,55,32,-1,27,21,57,-1,57,56,27,-1,21,18,58,-1,58,57,21,-1,18,34,59,-1,59,58,18,-1,16,9,60,-1,60,59,16,-1,9,12,61,-1,61,60,9,-1,12,13,62,-1,62,61,12,-1,13,11,63,-1,63,62,13,-1,11,10,50,-1,50,63,11,-1]
Coordinate872 = x3d.Coordinate()

IndexedFaceSet871.coord = Coordinate872
TextureCoordinate873 = x3d.TextureCoordinate()

IndexedFaceSet871.texCoord = TextureCoordinate873

Shape867.geometry = IndexedFaceSet871

HAnimSegment866.children.append(Shape867)
Group874 = x3d.Group()
Group874.DEF = "t9_Sites"
"""(l_thelion_pt 0.0918 1.3382 0.1192) (r_thelion_pt -0.0736 1.3385 0.1217) (rear_center_midsagittal_plane_pt x y z) (l_chest_midsagittal_plane_pt x y z) (r_chest_midsagittal_plane_pt x y z)"""
HAnimSite875 = x3d.HAnimSite()
HAnimSite875.name = "l_thelion_pt"
HAnimSite875.DEF = "hanim_l_thelion_pt"
HAnimSite875.translation = [0.07,1.12,0.09]
TouchSensor876 = x3d.TouchSensor()
TouchSensor876.description = "HAnimSite l_thelion_pt 29"

HAnimSite875.children.append(TouchSensor876)
Shape877 = x3d.Shape()
Shape877.USE = "HAnimSiteShape"

HAnimSite875.children.append(Shape877)

Group874.children.append(HAnimSite875)
HAnimSite878 = x3d.HAnimSite()
HAnimSite878.name = "r_thelion_pt"
HAnimSite878.DEF = "hanim_r_thelion_pt"
HAnimSite878.translation = [-0.07,1.12,0.09]
TouchSensor879 = x3d.TouchSensor()
TouchSensor879.description = "HAnimSite r_thelion_pt 31"

HAnimSite878.children.append(TouchSensor879)
Shape880 = x3d.Shape()
Shape880.USE = "HAnimSiteShape"

HAnimSite878.children.append(Shape880)

Group874.children.append(HAnimSite878)
HAnimSite881 = x3d.HAnimSite()
HAnimSite881.name = "rear_center_midsagittal_plane_pt"
HAnimSite881.DEF = "hanim_rear_center_midsagittal_plane_pt"
HAnimSite881.translation = [0,1.1,-0.1]
TouchSensor882 = x3d.TouchSensor()
TouchSensor882.description = "HAnimSite rear_center_midsagittal_plane_pt 92"

HAnimSite881.children.append(TouchSensor882)
Shape883 = x3d.Shape()
Shape883.USE = "HAnimSiteShape"

HAnimSite881.children.append(Shape883)

Group874.children.append(HAnimSite881)
HAnimSite884 = x3d.HAnimSite()
HAnimSite884.name = "l_chest_midsagittal_plane_pt"
HAnimSite884.DEF = "hanim_l_chest_midsagittal_plane_pt"
HAnimSite884.translation = [0.13,1.12,0]
TouchSensor885 = x3d.TouchSensor()
TouchSensor885.description = "HAnimSite l_chest_midsagittal_plane_pt 94"

HAnimSite884.children.append(TouchSensor885)
Shape886 = x3d.Shape()
Shape886.USE = "HAnimSiteShape"

HAnimSite884.children.append(Shape886)

Group874.children.append(HAnimSite884)
HAnimSite887 = x3d.HAnimSite()
HAnimSite887.name = "r_chest_midsagittal_plane_pt"
HAnimSite887.DEF = "hanim_r_chest_midsagittal_plane_pt"
HAnimSite887.translation = [-0.13,1.12,0]
TouchSensor888 = x3d.TouchSensor()
TouchSensor888.description = "HAnimSite r_chest_midsagittal_plane_pt 95"

HAnimSite887.children.append(TouchSensor888)
Shape889 = x3d.Shape()
Shape889.USE = "HAnimSiteShape"

HAnimSite887.children.append(Shape889)

Group874.children.append(HAnimSite887)

HAnimSegment866.children.append(Group874)

HAnimJoint865.children.append(HAnimSegment866)
HAnimJoint890 = x3d.HAnimJoint()
HAnimJoint890.name = "vt8"
HAnimJoint890.DEF = "hanim_vt8"
HAnimJoint890.center = [0,1.0930501,-0.013763251]
HAnimJoint890.ulimit = [0,0,0]
HAnimJoint890.llimit = [0,0,0]
HAnimSegment891 = x3d.HAnimSegment()
HAnimSegment891.name = "t8"
HAnimSegment891.DEF = "hanim_t8"
Shape892 = x3d.Shape()
Shape892.DEF = "t8_Shape"
Appearance893 = x3d.Appearance()
Material894 = x3d.Material()
Material894.USE = "SurfaceDefault"

Appearance893.material = Material894
ImageTexture895 = x3d.ImageTexture()
ImageTexture895.USE = "JinLOA4TextureAtlas"

Appearance893.texture = ImageTexture895

Shape892.appearance = Appearance893
IndexedFaceSet896 = x3d.IndexedFaceSet()
IndexedFaceSet896.coordIndex = [4,0,9,-1,9,3,4,-1,11,19,20,-1,20,6,11,-1,9,10,5,-1,5,3,9,-1,6,7,1,-1,1,11,6,-1,7,8,2,-1,2,1,7,-1,8,5,10,-1,10,2,8,-1,0,4,12,-1,12,27,0,-1,13,16,15,-1,15,14,13,-1,18,17,20,-1,20,19,18,-1,15,16,22,-1,22,21,15,-1,17,18,24,-1,24,23,17,-1,23,24,26,-1,26,25,23,-1,25,26,21,-1,21,22,25,-1,14,27,12,-1,12,13,14,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,43,44,45,-1,45,46,47,-1,47,48,49,-1,45,47,49,-1,49,50,51,-1,51,52,53,-1,49,51,53,-1,45,49,53,-1,53,54,55,-1,45,53,55,-1,43,45,55,-1,43,55,42,-1,11,1,29,-1,29,28,11,-1,1,2,30,-1,30,29,1,-1,2,10,31,-1,31,30,2,-1,10,9,32,-1,32,31,10,-1,9,0,33,-1,33,32,9,-1,0,27,34,-1,34,33,0,-1,27,14,35,-1,35,34,27,-1,14,15,36,-1,36,35,14,-1,15,21,37,-1,37,36,15,-1,21,26,38,-1,38,37,21,-1,26,24,39,-1,39,38,26,-1,24,18,40,-1,40,39,24,-1,18,19,41,-1,41,40,18,-1,19,11,28,-1,28,41,19,-1,12,4,43,-1,43,42,12,-1,4,3,44,-1,44,43,4,-1,3,5,45,-1,45,44,3,-1,5,8,46,-1,46,45,5,-1,8,7,47,-1,47,46,8,-1,7,6,48,-1,48,47,7,-1,6,20,49,-1,49,48,6,-1,20,17,50,-1,50,49,20,-1,17,23,51,-1,51,50,17,-1,23,25,52,-1,52,51,23,-1,25,22,53,-1,53,52,25,-1,22,16,54,-1,54,53,22,-1,16,13,55,-1,55,54,16,-1,13,12,42,-1,42,55,13,-1]
IndexedFaceSet896.creaseAngle = 3.14159
IndexedFaceSet896.texCoordIndex = [1,14,9,-1,9,0,1,-1,11,13,8,-1,8,5,11,-1,9,10,3,-1,3,0,9,-1,4,6,16,-1,16,12,4,-1,6,7,17,-1,17,16,6,-1,7,3,10,-1,10,17,7,-1,14,1,2,-1,2,15,14,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,20,21,27,-1,27,26,20,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,32,33,26,-1,26,27,32,-1,19,35,34,-1,34,18,19,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,51,52,53,-1,53,54,55,-1,55,56,57,-1,53,55,57,-1,57,58,59,-1,59,60,61,-1,57,59,61,-1,53,57,61,-1,61,62,63,-1,53,61,63,-1,51,53,63,-1,51,63,50,-1,12,16,37,-1,37,36,12,-1,16,17,38,-1,38,37,16,-1,17,10,39,-1,39,38,17,-1,10,9,40,-1,40,39,10,-1,9,14,41,-1,41,40,9,-1,14,15,42,-1,42,41,14,-1,35,19,43,-1,43,42,35,-1,19,20,44,-1,44,43,19,-1,20,26,45,-1,45,44,20,-1,26,33,46,-1,46,45,26,-1,33,31,47,-1,47,46,33,-1,31,28,48,-1,48,47,31,-1,23,24,49,-1,49,48,23,-1,13,11,36,-1,36,49,13,-1,2,1,51,-1,51,50,2,-1,1,0,52,-1,52,51,1,-1,0,3,53,-1,53,52,0,-1,3,7,54,-1,54,53,3,-1,7,6,55,-1,55,54,7,-1,6,4,56,-1,56,55,6,-1,5,8,57,-1,57,56,5,-1,25,22,58,-1,58,57,25,-1,29,30,59,-1,59,58,29,-1,30,32,60,-1,60,59,30,-1,32,27,61,-1,61,60,32,-1,27,21,62,-1,62,61,27,-1,21,18,63,-1,63,62,21,-1,18,34,50,-1,50,63,18,-1]
Coordinate897 = x3d.Coordinate()

IndexedFaceSet896.coord = Coordinate897
TextureCoordinate898 = x3d.TextureCoordinate()

IndexedFaceSet896.texCoord = TextureCoordinate898

Shape892.geometry = IndexedFaceSet896

HAnimSegment891.children.append(Shape892)
Group899 = x3d.Group()
Group899.DEF = "t8_Sites"
"""None"""

HAnimSegment891.children.append(Group899)

HAnimJoint890.children.append(HAnimSegment891)
HAnimJoint900 = x3d.HAnimJoint()
HAnimJoint900.name = "vt7"
HAnimJoint900.DEF = "hanim_vt7"
HAnimJoint900.center = [0,1.1088,-0.013763251]
HAnimJoint900.ulimit = [0,0,0]
HAnimJoint900.llimit = [0,0,0]
HAnimSegment901 = x3d.HAnimSegment()
HAnimSegment901.name = "t7"
HAnimSegment901.DEF = "hanim_t7"
Shape902 = x3d.Shape()
Shape902.DEF = "t7_Shape"
Appearance903 = x3d.Appearance()
Material904 = x3d.Material()
Material904.USE = "SurfaceDefault"

Appearance903.material = Material904
ImageTexture905 = x3d.ImageTexture()
ImageTexture905.USE = "JinLOA4TextureAtlas"

Appearance903.texture = ImageTexture905

Shape902.appearance = Appearance903
IndexedFaceSet906 = x3d.IndexedFaceSet()
IndexedFaceSet906.coordIndex = [0,2,6,-1,6,8,0,-1,9,18,19,-1,19,1,9,-1,7,5,22,-1,22,23,7,-1,1,3,10,-1,10,9,1,-1,3,4,11,-1,11,10,3,-1,4,0,8,-1,8,11,4,-1,5,7,6,-1,6,2,5,-1,13,12,15,-1,15,14,13,-1,17,16,19,-1,19,18,17,-1,20,23,22,-1,22,21,20,-1,16,17,25,-1,25,24,16,-1,24,25,27,-1,27,26,24,-1,26,27,12,-1,12,13,26,-1,21,14,15,-1,15,20,21,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,46,50,54,-1,54,55,42,-1,46,54,42,-1,44,46,42,-1,43,44,42,-1,1,19,29,-1,29,28,1,-1,19,16,30,-1,30,29,19,-1,16,24,31,-1,31,30,16,-1,24,26,32,-1,32,31,24,-1,26,13,33,-1,33,32,26,-1,13,14,34,-1,34,33,13,-1,14,21,35,-1,35,34,14,-1,21,22,36,-1,36,35,21,-1,22,5,37,-1,37,36,22,-1,5,2,38,-1,38,37,5,-1,2,0,39,-1,39,38,2,-1,0,4,40,-1,40,39,0,-1,4,3,41,-1,41,40,4,-1,3,1,28,-1,28,41,3,-1,7,23,43,-1,43,42,7,-1,23,20,44,-1,44,43,23,-1,20,15,45,-1,45,44,20,-1,15,12,46,-1,46,45,15,-1,12,27,47,-1,47,46,12,-1,27,25,48,-1,48,47,27,-1,25,17,49,-1,49,48,25,-1,17,18,50,-1,50,49,17,-1,18,9,51,-1,51,50,18,-1,9,10,52,-1,52,51,9,-1,10,11,53,-1,53,52,10,-1,11,8,54,-1,54,53,11,-1,8,6,55,-1,55,54,8,-1,6,7,42,-1,42,55,6,-1]
IndexedFaceSet906.creaseAngle = 3.14159
IndexedFaceSet906.texCoordIndex = [3,8,9,-1,9,11,3,-1,13,16,6,-1,6,5,13,-1,10,0,7,-1,7,17,10,-1,2,1,14,-1,14,12,2,-1,1,4,15,-1,15,14,1,-1,4,3,11,-1,11,15,4,-1,0,10,9,-1,9,8,0,-1,19,18,21,-1,21,20,19,-1,23,22,25,-1,25,24,23,-1,26,29,28,-1,28,27,26,-1,31,30,33,-1,33,32,31,-1,32,33,35,-1,35,34,32,-1,34,35,18,-1,18,19,34,-1,27,20,21,-1,21,26,27,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,54,58,62,-1,62,63,50,-1,54,62,50,-1,52,54,50,-1,51,52,50,-1,5,6,37,-1,37,36,5,-1,25,22,38,-1,38,37,25,-1,31,32,39,-1,39,38,31,-1,32,34,40,-1,40,39,32,-1,34,19,41,-1,41,40,34,-1,19,20,42,-1,42,41,19,-1,20,27,43,-1,43,42,20,-1,27,28,44,-1,44,43,27,-1,7,0,45,-1,45,44,7,-1,0,8,46,-1,46,45,0,-1,8,3,47,-1,47,46,8,-1,3,4,48,-1,48,47,3,-1,4,1,49,-1,49,48,4,-1,1,2,36,-1,36,49,1,-1,10,17,51,-1,51,50,10,-1,29,26,52,-1,52,51,29,-1,26,21,53,-1,53,52,26,-1,21,18,54,-1,54,53,21,-1,18,35,55,-1,55,54,18,-1,35,33,56,-1,56,55,35,-1,33,30,57,-1,57,56,33,-1,23,24,58,-1,58,57,23,-1,16,13,59,-1,59,58,16,-1,12,14,60,-1,60,59,12,-1,14,15,61,-1,61,60,14,-1,15,11,62,-1,62,61,15,-1,11,9,63,-1,63,62,11,-1,9,10,50,-1,50,63,9,-1]
Coordinate907 = x3d.Coordinate()

IndexedFaceSet906.coord = Coordinate907
TextureCoordinate908 = x3d.TextureCoordinate()

IndexedFaceSet906.texCoord = TextureCoordinate908

Shape902.geometry = IndexedFaceSet906

HAnimSegment901.children.append(Shape902)
Group909 = x3d.Group()
Group909.DEF = "t7_Sites"
"""None"""

HAnimSegment901.children.append(Group909)

HAnimJoint900.children.append(HAnimSegment901)
HAnimJoint910 = x3d.HAnimJoint()
HAnimJoint910.name = "vt6"
HAnimJoint910.DEF = "hanim_vt6"
HAnimJoint910.center = [0,1.1216251,-0.013763251]
HAnimJoint910.ulimit = [0,0,0]
HAnimJoint910.llimit = [0,0,0]
HAnimSegment911 = x3d.HAnimSegment()
HAnimSegment911.name = "t6"
HAnimSegment911.DEF = "hanim_t6"
Shape912 = x3d.Shape()
Shape912.DEF = "t6_Shape"
Appearance913 = x3d.Appearance()
Material914 = x3d.Material()
Material914.USE = "SurfaceDefault"

Appearance913.material = Material914
ImageTexture915 = x3d.ImageTexture()
ImageTexture915.USE = "JinLOA4TextureAtlas"

Appearance913.texture = ImageTexture915

Shape912.appearance = Appearance913
IndexedFaceSet916 = x3d.IndexedFaceSet()
IndexedFaceSet916.coordIndex = [12,9,5,-1,5,3,12,-1,2,1,6,-1,6,11,2,-1,0,7,23,-1,23,24,0,-1,25,8,12,-1,12,3,25,-1,9,6,1,-1,1,5,9,-1,11,10,4,-1,4,2,11,-1,4,10,7,-1,7,0,4,-1,13,16,15,-1,15,14,13,-1,18,17,20,-1,20,19,18,-1,21,24,23,-1,23,22,21,-1,25,16,13,-1,13,8,25,-1,14,15,19,-1,19,20,14,-1,17,18,27,-1,27,26,17,-1,27,21,22,-1,22,26,27,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,42,-1,50,54,42,-1,46,50,42,-1,44,46,42,-1,43,44,42,-1,3,5,29,-1,29,28,3,-1,5,1,30,-1,30,29,5,-1,1,2,31,-1,31,30,1,-1,2,4,32,-1,32,31,2,-1,4,0,33,-1,33,32,4,-1,0,24,34,-1,34,33,0,-1,24,21,35,-1,35,34,24,-1,21,27,36,-1,36,35,21,-1,27,18,37,-1,37,36,27,-1,18,19,38,-1,38,37,18,-1,19,15,39,-1,39,38,19,-1,15,16,40,-1,40,39,15,-1,16,25,41,-1,41,40,16,-1,25,3,28,-1,28,41,25,-1,23,7,43,-1,43,42,23,-1,7,10,44,-1,44,43,7,-1,10,11,45,-1,45,44,10,-1,11,6,46,-1,46,45,11,-1,6,9,47,-1,47,46,6,-1,9,12,48,-1,48,47,9,-1,12,8,49,-1,49,48,12,-1,8,13,50,-1,50,49,8,-1,13,14,51,-1,51,50,13,-1,14,20,52,-1,52,51,14,-1,20,17,53,-1,53,52,20,-1,17,26,54,-1,54,53,17,-1,26,22,55,-1,55,54,26,-1,22,23,42,-1,42,55,22,-1]
IndexedFaceSet916.creaseAngle = 3.14159
IndexedFaceSet916.texCoordIndex = [17,13,8,-1,8,4,17,-1,3,2,9,-1,9,16,3,-1,1,10,14,-1,14,5,1,-1,6,12,17,-1,17,4,6,-1,13,9,2,-1,2,8,13,-1,16,15,7,-1,7,3,16,-1,7,15,11,-1,11,0,7,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,26,29,28,-1,28,27,26,-1,30,21,18,-1,18,31,30,-1,19,20,24,-1,24,25,19,-1,22,23,33,-1,33,32,22,-1,33,35,34,-1,34,32,33,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,62,63,50,-1,58,62,50,-1,54,58,50,-1,52,54,50,-1,51,52,50,-1,4,8,37,-1,37,36,4,-1,8,2,38,-1,38,37,8,-1,2,3,39,-1,39,38,2,-1,3,7,40,-1,40,39,3,-1,7,0,41,-1,41,40,7,-1,1,5,42,-1,42,41,1,-1,29,26,43,-1,43,42,29,-1,35,33,44,-1,44,43,35,-1,33,23,45,-1,45,44,33,-1,23,24,46,-1,46,45,23,-1,24,20,47,-1,47,46,24,-1,20,21,48,-1,48,47,20,-1,21,30,49,-1,49,48,21,-1,6,4,36,-1,36,49,6,-1,14,10,51,-1,51,50,14,-1,11,15,52,-1,52,51,11,-1,15,16,53,-1,53,52,15,-1,16,9,54,-1,54,53,16,-1,9,13,55,-1,55,54,9,-1,13,17,56,-1,56,55,13,-1,17,12,57,-1,57,56,17,-1,31,18,58,-1,58,57,31,-1,18,19,59,-1,59,58,18,-1,19,25,60,-1,60,59,19,-1,25,22,61,-1,61,60,25,-1,22,32,62,-1,62,61,22,-1,32,34,63,-1,63,62,32,-1,27,28,50,-1,50,63,27,-1]
Coordinate917 = x3d.Coordinate()

IndexedFaceSet916.coord = Coordinate917
TextureCoordinate918 = x3d.TextureCoordinate()

IndexedFaceSet916.texCoord = TextureCoordinate918

Shape912.geometry = IndexedFaceSet916

HAnimSegment911.children.append(Shape912)
Group919 = x3d.Group()
Group919.DEF = "t6_Sites"
"""None"""

HAnimSegment911.children.append(Group919)

HAnimJoint910.children.append(HAnimSegment911)
HAnimJoint920 = x3d.HAnimJoint()
HAnimJoint920.name = "vt5"
HAnimJoint920.DEF = "hanim_vt5"
HAnimJoint920.center = [0,1.13715,-0.013763251]
HAnimJoint920.ulimit = [0,0,0]
HAnimJoint920.llimit = [0,0,0]
HAnimSegment921 = x3d.HAnimSegment()
HAnimSegment921.name = "t5"
HAnimSegment921.DEF = "hanim_t5"
Shape922 = x3d.Shape()
Shape922.DEF = "t5_Shape"
Appearance923 = x3d.Appearance()
Material924 = x3d.Material()
Material924.USE = "SurfaceDefault"

Appearance923.material = Material924
ImageTexture925 = x3d.ImageTexture()
ImageTexture925.USE = "JinLOA4TextureAtlas"

Appearance923.texture = ImageTexture925

Shape922.appearance = Appearance923
IndexedFaceSet926 = x3d.IndexedFaceSet()
IndexedFaceSet926.coordIndex = [0,6,16,-1,16,13,0,-1,17,10,9,-1,9,3,17,-1,12,7,5,-1,5,2,12,-1,8,11,4,-1,4,1,8,-1,4,11,6,-1,6,0,4,-1,2,3,9,-1,9,12,2,-1,1,5,7,-1,7,8,1,-1,14,13,16,-1,16,15,14,-1,17,19,18,-1,18,10,17,-1,21,20,23,-1,23,22,21,-1,25,24,27,-1,27,26,25,-1,27,14,15,-1,15,26,27,-1,20,21,18,-1,18,19,20,-1,24,25,22,-1,22,23,24,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,42,-1,50,54,42,-1,46,50,42,-1,44,46,42,-1,43,44,42,-1,3,2,29,-1,29,28,3,-1,2,5,30,-1,30,29,2,-1,5,1,31,-1,31,30,5,-1,1,4,32,-1,32,31,1,-1,4,0,33,-1,33,32,4,-1,0,13,34,-1,34,33,0,-1,13,14,35,-1,35,34,13,-1,14,27,36,-1,36,35,14,-1,27,24,37,-1,37,36,27,-1,24,23,38,-1,38,37,24,-1,23,20,39,-1,39,38,23,-1,20,19,40,-1,40,39,20,-1,19,17,41,-1,41,40,19,-1,17,3,28,-1,28,41,17,-1,12,9,43,-1,43,42,12,-1,9,10,44,-1,44,43,9,-1,10,18,45,-1,45,44,10,-1,18,21,46,-1,46,45,18,-1,21,22,47,-1,47,46,21,-1,22,25,48,-1,48,47,22,-1,25,26,49,-1,49,48,25,-1,26,15,50,-1,50,49,26,-1,15,16,51,-1,51,50,15,-1,16,6,52,-1,52,51,16,-1,6,11,53,-1,53,52,6,-1,11,8,54,-1,54,53,11,-1,8,7,55,-1,55,54,8,-1,7,12,42,-1,42,55,7,-1]
IndexedFaceSet926.creaseAngle = 3.14159
IndexedFaceSet926.texCoordIndex = [5,10,14,-1,14,2,5,-1,8,15,13,-1,13,7,8,-1,17,11,3,-1,3,6,17,-1,12,16,0,-1,0,4,12,-1,0,16,9,-1,9,1,0,-1,6,7,13,-1,13,17,6,-1,4,3,11,-1,11,12,4,-1,19,18,21,-1,21,20,19,-1,22,25,24,-1,24,23,22,-1,27,26,29,-1,29,28,27,-1,31,30,33,-1,33,32,31,-1,33,35,34,-1,34,32,33,-1,26,27,24,-1,24,25,26,-1,30,31,28,-1,28,29,30,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,62,63,50,-1,58,62,50,-1,54,58,50,-1,52,54,50,-1,51,52,50,-1,7,6,37,-1,37,36,7,-1,6,3,38,-1,38,37,6,-1,3,4,39,-1,39,38,3,-1,4,0,40,-1,40,39,4,-1,0,1,41,-1,41,40,0,-1,5,2,42,-1,42,41,5,-1,18,19,43,-1,43,42,18,-1,35,33,44,-1,44,43,35,-1,33,30,45,-1,45,44,33,-1,30,29,46,-1,46,45,30,-1,29,26,47,-1,47,46,29,-1,26,25,48,-1,48,47,26,-1,25,22,49,-1,49,48,25,-1,8,7,36,-1,36,49,8,-1,17,13,51,-1,51,50,17,-1,13,15,52,-1,52,51,13,-1,23,24,53,-1,53,52,23,-1,24,27,54,-1,54,53,24,-1,27,28,55,-1,55,54,27,-1,28,31,56,-1,56,55,28,-1,31,32,57,-1,57,56,31,-1,32,34,58,-1,58,57,32,-1,20,21,59,-1,59,58,20,-1,14,10,60,-1,60,59,14,-1,9,16,61,-1,61,60,9,-1,16,12,62,-1,62,61,16,-1,12,11,63,-1,63,62,12,-1,11,17,50,-1,50,63,11,-1]
Coordinate927 = x3d.Coordinate()

IndexedFaceSet926.coord = Coordinate927
TextureCoordinate928 = x3d.TextureCoordinate()

IndexedFaceSet926.texCoord = TextureCoordinate928

Shape922.geometry = IndexedFaceSet926

HAnimSegment921.children.append(Shape922)
Group929 = x3d.Group()
Group929.DEF = "t5_Sites"
"""None"""

HAnimSegment921.children.append(Group929)

HAnimJoint920.children.append(HAnimSegment921)
HAnimJoint930 = x3d.HAnimJoint()
HAnimJoint930.name = "vt4"
HAnimJoint930.DEF = "hanim_vt4"
HAnimJoint930.center = [0,1.1524501,-0.013763251]
HAnimJoint930.ulimit = [0,0,0]
HAnimJoint930.llimit = [0,0,0]
HAnimSegment931 = x3d.HAnimSegment()
HAnimSegment931.name = "t4"
HAnimSegment931.DEF = "hanim_t4"
Shape932 = x3d.Shape()
Shape932.DEF = "t4_Shape"
Appearance933 = x3d.Appearance()
Material934 = x3d.Material()
Material934.USE = "SurfaceDefault"

Appearance933.material = Material934
ImageTexture935 = x3d.ImageTexture()
ImageTexture935.USE = "JinLOA4TextureAtlas"

Appearance933.texture = ImageTexture935

Shape932.appearance = Appearance933
IndexedFaceSet936 = x3d.IndexedFaceSet()
IndexedFaceSet936.coordIndex = [2,3,9,-1,9,12,2,-1,3,0,10,-1,10,9,3,-1,7,20,21,-1,21,4,7,-1,11,7,4,-1,4,5,11,-1,25,26,10,-1,10,0,25,-1,6,11,5,-1,11,6,1,-1,1,8,11,-1,2,12,8,-1,8,1,2,-1,14,13,16,-1,16,15,14,-1,15,16,18,-1,18,17,15,-1,19,22,21,-1,21,20,19,-1,23,24,22,-1,22,19,23,-1,25,17,18,-1,18,26,25,-1,27,24,23,-1,23,29,28,-1,28,27,23,-1,14,28,29,-1,29,13,14,-1,31,32,33,-1,31,33,34,-1,34,35,36,-1,36,37,38,-1,34,36,38,-1,31,34,38,-1,38,39,40,-1,40,41,42,-1,38,40,42,-1,31,38,42,-1,42,43,44,-1,31,42,44,-1,31,44,45,-1,31,45,30,-1,48,49,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,46,-1,54,58,46,-1,50,54,46,-1,48,50,46,-1,47,48,46,-1,3,2,31,-1,31,30,3,-1,2,1,32,-1,32,31,2,-1,1,6,33,-1,33,32,1,-1,6,5,34,-1,34,33,6,-1,5,4,35,-1,35,34,5,-1,4,21,36,-1,36,35,4,-1,21,22,37,-1,37,36,21,-1,22,24,38,-1,38,37,22,-1,24,27,39,-1,39,38,24,-1,27,28,40,-1,40,39,27,-1,28,14,41,-1,41,40,28,-1,14,15,42,-1,42,41,14,-1,15,17,43,-1,43,42,15,-1,17,25,44,-1,44,43,17,-1,25,0,45,-1,45,44,25,-1,0,3,30,-1,30,45,0,-1,9,10,47,-1,47,46,9,-1,10,26,48,-1,48,47,10,-1,26,18,49,-1,49,48,26,-1,18,16,50,-1,50,49,18,-1,16,13,51,-1,51,50,16,-1,13,29,52,-1,52,51,13,-1,29,23,53,-1,53,52,29,-1,23,19,54,-1,54,53,23,-1,19,20,55,-1,55,54,19,-1,20,7,56,-1,56,55,20,-1,7,11,57,-1,57,56,7,-1,11,8,58,-1,58,57,11,-1,8,12,59,-1,59,58,8,-1,12,9,46,-1,46,59,12,-1]
IndexedFaceSet936.creaseAngle = 3.14159
IndexedFaceSet936.texCoordIndex = [3,4,14,-1,14,18,3,-1,4,1,15,-1,15,14,4,-1,10,17,7,-1,7,6,10,-1,16,11,5,-1,5,8,16,-1,0,19,15,-1,15,1,0,-1,9,16,8,-1,16,9,2,-1,2,12,16,-1,3,18,13,-1,13,2,3,-1,21,20,23,-1,23,22,21,-1,22,23,25,-1,25,24,22,-1,26,29,28,-1,28,27,26,-1,30,33,32,-1,32,31,30,-1,34,24,25,-1,25,35,34,-1,36,33,30,-1,30,38,37,-1,37,36,30,-1,21,37,39,-1,39,20,21,-1,41,42,43,-1,41,43,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,48,49,50,-1,50,51,52,-1,48,50,52,-1,41,48,52,-1,52,53,54,-1,41,52,54,-1,41,54,55,-1,41,55,40,-1,58,59,60,-1,60,61,62,-1,62,63,64,-1,60,62,64,-1,64,65,66,-1,66,67,68,-1,64,66,68,-1,68,69,56,-1,64,68,56,-1,60,64,56,-1,58,60,56,-1,57,58,56,-1,4,3,41,-1,41,40,4,-1,3,2,42,-1,42,41,3,-1,2,9,43,-1,43,42,2,-1,9,8,44,-1,44,43,9,-1,8,5,45,-1,45,44,8,-1,6,7,46,-1,46,45,6,-1,28,29,47,-1,47,46,28,-1,32,33,48,-1,48,47,32,-1,33,36,49,-1,49,48,33,-1,36,37,50,-1,50,49,36,-1,37,21,51,-1,51,50,37,-1,21,22,52,-1,52,51,21,-1,22,24,53,-1,53,52,22,-1,24,34,54,-1,54,53,24,-1,0,1,55,-1,55,54,0,-1,1,4,40,-1,40,55,1,-1,14,15,57,-1,57,56,14,-1,15,19,58,-1,58,57,15,-1,35,25,59,-1,59,58,35,-1,25,23,60,-1,60,59,25,-1,23,20,61,-1,61,60,23,-1,20,39,62,-1,62,61,20,-1,38,30,63,-1,63,62,38,-1,30,31,64,-1,64,63,30,-1,26,27,65,-1,65,64,26,-1,17,10,66,-1,66,65,17,-1,11,16,67,-1,67,66,11,-1,16,12,68,-1,68,67,16,-1,13,18,69,-1,69,68,13,-1,18,14,56,-1,56,69,18,-1]
Coordinate937 = x3d.Coordinate()

IndexedFaceSet936.coord = Coordinate937
TextureCoordinate938 = x3d.TextureCoordinate()

IndexedFaceSet936.texCoord = TextureCoordinate938

Shape932.geometry = IndexedFaceSet936

HAnimSegment931.children.append(Shape932)
Group939 = x3d.Group()
Group939.DEF = "t4_Sites"
"""None"""

HAnimSegment931.children.append(Group939)

HAnimJoint930.children.append(HAnimSegment931)
HAnimJoint940 = x3d.HAnimJoint()
HAnimJoint940.name = "vt3"
HAnimJoint940.DEF = "hanim_vt3"
HAnimJoint940.center = [0,1.1709001,-0.013763251]
HAnimJoint940.ulimit = [0,0,0]
HAnimJoint940.llimit = [0,0,0]
HAnimSegment941 = x3d.HAnimSegment()
HAnimSegment941.name = "t3"
HAnimSegment941.DEF = "hanim_t3"
Shape942 = x3d.Shape()
Shape942.DEF = "t3_Shape"
Appearance943 = x3d.Appearance()
Material944 = x3d.Material()
Material944.USE = "SurfaceDefault"

Appearance943.material = Material944
ImageTexture945 = x3d.ImageTexture()
ImageTexture945.USE = "JinLOA4TextureAtlas"

Appearance943.texture = ImageTexture945

Shape942.appearance = Appearance943
IndexedFaceSet946 = x3d.IndexedFaceSet()
IndexedFaceSet946.coordIndex = [16,15,0,-1,0,7,16,-1,0,15,8,-1,1,5,11,-1,11,10,1,-1,18,6,12,-1,12,17,18,-1,14,13,2,-1,2,3,14,-1,9,14,3,-1,3,4,9,-1,11,5,0,-1,0,8,11,-1,13,12,6,-1,6,2,13,-1,49,16,7,-1,7,0,5,-1,1,10,9,-1,9,4,1,-1,3,2,20,-1,20,19,3,-1,2,6,21,-1,21,20,2,-1,6,18,53,-1,53,21,6,-1,7,5,23,-1,23,22,7,-1,5,1,24,-1,24,23,5,-1,1,4,25,-1,25,24,1,-1,4,3,19,-1,19,25,4,-1,10,11,27,-1,27,26,10,-1,11,8,28,-1,28,27,11,-1,8,15,29,-1,29,28,8,-1,17,12,30,-1,30,62,17,-1,12,13,31,-1,31,30,12,-1,13,14,32,-1,32,31,13,-1,14,9,33,-1,33,32,14,-1,9,10,26,-1,26,33,9,-1,16,35,34,-1,34,15,16,-1,34,36,15,-1,38,37,40,-1,40,39,38,-1,18,17,42,-1,42,41,18,-1,44,43,46,-1,46,45,44,-1,48,47,43,-1,43,44,48,-1,40,36,34,-1,34,39,40,-1,45,46,41,-1,41,42,45,-1,49,35,16,-1,35,39,34,-1,38,47,48,-1,48,37,38,-1,43,51,50,-1,50,46,43,-1,46,50,52,-1,52,41,46,-1,41,52,53,-1,53,18,41,-1,35,55,54,-1,54,39,35,-1,39,54,56,-1,56,38,39,-1,38,56,57,-1,57,47,38,-1,47,57,51,-1,51,43,47,-1,37,59,58,-1,58,40,37,-1,40,58,60,-1,60,36,40,-1,36,60,29,-1,29,15,36,-1,17,62,61,-1,61,42,17,-1,42,61,63,-1,63,45,42,-1,45,63,64,-1,64,44,45,-1,44,64,65,-1,65,48,44,-1,48,65,59,-1,59,37,48,-1,27,28,29,-1,29,60,58,-1,58,59,65,-1,29,58,65,-1,65,64,63,-1,63,61,62,-1,65,63,62,-1,62,30,31,-1,31,32,33,-1,62,31,33,-1,65,62,33,-1,29,65,33,-1,27,29,33,-1,27,33,26,-1]
IndexedFaceSet946.creaseAngle = 3.14159
IndexedFaceSet946.texCoordIndex = [2,12,1,-1,1,0,2,-1,1,12,13,-1,4,8,16,-1,16,15,4,-1,11,10,17,-1,17,19,11,-1,21,20,5,-1,5,6,21,-1,14,21,6,-1,6,7,14,-1,16,8,1,-1,1,13,16,-1,20,18,9,-1,9,5,20,-1,3,2,0,-1,0,1,8,-1,4,15,14,-1,14,7,4,-1,6,5,23,-1,23,22,6,-1,5,9,24,-1,24,23,5,-1,10,11,25,-1,25,24,10,-1,0,8,27,-1,27,26,0,-1,8,4,28,-1,28,27,8,-1,4,7,29,-1,29,28,4,-1,7,6,22,-1,22,29,7,-1,15,16,31,-1,31,30,15,-1,16,13,32,-1,32,31,16,-1,13,12,33,-1,33,32,13,-1,19,17,35,-1,35,34,19,-1,18,20,36,-1,36,35,18,-1,20,21,37,-1,37,36,20,-1,21,14,38,-1,38,37,21,-1,14,15,30,-1,30,38,14,-1,42,41,40,-1,40,39,42,-1,40,43,39,-1,45,44,47,-1,47,46,45,-1,49,48,51,-1,51,50,49,-1,53,52,55,-1,55,54,53,-1,57,56,52,-1,52,53,57,-1,47,43,40,-1,40,46,47,-1,54,55,59,-1,59,58,54,-1,60,41,42,-1,41,46,40,-1,45,56,57,-1,57,44,45,-1,52,62,61,-1,61,55,52,-1,55,61,63,-1,63,59,55,-1,50,63,64,-1,64,49,50,-1,41,66,65,-1,65,46,41,-1,46,65,67,-1,67,45,46,-1,45,67,68,-1,68,56,45,-1,56,68,62,-1,62,52,56,-1,44,70,69,-1,69,47,44,-1,47,69,71,-1,71,43,47,-1,43,71,72,-1,72,39,43,-1,48,74,73,-1,73,51,48,-1,58,73,75,-1,75,54,58,-1,54,75,76,-1,76,53,54,-1,53,76,77,-1,77,57,53,-1,57,77,70,-1,70,44,57,-1,31,32,33,-1,33,71,69,-1,69,70,77,-1,33,69,77,-1,77,76,75,-1,75,73,74,-1,77,75,74,-1,74,35,36,-1,36,37,38,-1,74,36,38,-1,77,74,38,-1,33,77,38,-1,31,33,38,-1,31,38,30,-1]
Coordinate947 = x3d.Coordinate()

IndexedFaceSet946.coord = Coordinate947
TextureCoordinate948 = x3d.TextureCoordinate()

IndexedFaceSet946.texCoord = TextureCoordinate948

Shape942.geometry = IndexedFaceSet946

HAnimSegment941.children.append(Shape942)
Group949 = x3d.Group()
Group949.DEF = "t3_Sites"
"""None"""

HAnimSegment941.children.append(Group949)

HAnimJoint940.children.append(HAnimSegment941)
HAnimJoint950 = x3d.HAnimJoint()
HAnimJoint950.name = "vt2"
HAnimJoint950.DEF = "hanim_vt2"
HAnimJoint950.center = [0,1.19565,-0.013785751]
HAnimJoint950.ulimit = [0,0,0]
HAnimJoint950.llimit = [0,0,0]
HAnimSegment951 = x3d.HAnimSegment()
HAnimSegment951.name = "t2"
HAnimSegment951.DEF = "hanim_t2"
Shape952 = x3d.Shape()
Shape952.DEF = "t2_Shape"
Appearance953 = x3d.Appearance()
Material954 = x3d.Material()
Material954.USE = "SurfaceDefault"

Appearance953.material = Material954
ImageTexture955 = x3d.ImageTexture()
ImageTexture955.USE = "JinLOA4TextureAtlas"

Appearance953.texture = ImageTexture955

Shape952.appearance = Appearance953
IndexedFaceSet956 = x3d.IndexedFaceSet()
IndexedFaceSet956.coordIndex = [1,5,12,-1,7,2,19,-1,19,0,7,-1,0,11,7,-1,2,7,5,-1,5,1,2,-1,17,0,19,-1,0,17,6,-1,6,11,0,-1,20,2,1,-1,1,4,20,-1,2,20,19,-1,10,9,15,-1,15,14,10,-1,9,16,15,-1,8,10,14,-1,14,18,8,-1,13,6,17,-1,3,8,18,-1,18,21,3,-1,51,4,1,-1,1,12,51,-1,6,13,16,-1,16,9,6,-1,6,9,23,-1,23,22,6,-1,9,10,24,-1,24,23,9,-1,10,8,25,-1,25,24,10,-1,8,3,56,-1,56,25,8,-1,14,15,27,-1,27,26,14,-1,15,16,28,-1,28,27,15,-1,16,13,29,-1,29,28,16,-1,13,17,30,-1,30,29,13,-1,17,19,31,-1,31,30,17,-1,19,20,63,-1,63,31,19,-1,21,18,32,-1,32,65,21,-1,18,14,26,-1,26,32,18,-1,33,35,34,-1,38,37,36,-1,36,39,38,-1,37,38,40,-1,39,33,34,-1,34,38,39,-1,41,36,37,-1,37,40,42,-1,42,41,37,-1,20,4,33,-1,33,39,20,-1,39,36,20,-1,43,46,45,-1,45,44,43,-1,44,45,47,-1,49,48,46,-1,46,43,49,-1,50,41,42,-1,3,21,48,-1,48,49,3,-1,51,35,33,-1,33,4,51,-1,42,44,47,-1,47,50,42,-1,42,53,52,-1,52,44,42,-1,44,52,54,-1,54,43,44,-1,43,54,55,-1,55,49,43,-1,49,55,56,-1,56,3,49,-1,46,58,57,-1,57,45,46,-1,45,57,59,-1,59,47,45,-1,47,59,60,-1,60,50,47,-1,50,60,61,-1,61,41,50,-1,41,61,62,-1,62,36,41,-1,36,62,63,-1,63,20,36,-1,21,65,64,-1,64,48,21,-1,48,64,58,-1,58,46,48,-1,28,29,30,-1,31,63,62,-1,30,31,62,-1,62,61,60,-1,60,59,57,-1,62,60,57,-1,62,57,58,-1,58,64,65,-1,65,32,26,-1,58,65,26,-1,62,58,26,-1,30,62,26,-1,28,30,26,-1,27,28,26,-1]
IndexedFaceSet956.creaseAngle = 3.14159
IndexedFaceSet956.texCoordIndex = [0,1,16,-1,4,5,26,-1,26,3,4,-1,3,15,4,-1,5,4,6,-1,6,7,5,-1,22,3,26,-1,3,22,8,-1,8,15,3,-1,27,5,7,-1,7,10,27,-1,5,27,26,-1,14,9,20,-1,20,19,14,-1,9,21,20,-1,13,14,19,-1,19,23,13,-1,18,8,22,-1,11,12,24,-1,24,25,11,-1,17,2,0,-1,0,16,17,-1,8,18,21,-1,21,9,8,-1,8,9,29,-1,29,28,8,-1,9,14,30,-1,30,29,9,-1,14,13,31,-1,31,30,14,-1,12,11,32,-1,32,31,12,-1,19,20,34,-1,34,33,19,-1,20,21,35,-1,35,34,20,-1,21,18,36,-1,36,35,21,-1,18,22,37,-1,37,36,18,-1,22,26,38,-1,38,37,22,-1,26,27,39,-1,39,38,26,-1,25,24,41,-1,41,40,25,-1,23,19,33,-1,33,41,23,-1,42,44,43,-1,47,46,45,-1,45,48,47,-1,46,47,49,-1,48,51,50,-1,50,47,48,-1,52,45,46,-1,46,49,53,-1,53,52,46,-1,55,54,51,-1,51,48,55,-1,48,45,55,-1,56,59,58,-1,58,57,56,-1,57,58,60,-1,62,61,59,-1,59,56,62,-1,63,52,53,-1,65,64,67,-1,67,66,65,-1,68,44,42,-1,42,69,68,-1,53,57,60,-1,60,63,53,-1,53,71,70,-1,70,57,53,-1,57,70,72,-1,72,56,57,-1,56,72,73,-1,73,62,56,-1,66,73,74,-1,74,65,66,-1,59,76,75,-1,75,58,59,-1,58,75,77,-1,77,60,58,-1,60,77,78,-1,78,63,60,-1,63,78,79,-1,79,52,63,-1,52,79,80,-1,80,45,52,-1,45,80,81,-1,81,55,45,-1,64,83,82,-1,82,67,64,-1,61,82,76,-1,76,59,61,-1,35,36,37,-1,38,39,80,-1,37,38,80,-1,80,79,78,-1,78,77,75,-1,80,78,75,-1,80,75,76,-1,76,82,83,-1,83,41,33,-1,76,83,33,-1,80,76,33,-1,37,80,33,-1,35,37,33,-1,34,35,33,-1]
Coordinate957 = x3d.Coordinate()

IndexedFaceSet956.coord = Coordinate957
TextureCoordinate958 = x3d.TextureCoordinate()

IndexedFaceSet956.texCoord = TextureCoordinate958

Shape952.geometry = IndexedFaceSet956

HAnimSegment951.children.append(Shape952)
Group959 = x3d.Group()
Group959.DEF = "t2_Sites"
"""None"""

HAnimSegment951.children.append(Group959)

HAnimJoint950.children.append(HAnimSegment951)
HAnimJoint960 = x3d.HAnimJoint()
HAnimJoint960.name = "vt1"
HAnimJoint960.DEF = "hanim_vt1"
HAnimJoint960.center = [0,1.22,-0.0138]
HAnimJoint960.ulimit = [0,0,0]
HAnimJoint960.llimit = [0,0,0]
HAnimSegment961 = x3d.HAnimSegment()
HAnimSegment961.name = "t1"
HAnimSegment961.DEF = "hanim_t1"
Shape962 = x3d.Shape()
Shape962.DEF = "t1_Shape"
Appearance963 = x3d.Appearance()
Material964 = x3d.Material()
Material964.USE = "SurfaceDefault"

Appearance963.material = Material964
ImageTexture965 = x3d.ImageTexture()
ImageTexture965.USE = "JinLOA4TextureAtlas"

Appearance963.texture = ImageTexture965

Shape962.appearance = Appearance963
IndexedFaceSet966 = x3d.IndexedFaceSet()
IndexedFaceSet966.coordIndex = [1,5,3,-1,3,2,1,-1,5,6,3,-1,7,27,3,-1,3,6,7,-1,0,1,2,-1,43,11,10,-1,10,4,43,-1,5,1,12,-1,1,0,12,-1,35,26,12,-1,43,4,12,-1,4,5,12,-1,72,28,9,-1,9,28,27,-1,27,7,9,-1,5,4,10,-1,10,6,5,-1,29,72,8,-1,26,35,14,-1,14,49,26,-1,35,0,15,-1,15,14,35,-1,17,16,18,-1,18,19,17,-1,16,27,28,-1,28,18,16,-1,13,2,16,-1,27,16,2,-1,2,3,27,-1,19,18,29,-1,29,8,19,-1,18,28,72,-1,72,29,18,-1,0,13,15,-1,21,20,23,-1,23,61,21,-1,20,22,24,-1,24,23,20,-1,22,17,19,-1,19,24,22,-1,20,21,49,-1,49,14,20,-1,22,20,14,-1,14,15,22,-1,15,17,22,-1,61,23,30,-1,30,25,61,-1,23,24,33,-1,33,30,23,-1,24,19,8,-1,8,33,24,-1,0,2,13,-1,15,13,17,-1,16,17,13,-1,68,69,32,-1,32,31,68,-1,30,33,32,-1,33,8,34,-1,33,34,31,-1,31,32,33,-1,32,69,25,-1,25,30,32,-1,12,0,35,-1,37,36,58,-1,58,38,37,-1,38,58,39,-1,40,39,58,-1,58,41,40,-1,51,36,37,-1,43,42,44,-1,44,11,43,-1,38,12,37,-1,37,12,51,-1,45,12,26,-1,43,12,42,-1,42,12,38,-1,73,47,56,-1,47,40,41,-1,41,56,47,-1,38,39,44,-1,44,42,38,-1,46,59,73,-1,26,49,48,-1,48,45,26,-1,45,48,50,-1,50,51,45,-1,54,53,52,-1,52,55,54,-1,55,52,56,-1,56,41,55,-1,57,55,36,-1,41,58,36,-1,36,55,41,-1,53,59,46,-1,46,52,53,-1,52,46,73,-1,73,56,52,-1,51,50,57,-1,21,61,60,-1,60,62,21,-1,62,60,63,-1,63,64,62,-1,64,63,53,-1,53,54,64,-1,62,48,49,-1,49,21,62,-1,64,50,48,-1,48,62,64,-1,50,64,54,-1,61,25,65,-1,65,60,61,-1,60,65,66,-1,66,63,60,-1,63,66,59,-1,59,53,63,-1,51,57,36,-1,50,54,57,-1,55,57,54,-1,68,67,70,-1,70,69,68,-1,65,70,66,-1,66,71,59,-1,66,70,67,-1,67,71,66,-1,70,65,25,-1,25,69,70,-1,12,45,51,-1,81,82,83,-1,81,83,84,-1,81,84,85,-1,85,86,87,-1,81,85,87,-1,88,89,90,-1,88,90,91,-1,87,88,91,-1,91,74,75,-1,91,75,76,-1,87,91,76,-1,87,76,77,-1,81,87,77,-1,81,77,78,-1,81,78,79,-1,81,79,80,-1,7,6,75,-1,75,74,7,-1,6,10,76,-1,76,75,6,-1,10,11,77,-1,77,76,10,-1,11,44,78,-1,78,77,11,-1,44,39,79,-1,79,78,44,-1,39,40,80,-1,80,79,39,-1,40,47,81,-1,81,80,40,-1,47,73,82,-1,82,81,47,-1,73,59,83,-1,83,82,73,-1,59,71,84,-1,84,83,59,-1,71,67,85,-1,85,84,71,-1,67,68,86,-1,86,85,67,-1,68,31,87,-1,87,86,68,-1,31,34,88,-1,88,87,31,-1,34,8,89,-1,89,88,34,-1,8,72,90,-1,90,89,8,-1,72,9,91,-1,91,90,72,-1,9,7,74,-1,74,91,9,-1]
IndexedFaceSet966.creaseAngle = 3.14159
IndexedFaceSet966.texCoordIndex = [14,15,0,-1,0,16,14,-1,15,19,0,-1,21,10,11,-1,11,18,21,-1,5,2,1,-1,6,25,24,-1,24,4,6,-1,3,2,13,-1,2,5,13,-1,66,7,13,-1,6,4,17,-1,4,15,17,-1,20,9,23,-1,23,9,10,-1,10,21,23,-1,15,4,24,-1,24,19,15,-1,12,20,22,-1,48,47,26,-1,26,27,48,-1,47,49,28,-1,28,26,47,-1,31,32,29,-1,29,30,31,-1,32,53,54,-1,54,29,32,-1,33,50,32,-1,53,32,50,-1,50,51,53,-1,30,29,55,-1,55,56,30,-1,29,54,52,-1,52,55,29,-1,49,33,28,-1,36,41,40,-1,40,35,36,-1,37,39,38,-1,38,34,37,-1,39,31,30,-1,30,38,39,-1,42,36,43,-1,43,45,42,-1,39,37,26,-1,26,28,39,-1,28,31,39,-1,35,44,57,-1,57,46,35,-1,34,38,65,-1,65,58,34,-1,38,30,56,-1,56,65,38,-1,49,50,33,-1,28,33,31,-1,32,31,33,-1,62,63,64,-1,64,61,62,-1,57,65,64,-1,65,56,60,-1,65,60,61,-1,61,64,65,-1,64,63,59,-1,59,57,64,-1,13,8,66,-1,69,68,67,-1,67,70,69,-1,70,67,71,-1,74,73,72,-1,72,75,74,-1,76,78,77,-1,80,79,82,-1,82,81,80,-1,83,84,77,-1,77,84,76,-1,85,84,86,-1,80,87,79,-1,79,87,70,-1,132,90,89,-1,90,74,75,-1,75,89,90,-1,70,71,82,-1,82,79,70,-1,88,91,132,-1,94,93,92,-1,92,95,94,-1,95,92,96,-1,96,97,95,-1,100,99,98,-1,98,101,100,-1,101,98,102,-1,102,103,101,-1,104,101,105,-1,103,106,105,-1,105,101,103,-1,99,108,107,-1,107,98,99,-1,98,107,109,-1,109,102,98,-1,97,96,104,-1,112,111,110,-1,110,113,112,-1,116,115,114,-1,114,117,116,-1,117,114,99,-1,99,100,117,-1,120,119,118,-1,118,112,120,-1,117,96,92,-1,92,116,117,-1,96,117,100,-1,111,122,121,-1,121,123,111,-1,115,125,124,-1,124,114,115,-1,114,124,108,-1,108,99,114,-1,97,104,105,-1,96,100,104,-1,101,104,100,-1,127,126,129,-1,129,128,127,-1,121,129,124,-1,124,130,108,-1,124,129,126,-1,126,130,124,-1,129,121,131,-1,131,128,129,-1,84,85,133,-1,141,142,143,-1,141,143,144,-1,141,144,145,-1,145,146,147,-1,141,145,147,-1,148,149,150,-1,148,150,151,-1,147,148,151,-1,151,134,135,-1,151,135,136,-1,147,151,136,-1,147,136,137,-1,141,147,137,-1,141,137,138,-1,141,138,139,-1,141,139,140,-1,21,18,135,-1,135,134,21,-1,19,24,136,-1,136,135,19,-1,24,25,137,-1,137,136,24,-1,81,82,138,-1,138,137,81,-1,82,71,139,-1,139,138,82,-1,73,74,140,-1,140,139,73,-1,74,90,141,-1,141,140,74,-1,90,132,142,-1,142,141,90,-1,132,91,143,-1,143,142,132,-1,108,130,144,-1,144,143,108,-1,130,126,145,-1,145,144,130,-1,126,127,146,-1,146,145,126,-1,62,61,147,-1,147,146,62,-1,61,60,148,-1,148,147,61,-1,60,56,149,-1,149,148,60,-1,22,20,150,-1,150,149,22,-1,20,23,151,-1,151,150,20,-1,23,21,134,-1,134,151,23,-1]
Coordinate967 = x3d.Coordinate()

IndexedFaceSet966.coord = Coordinate967
TextureCoordinate968 = x3d.TextureCoordinate()

IndexedFaceSet966.texCoord = TextureCoordinate968

Shape962.geometry = IndexedFaceSet966

HAnimSegment961.children.append(Shape962)
Group969 = x3d.Group()
Group969.DEF = "t1_Sites"
"""(suprasternale_pt 0.0084 1.4714 0.0551) (cervicale_pt 0.0064 1.520 -0.0815)"""
HAnimSite970 = x3d.HAnimSite()
HAnimSite970.name = "suprasternale_pt"
HAnimSite970.DEF = "hanim_suprasternale_pt"
HAnimSite970.translation = [0,1.22,0.08]
TouchSensor971 = x3d.TouchSensor()
TouchSensor971.description = "HAnimSite suprasternale_pt 12"

HAnimSite970.children.append(TouchSensor971)
Shape972 = x3d.Shape()
Shape972.USE = "HAnimSiteShape"

HAnimSite970.children.append(Shape972)

Group969.children.append(HAnimSite970)
HAnimSite973 = x3d.HAnimSite()
HAnimSite973.name = "cervicale_pt"
HAnimSite973.DEF = "hanim_cervicale_pt"
HAnimSite973.translation = [0,1.22,-0.08]
TouchSensor974 = x3d.TouchSensor()
TouchSensor974.description = "HAnimSite cervicale_pt 10"

HAnimSite973.children.append(TouchSensor974)
Shape975 = x3d.Shape()
Shape975.USE = "HAnimSiteShape"

HAnimSite973.children.append(Shape975)

Group969.children.append(HAnimSite973)

HAnimSegment961.children.append(Group969)

HAnimJoint960.children.append(HAnimSegment961)
HAnimJoint976 = x3d.HAnimJoint()
HAnimJoint976.name = "vc7"
HAnimJoint976.DEF = "hanim_vc7"
HAnimJoint976.center = [0,1.245375,-0.015063751]
HAnimJoint976.ulimit = [0,0,0]
HAnimJoint976.llimit = [0,0,0]
HAnimSegment977 = x3d.HAnimSegment()
HAnimSegment977.name = "c7"
HAnimSegment977.DEF = "hanim_c7"
Shape978 = x3d.Shape()
Shape978.DEF = "c7_Shape"
Appearance979 = x3d.Appearance()
Material980 = x3d.Material()
Material980.USE = "SurfaceDefault"

Appearance979.material = Material980
ImageTexture981 = x3d.ImageTexture()
ImageTexture981.USE = "JinLOA4TextureAtlas"

Appearance979.texture = ImageTexture981

Shape978.appearance = Appearance979
IndexedFaceSet982 = x3d.IndexedFaceSet()
IndexedFaceSet982.coordIndex = [5,6,33,-1,33,28,5,-1,34,32,1,-1,1,7,34,-1,30,34,7,-1,7,8,30,-1,28,29,11,-1,11,5,28,-1,29,35,10,-1,10,11,29,-1,14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,1,0,13,-1,13,12,1,-1,0,2,14,-1,14,13,0,-1,2,3,15,-1,15,14,2,-1,3,4,16,-1,16,15,3,-1,4,6,17,-1,17,16,4,-1,6,5,18,-1,18,17,6,-1,5,11,19,-1,19,18,5,-1,11,10,20,-1,20,19,11,-1,10,9,21,-1,21,20,10,-1,9,8,22,-1,22,21,9,-1,8,7,23,-1,23,22,8,-1,7,1,12,-1,12,23,7,-1,0,1,32,-1,32,24,0,-1,2,0,24,-1,24,25,2,-1,3,2,25,-1,25,26,3,-1,4,3,26,-1,26,27,4,-1,6,4,27,-1,27,33,6,-1,8,9,31,-1,31,30,8,-1,9,10,35,-1,35,31,9,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,24,32,37,-1,37,36,24,-1,32,34,38,-1,38,37,32,-1,34,30,39,-1,39,38,34,-1,30,31,40,-1,40,39,30,-1,31,35,41,-1,41,40,31,-1,35,29,42,-1,42,41,35,-1,29,28,43,-1,43,42,29,-1,28,33,44,-1,44,43,28,-1,33,27,45,-1,45,44,33,-1,27,26,46,-1,46,45,27,-1,26,25,47,-1,47,46,26,-1,25,24,36,-1,36,47,25,-1]
IndexedFaceSet982.creaseAngle = 3.14159
IndexedFaceSet982.texCoordIndex = [5,6,33,-1,33,28,5,-1,34,32,1,-1,1,7,34,-1,30,34,7,-1,7,8,30,-1,28,29,11,-1,11,5,28,-1,29,35,10,-1,10,11,29,-1,14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,1,0,13,-1,13,12,1,-1,0,2,14,-1,14,13,0,-1,2,3,15,-1,15,14,2,-1,3,4,16,-1,16,15,3,-1,4,6,17,-1,17,16,4,-1,6,5,18,-1,18,17,6,-1,5,11,19,-1,19,18,5,-1,11,10,20,-1,20,19,11,-1,10,9,21,-1,21,20,10,-1,9,8,22,-1,22,21,9,-1,8,7,23,-1,23,22,8,-1,7,1,12,-1,12,23,7,-1,0,1,32,-1,32,24,0,-1,2,0,24,-1,24,25,2,-1,3,2,25,-1,25,26,3,-1,4,3,26,-1,26,27,4,-1,6,4,27,-1,27,33,6,-1,8,9,31,-1,31,30,8,-1,9,10,35,-1,35,31,9,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,24,32,37,-1,37,36,24,-1,32,34,38,-1,38,37,32,-1,34,30,39,-1,39,38,34,-1,30,31,40,-1,40,39,30,-1,31,35,41,-1,41,40,31,-1,35,29,42,-1,42,41,35,-1,29,28,43,-1,43,42,29,-1,28,33,44,-1,44,43,28,-1,33,27,45,-1,45,44,33,-1,27,26,46,-1,46,45,27,-1,26,25,47,-1,47,46,26,-1,25,24,36,-1,36,47,25,-1]
Coordinate983 = x3d.Coordinate()

IndexedFaceSet982.coord = Coordinate983
TextureCoordinate984 = x3d.TextureCoordinate()

IndexedFaceSet982.texCoord = TextureCoordinate984

Shape978.geometry = IndexedFaceSet982

HAnimSegment977.children.append(Shape978)
Group985 = x3d.Group()
Group985.DEF = "c7_Sites"
"""(l_neck_base_pt 0.0646 1.5141 -0.0380) (r_neck_base_pt -0.0419 1.5149 -0.0220)"""
HAnimSite986 = x3d.HAnimSite()
HAnimSite986.name = "l_neck_base_pt"
HAnimSite986.DEF = "hanim_l_neck_base_pt"
HAnimSite986.translation = [0.06,1.26,0]
TouchSensor987 = x3d.TouchSensor()
TouchSensor987.description = "HAnimSite l_neck_base_pt 82"

HAnimSite986.children.append(TouchSensor987)
Shape988 = x3d.Shape()
Shape988.USE = "HAnimSiteShape"

HAnimSite986.children.append(Shape988)

Group985.children.append(HAnimSite986)
HAnimSite989 = x3d.HAnimSite()
HAnimSite989.name = "r_neck_base_pt"
HAnimSite989.DEF = "hanim_r_neck_base_pt"
HAnimSite989.translation = [-0.06,1.26,0]
TouchSensor990 = x3d.TouchSensor()
TouchSensor990.description = "HAnimSite r_neck_base_pt 83"

HAnimSite989.children.append(TouchSensor990)
Shape991 = x3d.Shape()
Shape991.USE = "HAnimSiteShape"

HAnimSite989.children.append(Shape991)

Group985.children.append(HAnimSite989)

HAnimSegment977.children.append(Group985)

HAnimJoint976.children.append(HAnimSegment977)
HAnimJoint992 = x3d.HAnimJoint()
HAnimJoint992.name = "vc6"
HAnimJoint992.DEF = "hanim_vc6"
HAnimJoint992.center = [0,1.2575251,-0.015063751]
HAnimJoint992.ulimit = [0,0,0]
HAnimJoint992.llimit = [0,0,0]
HAnimSegment993 = x3d.HAnimSegment()
HAnimSegment993.name = "c6"
HAnimSegment993.DEF = "hanim_c6"
Shape994 = x3d.Shape()
Shape994.DEF = "c6_Shape"
Appearance995 = x3d.Appearance()
Material996 = x3d.Material()
Material996.USE = "SurfaceDefault"

Appearance995.material = Material996
ImageTexture997 = x3d.ImageTexture()
ImageTexture997.USE = "JinLOA4TextureAtlas"

Appearance995.texture = ImageTexture997

Shape994.appearance = Appearance995
IndexedFaceSet998 = x3d.IndexedFaceSet()
IndexedFaceSet998.coordIndex = [12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1]
IndexedFaceSet998.creaseAngle = 3.14159
IndexedFaceSet998.texCoordIndex = [12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1]
Coordinate999 = x3d.Coordinate()

IndexedFaceSet998.coord = Coordinate999
TextureCoordinate1000 = x3d.TextureCoordinate()

IndexedFaceSet998.texCoord = TextureCoordinate1000

Shape994.geometry = IndexedFaceSet998

HAnimSegment993.children.append(Shape994)
Group1001 = x3d.Group()
Group1001.DEF = "c6_Sites"
"""None"""

HAnimSegment993.children.append(Group1001)

HAnimJoint992.children.append(HAnimSegment993)
HAnimJoint1002 = x3d.HAnimJoint()
HAnimJoint1002.name = "vc5"
HAnimJoint1002.DEF = "hanim_vc5"
HAnimJoint1002.center = [0,1.2699,-0.015063751]
HAnimJoint1002.ulimit = [0,0,0]
HAnimJoint1002.llimit = [0,0,0]
HAnimSegment1003 = x3d.HAnimSegment()
HAnimSegment1003.name = "c5"
HAnimSegment1003.DEF = "hanim_c5"
Shape1004 = x3d.Shape()
Shape1004.DEF = "c5_Shape"
Appearance1005 = x3d.Appearance()
Material1006 = x3d.Material()
Material1006.USE = "SurfaceDefault"

Appearance1005.material = Material1006
ImageTexture1007 = x3d.ImageTexture()
ImageTexture1007.USE = "JinLOA4TextureAtlas"

Appearance1005.texture = ImageTexture1007

Shape1004.appearance = Appearance1005
IndexedFaceSet1008 = x3d.IndexedFaceSet()
IndexedFaceSet1008.coordIndex = [12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1]
IndexedFaceSet1008.creaseAngle = 3.14159
IndexedFaceSet1008.texCoordIndex = [12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1]
Coordinate1009 = x3d.Coordinate()

IndexedFaceSet1008.coord = Coordinate1009
TextureCoordinate1010 = x3d.TextureCoordinate()

IndexedFaceSet1008.texCoord = TextureCoordinate1010

Shape1004.geometry = IndexedFaceSet1008

HAnimSegment1003.children.append(Shape1004)
Group1011 = x3d.Group()
Group1011.DEF = "c5_Sites"
"""None"""

HAnimSegment1003.children.append(Group1011)

HAnimJoint1002.children.append(HAnimSegment1003)
HAnimJoint1012 = x3d.HAnimJoint()
HAnimJoint1012.name = "vc4"
HAnimJoint1012.DEF = "hanim_vc4"
HAnimJoint1012.center = [0,1.2822751,-0.015063751]
HAnimJoint1012.ulimit = [0,0,0]
HAnimJoint1012.llimit = [0,0,0]
HAnimSegment1013 = x3d.HAnimSegment()
HAnimSegment1013.name = "c4"
HAnimSegment1013.DEF = "hanim_c4"
Shape1014 = x3d.Shape()
Shape1014.DEF = "c4_Shape"
Appearance1015 = x3d.Appearance()
Material1016 = x3d.Material()
Material1016.USE = "SurfaceDefault"

Appearance1015.material = Material1016
ImageTexture1017 = x3d.ImageTexture()
ImageTexture1017.USE = "JinLOA4TextureAtlas"

Appearance1015.texture = ImageTexture1017

Shape1014.appearance = Appearance1015
IndexedFaceSet1018 = x3d.IndexedFaceSet()
IndexedFaceSet1018.coordIndex = [12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1]
IndexedFaceSet1018.creaseAngle = 3.14159
IndexedFaceSet1018.texCoordIndex = [12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1]
Coordinate1019 = x3d.Coordinate()

IndexedFaceSet1018.coord = Coordinate1019
TextureCoordinate1020 = x3d.TextureCoordinate()

IndexedFaceSet1018.texCoord = TextureCoordinate1020

Shape1014.geometry = IndexedFaceSet1018

HAnimSegment1013.children.append(Shape1014)
Group1021 = x3d.Group()
Group1021.DEF = "c4_Sites"
"""None"""

HAnimSegment1013.children.append(Group1021)

HAnimJoint1012.children.append(HAnimSegment1013)
HAnimJoint1022 = x3d.HAnimJoint()
HAnimJoint1022.name = "vc3"
HAnimJoint1022.DEF = "hanim_vc3"
HAnimJoint1022.center = [0,1.2951001,-0.015063751]
HAnimJoint1022.ulimit = [0,0,0]
HAnimJoint1022.llimit = [0,0,0]
HAnimSegment1023 = x3d.HAnimSegment()
HAnimSegment1023.name = "c3"
HAnimSegment1023.DEF = "hanim_c3"
Shape1024 = x3d.Shape()
Shape1024.DEF = "c3_Shape"
Appearance1025 = x3d.Appearance()
Material1026 = x3d.Material()
Material1026.USE = "SurfaceDefault"

Appearance1025.material = Material1026
ImageTexture1027 = x3d.ImageTexture()
ImageTexture1027.USE = "JinLOA4TextureAtlas"

Appearance1025.texture = ImageTexture1027

Shape1024.appearance = Appearance1025
IndexedFaceSet1028 = x3d.IndexedFaceSet()
IndexedFaceSet1028.coordIndex = [8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1]
IndexedFaceSet1028.creaseAngle = 3.14159
IndexedFaceSet1028.texCoordIndex = [8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1]
Coordinate1029 = x3d.Coordinate()

IndexedFaceSet1028.coord = Coordinate1029
TextureCoordinate1030 = x3d.TextureCoordinate()

IndexedFaceSet1028.texCoord = TextureCoordinate1030

Shape1024.geometry = IndexedFaceSet1028

HAnimSegment1023.children.append(Shape1024)
Group1031 = x3d.Group()
Group1031.DEF = "c3_Sites"
"""None"""

HAnimSegment1023.children.append(Group1031)

HAnimJoint1022.children.append(HAnimSegment1023)
HAnimJoint1032 = x3d.HAnimJoint()
HAnimJoint1032.name = "vc2"
HAnimJoint1032.DEF = "hanim_vc2"
HAnimJoint1032.center = [0,1.307,-0.015]
HAnimJoint1032.ulimit = [0,0,0]
HAnimJoint1032.llimit = [0,0,0]
HAnimSegment1033 = x3d.HAnimSegment()
HAnimSegment1033.name = "c2"
HAnimSegment1033.DEF = "hanim_c2"
Shape1034 = x3d.Shape()
Shape1034.DEF = "c2_Shape"
Appearance1035 = x3d.Appearance()
Material1036 = x3d.Material()
Material1036.USE = "SurfaceDefault"

Appearance1035.material = Material1036
ImageTexture1037 = x3d.ImageTexture()
ImageTexture1037.USE = "JinLOA4TextureAtlas"

Appearance1035.texture = ImageTexture1037

Shape1034.appearance = Appearance1035
IndexedFaceSet1038 = x3d.IndexedFaceSet()
IndexedFaceSet1038.coordIndex = [14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,0,1,13,-1,13,12,0,-1,1,7,14,-1,14,13,1,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,6,19,-1,19,18,11,-1,6,5,20,-1,20,19,6,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,12,-1,12,23,2,-1,1,0,24,-1,24,32,1,-1,0,2,25,-1,25,24,0,-1,2,3,26,-1,26,25,2,-1,3,4,27,-1,27,26,3,-1,4,5,33,-1,33,27,4,-1,9,8,30,-1,30,31,9,-1,10,9,31,-1,31,35,10,-1,5,6,28,-1,28,33,5,-1,7,1,32,-1,32,34,7,-1,8,7,34,-1,34,30,8,-1,6,11,29,-1,29,28,6,-1,11,10,35,-1,35,29,11,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,32,24,37,-1,37,36,32,-1,24,25,38,-1,38,37,24,-1,25,26,39,-1,39,38,25,-1,26,27,40,-1,40,39,26,-1,27,33,41,-1,41,40,27,-1,33,28,42,-1,42,41,33,-1,28,29,43,-1,43,42,28,-1,29,35,44,-1,44,43,29,-1,35,31,45,-1,45,44,35,-1,31,30,46,-1,46,45,31,-1,30,34,47,-1,47,46,30,-1,34,32,36,-1,36,47,34,-1]
IndexedFaceSet1038.creaseAngle = 3.14159
IndexedFaceSet1038.texCoordIndex = [14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,0,1,13,-1,13,12,0,-1,1,7,14,-1,14,13,1,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,6,19,-1,19,18,11,-1,6,5,20,-1,20,19,6,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,12,-1,12,23,2,-1,1,0,24,-1,24,32,1,-1,0,2,25,-1,25,24,0,-1,2,3,26,-1,26,25,2,-1,3,4,27,-1,27,26,3,-1,4,5,33,-1,33,27,4,-1,9,8,30,-1,30,31,9,-1,10,9,31,-1,31,35,10,-1,5,6,28,-1,28,33,5,-1,7,1,32,-1,32,34,7,-1,8,7,34,-1,34,30,8,-1,6,11,29,-1,29,28,6,-1,11,10,35,-1,35,29,11,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,32,24,37,-1,37,36,32,-1,24,25,38,-1,38,37,24,-1,25,26,39,-1,39,38,25,-1,26,27,40,-1,40,39,26,-1,27,33,41,-1,41,40,27,-1,33,28,42,-1,42,41,33,-1,28,29,43,-1,43,42,28,-1,29,35,44,-1,44,43,29,-1,35,31,45,-1,45,44,35,-1,31,30,46,-1,46,45,31,-1,30,34,47,-1,47,46,30,-1,34,32,36,-1,36,47,34,-1]
Coordinate1039 = x3d.Coordinate()

IndexedFaceSet1038.coord = Coordinate1039
TextureCoordinate1040 = x3d.TextureCoordinate()

IndexedFaceSet1038.texCoord = TextureCoordinate1040

Shape1034.geometry = IndexedFaceSet1038

HAnimSegment1033.children.append(Shape1034)
Group1041 = x3d.Group()
Group1041.DEF = "c2_Sites"
"""(adams_apple x y z)"""
HAnimSite1042 = x3d.HAnimSite()
HAnimSite1042.name = "adams_apple_pt"
HAnimSite1042.DEF = "hanim_adams_apple_pt"
HAnimSite1042.translation = [0,1.29,0.04]
TouchSensor1043 = x3d.TouchSensor()
TouchSensor1043.description = "HAnimSite adams_apple_pt 11"

HAnimSite1042.children.append(TouchSensor1043)
Shape1044 = x3d.Shape()
Shape1044.USE = "HAnimSiteShape"

HAnimSite1042.children.append(Shape1044)

Group1041.children.append(HAnimSite1042)

HAnimSegment1033.children.append(Group1041)

HAnimJoint1032.children.append(HAnimSegment1033)
HAnimJoint1045 = x3d.HAnimJoint()
HAnimJoint1045.name = "vc1"
HAnimJoint1045.DEF = "hanim_vc1"
HAnimJoint1045.center = [0,1.3185,-0.015063751]
HAnimJoint1045.ulimit = [0,0,0]
HAnimJoint1045.llimit = [0,0,0]
HAnimSegment1046 = x3d.HAnimSegment()
HAnimSegment1046.name = "c1"
HAnimSegment1046.DEF = "hanim_c1"
Shape1047 = x3d.Shape()
Shape1047.DEF = "c1_Shape"
Appearance1048 = x3d.Appearance()
Material1049 = x3d.Material()
Material1049.USE = "SurfaceDefault"

Appearance1048.material = Material1049
ImageTexture1050 = x3d.ImageTexture()
ImageTexture1050.USE = "JinLOA4TextureAtlas"

Appearance1048.texture = ImageTexture1050

Shape1047.appearance = Appearance1048
IndexedFaceSet1051 = x3d.IndexedFaceSet()
IndexedFaceSet1051.coordIndex = [8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1]
IndexedFaceSet1051.creaseAngle = 3.14159
IndexedFaceSet1051.texCoordIndex = [8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1]
Coordinate1052 = x3d.Coordinate()

IndexedFaceSet1051.coord = Coordinate1052
TextureCoordinate1053 = x3d.TextureCoordinate()

IndexedFaceSet1051.texCoord = TextureCoordinate1053

Shape1047.geometry = IndexedFaceSet1051

HAnimSegment1046.children.append(Shape1047)
Group1054 = x3d.Group()
Group1054.DEF = "c1_Sites"
"""None"""

HAnimSegment1046.children.append(Group1054)

HAnimJoint1045.children.append(HAnimSegment1046)
HAnimJoint1055 = x3d.HAnimJoint()
HAnimJoint1055.name = "skullbase"
HAnimJoint1055.DEF = "hanim_skullbase"
HAnimJoint1055.center = [0,1.3126501,-0.01544175]
HAnimJoint1055.ulimit = [0,0,0]
HAnimJoint1055.llimit = [0,0,0]
HAnimSegment1056 = x3d.HAnimSegment()
HAnimSegment1056.name = "skull"
HAnimSegment1056.DEF = "hanim_skull"
Shape1057 = x3d.Shape()
Shape1057.DEF = "skull_Shape"
Appearance1058 = x3d.Appearance()
Material1059 = x3d.Material()
Material1059.USE = "SurfaceDefault"

Appearance1058.material = Material1059
ImageTexture1060 = x3d.ImageTexture()
ImageTexture1060.USE = "JinLOA4TextureAtlas"

Appearance1058.texture = ImageTexture1060

Shape1057.appearance = Appearance1058
IndexedFaceSet1061 = x3d.IndexedFaceSet()
IndexedFaceSet1061.coordIndex = [51,38,41,-1,41,43,51,-1,43,52,171,-1,171,151,43,-1,49,42,41,-1,41,38,49,-1,44,186,171,-1,171,52,44,-1,78,76,51,-1,51,43,78,-1,189,78,43,-1,43,151,189,-1,9,172,13,-1,13,10,9,-1,73,193,9,-1,9,10,73,-1,11,50,27,-1,16,13,172,-1,13,67,14,-1,68,15,14,-1,7,6,67,-1,13,16,67,-1,7,67,16,-1,16,172,173,-1,7,16,136,-1,7,136,130,-1,131,132,173,-1,68,19,18,-1,18,15,68,-1,20,32,18,-1,17,8,32,-1,15,66,13,-1,13,14,15,-1,32,23,24,-1,24,17,32,-1,21,24,23,-1,21,22,24,-1,24,22,17,-1,27,25,11,-1,25,31,11,-1,22,28,17,-1,27,30,29,-1,12,26,29,-1,26,27,29,-1,27,28,30,-1,30,28,22,-1,6,14,67,-1,1,34,31,-1,34,36,35,-1,34,35,31,-1,34,1,36,-1,49,37,1,-1,1,40,49,-1,39,37,49,-1,49,38,39,-1,37,39,1,-1,42,49,40,-1,40,0,42,-1,44,52,0,-1,186,44,0,-1,0,149,186,-1,51,76,45,-1,45,76,77,-1,53,45,77,-1,1,39,45,-1,45,53,1,-1,45,39,38,-1,38,51,45,-1,53,77,46,-1,77,74,33,-1,33,46,77,-1,1,53,46,-1,46,36,1,-1,46,33,35,-1,35,36,46,-1,74,50,33,-1,8,17,47,-1,11,31,50,-1,35,33,50,-1,31,35,50,-1,50,74,75,-1,47,75,8,-1,27,50,28,-1,28,50,47,-1,28,47,17,-1,75,73,48,-1,48,73,10,-1,66,48,10,-1,10,13,66,-1,75,66,8,-1,66,75,48,-1,8,66,18,-1,18,32,8,-1,15,18,66,-1,47,50,75,-1,41,52,43,-1,42,0,41,-1,0,52,41,-1,0,54,149,-1,244,245,54,-1,0,56,54,-1,0,40,55,-1,55,57,0,-1,3,57,55,-1,0,57,56,-1,3,62,5,-1,5,62,58,-1,3,64,62,-1,2,61,62,-1,62,64,2,-1,3,60,64,-1,55,40,59,-1,64,60,59,-1,64,59,135,-1,149,54,245,-1,5,57,3,-1,54,5,244,-1,152,63,61,-1,153,63,152,-1,63,5,58,-1,153,244,63,-1,244,5,63,-1,58,61,63,-1,58,62,61,-1,56,5,54,-1,56,57,5,-1,60,3,55,-1,60,55,59,-1,1,133,135,-1,59,40,1,-1,59,1,135,-1,65,135,133,-1,2,65,133,-1,2,64,65,-1,64,135,65,-1,73,75,69,-1,263,193,73,-1,73,69,263,-1,69,75,74,-1,74,71,69,-1,71,74,77,-1,77,72,71,-1,69,71,266,-1,266,263,69,-1,72,70,266,-1,266,71,72,-1,78,72,77,-1,77,76,78,-1,189,70,72,-1,72,78,189,-1,138,123,113,-1,79,122,123,-1,122,79,80,-1,137,124,81,-1,137,81,82,-1,137,82,83,-1,83,79,137,-1,79,83,80,-1,84,116,122,-1,124,84,122,-1,84,119,116,-1,123,122,113,-1,113,122,109,-1,115,138,113,-1,113,114,115,-1,117,286,158,-1,158,112,117,-1,122,116,109,-1,79,123,133,-1,133,123,138,-1,133,137,79,-1,129,138,115,-1,110,117,112,-1,111,117,110,-1,2,133,138,-1,109,85,113,-1,86,113,85,-1,107,294,160,-1,160,126,107,-1,107,126,125,-1,125,108,107,-1,125,127,87,-1,87,108,125,-1,108,87,103,-1,103,104,108,-1,114,301,154,-1,154,115,114,-1,302,114,86,-1,86,159,302,-1,114,113,86,-1,116,105,109,-1,109,105,87,-1,85,88,86,-1,109,87,85,-1,104,174,305,-1,305,108,104,-1,305,175,108,-1,105,103,87,-1,307,91,170,-1,170,150,307,-1,174,104,95,-1,95,162,174,-1,311,150,170,-1,170,177,311,-1,116,90,105,-1,89,90,116,-1,94,168,167,-1,167,93,94,-1,105,90,96,-1,97,95,104,-1,104,103,97,-1,120,121,95,-1,95,97,120,-1,105,96,97,-1,97,103,105,-1,120,97,96,-1,96,98,120,-1,121,100,95,-1,163,91,162,-1,93,170,99,-1,98,96,90,-1,90,101,98,-1,99,163,100,-1,110,112,92,-1,101,90,89,-1,89,106,101,-1,92,112,165,-1,165,177,170,-1,175,294,107,-1,107,108,175,-1,119,89,116,-1,118,111,119,-1,118,117,111,-1,152,138,129,-1,2,138,61,-1,61,138,152,-1,87,127,88,-1,88,85,87,-1,124,119,84,-1,119,111,164,-1,111,166,164,-1,111,110,166,-1,92,166,110,-1,133,4,137,-1,133,134,4,-1,160,176,128,-1,128,126,160,-1,126,128,127,-1,127,125,126,-1,80,81,124,-1,124,122,80,-1,82,81,80,-1,80,83,82,-1,129,115,154,-1,154,152,129,-1,94,140,139,-1,139,102,94,-1,93,141,140,-1,140,94,93,-1,99,142,141,-1,141,93,99,-1,100,143,142,-1,142,99,100,-1,121,144,143,-1,143,100,121,-1,120,145,144,-1,144,121,120,-1,98,146,145,-1,145,120,98,-1,101,147,146,-1,146,98,101,-1,106,148,147,-1,147,101,106,-1,106,102,139,-1,139,148,106,-1,114,302,301,-1,88,127,155,-1,155,157,88,-1,127,161,156,-1,156,155,127,-1,352,353,156,-1,156,161,352,-1,156,353,354,-1,155,156,354,-1,155,354,157,-1,127,128,161,-1,161,128,176,-1,176,352,161,-1,168,94,102,-1,102,169,168,-1,170,93,167,-1,169,102,106,-1,106,164,169,-1,170,91,99,-1,99,91,163,-1,100,163,162,-1,162,95,100,-1,91,307,174,-1,174,162,91,-1,164,106,89,-1,164,89,119,-1,165,170,167,-1,92,165,167,-1,167,168,92,-1,166,92,168,-1,168,169,166,-1,164,166,169,-1,165,112,177,-1,177,112,158,-1,158,311,177,-1,180,179,178,-1,178,181,180,-1,179,151,171,-1,171,182,179,-1,183,181,178,-1,178,184,183,-1,185,182,171,-1,171,186,185,-1,187,179,180,-1,180,188,187,-1,189,151,179,-1,179,187,189,-1,9,191,190,-1,190,172,9,-1,192,191,9,-1,9,193,192,-1,194,196,195,-1,197,172,190,-1,190,199,198,-1,200,199,201,-1,202,198,203,-1,190,198,197,-1,202,197,198,-1,197,173,172,-1,202,204,197,-1,202,205,204,-1,206,173,207,-1,200,201,208,-1,208,209,200,-1,210,208,211,-1,212,211,213,-1,201,199,190,-1,190,214,201,-1,211,212,215,-1,215,216,211,-1,217,216,215,-1,217,215,218,-1,215,212,218,-1,196,194,219,-1,219,194,220,-1,218,212,221,-1,196,223,222,-1,224,223,225,-1,225,223,196,-1,196,222,221,-1,222,218,221,-1,203,198,199,-1,226,220,227,-1,227,229,228,-1,227,220,229,-1,227,228,226,-1,183,230,226,-1,226,231,183,-1,232,181,183,-1,183,231,232,-1,231,226,232,-1,184,233,230,-1,230,183,184,-1,185,233,182,-1,186,149,233,-1,233,185,186,-1,180,234,188,-1,234,235,188,-1,236,235,234,-1,226,236,234,-1,234,232,226,-1,234,180,181,-1,181,232,234,-1,236,237,235,-1,235,237,238,-1,238,239,235,-1,226,228,237,-1,237,236,226,-1,237,228,229,-1,229,238,237,-1,239,238,195,-1,213,240,212,-1,194,195,220,-1,229,195,238,-1,220,195,229,-1,195,241,239,-1,240,213,241,-1,196,221,195,-1,221,240,195,-1,221,212,240,-1,241,242,192,-1,242,191,192,-1,214,190,191,-1,191,242,214,-1,241,213,214,-1,214,242,241,-1,213,211,208,-1,208,214,213,-1,201,214,208,-1,240,241,195,-1,178,179,182,-1,184,178,233,-1,233,178,182,-1,233,149,243,-1,244,243,245,-1,233,243,246,-1,233,248,247,-1,247,230,233,-1,249,247,248,-1,233,246,248,-1,249,251,250,-1,251,252,250,-1,249,250,253,-1,254,253,250,-1,250,255,254,-1,249,253,256,-1,247,257,230,-1,253,257,256,-1,253,258,257,-1,149,245,243,-1,251,249,248,-1,243,244,251,-1,152,255,259,-1,153,152,259,-1,259,252,251,-1,153,259,244,-1,244,259,251,-1,252,259,255,-1,252,255,250,-1,246,243,251,-1,246,251,248,-1,256,247,249,-1,256,257,247,-1,226,258,260,-1,257,226,230,-1,257,258,226,-1,261,260,258,-1,254,260,261,-1,254,261,253,-1,253,261,258,-1,192,262,241,-1,263,262,192,-1,192,193,263,-1,262,264,239,-1,239,241,262,-1,264,265,235,-1,235,239,264,-1,262,263,266,-1,266,264,262,-1,265,264,266,-1,266,70,265,-1,187,188,235,-1,235,265,187,-1,189,187,265,-1,265,70,189,-1,267,269,268,-1,270,268,271,-1,271,272,270,-1,273,275,274,-1,273,276,275,-1,273,270,277,-1,277,276,273,-1,270,272,277,-1,278,271,279,-1,274,271,278,-1,278,279,280,-1,268,269,271,-1,269,281,271,-1,283,282,269,-1,269,267,283,-1,285,284,158,-1,158,286,285,-1,271,281,279,-1,270,260,268,-1,260,267,268,-1,260,270,273,-1,287,283,267,-1,288,284,285,-1,289,288,285,-1,254,267,260,-1,281,269,290,-1,291,290,269,-1,293,292,160,-1,160,294,293,-1,293,296,295,-1,295,292,293,-1,295,296,297,-1,297,298,295,-1,296,300,299,-1,299,297,296,-1,282,283,154,-1,154,301,282,-1,302,159,291,-1,291,282,302,-1,282,291,269,-1,279,281,303,-1,281,297,303,-1,290,291,304,-1,281,290,297,-1,300,296,305,-1,305,174,300,-1,305,296,175,-1,303,297,299,-1,307,150,306,-1,306,308,307,-1,174,310,309,-1,309,300,174,-1,311,312,306,-1,306,150,311,-1,279,303,313,-1,314,279,313,-1,315,318,317,-1,317,316,315,-1,303,319,313,-1,320,299,300,-1,300,309,320,-1,321,320,309,-1,309,322,321,-1,303,299,320,-1,320,319,303,-1,321,323,319,-1,319,320,321,-1,322,309,324,-1,325,310,308,-1,318,326,306,-1,323,327,313,-1,313,319,323,-1,326,324,325,-1,288,328,284,-1,327,329,314,-1,314,313,327,-1,328,330,284,-1,330,306,312,-1,175,293,294,-1,293,175,296,-1,280,279,314,-1,331,280,289,-1,331,289,285,-1,152,287,267,-1,254,255,267,-1,255,152,267,-1,297,290,304,-1,304,298,297,-1,274,278,280,-1,280,332,289,-1,289,332,333,-1,289,333,288,-1,328,288,333,-1,260,273,334,-1,260,334,335,-1,160,292,336,-1,336,176,160,-1,292,295,298,-1,298,336,292,-1,272,271,274,-1,274,275,272,-1,276,277,272,-1,272,275,276,-1,287,152,154,-1,154,283,287,-1,315,337,339,-1,339,338,315,-1,318,315,338,-1,338,340,318,-1,326,318,340,-1,340,341,326,-1,324,326,341,-1,341,342,324,-1,322,324,342,-1,342,343,322,-1,321,322,343,-1,343,344,321,-1,323,321,344,-1,344,345,323,-1,327,323,345,-1,345,346,327,-1,329,327,346,-1,346,347,329,-1,329,347,339,-1,339,337,329,-1,282,301,302,-1,304,349,348,-1,348,298,304,-1,298,348,351,-1,351,350,298,-1,352,350,351,-1,351,353,352,-1,348,349,354,-1,354,353,351,-1,348,354,351,-1,298,350,336,-1,350,352,176,-1,176,336,350,-1,316,355,337,-1,337,315,316,-1,306,317,318,-1,355,332,329,-1,329,337,355,-1,306,326,308,-1,326,325,308,-1,324,309,310,-1,310,325,324,-1,308,310,174,-1,174,307,308,-1,332,314,329,-1,332,280,314,-1,330,317,306,-1,328,316,317,-1,317,330,328,-1,333,355,316,-1,316,328,333,-1,332,355,333,-1,330,312,284,-1,312,311,158,-1,158,284,312,-1]
IndexedFaceSet1061.creaseAngle = 3.14159
IndexedFaceSet1061.texCoordIndex = [0,3,2,-1,2,1,0,-1,1,6,5,-1,5,4,1,-1,7,8,2,-1,2,3,7,-1,9,10,5,-1,5,6,9,-1,11,12,0,-1,0,1,11,-1,13,11,1,-1,1,4,13,-1,14,17,16,-1,16,15,14,-1,18,19,14,-1,14,15,18,-1,22,21,20,-1,23,16,17,-1,16,25,24,-1,27,26,24,-1,29,28,25,-1,16,23,25,-1,29,25,23,-1,31,17,30,-1,29,23,32,-1,33,32,31,-1,33,31,30,-1,27,35,34,-1,34,26,27,-1,37,36,34,-1,39,38,36,-1,26,40,16,-1,16,24,26,-1,36,42,41,-1,41,39,36,-1,43,41,42,-1,43,44,41,-1,41,44,39,-1,20,45,22,-1,45,46,22,-1,44,47,39,-1,20,49,50,-1,48,51,50,-1,51,20,50,-1,20,47,49,-1,49,47,44,-1,28,24,25,-1,53,52,46,-1,52,55,54,-1,52,54,46,-1,52,53,55,-1,7,57,53,-1,53,56,7,-1,58,57,7,-1,7,59,58,-1,57,58,53,-1,8,7,56,-1,56,60,8,-1,9,6,60,-1,10,9,60,-1,60,61,10,-1,0,12,62,-1,62,12,63,-1,64,62,63,-1,53,58,62,-1,62,64,53,-1,62,58,59,-1,59,0,62,-1,64,63,65,-1,63,67,66,-1,66,65,63,-1,53,64,65,-1,65,55,53,-1,65,66,54,-1,54,55,65,-1,67,21,66,-1,38,39,68,-1,22,46,21,-1,54,66,21,-1,46,54,21,-1,21,67,69,-1,68,69,38,-1,20,21,47,-1,47,21,68,-1,47,68,39,-1,69,18,70,-1,70,18,15,-1,40,70,15,-1,15,16,40,-1,69,71,38,-1,71,69,70,-1,38,71,34,-1,34,36,38,-1,26,34,71,-1,68,21,69,-1,2,6,1,-1,8,60,2,-1,60,6,2,-1,74,73,72,-1,77,76,75,-1,74,78,73,-1,74,81,80,-1,80,79,74,-1,82,79,80,-1,74,79,78,-1,82,84,83,-1,83,84,85,-1,82,86,84,-1,87,90,89,-1,89,88,87,-1,92,91,88,-1,80,81,93,-1,88,91,94,-1,86,93,95,-1,72,73,96,-1,83,79,82,-1,73,83,97,-1,100,99,98,-1,103,102,101,-1,99,83,85,-1,104,97,99,-1,97,83,99,-1,105,90,102,-1,105,89,90,-1,107,106,75,-1,107,108,106,-1,109,82,80,-1,109,80,93,-1,112,111,110,-1,93,81,113,-1,93,113,95,-1,114,110,111,-1,115,114,111,-1,87,86,116,-1,86,95,116,-1,18,69,117,-1,118,19,18,-1,18,117,118,-1,117,69,67,-1,67,119,117,-1,119,67,63,-1,63,120,119,-1,117,119,121,-1,121,118,117,-1,120,122,121,-1,121,119,120,-1,11,120,63,-1,63,12,11,-1,13,122,120,-1,120,11,13,-1,125,124,123,-1,127,126,124,-1,126,127,128,-1,131,130,129,-1,131,129,132,-1,131,132,133,-1,133,127,131,-1,127,133,128,-1,135,134,126,-1,130,135,126,-1,135,136,134,-1,124,126,123,-1,123,126,137,-1,138,125,123,-1,123,139,138,-1,140,143,142,-1,142,141,140,-1,126,134,137,-1,127,124,144,-1,144,124,125,-1,144,131,127,-1,145,125,138,-1,146,140,141,-1,147,140,146,-1,148,144,125,-1,137,149,123,-1,150,123,149,-1,153,156,155,-1,155,154,153,-1,153,154,158,-1,158,157,153,-1,158,160,159,-1,159,157,158,-1,157,159,162,-1,162,161,157,-1,139,215,164,-1,164,138,139,-1,163,139,150,-1,150,165,163,-1,139,123,150,-1,168,167,166,-1,166,167,159,-1,169,151,152,-1,166,159,169,-1,161,172,170,-1,170,157,161,-1,170,171,157,-1,167,162,159,-1,173,176,236,-1,236,174,173,-1,172,161,177,-1,177,233,172,-1,241,174,236,-1,236,240,241,-1,168,180,167,-1,181,180,168,-1,183,238,237,-1,237,231,183,-1,167,180,186,-1,187,177,161,-1,161,162,187,-1,188,189,177,-1,177,187,188,-1,167,186,187,-1,187,162,167,-1,188,187,186,-1,186,190,188,-1,189,192,177,-1,234,176,233,-1,231,175,191,-1,190,186,180,-1,180,193,190,-1,191,234,192,-1,146,141,195,-1,193,180,181,-1,181,194,193,-1,195,141,196,-1,196,240,236,-1,171,156,153,-1,153,157,171,-1,197,181,168,-1,198,147,242,-1,198,140,147,-1,199,125,145,-1,148,125,200,-1,200,125,199,-1,159,160,151,-1,151,169,159,-1,130,136,135,-1,242,147,184,-1,147,201,184,-1,147,146,201,-1,195,201,146,-1,144,202,131,-1,144,148,202,-1,155,204,203,-1,203,154,155,-1,154,203,160,-1,160,158,154,-1,205,208,207,-1,207,206,205,-1,209,208,205,-1,205,210,209,-1,213,214,211,-1,211,212,213,-1,191,191,192,-1,192,192,191,-1,191,191,191,-1,191,191,191,-1,191,191,191,-1,191,191,191,-1,192,192,191,-1,191,191,192,-1,189,189,192,-1,192,192,189,-1,188,188,189,-1,189,189,188,-1,190,190,188,-1,188,188,190,-1,193,193,190,-1,190,190,193,-1,194,194,193,-1,193,193,194,-1,194,232,232,-1,232,194,194,-1,139,163,215,-1,222,223,217,-1,217,216,222,-1,223,229,218,-1,218,217,223,-1,228,219,218,-1,218,229,228,-1,218,219,221,-1,217,218,221,-1,217,221,220,-1,224,225,226,-1,226,225,227,-1,227,230,226,-1,238,183,232,-1,232,239,238,-1,175,231,237,-1,239,232,194,-1,194,178,239,-1,175,176,191,-1,191,176,234,-1,192,234,233,-1,233,177,192,-1,176,173,172,-1,172,233,176,-1,178,194,181,-1,184,235,242,-1,196,236,179,-1,195,196,179,-1,179,182,195,-1,201,195,182,-1,182,185,201,-1,184,201,185,-1,196,141,240,-1,240,141,142,-1,142,241,240,-1,245,244,243,-1,243,246,245,-1,244,248,247,-1,247,249,244,-1,250,246,243,-1,243,251,250,-1,252,249,247,-1,247,253,252,-1,254,244,245,-1,245,255,254,-1,256,248,244,-1,244,254,256,-1,259,258,257,-1,257,260,259,-1,261,258,259,-1,259,262,261,-1,263,265,264,-1,266,260,257,-1,257,268,267,-1,269,268,270,-1,271,267,272,-1,257,267,266,-1,271,266,267,-1,273,274,260,-1,271,275,266,-1,276,273,275,-1,276,274,273,-1,269,270,277,-1,277,278,269,-1,279,277,280,-1,281,280,282,-1,270,268,257,-1,257,283,270,-1,280,281,284,-1,284,285,280,-1,286,285,284,-1,286,284,287,-1,284,281,287,-1,265,263,288,-1,288,263,289,-1,287,281,290,-1,265,292,291,-1,293,292,294,-1,294,292,265,-1,265,291,290,-1,291,287,290,-1,272,267,268,-1,295,289,296,-1,296,298,297,-1,296,289,298,-1,296,297,295,-1,250,299,295,-1,295,300,250,-1,302,301,250,-1,250,300,302,-1,300,295,302,-1,251,303,299,-1,299,250,251,-1,252,303,249,-1,253,304,303,-1,303,252,253,-1,245,305,255,-1,305,306,255,-1,307,306,305,-1,295,307,305,-1,305,302,295,-1,305,245,301,-1,301,302,305,-1,307,308,306,-1,306,308,309,-1,309,310,306,-1,295,297,308,-1,308,307,295,-1,308,297,298,-1,298,309,308,-1,310,309,264,-1,282,311,281,-1,263,264,289,-1,298,264,309,-1,289,264,298,-1,264,312,310,-1,311,282,312,-1,265,290,264,-1,290,311,264,-1,290,281,311,-1,312,313,261,-1,313,258,261,-1,283,257,258,-1,258,313,283,-1,312,282,314,-1,314,313,312,-1,282,280,277,-1,277,314,282,-1,270,314,277,-1,311,312,264,-1,243,244,249,-1,251,243,303,-1,303,243,249,-1,315,317,316,-1,318,320,319,-1,315,316,321,-1,315,323,322,-1,322,324,315,-1,325,322,323,-1,315,321,323,-1,325,327,326,-1,327,328,326,-1,325,326,329,-1,332,331,330,-1,330,333,332,-1,334,331,335,-1,322,336,324,-1,331,337,335,-1,329,338,336,-1,317,339,316,-1,327,325,323,-1,316,340,327,-1,341,343,342,-1,344,346,345,-1,342,328,327,-1,347,342,340,-1,340,342,327,-1,348,345,333,-1,348,333,330,-1,349,320,350,-1,349,350,351,-1,352,322,325,-1,352,336,322,-1,353,355,354,-1,336,356,324,-1,336,338,356,-1,357,354,355,-1,358,354,357,-1,332,359,329,-1,329,359,338,-1,261,360,312,-1,361,360,261,-1,261,262,361,-1,360,362,310,-1,310,312,360,-1,362,363,306,-1,306,310,362,-1,360,361,364,-1,364,362,360,-1,363,362,364,-1,364,365,363,-1,254,255,306,-1,306,363,254,-1,256,254,363,-1,363,365,256,-1,366,368,367,-1,369,367,370,-1,370,371,369,-1,372,374,373,-1,372,375,374,-1,372,369,376,-1,376,375,372,-1,369,371,376,-1,377,370,378,-1,373,370,377,-1,377,378,379,-1,367,368,370,-1,368,380,370,-1,382,381,368,-1,368,366,382,-1,385,384,383,-1,383,386,385,-1,370,380,378,-1,369,387,367,-1,387,366,367,-1,387,369,372,-1,388,382,366,-1,389,384,385,-1,390,389,385,-1,391,366,387,-1,380,368,392,-1,393,392,368,-1,396,395,394,-1,394,397,396,-1,396,399,398,-1,398,395,396,-1,398,399,400,-1,400,401,398,-1,399,403,402,-1,402,400,399,-1,381,382,405,-1,405,404,381,-1,406,407,393,-1,393,381,406,-1,381,393,368,-1,408,410,409,-1,410,400,409,-1,411,413,412,-1,410,411,400,-1,403,399,414,-1,414,415,403,-1,414,399,416,-1,409,400,402,-1,419,418,417,-1,417,420,419,-1,415,422,421,-1,421,403,415,-1,423,424,417,-1,417,418,423,-1,408,409,425,-1,426,408,425,-1,427,430,429,-1,429,428,427,-1,409,431,425,-1,432,402,403,-1,403,421,432,-1,433,432,421,-1,421,434,433,-1,409,402,432,-1,432,431,409,-1,433,435,431,-1,431,432,433,-1,434,421,436,-1,437,422,420,-1,430,439,438,-1,435,440,425,-1,425,431,435,-1,439,436,437,-1,389,441,384,-1,440,442,426,-1,426,425,440,-1,441,443,384,-1,443,417,424,-1,416,396,397,-1,396,416,399,-1,444,408,426,-1,445,446,390,-1,445,390,385,-1,447,388,366,-1,391,448,366,-1,448,447,366,-1,400,411,412,-1,412,401,400,-1,373,377,379,-1,446,449,390,-1,390,449,450,-1,390,450,389,-1,441,389,450,-1,387,372,451,-1,387,451,391,-1,394,395,452,-1,452,453,394,-1,395,398,401,-1,401,452,395,-1,456,455,454,-1,454,457,456,-1,459,458,456,-1,456,457,459,-1,462,461,460,-1,460,463,462,-1,439,436,436,-1,436,439,439,-1,439,439,439,-1,439,439,439,-1,439,439,439,-1,439,439,439,-1,436,439,439,-1,439,436,436,-1,434,436,436,-1,436,434,434,-1,433,434,434,-1,434,433,433,-1,435,433,433,-1,433,435,435,-1,440,435,435,-1,435,440,440,-1,442,440,440,-1,440,442,442,-1,442,442,464,-1,464,464,442,-1,381,404,406,-1,465,468,467,-1,467,466,465,-1,466,467,470,-1,470,469,466,-1,471,469,470,-1,470,472,471,-1,467,474,473,-1,473,472,470,-1,467,473,470,-1,475,477,476,-1,477,479,478,-1,478,476,477,-1,428,480,464,-1,464,427,428,-1,438,429,430,-1,480,481,442,-1,442,464,480,-1,438,439,420,-1,439,437,420,-1,436,421,422,-1,422,437,436,-1,420,422,415,-1,415,419,420,-1,481,426,442,-1,449,446,482,-1,443,483,417,-1,441,484,483,-1,483,443,441,-1,450,485,484,-1,484,441,450,-1,449,485,450,-1,443,424,384,-1,424,423,383,-1,383,384,424,-1]
Coordinate1062 = x3d.Coordinate()

IndexedFaceSet1061.coord = Coordinate1062
TextureCoordinate1063 = x3d.TextureCoordinate()

IndexedFaceSet1061.texCoord = TextureCoordinate1063

Shape1057.geometry = IndexedFaceSet1061

HAnimSegment1056.children.append(Shape1057)
Group1064 = x3d.Group()
Group1064.DEF = "skull_Sites"
"""(skull_vertex_pt 0.0050 1.7504 0.0055) (glabella_pt x y z) (sellion_pt 0.0058 1.6316 0.0852) (l_infraorbitale_pt 0.0341 1.6171 0.0752) (r_infraorbitale_pt -0.0237 1.6171 0.0752) (l_tragion_pt 0.0739 1.6348 0.0282) (r_tragion_pt -0.0646 1.6347 0.0302) (nuchale_pt 0.0039 1.5972 -0.0796) (opisthocranion_pt x y z) (l_ectocanthus_pt x y z) (r_ectocanthus_pt x y z)"""
HAnimSite1065 = x3d.HAnimSite()
HAnimSite1065.name = "skull_vertex_pt"
HAnimSite1065.DEF = "hanim_skull_vertex_pt"
HAnimSite1065.translation = [0,1.612,-0.03]
TouchSensor1066 = x3d.TouchSensor()
TouchSensor1066.description = "HAnimSite skull_vertex_pt 0"

HAnimSite1065.children.append(TouchSensor1066)
Shape1067 = x3d.Shape()
Shape1067.USE = "HAnimSiteShape"

HAnimSite1065.children.append(Shape1067)

Group1064.children.append(HAnimSite1065)
HAnimSite1068 = x3d.HAnimSite()
HAnimSite1068.name = "glabella_pt"
HAnimSite1068.DEF = "hanim_glabella_pt"
HAnimSite1068.translation = [0,1.454,0.128]
TouchSensor1069 = x3d.TouchSensor()
TouchSensor1069.description = "HAnimSite glabella_pt 1"

HAnimSite1068.children.append(TouchSensor1069)
Shape1070 = x3d.Shape()
Shape1070.USE = "HAnimSiteShape"

HAnimSite1068.children.append(Shape1070)

Group1064.children.append(HAnimSite1068)
HAnimSite1071 = x3d.HAnimSite()
HAnimSite1071.name = "sellion_pt"
HAnimSite1071.DEF = "hanim_sellion_pt"
HAnimSite1071.translation = [0,1.4,0.12]
TouchSensor1072 = x3d.TouchSensor()
TouchSensor1072.description = "HAnimSite sellion_pt 2"

HAnimSite1071.children.append(TouchSensor1072)
Shape1073 = x3d.Shape()
Shape1073.USE = "HAnimSiteShape"

HAnimSite1071.children.append(Shape1073)

Group1064.children.append(HAnimSite1071)
HAnimSite1074 = x3d.HAnimSite()
HAnimSite1074.name = "l_infraorbitale_pt"
HAnimSite1074.DEF = "hanim_l_infraorbitale_pt"
HAnimSite1074.translation = [0.039,1.38,0.09]
TouchSensor1075 = x3d.TouchSensor()
TouchSensor1075.description = "HAnimSite l_infraorbitale_pt 3"

HAnimSite1074.children.append(TouchSensor1075)
Shape1076 = x3d.Shape()
Shape1076.USE = "HAnimSiteShape"

HAnimSite1074.children.append(Shape1076)

Group1064.children.append(HAnimSite1074)
HAnimSite1077 = x3d.HAnimSite()
HAnimSite1077.name = "l_tragion_pt"
HAnimSite1077.DEF = "hanim_l_tragion_pt"
HAnimSite1077.translation = [0.1,1.38,0.0282]
TouchSensor1078 = x3d.TouchSensor()
TouchSensor1078.description = "HAnimSite l_tragion_pt 4"

HAnimSite1077.children.append(TouchSensor1078)
Shape1079 = x3d.Shape()
Shape1079.USE = "HAnimSiteShape"

HAnimSite1077.children.append(Shape1079)

Group1064.children.append(HAnimSite1077)
HAnimSite1080 = x3d.HAnimSite()
HAnimSite1080.name = "r_infraorbitale_pt"
HAnimSite1080.DEF = "hanim_r_infraorbitale_pt"
HAnimSite1080.translation = [-0.039,1.38,0.09]
TouchSensor1081 = x3d.TouchSensor()
TouchSensor1081.description = "HAnimSite r_infraorbitale_pt 6"

HAnimSite1080.children.append(TouchSensor1081)
Shape1082 = x3d.Shape()
Shape1082.USE = "HAnimSiteShape"

HAnimSite1080.children.append(Shape1082)

Group1064.children.append(HAnimSite1080)
HAnimSite1083 = x3d.HAnimSite()
HAnimSite1083.name = "r_tragion_pt"
HAnimSite1083.DEF = "hanim_r_tragion_pt"
HAnimSite1083.translation = [-0.1,1.38,0.0282]
TouchSensor1084 = x3d.TouchSensor()
TouchSensor1084.description = "HAnimSite r_tragion_pt 7"

HAnimSite1083.children.append(TouchSensor1084)
Shape1085 = x3d.Shape()
Shape1085.USE = "HAnimSiteShape"

HAnimSite1083.children.append(Shape1085)

Group1064.children.append(HAnimSite1083)
HAnimSite1086 = x3d.HAnimSite()
HAnimSite1086.name = "nuchale_pt"
HAnimSite1086.DEF = "hanim_nuchale_pt"
HAnimSite1086.translation = [0.0039,1.35,-0.16]
TouchSensor1087 = x3d.TouchSensor()
TouchSensor1087.description = "HAnimSite nuchale_pt 81"

HAnimSite1086.children.append(TouchSensor1087)
Shape1088 = x3d.Shape()
Shape1088.USE = "HAnimSiteShape"

HAnimSite1086.children.append(Shape1088)

Group1064.children.append(HAnimSite1086)
HAnimSite1089 = x3d.HAnimSite()
HAnimSite1089.name = "opisthocranion_pt"
HAnimSite1089.DEF = "hanim_opisthocranion_pt"
HAnimSite1089.translation = [0.0039,1.4588,-0.18]
TouchSensor1090 = x3d.TouchSensor()
TouchSensor1090.description = "HAnimSite opisthocranion_pt 89"

HAnimSite1089.children.append(TouchSensor1090)
Shape1091 = x3d.Shape()
Shape1091.USE = "HAnimSiteShape"

HAnimSite1089.children.append(Shape1091)

Group1064.children.append(HAnimSite1089)
HAnimSite1092 = x3d.HAnimSite()
HAnimSite1092.name = "l_ectocanthus_pt"
HAnimSite1092.DEF = "hanim_l_ectocanthus_pt"
HAnimSite1092.translation = [0.086,1.399,0.074]
TouchSensor1093 = x3d.TouchSensor()
TouchSensor1093.description = "HAnimSite l_ectocanthus_pt 85"

HAnimSite1092.children.append(TouchSensor1093)
Shape1094 = x3d.Shape()
Shape1094.USE = "HAnimSiteShape"

HAnimSite1092.children.append(Shape1094)

Group1064.children.append(HAnimSite1092)
HAnimSite1095 = x3d.HAnimSite()
HAnimSite1095.name = "r_ectocanthus_pt"
HAnimSite1095.DEF = "hanim_r_ectocanthus_pt"
HAnimSite1095.translation = [-0.086,1.399,0.074]
TouchSensor1096 = x3d.TouchSensor()
TouchSensor1096.description = "HAnimSite r_ectocanthus_pt 86"

HAnimSite1095.children.append(TouchSensor1096)
Shape1097 = x3d.Shape()
Shape1097.USE = "HAnimSiteShape"

HAnimSite1095.children.append(Shape1097)

Group1064.children.append(HAnimSite1095)

HAnimSegment1056.children.append(Group1064)

HAnimJoint1055.children.append(HAnimSegment1056)
HAnimJoint1098 = x3d.HAnimJoint()
HAnimJoint1098.name = "l_eyelid_joint"
HAnimJoint1098.DEF = "hanim_l_eyelid_joint"
HAnimJoint1098.center = [0.0505125,1.42425,0.03294]
HAnimJoint1098.ulimit = [0,0,0]
HAnimJoint1098.llimit = [0,0,0]
HAnimSegment1099 = x3d.HAnimSegment()
HAnimSegment1099.name = "l_eyelid"
HAnimSegment1099.DEF = "hanim_l_eyelid"
Shape1100 = x3d.Shape()
Shape1100.DEF = "l_eyelid_Shape"
Appearance1101 = x3d.Appearance()
Material1102 = x3d.Material()
Material1102.USE = "SurfaceDefault"

Appearance1101.material = Material1102
ImageTexture1103 = x3d.ImageTexture()
ImageTexture1103.USE = "JinLOA4TextureAtlas"

Appearance1101.texture = ImageTexture1103

Shape1100.appearance = Appearance1101
IndexedFaceSet1104 = x3d.IndexedFaceSet()
IndexedFaceSet1104.coordIndex = [0,1,25,-1,25,24,0,-1,2,26,25,-1,25,1,2,-1,2,3,8,-1,8,26,2,-1,10,27,9,-1,9,4,10,-1,10,0,24,-1,24,27,10,-1,1,0,12,-1,12,13,1,-1,2,1,13,-1,13,14,2,-1,3,2,14,-1,14,15,3,-1,10,4,16,-1,16,22,10,-1,5,6,18,-1,18,17,5,-1,6,7,19,-1,19,18,6,-1,7,8,20,-1,20,19,7,-1,9,11,23,-1,23,21,9,-1,8,3,15,-1,15,20,8,-1,4,9,21,-1,21,16,4,-1,0,10,22,-1,22,12,0,-1,11,5,17,-1,17,23,11,-1,6,5,24,-1,24,25,6,-1,7,6,25,-1,25,26,7,-1,5,11,27,-1,27,24,5,-1,27,11,9,-1,8,7,26,-1]
IndexedFaceSet1104.creaseAngle = 3.14159
IndexedFaceSet1104.texCoordIndex = [0,1,2,-1,2,3,0,-1,4,5,2,-1,2,1,4,-1,4,6,7,-1,7,5,4,-1,9,10,11,-1,11,8,9,-1,9,0,3,-1,3,10,9,-1,1,0,12,-1,12,13,1,-1,4,1,13,-1,13,14,4,-1,6,4,14,-1,14,15,6,-1,9,8,16,-1,16,17,9,-1,18,19,20,-1,20,21,18,-1,19,22,23,-1,23,20,19,-1,22,7,24,-1,24,23,22,-1,11,25,26,-1,26,27,11,-1,7,6,15,-1,15,24,7,-1,8,11,27,-1,27,16,8,-1,0,9,17,-1,17,12,0,-1,25,18,21,-1,21,26,25,-1,19,18,3,-1,3,2,19,-1,22,19,2,-1,2,5,22,-1,18,25,10,-1,10,3,18,-1,10,25,11,-1,7,22,5,-1]
Coordinate1105 = x3d.Coordinate()

IndexedFaceSet1104.coord = Coordinate1105
TextureCoordinate1106 = x3d.TextureCoordinate()

IndexedFaceSet1104.texCoord = TextureCoordinate1106

Shape1100.geometry = IndexedFaceSet1104

HAnimSegment1099.children.append(Shape1100)
Group1107 = x3d.Group()
Group1107.DEF = "l_eyelid_Sites"
"""(l_eyelid_tip_pt x y z) <HAnimSite DEF='hanim_l_eyelid_tip_pt' name='l_eyelid_tip_pt' translation='0 2.64 0'> <TouchSensor description='HAnimSite l_eyelid_tip_pt'/> <Shape USE='HAnimSiteShape'/> </HAnimSite>"""

HAnimSegment1099.children.append(Group1107)

HAnimJoint1098.children.append(HAnimSegment1099)

HAnimJoint1055.children.append(HAnimJoint1098)
HAnimJoint1108 = x3d.HAnimJoint()
HAnimJoint1108.name = "r_eyelid_joint"
HAnimJoint1108.DEF = "hanim_r_eyelid_joint"
HAnimJoint1108.center = [-0.0505125,1.42425,0.03294]
HAnimJoint1108.ulimit = [0,0,0]
HAnimJoint1108.llimit = [0,0,0]
HAnimSegment1109 = x3d.HAnimSegment()
HAnimSegment1109.name = "r_eyelid"
HAnimSegment1109.DEF = "hanim_r_eyelid"
Shape1110 = x3d.Shape()
Shape1110.DEF = "r_eyelid_Shape"
Appearance1111 = x3d.Appearance()
Material1112 = x3d.Material()
Material1112.USE = "SurfaceDefault"

Appearance1111.material = Material1112
ImageTexture1113 = x3d.ImageTexture()
ImageTexture1113.USE = "JinLOA4TextureAtlas"

Appearance1111.texture = ImageTexture1113

Shape1110.appearance = Appearance1111
IndexedFaceSet1114 = x3d.IndexedFaceSet()
IndexedFaceSet1114.coordIndex = [0,24,25,-1,25,1,0,-1,2,1,25,-1,25,26,2,-1,2,26,8,-1,8,3,2,-1,10,4,9,-1,9,27,10,-1,10,27,24,-1,24,0,10,-1,1,13,12,-1,12,0,1,-1,2,14,13,-1,13,1,2,-1,3,15,14,-1,14,2,3,-1,10,22,16,-1,16,4,10,-1,5,17,18,-1,18,6,5,-1,6,18,19,-1,19,7,6,-1,7,19,20,-1,20,8,7,-1,9,21,23,-1,23,11,9,-1,8,20,15,-1,15,3,8,-1,4,16,21,-1,21,9,4,-1,0,12,22,-1,22,10,0,-1,11,23,17,-1,17,5,11,-1,6,25,24,-1,24,5,6,-1,7,26,25,-1,25,6,7,-1,5,24,27,-1,27,11,5,-1,27,9,11,-1,8,26,7,-1]
IndexedFaceSet1114.creaseAngle = 3.14159
IndexedFaceSet1114.texCoordIndex = [0,3,2,-1,2,1,0,-1,4,1,2,-1,2,5,4,-1,4,5,7,-1,7,6,4,-1,9,8,11,-1,11,10,9,-1,9,10,3,-1,3,0,9,-1,1,13,12,-1,12,0,1,-1,4,14,13,-1,13,1,4,-1,6,15,14,-1,14,4,6,-1,9,17,16,-1,16,8,9,-1,18,21,20,-1,20,19,18,-1,19,20,23,-1,23,22,19,-1,22,23,24,-1,24,7,22,-1,11,27,26,-1,26,25,11,-1,7,24,15,-1,15,6,7,-1,8,16,27,-1,27,11,8,-1,0,12,17,-1,17,9,0,-1,25,26,21,-1,21,18,25,-1,19,2,3,-1,3,18,19,-1,22,5,2,-1,2,19,22,-1,18,3,10,-1,10,25,18,-1,10,11,25,-1,7,5,22,-1]
Coordinate1115 = x3d.Coordinate()

IndexedFaceSet1114.coord = Coordinate1115
TextureCoordinate1116 = x3d.TextureCoordinate()

IndexedFaceSet1114.texCoord = TextureCoordinate1116

Shape1110.geometry = IndexedFaceSet1114

HAnimSegment1109.children.append(Shape1110)
Group1117 = x3d.Group()
Group1117.DEF = "r_eyelid_Sites"
"""(r_eyelid_tip_pt x y z) <HAnimSite DEF='hanim_r_eyelid_tip_pt' name='r_eyelid_tip_pt' translation='0 2.68 0'> <TouchSensor description='HAnimSite r_eyelid_tip_pt'/> <Shape USE='HAnimSiteShape'/> </HAnimSite>"""

HAnimSegment1109.children.append(Group1117)

HAnimJoint1108.children.append(HAnimSegment1109)

HAnimJoint1055.children.append(HAnimJoint1108)
HAnimJoint1118 = x3d.HAnimJoint()
HAnimJoint1118.name = "l_eyeball_joint"
HAnimJoint1118.DEF = "hanim_l_eyeball_joint"
HAnimJoint1118.center = [0.048127502,1.4049001,0.0830475]
HAnimJoint1118.ulimit = [0,0,0]
HAnimJoint1118.llimit = [0,0,0]
HAnimSegment1119 = x3d.HAnimSegment()
HAnimSegment1119.name = "l_eyeball"
HAnimSegment1119.DEF = "hanim_l_eyeball"
Shape1120 = x3d.Shape()
Shape1120.DEF = "l_eyeball_Shape"
Appearance1121 = x3d.Appearance()
Material1122 = x3d.Material()
Material1122.USE = "SurfaceDefault"

Appearance1121.material = Material1122
ImageTexture1123 = x3d.ImageTexture()
ImageTexture1123.USE = "JinLOA4TextureAtlas"

Appearance1121.texture = ImageTexture1123

Shape1120.appearance = Appearance1121
IndexedFaceSet1124 = x3d.IndexedFaceSet()
IndexedFaceSet1124.coordIndex = [1,6,16,-1,16,11,1,-1,0,1,11,-1,11,10,0,-1,8,9,19,-1,19,18,8,-1,2,8,18,-1,18,12,2,-1,3,0,10,-1,10,13,3,-1,9,4,14,-1,14,19,9,-1,5,2,12,-1,12,15,5,-1,4,3,13,-1,13,14,4,-1,6,7,17,-1,17,16,6,-1,7,5,15,-1,15,17,7,-1,11,16,21,-1,21,20,11,-1,16,17,22,-1,22,21,16,-1,17,15,23,-1,23,22,17,-1,15,12,24,-1,24,23,15,-1,12,18,25,-1,25,24,12,-1,18,19,26,-1,26,25,18,-1,19,14,27,-1,27,26,19,-1,14,13,28,-1,28,27,14,-1,13,10,29,-1,29,28,13,-1,10,11,20,-1,20,29,10,-1,6,1,30,-1,1,0,30,-1,0,3,30,-1,3,4,30,-1,4,9,30,-1,9,8,30,-1,8,2,30,-1,2,5,30,-1,5,7,30,-1,7,6,30,-1]
IndexedFaceSet1124.creaseAngle = 3.14159
IndexedFaceSet1124.texCoordIndex = [4,9,13,-1,13,14,4,-1,3,4,14,-1,14,15,3,-1,11,12,16,-1,16,17,11,-1,5,11,17,-1,17,18,5,-1,6,3,15,-1,15,6,6,-1,12,7,19,-1,19,16,12,-1,8,5,18,-1,18,20,8,-1,7,6,21,-1,21,19,7,-1,9,10,22,-1,22,13,9,-1,10,8,20,-1,20,22,10,-1,14,13,24,-1,24,23,14,-1,13,22,25,-1,25,24,13,-1,22,20,26,-1,26,25,22,-1,20,18,27,-1,27,26,20,-1,18,17,28,-1,28,27,18,-1,17,16,29,-1,29,28,17,-1,16,19,30,-1,30,29,16,-1,19,21,31,-1,31,30,19,-1,6,15,32,-1,32,31,6,-1,15,14,23,-1,23,32,15,-1,36,1,40,-1,1,0,40,-1,0,33,40,-1,33,34,40,-1,34,39,40,-1,39,38,40,-1,38,2,40,-1,2,35,40,-1,35,37,40,-1,37,36,40,-1]
Coordinate1125 = x3d.Coordinate()

IndexedFaceSet1124.coord = Coordinate1125
TextureCoordinate1126 = x3d.TextureCoordinate()

IndexedFaceSet1124.texCoord = TextureCoordinate1126

Shape1120.geometry = IndexedFaceSet1124

HAnimSegment1119.children.append(Shape1120)
Group1127 = x3d.Group()
Group1127.DEF = "l_eyeball_Sites"
"""(l_eyeball_tip_pt x y z) <HAnimSite DEF='hanim_l_eyeball_tip_pt' name='l_eyeball_tip_pt' translation='0 2.72 0'> <TouchSensor description='HAnimSite l_eyeball_tip_pt'/> <Shape USE='HAnimSiteShape'/> </HAnimSite>"""

HAnimSegment1119.children.append(Group1127)

HAnimJoint1118.children.append(HAnimSegment1119)

HAnimJoint1055.children.append(HAnimJoint1118)
HAnimJoint1128 = x3d.HAnimJoint()
HAnimJoint1128.name = "r_eyeball_joint"
HAnimJoint1128.DEF = "hanim_r_eyeball_joint"
HAnimJoint1128.center = [-0.048127502,1.4049001,0.0830475]
HAnimJoint1128.ulimit = [0,0,0]
HAnimJoint1128.llimit = [0,0,0]
HAnimSegment1129 = x3d.HAnimSegment()
HAnimSegment1129.name = "r_eyeball"
HAnimSegment1129.DEF = "hanim_r_eyeball"
Shape1130 = x3d.Shape()
Shape1130.DEF = "r_eyeball_Shape"
Appearance1131 = x3d.Appearance()
Material1132 = x3d.Material()
Material1132.USE = "SurfaceDefault"

Appearance1131.material = Material1132
ImageTexture1133 = x3d.ImageTexture()
ImageTexture1133.USE = "JinLOA4TextureAtlas"

Appearance1131.texture = ImageTexture1133

Shape1130.appearance = Appearance1131
IndexedFaceSet1134 = x3d.IndexedFaceSet()
IndexedFaceSet1134.coordIndex = [1,11,16,-1,16,6,1,-1,0,10,11,-1,11,1,0,-1,8,18,19,-1,19,9,8,-1,2,12,18,-1,18,8,2,-1,3,13,10,-1,10,0,3,-1,9,19,14,-1,14,4,9,-1,5,15,12,-1,12,2,5,-1,4,14,13,-1,13,3,4,-1,6,16,17,-1,17,7,6,-1,7,17,15,-1,15,5,7,-1,11,20,21,-1,21,16,11,-1,16,21,22,-1,22,17,16,-1,17,22,23,-1,23,15,17,-1,15,23,24,-1,24,12,15,-1,12,24,25,-1,25,18,12,-1,18,25,26,-1,26,19,18,-1,19,26,27,-1,27,14,19,-1,14,27,28,-1,28,13,14,-1,13,28,29,-1,29,10,13,-1,10,29,20,-1,20,11,10,-1,6,30,1,-1,1,30,0,-1,0,30,3,-1,3,30,4,-1,4,30,9,-1,9,30,8,-1,8,30,2,-1,2,30,5,-1,5,30,7,-1,7,30,6,-1]
IndexedFaceSet1134.creaseAngle = 3.14159
IndexedFaceSet1134.texCoordIndex = [4,14,13,-1,13,9,4,-1,3,15,14,-1,14,4,3,-1,11,17,16,-1,16,12,11,-1,5,18,17,-1,17,11,5,-1,6,6,15,-1,15,3,6,-1,12,16,19,-1,19,7,12,-1,8,20,18,-1,18,5,8,-1,7,19,21,-1,21,6,7,-1,9,13,22,-1,22,10,9,-1,10,22,20,-1,20,8,10,-1,14,23,24,-1,24,13,14,-1,13,24,25,-1,25,22,13,-1,22,25,26,-1,26,20,22,-1,20,26,27,-1,27,18,20,-1,18,27,28,-1,28,17,18,-1,17,28,29,-1,29,16,17,-1,16,29,30,-1,30,19,16,-1,19,30,31,-1,31,21,19,-1,6,31,32,-1,32,15,6,-1,15,32,23,-1,23,14,15,-1,36,40,1,-1,1,40,0,-1,0,40,33,-1,33,40,34,-1,34,40,39,-1,39,40,38,-1,38,40,2,-1,2,40,35,-1,35,40,37,-1,37,40,36,-1]
Coordinate1135 = x3d.Coordinate()

IndexedFaceSet1134.coord = Coordinate1135
TextureCoordinate1136 = x3d.TextureCoordinate()

IndexedFaceSet1134.texCoord = TextureCoordinate1136

Shape1130.geometry = IndexedFaceSet1134

HAnimSegment1129.children.append(Shape1130)
Group1137 = x3d.Group()
Group1137.DEF = "r_eyeball_Sites"
"""(r_eyeball_tip_pt x y z) <HAnimSite DEF='hanim_r_eyeball_tip_pt' name='r_eyeball_tip_pt' translation='0 2.76 0'> <TouchSensor description='HAnimSite r_eyeball_tip_pt'/> <Shape USE='HAnimSiteShape'/> </HAnimSite>"""

HAnimSegment1129.children.append(Group1137)

HAnimJoint1128.children.append(HAnimSegment1129)

HAnimJoint1055.children.append(HAnimJoint1128)
HAnimJoint1138 = x3d.HAnimJoint()
HAnimJoint1138.name = "l_eyebrow_joint"
HAnimJoint1138.DEF = "hanim_l_eyebrow_joint"
HAnimJoint1138.center = [0.021748502,1.4139,0.1069425]
HAnimJoint1138.ulimit = [0,0,0]
HAnimJoint1138.llimit = [0,0,0]
HAnimSegment1139 = x3d.HAnimSegment()
HAnimSegment1139.name = "l_eyebrow"
HAnimSegment1139.DEF = "hanim_l_eyebrow"
Shape1140 = x3d.Shape()
Shape1140.DEF = "l_eyebrow_Shape"
Appearance1141 = x3d.Appearance()
Material1142 = x3d.Material()
Material1142.USE = "SurfaceDefault"

Appearance1141.material = Material1142
ImageTexture1143 = x3d.ImageTexture()
ImageTexture1143.USE = "JinLOA4TextureAtlas"

Appearance1141.texture = ImageTexture1143

Shape1140.appearance = Appearance1141
IndexedFaceSet1144 = x3d.IndexedFaceSet()
IndexedFaceSet1144.coordIndex = [2,20,21,-1,21,7,2,-1,4,3,8,-1,8,10,4,-1,3,2,7,-1,7,8,3,-1,2,1,5,-1,5,20,2,-1,4,6,3,-1,3,6,1,-1,1,2,3,-1,5,1,12,-1,12,14,5,-1,0,5,14,-1,14,11,0,-1,6,4,13,-1,13,15,6,-1,1,6,15,-1,15,12,1,-1,8,7,16,-1,16,17,8,-1,21,22,16,-1,16,7,21,-1,9,0,11,-1,11,18,9,-1,4,10,19,-1,19,13,4,-1,10,8,17,-1,17,19,10,-1,20,0,9,-1,9,21,20,-1,5,0,20,-1,21,9,18,-1,18,22,21,-1]
IndexedFaceSet1144.creaseAngle = 3.14159
IndexedFaceSet1144.texCoordIndex = [0,20,21,-1,21,7,0,-1,3,1,8,-1,8,10,3,-1,1,0,7,-1,7,8,1,-1,0,4,5,-1,5,20,0,-1,3,6,1,-1,1,6,4,-1,4,0,1,-1,5,4,11,-1,11,12,5,-1,2,5,12,-1,12,14,2,-1,6,3,15,-1,15,16,6,-1,4,6,16,-1,16,11,4,-1,8,7,13,-1,13,17,8,-1,21,22,13,-1,13,7,21,-1,9,2,14,-1,14,18,9,-1,3,10,19,-1,19,15,3,-1,10,8,17,-1,17,19,10,-1,20,2,9,-1,9,21,20,-1,5,2,20,-1,21,9,18,-1,18,22,21,-1]
Coordinate1145 = x3d.Coordinate()

IndexedFaceSet1144.coord = Coordinate1145
TextureCoordinate1146 = x3d.TextureCoordinate()

IndexedFaceSet1144.texCoord = TextureCoordinate1146

Shape1140.geometry = IndexedFaceSet1144

HAnimSegment1139.children.append(Shape1140)
Group1147 = x3d.Group()
Group1147.DEF = "l_eyebrow_Sites"
"""(l_eyebrow_tip_pt x y z) <HAnimSite DEF='hanim_l_eyebrow_tip_pt' name='l_eyebrow_tip_pt' translation='0 2.8 0'> <TouchSensor description='HAnimSite l_eyebrow_tip_pt'/> <Shape USE='HAnimSiteShape'/> </HAnimSite>"""

HAnimSegment1139.children.append(Group1147)

HAnimJoint1138.children.append(HAnimSegment1139)

HAnimJoint1055.children.append(HAnimJoint1138)
HAnimJoint1148 = x3d.HAnimJoint()
HAnimJoint1148.name = "r_eyebrow_joint"
HAnimJoint1148.DEF = "hanim_r_eyebrow_joint"
HAnimJoint1148.center = [-0.021748502,1.4139,0.1069425]
HAnimJoint1148.ulimit = [0,0,0]
HAnimJoint1148.llimit = [0,0,0]
HAnimSegment1149 = x3d.HAnimSegment()
HAnimSegment1149.name = "r_eyebrow"
HAnimSegment1149.DEF = "hanim_r_eyebrow"
Shape1150 = x3d.Shape()
Shape1150.DEF = "r_eyebrow_Shape"
Appearance1151 = x3d.Appearance()
Material1152 = x3d.Material()
Material1152.USE = "SurfaceDefault"

Appearance1151.material = Material1152
ImageTexture1153 = x3d.ImageTexture()
ImageTexture1153.USE = "JinLOA4TextureAtlas"

Appearance1151.texture = ImageTexture1153

Shape1150.appearance = Appearance1151
IndexedFaceSet1154 = x3d.IndexedFaceSet()
IndexedFaceSet1154.coordIndex = [2,7,21,-1,21,20,2,-1,4,10,8,-1,8,3,4,-1,3,8,7,-1,7,2,3,-1,2,20,5,-1,5,1,2,-1,4,3,6,-1,3,2,1,-1,1,6,3,-1,5,14,12,-1,12,1,5,-1,0,11,14,-1,14,5,0,-1,6,15,13,-1,13,4,6,-1,1,12,15,-1,15,6,1,-1,8,17,16,-1,16,7,8,-1,21,7,16,-1,16,22,21,-1,9,18,11,-1,11,0,9,-1,4,13,19,-1,19,10,4,-1,10,19,17,-1,17,8,10,-1,20,21,9,-1,9,0,20,-1,5,20,0,-1,21,22,18,-1,18,9,21,-1]
IndexedFaceSet1154.creaseAngle = 3.14159
IndexedFaceSet1154.texCoordIndex = [0,7,21,-1,21,20,0,-1,3,10,8,-1,8,1,3,-1,1,8,7,-1,7,0,1,-1,0,20,5,-1,5,4,0,-1,3,1,6,-1,1,0,4,-1,4,6,1,-1,5,12,11,-1,11,4,5,-1,2,14,12,-1,12,5,2,-1,6,16,15,-1,15,3,6,-1,4,11,16,-1,16,6,4,-1,8,17,13,-1,13,7,8,-1,21,7,13,-1,13,22,21,-1,9,18,14,-1,14,2,9,-1,3,15,19,-1,19,10,3,-1,10,19,17,-1,17,8,10,-1,20,21,9,-1,9,2,20,-1,5,20,2,-1,21,22,18,-1,18,9,21,-1]
Coordinate1155 = x3d.Coordinate()

IndexedFaceSet1154.coord = Coordinate1155
TextureCoordinate1156 = x3d.TextureCoordinate()

IndexedFaceSet1154.texCoord = TextureCoordinate1156

Shape1150.geometry = IndexedFaceSet1154

HAnimSegment1149.children.append(Shape1150)
Group1157 = x3d.Group()
Group1157.DEF = "r_eyebrow_Sites"
"""(r_eyebrow_tip_pt x y z) <HAnimSite DEF='hanim_r_eyebrow_tip_pt' name='r_eyebrow_tip_pt' translation='0 2.84 0'> <TouchSensor description='HAnimSite r_eyebrow_tip_pt'/> <Shape USE='HAnimSiteShape'/> </HAnimSite>"""

HAnimSegment1149.children.append(Group1157)

HAnimJoint1148.children.append(HAnimSegment1149)

HAnimJoint1055.children.append(HAnimJoint1148)
HAnimJoint1158 = x3d.HAnimJoint()
HAnimJoint1158.name = "temporomandibular"
HAnimJoint1158.DEF = "hanim_temporomandibular"
HAnimJoint1158.center = [0,1.312875,0.015378751]
HAnimJoint1158.ulimit = [0,0,0]
HAnimJoint1158.llimit = [0,0,0]
HAnimSegment1159 = x3d.HAnimSegment()
HAnimSegment1159.name = "jaw"
HAnimSegment1159.DEF = "hanim_jaw"
Shape1160 = x3d.Shape()
Shape1160.DEF = "jaw_Shape"
Appearance1161 = x3d.Appearance()
Material1162 = x3d.Material()
Material1162.USE = "SurfaceDefault"

Appearance1161.material = Material1162
ImageTexture1163 = x3d.ImageTexture()
ImageTexture1163.USE = "JinLOA4TextureAtlas"

Appearance1161.texture = ImageTexture1163

Shape1160.appearance = Appearance1161
IndexedFaceSet1164 = x3d.IndexedFaceSet()
IndexedFaceSet1164.coordIndex = [0,2,12,-1,13,3,15,-1,3,13,4,-1,4,13,12,-1,4,12,2,-1,1,0,18,-1,18,9,1,-1,4,2,10,-1,10,6,8,-1,4,10,8,-1,3,7,24,-1,24,15,3,-1,4,8,7,-1,7,3,4,-1,5,26,24,-1,24,7,5,-1,8,6,5,-1,5,7,8,-1,0,1,2,-1,2,1,9,-1,9,10,2,-1,0,12,11,-1,13,15,14,-1,14,16,13,-1,16,12,13,-1,16,11,12,-1,17,19,18,-1,18,0,17,-1,22,21,20,-1,16,22,20,-1,16,20,11,-1,14,15,24,-1,24,23,14,-1,16,14,23,-1,23,22,16,-1,25,23,24,-1,24,26,25,-1,22,23,25,-1,25,21,22,-1,0,11,17,-1,11,20,19,-1,19,17,11,-1]
IndexedFaceSet1164.creaseAngle = 3.14159
IndexedFaceSet1164.texCoordIndex = [0,2,3,-1,4,5,6,-1,5,4,7,-1,7,4,3,-1,7,3,2,-1,1,0,0,-1,0,8,1,-1,7,2,2,-1,2,9,16,-1,7,2,16,-1,5,13,14,-1,14,6,5,-1,7,15,13,-1,13,5,7,-1,11,12,17,-1,17,10,11,-1,18,19,11,-1,11,10,18,-1,0,20,2,-1,2,20,21,-1,21,2,2,-1,0,22,2,-1,23,25,24,-1,24,26,23,-1,26,22,23,-1,26,2,22,-1,27,28,0,-1,0,0,27,-1,30,29,2,-1,26,30,2,-1,26,2,2,-1,24,25,32,-1,32,31,24,-1,26,24,31,-1,31,33,26,-1,35,34,37,-1,37,36,35,-1,38,34,35,-1,35,39,38,-1,0,2,40,-1,2,2,41,-1,41,40,2,-1]
Coordinate1165 = x3d.Coordinate()

IndexedFaceSet1164.coord = Coordinate1165
TextureCoordinate1166 = x3d.TextureCoordinate()

IndexedFaceSet1164.texCoord = TextureCoordinate1166

Shape1160.geometry = IndexedFaceSet1164

HAnimSegment1159.children.append(Shape1160)
Group1167 = x3d.Group()
Group1167.DEF = "jaw_Sites"
"""(r_gonion_pt -0.0520 1.5529 0.0347) (l_gonion_pt 0.0631 1.5530 0.0330) (supramenton_pt 0.0061 1.5410 0.0805) (menton_pt x y z)"""
HAnimSite1168 = x3d.HAnimSite()
HAnimSite1168.name = "l_gonion_pt"
HAnimSite1168.DEF = "hanim_l_gonion_pt"
HAnimSite1168.translation = [0.068,1.346,0.033]
TouchSensor1169 = x3d.TouchSensor()
TouchSensor1169.description = "HAnimSite l_gonion_pt 5"

HAnimSite1168.children.append(TouchSensor1169)
Shape1170 = x3d.Shape()
Shape1170.USE = "HAnimSiteShape"

HAnimSite1168.children.append(Shape1170)

Group1167.children.append(HAnimSite1168)
HAnimSite1171 = x3d.HAnimSite()
HAnimSite1171.name = "r_gonion_pt"
HAnimSite1171.DEF = "hanim_r_gonion_pt"
HAnimSite1171.translation = [-0.068,1.346,0.033]
TouchSensor1172 = x3d.TouchSensor()
TouchSensor1172.description = "HAnimSite r_gonion_pt 8"

HAnimSite1171.children.append(TouchSensor1172)
Shape1173 = x3d.Shape()
Shape1173.USE = "HAnimSiteShape"

HAnimSite1171.children.append(Shape1173)

Group1167.children.append(HAnimSite1171)
HAnimSite1174 = x3d.HAnimSite()
HAnimSite1174.name = "supramenton_pt"
HAnimSite1174.DEF = "hanim_supramenton_pt"
HAnimSite1174.translation = [0,1.32,0.086]
TouchSensor1175 = x3d.TouchSensor()
TouchSensor1175.description = "HAnimSite supramenton_pt 9"

HAnimSite1174.children.append(TouchSensor1175)
Shape1176 = x3d.Shape()
Shape1176.USE = "HAnimSiteShape"

HAnimSite1174.children.append(Shape1176)

Group1167.children.append(HAnimSite1174)
HAnimSite1177 = x3d.HAnimSite()
HAnimSite1177.name = "menton_pt"
HAnimSite1177.DEF = "hanim_menton_pt"
HAnimSite1177.translation = [0,1.3,0.08]
TouchSensor1178 = x3d.TouchSensor()
TouchSensor1178.description = "HAnimSite menton_pt 87"

HAnimSite1177.children.append(TouchSensor1178)
Shape1179 = x3d.Shape()
Shape1179.USE = "HAnimSiteShape"

HAnimSite1177.children.append(Shape1179)

Group1167.children.append(HAnimSite1177)

HAnimSegment1159.children.append(Group1167)

HAnimJoint1158.children.append(HAnimSegment1159)

HAnimJoint1055.children.append(HAnimJoint1158)

HAnimJoint1045.children.append(HAnimJoint1055)

HAnimJoint1032.children.append(HAnimJoint1045)

HAnimJoint1022.children.append(HAnimJoint1032)

HAnimJoint1012.children.append(HAnimJoint1022)

HAnimJoint1002.children.append(HAnimJoint1012)

HAnimJoint992.children.append(HAnimJoint1002)

HAnimJoint976.children.append(HAnimJoint992)

HAnimJoint960.children.append(HAnimJoint976)
HAnimJoint1180 = x3d.HAnimJoint()
HAnimJoint1180.name = "l_sternoclavicular"
HAnimJoint1180.DEF = "hanim_l_sternoclavicular"
HAnimJoint1180.center = [0.038475003,1.2087001,-0.013785751]
HAnimJoint1180.ulimit = [0,0,0]
HAnimJoint1180.llimit = [0,0,0]
HAnimSegment1181 = x3d.HAnimSegment()
HAnimSegment1181.name = "l_clavicle"
HAnimSegment1181.DEF = "hanim_l_clavicle"
Shape1182 = x3d.Shape()
Shape1182.DEF = "l_clavicle_Shape"
Appearance1183 = x3d.Appearance()
Material1184 = x3d.Material()
Material1184.USE = "SurfaceDefault"

Appearance1183.material = Material1184
ImageTexture1185 = x3d.ImageTexture()
ImageTexture1185.USE = "JinLOA4TextureAtlas"

Appearance1183.texture = ImageTexture1185

Shape1182.appearance = Appearance1183
IndexedFaceSet1186 = x3d.IndexedFaceSet()
IndexedFaceSet1186.coordIndex = [9,6,1,-1,1,0,9,-1,6,5,2,-1,2,1,6,-1,8,3,2,-1,2,5,8,-1,8,7,4,-1,4,3,8,-1,9,0,4,-1,4,7,9,-1,2,3,4,-1,2,4,0,-1,1,2,0,-1,13,14,10,-1,12,13,10,-1,11,12,10,-1,6,9,11,-1,11,10,6,-1,9,7,12,-1,12,11,9,-1,7,8,13,-1,13,12,7,-1,8,5,14,-1,14,13,8,-1,5,6,10,-1,10,14,5,-1]
IndexedFaceSet1186.creaseAngle = 3.14159
IndexedFaceSet1186.texCoordIndex = [9,6,1,-1,1,0,9,-1,6,5,2,-1,2,1,6,-1,8,3,2,-1,2,5,8,-1,8,7,4,-1,4,3,8,-1,9,0,4,-1,4,7,9,-1,2,3,4,-1,2,4,0,-1,1,2,0,-1,13,14,10,-1,12,13,10,-1,11,12,10,-1,6,9,11,-1,11,10,6,-1,9,7,12,-1,12,11,9,-1,7,8,13,-1,13,12,7,-1,8,5,14,-1,14,13,8,-1,5,6,10,-1,10,14,5,-1]
Coordinate1187 = x3d.Coordinate()

IndexedFaceSet1186.coord = Coordinate1187
TextureCoordinate1188 = x3d.TextureCoordinate()

IndexedFaceSet1186.texCoord = TextureCoordinate1188

Shape1182.geometry = IndexedFaceSet1186

HAnimSegment1181.children.append(Shape1182)
Group1189 = x3d.Group()
Group1189.DEF = "l_clavicle_Sites"
"""(l_clavicale_pt 0.0271 1.4943 0.0394)"""
HAnimSite1190 = x3d.HAnimSite()
HAnimSite1190.name = "l_clavicale_pt"
HAnimSite1190.DEF = "hanim_l_clavicale_pt"
HAnimSite1190.translation = [0.03,1.2,0.04]
TouchSensor1191 = x3d.TouchSensor()
TouchSensor1191.description = "HAnimSite l_clavicale_pt 14"

HAnimSite1190.children.append(TouchSensor1191)
Shape1192 = x3d.Shape()
Shape1192.USE = "HAnimSiteShape"

HAnimSite1190.children.append(Shape1192)

Group1189.children.append(HAnimSite1190)

HAnimSegment1181.children.append(Group1189)

HAnimJoint1180.children.append(HAnimSegment1181)
HAnimJoint1193 = x3d.HAnimJoint()
HAnimJoint1193.name = "l_acromioclavicular"
HAnimJoint1193.DEF = "hanim_l_acromioclavicular"
HAnimJoint1193.center = [0.12294001,1.191825,-0.012897001]
HAnimJoint1193.ulimit = [0,0,0]
HAnimJoint1193.llimit = [0,0,0]
HAnimSegment1194 = x3d.HAnimSegment()
HAnimSegment1194.name = "l_scapula"
HAnimSegment1194.DEF = "hanim_l_scapula"
Shape1195 = x3d.Shape()
Shape1195.DEF = "l_scapula_Shape"
Appearance1196 = x3d.Appearance()
Material1197 = x3d.Material()
Material1197.USE = "SurfaceDefault"

Appearance1196.material = Material1197
ImageTexture1198 = x3d.ImageTexture()
ImageTexture1198.USE = "JinLOA4TextureAtlas"

Appearance1196.texture = ImageTexture1198

Shape1195.appearance = Appearance1196
IndexedFaceSet1199 = x3d.IndexedFaceSet()
IndexedFaceSet1199.coordIndex = [5,4,0,-1,0,1,5,-1,4,3,2,-1,2,0,4,-1,3,9,6,-1,6,2,3,-1,7,5,1,-1,1,8,7,-1,6,8,0,-1,0,2,6,-1,0,8,1,-1,9,7,8,-1,8,6,9,-1,4,5,11,-1,11,10,4,-1,5,7,12,-1,12,11,5,-1,7,9,13,-1,13,12,7,-1,9,3,14,-1,14,13,9,-1,3,4,10,-1,10,14,3,-1,10,11,15,-1,11,12,15,-1,12,13,15,-1,13,14,15,-1,14,10,15,-1]
IndexedFaceSet1199.creaseAngle = 3.14159
IndexedFaceSet1199.texCoordIndex = [5,4,0,-1,0,1,5,-1,4,3,2,-1,2,0,4,-1,3,8,6,-1,6,2,3,-1,9,5,1,-1,1,7,9,-1,6,7,0,-1,0,2,6,-1,0,7,1,-1,12,13,11,-1,11,10,12,-1,4,5,15,-1,15,14,4,-1,5,9,16,-1,16,15,5,-1,13,12,17,-1,17,16,13,-1,8,3,18,-1,18,17,8,-1,3,4,14,-1,14,18,3,-1,14,15,19,-1,15,16,19,-1,16,17,19,-1,17,18,19,-1,18,14,19,-1]
Coordinate1200 = x3d.Coordinate()

IndexedFaceSet1199.coord = Coordinate1200
TextureCoordinate1201 = x3d.TextureCoordinate()

IndexedFaceSet1199.texCoord = TextureCoordinate1201

Shape1195.geometry = IndexedFaceSet1199

HAnimSegment1194.children.append(Shape1195)
Group1202 = x3d.Group()
Group1202.DEF = "l_scapula_Sites"
"""(l_acromion_pt 0.2032 1.4760 -0.0490) (l_axilla_proximal_pt 0.1777 1.4065 -0.0075) (l_axilla_distal_pt 0.1706 1.4072 -0.0875) (l_axilla_posterior_folds_pt x y z)"""
HAnimSite1203 = x3d.HAnimSite()
HAnimSite1203.name = "l_acromion_pt"
HAnimSite1203.DEF = "hanim_l_acromion_pt"
HAnimSite1203.translation = [0.15,1.222,-0.02]
TouchSensor1204 = x3d.TouchSensor()
TouchSensor1204.description = "HAnimSite l_acromion_pt 15"

HAnimSite1203.children.append(TouchSensor1204)
Shape1205 = x3d.Shape()
Shape1205.USE = "HAnimSiteShape"

HAnimSite1203.children.append(Shape1205)

Group1202.children.append(HAnimSite1203)
HAnimSite1206 = x3d.HAnimSite()
HAnimSite1206.name = "l_axilla_proximal_pt"
HAnimSite1206.DEF = "hanim_l_axilla_proximal_pt"
HAnimSite1206.translation = [0.15,1.16,0.04]
TouchSensor1207 = x3d.TouchSensor()
TouchSensor1207.description = "HAnimSite l_axilla_proximal_pt 16"

HAnimSite1206.children.append(TouchSensor1207)
Shape1208 = x3d.Shape()
Shape1208.USE = "HAnimSiteShape"

HAnimSite1206.children.append(Shape1208)

Group1202.children.append(HAnimSite1206)
HAnimSite1209 = x3d.HAnimSite()
HAnimSite1209.name = "l_axilla_distal_pt"
HAnimSite1209.DEF = "hanim_l_axilla_distal_pt"
HAnimSite1209.translation = [0.17,1.14,0]
TouchSensor1210 = x3d.TouchSensor()
TouchSensor1210.description = "HAnimSite l_axilla_distal_pt 17"

HAnimSite1209.children.append(TouchSensor1210)
Shape1211 = x3d.Shape()
Shape1211.USE = "HAnimSiteShape"

HAnimSite1209.children.append(Shape1211)

Group1202.children.append(HAnimSite1209)
HAnimSite1212 = x3d.HAnimSite()
HAnimSite1212.name = "l_axilla_posterior_folds_pt"
HAnimSite1212.DEF = "l_axilla_posterior_folds_pt"
HAnimSite1212.translation = [0.15,1.145,-0.04]
TouchSensor1213 = x3d.TouchSensor()
TouchSensor1213.description = "HAnimSite l_axilla_posterior_folds_pt 18"

HAnimSite1212.children.append(TouchSensor1213)
Shape1214 = x3d.Shape()
Shape1214.USE = "HAnimSiteShape"

HAnimSite1212.children.append(Shape1214)

Group1202.children.append(HAnimSite1212)

HAnimSegment1194.children.append(Group1202)

HAnimJoint1193.children.append(HAnimSegment1194)
HAnimJoint1215 = x3d.HAnimJoint()
HAnimJoint1215.name = "l_shoulder"
HAnimJoint1215.DEF = "hanim_l_shoulder"
HAnimJoint1215.center = [0.16506,1.1785501,-0.0032670002]
HAnimJoint1215.ulimit = [0,0,0]
HAnimJoint1215.llimit = [0,0,0]
HAnimSegment1216 = x3d.HAnimSegment()
HAnimSegment1216.name = "l_upperarm"
HAnimSegment1216.DEF = "hanim_l_upperarm"
Shape1217 = x3d.Shape()
Shape1217.DEF = "l_upperarm_Shape"
Appearance1218 = x3d.Appearance()
Material1219 = x3d.Material()
Material1219.USE = "SurfaceDefault"

Appearance1218.material = Material1219
ImageTexture1220 = x3d.ImageTexture()
ImageTexture1220.USE = "JinLOA4TextureAtlas"

Appearance1218.texture = ImageTexture1220

Shape1217.appearance = Appearance1218
IndexedFaceSet1221 = x3d.IndexedFaceSet()
IndexedFaceSet1221.coordIndex = [2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,36,37,38,-1,35,36,38,-1,39,35,38,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1,26,25,40,-1,40,41,26,-1,27,26,41,-1,41,42,27,-1,28,27,42,-1,42,43,28,-1,29,28,43,-1,43,44,29,-1,25,29,44,-1,44,40,25,-1,31,30,25,-1,25,26,31,-1,32,31,26,-1,26,27,32,-1,33,32,27,-1,27,28,33,-1,34,33,28,-1,28,29,34,-1,30,34,29,-1,29,25,30,-1,36,35,30,-1,30,31,36,-1,37,36,31,-1,31,32,37,-1,38,37,32,-1,32,33,38,-1,39,38,33,-1,33,34,39,-1,35,39,34,-1,34,30,35,-1]
IndexedFaceSet1221.creaseAngle = 3.14159
IndexedFaceSet1221.texCoordIndex = [2,0,1,-1,3,2,1,-1,55,3,1,-1,1,0,5,-1,5,6,1,-1,0,2,7,-1,7,5,0,-1,2,3,8,-1,8,7,2,-1,25,4,9,-1,9,26,25,-1,4,1,6,-1,6,9,4,-1,6,5,10,-1,10,11,6,-1,5,7,12,-1,12,10,5,-1,7,8,13,-1,13,12,7,-1,27,9,14,-1,14,28,27,-1,9,6,11,-1,11,14,9,-1,11,10,15,-1,15,16,11,-1,10,12,17,-1,17,15,10,-1,12,13,18,-1,18,17,12,-1,29,14,19,-1,19,30,29,-1,14,11,16,-1,16,19,14,-1,49,35,36,-1,48,49,36,-1,37,48,36,-1,20,21,16,-1,16,15,20,-1,22,20,15,-1,15,17,22,-1,23,22,17,-1,17,18,23,-1,24,32,31,-1,31,19,24,-1,21,24,19,-1,19,16,21,-1,38,39,56,-1,56,57,38,-1,40,50,58,-1,58,59,40,-1,41,40,59,-1,59,60,41,-1,42,41,60,-1,60,61,42,-1,39,42,61,-1,61,56,39,-1,43,44,39,-1,39,38,43,-1,45,52,51,-1,51,40,45,-1,46,45,40,-1,40,41,46,-1,47,46,41,-1,41,42,47,-1,44,47,42,-1,42,39,44,-1,34,33,44,-1,44,43,34,-1,35,54,53,-1,53,45,35,-1,36,35,45,-1,45,46,36,-1,37,36,46,-1,46,47,37,-1,33,37,47,-1,47,44,33,-1]
Coordinate1222 = x3d.Coordinate()

IndexedFaceSet1221.coord = Coordinate1222
TextureCoordinate1223 = x3d.TextureCoordinate()

IndexedFaceSet1221.texCoord = TextureCoordinate1223

Shape1217.geometry = IndexedFaceSet1221

HAnimSegment1216.children.append(Shape1217)
Group1224 = x3d.Group()
Group1224.DEF = "l_upperarm_Sites"
"""(l_humeral_lateral_epicondyles_pt 0.2280 1.1482 -0.1100) (l_humeral_medial_epicondyles_pt 0.1735 1.1272 -0.1113) (l_radiale_pt 0.2182 1.1212 -0.1167) (l_bideltoid_pt x y z)"""
HAnimSite1225 = x3d.HAnimSite()
HAnimSite1225.name = "l_humeral_lateral_epicondyles_pt"
HAnimSite1225.DEF = "hanim_l_humeral_lateral_epicondyles_pt"
HAnimSite1225.translation = [0.2,0.95,-0.03]
TouchSensor1226 = x3d.TouchSensor()
TouchSensor1226.description = "HAnimSite l_humeral_lateral_epicondyles_pt 63"

HAnimSite1225.children.append(TouchSensor1226)
Shape1227 = x3d.Shape()
Shape1227.USE = "HAnimSiteShape"

HAnimSite1225.children.append(Shape1227)

Group1224.children.append(HAnimSite1225)
HAnimSite1228 = x3d.HAnimSite()
HAnimSite1228.name = "l_humeral_medial_epicondyles_pt"
HAnimSite1228.DEF = "hanim_l_humeral_medial_epicondyles_pt"
HAnimSite1228.translation = [0.18,0.93,-0.03]
TouchSensor1229 = x3d.TouchSensor()
TouchSensor1229.description = "HAnimSite l_humeral_medial_epicondyles_pt 64"

HAnimSite1228.children.append(TouchSensor1229)
Shape1230 = x3d.Shape()
Shape1230.USE = "HAnimSiteShape"

HAnimSite1228.children.append(Shape1230)

Group1224.children.append(HAnimSite1228)
HAnimSite1231 = x3d.HAnimSite()
HAnimSite1231.name = "l_radiale_pt"
HAnimSite1231.DEF = "hanim_l_radiale_pt"
HAnimSite1231.translation = [0.2,0.91,-0.03]
TouchSensor1232 = x3d.TouchSensor()
TouchSensor1232.description = "HAnimSite l_radiale_pt 69"

HAnimSite1231.children.append(TouchSensor1232)
Shape1233 = x3d.Shape()
Shape1233.USE = "HAnimSiteShape"

HAnimSite1231.children.append(Shape1233)

Group1224.children.append(HAnimSite1231)
HAnimSite1234 = x3d.HAnimSite()
HAnimSite1234.name = "l_bideltoid_pt"
HAnimSite1234.DEF = "hanim_l_bideltoid_pt"
HAnimSite1234.translation = [0.225,1.185,0]
TouchSensor1235 = x3d.TouchSensor()
TouchSensor1235.description = "HAnimSite l_bideltoid_pt 96"

HAnimSite1234.children.append(TouchSensor1235)
Shape1236 = x3d.Shape()
Shape1236.USE = "HAnimSiteShape"

HAnimSite1234.children.append(Shape1236)

Group1224.children.append(HAnimSite1234)

HAnimSegment1216.children.append(Group1224)

HAnimJoint1215.children.append(HAnimSegment1216)
HAnimJoint1237 = x3d.HAnimJoint()
HAnimJoint1237.name = "l_elbow"
HAnimJoint1237.DEF = "hanim_l_elbow"
HAnimJoint1237.center = [0.18209252,0.9288,-0.0056295004]
HAnimJoint1237.ulimit = [0,0,0]
HAnimJoint1237.llimit = [0,0,0]
HAnimSegment1238 = x3d.HAnimSegment()
HAnimSegment1238.name = "l_forearm"
HAnimSegment1238.DEF = "hanim_l_forearm"
Shape1239 = x3d.Shape()
Shape1239.DEF = "l_forearm_Shape"
Appearance1240 = x3d.Appearance()
Material1241 = x3d.Material()
Material1241.USE = "SurfaceDefault"

Appearance1240.material = Material1241
ImageTexture1242 = x3d.ImageTexture()
ImageTexture1242.USE = "JinLOA4TextureAtlas"

Appearance1240.texture = ImageTexture1242

Shape1239.appearance = Appearance1240
IndexedFaceSet1243 = x3d.IndexedFaceSet()
IndexedFaceSet1243.coordIndex = [2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,21,22,23,-1,20,21,23,-1,24,20,23,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1]
IndexedFaceSet1243.creaseAngle = 3.14159
IndexedFaceSet1243.texCoordIndex = [2,3,4,-1,1,2,4,-1,0,1,4,-1,4,3,5,-1,5,6,4,-1,3,2,7,-1,7,5,3,-1,2,1,8,-1,8,7,2,-1,1,0,9,-1,9,8,1,-1,0,4,6,-1,6,9,0,-1,6,5,10,-1,10,11,6,-1,5,7,12,-1,12,10,5,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,6,11,-1,11,14,9,-1,11,10,15,-1,15,16,11,-1,10,12,17,-1,17,15,10,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,11,16,-1,16,19,14,-1,22,23,24,-1,21,22,24,-1,20,21,24,-1,22,21,16,-1,16,15,22,-1,23,22,15,-1,15,17,23,-1,24,23,17,-1,17,18,24,-1,20,24,18,-1,18,19,20,-1,21,20,19,-1,19,16,21,-1]
Coordinate1244 = x3d.Coordinate()

IndexedFaceSet1243.coord = Coordinate1244
TextureCoordinate1245 = x3d.TextureCoordinate()

IndexedFaceSet1243.texCoord = TextureCoordinate1245

Shape1239.geometry = IndexedFaceSet1243

HAnimSegment1238.children.append(Shape1239)
Group1246 = x3d.Group()
Group1246.DEF = "l_forearm_Sites"
"""(l_radial_styloid_pt 0.1901 0.8645 -0.0415) (l_olecranon_pt -0.1962 1.1375 -0.1123)"""
HAnimSite1247 = x3d.HAnimSite()
HAnimSite1247.name = "l_radial_styloid_pt"
HAnimSite1247.DEF = "hanim_l_radial_styloid_pt"
HAnimSite1247.translation = [0.18,0.725,0.025]
TouchSensor1248 = x3d.TouchSensor()
TouchSensor1248.description = "HAnimSite l_radial_styloid_pt 71"

HAnimSite1247.children.append(TouchSensor1248)
Shape1249 = x3d.Shape()
Shape1249.USE = "HAnimSiteShape"

HAnimSite1247.children.append(Shape1249)

Group1246.children.append(HAnimSite1247)
HAnimSite1250 = x3d.HAnimSite()
HAnimSite1250.name = "l_olecranon_pt"
HAnimSite1250.DEF = "hanim_l_olecranon_pt"
HAnimSite1250.translation = [0.2,0.92,-0.03]
TouchSensor1251 = x3d.TouchSensor()
TouchSensor1251.description = "HAnimSite l_olecranon_pt 65"

HAnimSite1250.children.append(TouchSensor1251)
Shape1252 = x3d.Shape()
Shape1252.USE = "HAnimSiteShape"

HAnimSite1250.children.append(Shape1252)

Group1246.children.append(HAnimSite1250)

HAnimSegment1238.children.append(Group1246)

HAnimJoint1237.children.append(HAnimSegment1238)
HAnimJoint1253 = x3d.HAnimJoint()
HAnimJoint1253.name = "l_radiocarpal"
HAnimJoint1253.DEF = "hanim_l_radiocarpal"
HAnimJoint1253.center = [0.18193501,0.724275,-0.00502425]
HAnimJoint1253.ulimit = [0,0,0]
HAnimJoint1253.llimit = [0,0,0]
HAnimSegment1254 = x3d.HAnimSegment()
HAnimSegment1254.name = "l_carpal"
HAnimSegment1254.DEF = "hanim_l_carpal"
Shape1255 = x3d.Shape()
Shape1255.DEF = "l_carpal_Shape"
Appearance1256 = x3d.Appearance()
Material1257 = x3d.Material()
Material1257.USE = "SurfaceDefault"

Appearance1256.material = Material1257
ImageTexture1258 = x3d.ImageTexture()
ImageTexture1258.USE = "JinLOA4TextureAtlas"

Appearance1256.texture = ImageTexture1258

Shape1255.appearance = Appearance1256
IndexedFaceSet1259 = x3d.IndexedFaceSet()
IndexedFaceSet1259.coordIndex = [0,1,12,-1,12,11,0,-1,1,2,13,-1,13,12,1,-1,2,17,10,-1,10,13,2,-1,3,4,8,-1,8,16,3,-1,5,19,21,-1,21,20,5,-1,6,14,15,-1,15,18,6,-1,6,7,9,-1,9,14,6,-1,7,0,11,-1,11,9,7,-1,15,19,5,-1,5,18,15,-1,10,17,3,-1,3,16,10,-1,4,20,21,-1,21,8,4,-1,0,22,1,-1,1,22,2,-1,2,22,17,-1,17,22,3,-1,3,22,4,-1,4,22,20,-1,20,22,5,-1,5,22,18,-1,18,22,6,-1,6,22,7,-1,7,22,0,-1,16,23,24,-1,24,10,16,-1,10,24,25,-1,25,13,10,-1,13,25,26,-1,26,12,13,-1,12,26,27,-1,27,11,12,-1,11,27,28,-1,28,9,11,-1,9,28,29,-1,29,14,9,-1,14,29,30,-1,30,15,14,-1,15,30,31,-1,31,19,15,-1,19,31,32,-1,32,21,19,-1,21,32,33,-1,33,8,21,-1,8,33,23,-1,23,16,8,-1,23,34,24,-1,24,34,25,-1,25,34,26,-1,26,34,27,-1,27,34,28,-1,28,34,29,-1,29,34,30,-1,30,34,31,-1,31,34,32,-1,32,34,33,-1,33,34,23,-1]
IndexedFaceSet1259.creaseAngle = 3.14159
IndexedFaceSet1259.texCoordIndex = [2,1,0,-1,0,3,2,-1,1,5,4,-1,4,0,1,-1,5,6,7,-1,7,4,5,-1,10,9,8,-1,8,11,10,-1,12,15,38,-1,38,37,12,-1,17,16,19,-1,19,18,17,-1,17,21,20,-1,20,16,17,-1,21,35,36,-1,36,20,21,-1,19,15,12,-1,12,18,19,-1,7,6,10,-1,10,11,7,-1,9,13,14,-1,14,8,9,-1,2,22,1,-1,1,22,5,-1,5,22,6,-1,6,22,10,-1,10,22,9,-1,9,22,13,-1,37,39,12,-1,12,39,18,-1,18,39,17,-1,17,39,21,-1,21,39,35,-1,11,24,23,-1,23,7,11,-1,7,23,25,-1,25,4,7,-1,4,25,26,-1,26,0,4,-1,0,26,27,-1,27,3,0,-1,36,40,28,-1,28,20,36,-1,20,28,29,-1,29,16,20,-1,16,29,30,-1,30,19,16,-1,19,30,31,-1,31,15,19,-1,15,31,41,-1,41,38,15,-1,14,32,33,-1,33,8,14,-1,8,33,24,-1,24,11,8,-1,24,34,23,-1,23,34,25,-1,25,34,26,-1,26,34,27,-1,40,42,28,-1,28,42,29,-1,29,42,30,-1,30,42,31,-1,31,42,41,-1,32,34,33,-1,33,34,24,-1]
Coordinate1260 = x3d.Coordinate()

IndexedFaceSet1259.coord = Coordinate1260
TextureCoordinate1261 = x3d.TextureCoordinate()

IndexedFaceSet1259.texCoord = TextureCoordinate1261

Shape1255.geometry = IndexedFaceSet1259

HAnimSegment1254.children.append(Shape1255)
Group1262 = x3d.Group()
Group1262.DEF = "l_carpal_Sites"
"""(l_ulnar_styloid_pt -0.2142 0.8529 -0.0648)"""
HAnimSite1263 = x3d.HAnimSite()
HAnimSite1263.name = "l_ulnar_styloid_pt"
HAnimSite1263.DEF = "hanim_l_ulnar_styloid_pt"
HAnimSite1263.translation = [0.2,0.725,0]
TouchSensor1264 = x3d.TouchSensor()
TouchSensor1264.description = "HAnimSite l_ulnar_styloid_pt 70"

HAnimSite1263.children.append(TouchSensor1264)
Shape1265 = x3d.Shape()
Shape1265.USE = "HAnimSiteShape"

HAnimSite1263.children.append(Shape1265)

Group1262.children.append(HAnimSite1263)

HAnimSegment1254.children.append(Group1262)

HAnimJoint1253.children.append(HAnimSegment1254)
HAnimJoint1266 = x3d.HAnimJoint()
HAnimJoint1266.name = "l_midcarpal_1"
HAnimJoint1266.DEF = "hanim_l_midcarpal_1"
HAnimJoint1266.center = [0.1812825,0.70605004,0.0193275]
HAnimJoint1266.ulimit = [0,0,0]
HAnimJoint1266.llimit = [0,0,0]
HAnimSegment1267 = x3d.HAnimSegment()
HAnimSegment1267.name = "l_trapezium"
HAnimSegment1267.DEF = "hanim_l_trapezium"
Shape1268 = x3d.Shape()
Shape1268.DEF = "l_trapezium_Shape"
Appearance1269 = x3d.Appearance()
Material1270 = x3d.Material()
Material1270.USE = "SurfaceDefault"

Appearance1269.material = Material1270
ImageTexture1271 = x3d.ImageTexture()
ImageTexture1271.USE = "JinLOA4TextureAtlas"

Appearance1269.texture = ImageTexture1271

Shape1268.appearance = Appearance1269
IndexedFaceSet1272 = x3d.IndexedFaceSet()
IndexedFaceSet1272.coordIndex = [6,5,3,-1,3,0,6,-1,5,8,2,-1,2,3,5,-1,1,4,7,-1,2,8,7,-1,7,4,2,-1,14,17,16,-1,16,15,14,-1,9,13,10,-1,10,13,12,-1,12,11,10,-1,1,9,10,-1,10,4,1,-1,4,10,11,-1,11,2,4,-1,2,11,12,-1,12,3,2,-1,3,12,13,-1,13,0,3,-1,6,14,15,-1,15,5,6,-1,5,15,16,-1,16,8,5,-1,8,16,17,-1,17,7,8,-1,20,21,22,-1,22,23,24,-1,24,25,18,-1,22,24,18,-1,20,22,18,-1,19,20,18,-1,6,0,19,-1,19,18,6,-1,0,13,20,-1,20,19,0,-1,13,9,21,-1,21,20,13,-1,9,1,22,-1,22,21,9,-1,1,7,23,-1,23,22,1,-1,7,17,24,-1,24,23,7,-1,17,14,25,-1,25,24,17,-1,14,6,18,-1,18,25,14,-1]
IndexedFaceSet1272.creaseAngle = 3.14159
IndexedFaceSet1272.texCoordIndex = [0,3,2,-1,2,1,0,-1,3,5,4,-1,4,2,3,-1,7,8,6,-1,18,19,6,-1,6,8,18,-1,21,12,23,-1,23,22,21,-1,9,10,15,-1,15,10,17,-1,17,16,15,-1,7,20,24,-1,24,8,7,-1,8,24,25,-1,25,18,8,-1,4,16,17,-1,17,2,4,-1,2,17,10,-1,10,1,2,-1,0,11,13,-1,13,3,0,-1,3,13,14,-1,14,5,3,-1,19,23,12,-1,12,6,19,-1,28,29,30,-1,30,31,32,-1,32,33,26,-1,30,32,26,-1,28,30,26,-1,27,28,26,-1,0,1,27,-1,27,26,0,-1,1,10,28,-1,28,27,1,-1,10,9,29,-1,29,28,10,-1,20,7,30,-1,30,29,20,-1,7,6,31,-1,31,30,7,-1,6,12,32,-1,32,31,6,-1,12,21,33,-1,33,32,12,-1,11,0,26,-1,26,33,11,-1]
Coordinate1273 = x3d.Coordinate()

IndexedFaceSet1272.coord = Coordinate1273
TextureCoordinate1274 = x3d.TextureCoordinate()

IndexedFaceSet1272.texCoord = TextureCoordinate1274

Shape1268.geometry = IndexedFaceSet1272

HAnimSegment1267.children.append(Shape1268)
Group1275 = x3d.Group()
Group1275.DEF = "l_trapezium_Sites"
"""None"""

HAnimSegment1267.children.append(Group1275)

HAnimJoint1266.children.append(HAnimSegment1267)
HAnimJoint1276 = x3d.HAnimJoint()
HAnimJoint1276.name = "l_carpometacarpal_1"
HAnimJoint1276.DEF = "hanim_l_carpometacarpal_1"
HAnimJoint1276.center = [0.18049501,0.69255006,0.0259875]
HAnimJoint1276.ulimit = [0,0,0]
HAnimJoint1276.llimit = [0,0,0]
HAnimSegment1277 = x3d.HAnimSegment()
HAnimSegment1277.name = "l_metacarpal_1"
HAnimSegment1277.DEF = "hanim_l_metacarpal_1"
Shape1278 = x3d.Shape()
Shape1278.DEF = "l_metacarpal_1_Shape"
Appearance1279 = x3d.Appearance()
Material1280 = x3d.Material()
Material1280.USE = "SurfaceDefault"

Appearance1279.material = Material1280
ImageTexture1281 = x3d.ImageTexture()
ImageTexture1281.USE = "JinLOA4TextureAtlas"

Appearance1279.texture = ImageTexture1281

Shape1278.appearance = Appearance1279
IndexedFaceSet1282 = x3d.IndexedFaceSet()
IndexedFaceSet1282.coordIndex = [1,2,9,-1,9,8,1,-1,8,10,0,-1,0,1,8,-1,2,3,6,-1,6,9,2,-1,0,10,7,-1,7,4,0,-1,5,6,3,-1,22,21,25,-1,22,25,24,-1,23,22,24,-1,19,18,17,-1,17,20,19,-1,13,12,11,-1,11,14,13,-1,14,11,16,-1,16,15,14,-1,3,11,12,-1,12,5,3,-1,5,12,13,-1,13,4,5,-1,4,13,14,-1,14,0,4,-1,0,14,15,-1,15,1,0,-1,1,15,16,-1,16,2,1,-1,2,16,11,-1,11,3,2,-1,7,17,18,-1,18,4,7,-1,4,18,19,-1,19,5,4,-1,5,19,20,-1,20,6,5,-1,6,20,17,-1,17,7,6,-1,10,21,22,-1,22,7,10,-1,7,22,23,-1,23,6,7,-1,6,23,24,-1,24,9,6,-1,9,24,25,-1,25,8,9,-1,8,25,21,-1,21,10,8,-1]
IndexedFaceSet1282.creaseAngle = 3.14159
IndexedFaceSet1282.texCoordIndex = [0,3,2,-1,2,1,0,-1,27,4,28,-1,28,26,27,-1,3,6,7,-1,7,2,3,-1,28,4,30,-1,30,29,28,-1,10,7,6,-1,15,14,13,-1,15,13,12,-1,11,15,12,-1,16,19,18,-1,18,17,16,-1,20,23,22,-1,22,21,20,-1,21,22,25,-1,25,24,21,-1,6,22,23,-1,23,10,6,-1,10,23,20,-1,20,8,10,-1,8,20,21,-1,21,5,8,-1,5,21,24,-1,24,0,5,-1,0,24,25,-1,25,3,0,-1,3,25,22,-1,22,6,3,-1,30,34,35,-1,35,29,30,-1,8,19,16,-1,16,10,8,-1,10,16,17,-1,17,7,10,-1,7,17,18,-1,18,9,7,-1,4,32,33,-1,33,30,4,-1,9,15,11,-1,11,7,9,-1,7,11,12,-1,12,2,7,-1,2,12,13,-1,13,1,2,-1,27,31,32,-1,32,4,27,-1]
Coordinate1283 = x3d.Coordinate()

IndexedFaceSet1282.coord = Coordinate1283
TextureCoordinate1284 = x3d.TextureCoordinate()

IndexedFaceSet1282.texCoord = TextureCoordinate1284

Shape1278.geometry = IndexedFaceSet1282

HAnimSegment1277.children.append(Shape1278)
Group1285 = x3d.Group()
Group1285.DEF = "l_metacarpal_1_Sites"
"""(l_metacarpal_phalanx_2_pt 0.2009 0.8139 -0.0237)"""
HAnimSite1286 = x3d.HAnimSite()
HAnimSite1286.name = "l_metacarpal_phalanx_2_pt"
HAnimSite1286.DEF = "hanim_l_metacarpal_phalanx_2_pt"
HAnimSite1286.translation = [0.2,0.665,0.012]
TouchSensor1287 = x3d.TouchSensor()
TouchSensor1287.description = "HAnimSite l_metacarpal_phalanx_2_pt 75"

HAnimSite1286.children.append(TouchSensor1287)
Shape1288 = x3d.Shape()
Shape1288.USE = "HAnimSiteShape"

HAnimSite1286.children.append(Shape1288)

Group1285.children.append(HAnimSite1286)

HAnimSegment1277.children.append(Group1285)

HAnimJoint1276.children.append(HAnimSegment1277)
HAnimJoint1289 = x3d.HAnimJoint()
HAnimJoint1289.name = "l_metacarpophalangeal_1"
HAnimJoint1289.DEF = "hanim_l_metacarpophalangeal_1"
HAnimJoint1289.center = [0.181035,0.67275,0.035775002]
HAnimJoint1289.ulimit = [0,0,0]
HAnimJoint1289.llimit = [0,0,0]
HAnimSegment1290 = x3d.HAnimSegment()
HAnimSegment1290.name = "l_carpal_proximal_phalanx_1"
HAnimSegment1290.DEF = "hanim_l_carpal_proximal_phalanx_1"
Shape1291 = x3d.Shape()
Shape1291.DEF = "l_carpal_proximal_phalanx_1_Shape"
Appearance1292 = x3d.Appearance()
Material1293 = x3d.Material()
Material1293.USE = "SurfaceDefault"

Appearance1292.material = Material1293
ImageTexture1294 = x3d.ImageTexture()
ImageTexture1294.USE = "JinLOA4TextureAtlas"

Appearance1292.texture = ImageTexture1294

Shape1291.appearance = Appearance1292
IndexedFaceSet1295 = x3d.IndexedFaceSet()
IndexedFaceSet1295.coordIndex = [5,0,6,-1,7,13,14,-1,14,3,7,-1,5,10,17,-1,17,0,5,-1,4,9,10,-1,10,5,4,-1,3,14,9,-1,9,4,3,-1,0,17,19,-1,19,1,0,-1,1,19,13,-1,13,7,1,-1,1,2,0,-1,0,2,8,-1,8,6,0,-1,9,12,11,-1,11,10,9,-1,13,16,15,-1,15,14,13,-1,10,11,18,-1,18,17,10,-1,19,20,16,-1,16,13,19,-1,17,18,20,-1,20,19,17,-1,14,15,12,-1,12,9,14,-1,15,16,20,-1,20,12,15,-1,11,12,20,-1,20,18,11,-1,26,25,24,-1,24,23,22,-1,26,24,22,-1,21,26,22,-1,28,27,30,-1,30,29,28,-1,8,21,22,-1,22,6,8,-1,6,22,23,-1,23,5,6,-1,5,23,24,-1,24,4,5,-1,4,24,25,-1,25,3,4,-1,3,25,26,-1,26,7,3,-1,27,32,31,-1,31,30,27,-1,7,27,28,-1,28,1,7,-1,1,28,29,-1,29,2,1,-1,2,29,30,-1,30,8,2,-1,8,30,31,-1,31,21,8,-1,21,31,32,-1,32,26,21,-1,26,32,27,-1,27,7,26,-1]
IndexedFaceSet1295.creaseAngle = 3.14159
IndexedFaceSet1295.texCoordIndex = [0,2,1,-1,36,35,34,-1,34,33,36,-1,0,8,7,-1,7,2,0,-1,10,9,8,-1,8,0,10,-1,33,34,37,-1,37,38,33,-1,2,7,12,-1,12,11,2,-1,39,40,35,-1,35,36,39,-1,11,13,2,-1,2,13,14,-1,14,1,2,-1,9,16,15,-1,15,8,9,-1,5,18,17,-1,17,4,5,-1,8,15,19,-1,19,7,8,-1,12,20,18,-1,18,5,12,-1,7,19,20,-1,20,12,7,-1,4,17,16,-1,16,9,4,-1,17,18,20,-1,20,16,17,-1,15,16,20,-1,20,19,15,-1,26,25,24,-1,24,23,22,-1,26,24,22,-1,21,26,22,-1,28,27,30,-1,30,29,28,-1,14,21,22,-1,22,1,14,-1,1,22,23,-1,23,0,1,-1,0,23,24,-1,24,10,0,-1,10,24,25,-1,25,3,10,-1,33,41,42,-1,42,36,33,-1,27,32,31,-1,31,30,27,-1,6,27,28,-1,28,11,6,-1,11,28,29,-1,29,13,11,-1,13,29,30,-1,30,14,13,-1,14,30,31,-1,31,21,14,-1,21,31,32,-1,32,26,21,-1,42,44,43,-1,43,36,42,-1]
Coordinate1296 = x3d.Coordinate()

IndexedFaceSet1295.coord = Coordinate1296
TextureCoordinate1297 = x3d.TextureCoordinate()

IndexedFaceSet1295.texCoord = TextureCoordinate1297

Shape1291.geometry = IndexedFaceSet1295

HAnimSegment1290.children.append(Shape1291)
Group1298 = x3d.Group()
Group1298.DEF = "l_carpal_proximal_phalanx_1_Sites"
"""None"""

HAnimSegment1290.children.append(Group1298)

HAnimJoint1289.children.append(HAnimSegment1290)
HAnimJoint1299 = x3d.HAnimJoint()
HAnimJoint1299.name = "l_carpal_interphalangeal_1"
HAnimJoint1299.DEF = "hanim_l_carpal_interphalangeal_1"
HAnimJoint1299.center = [0.182655,0.654075,0.0496575]
HAnimJoint1299.ulimit = [0,0,0]
HAnimJoint1299.llimit = [0,0,0]
HAnimSegment1300 = x3d.HAnimSegment()
HAnimSegment1300.name = "l_carpal_distal_phalanx_1"
HAnimSegment1300.DEF = "hanim_l_carpal_distal_phalanx_1"
Shape1301 = x3d.Shape()
Shape1301.DEF = "l_carpal_distal_phalanx_1_Shape"
Appearance1302 = x3d.Appearance()
Material1303 = x3d.Material()
Material1303.USE = "SurfaceDefault"

Appearance1302.material = Material1303
ImageTexture1304 = x3d.ImageTexture()
ImageTexture1304.USE = "JinLOA4TextureAtlas"

Appearance1302.texture = ImageTexture1304

Shape1301.appearance = Appearance1302
IndexedFaceSet1305 = x3d.IndexedFaceSet()
IndexedFaceSet1305.coordIndex = [0,11,28,-1,28,29,0,-1,32,1,17,-1,17,2,32,-1,4,17,1,-1,1,3,4,-1,11,5,31,-1,31,28,11,-1,29,32,2,-1,2,0,29,-1,4,3,31,-1,31,5,4,-1,23,1,32,-1,24,31,3,-1,24,3,1,-1,1,23,24,-1,4,8,7,-1,7,6,4,-1,5,11,10,-1,10,9,5,-1,4,5,9,-1,9,8,4,-1,10,12,14,-1,14,13,10,-1,2,17,16,-1,16,15,2,-1,0,2,15,-1,15,12,0,-1,8,9,18,-1,18,7,8,-1,18,9,10,-1,10,13,18,-1,6,19,21,-1,21,20,6,-1,22,14,21,-1,21,19,22,-1,17,6,20,-1,20,16,17,-1,6,17,4,-1,11,0,12,-1,12,10,11,-1,13,14,22,-1,6,7,18,-1,18,19,6,-1,18,13,22,-1,22,19,18,-1,16,20,21,-1,21,15,16,-1,21,14,12,-1,12,15,21,-1,24,23,26,-1,26,25,24,-1,28,27,30,-1,30,29,28,-1,27,25,26,-1,26,30,27,-1,24,25,27,-1,27,31,24,-1,32,30,26,-1,26,23,32,-1,30,32,29,-1,28,31,27,-1]
IndexedFaceSet1305.creaseAngle = 3.14159
IndexedFaceSet1305.texCoordIndex = [3,2,34,-1,34,33,3,-1,4,7,6,-1,6,5,4,-1,9,6,7,-1,7,8,9,-1,2,38,37,-1,37,34,2,-1,33,35,36,-1,36,3,33,-1,9,8,10,-1,10,11,9,-1,12,7,4,-1,13,10,8,-1,13,8,7,-1,7,12,13,-1,9,16,15,-1,15,14,9,-1,38,2,18,-1,18,39,38,-1,9,11,17,-1,17,16,9,-1,18,19,21,-1,21,20,18,-1,5,6,23,-1,23,22,5,-1,3,36,40,-1,40,19,3,-1,16,17,24,-1,24,15,16,-1,41,39,18,-1,18,20,41,-1,14,25,27,-1,27,26,14,-1,28,21,43,-1,43,42,28,-1,6,14,26,-1,26,23,6,-1,14,6,9,-1,2,3,19,-1,19,18,2,-1,20,21,28,-1,14,15,24,-1,24,25,14,-1,41,20,28,-1,28,42,41,-1,23,26,27,-1,27,22,23,-1,43,21,19,-1,19,40,43,-1,13,12,30,-1,30,29,13,-1,1,31,32,-1,32,0,1,-1,31,29,30,-1,30,32,31,-1,13,29,31,-1,31,10,13,-1,4,32,30,-1,30,12,4,-1,32,4,0,-1,1,10,31,-1]
Coordinate1306 = x3d.Coordinate()

IndexedFaceSet1305.coord = Coordinate1306
TextureCoordinate1307 = x3d.TextureCoordinate()

IndexedFaceSet1305.texCoord = TextureCoordinate1307

Shape1301.geometry = IndexedFaceSet1305

HAnimSegment1300.children.append(Shape1301)
Group1308 = x3d.Group()
Group1308.DEF = "l_carpal_distal_phalanx_1_Sites"
"""(l_carpal_distal_phalanx_1_tip 0.1982 0.8061 0.0759)"""
HAnimSite1309 = x3d.HAnimSite()
HAnimSite1309.name = "l_carpal_distal_phalanx_1_tip"
HAnimSite1309.DEF = "hanim_l_carpal_distal_phalanx_1_tip"
HAnimSite1309.translation = [0.18,0.64,0.06]
TouchSensor1310 = x3d.TouchSensor()
TouchSensor1310.description = "HAnimSite l_carpal_distal_phalanx_1_tip 101"

HAnimSite1309.children.append(TouchSensor1310)
Shape1311 = x3d.Shape()
Shape1311.USE = "HAnimSiteShape"

HAnimSite1309.children.append(Shape1311)

Group1308.children.append(HAnimSite1309)

HAnimSegment1300.children.append(Group1308)

HAnimJoint1299.children.append(HAnimSegment1300)

HAnimJoint1289.children.append(HAnimJoint1299)

HAnimJoint1276.children.append(HAnimJoint1289)

HAnimJoint1266.children.append(HAnimJoint1276)

HAnimJoint1253.children.append(HAnimJoint1266)
HAnimJoint1312 = x3d.HAnimJoint()
HAnimJoint1312.name = "l_midcarpal_2"
HAnimJoint1312.DEF = "hanim_l_midcarpal_2"
HAnimJoint1312.center = [0.1812825,0.70695,0.008417251]
HAnimJoint1312.ulimit = [0,0,0]
HAnimJoint1312.llimit = [0,0,0]
HAnimSegment1313 = x3d.HAnimSegment()
HAnimSegment1313.name = "l_trapezoid"
HAnimSegment1313.DEF = "hanim_l_trapezoid"
Shape1314 = x3d.Shape()
Shape1314.DEF = "l_trapezoid_Shape"
Appearance1315 = x3d.Appearance()
Material1316 = x3d.Material()
Material1316.USE = "SurfaceDefault"

Appearance1315.material = Material1316
ImageTexture1317 = x3d.ImageTexture()
ImageTexture1317.USE = "JinLOA4TextureAtlas"

Appearance1315.texture = ImageTexture1317

Shape1314.appearance = Appearance1315
IndexedFaceSet1318 = x3d.IndexedFaceSet()
IndexedFaceSet1318.coordIndex = [14,12,1,-1,1,2,14,-1,0,13,15,-1,15,3,0,-1,11,10,9,-1,9,8,11,-1,4,5,17,-1,17,16,4,-1,18,6,7,-1,7,19,18,-1,0,4,16,-1,16,13,0,-1,12,17,5,-1,5,1,12,-1,1,5,4,-1,4,0,1,-1,2,6,18,-1,18,14,2,-1,15,19,7,-1,7,3,15,-1,3,7,6,-1,6,2,3,-1,3,8,9,-1,9,0,3,-1,0,9,10,-1,10,1,0,-1,1,10,11,-1,11,2,1,-1,2,11,8,-1,8,3,2,-1,22,23,24,-1,24,25,26,-1,26,27,20,-1,24,26,20,-1,22,24,20,-1,21,22,20,-1,12,14,21,-1,21,20,12,-1,14,18,22,-1,22,21,14,-1,18,19,23,-1,23,22,18,-1,19,15,24,-1,24,23,19,-1,15,13,25,-1,25,24,15,-1,13,16,26,-1,26,25,13,-1,16,17,27,-1,27,26,16,-1,17,12,20,-1,20,27,17,-1]
IndexedFaceSet1318.creaseAngle = 3.14159
IndexedFaceSet1318.texCoordIndex = [21,19,1,-1,1,0,21,-1,12,20,22,-1,22,13,12,-1,5,4,7,-1,7,6,5,-1,8,9,25,-1,25,23,8,-1,26,17,18,-1,18,28,26,-1,12,16,24,-1,24,20,12,-1,19,25,9,-1,9,1,19,-1,1,9,8,-1,8,2,1,-1,0,10,27,-1,27,21,0,-1,22,28,18,-1,18,13,22,-1,3,11,10,-1,10,0,3,-1,13,14,15,-1,15,12,13,-1,2,7,4,-1,4,1,2,-1,1,4,5,-1,5,0,1,-1,0,5,6,-1,6,3,0,-1,31,32,33,-1,33,34,35,-1,35,36,29,-1,33,35,29,-1,31,33,29,-1,30,31,29,-1,19,21,30,-1,30,29,19,-1,21,27,31,-1,31,30,21,-1,26,28,32,-1,32,31,26,-1,28,22,33,-1,33,32,28,-1,22,20,34,-1,34,33,22,-1,20,24,35,-1,35,34,20,-1,23,25,36,-1,36,35,23,-1,25,19,29,-1,29,36,25,-1]
Coordinate1319 = x3d.Coordinate()

IndexedFaceSet1318.coord = Coordinate1319
TextureCoordinate1320 = x3d.TextureCoordinate()

IndexedFaceSet1318.texCoord = TextureCoordinate1320

Shape1314.geometry = IndexedFaceSet1318

HAnimSegment1313.children.append(Shape1314)
Group1321 = x3d.Group()
Group1321.DEF = "l_trapezoid_Sites"
"""None"""

HAnimSegment1313.children.append(Group1321)

HAnimJoint1312.children.append(HAnimSegment1313)
HAnimJoint1322 = x3d.HAnimJoint()
HAnimJoint1322.name = "l_carpometacarpal_2"
HAnimJoint1322.DEF = "hanim_l_carpometacarpal_2"
HAnimJoint1322.center = [0.1812825,0.6876,0.009729]
HAnimJoint1322.ulimit = [0,0,0]
HAnimJoint1322.llimit = [0,0,0]
HAnimSegment1323 = x3d.HAnimSegment()
HAnimSegment1323.name = "l_metacarpal_2"
HAnimSegment1323.DEF = "hanim_l_metacarpal_2"
Shape1324 = x3d.Shape()
Shape1324.DEF = "l_metacarpal_2_Shape"
Appearance1325 = x3d.Appearance()
Material1326 = x3d.Material()
Material1326.USE = "SurfaceDefault"

Appearance1325.material = Material1326
ImageTexture1327 = x3d.ImageTexture()
ImageTexture1327.USE = "JinLOA4TextureAtlas"

Appearance1325.texture = ImageTexture1327

Shape1324.appearance = Appearance1325
IndexedFaceSet1328 = x3d.IndexedFaceSet()
IndexedFaceSet1328.coordIndex = [0,3,8,-1,8,1,0,-1,5,7,3,-1,3,0,5,-1,10,2,4,-1,4,6,10,-1,2,1,8,-1,8,4,2,-1,14,11,6,-1,6,4,14,-1,8,3,17,-1,17,16,8,-1,9,7,12,-1,12,13,9,-1,15,4,8,-1,8,16,15,-1,15,14,4,-1,9,18,17,-1,17,3,9,-1,9,13,18,-1,25,31,30,-1,25,30,27,-1,26,25,27,-1,22,21,20,-1,20,19,22,-1,41,40,39,-1,39,38,41,-1,32,37,36,-1,33,32,36,-1,34,33,36,-1,35,34,36,-1,23,22,19,-1,19,24,23,-1,6,19,20,-1,20,10,6,-1,30,29,28,-1,28,27,30,-1,5,21,22,-1,22,7,5,-1,7,22,23,-1,23,12,7,-1,12,23,24,-1,24,11,12,-1,11,24,19,-1,19,6,11,-1,1,25,26,-1,26,0,1,-1,0,26,27,-1,27,5,0,-1,5,27,28,-1,28,21,5,-1,21,28,29,-1,29,20,21,-1,20,29,30,-1,30,10,20,-1,10,30,31,-1,31,2,10,-1,2,31,25,-1,25,1,2,-1,16,32,33,-1,33,15,16,-1,15,33,34,-1,34,14,15,-1,14,34,35,-1,35,13,14,-1,13,35,36,-1,36,18,13,-1,18,36,37,-1,37,17,18,-1,17,37,32,-1,32,16,17,-1,14,38,39,-1,39,11,14,-1,11,39,40,-1,40,12,11,-1,12,40,41,-1,41,13,12,-1,13,41,38,-1,38,14,13,-1,9,3,7,-1]
IndexedFaceSet1328.creaseAngle = 3.14159
IndexedFaceSet1328.texCoordIndex = [3,2,1,-1,1,0,3,-1,5,4,2,-1,2,3,5,-1,44,46,8,-1,8,45,44,-1,46,42,43,-1,43,8,46,-1,47,48,45,-1,45,8,47,-1,1,2,13,-1,13,12,1,-1,16,4,15,-1,15,14,16,-1,50,8,43,-1,43,49,50,-1,50,47,8,-1,16,18,13,-1,13,2,16,-1,16,14,18,-1,23,22,21,-1,23,21,20,-1,19,23,20,-1,25,24,27,-1,27,26,25,-1,29,28,31,-1,31,30,29,-1,35,34,33,-1,36,35,33,-1,37,36,33,-1,32,37,33,-1,38,25,26,-1,26,39,38,-1,7,26,27,-1,27,6,7,-1,21,41,40,-1,40,20,21,-1,5,24,25,-1,25,4,5,-1,4,25,38,-1,38,15,4,-1,15,38,39,-1,39,11,15,-1,48,56,51,-1,51,45,48,-1,0,23,19,-1,19,3,0,-1,3,19,20,-1,20,5,3,-1,5,20,40,-1,40,24,5,-1,24,40,41,-1,41,27,24,-1,27,41,21,-1,21,6,27,-1,6,21,22,-1,22,9,6,-1,9,22,23,-1,23,0,9,-1,12,35,36,-1,36,17,12,-1,50,54,55,-1,55,47,50,-1,10,37,32,-1,32,14,10,-1,14,32,33,-1,33,18,14,-1,18,33,34,-1,34,13,18,-1,13,34,35,-1,35,12,13,-1,47,52,53,-1,53,48,47,-1,11,31,28,-1,28,15,11,-1,15,28,29,-1,29,14,15,-1,14,29,30,-1,30,10,14,-1,16,2,4,-1]
Coordinate1329 = x3d.Coordinate()

IndexedFaceSet1328.coord = Coordinate1329
TextureCoordinate1330 = x3d.TextureCoordinate()

IndexedFaceSet1328.texCoord = TextureCoordinate1330

Shape1324.geometry = IndexedFaceSet1328

HAnimSegment1323.children.append(Shape1324)
Group1331 = x3d.Group()
Group1331.DEF = "l_metacarpal_2_Sites"
"""None"""

HAnimSegment1323.children.append(Group1331)

HAnimJoint1322.children.append(HAnimSegment1323)
HAnimJoint1332 = x3d.HAnimJoint()
HAnimJoint1332.name = "l_metacarpophalangeal_2"
HAnimJoint1332.DEF = "hanim_l_metacarpophalangeal_2"
HAnimJoint1332.center = [0.18373501,0.6372,0.015075001]
HAnimJoint1332.ulimit = [0,0,0]
HAnimJoint1332.llimit = [0,0,0]
HAnimSegment1333 = x3d.HAnimSegment()
HAnimSegment1333.name = "l_carpal_proximal_phalanx_2"
HAnimSegment1333.DEF = "hanim_l_carpal_proximal_phalanx_2"
Shape1334 = x3d.Shape()
Shape1334.DEF = "l_carpal_proximal_phalanx_2_Shape"
Appearance1335 = x3d.Appearance()
Material1336 = x3d.Material()
Material1336.USE = "SurfaceDefault"

Appearance1335.material = Material1336
ImageTexture1337 = x3d.ImageTexture()
ImageTexture1337.USE = "JinLOA4TextureAtlas"

Appearance1335.texture = ImageTexture1337

Shape1334.appearance = Appearance1335
IndexedFaceSet1338 = x3d.IndexedFaceSet()
IndexedFaceSet1338.coordIndex = [4,5,18,-1,18,19,4,-1,5,6,21,-1,21,18,5,-1,7,8,20,-1,20,25,7,-1,8,4,19,-1,19,20,8,-1,6,22,21,-1,1,10,8,-1,8,7,1,-1,6,5,11,-1,11,2,6,-1,5,4,0,-1,0,11,5,-1,4,8,10,-1,10,0,4,-1,1,7,9,-1,9,3,1,-1,9,6,2,-1,2,3,9,-1,9,7,23,-1,23,24,9,-1,6,9,24,-1,24,22,6,-1,23,7,25,-1,0,17,15,-1,15,11,0,-1,1,12,14,-1,14,10,1,-1,11,15,13,-1,13,2,11,-1,3,16,12,-1,12,1,3,-1,2,13,16,-1,16,3,2,-1,10,14,17,-1,17,0,10,-1,14,12,16,-1,16,17,14,-1,15,17,16,-1,16,13,15,-1,28,27,26,-1,29,28,26,-1,30,29,26,-1,18,26,27,-1,27,19,18,-1,19,27,28,-1,28,20,19,-1,20,28,29,-1,29,25,20,-1,36,35,34,-1,36,34,33,-1,33,32,31,-1,33,31,37,-1,36,33,37,-1,21,30,26,-1,26,18,21,-1,24,31,32,-1,32,22,24,-1,22,32,33,-1,33,21,22,-1,21,33,34,-1,34,30,21,-1,30,34,35,-1,35,29,30,-1,29,35,36,-1,36,25,29,-1,25,36,37,-1,37,23,25,-1,23,37,31,-1,31,24,23,-1]
IndexedFaceSet1338.creaseAngle = 3.14159
IndexedFaceSet1338.texCoordIndex = [0,3,2,-1,2,1,0,-1,3,5,4,-1,4,2,3,-1,6,9,41,-1,41,40,6,-1,9,38,39,-1,39,41,9,-1,5,10,4,-1,11,12,9,-1,9,6,11,-1,5,3,14,-1,14,13,5,-1,3,0,15,-1,15,14,3,-1,38,9,12,-1,12,42,38,-1,11,6,44,-1,44,43,11,-1,17,5,13,-1,13,16,17,-1,44,6,46,-1,46,45,44,-1,5,17,18,-1,18,10,5,-1,46,6,40,-1,15,21,20,-1,20,14,15,-1,11,23,22,-1,22,12,11,-1,14,20,24,-1,24,13,14,-1,43,48,23,-1,23,11,43,-1,13,24,25,-1,25,16,13,-1,12,22,47,-1,47,42,12,-1,22,23,48,-1,48,47,22,-1,20,21,25,-1,25,24,20,-1,29,28,27,-1,30,29,27,-1,26,30,27,-1,2,27,28,-1,28,1,2,-1,1,28,29,-1,29,8,1,-1,8,29,30,-1,30,7,8,-1,31,37,36,-1,31,36,35,-1,35,34,33,-1,35,33,32,-1,31,35,32,-1,4,26,27,-1,27,2,4,-1,18,33,34,-1,34,10,18,-1,10,34,35,-1,35,4,10,-1,4,35,36,-1,36,26,4,-1,26,36,37,-1,37,30,26,-1,30,37,31,-1,31,7,30,-1,7,31,32,-1,32,19,7,-1,19,32,33,-1,33,18,19,-1]
Coordinate1339 = x3d.Coordinate()

IndexedFaceSet1338.coord = Coordinate1339
TextureCoordinate1340 = x3d.TextureCoordinate()

IndexedFaceSet1338.texCoord = TextureCoordinate1340

Shape1334.geometry = IndexedFaceSet1338

HAnimSegment1333.children.append(Shape1334)
Group1341 = x3d.Group()
Group1341.DEF = "l_carpal_proximal_phalanx_2_Sites"
"""None"""

HAnimSegment1333.children.append(Group1341)

HAnimJoint1332.children.append(HAnimSegment1333)
HAnimJoint1342 = x3d.HAnimJoint()
HAnimJoint1342.name = "l_carpal_proximal_interphalangeal_2"
HAnimJoint1342.DEF = "hanim_l_carpal_proximal_interphalangeal_2"
HAnimJoint1342.center = [0.18171,0.606825,0.014184001]
HAnimJoint1342.ulimit = [0,0,0]
HAnimJoint1342.llimit = [0,0,0]
HAnimSegment1343 = x3d.HAnimSegment()
HAnimSegment1343.name = "l_carpal_middle_phalanx_2"
HAnimSegment1343.DEF = "hanim_l_carpal_middle_phalanx_2"
Shape1344 = x3d.Shape()
Shape1344.DEF = "l_carpal_middle_phalanx_2_Shape"
Appearance1345 = x3d.Appearance()
Material1346 = x3d.Material()
Material1346.USE = "SurfaceDefault"

Appearance1345.material = Material1346
ImageTexture1347 = x3d.ImageTexture()
ImageTexture1347.USE = "JinLOA4TextureAtlas"

Appearance1345.texture = ImageTexture1347

Shape1344.appearance = Appearance1345
IndexedFaceSet1348 = x3d.IndexedFaceSet()
IndexedFaceSet1348.coordIndex = [1,15,14,-1,14,7,1,-1,8,14,3,-1,1,7,5,-1,5,18,1,-1,3,2,21,-1,21,4,3,-1,6,8,3,-1,3,4,6,-1,6,4,13,-1,0,18,5,-1,5,13,0,-1,13,4,21,-1,21,0,13,-1,2,3,14,-1,14,15,2,-1,8,6,12,-1,12,11,8,-1,7,10,9,-1,9,5,7,-1,10,11,12,-1,12,9,10,-1,8,11,10,-1,10,14,8,-1,13,9,12,-1,12,6,13,-1,9,13,5,-1,7,14,10,-1,15,17,16,-1,16,2,15,-1,18,20,19,-1,19,1,18,-1,2,16,22,-1,22,21,2,-1,0,23,20,-1,20,18,0,-1,21,22,23,-1,23,0,21,-1,1,19,17,-1,17,15,1,-1,19,20,23,-1,23,17,19,-1,16,17,23,-1,23,22,16,-1]
IndexedFaceSet1348.creaseAngle = 3.14159
IndexedFaceSet1348.texCoordIndex = [3,25,24,-1,24,0,3,-1,4,1,5,-1,3,0,7,-1,7,6,3,-1,5,10,9,-1,9,8,5,-1,11,4,5,-1,5,8,11,-1,11,8,12,-1,27,6,7,-1,7,26,27,-1,12,8,9,-1,9,13,12,-1,10,5,1,-1,1,2,10,-1,4,11,15,-1,15,14,4,-1,0,28,29,-1,29,7,0,-1,16,14,15,-1,15,17,16,-1,4,14,16,-1,16,1,4,-1,12,17,15,-1,15,11,12,-1,29,26,7,-1,0,24,28,-1,2,19,18,-1,18,10,2,-1,6,21,20,-1,20,3,6,-1,10,18,22,-1,22,9,10,-1,27,31,21,-1,21,6,27,-1,9,22,23,-1,23,13,9,-1,3,20,30,-1,30,25,3,-1,20,21,31,-1,31,30,20,-1,18,19,23,-1,23,22,18,-1]
Coordinate1349 = x3d.Coordinate()

IndexedFaceSet1348.coord = Coordinate1349
TextureCoordinate1350 = x3d.TextureCoordinate()

IndexedFaceSet1348.texCoord = TextureCoordinate1350

Shape1344.geometry = IndexedFaceSet1348

HAnimSegment1343.children.append(Shape1344)
Group1351 = x3d.Group()
Group1351.DEF = "l_carpal_middle_phalanx_2_Sites"
"""None"""

HAnimSegment1343.children.append(Group1351)

HAnimJoint1342.children.append(HAnimSegment1343)
HAnimJoint1352 = x3d.HAnimJoint()
HAnimJoint1352.name = "l_carpal_distal_interphalangeal_2"
HAnimJoint1352.DEF = "hanim_l_carpal_distal_interphalangeal_2"
HAnimJoint1352.center = [0.180675,0.58162504,0.013385251]
HAnimJoint1352.ulimit = [0,0,0]
HAnimJoint1352.llimit = [0,0,0]
HAnimSegment1353 = x3d.HAnimSegment()
HAnimSegment1353.name = "l_carpal_distal_phalanx_2"
HAnimSegment1353.DEF = "hanim_l_carpal_distal_phalanx_2"
Shape1354 = x3d.Shape()
Shape1354.DEF = "l_carpal_distal_phalanx_2_Shape"
Appearance1355 = x3d.Appearance()
Material1356 = x3d.Material()
Material1356.USE = "SurfaceDefault"

Appearance1355.material = Material1356
ImageTexture1357 = x3d.ImageTexture()
ImageTexture1357.USE = "JinLOA4TextureAtlas"

Appearance1355.texture = ImageTexture1357

Shape1354.appearance = Appearance1355
IndexedFaceSet1358 = x3d.IndexedFaceSet()
IndexedFaceSet1358.coordIndex = [0,25,31,-1,24,1,32,-1,1,0,2,-1,2,3,1,-1,31,23,4,-1,4,5,31,-1,0,31,5,-1,5,2,0,-1,23,29,6,-1,6,4,23,-1,32,1,3,-1,3,7,32,-1,29,32,7,-1,7,6,29,-1,2,8,17,-1,17,14,2,-1,5,4,10,-1,10,11,5,-1,2,5,11,-1,11,8,2,-1,10,12,18,-1,18,21,10,-1,7,3,9,-1,9,13,7,-1,6,7,13,-1,13,12,6,-1,8,11,19,-1,19,17,8,-1,19,11,10,-1,10,21,19,-1,25,0,1,-1,1,24,25,-1,14,16,22,-1,22,20,14,-1,15,18,22,-1,22,16,15,-1,3,14,20,-1,20,9,3,-1,14,3,2,-1,4,6,12,-1,12,10,4,-1,21,18,15,-1,14,17,19,-1,19,16,14,-1,19,21,15,-1,15,16,19,-1,9,20,22,-1,22,13,9,-1,22,18,12,-1,12,13,22,-1,25,24,27,-1,27,26,25,-1,23,28,30,-1,30,29,23,-1,28,26,27,-1,27,30,28,-1,25,26,28,-1,28,31,25,-1,32,30,27,-1,27,24,32,-1,30,32,29,-1,23,31,28,-1]
IndexedFaceSet1358.creaseAngle = 3.14159
IndexedFaceSet1358.texCoordIndex = [0,2,1,-1,3,5,4,-1,5,0,7,-1,7,6,5,-1,33,10,9,-1,9,35,33,-1,0,1,8,-1,8,7,0,-1,10,12,11,-1,11,9,10,-1,4,5,6,-1,6,13,4,-1,12,34,36,-1,36,11,12,-1,7,16,15,-1,15,14,7,-1,35,9,18,-1,18,37,35,-1,7,8,17,-1,17,16,7,-1,18,19,21,-1,21,20,18,-1,13,6,23,-1,23,22,13,-1,11,36,38,-1,38,19,11,-1,16,17,24,-1,24,15,16,-1,39,37,18,-1,18,20,39,-1,2,0,5,-1,5,3,2,-1,14,25,27,-1,27,26,14,-1,28,21,41,-1,41,40,28,-1,6,14,26,-1,26,23,6,-1,14,6,7,-1,9,11,19,-1,19,18,9,-1,20,21,28,-1,14,15,24,-1,24,25,14,-1,39,20,28,-1,28,40,39,-1,23,26,27,-1,27,22,23,-1,41,21,19,-1,19,38,41,-1,2,3,30,-1,30,29,2,-1,10,42,43,-1,43,12,10,-1,31,29,30,-1,30,32,31,-1,2,29,31,-1,31,1,2,-1,4,32,30,-1,30,3,4,-1,43,34,12,-1,10,33,42,-1]
Coordinate1359 = x3d.Coordinate()

IndexedFaceSet1358.coord = Coordinate1359
TextureCoordinate1360 = x3d.TextureCoordinate()

IndexedFaceSet1358.texCoord = TextureCoordinate1360

Shape1354.geometry = IndexedFaceSet1358

HAnimSegment1353.children.append(Shape1354)
Group1361 = x3d.Group()
Group1361.DEF = "l_carpal_distal_phalanx_2_Sites"
"""(l_carpal_distal_phalanx_2_tip 0.2089 0.6858 -0.0245)"""
HAnimSite1362 = x3d.HAnimSite()
HAnimSite1362.name = "l_carpal_distal_phalanx_2_tip"
HAnimSite1362.DEF = "hanim_l_carpal_distal_phalanx_2_tip"
HAnimSite1362.translation = [0.172,0.558,0.017]
TouchSensor1363 = x3d.TouchSensor()
TouchSensor1363.description = "HAnimSite l_carpal_distal_phalanx_2_tip 102"

HAnimSite1362.children.append(TouchSensor1363)
Shape1364 = x3d.Shape()
Shape1364.USE = "HAnimSiteShape"

HAnimSite1362.children.append(Shape1364)

Group1361.children.append(HAnimSite1362)

HAnimSegment1353.children.append(Group1361)

HAnimJoint1352.children.append(HAnimSegment1353)

HAnimJoint1342.children.append(HAnimJoint1352)

HAnimJoint1332.children.append(HAnimJoint1342)

HAnimJoint1322.children.append(HAnimJoint1332)

HAnimJoint1312.children.append(HAnimJoint1322)

HAnimJoint1253.children.append(HAnimJoint1312)
HAnimJoint1365 = x3d.HAnimJoint()
HAnimJoint1365.name = "l_midcarpal_3"
HAnimJoint1365.DEF = "hanim_l_midcarpal_3"
HAnimJoint1365.center = [0.18108001,0.708525,-0.0047970004]
HAnimJoint1365.ulimit = [0,0,0]
HAnimJoint1365.llimit = [0,0,0]
HAnimSegment1366 = x3d.HAnimSegment()
HAnimSegment1366.name = "l_capitate"
HAnimSegment1366.DEF = "hanim_l_capitate"
Shape1367 = x3d.Shape()
Shape1367.DEF = "l_capitate_Shape"
Appearance1368 = x3d.Appearance()
Material1369 = x3d.Material()
Material1369.USE = "SurfaceDefault"

Appearance1368.material = Material1369
ImageTexture1370 = x3d.ImageTexture()
ImageTexture1370.USE = "JinLOA4TextureAtlas"

Appearance1368.texture = ImageTexture1370

Shape1367.appearance = Appearance1368
IndexedFaceSet1371 = x3d.IndexedFaceSet()
IndexedFaceSet1371.coordIndex = [5,6,4,-1,4,1,5,-1,7,0,3,-1,3,2,7,-1,8,11,10,-1,10,9,8,-1,12,15,14,-1,14,13,12,-1,1,8,9,-1,9,5,1,-1,5,9,10,-1,10,7,5,-1,7,10,11,-1,11,0,7,-1,0,11,8,-1,8,1,0,-1,6,12,13,-1,13,4,6,-1,4,13,14,-1,14,3,4,-1,3,14,15,-1,15,2,3,-1,2,15,12,-1,12,6,2,-1,22,21,20,-1,20,23,22,-1,18,17,16,-1,16,19,18,-1,5,16,17,-1,17,6,5,-1,6,17,18,-1,18,2,6,-1,2,18,19,-1,19,7,2,-1,7,19,16,-1,16,5,7,-1,0,20,21,-1,21,3,0,-1,3,21,22,-1,22,4,3,-1,4,22,23,-1,23,1,4,-1,1,23,20,-1,20,0,1,-1]
IndexedFaceSet1371.creaseAngle = 3.14159
IndexedFaceSet1371.texCoordIndex = [24,0,26,-1,26,25,24,-1,4,7,6,-1,6,5,4,-1,8,11,10,-1,10,9,8,-1,12,32,31,-1,31,30,12,-1,25,28,29,-1,29,24,25,-1,1,9,10,-1,10,4,1,-1,4,10,11,-1,11,7,4,-1,7,11,8,-1,8,2,7,-1,0,12,30,-1,30,26,0,-1,3,13,14,-1,14,6,3,-1,6,14,15,-1,15,5,6,-1,27,32,12,-1,12,0,27,-1,17,16,19,-1,19,18,17,-1,35,20,37,-1,37,36,35,-1,24,37,20,-1,20,0,24,-1,0,20,35,-1,35,27,0,-1,5,21,22,-1,22,4,5,-1,4,22,23,-1,23,1,4,-1,7,19,16,-1,16,6,7,-1,6,16,17,-1,17,3,6,-1,26,33,34,-1,34,25,26,-1,2,18,19,-1,19,7,2,-1]
Coordinate1372 = x3d.Coordinate()

IndexedFaceSet1371.coord = Coordinate1372
TextureCoordinate1373 = x3d.TextureCoordinate()

IndexedFaceSet1371.texCoord = TextureCoordinate1373

Shape1367.geometry = IndexedFaceSet1371

HAnimSegment1366.children.append(Shape1367)
Group1374 = x3d.Group()
Group1374.DEF = "l_capitate_Sites"
"""None"""

HAnimSegment1366.children.append(Group1374)

HAnimJoint1365.children.append(HAnimSegment1366)
HAnimJoint1375 = x3d.HAnimJoint()
HAnimJoint1375.name = "l_carpometacarpal_3"
HAnimJoint1375.DEF = "hanim_l_carpometacarpal_3"
HAnimJoint1375.center = [0.18108001,0.6858,-0.0062527503]
HAnimJoint1375.ulimit = [0,0,0]
HAnimJoint1375.llimit = [0,0,0]
HAnimSegment1376 = x3d.HAnimSegment()
HAnimSegment1376.name = "l_metacarpal_3"
HAnimSegment1376.DEF = "hanim_l_metacarpal_3"
Shape1377 = x3d.Shape()
Shape1377.DEF = "l_metacarpal_3_Shape"
Appearance1378 = x3d.Appearance()
Material1379 = x3d.Material()
Material1379.USE = "SurfaceDefault"

Appearance1378.material = Material1379
ImageTexture1380 = x3d.ImageTexture()
ImageTexture1380.USE = "JinLOA4TextureAtlas"

Appearance1378.texture = ImageTexture1380

Shape1377.appearance = Appearance1378
IndexedFaceSet1381 = x3d.IndexedFaceSet()
IndexedFaceSet1381.coordIndex = [0,8,6,-1,6,3,0,-1,10,5,1,-1,1,7,10,-1,2,9,7,-1,7,1,2,-1,8,0,4,-1,4,11,8,-1,14,13,12,-1,12,15,14,-1,34,33,32,-1,32,35,34,-1,25,24,29,-1,29,28,25,-1,17,20,19,-1,19,18,17,-1,25,28,27,-1,27,26,25,-1,20,17,16,-1,16,21,20,-1,6,12,13,-1,13,3,6,-1,24,31,30,-1,30,29,24,-1,2,14,15,-1,15,9,2,-1,16,23,22,-1,22,21,16,-1,9,16,17,-1,17,7,9,-1,7,17,18,-1,18,10,7,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,8,11,-1,8,20,21,-1,21,6,8,-1,6,21,22,-1,22,12,6,-1,12,22,23,-1,23,15,12,-1,15,23,16,-1,16,9,15,-1,3,24,25,-1,25,0,3,-1,0,25,26,-1,26,4,0,-1,4,26,27,-1,27,5,4,-1,5,27,28,-1,28,1,5,-1,1,28,29,-1,29,2,1,-1,2,29,30,-1,30,14,2,-1,14,30,31,-1,31,13,14,-1,13,31,24,-1,24,3,13,-1,10,32,33,-1,33,5,10,-1,5,33,34,-1,34,4,5,-1,4,34,35,-1,35,11,4,-1,11,35,32,-1,32,10,11,-1]
IndexedFaceSet1381.creaseAngle = 3.14159
IndexedFaceSet1381.texCoordIndex = [2,1,0,-1,0,3,2,-1,39,38,37,-1,37,36,39,-1,40,41,36,-1,36,37,40,-1,1,2,11,-1,11,10,1,-1,12,15,14,-1,14,13,12,-1,43,46,45,-1,45,44,43,-1,20,23,22,-1,22,21,20,-1,48,51,50,-1,50,49,48,-1,20,21,29,-1,29,28,20,-1,27,24,31,-1,31,30,27,-1,0,14,15,-1,15,3,0,-1,23,33,32,-1,32,22,23,-1,8,12,13,-1,13,9,8,-1,31,35,34,-1,34,30,31,-1,9,31,24,-1,24,4,9,-1,36,48,49,-1,49,39,36,-1,7,25,26,-1,26,10,7,-1,10,26,27,-1,27,1,10,-1,1,27,30,-1,30,0,1,-1,0,30,34,-1,34,14,0,-1,14,34,35,-1,35,13,14,-1,13,35,31,-1,31,9,13,-1,3,23,20,-1,20,2,3,-1,2,20,28,-1,28,11,2,-1,42,52,53,-1,53,38,42,-1,38,53,47,-1,47,37,38,-1,5,21,22,-1,22,8,5,-1,8,22,32,-1,32,12,8,-1,12,32,33,-1,33,15,12,-1,15,33,23,-1,23,3,15,-1,39,45,46,-1,46,38,39,-1,6,19,16,-1,16,11,6,-1,11,16,17,-1,17,10,11,-1,10,17,18,-1,18,7,10,-1]
Coordinate1382 = x3d.Coordinate()

IndexedFaceSet1381.coord = Coordinate1382
TextureCoordinate1383 = x3d.TextureCoordinate()

IndexedFaceSet1381.texCoord = TextureCoordinate1383

Shape1377.geometry = IndexedFaceSet1381

HAnimSegment1376.children.append(Shape1377)
Group1384 = x3d.Group()
Group1384.DEF = "l_metacarpal_3_Sites"
"""(l_metacarpal_phalanx_3 x y z)"""
HAnimSite1385 = x3d.HAnimSite()
HAnimSite1385.name = "l_metacarpal_phalanx_3"
HAnimSite1385.DEF = "hanim_l_metacarpal_phalanx_3"
HAnimSite1385.translation = [0.2,0.665,-0.039]
TouchSensor1386 = x3d.TouchSensor()
TouchSensor1386.description = "HAnimSite l_metacarpal_phalanx_3 76"

HAnimSite1385.children.append(TouchSensor1386)
Shape1387 = x3d.Shape()
Shape1387.USE = "HAnimSiteShape"

HAnimSite1385.children.append(Shape1387)

Group1384.children.append(HAnimSite1385)

HAnimSegment1376.children.append(Group1384)

HAnimJoint1375.children.append(HAnimSegment1376)
HAnimJoint1388 = x3d.HAnimJoint()
HAnimJoint1388.name = "l_metacarpophalangeal_3"
HAnimJoint1388.DEF = "hanim_l_metacarpophalangeal_3"
HAnimJoint1388.center = [0.18369,0.63495,-0.00391725]
HAnimJoint1388.ulimit = [0,0,0]
HAnimJoint1388.llimit = [0,0,0]
HAnimSegment1389 = x3d.HAnimSegment()
HAnimSegment1389.name = "l_carpal_proximal_phalanx_3"
HAnimSegment1389.DEF = "hanim_l_carpal_proximal_phalanx_3"
Shape1390 = x3d.Shape()
Shape1390.DEF = "l_carpal_proximal_phalanx_3_Shape"
Appearance1391 = x3d.Appearance()
Material1392 = x3d.Material()
Material1392.USE = "SurfaceDefault"

Appearance1391.material = Material1392
ImageTexture1393 = x3d.ImageTexture()
ImageTexture1393.USE = "JinLOA4TextureAtlas"

Appearance1391.texture = ImageTexture1393

Shape1390.appearance = Appearance1391
IndexedFaceSet1394 = x3d.IndexedFaceSet()
IndexedFaceSet1394.coordIndex = [3,4,26,-1,26,21,3,-1,5,6,27,-1,27,25,5,-1,4,23,26,-1,0,14,6,-1,6,5,0,-1,4,3,17,-1,17,1,4,-1,0,5,7,-1,7,2,0,-1,7,4,1,-1,1,2,7,-1,7,5,24,-1,24,22,7,-1,4,7,22,-1,22,23,4,-1,24,5,25,-1,15,13,11,-1,11,17,15,-1,0,8,10,-1,10,14,0,-1,17,11,9,-1,9,1,17,-1,2,12,8,-1,8,0,2,-1,1,9,12,-1,12,2,1,-1,14,10,13,-1,13,15,14,-1,10,8,12,-1,12,13,10,-1,11,13,12,-1,12,9,11,-1,3,21,18,-1,14,15,16,-1,16,6,14,-1,16,15,17,-1,17,3,16,-1,16,20,19,-1,19,6,16,-1,3,18,20,-1,20,16,3,-1,19,27,6,-1,31,30,29,-1,29,28,31,-1,26,28,29,-1,29,21,26,-1,38,37,36,-1,38,36,35,-1,35,34,33,-1,35,33,32,-1,38,35,32,-1,27,30,31,-1,31,25,27,-1,44,43,42,-1,44,42,41,-1,41,40,39,-1,44,41,39,-1,44,39,45,-1,18,32,33,-1,33,20,18,-1,20,33,34,-1,34,19,20,-1,19,34,35,-1,35,27,19,-1,27,35,36,-1,36,30,27,-1,30,36,37,-1,37,29,30,-1,29,37,38,-1,38,21,29,-1,21,38,32,-1,32,18,21,-1,22,39,40,-1,40,23,22,-1,23,40,41,-1,41,26,23,-1,26,41,42,-1,42,28,26,-1,28,42,43,-1,43,31,28,-1,31,43,44,-1,44,25,31,-1,25,44,45,-1,45,24,25,-1,24,45,39,-1,39,22,24,-1]
IndexedFaceSet1394.creaseAngle = 3.14159
IndexedFaceSet1394.texCoordIndex = [0,3,2,-1,2,1,0,-1,4,7,47,-1,47,46,4,-1,3,8,2,-1,9,10,7,-1,7,4,9,-1,3,0,12,-1,12,11,3,-1,9,4,49,-1,49,48,9,-1,14,3,11,-1,11,13,14,-1,49,4,51,-1,51,50,49,-1,3,14,15,-1,15,8,3,-1,51,4,46,-1,17,19,18,-1,18,12,17,-1,9,21,20,-1,20,10,9,-1,12,18,22,-1,22,11,12,-1,48,54,21,-1,21,9,48,-1,11,22,23,-1,23,13,11,-1,10,20,53,-1,53,52,10,-1,20,21,54,-1,54,53,20,-1,18,19,23,-1,23,22,18,-1,0,1,24,-1,10,52,55,-1,55,7,10,-1,25,17,12,-1,12,0,25,-1,55,57,56,-1,56,7,55,-1,0,24,27,-1,27,25,0,-1,56,47,7,-1,31,30,29,-1,29,28,31,-1,2,28,29,-1,29,1,2,-1,32,38,37,-1,32,37,36,-1,36,35,34,-1,36,34,33,-1,32,36,33,-1,6,30,31,-1,31,5,6,-1,39,45,44,-1,39,44,43,-1,43,42,41,-1,39,43,41,-1,39,41,40,-1,24,33,34,-1,34,27,24,-1,27,34,35,-1,35,26,27,-1,26,35,36,-1,36,6,26,-1,6,36,37,-1,37,30,6,-1,30,37,38,-1,38,29,30,-1,29,38,32,-1,32,1,29,-1,1,32,33,-1,33,24,1,-1,15,41,42,-1,42,8,15,-1,8,42,43,-1,43,2,8,-1,2,43,44,-1,44,28,2,-1,28,44,45,-1,45,31,28,-1,31,45,39,-1,39,5,31,-1,5,39,40,-1,40,16,5,-1,16,40,41,-1,41,15,16,-1]
Coordinate1395 = x3d.Coordinate()

IndexedFaceSet1394.coord = Coordinate1395
TextureCoordinate1396 = x3d.TextureCoordinate()

IndexedFaceSet1394.texCoord = TextureCoordinate1396

Shape1390.geometry = IndexedFaceSet1394

HAnimSegment1389.children.append(Shape1390)
Group1397 = x3d.Group()
Group1397.DEF = "l_carpal_proximal_phalanx_3_Sites"
"""None"""

HAnimSegment1389.children.append(Group1397)

HAnimJoint1388.children.append(HAnimSegment1389)
HAnimJoint1398 = x3d.HAnimJoint()
HAnimJoint1398.name = "l_carpal_proximal_interphalangeal_3"
HAnimJoint1398.DEF = "hanim_l_carpal_proximal_interphalangeal_3"
HAnimJoint1398.center = [0.18171,0.603225,-0.003537]
HAnimJoint1398.ulimit = [0,0,0]
HAnimJoint1398.llimit = [0,0,0]
HAnimSegment1399 = x3d.HAnimSegment()
HAnimSegment1399.name = "l_carpal_middle_phalanx_3"
HAnimSegment1399.DEF = "hanim_l_carpal_middle_phalanx_3"
Shape1400 = x3d.Shape()
Shape1400.DEF = "l_carpal_middle_phalanx_3_Shape"
Appearance1401 = x3d.Appearance()
Material1402 = x3d.Material()
Material1402.USE = "SurfaceDefault"

Appearance1401.material = Material1402
ImageTexture1403 = x3d.ImageTexture()
ImageTexture1403.USE = "JinLOA4TextureAtlas"

Appearance1401.texture = ImageTexture1403

Shape1400.appearance = Appearance1401
IndexedFaceSet1404 = x3d.IndexedFaceSet()
IndexedFaceSet1404.coordIndex = [1,15,14,-1,14,7,1,-1,8,14,3,-1,1,7,5,-1,5,18,1,-1,3,2,21,-1,21,4,3,-1,6,8,3,-1,3,4,6,-1,6,4,13,-1,0,18,5,-1,5,13,0,-1,13,4,21,-1,21,0,13,-1,2,3,14,-1,14,15,2,-1,8,6,12,-1,12,11,8,-1,7,10,9,-1,9,5,7,-1,10,11,12,-1,12,9,10,-1,8,11,10,-1,10,14,8,-1,13,9,12,-1,12,6,13,-1,9,13,5,-1,7,14,10,-1,15,17,16,-1,16,2,15,-1,18,20,19,-1,19,1,18,-1,2,16,22,-1,22,21,2,-1,0,23,20,-1,20,18,0,-1,21,22,23,-1,23,0,21,-1,1,19,17,-1,17,15,1,-1,19,20,23,-1,23,17,19,-1,16,17,23,-1,23,22,16,-1]
IndexedFaceSet1404.creaseAngle = 3.14159
IndexedFaceSet1404.texCoordIndex = [3,25,24,-1,24,0,3,-1,4,1,5,-1,3,0,7,-1,7,6,3,-1,5,10,9,-1,9,8,5,-1,11,4,5,-1,5,8,11,-1,11,8,12,-1,27,6,7,-1,7,26,27,-1,12,8,9,-1,9,13,12,-1,10,5,1,-1,1,2,10,-1,4,11,15,-1,15,14,4,-1,0,28,29,-1,29,7,0,-1,16,14,15,-1,15,17,16,-1,4,14,16,-1,16,1,4,-1,12,17,15,-1,15,11,12,-1,29,26,7,-1,0,24,28,-1,2,19,18,-1,18,10,2,-1,6,21,20,-1,20,3,6,-1,10,18,22,-1,22,9,10,-1,27,31,21,-1,21,6,27,-1,9,22,23,-1,23,13,9,-1,3,20,30,-1,30,25,3,-1,20,21,31,-1,31,30,20,-1,18,19,23,-1,23,22,18,-1]
Coordinate1405 = x3d.Coordinate()

IndexedFaceSet1404.coord = Coordinate1405
TextureCoordinate1406 = x3d.TextureCoordinate()

IndexedFaceSet1404.texCoord = TextureCoordinate1406

Shape1400.geometry = IndexedFaceSet1404

HAnimSegment1399.children.append(Shape1400)
Group1407 = x3d.Group()
Group1407.DEF = "l_carpal_middle_phalanx_3_Sites"
"""None"""

HAnimSegment1399.children.append(Group1407)

HAnimJoint1398.children.append(HAnimSegment1399)
HAnimJoint1408 = x3d.HAnimJoint()
HAnimJoint1408.name = "l_carpal_distal_interphalangeal_3"
HAnimJoint1408.DEF = "hanim_l_carpal_distal_interphalangeal_3"
HAnimJoint1408.center = [0.180675,0.575325,-0.0037597502]
HAnimJoint1408.ulimit = [0,0,0]
HAnimJoint1408.llimit = [0,0,0]
HAnimSegment1409 = x3d.HAnimSegment()
HAnimSegment1409.name = "l_carpal_distal_phalanx_3"
HAnimSegment1409.DEF = "hanim_l_carpal_distal_phalanx_3"
Shape1410 = x3d.Shape()
Shape1410.DEF = "l_carpal_distal_phalanx_3_Shape"
Appearance1411 = x3d.Appearance()
Material1412 = x3d.Material()
Material1412.USE = "SurfaceDefault"

Appearance1411.material = Material1412
ImageTexture1413 = x3d.ImageTexture()
ImageTexture1413.USE = "JinLOA4TextureAtlas"

Appearance1411.texture = ImageTexture1413

Shape1410.appearance = Appearance1411
IndexedFaceSet1414 = x3d.IndexedFaceSet()
IndexedFaceSet1414.coordIndex = [0,25,31,-1,24,1,32,-1,1,0,2,-1,2,3,1,-1,31,23,4,-1,4,5,31,-1,0,31,5,-1,5,2,0,-1,23,29,6,-1,6,4,23,-1,32,1,3,-1,3,7,32,-1,29,32,7,-1,7,6,29,-1,2,8,17,-1,17,14,2,-1,5,4,10,-1,10,11,5,-1,2,5,11,-1,11,8,2,-1,10,12,18,-1,18,21,10,-1,7,3,9,-1,9,13,7,-1,6,7,13,-1,13,12,6,-1,8,11,19,-1,19,17,8,-1,19,11,10,-1,10,21,19,-1,25,0,1,-1,1,24,25,-1,14,16,22,-1,22,20,14,-1,15,18,22,-1,22,16,15,-1,3,14,20,-1,20,9,3,-1,14,3,2,-1,4,6,12,-1,12,10,4,-1,21,18,15,-1,14,17,19,-1,19,16,14,-1,19,21,15,-1,15,16,19,-1,9,20,22,-1,22,13,9,-1,22,18,12,-1,12,13,22,-1,25,24,27,-1,27,26,25,-1,23,28,30,-1,30,29,23,-1,28,26,27,-1,27,30,28,-1,25,26,28,-1,28,31,25,-1,32,30,27,-1,27,24,32,-1,30,32,29,-1,23,31,28,-1]
IndexedFaceSet1414.creaseAngle = 3.14159
IndexedFaceSet1414.texCoordIndex = [0,2,1,-1,3,5,4,-1,5,0,7,-1,7,6,5,-1,33,10,9,-1,9,35,33,-1,0,1,8,-1,8,7,0,-1,10,12,11,-1,11,9,10,-1,4,5,6,-1,6,13,4,-1,12,34,36,-1,36,11,12,-1,7,16,15,-1,15,14,7,-1,35,9,18,-1,18,37,35,-1,7,8,17,-1,17,16,7,-1,18,19,21,-1,21,20,18,-1,13,6,23,-1,23,22,13,-1,11,36,38,-1,38,19,11,-1,16,17,24,-1,24,15,16,-1,39,37,18,-1,18,20,39,-1,2,0,5,-1,5,3,2,-1,14,25,27,-1,27,26,14,-1,28,21,41,-1,41,40,28,-1,6,14,26,-1,26,23,6,-1,14,6,7,-1,9,11,19,-1,19,18,9,-1,20,21,28,-1,14,15,24,-1,24,25,14,-1,39,20,28,-1,28,40,39,-1,23,26,27,-1,27,22,23,-1,41,21,19,-1,19,38,41,-1,2,3,30,-1,30,29,2,-1,10,42,43,-1,43,12,10,-1,31,29,30,-1,30,32,31,-1,2,29,31,-1,31,1,2,-1,4,32,30,-1,30,3,4,-1,43,34,12,-1,10,33,42,-1]
Coordinate1415 = x3d.Coordinate()

IndexedFaceSet1414.coord = Coordinate1415
TextureCoordinate1416 = x3d.TextureCoordinate()

IndexedFaceSet1414.texCoord = TextureCoordinate1416

Shape1410.geometry = IndexedFaceSet1414

HAnimSegment1409.children.append(Shape1410)
Group1417 = x3d.Group()
Group1417.DEF = "l_carpal_distal_phalanx_3_Sites"
"""(l_dactylion_pt 0.2056 0.6743 -0.0482) (l_carpal_distal_phalanx_3_tip 0.2080 0.6731 -0.0491)"""
HAnimSite1418 = x3d.HAnimSite()
HAnimSite1418.name = "l_dactylion_pt"
HAnimSite1418.DEF = "hanim_l_dactylion_pt"
HAnimSite1418.translation = [0.17,0.555,-0.006]
TouchSensor1419 = x3d.TouchSensor()
TouchSensor1419.description = "HAnimSite l_dactylion_pt 57"

HAnimSite1418.children.append(TouchSensor1419)
Shape1420 = x3d.Shape()
Shape1420.USE = "HAnimSiteShape"

HAnimSite1418.children.append(Shape1420)

Group1417.children.append(HAnimSite1418)
HAnimSite1421 = x3d.HAnimSite()
HAnimSite1421.name = "l_carpal_distal_phalanx_3_tip"
HAnimSite1421.DEF = "hanim_l_carpal_distal_phalanx_3_tip"
HAnimSite1421.translation = [0.172,0.555,-0.006]
TouchSensor1422 = x3d.TouchSensor()
TouchSensor1422.description = "HAnimSite l_carpal_distal_phalanx_3_tip 103"

HAnimSite1421.children.append(TouchSensor1422)
Shape1423 = x3d.Shape()
Shape1423.USE = "HAnimSiteShape"

HAnimSite1421.children.append(Shape1423)

Group1417.children.append(HAnimSite1421)

HAnimSegment1409.children.append(Group1417)

HAnimJoint1408.children.append(HAnimSegment1409)

HAnimJoint1398.children.append(HAnimJoint1408)

HAnimJoint1388.children.append(HAnimJoint1398)

HAnimJoint1375.children.append(HAnimJoint1388)

HAnimJoint1365.children.append(HAnimJoint1375)

HAnimJoint1253.children.append(HAnimJoint1365)
HAnimJoint1424 = x3d.HAnimJoint()
HAnimJoint1424.name = "l_midcarpal_4_5"
HAnimJoint1424.DEF = "hanim_l_midcarpal_4_5"
HAnimJoint1424.center = [0.18108001,0.70582503,-0.025740001]
HAnimJoint1424.ulimit = [0,0,0]
HAnimJoint1424.llimit = [0,0,0]
HAnimSegment1425 = x3d.HAnimSegment()
HAnimSegment1425.name = "l_hamate"
HAnimSegment1425.DEF = "hanim_l_hamate"
Shape1426 = x3d.Shape()
Shape1426.DEF = "l_hamate_Shape"
Appearance1427 = x3d.Appearance()
Material1428 = x3d.Material()
Material1428.USE = "SurfaceDefault"

Appearance1427.material = Material1428
ImageTexture1429 = x3d.ImageTexture()
ImageTexture1429.USE = "JinLOA4TextureAtlas"

Appearance1427.texture = ImageTexture1429

Shape1426.appearance = Appearance1427
IndexedFaceSet1430 = x3d.IndexedFaceSet()
IndexedFaceSet1430.coordIndex = [6,7,4,-1,4,3,6,-1,7,8,9,-1,9,0,7,-1,11,5,1,-1,1,2,11,-1,5,6,3,-1,3,1,5,-1,2,10,11,-1,4,7,0,-1,17,16,15,-1,17,15,14,-1,13,17,14,-1,20,22,21,-1,27,26,25,-1,25,24,27,-1,17,13,12,-1,12,18,17,-1,23,22,20,-1,20,19,23,-1,9,12,13,-1,13,0,9,-1,0,13,14,-1,14,4,0,-1,4,14,15,-1,15,3,4,-1,3,15,16,-1,16,1,3,-1,1,16,17,-1,17,2,1,-1,2,17,18,-1,18,10,2,-1,10,18,12,-1,12,9,10,-1,11,19,20,-1,20,5,11,-1,5,20,21,-1,21,6,5,-1,6,21,22,-1,22,7,6,-1,7,22,23,-1,23,8,7,-1,8,23,19,-1,19,11,8,-1,8,24,25,-1,25,9,8,-1,9,25,26,-1,26,10,9,-1,10,26,27,-1,27,11,10,-1,11,27,24,-1,24,8,11,-1]
IndexedFaceSet1430.creaseAngle = 3.14159
IndexedFaceSet1430.texCoordIndex = [0,3,2,-1,2,1,0,-1,3,6,5,-1,5,4,3,-1,7,10,9,-1,9,8,7,-1,10,28,29,-1,29,9,10,-1,8,11,7,-1,2,3,4,-1,16,15,14,-1,16,14,13,-1,12,16,13,-1,35,37,36,-1,23,22,39,-1,39,38,23,-1,16,12,25,-1,25,24,16,-1,26,19,17,-1,17,27,26,-1,5,25,12,-1,12,4,5,-1,4,12,13,-1,13,2,4,-1,2,13,14,-1,14,1,2,-1,29,32,33,-1,33,9,29,-1,9,33,34,-1,34,8,9,-1,8,34,40,-1,40,11,8,-1,11,40,41,-1,41,30,11,-1,7,43,35,-1,35,10,7,-1,10,35,36,-1,36,28,10,-1,0,18,19,-1,19,3,0,-1,3,19,26,-1,26,6,3,-1,31,42,43,-1,43,7,31,-1,6,20,21,-1,21,5,6,-1,30,39,22,-1,22,11,30,-1,11,22,23,-1,23,7,11,-1,7,23,38,-1,38,31,7,-1]
Coordinate1431 = x3d.Coordinate()

IndexedFaceSet1430.coord = Coordinate1431
TextureCoordinate1432 = x3d.TextureCoordinate()

IndexedFaceSet1430.texCoord = TextureCoordinate1432

Shape1426.geometry = IndexedFaceSet1430

HAnimSegment1425.children.append(Shape1426)
Group1433 = x3d.Group()
Group1433.DEF = "l_hamate_Sites"
"""None"""

HAnimSegment1425.children.append(Group1433)

HAnimJoint1424.children.append(HAnimSegment1425)
HAnimJoint1434 = x3d.HAnimJoint()
HAnimJoint1434.name = "l_carpometacarpal_4"
HAnimJoint1434.DEF = "hanim_l_carpometacarpal_4"
HAnimJoint1434.center = [0.18108001,0.68625003,-0.01991925]
HAnimJoint1434.ulimit = [0,0,0]
HAnimJoint1434.llimit = [0,0,0]
HAnimSegment1435 = x3d.HAnimSegment()
HAnimSegment1435.name = "l_metacarpal_4"
HAnimSegment1435.DEF = "hanim_l_metacarpal_4"
Shape1436 = x3d.Shape()
Shape1436.DEF = "l_metacarpal_4_Shape"
Appearance1437 = x3d.Appearance()
Material1438 = x3d.Material()
Material1438.USE = "SurfaceDefault"

Appearance1437.material = Material1438
ImageTexture1439 = x3d.ImageTexture()
ImageTexture1439.USE = "JinLOA4TextureAtlas"

Appearance1437.texture = ImageTexture1439

Shape1436.appearance = Appearance1437
IndexedFaceSet1440 = x3d.IndexedFaceSet()
IndexedFaceSet1440.coordIndex = [9,2,0,-1,0,6,9,-1,6,0,4,-1,4,10,6,-1,7,1,3,-1,3,8,7,-1,7,11,5,-1,5,1,7,-1,12,15,14,-1,14,13,12,-1,34,33,32,-1,32,35,34,-1,17,16,21,-1,21,20,17,-1,29,24,31,-1,31,30,29,-1,17,20,19,-1,19,18,17,-1,24,29,28,-1,28,25,24,-1,9,12,13,-1,13,2,9,-1,16,23,22,-1,22,21,16,-1,3,14,15,-1,15,8,3,-1,28,27,26,-1,26,25,28,-1,2,16,17,-1,17,0,2,-1,0,17,18,-1,18,4,0,-1,4,18,19,-1,19,5,4,-1,5,19,20,-1,20,1,5,-1,1,20,21,-1,21,3,1,-1,3,21,22,-1,22,14,3,-1,14,22,23,-1,23,13,14,-1,13,23,16,-1,16,2,13,-1,6,24,25,-1,25,9,6,-1,9,25,26,-1,26,12,9,-1,12,26,27,-1,27,15,12,-1,15,27,28,-1,28,8,15,-1,8,28,29,-1,29,7,8,-1,7,29,30,-1,30,11,7,-1,11,30,31,-1,31,10,11,-1,10,31,24,-1,24,6,10,-1,4,32,33,-1,33,10,4,-1,10,33,34,-1,34,11,10,-1,11,34,35,-1,35,5,11,-1,5,35,32,-1,32,4,5,-1]
IndexedFaceSet1440.creaseAngle = 3.14159
IndexedFaceSet1440.texCoordIndex = [0,3,2,-1,2,1,0,-1,1,2,5,-1,5,4,1,-1,38,9,40,-1,40,39,38,-1,38,42,41,-1,41,9,38,-1,12,15,14,-1,14,13,12,-1,16,45,44,-1,44,43,16,-1,20,23,22,-1,22,21,20,-1,48,51,50,-1,50,49,48,-1,20,21,29,-1,29,28,20,-1,27,24,31,-1,31,30,27,-1,0,12,13,-1,13,3,0,-1,23,33,32,-1,32,22,23,-1,8,14,15,-1,15,7,8,-1,31,35,34,-1,34,30,31,-1,3,23,20,-1,20,2,3,-1,2,20,28,-1,28,5,2,-1,37,52,53,-1,53,41,37,-1,41,53,46,-1,46,9,41,-1,9,46,47,-1,47,40,9,-1,8,22,32,-1,32,14,8,-1,14,32,33,-1,33,13,14,-1,13,33,23,-1,23,3,13,-1,1,27,30,-1,30,0,1,-1,0,30,34,-1,34,12,0,-1,12,34,35,-1,35,15,12,-1,15,35,31,-1,31,7,15,-1,7,31,24,-1,24,6,7,-1,38,48,49,-1,49,42,38,-1,11,25,26,-1,26,4,11,-1,4,26,27,-1,27,1,4,-1,5,18,19,-1,19,4,5,-1,36,45,16,-1,16,42,36,-1,42,16,43,-1,43,41,42,-1,10,17,18,-1,18,5,10,-1]
Coordinate1441 = x3d.Coordinate()

IndexedFaceSet1440.coord = Coordinate1441
TextureCoordinate1442 = x3d.TextureCoordinate()

IndexedFaceSet1440.texCoord = TextureCoordinate1442

Shape1436.geometry = IndexedFaceSet1440

HAnimSegment1435.children.append(Shape1436)
Group1443 = x3d.Group()
Group1443.DEF = "l_metacarpal_4_Sites"
"""None"""

HAnimSegment1435.children.append(Group1443)

HAnimJoint1434.children.append(HAnimSegment1435)
HAnimJoint1444 = x3d.HAnimJoint()
HAnimJoint1444.name = "l_metacarpophalangeal_4"
HAnimJoint1444.DEF = "hanim_l_metacarpophalangeal_4"
HAnimJoint1444.center = [0.18369,0.63405,-0.02144025]
HAnimJoint1444.ulimit = [0,0,0]
HAnimJoint1444.llimit = [0,0,0]
HAnimSegment1445 = x3d.HAnimSegment()
HAnimSegment1445.name = "l_carpal_proximal_phalanx_4"
HAnimSegment1445.DEF = "hanim_l_carpal_proximal_phalanx_4"
Shape1446 = x3d.Shape()
Shape1446.DEF = "l_carpal_proximal_phalanx_4_Shape"
Appearance1447 = x3d.Appearance()
Material1448 = x3d.Material()
Material1448.USE = "SurfaceDefault"

Appearance1447.material = Material1448
ImageTexture1449 = x3d.ImageTexture()
ImageTexture1449.USE = "JinLOA4TextureAtlas"

Appearance1447.texture = ImageTexture1449

Shape1446.appearance = Appearance1447
IndexedFaceSet1450 = x3d.IndexedFaceSet()
IndexedFaceSet1450.coordIndex = [3,4,22,-1,22,23,3,-1,5,6,31,-1,31,32,5,-1,4,44,22,-1,0,14,6,-1,6,5,0,-1,4,3,17,-1,17,1,4,-1,0,5,7,-1,7,2,0,-1,7,4,1,-1,1,2,7,-1,7,5,45,-1,45,43,7,-1,4,7,43,-1,43,44,4,-1,45,5,32,-1,15,13,11,-1,11,17,15,-1,0,8,10,-1,10,14,0,-1,17,11,9,-1,9,1,17,-1,2,12,8,-1,8,0,2,-1,1,9,12,-1,12,2,1,-1,14,10,13,-1,13,15,14,-1,10,8,12,-1,12,13,10,-1,11,13,12,-1,12,9,11,-1,3,23,40,-1,14,15,16,-1,16,6,14,-1,16,15,17,-1,17,3,16,-1,16,41,42,-1,42,6,16,-1,3,40,41,-1,41,16,3,-1,42,31,6,-1,21,20,19,-1,19,18,21,-1,22,18,19,-1,19,23,22,-1,24,30,29,-1,24,29,28,-1,28,27,26,-1,28,26,25,-1,24,28,25,-1,31,20,21,-1,21,32,31,-1,33,39,38,-1,33,38,37,-1,37,36,35,-1,33,37,35,-1,33,35,34,-1,40,25,26,-1,26,41,40,-1,41,26,27,-1,27,42,41,-1,42,27,28,-1,28,31,42,-1,31,28,29,-1,29,20,31,-1,20,29,30,-1,30,19,20,-1,19,30,24,-1,24,23,19,-1,23,24,25,-1,25,40,23,-1,43,35,36,-1,36,44,43,-1,44,36,37,-1,37,22,44,-1,22,37,38,-1,38,18,22,-1,18,38,39,-1,39,21,18,-1,21,39,33,-1,33,32,21,-1,32,33,34,-1,34,45,32,-1,45,34,35,-1,35,43,45,-1]
IndexedFaceSet1450.creaseAngle = 3.14159
IndexedFaceSet1450.texCoordIndex = [0,3,2,-1,2,1,0,-1,4,7,47,-1,47,46,4,-1,3,8,2,-1,9,10,7,-1,7,4,9,-1,3,0,12,-1,12,11,3,-1,9,4,49,-1,49,48,9,-1,14,3,11,-1,11,13,14,-1,49,4,51,-1,51,50,49,-1,3,14,15,-1,15,8,3,-1,51,4,46,-1,17,19,18,-1,18,12,17,-1,9,21,20,-1,20,10,9,-1,12,18,22,-1,22,11,12,-1,48,54,21,-1,21,9,48,-1,11,22,23,-1,23,13,11,-1,10,20,53,-1,53,52,10,-1,20,21,54,-1,54,53,20,-1,18,19,23,-1,23,22,18,-1,0,1,24,-1,10,52,55,-1,55,7,10,-1,25,17,12,-1,12,0,25,-1,55,57,56,-1,56,7,55,-1,0,24,27,-1,27,25,0,-1,56,47,7,-1,31,30,29,-1,29,28,31,-1,2,28,29,-1,29,1,2,-1,32,38,37,-1,32,37,36,-1,36,35,34,-1,36,34,33,-1,32,36,33,-1,6,30,31,-1,31,5,6,-1,39,45,44,-1,39,44,43,-1,43,42,41,-1,39,43,41,-1,39,41,40,-1,24,33,34,-1,34,27,24,-1,27,34,35,-1,35,26,27,-1,26,35,36,-1,36,6,26,-1,6,36,37,-1,37,30,6,-1,30,37,38,-1,38,29,30,-1,29,38,32,-1,32,1,29,-1,1,32,33,-1,33,24,1,-1,15,41,42,-1,42,8,15,-1,8,42,43,-1,43,2,8,-1,2,43,44,-1,44,28,2,-1,28,44,45,-1,45,31,28,-1,31,45,39,-1,39,5,31,-1,5,39,40,-1,40,16,5,-1,16,40,41,-1,41,15,16,-1]
Coordinate1451 = x3d.Coordinate()

IndexedFaceSet1450.coord = Coordinate1451
TextureCoordinate1452 = x3d.TextureCoordinate()

IndexedFaceSet1450.texCoord = TextureCoordinate1452

Shape1446.geometry = IndexedFaceSet1450

HAnimSegment1445.children.append(Shape1446)
Group1453 = x3d.Group()
Group1453.DEF = "l_carpal_proximal_phalanx_4_Sites"
"""None"""

HAnimSegment1445.children.append(Group1453)

HAnimJoint1444.children.append(HAnimSegment1445)
HAnimJoint1454 = x3d.HAnimJoint()
HAnimJoint1454.name = "l_carpal_proximal_interphalangeal_4"
HAnimJoint1454.DEF = "hanim_l_carpal_proximal_interphalangeal_4"
HAnimJoint1454.center = [0.18171,0.6066,-0.020646]
HAnimJoint1454.ulimit = [0,0,0]
HAnimJoint1454.llimit = [0,0,0]
HAnimSegment1455 = x3d.HAnimSegment()
HAnimSegment1455.name = "l_carpal_middle_phalanx_4"
HAnimSegment1455.DEF = "hanim_l_carpal_middle_phalanx_4"
Shape1456 = x3d.Shape()
Shape1456.DEF = "l_carpal_middle_phalanx_4_Shape"
Appearance1457 = x3d.Appearance()
Material1458 = x3d.Material()
Material1458.USE = "SurfaceDefault"

Appearance1457.material = Material1458
ImageTexture1459 = x3d.ImageTexture()
ImageTexture1459.USE = "JinLOA4TextureAtlas"

Appearance1457.texture = ImageTexture1459

Shape1456.appearance = Appearance1457
IndexedFaceSet1460 = x3d.IndexedFaceSet()
IndexedFaceSet1460.coordIndex = [1,15,14,-1,14,7,1,-1,8,14,3,-1,1,7,5,-1,5,18,1,-1,3,2,21,-1,21,4,3,-1,6,8,3,-1,3,4,6,-1,6,4,13,-1,0,18,5,-1,5,13,0,-1,13,4,21,-1,21,0,13,-1,2,3,14,-1,14,15,2,-1,8,6,12,-1,12,11,8,-1,7,10,9,-1,9,5,7,-1,10,11,12,-1,12,9,10,-1,8,11,10,-1,10,14,8,-1,13,9,12,-1,12,6,13,-1,9,13,5,-1,7,14,10,-1,15,17,16,-1,16,2,15,-1,18,20,19,-1,19,1,18,-1,2,16,22,-1,22,21,2,-1,0,23,20,-1,20,18,0,-1,21,22,23,-1,23,0,21,-1,1,19,17,-1,17,15,1,-1,19,20,23,-1,23,17,19,-1,16,17,23,-1,23,22,16,-1]
IndexedFaceSet1460.creaseAngle = 3.14159
IndexedFaceSet1460.texCoordIndex = [3,25,24,-1,24,0,3,-1,4,1,5,-1,3,0,7,-1,7,6,3,-1,5,10,9,-1,9,8,5,-1,11,4,5,-1,5,8,11,-1,11,8,12,-1,27,6,7,-1,7,26,27,-1,12,8,9,-1,9,13,12,-1,10,5,1,-1,1,2,10,-1,4,11,15,-1,15,14,4,-1,0,28,29,-1,29,7,0,-1,16,14,15,-1,15,17,16,-1,4,14,16,-1,16,1,4,-1,12,17,15,-1,15,11,12,-1,29,26,7,-1,0,24,28,-1,2,19,18,-1,18,10,2,-1,6,21,20,-1,20,3,6,-1,10,18,22,-1,22,9,10,-1,27,31,21,-1,21,6,27,-1,9,22,23,-1,23,13,9,-1,3,20,30,-1,30,25,3,-1,20,21,31,-1,31,30,20,-1,18,19,23,-1,23,22,18,-1]
Coordinate1461 = x3d.Coordinate()

IndexedFaceSet1460.coord = Coordinate1461
TextureCoordinate1462 = x3d.TextureCoordinate()

IndexedFaceSet1460.texCoord = TextureCoordinate1462

Shape1456.geometry = IndexedFaceSet1460

HAnimSegment1455.children.append(Shape1456)
Group1463 = x3d.Group()
Group1463.DEF = "l_carpal_middle_phalanx_4_Sites"
"""None"""

HAnimSegment1455.children.append(Group1463)

HAnimJoint1454.children.append(HAnimSegment1455)
HAnimJoint1464 = x3d.HAnimJoint()
HAnimJoint1464.name = "l_carpal_distal_interphalangeal_4"
HAnimJoint1464.DEF = "hanim_l_carpal_distal_interphalangeal_4"
HAnimJoint1464.center = [0.180675,0.580725,-0.019777501]
HAnimJoint1464.ulimit = [0,0,0]
HAnimJoint1464.llimit = [0,0,0]
HAnimSegment1465 = x3d.HAnimSegment()
HAnimSegment1465.name = "l_carpal_distal_phalanx_4"
HAnimSegment1465.DEF = "hanim_l_carpal_distal_phalanx_4"
Shape1466 = x3d.Shape()
Shape1466.DEF = "l_carpal_distal_phalanx_4_Shape"
Appearance1467 = x3d.Appearance()
Material1468 = x3d.Material()
Material1468.USE = "SurfaceDefault"

Appearance1467.material = Material1468
ImageTexture1469 = x3d.ImageTexture()
ImageTexture1469.USE = "JinLOA4TextureAtlas"

Appearance1467.texture = ImageTexture1469

Shape1466.appearance = Appearance1467
IndexedFaceSet1470 = x3d.IndexedFaceSet()
IndexedFaceSet1470.coordIndex = [0,25,31,-1,24,1,32,-1,1,0,2,-1,2,3,1,-1,31,23,4,-1,4,5,31,-1,0,31,5,-1,5,2,0,-1,23,29,6,-1,6,4,23,-1,32,1,3,-1,3,7,32,-1,29,32,7,-1,7,6,29,-1,2,8,17,-1,17,14,2,-1,5,4,10,-1,10,11,5,-1,2,5,11,-1,11,8,2,-1,10,12,18,-1,18,21,10,-1,7,3,9,-1,9,13,7,-1,6,7,13,-1,13,12,6,-1,8,11,19,-1,19,17,8,-1,19,11,10,-1,10,21,19,-1,25,0,1,-1,1,24,25,-1,14,16,22,-1,22,20,14,-1,15,18,22,-1,22,16,15,-1,3,14,20,-1,20,9,3,-1,14,3,2,-1,4,6,12,-1,12,10,4,-1,21,18,15,-1,14,17,19,-1,19,16,14,-1,19,21,15,-1,15,16,19,-1,9,20,22,-1,22,13,9,-1,22,18,12,-1,12,13,22,-1,25,24,27,-1,27,26,25,-1,23,28,30,-1,30,29,23,-1,28,26,27,-1,27,30,28,-1,25,26,28,-1,28,31,25,-1,32,30,27,-1,27,24,32,-1,30,32,29,-1,23,31,28,-1]
IndexedFaceSet1470.creaseAngle = 3.14159
IndexedFaceSet1470.texCoordIndex = [0,2,1,-1,3,5,4,-1,5,0,7,-1,7,6,5,-1,33,10,9,-1,9,35,33,-1,0,1,8,-1,8,7,0,-1,10,12,11,-1,11,9,10,-1,4,5,6,-1,6,13,4,-1,12,34,36,-1,36,11,12,-1,7,16,15,-1,15,14,7,-1,35,9,18,-1,18,37,35,-1,7,8,17,-1,17,16,7,-1,18,19,21,-1,21,20,18,-1,13,6,23,-1,23,22,13,-1,11,36,38,-1,38,19,11,-1,16,17,24,-1,24,15,16,-1,39,37,18,-1,18,20,39,-1,2,0,5,-1,5,3,2,-1,14,25,27,-1,27,26,14,-1,28,21,41,-1,41,40,28,-1,6,14,26,-1,26,23,6,-1,14,6,7,-1,9,11,19,-1,19,18,9,-1,20,21,28,-1,14,15,24,-1,24,25,14,-1,39,20,28,-1,28,40,39,-1,23,26,27,-1,27,22,23,-1,41,21,19,-1,19,38,41,-1,2,3,30,-1,30,29,2,-1,10,42,43,-1,43,12,10,-1,31,29,30,-1,30,32,31,-1,2,29,31,-1,31,1,2,-1,4,32,30,-1,30,3,4,-1,43,34,12,-1,10,33,42,-1]
Coordinate1471 = x3d.Coordinate()

IndexedFaceSet1470.coord = Coordinate1471
TextureCoordinate1472 = x3d.TextureCoordinate()

IndexedFaceSet1470.texCoord = TextureCoordinate1472

Shape1466.geometry = IndexedFaceSet1470

HAnimSegment1465.children.append(Shape1466)
Group1473 = x3d.Group()
Group1473.DEF = "l_carpal_distal_phalanx_4_Sites"
"""(l_carpal_distal_phalanx_4_tip 0.2035 0.6750 -0.0756)"""
HAnimSite1474 = x3d.HAnimSite()
HAnimSite1474.name = "l_carpal_distal_phalanx_4_tip"
HAnimSite1474.DEF = "hanim_l_carpal_distal_phalanx_4_tip"
HAnimSite1474.translation = [0.172,0.559,-0.024]
TouchSensor1475 = x3d.TouchSensor()
TouchSensor1475.description = "HAnimSite l_carpal_distal_phalanx_4_tip 104"

HAnimSite1474.children.append(TouchSensor1475)
Shape1476 = x3d.Shape()
Shape1476.USE = "HAnimSiteShape"

HAnimSite1474.children.append(Shape1476)

Group1473.children.append(HAnimSite1474)

HAnimSegment1465.children.append(Group1473)

HAnimJoint1464.children.append(HAnimSegment1465)

HAnimJoint1454.children.append(HAnimJoint1464)

HAnimJoint1444.children.append(HAnimJoint1454)

HAnimJoint1434.children.append(HAnimJoint1444)

HAnimJoint1424.children.append(HAnimJoint1434)

HAnimJoint1253.children.append(HAnimJoint1424)
HAnimJoint1477 = x3d.HAnimJoint()
HAnimJoint1477.name = "l_carpometacarpal_5"
HAnimJoint1477.DEF = "hanim_l_carpometacarpal_5"
HAnimJoint1477.center = [0.1816425,0.68827504,-0.032782502]
HAnimJoint1477.ulimit = [0,0,0]
HAnimJoint1477.llimit = [0,0,0]
HAnimSegment1478 = x3d.HAnimSegment()
HAnimSegment1478.name = "l_metacarpal_5"
HAnimSegment1478.DEF = "hanim_l_metacarpal_5"
Shape1479 = x3d.Shape()
Shape1479.DEF = "l_metacarpal_5_Shape"
Appearance1480 = x3d.Appearance()
Material1481 = x3d.Material()
Material1481.USE = "SurfaceDefault"

Appearance1480.material = Material1481
ImageTexture1482 = x3d.ImageTexture()
ImageTexture1482.USE = "JinLOA4TextureAtlas"

Appearance1480.texture = ImageTexture1482

Shape1479.appearance = Appearance1480
IndexedFaceSet1483 = x3d.IndexedFaceSet()
IndexedFaceSet1483.coordIndex = [11,3,0,-1,0,9,11,-1,5,4,1,-1,1,2,5,-1,3,5,2,-1,2,0,3,-1,9,0,8,-1,8,13,9,-1,2,1,6,-1,6,7,2,-1,6,1,10,-1,10,14,6,-1,1,4,12,-1,12,10,1,-1,0,2,7,-1,7,8,0,-1,25,20,27,-1,27,26,25,-1,18,17,16,-1,19,18,16,-1,15,19,16,-1,32,31,30,-1,32,30,29,-1,28,32,29,-1,11,15,16,-1,16,3,11,-1,3,16,17,-1,17,5,3,-1,5,17,18,-1,18,4,5,-1,4,18,19,-1,19,12,4,-1,24,23,22,-1,22,21,24,-1,20,25,24,-1,24,21,20,-1,9,20,21,-1,21,11,9,-1,11,21,22,-1,22,15,11,-1,15,22,23,-1,23,19,15,-1,19,23,24,-1,24,12,19,-1,12,24,25,-1,25,10,12,-1,10,25,26,-1,26,14,10,-1,14,26,27,-1,27,13,14,-1,13,27,20,-1,20,9,13,-1,14,28,29,-1,29,6,14,-1,6,29,30,-1,30,7,6,-1,7,30,31,-1,31,8,7,-1,8,31,32,-1,32,13,8,-1,13,32,28,-1,28,14,13,-1]
IndexedFaceSet1483.creaseAngle = 3.14159
IndexedFaceSet1483.texCoordIndex = [0,3,2,-1,2,1,0,-1,33,35,6,-1,6,34,33,-1,3,4,5,-1,5,2,3,-1,1,2,9,-1,9,8,1,-1,34,6,11,-1,11,37,34,-1,11,6,38,-1,38,12,11,-1,6,35,39,-1,39,38,6,-1,2,5,10,-1,10,9,2,-1,40,42,41,-1,41,16,40,-1,22,21,20,-1,23,22,20,-1,19,23,20,-1,45,44,43,-1,45,43,25,-1,24,45,25,-1,0,19,20,-1,20,3,0,-1,3,20,21,-1,21,4,3,-1,4,21,22,-1,22,7,4,-1,7,22,23,-1,23,14,7,-1,29,32,31,-1,31,30,29,-1,18,15,29,-1,29,30,18,-1,1,18,30,-1,30,0,1,-1,0,30,31,-1,31,19,0,-1,19,31,32,-1,32,23,19,-1,23,32,29,-1,29,14,23,-1,14,29,15,-1,15,13,14,-1,38,40,16,-1,16,12,38,-1,12,16,41,-1,41,36,12,-1,8,17,18,-1,18,1,8,-1,12,24,25,-1,25,11,12,-1,11,25,43,-1,43,37,11,-1,10,26,27,-1,27,9,10,-1,9,27,28,-1,28,8,9,-1,36,45,24,-1,24,12,36,-1]
Coordinate1484 = x3d.Coordinate()

IndexedFaceSet1483.coord = Coordinate1484
TextureCoordinate1485 = x3d.TextureCoordinate()

IndexedFaceSet1483.texCoord = TextureCoordinate1485

Shape1479.geometry = IndexedFaceSet1483

HAnimSegment1478.children.append(Shape1479)
Group1486 = x3d.Group()
Group1486.DEF = "l_metacarpal_5_Sites"
"""(l_metacarpal_phalanx_5_pt 0.1929 0.7860 -0.1122)"""
HAnimSite1487 = x3d.HAnimSite()
HAnimSite1487.name = "l_metacarpal_phalanx_5_pt"
HAnimSite1487.DEF = "hanim_l_metacarpal_phalanx_5_pt"
HAnimSite1487.translation = [0.2,0.665,-0.036]
TouchSensor1488 = x3d.TouchSensor()
TouchSensor1488.description = "HAnimSite l_metacarpal_phalanx_5_pt 77"

HAnimSite1487.children.append(TouchSensor1488)
Shape1489 = x3d.Shape()
Shape1489.USE = "HAnimSiteShape"

HAnimSite1487.children.append(Shape1489)

Group1486.children.append(HAnimSite1487)

HAnimSegment1478.children.append(Group1486)

HAnimJoint1477.children.append(HAnimSegment1478)
HAnimJoint1490 = x3d.HAnimJoint()
HAnimJoint1490.name = "l_metacarpophalangeal_5"
HAnimJoint1490.DEF = "hanim_l_metacarpophalangeal_5"
HAnimJoint1490.center = [0.18333,0.6381,-0.0370575]
HAnimJoint1490.ulimit = [0,0,0]
HAnimJoint1490.llimit = [0,0,0]
HAnimSegment1491 = x3d.HAnimSegment()
HAnimSegment1491.name = "l_carpal_proximal_phalanx_5"
HAnimSegment1491.DEF = "hanim_l_carpal_proximal_phalanx_5"
Shape1492 = x3d.Shape()
Shape1492.DEF = "l_carpal_proximal_phalanx_5_Shape"
Appearance1493 = x3d.Appearance()
Material1494 = x3d.Material()
Material1494.USE = "SurfaceDefault"

Appearance1493.material = Material1494
ImageTexture1495 = x3d.ImageTexture()
ImageTexture1495.USE = "JinLOA4TextureAtlas"

Appearance1493.texture = ImageTexture1495

Shape1492.appearance = Appearance1493
IndexedFaceSet1496 = x3d.IndexedFaceSet()
IndexedFaceSet1496.coordIndex = [10,8,6,-1,6,11,10,-1,0,3,5,-1,5,9,0,-1,11,6,4,-1,4,1,11,-1,2,7,3,-1,3,0,2,-1,1,4,7,-1,7,2,1,-1,9,5,8,-1,8,10,9,-1,5,3,7,-1,7,8,5,-1,6,8,7,-1,7,4,6,-1,17,13,1,-1,1,2,17,-1,14,15,26,-1,26,25,14,-1,0,9,15,-1,15,14,0,-1,13,12,11,-1,11,1,13,-1,2,0,14,-1,14,17,2,-1,12,34,36,-1,9,10,16,-1,16,15,9,-1,16,10,11,-1,11,12,16,-1,16,35,37,-1,37,15,16,-1,12,36,35,-1,35,16,12,-1,37,26,15,-1,12,13,23,-1,23,34,12,-1,13,17,24,-1,24,23,13,-1,17,14,25,-1,25,24,17,-1,19,20,21,-1,19,21,22,-1,18,19,22,-1,23,24,20,-1,20,19,23,-1,24,25,21,-1,21,20,24,-1,25,26,22,-1,22,21,25,-1,29,30,31,-1,28,29,31,-1,27,28,31,-1,27,31,32,-1,27,32,33,-1,34,23,19,-1,19,18,34,-1,35,36,30,-1,30,29,35,-1,36,34,31,-1,31,30,36,-1,34,18,32,-1,32,31,34,-1,18,22,33,-1,33,32,18,-1,22,26,27,-1,27,33,22,-1,26,37,28,-1,28,27,26,-1,37,35,29,-1,29,28,37,-1]
IndexedFaceSet1496.creaseAngle = 3.14159
IndexedFaceSet1496.texCoordIndex = [0,3,2,-1,2,1,0,-1,4,7,6,-1,6,5,4,-1,1,2,9,-1,9,8,1,-1,40,41,7,-1,7,4,40,-1,8,9,11,-1,11,10,8,-1,5,6,39,-1,39,38,5,-1,6,7,41,-1,41,39,6,-1,2,3,11,-1,11,9,2,-1,12,13,8,-1,8,10,12,-1,14,17,44,-1,44,43,14,-1,4,5,17,-1,17,14,4,-1,13,18,1,-1,1,8,13,-1,40,4,14,-1,14,42,40,-1,18,20,19,-1,5,38,45,-1,45,17,5,-1,21,0,1,-1,1,18,21,-1,45,47,46,-1,46,17,45,-1,18,19,23,-1,23,21,18,-1,46,44,17,-1,18,13,24,-1,24,20,18,-1,13,12,25,-1,25,24,13,-1,42,14,43,-1,43,48,42,-1,30,29,28,-1,30,28,27,-1,26,30,27,-1,24,25,29,-1,29,30,24,-1,25,15,28,-1,28,29,25,-1,15,16,27,-1,27,28,15,-1,36,35,34,-1,37,36,34,-1,31,37,34,-1,31,34,33,-1,31,33,32,-1,20,24,30,-1,30,26,20,-1,23,19,35,-1,35,36,23,-1,19,20,34,-1,34,35,19,-1,20,26,33,-1,33,34,20,-1,26,27,32,-1,32,33,26,-1,27,16,31,-1,31,32,27,-1,16,22,37,-1,37,31,16,-1,22,23,36,-1,36,37,22,-1]
Coordinate1497 = x3d.Coordinate()

IndexedFaceSet1496.coord = Coordinate1497
TextureCoordinate1498 = x3d.TextureCoordinate()

IndexedFaceSet1496.texCoord = TextureCoordinate1498

Shape1492.geometry = IndexedFaceSet1496

HAnimSegment1491.children.append(Shape1492)
Group1499 = x3d.Group()
Group1499.DEF = "l_carpal_proximal_phalanx_5_Sites"
"""None"""

HAnimSegment1491.children.append(Group1499)

HAnimJoint1490.children.append(HAnimSegment1491)
HAnimJoint1500 = x3d.HAnimJoint()
HAnimJoint1500.name = "l_carpal_proximal_interphalangeal_5"
HAnimJoint1500.DEF = "hanim_l_carpal_proximal_interphalangeal_5"
HAnimJoint1500.center = [0.18166502,0.62100005,-0.037147503]
HAnimJoint1500.ulimit = [0,0,0]
HAnimJoint1500.llimit = [0,0,0]
HAnimSegment1501 = x3d.HAnimSegment()
HAnimSegment1501.name = "l_carpal_middle_phalanx_5"
HAnimSegment1501.DEF = "hanim_l_carpal_middle_phalanx_5"
Shape1502 = x3d.Shape()
Shape1502.DEF = "l_carpal_middle_phalanx_5_Shape"
Appearance1503 = x3d.Appearance()
Material1504 = x3d.Material()
Material1504.USE = "SurfaceDefault"

Appearance1503.material = Material1504
ImageTexture1505 = x3d.ImageTexture()
ImageTexture1505.USE = "JinLOA4TextureAtlas"

Appearance1503.texture = ImageTexture1505

Shape1502.appearance = Appearance1503
IndexedFaceSet1506 = x3d.IndexedFaceSet()
IndexedFaceSet1506.coordIndex = [1,15,14,-1,14,7,1,-1,8,14,3,-1,1,7,5,-1,5,18,1,-1,3,2,21,-1,21,4,3,-1,6,8,3,-1,3,4,6,-1,6,4,13,-1,0,18,5,-1,5,13,0,-1,13,4,21,-1,21,0,13,-1,2,3,14,-1,14,15,2,-1,8,6,12,-1,12,11,8,-1,7,10,9,-1,9,5,7,-1,10,11,12,-1,12,9,10,-1,8,11,10,-1,10,14,8,-1,13,9,12,-1,12,6,13,-1,9,13,5,-1,7,14,10,-1,15,17,16,-1,16,2,15,-1,18,20,19,-1,19,1,18,-1,2,16,22,-1,22,21,2,-1,0,23,20,-1,20,18,0,-1,21,22,23,-1,23,0,21,-1,1,19,17,-1,17,15,1,-1,19,20,23,-1,23,17,19,-1,16,17,23,-1,23,22,16,-1]
IndexedFaceSet1506.creaseAngle = 3.14159
IndexedFaceSet1506.texCoordIndex = [3,25,24,-1,24,0,3,-1,4,1,5,-1,3,0,7,-1,7,6,3,-1,5,10,9,-1,9,8,5,-1,11,4,5,-1,5,8,11,-1,11,8,12,-1,27,6,7,-1,7,26,27,-1,12,8,9,-1,9,13,12,-1,10,5,1,-1,1,2,10,-1,4,11,15,-1,15,14,4,-1,0,28,29,-1,29,7,0,-1,16,14,15,-1,15,17,16,-1,4,14,16,-1,16,1,4,-1,12,17,15,-1,15,11,12,-1,29,26,7,-1,0,24,28,-1,2,19,18,-1,18,10,2,-1,6,21,20,-1,20,3,6,-1,10,18,22,-1,22,9,10,-1,27,31,21,-1,21,6,27,-1,9,22,23,-1,23,13,9,-1,3,20,30,-1,30,25,3,-1,20,21,31,-1,31,30,20,-1,18,19,23,-1,23,22,18,-1]
Coordinate1507 = x3d.Coordinate()

IndexedFaceSet1506.coord = Coordinate1507
TextureCoordinate1508 = x3d.TextureCoordinate()

IndexedFaceSet1506.texCoord = TextureCoordinate1508

Shape1502.geometry = IndexedFaceSet1506

HAnimSegment1501.children.append(Shape1502)
Group1509 = x3d.Group()
Group1509.DEF = "l_carpal_middle_phalanx_5_Sites"
"""None"""

HAnimSegment1501.children.append(Group1509)

HAnimJoint1500.children.append(HAnimSegment1501)
HAnimJoint1510 = x3d.HAnimJoint()
HAnimJoint1510.name = "l_carpal_distal_interphalangeal_5"
HAnimJoint1510.DEF = "hanim_l_carpal_distal_interphalangeal_5"
HAnimJoint1510.center = [0.18081002,0.602325,-0.0369675]
HAnimJoint1510.ulimit = [0,0,0]
HAnimJoint1510.llimit = [0,0,0]
HAnimSegment1511 = x3d.HAnimSegment()
HAnimSegment1511.name = "l_carpal_distal_phalanx_5"
HAnimSegment1511.DEF = "hanim_l_carpal_distal_phalanx_5"
Shape1512 = x3d.Shape()
Shape1512.DEF = "l_carpal_distal_phalanx_5_Shape"
Appearance1513 = x3d.Appearance()
Material1514 = x3d.Material()
Material1514.USE = "SurfaceDefault"

Appearance1513.material = Material1514
ImageTexture1515 = x3d.ImageTexture()
ImageTexture1515.USE = "JinLOA4TextureAtlas"

Appearance1513.texture = ImageTexture1515

Shape1512.appearance = Appearance1513
IndexedFaceSet1516 = x3d.IndexedFaceSet()
IndexedFaceSet1516.coordIndex = [0,25,31,-1,24,1,32,-1,1,0,2,-1,2,3,1,-1,31,23,4,-1,4,5,31,-1,0,31,5,-1,5,2,0,-1,23,29,6,-1,6,4,23,-1,32,1,3,-1,3,7,32,-1,29,32,7,-1,7,6,29,-1,2,8,17,-1,17,14,2,-1,5,4,10,-1,10,11,5,-1,2,5,11,-1,11,8,2,-1,10,12,18,-1,18,21,10,-1,7,3,9,-1,9,13,7,-1,6,7,13,-1,13,12,6,-1,8,11,19,-1,19,17,8,-1,19,11,10,-1,10,21,19,-1,25,0,1,-1,1,24,25,-1,14,16,22,-1,22,20,14,-1,15,18,22,-1,22,16,15,-1,3,14,20,-1,20,9,3,-1,14,3,2,-1,4,6,12,-1,12,10,4,-1,21,18,15,-1,14,17,19,-1,19,16,14,-1,19,21,15,-1,15,16,19,-1,9,20,22,-1,22,13,9,-1,22,18,12,-1,12,13,22,-1,25,24,27,-1,27,26,25,-1,23,28,30,-1,30,29,23,-1,28,26,27,-1,27,30,28,-1,25,26,28,-1,28,31,25,-1,32,30,27,-1,27,24,32,-1,30,32,29,-1,23,31,28,-1]
IndexedFaceSet1516.creaseAngle = 3.14159
IndexedFaceSet1516.texCoordIndex = [0,2,1,-1,3,5,4,-1,5,0,7,-1,7,6,5,-1,33,10,9,-1,9,35,33,-1,0,1,8,-1,8,7,0,-1,10,12,11,-1,11,9,10,-1,4,5,6,-1,6,13,4,-1,12,34,36,-1,36,11,12,-1,7,16,15,-1,15,14,7,-1,35,9,18,-1,18,37,35,-1,7,8,17,-1,17,16,7,-1,18,19,21,-1,21,20,18,-1,13,6,23,-1,23,22,13,-1,11,36,38,-1,38,19,11,-1,16,17,24,-1,24,15,16,-1,39,37,18,-1,18,20,39,-1,2,0,5,-1,5,3,2,-1,14,25,27,-1,27,26,14,-1,28,21,41,-1,41,40,28,-1,6,14,26,-1,26,23,6,-1,14,6,7,-1,9,11,19,-1,19,18,9,-1,20,21,28,-1,14,15,24,-1,24,25,14,-1,39,20,28,-1,28,40,39,-1,23,26,27,-1,27,22,23,-1,41,21,19,-1,19,38,41,-1,2,3,30,-1,30,29,2,-1,10,42,43,-1,43,12,10,-1,31,29,30,-1,30,32,31,-1,2,29,31,-1,31,1,2,-1,4,32,30,-1,30,3,4,-1,43,34,12,-1,10,33,42,-1]
Coordinate1517 = x3d.Coordinate()

IndexedFaceSet1516.coord = Coordinate1517
TextureCoordinate1518 = x3d.TextureCoordinate()

IndexedFaceSet1516.texCoord = TextureCoordinate1518

Shape1512.geometry = IndexedFaceSet1516

HAnimSegment1511.children.append(Shape1512)
Group1519 = x3d.Group()
Group1519.DEF = "l_carpal_distal_phalanx_5_Sites"
"""(l_carpal_distal_phalanx_5_tip 0.2014 0.7009 -0.1012)"""
HAnimSite1520 = x3d.HAnimSite()
HAnimSite1520.name = "l_carpal_distal_phalanx_5_tip"
HAnimSite1520.DEF = "hanim_l_carpal_distal_phalanx_5_tip"
HAnimSite1520.translation = [0.172,0.58,-0.039]
TouchSensor1521 = x3d.TouchSensor()
TouchSensor1521.description = "HAnimSite l_carpal_distal_phalanx_5_tip 105"

HAnimSite1520.children.append(TouchSensor1521)
Shape1522 = x3d.Shape()
Shape1522.USE = "HAnimSiteShape"

HAnimSite1520.children.append(Shape1522)

Group1519.children.append(HAnimSite1520)

HAnimSegment1511.children.append(Group1519)

HAnimJoint1510.children.append(HAnimSegment1511)

HAnimJoint1500.children.append(HAnimJoint1510)

HAnimJoint1490.children.append(HAnimJoint1500)

HAnimJoint1477.children.append(HAnimJoint1490)

HAnimJoint1253.children.append(HAnimJoint1477)

HAnimJoint1237.children.append(HAnimJoint1253)

HAnimJoint1215.children.append(HAnimJoint1237)

HAnimJoint1193.children.append(HAnimJoint1215)

HAnimJoint1180.children.append(HAnimJoint1193)

HAnimJoint960.children.append(HAnimJoint1180)
HAnimJoint1523 = x3d.HAnimJoint()
HAnimJoint1523.name = "r_sternoclavicular"
HAnimJoint1523.DEF = "hanim_r_sternoclavicular"
HAnimJoint1523.center = [-0.038475003,1.2087001,-0.013785751]
HAnimJoint1523.ulimit = [0,0,0]
HAnimJoint1523.llimit = [0,0,0]
HAnimSegment1524 = x3d.HAnimSegment()
HAnimSegment1524.name = "r_clavicle"
HAnimSegment1524.DEF = "hanim_r_clavicle"
Shape1525 = x3d.Shape()
Shape1525.DEF = "r_clavicle_Shape"
Appearance1526 = x3d.Appearance()
Material1527 = x3d.Material()
Material1527.USE = "SurfaceDefault"

Appearance1526.material = Material1527
ImageTexture1528 = x3d.ImageTexture()
ImageTexture1528.USE = "JinLOA4TextureAtlas"

Appearance1526.texture = ImageTexture1528

Shape1525.appearance = Appearance1526
IndexedFaceSet1529 = x3d.IndexedFaceSet()
IndexedFaceSet1529.coordIndex = [9,0,1,-1,1,6,9,-1,6,1,2,-1,2,5,6,-1,8,5,2,-1,2,3,8,-1,8,3,4,-1,4,7,8,-1,9,7,4,-1,4,0,9,-1,4,3,2,-1,0,4,2,-1,1,0,2,-1,10,14,13,-1,10,13,12,-1,11,10,12,-1,6,10,11,-1,11,9,6,-1,9,11,12,-1,12,7,9,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,5,8,-1,5,14,10,-1,10,6,5,-1]
IndexedFaceSet1529.creaseAngle = 3.14159
IndexedFaceSet1529.texCoordIndex = [9,0,1,-1,1,6,9,-1,6,1,2,-1,2,5,6,-1,8,5,2,-1,2,3,8,-1,8,3,4,-1,4,7,8,-1,9,7,4,-1,4,0,9,-1,4,3,2,-1,0,4,2,-1,1,0,2,-1,10,14,13,-1,10,13,12,-1,11,10,12,-1,6,10,11,-1,11,9,6,-1,9,11,12,-1,12,7,9,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,5,8,-1,5,14,10,-1,10,6,5,-1]
Coordinate1530 = x3d.Coordinate()

IndexedFaceSet1529.coord = Coordinate1530
TextureCoordinate1531 = x3d.TextureCoordinate()

IndexedFaceSet1529.texCoord = TextureCoordinate1531

Shape1525.geometry = IndexedFaceSet1529

HAnimSegment1524.children.append(Shape1525)
Group1532 = x3d.Group()
Group1532.DEF = "r_clavicle_Sites"
"""0.15 1.222 -0.02 (r_clavicale_pt -0.0115 1.4943 0.0400)"""
HAnimSite1533 = x3d.HAnimSite()
HAnimSite1533.name = "r_clavicale_pt"
HAnimSite1533.DEF = "hanim_r_clavicale_pt"
HAnimSite1533.translation = [-0.03,1.2,0.04]
TouchSensor1534 = x3d.TouchSensor()
TouchSensor1534.description = "HAnimSite r_clavicale_pt 19"

HAnimSite1533.children.append(TouchSensor1534)
Shape1535 = x3d.Shape()
Shape1535.USE = "HAnimSiteShape"

HAnimSite1533.children.append(Shape1535)

Group1532.children.append(HAnimSite1533)

HAnimSegment1524.children.append(Group1532)

HAnimJoint1523.children.append(HAnimSegment1524)
HAnimJoint1536 = x3d.HAnimJoint()
HAnimJoint1536.name = "r_acromioclavicular"
HAnimJoint1536.DEF = "hanim_r_acromioclavicular"
HAnimJoint1536.center = [-0.12294001,1.191825,-0.012897001]
HAnimJoint1536.ulimit = [0,0,0]
HAnimJoint1536.llimit = [0,0,0]
HAnimSegment1537 = x3d.HAnimSegment()
HAnimSegment1537.name = "r_scapula"
HAnimSegment1537.DEF = "hanim_r_scapula"
Shape1538 = x3d.Shape()
Shape1538.DEF = "r_scapula_Shape"
Appearance1539 = x3d.Appearance()
Material1540 = x3d.Material()
Material1540.USE = "SurfaceDefault"

Appearance1539.material = Material1540
ImageTexture1541 = x3d.ImageTexture()
ImageTexture1541.USE = "JinLOA4TextureAtlas"

Appearance1539.texture = ImageTexture1541

Shape1538.appearance = Appearance1539
IndexedFaceSet1542 = x3d.IndexedFaceSet()
IndexedFaceSet1542.coordIndex = [5,1,0,-1,0,4,5,-1,4,0,2,-1,2,3,4,-1,3,2,6,-1,6,9,3,-1,7,8,1,-1,1,5,7,-1,6,2,0,-1,0,8,6,-1,0,1,8,-1,9,6,8,-1,8,7,9,-1,4,10,11,-1,11,5,4,-1,5,11,12,-1,12,7,5,-1,7,12,13,-1,13,9,7,-1,9,13,14,-1,14,3,9,-1,3,14,10,-1,10,4,3,-1,10,15,11,-1,11,15,12,-1,12,15,13,-1,13,15,14,-1,14,15,10,-1]
IndexedFaceSet1542.creaseAngle = 3.14159
IndexedFaceSet1542.texCoordIndex = [5,1,0,-1,0,4,5,-1,4,0,2,-1,2,3,4,-1,3,2,6,-1,6,8,3,-1,9,7,1,-1,1,5,9,-1,6,2,0,-1,0,7,6,-1,0,1,7,-1,12,10,11,-1,11,13,12,-1,4,14,15,-1,15,5,4,-1,5,15,16,-1,16,9,5,-1,13,16,17,-1,17,12,13,-1,8,17,18,-1,18,3,8,-1,3,18,14,-1,14,4,3,-1,14,19,15,-1,15,19,16,-1,16,19,17,-1,17,19,18,-1,18,19,14,-1]
Coordinate1543 = x3d.Coordinate()

IndexedFaceSet1542.coord = Coordinate1543
TextureCoordinate1544 = x3d.TextureCoordinate()

IndexedFaceSet1542.texCoord = TextureCoordinate1544

Shape1538.geometry = IndexedFaceSet1542

HAnimSegment1537.children.append(Shape1538)
Group1545 = x3d.Group()
Group1545.DEF = "r_scapula_Sites"
"""(r_acromion_pt -0.1905 1.4791 -0.0431) (r_axilla_proximal_pt -0.1626 1.4072 -0.0031) (r_axilla_distal_pt -0.1603 1.4098 -0.0826) (r_axilla_posterior_folds_pt x y z)"""
HAnimSite1546 = x3d.HAnimSite()
HAnimSite1546.name = "r_acromion_pt"
HAnimSite1546.DEF = "hanim_r_acromion_pt"
HAnimSite1546.translation = [-0.15,1.222,-0.02]
TouchSensor1547 = x3d.TouchSensor()
TouchSensor1547.description = "HAnimSite r_acromion_pt 20"

HAnimSite1546.children.append(TouchSensor1547)
Shape1548 = x3d.Shape()
Shape1548.USE = "HAnimSiteShape"

HAnimSite1546.children.append(Shape1548)

Group1545.children.append(HAnimSite1546)
HAnimSite1549 = x3d.HAnimSite()
HAnimSite1549.name = "r_axilla_proximal_pt"
HAnimSite1549.DEF = "hanim_r_axilla_proximal_pt"
HAnimSite1549.translation = [-0.15,1.16,0.04]
TouchSensor1550 = x3d.TouchSensor()
TouchSensor1550.description = "HAnimSite sitename_pt 21"

HAnimSite1549.children.append(TouchSensor1550)
Shape1551 = x3d.Shape()
Shape1551.USE = "HAnimSiteShape"

HAnimSite1549.children.append(Shape1551)

Group1545.children.append(HAnimSite1549)
HAnimSite1552 = x3d.HAnimSite()
HAnimSite1552.name = "r_axilla_distal_pt"
HAnimSite1552.DEF = "hanim_r_axilla_distal_pt"
HAnimSite1552.translation = [-0.17,1.14,0]
TouchSensor1553 = x3d.TouchSensor()
TouchSensor1553.description = "HAnimSite r_axilla_distal_pt 22"

HAnimSite1552.children.append(TouchSensor1553)
Shape1554 = x3d.Shape()
Shape1554.USE = "HAnimSiteShape"

HAnimSite1552.children.append(Shape1554)

Group1545.children.append(HAnimSite1552)
HAnimSite1555 = x3d.HAnimSite()
HAnimSite1555.name = "r_axilla_posterior_folds_pt"
HAnimSite1555.DEF = "hanim_r_axilla_posterior_folds_pt"
HAnimSite1555.translation = [-0.15,1.145,-0.04]
TouchSensor1556 = x3d.TouchSensor()
TouchSensor1556.description = "HAnimSite r_axilla_posterior_folds_pt 23"

HAnimSite1555.children.append(TouchSensor1556)
Shape1557 = x3d.Shape()
Shape1557.USE = "HAnimSiteShape"

HAnimSite1555.children.append(Shape1557)

Group1545.children.append(HAnimSite1555)

HAnimSegment1537.children.append(Group1545)

HAnimJoint1536.children.append(HAnimSegment1537)
HAnimJoint1558 = x3d.HAnimJoint()
HAnimJoint1558.name = "r_shoulder"
HAnimJoint1558.DEF = "hanim_r_shoulder"
HAnimJoint1558.center = [-0.16470002,1.1785501,-0.0032670002]
HAnimJoint1558.ulimit = [0,0,0]
HAnimJoint1558.llimit = [0,0,0]
HAnimSegment1559 = x3d.HAnimSegment()
HAnimSegment1559.name = "r_upperarm"
HAnimSegment1559.DEF = "hanim_r_upperarm"
Shape1560 = x3d.Shape()
Shape1560.DEF = "r_upperarm_Shape"
Appearance1561 = x3d.Appearance()
Material1562 = x3d.Material()
Material1562.USE = "SurfaceDefault"

Appearance1561.material = Material1562
ImageTexture1563 = x3d.ImageTexture()
ImageTexture1563.USE = "JinLOA4TextureAtlas"

Appearance1561.texture = ImageTexture1563

Shape1560.appearance = Appearance1561
IndexedFaceSet1564 = x3d.IndexedFaceSet()
IndexedFaceSet1564.coordIndex = [0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,38,37,36,-1,38,36,35,-1,39,38,35,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1,26,41,40,-1,40,25,26,-1,27,42,41,-1,41,26,27,-1,28,43,42,-1,42,27,28,-1,29,44,43,-1,43,28,29,-1,25,40,44,-1,44,29,25,-1,31,26,25,-1,25,30,31,-1,32,27,26,-1,26,31,32,-1,33,28,27,-1,27,32,33,-1,34,29,28,-1,28,33,34,-1,30,25,29,-1,29,34,30,-1,36,31,30,-1,30,35,36,-1,37,32,31,-1,31,36,37,-1,38,33,32,-1,32,37,38,-1,39,34,33,-1,33,38,39,-1,35,30,34,-1,34,39,35,-1]
IndexedFaceSet1564.creaseAngle = 3.14159
IndexedFaceSet1564.texCoordIndex = [1,0,2,-1,1,2,3,-1,55,1,3,-1,1,6,5,-1,5,0,1,-1,0,5,7,-1,7,2,0,-1,2,7,8,-1,8,3,2,-1,25,26,9,-1,9,4,25,-1,4,9,6,-1,6,1,4,-1,6,11,10,-1,10,5,6,-1,5,10,12,-1,12,7,5,-1,7,12,13,-1,13,8,7,-1,27,28,14,-1,14,9,27,-1,9,14,11,-1,11,6,9,-1,11,16,15,-1,15,10,11,-1,10,15,17,-1,17,12,10,-1,12,17,18,-1,18,13,12,-1,29,30,19,-1,19,14,29,-1,14,19,16,-1,16,11,14,-1,36,35,49,-1,36,49,48,-1,37,36,48,-1,20,15,16,-1,16,21,20,-1,22,17,15,-1,15,20,22,-1,23,18,17,-1,17,22,23,-1,24,19,31,-1,31,32,24,-1,21,16,19,-1,19,24,21,-1,38,57,56,-1,56,39,38,-1,40,59,58,-1,58,50,40,-1,41,60,59,-1,59,40,41,-1,42,61,60,-1,60,41,42,-1,39,56,61,-1,61,42,39,-1,43,38,39,-1,39,44,43,-1,45,40,51,-1,51,52,45,-1,46,41,40,-1,40,45,46,-1,47,42,41,-1,41,46,47,-1,44,39,42,-1,42,47,44,-1,34,43,44,-1,44,33,34,-1,35,45,53,-1,53,54,35,-1,36,46,45,-1,45,35,36,-1,37,47,46,-1,46,36,37,-1,33,44,47,-1,47,37,33,-1]
Coordinate1565 = x3d.Coordinate()

IndexedFaceSet1564.coord = Coordinate1565
TextureCoordinate1566 = x3d.TextureCoordinate()

IndexedFaceSet1564.texCoord = TextureCoordinate1566

Shape1560.geometry = IndexedFaceSet1564

HAnimSegment1559.children.append(Shape1560)
Group1567 = x3d.Group()
Group1567.DEF = "r_upperarm_Sites"
"""(r_humeral_lateral_epicondyles_pt -0.2224 1.1517 -0.1033) (r_humeral_medial_epicondyles_pt -0.1680 1.1298 -0.1062) (r_radiale_pt -0.2130 1.1305 -0.1091) (r_bideltoid_pt x y z)"""
HAnimSite1568 = x3d.HAnimSite()
HAnimSite1568.name = "r_humeral_lateral_epicondyles_pt"
HAnimSite1568.DEF = "hanim_r_humeral_lateral_epicondyles_pt"
HAnimSite1568.translation = [-0.2,0.95,-0.03]
TouchSensor1569 = x3d.TouchSensor()
TouchSensor1569.description = "HAnimSite r_humeral_lateral_epicondyles_pt 66"

HAnimSite1568.children.append(TouchSensor1569)
Shape1570 = x3d.Shape()
Shape1570.USE = "HAnimSiteShape"

HAnimSite1568.children.append(Shape1570)

Group1567.children.append(HAnimSite1568)
HAnimSite1571 = x3d.HAnimSite()
HAnimSite1571.name = "r_humeral_medial_epicondyles_pt"
HAnimSite1571.DEF = "hanim_r_humeral_medial_epicondyles_pt"
HAnimSite1571.translation = [-0.18,0.93,-0.03]
TouchSensor1572 = x3d.TouchSensor()
TouchSensor1572.description = "HAnimSite r_humeral_medial_epicondyles_pt 67"

HAnimSite1571.children.append(TouchSensor1572)
Shape1573 = x3d.Shape()
Shape1573.USE = "HAnimSiteShape"

HAnimSite1571.children.append(Shape1573)

Group1567.children.append(HAnimSite1571)
HAnimSite1574 = x3d.HAnimSite()
HAnimSite1574.name = "r_radiale_pt"
HAnimSite1574.DEF = "hanim_r_radiale_pt"
HAnimSite1574.translation = [-0.2,0.91,-0.03]
TouchSensor1575 = x3d.TouchSensor()
TouchSensor1575.description = "HAnimSite r_radiale_pt 72"

HAnimSite1574.children.append(TouchSensor1575)
Shape1576 = x3d.Shape()
Shape1576.USE = "HAnimSiteShape"

HAnimSite1574.children.append(Shape1576)

Group1567.children.append(HAnimSite1574)
HAnimSite1577 = x3d.HAnimSite()
HAnimSite1577.name = "r_bideltoid_pt"
HAnimSite1577.DEF = "hanim_r_bideltoid_pt"
HAnimSite1577.translation = [-0.225,1.185,0]
TouchSensor1578 = x3d.TouchSensor()
TouchSensor1578.description = "HAnimSite r_bideltoid_pt 97"

HAnimSite1577.children.append(TouchSensor1578)
Shape1579 = x3d.Shape()
Shape1579.USE = "HAnimSiteShape"

HAnimSite1577.children.append(Shape1579)

Group1567.children.append(HAnimSite1577)

HAnimSegment1559.children.append(Group1567)

HAnimJoint1558.children.append(HAnimSegment1559)
HAnimJoint1580 = x3d.HAnimJoint()
HAnimJoint1580.name = "r_elbow"
HAnimJoint1580.DEF = "hanim_r_elbow"
HAnimJoint1580.center = [-0.1817325,0.9288,-0.0056295004]
HAnimJoint1580.ulimit = [0,0,0]
HAnimJoint1580.llimit = [0,0,0]
HAnimSegment1581 = x3d.HAnimSegment()
HAnimSegment1581.name = "r_forearm"
HAnimSegment1581.DEF = "hanim_r_forearm"
Shape1582 = x3d.Shape()
Shape1582.DEF = "r_forearm_Shape"
Appearance1583 = x3d.Appearance()
Material1584 = x3d.Material()
Material1584.USE = "SurfaceDefault"

Appearance1583.material = Material1584
ImageTexture1585 = x3d.ImageTexture()
ImageTexture1585.USE = "JinLOA4TextureAtlas"

Appearance1583.texture = ImageTexture1585

Shape1582.appearance = Appearance1583
IndexedFaceSet1586 = x3d.IndexedFaceSet()
IndexedFaceSet1586.coordIndex = [0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,23,22,21,-1,23,21,20,-1,24,23,20,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1]
IndexedFaceSet1586.creaseAngle = 3.14159
IndexedFaceSet1586.texCoordIndex = [4,3,2,-1,4,2,1,-1,0,4,1,-1,4,6,5,-1,5,3,4,-1,3,5,7,-1,7,2,3,-1,2,7,8,-1,8,1,2,-1,1,8,9,-1,9,0,1,-1,0,9,6,-1,6,4,0,-1,6,11,10,-1,10,5,6,-1,5,10,12,-1,12,7,5,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,11,-1,11,6,9,-1,11,16,15,-1,15,10,11,-1,10,15,17,-1,17,12,10,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,16,-1,16,11,14,-1,24,23,22,-1,24,22,21,-1,20,24,21,-1,22,15,16,-1,16,21,22,-1,23,17,15,-1,15,22,23,-1,24,18,17,-1,17,23,24,-1,20,19,18,-1,18,24,20,-1,21,16,19,-1,19,20,21,-1]
Coordinate1587 = x3d.Coordinate()

IndexedFaceSet1586.coord = Coordinate1587
TextureCoordinate1588 = x3d.TextureCoordinate()

IndexedFaceSet1586.texCoord = TextureCoordinate1588

Shape1582.geometry = IndexedFaceSet1586

HAnimSegment1581.children.append(Shape1582)
Group1589 = x3d.Group()
Group1589.DEF = "r_forearm_Sites"
"""(r_radial_styloid_pt -0.1884 0.8676 -0.0360) (r_olecranon_pt -0.1907 1.1405 -0.1065)"""
HAnimSite1590 = x3d.HAnimSite()
HAnimSite1590.name = "r_radial_styloid_pt"
HAnimSite1590.DEF = "hanim_r_radial_styloid_pt"
HAnimSite1590.translation = [-0.18,0.725,0.025]
TouchSensor1591 = x3d.TouchSensor()
TouchSensor1591.description = "HAnimSite r_radial_styloid_pt 74"

HAnimSite1590.children.append(TouchSensor1591)
Shape1592 = x3d.Shape()
Shape1592.USE = "HAnimSiteShape"

HAnimSite1590.children.append(Shape1592)

Group1589.children.append(HAnimSite1590)
HAnimSite1593 = x3d.HAnimSite()
HAnimSite1593.name = "r_olecranon_pt"
HAnimSite1593.DEF = "hanim_r_olecranon_pt"
HAnimSite1593.translation = [-0.2,0.92,-0.03]
TouchSensor1594 = x3d.TouchSensor()
TouchSensor1594.description = "HAnimSite r_olecranon_pt 68"

HAnimSite1593.children.append(TouchSensor1594)
Shape1595 = x3d.Shape()
Shape1595.USE = "HAnimSiteShape"

HAnimSite1593.children.append(Shape1595)

Group1589.children.append(HAnimSite1593)

HAnimSegment1581.children.append(Group1589)

HAnimJoint1580.children.append(HAnimSegment1581)
HAnimJoint1596 = x3d.HAnimJoint()
HAnimJoint1596.name = "r_radiocarpal"
HAnimJoint1596.DEF = "hanim_r_radiocarpal"
HAnimJoint1596.center = [-0.181575,0.724275,-0.005022]
HAnimJoint1596.ulimit = [0,0,0]
HAnimJoint1596.llimit = [0,0,0]
HAnimSegment1597 = x3d.HAnimSegment()
HAnimSegment1597.name = "r_carpal"
HAnimSegment1597.DEF = "hanim_r_carpal"
Shape1598 = x3d.Shape()
Shape1598.DEF = "r_carpal_Shape"
Appearance1599 = x3d.Appearance()
Material1600 = x3d.Material()
Material1600.USE = "SurfaceDefault"

Appearance1599.material = Material1600
ImageTexture1601 = x3d.ImageTexture()
ImageTexture1601.USE = "JinLOA4TextureAtlas"

Appearance1599.texture = ImageTexture1601

Shape1598.appearance = Appearance1599
IndexedFaceSet1602 = x3d.IndexedFaceSet()
IndexedFaceSet1602.coordIndex = [0,11,12,-1,12,1,0,-1,1,12,13,-1,13,2,1,-1,2,13,10,-1,10,17,2,-1,3,16,8,-1,8,4,3,-1,5,20,21,-1,21,19,5,-1,6,18,15,-1,15,14,6,-1,6,14,9,-1,9,7,6,-1,7,9,11,-1,11,0,7,-1,15,18,5,-1,5,19,15,-1,10,16,3,-1,3,17,10,-1,4,8,21,-1,21,20,4,-1,0,1,22,-1,1,2,22,-1,2,17,22,-1,17,3,22,-1,3,4,22,-1,4,20,22,-1,20,5,22,-1,5,18,22,-1,18,6,22,-1,6,7,22,-1,7,0,22,-1,16,10,24,-1,24,23,16,-1,10,13,25,-1,25,24,10,-1,13,12,26,-1,26,25,13,-1,12,11,27,-1,27,26,12,-1,11,9,28,-1,28,27,11,-1,9,14,29,-1,29,28,9,-1,14,15,30,-1,30,29,14,-1,15,19,31,-1,31,30,15,-1,19,21,32,-1,32,31,19,-1,21,8,33,-1,33,32,21,-1,8,16,23,-1,23,33,8,-1,23,24,34,-1,24,25,34,-1,25,26,34,-1,26,27,34,-1,27,28,34,-1,28,29,34,-1,29,30,34,-1,30,31,34,-1,31,32,34,-1,32,33,34,-1,33,23,34,-1]
IndexedFaceSet1602.creaseAngle = 3.14159
IndexedFaceSet1602.texCoordIndex = [2,3,0,-1,0,1,2,-1,1,0,4,-1,4,5,1,-1,5,4,7,-1,7,6,5,-1,10,11,8,-1,8,9,10,-1,12,37,38,-1,38,15,12,-1,17,18,19,-1,19,16,17,-1,17,16,20,-1,20,21,17,-1,21,20,36,-1,36,35,21,-1,19,18,12,-1,12,15,19,-1,7,11,10,-1,10,6,7,-1,9,8,14,-1,14,13,9,-1,2,1,22,-1,1,5,22,-1,5,6,22,-1,6,10,22,-1,10,9,22,-1,9,13,22,-1,37,12,39,-1,12,18,39,-1,18,17,39,-1,17,21,39,-1,21,35,39,-1,11,7,23,-1,23,24,11,-1,7,4,25,-1,25,23,7,-1,4,0,26,-1,26,25,4,-1,0,3,27,-1,27,26,0,-1,36,20,28,-1,28,40,36,-1,20,16,29,-1,29,28,20,-1,16,19,30,-1,30,29,16,-1,19,15,31,-1,31,30,19,-1,15,38,41,-1,41,31,15,-1,14,8,33,-1,33,32,14,-1,8,11,24,-1,24,33,8,-1,24,23,34,-1,23,25,34,-1,25,26,34,-1,26,27,34,-1,40,28,42,-1,28,29,42,-1,29,30,42,-1,30,31,42,-1,31,41,42,-1,32,33,34,-1,33,24,34,-1]
Coordinate1603 = x3d.Coordinate()

IndexedFaceSet1602.coord = Coordinate1603
TextureCoordinate1604 = x3d.TextureCoordinate()

IndexedFaceSet1602.texCoord = TextureCoordinate1604

Shape1598.geometry = IndexedFaceSet1602

HAnimSegment1597.children.append(Shape1598)
Group1605 = x3d.Group()
Group1605.DEF = "r_carpal_Sites"
"""(r_ulnar_styloid_pt -0.2117 0.8562 -0.0584)"""
HAnimSite1606 = x3d.HAnimSite()
HAnimSite1606.name = "r_ulnar_styloid_pt"
HAnimSite1606.DEF = "hanim_r_ulnar_styloid_pt"
HAnimSite1606.translation = [-0.2,0.725,0]
TouchSensor1607 = x3d.TouchSensor()
TouchSensor1607.description = "HAnimSite r_ulnar_styloid_pt 73"

HAnimSite1606.children.append(TouchSensor1607)
Shape1608 = x3d.Shape()
Shape1608.USE = "HAnimSiteShape"

HAnimSite1606.children.append(Shape1608)

Group1605.children.append(HAnimSite1606)

HAnimSegment1597.children.append(Group1605)

HAnimJoint1596.children.append(HAnimSegment1597)
HAnimJoint1609 = x3d.HAnimJoint()
HAnimJoint1609.name = "r_midcarpal_1"
HAnimJoint1609.DEF = "hanim_r_midcarpal_1"
HAnimJoint1609.center = [-0.18096751,0.70605004,0.0193275]
HAnimJoint1609.ulimit = [0,0,0]
HAnimJoint1609.llimit = [0,0,0]
HAnimSegment1610 = x3d.HAnimSegment()
HAnimSegment1610.name = "r_trapezium"
HAnimSegment1610.DEF = "hanim_r_trapezium"
Shape1611 = x3d.Shape()
Shape1611.DEF = "r_trapezium_Shape"
Appearance1612 = x3d.Appearance()
Material1613 = x3d.Material()
Material1613.USE = "SurfaceDefault"

Appearance1612.material = Material1613
ImageTexture1614 = x3d.ImageTexture()
ImageTexture1614.USE = "JinLOA4TextureAtlas"

Appearance1612.texture = ImageTexture1614

Shape1611.appearance = Appearance1612
IndexedFaceSet1615 = x3d.IndexedFaceSet()
IndexedFaceSet1615.coordIndex = [6,0,3,-1,3,5,6,-1,5,3,2,-1,2,8,5,-1,1,7,4,-1,2,7,8,-1,7,2,4,-1,14,15,16,-1,16,17,14,-1,9,10,13,-1,10,11,12,-1,12,13,10,-1,1,4,10,-1,10,9,1,-1,4,2,11,-1,11,10,4,-1,2,3,12,-1,12,11,2,-1,3,0,13,-1,13,12,3,-1,6,5,15,-1,15,14,6,-1,5,8,16,-1,16,15,5,-1,8,7,17,-1,17,16,8,-1,18,25,24,-1,24,23,22,-1,18,24,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,6,18,19,-1,19,0,6,-1,0,19,20,-1,20,13,0,-1,13,20,21,-1,21,9,13,-1,9,21,22,-1,22,1,9,-1,1,22,23,-1,23,7,1,-1,7,23,24,-1,24,17,7,-1,17,24,25,-1,25,14,17,-1,14,25,18,-1,18,6,14,-1]
IndexedFaceSet1615.creaseAngle = 3.14159
IndexedFaceSet1615.texCoordIndex = [0,1,2,-1,2,3,0,-1,3,2,4,-1,4,5,3,-1,7,6,8,-1,18,6,19,-1,6,18,8,-1,21,22,23,-1,23,12,21,-1,9,15,10,-1,15,16,17,-1,17,10,15,-1,7,8,24,-1,24,20,7,-1,8,18,25,-1,25,24,8,-1,4,2,17,-1,17,16,4,-1,2,1,10,-1,10,17,2,-1,0,3,13,-1,13,11,0,-1,3,5,14,-1,14,13,3,-1,19,6,12,-1,12,23,19,-1,26,33,32,-1,32,31,30,-1,26,32,30,-1,30,29,28,-1,26,30,28,-1,27,26,28,-1,0,26,27,-1,27,1,0,-1,1,27,28,-1,28,10,1,-1,10,28,29,-1,29,9,10,-1,20,29,30,-1,30,7,20,-1,7,30,31,-1,31,6,7,-1,6,31,32,-1,32,12,6,-1,12,32,33,-1,33,21,12,-1,11,33,26,-1,26,0,11,-1]
Coordinate1616 = x3d.Coordinate()

IndexedFaceSet1615.coord = Coordinate1616
TextureCoordinate1617 = x3d.TextureCoordinate()

IndexedFaceSet1615.texCoord = TextureCoordinate1617

Shape1611.geometry = IndexedFaceSet1615

HAnimSegment1610.children.append(Shape1611)
Group1618 = x3d.Group()
Group1618.DEF = "r_trapezium_Sites"
"""None"""

HAnimSegment1610.children.append(Group1618)

HAnimJoint1609.children.append(HAnimSegment1610)
HAnimJoint1619 = x3d.HAnimJoint()
HAnimJoint1619.name = "r_carpometacarpal_1"
HAnimJoint1619.DEF = "hanim_r_carpometacarpal_1"
HAnimJoint1619.center = [-0.180135,0.69255006,0.0259875]
HAnimJoint1619.ulimit = [0,0,0]
HAnimJoint1619.llimit = [0,0,0]
HAnimSegment1620 = x3d.HAnimSegment()
HAnimSegment1620.name = "r_metacarpal_1"
HAnimSegment1620.DEF = "hanim_r_metacarpal_1"
Shape1621 = x3d.Shape()
Shape1621.DEF = "r_metacarpal_1_Shape"
Appearance1622 = x3d.Appearance()
Material1623 = x3d.Material()
Material1623.USE = "SurfaceDefault"

Appearance1622.material = Material1623
ImageTexture1624 = x3d.ImageTexture()
ImageTexture1624.USE = "JinLOA4TextureAtlas"

Appearance1622.texture = ImageTexture1624

Shape1621.appearance = Appearance1622
IndexedFaceSet1625 = x3d.IndexedFaceSet()
IndexedFaceSet1625.coordIndex = [1,8,9,-1,9,2,1,-1,8,1,0,-1,0,10,8,-1,2,9,6,-1,6,3,2,-1,0,4,7,-1,7,10,0,-1,5,3,6,-1,25,21,22,-1,24,25,22,-1,23,24,22,-1,19,20,17,-1,17,18,19,-1,13,14,11,-1,11,12,13,-1,14,15,16,-1,16,11,14,-1,3,5,12,-1,12,11,3,-1,5,4,13,-1,13,12,5,-1,4,0,14,-1,14,13,4,-1,0,1,15,-1,15,14,0,-1,1,2,16,-1,16,15,1,-1,2,3,11,-1,11,16,2,-1,7,4,18,-1,18,17,7,-1,4,5,19,-1,19,18,4,-1,5,6,20,-1,20,19,5,-1,6,7,17,-1,17,20,6,-1,10,7,22,-1,22,21,10,-1,7,6,23,-1,23,22,7,-1,6,9,24,-1,24,23,6,-1,9,8,25,-1,25,24,9,-1,8,10,21,-1,21,25,8,-1]
IndexedFaceSet1625.creaseAngle = 3.14159
IndexedFaceSet1625.texCoordIndex = [0,1,2,-1,2,3,0,-1,27,26,28,-1,28,4,27,-1,3,2,7,-1,7,6,3,-1,28,29,30,-1,30,4,28,-1,10,6,7,-1,13,14,15,-1,12,13,15,-1,11,12,15,-1,16,17,18,-1,18,19,16,-1,20,21,22,-1,22,23,20,-1,21,24,25,-1,25,22,21,-1,6,10,23,-1,23,22,6,-1,10,8,20,-1,20,23,10,-1,8,5,21,-1,21,20,8,-1,5,0,24,-1,24,21,5,-1,0,3,25,-1,25,24,0,-1,3,6,22,-1,22,25,3,-1,30,29,35,-1,35,34,30,-1,8,10,16,-1,16,19,8,-1,10,7,17,-1,17,16,10,-1,7,9,18,-1,18,17,7,-1,4,30,33,-1,33,32,4,-1,9,7,11,-1,11,15,9,-1,7,2,12,-1,12,11,7,-1,2,1,13,-1,13,12,2,-1,27,4,32,-1,32,31,27,-1]
Coordinate1626 = x3d.Coordinate()

IndexedFaceSet1625.coord = Coordinate1626
TextureCoordinate1627 = x3d.TextureCoordinate()

IndexedFaceSet1625.texCoord = TextureCoordinate1627

Shape1621.geometry = IndexedFaceSet1625

HAnimSegment1620.children.append(Shape1621)
Group1628 = x3d.Group()
Group1628.DEF = "r_metacarpal_1_Sites"
"""(r_metacarpal_phalanx_2_pt -0.1977 0.8169 -0.0177)"""
HAnimSite1629 = x3d.HAnimSite()
HAnimSite1629.name = "r_metacarpal_phalanx_2_pt"
HAnimSite1629.DEF = "hanim_r_metacarpal_phalanx_2_pt"
HAnimSite1629.translation = [-0.2,0.665,0.012]
TouchSensor1630 = x3d.TouchSensor()
TouchSensor1630.description = "HAnimSite r_metacarpal_phalanx_2_pt 78"

HAnimSite1629.children.append(TouchSensor1630)
Shape1631 = x3d.Shape()
Shape1631.USE = "HAnimSiteShape"

HAnimSite1629.children.append(Shape1631)

Group1628.children.append(HAnimSite1629)

HAnimSegment1620.children.append(Group1628)

HAnimJoint1619.children.append(HAnimSegment1620)
HAnimJoint1632 = x3d.HAnimJoint()
HAnimJoint1632.name = "r_metacarpophalangeal_1"
HAnimJoint1632.DEF = "hanim_r_metacarpophalangeal_1"
HAnimJoint1632.center = [-0.18065251,0.67275,0.035775002]
HAnimJoint1632.ulimit = [0,0,0]
HAnimJoint1632.llimit = [0,0,0]
HAnimSegment1633 = x3d.HAnimSegment()
HAnimSegment1633.name = "r_carpal_proximal_phalanx_1"
HAnimSegment1633.DEF = "hanim_r_carpal_proximal_phalanx_1"
Shape1634 = x3d.Shape()
Shape1634.DEF = "r_carpal_proximal_phalanx_1_Shape"
Appearance1635 = x3d.Appearance()
Material1636 = x3d.Material()
Material1636.USE = "SurfaceDefault"

Appearance1635.material = Material1636
ImageTexture1637 = x3d.ImageTexture()
ImageTexture1637.USE = "JinLOA4TextureAtlas"

Appearance1635.texture = ImageTexture1637

Shape1634.appearance = Appearance1635
IndexedFaceSet1638 = x3d.IndexedFaceSet()
IndexedFaceSet1638.coordIndex = [5,6,0,-1,7,3,14,-1,14,13,7,-1,5,0,17,-1,17,10,5,-1,4,5,10,-1,10,9,4,-1,3,4,9,-1,9,14,3,-1,0,1,19,-1,19,17,0,-1,1,7,13,-1,13,19,1,-1,1,0,2,-1,0,6,8,-1,8,2,0,-1,9,10,11,-1,11,12,9,-1,13,14,15,-1,15,16,13,-1,10,17,18,-1,18,11,10,-1,19,13,16,-1,16,20,19,-1,17,19,20,-1,20,18,17,-1,14,9,12,-1,12,15,14,-1,15,12,20,-1,20,16,15,-1,11,18,20,-1,20,12,11,-1,22,23,24,-1,24,25,26,-1,22,24,26,-1,21,22,26,-1,28,29,30,-1,30,27,28,-1,8,6,22,-1,22,21,8,-1,6,5,23,-1,23,22,6,-1,5,4,24,-1,24,23,5,-1,4,3,25,-1,25,24,4,-1,3,7,26,-1,26,25,3,-1,27,30,31,-1,31,32,27,-1,7,1,28,-1,28,27,7,-1,1,2,29,-1,29,28,1,-1,2,8,30,-1,30,29,2,-1,8,21,31,-1,31,30,8,-1,21,26,32,-1,32,31,21,-1,26,7,27,-1,27,32,26,-1]
IndexedFaceSet1638.creaseAngle = 3.14159
IndexedFaceSet1638.texCoordIndex = [0,1,2,-1,36,33,34,-1,34,35,36,-1,0,2,7,-1,7,8,0,-1,10,0,8,-1,8,9,10,-1,33,38,37,-1,37,34,33,-1,2,11,12,-1,12,7,2,-1,39,36,35,-1,35,40,39,-1,11,2,13,-1,2,1,14,-1,14,13,2,-1,9,8,15,-1,15,16,9,-1,5,4,17,-1,17,18,5,-1,8,7,19,-1,19,15,8,-1,12,5,18,-1,18,20,12,-1,7,12,20,-1,20,19,7,-1,4,9,16,-1,16,17,4,-1,17,16,20,-1,20,18,17,-1,15,19,20,-1,20,16,15,-1,22,23,24,-1,24,25,26,-1,22,24,26,-1,21,22,26,-1,28,29,30,-1,30,27,28,-1,14,1,22,-1,22,21,14,-1,1,0,23,-1,23,22,1,-1,0,10,24,-1,24,23,0,-1,10,3,25,-1,25,24,10,-1,33,36,42,-1,42,41,33,-1,27,30,31,-1,31,32,27,-1,6,11,28,-1,28,27,6,-1,11,13,29,-1,29,28,11,-1,13,14,30,-1,30,29,13,-1,14,21,31,-1,31,30,14,-1,21,26,32,-1,32,31,21,-1,42,36,43,-1,43,44,42,-1]
Coordinate1639 = x3d.Coordinate()

IndexedFaceSet1638.coord = Coordinate1639
TextureCoordinate1640 = x3d.TextureCoordinate()

IndexedFaceSet1638.texCoord = TextureCoordinate1640

Shape1634.geometry = IndexedFaceSet1638

HAnimSegment1633.children.append(Shape1634)
Group1641 = x3d.Group()
Group1641.DEF = "r_carpal_proximal_phalanx_1_Sites"
"""None"""

HAnimSegment1633.children.append(Group1641)

HAnimJoint1632.children.append(HAnimSegment1633)
HAnimJoint1642 = x3d.HAnimJoint()
HAnimJoint1642.name = "r_carpal_interphalangeal_1"
HAnimJoint1642.DEF = "hanim_r_carpal_interphalangeal_1"
HAnimJoint1642.center = [-0.18227251,0.654075,0.0496575]
HAnimJoint1642.ulimit = [0,0,0]
HAnimJoint1642.llimit = [0,0,0]
HAnimSegment1643 = x3d.HAnimSegment()
HAnimSegment1643.name = "r_carpal_distal_phalanx_1"
HAnimSegment1643.DEF = "hanim_r_carpal_distal_phalanx_1"
Shape1644 = x3d.Shape()
Shape1644.DEF = "r_carpal_distal_phalanx_1_Shape"
Appearance1645 = x3d.Appearance()
Material1646 = x3d.Material()
Material1646.USE = "SurfaceDefault"

Appearance1645.material = Material1646
ImageTexture1647 = x3d.ImageTexture()
ImageTexture1647.USE = "JinLOA4TextureAtlas"

Appearance1645.texture = ImageTexture1647

Shape1644.appearance = Appearance1645
IndexedFaceSet1648 = x3d.IndexedFaceSet()
IndexedFaceSet1648.coordIndex = [0,29,28,-1,28,11,0,-1,32,2,17,-1,17,1,32,-1,4,3,1,-1,1,17,4,-1,11,28,31,-1,31,5,11,-1,29,0,2,-1,2,32,29,-1,4,5,31,-1,31,3,4,-1,23,32,1,-1,24,3,31,-1,24,23,1,-1,1,3,24,-1,4,6,7,-1,7,8,4,-1,5,9,10,-1,10,11,5,-1,4,8,9,-1,9,5,4,-1,10,13,14,-1,14,12,10,-1,2,15,16,-1,16,17,2,-1,0,12,15,-1,15,2,0,-1,8,7,18,-1,18,9,8,-1,18,13,10,-1,10,9,18,-1,6,20,21,-1,21,19,6,-1,22,19,21,-1,21,14,22,-1,17,16,20,-1,20,6,17,-1,6,4,17,-1,11,10,12,-1,12,0,11,-1,13,22,14,-1,6,19,18,-1,18,7,6,-1,18,19,22,-1,22,13,18,-1,16,15,21,-1,21,20,16,-1,21,15,12,-1,12,14,21,-1,24,25,26,-1,26,23,24,-1,28,29,30,-1,30,27,28,-1,27,30,26,-1,26,25,27,-1,24,31,27,-1,27,25,24,-1,32,23,26,-1,26,30,32,-1,30,29,32,-1,28,27,31,-1]
IndexedFaceSet1648.creaseAngle = 3.14159
IndexedFaceSet1648.texCoordIndex = [3,33,34,-1,34,2,3,-1,4,5,6,-1,6,7,4,-1,9,8,7,-1,7,6,9,-1,2,34,37,-1,37,38,2,-1,33,3,36,-1,36,35,33,-1,9,11,10,-1,10,8,9,-1,12,4,7,-1,13,8,10,-1,13,12,7,-1,7,8,13,-1,9,14,15,-1,15,16,9,-1,38,39,18,-1,18,2,38,-1,9,16,17,-1,17,11,9,-1,18,20,21,-1,21,19,18,-1,5,22,23,-1,23,6,5,-1,3,19,40,-1,40,36,3,-1,16,15,24,-1,24,17,16,-1,41,20,18,-1,18,39,41,-1,14,26,27,-1,27,25,14,-1,28,42,43,-1,43,21,28,-1,6,23,26,-1,26,14,6,-1,14,9,6,-1,2,18,19,-1,19,3,2,-1,20,28,21,-1,14,25,24,-1,24,15,14,-1,41,42,28,-1,28,20,41,-1,23,22,27,-1,27,26,23,-1,43,40,19,-1,19,21,43,-1,13,29,30,-1,30,12,13,-1,1,0,32,-1,32,31,1,-1,31,32,30,-1,30,29,31,-1,13,10,31,-1,31,29,13,-1,4,12,30,-1,30,32,4,-1,32,0,4,-1,1,31,10,-1]
Coordinate1649 = x3d.Coordinate()

IndexedFaceSet1648.coord = Coordinate1649
TextureCoordinate1650 = x3d.TextureCoordinate()

IndexedFaceSet1648.texCoord = TextureCoordinate1650

Shape1644.geometry = IndexedFaceSet1648

HAnimSegment1643.children.append(Shape1644)
Group1651 = x3d.Group()
Group1651.DEF = "r_carpal_distal_phalanx_1_Sites"
"""(r_carpal_distal_phalanx_1_tip -0.1869 0.8090 0.0820)"""
HAnimSite1652 = x3d.HAnimSite()
HAnimSite1652.name = "r_carpal_distal_phalanx_1_tip"
HAnimSite1652.DEF = "hanim_r_carpal_distal_phalanx_1_tip"
HAnimSite1652.translation = [-0.18,0.64,0.06]
TouchSensor1653 = x3d.TouchSensor()
TouchSensor1653.description = "HAnimSite r_carpal_distal_phalanx_1_tip 106"

HAnimSite1652.children.append(TouchSensor1653)
Shape1654 = x3d.Shape()
Shape1654.USE = "HAnimSiteShape"

HAnimSite1652.children.append(Shape1654)

Group1651.children.append(HAnimSite1652)

HAnimSegment1643.children.append(Group1651)

HAnimJoint1642.children.append(HAnimSegment1643)

HAnimJoint1632.children.append(HAnimJoint1642)

HAnimJoint1619.children.append(HAnimJoint1632)

HAnimJoint1609.children.append(HAnimJoint1619)

HAnimJoint1596.children.append(HAnimJoint1609)
HAnimJoint1655 = x3d.HAnimJoint()
HAnimJoint1655.name = "r_midcarpal_2"
HAnimJoint1655.DEF = "hanim_r_midcarpal_2"
HAnimJoint1655.center = [-0.18096751,0.70695,0.008417251]
HAnimJoint1655.ulimit = [0,0,0]
HAnimJoint1655.llimit = [0,0,0]
HAnimSegment1656 = x3d.HAnimSegment()
HAnimSegment1656.name = "r_trapezoid"
HAnimSegment1656.DEF = "hanim_r_trapezoid"
Shape1657 = x3d.Shape()
Shape1657.DEF = "r_trapezoid_Shape"
Appearance1658 = x3d.Appearance()
Material1659 = x3d.Material()
Material1659.USE = "SurfaceDefault"

Appearance1658.material = Material1659
ImageTexture1660 = x3d.ImageTexture()
ImageTexture1660.USE = "JinLOA4TextureAtlas"

Appearance1658.texture = ImageTexture1660

Shape1657.appearance = Appearance1658
IndexedFaceSet1661 = x3d.IndexedFaceSet()
IndexedFaceSet1661.coordIndex = [14,2,1,-1,1,12,14,-1,0,3,15,-1,15,13,0,-1,11,8,9,-1,9,10,11,-1,4,16,17,-1,17,5,4,-1,18,19,7,-1,7,6,18,-1,0,13,16,-1,16,4,0,-1,12,1,5,-1,5,17,12,-1,1,0,4,-1,4,5,1,-1,2,14,18,-1,18,6,2,-1,15,3,7,-1,7,19,15,-1,3,2,6,-1,6,7,3,-1,3,0,9,-1,9,8,3,-1,0,1,10,-1,10,9,0,-1,1,2,11,-1,11,10,1,-1,2,3,8,-1,8,11,2,-1,20,27,26,-1,26,25,24,-1,20,26,24,-1,24,23,22,-1,20,24,22,-1,21,20,22,-1,12,20,21,-1,21,14,12,-1,14,21,22,-1,22,18,14,-1,18,22,23,-1,23,19,18,-1,19,23,24,-1,24,15,19,-1,15,24,25,-1,25,13,15,-1,13,25,26,-1,26,16,13,-1,16,26,27,-1,27,17,16,-1,17,27,20,-1,20,12,17,-1]
IndexedFaceSet1661.creaseAngle = 3.14159
IndexedFaceSet1661.texCoordIndex = [21,0,1,-1,1,19,21,-1,12,13,22,-1,22,20,12,-1,5,6,7,-1,7,4,5,-1,8,23,25,-1,25,9,8,-1,26,28,18,-1,18,17,26,-1,12,20,24,-1,24,16,12,-1,19,1,9,-1,9,25,19,-1,1,2,8,-1,8,9,1,-1,0,21,27,-1,27,10,0,-1,22,13,18,-1,18,28,22,-1,3,0,10,-1,10,11,3,-1,13,12,15,-1,15,14,13,-1,2,1,4,-1,4,7,2,-1,1,0,5,-1,5,4,1,-1,0,3,6,-1,6,5,0,-1,29,36,35,-1,35,34,33,-1,29,35,33,-1,33,32,31,-1,29,33,31,-1,30,29,31,-1,19,29,30,-1,30,21,19,-1,21,30,31,-1,31,27,21,-1,26,31,32,-1,32,28,26,-1,28,32,33,-1,33,22,28,-1,22,33,34,-1,34,20,22,-1,20,34,35,-1,35,24,20,-1,23,35,36,-1,36,25,23,-1,25,36,29,-1,29,19,25,-1]
Coordinate1662 = x3d.Coordinate()

IndexedFaceSet1661.coord = Coordinate1662
TextureCoordinate1663 = x3d.TextureCoordinate()

IndexedFaceSet1661.texCoord = TextureCoordinate1663

Shape1657.geometry = IndexedFaceSet1661

HAnimSegment1656.children.append(Shape1657)
Group1664 = x3d.Group()
Group1664.DEF = "r_trapezoid_Sites"
"""None"""

HAnimSegment1656.children.append(Group1664)

HAnimJoint1655.children.append(HAnimSegment1656)
HAnimJoint1665 = x3d.HAnimJoint()
HAnimJoint1665.name = "r_carpometacarpal_2"
HAnimJoint1665.DEF = "hanim_r_carpometacarpal_2"
HAnimJoint1665.center = [-0.18090001,0.6876,0.009729]
HAnimJoint1665.ulimit = [0,0,0]
HAnimJoint1665.llimit = [0,0,0]
HAnimSegment1666 = x3d.HAnimSegment()
HAnimSegment1666.name = "r_metacarpal_2"
HAnimSegment1666.DEF = "hanim_r_metacarpal_2"
Shape1667 = x3d.Shape()
Shape1667.DEF = "r_metacarpal_2_Shape"
Appearance1668 = x3d.Appearance()
Material1669 = x3d.Material()
Material1669.USE = "SurfaceDefault"

Appearance1668.material = Material1669
ImageTexture1670 = x3d.ImageTexture()
ImageTexture1670.USE = "JinLOA4TextureAtlas"

Appearance1668.texture = ImageTexture1670

Shape1667.appearance = Appearance1668
IndexedFaceSet1671 = x3d.IndexedFaceSet()
IndexedFaceSet1671.coordIndex = [0,1,8,-1,8,3,0,-1,5,0,3,-1,3,7,5,-1,10,6,4,-1,4,2,10,-1,2,4,8,-1,8,1,2,-1,14,4,6,-1,6,11,14,-1,8,16,17,-1,17,3,8,-1,9,13,12,-1,12,7,9,-1,15,16,8,-1,8,4,15,-1,15,4,14,-1,9,3,17,-1,17,18,9,-1,9,18,13,-1,30,31,25,-1,27,30,25,-1,26,27,25,-1,22,19,20,-1,20,21,22,-1,41,38,39,-1,39,40,41,-1,36,37,32,-1,36,32,33,-1,36,33,34,-1,35,36,34,-1,23,24,19,-1,19,22,23,-1,6,10,20,-1,20,19,6,-1,30,27,28,-1,28,29,30,-1,5,7,22,-1,22,21,5,-1,7,12,23,-1,23,22,7,-1,12,11,24,-1,24,23,12,-1,11,6,19,-1,19,24,11,-1,1,0,26,-1,26,25,1,-1,0,5,27,-1,27,26,0,-1,5,21,28,-1,28,27,5,-1,21,20,29,-1,29,28,21,-1,20,10,30,-1,30,29,20,-1,10,2,31,-1,31,30,10,-1,2,1,25,-1,25,31,2,-1,16,15,33,-1,33,32,16,-1,15,14,34,-1,34,33,15,-1,14,13,35,-1,35,34,14,-1,13,18,36,-1,36,35,13,-1,18,17,37,-1,37,36,18,-1,17,16,32,-1,32,37,17,-1,14,11,39,-1,39,38,14,-1,11,12,40,-1,40,39,11,-1,12,13,41,-1,41,40,12,-1,13,14,38,-1,38,41,13,-1,9,7,3,-1]
IndexedFaceSet1671.creaseAngle = 3.14159
IndexedFaceSet1671.texCoordIndex = [3,0,1,-1,1,2,3,-1,5,3,2,-1,2,4,5,-1,44,45,8,-1,8,46,44,-1,46,8,43,-1,43,42,46,-1,47,8,45,-1,45,48,47,-1,1,12,13,-1,13,2,1,-1,16,14,15,-1,15,4,16,-1,50,49,43,-1,43,8,50,-1,50,8,47,-1,16,2,13,-1,13,18,16,-1,16,18,14,-1,21,22,23,-1,20,21,23,-1,19,20,23,-1,25,26,27,-1,27,24,25,-1,29,30,31,-1,31,28,29,-1,33,34,35,-1,33,35,36,-1,33,36,37,-1,32,33,37,-1,38,39,26,-1,26,25,38,-1,7,6,27,-1,27,26,7,-1,21,20,40,-1,40,41,21,-1,5,4,25,-1,25,24,5,-1,4,15,38,-1,38,25,4,-1,15,11,39,-1,39,38,15,-1,48,45,51,-1,51,56,48,-1,0,3,19,-1,19,23,0,-1,3,5,20,-1,20,19,3,-1,5,24,40,-1,40,20,5,-1,24,27,41,-1,41,40,24,-1,27,6,21,-1,21,41,27,-1,6,9,22,-1,22,21,6,-1,9,0,23,-1,23,22,9,-1,12,17,36,-1,36,35,12,-1,50,47,55,-1,55,54,50,-1,10,14,32,-1,32,37,10,-1,14,18,33,-1,33,32,14,-1,18,13,34,-1,34,33,18,-1,13,12,35,-1,35,34,13,-1,47,48,53,-1,53,52,47,-1,11,15,28,-1,28,31,11,-1,15,14,29,-1,29,28,15,-1,14,10,30,-1,30,29,14,-1,16,4,2,-1]
Coordinate1672 = x3d.Coordinate()

IndexedFaceSet1671.coord = Coordinate1672
TextureCoordinate1673 = x3d.TextureCoordinate()

IndexedFaceSet1671.texCoord = TextureCoordinate1673

Shape1667.geometry = IndexedFaceSet1671

HAnimSegment1666.children.append(Shape1667)
Group1674 = x3d.Group()
Group1674.DEF = "r_metacarpal_2_Sites"
"""None"""

HAnimSegment1666.children.append(Group1674)

HAnimJoint1665.children.append(HAnimSegment1666)
HAnimJoint1675 = x3d.HAnimJoint()
HAnimJoint1675.name = "r_metacarpophalangeal_2"
HAnimJoint1675.DEF = "hanim_r_metacarpophalangeal_2"
HAnimJoint1675.center = [-0.18335252,0.6372,0.015075001]
HAnimJoint1675.ulimit = [0,0,0]
HAnimJoint1675.llimit = [0,0,0]
HAnimSegment1676 = x3d.HAnimSegment()
HAnimSegment1676.name = "r_carpal_proximal_phalanx_2"
HAnimSegment1676.DEF = "hanim_r_carpal_proximal_phalanx_2"
Shape1677 = x3d.Shape()
Shape1677.DEF = "r_carpal_proximal_phalanx_2_Shape"
Appearance1678 = x3d.Appearance()
Material1679 = x3d.Material()
Material1679.USE = "SurfaceDefault"

Appearance1678.material = Material1679
ImageTexture1680 = x3d.ImageTexture()
ImageTexture1680.USE = "JinLOA4TextureAtlas"

Appearance1678.texture = ImageTexture1680

Shape1677.appearance = Appearance1678
IndexedFaceSet1681 = x3d.IndexedFaceSet()
IndexedFaceSet1681.coordIndex = [4,19,18,-1,18,5,4,-1,5,18,21,-1,21,6,5,-1,7,25,20,-1,20,8,7,-1,8,20,19,-1,19,4,8,-1,6,21,22,-1,1,7,8,-1,8,10,1,-1,6,2,11,-1,11,5,6,-1,5,11,0,-1,0,4,5,-1,4,0,10,-1,10,8,4,-1,1,3,9,-1,9,7,1,-1,9,3,2,-1,2,6,9,-1,9,24,23,-1,23,7,9,-1,6,22,24,-1,24,9,6,-1,23,25,7,-1,0,11,15,-1,15,17,0,-1,1,10,14,-1,14,12,1,-1,11,2,13,-1,13,15,11,-1,3,1,12,-1,12,16,3,-1,2,3,16,-1,16,13,2,-1,10,0,17,-1,17,14,10,-1,14,17,16,-1,16,12,14,-1,15,13,16,-1,16,17,15,-1,26,27,28,-1,26,28,29,-1,30,26,29,-1,18,19,27,-1,27,26,18,-1,19,20,28,-1,28,27,19,-1,20,25,29,-1,29,28,20,-1,31,32,33,-1,37,31,33,-1,36,37,33,-1,36,33,34,-1,36,34,35,-1,21,18,26,-1,26,30,21,-1,24,22,32,-1,32,31,24,-1,22,21,33,-1,33,32,22,-1,21,30,34,-1,34,33,21,-1,30,29,35,-1,35,34,30,-1,29,25,36,-1,36,35,29,-1,25,23,37,-1,37,36,25,-1,23,24,31,-1,31,37,23,-1]
IndexedFaceSet1681.creaseAngle = 3.14159
IndexedFaceSet1681.texCoordIndex = [0,1,2,-1,2,3,0,-1,3,2,4,-1,4,5,3,-1,6,40,41,-1,41,9,6,-1,9,41,39,-1,39,38,9,-1,5,4,10,-1,11,6,9,-1,9,12,11,-1,5,13,14,-1,14,3,5,-1,3,14,15,-1,15,0,3,-1,38,42,12,-1,12,9,38,-1,11,43,44,-1,44,6,11,-1,17,16,13,-1,13,5,17,-1,44,45,46,-1,46,6,44,-1,5,10,18,-1,18,17,5,-1,46,40,6,-1,15,14,20,-1,20,21,15,-1,11,12,22,-1,22,23,11,-1,14,13,24,-1,24,20,14,-1,43,11,23,-1,23,48,43,-1,13,16,25,-1,25,24,13,-1,12,42,47,-1,47,22,12,-1,22,47,48,-1,48,23,22,-1,20,24,25,-1,25,21,20,-1,27,28,29,-1,27,29,30,-1,26,27,30,-1,2,1,28,-1,28,27,2,-1,1,8,29,-1,29,28,1,-1,8,7,30,-1,30,29,8,-1,33,34,35,-1,32,33,35,-1,31,32,35,-1,31,35,36,-1,31,36,37,-1,4,2,27,-1,27,26,4,-1,18,10,34,-1,34,33,18,-1,10,4,35,-1,35,34,10,-1,4,26,36,-1,36,35,4,-1,26,30,37,-1,37,36,26,-1,30,7,31,-1,31,37,30,-1,7,19,32,-1,32,31,7,-1,19,18,33,-1,33,32,19,-1]
Coordinate1682 = x3d.Coordinate()

IndexedFaceSet1681.coord = Coordinate1682
TextureCoordinate1683 = x3d.TextureCoordinate()

IndexedFaceSet1681.texCoord = TextureCoordinate1683

Shape1677.geometry = IndexedFaceSet1681

HAnimSegment1676.children.append(Shape1677)
Group1684 = x3d.Group()
Group1684.DEF = "r_carpal_proximal_phalanx_2_Sites"
"""None"""

HAnimSegment1676.children.append(Group1684)

HAnimJoint1675.children.append(HAnimSegment1676)
HAnimJoint1685 = x3d.HAnimJoint()
HAnimJoint1685.name = "r_carpal_proximal_interphalangeal_2"
HAnimJoint1685.DEF = "hanim_r_carpal_proximal_interphalangeal_2"
HAnimJoint1685.center = [-0.1813275,0.606825,0.014184001]
HAnimJoint1685.ulimit = [0,0,0]
HAnimJoint1685.llimit = [0,0,0]
HAnimSegment1686 = x3d.HAnimSegment()
HAnimSegment1686.name = "r_carpal_middle_phalanx_2"
HAnimSegment1686.DEF = "hanim_r_carpal_middle_phalanx_2"
Shape1687 = x3d.Shape()
Shape1687.DEF = "r_carpal_middle_phalanx_2_Shape"
Appearance1688 = x3d.Appearance()
Material1689 = x3d.Material()
Material1689.USE = "SurfaceDefault"

Appearance1688.material = Material1689
ImageTexture1690 = x3d.ImageTexture()
ImageTexture1690.USE = "JinLOA4TextureAtlas"

Appearance1688.texture = ImageTexture1690

Shape1687.appearance = Appearance1688
IndexedFaceSet1691 = x3d.IndexedFaceSet()
IndexedFaceSet1691.coordIndex = [1,7,14,-1,14,15,1,-1,8,3,14,-1,1,18,5,-1,5,7,1,-1,3,4,21,-1,21,2,3,-1,6,4,3,-1,3,8,6,-1,6,13,4,-1,0,13,5,-1,5,18,0,-1,13,0,21,-1,21,4,13,-1,2,15,14,-1,14,3,2,-1,8,11,12,-1,12,6,8,-1,7,5,9,-1,9,10,7,-1,10,9,12,-1,12,11,10,-1,8,14,10,-1,10,11,8,-1,13,6,12,-1,12,9,13,-1,9,5,13,-1,7,10,14,-1,15,2,16,-1,16,17,15,-1,18,1,19,-1,19,20,18,-1,2,21,22,-1,22,16,2,-1,0,18,20,-1,20,23,0,-1,21,0,23,-1,23,22,21,-1,1,15,17,-1,17,19,1,-1,19,17,23,-1,23,20,19,-1,16,22,23,-1,23,17,16,-1]
IndexedFaceSet1691.creaseAngle = 3.14159
IndexedFaceSet1691.texCoordIndex = [3,0,24,-1,24,25,3,-1,4,5,1,-1,3,6,7,-1,7,0,3,-1,5,8,9,-1,9,10,5,-1,11,8,5,-1,5,4,11,-1,11,12,8,-1,27,26,7,-1,7,6,27,-1,12,13,9,-1,9,8,12,-1,10,2,1,-1,1,5,10,-1,4,14,15,-1,15,11,4,-1,0,7,29,-1,29,28,0,-1,16,17,15,-1,15,14,16,-1,4,1,16,-1,16,14,4,-1,12,11,15,-1,15,17,12,-1,29,7,26,-1,0,28,24,-1,2,10,18,-1,18,19,2,-1,6,3,20,-1,20,21,6,-1,10,9,22,-1,22,18,10,-1,27,6,21,-1,21,31,27,-1,9,13,23,-1,23,22,9,-1,3,25,30,-1,30,20,3,-1,20,30,31,-1,31,21,20,-1,18,22,23,-1,23,19,18,-1]
Coordinate1692 = x3d.Coordinate()

IndexedFaceSet1691.coord = Coordinate1692
TextureCoordinate1693 = x3d.TextureCoordinate()

IndexedFaceSet1691.texCoord = TextureCoordinate1693

Shape1687.geometry = IndexedFaceSet1691

HAnimSegment1686.children.append(Shape1687)
Group1694 = x3d.Group()
Group1694.DEF = "r_carpal_middle_phalanx_2_Sites"
"""None"""

HAnimSegment1686.children.append(Group1694)

HAnimJoint1685.children.append(HAnimSegment1686)
HAnimJoint1695 = x3d.HAnimJoint()
HAnimJoint1695.name = "r_carpal_distal_interphalangeal_2"
HAnimJoint1695.DEF = "hanim_r_carpal_distal_interphalangeal_2"
HAnimJoint1695.center = [-0.1802925,0.58162504,0.013385251]
HAnimJoint1695.ulimit = [0,0,0]
HAnimJoint1695.llimit = [0,0,0]
HAnimSegment1696 = x3d.HAnimSegment()
HAnimSegment1696.name = "r_carpal_distal_phalanx_2"
HAnimSegment1696.DEF = "hanim_r_carpal_distal_phalanx_2"
Shape1697 = x3d.Shape()
Shape1697.DEF = "r_carpal_distal_phalanx_2_Shape"
Appearance1698 = x3d.Appearance()
Material1699 = x3d.Material()
Material1699.USE = "SurfaceDefault"

Appearance1698.material = Material1699
ImageTexture1700 = x3d.ImageTexture()
ImageTexture1700.USE = "JinLOA4TextureAtlas"

Appearance1698.texture = ImageTexture1700

Shape1697.appearance = Appearance1698
IndexedFaceSet1701 = x3d.IndexedFaceSet()
IndexedFaceSet1701.coordIndex = [0,31,25,-1,24,32,1,-1,1,3,2,-1,2,0,1,-1,31,5,4,-1,4,23,31,-1,0,2,5,-1,5,31,0,-1,23,4,6,-1,6,29,23,-1,32,7,3,-1,3,1,32,-1,29,6,7,-1,7,32,29,-1,2,14,17,-1,17,8,2,-1,5,11,10,-1,10,4,5,-1,2,8,11,-1,11,5,2,-1,10,21,18,-1,18,12,10,-1,7,13,9,-1,9,3,7,-1,6,12,13,-1,13,7,6,-1,8,17,19,-1,19,11,8,-1,19,21,10,-1,10,11,19,-1,25,24,1,-1,1,0,25,-1,14,20,22,-1,22,16,14,-1,15,16,22,-1,22,18,15,-1,3,9,20,-1,20,14,3,-1,14,2,3,-1,4,10,12,-1,12,6,4,-1,21,15,18,-1,14,16,19,-1,19,17,14,-1,19,16,15,-1,15,21,19,-1,9,13,22,-1,22,20,9,-1,22,13,12,-1,12,18,22,-1,25,26,27,-1,27,24,25,-1,23,29,30,-1,30,28,23,-1,28,30,27,-1,27,26,28,-1,25,31,28,-1,28,26,25,-1,32,24,27,-1,27,30,32,-1,30,29,32,-1,23,28,31,-1]
IndexedFaceSet1701.creaseAngle = 3.14159
IndexedFaceSet1701.texCoordIndex = [0,1,2,-1,3,4,5,-1,5,6,7,-1,7,0,5,-1,33,35,9,-1,9,10,33,-1,0,7,8,-1,8,1,0,-1,10,9,11,-1,11,12,10,-1,4,13,6,-1,6,5,4,-1,12,11,36,-1,36,34,12,-1,7,14,15,-1,15,16,7,-1,35,37,18,-1,18,9,35,-1,7,16,17,-1,17,8,7,-1,18,20,21,-1,21,19,18,-1,13,22,23,-1,23,6,13,-1,11,19,38,-1,38,36,11,-1,16,15,24,-1,24,17,16,-1,39,20,18,-1,18,37,39,-1,2,3,5,-1,5,0,2,-1,14,26,27,-1,27,25,14,-1,28,40,41,-1,41,21,28,-1,6,23,26,-1,26,14,6,-1,14,7,6,-1,9,18,19,-1,19,11,9,-1,20,28,21,-1,14,25,24,-1,24,15,14,-1,39,40,28,-1,28,20,39,-1,23,22,27,-1,27,26,23,-1,41,38,19,-1,19,21,41,-1,2,29,30,-1,30,3,2,-1,10,12,43,-1,43,42,10,-1,31,32,30,-1,30,29,31,-1,2,1,31,-1,31,29,2,-1,4,3,30,-1,30,32,4,-1,43,12,34,-1,10,42,33,-1]
Coordinate1702 = x3d.Coordinate()

IndexedFaceSet1701.coord = Coordinate1702
TextureCoordinate1703 = x3d.TextureCoordinate()

IndexedFaceSet1701.texCoord = TextureCoordinate1703

Shape1697.geometry = IndexedFaceSet1701

HAnimSegment1696.children.append(Shape1697)
Group1704 = x3d.Group()
Group1704.DEF = "r_carpal_distal_phalanx_2_Sites"
"""(r_carpal_distal_phalanx_2_tip -0.1980 0.6883 -0.0180)"""
HAnimSite1705 = x3d.HAnimSite()
HAnimSite1705.name = "r_carpal_distal_phalanx_2_tip"
HAnimSite1705.DEF = "hanim_r_carpal_distal_phalanx_2_tip"
HAnimSite1705.translation = [-0.172,0.558,0.017]
TouchSensor1706 = x3d.TouchSensor()
TouchSensor1706.description = "HAnimSite r_carpal_distal_phalanx_2_tip 107"

HAnimSite1705.children.append(TouchSensor1706)
Shape1707 = x3d.Shape()
Shape1707.USE = "HAnimSiteShape"

HAnimSite1705.children.append(Shape1707)

Group1704.children.append(HAnimSite1705)

HAnimSegment1696.children.append(Group1704)

HAnimJoint1695.children.append(HAnimSegment1696)

HAnimJoint1685.children.append(HAnimJoint1695)

HAnimJoint1675.children.append(HAnimJoint1685)

HAnimJoint1665.children.append(HAnimJoint1675)

HAnimJoint1655.children.append(HAnimJoint1665)

HAnimJoint1596.children.append(HAnimJoint1655)
HAnimJoint1708 = x3d.HAnimJoint()
HAnimJoint1708.name = "r_midcarpal_3"
HAnimJoint1708.DEF = "hanim_r_midcarpal_3"
HAnimJoint1708.center = [-0.18072,0.708525,-0.0047970004]
HAnimJoint1708.ulimit = [0,0,0]
HAnimJoint1708.llimit = [0,0,0]
HAnimSegment1709 = x3d.HAnimSegment()
HAnimSegment1709.name = "r_capitate"
HAnimSegment1709.DEF = "hanim_r_capitate"
Shape1710 = x3d.Shape()
Shape1710.DEF = "r_capitate_Shape"
Appearance1711 = x3d.Appearance()
Material1712 = x3d.Material()
Material1712.USE = "SurfaceDefault"

Appearance1711.material = Material1712
ImageTexture1713 = x3d.ImageTexture()
ImageTexture1713.USE = "JinLOA4TextureAtlas"

Appearance1711.texture = ImageTexture1713

Shape1710.appearance = Appearance1711
IndexedFaceSet1714 = x3d.IndexedFaceSet()
IndexedFaceSet1714.coordIndex = [5,1,4,-1,4,6,5,-1,7,2,3,-1,3,0,7,-1,8,9,10,-1,10,11,8,-1,12,13,14,-1,14,15,12,-1,1,5,9,-1,9,8,1,-1,5,7,10,-1,10,9,5,-1,7,0,11,-1,11,10,7,-1,0,1,8,-1,8,11,0,-1,6,4,13,-1,13,12,6,-1,4,3,14,-1,14,13,4,-1,3,2,15,-1,15,14,3,-1,2,6,12,-1,12,15,2,-1,22,23,20,-1,20,21,22,-1,18,19,16,-1,16,17,18,-1,5,6,17,-1,17,16,5,-1,6,2,18,-1,18,17,6,-1,2,7,19,-1,19,18,2,-1,7,5,16,-1,16,19,7,-1,0,3,21,-1,21,20,0,-1,3,4,22,-1,22,21,3,-1,4,1,23,-1,23,22,4,-1,1,0,20,-1,20,23,1,-1]
IndexedFaceSet1714.creaseAngle = 3.14159
IndexedFaceSet1714.texCoordIndex = [24,25,26,-1,26,0,24,-1,4,5,6,-1,6,7,4,-1,8,9,10,-1,10,11,8,-1,12,30,31,-1,31,32,12,-1,25,24,29,-1,29,28,25,-1,1,4,10,-1,10,9,1,-1,4,7,11,-1,11,10,4,-1,7,2,8,-1,8,11,7,-1,0,26,30,-1,30,12,0,-1,3,6,14,-1,14,13,3,-1,6,5,15,-1,15,14,6,-1,27,0,12,-1,12,32,27,-1,17,18,19,-1,19,16,17,-1,35,36,37,-1,37,20,35,-1,24,0,20,-1,20,37,24,-1,0,27,35,-1,35,20,0,-1,5,4,22,-1,22,21,5,-1,4,1,23,-1,23,22,4,-1,7,6,16,-1,16,19,7,-1,6,3,17,-1,17,16,6,-1,26,25,34,-1,34,33,26,-1,2,7,19,-1,19,18,2,-1]
Coordinate1715 = x3d.Coordinate()

IndexedFaceSet1714.coord = Coordinate1715
TextureCoordinate1716 = x3d.TextureCoordinate()

IndexedFaceSet1714.texCoord = TextureCoordinate1716

Shape1710.geometry = IndexedFaceSet1714

HAnimSegment1709.children.append(Shape1710)
Group1717 = x3d.Group()
Group1717.DEF = "r_capitate_Sites"
"""None"""

HAnimSegment1709.children.append(Group1717)

HAnimJoint1708.children.append(HAnimSegment1709)
HAnimJoint1718 = x3d.HAnimJoint()
HAnimJoint1718.name = "r_carpometacarpal_3"
HAnimJoint1718.DEF = "hanim_r_carpometacarpal_3"
HAnimJoint1718.center = [-0.18072,0.6858,-0.0062527503]
HAnimJoint1718.ulimit = [0,0,0]
HAnimJoint1718.llimit = [0,0,0]
HAnimSegment1719 = x3d.HAnimSegment()
HAnimSegment1719.name = "r_metacarpal_3"
HAnimSegment1719.DEF = "hanim_r_metacarpal_3"
Shape1720 = x3d.Shape()
Shape1720.DEF = "r_metacarpal_3_Shape"
Appearance1721 = x3d.Appearance()
Material1722 = x3d.Material()
Material1722.USE = "SurfaceDefault"

Appearance1721.material = Material1722
ImageTexture1723 = x3d.ImageTexture()
ImageTexture1723.USE = "JinLOA4TextureAtlas"

Appearance1721.texture = ImageTexture1723

Shape1720.appearance = Appearance1721
IndexedFaceSet1724 = x3d.IndexedFaceSet()
IndexedFaceSet1724.coordIndex = [0,3,6,-1,6,8,0,-1,10,7,1,-1,1,5,10,-1,2,1,7,-1,7,9,2,-1,8,11,4,-1,4,0,8,-1,14,15,12,-1,12,13,14,-1,34,35,32,-1,32,33,34,-1,25,28,29,-1,29,24,25,-1,17,18,19,-1,19,20,17,-1,25,26,27,-1,27,28,25,-1,20,21,16,-1,16,17,20,-1,6,3,13,-1,13,12,6,-1,24,29,30,-1,30,31,24,-1,2,9,15,-1,15,14,2,-1,16,21,22,-1,22,23,16,-1,9,7,17,-1,17,16,9,-1,7,10,18,-1,18,17,7,-1,10,11,19,-1,19,18,10,-1,11,8,20,-1,20,19,11,-1,8,6,21,-1,21,20,8,-1,6,12,22,-1,22,21,6,-1,12,15,23,-1,23,22,12,-1,15,9,16,-1,16,23,15,-1,3,0,25,-1,25,24,3,-1,0,4,26,-1,26,25,0,-1,4,5,27,-1,27,26,4,-1,5,1,28,-1,28,27,5,-1,1,2,29,-1,29,28,1,-1,2,14,30,-1,30,29,2,-1,14,13,31,-1,31,30,14,-1,13,3,24,-1,24,31,13,-1,10,5,33,-1,33,32,10,-1,5,4,34,-1,34,33,5,-1,4,11,35,-1,35,34,4,-1,11,10,32,-1,32,35,11,-1]
IndexedFaceSet1724.creaseAngle = 3.14159
IndexedFaceSet1724.texCoordIndex = [2,3,0,-1,0,1,2,-1,39,36,37,-1,37,38,39,-1,40,37,36,-1,36,41,40,-1,1,10,11,-1,11,2,1,-1,12,13,14,-1,14,15,12,-1,43,44,45,-1,45,46,43,-1,20,21,22,-1,22,23,20,-1,48,49,50,-1,50,51,48,-1,20,28,29,-1,29,21,20,-1,27,30,31,-1,31,24,27,-1,0,3,15,-1,15,14,0,-1,23,22,32,-1,32,33,23,-1,8,9,13,-1,13,12,8,-1,31,30,34,-1,34,35,31,-1,9,4,24,-1,24,31,9,-1,36,39,49,-1,49,48,36,-1,7,10,26,-1,26,25,7,-1,10,1,27,-1,27,26,10,-1,1,0,30,-1,30,27,1,-1,0,14,34,-1,34,30,0,-1,14,13,35,-1,35,34,14,-1,13,9,31,-1,31,35,13,-1,3,2,20,-1,20,23,3,-1,2,11,28,-1,28,20,2,-1,42,38,53,-1,53,52,42,-1,38,37,47,-1,47,53,38,-1,5,8,22,-1,22,21,5,-1,8,12,32,-1,32,22,8,-1,12,15,33,-1,33,32,12,-1,15,3,23,-1,23,33,15,-1,39,38,46,-1,46,45,39,-1,6,11,16,-1,16,19,6,-1,11,10,17,-1,17,16,11,-1,10,7,18,-1,18,17,10,-1]
Coordinate1725 = x3d.Coordinate()

IndexedFaceSet1724.coord = Coordinate1725
TextureCoordinate1726 = x3d.TextureCoordinate()

IndexedFaceSet1724.texCoord = TextureCoordinate1726

Shape1720.geometry = IndexedFaceSet1724

HAnimSegment1719.children.append(Shape1720)
Group1727 = x3d.Group()
Group1727.DEF = "r_metacarpal_3_Sites"
"""(r_metacarpal_phalanx_3 x y z)"""
HAnimSite1728 = x3d.HAnimSite()
HAnimSite1728.name = "r_metacarpal_phalanx_3"
HAnimSite1728.DEF = "hanim_r_metacarpal_phalanx_3"
HAnimSite1728.translation = [-0.2,0.665,0.016]
TouchSensor1729 = x3d.TouchSensor()
TouchSensor1729.description = "HAnimSite r_metacarpal_phalanx_3 79"

HAnimSite1728.children.append(TouchSensor1729)
Shape1730 = x3d.Shape()
Shape1730.USE = "HAnimSiteShape"

HAnimSite1728.children.append(Shape1730)

Group1727.children.append(HAnimSite1728)

HAnimSegment1719.children.append(Group1727)

HAnimJoint1718.children.append(HAnimSegment1719)
HAnimJoint1731 = x3d.HAnimJoint()
HAnimJoint1731.name = "r_metacarpophalangeal_3"
HAnimJoint1731.DEF = "hanim_r_metacarpophalangeal_3"
HAnimJoint1731.center = [-0.18330751,0.63495,-0.00391725]
HAnimJoint1731.ulimit = [0,0,0]
HAnimJoint1731.llimit = [0,0,0]
HAnimSegment1732 = x3d.HAnimSegment()
HAnimSegment1732.name = "r_carpal_proximal_phalanx_3"
HAnimSegment1732.DEF = "hanim_r_carpal_proximal_phalanx_3"
Shape1733 = x3d.Shape()
Shape1733.DEF = "r_carpal_proximal_phalanx_3_Shape"
Appearance1734 = x3d.Appearance()
Material1735 = x3d.Material()
Material1735.USE = "SurfaceDefault"

Appearance1734.material = Material1735
ImageTexture1736 = x3d.ImageTexture()
ImageTexture1736.USE = "JinLOA4TextureAtlas"

Appearance1734.texture = ImageTexture1736

Shape1733.appearance = Appearance1734
IndexedFaceSet1737 = x3d.IndexedFaceSet()
IndexedFaceSet1737.coordIndex = [3,21,26,-1,26,4,3,-1,5,25,27,-1,27,6,5,-1,4,26,23,-1,0,5,6,-1,6,14,0,-1,4,1,17,-1,17,3,4,-1,0,2,7,-1,7,5,0,-1,7,2,1,-1,1,4,7,-1,7,22,24,-1,24,5,7,-1,4,23,22,-1,22,7,4,-1,24,25,5,-1,15,17,11,-1,11,13,15,-1,0,14,10,-1,10,8,0,-1,17,1,9,-1,9,11,17,-1,2,0,8,-1,8,12,2,-1,1,2,12,-1,12,9,1,-1,14,15,13,-1,13,10,14,-1,10,13,12,-1,12,8,10,-1,11,9,12,-1,12,13,11,-1,3,18,21,-1,14,6,16,-1,16,15,14,-1,16,3,17,-1,17,15,16,-1,16,6,19,-1,19,20,16,-1,3,16,20,-1,20,18,3,-1,19,6,27,-1,31,28,29,-1,29,30,31,-1,26,21,29,-1,29,28,26,-1,33,34,35,-1,32,33,35,-1,38,32,35,-1,38,35,36,-1,38,36,37,-1,27,25,31,-1,31,30,27,-1,44,45,39,-1,39,40,41,-1,44,39,41,-1,44,41,42,-1,44,42,43,-1,18,20,33,-1,33,32,18,-1,20,19,34,-1,34,33,20,-1,19,27,35,-1,35,34,19,-1,27,30,36,-1,36,35,27,-1,30,29,37,-1,37,36,30,-1,29,21,38,-1,38,37,29,-1,21,18,32,-1,32,38,21,-1,22,23,40,-1,40,39,22,-1,23,26,41,-1,41,40,23,-1,26,28,42,-1,42,41,26,-1,28,31,43,-1,43,42,28,-1,31,25,44,-1,44,43,31,-1,25,24,45,-1,45,44,25,-1,24,22,39,-1,39,45,24,-1]
IndexedFaceSet1737.creaseAngle = 3.14159
IndexedFaceSet1737.texCoordIndex = [0,1,2,-1,2,3,0,-1,4,46,47,-1,47,7,4,-1,3,2,8,-1,9,4,7,-1,7,10,9,-1,3,11,12,-1,12,0,3,-1,9,48,49,-1,49,4,9,-1,14,13,11,-1,11,3,14,-1,49,50,51,-1,51,4,49,-1,3,8,15,-1,15,14,3,-1,51,46,4,-1,17,12,18,-1,18,19,17,-1,9,10,20,-1,20,21,9,-1,12,11,22,-1,22,18,12,-1,48,9,21,-1,21,54,48,-1,11,13,23,-1,23,22,11,-1,10,52,53,-1,53,20,10,-1,20,53,54,-1,54,21,20,-1,18,22,23,-1,23,19,18,-1,0,24,1,-1,10,7,55,-1,55,52,10,-1,25,0,12,-1,12,17,25,-1,55,7,56,-1,56,57,55,-1,0,25,27,-1,27,24,0,-1,56,7,47,-1,31,28,29,-1,29,30,31,-1,2,1,29,-1,29,28,2,-1,34,35,36,-1,33,34,36,-1,32,33,36,-1,32,36,37,-1,32,37,38,-1,6,5,31,-1,31,30,6,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,39,43,44,-1,39,44,45,-1,24,27,34,-1,34,33,24,-1,27,26,35,-1,35,34,27,-1,26,6,36,-1,36,35,26,-1,6,30,37,-1,37,36,6,-1,30,29,38,-1,38,37,30,-1,29,1,32,-1,32,38,29,-1,1,24,33,-1,33,32,1,-1,15,8,42,-1,42,41,15,-1,8,2,43,-1,43,42,8,-1,2,28,44,-1,44,43,2,-1,28,31,45,-1,45,44,28,-1,31,5,39,-1,39,45,31,-1,5,16,40,-1,40,39,5,-1,16,15,41,-1,41,40,16,-1]
Coordinate1738 = x3d.Coordinate()

IndexedFaceSet1737.coord = Coordinate1738
TextureCoordinate1739 = x3d.TextureCoordinate()

IndexedFaceSet1737.texCoord = TextureCoordinate1739

Shape1733.geometry = IndexedFaceSet1737

HAnimSegment1732.children.append(Shape1733)
Group1740 = x3d.Group()
Group1740.DEF = "r_carpal_proximal_phalanx_3_Sites"
"""None"""

HAnimSegment1732.children.append(Group1740)

HAnimJoint1731.children.append(HAnimSegment1732)
HAnimJoint1741 = x3d.HAnimJoint()
HAnimJoint1741.name = "r_carpal_proximal_interphalangeal_3"
HAnimJoint1741.DEF = "hanim_r_carpal_proximal_interphalangeal_3"
HAnimJoint1741.center = [-0.1813275,0.603225,-0.003537]
HAnimJoint1741.ulimit = [0,0,0]
HAnimJoint1741.llimit = [0,0,0]
HAnimSegment1742 = x3d.HAnimSegment()
HAnimSegment1742.name = "r_carpal_middle_phalanx_3"
HAnimSegment1742.DEF = "hanim_r_carpal_middle_phalanx_3"
Shape1743 = x3d.Shape()
Shape1743.DEF = "r_carpal_middle_phalanx_3_Shape"
Appearance1744 = x3d.Appearance()
Material1745 = x3d.Material()
Material1745.USE = "SurfaceDefault"

Appearance1744.material = Material1745
ImageTexture1746 = x3d.ImageTexture()
ImageTexture1746.USE = "JinLOA4TextureAtlas"

Appearance1744.texture = ImageTexture1746

Shape1743.appearance = Appearance1744
IndexedFaceSet1747 = x3d.IndexedFaceSet()
IndexedFaceSet1747.coordIndex = [1,7,14,-1,14,15,1,-1,8,3,14,-1,1,18,5,-1,5,7,1,-1,3,4,21,-1,21,2,3,-1,6,4,3,-1,3,8,6,-1,6,13,4,-1,0,13,5,-1,5,18,0,-1,13,0,21,-1,21,4,13,-1,2,15,14,-1,14,3,2,-1,8,11,12,-1,12,6,8,-1,7,5,9,-1,9,10,7,-1,10,9,12,-1,12,11,10,-1,8,14,10,-1,10,11,8,-1,13,6,12,-1,12,9,13,-1,9,5,13,-1,7,10,14,-1,15,2,16,-1,16,17,15,-1,18,1,19,-1,19,20,18,-1,2,21,22,-1,22,16,2,-1,0,18,20,-1,20,23,0,-1,21,0,23,-1,23,22,21,-1,1,15,17,-1,17,19,1,-1,19,17,23,-1,23,20,19,-1,16,22,23,-1,23,17,16,-1]
IndexedFaceSet1747.creaseAngle = 3.14159
IndexedFaceSet1747.texCoordIndex = [3,0,24,-1,24,25,3,-1,4,5,1,-1,3,6,7,-1,7,0,3,-1,5,8,9,-1,9,10,5,-1,11,8,5,-1,5,4,11,-1,11,12,8,-1,27,26,7,-1,7,6,27,-1,12,13,9,-1,9,8,12,-1,10,2,1,-1,1,5,10,-1,4,14,15,-1,15,11,4,-1,0,7,29,-1,29,28,0,-1,16,17,15,-1,15,14,16,-1,4,1,16,-1,16,14,4,-1,12,11,15,-1,15,17,12,-1,29,7,26,-1,0,28,24,-1,2,10,18,-1,18,19,2,-1,6,3,20,-1,20,21,6,-1,10,9,22,-1,22,18,10,-1,27,6,21,-1,21,31,27,-1,9,13,23,-1,23,22,9,-1,3,25,30,-1,30,20,3,-1,20,30,31,-1,31,21,20,-1,18,22,23,-1,23,19,18,-1]
Coordinate1748 = x3d.Coordinate()

IndexedFaceSet1747.coord = Coordinate1748
TextureCoordinate1749 = x3d.TextureCoordinate()

IndexedFaceSet1747.texCoord = TextureCoordinate1749

Shape1743.geometry = IndexedFaceSet1747

HAnimSegment1742.children.append(Shape1743)
Group1750 = x3d.Group()
Group1750.DEF = "r_carpal_middle_phalanx_3_Sites"
"""None"""

HAnimSegment1742.children.append(Group1750)

HAnimJoint1741.children.append(HAnimSegment1742)
HAnimJoint1751 = x3d.HAnimJoint()
HAnimJoint1751.name = "r_carpal_distal_interphalangeal_3"
HAnimJoint1751.DEF = "hanim_r_carpal_distal_interphalangeal_3"
HAnimJoint1751.center = [-0.1802925,0.575325,-0.0037597502]
HAnimJoint1751.ulimit = [0,0,0]
HAnimJoint1751.llimit = [0,0,0]
HAnimSegment1752 = x3d.HAnimSegment()
HAnimSegment1752.name = "r_carpal_distal_phalanx_3"
HAnimSegment1752.DEF = "hanim_r_carpal_distal_phalanx_3"
Shape1753 = x3d.Shape()
Shape1753.DEF = "r_carpal_distal_phalanx_3_Shape"
Appearance1754 = x3d.Appearance()
Material1755 = x3d.Material()
Material1755.USE = "SurfaceDefault"

Appearance1754.material = Material1755
ImageTexture1756 = x3d.ImageTexture()
ImageTexture1756.USE = "JinLOA4TextureAtlas"

Appearance1754.texture = ImageTexture1756

Shape1753.appearance = Appearance1754
IndexedFaceSet1757 = x3d.IndexedFaceSet()
IndexedFaceSet1757.coordIndex = [0,31,25,-1,24,32,1,-1,1,3,2,-1,2,0,1,-1,31,5,4,-1,4,23,31,-1,0,2,5,-1,5,31,0,-1,23,4,6,-1,6,29,23,-1,32,7,3,-1,3,1,32,-1,29,6,7,-1,7,32,29,-1,2,14,17,-1,17,8,2,-1,5,11,10,-1,10,4,5,-1,2,8,11,-1,11,5,2,-1,10,21,18,-1,18,12,10,-1,7,13,9,-1,9,3,7,-1,6,12,13,-1,13,7,6,-1,8,17,19,-1,19,11,8,-1,19,21,10,-1,10,11,19,-1,25,24,1,-1,1,0,25,-1,14,20,22,-1,22,16,14,-1,15,16,22,-1,22,18,15,-1,3,9,20,-1,20,14,3,-1,14,2,3,-1,4,10,12,-1,12,6,4,-1,21,15,18,-1,14,16,19,-1,19,17,14,-1,19,16,15,-1,15,21,19,-1,9,13,22,-1,22,20,9,-1,22,13,12,-1,12,18,22,-1,25,26,27,-1,27,24,25,-1,23,29,30,-1,30,28,23,-1,28,30,27,-1,27,26,28,-1,25,31,28,-1,28,26,25,-1,32,24,27,-1,27,30,32,-1,30,29,32,-1,23,28,31,-1]
IndexedFaceSet1757.creaseAngle = 3.14159
IndexedFaceSet1757.texCoordIndex = [0,1,2,-1,3,4,5,-1,5,6,7,-1,7,0,5,-1,33,35,9,-1,9,10,33,-1,0,7,8,-1,8,1,0,-1,10,9,11,-1,11,12,10,-1,4,13,6,-1,6,5,4,-1,12,11,36,-1,36,34,12,-1,7,14,15,-1,15,16,7,-1,35,37,18,-1,18,9,35,-1,7,16,17,-1,17,8,7,-1,18,20,21,-1,21,19,18,-1,13,22,23,-1,23,6,13,-1,11,19,38,-1,38,36,11,-1,16,15,24,-1,24,17,16,-1,39,20,18,-1,18,37,39,-1,2,3,5,-1,5,0,2,-1,14,26,27,-1,27,25,14,-1,28,40,41,-1,41,21,28,-1,6,23,26,-1,26,14,6,-1,14,7,6,-1,9,18,19,-1,19,11,9,-1,20,28,21,-1,14,25,24,-1,24,15,14,-1,39,40,28,-1,28,20,39,-1,23,22,27,-1,27,26,23,-1,41,38,19,-1,19,21,41,-1,2,29,30,-1,30,3,2,-1,10,12,43,-1,43,42,10,-1,31,32,30,-1,30,29,31,-1,2,1,31,-1,31,29,2,-1,4,3,30,-1,30,32,4,-1,43,12,34,-1,10,42,33,-1]
Coordinate1758 = x3d.Coordinate()

IndexedFaceSet1757.coord = Coordinate1758
TextureCoordinate1759 = x3d.TextureCoordinate()

IndexedFaceSet1757.texCoord = TextureCoordinate1759

Shape1753.geometry = IndexedFaceSet1757

HAnimSegment1752.children.append(Shape1753)
Group1760 = x3d.Group()
Group1760.DEF = "r_carpal_distal_phalanx_3_Sites"
"""(r_carpal_distal_phalanx_3_tip -0.1969 0.6758 -0.0427) (r_dactylion_pt -0.1941 0.6772 -0.0423 )"""
HAnimSite1761 = x3d.HAnimSite()
HAnimSite1761.name = "r_carpal_distal_phalanx_3_tip"
HAnimSite1761.DEF = "hanim_r_carpal_distal_phalanx_3_tip"
HAnimSite1761.translation = [-0.17,0.555,-0.006]
TouchSensor1762 = x3d.TouchSensor()
TouchSensor1762.description = "HAnimSite r_carpal_distal_phalanx_3_tip 108"

HAnimSite1761.children.append(TouchSensor1762)
Shape1763 = x3d.Shape()
Shape1763.USE = "HAnimSiteShape"

HAnimSite1761.children.append(Shape1763)

Group1760.children.append(HAnimSite1761)
HAnimSite1764 = x3d.HAnimSite()
HAnimSite1764.name = "r_dactylion_pt"
HAnimSite1764.DEF = "hanim_r_dactylion_pt"
HAnimSite1764.translation = [-0.172,0.555,-0.006]
TouchSensor1765 = x3d.TouchSensor()
TouchSensor1765.description = "HAnimSite r_dactylion_pt 61"

HAnimSite1764.children.append(TouchSensor1765)
Shape1766 = x3d.Shape()
Shape1766.USE = "HAnimSiteShape"

HAnimSite1764.children.append(Shape1766)

Group1760.children.append(HAnimSite1764)

HAnimSegment1752.children.append(Group1760)

HAnimJoint1751.children.append(HAnimSegment1752)

HAnimJoint1741.children.append(HAnimJoint1751)

HAnimJoint1731.children.append(HAnimJoint1741)

HAnimJoint1718.children.append(HAnimJoint1731)

HAnimJoint1708.children.append(HAnimJoint1718)

HAnimJoint1596.children.append(HAnimJoint1708)
HAnimJoint1767 = x3d.HAnimJoint()
HAnimJoint1767.name = "r_midcarpal_4_5"
HAnimJoint1767.DEF = "hanim_r_midcarpal_4_5"
HAnimJoint1767.center = [-0.18072,0.70582503,-0.025740001]
HAnimJoint1767.ulimit = [0,0,0]
HAnimJoint1767.llimit = [0,0,0]
HAnimSegment1768 = x3d.HAnimSegment()
HAnimSegment1768.name = "r_hamate"
HAnimSegment1768.DEF = "hanim_r_hamate"
Shape1769 = x3d.Shape()
Shape1769.DEF = "r_hamate_Shape"
Appearance1770 = x3d.Appearance()
Material1771 = x3d.Material()
Material1771.USE = "SurfaceDefault"

Appearance1770.material = Material1771
ImageTexture1772 = x3d.ImageTexture()
ImageTexture1772.USE = "JinLOA4TextureAtlas"

Appearance1770.texture = ImageTexture1772

Shape1769.appearance = Appearance1770
IndexedFaceSet1773 = x3d.IndexedFaceSet()
IndexedFaceSet1773.coordIndex = [6,3,4,-1,4,7,6,-1,7,0,9,-1,9,8,7,-1,11,2,1,-1,1,5,11,-1,5,1,3,-1,3,6,5,-1,2,11,10,-1,4,0,7,-1,15,16,17,-1,14,15,17,-1,13,14,17,-1,20,21,22,-1,27,24,25,-1,25,26,27,-1,17,18,12,-1,12,13,17,-1,23,19,20,-1,20,22,23,-1,9,0,13,-1,13,12,9,-1,0,4,14,-1,14,13,0,-1,4,3,15,-1,15,14,4,-1,3,1,16,-1,16,15,3,-1,1,2,17,-1,17,16,1,-1,2,10,18,-1,18,17,2,-1,10,9,12,-1,12,18,10,-1,11,5,20,-1,20,19,11,-1,5,6,21,-1,21,20,5,-1,6,7,22,-1,22,21,6,-1,7,8,23,-1,23,22,7,-1,8,11,19,-1,19,23,8,-1,8,9,25,-1,25,24,8,-1,9,10,26,-1,26,25,9,-1,10,11,27,-1,27,26,10,-1,11,8,24,-1,24,27,11,-1]
IndexedFaceSet1773.creaseAngle = 3.14159
IndexedFaceSet1773.texCoordIndex = [0,1,2,-1,2,3,0,-1,3,4,5,-1,5,6,3,-1,7,8,9,-1,9,10,7,-1,10,9,29,-1,29,28,10,-1,8,7,11,-1,2,4,3,-1,14,15,16,-1,13,14,16,-1,12,13,16,-1,35,36,37,-1,23,38,39,-1,39,22,23,-1,16,24,25,-1,25,12,16,-1,26,27,17,-1,17,19,26,-1,5,4,12,-1,12,25,5,-1,4,2,13,-1,13,12,4,-1,2,1,14,-1,14,13,2,-1,29,9,33,-1,33,32,29,-1,9,8,34,-1,34,33,9,-1,8,11,40,-1,40,34,8,-1,11,30,41,-1,41,40,11,-1,7,10,35,-1,35,43,7,-1,10,28,36,-1,36,35,10,-1,0,3,19,-1,19,18,0,-1,3,6,26,-1,26,19,3,-1,31,7,43,-1,43,42,31,-1,6,5,21,-1,21,20,6,-1,30,11,22,-1,22,39,30,-1,11,7,23,-1,23,22,11,-1,7,31,38,-1,38,23,7,-1]
Coordinate1774 = x3d.Coordinate()

IndexedFaceSet1773.coord = Coordinate1774
TextureCoordinate1775 = x3d.TextureCoordinate()

IndexedFaceSet1773.texCoord = TextureCoordinate1775

Shape1769.geometry = IndexedFaceSet1773

HAnimSegment1768.children.append(Shape1769)
Group1776 = x3d.Group()
Group1776.DEF = "r_hamate_Sites"
"""None"""

HAnimSegment1768.children.append(Group1776)

HAnimJoint1767.children.append(HAnimSegment1768)
HAnimJoint1777 = x3d.HAnimJoint()
HAnimJoint1777.name = "r_carpometacarpal_4"
HAnimJoint1777.DEF = "hanim_r_carpometacarpal_4"
HAnimJoint1777.center = [-0.18072,0.68625003,-0.01991925]
HAnimJoint1777.ulimit = [0,0,0]
HAnimJoint1777.llimit = [0,0,0]
HAnimSegment1778 = x3d.HAnimSegment()
HAnimSegment1778.name = "r_metacarpal_4"
HAnimSegment1778.DEF = "hanim_r_metacarpal_4"
Shape1779 = x3d.Shape()
Shape1779.DEF = "r_metacarpal_4_Shape"
Appearance1780 = x3d.Appearance()
Material1781 = x3d.Material()
Material1781.USE = "SurfaceDefault"

Appearance1780.material = Material1781
ImageTexture1782 = x3d.ImageTexture()
ImageTexture1782.USE = "JinLOA4TextureAtlas"

Appearance1780.texture = ImageTexture1782

Shape1779.appearance = Appearance1780
IndexedFaceSet1783 = x3d.IndexedFaceSet()
IndexedFaceSet1783.coordIndex = [9,6,0,-1,0,2,9,-1,6,10,4,-1,4,0,6,-1,7,8,3,-1,3,1,7,-1,7,1,5,-1,5,11,7,-1,12,13,14,-1,14,15,12,-1,34,35,32,-1,32,33,34,-1,17,20,21,-1,21,16,17,-1,29,30,31,-1,31,24,29,-1,17,18,19,-1,19,20,17,-1,24,25,28,-1,28,29,24,-1,9,2,13,-1,13,12,9,-1,16,21,22,-1,22,23,16,-1,3,8,15,-1,15,14,3,-1,28,25,26,-1,26,27,28,-1,2,0,17,-1,17,16,2,-1,0,4,18,-1,18,17,0,-1,4,5,19,-1,19,18,4,-1,5,1,20,-1,20,19,5,-1,1,3,21,-1,21,20,1,-1,3,14,22,-1,22,21,3,-1,14,13,23,-1,23,22,14,-1,13,2,16,-1,16,23,13,-1,6,9,25,-1,25,24,6,-1,9,12,26,-1,26,25,9,-1,12,15,27,-1,27,26,12,-1,15,8,28,-1,28,27,15,-1,8,7,29,-1,29,28,8,-1,7,11,30,-1,30,29,7,-1,11,10,31,-1,31,30,11,-1,10,6,24,-1,24,31,10,-1,4,10,33,-1,33,32,4,-1,10,11,34,-1,34,33,10,-1,11,5,35,-1,35,34,11,-1,5,4,32,-1,32,35,5,-1]
IndexedFaceSet1783.creaseAngle = 3.14159
IndexedFaceSet1783.texCoordIndex = [0,1,2,-1,2,3,0,-1,1,4,5,-1,5,2,1,-1,38,39,40,-1,40,9,38,-1,38,9,41,-1,41,42,38,-1,12,13,14,-1,14,15,12,-1,16,43,44,-1,44,45,16,-1,20,21,22,-1,22,23,20,-1,48,49,50,-1,50,51,48,-1,20,28,29,-1,29,21,20,-1,27,30,31,-1,31,24,27,-1,0,3,13,-1,13,12,0,-1,23,22,32,-1,32,33,23,-1,8,7,15,-1,15,14,8,-1,31,30,34,-1,34,35,31,-1,3,2,20,-1,20,23,3,-1,2,5,28,-1,28,20,2,-1,37,41,53,-1,53,52,37,-1,41,9,46,-1,46,53,41,-1,9,40,47,-1,47,46,9,-1,8,14,32,-1,32,22,8,-1,14,13,33,-1,33,32,14,-1,13,3,23,-1,23,33,13,-1,1,0,30,-1,30,27,1,-1,0,12,34,-1,34,30,0,-1,12,15,35,-1,35,34,12,-1,15,7,31,-1,31,35,15,-1,7,6,24,-1,24,31,7,-1,38,42,49,-1,49,48,38,-1,11,4,26,-1,26,25,11,-1,4,1,27,-1,27,26,4,-1,5,4,19,-1,19,18,5,-1,36,42,16,-1,16,45,36,-1,42,41,43,-1,43,16,42,-1,10,5,18,-1,18,17,10,-1]
Coordinate1784 = x3d.Coordinate()

IndexedFaceSet1783.coord = Coordinate1784
TextureCoordinate1785 = x3d.TextureCoordinate()

IndexedFaceSet1783.texCoord = TextureCoordinate1785

Shape1779.geometry = IndexedFaceSet1783

HAnimSegment1778.children.append(Shape1779)
Group1786 = x3d.Group()
Group1786.DEF = "r_metacarpal_4_Sites"
"""None"""

HAnimSegment1778.children.append(Group1786)

HAnimJoint1777.children.append(HAnimSegment1778)
HAnimJoint1787 = x3d.HAnimJoint()
HAnimJoint1787.name = "r_metacarpophalangeal_4"
HAnimJoint1787.DEF = "hanim_r_metacarpophalangeal_4"
HAnimJoint1787.center = [-0.18330751,0.63405,-0.02144025]
HAnimJoint1787.ulimit = [0,0,0]
HAnimJoint1787.llimit = [0,0,0]
HAnimSegment1788 = x3d.HAnimSegment()
HAnimSegment1788.name = "r_carpal_proximal_phalanx_4"
HAnimSegment1788.DEF = "hanim_r_carpal_proximal_phalanx_4"
Shape1789 = x3d.Shape()
Shape1789.DEF = "r_carpal_proximal_phalanx_4_Shape"
Appearance1790 = x3d.Appearance()
Material1791 = x3d.Material()
Material1791.USE = "SurfaceDefault"

Appearance1790.material = Material1791
ImageTexture1792 = x3d.ImageTexture()
ImageTexture1792.USE = "JinLOA4TextureAtlas"

Appearance1790.texture = ImageTexture1792

Shape1789.appearance = Appearance1790
IndexedFaceSet1793 = x3d.IndexedFaceSet()
IndexedFaceSet1793.coordIndex = [3,23,22,-1,22,4,3,-1,5,32,31,-1,31,6,5,-1,4,22,44,-1,0,5,6,-1,6,14,0,-1,4,1,17,-1,17,3,4,-1,0,2,7,-1,7,5,0,-1,7,2,1,-1,1,4,7,-1,7,43,45,-1,45,5,7,-1,4,44,43,-1,43,7,4,-1,45,32,5,-1,15,17,11,-1,11,13,15,-1,0,14,10,-1,10,8,0,-1,17,1,9,-1,9,11,17,-1,2,0,8,-1,8,12,2,-1,1,2,12,-1,12,9,1,-1,14,15,13,-1,13,10,14,-1,10,13,12,-1,12,8,10,-1,11,9,12,-1,12,13,11,-1,3,40,23,-1,14,6,16,-1,16,15,14,-1,16,3,17,-1,17,15,16,-1,16,6,42,-1,42,41,16,-1,3,16,41,-1,41,40,3,-1,42,6,31,-1,21,18,19,-1,19,20,21,-1,22,23,19,-1,19,18,22,-1,26,27,28,-1,25,26,28,-1,24,25,28,-1,24,28,29,-1,24,29,30,-1,31,32,21,-1,21,20,31,-1,33,34,35,-1,35,36,37,-1,33,35,37,-1,33,37,38,-1,33,38,39,-1,40,41,26,-1,26,25,40,-1,41,42,27,-1,27,26,41,-1,42,31,28,-1,28,27,42,-1,31,20,29,-1,29,28,31,-1,20,19,30,-1,30,29,20,-1,19,23,24,-1,24,30,19,-1,23,40,25,-1,25,24,23,-1,43,44,36,-1,36,35,43,-1,44,22,37,-1,37,36,44,-1,22,18,38,-1,38,37,22,-1,18,21,39,-1,39,38,18,-1,21,32,33,-1,33,39,21,-1,32,45,34,-1,34,33,32,-1,45,43,35,-1,35,34,45,-1]
IndexedFaceSet1793.creaseAngle = 3.14159
IndexedFaceSet1793.texCoordIndex = [0,1,2,-1,2,3,0,-1,4,46,47,-1,47,7,4,-1,3,2,8,-1,9,4,7,-1,7,10,9,-1,3,11,12,-1,12,0,3,-1,9,48,49,-1,49,4,9,-1,14,13,11,-1,11,3,14,-1,49,50,51,-1,51,4,49,-1,3,8,15,-1,15,14,3,-1,51,46,4,-1,17,12,18,-1,18,19,17,-1,9,10,20,-1,20,21,9,-1,12,11,22,-1,22,18,12,-1,48,9,21,-1,21,54,48,-1,11,13,23,-1,23,22,11,-1,10,52,53,-1,53,20,10,-1,20,53,54,-1,54,21,20,-1,18,22,23,-1,23,19,18,-1,0,24,1,-1,10,7,55,-1,55,52,10,-1,25,0,12,-1,12,17,25,-1,55,7,56,-1,56,57,55,-1,0,25,27,-1,27,24,0,-1,56,7,47,-1,31,28,29,-1,29,30,31,-1,2,1,29,-1,29,28,2,-1,34,35,36,-1,33,34,36,-1,32,33,36,-1,32,36,37,-1,32,37,38,-1,6,5,31,-1,31,30,6,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,39,43,44,-1,39,44,45,-1,24,27,34,-1,34,33,24,-1,27,26,35,-1,35,34,27,-1,26,6,36,-1,36,35,26,-1,6,30,37,-1,37,36,6,-1,30,29,38,-1,38,37,30,-1,29,1,32,-1,32,38,29,-1,1,24,33,-1,33,32,1,-1,15,8,42,-1,42,41,15,-1,8,2,43,-1,43,42,8,-1,2,28,44,-1,44,43,2,-1,28,31,45,-1,45,44,28,-1,31,5,39,-1,39,45,31,-1,5,16,40,-1,40,39,5,-1,16,15,41,-1,41,40,16,-1]
Coordinate1794 = x3d.Coordinate()

IndexedFaceSet1793.coord = Coordinate1794
TextureCoordinate1795 = x3d.TextureCoordinate()

IndexedFaceSet1793.texCoord = TextureCoordinate1795

Shape1789.geometry = IndexedFaceSet1793

HAnimSegment1788.children.append(Shape1789)
Group1796 = x3d.Group()
Group1796.DEF = "r_carpal_proximal_phalanx_4_Sites"
"""None"""

HAnimSegment1788.children.append(Group1796)

HAnimJoint1787.children.append(HAnimSegment1788)
HAnimJoint1797 = x3d.HAnimJoint()
HAnimJoint1797.name = "r_carpal_proximal_interphalangeal_4"
HAnimJoint1797.DEF = "hanim_r_carpal_proximal_interphalangeal_4"
HAnimJoint1797.center = [-0.1813275,0.6066,-0.020646]
HAnimJoint1797.ulimit = [0,0,0]
HAnimJoint1797.llimit = [0,0,0]
HAnimSegment1798 = x3d.HAnimSegment()
HAnimSegment1798.name = "r_carpal_middle_phalanx_4"
HAnimSegment1798.DEF = "hanim_r_carpal_middle_phalanx_4"
Shape1799 = x3d.Shape()
Shape1799.DEF = "r_carpal_middle_phalanx_4_Shape"
Appearance1800 = x3d.Appearance()
Material1801 = x3d.Material()
Material1801.USE = "SurfaceDefault"

Appearance1800.material = Material1801
ImageTexture1802 = x3d.ImageTexture()
ImageTexture1802.USE = "JinLOA4TextureAtlas"

Appearance1800.texture = ImageTexture1802

Shape1799.appearance = Appearance1800
IndexedFaceSet1803 = x3d.IndexedFaceSet()
IndexedFaceSet1803.coordIndex = [1,7,14,-1,14,15,1,-1,8,3,14,-1,1,18,5,-1,5,7,1,-1,3,4,21,-1,21,2,3,-1,6,4,3,-1,3,8,6,-1,6,13,4,-1,0,13,5,-1,5,18,0,-1,13,0,21,-1,21,4,13,-1,2,15,14,-1,14,3,2,-1,8,11,12,-1,12,6,8,-1,7,5,9,-1,9,10,7,-1,10,9,12,-1,12,11,10,-1,8,14,10,-1,10,11,8,-1,13,6,12,-1,12,9,13,-1,9,5,13,-1,7,10,14,-1,15,2,16,-1,16,17,15,-1,18,1,19,-1,19,20,18,-1,2,21,22,-1,22,16,2,-1,0,18,20,-1,20,23,0,-1,21,0,23,-1,23,22,21,-1,1,15,17,-1,17,19,1,-1,19,17,23,-1,23,20,19,-1,16,22,23,-1,23,17,16,-1]
IndexedFaceSet1803.creaseAngle = 3.14159
IndexedFaceSet1803.texCoordIndex = [3,0,24,-1,24,25,3,-1,4,5,1,-1,3,6,7,-1,7,0,3,-1,5,8,9,-1,9,10,5,-1,11,8,5,-1,5,4,11,-1,11,12,8,-1,27,26,7,-1,7,6,27,-1,12,13,9,-1,9,8,12,-1,10,2,1,-1,1,5,10,-1,4,14,15,-1,15,11,4,-1,0,7,29,-1,29,28,0,-1,16,17,15,-1,15,14,16,-1,4,1,16,-1,16,14,4,-1,12,11,15,-1,15,17,12,-1,29,7,26,-1,0,28,24,-1,2,10,18,-1,18,19,2,-1,6,3,20,-1,20,21,6,-1,10,9,22,-1,22,18,10,-1,27,6,21,-1,21,31,27,-1,9,13,23,-1,23,22,9,-1,3,25,30,-1,30,20,3,-1,20,30,31,-1,31,21,20,-1,18,22,23,-1,23,19,18,-1]
Coordinate1804 = x3d.Coordinate()

IndexedFaceSet1803.coord = Coordinate1804
TextureCoordinate1805 = x3d.TextureCoordinate()

IndexedFaceSet1803.texCoord = TextureCoordinate1805

Shape1799.geometry = IndexedFaceSet1803

HAnimSegment1798.children.append(Shape1799)
Group1806 = x3d.Group()
Group1806.DEF = "r_carpal_middle_phalanx_4_Sites"
"""None"""

HAnimSegment1798.children.append(Group1806)

HAnimJoint1797.children.append(HAnimSegment1798)
HAnimJoint1807 = x3d.HAnimJoint()
HAnimJoint1807.name = "r_carpal_distal_interphalangeal_4"
HAnimJoint1807.DEF = "hanim_r_carpal_distal_interphalangeal_4"
HAnimJoint1807.center = [-0.1802925,0.580725,-0.019777501]
HAnimJoint1807.ulimit = [0,0,0]
HAnimJoint1807.llimit = [0,0,0]
HAnimSegment1808 = x3d.HAnimSegment()
HAnimSegment1808.name = "r_carpal_distal_phalanx_4"
HAnimSegment1808.DEF = "hanim_r_carpal_distal_phalanx_4"
Shape1809 = x3d.Shape()
Shape1809.DEF = "r_carpal_distal_phalanx_4_Shape"
Appearance1810 = x3d.Appearance()
Material1811 = x3d.Material()
Material1811.USE = "SurfaceDefault"

Appearance1810.material = Material1811
ImageTexture1812 = x3d.ImageTexture()
ImageTexture1812.USE = "JinLOA4TextureAtlas"

Appearance1810.texture = ImageTexture1812

Shape1809.appearance = Appearance1810
IndexedFaceSet1813 = x3d.IndexedFaceSet()
IndexedFaceSet1813.coordIndex = [0,31,25,-1,24,32,1,-1,1,3,2,-1,2,0,1,-1,31,5,4,-1,4,23,31,-1,0,2,5,-1,5,31,0,-1,23,4,6,-1,6,29,23,-1,32,7,3,-1,3,1,32,-1,29,6,7,-1,7,32,29,-1,2,14,17,-1,17,8,2,-1,5,11,10,-1,10,4,5,-1,2,8,11,-1,11,5,2,-1,10,21,18,-1,18,12,10,-1,7,13,9,-1,9,3,7,-1,6,12,13,-1,13,7,6,-1,8,17,19,-1,19,11,8,-1,19,21,10,-1,10,11,19,-1,25,24,1,-1,1,0,25,-1,14,20,22,-1,22,16,14,-1,15,16,22,-1,22,18,15,-1,3,9,20,-1,20,14,3,-1,14,2,3,-1,4,10,12,-1,12,6,4,-1,21,15,18,-1,14,16,19,-1,19,17,14,-1,19,16,15,-1,15,21,19,-1,9,13,22,-1,22,20,9,-1,22,13,12,-1,12,18,22,-1,25,26,27,-1,27,24,25,-1,23,29,30,-1,30,28,23,-1,28,30,27,-1,27,26,28,-1,25,31,28,-1,28,26,25,-1,32,24,27,-1,27,30,32,-1,30,29,32,-1,23,28,31,-1]
IndexedFaceSet1813.creaseAngle = 3.14159
IndexedFaceSet1813.texCoordIndex = [0,1,2,-1,3,4,5,-1,5,6,7,-1,7,0,5,-1,33,35,9,-1,9,10,33,-1,0,7,8,-1,8,1,0,-1,10,9,11,-1,11,12,10,-1,4,13,6,-1,6,5,4,-1,12,11,36,-1,36,34,12,-1,7,14,15,-1,15,16,7,-1,35,37,18,-1,18,9,35,-1,7,16,17,-1,17,8,7,-1,18,20,21,-1,21,19,18,-1,13,22,23,-1,23,6,13,-1,11,19,38,-1,38,36,11,-1,16,15,24,-1,24,17,16,-1,39,20,18,-1,18,37,39,-1,2,3,5,-1,5,0,2,-1,14,26,27,-1,27,25,14,-1,28,40,41,-1,41,21,28,-1,6,23,26,-1,26,14,6,-1,14,7,6,-1,9,18,19,-1,19,11,9,-1,20,28,21,-1,14,25,24,-1,24,15,14,-1,39,40,28,-1,28,20,39,-1,23,22,27,-1,27,26,23,-1,41,38,19,-1,19,21,41,-1,2,29,30,-1,30,3,2,-1,10,12,43,-1,43,42,10,-1,31,32,30,-1,30,29,31,-1,2,1,31,-1,31,29,2,-1,4,3,30,-1,30,32,4,-1,43,12,34,-1,10,42,33,-1]
Coordinate1814 = x3d.Coordinate()

IndexedFaceSet1813.coord = Coordinate1814
TextureCoordinate1815 = x3d.TextureCoordinate()

IndexedFaceSet1813.texCoord = TextureCoordinate1815

Shape1809.geometry = IndexedFaceSet1813

HAnimSegment1808.children.append(Shape1809)
Group1816 = x3d.Group()
Group1816.DEF = "hanim_r_carpal_distal_phalanx_4_Sites"
"""(r_carpal_distal_phalanx_4_tip -0.1934 0.6778 -0.0693)"""
HAnimSite1817 = x3d.HAnimSite()
HAnimSite1817.name = "r_carpal_distal_phalanx_4_tip"
HAnimSite1817.DEF = "hanim_r_carpal_distal_phalanx_4_tip"
HAnimSite1817.translation = [-0.172,0.559,-0.024]
TouchSensor1818 = x3d.TouchSensor()
TouchSensor1818.description = "HAnimSite r_carpal_distal_phalanx_4_tip 109"

HAnimSite1817.children.append(TouchSensor1818)
Shape1819 = x3d.Shape()
Shape1819.USE = "HAnimSiteShape"

HAnimSite1817.children.append(Shape1819)

Group1816.children.append(HAnimSite1817)

HAnimSegment1808.children.append(Group1816)

HAnimJoint1807.children.append(HAnimSegment1808)

HAnimJoint1797.children.append(HAnimJoint1807)

HAnimJoint1787.children.append(HAnimJoint1797)

HAnimJoint1777.children.append(HAnimJoint1787)

HAnimJoint1767.children.append(HAnimJoint1777)

HAnimJoint1596.children.append(HAnimJoint1767)
HAnimJoint1820 = x3d.HAnimJoint()
HAnimJoint1820.name = "r_carpometacarpal_5"
HAnimJoint1820.DEF = "hanim_r_carpometacarpal_5"
HAnimJoint1820.center = [-0.18126,0.68827504,-0.032782502]
HAnimJoint1820.ulimit = [0,0,0]
HAnimJoint1820.llimit = [0,0,0]
HAnimSegment1821 = x3d.HAnimSegment()
HAnimSegment1821.name = "r_metacarpal_5"
HAnimSegment1821.DEF = "hanim_r_metacarpal_5"
Shape1822 = x3d.Shape()
Shape1822.DEF = "r_metacarpal_5_Shape"
Appearance1823 = x3d.Appearance()
Material1824 = x3d.Material()
Material1824.USE = "SurfaceDefault"

Appearance1823.material = Material1824
ImageTexture1825 = x3d.ImageTexture()
ImageTexture1825.USE = "JinLOA4TextureAtlas"

Appearance1823.texture = ImageTexture1825

Shape1822.appearance = Appearance1823
IndexedFaceSet1826 = x3d.IndexedFaceSet()
IndexedFaceSet1826.coordIndex = [11,9,0,-1,0,3,11,-1,5,2,1,-1,1,4,5,-1,3,0,2,-1,2,5,3,-1,9,13,8,-1,8,0,9,-1,2,7,6,-1,6,1,2,-1,6,14,10,-1,10,1,6,-1,1,10,12,-1,12,4,1,-1,0,8,7,-1,7,2,0,-1,25,26,27,-1,27,20,25,-1,16,17,18,-1,16,18,19,-1,15,16,19,-1,30,31,32,-1,29,30,32,-1,28,29,32,-1,11,3,16,-1,16,15,11,-1,3,5,17,-1,17,16,3,-1,5,4,18,-1,18,17,5,-1,4,12,19,-1,19,18,4,-1,24,21,22,-1,22,23,24,-1,20,21,24,-1,24,25,20,-1,9,11,21,-1,21,20,9,-1,11,15,22,-1,22,21,11,-1,15,19,23,-1,23,22,15,-1,19,12,24,-1,24,23,19,-1,12,10,25,-1,25,24,12,-1,10,14,26,-1,26,25,10,-1,14,13,27,-1,27,26,14,-1,13,9,20,-1,20,27,13,-1,14,6,29,-1,29,28,14,-1,6,7,30,-1,30,29,6,-1,7,8,31,-1,31,30,7,-1,8,13,32,-1,32,31,8,-1,13,14,28,-1,28,32,13,-1]
IndexedFaceSet1826.creaseAngle = 3.14159
IndexedFaceSet1826.texCoordIndex = [0,1,2,-1,2,3,0,-1,33,34,6,-1,6,35,33,-1,3,2,5,-1,5,4,3,-1,1,8,9,-1,9,2,1,-1,34,37,11,-1,11,6,34,-1,11,12,38,-1,38,6,11,-1,6,38,39,-1,39,35,6,-1,2,9,10,-1,10,5,2,-1,40,16,41,-1,41,42,40,-1,20,21,22,-1,20,22,23,-1,19,20,23,-1,43,44,45,-1,25,43,45,-1,24,25,45,-1,0,3,20,-1,20,19,0,-1,3,4,21,-1,21,20,3,-1,4,7,22,-1,22,21,4,-1,7,14,23,-1,23,22,7,-1,29,30,31,-1,31,32,29,-1,18,30,29,-1,29,15,18,-1,1,0,30,-1,30,18,1,-1,0,19,31,-1,31,30,0,-1,19,23,32,-1,32,31,19,-1,23,14,29,-1,29,32,23,-1,14,13,15,-1,15,29,14,-1,38,12,16,-1,16,40,38,-1,12,36,41,-1,41,16,12,-1,8,1,18,-1,18,17,8,-1,12,11,25,-1,25,24,12,-1,11,37,43,-1,43,25,11,-1,10,9,27,-1,27,26,10,-1,9,8,28,-1,28,27,9,-1,36,12,24,-1,24,45,36,-1]
Coordinate1827 = x3d.Coordinate()

IndexedFaceSet1826.coord = Coordinate1827
TextureCoordinate1828 = x3d.TextureCoordinate()

IndexedFaceSet1826.texCoord = TextureCoordinate1828

Shape1822.geometry = IndexedFaceSet1826

HAnimSegment1821.children.append(Shape1822)
Group1829 = x3d.Group()
Group1829.DEF = "r_metacarpal_5_Sites"
"""(r_metacarpal_phalanx_5_pt -0.1929 0.7890 -0.1064)"""
HAnimSite1830 = x3d.HAnimSite()
HAnimSite1830.name = "r_metacarpal_phalanx_5_pt"
HAnimSite1830.DEF = "hanim_r_metacarpal_phalanx_5_pt"
HAnimSite1830.translation = [-0.2,0.665,-0.036]
TouchSensor1831 = x3d.TouchSensor()
TouchSensor1831.description = "HAnimSite r_metacarpal_phalanx_5_pt 80"

HAnimSite1830.children.append(TouchSensor1831)
Shape1832 = x3d.Shape()
Shape1832.USE = "HAnimSiteShape"

HAnimSite1830.children.append(Shape1832)

Group1829.children.append(HAnimSite1830)

HAnimSegment1821.children.append(Group1829)

HAnimJoint1820.children.append(HAnimSegment1821)
HAnimJoint1833 = x3d.HAnimJoint()
HAnimJoint1833.name = "r_metacarpophalangeal_5"
HAnimJoint1833.DEF = "hanim_r_metacarpophalangeal_5"
HAnimJoint1833.center = [-0.18297,0.6381,-0.0370575]
HAnimJoint1833.ulimit = [0,0,0]
HAnimJoint1833.llimit = [0,0,0]
HAnimSegment1834 = x3d.HAnimSegment()
HAnimSegment1834.name = "r_carpal_proximal_phalanx_5"
HAnimSegment1834.DEF = "hanim_r_carpal_proximal_phalanx_5"
Shape1835 = x3d.Shape()
Shape1835.DEF = "r_carpal_proximal_phalanx_5_Shape"
Appearance1836 = x3d.Appearance()
Material1837 = x3d.Material()
Material1837.USE = "SurfaceDefault"

Appearance1836.material = Material1837
ImageTexture1838 = x3d.ImageTexture()
ImageTexture1838.USE = "JinLOA4TextureAtlas"

Appearance1836.texture = ImageTexture1838

Shape1835.appearance = Appearance1836
IndexedFaceSet1839 = x3d.IndexedFaceSet()
IndexedFaceSet1839.coordIndex = [10,11,6,-1,6,8,10,-1,0,9,5,-1,5,3,0,-1,11,1,4,-1,4,6,11,-1,2,0,3,-1,3,7,2,-1,1,2,7,-1,7,4,1,-1,9,10,8,-1,8,5,9,-1,5,8,7,-1,7,3,5,-1,6,4,7,-1,7,8,6,-1,17,2,1,-1,1,13,17,-1,14,25,26,-1,26,15,14,-1,0,14,15,-1,15,9,0,-1,13,1,11,-1,11,12,13,-1,2,17,14,-1,14,0,2,-1,12,36,34,-1,9,15,16,-1,16,10,9,-1,16,12,11,-1,11,10,16,-1,16,15,37,-1,37,35,16,-1,12,16,35,-1,35,36,12,-1,37,15,26,-1,12,34,23,-1,23,13,12,-1,13,23,24,-1,24,17,13,-1,17,24,25,-1,25,14,17,-1,21,20,19,-1,22,21,19,-1,18,22,19,-1,23,19,20,-1,20,24,23,-1,24,20,21,-1,21,25,24,-1,25,21,22,-1,22,26,25,-1,27,33,32,-1,27,32,31,-1,31,30,29,-1,31,29,28,-1,27,31,28,-1,34,18,19,-1,19,23,34,-1,35,29,30,-1,30,36,35,-1,36,30,31,-1,31,34,36,-1,34,31,32,-1,32,18,34,-1,18,32,33,-1,33,22,18,-1,22,33,27,-1,27,26,22,-1,26,27,28,-1,28,37,26,-1,37,28,29,-1,29,35,37,-1]
IndexedFaceSet1839.creaseAngle = 3.14159
IndexedFaceSet1839.texCoordIndex = [0,1,2,-1,2,3,0,-1,4,5,6,-1,6,7,4,-1,1,8,9,-1,9,2,1,-1,40,4,7,-1,7,41,40,-1,8,10,11,-1,11,9,8,-1,5,38,39,-1,39,6,5,-1,6,39,41,-1,41,7,6,-1,2,9,11,-1,11,3,2,-1,12,10,8,-1,8,13,12,-1,14,43,44,-1,44,17,14,-1,4,14,17,-1,17,5,4,-1,13,8,1,-1,1,18,13,-1,40,42,14,-1,14,4,40,-1,18,19,20,-1,5,17,45,-1,45,38,5,-1,21,18,1,-1,1,0,21,-1,45,17,46,-1,46,47,45,-1,18,21,23,-1,23,19,18,-1,46,17,44,-1,18,20,24,-1,24,13,18,-1,13,24,25,-1,25,12,13,-1,42,48,43,-1,43,14,42,-1,28,29,30,-1,27,28,30,-1,26,27,30,-1,24,30,29,-1,29,25,24,-1,25,29,28,-1,28,15,25,-1,15,28,27,-1,27,16,15,-1,31,32,33,-1,31,33,34,-1,34,35,36,-1,34,36,37,-1,31,34,37,-1,20,26,30,-1,30,24,20,-1,23,36,35,-1,35,19,23,-1,19,35,34,-1,34,20,19,-1,20,34,33,-1,33,26,20,-1,26,33,32,-1,32,27,26,-1,27,32,31,-1,31,16,27,-1,16,31,37,-1,37,22,16,-1,22,37,36,-1,36,23,22,-1]
Coordinate1840 = x3d.Coordinate()

IndexedFaceSet1839.coord = Coordinate1840
TextureCoordinate1841 = x3d.TextureCoordinate()

IndexedFaceSet1839.texCoord = TextureCoordinate1841

Shape1835.geometry = IndexedFaceSet1839

HAnimSegment1834.children.append(Shape1835)
Group1842 = x3d.Group()
Group1842.DEF = "r_carpal_proximal_phalanx_5_Sites"
"""None"""

HAnimSegment1834.children.append(Group1842)

HAnimJoint1833.children.append(HAnimSegment1834)
HAnimJoint1843 = x3d.HAnimJoint()
HAnimJoint1843.name = "r_carpal_proximal_interphalangeal_5"
HAnimJoint1843.DEF = "hanim_r_carpal_proximal_interphalangeal_5"
HAnimJoint1843.center = [-0.18130499,0.62100005,-0.037147503]
HAnimJoint1843.ulimit = [0,0,0]
HAnimJoint1843.llimit = [0,0,0]
HAnimSegment1844 = x3d.HAnimSegment()
HAnimSegment1844.name = "r_carpal_middle_phalanx_5"
HAnimSegment1844.DEF = "hanim_r_carpal_middle_phalanx_5"
Shape1845 = x3d.Shape()
Shape1845.DEF = "r_carpal_middle_phalanx_5_Shape"
Appearance1846 = x3d.Appearance()
Material1847 = x3d.Material()
Material1847.USE = "SurfaceDefault"

Appearance1846.material = Material1847
ImageTexture1848 = x3d.ImageTexture()
ImageTexture1848.USE = "JinLOA4TextureAtlas"

Appearance1846.texture = ImageTexture1848

Shape1845.appearance = Appearance1846
IndexedFaceSet1849 = x3d.IndexedFaceSet()
IndexedFaceSet1849.coordIndex = [1,7,14,-1,14,15,1,-1,8,3,14,-1,1,18,5,-1,5,7,1,-1,3,4,21,-1,21,2,3,-1,6,4,3,-1,3,8,6,-1,6,13,4,-1,0,13,5,-1,5,18,0,-1,13,0,21,-1,21,4,13,-1,2,15,14,-1,14,3,2,-1,8,11,12,-1,12,6,8,-1,7,5,9,-1,9,10,7,-1,10,9,12,-1,12,11,10,-1,8,14,10,-1,10,11,8,-1,13,6,12,-1,12,9,13,-1,9,5,13,-1,7,10,14,-1,15,2,16,-1,16,17,15,-1,18,1,19,-1,19,20,18,-1,2,21,22,-1,22,16,2,-1,0,18,20,-1,20,23,0,-1,21,0,23,-1,23,22,21,-1,1,15,17,-1,17,19,1,-1,19,17,23,-1,23,20,19,-1,16,22,23,-1,23,17,16,-1]
IndexedFaceSet1849.creaseAngle = 3.14159
IndexedFaceSet1849.texCoordIndex = [3,0,24,-1,24,25,3,-1,4,5,1,-1,3,6,7,-1,7,0,3,-1,5,8,9,-1,9,10,5,-1,11,8,5,-1,5,4,11,-1,11,12,8,-1,27,26,7,-1,7,6,27,-1,12,13,9,-1,9,8,12,-1,10,2,1,-1,1,5,10,-1,4,14,15,-1,15,11,4,-1,0,7,29,-1,29,28,0,-1,16,17,15,-1,15,14,16,-1,4,1,16,-1,16,14,4,-1,12,11,15,-1,15,17,12,-1,29,7,26,-1,0,28,24,-1,2,10,18,-1,18,19,2,-1,6,3,20,-1,20,21,6,-1,10,9,22,-1,22,18,10,-1,27,6,21,-1,21,31,27,-1,9,13,23,-1,23,22,9,-1,3,25,30,-1,30,20,3,-1,20,30,31,-1,31,21,20,-1,18,22,23,-1,23,19,18,-1]
Coordinate1850 = x3d.Coordinate()

IndexedFaceSet1849.coord = Coordinate1850
TextureCoordinate1851 = x3d.TextureCoordinate()

IndexedFaceSet1849.texCoord = TextureCoordinate1851

Shape1845.geometry = IndexedFaceSet1849

HAnimSegment1844.children.append(Shape1845)
Group1852 = x3d.Group()
Group1852.DEF = "r_carpal_middle_phalanx_5_Sites"
"""None"""

HAnimSegment1844.children.append(Group1852)

HAnimJoint1843.children.append(HAnimSegment1844)
HAnimJoint1853 = x3d.HAnimJoint()
HAnimJoint1853.name = "r_carpal_distal_interphalangeal_5"
HAnimJoint1853.DEF = "hanim_r_carpal_distal_interphalangeal_5"
HAnimJoint1853.center = [-0.18045002,0.602325,-0.0369675]
HAnimJoint1853.ulimit = [0,0,0]
HAnimJoint1853.llimit = [0,0,0]
HAnimSegment1854 = x3d.HAnimSegment()
HAnimSegment1854.name = "r_carpal_distal_phalanx_5"
HAnimSegment1854.DEF = "hanim_r_carpal_distal_phalanx_5"
Shape1855 = x3d.Shape()
Shape1855.DEF = "r_carpal_distal_phalanx_5_Shape"
Appearance1856 = x3d.Appearance()
Material1857 = x3d.Material()
Material1857.USE = "SurfaceDefault"

Appearance1856.material = Material1857
ImageTexture1858 = x3d.ImageTexture()
ImageTexture1858.USE = "JinLOA4TextureAtlas"

Appearance1856.texture = ImageTexture1858

Shape1855.appearance = Appearance1856
IndexedFaceSet1859 = x3d.IndexedFaceSet()
IndexedFaceSet1859.coordIndex = [0,31,25,-1,24,32,1,-1,1,3,2,-1,2,0,1,-1,31,5,4,-1,4,23,31,-1,0,2,5,-1,5,31,0,-1,23,4,6,-1,6,29,23,-1,32,7,3,-1,3,1,32,-1,29,6,7,-1,7,32,29,-1,2,14,17,-1,17,8,2,-1,5,11,10,-1,10,4,5,-1,2,8,11,-1,11,5,2,-1,10,21,18,-1,18,12,10,-1,7,13,9,-1,9,3,7,-1,6,12,13,-1,13,7,6,-1,8,17,19,-1,19,11,8,-1,19,21,10,-1,10,11,19,-1,25,24,1,-1,1,0,25,-1,14,20,22,-1,22,16,14,-1,15,16,22,-1,22,18,15,-1,3,9,20,-1,20,14,3,-1,14,2,3,-1,4,10,12,-1,12,6,4,-1,21,15,18,-1,14,16,19,-1,19,17,14,-1,19,16,15,-1,15,21,19,-1,9,13,22,-1,22,20,9,-1,22,13,12,-1,12,18,22,-1,25,26,27,-1,27,24,25,-1,23,29,30,-1,30,28,23,-1,28,30,27,-1,27,26,28,-1,25,31,28,-1,28,26,25,-1,32,24,27,-1,27,30,32,-1,30,29,32,-1,23,28,31,-1]
IndexedFaceSet1859.creaseAngle = 3.14159
IndexedFaceSet1859.texCoordIndex = [0,1,2,-1,3,4,5,-1,5,6,7,-1,7,0,5,-1,33,35,9,-1,9,10,33,-1,0,7,8,-1,8,1,0,-1,10,9,11,-1,11,12,10,-1,4,13,6,-1,6,5,4,-1,12,11,36,-1,36,34,12,-1,7,14,15,-1,15,16,7,-1,35,37,18,-1,18,9,35,-1,7,16,17,-1,17,8,7,-1,18,20,21,-1,21,19,18,-1,13,22,23,-1,23,6,13,-1,11,19,38,-1,38,36,11,-1,16,15,24,-1,24,17,16,-1,39,20,18,-1,18,37,39,-1,2,3,5,-1,5,0,2,-1,14,26,27,-1,27,25,14,-1,28,40,41,-1,41,21,28,-1,6,23,26,-1,26,14,6,-1,14,7,6,-1,9,18,19,-1,19,11,9,-1,20,28,21,-1,14,25,24,-1,24,15,14,-1,39,40,28,-1,28,20,39,-1,23,22,27,-1,27,26,23,-1,41,38,19,-1,19,21,41,-1,2,29,30,-1,30,3,2,-1,10,12,43,-1,43,42,10,-1,31,32,30,-1,30,29,31,-1,2,1,31,-1,31,29,2,-1,4,3,30,-1,30,32,4,-1,43,12,34,-1,10,42,33,-1]
Coordinate1860 = x3d.Coordinate()

IndexedFaceSet1859.coord = Coordinate1860
TextureCoordinate1861 = x3d.TextureCoordinate()

IndexedFaceSet1859.texCoord = TextureCoordinate1861

Shape1855.geometry = IndexedFaceSet1859

HAnimSegment1854.children.append(Shape1855)
Group1862 = x3d.Group()
Group1862.DEF = "r_carpal_distal_phalanx_5_Sites"
"""(r_carpal_distal_phalanx_5_tip -0.1938 0.7035 -0.0949)"""
HAnimSite1863 = x3d.HAnimSite()
HAnimSite1863.name = "r_carpal_distal_phalanx_5_tip"
HAnimSite1863.DEF = "hanim_r_carpal_distal_phalanx_5_tip"
HAnimSite1863.translation = [-0.172,0.58,-0.039]
TouchSensor1864 = x3d.TouchSensor()
TouchSensor1864.description = "HAnimSite r_carpal_distal_phalanx_5_tip 110"

HAnimSite1863.children.append(TouchSensor1864)
Shape1865 = x3d.Shape()
Shape1865.USE = "HAnimSiteShape"

HAnimSite1863.children.append(Shape1865)

Group1862.children.append(HAnimSite1863)

HAnimSegment1854.children.append(Group1862)

HAnimJoint1853.children.append(HAnimSegment1854)

HAnimJoint1843.children.append(HAnimJoint1853)

HAnimJoint1833.children.append(HAnimJoint1843)

HAnimJoint1820.children.append(HAnimJoint1833)

HAnimJoint1596.children.append(HAnimJoint1820)

HAnimJoint1580.children.append(HAnimJoint1596)

HAnimJoint1558.children.append(HAnimJoint1580)

HAnimJoint1536.children.append(HAnimJoint1558)

HAnimJoint1523.children.append(HAnimJoint1536)

HAnimJoint960.children.append(HAnimJoint1523)

HAnimJoint950.children.append(HAnimJoint960)

HAnimJoint940.children.append(HAnimJoint950)

HAnimJoint930.children.append(HAnimJoint940)

HAnimJoint920.children.append(HAnimJoint930)

HAnimJoint910.children.append(HAnimJoint920)

HAnimJoint900.children.append(HAnimJoint910)

HAnimJoint890.children.append(HAnimJoint900)

HAnimJoint865.children.append(HAnimJoint890)

HAnimJoint849.children.append(HAnimJoint865)

HAnimJoint839.children.append(HAnimJoint849)

HAnimJoint829.children.append(HAnimJoint839)

HAnimJoint819.children.append(HAnimJoint829)

HAnimJoint803.children.append(HAnimJoint819)

HAnimJoint793.children.append(HAnimJoint803)

HAnimJoint783.children.append(HAnimJoint793)

HAnimJoint758.children.append(HAnimJoint783)

HAnimJoint62.children.append(HAnimJoint758)

HAnimJoint52.children.append(HAnimJoint62)

HAnimHumanoid42.skeleton.append(HAnimJoint52)

Scene22.children.append(HAnimHumanoid42)
Group1866 = x3d.Group()
Group1866.DEF = "StopAnimation_loa4"
TimeSensor1867 = x3d.TimeSensor()
TimeSensor1867.DEF = "StopTimer"
TimeSensor1867.cycleInterval = 5.5
TimeSensor1867.loop = True

Group1866.children.append(TimeSensor1867)
"""indention to match Joint hierarchy"""
PositionInterpolator1868 = x3d.PositionInterpolator()
PositionInterpolator1868.DEF = "Stop_humanoid_root_TranslationInterpolator"
PositionInterpolator1868.key = [0,0.5,1]

Group1866.children.append(PositionInterpolator1868)
OrientationInterpolator1869 = x3d.OrientationInterpolator()
OrientationInterpolator1869.DEF = "Stop_humanoid_root_RotationInterpolator"
OrientationInterpolator1869.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1869)
OrientationInterpolator1870 = x3d.OrientationInterpolator()
OrientationInterpolator1870.DEF = "Stop_sacroiliac_RotationInterpolator"
OrientationInterpolator1870.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1870)
OrientationInterpolator1871 = x3d.OrientationInterpolator()
OrientationInterpolator1871.DEF = "Stop_l_hip_RotationInterpolator"
OrientationInterpolator1871.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1871)
OrientationInterpolator1872 = x3d.OrientationInterpolator()
OrientationInterpolator1872.DEF = "Stop_l_knee_RotationInterpolator"
OrientationInterpolator1872.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1872)
OrientationInterpolator1873 = x3d.OrientationInterpolator()
OrientationInterpolator1873.DEF = "Stop_l_talocrural_RotationInterpolator"
OrientationInterpolator1873.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1873)
OrientationInterpolator1874 = x3d.OrientationInterpolator()
OrientationInterpolator1874.DEF = "Stop_l_talocalcaneonavicular_RotationInterpolator"
OrientationInterpolator1874.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1874)
OrientationInterpolator1875 = x3d.OrientationInterpolator()
OrientationInterpolator1875.DEF = "Stop_l_cuneonavicular_1_RotationInterpolator"
OrientationInterpolator1875.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1875)
OrientationInterpolator1876 = x3d.OrientationInterpolator()
OrientationInterpolator1876.DEF = "Stop_l_tarsometatarsal_1_RotationInterpolator"
OrientationInterpolator1876.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1876)
OrientationInterpolator1877 = x3d.OrientationInterpolator()
OrientationInterpolator1877.DEF = "Stop_l_metatarsophalangeal_1_RotationInterpolator"
OrientationInterpolator1877.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1877)
OrientationInterpolator1878 = x3d.OrientationInterpolator()
OrientationInterpolator1878.DEF = "Stop_l_tarsal_interphalangeal_1_RotationInterpolator"
OrientationInterpolator1878.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1878)
OrientationInterpolator1879 = x3d.OrientationInterpolator()
OrientationInterpolator1879.DEF = "Stop_l_cuneonavicular_2_RotationInterpolator"
OrientationInterpolator1879.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1879)
OrientationInterpolator1880 = x3d.OrientationInterpolator()
OrientationInterpolator1880.DEF = "Stop_l_tarsometatarsal_2_RotationInterpolator"
OrientationInterpolator1880.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1880)
OrientationInterpolator1881 = x3d.OrientationInterpolator()
OrientationInterpolator1881.DEF = "Stop_l_metatarsophalangeal_2_RotationInterpolator"
OrientationInterpolator1881.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1881)
OrientationInterpolator1882 = x3d.OrientationInterpolator()
OrientationInterpolator1882.DEF = "Stop_l_tarsal_proximal_interphalangeal_2_RotationInterpolator"
OrientationInterpolator1882.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1882)
OrientationInterpolator1883 = x3d.OrientationInterpolator()
OrientationInterpolator1883.DEF = "Stop_l_tarsal_distal_interphalangeal_2_RotationInterpolator"
OrientationInterpolator1883.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1883)
OrientationInterpolator1884 = x3d.OrientationInterpolator()
OrientationInterpolator1884.DEF = "Stop_l_cuneonavicular_3_RotationInterpolator"
OrientationInterpolator1884.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1884)
OrientationInterpolator1885 = x3d.OrientationInterpolator()
OrientationInterpolator1885.DEF = "Stop_l_tarsometatarsal_3_RotationInterpolator"
OrientationInterpolator1885.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1885)
OrientationInterpolator1886 = x3d.OrientationInterpolator()
OrientationInterpolator1886.DEF = "Stop_l_metatarsophalangeal_3_RotationInterpolator"
OrientationInterpolator1886.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1886)
OrientationInterpolator1887 = x3d.OrientationInterpolator()
OrientationInterpolator1887.DEF = "Stop_l_tarsal_proximal_interphalangeal_3_RotationInterpolator"
OrientationInterpolator1887.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1887)
OrientationInterpolator1888 = x3d.OrientationInterpolator()
OrientationInterpolator1888.DEF = "Stop_l_tarsal_distal_interphalangeal_3_RotationInterpolator"
OrientationInterpolator1888.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1888)
OrientationInterpolator1889 = x3d.OrientationInterpolator()
OrientationInterpolator1889.DEF = "Stop_l_calcaneocuboid_RotationInterpolator"
OrientationInterpolator1889.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1889)
OrientationInterpolator1890 = x3d.OrientationInterpolator()
OrientationInterpolator1890.DEF = "Stop_l_transversetarsal_RotationInterpolator"
OrientationInterpolator1890.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1890)
OrientationInterpolator1891 = x3d.OrientationInterpolator()
OrientationInterpolator1891.DEF = "Stop_l_tarsometatarsal_4_RotationInterpolator"
OrientationInterpolator1891.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1891)
OrientationInterpolator1892 = x3d.OrientationInterpolator()
OrientationInterpolator1892.DEF = "Stop_l_metatarsophalangeal_4_RotationInterpolator"
OrientationInterpolator1892.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1892)
OrientationInterpolator1893 = x3d.OrientationInterpolator()
OrientationInterpolator1893.DEF = "Stop_l_tarsal_proximal_interphalangeal_4_RotationInterpolator"
OrientationInterpolator1893.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1893)
OrientationInterpolator1894 = x3d.OrientationInterpolator()
OrientationInterpolator1894.DEF = "Stop_l_tarsal_distal_interphalangeal_4_RotationInterpolator"
OrientationInterpolator1894.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1894)
OrientationInterpolator1895 = x3d.OrientationInterpolator()
OrientationInterpolator1895.DEF = "Stop_l_tarsometatarsal_5_RotationInterpolator"
OrientationInterpolator1895.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1895)
OrientationInterpolator1896 = x3d.OrientationInterpolator()
OrientationInterpolator1896.DEF = "Stop_l_metatarsophalangeal_5_RotationInterpolator"
OrientationInterpolator1896.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1896)
OrientationInterpolator1897 = x3d.OrientationInterpolator()
OrientationInterpolator1897.DEF = "Stop_l_tarsal_proximal_interphalangeal_5_RotationInterpolator"
OrientationInterpolator1897.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1897)
OrientationInterpolator1898 = x3d.OrientationInterpolator()
OrientationInterpolator1898.DEF = "Stop_l_tarsal_distal_interphalangeal_5_RotationInterpolator"
OrientationInterpolator1898.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1898)
OrientationInterpolator1899 = x3d.OrientationInterpolator()
OrientationInterpolator1899.DEF = "Stop_r_hip_RotationInterpolator"
OrientationInterpolator1899.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1899)
OrientationInterpolator1900 = x3d.OrientationInterpolator()
OrientationInterpolator1900.DEF = "Stop_r_knee_RotationInterpolator"
OrientationInterpolator1900.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1900)
OrientationInterpolator1901 = x3d.OrientationInterpolator()
OrientationInterpolator1901.DEF = "Stop_r_talocrural_RotationInterpolator"
OrientationInterpolator1901.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1901)
OrientationInterpolator1902 = x3d.OrientationInterpolator()
OrientationInterpolator1902.DEF = "Stop_r_talocalcaneonavicular_RotationInterpolator"
OrientationInterpolator1902.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1902)
OrientationInterpolator1903 = x3d.OrientationInterpolator()
OrientationInterpolator1903.DEF = "Stop_r_cuneonavicular_1_RotationInterpolator"
OrientationInterpolator1903.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1903)
OrientationInterpolator1904 = x3d.OrientationInterpolator()
OrientationInterpolator1904.DEF = "Stop_r_tarsometatarsal_1_RotationInterpolator"
OrientationInterpolator1904.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1904)
OrientationInterpolator1905 = x3d.OrientationInterpolator()
OrientationInterpolator1905.DEF = "Stop_r_metatarsophalangeal_1_RotationInterpolator"
OrientationInterpolator1905.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1905)
OrientationInterpolator1906 = x3d.OrientationInterpolator()
OrientationInterpolator1906.DEF = "Stop_r_tarsal_interphalangeal_1_RotationInterpolator"
OrientationInterpolator1906.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1906)
OrientationInterpolator1907 = x3d.OrientationInterpolator()
OrientationInterpolator1907.DEF = "Stop_r_cuneonavicular_2_RotationInterpolator"
OrientationInterpolator1907.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1907)
OrientationInterpolator1908 = x3d.OrientationInterpolator()
OrientationInterpolator1908.DEF = "Stop_r_tarsometatarsal_2_RotationInterpolator"
OrientationInterpolator1908.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1908)
OrientationInterpolator1909 = x3d.OrientationInterpolator()
OrientationInterpolator1909.DEF = "Stop_r_metatarsophalangeal_2_RotationInterpolator"
OrientationInterpolator1909.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1909)
OrientationInterpolator1910 = x3d.OrientationInterpolator()
OrientationInterpolator1910.DEF = "Stop_r_tarsal_proximal_interphalangeal_2_RotationInterpolator"
OrientationInterpolator1910.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1910)
OrientationInterpolator1911 = x3d.OrientationInterpolator()
OrientationInterpolator1911.DEF = "Stop_r_tarsal_distal_interphalangeal_2_RotationInterpolator"
OrientationInterpolator1911.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1911)
OrientationInterpolator1912 = x3d.OrientationInterpolator()
OrientationInterpolator1912.DEF = "Stop_r_cuneonavicular_3_RotationInterpolator"
OrientationInterpolator1912.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1912)
OrientationInterpolator1913 = x3d.OrientationInterpolator()
OrientationInterpolator1913.DEF = "Stop_r_tarsometatarsal_3_RotationInterpolator"
OrientationInterpolator1913.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1913)
OrientationInterpolator1914 = x3d.OrientationInterpolator()
OrientationInterpolator1914.DEF = "Stop_r_metatarsophalangeal_3_RotationInterpolator"
OrientationInterpolator1914.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1914)
OrientationInterpolator1915 = x3d.OrientationInterpolator()
OrientationInterpolator1915.DEF = "Stop_r_tarsal_proximal_interphalangeal_3_RotationInterpolator"
OrientationInterpolator1915.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1915)
OrientationInterpolator1916 = x3d.OrientationInterpolator()
OrientationInterpolator1916.DEF = "Stop_r_tarsal_distal_interphalangeal_3_RotationInterpolator"
OrientationInterpolator1916.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1916)
OrientationInterpolator1917 = x3d.OrientationInterpolator()
OrientationInterpolator1917.DEF = "Stop_r_calcaneocuboid_RotationInterpolator"
OrientationInterpolator1917.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1917)
OrientationInterpolator1918 = x3d.OrientationInterpolator()
OrientationInterpolator1918.DEF = "Stop_r_transversetarsal_RotationInterpolator"
OrientationInterpolator1918.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1918)
OrientationInterpolator1919 = x3d.OrientationInterpolator()
OrientationInterpolator1919.DEF = "Stop_r_tarsometatarsal_4_RotationInterpolator"
OrientationInterpolator1919.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1919)
OrientationInterpolator1920 = x3d.OrientationInterpolator()
OrientationInterpolator1920.DEF = "Stop_r_metatarsophalangeal_4_RotationInterpolator"
OrientationInterpolator1920.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1920)
OrientationInterpolator1921 = x3d.OrientationInterpolator()
OrientationInterpolator1921.DEF = "Stop_r_tarsal_proximal_interphalangeal_4_RotationInterpolator"
OrientationInterpolator1921.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1921)
OrientationInterpolator1922 = x3d.OrientationInterpolator()
OrientationInterpolator1922.DEF = "Stop_r_tarsal_distal_interphalangeal_4_RotationInterpolator"
OrientationInterpolator1922.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1922)
OrientationInterpolator1923 = x3d.OrientationInterpolator()
OrientationInterpolator1923.DEF = "Stop_r_tarsometatarsal_5_RotationInterpolator"
OrientationInterpolator1923.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1923)
OrientationInterpolator1924 = x3d.OrientationInterpolator()
OrientationInterpolator1924.DEF = "Stop_r_metatarsophalangeal_5_RotationInterpolator"
OrientationInterpolator1924.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1924)
OrientationInterpolator1925 = x3d.OrientationInterpolator()
OrientationInterpolator1925.DEF = "Stop_r_tarsal_proximal_interphalangeal_5_RotationInterpolator"
OrientationInterpolator1925.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1925)
OrientationInterpolator1926 = x3d.OrientationInterpolator()
OrientationInterpolator1926.DEF = "Stop_r_tarsal_distal_interphalangeal_5_RotationInterpolator"
OrientationInterpolator1926.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1926)
OrientationInterpolator1927 = x3d.OrientationInterpolator()
OrientationInterpolator1927.DEF = "Stop_vl5_RotationInterpolator"
OrientationInterpolator1927.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1927)
OrientationInterpolator1928 = x3d.OrientationInterpolator()
OrientationInterpolator1928.DEF = "Stop_vl4_RotationInterpolator"
OrientationInterpolator1928.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1928)
OrientationInterpolator1929 = x3d.OrientationInterpolator()
OrientationInterpolator1929.DEF = "Stop_vl3_RotationInterpolator"
OrientationInterpolator1929.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1929)
OrientationInterpolator1930 = x3d.OrientationInterpolator()
OrientationInterpolator1930.DEF = "Stop_vl2_RotationInterpolator"
OrientationInterpolator1930.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1930)
OrientationInterpolator1931 = x3d.OrientationInterpolator()
OrientationInterpolator1931.DEF = "Stop_vl1_RotationInterpolator"
OrientationInterpolator1931.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1931)
OrientationInterpolator1932 = x3d.OrientationInterpolator()
OrientationInterpolator1932.DEF = "Stop_vt12_RotationInterpolator"
OrientationInterpolator1932.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1932)
OrientationInterpolator1933 = x3d.OrientationInterpolator()
OrientationInterpolator1933.DEF = "Stop_vt11_RotationInterpolator"
OrientationInterpolator1933.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1933)
OrientationInterpolator1934 = x3d.OrientationInterpolator()
OrientationInterpolator1934.DEF = "Stop_vt10_RotationInterpolator"
OrientationInterpolator1934.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1934)
OrientationInterpolator1935 = x3d.OrientationInterpolator()
OrientationInterpolator1935.DEF = "Stop_vt9_RotationInterpolator"
OrientationInterpolator1935.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1935)
OrientationInterpolator1936 = x3d.OrientationInterpolator()
OrientationInterpolator1936.DEF = "Stop_vt8_RotationInterpolator"
OrientationInterpolator1936.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1936)
OrientationInterpolator1937 = x3d.OrientationInterpolator()
OrientationInterpolator1937.DEF = "Stop_vt7_RotationInterpolator"
OrientationInterpolator1937.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1937)
OrientationInterpolator1938 = x3d.OrientationInterpolator()
OrientationInterpolator1938.DEF = "Stop_vt6_RotationInterpolator"
OrientationInterpolator1938.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1938)
OrientationInterpolator1939 = x3d.OrientationInterpolator()
OrientationInterpolator1939.DEF = "Stop_vt5_RotationInterpolator"
OrientationInterpolator1939.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1939)
OrientationInterpolator1940 = x3d.OrientationInterpolator()
OrientationInterpolator1940.DEF = "Stop_vt4_RotationInterpolator"
OrientationInterpolator1940.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1940)
OrientationInterpolator1941 = x3d.OrientationInterpolator()
OrientationInterpolator1941.DEF = "Stop_vt3_RotationInterpolator"
OrientationInterpolator1941.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1941)
OrientationInterpolator1942 = x3d.OrientationInterpolator()
OrientationInterpolator1942.DEF = "Stop_vt2_RotationInterpolator"
OrientationInterpolator1942.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1942)
OrientationInterpolator1943 = x3d.OrientationInterpolator()
OrientationInterpolator1943.DEF = "Stop_vt1_RotationInterpolator"
OrientationInterpolator1943.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1943)
OrientationInterpolator1944 = x3d.OrientationInterpolator()
OrientationInterpolator1944.DEF = "Stop_vc7_RotationInterpolator"
OrientationInterpolator1944.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1944)
OrientationInterpolator1945 = x3d.OrientationInterpolator()
OrientationInterpolator1945.DEF = "Stop_vc6_RotationInterpolator"
OrientationInterpolator1945.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1945)
OrientationInterpolator1946 = x3d.OrientationInterpolator()
OrientationInterpolator1946.DEF = "Stop_vc5_RotationInterpolator"
OrientationInterpolator1946.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1946)
OrientationInterpolator1947 = x3d.OrientationInterpolator()
OrientationInterpolator1947.DEF = "Stop_vc4_RotationInterpolator"
OrientationInterpolator1947.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1947)
OrientationInterpolator1948 = x3d.OrientationInterpolator()
OrientationInterpolator1948.DEF = "Stop_vc3_RotationInterpolator"
OrientationInterpolator1948.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1948)
OrientationInterpolator1949 = x3d.OrientationInterpolator()
OrientationInterpolator1949.DEF = "Stop_vc2_RotationInterpolator"
OrientationInterpolator1949.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1949)
OrientationInterpolator1950 = x3d.OrientationInterpolator()
OrientationInterpolator1950.DEF = "Stop_vc1_RotationInterpolator"
OrientationInterpolator1950.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1950)
OrientationInterpolator1951 = x3d.OrientationInterpolator()
OrientationInterpolator1951.DEF = "Stop_skullbase_RotationInterpolator"
OrientationInterpolator1951.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1951)
OrientationInterpolator1952 = x3d.OrientationInterpolator()
OrientationInterpolator1952.DEF = "Stop_l_eyelid_joint_RotationInterpolator"
OrientationInterpolator1952.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1952)
OrientationInterpolator1953 = x3d.OrientationInterpolator()
OrientationInterpolator1953.DEF = "Stop_r_eyelid_joint_RotationInterpolator"
OrientationInterpolator1953.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1953)
OrientationInterpolator1954 = x3d.OrientationInterpolator()
OrientationInterpolator1954.DEF = "Stop_l_eyeball_joint_RotationInterpolator"
OrientationInterpolator1954.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1954)
OrientationInterpolator1955 = x3d.OrientationInterpolator()
OrientationInterpolator1955.DEF = "Stop_r_eyeball_joint_RotationInterpolator"
OrientationInterpolator1955.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1955)
OrientationInterpolator1956 = x3d.OrientationInterpolator()
OrientationInterpolator1956.DEF = "Stop_l_eyebrow_joint_RotationInterpolator"
OrientationInterpolator1956.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1956)
OrientationInterpolator1957 = x3d.OrientationInterpolator()
OrientationInterpolator1957.DEF = "Stop_r_eyebrow_joint_RotationInterpolator"
OrientationInterpolator1957.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1957)
OrientationInterpolator1958 = x3d.OrientationInterpolator()
OrientationInterpolator1958.DEF = "Stop_temporomandibular_RotationInterpolator"
OrientationInterpolator1958.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1958)
OrientationInterpolator1959 = x3d.OrientationInterpolator()
OrientationInterpolator1959.DEF = "Stop_l_sternoclavicular_RotationInterpolator"
OrientationInterpolator1959.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1959)
OrientationInterpolator1960 = x3d.OrientationInterpolator()
OrientationInterpolator1960.DEF = "Stop_l_acromioclavicular_RotationInterpolator"
OrientationInterpolator1960.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1960)
OrientationInterpolator1961 = x3d.OrientationInterpolator()
OrientationInterpolator1961.DEF = "Stop_l_shoulder_RotationInterpolator"
OrientationInterpolator1961.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1961)
OrientationInterpolator1962 = x3d.OrientationInterpolator()
OrientationInterpolator1962.DEF = "Stop_l_elbow_RotationInterpolator"
OrientationInterpolator1962.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1962)
OrientationInterpolator1963 = x3d.OrientationInterpolator()
OrientationInterpolator1963.DEF = "Stop_l_radiocarpal_RotationInterpolator"
OrientationInterpolator1963.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1963)
OrientationInterpolator1964 = x3d.OrientationInterpolator()
OrientationInterpolator1964.DEF = "Stop_l_midcarpal_1_RotationInterpolator"
OrientationInterpolator1964.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1964)
OrientationInterpolator1965 = x3d.OrientationInterpolator()
OrientationInterpolator1965.DEF = "Stop_l_carpometacarpal_1_RotationInterpolator"
OrientationInterpolator1965.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1965)
OrientationInterpolator1966 = x3d.OrientationInterpolator()
OrientationInterpolator1966.DEF = "Stop_l_metacarpophalangeal_1_RotationInterpolator"
OrientationInterpolator1966.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1966)
OrientationInterpolator1967 = x3d.OrientationInterpolator()
OrientationInterpolator1967.DEF = "Stop_l_carpal_interphalangeal_1_RotationInterpolator"
OrientationInterpolator1967.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1967)
OrientationInterpolator1968 = x3d.OrientationInterpolator()
OrientationInterpolator1968.DEF = "Stop_l_midcarpal_2_RotationInterpolator"
OrientationInterpolator1968.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1968)
OrientationInterpolator1969 = x3d.OrientationInterpolator()
OrientationInterpolator1969.DEF = "Stop_l_carpometacarpal_2_RotationInterpolator"
OrientationInterpolator1969.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1969)
OrientationInterpolator1970 = x3d.OrientationInterpolator()
OrientationInterpolator1970.DEF = "Stop_l_metacarpophalangeal_2_RotationInterpolator"
OrientationInterpolator1970.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1970)
OrientationInterpolator1971 = x3d.OrientationInterpolator()
OrientationInterpolator1971.DEF = "Stop_l_carpal_proximal_interphalangeal_2_RotationInterpolator"
OrientationInterpolator1971.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1971)
OrientationInterpolator1972 = x3d.OrientationInterpolator()
OrientationInterpolator1972.DEF = "Stop_l_carpal_distal_interphalangeal_2_RotationInterpolator"
OrientationInterpolator1972.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1972)
OrientationInterpolator1973 = x3d.OrientationInterpolator()
OrientationInterpolator1973.DEF = "Stop_l_midcarpal_3_RotationInterpolator"
OrientationInterpolator1973.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1973)
OrientationInterpolator1974 = x3d.OrientationInterpolator()
OrientationInterpolator1974.DEF = "Stop_l_carpometacarpal_3_RotationInterpolator"
OrientationInterpolator1974.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1974)
OrientationInterpolator1975 = x3d.OrientationInterpolator()
OrientationInterpolator1975.DEF = "Stop_l_metacarpophalangeal_3_RotationInterpolator"
OrientationInterpolator1975.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1975)
OrientationInterpolator1976 = x3d.OrientationInterpolator()
OrientationInterpolator1976.DEF = "Stop_l_carpal_proximal_interphalangeal_3_RotationInterpolator"
OrientationInterpolator1976.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1976)
OrientationInterpolator1977 = x3d.OrientationInterpolator()
OrientationInterpolator1977.DEF = "Stop_l_carpal_distal_interphalangeal_3_RotationInterpolator"
OrientationInterpolator1977.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1977)
OrientationInterpolator1978 = x3d.OrientationInterpolator()
OrientationInterpolator1978.DEF = "Stop_l_midcarpal_4_5_RotationInterpolator"
OrientationInterpolator1978.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1978)
OrientationInterpolator1979 = x3d.OrientationInterpolator()
OrientationInterpolator1979.DEF = "Stop_l_carpometacarpal_4_RotationInterpolator"
OrientationInterpolator1979.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1979)
OrientationInterpolator1980 = x3d.OrientationInterpolator()
OrientationInterpolator1980.DEF = "Stop_l_metacarpophalangeal_4_RotationInterpolator"
OrientationInterpolator1980.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1980)
OrientationInterpolator1981 = x3d.OrientationInterpolator()
OrientationInterpolator1981.DEF = "Stop_l_carpal_proximal_interphalangeal_4_RotationInterpolator"
OrientationInterpolator1981.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1981)
OrientationInterpolator1982 = x3d.OrientationInterpolator()
OrientationInterpolator1982.DEF = "Stop_l_carpal_distal_interphalangeal_4_RotationInterpolator"
OrientationInterpolator1982.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1982)
OrientationInterpolator1983 = x3d.OrientationInterpolator()
OrientationInterpolator1983.DEF = "Stop_l_carpometacarpal_5_RotationInterpolator"
OrientationInterpolator1983.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1983)
OrientationInterpolator1984 = x3d.OrientationInterpolator()
OrientationInterpolator1984.DEF = "Stop_l_metacarpophalangeal_5_RotationInterpolator"
OrientationInterpolator1984.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1984)
OrientationInterpolator1985 = x3d.OrientationInterpolator()
OrientationInterpolator1985.DEF = "Stop_l_carpal_proximal_interphalangeal_5_RotationInterpolator"
OrientationInterpolator1985.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1985)
OrientationInterpolator1986 = x3d.OrientationInterpolator()
OrientationInterpolator1986.DEF = "Stop_l_carpal_distal_interphalangeal_5_RotationInterpolator"
OrientationInterpolator1986.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1986)
OrientationInterpolator1987 = x3d.OrientationInterpolator()
OrientationInterpolator1987.DEF = "Stop_r_sternoclavicular_RotationInterpolator"
OrientationInterpolator1987.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1987)
OrientationInterpolator1988 = x3d.OrientationInterpolator()
OrientationInterpolator1988.DEF = "Stop_r_acromioclavicular_RotationInterpolator"
OrientationInterpolator1988.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1988)
OrientationInterpolator1989 = x3d.OrientationInterpolator()
OrientationInterpolator1989.DEF = "Stop_r_shoulder_RotationInterpolator"
OrientationInterpolator1989.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1989)
OrientationInterpolator1990 = x3d.OrientationInterpolator()
OrientationInterpolator1990.DEF = "Stop_r_elbow_RotationInterpolator"
OrientationInterpolator1990.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1990)
OrientationInterpolator1991 = x3d.OrientationInterpolator()
OrientationInterpolator1991.DEF = "Stop_r_radiocarpal_RotationInterpolator"
OrientationInterpolator1991.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1991)
OrientationInterpolator1992 = x3d.OrientationInterpolator()
OrientationInterpolator1992.DEF = "Stop_r_midcarpal_1_RotationInterpolator"
OrientationInterpolator1992.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1992)
OrientationInterpolator1993 = x3d.OrientationInterpolator()
OrientationInterpolator1993.DEF = "Stop_r_carpometacarpal_1_RotationInterpolator"
OrientationInterpolator1993.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1993)
OrientationInterpolator1994 = x3d.OrientationInterpolator()
OrientationInterpolator1994.DEF = "Stop_r_metacarpophalangeal_1_RotationInterpolator"
OrientationInterpolator1994.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1994)
OrientationInterpolator1995 = x3d.OrientationInterpolator()
OrientationInterpolator1995.DEF = "Stop_r_carpal_interphalangeal_1_RotationInterpolator"
OrientationInterpolator1995.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1995)
OrientationInterpolator1996 = x3d.OrientationInterpolator()
OrientationInterpolator1996.DEF = "Stop_r_midcarpal_2_RotationInterpolator"
OrientationInterpolator1996.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1996)
OrientationInterpolator1997 = x3d.OrientationInterpolator()
OrientationInterpolator1997.DEF = "Stop_r_carpometacarpal_2_RotationInterpolator"
OrientationInterpolator1997.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1997)
OrientationInterpolator1998 = x3d.OrientationInterpolator()
OrientationInterpolator1998.DEF = "Stop_r_metacarpophalangeal_2_RotationInterpolator"
OrientationInterpolator1998.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1998)
OrientationInterpolator1999 = x3d.OrientationInterpolator()
OrientationInterpolator1999.DEF = "Stop_r_carpal_proximal_interphalangeal_2_RotationInterpolator"
OrientationInterpolator1999.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator1999)
OrientationInterpolator2000 = x3d.OrientationInterpolator()
OrientationInterpolator2000.DEF = "Stop_r_carpal_distal_interphalangeal_2_RotationInterpolator"
OrientationInterpolator2000.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator2000)
OrientationInterpolator2001 = x3d.OrientationInterpolator()
OrientationInterpolator2001.DEF = "Stop_r_midcarpal_3_RotationInterpolator"
OrientationInterpolator2001.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator2001)
OrientationInterpolator2002 = x3d.OrientationInterpolator()
OrientationInterpolator2002.DEF = "Stop_r_carpometacarpal_3_RotationInterpolator"
OrientationInterpolator2002.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator2002)
OrientationInterpolator2003 = x3d.OrientationInterpolator()
OrientationInterpolator2003.DEF = "Stop_r_metacarpophalangeal_3_RotationInterpolator"
OrientationInterpolator2003.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator2003)
OrientationInterpolator2004 = x3d.OrientationInterpolator()
OrientationInterpolator2004.DEF = "Stop_r_carpal_proximal_interphalangeal_3_RotationInterpolator"
OrientationInterpolator2004.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator2004)
OrientationInterpolator2005 = x3d.OrientationInterpolator()
OrientationInterpolator2005.DEF = "Stop_r_carpal_distal_interphalangeal_3_RotationInterpolator"
OrientationInterpolator2005.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator2005)
OrientationInterpolator2006 = x3d.OrientationInterpolator()
OrientationInterpolator2006.DEF = "Stop_r_midcarpal_4_5_RotationInterpolator"
OrientationInterpolator2006.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator2006)
OrientationInterpolator2007 = x3d.OrientationInterpolator()
OrientationInterpolator2007.DEF = "Stop_r_carpometacarpal_4_RotationInterpolator"
OrientationInterpolator2007.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator2007)
OrientationInterpolator2008 = x3d.OrientationInterpolator()
OrientationInterpolator2008.DEF = "Stop_r_metacarpophalangeal_4_RotationInterpolator"
OrientationInterpolator2008.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator2008)
OrientationInterpolator2009 = x3d.OrientationInterpolator()
OrientationInterpolator2009.DEF = "Stop_r_carpal_proximal_interphalangeal_4_RotationInterpolator"
OrientationInterpolator2009.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator2009)
OrientationInterpolator2010 = x3d.OrientationInterpolator()
OrientationInterpolator2010.DEF = "Stop_r_carpal_distal_interphalangeal_4_RotationInterpolator"
OrientationInterpolator2010.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator2010)
OrientationInterpolator2011 = x3d.OrientationInterpolator()
OrientationInterpolator2011.DEF = "Stop_r_carpometacarpal_5_RotationInterpolator"
OrientationInterpolator2011.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator2011)
OrientationInterpolator2012 = x3d.OrientationInterpolator()
OrientationInterpolator2012.DEF = "Stop_r_metacarpophalangeal_5_RotationInterpolator"
OrientationInterpolator2012.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator2012)
OrientationInterpolator2013 = x3d.OrientationInterpolator()
OrientationInterpolator2013.DEF = "Stop_r_carpal_proximal_interphalangeal_5_RotationInterpolator"
OrientationInterpolator2013.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator2013)
OrientationInterpolator2014 = x3d.OrientationInterpolator()
OrientationInterpolator2014.DEF = "Stop_r_carpal_distal_interphalangeal_5_RotationInterpolator"
OrientationInterpolator2014.key = [0,0.5,1]

Group1866.children.append(OrientationInterpolator2014)
ROUTE2015 = x3d.ROUTE()
ROUTE2015.fromField = "fraction_changed"
ROUTE2015.fromNode = "StopTimer"
ROUTE2015.toField = "set_fraction"
ROUTE2015.toNode = "Stop_humanoid_root_TranslationInterpolator"

Group1866.children.append(ROUTE2015)
ROUTE2016 = x3d.ROUTE()
ROUTE2016.fromField = "fraction_changed"
ROUTE2016.fromNode = "StopTimer"
ROUTE2016.toField = "set_fraction"
ROUTE2016.toNode = "Stop_humanoid_root_RotationInterpolator"

Group1866.children.append(ROUTE2016)
ROUTE2017 = x3d.ROUTE()
ROUTE2017.fromField = "fraction_changed"
ROUTE2017.fromNode = "StopTimer"
ROUTE2017.toField = "set_fraction"
ROUTE2017.toNode = "Stop_sacroiliac_RotationInterpolator"

Group1866.children.append(ROUTE2017)
ROUTE2018 = x3d.ROUTE()
ROUTE2018.fromField = "fraction_changed"
ROUTE2018.fromNode = "StopTimer"
ROUTE2018.toField = "set_fraction"
ROUTE2018.toNode = "Stop_l_hip_RotationInterpolator"

Group1866.children.append(ROUTE2018)
ROUTE2019 = x3d.ROUTE()
ROUTE2019.fromField = "fraction_changed"
ROUTE2019.fromNode = "StopTimer"
ROUTE2019.toField = "set_fraction"
ROUTE2019.toNode = "Stop_l_knee_RotationInterpolator"

Group1866.children.append(ROUTE2019)
ROUTE2020 = x3d.ROUTE()
ROUTE2020.fromField = "fraction_changed"
ROUTE2020.fromNode = "StopTimer"
ROUTE2020.toField = "set_fraction"
ROUTE2020.toNode = "Stop_l_talocrural_RotationInterpolator"

Group1866.children.append(ROUTE2020)
ROUTE2021 = x3d.ROUTE()
ROUTE2021.fromField = "fraction_changed"
ROUTE2021.fromNode = "StopTimer"
ROUTE2021.toField = "set_fraction"
ROUTE2021.toNode = "Stop_l_talocalcaneonavicular_RotationInterpolator"

Group1866.children.append(ROUTE2021)
ROUTE2022 = x3d.ROUTE()
ROUTE2022.fromField = "fraction_changed"
ROUTE2022.fromNode = "StopTimer"
ROUTE2022.toField = "set_fraction"
ROUTE2022.toNode = "Stop_l_cuneonavicular_1_RotationInterpolator"

Group1866.children.append(ROUTE2022)
ROUTE2023 = x3d.ROUTE()
ROUTE2023.fromField = "fraction_changed"
ROUTE2023.fromNode = "StopTimer"
ROUTE2023.toField = "set_fraction"
ROUTE2023.toNode = "Stop_l_tarsometatarsal_1_RotationInterpolator"

Group1866.children.append(ROUTE2023)
ROUTE2024 = x3d.ROUTE()
ROUTE2024.fromField = "fraction_changed"
ROUTE2024.fromNode = "StopTimer"
ROUTE2024.toField = "set_fraction"
ROUTE2024.toNode = "Stop_l_metatarsophalangeal_1_RotationInterpolator"

Group1866.children.append(ROUTE2024)
ROUTE2025 = x3d.ROUTE()
ROUTE2025.fromField = "fraction_changed"
ROUTE2025.fromNode = "StopTimer"
ROUTE2025.toField = "set_fraction"
ROUTE2025.toNode = "Stop_l_tarsal_interphalangeal_1_RotationInterpolator"

Group1866.children.append(ROUTE2025)
ROUTE2026 = x3d.ROUTE()
ROUTE2026.fromField = "fraction_changed"
ROUTE2026.fromNode = "StopTimer"
ROUTE2026.toField = "set_fraction"
ROUTE2026.toNode = "Stop_l_cuneonavicular_2_RotationInterpolator"

Group1866.children.append(ROUTE2026)
ROUTE2027 = x3d.ROUTE()
ROUTE2027.fromField = "fraction_changed"
ROUTE2027.fromNode = "StopTimer"
ROUTE2027.toField = "set_fraction"
ROUTE2027.toNode = "Stop_l_tarsometatarsal_2_RotationInterpolator"

Group1866.children.append(ROUTE2027)
ROUTE2028 = x3d.ROUTE()
ROUTE2028.fromField = "fraction_changed"
ROUTE2028.fromNode = "StopTimer"
ROUTE2028.toField = "set_fraction"
ROUTE2028.toNode = "Stop_l_metatarsophalangeal_2_RotationInterpolator"

Group1866.children.append(ROUTE2028)
ROUTE2029 = x3d.ROUTE()
ROUTE2029.fromField = "fraction_changed"
ROUTE2029.fromNode = "StopTimer"
ROUTE2029.toField = "set_fraction"
ROUTE2029.toNode = "Stop_l_tarsal_proximal_interphalangeal_2_RotationInterpolator"

Group1866.children.append(ROUTE2029)
ROUTE2030 = x3d.ROUTE()
ROUTE2030.fromField = "fraction_changed"
ROUTE2030.fromNode = "StopTimer"
ROUTE2030.toField = "set_fraction"
ROUTE2030.toNode = "Stop_l_tarsal_distal_interphalangeal_2_RotationInterpolator"

Group1866.children.append(ROUTE2030)
ROUTE2031 = x3d.ROUTE()
ROUTE2031.fromField = "fraction_changed"
ROUTE2031.fromNode = "StopTimer"
ROUTE2031.toField = "set_fraction"
ROUTE2031.toNode = "Stop_l_cuneonavicular_3_RotationInterpolator"

Group1866.children.append(ROUTE2031)
ROUTE2032 = x3d.ROUTE()
ROUTE2032.fromField = "fraction_changed"
ROUTE2032.fromNode = "StopTimer"
ROUTE2032.toField = "set_fraction"
ROUTE2032.toNode = "Stop_l_tarsometatarsal_3_RotationInterpolator"

Group1866.children.append(ROUTE2032)
ROUTE2033 = x3d.ROUTE()
ROUTE2033.fromField = "fraction_changed"
ROUTE2033.fromNode = "StopTimer"
ROUTE2033.toField = "set_fraction"
ROUTE2033.toNode = "Stop_l_metatarsophalangeal_3_RotationInterpolator"

Group1866.children.append(ROUTE2033)
ROUTE2034 = x3d.ROUTE()
ROUTE2034.fromField = "fraction_changed"
ROUTE2034.fromNode = "StopTimer"
ROUTE2034.toField = "set_fraction"
ROUTE2034.toNode = "Stop_l_tarsal_proximal_interphalangeal_3_RotationInterpolator"

Group1866.children.append(ROUTE2034)
ROUTE2035 = x3d.ROUTE()
ROUTE2035.fromField = "fraction_changed"
ROUTE2035.fromNode = "StopTimer"
ROUTE2035.toField = "set_fraction"
ROUTE2035.toNode = "Stop_l_tarsal_distal_interphalangeal_3_RotationInterpolator"

Group1866.children.append(ROUTE2035)
ROUTE2036 = x3d.ROUTE()
ROUTE2036.fromField = "fraction_changed"
ROUTE2036.fromNode = "StopTimer"
ROUTE2036.toField = "set_fraction"
ROUTE2036.toNode = "Stop_l_calcaneocuboid_RotationInterpolator"

Group1866.children.append(ROUTE2036)
ROUTE2037 = x3d.ROUTE()
ROUTE2037.fromField = "fraction_changed"
ROUTE2037.fromNode = "StopTimer"
ROUTE2037.toField = "set_fraction"
ROUTE2037.toNode = "Stop_l_transversetarsal_RotationInterpolator"

Group1866.children.append(ROUTE2037)
ROUTE2038 = x3d.ROUTE()
ROUTE2038.fromField = "fraction_changed"
ROUTE2038.fromNode = "StopTimer"
ROUTE2038.toField = "set_fraction"
ROUTE2038.toNode = "Stop_l_tarsometatarsal_4_RotationInterpolator"

Group1866.children.append(ROUTE2038)
ROUTE2039 = x3d.ROUTE()
ROUTE2039.fromField = "fraction_changed"
ROUTE2039.fromNode = "StopTimer"
ROUTE2039.toField = "set_fraction"
ROUTE2039.toNode = "Stop_l_metatarsophalangeal_4_RotationInterpolator"

Group1866.children.append(ROUTE2039)
ROUTE2040 = x3d.ROUTE()
ROUTE2040.fromField = "fraction_changed"
ROUTE2040.fromNode = "StopTimer"
ROUTE2040.toField = "set_fraction"
ROUTE2040.toNode = "Stop_l_tarsal_proximal_interphalangeal_4_RotationInterpolator"

Group1866.children.append(ROUTE2040)
ROUTE2041 = x3d.ROUTE()
ROUTE2041.fromField = "fraction_changed"
ROUTE2041.fromNode = "StopTimer"
ROUTE2041.toField = "set_fraction"
ROUTE2041.toNode = "Stop_l_tarsal_distal_interphalangeal_4_RotationInterpolator"

Group1866.children.append(ROUTE2041)
ROUTE2042 = x3d.ROUTE()
ROUTE2042.fromField = "fraction_changed"
ROUTE2042.fromNode = "StopTimer"
ROUTE2042.toField = "set_fraction"
ROUTE2042.toNode = "Stop_l_tarsometatarsal_5_RotationInterpolator"

Group1866.children.append(ROUTE2042)
ROUTE2043 = x3d.ROUTE()
ROUTE2043.fromField = "fraction_changed"
ROUTE2043.fromNode = "StopTimer"
ROUTE2043.toField = "set_fraction"
ROUTE2043.toNode = "Stop_l_metatarsophalangeal_5_RotationInterpolator"

Group1866.children.append(ROUTE2043)
ROUTE2044 = x3d.ROUTE()
ROUTE2044.fromField = "fraction_changed"
ROUTE2044.fromNode = "StopTimer"
ROUTE2044.toField = "set_fraction"
ROUTE2044.toNode = "Stop_l_tarsal_proximal_interphalangeal_5_RotationInterpolator"

Group1866.children.append(ROUTE2044)
ROUTE2045 = x3d.ROUTE()
ROUTE2045.fromField = "fraction_changed"
ROUTE2045.fromNode = "StopTimer"
ROUTE2045.toField = "set_fraction"
ROUTE2045.toNode = "Stop_l_tarsal_distal_interphalangeal_5_RotationInterpolator"

Group1866.children.append(ROUTE2045)
ROUTE2046 = x3d.ROUTE()
ROUTE2046.fromField = "fraction_changed"
ROUTE2046.fromNode = "StopTimer"
ROUTE2046.toField = "set_fraction"
ROUTE2046.toNode = "Stop_r_hip_RotationInterpolator"

Group1866.children.append(ROUTE2046)
ROUTE2047 = x3d.ROUTE()
ROUTE2047.fromField = "fraction_changed"
ROUTE2047.fromNode = "StopTimer"
ROUTE2047.toField = "set_fraction"
ROUTE2047.toNode = "Stop_r_knee_RotationInterpolator"

Group1866.children.append(ROUTE2047)
ROUTE2048 = x3d.ROUTE()
ROUTE2048.fromField = "fraction_changed"
ROUTE2048.fromNode = "StopTimer"
ROUTE2048.toField = "set_fraction"
ROUTE2048.toNode = "Stop_r_talocrural_RotationInterpolator"

Group1866.children.append(ROUTE2048)
ROUTE2049 = x3d.ROUTE()
ROUTE2049.fromField = "fraction_changed"
ROUTE2049.fromNode = "StopTimer"
ROUTE2049.toField = "set_fraction"
ROUTE2049.toNode = "Stop_r_talocalcaneonavicular_RotationInterpolator"

Group1866.children.append(ROUTE2049)
ROUTE2050 = x3d.ROUTE()
ROUTE2050.fromField = "fraction_changed"
ROUTE2050.fromNode = "StopTimer"
ROUTE2050.toField = "set_fraction"
ROUTE2050.toNode = "Stop_r_cuneonavicular_1_RotationInterpolator"

Group1866.children.append(ROUTE2050)
ROUTE2051 = x3d.ROUTE()
ROUTE2051.fromField = "fraction_changed"
ROUTE2051.fromNode = "StopTimer"
ROUTE2051.toField = "set_fraction"
ROUTE2051.toNode = "Stop_r_tarsometatarsal_1_RotationInterpolator"

Group1866.children.append(ROUTE2051)
ROUTE2052 = x3d.ROUTE()
ROUTE2052.fromField = "fraction_changed"
ROUTE2052.fromNode = "StopTimer"
ROUTE2052.toField = "set_fraction"
ROUTE2052.toNode = "Stop_r_metatarsophalangeal_1_RotationInterpolator"

Group1866.children.append(ROUTE2052)
ROUTE2053 = x3d.ROUTE()
ROUTE2053.fromField = "fraction_changed"
ROUTE2053.fromNode = "StopTimer"
ROUTE2053.toField = "set_fraction"
ROUTE2053.toNode = "Stop_r_tarsal_interphalangeal_1_RotationInterpolator"

Group1866.children.append(ROUTE2053)
ROUTE2054 = x3d.ROUTE()
ROUTE2054.fromField = "fraction_changed"
ROUTE2054.fromNode = "StopTimer"
ROUTE2054.toField = "set_fraction"
ROUTE2054.toNode = "Stop_r_cuneonavicular_2_RotationInterpolator"

Group1866.children.append(ROUTE2054)
ROUTE2055 = x3d.ROUTE()
ROUTE2055.fromField = "fraction_changed"
ROUTE2055.fromNode = "StopTimer"
ROUTE2055.toField = "set_fraction"
ROUTE2055.toNode = "Stop_r_tarsometatarsal_2_RotationInterpolator"

Group1866.children.append(ROUTE2055)
ROUTE2056 = x3d.ROUTE()
ROUTE2056.fromField = "fraction_changed"
ROUTE2056.fromNode = "StopTimer"
ROUTE2056.toField = "set_fraction"
ROUTE2056.toNode = "Stop_r_metatarsophalangeal_2_RotationInterpolator"

Group1866.children.append(ROUTE2056)
ROUTE2057 = x3d.ROUTE()
ROUTE2057.fromField = "fraction_changed"
ROUTE2057.fromNode = "StopTimer"
ROUTE2057.toField = "set_fraction"
ROUTE2057.toNode = "Stop_r_tarsal_proximal_interphalangeal_2_RotationInterpolator"

Group1866.children.append(ROUTE2057)
ROUTE2058 = x3d.ROUTE()
ROUTE2058.fromField = "fraction_changed"
ROUTE2058.fromNode = "StopTimer"
ROUTE2058.toField = "set_fraction"
ROUTE2058.toNode = "Stop_r_tarsal_distal_interphalangeal_2_RotationInterpolator"

Group1866.children.append(ROUTE2058)
ROUTE2059 = x3d.ROUTE()
ROUTE2059.fromField = "fraction_changed"
ROUTE2059.fromNode = "StopTimer"
ROUTE2059.toField = "set_fraction"
ROUTE2059.toNode = "Stop_r_cuneonavicular_3_RotationInterpolator"

Group1866.children.append(ROUTE2059)
ROUTE2060 = x3d.ROUTE()
ROUTE2060.fromField = "fraction_changed"
ROUTE2060.fromNode = "StopTimer"
ROUTE2060.toField = "set_fraction"
ROUTE2060.toNode = "Stop_r_tarsometatarsal_3_RotationInterpolator"

Group1866.children.append(ROUTE2060)
ROUTE2061 = x3d.ROUTE()
ROUTE2061.fromField = "fraction_changed"
ROUTE2061.fromNode = "StopTimer"
ROUTE2061.toField = "set_fraction"
ROUTE2061.toNode = "Stop_r_metatarsophalangeal_3_RotationInterpolator"

Group1866.children.append(ROUTE2061)
ROUTE2062 = x3d.ROUTE()
ROUTE2062.fromField = "fraction_changed"
ROUTE2062.fromNode = "StopTimer"
ROUTE2062.toField = "set_fraction"
ROUTE2062.toNode = "Stop_r_tarsal_proximal_interphalangeal_3_RotationInterpolator"

Group1866.children.append(ROUTE2062)
ROUTE2063 = x3d.ROUTE()
ROUTE2063.fromField = "fraction_changed"
ROUTE2063.fromNode = "StopTimer"
ROUTE2063.toField = "set_fraction"
ROUTE2063.toNode = "Stop_r_tarsal_distal_interphalangeal_3_RotationInterpolator"

Group1866.children.append(ROUTE2063)
ROUTE2064 = x3d.ROUTE()
ROUTE2064.fromField = "fraction_changed"
ROUTE2064.fromNode = "StopTimer"
ROUTE2064.toField = "set_fraction"
ROUTE2064.toNode = "Stop_r_calcaneocuboid_RotationInterpolator"

Group1866.children.append(ROUTE2064)
ROUTE2065 = x3d.ROUTE()
ROUTE2065.fromField = "fraction_changed"
ROUTE2065.fromNode = "StopTimer"
ROUTE2065.toField = "set_fraction"
ROUTE2065.toNode = "Stop_r_transversetarsal_RotationInterpolator"

Group1866.children.append(ROUTE2065)
ROUTE2066 = x3d.ROUTE()
ROUTE2066.fromField = "fraction_changed"
ROUTE2066.fromNode = "StopTimer"
ROUTE2066.toField = "set_fraction"
ROUTE2066.toNode = "Stop_r_tarsometatarsal_4_RotationInterpolator"

Group1866.children.append(ROUTE2066)
ROUTE2067 = x3d.ROUTE()
ROUTE2067.fromField = "fraction_changed"
ROUTE2067.fromNode = "StopTimer"
ROUTE2067.toField = "set_fraction"
ROUTE2067.toNode = "Stop_r_metatarsophalangeal_4_RotationInterpolator"

Group1866.children.append(ROUTE2067)
ROUTE2068 = x3d.ROUTE()
ROUTE2068.fromField = "fraction_changed"
ROUTE2068.fromNode = "StopTimer"
ROUTE2068.toField = "set_fraction"
ROUTE2068.toNode = "Stop_r_tarsal_proximal_interphalangeal_4_RotationInterpolator"

Group1866.children.append(ROUTE2068)
ROUTE2069 = x3d.ROUTE()
ROUTE2069.fromField = "fraction_changed"
ROUTE2069.fromNode = "StopTimer"
ROUTE2069.toField = "set_fraction"
ROUTE2069.toNode = "Stop_r_tarsal_distal_interphalangeal_4_RotationInterpolator"

Group1866.children.append(ROUTE2069)
ROUTE2070 = x3d.ROUTE()
ROUTE2070.fromField = "fraction_changed"
ROUTE2070.fromNode = "StopTimer"
ROUTE2070.toField = "set_fraction"
ROUTE2070.toNode = "Stop_r_tarsometatarsal_5_RotationInterpolator"

Group1866.children.append(ROUTE2070)
ROUTE2071 = x3d.ROUTE()
ROUTE2071.fromField = "fraction_changed"
ROUTE2071.fromNode = "StopTimer"
ROUTE2071.toField = "set_fraction"
ROUTE2071.toNode = "Stop_r_metatarsophalangeal_5_RotationInterpolator"

Group1866.children.append(ROUTE2071)
ROUTE2072 = x3d.ROUTE()
ROUTE2072.fromField = "fraction_changed"
ROUTE2072.fromNode = "StopTimer"
ROUTE2072.toField = "set_fraction"
ROUTE2072.toNode = "Stop_r_tarsal_proximal_interphalangeal_5_RotationInterpolator"

Group1866.children.append(ROUTE2072)
ROUTE2073 = x3d.ROUTE()
ROUTE2073.fromField = "fraction_changed"
ROUTE2073.fromNode = "StopTimer"
ROUTE2073.toField = "set_fraction"
ROUTE2073.toNode = "Stop_r_tarsal_distal_interphalangeal_5_RotationInterpolator"

Group1866.children.append(ROUTE2073)
ROUTE2074 = x3d.ROUTE()
ROUTE2074.fromField = "fraction_changed"
ROUTE2074.fromNode = "StopTimer"
ROUTE2074.toField = "set_fraction"
ROUTE2074.toNode = "Stop_vl5_RotationInterpolator"

Group1866.children.append(ROUTE2074)
ROUTE2075 = x3d.ROUTE()
ROUTE2075.fromField = "fraction_changed"
ROUTE2075.fromNode = "StopTimer"
ROUTE2075.toField = "set_fraction"
ROUTE2075.toNode = "Stop_vl4_RotationInterpolator"

Group1866.children.append(ROUTE2075)
ROUTE2076 = x3d.ROUTE()
ROUTE2076.fromField = "fraction_changed"
ROUTE2076.fromNode = "StopTimer"
ROUTE2076.toField = "set_fraction"
ROUTE2076.toNode = "Stop_vl3_RotationInterpolator"

Group1866.children.append(ROUTE2076)
ROUTE2077 = x3d.ROUTE()
ROUTE2077.fromField = "fraction_changed"
ROUTE2077.fromNode = "StopTimer"
ROUTE2077.toField = "set_fraction"
ROUTE2077.toNode = "Stop_vl2_RotationInterpolator"

Group1866.children.append(ROUTE2077)
ROUTE2078 = x3d.ROUTE()
ROUTE2078.fromField = "fraction_changed"
ROUTE2078.fromNode = "StopTimer"
ROUTE2078.toField = "set_fraction"
ROUTE2078.toNode = "Stop_vl1_RotationInterpolator"

Group1866.children.append(ROUTE2078)
ROUTE2079 = x3d.ROUTE()
ROUTE2079.fromField = "fraction_changed"
ROUTE2079.fromNode = "StopTimer"
ROUTE2079.toField = "set_fraction"
ROUTE2079.toNode = "Stop_vt12_RotationInterpolator"

Group1866.children.append(ROUTE2079)
ROUTE2080 = x3d.ROUTE()
ROUTE2080.fromField = "fraction_changed"
ROUTE2080.fromNode = "StopTimer"
ROUTE2080.toField = "set_fraction"
ROUTE2080.toNode = "Stop_vt11_RotationInterpolator"

Group1866.children.append(ROUTE2080)
ROUTE2081 = x3d.ROUTE()
ROUTE2081.fromField = "fraction_changed"
ROUTE2081.fromNode = "StopTimer"
ROUTE2081.toField = "set_fraction"
ROUTE2081.toNode = "Stop_vt10_RotationInterpolator"

Group1866.children.append(ROUTE2081)
ROUTE2082 = x3d.ROUTE()
ROUTE2082.fromField = "fraction_changed"
ROUTE2082.fromNode = "StopTimer"
ROUTE2082.toField = "set_fraction"
ROUTE2082.toNode = "Stop_vt9_RotationInterpolator"

Group1866.children.append(ROUTE2082)
ROUTE2083 = x3d.ROUTE()
ROUTE2083.fromField = "fraction_changed"
ROUTE2083.fromNode = "StopTimer"
ROUTE2083.toField = "set_fraction"
ROUTE2083.toNode = "Stop_vt8_RotationInterpolator"

Group1866.children.append(ROUTE2083)
ROUTE2084 = x3d.ROUTE()
ROUTE2084.fromField = "fraction_changed"
ROUTE2084.fromNode = "StopTimer"
ROUTE2084.toField = "set_fraction"
ROUTE2084.toNode = "Stop_vt7_RotationInterpolator"

Group1866.children.append(ROUTE2084)
ROUTE2085 = x3d.ROUTE()
ROUTE2085.fromField = "fraction_changed"
ROUTE2085.fromNode = "StopTimer"
ROUTE2085.toField = "set_fraction"
ROUTE2085.toNode = "Stop_vt6_RotationInterpolator"

Group1866.children.append(ROUTE2085)
ROUTE2086 = x3d.ROUTE()
ROUTE2086.fromField = "fraction_changed"
ROUTE2086.fromNode = "StopTimer"
ROUTE2086.toField = "set_fraction"
ROUTE2086.toNode = "Stop_vt5_RotationInterpolator"

Group1866.children.append(ROUTE2086)
ROUTE2087 = x3d.ROUTE()
ROUTE2087.fromField = "fraction_changed"
ROUTE2087.fromNode = "StopTimer"
ROUTE2087.toField = "set_fraction"
ROUTE2087.toNode = "Stop_vt4_RotationInterpolator"

Group1866.children.append(ROUTE2087)
ROUTE2088 = x3d.ROUTE()
ROUTE2088.fromField = "fraction_changed"
ROUTE2088.fromNode = "StopTimer"
ROUTE2088.toField = "set_fraction"
ROUTE2088.toNode = "Stop_vt3_RotationInterpolator"

Group1866.children.append(ROUTE2088)
ROUTE2089 = x3d.ROUTE()
ROUTE2089.fromField = "fraction_changed"
ROUTE2089.fromNode = "StopTimer"
ROUTE2089.toField = "set_fraction"
ROUTE2089.toNode = "Stop_vt2_RotationInterpolator"

Group1866.children.append(ROUTE2089)
ROUTE2090 = x3d.ROUTE()
ROUTE2090.fromField = "fraction_changed"
ROUTE2090.fromNode = "StopTimer"
ROUTE2090.toField = "set_fraction"
ROUTE2090.toNode = "Stop_vt1_RotationInterpolator"

Group1866.children.append(ROUTE2090)
ROUTE2091 = x3d.ROUTE()
ROUTE2091.fromField = "fraction_changed"
ROUTE2091.fromNode = "StopTimer"
ROUTE2091.toField = "set_fraction"
ROUTE2091.toNode = "Stop_vc7_RotationInterpolator"

Group1866.children.append(ROUTE2091)
ROUTE2092 = x3d.ROUTE()
ROUTE2092.fromField = "fraction_changed"
ROUTE2092.fromNode = "StopTimer"
ROUTE2092.toField = "set_fraction"
ROUTE2092.toNode = "Stop_vc6_RotationInterpolator"

Group1866.children.append(ROUTE2092)
ROUTE2093 = x3d.ROUTE()
ROUTE2093.fromField = "fraction_changed"
ROUTE2093.fromNode = "StopTimer"
ROUTE2093.toField = "set_fraction"
ROUTE2093.toNode = "Stop_vc5_RotationInterpolator"

Group1866.children.append(ROUTE2093)
ROUTE2094 = x3d.ROUTE()
ROUTE2094.fromField = "fraction_changed"
ROUTE2094.fromNode = "StopTimer"
ROUTE2094.toField = "set_fraction"
ROUTE2094.toNode = "Stop_vc4_RotationInterpolator"

Group1866.children.append(ROUTE2094)
ROUTE2095 = x3d.ROUTE()
ROUTE2095.fromField = "fraction_changed"
ROUTE2095.fromNode = "StopTimer"
ROUTE2095.toField = "set_fraction"
ROUTE2095.toNode = "Stop_vc3_RotationInterpolator"

Group1866.children.append(ROUTE2095)
ROUTE2096 = x3d.ROUTE()
ROUTE2096.fromField = "fraction_changed"
ROUTE2096.fromNode = "StopTimer"
ROUTE2096.toField = "set_fraction"
ROUTE2096.toNode = "Stop_vc2_RotationInterpolator"

Group1866.children.append(ROUTE2096)
ROUTE2097 = x3d.ROUTE()
ROUTE2097.fromField = "fraction_changed"
ROUTE2097.fromNode = "StopTimer"
ROUTE2097.toField = "set_fraction"
ROUTE2097.toNode = "Stop_vc1_RotationInterpolator"

Group1866.children.append(ROUTE2097)
ROUTE2098 = x3d.ROUTE()
ROUTE2098.fromField = "fraction_changed"
ROUTE2098.fromNode = "StopTimer"
ROUTE2098.toField = "set_fraction"
ROUTE2098.toNode = "Stop_skullbase_RotationInterpolator"

Group1866.children.append(ROUTE2098)
ROUTE2099 = x3d.ROUTE()
ROUTE2099.fromField = "fraction_changed"
ROUTE2099.fromNode = "StopTimer"
ROUTE2099.toField = "set_fraction"
ROUTE2099.toNode = "Stop_l_eyelid_joint_RotationInterpolator"

Group1866.children.append(ROUTE2099)
ROUTE2100 = x3d.ROUTE()
ROUTE2100.fromField = "fraction_changed"
ROUTE2100.fromNode = "StopTimer"
ROUTE2100.toField = "set_fraction"
ROUTE2100.toNode = "Stop_r_eyelid_joint_RotationInterpolator"

Group1866.children.append(ROUTE2100)
ROUTE2101 = x3d.ROUTE()
ROUTE2101.fromField = "fraction_changed"
ROUTE2101.fromNode = "StopTimer"
ROUTE2101.toField = "set_fraction"
ROUTE2101.toNode = "Stop_l_eyeball_joint_RotationInterpolator"

Group1866.children.append(ROUTE2101)
ROUTE2102 = x3d.ROUTE()
ROUTE2102.fromField = "fraction_changed"
ROUTE2102.fromNode = "StopTimer"
ROUTE2102.toField = "set_fraction"
ROUTE2102.toNode = "Stop_r_eyeball_joint_RotationInterpolator"

Group1866.children.append(ROUTE2102)
ROUTE2103 = x3d.ROUTE()
ROUTE2103.fromField = "fraction_changed"
ROUTE2103.fromNode = "StopTimer"
ROUTE2103.toField = "set_fraction"
ROUTE2103.toNode = "Stop_l_eyebrow_joint_RotationInterpolator"

Group1866.children.append(ROUTE2103)
ROUTE2104 = x3d.ROUTE()
ROUTE2104.fromField = "fraction_changed"
ROUTE2104.fromNode = "StopTimer"
ROUTE2104.toField = "set_fraction"
ROUTE2104.toNode = "Stop_r_eyebrow_joint_RotationInterpolator"

Group1866.children.append(ROUTE2104)
ROUTE2105 = x3d.ROUTE()
ROUTE2105.fromField = "fraction_changed"
ROUTE2105.fromNode = "StopTimer"
ROUTE2105.toField = "set_fraction"
ROUTE2105.toNode = "Stop_temporomandibular_RotationInterpolator"

Group1866.children.append(ROUTE2105)
ROUTE2106 = x3d.ROUTE()
ROUTE2106.fromField = "fraction_changed"
ROUTE2106.fromNode = "StopTimer"
ROUTE2106.toField = "set_fraction"
ROUTE2106.toNode = "Stop_l_sternoclavicular_RotationInterpolator"

Group1866.children.append(ROUTE2106)
ROUTE2107 = x3d.ROUTE()
ROUTE2107.fromField = "fraction_changed"
ROUTE2107.fromNode = "StopTimer"
ROUTE2107.toField = "set_fraction"
ROUTE2107.toNode = "Stop_l_acromioclavicular_RotationInterpolator"

Group1866.children.append(ROUTE2107)
ROUTE2108 = x3d.ROUTE()
ROUTE2108.fromField = "fraction_changed"
ROUTE2108.fromNode = "StopTimer"
ROUTE2108.toField = "set_fraction"
ROUTE2108.toNode = "Stop_l_shoulder_RotationInterpolator"

Group1866.children.append(ROUTE2108)
ROUTE2109 = x3d.ROUTE()
ROUTE2109.fromField = "fraction_changed"
ROUTE2109.fromNode = "StopTimer"
ROUTE2109.toField = "set_fraction"
ROUTE2109.toNode = "Stop_l_elbow_RotationInterpolator"

Group1866.children.append(ROUTE2109)
ROUTE2110 = x3d.ROUTE()
ROUTE2110.fromField = "fraction_changed"
ROUTE2110.fromNode = "StopTimer"
ROUTE2110.toField = "set_fraction"
ROUTE2110.toNode = "Stop_l_radiocarpal_RotationInterpolator"

Group1866.children.append(ROUTE2110)
ROUTE2111 = x3d.ROUTE()
ROUTE2111.fromField = "fraction_changed"
ROUTE2111.fromNode = "StopTimer"
ROUTE2111.toField = "set_fraction"
ROUTE2111.toNode = "Stop_l_midcarpal_1_RotationInterpolator"

Group1866.children.append(ROUTE2111)
ROUTE2112 = x3d.ROUTE()
ROUTE2112.fromField = "fraction_changed"
ROUTE2112.fromNode = "StopTimer"
ROUTE2112.toField = "set_fraction"
ROUTE2112.toNode = "Stop_l_carpometacarpal_1_RotationInterpolator"

Group1866.children.append(ROUTE2112)
ROUTE2113 = x3d.ROUTE()
ROUTE2113.fromField = "fraction_changed"
ROUTE2113.fromNode = "StopTimer"
ROUTE2113.toField = "set_fraction"
ROUTE2113.toNode = "Stop_l_metacarpophalangeal_1_RotationInterpolator"

Group1866.children.append(ROUTE2113)
ROUTE2114 = x3d.ROUTE()
ROUTE2114.fromField = "fraction_changed"
ROUTE2114.fromNode = "StopTimer"
ROUTE2114.toField = "set_fraction"
ROUTE2114.toNode = "Stop_l_carpal_interphalangeal_1_RotationInterpolator"

Group1866.children.append(ROUTE2114)
ROUTE2115 = x3d.ROUTE()
ROUTE2115.fromField = "fraction_changed"
ROUTE2115.fromNode = "StopTimer"
ROUTE2115.toField = "set_fraction"
ROUTE2115.toNode = "Stop_l_midcarpal_2_RotationInterpolator"

Group1866.children.append(ROUTE2115)
ROUTE2116 = x3d.ROUTE()
ROUTE2116.fromField = "fraction_changed"
ROUTE2116.fromNode = "StopTimer"
ROUTE2116.toField = "set_fraction"
ROUTE2116.toNode = "Stop_l_carpometacarpal_2_RotationInterpolator"

Group1866.children.append(ROUTE2116)
ROUTE2117 = x3d.ROUTE()
ROUTE2117.fromField = "fraction_changed"
ROUTE2117.fromNode = "StopTimer"
ROUTE2117.toField = "set_fraction"
ROUTE2117.toNode = "Stop_l_metacarpophalangeal_2_RotationInterpolator"

Group1866.children.append(ROUTE2117)
ROUTE2118 = x3d.ROUTE()
ROUTE2118.fromField = "fraction_changed"
ROUTE2118.fromNode = "StopTimer"
ROUTE2118.toField = "set_fraction"
ROUTE2118.toNode = "Stop_l_carpal_proximal_interphalangeal_2_RotationInterpolator"

Group1866.children.append(ROUTE2118)
ROUTE2119 = x3d.ROUTE()
ROUTE2119.fromField = "fraction_changed"
ROUTE2119.fromNode = "StopTimer"
ROUTE2119.toField = "set_fraction"
ROUTE2119.toNode = "Stop_l_carpal_distal_interphalangeal_2_RotationInterpolator"

Group1866.children.append(ROUTE2119)
ROUTE2120 = x3d.ROUTE()
ROUTE2120.fromField = "fraction_changed"
ROUTE2120.fromNode = "StopTimer"
ROUTE2120.toField = "set_fraction"
ROUTE2120.toNode = "Stop_l_midcarpal_3_RotationInterpolator"

Group1866.children.append(ROUTE2120)
ROUTE2121 = x3d.ROUTE()
ROUTE2121.fromField = "fraction_changed"
ROUTE2121.fromNode = "StopTimer"
ROUTE2121.toField = "set_fraction"
ROUTE2121.toNode = "Stop_l_carpometacarpal_3_RotationInterpolator"

Group1866.children.append(ROUTE2121)
ROUTE2122 = x3d.ROUTE()
ROUTE2122.fromField = "fraction_changed"
ROUTE2122.fromNode = "StopTimer"
ROUTE2122.toField = "set_fraction"
ROUTE2122.toNode = "Stop_l_metacarpophalangeal_3_RotationInterpolator"

Group1866.children.append(ROUTE2122)
ROUTE2123 = x3d.ROUTE()
ROUTE2123.fromField = "fraction_changed"
ROUTE2123.fromNode = "StopTimer"
ROUTE2123.toField = "set_fraction"
ROUTE2123.toNode = "Stop_l_carpal_proximal_interphalangeal_3_RotationInterpolator"

Group1866.children.append(ROUTE2123)
ROUTE2124 = x3d.ROUTE()
ROUTE2124.fromField = "fraction_changed"
ROUTE2124.fromNode = "StopTimer"
ROUTE2124.toField = "set_fraction"
ROUTE2124.toNode = "Stop_l_carpal_distal_interphalangeal_3_RotationInterpolator"

Group1866.children.append(ROUTE2124)
ROUTE2125 = x3d.ROUTE()
ROUTE2125.fromField = "fraction_changed"
ROUTE2125.fromNode = "StopTimer"
ROUTE2125.toField = "set_fraction"
ROUTE2125.toNode = "Stop_l_midcarpal_4_5_RotationInterpolator"

Group1866.children.append(ROUTE2125)
ROUTE2126 = x3d.ROUTE()
ROUTE2126.fromField = "fraction_changed"
ROUTE2126.fromNode = "StopTimer"
ROUTE2126.toField = "set_fraction"
ROUTE2126.toNode = "Stop_l_carpometacarpal_4_RotationInterpolator"

Group1866.children.append(ROUTE2126)
ROUTE2127 = x3d.ROUTE()
ROUTE2127.fromField = "fraction_changed"
ROUTE2127.fromNode = "StopTimer"
ROUTE2127.toField = "set_fraction"
ROUTE2127.toNode = "Stop_l_metacarpophalangeal_4_RotationInterpolator"

Group1866.children.append(ROUTE2127)
ROUTE2128 = x3d.ROUTE()
ROUTE2128.fromField = "fraction_changed"
ROUTE2128.fromNode = "StopTimer"
ROUTE2128.toField = "set_fraction"
ROUTE2128.toNode = "Stop_l_carpal_proximal_interphalangeal_4_RotationInterpolator"

Group1866.children.append(ROUTE2128)
ROUTE2129 = x3d.ROUTE()
ROUTE2129.fromField = "fraction_changed"
ROUTE2129.fromNode = "StopTimer"
ROUTE2129.toField = "set_fraction"
ROUTE2129.toNode = "Stop_l_carpal_distal_interphalangeal_4_RotationInterpolator"

Group1866.children.append(ROUTE2129)
ROUTE2130 = x3d.ROUTE()
ROUTE2130.fromField = "fraction_changed"
ROUTE2130.fromNode = "StopTimer"
ROUTE2130.toField = "set_fraction"
ROUTE2130.toNode = "Stop_l_carpometacarpal_5_RotationInterpolator"

Group1866.children.append(ROUTE2130)
ROUTE2131 = x3d.ROUTE()
ROUTE2131.fromField = "fraction_changed"
ROUTE2131.fromNode = "StopTimer"
ROUTE2131.toField = "set_fraction"
ROUTE2131.toNode = "Stop_l_metacarpophalangeal_5_RotationInterpolator"

Group1866.children.append(ROUTE2131)
ROUTE2132 = x3d.ROUTE()
ROUTE2132.fromField = "fraction_changed"
ROUTE2132.fromNode = "StopTimer"
ROUTE2132.toField = "set_fraction"
ROUTE2132.toNode = "Stop_l_carpal_proximal_interphalangeal_5_RotationInterpolator"

Group1866.children.append(ROUTE2132)
ROUTE2133 = x3d.ROUTE()
ROUTE2133.fromField = "fraction_changed"
ROUTE2133.fromNode = "StopTimer"
ROUTE2133.toField = "set_fraction"
ROUTE2133.toNode = "Stop_l_carpal_distal_interphalangeal_5_RotationInterpolator"

Group1866.children.append(ROUTE2133)
ROUTE2134 = x3d.ROUTE()
ROUTE2134.fromField = "fraction_changed"
ROUTE2134.fromNode = "StopTimer"
ROUTE2134.toField = "set_fraction"
ROUTE2134.toNode = "Stop_r_sternoclavicular_RotationInterpolator"

Group1866.children.append(ROUTE2134)
ROUTE2135 = x3d.ROUTE()
ROUTE2135.fromField = "fraction_changed"
ROUTE2135.fromNode = "StopTimer"
ROUTE2135.toField = "set_fraction"
ROUTE2135.toNode = "Stop_r_acromioclavicular_RotationInterpolator"

Group1866.children.append(ROUTE2135)
ROUTE2136 = x3d.ROUTE()
ROUTE2136.fromField = "fraction_changed"
ROUTE2136.fromNode = "StopTimer"
ROUTE2136.toField = "set_fraction"
ROUTE2136.toNode = "Stop_r_shoulder_RotationInterpolator"

Group1866.children.append(ROUTE2136)
ROUTE2137 = x3d.ROUTE()
ROUTE2137.fromField = "fraction_changed"
ROUTE2137.fromNode = "StopTimer"
ROUTE2137.toField = "set_fraction"
ROUTE2137.toNode = "Stop_r_elbow_RotationInterpolator"

Group1866.children.append(ROUTE2137)
ROUTE2138 = x3d.ROUTE()
ROUTE2138.fromField = "fraction_changed"
ROUTE2138.fromNode = "StopTimer"
ROUTE2138.toField = "set_fraction"
ROUTE2138.toNode = "Stop_r_radiocarpal_RotationInterpolator"

Group1866.children.append(ROUTE2138)
ROUTE2139 = x3d.ROUTE()
ROUTE2139.fromField = "fraction_changed"
ROUTE2139.fromNode = "StopTimer"
ROUTE2139.toField = "set_fraction"
ROUTE2139.toNode = "Stop_r_midcarpal_1_RotationInterpolator"

Group1866.children.append(ROUTE2139)
ROUTE2140 = x3d.ROUTE()
ROUTE2140.fromField = "fraction_changed"
ROUTE2140.fromNode = "StopTimer"
ROUTE2140.toField = "set_fraction"
ROUTE2140.toNode = "Stop_r_carpometacarpal_1_RotationInterpolator"

Group1866.children.append(ROUTE2140)
ROUTE2141 = x3d.ROUTE()
ROUTE2141.fromField = "fraction_changed"
ROUTE2141.fromNode = "StopTimer"
ROUTE2141.toField = "set_fraction"
ROUTE2141.toNode = "Stop_r_metacarpophalangeal_1_RotationInterpolator"

Group1866.children.append(ROUTE2141)
ROUTE2142 = x3d.ROUTE()
ROUTE2142.fromField = "fraction_changed"
ROUTE2142.fromNode = "StopTimer"
ROUTE2142.toField = "set_fraction"
ROUTE2142.toNode = "Stop_r_carpal_interphalangeal_1_RotationInterpolator"

Group1866.children.append(ROUTE2142)
ROUTE2143 = x3d.ROUTE()
ROUTE2143.fromField = "fraction_changed"
ROUTE2143.fromNode = "StopTimer"
ROUTE2143.toField = "set_fraction"
ROUTE2143.toNode = "Stop_r_midcarpal_2_RotationInterpolator"

Group1866.children.append(ROUTE2143)
ROUTE2144 = x3d.ROUTE()
ROUTE2144.fromField = "fraction_changed"
ROUTE2144.fromNode = "StopTimer"
ROUTE2144.toField = "set_fraction"
ROUTE2144.toNode = "Stop_r_carpometacarpal_2_RotationInterpolator"

Group1866.children.append(ROUTE2144)
ROUTE2145 = x3d.ROUTE()
ROUTE2145.fromField = "fraction_changed"
ROUTE2145.fromNode = "StopTimer"
ROUTE2145.toField = "set_fraction"
ROUTE2145.toNode = "Stop_r_metacarpophalangeal_2_RotationInterpolator"

Group1866.children.append(ROUTE2145)
ROUTE2146 = x3d.ROUTE()
ROUTE2146.fromField = "fraction_changed"
ROUTE2146.fromNode = "StopTimer"
ROUTE2146.toField = "set_fraction"
ROUTE2146.toNode = "Stop_r_carpal_proximal_interphalangeal_2_RotationInterpolator"

Group1866.children.append(ROUTE2146)
ROUTE2147 = x3d.ROUTE()
ROUTE2147.fromField = "fraction_changed"
ROUTE2147.fromNode = "StopTimer"
ROUTE2147.toField = "set_fraction"
ROUTE2147.toNode = "Stop_r_carpal_distal_interphalangeal_2_RotationInterpolator"

Group1866.children.append(ROUTE2147)
ROUTE2148 = x3d.ROUTE()
ROUTE2148.fromField = "fraction_changed"
ROUTE2148.fromNode = "StopTimer"
ROUTE2148.toField = "set_fraction"
ROUTE2148.toNode = "Stop_r_midcarpal_3_RotationInterpolator"

Group1866.children.append(ROUTE2148)
ROUTE2149 = x3d.ROUTE()
ROUTE2149.fromField = "fraction_changed"
ROUTE2149.fromNode = "StopTimer"
ROUTE2149.toField = "set_fraction"
ROUTE2149.toNode = "Stop_r_carpometacarpal_3_RotationInterpolator"

Group1866.children.append(ROUTE2149)
ROUTE2150 = x3d.ROUTE()
ROUTE2150.fromField = "fraction_changed"
ROUTE2150.fromNode = "StopTimer"
ROUTE2150.toField = "set_fraction"
ROUTE2150.toNode = "Stop_r_metacarpophalangeal_3_RotationInterpolator"

Group1866.children.append(ROUTE2150)
ROUTE2151 = x3d.ROUTE()
ROUTE2151.fromField = "fraction_changed"
ROUTE2151.fromNode = "StopTimer"
ROUTE2151.toField = "set_fraction"
ROUTE2151.toNode = "Stop_r_carpal_proximal_interphalangeal_3_RotationInterpolator"

Group1866.children.append(ROUTE2151)
ROUTE2152 = x3d.ROUTE()
ROUTE2152.fromField = "fraction_changed"
ROUTE2152.fromNode = "StopTimer"
ROUTE2152.toField = "set_fraction"
ROUTE2152.toNode = "Stop_r_carpal_distal_interphalangeal_3_RotationInterpolator"

Group1866.children.append(ROUTE2152)
ROUTE2153 = x3d.ROUTE()
ROUTE2153.fromField = "fraction_changed"
ROUTE2153.fromNode = "StopTimer"
ROUTE2153.toField = "set_fraction"
ROUTE2153.toNode = "Stop_r_midcarpal_4_5_RotationInterpolator"

Group1866.children.append(ROUTE2153)
ROUTE2154 = x3d.ROUTE()
ROUTE2154.fromField = "fraction_changed"
ROUTE2154.fromNode = "StopTimer"
ROUTE2154.toField = "set_fraction"
ROUTE2154.toNode = "Stop_r_carpometacarpal_4_RotationInterpolator"

Group1866.children.append(ROUTE2154)
ROUTE2155 = x3d.ROUTE()
ROUTE2155.fromField = "fraction_changed"
ROUTE2155.fromNode = "StopTimer"
ROUTE2155.toField = "set_fraction"
ROUTE2155.toNode = "Stop_r_metacarpophalangeal_4_RotationInterpolator"

Group1866.children.append(ROUTE2155)
ROUTE2156 = x3d.ROUTE()
ROUTE2156.fromField = "fraction_changed"
ROUTE2156.fromNode = "StopTimer"
ROUTE2156.toField = "set_fraction"
ROUTE2156.toNode = "Stop_r_carpal_proximal_interphalangeal_4_RotationInterpolator"

Group1866.children.append(ROUTE2156)
ROUTE2157 = x3d.ROUTE()
ROUTE2157.fromField = "fraction_changed"
ROUTE2157.fromNode = "StopTimer"
ROUTE2157.toField = "set_fraction"
ROUTE2157.toNode = "Stop_r_carpal_distal_interphalangeal_4_RotationInterpolator"

Group1866.children.append(ROUTE2157)
ROUTE2158 = x3d.ROUTE()
ROUTE2158.fromField = "fraction_changed"
ROUTE2158.fromNode = "StopTimer"
ROUTE2158.toField = "set_fraction"
ROUTE2158.toNode = "Stop_r_carpometacarpal_5_RotationInterpolator"

Group1866.children.append(ROUTE2158)
ROUTE2159 = x3d.ROUTE()
ROUTE2159.fromField = "fraction_changed"
ROUTE2159.fromNode = "StopTimer"
ROUTE2159.toField = "set_fraction"
ROUTE2159.toNode = "Stop_r_metacarpophalangeal_5_RotationInterpolator"

Group1866.children.append(ROUTE2159)
ROUTE2160 = x3d.ROUTE()
ROUTE2160.fromField = "fraction_changed"
ROUTE2160.fromNode = "StopTimer"
ROUTE2160.toField = "set_fraction"
ROUTE2160.toNode = "Stop_r_carpal_proximal_interphalangeal_5_RotationInterpolator"

Group1866.children.append(ROUTE2160)
ROUTE2161 = x3d.ROUTE()
ROUTE2161.fromField = "fraction_changed"
ROUTE2161.fromNode = "StopTimer"
ROUTE2161.toField = "set_fraction"
ROUTE2161.toNode = "Stop_r_carpal_distal_interphalangeal_5_RotationInterpolator"

Group1866.children.append(ROUTE2161)
ROUTE2162 = x3d.ROUTE()
ROUTE2162.fromField = "value_changed"
ROUTE2162.fromNode = "Stop_humanoid_root_TranslationInterpolator"
ROUTE2162.toField = "set_translation"
ROUTE2162.toNode = "hanim_humanoid_root"

Group1866.children.append(ROUTE2162)
ROUTE2163 = x3d.ROUTE()
ROUTE2163.fromField = "value_changed"
ROUTE2163.fromNode = "Stop_humanoid_root_RotationInterpolator"
ROUTE2163.toField = "set_rotation"
ROUTE2163.toNode = "hanim_humanoid_root"

Group1866.children.append(ROUTE2163)
ROUTE2164 = x3d.ROUTE()
ROUTE2164.fromField = "value_changed"
ROUTE2164.fromNode = "Stop_sacroiliac_RotationInterpolator"
ROUTE2164.toField = "set_rotation"
ROUTE2164.toNode = "hanim_sacroiliac"

Group1866.children.append(ROUTE2164)
ROUTE2165 = x3d.ROUTE()
ROUTE2165.fromField = "value_changed"
ROUTE2165.fromNode = "Stop_l_hip_RotationInterpolator"
ROUTE2165.toField = "set_rotation"
ROUTE2165.toNode = "hanim_l_hip"

Group1866.children.append(ROUTE2165)
ROUTE2166 = x3d.ROUTE()
ROUTE2166.fromField = "value_changed"
ROUTE2166.fromNode = "Stop_l_knee_RotationInterpolator"
ROUTE2166.toField = "set_rotation"
ROUTE2166.toNode = "hanim_l_knee"

Group1866.children.append(ROUTE2166)
ROUTE2167 = x3d.ROUTE()
ROUTE2167.fromField = "value_changed"
ROUTE2167.fromNode = "Stop_l_talocrural_RotationInterpolator"
ROUTE2167.toField = "set_rotation"
ROUTE2167.toNode = "hanim_l_talocrural"

Group1866.children.append(ROUTE2167)
ROUTE2168 = x3d.ROUTE()
ROUTE2168.fromField = "value_changed"
ROUTE2168.fromNode = "Stop_l_talocalcaneonavicular_RotationInterpolator"
ROUTE2168.toField = "set_rotation"
ROUTE2168.toNode = "hanim_l_talocalcaneonavicular"

Group1866.children.append(ROUTE2168)
ROUTE2169 = x3d.ROUTE()
ROUTE2169.fromField = "value_changed"
ROUTE2169.fromNode = "Stop_l_cuneonavicular_1_RotationInterpolator"
ROUTE2169.toField = "set_rotation"
ROUTE2169.toNode = "hanim_l_cuneonavicular_1"

Group1866.children.append(ROUTE2169)
ROUTE2170 = x3d.ROUTE()
ROUTE2170.fromField = "value_changed"
ROUTE2170.fromNode = "Stop_l_tarsometatarsal_1_RotationInterpolator"
ROUTE2170.toField = "set_rotation"
ROUTE2170.toNode = "hanim_l_tarsometatarsal_1"

Group1866.children.append(ROUTE2170)
ROUTE2171 = x3d.ROUTE()
ROUTE2171.fromField = "value_changed"
ROUTE2171.fromNode = "Stop_l_metatarsophalangeal_1_RotationInterpolator"
ROUTE2171.toField = "set_rotation"
ROUTE2171.toNode = "hanim_l_metatarsophalangeal_1"

Group1866.children.append(ROUTE2171)
ROUTE2172 = x3d.ROUTE()
ROUTE2172.fromField = "value_changed"
ROUTE2172.fromNode = "Stop_l_tarsal_interphalangeal_1_RotationInterpolator"
ROUTE2172.toField = "set_rotation"
ROUTE2172.toNode = "hanim_l_tarsal_interphalangeal_1"

Group1866.children.append(ROUTE2172)
ROUTE2173 = x3d.ROUTE()
ROUTE2173.fromField = "value_changed"
ROUTE2173.fromNode = "Stop_l_cuneonavicular_2_RotationInterpolator"
ROUTE2173.toField = "set_rotation"
ROUTE2173.toNode = "hanim_l_cuneonavicular_2"

Group1866.children.append(ROUTE2173)
ROUTE2174 = x3d.ROUTE()
ROUTE2174.fromField = "value_changed"
ROUTE2174.fromNode = "Stop_l_tarsometatarsal_2_RotationInterpolator"
ROUTE2174.toField = "set_rotation"
ROUTE2174.toNode = "hanim_l_tarsometatarsal_2"

Group1866.children.append(ROUTE2174)
ROUTE2175 = x3d.ROUTE()
ROUTE2175.fromField = "value_changed"
ROUTE2175.fromNode = "Stop_l_metatarsophalangeal_2_RotationInterpolator"
ROUTE2175.toField = "set_rotation"
ROUTE2175.toNode = "hanim_l_metatarsophalangeal_2"

Group1866.children.append(ROUTE2175)
ROUTE2176 = x3d.ROUTE()
ROUTE2176.fromField = "value_changed"
ROUTE2176.fromNode = "Stop_l_tarsal_proximal_interphalangeal_2_RotationInterpolator"
ROUTE2176.toField = "set_rotation"
ROUTE2176.toNode = "hanim_l_tarsal_proximal_interphalangeal_2"

Group1866.children.append(ROUTE2176)
ROUTE2177 = x3d.ROUTE()
ROUTE2177.fromField = "value_changed"
ROUTE2177.fromNode = "Stop_l_tarsal_distal_interphalangeal_2_RotationInterpolator"
ROUTE2177.toField = "set_rotation"
ROUTE2177.toNode = "hanim_l_tarsal_distal_interphalangeal_2"

Group1866.children.append(ROUTE2177)
ROUTE2178 = x3d.ROUTE()
ROUTE2178.fromField = "value_changed"
ROUTE2178.fromNode = "Stop_l_cuneonavicular_3_RotationInterpolator"
ROUTE2178.toField = "set_rotation"
ROUTE2178.toNode = "hanim_l_cuneonavicular_3"

Group1866.children.append(ROUTE2178)
ROUTE2179 = x3d.ROUTE()
ROUTE2179.fromField = "value_changed"
ROUTE2179.fromNode = "Stop_l_tarsometatarsal_3_RotationInterpolator"
ROUTE2179.toField = "set_rotation"
ROUTE2179.toNode = "hanim_l_tarsometatarsal_3"

Group1866.children.append(ROUTE2179)
ROUTE2180 = x3d.ROUTE()
ROUTE2180.fromField = "value_changed"
ROUTE2180.fromNode = "Stop_l_metatarsophalangeal_3_RotationInterpolator"
ROUTE2180.toField = "set_rotation"
ROUTE2180.toNode = "hanim_l_metatarsophalangeal_3"

Group1866.children.append(ROUTE2180)
ROUTE2181 = x3d.ROUTE()
ROUTE2181.fromField = "value_changed"
ROUTE2181.fromNode = "Stop_l_tarsal_proximal_interphalangeal_3_RotationInterpolator"
ROUTE2181.toField = "set_rotation"
ROUTE2181.toNode = "hanim_l_tarsal_proximal_interphalangeal_3"

Group1866.children.append(ROUTE2181)
ROUTE2182 = x3d.ROUTE()
ROUTE2182.fromField = "value_changed"
ROUTE2182.fromNode = "Stop_l_tarsal_distal_interphalangeal_3_RotationInterpolator"
ROUTE2182.toField = "set_rotation"
ROUTE2182.toNode = "hanim_l_tarsal_distal_interphalangeal_3"

Group1866.children.append(ROUTE2182)
ROUTE2183 = x3d.ROUTE()
ROUTE2183.fromField = "value_changed"
ROUTE2183.fromNode = "Stop_l_calcaneocuboid_RotationInterpolator"
ROUTE2183.toField = "set_rotation"
ROUTE2183.toNode = "hanim_l_calcaneocuboid"

Group1866.children.append(ROUTE2183)
ROUTE2184 = x3d.ROUTE()
ROUTE2184.fromField = "value_changed"
ROUTE2184.fromNode = "Stop_l_transversetarsal_RotationInterpolator"
ROUTE2184.toField = "set_rotation"
ROUTE2184.toNode = "hanim_l_transversetarsal"

Group1866.children.append(ROUTE2184)
ROUTE2185 = x3d.ROUTE()
ROUTE2185.fromField = "value_changed"
ROUTE2185.fromNode = "Stop_l_tarsometatarsal_4_RotationInterpolator"
ROUTE2185.toField = "set_rotation"
ROUTE2185.toNode = "hanim_l_tarsometatarsal_4"

Group1866.children.append(ROUTE2185)
ROUTE2186 = x3d.ROUTE()
ROUTE2186.fromField = "value_changed"
ROUTE2186.fromNode = "Stop_l_metatarsophalangeal_4_RotationInterpolator"
ROUTE2186.toField = "set_rotation"
ROUTE2186.toNode = "hanim_l_metatarsophalangeal_4"

Group1866.children.append(ROUTE2186)
ROUTE2187 = x3d.ROUTE()
ROUTE2187.fromField = "value_changed"
ROUTE2187.fromNode = "Stop_l_tarsal_proximal_interphalangeal_4_RotationInterpolator"
ROUTE2187.toField = "set_rotation"
ROUTE2187.toNode = "hanim_l_tarsal_proximal_interphalangeal_4"

Group1866.children.append(ROUTE2187)
ROUTE2188 = x3d.ROUTE()
ROUTE2188.fromField = "value_changed"
ROUTE2188.fromNode = "Stop_l_tarsal_distal_interphalangeal_4_RotationInterpolator"
ROUTE2188.toField = "set_rotation"
ROUTE2188.toNode = "hanim_l_tarsal_distal_interphalangeal_4"

Group1866.children.append(ROUTE2188)
ROUTE2189 = x3d.ROUTE()
ROUTE2189.fromField = "value_changed"
ROUTE2189.fromNode = "Stop_l_tarsometatarsal_5_RotationInterpolator"
ROUTE2189.toField = "set_rotation"
ROUTE2189.toNode = "hanim_l_tarsometatarsal_5"

Group1866.children.append(ROUTE2189)
ROUTE2190 = x3d.ROUTE()
ROUTE2190.fromField = "value_changed"
ROUTE2190.fromNode = "Stop_l_metatarsophalangeal_5_RotationInterpolator"
ROUTE2190.toField = "set_rotation"
ROUTE2190.toNode = "hanim_l_metatarsophalangeal_5"

Group1866.children.append(ROUTE2190)
ROUTE2191 = x3d.ROUTE()
ROUTE2191.fromField = "value_changed"
ROUTE2191.fromNode = "Stop_l_tarsal_proximal_interphalangeal_5_RotationInterpolator"
ROUTE2191.toField = "set_rotation"
ROUTE2191.toNode = "hanim_l_tarsal_proximal_interphalangeal_5"

Group1866.children.append(ROUTE2191)
ROUTE2192 = x3d.ROUTE()
ROUTE2192.fromField = "value_changed"
ROUTE2192.fromNode = "Stop_l_tarsal_distal_interphalangeal_5_RotationInterpolator"
ROUTE2192.toField = "set_rotation"
ROUTE2192.toNode = "hanim_l_tarsal_distal_interphalangeal_5"

Group1866.children.append(ROUTE2192)
ROUTE2193 = x3d.ROUTE()
ROUTE2193.fromField = "value_changed"
ROUTE2193.fromNode = "Stop_r_hip_RotationInterpolator"
ROUTE2193.toField = "set_rotation"
ROUTE2193.toNode = "hanim_r_hip"

Group1866.children.append(ROUTE2193)
ROUTE2194 = x3d.ROUTE()
ROUTE2194.fromField = "value_changed"
ROUTE2194.fromNode = "Stop_r_knee_RotationInterpolator"
ROUTE2194.toField = "set_rotation"
ROUTE2194.toNode = "hanim_r_knee"

Group1866.children.append(ROUTE2194)
ROUTE2195 = x3d.ROUTE()
ROUTE2195.fromField = "value_changed"
ROUTE2195.fromNode = "Stop_r_talocrural_RotationInterpolator"
ROUTE2195.toField = "set_rotation"
ROUTE2195.toNode = "hanim_r_talocrural"

Group1866.children.append(ROUTE2195)
ROUTE2196 = x3d.ROUTE()
ROUTE2196.fromField = "value_changed"
ROUTE2196.fromNode = "Stop_r_talocalcaneonavicular_RotationInterpolator"
ROUTE2196.toField = "set_rotation"
ROUTE2196.toNode = "hanim_r_talocalcaneonavicular"

Group1866.children.append(ROUTE2196)
ROUTE2197 = x3d.ROUTE()
ROUTE2197.fromField = "value_changed"
ROUTE2197.fromNode = "Stop_r_cuneonavicular_1_RotationInterpolator"
ROUTE2197.toField = "set_rotation"
ROUTE2197.toNode = "hanim_r_cuneonavicular_1"

Group1866.children.append(ROUTE2197)
ROUTE2198 = x3d.ROUTE()
ROUTE2198.fromField = "value_changed"
ROUTE2198.fromNode = "Stop_r_tarsometatarsal_1_RotationInterpolator"
ROUTE2198.toField = "set_rotation"
ROUTE2198.toNode = "hanim_r_tarsometatarsal_1"

Group1866.children.append(ROUTE2198)
ROUTE2199 = x3d.ROUTE()
ROUTE2199.fromField = "value_changed"
ROUTE2199.fromNode = "Stop_r_metatarsophalangeal_1_RotationInterpolator"
ROUTE2199.toField = "set_rotation"
ROUTE2199.toNode = "hanim_r_metatarsophalangeal_1"

Group1866.children.append(ROUTE2199)
ROUTE2200 = x3d.ROUTE()
ROUTE2200.fromField = "value_changed"
ROUTE2200.fromNode = "Stop_r_tarsal_interphalangeal_1_RotationInterpolator"
ROUTE2200.toField = "set_rotation"
ROUTE2200.toNode = "hanim_r_tarsal_interphalangeal_1"

Group1866.children.append(ROUTE2200)
ROUTE2201 = x3d.ROUTE()
ROUTE2201.fromField = "value_changed"
ROUTE2201.fromNode = "Stop_r_cuneonavicular_2_RotationInterpolator"
ROUTE2201.toField = "set_rotation"
ROUTE2201.toNode = "hanim_r_cuneonavicular_2"

Group1866.children.append(ROUTE2201)
ROUTE2202 = x3d.ROUTE()
ROUTE2202.fromField = "value_changed"
ROUTE2202.fromNode = "Stop_r_tarsometatarsal_2_RotationInterpolator"
ROUTE2202.toField = "set_rotation"
ROUTE2202.toNode = "hanim_r_tarsometatarsal_2"

Group1866.children.append(ROUTE2202)
ROUTE2203 = x3d.ROUTE()
ROUTE2203.fromField = "value_changed"
ROUTE2203.fromNode = "Stop_r_metatarsophalangeal_2_RotationInterpolator"
ROUTE2203.toField = "set_rotation"
ROUTE2203.toNode = "hanim_r_metatarsophalangeal_2"

Group1866.children.append(ROUTE2203)
ROUTE2204 = x3d.ROUTE()
ROUTE2204.fromField = "value_changed"
ROUTE2204.fromNode = "Stop_r_tarsal_proximal_interphalangeal_2_RotationInterpolator"
ROUTE2204.toField = "set_rotation"
ROUTE2204.toNode = "hanim_r_tarsal_proximal_interphalangeal_2"

Group1866.children.append(ROUTE2204)
ROUTE2205 = x3d.ROUTE()
ROUTE2205.fromField = "value_changed"
ROUTE2205.fromNode = "Stop_r_tarsal_distal_interphalangeal_2_RotationInterpolator"
ROUTE2205.toField = "set_rotation"
ROUTE2205.toNode = "hanim_r_tarsal_distal_interphalangeal_2"

Group1866.children.append(ROUTE2205)
ROUTE2206 = x3d.ROUTE()
ROUTE2206.fromField = "value_changed"
ROUTE2206.fromNode = "Stop_r_cuneonavicular_3_RotationInterpolator"
ROUTE2206.toField = "set_rotation"
ROUTE2206.toNode = "hanim_r_cuneonavicular_3"

Group1866.children.append(ROUTE2206)
ROUTE2207 = x3d.ROUTE()
ROUTE2207.fromField = "value_changed"
ROUTE2207.fromNode = "Stop_r_tarsometatarsal_3_RotationInterpolator"
ROUTE2207.toField = "set_rotation"
ROUTE2207.toNode = "hanim_r_tarsometatarsal_3"

Group1866.children.append(ROUTE2207)
ROUTE2208 = x3d.ROUTE()
ROUTE2208.fromField = "value_changed"
ROUTE2208.fromNode = "Stop_r_metatarsophalangeal_3_RotationInterpolator"
ROUTE2208.toField = "set_rotation"
ROUTE2208.toNode = "hanim_r_metatarsophalangeal_3"

Group1866.children.append(ROUTE2208)
ROUTE2209 = x3d.ROUTE()
ROUTE2209.fromField = "value_changed"
ROUTE2209.fromNode = "Stop_r_tarsal_proximal_interphalangeal_3_RotationInterpolator"
ROUTE2209.toField = "set_rotation"
ROUTE2209.toNode = "hanim_r_tarsal_proximal_interphalangeal_3"

Group1866.children.append(ROUTE2209)
ROUTE2210 = x3d.ROUTE()
ROUTE2210.fromField = "value_changed"
ROUTE2210.fromNode = "Stop_r_tarsal_distal_interphalangeal_3_RotationInterpolator"
ROUTE2210.toField = "set_rotation"
ROUTE2210.toNode = "hanim_r_tarsal_distal_interphalangeal_3"

Group1866.children.append(ROUTE2210)
ROUTE2211 = x3d.ROUTE()
ROUTE2211.fromField = "value_changed"
ROUTE2211.fromNode = "Stop_r_calcaneocuboid_RotationInterpolator"
ROUTE2211.toField = "set_rotation"
ROUTE2211.toNode = "hanim_r_calcaneocuboid"

Group1866.children.append(ROUTE2211)
ROUTE2212 = x3d.ROUTE()
ROUTE2212.fromField = "value_changed"
ROUTE2212.fromNode = "Stop_r_transversetarsal_RotationInterpolator"
ROUTE2212.toField = "set_rotation"
ROUTE2212.toNode = "hanim_r_transversetarsal"

Group1866.children.append(ROUTE2212)
ROUTE2213 = x3d.ROUTE()
ROUTE2213.fromField = "value_changed"
ROUTE2213.fromNode = "Stop_r_tarsometatarsal_4_RotationInterpolator"
ROUTE2213.toField = "set_rotation"
ROUTE2213.toNode = "hanim_r_tarsometatarsal_4"

Group1866.children.append(ROUTE2213)
ROUTE2214 = x3d.ROUTE()
ROUTE2214.fromField = "value_changed"
ROUTE2214.fromNode = "Stop_r_metatarsophalangeal_4_RotationInterpolator"
ROUTE2214.toField = "set_rotation"
ROUTE2214.toNode = "hanim_r_metatarsophalangeal_4"

Group1866.children.append(ROUTE2214)
ROUTE2215 = x3d.ROUTE()
ROUTE2215.fromField = "value_changed"
ROUTE2215.fromNode = "Stop_r_tarsal_proximal_interphalangeal_4_RotationInterpolator"
ROUTE2215.toField = "set_rotation"
ROUTE2215.toNode = "hanim_r_tarsal_proximal_interphalangeal_4"

Group1866.children.append(ROUTE2215)
ROUTE2216 = x3d.ROUTE()
ROUTE2216.fromField = "value_changed"
ROUTE2216.fromNode = "Stop_r_tarsal_distal_interphalangeal_4_RotationInterpolator"
ROUTE2216.toField = "set_rotation"
ROUTE2216.toNode = "hanim_r_tarsal_distal_interphalangeal_4"

Group1866.children.append(ROUTE2216)
ROUTE2217 = x3d.ROUTE()
ROUTE2217.fromField = "value_changed"
ROUTE2217.fromNode = "Stop_r_tarsometatarsal_5_RotationInterpolator"
ROUTE2217.toField = "set_rotation"
ROUTE2217.toNode = "hanim_r_tarsometatarsal_5"

Group1866.children.append(ROUTE2217)
ROUTE2218 = x3d.ROUTE()
ROUTE2218.fromField = "value_changed"
ROUTE2218.fromNode = "Stop_r_metatarsophalangeal_5_RotationInterpolator"
ROUTE2218.toField = "set_rotation"
ROUTE2218.toNode = "hanim_r_metatarsophalangeal_5"

Group1866.children.append(ROUTE2218)
ROUTE2219 = x3d.ROUTE()
ROUTE2219.fromField = "value_changed"
ROUTE2219.fromNode = "Stop_r_tarsal_proximal_interphalangeal_5_RotationInterpolator"
ROUTE2219.toField = "set_rotation"
ROUTE2219.toNode = "hanim_r_tarsal_proximal_interphalangeal_5"

Group1866.children.append(ROUTE2219)
ROUTE2220 = x3d.ROUTE()
ROUTE2220.fromField = "value_changed"
ROUTE2220.fromNode = "Stop_r_tarsal_distal_interphalangeal_5_RotationInterpolator"
ROUTE2220.toField = "set_rotation"
ROUTE2220.toNode = "hanim_r_tarsal_distal_interphalangeal_5"

Group1866.children.append(ROUTE2220)
ROUTE2221 = x3d.ROUTE()
ROUTE2221.fromField = "value_changed"
ROUTE2221.fromNode = "Stop_vl5_RotationInterpolator"
ROUTE2221.toField = "set_rotation"
ROUTE2221.toNode = "hanim_vl5"

Group1866.children.append(ROUTE2221)
ROUTE2222 = x3d.ROUTE()
ROUTE2222.fromField = "value_changed"
ROUTE2222.fromNode = "Stop_vl4_RotationInterpolator"
ROUTE2222.toField = "set_rotation"
ROUTE2222.toNode = "hanim_vl4"

Group1866.children.append(ROUTE2222)
ROUTE2223 = x3d.ROUTE()
ROUTE2223.fromField = "value_changed"
ROUTE2223.fromNode = "Stop_vl3_RotationInterpolator"
ROUTE2223.toField = "set_rotation"
ROUTE2223.toNode = "hanim_vl3"

Group1866.children.append(ROUTE2223)
ROUTE2224 = x3d.ROUTE()
ROUTE2224.fromField = "value_changed"
ROUTE2224.fromNode = "Stop_vl2_RotationInterpolator"
ROUTE2224.toField = "set_rotation"
ROUTE2224.toNode = "hanim_vl2"

Group1866.children.append(ROUTE2224)
ROUTE2225 = x3d.ROUTE()
ROUTE2225.fromField = "value_changed"
ROUTE2225.fromNode = "Stop_vl1_RotationInterpolator"
ROUTE2225.toField = "set_rotation"
ROUTE2225.toNode = "hanim_vl1"

Group1866.children.append(ROUTE2225)
ROUTE2226 = x3d.ROUTE()
ROUTE2226.fromField = "value_changed"
ROUTE2226.fromNode = "Stop_vt12_RotationInterpolator"
ROUTE2226.toField = "set_rotation"
ROUTE2226.toNode = "hanim_vt12"

Group1866.children.append(ROUTE2226)
ROUTE2227 = x3d.ROUTE()
ROUTE2227.fromField = "value_changed"
ROUTE2227.fromNode = "Stop_vt11_RotationInterpolator"
ROUTE2227.toField = "set_rotation"
ROUTE2227.toNode = "hanim_vt11"

Group1866.children.append(ROUTE2227)
ROUTE2228 = x3d.ROUTE()
ROUTE2228.fromField = "value_changed"
ROUTE2228.fromNode = "Stop_vt10_RotationInterpolator"
ROUTE2228.toField = "set_rotation"
ROUTE2228.toNode = "hanim_vt10"

Group1866.children.append(ROUTE2228)
ROUTE2229 = x3d.ROUTE()
ROUTE2229.fromField = "value_changed"
ROUTE2229.fromNode = "Stop_vt9_RotationInterpolator"
ROUTE2229.toField = "set_rotation"
ROUTE2229.toNode = "hanim_vt9"

Group1866.children.append(ROUTE2229)
ROUTE2230 = x3d.ROUTE()
ROUTE2230.fromField = "value_changed"
ROUTE2230.fromNode = "Stop_vt8_RotationInterpolator"
ROUTE2230.toField = "set_rotation"
ROUTE2230.toNode = "hanim_vt8"

Group1866.children.append(ROUTE2230)
ROUTE2231 = x3d.ROUTE()
ROUTE2231.fromField = "value_changed"
ROUTE2231.fromNode = "Stop_vt7_RotationInterpolator"
ROUTE2231.toField = "set_rotation"
ROUTE2231.toNode = "hanim_vt7"

Group1866.children.append(ROUTE2231)
ROUTE2232 = x3d.ROUTE()
ROUTE2232.fromField = "value_changed"
ROUTE2232.fromNode = "Stop_vt6_RotationInterpolator"
ROUTE2232.toField = "set_rotation"
ROUTE2232.toNode = "hanim_vt6"

Group1866.children.append(ROUTE2232)
ROUTE2233 = x3d.ROUTE()
ROUTE2233.fromField = "value_changed"
ROUTE2233.fromNode = "Stop_vt5_RotationInterpolator"
ROUTE2233.toField = "set_rotation"
ROUTE2233.toNode = "hanim_vt5"

Group1866.children.append(ROUTE2233)
ROUTE2234 = x3d.ROUTE()
ROUTE2234.fromField = "value_changed"
ROUTE2234.fromNode = "Stop_vt4_RotationInterpolator"
ROUTE2234.toField = "set_rotation"
ROUTE2234.toNode = "hanim_vt4"

Group1866.children.append(ROUTE2234)
ROUTE2235 = x3d.ROUTE()
ROUTE2235.fromField = "value_changed"
ROUTE2235.fromNode = "Stop_vt3_RotationInterpolator"
ROUTE2235.toField = "set_rotation"
ROUTE2235.toNode = "hanim_vt3"

Group1866.children.append(ROUTE2235)
ROUTE2236 = x3d.ROUTE()
ROUTE2236.fromField = "value_changed"
ROUTE2236.fromNode = "Stop_vt2_RotationInterpolator"
ROUTE2236.toField = "set_rotation"
ROUTE2236.toNode = "hanim_vt2"

Group1866.children.append(ROUTE2236)
ROUTE2237 = x3d.ROUTE()
ROUTE2237.fromField = "value_changed"
ROUTE2237.fromNode = "Stop_vt1_RotationInterpolator"
ROUTE2237.toField = "set_rotation"
ROUTE2237.toNode = "hanim_vt1"

Group1866.children.append(ROUTE2237)
ROUTE2238 = x3d.ROUTE()
ROUTE2238.fromField = "value_changed"
ROUTE2238.fromNode = "Stop_vc7_RotationInterpolator"
ROUTE2238.toField = "set_rotation"
ROUTE2238.toNode = "hanim_vc7"

Group1866.children.append(ROUTE2238)
ROUTE2239 = x3d.ROUTE()
ROUTE2239.fromField = "value_changed"
ROUTE2239.fromNode = "Stop_vc6_RotationInterpolator"
ROUTE2239.toField = "set_rotation"
ROUTE2239.toNode = "hanim_vc6"

Group1866.children.append(ROUTE2239)
ROUTE2240 = x3d.ROUTE()
ROUTE2240.fromField = "value_changed"
ROUTE2240.fromNode = "Stop_vc5_RotationInterpolator"
ROUTE2240.toField = "set_rotation"
ROUTE2240.toNode = "hanim_vc5"

Group1866.children.append(ROUTE2240)
ROUTE2241 = x3d.ROUTE()
ROUTE2241.fromField = "value_changed"
ROUTE2241.fromNode = "Stop_vc4_RotationInterpolator"
ROUTE2241.toField = "set_rotation"
ROUTE2241.toNode = "hanim_vc4"

Group1866.children.append(ROUTE2241)
ROUTE2242 = x3d.ROUTE()
ROUTE2242.fromField = "value_changed"
ROUTE2242.fromNode = "Stop_vc3_RotationInterpolator"
ROUTE2242.toField = "set_rotation"
ROUTE2242.toNode = "hanim_vc3"

Group1866.children.append(ROUTE2242)
ROUTE2243 = x3d.ROUTE()
ROUTE2243.fromField = "value_changed"
ROUTE2243.fromNode = "Stop_vc2_RotationInterpolator"
ROUTE2243.toField = "set_rotation"
ROUTE2243.toNode = "hanim_vc2"

Group1866.children.append(ROUTE2243)
ROUTE2244 = x3d.ROUTE()
ROUTE2244.fromField = "value_changed"
ROUTE2244.fromNode = "Stop_vc1_RotationInterpolator"
ROUTE2244.toField = "set_rotation"
ROUTE2244.toNode = "hanim_vc1"

Group1866.children.append(ROUTE2244)
ROUTE2245 = x3d.ROUTE()
ROUTE2245.fromField = "value_changed"
ROUTE2245.fromNode = "Stop_skullbase_RotationInterpolator"
ROUTE2245.toField = "set_rotation"
ROUTE2245.toNode = "hanim_skullbase"

Group1866.children.append(ROUTE2245)
ROUTE2246 = x3d.ROUTE()
ROUTE2246.fromField = "value_changed"
ROUTE2246.fromNode = "Stop_l_eyelid_joint_RotationInterpolator"
ROUTE2246.toField = "set_rotation"
ROUTE2246.toNode = "hanim_l_eyelid_joint"

Group1866.children.append(ROUTE2246)
ROUTE2247 = x3d.ROUTE()
ROUTE2247.fromField = "value_changed"
ROUTE2247.fromNode = "Stop_r_eyelid_joint_RotationInterpolator"
ROUTE2247.toField = "set_rotation"
ROUTE2247.toNode = "hanim_r_eyelid_joint"

Group1866.children.append(ROUTE2247)
ROUTE2248 = x3d.ROUTE()
ROUTE2248.fromField = "value_changed"
ROUTE2248.fromNode = "Stop_l_eyeball_joint_RotationInterpolator"
ROUTE2248.toField = "set_rotation"
ROUTE2248.toNode = "hanim_l_eyeball_joint"

Group1866.children.append(ROUTE2248)
ROUTE2249 = x3d.ROUTE()
ROUTE2249.fromField = "value_changed"
ROUTE2249.fromNode = "Stop_r_eyeball_joint_RotationInterpolator"
ROUTE2249.toField = "set_rotation"
ROUTE2249.toNode = "hanim_r_eyeball_joint"

Group1866.children.append(ROUTE2249)
ROUTE2250 = x3d.ROUTE()
ROUTE2250.fromField = "value_changed"
ROUTE2250.fromNode = "Stop_l_eyebrow_joint_RotationInterpolator"
ROUTE2250.toField = "set_rotation"
ROUTE2250.toNode = "hanim_l_eyebrow_joint"

Group1866.children.append(ROUTE2250)
ROUTE2251 = x3d.ROUTE()
ROUTE2251.fromField = "value_changed"
ROUTE2251.fromNode = "Stop_r_eyebrow_joint_RotationInterpolator"
ROUTE2251.toField = "set_rotation"
ROUTE2251.toNode = "hanim_r_eyebrow_joint"

Group1866.children.append(ROUTE2251)
ROUTE2252 = x3d.ROUTE()
ROUTE2252.fromField = "value_changed"
ROUTE2252.fromNode = "Stop_temporomandibular_RotationInterpolator"
ROUTE2252.toField = "set_rotation"
ROUTE2252.toNode = "hanim_temporomandibular"

Group1866.children.append(ROUTE2252)
ROUTE2253 = x3d.ROUTE()
ROUTE2253.fromField = "value_changed"
ROUTE2253.fromNode = "Stop_l_sternoclavicular_RotationInterpolator"
ROUTE2253.toField = "set_rotation"
ROUTE2253.toNode = "hanim_l_sternoclavicular"

Group1866.children.append(ROUTE2253)
ROUTE2254 = x3d.ROUTE()
ROUTE2254.fromField = "value_changed"
ROUTE2254.fromNode = "Stop_l_acromioclavicular_RotationInterpolator"
ROUTE2254.toField = "set_rotation"
ROUTE2254.toNode = "hanim_l_acromioclavicular"

Group1866.children.append(ROUTE2254)
ROUTE2255 = x3d.ROUTE()
ROUTE2255.fromField = "value_changed"
ROUTE2255.fromNode = "Stop_l_shoulder_RotationInterpolator"
ROUTE2255.toField = "set_rotation"
ROUTE2255.toNode = "hanim_l_shoulder"

Group1866.children.append(ROUTE2255)
ROUTE2256 = x3d.ROUTE()
ROUTE2256.fromField = "value_changed"
ROUTE2256.fromNode = "Stop_l_elbow_RotationInterpolator"
ROUTE2256.toField = "set_rotation"
ROUTE2256.toNode = "hanim_l_elbow"

Group1866.children.append(ROUTE2256)
ROUTE2257 = x3d.ROUTE()
ROUTE2257.fromField = "value_changed"
ROUTE2257.fromNode = "Stop_l_radiocarpal_RotationInterpolator"
ROUTE2257.toField = "set_rotation"
ROUTE2257.toNode = "hanim_l_radiocarpal"

Group1866.children.append(ROUTE2257)
ROUTE2258 = x3d.ROUTE()
ROUTE2258.fromField = "value_changed"
ROUTE2258.fromNode = "Stop_l_midcarpal_1_RotationInterpolator"
ROUTE2258.toField = "set_rotation"
ROUTE2258.toNode = "hanim_l_midcarpal_1"

Group1866.children.append(ROUTE2258)
ROUTE2259 = x3d.ROUTE()
ROUTE2259.fromField = "value_changed"
ROUTE2259.fromNode = "Stop_l_carpometacarpal_1_RotationInterpolator"
ROUTE2259.toField = "set_rotation"
ROUTE2259.toNode = "hanim_l_carpometacarpal_1"

Group1866.children.append(ROUTE2259)
ROUTE2260 = x3d.ROUTE()
ROUTE2260.fromField = "value_changed"
ROUTE2260.fromNode = "Stop_l_metacarpophalangeal_1_RotationInterpolator"
ROUTE2260.toField = "set_rotation"
ROUTE2260.toNode = "hanim_l_metacarpophalangeal_1"

Group1866.children.append(ROUTE2260)
ROUTE2261 = x3d.ROUTE()
ROUTE2261.fromField = "value_changed"
ROUTE2261.fromNode = "Stop_l_carpal_interphalangeal_1_RotationInterpolator"
ROUTE2261.toField = "set_rotation"
ROUTE2261.toNode = "hanim_l_carpal_interphalangeal_1"

Group1866.children.append(ROUTE2261)
ROUTE2262 = x3d.ROUTE()
ROUTE2262.fromField = "value_changed"
ROUTE2262.fromNode = "Stop_l_midcarpal_2_RotationInterpolator"
ROUTE2262.toField = "set_rotation"
ROUTE2262.toNode = "hanim_l_midcarpal_2"

Group1866.children.append(ROUTE2262)
ROUTE2263 = x3d.ROUTE()
ROUTE2263.fromField = "value_changed"
ROUTE2263.fromNode = "Stop_l_carpometacarpal_2_RotationInterpolator"
ROUTE2263.toField = "set_rotation"
ROUTE2263.toNode = "hanim_l_carpometacarpal_2"

Group1866.children.append(ROUTE2263)
ROUTE2264 = x3d.ROUTE()
ROUTE2264.fromField = "value_changed"
ROUTE2264.fromNode = "Stop_l_metacarpophalangeal_2_RotationInterpolator"
ROUTE2264.toField = "set_rotation"
ROUTE2264.toNode = "hanim_l_metacarpophalangeal_2"

Group1866.children.append(ROUTE2264)
ROUTE2265 = x3d.ROUTE()
ROUTE2265.fromField = "value_changed"
ROUTE2265.fromNode = "Stop_l_carpal_proximal_interphalangeal_2_RotationInterpolator"
ROUTE2265.toField = "set_rotation"
ROUTE2265.toNode = "hanim_l_carpal_proximal_interphalangeal_2"

Group1866.children.append(ROUTE2265)
ROUTE2266 = x3d.ROUTE()
ROUTE2266.fromField = "value_changed"
ROUTE2266.fromNode = "Stop_l_carpal_distal_interphalangeal_2_RotationInterpolator"
ROUTE2266.toField = "set_rotation"
ROUTE2266.toNode = "hanim_l_carpal_distal_interphalangeal_2"

Group1866.children.append(ROUTE2266)
ROUTE2267 = x3d.ROUTE()
ROUTE2267.fromField = "value_changed"
ROUTE2267.fromNode = "Stop_l_midcarpal_3_RotationInterpolator"
ROUTE2267.toField = "set_rotation"
ROUTE2267.toNode = "hanim_l_midcarpal_3"

Group1866.children.append(ROUTE2267)
ROUTE2268 = x3d.ROUTE()
ROUTE2268.fromField = "value_changed"
ROUTE2268.fromNode = "Stop_l_carpometacarpal_3_RotationInterpolator"
ROUTE2268.toField = "set_rotation"
ROUTE2268.toNode = "hanim_l_carpometacarpal_3"

Group1866.children.append(ROUTE2268)
ROUTE2269 = x3d.ROUTE()
ROUTE2269.fromField = "value_changed"
ROUTE2269.fromNode = "Stop_l_carpometacarpal_3_RotationInterpolator"
ROUTE2269.toField = "set_rotation"
ROUTE2269.toNode = "hanim_l_metacarpophalangeal_3"

Group1866.children.append(ROUTE2269)
ROUTE2270 = x3d.ROUTE()
ROUTE2270.fromField = "value_changed"
ROUTE2270.fromNode = "Stop_l_carpal_proximal_interphalangeal_3_RotationInterpolator"
ROUTE2270.toField = "set_rotation"
ROUTE2270.toNode = "hanim_l_carpal_proximal_interphalangeal_3"

Group1866.children.append(ROUTE2270)
ROUTE2271 = x3d.ROUTE()
ROUTE2271.fromField = "value_changed"
ROUTE2271.fromNode = "Stop_l_carpal_distal_interphalangeal_3_RotationInterpolator"
ROUTE2271.toField = "set_rotation"
ROUTE2271.toNode = "hanim_l_carpal_distal_interphalangeal_3"

Group1866.children.append(ROUTE2271)
ROUTE2272 = x3d.ROUTE()
ROUTE2272.fromField = "value_changed"
ROUTE2272.fromNode = "Stop_l_midcarpal_4_5_RotationInterpolator"
ROUTE2272.toField = "set_rotation"
ROUTE2272.toNode = "hanim_l_midcarpal_4_5"

Group1866.children.append(ROUTE2272)
ROUTE2273 = x3d.ROUTE()
ROUTE2273.fromField = "value_changed"
ROUTE2273.fromNode = "Stop_l_carpometacarpal_4_RotationInterpolator"
ROUTE2273.toField = "set_rotation"
ROUTE2273.toNode = "hanim_l_carpometacarpal_4"

Group1866.children.append(ROUTE2273)
ROUTE2274 = x3d.ROUTE()
ROUTE2274.fromField = "value_changed"
ROUTE2274.fromNode = "Stop_l_metacarpophalangeal_4_RotationInterpolator"
ROUTE2274.toField = "set_rotation"
ROUTE2274.toNode = "hanim_l_metacarpophalangeal_4"

Group1866.children.append(ROUTE2274)
ROUTE2275 = x3d.ROUTE()
ROUTE2275.fromField = "value_changed"
ROUTE2275.fromNode = "Stop_l_carpal_proximal_interphalangeal_4_RotationInterpolator"
ROUTE2275.toField = "set_rotation"
ROUTE2275.toNode = "hanim_l_carpal_proximal_interphalangeal_4"

Group1866.children.append(ROUTE2275)
ROUTE2276 = x3d.ROUTE()
ROUTE2276.fromField = "value_changed"
ROUTE2276.fromNode = "Stop_l_carpal_distal_interphalangeal_4_RotationInterpolator"
ROUTE2276.toField = "set_rotation"
ROUTE2276.toNode = "hanim_l_carpal_distal_interphalangeal_4"

Group1866.children.append(ROUTE2276)
ROUTE2277 = x3d.ROUTE()
ROUTE2277.fromField = "value_changed"
ROUTE2277.fromNode = "Stop_l_carpometacarpal_5_RotationInterpolator"
ROUTE2277.toField = "set_rotation"
ROUTE2277.toNode = "hanim_l_carpometacarpal_5"

Group1866.children.append(ROUTE2277)
ROUTE2278 = x3d.ROUTE()
ROUTE2278.fromField = "value_changed"
ROUTE2278.fromNode = "Stop_l_metacarpophalangeal_5_RotationInterpolator"
ROUTE2278.toField = "set_rotation"
ROUTE2278.toNode = "hanim_l_metacarpophalangeal_5"

Group1866.children.append(ROUTE2278)
ROUTE2279 = x3d.ROUTE()
ROUTE2279.fromField = "value_changed"
ROUTE2279.fromNode = "Stop_l_carpal_proximal_interphalangeal_5_RotationInterpolator"
ROUTE2279.toField = "set_rotation"
ROUTE2279.toNode = "hanim_l_carpal_proximal_interphalangeal_5"

Group1866.children.append(ROUTE2279)
ROUTE2280 = x3d.ROUTE()
ROUTE2280.fromField = "value_changed"
ROUTE2280.fromNode = "Stop_l_carpal_distal_interphalangeal_5_RotationInterpolator"
ROUTE2280.toField = "set_rotation"
ROUTE2280.toNode = "hanim_l_carpal_distal_interphalangeal_5"

Group1866.children.append(ROUTE2280)
ROUTE2281 = x3d.ROUTE()
ROUTE2281.fromField = "value_changed"
ROUTE2281.fromNode = "Stop_r_sternoclavicular_RotationInterpolator"
ROUTE2281.toField = "set_rotation"
ROUTE2281.toNode = "hanim_r_sternoclavicular"

Group1866.children.append(ROUTE2281)
ROUTE2282 = x3d.ROUTE()
ROUTE2282.fromField = "value_changed"
ROUTE2282.fromNode = "Stop_r_acromioclavicular_RotationInterpolator"
ROUTE2282.toField = "set_rotation"
ROUTE2282.toNode = "hanim_r_acromioclavicular"

Group1866.children.append(ROUTE2282)
ROUTE2283 = x3d.ROUTE()
ROUTE2283.fromField = "value_changed"
ROUTE2283.fromNode = "Stop_r_shoulder_RotationInterpolator"
ROUTE2283.toField = "set_rotation"
ROUTE2283.toNode = "hanim_r_shoulder"

Group1866.children.append(ROUTE2283)
ROUTE2284 = x3d.ROUTE()
ROUTE2284.fromField = "value_changed"
ROUTE2284.fromNode = "Stop_r_elbow_RotationInterpolator"
ROUTE2284.toField = "set_rotation"
ROUTE2284.toNode = "hanim_r_elbow"

Group1866.children.append(ROUTE2284)
ROUTE2285 = x3d.ROUTE()
ROUTE2285.fromField = "value_changed"
ROUTE2285.fromNode = "Stop_r_radiocarpal_RotationInterpolator"
ROUTE2285.toField = "set_rotation"
ROUTE2285.toNode = "hanim_r_radiocarpal"

Group1866.children.append(ROUTE2285)
ROUTE2286 = x3d.ROUTE()
ROUTE2286.fromField = "value_changed"
ROUTE2286.fromNode = "Stop_r_midcarpal_1_RotationInterpolator"
ROUTE2286.toField = "set_rotation"
ROUTE2286.toNode = "hanim_r_midcarpal_1"

Group1866.children.append(ROUTE2286)
ROUTE2287 = x3d.ROUTE()
ROUTE2287.fromField = "value_changed"
ROUTE2287.fromNode = "Stop_r_carpometacarpal_1_RotationInterpolator"
ROUTE2287.toField = "set_rotation"
ROUTE2287.toNode = "hanim_r_carpometacarpal_1"

Group1866.children.append(ROUTE2287)
ROUTE2288 = x3d.ROUTE()
ROUTE2288.fromField = "value_changed"
ROUTE2288.fromNode = "Stop_r_metacarpophalangeal_1_RotationInterpolator"
ROUTE2288.toField = "set_rotation"
ROUTE2288.toNode = "hanim_r_metacarpophalangeal_1"

Group1866.children.append(ROUTE2288)
ROUTE2289 = x3d.ROUTE()
ROUTE2289.fromField = "value_changed"
ROUTE2289.fromNode = "Stop_r_carpal_interphalangeal_1_RotationInterpolator"
ROUTE2289.toField = "set_rotation"
ROUTE2289.toNode = "hanim_r_carpal_interphalangeal_1"

Group1866.children.append(ROUTE2289)
ROUTE2290 = x3d.ROUTE()
ROUTE2290.fromField = "value_changed"
ROUTE2290.fromNode = "Stop_r_midcarpal_2_RotationInterpolator"
ROUTE2290.toField = "set_rotation"
ROUTE2290.toNode = "hanim_r_midcarpal_2"

Group1866.children.append(ROUTE2290)
ROUTE2291 = x3d.ROUTE()
ROUTE2291.fromField = "value_changed"
ROUTE2291.fromNode = "Stop_r_carpometacarpal_2_RotationInterpolator"
ROUTE2291.toField = "set_rotation"
ROUTE2291.toNode = "hanim_r_carpometacarpal_2"

Group1866.children.append(ROUTE2291)
ROUTE2292 = x3d.ROUTE()
ROUTE2292.fromField = "value_changed"
ROUTE2292.fromNode = "Stop_r_metacarpophalangeal_2_RotationInterpolator"
ROUTE2292.toField = "set_rotation"
ROUTE2292.toNode = "hanim_r_metacarpophalangeal_2"

Group1866.children.append(ROUTE2292)
ROUTE2293 = x3d.ROUTE()
ROUTE2293.fromField = "value_changed"
ROUTE2293.fromNode = "Stop_r_carpal_proximal_interphalangeal_2_RotationInterpolator"
ROUTE2293.toField = "set_rotation"
ROUTE2293.toNode = "hanim_r_carpal_proximal_interphalangeal_2"

Group1866.children.append(ROUTE2293)
ROUTE2294 = x3d.ROUTE()
ROUTE2294.fromField = "value_changed"
ROUTE2294.fromNode = "Stop_r_carpal_distal_interphalangeal_2_RotationInterpolator"
ROUTE2294.toField = "set_rotation"
ROUTE2294.toNode = "hanim_r_carpal_distal_interphalangeal_2"

Group1866.children.append(ROUTE2294)
ROUTE2295 = x3d.ROUTE()
ROUTE2295.fromField = "value_changed"
ROUTE2295.fromNode = "Stop_r_midcarpal_3_RotationInterpolator"
ROUTE2295.toField = "set_rotation"
ROUTE2295.toNode = "hanim_r_midcarpal_3"

Group1866.children.append(ROUTE2295)
ROUTE2296 = x3d.ROUTE()
ROUTE2296.fromField = "value_changed"
ROUTE2296.fromNode = "Stop_r_carpometacarpal_3_RotationInterpolator"
ROUTE2296.toField = "set_rotation"
ROUTE2296.toNode = "hanim_r_carpometacarpal_3"

Group1866.children.append(ROUTE2296)
ROUTE2297 = x3d.ROUTE()
ROUTE2297.fromField = "value_changed"
ROUTE2297.fromNode = "Stop_r_carpometacarpal_3_RotationInterpolator"
ROUTE2297.toField = "set_rotation"
ROUTE2297.toNode = "hanim_r_metacarpophalangeal_3"

Group1866.children.append(ROUTE2297)
ROUTE2298 = x3d.ROUTE()
ROUTE2298.fromField = "value_changed"
ROUTE2298.fromNode = "Stop_r_carpal_proximal_interphalangeal_3_RotationInterpolator"
ROUTE2298.toField = "set_rotation"
ROUTE2298.toNode = "hanim_r_carpal_proximal_interphalangeal_3"

Group1866.children.append(ROUTE2298)
ROUTE2299 = x3d.ROUTE()
ROUTE2299.fromField = "value_changed"
ROUTE2299.fromNode = "Stop_r_carpal_distal_interphalangeal_3_RotationInterpolator"
ROUTE2299.toField = "set_rotation"
ROUTE2299.toNode = "hanim_r_carpal_distal_interphalangeal_3"

Group1866.children.append(ROUTE2299)
ROUTE2300 = x3d.ROUTE()
ROUTE2300.fromField = "value_changed"
ROUTE2300.fromNode = "Stop_r_midcarpal_4_5_RotationInterpolator"
ROUTE2300.toField = "set_rotation"
ROUTE2300.toNode = "hanim_r_midcarpal_4_5"

Group1866.children.append(ROUTE2300)
ROUTE2301 = x3d.ROUTE()
ROUTE2301.fromField = "value_changed"
ROUTE2301.fromNode = "Stop_r_carpometacarpal_4_RotationInterpolator"
ROUTE2301.toField = "set_rotation"
ROUTE2301.toNode = "hanim_r_carpometacarpal_4"

Group1866.children.append(ROUTE2301)
ROUTE2302 = x3d.ROUTE()
ROUTE2302.fromField = "value_changed"
ROUTE2302.fromNode = "Stop_r_metacarpophalangeal_4_RotationInterpolator"
ROUTE2302.toField = "set_rotation"
ROUTE2302.toNode = "hanim_r_metacarpophalangeal_4"

Group1866.children.append(ROUTE2302)
ROUTE2303 = x3d.ROUTE()
ROUTE2303.fromField = "value_changed"
ROUTE2303.fromNode = "Stop_r_carpal_proximal_interphalangeal_4_RotationInterpolator"
ROUTE2303.toField = "set_rotation"
ROUTE2303.toNode = "hanim_r_carpal_proximal_interphalangeal_4"

Group1866.children.append(ROUTE2303)
ROUTE2304 = x3d.ROUTE()
ROUTE2304.fromField = "value_changed"
ROUTE2304.fromNode = "Stop_r_carpal_distal_interphalangeal_4_RotationInterpolator"
ROUTE2304.toField = "set_rotation"
ROUTE2304.toNode = "hanim_r_carpal_distal_interphalangeal_4"

Group1866.children.append(ROUTE2304)
ROUTE2305 = x3d.ROUTE()
ROUTE2305.fromField = "value_changed"
ROUTE2305.fromNode = "Stop_r_carpometacarpal_5_RotationInterpolator"
ROUTE2305.toField = "set_rotation"
ROUTE2305.toNode = "hanim_r_carpometacarpal_5"

Group1866.children.append(ROUTE2305)
ROUTE2306 = x3d.ROUTE()
ROUTE2306.fromField = "value_changed"
ROUTE2306.fromNode = "Stop_r_metacarpophalangeal_5_RotationInterpolator"
ROUTE2306.toField = "set_rotation"
ROUTE2306.toNode = "hanim_r_metacarpophalangeal_5"

Group1866.children.append(ROUTE2306)
ROUTE2307 = x3d.ROUTE()
ROUTE2307.fromField = "value_changed"
ROUTE2307.fromNode = "Stop_r_carpal_proximal_interphalangeal_5_RotationInterpolator"
ROUTE2307.toField = "set_rotation"
ROUTE2307.toNode = "hanim_r_carpal_proximal_interphalangeal_5"

Group1866.children.append(ROUTE2307)
ROUTE2308 = x3d.ROUTE()
ROUTE2308.fromField = "value_changed"
ROUTE2308.fromNode = "Stop_r_carpal_distal_interphalangeal_5_RotationInterpolator"
ROUTE2308.toField = "set_rotation"
ROUTE2308.toNode = "hanim_r_carpal_distal_interphalangeal_5"

Group1866.children.append(ROUTE2308)

Scene22.children.append(Group1866)
Group2309 = x3d.Group()
Group2309.DEF = "StandAnimation"
TimeSensor2310 = x3d.TimeSensor()
TimeSensor2310.DEF = "StandTimer"
TimeSensor2310.cycleInterval = 5.73
TimeSensor2310.loop = True

Group2309.children.append(TimeSensor2310)
OrientationInterpolator2311 = x3d.OrientationInterpolator()
OrientationInterpolator2311.DEF = "Stand_r_metatarsal_PitchInterpolator"
OrientationInterpolator2311.key = [0,0.2,0.4,0.6,0.7,1]

Group2309.children.append(OrientationInterpolator2311)
OrientationInterpolator2312 = x3d.OrientationInterpolator()
OrientationInterpolator2312.DEF = "Stand_r_talocrural_RotationInterpolator"
OrientationInterpolator2312.key = [0,0.5,1]

Group2309.children.append(OrientationInterpolator2312)
OrientationInterpolator2313 = x3d.OrientationInterpolator()
OrientationInterpolator2313.DEF = "Stand_r_knee_RotationInterpolator"
OrientationInterpolator2313.key = [0,0.5,1]

Group2309.children.append(OrientationInterpolator2313)
OrientationInterpolator2314 = x3d.OrientationInterpolator()
OrientationInterpolator2314.DEF = "Stand_r_hip_RotationInterpolator"
OrientationInterpolator2314.key = [0,0.5,1]

Group2309.children.append(OrientationInterpolator2314)
OrientationInterpolator2315 = x3d.OrientationInterpolator()
OrientationInterpolator2315.DEF = "Stand_l_talocrural_RotationInterpolator"
OrientationInterpolator2315.key = [0,0.5,1]

Group2309.children.append(OrientationInterpolator2315)
OrientationInterpolator2316 = x3d.OrientationInterpolator()
OrientationInterpolator2316.DEF = "Stand_l_knee_RotationInterpolator"
OrientationInterpolator2316.key = [0,0.5,1]

Group2309.children.append(OrientationInterpolator2316)
OrientationInterpolator2317 = x3d.OrientationInterpolator()
OrientationInterpolator2317.DEF = "Stand_l_hip_RotationInterpolator"
OrientationInterpolator2317.key = [0,0.5,1]

Group2309.children.append(OrientationInterpolator2317)
OrientationInterpolator2318 = x3d.OrientationInterpolator()
OrientationInterpolator2318.DEF = "Stand_r_radiocarpal_RotationInterpolator"
OrientationInterpolator2318.key = [0,0.5,1]

Group2309.children.append(OrientationInterpolator2318)
OrientationInterpolator2319 = x3d.OrientationInterpolator()
OrientationInterpolator2319.DEF = "Stand_r_elbow_RotationInterpolator"
OrientationInterpolator2319.key = [0,0.5,1]

Group2309.children.append(OrientationInterpolator2319)
OrientationInterpolator2320 = x3d.OrientationInterpolator()
OrientationInterpolator2320.DEF = "Stand_r_shoulder_RotationInterpolator"
OrientationInterpolator2320.key = [0,0.5,1]

Group2309.children.append(OrientationInterpolator2320)
OrientationInterpolator2321 = x3d.OrientationInterpolator()
OrientationInterpolator2321.DEF = "Stand_l_radiocarpal_RotationInterpolator"
OrientationInterpolator2321.key = [0,0.5,1]

Group2309.children.append(OrientationInterpolator2321)
OrientationInterpolator2322 = x3d.OrientationInterpolator()
OrientationInterpolator2322.DEF = "Stand_l_elbow_RotationInterpolator"
OrientationInterpolator2322.key = [0,0.5,1]

Group2309.children.append(OrientationInterpolator2322)
OrientationInterpolator2323 = x3d.OrientationInterpolator()
OrientationInterpolator2323.DEF = "Stand_l_shoulder_RotationInterpolator"
OrientationInterpolator2323.key = [0,0.5,1]

Group2309.children.append(OrientationInterpolator2323)
OrientationInterpolator2324 = x3d.OrientationInterpolator()
OrientationInterpolator2324.DEF = "Stand_head_RotationInterpolator"
OrientationInterpolator2324.key = [0,0.5,1]

Group2309.children.append(OrientationInterpolator2324)
OrientationInterpolator2325 = x3d.OrientationInterpolator()
OrientationInterpolator2325.DEF = "Stand_neck_RotationInterpolator"
OrientationInterpolator2325.key = [0,0.5,1]

Group2309.children.append(OrientationInterpolator2325)
OrientationInterpolator2326 = x3d.OrientationInterpolator()
OrientationInterpolator2326.DEF = "Stand_l_eyeball_RotationInterpolator"
OrientationInterpolator2326.key = [0,0.4,0.7,1]

Group2309.children.append(OrientationInterpolator2326)
OrientationInterpolator2327 = x3d.OrientationInterpolator()
OrientationInterpolator2327.DEF = "Stand_r_eyeball_RotationInterpolator"
OrientationInterpolator2327.key = [0,0.4,0.7,1]

Group2309.children.append(OrientationInterpolator2327)
OrientationInterpolator2328 = x3d.OrientationInterpolator()
OrientationInterpolator2328.DEF = "Stand_lower_body_RotationInterpolator"
OrientationInterpolator2328.key = [0,0.5,1]

Group2309.children.append(OrientationInterpolator2328)
OrientationInterpolator2329 = x3d.OrientationInterpolator()
OrientationInterpolator2329.DEF = "Stand_upper_body_RotationInterpolator"
OrientationInterpolator2329.key = [0,0.5,1]

Group2309.children.append(OrientationInterpolator2329)
OrientationInterpolator2330 = x3d.OrientationInterpolator()
OrientationInterpolator2330.DEF = "Stand_whole_body_RotationInterpolator"
OrientationInterpolator2330.key = [0,0.5,1]

Group2309.children.append(OrientationInterpolator2330)
PositionInterpolator2331 = x3d.PositionInterpolator()
PositionInterpolator2331.DEF = "Stand_whole_body_TranslationInterpolator"
PositionInterpolator2331.key = [0,0.5,1]

Group2309.children.append(PositionInterpolator2331)
OrientationInterpolator2332 = x3d.OrientationInterpolator()
OrientationInterpolator2332.DEF = "Stand_l_sternoclavicular_RollInterpolator"
OrientationInterpolator2332.key = [0,0.2,0.4,0.6,0.8,1]

Group2309.children.append(OrientationInterpolator2332)
OrientationInterpolator2333 = x3d.OrientationInterpolator()
OrientationInterpolator2333.DEF = "Stand_l_acromioclavicular_RollInterpolator"
OrientationInterpolator2333.key = [0,0.2,0.4,0.6,0.8,1]

Group2309.children.append(OrientationInterpolator2333)
OrientationInterpolator2334 = x3d.OrientationInterpolator()
OrientationInterpolator2334.DEF = "Stand_r_sternoclavicular_RollInterpolator"
OrientationInterpolator2334.key = [0,0.2,0.4,0.6,0.8,1]

Group2309.children.append(OrientationInterpolator2334)
OrientationInterpolator2335 = x3d.OrientationInterpolator()
OrientationInterpolator2335.DEF = "Stand_r_acromioclavicular_RollInterpolator"
OrientationInterpolator2335.key = [0,0.2,0.4,0.6,0.8,1]

Group2309.children.append(OrientationInterpolator2335)
OrientationInterpolator2336 = x3d.OrientationInterpolator()
OrientationInterpolator2336.DEF = "Stand_sacroiliac_YawInterpolator"
OrientationInterpolator2336.key = [0,0.2,0.4,0.6,0.8,1]

Group2309.children.append(OrientationInterpolator2336)
OrientationInterpolator2337 = x3d.OrientationInterpolator()
OrientationInterpolator2337.DEF = "Stand_vl5_YawInterpolator"
OrientationInterpolator2337.key = [0,0.2,0.4,0.5,0.6,0.8,1]

Group2309.children.append(OrientationInterpolator2337)
OrientationInterpolator2338 = x3d.OrientationInterpolator()
OrientationInterpolator2338.DEF = "Stand_vc6_YawInterpolator"
OrientationInterpolator2338.key = [0,0.2,0.4,0.5,0.6,0.8,1]

Group2309.children.append(OrientationInterpolator2338)
OrientationInterpolator2339 = x3d.OrientationInterpolator()
OrientationInterpolator2339.DEF = "Stand_l_thumb1_PitchInterpolator"
OrientationInterpolator2339.key = [0,0.2,0.4,0.6,0.8,1]

Group2309.children.append(OrientationInterpolator2339)
OrientationInterpolator2340 = x3d.OrientationInterpolator()
OrientationInterpolator2340.DEF = "Stand_r_thumb1_PitchInterpolator"
OrientationInterpolator2340.key = [0,0.2,0.4,0.6,0.8,1]

Group2309.children.append(OrientationInterpolator2340)
OrientationInterpolator2341 = x3d.OrientationInterpolator()
OrientationInterpolator2341.DEF = "Stand_r_index1_RollInterpolator"
OrientationInterpolator2341.key = [0,0.2,0.4,0.5,0.8,1]

Group2309.children.append(OrientationInterpolator2341)
OrientationInterpolator2342 = x3d.OrientationInterpolator()
OrientationInterpolator2342.DEF = "Stand_r_index2_RollInterpolator"
OrientationInterpolator2342.key = [0,0.2,0.4,0.5,0.8,1]

Group2309.children.append(OrientationInterpolator2342)
OrientationInterpolator2343 = x3d.OrientationInterpolator()
OrientationInterpolator2343.DEF = "Stand_r_index3_RollInterpolator"
OrientationInterpolator2343.key = [0,0.2,0.4,0.5,0.8,1]

Group2309.children.append(OrientationInterpolator2343)

Scene22.children.append(Group2309)
Group2344 = x3d.Group()
Group2344.DEF = "PitchesAnimation"
TimeSensor2345 = x3d.TimeSensor()
TimeSensor2345.DEF = "PitchTimer"
TimeSensor2345.cycleInterval = 5.73
TimeSensor2345.loop = True

Group2344.children.append(TimeSensor2345)
OrientationInterpolator2346 = x3d.OrientationInterpolator()
OrientationInterpolator2346.DEF = "Pitch_r_metatarsal_PitchInterpolator"
OrientationInterpolator2346.key = [0,0.2,0.4,0.6,0.7,1]

Group2344.children.append(OrientationInterpolator2346)
OrientationInterpolator2347 = x3d.OrientationInterpolator()
OrientationInterpolator2347.DEF = "Pitches_r_talocrural_RotationInterpolator"
OrientationInterpolator2347.key = [0,0.25,0.5,0.75,1]

Group2344.children.append(OrientationInterpolator2347)
OrientationInterpolator2348 = x3d.OrientationInterpolator()
OrientationInterpolator2348.DEF = "Pitches_r_knee_RotationInterpolator"
OrientationInterpolator2348.key = [0,0.5,1]

Group2344.children.append(OrientationInterpolator2348)
OrientationInterpolator2349 = x3d.OrientationInterpolator()
OrientationInterpolator2349.DEF = "Pitches_r_hip_RotationInterpolator"
OrientationInterpolator2349.key = [0,0.25,0.5,0.75,1]

Group2344.children.append(OrientationInterpolator2349)
OrientationInterpolator2350 = x3d.OrientationInterpolator()
OrientationInterpolator2350.DEF = "Pitches_l_talocrural_RotationInterpolator"
OrientationInterpolator2350.key = [0,0.25,0.5,0.75,1]

Group2344.children.append(OrientationInterpolator2350)
OrientationInterpolator2351 = x3d.OrientationInterpolator()
OrientationInterpolator2351.DEF = "Pitches_l_knee_RotationInterpolator"
OrientationInterpolator2351.key = [0,0.5,1]

Group2344.children.append(OrientationInterpolator2351)
OrientationInterpolator2352 = x3d.OrientationInterpolator()
OrientationInterpolator2352.DEF = "Pitches_l_hip_RotationInterpolator"
OrientationInterpolator2352.key = [0,0.25,0.5,0.75,1]

Group2344.children.append(OrientationInterpolator2352)
OrientationInterpolator2353 = x3d.OrientationInterpolator()
OrientationInterpolator2353.DEF = "Pitches_r_radiocarpal_RotationInterpolator"
OrientationInterpolator2353.key = [0,0.5,1]

Group2344.children.append(OrientationInterpolator2353)
OrientationInterpolator2354 = x3d.OrientationInterpolator()
OrientationInterpolator2354.DEF = "Pitches_r_elbow_RotationInterpolator"
OrientationInterpolator2354.key = [0,0.5,1]

Group2344.children.append(OrientationInterpolator2354)
OrientationInterpolator2355 = x3d.OrientationInterpolator()
OrientationInterpolator2355.DEF = "Pitches_r_shoulder_RotationInterpolator"
OrientationInterpolator2355.key = [0,0.25,0.5,0.75,1]

Group2344.children.append(OrientationInterpolator2355)
OrientationInterpolator2356 = x3d.OrientationInterpolator()
OrientationInterpolator2356.DEF = "Pitches_l_radiocarpal_RotationInterpolator"
OrientationInterpolator2356.key = [0,0.5,1]

Group2344.children.append(OrientationInterpolator2356)
OrientationInterpolator2357 = x3d.OrientationInterpolator()
OrientationInterpolator2357.DEF = "Pitches_l_elbow_RotationInterpolator"
OrientationInterpolator2357.key = [0,0.5,1]

Group2344.children.append(OrientationInterpolator2357)
OrientationInterpolator2358 = x3d.OrientationInterpolator()
OrientationInterpolator2358.DEF = "Pitches_l_shoulder_RotationInterpolator"
OrientationInterpolator2358.key = [0,0.25,0.5,0.75,1]

Group2344.children.append(OrientationInterpolator2358)
OrientationInterpolator2359 = x3d.OrientationInterpolator()
OrientationInterpolator2359.DEF = "Pitches_head_RotationInterpolator"
OrientationInterpolator2359.key = [0,0.5,1]

Group2344.children.append(OrientationInterpolator2359)
OrientationInterpolator2360 = x3d.OrientationInterpolator()
OrientationInterpolator2360.DEF = "Pitches_neck_RotationInterpolator"
OrientationInterpolator2360.key = [0,0.25,0.55,1]

Group2344.children.append(OrientationInterpolator2360)
OrientationInterpolator2361 = x3d.OrientationInterpolator()
OrientationInterpolator2361.DEF = "Pitches_lower_body_RotationInterpolator"
OrientationInterpolator2361.key = [0,0.5,1]

Group2344.children.append(OrientationInterpolator2361)
OrientationInterpolator2362 = x3d.OrientationInterpolator()
OrientationInterpolator2362.DEF = "Pitches_upper_body_RotationInterpolator"
OrientationInterpolator2362.key = [0,0.5,1]

Group2344.children.append(OrientationInterpolator2362)
OrientationInterpolator2363 = x3d.OrientationInterpolator()
OrientationInterpolator2363.DEF = "Pitches_whole_body_RotationInterpolator"
OrientationInterpolator2363.key = [0,0.5,1]

Group2344.children.append(OrientationInterpolator2363)
PositionInterpolator2364 = x3d.PositionInterpolator()
PositionInterpolator2364.DEF = "Pitches_whole_body_TranslationInterpolator"
PositionInterpolator2364.key = [0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]

Group2344.children.append(PositionInterpolator2364)
OrientationInterpolator2365 = x3d.OrientationInterpolator()
OrientationInterpolator2365.DEF = "Pitch_l_sternoclavicular_RollInterpolator"
OrientationInterpolator2365.key = [0,0.2,0.4,0.6,0.8,1]

Group2344.children.append(OrientationInterpolator2365)
OrientationInterpolator2366 = x3d.OrientationInterpolator()
OrientationInterpolator2366.DEF = "Pitch_l_acromioclavicular_RollInterpolator"
OrientationInterpolator2366.key = [0,0.2,0.4,0.6,0.8,1]

Group2344.children.append(OrientationInterpolator2366)
OrientationInterpolator2367 = x3d.OrientationInterpolator()
OrientationInterpolator2367.DEF = "Pitch_r_sternoclavicular_RollInterpolator"
OrientationInterpolator2367.key = [0,0.2,0.4,0.6,0.8,1]

Group2344.children.append(OrientationInterpolator2367)
OrientationInterpolator2368 = x3d.OrientationInterpolator()
OrientationInterpolator2368.DEF = "Pitch_r_acromioclavicular_RollInterpolator"
OrientationInterpolator2368.key = [0,0.2,0.4,0.6,0.8,1]

Group2344.children.append(OrientationInterpolator2368)
OrientationInterpolator2369 = x3d.OrientationInterpolator()
OrientationInterpolator2369.DEF = "Pitch_sacroiliac_YawInterpolator"
OrientationInterpolator2369.key = [0,0.2,0.4,0.6,0.8,1]

Group2344.children.append(OrientationInterpolator2369)
OrientationInterpolator2370 = x3d.OrientationInterpolator()
OrientationInterpolator2370.DEF = "Pitch_vl5_YawInterpolator"
OrientationInterpolator2370.key = [0,0.2,0.4,0.5,0.6,0.8,1]

Group2344.children.append(OrientationInterpolator2370)
OrientationInterpolator2371 = x3d.OrientationInterpolator()
OrientationInterpolator2371.DEF = "Pitch_vc6_YawInterpolator"
OrientationInterpolator2371.key = [0,0.2,0.4,0.5,0.6,0.8,1]

Group2344.children.append(OrientationInterpolator2371)
OrientationInterpolator2372 = x3d.OrientationInterpolator()
OrientationInterpolator2372.DEF = "Pitch_l_thumb1_PitchInterpolator"
OrientationInterpolator2372.key = [0,0.2,0.4,0.6,0.8,1]

Group2344.children.append(OrientationInterpolator2372)
OrientationInterpolator2373 = x3d.OrientationInterpolator()
OrientationInterpolator2373.DEF = "Pitch_r_thumb1_PitchInterpolator"
OrientationInterpolator2373.key = [0,0.2,0.4,0.6,0.8,1]

Group2344.children.append(OrientationInterpolator2373)

Scene22.children.append(Group2344)
Group2374 = x3d.Group()
Group2374.DEF = "YawsAnimation"
TimeSensor2375 = x3d.TimeSensor()
TimeSensor2375.DEF = "YawTimer"
TimeSensor2375.cycleInterval = 5.73
TimeSensor2375.loop = True

Group2374.children.append(TimeSensor2375)
OrientationInterpolator2376 = x3d.OrientationInterpolator()
OrientationInterpolator2376.DEF = "Yaw_r_metatarsal_PitchInterpolator"
OrientationInterpolator2376.key = [0,0.2,0.4,0.6,0.7,1]

Group2374.children.append(OrientationInterpolator2376)
OrientationInterpolator2377 = x3d.OrientationInterpolator()
OrientationInterpolator2377.DEF = "Yaws_r_talocrural_RotationInterpolator"
OrientationInterpolator2377.key = [0,0.25,0.5,0.75,1]

Group2374.children.append(OrientationInterpolator2377)
OrientationInterpolator2378 = x3d.OrientationInterpolator()
OrientationInterpolator2378.DEF = "Yaws_r_knee_RotationInterpolator"
OrientationInterpolator2378.key = [0,0.25,0.5,0.75,1]

Group2374.children.append(OrientationInterpolator2378)
OrientationInterpolator2379 = x3d.OrientationInterpolator()
OrientationInterpolator2379.DEF = "Yaws_r_hip_RotationInterpolator"
OrientationInterpolator2379.key = [0,0.5,1]

Group2374.children.append(OrientationInterpolator2379)
OrientationInterpolator2380 = x3d.OrientationInterpolator()
OrientationInterpolator2380.DEF = "Yaws_l_talocrural_RotationInterpolator"
OrientationInterpolator2380.key = [0,0.25,0.5,0.75,1]

Group2374.children.append(OrientationInterpolator2380)
OrientationInterpolator2381 = x3d.OrientationInterpolator()
OrientationInterpolator2381.DEF = "Yaws_l_knee_RotationInterpolator"
OrientationInterpolator2381.key = [0,0.25,0.5,0.75,1]

Group2374.children.append(OrientationInterpolator2381)
OrientationInterpolator2382 = x3d.OrientationInterpolator()
OrientationInterpolator2382.DEF = "Yaws_l_hip_RotationInterpolator"
OrientationInterpolator2382.key = [0,0.5,1]

Group2374.children.append(OrientationInterpolator2382)
OrientationInterpolator2383 = x3d.OrientationInterpolator()
OrientationInterpolator2383.DEF = "Yaws_r_radiocarpal_RotationInterpolator"
OrientationInterpolator2383.key = [0,0.5,1]

Group2374.children.append(OrientationInterpolator2383)
OrientationInterpolator2384 = x3d.OrientationInterpolator()
OrientationInterpolator2384.DEF = "Yaws_r_elbow_RotationInterpolator"
OrientationInterpolator2384.key = [0,0.5,1]

Group2374.children.append(OrientationInterpolator2384)
OrientationInterpolator2385 = x3d.OrientationInterpolator()
OrientationInterpolator2385.DEF = "Yaws_r_shoulder_RotationInterpolator"
OrientationInterpolator2385.key = [0,0.5,1]

Group2374.children.append(OrientationInterpolator2385)
OrientationInterpolator2386 = x3d.OrientationInterpolator()
OrientationInterpolator2386.DEF = "Yaws_l_radiocarpal_RotationInterpolator"
OrientationInterpolator2386.key = [0,0.5,1]

Group2374.children.append(OrientationInterpolator2386)
OrientationInterpolator2387 = x3d.OrientationInterpolator()
OrientationInterpolator2387.DEF = "Yaws_l_elbow_RotationInterpolator"
OrientationInterpolator2387.key = [0,0.5,1]

Group2374.children.append(OrientationInterpolator2387)
OrientationInterpolator2388 = x3d.OrientationInterpolator()
OrientationInterpolator2388.DEF = "Yaws_l_shoulder_RotationInterpolator"
OrientationInterpolator2388.key = [0,0.5,1]

Group2374.children.append(OrientationInterpolator2388)
OrientationInterpolator2389 = x3d.OrientationInterpolator()
OrientationInterpolator2389.DEF = "Yaws_head_RotationInterpolator"
OrientationInterpolator2389.key = [0,0.5,1]

Group2374.children.append(OrientationInterpolator2389)
OrientationInterpolator2390 = x3d.OrientationInterpolator()
OrientationInterpolator2390.DEF = "Yaws_neck_RotationInterpolator"
OrientationInterpolator2390.key = [0,0.25,0.5,0.75,1]

Group2374.children.append(OrientationInterpolator2390)
OrientationInterpolator2391 = x3d.OrientationInterpolator()
OrientationInterpolator2391.DEF = "Yaws_upper_body_RotationInterpolator"
OrientationInterpolator2391.key = [0,0.25,0.5,0.75,1]

Group2374.children.append(OrientationInterpolator2391)
OrientationInterpolator2392 = x3d.OrientationInterpolator()
OrientationInterpolator2392.DEF = "Yaws_lower_body_RotationInterpolator"
OrientationInterpolator2392.key = [0,0.5,1]

Group2374.children.append(OrientationInterpolator2392)
OrientationInterpolator2393 = x3d.OrientationInterpolator()
OrientationInterpolator2393.DEF = "Yaws_whole_body_RotationInterpolator"
OrientationInterpolator2393.key = [0,0.5,1]

Group2374.children.append(OrientationInterpolator2393)
PositionInterpolator2394 = x3d.PositionInterpolator()
PositionInterpolator2394.DEF = "Yaws_whole_body_TranslationInterpolator"
PositionInterpolator2394.key = [0,0.5,1]

Group2374.children.append(PositionInterpolator2394)
OrientationInterpolator2395 = x3d.OrientationInterpolator()
OrientationInterpolator2395.DEF = "Yaw_l_sternoclavicular_RollInterpolator"
OrientationInterpolator2395.key = [0,0.2,0.4,0.6,0.8,1]

Group2374.children.append(OrientationInterpolator2395)
OrientationInterpolator2396 = x3d.OrientationInterpolator()
OrientationInterpolator2396.DEF = "Yaw_l_acromioclavicular_RollInterpolator"
OrientationInterpolator2396.key = [0,0.2,0.4,0.6,0.8,1]

Group2374.children.append(OrientationInterpolator2396)
OrientationInterpolator2397 = x3d.OrientationInterpolator()
OrientationInterpolator2397.DEF = "Yaw_r_sternoclavicular_RollInterpolator"
OrientationInterpolator2397.key = [0,0.2,0.4,0.6,0.8,1]

Group2374.children.append(OrientationInterpolator2397)
OrientationInterpolator2398 = x3d.OrientationInterpolator()
OrientationInterpolator2398.DEF = "Yaw_r_acromioclavicular_RollInterpolator"
OrientationInterpolator2398.key = [0,0.2,0.4,0.6,0.8,1]

Group2374.children.append(OrientationInterpolator2398)
OrientationInterpolator2399 = x3d.OrientationInterpolator()
OrientationInterpolator2399.DEF = "Yaw_sacroiliac_YawInterpolator"
OrientationInterpolator2399.key = [0,0.2,0.4,0.6,0.8,1]

Group2374.children.append(OrientationInterpolator2399)
OrientationInterpolator2400 = x3d.OrientationInterpolator()
OrientationInterpolator2400.DEF = "Yaw_vl5_YawInterpolator"
OrientationInterpolator2400.key = [0,0.2,0.4,0.5,0.6,0.8,1]

Group2374.children.append(OrientationInterpolator2400)
OrientationInterpolator2401 = x3d.OrientationInterpolator()
OrientationInterpolator2401.DEF = "Yaw_vc6_YawInterpolator"
OrientationInterpolator2401.key = [0,0.2,0.4,0.5,0.6,0.8,1]

Group2374.children.append(OrientationInterpolator2401)
OrientationInterpolator2402 = x3d.OrientationInterpolator()
OrientationInterpolator2402.DEF = "Yaw_l_thumb1_PitchInterpolator"
OrientationInterpolator2402.key = [0,0.2,0.4,0.6,0.8,1]

Group2374.children.append(OrientationInterpolator2402)
OrientationInterpolator2403 = x3d.OrientationInterpolator()
OrientationInterpolator2403.DEF = "Yaw_r_thumb1_PitchInterpolator"
OrientationInterpolator2403.key = [0,0.2,0.4,0.6,0.8,1]

Group2374.children.append(OrientationInterpolator2403)

Scene22.children.append(Group2374)
Group2404 = x3d.Group()
Group2404.DEF = "RollsAnimation"
TimeSensor2405 = x3d.TimeSensor()
TimeSensor2405.DEF = "RollTimer"
TimeSensor2405.cycleInterval = 5.73
TimeSensor2405.loop = True

Group2404.children.append(TimeSensor2405)
OrientationInterpolator2406 = x3d.OrientationInterpolator()
OrientationInterpolator2406.DEF = "Roll_r_metatarsal_PitchInterpolator"
OrientationInterpolator2406.key = [0,0.2,0.4,0.6,0.7,1]

Group2404.children.append(OrientationInterpolator2406)
OrientationInterpolator2407 = x3d.OrientationInterpolator()
OrientationInterpolator2407.DEF = "Rolls_r_talocrural_RotationInterpolator"
OrientationInterpolator2407.key = [0,0.25,0.5,0.75,1]

Group2404.children.append(OrientationInterpolator2407)
OrientationInterpolator2408 = x3d.OrientationInterpolator()
OrientationInterpolator2408.DEF = "Rolls_r_knee_RotationInterpolator"
OrientationInterpolator2408.key = [0,0.5,1]

Group2404.children.append(OrientationInterpolator2408)
OrientationInterpolator2409 = x3d.OrientationInterpolator()
OrientationInterpolator2409.DEF = "Rolls_r_hip_RotationInterpolator"
OrientationInterpolator2409.key = [0,0.25,0.5,0.75,1]

Group2404.children.append(OrientationInterpolator2409)
OrientationInterpolator2410 = x3d.OrientationInterpolator()
OrientationInterpolator2410.DEF = "Rolls_l_talocrural_RotationInterpolator"
OrientationInterpolator2410.key = [0,0.25,0.5,0.75,1]

Group2404.children.append(OrientationInterpolator2410)
OrientationInterpolator2411 = x3d.OrientationInterpolator()
OrientationInterpolator2411.DEF = "Rolls_l_knee_RotationInterpolator"
OrientationInterpolator2411.key = [0,0.5,1]

Group2404.children.append(OrientationInterpolator2411)
OrientationInterpolator2412 = x3d.OrientationInterpolator()
OrientationInterpolator2412.DEF = "Rolls_l_hip_RotationInterpolator"
OrientationInterpolator2412.key = [0,0.25,0.5,0.75,1]

Group2404.children.append(OrientationInterpolator2412)
OrientationInterpolator2413 = x3d.OrientationInterpolator()
OrientationInterpolator2413.DEF = "Rolls_r_radiocarpal_RotationInterpolator"
OrientationInterpolator2413.key = [0,0.25,0.5,0.75,1]

Group2404.children.append(OrientationInterpolator2413)
OrientationInterpolator2414 = x3d.OrientationInterpolator()
OrientationInterpolator2414.DEF = "Rolls_r_elbow_RotationInterpolator"
OrientationInterpolator2414.key = [0,0.5,1]

Group2404.children.append(OrientationInterpolator2414)
OrientationInterpolator2415 = x3d.OrientationInterpolator()
OrientationInterpolator2415.DEF = "Rolls_r_shoulder_RotationInterpolator"
OrientationInterpolator2415.key = [0,0.25,0.5,0.75,1]

Group2404.children.append(OrientationInterpolator2415)
OrientationInterpolator2416 = x3d.OrientationInterpolator()
OrientationInterpolator2416.DEF = "Rolls_l_radiocarpal_RotationInterpolator"
OrientationInterpolator2416.key = [0,0.25,0.5,0.75,1]

Group2404.children.append(OrientationInterpolator2416)
OrientationInterpolator2417 = x3d.OrientationInterpolator()
OrientationInterpolator2417.DEF = "Rolls_l_elbow_RotationInterpolator"
OrientationInterpolator2417.key = [0,0.5,1]

Group2404.children.append(OrientationInterpolator2417)
OrientationInterpolator2418 = x3d.OrientationInterpolator()
OrientationInterpolator2418.DEF = "Rolls_l_shoulder_RotationInterpolator"
OrientationInterpolator2418.key = [0,0.25,0.5,0.75,1]

Group2404.children.append(OrientationInterpolator2418)
OrientationInterpolator2419 = x3d.OrientationInterpolator()
OrientationInterpolator2419.DEF = "Rolls_head_RotationInterpolator"
OrientationInterpolator2419.key = [0,0.5,1]

Group2404.children.append(OrientationInterpolator2419)
OrientationInterpolator2420 = x3d.OrientationInterpolator()
OrientationInterpolator2420.DEF = "Rolls_neck_RotationInterpolator"
OrientationInterpolator2420.key = [0,0.25,0.5,0.75,1]

Group2404.children.append(OrientationInterpolator2420)
OrientationInterpolator2421 = x3d.OrientationInterpolator()
OrientationInterpolator2421.DEF = "Rolls_lower_body_RotationInterpolator"
OrientationInterpolator2421.key = [0,0.5,1]

Group2404.children.append(OrientationInterpolator2421)
OrientationInterpolator2422 = x3d.OrientationInterpolator()
OrientationInterpolator2422.DEF = "Rolls_upper_body_RotationInterpolator"
OrientationInterpolator2422.key = [0,0.5,1]

Group2404.children.append(OrientationInterpolator2422)
OrientationInterpolator2423 = x3d.OrientationInterpolator()
OrientationInterpolator2423.DEF = "Rolls_whole_body_RotationInterpolator"
OrientationInterpolator2423.key = [0,0.5,1]

Group2404.children.append(OrientationInterpolator2423)
PositionInterpolator2424 = x3d.PositionInterpolator()
PositionInterpolator2424.DEF = "Rolls_whole_body_TranslationInterpolator"
PositionInterpolator2424.key = [0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]

Group2404.children.append(PositionInterpolator2424)
OrientationInterpolator2425 = x3d.OrientationInterpolator()
OrientationInterpolator2425.DEF = "Roll_l_sternoclavicular_RollInterpolator"
OrientationInterpolator2425.key = [0,0.2,0.4,0.6,0.8,1]

Group2404.children.append(OrientationInterpolator2425)
OrientationInterpolator2426 = x3d.OrientationInterpolator()
OrientationInterpolator2426.DEF = "Roll_l_acromioclavicular_RollInterpolator"
OrientationInterpolator2426.key = [0,0.2,0.4,0.6,0.8,1]

Group2404.children.append(OrientationInterpolator2426)
OrientationInterpolator2427 = x3d.OrientationInterpolator()
OrientationInterpolator2427.DEF = "Roll_r_sternoclavicular_RollInterpolator"
OrientationInterpolator2427.key = [0,0.2,0.4,0.6,0.8,1]

Group2404.children.append(OrientationInterpolator2427)
OrientationInterpolator2428 = x3d.OrientationInterpolator()
OrientationInterpolator2428.DEF = "Roll_r_acromioclavicular_RollInterpolator"
OrientationInterpolator2428.key = [0,0.2,0.4,0.6,0.8,1]

Group2404.children.append(OrientationInterpolator2428)
OrientationInterpolator2429 = x3d.OrientationInterpolator()
OrientationInterpolator2429.DEF = "Roll_sacroiliac_YawInterpolator"
OrientationInterpolator2429.key = [0,0.2,0.4,0.6,0.8,1]

Group2404.children.append(OrientationInterpolator2429)
OrientationInterpolator2430 = x3d.OrientationInterpolator()
OrientationInterpolator2430.DEF = "Roll_vl5_YawInterpolator"
OrientationInterpolator2430.key = [0,0.2,0.4,0.5,0.6,0.8,1]

Group2404.children.append(OrientationInterpolator2430)
OrientationInterpolator2431 = x3d.OrientationInterpolator()
OrientationInterpolator2431.DEF = "Roll_vc6_YawInterpolator"
OrientationInterpolator2431.key = [0,0.2,0.4,0.5,0.6,0.8,1]

Group2404.children.append(OrientationInterpolator2431)
OrientationInterpolator2432 = x3d.OrientationInterpolator()
OrientationInterpolator2432.DEF = "Roll_l_thumb1_PitchInterpolator"
OrientationInterpolator2432.key = [0,0.2,0.4,0.6,0.8,1]

Group2404.children.append(OrientationInterpolator2432)
OrientationInterpolator2433 = x3d.OrientationInterpolator()
OrientationInterpolator2433.DEF = "Roll_r_thumb1_PitchInterpolator"
OrientationInterpolator2433.key = [0,0.2,0.4,0.6,0.8,1]

Group2404.children.append(OrientationInterpolator2433)

Scene22.children.append(Group2404)
Group2434 = x3d.Group()
Group2434.DEF = "WalkAnimation"
TimeSensor2435 = x3d.TimeSensor()
TimeSensor2435.DEF = "WalkTimer"
TimeSensor2435.cycleInterval = 1.73
TimeSensor2435.loop = True

Group2434.children.append(TimeSensor2435)
OrientationInterpolator2436 = x3d.OrientationInterpolator()
OrientationInterpolator2436.DEF = "Walk_r_metatarsal_PitchInterpolator"
OrientationInterpolator2436.key = [0,0.2,0.4,0.6,0.7,1]

Group2434.children.append(OrientationInterpolator2436)
OrientationInterpolator2437 = x3d.OrientationInterpolator()
OrientationInterpolator2437.DEF = "Walk_r_talocrural_RotationInterpolator"
OrientationInterpolator2437.key = [0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]

Group2434.children.append(OrientationInterpolator2437)
OrientationInterpolator2438 = x3d.OrientationInterpolator()
OrientationInterpolator2438.DEF = "Walk_r_knee_RotationInterpolator"
OrientationInterpolator2438.key = [0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]

Group2434.children.append(OrientationInterpolator2438)
OrientationInterpolator2439 = x3d.OrientationInterpolator()
OrientationInterpolator2439.DEF = "Walk_r_hip_RotationInterpolator"
OrientationInterpolator2439.key = [0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]

Group2434.children.append(OrientationInterpolator2439)
OrientationInterpolator2440 = x3d.OrientationInterpolator()
OrientationInterpolator2440.DEF = "Walk_l_talocrural_RotationInterpolator"
OrientationInterpolator2440.key = [0,0.125,0.2083,0.375,0.6667,0.9167,1]

Group2434.children.append(OrientationInterpolator2440)
OrientationInterpolator2441 = x3d.OrientationInterpolator()
OrientationInterpolator2441.DEF = "Walk_l_knee_RotationInterpolator"
OrientationInterpolator2441.key = [0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]

Group2434.children.append(OrientationInterpolator2441)
OrientationInterpolator2442 = x3d.OrientationInterpolator()
OrientationInterpolator2442.DEF = "Walk_l_hip_RotationInterpolator"
OrientationInterpolator2442.key = [0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]

Group2434.children.append(OrientationInterpolator2442)
OrientationInterpolator2443 = x3d.OrientationInterpolator()
OrientationInterpolator2443.DEF = "Walk_lower_body_RotationInterpolator"
OrientationInterpolator2443.key = [0,0.5,1]

Group2434.children.append(OrientationInterpolator2443)
OrientationInterpolator2444 = x3d.OrientationInterpolator()
OrientationInterpolator2444.DEF = "Walk_r_radiocarpal_RotationInterpolator"
OrientationInterpolator2444.key = [0,0.375,0.9167,1]

Group2434.children.append(OrientationInterpolator2444)
OrientationInterpolator2445 = x3d.OrientationInterpolator()
OrientationInterpolator2445.DEF = "Walk_r_elbow_RotationInterpolator"
OrientationInterpolator2445.key = [0,0.375,0.9167,1]

Group2434.children.append(OrientationInterpolator2445)
OrientationInterpolator2446 = x3d.OrientationInterpolator()
OrientationInterpolator2446.DEF = "Walk_r_shoulder_RotationInterpolator"
OrientationInterpolator2446.key = [0,0.375,0.9167,1]

Group2434.children.append(OrientationInterpolator2446)
OrientationInterpolator2447 = x3d.OrientationInterpolator()
OrientationInterpolator2447.DEF = "Walk_l_radiocarpal_RotationInterpolator"
OrientationInterpolator2447.key = [0,0.375,0.9167,1]

Group2434.children.append(OrientationInterpolator2447)
OrientationInterpolator2448 = x3d.OrientationInterpolator()
OrientationInterpolator2448.DEF = "Walk_l_elbow_RotationInterpolator"
OrientationInterpolator2448.key = [0,0.375,0.9167,1]

Group2434.children.append(OrientationInterpolator2448)
OrientationInterpolator2449 = x3d.OrientationInterpolator()
OrientationInterpolator2449.DEF = "Walk_l_shoulder_RotationInterpolator"
OrientationInterpolator2449.key = [0,0.375,0.9167,1]

Group2434.children.append(OrientationInterpolator2449)
OrientationInterpolator2450 = x3d.OrientationInterpolator()
OrientationInterpolator2450.DEF = "Walk_head_RotationInterpolator"
OrientationInterpolator2450.key = [0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]

Group2434.children.append(OrientationInterpolator2450)
OrientationInterpolator2451 = x3d.OrientationInterpolator()
OrientationInterpolator2451.DEF = "Walk_neck_RotationInterpolator"
OrientationInterpolator2451.key = [0,1]

Group2434.children.append(OrientationInterpolator2451)
OrientationInterpolator2452 = x3d.OrientationInterpolator()
OrientationInterpolator2452.DEF = "Walk_upper_body_RotationInterpolator"
OrientationInterpolator2452.key = [0,0.2083,0.375,0.75,0.8333,1]

Group2434.children.append(OrientationInterpolator2452)
OrientationInterpolator2453 = x3d.OrientationInterpolator()
OrientationInterpolator2453.DEF = "Walk_whole_body_RotationInterpolator"
OrientationInterpolator2453.key = [0,1]

Group2434.children.append(OrientationInterpolator2453)
PositionInterpolator2454 = x3d.PositionInterpolator()
PositionInterpolator2454.DEF = "Walk_whole_body_TranslationInterpolator"
PositionInterpolator2454.key = [0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]

Group2434.children.append(PositionInterpolator2454)
OrientationInterpolator2455 = x3d.OrientationInterpolator()
OrientationInterpolator2455.DEF = "Walk_l_sternoclavicular_RollInterpolator"
OrientationInterpolator2455.key = [0,0.2,0.4,0.6,0.8,1]

Group2434.children.append(OrientationInterpolator2455)
OrientationInterpolator2456 = x3d.OrientationInterpolator()
OrientationInterpolator2456.DEF = "Walk_l_acromioclavicular_RollInterpolator"
OrientationInterpolator2456.key = [0,0.2,0.4,0.6,0.8,1]

Group2434.children.append(OrientationInterpolator2456)
OrientationInterpolator2457 = x3d.OrientationInterpolator()
OrientationInterpolator2457.DEF = "Walk_r_sternoclavicular_RollInterpolator"
OrientationInterpolator2457.key = [0,0.2,0.4,0.6,0.8,1]

Group2434.children.append(OrientationInterpolator2457)
OrientationInterpolator2458 = x3d.OrientationInterpolator()
OrientationInterpolator2458.DEF = "Walk_r_acromioclavicular_RollInterpolator"
OrientationInterpolator2458.key = [0,0.2,0.4,0.6,0.8,1]

Group2434.children.append(OrientationInterpolator2458)
OrientationInterpolator2459 = x3d.OrientationInterpolator()
OrientationInterpolator2459.DEF = "Walk_sacroiliac_YawInterpolator"
OrientationInterpolator2459.key = [0,0.2,0.4,0.6,0.8,1]

Group2434.children.append(OrientationInterpolator2459)
OrientationInterpolator2460 = x3d.OrientationInterpolator()
OrientationInterpolator2460.DEF = "Walk_vl5_YawInterpolator"
OrientationInterpolator2460.key = [0,0.2,0.4,0.5,0.6,0.8,1]

Group2434.children.append(OrientationInterpolator2460)
OrientationInterpolator2461 = x3d.OrientationInterpolator()
OrientationInterpolator2461.DEF = "Walk_vc6_YawInterpolator"
OrientationInterpolator2461.key = [0,0.2,0.4,0.5,0.6,0.8,1]

Group2434.children.append(OrientationInterpolator2461)
OrientationInterpolator2462 = x3d.OrientationInterpolator()
OrientationInterpolator2462.DEF = "Walk_l_thumb1_PitchInterpolator"
OrientationInterpolator2462.key = [0,0.2,0.4,0.6,0.8,1]

Group2434.children.append(OrientationInterpolator2462)
OrientationInterpolator2463 = x3d.OrientationInterpolator()
OrientationInterpolator2463.DEF = "Walk_r_thumb1_PitchInterpolator"
OrientationInterpolator2463.key = [0,0.2,0.4,0.6,0.8,1]

Group2434.children.append(OrientationInterpolator2463)

Scene22.children.append(Group2434)
Group2464 = x3d.Group()
Group2464.DEF = "RunAnimation"
TimeSensor2465 = x3d.TimeSensor()
TimeSensor2465.DEF = "RunTimer"
TimeSensor2465.cycleInterval = 0.9
TimeSensor2465.loop = True

Group2464.children.append(TimeSensor2465)
OrientationInterpolator2466 = x3d.OrientationInterpolator()
OrientationInterpolator2466.DEF = "Run_r_metatarsal_PitchInterpolator"
OrientationInterpolator2466.key = [0,0.2,0.4,0.6,0.7,1]

Group2464.children.append(OrientationInterpolator2466)
OrientationInterpolator2467 = x3d.OrientationInterpolator()
OrientationInterpolator2467.DEF = "Run_l_hip_RotationInterpolator_Run"
OrientationInterpolator2467.key = [0,0.2182,0.4909,0.7455,1]

Group2464.children.append(OrientationInterpolator2467)
OrientationInterpolator2468 = x3d.OrientationInterpolator()
OrientationInterpolator2468.DEF = "Run_l_knee_RotationInterpolator_Run"
OrientationInterpolator2468.key = [0,0.2182,0.4909,0.7455,1]

Group2464.children.append(OrientationInterpolator2468)
OrientationInterpolator2469 = x3d.OrientationInterpolator()
OrientationInterpolator2469.DEF = "Run_l_talocrural_RotationInterpolator_Run"
OrientationInterpolator2469.key = [0,0.22,0.3,0.4,1]

Group2464.children.append(OrientationInterpolator2469)
OrientationInterpolator2470 = x3d.OrientationInterpolator()
OrientationInterpolator2470.DEF = "Run_r_hip_RotationInterpolator_Run"
OrientationInterpolator2470.key = [0,0.2545,0.4909,0.7091,1]

Group2464.children.append(OrientationInterpolator2470)
OrientationInterpolator2471 = x3d.OrientationInterpolator()
OrientationInterpolator2471.DEF = "Run_r_knee_RotationInterpolator_Run"
OrientationInterpolator2471.key = [0,0.2545,0.4909,0.7091,1]

Group2464.children.append(OrientationInterpolator2471)
OrientationInterpolator2472 = x3d.OrientationInterpolator()
OrientationInterpolator2472.DEF = "Run_r_talocrural_RotationInterpolator_Run"
OrientationInterpolator2472.key = [0,0.4,0.71,0.8,0.82,1]

Group2464.children.append(OrientationInterpolator2472)
OrientationInterpolator2473 = x3d.OrientationInterpolator()
OrientationInterpolator2473.DEF = "Run_l_shoulder_RotationInterpolator_Run"
OrientationInterpolator2473.key = [0,0.2182,0.4909,0.7455,1]

Group2464.children.append(OrientationInterpolator2473)
OrientationInterpolator2474 = x3d.OrientationInterpolator()
OrientationInterpolator2474.DEF = "Run_l_elbow_RotationInterpolator_Run"
OrientationInterpolator2474.key = [0,0.2182,0.4909,0.7455,1]

Group2464.children.append(OrientationInterpolator2474)
OrientationInterpolator2475 = x3d.OrientationInterpolator()
OrientationInterpolator2475.DEF = "Run_l_radiocarpal_RotationInterpolator_Run"
OrientationInterpolator2475.key = [0,0.25,0.5,0.75,1]

Group2464.children.append(OrientationInterpolator2475)
OrientationInterpolator2476 = x3d.OrientationInterpolator()
OrientationInterpolator2476.DEF = "Run_r_shoulder_RotationInterpolator_Run"
OrientationInterpolator2476.key = [0,0.2545,0.4909,0.7091,1]

Group2464.children.append(OrientationInterpolator2476)
OrientationInterpolator2477 = x3d.OrientationInterpolator()
OrientationInterpolator2477.DEF = "Run_r_elbow_RotationInterpolator_Run"
OrientationInterpolator2477.key = [0,0.2545,0.4909,0.7091,1]

Group2464.children.append(OrientationInterpolator2477)
OrientationInterpolator2478 = x3d.OrientationInterpolator()
OrientationInterpolator2478.DEF = "Run_r_radiocarpal_RotationInterpolator_Run"
OrientationInterpolator2478.key = [0,1]

Group2464.children.append(OrientationInterpolator2478)
OrientationInterpolator2479 = x3d.OrientationInterpolator()
OrientationInterpolator2479.DEF = "Run_lower_body_RotationInterpolator_Run"
OrientationInterpolator2479.key = [0,0.2182,0.4909,0.7455,1]

Group2464.children.append(OrientationInterpolator2479)
OrientationInterpolator2480 = x3d.OrientationInterpolator()
OrientationInterpolator2480.DEF = "Run_head_RotationInterpolator_Run"
OrientationInterpolator2480.key = [0,0.2545,0.4909,0.7091,1]

Group2464.children.append(OrientationInterpolator2480)
OrientationInterpolator2481 = x3d.OrientationInterpolator()
OrientationInterpolator2481.DEF = "Run_neck_RotationInterpolator_Run"
OrientationInterpolator2481.key = [0,0.2545,0.4909,0.7091,1]

Group2464.children.append(OrientationInterpolator2481)
OrientationInterpolator2482 = x3d.OrientationInterpolator()
OrientationInterpolator2482.DEF = "Run_upper_body_RotationInterpolator_Run"
OrientationInterpolator2482.key = [0,0.2545,0.4909,0.7636,1]

Group2464.children.append(OrientationInterpolator2482)
OrientationInterpolator2483 = x3d.OrientationInterpolator()
OrientationInterpolator2483.DEF = "Run_whole_body_RotationInterpolator_Run"
OrientationInterpolator2483.key = [0,0.25,0.5,0.75,1]

Group2464.children.append(OrientationInterpolator2483)
PositionInterpolator2484 = x3d.PositionInterpolator()
PositionInterpolator2484.DEF = "Run_whole_body_TranslationInterpolator_Run"
PositionInterpolator2484.key = [0,0.22,0.3,0.31,0.5,0.69,0.7,0.78,1]

Group2464.children.append(PositionInterpolator2484)
OrientationInterpolator2485 = x3d.OrientationInterpolator()
OrientationInterpolator2485.DEF = "Run_l_sternoclavicular_RollInterpolator"
OrientationInterpolator2485.key = [0,0.2,0.4,0.6,0.8,1]

Group2464.children.append(OrientationInterpolator2485)
OrientationInterpolator2486 = x3d.OrientationInterpolator()
OrientationInterpolator2486.DEF = "Run_l_acromioclavicular_RollInterpolator"
OrientationInterpolator2486.key = [0,0.2,0.4,0.6,0.8,1]

Group2464.children.append(OrientationInterpolator2486)
OrientationInterpolator2487 = x3d.OrientationInterpolator()
OrientationInterpolator2487.DEF = "Run_r_sternoclavicular_RollInterpolator"
OrientationInterpolator2487.key = [0,0.2,0.4,0.6,0.8,1]

Group2464.children.append(OrientationInterpolator2487)
OrientationInterpolator2488 = x3d.OrientationInterpolator()
OrientationInterpolator2488.DEF = "Run_r_acromioclavicular_RollInterpolator"
OrientationInterpolator2488.key = [0,0.2,0.4,0.6,0.8,1]

Group2464.children.append(OrientationInterpolator2488)
OrientationInterpolator2489 = x3d.OrientationInterpolator()
OrientationInterpolator2489.DEF = "Run_sacroiliac_YawInterpolator"
OrientationInterpolator2489.key = [0,0.2,0.4,0.6,0.8,1]

Group2464.children.append(OrientationInterpolator2489)
OrientationInterpolator2490 = x3d.OrientationInterpolator()
OrientationInterpolator2490.DEF = "Run_vl5_YawInterpolator"
OrientationInterpolator2490.key = [0,0.2,0.4,0.5,0.6,0.8,1]

Group2464.children.append(OrientationInterpolator2490)
OrientationInterpolator2491 = x3d.OrientationInterpolator()
OrientationInterpolator2491.DEF = "Run_vc6_YawInterpolator"
OrientationInterpolator2491.key = [0,0.2,0.4,0.5,0.6,0.8,1]

Group2464.children.append(OrientationInterpolator2491)
OrientationInterpolator2492 = x3d.OrientationInterpolator()
OrientationInterpolator2492.DEF = "Run_l_thumb1_PitchInterpolator"
OrientationInterpolator2492.key = [0,0.2,0.4,0.6,0.8,1]

Group2464.children.append(OrientationInterpolator2492)
OrientationInterpolator2493 = x3d.OrientationInterpolator()
OrientationInterpolator2493.DEF = "Run_r_thumb1_PitchInterpolator"
OrientationInterpolator2493.key = [0,0.2,0.4,0.6,0.8,1]

Group2464.children.append(OrientationInterpolator2493)

Scene22.children.append(Group2464)
Group2494 = x3d.Group()
Group2494.DEF = "JumpAnimation"
TimeSensor2495 = x3d.TimeSensor()
TimeSensor2495.DEF = "JumpTimer"
TimeSensor2495.cycleInterval = 3.73
TimeSensor2495.loop = True

Group2494.children.append(TimeSensor2495)
OrientationInterpolator2496 = x3d.OrientationInterpolator()
OrientationInterpolator2496.DEF = "Jump_r_metatarsal_PitchInterpolator"
OrientationInterpolator2496.key = [0,0.2,0.4,0.6,0.7,1]

Group2494.children.append(OrientationInterpolator2496)
OrientationInterpolator2497 = x3d.OrientationInterpolator()
OrientationInterpolator2497.DEF = "Jump_r_talocrural_RotationInterpolator"
OrientationInterpolator2497.key = [0,0.1,0.15,0.25,0.28,0.32,0.35,0.64,0.76,0.84,0.88,0.92,0.96,1]

Group2494.children.append(OrientationInterpolator2497)
OrientationInterpolator2498 = x3d.OrientationInterpolator()
OrientationInterpolator2498.DEF = "Jump_r_knee_RotationInterpolator"
OrientationInterpolator2498.key = [0,0.2,0.25,0.3,0.64,0.76,0.88,1]

Group2494.children.append(OrientationInterpolator2498)
OrientationInterpolator2499 = x3d.OrientationInterpolator()
OrientationInterpolator2499.DEF = "Jump_r_hip_RotationInterpolator"
OrientationInterpolator2499.key = [0,0.18,0.24,0.26,0.28,0.32,0.48,0.64,0.76,0.88,1]

Group2494.children.append(OrientationInterpolator2499)
OrientationInterpolator2500 = x3d.OrientationInterpolator()
OrientationInterpolator2500.DEF = "Jump_l_talocrural_RotationInterpolator"
OrientationInterpolator2500.key = [0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1]

Group2494.children.append(OrientationInterpolator2500)
OrientationInterpolator2501 = x3d.OrientationInterpolator()
OrientationInterpolator2501.DEF = "Jump_l_knee_RotationInterpolator"
OrientationInterpolator2501.key = [0,0.28,0.32,0.48,0.64,0.76,0.88,1]

Group2494.children.append(OrientationInterpolator2501)
OrientationInterpolator2502 = x3d.OrientationInterpolator()
OrientationInterpolator2502.DEF = "Jump_l_hip_RotationInterpolator"
OrientationInterpolator2502.key = [0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1]

Group2494.children.append(OrientationInterpolator2502)
OrientationInterpolator2503 = x3d.OrientationInterpolator()
OrientationInterpolator2503.DEF = "Jump_lower_body_RotationInterpolator"
OrientationInterpolator2503.key = [0,0.28,0.32,0.48,0.76,1]

Group2494.children.append(OrientationInterpolator2503)
OrientationInterpolator2504 = x3d.OrientationInterpolator()
OrientationInterpolator2504.DEF = "Jump_r_radiocarpal_RotationInterpolator"
OrientationInterpolator2504.key = [0,0.28,0.32,0.64,0.76,1]

Group2494.children.append(OrientationInterpolator2504)
OrientationInterpolator2505 = x3d.OrientationInterpolator()
OrientationInterpolator2505.DEF = "Jump_r_elbow_RotationInterpolator"
OrientationInterpolator2505.key = [0,0.28,0.32,0.64,0.76,1]

Group2494.children.append(OrientationInterpolator2505)
OrientationInterpolator2506 = x3d.OrientationInterpolator()
OrientationInterpolator2506.DEF = "Jump_r_shoulder_RotationInterpolator"
OrientationInterpolator2506.key = [0,0.28,0.32,0.64,0.76,0.88,1]

Group2494.children.append(OrientationInterpolator2506)
OrientationInterpolator2507 = x3d.OrientationInterpolator()
OrientationInterpolator2507.DEF = "Jump_l_radiocarpal_RotationInterpolator"
OrientationInterpolator2507.key = [0,0.48,0.52,0.64,0.76,0.88,1]

Group2494.children.append(OrientationInterpolator2507)
OrientationInterpolator2508 = x3d.OrientationInterpolator()
OrientationInterpolator2508.DEF = "Jump_l_elbow_RotationInterpolator"
OrientationInterpolator2508.key = [0,0.28,0.32,0.58,0.72,1]

Group2494.children.append(OrientationInterpolator2508)
OrientationInterpolator2509 = x3d.OrientationInterpolator()
OrientationInterpolator2509.DEF = "Jump_l_shoulder_RotationInterpolator"
OrientationInterpolator2509.key = [0,0.28,0.32,0.64,0.76,0.88,1]

Group2494.children.append(OrientationInterpolator2509)
OrientationInterpolator2510 = x3d.OrientationInterpolator()
OrientationInterpolator2510.DEF = "Jump_head_RotationInterpolator"
OrientationInterpolator2510.key = [0,0.28,0.32,0.48,0.76,1]

Group2494.children.append(OrientationInterpolator2510)
OrientationInterpolator2511 = x3d.OrientationInterpolator()
OrientationInterpolator2511.DEF = "Jump_neck_RotationInterpolator"
OrientationInterpolator2511.key = [0,0.28,0.32,0.48,0.76,1]

Group2494.children.append(OrientationInterpolator2511)
OrientationInterpolator2512 = x3d.OrientationInterpolator()
OrientationInterpolator2512.DEF = "Jump_upper_body_RotationInterpolator"
OrientationInterpolator2512.key = [0,0.22,0.28,0.34,0.71,0.88,1]

Group2494.children.append(OrientationInterpolator2512)
OrientationInterpolator2513 = x3d.OrientationInterpolator()
OrientationInterpolator2513.DEF = "Jump_whole_body_RotationInterpolator"
OrientationInterpolator2513.key = [0,0.28,0.32,0.48,0.64,0.76,1]

Group2494.children.append(OrientationInterpolator2513)
PositionInterpolator2514 = x3d.PositionInterpolator()
PositionInterpolator2514.DEF = "Jump_whole_body_TranslationInterpolator"
PositionInterpolator2514.key = [0,0.04,0.07,0.11,0.15,0.19,0.22,0.25,0.27,0.31,0.33,0.35,0.38,0.53,0.544,0.76,0.8,0.84,0.88,0.92,0.96,1]

Group2494.children.append(PositionInterpolator2514)
OrientationInterpolator2515 = x3d.OrientationInterpolator()
OrientationInterpolator2515.DEF = "Jump_l_sternoclavicular_RollInterpolator"
OrientationInterpolator2515.key = [0,0.2,0.4,0.6,0.8,1]

Group2494.children.append(OrientationInterpolator2515)
OrientationInterpolator2516 = x3d.OrientationInterpolator()
OrientationInterpolator2516.DEF = "Jump_l_acromioclavicular_RollInterpolator"
OrientationInterpolator2516.key = [0,0.2,0.4,0.6,0.8,1]

Group2494.children.append(OrientationInterpolator2516)
OrientationInterpolator2517 = x3d.OrientationInterpolator()
OrientationInterpolator2517.DEF = "Jump_r_sternoclavicular_RollInterpolator"
OrientationInterpolator2517.key = [0,0.2,0.4,0.6,0.8,1]

Group2494.children.append(OrientationInterpolator2517)
OrientationInterpolator2518 = x3d.OrientationInterpolator()
OrientationInterpolator2518.DEF = "Jump_r_acromioclavicular_RollInterpolator"
OrientationInterpolator2518.key = [0,0.2,0.4,0.6,0.8,1]

Group2494.children.append(OrientationInterpolator2518)
OrientationInterpolator2519 = x3d.OrientationInterpolator()
OrientationInterpolator2519.DEF = "Jump_sacroiliac_YawInterpolator"
OrientationInterpolator2519.key = [0,0.2,0.4,0.6,0.8,1]

Group2494.children.append(OrientationInterpolator2519)
OrientationInterpolator2520 = x3d.OrientationInterpolator()
OrientationInterpolator2520.DEF = "Jump_vl5_YawInterpolator"
OrientationInterpolator2520.key = [0,0.2,0.4,0.5,0.6,0.8,1]

Group2494.children.append(OrientationInterpolator2520)
OrientationInterpolator2521 = x3d.OrientationInterpolator()
OrientationInterpolator2521.DEF = "Jump_vc6_YawInterpolator"
OrientationInterpolator2521.key = [0,0.2,0.4,0.5,0.6,0.8,1]

Group2494.children.append(OrientationInterpolator2521)
OrientationInterpolator2522 = x3d.OrientationInterpolator()
OrientationInterpolator2522.DEF = "Jump_l_thumb1_PitchInterpolator"
OrientationInterpolator2522.key = [0,0.2,0.4,0.6,0.8,1]

Group2494.children.append(OrientationInterpolator2522)
OrientationInterpolator2523 = x3d.OrientationInterpolator()
OrientationInterpolator2523.DEF = "Jump_r_thumb1_PitchInterpolator"
OrientationInterpolator2523.key = [0,0.2,0.4,0.6,0.8,1]

Group2494.children.append(OrientationInterpolator2523)

Scene22.children.append(Group2494)
Group2524 = x3d.Group()
Group2524.DEF = "KickAnimation"
TimeSensor2525 = x3d.TimeSensor()
TimeSensor2525.DEF = "KickTimer"
TimeSensor2525.cycleInterval = 3.73
TimeSensor2525.loop = True

Group2524.children.append(TimeSensor2525)
OrientationInterpolator2526 = x3d.OrientationInterpolator()
OrientationInterpolator2526.DEF = "Kick_l_sternoclavicular_RollInterpolator"
OrientationInterpolator2526.key = [0,0.2,0.4,0.6,0.8,1]

Group2524.children.append(OrientationInterpolator2526)
OrientationInterpolator2527 = x3d.OrientationInterpolator()
OrientationInterpolator2527.DEF = "Kick_l_acromioclavicular_RollInterpolator"
OrientationInterpolator2527.key = [0,0.2,0.4,0.6,0.8,1]

Group2524.children.append(OrientationInterpolator2527)
OrientationInterpolator2528 = x3d.OrientationInterpolator()
OrientationInterpolator2528.DEF = "Kick_l_shoulder_RollInterpolator"
OrientationInterpolator2528.key = [0,0.2,0.4,0.6,0.8,1]

Group2524.children.append(OrientationInterpolator2528)
OrientationInterpolator2529 = x3d.OrientationInterpolator()
OrientationInterpolator2529.DEF = "Kick_l_ForeArm_PitchInterpolator"
OrientationInterpolator2529.key = [0,0.2,0.4,0.6,0.8,1]

Group2524.children.append(OrientationInterpolator2529)
OrientationInterpolator2530 = x3d.OrientationInterpolator()
OrientationInterpolator2530.DEF = "Kick_l_radiocarpal_RollInterpolator"
OrientationInterpolator2530.key = [0,0.2,0.4,0.6,0.8,1]

Group2524.children.append(OrientationInterpolator2530)
OrientationInterpolator2531 = x3d.OrientationInterpolator()
OrientationInterpolator2531.DEF = "Kick_l_thumb1_PitchInterpolator"
OrientationInterpolator2531.key = [0,0.2,0.4,0.6,0.8,1]

Group2524.children.append(OrientationInterpolator2531)
OrientationInterpolator2532 = x3d.OrientationInterpolator()
OrientationInterpolator2532.DEF = "Kick_r_sternoclavicular_RollInterpolator"
OrientationInterpolator2532.key = [0,0.2,0.4,0.6,0.8,1]

Group2524.children.append(OrientationInterpolator2532)
OrientationInterpolator2533 = x3d.OrientationInterpolator()
OrientationInterpolator2533.DEF = "Kick_r_acromioclavicular_RollInterpolator"
OrientationInterpolator2533.key = [0,0.2,0.4,0.6,0.8,1]

Group2524.children.append(OrientationInterpolator2533)
OrientationInterpolator2534 = x3d.OrientationInterpolator()
OrientationInterpolator2534.DEF = "Kick_r_shoulder_RollInterpolator"
OrientationInterpolator2534.key = [0,0.2,0.4,0.6,0.8,1]

Group2524.children.append(OrientationInterpolator2534)
OrientationInterpolator2535 = x3d.OrientationInterpolator()
OrientationInterpolator2535.DEF = "Kick_r_ForeArm_PitchInterpolator"
OrientationInterpolator2535.key = [0,0.2,0.4,0.6,0.8,1]

Group2524.children.append(OrientationInterpolator2535)
OrientationInterpolator2536 = x3d.OrientationInterpolator()
OrientationInterpolator2536.DEF = "Kick_r_radiocarpal_RollInterpolator"
OrientationInterpolator2536.key = [0,0.2,0.4,0.6,0.8,1]

Group2524.children.append(OrientationInterpolator2536)
OrientationInterpolator2537 = x3d.OrientationInterpolator()
OrientationInterpolator2537.DEF = "Kick_r_thumb1_PitchInterpolator"
OrientationInterpolator2537.key = [0,0.2,0.4,0.6,0.8,1]

Group2524.children.append(OrientationInterpolator2537)
OrientationInterpolator2538 = x3d.OrientationInterpolator()
OrientationInterpolator2538.DEF = "Kick_r_hip_PitchInterpolator"
OrientationInterpolator2538.key = [0,0.2,0.3,0.5,0.6,0.9,1]

Group2524.children.append(OrientationInterpolator2538)
OrientationInterpolator2539 = x3d.OrientationInterpolator()
OrientationInterpolator2539.DEF = "Kick_r_knee_PitchInterpolator"
OrientationInterpolator2539.key = [0,0.2,0.4,0.6,0.8,1]

Group2524.children.append(OrientationInterpolator2539)
OrientationInterpolator2540 = x3d.OrientationInterpolator()
OrientationInterpolator2540.DEF = "Kick_l_hip_PitchInterpolator"
OrientationInterpolator2540.key = [0,0.2,0.3,0.5,0.6,0.9,1]

Group2524.children.append(OrientationInterpolator2540)
OrientationInterpolator2541 = x3d.OrientationInterpolator()
OrientationInterpolator2541.DEF = "Kick_l_knee_PitchInterpolator"
OrientationInterpolator2541.key = [0,0.2,0.4,0.6,0.8,1]

Group2524.children.append(OrientationInterpolator2541)
OrientationInterpolator2542 = x3d.OrientationInterpolator()
OrientationInterpolator2542.DEF = "Kick_r_talocrural_PitchInterpolator"
OrientationInterpolator2542.key = [0,0.2,0.4,0.6,0.7,1]

Group2524.children.append(OrientationInterpolator2542)
OrientationInterpolator2543 = x3d.OrientationInterpolator()
OrientationInterpolator2543.DEF = "Kick_r_metatarsal_PitchInterpolator"
OrientationInterpolator2543.key = [0,0.2,0.4,0.6,0.7,1]

Group2524.children.append(OrientationInterpolator2543)
OrientationInterpolator2544 = x3d.OrientationInterpolator()
OrientationInterpolator2544.DEF = "Kick_sacroiliac_YawInterpolator"
OrientationInterpolator2544.key = [0,0.2,0.4,0.6,0.8,1]

Group2524.children.append(OrientationInterpolator2544)
OrientationInterpolator2545 = x3d.OrientationInterpolator()
OrientationInterpolator2545.DEF = "Kick_vl5_YawInterpolator"
OrientationInterpolator2545.key = [0,0.2,0.4,0.5,0.6,0.8,1]

Group2524.children.append(OrientationInterpolator2545)
OrientationInterpolator2546 = x3d.OrientationInterpolator()
OrientationInterpolator2546.DEF = "Kick_vc6_YawInterpolator"
OrientationInterpolator2546.key = [0,0.2,0.4,0.5,0.6,0.8,1]

Group2524.children.append(OrientationInterpolator2546)
OrientationInterpolator2547 = x3d.OrientationInterpolator()
OrientationInterpolator2547.DEF = "Kick_lower_body_RotationInterpolator"
OrientationInterpolator2547.key = [0,0.5,1]

Group2524.children.append(OrientationInterpolator2547)
OrientationInterpolator2548 = x3d.OrientationInterpolator()
OrientationInterpolator2548.DEF = "Kick_upper_body_RotationInterpolator"
OrientationInterpolator2548.key = [0,0.5,1]

Group2524.children.append(OrientationInterpolator2548)
OrientationInterpolator2549 = x3d.OrientationInterpolator()
OrientationInterpolator2549.DEF = "Kick_whole_body_RotationInterpolator"
OrientationInterpolator2549.key = [0,0.5,1]

Group2524.children.append(OrientationInterpolator2549)
PositionInterpolator2550 = x3d.PositionInterpolator()
PositionInterpolator2550.DEF = "Kick_whole_body_TranslationInterpolator"
PositionInterpolator2550.key = [0,0.5,1]

Group2524.children.append(PositionInterpolator2550)
OrientationInterpolator2551 = x3d.OrientationInterpolator()
OrientationInterpolator2551.DEF = "Kick_neck_RotationInterpolator"
OrientationInterpolator2551.key = [0,0.25,0.55,1]

Group2524.children.append(OrientationInterpolator2551)

Scene22.children.append(Group2524)
ROUTE2552 = x3d.ROUTE()
ROUTE2552.fromField = "fraction_changed"
ROUTE2552.fromNode = "StandTimer"
ROUTE2552.toField = "set_fraction"
ROUTE2552.toNode = "Stand_r_talocrural_RotationInterpolator"

Scene22.children.append(ROUTE2552)
ROUTE2553 = x3d.ROUTE()
ROUTE2553.fromField = "fraction_changed"
ROUTE2553.fromNode = "StandTimer"
ROUTE2553.toField = "set_fraction"
ROUTE2553.toNode = "Stand_r_knee_RotationInterpolator"

Scene22.children.append(ROUTE2553)
ROUTE2554 = x3d.ROUTE()
ROUTE2554.fromField = "fraction_changed"
ROUTE2554.fromNode = "StandTimer"
ROUTE2554.toField = "set_fraction"
ROUTE2554.toNode = "Stand_r_hip_RotationInterpolator"

Scene22.children.append(ROUTE2554)
ROUTE2555 = x3d.ROUTE()
ROUTE2555.fromField = "fraction_changed"
ROUTE2555.fromNode = "StandTimer"
ROUTE2555.toField = "set_fraction"
ROUTE2555.toNode = "Stand_l_talocrural_RotationInterpolator"

Scene22.children.append(ROUTE2555)
ROUTE2556 = x3d.ROUTE()
ROUTE2556.fromField = "fraction_changed"
ROUTE2556.fromNode = "StandTimer"
ROUTE2556.toField = "set_fraction"
ROUTE2556.toNode = "Stand_l_knee_RotationInterpolator"

Scene22.children.append(ROUTE2556)
ROUTE2557 = x3d.ROUTE()
ROUTE2557.fromField = "fraction_changed"
ROUTE2557.fromNode = "StandTimer"
ROUTE2557.toField = "set_fraction"
ROUTE2557.toNode = "Stand_l_hip_RotationInterpolator"

Scene22.children.append(ROUTE2557)
ROUTE2558 = x3d.ROUTE()
ROUTE2558.fromField = "fraction_changed"
ROUTE2558.fromNode = "StandTimer"
ROUTE2558.toField = "set_fraction"
ROUTE2558.toNode = "Stand_lower_body_RotationInterpolator"

Scene22.children.append(ROUTE2558)
ROUTE2559 = x3d.ROUTE()
ROUTE2559.fromField = "fraction_changed"
ROUTE2559.fromNode = "StandTimer"
ROUTE2559.toField = "set_fraction"
ROUTE2559.toNode = "Stand_r_radiocarpal_RotationInterpolator"

Scene22.children.append(ROUTE2559)
ROUTE2560 = x3d.ROUTE()
ROUTE2560.fromField = "fraction_changed"
ROUTE2560.fromNode = "StandTimer"
ROUTE2560.toField = "set_fraction"
ROUTE2560.toNode = "Stand_r_elbow_RotationInterpolator"

Scene22.children.append(ROUTE2560)
ROUTE2561 = x3d.ROUTE()
ROUTE2561.fromField = "fraction_changed"
ROUTE2561.fromNode = "StandTimer"
ROUTE2561.toField = "set_fraction"
ROUTE2561.toNode = "Stand_r_shoulder_RotationInterpolator"

Scene22.children.append(ROUTE2561)
ROUTE2562 = x3d.ROUTE()
ROUTE2562.fromField = "fraction_changed"
ROUTE2562.fromNode = "StandTimer"
ROUTE2562.toField = "set_fraction"
ROUTE2562.toNode = "Stand_l_radiocarpal_RotationInterpolator"

Scene22.children.append(ROUTE2562)
ROUTE2563 = x3d.ROUTE()
ROUTE2563.fromField = "fraction_changed"
ROUTE2563.fromNode = "StandTimer"
ROUTE2563.toField = "set_fraction"
ROUTE2563.toNode = "Stand_l_elbow_RotationInterpolator"

Scene22.children.append(ROUTE2563)
ROUTE2564 = x3d.ROUTE()
ROUTE2564.fromField = "fraction_changed"
ROUTE2564.fromNode = "StandTimer"
ROUTE2564.toField = "set_fraction"
ROUTE2564.toNode = "Stand_l_shoulder_RotationInterpolator"

Scene22.children.append(ROUTE2564)
ROUTE2565 = x3d.ROUTE()
ROUTE2565.fromField = "fraction_changed"
ROUTE2565.fromNode = "StandTimer"
ROUTE2565.toField = "set_fraction"
ROUTE2565.toNode = "Stand_head_RotationInterpolator"

Scene22.children.append(ROUTE2565)
ROUTE2566 = x3d.ROUTE()
ROUTE2566.fromField = "fraction_changed"
ROUTE2566.fromNode = "StandTimer"
ROUTE2566.toField = "set_fraction"
ROUTE2566.toNode = "Stand_neck_RotationInterpolator"

Scene22.children.append(ROUTE2566)
ROUTE2567 = x3d.ROUTE()
ROUTE2567.fromField = "fraction_changed"
ROUTE2567.fromNode = "StandTimer"
ROUTE2567.toField = "set_fraction"
ROUTE2567.toNode = "Stand_l_eyeball_RotationInterpolator"

Scene22.children.append(ROUTE2567)
ROUTE2568 = x3d.ROUTE()
ROUTE2568.fromField = "fraction_changed"
ROUTE2568.fromNode = "StandTimer"
ROUTE2568.toField = "set_fraction"
ROUTE2568.toNode = "Stand_r_eyeball_RotationInterpolator"

Scene22.children.append(ROUTE2568)
ROUTE2569 = x3d.ROUTE()
ROUTE2569.fromField = "fraction_changed"
ROUTE2569.fromNode = "StandTimer"
ROUTE2569.toField = "set_fraction"
ROUTE2569.toNode = "Stand_upper_body_RotationInterpolator"

Scene22.children.append(ROUTE2569)
ROUTE2570 = x3d.ROUTE()
ROUTE2570.fromField = "fraction_changed"
ROUTE2570.fromNode = "StandTimer"
ROUTE2570.toField = "set_fraction"
ROUTE2570.toNode = "Stand_whole_body_RotationInterpolator"

Scene22.children.append(ROUTE2570)
ROUTE2571 = x3d.ROUTE()
ROUTE2571.fromField = "fraction_changed"
ROUTE2571.fromNode = "StandTimer"
ROUTE2571.toField = "set_fraction"
ROUTE2571.toNode = "Stand_whole_body_TranslationInterpolator"

Scene22.children.append(ROUTE2571)
ROUTE2572 = x3d.ROUTE()
ROUTE2572.fromField = "fraction_changed"
ROUTE2572.fromNode = "StandTimer"
ROUTE2572.toField = "set_fraction"
ROUTE2572.toNode = "Stand_l_sternoclavicular_RollInterpolator"

Scene22.children.append(ROUTE2572)
ROUTE2573 = x3d.ROUTE()
ROUTE2573.fromField = "fraction_changed"
ROUTE2573.fromNode = "StandTimer"
ROUTE2573.toField = "set_fraction"
ROUTE2573.toNode = "Stand_l_acromioclavicular_RollInterpolator"

Scene22.children.append(ROUTE2573)
ROUTE2574 = x3d.ROUTE()
ROUTE2574.fromField = "fraction_changed"
ROUTE2574.fromNode = "StandTimer"
ROUTE2574.toField = "set_fraction"
ROUTE2574.toNode = "Stand_r_sternoclavicular_RollInterpolator"

Scene22.children.append(ROUTE2574)
ROUTE2575 = x3d.ROUTE()
ROUTE2575.fromField = "fraction_changed"
ROUTE2575.fromNode = "StandTimer"
ROUTE2575.toField = "set_fraction"
ROUTE2575.toNode = "Stand_r_acromioclavicular_RollInterpolator"

Scene22.children.append(ROUTE2575)
ROUTE2576 = x3d.ROUTE()
ROUTE2576.fromField = "fraction_changed"
ROUTE2576.fromNode = "StandTimer"
ROUTE2576.toField = "set_fraction"
ROUTE2576.toNode = "Stand_r_metatarsal_PitchInterpolator"

Scene22.children.append(ROUTE2576)
ROUTE2577 = x3d.ROUTE()
ROUTE2577.fromField = "fraction_changed"
ROUTE2577.fromNode = "StandTimer"
ROUTE2577.toField = "set_fraction"
ROUTE2577.toNode = "Stand_sacroiliac_YawInterpolator"

Scene22.children.append(ROUTE2577)
ROUTE2578 = x3d.ROUTE()
ROUTE2578.fromField = "fraction_changed"
ROUTE2578.fromNode = "StandTimer"
ROUTE2578.toField = "set_fraction"
ROUTE2578.toNode = "Stand_vl5_YawInterpolator"

Scene22.children.append(ROUTE2578)
ROUTE2579 = x3d.ROUTE()
ROUTE2579.fromField = "fraction_changed"
ROUTE2579.fromNode = "StandTimer"
ROUTE2579.toField = "set_fraction"
ROUTE2579.toNode = "Stand_vc6_YawInterpolator"

Scene22.children.append(ROUTE2579)
ROUTE2580 = x3d.ROUTE()
ROUTE2580.fromField = "fraction_changed"
ROUTE2580.fromNode = "StandTimer"
ROUTE2580.toField = "set_fraction"
ROUTE2580.toNode = "Stand_l_thumb1_PitchInterpolator"

Scene22.children.append(ROUTE2580)
ROUTE2581 = x3d.ROUTE()
ROUTE2581.fromField = "fraction_changed"
ROUTE2581.fromNode = "StandTimer"
ROUTE2581.toField = "set_fraction"
ROUTE2581.toNode = "Stand_r_thumb1_PitchInterpolator"

Scene22.children.append(ROUTE2581)
ROUTE2582 = x3d.ROUTE()
ROUTE2582.fromField = "fraction_changed"
ROUTE2582.fromNode = "StandTimer"
ROUTE2582.toField = "set_fraction"
ROUTE2582.toNode = "Stand_r_index1_RollInterpolator"

Scene22.children.append(ROUTE2582)
ROUTE2583 = x3d.ROUTE()
ROUTE2583.fromField = "fraction_changed"
ROUTE2583.fromNode = "StandTimer"
ROUTE2583.toField = "set_fraction"
ROUTE2583.toNode = "Stand_r_index2_RollInterpolator"

Scene22.children.append(ROUTE2583)
ROUTE2584 = x3d.ROUTE()
ROUTE2584.fromField = "fraction_changed"
ROUTE2584.fromNode = "StandTimer"
ROUTE2584.toField = "set_fraction"
ROUTE2584.toNode = "Stand_r_index3_RollInterpolator"

Scene22.children.append(ROUTE2584)
ROUTE2585 = x3d.ROUTE()
ROUTE2585.fromField = "value_changed"
ROUTE2585.fromNode = "Stand_r_talocrural_RotationInterpolator"
ROUTE2585.toField = "set_rotation"
ROUTE2585.toNode = "hanim_r_talocrural"

Scene22.children.append(ROUTE2585)
ROUTE2586 = x3d.ROUTE()
ROUTE2586.fromField = "value_changed"
ROUTE2586.fromNode = "Stand_r_knee_RotationInterpolator"
ROUTE2586.toField = "set_rotation"
ROUTE2586.toNode = "hanim_r_knee"

Scene22.children.append(ROUTE2586)
ROUTE2587 = x3d.ROUTE()
ROUTE2587.fromField = "value_changed"
ROUTE2587.fromNode = "Stand_r_hip_RotationInterpolator"
ROUTE2587.toField = "set_rotation"
ROUTE2587.toNode = "hanim_r_hip"

Scene22.children.append(ROUTE2587)
ROUTE2588 = x3d.ROUTE()
ROUTE2588.fromField = "value_changed"
ROUTE2588.fromNode = "Stand_l_talocrural_RotationInterpolator"
ROUTE2588.toField = "set_rotation"
ROUTE2588.toNode = "hanim_l_talocrural"

Scene22.children.append(ROUTE2588)
ROUTE2589 = x3d.ROUTE()
ROUTE2589.fromField = "value_changed"
ROUTE2589.fromNode = "Stand_l_knee_RotationInterpolator"
ROUTE2589.toField = "set_rotation"
ROUTE2589.toNode = "hanim_l_knee"

Scene22.children.append(ROUTE2589)
ROUTE2590 = x3d.ROUTE()
ROUTE2590.fromField = "value_changed"
ROUTE2590.fromNode = "Stand_l_hip_RotationInterpolator"
ROUTE2590.toField = "set_rotation"
ROUTE2590.toNode = "hanim_l_hip"

Scene22.children.append(ROUTE2590)
ROUTE2591 = x3d.ROUTE()
ROUTE2591.fromField = "value_changed"
ROUTE2591.fromNode = "Stand_r_radiocarpal_RotationInterpolator"
ROUTE2591.toField = "set_rotation"
ROUTE2591.toNode = "hanim_r_radiocarpal"

Scene22.children.append(ROUTE2591)
ROUTE2592 = x3d.ROUTE()
ROUTE2592.fromField = "value_changed"
ROUTE2592.fromNode = "Stand_r_elbow_RotationInterpolator"
ROUTE2592.toField = "set_rotation"
ROUTE2592.toNode = "hanim_r_elbow"

Scene22.children.append(ROUTE2592)
ROUTE2593 = x3d.ROUTE()
ROUTE2593.fromField = "value_changed"
ROUTE2593.fromNode = "Stand_r_shoulder_RotationInterpolator"
ROUTE2593.toField = "set_rotation"
ROUTE2593.toNode = "hanim_r_shoulder"

Scene22.children.append(ROUTE2593)
ROUTE2594 = x3d.ROUTE()
ROUTE2594.fromField = "value_changed"
ROUTE2594.fromNode = "Stand_l_radiocarpal_RotationInterpolator"
ROUTE2594.toField = "set_rotation"
ROUTE2594.toNode = "hanim_l_radiocarpal"

Scene22.children.append(ROUTE2594)
ROUTE2595 = x3d.ROUTE()
ROUTE2595.fromField = "value_changed"
ROUTE2595.fromNode = "Stand_l_elbow_RotationInterpolator"
ROUTE2595.toField = "set_rotation"
ROUTE2595.toNode = "hanim_l_elbow"

Scene22.children.append(ROUTE2595)
ROUTE2596 = x3d.ROUTE()
ROUTE2596.fromField = "value_changed"
ROUTE2596.fromNode = "Stand_l_shoulder_RotationInterpolator"
ROUTE2596.toField = "set_rotation"
ROUTE2596.toNode = "hanim_l_shoulder"

Scene22.children.append(ROUTE2596)
ROUTE2597 = x3d.ROUTE()
ROUTE2597.fromField = "value_changed"
ROUTE2597.fromNode = "Stand_head_RotationInterpolator"
ROUTE2597.toField = "set_rotation"
ROUTE2597.toNode = "hanim_skullbase"

Scene22.children.append(ROUTE2597)
ROUTE2598 = x3d.ROUTE()
ROUTE2598.fromField = "value_changed"
ROUTE2598.fromNode = "Stand_whole_body_RotationInterpolator"
ROUTE2598.toField = "set_rotation"
ROUTE2598.toNode = "hanim_humanoid_root"

Scene22.children.append(ROUTE2598)
ROUTE2599 = x3d.ROUTE()
ROUTE2599.fromField = "value_changed"
ROUTE2599.fromNode = "Stand_whole_body_TranslationInterpolator"
ROUTE2599.toField = "set_translation"
ROUTE2599.toNode = "hanim_humanoid_root"

Scene22.children.append(ROUTE2599)
ROUTE2600 = x3d.ROUTE()
ROUTE2600.fromField = "value_changed"
ROUTE2600.fromNode = "Stand_vl5_YawInterpolator"
ROUTE2600.toField = "set_rotation"
ROUTE2600.toNode = "hanim_vl5"

Scene22.children.append(ROUTE2600)
ROUTE2601 = x3d.ROUTE()
ROUTE2601.fromField = "fraction_changed"
ROUTE2601.fromNode = "PitchTimer"
ROUTE2601.toField = "set_fraction"
ROUTE2601.toNode = "Pitches_r_talocrural_RotationInterpolator"

Scene22.children.append(ROUTE2601)
ROUTE2602 = x3d.ROUTE()
ROUTE2602.fromField = "fraction_changed"
ROUTE2602.fromNode = "PitchTimer"
ROUTE2602.toField = "set_fraction"
ROUTE2602.toNode = "Pitches_r_knee_RotationInterpolator"

Scene22.children.append(ROUTE2602)
ROUTE2603 = x3d.ROUTE()
ROUTE2603.fromField = "fraction_changed"
ROUTE2603.fromNode = "PitchTimer"
ROUTE2603.toField = "set_fraction"
ROUTE2603.toNode = "Pitches_r_hip_RotationInterpolator"

Scene22.children.append(ROUTE2603)
ROUTE2604 = x3d.ROUTE()
ROUTE2604.fromField = "fraction_changed"
ROUTE2604.fromNode = "PitchTimer"
ROUTE2604.toField = "set_fraction"
ROUTE2604.toNode = "Pitches_l_talocrural_RotationInterpolator"

Scene22.children.append(ROUTE2604)
ROUTE2605 = x3d.ROUTE()
ROUTE2605.fromField = "fraction_changed"
ROUTE2605.fromNode = "PitchTimer"
ROUTE2605.toField = "set_fraction"
ROUTE2605.toNode = "Pitches_l_knee_RotationInterpolator"

Scene22.children.append(ROUTE2605)
ROUTE2606 = x3d.ROUTE()
ROUTE2606.fromField = "fraction_changed"
ROUTE2606.fromNode = "PitchTimer"
ROUTE2606.toField = "set_fraction"
ROUTE2606.toNode = "Pitches_l_hip_RotationInterpolator"

Scene22.children.append(ROUTE2606)
ROUTE2607 = x3d.ROUTE()
ROUTE2607.fromField = "fraction_changed"
ROUTE2607.fromNode = "PitchTimer"
ROUTE2607.toField = "set_fraction"
ROUTE2607.toNode = "Pitches_lower_body_RotationInterpolator"

Scene22.children.append(ROUTE2607)
ROUTE2608 = x3d.ROUTE()
ROUTE2608.fromField = "fraction_changed"
ROUTE2608.fromNode = "PitchTimer"
ROUTE2608.toField = "set_fraction"
ROUTE2608.toNode = "Pitches_r_radiocarpal_RotationInterpolator"

Scene22.children.append(ROUTE2608)
ROUTE2609 = x3d.ROUTE()
ROUTE2609.fromField = "fraction_changed"
ROUTE2609.fromNode = "PitchTimer"
ROUTE2609.toField = "set_fraction"
ROUTE2609.toNode = "Pitches_r_elbow_RotationInterpolator"

Scene22.children.append(ROUTE2609)
ROUTE2610 = x3d.ROUTE()
ROUTE2610.fromField = "fraction_changed"
ROUTE2610.fromNode = "PitchTimer"
ROUTE2610.toField = "set_fraction"
ROUTE2610.toNode = "Pitches_r_shoulder_RotationInterpolator"

Scene22.children.append(ROUTE2610)
ROUTE2611 = x3d.ROUTE()
ROUTE2611.fromField = "fraction_changed"
ROUTE2611.fromNode = "PitchTimer"
ROUTE2611.toField = "set_fraction"
ROUTE2611.toNode = "Pitches_l_radiocarpal_RotationInterpolator"

Scene22.children.append(ROUTE2611)
ROUTE2612 = x3d.ROUTE()
ROUTE2612.fromField = "fraction_changed"
ROUTE2612.fromNode = "PitchTimer"
ROUTE2612.toField = "set_fraction"
ROUTE2612.toNode = "Pitches_l_elbow_RotationInterpolator"

Scene22.children.append(ROUTE2612)
ROUTE2613 = x3d.ROUTE()
ROUTE2613.fromField = "fraction_changed"
ROUTE2613.fromNode = "PitchTimer"
ROUTE2613.toField = "set_fraction"
ROUTE2613.toNode = "Pitches_l_shoulder_RotationInterpolator"

Scene22.children.append(ROUTE2613)
ROUTE2614 = x3d.ROUTE()
ROUTE2614.fromField = "fraction_changed"
ROUTE2614.fromNode = "PitchTimer"
ROUTE2614.toField = "set_fraction"
ROUTE2614.toNode = "Pitches_head_RotationInterpolator"

Scene22.children.append(ROUTE2614)
ROUTE2615 = x3d.ROUTE()
ROUTE2615.fromField = "fraction_changed"
ROUTE2615.fromNode = "PitchTimer"
ROUTE2615.toField = "set_fraction"
ROUTE2615.toNode = "Pitches_neck_RotationInterpolator"

Scene22.children.append(ROUTE2615)
ROUTE2616 = x3d.ROUTE()
ROUTE2616.fromField = "fraction_changed"
ROUTE2616.fromNode = "PitchTimer"
ROUTE2616.toField = "set_fraction"
ROUTE2616.toNode = "Pitches_upper_body_RotationInterpolator"

Scene22.children.append(ROUTE2616)
ROUTE2617 = x3d.ROUTE()
ROUTE2617.fromField = "fraction_changed"
ROUTE2617.fromNode = "PitchTimer"
ROUTE2617.toField = "set_fraction"
ROUTE2617.toNode = "Pitches_whole_body_RotationInterpolator"

Scene22.children.append(ROUTE2617)
ROUTE2618 = x3d.ROUTE()
ROUTE2618.fromField = "fraction_changed"
ROUTE2618.fromNode = "PitchTimer"
ROUTE2618.toField = "set_fraction"
ROUTE2618.toNode = "Pitches_whole_body_TranslationInterpolator"

Scene22.children.append(ROUTE2618)
ROUTE2619 = x3d.ROUTE()
ROUTE2619.fromField = "fraction_changed"
ROUTE2619.fromNode = "PitchTimer"
ROUTE2619.toField = "set_fraction"
ROUTE2619.toNode = "Pitch_l_sternoclavicular_RollInterpolator"

Scene22.children.append(ROUTE2619)
ROUTE2620 = x3d.ROUTE()
ROUTE2620.fromField = "fraction_changed"
ROUTE2620.fromNode = "PitchTimer"
ROUTE2620.toField = "set_fraction"
ROUTE2620.toNode = "Pitch_l_acromioclavicular_RollInterpolator"

Scene22.children.append(ROUTE2620)
ROUTE2621 = x3d.ROUTE()
ROUTE2621.fromField = "fraction_changed"
ROUTE2621.fromNode = "PitchTimer"
ROUTE2621.toField = "set_fraction"
ROUTE2621.toNode = "Pitch_r_sternoclavicular_RollInterpolator"

Scene22.children.append(ROUTE2621)
ROUTE2622 = x3d.ROUTE()
ROUTE2622.fromField = "fraction_changed"
ROUTE2622.fromNode = "PitchTimer"
ROUTE2622.toField = "set_fraction"
ROUTE2622.toNode = "Pitch_r_acromioclavicular_RollInterpolator"

Scene22.children.append(ROUTE2622)
ROUTE2623 = x3d.ROUTE()
ROUTE2623.fromField = "fraction_changed"
ROUTE2623.fromNode = "PitchTimer"
ROUTE2623.toField = "set_fraction"
ROUTE2623.toNode = "Pitch_r_metatarsal_PitchInterpolator"

Scene22.children.append(ROUTE2623)
ROUTE2624 = x3d.ROUTE()
ROUTE2624.fromField = "fraction_changed"
ROUTE2624.fromNode = "PitchTimer"
ROUTE2624.toField = "set_fraction"
ROUTE2624.toNode = "Pitch_sacroiliac_YawInterpolator"

Scene22.children.append(ROUTE2624)
ROUTE2625 = x3d.ROUTE()
ROUTE2625.fromField = "fraction_changed"
ROUTE2625.fromNode = "PitchTimer"
ROUTE2625.toField = "set_fraction"
ROUTE2625.toNode = "Pitch_vl5_YawInterpolator"

Scene22.children.append(ROUTE2625)
ROUTE2626 = x3d.ROUTE()
ROUTE2626.fromField = "fraction_changed"
ROUTE2626.fromNode = "PitchTimer"
ROUTE2626.toField = "set_fraction"
ROUTE2626.toNode = "Pitch_vc6_YawInterpolator"

Scene22.children.append(ROUTE2626)
ROUTE2627 = x3d.ROUTE()
ROUTE2627.fromField = "fraction_changed"
ROUTE2627.fromNode = "PitchTimer"
ROUTE2627.toField = "set_fraction"
ROUTE2627.toNode = "Pitch_l_thumb1_PitchInterpolator"

Scene22.children.append(ROUTE2627)
ROUTE2628 = x3d.ROUTE()
ROUTE2628.fromField = "fraction_changed"
ROUTE2628.fromNode = "PitchTimer"
ROUTE2628.toField = "set_fraction"
ROUTE2628.toNode = "Pitch_r_thumb1_PitchInterpolator"

Scene22.children.append(ROUTE2628)
ROUTE2629 = x3d.ROUTE()
ROUTE2629.fromField = "value_changed"
ROUTE2629.fromNode = "Pitches_r_talocrural_RotationInterpolator"
ROUTE2629.toField = "set_rotation"
ROUTE2629.toNode = "hanim_r_talocrural"

Scene22.children.append(ROUTE2629)
ROUTE2630 = x3d.ROUTE()
ROUTE2630.fromField = "value_changed"
ROUTE2630.fromNode = "Pitches_r_knee_RotationInterpolator"
ROUTE2630.toField = "set_rotation"
ROUTE2630.toNode = "hanim_r_knee"

Scene22.children.append(ROUTE2630)
ROUTE2631 = x3d.ROUTE()
ROUTE2631.fromField = "value_changed"
ROUTE2631.fromNode = "Pitches_r_hip_RotationInterpolator"
ROUTE2631.toField = "set_rotation"
ROUTE2631.toNode = "hanim_r_hip"

Scene22.children.append(ROUTE2631)
ROUTE2632 = x3d.ROUTE()
ROUTE2632.fromField = "value_changed"
ROUTE2632.fromNode = "Pitches_l_talocrural_RotationInterpolator"
ROUTE2632.toField = "set_rotation"
ROUTE2632.toNode = "hanim_l_talocrural"

Scene22.children.append(ROUTE2632)
ROUTE2633 = x3d.ROUTE()
ROUTE2633.fromField = "value_changed"
ROUTE2633.fromNode = "Pitches_l_knee_RotationInterpolator"
ROUTE2633.toField = "set_rotation"
ROUTE2633.toNode = "hanim_l_knee"

Scene22.children.append(ROUTE2633)
ROUTE2634 = x3d.ROUTE()
ROUTE2634.fromField = "value_changed"
ROUTE2634.fromNode = "Pitches_l_hip_RotationInterpolator"
ROUTE2634.toField = "set_rotation"
ROUTE2634.toNode = "hanim_l_hip"

Scene22.children.append(ROUTE2634)
ROUTE2635 = x3d.ROUTE()
ROUTE2635.fromField = "value_changed"
ROUTE2635.fromNode = "Pitches_r_radiocarpal_RotationInterpolator"
ROUTE2635.toField = "set_rotation"
ROUTE2635.toNode = "hanim_r_radiocarpal"

Scene22.children.append(ROUTE2635)
ROUTE2636 = x3d.ROUTE()
ROUTE2636.fromField = "value_changed"
ROUTE2636.fromNode = "Pitches_r_elbow_RotationInterpolator"
ROUTE2636.toField = "set_rotation"
ROUTE2636.toNode = "hanim_r_elbow"

Scene22.children.append(ROUTE2636)
ROUTE2637 = x3d.ROUTE()
ROUTE2637.fromField = "value_changed"
ROUTE2637.fromNode = "Pitches_r_shoulder_RotationInterpolator"
ROUTE2637.toField = "set_rotation"
ROUTE2637.toNode = "hanim_r_shoulder"

Scene22.children.append(ROUTE2637)
ROUTE2638 = x3d.ROUTE()
ROUTE2638.fromField = "value_changed"
ROUTE2638.fromNode = "Pitches_l_radiocarpal_RotationInterpolator"
ROUTE2638.toField = "set_rotation"
ROUTE2638.toNode = "hanim_l_radiocarpal"

Scene22.children.append(ROUTE2638)
ROUTE2639 = x3d.ROUTE()
ROUTE2639.fromField = "value_changed"
ROUTE2639.fromNode = "Pitches_l_elbow_RotationInterpolator"
ROUTE2639.toField = "set_rotation"
ROUTE2639.toNode = "hanim_l_elbow"

Scene22.children.append(ROUTE2639)
ROUTE2640 = x3d.ROUTE()
ROUTE2640.fromField = "value_changed"
ROUTE2640.fromNode = "Pitches_l_shoulder_RotationInterpolator"
ROUTE2640.toField = "set_rotation"
ROUTE2640.toNode = "hanim_l_shoulder"

Scene22.children.append(ROUTE2640)
ROUTE2641 = x3d.ROUTE()
ROUTE2641.fromField = "value_changed"
ROUTE2641.fromNode = "Pitches_head_RotationInterpolator"
ROUTE2641.toField = "set_rotation"
ROUTE2641.toNode = "hanim_skullbase"

Scene22.children.append(ROUTE2641)
ROUTE2642 = x3d.ROUTE()
ROUTE2642.fromField = "value_changed"
ROUTE2642.fromNode = "Pitches_whole_body_RotationInterpolator"
ROUTE2642.toField = "set_rotation"
ROUTE2642.toNode = "hanim_humanoid_root"

Scene22.children.append(ROUTE2642)
ROUTE2643 = x3d.ROUTE()
ROUTE2643.fromField = "value_changed"
ROUTE2643.fromNode = "Pitches_whole_body_TranslationInterpolator"
ROUTE2643.toField = "set_translation"
ROUTE2643.toNode = "hanim_humanoid_root"

Scene22.children.append(ROUTE2643)
ROUTE2644 = x3d.ROUTE()
ROUTE2644.fromField = "value_changed"
ROUTE2644.fromNode = "Pitch_vl5_YawInterpolator"
ROUTE2644.toField = "set_rotation"
ROUTE2644.toNode = "hanim_vl5"

Scene22.children.append(ROUTE2644)
ROUTE2645 = x3d.ROUTE()
ROUTE2645.fromField = "fraction_changed"
ROUTE2645.fromNode = "YawTimer"
ROUTE2645.toField = "set_fraction"
ROUTE2645.toNode = "Yaws_r_talocrural_RotationInterpolator"

Scene22.children.append(ROUTE2645)
ROUTE2646 = x3d.ROUTE()
ROUTE2646.fromField = "fraction_changed"
ROUTE2646.fromNode = "YawTimer"
ROUTE2646.toField = "set_fraction"
ROUTE2646.toNode = "Yaws_r_knee_RotationInterpolator"

Scene22.children.append(ROUTE2646)
ROUTE2647 = x3d.ROUTE()
ROUTE2647.fromField = "fraction_changed"
ROUTE2647.fromNode = "YawTimer"
ROUTE2647.toField = "set_fraction"
ROUTE2647.toNode = "Yaws_r_hip_RotationInterpolator"

Scene22.children.append(ROUTE2647)
ROUTE2648 = x3d.ROUTE()
ROUTE2648.fromField = "fraction_changed"
ROUTE2648.fromNode = "YawTimer"
ROUTE2648.toField = "set_fraction"
ROUTE2648.toNode = "Yaws_l_talocrural_RotationInterpolator"

Scene22.children.append(ROUTE2648)
ROUTE2649 = x3d.ROUTE()
ROUTE2649.fromField = "fraction_changed"
ROUTE2649.fromNode = "YawTimer"
ROUTE2649.toField = "set_fraction"
ROUTE2649.toNode = "Yaws_l_knee_RotationInterpolator"

Scene22.children.append(ROUTE2649)
ROUTE2650 = x3d.ROUTE()
ROUTE2650.fromField = "fraction_changed"
ROUTE2650.fromNode = "YawTimer"
ROUTE2650.toField = "set_fraction"
ROUTE2650.toNode = "Yaws_l_hip_RotationInterpolator"

Scene22.children.append(ROUTE2650)
ROUTE2651 = x3d.ROUTE()
ROUTE2651.fromField = "fraction_changed"
ROUTE2651.fromNode = "YawTimer"
ROUTE2651.toField = "set_fraction"
ROUTE2651.toNode = "Yaws_lower_body_RotationInterpolator"

Scene22.children.append(ROUTE2651)
ROUTE2652 = x3d.ROUTE()
ROUTE2652.fromField = "fraction_changed"
ROUTE2652.fromNode = "YawTimer"
ROUTE2652.toField = "set_fraction"
ROUTE2652.toNode = "Yaws_r_radiocarpal_RotationInterpolator"

Scene22.children.append(ROUTE2652)
ROUTE2653 = x3d.ROUTE()
ROUTE2653.fromField = "fraction_changed"
ROUTE2653.fromNode = "YawTimer"
ROUTE2653.toField = "set_fraction"
ROUTE2653.toNode = "Yaws_r_elbow_RotationInterpolator"

Scene22.children.append(ROUTE2653)
ROUTE2654 = x3d.ROUTE()
ROUTE2654.fromField = "fraction_changed"
ROUTE2654.fromNode = "YawTimer"
ROUTE2654.toField = "set_fraction"
ROUTE2654.toNode = "Yaws_r_shoulder_RotationInterpolator"

Scene22.children.append(ROUTE2654)
ROUTE2655 = x3d.ROUTE()
ROUTE2655.fromField = "fraction_changed"
ROUTE2655.fromNode = "YawTimer"
ROUTE2655.toField = "set_fraction"
ROUTE2655.toNode = "Yaws_l_radiocarpal_RotationInterpolator"

Scene22.children.append(ROUTE2655)
ROUTE2656 = x3d.ROUTE()
ROUTE2656.fromField = "fraction_changed"
ROUTE2656.fromNode = "YawTimer"
ROUTE2656.toField = "set_fraction"
ROUTE2656.toNode = "Yaws_l_elbow_RotationInterpolator"

Scene22.children.append(ROUTE2656)
ROUTE2657 = x3d.ROUTE()
ROUTE2657.fromField = "fraction_changed"
ROUTE2657.fromNode = "YawTimer"
ROUTE2657.toField = "set_fraction"
ROUTE2657.toNode = "Yaws_l_shoulder_RotationInterpolator"

Scene22.children.append(ROUTE2657)
ROUTE2658 = x3d.ROUTE()
ROUTE2658.fromField = "fraction_changed"
ROUTE2658.fromNode = "YawTimer"
ROUTE2658.toField = "set_fraction"
ROUTE2658.toNode = "Yaws_head_RotationInterpolator"

Scene22.children.append(ROUTE2658)
ROUTE2659 = x3d.ROUTE()
ROUTE2659.fromField = "fraction_changed"
ROUTE2659.fromNode = "YawTimer"
ROUTE2659.toField = "set_fraction"
ROUTE2659.toNode = "Yaws_neck_RotationInterpolator"

Scene22.children.append(ROUTE2659)
ROUTE2660 = x3d.ROUTE()
ROUTE2660.fromField = "fraction_changed"
ROUTE2660.fromNode = "YawTimer"
ROUTE2660.toField = "set_fraction"
ROUTE2660.toNode = "Yaws_upper_body_RotationInterpolator"

Scene22.children.append(ROUTE2660)
ROUTE2661 = x3d.ROUTE()
ROUTE2661.fromField = "fraction_changed"
ROUTE2661.fromNode = "YawTimer"
ROUTE2661.toField = "set_fraction"
ROUTE2661.toNode = "Yaws_whole_body_RotationInterpolator"

Scene22.children.append(ROUTE2661)
ROUTE2662 = x3d.ROUTE()
ROUTE2662.fromField = "fraction_changed"
ROUTE2662.fromNode = "YawTimer"
ROUTE2662.toField = "set_fraction"
ROUTE2662.toNode = "Yaws_whole_body_TranslationInterpolator"

Scene22.children.append(ROUTE2662)
ROUTE2663 = x3d.ROUTE()
ROUTE2663.fromField = "fraction_changed"
ROUTE2663.fromNode = "YawTimer"
ROUTE2663.toField = "set_fraction"
ROUTE2663.toNode = "Yaw_l_sternoclavicular_RollInterpolator"

Scene22.children.append(ROUTE2663)
ROUTE2664 = x3d.ROUTE()
ROUTE2664.fromField = "fraction_changed"
ROUTE2664.fromNode = "YawTimer"
ROUTE2664.toField = "set_fraction"
ROUTE2664.toNode = "Yaw_l_acromioclavicular_RollInterpolator"

Scene22.children.append(ROUTE2664)
ROUTE2665 = x3d.ROUTE()
ROUTE2665.fromField = "fraction_changed"
ROUTE2665.fromNode = "YawTimer"
ROUTE2665.toField = "set_fraction"
ROUTE2665.toNode = "Yaw_r_sternoclavicular_RollInterpolator"

Scene22.children.append(ROUTE2665)
ROUTE2666 = x3d.ROUTE()
ROUTE2666.fromField = "fraction_changed"
ROUTE2666.fromNode = "YawTimer"
ROUTE2666.toField = "set_fraction"
ROUTE2666.toNode = "Yaw_r_acromioclavicular_RollInterpolator"

Scene22.children.append(ROUTE2666)
ROUTE2667 = x3d.ROUTE()
ROUTE2667.fromField = "fraction_changed"
ROUTE2667.fromNode = "YawTimer"
ROUTE2667.toField = "set_fraction"
ROUTE2667.toNode = "Yaw_r_metatarsal_PitchInterpolator"

Scene22.children.append(ROUTE2667)
ROUTE2668 = x3d.ROUTE()
ROUTE2668.fromField = "fraction_changed"
ROUTE2668.fromNode = "YawTimer"
ROUTE2668.toField = "set_fraction"
ROUTE2668.toNode = "Yaw_sacroiliac_YawInterpolator"

Scene22.children.append(ROUTE2668)
ROUTE2669 = x3d.ROUTE()
ROUTE2669.fromField = "fraction_changed"
ROUTE2669.fromNode = "YawTimer"
ROUTE2669.toField = "set_fraction"
ROUTE2669.toNode = "Yaw_vl5_YawInterpolator"

Scene22.children.append(ROUTE2669)
ROUTE2670 = x3d.ROUTE()
ROUTE2670.fromField = "fraction_changed"
ROUTE2670.fromNode = "YawTimer"
ROUTE2670.toField = "set_fraction"
ROUTE2670.toNode = "Yaw_vc6_YawInterpolator"

Scene22.children.append(ROUTE2670)
ROUTE2671 = x3d.ROUTE()
ROUTE2671.fromField = "fraction_changed"
ROUTE2671.fromNode = "YawTimer"
ROUTE2671.toField = "set_fraction"
ROUTE2671.toNode = "Yaw_l_thumb1_PitchInterpolator"

Scene22.children.append(ROUTE2671)
ROUTE2672 = x3d.ROUTE()
ROUTE2672.fromField = "fraction_changed"
ROUTE2672.fromNode = "YawTimer"
ROUTE2672.toField = "set_fraction"
ROUTE2672.toNode = "Yaw_r_thumb1_PitchInterpolator"

Scene22.children.append(ROUTE2672)
ROUTE2673 = x3d.ROUTE()
ROUTE2673.fromField = "value_changed"
ROUTE2673.fromNode = "Yaws_r_talocrural_RotationInterpolator"
ROUTE2673.toField = "set_rotation"
ROUTE2673.toNode = "hanim_r_talocrural"

Scene22.children.append(ROUTE2673)
ROUTE2674 = x3d.ROUTE()
ROUTE2674.fromField = "value_changed"
ROUTE2674.fromNode = "Yaws_r_knee_RotationInterpolator"
ROUTE2674.toField = "set_rotation"
ROUTE2674.toNode = "hanim_r_knee"

Scene22.children.append(ROUTE2674)
ROUTE2675 = x3d.ROUTE()
ROUTE2675.fromField = "value_changed"
ROUTE2675.fromNode = "Yaws_r_hip_RotationInterpolator"
ROUTE2675.toField = "set_rotation"
ROUTE2675.toNode = "hanim_r_hip"

Scene22.children.append(ROUTE2675)
ROUTE2676 = x3d.ROUTE()
ROUTE2676.fromField = "value_changed"
ROUTE2676.fromNode = "Yaws_l_talocrural_RotationInterpolator"
ROUTE2676.toField = "set_rotation"
ROUTE2676.toNode = "hanim_l_talocrural"

Scene22.children.append(ROUTE2676)
ROUTE2677 = x3d.ROUTE()
ROUTE2677.fromField = "value_changed"
ROUTE2677.fromNode = "Yaws_l_knee_RotationInterpolator"
ROUTE2677.toField = "set_rotation"
ROUTE2677.toNode = "hanim_l_knee"

Scene22.children.append(ROUTE2677)
ROUTE2678 = x3d.ROUTE()
ROUTE2678.fromField = "value_changed"
ROUTE2678.fromNode = "Yaws_l_hip_RotationInterpolator"
ROUTE2678.toField = "set_rotation"
ROUTE2678.toNode = "hanim_l_hip"

Scene22.children.append(ROUTE2678)
ROUTE2679 = x3d.ROUTE()
ROUTE2679.fromField = "value_changed"
ROUTE2679.fromNode = "Yaws_r_radiocarpal_RotationInterpolator"
ROUTE2679.toField = "set_rotation"
ROUTE2679.toNode = "hanim_r_radiocarpal"

Scene22.children.append(ROUTE2679)
ROUTE2680 = x3d.ROUTE()
ROUTE2680.fromField = "value_changed"
ROUTE2680.fromNode = "Yaws_r_elbow_RotationInterpolator"
ROUTE2680.toField = "set_rotation"
ROUTE2680.toNode = "hanim_r_elbow"

Scene22.children.append(ROUTE2680)
ROUTE2681 = x3d.ROUTE()
ROUTE2681.fromField = "value_changed"
ROUTE2681.fromNode = "Yaws_r_shoulder_RotationInterpolator"
ROUTE2681.toField = "set_rotation"
ROUTE2681.toNode = "hanim_r_shoulder"

Scene22.children.append(ROUTE2681)
ROUTE2682 = x3d.ROUTE()
ROUTE2682.fromField = "value_changed"
ROUTE2682.fromNode = "Yaws_l_radiocarpal_RotationInterpolator"
ROUTE2682.toField = "set_rotation"
ROUTE2682.toNode = "hanim_l_radiocarpal"

Scene22.children.append(ROUTE2682)
ROUTE2683 = x3d.ROUTE()
ROUTE2683.fromField = "value_changed"
ROUTE2683.fromNode = "Yaws_l_elbow_RotationInterpolator"
ROUTE2683.toField = "set_rotation"
ROUTE2683.toNode = "hanim_l_elbow"

Scene22.children.append(ROUTE2683)
ROUTE2684 = x3d.ROUTE()
ROUTE2684.fromField = "value_changed"
ROUTE2684.fromNode = "Yaws_l_shoulder_RotationInterpolator"
ROUTE2684.toField = "set_rotation"
ROUTE2684.toNode = "hanim_l_shoulder"

Scene22.children.append(ROUTE2684)
ROUTE2685 = x3d.ROUTE()
ROUTE2685.fromField = "value_changed"
ROUTE2685.fromNode = "Yaws_head_RotationInterpolator"
ROUTE2685.toField = "set_rotation"
ROUTE2685.toNode = "hanim_skullbase"

Scene22.children.append(ROUTE2685)
ROUTE2686 = x3d.ROUTE()
ROUTE2686.fromField = "value_changed"
ROUTE2686.fromNode = "Yaws_whole_body_RotationInterpolator"
ROUTE2686.toField = "set_rotation"
ROUTE2686.toNode = "hanim_humanoid_root"

Scene22.children.append(ROUTE2686)
ROUTE2687 = x3d.ROUTE()
ROUTE2687.fromField = "value_changed"
ROUTE2687.fromNode = "Yaws_whole_body_TranslationInterpolator"
ROUTE2687.toField = "set_translation"
ROUTE2687.toNode = "hanim_humanoid_root"

Scene22.children.append(ROUTE2687)
ROUTE2688 = x3d.ROUTE()
ROUTE2688.fromField = "value_changed"
ROUTE2688.fromNode = "Yaw_vl5_YawInterpolator"
ROUTE2688.toField = "set_rotation"
ROUTE2688.toNode = "hanim_vl5"

Scene22.children.append(ROUTE2688)
ROUTE2689 = x3d.ROUTE()
ROUTE2689.fromField = "fraction_changed"
ROUTE2689.fromNode = "RollTimer"
ROUTE2689.toField = "set_fraction"
ROUTE2689.toNode = "Rolls_r_talocrural_RotationInterpolator"

Scene22.children.append(ROUTE2689)
ROUTE2690 = x3d.ROUTE()
ROUTE2690.fromField = "fraction_changed"
ROUTE2690.fromNode = "RollTimer"
ROUTE2690.toField = "set_fraction"
ROUTE2690.toNode = "Rolls_r_knee_RotationInterpolator"

Scene22.children.append(ROUTE2690)
ROUTE2691 = x3d.ROUTE()
ROUTE2691.fromField = "fraction_changed"
ROUTE2691.fromNode = "RollTimer"
ROUTE2691.toField = "set_fraction"
ROUTE2691.toNode = "Rolls_r_hip_RotationInterpolator"

Scene22.children.append(ROUTE2691)
ROUTE2692 = x3d.ROUTE()
ROUTE2692.fromField = "fraction_changed"
ROUTE2692.fromNode = "RollTimer"
ROUTE2692.toField = "set_fraction"
ROUTE2692.toNode = "Rolls_l_talocrural_RotationInterpolator"

Scene22.children.append(ROUTE2692)
ROUTE2693 = x3d.ROUTE()
ROUTE2693.fromField = "fraction_changed"
ROUTE2693.fromNode = "RollTimer"
ROUTE2693.toField = "set_fraction"
ROUTE2693.toNode = "Rolls_l_knee_RotationInterpolator"

Scene22.children.append(ROUTE2693)
ROUTE2694 = x3d.ROUTE()
ROUTE2694.fromField = "fraction_changed"
ROUTE2694.fromNode = "RollTimer"
ROUTE2694.toField = "set_fraction"
ROUTE2694.toNode = "Rolls_l_hip_RotationInterpolator"

Scene22.children.append(ROUTE2694)
ROUTE2695 = x3d.ROUTE()
ROUTE2695.fromField = "fraction_changed"
ROUTE2695.fromNode = "RollTimer"
ROUTE2695.toField = "set_fraction"
ROUTE2695.toNode = "Rolls_lower_body_RotationInterpolator"

Scene22.children.append(ROUTE2695)
ROUTE2696 = x3d.ROUTE()
ROUTE2696.fromField = "fraction_changed"
ROUTE2696.fromNode = "RollTimer"
ROUTE2696.toField = "set_fraction"
ROUTE2696.toNode = "Rolls_r_radiocarpal_RotationInterpolator"

Scene22.children.append(ROUTE2696)
ROUTE2697 = x3d.ROUTE()
ROUTE2697.fromField = "fraction_changed"
ROUTE2697.fromNode = "RollTimer"
ROUTE2697.toField = "set_fraction"
ROUTE2697.toNode = "Rolls_r_elbow_RotationInterpolator"

Scene22.children.append(ROUTE2697)
ROUTE2698 = x3d.ROUTE()
ROUTE2698.fromField = "fraction_changed"
ROUTE2698.fromNode = "RollTimer"
ROUTE2698.toField = "set_fraction"
ROUTE2698.toNode = "Rolls_r_shoulder_RotationInterpolator"

Scene22.children.append(ROUTE2698)
ROUTE2699 = x3d.ROUTE()
ROUTE2699.fromField = "fraction_changed"
ROUTE2699.fromNode = "RollTimer"
ROUTE2699.toField = "set_fraction"
ROUTE2699.toNode = "Rolls_l_radiocarpal_RotationInterpolator"

Scene22.children.append(ROUTE2699)
ROUTE2700 = x3d.ROUTE()
ROUTE2700.fromField = "fraction_changed"
ROUTE2700.fromNode = "RollTimer"
ROUTE2700.toField = "set_fraction"
ROUTE2700.toNode = "Rolls_l_elbow_RotationInterpolator"

Scene22.children.append(ROUTE2700)
ROUTE2701 = x3d.ROUTE()
ROUTE2701.fromField = "fraction_changed"
ROUTE2701.fromNode = "RollTimer"
ROUTE2701.toField = "set_fraction"
ROUTE2701.toNode = "Rolls_l_shoulder_RotationInterpolator"

Scene22.children.append(ROUTE2701)
ROUTE2702 = x3d.ROUTE()
ROUTE2702.fromField = "fraction_changed"
ROUTE2702.fromNode = "RollTimer"
ROUTE2702.toField = "set_fraction"
ROUTE2702.toNode = "Rolls_head_RotationInterpolator"

Scene22.children.append(ROUTE2702)
ROUTE2703 = x3d.ROUTE()
ROUTE2703.fromField = "fraction_changed"
ROUTE2703.fromNode = "RollTimer"
ROUTE2703.toField = "set_fraction"
ROUTE2703.toNode = "Rolls_neck_RotationInterpolator"

Scene22.children.append(ROUTE2703)
ROUTE2704 = x3d.ROUTE()
ROUTE2704.fromField = "fraction_changed"
ROUTE2704.fromNode = "RollTimer"
ROUTE2704.toField = "set_fraction"
ROUTE2704.toNode = "Rolls_upper_body_RotationInterpolator"

Scene22.children.append(ROUTE2704)
ROUTE2705 = x3d.ROUTE()
ROUTE2705.fromField = "fraction_changed"
ROUTE2705.fromNode = "RollTimer"
ROUTE2705.toField = "set_fraction"
ROUTE2705.toNode = "Rolls_whole_body_RotationInterpolator"

Scene22.children.append(ROUTE2705)
ROUTE2706 = x3d.ROUTE()
ROUTE2706.fromField = "fraction_changed"
ROUTE2706.fromNode = "RollTimer"
ROUTE2706.toField = "set_fraction"
ROUTE2706.toNode = "Rolls_whole_body_TranslationInterpolator"

Scene22.children.append(ROUTE2706)
ROUTE2707 = x3d.ROUTE()
ROUTE2707.fromField = "fraction_changed"
ROUTE2707.fromNode = "RollTimer"
ROUTE2707.toField = "set_fraction"
ROUTE2707.toNode = "Roll_l_sternoclavicular_RollInterpolator"

Scene22.children.append(ROUTE2707)
ROUTE2708 = x3d.ROUTE()
ROUTE2708.fromField = "fraction_changed"
ROUTE2708.fromNode = "RollTimer"
ROUTE2708.toField = "set_fraction"
ROUTE2708.toNode = "Roll_l_acromioclavicular_RollInterpolator"

Scene22.children.append(ROUTE2708)
ROUTE2709 = x3d.ROUTE()
ROUTE2709.fromField = "fraction_changed"
ROUTE2709.fromNode = "RollTimer"
ROUTE2709.toField = "set_fraction"
ROUTE2709.toNode = "Roll_r_sternoclavicular_RollInterpolator"

Scene22.children.append(ROUTE2709)
ROUTE2710 = x3d.ROUTE()
ROUTE2710.fromField = "fraction_changed"
ROUTE2710.fromNode = "RollTimer"
ROUTE2710.toField = "set_fraction"
ROUTE2710.toNode = "Roll_r_acromioclavicular_RollInterpolator"

Scene22.children.append(ROUTE2710)
ROUTE2711 = x3d.ROUTE()
ROUTE2711.fromField = "fraction_changed"
ROUTE2711.fromNode = "RollTimer"
ROUTE2711.toField = "set_fraction"
ROUTE2711.toNode = "Roll_r_metatarsal_PitchInterpolator"

Scene22.children.append(ROUTE2711)
ROUTE2712 = x3d.ROUTE()
ROUTE2712.fromField = "fraction_changed"
ROUTE2712.fromNode = "RollTimer"
ROUTE2712.toField = "set_fraction"
ROUTE2712.toNode = "Roll_sacroiliac_YawInterpolator"

Scene22.children.append(ROUTE2712)
ROUTE2713 = x3d.ROUTE()
ROUTE2713.fromField = "fraction_changed"
ROUTE2713.fromNode = "RollTimer"
ROUTE2713.toField = "set_fraction"
ROUTE2713.toNode = "Roll_vl5_YawInterpolator"

Scene22.children.append(ROUTE2713)
ROUTE2714 = x3d.ROUTE()
ROUTE2714.fromField = "fraction_changed"
ROUTE2714.fromNode = "RollTimer"
ROUTE2714.toField = "set_fraction"
ROUTE2714.toNode = "Roll_vc6_YawInterpolator"

Scene22.children.append(ROUTE2714)
ROUTE2715 = x3d.ROUTE()
ROUTE2715.fromField = "fraction_changed"
ROUTE2715.fromNode = "RollTimer"
ROUTE2715.toField = "set_fraction"
ROUTE2715.toNode = "Roll_l_thumb1_PitchInterpolator"

Scene22.children.append(ROUTE2715)
ROUTE2716 = x3d.ROUTE()
ROUTE2716.fromField = "fraction_changed"
ROUTE2716.fromNode = "RollTimer"
ROUTE2716.toField = "set_fraction"
ROUTE2716.toNode = "Roll_r_thumb1_PitchInterpolator"

Scene22.children.append(ROUTE2716)
ROUTE2717 = x3d.ROUTE()
ROUTE2717.fromField = "value_changed"
ROUTE2717.fromNode = "Rolls_r_talocrural_RotationInterpolator"
ROUTE2717.toField = "set_rotation"
ROUTE2717.toNode = "hanim_r_talocrural"

Scene22.children.append(ROUTE2717)
ROUTE2718 = x3d.ROUTE()
ROUTE2718.fromField = "value_changed"
ROUTE2718.fromNode = "Rolls_r_knee_RotationInterpolator"
ROUTE2718.toField = "set_rotation"
ROUTE2718.toNode = "hanim_r_knee"

Scene22.children.append(ROUTE2718)
ROUTE2719 = x3d.ROUTE()
ROUTE2719.fromField = "value_changed"
ROUTE2719.fromNode = "Rolls_r_hip_RotationInterpolator"
ROUTE2719.toField = "set_rotation"
ROUTE2719.toNode = "hanim_r_hip"

Scene22.children.append(ROUTE2719)
ROUTE2720 = x3d.ROUTE()
ROUTE2720.fromField = "value_changed"
ROUTE2720.fromNode = "Rolls_l_talocrural_RotationInterpolator"
ROUTE2720.toField = "set_rotation"
ROUTE2720.toNode = "hanim_l_talocrural"

Scene22.children.append(ROUTE2720)
ROUTE2721 = x3d.ROUTE()
ROUTE2721.fromField = "value_changed"
ROUTE2721.fromNode = "Rolls_l_knee_RotationInterpolator"
ROUTE2721.toField = "set_rotation"
ROUTE2721.toNode = "hanim_l_knee"

Scene22.children.append(ROUTE2721)
ROUTE2722 = x3d.ROUTE()
ROUTE2722.fromField = "value_changed"
ROUTE2722.fromNode = "Rolls_l_hip_RotationInterpolator"
ROUTE2722.toField = "set_rotation"
ROUTE2722.toNode = "hanim_l_hip"

Scene22.children.append(ROUTE2722)
ROUTE2723 = x3d.ROUTE()
ROUTE2723.fromField = "value_changed"
ROUTE2723.fromNode = "Rolls_r_radiocarpal_RotationInterpolator"
ROUTE2723.toField = "set_rotation"
ROUTE2723.toNode = "hanim_r_radiocarpal"

Scene22.children.append(ROUTE2723)
ROUTE2724 = x3d.ROUTE()
ROUTE2724.fromField = "value_changed"
ROUTE2724.fromNode = "Rolls_r_elbow_RotationInterpolator"
ROUTE2724.toField = "set_rotation"
ROUTE2724.toNode = "hanim_r_elbow"

Scene22.children.append(ROUTE2724)
ROUTE2725 = x3d.ROUTE()
ROUTE2725.fromField = "value_changed"
ROUTE2725.fromNode = "Rolls_r_shoulder_RotationInterpolator"
ROUTE2725.toField = "set_rotation"
ROUTE2725.toNode = "hanim_r_shoulder"

Scene22.children.append(ROUTE2725)
ROUTE2726 = x3d.ROUTE()
ROUTE2726.fromField = "value_changed"
ROUTE2726.fromNode = "Rolls_l_radiocarpal_RotationInterpolator"
ROUTE2726.toField = "set_rotation"
ROUTE2726.toNode = "hanim_l_radiocarpal"

Scene22.children.append(ROUTE2726)
ROUTE2727 = x3d.ROUTE()
ROUTE2727.fromField = "value_changed"
ROUTE2727.fromNode = "Rolls_l_elbow_RotationInterpolator"
ROUTE2727.toField = "set_rotation"
ROUTE2727.toNode = "hanim_l_elbow"

Scene22.children.append(ROUTE2727)
ROUTE2728 = x3d.ROUTE()
ROUTE2728.fromField = "value_changed"
ROUTE2728.fromNode = "Rolls_l_shoulder_RotationInterpolator"
ROUTE2728.toField = "set_rotation"
ROUTE2728.toNode = "hanim_l_shoulder"

Scene22.children.append(ROUTE2728)
ROUTE2729 = x3d.ROUTE()
ROUTE2729.fromField = "value_changed"
ROUTE2729.fromNode = "Rolls_head_RotationInterpolator"
ROUTE2729.toField = "set_rotation"
ROUTE2729.toNode = "hanim_skullbase"

Scene22.children.append(ROUTE2729)
ROUTE2730 = x3d.ROUTE()
ROUTE2730.fromField = "value_changed"
ROUTE2730.fromNode = "Rolls_whole_body_RotationInterpolator"
ROUTE2730.toField = "set_rotation"
ROUTE2730.toNode = "hanim_humanoid_root"

Scene22.children.append(ROUTE2730)
ROUTE2731 = x3d.ROUTE()
ROUTE2731.fromField = "value_changed"
ROUTE2731.fromNode = "Rolls_whole_body_TranslationInterpolator"
ROUTE2731.toField = "set_translation"
ROUTE2731.toNode = "hanim_humanoid_root"

Scene22.children.append(ROUTE2731)
ROUTE2732 = x3d.ROUTE()
ROUTE2732.fromField = "value_changed"
ROUTE2732.fromNode = "Roll_vl5_YawInterpolator"
ROUTE2732.toField = "set_rotation"
ROUTE2732.toNode = "hanim_vl5"

Scene22.children.append(ROUTE2732)
ROUTE2733 = x3d.ROUTE()
ROUTE2733.fromField = "fraction_changed"
ROUTE2733.fromNode = "WalkTimer"
ROUTE2733.toField = "set_fraction"
ROUTE2733.toNode = "Walk_r_talocrural_RotationInterpolator"

Scene22.children.append(ROUTE2733)
ROUTE2734 = x3d.ROUTE()
ROUTE2734.fromField = "fraction_changed"
ROUTE2734.fromNode = "WalkTimer"
ROUTE2734.toField = "set_fraction"
ROUTE2734.toNode = "Walk_r_knee_RotationInterpolator"

Scene22.children.append(ROUTE2734)
ROUTE2735 = x3d.ROUTE()
ROUTE2735.fromField = "fraction_changed"
ROUTE2735.fromNode = "WalkTimer"
ROUTE2735.toField = "set_fraction"
ROUTE2735.toNode = "Walk_r_hip_RotationInterpolator"

Scene22.children.append(ROUTE2735)
ROUTE2736 = x3d.ROUTE()
ROUTE2736.fromField = "fraction_changed"
ROUTE2736.fromNode = "WalkTimer"
ROUTE2736.toField = "set_fraction"
ROUTE2736.toNode = "Walk_l_talocrural_RotationInterpolator"

Scene22.children.append(ROUTE2736)
ROUTE2737 = x3d.ROUTE()
ROUTE2737.fromField = "fraction_changed"
ROUTE2737.fromNode = "WalkTimer"
ROUTE2737.toField = "set_fraction"
ROUTE2737.toNode = "Walk_l_knee_RotationInterpolator"

Scene22.children.append(ROUTE2737)
ROUTE2738 = x3d.ROUTE()
ROUTE2738.fromField = "fraction_changed"
ROUTE2738.fromNode = "WalkTimer"
ROUTE2738.toField = "set_fraction"
ROUTE2738.toNode = "Walk_l_hip_RotationInterpolator"

Scene22.children.append(ROUTE2738)
ROUTE2739 = x3d.ROUTE()
ROUTE2739.fromField = "fraction_changed"
ROUTE2739.fromNode = "WalkTimer"
ROUTE2739.toField = "set_fraction"
ROUTE2739.toNode = "Walk_lower_body_RotationInterpolator"

Scene22.children.append(ROUTE2739)
ROUTE2740 = x3d.ROUTE()
ROUTE2740.fromField = "fraction_changed"
ROUTE2740.fromNode = "WalkTimer"
ROUTE2740.toField = "set_fraction"
ROUTE2740.toNode = "Walk_r_radiocarpal_RotationInterpolator"

Scene22.children.append(ROUTE2740)
ROUTE2741 = x3d.ROUTE()
ROUTE2741.fromField = "fraction_changed"
ROUTE2741.fromNode = "WalkTimer"
ROUTE2741.toField = "set_fraction"
ROUTE2741.toNode = "Walk_r_elbow_RotationInterpolator"

Scene22.children.append(ROUTE2741)
ROUTE2742 = x3d.ROUTE()
ROUTE2742.fromField = "fraction_changed"
ROUTE2742.fromNode = "WalkTimer"
ROUTE2742.toField = "set_fraction"
ROUTE2742.toNode = "Walk_r_shoulder_RotationInterpolator"

Scene22.children.append(ROUTE2742)
ROUTE2743 = x3d.ROUTE()
ROUTE2743.fromField = "fraction_changed"
ROUTE2743.fromNode = "WalkTimer"
ROUTE2743.toField = "set_fraction"
ROUTE2743.toNode = "Walk_l_radiocarpal_RotationInterpolator"

Scene22.children.append(ROUTE2743)
ROUTE2744 = x3d.ROUTE()
ROUTE2744.fromField = "fraction_changed"
ROUTE2744.fromNode = "WalkTimer"
ROUTE2744.toField = "set_fraction"
ROUTE2744.toNode = "Walk_l_elbow_RotationInterpolator"

Scene22.children.append(ROUTE2744)
ROUTE2745 = x3d.ROUTE()
ROUTE2745.fromField = "fraction_changed"
ROUTE2745.fromNode = "WalkTimer"
ROUTE2745.toField = "set_fraction"
ROUTE2745.toNode = "Walk_l_shoulder_RotationInterpolator"

Scene22.children.append(ROUTE2745)
ROUTE2746 = x3d.ROUTE()
ROUTE2746.fromField = "fraction_changed"
ROUTE2746.fromNode = "WalkTimer"
ROUTE2746.toField = "set_fraction"
ROUTE2746.toNode = "Walk_head_RotationInterpolator"

Scene22.children.append(ROUTE2746)
ROUTE2747 = x3d.ROUTE()
ROUTE2747.fromField = "fraction_changed"
ROUTE2747.fromNode = "WalkTimer"
ROUTE2747.toField = "set_fraction"
ROUTE2747.toNode = "Walk_neck_RotationInterpolator"

Scene22.children.append(ROUTE2747)
ROUTE2748 = x3d.ROUTE()
ROUTE2748.fromField = "fraction_changed"
ROUTE2748.fromNode = "WalkTimer"
ROUTE2748.toField = "set_fraction"
ROUTE2748.toNode = "Walk_upper_body_RotationInterpolator"

Scene22.children.append(ROUTE2748)
ROUTE2749 = x3d.ROUTE()
ROUTE2749.fromField = "fraction_changed"
ROUTE2749.fromNode = "WalkTimer"
ROUTE2749.toField = "set_fraction"
ROUTE2749.toNode = "Walk_whole_body_RotationInterpolator"

Scene22.children.append(ROUTE2749)
ROUTE2750 = x3d.ROUTE()
ROUTE2750.fromField = "fraction_changed"
ROUTE2750.fromNode = "WalkTimer"
ROUTE2750.toField = "set_fraction"
ROUTE2750.toNode = "Walk_whole_body_TranslationInterpolator"

Scene22.children.append(ROUTE2750)
ROUTE2751 = x3d.ROUTE()
ROUTE2751.fromField = "fraction_changed"
ROUTE2751.fromNode = "WalkTimer"
ROUTE2751.toField = "set_fraction"
ROUTE2751.toNode = "Walk_l_sternoclavicular_RollInterpolator"

Scene22.children.append(ROUTE2751)
ROUTE2752 = x3d.ROUTE()
ROUTE2752.fromField = "fraction_changed"
ROUTE2752.fromNode = "WalkTimer"
ROUTE2752.toField = "set_fraction"
ROUTE2752.toNode = "Walk_l_acromioclavicular_RollInterpolator"

Scene22.children.append(ROUTE2752)
ROUTE2753 = x3d.ROUTE()
ROUTE2753.fromField = "fraction_changed"
ROUTE2753.fromNode = "WalkTimer"
ROUTE2753.toField = "set_fraction"
ROUTE2753.toNode = "Walk_r_sternoclavicular_RollInterpolator"

Scene22.children.append(ROUTE2753)
ROUTE2754 = x3d.ROUTE()
ROUTE2754.fromField = "fraction_changed"
ROUTE2754.fromNode = "WalkTimer"
ROUTE2754.toField = "set_fraction"
ROUTE2754.toNode = "Walk_r_acromioclavicular_RollInterpolator"

Scene22.children.append(ROUTE2754)
ROUTE2755 = x3d.ROUTE()
ROUTE2755.fromField = "fraction_changed"
ROUTE2755.fromNode = "WalkTimer"
ROUTE2755.toField = "set_fraction"
ROUTE2755.toNode = "Walk_r_metatarsal_PitchInterpolator"

Scene22.children.append(ROUTE2755)
ROUTE2756 = x3d.ROUTE()
ROUTE2756.fromField = "fraction_changed"
ROUTE2756.fromNode = "WalkTimer"
ROUTE2756.toField = "set_fraction"
ROUTE2756.toNode = "Walk_sacroiliac_YawInterpolator"

Scene22.children.append(ROUTE2756)
ROUTE2757 = x3d.ROUTE()
ROUTE2757.fromField = "fraction_changed"
ROUTE2757.fromNode = "WalkTimer"
ROUTE2757.toField = "set_fraction"
ROUTE2757.toNode = "Walk_vl5_YawInterpolator"

Scene22.children.append(ROUTE2757)
ROUTE2758 = x3d.ROUTE()
ROUTE2758.fromField = "fraction_changed"
ROUTE2758.fromNode = "WalkTimer"
ROUTE2758.toField = "set_fraction"
ROUTE2758.toNode = "Walk_vc6_YawInterpolator"

Scene22.children.append(ROUTE2758)
ROUTE2759 = x3d.ROUTE()
ROUTE2759.fromField = "fraction_changed"
ROUTE2759.fromNode = "WalkTimer"
ROUTE2759.toField = "set_fraction"
ROUTE2759.toNode = "Walk_l_thumb1_PitchInterpolator"

Scene22.children.append(ROUTE2759)
ROUTE2760 = x3d.ROUTE()
ROUTE2760.fromField = "fraction_changed"
ROUTE2760.fromNode = "WalkTimer"
ROUTE2760.toField = "set_fraction"
ROUTE2760.toNode = "Walk_r_thumb1_PitchInterpolator"

Scene22.children.append(ROUTE2760)
ROUTE2761 = x3d.ROUTE()
ROUTE2761.fromField = "value_changed"
ROUTE2761.fromNode = "Walk_r_talocrural_RotationInterpolator"
ROUTE2761.toField = "set_rotation"
ROUTE2761.toNode = "hanim_r_talocrural"

Scene22.children.append(ROUTE2761)
ROUTE2762 = x3d.ROUTE()
ROUTE2762.fromField = "value_changed"
ROUTE2762.fromNode = "Walk_r_knee_RotationInterpolator"
ROUTE2762.toField = "set_rotation"
ROUTE2762.toNode = "hanim_r_knee"

Scene22.children.append(ROUTE2762)
ROUTE2763 = x3d.ROUTE()
ROUTE2763.fromField = "value_changed"
ROUTE2763.fromNode = "Walk_r_hip_RotationInterpolator"
ROUTE2763.toField = "set_rotation"
ROUTE2763.toNode = "hanim_r_hip"

Scene22.children.append(ROUTE2763)
ROUTE2764 = x3d.ROUTE()
ROUTE2764.fromField = "value_changed"
ROUTE2764.fromNode = "Walk_l_talocrural_RotationInterpolator"
ROUTE2764.toField = "set_rotation"
ROUTE2764.toNode = "hanim_l_talocrural"

Scene22.children.append(ROUTE2764)
ROUTE2765 = x3d.ROUTE()
ROUTE2765.fromField = "value_changed"
ROUTE2765.fromNode = "Walk_l_knee_RotationInterpolator"
ROUTE2765.toField = "set_rotation"
ROUTE2765.toNode = "hanim_l_knee"

Scene22.children.append(ROUTE2765)
ROUTE2766 = x3d.ROUTE()
ROUTE2766.fromField = "value_changed"
ROUTE2766.fromNode = "Walk_l_hip_RotationInterpolator"
ROUTE2766.toField = "set_rotation"
ROUTE2766.toNode = "hanim_l_hip"

Scene22.children.append(ROUTE2766)
ROUTE2767 = x3d.ROUTE()
ROUTE2767.fromField = "value_changed"
ROUTE2767.fromNode = "Walk_r_radiocarpal_RotationInterpolator"
ROUTE2767.toField = "set_rotation"
ROUTE2767.toNode = "hanim_r_radiocarpal"

Scene22.children.append(ROUTE2767)
ROUTE2768 = x3d.ROUTE()
ROUTE2768.fromField = "value_changed"
ROUTE2768.fromNode = "Walk_r_elbow_RotationInterpolator"
ROUTE2768.toField = "set_rotation"
ROUTE2768.toNode = "hanim_r_elbow"

Scene22.children.append(ROUTE2768)
ROUTE2769 = x3d.ROUTE()
ROUTE2769.fromField = "value_changed"
ROUTE2769.fromNode = "Walk_r_shoulder_RotationInterpolator"
ROUTE2769.toField = "set_rotation"
ROUTE2769.toNode = "hanim_r_shoulder"

Scene22.children.append(ROUTE2769)
ROUTE2770 = x3d.ROUTE()
ROUTE2770.fromField = "value_changed"
ROUTE2770.fromNode = "Walk_l_radiocarpal_RotationInterpolator"
ROUTE2770.toField = "set_rotation"
ROUTE2770.toNode = "hanim_l_radiocarpal"

Scene22.children.append(ROUTE2770)
ROUTE2771 = x3d.ROUTE()
ROUTE2771.fromField = "value_changed"
ROUTE2771.fromNode = "Walk_l_elbow_RotationInterpolator"
ROUTE2771.toField = "set_rotation"
ROUTE2771.toNode = "hanim_l_elbow"

Scene22.children.append(ROUTE2771)
ROUTE2772 = x3d.ROUTE()
ROUTE2772.fromField = "value_changed"
ROUTE2772.fromNode = "Walk_l_shoulder_RotationInterpolator"
ROUTE2772.toField = "set_rotation"
ROUTE2772.toNode = "hanim_l_shoulder"

Scene22.children.append(ROUTE2772)
ROUTE2773 = x3d.ROUTE()
ROUTE2773.fromField = "value_changed"
ROUTE2773.fromNode = "Walk_head_RotationInterpolator"
ROUTE2773.toField = "set_rotation"
ROUTE2773.toNode = "hanim_skullbase"

Scene22.children.append(ROUTE2773)
ROUTE2774 = x3d.ROUTE()
ROUTE2774.fromField = "value_changed"
ROUTE2774.fromNode = "Walk_whole_body_RotationInterpolator"
ROUTE2774.toField = "set_rotation"
ROUTE2774.toNode = "hanim_humanoid_root"

Scene22.children.append(ROUTE2774)
ROUTE2775 = x3d.ROUTE()
ROUTE2775.fromField = "value_changed"
ROUTE2775.fromNode = "Walk_whole_body_TranslationInterpolator"
ROUTE2775.toField = "set_translation"
ROUTE2775.toNode = "hanim_humanoid_root"

Scene22.children.append(ROUTE2775)
ROUTE2776 = x3d.ROUTE()
ROUTE2776.fromField = "value_changed"
ROUTE2776.fromNode = "Walk_vl5_YawInterpolator"
ROUTE2776.toField = "set_rotation"
ROUTE2776.toNode = "hanim_vl5"

Scene22.children.append(ROUTE2776)
ROUTE2777 = x3d.ROUTE()
ROUTE2777.fromField = "fraction_changed"
ROUTE2777.fromNode = "RunTimer"
ROUTE2777.toField = "set_fraction"
ROUTE2777.toNode = "Run_r_talocrural_RotationInterpolator_Run"

Scene22.children.append(ROUTE2777)
ROUTE2778 = x3d.ROUTE()
ROUTE2778.fromField = "fraction_changed"
ROUTE2778.fromNode = "RunTimer"
ROUTE2778.toField = "set_fraction"
ROUTE2778.toNode = "Run_r_knee_RotationInterpolator_Run"

Scene22.children.append(ROUTE2778)
ROUTE2779 = x3d.ROUTE()
ROUTE2779.fromField = "fraction_changed"
ROUTE2779.fromNode = "RunTimer"
ROUTE2779.toField = "set_fraction"
ROUTE2779.toNode = "Run_r_hip_RotationInterpolator_Run"

Scene22.children.append(ROUTE2779)
ROUTE2780 = x3d.ROUTE()
ROUTE2780.fromField = "fraction_changed"
ROUTE2780.fromNode = "RunTimer"
ROUTE2780.toField = "set_fraction"
ROUTE2780.toNode = "Run_l_talocrural_RotationInterpolator_Run"

Scene22.children.append(ROUTE2780)
ROUTE2781 = x3d.ROUTE()
ROUTE2781.fromField = "fraction_changed"
ROUTE2781.fromNode = "RunTimer"
ROUTE2781.toField = "set_fraction"
ROUTE2781.toNode = "Run_l_knee_RotationInterpolator_Run"

Scene22.children.append(ROUTE2781)
ROUTE2782 = x3d.ROUTE()
ROUTE2782.fromField = "fraction_changed"
ROUTE2782.fromNode = "RunTimer"
ROUTE2782.toField = "set_fraction"
ROUTE2782.toNode = "Run_l_hip_RotationInterpolator_Run"

Scene22.children.append(ROUTE2782)
ROUTE2783 = x3d.ROUTE()
ROUTE2783.fromField = "fraction_changed"
ROUTE2783.fromNode = "RunTimer"
ROUTE2783.toField = "set_fraction"
ROUTE2783.toNode = "Run_lower_body_RotationInterpolator_Run"

Scene22.children.append(ROUTE2783)
ROUTE2784 = x3d.ROUTE()
ROUTE2784.fromField = "fraction_changed"
ROUTE2784.fromNode = "RunTimer"
ROUTE2784.toField = "set_fraction"
ROUTE2784.toNode = "Run_r_radiocarpal_RotationInterpolator_Run"

Scene22.children.append(ROUTE2784)
ROUTE2785 = x3d.ROUTE()
ROUTE2785.fromField = "fraction_changed"
ROUTE2785.fromNode = "RunTimer"
ROUTE2785.toField = "set_fraction"
ROUTE2785.toNode = "Run_r_elbow_RotationInterpolator_Run"

Scene22.children.append(ROUTE2785)
ROUTE2786 = x3d.ROUTE()
ROUTE2786.fromField = "fraction_changed"
ROUTE2786.fromNode = "RunTimer"
ROUTE2786.toField = "set_fraction"
ROUTE2786.toNode = "Run_r_shoulder_RotationInterpolator_Run"

Scene22.children.append(ROUTE2786)
ROUTE2787 = x3d.ROUTE()
ROUTE2787.fromField = "fraction_changed"
ROUTE2787.fromNode = "RunTimer"
ROUTE2787.toField = "set_fraction"
ROUTE2787.toNode = "Run_l_radiocarpal_RotationInterpolator_Run"

Scene22.children.append(ROUTE2787)
ROUTE2788 = x3d.ROUTE()
ROUTE2788.fromField = "fraction_changed"
ROUTE2788.fromNode = "RunTimer"
ROUTE2788.toField = "set_fraction"
ROUTE2788.toNode = "Run_l_elbow_RotationInterpolator_Run"

Scene22.children.append(ROUTE2788)
ROUTE2789 = x3d.ROUTE()
ROUTE2789.fromField = "fraction_changed"
ROUTE2789.fromNode = "RunTimer"
ROUTE2789.toField = "set_fraction"
ROUTE2789.toNode = "Run_l_shoulder_RotationInterpolator_Run"

Scene22.children.append(ROUTE2789)
ROUTE2790 = x3d.ROUTE()
ROUTE2790.fromField = "fraction_changed"
ROUTE2790.fromNode = "RunTimer"
ROUTE2790.toField = "set_fraction"
ROUTE2790.toNode = "Run_head_RotationInterpolator_Run"

Scene22.children.append(ROUTE2790)
ROUTE2791 = x3d.ROUTE()
ROUTE2791.fromField = "fraction_changed"
ROUTE2791.fromNode = "RunTimer"
ROUTE2791.toField = "set_fraction"
ROUTE2791.toNode = "Run_neck_RotationInterpolator_Run"

Scene22.children.append(ROUTE2791)
ROUTE2792 = x3d.ROUTE()
ROUTE2792.fromField = "fraction_changed"
ROUTE2792.fromNode = "RunTimer"
ROUTE2792.toField = "set_fraction"
ROUTE2792.toNode = "Run_upper_body_RotationInterpolator_Run"

Scene22.children.append(ROUTE2792)
ROUTE2793 = x3d.ROUTE()
ROUTE2793.fromField = "fraction_changed"
ROUTE2793.fromNode = "RunTimer"
ROUTE2793.toField = "set_fraction"
ROUTE2793.toNode = "Run_whole_body_RotationInterpolator_Run"

Scene22.children.append(ROUTE2793)
ROUTE2794 = x3d.ROUTE()
ROUTE2794.fromField = "fraction_changed"
ROUTE2794.fromNode = "RunTimer"
ROUTE2794.toField = "set_fraction"
ROUTE2794.toNode = "Run_whole_body_TranslationInterpolator_Run"

Scene22.children.append(ROUTE2794)
ROUTE2795 = x3d.ROUTE()
ROUTE2795.fromField = "fraction_changed"
ROUTE2795.fromNode = "RunTimer"
ROUTE2795.toField = "set_fraction"
ROUTE2795.toNode = "Run_l_sternoclavicular_RollInterpolator"

Scene22.children.append(ROUTE2795)
ROUTE2796 = x3d.ROUTE()
ROUTE2796.fromField = "fraction_changed"
ROUTE2796.fromNode = "RunTimer"
ROUTE2796.toField = "set_fraction"
ROUTE2796.toNode = "Run_l_acromioclavicular_RollInterpolator"

Scene22.children.append(ROUTE2796)
ROUTE2797 = x3d.ROUTE()
ROUTE2797.fromField = "fraction_changed"
ROUTE2797.fromNode = "RunTimer"
ROUTE2797.toField = "set_fraction"
ROUTE2797.toNode = "Run_r_sternoclavicular_RollInterpolator"

Scene22.children.append(ROUTE2797)
ROUTE2798 = x3d.ROUTE()
ROUTE2798.fromField = "fraction_changed"
ROUTE2798.fromNode = "RunTimer"
ROUTE2798.toField = "set_fraction"
ROUTE2798.toNode = "Run_r_acromioclavicular_RollInterpolator"

Scene22.children.append(ROUTE2798)
ROUTE2799 = x3d.ROUTE()
ROUTE2799.fromField = "fraction_changed"
ROUTE2799.fromNode = "RunTimer"
ROUTE2799.toField = "set_fraction"
ROUTE2799.toNode = "Run_r_metatarsal_PitchInterpolator"

Scene22.children.append(ROUTE2799)
ROUTE2800 = x3d.ROUTE()
ROUTE2800.fromField = "fraction_changed"
ROUTE2800.fromNode = "RunTimer"
ROUTE2800.toField = "set_fraction"
ROUTE2800.toNode = "Run_sacroiliac_YawInterpolator"

Scene22.children.append(ROUTE2800)
ROUTE2801 = x3d.ROUTE()
ROUTE2801.fromField = "fraction_changed"
ROUTE2801.fromNode = "RunTimer"
ROUTE2801.toField = "set_fraction"
ROUTE2801.toNode = "Run_vl5_YawInterpolator"

Scene22.children.append(ROUTE2801)
ROUTE2802 = x3d.ROUTE()
ROUTE2802.fromField = "fraction_changed"
ROUTE2802.fromNode = "RunTimer"
ROUTE2802.toField = "set_fraction"
ROUTE2802.toNode = "Run_vc6_YawInterpolator"

Scene22.children.append(ROUTE2802)
ROUTE2803 = x3d.ROUTE()
ROUTE2803.fromField = "fraction_changed"
ROUTE2803.fromNode = "RunTimer"
ROUTE2803.toField = "set_fraction"
ROUTE2803.toNode = "Run_l_thumb1_PitchInterpolator"

Scene22.children.append(ROUTE2803)
ROUTE2804 = x3d.ROUTE()
ROUTE2804.fromField = "fraction_changed"
ROUTE2804.fromNode = "RunTimer"
ROUTE2804.toField = "set_fraction"
ROUTE2804.toNode = "Run_r_thumb1_PitchInterpolator"

Scene22.children.append(ROUTE2804)
ROUTE2805 = x3d.ROUTE()
ROUTE2805.fromField = "value_changed"
ROUTE2805.fromNode = "Run_r_talocrural_RotationInterpolator_Run"
ROUTE2805.toField = "set_rotation"
ROUTE2805.toNode = "hanim_r_talocrural"

Scene22.children.append(ROUTE2805)
ROUTE2806 = x3d.ROUTE()
ROUTE2806.fromField = "value_changed"
ROUTE2806.fromNode = "Run_r_knee_RotationInterpolator_Run"
ROUTE2806.toField = "set_rotation"
ROUTE2806.toNode = "hanim_r_knee"

Scene22.children.append(ROUTE2806)
ROUTE2807 = x3d.ROUTE()
ROUTE2807.fromField = "value_changed"
ROUTE2807.fromNode = "Run_r_hip_RotationInterpolator_Run"
ROUTE2807.toField = "set_rotation"
ROUTE2807.toNode = "hanim_r_hip"

Scene22.children.append(ROUTE2807)
ROUTE2808 = x3d.ROUTE()
ROUTE2808.fromField = "value_changed"
ROUTE2808.fromNode = "Run_l_talocrural_RotationInterpolator_Run"
ROUTE2808.toField = "set_rotation"
ROUTE2808.toNode = "hanim_l_talocrural"

Scene22.children.append(ROUTE2808)
ROUTE2809 = x3d.ROUTE()
ROUTE2809.fromField = "value_changed"
ROUTE2809.fromNode = "Run_l_knee_RotationInterpolator_Run"
ROUTE2809.toField = "set_rotation"
ROUTE2809.toNode = "hanim_l_knee"

Scene22.children.append(ROUTE2809)
ROUTE2810 = x3d.ROUTE()
ROUTE2810.fromField = "value_changed"
ROUTE2810.fromNode = "Run_l_hip_RotationInterpolator_Run"
ROUTE2810.toField = "set_rotation"
ROUTE2810.toNode = "hanim_l_hip"

Scene22.children.append(ROUTE2810)
ROUTE2811 = x3d.ROUTE()
ROUTE2811.fromField = "value_changed"
ROUTE2811.fromNode = "Run_r_radiocarpal_RotationInterpolator_Run"
ROUTE2811.toField = "set_rotation"
ROUTE2811.toNode = "hanim_r_radiocarpal"

Scene22.children.append(ROUTE2811)
ROUTE2812 = x3d.ROUTE()
ROUTE2812.fromField = "value_changed"
ROUTE2812.fromNode = "Run_r_elbow_RotationInterpolator_Run"
ROUTE2812.toField = "set_rotation"
ROUTE2812.toNode = "hanim_r_elbow"

Scene22.children.append(ROUTE2812)
ROUTE2813 = x3d.ROUTE()
ROUTE2813.fromField = "value_changed"
ROUTE2813.fromNode = "Run_r_shoulder_RotationInterpolator_Run"
ROUTE2813.toField = "set_rotation"
ROUTE2813.toNode = "hanim_r_shoulder"

Scene22.children.append(ROUTE2813)
ROUTE2814 = x3d.ROUTE()
ROUTE2814.fromField = "value_changed"
ROUTE2814.fromNode = "Run_l_radiocarpal_RotationInterpolator_Run"
ROUTE2814.toField = "set_rotation"
ROUTE2814.toNode = "hanim_l_radiocarpal"

Scene22.children.append(ROUTE2814)
ROUTE2815 = x3d.ROUTE()
ROUTE2815.fromField = "value_changed"
ROUTE2815.fromNode = "Run_l_elbow_RotationInterpolator_Run"
ROUTE2815.toField = "set_rotation"
ROUTE2815.toNode = "hanim_l_elbow"

Scene22.children.append(ROUTE2815)
ROUTE2816 = x3d.ROUTE()
ROUTE2816.fromField = "value_changed"
ROUTE2816.fromNode = "Run_l_shoulder_RotationInterpolator_Run"
ROUTE2816.toField = "set_rotation"
ROUTE2816.toNode = "hanim_l_shoulder"

Scene22.children.append(ROUTE2816)
ROUTE2817 = x3d.ROUTE()
ROUTE2817.fromField = "value_changed"
ROUTE2817.fromNode = "Run_head_RotationInterpolator_Run"
ROUTE2817.toField = "set_rotation"
ROUTE2817.toNode = "hanim_skullbase"

Scene22.children.append(ROUTE2817)
ROUTE2818 = x3d.ROUTE()
ROUTE2818.fromField = "value_changed"
ROUTE2818.fromNode = "Run_whole_body_RotationInterpolator_Run"
ROUTE2818.toField = "set_rotation"
ROUTE2818.toNode = "hanim_humanoid_root"

Scene22.children.append(ROUTE2818)
ROUTE2819 = x3d.ROUTE()
ROUTE2819.fromField = "value_changed"
ROUTE2819.fromNode = "Run_whole_body_TranslationInterpolator_Run"
ROUTE2819.toField = "set_translation"
ROUTE2819.toNode = "hanim_humanoid_root"

Scene22.children.append(ROUTE2819)
ROUTE2820 = x3d.ROUTE()
ROUTE2820.fromField = "value_changed"
ROUTE2820.fromNode = "Run_vl5_YawInterpolator"
ROUTE2820.toField = "set_rotation"
ROUTE2820.toNode = "hanim_vl5"

Scene22.children.append(ROUTE2820)
ROUTE2821 = x3d.ROUTE()
ROUTE2821.fromField = "fraction_changed"
ROUTE2821.fromNode = "JumpTimer"
ROUTE2821.toField = "set_fraction"
ROUTE2821.toNode = "Jump_r_talocrural_RotationInterpolator"

Scene22.children.append(ROUTE2821)
ROUTE2822 = x3d.ROUTE()
ROUTE2822.fromField = "fraction_changed"
ROUTE2822.fromNode = "JumpTimer"
ROUTE2822.toField = "set_fraction"
ROUTE2822.toNode = "Jump_r_knee_RotationInterpolator"

Scene22.children.append(ROUTE2822)
ROUTE2823 = x3d.ROUTE()
ROUTE2823.fromField = "fraction_changed"
ROUTE2823.fromNode = "JumpTimer"
ROUTE2823.toField = "set_fraction"
ROUTE2823.toNode = "Jump_r_hip_RotationInterpolator"

Scene22.children.append(ROUTE2823)
ROUTE2824 = x3d.ROUTE()
ROUTE2824.fromField = "fraction_changed"
ROUTE2824.fromNode = "JumpTimer"
ROUTE2824.toField = "set_fraction"
ROUTE2824.toNode = "Jump_l_talocrural_RotationInterpolator"

Scene22.children.append(ROUTE2824)
ROUTE2825 = x3d.ROUTE()
ROUTE2825.fromField = "fraction_changed"
ROUTE2825.fromNode = "JumpTimer"
ROUTE2825.toField = "set_fraction"
ROUTE2825.toNode = "Jump_l_knee_RotationInterpolator"

Scene22.children.append(ROUTE2825)
ROUTE2826 = x3d.ROUTE()
ROUTE2826.fromField = "fraction_changed"
ROUTE2826.fromNode = "JumpTimer"
ROUTE2826.toField = "set_fraction"
ROUTE2826.toNode = "Jump_l_hip_RotationInterpolator"

Scene22.children.append(ROUTE2826)
ROUTE2827 = x3d.ROUTE()
ROUTE2827.fromField = "fraction_changed"
ROUTE2827.fromNode = "JumpTimer"
ROUTE2827.toField = "set_fraction"
ROUTE2827.toNode = "Jump_lower_body_RotationInterpolator"

Scene22.children.append(ROUTE2827)
ROUTE2828 = x3d.ROUTE()
ROUTE2828.fromField = "fraction_changed"
ROUTE2828.fromNode = "JumpTimer"
ROUTE2828.toField = "set_fraction"
ROUTE2828.toNode = "Jump_r_radiocarpal_RotationInterpolator"

Scene22.children.append(ROUTE2828)
ROUTE2829 = x3d.ROUTE()
ROUTE2829.fromField = "fraction_changed"
ROUTE2829.fromNode = "JumpTimer"
ROUTE2829.toField = "set_fraction"
ROUTE2829.toNode = "Jump_r_elbow_RotationInterpolator"

Scene22.children.append(ROUTE2829)
ROUTE2830 = x3d.ROUTE()
ROUTE2830.fromField = "fraction_changed"
ROUTE2830.fromNode = "JumpTimer"
ROUTE2830.toField = "set_fraction"
ROUTE2830.toNode = "Jump_r_shoulder_RotationInterpolator"

Scene22.children.append(ROUTE2830)
ROUTE2831 = x3d.ROUTE()
ROUTE2831.fromField = "fraction_changed"
ROUTE2831.fromNode = "JumpTimer"
ROUTE2831.toField = "set_fraction"
ROUTE2831.toNode = "Jump_l_radiocarpal_RotationInterpolator"

Scene22.children.append(ROUTE2831)
ROUTE2832 = x3d.ROUTE()
ROUTE2832.fromField = "fraction_changed"
ROUTE2832.fromNode = "JumpTimer"
ROUTE2832.toField = "set_fraction"
ROUTE2832.toNode = "Jump_l_elbow_RotationInterpolator"

Scene22.children.append(ROUTE2832)
ROUTE2833 = x3d.ROUTE()
ROUTE2833.fromField = "fraction_changed"
ROUTE2833.fromNode = "JumpTimer"
ROUTE2833.toField = "set_fraction"
ROUTE2833.toNode = "Jump_l_shoulder_RotationInterpolator"

Scene22.children.append(ROUTE2833)
ROUTE2834 = x3d.ROUTE()
ROUTE2834.fromField = "fraction_changed"
ROUTE2834.fromNode = "JumpTimer"
ROUTE2834.toField = "set_fraction"
ROUTE2834.toNode = "Jump_head_RotationInterpolator"

Scene22.children.append(ROUTE2834)
ROUTE2835 = x3d.ROUTE()
ROUTE2835.fromField = "fraction_changed"
ROUTE2835.fromNode = "JumpTimer"
ROUTE2835.toField = "set_fraction"
ROUTE2835.toNode = "Jump_neck_RotationInterpolator"

Scene22.children.append(ROUTE2835)
ROUTE2836 = x3d.ROUTE()
ROUTE2836.fromField = "fraction_changed"
ROUTE2836.fromNode = "JumpTimer"
ROUTE2836.toField = "set_fraction"
ROUTE2836.toNode = "Jump_upper_body_RotationInterpolator"

Scene22.children.append(ROUTE2836)
ROUTE2837 = x3d.ROUTE()
ROUTE2837.fromField = "fraction_changed"
ROUTE2837.fromNode = "JumpTimer"
ROUTE2837.toField = "set_fraction"
ROUTE2837.toNode = "Jump_whole_body_RotationInterpolator"

Scene22.children.append(ROUTE2837)
ROUTE2838 = x3d.ROUTE()
ROUTE2838.fromField = "fraction_changed"
ROUTE2838.fromNode = "JumpTimer"
ROUTE2838.toField = "set_fraction"
ROUTE2838.toNode = "Jump_whole_body_TranslationInterpolator"

Scene22.children.append(ROUTE2838)
ROUTE2839 = x3d.ROUTE()
ROUTE2839.fromField = "fraction_changed"
ROUTE2839.fromNode = "JumpTimer"
ROUTE2839.toField = "set_fraction"
ROUTE2839.toNode = "Jump_l_sternoclavicular_RollInterpolator"

Scene22.children.append(ROUTE2839)
ROUTE2840 = x3d.ROUTE()
ROUTE2840.fromField = "fraction_changed"
ROUTE2840.fromNode = "JumpTimer"
ROUTE2840.toField = "set_fraction"
ROUTE2840.toNode = "Jump_l_acromioclavicular_RollInterpolator"

Scene22.children.append(ROUTE2840)
ROUTE2841 = x3d.ROUTE()
ROUTE2841.fromField = "fraction_changed"
ROUTE2841.fromNode = "JumpTimer"
ROUTE2841.toField = "set_fraction"
ROUTE2841.toNode = "Jump_r_sternoclavicular_RollInterpolator"

Scene22.children.append(ROUTE2841)
ROUTE2842 = x3d.ROUTE()
ROUTE2842.fromField = "fraction_changed"
ROUTE2842.fromNode = "JumpTimer"
ROUTE2842.toField = "set_fraction"
ROUTE2842.toNode = "Jump_r_acromioclavicular_RollInterpolator"

Scene22.children.append(ROUTE2842)
ROUTE2843 = x3d.ROUTE()
ROUTE2843.fromField = "fraction_changed"
ROUTE2843.fromNode = "JumpTimer"
ROUTE2843.toField = "set_fraction"
ROUTE2843.toNode = "Jump_r_metatarsal_PitchInterpolator"

Scene22.children.append(ROUTE2843)
ROUTE2844 = x3d.ROUTE()
ROUTE2844.fromField = "fraction_changed"
ROUTE2844.fromNode = "JumpTimer"
ROUTE2844.toField = "set_fraction"
ROUTE2844.toNode = "Jump_sacroiliac_YawInterpolator"

Scene22.children.append(ROUTE2844)
ROUTE2845 = x3d.ROUTE()
ROUTE2845.fromField = "fraction_changed"
ROUTE2845.fromNode = "JumpTimer"
ROUTE2845.toField = "set_fraction"
ROUTE2845.toNode = "Jump_vl5_YawInterpolator"

Scene22.children.append(ROUTE2845)
ROUTE2846 = x3d.ROUTE()
ROUTE2846.fromField = "fraction_changed"
ROUTE2846.fromNode = "JumpTimer"
ROUTE2846.toField = "set_fraction"
ROUTE2846.toNode = "Jump_vc6_YawInterpolator"

Scene22.children.append(ROUTE2846)
ROUTE2847 = x3d.ROUTE()
ROUTE2847.fromField = "fraction_changed"
ROUTE2847.fromNode = "JumpTimer"
ROUTE2847.toField = "set_fraction"
ROUTE2847.toNode = "Jump_l_thumb1_PitchInterpolator"

Scene22.children.append(ROUTE2847)
ROUTE2848 = x3d.ROUTE()
ROUTE2848.fromField = "fraction_changed"
ROUTE2848.fromNode = "JumpTimer"
ROUTE2848.toField = "set_fraction"
ROUTE2848.toNode = "Jump_r_thumb1_PitchInterpolator"

Scene22.children.append(ROUTE2848)
ROUTE2849 = x3d.ROUTE()
ROUTE2849.fromField = "value_changed"
ROUTE2849.fromNode = "Jump_r_talocrural_RotationInterpolator"
ROUTE2849.toField = "set_rotation"
ROUTE2849.toNode = "hanim_r_talocrural"

Scene22.children.append(ROUTE2849)
ROUTE2850 = x3d.ROUTE()
ROUTE2850.fromField = "value_changed"
ROUTE2850.fromNode = "Jump_r_knee_RotationInterpolator"
ROUTE2850.toField = "set_rotation"
ROUTE2850.toNode = "hanim_r_knee"

Scene22.children.append(ROUTE2850)
ROUTE2851 = x3d.ROUTE()
ROUTE2851.fromField = "value_changed"
ROUTE2851.fromNode = "Jump_r_hip_RotationInterpolator"
ROUTE2851.toField = "set_rotation"
ROUTE2851.toNode = "hanim_r_hip"

Scene22.children.append(ROUTE2851)
ROUTE2852 = x3d.ROUTE()
ROUTE2852.fromField = "value_changed"
ROUTE2852.fromNode = "Jump_l_talocrural_RotationInterpolator"
ROUTE2852.toField = "set_rotation"
ROUTE2852.toNode = "hanim_l_talocrural"

Scene22.children.append(ROUTE2852)
ROUTE2853 = x3d.ROUTE()
ROUTE2853.fromField = "value_changed"
ROUTE2853.fromNode = "Jump_l_knee_RotationInterpolator"
ROUTE2853.toField = "set_rotation"
ROUTE2853.toNode = "hanim_l_knee"

Scene22.children.append(ROUTE2853)
ROUTE2854 = x3d.ROUTE()
ROUTE2854.fromField = "value_changed"
ROUTE2854.fromNode = "Jump_l_hip_RotationInterpolator"
ROUTE2854.toField = "set_rotation"
ROUTE2854.toNode = "hanim_l_hip"

Scene22.children.append(ROUTE2854)
ROUTE2855 = x3d.ROUTE()
ROUTE2855.fromField = "value_changed"
ROUTE2855.fromNode = "Jump_r_radiocarpal_RotationInterpolator"
ROUTE2855.toField = "set_rotation"
ROUTE2855.toNode = "hanim_r_radiocarpal"

Scene22.children.append(ROUTE2855)
ROUTE2856 = x3d.ROUTE()
ROUTE2856.fromField = "value_changed"
ROUTE2856.fromNode = "Jump_r_elbow_RotationInterpolator"
ROUTE2856.toField = "set_rotation"
ROUTE2856.toNode = "hanim_r_elbow"

Scene22.children.append(ROUTE2856)
ROUTE2857 = x3d.ROUTE()
ROUTE2857.fromField = "value_changed"
ROUTE2857.fromNode = "Jump_r_shoulder_RotationInterpolator"
ROUTE2857.toField = "set_rotation"
ROUTE2857.toNode = "hanim_r_shoulder"

Scene22.children.append(ROUTE2857)
ROUTE2858 = x3d.ROUTE()
ROUTE2858.fromField = "value_changed"
ROUTE2858.fromNode = "Jump_l_radiocarpal_RotationInterpolator"
ROUTE2858.toField = "set_rotation"
ROUTE2858.toNode = "hanim_l_radiocarpal"

Scene22.children.append(ROUTE2858)
ROUTE2859 = x3d.ROUTE()
ROUTE2859.fromField = "value_changed"
ROUTE2859.fromNode = "Jump_l_elbow_RotationInterpolator"
ROUTE2859.toField = "set_rotation"
ROUTE2859.toNode = "hanim_l_elbow"

Scene22.children.append(ROUTE2859)
ROUTE2860 = x3d.ROUTE()
ROUTE2860.fromField = "value_changed"
ROUTE2860.fromNode = "Jump_l_shoulder_RotationInterpolator"
ROUTE2860.toField = "set_rotation"
ROUTE2860.toNode = "hanim_l_shoulder"

Scene22.children.append(ROUTE2860)
ROUTE2861 = x3d.ROUTE()
ROUTE2861.fromField = "value_changed"
ROUTE2861.fromNode = "Jump_head_RotationInterpolator"
ROUTE2861.toField = "set_rotation"
ROUTE2861.toNode = "hanim_skullbase"

Scene22.children.append(ROUTE2861)
ROUTE2862 = x3d.ROUTE()
ROUTE2862.fromField = "value_changed"
ROUTE2862.fromNode = "Jump_whole_body_RotationInterpolator"
ROUTE2862.toField = "set_rotation"
ROUTE2862.toNode = "hanim_humanoid_root"

Scene22.children.append(ROUTE2862)
ROUTE2863 = x3d.ROUTE()
ROUTE2863.fromField = "value_changed"
ROUTE2863.fromNode = "Jump_whole_body_TranslationInterpolator"
ROUTE2863.toField = "set_translation"
ROUTE2863.toNode = "hanim_humanoid_root"

Scene22.children.append(ROUTE2863)
ROUTE2864 = x3d.ROUTE()
ROUTE2864.fromField = "value_changed"
ROUTE2864.fromNode = "Jump_vl5_YawInterpolator"
ROUTE2864.toField = "set_rotation"
ROUTE2864.toNode = "hanim_vl5"

Scene22.children.append(ROUTE2864)
ROUTE2865 = x3d.ROUTE()
ROUTE2865.fromField = "fraction_changed"
ROUTE2865.fromNode = "KickTimer"
ROUTE2865.toField = "set_fraction"
ROUTE2865.toNode = "Kick_l_sternoclavicular_RollInterpolator"

Scene22.children.append(ROUTE2865)
ROUTE2866 = x3d.ROUTE()
ROUTE2866.fromField = "fraction_changed"
ROUTE2866.fromNode = "KickTimer"
ROUTE2866.toField = "set_fraction"
ROUTE2866.toNode = "Kick_l_acromioclavicular_RollInterpolator"

Scene22.children.append(ROUTE2866)
ROUTE2867 = x3d.ROUTE()
ROUTE2867.fromField = "fraction_changed"
ROUTE2867.fromNode = "KickTimer"
ROUTE2867.toField = "set_fraction"
ROUTE2867.toNode = "Kick_l_shoulder_RollInterpolator"

Scene22.children.append(ROUTE2867)
ROUTE2868 = x3d.ROUTE()
ROUTE2868.fromField = "fraction_changed"
ROUTE2868.fromNode = "KickTimer"
ROUTE2868.toField = "set_fraction"
ROUTE2868.toNode = "Kick_l_ForeArm_PitchInterpolator"

Scene22.children.append(ROUTE2868)
ROUTE2869 = x3d.ROUTE()
ROUTE2869.fromField = "fraction_changed"
ROUTE2869.fromNode = "KickTimer"
ROUTE2869.toField = "set_fraction"
ROUTE2869.toNode = "Kick_l_radiocarpal_RollInterpolator"

Scene22.children.append(ROUTE2869)
ROUTE2870 = x3d.ROUTE()
ROUTE2870.fromField = "fraction_changed"
ROUTE2870.fromNode = "KickTimer"
ROUTE2870.toField = "set_fraction"
ROUTE2870.toNode = "Kick_l_thumb1_PitchInterpolator"

Scene22.children.append(ROUTE2870)
ROUTE2871 = x3d.ROUTE()
ROUTE2871.fromField = "fraction_changed"
ROUTE2871.fromNode = "KickTimer"
ROUTE2871.toField = "set_fraction"
ROUTE2871.toNode = "Kick_r_sternoclavicular_RollInterpolator"

Scene22.children.append(ROUTE2871)
ROUTE2872 = x3d.ROUTE()
ROUTE2872.fromField = "fraction_changed"
ROUTE2872.fromNode = "KickTimer"
ROUTE2872.toField = "set_fraction"
ROUTE2872.toNode = "Kick_r_acromioclavicular_RollInterpolator"

Scene22.children.append(ROUTE2872)
ROUTE2873 = x3d.ROUTE()
ROUTE2873.fromField = "fraction_changed"
ROUTE2873.fromNode = "KickTimer"
ROUTE2873.toField = "set_fraction"
ROUTE2873.toNode = "Kick_r_shoulder_RollInterpolator"

Scene22.children.append(ROUTE2873)
ROUTE2874 = x3d.ROUTE()
ROUTE2874.fromField = "fraction_changed"
ROUTE2874.fromNode = "KickTimer"
ROUTE2874.toField = "set_fraction"
ROUTE2874.toNode = "Kick_r_ForeArm_PitchInterpolator"

Scene22.children.append(ROUTE2874)
ROUTE2875 = x3d.ROUTE()
ROUTE2875.fromField = "fraction_changed"
ROUTE2875.fromNode = "KickTimer"
ROUTE2875.toField = "set_fraction"
ROUTE2875.toNode = "Kick_r_radiocarpal_RollInterpolator"

Scene22.children.append(ROUTE2875)
ROUTE2876 = x3d.ROUTE()
ROUTE2876.fromField = "fraction_changed"
ROUTE2876.fromNode = "KickTimer"
ROUTE2876.toField = "set_fraction"
ROUTE2876.toNode = "Kick_r_thumb1_PitchInterpolator"

Scene22.children.append(ROUTE2876)
ROUTE2877 = x3d.ROUTE()
ROUTE2877.fromField = "fraction_changed"
ROUTE2877.fromNode = "KickTimer"
ROUTE2877.toField = "set_fraction"
ROUTE2877.toNode = "Kick_r_hip_PitchInterpolator"

Scene22.children.append(ROUTE2877)
ROUTE2878 = x3d.ROUTE()
ROUTE2878.fromField = "fraction_changed"
ROUTE2878.fromNode = "KickTimer"
ROUTE2878.toField = "set_fraction"
ROUTE2878.toNode = "Kick_r_knee_PitchInterpolator"

Scene22.children.append(ROUTE2878)
ROUTE2879 = x3d.ROUTE()
ROUTE2879.fromField = "fraction_changed"
ROUTE2879.fromNode = "KickTimer"
ROUTE2879.toField = "set_fraction"
ROUTE2879.toNode = "Kick_l_hip_PitchInterpolator"

Scene22.children.append(ROUTE2879)
ROUTE2880 = x3d.ROUTE()
ROUTE2880.fromField = "fraction_changed"
ROUTE2880.fromNode = "KickTimer"
ROUTE2880.toField = "set_fraction"
ROUTE2880.toNode = "Kick_l_knee_PitchInterpolator"

Scene22.children.append(ROUTE2880)
ROUTE2881 = x3d.ROUTE()
ROUTE2881.fromField = "fraction_changed"
ROUTE2881.fromNode = "KickTimer"
ROUTE2881.toField = "set_fraction"
ROUTE2881.toNode = "Kick_r_talocrural_PitchInterpolator"

Scene22.children.append(ROUTE2881)
ROUTE2882 = x3d.ROUTE()
ROUTE2882.fromField = "fraction_changed"
ROUTE2882.fromNode = "KickTimer"
ROUTE2882.toField = "set_fraction"
ROUTE2882.toNode = "Kick_r_metatarsal_PitchInterpolator"

Scene22.children.append(ROUTE2882)
ROUTE2883 = x3d.ROUTE()
ROUTE2883.fromField = "fraction_changed"
ROUTE2883.fromNode = "KickTimer"
ROUTE2883.toField = "set_fraction"
ROUTE2883.toNode = "Kick_sacroiliac_YawInterpolator"

Scene22.children.append(ROUTE2883)
ROUTE2884 = x3d.ROUTE()
ROUTE2884.fromField = "fraction_changed"
ROUTE2884.fromNode = "KickTimer"
ROUTE2884.toField = "set_fraction"
ROUTE2884.toNode = "Kick_vl5_YawInterpolator"

Scene22.children.append(ROUTE2884)
ROUTE2885 = x3d.ROUTE()
ROUTE2885.fromField = "fraction_changed"
ROUTE2885.fromNode = "KickTimer"
ROUTE2885.toField = "set_fraction"
ROUTE2885.toNode = "Kick_vc6_YawInterpolator"

Scene22.children.append(ROUTE2885)
ROUTE2886 = x3d.ROUTE()
ROUTE2886.fromField = "fraction_changed"
ROUTE2886.fromNode = "KickTimer"
ROUTE2886.toField = "set_fraction"
ROUTE2886.toNode = "Kick_lower_body_RotationInterpolator"

Scene22.children.append(ROUTE2886)
ROUTE2887 = x3d.ROUTE()
ROUTE2887.fromField = "fraction_changed"
ROUTE2887.fromNode = "KickTimer"
ROUTE2887.toField = "set_fraction"
ROUTE2887.toNode = "Kick_upper_body_RotationInterpolator"

Scene22.children.append(ROUTE2887)
ROUTE2888 = x3d.ROUTE()
ROUTE2888.fromField = "fraction_changed"
ROUTE2888.fromNode = "KickTimer"
ROUTE2888.toField = "set_fraction"
ROUTE2888.toNode = "Kick_whole_body_RotationInterpolator"

Scene22.children.append(ROUTE2888)
ROUTE2889 = x3d.ROUTE()
ROUTE2889.fromField = "fraction_changed"
ROUTE2889.fromNode = "KickTimer"
ROUTE2889.toField = "set_fraction"
ROUTE2889.toNode = "Kick_whole_body_TranslationInterpolator"

Scene22.children.append(ROUTE2889)
ROUTE2890 = x3d.ROUTE()
ROUTE2890.fromField = "fraction_changed"
ROUTE2890.fromNode = "KickTimer"
ROUTE2890.toField = "set_fraction"
ROUTE2890.toNode = "Kick_neck_RotationInterpolator"

Scene22.children.append(ROUTE2890)
ROUTE2891 = x3d.ROUTE()
ROUTE2891.fromField = "value_changed"
ROUTE2891.fromNode = "Kick_l_shoulder_RollInterpolator"
ROUTE2891.toField = "set_rotation"
ROUTE2891.toNode = "hanim_l_shoulder"

Scene22.children.append(ROUTE2891)
ROUTE2892 = x3d.ROUTE()
ROUTE2892.fromField = "value_changed"
ROUTE2892.fromNode = "Kick_l_ForeArm_PitchInterpolator"
ROUTE2892.toField = "set_rotation"
ROUTE2892.toNode = "hanim_l_elbow"

Scene22.children.append(ROUTE2892)
ROUTE2893 = x3d.ROUTE()
ROUTE2893.fromField = "value_changed"
ROUTE2893.fromNode = "Kick_l_radiocarpal_RollInterpolator"
ROUTE2893.toField = "set_rotation"
ROUTE2893.toNode = "hanim_l_radiocarpal"

Scene22.children.append(ROUTE2893)
ROUTE2894 = x3d.ROUTE()
ROUTE2894.fromField = "value_changed"
ROUTE2894.fromNode = "Kick_r_shoulder_RollInterpolator"
ROUTE2894.toField = "set_rotation"
ROUTE2894.toNode = "hanim_r_shoulder"

Scene22.children.append(ROUTE2894)
ROUTE2895 = x3d.ROUTE()
ROUTE2895.fromField = "value_changed"
ROUTE2895.fromNode = "Kick_r_ForeArm_PitchInterpolator"
ROUTE2895.toField = "set_rotation"
ROUTE2895.toNode = "hanim_r_elbow"

Scene22.children.append(ROUTE2895)
ROUTE2896 = x3d.ROUTE()
ROUTE2896.fromField = "value_changed"
ROUTE2896.fromNode = "Kick_r_radiocarpal_RollInterpolator"
ROUTE2896.toField = "set_rotation"
ROUTE2896.toNode = "hanim_r_radiocarpal"

Scene22.children.append(ROUTE2896)
ROUTE2897 = x3d.ROUTE()
ROUTE2897.fromField = "value_changed"
ROUTE2897.fromNode = "Kick_r_hip_PitchInterpolator"
ROUTE2897.toField = "set_rotation"
ROUTE2897.toNode = "hanim_r_hip"

Scene22.children.append(ROUTE2897)
ROUTE2898 = x3d.ROUTE()
ROUTE2898.fromField = "value_changed"
ROUTE2898.fromNode = "Kick_r_knee_PitchInterpolator"
ROUTE2898.toField = "set_rotation"
ROUTE2898.toNode = "hanim_r_knee"

Scene22.children.append(ROUTE2898)
ROUTE2899 = x3d.ROUTE()
ROUTE2899.fromField = "value_changed"
ROUTE2899.fromNode = "Kick_r_talocrural_PitchInterpolator"
ROUTE2899.toField = "set_rotation"
ROUTE2899.toNode = "hanim_r_talocrural"

Scene22.children.append(ROUTE2899)
ROUTE2900 = x3d.ROUTE()
ROUTE2900.fromField = "value_changed"
ROUTE2900.fromNode = "Kick_l_hip_PitchInterpolator"
ROUTE2900.toField = "set_rotation"
ROUTE2900.toNode = "hanim_l_hip"

Scene22.children.append(ROUTE2900)
ROUTE2901 = x3d.ROUTE()
ROUTE2901.fromField = "value_changed"
ROUTE2901.fromNode = "Kick_l_knee_PitchInterpolator"
ROUTE2901.toField = "set_rotation"
ROUTE2901.toNode = "hanim_l_knee"

Scene22.children.append(ROUTE2901)
ROUTE2902 = x3d.ROUTE()
ROUTE2902.fromField = "value_changed"
ROUTE2902.fromNode = "Kick_r_talocrural_PitchInterpolator"
ROUTE2902.toField = "set_rotation"
ROUTE2902.toNode = "hanim_l_talocrural"

Scene22.children.append(ROUTE2902)
ROUTE2903 = x3d.ROUTE()
ROUTE2903.fromField = "value_changed"
ROUTE2903.fromNode = "Kick_vl5_YawInterpolator"
ROUTE2903.toField = "set_rotation"
ROUTE2903.toNode = "hanim_vl5"

Scene22.children.append(ROUTE2903)
ROUTE2904 = x3d.ROUTE()
ROUTE2904.fromField = "value_changed"
ROUTE2904.fromNode = "Kick_whole_body_RotationInterpolator"
ROUTE2904.toField = "set_rotation"
ROUTE2904.toNode = "hanim_humanoid_root"

Scene22.children.append(ROUTE2904)
ROUTE2905 = x3d.ROUTE()
ROUTE2905.fromField = "value_changed"
ROUTE2905.fromNode = "Kick_whole_body_TranslationInterpolator"
ROUTE2905.toField = "set_translation"
ROUTE2905.toNode = "hanim_humanoid_root"

Scene22.children.append(ROUTE2905)
Group2906 = x3d.Group()
Group2906.DEF = "Interface"
Transform2907 = x3d.Transform()
Transform2907.DEF = "CoordinateSystemFloor"
Transform2907.scale = [0.1,0.1,0.1]
Shape2908 = x3d.Shape()
Shape2908.DEF = "AxisLines_Shape"
IndexedLineSet2909 = x3d.IndexedLineSet()
IndexedLineSet2909.colorIndex = [0,1,2]
IndexedLineSet2909.colorPerVertex = False
IndexedLineSet2909.coordIndex = [0,1,-1,0,2,-1,0,3,-1]
Color2910 = x3d.Color()

IndexedLineSet2909.color = Color2910
Coordinate2911 = x3d.Coordinate()

IndexedLineSet2909.coord = Coordinate2911

Shape2908.geometry = IndexedLineSet2909

Transform2907.children.append(Shape2908)

Group2906.children.append(Transform2907)
ProximitySensor2912 = x3d.ProximitySensor()
ProximitySensor2912.DEF = "HudProx"
ProximitySensor2912.size = [50,50,50]

Group2906.children.append(ProximitySensor2912)
Transform2913 = x3d.Transform()
Transform2913.DEF = "HudXform"
Transform2913.rotation = [0,1,0,0.78]
Transform2913.translation = [2,1,2]
Transform2914 = x3d.Transform()
Transform2914.scale = [0.02,0.02,0.02]
Transform2914.translation = [-0.4,-0.01,-0.75]
Transform2915 = x3d.Transform()
Transform2915.DEF = "Stand_Text"
Transform2915.translation = [0,-0.9,0]
TouchSensor2916 = x3d.TouchSensor()
TouchSensor2916.DEF = "Stand_Touch"

Transform2915.children.append(TouchSensor2916)
Shape2917 = x3d.Shape()
Shape2917.DEF = "StandText"
Appearance2918 = x3d.Appearance()
Material2919 = x3d.Material()
Material2919.DEF = "text_color"
Material2919.ambientIntensity = 1
Material2919.diffuseColor = [0.819,0.521,0.169]
Material2919.emissiveColor = [0.819,0.521,0.169]
Material2919.specularColor = [0.819,0.521,0.169]

Appearance2918.material = Material2919

Shape2917.appearance = Appearance2918
Text2920 = x3d.Text()
Text2920.string = ["Stand"]
FontStyle2921 = x3d.FontStyle()
FontStyle2921.family = ["SANS"]

Text2920.fontStyle = FontStyle2921

Shape2917.geometry = Text2920

Transform2915.children.append(Shape2917)
Shape2922 = x3d.Shape()
Shape2922.DEF = "Stand_Back"
Appearance2923 = x3d.Appearance()
Material2924 = x3d.Material()
Material2924.DEF = "Clear"
Material2924.ambientIntensity = 1
Material2924.diffuseColor = [0,0.5,0]
Material2924.emissiveColor = [0,0.5,0]
Material2924.transparency = 0.8

Appearance2923.material = Material2924

Shape2922.appearance = Appearance2923
IndexedFaceSet2925 = x3d.IndexedFaceSet()
IndexedFaceSet2925.DEF = "Backing"
IndexedFaceSet2925.coordIndex = [0,1,2,3,-1]
Coordinate2926 = x3d.Coordinate()

IndexedFaceSet2925.coord = Coordinate2926

Shape2922.geometry = IndexedFaceSet2925

Transform2915.children.append(Shape2922)

Transform2914.children.append(Transform2915)
Transform2927 = x3d.Transform()
Transform2927.DEF = "Pitch_Text"
Transform2927.translation = [0,-2.4,0]
TouchSensor2928 = x3d.TouchSensor()
TouchSensor2928.DEF = "Pitch_Touch"

Transform2927.children.append(TouchSensor2928)
Shape2929 = x3d.Shape()
Shape2929.DEF = "PitchText"
Appearance2930 = x3d.Appearance()
Material2931 = x3d.Material()
Material2931.USE = "text_color"

Appearance2930.material = Material2931

Shape2929.appearance = Appearance2930
Text2932 = x3d.Text()
Text2932.string = ["Pitch"]
FontStyle2933 = x3d.FontStyle()
FontStyle2933.family = ["SANS"]

Text2932.fontStyle = FontStyle2933

Shape2929.geometry = Text2932

Transform2927.children.append(Shape2929)
Shape2934 = x3d.Shape()
Shape2934.DEF = "Pitch_Back"
Appearance2935 = x3d.Appearance()
Material2936 = x3d.Material()
Material2936.USE = "Clear"

Appearance2935.material = Material2936

Shape2934.appearance = Appearance2935
IndexedFaceSet2937 = x3d.IndexedFaceSet()
IndexedFaceSet2937.USE = "Backing"

Shape2934.geometry = IndexedFaceSet2937

Transform2927.children.append(Shape2934)

Transform2914.children.append(Transform2927)
Transform2938 = x3d.Transform()
Transform2938.DEF = "Yaw_Text"
Transform2938.translation = [0,-3.8,0]
TouchSensor2939 = x3d.TouchSensor()
TouchSensor2939.DEF = "Yaw_Touch"

Transform2938.children.append(TouchSensor2939)
Shape2940 = x3d.Shape()
Shape2940.DEF = "YawText"
Appearance2941 = x3d.Appearance()
Material2942 = x3d.Material()
Material2942.USE = "text_color"

Appearance2941.material = Material2942

Shape2940.appearance = Appearance2941
Text2943 = x3d.Text()
Text2943.string = ["Yaw"]
FontStyle2944 = x3d.FontStyle()
FontStyle2944.family = ["SANS"]

Text2943.fontStyle = FontStyle2944

Shape2940.geometry = Text2943

Transform2938.children.append(Shape2940)
Shape2945 = x3d.Shape()
Shape2945.DEF = "Yaw_Back"
Appearance2946 = x3d.Appearance()
Material2947 = x3d.Material()
Material2947.USE = "Clear"

Appearance2946.material = Material2947

Shape2945.appearance = Appearance2946
IndexedFaceSet2948 = x3d.IndexedFaceSet()
IndexedFaceSet2948.USE = "Backing"

Shape2945.geometry = IndexedFaceSet2948

Transform2938.children.append(Shape2945)

Transform2914.children.append(Transform2938)
Transform2949 = x3d.Transform()
Transform2949.DEF = "Roll_Text"
Transform2949.translation = [0,-5.2,0]
TouchSensor2950 = x3d.TouchSensor()
TouchSensor2950.DEF = "Roll_Touch"

Transform2949.children.append(TouchSensor2950)
Shape2951 = x3d.Shape()
Shape2951.DEF = "RollText"
Appearance2952 = x3d.Appearance()
Material2953 = x3d.Material()
Material2953.USE = "text_color"

Appearance2952.material = Material2953

Shape2951.appearance = Appearance2952
Text2954 = x3d.Text()
Text2954.string = ["Roll"]
FontStyle2955 = x3d.FontStyle()
FontStyle2955.family = ["SANS"]

Text2954.fontStyle = FontStyle2955

Shape2951.geometry = Text2954

Transform2949.children.append(Shape2951)
Shape2956 = x3d.Shape()
Shape2956.DEF = "Roll_Back"
Appearance2957 = x3d.Appearance()
Material2958 = x3d.Material()
Material2958.USE = "Clear"

Appearance2957.material = Material2958

Shape2956.appearance = Appearance2957
IndexedFaceSet2959 = x3d.IndexedFaceSet()
IndexedFaceSet2959.USE = "Backing"

Shape2956.geometry = IndexedFaceSet2959

Transform2949.children.append(Shape2956)

Transform2914.children.append(Transform2949)
Transform2960 = x3d.Transform()
Transform2960.DEF = "Walk_Text"
Transform2960.translation = [0,-6.6,0]
TouchSensor2961 = x3d.TouchSensor()
TouchSensor2961.DEF = "Walk_Touch"

Transform2960.children.append(TouchSensor2961)
Shape2962 = x3d.Shape()
Shape2962.DEF = "WalkText"
Appearance2963 = x3d.Appearance()
Material2964 = x3d.Material()
Material2964.USE = "text_color"

Appearance2963.material = Material2964

Shape2962.appearance = Appearance2963
Text2965 = x3d.Text()
Text2965.string = ["Walk"]
FontStyle2966 = x3d.FontStyle()
FontStyle2966.family = ["SANS"]

Text2965.fontStyle = FontStyle2966

Shape2962.geometry = Text2965

Transform2960.children.append(Shape2962)
Shape2967 = x3d.Shape()
Shape2967.DEF = "Walk_Back"
Appearance2968 = x3d.Appearance()
Material2969 = x3d.Material()
Material2969.USE = "Clear"

Appearance2968.material = Material2969

Shape2967.appearance = Appearance2968
IndexedFaceSet2970 = x3d.IndexedFaceSet()
IndexedFaceSet2970.USE = "Backing"

Shape2967.geometry = IndexedFaceSet2970

Transform2960.children.append(Shape2967)

Transform2914.children.append(Transform2960)
Transform2971 = x3d.Transform()
Transform2971.DEF = "Run_Text"
Transform2971.translation = [0,-8,0]
TouchSensor2972 = x3d.TouchSensor()
TouchSensor2972.DEF = "Run_Touch"

Transform2971.children.append(TouchSensor2972)
Shape2973 = x3d.Shape()
Shape2973.DEF = "RunText"
Appearance2974 = x3d.Appearance()
Material2975 = x3d.Material()
Material2975.USE = "text_color"

Appearance2974.material = Material2975

Shape2973.appearance = Appearance2974
Text2976 = x3d.Text()
Text2976.string = ["Run"]
FontStyle2977 = x3d.FontStyle()
FontStyle2977.family = ["SANS"]

Text2976.fontStyle = FontStyle2977

Shape2973.geometry = Text2976

Transform2971.children.append(Shape2973)
Shape2978 = x3d.Shape()
Shape2978.DEF = "Run_Back"
Appearance2979 = x3d.Appearance()
Material2980 = x3d.Material()
Material2980.USE = "Clear"

Appearance2979.material = Material2980

Shape2978.appearance = Appearance2979
IndexedFaceSet2981 = x3d.IndexedFaceSet()
IndexedFaceSet2981.USE = "Backing"

Shape2978.geometry = IndexedFaceSet2981

Transform2971.children.append(Shape2978)

Transform2914.children.append(Transform2971)
Transform2982 = x3d.Transform()
Transform2982.DEF = "Jump_Text"
Transform2982.translation = [0,-9.4,0]
TouchSensor2983 = x3d.TouchSensor()
TouchSensor2983.DEF = "Jump_Touch"

Transform2982.children.append(TouchSensor2983)
Shape2984 = x3d.Shape()
Shape2984.DEF = "JumpText"
Appearance2985 = x3d.Appearance()
Material2986 = x3d.Material()
Material2986.USE = "text_color"

Appearance2985.material = Material2986

Shape2984.appearance = Appearance2985
Text2987 = x3d.Text()
Text2987.string = ["Jump"]
FontStyle2988 = x3d.FontStyle()
FontStyle2988.family = ["SANS"]

Text2987.fontStyle = FontStyle2988

Shape2984.geometry = Text2987

Transform2982.children.append(Shape2984)
Shape2989 = x3d.Shape()
Shape2989.DEF = "Jump_Back"
Appearance2990 = x3d.Appearance()
Material2991 = x3d.Material()
Material2991.USE = "Clear"

Appearance2990.material = Material2991

Shape2989.appearance = Appearance2990
IndexedFaceSet2992 = x3d.IndexedFaceSet()
IndexedFaceSet2992.USE = "Backing"

Shape2989.geometry = IndexedFaceSet2992

Transform2982.children.append(Shape2989)

Transform2914.children.append(Transform2982)
Transform2993 = x3d.Transform()
Transform2993.DEF = "Kick_Text"
Transform2993.translation = [0,-10.8,0]
TouchSensor2994 = x3d.TouchSensor()
TouchSensor2994.DEF = "Kick_Touch"

Transform2993.children.append(TouchSensor2994)
Shape2995 = x3d.Shape()
Shape2995.DEF = "KickText"
Appearance2996 = x3d.Appearance()
Material2997 = x3d.Material()
Material2997.USE = "text_color"

Appearance2996.material = Material2997

Shape2995.appearance = Appearance2996
Text2998 = x3d.Text()
Text2998.string = ["Kick"]
FontStyle2999 = x3d.FontStyle()
FontStyle2999.family = ["SANS"]

Text2998.fontStyle = FontStyle2999

Shape2995.geometry = Text2998

Transform2993.children.append(Shape2995)
Shape3000 = x3d.Shape()
Shape3000.DEF = "Kick_Back"
Appearance3001 = x3d.Appearance()
Material3002 = x3d.Material()
Material3002.USE = "Clear"

Appearance3001.material = Material3002

Shape3000.appearance = Appearance3001
IndexedFaceSet3003 = x3d.IndexedFaceSet()
IndexedFaceSet3003.USE = "Backing"

Shape3000.geometry = IndexedFaceSet3003

Transform2993.children.append(Shape3000)

Transform2914.children.append(Transform2993)
Transform3004 = x3d.Transform()
Transform3004.DEF = "Stop_Text"
Transform3004.translation = [0,0.4,0]
TouchSensor3005 = x3d.TouchSensor()
TouchSensor3005.DEF = "Stop_Touch"

Transform3004.children.append(TouchSensor3005)
Shape3006 = x3d.Shape()
Shape3006.DEF = "StopText"
Appearance3007 = x3d.Appearance()
Material3008 = x3d.Material()
Material3008.USE = "text_color"

Appearance3007.material = Material3008

Shape3006.appearance = Appearance3007
Text3009 = x3d.Text()
Text3009.string = ["Default"]
FontStyle3010 = x3d.FontStyle()
FontStyle3010.family = ["SANS"]

Text3009.fontStyle = FontStyle3010

Shape3006.geometry = Text3009

Transform3004.children.append(Shape3006)
Shape3011 = x3d.Shape()
Shape3011.DEF = "Stop_Back"
Appearance3012 = x3d.Appearance()
Material3013 = x3d.Material()
Material3013.USE = "Clear"

Appearance3012.material = Material3013

Shape3011.appearance = Appearance3012
IndexedFaceSet3014 = x3d.IndexedFaceSet()
IndexedFaceSet3014.USE = "Backing"

Shape3011.geometry = IndexedFaceSet3014

Transform3004.children.append(Shape3011)

Transform2914.children.append(Transform3004)
Transform3015 = x3d.Transform()
Transform3015.DEF = "SceneLabel"
Transform3015.translation = [1.3,3,0]
Shape3016 = x3d.Shape()
Shape3016.DEF = "SceneLabelText"
Appearance3017 = x3d.Appearance()
Material3018 = x3d.Material()
Material3018.USE = "text_color"

Appearance3017.material = Material3018

Shape3016.appearance = Appearance3017
Text3019 = x3d.Text()
Text3019.string = ["JinLOA4","Animation"]
FontStyle3020 = x3d.FontStyle()
FontStyle3020.family = ["SANS"]
FontStyle3020.justify = ["MIDDLE","MIDDLE"]

Text3019.fontStyle = FontStyle3020

Shape3016.geometry = Text3019

Transform3015.children.append(Shape3016)

Transform2914.children.append(Transform3015)

Transform2913.children.append(Transform2914)

Group2906.children.append(Transform2913)

Scene22.children.append(Group2906)
ROUTE3021 = x3d.ROUTE()
ROUTE3021.fromField = "position_changed"
ROUTE3021.fromNode = "HudProx"
ROUTE3021.toField = "set_translation"
ROUTE3021.toNode = "HudXform"

Scene22.children.append(ROUTE3021)
ROUTE3022 = x3d.ROUTE()
ROUTE3022.fromField = "orientation_changed"
ROUTE3022.fromNode = "HudProx"
ROUTE3022.toField = "set_rotation"
ROUTE3022.toNode = "HudXform"

Scene22.children.append(ROUTE3022)
ROUTE3023 = x3d.ROUTE()
ROUTE3023.fromField = "touchTime"
ROUTE3023.fromNode = "Stand_Touch"
ROUTE3023.toField = "set_stopTime"
ROUTE3023.toNode = "PitchTimer"

Scene22.children.append(ROUTE3023)
ROUTE3024 = x3d.ROUTE()
ROUTE3024.fromField = "touchTime"
ROUTE3024.fromNode = "Stand_Touch"
ROUTE3024.toField = "set_stopTime"
ROUTE3024.toNode = "YawTimer"

Scene22.children.append(ROUTE3024)
ROUTE3025 = x3d.ROUTE()
ROUTE3025.fromField = "touchTime"
ROUTE3025.fromNode = "Stand_Touch"
ROUTE3025.toField = "set_stopTime"
ROUTE3025.toNode = "RollTimer"

Scene22.children.append(ROUTE3025)
ROUTE3026 = x3d.ROUTE()
ROUTE3026.fromField = "touchTime"
ROUTE3026.fromNode = "Stand_Touch"
ROUTE3026.toField = "set_stopTime"
ROUTE3026.toNode = "WalkTimer"

Scene22.children.append(ROUTE3026)
ROUTE3027 = x3d.ROUTE()
ROUTE3027.fromField = "touchTime"
ROUTE3027.fromNode = "Stand_Touch"
ROUTE3027.toField = "set_stopTime"
ROUTE3027.toNode = "RunTimer"

Scene22.children.append(ROUTE3027)
ROUTE3028 = x3d.ROUTE()
ROUTE3028.fromField = "touchTime"
ROUTE3028.fromNode = "Stand_Touch"
ROUTE3028.toField = "set_stopTime"
ROUTE3028.toNode = "JumpTimer"

Scene22.children.append(ROUTE3028)
ROUTE3029 = x3d.ROUTE()
ROUTE3029.fromField = "touchTime"
ROUTE3029.fromNode = "Stand_Touch"
ROUTE3029.toField = "set_stopTime"
ROUTE3029.toNode = "KickTimer"

Scene22.children.append(ROUTE3029)
ROUTE3030 = x3d.ROUTE()
ROUTE3030.fromField = "touchTime"
ROUTE3030.fromNode = "Stand_Touch"
ROUTE3030.toField = "set_stopTime"
ROUTE3030.toNode = "StopTimer"

Scene22.children.append(ROUTE3030)
ROUTE3031 = x3d.ROUTE()
ROUTE3031.fromField = "touchTime"
ROUTE3031.fromNode = "Stand_Touch"
ROUTE3031.toField = "set_startTime"
ROUTE3031.toNode = "StandTimer"

Scene22.children.append(ROUTE3031)
ROUTE3032 = x3d.ROUTE()
ROUTE3032.fromField = "touchTime"
ROUTE3032.fromNode = "Pitch_Touch"
ROUTE3032.toField = "set_stopTime"
ROUTE3032.toNode = "StandTimer"

Scene22.children.append(ROUTE3032)
ROUTE3033 = x3d.ROUTE()
ROUTE3033.fromField = "touchTime"
ROUTE3033.fromNode = "Pitch_Touch"
ROUTE3033.toField = "set_stopTime"
ROUTE3033.toNode = "YawTimer"

Scene22.children.append(ROUTE3033)
ROUTE3034 = x3d.ROUTE()
ROUTE3034.fromField = "touchTime"
ROUTE3034.fromNode = "Pitch_Touch"
ROUTE3034.toField = "set_stopTime"
ROUTE3034.toNode = "RollTimer"

Scene22.children.append(ROUTE3034)
ROUTE3035 = x3d.ROUTE()
ROUTE3035.fromField = "touchTime"
ROUTE3035.fromNode = "Pitch_Touch"
ROUTE3035.toField = "set_stopTime"
ROUTE3035.toNode = "WalkTimer"

Scene22.children.append(ROUTE3035)
ROUTE3036 = x3d.ROUTE()
ROUTE3036.fromField = "touchTime"
ROUTE3036.fromNode = "Pitch_Touch"
ROUTE3036.toField = "set_stopTime"
ROUTE3036.toNode = "RunTimer"

Scene22.children.append(ROUTE3036)
ROUTE3037 = x3d.ROUTE()
ROUTE3037.fromField = "touchTime"
ROUTE3037.fromNode = "Pitch_Touch"
ROUTE3037.toField = "set_stopTime"
ROUTE3037.toNode = "JumpTimer"

Scene22.children.append(ROUTE3037)
ROUTE3038 = x3d.ROUTE()
ROUTE3038.fromField = "touchTime"
ROUTE3038.fromNode = "Pitch_Touch"
ROUTE3038.toField = "set_stopTime"
ROUTE3038.toNode = "KickTimer"

Scene22.children.append(ROUTE3038)
ROUTE3039 = x3d.ROUTE()
ROUTE3039.fromField = "touchTime"
ROUTE3039.fromNode = "Pitch_Touch"
ROUTE3039.toField = "set_stopTime"
ROUTE3039.toNode = "StopTimer"

Scene22.children.append(ROUTE3039)
ROUTE3040 = x3d.ROUTE()
ROUTE3040.fromField = "touchTime"
ROUTE3040.fromNode = "Pitch_Touch"
ROUTE3040.toField = "set_startTime"
ROUTE3040.toNode = "PitchTimer"

Scene22.children.append(ROUTE3040)
ROUTE3041 = x3d.ROUTE()
ROUTE3041.fromField = "touchTime"
ROUTE3041.fromNode = "Yaw_Touch"
ROUTE3041.toField = "set_stopTime"
ROUTE3041.toNode = "StandTimer"

Scene22.children.append(ROUTE3041)
ROUTE3042 = x3d.ROUTE()
ROUTE3042.fromField = "touchTime"
ROUTE3042.fromNode = "Yaw_Touch"
ROUTE3042.toField = "set_stopTime"
ROUTE3042.toNode = "PitchTimer"

Scene22.children.append(ROUTE3042)
ROUTE3043 = x3d.ROUTE()
ROUTE3043.fromField = "touchTime"
ROUTE3043.fromNode = "Yaw_Touch"
ROUTE3043.toField = "set_stopTime"
ROUTE3043.toNode = "RollTimer"

Scene22.children.append(ROUTE3043)
ROUTE3044 = x3d.ROUTE()
ROUTE3044.fromField = "touchTime"
ROUTE3044.fromNode = "Yaw_Touch"
ROUTE3044.toField = "set_stopTime"
ROUTE3044.toNode = "WalkTimer"

Scene22.children.append(ROUTE3044)
ROUTE3045 = x3d.ROUTE()
ROUTE3045.fromField = "touchTime"
ROUTE3045.fromNode = "Yaw_Touch"
ROUTE3045.toField = "set_stopTime"
ROUTE3045.toNode = "RunTimer"

Scene22.children.append(ROUTE3045)
ROUTE3046 = x3d.ROUTE()
ROUTE3046.fromField = "touchTime"
ROUTE3046.fromNode = "Yaw_Touch"
ROUTE3046.toField = "set_stopTime"
ROUTE3046.toNode = "JumpTimer"

Scene22.children.append(ROUTE3046)
ROUTE3047 = x3d.ROUTE()
ROUTE3047.fromField = "touchTime"
ROUTE3047.fromNode = "Yaw_Touch"
ROUTE3047.toField = "set_stopTime"
ROUTE3047.toNode = "KickTimer"

Scene22.children.append(ROUTE3047)
ROUTE3048 = x3d.ROUTE()
ROUTE3048.fromField = "touchTime"
ROUTE3048.fromNode = "Yaw_Touch"
ROUTE3048.toField = "set_stopTime"
ROUTE3048.toNode = "StopTimer"

Scene22.children.append(ROUTE3048)
ROUTE3049 = x3d.ROUTE()
ROUTE3049.fromField = "touchTime"
ROUTE3049.fromNode = "Yaw_Touch"
ROUTE3049.toField = "set_startTime"
ROUTE3049.toNode = "YawTimer"

Scene22.children.append(ROUTE3049)
ROUTE3050 = x3d.ROUTE()
ROUTE3050.fromField = "touchTime"
ROUTE3050.fromNode = "Walk_Touch"
ROUTE3050.toField = "set_stopTime"
ROUTE3050.toNode = "StandTimer"

Scene22.children.append(ROUTE3050)
ROUTE3051 = x3d.ROUTE()
ROUTE3051.fromField = "touchTime"
ROUTE3051.fromNode = "Walk_Touch"
ROUTE3051.toField = "set_stopTime"
ROUTE3051.toNode = "PitchTimer"

Scene22.children.append(ROUTE3051)
ROUTE3052 = x3d.ROUTE()
ROUTE3052.fromField = "touchTime"
ROUTE3052.fromNode = "Walk_Touch"
ROUTE3052.toField = "set_stopTime"
ROUTE3052.toNode = "YawTimer"

Scene22.children.append(ROUTE3052)
ROUTE3053 = x3d.ROUTE()
ROUTE3053.fromField = "touchTime"
ROUTE3053.fromNode = "Walk_Touch"
ROUTE3053.toField = "set_stopTime"
ROUTE3053.toNode = "RollTimer"

Scene22.children.append(ROUTE3053)
ROUTE3054 = x3d.ROUTE()
ROUTE3054.fromField = "touchTime"
ROUTE3054.fromNode = "Walk_Touch"
ROUTE3054.toField = "set_stopTime"
ROUTE3054.toNode = "RunTimer"

Scene22.children.append(ROUTE3054)
ROUTE3055 = x3d.ROUTE()
ROUTE3055.fromField = "touchTime"
ROUTE3055.fromNode = "Walk_Touch"
ROUTE3055.toField = "set_stopTime"
ROUTE3055.toNode = "JumpTimer"

Scene22.children.append(ROUTE3055)
ROUTE3056 = x3d.ROUTE()
ROUTE3056.fromField = "touchTime"
ROUTE3056.fromNode = "Walk_Touch"
ROUTE3056.toField = "set_stopTime"
ROUTE3056.toNode = "KickTimer"

Scene22.children.append(ROUTE3056)
ROUTE3057 = x3d.ROUTE()
ROUTE3057.fromField = "touchTime"
ROUTE3057.fromNode = "Walk_Touch"
ROUTE3057.toField = "set_stopTime"
ROUTE3057.toNode = "StopTimer"

Scene22.children.append(ROUTE3057)
ROUTE3058 = x3d.ROUTE()
ROUTE3058.fromField = "touchTime"
ROUTE3058.fromNode = "Walk_Touch"
ROUTE3058.toField = "set_startTime"
ROUTE3058.toNode = "WalkTimer"

Scene22.children.append(ROUTE3058)
ROUTE3059 = x3d.ROUTE()
ROUTE3059.fromField = "touchTime"
ROUTE3059.fromNode = "Roll_Touch"
ROUTE3059.toField = "set_stopTime"
ROUTE3059.toNode = "StandTimer"

Scene22.children.append(ROUTE3059)
ROUTE3060 = x3d.ROUTE()
ROUTE3060.fromField = "touchTime"
ROUTE3060.fromNode = "Roll_Touch"
ROUTE3060.toField = "set_stopTime"
ROUTE3060.toNode = "PitchTimer"

Scene22.children.append(ROUTE3060)
ROUTE3061 = x3d.ROUTE()
ROUTE3061.fromField = "touchTime"
ROUTE3061.fromNode = "Roll_Touch"
ROUTE3061.toField = "set_stopTime"
ROUTE3061.toNode = "YawTimer"

Scene22.children.append(ROUTE3061)
ROUTE3062 = x3d.ROUTE()
ROUTE3062.fromField = "touchTime"
ROUTE3062.fromNode = "Roll_Touch"
ROUTE3062.toField = "set_stopTime"
ROUTE3062.toNode = "WalkTimer"

Scene22.children.append(ROUTE3062)
ROUTE3063 = x3d.ROUTE()
ROUTE3063.fromField = "touchTime"
ROUTE3063.fromNode = "Roll_Touch"
ROUTE3063.toField = "set_stopTime"
ROUTE3063.toNode = "RunTimer"

Scene22.children.append(ROUTE3063)
ROUTE3064 = x3d.ROUTE()
ROUTE3064.fromField = "touchTime"
ROUTE3064.fromNode = "Roll_Touch"
ROUTE3064.toField = "set_stopTime"
ROUTE3064.toNode = "JumpTimer"

Scene22.children.append(ROUTE3064)
ROUTE3065 = x3d.ROUTE()
ROUTE3065.fromField = "touchTime"
ROUTE3065.fromNode = "Roll_Touch"
ROUTE3065.toField = "set_stopTime"
ROUTE3065.toNode = "KickTimer"

Scene22.children.append(ROUTE3065)
ROUTE3066 = x3d.ROUTE()
ROUTE3066.fromField = "touchTime"
ROUTE3066.fromNode = "Roll_Touch"
ROUTE3066.toField = "set_stopTime"
ROUTE3066.toNode = "StopTimer"

Scene22.children.append(ROUTE3066)
ROUTE3067 = x3d.ROUTE()
ROUTE3067.fromField = "touchTime"
ROUTE3067.fromNode = "Roll_Touch"
ROUTE3067.toField = "set_startTime"
ROUTE3067.toNode = "RollTimer"

Scene22.children.append(ROUTE3067)
ROUTE3068 = x3d.ROUTE()
ROUTE3068.fromField = "touchTime"
ROUTE3068.fromNode = "Run_Touch"
ROUTE3068.toField = "set_stopTime"
ROUTE3068.toNode = "StandTimer"

Scene22.children.append(ROUTE3068)
ROUTE3069 = x3d.ROUTE()
ROUTE3069.fromField = "touchTime"
ROUTE3069.fromNode = "Run_Touch"
ROUTE3069.toField = "set_stopTime"
ROUTE3069.toNode = "PitchTimer"

Scene22.children.append(ROUTE3069)
ROUTE3070 = x3d.ROUTE()
ROUTE3070.fromField = "touchTime"
ROUTE3070.fromNode = "Run_Touch"
ROUTE3070.toField = "set_stopTime"
ROUTE3070.toNode = "YawTimer"

Scene22.children.append(ROUTE3070)
ROUTE3071 = x3d.ROUTE()
ROUTE3071.fromField = "touchTime"
ROUTE3071.fromNode = "Run_Touch"
ROUTE3071.toField = "set_stopTime"
ROUTE3071.toNode = "RollTimer"

Scene22.children.append(ROUTE3071)
ROUTE3072 = x3d.ROUTE()
ROUTE3072.fromField = "touchTime"
ROUTE3072.fromNode = "Run_Touch"
ROUTE3072.toField = "set_stopTime"
ROUTE3072.toNode = "WalkTimer"

Scene22.children.append(ROUTE3072)
ROUTE3073 = x3d.ROUTE()
ROUTE3073.fromField = "touchTime"
ROUTE3073.fromNode = "Run_Touch"
ROUTE3073.toField = "set_stopTime"
ROUTE3073.toNode = "JumpTimer"

Scene22.children.append(ROUTE3073)
ROUTE3074 = x3d.ROUTE()
ROUTE3074.fromField = "touchTime"
ROUTE3074.fromNode = "Run_Touch"
ROUTE3074.toField = "set_stopTime"
ROUTE3074.toNode = "KickTimer"

Scene22.children.append(ROUTE3074)
ROUTE3075 = x3d.ROUTE()
ROUTE3075.fromField = "touchTime"
ROUTE3075.fromNode = "Run_Touch"
ROUTE3075.toField = "set_stopTime"
ROUTE3075.toNode = "StopTimer"

Scene22.children.append(ROUTE3075)
ROUTE3076 = x3d.ROUTE()
ROUTE3076.fromField = "touchTime"
ROUTE3076.fromNode = "Run_Touch"
ROUTE3076.toField = "set_startTime"
ROUTE3076.toNode = "RunTimer"

Scene22.children.append(ROUTE3076)
ROUTE3077 = x3d.ROUTE()
ROUTE3077.fromField = "touchTime"
ROUTE3077.fromNode = "Jump_Touch"
ROUTE3077.toField = "set_stopTime"
ROUTE3077.toNode = "StandTimer"

Scene22.children.append(ROUTE3077)
ROUTE3078 = x3d.ROUTE()
ROUTE3078.fromField = "touchTime"
ROUTE3078.fromNode = "Jump_Touch"
ROUTE3078.toField = "set_stopTime"
ROUTE3078.toNode = "PitchTimer"

Scene22.children.append(ROUTE3078)
ROUTE3079 = x3d.ROUTE()
ROUTE3079.fromField = "touchTime"
ROUTE3079.fromNode = "Jump_Touch"
ROUTE3079.toField = "set_stopTime"
ROUTE3079.toNode = "YawTimer"

Scene22.children.append(ROUTE3079)
ROUTE3080 = x3d.ROUTE()
ROUTE3080.fromField = "touchTime"
ROUTE3080.fromNode = "Jump_Touch"
ROUTE3080.toField = "set_stopTime"
ROUTE3080.toNode = "RollTimer"

Scene22.children.append(ROUTE3080)
ROUTE3081 = x3d.ROUTE()
ROUTE3081.fromField = "touchTime"
ROUTE3081.fromNode = "Jump_Touch"
ROUTE3081.toField = "set_stopTime"
ROUTE3081.toNode = "WalkTimer"

Scene22.children.append(ROUTE3081)
ROUTE3082 = x3d.ROUTE()
ROUTE3082.fromField = "touchTime"
ROUTE3082.fromNode = "Jump_Touch"
ROUTE3082.toField = "set_stopTime"
ROUTE3082.toNode = "RunTimer"

Scene22.children.append(ROUTE3082)
ROUTE3083 = x3d.ROUTE()
ROUTE3083.fromField = "touchTime"
ROUTE3083.fromNode = "Jump_Touch"
ROUTE3083.toField = "set_stopTime"
ROUTE3083.toNode = "KickTimer"

Scene22.children.append(ROUTE3083)
ROUTE3084 = x3d.ROUTE()
ROUTE3084.fromField = "touchTime"
ROUTE3084.fromNode = "Jump_Touch"
ROUTE3084.toField = "set_stopTime"
ROUTE3084.toNode = "StopTimer"

Scene22.children.append(ROUTE3084)
ROUTE3085 = x3d.ROUTE()
ROUTE3085.fromField = "touchTime"
ROUTE3085.fromNode = "Jump_Touch"
ROUTE3085.toField = "set_startTime"
ROUTE3085.toNode = "JumpTimer"

Scene22.children.append(ROUTE3085)
ROUTE3086 = x3d.ROUTE()
ROUTE3086.fromField = "touchTime"
ROUTE3086.fromNode = "Kick_Touch"
ROUTE3086.toField = "set_stopTime"
ROUTE3086.toNode = "StandTimer"

Scene22.children.append(ROUTE3086)
ROUTE3087 = x3d.ROUTE()
ROUTE3087.fromField = "touchTime"
ROUTE3087.fromNode = "Kick_Touch"
ROUTE3087.toField = "set_stopTime"
ROUTE3087.toNode = "PitchTimer"

Scene22.children.append(ROUTE3087)
ROUTE3088 = x3d.ROUTE()
ROUTE3088.fromField = "touchTime"
ROUTE3088.fromNode = "Kick_Touch"
ROUTE3088.toField = "set_stopTime"
ROUTE3088.toNode = "YawTimer"

Scene22.children.append(ROUTE3088)
ROUTE3089 = x3d.ROUTE()
ROUTE3089.fromField = "touchTime"
ROUTE3089.fromNode = "Kick_Touch"
ROUTE3089.toField = "set_stopTime"
ROUTE3089.toNode = "RollTimer"

Scene22.children.append(ROUTE3089)
ROUTE3090 = x3d.ROUTE()
ROUTE3090.fromField = "touchTime"
ROUTE3090.fromNode = "Kick_Touch"
ROUTE3090.toField = "set_stopTime"
ROUTE3090.toNode = "WalkTimer"

Scene22.children.append(ROUTE3090)
ROUTE3091 = x3d.ROUTE()
ROUTE3091.fromField = "touchTime"
ROUTE3091.fromNode = "Kick_Touch"
ROUTE3091.toField = "set_stopTime"
ROUTE3091.toNode = "RunTimer"

Scene22.children.append(ROUTE3091)
ROUTE3092 = x3d.ROUTE()
ROUTE3092.fromField = "touchTime"
ROUTE3092.fromNode = "Kick_Touch"
ROUTE3092.toField = "set_stopTime"
ROUTE3092.toNode = "JumpTimer"

Scene22.children.append(ROUTE3092)
ROUTE3093 = x3d.ROUTE()
ROUTE3093.fromField = "touchTime"
ROUTE3093.fromNode = "Kick_Touch"
ROUTE3093.toField = "set_stopTime"
ROUTE3093.toNode = "StopTimer"

Scene22.children.append(ROUTE3093)
ROUTE3094 = x3d.ROUTE()
ROUTE3094.fromField = "touchTime"
ROUTE3094.fromNode = "Kick_Touch"
ROUTE3094.toField = "set_startTime"
ROUTE3094.toNode = "KickTimer"

Scene22.children.append(ROUTE3094)
ROUTE3095 = x3d.ROUTE()
ROUTE3095.fromField = "touchTime"
ROUTE3095.fromNode = "Stop_Touch"
ROUTE3095.toField = "set_stopTime"
ROUTE3095.toNode = "StandTimer"

Scene22.children.append(ROUTE3095)
ROUTE3096 = x3d.ROUTE()
ROUTE3096.fromField = "touchTime"
ROUTE3096.fromNode = "Stop_Touch"
ROUTE3096.toField = "set_stopTime"
ROUTE3096.toNode = "PitchTimer"

Scene22.children.append(ROUTE3096)
ROUTE3097 = x3d.ROUTE()
ROUTE3097.fromField = "touchTime"
ROUTE3097.fromNode = "Stop_Touch"
ROUTE3097.toField = "set_stopTime"
ROUTE3097.toNode = "YawTimer"

Scene22.children.append(ROUTE3097)
ROUTE3098 = x3d.ROUTE()
ROUTE3098.fromField = "touchTime"
ROUTE3098.fromNode = "Stop_Touch"
ROUTE3098.toField = "set_stopTime"
ROUTE3098.toNode = "RollTimer"

Scene22.children.append(ROUTE3098)
ROUTE3099 = x3d.ROUTE()
ROUTE3099.fromField = "touchTime"
ROUTE3099.fromNode = "Stop_Touch"
ROUTE3099.toField = "set_stopTime"
ROUTE3099.toNode = "WalkTimer"

Scene22.children.append(ROUTE3099)
ROUTE3100 = x3d.ROUTE()
ROUTE3100.fromField = "touchTime"
ROUTE3100.fromNode = "Stop_Touch"
ROUTE3100.toField = "set_stopTime"
ROUTE3100.toNode = "RunTimer"

Scene22.children.append(ROUTE3100)
ROUTE3101 = x3d.ROUTE()
ROUTE3101.fromField = "touchTime"
ROUTE3101.fromNode = "Stop_Touch"
ROUTE3101.toField = "set_stopTime"
ROUTE3101.toNode = "JumpTimer"

Scene22.children.append(ROUTE3101)
ROUTE3102 = x3d.ROUTE()
ROUTE3102.fromField = "touchTime"
ROUTE3102.fromNode = "Stop_Touch"
ROUTE3102.toField = "set_stopTime"
ROUTE3102.toNode = "KickTimer"

Scene22.children.append(ROUTE3102)
ROUTE3103 = x3d.ROUTE()
ROUTE3103.fromField = "touchTime"
ROUTE3103.fromNode = "Stop_Touch"
ROUTE3103.toField = "set_startTime"
ROUTE3103.toNode = "StopTimer"

Scene22.children.append(ROUTE3103)

X3D0.Scene = Scene22
f = open("../data/JinScaledV2L1LOA4Sites08e.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/JinScaledV2L1LOA4Sites08e.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
