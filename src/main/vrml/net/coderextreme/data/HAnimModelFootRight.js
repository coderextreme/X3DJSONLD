let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "HAnimModelFootRight.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let HAnimHumanoid3 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid3.name = "Humanoid_Right_Foot";
HAnimHumanoid3.DEF = "Humanoid_Right_Foot";
HAnimHumanoid3.version = "2.0";
HAnimHumanoid3.bboxDisplay = False;
HAnimHumanoid3.visible = True;
let HAnimJoint4 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint4.name = "humanoid_root";
HAnimJoint4.DEF = "hanim_HumanoidRoot";
HAnimJoint4.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint4.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint4.bboxDisplay = False;
HAnimJoint4.visible = True;
let HAnimJoint5 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint5.name = "r_talocrural_joint";
HAnimJoint5.DEF = "r_talocrural_joint";
HAnimJoint5.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint5.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint5.bboxDisplay = False;
HAnimJoint5.visible = True;
let HAnimSegment6 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment6.name = "r_talus";
HAnimSegment6.DEF = "r_talus";
HAnimSegment6.bboxDisplay = False;
HAnimSegment6.visible = True;
let Transform7 = browser.currentScene.createNode("Transform");
Transform7.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform7.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform7.bboxDisplay = False;
Transform7.visible = True;
let Shape8 = browser.currentScene.createNode("Shape");
Shape8.DEF = "HAnimJointShape";
Shape8.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape8.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape8.bboxDisplay = False;
Shape8.visible = True;
let Sphere9 = browser.currentScene.createNode("Sphere");
Sphere9.radius = 0.025;
Shape8.geometry = Sphere9;

let Appearance10 = browser.currentScene.createNode("Appearance");
Appearance10.DEF = "HAnimJointAppearance";
let Material11 = browser.currentScene.createNode("Material");
Material11.diffuseColor = new SFColor(new float[0,0,1]);
Appearance10.material = Material11;

Shape8.appearance = Appearance10;

Transform7.children = new MFNode();

Transform7.children[0] = Shape8;

HAnimSegment6.children = new MFNode();

HAnimSegment6.children[0] = Transform7;

let Shape12 = browser.currentScene.createNode("Shape");
Shape12.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape12.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape12.bboxDisplay = False;
Shape12.visible = True;
let Appearance13 = browser.currentScene.createNode("Appearance");
let Material14 = browser.currentScene.createNode("Material");
Material14.emissiveColor = new SFColor(new float[1,1,1]);
Appearance13.material = Material14;

Shape12.appearance = Appearance13;

let IndexedLineSet15 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet15.DEF = "TCtoTCN";
IndexedLineSet15.coordIndex = new MFInt32(new int[0,1]);
let Coordinate16 = browser.currentScene.createNode("Coordinate");
Coordinate16.point = new MFVec3f(new float[0,0,0,0,-0.3,0]);
IndexedLineSet15.coord = Coordinate16;

Shape12.geometry = IndexedLineSet15;

HAnimSegment6.children[1] = Shape12;

let Shape17 = browser.currentScene.createNode("Shape");
Shape17.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape17.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape17.bboxDisplay = False;
Shape17.visible = True;
let Appearance18 = browser.currentScene.createNode("Appearance");
let Material19 = browser.currentScene.createNode("Material");
Material19.emissiveColor = new SFColor(new float[1,1,1]);
Appearance18.material = Material19;

Shape17.appearance = Appearance18;

let IndexedLineSet20 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet20.DEF = "TCtoCC";
IndexedLineSet20.coordIndex = new MFInt32(new int[0,1]);
let Coordinate21 = browser.currentScene.createNode("Coordinate");
Coordinate21.point = new MFVec3f(new float[0,0,0,-0.2,0.3,0]);
IndexedLineSet20.coord = Coordinate21;

Shape17.geometry = IndexedLineSet20;

HAnimSegment6.children[2] = Shape17;

HAnimJoint5.children = new MFNode();

HAnimJoint5.children[0] = HAnimSegment6;

//TCN
let HAnimJoint22 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint22.name = "r_talocalcaneonavicular_joint";
HAnimJoint22.DEF = "r_talocalcaneonavicular_joint";
HAnimJoint22.center = new SFVec3f(new float[0,-0.3,0]);
HAnimJoint22.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint22.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint22.bboxDisplay = False;
HAnimJoint22.visible = True;
let HAnimSegment23 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment23.name = "r_navicular";
HAnimSegment23.DEF = "r_navicular";
HAnimSegment23.bboxDisplay = False;
HAnimSegment23.visible = True;
let Transform24 = browser.currentScene.createNode("Transform");
Transform24.translation = new SFVec3f(new float[0,-0.3,0]);
Transform24.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform24.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform24.bboxDisplay = False;
Transform24.visible = True;
let Shape25 = browser.currentScene.createNode("Shape");
Shape25.USE = "HAnimJointShape";
Transform24.children = new MFNode();

Transform24.children[0] = Shape25;

HAnimSegment23.children = new MFNode();

HAnimSegment23.children[0] = Transform24;

let Shape26 = browser.currentScene.createNode("Shape");
Shape26.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape26.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape26.bboxDisplay = False;
Shape26.visible = True;
let Appearance27 = browser.currentScene.createNode("Appearance");
let Material28 = browser.currentScene.createNode("Material");
Material28.emissiveColor = new SFColor(new float[1,1,1]);
Appearance27.material = Material28;

Shape26.appearance = Appearance27;

let IndexedLineSet29 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet29.DEF = "TCNtoCN1";
IndexedLineSet29.coordIndex = new MFInt32(new int[0,1]);
let Coordinate30 = browser.currentScene.createNode("Coordinate");
Coordinate30.point = new MFVec3f(new float[0,-0.3,0,0.1,-0.45,0]);
IndexedLineSet29.coord = Coordinate30;

Shape26.geometry = IndexedLineSet29;

HAnimSegment23.children[1] = Shape26;

let Shape31 = browser.currentScene.createNode("Shape");
Shape31.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape31.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape31.bboxDisplay = False;
Shape31.visible = True;
let Appearance32 = browser.currentScene.createNode("Appearance");
let Material33 = browser.currentScene.createNode("Material");
Material33.emissiveColor = new SFColor(new float[1,1,1]);
Appearance32.material = Material33;

Shape31.appearance = Appearance32;

let IndexedLineSet34 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet34.DEF = "TCNtoCN2";
IndexedLineSet34.coordIndex = new MFInt32(new int[0,1]);
let Coordinate35 = browser.currentScene.createNode("Coordinate");
Coordinate35.point = new MFVec3f(new float[0,-0.3,0,0,-0.45,0]);
IndexedLineSet34.coord = Coordinate35;

Shape31.geometry = IndexedLineSet34;

HAnimSegment23.children[2] = Shape31;

let Shape36 = browser.currentScene.createNode("Shape");
Shape36.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape36.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape36.bboxDisplay = False;
Shape36.visible = True;
let Appearance37 = browser.currentScene.createNode("Appearance");
let Material38 = browser.currentScene.createNode("Material");
Material38.emissiveColor = new SFColor(new float[1,1,1]);
Appearance37.material = Material38;

Shape36.appearance = Appearance37;

let IndexedLineSet39 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet39.DEF = "TCNtoCN3";
IndexedLineSet39.coordIndex = new MFInt32(new int[0,1]);
let Coordinate40 = browser.currentScene.createNode("Coordinate");
Coordinate40.point = new MFVec3f(new float[0,-0.3,0,-0.1,-0.4,0]);
IndexedLineSet39.coord = Coordinate40;

Shape36.geometry = IndexedLineSet39;

HAnimSegment23.children[3] = Shape36;

HAnimJoint22.children = new MFNode();

HAnimJoint22.children[0] = HAnimSegment23;

//CN1
let HAnimJoint41 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint41.name = "r_cuneonavicular_joint1";
HAnimJoint41.DEF = "r_cuneonavicular_joint1";
HAnimJoint41.center = new SFVec3f(new float[0.1,-0.45,0]);
HAnimJoint41.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint41.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint41.bboxDisplay = False;
HAnimJoint41.visible = True;
let HAnimSegment42 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment42.name = "r_cuneiform1";
HAnimSegment42.DEF = "r_cuneiform1";
HAnimSegment42.bboxDisplay = False;
HAnimSegment42.visible = True;
let Transform43 = browser.currentScene.createNode("Transform");
Transform43.translation = new SFVec3f(new float[0.1,-0.45,0]);
Transform43.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform43.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform43.bboxDisplay = False;
Transform43.visible = True;
let Shape44 = browser.currentScene.createNode("Shape");
Shape44.USE = "HAnimJointShape";
Transform43.children = new MFNode();

