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

head = head1;

HAnimHumanoid HAnimHumanoid4 = createNode("HAnimHumanoid");
HAnimHumanoid4.DEF = "HAnim";
HAnimHumanoid4.name = "humanoid";
HAnimJoint HAnimJoint5 = createNode("HAnimJoint");
HAnimJoint5.DEF = "hanim_sacroiliac";
HAnimJoint5.name = "sacroiliac";
HAnimJoint5.center = new SFVec3f(new float[0,0.9,0]);
HAnimJoint HAnimJoint6 = createNode("HAnimJoint");
HAnimJoint6.DEF = "hanim_vt1";
HAnimJoint6.name = "vt1";
HAnimJoint6.center = new SFVec3f(new float[0,1.15,0]);
HAnimSegment HAnimSegment7 = createNode("HAnimSegment");
HAnimSite HAnimSite8 = createNode("HAnimSite");
HAnimSite8.translation = new SFVec3f(new float[0,1.15,0]);
HAnimSite8.rotation = new SFRotation(new float[1,0,0,3.14159]);
Shape Shape9 = createNode("Shape");
Appearance Appearance10 = createNode("Appearance");
Material Material11 = createNode("Material");
Material11.diffuseColor = new SFColor(new float[0.6,0.6,0.6]);
Appearance10.material = Material11;

Shape9.appearance = Appearance10;

Cone Cone12 = createNode("Cone");
Cone12.height = 0.5;
Cone12.bottomRadius = 0.25;
Shape9.geometry = Cone12;

HAnimSite8.children = new MFNode();

HAnimSite8.children[0] = Shape9;

HAnimSegment7.children = new MFNode();

HAnimSegment7.children[0] = HAnimSite8;

HAnimJoint6.children = new MFNode();

HAnimJoint6.children[0] = HAnimSegment7;

HAnimJoint HAnimJoint13 = createNode("HAnimJoint");
HAnimJoint13.DEF = "hanim_skullbase";
HAnimJoint13.name = "skullbase";
HAnimJoint13.center = new SFVec3f(new float[0,1.5,0]);
HAnimSegment HAnimSegment14 = createNode("HAnimSegment");
HAnimSite HAnimSite15 = createNode("HAnimSite");
HAnimSite15.translation = new SFVec3f(new float[0,1.5,0]);
Shape Shape16 = createNode("Shape");
Appearance Appearance17 = createNode("Appearance");
Material Material18 = createNode("Material");
Material18.diffuseColor = new SFColor(new float[0.6,0.6,0.6]);
Appearance17.material = Material18;

Shape16.appearance = Appearance17;

Sphere Sphere19 = createNode("Sphere");
Sphere19.radius = 0.15;
Shape16.geometry = Sphere19;

HAnimSite15.children = new MFNode();

HAnimSite15.children[0] = Shape16;

HAnimSegment14.children = new MFNode();

HAnimSegment14.children[0] = HAnimSite15;

HAnimJoint13.children = new MFNode();

HAnimJoint13.children[0] = HAnimSegment14;

HAnimJoint6.children[1] = HAnimJoint13;

HAnimJoint HAnimJoint20 = createNode("HAnimJoint");
HAnimJoint20.DEF = "hanim_l_shoulder";
HAnimJoint20.name = "l_shoulder";
HAnimJoint20.rotation = new SFRotation(new float[1.00000000000177,0,0,0.0128000259399188]);
HAnimJoint20.center = new SFVec3f(new float[0.25,1.35,0]);
HAnimSegment HAnimSegment21 = createNode("HAnimSegment");
HAnimSite HAnimSite22 = createNode("HAnimSite");
HAnimSite22.translation = new SFVec3f(new float[0.25,1.2,0]);
Shape Shape23 = createNode("Shape");
Appearance Appearance24 = createNode("Appearance");
Material Material25 = createNode("Material");
Material25.diffuseColor = new SFColor(new float[0.6,0.6,0.6]);
Appearance24.material = Material25;

