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
meta3.content = "HAnimDisplacerExamples.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "description";
meta4.content = "This model illustrates use of the HAnimDisplacer node.";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "creator";
meta5.content = "Joe Williams";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "creator";
meta6.content = "Don Brutzman";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "created";
meta7.content = "9 January 2014";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "modified";
meta8.content = "Mon, 15 Sep 2025 05:20:09 GMT";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "TODO";
meta9.content = "Provide clear HAnimDisplacer examples that other can use, with initial displacements of head and left-hand index figure.";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "identifier";
meta10.content = "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/MotionAnimation/HAnimDisplacerExamples.x3d";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "reference";
meta11.content = "../Legacy/JoeSkinTexcoordDisplacerKick.x3d";
head1.meta[9] = meta11;

head = head1;

WorldInfo WorldInfo13 = createNode("WorldInfo");
WorldInfo13.title = "X3D HANIM LOA3 Skeleton, 390 point Skin, texcoords, Displacer, teTrans for Joe_ by Joe";
WorldInfo13.info = new MFString(new java.lang.String["X3D Humanoid V1 LOA3 skeleton","skin from hanim sites, surface features, and some added points","390 points"]);
children = new MFNode();

children[0] = WorldInfo13;

NavigationInfo NavigationInfo14 = createNode("NavigationInfo");
NavigationInfo14.DEF = "Start_NavigationInfo";
NavigationInfo14.speed = 2.5;
NavigationInfo14.headlight = False;
children[1] = NavigationInfo14;

Background Background15 = createNode("Background");
Background15.DEF = "blue_Background";
children[2] = Background15;

SpotLight SpotLight16 = createNode("SpotLight");
SpotLight16.DEF = "light1";
SpotLight16.color = new SFColor(new float[0.8,0.8,1]);
SpotLight16.ambientIntensity = 0.7;
SpotLight16.location = new SFVec3f(new float[0,3,3]);
SpotLight16.direction = new SFVec3f(new float[0,0,0]);
SpotLight16.radius = 10;
SpotLight16.beamWidth = 1.5;
SpotLight16.cutOffAngle = 0.6;
children[3] = SpotLight16;

PointLight PointLight17 = createNode("PointLight");
PointLight17.DEF = "light2";
PointLight17.color = new SFColor(new float[0.8,0.8,1]);
PointLight17.ambientIntensity = 0.7;
PointLight17.location = new SFVec3f(new float[0,10,-7]);
children[4] = PointLight17;

Viewpoint Viewpoint18 = createNode("Viewpoint");
Viewpoint18.DEF = "Scene_InclinedView";
Viewpoint18.description = "Scene_Inclined View";
Viewpoint18.position = new SFVec3f(new float[1.62,1.05,3.06]);
Viewpoint18.orientation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
Viewpoint18.centerOfRotation = new SFVec3f(new float[0,0.85,0]);
children[5] = Viewpoint18;

Viewpoint Viewpoint19 = createNode("Viewpoint");
Viewpoint19.DEF = "Scene_IFrontView";
Viewpoint19.description = "Scene_Front View";
Viewpoint19.position = new SFVec3f(new float[0,0.8,2.58]);
Viewpoint19.centerOfRotation = new SFVec3f(new float[0,0.8,0]);
children[6] = Viewpoint19;

Viewpoint Viewpoint20 = createNode("Viewpoint");
Viewpoint20.DEF = "Scene_ISideView";
Viewpoint20.description = "Scene_Side View";
Viewpoint20.position = new SFVec3f(new float[2.6,0.5,0]);
Viewpoint20.orientation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint20.centerOfRotation = new SFVec3f(new float[0,0.8,0]);
children[7] = Viewpoint20;

Viewpoint Viewpoint21 = createNode("Viewpoint");
Viewpoint21.DEF = "Scene_BackView";
Viewpoint21.description = "Scene_Back View";
Viewpoint21.position = new SFVec3f(new float[0,2.5,-3]);
Viewpoint21.orientation = new SFRotation(new float[0,1,0,3.14]);
Viewpoint21.centerOfRotation = new SFVec3f(new float[0,1.5,0]);
children[8] = Viewpoint21;

Viewpoint Viewpoint22 = createNode("Viewpoint");
Viewpoint22.DEF = "Scene_TopView";
Viewpoint22.description = "Scene_Top View";
Viewpoint22.position = new SFVec3f(new float[0,3.5,0]);
Viewpoint22.orientation = new SFRotation(new float[1,0,0,-1.5708]);
Viewpoint22.centerOfRotation = new SFVec3f(new float[0,1.5,0]);
children[9] = Viewpoint22;

Group Group23 = createNode("Group");
Group23.DEF = "Joe_Humanoid";
HAnimHumanoid HAnimHumanoid24 = createNode("HAnimHumanoid");
HAnimHumanoid24.DEF = "Joe_Human";
HAnimHumanoid24.name = "Human";
HAnimJoint HAnimJoint25 = createNode("HAnimJoint");
HAnimJoint25.DEF = "Joe_humanoid_root";
HAnimJoint25.name = "humanoid_root";
HAnimJoint25.center = new SFVec3f(new float[0,0.875,0]);
HAnimSegment HAnimSegment26 = createNode("HAnimSegment");
HAnimSegment26.DEF = "Joe_sacrum";
HAnimSegment26.name = "sacrum";
HAnimSite HAnimSite27 = createNode("HAnimSite");
HAnimSite27.DEF = "Joe_humanoid_sacrum_pt";
HAnimSite27.name = "humanoid_sacrum_pt";
HAnimSite27.translation = new SFVec3f(new float[0,0.875,0]);
Shape Shape28 = createNode("Shape");
Shape28.DEF = "RedBox";
Appearance Appearance29 = createNode("Appearance");
Material Material30 = createNode("Material");
Material30.diffuseColor = new SFColor(new float[1,0,0]);
Appearance29.material = Material30;

Shape28.appearance = Appearance29;

Box Box31 = createNode("Box");
Box31.size = new SFVec3f(new float[0.01,0.01,0.01]);
Shape28.geometry = Box31;

HAnimSite27.children = new MFNode();

HAnimSite27.children[0] = Shape28;

HAnimSegment26.children = new MFNode();

HAnimSegment26.children[0] = HAnimSite27;

HAnimSite HAnimSite32 = createNode("HAnimSite");
HAnimSite32.DEF = "Joe_humanoid_origin_view";
HAnimSite32.name = "humanoid_origin_view";
Transform Transform33 = createNode("Transform");
Transform33.DEF = "HAnimHumanoidOrigin";
Transform33.scale = new SFVec3f(new float[0.175,0.175,0.175]);
Viewpoint Viewpoint34 = createNode("Viewpoint");
Viewpoint34.DEF = "ViewBodyRootAxes";
Viewpoint34.description = "Joe_HAnim Root Coordinate Axes View";
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

HAnimSegment26.children[1] = HAnimSite32;

HAnimJoint25.children = new MFNode();

