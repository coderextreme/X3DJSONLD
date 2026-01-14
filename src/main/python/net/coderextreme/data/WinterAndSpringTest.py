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
meta3.content = "WinterAndSpringTest.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "description"
meta4.content = "3D Male Scan combined with JoeKick, 3 Korean characters Ru,Mi,Min from HAnim, CCBYSA music plus designs from Rhino. MaleScan modified in Cinema4D for articulation and translations, geometric values from Rhino, txt file for centers. Models vary. HAnim version 2 LOA-3 Humanoids with textured skin, 3 Korean characters, plus scan. Math for lines and intersections."

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "creator"
meta5.content = "Carol McDonald, Katy Schildmeyer, Joe D. Williams and Don Brutzman"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "created"
meta6.content = "1 May 2023"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "modified"
meta7.content = "Mon, 15 Sep 2025 05:21:02 GMT"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "reference"
meta8.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter09Ru.x3d"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "reference"
meta9.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter10Mi.x3d"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "reference"
meta10.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter11Min.x3d"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "identifier"
meta11.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/WinterAndSpringTest.x3d"

head1.children.append(meta11)

X3D0.head = head1
Scene12 = x3d.Scene()
WorldInfo13 = x3d.WorldInfo()
WorldInfo13.title = "X3D HANIM LOA3 (modified) Skeleton, Lots points Skin, texcoords, Displacer, translations"
WorldInfo13.info = ["X3D Humanoid LOA3 skeleton plus others","Lots points"]

Scene12.children.append(WorldInfo13)
NavigationInfo14 = x3d.NavigationInfo()
NavigationInfo14.DEF = "Start_NavigationInfo"

Scene12.children.append(NavigationInfo14)
Viewpoint15 = x3d.Viewpoint()
Viewpoint15.description = "Male"
Viewpoint15.position = [0,1,-2]
Viewpoint15.centerOfRotation = [0,1,0]

Scene12.children.append(Viewpoint15)
Background16 = x3d.Background()
Background16.DEF = "gray_Background"

Scene12.children.append(Background16)
Background17 = x3d.Background()
Background17.DEF = "dark_gray_Background"

Scene12.children.append(Background17)
Background18 = x3d.Background()
Background18.DEF = "black_Background"

Scene12.children.append(Background18)
Background19 = x3d.Background()
Background19.DEF = "blue_Background"

Scene12.children.append(Background19)
SpotLight20 = x3d.SpotLight()
SpotLight20.DEF = "light1"
SpotLight20.color = [0.8,0.8,1]
SpotLight20.ambientIntensity = 0.7
SpotLight20.location = [0,3,3]
SpotLight20.direction = [0,0,0]
SpotLight20.radius = 10
SpotLight20.beamWidth = 1.5
SpotLight20.cutOffAngle = 0.6

Scene12.children.append(SpotLight20)
PointLight21 = x3d.PointLight()
PointLight21.DEF = "light2"
PointLight21.color = [0.8,0.8,1]
PointLight21.ambientIntensity = 0.7
PointLight21.location = [0,10,-7]

Scene12.children.append(PointLight21)
Viewpoint22 = x3d.Viewpoint()
Viewpoint22.DEF = "Scene_InclinedView"
Viewpoint22.description = "Scene_Inclined View"
Viewpoint22.position = [1.62,1.05,3.06]
Viewpoint22.orientation = [-0.113,0.993,0.0347,0.671]
Viewpoint22.centerOfRotation = [0,0.85,0]

Scene12.children.append(Viewpoint22)
Viewpoint23 = x3d.Viewpoint()
Viewpoint23.DEF = "Scene_IFrontView"
Viewpoint23.description = "Scene_Front View"
Viewpoint23.position = [0,0.8,2.58]
Viewpoint23.centerOfRotation = [0,0.8,0]

Scene12.children.append(Viewpoint23)
Viewpoint24 = x3d.Viewpoint()
Viewpoint24.DEF = "Scene_OldMan_ISideView"
Viewpoint24.description = "Scene_Side View"
Viewpoint24.position = [-2.6,1.5,1]
Viewpoint24.orientation = [0,1,0,1.5708]
Viewpoint24.centerOfRotation = [0,0.8,0]

Scene12.children.append(Viewpoint24)
Viewpoint25 = x3d.Viewpoint()
Viewpoint25.DEF = "Scene_ISideView"
Viewpoint25.description = "Scene_Side View"
Viewpoint25.position = [-5,1.5,1]
Viewpoint25.orientation = [0,1,0,1.5708]
Viewpoint25.centerOfRotation = [0,0.8,0]