Transform43.children[0] = Shape44;

HAnimSegment42.children = new MFNode();

HAnimSegment42.children[0] = Transform43;

let Shape45 = browser.currentScene.createNode("Shape");
Shape45.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape45.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape45.bboxDisplay = False;
Shape45.visible = True;
let Appearance46 = browser.currentScene.createNode("Appearance");
let Material47 = browser.currentScene.createNode("Material");
Material47.emissiveColor = new SFColor(new float[1,1,1]);
Appearance46.material = Material47;

Shape45.appearance = Appearance46;

let IndexedLineSet48 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet48.DEF = "CN1toTMT1";
IndexedLineSet48.coordIndex = new MFInt32(new int[0,1]);
let Coordinate49 = browser.currentScene.createNode("Coordinate");
Coordinate49.point = new MFVec3f(new float[0.1,-0.45,0,0.1,-0.6,0]);
IndexedLineSet48.coord = Coordinate49;

Shape45.geometry = IndexedLineSet48;

HAnimSegment42.children[1] = Shape45;

HAnimJoint41.children = new MFNode();

HAnimJoint41.children[0] = HAnimSegment42;

let HAnimJoint50 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint50.name = "r_tarsometatarsal_joint1";
HAnimJoint50.DEF = "r_tarsometatarsal_joint1";
HAnimJoint50.center = new SFVec3f(new float[0.1,-0.6,0]);
HAnimJoint50.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint50.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint50.bboxDisplay = False;
HAnimJoint50.visible = True;
let HAnimSegment51 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment51.name = "r_metatarsal1";
HAnimSegment51.DEF = "r_metatarsal1";
HAnimSegment51.bboxDisplay = False;
HAnimSegment51.visible = True;
let Transform52 = browser.currentScene.createNode("Transform");
Transform52.translation = new SFVec3f(new float[0.1,-0.6,0]);
Transform52.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform52.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform52.bboxDisplay = False;
Transform52.visible = True;
let Shape53 = browser.currentScene.createNode("Shape");
Shape53.USE = "HAnimJointShape";
Transform52.children = new MFNode();

Transform52.children[0] = Shape53;

HAnimSegment51.children = new MFNode();

HAnimSegment51.children[0] = Transform52;

let Shape54 = browser.currentScene.createNode("Shape");
Shape54.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape54.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape54.bboxDisplay = False;
Shape54.visible = True;
let Appearance55 = browser.currentScene.createNode("Appearance");
let Material56 = browser.currentScene.createNode("Material");
Material56.emissiveColor = new SFColor(new float[1,1,1]);
Appearance55.material = Material56;

Shape54.appearance = Appearance55;

let IndexedLineSet57 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet57.DEF = "TMT1toMTP1";
IndexedLineSet57.coordIndex = new MFInt32(new int[0,1]);
let Coordinate58 = browser.currentScene.createNode("Coordinate");
Coordinate58.point = new MFVec3f(new float[0.1,-0.6,0,0.1,-0.9,0]);
IndexedLineSet57.coord = Coordinate58;

Shape54.geometry = IndexedLineSet57;

HAnimSegment51.children[1] = Shape54;

HAnimJoint50.children = new MFNode();

HAnimJoint50.children[0] = HAnimSegment51;

let HAnimJoint59 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint59.name = "r_metatarsophalangeal_joint1";
HAnimJoint59.DEF = "r_metatarsophalangeal_joint1";
HAnimJoint59.center = new SFVec3f(new float[0.1,-0.9,0]);
HAnimJoint59.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint59.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint59.bboxDisplay = False;
HAnimJoint59.visible = True;
let HAnimSegment60 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment60.name = "r_proximal_phalanges1";
HAnimSegment60.DEF = "r_proximal_phalanges1";
HAnimSegment60.bboxDisplay = False;
HAnimSegment60.visible = True;
let Transform61 = browser.currentScene.createNode("Transform");
Transform61.translation = new SFVec3f(new float[0.1,-0.9,0]);
Transform61.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform61.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform61.bboxDisplay = False;
Transform61.visible = True;
let Shape62 = browser.currentScene.createNode("Shape");
Shape62.USE = "HAnimJointShape";
Transform61.children = new MFNode();

Transform61.children[0] = Shape62;

HAnimSegment60.children = new MFNode();

HAnimSegment60.children[0] = Transform61;

let Shape63 = browser.currentScene.createNode("Shape");
Shape63.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape63.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape63.bboxDisplay = False;
Shape63.visible = True;
let Appearance64 = browser.currentScene.createNode("Appearance");
let Material65 = browser.currentScene.createNode("Material");
Material65.emissiveColor = new SFColor(new float[1,1,1]);
Appearance64.material = Material65;

Shape63.appearance = Appearance64;

let IndexedLineSet66 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet66.DEF = "MTP1toIP1";
IndexedLineSet66.coordIndex = new MFInt32(new int[0,1]);
let Coordinate67 = browser.currentScene.createNode("Coordinate");
Coordinate67.point = new MFVec3f(new float[0.1,-0.9,0,0.1,-1.05,0]);
IndexedLineSet66.coord = Coordinate67;

Shape63.geometry = IndexedLineSet66;

HAnimSegment60.children[1] = Shape63;

HAnimJoint59.children = new MFNode();

HAnimJoint59.children[0] = HAnimSegment60;

let HAnimJoint68 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint68.name = "r_f_Interphalangeal_joint";
HAnimJoint68.DEF = "r_f_Interphalangeal_joint";
HAnimJoint68.center = new SFVec3f(new float[0.1,-1.05,0]);
HAnimJoint68.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint68.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint68.bboxDisplay = False;
HAnimJoint68.visible = True;
let HAnimSegment69 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment69.name = "r_distal_phalanges1";
HAnimSegment69.DEF = "r_distal_phalanges1";
HAnimSegment69.bboxDisplay = False;
HAnimSegment69.visible = True;
let Transform70 = browser.currentScene.createNode("Transform");
Transform70.translation = new SFVec3f(new float[0.1,-1.05,0]);
Transform70.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform70.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform70.bboxDisplay = False;
Transform70.visible = True;
let Shape71 = browser.currentScene.createNode("Shape");
Shape71.USE = "HAnimJointShape";
Transform70.children = new MFNode();

Transform70.children[0] = Shape71;

HAnimSegment69.children = new MFNode();

HAnimSegment69.children[0] = Transform70;

let Shape72 = browser.currentScene.createNode("Shape");
Shape72.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape72.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape72.bboxDisplay = False;
Shape72.visible = True;
let Appearance73 = browser.currentScene.createNode("Appearance");
let Material74 = browser.currentScene.createNode("Material");
Material74.emissiveColor = new SFColor(new float[1,1,1]);
Appearance73.material = Material74;

Shape72.appearance = Appearance73;

let IndexedLineSet75 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet75.DEF = "tiptoe_r_f_Interphalangeal_joint";
IndexedLineSet75.coordIndex = new MFInt32(new int[0,1]);
let Coordinate76 = browser.currentScene.createNode("Coordinate");
Coordinate76.point = new MFVec3f(new float[0.1,-1.05,0,0.1,-1.1,0]);
IndexedLineSet75.coord = Coordinate76;

Shape72.geometry = IndexedLineSet75;

HAnimSegment69.children[1] = Shape72;

HAnimJoint68.children = new MFNode();

HAnimJoint68.children[0] = HAnimSegment69;

HAnimJoint59.children[1] = HAnimJoint68;

HAnimJoint50.children[1] = HAnimJoint59;

HAnimJoint41.children[1] = HAnimJoint50;

HAnimJoint22.children[1] = HAnimJoint41;

//CN2
let HAnimJoint77 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint77.name = "r_cuneonavicular_joint2";
HAnimJoint77.DEF = "r_cuneonavicular_joint2";
HAnimJoint77.center = new SFVec3f(new float[0,-0.45,0]);
HAnimJoint77.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint77.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint77.bboxDisplay = False;
HAnimJoint77.visible = True;
let HAnimSegment78 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment78.name = "r_cuneiform2";
HAnimSegment78.DEF = "r_cuneiform2";
HAnimSegment78.bboxDisplay = False;
HAnimSegment78.visible = True;
let Transform79 = browser.currentScene.createNode("Transform");
Transform79.translation = new SFVec3f(new float[0,-0.45,0]);
Transform79.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform79.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform79.bboxDisplay = False;
Transform79.visible = True;
let Shape80 = browser.currentScene.createNode("Shape");
Shape80.USE = "HAnimJointShape";
Transform79.children = new MFNode();