HAnimJoint25.children[0] = HAnimSegment26;

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
HAnimJoint43.DEF = "Joe_l_subtalar";
HAnimJoint43.name = "l_subtalar";
HAnimJoint43.center = new SFVec3f(new float[0.115,0.031,0.03]);
HAnimJoint43.skinCoordIndex = new MFInt32(new int[346,347,348,71]);
HAnimJoint43.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint HAnimJoint44 = createNode("HAnimJoint");
HAnimJoint44.DEF = "Joe_l_midtarsal";
HAnimJoint44.name = "l_midtarsal";
HAnimJoint44.center = new SFVec3f(new float[0.115,0.037,0.09]);
HAnimJoint44.skinCoordIndex = new MFInt32(new int[349,350,351,352]);
HAnimJoint44.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint HAnimJoint45 = createNode("HAnimJoint");
HAnimJoint45.DEF = "Joe_l_metatarsal";
HAnimJoint45.name = "l_metatarsal";
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
HAnimJoint49.DEF = "Joe_r_subtalar";
HAnimJoint49.name = "r_subtalar";
HAnimJoint49.center = new SFVec3f(new float[-0.1,0.015,-0.01]);
HAnimJoint49.skinCoordIndex = new MFInt32(new int[374,375,376]);
HAnimJoint49.skinCoordWeight = new MFFloat(new float[1,1,1]);
HAnimJoint HAnimJoint50 = createNode("HAnimJoint");
HAnimJoint50.DEF = "Joe_r_midtarsal";
HAnimJoint50.name = "r_midtarsal";
HAnimJoint50.center = new SFVec3f(new float[-0.115,0.037,0.09]);
HAnimJoint50.skinCoordIndex = new MFInt32(new int[377,378,379,380]);
HAnimJoint50.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint HAnimJoint51 = createNode("HAnimJoint");
HAnimJoint51.DEF = "Joe_r_metatarsal";
HAnimJoint51.name = "r_metatarsal";
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

HAnimJoint25.children[1] = HAnimJoint39;

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
HAnimDisplacer77.DEF = "Joe_skull_tip";
HAnimDisplacer77.name = "skull_tip_raiser_action";
HAnimDisplacer77.weight = 0.9682372;
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
HAnimJoint81.name = "l_eyelid_joint";
HAnimJoint81.center = new SFVec3f(new float[-0.034,1.659,0.06]);
HAnimJoint76.children[4] = HAnimJoint81;

HAnimJoint HAnimJoint82 = createNode("HAnimJoint");
HAnimJoint82.DEF = "Joe_r_eyeball_joint";
HAnimJoint82.name = "l_eyeball_joint";
HAnimJoint82.center = new SFVec3f(new float[-0.034,1.659,0.06]);
HAnimJoint76.children[5] = HAnimJoint82;

HAnimJoint HAnimJoint83 = createNode("HAnimJoint");
HAnimJoint83.DEF = "Joe_r_eyebrow_joint";
HAnimJoint83.name = "l_eyebrow_joint";
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

HAnimJoint HAnimJoint85 = createNode("HAnimJoint");
HAnimJoint85.DEF = "Joe_l_sternoclavicular";
HAnimJoint85.name = "l_sternoclavicular";
HAnimJoint85.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint85.skinCoordIndex = new MFInt32(new int[12]);
HAnimJoint85.skinCoordWeight = new MFFloat(new float[1]);
HAnimJoint HAnimJoint86 = createNode("HAnimJoint");
HAnimJoint86.DEF = "Joe_l_acromioclavicular";
HAnimJoint86.name = "l_acromioclavicular";
HAnimJoint86.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint86.skinCoordIndex = new MFInt32(new int[79]);
HAnimJoint86.skinCoordWeight = new MFFloat(new float[1]);
HAnimJoint HAnimJoint87 = createNode("HAnimJoint");
HAnimJoint87.DEF = "Joe_l_shoulder";
HAnimJoint87.name = "l_shoulder";
HAnimJoint87.rotation = new SFRotation(new float[-0.999999999999989,0,0,0.177942317505106]);
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
HAnimJoint89.DEF = "Joe_l_wrist";
HAnimJoint89.name = "l_wrist";
HAnimJoint89.center = new SFVec3f(new float[0.2,0.87,-0.04]);
HAnimJoint89.skinCoordIndex = new MFInt32(new int[119,120,121,122,123,124,125,126]);
HAnimJoint89.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint HAnimJoint90 = createNode("HAnimJoint");
HAnimJoint90.DEF = "Joe_l_thumb1";
HAnimJoint90.name = "l_thumb1";
HAnimJoint90.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint90.skinCoordIndex = new MFInt32(new int[127,128]);
HAnimJoint90.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint HAnimJoint91 = createNode("HAnimJoint");
HAnimJoint91.DEF = "Joe_l_thumb2";
HAnimJoint91.name = "l_thumb2";
HAnimJoint91.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint91.skinCoordIndex = new MFInt32(new int[138,139,140,141,142,143]);
HAnimJoint91.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1]);
HAnimJoint HAnimJoint92 = createNode("HAnimJoint");
HAnimJoint92.DEF = "Joe_l_thumb3";
HAnimJoint92.name = "l_thumb3";
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
HAnimJoint93.DEF = "Joe_l_index0";
HAnimJoint93.name = "l_index0";
HAnimJoint93.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint93.skinCoordIndex = new MFInt32(new int[129,130]);
HAnimJoint93.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint HAnimJoint94 = createNode("HAnimJoint");
HAnimJoint94.DEF = "Joe_l_index1";
HAnimJoint94.name = "l_index1";
HAnimJoint94.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint94.skinCoordIndex = new MFInt32(new int[138,139,140,153,154,155,163]);
HAnimJoint94.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1,0.5]);
HAnimJoint HAnimJoint95 = createNode("HAnimJoint");
HAnimJoint95.DEF = "Joe_l_index2";
HAnimJoint95.name = "l_index2";
HAnimJoint95.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint95.skinCoordIndex = new MFInt32(new int[166,167,168,169]);
HAnimJoint95.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimDisplacer HAnimDisplacer96 = createNode("HAnimDisplacer");
HAnimDisplacer96.DEF = "Joe_L_finger_tips";
HAnimDisplacer96.name = "Joe_L_finger_tips_raiser_action";
HAnimDisplacer96.weight = 0.2205769;
HAnimDisplacer96.coordIndex = new MFInt32(new int[172,173,174]);
HAnimDisplacer96.displacements = new MFVec3f(new float[0,-1.15,0,0,-1.15,0,0,-1.15,0]);
HAnimJoint95.displacers = new MFNode();

HAnimJoint95.displacers[0] = HAnimDisplacer96;

HAnimJoint HAnimJoint97 = createNode("HAnimJoint");
HAnimJoint97.DEF = "Joe_l_index3";
HAnimJoint97.name = "l_index3";
HAnimJoint97.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint97.skinCoordIndex = new MFInt32(new int[170,171,172,173,174,175,176,177,178]);
HAnimJoint97.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint95.children[1] = HAnimJoint97;

HAnimJoint94.children = new MFNode();

HAnimJoint94.children[0] = HAnimJoint95;

HAnimJoint93.children = new MFNode();

HAnimJoint93.children[0] = HAnimJoint94;

HAnimJoint89.children[1] = HAnimJoint93;

HAnimJoint HAnimJoint98 = createNode("HAnimJoint");
HAnimJoint98.DEF = "Joe_l_middle0";
HAnimJoint98.name = "l_middle0";
HAnimJoint98.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint98.skinCoordIndex = new MFInt32(new int[131,132]);
HAnimJoint98.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint HAnimJoint99 = createNode("HAnimJoint");
HAnimJoint99.DEF = "Joe_l_middle1";
HAnimJoint99.name = "l_middle1";
HAnimJoint99.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint99.skinCoordIndex = new MFInt32(new int[156,157,163,164]);
HAnimJoint99.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimJoint HAnimJoint100 = createNode("HAnimJoint");
HAnimJoint100.DEF = "Joe_l_middle2";
HAnimJoint100.name = "l_middle2";
HAnimJoint100.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint100.skinCoordIndex = new MFInt32(new int[179,180,181,182]);
HAnimJoint100.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint HAnimJoint101 = createNode("HAnimJoint");
HAnimJoint101.DEF = "Joe_l_middle3";
HAnimJoint101.name = "l_middle3";
HAnimJoint101.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint101.skinCoordIndex = new MFInt32(new int[183,184,185,186,187,188,189,190,191]);
HAnimJoint101.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint100.children = new MFNode();

HAnimJoint100.children[0] = HAnimJoint101;

HAnimJoint99.children = new MFNode();

HAnimJoint99.children[0] = HAnimJoint100;

HAnimJoint98.children = new MFNode();