Scene12.children.append(Viewpoint25)
Viewpoint26 = x3d.Viewpoint()
Viewpoint26.DEF = "Scene_Full_ISideView"
Viewpoint26.description = "Scene_Side View"
Viewpoint26.position = [-10,1.5,1]
Viewpoint26.orientation = [0,1,0,1.5708]
Viewpoint26.centerOfRotation = [0,0.8,0]

Scene12.children.append(Viewpoint26)
Viewpoint27 = x3d.Viewpoint()
Viewpoint27.DEF = "Scene_OneBush_ISideView"
Viewpoint27.description = "Scene_Side View"
Viewpoint27.position = [-20,1.5,1]
Viewpoint27.orientation = [0,1,0,1.5708]
Viewpoint27.centerOfRotation = [0,0.8,0]

Scene12.children.append(Viewpoint27)
Viewpoint28 = x3d.Viewpoint()
Viewpoint28.DEF = "Scene_TwoBush_ISideView"
Viewpoint28.description = "Scene_Side View"
Viewpoint28.position = [-10,1.5,1]
Viewpoint28.orientation = [0,1,0,1.5708]
Viewpoint28.centerOfRotation = [0,0.8,0]

Scene12.children.append(Viewpoint28)
Viewpoint29 = x3d.Viewpoint()
Viewpoint29.DEF = "Scene_BackView"
Viewpoint29.description = "Scene_Back View"
Viewpoint29.position = [0,1.5,-5]
Viewpoint29.orientation = [0,1,0,3.14]
Viewpoint29.centerOfRotation = [0,1.5,0]

Scene12.children.append(Viewpoint29)
Viewpoint30 = x3d.Viewpoint()
Viewpoint30.DEF = "Scene_OldMan_BackView"
Viewpoint30.description = "Scene_Back View"
Viewpoint30.position = [0,1.5,-2.5]
Viewpoint30.orientation = [0,1,0,3.14]
Viewpoint30.centerOfRotation = [0,1.5,0]

Scene12.children.append(Viewpoint30)
Viewpoint31 = x3d.Viewpoint()
Viewpoint31.DEF = "Scene_Full_BackView"
Viewpoint31.description = "Scene_Back View"
Viewpoint31.position = [0,1.5,-20]
Viewpoint31.orientation = [0,1,15,3.14]
Viewpoint31.centerOfRotation = [0,1.5,0]

Scene12.children.append(Viewpoint31)
Viewpoint32 = x3d.Viewpoint()
Viewpoint32.DEF = "Scene_TopView"
Viewpoint32.description = "Scene_Top View"
Viewpoint32.position = [0,3.5,0]
Viewpoint32.orientation = [1,0,0,-1.5708]
Viewpoint32.centerOfRotation = [0,1.5,0]

Scene12.children.append(Viewpoint32)
Group33 = x3d.Group()
Group33.DEF = "OldMan_Humanoid"
HAnimHumanoid34 = x3d.HAnimHumanoid()
HAnimHumanoid34.DEF = "OldMan"
HAnimHumanoid34.name = "Walk"
HAnimHumanoid34.loa = 3
MetadataSet35 = x3d.MetadataSet()
MetadataSet35.name = "warnings"
MetadataSet35.reference = "HAnim"
MetadataString36 = x3d.MetadataString()
MetadataString36.name = "SymmetricalLeftRight"
MetadataString36.reference = "correction options: ignore, warn, average, left, right, largest, smallest"
MetadataString36.value = ["ignore"]

if MetadataSet35.value is None:
    MetadataSet35.value = []
MetadataSet35.value.append(MetadataString36)

HAnimHumanoid34.metadata = MetadataSet35
HAnimJoint37 = x3d.HAnimJoint()
HAnimJoint37.DEF = "OldMan_humanoid_root"
HAnimJoint37.name = "humanoid_root"
HAnimSegment38 = x3d.HAnimSegment()
HAnimSegment38.DEF = "OldMan_sacrum"
HAnimSegment38.name = "sacrum"
HAnimSite39 = x3d.HAnimSite()
HAnimSite39.DEF = "OldMan_RootBack_view"
HAnimSite39.name = "RootBack_view"
Transform40 = x3d.Transform()
Transform40.DEF = "hanimcordsys"
Transform40.scale = [0.175,0.175,0.175]
Viewpoint41 = x3d.Viewpoint()
Viewpoint41.DEF = "ViewBodyRootAxes"
Viewpoint41.description = "Joe_HAnim Root HAnimSite Coordinate Axes View"