Transform79.children[0] = Shape80;

HAnimSegment78.children = new MFNode();

HAnimSegment78.children[0] = Transform79;

let Shape81 = browser.currentScene.createNode("Shape");
Shape81.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape81.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape81.bboxDisplay = False;
Shape81.visible = True;
let Appearance82 = browser.currentScene.createNode("Appearance");
let Material83 = browser.currentScene.createNode("Material");
Material83.emissiveColor = new SFColor(new float[1,1,1]);
Appearance82.material = Material83;

Shape81.appearance = Appearance82;

let IndexedLineSet84 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet84.DEF = "CN2toTMT2";
IndexedLineSet84.coordIndex = new MFInt32(new int[0,1]);
let Coordinate85 = browser.currentScene.createNode("Coordinate");
Coordinate85.point = new MFVec3f(new float[0,-0.45,0,-0.05,-0.6,0]);
IndexedLineSet84.coord = Coordinate85;

Shape81.geometry = IndexedLineSet84;

HAnimSegment78.children[1] = Shape81;

HAnimJoint77.children = new MFNode();

HAnimJoint77.children[0] = HAnimSegment78;

let HAnimJoint86 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint86.name = "r_tarsometatarsal_joint2";
HAnimJoint86.DEF = "r_tarsometatarsal_joint2";
HAnimJoint86.center = new SFVec3f(new float[-0.05,-0.6,0]);
HAnimJoint86.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint86.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint86.bboxDisplay = False;
HAnimJoint86.visible = True;
let HAnimSegment87 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment87.name = "r_metatarsal2";
HAnimSegment87.DEF = "r_metatarsal2";
HAnimSegment87.bboxDisplay = False;
HAnimSegment87.visible = True;
let Transform88 = browser.currentScene.createNode("Transform");
Transform88.translation = new SFVec3f(new float[-0.05,-0.6,0]);
Transform88.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform88.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform88.bboxDisplay = False;
Transform88.visible = True;
let Shape89 = browser.currentScene.createNode("Shape");
Shape89.USE = "HAnimJointShape";
Transform88.children = new MFNode();

Transform88.children[0] = Shape89;

HAnimSegment87.children = new MFNode();

HAnimSegment87.children[0] = Transform88;

let Shape90 = browser.currentScene.createNode("Shape");
Shape90.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape90.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape90.bboxDisplay = False;
Shape90.visible = True;
let Appearance91 = browser.currentScene.createNode("Appearance");
let Material92 = browser.currentScene.createNode("Material");
Material92.emissiveColor = new SFColor(new float[1,1,1]);
Appearance91.material = Material92;

Shape90.appearance = Appearance91;

let IndexedLineSet93 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet93.DEF = "TMT2toMTP2";
IndexedLineSet93.coordIndex = new MFInt32(new int[0,1]);
let Coordinate94 = browser.currentScene.createNode("Coordinate");
Coordinate94.point = new MFVec3f(new float[-0.05,-0.6,0,-0.05,-0.9,0]);
IndexedLineSet93.coord = Coordinate94;

Shape90.geometry = IndexedLineSet93;

HAnimSegment87.children[1] = Shape90;

HAnimJoint86.children = new MFNode();

HAnimJoint86.children[0] = HAnimSegment87;

let HAnimJoint95 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint95.name = "r_metatarsophalangeal_joint2";
HAnimJoint95.DEF = "r_metatarsophalangeal_joint2";
HAnimJoint95.center = new SFVec3f(new float[-0.05,-0.9,0]);
HAnimJoint95.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint95.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint95.bboxDisplay = False;
HAnimJoint95.visible = True;
let HAnimSegment96 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment96.name = "r_proximal_phalanges2";
HAnimSegment96.DEF = "r_proximal_phalanges2";
HAnimSegment96.bboxDisplay = False;
HAnimSegment96.visible = True;
let Transform97 = browser.currentScene.createNode("Transform");
Transform97.translation = new SFVec3f(new float[-0.05,-0.9,0]);
Transform97.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform97.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform97.bboxDisplay = False;
Transform97.visible = True;
let Shape98 = browser.currentScene.createNode("Shape");
Shape98.USE = "HAnimJointShape";
Transform97.children = new MFNode();

Transform97.children[0] = Shape98;

HAnimSegment96.children = new MFNode();

HAnimSegment96.children[0] = Transform97;

let Shape99 = browser.currentScene.createNode("Shape");
Shape99.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape99.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape99.bboxDisplay = False;
Shape99.visible = True;
let Appearance100 = browser.currentScene.createNode("Appearance");
let Material101 = browser.currentScene.createNode("Material");
Material101.emissiveColor = new SFColor(new float[1,1,1]);
Appearance100.material = Material101;

Shape99.appearance = Appearance100;

let IndexedLineSet102 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet102.DEF = "MTP2toPIP2";
IndexedLineSet102.coordIndex = new MFInt32(new int[0,1]);
let Coordinate103 = browser.currentScene.createNode("Coordinate");
Coordinate103.point = new MFVec3f(new float[-0.05,-0.9,0,-0.05,-1.05,0]);
IndexedLineSet102.coord = Coordinate103;

Shape99.geometry = IndexedLineSet102;

HAnimSegment96.children[1] = Shape99;

HAnimJoint95.children = new MFNode();

HAnimJoint95.children[0] = HAnimSegment96;

let HAnimJoint104 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint104.name = "r_f_proximal_Interphalangeal_joint2";
HAnimJoint104.DEF = "r_f_proximal_Interphalangeal_joint2";
HAnimJoint104.center = new SFVec3f(new float[-0.05,-1.05,0]);
HAnimJoint104.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint104.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint104.bboxDisplay = False;
HAnimJoint104.visible = True;
let HAnimSegment105 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment105.name = "r_middle_phalanges2";
HAnimSegment105.DEF = "r_middle_phalanges2";
HAnimSegment105.bboxDisplay = False;
HAnimSegment105.visible = True;
let Transform106 = browser.currentScene.createNode("Transform");
Transform106.translation = new SFVec3f(new float[-0.05,-1.05,0]);
Transform106.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform106.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform106.bboxDisplay = False;
Transform106.visible = True;
let Shape107 = browser.currentScene.createNode("Shape");
Shape107.USE = "HAnimJointShape";
Transform106.children = new MFNode();

Transform106.children[0] = Shape107;

HAnimSegment105.children = new MFNode();

HAnimSegment105.children[0] = Transform106;

let Shape108 = browser.currentScene.createNode("Shape");
Shape108.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape108.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape108.bboxDisplay = False;
Shape108.visible = True;
let Appearance109 = browser.currentScene.createNode("Appearance");
let Material110 = browser.currentScene.createNode("Material");
Material110.emissiveColor = new SFColor(new float[1,1,1]);
Appearance109.material = Material110;

Shape108.appearance = Appearance109;

let IndexedLineSet111 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet111.DEF = "PIP2toDIP2";
IndexedLineSet111.coordIndex = new MFInt32(new int[0,1]);
let Coordinate112 = browser.currentScene.createNode("Coordinate");
Coordinate112.point = new MFVec3f(new float[-0.05,-1.05,0,-0.05,-1.12,0]);
IndexedLineSet111.coord = Coordinate112;

Shape108.geometry = IndexedLineSet111;

HAnimSegment105.children[1] = Shape108;

HAnimJoint104.children = new MFNode();

HAnimJoint104.children[0] = HAnimSegment105;

let HAnimJoint113 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint113.name = "r_f_distal_Interphalangeal_joint2";
HAnimJoint113.DEF = "r_f_distal_Interphalangeal_joint2";
HAnimJoint113.center = new SFVec3f(new float[-0.05,-1.12,0]);
HAnimJoint113.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint113.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint113.bboxDisplay = False;
HAnimJoint113.visible = True;
let HAnimSegment114 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment114.name = "r_distal_phalanges2";
HAnimSegment114.DEF = "r_distal_phalanges2";
HAnimSegment114.bboxDisplay = False;
HAnimSegment114.visible = True;
let Transform115 = browser.currentScene.createNode("Transform");
Transform115.translation = new SFVec3f(new float[-0.05,-1.12,0]);
Transform115.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform115.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform115.bboxDisplay = False;
Transform115.visible = True;
let Shape116 = browser.currentScene.createNode("Shape");
Shape116.USE = "HAnimJointShape";
Transform115.children = new MFNode();

Transform115.children[0] = Shape116;