HAnimJoint98.children[0] = HAnimJoint99;

HAnimJoint89.children[2] = HAnimJoint98;

HAnimJoint HAnimJoint102 = createNode("HAnimJoint");
HAnimJoint102.DEF = "Joe_l_ring0";
HAnimJoint102.name = "l_ring0";
HAnimJoint102.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint102.skinCoordIndex = new MFInt32(new int[133,134]);
HAnimJoint102.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint HAnimJoint103 = createNode("HAnimJoint");
HAnimJoint103.DEF = "Joe_l_ring1";
HAnimJoint103.name = "l_ring1";
HAnimJoint103.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint103.skinCoordIndex = new MFInt32(new int[158,159,164,165]);
HAnimJoint103.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimJoint HAnimJoint104 = createNode("HAnimJoint");
HAnimJoint104.DEF = "Joe_l_ring2";
HAnimJoint104.name = "l_ring2";
HAnimJoint104.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint104.skinCoordIndex = new MFInt32(new int[192,193,194,195]);
HAnimJoint104.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint HAnimJoint105 = createNode("HAnimJoint");
HAnimJoint105.DEF = "Joe_l_ring3";
HAnimJoint105.name = "l_ring3";
HAnimJoint105.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint105.skinCoordIndex = new MFInt32(new int[196,197,198,199,200,201,202,203,204]);
HAnimJoint105.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint104.children = new MFNode();

HAnimJoint104.children[0] = HAnimJoint105;

HAnimJoint103.children = new MFNode();

HAnimJoint103.children[0] = HAnimJoint104;

HAnimJoint102.children = new MFNode();

HAnimJoint102.children[0] = HAnimJoint103;

HAnimJoint89.children[3] = HAnimJoint102;

HAnimJoint HAnimJoint106 = createNode("HAnimJoint");
HAnimJoint106.DEF = "Joe_l_pinky0";
HAnimJoint106.name = "l_pinky0";
HAnimJoint106.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint106.skinCoordIndex = new MFInt32(new int[135,136,137,165]);
HAnimJoint106.skinCoordWeight = new MFFloat(new float[1,1,1,0.5]);
HAnimJoint HAnimJoint107 = createNode("HAnimJoint");
HAnimJoint107.DEF = "Joe_l_pinky1";
HAnimJoint107.name = "l_pinky1";
HAnimJoint107.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint107.skinCoordIndex = new MFInt32(new int[160,161,162]);
HAnimJoint107.skinCoordWeight = new MFFloat(new float[1,1,1]);
HAnimJoint HAnimJoint108 = createNode("HAnimJoint");
HAnimJoint108.DEF = "Joe_l_pinky2";
HAnimJoint108.name = "l_pinky2";
HAnimJoint108.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint108.skinCoordIndex = new MFInt32(new int[205,206,207,208]);
HAnimJoint108.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint HAnimJoint109 = createNode("HAnimJoint");
HAnimJoint109.DEF = "Joe_l_pinky3";
HAnimJoint109.name = "l_pinky3";
HAnimJoint109.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint109.skinCoordIndex = new MFInt32(new int[209,210,211,212,213,214,215,216,217]);
HAnimJoint109.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint108.children = new MFNode();

HAnimJoint108.children[0] = HAnimJoint109;

HAnimJoint107.children = new MFNode();

HAnimJoint107.children[0] = HAnimJoint108;

HAnimJoint106.children = new MFNode();

HAnimJoint106.children[0] = HAnimJoint107;

HAnimJoint89.children[4] = HAnimJoint106;

HAnimJoint88.children = new MFNode();

HAnimJoint88.children[0] = HAnimJoint89;

HAnimJoint87.children = new MFNode();

HAnimJoint87.children[0] = HAnimJoint88;

HAnimJoint86.children = new MFNode();

HAnimJoint86.children[0] = HAnimJoint87;

HAnimJoint85.children = new MFNode();

HAnimJoint85.children[0] = HAnimJoint86;

HAnimJoint69.children[1] = HAnimJoint85;

HAnimJoint HAnimJoint110 = createNode("HAnimJoint");
HAnimJoint110.DEF = "Joe_r_sternoclavicular";
HAnimJoint110.name = "r_sternoclavicular";
HAnimJoint110.center = new SFVec3f(new float[-0.03,1.46,0]);
HAnimJoint110.skinCoordIndex = new MFInt32(new int[10]);
HAnimJoint110.skinCoordWeight = new MFFloat(new float[1]);
HAnimJoint HAnimJoint111 = createNode("HAnimJoint");
HAnimJoint111.DEF = "Joe_r_acromioclavicular";
HAnimJoint111.name = "r_acromioclavicular";
HAnimJoint111.center = new SFVec3f(new float[-0.09,1.41,-0.11]);
HAnimJoint111.skinCoordIndex = new MFInt32(new int[77,29]);
HAnimJoint111.skinCoordWeight = new MFFloat(new float[1,0.9]);
HAnimJoint HAnimJoint112 = createNode("HAnimJoint");
HAnimJoint112.DEF = "Joe_r_shoulder";
HAnimJoint112.name = "r_shoulder";
HAnimJoint112.rotation = new SFRotation(new float[-0.999999999999989,0,0,0.177942317505106]);
HAnimJoint112.center = new SFVec3f(new float[-0.2,1.44,-0.04]);
HAnimJoint112.skinCoordIndex = new MFInt32(new int[29,30,32,78,218,219,220,221,86,88]);
HAnimJoint112.skinCoordWeight = new MFFloat(new float[0.1,1,1,1,1,1,1,1,0.3,0.2]);
HAnimJoint HAnimJoint113 = createNode("HAnimJoint");
HAnimJoint113.DEF = "Joe_r_elbow";
HAnimJoint113.name = "r_elbow";
HAnimJoint113.center = new SFVec3f(new float[-0.2,1.1388,-0.04]);
HAnimJoint113.skinCoordIndex = new MFInt32(new int[33,34,35,225,226,227,228,229,231,232,233,234]);
HAnimJoint113.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint HAnimJoint114 = createNode("HAnimJoint");
HAnimJoint114.DEF = "Joe_r_wrist";
HAnimJoint114.name = "r_wrist";
HAnimJoint114.center = new SFVec3f(new float[-0.2,0.89,-0.04]);
HAnimJoint114.skinCoordIndex = new MFInt32(new int[235,236,237,238,239,240,241,242]);
HAnimJoint114.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint HAnimJoint115 = createNode("HAnimJoint");
HAnimJoint115.DEF = "Joe_r_thumb1";
HAnimJoint115.name = "r_thumb1";
HAnimJoint115.center = new SFVec3f(new float[-0.2,0.85,0]);
HAnimJoint115.skinCoordIndex = new MFInt32(new int[243,244]);
HAnimJoint115.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint HAnimJoint116 = createNode("HAnimJoint");
HAnimJoint116.DEF = "Joe_r_thumb2";
HAnimJoint116.name = "r_thumb2";
HAnimJoint116.center = new SFVec3f(new float[-0.2,0.82,0.03]);
HAnimJoint116.skinCoordIndex = new MFInt32(new int[254,255,256,257,258,259]);
HAnimJoint116.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1]);
HAnimJoint HAnimJoint117 = createNode("HAnimJoint");
HAnimJoint117.DEF = "Joe_r_thumb3";
HAnimJoint117.name = "r_thumb3";
HAnimJoint117.center = new SFVec3f(new float[-0.2,0.8,0.05]);
HAnimJoint117.skinCoordIndex = new MFInt32(new int[260,261,262,263,264,265,266,267,268]);
HAnimJoint117.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint116.children = new MFNode();

HAnimJoint116.children[0] = HAnimJoint117;

HAnimJoint115.children = new MFNode();

HAnimJoint115.children[0] = HAnimJoint116;

HAnimJoint114.children = new MFNode();

HAnimJoint114.children[0] = HAnimJoint115;

