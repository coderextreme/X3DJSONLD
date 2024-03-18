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
meta3.content = "JohnJoint2.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "identifier";
meta4.content = "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint2.x3d";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "description";
meta5.content = "An attempt at a standard LOA-4 skeleton";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "generator";
meta6.content = "h2.pl";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "14 Jan 2023";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "creator";
meta8.content = "John Carlson";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "created";
meta9.content = "9 November 2020";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "license";
meta10.content = "../license.html";
head1.meta[8] = meta10;

head = head1;

Transform Transform12 = createNode("Transform");
//DEF for markerfor XYZ axes
Shape Shape13 = createNode("Shape");
Shape13.DEF = "AxisLinesShape";
//RGB lines showing XYZ axes
IndexedLineSet IndexedLineSet14 = createNode("IndexedLineSet");
IndexedLineSet14.colorIndex = new MFInt32(new int[0,1,2]);
IndexedLineSet14.colorPerVertex = False;
IndexedLineSet14.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1]);
Coordinate Coordinate15 = createNode("Coordinate");
Coordinate15.point = new MFVec3f(new float[0,0,0,0.1,0,0,0,0.1,0,0,0,0.1]);
IndexedLineSet14.coord = Coordinate15;

Color Color16 = createNode("Color");
Color16.color = new MFColor(new float[1,0,0,0,0.6,0,0,0,1]);
IndexedLineSet14.color = Color16;

Shape13.geometry = IndexedLineSet14;

Transform12.child = new undefined();

Transform12.child[0] = Shape13;

children = new MFNode();

children[0] = Transform12;

Group Group17 = createNode("Group");
//DEFS for markers of skeleton joints, segments, and sites
Transform Transform18 = createNode("Transform");
//<Transform translation='0 2 0' scale='1 1 1'> <Shape DEF='HAnimRootShape'> <Sphere radius='0.02' /> <Appearance> <Material DEF='HAnimRootMaterial' diffuseColor='0.8 0 0' transparency='0.3'/> </Appearance> </Shape> </Transform>
Transform Transform19 = createNode("Transform");
Transform19.translation = new SFVec3f(new float[0,2.1,0]);
Shape Shape20 = createNode("Shape");
Shape20.DEF = "HAnimJointShape";
Sphere Sphere21 = createNode("Sphere");
Sphere21.radius = 0.02;
Shape20.geometry = Sphere21;

Appearance Appearance22 = createNode("Appearance");
Material Material23 = createNode("Material");
Material23.DEF = "HAnimJointMaterial";
Material23.diffuseColor = new SFColor(new float[0,0,0.8]);
Material23.transparency = 0.3;
Appearance22.material = Material23;

Shape20.appearance = Appearance22;

Transform19.child = new undefined();

Transform19.child[0] = Shape20;

Transform18.children = new MFNode();

Transform18.children[0] = Transform19;

Transform Transform24 = createNode("Transform");
Transform24.translation = new SFVec3f(new float[0,2.05,0]);
Shape Shape25 = createNode("Shape");
Shape25.DEF = "HAnimSegmentLine";
LineSet LineSet26 = createNode("LineSet");
LineSet26.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA27 = createNode("ColorRGBA");
ColorRGBA27.DEF = "HAnimSegmentLineColorRGBA";
ColorRGBA27.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1]);
LineSet26.color = ColorRGBA27;

Coordinate Coordinate28 = createNode("Coordinate");
Coordinate28.point = new MFVec3f(new float[-0.05,0,0,0.05,0,0]);
LineSet26.coord = Coordinate28;

Shape25.geometry = LineSet26;

Transform24.child = new undefined();

Transform24.child[0] = Shape25;

Transform18.children[1] = Transform24;

//<Transform translation='0 2.1 0' scale='1 1 1'> <Shape DEF='HAnimSiteShape'> <IndexedFaceSet DEF='DiamondIFS' creaseAngle='0.5' solid='false' coordIndex='0 1 2 -1 0 2 3 -1 0 3 4 -1 0 4 1 -1 5 2 1 -1 5 3 2 -1 5 4 3 -1 5 1 4 -1'> <ColorRGBA DEF='HAnimSiteColorRGBA' color='1 1 0 1 1 1 0 0.1'/> <Coordinate point='0 0.01 0 -0.01 0 0 0 0 0.01 0.01 0 0 0 0 -0.01 0 -0.01 0'/> </IndexedFaceSet> <Appearance> <Material diffuseColor='1 1 0' transparency='0.3'/> </Appearance> </Shape> </Transform>
Group17.children = new MFNode();

Group17.children[0] = Transform18;

children[1] = Group17;

NavigationInfo NavigationInfo29 = createNode("NavigationInfo");
NavigationInfo29.speed = 1.5;
children[2] = NavigationInfo29;

Viewpoint Viewpoint30 = createNode("Viewpoint");
Viewpoint30.description = "default";
children[3] = Viewpoint30;

HAnimHumanoid HAnimHumanoid31 = createNode("HAnimHumanoid");
HAnimHumanoid31.name = "HAnim";
HAnimHumanoid31.DEF = "hanim_HAnim";
HAnimHumanoid31.info = new MFString(new java.lang.String["humanoidVersion=2.0"]);
HAnimHumanoid31.version = "2.0";
HAnimJoint HAnimJoint32 = createNode("HAnimJoint");
HAnimJoint32.name = "humanoid_root";
HAnimJoint32.DEF = "hanim_humanoid_root";
HAnimJoint32.center = new SFVec3f(new float[0,0.824,0.0277]);
HAnimJoint HAnimJoint33 = createNode("HAnimJoint");
HAnimJoint33.name = "sacroiliac";
HAnimJoint33.DEF = "hanim_sacroiliac";
HAnimJoint33.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimJoint HAnimJoint34 = createNode("HAnimJoint");
HAnimJoint34.name = "l_hip";
HAnimJoint34.DEF = "hanim_l_hip";
HAnimJoint34.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimJoint HAnimJoint35 = createNode("HAnimJoint");
HAnimJoint35.name = "l_knee";
HAnimJoint35.DEF = "hanim_l_knee";
HAnimJoint35.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimJoint HAnimJoint36 = createNode("HAnimJoint");
HAnimJoint36.name = "l_talocrural";
HAnimJoint36.DEF = "hanim_l_talocrural";
HAnimJoint36.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimJoint HAnimJoint37 = createNode("HAnimJoint");
HAnimJoint37.name = "l_talocalcaneonavicular";
HAnimJoint37.DEF = "hanim_l_talocalcaneonavicular";
HAnimJoint37.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint38 = createNode("HAnimJoint");
HAnimJoint38.name = "l_cuneonavicular_1";
HAnimJoint38.DEF = "hanim_l_cuneonavicular_1";
HAnimJoint38.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint39 = createNode("HAnimJoint");
HAnimJoint39.name = "l_tarsometatarsal_1";
HAnimJoint39.DEF = "hanim_l_tarsometatarsal_1";
HAnimJoint39.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint40 = createNode("HAnimJoint");
HAnimJoint40.name = "l_metatarsophalangeal_1";
HAnimJoint40.DEF = "hanim_l_metatarsophalangeal_1";
HAnimJoint40.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint41 = createNode("HAnimJoint");
HAnimJoint41.name = "l_tarsal_interphalangeal_1";
HAnimJoint41.DEF = "hanim_l_tarsal_interphalangeal_1";
HAnimJoint41.center = new SFVec3f(new float[0,1,0]);
HAnimJoint40.children = new MFNode();

HAnimJoint40.children[0] = HAnimJoint41;

HAnimJoint39.children = new MFNode();

HAnimJoint39.children[0] = HAnimJoint40;

HAnimJoint38.children = new MFNode();

HAnimJoint38.children[0] = HAnimJoint39;

HAnimJoint37.children = new MFNode();

HAnimJoint37.children[0] = HAnimJoint38;

HAnimJoint HAnimJoint42 = createNode("HAnimJoint");
HAnimJoint42.name = "l_cuneonavicular_2";
HAnimJoint42.DEF = "hanim_l_cuneonavicular_2";
HAnimJoint42.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint43 = createNode("HAnimJoint");
HAnimJoint43.name = "l_tarsometatarsal_2";
HAnimJoint43.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint43.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint44 = createNode("HAnimJoint");
HAnimJoint44.name = "l_metatarsophalangeal_2";
HAnimJoint44.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint44.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint45 = createNode("HAnimJoint");
HAnimJoint45.name = "l_tarsal_proximal_interphalangeal_2";
HAnimJoint45.DEF = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimJoint45.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint46 = createNode("HAnimJoint");
HAnimJoint46.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint46.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint46.center = new SFVec3f(new float[0,1,0]);
HAnimJoint45.children = new MFNode();

HAnimJoint45.children[0] = HAnimJoint46;

HAnimJoint44.children = new MFNode();

HAnimJoint44.children[0] = HAnimJoint45;

HAnimJoint43.children = new MFNode();

HAnimJoint43.children[0] = HAnimJoint44;

HAnimJoint42.children = new MFNode();

HAnimJoint42.children[0] = HAnimJoint43;

HAnimJoint37.children[1] = HAnimJoint42;