HAnimSegment114.children = new MFNode();

HAnimSegment114.children[0] = Transform115;

let Shape117 = browser.currentScene.createNode("Shape");
Shape117.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape117.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape117.bboxDisplay = False;
Shape117.visible = True;
let Appearance118 = browser.currentScene.createNode("Appearance");
let Material119 = browser.currentScene.createNode("Material");
Material119.emissiveColor = new SFColor(new float[1,1,1]);
Appearance118.material = Material119;

Shape117.appearance = Appearance118;

let IndexedLineSet120 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet120.DEF = "tiptoe_r_f_distal_Interphalangeal_joint2";
IndexedLineSet120.coordIndex = new MFInt32(new int[0,1]);
let Coordinate121 = browser.currentScene.createNode("Coordinate");
Coordinate121.point = new MFVec3f(new float[-0.05,-1.12,0,-0.05,-1.16,0]);
IndexedLineSet120.coord = Coordinate121;

Shape117.geometry = IndexedLineSet120;

HAnimSegment114.children[1] = Shape117;

HAnimJoint113.children = new MFNode();

HAnimJoint113.children[0] = HAnimSegment114;

HAnimJoint104.children[1] = HAnimJoint113;

HAnimJoint95.children[1] = HAnimJoint104;

HAnimJoint86.children[1] = HAnimJoint95;

HAnimJoint77.children[1] = HAnimJoint86;

HAnimJoint22.children[2] = HAnimJoint77;

//CN3
let HAnimJoint122 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint122.name = "r_cuneonavicular_joint3";
HAnimJoint122.DEF = "r_cuneonavicular_joint3";
HAnimJoint122.center = new SFVec3f(new float[-0.1,-0.4,0]);
HAnimJoint122.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint122.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint122.bboxDisplay = False;
HAnimJoint122.visible = True;
let HAnimSegment123 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment123.name = "r_cuneiform3";
HAnimSegment123.DEF = "r_cuneiform3";
HAnimSegment123.bboxDisplay = False;
HAnimSegment123.visible = True;
let Transform124 = browser.currentScene.createNode("Transform");
Transform124.translation = new SFVec3f(new float[-0.1,-0.4,0]);
Transform124.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform124.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform124.bboxDisplay = False;
Transform124.visible = True;
let Shape125 = browser.currentScene.createNode("Shape");
Shape125.USE = "HAnimJointShape";
Transform124.children = new MFNode();

Transform124.children[0] = Shape125;

HAnimSegment123.children = new MFNode();

HAnimSegment123.children[0] = Transform124;

let Shape126 = browser.currentScene.createNode("Shape");
Shape126.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape126.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape126.bboxDisplay = False;
Shape126.visible = True;
let Appearance127 = browser.currentScene.createNode("Appearance");
let Material128 = browser.currentScene.createNode("Material");
Material128.emissiveColor = new SFColor(new float[1,1,1]);
Appearance127.material = Material128;

Shape126.appearance = Appearance127;

let IndexedLineSet129 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet129.DEF = "CN3toTMT3";
IndexedLineSet129.coordIndex = new MFInt32(new int[0,1]);
let Coordinate130 = browser.currentScene.createNode("Coordinate");
Coordinate130.point = new MFVec3f(new float[-0.1,-0.4,0,-0.15,-0.6,0]);
IndexedLineSet129.coord = Coordinate130;

Shape126.geometry = IndexedLineSet129;

HAnimSegment123.children[1] = Shape126;

HAnimJoint122.children = new MFNode();

HAnimJoint122.children[0] = HAnimSegment123;

let HAnimJoint131 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint131.name = "r_tarsometatarsal_joint3";
HAnimJoint131.DEF = "r_tarsometatarsal_joint3";
HAnimJoint131.center = new SFVec3f(new float[-0.15,-0.6,0]);
HAnimJoint131.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint131.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint131.bboxDisplay = False;
HAnimJoint131.visible = True;
let HAnimSegment132 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment132.name = "r_metatarsal3";
HAnimSegment132.DEF = "r_metatarsal3";
HAnimSegment132.bboxDisplay = False;
HAnimSegment132.visible = True;
let Transform133 = browser.currentScene.createNode("Transform");
Transform133.translation = new SFVec3f(new float[-0.15,-0.6,0]);
Transform133.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform133.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform133.bboxDisplay = False;
Transform133.visible = True;
let Shape134 = browser.currentScene.createNode("Shape");
Shape134.USE = "HAnimJointShape";
Transform133.children = new MFNode();

Transform133.children[0] = Shape134;

HAnimSegment132.children = new MFNode();

HAnimSegment132.children[0] = Transform133;

let Shape135 = browser.currentScene.createNode("Shape");
Shape135.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape135.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape135.bboxDisplay = False;
Shape135.visible = True;
let Appearance136 = browser.currentScene.createNode("Appearance");
let Material137 = browser.currentScene.createNode("Material");
Material137.emissiveColor = new SFColor(new float[1,1,1]);
Appearance136.material = Material137;

Shape135.appearance = Appearance136;

let IndexedLineSet138 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet138.DEF = "TMT3toMTP3";
IndexedLineSet138.coordIndex = new MFInt32(new int[0,1]);
let Coordinate139 = browser.currentScene.createNode("Coordinate");
Coordinate139.point = new MFVec3f(new float[-0.15,-0.6,0,-0.15,-0.9,0]);
IndexedLineSet138.coord = Coordinate139;

Shape135.geometry = IndexedLineSet138;

HAnimSegment132.children[1] = Shape135;

HAnimJoint131.children = new MFNode();

HAnimJoint131.children[0] = HAnimSegment132;

let HAnimJoint140 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint140.name = "r_metatarsophalangeal_joint3";
HAnimJoint140.DEF = "r_metatarsophalangeal_joint3";
HAnimJoint140.center = new SFVec3f(new float[-0.15,-0.9,0]);
HAnimJoint140.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint140.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint140.bboxDisplay = False;
HAnimJoint140.visible = True;
let HAnimSegment141 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment141.name = "r_proximal_phalanges3";
HAnimSegment141.DEF = "r_proximal_phalanges3";
HAnimSegment141.bboxDisplay = False;
HAnimSegment141.visible = True;
let Transform142 = browser.currentScene.createNode("Transform");
Transform142.translation = new SFVec3f(new float[-0.15,-0.9,0]);
Transform142.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform142.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform142.bboxDisplay = False;
Transform142.visible = True;
let Shape143 = browser.currentScene.createNode("Shape");
Shape143.USE = "HAnimJointShape";
Transform142.children = new MFNode();

Transform142.children[0] = Shape143;

HAnimSegment141.children = new MFNode();

HAnimSegment141.children[0] = Transform142;

let Shape144 = browser.currentScene.createNode("Shape");
Shape144.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape144.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape144.bboxDisplay = False;
Shape144.visible = True;
let Appearance145 = browser.currentScene.createNode("Appearance");
let Material146 = browser.currentScene.createNode("Material");
Material146.emissiveColor = new SFColor(new float[1,1,1]);
Appearance145.material = Material146;

Shape144.appearance = Appearance145;

let IndexedLineSet147 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet147.DEF = "MTP3toPIP3";
IndexedLineSet147.coordIndex = new MFInt32(new int[0,1]);
let Coordinate148 = browser.currentScene.createNode("Coordinate");
Coordinate148.point = new MFVec3f(new float[-0.15,-0.9,0,-0.15,-1.05,0]);
IndexedLineSet147.coord = Coordinate148;

Shape144.geometry = IndexedLineSet147;

HAnimSegment141.children[1] = Shape144;

HAnimJoint140.children = new MFNode();

HAnimJoint140.children[0] = HAnimSegment141;

let HAnimJoint149 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint149.name = "r_f_proximal_Interphalangeal_joint3";
HAnimJoint149.DEF = "r_f_proximal_Interphalangeal_joint3";
HAnimJoint149.center = new SFVec3f(new float[-0.15,-1.05,0]);
HAnimJoint149.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint149.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint149.bboxDisplay = False;
HAnimJoint149.visible = True;
let HAnimSegment150 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment150.name = "r_middle_phalanges3";
HAnimSegment150.DEF = "r_middle_phalanges3";
HAnimSegment150.bboxDisplay = False;
HAnimSegment150.visible = True;
let Transform151 = browser.currentScene.createNode("Transform");
Transform151.translation = new SFVec3f(new float[-0.15,-1.05,0]);
Transform151.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform151.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform151.bboxDisplay = False;
Transform151.visible = True;
let Shape152 = browser.currentScene.createNode("Shape");
Shape152.USE = "HAnimJointShape";
Transform151.children = new MFNode();

