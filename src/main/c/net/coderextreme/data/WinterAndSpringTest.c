#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "HAnim";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

meta meta3 = createNode("meta");
meta3.name = "title";
meta3.content = "WinterAndSpringTest.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "description";
meta4.content = "3D Male Scan combined with JoeKick, 3 Korean characters Ru,Mi,Min from HAnim, CCBYSA music plus designs from Rhino. MaleScan modified in Cinema4D for articulation and translations, geometric values from Rhino, txt file for centers. Models vary. HAnim version 2 LOA-3 Humanoids with textured skin, 3 Korean characters, plus scan. Math for lines and intersections.";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "creator";
meta5.content = "Carol McDonald, Katy Schildmeyer, Joe D. Williams and Don Brutzman";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "created";
meta6.content = "1 May 2023";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "Mon, 15 Sep 2025 05:21:02 GMT";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "reference";
meta8.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter09Ru.x3d";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "reference";
meta9.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter10Mi.x3d";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "reference";
meta10.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter11Min.x3d";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "identifier";
meta11.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/WinterAndSpringTest.x3d";
head1.meta[9] = meta11;

head = head1;

WorldInfo WorldInfo13 = createNode("WorldInfo");
WorldInfo13.title = "X3D HANIM LOA3 (modified) Skeleton, Lots points Skin, texcoords, Displacer, translations";
WorldInfo13.info = new MFString(new java.lang.String["X3D Humanoid LOA3 skeleton plus others","Lots points"]);
children = new MFNode();

children[0] = WorldInfo13;

NavigationInfo NavigationInfo14 = createNode("NavigationInfo");
NavigationInfo14.DEF = "Start_NavigationInfo";
children[1] = NavigationInfo14;

Viewpoint Viewpoint15 = createNode("Viewpoint");
Viewpoint15.description = "Male";
Viewpoint15.position = new SFVec3f(new float[0,1,-2]);
Viewpoint15.centerOfRotation = new SFVec3f(new float[0,1,0]);
children[2] = Viewpoint15;

Background Background16 = createNode("Background");
Background16.DEF = "gray_Background";
children[3] = Background16;

Background Background17 = createNode("Background");
Background17.DEF = "dark_gray_Background";
children[4] = Background17;

Background Background18 = createNode("Background");
Background18.DEF = "black_Background";
children[5] = Background18;

Background Background19 = createNode("Background");
Background19.DEF = "blue_Background";
children[6] = Background19;

SpotLight SpotLight20 = createNode("SpotLight");
SpotLight20.DEF = "light1";
SpotLight20.color = new SFColor(new float[0.8,0.8,1]);
SpotLight20.ambientIntensity = 0.7;
SpotLight20.location = new SFVec3f(new float[0,3,3]);
SpotLight20.direction = new SFVec3f(new float[0,0,0]);
SpotLight20.radius = 10;
SpotLight20.beamWidth = 1.5;
SpotLight20.cutOffAngle = 0.6;
children[7] = SpotLight20;

PointLight PointLight21 = createNode("PointLight");
PointLight21.DEF = "light2";
PointLight21.color = new SFColor(new float[0.8,0.8,1]);
PointLight21.ambientIntensity = 0.7;
PointLight21.location = new SFVec3f(new float[0,10,-7]);
children[8] = PointLight21;

Viewpoint Viewpoint22 = createNode("Viewpoint");
Viewpoint22.DEF = "Scene_InclinedView";
Viewpoint22.description = "Scene_Inclined View";
Viewpoint22.position = new SFVec3f(new float[1.62,1.05,3.06]);
Viewpoint22.orientation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
Viewpoint22.centerOfRotation = new SFVec3f(new float[0,0.85,0]);
children[9] = Viewpoint22;

Viewpoint Viewpoint23 = createNode("Viewpoint");
Viewpoint23.DEF = "Scene_IFrontView";
Viewpoint23.description = "Scene_Front View";
Viewpoint23.position = new SFVec3f(new float[0,0.8,2.58]);
Viewpoint23.centerOfRotation = new SFVec3f(new float[0,0.8,0]);
children[10] = Viewpoint23;

Viewpoint Viewpoint24 = createNode("Viewpoint");
Viewpoint24.DEF = "Scene_OldMan_ISideView";
Viewpoint24.description = "Scene_Side View";
Viewpoint24.position = new SFVec3f(new float[-2.6,1.5,1]);
Viewpoint24.orientation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint24.centerOfRotation = new SFVec3f(new float[0,0.8,0]);
children[11] = Viewpoint24;

Viewpoint Viewpoint25 = createNode("Viewpoint");
Viewpoint25.DEF = "Scene_ISideView";
Viewpoint25.description = "Scene_Side View";
Viewpoint25.position = new SFVec3f(new float[-5,1.5,1]);
Viewpoint25.orientation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint25.centerOfRotation = new SFVec3f(new float[0,0.8,0]);
children[12] = Viewpoint25;

Viewpoint Viewpoint26 = createNode("Viewpoint");
Viewpoint26.DEF = "Scene_Full_ISideView";
Viewpoint26.description = "Scene_Side View";
Viewpoint26.position = new SFVec3f(new float[-10,1.5,1]);
Viewpoint26.orientation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint26.centerOfRotation = new SFVec3f(new float[0,0.8,0]);
children[13] = Viewpoint26;

