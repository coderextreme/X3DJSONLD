#include "/c/x3d-code/www.web3d.org/x3d/languages/c/X3DLib/X3DLib.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "3.3";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "H-Anim";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

meta meta3 = createNode("meta");
meta3.name = "title";
meta3.content = "JoeSkinTexcoordDisplacerKick.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "info";
meta4.content = "Joe No Reservations 20200709 spec root and vc7 hier 20161206 ... 20121221 ... 20040109 x3d/hanim";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "description";
meta5.content = "This Joe model is a V1 LOA3 Humanoid with textured skin composed mainly of V1 Site locations.";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "created";
meta6.content = "15 January 2004";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "translated";
meta7.content = "12 January 2017";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "modified";
meta8.content = "20 September 2020";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "creator";
meta9.content = "Joe D Williams";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "translators";
meta10.content = "Roy Walmsley and Don Brutzman";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "info";
meta11.content = "Transcoding from .vrml to .x3dv by Joe using BS studio circa 2012";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "info";
meta12.content = "translated from .x3dv to .xml for web3d archive";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "TODO";
meta13.content = "Record information relating a certain skin coordinate to a V1 Annex A Site name and location is now found in comment at end of this scene where each # number name string appears in the order of coordinate points in the skin mesh user code. Best organized to provide author data naming important HAnim humanoid skeletonspace to skinspace relations using structured MetadataSet containing MetadataString nodes";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "info";
meta14.content = "modified to correct root and vc7 hierarchies";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "identifier";
meta15.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/JoeSkinTexcoordDisplacerKick.x3d";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "generator";
meta16.content = "BS studio translation from .x3dv by Joe using BS Contact";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "generator";
meta17.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "license";
meta18.content = "../license.html";
head1.meta[16] = meta18;

head = head1;

WorldInfo WorldInfo20 = createNode("WorldInfo");
WorldInfo20.info = new MFString(new java.lang.String["X3D Humanoid V1 LOA3 skeleton","skin from hanim sites, surface features, and some added points","390 points"]);
WorldInfo20.title = "X3D HANIM LOA3 Skeleton, 390 point Skin, texcoords, Displacer, teTrans for Joe_ by Joe";
children = new MFNode();

children[0] = WorldInfo20;

NavigationInfo NavigationInfo21 = createNode("NavigationInfo");
NavigationInfo21.DEF = "Start_NavigationInfo";
NavigationInfo21.headlight = False;
NavigationInfo21.speed = 2.5;
children[1] = NavigationInfo21;

Background Background22 = createNode("Background");
Background22.DEF = "blue_Background";
children[2] = Background22;

SpotLight SpotLight23 = createNode("SpotLight");
SpotLight23.DEF = "light1";
SpotLight23.ambientIntensity = 0.7;
SpotLight23.beamWidth = 1.5;
SpotLight23.color = new SFColor(new float[0.8,0.8,1]);
SpotLight23.cutOffAngle = 0.6;
SpotLight23.direction = new SFVec3f(new float[0,0,0]);
SpotLight23.location = new SFVec3f(new float[0,3,3]);
SpotLight23.radius = 10;
children[3] = SpotLight23;

PointLight PointLight24 = createNode("PointLight");
PointLight24.DEF = "light2";
PointLight24.ambientIntensity = 0.7;
PointLight24.color = new SFColor(new float[0.8,0.8,1]);
PointLight24.location = new SFVec3f(new float[0,10,-7]);
children[4] = PointLight24;

//External from the Humanoid viewpoints
Viewpoint Viewpoint25 = createNode("Viewpoint");
Viewpoint25.DEF = "Scene_InclinedView";
Viewpoint25.centerOfRotation = new SFVec3f(new float[0,0.85,0]);
Viewpoint25.description = "Scene_Inclined View";
Viewpoint25.orientation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
Viewpoint25.position = new SFVec3f(new float[1.62,1.05,3.06]);
children[5] = Viewpoint25;

Viewpoint Viewpoint26 = createNode("Viewpoint");
Viewpoint26.DEF = "Scene_FrontView";
Viewpoint26.centerOfRotation = new SFVec3f(new float[0,0.8,0]);
Viewpoint26.description = "Scene Front View";
Viewpoint26.position = new SFVec3f(new float[0,0.8,2.58]);
children[6] = Viewpoint26;

Viewpoint Viewpoint27 = createNode("Viewpoint");
Viewpoint27.DEF = "Scene_SideView";
Viewpoint27.centerOfRotation = new SFVec3f(new float[0,0.8,0]);
Viewpoint27.description = "Scene Side View";
Viewpoint27.orientation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint27.position = new SFVec3f(new float[2.6,0.5,0]);
children[7] = Viewpoint27;

Viewpoint Viewpoint28 = createNode("Viewpoint");
Viewpoint28.DEF = "Scene_BackView";
Viewpoint28.centerOfRotation = new SFVec3f(new float[0,1.5,0]);
Viewpoint28.description = "Scene Back View";
Viewpoint28.orientation = new SFRotation(new float[0,1,0,3.14]);
Viewpoint28.position = new SFVec3f(new float[0,2.5,-3]);
children[8] = Viewpoint28;

Viewpoint Viewpoint29 = createNode("Viewpoint");
Viewpoint29.DEF = "Scene_TopView";
Viewpoint29.centerOfRotation = new SFVec3f(new float[0,1.5,0]);
Viewpoint29.description = "Scene Top View";
Viewpoint29.orientation = new SFRotation(new float[1,0,0,-1.5708]);
Viewpoint29.position = new SFVec3f(new float[0,3.5,0]);
children[9] = Viewpoint29;

Group Group30 = createNode("Group");
Group30.DEF = "Joe_Humanoid";
HAnimHumanoid HAnimHumanoid31 = createNode("HAnimHumanoid");
HAnimHumanoid31.name = "Human";
HAnimHumanoid31.DEF = "Joe_Human";
HAnimHumanoid31.version = "1.0";
HAnimJoint HAnimJoint32 = createNode("HAnimJoint");
HAnimJoint32.name = "HumanoidRoot";
HAnimJoint32.DEF = "Joe_HumanoidRoot";
HAnimJoint32.center = new SFVec3f(new float[0,0.875,0]);
HAnimJoint32.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint32.llimit = new MFFloat(new float[0,0,0]);
MetadataSet MetadataSet33 = createNode("MetadataSet");
MetadataSet33.name = "warnings";
MetadataSet33.reference = "HAnim";
//TODO experimental
MetadataString MetadataString34 = createNode("MetadataString");
MetadataString34.name = "SymmetricalLeftRight";
MetadataString34.reference = "correction options: ignore, warn, average, left, right, largest, smallest";
MetadataString34.value = new MFString(new java.lang.String["ignore"]);
MetadataSet33.value = new MFNode();

MetadataSet33.value[0] = MetadataString34;

HAnimJoint32.metadata = MetadataSet33;

HAnimSegment HAnimSegment35 = createNode("HAnimSegment");
HAnimSegment35.name = "sacrum";
HAnimSegment35.DEF = "Joe_sacrum";
HAnimSite HAnimSite36 = createNode("HAnimSite");
HAnimSite36.name = "RootFront_view";
HAnimSite36.DEF = "Joe_RootFront_view";
Transform Transform37 = createNode("Transform");
Transform37.DEF = "hanimcordsys";
Transform37.scale = new SFVec3f(new float[0.175,0.175,0.175]);
Viewpoint Viewpoint38 = createNode("Viewpoint");
Viewpoint38.DEF = "ViewBodyRootAxes";
Viewpoint38.description = "Joe_HAnim Root HAnimSite Coordinate Axes View";
Transform37.children = new MFNode();

Transform37.children[0] = Viewpoint38;

Shape Shape39 = createNode("Shape");
Shape39.DEF = "AxisLinesShape";
//RGB lines showing XYZ axes
IndexedLineSet IndexedLineSet40 = createNode("IndexedLineSet");
IndexedLineSet40.colorIndex = new MFInt32(new int[0,1,2]);
IndexedLineSet40.colorPerVertex = False;
IndexedLineSet40.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1]);
Coordinate Coordinate41 = createNode("Coordinate");
Coordinate41.point = new MFVec3f(new float[0,0,0,1,0,0,0,1,0,0,0,1]);
IndexedLineSet40.coord = Coordinate41;

Color Color42 = createNode("Color");
Color42.color = new MFColor(new float[1,0,0,0,0.6,0,0,0,1]);
IndexedLineSet40.color = Color42;

Shape39.geometry = IndexedLineSet40;

Transform37.children[1] = Shape39;

HAnimSite36.children = new MFNode();

HAnimSite36.children[0] = Transform37;

HAnimSegment35.children = new MFNode();

HAnimSegment35.children[0] = HAnimSite36;

HAnimJoint32.children = new MFNode();

HAnimJoint32.children[0] = HAnimSegment35;

HAnimJoint HAnimJoint43 = createNode("HAnimJoint");
HAnimJoint43.name = "sacroiliac";
HAnimJoint43.DEF = "Joe_sacroiliac";
HAnimJoint43.center = new SFVec3f(new float[0,0.92,0]);
HAnimJoint43.skinCoordIndex = new MFInt32(new int[17,19,20,21,22,23,26,27,73,82,89,91,93]);
HAnimJoint43.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,0.35,0.35,1]);
HAnimJoint43.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint43.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint44 = createNode("HAnimJoint");
HAnimJoint44.name = "l_hip";
HAnimJoint44.DEF = "Joe_l_hip";
HAnimJoint44.center = new SFVec3f(new float[0.1,0.92,0]);
HAnimJoint44.skinCoordIndex = new MFInt32(new int[89,90,94,95,96,97]);
HAnimJoint44.skinCoordWeight = new MFFloat(new float[0.65,1,1,1,1,1]);
HAnimJoint44.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint44.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint45 = createNode("HAnimJoint");
HAnimJoint45.name = "l_knee";
HAnimJoint45.DEF = "Joe_l_knee";
HAnimJoint45.center = new SFVec3f(new float[0.115,0.466,0]);
HAnimJoint45.skinCoordIndex = new MFInt32(new int[334,335,336,337,338,339,340,341]);
HAnimJoint45.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint45.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint45.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint46 = createNode("HAnimJoint");
HAnimJoint46.name = "l_ankle";
HAnimJoint46.DEF = "Joe_l_ankle";
HAnimJoint46.center = new SFVec3f(new float[0.115,0.069,0]);
HAnimJoint46.skinCoordIndex = new MFInt32(new int[342,343,344,345]);
HAnimJoint46.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint46.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint46.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint47 = createNode("HAnimJoint");
HAnimJoint47.name = "l_subtalar";
HAnimJoint47.DEF = "Joe_l_subtalar";
HAnimJoint47.center = new SFVec3f(new float[0.115,0.031,0.03]);
HAnimJoint47.skinCoordIndex = new MFInt32(new int[346,347,348,71]);
HAnimJoint47.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint47.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint47.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint48 = createNode("HAnimJoint");
HAnimJoint48.name = "l_midtarsal";
HAnimJoint48.DEF = "Joe_l_midtarsal";
HAnimJoint48.center = new SFVec3f(new float[0.115,0.037,0.09]);
HAnimJoint48.skinCoordIndex = new MFInt32(new int[349,350,351,352]);
HAnimJoint48.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint48.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint48.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint49 = createNode("HAnimJoint");
HAnimJoint49.name = "l_metatarsal";
HAnimJoint49.DEF = "Joe_l_metatarsal";
HAnimJoint49.center = new SFVec3f(new float[0.115,0.02,0.122]);
HAnimJoint49.skinCoordIndex = new MFInt32(new int[353,354,355,356,357,358,359,360,361]);
HAnimJoint49.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint49.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint49.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint48.children = new MFNode();

HAnimJoint48.children[0] = HAnimJoint49;

HAnimJoint47.children = new MFNode();

HAnimJoint47.children[0] = HAnimJoint48;

HAnimJoint46.children = new MFNode();

HAnimJoint46.children[0] = HAnimJoint47;

HAnimJoint45.children = new MFNode();

HAnimJoint45.children[0] = HAnimJoint46;

HAnimJoint44.children = new MFNode();

HAnimJoint44.children[0] = HAnimJoint45;

HAnimJoint43.children = new MFNode();

HAnimJoint43.children[0] = HAnimJoint44;

HAnimJoint HAnimJoint50 = createNode("HAnimJoint");
HAnimJoint50.name = "r_hip";
HAnimJoint50.DEF = "Joe_r_hip";
HAnimJoint50.center = new SFVec3f(new float[-0.1,0.92,0]);
HAnimJoint50.skinCoordIndex = new MFInt32(new int[91,92,98,99,100,101,362,363]);
HAnimJoint50.skinCoordWeight = new MFFloat(new float[0.65,1,0.8,1,1,1,0.4,0.8]);
HAnimJoint50.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint50.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint51 = createNode("HAnimJoint");
HAnimJoint51.name = "r_knee";
HAnimJoint51.DEF = "Joe_r_knee";
HAnimJoint51.center = new SFVec3f(new float[-0.05,0.466,0]);
HAnimJoint51.skinCoordIndex = new MFInt32(new int[362,363,364,365,366,367,368,369,98]);
HAnimJoint51.skinCoordWeight = new MFFloat(new float[0.6,0.2,1,1,1,1,1,1,0.2]);
HAnimJoint51.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint51.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint52 = createNode("HAnimJoint");
HAnimJoint52.name = "r_ankle";
HAnimJoint52.DEF = "Joe_r_ankle";
HAnimJoint52.center = new SFVec3f(new float[-0.115,0.069,0]);
HAnimJoint52.skinCoordIndex = new MFInt32(new int[370,371,372,373]);
HAnimJoint52.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint52.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint52.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint53 = createNode("HAnimJoint");
HAnimJoint53.name = "r_subtalar";
HAnimJoint53.DEF = "Joe_r_subtalar";
HAnimJoint53.center = new SFVec3f(new float[-0.1,0.015,-0.01]);
HAnimJoint53.skinCoordIndex = new MFInt32(new int[374,375,376]);
HAnimJoint53.skinCoordWeight = new MFFloat(new float[1,1,1]);
HAnimJoint53.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint53.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint54 = createNode("HAnimJoint");
HAnimJoint54.name = "r_midtarsal";
HAnimJoint54.DEF = "Joe_r_midtarsal";
HAnimJoint54.center = new SFVec3f(new float[-0.115,0.037,0.09]);
HAnimJoint54.skinCoordIndex = new MFInt32(new int[377,378,379,380]);
HAnimJoint54.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint54.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint54.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint55 = createNode("HAnimJoint");
HAnimJoint55.name = "r_metatarsal";
HAnimJoint55.DEF = "Joe_r_metatarsal";
HAnimJoint55.center = new SFVec3f(new float[-0.1,0.01,0.14]);
HAnimJoint55.skinCoordIndex = new MFInt32(new int[381,382,383,384,385,386,387,388,389]);
HAnimJoint55.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint55.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint55.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint54.children = new MFNode();

HAnimJoint54.children[0] = HAnimJoint55;

HAnimJoint53.children = new MFNode();

HAnimJoint53.children[0] = HAnimJoint54;

HAnimJoint52.children = new MFNode();

HAnimJoint52.children[0] = HAnimJoint53;

HAnimJoint51.children = new MFNode();

HAnimJoint51.children[0] = HAnimJoint52;

HAnimJoint50.children = new MFNode();

HAnimJoint50.children[0] = HAnimJoint51;

HAnimJoint43.children[1] = HAnimJoint50;

HAnimJoint32.children[1] = HAnimJoint43;

HAnimJoint HAnimJoint56 = createNode("HAnimJoint");
HAnimJoint56.name = "vl5";
HAnimJoint56.DEF = "Joe_vl5";
HAnimJoint56.center = new SFVec3f(new float[0,1.045,-0.095]);
HAnimJoint56.skinCoordIndex = new MFInt32(new int[28,76]);
HAnimJoint56.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint56.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint56.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint57 = createNode("HAnimJoint");
HAnimJoint57.name = "vl4";
HAnimJoint57.DEF = "Joe_vl4";
HAnimJoint57.center = new SFVec3f(new float[0,1.068,-0.085]);
HAnimJoint57.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint57.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint58 = createNode("HAnimJoint");
HAnimJoint58.name = "vl3";
HAnimJoint58.DEF = "Joe_vl3";
HAnimJoint58.center = new SFVec3f(new float[0,1.092,-0.0725]);
HAnimJoint58.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint58.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint59 = createNode("HAnimJoint");
HAnimJoint59.name = "vl2";
HAnimJoint59.DEF = "Joe_vl2";
HAnimJoint59.center = new SFVec3f(new float[0,1.12,-0.065]);
HAnimJoint59.skinCoordIndex = new MFInt32(new int[16,18,25,83,84,85,86,87,88]);
HAnimJoint59.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,0.7,1,0.8]);
HAnimJoint59.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint59.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint60 = createNode("HAnimJoint");
HAnimJoint60.name = "vl1";
HAnimJoint60.DEF = "Joe_vl1";
HAnimJoint60.center = new SFVec3f(new float[0,1.1459,-0.0625]);
HAnimJoint60.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint60.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint61 = createNode("HAnimJoint");
HAnimJoint61.name = "vt12";
HAnimJoint61.DEF = "Joe_vt12";
HAnimJoint61.center = new SFVec3f(new float[0,1.179,-0.068]);
HAnimJoint61.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint61.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint62 = createNode("HAnimJoint");
HAnimJoint62.name = "vt11";
HAnimJoint62.DEF = "Joe_vt11";
HAnimJoint62.center = new SFVec3f(new float[0,1.2679,-0.081]);
HAnimJoint62.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint62.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint63 = createNode("HAnimJoint");
HAnimJoint63.name = "vt10";
HAnimJoint63.DEF = "Joe_vt10";
HAnimJoint63.center = new SFVec3f(new float[0,1.242,-0.09]);
HAnimJoint63.skinCoordIndex = new MFInt32(new int[15]);
HAnimJoint63.skinCoordWeight = new MFFloat(new float[1]);
HAnimJoint63.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint63.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint64 = createNode("HAnimJoint");
HAnimJoint64.name = "vt9";
HAnimJoint64.DEF = "Joe_vt9";
HAnimJoint64.center = new SFVec3f(new float[0,1.268,-0.1]);
HAnimJoint64.skinCoordIndex = new MFInt32(new int[13,14]);
HAnimJoint64.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint64.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint64.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint65 = createNode("HAnimJoint");
HAnimJoint65.name = "vt8";
HAnimJoint65.DEF = "Joe_vt8";
HAnimJoint65.center = new SFVec3f(new float[0,1.294,-0.11]);
HAnimJoint65.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint65.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint66 = createNode("HAnimJoint");
HAnimJoint66.name = "vt7";
HAnimJoint66.DEF = "Joe_vt7";
HAnimJoint66.center = new SFVec3f(new float[0,1.323,-0.1155]);
HAnimJoint66.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint66.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint67 = createNode("HAnimJoint");
HAnimJoint67.name = "vt6";
HAnimJoint67.DEF = "Joe_vt6";
HAnimJoint67.center = new SFVec3f(new float[0,1.352,-0.12]);
HAnimJoint67.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint67.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint68 = createNode("HAnimJoint");
HAnimJoint68.name = "vt5";
HAnimJoint68.DEF = "Joe_vt5";
HAnimJoint68.center = new SFVec3f(new float[0,1.381,-0.1235]);
HAnimJoint68.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint68.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint69 = createNode("HAnimJoint");
HAnimJoint69.name = "vt4";
HAnimJoint69.DEF = "Joe_vt4";
HAnimJoint69.center = new SFVec3f(new float[0,1.41,-0.1235]);
HAnimJoint69.skinCoordIndex = new MFInt32(new int[81]);
HAnimJoint69.skinCoordWeight = new MFFloat(new float[1]);
HAnimJoint69.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint69.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint70 = createNode("HAnimJoint");
HAnimJoint70.name = "vt3";
HAnimJoint70.DEF = "Joe_vt3";
HAnimJoint70.center = new SFVec3f(new float[0,1.438,-0.12]);
HAnimJoint70.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint70.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint71 = createNode("HAnimJoint");
HAnimJoint71.name = "vt2";
HAnimJoint71.DEF = "Joe_vt2";
HAnimJoint71.center = new SFVec3f(new float[0,1.468,-0.105]);
HAnimJoint71.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint71.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint72 = createNode("HAnimJoint");
HAnimJoint72.name = "vt1";
HAnimJoint72.DEF = "Joe_vt1";
HAnimJoint72.center = new SFVec3f(new float[0,1.497,-0.09]);
HAnimJoint72.skinCoordIndex = new MFInt32(new int[11,24]);
HAnimJoint72.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint72.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint72.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint73 = createNode("HAnimJoint");
HAnimJoint73.name = "vc7";
HAnimJoint73.DEF = "Joe_vc7";
HAnimJoint73.center = new SFVec3f(new float[0,1.525,-0.072]);
HAnimJoint73.skinCoordIndex = new MFInt32(new int[74,75]);
HAnimJoint73.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint73.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint73.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint74 = createNode("HAnimJoint");
HAnimJoint74.name = "vc6";
HAnimJoint74.DEF = "Joe_vc6";
HAnimJoint74.center = new SFVec3f(new float[0,1.54,-0.05]);
HAnimJoint74.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint74.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint75 = createNode("HAnimJoint");
HAnimJoint75.name = "vc5";
HAnimJoint75.DEF = "Joe_vc5";
HAnimJoint75.center = new SFVec3f(new float[0,1.552,-0.035]);
HAnimJoint75.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint75.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint76 = createNode("HAnimJoint");
HAnimJoint76.name = "vc4";
HAnimJoint76.DEF = "Joe_vc4";
HAnimJoint76.center = new SFVec3f(new float[0,1.5675,-0.0256]);
HAnimJoint76.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint76.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint77 = createNode("HAnimJoint");
HAnimJoint77.name = "vc3";
HAnimJoint77.DEF = "Joe_vc3";
HAnimJoint77.center = new SFVec3f(new float[0,1.58225,-0.0185]);
HAnimJoint77.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint77.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint78 = createNode("HAnimJoint");
HAnimJoint78.name = "vc2";
HAnimJoint78.DEF = "Joe_vc2";
HAnimJoint78.center = new SFVec3f(new float[0,1.595,-0.0175]);
HAnimJoint78.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint78.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint79 = createNode("HAnimJoint");
HAnimJoint79.name = "vc1";
HAnimJoint79.DEF = "Joe_vc1";
HAnimJoint79.center = new SFVec3f(new float[0,1.61,-0.015]);
HAnimJoint79.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint79.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint80 = createNode("HAnimJoint");
HAnimJoint80.name = "skullbase";
HAnimJoint80.DEF = "Joe_skullbase";
HAnimJoint80.center = new SFVec3f(new float[0,1.63,-0.01]);
HAnimJoint80.skinCoordIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9]);
HAnimJoint80.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1]);
HAnimJoint80.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint80.llimit = new MFFloat(new float[0,0,0]);
HAnimDisplacer HAnimDisplacer81 = createNode("HAnimDisplacer");
HAnimDisplacer81.name = "skull_tip_raiser_action";
HAnimDisplacer81.DEF = "Joe_skull_tip_raiser_action";
HAnimDisplacer81.coordIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9]);
HAnimDisplacer81.displacements = new MFVec3f(new float[0,0.15,0,0,0,0.15,-0.1,0,0.15,0.1,0,0.05,0,-0.02,0.05,-0.15,0,0,-0.05,0,0,0.15,0,0,0.05,0,0,0,0,-0.15]);
HAnimJoint80.displacers = new MFNode();