Transform151.children[0] = Shape152;

HAnimSegment150.children = new MFNode();

HAnimSegment150.children[0] = Transform151;

let Shape153 = browser.currentScene.createNode("Shape");
Shape153.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape153.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape153.bboxDisplay = False;
Shape153.visible = True;
let Appearance154 = browser.currentScene.createNode("Appearance");
let Material155 = browser.currentScene.createNode("Material");
Material155.emissiveColor = new SFColor(new float[1,1,1]);
Appearance154.material = Material155;

Shape153.appearance = Appearance154;

let IndexedLineSet156 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet156.DEF = "PIP3toDIP3";
IndexedLineSet156.coordIndex = new MFInt32(new int[0,1]);
let Coordinate157 = browser.currentScene.createNode("Coordinate");
Coordinate157.point = new MFVec3f(new float[-0.15,-1.05,0,-0.15,-1.13,0]);
IndexedLineSet156.coord = Coordinate157;

Shape153.geometry = IndexedLineSet156;

HAnimSegment150.children[1] = Shape153;

HAnimJoint149.children = new MFNode();

HAnimJoint149.children[0] = HAnimSegment150;

let HAnimJoint158 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint158.name = "r_f_distal_Interphalangeal_joint3";
HAnimJoint158.DEF = "r_f_distal_Interphalangeal_joint3";
HAnimJoint158.center = new SFVec3f(new float[-0.15,-1.13,0]);
HAnimJoint158.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint158.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint158.bboxDisplay = False;
HAnimJoint158.visible = True;
let HAnimSegment159 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment159.name = "r_distal_phalanges3";
HAnimSegment159.DEF = "r_distal_phalanges3";
HAnimSegment159.bboxDisplay = False;
HAnimSegment159.visible = True;
let Transform160 = browser.currentScene.createNode("Transform");
Transform160.translation = new SFVec3f(new float[-0.15,-1.13,0]);
Transform160.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform160.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform160.bboxDisplay = False;
Transform160.visible = True;
let Shape161 = browser.currentScene.createNode("Shape");
Shape161.USE = "HAnimJointShape";
Transform160.children = new MFNode();

Transform160.children[0] = Shape161;

HAnimSegment159.children = new MFNode();

HAnimSegment159.children[0] = Transform160;

let Shape162 = browser.currentScene.createNode("Shape");
Shape162.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape162.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape162.bboxDisplay = False;
Shape162.visible = True;
let Appearance163 = browser.currentScene.createNode("Appearance");
let Material164 = browser.currentScene.createNode("Material");
Material164.emissiveColor = new SFColor(new float[1,1,1]);
Appearance163.material = Material164;

Shape162.appearance = Appearance163;

let IndexedLineSet165 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet165.DEF = "tiptoe_r_f_distal_Interphalangeal_joint3";
IndexedLineSet165.coordIndex = new MFInt32(new int[0,1]);
let Coordinate166 = browser.currentScene.createNode("Coordinate");
Coordinate166.point = new MFVec3f(new float[-0.15,-1.13,0,-0.15,-1.16,0]);
IndexedLineSet165.coord = Coordinate166;

Shape162.geometry = IndexedLineSet165;

HAnimSegment159.children[1] = Shape162;

HAnimJoint158.children = new MFNode();

HAnimJoint158.children[0] = HAnimSegment159;

HAnimJoint149.children[1] = HAnimJoint158;

HAnimJoint140.children[1] = HAnimJoint149;

HAnimJoint131.children[1] = HAnimJoint140;

HAnimJoint122.children[1] = HAnimJoint131;

HAnimJoint22.children[3] = HAnimJoint122;

HAnimJoint5.children[1] = HAnimJoint22;

//CC
let HAnimJoint167 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint167.name = "r_calcaneuscuboid_joint";
HAnimJoint167.DEF = "r_calcaneuscuboid_joint";
HAnimJoint167.center = new SFVec3f(new float[-0.2,0.3,0]);
HAnimJoint167.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint167.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint167.bboxDisplay = False;
HAnimJoint167.visible = True;
let HAnimSegment168 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment168.name = "r_calcaneus";
HAnimSegment168.DEF = "r_calcaneus";
HAnimSegment168.bboxDisplay = False;
HAnimSegment168.visible = True;
let Transform169 = browser.currentScene.createNode("Transform");
Transform169.translation = new SFVec3f(new float[-0.2,0.3,0]);
Transform169.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform169.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform169.bboxDisplay = False;
Transform169.visible = True;
let Shape170 = browser.currentScene.createNode("Shape");
Shape170.USE = "HAnimJointShape";
Transform169.children = new MFNode();

Transform169.children[0] = Shape170;

HAnimSegment168.children = new MFNode();

HAnimSegment168.children[0] = Transform169;

let Shape171 = browser.currentScene.createNode("Shape");
Shape171.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape171.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape171.bboxDisplay = False;
Shape171.visible = True;
let Appearance172 = browser.currentScene.createNode("Appearance");
let Material173 = browser.currentScene.createNode("Material");
Material173.emissiveColor = new SFColor(new float[1,1,1]);
Appearance172.material = Material173;

Shape171.appearance = Appearance172;

let IndexedLineSet174 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet174.DEF = "CCtoTT";
IndexedLineSet174.coordIndex = new MFInt32(new int[0,1]);
let Coordinate175 = browser.currentScene.createNode("Coordinate");
Coordinate175.point = new MFVec3f(new float[-0.2,0.3,0,-0.21,-0.3,0]);
IndexedLineSet174.coord = Coordinate175;

Shape171.geometry = IndexedLineSet174;

HAnimSegment168.children[1] = Shape171;

HAnimJoint167.children = new MFNode();

HAnimJoint167.children[0] = HAnimSegment168;

//TT
let HAnimJoint176 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint176.name = "r_transverse_tarsal_joint";
HAnimJoint176.DEF = "r_transverse_tarsal_joint";
HAnimJoint176.center = new SFVec3f(new float[-0.21,-0.3,0]);
HAnimJoint176.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint176.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint176.bboxDisplay = False;
HAnimJoint176.visible = True;
let HAnimSegment177 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment177.name = "r_cuboid";
HAnimSegment177.DEF = "r_cuboid";
HAnimSegment177.bboxDisplay = False;
HAnimSegment177.visible = True;
let Transform178 = browser.currentScene.createNode("Transform");
Transform178.translation = new SFVec3f(new float[-0.21,-0.3,0]);
Transform178.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform178.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform178.bboxDisplay = False;
Transform178.visible = True;
let Shape179 = browser.currentScene.createNode("Shape");
Shape179.USE = "HAnimJointShape";
Transform178.children = new MFNode();

Transform178.children[0] = Shape179;

HAnimSegment177.children = new MFNode();

HAnimSegment177.children[0] = Transform178;

let Shape180 = browser.currentScene.createNode("Shape");
Shape180.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape180.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape180.bboxDisplay = False;
Shape180.visible = True;
let Appearance181 = browser.currentScene.createNode("Appearance");
let Material182 = browser.currentScene.createNode("Material");
Material182.emissiveColor = new SFColor(new float[1,1,1]);
Appearance181.material = Material182;

Shape180.appearance = Appearance181;

let IndexedLineSet183 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet183.DEF = "TTtoTMT4";
IndexedLineSet183.coordIndex = new MFInt32(new int[0,1]);
let Coordinate184 = browser.currentScene.createNode("Coordinate");
Coordinate184.point = new MFVec3f(new float[-0.21,-0.3,0,-0.25,-0.58,0]);
IndexedLineSet183.coord = Coordinate184;

Shape180.geometry = IndexedLineSet183;

HAnimSegment177.children[1] = Shape180;

let Shape185 = browser.currentScene.createNode("Shape");
Shape185.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape185.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape185.bboxDisplay = False;
Shape185.visible = True;
let Appearance186 = browser.currentScene.createNode("Appearance");
let Material187 = browser.currentScene.createNode("Material");
Material187.emissiveColor = new SFColor(new float[1,1,1]);
Appearance186.material = Material187;

Shape185.appearance = Appearance186;

let IndexedLineSet188 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet188.DEF = "TTtoTMT5";
IndexedLineSet188.coordIndex = new MFInt32(new int[0,1]);
let Coordinate189 = browser.currentScene.createNode("Coordinate");
Coordinate189.point = new MFVec3f(new float[-0.21,-0.3,0,-0.33,-0.52,0]);
IndexedLineSet188.coord = Coordinate189;

Shape185.geometry = IndexedLineSet188;