Viewpoint Viewpoint27 = createNode("Viewpoint");
Viewpoint27.DEF = "Scene_OneBush_ISideView";
Viewpoint27.description = "Scene_Side View";
Viewpoint27.position = new SFVec3f(new float[-20,1.5,1]);
Viewpoint27.orientation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint27.centerOfRotation = new SFVec3f(new float[0,0.8,0]);
children[14] = Viewpoint27;

Viewpoint Viewpoint28 = createNode("Viewpoint");
Viewpoint28.DEF = "Scene_TwoBush_ISideView";
Viewpoint28.description = "Scene_Side View";
Viewpoint28.position = new SFVec3f(new float[-10,1.5,1]);
Viewpoint28.orientation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint28.centerOfRotation = new SFVec3f(new float[0,0.8,0]);
children[15] = Viewpoint28;

Viewpoint Viewpoint29 = createNode("Viewpoint");
Viewpoint29.DEF = "Scene_BackView";
Viewpoint29.description = "Scene_Back View";
Viewpoint29.position = new SFVec3f(new float[0,1.5,-5]);
Viewpoint29.orientation = new SFRotation(new float[0,1,0,3.14]);
Viewpoint29.centerOfRotation = new SFVec3f(new float[0,1.5,0]);
children[16] = Viewpoint29;

Viewpoint Viewpoint30 = createNode("Viewpoint");
Viewpoint30.DEF = "Scene_OldMan_BackView";
Viewpoint30.description = "Scene_Back View";
Viewpoint30.position = new SFVec3f(new float[0,1.5,-2.5]);
Viewpoint30.orientation = new SFRotation(new float[0,1,0,3.14]);
Viewpoint30.centerOfRotation = new SFVec3f(new float[0,1.5,0]);
children[17] = Viewpoint30;

Viewpoint Viewpoint31 = createNode("Viewpoint");
Viewpoint31.DEF = "Scene_Full_BackView";
Viewpoint31.description = "Scene_Back View";
Viewpoint31.position = new SFVec3f(new float[0,1.5,-20]);
Viewpoint31.orientation = new SFRotation(new float[0,1,15,3.14]);
Viewpoint31.centerOfRotation = new SFVec3f(new float[0,1.5,0]);
children[18] = Viewpoint31;

Viewpoint Viewpoint32 = createNode("Viewpoint");
Viewpoint32.DEF = "Scene_TopView";
Viewpoint32.description = "Scene_Top View";
Viewpoint32.position = new SFVec3f(new float[0,3.5,0]);
Viewpoint32.orientation = new SFRotation(new float[1,0,0,-1.5708]);
Viewpoint32.centerOfRotation = new SFVec3f(new float[0,1.5,0]);
children[19] = Viewpoint32;

Group Group33 = createNode("Group");
Group33.DEF = "OldMan_Humanoid";
HAnimHumanoid HAnimHumanoid34 = createNode("HAnimHumanoid");
HAnimHumanoid34.DEF = "OldMan";
HAnimHumanoid34.name = "Walk";
HAnimHumanoid34.loa = 3;
MetadataSet MetadataSet35 = createNode("MetadataSet");
MetadataSet35.name = "warnings";
MetadataSet35.reference = "HAnim";
MetadataString MetadataString36 = createNode("MetadataString");
MetadataString36.name = "SymmetricalLeftRight";
MetadataString36.reference = "correction options: ignore, warn, average, left, right, largest, smallest";
MetadataString36.value = new MFString(new java.lang.String["ignore"]);
MetadataSet35.value = new MFNode();

MetadataSet35.value[0] = MetadataString36;

HAnimHumanoid34.metadata = new SFNode();

HAnimHumanoid34.metadata[0] = MetadataSet35;

HAnimJoint HAnimJoint37 = createNode("HAnimJoint");
HAnimJoint37.DEF = "OldMan_humanoid_root";
HAnimJoint37.name = "humanoid_root";
HAnimSegment HAnimSegment38 = createNode("HAnimSegment");
HAnimSegment38.DEF = "OldMan_sacrum";
HAnimSegment38.name = "sacrum";
HAnimSite HAnimSite39 = createNode("HAnimSite");
HAnimSite39.DEF = "OldMan_RootBack_view";
HAnimSite39.name = "RootBack_view";
Transform Transform40 = createNode("Transform");
Transform40.DEF = "hanimcordsys";
Transform40.scale = new SFVec3f(new float[0.175,0.175,0.175]);
Viewpoint Viewpoint41 = createNode("Viewpoint");
Viewpoint41.DEF = "ViewBodyRootAxes";
Viewpoint41.description = "Joe_HAnim Root HAnimSite Coordinate Axes View";
Transform40.children = new MFNode();

Transform40.children[0] = Viewpoint41;