HAnimJoint HAnimJoint118 = createNode("HAnimJoint");
HAnimJoint118.DEF = "Joe_r_index0";
HAnimJoint118.name = "r_index0";
HAnimJoint118.center = new SFVec3f(new float[-0.2,0.84,-0.015]);
HAnimJoint118.skinCoordIndex = new MFInt32(new int[245,246]);
HAnimJoint118.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint HAnimJoint119 = createNode("HAnimJoint");
HAnimJoint119.DEF = "Joe_r_index1";
HAnimJoint119.name = "r_index1";
HAnimJoint119.center = new SFVec3f(new float[-0.2,0.793,-0.015]);
HAnimJoint119.skinCoordIndex = new MFInt32(new int[254,255,256,269,270,271,279]);
HAnimJoint119.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1,0.5]);
HAnimJoint HAnimJoint120 = createNode("HAnimJoint");
HAnimJoint120.DEF = "Joe_r_index2";
HAnimJoint120.name = "r_index2";
HAnimJoint120.center = new SFVec3f(new float[-0.2,0.745,-0.015]);
HAnimJoint120.skinCoordIndex = new MFInt32(new int[282,283,284,285]);
HAnimJoint120.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint HAnimJoint121 = createNode("HAnimJoint");
HAnimJoint121.DEF = "Joe_r_index3";
HAnimJoint121.name = "r_index3";
HAnimJoint121.center = new SFVec3f(new float[-0.2,0.72,-0.015]);
HAnimJoint121.skinCoordIndex = new MFInt32(new int[286,287,288,289,290,291,292,293,294]);
HAnimJoint121.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint120.children = new MFNode();

HAnimJoint120.children[0] = HAnimJoint121;

HAnimJoint119.children = new MFNode();

HAnimJoint119.children[0] = HAnimJoint120;

HAnimJoint118.children = new MFNode();

HAnimJoint118.children[0] = HAnimJoint119;

HAnimJoint114.children[1] = HAnimJoint118;

HAnimJoint HAnimJoint122 = createNode("HAnimJoint");
HAnimJoint122.DEF = "Joe_r_middle0";
HAnimJoint122.name = "r_middle0";
HAnimJoint122.center = new SFVec3f(new float[-0.2,0.835,-0.04]);
HAnimJoint122.skinCoordIndex = new MFInt32(new int[247,248]);
HAnimJoint122.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint HAnimJoint123 = createNode("HAnimJoint");
HAnimJoint123.DEF = "Joe_r_middle1";
HAnimJoint123.name = "r_middle1";
HAnimJoint123.center = new SFVec3f(new float[-0.2,0.788,-0.04]);
HAnimJoint123.skinCoordIndex = new MFInt32(new int[272,273,279,280]);
HAnimJoint123.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimJoint HAnimJoint124 = createNode("HAnimJoint");
HAnimJoint124.DEF = "Joe_r_middle2";
HAnimJoint124.name = "r_middle2";
HAnimJoint124.center = new SFVec3f(new float[-0.2,0.74,-0.04]);
HAnimJoint124.skinCoordIndex = new MFInt32(new int[295,296,297,298]);
HAnimJoint124.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint HAnimJoint125 = createNode("HAnimJoint");
HAnimJoint125.DEF = "Joe_r_middle3";
HAnimJoint125.name = "r_middle3";
HAnimJoint125.center = new SFVec3f(new float[-0.2,0.7142,-0.04]);
HAnimJoint125.skinCoordIndex = new MFInt32(new int[299,300,301,302,303,304,305,306,307]);
HAnimJoint125.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint124.children = new MFNode();

HAnimJoint124.children[0] = HAnimJoint125;

HAnimJoint123.children = new MFNode();

HAnimJoint123.children[0] = HAnimJoint124;

HAnimJoint122.children = new MFNode();

HAnimJoint122.children[0] = HAnimJoint123;

HAnimJoint114.children[2] = HAnimJoint122;

HAnimJoint HAnimJoint126 = createNode("HAnimJoint");
HAnimJoint126.DEF = "Joe_r_ring0";
HAnimJoint126.name = "r_ring0";
HAnimJoint126.center = new SFVec3f(new float[-0.2,0.835,-0.065]);
HAnimJoint126.skinCoordIndex = new MFInt32(new int[249,250]);
HAnimJoint126.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint HAnimJoint127 = createNode("HAnimJoint");
HAnimJoint127.DEF = "Joe_r_ring1";
HAnimJoint127.name = "r_ring1";
HAnimJoint127.center = new SFVec3f(new float[-0.2,0.793,-0.065]);
HAnimJoint127.skinCoordIndex = new MFInt32(new int[274,275,280,281]);
HAnimJoint127.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimJoint HAnimJoint128 = createNode("HAnimJoint");
HAnimJoint128.DEF = "Joe_r_ring2";
HAnimJoint128.name = "r_ring2";
HAnimJoint128.center = new SFVec3f(new float[-0.2,0.74,-0.065]);
HAnimJoint128.skinCoordIndex = new MFInt32(new int[308,309,310,311]);
HAnimJoint128.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint HAnimJoint129 = createNode("HAnimJoint");
HAnimJoint129.DEF = "Joe_r_ring3";
HAnimJoint129.name = "r_ring3";
HAnimJoint129.center = new SFVec3f(new float[-0.2,0.7177,-0.065]);
HAnimJoint129.skinCoordIndex = new MFInt32(new int[312,313,314,315,316,317,318,319,320]);
HAnimJoint129.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint128.children = new MFNode();

HAnimJoint128.children[0] = HAnimJoint129;

HAnimJoint127.children = new MFNode();

HAnimJoint127.children[0] = HAnimJoint128;

HAnimJoint126.children = new MFNode();

HAnimJoint126.children[0] = HAnimJoint127;

HAnimJoint114.children[3] = HAnimJoint126;

HAnimJoint HAnimJoint130 = createNode("HAnimJoint");
HAnimJoint130.DEF = "Joe_r_pinky0";
HAnimJoint130.name = "r_pinky0";
HAnimJoint130.center = new SFVec3f(new float[-0.2,0.84,-0.085]);
HAnimJoint130.skinCoordIndex = new MFInt32(new int[251,252,253,281]);
HAnimJoint130.skinCoordWeight = new MFFloat(new float[1,1,1,0.5]);
HAnimJoint HAnimJoint131 = createNode("HAnimJoint");
HAnimJoint131.DEF = "Joe_r_pinky1";
HAnimJoint131.name = "r_pinky1";
HAnimJoint131.center = new SFVec3f(new float[-0.2,0.79,-0.085]);
HAnimJoint131.skinCoordIndex = new MFInt32(new int[276,277,278]);
HAnimJoint131.skinCoordWeight = new MFFloat(new float[1,1,1]);
HAnimJoint HAnimJoint132 = createNode("HAnimJoint");
HAnimJoint132.DEF = "Joe_r_pinky2";
HAnimJoint132.name = "r_pinky2";
HAnimJoint132.center = new SFVec3f(new float[-0.2,0.755,-0.085]);
HAnimJoint132.skinCoordIndex = new MFInt32(new int[321,322,323,324]);
HAnimJoint132.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint HAnimJoint133 = createNode("HAnimJoint");
HAnimJoint133.DEF = "Joe_r_pinky3";
HAnimJoint133.name = "r_pinky3";
HAnimJoint133.center = new SFVec3f(new float[-0.2,0.735,-0.09]);
HAnimJoint133.skinCoordIndex = new MFInt32(new int[325,326,327,328,329,330,331,332,333]);
HAnimJoint133.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint132.children = new MFNode();

HAnimJoint132.children[0] = HAnimJoint133;

HAnimJoint131.children = new MFNode();

HAnimJoint131.children[0] = HAnimJoint132;

HAnimJoint130.children = new MFNode();

HAnimJoint130.children[0] = HAnimJoint131;