HAnimJoint80.displacers[0] = HAnimDisplacer81;

HAnimJoint HAnimJoint82 = createNode("HAnimJoint");
HAnimJoint82.name = "l_eyelid_joint";
HAnimJoint82.DEF = "Joe_l_eyelid_joint";
HAnimJoint82.center = new SFVec3f(new float[0.034,1.659,0.06]);
HAnimJoint82.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint82.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint80.children[1] = HAnimJoint82;

HAnimJoint HAnimJoint83 = createNode("HAnimJoint");
HAnimJoint83.name = "l_eyeball_joint";
HAnimJoint83.DEF = "Joe_l_eyeball_joint";
HAnimJoint83.center = new SFVec3f(new float[0.034,1.659,0.06]);
HAnimJoint83.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint83.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint80.children[2] = HAnimJoint83;

HAnimJoint HAnimJoint84 = createNode("HAnimJoint");
HAnimJoint84.name = "l_eyebrow_joint";
HAnimJoint84.DEF = "Joe_l_eyebrow_joint";
HAnimJoint84.center = new SFVec3f(new float[0.034,1.659,0.06]);
HAnimJoint84.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint84.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint80.children[3] = HAnimJoint84;

HAnimJoint HAnimJoint85 = createNode("HAnimJoint");
HAnimJoint85.name = "r_eyelid_joint";
HAnimJoint85.DEF = "Joe_r_eyelid_joint";
HAnimJoint85.center = new SFVec3f(new float[-0.034,1.659,0.06]);
HAnimJoint85.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint85.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint80.children[4] = HAnimJoint85;

HAnimJoint HAnimJoint86 = createNode("HAnimJoint");
HAnimJoint86.name = "r_eyeball_joint";
HAnimJoint86.DEF = "Joe_r_eyeball_joint";
HAnimJoint86.center = new SFVec3f(new float[-0.034,1.659,0.06]);
HAnimJoint86.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint86.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint80.children[5] = HAnimJoint86;

HAnimJoint HAnimJoint87 = createNode("HAnimJoint");
HAnimJoint87.name = "r_eyebrow_joint";
HAnimJoint87.DEF = "Joe_r_eyebrow_joint";
HAnimJoint87.center = new SFVec3f(new float[-0.034,1.659,0.06]);
HAnimJoint87.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint87.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint80.children[6] = HAnimJoint87;

HAnimJoint HAnimJoint88 = createNode("HAnimJoint");
HAnimJoint88.name = "temporomandibular";
HAnimJoint88.DEF = "Joe_temporomandibular";
HAnimJoint88.center = new SFVec3f(new float[0.034,1.659,0.06]);
HAnimJoint88.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint88.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint80.children[7] = HAnimJoint88;

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

HAnimJoint HAnimJoint89 = createNode("HAnimJoint");
HAnimJoint89.name = "l_sternoclavicular";
HAnimJoint89.DEF = "Joe_l_sternoclavicular";
HAnimJoint89.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint89.skinCoordIndex = new MFInt32(new int[12]);
HAnimJoint89.skinCoordWeight = new MFFloat(new float[1]);
HAnimJoint89.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint89.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint90 = createNode("HAnimJoint");
HAnimJoint90.name = "l_acromioclavicular";
HAnimJoint90.DEF = "Joe_l_acromioclavicular";
HAnimJoint90.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint90.skinCoordIndex = new MFInt32(new int[79]);
HAnimJoint90.skinCoordWeight = new MFFloat(new float[1]);
HAnimJoint90.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint90.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint91 = createNode("HAnimJoint");
HAnimJoint91.name = "l_shoulder";
HAnimJoint91.DEF = "Joe_l_shoulder";
HAnimJoint91.center = new SFVec3f(new float[0.2,1.44,-0.04]);
HAnimJoint91.skinCoordIndex = new MFInt32(new int[41,42,44,80,102,103,104,105]);
HAnimJoint91.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint91.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint91.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint92 = createNode("HAnimJoint");
HAnimJoint92.name = "l_elbow";
HAnimJoint92.DEF = "Joe_l_elbow";
HAnimJoint92.center = new SFVec3f(new float[0.2,1.1388,-0.04]);
HAnimJoint92.skinCoordIndex = new MFInt32(new int[45,46,47,109,110,111,112,113,115,116,117,118]);
HAnimJoint92.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint92.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint92.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint93 = createNode("HAnimJoint");
HAnimJoint93.name = "l_wrist";
HAnimJoint93.DEF = "Joe_l_wrist";
HAnimJoint93.center = new SFVec3f(new float[0.2,0.87,-0.04]);
HAnimJoint93.skinCoordIndex = new MFInt32(new int[119,120,121,122,123,124,125,126]);
HAnimJoint93.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint93.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint93.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint94 = createNode("HAnimJoint");
HAnimJoint94.name = "l_thumb1";
HAnimJoint94.DEF = "Joe_l_thumb1";
HAnimJoint94.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint94.skinCoordIndex = new MFInt32(new int[127,128]);
HAnimJoint94.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint94.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint94.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint95 = createNode("HAnimJoint");
HAnimJoint95.name = "l_thumb2";
HAnimJoint95.DEF = "Joe_l_thumb2";
HAnimJoint95.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint95.skinCoordIndex = new MFInt32(new int[138,139,140,141,142,143]);
HAnimJoint95.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1]);
HAnimJoint95.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint95.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint96 = createNode("HAnimJoint");
HAnimJoint96.name = "l_thumb3";
HAnimJoint96.DEF = "Joe_l_thumb3";
HAnimJoint96.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint96.skinCoordIndex = new MFInt32(new int[144,145,146,147,148,149,150,151,152]);
HAnimJoint96.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint96.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint96.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint95.children = new MFNode();

HAnimJoint95.children[0] = HAnimJoint96;

HAnimJoint94.children = new MFNode();

HAnimJoint94.children[0] = HAnimJoint95;

HAnimJoint93.children = new MFNode();

HAnimJoint93.children[0] = HAnimJoint94;

HAnimJoint HAnimJoint97 = createNode("HAnimJoint");
HAnimJoint97.name = "l_index0";
HAnimJoint97.DEF = "Joe_l_index0";
HAnimJoint97.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint97.skinCoordIndex = new MFInt32(new int[129,130]);
HAnimJoint97.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint97.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint97.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint98 = createNode("HAnimJoint");
HAnimJoint98.name = "l_index1";
HAnimJoint98.DEF = "Joe_l_index1";
HAnimJoint98.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint98.skinCoordIndex = new MFInt32(new int[138,139,140,153,154,155,163]);
HAnimJoint98.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1,0.5]);
HAnimJoint98.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint98.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint99 = createNode("HAnimJoint");
HAnimJoint99.name = "l_index2";
HAnimJoint99.DEF = "Joe_l_index2";
HAnimJoint99.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint99.skinCoordIndex = new MFInt32(new int[166,167,168,169]);
HAnimJoint99.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint99.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint99.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint100 = createNode("HAnimJoint");
HAnimJoint100.name = "l_index3";
HAnimJoint100.DEF = "Joe_l_index3";
HAnimJoint100.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint100.skinCoordIndex = new MFInt32(new int[170,171,172,173,174,175,176,177,178]);
HAnimJoint100.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint100.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint100.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint99.children = new MFNode();

HAnimJoint99.children[0] = HAnimJoint100;

HAnimJoint98.children = new MFNode();

HAnimJoint98.children[0] = HAnimJoint99;

HAnimJoint97.children = new MFNode();

HAnimJoint97.children[0] = HAnimJoint98;

HAnimJoint93.children[1] = HAnimJoint97;

HAnimJoint HAnimJoint101 = createNode("HAnimJoint");
HAnimJoint101.name = "l_middle0";
HAnimJoint101.DEF = "Joe_l_middle0";
HAnimJoint101.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint101.skinCoordIndex = new MFInt32(new int[131,132]);
HAnimJoint101.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint101.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint101.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint102 = createNode("HAnimJoint");
HAnimJoint102.name = "l_middle1";
HAnimJoint102.DEF = "Joe_l_middle1";
HAnimJoint102.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint102.skinCoordIndex = new MFInt32(new int[156,157,163,164]);
HAnimJoint102.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimJoint102.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint102.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint103 = createNode("HAnimJoint");
HAnimJoint103.name = "l_middle2";
HAnimJoint103.DEF = "Joe_l_middle2";
HAnimJoint103.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint103.skinCoordIndex = new MFInt32(new int[179,180,181,182]);
HAnimJoint103.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint103.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint103.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint104 = createNode("HAnimJoint");
HAnimJoint104.name = "l_middle3";
HAnimJoint104.DEF = "Joe_l_middle3";
HAnimJoint104.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint104.skinCoordIndex = new MFInt32(new int[183,184,185,186,187,188,189,190,191]);
HAnimJoint104.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint104.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint104.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint103.children = new MFNode();

HAnimJoint103.children[0] = HAnimJoint104;

HAnimJoint102.children = new MFNode();

HAnimJoint102.children[0] = HAnimJoint103;

HAnimJoint101.children = new MFNode();

HAnimJoint101.children[0] = HAnimJoint102;

HAnimJoint93.children[2] = HAnimJoint101;

HAnimJoint HAnimJoint105 = createNode("HAnimJoint");
HAnimJoint105.name = "l_ring0";
HAnimJoint105.DEF = "Joe_l_ring0";
HAnimJoint105.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint105.skinCoordIndex = new MFInt32(new int[133,134]);
HAnimJoint105.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint105.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint105.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint106 = createNode("HAnimJoint");
HAnimJoint106.name = "l_ring1";
HAnimJoint106.DEF = "Joe_l_ring1";
HAnimJoint106.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint106.skinCoordIndex = new MFInt32(new int[158,159,164,165]);
HAnimJoint106.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimJoint106.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint106.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint107 = createNode("HAnimJoint");
HAnimJoint107.name = "l_ring2";
HAnimJoint107.DEF = "Joe_l_ring2";
HAnimJoint107.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint107.skinCoordIndex = new MFInt32(new int[192,193,194,195]);
HAnimJoint107.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint107.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint107.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint108 = createNode("HAnimJoint");
HAnimJoint108.name = "l_ring3";
HAnimJoint108.DEF = "Joe_l_ring3";
HAnimJoint108.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint108.skinCoordIndex = new MFInt32(new int[196,197,198,199,200,201,202,203,204]);
HAnimJoint108.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint108.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint108.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint107.children = new MFNode();

HAnimJoint107.children[0] = HAnimJoint108;

HAnimJoint106.children = new MFNode();

HAnimJoint106.children[0] = HAnimJoint107;

HAnimJoint105.children = new MFNode();

HAnimJoint105.children[0] = HAnimJoint106;

HAnimJoint93.children[3] = HAnimJoint105;

HAnimJoint HAnimJoint109 = createNode("HAnimJoint");
HAnimJoint109.name = "l_pinky0";
HAnimJoint109.DEF = "Joe_l_pinky0";
HAnimJoint109.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint109.skinCoordIndex = new MFInt32(new int[135,136,137,165]);
HAnimJoint109.skinCoordWeight = new MFFloat(new float[1,1,1,0.5]);
HAnimJoint109.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint109.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint110 = createNode("HAnimJoint");
HAnimJoint110.name = "l_pinky1";
HAnimJoint110.DEF = "Joe_l_pinky1";
HAnimJoint110.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint110.skinCoordIndex = new MFInt32(new int[160,161,162]);
HAnimJoint110.skinCoordWeight = new MFFloat(new float[1,1,1]);
HAnimJoint110.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint110.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint111 = createNode("HAnimJoint");
HAnimJoint111.name = "l_pinky2";
HAnimJoint111.DEF = "Joe_l_pinky2";
HAnimJoint111.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint111.skinCoordIndex = new MFInt32(new int[205,206,207,208]);
HAnimJoint111.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint111.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint111.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint112 = createNode("HAnimJoint");
HAnimJoint112.name = "l_pinky3";
HAnimJoint112.DEF = "Joe_l_pinky3";
HAnimJoint112.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint112.skinCoordIndex = new MFInt32(new int[209,210,211,212,213,214,215,216,217]);
HAnimJoint112.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint112.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint112.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint111.children = new MFNode();

HAnimJoint111.children[0] = HAnimJoint112;

HAnimJoint110.children = new MFNode();

HAnimJoint110.children[0] = HAnimJoint111;

HAnimJoint109.children = new MFNode();

HAnimJoint109.children[0] = HAnimJoint110;

HAnimJoint93.children[4] = HAnimJoint109;

HAnimJoint92.children = new MFNode();

HAnimJoint92.children[0] = HAnimJoint93;

HAnimJoint91.children = new MFNode();

HAnimJoint91.children[0] = HAnimJoint92;

HAnimJoint90.children = new MFNode();

HAnimJoint90.children[0] = HAnimJoint91;

HAnimJoint89.children = new MFNode();

HAnimJoint89.children[0] = HAnimJoint90;

HAnimJoint73.children[1] = HAnimJoint89;

HAnimJoint HAnimJoint113 = createNode("HAnimJoint");
HAnimJoint113.name = "r_sternoclavicular";
HAnimJoint113.DEF = "Joe_r_sternoclavicular";
HAnimJoint113.center = new SFVec3f(new float[-0.03,1.46,0]);
HAnimJoint113.skinCoordIndex = new MFInt32(new int[10]);
HAnimJoint113.skinCoordWeight = new MFFloat(new float[1]);
HAnimJoint113.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint113.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint114 = createNode("HAnimJoint");
HAnimJoint114.name = "r_acromioclavicular";
HAnimJoint114.DEF = "Joe_r_acromioclavicular";
HAnimJoint114.center = new SFVec3f(new float[-0.09,1.41,-0.11]);
HAnimJoint114.skinCoordIndex = new MFInt32(new int[77,29]);
HAnimJoint114.skinCoordWeight = new MFFloat(new float[1,0.9]);
HAnimJoint114.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint114.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint115 = createNode("HAnimJoint");
HAnimJoint115.name = "r_shoulder";
HAnimJoint115.DEF = "Joe_r_shoulder";
HAnimJoint115.center = new SFVec3f(new float[-0.2,1.44,-0.04]);
HAnimJoint115.skinCoordIndex = new MFInt32(new int[29,30,32,78,218,219,220,221,86,88]);
HAnimJoint115.skinCoordWeight = new MFFloat(new float[0.1,1,1,1,1,1,1,1,0.3,0.2]);
HAnimJoint115.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint115.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint116 = createNode("HAnimJoint");
HAnimJoint116.name = "r_elbow";
HAnimJoint116.DEF = "Joe_r_elbow";
HAnimJoint116.center = new SFVec3f(new float[-0.2,1.1388,-0.04]);
HAnimJoint116.skinCoordIndex = new MFInt32(new int[33,34,35,225,226,227,228,229,231,232,233,234]);
HAnimJoint116.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint116.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint116.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint117 = createNode("HAnimJoint");
HAnimJoint117.name = "r_wrist";
HAnimJoint117.DEF = "Joe_r_wrist";
HAnimJoint117.center = new SFVec3f(new float[-0.2,0.89,-0.04]);
HAnimJoint117.skinCoordIndex = new MFInt32(new int[235,236,237,238,239,240,241,242]);
HAnimJoint117.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint117.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint117.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint118 = createNode("HAnimJoint");
HAnimJoint118.name = "r_thumb1";
HAnimJoint118.DEF = "Joe_r_thumb1";
HAnimJoint118.center = new SFVec3f(new float[-0.2,0.85,0]);
HAnimJoint118.skinCoordIndex = new MFInt32(new int[243,244]);
HAnimJoint118.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint118.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint118.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint119 = createNode("HAnimJoint");
HAnimJoint119.name = "r_thumb2";
HAnimJoint119.DEF = "Joe_r_thumb2";
HAnimJoint119.center = new SFVec3f(new float[-0.2,0.82,0.03]);
HAnimJoint119.skinCoordIndex = new MFInt32(new int[254,255,256,257,258,259]);
HAnimJoint119.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1]);
HAnimJoint119.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint119.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint120 = createNode("HAnimJoint");
HAnimJoint120.name = "r_thumb3";
HAnimJoint120.DEF = "Joe_r_thumb3";
HAnimJoint120.center = new SFVec3f(new float[-0.2,0.8,0.05]);
HAnimJoint120.skinCoordIndex = new MFInt32(new int[260,261,262,263,264,265,266,267,268]);
HAnimJoint120.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint120.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint120.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint119.children = new MFNode();

HAnimJoint119.children[0] = HAnimJoint120;

HAnimJoint118.children = new MFNode();

HAnimJoint118.children[0] = HAnimJoint119;

HAnimJoint117.children = new MFNode();

HAnimJoint117.children[0] = HAnimJoint118;

HAnimJoint HAnimJoint121 = createNode("HAnimJoint");
HAnimJoint121.name = "r_index0";
HAnimJoint121.DEF = "Joe_r_index0";
HAnimJoint121.center = new SFVec3f(new float[-0.2,0.84,-0.015]);
HAnimJoint121.skinCoordIndex = new MFInt32(new int[245,246]);
HAnimJoint121.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint121.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint121.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint122 = createNode("HAnimJoint");
HAnimJoint122.name = "r_index1";
HAnimJoint122.DEF = "Joe_r_index1";
HAnimJoint122.center = new SFVec3f(new float[-0.2,0.793,-0.015]);
HAnimJoint122.skinCoordIndex = new MFInt32(new int[254,255,256,269,270,271,279]);
HAnimJoint122.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1,0.5]);
HAnimJoint122.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint122.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint123 = createNode("HAnimJoint");
HAnimJoint123.name = "r_index2";
HAnimJoint123.DEF = "Joe_r_index2";
HAnimJoint123.center = new SFVec3f(new float[-0.2,0.745,-0.015]);
HAnimJoint123.skinCoordIndex = new MFInt32(new int[282,283,284,285]);
HAnimJoint123.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint123.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint123.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint124 = createNode("HAnimJoint");
HAnimJoint124.name = "r_index3";
HAnimJoint124.DEF = "Joe_r_index3";
HAnimJoint124.center = new SFVec3f(new float[-0.2,0.72,-0.015]);
HAnimJoint124.skinCoordIndex = new MFInt32(new int[286,287,288,289,290,291,292,293,294]);
HAnimJoint124.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint124.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint124.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint123.children = new MFNode();

HAnimJoint123.children[0] = HAnimJoint124;

HAnimJoint122.children = new MFNode();

HAnimJoint122.children[0] = HAnimJoint123;

HAnimJoint121.children = new MFNode();

HAnimJoint121.children[0] = HAnimJoint122;

HAnimJoint117.children[1] = HAnimJoint121;