HAnimSegment177.children[2] = Shape185;

HAnimJoint176.children = new MFNode();

HAnimJoint176.children[0] = HAnimSegment177;

//TMT4
let HAnimJoint190 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint190.name = "r_tarsometatarsal_joint4";
HAnimJoint190.DEF = "r_tarsometatarsal_joint4";
HAnimJoint190.center = new SFVec3f(new float[-0.25,-0.58,0]);
HAnimJoint190.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint190.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint190.bboxDisplay = False;
HAnimJoint190.visible = True;
let HAnimSegment191 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment191.name = "r_metatarsal4";
HAnimSegment191.DEF = "r_metatarsal4";
HAnimSegment191.bboxDisplay = False;
HAnimSegment191.visible = True;
let Transform192 = browser.currentScene.createNode("Transform");
Transform192.translation = new SFVec3f(new float[-0.25,-0.58,0]);
Transform192.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform192.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform192.bboxDisplay = False;
Transform192.visible = True;
let Shape193 = browser.currentScene.createNode("Shape");
Shape193.USE = "HAnimJointShape";
Transform192.children = new MFNode();

Transform192.children[0] = Shape193;

HAnimSegment191.children = new MFNode();

HAnimSegment191.children[0] = Transform192;

let Shape194 = browser.currentScene.createNode("Shape");
Shape194.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape194.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape194.bboxDisplay = False;
Shape194.visible = True;
let Appearance195 = browser.currentScene.createNode("Appearance");
let Material196 = browser.currentScene.createNode("Material");
Material196.emissiveColor = new SFColor(new float[1,1,1]);
Appearance195.material = Material196;

Shape194.appearance = Appearance195;

let IndexedLineSet197 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet197.DEF = "TMT4toMTP4";
IndexedLineSet197.coordIndex = new MFInt32(new int[0,1]);
let Coordinate198 = browser.currentScene.createNode("Coordinate");
Coordinate198.point = new MFVec3f(new float[-0.25,-0.58,0,-0.25,-0.87,0]);
IndexedLineSet197.coord = Coordinate198;

Shape194.geometry = IndexedLineSet197;

HAnimSegment191.children[1] = Shape194;

HAnimJoint190.children = new MFNode();

HAnimJoint190.children[0] = HAnimSegment191;

let HAnimJoint199 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint199.name = "r_metatarsophalangeal_joint4";
HAnimJoint199.DEF = "r_metatarsophalangeal_joint4";
HAnimJoint199.center = new SFVec3f(new float[-0.25,-0.87,0]);
HAnimJoint199.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint199.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint199.bboxDisplay = False;
HAnimJoint199.visible = True;
let HAnimSegment200 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment200.name = "r_proximal_phalanges4";
HAnimSegment200.DEF = "r_proximal_phalanges4";
HAnimSegment200.bboxDisplay = False;
HAnimSegment200.visible = True;
let Transform201 = browser.currentScene.createNode("Transform");
Transform201.translation = new SFVec3f(new float[-0.25,-0.87,0]);
Transform201.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform201.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform201.bboxDisplay = False;
Transform201.visible = True;
let Shape202 = browser.currentScene.createNode("Shape");
Shape202.USE = "HAnimJointShape";
Transform201.children = new MFNode();

Transform201.children[0] = Shape202;

HAnimSegment200.children = new MFNode();

HAnimSegment200.children[0] = Transform201;

let Shape203 = browser.currentScene.createNode("Shape");
Shape203.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape203.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape203.bboxDisplay = False;
Shape203.visible = True;
let Appearance204 = browser.currentScene.createNode("Appearance");
let Material205 = browser.currentScene.createNode("Material");
Material205.emissiveColor = new SFColor(new float[1,1,1]);
Appearance204.material = Material205;

Shape203.appearance = Appearance204;

let IndexedLineSet206 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet206.DEF = "MTP4toPIP4";
IndexedLineSet206.coordIndex = new MFInt32(new int[0,1]);
let Coordinate207 = browser.currentScene.createNode("Coordinate");
Coordinate207.point = new MFVec3f(new float[-0.25,-0.87,0,-0.25,-1,0]);
IndexedLineSet206.coord = Coordinate207;

Shape203.geometry = IndexedLineSet206;

HAnimSegment200.children[1] = Shape203;

HAnimJoint199.children = new MFNode();

HAnimJoint199.children[0] = HAnimSegment200;

let HAnimJoint208 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint208.name = "r_f_proximal_Interphalangeal_joint4";
HAnimJoint208.DEF = "r_f_proximal_Interphalangeal_joint4";
HAnimJoint208.center = new SFVec3f(new float[-0.25,-1,0]);
HAnimJoint208.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint208.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint208.bboxDisplay = False;
HAnimJoint208.visible = True;
let HAnimSegment209 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment209.name = "r_middle_phalanges4";
HAnimSegment209.DEF = "r_middle_phalanges4";
HAnimSegment209.bboxDisplay = False;
HAnimSegment209.visible = True;
let Transform210 = browser.currentScene.createNode("Transform");
Transform210.translation = new SFVec3f(new float[-0.25,-1,0]);
Transform210.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform210.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform210.bboxDisplay = False;
Transform210.visible = True;
let Shape211 = browser.currentScene.createNode("Shape");
Shape211.USE = "HAnimJointShape";
Transform210.children = new MFNode();

Transform210.children[0] = Shape211;

HAnimSegment209.children = new MFNode();

HAnimSegment209.children[0] = Transform210;

let Shape212 = browser.currentScene.createNode("Shape");
Shape212.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape212.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape212.bboxDisplay = False;
Shape212.visible = True;
let Appearance213 = browser.currentScene.createNode("Appearance");
let Material214 = browser.currentScene.createNode("Material");
Material214.emissiveColor = new SFColor(new float[1,1,1]);
Appearance213.material = Material214;

Shape212.appearance = Appearance213;

let IndexedLineSet215 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet215.DEF = "PIP4toDIP4";
IndexedLineSet215.coordIndex = new MFInt32(new int[0,1]);
let Coordinate216 = browser.currentScene.createNode("Coordinate");
Coordinate216.point = new MFVec3f(new float[-0.25,-1,0,-0.25,-1.1,0]);
IndexedLineSet215.coord = Coordinate216;

Shape212.geometry = IndexedLineSet215;

HAnimSegment209.children[1] = Shape212;

HAnimJoint208.children = new MFNode();

HAnimJoint208.children[0] = HAnimSegment209;

let HAnimJoint217 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint217.name = "r_f_distal_Interphalangeal_joint4";
HAnimJoint217.DEF = "r_f_distal_Interphalangeal_joint4";
HAnimJoint217.center = new SFVec3f(new float[-0.25,-1.1,0]);
HAnimJoint217.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint217.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint217.bboxDisplay = False;
HAnimJoint217.visible = True;
let HAnimSegment218 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment218.name = "r_distal_phalanges4";
HAnimSegment218.DEF = "r_distal_phalanges4";
HAnimSegment218.bboxDisplay = False;
HAnimSegment218.visible = True;
let Transform219 = browser.currentScene.createNode("Transform");
Transform219.translation = new SFVec3f(new float[-0.25,-1.1,0]);
Transform219.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform219.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform219.bboxDisplay = False;
Transform219.visible = True;
let Shape220 = browser.currentScene.createNode("Shape");
Shape220.USE = "HAnimJointShape";
Transform219.children = new MFNode();

Transform219.children[0] = Shape220;

HAnimSegment218.children = new MFNode();

HAnimSegment218.children[0] = Transform219;

let Shape221 = browser.currentScene.createNode("Shape");
Shape221.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape221.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape221.bboxDisplay = False;
Shape221.visible = True;
let Appearance222 = browser.currentScene.createNode("Appearance");
let Material223 = browser.currentScene.createNode("Material");
Material223.emissiveColor = new SFColor(new float[1,1,1]);
Appearance222.material = Material223;

Shape221.appearance = Appearance222;

let IndexedLineSet224 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet224.DEF = "tiptoe_r_f_distal_Interphalangeal_joint4";
IndexedLineSet224.coordIndex = new MFInt32(new int[0,1]);
let Coordinate225 = browser.currentScene.createNode("Coordinate");
Coordinate225.point = new MFVec3f(new float[-0.25,-1.1,0,-0.25,-1.15,0]);
IndexedLineSet224.coord = Coordinate225;

Shape221.geometry = IndexedLineSet224;

HAnimSegment218.children[1] = Shape221;

HAnimJoint217.children = new MFNode();

HAnimJoint217.children[0] = HAnimSegment218;

