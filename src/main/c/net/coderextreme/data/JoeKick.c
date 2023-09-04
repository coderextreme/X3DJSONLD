#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "JoeKick.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "This Joe model is a HAnim version 2 LOA-3 Humanoid with textured skin based on the original HAnim Specification and data from CAESAR models.";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Joe D. Williams";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "created";
meta5.content = "9 January 2004";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "translated";
meta6.content = "12 January 2017";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "29 January 2023";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "TODO";
meta8.content = "Record information about skin coordinates (found in comment at end of scene) as a structured MetadataSet containing MetadataString nodes";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "translators";
meta9.content = "Roy Walmsley, Don Brutzman, John Carlson";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "reference";
meta10.content = "../Characters/JoeSkinTexcoordDisplacerKick.x3d";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "identifier";
meta11.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JoeKick.x3d";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "generator";
meta12.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "generator";
meta13.content = "BS studio translation from .x3dv by Joe using BS Contact";
head1.meta[11] = meta13;

component component14 = createNode("component");
component14.name = "HAnim";
component14.level = 1;
head1.component[12] = component14;

head = head1;

WorldInfo WorldInfo16 = createNode("WorldInfo");
WorldInfo16.title = "X3D HANIM LOA3 Skeleton, 390 point Skin, texcoords, Displacer, teTrans for Joe_ by Joe";
WorldInfo16.info = new MFString(new java.lang.String["X3D Humanoid LOA3 skeleton","skin from hanim sites, surface features, and some added points","390 points"]);
children = new MFNode();

children[0] = WorldInfo16;

NavigationInfo NavigationInfo17 = createNode("NavigationInfo");
NavigationInfo17.DEF = "Start_NavigationInfo";
NavigationInfo17.speed = 2.5;
NavigationInfo17.headlight = False;
children[1] = NavigationInfo17;

Background Background18 = createNode("Background");
Background18.DEF = "blue_Background";
children[2] = Background18;

SpotLight SpotLight19 = createNode("SpotLight");
SpotLight19.DEF = "light1";
SpotLight19.color = new SFColor(new float[0.8,0.8,1]);
SpotLight19.ambientIntensity = 0.7;
SpotLight19.location = new SFVec3f(new float[0,3,3]);
SpotLight19.direction = new SFVec3f(new float[0,0,0]);
SpotLight19.radius = 10;
SpotLight19.beamWidth = 1.5;
SpotLight19.cutOffAngle = 0.6;
children[3] = SpotLight19;

PointLight PointLight20 = createNode("PointLight");
PointLight20.DEF = "light2";
PointLight20.color = new SFColor(new float[0.8,0.8,1]);
PointLight20.ambientIntensity = 0.7;
PointLight20.location = new SFVec3f(new float[0,10,-7]);
children[4] = PointLight20;

Viewpoint Viewpoint21 = createNode("Viewpoint");
Viewpoint21.DEF = "Scene_InclinedView";
Viewpoint21.description = "Scene_Inclined View";
Viewpoint21.position = new SFVec3f(new float[1.62,1.05,3.06]);
Viewpoint21.orientation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
Viewpoint21.centerOfRotation = new SFVec3f(new float[0,0.85,0]);
children[5] = Viewpoint21;

Viewpoint Viewpoint22 = createNode("Viewpoint");
Viewpoint22.DEF = "Scene_IFrontView";
Viewpoint22.description = "Scene_Front View";
Viewpoint22.position = new SFVec3f(new float[0,0.8,2.58]);
Viewpoint22.centerOfRotation = new SFVec3f(new float[0,0.8,0]);
children[6] = Viewpoint22;

Viewpoint Viewpoint23 = createNode("Viewpoint");
Viewpoint23.DEF = "Scene_ISideView";
Viewpoint23.description = "Scene_Side View";
Viewpoint23.position = new SFVec3f(new float[2.6,0.8,0]);
Viewpoint23.orientation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint23.centerOfRotation = new SFVec3f(new float[0,0.8,0]);
children[7] = Viewpoint23;

Viewpoint Viewpoint24 = createNode("Viewpoint");
Viewpoint24.DEF = "Scene_BackView";
Viewpoint24.description = "Scene_Back View";
Viewpoint24.position = new SFVec3f(new float[0,1.5,-3]);
Viewpoint24.orientation = new SFRotation(new float[0,1,0,3.14]);
Viewpoint24.centerOfRotation = new SFVec3f(new float[0,1.5,0]);
children[8] = Viewpoint24;

Viewpoint Viewpoint25 = createNode("Viewpoint");
Viewpoint25.DEF = "Scene_TopView";
Viewpoint25.description = "Scene_Top View";
Viewpoint25.position = new SFVec3f(new float[0,3.5,0]);
Viewpoint25.orientation = new SFRotation(new float[1,0,0,-1.5708]);
Viewpoint25.centerOfRotation = new SFVec3f(new float[0,1.5,0]);
children[9] = Viewpoint25;

Group Group26 = createNode("Group");
Group26.DEF = "Joe_Humanoid";
HAnimHumanoid HAnimHumanoid27 = createNode("HAnimHumanoid");
HAnimHumanoid27.DEF = "Joe_Kick";
HAnimHumanoid27.version = "2.0";
HAnimHumanoid27.name = "Kick";
HAnimHumanoid27.loa = 3;
MetadataSet MetadataSet28 = createNode("MetadataSet");
MetadataSet28.name = "warnings";
MetadataSet28.reference = "HAnim";
MetadataString MetadataString29 = createNode("MetadataString");
MetadataString29.name = "SymmetricalLeftRight";
MetadataString29.reference = "correction options: ignore, warn, average, left, right, largest, smallest";
MetadataString29.value = new MFString(new java.lang.String["ignore"]);
MetadataSet28.value = new MFNode();

MetadataSet28.value[0] = MetadataString29;

HAnimHumanoid27.metadata = new SFNode();

HAnimHumanoid27.metadata[0] = MetadataSet28;

HAnimJoint HAnimJoint30 = createNode("HAnimJoint");
HAnimJoint30.DEF = "Joe_humanoid_root";
HAnimJoint30.name = "humanoid_root";
HAnimJoint30.center = new SFVec3f(new float[0,0.875,0]);
HAnimSegment HAnimSegment31 = createNode("HAnimSegment");
HAnimSegment31.DEF = "Joe_sacrum";
HAnimSegment31.name = "sacrum";
HAnimSite HAnimSite32 = createNode("HAnimSite");
HAnimSite32.DEF = "Joe_RootFront_view";
HAnimSite32.name = "RootFront_view";
Transform Transform33 = createNode("Transform");
Transform33.DEF = "hanimcordsys";
Transform33.scale = new SFVec3f(new float[0.175,0.175,0.175]);
Viewpoint Viewpoint34 = createNode("Viewpoint");
Viewpoint34.DEF = "ViewBodyRootAxes";
Viewpoint34.description = "Joe_HAnim Root HAnimSite Coordinate Axes View";
Transform33.children = new MFNode();

Transform33.children[0] = Viewpoint34;

Shape Shape35 = createNode("Shape");
Shape35.DEF = "AxisLinesShape";
IndexedLineSet IndexedLineSet36 = createNode("IndexedLineSet");
IndexedLineSet36.colorPerVertex = False;
IndexedLineSet36.colorIndex = new MFInt32(new int[0,1,2]);
IndexedLineSet36.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1]);
Color Color37 = createNode("Color");
Color37.color = new MFColor(new float[1,0,0,0,0.6,0,0,0,1]);
IndexedLineSet36.color = Color37;

Coordinate Coordinate38 = createNode("Coordinate");
Coordinate38.point = new MFVec3f(new float[0,0,0,1,0,0,0,1,0,0,0,1]);
IndexedLineSet36.coord = Coordinate38;

Shape35.geometry = IndexedLineSet36;

Transform33.child[1] = Shape35;

HAnimSite32.children = new MFNode();

HAnimSite32.children[0] = Transform33;

HAnimSegment31.children = new MFNode();

HAnimSegment31.children[0] = HAnimSite32;

HAnimJoint30.children = new MFNode();

HAnimJoint30.children[0] = HAnimSegment31;

HAnimJoint HAnimJoint39 = createNode("HAnimJoint");
HAnimJoint39.DEF = "Joe_sacroiliac";
HAnimJoint39.name = "sacroiliac";
HAnimJoint39.center = new SFVec3f(new float[0,0.92,0]);
HAnimJoint39.skinCoordIndex = new MFInt32(new int[17,19,20,21,22,23,26,27,73,82,89,91,93]);
HAnimJoint39.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,0.35,0.35,1]);
HAnimJoint HAnimJoint40 = createNode("HAnimJoint");
HAnimJoint40.DEF = "Joe_l_hip";
HAnimJoint40.name = "l_hip";
HAnimJoint40.center = new SFVec3f(new float[0.1,0.92,0]);
HAnimJoint40.skinCoordIndex = new MFInt32(new int[89,90,94,95,96,97]);
HAnimJoint40.skinCoordWeight = new MFFloat(new float[0.65,1,1,1,1,1]);
HAnimJoint HAnimJoint41 = createNode("HAnimJoint");
HAnimJoint41.DEF = "Joe_l_knee";
HAnimJoint41.name = "l_knee";
HAnimJoint41.center = new SFVec3f(new float[0.115,0.466,0]);
HAnimJoint41.skinCoordIndex = new MFInt32(new int[334,335,336,337,338,339,340,341]);
HAnimJoint41.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint HAnimJoint42 = createNode("HAnimJoint");
HAnimJoint42.DEF = "Joe_l_talocrural";
HAnimJoint42.name = "l_talocrural";
HAnimJoint42.center = new SFVec3f(new float[0.115,0.069,0]);
HAnimJoint42.skinCoordIndex = new MFInt32(new int[342,343,344,345]);
HAnimJoint42.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint HAnimJoint43 = createNode("HAnimJoint");
HAnimJoint43.DEF = "Joe_l_tarsometatarsal_1";
HAnimJoint43.name = "l_tarsometatarsal_2";
HAnimJoint43.center = new SFVec3f(new float[0.115,0.031,0.03]);
HAnimJoint43.skinCoordIndex = new MFInt32(new int[346,347,348,71]);
HAnimJoint43.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint HAnimJoint44 = createNode("HAnimJoint");
HAnimJoint44.DEF = "Joe_l_metatarsophalangeal_1";
HAnimJoint44.name = "l_metatarsophalangeal_2";
HAnimJoint44.center = new SFVec3f(new float[0.115,0.037,0.09]);
HAnimJoint44.skinCoordIndex = new MFInt32(new int[349,350,351,352]);
HAnimJoint44.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint HAnimJoint45 = createNode("HAnimJoint");
HAnimJoint45.DEF = "Joe_l_tarsal_distal_interphalangeal_1";
HAnimJoint45.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint45.center = new SFVec3f(new float[0.115,0.02,0.122]);
HAnimJoint45.skinCoordIndex = new MFInt32(new int[353,354,355,356,357,358,359,360,361]);
HAnimJoint45.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint44.children = new MFNode();

HAnimJoint44.children[0] = HAnimJoint45;

HAnimJoint43.children = new MFNode();

HAnimJoint43.children[0] = HAnimJoint44;

HAnimJoint42.children = new MFNode();

HAnimJoint42.children[0] = HAnimJoint43;

HAnimJoint41.children = new MFNode();

HAnimJoint41.children[0] = HAnimJoint42;

HAnimJoint40.children = new MFNode();

HAnimJoint40.children[0] = HAnimJoint41;

HAnimJoint39.children = new MFNode();

HAnimJoint39.children[0] = HAnimJoint40;

HAnimJoint HAnimJoint46 = createNode("HAnimJoint");
HAnimJoint46.DEF = "Joe_r_hip";
HAnimJoint46.name = "r_hip";
HAnimJoint46.center = new SFVec3f(new float[-0.1,0.92,0]);
HAnimJoint46.skinCoordIndex = new MFInt32(new int[91,92,98,99,100,101,362,363]);
HAnimJoint46.skinCoordWeight = new MFFloat(new float[0.65,1,0.8,1,1,1,0.4,0.8]);
HAnimJoint HAnimJoint47 = createNode("HAnimJoint");
HAnimJoint47.DEF = "Joe_r_knee";
HAnimJoint47.name = "r_knee";
HAnimJoint47.center = new SFVec3f(new float[-0.05,0.466,0]);
HAnimJoint47.skinCoordIndex = new MFInt32(new int[362,363,364,365,366,367,368,369,98]);
HAnimJoint47.skinCoordWeight = new MFFloat(new float[0.6,0.2,1,1,1,1,1,1,0.2]);
HAnimJoint HAnimJoint48 = createNode("HAnimJoint");
HAnimJoint48.DEF = "Joe_r_talocrural";
HAnimJoint48.name = "r_talocrural";
HAnimJoint48.center = new SFVec3f(new float[-0.115,0.069,0]);
HAnimJoint48.skinCoordIndex = new MFInt32(new int[370,371,372,373]);
HAnimJoint48.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint HAnimJoint49 = createNode("HAnimJoint");
HAnimJoint49.DEF = "Joe_r_tarsometatarsal_1";
HAnimJoint49.name = "r_tarsometatarsal_2";
HAnimJoint49.center = new SFVec3f(new float[-0.1,0.015,-0.01]);
HAnimJoint49.skinCoordIndex = new MFInt32(new int[374,375,376]);
HAnimJoint49.skinCoordWeight = new MFFloat(new float[1,1,1]);
HAnimJoint HAnimJoint50 = createNode("HAnimJoint");
HAnimJoint50.DEF = "Joe_r_metatarsophalangeal_1";
HAnimJoint50.name = "r_metatarsophalangeal_2";
HAnimJoint50.center = new SFVec3f(new float[-0.115,0.037,0.09]);
HAnimJoint50.skinCoordIndex = new MFInt32(new int[377,378,379,380]);
HAnimJoint50.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint HAnimJoint51 = createNode("HAnimJoint");
HAnimJoint51.DEF = "Joe_r_tarsal_distal_interphalangeal_1";
HAnimJoint51.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint51.center = new SFVec3f(new float[-0.1,0.01,0.14]);
HAnimJoint51.skinCoordIndex = new MFInt32(new int[381,382,383,384,385,386,387,388,389]);
HAnimJoint51.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint50.children = new MFNode();

HAnimJoint50.children[0] = HAnimJoint51;

HAnimJoint49.children = new MFNode();

HAnimJoint49.children[0] = HAnimJoint50;

HAnimJoint48.children = new MFNode();

HAnimJoint48.children[0] = HAnimJoint49;

HAnimJoint47.children = new MFNode();

HAnimJoint47.children[0] = HAnimJoint48;

HAnimJoint46.children = new MFNode();

HAnimJoint46.children[0] = HAnimJoint47;

HAnimJoint39.children[1] = HAnimJoint46;

HAnimJoint30.children[1] = HAnimJoint39;

HAnimJoint HAnimJoint52 = createNode("HAnimJoint");
HAnimJoint52.DEF = "Joe_vl5";
HAnimJoint52.name = "vl5";
HAnimJoint52.center = new SFVec3f(new float[0,1.045,-0.095]);
HAnimJoint52.skinCoordIndex = new MFInt32(new int[28,76]);
HAnimJoint52.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint HAnimJoint53 = createNode("HAnimJoint");
HAnimJoint53.DEF = "Joe_vl4";
HAnimJoint53.name = "vl4";
HAnimJoint53.center = new SFVec3f(new float[0,1.068,-0.085]);
HAnimJoint HAnimJoint54 = createNode("HAnimJoint");
HAnimJoint54.DEF = "Joe_vl3";
HAnimJoint54.name = "vl3";
HAnimJoint54.center = new SFVec3f(new float[0,1.092,-0.0725]);
HAnimJoint HAnimJoint55 = createNode("HAnimJoint");
HAnimJoint55.DEF = "Joe_vl2";
HAnimJoint55.name = "vl2";
HAnimJoint55.center = new SFVec3f(new float[0,1.12,-0.065]);
HAnimJoint55.skinCoordIndex = new MFInt32(new int[16,18,25,83,84,85,86,87,88]);
HAnimJoint55.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,0.7,1,0.8]);
HAnimJoint HAnimJoint56 = createNode("HAnimJoint");
HAnimJoint56.DEF = "Joe_vl1";
HAnimJoint56.name = "vl1";
HAnimJoint56.center = new SFVec3f(new float[0,1.1459,-0.0625]);
HAnimJoint HAnimJoint57 = createNode("HAnimJoint");
HAnimJoint57.DEF = "Joe_vt12";
HAnimJoint57.name = "vt12";
HAnimJoint57.center = new SFVec3f(new float[0,1.179,-0.068]);
HAnimJoint HAnimJoint58 = createNode("HAnimJoint");
HAnimJoint58.DEF = "Joe_vt11";
HAnimJoint58.name = "vt11";
HAnimJoint58.center = new SFVec3f(new float[0,1.2679,-0.081]);
HAnimJoint HAnimJoint59 = createNode("HAnimJoint");
HAnimJoint59.DEF = "Joe_vt10";
HAnimJoint59.name = "vt10";
HAnimJoint59.center = new SFVec3f(new float[0,1.242,-0.09]);
HAnimJoint59.skinCoordIndex = new MFInt32(new int[15]);
HAnimJoint59.skinCoordWeight = new MFFloat(new float[1]);
HAnimJoint HAnimJoint60 = createNode("HAnimJoint");
HAnimJoint60.DEF = "Joe_vt9";
HAnimJoint60.name = "vt9";
HAnimJoint60.center = new SFVec3f(new float[0,1.268,-0.1]);
HAnimJoint60.skinCoordIndex = new MFInt32(new int[13,14]);
HAnimJoint60.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint HAnimJoint61 = createNode("HAnimJoint");
HAnimJoint61.DEF = "Joe_vt8";
HAnimJoint61.name = "vt8";
HAnimJoint61.center = new SFVec3f(new float[0,1.294,-0.11]);
HAnimJoint HAnimJoint62 = createNode("HAnimJoint");
HAnimJoint62.DEF = "Joe_vt7";
HAnimJoint62.name = "vt7";
HAnimJoint62.center = new SFVec3f(new float[0,1.323,-0.1155]);
HAnimJoint HAnimJoint63 = createNode("HAnimJoint");
HAnimJoint63.DEF = "Joe_vt6";
HAnimJoint63.name = "vt6";
HAnimJoint63.center = new SFVec3f(new float[0,1.352,-0.12]);
HAnimJoint HAnimJoint64 = createNode("HAnimJoint");
HAnimJoint64.DEF = "Joe_vt5";
HAnimJoint64.name = "vt5";
HAnimJoint64.center = new SFVec3f(new float[0,1.381,-0.1235]);
HAnimJoint HAnimJoint65 = createNode("HAnimJoint");
HAnimJoint65.DEF = "Joe_vt4";
HAnimJoint65.name = "vt4";
HAnimJoint65.center = new SFVec3f(new float[0,1.41,-0.1235]);
HAnimJoint65.skinCoordIndex = new MFInt32(new int[81]);
HAnimJoint65.skinCoordWeight = new MFFloat(new float[1]);
HAnimJoint HAnimJoint66 = createNode("HAnimJoint");
HAnimJoint66.DEF = "Joe_vt3";
HAnimJoint66.name = "vt3";
HAnimJoint66.center = new SFVec3f(new float[0,1.438,-0.12]);
HAnimJoint HAnimJoint67 = createNode("HAnimJoint");
HAnimJoint67.DEF = "Joe_vt2";
HAnimJoint67.name = "vt2";
HAnimJoint67.center = new SFVec3f(new float[0,1.468,-0.105]);
HAnimJoint HAnimJoint68 = createNode("HAnimJoint");
HAnimJoint68.DEF = "Joe_vt1";
HAnimJoint68.name = "vt1";
HAnimJoint68.center = new SFVec3f(new float[0,1.497,-0.09]);
HAnimJoint68.skinCoordIndex = new MFInt32(new int[11,24]);
HAnimJoint68.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint HAnimJoint69 = createNode("HAnimJoint");
HAnimJoint69.DEF = "Joe_vc7";
HAnimJoint69.name = "vc7";
HAnimJoint69.center = new SFVec3f(new float[0,1.525,-0.072]);
HAnimJoint69.skinCoordIndex = new MFInt32(new int[74,75]);
HAnimJoint69.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint HAnimJoint70 = createNode("HAnimJoint");
HAnimJoint70.DEF = "Joe_vc6";
HAnimJoint70.name = "vc6";
HAnimJoint70.center = new SFVec3f(new float[0,1.54,-0.05]);
HAnimJoint HAnimJoint71 = createNode("HAnimJoint");
HAnimJoint71.DEF = "Joe_vc5";
HAnimJoint71.name = "vc5";
HAnimJoint71.center = new SFVec3f(new float[0,1.552,-0.035]);
HAnimJoint HAnimJoint72 = createNode("HAnimJoint");
HAnimJoint72.DEF = "Joe_vc4";
HAnimJoint72.name = "vc4";
HAnimJoint72.center = new SFVec3f(new float[0,1.5675,-0.0256]);
HAnimJoint HAnimJoint73 = createNode("HAnimJoint");
HAnimJoint73.DEF = "Joe_vc3";
HAnimJoint73.name = "vc3";
HAnimJoint73.center = new SFVec3f(new float[0,1.58225,-0.0185]);
HAnimJoint HAnimJoint74 = createNode("HAnimJoint");
HAnimJoint74.DEF = "Joe_vc2";
HAnimJoint74.name = "vc2";
HAnimJoint74.center = new SFVec3f(new float[0,1.595,-0.0175]);
HAnimJoint HAnimJoint75 = createNode("HAnimJoint");
HAnimJoint75.DEF = "Joe_vc1";
HAnimJoint75.name = "vc1";
HAnimJoint75.center = new SFVec3f(new float[0,1.61,-0.015]);
HAnimJoint HAnimJoint76 = createNode("HAnimJoint");
HAnimJoint76.DEF = "Joe_skullbase";
HAnimJoint76.name = "skullbase";
HAnimJoint76.center = new SFVec3f(new float[0,1.63,-0.01]);
HAnimJoint76.skinCoordIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9]);
HAnimJoint76.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1]);
HAnimDisplacer HAnimDisplacer77 = createNode("HAnimDisplacer");
HAnimDisplacer77.DEF = "Joe_skull_tip_raiser_action";
HAnimDisplacer77.name = "skull_tip_raiser_action";
HAnimDisplacer77.coordIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9]);
HAnimDisplacer77.displacements = new MFVec3f(new float[0,0.15,0,0,0,0.15,-0.1,0,0.15,0.1,0,0.05,0,-0.02,0.05,-0.15,0,0,-0.05,0,0,0.15,0,0,0.05,0,0,0,0,-0.15]);
HAnimJoint76.displacers = new MFNode();