HAnimJoint HAnimJoint125 = createNode("HAnimJoint");
HAnimJoint125.name = "r_middle0";
HAnimJoint125.DEF = "Joe_r_middle0";
HAnimJoint125.center = new SFVec3f(new float[-0.2,0.835,-0.04]);
HAnimJoint125.skinCoordIndex = new MFInt32(new int[247,248]);
HAnimJoint125.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint125.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint125.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint126 = createNode("HAnimJoint");
HAnimJoint126.name = "r_middle1";
HAnimJoint126.DEF = "Joe_r_middle1";
HAnimJoint126.center = new SFVec3f(new float[-0.2,0.788,-0.04]);
HAnimJoint126.skinCoordIndex = new MFInt32(new int[272,273,279,280]);
HAnimJoint126.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimJoint126.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint126.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint127 = createNode("HAnimJoint");
HAnimJoint127.name = "r_middle2";
HAnimJoint127.DEF = "Joe_r_middle2";
HAnimJoint127.center = new SFVec3f(new float[-0.2,0.74,-0.04]);
HAnimJoint127.skinCoordIndex = new MFInt32(new int[295,296,297,298]);
HAnimJoint127.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint127.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint127.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint128 = createNode("HAnimJoint");
HAnimJoint128.name = "r_middle3";
HAnimJoint128.DEF = "Joe_r_middle3";
HAnimJoint128.center = new SFVec3f(new float[-0.2,0.7142,-0.04]);
HAnimJoint128.skinCoordIndex = new MFInt32(new int[299,300,301,302,303,304,305,306,307]);
HAnimJoint128.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint128.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint128.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint127.children = new MFNode();

HAnimJoint127.children[0] = HAnimJoint128;

HAnimJoint126.children = new MFNode();

HAnimJoint126.children[0] = HAnimJoint127;

HAnimJoint125.children = new MFNode();

HAnimJoint125.children[0] = HAnimJoint126;

HAnimJoint117.children[2] = HAnimJoint125;

HAnimJoint HAnimJoint129 = createNode("HAnimJoint");
HAnimJoint129.name = "r_ring0";
HAnimJoint129.DEF = "Joe_r_ring0";
HAnimJoint129.center = new SFVec3f(new float[-0.2,0.835,-0.065]);
HAnimJoint129.skinCoordIndex = new MFInt32(new int[249,250]);
HAnimJoint129.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint129.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint129.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint130 = createNode("HAnimJoint");
HAnimJoint130.name = "r_ring1";
HAnimJoint130.DEF = "Joe_r_ring1";
HAnimJoint130.center = new SFVec3f(new float[-0.2,0.793,-0.065]);
HAnimJoint130.skinCoordIndex = new MFInt32(new int[274,275,280,281]);
HAnimJoint130.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimJoint130.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint130.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint131 = createNode("HAnimJoint");
HAnimJoint131.name = "r_ring2";
HAnimJoint131.DEF = "Joe_r_ring2";
HAnimJoint131.center = new SFVec3f(new float[-0.2,0.74,-0.065]);
HAnimJoint131.skinCoordIndex = new MFInt32(new int[308,309,310,311]);
HAnimJoint131.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint131.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint131.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint132 = createNode("HAnimJoint");
HAnimJoint132.name = "r_ring3";
HAnimJoint132.DEF = "Joe_r_ring3";
HAnimJoint132.center = new SFVec3f(new float[-0.2,0.7177,-0.065]);
HAnimJoint132.skinCoordIndex = new MFInt32(new int[312,313,314,315,316,317,318,319,320]);
HAnimJoint132.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint132.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint132.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint131.children = new MFNode();

HAnimJoint131.children[0] = HAnimJoint132;

HAnimJoint130.children = new MFNode();

HAnimJoint130.children[0] = HAnimJoint131;

HAnimJoint129.children = new MFNode();

HAnimJoint129.children[0] = HAnimJoint130;

HAnimJoint117.children[3] = HAnimJoint129;

HAnimJoint HAnimJoint133 = createNode("HAnimJoint");
HAnimJoint133.name = "r_pinky0";
HAnimJoint133.DEF = "Joe_r_pinky0";
HAnimJoint133.center = new SFVec3f(new float[-0.2,0.84,-0.085]);
HAnimJoint133.skinCoordIndex = new MFInt32(new int[251,252,253,281]);
HAnimJoint133.skinCoordWeight = new MFFloat(new float[1,1,1,0.5]);
HAnimJoint133.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint133.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint134 = createNode("HAnimJoint");
HAnimJoint134.name = "r_pinky1";
HAnimJoint134.DEF = "Joe_r_pinky1";
HAnimJoint134.center = new SFVec3f(new float[-0.2,0.79,-0.085]);
HAnimJoint134.skinCoordIndex = new MFInt32(new int[276,277,278]);
HAnimJoint134.skinCoordWeight = new MFFloat(new float[1,1,1]);
HAnimJoint134.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint134.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint135 = createNode("HAnimJoint");
HAnimJoint135.name = "r_pinky2";
HAnimJoint135.DEF = "Joe_r_pinky2";
HAnimJoint135.center = new SFVec3f(new float[-0.2,0.755,-0.085]);
HAnimJoint135.skinCoordIndex = new MFInt32(new int[321,322,323,324]);
HAnimJoint135.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint135.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint135.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint136 = createNode("HAnimJoint");
HAnimJoint136.name = "r_pinky3";
HAnimJoint136.DEF = "Joe_r_pinky3";
HAnimJoint136.center = new SFVec3f(new float[-0.2,0.735,-0.09]);
HAnimJoint136.skinCoordIndex = new MFInt32(new int[325,326,327,328,329,330,331,332,333]);
HAnimJoint136.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint136.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint136.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint135.children = new MFNode();

HAnimJoint135.children[0] = HAnimJoint136;

HAnimJoint134.children = new MFNode();

HAnimJoint134.children[0] = HAnimJoint135;

HAnimJoint133.children = new MFNode();

HAnimJoint133.children[0] = HAnimJoint134;

HAnimJoint117.children[4] = HAnimJoint133;

HAnimJoint116.children = new MFNode();

HAnimJoint116.children[0] = HAnimJoint117;

HAnimJoint115.children = new MFNode();

HAnimJoint115.children[0] = HAnimJoint116;

HAnimJoint114.children = new MFNode();

HAnimJoint114.children[0] = HAnimJoint115;

HAnimJoint113.children = new MFNode();

HAnimJoint113.children[0] = HAnimJoint114;

HAnimJoint73.children[2] = HAnimJoint113;

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

HAnimJoint32.children[2] = HAnimJoint56;

HAnimHumanoid31.joints = new MFNode();

HAnimHumanoid31.joints[0] = HAnimJoint32;

Shape Shape137 = createNode("Shape");
Shape137.DEF = "Joe_Shape";
Appearance Appearance138 = createNode("Appearance");
Appearance138.DEF = "Joe_skin_Appearance";
Material Material139 = createNode("Material");
Material139.DEF = "Joe_skin_Material";
Material139.diffuseColor = new SFColor(new float[0.3,0.3,0.6]);
Material139.emissiveColor = new SFColor(new float[0.3,0.3,0.6]);
Appearance138.material = Material139;

ImageTexture ImageTexture140 = createNode("ImageTexture");
ImageTexture140.DEF = "JoeSkinImageTexture";
ImageTexture140.url = new MFString(new java.lang.String["JoeBodyTexture29.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/JoeBodyTexture29.png"]);
Appearance138.texture = ImageTexture140;

TextureTransform TextureTransform141 = createNode("TextureTransform");
TextureTransform141.DEF = "KickTextureTransform";
Appearance138.textureTransform = TextureTransform141;

Shape137.appearance = Appearance138;