Shape Shape42 = createNode("Shape");
Shape42.DEF = "AxisLinesShape";
IndexedLineSet IndexedLineSet43 = createNode("IndexedLineSet");
IndexedLineSet43.colorPerVertex = False;
IndexedLineSet43.colorIndex = new MFInt32(new int[0,1,2]);
IndexedLineSet43.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1]);
Color Color44 = createNode("Color");
Color44.color = new MFColor(new float[1,0,0,0,0.6,0,0,0,1]);
IndexedLineSet43.color = Color44;

Coordinate Coordinate45 = createNode("Coordinate");
Coordinate45.point = new MFVec3f(new float[0,0,0,1,0,0,0,1,0,0,0,1]);
IndexedLineSet43.coord = Coordinate45;

Shape42.geometry = IndexedLineSet43;

Transform40.child[1] = Shape42;

Shape Shape46 = createNode("Shape");
Shape46.DEF = "OldMan_Shape";
Appearance Appearance47 = createNode("Appearance");
Appearance47.DEF = "OldMan_skin_Appearance";
Material Material48 = createNode("Material");
Material48.DEF = "OldMan_skin_Material";
Material48.diffuseColor = new SFColor(new float[0.3,0.3,0.6]);
Material48.emissiveColor = new SFColor(new float[0.3,0.3,0.6]);
Appearance47.material = Material48;

ImageTexture ImageTexture49 = createNode("ImageTexture");
ImageTexture49.DEF = "OldManSkinImageTexture";
ImageTexture49.url = new MFString(new java.lang.String["OldManBodyTexture29.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JoeBodyTexture29.png"]);
Appearance47.texture = ImageTexture49;

TextureTransform TextureTransform50 = createNode("TextureTransform");
TextureTransform50.DEF = "KickTextureTransform";
Appearance47.textureTransform = TextureTransform50;

Shape46.appearance = Appearance47;

IndexedFaceSet IndexedFaceSet51 = createNode("IndexedFaceSet");
IndexedFaceSet51.DEF = "OldMan_skin_IndexedFaceSet";
Shape46.geometry = IndexedFaceSet51;

Transform40.child[2] = Shape46;

HAnimSite39.children = new MFNode();

HAnimSite39.children[0] = Transform40;

HAnimSegment38.children = new MFNode();

HAnimSegment38.children[0] = HAnimSite39;

HAnimJoint37.children = new MFNode();

HAnimJoint37.children[0] = HAnimSegment38;

HAnimJoint HAnimJoint52 = createNode("HAnimJoint");
HAnimJoint52.DEF = "OldMan_sacroiliac";
HAnimJoint52.name = "sacroiliac";
HAnimJoint HAnimJoint53 = createNode("HAnimJoint");
HAnimJoint53.DEF = "OldMan_l_hip";
HAnimJoint53.name = "l_hip";
HAnimJoint HAnimJoint54 = createNode("HAnimJoint");
HAnimJoint54.DEF = "OldMan_l_knee";
HAnimJoint54.name = "l_knee";
HAnimJoint HAnimJoint55 = createNode("HAnimJoint");
HAnimJoint55.DEF = "OldMan_l_talocrural";
HAnimJoint55.name = "l_talocrural";
HAnimJoint HAnimJoint56 = createNode("HAnimJoint");
HAnimJoint56.DEF = "Joe_l_tarsometatarsal_2";
HAnimJoint56.name = "l_tarsometatarsal_2";
HAnimJoint HAnimJoint57 = createNode("HAnimJoint");
HAnimJoint57.DEF = "Joe_l_metatarsophalangeal_2";
HAnimJoint57.name = "l_metatarsophalangeal_2";
HAnimJoint HAnimJoint58 = createNode("HAnimJoint");
HAnimJoint58.DEF = "Joe_l_tarsal_distal_interphalangeal_2";
HAnimJoint58.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint58.center = new SFVec3f(new float[0.115,0.02,0.122]);
HAnimJoint57.children = new MFNode();

HAnimJoint57.children[0] = HAnimJoint58;

HAnimJoint56.children = new MFNode();

HAnimJoint56.children[0] = HAnimJoint57;

HAnimJoint55.children = new MFNode();

HAnimJoint55.children[0] = HAnimJoint56;

HAnimJoint54.children = new MFNode();

HAnimJoint54.children[0] = HAnimJoint55;

HAnimJoint53.children = new MFNode();

HAnimJoint53.children[0] = HAnimJoint54;

HAnimJoint HAnimJoint59 = createNode("HAnimJoint");
HAnimJoint59.DEF = "OldMan_r_hip";
HAnimJoint59.name = "l_hip";
HAnimJoint HAnimJoint60 = createNode("HAnimJoint");
HAnimJoint60.DEF = "OldMan_r_knee";
HAnimJoint60.name = "l_knee";
HAnimJoint59.children = new MFNode();

HAnimJoint59.children[0] = HAnimJoint60;