HAnimJoint HAnimJoint47 = createNode("HAnimJoint");
HAnimJoint47.name = "l_cuneonavicular_3";
HAnimJoint47.DEF = "hanim_l_cuneonavicular_3";
HAnimJoint47.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint48 = createNode("HAnimJoint");
HAnimJoint48.name = "l_tarsometatarsal_3";
HAnimJoint48.DEF = "hanim_l_tarsometatarsal_3";
HAnimJoint48.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint49 = createNode("HAnimJoint");
HAnimJoint49.name = "l_metatarsophalangeal_3";
HAnimJoint49.DEF = "hanim_l_metatarsophalangeal_3";
HAnimJoint49.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint50 = createNode("HAnimJoint");
HAnimJoint50.name = "l_tarsal_proximal_interphalangeal_3";
HAnimJoint50.DEF = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimJoint50.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint51 = createNode("HAnimJoint");
HAnimJoint51.name = "l_tarsal_distal_interphalangeal_3";
HAnimJoint51.DEF = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimJoint51.center = new SFVec3f(new float[0,1,0]);
HAnimJoint50.children = new MFNode();

HAnimJoint50.children[0] = HAnimJoint51;

HAnimJoint49.children = new MFNode();

HAnimJoint49.children[0] = HAnimJoint50;

HAnimJoint48.children = new MFNode();

HAnimJoint48.children[0] = HAnimJoint49;

HAnimJoint47.children = new MFNode();

HAnimJoint47.children[0] = HAnimJoint48;

HAnimJoint37.children[2] = HAnimJoint47;

HAnimJoint36.children = new MFNode();

HAnimJoint36.children[0] = HAnimJoint37;

HAnimJoint HAnimJoint52 = createNode("HAnimJoint");
HAnimJoint52.name = "l_calcaneocuboid";
HAnimJoint52.DEF = "hanim_l_calcaneocuboid";
HAnimJoint52.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint53 = createNode("HAnimJoint");
HAnimJoint53.name = "l_transversetarsal";
HAnimJoint53.DEF = "hanim_l_transversetarsal";
HAnimJoint53.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint54 = createNode("HAnimJoint");
HAnimJoint54.name = "l_tarsometatarsal_4";
HAnimJoint54.DEF = "hanim_l_tarsometatarsal_4";
HAnimJoint54.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint55 = createNode("HAnimJoint");
HAnimJoint55.name = "l_metatarsophalangeal_4";
HAnimJoint55.DEF = "hanim_l_metatarsophalangeal_4";
HAnimJoint55.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint56 = createNode("HAnimJoint");
HAnimJoint56.name = "l_tarsal_proximal_interphalangeal_4";
HAnimJoint56.DEF = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimJoint56.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint57 = createNode("HAnimJoint");
HAnimJoint57.name = "l_tarsal_distal_interphalangeal_4";
HAnimJoint57.DEF = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimJoint57.center = new SFVec3f(new float[0,1,0]);
HAnimJoint56.children = new MFNode();

HAnimJoint56.children[0] = HAnimJoint57;

HAnimJoint55.children = new MFNode();

HAnimJoint55.children[0] = HAnimJoint56;

HAnimJoint54.children = new MFNode();

HAnimJoint54.children[0] = HAnimJoint55;

HAnimJoint53.children = new MFNode();

HAnimJoint53.children[0] = HAnimJoint54;

HAnimJoint HAnimJoint58 = createNode("HAnimJoint");
HAnimJoint58.name = "l_tarsometatarsal_5";
HAnimJoint58.DEF = "hanim_l_tarsometatarsal_5";
HAnimJoint58.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint59 = createNode("HAnimJoint");
HAnimJoint59.name = "l_metatarsophalangeal_5";
HAnimJoint59.DEF = "hanim_l_metatarsophalangeal_5";
HAnimJoint59.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint60 = createNode("HAnimJoint");
HAnimJoint60.name = "l_tarsal_proximal_interphalangeal_5";
HAnimJoint60.DEF = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimJoint60.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint61 = createNode("HAnimJoint");
HAnimJoint61.name = "l_tarsal_distal_interphalangeal_5";
HAnimJoint61.DEF = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimJoint61.center = new SFVec3f(new float[0,1,0]);
HAnimJoint60.children = new MFNode();

HAnimJoint60.children[0] = HAnimJoint61;

HAnimJoint59.children = new MFNode();

HAnimJoint59.children[0] = HAnimJoint60;

HAnimJoint58.children = new MFNode();

HAnimJoint58.children[0] = HAnimJoint59;

HAnimJoint53.children[1] = HAnimJoint58;

HAnimJoint52.children = new MFNode();

HAnimJoint52.children[0] = HAnimJoint53;

HAnimJoint36.children[1] = HAnimJoint52;

HAnimJoint35.children = new MFNode();

HAnimJoint35.children[0] = HAnimJoint36;

HAnimJoint34.children = new MFNode();

HAnimJoint34.children[0] = HAnimJoint35;

HAnimJoint33.children = new MFNode();

HAnimJoint33.children[0] = HAnimJoint34;

HAnimJoint HAnimJoint62 = createNode("HAnimJoint");
HAnimJoint62.name = "r_hip";
HAnimJoint62.DEF = "hanim_r_hip";
HAnimJoint62.center = new SFVec3f(new float[-0.095,0.9171,0.0029]);
HAnimJoint HAnimJoint63 = createNode("HAnimJoint");
HAnimJoint63.name = "r_knee";
HAnimJoint63.DEF = "hanim_r_knee";
HAnimJoint63.center = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
HAnimJoint HAnimJoint64 = createNode("HAnimJoint");
HAnimJoint64.name = "r_talocrural";
HAnimJoint64.DEF = "hanim_r_talocrural";
HAnimJoint64.center = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
HAnimJoint HAnimJoint65 = createNode("HAnimJoint");
HAnimJoint65.name = "r_talocalcaneonavicular";
HAnimJoint65.DEF = "hanim_r_talocalcaneonavicular";
HAnimJoint65.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint66 = createNode("HAnimJoint");
HAnimJoint66.name = "r_cuneonavicular_1";
HAnimJoint66.DEF = "hanim_r_cuneonavicular_1";
HAnimJoint66.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint67 = createNode("HAnimJoint");
HAnimJoint67.name = "r_tarsometatarsal_1";
HAnimJoint67.DEF = "hanim_r_tarsometatarsal_1";
HAnimJoint67.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint68 = createNode("HAnimJoint");
HAnimJoint68.name = "r_metatarsophalangeal_1";
HAnimJoint68.DEF = "hanim_r_metatarsophalangeal_1";
HAnimJoint68.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint69 = createNode("HAnimJoint");
HAnimJoint69.name = "r_tarsal_interphalangeal_1";
HAnimJoint69.DEF = "hanim_r_tarsal_interphalangeal_1";
HAnimJoint69.center = new SFVec3f(new float[0,1,0]);
HAnimJoint68.children = new MFNode();

HAnimJoint68.children[0] = HAnimJoint69;

HAnimJoint67.children = new MFNode();

HAnimJoint67.children[0] = HAnimJoint68;

HAnimJoint66.children = new MFNode();

HAnimJoint66.children[0] = HAnimJoint67;

HAnimJoint65.children = new MFNode();

HAnimJoint65.children[0] = HAnimJoint66;

HAnimJoint HAnimJoint70 = createNode("HAnimJoint");
HAnimJoint70.name = "r_cuneonavicular_2";
HAnimJoint70.DEF = "hanim_r_cuneonavicular_2";
HAnimJoint70.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint71 = createNode("HAnimJoint");
HAnimJoint71.name = "r_tarsometatarsal_2";
HAnimJoint71.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint71.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint72 = createNode("HAnimJoint");
HAnimJoint72.name = "r_metatarsophalangeal_2";
HAnimJoint72.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint72.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint73 = createNode("HAnimJoint");
HAnimJoint73.name = "r_tarsal_proximal_interphalangeal_2";
HAnimJoint73.DEF = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimJoint73.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint74 = createNode("HAnimJoint");
HAnimJoint74.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint74.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint74.center = new SFVec3f(new float[0,1,0]);
HAnimJoint73.children = new MFNode();

HAnimJoint73.children[0] = HAnimJoint74;

HAnimJoint72.children = new MFNode();

HAnimJoint72.children[0] = HAnimJoint73;

HAnimJoint71.children = new MFNode();

HAnimJoint71.children[0] = HAnimJoint72;

HAnimJoint70.children = new MFNode();

HAnimJoint70.children[0] = HAnimJoint71;

HAnimJoint65.children[1] = HAnimJoint70;

HAnimJoint HAnimJoint75 = createNode("HAnimJoint");
HAnimJoint75.name = "r_cuneonavicular_3";
HAnimJoint75.DEF = "hanim_r_cuneonavicular_3";
HAnimJoint75.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint76 = createNode("HAnimJoint");
HAnimJoint76.name = "r_tarsometatarsal_3";
HAnimJoint76.DEF = "hanim_r_tarsometatarsal_3";
HAnimJoint76.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint77 = createNode("HAnimJoint");
HAnimJoint77.name = "r_metatarsophalangeal_3";
HAnimJoint77.DEF = "hanim_r_metatarsophalangeal_3";
HAnimJoint77.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint78 = createNode("HAnimJoint");
HAnimJoint78.name = "r_tarsal_proximal_interphalangeal_3";
HAnimJoint78.DEF = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimJoint78.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint79 = createNode("HAnimJoint");
HAnimJoint79.name = "r_tarsal_distal_interphalangeal_3";
HAnimJoint79.DEF = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimJoint79.center = new SFVec3f(new float[0,1,0]);
HAnimJoint78.children = new MFNode();