HAnimJoint76.displacers[0] = HAnimDisplacer77;

HAnimJoint HAnimJoint78 = createNode("HAnimJoint");
HAnimJoint78.DEF = "Joe_l_eyelid_joint";
HAnimJoint78.name = "l_eyelid_joint";
HAnimJoint78.center = new SFVec3f(new float[0.034,1.659,0.06]);
HAnimJoint76.children[1] = HAnimJoint78;

HAnimJoint HAnimJoint79 = createNode("HAnimJoint");
HAnimJoint79.DEF = "Joe_l_eyeball_joint";
HAnimJoint79.name = "l_eyeball_joint";
HAnimJoint79.center = new SFVec3f(new float[0.034,1.659,0.06]);
HAnimJoint76.children[2] = HAnimJoint79;

HAnimJoint HAnimJoint80 = createNode("HAnimJoint");
HAnimJoint80.DEF = "Joe_l_eyebrow_joint";
HAnimJoint80.name = "l_eyebrow_joint";
HAnimJoint80.center = new SFVec3f(new float[0.034,1.659,0.06]);
HAnimJoint76.children[3] = HAnimJoint80;

HAnimJoint HAnimJoint81 = createNode("HAnimJoint");
HAnimJoint81.DEF = "Joe_r_eyelid_joint";
HAnimJoint81.name = "r_eyelid_joint";
HAnimJoint81.center = new SFVec3f(new float[-0.034,1.659,0.06]);
HAnimJoint76.children[4] = HAnimJoint81;

HAnimJoint HAnimJoint82 = createNode("HAnimJoint");
HAnimJoint82.DEF = "Joe_r_eyeball_joint";
HAnimJoint82.name = "r_eyeball_joint";
HAnimJoint82.center = new SFVec3f(new float[-0.034,1.659,0.06]);
HAnimJoint76.children[5] = HAnimJoint82;

HAnimJoint HAnimJoint83 = createNode("HAnimJoint");
HAnimJoint83.DEF = "Joe_r_eyebrow_joint";
HAnimJoint83.name = "r_eyebrow_joint";
HAnimJoint83.center = new SFVec3f(new float[-0.034,1.659,0.06]);
HAnimJoint76.children[6] = HAnimJoint83;

HAnimJoint HAnimJoint84 = createNode("HAnimJoint");
HAnimJoint84.DEF = "Joe_temporomandibular";
HAnimJoint84.name = "temporomandibular";
HAnimJoint84.center = new SFVec3f(new float[0.034,1.659,0.06]);
HAnimJoint76.children[7] = HAnimJoint84;

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

HAnimJoint HAnimJoint85 = createNode("HAnimJoint");
HAnimJoint85.DEF = "Joe_l_acromioclavicular";
HAnimJoint85.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint85.skinCoordIndex = new MFInt32(new int[12]);
HAnimJoint85.skinCoordWeight = new MFFloat(new float[1]);
HAnimJoint HAnimJoint86 = createNode("HAnimJoint");
HAnimJoint86.DEF = "Joe_l_sternoclavicular";
HAnimJoint86.name = "l_acromioclavicular";
HAnimJoint86.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint86.skinCoordIndex = new MFInt32(new int[79]);
HAnimJoint86.skinCoordWeight = new MFFloat(new float[1]);
HAnimJoint HAnimJoint87 = createNode("HAnimJoint");
HAnimJoint87.DEF = "Joe_l_shoulder";
HAnimJoint87.name = "l_shoulder";
HAnimJoint87.center = new SFVec3f(new float[0.2,1.44,-0.04]);
HAnimJoint87.skinCoordIndex = new MFInt32(new int[41,42,44,80,102,103,104,105]);
HAnimJoint87.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint HAnimJoint88 = createNode("HAnimJoint");
HAnimJoint88.DEF = "Joe_l_elbow";
HAnimJoint88.name = "l_elbow";
HAnimJoint88.center = new SFVec3f(new float[0.2,1.1388,-0.04]);
HAnimJoint88.skinCoordIndex = new MFInt32(new int[45,46,47,109,110,111,112,113,115,116,117,118]);
HAnimJoint88.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint HAnimJoint89 = createNode("HAnimJoint");
HAnimJoint89.DEF = "Joe_l_radiocarpal";
HAnimJoint89.name = "l_radiocarpal";
HAnimJoint89.center = new SFVec3f(new float[0.2,0.87,-0.04]);
HAnimJoint89.skinCoordIndex = new MFInt32(new int[119,120,121,122,123,124,125,126]);
HAnimJoint89.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint HAnimJoint90 = createNode("HAnimJoint");
HAnimJoint90.DEF = "Joe_l_carpometacarpal_1";
HAnimJoint90.name = "l_carpometacarpal_1";
HAnimJoint90.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint90.skinCoordIndex = new MFInt32(new int[127,128]);
HAnimJoint90.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint HAnimJoint91 = createNode("HAnimJoint");
HAnimJoint91.DEF = "Joe_l_metacarpophalangeal_1";
HAnimJoint91.name = "l_metacarpophalangeal_1";
HAnimJoint91.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint91.skinCoordIndex = new MFInt32(new int[138,139,140,141,142,143]);
HAnimJoint91.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1]);
HAnimJoint HAnimJoint92 = createNode("HAnimJoint");
HAnimJoint92.DEF = "Joe_l_carpal_interphalangeal_1";
HAnimJoint92.name = "l_carpal_interphalangeal_1";
HAnimJoint92.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint92.skinCoordIndex = new MFInt32(new int[144,145,146,147,148,149,150,151,152]);
HAnimJoint92.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint91.children = new MFNode();

HAnimJoint91.children[0] = HAnimJoint92;

HAnimJoint90.children = new MFNode();

HAnimJoint90.children[0] = HAnimJoint91;

HAnimJoint89.children = new MFNode();

HAnimJoint89.children[0] = HAnimJoint90;

HAnimJoint HAnimJoint93 = createNode("HAnimJoint");
HAnimJoint93.DEF = "Joe_l_carpometacarpal_2";
HAnimJoint93.name = "l_carpometacarpal_2";
HAnimJoint93.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint93.skinCoordIndex = new MFInt32(new int[129,130]);
HAnimJoint93.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint HAnimJoint94 = createNode("HAnimJoint");
HAnimJoint94.DEF = "Joe_l_metacarpophalangeal_2";
HAnimJoint94.name = "l_metacarpophalangeal_2";
HAnimJoint94.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint94.skinCoordIndex = new MFInt32(new int[138,139,140,153,154,155,163]);
HAnimJoint94.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1,0.5]);
HAnimJoint HAnimJoint95 = createNode("HAnimJoint");
HAnimJoint95.DEF = "Joe_l_carpal_proximal_interphalangeal_1";
HAnimJoint95.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint95.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint95.skinCoordIndex = new MFInt32(new int[166,167,168,169]);
HAnimJoint95.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint HAnimJoint96 = createNode("HAnimJoint");
HAnimJoint96.DEF = "Joe_l_carpal_distal_interphalangeal_1";
HAnimJoint96.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint96.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint96.skinCoordIndex = new MFInt32(new int[170,171,172,173,174,175,176,177,178]);
HAnimJoint96.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint95.children = new MFNode();

HAnimJoint95.children[0] = HAnimJoint96;

HAnimJoint94.children = new MFNode();

HAnimJoint94.children[0] = HAnimJoint95;

HAnimJoint93.children = new MFNode();

HAnimJoint93.children[0] = HAnimJoint94;

HAnimJoint89.children[1] = HAnimJoint93;

HAnimJoint HAnimJoint97 = createNode("HAnimJoint");
HAnimJoint97.DEF = "Joe_l_carpometacarpal_3";
HAnimJoint97.name = "l_carpometacarpal_3";
HAnimJoint97.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint97.skinCoordIndex = new MFInt32(new int[131,132]);
HAnimJoint97.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint HAnimJoint98 = createNode("HAnimJoint");
HAnimJoint98.DEF = "Joe_l_metacarpophalangeal_3";
HAnimJoint98.name = "l_metacarpophalangeal_3";
HAnimJoint98.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint98.skinCoordIndex = new MFInt32(new int[156,157,163,164]);
HAnimJoint98.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimJoint HAnimJoint99 = createNode("HAnimJoint");
HAnimJoint99.DEF = "Joe_l_carpal_proximal_interphalangeal_2";
HAnimJoint99.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint99.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint99.skinCoordIndex = new MFInt32(new int[179,180,181,182]);
HAnimJoint99.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint HAnimJoint100 = createNode("HAnimJoint");
HAnimJoint100.DEF = "Joe_l_carpal_distal_interphalangeal_2";
HAnimJoint100.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint100.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint100.skinCoordIndex = new MFInt32(new int[183,184,185,186,187,188,189,190,191]);
HAnimJoint100.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint99.children = new MFNode();

HAnimJoint99.children[0] = HAnimJoint100;

HAnimJoint98.children = new MFNode();

HAnimJoint98.children[0] = HAnimJoint99;

HAnimJoint97.children = new MFNode();

HAnimJoint97.children[0] = HAnimJoint98;

HAnimJoint89.children[2] = HAnimJoint97;

HAnimJoint HAnimJoint101 = createNode("HAnimJoint");
HAnimJoint101.DEF = "Joe_l_carpometacarpal_4";
HAnimJoint101.name = "l_carpometacarpal_4";
HAnimJoint101.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint101.skinCoordIndex = new MFInt32(new int[133,134]);
HAnimJoint101.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint HAnimJoint102 = createNode("HAnimJoint");
HAnimJoint102.DEF = "Joe_l_metacarpophalangeal_4";
HAnimJoint102.name = "l_metacarpophalangeal_4";
HAnimJoint102.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint102.skinCoordIndex = new MFInt32(new int[158,159,164,165]);
HAnimJoint102.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimJoint HAnimJoint103 = createNode("HAnimJoint");
HAnimJoint103.DEF = "Joe_l_carpal_proximal_interphalangeal_3";
HAnimJoint103.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint103.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint103.skinCoordIndex = new MFInt32(new int[192,193,194,195]);
HAnimJoint103.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint HAnimJoint104 = createNode("HAnimJoint");
HAnimJoint104.DEF = "Joe_l_carpal_distal_interphalangeal_3";
HAnimJoint104.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint104.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint104.skinCoordIndex = new MFInt32(new int[196,197,198,199,200,201,202,203,204]);
HAnimJoint104.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint103.children = new MFNode();

HAnimJoint103.children[0] = HAnimJoint104;

HAnimJoint102.children = new MFNode();

HAnimJoint102.children[0] = HAnimJoint103;

HAnimJoint101.children = new MFNode();

HAnimJoint101.children[0] = HAnimJoint102;

HAnimJoint89.children[3] = HAnimJoint101;

HAnimJoint HAnimJoint105 = createNode("HAnimJoint");
HAnimJoint105.DEF = "Joe_l_carpometacarpal_5";
HAnimJoint105.name = "l_carpometacarpal_5";
HAnimJoint105.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint105.skinCoordIndex = new MFInt32(new int[135,136,137,165]);
HAnimJoint105.skinCoordWeight = new MFFloat(new float[1,1,1,0.5]);
HAnimJoint HAnimJoint106 = createNode("HAnimJoint");
HAnimJoint106.DEF = "Joe_l_metacarpophalangeal_5";
HAnimJoint106.name = "l_metacarpophalangeal_5";
HAnimJoint106.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint106.skinCoordIndex = new MFInt32(new int[160,161,162]);
HAnimJoint106.skinCoordWeight = new MFFloat(new float[1,1,1]);
HAnimJoint HAnimJoint107 = createNode("HAnimJoint");
HAnimJoint107.DEF = "Joe_l_carpal_proximal_interphalangeal_4";
HAnimJoint107.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint107.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint107.skinCoordIndex = new MFInt32(new int[205,206,207,208]);
HAnimJoint107.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint HAnimJoint108 = createNode("HAnimJoint");
HAnimJoint108.DEF = "Joe_l_carpal_distal_interphalangeal_4";
HAnimJoint108.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint108.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint108.skinCoordIndex = new MFInt32(new int[209,210,211,212,213,214,215,216,217]);
HAnimJoint108.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint107.children = new MFNode();

HAnimJoint107.children[0] = HAnimJoint108;

HAnimJoint106.children = new MFNode();

HAnimJoint106.children[0] = HAnimJoint107;

HAnimJoint105.children = new MFNode();

HAnimJoint105.children[0] = HAnimJoint106;

HAnimJoint89.children[4] = HAnimJoint105;

HAnimJoint88.children = new MFNode();

HAnimJoint88.children[0] = HAnimJoint89;

HAnimJoint87.children = new MFNode();

HAnimJoint87.children[0] = HAnimJoint88;

HAnimJoint86.children = new MFNode();

HAnimJoint86.children[0] = HAnimJoint87;

HAnimJoint85.children = new MFNode();

HAnimJoint85.children[0] = HAnimJoint86;

HAnimJoint68.children[1] = HAnimJoint85;

HAnimJoint HAnimJoint109 = createNode("HAnimJoint");
HAnimJoint109.DEF = "Joe_r_sternoclavicular";
HAnimJoint109.name = "r_sternoclavicular";
HAnimJoint109.center = new SFVec3f(new float[-0.03,1.46,0]);
HAnimJoint109.skinCoordIndex = new MFInt32(new int[10]);
HAnimJoint109.skinCoordWeight = new MFFloat(new float[1]);
HAnimJoint HAnimJoint110 = createNode("HAnimJoint");
HAnimJoint110.DEF = "Joe_r_acromioclavicular";
HAnimJoint110.name = "r_acromioclavicular";
HAnimJoint110.center = new SFVec3f(new float[-0.09,1.41,-0.11]);
HAnimJoint110.skinCoordIndex = new MFInt32(new int[77,29]);
HAnimJoint110.skinCoordWeight = new MFFloat(new float[1,0.9]);
HAnimJoint HAnimJoint111 = createNode("HAnimJoint");
HAnimJoint111.DEF = "Joe_r_shoulder";
HAnimJoint111.name = "r_shoulder";
HAnimJoint111.center = new SFVec3f(new float[-0.2,1.44,-0.04]);
HAnimJoint111.skinCoordIndex = new MFInt32(new int[29,30,32,78,218,219,220,221,86,88]);
HAnimJoint111.skinCoordWeight = new MFFloat(new float[0.1,1,1,1,1,1,1,1,0.3,0.2]);
HAnimJoint HAnimJoint112 = createNode("HAnimJoint");
HAnimJoint112.DEF = "Joe_r_elbow";
HAnimJoint112.name = "r_elbow";
HAnimJoint112.center = new SFVec3f(new float[-0.2,1.1388,-0.04]);
HAnimJoint112.skinCoordIndex = new MFInt32(new int[33,34,35,225,226,227,228,229,231,232,233,234]);
HAnimJoint112.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint HAnimJoint113 = createNode("HAnimJoint");
HAnimJoint113.DEF = "Joe_r_radiocarpal";
HAnimJoint113.name = "r_radiocarpal";
HAnimJoint113.center = new SFVec3f(new float[-0.2,0.89,-0.04]);
HAnimJoint113.skinCoordIndex = new MFInt32(new int[235,236,237,238,239,240,241,242]);
HAnimJoint113.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint HAnimJoint114 = createNode("HAnimJoint");
HAnimJoint114.DEF = "Joe_r_carpometacarpal_1";
HAnimJoint114.name = "r_carpometacarpal_1";
HAnimJoint114.center = new SFVec3f(new float[-0.2,0.85,0]);
HAnimJoint114.skinCoordIndex = new MFInt32(new int[243,244]);
HAnimJoint114.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint HAnimJoint115 = createNode("HAnimJoint");
HAnimJoint115.DEF = "Joe_r_metacarpophalangeal_1";
HAnimJoint115.name = "r_metacarpophalangeal_1";
HAnimJoint115.center = new SFVec3f(new float[-0.2,0.82,0.03]);
HAnimJoint115.skinCoordIndex = new MFInt32(new int[254,255,256,257,258,259]);
HAnimJoint115.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1]);
HAnimJoint HAnimJoint116 = createNode("HAnimJoint");
HAnimJoint116.DEF = "Joe_r_carpal_interphalangeal_1";
HAnimJoint116.name = "r_carpal_interphalangeal_1";
HAnimJoint116.center = new SFVec3f(new float[-0.2,0.8,0.05]);
HAnimJoint116.skinCoordIndex = new MFInt32(new int[260,261,262,263,264,265,266,267,268]);
HAnimJoint116.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint115.children = new MFNode();

HAnimJoint115.children[0] = HAnimJoint116;

HAnimJoint114.children = new MFNode();

HAnimJoint114.children[0] = HAnimJoint115;

HAnimJoint113.children = new MFNode();

HAnimJoint113.children[0] = HAnimJoint114;

HAnimJoint HAnimJoint117 = createNode("HAnimJoint");
HAnimJoint117.DEF = "Joe_r_carpometacarpal_2";
HAnimJoint117.name = "r_carpometacarpal_2";
HAnimJoint117.center = new SFVec3f(new float[-0.2,0.84,-0.015]);
HAnimJoint117.skinCoordIndex = new MFInt32(new int[245,246]);
HAnimJoint117.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint HAnimJoint118 = createNode("HAnimJoint");
HAnimJoint118.DEF = "Joe_r_metacarpophalangeal_2";
HAnimJoint118.name = "r_metacarpophalangeal_2";
HAnimJoint118.center = new SFVec3f(new float[-0.2,0.793,-0.015]);
HAnimJoint118.skinCoordIndex = new MFInt32(new int[254,255,256,269,270,271,279]);
HAnimJoint118.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1,0.5]);
HAnimJoint HAnimJoint119 = createNode("HAnimJoint");
HAnimJoint119.DEF = "Joe_r_carpal_proximal_interphalangeal_1";
HAnimJoint119.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint119.center = new SFVec3f(new float[-0.2,0.745,-0.015]);
HAnimJoint119.skinCoordIndex = new MFInt32(new int[282,283,284,285]);
HAnimJoint119.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint HAnimJoint120 = createNode("HAnimJoint");
HAnimJoint120.DEF = "Joe_r_carpal_distal_interphalangeal_1";
HAnimJoint120.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint120.center = new SFVec3f(new float[-0.2,0.72,-0.015]);
HAnimJoint120.skinCoordIndex = new MFInt32(new int[286,287,288,289,290,291,292,293,294]);
HAnimJoint120.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint119.children = new MFNode();

HAnimJoint119.children[0] = HAnimJoint120;

HAnimJoint118.children = new MFNode();

HAnimJoint118.children[0] = HAnimJoint119;

HAnimJoint117.children = new MFNode();

HAnimJoint117.children[0] = HAnimJoint118;

HAnimJoint113.children[1] = HAnimJoint117;

HAnimJoint HAnimJoint121 = createNode("HAnimJoint");
HAnimJoint121.DEF = "Joe_r_carpometacarpal_3";
HAnimJoint121.name = "r_carpometacarpal_3";
HAnimJoint121.center = new SFVec3f(new float[-0.2,0.835,-0.04]);
HAnimJoint121.skinCoordIndex = new MFInt32(new int[247,248]);
HAnimJoint121.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint HAnimJoint122 = createNode("HAnimJoint");
HAnimJoint122.DEF = "Joe_r_metacarpophalangeal_3";
HAnimJoint122.name = "r_metacarpophalangeal_3";
HAnimJoint122.center = new SFVec3f(new float[-0.2,0.788,-0.04]);
HAnimJoint122.skinCoordIndex = new MFInt32(new int[272,273,279,280]);
HAnimJoint122.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimJoint HAnimJoint123 = createNode("HAnimJoint");
HAnimJoint123.DEF = "Joe_r_carpal_proximal_interphalangeal_2";
HAnimJoint123.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint123.center = new SFVec3f(new float[-0.2,0.74,-0.04]);
HAnimJoint123.skinCoordIndex = new MFInt32(new int[295,296,297,298]);
HAnimJoint123.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint HAnimJoint124 = createNode("HAnimJoint");
HAnimJoint124.DEF = "Joe_r_carpal_distal_interphalangeal_2";
HAnimJoint124.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint124.center = new SFVec3f(new float[-0.2,0.7142,-0.04]);
HAnimJoint124.skinCoordIndex = new MFInt32(new int[299,300,301,302,303,304,305,306,307]);
HAnimJoint124.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint123.children = new MFNode();