HAnimJoint HAnimJoint61 = createNode("HAnimJoint");
HAnimJoint61.DEF = "OldMan_r_talocrural";
HAnimJoint61.name = "l_talocrural";
HAnimJoint HAnimJoint62 = createNode("HAnimJoint");
HAnimJoint62.DEF = "Joe_r_tarsometatarsal_2";
HAnimJoint62.name = "r_tarsometatarsal_2";
HAnimJoint62.center = new SFVec3f(new float[-0.1,0.015,-0.01]);
HAnimJoint62.skinCoordIndex = new MFInt32(new int[374,375,376]);
HAnimJoint62.skinCoordWeight = new MFFloat(new float[1,1,1]);
HAnimJoint HAnimJoint63 = createNode("HAnimJoint");
HAnimJoint63.DEF = "Joe_r_metatarsophalangeal_2";
HAnimJoint63.name = "r_metatarsophalangeal_2";
HAnimJoint63.center = new SFVec3f(new float[-0.115,0.037,0.09]);
HAnimJoint63.skinCoordIndex = new MFInt32(new int[377,378,379,380]);
HAnimJoint63.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint HAnimJoint64 = createNode("HAnimJoint");
HAnimJoint64.DEF = "Joe_r_tarsal_distal_interphalangeal_2";
HAnimJoint64.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint64.center = new SFVec3f(new float[-0.1,0.01,0.14]);
HAnimJoint64.skinCoordIndex = new MFInt32(new int[381,382,383,384,385,386,387,388,389]);
HAnimJoint64.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint63.children = new MFNode();

HAnimJoint63.children[0] = HAnimJoint64;

HAnimJoint62.children = new MFNode();

HAnimJoint62.children[0] = HAnimJoint63;

HAnimJoint61.children = new MFNode();

HAnimJoint61.children[0] = HAnimJoint62;

HAnimJoint59.children[1] = HAnimJoint61;

HAnimJoint53.children[1] = HAnimJoint59;

HAnimJoint52.children = new MFNode();

HAnimJoint52.children[0] = HAnimJoint53;

HAnimJoint HAnimJoint65 = createNode("HAnimJoint");
HAnimJoint65.DEF = "OldMan_vl5";
HAnimJoint65.name = "vl5";
HAnimJoint HAnimJoint66 = createNode("HAnimJoint");
HAnimJoint66.DEF = "MeshName_vl4";
HAnimJoint66.name = "vl4";
HAnimJoint HAnimJoint67 = createNode("HAnimJoint");
HAnimJoint67.DEF = "OldMan_vl3";
HAnimJoint67.name = "vl3";
HAnimJoint HAnimJoint68 = createNode("HAnimJoint");
HAnimJoint68.DEF = "MeshName_vl2";
HAnimJoint68.name = "vl2";
HAnimJoint HAnimJoint69 = createNode("HAnimJoint");
HAnimJoint69.DEF = "OldMan_vl1";
HAnimJoint69.name = "vl1";
HAnimJoint HAnimJoint70 = createNode("HAnimJoint");
HAnimJoint70.DEF = "MeshName_vt12";
HAnimJoint70.name = "vt12";
HAnimJoint HAnimJoint71 = createNode("HAnimJoint");
HAnimJoint71.DEF = "OldMan_vt11";
HAnimJoint71.name = "vt11";
HAnimJoint HAnimJoint72 = createNode("HAnimJoint");
HAnimJoint72.DEF = "MeshName_vt10";
HAnimJoint72.name = "vt10";
HAnimJoint HAnimJoint73 = createNode("HAnimJoint");
HAnimJoint73.DEF = "MeshName_vt9";
HAnimJoint73.name = "vt9";
HAnimJoint HAnimJoint74 = createNode("HAnimJoint");
HAnimJoint74.DEF = "MeshName_vt8";
HAnimJoint74.name = "vt8";
HAnimJoint HAnimJoint75 = createNode("HAnimJoint");
HAnimJoint75.DEF = "OldMan_vt7";
HAnimJoint75.name = "vt7";
HAnimJoint HAnimJoint76 = createNode("HAnimJoint");
HAnimJoint76.DEF = "MeshName_vt6";
HAnimJoint76.name = "vt6";
HAnimJoint HAnimJoint77 = createNode("HAnimJoint");
HAnimJoint77.DEF = "MeshName_vt5";
HAnimJoint77.name = "vt5";
HAnimJoint HAnimJoint78 = createNode("HAnimJoint");
HAnimJoint78.DEF = "OldMan_vt4";
HAnimJoint78.name = "vt4";
HAnimJoint HAnimJoint79 = createNode("HAnimJoint");
HAnimJoint79.DEF = "MeshName_vt3";
HAnimJoint79.name = "vt3";
HAnimJoint HAnimJoint80 = createNode("HAnimJoint");
HAnimJoint80.DEF = "OldMan_vt2";
HAnimJoint80.name = "vt2";
HAnimJoint HAnimJoint81 = createNode("HAnimJoint");
HAnimJoint81.DEF = "MeshName_vt1";
HAnimJoint81.name = "vt1";
HAnimJoint HAnimJoint82 = createNode("HAnimJoint");
HAnimJoint82.DEF = "OldMan_vc7";
HAnimJoint82.name = "vc7";
HAnimJoint HAnimJoint83 = createNode("HAnimJoint");
HAnimJoint83.DEF = "MeshName_vc6";
HAnimJoint83.name = "vc6";
HAnimJoint HAnimJoint84 = createNode("HAnimJoint");
HAnimJoint84.DEF = "MeshName_vc5";
HAnimJoint84.name = "vc5";
HAnimJoint HAnimJoint85 = createNode("HAnimJoint");
HAnimJoint85.DEF = "OldMan_vc4";
HAnimJoint85.name = "vc4";
HAnimJoint HAnimJoint86 = createNode("HAnimJoint");
HAnimJoint86.DEF = "MeshName_vc3";
HAnimJoint86.name = "vc3";
HAnimJoint HAnimJoint87 = createNode("HAnimJoint");
HAnimJoint87.DEF = "MeshName_vc2";
HAnimJoint87.name = "vc2";
HAnimJoint HAnimJoint88 = createNode("HAnimJoint");
HAnimJoint88.DEF = "OldMan_vc1";
HAnimJoint88.name = "vc1";
HAnimJoint HAnimJoint89 = createNode("HAnimJoint");
HAnimJoint89.DEF = "OldMan_skullbase";
HAnimJoint89.name = "skullbase";
HAnimDisplacer HAnimDisplacer90 = createNode("HAnimDisplacer");
HAnimDisplacer90.DEF = "Joe_skull_tip_raiser_action";
HAnimDisplacer90.name = "skull_tip_raiser_action";
HAnimDisplacer90.coordIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9]);
HAnimDisplacer90.displacements = new MFVec3f(new float[0,0.15,0,0,0,0.15,-0.1,0,0.15,0.1,0,0.05,0,-0.02,0.05,-0.15,0,0,-0.05,0,0,0.15,0,0,0.05,0,0,0,0,-0.15]);
HAnimJoint89.displacers = new MFNode();