Transform40.children.append(Viewpoint41)
Shape42 = x3d.Shape()
Shape42.DEF = "AxisLinesShape"
IndexedLineSet43 = x3d.IndexedLineSet()
IndexedLineSet43.colorPerVertex = False
IndexedLineSet43.colorIndex = [0,1,2]
IndexedLineSet43.coordIndex = [0,1,-1,0,2,-1,0,3,-1]
Color44 = x3d.Color()
Color44.color = [(1, 0, 0),(0, 0.6, 0),(0, 0, 1)]

IndexedLineSet43.color = Color44
Coordinate45 = x3d.Coordinate()
Coordinate45.point = [(0, 0, 0),(1, 0, 0),(0, 1, 0),(0, 0, 1)]

IndexedLineSet43.coord = Coordinate45

Shape42.geometry = IndexedLineSet43

Transform40.children.append(Shape42)
Shape46 = x3d.Shape()
Shape46.DEF = "OldMan_Shape"
Appearance47 = x3d.Appearance()
Appearance47.DEF = "OldMan_skin_Appearance"
Material48 = x3d.Material()
Material48.DEF = "OldMan_skin_Material"
Material48.diffuseColor = [0.3,0.3,0.6]
Material48.emissiveColor = [0.3,0.3,0.6]

Appearance47.material = Material48
ImageTexture49 = x3d.ImageTexture()
ImageTexture49.DEF = "OldManSkinImageTexture"
ImageTexture49.url = ["OldManBodyTexture29.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JoeBodyTexture29.png"]

Appearance47.texture = ImageTexture49
TextureTransform50 = x3d.TextureTransform()
TextureTransform50.DEF = "KickTextureTransform"

Appearance47.textureTransform = TextureTransform50

Shape46.appearance = Appearance47
IndexedFaceSet51 = x3d.IndexedFaceSet()
IndexedFaceSet51.DEF = "OldMan_skin_IndexedFaceSet"

Shape46.geometry = IndexedFaceSet51

Transform40.children.append(Shape46)

HAnimSite39.children.append(Transform40)

HAnimSegment38.children.append(HAnimSite39)

HAnimJoint37.children.append(HAnimSegment38)
HAnimJoint52 = x3d.HAnimJoint()
HAnimJoint52.DEF = "OldMan_sacroiliac"
HAnimJoint52.name = "sacroiliac"
HAnimJoint53 = x3d.HAnimJoint()
HAnimJoint53.DEF = "OldMan_l_hip"
HAnimJoint53.name = "l_hip"
HAnimJoint54 = x3d.HAnimJoint()
HAnimJoint54.DEF = "OldMan_l_knee"
HAnimJoint54.name = "l_knee"
HAnimJoint55 = x3d.HAnimJoint()
HAnimJoint55.DEF = "OldMan_l_talocrural"
HAnimJoint55.name = "l_talocrural"
HAnimJoint56 = x3d.HAnimJoint()
HAnimJoint56.DEF = "Joe_l_tarsometatarsal_2"
HAnimJoint56.name = "l_tarsometatarsal_2"
HAnimJoint57 = x3d.HAnimJoint()
HAnimJoint57.DEF = "Joe_l_metatarsophalangeal_2"
HAnimJoint57.name = "l_metatarsophalangeal_2"
HAnimJoint58 = x3d.HAnimJoint()
HAnimJoint58.DEF = "Joe_l_tarsal_distal_interphalangeal_2"
HAnimJoint58.name = "l_tarsal_distal_interphalangeal_2"
HAnimJoint58.center = [0.115,0.02,0.122]

HAnimJoint57.children.append(HAnimJoint58)

HAnimJoint56.children.append(HAnimJoint57)

HAnimJoint55.children.append(HAnimJoint56)

HAnimJoint54.children.append(HAnimJoint55)

HAnimJoint53.children.append(HAnimJoint54)
HAnimJoint59 = x3d.HAnimJoint()
HAnimJoint59.DEF = "OldMan_r_hip"
HAnimJoint59.name = "l_hip"
HAnimJoint60 = x3d.HAnimJoint()
HAnimJoint60.DEF = "OldMan_r_knee"
HAnimJoint60.name = "l_knee"