HAnimJoint123.children[0] = HAnimJoint124;

HAnimJoint122.children = new MFNode();

HAnimJoint122.children[0] = HAnimJoint123;

HAnimJoint121.children = new MFNode();

HAnimJoint121.children[0] = HAnimJoint122;

HAnimJoint113.children[2] = HAnimJoint121;

HAnimJoint HAnimJoint125 = createNode("HAnimJoint");
HAnimJoint125.DEF = "Joe_r_carpometacarpal_4";
HAnimJoint125.name = "r_carpometacarpal_4";
HAnimJoint125.center = new SFVec3f(new float[-0.2,0.835,-0.065]);
HAnimJoint125.skinCoordIndex = new MFInt32(new int[249,250]);
HAnimJoint125.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint HAnimJoint126 = createNode("HAnimJoint");
HAnimJoint126.DEF = "Joe_r_metacarpophalangeal_4";
HAnimJoint126.name = "r_metacarpophalangeal_4";
HAnimJoint126.center = new SFVec3f(new float[-0.2,0.793,-0.065]);
HAnimJoint126.skinCoordIndex = new MFInt32(new int[274,275,280,281]);
HAnimJoint126.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimJoint HAnimJoint127 = createNode("HAnimJoint");
HAnimJoint127.DEF = "Joe_r_carpal_proximal_interphalangeal_3";
HAnimJoint127.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint127.center = new SFVec3f(new float[-0.2,0.74,-0.065]);
HAnimJoint127.skinCoordIndex = new MFInt32(new int[308,309,310,311]);
HAnimJoint127.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint HAnimJoint128 = createNode("HAnimJoint");
HAnimJoint128.DEF = "Joe_r_carpal_distal_interphalangeal_3";
HAnimJoint128.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint128.center = new SFVec3f(new float[-0.2,0.7177,-0.065]);
HAnimJoint128.skinCoordIndex = new MFInt32(new int[312,313,314,315,316,317,318,319,320]);
HAnimJoint128.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint127.children = new MFNode();

HAnimJoint127.children[0] = HAnimJoint128;

HAnimJoint126.children = new MFNode();

HAnimJoint126.children[0] = HAnimJoint127;

HAnimJoint125.children = new MFNode();

HAnimJoint125.children[0] = HAnimJoint126;

HAnimJoint113.children[3] = HAnimJoint125;

HAnimJoint HAnimJoint129 = createNode("HAnimJoint");
HAnimJoint129.DEF = "Joe_r_carpometacarpal_5";
HAnimJoint129.name = "r_carpometacarpal_5";
HAnimJoint129.center = new SFVec3f(new float[-0.2,0.84,-0.085]);
HAnimJoint129.skinCoordIndex = new MFInt32(new int[251,252,253,281]);
HAnimJoint129.skinCoordWeight = new MFFloat(new float[1,1,1,0.5]);
HAnimJoint HAnimJoint130 = createNode("HAnimJoint");
HAnimJoint130.DEF = "Joe_r_metacarpophalangeal_5";
HAnimJoint130.name = "r_metacarpophalangeal_5";
HAnimJoint130.center = new SFVec3f(new float[-0.2,0.79,-0.085]);
HAnimJoint130.skinCoordIndex = new MFInt32(new int[276,277,278]);
HAnimJoint130.skinCoordWeight = new MFFloat(new float[1,1,1]);
HAnimJoint HAnimJoint131 = createNode("HAnimJoint");
HAnimJoint131.DEF = "Joe_r_carpal_proximal_interphalangeal_4";
HAnimJoint131.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint131.center = new SFVec3f(new float[-0.2,0.755,-0.085]);
HAnimJoint131.skinCoordIndex = new MFInt32(new int[321,322,323,324]);
HAnimJoint131.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint HAnimJoint132 = createNode("HAnimJoint");
HAnimJoint132.DEF = "Joe_r_carpal_distal_interphalangeal_4";
HAnimJoint132.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint132.center = new SFVec3f(new float[-0.2,0.735,-0.09]);
HAnimJoint132.skinCoordIndex = new MFInt32(new int[325,326,327,328,329,330,331,332,333]);
HAnimJoint132.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint131.children = new MFNode();

HAnimJoint131.children[0] = HAnimJoint132;

HAnimJoint130.children = new MFNode();

HAnimJoint130.children[0] = HAnimJoint131;

HAnimJoint129.children = new MFNode();

HAnimJoint129.children[0] = HAnimJoint130;

HAnimJoint113.children[4] = HAnimJoint129;

HAnimJoint112.children = new MFNode();

HAnimJoint112.children[0] = HAnimJoint113;

HAnimJoint111.children = new MFNode();

HAnimJoint111.children[0] = HAnimJoint112;

HAnimJoint110.children = new MFNode();

HAnimJoint110.children[0] = HAnimJoint111;

HAnimJoint109.children = new MFNode();

HAnimJoint109.children[0] = HAnimJoint110;

HAnimJoint68.children[2] = HAnimJoint109;

HAnimJoint67.children = new MFNode();

HAnimJoint67.children[0] = HAnimJoint68;

HAnimJoint66.children = new MFNode();

HAnimJoint66.children[0] = HAnimJoint67;

HAnimJoint65.children = new MFNode();

HAnimJoint65.children[0] = HAnimJoint66;

HAnimJoint64.children = new MFNode();

HAnimJoint64.children[0] = HAnimJoint65;

HAnimJoint63.children = new MFNode();

HAnimJoint63.children[0] = HAnimJoint64;

HAnimJoint62.children = new MFNode();

HAnimJoint62.children[0] = HAnimJoint63;

HAnimJoint61.children = new MFNode();

HAnimJoint61.children[0] = HAnimJoint62;

HAnimJoint60.children = new MFNode();

HAnimJoint60.children[0] = HAnimJoint61;

HAnimJoint59.children = new MFNode();

HAnimJoint59.children[0] = HAnimJoint60;

HAnimJoint58.children = new MFNode();

HAnimJoint58.children[0] = HAnimJoint59;

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

HAnimJoint52.children = new MFNode();

HAnimJoint52.children[0] = HAnimJoint53;

HAnimJoint30.children[2] = HAnimJoint52;

HAnimHumanoid27.joints[1] = HAnimJoint30;

HAnimSite HAnimSite133 = createNode("HAnimSite");
HAnimSite133.USE = "Joe_RootFront_view";
HAnimHumanoid27.viewpoints[2] = HAnimSite133;

HAnimSegment HAnimSegment134 = createNode("HAnimSegment");
HAnimSegment134.USE = "Joe_sacrum";
HAnimHumanoid27.segments[3] = HAnimSegment134;

HAnimJoint HAnimJoint135 = createNode("HAnimJoint");
HAnimJoint135.USE = "Joe_humanoid_root";
HAnimHumanoid27.joints[4] = HAnimJoint135;

HAnimJoint HAnimJoint136 = createNode("HAnimJoint");
HAnimJoint136.USE = "Joe_sacroiliac";
HAnimHumanoid27.joints[5] = HAnimJoint136;

HAnimJoint HAnimJoint137 = createNode("HAnimJoint");
HAnimJoint137.USE = "Joe_skullbase";
HAnimHumanoid27.joints[6] = HAnimJoint137;

HAnimJoint HAnimJoint138 = createNode("HAnimJoint");
HAnimJoint138.USE = "Joe_temporomandibular";
HAnimHumanoid27.joints[7] = HAnimJoint138;

HAnimJoint HAnimJoint139 = createNode("HAnimJoint");
HAnimJoint139.USE = "Joe_vc1";
HAnimHumanoid27.joints[8] = HAnimJoint139;

HAnimJoint HAnimJoint140 = createNode("HAnimJoint");
HAnimJoint140.USE = "Joe_vc2";
HAnimHumanoid27.joints[9] = HAnimJoint140;

HAnimJoint HAnimJoint141 = createNode("HAnimJoint");
HAnimJoint141.USE = "Joe_vc3";
HAnimHumanoid27.joints[10] = HAnimJoint141;

HAnimJoint HAnimJoint142 = createNode("HAnimJoint");
HAnimJoint142.USE = "Joe_vc4";
HAnimHumanoid27.joints[11] = HAnimJoint142;

HAnimJoint HAnimJoint143 = createNode("HAnimJoint");
HAnimJoint143.USE = "Joe_vc5";
HAnimHumanoid27.joints[12] = HAnimJoint143;

HAnimJoint HAnimJoint144 = createNode("HAnimJoint");
HAnimJoint144.USE = "Joe_vc6";
HAnimHumanoid27.joints[13] = HAnimJoint144;

HAnimJoint HAnimJoint145 = createNode("HAnimJoint");
HAnimJoint145.USE = "Joe_vc7";
HAnimHumanoid27.joints[14] = HAnimJoint145;

HAnimJoint HAnimJoint146 = createNode("HAnimJoint");
HAnimJoint146.USE = "Joe_vl1";
HAnimHumanoid27.joints[15] = HAnimJoint146;

HAnimJoint HAnimJoint147 = createNode("HAnimJoint");
HAnimJoint147.USE = "Joe_vl2";
HAnimHumanoid27.joints[16] = HAnimJoint147;

HAnimJoint HAnimJoint148 = createNode("HAnimJoint");
HAnimJoint148.USE = "Joe_vl3";
HAnimHumanoid27.joints[17] = HAnimJoint148;

HAnimJoint HAnimJoint149 = createNode("HAnimJoint");
HAnimJoint149.USE = "Joe_vl4";
HAnimHumanoid27.joints[18] = HAnimJoint149;

HAnimJoint HAnimJoint150 = createNode("HAnimJoint");
HAnimJoint150.USE = "Joe_vl5";
HAnimHumanoid27.joints[19] = HAnimJoint150;

HAnimJoint HAnimJoint151 = createNode("HAnimJoint");
HAnimJoint151.USE = "Joe_vt1";
HAnimHumanoid27.joints[20] = HAnimJoint151;

HAnimJoint HAnimJoint152 = createNode("HAnimJoint");
HAnimJoint152.USE = "Joe_vt10";
HAnimHumanoid27.joints[21] = HAnimJoint152;

HAnimJoint HAnimJoint153 = createNode("HAnimJoint");
HAnimJoint153.USE = "Joe_vt11";
HAnimHumanoid27.joints[22] = HAnimJoint153;

HAnimJoint HAnimJoint154 = createNode("HAnimJoint");
HAnimJoint154.USE = "Joe_vt12";
HAnimHumanoid27.joints[23] = HAnimJoint154;

HAnimJoint HAnimJoint155 = createNode("HAnimJoint");
HAnimJoint155.USE = "Joe_vt2";
HAnimHumanoid27.joints[24] = HAnimJoint155;

HAnimJoint HAnimJoint156 = createNode("HAnimJoint");
HAnimJoint156.USE = "Joe_vt3";
HAnimHumanoid27.joints[25] = HAnimJoint156;

HAnimJoint HAnimJoint157 = createNode("HAnimJoint");
HAnimJoint157.USE = "Joe_vt4";
HAnimHumanoid27.joints[26] = HAnimJoint157;

HAnimJoint HAnimJoint158 = createNode("HAnimJoint");
HAnimJoint158.USE = "Joe_vt5";
HAnimHumanoid27.joints[27] = HAnimJoint158;

HAnimJoint HAnimJoint159 = createNode("HAnimJoint");
HAnimJoint159.USE = "Joe_vt6";
HAnimHumanoid27.joints[28] = HAnimJoint159;

HAnimJoint HAnimJoint160 = createNode("HAnimJoint");
HAnimJoint160.USE = "Joe_vt7";
HAnimHumanoid27.joints[29] = HAnimJoint160;

HAnimJoint HAnimJoint161 = createNode("HAnimJoint");
HAnimJoint161.USE = "Joe_vt8";
HAnimHumanoid27.joints[30] = HAnimJoint161;

HAnimJoint HAnimJoint162 = createNode("HAnimJoint");
HAnimJoint162.USE = "Joe_vt9";
HAnimHumanoid27.joints[31] = HAnimJoint162;

HAnimJoint HAnimJoint163 = createNode("HAnimJoint");
HAnimJoint163.USE = "Joe_l_acromioclavicular";
HAnimHumanoid27.joints[32] = HAnimJoint163;

HAnimJoint HAnimJoint164 = createNode("HAnimJoint");
HAnimJoint164.USE = "Joe_r_acromioclavicular";
HAnimHumanoid27.joints[33] = HAnimJoint164;

HAnimJoint HAnimJoint165 = createNode("HAnimJoint");
HAnimJoint165.USE = "Joe_l_carpal_distal_interphalangeal_1";
HAnimHumanoid27.joints[34] = HAnimJoint165;

HAnimJoint HAnimJoint166 = createNode("HAnimJoint");
HAnimJoint166.USE = "Joe_r_carpal_distal_interphalangeal_1";
HAnimHumanoid27.joints[35] = HAnimJoint166;

HAnimJoint HAnimJoint167 = createNode("HAnimJoint");
HAnimJoint167.USE = "Joe_l_carpal_distal_interphalangeal_2";
HAnimHumanoid27.joints[36] = HAnimJoint167;

HAnimJoint HAnimJoint168 = createNode("HAnimJoint");
HAnimJoint168.USE = "Joe_r_carpal_distal_interphalangeal_2";
HAnimHumanoid27.joints[37] = HAnimJoint168;

HAnimJoint HAnimJoint169 = createNode("HAnimJoint");
HAnimJoint169.USE = "Joe_l_carpal_distal_interphalangeal_3";
HAnimHumanoid27.joints[38] = HAnimJoint169;

HAnimJoint HAnimJoint170 = createNode("HAnimJoint");
HAnimJoint170.USE = "Joe_r_carpal_distal_interphalangeal_3";
HAnimHumanoid27.joints[39] = HAnimJoint170;

HAnimJoint HAnimJoint171 = createNode("HAnimJoint");
HAnimJoint171.USE = "Joe_l_carpal_distal_interphalangeal_4";
HAnimHumanoid27.joints[40] = HAnimJoint171;

HAnimJoint HAnimJoint172 = createNode("HAnimJoint");
HAnimJoint172.USE = "Joe_r_carpal_distal_interphalangeal_4";
HAnimHumanoid27.joints[41] = HAnimJoint172;

HAnimJoint HAnimJoint173 = createNode("HAnimJoint");
HAnimJoint173.USE = "Joe_l_carpal_interphalangeal_1";
HAnimHumanoid27.joints[42] = HAnimJoint173;

HAnimJoint HAnimJoint174 = createNode("HAnimJoint");
HAnimJoint174.USE = "Joe_r_carpal_interphalangeal_1";
HAnimHumanoid27.joints[43] = HAnimJoint174;

HAnimJoint HAnimJoint175 = createNode("HAnimJoint");
HAnimJoint175.USE = "Joe_l_carpal_proximal_interphalangeal_1";
HAnimHumanoid27.joints[44] = HAnimJoint175;

HAnimJoint HAnimJoint176 = createNode("HAnimJoint");
HAnimJoint176.USE = "Joe_r_carpal_proximal_interphalangeal_1";
HAnimHumanoid27.joints[45] = HAnimJoint176;

HAnimJoint HAnimJoint177 = createNode("HAnimJoint");
HAnimJoint177.USE = "Joe_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid27.joints[46] = HAnimJoint177;

HAnimJoint HAnimJoint178 = createNode("HAnimJoint");
HAnimJoint178.USE = "Joe_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid27.joints[47] = HAnimJoint178;

HAnimJoint HAnimJoint179 = createNode("HAnimJoint");
HAnimJoint179.USE = "Joe_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid27.joints[48] = HAnimJoint179;

HAnimJoint HAnimJoint180 = createNode("HAnimJoint");
HAnimJoint180.USE = "Joe_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid27.joints[49] = HAnimJoint180;

HAnimJoint HAnimJoint181 = createNode("HAnimJoint");
HAnimJoint181.USE = "Joe_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid27.joints[50] = HAnimJoint181;

HAnimJoint HAnimJoint182 = createNode("HAnimJoint");
HAnimJoint182.USE = "Joe_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid27.joints[51] = HAnimJoint182;

HAnimJoint HAnimJoint183 = createNode("HAnimJoint");
HAnimJoint183.USE = "Joe_l_carpometacarpal_1";
HAnimHumanoid27.joints[52] = HAnimJoint183;

HAnimJoint HAnimJoint184 = createNode("HAnimJoint");
HAnimJoint184.USE = "Joe_r_carpometacarpal_1";
HAnimHumanoid27.joints[53] = HAnimJoint184;

HAnimJoint HAnimJoint185 = createNode("HAnimJoint");
HAnimJoint185.USE = "Joe_l_carpometacarpal_2";
HAnimHumanoid27.joints[54] = HAnimJoint185;

HAnimJoint HAnimJoint186 = createNode("HAnimJoint");
HAnimJoint186.USE = "Joe_r_carpometacarpal_2";
HAnimHumanoid27.joints[55] = HAnimJoint186;

HAnimJoint HAnimJoint187 = createNode("HAnimJoint");
HAnimJoint187.USE = "Joe_l_carpometacarpal_3";
HAnimHumanoid27.joints[56] = HAnimJoint187;

HAnimJoint HAnimJoint188 = createNode("HAnimJoint");
HAnimJoint188.USE = "Joe_r_carpometacarpal_3";
HAnimHumanoid27.joints[57] = HAnimJoint188;

HAnimJoint HAnimJoint189 = createNode("HAnimJoint");
HAnimJoint189.USE = "Joe_l_carpometacarpal_4";
HAnimHumanoid27.joints[58] = HAnimJoint189;

HAnimJoint HAnimJoint190 = createNode("HAnimJoint");
HAnimJoint190.USE = "Joe_r_carpometacarpal_4";
HAnimHumanoid27.joints[59] = HAnimJoint190;

HAnimJoint HAnimJoint191 = createNode("HAnimJoint");
HAnimJoint191.USE = "Joe_l_carpometacarpal_5";
HAnimHumanoid27.joints[60] = HAnimJoint191;

HAnimJoint HAnimJoint192 = createNode("HAnimJoint");
HAnimJoint192.USE = "Joe_r_carpometacarpal_5";
HAnimHumanoid27.joints[61] = HAnimJoint192;

HAnimJoint HAnimJoint193 = createNode("HAnimJoint");
HAnimJoint193.USE = "Joe_l_elbow";
HAnimHumanoid27.joints[62] = HAnimJoint193;

HAnimJoint HAnimJoint194 = createNode("HAnimJoint");
HAnimJoint194.USE = "Joe_r_elbow";
HAnimHumanoid27.joints[63] = HAnimJoint194;

HAnimJoint HAnimJoint195 = createNode("HAnimJoint");
HAnimJoint195.USE = "Joe_l_eyeball_joint";
HAnimHumanoid27.joints[64] = HAnimJoint195;

HAnimJoint HAnimJoint196 = createNode("HAnimJoint");
HAnimJoint196.USE = "Joe_r_eyeball_joint";
HAnimHumanoid27.joints[65] = HAnimJoint196;

HAnimJoint HAnimJoint197 = createNode("HAnimJoint");
HAnimJoint197.USE = "Joe_l_eyebrow_joint";
HAnimHumanoid27.joints[66] = HAnimJoint197;

HAnimJoint HAnimJoint198 = createNode("HAnimJoint");
HAnimJoint198.USE = "Joe_r_eyebrow_joint";
HAnimHumanoid27.joints[67] = HAnimJoint198;

HAnimJoint HAnimJoint199 = createNode("HAnimJoint");
HAnimJoint199.USE = "Joe_l_eyelid_joint";
HAnimHumanoid27.joints[68] = HAnimJoint199;

HAnimJoint HAnimJoint200 = createNode("HAnimJoint");
HAnimJoint200.USE = "Joe_r_eyelid_joint";
HAnimHumanoid27.joints[69] = HAnimJoint200;

HAnimJoint HAnimJoint201 = createNode("HAnimJoint");
HAnimJoint201.USE = "Joe_l_hip";
HAnimHumanoid27.joints[70] = HAnimJoint201;

HAnimJoint HAnimJoint202 = createNode("HAnimJoint");
HAnimJoint202.USE = "Joe_r_hip";
HAnimHumanoid27.joints[71] = HAnimJoint202;

HAnimJoint HAnimJoint203 = createNode("HAnimJoint");
HAnimJoint203.USE = "Joe_l_knee";
HAnimHumanoid27.joints[72] = HAnimJoint203;

HAnimJoint HAnimJoint204 = createNode("HAnimJoint");
HAnimJoint204.USE = "Joe_r_knee";
HAnimHumanoid27.joints[73] = HAnimJoint204;

HAnimJoint HAnimJoint205 = createNode("HAnimJoint");
HAnimJoint205.USE = "Joe_l_metacarpophalangeal_1";
HAnimHumanoid27.joints[74] = HAnimJoint205;

HAnimJoint HAnimJoint206 = createNode("HAnimJoint");
HAnimJoint206.USE = "Joe_r_metacarpophalangeal_1";
HAnimHumanoid27.joints[75] = HAnimJoint206;

HAnimJoint HAnimJoint207 = createNode("HAnimJoint");
HAnimJoint207.USE = "Joe_l_metacarpophalangeal_2";
HAnimHumanoid27.joints[76] = HAnimJoint207;