HAnimJoint114.children[4] = HAnimJoint130;

HAnimJoint113.children = new MFNode();

HAnimJoint113.children[0] = HAnimJoint114;

HAnimJoint112.children = new MFNode();

HAnimJoint112.children[0] = HAnimJoint113;

HAnimJoint111.children = new MFNode();

HAnimJoint111.children[0] = HAnimJoint112;

HAnimJoint110.children = new MFNode();

HAnimJoint110.children[0] = HAnimJoint111;

HAnimJoint69.children[2] = HAnimJoint110;

HAnimJoint68.children = new MFNode();

HAnimJoint68.children[0] = HAnimJoint69;

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

HAnimJoint25.children[2] = HAnimJoint52;

HAnimHumanoid24.joints = new MFNode();

HAnimHumanoid24.joints[0] = HAnimJoint25;

HAnimJoint HAnimJoint134 = createNode("HAnimJoint");
HAnimJoint134.USE = "Joe_humanoid_root";
HAnimHumanoid24.joints[1] = HAnimJoint134;

HAnimJoint HAnimJoint135 = createNode("HAnimJoint");
HAnimJoint135.USE = "Joe_l_acromioclavicular";
HAnimHumanoid24.joints[2] = HAnimJoint135;

HAnimJoint HAnimJoint136 = createNode("HAnimJoint");
HAnimJoint136.USE = "Joe_l_talocrural";
HAnimHumanoid24.joints[3] = HAnimJoint136;

HAnimJoint HAnimJoint137 = createNode("HAnimJoint");
HAnimJoint137.USE = "Joe_l_elbow";
HAnimHumanoid24.joints[4] = HAnimJoint137;

HAnimJoint HAnimJoint138 = createNode("HAnimJoint");
HAnimJoint138.USE = "Joe_l_eyeball_joint";
HAnimHumanoid24.joints[5] = HAnimJoint138;

HAnimJoint HAnimJoint139 = createNode("HAnimJoint");
HAnimJoint139.USE = "Joe_l_eyebrow_joint";
HAnimHumanoid24.joints[6] = HAnimJoint139;

HAnimJoint HAnimJoint140 = createNode("HAnimJoint");
HAnimJoint140.USE = "Joe_l_eyelid_joint";
HAnimHumanoid24.joints[7] = HAnimJoint140;

HAnimJoint HAnimJoint141 = createNode("HAnimJoint");
HAnimJoint141.USE = "Joe_l_hip";
HAnimHumanoid24.joints[8] = HAnimJoint141;

HAnimJoint HAnimJoint142 = createNode("HAnimJoint");
HAnimJoint142.USE = "Joe_l_index0";
HAnimHumanoid24.joints[9] = HAnimJoint142;

HAnimJoint HAnimJoint143 = createNode("HAnimJoint");
HAnimJoint143.USE = "Joe_l_index1";
HAnimHumanoid24.joints[10] = HAnimJoint143;

HAnimJoint HAnimJoint144 = createNode("HAnimJoint");
HAnimJoint144.USE = "Joe_l_index2";
HAnimHumanoid24.joints[11] = HAnimJoint144;

HAnimJoint HAnimJoint145 = createNode("HAnimJoint");
HAnimJoint145.USE = "Joe_l_index3";
HAnimHumanoid24.joints[12] = HAnimJoint145;

HAnimJoint HAnimJoint146 = createNode("HAnimJoint");
HAnimJoint146.USE = "Joe_l_knee";
HAnimHumanoid24.joints[13] = HAnimJoint146;

HAnimJoint HAnimJoint147 = createNode("HAnimJoint");
HAnimJoint147.USE = "Joe_l_metatarsal";
HAnimHumanoid24.joints[14] = HAnimJoint147;

HAnimJoint HAnimJoint148 = createNode("HAnimJoint");
HAnimJoint148.USE = "Joe_l_middle0";
HAnimHumanoid24.joints[15] = HAnimJoint148;

HAnimJoint HAnimJoint149 = createNode("HAnimJoint");
HAnimJoint149.USE = "Joe_l_middle1";
HAnimHumanoid24.joints[16] = HAnimJoint149;

HAnimJoint HAnimJoint150 = createNode("HAnimJoint");
HAnimJoint150.USE = "Joe_l_middle2";
HAnimHumanoid24.joints[17] = HAnimJoint150;

HAnimJoint HAnimJoint151 = createNode("HAnimJoint");
HAnimJoint151.USE = "Joe_l_middle3";
HAnimHumanoid24.joints[18] = HAnimJoint151;

HAnimJoint HAnimJoint152 = createNode("HAnimJoint");
HAnimJoint152.USE = "Joe_l_midtarsal";
HAnimHumanoid24.joints[19] = HAnimJoint152;

HAnimJoint HAnimJoint153 = createNode("HAnimJoint");
HAnimJoint153.USE = "Joe_l_pinky0";
HAnimHumanoid24.joints[20] = HAnimJoint153;

HAnimJoint HAnimJoint154 = createNode("HAnimJoint");
HAnimJoint154.USE = "Joe_l_pinky1";
HAnimHumanoid24.joints[21] = HAnimJoint154;

HAnimJoint HAnimJoint155 = createNode("HAnimJoint");
HAnimJoint155.USE = "Joe_l_pinky2";
HAnimHumanoid24.joints[22] = HAnimJoint155;

HAnimJoint HAnimJoint156 = createNode("HAnimJoint");
HAnimJoint156.USE = "Joe_l_pinky3";
HAnimHumanoid24.joints[23] = HAnimJoint156;

HAnimJoint HAnimJoint157 = createNode("HAnimJoint");
HAnimJoint157.USE = "Joe_l_ring0";
HAnimHumanoid24.joints[24] = HAnimJoint157;

HAnimJoint HAnimJoint158 = createNode("HAnimJoint");
HAnimJoint158.USE = "Joe_l_ring1";
HAnimHumanoid24.joints[25] = HAnimJoint158;

HAnimJoint HAnimJoint159 = createNode("HAnimJoint");
HAnimJoint159.USE = "Joe_l_ring2";
HAnimHumanoid24.joints[26] = HAnimJoint159;

HAnimJoint HAnimJoint160 = createNode("HAnimJoint");
HAnimJoint160.USE = "Joe_l_ring3";
HAnimHumanoid24.joints[27] = HAnimJoint160;

HAnimJoint HAnimJoint161 = createNode("HAnimJoint");
HAnimJoint161.USE = "Joe_l_shoulder";
HAnimHumanoid24.joints[28] = HAnimJoint161;

HAnimJoint HAnimJoint162 = createNode("HAnimJoint");
HAnimJoint162.USE = "Joe_l_sternoclavicular";
HAnimHumanoid24.joints[29] = HAnimJoint162;

HAnimJoint HAnimJoint163 = createNode("HAnimJoint");
HAnimJoint163.USE = "Joe_l_subtalar";
HAnimHumanoid24.joints[30] = HAnimJoint163;

HAnimJoint HAnimJoint164 = createNode("HAnimJoint");
HAnimJoint164.USE = "Joe_l_thumb1";
HAnimHumanoid24.joints[31] = HAnimJoint164;

HAnimJoint HAnimJoint165 = createNode("HAnimJoint");
HAnimJoint165.USE = "Joe_l_thumb2";
HAnimHumanoid24.joints[32] = HAnimJoint165;

HAnimJoint HAnimJoint166 = createNode("HAnimJoint");
HAnimJoint166.USE = "Joe_l_thumb3";
HAnimHumanoid24.joints[33] = HAnimJoint166;

HAnimJoint HAnimJoint167 = createNode("HAnimJoint");
HAnimJoint167.USE = "Joe_l_wrist";
HAnimHumanoid24.joints[34] = HAnimJoint167;

HAnimJoint HAnimJoint168 = createNode("HAnimJoint");
HAnimJoint168.USE = "Joe_r_acromioclavicular";
HAnimHumanoid24.joints[35] = HAnimJoint168;