HAnimJoint59.children.append(HAnimJoint60)
HAnimJoint61 = x3d.HAnimJoint()
HAnimJoint61.DEF = "OldMan_r_talocrural"
HAnimJoint61.name = "l_talocrural"
HAnimJoint62 = x3d.HAnimJoint()
HAnimJoint62.DEF = "Joe_r_tarsometatarsal_2"
HAnimJoint62.name = "r_tarsometatarsal_2"
HAnimJoint62.center = [-0.1,0.015,-0.01]
HAnimJoint62.skinCoordIndex = [374,375,376]
HAnimJoint62.skinCoordWeight = [1,1,1]
HAnimJoint63 = x3d.HAnimJoint()
HAnimJoint63.DEF = "Joe_r_metatarsophalangeal_2"
HAnimJoint63.name = "r_metatarsophalangeal_2"
HAnimJoint63.center = [-0.115,0.037,0.09]
HAnimJoint63.skinCoordIndex = [377,378,379,380]
HAnimJoint63.skinCoordWeight = [1,1,1,1]
HAnimJoint64 = x3d.HAnimJoint()
HAnimJoint64.DEF = "Joe_r_tarsal_distal_interphalangeal_2"
HAnimJoint64.name = "r_tarsal_distal_interphalangeal_2"
HAnimJoint64.center = [-0.1,0.01,0.14]
HAnimJoint64.skinCoordIndex = [381,382,383,384,385,386,387,388,389]
HAnimJoint64.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint63.children.append(HAnimJoint64)

HAnimJoint62.children.append(HAnimJoint63)

HAnimJoint61.children.append(HAnimJoint62)

HAnimJoint59.children.append(HAnimJoint61)

HAnimJoint53.children.append(HAnimJoint59)

HAnimJoint52.children.append(HAnimJoint53)
HAnimJoint65 = x3d.HAnimJoint()
HAnimJoint65.DEF = "OldMan_vl5"
HAnimJoint65.name = "vl5"
HAnimJoint66 = x3d.HAnimJoint()
HAnimJoint66.DEF = "MeshName_vl4"
HAnimJoint66.name = "vl4"
HAnimJoint67 = x3d.HAnimJoint()
HAnimJoint67.DEF = "OldMan_vl3"
HAnimJoint67.name = "vl3"
HAnimJoint68 = x3d.HAnimJoint()
HAnimJoint68.DEF = "MeshName_vl2"
HAnimJoint68.name = "vl2"
HAnimJoint69 = x3d.HAnimJoint()
HAnimJoint69.DEF = "OldMan_vl1"
HAnimJoint69.name = "vl1"
HAnimJoint70 = x3d.HAnimJoint()
HAnimJoint70.DEF = "MeshName_vt12"
HAnimJoint70.name = "vt12"
HAnimJoint71 = x3d.HAnimJoint()
HAnimJoint71.DEF = "OldMan_vt11"
HAnimJoint71.name = "vt11"
HAnimJoint72 = x3d.HAnimJoint()
HAnimJoint72.DEF = "MeshName_vt10"
HAnimJoint72.name = "vt10"
HAnimJoint73 = x3d.HAnimJoint()
HAnimJoint73.DEF = "MeshName_vt9"
HAnimJoint73.name = "vt9"
HAnimJoint74 = x3d.HAnimJoint()
HAnimJoint74.DEF = "MeshName_vt8"
HAnimJoint74.name = "vt8"
HAnimJoint75 = x3d.HAnimJoint()
HAnimJoint75.DEF = "OldMan_vt7"
HAnimJoint75.name = "vt7"
HAnimJoint76 = x3d.HAnimJoint()
HAnimJoint76.DEF = "MeshName_vt6"
HAnimJoint76.name = "vt6"
HAnimJoint77 = x3d.HAnimJoint()
HAnimJoint77.DEF = "MeshName_vt5"
HAnimJoint77.name = "vt5"
HAnimJoint78 = x3d.HAnimJoint()
HAnimJoint78.DEF = "OldMan_vt4"
HAnimJoint78.name = "vt4"
HAnimJoint79 = x3d.HAnimJoint()
HAnimJoint79.DEF = "MeshName_vt3"
HAnimJoint79.name = "vt3"
HAnimJoint80 = x3d.HAnimJoint()
HAnimJoint80.DEF = "OldMan_vt2"
HAnimJoint80.name = "vt2"
HAnimJoint81 = x3d.HAnimJoint()
HAnimJoint81.DEF = "MeshName_vt1"
HAnimJoint81.name = "vt1"
HAnimJoint82 = x3d.HAnimJoint()
HAnimJoint82.DEF = "OldMan_vc7"
HAnimJoint82.name = "vc7"
HAnimJoint83 = x3d.HAnimJoint()
HAnimJoint83.DEF = "MeshName_vc6"
HAnimJoint83.name = "vc6"
HAnimJoint84 = x3d.HAnimJoint()
HAnimJoint84.DEF = "MeshName_vc5"
HAnimJoint84.name = "vc5"
HAnimJoint85 = x3d.HAnimJoint()
HAnimJoint85.DEF = "OldMan_vc4"
HAnimJoint85.name = "vc4"
HAnimJoint86 = x3d.HAnimJoint()
HAnimJoint86.DEF = "MeshName_vc3"
HAnimJoint86.name = "vc3"
HAnimJoint87 = x3d.HAnimJoint()
HAnimJoint87.DEF = "MeshName_vc2"
HAnimJoint87.name = "vc2"
HAnimJoint88 = x3d.HAnimJoint()
HAnimJoint88.DEF = "OldMan_vc1"
HAnimJoint88.name = "vc1"
HAnimJoint89 = x3d.HAnimJoint()
HAnimJoint89.DEF = "OldMan_skullbase"
HAnimJoint89.name = "skullbase"
HAnimDisplacer90 = x3d.HAnimDisplacer()
HAnimDisplacer90.DEF = "Joe_skull_tip_raiser_action"
HAnimDisplacer90.name = "skull_tip_raiser_action"
HAnimDisplacer90.coordIndex = [0,1,2,3,4,5,6,7,8,9]
HAnimDisplacer90.displacements = [(0, 0.15, 0),(0, 0, 0.15),(-0.1, 0, 0.15),(0.1, 0, 0.05),(0, -0.02, 0.05),(-0.15, 0, 0),(-0.05, 0, 0),(0.15, 0, 0),(0.05, 0, 0),(0, 0, -0.15)]