Shape23.appearance = Appearance24;

Cylinder Cylinder26 = createNode("Cylinder");
Cylinder26.height = 0.3;
Cylinder26.radius = 0.04;
Shape23.geometry = Cylinder26;

HAnimSite22.children = new MFNode();

HAnimSite22.children[0] = Shape23;

HAnimSegment21.children = new MFNode();

HAnimSegment21.children[0] = HAnimSite22;

HAnimJoint20.children = new MFNode();

HAnimJoint20.children[0] = HAnimSegment21;

HAnimJoint HAnimJoint27 = createNode("HAnimJoint");
HAnimJoint27.DEF = "hanim_l_elbow";
HAnimJoint27.name = "l_elbow";
HAnimJoint27.rotation = new SFRotation(new float[1,0,0,5.49918533960451]);
HAnimJoint27.center = new SFVec3f(new float[0.25,1.05,0]);
HAnimSegment HAnimSegment28 = createNode("HAnimSegment");
HAnimSite HAnimSite29 = createNode("HAnimSite");
HAnimSite29.translation = new SFVec3f(new float[0.25,0.9,0]);
Shape Shape30 = createNode("Shape");
Appearance Appearance31 = createNode("Appearance");
Material Material32 = createNode("Material");
Material32.diffuseColor = new SFColor(new float[0.6,0.6,0.6]);
Appearance31.material = Material32;

Shape30.appearance = Appearance31;

Cylinder Cylinder33 = createNode("Cylinder");
Cylinder33.height = 0.3;
Cylinder33.radius = 0.04;
Shape30.geometry = Cylinder33;

HAnimSite29.children = new MFNode();

HAnimSite29.children[0] = Shape30;

HAnimSegment28.children = new MFNode();

HAnimSegment28.children[0] = HAnimSite29;

HAnimJoint27.children = new MFNode();

HAnimJoint27.children[0] = HAnimSegment28;

HAnimJoint HAnimJoint34 = createNode("HAnimJoint");
HAnimJoint34.DEF = "hanim_l_wrist";
HAnimJoint34.name = "l_wrist";
HAnimJoint34.center = new SFVec3f(new float[0.25,0.75,0]);
HAnimJoint27.children[1] = HAnimJoint34;

HAnimJoint20.children[1] = HAnimJoint27;

HAnimJoint6.children[2] = HAnimJoint20;

HAnimJoint HAnimJoint35 = createNode("HAnimJoint");
HAnimJoint35.DEF = "hanim_r_shoulder";
HAnimJoint35.name = "r_shoulder";
HAnimJoint35.rotation = new SFRotation(new float[1.0000000000018,0,0,6.27038528123967]);
HAnimJoint35.center = new SFVec3f(new float[-0.25,1.35,0]);
HAnimSegment HAnimSegment36 = createNode("HAnimSegment");
HAnimSite HAnimSite37 = createNode("HAnimSite");
HAnimSite37.translation = new SFVec3f(new float[-0.25,1.2,0]);
Shape Shape38 = createNode("Shape");
Appearance Appearance39 = createNode("Appearance");
Material Material40 = createNode("Material");
Material40.diffuseColor = new SFColor(new float[0.6,0.6,0.6]);
Appearance39.material = Material40;

Shape38.appearance = Appearance39;

Cylinder Cylinder41 = createNode("Cylinder");
Cylinder41.height = 0.3;
Cylinder41.radius = 0.04;
Shape38.geometry = Cylinder41;

HAnimSite37.children = new MFNode();

HAnimSite37.children[0] = Shape38;

HAnimSegment36.children = new MFNode();

HAnimSegment36.children[0] = HAnimSite37;

HAnimJoint35.children = new MFNode();

HAnimJoint35.children[0] = HAnimSegment36;