HAnimJoint78.children[0] = HAnimJoint79;

HAnimJoint77.children = new MFNode();

HAnimJoint77.children[0] = HAnimJoint78;

HAnimJoint76.children = new MFNode();

HAnimJoint76.children[0] = HAnimJoint77;

HAnimJoint75.children = new MFNode();

HAnimJoint75.children[0] = HAnimJoint76;

HAnimJoint65.children[2] = HAnimJoint75;

HAnimJoint64.children = new MFNode();

HAnimJoint64.children[0] = HAnimJoint65;

HAnimJoint HAnimJoint80 = createNode("HAnimJoint");
HAnimJoint80.name = "r_calcaneocuboid";
HAnimJoint80.DEF = "hanim_r_calcaneocuboid";
HAnimJoint80.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint81 = createNode("HAnimJoint");
HAnimJoint81.name = "r_transversetarsal";
HAnimJoint81.DEF = "hanim_r_transversetarsal";
HAnimJoint81.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint82 = createNode("HAnimJoint");
HAnimJoint82.name = "r_tarsometatarsal_4";
HAnimJoint82.DEF = "hanim_r_tarsometatarsal_4";
HAnimJoint82.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint83 = createNode("HAnimJoint");
HAnimJoint83.name = "r_metatarsophalangeal_4";
HAnimJoint83.DEF = "hanim_r_metatarsophalangeal_4";
HAnimJoint83.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint84 = createNode("HAnimJoint");
HAnimJoint84.name = "r_tarsal_proximal_interphalangeal_4";
HAnimJoint84.DEF = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimJoint84.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint85 = createNode("HAnimJoint");
HAnimJoint85.name = "r_tarsal_distal_interphalangeal_4";
HAnimJoint85.DEF = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimJoint85.center = new SFVec3f(new float[0,1,0]);
HAnimJoint84.children = new MFNode();

HAnimJoint84.children[0] = HAnimJoint85;

HAnimJoint83.children = new MFNode();

HAnimJoint83.children[0] = HAnimJoint84;

HAnimJoint82.children = new MFNode();

HAnimJoint82.children[0] = HAnimJoint83;

HAnimJoint81.children = new MFNode();

HAnimJoint81.children[0] = HAnimJoint82;

HAnimJoint HAnimJoint86 = createNode("HAnimJoint");
HAnimJoint86.name = "r_tarsometatarsal_5";
HAnimJoint86.DEF = "hanim_r_tarsometatarsal_5";
HAnimJoint86.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint87 = createNode("HAnimJoint");
HAnimJoint87.name = "r_metatarsophalangeal_5";
HAnimJoint87.DEF = "hanim_r_metatarsophalangeal_5";
HAnimJoint87.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint88 = createNode("HAnimJoint");
HAnimJoint88.name = "r_tarsal_proximal_interphalangeal_5";
HAnimJoint88.DEF = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimJoint88.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint89 = createNode("HAnimJoint");
HAnimJoint89.name = "r_tarsal_distal_interphalangeal_5";
HAnimJoint89.DEF = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimJoint89.center = new SFVec3f(new float[0,1,0]);
HAnimJoint88.children = new MFNode();

HAnimJoint88.children[0] = HAnimJoint89;

HAnimJoint87.children = new MFNode();

HAnimJoint87.children[0] = HAnimJoint88;

HAnimJoint86.children = new MFNode();

HAnimJoint86.children[0] = HAnimJoint87;

HAnimJoint81.children[1] = HAnimJoint86;

HAnimJoint80.children = new MFNode();

HAnimJoint80.children[0] = HAnimJoint81;

HAnimJoint64.children[1] = HAnimJoint80;

HAnimJoint63.children = new MFNode();

HAnimJoint63.children[0] = HAnimJoint64;

HAnimJoint62.children = new MFNode();

HAnimJoint62.children[0] = HAnimJoint63;

HAnimJoint33.children[1] = HAnimJoint62;

HAnimJoint32.children = new MFNode();

HAnimJoint32.children[0] = HAnimJoint33;

HAnimJoint HAnimJoint90 = createNode("HAnimJoint");
HAnimJoint90.name = "vl5";
HAnimJoint90.DEF = "hanim_vl5";
HAnimJoint90.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimJoint HAnimJoint91 = createNode("HAnimJoint");
HAnimJoint91.name = "vl4";
HAnimJoint91.DEF = "hanim_vl4";
HAnimJoint91.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimJoint HAnimJoint92 = createNode("HAnimJoint");
HAnimJoint92.name = "vl3";
HAnimJoint92.DEF = "hanim_vl3";
HAnimJoint92.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimJoint HAnimJoint93 = createNode("HAnimJoint");
HAnimJoint93.name = "vl2";
HAnimJoint93.DEF = "hanim_vl2";
HAnimJoint93.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimJoint HAnimJoint94 = createNode("HAnimJoint");
HAnimJoint94.name = "vl1";
HAnimJoint94.DEF = "hanim_vl1";
HAnimJoint94.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimJoint HAnimJoint95 = createNode("HAnimJoint");
HAnimJoint95.name = "vt12";
HAnimJoint95.DEF = "hanim_vt12";
HAnimJoint95.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimJoint HAnimJoint96 = createNode("HAnimJoint");
HAnimJoint96.name = "vt11";
HAnimJoint96.DEF = "hanim_vt11";
HAnimJoint96.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimJoint HAnimJoint97 = createNode("HAnimJoint");
HAnimJoint97.name = "vt10";
HAnimJoint97.DEF = "hanim_vt10";
HAnimJoint97.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimJoint HAnimJoint98 = createNode("HAnimJoint");
HAnimJoint98.name = "vt9";
HAnimJoint98.DEF = "hanim_vt9";
HAnimJoint98.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimJoint HAnimJoint99 = createNode("HAnimJoint");
HAnimJoint99.name = "vt8";
HAnimJoint99.DEF = "hanim_vt8";
HAnimJoint99.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimJoint HAnimJoint100 = createNode("HAnimJoint");
HAnimJoint100.name = "vt7";
HAnimJoint100.DEF = "hanim_vt7";
HAnimJoint100.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimJoint HAnimJoint101 = createNode("HAnimJoint");
HAnimJoint101.name = "vt6";
HAnimJoint101.DEF = "hanim_vt6";
HAnimJoint101.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimJoint HAnimJoint102 = createNode("HAnimJoint");
HAnimJoint102.name = "vt5";
HAnimJoint102.DEF = "hanim_vt5";
HAnimJoint102.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimJoint HAnimJoint103 = createNode("HAnimJoint");
HAnimJoint103.name = "vt4";
HAnimJoint103.DEF = "hanim_vt4";
HAnimJoint103.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimJoint HAnimJoint104 = createNode("HAnimJoint");
HAnimJoint104.name = "vt3";
HAnimJoint104.DEF = "hanim_vt3";
HAnimJoint104.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimJoint HAnimJoint105 = createNode("HAnimJoint");
HAnimJoint105.name = "vt2";
HAnimJoint105.DEF = "hanim_vt2";
HAnimJoint105.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimJoint HAnimJoint106 = createNode("HAnimJoint");
HAnimJoint106.name = "vt1";
HAnimJoint106.DEF = "hanim_vt1";
HAnimJoint106.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimJoint HAnimJoint107 = createNode("HAnimJoint");
HAnimJoint107.name = "vc7";
HAnimJoint107.DEF = "hanim_vc7";
HAnimJoint107.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimJoint HAnimJoint108 = createNode("HAnimJoint");
HAnimJoint108.name = "vc6";
HAnimJoint108.DEF = "hanim_vc6";
HAnimJoint108.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimJoint HAnimJoint109 = createNode("HAnimJoint");
HAnimJoint109.name = "vc5";
HAnimJoint109.DEF = "hanim_vc5";
HAnimJoint109.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimJoint HAnimJoint110 = createNode("HAnimJoint");
HAnimJoint110.name = "vc4";
HAnimJoint110.DEF = "hanim_vc4";
HAnimJoint110.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimJoint HAnimJoint111 = createNode("HAnimJoint");
HAnimJoint111.name = "vc3";
HAnimJoint111.DEF = "hanim_vc3";
HAnimJoint111.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimJoint HAnimJoint112 = createNode("HAnimJoint");
HAnimJoint112.name = "vc2";
HAnimJoint112.DEF = "hanim_vc2";
HAnimJoint112.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimJoint HAnimJoint113 = createNode("HAnimJoint");
HAnimJoint113.name = "vc1";
HAnimJoint113.DEF = "hanim_vc1";
HAnimJoint113.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimJoint HAnimJoint114 = createNode("HAnimJoint");
HAnimJoint114.name = "skullbase";
HAnimJoint114.DEF = "hanim_skullbase";
HAnimJoint114.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint HAnimJoint115 = createNode("HAnimJoint");
HAnimJoint115.name = "l_eyelid_joint";
HAnimJoint115.DEF = "hanim_l_eyelid_joint";
HAnimJoint115.center = new SFVec3f(new float[0,1,0]);
HAnimJoint114.children = new MFNode();

HAnimJoint114.children[0] = HAnimJoint115;