HAnimJoint89.displacers[0] = HAnimDisplacer90;

HAnimJoint HAnimJoint91 = createNode("HAnimJoint");
HAnimJoint91.DEF = "OldMan_l_eyelid_joint";
HAnimJoint91.name = "l_eyelid_joint";
HAnimJoint89.children[1] = HAnimJoint91;

HAnimJoint HAnimJoint92 = createNode("HAnimJoint");
HAnimJoint92.DEF = "OldMan_l_eyeball_joint";
HAnimJoint92.name = "l_eyeball_joint";
HAnimJoint89.children[2] = HAnimJoint92;

HAnimJoint HAnimJoint93 = createNode("HAnimJoint");
HAnimJoint93.DEF = "OldMan_l_eyebrow_joint";
HAnimJoint93.name = "l_eyebrow_joint";
HAnimJoint89.children[3] = HAnimJoint93;

HAnimJoint HAnimJoint94 = createNode("HAnimJoint");
HAnimJoint94.DEF = "OldMan_r_eyelid_joint";
HAnimJoint94.name = "r_eyelid_joint";
HAnimJoint89.children[4] = HAnimJoint94;

HAnimJoint HAnimJoint95 = createNode("HAnimJoint");
HAnimJoint95.DEF = "OldMan_r_eyeball_joint";
HAnimJoint95.name = "r_eyeball_joint";
HAnimJoint89.children[5] = HAnimJoint95;

HAnimJoint HAnimJoint96 = createNode("HAnimJoint");
HAnimJoint96.DEF = "OldMan_r_eyebrow_joint";
HAnimJoint96.name = "r_eyebrow_joint";
HAnimJoint89.children[6] = HAnimJoint96;

HAnimJoint HAnimJoint97 = createNode("HAnimJoint");
HAnimJoint97.DEF = "OldMan_temporomandibular";
HAnimJoint97.name = "temporomandibular";
HAnimJoint89.children[7] = HAnimJoint97;

HAnimJoint88.children = new MFNode();

HAnimJoint88.children[0] = HAnimJoint89;

HAnimJoint87.children = new MFNode();

HAnimJoint87.children[0] = HAnimJoint88;

HAnimJoint86.children = new MFNode();

HAnimJoint86.children[0] = HAnimJoint87;

HAnimJoint85.children = new MFNode();

HAnimJoint85.children[0] = HAnimJoint86;

HAnimJoint84.children = new MFNode();

HAnimJoint84.children[0] = HAnimJoint85;

HAnimJoint83.children = new MFNode();

HAnimJoint83.children[0] = HAnimJoint84;

HAnimJoint82.children = new MFNode();

HAnimJoint82.children[0] = HAnimJoint83;

HAnimJoint81.children = new MFNode();

HAnimJoint81.children[0] = HAnimJoint82;

HAnimJoint HAnimJoint98 = createNode("HAnimJoint");
HAnimJoint98.DEF = "OldMan_l_acromioclavicular";
HAnimJoint98.name = "l_acromioclavicular";
HAnimJoint HAnimJoint99 = createNode("HAnimJoint");
HAnimJoint99.DEF = "OldMan_l_sternoclavicular";
HAnimJoint99.name = "l_sternoclavicular";
HAnimJoint HAnimJoint100 = createNode("HAnimJoint");
HAnimJoint100.DEF = "OldMan_l_shoulder";
HAnimJoint100.name = "l_shoulder";
HAnimJoint HAnimJoint101 = createNode("HAnimJoint");
HAnimJoint101.DEF = "OldMan_l_elbow";
HAnimJoint101.name = "l_elbow";
HAnimJoint HAnimJoint102 = createNode("HAnimJoint");
HAnimJoint102.DEF = "OldMan_l_radiocarpal";
HAnimJoint102.name = "l_radiocarpal";
HAnimJoint HAnimJoint103 = createNode("HAnimJoint");
HAnimJoint103.DEF = "OldMan_l_carpometacarpal_1";
HAnimJoint103.name = "l_carpometacarpal_1";
HAnimJoint HAnimJoint104 = createNode("HAnimJoint");
HAnimJoint104.DEF = "OldMan_l_metacarpophalangeal_1";
HAnimJoint104.name = "l_metacarpophalangeal_1";
HAnimJoint HAnimJoint105 = createNode("HAnimJoint");
HAnimJoint105.DEF = "OldMan_l_carpal_interphalangeal_1";
HAnimJoint105.name = "l_carpal_interphalangeal_1";
HAnimJoint104.children = new MFNode();