HAnimJoint89.displacers.append(HAnimDisplacer90)
HAnimJoint91 = x3d.HAnimJoint()
HAnimJoint91.DEF = "OldMan_l_eyelid_joint"
HAnimJoint91.name = "l_eyelid_joint"

HAnimJoint89.children.append(HAnimJoint91)
HAnimJoint92 = x3d.HAnimJoint()
HAnimJoint92.DEF = "OldMan_l_eyeball_joint"
HAnimJoint92.name = "l_eyeball_joint"

HAnimJoint89.children.append(HAnimJoint92)
HAnimJoint93 = x3d.HAnimJoint()
HAnimJoint93.DEF = "OldMan_l_eyebrow_joint"
HAnimJoint93.name = "l_eyebrow_joint"

HAnimJoint89.children.append(HAnimJoint93)
HAnimJoint94 = x3d.HAnimJoint()
HAnimJoint94.DEF = "OldMan_r_eyelid_joint"
HAnimJoint94.name = "r_eyelid_joint"

HAnimJoint89.children.append(HAnimJoint94)
HAnimJoint95 = x3d.HAnimJoint()
HAnimJoint95.DEF = "OldMan_r_eyeball_joint"
HAnimJoint95.name = "r_eyeball_joint"

HAnimJoint89.children.append(HAnimJoint95)
HAnimJoint96 = x3d.HAnimJoint()
HAnimJoint96.DEF = "OldMan_r_eyebrow_joint"
HAnimJoint96.name = "r_eyebrow_joint"

HAnimJoint89.children.append(HAnimJoint96)
HAnimJoint97 = x3d.HAnimJoint()
HAnimJoint97.DEF = "OldMan_temporomandibular"
HAnimJoint97.name = "temporomandibular"

HAnimJoint89.children.append(HAnimJoint97)

HAnimJoint88.children.append(HAnimJoint89)

HAnimJoint87.children.append(HAnimJoint88)

HAnimJoint86.children.append(HAnimJoint87)

HAnimJoint85.children.append(HAnimJoint86)

HAnimJoint84.children.append(HAnimJoint85)

HAnimJoint83.children.append(HAnimJoint84)

HAnimJoint82.children.append(HAnimJoint83)