HAnimJoint HAnimJoint116 = createNode("HAnimJoint");
HAnimJoint116.name = "r_eyelid_joint";
HAnimJoint116.DEF = "hanim_r_eyelid_joint";
HAnimJoint116.center = new SFVec3f(new float[0,1,0]);
HAnimJoint114.children[1] = HAnimJoint116;

HAnimJoint HAnimJoint117 = createNode("HAnimJoint");
HAnimJoint117.name = "l_eyeball_joint";
HAnimJoint117.DEF = "hanim_l_eyeball_joint";
HAnimJoint117.center = new SFVec3f(new float[0,1,0]);
HAnimJoint114.children[2] = HAnimJoint117;

HAnimJoint HAnimJoint118 = createNode("HAnimJoint");
HAnimJoint118.name = "r_eyeball_joint";
HAnimJoint118.DEF = "hanim_r_eyeball_joint";
HAnimJoint118.center = new SFVec3f(new float[0,1,0]);
HAnimJoint114.children[3] = HAnimJoint118;

HAnimJoint HAnimJoint119 = createNode("HAnimJoint");
HAnimJoint119.name = "l_eyebrow_joint";
HAnimJoint119.DEF = "hanim_l_eyebrow_joint";
HAnimJoint119.center = new SFVec3f(new float[0,1,0]);
HAnimJoint114.children[4] = HAnimJoint119;

HAnimJoint HAnimJoint120 = createNode("HAnimJoint");
HAnimJoint120.name = "r_eyebrow_joint";
HAnimJoint120.DEF = "hanim_r_eyebrow_joint";
HAnimJoint120.center = new SFVec3f(new float[0,1,0]);
HAnimJoint114.children[5] = HAnimJoint120;

HAnimJoint HAnimJoint121 = createNode("HAnimJoint");
HAnimJoint121.name = "temporomandibular";
HAnimJoint121.DEF = "hanim_temporomandibular";
HAnimJoint121.center = new SFVec3f(new float[0,1,0]);
HAnimJoint114.children[6] = HAnimJoint121;

HAnimJoint113.children = new MFNode();

HAnimJoint113.children[0] = HAnimJoint114;

HAnimJoint112.children = new MFNode();

HAnimJoint112.children[0] = HAnimJoint113;

HAnimJoint111.children = new MFNode();

HAnimJoint111.children[0] = HAnimJoint112;

HAnimJoint110.children = new MFNode();

HAnimJoint110.children[0] = HAnimJoint111;

HAnimJoint109.children = new MFNode();

HAnimJoint109.children[0] = HAnimJoint110;

HAnimJoint108.children = new MFNode();

HAnimJoint108.children[0] = HAnimJoint109;

HAnimJoint107.children = new MFNode();

HAnimJoint107.children[0] = HAnimJoint108;

HAnimJoint106.children = new MFNode();

HAnimJoint106.children[0] = HAnimJoint107;

HAnimJoint HAnimJoint122 = createNode("HAnimJoint");
HAnimJoint122.name = "l_sternoclavicular";
HAnimJoint122.DEF = "hanim_l_sternoclavicular";
HAnimJoint122.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint HAnimJoint123 = createNode("HAnimJoint");
HAnimJoint123.name = "l_acromioclavicular";
HAnimJoint123.DEF = "hanim_l_acromioclavicular";
HAnimJoint123.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint HAnimJoint124 = createNode("HAnimJoint");
HAnimJoint124.name = "l_shoulder";
HAnimJoint124.DEF = "hanim_l_shoulder";
HAnimJoint124.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint HAnimJoint125 = createNode("HAnimJoint");
HAnimJoint125.name = "l_elbow";
HAnimJoint125.DEF = "hanim_l_elbow";
HAnimJoint125.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint HAnimJoint126 = createNode("HAnimJoint");
HAnimJoint126.name = "l_radiocarpal";
HAnimJoint126.DEF = "hanim_l_radiocarpal";
HAnimJoint126.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint HAnimJoint127 = createNode("HAnimJoint");
HAnimJoint127.name = "l_midcarpal_1";
HAnimJoint127.DEF = "hanim_l_midcarpal_1";
HAnimJoint127.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint128 = createNode("HAnimJoint");
HAnimJoint128.name = "l_carpometacarpal_1";
HAnimJoint128.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint128.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint HAnimJoint129 = createNode("HAnimJoint");
HAnimJoint129.name = "l_metacarpophalangeal_1";
HAnimJoint129.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint129.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint HAnimJoint130 = createNode("HAnimJoint");
HAnimJoint130.name = "l_carpal_interphalangeal_1";
HAnimJoint130.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint130.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint129.children = new MFNode();

HAnimJoint129.children[0] = HAnimJoint130;

HAnimJoint128.children = new MFNode();

HAnimJoint128.children[0] = HAnimJoint129;

HAnimJoint127.children = new MFNode();

HAnimJoint127.children[0] = HAnimJoint128;

HAnimJoint126.children = new MFNode();

HAnimJoint126.children[0] = HAnimJoint127;

HAnimJoint HAnimJoint131 = createNode("HAnimJoint");
HAnimJoint131.name = "l_midcarpal_2";
HAnimJoint131.DEF = "hanim_l_midcarpal_2";
HAnimJoint131.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint132 = createNode("HAnimJoint");
HAnimJoint132.name = "l_carpometacarpal_2";
HAnimJoint132.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint132.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint HAnimJoint133 = createNode("HAnimJoint");
HAnimJoint133.name = "l_metacarpophalangeal_2";
HAnimJoint133.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint133.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint HAnimJoint134 = createNode("HAnimJoint");
HAnimJoint134.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint134.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint134.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint HAnimJoint135 = createNode("HAnimJoint");
HAnimJoint135.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint135.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint135.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint134.children = new MFNode();

HAnimJoint134.children[0] = HAnimJoint135;

HAnimJoint133.children = new MFNode();

HAnimJoint133.children[0] = HAnimJoint134;

HAnimJoint132.children = new MFNode();

HAnimJoint132.children[0] = HAnimJoint133;

HAnimJoint131.children = new MFNode();

HAnimJoint131.children[0] = HAnimJoint132;

HAnimJoint126.children[1] = HAnimJoint131;

HAnimJoint HAnimJoint136 = createNode("HAnimJoint");
HAnimJoint136.name = "l_midcarpal_3";
HAnimJoint136.DEF = "hanim_l_midcarpal_3";
HAnimJoint136.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint137 = createNode("HAnimJoint");
HAnimJoint137.name = "l_carpometacarpal_3";
HAnimJoint137.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint137.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint HAnimJoint138 = createNode("HAnimJoint");
HAnimJoint138.name = "l_metacarpophalangeal_3";
HAnimJoint138.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint138.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint HAnimJoint139 = createNode("HAnimJoint");
HAnimJoint139.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint139.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint139.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint HAnimJoint140 = createNode("HAnimJoint");
HAnimJoint140.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint140.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint140.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint139.children = new MFNode();

HAnimJoint139.children[0] = HAnimJoint140;

HAnimJoint138.children = new MFNode();

HAnimJoint138.children[0] = HAnimJoint139;

HAnimJoint137.children = new MFNode();

HAnimJoint137.children[0] = HAnimJoint138;

HAnimJoint136.children = new MFNode();

HAnimJoint136.children[0] = HAnimJoint137;

HAnimJoint126.children[2] = HAnimJoint136;

HAnimJoint HAnimJoint141 = createNode("HAnimJoint");
HAnimJoint141.name = "l_midcarpal_4_5";
HAnimJoint141.DEF = "hanim_l_midcarpal_4_5";
HAnimJoint141.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint142 = createNode("HAnimJoint");
HAnimJoint142.name = "l_carpometacarpal_4";
HAnimJoint142.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint142.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint HAnimJoint143 = createNode("HAnimJoint");
HAnimJoint143.name = "l_metacarpophalangeal_4";
HAnimJoint143.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint143.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint HAnimJoint144 = createNode("HAnimJoint");
HAnimJoint144.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint144.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint144.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint HAnimJoint145 = createNode("HAnimJoint");
HAnimJoint145.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint145.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint145.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint144.children = new MFNode();

HAnimJoint144.children[0] = HAnimJoint145;

HAnimJoint143.children = new MFNode();

HAnimJoint143.children[0] = HAnimJoint144;

HAnimJoint142.children = new MFNode();

HAnimJoint142.children[0] = HAnimJoint143;

HAnimJoint141.children = new MFNode();

HAnimJoint141.children[0] = HAnimJoint142;

HAnimJoint HAnimJoint146 = createNode("HAnimJoint");
HAnimJoint146.name = "l_carpometacarpal_5";
HAnimJoint146.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint146.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint HAnimJoint147 = createNode("HAnimJoint");
HAnimJoint147.name = "l_metacarpophalangeal_5";
HAnimJoint147.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint147.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint HAnimJoint148 = createNode("HAnimJoint");
HAnimJoint148.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint148.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint148.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint HAnimJoint149 = createNode("HAnimJoint");
HAnimJoint149.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint149.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint149.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint148.children = new MFNode();

HAnimJoint148.children[0] = HAnimJoint149;

HAnimJoint147.children = new MFNode();

HAnimJoint147.children[0] = HAnimJoint148;

HAnimJoint146.children = new MFNode();

HAnimJoint146.children[0] = HAnimJoint147;

HAnimJoint141.children[1] = HAnimJoint146;

HAnimJoint126.children[3] = HAnimJoint141;

HAnimJoint125.children = new MFNode();