IndexedFaceSet IndexedFaceSet142 = createNode("IndexedFaceSet");
IndexedFaceSet142.DEF = "Joe_skin_IndexedFaceSet";
IndexedFaceSet142.coordIndex = new MFInt32(new int[0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
IndexedFaceSet142.creaseAngle = 3.14;
Coordinate Coordinate143 = createNode("Coordinate");
Coordinate143.DEF = "Joe_SkinCoord";
Coordinate143.point = new MFVec3f(new float[0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.255,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168]);
IndexedFaceSet142.coord = Coordinate143;

TextureCoordinate TextureCoordinate144 = createNode("TextureCoordinate");
TextureCoordinate144.point = new MFVec2f(new float[0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5]);
IndexedFaceSet142.texCoord = TextureCoordinate144;

Shape137.geometry = IndexedFaceSet142;

HAnimHumanoid31.skin[1] = Shape137;

Coordinate Coordinate145 = createNode("Coordinate");
Coordinate145.USE = "Joe_SkinCoord";
HAnimHumanoid31.skinCoord = Coordinate145;

HAnimJoint HAnimJoint146 = createNode("HAnimJoint");
HAnimJoint146.USE = "Joe_HumanoidRoot";
HAnimHumanoid31.joints[2] = HAnimJoint146;

HAnimJoint HAnimJoint147 = createNode("HAnimJoint");
HAnimJoint147.USE = "Joe_sacroiliac";
HAnimHumanoid31.joints[3] = HAnimJoint147;

HAnimJoint HAnimJoint148 = createNode("HAnimJoint");
HAnimJoint148.USE = "Joe_vl5";
HAnimHumanoid31.joints[4] = HAnimJoint148;

HAnimJoint HAnimJoint149 = createNode("HAnimJoint");
HAnimJoint149.USE = "Joe_vl4";
HAnimHumanoid31.joints[5] = HAnimJoint149;

HAnimJoint HAnimJoint150 = createNode("HAnimJoint");
HAnimJoint150.USE = "Joe_vl3";
HAnimHumanoid31.joints[6] = HAnimJoint150;

HAnimJoint HAnimJoint151 = createNode("HAnimJoint");
HAnimJoint151.USE = "Joe_vl2";
HAnimHumanoid31.joints[7] = HAnimJoint151;

HAnimJoint HAnimJoint152 = createNode("HAnimJoint");
HAnimJoint152.USE = "Joe_vl1";
HAnimHumanoid31.joints[8] = HAnimJoint152;

HAnimJoint HAnimJoint153 = createNode("HAnimJoint");
HAnimJoint153.USE = "Joe_vt12";
HAnimHumanoid31.joints[9] = HAnimJoint153;

HAnimJoint HAnimJoint154 = createNode("HAnimJoint");
HAnimJoint154.USE = "Joe_vt11";
HAnimHumanoid31.joints[10] = HAnimJoint154;

HAnimJoint HAnimJoint155 = createNode("HAnimJoint");
HAnimJoint155.USE = "Joe_vt10";
HAnimHumanoid31.joints[11] = HAnimJoint155;

HAnimJoint HAnimJoint156 = createNode("HAnimJoint");
HAnimJoint156.USE = "Joe_vt9";
HAnimHumanoid31.joints[12] = HAnimJoint156;

HAnimJoint HAnimJoint157 = createNode("HAnimJoint");
HAnimJoint157.USE = "Joe_vt8";
HAnimHumanoid31.joints[13] = HAnimJoint157;

HAnimJoint HAnimJoint158 = createNode("HAnimJoint");
HAnimJoint158.USE = "Joe_vt7";
HAnimHumanoid31.joints[14] = HAnimJoint158;

HAnimJoint HAnimJoint159 = createNode("HAnimJoint");
HAnimJoint159.USE = "Joe_vt6";
HAnimHumanoid31.joints[15] = HAnimJoint159;

HAnimJoint HAnimJoint160 = createNode("HAnimJoint");
HAnimJoint160.USE = "Joe_vt5";
HAnimHumanoid31.joints[16] = HAnimJoint160;

HAnimJoint HAnimJoint161 = createNode("HAnimJoint");
HAnimJoint161.USE = "Joe_vt4";
HAnimHumanoid31.joints[17] = HAnimJoint161;

HAnimJoint HAnimJoint162 = createNode("HAnimJoint");
HAnimJoint162.USE = "Joe_vt3";
HAnimHumanoid31.joints[18] = HAnimJoint162;

HAnimJoint HAnimJoint163 = createNode("HAnimJoint");
HAnimJoint163.USE = "Joe_vt2";
HAnimHumanoid31.joints[19] = HAnimJoint163;

HAnimJoint HAnimJoint164 = createNode("HAnimJoint");
HAnimJoint164.USE = "Joe_vt1";
HAnimHumanoid31.joints[20] = HAnimJoint164;

HAnimJoint HAnimJoint165 = createNode("HAnimJoint");
HAnimJoint165.USE = "Joe_vc7";
HAnimHumanoid31.joints[21] = HAnimJoint165;

HAnimJoint HAnimJoint166 = createNode("HAnimJoint");
HAnimJoint166.USE = "Joe_vc6";
HAnimHumanoid31.joints[22] = HAnimJoint166;

HAnimJoint HAnimJoint167 = createNode("HAnimJoint");
HAnimJoint167.USE = "Joe_vc5";
HAnimHumanoid31.joints[23] = HAnimJoint167;

HAnimJoint HAnimJoint168 = createNode("HAnimJoint");
HAnimJoint168.USE = "Joe_vc4";
HAnimHumanoid31.joints[24] = HAnimJoint168;

HAnimJoint HAnimJoint169 = createNode("HAnimJoint");
HAnimJoint169.USE = "Joe_vc3";
HAnimHumanoid31.joints[25] = HAnimJoint169;

HAnimJoint HAnimJoint170 = createNode("HAnimJoint");
HAnimJoint170.USE = "Joe_vc2";
HAnimHumanoid31.joints[26] = HAnimJoint170;

HAnimJoint HAnimJoint171 = createNode("HAnimJoint");
HAnimJoint171.USE = "Joe_vc1";
HAnimHumanoid31.joints[27] = HAnimJoint171;

HAnimJoint HAnimJoint172 = createNode("HAnimJoint");
HAnimJoint172.USE = "Joe_skullbase";
HAnimHumanoid31.joints[28] = HAnimJoint172;

HAnimJoint HAnimJoint173 = createNode("HAnimJoint");
HAnimJoint173.USE = "Joe_temporomandibular";
HAnimHumanoid31.joints[29] = HAnimJoint173;

HAnimJoint HAnimJoint174 = createNode("HAnimJoint");
HAnimJoint174.USE = "Joe_l_acromioclavicular";
HAnimHumanoid31.joints[30] = HAnimJoint174;

HAnimJoint HAnimJoint175 = createNode("HAnimJoint");
HAnimJoint175.USE = "Joe_r_acromioclavicular";
HAnimHumanoid31.joints[31] = HAnimJoint175;

HAnimJoint HAnimJoint176 = createNode("HAnimJoint");
HAnimJoint176.USE = "Joe_l_ankle";
HAnimHumanoid31.joints[32] = HAnimJoint176;

HAnimJoint HAnimJoint177 = createNode("HAnimJoint");
HAnimJoint177.USE = "Joe_r_ankle";
HAnimHumanoid31.joints[33] = HAnimJoint177;

HAnimJoint HAnimJoint178 = createNode("HAnimJoint");
HAnimJoint178.USE = "Joe_l_elbow";
HAnimHumanoid31.joints[34] = HAnimJoint178;

HAnimJoint HAnimJoint179 = createNode("HAnimJoint");
HAnimJoint179.USE = "Joe_r_elbow";
HAnimHumanoid31.joints[35] = HAnimJoint179;

HAnimJoint HAnimJoint180 = createNode("HAnimJoint");
HAnimJoint180.USE = "Joe_l_eyeball_joint";
HAnimHumanoid31.joints[36] = HAnimJoint180;

HAnimJoint HAnimJoint181 = createNode("HAnimJoint");
HAnimJoint181.USE = "Joe_r_eyeball_joint";
HAnimHumanoid31.joints[37] = HAnimJoint181;

HAnimJoint HAnimJoint182 = createNode("HAnimJoint");
HAnimJoint182.USE = "Joe_l_eyebrow_joint";
HAnimHumanoid31.joints[38] = HAnimJoint182;

HAnimJoint HAnimJoint183 = createNode("HAnimJoint");
HAnimJoint183.USE = "Joe_r_eyebrow_joint";
HAnimHumanoid31.joints[39] = HAnimJoint183;

HAnimJoint HAnimJoint184 = createNode("HAnimJoint");
HAnimJoint184.USE = "Joe_l_eyelid_joint";
HAnimHumanoid31.joints[40] = HAnimJoint184;

HAnimJoint HAnimJoint185 = createNode("HAnimJoint");
HAnimJoint185.USE = "Joe_r_eyelid_joint";
HAnimHumanoid31.joints[41] = HAnimJoint185;

HAnimJoint HAnimJoint186 = createNode("HAnimJoint");
HAnimJoint186.USE = "Joe_l_hip";
HAnimHumanoid31.joints[42] = HAnimJoint186;

HAnimJoint HAnimJoint187 = createNode("HAnimJoint");
HAnimJoint187.USE = "Joe_r_hip";
HAnimHumanoid31.joints[43] = HAnimJoint187;

HAnimJoint HAnimJoint188 = createNode("HAnimJoint");
HAnimJoint188.USE = "Joe_l_index0";
HAnimHumanoid31.joints[44] = HAnimJoint188;

HAnimJoint HAnimJoint189 = createNode("HAnimJoint");
HAnimJoint189.USE = "Joe_r_index0";
HAnimHumanoid31.joints[45] = HAnimJoint189;

HAnimJoint HAnimJoint190 = createNode("HAnimJoint");
HAnimJoint190.USE = "Joe_l_index1";
HAnimHumanoid31.joints[46] = HAnimJoint190;

HAnimJoint HAnimJoint191 = createNode("HAnimJoint");
HAnimJoint191.USE = "Joe_r_index1";
HAnimHumanoid31.joints[47] = HAnimJoint191;

HAnimJoint HAnimJoint192 = createNode("HAnimJoint");
HAnimJoint192.USE = "Joe_l_index2";
HAnimHumanoid31.joints[48] = HAnimJoint192;

HAnimJoint HAnimJoint193 = createNode("HAnimJoint");
HAnimJoint193.USE = "Joe_r_index2";
HAnimHumanoid31.joints[49] = HAnimJoint193;

HAnimJoint HAnimJoint194 = createNode("HAnimJoint");
HAnimJoint194.USE = "Joe_l_index3";
HAnimHumanoid31.joints[50] = HAnimJoint194;

HAnimJoint HAnimJoint195 = createNode("HAnimJoint");
HAnimJoint195.USE = "Joe_r_index3";
HAnimHumanoid31.joints[51] = HAnimJoint195;

HAnimJoint HAnimJoint196 = createNode("HAnimJoint");
HAnimJoint196.USE = "Joe_l_knee";
HAnimHumanoid31.joints[52] = HAnimJoint196;

HAnimJoint HAnimJoint197 = createNode("HAnimJoint");
HAnimJoint197.USE = "Joe_r_knee";
HAnimHumanoid31.joints[53] = HAnimJoint197;

HAnimJoint HAnimJoint198 = createNode("HAnimJoint");
HAnimJoint198.USE = "Joe_l_metatarsal";
HAnimHumanoid31.joints[54] = HAnimJoint198;

HAnimJoint HAnimJoint199 = createNode("HAnimJoint");
HAnimJoint199.USE = "Joe_r_metatarsal";
HAnimHumanoid31.joints[55] = HAnimJoint199;

HAnimJoint HAnimJoint200 = createNode("HAnimJoint");
HAnimJoint200.USE = "Joe_l_middle0";
HAnimHumanoid31.joints[56] = HAnimJoint200;

HAnimJoint HAnimJoint201 = createNode("HAnimJoint");
HAnimJoint201.USE = "Joe_r_middle0";
HAnimHumanoid31.joints[57] = HAnimJoint201;

HAnimJoint HAnimJoint202 = createNode("HAnimJoint");
HAnimJoint202.USE = "Joe_l_middle1";
HAnimHumanoid31.joints[58] = HAnimJoint202;

HAnimJoint HAnimJoint203 = createNode("HAnimJoint");
HAnimJoint203.USE = "Joe_r_middle1";
HAnimHumanoid31.joints[59] = HAnimJoint203;

HAnimJoint HAnimJoint204 = createNode("HAnimJoint");
HAnimJoint204.USE = "Joe_l_middle2";
HAnimHumanoid31.joints[60] = HAnimJoint204;

HAnimJoint HAnimJoint205 = createNode("HAnimJoint");
HAnimJoint205.USE = "Joe_r_middle2";
HAnimHumanoid31.joints[61] = HAnimJoint205;

HAnimJoint HAnimJoint206 = createNode("HAnimJoint");
HAnimJoint206.USE = "Joe_l_middle3";
HAnimHumanoid31.joints[62] = HAnimJoint206;

HAnimJoint HAnimJoint207 = createNode("HAnimJoint");
HAnimJoint207.USE = "Joe_r_middle3";
HAnimHumanoid31.joints[63] = HAnimJoint207;

HAnimJoint HAnimJoint208 = createNode("HAnimJoint");
HAnimJoint208.USE = "Joe_l_midtarsal";
HAnimHumanoid31.joints[64] = HAnimJoint208;

HAnimJoint HAnimJoint209 = createNode("HAnimJoint");
HAnimJoint209.USE = "Joe_r_midtarsal";
HAnimHumanoid31.joints[65] = HAnimJoint209;

HAnimJoint HAnimJoint210 = createNode("HAnimJoint");
HAnimJoint210.USE = "Joe_l_pinky0";
HAnimHumanoid31.joints[66] = HAnimJoint210;

HAnimJoint HAnimJoint211 = createNode("HAnimJoint");
HAnimJoint211.USE = "Joe_r_pinky0";
HAnimHumanoid31.joints[67] = HAnimJoint211;

HAnimJoint HAnimJoint212 = createNode("HAnimJoint");
HAnimJoint212.USE = "Joe_l_pinky1";
HAnimHumanoid31.joints[68] = HAnimJoint212;

HAnimJoint HAnimJoint213 = createNode("HAnimJoint");
HAnimJoint213.USE = "Joe_r_pinky1";
HAnimHumanoid31.joints[69] = HAnimJoint213;

HAnimJoint HAnimJoint214 = createNode("HAnimJoint");
HAnimJoint214.USE = "Joe_l_pinky2";
HAnimHumanoid31.joints[70] = HAnimJoint214;

HAnimJoint HAnimJoint215 = createNode("HAnimJoint");
HAnimJoint215.USE = "Joe_r_pinky2";
HAnimHumanoid31.joints[71] = HAnimJoint215;

HAnimJoint HAnimJoint216 = createNode("HAnimJoint");
HAnimJoint216.USE = "Joe_l_pinky3";
HAnimHumanoid31.joints[72] = HAnimJoint216;

HAnimJoint HAnimJoint217 = createNode("HAnimJoint");
HAnimJoint217.USE = "Joe_r_pinky3";
HAnimHumanoid31.joints[73] = HAnimJoint217;

HAnimJoint HAnimJoint218 = createNode("HAnimJoint");
HAnimJoint218.USE = "Joe_l_ring0";
HAnimHumanoid31.joints[74] = HAnimJoint218;

HAnimJoint HAnimJoint219 = createNode("HAnimJoint");
HAnimJoint219.USE = "Joe_r_ring0";
HAnimHumanoid31.joints[75] = HAnimJoint219;

HAnimJoint HAnimJoint220 = createNode("HAnimJoint");
HAnimJoint220.USE = "Joe_l_ring1";
HAnimHumanoid31.joints[76] = HAnimJoint220;

HAnimJoint HAnimJoint221 = createNode("HAnimJoint");
HAnimJoint221.USE = "Joe_r_ring1";
HAnimHumanoid31.joints[77] = HAnimJoint221;

HAnimJoint HAnimJoint222 = createNode("HAnimJoint");
HAnimJoint222.USE = "Joe_l_ring2";
HAnimHumanoid31.joints[78] = HAnimJoint222;

HAnimJoint HAnimJoint223 = createNode("HAnimJoint");
HAnimJoint223.USE = "Joe_r_ring2";
HAnimHumanoid31.joints[79] = HAnimJoint223;

HAnimJoint HAnimJoint224 = createNode("HAnimJoint");
HAnimJoint224.USE = "Joe_l_ring3";
HAnimHumanoid31.joints[80] = HAnimJoint224;

HAnimJoint HAnimJoint225 = createNode("HAnimJoint");
HAnimJoint225.USE = "Joe_r_ring3";
HAnimHumanoid31.joints[81] = HAnimJoint225;

HAnimJoint HAnimJoint226 = createNode("HAnimJoint");
HAnimJoint226.USE = "Joe_l_shoulder";
HAnimHumanoid31.joints[82] = HAnimJoint226;

HAnimJoint HAnimJoint227 = createNode("HAnimJoint");
HAnimJoint227.USE = "Joe_r_shoulder";
HAnimHumanoid31.joints[83] = HAnimJoint227;

HAnimJoint HAnimJoint228 = createNode("HAnimJoint");
HAnimJoint228.USE = "Joe_l_sternoclavicular";
HAnimHumanoid31.joints[84] = HAnimJoint228;

HAnimJoint HAnimJoint229 = createNode("HAnimJoint");
HAnimJoint229.USE = "Joe_r_sternoclavicular";
HAnimHumanoid31.joints[85] = HAnimJoint229;

HAnimJoint HAnimJoint230 = createNode("HAnimJoint");
HAnimJoint230.USE = "Joe_l_subtalar";
HAnimHumanoid31.joints[86] = HAnimJoint230;

HAnimJoint HAnimJoint231 = createNode("HAnimJoint");
HAnimJoint231.USE = "Joe_r_subtalar";
HAnimHumanoid31.joints[87] = HAnimJoint231;

HAnimJoint HAnimJoint232 = createNode("HAnimJoint");
HAnimJoint232.USE = "Joe_l_thumb1";
HAnimHumanoid31.joints[88] = HAnimJoint232;

HAnimJoint HAnimJoint233 = createNode("HAnimJoint");
HAnimJoint233.USE = "Joe_r_thumb1";
HAnimHumanoid31.joints[89] = HAnimJoint233;

HAnimJoint HAnimJoint234 = createNode("HAnimJoint");
HAnimJoint234.USE = "Joe_l_thumb2";
HAnimHumanoid31.joints[90] = HAnimJoint234;

HAnimJoint HAnimJoint235 = createNode("HAnimJoint");
HAnimJoint235.USE = "Joe_r_thumb2";
HAnimHumanoid31.joints[91] = HAnimJoint235;

HAnimJoint HAnimJoint236 = createNode("HAnimJoint");
HAnimJoint236.USE = "Joe_l_thumb3";
HAnimHumanoid31.joints[92] = HAnimJoint236;

HAnimJoint HAnimJoint237 = createNode("HAnimJoint");
HAnimJoint237.USE = "Joe_r_thumb3";
HAnimHumanoid31.joints[93] = HAnimJoint237;

HAnimJoint HAnimJoint238 = createNode("HAnimJoint");
HAnimJoint238.USE = "Joe_l_wrist";
HAnimHumanoid31.joints[94] = HAnimJoint238;

HAnimJoint HAnimJoint239 = createNode("HAnimJoint");
HAnimJoint239.USE = "Joe_r_wrist";
HAnimHumanoid31.joints[95] = HAnimJoint239;

HAnimSegment HAnimSegment240 = createNode("HAnimSegment");
HAnimSegment240.USE = "Joe_sacrum";
HAnimHumanoid31.segments[96] = HAnimSegment240;

HAnimSite HAnimSite241 = createNode("HAnimSite");
HAnimSite241.USE = "Joe_RootFront_view";
HAnimHumanoid31.viewpoints[97] = HAnimSite241;

Group30.children = new MFNode();

Group30.children[0] = HAnimHumanoid31;

children[10] = Group30;

Group Group242 = createNode("Group");
TimeSensor TimeSensor243 = createNode("TimeSensor");
TimeSensor243.DEF = "KickTimer";
TimeSensor243.cycleInterval = 3.73;
TimeSensor243.loop = True;
Group242.children = new MFNode();

Group242.children[0] = TimeSensor243;

//Interpolators
OrientationInterpolator OrientationInterpolator244 = createNode("OrientationInterpolator");
OrientationInterpolator244.DEF = "HumanoidRoot_RotationInterpolator";
OrientationInterpolator244.key = new MFFloat(new float[0,0.1,0.4,0.6,1]);
OrientationInterpolator244.keyValue = new MFRotation(new float[1,0,0,0.5,1,0,0,0.5,-1,0,0,0.1,-1,0,0,0.5,-1,0,0,0.5]);
Group242.children[1] = OrientationInterpolator244;

PositionInterpolator PositionInterpolator245 = createNode("PositionInterpolator");
PositionInterpolator245.DEF = "HumanoidRoot_TranslationInterpolator";
PositionInterpolator245.key = new MFFloat(new float[0,0.2,0.6,1]);
PositionInterpolator245.keyValue = new MFVec3f(new float[1,0.3,-1,0.4,-0.04,-0.4,-0.18,0.1,0,-0.2,0.15,0.15]);
Group242.children[2] = PositionInterpolator245;

OrientationInterpolator OrientationInterpolator246 = createNode("OrientationInterpolator");
OrientationInterpolator246.DEF = "sacroiliac_RotationInterpolator";
OrientationInterpolator246.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator246.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[3] = OrientationInterpolator246;

OrientationInterpolator OrientationInterpolator247 = createNode("OrientationInterpolator");
OrientationInterpolator247.DEF = "l_hip_RotationInterpolator";
OrientationInterpolator247.key = new MFFloat(new float[0,0.1,0.3,0.45,1]);
OrientationInterpolator247.keyValue = new MFRotation(new float[-1,0,0,1.5,-1,0,0,1,0,0,1,0,1,0,0,0.5,1,0,0,1]);
Group242.children[4] = OrientationInterpolator247;

OrientationInterpolator OrientationInterpolator248 = createNode("OrientationInterpolator");
OrientationInterpolator248.DEF = "l_knee_RotationInterpolator";
OrientationInterpolator248.key = new MFFloat(new float[0,0.2,0.35,0.5,1]);
OrientationInterpolator248.keyValue = new MFRotation(new float[1,0,0,1,0,0,1,0,0,0,1,0.2,1,0,1,0.5,1,0,0,1.4]);
Group242.children[5] = OrientationInterpolator248;

OrientationInterpolator OrientationInterpolator249 = createNode("OrientationInterpolator");
OrientationInterpolator249.DEF = "l_ankle_RotationInterpolator";
OrientationInterpolator249.key = new MFFloat(new float[0,0.25,1]);
OrientationInterpolator249.keyValue = new MFRotation(new float[-1,0,0,1,0,0,1,0,1,0,0,1]);
Group242.children[6] = OrientationInterpolator249;

OrientationInterpolator OrientationInterpolator250 = createNode("OrientationInterpolator");
OrientationInterpolator250.DEF = "l_subtalar_RotationInterpolator";
OrientationInterpolator250.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator250.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[7] = OrientationInterpolator250;

OrientationInterpolator OrientationInterpolator251 = createNode("OrientationInterpolator");
OrientationInterpolator251.DEF = "l_midtarsal_RotationInterpolator";
OrientationInterpolator251.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator251.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[8] = OrientationInterpolator251;

OrientationInterpolator OrientationInterpolator252 = createNode("OrientationInterpolator");
OrientationInterpolator252.DEF = "l_metatarsal_RotationInterpolator";
OrientationInterpolator252.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator252.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[9] = OrientationInterpolator252;

OrientationInterpolator OrientationInterpolator253 = createNode("OrientationInterpolator");
OrientationInterpolator253.DEF = "r_hip_RotationInterpolator";
OrientationInterpolator253.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator253.keyValue = new MFRotation(new float[1,0,0,1,1,0,0,1,-1,0,0,1,-1,0,0,1,-1,0,0,1]);
Group242.children[10] = OrientationInterpolator253;

OrientationInterpolator OrientationInterpolator254 = createNode("OrientationInterpolator");
OrientationInterpolator254.DEF = "r_knee_RotationInterpolator";
OrientationInterpolator254.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator254.keyValue = new MFRotation(new float[1,0,0,0.1,0,0,1,0,1,0,0,1,1,0,0,1,1,0,0,1.5]);
Group242.children[11] = OrientationInterpolator254;

OrientationInterpolator OrientationInterpolator255 = createNode("OrientationInterpolator");
OrientationInterpolator255.DEF = "r_ankle_RotationInterpolator";
OrientationInterpolator255.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator255.keyValue = new MFRotation(new float[-1,0,0,1,0,0,1,0,1,0,0,1,1,0,0,1,1,0,0,0.5]);
Group242.children[12] = OrientationInterpolator255;

OrientationInterpolator OrientationInterpolator256 = createNode("OrientationInterpolator");
OrientationInterpolator256.DEF = "r_subtalar_RotationInterpolator";
OrientationInterpolator256.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator256.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[13] = OrientationInterpolator256;

OrientationInterpolator OrientationInterpolator257 = createNode("OrientationInterpolator");
OrientationInterpolator257.DEF = "r_midtarsal_RotationInterpolator";
OrientationInterpolator257.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator257.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[14] = OrientationInterpolator257;

OrientationInterpolator OrientationInterpolator258 = createNode("OrientationInterpolator");
OrientationInterpolator258.DEF = "r_metatarsal_RotationInterpolator";
OrientationInterpolator258.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator258.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[15] = OrientationInterpolator258;

OrientationInterpolator OrientationInterpolator259 = createNode("OrientationInterpolator");
OrientationInterpolator259.DEF = "vl5_RotationInterpolator";
OrientationInterpolator259.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator259.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[16] = OrientationInterpolator259;

OrientationInterpolator OrientationInterpolator260 = createNode("OrientationInterpolator");
OrientationInterpolator260.DEF = "vl4_RotationInterpolator";
OrientationInterpolator260.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator260.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[17] = OrientationInterpolator260;

OrientationInterpolator OrientationInterpolator261 = createNode("OrientationInterpolator");
OrientationInterpolator261.DEF = "vl3_RotationInterpolator";
OrientationInterpolator261.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator261.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[18] = OrientationInterpolator261;

OrientationInterpolator OrientationInterpolator262 = createNode("OrientationInterpolator");
OrientationInterpolator262.DEF = "vl2_RotationInterpolator";
OrientationInterpolator262.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator262.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[19] = OrientationInterpolator262;

OrientationInterpolator OrientationInterpolator263 = createNode("OrientationInterpolator");
OrientationInterpolator263.DEF = "vl1_RotationInterpolator";
OrientationInterpolator263.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator263.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[20] = OrientationInterpolator263;

OrientationInterpolator OrientationInterpolator264 = createNode("OrientationInterpolator");
OrientationInterpolator264.DEF = "vt12_RotationInterpolator";
OrientationInterpolator264.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator264.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[21] = OrientationInterpolator264;

OrientationInterpolator OrientationInterpolator265 = createNode("OrientationInterpolator");
OrientationInterpolator265.DEF = "vt11_RotationInterpolator";
OrientationInterpolator265.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator265.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[22] = OrientationInterpolator265;

OrientationInterpolator OrientationInterpolator266 = createNode("OrientationInterpolator");
OrientationInterpolator266.DEF = "vt10_RotationInterpolator";
OrientationInterpolator266.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator266.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[23] = OrientationInterpolator266;

OrientationInterpolator OrientationInterpolator267 = createNode("OrientationInterpolator");
OrientationInterpolator267.DEF = "vt9_RotationInterpolator";
OrientationInterpolator267.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator267.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[24] = OrientationInterpolator267;

OrientationInterpolator OrientationInterpolator268 = createNode("OrientationInterpolator");
OrientationInterpolator268.DEF = "vt8_RotationInterpolator";
OrientationInterpolator268.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator268.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[25] = OrientationInterpolator268;

OrientationInterpolator OrientationInterpolator269 = createNode("OrientationInterpolator");
OrientationInterpolator269.DEF = "vt7_RotationInterpolator";
OrientationInterpolator269.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator269.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[26] = OrientationInterpolator269;

OrientationInterpolator OrientationInterpolator270 = createNode("OrientationInterpolator");
OrientationInterpolator270.DEF = "vt6_RotationInterpolator";
OrientationInterpolator270.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator270.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[27] = OrientationInterpolator270;

OrientationInterpolator OrientationInterpolator271 = createNode("OrientationInterpolator");
OrientationInterpolator271.DEF = "vt5_RotationInterpolator";
OrientationInterpolator271.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator271.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[28] = OrientationInterpolator271;

OrientationInterpolator OrientationInterpolator272 = createNode("OrientationInterpolator");
OrientationInterpolator272.DEF = "vt4_RotationInterpolator";
OrientationInterpolator272.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator272.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[29] = OrientationInterpolator272;

OrientationInterpolator OrientationInterpolator273 = createNode("OrientationInterpolator");
OrientationInterpolator273.DEF = "vt3_RotationInterpolator";
OrientationInterpolator273.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator273.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[30] = OrientationInterpolator273;

OrientationInterpolator OrientationInterpolator274 = createNode("OrientationInterpolator");
OrientationInterpolator274.DEF = "vt2_RotationInterpolator";
OrientationInterpolator274.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator274.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[31] = OrientationInterpolator274;

OrientationInterpolator OrientationInterpolator275 = createNode("OrientationInterpolator");
OrientationInterpolator275.DEF = "vt1_RotationInterpolator";
OrientationInterpolator275.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator275.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[32] = OrientationInterpolator275;

OrientationInterpolator OrientationInterpolator276 = createNode("OrientationInterpolator");
OrientationInterpolator276.DEF = "vc7_RotationInterpolator";
OrientationInterpolator276.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator276.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[33] = OrientationInterpolator276;

OrientationInterpolator OrientationInterpolator277 = createNode("OrientationInterpolator");
OrientationInterpolator277.DEF = "vc6_RotationInterpolator";
OrientationInterpolator277.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator277.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[34] = OrientationInterpolator277;

OrientationInterpolator OrientationInterpolator278 = createNode("OrientationInterpolator");
OrientationInterpolator278.DEF = "vc5_RotationInterpolator";
OrientationInterpolator278.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator278.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[35] = OrientationInterpolator278;

OrientationInterpolator OrientationInterpolator279 = createNode("OrientationInterpolator");
OrientationInterpolator279.DEF = "vc4_RotationInterpolator";
OrientationInterpolator279.key = new MFFloat(new float[0,0.3,0.4,1]);
OrientationInterpolator279.keyValue = new MFRotation(new float[1,0,1,0.25,-1,0,-1,0.35,1,0,0,0.75,1,0,1,0.5]);
Group242.children[36] = OrientationInterpolator279;

OrientationInterpolator OrientationInterpolator280 = createNode("OrientationInterpolator");
OrientationInterpolator280.DEF = "vc3_RotationInterpolator";
OrientationInterpolator280.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator280.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[37] = OrientationInterpolator280;

OrientationInterpolator OrientationInterpolator281 = createNode("OrientationInterpolator");
OrientationInterpolator281.DEF = "vc2_RotationInterpolator";
OrientationInterpolator281.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator281.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[38] = OrientationInterpolator281;

OrientationInterpolator OrientationInterpolator282 = createNode("OrientationInterpolator");
OrientationInterpolator282.DEF = "vc1_RotationInterpolator";
OrientationInterpolator282.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator282.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[39] = OrientationInterpolator282;

OrientationInterpolator OrientationInterpolator283 = createNode("OrientationInterpolator");
OrientationInterpolator283.DEF = "skullbase_RotationInterpolator";
OrientationInterpolator283.key = new MFFloat(new float[0,0.2,0.75,1]);
OrientationInterpolator283.keyValue = new MFRotation(new float[0,-1,0,0.5,0,0,1,0,0,0,1,0,0,1,0,0.35]);
Group242.children[40] = OrientationInterpolator283;

OrientationInterpolator OrientationInterpolator284 = createNode("OrientationInterpolator");
OrientationInterpolator284.DEF = "l_eyelid_joint_RotationInterpolator";
OrientationInterpolator284.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator284.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[41] = OrientationInterpolator284;

OrientationInterpolator OrientationInterpolator285 = createNode("OrientationInterpolator");
OrientationInterpolator285.DEF = "l_eyeball_joint_RotationInterpolator";
OrientationInterpolator285.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator285.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[42] = OrientationInterpolator285;

OrientationInterpolator OrientationInterpolator286 = createNode("OrientationInterpolator");
OrientationInterpolator286.DEF = "l_eyebrow_joint_RotationInterpolator";
OrientationInterpolator286.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator286.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[43] = OrientationInterpolator286;

OrientationInterpolator OrientationInterpolator287 = createNode("OrientationInterpolator");
OrientationInterpolator287.DEF = "r_eyelid_joint_RotationInterpolator";
OrientationInterpolator287.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator287.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[44] = OrientationInterpolator287;

OrientationInterpolator OrientationInterpolator288 = createNode("OrientationInterpolator");
OrientationInterpolator288.DEF = "r_eyeball_joint_RotationInterpolator";
OrientationInterpolator288.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator288.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[45] = OrientationInterpolator288;

OrientationInterpolator OrientationInterpolator289 = createNode("OrientationInterpolator");
OrientationInterpolator289.DEF = "r_eyebrow_joint_RotationInterpolator";
OrientationInterpolator289.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator289.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[46] = OrientationInterpolator289;

OrientationInterpolator OrientationInterpolator290 = createNode("OrientationInterpolator");
OrientationInterpolator290.DEF = "temporomandibular_RotationInterpolator";
OrientationInterpolator290.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator290.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[47] = OrientationInterpolator290;

OrientationInterpolator OrientationInterpolator291 = createNode("OrientationInterpolator");
OrientationInterpolator291.DEF = "l_sternoclavicular_RotationInterpolator";
OrientationInterpolator291.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator291.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[48] = OrientationInterpolator291;

OrientationInterpolator OrientationInterpolator292 = createNode("OrientationInterpolator");
OrientationInterpolator292.DEF = "l_acromioclavicular_RotationInterpolator";
OrientationInterpolator292.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator292.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[49] = OrientationInterpolator292;

OrientationInterpolator OrientationInterpolator293 = createNode("OrientationInterpolator");
OrientationInterpolator293.DEF = "l_shoulder_RotationInterpolator";
OrientationInterpolator293.key = new MFFloat(new float[0,0.4,1]);
OrientationInterpolator293.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,-1,0,1,1.75]);
Group242.children[50] = OrientationInterpolator293;

OrientationInterpolator OrientationInterpolator294 = createNode("OrientationInterpolator");
OrientationInterpolator294.DEF = "l_elbow_RotationInterpolator";
OrientationInterpolator294.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator294.keyValue = new MFRotation(new float[-1,0,0,3,-1,0,0,0.75,-1,-1,0,0.5]);
Group242.children[51] = OrientationInterpolator294;