HAnimJoint HAnimJoint208 = createNode("HAnimJoint");
HAnimJoint208.USE = "Joe_r_metacarpophalangeal_2";
HAnimHumanoid27.joints[77] = HAnimJoint208;

HAnimJoint HAnimJoint209 = createNode("HAnimJoint");
HAnimJoint209.USE = "Joe_l_metacarpophalangeal_3";
HAnimHumanoid27.joints[78] = HAnimJoint209;

HAnimJoint HAnimJoint210 = createNode("HAnimJoint");
HAnimJoint210.USE = "Joe_r_metacarpophalangeal_3";
HAnimHumanoid27.joints[79] = HAnimJoint210;

HAnimJoint HAnimJoint211 = createNode("HAnimJoint");
HAnimJoint211.USE = "Joe_l_metacarpophalangeal_4";
HAnimHumanoid27.joints[80] = HAnimJoint211;

HAnimJoint HAnimJoint212 = createNode("HAnimJoint");
HAnimJoint212.USE = "Joe_r_metacarpophalangeal_4";
HAnimHumanoid27.joints[81] = HAnimJoint212;

HAnimJoint HAnimJoint213 = createNode("HAnimJoint");
HAnimJoint213.USE = "Joe_l_metacarpophalangeal_5";
HAnimHumanoid27.joints[82] = HAnimJoint213;

HAnimJoint HAnimJoint214 = createNode("HAnimJoint");
HAnimJoint214.USE = "Joe_r_metacarpophalangeal_5";
HAnimHumanoid27.joints[83] = HAnimJoint214;

HAnimJoint HAnimJoint215 = createNode("HAnimJoint");
HAnimJoint215.USE = "Joe_l_metatarsophalangeal_1";
HAnimHumanoid27.joints[84] = HAnimJoint215;

HAnimJoint HAnimJoint216 = createNode("HAnimJoint");
HAnimJoint216.USE = "Joe_r_metatarsophalangeal_1";
HAnimHumanoid27.joints[85] = HAnimJoint216;

HAnimJoint HAnimJoint217 = createNode("HAnimJoint");
HAnimJoint217.USE = "Joe_l_radiocarpal";
HAnimHumanoid27.joints[86] = HAnimJoint217;

HAnimJoint HAnimJoint218 = createNode("HAnimJoint");
HAnimJoint218.USE = "Joe_r_radiocarpal";
HAnimHumanoid27.joints[87] = HAnimJoint218;

HAnimJoint HAnimJoint219 = createNode("HAnimJoint");
HAnimJoint219.USE = "Joe_l_shoulder";
HAnimHumanoid27.joints[88] = HAnimJoint219;

HAnimJoint HAnimJoint220 = createNode("HAnimJoint");
HAnimJoint220.USE = "Joe_r_shoulder";
HAnimHumanoid27.joints[89] = HAnimJoint220;

HAnimJoint HAnimJoint221 = createNode("HAnimJoint");
HAnimJoint221.USE = "Joe_l_sternoclavicular";
HAnimHumanoid27.joints[90] = HAnimJoint221;

HAnimJoint HAnimJoint222 = createNode("HAnimJoint");
HAnimJoint222.USE = "Joe_r_sternoclavicular";
HAnimHumanoid27.joints[91] = HAnimJoint222;

HAnimJoint HAnimJoint223 = createNode("HAnimJoint");
HAnimJoint223.USE = "Joe_l_talocrural";
HAnimHumanoid27.joints[92] = HAnimJoint223;

HAnimJoint HAnimJoint224 = createNode("HAnimJoint");
HAnimJoint224.USE = "Joe_r_talocrural";
HAnimHumanoid27.joints[93] = HAnimJoint224;

HAnimJoint HAnimJoint225 = createNode("HAnimJoint");
HAnimJoint225.USE = "Joe_l_tarsal_distal_interphalangeal_1";
HAnimHumanoid27.joints[94] = HAnimJoint225;

HAnimJoint HAnimJoint226 = createNode("HAnimJoint");
HAnimJoint226.USE = "Joe_r_tarsal_distal_interphalangeal_1";
HAnimHumanoid27.joints[95] = HAnimJoint226;

HAnimJoint HAnimJoint227 = createNode("HAnimJoint");
HAnimJoint227.USE = "Joe_l_tarsometatarsal_1";
HAnimHumanoid27.joints[96] = HAnimJoint227;

HAnimJoint HAnimJoint228 = createNode("HAnimJoint");
HAnimJoint228.USE = "Joe_r_tarsometatarsal_1";
HAnimHumanoid27.joints[97] = HAnimJoint228;

Coordinate Coordinate229 = createNode("Coordinate");
Coordinate229.DEF = "Joe_SkinCoord";
Coordinate229.point = new MFVec3f(new float[0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.255,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168]);
HAnimHumanoid27.skinCoord = Coordinate229;

Shape Shape230 = createNode("Shape");
Shape230.DEF = "Joe_Shape";
Appearance Appearance231 = createNode("Appearance");
Appearance231.DEF = "Joe_skin_Appearance";
Material Material232 = createNode("Material");
Material232.DEF = "Joe_skin_Material";
Material232.diffuseColor = new SFColor(new float[0.3,0.3,0.6]);
Material232.emissiveColor = new SFColor(new float[0.3,0.3,0.6]);
Appearance231.material = Material232;

ImageTexture ImageTexture233 = createNode("ImageTexture");
ImageTexture233.DEF = "JoeSkinImageTexture";
ImageTexture233.url = new MFString(new java.lang.String["JoeBodyTexture29.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JoeBodyTexture29.png"]);
Appearance231.texture = ImageTexture233;

TextureTransform TextureTransform234 = createNode("TextureTransform");
TextureTransform234.DEF = "KickTextureTransform";
Appearance231.textureTransform = TextureTransform234;

Shape230.appearance = Appearance231;

IndexedFaceSet IndexedFaceSet235 = createNode("IndexedFaceSet");
IndexedFaceSet235.DEF = "Joe_skin_IndexedFaceSet";
IndexedFaceSet235.creaseAngle = 3.14;
IndexedFaceSet235.coordIndex = new MFInt32(new int[0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
TextureCoordinate TextureCoordinate236 = createNode("TextureCoordinate");
TextureCoordinate236.point = new MFVec2f(new float[0,0,0.5,0.5,0.5,0,0,0.5]);
IndexedFaceSet235.texCoord = TextureCoordinate236;

Coordinate Coordinate237 = createNode("Coordinate");
Coordinate237.USE = "Joe_SkinCoord";
IndexedFaceSet235.coord = Coordinate237;

Shape230.geometry = IndexedFaceSet235;

HAnimHumanoid27.skin[98] = Shape230;

Group26.children = new MFNode();

Group26.children[0] = HAnimHumanoid27;

children[10] = Group26;

Group Group238 = createNode("Group");
TimeSensor TimeSensor239 = createNode("TimeSensor");
TimeSensor239.DEF = "KickTimer";
TimeSensor239.cycleInterval = 3.73;
TimeSensor239.loop = True;
Group238.children = new MFNode();

Group238.children[0] = TimeSensor239;

OrientationInterpolator OrientationInterpolator240 = createNode("OrientationInterpolator");
OrientationInterpolator240.DEF = "HumanoidRoot_RotationInterpolator";
OrientationInterpolator240.key = new MFFloat(new float[0,0.1,0.4,0.6,1]);
OrientationInterpolator240.keyValue = new MFRotation(new float[1,0,0,0.5,1,0,0,0.5,-1,0,0,0.1,-1,0,0,0.5,-1,0,0,0.5]);
Group238.children[1] = OrientationInterpolator240;

PositionInterpolator PositionInterpolator241 = createNode("PositionInterpolator");
PositionInterpolator241.DEF = "HumanoidRoot_TranslationInterpolator";
PositionInterpolator241.key = new MFFloat(new float[0,0.2,0.6,1]);
PositionInterpolator241.keyValue = new MFVec3f(new float[1,0.3,-1,0.4,-0.04,-0.4,-0.18,0.1,0,-0.2,0.15,0.15]);
Group238.children[2] = PositionInterpolator241;

OrientationInterpolator OrientationInterpolator242 = createNode("OrientationInterpolator");
OrientationInterpolator242.DEF = "sacroiliac_RotationInterpolator";
OrientationInterpolator242.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator242.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[3] = OrientationInterpolator242;

OrientationInterpolator OrientationInterpolator243 = createNode("OrientationInterpolator");
OrientationInterpolator243.DEF = "l_hip_RotationInterpolator";
OrientationInterpolator243.key = new MFFloat(new float[0,0.1,0.3,0.45,1]);
OrientationInterpolator243.keyValue = new MFRotation(new float[-1,0,0,1.5,-1,0,0,1,0,0,1,0,1,0,0,0.5,1,0,0,1]);
Group238.children[4] = OrientationInterpolator243;

OrientationInterpolator OrientationInterpolator244 = createNode("OrientationInterpolator");
OrientationInterpolator244.DEF = "l_knee_RotationInterpolator";
OrientationInterpolator244.key = new MFFloat(new float[0,0.2,0.35,0.5,1]);
OrientationInterpolator244.keyValue = new MFRotation(new float[1,0,0,1,0,0,1,0,0,0,1,0.2,1,0,1,0.5,1,0,0,1.4]);
Group238.children[5] = OrientationInterpolator244;

OrientationInterpolator OrientationInterpolator245 = createNode("OrientationInterpolator");
OrientationInterpolator245.DEF = "l_ankle_RotationInterpolator";
OrientationInterpolator245.key = new MFFloat(new float[0,0.25,1]);
OrientationInterpolator245.keyValue = new MFRotation(new float[-1,0,0,1,0,0,1,0,1,0,0,1]);
Group238.children[6] = OrientationInterpolator245;

OrientationInterpolator OrientationInterpolator246 = createNode("OrientationInterpolator");
OrientationInterpolator246.DEF = "l_subtalar_RotationInterpolator";
OrientationInterpolator246.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator246.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[7] = OrientationInterpolator246;

OrientationInterpolator OrientationInterpolator247 = createNode("OrientationInterpolator");
OrientationInterpolator247.DEF = "l_midtarsal_RotationInterpolator";
OrientationInterpolator247.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator247.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[8] = OrientationInterpolator247;

OrientationInterpolator OrientationInterpolator248 = createNode("OrientationInterpolator");
OrientationInterpolator248.DEF = "l_metatarsal_RotationInterpolator";
OrientationInterpolator248.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator248.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[9] = OrientationInterpolator248;

OrientationInterpolator OrientationInterpolator249 = createNode("OrientationInterpolator");
OrientationInterpolator249.DEF = "r_hip_RotationInterpolator";
OrientationInterpolator249.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator249.keyValue = new MFRotation(new float[1,0,0,1,1,0,0,1,-1,0,0,1,-1,0,0,1,-1,0,0,1]);
Group238.children[10] = OrientationInterpolator249;

OrientationInterpolator OrientationInterpolator250 = createNode("OrientationInterpolator");
OrientationInterpolator250.DEF = "r_knee_RotationInterpolator";
OrientationInterpolator250.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator250.keyValue = new MFRotation(new float[1,0,0,0.1,0,0,1,0,1,0,0,1,1,0,0,1,1,0,0,1.5]);
Group238.children[11] = OrientationInterpolator250;

OrientationInterpolator OrientationInterpolator251 = createNode("OrientationInterpolator");
OrientationInterpolator251.DEF = "r_ankle_RotationInterpolator";
OrientationInterpolator251.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator251.keyValue = new MFRotation(new float[-1,0,0,1,0,0,1,0,1,0,0,1,1,0,0,1,1,0,0,0.5]);
Group238.children[12] = OrientationInterpolator251;

OrientationInterpolator OrientationInterpolator252 = createNode("OrientationInterpolator");
OrientationInterpolator252.DEF = "r_subtalar_RotationInterpolator";
OrientationInterpolator252.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator252.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[13] = OrientationInterpolator252;

OrientationInterpolator OrientationInterpolator253 = createNode("OrientationInterpolator");
OrientationInterpolator253.DEF = "r_midtarsal_RotationInterpolator";
OrientationInterpolator253.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator253.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[14] = OrientationInterpolator253;

OrientationInterpolator OrientationInterpolator254 = createNode("OrientationInterpolator");
OrientationInterpolator254.DEF = "r_metatarsal_RotationInterpolator";
OrientationInterpolator254.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator254.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[15] = OrientationInterpolator254;

OrientationInterpolator OrientationInterpolator255 = createNode("OrientationInterpolator");
OrientationInterpolator255.DEF = "vl5_RotationInterpolator";
OrientationInterpolator255.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator255.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[16] = OrientationInterpolator255;

OrientationInterpolator OrientationInterpolator256 = createNode("OrientationInterpolator");
OrientationInterpolator256.DEF = "vl4_RotationInterpolator";
OrientationInterpolator256.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator256.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[17] = OrientationInterpolator256;

OrientationInterpolator OrientationInterpolator257 = createNode("OrientationInterpolator");
OrientationInterpolator257.DEF = "vl3_RotationInterpolator";
OrientationInterpolator257.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator257.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[18] = OrientationInterpolator257;

OrientationInterpolator OrientationInterpolator258 = createNode("OrientationInterpolator");
OrientationInterpolator258.DEF = "vl2_RotationInterpolator";
OrientationInterpolator258.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator258.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[19] = OrientationInterpolator258;

OrientationInterpolator OrientationInterpolator259 = createNode("OrientationInterpolator");
OrientationInterpolator259.DEF = "vl1_RotationInterpolator";
OrientationInterpolator259.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator259.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[20] = OrientationInterpolator259;

OrientationInterpolator OrientationInterpolator260 = createNode("OrientationInterpolator");
OrientationInterpolator260.DEF = "vt12_RotationInterpolator";
OrientationInterpolator260.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator260.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[21] = OrientationInterpolator260;

OrientationInterpolator OrientationInterpolator261 = createNode("OrientationInterpolator");
OrientationInterpolator261.DEF = "vt11_RotationInterpolator";
OrientationInterpolator261.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator261.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[22] = OrientationInterpolator261;

OrientationInterpolator OrientationInterpolator262 = createNode("OrientationInterpolator");
OrientationInterpolator262.DEF = "vt10_RotationInterpolator";
OrientationInterpolator262.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator262.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[23] = OrientationInterpolator262;

OrientationInterpolator OrientationInterpolator263 = createNode("OrientationInterpolator");
OrientationInterpolator263.DEF = "vt9_RotationInterpolator";
OrientationInterpolator263.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator263.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[24] = OrientationInterpolator263;

OrientationInterpolator OrientationInterpolator264 = createNode("OrientationInterpolator");
OrientationInterpolator264.DEF = "vt8_RotationInterpolator";
OrientationInterpolator264.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator264.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[25] = OrientationInterpolator264;

OrientationInterpolator OrientationInterpolator265 = createNode("OrientationInterpolator");
OrientationInterpolator265.DEF = "vt7_RotationInterpolator";
OrientationInterpolator265.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator265.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[26] = OrientationInterpolator265;

OrientationInterpolator OrientationInterpolator266 = createNode("OrientationInterpolator");
OrientationInterpolator266.DEF = "vt6_RotationInterpolator";
OrientationInterpolator266.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator266.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[27] = OrientationInterpolator266;

OrientationInterpolator OrientationInterpolator267 = createNode("OrientationInterpolator");
OrientationInterpolator267.DEF = "vt5_RotationInterpolator";
OrientationInterpolator267.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator267.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[28] = OrientationInterpolator267;

OrientationInterpolator OrientationInterpolator268 = createNode("OrientationInterpolator");
OrientationInterpolator268.DEF = "vt4_RotationInterpolator";
OrientationInterpolator268.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator268.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[29] = OrientationInterpolator268;

OrientationInterpolator OrientationInterpolator269 = createNode("OrientationInterpolator");
OrientationInterpolator269.DEF = "vt3_RotationInterpolator";
OrientationInterpolator269.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator269.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[30] = OrientationInterpolator269;

OrientationInterpolator OrientationInterpolator270 = createNode("OrientationInterpolator");
OrientationInterpolator270.DEF = "vt2_RotationInterpolator";
OrientationInterpolator270.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator270.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[31] = OrientationInterpolator270;

OrientationInterpolator OrientationInterpolator271 = createNode("OrientationInterpolator");
OrientationInterpolator271.DEF = "vt1_RotationInterpolator";
OrientationInterpolator271.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator271.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[32] = OrientationInterpolator271;

OrientationInterpolator OrientationInterpolator272 = createNode("OrientationInterpolator");
OrientationInterpolator272.DEF = "vc7_RotationInterpolator";
OrientationInterpolator272.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator272.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[33] = OrientationInterpolator272;

OrientationInterpolator OrientationInterpolator273 = createNode("OrientationInterpolator");
OrientationInterpolator273.DEF = "vc6_RotationInterpolator";
OrientationInterpolator273.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator273.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[34] = OrientationInterpolator273;

OrientationInterpolator OrientationInterpolator274 = createNode("OrientationInterpolator");
OrientationInterpolator274.DEF = "vc5_RotationInterpolator";
OrientationInterpolator274.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator274.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[35] = OrientationInterpolator274;

OrientationInterpolator OrientationInterpolator275 = createNode("OrientationInterpolator");
OrientationInterpolator275.DEF = "vc4_RotationInterpolator";
OrientationInterpolator275.key = new MFFloat(new float[0,0.3,0.4,1]);
OrientationInterpolator275.keyValue = new MFRotation(new float[1,0,1,0.25,-1,0,-1,0.35,1,0,0,0.75,1,0,1,0.5]);
Group238.children[36] = OrientationInterpolator275;

OrientationInterpolator OrientationInterpolator276 = createNode("OrientationInterpolator");
OrientationInterpolator276.DEF = "vc3_RotationInterpolator";
OrientationInterpolator276.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator276.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[37] = OrientationInterpolator276;

OrientationInterpolator OrientationInterpolator277 = createNode("OrientationInterpolator");
OrientationInterpolator277.DEF = "vc2_RotationInterpolator";
OrientationInterpolator277.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator277.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[38] = OrientationInterpolator277;

OrientationInterpolator OrientationInterpolator278 = createNode("OrientationInterpolator");
OrientationInterpolator278.DEF = "vc1_RotationInterpolator";
OrientationInterpolator278.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator278.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[39] = OrientationInterpolator278;

OrientationInterpolator OrientationInterpolator279 = createNode("OrientationInterpolator");
OrientationInterpolator279.DEF = "skullbase_RotationInterpolator";
OrientationInterpolator279.key = new MFFloat(new float[0,0.2,0.75,1]);
OrientationInterpolator279.keyValue = new MFRotation(new float[0,-1,0,0.5,0,0,1,0,0,0,1,0,0,1,0,0.35]);
Group238.children[40] = OrientationInterpolator279;

OrientationInterpolator OrientationInterpolator280 = createNode("OrientationInterpolator");
OrientationInterpolator280.DEF = "l_eyelid_joint_RotationInterpolator";
OrientationInterpolator280.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator280.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[41] = OrientationInterpolator280;

OrientationInterpolator OrientationInterpolator281 = createNode("OrientationInterpolator");
OrientationInterpolator281.DEF = "l_eyeball_joint_RotationInterpolator";
OrientationInterpolator281.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator281.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[42] = OrientationInterpolator281;

OrientationInterpolator OrientationInterpolator282 = createNode("OrientationInterpolator");
OrientationInterpolator282.DEF = "l_eyebrow_joint_RotationInterpolator";
OrientationInterpolator282.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator282.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[43] = OrientationInterpolator282;

OrientationInterpolator OrientationInterpolator283 = createNode("OrientationInterpolator");
OrientationInterpolator283.DEF = "r_eyelid_joint_RotationInterpolator";
OrientationInterpolator283.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator283.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[44] = OrientationInterpolator283;

OrientationInterpolator OrientationInterpolator284 = createNode("OrientationInterpolator");
OrientationInterpolator284.DEF = "r_eyeball_joint_RotationInterpolator";
OrientationInterpolator284.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator284.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[45] = OrientationInterpolator284;

OrientationInterpolator OrientationInterpolator285 = createNode("OrientationInterpolator");
OrientationInterpolator285.DEF = "r_eyebrow_joint_RotationInterpolator";
OrientationInterpolator285.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator285.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[46] = OrientationInterpolator285;

OrientationInterpolator OrientationInterpolator286 = createNode("OrientationInterpolator");
OrientationInterpolator286.DEF = "temporomandibular_RotationInterpolator";
OrientationInterpolator286.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator286.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[47] = OrientationInterpolator286;

OrientationInterpolator OrientationInterpolator287 = createNode("OrientationInterpolator");
OrientationInterpolator287.DEF = "l_sternoclavicular_RotationInterpolator";
OrientationInterpolator287.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator287.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[48] = OrientationInterpolator287;

OrientationInterpolator OrientationInterpolator288 = createNode("OrientationInterpolator");
OrientationInterpolator288.DEF = "l_acromioclavicular_RotationInterpolator";
OrientationInterpolator288.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator288.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[49] = OrientationInterpolator288;

OrientationInterpolator OrientationInterpolator289 = createNode("OrientationInterpolator");
OrientationInterpolator289.DEF = "l_shoulder_RotationInterpolator";
OrientationInterpolator289.key = new MFFloat(new float[0,0.4,1]);
OrientationInterpolator289.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,-1,0,1,1.75]);
Group238.children[50] = OrientationInterpolator289;