HAnimJoint HAnimJoint42 = createNode("HAnimJoint");
HAnimJoint42.DEF = "hanim_r_elbow";
HAnimJoint42.name = "r_elbow";
HAnimJoint42.rotation = new SFRotation(new float[1,0,0,5.49918533960451]);
HAnimJoint42.center = new SFVec3f(new float[-0.25,1.05,0]);
HAnimSegment HAnimSegment43 = createNode("HAnimSegment");
HAnimSite HAnimSite44 = createNode("HAnimSite");
HAnimSite44.translation = new SFVec3f(new float[-0.25,0.9,0]);
Shape Shape45 = createNode("Shape");
Appearance Appearance46 = createNode("Appearance");
Material Material47 = createNode("Material");
Material47.diffuseColor = new SFColor(new float[0.6,0.6,0.6]);
Appearance46.material = Material47;

Shape45.appearance = Appearance46;

Cylinder Cylinder48 = createNode("Cylinder");
Cylinder48.height = 0.3;
Cylinder48.radius = 0.04;
Shape45.geometry = Cylinder48;

HAnimSite44.children = new MFNode();

HAnimSite44.children[0] = Shape45;

HAnimSegment43.children = new MFNode();

HAnimSegment43.children[0] = HAnimSite44;

HAnimJoint42.children = new MFNode();

HAnimJoint42.children[0] = HAnimSegment43;

HAnimJoint HAnimJoint49 = createNode("HAnimJoint");
HAnimJoint49.DEF = "hanim_r_wrist";
HAnimJoint49.name = "r_wrist";
HAnimJoint49.center = new SFVec3f(new float[-0.25,0.75,0]);
HAnimJoint42.children[1] = HAnimJoint49;

HAnimJoint35.children[1] = HAnimJoint42;

HAnimJoint6.children[3] = HAnimJoint35;

HAnimJoint5.children = new MFNode();

HAnimJoint5.children[0] = HAnimJoint6;

HAnimJoint HAnimJoint50 = createNode("HAnimJoint");
HAnimJoint50.DEF = "hanim_l_hip";
HAnimJoint50.name = "l_hip";
HAnimJoint50.rotation = new SFRotation(new float[1.00000000000026,0,0,6.26718527475466]);
HAnimJoint50.center = new SFVec3f(new float[0.15,0.9,0]);
HAnimSegment HAnimSegment51 = createNode("HAnimSegment");
HAnimSite HAnimSite52 = createNode("HAnimSite");
HAnimSite52.translation = new SFVec3f(new float[0.15,0.7,0]);
Shape Shape53 = createNode("Shape");
Appearance Appearance54 = createNode("Appearance");
Material Material55 = createNode("Material");
Material55.diffuseColor = new SFColor(new float[0.6,0.6,0.6]);
Appearance54.material = Material55;

Shape53.appearance = Appearance54;

Cylinder Cylinder56 = createNode("Cylinder");
Cylinder56.height = 0.4;
Cylinder56.radius = 0.05;
Shape53.geometry = Cylinder56;

HAnimSite52.children = new MFNode();

HAnimSite52.children[0] = Shape53;

HAnimSegment51.children = new MFNode();

HAnimSegment51.children[0] = HAnimSite52;

HAnimJoint50.children = new MFNode();

HAnimJoint50.children[0] = HAnimSegment51;

HAnimJoint HAnimJoint57 = createNode("HAnimJoint");
HAnimJoint57.DEF = "hanim_l_knee";
HAnimJoint57.name = "l_knee";
HAnimJoint57.rotation = new SFRotation(new float[1,0,0,1.16159992218018]);
HAnimJoint57.center = new SFVec3f(new float[0.15,0.5,0]);
HAnimSegment HAnimSegment58 = createNode("HAnimSegment");
HAnimSite HAnimSite59 = createNode("HAnimSite");
HAnimSite59.translation = new SFVec3f(new float[0.15,0.3,0]);
Shape Shape60 = createNode("Shape");
Appearance Appearance61 = createNode("Appearance");
Material Material62 = createNode("Material");
Material62.diffuseColor = new SFColor(new float[0.6,0.6,0.6]);
Appearance61.material = Material62;

Shape60.appearance = Appearance61;