OrientationInterpolator OrientationInterpolator295 = createNode("OrientationInterpolator");
OrientationInterpolator295.DEF = "l_wrist_RotationInterpolator";
OrientationInterpolator295.key = new MFFloat(new float[0,0.4,0.8,1]);
OrientationInterpolator295.keyValue = new MFRotation(new float[0,0,1,0,0,1,0,1.3,0,-0.5,1,1.3,0,0,1,0]);
Group242.children[52] = OrientationInterpolator295;

OrientationInterpolator OrientationInterpolator296 = createNode("OrientationInterpolator");
OrientationInterpolator296.DEF = "l_thumb1_RotationInterpolator";
OrientationInterpolator296.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator296.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[53] = OrientationInterpolator296;

OrientationInterpolator OrientationInterpolator297 = createNode("OrientationInterpolator");
OrientationInterpolator297.DEF = "l_thumb2_RotationInterpolator";
OrientationInterpolator297.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator297.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[54] = OrientationInterpolator297;

OrientationInterpolator OrientationInterpolator298 = createNode("OrientationInterpolator");
OrientationInterpolator298.DEF = "l_thumb3_RotationInterpolator";
OrientationInterpolator298.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator298.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[55] = OrientationInterpolator298;

OrientationInterpolator OrientationInterpolator299 = createNode("OrientationInterpolator");
OrientationInterpolator299.DEF = "l_index0_RotationInterpolator";
OrientationInterpolator299.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator299.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[56] = OrientationInterpolator299;

OrientationInterpolator OrientationInterpolator300 = createNode("OrientationInterpolator");
OrientationInterpolator300.DEF = "l_index1_RotationInterpolator";
OrientationInterpolator300.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator300.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[57] = OrientationInterpolator300;

OrientationInterpolator OrientationInterpolator301 = createNode("OrientationInterpolator");
OrientationInterpolator301.DEF = "l_index2_RotationInterpolator";
OrientationInterpolator301.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator301.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[58] = OrientationInterpolator301;

OrientationInterpolator OrientationInterpolator302 = createNode("OrientationInterpolator");
OrientationInterpolator302.DEF = "l_index3_RotationInterpolator";
OrientationInterpolator302.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator302.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[59] = OrientationInterpolator302;

OrientationInterpolator OrientationInterpolator303 = createNode("OrientationInterpolator");
OrientationInterpolator303.DEF = "l_middle0_RotationInterpolator";
OrientationInterpolator303.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator303.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[60] = OrientationInterpolator303;

OrientationInterpolator OrientationInterpolator304 = createNode("OrientationInterpolator");
OrientationInterpolator304.DEF = "l_middle1_RotationInterpolator";
OrientationInterpolator304.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator304.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[61] = OrientationInterpolator304;

OrientationInterpolator OrientationInterpolator305 = createNode("OrientationInterpolator");
OrientationInterpolator305.DEF = "l_middle2_RotationInterpolator";
OrientationInterpolator305.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator305.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[62] = OrientationInterpolator305;

OrientationInterpolator OrientationInterpolator306 = createNode("OrientationInterpolator");
OrientationInterpolator306.DEF = "l_middle3_RotationInterpolator";
OrientationInterpolator306.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator306.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[63] = OrientationInterpolator306;

OrientationInterpolator OrientationInterpolator307 = createNode("OrientationInterpolator");
OrientationInterpolator307.DEF = "l_ring0_RotationInterpolator";
OrientationInterpolator307.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator307.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[64] = OrientationInterpolator307;

OrientationInterpolator OrientationInterpolator308 = createNode("OrientationInterpolator");
OrientationInterpolator308.DEF = "l_ring1_RotationInterpolator";
OrientationInterpolator308.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator308.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[65] = OrientationInterpolator308;

OrientationInterpolator OrientationInterpolator309 = createNode("OrientationInterpolator");
OrientationInterpolator309.DEF = "l_ring2_RotationInterpolator";
OrientationInterpolator309.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator309.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[66] = OrientationInterpolator309;

OrientationInterpolator OrientationInterpolator310 = createNode("OrientationInterpolator");
OrientationInterpolator310.DEF = "l_ring3_RotationInterpolator";
OrientationInterpolator310.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator310.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[67] = OrientationInterpolator310;

OrientationInterpolator OrientationInterpolator311 = createNode("OrientationInterpolator");
OrientationInterpolator311.DEF = "l_pinky0_RotationInterpolator";
OrientationInterpolator311.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator311.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[68] = OrientationInterpolator311;

OrientationInterpolator OrientationInterpolator312 = createNode("OrientationInterpolator");
OrientationInterpolator312.DEF = "l_pinky1_RotationInterpolator";
OrientationInterpolator312.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator312.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[69] = OrientationInterpolator312;

OrientationInterpolator OrientationInterpolator313 = createNode("OrientationInterpolator");
OrientationInterpolator313.DEF = "l_pinky2_RotationInterpolator";
OrientationInterpolator313.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator313.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[70] = OrientationInterpolator313;

OrientationInterpolator OrientationInterpolator314 = createNode("OrientationInterpolator");
OrientationInterpolator314.DEF = "l_pinky3_RotationInterpolator";
OrientationInterpolator314.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator314.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[71] = OrientationInterpolator314;

OrientationInterpolator OrientationInterpolator315 = createNode("OrientationInterpolator");
OrientationInterpolator315.DEF = "r_sternoclavicular_RotationInterpolator";
OrientationInterpolator315.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator315.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[72] = OrientationInterpolator315;

OrientationInterpolator OrientationInterpolator316 = createNode("OrientationInterpolator");
OrientationInterpolator316.DEF = "r_acromioclavicular_RotationInterpolator";
OrientationInterpolator316.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator316.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[73] = OrientationInterpolator316;

OrientationInterpolator OrientationInterpolator317 = createNode("OrientationInterpolator");
OrientationInterpolator317.DEF = "r_shoulder_RotationInterpolator";
OrientationInterpolator317.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator317.keyValue = new MFRotation(new float[0,0,-1,2.5,0,0,-1,1.5,0,0,-1,1.75]);
Group242.children[74] = OrientationInterpolator317;

OrientationInterpolator OrientationInterpolator318 = createNode("OrientationInterpolator");
OrientationInterpolator318.DEF = "r_elbow_RotationInterpolator";
OrientationInterpolator318.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator318.keyValue = new MFRotation(new float[-1,0,0,3,-1,0,0,0.75,-1,-1,0,0.5]);
Group242.children[75] = OrientationInterpolator318;

OrientationInterpolator OrientationInterpolator319 = createNode("OrientationInterpolator");
OrientationInterpolator319.DEF = "r_wrist_RotationInterpolator";
OrientationInterpolator319.key = new MFFloat(new float[0,0.5,0.7,1]);
OrientationInterpolator319.keyValue = new MFRotation(new float[0,1,0,0.3,0,0,1,0,0,0,-1,1,0,-1,0,0.3]);
Group242.children[76] = OrientationInterpolator319;

OrientationInterpolator OrientationInterpolator320 = createNode("OrientationInterpolator");
OrientationInterpolator320.DEF = "r_thumb1_RotationInterpolator";
OrientationInterpolator320.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator320.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[77] = OrientationInterpolator320;

OrientationInterpolator OrientationInterpolator321 = createNode("OrientationInterpolator");
OrientationInterpolator321.DEF = "r_thumb2_RotationInterpolator";
OrientationInterpolator321.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator321.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[78] = OrientationInterpolator321;

OrientationInterpolator OrientationInterpolator322 = createNode("OrientationInterpolator");
OrientationInterpolator322.DEF = "r_thumb3_RotationInterpolator";
OrientationInterpolator322.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator322.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group242.children[79] = OrientationInterpolator322;

OrientationInterpolator OrientationInterpolator323 = createNode("OrientationInterpolator");
OrientationInterpolator323.DEF = "r_index0_RotationInterpolator";
OrientationInterpolator323.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator323.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0]);
Group242.children[80] = OrientationInterpolator323;

OrientationInterpolator OrientationInterpolator324 = createNode("OrientationInterpolator");
OrientationInterpolator324.DEF = "r_index1_RotationInterpolator";
OrientationInterpolator324.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator324.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group242.children[81] = OrientationInterpolator324;

OrientationInterpolator OrientationInterpolator325 = createNode("OrientationInterpolator");
OrientationInterpolator325.DEF = "r_index2_RotationInterpolator";
OrientationInterpolator325.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator325.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group242.children[82] = OrientationInterpolator325;

OrientationInterpolator OrientationInterpolator326 = createNode("OrientationInterpolator");
OrientationInterpolator326.DEF = "r_index3_RotationInterpolator";
OrientationInterpolator326.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator326.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group242.children[83] = OrientationInterpolator326;

OrientationInterpolator OrientationInterpolator327 = createNode("OrientationInterpolator");
OrientationInterpolator327.DEF = "r_middle0_RotationInterpolator";
OrientationInterpolator327.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator327.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0]);
Group242.children[84] = OrientationInterpolator327;

OrientationInterpolator OrientationInterpolator328 = createNode("OrientationInterpolator");
OrientationInterpolator328.DEF = "r_middle1_RotationInterpolator";
OrientationInterpolator328.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator328.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group242.children[85] = OrientationInterpolator328;

OrientationInterpolator OrientationInterpolator329 = createNode("OrientationInterpolator");
OrientationInterpolator329.DEF = "r_middle2_RotationInterpolator";
OrientationInterpolator329.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator329.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group242.children[86] = OrientationInterpolator329;

OrientationInterpolator OrientationInterpolator330 = createNode("OrientationInterpolator");
OrientationInterpolator330.DEF = "r_middle3_RotationInterpolator";
OrientationInterpolator330.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator330.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group242.children[87] = OrientationInterpolator330;

OrientationInterpolator OrientationInterpolator331 = createNode("OrientationInterpolator");
OrientationInterpolator331.DEF = "r_ring0_RotationInterpolator";
OrientationInterpolator331.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator331.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0]);
Group242.children[88] = OrientationInterpolator331;

OrientationInterpolator OrientationInterpolator332 = createNode("OrientationInterpolator");
OrientationInterpolator332.DEF = "r_ring1_RotationInterpolator";
OrientationInterpolator332.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator332.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group242.children[89] = OrientationInterpolator332;

OrientationInterpolator OrientationInterpolator333 = createNode("OrientationInterpolator");
OrientationInterpolator333.DEF = "r_ring2_RotationInterpolator";
OrientationInterpolator333.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator333.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group242.children[90] = OrientationInterpolator333;

OrientationInterpolator OrientationInterpolator334 = createNode("OrientationInterpolator");
OrientationInterpolator334.DEF = "r_ring3_RotationInterpolator";
OrientationInterpolator334.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator334.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group242.children[91] = OrientationInterpolator334;

OrientationInterpolator OrientationInterpolator335 = createNode("OrientationInterpolator");
OrientationInterpolator335.DEF = "r_pinky0_RotationInterpolator";
OrientationInterpolator335.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator335.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0]);
Group242.children[92] = OrientationInterpolator335;

OrientationInterpolator OrientationInterpolator336 = createNode("OrientationInterpolator");
OrientationInterpolator336.DEF = "r_pinky1_RotationInterpolator";
OrientationInterpolator336.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator336.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group242.children[93] = OrientationInterpolator336;

OrientationInterpolator OrientationInterpolator337 = createNode("OrientationInterpolator");
OrientationInterpolator337.DEF = "r_pinky2_RotationInterpolator";
OrientationInterpolator337.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator337.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group242.children[94] = OrientationInterpolator337;

OrientationInterpolator OrientationInterpolator338 = createNode("OrientationInterpolator");
OrientationInterpolator338.DEF = "r_pinky3_RotationInterpolator";
OrientationInterpolator338.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator338.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group242.children[95] = OrientationInterpolator338;

children[11] = Group242;

//TimeSensor to Interpolators
ROUTE ROUTE339 = createNode("ROUTE");
ROUTE339.fromField = "fraction_changed";
ROUTE339.fromNode = "KickTimer";
ROUTE339.toField = "set_fraction";
ROUTE339.toNode = "HumanoidRoot_RotationInterpolator";
children[12] = ROUTE339;

ROUTE ROUTE340 = createNode("ROUTE");
ROUTE340.fromField = "fraction_changed";
ROUTE340.fromNode = "KickTimer";
ROUTE340.toField = "set_fraction";
ROUTE340.toNode = "HumanoidRoot_TranslationInterpolator";
children[13] = ROUTE340;

ROUTE ROUTE341 = createNode("ROUTE");
ROUTE341.fromField = "fraction_changed";
ROUTE341.fromNode = "KickTimer";
ROUTE341.toField = "set_fraction";
ROUTE341.toNode = "sacroiliac_RotationInterpolator";
children[14] = ROUTE341;

ROUTE ROUTE342 = createNode("ROUTE");
ROUTE342.fromField = "fraction_changed";
ROUTE342.fromNode = "KickTimer";
ROUTE342.toField = "set_fraction";
ROUTE342.toNode = "l_hip_RotationInterpolator";
children[15] = ROUTE342;

ROUTE ROUTE343 = createNode("ROUTE");
ROUTE343.fromField = "fraction_changed";
ROUTE343.fromNode = "KickTimer";
ROUTE343.toField = "set_fraction";
ROUTE343.toNode = "l_knee_RotationInterpolator";
children[16] = ROUTE343;

ROUTE ROUTE344 = createNode("ROUTE");
ROUTE344.fromField = "fraction_changed";
ROUTE344.fromNode = "KickTimer";
ROUTE344.toField = "set_fraction";
ROUTE344.toNode = "l_ankle_RotationInterpolator";
children[17] = ROUTE344;

ROUTE ROUTE345 = createNode("ROUTE");
ROUTE345.fromField = "fraction_changed";
ROUTE345.fromNode = "KickTimer";
ROUTE345.toField = "set_fraction";
ROUTE345.toNode = "l_subtalar_RotationInterpolator";
children[18] = ROUTE345;

ROUTE ROUTE346 = createNode("ROUTE");
ROUTE346.fromField = "fraction_changed";
ROUTE346.fromNode = "KickTimer";
ROUTE346.toField = "set_fraction";
ROUTE346.toNode = "l_midtarsal_RotationInterpolator";
children[19] = ROUTE346;

ROUTE ROUTE347 = createNode("ROUTE");
ROUTE347.fromField = "fraction_changed";
ROUTE347.fromNode = "KickTimer";
ROUTE347.toField = "set_fraction";
ROUTE347.toNode = "l_metatarsal_RotationInterpolator";
children[20] = ROUTE347;

ROUTE ROUTE348 = createNode("ROUTE");
ROUTE348.fromField = "fraction_changed";
ROUTE348.fromNode = "KickTimer";
ROUTE348.toField = "set_fraction";
ROUTE348.toNode = "r_hip_RotationInterpolator";
children[21] = ROUTE348;

ROUTE ROUTE349 = createNode("ROUTE");
ROUTE349.fromField = "fraction_changed";
ROUTE349.fromNode = "KickTimer";
ROUTE349.toField = "set_fraction";
ROUTE349.toNode = "r_knee_RotationInterpolator";
children[22] = ROUTE349;

ROUTE ROUTE350 = createNode("ROUTE");
ROUTE350.fromField = "fraction_changed";
ROUTE350.fromNode = "KickTimer";
ROUTE350.toField = "set_fraction";
ROUTE350.toNode = "r_ankle_RotationInterpolator";
children[23] = ROUTE350;

ROUTE ROUTE351 = createNode("ROUTE");
ROUTE351.fromField = "fraction_changed";
ROUTE351.fromNode = "KickTimer";
ROUTE351.toField = "set_fraction";
ROUTE351.toNode = "r_subtalar_RotationInterpolator";
children[24] = ROUTE351;

ROUTE ROUTE352 = createNode("ROUTE");
ROUTE352.fromField = "fraction_changed";
ROUTE352.fromNode = "KickTimer";
ROUTE352.toField = "set_fraction";
ROUTE352.toNode = "r_midtarsal_RotationInterpolator";
children[25] = ROUTE352;

ROUTE ROUTE353 = createNode("ROUTE");
ROUTE353.fromField = "fraction_changed";
ROUTE353.fromNode = "KickTimer";
ROUTE353.toField = "set_fraction";
ROUTE353.toNode = "r_metatarsal_RotationInterpolator";
children[26] = ROUTE353;

ROUTE ROUTE354 = createNode("ROUTE");
ROUTE354.fromField = "fraction_changed";
ROUTE354.fromNode = "KickTimer";
ROUTE354.toField = "set_fraction";
ROUTE354.toNode = "vl5_RotationInterpolator";
children[27] = ROUTE354;

ROUTE ROUTE355 = createNode("ROUTE");
ROUTE355.fromField = "fraction_changed";
ROUTE355.fromNode = "KickTimer";
ROUTE355.toField = "set_fraction";
ROUTE355.toNode = "vl4_RotationInterpolator";
children[28] = ROUTE355;

ROUTE ROUTE356 = createNode("ROUTE");
ROUTE356.fromField = "fraction_changed";
ROUTE356.fromNode = "KickTimer";
ROUTE356.toField = "set_fraction";
ROUTE356.toNode = "vl3_RotationInterpolator";
children[29] = ROUTE356;

ROUTE ROUTE357 = createNode("ROUTE");
ROUTE357.fromField = "fraction_changed";
ROUTE357.fromNode = "KickTimer";
ROUTE357.toField = "set_fraction";
ROUTE357.toNode = "vl2_RotationInterpolator";
children[30] = ROUTE357;

ROUTE ROUTE358 = createNode("ROUTE");
ROUTE358.fromField = "fraction_changed";
ROUTE358.fromNode = "KickTimer";
ROUTE358.toField = "set_fraction";
ROUTE358.toNode = "vl1_RotationInterpolator";
children[31] = ROUTE358;

ROUTE ROUTE359 = createNode("ROUTE");
ROUTE359.fromField = "fraction_changed";
ROUTE359.fromNode = "KickTimer";
ROUTE359.toField = "set_fraction";
ROUTE359.toNode = "vt12_RotationInterpolator";
children[32] = ROUTE359;

ROUTE ROUTE360 = createNode("ROUTE");
ROUTE360.fromField = "fraction_changed";
ROUTE360.fromNode = "KickTimer";
ROUTE360.toField = "set_fraction";
ROUTE360.toNode = "vt11_RotationInterpolator";
children[33] = ROUTE360;

ROUTE ROUTE361 = createNode("ROUTE");
ROUTE361.fromField = "fraction_changed";
ROUTE361.fromNode = "KickTimer";
ROUTE361.toField = "set_fraction";
ROUTE361.toNode = "vt10_RotationInterpolator";
children[34] = ROUTE361;

ROUTE ROUTE362 = createNode("ROUTE");
ROUTE362.fromField = "fraction_changed";
ROUTE362.fromNode = "KickTimer";
ROUTE362.toField = "set_fraction";
ROUTE362.toNode = "vt9_RotationInterpolator";
children[35] = ROUTE362;

ROUTE ROUTE363 = createNode("ROUTE");
ROUTE363.fromField = "fraction_changed";
ROUTE363.fromNode = "KickTimer";
ROUTE363.toField = "set_fraction";
ROUTE363.toNode = "vt8_RotationInterpolator";
children[36] = ROUTE363;

ROUTE ROUTE364 = createNode("ROUTE");
ROUTE364.fromField = "fraction_changed";
ROUTE364.fromNode = "KickTimer";
ROUTE364.toField = "set_fraction";
ROUTE364.toNode = "vt7_RotationInterpolator";
children[37] = ROUTE364;

ROUTE ROUTE365 = createNode("ROUTE");
ROUTE365.fromField = "fraction_changed";
ROUTE365.fromNode = "KickTimer";
ROUTE365.toField = "set_fraction";
ROUTE365.toNode = "vt6_RotationInterpolator";
children[38] = ROUTE365;

ROUTE ROUTE366 = createNode("ROUTE");
ROUTE366.fromField = "fraction_changed";
ROUTE366.fromNode = "KickTimer";
ROUTE366.toField = "set_fraction";
ROUTE366.toNode = "vt5_RotationInterpolator";
children[39] = ROUTE366;

ROUTE ROUTE367 = createNode("ROUTE");
ROUTE367.fromField = "fraction_changed";
ROUTE367.fromNode = "KickTimer";
ROUTE367.toField = "set_fraction";
ROUTE367.toNode = "vt4_RotationInterpolator";
children[40] = ROUTE367;

ROUTE ROUTE368 = createNode("ROUTE");
ROUTE368.fromField = "fraction_changed";
ROUTE368.fromNode = "KickTimer";
ROUTE368.toField = "set_fraction";
ROUTE368.toNode = "vt3_RotationInterpolator";
children[41] = ROUTE368;

ROUTE ROUTE369 = createNode("ROUTE");
ROUTE369.fromField = "fraction_changed";
ROUTE369.fromNode = "KickTimer";
ROUTE369.toField = "set_fraction";
ROUTE369.toNode = "vt2_RotationInterpolator";
children[42] = ROUTE369;

ROUTE ROUTE370 = createNode("ROUTE");
ROUTE370.fromField = "fraction_changed";
ROUTE370.fromNode = "KickTimer";
ROUTE370.toField = "set_fraction";
ROUTE370.toNode = "vt1_RotationInterpolator";
children[43] = ROUTE370;