OrientationInterpolator OrientationInterpolator290 = createNode("OrientationInterpolator");
OrientationInterpolator290.DEF = "l_elbow_RotationInterpolator";
OrientationInterpolator290.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator290.keyValue = new MFRotation(new float[-1,0,0,3,-1,0,0,0.75,-1,-1,0,0.5]);
Group238.children[51] = OrientationInterpolator290;

OrientationInterpolator OrientationInterpolator291 = createNode("OrientationInterpolator");
OrientationInterpolator291.DEF = "l_wrist_RotationInterpolator";
OrientationInterpolator291.key = new MFFloat(new float[0,0.4,0.8,1]);
OrientationInterpolator291.keyValue = new MFRotation(new float[0,0,1,0,0,1,0,1.3,0,-0.5,1,1.3,0,0,1,0]);
Group238.children[52] = OrientationInterpolator291;

OrientationInterpolator OrientationInterpolator292 = createNode("OrientationInterpolator");
OrientationInterpolator292.DEF = "l_thumb1_RotationInterpolator";
OrientationInterpolator292.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator292.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[53] = OrientationInterpolator292;

OrientationInterpolator OrientationInterpolator293 = createNode("OrientationInterpolator");
OrientationInterpolator293.DEF = "l_thumb2_RotationInterpolator";
OrientationInterpolator293.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator293.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[54] = OrientationInterpolator293;

OrientationInterpolator OrientationInterpolator294 = createNode("OrientationInterpolator");
OrientationInterpolator294.DEF = "l_thumb3_RotationInterpolator";
OrientationInterpolator294.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator294.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[55] = OrientationInterpolator294;

OrientationInterpolator OrientationInterpolator295 = createNode("OrientationInterpolator");
OrientationInterpolator295.DEF = "l_index0_RotationInterpolator";
OrientationInterpolator295.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator295.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[56] = OrientationInterpolator295;

OrientationInterpolator OrientationInterpolator296 = createNode("OrientationInterpolator");
OrientationInterpolator296.DEF = "l_index1_RotationInterpolator";
OrientationInterpolator296.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator296.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[57] = OrientationInterpolator296;

OrientationInterpolator OrientationInterpolator297 = createNode("OrientationInterpolator");
OrientationInterpolator297.DEF = "l_index2_RotationInterpolator";
OrientationInterpolator297.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator297.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[58] = OrientationInterpolator297;

OrientationInterpolator OrientationInterpolator298 = createNode("OrientationInterpolator");
OrientationInterpolator298.DEF = "l_index3_RotationInterpolator";
OrientationInterpolator298.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator298.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[59] = OrientationInterpolator298;

OrientationInterpolator OrientationInterpolator299 = createNode("OrientationInterpolator");
OrientationInterpolator299.DEF = "l_middle0_RotationInterpolator";
OrientationInterpolator299.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator299.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[60] = OrientationInterpolator299;

OrientationInterpolator OrientationInterpolator300 = createNode("OrientationInterpolator");
OrientationInterpolator300.DEF = "l_middle1_RotationInterpolator";
OrientationInterpolator300.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator300.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[61] = OrientationInterpolator300;

OrientationInterpolator OrientationInterpolator301 = createNode("OrientationInterpolator");
OrientationInterpolator301.DEF = "l_middle2_RotationInterpolator";
OrientationInterpolator301.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator301.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[62] = OrientationInterpolator301;

OrientationInterpolator OrientationInterpolator302 = createNode("OrientationInterpolator");
OrientationInterpolator302.DEF = "l_middle3_RotationInterpolator";
OrientationInterpolator302.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator302.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[63] = OrientationInterpolator302;

OrientationInterpolator OrientationInterpolator303 = createNode("OrientationInterpolator");
OrientationInterpolator303.DEF = "l_ring0_RotationInterpolator";
OrientationInterpolator303.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator303.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[64] = OrientationInterpolator303;

OrientationInterpolator OrientationInterpolator304 = createNode("OrientationInterpolator");
OrientationInterpolator304.DEF = "l_ring1_RotationInterpolator";
OrientationInterpolator304.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator304.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[65] = OrientationInterpolator304;

OrientationInterpolator OrientationInterpolator305 = createNode("OrientationInterpolator");
OrientationInterpolator305.DEF = "l_ring2_RotationInterpolator";
OrientationInterpolator305.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator305.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[66] = OrientationInterpolator305;

OrientationInterpolator OrientationInterpolator306 = createNode("OrientationInterpolator");
OrientationInterpolator306.DEF = "l_ring3_RotationInterpolator";
OrientationInterpolator306.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator306.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[67] = OrientationInterpolator306;

OrientationInterpolator OrientationInterpolator307 = createNode("OrientationInterpolator");
OrientationInterpolator307.DEF = "l_pinky0_RotationInterpolator";
OrientationInterpolator307.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator307.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[68] = OrientationInterpolator307;

OrientationInterpolator OrientationInterpolator308 = createNode("OrientationInterpolator");
OrientationInterpolator308.DEF = "l_pinky1_RotationInterpolator";
OrientationInterpolator308.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator308.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[69] = OrientationInterpolator308;

OrientationInterpolator OrientationInterpolator309 = createNode("OrientationInterpolator");
OrientationInterpolator309.DEF = "l_pinky2_RotationInterpolator";
OrientationInterpolator309.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator309.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[70] = OrientationInterpolator309;

OrientationInterpolator OrientationInterpolator310 = createNode("OrientationInterpolator");
OrientationInterpolator310.DEF = "l_pinky3_RotationInterpolator";
OrientationInterpolator310.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator310.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[71] = OrientationInterpolator310;

OrientationInterpolator OrientationInterpolator311 = createNode("OrientationInterpolator");
OrientationInterpolator311.DEF = "r_sternoclavicular_RotationInterpolator";
OrientationInterpolator311.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator311.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[72] = OrientationInterpolator311;

OrientationInterpolator OrientationInterpolator312 = createNode("OrientationInterpolator");
OrientationInterpolator312.DEF = "r_acromioclavicular_RotationInterpolator";
OrientationInterpolator312.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator312.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[73] = OrientationInterpolator312;

OrientationInterpolator OrientationInterpolator313 = createNode("OrientationInterpolator");
OrientationInterpolator313.DEF = "r_shoulder_RotationInterpolator";
OrientationInterpolator313.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator313.keyValue = new MFRotation(new float[0,0,-1,2.5,0,0,-1,1.5,0,0,-1,1.75]);
Group238.children[74] = OrientationInterpolator313;

OrientationInterpolator OrientationInterpolator314 = createNode("OrientationInterpolator");
OrientationInterpolator314.DEF = "r_elbow_RotationInterpolator";
OrientationInterpolator314.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator314.keyValue = new MFRotation(new float[-1,0,0,3,-1,0,0,0.75,-1,-1,0,0.5]);
Group238.children[75] = OrientationInterpolator314;

OrientationInterpolator OrientationInterpolator315 = createNode("OrientationInterpolator");
OrientationInterpolator315.DEF = "r_wrist_RotationInterpolator";
OrientationInterpolator315.key = new MFFloat(new float[0,0.5,0.7,1]);
OrientationInterpolator315.keyValue = new MFRotation(new float[0,1,0,0.3,0,0,1,0,0,0,-1,1,0,-1,0,0.3]);
Group238.children[76] = OrientationInterpolator315;

OrientationInterpolator OrientationInterpolator316 = createNode("OrientationInterpolator");
OrientationInterpolator316.DEF = "r_thumb1_RotationInterpolator";
OrientationInterpolator316.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator316.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[77] = OrientationInterpolator316;

OrientationInterpolator OrientationInterpolator317 = createNode("OrientationInterpolator");
OrientationInterpolator317.DEF = "r_thumb2_RotationInterpolator";
OrientationInterpolator317.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator317.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[78] = OrientationInterpolator317;

OrientationInterpolator OrientationInterpolator318 = createNode("OrientationInterpolator");
OrientationInterpolator318.DEF = "r_thumb3_RotationInterpolator";
OrientationInterpolator318.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator318.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group238.children[79] = OrientationInterpolator318;

OrientationInterpolator OrientationInterpolator319 = createNode("OrientationInterpolator");
OrientationInterpolator319.DEF = "r_index0_RotationInterpolator";
OrientationInterpolator319.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator319.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0]);
Group238.children[80] = OrientationInterpolator319;

OrientationInterpolator OrientationInterpolator320 = createNode("OrientationInterpolator");
OrientationInterpolator320.DEF = "r_index1_RotationInterpolator";
OrientationInterpolator320.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator320.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group238.children[81] = OrientationInterpolator320;

OrientationInterpolator OrientationInterpolator321 = createNode("OrientationInterpolator");
OrientationInterpolator321.DEF = "r_index2_RotationInterpolator";
OrientationInterpolator321.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator321.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group238.children[82] = OrientationInterpolator321;

OrientationInterpolator OrientationInterpolator322 = createNode("OrientationInterpolator");
OrientationInterpolator322.DEF = "r_index3_RotationInterpolator";
OrientationInterpolator322.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator322.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group238.children[83] = OrientationInterpolator322;

OrientationInterpolator OrientationInterpolator323 = createNode("OrientationInterpolator");
OrientationInterpolator323.DEF = "r_middle0_RotationInterpolator";
OrientationInterpolator323.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator323.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0]);
Group238.children[84] = OrientationInterpolator323;

OrientationInterpolator OrientationInterpolator324 = createNode("OrientationInterpolator");
OrientationInterpolator324.DEF = "r_middle1_RotationInterpolator";
OrientationInterpolator324.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator324.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group238.children[85] = OrientationInterpolator324;

OrientationInterpolator OrientationInterpolator325 = createNode("OrientationInterpolator");
OrientationInterpolator325.DEF = "r_middle2_RotationInterpolator";
OrientationInterpolator325.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator325.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group238.children[86] = OrientationInterpolator325;

OrientationInterpolator OrientationInterpolator326 = createNode("OrientationInterpolator");
OrientationInterpolator326.DEF = "r_middle3_RotationInterpolator";
OrientationInterpolator326.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator326.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group238.children[87] = OrientationInterpolator326;

OrientationInterpolator OrientationInterpolator327 = createNode("OrientationInterpolator");
OrientationInterpolator327.DEF = "r_ring0_RotationInterpolator";
OrientationInterpolator327.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator327.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0]);
Group238.children[88] = OrientationInterpolator327;

OrientationInterpolator OrientationInterpolator328 = createNode("OrientationInterpolator");
OrientationInterpolator328.DEF = "r_ring1_RotationInterpolator";
OrientationInterpolator328.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator328.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group238.children[89] = OrientationInterpolator328;

OrientationInterpolator OrientationInterpolator329 = createNode("OrientationInterpolator");
OrientationInterpolator329.DEF = "r_ring2_RotationInterpolator";
OrientationInterpolator329.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator329.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group238.children[90] = OrientationInterpolator329;

OrientationInterpolator OrientationInterpolator330 = createNode("OrientationInterpolator");
OrientationInterpolator330.DEF = "r_ring3_RotationInterpolator";
OrientationInterpolator330.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator330.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group238.children[91] = OrientationInterpolator330;

OrientationInterpolator OrientationInterpolator331 = createNode("OrientationInterpolator");
OrientationInterpolator331.DEF = "r_pinky0_RotationInterpolator";
OrientationInterpolator331.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator331.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0]);
Group238.children[92] = OrientationInterpolator331;

OrientationInterpolator OrientationInterpolator332 = createNode("OrientationInterpolator");
OrientationInterpolator332.DEF = "r_pinky1_RotationInterpolator";
OrientationInterpolator332.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator332.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group238.children[93] = OrientationInterpolator332;

OrientationInterpolator OrientationInterpolator333 = createNode("OrientationInterpolator");
OrientationInterpolator333.DEF = "r_pinky2_RotationInterpolator";
OrientationInterpolator333.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator333.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group238.children[94] = OrientationInterpolator333;

OrientationInterpolator OrientationInterpolator334 = createNode("OrientationInterpolator");
OrientationInterpolator334.DEF = "r_pinky3_RotationInterpolator";
OrientationInterpolator334.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator334.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group238.children[95] = OrientationInterpolator334;

children[11] = Group238;

Group Group335 = createNode("Group");
Group335.DEF = "DisplacersAnimationGroup";
ScalarInterpolator ScalarInterpolator336 = createNode("ScalarInterpolator");
ScalarInterpolator336.DEF = "skull_tipInterpolator";
ScalarInterpolator336.key = new MFFloat(new float[0,0.1,0.2,0.35,0.6,0.7,0.85,0.88,0.94,0.97,1]);
ScalarInterpolator336.keyValue = new MFFloat(new float[0,0,0,0,0.2,0.4,1,0,1,0.4,0]);
Group335.children = new MFNode();

Group335.children[0] = ScalarInterpolator336;

children[12] = Group335;

Group Group337 = createNode("Group");
Group337.DEF = "SkinTextureTransformAnimationGroup";
ScalarInterpolator ScalarInterpolator338 = createNode("ScalarInterpolator");
ScalarInterpolator338.DEF = "SkinInterpolator";
ScalarInterpolator338.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.7,0.8,1]);
ScalarInterpolator338.keyValue = new MFFloat(new float[0,0,0,0,0,1,2,0]);
Group337.children = new MFNode();

Group337.children[0] = ScalarInterpolator338;

children[13] = Group337;

Group Group339 = createNode("Group");
Transform Transform340 = createNode("Transform");
Transform340.DEF = "SBall";
Transform340.translation = new SFVec3f(new float[-0.916,0.37,-0.92]);
Transform340.rotation = new SFRotation(new float[0.7,0,0.7,0.1]);
Transform340.scale = new SFVec3f(new float[0.23,0.23,0.23]);
Shape Shape341 = createNode("Shape");
Shape341.DEF = "ball_Shape";
Appearance Appearance342 = createNode("Appearance");
Appearance342.DEF = "ball_Appearance";
Material Material343 = createNode("Material");
Material343.DEF = "ball_Material";
Material343.diffuseColor = new SFColor(new float[0.3,0.3,1]);
Material343.emissiveColor = new SFColor(new float[0.3,0.3,0.33]);
Appearance342.material = Material343;

ImageTexture ImageTexture344 = createNode("ImageTexture");
ImageTexture344.USE = "JoeSkinImageTexture";
Appearance342.texture = ImageTexture344;

Shape341.appearance = Appearance342;

IndexedFaceSet IndexedFaceSet345 = createNode("IndexedFaceSet");
IndexedFaceSet345.DEF = "ball_IndexedFaceSet";
IndexedFaceSet345.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,1,14,2,-1,2,14,15,-1,2,15,3,-1,3,15,16,-1,3,16,4,-1,4,16,17,-1,4,17,5,-1,5,17,18,-1,5,18,6,-1,6,18,19,-1,6,19,7,-1,7,19,20,-1,7,20,8,-1,8,20,21,-1,8,21,9,-1,9,21,22,-1,9,22,10,-1,10,22,23,-1,10,23,11,-1,11,23,24,-1,11,24,12,-1,12,24,13,-1,12,13,1,-1,13,25,26,-1,13,26,14,-1,14,26,27,-1,14,27,15,-1,15,27,28,-1,15,28,16,-1,16,28,29,-1,16,29,17,-1,17,29,30,-1,17,30,18,-1,18,30,31,-1,18,31,19,-1,19,31,32,-1,19,32,20,-1,20,32,33,-1,20,33,21,-1,21,33,34,-1,21,34,22,-1,22,34,35,-1,22,35,23,-1,23,35,36,-1,23,36,24,-1,24,36,25,-1,24,25,13,-1,25,37,38,-1,25,38,26,-1,26,38,39,-1,26,39,27,-1,27,39,40,-1,27,40,28,-1,28,40,41,-1,28,41,29,-1,29,41,42,-1,29,42,30,-1,30,42,43,-1,30,43,31,-1,31,43,44,-1,31,44,32,-1,32,44,45,-1,32,45,33,-1,33,45,46,-1,33,46,34,-1,34,46,47,-1,34,47,35,-1,35,47,48,-1,35,48,36,-1,36,48,37,-1,36,37,25,-1,37,49,50,-1,37,50,38,-1,38,50,51,-1,38,51,39,-1,39,51,52,-1,39,52,40,-1,40,52,53,-1,40,53,41,-1,41,53,54,-1,41,54,42,-1,42,54,55,-1,42,55,43,-1,43,55,56,-1,43,56,44,-1,44,56,57,-1,44,57,45,-1,45,57,58,-1,45,58,46,-1,46,58,59,-1,46,59,47,-1,47,59,60,-1,47,60,48,-1,48,60,49,-1,48,49,37,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]);
Coordinate Coordinate346 = createNode("Coordinate");
Coordinate346.DEF = "Ball_Coordinates";
Coordinate346.point = new MFVec3f(new float[0,0.4675,0,0,0.4049,-0.2338,-0.1169,0.4049,-0.2024,-0.2024,0.4049,-0.1169,-0.2338,0.4049,0,-0.2024,0.4049,0.1169,-0.1169,0.4049,0.2024,0,0.4049,0.2338,0.1169,0.4049,0.2024,0.2024,0.4049,0.1169,0.2338,0.4049,0,0.2024,0.4049,-0.1169,0.1169,0.4049,-0.2024,0,0.2338,-0.4049,-0.2024,0.2338,-0.3506,-0.3506,0.2338,-0.2024,-0.4049,0.2338,0,-0.3506,0.2338,0.2024,-0.2024,0.2338,0.3506,0,0.2338,0.4049,0.2024,0.2338,0.3506,0.3506,0.2338,0.2024,0.4049,0.2338,0,0.3506,0.2338,-0.2024,0.2024,0.2338,-0.3506,0,0,-0.4675,-0.2338,0,-0.4049,-0.4049,0,-0.2338,-0.4675,0,0,-0.4049,0,0.2338,-0.2338,0,0.4049,0,0,0.4675,0.2338,0,0.4049,0.4049,0,0.2338,0.4675,0,0,0.4049,0,-0.2338,0.2338,0,-0.4049,0,-0.2338,-0.4049,-0.2024,-0.2338,-0.3506,-0.3506,-0.2338,-0.2024,-0.4049,-0.2338,0,-0.3506,-0.2338,0.2024,-0.2024,-0.2338,0.3506,0,-0.2338,0.4049,0.2024,-0.2338,0.3506,0.3506,-0.2338,0.2024,0.4049,-0.2338,0,0.3506,-0.2338,-0.2024,0.2024,-0.2338,-0.3506,0,-0.4049,-0.2338,-0.1169,-0.4049,-0.2024,-0.2024,-0.4049,-0.1169,-0.2338,-0.4049,0,-0.2024,-0.4049,0.1169,-0.1169,-0.4049,0.2024,0,-0.4049,0.2338,0.1169,-0.4049,0.2024,0.2024,-0.4049,0.1169,0.2338,-0.4049,0,0.2024,-0.4049,-0.1169,0.1169,-0.4049,-0.2024,0,-0.4675,0]);
IndexedFaceSet345.coord = Coordinate346;

Shape341.geometry = IndexedFaceSet345;

Transform340.child = new undefined();

Transform340.child[0] = Shape341;

Viewpoint Viewpoint347 = createNode("Viewpoint");
Viewpoint347.DEF = "ballView_1";
Viewpoint347.description = "Ball View";
Transform340.children[1] = Viewpoint347;

Group339.children = new MFNode();

Group339.children[0] = Transform340;

PositionInterpolator PositionInterpolator348 = createNode("PositionInterpolator");
PositionInterpolator348.DEF = "ball_TranslationInterpolator";
PositionInterpolator348.key = new MFFloat(new float[0,0.4,0.409,1]);
PositionInterpolator348.keyValue = new MFVec3f(new float[-1,0.4,-1,0,0.07,0,0.05,0.06,0.05,2,4,10]);
Group339.children[1] = PositionInterpolator348;

OrientationInterpolator OrientationInterpolator349 = createNode("OrientationInterpolator");
OrientationInterpolator349.DEF = "ball_RotationInterpolator";
OrientationInterpolator349.key = new MFFloat(new float[0,0.4,0.41,0.71,1]);
OrientationInterpolator349.keyValue = new MFRotation(new float[1,0,1,0.25,-1,0,-1,1.35,-1,1,-1,3.35,-1,0.2,-1,3,-1,0.2,-1,3]);
Group339.children[2] = OrientationInterpolator349;

children[14] = Group339;

Group Group350 = createNode("Group");
Transform Transform351 = createNode("Transform");
Transform351.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Shape Shape352 = createNode("Shape");
Shape352.USE = "AxisLinesShape";
Transform351.child = new undefined();

Transform351.child[0] = Shape352;

Group350.children = new MFNode();

Group350.children[0] = Transform351;

Transform Transform353 = createNode("Transform");
Transform353.DEF = "Circle0";
Transform353.scale = new SFVec3f(new float[1.175,1,1.175]);
Shape Shape354 = createNode("Shape");
Shape354.DEF = "circle_Shape";
Appearance Appearance355 = createNode("Appearance");
Appearance355.DEF = "circle0_Appearance";
Material Material356 = createNode("Material");
Material356.DEF = "circle0_Material";
Material356.ambientIntensity = 0.9;
Material356.diffuseColor = new SFColor(new float[0.9,0,0.7]);
Material356.emissiveColor = new SFColor(new float[0.425,0.486,1]);
Appearance355.material = Material356;

Shape354.appearance = Appearance355;