Cylinder Cylinder63 = createNode("Cylinder");
Cylinder63.height = 0.4;
Cylinder63.radius = 0.05;
Shape60.geometry = Cylinder63;

HAnimSite59.children = new MFNode();

HAnimSite59.children[0] = Shape60;

HAnimSegment58.children = new MFNode();

HAnimSegment58.children[0] = HAnimSite59;

HAnimJoint57.children = new MFNode();

HAnimJoint57.children[0] = HAnimSegment58;

HAnimSegment HAnimSegment64 = createNode("HAnimSegment");
HAnimSite HAnimSite65 = createNode("HAnimSite");
HAnimSite65.translation = new SFVec3f(new float[0.15,0.1,0.05]);
Shape Shape66 = createNode("Shape");
Appearance Appearance67 = createNode("Appearance");
Material Material68 = createNode("Material");
Material68.diffuseColor = new SFColor(new float[0.6,0.6,0.6]);
Appearance67.material = Material68;

Shape66.appearance = Appearance67;

Sphere Sphere69 = createNode("Sphere");
Sphere69.radius = 0.07;
Shape66.geometry = Sphere69;

HAnimSite65.children = new MFNode();

HAnimSite65.children[0] = Shape66;

HAnimSegment64.children = new MFNode();

HAnimSegment64.children[0] = HAnimSite65;

HAnimJoint57.children[1] = HAnimSegment64;

HAnimJoint HAnimJoint70 = createNode("HAnimJoint");
HAnimJoint70.DEF = "hanim_l_ankle";
HAnimJoint70.name = "l_ankle";
HAnimJoint70.center = new SFVec3f(new float[0.15,0.1,0]);
HAnimJoint57.children[2] = HAnimJoint70;

HAnimJoint50.children[1] = HAnimJoint57;

HAnimJoint5.children[1] = HAnimJoint50;

HAnimJoint HAnimJoint71 = createNode("HAnimJoint");
HAnimJoint71.DEF = "hanim_r_hip";
HAnimJoint71.name = "r_hip";
HAnimJoint71.rotation = new SFRotation(new float[1.00000000000025,0,0,0.0160000324249227]);
HAnimJoint71.center = new SFVec3f(new float[-0.15,0.9,0]);
HAnimSegment HAnimSegment72 = createNode("HAnimSegment");
HAnimSite HAnimSite73 = createNode("HAnimSite");
HAnimSite73.translation = new SFVec3f(new float[-0.15,0.7,0]);
Shape Shape74 = createNode("Shape");
Appearance Appearance75 = createNode("Appearance");
Material Material76 = createNode("Material");
Material76.diffuseColor = new SFColor(new float[0.6,0.6,0.6]);
Appearance75.material = Material76;

Shape74.appearance = Appearance75;

Cylinder Cylinder77 = createNode("Cylinder");
Cylinder77.height = 0.4;
Cylinder77.radius = 0.05;
Shape74.geometry = Cylinder77;

HAnimSite73.children = new MFNode();

HAnimSite73.children[0] = Shape74;

HAnimSegment72.children = new MFNode();

HAnimSegment72.children[0] = HAnimSite73;

HAnimJoint71.children = new MFNode();

HAnimJoint71.children[0] = HAnimSegment72;

HAnimJoint HAnimJoint78 = createNode("HAnimJoint");
HAnimJoint78.DEF = "hanim_r_knee";
HAnimJoint78.name = "r_knee";
HAnimJoint78.rotation = new SFRotation(new float[1,0,0,1.16159992218018]);
HAnimJoint78.center = new SFVec3f(new float[-0.15,0.5,0]);
HAnimSegment HAnimSegment79 = createNode("HAnimSegment");
HAnimSite HAnimSite80 = createNode("HAnimSite");
HAnimSite80.translation = new SFVec3f(new float[-0.15,0.3,0]);
Shape Shape81 = createNode("Shape");
Appearance Appearance82 = createNode("Appearance");
Material Material83 = createNode("Material");
Material83.diffuseColor = new SFColor(new float[0.6,0.6,0.6]);
Appearance82.material = Material83;