HAnimJoint81.children.append(HAnimJoint82)
HAnimJoint98 = x3d.HAnimJoint()
HAnimJoint98.DEF = "OldMan_l_acromioclavicular"
HAnimJoint98.name = "l_acromioclavicular"
HAnimJoint99 = x3d.HAnimJoint()
HAnimJoint99.DEF = "OldMan_l_sternoclavicular"
HAnimJoint99.name = "l_sternoclavicular"
HAnimJoint100 = x3d.HAnimJoint()
HAnimJoint100.DEF = "OldMan_l_shoulder"
HAnimJoint100.name = "l_shoulder"
HAnimJoint101 = x3d.HAnimJoint()
HAnimJoint101.DEF = "OldMan_l_elbow"
HAnimJoint101.name = "l_elbow"
HAnimJoint102 = x3d.HAnimJoint()
HAnimJoint102.DEF = "OldMan_l_radiocarpal"
HAnimJoint102.name = "l_radiocarpal"
HAnimJoint103 = x3d.HAnimJoint()
HAnimJoint103.DEF = "OldMan_l_carpometacarpal_1"
HAnimJoint103.name = "l_carpometacarpal_1"
HAnimJoint104 = x3d.HAnimJoint()
HAnimJoint104.DEF = "OldMan_l_metacarpophalangeal_1"
HAnimJoint104.name = "l_metacarpophalangeal_1"
HAnimJoint105 = x3d.HAnimJoint()
HAnimJoint105.DEF = "OldMan_l_carpal_interphalangeal_1"
HAnimJoint105.name = "l_carpal_interphalangeal_1"

HAnimJoint104.children.append(HAnimJoint105)

HAnimJoint103.children.append(HAnimJoint104)
HAnimJoint106 = x3d.HAnimJoint()
HAnimJoint106.DEF = "OldMan_l_carpometacarpal_2"
HAnimJoint106.name = "l_carpometacarpal_2"
HAnimJoint107 = x3d.HAnimJoint()
HAnimJoint107.DEF = "OldMan_l_metacarpophalangeal_2"
HAnimJoint107.name = "l_metacarpophalangeal_2"
HAnimJoint108 = x3d.HAnimJoint()
HAnimJoint108.DEF = "OldMan_l_carpal_proximal_interphalangeal_2"
HAnimJoint108.name = "l_carpal_proximal_interphalangeal_2"
HAnimJoint109 = x3d.HAnimJoint()
HAnimJoint109.DEF = "OldMan_l_carpal_distal_interphalangeal_2"
HAnimJoint109.name = "l_carpal_distal_interphalangeal_2"

HAnimJoint108.children.append(HAnimJoint109)

HAnimJoint107.children.append(HAnimJoint108)

HAnimJoint106.children.append(HAnimJoint107)
HAnimJoint110 = x3d.HAnimJoint()
HAnimJoint110.DEF = "OldMan_l_carpometacarpal_3"
HAnimJoint110.name = "l_carpometacarpal_3"
HAnimJoint111 = x3d.HAnimJoint()
HAnimJoint111.DEF = "OldMan_l_metacarpophalangeal_3"
HAnimJoint111.name = "l_metacarpophalangeal_3"
HAnimJoint112 = x3d.HAnimJoint()
HAnimJoint112.DEF = "OldMan_l_carpal_proximal_interphalangeal_3"
HAnimJoint112.name = "l_carpal_proximal_interphalangeal_3"
HAnimJoint113 = x3d.HAnimJoint()
HAnimJoint113.DEF = "OldMan_l_carpal_distal_interphalangeal_3"
HAnimJoint113.name = "l_carpal_distal_interphalangeal_3"

HAnimJoint112.children.append(HAnimJoint113)

HAnimJoint111.children.append(HAnimJoint112)

HAnimJoint110.children.append(HAnimJoint111)
HAnimJoint114 = x3d.HAnimJoint()
HAnimJoint114.DEF = "OldMan_l_carpometacarpal_4"
HAnimJoint114.name = "l_carpometacarpal_4"
HAnimJoint115 = x3d.HAnimJoint()
HAnimJoint115.DEF = "OldMan_l_metacarpophalangeal_4"
HAnimJoint115.name = "l_metacarpophalangeal_4"
HAnimJoint116 = x3d.HAnimJoint()
HAnimJoint116.DEF = "OldMan_l_carpal_proximal_interphalangeal_4"
HAnimJoint116.name = "l_carpal_proximal_interphalangeal_4"
HAnimJoint117 = x3d.HAnimJoint()
HAnimJoint117.DEF = "OldMan_l_carpal_distal_interphalangeal_4"
HAnimJoint117.name = "l_carpal_distal_interphalangeal_4"

HAnimJoint116.children.append(HAnimJoint117)

HAnimJoint115.children.append(HAnimJoint116)