HAnimJoint125.children[0] = HAnimJoint126;

HAnimJoint124.children = new MFNode();

HAnimJoint124.children[0] = HAnimJoint125;

HAnimJoint123.children = new MFNode();

HAnimJoint123.children[0] = HAnimJoint124;

HAnimJoint122.children = new MFNode();

HAnimJoint122.children[0] = HAnimJoint123;

HAnimJoint106.children[1] = HAnimJoint122;

HAnimJoint HAnimJoint150 = createNode("HAnimJoint");
HAnimJoint150.name = "r_sternoclavicular";
HAnimJoint150.DEF = "hanim_r_sternoclavicular";
HAnimJoint150.center = new SFVec3f(new float[-0.0694,1.46,-0.033]);
HAnimJoint HAnimJoint151 = createNode("HAnimJoint");
HAnimJoint151.name = "r_acromioclavicular";
HAnimJoint151.DEF = "hanim_r_acromioclavicular";
HAnimJoint151.center = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
HAnimJoint HAnimJoint152 = createNode("HAnimJoint");
HAnimJoint152.name = "r_shoulder";
HAnimJoint152.DEF = "hanim_r_shoulder";
HAnimJoint152.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimJoint HAnimJoint153 = createNode("HAnimJoint");
HAnimJoint153.name = "r_elbow";
HAnimJoint153.DEF = "hanim_r_elbow";
HAnimJoint153.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimJoint HAnimJoint154 = createNode("HAnimJoint");
HAnimJoint154.name = "r_radiocarpal";
HAnimJoint154.DEF = "hanim_r_radiocarpal";
HAnimJoint154.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
HAnimJoint HAnimJoint155 = createNode("HAnimJoint");
HAnimJoint155.name = "r_midcarpal_1";
HAnimJoint155.DEF = "hanim_r_midcarpal_1";
HAnimJoint155.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint156 = createNode("HAnimJoint");
HAnimJoint156.name = "r_carpometacarpal_1";
HAnimJoint156.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint156.center = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
HAnimJoint HAnimJoint157 = createNode("HAnimJoint");
HAnimJoint157.name = "r_metacarpophalangeal_1";
HAnimJoint157.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint157.center = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
HAnimJoint HAnimJoint158 = createNode("HAnimJoint");
HAnimJoint158.name = "r_carpal_interphalangeal_1";
HAnimJoint158.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint158.center = new SFVec3f(new float[-0.1864,0.819,0.0506]);
HAnimJoint157.children = new MFNode();

HAnimJoint157.children[0] = HAnimJoint158;

HAnimJoint156.children = new MFNode();

HAnimJoint156.children[0] = HAnimJoint157;

HAnimJoint155.children = new MFNode();

HAnimJoint155.children[0] = HAnimJoint156;

HAnimJoint154.children = new MFNode();

HAnimJoint154.children[0] = HAnimJoint155;

HAnimJoint HAnimJoint159 = createNode("HAnimJoint");
HAnimJoint159.name = "r_midcarpal_2";
HAnimJoint159.DEF = "hanim_r_midcarpal_2";
HAnimJoint159.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint160 = createNode("HAnimJoint");
HAnimJoint160.name = "r_carpometacarpal_2";
HAnimJoint160.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint160.center = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
HAnimJoint HAnimJoint161 = createNode("HAnimJoint");
HAnimJoint161.name = "r_metacarpophalangeal_2";
HAnimJoint161.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint161.center = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
HAnimJoint HAnimJoint162 = createNode("HAnimJoint");
HAnimJoint162.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint162.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint162.center = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
HAnimJoint HAnimJoint163 = createNode("HAnimJoint");
HAnimJoint163.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint163.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint163.center = new SFVec3f(new float[-0.1945,0.7169,-0.0173]);
HAnimJoint162.children = new MFNode();

HAnimJoint162.children[0] = HAnimJoint163;

HAnimJoint161.children = new MFNode();

HAnimJoint161.children[0] = HAnimJoint162;

HAnimJoint160.children = new MFNode();

HAnimJoint160.children[0] = HAnimJoint161;

HAnimJoint159.children = new MFNode();

HAnimJoint159.children[0] = HAnimJoint160;

HAnimJoint154.children[1] = HAnimJoint159;

HAnimJoint HAnimJoint164 = createNode("HAnimJoint");
HAnimJoint164.name = "r_midcarpal_3";
HAnimJoint164.DEF = "hanim_r_midcarpal_3";
HAnimJoint164.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint165 = createNode("HAnimJoint");
HAnimJoint165.name = "r_carpometacarpal_3";
HAnimJoint165.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint165.center = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
HAnimJoint HAnimJoint166 = createNode("HAnimJoint");
HAnimJoint166.name = "r_metacarpophalangeal_3";
HAnimJoint166.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint166.center = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
HAnimJoint HAnimJoint167 = createNode("HAnimJoint");
HAnimJoint167.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint167.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint167.center = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
HAnimJoint HAnimJoint168 = createNode("HAnimJoint");
HAnimJoint168.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint168.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint168.center = new SFVec3f(new float[-0.1939,0.7042,-0.0432]);
HAnimJoint167.children = new MFNode();

HAnimJoint167.children[0] = HAnimJoint168;

HAnimJoint166.children = new MFNode();

HAnimJoint166.children[0] = HAnimJoint167;

HAnimJoint165.children = new MFNode();

HAnimJoint165.children[0] = HAnimJoint166;

HAnimJoint164.children = new MFNode();

HAnimJoint164.children[0] = HAnimJoint165;

HAnimJoint154.children[2] = HAnimJoint164;

HAnimJoint HAnimJoint169 = createNode("HAnimJoint");
HAnimJoint169.name = "r_midcarpal_4_5";
HAnimJoint169.DEF = "hanim_r_midcarpal_4_5";
HAnimJoint169.center = new SFVec3f(new float[0,1,0]);
HAnimJoint HAnimJoint170 = createNode("HAnimJoint");
HAnimJoint170.name = "r_carpometacarpal_4";
HAnimJoint170.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint170.center = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
HAnimJoint HAnimJoint171 = createNode("HAnimJoint");
HAnimJoint171.name = "r_metacarpophalangeal_4";
HAnimJoint171.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint171.center = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
HAnimJoint HAnimJoint172 = createNode("HAnimJoint");
HAnimJoint172.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint172.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint172.center = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
HAnimJoint HAnimJoint173 = createNode("HAnimJoint");
HAnimJoint173.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint173.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint173.center = new SFVec3f(new float[-0.1908,0.7077,-0.0706]);
HAnimJoint172.children = new MFNode();

HAnimJoint172.children[0] = HAnimJoint173;

HAnimJoint171.children = new MFNode();

HAnimJoint171.children[0] = HAnimJoint172;

HAnimJoint170.children = new MFNode();

HAnimJoint170.children[0] = HAnimJoint171;

HAnimJoint169.children = new MFNode();

HAnimJoint169.children[0] = HAnimJoint170;

HAnimJoint HAnimJoint174 = createNode("HAnimJoint");
HAnimJoint174.name = "r_carpometacarpal_5";
HAnimJoint174.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint174.center = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
HAnimJoint HAnimJoint175 = createNode("HAnimJoint");
HAnimJoint175.name = "r_metacarpophalangeal_5";
HAnimJoint175.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint175.center = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
HAnimJoint HAnimJoint176 = createNode("HAnimJoint");
HAnimJoint176.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint176.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint176.center = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
HAnimJoint HAnimJoint177 = createNode("HAnimJoint");
HAnimJoint177.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint177.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint177.center = new SFVec3f(new float[-0.1908,0.754,-0.096]);
HAnimJoint176.children = new MFNode();

HAnimJoint176.children[0] = HAnimJoint177;

HAnimJoint175.children = new MFNode();

HAnimJoint175.children[0] = HAnimJoint176;

HAnimJoint174.children = new MFNode();

HAnimJoint174.children[0] = HAnimJoint175;

HAnimJoint169.children[1] = HAnimJoint174;

HAnimJoint154.children[3] = HAnimJoint169;

HAnimJoint153.children = new MFNode();

HAnimJoint153.children[0] = HAnimJoint154;

HAnimJoint152.children = new MFNode();

HAnimJoint152.children[0] = HAnimJoint153;

HAnimJoint151.children = new MFNode();

HAnimJoint151.children[0] = HAnimJoint152;

HAnimJoint150.children = new MFNode();

HAnimJoint150.children[0] = HAnimJoint151;

HAnimJoint106.children[2] = HAnimJoint150;

HAnimJoint105.children = new MFNode();

HAnimJoint105.children[0] = HAnimJoint106;

HAnimJoint104.children = new MFNode();

HAnimJoint104.children[0] = HAnimJoint105;

HAnimJoint103.children = new MFNode();

HAnimJoint103.children[0] = HAnimJoint104;

HAnimJoint102.children = new MFNode();

HAnimJoint102.children[0] = HAnimJoint103;

HAnimJoint101.children = new MFNode();

HAnimJoint101.children[0] = HAnimJoint102;

HAnimJoint100.children = new MFNode();

HAnimJoint100.children[0] = HAnimJoint101;

HAnimJoint99.children = new MFNode();

HAnimJoint99.children[0] = HAnimJoint100;

HAnimJoint98.children = new MFNode();

HAnimJoint98.children[0] = HAnimJoint99;

HAnimJoint97.children = new MFNode();