Shape81.appearance = Appearance82;

Cylinder Cylinder84 = createNode("Cylinder");
Cylinder84.height = 0.4;
Cylinder84.radius = 0.05;
Shape81.geometry = Cylinder84;

HAnimSite80.children = new MFNode();

HAnimSite80.children[0] = Shape81;

HAnimSegment79.children = new MFNode();

HAnimSegment79.children[0] = HAnimSite80;

HAnimJoint78.children = new MFNode();

HAnimJoint78.children[0] = HAnimSegment79;

HAnimSegment HAnimSegment85 = createNode("HAnimSegment");
HAnimSite HAnimSite86 = createNode("HAnimSite");
HAnimSite86.translation = new SFVec3f(new float[-0.15,0.1,0.05]);
Shape Shape87 = createNode("Shape");
Appearance Appearance88 = createNode("Appearance");
Material Material89 = createNode("Material");
Material89.diffuseColor = new SFColor(new float[0.6,0.6,0.6]);
Appearance88.material = Material89;

Shape87.appearance = Appearance88;

Sphere Sphere90 = createNode("Sphere");
Sphere90.radius = 0.07;
Shape87.geometry = Sphere90;

HAnimSite86.children = new MFNode();

HAnimSite86.children[0] = Shape87;

HAnimSegment85.children = new MFNode();

HAnimSegment85.children[0] = HAnimSite86;

HAnimJoint78.children[1] = HAnimSegment85;

HAnimJoint HAnimJoint91 = createNode("HAnimJoint");
HAnimJoint91.DEF = "hanim_r_ankle";
HAnimJoint91.name = "r_ankle";
HAnimJoint91.center = new SFVec3f(new float[-0.15,0.1,0]);
HAnimJoint78.children[2] = HAnimJoint91;

HAnimJoint71.children[1] = HAnimJoint78;

HAnimJoint5.children[2] = HAnimJoint71;

HAnimHumanoid4.joints = new MFNode();

HAnimHumanoid4.joints[0] = HAnimJoint5;

HAnimJoint HAnimJoint92 = createNode("HAnimJoint");
HAnimJoint92.USE = "hanim_sacroiliac";
HAnimHumanoid4.joints[1] = HAnimJoint92;

HAnimJoint HAnimJoint93 = createNode("HAnimJoint");
HAnimJoint93.USE = "hanim_vt1";
HAnimHumanoid4.joints[2] = HAnimJoint93;

HAnimJoint HAnimJoint94 = createNode("HAnimJoint");
HAnimJoint94.USE = "hanim_skullbase";
HAnimHumanoid4.joints[3] = HAnimJoint94;

HAnimJoint HAnimJoint95 = createNode("HAnimJoint");
HAnimJoint95.USE = "hanim_l_shoulder";
HAnimHumanoid4.joints[4] = HAnimJoint95;

HAnimJoint HAnimJoint96 = createNode("HAnimJoint");
HAnimJoint96.USE = "hanim_l_elbow";
HAnimHumanoid4.joints[5] = HAnimJoint96;

HAnimJoint HAnimJoint97 = createNode("HAnimJoint");
HAnimJoint97.USE = "hanim_l_wrist";
HAnimHumanoid4.joints[6] = HAnimJoint97;

HAnimJoint HAnimJoint98 = createNode("HAnimJoint");
HAnimJoint98.USE = "hanim_r_shoulder";
HAnimHumanoid4.joints[7] = HAnimJoint98;

HAnimJoint HAnimJoint99 = createNode("HAnimJoint");
HAnimJoint99.USE = "hanim_r_elbow";
HAnimHumanoid4.joints[8] = HAnimJoint99;

HAnimJoint HAnimJoint100 = createNode("HAnimJoint");
HAnimJoint100.USE = "hanim_r_wrist";
HAnimHumanoid4.joints[9] = HAnimJoint100;