HAnimJoint HAnimJoint169 = createNode("HAnimJoint");
HAnimJoint169.USE = "Joe_r_talocrural";
HAnimHumanoid24.joints[36] = HAnimJoint169;

HAnimJoint HAnimJoint170 = createNode("HAnimJoint");
HAnimJoint170.USE = "Joe_r_elbow";
HAnimHumanoid24.joints[37] = HAnimJoint170;

HAnimJoint HAnimJoint171 = createNode("HAnimJoint");
HAnimJoint171.USE = "Joe_r_eyeball_joint";
HAnimHumanoid24.joints[38] = HAnimJoint171;

HAnimJoint HAnimJoint172 = createNode("HAnimJoint");
HAnimJoint172.USE = "Joe_r_eyebrow_joint";
HAnimHumanoid24.joints[39] = HAnimJoint172;

HAnimJoint HAnimJoint173 = createNode("HAnimJoint");
HAnimJoint173.USE = "Joe_r_eyelid_joint";
HAnimHumanoid24.joints[40] = HAnimJoint173;

HAnimJoint HAnimJoint174 = createNode("HAnimJoint");
HAnimJoint174.USE = "Joe_r_hip";
HAnimHumanoid24.joints[41] = HAnimJoint174;

HAnimJoint HAnimJoint175 = createNode("HAnimJoint");
HAnimJoint175.USE = "Joe_r_index0";
HAnimHumanoid24.joints[42] = HAnimJoint175;

HAnimJoint HAnimJoint176 = createNode("HAnimJoint");
HAnimJoint176.USE = "Joe_r_index1";
HAnimHumanoid24.joints[43] = HAnimJoint176;

HAnimJoint HAnimJoint177 = createNode("HAnimJoint");
HAnimJoint177.USE = "Joe_r_index2";
HAnimHumanoid24.joints[44] = HAnimJoint177;

HAnimJoint HAnimJoint178 = createNode("HAnimJoint");
HAnimJoint178.USE = "Joe_r_index3";
HAnimHumanoid24.joints[45] = HAnimJoint178;

HAnimJoint HAnimJoint179 = createNode("HAnimJoint");
HAnimJoint179.USE = "Joe_r_knee";
HAnimHumanoid24.joints[46] = HAnimJoint179;

HAnimJoint HAnimJoint180 = createNode("HAnimJoint");
HAnimJoint180.USE = "Joe_r_metatarsal";
HAnimHumanoid24.joints[47] = HAnimJoint180;

HAnimJoint HAnimJoint181 = createNode("HAnimJoint");
HAnimJoint181.USE = "Joe_r_middle0";
HAnimHumanoid24.joints[48] = HAnimJoint181;

HAnimJoint HAnimJoint182 = createNode("HAnimJoint");
HAnimJoint182.USE = "Joe_r_middle1";
HAnimHumanoid24.joints[49] = HAnimJoint182;

HAnimJoint HAnimJoint183 = createNode("HAnimJoint");
HAnimJoint183.USE = "Joe_r_middle2";
HAnimHumanoid24.joints[50] = HAnimJoint183;

HAnimJoint HAnimJoint184 = createNode("HAnimJoint");
HAnimJoint184.USE = "Joe_r_middle3";
HAnimHumanoid24.joints[51] = HAnimJoint184;

HAnimJoint HAnimJoint185 = createNode("HAnimJoint");
HAnimJoint185.USE = "Joe_r_midtarsal";
HAnimHumanoid24.joints[52] = HAnimJoint185;

HAnimJoint HAnimJoint186 = createNode("HAnimJoint");
HAnimJoint186.USE = "Joe_r_pinky0";
HAnimHumanoid24.joints[53] = HAnimJoint186;

HAnimJoint HAnimJoint187 = createNode("HAnimJoint");
HAnimJoint187.USE = "Joe_r_pinky1";
HAnimHumanoid24.joints[54] = HAnimJoint187;

HAnimJoint HAnimJoint188 = createNode("HAnimJoint");
HAnimJoint188.USE = "Joe_r_pinky2";
HAnimHumanoid24.joints[55] = HAnimJoint188;

HAnimJoint HAnimJoint189 = createNode("HAnimJoint");
HAnimJoint189.USE = "Joe_r_pinky3";
HAnimHumanoid24.joints[56] = HAnimJoint189;

HAnimJoint HAnimJoint190 = createNode("HAnimJoint");
HAnimJoint190.USE = "Joe_r_ring0";
HAnimHumanoid24.joints[57] = HAnimJoint190;

HAnimJoint HAnimJoint191 = createNode("HAnimJoint");
HAnimJoint191.USE = "Joe_r_ring1";
HAnimHumanoid24.joints[58] = HAnimJoint191;

HAnimJoint HAnimJoint192 = createNode("HAnimJoint");
HAnimJoint192.USE = "Joe_r_ring2";
HAnimHumanoid24.joints[59] = HAnimJoint192;

HAnimJoint HAnimJoint193 = createNode("HAnimJoint");
HAnimJoint193.USE = "Joe_r_ring3";
HAnimHumanoid24.joints[60] = HAnimJoint193;

HAnimJoint HAnimJoint194 = createNode("HAnimJoint");
HAnimJoint194.USE = "Joe_r_shoulder";
HAnimHumanoid24.joints[61] = HAnimJoint194;

HAnimJoint HAnimJoint195 = createNode("HAnimJoint");
HAnimJoint195.USE = "Joe_r_sternoclavicular";
HAnimHumanoid24.joints[62] = HAnimJoint195;

HAnimJoint HAnimJoint196 = createNode("HAnimJoint");
HAnimJoint196.USE = "Joe_r_subtalar";
HAnimHumanoid24.joints[63] = HAnimJoint196;

HAnimJoint HAnimJoint197 = createNode("HAnimJoint");
HAnimJoint197.USE = "Joe_r_thumb1";
HAnimHumanoid24.joints[64] = HAnimJoint197;

HAnimJoint HAnimJoint198 = createNode("HAnimJoint");
HAnimJoint198.USE = "Joe_r_thumb2";
HAnimHumanoid24.joints[65] = HAnimJoint198;

HAnimJoint HAnimJoint199 = createNode("HAnimJoint");
HAnimJoint199.USE = "Joe_r_thumb3";
HAnimHumanoid24.joints[66] = HAnimJoint199;

HAnimJoint HAnimJoint200 = createNode("HAnimJoint");
HAnimJoint200.USE = "Joe_r_wrist";
HAnimHumanoid24.joints[67] = HAnimJoint200;

HAnimJoint HAnimJoint201 = createNode("HAnimJoint");
HAnimJoint201.USE = "Joe_sacroiliac";
HAnimHumanoid24.joints[68] = HAnimJoint201;

HAnimJoint HAnimJoint202 = createNode("HAnimJoint");
HAnimJoint202.USE = "Joe_skullbase";
HAnimHumanoid24.joints[69] = HAnimJoint202;

HAnimJoint HAnimJoint203 = createNode("HAnimJoint");
HAnimJoint203.USE = "Joe_temporomandibular";
HAnimHumanoid24.joints[70] = HAnimJoint203;

HAnimJoint HAnimJoint204 = createNode("HAnimJoint");
HAnimJoint204.USE = "Joe_vc1";
HAnimHumanoid24.joints[71] = HAnimJoint204;

HAnimJoint HAnimJoint205 = createNode("HAnimJoint");
HAnimJoint205.USE = "Joe_vc2";
HAnimHumanoid24.joints[72] = HAnimJoint205;

HAnimJoint HAnimJoint206 = createNode("HAnimJoint");
HAnimJoint206.USE = "Joe_vc3";
HAnimHumanoid24.joints[73] = HAnimJoint206;

HAnimJoint HAnimJoint207 = createNode("HAnimJoint");
HAnimJoint207.USE = "Joe_vc4";
HAnimHumanoid24.joints[74] = HAnimJoint207;