HAnimJoint97.children[0] = HAnimJoint98;

HAnimJoint96.children = new MFNode();

HAnimJoint96.children[0] = HAnimJoint97;

HAnimJoint95.children = new MFNode();

HAnimJoint95.children[0] = HAnimJoint96;

HAnimJoint94.children = new MFNode();

HAnimJoint94.children[0] = HAnimJoint95;

HAnimJoint93.children = new MFNode();

HAnimJoint93.children[0] = HAnimJoint94;

HAnimJoint92.children = new MFNode();

HAnimJoint92.children[0] = HAnimJoint93;

HAnimJoint91.children = new MFNode();

HAnimJoint91.children[0] = HAnimJoint92;

HAnimJoint90.children = new MFNode();

HAnimJoint90.children[0] = HAnimJoint91;

HAnimJoint32.children[1] = HAnimJoint90;

HAnimHumanoid31.joints = new MFNode();

HAnimHumanoid31.joints[0] = HAnimJoint32;

HAnimJoint HAnimJoint178 = createNode("HAnimJoint");
HAnimJoint178.USE = "hanim_humanoid_root";
HAnimHumanoid31.joints[1] = HAnimJoint178;

HAnimJoint HAnimJoint179 = createNode("HAnimJoint");
HAnimJoint179.USE = "hanim_sacroiliac";
HAnimHumanoid31.joints[2] = HAnimJoint179;

HAnimJoint HAnimJoint180 = createNode("HAnimJoint");
HAnimJoint180.USE = "hanim_l_hip";
HAnimHumanoid31.joints[3] = HAnimJoint180;

HAnimJoint HAnimJoint181 = createNode("HAnimJoint");
HAnimJoint181.USE = "hanim_l_knee";
HAnimHumanoid31.joints[4] = HAnimJoint181;

HAnimJoint HAnimJoint182 = createNode("HAnimJoint");
HAnimJoint182.USE = "hanim_l_talocrural";
HAnimHumanoid31.joints[5] = HAnimJoint182;

HAnimJoint HAnimJoint183 = createNode("HAnimJoint");
HAnimJoint183.USE = "hanim_l_talocalcaneonavicular";
HAnimHumanoid31.joints[6] = HAnimJoint183;

HAnimJoint HAnimJoint184 = createNode("HAnimJoint");
HAnimJoint184.USE = "hanim_l_cuneonavicular_1";
HAnimHumanoid31.joints[7] = HAnimJoint184;

HAnimJoint HAnimJoint185 = createNode("HAnimJoint");
HAnimJoint185.USE = "hanim_l_tarsometatarsal_1";
HAnimHumanoid31.joints[8] = HAnimJoint185;

HAnimJoint HAnimJoint186 = createNode("HAnimJoint");
HAnimJoint186.USE = "hanim_l_metatarsophalangeal_1";
HAnimHumanoid31.joints[9] = HAnimJoint186;

HAnimJoint HAnimJoint187 = createNode("HAnimJoint");
HAnimJoint187.USE = "hanim_l_tarsal_interphalangeal_1";
HAnimHumanoid31.joints[10] = HAnimJoint187;

HAnimJoint HAnimJoint188 = createNode("HAnimJoint");
HAnimJoint188.USE = "hanim_l_cuneonavicular_2";
HAnimHumanoid31.joints[11] = HAnimJoint188;

HAnimJoint HAnimJoint189 = createNode("HAnimJoint");
HAnimJoint189.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid31.joints[12] = HAnimJoint189;

HAnimJoint HAnimJoint190 = createNode("HAnimJoint");
HAnimJoint190.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid31.joints[13] = HAnimJoint190;

HAnimJoint HAnimJoint191 = createNode("HAnimJoint");
HAnimJoint191.USE = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimHumanoid31.joints[14] = HAnimJoint191;

HAnimJoint HAnimJoint192 = createNode("HAnimJoint");
HAnimJoint192.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid31.joints[15] = HAnimJoint192;

HAnimJoint HAnimJoint193 = createNode("HAnimJoint");
HAnimJoint193.USE = "hanim_l_cuneonavicular_3";
HAnimHumanoid31.joints[16] = HAnimJoint193;

HAnimJoint HAnimJoint194 = createNode("HAnimJoint");
HAnimJoint194.USE = "hanim_l_tarsometatarsal_3";
HAnimHumanoid31.joints[17] = HAnimJoint194;

HAnimJoint HAnimJoint195 = createNode("HAnimJoint");
HAnimJoint195.USE = "hanim_l_metatarsophalangeal_3";
HAnimHumanoid31.joints[18] = HAnimJoint195;

HAnimJoint HAnimJoint196 = createNode("HAnimJoint");
HAnimJoint196.USE = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimHumanoid31.joints[19] = HAnimJoint196;

HAnimJoint HAnimJoint197 = createNode("HAnimJoint");
HAnimJoint197.USE = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimHumanoid31.joints[20] = HAnimJoint197;

HAnimJoint HAnimJoint198 = createNode("HAnimJoint");
HAnimJoint198.USE = "hanim_l_calcaneocuboid";
HAnimHumanoid31.joints[21] = HAnimJoint198;

HAnimJoint HAnimJoint199 = createNode("HAnimJoint");
HAnimJoint199.USE = "hanim_l_transversetarsal";
HAnimHumanoid31.joints[22] = HAnimJoint199;

HAnimJoint HAnimJoint200 = createNode("HAnimJoint");
HAnimJoint200.USE = "hanim_l_tarsometatarsal_4";
HAnimHumanoid31.joints[23] = HAnimJoint200;

HAnimJoint HAnimJoint201 = createNode("HAnimJoint");
HAnimJoint201.USE = "hanim_l_metatarsophalangeal_4";
HAnimHumanoid31.joints[24] = HAnimJoint201;

HAnimJoint HAnimJoint202 = createNode("HAnimJoint");
HAnimJoint202.USE = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimHumanoid31.joints[25] = HAnimJoint202;

HAnimJoint HAnimJoint203 = createNode("HAnimJoint");
HAnimJoint203.USE = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimHumanoid31.joints[26] = HAnimJoint203;

HAnimJoint HAnimJoint204 = createNode("HAnimJoint");
HAnimJoint204.USE = "hanim_l_tarsometatarsal_5";
HAnimHumanoid31.joints[27] = HAnimJoint204;

HAnimJoint HAnimJoint205 = createNode("HAnimJoint");
HAnimJoint205.USE = "hanim_l_metatarsophalangeal_5";
HAnimHumanoid31.joints[28] = HAnimJoint205;

HAnimJoint HAnimJoint206 = createNode("HAnimJoint");
HAnimJoint206.USE = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimHumanoid31.joints[29] = HAnimJoint206;

HAnimJoint HAnimJoint207 = createNode("HAnimJoint");
HAnimJoint207.USE = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimHumanoid31.joints[30] = HAnimJoint207;

HAnimJoint HAnimJoint208 = createNode("HAnimJoint");
HAnimJoint208.USE = "hanim_r_hip";
HAnimHumanoid31.joints[31] = HAnimJoint208;

HAnimJoint HAnimJoint209 = createNode("HAnimJoint");
HAnimJoint209.USE = "hanim_r_knee";
HAnimHumanoid31.joints[32] = HAnimJoint209;

HAnimJoint HAnimJoint210 = createNode("HAnimJoint");
HAnimJoint210.USE = "hanim_r_talocrural";
HAnimHumanoid31.joints[33] = HAnimJoint210;

HAnimJoint HAnimJoint211 = createNode("HAnimJoint");
HAnimJoint211.USE = "hanim_r_talocalcaneonavicular";
HAnimHumanoid31.joints[34] = HAnimJoint211;

HAnimJoint HAnimJoint212 = createNode("HAnimJoint");
HAnimJoint212.USE = "hanim_r_cuneonavicular_1";
HAnimHumanoid31.joints[35] = HAnimJoint212;

HAnimJoint HAnimJoint213 = createNode("HAnimJoint");
HAnimJoint213.USE = "hanim_r_tarsometatarsal_1";
HAnimHumanoid31.joints[36] = HAnimJoint213;

HAnimJoint HAnimJoint214 = createNode("HAnimJoint");
HAnimJoint214.USE = "hanim_r_metatarsophalangeal_1";
HAnimHumanoid31.joints[37] = HAnimJoint214;

HAnimJoint HAnimJoint215 = createNode("HAnimJoint");
HAnimJoint215.USE = "hanim_r_tarsal_interphalangeal_1";
HAnimHumanoid31.joints[38] = HAnimJoint215;

HAnimJoint HAnimJoint216 = createNode("HAnimJoint");
HAnimJoint216.USE = "hanim_r_cuneonavicular_2";
HAnimHumanoid31.joints[39] = HAnimJoint216;

HAnimJoint HAnimJoint217 = createNode("HAnimJoint");
HAnimJoint217.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid31.joints[40] = HAnimJoint217;

HAnimJoint HAnimJoint218 = createNode("HAnimJoint");
HAnimJoint218.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid31.joints[41] = HAnimJoint218;

HAnimJoint HAnimJoint219 = createNode("HAnimJoint");
HAnimJoint219.USE = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimHumanoid31.joints[42] = HAnimJoint219;

HAnimJoint HAnimJoint220 = createNode("HAnimJoint");
HAnimJoint220.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid31.joints[43] = HAnimJoint220;