ROUTE ROUTE371 = createNode("ROUTE");
ROUTE371.fromField = "fraction_changed";
ROUTE371.fromNode = "KickTimer";
ROUTE371.toField = "set_fraction";
ROUTE371.toNode = "vc7_RotationInterpolator";
children[44] = ROUTE371;

ROUTE ROUTE372 = createNode("ROUTE");
ROUTE372.fromField = "fraction_changed";
ROUTE372.fromNode = "KickTimer";
ROUTE372.toField = "set_fraction";
ROUTE372.toNode = "vc6_RotationInterpolator";
children[45] = ROUTE372;

ROUTE ROUTE373 = createNode("ROUTE");
ROUTE373.fromField = "fraction_changed";
ROUTE373.fromNode = "KickTimer";
ROUTE373.toField = "set_fraction";
ROUTE373.toNode = "vc5_RotationInterpolator";
children[46] = ROUTE373;

ROUTE ROUTE374 = createNode("ROUTE");
ROUTE374.fromField = "fraction_changed";
ROUTE374.fromNode = "KickTimer";
ROUTE374.toField = "set_fraction";
ROUTE374.toNode = "vc4_RotationInterpolator";
children[47] = ROUTE374;

ROUTE ROUTE375 = createNode("ROUTE");
ROUTE375.fromField = "fraction_changed";
ROUTE375.fromNode = "KickTimer";
ROUTE375.toField = "set_fraction";
ROUTE375.toNode = "vc3_RotationInterpolator";
children[48] = ROUTE375;

ROUTE ROUTE376 = createNode("ROUTE");
ROUTE376.fromField = "fraction_changed";
ROUTE376.fromNode = "KickTimer";
ROUTE376.toField = "set_fraction";
ROUTE376.toNode = "vc2_RotationInterpolator";
children[49] = ROUTE376;

ROUTE ROUTE377 = createNode("ROUTE");
ROUTE377.fromField = "fraction_changed";
ROUTE377.fromNode = "KickTimer";
ROUTE377.toField = "set_fraction";
ROUTE377.toNode = "vc1_RotationInterpolator";
children[50] = ROUTE377;

ROUTE ROUTE378 = createNode("ROUTE");
ROUTE378.fromField = "fraction_changed";
ROUTE378.fromNode = "KickTimer";
ROUTE378.toField = "set_fraction";
ROUTE378.toNode = "skullbase_RotationInterpolator";
children[51] = ROUTE378;

ROUTE ROUTE379 = createNode("ROUTE");
ROUTE379.fromField = "fraction_changed";
ROUTE379.fromNode = "KickTimer";
ROUTE379.toField = "set_fraction";
ROUTE379.toNode = "l_eyelid_joint_RotationInterpolator";
children[52] = ROUTE379;

ROUTE ROUTE380 = createNode("ROUTE");
ROUTE380.fromField = "fraction_changed";
ROUTE380.fromNode = "KickTimer";
ROUTE380.toField = "set_fraction";
ROUTE380.toNode = "l_eyeball_joint_RotationInterpolator";
children[53] = ROUTE380;

ROUTE ROUTE381 = createNode("ROUTE");
ROUTE381.fromField = "fraction_changed";
ROUTE381.fromNode = "KickTimer";
ROUTE381.toField = "set_fraction";
ROUTE381.toNode = "l_eyebrow_joint_RotationInterpolator";
children[54] = ROUTE381;

ROUTE ROUTE382 = createNode("ROUTE");
ROUTE382.fromField = "fraction_changed";
ROUTE382.fromNode = "KickTimer";
ROUTE382.toField = "set_fraction";
ROUTE382.toNode = "r_eyelid_joint_RotationInterpolator";
children[55] = ROUTE382;

ROUTE ROUTE383 = createNode("ROUTE");
ROUTE383.fromField = "fraction_changed";
ROUTE383.fromNode = "KickTimer";
ROUTE383.toField = "set_fraction";
ROUTE383.toNode = "r_eyeball_joint_RotationInterpolator";
children[56] = ROUTE383;

ROUTE ROUTE384 = createNode("ROUTE");
ROUTE384.fromField = "fraction_changed";
ROUTE384.fromNode = "KickTimer";
ROUTE384.toField = "set_fraction";
ROUTE384.toNode = "r_eyebrow_joint_RotationInterpolator";
children[57] = ROUTE384;

ROUTE ROUTE385 = createNode("ROUTE");
ROUTE385.fromField = "fraction_changed";
ROUTE385.fromNode = "KickTimer";
ROUTE385.toField = "set_fraction";
ROUTE385.toNode = "temporomandibular_RotationInterpolator";
children[58] = ROUTE385;

ROUTE ROUTE386 = createNode("ROUTE");
ROUTE386.fromField = "fraction_changed";
ROUTE386.fromNode = "KickTimer";
ROUTE386.toField = "set_fraction";
ROUTE386.toNode = "l_sternoclavicular_RotationInterpolator";
children[59] = ROUTE386;

ROUTE ROUTE387 = createNode("ROUTE");
ROUTE387.fromField = "fraction_changed";
ROUTE387.fromNode = "KickTimer";
ROUTE387.toField = "set_fraction";
ROUTE387.toNode = "l_acromioclavicular_RotationInterpolator";
children[60] = ROUTE387;

ROUTE ROUTE388 = createNode("ROUTE");
ROUTE388.fromField = "fraction_changed";
ROUTE388.fromNode = "KickTimer";
ROUTE388.toField = "set_fraction";
ROUTE388.toNode = "l_shoulder_RotationInterpolator";
children[61] = ROUTE388;

ROUTE ROUTE389 = createNode("ROUTE");
ROUTE389.fromField = "fraction_changed";
ROUTE389.fromNode = "KickTimer";
ROUTE389.toField = "set_fraction";
ROUTE389.toNode = "l_elbow_RotationInterpolator";
children[62] = ROUTE389;

ROUTE ROUTE390 = createNode("ROUTE");
ROUTE390.fromField = "fraction_changed";
ROUTE390.fromNode = "KickTimer";
ROUTE390.toField = "set_fraction";
ROUTE390.toNode = "l_wrist_RotationInterpolator";
children[63] = ROUTE390;

ROUTE ROUTE391 = createNode("ROUTE");
ROUTE391.fromField = "fraction_changed";
ROUTE391.fromNode = "KickTimer";
ROUTE391.toField = "set_fraction";
ROUTE391.toNode = "l_thumb1_RotationInterpolator";
children[64] = ROUTE391;

ROUTE ROUTE392 = createNode("ROUTE");
ROUTE392.fromField = "fraction_changed";
ROUTE392.fromNode = "KickTimer";
ROUTE392.toField = "set_fraction";
ROUTE392.toNode = "l_thumb2_RotationInterpolator";
children[65] = ROUTE392;

ROUTE ROUTE393 = createNode("ROUTE");
ROUTE393.fromField = "fraction_changed";
ROUTE393.fromNode = "KickTimer";
ROUTE393.toField = "set_fraction";
ROUTE393.toNode = "l_thumb3_RotationInterpolator";
children[66] = ROUTE393;

ROUTE ROUTE394 = createNode("ROUTE");
ROUTE394.fromField = "fraction_changed";
ROUTE394.fromNode = "KickTimer";
ROUTE394.toField = "set_fraction";
ROUTE394.toNode = "l_index0_RotationInterpolator";
children[67] = ROUTE394;

ROUTE ROUTE395 = createNode("ROUTE");
ROUTE395.fromField = "fraction_changed";
ROUTE395.fromNode = "KickTimer";
ROUTE395.toField = "set_fraction";
ROUTE395.toNode = "l_index1_RotationInterpolator";
children[68] = ROUTE395;

ROUTE ROUTE396 = createNode("ROUTE");
ROUTE396.fromField = "fraction_changed";
ROUTE396.fromNode = "KickTimer";
ROUTE396.toField = "set_fraction";
ROUTE396.toNode = "l_index2_RotationInterpolator";
children[69] = ROUTE396;

ROUTE ROUTE397 = createNode("ROUTE");
ROUTE397.fromField = "fraction_changed";
ROUTE397.fromNode = "KickTimer";
ROUTE397.toField = "set_fraction";
ROUTE397.toNode = "l_index3_RotationInterpolator";
children[70] = ROUTE397;

ROUTE ROUTE398 = createNode("ROUTE");
ROUTE398.fromField = "fraction_changed";
ROUTE398.fromNode = "KickTimer";
ROUTE398.toField = "set_fraction";
ROUTE398.toNode = "l_middle0_RotationInterpolator";
children[71] = ROUTE398;

ROUTE ROUTE399 = createNode("ROUTE");
ROUTE399.fromField = "fraction_changed";
ROUTE399.fromNode = "KickTimer";
ROUTE399.toField = "set_fraction";
ROUTE399.toNode = "l_middle1_RotationInterpolator";
children[72] = ROUTE399;

ROUTE ROUTE400 = createNode("ROUTE");
ROUTE400.fromField = "fraction_changed";
ROUTE400.fromNode = "KickTimer";
ROUTE400.toField = "set_fraction";
ROUTE400.toNode = "l_middle2_RotationInterpolator";
children[73] = ROUTE400;

ROUTE ROUTE401 = createNode("ROUTE");
ROUTE401.fromField = "fraction_changed";
ROUTE401.fromNode = "KickTimer";
ROUTE401.toField = "set_fraction";
ROUTE401.toNode = "l_middle3_RotationInterpolator";
children[74] = ROUTE401;

ROUTE ROUTE402 = createNode("ROUTE");
ROUTE402.fromField = "fraction_changed";
ROUTE402.fromNode = "KickTimer";
ROUTE402.toField = "set_fraction";
ROUTE402.toNode = "l_ring0_RotationInterpolator";
children[75] = ROUTE402;

ROUTE ROUTE403 = createNode("ROUTE");
ROUTE403.fromField = "fraction_changed";
ROUTE403.fromNode = "KickTimer";
ROUTE403.toField = "set_fraction";
ROUTE403.toNode = "l_ring1_RotationInterpolator";
children[76] = ROUTE403;

ROUTE ROUTE404 = createNode("ROUTE");
ROUTE404.fromField = "fraction_changed";
ROUTE404.fromNode = "KickTimer";
ROUTE404.toField = "set_fraction";
ROUTE404.toNode = "l_ring2_RotationInterpolator";
children[77] = ROUTE404;

ROUTE ROUTE405 = createNode("ROUTE");
ROUTE405.fromField = "fraction_changed";
ROUTE405.fromNode = "KickTimer";
ROUTE405.toField = "set_fraction";
ROUTE405.toNode = "l_ring3_RotationInterpolator";
children[78] = ROUTE405;

ROUTE ROUTE406 = createNode("ROUTE");
ROUTE406.fromField = "fraction_changed";
ROUTE406.fromNode = "KickTimer";
ROUTE406.toField = "set_fraction";
ROUTE406.toNode = "l_pinky0_RotationInterpolator";
children[79] = ROUTE406;

ROUTE ROUTE407 = createNode("ROUTE");
ROUTE407.fromField = "fraction_changed";
ROUTE407.fromNode = "KickTimer";
ROUTE407.toField = "set_fraction";
ROUTE407.toNode = "l_pinky1_RotationInterpolator";
children[80] = ROUTE407;

ROUTE ROUTE408 = createNode("ROUTE");
ROUTE408.fromField = "fraction_changed";
ROUTE408.fromNode = "KickTimer";
ROUTE408.toField = "set_fraction";
ROUTE408.toNode = "l_pinky2_RotationInterpolator";
children[81] = ROUTE408;

ROUTE ROUTE409 = createNode("ROUTE");
ROUTE409.fromField = "fraction_changed";
ROUTE409.fromNode = "KickTimer";
ROUTE409.toField = "set_fraction";
ROUTE409.toNode = "l_pinky3_RotationInterpolator";
children[82] = ROUTE409;

ROUTE ROUTE410 = createNode("ROUTE");
ROUTE410.fromField = "fraction_changed";
ROUTE410.fromNode = "KickTimer";
ROUTE410.toField = "set_fraction";
ROUTE410.toNode = "r_sternoclavicular_RotationInterpolator";
children[83] = ROUTE410;

ROUTE ROUTE411 = createNode("ROUTE");
ROUTE411.fromField = "fraction_changed";
ROUTE411.fromNode = "KickTimer";
ROUTE411.toField = "set_fraction";
ROUTE411.toNode = "r_acromioclavicular_RotationInterpolator";
children[84] = ROUTE411;

ROUTE ROUTE412 = createNode("ROUTE");
ROUTE412.fromField = "fraction_changed";
ROUTE412.fromNode = "KickTimer";
ROUTE412.toField = "set_fraction";
ROUTE412.toNode = "r_shoulder_RotationInterpolator";
children[85] = ROUTE412;

ROUTE ROUTE413 = createNode("ROUTE");
ROUTE413.fromField = "fraction_changed";
ROUTE413.fromNode = "KickTimer";
ROUTE413.toField = "set_fraction";
ROUTE413.toNode = "r_elbow_RotationInterpolator";
children[86] = ROUTE413;

ROUTE ROUTE414 = createNode("ROUTE");
ROUTE414.fromField = "fraction_changed";
ROUTE414.fromNode = "KickTimer";
ROUTE414.toField = "set_fraction";
ROUTE414.toNode = "r_wrist_RotationInterpolator";
children[87] = ROUTE414;

ROUTE ROUTE415 = createNode("ROUTE");
ROUTE415.fromField = "fraction_changed";
ROUTE415.fromNode = "KickTimer";
ROUTE415.toField = "set_fraction";
ROUTE415.toNode = "r_thumb1_RotationInterpolator";
children[88] = ROUTE415;

ROUTE ROUTE416 = createNode("ROUTE");
ROUTE416.fromField = "fraction_changed";
ROUTE416.fromNode = "KickTimer";
ROUTE416.toField = "set_fraction";
ROUTE416.toNode = "r_thumb2_RotationInterpolator";
children[89] = ROUTE416;

ROUTE ROUTE417 = createNode("ROUTE");
ROUTE417.fromField = "fraction_changed";
ROUTE417.fromNode = "KickTimer";
ROUTE417.toField = "set_fraction";
ROUTE417.toNode = "r_thumb3_RotationInterpolator";
children[90] = ROUTE417;

ROUTE ROUTE418 = createNode("ROUTE");
ROUTE418.fromField = "fraction_changed";
ROUTE418.fromNode = "KickTimer";
ROUTE418.toField = "set_fraction";
ROUTE418.toNode = "r_index0_RotationInterpolator";
children[91] = ROUTE418;

ROUTE ROUTE419 = createNode("ROUTE");
ROUTE419.fromField = "fraction_changed";
ROUTE419.fromNode = "KickTimer";
ROUTE419.toField = "set_fraction";
ROUTE419.toNode = "r_index1_RotationInterpolator";
children[92] = ROUTE419;

ROUTE ROUTE420 = createNode("ROUTE");
ROUTE420.fromField = "fraction_changed";
ROUTE420.fromNode = "KickTimer";
ROUTE420.toField = "set_fraction";
ROUTE420.toNode = "r_index2_RotationInterpolator";
children[93] = ROUTE420;

ROUTE ROUTE421 = createNode("ROUTE");
ROUTE421.fromField = "fraction_changed";
ROUTE421.fromNode = "KickTimer";
ROUTE421.toField = "set_fraction";
ROUTE421.toNode = "r_index3_RotationInterpolator";
children[94] = ROUTE421;

ROUTE ROUTE422 = createNode("ROUTE");
ROUTE422.fromField = "fraction_changed";
ROUTE422.fromNode = "KickTimer";
ROUTE422.toField = "set_fraction";
ROUTE422.toNode = "r_middle0_RotationInterpolator";
children[95] = ROUTE422;

ROUTE ROUTE423 = createNode("ROUTE");
ROUTE423.fromField = "fraction_changed";
ROUTE423.fromNode = "KickTimer";
ROUTE423.toField = "set_fraction";
ROUTE423.toNode = "r_middle1_RotationInterpolator";
children[96] = ROUTE423;

ROUTE ROUTE424 = createNode("ROUTE");
ROUTE424.fromField = "fraction_changed";
ROUTE424.fromNode = "KickTimer";
ROUTE424.toField = "set_fraction";
ROUTE424.toNode = "r_middle2_RotationInterpolator";
children[97] = ROUTE424;

ROUTE ROUTE425 = createNode("ROUTE");
ROUTE425.fromField = "fraction_changed";
ROUTE425.fromNode = "KickTimer";
ROUTE425.toField = "set_fraction";
ROUTE425.toNode = "r_middle3_RotationInterpolator";
children[98] = ROUTE425;

ROUTE ROUTE426 = createNode("ROUTE");
ROUTE426.fromField = "fraction_changed";
ROUTE426.fromNode = "KickTimer";
ROUTE426.toField = "set_fraction";
ROUTE426.toNode = "r_ring0_RotationInterpolator";
children[99] = ROUTE426;

ROUTE ROUTE427 = createNode("ROUTE");
ROUTE427.fromField = "fraction_changed";
ROUTE427.fromNode = "KickTimer";
ROUTE427.toField = "set_fraction";
ROUTE427.toNode = "r_ring1_RotationInterpolator";
children[100] = ROUTE427;

ROUTE ROUTE428 = createNode("ROUTE");
ROUTE428.fromField = "fraction_changed";
ROUTE428.fromNode = "KickTimer";
ROUTE428.toField = "set_fraction";
ROUTE428.toNode = "r_ring2_RotationInterpolator";
children[101] = ROUTE428;

ROUTE ROUTE429 = createNode("ROUTE");
ROUTE429.fromField = "fraction_changed";
ROUTE429.fromNode = "KickTimer";
ROUTE429.toField = "set_fraction";
ROUTE429.toNode = "r_ring3_RotationInterpolator";
children[102] = ROUTE429;

ROUTE ROUTE430 = createNode("ROUTE");
ROUTE430.fromField = "fraction_changed";
ROUTE430.fromNode = "KickTimer";
ROUTE430.toField = "set_fraction";
ROUTE430.toNode = "r_pinky0_RotationInterpolator";
children[103] = ROUTE430;

ROUTE ROUTE431 = createNode("ROUTE");
ROUTE431.fromField = "fraction_changed";
ROUTE431.fromNode = "KickTimer";
ROUTE431.toField = "set_fraction";
ROUTE431.toNode = "r_pinky1_RotationInterpolator";
children[104] = ROUTE431;

ROUTE ROUTE432 = createNode("ROUTE");
ROUTE432.fromField = "fraction_changed";
ROUTE432.fromNode = "KickTimer";
ROUTE432.toField = "set_fraction";
ROUTE432.toNode = "r_pinky2_RotationInterpolator";
children[105] = ROUTE432;

ROUTE ROUTE433 = createNode("ROUTE");
ROUTE433.fromField = "fraction_changed";
ROUTE433.fromNode = "KickTimer";
ROUTE433.toField = "set_fraction";
ROUTE433.toNode = "r_pinky3_RotationInterpolator";
children[106] = ROUTE433;

//Routes from Interpolators to Joe_ model Joints
ROUTE ROUTE434 = createNode("ROUTE");
ROUTE434.fromField = "value_changed";
ROUTE434.fromNode = "HumanoidRoot_RotationInterpolator";
ROUTE434.toField = "set_rotation";
ROUTE434.toNode = "Joe_HumanoidRoot";
children[107] = ROUTE434;

ROUTE ROUTE435 = createNode("ROUTE");
ROUTE435.fromField = "value_changed";
ROUTE435.fromNode = "HumanoidRoot_TranslationInterpolator";
ROUTE435.toField = "set_translation";
ROUTE435.toNode = "Joe_HumanoidRoot";
children[108] = ROUTE435;

ROUTE ROUTE436 = createNode("ROUTE");
ROUTE436.fromField = "value_changed";
ROUTE436.fromNode = "sacroiliac_RotationInterpolator";
ROUTE436.toField = "set_rotation";
ROUTE436.toNode = "Joe_sacroiliac";
children[109] = ROUTE436;

ROUTE ROUTE437 = createNode("ROUTE");
ROUTE437.fromField = "value_changed";
ROUTE437.fromNode = "l_hip_RotationInterpolator";
ROUTE437.toField = "set_rotation";
ROUTE437.toNode = "Joe_l_hip";
children[110] = ROUTE437;

ROUTE ROUTE438 = createNode("ROUTE");
ROUTE438.fromField = "value_changed";
ROUTE438.fromNode = "l_knee_RotationInterpolator";
ROUTE438.toField = "set_rotation";
ROUTE438.toNode = "Joe_l_knee";
children[111] = ROUTE438;

ROUTE ROUTE439 = createNode("ROUTE");
ROUTE439.fromField = "value_changed";
ROUTE439.fromNode = "l_ankle_RotationInterpolator";
ROUTE439.toField = "set_rotation";
ROUTE439.toNode = "Joe_l_ankle";
children[112] = ROUTE439;

ROUTE ROUTE440 = createNode("ROUTE");
ROUTE440.fromField = "value_changed";
ROUTE440.fromNode = "l_subtalar_RotationInterpolator";
ROUTE440.toField = "set_rotation";
ROUTE440.toNode = "Joe_l_subtalar";
children[113] = ROUTE440;

ROUTE ROUTE441 = createNode("ROUTE");
ROUTE441.fromField = "value_changed";
ROUTE441.fromNode = "l_midtarsal_RotationInterpolator";
ROUTE441.toField = "set_rotation";
ROUTE441.toNode = "Joe_l_midtarsal";
children[114] = ROUTE441;