IndexedLineSet IndexedLineSet357 = createNode("IndexedLineSet");
IndexedLineSet357.DEF = "Orbit1";
IndexedLineSet357.coordIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1]);
Coordinate Coordinate358 = createNode("Coordinate");
Coordinate358.DEF = "circle_Coordinates";
Coordinate358.point = new MFVec3f(new float[1,0,0,0.995,0,-0.105,0.979,0,-0.208,0.951,0,-0.309,0.914,0,-0.407,0.866,0,-0.5,0.809,0,-0.588,0.743,0,-0.669,0.669,0,-0.743,0.588,0,-0.809,0.5,0,-0.866,0.407,0,-0.914,0.309,0,-0.951,0.208,0,-0.978,0.105,0,-0.995,0,0,-1,-0.105,0,-0.994522,-0.208,0,-0.978,-0.309,0,-0.951,-0.407,0,-0.914,-0.5,0,-0.866,-0.588,0,-0.809,-0.669,0,-0.743,-0.743,0,-0.669,-0.809,0,-0.588,-0.866,0,-0.5,-0.914,0,-0.407,-0.951,0,-0.309,-0.978,0,-0.208,-0.995,0,-0.105,-1,0,0,-0.995,0,0.105,-0.978,0,0.208,-0.951,0,0.309,-0.914,0,0.407,-0.866,0,0.5,-0.809,0,0.588,-0.743,0,0.669,-0.669,0,0.743,-0.588,0,0.809,-0.5,0,0.866,-0.407,0,0.914,-0.309,0,0.951,-0.208,0,0.978,-0.105,0,0.995,0,0,1,0.105,0,0.995,0.208,0,0.978,0.309,0,0.951,0.407,0,0.914,0.5,0,0.866,0.588,0,0.809,0.669,0,0.743,0.743,0,0.669,0.809,0,0.588,0.866,0,0.5,0.914,0,0.407,0.951,0,0.309,0.978,0,0.208,0.995,0,0.104,1,0,0]);
IndexedLineSet357.coord = Coordinate358;

Shape354.geometry = IndexedLineSet357;

Transform353.child = new undefined();

Transform353.child[0] = Shape354;

Group350.children[1] = Transform353;

Transform Transform359 = createNode("Transform");
Transform359.DEF = "Circle1";
Transform359.scale = new SFVec3f(new float[0.5,1,0.5]);
Shape Shape360 = createNode("Shape");
Shape360.DEF = "circle1_Shape";
Appearance Appearance361 = createNode("Appearance");
Appearance361.DEF = "circle1_Appearance";
Material Material362 = createNode("Material");
Material362.DEF = "circle1_Material";
Material362.diffuseColor = new SFColor(new float[0.9,0,0.7]);
Material362.emissiveColor = new SFColor(new float[0.424956,0.483976,1]);
Appearance361.material = Material362;

Shape360.appearance = Appearance361;

IndexedLineSet IndexedLineSet363 = createNode("IndexedLineSet");
IndexedLineSet363.USE = "Orbit1";
Shape360.geometry = IndexedLineSet363;

Transform359.child = new undefined();

Transform359.child[0] = Shape360;

Group350.children[2] = Transform359;

Transform Transform364 = createNode("Transform");
Transform364.DEF = "Circle2";
Transform364.scale = new SFVec3f(new float[0.25,1,0.25]);
Shape Shape365 = createNode("Shape");
Shape365.DEF = "circle2_Shape";
Appearance Appearance366 = createNode("Appearance");
Appearance366.DEF = "circle2_Appearance";
Material Material367 = createNode("Material");
Material367.DEF = "circle2_Material";
Material367.diffuseColor = new SFColor(new float[0.9,0,0.7]);
Material367.emissiveColor = new SFColor(new float[0.424956,0.483976,1]);
Appearance366.material = Material367;

Shape365.appearance = Appearance366;

IndexedLineSet IndexedLineSet368 = createNode("IndexedLineSet");
IndexedLineSet368.USE = "Orbit1";
Shape365.geometry = IndexedLineSet368;

Transform364.child = new undefined();

Transform364.child[0] = Shape365;

Group350.children[3] = Transform364;

children[15] = Group350;

ROUTE ROUTE369 = createNode("ROUTE");
ROUTE369.fromNode = "KickTimer";
ROUTE369.fromField = "fraction_changed";
ROUTE369.toNode = "HumanoidRoot_RotationInterpolator";
ROUTE369.toField = "set_fraction";
children[16] = ROUTE369;

ROUTE ROUTE370 = createNode("ROUTE");
ROUTE370.fromNode = "KickTimer";
ROUTE370.fromField = "fraction_changed";
ROUTE370.toNode = "HumanoidRoot_TranslationInterpolator";
ROUTE370.toField = "set_fraction";
children[17] = ROUTE370;

ROUTE ROUTE371 = createNode("ROUTE");
ROUTE371.fromNode = "KickTimer";
ROUTE371.fromField = "fraction_changed";
ROUTE371.toNode = "sacroiliac_RotationInterpolator";
ROUTE371.toField = "set_fraction";
children[18] = ROUTE371;

ROUTE ROUTE372 = createNode("ROUTE");
ROUTE372.fromNode = "KickTimer";
ROUTE372.fromField = "fraction_changed";
ROUTE372.toNode = "l_hip_RotationInterpolator";
ROUTE372.toField = "set_fraction";
children[19] = ROUTE372;

ROUTE ROUTE373 = createNode("ROUTE");
ROUTE373.fromNode = "KickTimer";
ROUTE373.fromField = "fraction_changed";
ROUTE373.toNode = "l_knee_RotationInterpolator";
ROUTE373.toField = "set_fraction";
children[20] = ROUTE373;

ROUTE ROUTE374 = createNode("ROUTE");
ROUTE374.fromNode = "KickTimer";
ROUTE374.fromField = "fraction_changed";
ROUTE374.toNode = "l_ankle_RotationInterpolator";
ROUTE374.toField = "set_fraction";
children[21] = ROUTE374;

ROUTE ROUTE375 = createNode("ROUTE");
ROUTE375.fromNode = "KickTimer";
ROUTE375.fromField = "fraction_changed";
ROUTE375.toNode = "l_subtalar_RotationInterpolator";
ROUTE375.toField = "set_fraction";
children[22] = ROUTE375;

ROUTE ROUTE376 = createNode("ROUTE");
ROUTE376.fromNode = "KickTimer";
ROUTE376.fromField = "fraction_changed";
ROUTE376.toNode = "l_midtarsal_RotationInterpolator";
ROUTE376.toField = "set_fraction";
children[23] = ROUTE376;

ROUTE ROUTE377 = createNode("ROUTE");
ROUTE377.fromNode = "KickTimer";
ROUTE377.fromField = "fraction_changed";
ROUTE377.toNode = "l_metatarsal_RotationInterpolator";
ROUTE377.toField = "set_fraction";
children[24] = ROUTE377;

ROUTE ROUTE378 = createNode("ROUTE");
ROUTE378.fromNode = "KickTimer";
ROUTE378.fromField = "fraction_changed";
ROUTE378.toNode = "r_hip_RotationInterpolator";
ROUTE378.toField = "set_fraction";
children[25] = ROUTE378;

ROUTE ROUTE379 = createNode("ROUTE");
ROUTE379.fromNode = "KickTimer";
ROUTE379.fromField = "fraction_changed";
ROUTE379.toNode = "r_knee_RotationInterpolator";
ROUTE379.toField = "set_fraction";
children[26] = ROUTE379;

ROUTE ROUTE380 = createNode("ROUTE");
ROUTE380.fromNode = "KickTimer";
ROUTE380.fromField = "fraction_changed";
ROUTE380.toNode = "r_ankle_RotationInterpolator";
ROUTE380.toField = "set_fraction";
children[27] = ROUTE380;

ROUTE ROUTE381 = createNode("ROUTE");
ROUTE381.fromNode = "KickTimer";
ROUTE381.fromField = "fraction_changed";
ROUTE381.toNode = "r_subtalar_RotationInterpolator";
ROUTE381.toField = "set_fraction";
children[28] = ROUTE381;

ROUTE ROUTE382 = createNode("ROUTE");
ROUTE382.fromNode = "KickTimer";
ROUTE382.fromField = "fraction_changed";
ROUTE382.toNode = "r_midtarsal_RotationInterpolator";
ROUTE382.toField = "set_fraction";
children[29] = ROUTE382;

ROUTE ROUTE383 = createNode("ROUTE");
ROUTE383.fromNode = "KickTimer";
ROUTE383.fromField = "fraction_changed";
ROUTE383.toNode = "r_metatarsal_RotationInterpolator";
ROUTE383.toField = "set_fraction";
children[30] = ROUTE383;

ROUTE ROUTE384 = createNode("ROUTE");
ROUTE384.fromNode = "KickTimer";
ROUTE384.fromField = "fraction_changed";
ROUTE384.toNode = "vl5_RotationInterpolator";
ROUTE384.toField = "set_fraction";
children[31] = ROUTE384;

ROUTE ROUTE385 = createNode("ROUTE");
ROUTE385.fromNode = "KickTimer";
ROUTE385.fromField = "fraction_changed";
ROUTE385.toNode = "vl4_RotationInterpolator";
ROUTE385.toField = "set_fraction";
children[32] = ROUTE385;

ROUTE ROUTE386 = createNode("ROUTE");
ROUTE386.fromNode = "KickTimer";
ROUTE386.fromField = "fraction_changed";
ROUTE386.toNode = "vl3_RotationInterpolator";
ROUTE386.toField = "set_fraction";
children[33] = ROUTE386;

ROUTE ROUTE387 = createNode("ROUTE");
ROUTE387.fromNode = "KickTimer";
ROUTE387.fromField = "fraction_changed";
ROUTE387.toNode = "vl2_RotationInterpolator";
ROUTE387.toField = "set_fraction";
children[34] = ROUTE387;

ROUTE ROUTE388 = createNode("ROUTE");
ROUTE388.fromNode = "KickTimer";
ROUTE388.fromField = "fraction_changed";
ROUTE388.toNode = "vl1_RotationInterpolator";
ROUTE388.toField = "set_fraction";
children[35] = ROUTE388;

ROUTE ROUTE389 = createNode("ROUTE");
ROUTE389.fromNode = "KickTimer";
ROUTE389.fromField = "fraction_changed";
ROUTE389.toNode = "vt12_RotationInterpolator";
ROUTE389.toField = "set_fraction";
children[36] = ROUTE389;

ROUTE ROUTE390 = createNode("ROUTE");
ROUTE390.fromNode = "KickTimer";
ROUTE390.fromField = "fraction_changed";
ROUTE390.toNode = "vt11_RotationInterpolator";
ROUTE390.toField = "set_fraction";
children[37] = ROUTE390;

ROUTE ROUTE391 = createNode("ROUTE");
ROUTE391.fromNode = "KickTimer";
ROUTE391.fromField = "fraction_changed";
ROUTE391.toNode = "vt10_RotationInterpolator";
ROUTE391.toField = "set_fraction";
children[38] = ROUTE391;

ROUTE ROUTE392 = createNode("ROUTE");
ROUTE392.fromNode = "KickTimer";
ROUTE392.fromField = "fraction_changed";
ROUTE392.toNode = "vt9_RotationInterpolator";
ROUTE392.toField = "set_fraction";
children[39] = ROUTE392;

ROUTE ROUTE393 = createNode("ROUTE");
ROUTE393.fromNode = "KickTimer";
ROUTE393.fromField = "fraction_changed";
ROUTE393.toNode = "vt8_RotationInterpolator";
ROUTE393.toField = "set_fraction";
children[40] = ROUTE393;

ROUTE ROUTE394 = createNode("ROUTE");
ROUTE394.fromNode = "KickTimer";
ROUTE394.fromField = "fraction_changed";
ROUTE394.toNode = "vt7_RotationInterpolator";
ROUTE394.toField = "set_fraction";
children[41] = ROUTE394;

ROUTE ROUTE395 = createNode("ROUTE");
ROUTE395.fromNode = "KickTimer";
ROUTE395.fromField = "fraction_changed";
ROUTE395.toNode = "vt6_RotationInterpolator";
ROUTE395.toField = "set_fraction";
children[42] = ROUTE395;

ROUTE ROUTE396 = createNode("ROUTE");
ROUTE396.fromNode = "KickTimer";
ROUTE396.fromField = "fraction_changed";
ROUTE396.toNode = "vt5_RotationInterpolator";
ROUTE396.toField = "set_fraction";
children[43] = ROUTE396;

ROUTE ROUTE397 = createNode("ROUTE");
ROUTE397.fromNode = "KickTimer";
ROUTE397.fromField = "fraction_changed";
ROUTE397.toNode = "vt4_RotationInterpolator";
ROUTE397.toField = "set_fraction";
children[44] = ROUTE397;

ROUTE ROUTE398 = createNode("ROUTE");
ROUTE398.fromNode = "KickTimer";
ROUTE398.fromField = "fraction_changed";
ROUTE398.toNode = "vt3_RotationInterpolator";
ROUTE398.toField = "set_fraction";
children[45] = ROUTE398;

ROUTE ROUTE399 = createNode("ROUTE");
ROUTE399.fromNode = "KickTimer";
ROUTE399.fromField = "fraction_changed";
ROUTE399.toNode = "vt2_RotationInterpolator";
ROUTE399.toField = "set_fraction";
children[46] = ROUTE399;

ROUTE ROUTE400 = createNode("ROUTE");
ROUTE400.fromNode = "KickTimer";
ROUTE400.fromField = "fraction_changed";
ROUTE400.toNode = "vt1_RotationInterpolator";
ROUTE400.toField = "set_fraction";
children[47] = ROUTE400;

ROUTE ROUTE401 = createNode("ROUTE");
ROUTE401.fromNode = "KickTimer";
ROUTE401.fromField = "fraction_changed";
ROUTE401.toNode = "vc7_RotationInterpolator";
ROUTE401.toField = "set_fraction";
children[48] = ROUTE401;

ROUTE ROUTE402 = createNode("ROUTE");
ROUTE402.fromNode = "KickTimer";
ROUTE402.fromField = "fraction_changed";
ROUTE402.toNode = "vc6_RotationInterpolator";
ROUTE402.toField = "set_fraction";
children[49] = ROUTE402;

ROUTE ROUTE403 = createNode("ROUTE");
ROUTE403.fromNode = "KickTimer";
ROUTE403.fromField = "fraction_changed";
ROUTE403.toNode = "vc5_RotationInterpolator";
ROUTE403.toField = "set_fraction";
children[50] = ROUTE403;

ROUTE ROUTE404 = createNode("ROUTE");
ROUTE404.fromNode = "KickTimer";
ROUTE404.fromField = "fraction_changed";
ROUTE404.toNode = "vc4_RotationInterpolator";
ROUTE404.toField = "set_fraction";
children[51] = ROUTE404;

ROUTE ROUTE405 = createNode("ROUTE");
ROUTE405.fromNode = "KickTimer";
ROUTE405.fromField = "fraction_changed";
ROUTE405.toNode = "vc3_RotationInterpolator";
ROUTE405.toField = "set_fraction";
children[52] = ROUTE405;

ROUTE ROUTE406 = createNode("ROUTE");
ROUTE406.fromNode = "KickTimer";
ROUTE406.fromField = "fraction_changed";
ROUTE406.toNode = "vc2_RotationInterpolator";
ROUTE406.toField = "set_fraction";
children[53] = ROUTE406;

ROUTE ROUTE407 = createNode("ROUTE");
ROUTE407.fromNode = "KickTimer";
ROUTE407.fromField = "fraction_changed";
ROUTE407.toNode = "vc1_RotationInterpolator";
ROUTE407.toField = "set_fraction";
children[54] = ROUTE407;

ROUTE ROUTE408 = createNode("ROUTE");
ROUTE408.fromNode = "KickTimer";
ROUTE408.fromField = "fraction_changed";
ROUTE408.toNode = "skullbase_RotationInterpolator";
ROUTE408.toField = "set_fraction";
children[55] = ROUTE408;

ROUTE ROUTE409 = createNode("ROUTE");
ROUTE409.fromNode = "KickTimer";
ROUTE409.fromField = "fraction_changed";
ROUTE409.toNode = "l_eyelid_joint_RotationInterpolator";
ROUTE409.toField = "set_fraction";
children[56] = ROUTE409;

ROUTE ROUTE410 = createNode("ROUTE");
ROUTE410.fromNode = "KickTimer";
ROUTE410.fromField = "fraction_changed";
ROUTE410.toNode = "l_eyeball_joint_RotationInterpolator";
ROUTE410.toField = "set_fraction";
children[57] = ROUTE410;

ROUTE ROUTE411 = createNode("ROUTE");
ROUTE411.fromNode = "KickTimer";
ROUTE411.fromField = "fraction_changed";
ROUTE411.toNode = "l_eyebrow_joint_RotationInterpolator";
ROUTE411.toField = "set_fraction";
children[58] = ROUTE411;

ROUTE ROUTE412 = createNode("ROUTE");
ROUTE412.fromNode = "KickTimer";
ROUTE412.fromField = "fraction_changed";
ROUTE412.toNode = "r_eyelid_joint_RotationInterpolator";
ROUTE412.toField = "set_fraction";
children[59] = ROUTE412;

ROUTE ROUTE413 = createNode("ROUTE");
ROUTE413.fromNode = "KickTimer";
ROUTE413.fromField = "fraction_changed";
ROUTE413.toNode = "r_eyeball_joint_RotationInterpolator";
ROUTE413.toField = "set_fraction";
children[60] = ROUTE413;

ROUTE ROUTE414 = createNode("ROUTE");
ROUTE414.fromNode = "KickTimer";
ROUTE414.fromField = "fraction_changed";
ROUTE414.toNode = "r_eyebrow_joint_RotationInterpolator";
ROUTE414.toField = "set_fraction";
children[61] = ROUTE414;

ROUTE ROUTE415 = createNode("ROUTE");
ROUTE415.fromNode = "KickTimer";
ROUTE415.fromField = "fraction_changed";
ROUTE415.toNode = "temporomandibular_RotationInterpolator";
ROUTE415.toField = "set_fraction";
children[62] = ROUTE415;

ROUTE ROUTE416 = createNode("ROUTE");
ROUTE416.fromNode = "KickTimer";
ROUTE416.fromField = "fraction_changed";
ROUTE416.toNode = "l_sternoclavicular_RotationInterpolator";
ROUTE416.toField = "set_fraction";
children[63] = ROUTE416;

ROUTE ROUTE417 = createNode("ROUTE");
ROUTE417.fromNode = "KickTimer";
ROUTE417.fromField = "fraction_changed";
ROUTE417.toNode = "l_acromioclavicular_RotationInterpolator";
ROUTE417.toField = "set_fraction";
children[64] = ROUTE417;

ROUTE ROUTE418 = createNode("ROUTE");
ROUTE418.fromNode = "KickTimer";
ROUTE418.fromField = "fraction_changed";
ROUTE418.toNode = "l_shoulder_RotationInterpolator";
ROUTE418.toField = "set_fraction";
children[65] = ROUTE418;

ROUTE ROUTE419 = createNode("ROUTE");
ROUTE419.fromNode = "KickTimer";
ROUTE419.fromField = "fraction_changed";
ROUTE419.toNode = "l_elbow_RotationInterpolator";
ROUTE419.toField = "set_fraction";
children[66] = ROUTE419;

ROUTE ROUTE420 = createNode("ROUTE");
ROUTE420.fromNode = "KickTimer";
ROUTE420.fromField = "fraction_changed";
ROUTE420.toNode = "l_wrist_RotationInterpolator";
ROUTE420.toField = "set_fraction";
children[67] = ROUTE420;

ROUTE ROUTE421 = createNode("ROUTE");
ROUTE421.fromNode = "KickTimer";
ROUTE421.fromField = "fraction_changed";
ROUTE421.toNode = "l_thumb1_RotationInterpolator";
ROUTE421.toField = "set_fraction";
children[68] = ROUTE421;

ROUTE ROUTE422 = createNode("ROUTE");
ROUTE422.fromNode = "KickTimer";
ROUTE422.fromField = "fraction_changed";
ROUTE422.toNode = "l_thumb2_RotationInterpolator";
ROUTE422.toField = "set_fraction";
children[69] = ROUTE422;

ROUTE ROUTE423 = createNode("ROUTE");
ROUTE423.fromNode = "KickTimer";
ROUTE423.fromField = "fraction_changed";
ROUTE423.toNode = "l_thumb3_RotationInterpolator";
ROUTE423.toField = "set_fraction";
children[70] = ROUTE423;

ROUTE ROUTE424 = createNode("ROUTE");
ROUTE424.fromNode = "KickTimer";
ROUTE424.fromField = "fraction_changed";
ROUTE424.toNode = "l_index0_RotationInterpolator";
ROUTE424.toField = "set_fraction";
children[71] = ROUTE424;

ROUTE ROUTE425 = createNode("ROUTE");
ROUTE425.fromNode = "KickTimer";
ROUTE425.fromField = "fraction_changed";
ROUTE425.toNode = "l_index1_RotationInterpolator";
ROUTE425.toField = "set_fraction";
children[72] = ROUTE425;

ROUTE ROUTE426 = createNode("ROUTE");
ROUTE426.fromNode = "KickTimer";
ROUTE426.fromField = "fraction_changed";
ROUTE426.toNode = "l_index2_RotationInterpolator";
ROUTE426.toField = "set_fraction";
children[73] = ROUTE426;