HAnimJoint HAnimJoint221 = createNode("HAnimJoint");
HAnimJoint221.USE = "hanim_r_cuneonavicular_3";
HAnimHumanoid31.joints[44] = HAnimJoint221;

HAnimJoint HAnimJoint222 = createNode("HAnimJoint");
HAnimJoint222.USE = "hanim_r_tarsometatarsal_3";
HAnimHumanoid31.joints[45] = HAnimJoint222;

HAnimJoint HAnimJoint223 = createNode("HAnimJoint");
HAnimJoint223.USE = "hanim_r_metatarsophalangeal_3";
HAnimHumanoid31.joints[46] = HAnimJoint223;

HAnimJoint HAnimJoint224 = createNode("HAnimJoint");
HAnimJoint224.USE = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimHumanoid31.joints[47] = HAnimJoint224;

HAnimJoint HAnimJoint225 = createNode("HAnimJoint");
HAnimJoint225.USE = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimHumanoid31.joints[48] = HAnimJoint225;

HAnimJoint HAnimJoint226 = createNode("HAnimJoint");
HAnimJoint226.USE = "hanim_r_calcaneocuboid";
HAnimHumanoid31.joints[49] = HAnimJoint226;

HAnimJoint HAnimJoint227 = createNode("HAnimJoint");
HAnimJoint227.USE = "hanim_r_transversetarsal";
HAnimHumanoid31.joints[50] = HAnimJoint227;

HAnimJoint HAnimJoint228 = createNode("HAnimJoint");
HAnimJoint228.USE = "hanim_r_tarsometatarsal_4";
HAnimHumanoid31.joints[51] = HAnimJoint228;

HAnimJoint HAnimJoint229 = createNode("HAnimJoint");
HAnimJoint229.USE = "hanim_r_metatarsophalangeal_4";
HAnimHumanoid31.joints[52] = HAnimJoint229;

HAnimJoint HAnimJoint230 = createNode("HAnimJoint");
HAnimJoint230.USE = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimHumanoid31.joints[53] = HAnimJoint230;

HAnimJoint HAnimJoint231 = createNode("HAnimJoint");
HAnimJoint231.USE = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimHumanoid31.joints[54] = HAnimJoint231;

HAnimJoint HAnimJoint232 = createNode("HAnimJoint");
HAnimJoint232.USE = "hanim_r_tarsometatarsal_5";
HAnimHumanoid31.joints[55] = HAnimJoint232;

HAnimJoint HAnimJoint233 = createNode("HAnimJoint");
HAnimJoint233.USE = "hanim_r_metatarsophalangeal_5";
HAnimHumanoid31.joints[56] = HAnimJoint233;

HAnimJoint HAnimJoint234 = createNode("HAnimJoint");
HAnimJoint234.USE = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimHumanoid31.joints[57] = HAnimJoint234;

HAnimJoint HAnimJoint235 = createNode("HAnimJoint");
HAnimJoint235.USE = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimHumanoid31.joints[58] = HAnimJoint235;

HAnimJoint HAnimJoint236 = createNode("HAnimJoint");
HAnimJoint236.USE = "hanim_vl5";
HAnimHumanoid31.joints[59] = HAnimJoint236;

HAnimJoint HAnimJoint237 = createNode("HAnimJoint");
HAnimJoint237.USE = "hanim_vl4";
HAnimHumanoid31.joints[60] = HAnimJoint237;

HAnimJoint HAnimJoint238 = createNode("HAnimJoint");
HAnimJoint238.USE = "hanim_vl3";
HAnimHumanoid31.joints[61] = HAnimJoint238;

HAnimJoint HAnimJoint239 = createNode("HAnimJoint");
HAnimJoint239.USE = "hanim_vl2";
HAnimHumanoid31.joints[62] = HAnimJoint239;

HAnimJoint HAnimJoint240 = createNode("HAnimJoint");
HAnimJoint240.USE = "hanim_vl1";
HAnimHumanoid31.joints[63] = HAnimJoint240;

HAnimJoint HAnimJoint241 = createNode("HAnimJoint");
HAnimJoint241.USE = "hanim_vt12";
HAnimHumanoid31.joints[64] = HAnimJoint241;

HAnimJoint HAnimJoint242 = createNode("HAnimJoint");
HAnimJoint242.USE = "hanim_vt11";
HAnimHumanoid31.joints[65] = HAnimJoint242;

HAnimJoint HAnimJoint243 = createNode("HAnimJoint");
HAnimJoint243.USE = "hanim_vt10";
HAnimHumanoid31.joints[66] = HAnimJoint243;

HAnimJoint HAnimJoint244 = createNode("HAnimJoint");
HAnimJoint244.USE = "hanim_vt9";
HAnimHumanoid31.joints[67] = HAnimJoint244;

HAnimJoint HAnimJoint245 = createNode("HAnimJoint");
HAnimJoint245.USE = "hanim_vt8";
HAnimHumanoid31.joints[68] = HAnimJoint245;

HAnimJoint HAnimJoint246 = createNode("HAnimJoint");
HAnimJoint246.USE = "hanim_vt7";
HAnimHumanoid31.joints[69] = HAnimJoint246;

HAnimJoint HAnimJoint247 = createNode("HAnimJoint");
HAnimJoint247.USE = "hanim_vt6";
HAnimHumanoid31.joints[70] = HAnimJoint247;

HAnimJoint HAnimJoint248 = createNode("HAnimJoint");
HAnimJoint248.USE = "hanim_vt5";
HAnimHumanoid31.joints[71] = HAnimJoint248;

HAnimJoint HAnimJoint249 = createNode("HAnimJoint");
HAnimJoint249.USE = "hanim_vt4";
HAnimHumanoid31.joints[72] = HAnimJoint249;

HAnimJoint HAnimJoint250 = createNode("HAnimJoint");
HAnimJoint250.USE = "hanim_vt3";
HAnimHumanoid31.joints[73] = HAnimJoint250;

HAnimJoint HAnimJoint251 = createNode("HAnimJoint");
HAnimJoint251.USE = "hanim_vt2";
HAnimHumanoid31.joints[74] = HAnimJoint251;

HAnimJoint HAnimJoint252 = createNode("HAnimJoint");
HAnimJoint252.USE = "hanim_vt1";
HAnimHumanoid31.joints[75] = HAnimJoint252;

HAnimJoint HAnimJoint253 = createNode("HAnimJoint");
HAnimJoint253.USE = "hanim_vc7";
HAnimHumanoid31.joints[76] = HAnimJoint253;

HAnimJoint HAnimJoint254 = createNode("HAnimJoint");
HAnimJoint254.USE = "hanim_vc6";
HAnimHumanoid31.joints[77] = HAnimJoint254;

HAnimJoint HAnimJoint255 = createNode("HAnimJoint");
HAnimJoint255.USE = "hanim_vc5";
HAnimHumanoid31.joints[78] = HAnimJoint255;

HAnimJoint HAnimJoint256 = createNode("HAnimJoint");
HAnimJoint256.USE = "hanim_vc4";
HAnimHumanoid31.joints[79] = HAnimJoint256;

HAnimJoint HAnimJoint257 = createNode("HAnimJoint");
HAnimJoint257.USE = "hanim_vc3";
HAnimHumanoid31.joints[80] = HAnimJoint257;

HAnimJoint HAnimJoint258 = createNode("HAnimJoint");
HAnimJoint258.USE = "hanim_vc2";
HAnimHumanoid31.joints[81] = HAnimJoint258;

HAnimJoint HAnimJoint259 = createNode("HAnimJoint");
HAnimJoint259.USE = "hanim_vc1";
HAnimHumanoid31.joints[82] = HAnimJoint259;

HAnimJoint HAnimJoint260 = createNode("HAnimJoint");
HAnimJoint260.USE = "hanim_skullbase";
HAnimHumanoid31.joints[83] = HAnimJoint260;

HAnimJoint HAnimJoint261 = createNode("HAnimJoint");
HAnimJoint261.USE = "hanim_l_eyelid_joint";
HAnimHumanoid31.joints[84] = HAnimJoint261;

HAnimJoint HAnimJoint262 = createNode("HAnimJoint");
HAnimJoint262.USE = "hanim_r_eyelid_joint";
HAnimHumanoid31.joints[85] = HAnimJoint262;

HAnimJoint HAnimJoint263 = createNode("HAnimJoint");
HAnimJoint263.USE = "hanim_l_eyeball_joint";
HAnimHumanoid31.joints[86] = HAnimJoint263;

HAnimJoint HAnimJoint264 = createNode("HAnimJoint");
HAnimJoint264.USE = "hanim_r_eyeball_joint";
HAnimHumanoid31.joints[87] = HAnimJoint264;

HAnimJoint HAnimJoint265 = createNode("HAnimJoint");
HAnimJoint265.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid31.joints[88] = HAnimJoint265;

HAnimJoint HAnimJoint266 = createNode("HAnimJoint");
HAnimJoint266.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid31.joints[89] = HAnimJoint266;

HAnimJoint HAnimJoint267 = createNode("HAnimJoint");
HAnimJoint267.USE = "hanim_temporomandibular";
HAnimHumanoid31.joints[90] = HAnimJoint267;

HAnimJoint HAnimJoint268 = createNode("HAnimJoint");
HAnimJoint268.USE = "hanim_l_sternoclavicular";
HAnimHumanoid31.joints[91] = HAnimJoint268;