HAnimJoint104.children[0] = HAnimJoint105;

HAnimJoint103.children = new MFNode();

HAnimJoint103.children[0] = HAnimJoint104;

HAnimJoint HAnimJoint106 = createNode("HAnimJoint");
HAnimJoint106.DEF = "OldMan_l_carpometacarpal_2";
HAnimJoint106.name = "l_carpometacarpal_2";
HAnimJoint HAnimJoint107 = createNode("HAnimJoint");
HAnimJoint107.DEF = "OldMan_l_metacarpophalangeal_2";
HAnimJoint107.name = "l_metacarpophalangeal_2";
HAnimJoint HAnimJoint108 = createNode("HAnimJoint");
HAnimJoint108.DEF = "OldMan_l_carpal_proximal_interphalangeal_2";
HAnimJoint108.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint HAnimJoint109 = createNode("HAnimJoint");
HAnimJoint109.DEF = "OldMan_l_carpal_distal_interphalangeal_2";
HAnimJoint109.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint108.children = new MFNode();

HAnimJoint108.children[0] = HAnimJoint109;

HAnimJoint107.children = new MFNode();

HAnimJoint107.children[0] = HAnimJoint108;

HAnimJoint106.children = new MFNode();

HAnimJoint106.children[0] = HAnimJoint107;

HAnimJoint HAnimJoint110 = createNode("HAnimJoint");
HAnimJoint110.DEF = "OldMan_l_carpometacarpal_3";
HAnimJoint110.name = "l_carpometacarpal_3";
HAnimJoint HAnimJoint111 = createNode("HAnimJoint");
HAnimJoint111.DEF = "OldMan_l_metacarpophalangeal_3";
HAnimJoint111.name = "l_metacarpophalangeal_3";
HAnimJoint HAnimJoint112 = createNode("HAnimJoint");
HAnimJoint112.DEF = "OldMan_l_carpal_proximal_interphalangeal_3";
HAnimJoint112.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint HAnimJoint113 = createNode("HAnimJoint");
HAnimJoint113.DEF = "OldMan_l_carpal_distal_interphalangeal_3";
HAnimJoint113.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint112.children = new MFNode();

HAnimJoint112.children[0] = HAnimJoint113;

HAnimJoint111.children = new MFNode();

HAnimJoint111.children[0] = HAnimJoint112;

HAnimJoint110.children = new MFNode();

HAnimJoint110.children[0] = HAnimJoint111;

HAnimJoint HAnimJoint114 = createNode("HAnimJoint");
HAnimJoint114.DEF = "OldMan_l_carpometacarpal_4";
HAnimJoint114.name = "l_carpometacarpal_4";
HAnimJoint HAnimJoint115 = createNode("HAnimJoint");
HAnimJoint115.DEF = "OldMan_l_metacarpophalangeal_4";
HAnimJoint115.name = "l_metacarpophalangeal_4";
HAnimJoint HAnimJoint116 = createNode("HAnimJoint");
HAnimJoint116.DEF = "OldMan_l_carpal_proximal_interphalangeal_4";
HAnimJoint116.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint HAnimJoint117 = createNode("HAnimJoint");
HAnimJoint117.DEF = "OldMan_l_carpal_distal_interphalangeal_4";
HAnimJoint117.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint116.children = new MFNode();

HAnimJoint116.children[0] = HAnimJoint117;

HAnimJoint115.children = new MFNode();

HAnimJoint115.children[0] = HAnimJoint116;

HAnimJoint114.children = new MFNode();

HAnimJoint114.children[0] = HAnimJoint115;

HAnimJoint HAnimJoint118 = createNode("HAnimJoint");
HAnimJoint118.DEF = "OldMan_l_carpometacarpal_5";
HAnimJoint118.name = "l_carpometacarpal_5";
HAnimJoint HAnimJoint119 = createNode("HAnimJoint");
HAnimJoint119.DEF = "OldMan_l_metacarpophalangeal_5";
HAnimJoint119.name = "l_metacarpophalangeal_5";
HAnimJoint HAnimJoint120 = createNode("HAnimJoint");
HAnimJoint120.DEF = "OldMan_l_carpal_proximal_interphalangeal_5";
HAnimJoint120.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint HAnimJoint121 = createNode("HAnimJoint");
HAnimJoint121.DEF = "OldMan_l_carpal_distal_interphalangeal_5";
HAnimJoint121.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint120.children = new MFNode();