HAnimJoint208.children[1] = HAnimJoint217;

HAnimJoint199.children[1] = HAnimJoint208;

HAnimJoint190.children[1] = HAnimJoint199;

HAnimJoint176.children[1] = HAnimJoint190;

//TMT5
let HAnimJoint226 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint226.name = "r_tarsometatarsal_joint5";
HAnimJoint226.DEF = "r_tarsometatarsal_joint5";
HAnimJoint226.center = new SFVec3f(new float[-0.33,-0.52,0]);
HAnimJoint226.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint226.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint226.bboxDisplay = False;
HAnimJoint226.visible = True;
let HAnimSegment227 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment227.name = "r_metatarsal5";
HAnimSegment227.DEF = "r_metatarsal5";
HAnimSegment227.bboxDisplay = False;
HAnimSegment227.visible = True;
let Transform228 = browser.currentScene.createNode("Transform");
Transform228.translation = new SFVec3f(new float[-0.33,-0.52,0]);
Transform228.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform228.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform228.bboxDisplay = False;
Transform228.visible = True;
let Shape229 = browser.currentScene.createNode("Shape");
Shape229.USE = "HAnimJointShape";
Transform228.children = new MFNode();

Transform228.children[0] = Shape229;

HAnimSegment227.children = new MFNode();

HAnimSegment227.children[0] = Transform228;

let Shape230 = browser.currentScene.createNode("Shape");
Shape230.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape230.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape230.bboxDisplay = False;
Shape230.visible = True;
let Appearance231 = browser.currentScene.createNode("Appearance");
let Material232 = browser.currentScene.createNode("Material");
Material232.emissiveColor = new SFColor(new float[1,1,1]);
Appearance231.material = Material232;

Shape230.appearance = Appearance231;

let IndexedLineSet233 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet233.DEF = "TMT5toMTP5";
IndexedLineSet233.coordIndex = new MFInt32(new int[0,1]);
let Coordinate234 = browser.currentScene.createNode("Coordinate");
Coordinate234.point = new MFVec3f(new float[-0.33,-0.52,0,-0.34,-0.8,0]);
IndexedLineSet233.coord = Coordinate234;

Shape230.geometry = IndexedLineSet233;

HAnimSegment227.children[1] = Shape230;

HAnimJoint226.children = new MFNode();

HAnimJoint226.children[0] = HAnimSegment227;

let HAnimJoint235 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint235.name = "r_metatarsophalangeal_joint5";
HAnimJoint235.DEF = "r_metatarsophalangeal_joint5";
HAnimJoint235.center = new SFVec3f(new float[-0.34,-0.8,0]);
HAnimJoint235.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint235.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint235.bboxDisplay = False;
HAnimJoint235.visible = True;
let HAnimSegment236 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment236.name = "r_proximal_phalanges5";
HAnimSegment236.DEF = "r_proximal_phalanges5";
HAnimSegment236.bboxDisplay = False;
HAnimSegment236.visible = True;
let Transform237 = browser.currentScene.createNode("Transform");
Transform237.translation = new SFVec3f(new float[-0.34,-0.8,0]);
Transform237.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform237.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform237.bboxDisplay = False;
Transform237.visible = True;
let Shape238 = browser.currentScene.createNode("Shape");
Shape238.USE = "HAnimJointShape";
Transform237.children = new MFNode();

Transform237.children[0] = Shape238;

HAnimSegment236.children = new MFNode();

HAnimSegment236.children[0] = Transform237;

let Shape239 = browser.currentScene.createNode("Shape");
Shape239.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape239.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape239.bboxDisplay = False;
Shape239.visible = True;
let Appearance240 = browser.currentScene.createNode("Appearance");
let Material241 = browser.currentScene.createNode("Material");
Material241.emissiveColor = new SFColor(new float[1,1,1]);
Appearance240.material = Material241;

Shape239.appearance = Appearance240;

let IndexedLineSet242 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet242.DEF = "MTP5toPIP5";
IndexedLineSet242.coordIndex = new MFInt32(new int[0,1]);
let Coordinate243 = browser.currentScene.createNode("Coordinate");
Coordinate243.point = new MFVec3f(new float[-0.34,-0.8,0,-0.34,-0.95,0]);
IndexedLineSet242.coord = Coordinate243;

Shape239.geometry = IndexedLineSet242;

HAnimSegment236.children[1] = Shape239;

HAnimJoint235.children = new MFNode();

HAnimJoint235.children[0] = HAnimSegment236;

let HAnimJoint244 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint244.name = "r_f_proximal_Interphalangeal_joint5";
HAnimJoint244.DEF = "r_f_proximal_Interphalangeal_joint5";
HAnimJoint244.center = new SFVec3f(new float[-0.34,-0.95,0]);
HAnimJoint244.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint244.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint244.bboxDisplay = False;
HAnimJoint244.visible = True;
let HAnimSegment245 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment245.name = "r_middle_phalanges5";
HAnimSegment245.DEF = "r_middle_phalanges5";
HAnimSegment245.bboxDisplay = False;
HAnimSegment245.visible = True;
let Transform246 = browser.currentScene.createNode("Transform");
Transform246.translation = new SFVec3f(new float[-0.34,-0.95,0]);
Transform246.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform246.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform246.bboxDisplay = False;
Transform246.visible = True;
let Shape247 = browser.currentScene.createNode("Shape");
Shape247.USE = "HAnimJointShape";
Transform246.children = new MFNode();

Transform246.children[0] = Shape247;

HAnimSegment245.children = new MFNode();

HAnimSegment245.children[0] = Transform246;

let Shape248 = browser.currentScene.createNode("Shape");
Shape248.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape248.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape248.bboxDisplay = False;
Shape248.visible = True;
let Appearance249 = browser.currentScene.createNode("Appearance");
let Material250 = browser.currentScene.createNode("Material");
Material250.emissiveColor = new SFColor(new float[1,1,1]);
Appearance249.material = Material250;

Shape248.appearance = Appearance249;

let IndexedLineSet251 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet251.DEF = "PIP5toDIP5";
IndexedLineSet251.coordIndex = new MFInt32(new int[0,1]);
let Coordinate252 = browser.currentScene.createNode("Coordinate");
Coordinate252.point = new MFVec3f(new float[-0.34,-0.95,0,-0.34,-1.05,0]);
IndexedLineSet251.coord = Coordinate252;

Shape248.geometry = IndexedLineSet251;

HAnimSegment245.children[1] = Shape248;

HAnimJoint244.children = new MFNode();

HAnimJoint244.children[0] = HAnimSegment245;

let HAnimJoint253 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint253.name = "r_f_distal_Interphalangeal_joint5";
HAnimJoint253.DEF = "r_f_distal_Interphalangeal_joint5";
HAnimJoint253.center = new SFVec3f(new float[-0.34,-1.05,0]);
HAnimJoint253.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint253.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint253.bboxDisplay = False;
HAnimJoint253.visible = True;
let HAnimSegment254 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment254.name = "r_distal_phalanges5";
HAnimSegment254.DEF = "r_distal_phalanges5";
HAnimSegment254.bboxDisplay = False;
HAnimSegment254.visible = True;
let Transform255 = browser.currentScene.createNode("Transform");
Transform255.translation = new SFVec3f(new float[-0.34,-1.05,0]);
Transform255.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform255.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform255.bboxDisplay = False;
Transform255.visible = True;
let Shape256 = browser.currentScene.createNode("Shape");
Shape256.USE = "HAnimJointShape";
Transform255.children = new MFNode();

Transform255.children[0] = Shape256;

HAnimSegment254.children = new MFNode();

HAnimSegment254.children[0] = Transform255;

let Shape257 = browser.currentScene.createNode("Shape");
Shape257.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape257.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape257.bboxDisplay = False;
Shape257.visible = True;
let Appearance258 = browser.currentScene.createNode("Appearance");
let Material259 = browser.currentScene.createNode("Material");
Material259.emissiveColor = new SFColor(new float[1,1,1]);
Appearance258.material = Material259;

Shape257.appearance = Appearance258;

let IndexedLineSet260 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet260.DEF = "tiptoe_r_f_distal_Interphalangeal_joint5";
IndexedLineSet260.coordIndex = new MFInt32(new int[0,1]);
let Coordinate261 = browser.currentScene.createNode("Coordinate");
Coordinate261.point = new MFVec3f(new float[-0.34,-1.05,0,-0.34,-1.08,0]);
IndexedLineSet260.coord = Coordinate261;

Shape257.geometry = IndexedLineSet260;

HAnimSegment254.children[1] = Shape257;