ROUTE ROUTE442 = createNode("ROUTE");
ROUTE442.fromField = "value_changed";
ROUTE442.fromNode = "l_metatarsal_RotationInterpolator";
ROUTE442.toField = "set_rotation";
ROUTE442.toNode = "Joe_l_metatarsal";
children[115] = ROUTE442;

ROUTE ROUTE443 = createNode("ROUTE");
ROUTE443.fromField = "value_changed";
ROUTE443.fromNode = "r_hip_RotationInterpolator";
ROUTE443.toField = "set_rotation";
ROUTE443.toNode = "Joe_r_hip";
children[116] = ROUTE443;

ROUTE ROUTE444 = createNode("ROUTE");
ROUTE444.fromField = "value_changed";
ROUTE444.fromNode = "r_knee_RotationInterpolator";
ROUTE444.toField = "set_rotation";
ROUTE444.toNode = "Joe_r_knee";
children[117] = ROUTE444;

ROUTE ROUTE445 = createNode("ROUTE");
ROUTE445.fromField = "value_changed";
ROUTE445.fromNode = "r_ankle_RotationInterpolator";
ROUTE445.toField = "set_rotation";
ROUTE445.toNode = "Joe_r_ankle";
children[118] = ROUTE445;

ROUTE ROUTE446 = createNode("ROUTE");
ROUTE446.fromField = "value_changed";
ROUTE446.fromNode = "r_subtalar_RotationInterpolator";
ROUTE446.toField = "set_rotation";
ROUTE446.toNode = "Joe_r_subtalar";
children[119] = ROUTE446;

ROUTE ROUTE447 = createNode("ROUTE");
ROUTE447.fromField = "value_changed";
ROUTE447.fromNode = "r_midtarsal_RotationInterpolator";
ROUTE447.toField = "set_rotation";
ROUTE447.toNode = "Joe_r_midtarsal";
children[120] = ROUTE447;

ROUTE ROUTE448 = createNode("ROUTE");
ROUTE448.fromField = "value_changed";
ROUTE448.fromNode = "r_metatarsal_RotationInterpolator";
ROUTE448.toField = "set_rotation";
ROUTE448.toNode = "Joe_r_metatarsal";
children[121] = ROUTE448;

ROUTE ROUTE449 = createNode("ROUTE");
ROUTE449.fromField = "value_changed";
ROUTE449.fromNode = "vl5_RotationInterpolator";
ROUTE449.toField = "set_rotation";
ROUTE449.toNode = "Joe_vl5";
children[122] = ROUTE449;

ROUTE ROUTE450 = createNode("ROUTE");
ROUTE450.fromField = "value_changed";
ROUTE450.fromNode = "vl4_RotationInterpolator";
ROUTE450.toField = "set_rotation";
ROUTE450.toNode = "Joe_vl4";
children[123] = ROUTE450;

ROUTE ROUTE451 = createNode("ROUTE");
ROUTE451.fromField = "value_changed";
ROUTE451.fromNode = "vl3_RotationInterpolator";
ROUTE451.toField = "set_rotation";
ROUTE451.toNode = "Joe_vl3";
children[124] = ROUTE451;

ROUTE ROUTE452 = createNode("ROUTE");
ROUTE452.fromField = "value_changed";
ROUTE452.fromNode = "vl2_RotationInterpolator";
ROUTE452.toField = "set_rotation";
ROUTE452.toNode = "Joe_vl2";
children[125] = ROUTE452;

ROUTE ROUTE453 = createNode("ROUTE");
ROUTE453.fromField = "value_changed";
ROUTE453.fromNode = "vl1_RotationInterpolator";
ROUTE453.toField = "set_rotation";
ROUTE453.toNode = "Joe_vl1";
children[126] = ROUTE453;

ROUTE ROUTE454 = createNode("ROUTE");
ROUTE454.fromField = "value_changed";
ROUTE454.fromNode = "vt12_RotationInterpolator";
ROUTE454.toField = "set_rotation";
ROUTE454.toNode = "Joe_vt12";
children[127] = ROUTE454;

ROUTE ROUTE455 = createNode("ROUTE");
ROUTE455.fromField = "value_changed";
ROUTE455.fromNode = "vt11_RotationInterpolator";
ROUTE455.toField = "set_rotation";
ROUTE455.toNode = "Joe_vt11";
children[128] = ROUTE455;

ROUTE ROUTE456 = createNode("ROUTE");
ROUTE456.fromField = "value_changed";
ROUTE456.fromNode = "vt10_RotationInterpolator";
ROUTE456.toField = "set_rotation";
ROUTE456.toNode = "Joe_vt10";
children[129] = ROUTE456;

ROUTE ROUTE457 = createNode("ROUTE");
ROUTE457.fromField = "value_changed";
ROUTE457.fromNode = "vt9_RotationInterpolator";
ROUTE457.toField = "set_rotation";
ROUTE457.toNode = "Joe_vt9";
children[130] = ROUTE457;

ROUTE ROUTE458 = createNode("ROUTE");
ROUTE458.fromField = "value_changed";
ROUTE458.fromNode = "vt8_RotationInterpolator";
ROUTE458.toField = "set_rotation";
ROUTE458.toNode = "Joe_vt8";
children[131] = ROUTE458;

ROUTE ROUTE459 = createNode("ROUTE");
ROUTE459.fromField = "value_changed";
ROUTE459.fromNode = "vt7_RotationInterpolator";
ROUTE459.toField = "set_rotation";
ROUTE459.toNode = "Joe_vt7";
children[132] = ROUTE459;

ROUTE ROUTE460 = createNode("ROUTE");
ROUTE460.fromField = "value_changed";
ROUTE460.fromNode = "vt6_RotationInterpolator";
ROUTE460.toField = "set_rotation";
ROUTE460.toNode = "Joe_vt6";
children[133] = ROUTE460;

ROUTE ROUTE461 = createNode("ROUTE");
ROUTE461.fromField = "value_changed";
ROUTE461.fromNode = "vt5_RotationInterpolator";
ROUTE461.toField = "set_rotation";
ROUTE461.toNode = "Joe_vt5";
children[134] = ROUTE461;

ROUTE ROUTE462 = createNode("ROUTE");
ROUTE462.fromField = "value_changed";
ROUTE462.fromNode = "vt4_RotationInterpolator";
ROUTE462.toField = "set_rotation";
ROUTE462.toNode = "Joe_vt4";
children[135] = ROUTE462;

ROUTE ROUTE463 = createNode("ROUTE");
ROUTE463.fromField = "value_changed";
ROUTE463.fromNode = "vt3_RotationInterpolator";
ROUTE463.toField = "set_rotation";
ROUTE463.toNode = "Joe_vt3";
children[136] = ROUTE463;

ROUTE ROUTE464 = createNode("ROUTE");
ROUTE464.fromField = "value_changed";
ROUTE464.fromNode = "vt2_RotationInterpolator";
ROUTE464.toField = "set_rotation";
ROUTE464.toNode = "Joe_vt2";
children[137] = ROUTE464;

ROUTE ROUTE465 = createNode("ROUTE");
ROUTE465.fromField = "value_changed";
ROUTE465.fromNode = "vt1_RotationInterpolator";
ROUTE465.toField = "set_rotation";
ROUTE465.toNode = "Joe_vt1";
children[138] = ROUTE465;

ROUTE ROUTE466 = createNode("ROUTE");
ROUTE466.fromField = "value_changed";
ROUTE466.fromNode = "vc7_RotationInterpolator";
ROUTE466.toField = "set_rotation";
ROUTE466.toNode = "Joe_vc7";
children[139] = ROUTE466;

ROUTE ROUTE467 = createNode("ROUTE");
ROUTE467.fromField = "value_changed";
ROUTE467.fromNode = "vc6_RotationInterpolator";
ROUTE467.toField = "set_rotation";
ROUTE467.toNode = "Joe_vc6";
children[140] = ROUTE467;

ROUTE ROUTE468 = createNode("ROUTE");
ROUTE468.fromField = "value_changed";
ROUTE468.fromNode = "vc5_RotationInterpolator";
ROUTE468.toField = "set_rotation";
ROUTE468.toNode = "Joe_vc5";
children[141] = ROUTE468;

ROUTE ROUTE469 = createNode("ROUTE");
ROUTE469.fromField = "value_changed";
ROUTE469.fromNode = "vc4_RotationInterpolator";
ROUTE469.toField = "set_rotation";
ROUTE469.toNode = "Joe_vc4";
children[142] = ROUTE469;

ROUTE ROUTE470 = createNode("ROUTE");
ROUTE470.fromField = "value_changed";
ROUTE470.fromNode = "vc3_RotationInterpolator";
ROUTE470.toField = "set_rotation";
ROUTE470.toNode = "Joe_vc3";
children[143] = ROUTE470;

ROUTE ROUTE471 = createNode("ROUTE");
ROUTE471.fromField = "value_changed";
ROUTE471.fromNode = "vc2_RotationInterpolator";
ROUTE471.toField = "set_rotation";
ROUTE471.toNode = "Joe_vc2";
children[144] = ROUTE471;

ROUTE ROUTE472 = createNode("ROUTE");
ROUTE472.fromField = "value_changed";
ROUTE472.fromNode = "vc1_RotationInterpolator";
ROUTE472.toField = "set_rotation";
ROUTE472.toNode = "Joe_vc1";
children[145] = ROUTE472;

ROUTE ROUTE473 = createNode("ROUTE");
ROUTE473.fromField = "value_changed";
ROUTE473.fromNode = "skullbase_RotationInterpolator";
ROUTE473.toField = "set_rotation";
ROUTE473.toNode = "Joe_skullbase";
children[146] = ROUTE473;

ROUTE ROUTE474 = createNode("ROUTE");
ROUTE474.fromField = "value_changed";
ROUTE474.fromNode = "l_eyelid_joint_RotationInterpolator";
ROUTE474.toField = "set_rotation";
ROUTE474.toNode = "Joe_l_eyelid_joint";
children[147] = ROUTE474;

ROUTE ROUTE475 = createNode("ROUTE");
ROUTE475.fromField = "value_changed";
ROUTE475.fromNode = "l_eyeball_joint_RotationInterpolator";
ROUTE475.toField = "set_rotation";
ROUTE475.toNode = "Joe_l_eyeball_joint";
children[148] = ROUTE475;

ROUTE ROUTE476 = createNode("ROUTE");
ROUTE476.fromField = "value_changed";
ROUTE476.fromNode = "l_eyebrow_joint_RotationInterpolator";
ROUTE476.toField = "set_rotation";
ROUTE476.toNode = "Joe_l_eyebrow_joint";
children[149] = ROUTE476;

ROUTE ROUTE477 = createNode("ROUTE");
ROUTE477.fromField = "value_changed";
ROUTE477.fromNode = "r_eyelid_joint_RotationInterpolator";
ROUTE477.toField = "set_rotation";
ROUTE477.toNode = "Joe_r_eyelid_joint";
children[150] = ROUTE477;

ROUTE ROUTE478 = createNode("ROUTE");
ROUTE478.fromField = "value_changed";
ROUTE478.fromNode = "r_eyeball_joint_RotationInterpolator";
ROUTE478.toField = "set_rotation";
ROUTE478.toNode = "Joe_r_eyeball_joint";
children[151] = ROUTE478;

ROUTE ROUTE479 = createNode("ROUTE");
ROUTE479.fromField = "value_changed";
ROUTE479.fromNode = "r_eyebrow_joint_RotationInterpolator";
ROUTE479.toField = "set_rotation";
ROUTE479.toNode = "Joe_r_eyebrow_joint";
children[152] = ROUTE479;

ROUTE ROUTE480 = createNode("ROUTE");
ROUTE480.fromField = "value_changed";
ROUTE480.fromNode = "temporomandibular_RotationInterpolator";
ROUTE480.toField = "set_rotation";
ROUTE480.toNode = "Joe_temporomandibular";
children[153] = ROUTE480;

ROUTE ROUTE481 = createNode("ROUTE");
ROUTE481.fromField = "value_changed";
ROUTE481.fromNode = "l_sternoclavicular_RotationInterpolator";
ROUTE481.toField = "set_rotation";
ROUTE481.toNode = "Joe_l_sternoclavicular";
children[154] = ROUTE481;

ROUTE ROUTE482 = createNode("ROUTE");
ROUTE482.fromField = "value_changed";
ROUTE482.fromNode = "l_acromioclavicular_RotationInterpolator";
ROUTE482.toField = "set_rotation";
ROUTE482.toNode = "Joe_l_acromioclavicular";
children[155] = ROUTE482;

ROUTE ROUTE483 = createNode("ROUTE");
ROUTE483.fromField = "value_changed";
ROUTE483.fromNode = "l_shoulder_RotationInterpolator";
ROUTE483.toField = "set_rotation";
ROUTE483.toNode = "Joe_l_shoulder";
children[156] = ROUTE483;

ROUTE ROUTE484 = createNode("ROUTE");
ROUTE484.fromField = "value_changed";
ROUTE484.fromNode = "l_elbow_RotationInterpolator";
ROUTE484.toField = "set_rotation";
ROUTE484.toNode = "Joe_l_elbow";
children[157] = ROUTE484;

ROUTE ROUTE485 = createNode("ROUTE");
ROUTE485.fromField = "value_changed";
ROUTE485.fromNode = "l_wrist_RotationInterpolator";
ROUTE485.toField = "set_rotation";
ROUTE485.toNode = "Joe_l_wrist";
children[158] = ROUTE485;

ROUTE ROUTE486 = createNode("ROUTE");
ROUTE486.fromField = "value_changed";
ROUTE486.fromNode = "l_thumb1_RotationInterpolator";
ROUTE486.toField = "set_rotation";
ROUTE486.toNode = "Joe_l_thumb1";
children[159] = ROUTE486;

ROUTE ROUTE487 = createNode("ROUTE");
ROUTE487.fromField = "value_changed";
ROUTE487.fromNode = "l_thumb2_RotationInterpolator";
ROUTE487.toField = "set_rotation";
ROUTE487.toNode = "Joe_l_thumb2";
children[160] = ROUTE487;

ROUTE ROUTE488 = createNode("ROUTE");
ROUTE488.fromField = "value_changed";
ROUTE488.fromNode = "l_thumb3_RotationInterpolator";
ROUTE488.toField = "set_rotation";
ROUTE488.toNode = "Joe_l_thumb3";
children[161] = ROUTE488;

ROUTE ROUTE489 = createNode("ROUTE");
ROUTE489.fromField = "value_changed";
ROUTE489.fromNode = "l_index0_RotationInterpolator";
ROUTE489.toField = "set_rotation";
ROUTE489.toNode = "Joe_l_index0";
children[162] = ROUTE489;

ROUTE ROUTE490 = createNode("ROUTE");
ROUTE490.fromField = "value_changed";
ROUTE490.fromNode = "l_index1_RotationInterpolator";
ROUTE490.toField = "set_rotation";
ROUTE490.toNode = "Joe_l_index1";
children[163] = ROUTE490;

ROUTE ROUTE491 = createNode("ROUTE");
ROUTE491.fromField = "value_changed";
ROUTE491.fromNode = "l_index2_RotationInterpolator";
ROUTE491.toField = "set_rotation";
ROUTE491.toNode = "Joe_l_index2";
children[164] = ROUTE491;

ROUTE ROUTE492 = createNode("ROUTE");
ROUTE492.fromField = "value_changed";
ROUTE492.fromNode = "l_index3_RotationInterpolator";
ROUTE492.toField = "set_rotation";
ROUTE492.toNode = "Joe_l_index3";
children[165] = ROUTE492;

ROUTE ROUTE493 = createNode("ROUTE");
ROUTE493.fromField = "value_changed";
ROUTE493.fromNode = "l_middle0_RotationInterpolator";
ROUTE493.toField = "set_rotation";
ROUTE493.toNode = "Joe_l_middle0";
children[166] = ROUTE493;

ROUTE ROUTE494 = createNode("ROUTE");
ROUTE494.fromField = "value_changed";
ROUTE494.fromNode = "l_middle1_RotationInterpolator";
ROUTE494.toField = "set_rotation";
ROUTE494.toNode = "Joe_l_middle1";
children[167] = ROUTE494;

ROUTE ROUTE495 = createNode("ROUTE");
ROUTE495.fromField = "value_changed";
ROUTE495.fromNode = "l_middle2_RotationInterpolator";
ROUTE495.toField = "set_rotation";
ROUTE495.toNode = "Joe_l_middle2";
children[168] = ROUTE495;

ROUTE ROUTE496 = createNode("ROUTE");
ROUTE496.fromField = "value_changed";
ROUTE496.fromNode = "l_middle3_RotationInterpolator";
ROUTE496.toField = "set_rotation";
ROUTE496.toNode = "Joe_l_middle3";
children[169] = ROUTE496;

ROUTE ROUTE497 = createNode("ROUTE");
ROUTE497.fromField = "value_changed";
ROUTE497.fromNode = "l_ring0_RotationInterpolator";
ROUTE497.toField = "set_rotation";
ROUTE497.toNode = "Joe_l_ring0";
children[170] = ROUTE497;

ROUTE ROUTE498 = createNode("ROUTE");
ROUTE498.fromField = "value_changed";
ROUTE498.fromNode = "l_ring1_RotationInterpolator";
ROUTE498.toField = "set_rotation";
ROUTE498.toNode = "Joe_l_ring1";
children[171] = ROUTE498;

ROUTE ROUTE499 = createNode("ROUTE");
ROUTE499.fromField = "value_changed";
ROUTE499.fromNode = "l_ring2_RotationInterpolator";
ROUTE499.toField = "set_rotation";
ROUTE499.toNode = "Joe_l_ring2";
children[172] = ROUTE499;

ROUTE ROUTE500 = createNode("ROUTE");
ROUTE500.fromField = "value_changed";
ROUTE500.fromNode = "l_ring3_RotationInterpolator";
ROUTE500.toField = "set_rotation";
ROUTE500.toNode = "Joe_l_ring3";
children[173] = ROUTE500;

ROUTE ROUTE501 = createNode("ROUTE");
ROUTE501.fromField = "value_changed";
ROUTE501.fromNode = "l_pinky0_RotationInterpolator";
ROUTE501.toField = "set_rotation";
ROUTE501.toNode = "Joe_l_pinky0";
children[174] = ROUTE501;

ROUTE ROUTE502 = createNode("ROUTE");
ROUTE502.fromField = "value_changed";
ROUTE502.fromNode = "l_pinky1_RotationInterpolator";
ROUTE502.toField = "set_rotation";
ROUTE502.toNode = "Joe_l_pinky1";
children[175] = ROUTE502;

ROUTE ROUTE503 = createNode("ROUTE");
ROUTE503.fromField = "value_changed";
ROUTE503.fromNode = "l_pinky2_RotationInterpolator";
ROUTE503.toField = "set_rotation";
ROUTE503.toNode = "Joe_l_pinky2";
children[176] = ROUTE503;

ROUTE ROUTE504 = createNode("ROUTE");
ROUTE504.fromField = "value_changed";
ROUTE504.fromNode = "l_pinky3_RotationInterpolator";
ROUTE504.toField = "set_rotation";
ROUTE504.toNode = "Joe_l_pinky3";
children[177] = ROUTE504;

ROUTE ROUTE505 = createNode("ROUTE");
ROUTE505.fromField = "value_changed";
ROUTE505.fromNode = "r_sternoclavicular_RotationInterpolator";
ROUTE505.toField = "set_rotation";
ROUTE505.toNode = "Joe_r_sternoclavicular";
children[178] = ROUTE505;

ROUTE ROUTE506 = createNode("ROUTE");
ROUTE506.fromField = "value_changed";
ROUTE506.fromNode = "r_acromioclavicular_RotationInterpolator";
ROUTE506.toField = "set_rotation";
ROUTE506.toNode = "Joe_r_acromioclavicular";
children[179] = ROUTE506;

ROUTE ROUTE507 = createNode("ROUTE");
ROUTE507.fromField = "value_changed";
ROUTE507.fromNode = "r_shoulder_RotationInterpolator";
ROUTE507.toField = "set_rotation";
ROUTE507.toNode = "Joe_r_shoulder";
children[180] = ROUTE507;

ROUTE ROUTE508 = createNode("ROUTE");
ROUTE508.fromField = "value_changed";
ROUTE508.fromNode = "r_elbow_RotationInterpolator";
ROUTE508.toField = "set_rotation";
ROUTE508.toNode = "Joe_r_elbow";
children[181] = ROUTE508;

ROUTE ROUTE509 = createNode("ROUTE");
ROUTE509.fromField = "value_changed";
ROUTE509.fromNode = "r_wrist_RotationInterpolator";
ROUTE509.toField = "set_rotation";
ROUTE509.toNode = "Joe_r_wrist";
children[182] = ROUTE509;

ROUTE ROUTE510 = createNode("ROUTE");
ROUTE510.fromField = "value_changed";
ROUTE510.fromNode = "r_thumb1_RotationInterpolator";
ROUTE510.toField = "set_rotation";
ROUTE510.toNode = "Joe_r_thumb1";
children[183] = ROUTE510;

ROUTE ROUTE511 = createNode("ROUTE");
ROUTE511.fromField = "value_changed";
ROUTE511.fromNode = "r_thumb2_RotationInterpolator";
ROUTE511.toField = "set_rotation";
ROUTE511.toNode = "Joe_r_thumb2";
children[184] = ROUTE511;