ROUTE ROUTE427 = createNode("ROUTE");
ROUTE427.fromNode = "KickTimer";
ROUTE427.fromField = "fraction_changed";
ROUTE427.toNode = "l_index3_RotationInterpolator";
ROUTE427.toField = "set_fraction";
children[74] = ROUTE427;

ROUTE ROUTE428 = createNode("ROUTE");
ROUTE428.fromNode = "KickTimer";
ROUTE428.fromField = "fraction_changed";
ROUTE428.toNode = "l_middle0_RotationInterpolator";
ROUTE428.toField = "set_fraction";
children[75] = ROUTE428;

ROUTE ROUTE429 = createNode("ROUTE");
ROUTE429.fromNode = "KickTimer";
ROUTE429.fromField = "fraction_changed";
ROUTE429.toNode = "l_middle1_RotationInterpolator";
ROUTE429.toField = "set_fraction";
children[76] = ROUTE429;

ROUTE ROUTE430 = createNode("ROUTE");
ROUTE430.fromNode = "KickTimer";
ROUTE430.fromField = "fraction_changed";
ROUTE430.toNode = "l_middle2_RotationInterpolator";
ROUTE430.toField = "set_fraction";
children[77] = ROUTE430;

ROUTE ROUTE431 = createNode("ROUTE");
ROUTE431.fromNode = "KickTimer";
ROUTE431.fromField = "fraction_changed";
ROUTE431.toNode = "l_middle3_RotationInterpolator";
ROUTE431.toField = "set_fraction";
children[78] = ROUTE431;

ROUTE ROUTE432 = createNode("ROUTE");
ROUTE432.fromNode = "KickTimer";
ROUTE432.fromField = "fraction_changed";
ROUTE432.toNode = "l_ring0_RotationInterpolator";
ROUTE432.toField = "set_fraction";
children[79] = ROUTE432;

ROUTE ROUTE433 = createNode("ROUTE");
ROUTE433.fromNode = "KickTimer";
ROUTE433.fromField = "fraction_changed";
ROUTE433.toNode = "l_ring1_RotationInterpolator";
ROUTE433.toField = "set_fraction";
children[80] = ROUTE433;

ROUTE ROUTE434 = createNode("ROUTE");
ROUTE434.fromNode = "KickTimer";
ROUTE434.fromField = "fraction_changed";
ROUTE434.toNode = "l_ring2_RotationInterpolator";
ROUTE434.toField = "set_fraction";
children[81] = ROUTE434;

ROUTE ROUTE435 = createNode("ROUTE");
ROUTE435.fromNode = "KickTimer";
ROUTE435.fromField = "fraction_changed";
ROUTE435.toNode = "l_ring3_RotationInterpolator";
ROUTE435.toField = "set_fraction";
children[82] = ROUTE435;

ROUTE ROUTE436 = createNode("ROUTE");
ROUTE436.fromNode = "KickTimer";
ROUTE436.fromField = "fraction_changed";
ROUTE436.toNode = "l_pinky0_RotationInterpolator";
ROUTE436.toField = "set_fraction";
children[83] = ROUTE436;

ROUTE ROUTE437 = createNode("ROUTE");
ROUTE437.fromNode = "KickTimer";
ROUTE437.fromField = "fraction_changed";
ROUTE437.toNode = "l_pinky1_RotationInterpolator";
ROUTE437.toField = "set_fraction";
children[84] = ROUTE437;

ROUTE ROUTE438 = createNode("ROUTE");
ROUTE438.fromNode = "KickTimer";
ROUTE438.fromField = "fraction_changed";
ROUTE438.toNode = "l_pinky2_RotationInterpolator";
ROUTE438.toField = "set_fraction";
children[85] = ROUTE438;

ROUTE ROUTE439 = createNode("ROUTE");
ROUTE439.fromNode = "KickTimer";
ROUTE439.fromField = "fraction_changed";
ROUTE439.toNode = "l_pinky3_RotationInterpolator";
ROUTE439.toField = "set_fraction";
children[86] = ROUTE439;

ROUTE ROUTE440 = createNode("ROUTE");
ROUTE440.fromNode = "KickTimer";
ROUTE440.fromField = "fraction_changed";
ROUTE440.toNode = "r_sternoclavicular_RotationInterpolator";
ROUTE440.toField = "set_fraction";
children[87] = ROUTE440;

ROUTE ROUTE441 = createNode("ROUTE");
ROUTE441.fromNode = "KickTimer";
ROUTE441.fromField = "fraction_changed";
ROUTE441.toNode = "r_acromioclavicular_RotationInterpolator";
ROUTE441.toField = "set_fraction";
children[88] = ROUTE441;

ROUTE ROUTE442 = createNode("ROUTE");
ROUTE442.fromNode = "KickTimer";
ROUTE442.fromField = "fraction_changed";
ROUTE442.toNode = "r_shoulder_RotationInterpolator";
ROUTE442.toField = "set_fraction";
children[89] = ROUTE442;

ROUTE ROUTE443 = createNode("ROUTE");
ROUTE443.fromNode = "KickTimer";
ROUTE443.fromField = "fraction_changed";
ROUTE443.toNode = "r_elbow_RotationInterpolator";
ROUTE443.toField = "set_fraction";
children[90] = ROUTE443;

ROUTE ROUTE444 = createNode("ROUTE");
ROUTE444.fromNode = "KickTimer";
ROUTE444.fromField = "fraction_changed";
ROUTE444.toNode = "r_wrist_RotationInterpolator";
ROUTE444.toField = "set_fraction";
children[91] = ROUTE444;

ROUTE ROUTE445 = createNode("ROUTE");
ROUTE445.fromNode = "KickTimer";
ROUTE445.fromField = "fraction_changed";
ROUTE445.toNode = "r_thumb1_RotationInterpolator";
ROUTE445.toField = "set_fraction";
children[92] = ROUTE445;

ROUTE ROUTE446 = createNode("ROUTE");
ROUTE446.fromNode = "KickTimer";
ROUTE446.fromField = "fraction_changed";
ROUTE446.toNode = "r_thumb2_RotationInterpolator";
ROUTE446.toField = "set_fraction";
children[93] = ROUTE446;

ROUTE ROUTE447 = createNode("ROUTE");
ROUTE447.fromNode = "KickTimer";
ROUTE447.fromField = "fraction_changed";
ROUTE447.toNode = "r_thumb3_RotationInterpolator";
ROUTE447.toField = "set_fraction";
children[94] = ROUTE447;

ROUTE ROUTE448 = createNode("ROUTE");
ROUTE448.fromNode = "KickTimer";
ROUTE448.fromField = "fraction_changed";
ROUTE448.toNode = "r_index0_RotationInterpolator";
ROUTE448.toField = "set_fraction";
children[95] = ROUTE448;

ROUTE ROUTE449 = createNode("ROUTE");
ROUTE449.fromNode = "KickTimer";
ROUTE449.fromField = "fraction_changed";
ROUTE449.toNode = "r_index1_RotationInterpolator";
ROUTE449.toField = "set_fraction";
children[96] = ROUTE449;

ROUTE ROUTE450 = createNode("ROUTE");
ROUTE450.fromNode = "KickTimer";
ROUTE450.fromField = "fraction_changed";
ROUTE450.toNode = "r_index2_RotationInterpolator";
ROUTE450.toField = "set_fraction";
children[97] = ROUTE450;

ROUTE ROUTE451 = createNode("ROUTE");
ROUTE451.fromNode = "KickTimer";
ROUTE451.fromField = "fraction_changed";
ROUTE451.toNode = "r_index3_RotationInterpolator";
ROUTE451.toField = "set_fraction";
children[98] = ROUTE451;

ROUTE ROUTE452 = createNode("ROUTE");
ROUTE452.fromNode = "KickTimer";
ROUTE452.fromField = "fraction_changed";
ROUTE452.toNode = "r_middle0_RotationInterpolator";
ROUTE452.toField = "set_fraction";
children[99] = ROUTE452;

ROUTE ROUTE453 = createNode("ROUTE");
ROUTE453.fromNode = "KickTimer";
ROUTE453.fromField = "fraction_changed";
ROUTE453.toNode = "r_middle1_RotationInterpolator";
ROUTE453.toField = "set_fraction";
children[100] = ROUTE453;

ROUTE ROUTE454 = createNode("ROUTE");
ROUTE454.fromNode = "KickTimer";
ROUTE454.fromField = "fraction_changed";
ROUTE454.toNode = "r_middle2_RotationInterpolator";
ROUTE454.toField = "set_fraction";
children[101] = ROUTE454;

ROUTE ROUTE455 = createNode("ROUTE");
ROUTE455.fromNode = "KickTimer";
ROUTE455.fromField = "fraction_changed";
ROUTE455.toNode = "r_middle3_RotationInterpolator";
ROUTE455.toField = "set_fraction";
children[102] = ROUTE455;

ROUTE ROUTE456 = createNode("ROUTE");
ROUTE456.fromNode = "KickTimer";
ROUTE456.fromField = "fraction_changed";
ROUTE456.toNode = "r_ring0_RotationInterpolator";
ROUTE456.toField = "set_fraction";
children[103] = ROUTE456;

ROUTE ROUTE457 = createNode("ROUTE");
ROUTE457.fromNode = "KickTimer";
ROUTE457.fromField = "fraction_changed";
ROUTE457.toNode = "r_ring1_RotationInterpolator";
ROUTE457.toField = "set_fraction";
children[104] = ROUTE457;

ROUTE ROUTE458 = createNode("ROUTE");
ROUTE458.fromNode = "KickTimer";
ROUTE458.fromField = "fraction_changed";
ROUTE458.toNode = "r_ring2_RotationInterpolator";
ROUTE458.toField = "set_fraction";
children[105] = ROUTE458;

ROUTE ROUTE459 = createNode("ROUTE");
ROUTE459.fromNode = "KickTimer";
ROUTE459.fromField = "fraction_changed";
ROUTE459.toNode = "r_ring3_RotationInterpolator";
ROUTE459.toField = "set_fraction";
children[106] = ROUTE459;

ROUTE ROUTE460 = createNode("ROUTE");
ROUTE460.fromNode = "KickTimer";
ROUTE460.fromField = "fraction_changed";
ROUTE460.toNode = "r_pinky0_RotationInterpolator";
ROUTE460.toField = "set_fraction";
children[107] = ROUTE460;

ROUTE ROUTE461 = createNode("ROUTE");
ROUTE461.fromNode = "KickTimer";
ROUTE461.fromField = "fraction_changed";
ROUTE461.toNode = "r_pinky1_RotationInterpolator";
ROUTE461.toField = "set_fraction";
children[108] = ROUTE461;

ROUTE ROUTE462 = createNode("ROUTE");
ROUTE462.fromNode = "KickTimer";
ROUTE462.fromField = "fraction_changed";
ROUTE462.toNode = "r_pinky2_RotationInterpolator";
ROUTE462.toField = "set_fraction";
children[109] = ROUTE462;

ROUTE ROUTE463 = createNode("ROUTE");
ROUTE463.fromNode = "KickTimer";
ROUTE463.fromField = "fraction_changed";
ROUTE463.toNode = "r_pinky3_RotationInterpolator";
ROUTE463.toField = "set_fraction";
children[110] = ROUTE463;

ROUTE ROUTE464 = createNode("ROUTE");
ROUTE464.fromNode = "HumanoidRoot_RotationInterpolator";
ROUTE464.fromField = "value_changed";
ROUTE464.toNode = "Joe_humanoid_root";
ROUTE464.toField = "rotation";
children[111] = ROUTE464;

ROUTE ROUTE465 = createNode("ROUTE");
ROUTE465.fromNode = "HumanoidRoot_TranslationInterpolator";
ROUTE465.fromField = "value_changed";
ROUTE465.toNode = "Joe_humanoid_root";
ROUTE465.toField = "translation";
children[112] = ROUTE465;

ROUTE ROUTE466 = createNode("ROUTE");
ROUTE466.fromNode = "sacroiliac_RotationInterpolator";
ROUTE466.fromField = "value_changed";
ROUTE466.toNode = "Joe_sacroiliac";
ROUTE466.toField = "rotation";
children[113] = ROUTE466;

ROUTE ROUTE467 = createNode("ROUTE");
ROUTE467.fromNode = "l_hip_RotationInterpolator";
ROUTE467.fromField = "value_changed";
ROUTE467.toNode = "Joe_l_hip";
ROUTE467.toField = "rotation";
children[114] = ROUTE467;

ROUTE ROUTE468 = createNode("ROUTE");
ROUTE468.fromNode = "l_knee_RotationInterpolator";
ROUTE468.fromField = "value_changed";
ROUTE468.toNode = "Joe_l_knee";
ROUTE468.toField = "rotation";
children[115] = ROUTE468;

ROUTE ROUTE469 = createNode("ROUTE");
ROUTE469.fromNode = "l_ankle_RotationInterpolator";
ROUTE469.fromField = "value_changed";
ROUTE469.toNode = "Joe_l_talocrural";
ROUTE469.toField = "rotation";
children[116] = ROUTE469;

ROUTE ROUTE470 = createNode("ROUTE");
ROUTE470.fromNode = "l_subtalar_RotationInterpolator";
ROUTE470.fromField = "value_changed";
ROUTE470.toNode = "Joe_l_tarsometatarsal_1";
ROUTE470.toField = "rotation";
children[117] = ROUTE470;

ROUTE ROUTE471 = createNode("ROUTE");
ROUTE471.fromNode = "l_midtarsal_RotationInterpolator";
ROUTE471.fromField = "value_changed";
ROUTE471.toNode = "Joe_l_metatarsophalangeal_1";
ROUTE471.toField = "rotation";
children[118] = ROUTE471;

ROUTE ROUTE472 = createNode("ROUTE");
ROUTE472.fromNode = "l_metatarsal_RotationInterpolator";
ROUTE472.fromField = "value_changed";
ROUTE472.toNode = "Joe_l_tarsal_distal_interphalangeal_1";
ROUTE472.toField = "rotation";
children[119] = ROUTE472;

ROUTE ROUTE473 = createNode("ROUTE");
ROUTE473.fromNode = "r_hip_RotationInterpolator";
ROUTE473.fromField = "value_changed";
ROUTE473.toNode = "Joe_r_hip";
ROUTE473.toField = "rotation";
children[120] = ROUTE473;

ROUTE ROUTE474 = createNode("ROUTE");
ROUTE474.fromNode = "r_knee_RotationInterpolator";
ROUTE474.fromField = "value_changed";
ROUTE474.toNode = "Joe_r_knee";
ROUTE474.toField = "rotation";
children[121] = ROUTE474;

ROUTE ROUTE475 = createNode("ROUTE");
ROUTE475.fromNode = "r_ankle_RotationInterpolator";
ROUTE475.fromField = "value_changed";
ROUTE475.toNode = "Joe_r_talocrural";
ROUTE475.toField = "rotation";
children[122] = ROUTE475;

ROUTE ROUTE476 = createNode("ROUTE");
ROUTE476.fromNode = "r_subtalar_RotationInterpolator";
ROUTE476.fromField = "value_changed";
ROUTE476.toNode = "Joe_r_tarsometatarsal_1";
ROUTE476.toField = "rotation";
children[123] = ROUTE476;

ROUTE ROUTE477 = createNode("ROUTE");
ROUTE477.fromNode = "r_midtarsal_RotationInterpolator";
ROUTE477.fromField = "value_changed";
ROUTE477.toNode = "Joe_r_metatarsophalangeal_1";
ROUTE477.toField = "rotation";
children[124] = ROUTE477;

ROUTE ROUTE478 = createNode("ROUTE");
ROUTE478.fromNode = "r_metatarsal_RotationInterpolator";
ROUTE478.fromField = "value_changed";
ROUTE478.toNode = "Joe_r_tarsal_distal_interphalangeal_1";
ROUTE478.toField = "rotation";
children[125] = ROUTE478;

ROUTE ROUTE479 = createNode("ROUTE");
ROUTE479.fromNode = "vl5_RotationInterpolator";
ROUTE479.fromField = "value_changed";
ROUTE479.toNode = "Joe_vl5";
ROUTE479.toField = "rotation";
children[126] = ROUTE479;

ROUTE ROUTE480 = createNode("ROUTE");
ROUTE480.fromNode = "vl4_RotationInterpolator";
ROUTE480.fromField = "value_changed";
ROUTE480.toNode = "Joe_vl4";
ROUTE480.toField = "rotation";
children[127] = ROUTE480;

ROUTE ROUTE481 = createNode("ROUTE");
ROUTE481.fromNode = "vl3_RotationInterpolator";
ROUTE481.fromField = "value_changed";
ROUTE481.toNode = "Joe_vl3";
ROUTE481.toField = "rotation";
children[128] = ROUTE481;

ROUTE ROUTE482 = createNode("ROUTE");
ROUTE482.fromNode = "vl2_RotationInterpolator";
ROUTE482.fromField = "value_changed";
ROUTE482.toNode = "Joe_vl2";
ROUTE482.toField = "rotation";
children[129] = ROUTE482;

ROUTE ROUTE483 = createNode("ROUTE");
ROUTE483.fromNode = "vl1_RotationInterpolator";
ROUTE483.fromField = "value_changed";
ROUTE483.toNode = "Joe_vl1";
ROUTE483.toField = "rotation";
children[130] = ROUTE483;

ROUTE ROUTE484 = createNode("ROUTE");
ROUTE484.fromNode = "vt12_RotationInterpolator";
ROUTE484.fromField = "value_changed";
ROUTE484.toNode = "Joe_vt12";
ROUTE484.toField = "rotation";
children[131] = ROUTE484;

ROUTE ROUTE485 = createNode("ROUTE");
ROUTE485.fromNode = "vt11_RotationInterpolator";
ROUTE485.fromField = "value_changed";
ROUTE485.toNode = "Joe_vt11";
ROUTE485.toField = "rotation";
children[132] = ROUTE485;

ROUTE ROUTE486 = createNode("ROUTE");
ROUTE486.fromNode = "vt10_RotationInterpolator";
ROUTE486.fromField = "value_changed";
ROUTE486.toNode = "Joe_vt10";
ROUTE486.toField = "rotation";
children[133] = ROUTE486;

ROUTE ROUTE487 = createNode("ROUTE");
ROUTE487.fromNode = "vt9_RotationInterpolator";
ROUTE487.fromField = "value_changed";
ROUTE487.toNode = "Joe_vt9";
ROUTE487.toField = "rotation";
children[134] = ROUTE487;

ROUTE ROUTE488 = createNode("ROUTE");
ROUTE488.fromNode = "vt8_RotationInterpolator";
ROUTE488.fromField = "value_changed";
ROUTE488.toNode = "Joe_vt8";
ROUTE488.toField = "rotation";
children[135] = ROUTE488;

ROUTE ROUTE489 = createNode("ROUTE");
ROUTE489.fromNode = "vt7_RotationInterpolator";
ROUTE489.fromField = "value_changed";
ROUTE489.toNode = "Joe_vt7";
ROUTE489.toField = "rotation";
children[136] = ROUTE489;

ROUTE ROUTE490 = createNode("ROUTE");
ROUTE490.fromNode = "vt6_RotationInterpolator";
ROUTE490.fromField = "value_changed";
ROUTE490.toNode = "Joe_vt6";
ROUTE490.toField = "rotation";
children[137] = ROUTE490;

ROUTE ROUTE491 = createNode("ROUTE");
ROUTE491.fromNode = "vt5_RotationInterpolator";
ROUTE491.fromField = "value_changed";
ROUTE491.toNode = "Joe_vt5";
ROUTE491.toField = "rotation";
children[138] = ROUTE491;

ROUTE ROUTE492 = createNode("ROUTE");
ROUTE492.fromNode = "vt4_RotationInterpolator";
ROUTE492.fromField = "value_changed";
ROUTE492.toNode = "Joe_vt4";
ROUTE492.toField = "rotation";
children[139] = ROUTE492;

ROUTE ROUTE493 = createNode("ROUTE");
ROUTE493.fromNode = "vt3_RotationInterpolator";
ROUTE493.fromField = "value_changed";
ROUTE493.toNode = "Joe_vt3";
ROUTE493.toField = "rotation";
children[140] = ROUTE493;

ROUTE ROUTE494 = createNode("ROUTE");
ROUTE494.fromNode = "vt2_RotationInterpolator";
ROUTE494.fromField = "value_changed";
ROUTE494.toNode = "Joe_vt2";
ROUTE494.toField = "rotation";
children[141] = ROUTE494;

ROUTE ROUTE495 = createNode("ROUTE");
ROUTE495.fromNode = "vt1_RotationInterpolator";
ROUTE495.fromField = "value_changed";
ROUTE495.toNode = "Joe_vt1";
ROUTE495.toField = "rotation";
children[142] = ROUTE495;

ROUTE ROUTE496 = createNode("ROUTE");
ROUTE496.fromNode = "vc7_RotationInterpolator";
ROUTE496.fromField = "value_changed";
ROUTE496.toNode = "Joe_vc7";
ROUTE496.toField = "rotation";
children[143] = ROUTE496;

ROUTE ROUTE497 = createNode("ROUTE");
ROUTE497.fromNode = "vc6_RotationInterpolator";
ROUTE497.fromField = "value_changed";
ROUTE497.toNode = "Joe_vc6";
ROUTE497.toField = "rotation";
children[144] = ROUTE497;

ROUTE ROUTE498 = createNode("ROUTE");
ROUTE498.fromNode = "vc5_RotationInterpolator";
ROUTE498.fromField = "value_changed";
ROUTE498.toNode = "Joe_vc5";
ROUTE498.toField = "rotation";
children[145] = ROUTE498;