HAnimJoint HAnimJoint101 = createNode("HAnimJoint");
HAnimJoint101.USE = "hanim_l_hip";
HAnimHumanoid4.joints[10] = HAnimJoint101;

HAnimJoint HAnimJoint102 = createNode("HAnimJoint");
HAnimJoint102.USE = "hanim_l_knee";
HAnimHumanoid4.joints[11] = HAnimJoint102;

HAnimJoint HAnimJoint103 = createNode("HAnimJoint");
HAnimJoint103.USE = "hanim_l_ankle";
HAnimHumanoid4.joints[12] = HAnimJoint103;

HAnimJoint HAnimJoint104 = createNode("HAnimJoint");
HAnimJoint104.USE = "hanim_r_hip";
HAnimHumanoid4.joints[13] = HAnimJoint104;

HAnimJoint HAnimJoint105 = createNode("HAnimJoint");
HAnimJoint105.USE = "hanim_r_knee";
HAnimHumanoid4.joints[14] = HAnimJoint105;

HAnimJoint HAnimJoint106 = createNode("HAnimJoint");
HAnimJoint106.USE = "hanim_r_ankle";
HAnimHumanoid4.joints[15] = HAnimJoint106;

children = new MFNode();

children[0] = HAnimHumanoid4;

TimeSensor TimeSensor107 = createNode("TimeSensor");
TimeSensor107.DEF = "Clock";
TimeSensor107.cycleInterval = 2;
TimeSensor107.loop = True;
children[1] = TimeSensor107;

OrientationInterpolator OrientationInterpolator108 = createNode("OrientationInterpolator");
OrientationInterpolator108.DEF = "LHipAnimator";
OrientationInterpolator108.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator108.keyValue = new MFRotation(new float[1,0,0,-0.5,1,0,0,0,1,0,0,0.5,1,0,0,0,1,0,0,-0.5]);
children[2] = OrientationInterpolator108;

OrientationInterpolator OrientationInterpolator109 = createNode("OrientationInterpolator");
OrientationInterpolator109.DEF = "RHipAnimator";
OrientationInterpolator109.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator109.keyValue = new MFRotation(new float[1,0,0,0.5,1,0,0,0,1,0,0,-0.5,1,0,0,0,1,0,0,0.5]);
children[3] = OrientationInterpolator109;

OrientationInterpolator OrientationInterpolator110 = createNode("OrientationInterpolator");
OrientationInterpolator110.DEF = "KneeAnimator";
OrientationInterpolator110.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator110.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,1.2,1,0,0,0,1,0,0,0,1,0,0,0]);
children[4] = OrientationInterpolator110;

OrientationInterpolator OrientationInterpolator111 = createNode("OrientationInterpolator");
OrientationInterpolator111.DEF = "LShoulderAnimator";
OrientationInterpolator111.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator111.keyValue = new MFRotation(new float[1,0,0,0.4,1,0,0,0,1,0,0,-0.4,1,0,0,0,1,0,0,0.4]);
children[5] = OrientationInterpolator111;

OrientationInterpolator OrientationInterpolator112 = createNode("OrientationInterpolator");
OrientationInterpolator112.DEF = "RShoulderAnimator";
OrientationInterpolator112.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator112.keyValue = new MFRotation(new float[1,0,0,-0.4,1,0,0,0,1,0,0,0.4,1,0,0,0,1,0,0,-0.4]);
children[6] = OrientationInterpolator112;

OrientationInterpolator OrientationInterpolator113 = createNode("OrientationInterpolator");
OrientationInterpolator113.DEF = "ElbowAnimator";
OrientationInterpolator113.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator113.keyValue = new MFRotation(new float[1,0,0,-0.3,1,0,0,-0.8,1,0,0,-0.3,1,0,0,-0.3,1,0,0,-0.3]);
children[7] = OrientationInterpolator113;

ROUTE ROUTE114 = createNode("ROUTE");
ROUTE114.fromNode = "Clock";
ROUTE114.fromField = "fraction_changed";
ROUTE114.toNode = "LHipAnimator";
ROUTE114.toField = "set_fraction";
children[8] = ROUTE114;