HAnimJoint HAnimJoint208 = createNode("HAnimJoint");
HAnimJoint208.USE = "Joe_vc5";
HAnimHumanoid24.joints[75] = HAnimJoint208;

HAnimJoint HAnimJoint209 = createNode("HAnimJoint");
HAnimJoint209.USE = "Joe_vc6";
HAnimHumanoid24.joints[76] = HAnimJoint209;

HAnimJoint HAnimJoint210 = createNode("HAnimJoint");
HAnimJoint210.USE = "Joe_vc7";
HAnimHumanoid24.joints[77] = HAnimJoint210;

HAnimJoint HAnimJoint211 = createNode("HAnimJoint");
HAnimJoint211.USE = "Joe_vl1";
HAnimHumanoid24.joints[78] = HAnimJoint211;

HAnimJoint HAnimJoint212 = createNode("HAnimJoint");
HAnimJoint212.USE = "Joe_vl2";
HAnimHumanoid24.joints[79] = HAnimJoint212;

HAnimJoint HAnimJoint213 = createNode("HAnimJoint");
HAnimJoint213.USE = "Joe_vl3";
HAnimHumanoid24.joints[80] = HAnimJoint213;

HAnimJoint HAnimJoint214 = createNode("HAnimJoint");
HAnimJoint214.USE = "Joe_vl4";
HAnimHumanoid24.joints[81] = HAnimJoint214;

HAnimJoint HAnimJoint215 = createNode("HAnimJoint");
HAnimJoint215.USE = "Joe_vl5";
HAnimHumanoid24.joints[82] = HAnimJoint215;

HAnimJoint HAnimJoint216 = createNode("HAnimJoint");
HAnimJoint216.USE = "Joe_vt1";
HAnimHumanoid24.joints[83] = HAnimJoint216;

HAnimJoint HAnimJoint217 = createNode("HAnimJoint");
HAnimJoint217.USE = "Joe_vt10";
HAnimHumanoid24.joints[84] = HAnimJoint217;

HAnimJoint HAnimJoint218 = createNode("HAnimJoint");
HAnimJoint218.USE = "Joe_vt11";
HAnimHumanoid24.joints[85] = HAnimJoint218;

HAnimJoint HAnimJoint219 = createNode("HAnimJoint");
HAnimJoint219.USE = "Joe_vt12";
HAnimHumanoid24.joints[86] = HAnimJoint219;

HAnimJoint HAnimJoint220 = createNode("HAnimJoint");
HAnimJoint220.USE = "Joe_vt2";
HAnimHumanoid24.joints[87] = HAnimJoint220;

HAnimJoint HAnimJoint221 = createNode("HAnimJoint");
HAnimJoint221.USE = "Joe_vt3";
HAnimHumanoid24.joints[88] = HAnimJoint221;

HAnimJoint HAnimJoint222 = createNode("HAnimJoint");
HAnimJoint222.USE = "Joe_vt4";
HAnimHumanoid24.joints[89] = HAnimJoint222;

HAnimJoint HAnimJoint223 = createNode("HAnimJoint");
HAnimJoint223.USE = "Joe_vt5";
HAnimHumanoid24.joints[90] = HAnimJoint223;

HAnimJoint HAnimJoint224 = createNode("HAnimJoint");
HAnimJoint224.USE = "Joe_vt6";
HAnimHumanoid24.joints[91] = HAnimJoint224;

HAnimJoint HAnimJoint225 = createNode("HAnimJoint");
HAnimJoint225.USE = "Joe_vt7";
HAnimHumanoid24.joints[92] = HAnimJoint225;

HAnimJoint HAnimJoint226 = createNode("HAnimJoint");
HAnimJoint226.USE = "Joe_vt8";
HAnimHumanoid24.joints[93] = HAnimJoint226;

HAnimJoint HAnimJoint227 = createNode("HAnimJoint");
HAnimJoint227.USE = "Joe_vt9";
HAnimHumanoid24.joints[94] = HAnimJoint227;

Coordinate Coordinate228 = createNode("Coordinate");
Coordinate228.DEF = "Joe_SkinCoord";
Coordinate228.point = new MFVec3f(new float[0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.255,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168]);
HAnimHumanoid24.skinCoord = Coordinate228;

Shape Shape229 = createNode("Shape");
Shape229.DEF = "Joe_Shape";
Appearance Appearance230 = createNode("Appearance");
Appearance230.DEF = "Joe_skin_Appearance";
Material Material231 = createNode("Material");
Material231.DEF = "Joe_skin_Material";
Material231.diffuseColor = new SFColor(new float[0.3,0.3,0.6]);
Material231.emissiveColor = new SFColor(new float[0.3,0.3,0.6]);
Appearance230.material = Material231;

ImageTexture ImageTexture232 = createNode("ImageTexture");
ImageTexture232.DEF = "JoeSkinImageTexture";
ImageTexture232.url = new MFString(new java.lang.String["bodytexture28.png"]);
Appearance230.texture = ImageTexture232;

TextureTransform TextureTransform233 = createNode("TextureTransform");
TextureTransform233.DEF = "KickTexTrans";
Appearance230.textureTransform = TextureTransform233;

Shape229.appearance = Appearance230;

IndexedFaceSet IndexedFaceSet234 = createNode("IndexedFaceSet");
IndexedFaceSet234.DEF = "Joe_skin_IndexedFaceSet";
IndexedFaceSet234.creaseAngle = 3.14;
IndexedFaceSet234.coordIndex = new MFInt32(new int[0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
TextureCoordinate TextureCoordinate235 = createNode("TextureCoordinate");
TextureCoordinate235.point = new MFVec2f(new float[0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5]);
IndexedFaceSet234.texCoord = TextureCoordinate235;

Coordinate Coordinate236 = createNode("Coordinate");
Coordinate236.USE = "Joe_SkinCoord";
IndexedFaceSet234.coord = Coordinate236;

Shape229.geometry = IndexedFaceSet234;

HAnimHumanoid24.skin[95] = Shape229;

Group23.children = new MFNode();

Group23.children[0] = HAnimHumanoid24;

children[10] = Group23;

Group Group237 = createNode("Group");
Group237.DEF = "SkullDisplacerAnimationGroup";
TimeSensor TimeSensor238 = createNode("TimeSensor");
TimeSensor238.DEF = "skull_tipTimer";
TimeSensor238.cycleInterval = 5.73;
TimeSensor238.loop = True;
Group237.children = new MFNode();

Group237.children[0] = TimeSensor238;

ScalarInterpolator ScalarInterpolator239 = createNode("ScalarInterpolator");
ScalarInterpolator239.DEF = "skull_tipInterp";
ScalarInterpolator239.key = new MFFloat(new float[0,0.1,0.2,0.35,0.6,0.7,0.85,0.88,0.94,0.97,1]);
ScalarInterpolator239.keyValue = new MFFloat(new float[0,0,0,0,0.2,0.4,1,0,1,0.4,0]);
Group237.children[1] = ScalarInterpolator239;

children[11] = Group237;

Group Group240 = createNode("Group");
Group240.DEF = "Joe_L_finger_tipsDisplacerAnimationGroup";
TimeSensor TimeSensor241 = createNode("TimeSensor");
TimeSensor241.DEF = "L_finger_tipsTimer";
TimeSensor241.cycleInterval = 4.73;
TimeSensor241.loop = True;
Group240.children = new MFNode();

Group240.children[0] = TimeSensor241;

ScalarInterpolator ScalarInterpolator242 = createNode("ScalarInterpolator");
ScalarInterpolator242.DEF = "L_finger_tipsInterp";
ScalarInterpolator242.key = new MFFloat(new float[0,0.1,0.2,0.35,0.6,0.7,0.85,0.88,0.94,0.97,1]);
ScalarInterpolator242.keyValue = new MFFloat(new float[0,0,0,0,0.2,0.4,1,0,1,0.4,0]);
Group240.children[1] = ScalarInterpolator242;

OrientationInterpolator OrientationInterpolator243 = createNode("OrientationInterpolator");
OrientationInterpolator243.DEF = "L_shoulderDispRotInterp";
OrientationInterpolator243.key = new MFFloat(new float[0,0.4,1]);
OrientationInterpolator243.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1,0,0,1,0]);
Group240.children[2] = OrientationInterpolator243;