ROUTE ROUTE512 = createNode("ROUTE");
ROUTE512.fromField = "value_changed";
ROUTE512.fromNode = "r_thumb3_RotationInterpolator";
ROUTE512.toField = "set_rotation";
ROUTE512.toNode = "Joe_r_thumb3";
children[185] = ROUTE512;

ROUTE ROUTE513 = createNode("ROUTE");
ROUTE513.fromField = "value_changed";
ROUTE513.fromNode = "r_index0_RotationInterpolator";
ROUTE513.toField = "set_rotation";
ROUTE513.toNode = "Joe_r_index0";
children[186] = ROUTE513;

ROUTE ROUTE514 = createNode("ROUTE");
ROUTE514.fromField = "value_changed";
ROUTE514.fromNode = "r_index1_RotationInterpolator";
ROUTE514.toField = "set_rotation";
ROUTE514.toNode = "Joe_r_index1";
children[187] = ROUTE514;

ROUTE ROUTE515 = createNode("ROUTE");
ROUTE515.fromField = "value_changed";
ROUTE515.fromNode = "r_index2_RotationInterpolator";
ROUTE515.toField = "set_rotation";
ROUTE515.toNode = "Joe_r_index2";
children[188] = ROUTE515;

ROUTE ROUTE516 = createNode("ROUTE");
ROUTE516.fromField = "value_changed";
ROUTE516.fromNode = "r_index3_RotationInterpolator";
ROUTE516.toField = "set_rotation";
ROUTE516.toNode = "Joe_r_index3";
children[189] = ROUTE516;

ROUTE ROUTE517 = createNode("ROUTE");
ROUTE517.fromField = "value_changed";
ROUTE517.fromNode = "r_middle0_RotationInterpolator";
ROUTE517.toField = "set_rotation";
ROUTE517.toNode = "Joe_r_middle0";
children[190] = ROUTE517;

ROUTE ROUTE518 = createNode("ROUTE");
ROUTE518.fromField = "value_changed";
ROUTE518.fromNode = "r_middle1_RotationInterpolator";
ROUTE518.toField = "set_rotation";
ROUTE518.toNode = "Joe_r_middle1";
children[191] = ROUTE518;

ROUTE ROUTE519 = createNode("ROUTE");
ROUTE519.fromField = "value_changed";
ROUTE519.fromNode = "r_middle2_RotationInterpolator";
ROUTE519.toField = "set_rotation";
ROUTE519.toNode = "Joe_r_middle2";
children[192] = ROUTE519;

ROUTE ROUTE520 = createNode("ROUTE");
ROUTE520.fromField = "value_changed";
ROUTE520.fromNode = "r_middle3_RotationInterpolator";
ROUTE520.toField = "set_rotation";
ROUTE520.toNode = "Joe_r_middle3";
children[193] = ROUTE520;

ROUTE ROUTE521 = createNode("ROUTE");
ROUTE521.fromField = "value_changed";
ROUTE521.fromNode = "r_ring0_RotationInterpolator";
ROUTE521.toField = "set_rotation";
ROUTE521.toNode = "Joe_r_ring0";
children[194] = ROUTE521;

ROUTE ROUTE522 = createNode("ROUTE");
ROUTE522.fromField = "value_changed";
ROUTE522.fromNode = "r_ring1_RotationInterpolator";
ROUTE522.toField = "set_rotation";
ROUTE522.toNode = "Joe_r_ring1";
children[195] = ROUTE522;

ROUTE ROUTE523 = createNode("ROUTE");
ROUTE523.fromField = "value_changed";
ROUTE523.fromNode = "r_ring2_RotationInterpolator";
ROUTE523.toField = "set_rotation";
ROUTE523.toNode = "Joe_r_ring2";
children[196] = ROUTE523;

ROUTE ROUTE524 = createNode("ROUTE");
ROUTE524.fromField = "value_changed";
ROUTE524.fromNode = "r_ring3_RotationInterpolator";
ROUTE524.toField = "set_rotation";
ROUTE524.toNode = "Joe_r_ring3";
children[197] = ROUTE524;

ROUTE ROUTE525 = createNode("ROUTE");
ROUTE525.fromField = "value_changed";
ROUTE525.fromNode = "r_pinky0_RotationInterpolator";
ROUTE525.toField = "set_rotation";
ROUTE525.toNode = "Joe_r_pinky0";
children[198] = ROUTE525;

ROUTE ROUTE526 = createNode("ROUTE");
ROUTE526.fromField = "value_changed";
ROUTE526.fromNode = "r_pinky1_RotationInterpolator";
ROUTE526.toField = "set_rotation";
ROUTE526.toNode = "Joe_r_pinky1";
children[199] = ROUTE526;

ROUTE ROUTE527 = createNode("ROUTE");
ROUTE527.fromField = "value_changed";
ROUTE527.fromNode = "r_pinky2_RotationInterpolator";
ROUTE527.toField = "set_rotation";
ROUTE527.toNode = "Joe_r_pinky2";
children[200] = ROUTE527;

ROUTE ROUTE528 = createNode("ROUTE");
ROUTE528.fromField = "value_changed";
ROUTE528.fromNode = "r_pinky3_RotationInterpolator";
ROUTE528.toField = "set_rotation";
ROUTE528.toNode = "Joe_r_pinky3";
children[201] = ROUTE528;

Group Group529 = createNode("Group");
Group529.DEF = "DisplacersAnimationGroup";
//TimeSensor DEF='skull_tipInterpolatorTimer' cycleInterval='5.73' loop='true' enabled='true'></TimeSensor
ScalarInterpolator ScalarInterpolator530 = createNode("ScalarInterpolator");
ScalarInterpolator530.DEF = "skull_tipInterpolator";
ScalarInterpolator530.key = new MFFloat(new float[0,0.1,0.2,0.35,0.6,0.7,0.85,0.88,0.94,0.97,1]);
ScalarInterpolator530.keyValue = new MFFloat(new float[0,0,0,0,0.2,0.4,1,0,1,0.4,0]);
Group529.children = new MFNode();

Group529.children[0] = ScalarInterpolator530;

ROUTE ROUTE531 = createNode("ROUTE");
ROUTE531.fromField = "fraction_changed";
ROUTE531.fromNode = "KickTimer";
ROUTE531.toField = "set_fraction";
ROUTE531.toNode = "skull_tipInterpolator";
Group529.children[1] = ROUTE531;

ROUTE ROUTE532 = createNode("ROUTE");
ROUTE532.fromField = "value_changed";
ROUTE532.fromNode = "skull_tipInterpolator";
ROUTE532.toField = "weight";
ROUTE532.toNode = "Joe_skull_tip_raiser_action";
Group529.children[2] = ROUTE532;

children[202] = Group529;

Group Group533 = createNode("Group");
Group533.DEF = "SkinTextureTransformAnimationGroup";
ScalarInterpolator ScalarInterpolator534 = createNode("ScalarInterpolator");
ScalarInterpolator534.DEF = "SkinTextureTransformInterpolator";
ScalarInterpolator534.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.7,0.8,1]);
ScalarInterpolator534.keyValue = new MFFloat(new float[0,0,0,0,0,1,2,0]);
Group533.children = new MFNode();

Group533.children[0] = ScalarInterpolator534;

ROUTE ROUTE535 = createNode("ROUTE");
ROUTE535.fromField = "fraction_changed";
ROUTE535.fromNode = "KickTimer";
ROUTE535.toField = "set_fraction";
ROUTE535.toNode = "SkinTextureTransformInterpolator";
Group533.children[1] = ROUTE535;

ROUTE ROUTE536 = createNode("ROUTE");
ROUTE536.fromField = "value_changed";
ROUTE536.fromNode = "SkinTextureTransformInterpolator";
ROUTE536.toField = "rotation";
ROUTE536.toNode = "KickTextureTransform";
Group533.children[2] = ROUTE536;

children[203] = Group533;

Group Group537 = createNode("Group");
Transform Transform538 = createNode("Transform");
Transform538.DEF = "SBall";
Transform538.rotation = new SFRotation(new float[0.7,0,0.7,0.1]);
Transform538.scale = new SFVec3f(new float[0.23,0.23,0.23]);
Transform538.translation = new SFVec3f(new float[-0.916,0.37,-0.92]);
Shape Shape539 = createNode("Shape");
Shape539.DEF = "ball_Shape";
Appearance Appearance540 = createNode("Appearance");
Appearance540.DEF = "ball_Appearance";
Material Material541 = createNode("Material");
Material541.DEF = "ball_Material";
Material541.diffuseColor = new SFColor(new float[0.3,0.3,1]);
Material541.emissiveColor = new SFColor(new float[0.3,0.3,0.33]);
Appearance540.material = Material541;

ImageTexture ImageTexture542 = createNode("ImageTexture");
ImageTexture542.USE = "JoeSkinImageTexture";
Appearance540.texture = ImageTexture542;

Shape539.appearance = Appearance540;

IndexedFaceSet IndexedFaceSet543 = createNode("IndexedFaceSet");
IndexedFaceSet543.DEF = "ball_IndexedFaceSet";
IndexedFaceSet543.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,1,14,2,-1,2,14,15,-1,2,15,3,-1,3,15,16,-1,3,16,4,-1,4,16,17,-1,4,17,5,-1,5,17,18,-1,5,18,6,-1,6,18,19,-1,6,19,7,-1,7,19,20,-1,7,20,8,-1,8,20,21,-1,8,21,9,-1,9,21,22,-1,9,22,10,-1,10,22,23,-1,10,23,11,-1,11,23,24,-1,11,24,12,-1,12,24,13,-1,12,13,1,-1,13,25,26,-1,13,26,14,-1,14,26,27,-1,14,27,15,-1,15,27,28,-1,15,28,16,-1,16,28,29,-1,16,29,17,-1,17,29,30,-1,17,30,18,-1,18,30,31,-1,18,31,19,-1,19,31,32,-1,19,32,20,-1,20,32,33,-1,20,33,21,-1,21,33,34,-1,21,34,22,-1,22,34,35,-1,22,35,23,-1,23,35,36,-1,23,36,24,-1,24,36,25,-1,24,25,13,-1,25,37,38,-1,25,38,26,-1,26,38,39,-1,26,39,27,-1,27,39,40,-1,27,40,28,-1,28,40,41,-1,28,41,29,-1,29,41,42,-1,29,42,30,-1,30,42,43,-1,30,43,31,-1,31,43,44,-1,31,44,32,-1,32,44,45,-1,32,45,33,-1,33,45,46,-1,33,46,34,-1,34,46,47,-1,34,47,35,-1,35,47,48,-1,35,48,36,-1,36,48,37,-1,36,37,25,-1,37,49,50,-1,37,50,38,-1,38,50,51,-1,38,51,39,-1,39,51,52,-1,39,52,40,-1,40,52,53,-1,40,53,41,-1,41,53,54,-1,41,54,42,-1,42,54,55,-1,42,55,43,-1,43,55,56,-1,43,56,44,-1,44,56,57,-1,44,57,45,-1,45,57,58,-1,45,58,46,-1,46,58,59,-1,46,59,47,-1,47,59,60,-1,47,60,48,-1,48,60,49,-1,48,49,37,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]);
Coordinate Coordinate544 = createNode("Coordinate");
Coordinate544.DEF = "Ball_Coordinates";
Coordinate544.point = new MFVec3f(new float[0,0.4675,0,0,0.4049,-0.2338,-0.1169,0.4049,-0.2024,-0.2024,0.4049,-0.1169,-0.2338,0.4049,0,-0.2024,0.4049,0.1169,-0.1169,0.4049,0.2024,0,0.4049,0.2338,0.1169,0.4049,0.2024,0.2024,0.4049,0.1169,0.2338,0.4049,0,0.2024,0.4049,-0.1169,0.1169,0.4049,-0.2024,0,0.2338,-0.4049,-0.2024,0.2338,-0.3506,-0.3506,0.2338,-0.2024,-0.4049,0.2338,0,-0.3506,0.2338,0.2024,-0.2024,0.2338,0.3506,0,0.2338,0.4049,0.2024,0.2338,0.3506,0.3506,0.2338,0.2024,0.4049,0.2338,0,0.3506,0.2338,-0.2024,0.2024,0.2338,-0.3506,0,0,-0.4675,-0.2338,0,-0.4049,-0.4049,0,-0.2338,-0.4675,0,0,-0.4049,0,0.2338,-0.2338,0,0.4049,0,0,0.4675,0.2338,0,0.4049,0.4049,0,0.2338,0.4675,0,0,0.4049,0,-0.2338,0.2338,0,-0.4049,0,-0.2338,-0.4049,-0.2024,-0.2338,-0.3506,-0.3506,-0.2338,-0.2024,-0.4049,-0.2338,0,-0.3506,-0.2338,0.2024,-0.2024,-0.2338,0.3506,0,-0.2338,0.4049,0.2024,-0.2338,0.3506,0.3506,-0.2338,0.2024,0.4049,-0.2338,0,0.3506,-0.2338,-0.2024,0.2024,-0.2338,-0.3506,0,-0.4049,-0.2338,-0.1169,-0.4049,-0.2024,-0.2024,-0.4049,-0.1169,-0.2338,-0.4049,0,-0.2024,-0.4049,0.1169,-0.1169,-0.4049,0.2024,0,-0.4049,0.2338,0.1169,-0.4049,0.2024,0.2024,-0.4049,0.1169,0.2338,-0.4049,0,0.2024,-0.4049,-0.1169,0.1169,-0.4049,-0.2024,0,-0.4675,0]);
IndexedFaceSet543.coord = Coordinate544;

Shape539.geometry = IndexedFaceSet543;

Transform538.children = new MFNode();

Transform538.children[0] = Shape539;

Viewpoint Viewpoint545 = createNode("Viewpoint");
Viewpoint545.DEF = "ballView_1";
Viewpoint545.description = "Ball View";
Transform538.children[1] = Viewpoint545;

Group537.children = new MFNode();

Group537.children[0] = Transform538;

//Ball Animation interpolators
PositionInterpolator PositionInterpolator546 = createNode("PositionInterpolator");
PositionInterpolator546.DEF = "ball_TranslationInterpolator";
PositionInterpolator546.key = new MFFloat(new float[0,0.4,0.409,1]);
PositionInterpolator546.keyValue = new MFVec3f(new float[-1,0.4,-1,0,0.07,0,0.05,0.06,0.05,2,4,10]);
Group537.children[1] = PositionInterpolator546;

OrientationInterpolator OrientationInterpolator547 = createNode("OrientationInterpolator");
OrientationInterpolator547.DEF = "ball_RotationInterpolator";
OrientationInterpolator547.key = new MFFloat(new float[0,0.4,0.41,0.71,1]);
OrientationInterpolator547.keyValue = new MFRotation(new float[1,0,1,0.25,-1,0,-1,1.35,-1,1,-1,3.35,-1,0.2,-1,3,-1,0.2,-1,3]);
Group537.children[2] = OrientationInterpolator547;

//Ball Animation Routes
ROUTE ROUTE548 = createNode("ROUTE");
ROUTE548.fromField = "fraction_changed";
ROUTE548.fromNode = "KickTimer";
ROUTE548.toField = "set_fraction";
ROUTE548.toNode = "ball_TranslationInterpolator";
Group537.children[3] = ROUTE548;

ROUTE ROUTE549 = createNode("ROUTE");
ROUTE549.fromField = "value_changed";
ROUTE549.fromNode = "ball_TranslationInterpolator";
ROUTE549.toField = "set_translation";
ROUTE549.toNode = "SBall";
Group537.children[4] = ROUTE549;

ROUTE ROUTE550 = createNode("ROUTE");
ROUTE550.fromField = "fraction_changed";
ROUTE550.fromNode = "KickTimer";
ROUTE550.toField = "set_fraction";
ROUTE550.toNode = "ball_RotationInterpolator";
Group537.children[5] = ROUTE550;

ROUTE ROUTE551 = createNode("ROUTE");
ROUTE551.fromField = "value_changed";
ROUTE551.fromNode = "ball_RotationInterpolator";
ROUTE551.toField = "set_rotation";
ROUTE551.toNode = "SBall";
Group537.children[6] = ROUTE551;

children[204] = Group537;

Group Group552 = createNode("Group");
Transform Transform553 = createNode("Transform");
Transform553.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Shape Shape554 = createNode("Shape");
Shape554.USE = "AxisLinesShape";
Transform553.children = new MFNode();

Transform553.children[0] = Shape554;

Group552.children = new MFNode();

Group552.children[0] = Transform553;

Transform Transform555 = createNode("Transform");
Transform555.DEF = "Circle0";
Transform555.scale = new SFVec3f(new float[1.175,1,1.175]);
Shape Shape556 = createNode("Shape");
Shape556.DEF = "circle_Shape";
Appearance Appearance557 = createNode("Appearance");
Appearance557.DEF = "circle0_Appearance";
Material Material558 = createNode("Material");
Material558.DEF = "circle0_Material";
Material558.ambientIntensity = 0.9;
Material558.diffuseColor = new SFColor(new float[0.9,0,0.7]);
Material558.emissiveColor = new SFColor(new float[0.425,0.486,1]);
Appearance557.material = Material558;

Shape556.appearance = Appearance557;

IndexedLineSet IndexedLineSet559 = createNode("IndexedLineSet");
IndexedLineSet559.DEF = "Orbit1";
IndexedLineSet559.coordIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1]);
Coordinate Coordinate560 = createNode("Coordinate");
Coordinate560.DEF = "circle_Coordinates";
Coordinate560.point = new MFVec3f(new float[1,0,0,0.995,0,-0.105,0.979,0,-0.208,0.951,0,-0.309,0.914,0,-0.407,0.866,0,-0.5,0.809,0,-0.588,0.743,0,-0.669,0.669,0,-0.743,0.588,0,-0.809,0.5,0,-0.866,0.407,0,-0.914,0.309,0,-0.951,0.208,0,-0.978,0.105,0,-0.995,0,0,-1,-0.105,0,-0.994522,-0.208,0,-0.978,-0.309,0,-0.951,-0.407,0,-0.914,-0.5,0,-0.866,-0.588,0,-0.809,-0.669,0,-0.743,-0.743,0,-0.669,-0.809,0,-0.588,-0.866,0,-0.5,-0.914,0,-0.407,-0.951,0,-0.309,-0.978,0,-0.208,-0.995,0,-0.105,-1,0,0,-0.995,0,0.105,-0.978,0,0.208,-0.951,0,0.309,-0.914,0,0.407,-0.866,0,0.5,-0.809,0,0.588,-0.743,0,0.669,-0.669,0,0.743,-0.588,0,0.809,-0.5,0,0.866,-0.407,0,0.914,-0.309,0,0.951,-0.208,0,0.978,-0.105,0,0.995,0,0,1,0.105,0,0.995,0.208,0,0.978,0.309,0,0.951,0.407,0,0.914,0.5,0,0.866,0.588,0,0.809,0.669,0,0.743,0.743,0,0.669,0.809,0,0.588,0.866,0,0.5,0.914,0,0.407,0.951,0,0.309,0.978,0,0.208,0.995,0,0.104,1,0,0]);
IndexedLineSet559.coord = Coordinate560;

Shape556.geometry = IndexedLineSet559;

Transform555.children = new MFNode();

Transform555.children[0] = Shape556;

Group552.children[1] = Transform555;

Transform Transform561 = createNode("Transform");
Transform561.DEF = "Circle1";
Transform561.scale = new SFVec3f(new float[0.5,1,0.5]);
Shape Shape562 = createNode("Shape");
Shape562.DEF = "circle1_Shape";
Appearance Appearance563 = createNode("Appearance");
Appearance563.DEF = "circle1_Appearance";
Material Material564 = createNode("Material");
Material564.DEF = "circle1_Material";
Material564.diffuseColor = new SFColor(new float[0.9,0,0.7]);
Material564.emissiveColor = new SFColor(new float[0.424956,0.483976,1]);
Appearance563.material = Material564;

Shape562.appearance = Appearance563;

IndexedLineSet IndexedLineSet565 = createNode("IndexedLineSet");
IndexedLineSet565.USE = "Orbit1";
Shape562.geometry = IndexedLineSet565;

Transform561.children = new MFNode();

Transform561.children[0] = Shape562;

Group552.children[2] = Transform561;

Transform Transform566 = createNode("Transform");
Transform566.DEF = "Circle2";
Transform566.scale = new SFVec3f(new float[0.25,1,0.25]);
Shape Shape567 = createNode("Shape");
Shape567.DEF = "circle2_Shape";
Appearance Appearance568 = createNode("Appearance");
Appearance568.DEF = "circle2_Appearance";
Material Material569 = createNode("Material");
Material569.DEF = "circle2_Material";
Material569.diffuseColor = new SFColor(new float[0.9,0,0.7]);
Material569.emissiveColor = new SFColor(new float[0.424956,0.483976,1]);
Appearance568.material = Material569;

Shape567.appearance = Appearance568;

IndexedLineSet IndexedLineSet570 = createNode("IndexedLineSet");
IndexedLineSet570.USE = "Orbit1";
Shape567.geometry = IndexedLineSet570;

Transform566.children = new MFNode();

Transform566.children[0] = Shape567;

Group552.children[3] = Transform566;

children[205] = Group552;

}