HAnimJoint114.children.append(HAnimJoint115)
HAnimJoint118 = x3d.HAnimJoint()
HAnimJoint118.DEF = "OldMan_l_carpometacarpal_5"
HAnimJoint118.name = "l_carpometacarpal_5"
HAnimJoint119 = x3d.HAnimJoint()
HAnimJoint119.DEF = "OldMan_l_metacarpophalangeal_5"
HAnimJoint119.name = "l_metacarpophalangeal_5"
HAnimJoint120 = x3d.HAnimJoint()
HAnimJoint120.DEF = "OldMan_l_carpal_proximal_interphalangeal_5"
HAnimJoint120.name = "l_carpal_proximal_interphalangeal_5"
HAnimJoint121 = x3d.HAnimJoint()
HAnimJoint121.DEF = "OldMan_l_carpal_distal_interphalangeal_5"
HAnimJoint121.name = "l_carpal_distal_interphalangeal_5"

HAnimJoint120.children.append(HAnimJoint121)

HAnimJoint119.children.append(HAnimJoint120)

HAnimJoint118.children.append(HAnimJoint119)

HAnimJoint114.children.append(HAnimJoint118)

HAnimJoint110.children.append(HAnimJoint114)

HAnimJoint106.children.append(HAnimJoint110)

HAnimJoint103.children.append(HAnimJoint106)

HAnimJoint102.children.append(HAnimJoint103)
HAnimJoint122 = x3d.HAnimJoint()
HAnimJoint122.DEF = "OldMan_r_sternoclavicular"
HAnimJoint122.name = "r_sternoclavicular"
HAnimJoint123 = x3d.HAnimJoint()
HAnimJoint123.DEF = "OldMan_r_acromioclavicular"
HAnimJoint123.name = "r_acromioclavicular"
HAnimJoint124 = x3d.HAnimJoint()
HAnimJoint124.DEF = "OldMan_r_shoulder"
HAnimJoint124.name = "r_shoulder"
HAnimJoint125 = x3d.HAnimJoint()
HAnimJoint125.DEF = "OldMan_r_elbow"
HAnimJoint125.name = "r_elbow"
HAnimJoint126 = x3d.HAnimJoint()
HAnimJoint126.DEF = "OldMan_r_radiocarpal"
HAnimJoint126.name = "r_radiocarpal"
HAnimJoint127 = x3d.HAnimJoint()
HAnimJoint127.DEF = "OldMan_r_carpometacarpal_1"
HAnimJoint127.name = "r_carpometacarpal_1"
HAnimJoint128 = x3d.HAnimJoint()
HAnimJoint128.DEF = "OldMan_r_metacarpophalangeal_1"
HAnimJoint128.name = "r_metacarpophalangeal_1"
HAnimJoint129 = x3d.HAnimJoint()
HAnimJoint129.DEF = "OldMan_r_carpal_interphalangeal_1"
HAnimJoint129.name = "r_carpal_interphalangeal_1"

HAnimJoint128.children.append(HAnimJoint129)

HAnimJoint127.children.append(HAnimJoint128)
HAnimJoint130 = x3d.HAnimJoint()
HAnimJoint130.DEF = "OldMan_r_carpometacarpal_2"
HAnimJoint130.name = "r_carpometacarpal_2"
HAnimJoint131 = x3d.HAnimJoint()
HAnimJoint131.DEF = "OldMan_r_metacarpophalangeal_2"
HAnimJoint131.name = "r_metacarpophalangeal_2"
HAnimJoint132 = x3d.HAnimJoint()
HAnimJoint132.DEF = "OldMan_r_carpal_proximal_interphalangeal_2"
HAnimJoint132.name = "r_carpal_proximal_interphalangeal_2"
HAnimJoint133 = x3d.HAnimJoint()
HAnimJoint133.DEF = "OldMan_r_carpal_distal_interphalangeal_2"
HAnimJoint133.name = "r_carpal_distal_interphalangeal_2"

HAnimJoint132.children.append(HAnimJoint133)

HAnimJoint131.children.append(HAnimJoint132)

HAnimJoint130.children.append(HAnimJoint131)
HAnimJoint134 = x3d.HAnimJoint()
HAnimJoint134.DEF = "OldMan_r_carpometacarpal_3"
HAnimJoint134.name = "r_carpometacarpal_3"
HAnimJoint135 = x3d.HAnimJoint()
HAnimJoint135.DEF = "OldMan_r_metacarpophalangeal_3"
HAnimJoint135.name = "r_metacarpophalangeal_3"
HAnimJoint136 = x3d.HAnimJoint()
HAnimJoint136.DEF = "OldMan_r_carpal_proximal_interphalangeal_3"
HAnimJoint136.name = "r_carpal_proximal_interphalangeal_3"
HAnimJoint137 = x3d.HAnimJoint()
HAnimJoint137.DEF = "OldMan_r_carpal_distal_interphalangeal_3"
HAnimJoint137.name = "r_carpal_distal_interphalangeal_3"