children[12] = Group240;

Group Group244 = createNode("Group");
Transform Transform245 = createNode("Transform");
Transform245.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Shape Shape246 = createNode("Shape");
Shape246.USE = "AxisLinesShape";
Transform245.child = new undefined();

Transform245.child[0] = Shape246;

Group244.children = new MFNode();

Group244.children[0] = Transform245;

Transform Transform247 = createNode("Transform");
Transform247.DEF = "Circle0";
Transform247.scale = new SFVec3f(new float[1.175,1,1.175]);
Shape Shape248 = createNode("Shape");
Shape248.DEF = "circle_Shape";
Appearance Appearance249 = createNode("Appearance");
Appearance249.DEF = "circle0_Appearance";
Material Material250 = createNode("Material");
Material250.DEF = "circle0_Material";
Material250.ambientIntensity = 0.9;
Material250.diffuseColor = new SFColor(new float[0.9,0,0.7]);
Material250.emissiveColor = new SFColor(new float[0.425,0.486,1]);
Appearance249.material = Material250;

Shape248.appearance = Appearance249;

IndexedLineSet IndexedLineSet251 = createNode("IndexedLineSet");
IndexedLineSet251.DEF = "Orbit1";
IndexedLineSet251.coordIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1]);
Coordinate Coordinate252 = createNode("Coordinate");
Coordinate252.DEF = "circle_Coordinates";
Coordinate252.point = new MFVec3f(new float[1,0,0,0.995,0,-0.105,0.979,0,-0.208,0.951,0,-0.309,0.914,0,-0.407,0.866,0,-0.5,0.809,0,-0.588,0.743,0,-0.669,0.669,0,-0.743,0.588,0,-0.809,0.5,0,-0.866,0.407,0,-0.914,0.309,0,-0.951,0.208,0,-0.978,0.105,0,-0.995,0,0,-1,-0.105,0,-0.994522,-0.208,0,-0.978,-0.309,0,-0.951,-0.407,0,-0.914,-0.5,0,-0.866,-0.588,0,-0.809,-0.669,0,-0.743,-0.743,0,-0.669,-0.809,0,-0.588,-0.866,0,-0.5,-0.914,0,-0.407,-0.951,0,-0.309,-0.978,0,-0.208,-0.995,0,-0.105,-1,0,0,-0.995,0,0.105,-0.978,0,0.208,-0.951,0,0.309,-0.914,0,0.407,-0.866,0,0.5,-0.809,0,0.588,-0.743,0,0.669,-0.669,0,0.743,-0.588,0,0.809,-0.5,0,0.866,-0.407,0,0.914,-0.309,0,0.951,-0.208,0,0.978,-0.105,0,0.995,0,0,1,0.105,0,0.995,0.208,0,0.978,0.309,0,0.951,0.407,0,0.914,0.5,0,0.866,0.588,0,0.809,0.669,0,0.743,0.743,0,0.669,0.809,0,0.588,0.866,0,0.5,0.914,0,0.407,0.951,0,0.309,0.978,0,0.208,0.995,0,0.104,1,0,0]);
IndexedLineSet251.coord = Coordinate252;

Shape248.geometry = IndexedLineSet251;

Transform247.child = new undefined();

Transform247.child[0] = Shape248;

Group244.children[1] = Transform247;

Transform Transform253 = createNode("Transform");
Transform253.DEF = "Circle1";
Transform253.scale = new SFVec3f(new float[0.5,1,0.5]);
Shape Shape254 = createNode("Shape");
Shape254.DEF = "circle1_Shape";
Appearance Appearance255 = createNode("Appearance");
Appearance255.DEF = "circle1_Appearance";
Material Material256 = createNode("Material");
Material256.DEF = "circle1_Material";
Material256.diffuseColor = new SFColor(new float[0.9,0,0.7]);
Material256.emissiveColor = new SFColor(new float[0.424956,0.483976,1]);
Appearance255.material = Material256;

Shape254.appearance = Appearance255;

IndexedLineSet IndexedLineSet257 = createNode("IndexedLineSet");
IndexedLineSet257.USE = "Orbit1";
Shape254.geometry = IndexedLineSet257;

Transform253.child = new undefined();

Transform253.child[0] = Shape254;

Group244.children[2] = Transform253;

Transform Transform258 = createNode("Transform");
Transform258.DEF = "Circle2";
Transform258.scale = new SFVec3f(new float[0.25,1,0.25]);
Shape Shape259 = createNode("Shape");
Shape259.DEF = "circle2_Shape";
Appearance Appearance260 = createNode("Appearance");
Appearance260.DEF = "circle2_Appearance";
Material Material261 = createNode("Material");
Material261.DEF = "circle2_Material";
Material261.diffuseColor = new SFColor(new float[0.9,0,0.7]);
Material261.emissiveColor = new SFColor(new float[0.424956,0.483976,1]);
Appearance260.material = Material261;

Shape259.appearance = Appearance260;

IndexedLineSet IndexedLineSet262 = createNode("IndexedLineSet");
IndexedLineSet262.USE = "Orbit1";
Shape259.geometry = IndexedLineSet262;

Transform258.child = new undefined();

Transform258.child[0] = Shape259;

Group244.children[3] = Transform258;

children[13] = Group244;

ROUTE ROUTE263 = createNode("ROUTE");
ROUTE263.fromNode = "skull_tipTimer";
ROUTE263.fromField = "fraction_changed";
ROUTE263.toNode = "skull_tipInterp";
ROUTE263.toField = "set_fraction";
children[14] = ROUTE263;

ROUTE ROUTE264 = createNode("ROUTE");
ROUTE264.fromNode = "skull_tipInterp";
ROUTE264.fromField = "value_changed";
ROUTE264.toNode = "Joe_skull_tip";
ROUTE264.toField = "set_weight";
children[15] = ROUTE264;

ROUTE ROUTE265 = createNode("ROUTE");
ROUTE265.fromNode = "L_finger_tipsTimer";
ROUTE265.fromField = "fraction_changed";
ROUTE265.toNode = "L_finger_tipsInterp";
ROUTE265.toField = "set_fraction";
children[16] = ROUTE265;

ROUTE ROUTE266 = createNode("ROUTE");
ROUTE266.fromNode = "L_finger_tipsInterp";
ROUTE266.fromField = "value_changed";
ROUTE266.toNode = "Joe_L_finger_tips";
ROUTE266.toField = "set_weight";
children[17] = ROUTE266;

ROUTE ROUTE267 = createNode("ROUTE");
ROUTE267.fromNode = "L_finger_tipsTimer";
ROUTE267.fromField = "fraction_changed";
ROUTE267.toNode = "L_shoulderDispRotInterp";
ROUTE267.toField = "set_fraction";
children[18] = ROUTE267;

ROUTE ROUTE268 = createNode("ROUTE");
ROUTE268.fromNode = "L_shoulderDispRotInterp";
ROUTE268.fromField = "value_changed";
ROUTE268.toNode = "Joe_l_shoulder";
ROUTE268.toField = "set_rotation";
children[19] = ROUTE268;

ROUTE ROUTE269 = createNode("ROUTE");
ROUTE269.fromNode = "L_shoulderDispRotInterp";
ROUTE269.fromField = "value_changed";
ROUTE269.toNode = "Joe_r_shoulder";
ROUTE269.toField = "set_rotation";
children[20] = ROUTE269;

}
