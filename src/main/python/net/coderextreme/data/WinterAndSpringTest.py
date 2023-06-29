# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
print(
X3D(profile="Immersive", version="4.0", 
head=head(children=[component(name="HAnim", level=1),
meta(name="title", content="WinterAndSpringTest.x3d"),
meta(name="description", content="3D Male Scan combined with JoeKick, 3 Korean characters Ru,Mi,Min from HAnim, CCBYSA music plus designs from Rhino. MaleScan modified in Cinema4D for articulation and translations, geometric values from Rhino, txt file for centers. Models vary. HAnim version 2 LOA-3 Humanoids with textured skin, 3 Korean characters, plus scan. Math for lines and intersections."),
meta(name="creator", content="Carol McDonald, Katy Schildmeyer, Joe D. Williams and Don Brutzman"),
meta(name="created", content="May through September 2023"),
meta(name="modified", content="2 June 2023"),
meta(name="reference", content="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter09Ru.x3d"),
meta(name="reference", content="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter10Mi.x3d"),
meta(name="reference", content="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter11Min.x3d"),
meta(name="identifier", content="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/WinterAndSpringTest.x3d"),
meta(name="license", content="../license.html"),
meta(name="translated", content="29 June 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=Scene(children=[
WorldInfo(info=["X3D Humanoid LOA3 skeleton plus others","Lots points"], title="X3D HANIM LOA3 (modified) Skeleton, Lots points Skin, texcoords, Displacer, translations"),
NavigationInfo(DEF="Start_NavigationInfo", headlight=False),
Viewpoint(centerOfRotation=((0,1,0)), description="Male", position=((0,1,-2))),
Background(DEF="gray_Background"),
Background(DEF="dark_gray_Background"),
Background(DEF="black_Background"),
Background(DEF="blue_Background"),
SpotLight(DEF="light1", ambientIntensity=0.7, beamWidth=1.5, color=[(0.8,0.8,1)], cutOffAngle=0.6, direction=((0,0,0)), location=((0,3,3)), radius=10),
PointLight(DEF="light2", ambientIntensity=0.7, color=[(0.8,0.8,1)], location=((0,10,-7))),
Comment(value=''' External from the Humanoid viewpoints '''),

Viewpoint(DEF="Scene_InclinedView", centerOfRotation=((0,0.85,0)), description="Scene_Inclined View", orientation=((-0.113,0.993,0.0347,0.671)), position=((1.62,1.05,3.06))),
Viewpoint(DEF="Scene_IFrontView", centerOfRotation=((0,0.8,0)), description="Scene_Front View", position=((0,0.8,2.58))),
Viewpoint(DEF="Scene_OldMan_ISideView", centerOfRotation=((0,0.8,0)), description="Scene_Side View", orientation=((0,1,0,1.5708)), position=((-2.6,1.5,1))),
Viewpoint(DEF="Scene_ISideView", centerOfRotation=((0,0.8,0)), description="Scene_Side View", orientation=((0,1,0,1.5708)), position=((-5.0,1.5,1))),
Viewpoint(DEF="Scene_Full_ISideView", centerOfRotation=((0,0.8,0)), description="Scene_Side View", orientation=((0,1,0,1.5708)), position=((-10,1.5,1))),
Viewpoint(DEF="Scene_OneBush_ISideView", centerOfRotation=((0,0.8,0)), description="Scene_Side View", orientation=((0,1,0,1.5708)), position=((-20,1.5,1))),
Viewpoint(DEF="Scene_TwoBush_ISideView", centerOfRotation=((0,0.8,0)), description="Scene_Side View", orientation=((0,1,0,1.5708)), position=((-10,1.5,1))),
Viewpoint(DEF="Scene_BackView", centerOfRotation=((0,1.5,0)), description="Scene_Back View", orientation=((0,1,0,3.14)), position=((0,1.5,-5))),
Viewpoint(DEF="Scene_OldMan_BackView", centerOfRotation=((0,1.5,0)), description="Scene_Back View", orientation=((0,1,0,3.14)), position=((0,1.5,-2.5))),
Viewpoint(DEF="Scene_Full_BackView", centerOfRotation=((0,1.5,0)), description="Scene_Back View", orientation=((0,1,15,3.14)), position=((0,1.5,-20))),
Viewpoint(DEF="Scene_TopView", centerOfRotation=((0,1.5,0)), description="Scene_Top View", orientation=((1,0,0,-1.5708)), position=((0,3.5,0))),
Group(DEF="OldMan_Humanoid", children=[
HAnimHumanoid(name="Walk", DEF="OldMan", loa=3, version="2.0", 
metadata=(
MetadataSet(name="warnings", reference="HAnim", value=[
MetadataString(name="SymmetricalLeftRight", reference="correction options: ignore, warn, average, left, right, largest, smallest", value=["ignore"])])), skeleton=[
HAnimJoint(name="humanoid_root", DEF="OldMan_humanoid_root", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Comment(value=''' TODO center='x 0.9155 z' '''),

HAnimSegment(name="sacrum", DEF="OldMan_sacrum", children=[
HAnimSite(name="RootBack_view", DEF="OldMan_RootBack_view", children=[
Transform(DEF="hanimcordsys", scale=((0.175,0.175,0.175)), children=[
Viewpoint(DEF="ViewBodyRootAxes", description="Joe_HAnim Root HAnimSite Coordinate Axes View"),
Shape(DEF="AxisLinesShape", 
geometry=
IndexedLineSet(colorIndex=[0,1,2], colorPerVertex=False, coordIndex=[0,1,-1,0,2,-1,0,3,-1], 
coord=
Coordinate(point=[(0,0,0),(1.0,0,0),(0,1.0,0),(0,0,1.0)]), 
color=(
Color(color=[(1,0,0),(0,0.6,0),(0,0,1)]))))], skin=[
Shape(DEF="OldMan_Shape", 
appearance=
Appearance(DEF="OldMan_skin_Appearance", 
material=
Material(DEF="OldMan_skin_Material", diffuseColor=((0.3,0.3,0.6)), emissiveColor=((0.3,0.3,0.6))), 
texture=
ImageTexture(DEF="OldManSkinImageTexture", url=["OldManBodyTexture29.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JoeBodyTexture29.png"]), 
textureTransform=
TextureTransform(DEF="KickTextureTransform")), 
geometry=
IndexedFaceSet(DEF="OldMan_skin_IndexedFaceSet"))])])]),
HAnimJoint(name="sacroiliac", DEF="OldMan_sacroiliac", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Comment(value=''' TODO center='x 0.952 z' '''),

Comment(value=''' High hip '''),

HAnimJoint(name="l_hip", DEF="OldMan_l_hip", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Comment(value=''' TODO center='x 0.879 z' Low hip '''),

HAnimJoint(name="l_knee", DEF="OldMan_l_knee", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Comment(value=''' center='x 0.461 z' '''),

HAnimJoint(name="l_talocrural", DEF="OldMan_l_talocrural", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Comment(value=''' Ankle '''),

HAnimJoint(name="l_tarsometatarsal_2", DEF="Joe_l_tarsometatarsal_2", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="l_metatarsophalangeal_2", DEF="Joe_l_metatarsophalangeal_2", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="l_tarsal_distal_interphalangeal_2", DEF="Joe_l_tarsal_distal_interphalangeal_2", center=((0.115,0.02,0.122)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)])])]),]),]),
HAnimJoint(name="l_hip", DEF="OldMan_r_hip", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Comment(value=''' Low hip '''),

HAnimJoint(name="l_knee", DEF="OldMan_r_knee", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)]),
HAnimJoint(name="l_talocrural", DEF="OldMan_r_talocrural", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Comment(value=''' Ankle '''),

HAnimJoint(name="r_tarsometatarsal_2", DEF="Joe_r_tarsometatarsal_2", center=((-0.1,0.015,-0.01)), skinCoordIndex=[374,375,376], skinCoordWeight=[float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="r_metatarsophalangeal_2", DEF="Joe_r_metatarsophalangeal_2", center=((-0.115,0.037,0.09)), skinCoordIndex=[377,378,379,380], skinCoordWeight=[float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="r_tarsal_distal_interphalangeal_2", DEF="Joe_r_tarsal_distal_interphalangeal_2", center=((-0.1,0.01,0.14)), skinCoordIndex=[381,382,383,384,385,386,387,388,389], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)])])]),]),]),]),
HAnimJoint(name="vl5", DEF="OldMan_vl5", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Comment(value=''' Abdomen '''),

HAnimJoint(name="vl4", DEF="MeshName_vl4", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="vl3", DEF="OldMan_vl3", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Comment(value=''' center='x 1.098 z' '''),

Comment(value=''' Low=' ist=' '''),

HAnimJoint(name="vl2", DEF="MeshName_vl2", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="vl1", DEF="OldMan_vl1", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Comment(value=''' center='x 1.171 z' '''),

Comment(value=''' High waist '''),

HAnimJoint(name="vt12", DEF="MeshName_vt12", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="vt11", DEF="OldMan_vt11", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Comment(value=''' Ribcage=' '''),

HAnimJoint(name="vt10", DEF="MeshName_vt10", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="vt9", DEF="MeshName_vt9", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="vt8", DEF="MeshName_vt8", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="vt7", DEF="OldMan_vt7", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Comment(value=''' Sternum=' '''),

HAnimJoint(name="vt6", DEF="MeshName_vt6", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="vt5", DEF="MeshName_vt5", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="vt4", DEF="OldMan_vt4", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Comment(value=''' Chest '''),

HAnimJoint(name="vt3", DEF="MeshName_vt3", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="vt2", DEF="OldMan_vt2", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Comment(value=''' High Chest '''),

HAnimJoint(name="vt1", DEF="MeshName_vt1", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="vc7", DEF="OldMan_vc7", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Comment(value=''' Low neck '''),

HAnimJoint(name="vc6", DEF="MeshName_vc6", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="vc5", DEF="MeshName_vc5", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="vc4", DEF="OldMan_vc4", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Comment(value=''' Mid=' ck=' '''),

HAnimJoint(name="vc3", DEF="MeshName_vc3", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="vc2", DEF="MeshName_vc2", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="vc1", DEF="OldMan_vc1", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Comment(value=''' High=' ck=' '''),

HAnimJoint(name="skullbase", DEF="OldMan_skullbase", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], displacers=[
HAnimDisplacer(name="skull_tip_raiser_action", DEF="Joe_skull_tip_raiser_action", coordIndex=[0,1,2,3,4,5,6,7,8,9], displacements=[(0,0.15,0),(0,0,0.15),(-0.1,0,0.15),(0.1,0,0.05),(0,-0.02,0.05),(-0.15,0,0),(-0.05,0,0),(0.15,0,0),(0.05,0,0),(0,0,-0.15)])], children=[
HAnimJoint(name="l_eyelid_joint", DEF="OldMan_l_eyelid_joint", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)]),
HAnimJoint(name="l_eyeball_joint", DEF="OldMan_l_eyeball_joint", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)]),
HAnimJoint(name="l_eyebrow_joint", DEF="OldMan_l_eyebrow_joint", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)]),
HAnimJoint(name="r_eyelid_joint", DEF="OldMan_r_eyelid_joint", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)]),
HAnimJoint(name="r_eyeball_joint", DEF="OldMan_r_eyeball_joint", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)]),
HAnimJoint(name="r_eyebrow_joint", DEF="OldMan_r_eyebrow_joint", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)]),
HAnimJoint(name="temporomandibular", DEF="OldMan_temporomandibular", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)])]),])])]),])])]),]),
HAnimJoint(DEF="OldMan_l_acromioclavicular", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="l_acromioclavicular", DEF="OldMan_l_sternoclavicular", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="l_shoulder", DEF="OldMan_l_shoulder", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="l_elbow", DEF="OldMan_l_elbow", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="l_radiocarpal", DEF="OldMan_l_radiocarpal", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="l_carpometacarpal_1", DEF="OldMan_l_carpometacarpal_1", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="l_metacarpophalangeal_1", DEF="OldMan_l_metacarpophalangeal_1", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="l_carpal_interphalangeal_1", DEF="OldMan_l_carpal_interphalangeal_1", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)])]),
HAnimJoint(name="l_carpometacarpal_2", DEF="OldMan_l_carpometacarpal_2", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="l_metacarpophalangeal_2", DEF="OldMan_l_metacarpophalangeal_2", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="l_carpal_proximal_interphalangeal_2", DEF="OldMan_l_carpal_proximal_interphalangeal_2", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="l_carpal_distal_interphalangeal_2", DEF="OldMan_l_carpal_distal_interphalangeal_2", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)])])]),
HAnimJoint(name="l_carpometacarpal_3", DEF="OldMan_l_carpometacarpal_3", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="l_metacarpophalangeal_3", DEF="OldMan_l_metacarpophalangeal_3", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="l_carpal_proximal_interphalangeal_3", DEF="OldMan_l_carpal_proximal_interphalangeal_3", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="l_carpal_distal_interphalangeal_3", DEF="OldMan_l_carpal_distal_interphalangeal_3", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)])])]),
HAnimJoint(name="l_carpometacarpal_4", DEF="OldMan_l_carpometacarpal_4", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="l_metacarpophalangeal_4", DEF="OldMan_l_metacarpophalangeal_4", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="l_carpal_proximal_interphalangeal_4", DEF="OldMan_l_carpal_proximal_interphalangeal_4", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="l_carpal_distal_interphalangeal_4", DEF="OldMan_l_carpal_distal_interphalangeal_4", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)])])]),
HAnimJoint(name="l_carpometacarpal_5", DEF="OldMan_l_carpometacarpal_5", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="l_metacarpophalangeal_5", DEF="OldMan_l_metacarpophalangeal_5", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="l_carpal_proximal_interphalangeal_5", DEF="OldMan_l_carpal_proximal_interphalangeal_5", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="l_carpal_distal_interphalangeal_5", DEF="OldMan_l_carpal_distal_interphalangeal_5", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)])])])])])])])]),
HAnimJoint(name="r_sternoclavicular", DEF="OldMan_r_sternoclavicular", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="r_acromioclavicular", DEF="OldMan_r_acromioclavicular", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="r_shoulder", DEF="OldMan_r_shoulder", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="r_elbow", DEF="OldMan_r_elbow", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="r_radiocarpal", DEF="OldMan_r_radiocarpal", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="r_carpometacarpal_1", DEF="OldMan_r_carpometacarpal_1", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="r_metacarpophalangeal_1", DEF="OldMan_r_metacarpophalangeal_1", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="r_carpal_interphalangeal_1", DEF="OldMan_r_carpal_interphalangeal_1", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)])]),
HAnimJoint(name="r_carpometacarpal_2", DEF="OldMan_r_carpometacarpal_2", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="r_metacarpophalangeal_2", DEF="OldMan_r_metacarpophalangeal_2", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="r_carpal_proximal_interphalangeal_2", DEF="OldMan_r_carpal_proximal_interphalangeal_2", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="r_carpal_distal_interphalangeal_2", DEF="OldMan_r_carpal_distal_interphalangeal_2", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)])])]),
HAnimJoint(name="r_carpometacarpal_3", DEF="OldMan_r_carpometacarpal_3", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="r_metacarpophalangeal_3", DEF="OldMan_r_metacarpophalangeal_3", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="r_carpal_proximal_interphalangeal_3", DEF="OldMan_r_carpal_proximal_interphalangeal_3", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="r_carpal_distal_interphalangeal_3", DEF="OldMan_r_carpal_distal_interphalangeal_3", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)])])]),
HAnimJoint(name="r_carpometacarpal_4", DEF="OldMan_r_carpometacarpal_4", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="r_metacarpophalangeal_4", DEF="OldMan_r_metacarpophalangeal_4", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="r_carpal_proximal_interphalangeal_4", DEF="OldMan_r_carpal_proximal_interphalangeal_4", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="r_carpal_distal_interphalangeal_4", DEF="OldMan_r_carpal_distal_interphalangeal_4", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)])])]),
HAnimJoint(name="r_carpometacarpal_5", DEF="OldMan_r_carpometacarpal_5", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="r_metacarpophalangeal_5", DEF="OldMan_r_metacarpophalangeal_5", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="r_carpal_proximal_interphalangeal_5", DEF="OldMan_r_carpal_proximal_interphalangeal_5", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="r_carpal_distal_interphalangeal_5", DEF="OldMan_r_carpal_distal_interphalangeal_5", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)])])])])])])])])])])])])])])])])])])]),])]),])])]),])])])]),])]),])]),])]),]),]),])])]),]))
.XML())