HAnimJoint120.children[0] = HAnimJoint121;

HAnimJoint119.children = new MFNode();

HAnimJoint119.children[0] = HAnimJoint120;

HAnimJoint118.children = new MFNode();

HAnimJoint118.children[0] = HAnimJoint119;

HAnimJoint114.children[1] = HAnimJoint118;

HAnimJoint110.children[1] = HAnimJoint114;

HAnimJoint106.children[1] = HAnimJoint110;

HAnimJoint103.children[1] = HAnimJoint106;

HAnimJoint102.children = new MFNode();

HAnimJoint102.children[0] = HAnimJoint103;

HAnimJoint HAnimJoint122 = createNode("HAnimJoint");
HAnimJoint122.DEF = "OldMan_r_sternoclavicular";
HAnimJoint122.name = "r_sternoclavicular";
HAnimJoint HAnimJoint123 = createNode("HAnimJoint");
HAnimJoint123.DEF = "OldMan_r_acromioclavicular";
HAnimJoint123.name = "r_acromioclavicular";
HAnimJoint HAnimJoint124 = createNode("HAnimJoint");
HAnimJoint124.DEF = "OldMan_r_shoulder";
HAnimJoint124.name = "r_shoulder";
HAnimJoint HAnimJoint125 = createNode("HAnimJoint");
HAnimJoint125.DEF = "OldMan_r_elbow";
HAnimJoint125.name = "r_elbow";
HAnimJoint HAnimJoint126 = createNode("HAnimJoint");
HAnimJoint126.DEF = "OldMan_r_radiocarpal";
HAnimJoint126.name = "r_radiocarpal";
HAnimJoint HAnimJoint127 = createNode("HAnimJoint");
HAnimJoint127.DEF = "OldMan_r_carpometacarpal_1";
HAnimJoint127.name = "r_carpometacarpal_1";
HAnimJoint HAnimJoint128 = createNode("HAnimJoint");
HAnimJoint128.DEF = "OldMan_r_metacarpophalangeal_1";
HAnimJoint128.name = "r_metacarpophalangeal_1";
HAnimJoint HAnimJoint129 = createNode("HAnimJoint");
HAnimJoint129.DEF = "OldMan_r_carpal_interphalangeal_1";
HAnimJoint129.name = "r_carpal_interphalangeal_1";
HAnimJoint128.children = new MFNode();

HAnimJoint128.children[0] = HAnimJoint129;

HAnimJoint127.children = new MFNode();

HAnimJoint127.children[0] = HAnimJoint128;

HAnimJoint HAnimJoint130 = createNode("HAnimJoint");
HAnimJoint130.DEF = "OldMan_r_carpometacarpal_2";
HAnimJoint130.name = "r_carpometacarpal_2";
HAnimJoint HAnimJoint131 = createNode("HAnimJoint");
HAnimJoint131.DEF = "OldMan_r_metacarpophalangeal_2";
HAnimJoint131.name = "r_metacarpophalangeal_2";
HAnimJoint HAnimJoint132 = createNode("HAnimJoint");
HAnimJoint132.DEF = "OldMan_r_carpal_proximal_interphalangeal_2";
HAnimJoint132.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint HAnimJoint133 = createNode("HAnimJoint");
HAnimJoint133.DEF = "OldMan_r_carpal_distal_interphalangeal_2";
HAnimJoint133.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint132.children = new MFNode();

HAnimJoint132.children[0] = HAnimJoint133;

HAnimJoint131.children = new MFNode();

HAnimJoint131.children[0] = HAnimJoint132;

HAnimJoint130.children = new MFNode();

HAnimJoint130.children[0] = HAnimJoint131;

HAnimJoint HAnimJoint134 = createNode("HAnimJoint");
HAnimJoint134.DEF = "OldMan_r_carpometacarpal_3";
HAnimJoint134.name = "r_carpometacarpal_3";
HAnimJoint HAnimJoint135 = createNode("HAnimJoint");
HAnimJoint135.DEF = "OldMan_r_metacarpophalangeal_3";
HAnimJoint135.name = "r_metacarpophalangeal_3";
HAnimJoint HAnimJoint136 = createNode("HAnimJoint");
HAnimJoint136.DEF = "OldMan_r_carpal_proximal_interphalangeal_3";
HAnimJoint136.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint HAnimJoint137 = createNode("HAnimJoint");
HAnimJoint137.DEF = "OldMan_r_carpal_distal_interphalangeal_3";
HAnimJoint137.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint136.children = new MFNode();

HAnimJoint136.children[0] = HAnimJoint137;

HAnimJoint135.children = new MFNode();

HAnimJoint135.children[0] = HAnimJoint136;

HAnimJoint134.children = new MFNode();

HAnimJoint134.children[0] = HAnimJoint135;