ROUTE ROUTE499 = createNode("ROUTE");
ROUTE499.fromNode = "vc4_RotationInterpolator";
ROUTE499.fromField = "value_changed";
ROUTE499.toNode = "Joe_vc4";
ROUTE499.toField = "rotation";
children[146] = ROUTE499;

ROUTE ROUTE500 = createNode("ROUTE");
ROUTE500.fromNode = "vc3_RotationInterpolator";
ROUTE500.fromField = "value_changed";
ROUTE500.toNode = "Joe_vc3";
ROUTE500.toField = "rotation";
children[147] = ROUTE500;

ROUTE ROUTE501 = createNode("ROUTE");
ROUTE501.fromNode = "vc2_RotationInterpolator";
ROUTE501.fromField = "value_changed";
ROUTE501.toNode = "Joe_vc2";
ROUTE501.toField = "rotation";
children[148] = ROUTE501;

ROUTE ROUTE502 = createNode("ROUTE");
ROUTE502.fromNode = "vc1_RotationInterpolator";
ROUTE502.fromField = "value_changed";
ROUTE502.toNode = "Joe_vc1";
ROUTE502.toField = "rotation";
children[149] = ROUTE502;

ROUTE ROUTE503 = createNode("ROUTE");
ROUTE503.fromNode = "skullbase_RotationInterpolator";
ROUTE503.fromField = "value_changed";
ROUTE503.toNode = "Joe_skullbase";
ROUTE503.toField = "rotation";
children[150] = ROUTE503;

ROUTE ROUTE504 = createNode("ROUTE");
ROUTE504.fromNode = "l_eyelid_joint_RotationInterpolator";
ROUTE504.fromField = "value_changed";
ROUTE504.toNode = "Joe_l_eyelid_joint";
ROUTE504.toField = "rotation";
children[151] = ROUTE504;

ROUTE ROUTE505 = createNode("ROUTE");
ROUTE505.fromNode = "l_eyeball_joint_RotationInterpolator";
ROUTE505.fromField = "value_changed";
ROUTE505.toNode = "Joe_l_eyeball_joint";
ROUTE505.toField = "rotation";
children[152] = ROUTE505;

ROUTE ROUTE506 = createNode("ROUTE");
ROUTE506.fromNode = "l_eyebrow_joint_RotationInterpolator";
ROUTE506.fromField = "value_changed";
ROUTE506.toNode = "Joe_l_eyebrow_joint";
ROUTE506.toField = "rotation";
children[153] = ROUTE506;

ROUTE ROUTE507 = createNode("ROUTE");
ROUTE507.fromNode = "r_eyelid_joint_RotationInterpolator";
ROUTE507.fromField = "value_changed";
ROUTE507.toNode = "Joe_r_eyelid_joint";
ROUTE507.toField = "rotation";
children[154] = ROUTE507;

ROUTE ROUTE508 = createNode("ROUTE");
ROUTE508.fromNode = "r_eyeball_joint_RotationInterpolator";
ROUTE508.fromField = "value_changed";
ROUTE508.toNode = "Joe_r_eyeball_joint";
ROUTE508.toField = "rotation";
children[155] = ROUTE508;

ROUTE ROUTE509 = createNode("ROUTE");
ROUTE509.fromNode = "r_eyebrow_joint_RotationInterpolator";
ROUTE509.fromField = "value_changed";
ROUTE509.toNode = "Joe_r_eyebrow_joint";
ROUTE509.toField = "rotation";
children[156] = ROUTE509;

ROUTE ROUTE510 = createNode("ROUTE");
ROUTE510.fromNode = "temporomandibular_RotationInterpolator";
ROUTE510.fromField = "value_changed";
ROUTE510.toNode = "Joe_temporomandibular";
ROUTE510.toField = "rotation";
children[157] = ROUTE510;

ROUTE ROUTE511 = createNode("ROUTE");
ROUTE511.fromNode = "l_sternoclavicular_RotationInterpolator";
ROUTE511.fromField = "value_changed";
ROUTE511.toNode = "Joe_l_sternoclavicular";
ROUTE511.toField = "rotation";
children[158] = ROUTE511;

ROUTE ROUTE512 = createNode("ROUTE");
ROUTE512.fromNode = "l_acromioclavicular_RotationInterpolator";
ROUTE512.fromField = "value_changed";
ROUTE512.toNode = "Joe_l_acromioclavicular";
ROUTE512.toField = "rotation";
children[159] = ROUTE512;

ROUTE ROUTE513 = createNode("ROUTE");
ROUTE513.fromNode = "l_shoulder_RotationInterpolator";
ROUTE513.fromField = "value_changed";
ROUTE513.toNode = "Joe_l_shoulder";
ROUTE513.toField = "rotation";
children[160] = ROUTE513;

ROUTE ROUTE514 = createNode("ROUTE");
ROUTE514.fromNode = "l_elbow_RotationInterpolator";
ROUTE514.fromField = "value_changed";
ROUTE514.toNode = "Joe_l_elbow";
ROUTE514.toField = "rotation";
children[161] = ROUTE514;

ROUTE ROUTE515 = createNode("ROUTE");
ROUTE515.fromNode = "l_wrist_RotationInterpolator";
ROUTE515.fromField = "value_changed";
ROUTE515.toNode = "Joe_l_radiocarpal";
ROUTE515.toField = "rotation";
children[162] = ROUTE515;

ROUTE ROUTE516 = createNode("ROUTE");
ROUTE516.fromNode = "l_thumb1_RotationInterpolator";
ROUTE516.fromField = "value_changed";
ROUTE516.toNode = "Joe_l_carpometacarpal_1";
ROUTE516.toField = "rotation";
children[163] = ROUTE516;

ROUTE ROUTE517 = createNode("ROUTE");
ROUTE517.fromNode = "l_thumb2_RotationInterpolator";
ROUTE517.fromField = "value_changed";
ROUTE517.toNode = "Joe_l_metacarpophalangeal_1";
ROUTE517.toField = "rotation";
children[164] = ROUTE517;

ROUTE ROUTE518 = createNode("ROUTE");
ROUTE518.fromNode = "l_thumb3_RotationInterpolator";
ROUTE518.fromField = "value_changed";
ROUTE518.toNode = "Joe_l_carpal_interphalangeal_1";
ROUTE518.toField = "rotation";
children[165] = ROUTE518;

ROUTE ROUTE519 = createNode("ROUTE");
ROUTE519.fromNode = "l_index0_RotationInterpolator";
ROUTE519.fromField = "value_changed";
ROUTE519.toNode = "Joe_l_carpometacarpal_2";
ROUTE519.toField = "rotation";
children[166] = ROUTE519;

ROUTE ROUTE520 = createNode("ROUTE");
ROUTE520.fromNode = "l_index1_RotationInterpolator";
ROUTE520.fromField = "value_changed";
ROUTE520.toNode = "Joe_l_metacarpophalangeal_2";
ROUTE520.toField = "rotation";
children[167] = ROUTE520;

ROUTE ROUTE521 = createNode("ROUTE");
ROUTE521.fromNode = "l_index2_RotationInterpolator";
ROUTE521.fromField = "value_changed";
ROUTE521.toNode = "Joe_l_carpal_proximal_interphalangeal_1";
ROUTE521.toField = "rotation";
children[168] = ROUTE521;

ROUTE ROUTE522 = createNode("ROUTE");
ROUTE522.fromNode = "l_index3_RotationInterpolator";
ROUTE522.fromField = "value_changed";
ROUTE522.toNode = "Joe_l_carpal_distal_interphalangeal_1";
ROUTE522.toField = "rotation";
children[169] = ROUTE522;

ROUTE ROUTE523 = createNode("ROUTE");
ROUTE523.fromNode = "l_middle0_RotationInterpolator";
ROUTE523.fromField = "value_changed";
ROUTE523.toNode = "Joe_l_carpometacarpal_3";
ROUTE523.toField = "rotation";
children[170] = ROUTE523;

ROUTE ROUTE524 = createNode("ROUTE");
ROUTE524.fromNode = "l_middle1_RotationInterpolator";
ROUTE524.fromField = "value_changed";
ROUTE524.toNode = "Joe_l_metacarpophalangeal_3";
ROUTE524.toField = "rotation";
children[171] = ROUTE524;

ROUTE ROUTE525 = createNode("ROUTE");
ROUTE525.fromNode = "l_middle2_RotationInterpolator";
ROUTE525.fromField = "value_changed";
ROUTE525.toNode = "Joe_l_carpal_proximal_interphalangeal_2";
ROUTE525.toField = "rotation";
children[172] = ROUTE525;

ROUTE ROUTE526 = createNode("ROUTE");
ROUTE526.fromNode = "l_middle3_RotationInterpolator";
ROUTE526.fromField = "value_changed";
ROUTE526.toNode = "Joe_l_carpal_distal_interphalangeal_2";
ROUTE526.toField = "rotation";
children[173] = ROUTE526;

ROUTE ROUTE527 = createNode("ROUTE");
ROUTE527.fromNode = "l_ring0_RotationInterpolator";
ROUTE527.fromField = "value_changed";
ROUTE527.toNode = "Joe_l_carpometacarpal_4";
ROUTE527.toField = "rotation";
children[174] = ROUTE527;

ROUTE ROUTE528 = createNode("ROUTE");
ROUTE528.fromNode = "l_ring1_RotationInterpolator";
ROUTE528.fromField = "value_changed";
ROUTE528.toNode = "Joe_l_metacarpophalangeal_4";
ROUTE528.toField = "rotation";
children[175] = ROUTE528;

ROUTE ROUTE529 = createNode("ROUTE");
ROUTE529.fromNode = "l_ring2_RotationInterpolator";
ROUTE529.fromField = "value_changed";
ROUTE529.toNode = "Joe_l_carpal_proximal_interphalangeal_3";
ROUTE529.toField = "rotation";
children[176] = ROUTE529;

ROUTE ROUTE530 = createNode("ROUTE");
ROUTE530.fromNode = "l_ring3_RotationInterpolator";
ROUTE530.fromField = "value_changed";
ROUTE530.toNode = "Joe_l_carpal_distal_interphalangeal_3";
ROUTE530.toField = "rotation";
children[177] = ROUTE530;

ROUTE ROUTE531 = createNode("ROUTE");
ROUTE531.fromNode = "l_pinky0_RotationInterpolator";
ROUTE531.fromField = "value_changed";
ROUTE531.toNode = "Joe_l_carpometacarpal_5";
ROUTE531.toField = "rotation";
children[178] = ROUTE531;

ROUTE ROUTE532 = createNode("ROUTE");
ROUTE532.fromNode = "l_pinky1_RotationInterpolator";
ROUTE532.fromField = "value_changed";
ROUTE532.toNode = "Joe_l_metacarpophalangeal_5";
ROUTE532.toField = "rotation";
children[179] = ROUTE532;

ROUTE ROUTE533 = createNode("ROUTE");
ROUTE533.fromNode = "l_pinky2_RotationInterpolator";
ROUTE533.fromField = "value_changed";
ROUTE533.toNode = "Joe_l_carpal_proximal_interphalangeal_4";
ROUTE533.toField = "rotation";
children[180] = ROUTE533;

ROUTE ROUTE534 = createNode("ROUTE");
ROUTE534.fromNode = "l_pinky3_RotationInterpolator";
ROUTE534.fromField = "value_changed";
ROUTE534.toNode = "Joe_l_carpal_distal_interphalangeal_4";
ROUTE534.toField = "rotation";
children[181] = ROUTE534;

ROUTE ROUTE535 = createNode("ROUTE");
ROUTE535.fromNode = "r_sternoclavicular_RotationInterpolator";
ROUTE535.fromField = "value_changed";
ROUTE535.toNode = "Joe_r_sternoclavicular";
ROUTE535.toField = "rotation";
children[182] = ROUTE535;

ROUTE ROUTE536 = createNode("ROUTE");
ROUTE536.fromNode = "r_acromioclavicular_RotationInterpolator";
ROUTE536.fromField = "value_changed";
ROUTE536.toNode = "Joe_r_acromioclavicular";
ROUTE536.toField = "rotation";
children[183] = ROUTE536;

ROUTE ROUTE537 = createNode("ROUTE");
ROUTE537.fromNode = "r_shoulder_RotationInterpolator";
ROUTE537.fromField = "value_changed";
ROUTE537.toNode = "Joe_r_shoulder";
ROUTE537.toField = "rotation";
children[184] = ROUTE537;

ROUTE ROUTE538 = createNode("ROUTE");
ROUTE538.fromNode = "r_elbow_RotationInterpolator";
ROUTE538.fromField = "value_changed";
ROUTE538.toNode = "Joe_r_elbow";
ROUTE538.toField = "rotation";
children[185] = ROUTE538;

ROUTE ROUTE539 = createNode("ROUTE");
ROUTE539.fromNode = "r_wrist_RotationInterpolator";
ROUTE539.fromField = "value_changed";
ROUTE539.toNode = "Joe_r_radiocarpal";
ROUTE539.toField = "rotation";
children[186] = ROUTE539;

ROUTE ROUTE540 = createNode("ROUTE");
ROUTE540.fromNode = "r_thumb1_RotationInterpolator";
ROUTE540.fromField = "value_changed";
ROUTE540.toNode = "Joe_r_carpometacarpal_1";
ROUTE540.toField = "rotation";
children[187] = ROUTE540;

ROUTE ROUTE541 = createNode("ROUTE");
ROUTE541.fromNode = "r_thumb2_RotationInterpolator";
ROUTE541.fromField = "value_changed";
ROUTE541.toNode = "Joe_r_metacarpophalangeal_1";
ROUTE541.toField = "rotation";
children[188] = ROUTE541;

ROUTE ROUTE542 = createNode("ROUTE");
ROUTE542.fromNode = "r_thumb3_RotationInterpolator";
ROUTE542.fromField = "value_changed";
ROUTE542.toNode = "Joe_r_carpal_interphalangeal_1";
ROUTE542.toField = "rotation";
children[189] = ROUTE542;

ROUTE ROUTE543 = createNode("ROUTE");
ROUTE543.fromNode = "r_index0_RotationInterpolator";
ROUTE543.fromField = "value_changed";
ROUTE543.toNode = "Joe_r_carpometacarpal_2";
ROUTE543.toField = "rotation";
children[190] = ROUTE543;

ROUTE ROUTE544 = createNode("ROUTE");
ROUTE544.fromNode = "r_index1_RotationInterpolator";
ROUTE544.fromField = "value_changed";
ROUTE544.toNode = "Joe_r_metacarpophalangeal_2";
ROUTE544.toField = "rotation";
children[191] = ROUTE544;

ROUTE ROUTE545 = createNode("ROUTE");
ROUTE545.fromNode = "r_index2_RotationInterpolator";
ROUTE545.fromField = "value_changed";
ROUTE545.toNode = "Joe_r_carpal_proximal_interphalangeal_1";
ROUTE545.toField = "rotation";
children[192] = ROUTE545;

ROUTE ROUTE546 = createNode("ROUTE");
ROUTE546.fromNode = "r_index3_RotationInterpolator";
ROUTE546.fromField = "value_changed";
ROUTE546.toNode = "Joe_r_carpal_distal_interphalangeal_1";
ROUTE546.toField = "rotation";
children[193] = ROUTE546;

ROUTE ROUTE547 = createNode("ROUTE");
ROUTE547.fromNode = "r_middle0_RotationInterpolator";
ROUTE547.fromField = "value_changed";
ROUTE547.toNode = "Joe_r_carpometacarpal_3";
ROUTE547.toField = "rotation";
children[194] = ROUTE547;

ROUTE ROUTE548 = createNode("ROUTE");
ROUTE548.fromNode = "r_middle1_RotationInterpolator";
ROUTE548.fromField = "value_changed";
ROUTE548.toNode = "Joe_r_metacarpophalangeal_3";
ROUTE548.toField = "rotation";
children[195] = ROUTE548;

ROUTE ROUTE549 = createNode("ROUTE");
ROUTE549.fromNode = "r_middle2_RotationInterpolator";
ROUTE549.fromField = "value_changed";
ROUTE549.toNode = "Joe_r_carpal_proximal_interphalangeal_2";
ROUTE549.toField = "rotation";
children[196] = ROUTE549;

ROUTE ROUTE550 = createNode("ROUTE");
ROUTE550.fromNode = "r_middle3_RotationInterpolator";
ROUTE550.fromField = "value_changed";
ROUTE550.toNode = "Joe_r_carpal_distal_interphalangeal_2";
ROUTE550.toField = "rotation";
children[197] = ROUTE550;

ROUTE ROUTE551 = createNode("ROUTE");
ROUTE551.fromNode = "r_ring0_RotationInterpolator";
ROUTE551.fromField = "value_changed";
ROUTE551.toNode = "Joe_r_carpometacarpal_4";
ROUTE551.toField = "rotation";
children[198] = ROUTE551;

ROUTE ROUTE552 = createNode("ROUTE");
ROUTE552.fromNode = "r_ring1_RotationInterpolator";
ROUTE552.fromField = "value_changed";
ROUTE552.toNode = "Joe_r_metacarpophalangeal_4";
ROUTE552.toField = "rotation";
children[199] = ROUTE552;

ROUTE ROUTE553 = createNode("ROUTE");
ROUTE553.fromNode = "r_ring2_RotationInterpolator";
ROUTE553.fromField = "value_changed";
ROUTE553.toNode = "Joe_r_carpal_proximal_interphalangeal_3";
ROUTE553.toField = "rotation";
children[200] = ROUTE553;

ROUTE ROUTE554 = createNode("ROUTE");
ROUTE554.fromNode = "r_ring3_RotationInterpolator";
ROUTE554.fromField = "value_changed";
ROUTE554.toNode = "Joe_r_carpal_distal_interphalangeal_3";
ROUTE554.toField = "rotation";
children[201] = ROUTE554;

ROUTE ROUTE555 = createNode("ROUTE");
ROUTE555.fromNode = "r_pinky0_RotationInterpolator";
ROUTE555.fromField = "value_changed";
ROUTE555.toNode = "Joe_r_carpometacarpal_5";
ROUTE555.toField = "rotation";
children[202] = ROUTE555;

ROUTE ROUTE556 = createNode("ROUTE");
ROUTE556.fromNode = "r_pinky1_RotationInterpolator";
ROUTE556.fromField = "value_changed";
ROUTE556.toNode = "Joe_r_metacarpophalangeal_5";
ROUTE556.toField = "rotation";
children[203] = ROUTE556;

ROUTE ROUTE557 = createNode("ROUTE");
ROUTE557.fromNode = "r_pinky2_RotationInterpolator";
ROUTE557.fromField = "value_changed";
ROUTE557.toNode = "Joe_r_carpal_proximal_interphalangeal_4";
ROUTE557.toField = "rotation";
children[204] = ROUTE557;

ROUTE ROUTE558 = createNode("ROUTE");
ROUTE558.fromNode = "r_pinky3_RotationInterpolator";
ROUTE558.fromField = "value_changed";
ROUTE558.toNode = "Joe_r_carpal_distal_interphalangeal_4";
ROUTE558.toField = "rotation";
children[205] = ROUTE558;

ROUTE ROUTE559 = createNode("ROUTE");
ROUTE559.fromNode = "KickTimer";
ROUTE559.fromField = "fraction_changed";
ROUTE559.toNode = "skull_tipInterpolator";
ROUTE559.toField = "set_fraction";
children[206] = ROUTE559;

ROUTE ROUTE560 = createNode("ROUTE");
ROUTE560.fromNode = "skull_tipInterpolator";
ROUTE560.fromField = "value_changed";
ROUTE560.toNode = "Joe_skull_tip_raiser_action";
ROUTE560.toField = "weight";
children[207] = ROUTE560;

ROUTE ROUTE561 = createNode("ROUTE");
ROUTE561.fromNode = "KickTimer";
ROUTE561.fromField = "fraction_changed";
ROUTE561.toNode = "SkinInterpolator";
ROUTE561.toField = "set_fraction";
children[208] = ROUTE561;

ROUTE ROUTE562 = createNode("ROUTE");
ROUTE562.fromNode = "SkinInterpolator";
ROUTE562.fromField = "value_changed";
ROUTE562.toNode = "KickTextureTransform";
ROUTE562.toField = "rotation";
children[209] = ROUTE562;

ROUTE ROUTE563 = createNode("ROUTE");
ROUTE563.fromNode = "KickTimer";
ROUTE563.fromField = "fraction_changed";
ROUTE563.toNode = "ball_TranslationInterpolator";
ROUTE563.toField = "set_fraction";
children[210] = ROUTE563;

ROUTE ROUTE564 = createNode("ROUTE");
ROUTE564.fromNode = "ball_TranslationInterpolator";
ROUTE564.fromField = "value_changed";
ROUTE564.toNode = "SBall";
ROUTE564.toField = "translation";
children[211] = ROUTE564;

ROUTE ROUTE565 = createNode("ROUTE");
ROUTE565.fromNode = "KickTimer";
ROUTE565.fromField = "fraction_changed";
ROUTE565.toNode = "ball_RotationInterpolator";
ROUTE565.toField = "set_fraction";
children[212] = ROUTE565;

ROUTE ROUTE566 = createNode("ROUTE");
ROUTE566.fromNode = "ball_RotationInterpolator";
ROUTE566.fromField = "value_changed";
ROUTE566.toNode = "SBall";
ROUTE566.toField = "rotation";
children[213] = ROUTE566;

}