ROUTE ROUTE115 = createNode("ROUTE");
ROUTE115.fromNode = "LHipAnimator";
ROUTE115.fromField = "value_changed";
ROUTE115.toNode = "hanim_l_hip";
ROUTE115.toField = "set_rotation";
children[9] = ROUTE115;

ROUTE ROUTE116 = createNode("ROUTE");
ROUTE116.fromNode = "Clock";
ROUTE116.fromField = "fraction_changed";
ROUTE116.toNode = "RHipAnimator";
ROUTE116.toField = "set_fraction";
children[10] = ROUTE116;

ROUTE ROUTE117 = createNode("ROUTE");
ROUTE117.fromNode = "RHipAnimator";
ROUTE117.fromField = "value_changed";
ROUTE117.toNode = "hanim_r_hip";
ROUTE117.toField = "set_rotation";
children[11] = ROUTE117;

ROUTE ROUTE118 = createNode("ROUTE");
ROUTE118.fromNode = "Clock";
ROUTE118.fromField = "fraction_changed";
ROUTE118.toNode = "KneeAnimator";
ROUTE118.toField = "set_fraction";
children[12] = ROUTE118;

ROUTE ROUTE119 = createNode("ROUTE");
ROUTE119.fromNode = "KneeAnimator";
ROUTE119.fromField = "value_changed";
ROUTE119.toNode = "hanim_l_knee";
ROUTE119.toField = "set_rotation";
children[13] = ROUTE119;

ROUTE ROUTE120 = createNode("ROUTE");
ROUTE120.fromNode = "KneeAnimator";
ROUTE120.fromField = "value_changed";
ROUTE120.toNode = "hanim_r_knee";
ROUTE120.toField = "set_rotation";
children[14] = ROUTE120;

ROUTE ROUTE121 = createNode("ROUTE");
ROUTE121.fromNode = "Clock";
ROUTE121.fromField = "fraction_changed";
ROUTE121.toNode = "LShoulderAnimator";
ROUTE121.toField = "set_fraction";
children[15] = ROUTE121;

ROUTE ROUTE122 = createNode("ROUTE");
ROUTE122.fromNode = "LShoulderAnimator";
ROUTE122.fromField = "value_changed";
ROUTE122.toNode = "hanim_l_shoulder";
ROUTE122.toField = "set_rotation";
children[16] = ROUTE122;

ROUTE ROUTE123 = createNode("ROUTE");
ROUTE123.fromNode = "Clock";
ROUTE123.fromField = "fraction_changed";
ROUTE123.toNode = "RShoulderAnimator";
ROUTE123.toField = "set_fraction";
children[17] = ROUTE123;

ROUTE ROUTE124 = createNode("ROUTE");
ROUTE124.fromNode = "RShoulderAnimator";
ROUTE124.fromField = "value_changed";
ROUTE124.toNode = "hanim_r_shoulder";
ROUTE124.toField = "set_rotation";
children[18] = ROUTE124;

ROUTE ROUTE125 = createNode("ROUTE");
ROUTE125.fromNode = "Clock";
ROUTE125.fromField = "fraction_changed";
ROUTE125.toNode = "ElbowAnimator";
ROUTE125.toField = "set_fraction";
children[19] = ROUTE125;

ROUTE ROUTE126 = createNode("ROUTE");
ROUTE126.fromNode = "ElbowAnimator";
ROUTE126.fromField = "value_changed";
ROUTE126.toNode = "hanim_l_elbow";
ROUTE126.toField = "set_rotation";
children[20] = ROUTE126;

ROUTE ROUTE127 = createNode("ROUTE");
ROUTE127.fromNode = "ElbowAnimator";
ROUTE127.fromField = "value_changed";
ROUTE127.toNode = "hanim_r_elbow";
ROUTE127.toField = "set_rotation";
children[21] = ROUTE127;

}