HAnimJoint HAnimJoint138 = createNode("HAnimJoint");
HAnimJoint138.DEF = "OldMan_r_carpometacarpal_4";
HAnimJoint138.name = "r_carpometacarpal_4";
HAnimJoint HAnimJoint139 = createNode("HAnimJoint");
HAnimJoint139.DEF = "OldMan_r_metacarpophalangeal_4";
HAnimJoint139.name = "r_metacarpophalangeal_4";
HAnimJoint HAnimJoint140 = createNode("HAnimJoint");
HAnimJoint140.DEF = "OldMan_r_carpal_proximal_interphalangeal_4";
HAnimJoint140.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint HAnimJoint141 = createNode("HAnimJoint");
HAnimJoint141.DEF = "OldMan_r_carpal_distal_interphalangeal_4";
HAnimJoint141.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint140.children = new MFNode();

HAnimJoint140.children[0] = HAnimJoint141;

HAnimJoint139.children = new MFNode();

HAnimJoint139.children[0] = HAnimJoint140;

HAnimJoint138.children = new MFNode();

HAnimJoint138.children[0] = HAnimJoint139;

HAnimJoint HAnimJoint142 = createNode("HAnimJoint");
HAnimJoint142.DEF = "OldMan_r_carpometacarpal_5";
HAnimJoint142.name = "r_carpometacarpal_5";
HAnimJoint HAnimJoint143 = createNode("HAnimJoint");
HAnimJoint143.DEF = "OldMan_r_metacarpophalangeal_5";
HAnimJoint143.name = "r_metacarpophalangeal_5";
HAnimJoint HAnimJoint144 = createNode("HAnimJoint");
HAnimJoint144.DEF = "OldMan_r_carpal_proximal_interphalangeal_5";
HAnimJoint144.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint HAnimJoint145 = createNode("HAnimJoint");
HAnimJoint145.DEF = "OldMan_r_carpal_distal_interphalangeal_5";
HAnimJoint145.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint144.children = new MFNode();

HAnimJoint144.children[0] = HAnimJoint145;

HAnimJoint143.children = new MFNode();

HAnimJoint143.children[0] = HAnimJoint144;

HAnimJoint142.children = new MFNode();

HAnimJoint142.children[0] = HAnimJoint143;

HAnimJoint138.children[1] = HAnimJoint142;

HAnimJoint134.children[1] = HAnimJoint138;

HAnimJoint130.children[1] = HAnimJoint134;

HAnimJoint127.children[1] = HAnimJoint130;

HAnimJoint126.children = new MFNode();

HAnimJoint126.children[0] = HAnimJoint127;

HAnimJoint125.children = new MFNode();

HAnimJoint125.children[0] = HAnimJoint126;

HAnimJoint124.children = new MFNode();

HAnimJoint124.children[0] = HAnimJoint125;

HAnimJoint123.children = new MFNode();

HAnimJoint123.children[0] = HAnimJoint124;

HAnimJoint122.children = new MFNode();

HAnimJoint122.children[0] = HAnimJoint123;

HAnimJoint102.children[1] = HAnimJoint122;

HAnimJoint101.children = new MFNode();

HAnimJoint101.children[0] = HAnimJoint102;

HAnimJoint100.children = new MFNode();

HAnimJoint100.children[0] = HAnimJoint101;

HAnimJoint99.children = new MFNode();

HAnimJoint99.children[0] = HAnimJoint100;

HAnimJoint98.children = new MFNode();

HAnimJoint98.children[0] = HAnimJoint99;

HAnimJoint81.children[1] = HAnimJoint98;

HAnimJoint80.children = new MFNode();

HAnimJoint80.children[0] = HAnimJoint81;

HAnimJoint79.children = new MFNode();

HAnimJoint79.children[0] = HAnimJoint80;

HAnimJoint78.children = new MFNode();

HAnimJoint78.children[0] = HAnimJoint79;

HAnimJoint77.children = new MFNode();

HAnimJoint77.children[0] = HAnimJoint78;

HAnimJoint76.children = new MFNode();

HAnimJoint76.children[0] = HAnimJoint77;

HAnimJoint75.children = new MFNode();

HAnimJoint75.children[0] = HAnimJoint76;

HAnimJoint74.children = new MFNode();

HAnimJoint74.children[0] = HAnimJoint75;

HAnimJoint73.children = new MFNode();

HAnimJoint73.children[0] = HAnimJoint74;

HAnimJoint72.children = new MFNode();

HAnimJoint72.children[0] = HAnimJoint73;

HAnimJoint71.children = new MFNode();

HAnimJoint71.children[0] = HAnimJoint72;

HAnimJoint70.children = new MFNode();

HAnimJoint70.children[0] = HAnimJoint71;

HAnimJoint69.children = new MFNode();

HAnimJoint69.children[0] = HAnimJoint70;

HAnimJoint68.children = new MFNode();

HAnimJoint68.children[0] = HAnimJoint69;

HAnimJoint67.children = new MFNode();

HAnimJoint67.children[0] = HAnimJoint68;

HAnimJoint66.children = new MFNode();

HAnimJoint66.children[0] = HAnimJoint67;

HAnimJoint65.children = new MFNode();

HAnimJoint65.children[0] = HAnimJoint66;

HAnimJoint52.children[1] = HAnimJoint65;

HAnimJoint37.children[1] = HAnimJoint52;

HAnimHumanoid34.joints[1] = HAnimJoint37;

Group33.children = new MFNode();

Group33.children[0] = HAnimHumanoid34;

children[20] = Group33;

}