HAnimJoint136.children.append(HAnimJoint137)

HAnimJoint135.children.append(HAnimJoint136)

HAnimJoint134.children.append(HAnimJoint135)
HAnimJoint138 = x3d.HAnimJoint()
HAnimJoint138.DEF = "OldMan_r_carpometacarpal_4"
HAnimJoint138.name = "r_carpometacarpal_4"
HAnimJoint139 = x3d.HAnimJoint()
HAnimJoint139.DEF = "OldMan_r_metacarpophalangeal_4"
HAnimJoint139.name = "r_metacarpophalangeal_4"
HAnimJoint140 = x3d.HAnimJoint()
HAnimJoint140.DEF = "OldMan_r_carpal_proximal_interphalangeal_4"
HAnimJoint140.name = "r_carpal_proximal_interphalangeal_4"
HAnimJoint141 = x3d.HAnimJoint()
HAnimJoint141.DEF = "OldMan_r_carpal_distal_interphalangeal_4"
HAnimJoint141.name = "r_carpal_distal_interphalangeal_4"

HAnimJoint140.children.append(HAnimJoint141)

HAnimJoint139.children.append(HAnimJoint140)

HAnimJoint138.children.append(HAnimJoint139)
HAnimJoint142 = x3d.HAnimJoint()
HAnimJoint142.DEF = "OldMan_r_carpometacarpal_5"
HAnimJoint142.name = "r_carpometacarpal_5"
HAnimJoint143 = x3d.HAnimJoint()
HAnimJoint143.DEF = "OldMan_r_metacarpophalangeal_5"
HAnimJoint143.name = "r_metacarpophalangeal_5"
HAnimJoint144 = x3d.HAnimJoint()
HAnimJoint144.DEF = "OldMan_r_carpal_proximal_interphalangeal_5"
HAnimJoint144.name = "r_carpal_proximal_interphalangeal_5"
HAnimJoint145 = x3d.HAnimJoint()
HAnimJoint145.DEF = "OldMan_r_carpal_distal_interphalangeal_5"
HAnimJoint145.name = "r_carpal_distal_interphalangeal_5"

HAnimJoint144.children.append(HAnimJoint145)

HAnimJoint143.children.append(HAnimJoint144)

HAnimJoint142.children.append(HAnimJoint143)

HAnimJoint138.children.append(HAnimJoint142)

HAnimJoint134.children.append(HAnimJoint138)

HAnimJoint130.children.append(HAnimJoint134)

HAnimJoint127.children.append(HAnimJoint130)

HAnimJoint126.children.append(HAnimJoint127)

HAnimJoint125.children.append(HAnimJoint126)

HAnimJoint124.children.append(HAnimJoint125)

HAnimJoint123.children.append(HAnimJoint124)

HAnimJoint122.children.append(HAnimJoint123)

HAnimJoint102.children.append(HAnimJoint122)

HAnimJoint101.children.append(HAnimJoint102)

HAnimJoint100.children.append(HAnimJoint101)

HAnimJoint99.children.append(HAnimJoint100)

HAnimJoint98.children.append(HAnimJoint99)

HAnimJoint81.children.append(HAnimJoint98)

HAnimJoint80.children.append(HAnimJoint81)

HAnimJoint79.children.append(HAnimJoint80)

HAnimJoint78.children.append(HAnimJoint79)

HAnimJoint77.children.append(HAnimJoint78)

HAnimJoint76.children.append(HAnimJoint77)

HAnimJoint75.children.append(HAnimJoint76)

HAnimJoint74.children.append(HAnimJoint75)

HAnimJoint73.children.append(HAnimJoint74)

HAnimJoint72.children.append(HAnimJoint73)

HAnimJoint71.children.append(HAnimJoint72)

HAnimJoint70.children.append(HAnimJoint71)

HAnimJoint69.children.append(HAnimJoint70)

HAnimJoint68.children.append(HAnimJoint69)

HAnimJoint67.children.append(HAnimJoint68)

HAnimJoint66.children.append(HAnimJoint67)

HAnimJoint65.children.append(HAnimJoint66)

HAnimJoint52.children.append(HAnimJoint65)

HAnimJoint37.children.append(HAnimJoint52)

HAnimHumanoid34.skeleton.append(HAnimJoint37)

Group33.children.append(HAnimHumanoid34)

Scene12.children.append(Group33)

X3D0.Scene = Scene12
f = open("../data/WinterAndSpringTest.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/WinterAndSpringTest.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/WinterAndSpringTest.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