HAnimJoint253.children = new MFNode();

HAnimJoint253.children[0] = HAnimSegment254;

HAnimJoint244.children[1] = HAnimJoint253;

HAnimJoint235.children[1] = HAnimJoint244;

HAnimJoint226.children[1] = HAnimJoint235;

HAnimJoint176.children[2] = HAnimJoint226;

HAnimJoint167.children[1] = HAnimJoint176;

HAnimJoint5.children[2] = HAnimJoint167;

HAnimJoint4.children = new MFNode();

HAnimJoint4.children[0] = HAnimJoint5;

HAnimHumanoid3.joints = new MFNode();

HAnimHumanoid3.joints[0] = HAnimJoint4;

let HAnimJoint262 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint262.USE = "hanim_HumanoidRoot";
HAnimHumanoid3.joints[1] = HAnimJoint262;

let HAnimJoint263 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint263.USE = "r_talocrural_joint";
HAnimHumanoid3.joints[2] = HAnimJoint263;

let HAnimJoint264 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint264.USE = "r_talocalcaneonavicular_joint";
HAnimHumanoid3.joints[3] = HAnimJoint264;

let HAnimJoint265 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint265.USE = "r_cuneonavicular_joint1";
HAnimHumanoid3.joints[4] = HAnimJoint265;

let HAnimJoint266 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint266.USE = "r_tarsometatarsal_joint1";
HAnimHumanoid3.joints[5] = HAnimJoint266;

let HAnimJoint267 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint267.USE = "r_metatarsophalangeal_joint1";
HAnimHumanoid3.joints[6] = HAnimJoint267;

let HAnimJoint268 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint268.USE = "r_f_Interphalangeal_joint";
HAnimHumanoid3.joints[7] = HAnimJoint268;

let HAnimJoint269 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint269.USE = "r_cuneonavicular_joint2";
HAnimHumanoid3.joints[8] = HAnimJoint269;

let HAnimJoint270 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint270.USE = "r_tarsometatarsal_joint2";
HAnimHumanoid3.joints[9] = HAnimJoint270;

let HAnimJoint271 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint271.USE = "r_metatarsophalangeal_joint2";
HAnimHumanoid3.joints[10] = HAnimJoint271;

let HAnimJoint272 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint272.USE = "r_f_proximal_Interphalangeal_joint2";
HAnimHumanoid3.joints[11] = HAnimJoint272;

let HAnimJoint273 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint273.USE = "r_f_distal_Interphalangeal_joint2";
HAnimHumanoid3.joints[12] = HAnimJoint273;

let HAnimJoint274 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint274.USE = "r_cuneonavicular_joint3";
HAnimHumanoid3.joints[13] = HAnimJoint274;

let HAnimJoint275 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint275.USE = "r_tarsometatarsal_joint3";
HAnimHumanoid3.joints[14] = HAnimJoint275;

let HAnimJoint276 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint276.USE = "r_metatarsophalangeal_joint3";
HAnimHumanoid3.joints[15] = HAnimJoint276;

let HAnimJoint277 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint277.USE = "r_f_proximal_Interphalangeal_joint3";
HAnimHumanoid3.joints[16] = HAnimJoint277;

let HAnimJoint278 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint278.USE = "r_f_distal_Interphalangeal_joint3";
HAnimHumanoid3.joints[17] = HAnimJoint278;

let HAnimJoint279 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint279.USE = "r_calcaneuscuboid_joint";
HAnimHumanoid3.joints[18] = HAnimJoint279;

let HAnimJoint280 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint280.USE = "r_transverse_tarsal_joint";
HAnimHumanoid3.joints[19] = HAnimJoint280;

let HAnimJoint281 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint281.USE = "r_tarsometatarsal_joint4";
HAnimHumanoid3.joints[20] = HAnimJoint281;

let HAnimJoint282 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint282.USE = "r_metatarsophalangeal_joint4";
HAnimHumanoid3.joints[21] = HAnimJoint282;

let HAnimJoint283 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint283.USE = "r_f_proximal_Interphalangeal_joint4";
HAnimHumanoid3.joints[22] = HAnimJoint283;

let HAnimJoint284 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint284.USE = "r_f_distal_Interphalangeal_joint4";
HAnimHumanoid3.joints[23] = HAnimJoint284;

let HAnimJoint285 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint285.USE = "r_tarsometatarsal_joint5";
HAnimHumanoid3.joints[24] = HAnimJoint285;

let HAnimJoint286 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint286.USE = "r_metatarsophalangeal_joint5";
HAnimHumanoid3.joints[25] = HAnimJoint286;

let HAnimJoint287 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint287.USE = "r_f_proximal_Interphalangeal_joint5";
HAnimHumanoid3.joints[26] = HAnimJoint287;

let HAnimJoint288 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint288.USE = "r_f_distal_Interphalangeal_joint5";
HAnimHumanoid3.joints[27] = HAnimJoint288;

let HAnimSegment289 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment289.USE = "r_talus";
HAnimHumanoid3.segments[28] = HAnimSegment289;

let HAnimSegment290 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment290.USE = "r_navicular";
HAnimHumanoid3.segments[29] = HAnimSegment290;

let HAnimSegment291 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment291.USE = "r_cuneiform1";
HAnimHumanoid3.segments[30] = HAnimSegment291;

let HAnimSegment292 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment292.USE = "r_metatarsal1";
HAnimHumanoid3.segments[31] = HAnimSegment292;

let HAnimSegment293 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment293.USE = "r_proximal_phalanges1";
HAnimHumanoid3.segments[32] = HAnimSegment293;

let HAnimSegment294 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment294.USE = "r_distal_phalanges1";
HAnimHumanoid3.segments[33] = HAnimSegment294;

let HAnimSegment295 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment295.USE = "r_cuneiform2";
HAnimHumanoid3.segments[34] = HAnimSegment295;

let HAnimSegment296 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment296.USE = "r_metatarsal2";
HAnimHumanoid3.segments[35] = HAnimSegment296;

let HAnimSegment297 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment297.USE = "r_proximal_phalanges2";
HAnimHumanoid3.segments[36] = HAnimSegment297;

let HAnimSegment298 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment298.USE = "r_middle_phalanges2";
HAnimHumanoid3.segments[37] = HAnimSegment298;

let HAnimSegment299 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment299.USE = "r_distal_phalanges2";
HAnimHumanoid3.segments[38] = HAnimSegment299;

let HAnimSegment300 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment300.USE = "r_cuneiform3";
HAnimHumanoid3.segments[39] = HAnimSegment300;

let HAnimSegment301 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment301.USE = "r_metatarsal3";
HAnimHumanoid3.segments[40] = HAnimSegment301;

let HAnimSegment302 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment302.USE = "r_proximal_phalanges3";
HAnimHumanoid3.segments[41] = HAnimSegment302;

let HAnimSegment303 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment303.USE = "r_middle_phalanges3";
HAnimHumanoid3.segments[42] = HAnimSegment303;

let HAnimSegment304 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment304.USE = "r_distal_phalanges3";
HAnimHumanoid3.segments[43] = HAnimSegment304;

let HAnimSegment305 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment305.USE = "r_calcaneus";
HAnimHumanoid3.segments[44] = HAnimSegment305;

let HAnimSegment306 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment306.USE = "r_cuboid";
HAnimHumanoid3.segments[45] = HAnimSegment306;

let HAnimSegment307 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment307.USE = "r_metatarsal4";
HAnimHumanoid3.segments[46] = HAnimSegment307;

let HAnimSegment308 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment308.USE = "r_proximal_phalanges4";
HAnimHumanoid3.segments[47] = HAnimSegment308;

let HAnimSegment309 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment309.USE = "r_middle_phalanges4";
HAnimHumanoid3.segments[48] = HAnimSegment309;

let HAnimSegment310 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment310.USE = "r_distal_phalanges4";
HAnimHumanoid3.segments[49] = HAnimSegment310;

let HAnimSegment311 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment311.USE = "r_metatarsal5";
HAnimHumanoid3.segments[50] = HAnimSegment311;

let HAnimSegment312 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment312.USE = "r_proximal_phalanges5";
HAnimHumanoid3.segments[51] = HAnimSegment312;

let HAnimSegment313 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment313.USE = "r_middle_phalanges5";
HAnimHumanoid3.segments[52] = HAnimSegment313;

let HAnimSegment314 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment314.USE = "r_distal_phalanges5";
HAnimHumanoid3.segments[53] = HAnimSegment314;

browser.currentScene.children[1] = HAnimHumanoid3;