HAnimJoint HAnimJoint269 = createNode("HAnimJoint");
HAnimJoint269.USE = "hanim_l_acromioclavicular";
HAnimHumanoid31.joints[92] = HAnimJoint269;

HAnimJoint HAnimJoint270 = createNode("HAnimJoint");
HAnimJoint270.USE = "hanim_l_shoulder";
HAnimHumanoid31.joints[93] = HAnimJoint270;

HAnimJoint HAnimJoint271 = createNode("HAnimJoint");
HAnimJoint271.USE = "hanim_l_elbow";
HAnimHumanoid31.joints[94] = HAnimJoint271;

HAnimJoint HAnimJoint272 = createNode("HAnimJoint");
HAnimJoint272.USE = "hanim_l_radiocarpal";
HAnimHumanoid31.joints[95] = HAnimJoint272;

HAnimJoint HAnimJoint273 = createNode("HAnimJoint");
HAnimJoint273.USE = "hanim_l_midcarpal_1";
HAnimHumanoid31.joints[96] = HAnimJoint273;

HAnimJoint HAnimJoint274 = createNode("HAnimJoint");
HAnimJoint274.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid31.joints[97] = HAnimJoint274;

HAnimJoint HAnimJoint275 = createNode("HAnimJoint");
HAnimJoint275.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid31.joints[98] = HAnimJoint275;

HAnimJoint HAnimJoint276 = createNode("HAnimJoint");
HAnimJoint276.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid31.joints[99] = HAnimJoint276;

HAnimJoint HAnimJoint277 = createNode("HAnimJoint");
HAnimJoint277.USE = "hanim_l_midcarpal_2";
HAnimHumanoid31.joints[100] = HAnimJoint277;

HAnimJoint HAnimJoint278 = createNode("HAnimJoint");
HAnimJoint278.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid31.joints[101] = HAnimJoint278;

HAnimJoint HAnimJoint279 = createNode("HAnimJoint");
HAnimJoint279.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid31.joints[102] = HAnimJoint279;

HAnimJoint HAnimJoint280 = createNode("HAnimJoint");
HAnimJoint280.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid31.joints[103] = HAnimJoint280;

HAnimJoint HAnimJoint281 = createNode("HAnimJoint");
HAnimJoint281.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid31.joints[104] = HAnimJoint281;

HAnimJoint HAnimJoint282 = createNode("HAnimJoint");
HAnimJoint282.USE = "hanim_l_midcarpal_3";
HAnimHumanoid31.joints[105] = HAnimJoint282;

HAnimJoint HAnimJoint283 = createNode("HAnimJoint");
HAnimJoint283.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid31.joints[106] = HAnimJoint283;

HAnimJoint HAnimJoint284 = createNode("HAnimJoint");
HAnimJoint284.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid31.joints[107] = HAnimJoint284;

HAnimJoint HAnimJoint285 = createNode("HAnimJoint");
HAnimJoint285.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid31.joints[108] = HAnimJoint285;

HAnimJoint HAnimJoint286 = createNode("HAnimJoint");
HAnimJoint286.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid31.joints[109] = HAnimJoint286;

HAnimJoint HAnimJoint287 = createNode("HAnimJoint");
HAnimJoint287.USE = "hanim_l_midcarpal_4_5";
HAnimHumanoid31.joints[110] = HAnimJoint287;

HAnimJoint HAnimJoint288 = createNode("HAnimJoint");
HAnimJoint288.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid31.joints[111] = HAnimJoint288;

HAnimJoint HAnimJoint289 = createNode("HAnimJoint");
HAnimJoint289.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid31.joints[112] = HAnimJoint289;

HAnimJoint HAnimJoint290 = createNode("HAnimJoint");
HAnimJoint290.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid31.joints[113] = HAnimJoint290;

HAnimJoint HAnimJoint291 = createNode("HAnimJoint");
HAnimJoint291.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid31.joints[114] = HAnimJoint291;

HAnimJoint HAnimJoint292 = createNode("HAnimJoint");
HAnimJoint292.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid31.joints[115] = HAnimJoint292;

HAnimJoint HAnimJoint293 = createNode("HAnimJoint");
HAnimJoint293.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid31.joints[116] = HAnimJoint293;

HAnimJoint HAnimJoint294 = createNode("HAnimJoint");
HAnimJoint294.USE = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimHumanoid31.joints[117] = HAnimJoint294;

HAnimJoint HAnimJoint295 = createNode("HAnimJoint");
HAnimJoint295.USE = "hanim_l_carpal_distal_interphalangeal_5";
HAnimHumanoid31.joints[118] = HAnimJoint295;

HAnimJoint HAnimJoint296 = createNode("HAnimJoint");
HAnimJoint296.USE = "hanim_r_sternoclavicular";
HAnimHumanoid31.joints[119] = HAnimJoint296;

HAnimJoint HAnimJoint297 = createNode("HAnimJoint");
HAnimJoint297.USE = "hanim_r_acromioclavicular";
HAnimHumanoid31.joints[120] = HAnimJoint297;

HAnimJoint HAnimJoint298 = createNode("HAnimJoint");
HAnimJoint298.USE = "hanim_r_shoulder";
HAnimHumanoid31.joints[121] = HAnimJoint298;

HAnimJoint HAnimJoint299 = createNode("HAnimJoint");
HAnimJoint299.USE = "hanim_r_elbow";
HAnimHumanoid31.joints[122] = HAnimJoint299;

HAnimJoint HAnimJoint300 = createNode("HAnimJoint");
HAnimJoint300.USE = "hanim_r_radiocarpal";
HAnimHumanoid31.joints[123] = HAnimJoint300;

HAnimJoint HAnimJoint301 = createNode("HAnimJoint");
HAnimJoint301.USE = "hanim_r_midcarpal_1";
HAnimHumanoid31.joints[124] = HAnimJoint301;

HAnimJoint HAnimJoint302 = createNode("HAnimJoint");
HAnimJoint302.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid31.joints[125] = HAnimJoint302;

HAnimJoint HAnimJoint303 = createNode("HAnimJoint");
HAnimJoint303.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid31.joints[126] = HAnimJoint303;

HAnimJoint HAnimJoint304 = createNode("HAnimJoint");
HAnimJoint304.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid31.joints[127] = HAnimJoint304;

HAnimJoint HAnimJoint305 = createNode("HAnimJoint");
HAnimJoint305.USE = "hanim_r_midcarpal_2";
HAnimHumanoid31.joints[128] = HAnimJoint305;

HAnimJoint HAnimJoint306 = createNode("HAnimJoint");
HAnimJoint306.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid31.joints[129] = HAnimJoint306;

HAnimJoint HAnimJoint307 = createNode("HAnimJoint");
HAnimJoint307.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid31.joints[130] = HAnimJoint307;

HAnimJoint HAnimJoint308 = createNode("HAnimJoint");
HAnimJoint308.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid31.joints[131] = HAnimJoint308;

HAnimJoint HAnimJoint309 = createNode("HAnimJoint");
HAnimJoint309.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid31.joints[132] = HAnimJoint309;

HAnimJoint HAnimJoint310 = createNode("HAnimJoint");
HAnimJoint310.USE = "hanim_r_midcarpal_3";
HAnimHumanoid31.joints[133] = HAnimJoint310;

HAnimJoint HAnimJoint311 = createNode("HAnimJoint");
HAnimJoint311.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid31.joints[134] = HAnimJoint311;

HAnimJoint HAnimJoint312 = createNode("HAnimJoint");
HAnimJoint312.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid31.joints[135] = HAnimJoint312;

HAnimJoint HAnimJoint313 = createNode("HAnimJoint");
HAnimJoint313.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid31.joints[136] = HAnimJoint313;

HAnimJoint HAnimJoint314 = createNode("HAnimJoint");
HAnimJoint314.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid31.joints[137] = HAnimJoint314;

HAnimJoint HAnimJoint315 = createNode("HAnimJoint");
HAnimJoint315.USE = "hanim_r_midcarpal_4_5";
HAnimHumanoid31.joints[138] = HAnimJoint315;

HAnimJoint HAnimJoint316 = createNode("HAnimJoint");
HAnimJoint316.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid31.joints[139] = HAnimJoint316;

HAnimJoint HAnimJoint317 = createNode("HAnimJoint");
HAnimJoint317.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid31.joints[140] = HAnimJoint317;

HAnimJoint HAnimJoint318 = createNode("HAnimJoint");
HAnimJoint318.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid31.joints[141] = HAnimJoint318;

HAnimJoint HAnimJoint319 = createNode("HAnimJoint");
HAnimJoint319.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid31.joints[142] = HAnimJoint319;

HAnimJoint HAnimJoint320 = createNode("HAnimJoint");
HAnimJoint320.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid31.joints[143] = HAnimJoint320;

HAnimJoint HAnimJoint321 = createNode("HAnimJoint");
HAnimJoint321.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid31.joints[144] = HAnimJoint321;

HAnimJoint HAnimJoint322 = createNode("HAnimJoint");
HAnimJoint322.USE = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimHumanoid31.joints[145] = HAnimJoint322;

HAnimJoint HAnimJoint323 = createNode("HAnimJoint");
HAnimJoint323.USE = "hanim_r_carpal_distal_interphalangeal_5";
HAnimHumanoid31.joints[146] = HAnimJoint323;

children[4] = HAnimHumanoid31;

}
