let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.info = new MFString(new java.lang.String["(C) 2000 James Smith - james@vapourtech.com","http://www.vapourtech.com/team/james/boxman.wrl","Blaxxun compatibility by Tu Lam - TuL@seamless-solutions.com"]);
WorldInfo2.title = "BoxMan - A Seamless VRML Human";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let Background3 = browser.currentScene.createNode("Background");
Background3.groundColor = new MFColor(new float[0.6,0.6,0.6]);
Background3.skyColor = new MFColor(new float[0.75,0.75,0.75]);
browser.currentScene.children[1] = Background3;

//H-Anim node prototypes are provided automatically by the X3dToVrml97.xsl translation stylesheet when converting to VRML97 (which didn't include H-Anim)
let HAnimHumanoid4 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid4.name = "Humanoid";
HAnimHumanoid4.DEF = "HUMANOID";
HAnimHumanoid4.info = new MFString(new java.lang.String["authorName=James Smith","authorEmail=james@vapourtech.com","copyright=(C) 2000 James Smith - james@vapourtech.com","humanoidVersion=2.0"]);
HAnimHumanoid4.version = "2.0";
let HAnimJoint5 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint5.name = "HumanoidRoot";
HAnimJoint5.DEF = "hanim_HumanoidRoot";
HAnimJoint5.center = new SFVec3f(new float[0,0.9723,-0.0728]);
HAnimJoint5.skinCoordIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9,10,11]);
HAnimJoint5.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1]);
let HAnimSegment6 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment6.name = "sacrum";
HAnimSegment6.DEF = "hanim_sacrum";
let Transform7 = browser.currentScene.createNode("Transform");
Transform7.translation = new SFVec3f(new float[0,0.9723,-0.0728]);
let Shape8 = browser.currentScene.createNode("Shape");
Shape8.DEF = "SphereYellow";
let Appearance9 = browser.currentScene.createNode("Appearance");
let Material10 = browser.currentScene.createNode("Material");
Material10.diffuseColor = new SFColor(new float[1,1,0]);
Appearance9.material = Material10;

Shape8.appearance = Appearance9;

let Sphere11 = browser.currentScene.createNode("Sphere");
Sphere11.radius = 0.02;
Shape8.geometry = Sphere11;

Transform7.children = new MFNode();

Transform7.children[0] = Shape8;

HAnimSegment6.children = new MFNode();

HAnimSegment6.children[0] = Transform7;

HAnimJoint5.children = new MFNode();

HAnimJoint5.children[0] = HAnimSegment6;

let HAnimJoint12 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint12.name = "l_hip";
HAnimJoint12.DEF = "hanim_l_hip";
HAnimJoint12.center = new SFVec3f(new float[0.0956,0.9364,0]);
HAnimJoint12.skinCoordIndex = new MFInt32(new int[12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43]);
HAnimJoint12.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5]);
let HAnimSegment13 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment13.name = "l_thigh";
HAnimSegment13.DEF = "hanim_l_thigh";
//TODO reconcile z-coordinate mismatch using source anthropometry
let Transform14 = browser.currentScene.createNode("Transform");
Transform14.translation = new SFVec3f(new float[0.0956,0.9346,0]);
let Shape15 = browser.currentScene.createNode("Shape");
Shape15.USE = "SphereYellow";
Transform14.children = new MFNode();

Transform14.children[0] = Shape15;

HAnimSegment13.children = new MFNode();

HAnimSegment13.children[0] = Transform14;

HAnimJoint12.children = new MFNode();

HAnimJoint12.children[0] = HAnimSegment13;

let HAnimJoint16 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint16.name = "l_knee";
HAnimJoint16.DEF = "hanim_l_knee";
HAnimJoint16.center = new SFVec3f(new float[0.0956,0.5095,-0.0036]);
HAnimJoint16.skinCoordIndex = new MFInt32(new int[36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63]);
HAnimJoint16.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
let HAnimSegment17 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment17.name = "l_calf";
HAnimSegment17.DEF = "hanim_l_calf";
let Transform18 = browser.currentScene.createNode("Transform");
Transform18.translation = new SFVec3f(new float[0.0956,0.5095,-0.0036]);
let Shape19 = browser.currentScene.createNode("Shape");
Shape19.USE = "SphereYellow";
Transform18.children = new MFNode();

Transform18.children[0] = Shape19;

HAnimSegment17.children = new MFNode();

HAnimSegment17.children[0] = Transform18;

HAnimJoint16.children = new MFNode();

HAnimJoint16.children[0] = HAnimSegment17;

let HAnimJoint20 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint20.name = "l_ankle";
HAnimJoint20.DEF = "hanim_l_ankle";
HAnimJoint20.center = new SFVec3f(new float[0.0946,0.0762,-0.0261]);
HAnimJoint20.skinCoordIndex = new MFInt32(new int[64,65,66,67,68,69,70,71]);
HAnimJoint20.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
let HAnimSegment21 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment21.name = "l_hindfoot";
HAnimSegment21.DEF = "hanim_l_hindfoot";
let Transform22 = browser.currentScene.createNode("Transform");
Transform22.translation = new SFVec3f(new float[0.0946,0.0762,-0.0261]);
let Shape23 = browser.currentScene.createNode("Shape");
Shape23.USE = "SphereYellow";
Transform22.children = new MFNode();

Transform22.children[0] = Shape23;

HAnimSegment21.children = new MFNode();

HAnimSegment21.children[0] = Transform22;

HAnimJoint20.children = new MFNode();

HAnimJoint20.children[0] = HAnimSegment21;

let HAnimJoint24 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint24.name = "l_midtarsal";
HAnimJoint24.DEF = "hanim_l_midtarsal";
HAnimJoint24.center = new SFVec3f(new float[0.1079,0.0317,0.067]);
HAnimJoint24.skinCoordIndex = new MFInt32(new int[72,73,74,75,76,77,78,79]);
HAnimJoint24.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
let HAnimSegment25 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment25.name = "l_middistal";
HAnimSegment25.DEF = "hanim_l_middistal";
let Transform26 = browser.currentScene.createNode("Transform");
Transform26.translation = new SFVec3f(new float[0.1079,0.0317,0.067]);
let Shape27 = browser.currentScene.createNode("Shape");
Shape27.USE = "SphereYellow";
Transform26.children = new MFNode();

Transform26.children[0] = Shape27;

HAnimSegment25.children = new MFNode();

HAnimSegment25.children[0] = Transform26;

let HAnimSite28 = browser.currentScene.createNode("HAnimSite");
HAnimSite28.name = "l_middle_distal_tip";
HAnimSite28.DEF = "hanim_l_middle_distal_tip";
HAnimSite28.translation = new SFVec3f(new float[0.095,0.0005,0.1924]);
HAnimSegment25.children[1] = HAnimSite28;

let Transform29 = browser.currentScene.createNode("Transform");
Transform29.translation = new SFVec3f(new float[0.095,0.0005,0.1924]);
let Shape30 = browser.currentScene.createNode("Shape");
Shape30.DEF = "SphereRed";
let Appearance31 = browser.currentScene.createNode("Appearance");
let Material32 = browser.currentScene.createNode("Material");
Material32.diffuseColor = new SFColor(new float[1,0,0]);
Appearance31.material = Material32;

Shape30.appearance = Appearance31;

let Sphere33 = browser.currentScene.createNode("Sphere");
Sphere33.radius = 0.02;
Shape30.geometry = Sphere33;

Transform29.children = new MFNode();

Transform29.children[0] = Shape30;

HAnimSegment25.children[2] = Transform29;

HAnimJoint24.children = new MFNode();

HAnimJoint24.children[0] = HAnimSegment25;

HAnimJoint20.children[1] = HAnimJoint24;

HAnimJoint16.children[1] = HAnimJoint20;

HAnimJoint12.children[1] = HAnimJoint16;

HAnimJoint5.children[1] = HAnimJoint12;

let HAnimJoint34 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint34.name = "r_hip";
HAnimJoint34.DEF = "hanim_r_hip";
HAnimJoint34.center = new SFVec3f(new float[-0.0956,0.9364,0]);
HAnimJoint34.skinCoordIndex = new MFInt32(new int[80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111]);
HAnimJoint34.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5]);
let HAnimSegment35 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment35.name = "r_thigh";
HAnimSegment35.DEF = "hanim_r_thigh";
//TODO reconcile z-coordinate mismatch using source anthropometry
let Transform36 = browser.currentScene.createNode("Transform");
Transform36.translation = new SFVec3f(new float[-0.0956,0.9346,0]);
let Shape37 = browser.currentScene.createNode("Shape");
Shape37.USE = "SphereYellow";
Transform36.children = new MFNode();

Transform36.children[0] = Shape37;

HAnimSegment35.children = new MFNode();

HAnimSegment35.children[0] = Transform36;

HAnimJoint34.children = new MFNode();

HAnimJoint34.children[0] = HAnimSegment35;

let HAnimJoint38 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint38.name = "r_knee";
HAnimJoint38.DEF = "hanim_r_knee";
HAnimJoint38.center = new SFVec3f(new float[-0.0956,0.5095,-0.0036]);
HAnimJoint38.skinCoordIndex = new MFInt32(new int[104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131]);
HAnimJoint38.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
let HAnimSegment39 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment39.name = "r_calf";
HAnimSegment39.DEF = "hanim_r_calf";
let Transform40 = browser.currentScene.createNode("Transform");
Transform40.translation = new SFVec3f(new float[-0.0956,0.5095,-0.0036]);
let Shape41 = browser.currentScene.createNode("Shape");
Shape41.USE = "SphereYellow";
Transform40.children = new MFNode();

Transform40.children[0] = Shape41;

HAnimSegment39.children = new MFNode();

HAnimSegment39.children[0] = Transform40;

HAnimJoint38.children = new MFNode();

HAnimJoint38.children[0] = HAnimSegment39;

let HAnimJoint42 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint42.name = "r_ankle";
HAnimJoint42.DEF = "hanim_r_ankle";
HAnimJoint42.center = new SFVec3f(new float[-0.0946,0.0762,-0.0261]);
HAnimJoint42.skinCoordIndex = new MFInt32(new int[132,133,134,135,136,137,138,139]);
HAnimJoint42.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
let HAnimSegment43 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment43.name = "r_hindfoot";
HAnimSegment43.DEF = "hanim_r_hindfoot";
let Transform44 = browser.currentScene.createNode("Transform");
Transform44.translation = new SFVec3f(new float[-0.0946,0.0762,-0.0261]);
let Shape45 = browser.currentScene.createNode("Shape");
Shape45.USE = "SphereYellow";
Transform44.children = new MFNode();

Transform44.children[0] = Shape45;

HAnimSegment43.children = new MFNode();

HAnimSegment43.children[0] = Transform44;

HAnimJoint42.children = new MFNode();

HAnimJoint42.children[0] = HAnimSegment43;

let HAnimJoint46 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint46.name = "r_midtarsal";
HAnimJoint46.DEF = "hanim_r_midtarsal";
HAnimJoint46.center = new SFVec3f(new float[-0.1079,0.0317,0.067]);
HAnimJoint46.skinCoordIndex = new MFInt32(new int[140,141,142,143,144,145,146,147]);
HAnimJoint46.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
let HAnimSegment47 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment47.name = "r_middistal";
HAnimSegment47.DEF = "hanim_r_middistal";
let Transform48 = browser.currentScene.createNode("Transform");
Transform48.translation = new SFVec3f(new float[-0.1079,0.0317,0.067]);
let Shape49 = browser.currentScene.createNode("Shape");
Shape49.USE = "SphereYellow";
Transform48.children = new MFNode();

Transform48.children[0] = Shape49;

HAnimSegment47.children = new MFNode();

HAnimSegment47.children[0] = Transform48;

let HAnimSite50 = browser.currentScene.createNode("HAnimSite");
HAnimSite50.name = "r_middle_distal_tip";
HAnimSite50.DEF = "hanim_r_middle_distal_tip";
HAnimSite50.translation = new SFVec3f(new float[-0.095,0.0005,0.1924]);
HAnimSegment47.children[1] = HAnimSite50;

let Transform51 = browser.currentScene.createNode("Transform");
Transform51.translation = new SFVec3f(new float[-0.095,0.0005,0.1924]);
let Shape52 = browser.currentScene.createNode("Shape");
Shape52.USE = "SphereRed";
Transform51.children = new MFNode();

Transform51.children[0] = Shape52;

HAnimSegment47.children[2] = Transform51;

HAnimJoint46.children = new MFNode();

HAnimJoint46.children[0] = HAnimSegment47;

HAnimJoint42.children[1] = HAnimJoint46;

HAnimJoint38.children[1] = HAnimJoint42;

HAnimJoint34.children[1] = HAnimJoint38;

HAnimJoint5.children[2] = HAnimJoint34;

let HAnimJoint53 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint53.name = "vl5";
HAnimJoint53.DEF = "hanim_vl5";
HAnimJoint53.center = new SFVec3f(new float[0,1.0817,-0.0728]);
HAnimJoint53.skinCoordIndex = new MFInt32(new int[148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167]);
HAnimJoint53.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
let HAnimSegment54 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment54.name = "l5";
HAnimSegment54.DEF = "hanim_l5";
let Transform55 = browser.currentScene.createNode("Transform");
Transform55.translation = new SFVec3f(new float[0,1.0817,-0.0728]);
let Shape56 = browser.currentScene.createNode("Shape");
Shape56.USE = "SphereYellow";
Transform55.children = new MFNode();

Transform55.children[0] = Shape56;

HAnimSegment54.children = new MFNode();

HAnimSegment54.children[0] = Transform55;

HAnimJoint53.children = new MFNode();

HAnimJoint53.children[0] = HAnimSegment54;

let HAnimJoint57 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint57.name = "skullbase";
HAnimJoint57.DEF = "hanim_skullbase";
HAnimJoint57.center = new SFVec3f(new float[0,1.644,0.036]);
HAnimJoint57.skinCoordIndex = new MFInt32(new int[168,169,170,171,172,173,174,175]);
HAnimJoint57.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
let HAnimDisplacer58 = browser.currentScene.createNode("HAnimDisplacer");
HAnimDisplacer58.DEF = "hanim_skullbase_displacer";
HAnimDisplacer58.displacements = new MFVec3f(new float[0,0.031993,0]);
HAnimDisplacer58.coordIndex = new MFInt32(new int[168]);
HAnimDisplacer58.weight = 1;
HAnimJoint57.displacers = new MFNode();

HAnimJoint57.displacers[0] = HAnimDisplacer58;

let HAnimSegment59 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment59.name = "skull";
HAnimSegment59.DEF = "hanim_skull";
//TODO reconcile z-coordinate mismatch using source anthropometry
let Transform60 = browser.currentScene.createNode("Transform");
Transform60.translation = new SFVec3f(new float[0,1.644,0.0036]);
let Shape61 = browser.currentScene.createNode("Shape");
Shape61.USE = "SphereYellow";
Transform60.children = new MFNode();

Transform60.children[0] = Shape61;

HAnimSegment59.children = new MFNode();

HAnimSegment59.children[0] = Transform60;

let HAnimSite62 = browser.currentScene.createNode("HAnimSite");
HAnimSite62.name = "skull_tip";
HAnimSite62.DEF = "hanim_skull_tip";
HAnimSite62.translation = new SFVec3f(new float[-0.0029,1.7771,0.0274]);
HAnimSegment59.children[1] = HAnimSite62;

let Transform63 = browser.currentScene.createNode("Transform");
Transform63.translation = new SFVec3f(new float[-0.0029,1.7771,0.0274]);
let Shape64 = browser.currentScene.createNode("Shape");
Shape64.USE = "SphereYellow";
Transform63.children = new MFNode();

Transform63.children[0] = Shape64;

HAnimSegment59.children[2] = Transform63;

HAnimJoint57.children[1] = HAnimSegment59;

HAnimJoint53.children[1] = HAnimJoint57;

let HAnimJoint65 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint65.name = "l_shoulder";
HAnimJoint65.DEF = "hanim_l_shoulder";
HAnimJoint65.center = new SFVec3f(new float[0.1968,1.4642,-0.0265]);
HAnimJoint65.skinCoordIndex = new MFInt32(new int[176,177,178,179,180,181,182,183]);
HAnimJoint65.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
let HAnimSegment66 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment66.name = "l_upperarm";
HAnimSegment66.DEF = "hanim_l_upperarm";
let Transform67 = browser.currentScene.createNode("Transform");
Transform67.translation = new SFVec3f(new float[0.1968,1.4642,-0.0265]);
let Shape68 = browser.currentScene.createNode("Shape");
Shape68.USE = "SphereYellow";
Transform67.children = new MFNode();

Transform67.children[0] = Shape68;

HAnimSegment66.children = new MFNode();

HAnimSegment66.children[0] = Transform67;

HAnimJoint65.children = new MFNode();

HAnimJoint65.children[0] = HAnimSegment66;

let HAnimJoint69 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint69.name = "l_elbow";
HAnimJoint69.DEF = "hanim_l_elbow";
HAnimJoint69.center = new SFVec3f(new float[0.1982,1.1622,-0.0557]);
HAnimJoint69.skinCoordIndex = new MFInt32(new int[184,185,186,187,188,189,190,191]);
HAnimJoint69.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
let HAnimSegment70 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment70.name = "l_forearm";
HAnimSegment70.DEF = "hanim_l_forearm";
let Transform71 = browser.currentScene.createNode("Transform");
Transform71.translation = new SFVec3f(new float[0.1982,1.1622,-0.0557]);
let Shape72 = browser.currentScene.createNode("Shape");
Shape72.USE = "SphereYellow";
Transform71.children = new MFNode();

Transform71.children[0] = Shape72;

HAnimSegment70.children = new MFNode();

HAnimSegment70.children[0] = Transform71;

HAnimJoint69.children = new MFNode();

HAnimJoint69.children[0] = HAnimSegment70;

let HAnimJoint73 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint73.name = "l_wrist";
HAnimJoint73.DEF = "hanim_l_wrist";
HAnimJoint73.center = new SFVec3f(new float[0.1972,0.8929,-0.069]);
HAnimJoint73.skinCoordIndex = new MFInt32(new int[192,193,194,195,196,197,198,199]);
HAnimJoint73.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
let HAnimSegment74 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment74.name = "l_hand";
HAnimSegment74.DEF = "hanim_l_hand";
let Transform75 = browser.currentScene.createNode("Transform");
Transform75.translation = new SFVec3f(new float[0.1972,0.8929,-0.069]);
let Shape76 = browser.currentScene.createNode("Shape");
Shape76.USE = "SphereYellow";
Transform75.children = new MFNode();

Transform75.children[0] = Shape76;

HAnimSegment74.children = new MFNode();

HAnimSegment74.children[0] = Transform75;

let HAnimSite77 = browser.currentScene.createNode("HAnimSite");
HAnimSite77.name = "l_hand_tip";
HAnimSite77.DEF = "hanim_l_hand_tip";
HAnimSite77.translation = new SFVec3f(new float[0.1912,0.6976,-0.071]);
HAnimSegment74.children[1] = HAnimSite77;

let Transform78 = browser.currentScene.createNode("Transform");
Transform78.translation = new SFVec3f(new float[0.1912,0.6976,-0.071]);
let Shape79 = browser.currentScene.createNode("Shape");
Shape79.USE = "SphereRed";
Transform78.children = new MFNode();

Transform78.children[0] = Shape79;

HAnimSegment74.children[2] = Transform78;

HAnimJoint73.children = new MFNode();

HAnimJoint73.children[0] = HAnimSegment74;

HAnimJoint69.children[1] = HAnimJoint73;

HAnimJoint65.children[1] = HAnimJoint69;

HAnimJoint53.children[2] = HAnimJoint65;

let HAnimJoint80 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint80.name = "r_shoulder";
HAnimJoint80.DEF = "hanim_r_shoulder";
HAnimJoint80.center = new SFVec3f(new float[-0.1968,1.4642,-0.0265]);
HAnimJoint80.skinCoordIndex = new MFInt32(new int[200,201,202,203,204,205,206,207]);
HAnimJoint80.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
let HAnimSegment81 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment81.name = "r_upperarm";
HAnimSegment81.DEF = "hanim_r_upperarm";
let Transform82 = browser.currentScene.createNode("Transform");
Transform82.translation = new SFVec3f(new float[-0.1968,1.4642,-0.0265]);
let Shape83 = browser.currentScene.createNode("Shape");
Shape83.USE = "SphereYellow";
Transform82.children = new MFNode();

Transform82.children[0] = Shape83;

HAnimSegment81.children = new MFNode();

HAnimSegment81.children[0] = Transform82;

HAnimJoint80.children = new MFNode();

HAnimJoint80.children[0] = HAnimSegment81;

let HAnimJoint84 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint84.name = "r_elbow";
HAnimJoint84.DEF = "hanim_r_elbow";
HAnimJoint84.center = new SFVec3f(new float[-0.1982,1.1622,-0.0557]);
HAnimJoint84.skinCoordIndex = new MFInt32(new int[208,209,210,211,212,213,214,215]);
HAnimJoint84.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
let HAnimSegment85 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment85.name = "r_forearm";
HAnimSegment85.DEF = "hanim_r_forearm";
let Transform86 = browser.currentScene.createNode("Transform");
Transform86.translation = new SFVec3f(new float[-0.1982,1.1622,-0.0557]);
let Shape87 = browser.currentScene.createNode("Shape");
Shape87.USE = "SphereYellow";
Transform86.children = new MFNode();

Transform86.children[0] = Shape87;

HAnimSegment85.children = new MFNode();

HAnimSegment85.children[0] = Transform86;

HAnimJoint84.children = new MFNode();

HAnimJoint84.children[0] = HAnimSegment85;

let HAnimJoint88 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint88.name = "r_wrist";
HAnimJoint88.DEF = "hanim_r_wrist";
HAnimJoint88.center = new SFVec3f(new float[-0.1972,0.8929,-0.069]);
HAnimJoint88.skinCoordIndex = new MFInt32(new int[216,217,218,219,220,221,222,223]);
HAnimJoint88.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
let HAnimSegment89 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment89.name = "r_hand";
HAnimSegment89.DEF = "hanim_r_hand";
let Transform90 = browser.currentScene.createNode("Transform");
Transform90.translation = new SFVec3f(new float[-0.1972,0.8929,-0.069]);
let Shape91 = browser.currentScene.createNode("Shape");
Shape91.USE = "SphereYellow";
Transform90.children = new MFNode();

Transform90.children[0] = Shape91;

HAnimSegment89.children = new MFNode();

HAnimSegment89.children[0] = Transform90;

let HAnimSite92 = browser.currentScene.createNode("HAnimSite");
HAnimSite92.name = "r_hand_tip";
HAnimSite92.DEF = "hanim_r_hand_tip";
HAnimSite92.translation = new SFVec3f(new float[-0.1912,0.6976,-0.071]);
HAnimSegment89.children[1] = HAnimSite92;

let Transform93 = browser.currentScene.createNode("Transform");
Transform93.translation = new SFVec3f(new float[-0.1912,0.6976,-0.071]);
let Shape94 = browser.currentScene.createNode("Shape");
Shape94.USE = "SphereRed";
Transform93.children = new MFNode();

Transform93.children[0] = Shape94;

HAnimSegment89.children[2] = Transform93;

HAnimJoint88.children = new MFNode();

HAnimJoint88.children[0] = HAnimSegment89;

HAnimJoint84.children[1] = HAnimJoint88;

HAnimJoint80.children[1] = HAnimJoint84;

HAnimJoint53.children[3] = HAnimJoint80;

HAnimJoint5.children[3] = HAnimJoint53;

HAnimHumanoid4.joints = new MFNode();

HAnimHumanoid4.joints[0] = HAnimJoint5;

//# sacrum (12) # l_thigh (28) # l_calf (24) # l_hindfoot (8) # l_middistal (8) # r_thigh (28) # r_calf (24) # r_hindfoot (8) # r_middistal (8) # l5 (20) # skull (8) # l_upperarm (8) # l_forearm (8) # l_hand (8) # r_upperarm (8) # r_forearm (8) # r_hand (8)
//top-level joint references
//top-level site references
//top-level segment references
//top-level viewpoint references
let Coordinate95 = browser.currentScene.createNode("Coordinate");
Coordinate95.DEF = "SKINCOORD";
Coordinate95.point = new MFVec3f(new float[-0.05,1,0.05,0.05,1,0.05,0.03,0.97,-0.1,-0.03,0.97,-0.1,0.03,0.94,-0.075,-0.03,0.94,-0.075,0,0.92,0,0,0.94,0.03,-0.12,1.06,0.05,0.12,1.06,0.05,0.12,1.06,-0.1,-0.12,1.06,-0.1,0.0456,0.9364,0.05,0.1456,0.9364,0.05,0.1456,0.9364,-0.05,0.0456,0.9364,-0.05,0.0456,0.9,0.05,0.1456,0.9,0.05,0.1456,0.9,-0.05,0.0456,0.9,-0.05,0.0456,0.8,0.05,0.1456,0.8,0.05,0.1456,0.8,-0.05,0.0456,0.8,-0.05,0.0456,0.7,0.05,0.1456,0.7,0.05,0.1456,0.7,-0.05,0.0456,0.7,-0.05,0.0456,0.6,0.05,0.1456,0.6,0.05,0.1456,0.6,-0.05,0.0456,0.6,-0.05,0.0456,0.55,0.05,0.1456,0.55,0.05,0.1456,0.55,-0.05,0.0456,0.55,-0.05,0.0456,0.52,0.05,0.1456,0.52,0.05,0.1456,0.52,-0.05,0.0456,0.52,-0.05,0.0456,0.5,0.05,0.1456,0.5,0.05,0.1456,0.5,-0.05,0.0456,0.5,-0.05,0.0454,0.43,0.045,0.1454,0.43,0.045,0.1454,0.43,-0.055,0.0454,0.43,-0.055,0.0452,0.36,0.04,0.1452,0.36,0.04,0.1452,0.36,-0.06,0.0452,0.36,-0.06,0.045,0.29,0.035,0.145,0.29,0.035,0.145,0.29,-0.065,0.045,0.29,-0.065,0.0448,0.21,0.03,0.1448,0.21,0.03,0.1448,0.21,-0.07,0.0448,0.21,-0.07,0.0446,0.1262,0.025,0.1446,0.1262,0.025,0.1446,0.1262,-0.075,0.0446,0.1262,-0.075,0.0446,0.0762,0.025,0.1446,0.0762,0.025,0.1446,0,-0.075,0.0446,0,-0.075,0.0446,0.0562,0.057,0.1446,0.0562,0.057,0.1446,0,0.057,0.0446,0,0.057,0.0446,0.0562,0.087,0.1446,0.0562,0.087,0.1446,0,0.087,0.0446,0,0.087,0.0446,0.0562,0.1924,0.1446,0.0562,0.1924,0.1446,0,0.1924,0.0446,0,0.1924,-0.0456,0.9364,0.05,-0.1456,0.9364,0.05,-0.1456,0.9364,-0.05,-0.0456,0.9364,-0.05,-0.0456,0.9,0.05,-0.1456,0.9,0.05,-0.1456,0.9,-0.05,-0.0456,0.9,-0.05,-0.0456,0.8,0.05,-0.1456,0.8,0.05,-0.1456,0.8,-0.05,-0.0456,0.8,-0.05,-0.0456,0.7,0.05,-0.1456,0.7,0.05,-0.1456,0.7,-0.05,-0.0456,0.7,-0.05,-0.0456,0.6,0.05,-0.1456,0.6,0.05,-0.1456,0.6,-0.05,-0.0456,0.6,-0.05,-0.0456,0.55,0.05,-0.1456,0.55,0.05,-0.1456,0.55,-0.05,-0.0456,0.55,-0.05,-0.0456,0.52,0.05,-0.1456,0.52,0.05,-0.1456,0.52,-0.05,-0.0456,0.52,-0.05,-0.0456,0.5,0.05,-0.1456,0.5,0.05,-0.1456,0.5,-0.05,-0.0456,0.5,-0.05,-0.0454,0.43,0.045,-0.1454,0.43,0.045,-0.1454,0.43,-0.055,-0.0454,0.43,-0.055,-0.0452,0.36,0.04,-0.1452,0.36,0.04,-0.1452,0.36,-0.06,-0.0452,0.36,-0.06,-0.045,0.29,0.035,-0.145,0.29,0.035,-0.145,0.29,-0.065,-0.045,0.29,-0.065,-0.0448,0.21,0.03,-0.1448,0.21,0.03,-0.1448,0.21,-0.07,-0.0448,0.21,-0.07,-0.0446,0.1262,0.025,-0.1446,0.1262,0.025,-0.1446,0.1262,-0.075,-0.0446,0.1262,-0.075,-0.0446,0.0762,0.025,-0.1446,0.0762,0.025,-0.1446,0,-0.075,-0.0446,0,-0.075,-0.0446,0.0562,0.057,-0.1446,0.0562,0.057,-0.1446,0,0.057,-0.0446,0,0.057,-0.0446,0.0562,0.087,-0.1446,0.0562,0.087,-0.1446,0,0.087,-0.0446,0,0.087,-0.0446,0.0562,0.1924,-0.1446,0.0562,0.1924,-0.1446,0,0.1924,-0.0446,0,0.1924,-0.12,1.1,0.05,0.12,1.1,0.05,0.12,1.1,-0.1,-0.12,1.1,-0.1,-0.14,1.42,0.045,0.14,1.42,0.045,0.14,1.42,-0.09,-0.14,1.42,-0.09,-0.24,1.52,0.035,0.24,1.52,0.035,0.24,1.52,-0.09,-0.24,1.52,-0.09,-0.05,1.56,0.03,0.05,1.56,0.03,0.05,1.56,-0.06,-0.05,1.56,-0.06,-0.05,1.6,0.06,0.05,1.6,0.06,0.05,1.62,-0.03,-0.05,1.62,-0.03,-0.07,1.777,0.13,0.07,1.777,0.13,0.07,1.777,-0.03,-0.07,1.777,-0.03,-0.07,1.6,0.13,0.07,1.6,0.13,0.07,1.66,-0.03,-0.07,1.66,-0.03,0.16,1.42,0.015,0.24,1.5,0.015,0.24,1.5,-0.075,0.16,1.42,-0.075,0.17,1.18,-0.025,0.23,1.18,-0.025,0.23,1.18,-0.085,0.17,1.18,-0.085,0.17,1.14,-0.025,0.23,1.14,-0.025,0.23,1.14,-0.085,0.17,1.14,-0.085,0.18,0.91,-0.05,0.22,0.91,-0.05,0.22,0.91,-0.09,0.18,0.91,-0.09,0.18,0.87,-0.02,0.22,0.87,-0.02,0.22,0.87,-0.1,0.18,0.87,-0.1,0.18,0.6976,-0.02,0.22,0.6976,-0.02,0.22,0.6976,-0.1,0.18,0.6976,-0.1,-0.16,1.42,0.015,-0.24,1.5,0.015,-0.24,1.5,-0.075,-0.16,1.42,-0.075,-0.17,1.18,-0.025,-0.23,1.18,-0.025,-0.23,1.18,-0.085,-0.17,1.18,-0.085,-0.17,1.14,-0.025,-0.23,1.14,-0.025,-0.23,1.14,-0.085,-0.17,1.14,-0.085,-0.18,0.91,-0.05,-0.22,0.91,-0.05,-0.22,0.91,-0.09,-0.18,0.91,-0.09,-0.18,0.87,-0.02,-0.22,0.87,-0.02,-0.22,0.87,-0.1,-0.18,0.87,-0.1,-0.18,0.6976,-0.02,-0.22,0.6976,-0.02,-0.22,0.6976,-0.1,-0.18,0.6976,-0.1]);
HAnimHumanoid4.skinCoord = Coordinate95;

let Group96 = browser.currentScene.createNode("Group");
let Shape97 = browser.currentScene.createNode("Shape");
Shape97.DEF = "TrouserSkin";
let Appearance98 = browser.currentScene.createNode("Appearance");
let Material99 = browser.currentScene.createNode("Material");
Material99.diffuseColor = new SFColor(new float[0,0,1]);
Material99.transparency = 0.5;
Appearance98.material = Material99;

Shape97.appearance = Appearance98;

//# 0: sacrum (8) # 1: l_hip joint (8) # 2: r_hip joint (8) # 3: l_thigh (48) # 4: l_knee joint (8) # 5: l_calf (40) # 10: r_thigh (48) # 11: r_knee joint (8) # 12: r_calf (40)
let IndexedFaceSet100 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet100.coordIndex = new MFInt32(new int[0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1]);
let Coordinate101 = browser.currentScene.createNode("Coordinate");
Coordinate101.USE = "SKINCOORD";
IndexedFaceSet100.coord = Coordinate101;

Shape97.geometry = IndexedFaceSet100;

Group96.children = new MFNode();

Group96.children[0] = Shape97;

let Shape102 = browser.currentScene.createNode("Shape");
Shape102.DEF = "ShoeSkin";
let Appearance103 = browser.currentScene.createNode("Appearance");
let Material104 = browser.currentScene.createNode("Material");
Material104.diffuseColor = new SFColor(new float[0,0,0]);
Material104.transparency = 0.5;
Appearance103.material = Material104;

Shape102.appearance = Appearance103;

//# 6: l_ankle joint (8) # 7: l_hindfoot (8) # 8: l_midtarsal joint (8) # 9: l_middistal (10) # 13: r_ankle joint (8) # 14: r_hindfoot (8) # 15: r_midtarsal joint (8) # 16: r_middistal (10)
let IndexedFaceSet105 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet105.coordIndex = new MFInt32(new int[60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1]);
let Coordinate106 = browser.currentScene.createNode("Coordinate");
Coordinate106.USE = "SKINCOORD";
IndexedFaceSet105.coord = Coordinate106;

Shape102.geometry = IndexedFaceSet105;

Group96.children[1] = Shape102;

let Shape107 = browser.currentScene.createNode("Shape");
Shape107.DEF = "ShirtSkin";
let Appearance108 = browser.currentScene.createNode("Appearance");
let Material109 = browser.currentScene.createNode("Material");
Material109.diffuseColor = new SFColor(new float[1,1,0]);
Material109.transparency = 0.5;
Appearance108.material = Material109;

Shape107.appearance = Appearance108;

//# 17: vl5_joint (8) # 18: l5 (28) # 21: l_shoulder joint (8) # 22: l_upperarm (8) # 23: l_elbow joint (8) # 24: l_forearm (8) # 27: r_shoulder joint (8) # 28: r_upperarm (8) # 29: r_elbow joint (8) # 30: r_forearm (8)
let IndexedFaceSet110 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet110.coordIndex = new MFInt32(new int[148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1]);
let Coordinate111 = browser.currentScene.createNode("Coordinate");
Coordinate111.USE = "SKINCOORD";
IndexedFaceSet110.coord = Coordinate111;

Shape107.geometry = IndexedFaceSet110;

Group96.children[2] = Shape107;

let Shape112 = browser.currentScene.createNode("Shape");
Shape112.DEF = "HeadHandsFleshToneSkin";
let Appearance113 = browser.currentScene.createNode("Appearance");
let Material114 = browser.currentScene.createNode("Material");
Material114.diffuseColor = new SFColor(new float[1,0.75,0.75]);
Material114.transparency = 0.5;
Appearance113.material = Material114;

Shape112.appearance = Appearance113;

//# 19: skullbase joint (8) # 20: skull (10) # 25: l_wrist joint (8) # 26: l_hand (10) # 31: r_wrist joint (8) # 32: r_hand (10)
let IndexedFaceSet115 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet115.coordIndex = new MFInt32(new int[172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1]);
let Coordinate116 = browser.currentScene.createNode("Coordinate");
Coordinate116.USE = "SKINCOORD";
IndexedFaceSet115.coord = Coordinate116;

Shape112.geometry = IndexedFaceSet115;

Group96.children[3] = Shape112;

let Shape117 = browser.currentScene.createNode("Shape");
Shape117.DEF = "SkinLines";
let Appearance118 = browser.currentScene.createNode("Appearance");
let Material119 = browser.currentScene.createNode("Material");
Material119.diffuseColor = new SFColor(new float[0,0,0]);
Appearance118.material = Material119;

Shape117.appearance = Appearance118;

//Combined set of prior IFS coordIndex values
let IndexedLineSet120 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet120.coordIndex = new MFInt32(new int[0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1,60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1,148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1,172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1]);
let Coordinate121 = browser.currentScene.createNode("Coordinate");
Coordinate121.USE = "SKINCOORD";
IndexedLineSet120.coord = Coordinate121;

Shape117.geometry = IndexedLineSet120;

Group96.children[4] = Shape117;

HAnimHumanoid4.skin[1] = Group96;

let HAnimJoint122 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint122.USE = "hanim_r_wrist";
HAnimHumanoid4.joints[2] = HAnimJoint122;

let HAnimJoint123 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint123.USE = "hanim_r_elbow";
HAnimHumanoid4.joints[3] = HAnimJoint123;

let HAnimJoint124 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint124.USE = "hanim_r_shoulder";
HAnimHumanoid4.joints[4] = HAnimJoint124;

let HAnimJoint125 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint125.USE = "hanim_l_wrist";
HAnimHumanoid4.joints[5] = HAnimJoint125;

let HAnimJoint126 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint126.USE = "hanim_l_elbow";
HAnimHumanoid4.joints[6] = HAnimJoint126;

let HAnimJoint127 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint127.USE = "hanim_l_shoulder";
HAnimHumanoid4.joints[7] = HAnimJoint127;

let HAnimJoint128 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint128.USE = "hanim_skullbase";
HAnimHumanoid4.joints[8] = HAnimJoint128;

let HAnimJoint129 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint129.USE = "hanim_vl5";
HAnimHumanoid4.joints[9] = HAnimJoint129;

let HAnimJoint130 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint130.USE = "hanim_r_midtarsal";
HAnimHumanoid4.joints[10] = HAnimJoint130;

let HAnimJoint131 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint131.USE = "hanim_r_ankle";
HAnimHumanoid4.joints[11] = HAnimJoint131;

let HAnimJoint132 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint132.USE = "hanim_r_knee";
HAnimHumanoid4.joints[12] = HAnimJoint132;

let HAnimJoint133 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint133.USE = "hanim_r_hip";
HAnimHumanoid4.joints[13] = HAnimJoint133;

let HAnimJoint134 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint134.USE = "hanim_l_midtarsal";
HAnimHumanoid4.joints[14] = HAnimJoint134;

let HAnimJoint135 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint135.USE = "hanim_l_ankle";
HAnimHumanoid4.joints[15] = HAnimJoint135;

let HAnimJoint136 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint136.USE = "hanim_l_knee";
HAnimHumanoid4.joints[16] = HAnimJoint136;

let HAnimJoint137 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint137.USE = "hanim_l_hip";
HAnimHumanoid4.joints[17] = HAnimJoint137;

let HAnimJoint138 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint138.USE = "hanim_HumanoidRoot";
HAnimHumanoid4.joints[18] = HAnimJoint138;

let HAnimSite139 = browser.currentScene.createNode("HAnimSite");
HAnimSite139.USE = "hanim_l_middle_distal_tip";
HAnimHumanoid4.viewpoints[19] = HAnimSite139;

let HAnimSite140 = browser.currentScene.createNode("HAnimSite");
HAnimSite140.USE = "hanim_r_middle_distal_tip";
HAnimHumanoid4.viewpoints[20] = HAnimSite140;

let HAnimSite141 = browser.currentScene.createNode("HAnimSite");
HAnimSite141.USE = "hanim_skull_tip";
HAnimHumanoid4.viewpoints[21] = HAnimSite141;

let HAnimSite142 = browser.currentScene.createNode("HAnimSite");
HAnimSite142.USE = "hanim_l_hand_tip";
HAnimHumanoid4.viewpoints[22] = HAnimSite142;

let HAnimSite143 = browser.currentScene.createNode("HAnimSite");
HAnimSite143.USE = "hanim_r_hand_tip";
HAnimHumanoid4.viewpoints[23] = HAnimSite143;

let HAnimSegment144 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment144.USE = "hanim_sacrum";
HAnimHumanoid4.segments[24] = HAnimSegment144;

let HAnimSegment145 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment145.USE = "hanim_l_thigh";
HAnimHumanoid4.segments[25] = HAnimSegment145;

let HAnimSegment146 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment146.USE = "hanim_l_calf";
HAnimHumanoid4.segments[26] = HAnimSegment146;

let HAnimSegment147 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment147.USE = "hanim_l_hindfoot";
HAnimHumanoid4.segments[27] = HAnimSegment147;

let HAnimSegment148 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment148.USE = "hanim_l_middistal";
HAnimHumanoid4.segments[28] = HAnimSegment148;

let HAnimSegment149 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment149.USE = "hanim_r_thigh";
HAnimHumanoid4.segments[29] = HAnimSegment149;

let HAnimSegment150 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment150.USE = "hanim_r_calf";
HAnimHumanoid4.segments[30] = HAnimSegment150;

let HAnimSegment151 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment151.USE = "hanim_r_hindfoot";
HAnimHumanoid4.segments[31] = HAnimSegment151;

let HAnimSegment152 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment152.USE = "hanim_r_middistal";
HAnimHumanoid4.segments[32] = HAnimSegment152;

let HAnimSegment153 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment153.USE = "hanim_l5";
HAnimHumanoid4.segments[33] = HAnimSegment153;

let HAnimSegment154 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment154.USE = "hanim_skull";
HAnimHumanoid4.segments[34] = HAnimSegment154;

let HAnimSegment155 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment155.USE = "hanim_l_upperarm";
HAnimHumanoid4.segments[35] = HAnimSegment155;

let HAnimSegment156 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment156.USE = "hanim_l_forearm";
HAnimHumanoid4.segments[36] = HAnimSegment156;

let HAnimSegment157 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment157.USE = "hanim_l_hand";
HAnimHumanoid4.segments[37] = HAnimSegment157;

let HAnimSegment158 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment158.USE = "hanim_r_upperarm";
HAnimHumanoid4.segments[38] = HAnimSegment158;

let HAnimSegment159 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment159.USE = "hanim_r_forearm";
HAnimHumanoid4.segments[39] = HAnimSegment159;

let HAnimSegment160 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment160.USE = "hanim_r_hand";
HAnimHumanoid4.segments[40] = HAnimSegment160;

let Viewpoint161 = browser.currentScene.createNode("Viewpoint");
Viewpoint161.DEF = "Inclined_View";
Viewpoint161.description = "Inclined View";
Viewpoint161.orientation = new SFRotation(new float[0,1,0,0.78]);
Viewpoint161.position = new SFVec3f(new float[2,1,2]);
HAnimHumanoid4.viewpoint[41] = Viewpoint161;

let Viewpoint162 = browser.currentScene.createNode("Viewpoint");
Viewpoint162.DEF = "Best_View";
Viewpoint162.description = "Best View";
Viewpoint162.orientation = new SFRotation(new float[0,1,0,-1.57]);
Viewpoint162.position = new SFVec3f(new float[-2,0.25,0]);
HAnimHumanoid4.viewpoint[42] = Viewpoint162;

let Viewpoint163 = browser.currentScene.createNode("Viewpoint");
Viewpoint163.DEF = "Front_View";
Viewpoint163.description = "Front View";
Viewpoint163.position = new SFVec3f(new float[0,1,3]);
HAnimHumanoid4.viewpoint[43] = Viewpoint163;

let Viewpoint164 = browser.currentScene.createNode("Viewpoint");
Viewpoint164.DEF = "Side_View";
Viewpoint164.description = "Side View";
Viewpoint164.orientation = new SFRotation(new float[0,1,0,1.57]);
Viewpoint164.position = new SFVec3f(new float[3,1,0]);
HAnimHumanoid4.viewpoint[44] = Viewpoint164;

let Viewpoint165 = browser.currentScene.createNode("Viewpoint");
Viewpoint165.DEF = "Top_View";
Viewpoint165.description = "Top View";
Viewpoint165.orientation = new SFRotation(new float[1,0,0,-1.57]);
Viewpoint165.position = new SFVec3f(new float[0,3,0]);
HAnimHumanoid4.viewpoint[45] = Viewpoint165;

browser.currentScene.children[2] = HAnimHumanoid4;

//ExternProtoDeclare name='LOA1_WalkAnimation' url='\"LOA1_WalkAnimation.wrl#LOA1_WalkAnimation\" \"http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/LOA1_WalkAnimation.wrl#LOA1_WalkAnimation\" \"http://h-anim.org/Models/H-Anim2001/boxman/protos/LOA1WalkAnimation.wrl#LOA1WalkAnimation\" \"LOA1_WalkAnimation.x3d#LOA1_WalkAnimation\" \"http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/LOA1_WalkAnimation.x3d#LOA1_WalkAnimation\" \"http://h-anim.org/Models/H-Anim2001/boxman/protos/LOA1WalkAnimation.x3d#LOA1WalkAnimation\"'> <field accessType='inputOutput' name='cycleInterval' type='SFTime'/> <field accessType='inputOutput' name='enabled' type='SFBool'/> <field accessType='inputOutput' name='loop' type='SFBool'/> <field accessType='inputOutput' name='startTime' type='SFTime'/> <field accessType='inputOutput' name='stopTime' type='SFTime'/> <field accessType='outputOnly' name='fraction_changed' type='SFFloat'/> <field accessType='outputOnly' name='HumanoidRoot_translation_changed' type='SFVec3f'/> <field accessType='outputOnly' name='HumanoidRoot_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='l_hip_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='l_knee_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='l_ankle_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='l_midtarsal_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='r_hip_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='r_knee_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='r_ankle_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='r_midtarsal_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='vl5_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='skullbase_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='l_shoulder_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='l_elbow_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='l_wrist_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='r_shoulder_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='r_elbow_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='r_wrist_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='isActive' type='SFBool'/> </ExternProtoDeclare> <ProtoInstance DEF='ANIMATOR' name='LOA1_WalkAnimation'/
let Group166 = browser.currentScene.createNode("Group");
//ROUTE information for TIMER node: [from fraction_changed to HUMANOIDROOT_POSITION_ANIMATOR.set_fraction ] [from fraction_changed to HUMANOIDROOT_ANIMATOR.set_fraction ] [from fraction_changed to SACROILIAC_ANIMATOR.set_fraction ] [from fraction_changed to L_HIP_ANIMATOR.set_fraction ] [from fraction_changed to L_KNEE_ANIMATOR.set_fraction ] [from fraction_changed to L_ANKLE_ANIMATOR.set_fraction ] [from fraction_changed to L_MIDTARSAL_ANIMATOR.set_fraction ] [from fraction_changed to R_HIP_ANIMATOR.set_fraction ] [from fraction_changed to R_KNEE_ANIMATOR.set_fraction ] [from fraction_changed to R_ANKLE_ANIMATOR.set_fraction ] [from fraction_changed to R_MIDTARSAL_ANIMATOR.set_fraction ] [from fraction_changed to VL5_ANIMATOR.set_fraction ] [from fraction_changed to SKULLBASE_ANIMATOR.set_fraction ] [from fraction_changed to L_SHOULDER_ANIMATOR.set_fraction ] [from fraction_changed to L_ELBOW_ANIMATOR.set_fraction ] [from fraction_changed to L_WRIST_ANIMATOR.set_fraction ] [from fraction_changed to R_SHOULDER_ANIMATOR.set_fraction ] [from fraction_changed to R_ELBOW_ANIMATOR.set_fraction ] [from fraction_changed to R_WRIST_ANIMATOR.set_fraction ]
let TimeSensor167 = browser.currentScene.createNode("TimeSensor");
TimeSensor167.DEF = "TIMER";
TimeSensor167.cycleInterval = 2;
TimeSensor167.loop = True;
//field name='cycleInterval' type='SFTime' value='2' accessType='inputOutput'/> <field name='enabled' type='SFBool' value='true' accessType='inputOutput'/> <field name='loop' type='SFBool' value='true' accessType='inputOutput'/> <field name='startTime' type='SFTime' value='0' accessType='inputOutput'/> <field name='stopTime' type='SFTime' value='-1' accessType='inputOutput'/!
//IS> <connect nodeField='cycleInterval' protoField='cycleInterval'/> <connect nodeField='enabled' protoField='enabled'/> <connect nodeField='loop' protoField='loop'/> <connect nodeField='startTime' protoField='startTime'/> <connect nodeField='stopTime' protoField='stopTime'/> <connect nodeField='fraction_changed' protoField='fraction_changed'/> <connect nodeField='isActive' protoField='isActive'/> </IS
Group166.children = new MFNode();

Group166.children[0] = TimeSensor167;

//ROUTE information for HUMANOIDROOT_POSITION_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
let PositionInterpolator168 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator168.DEF = "HUMANOIDROOT_POSITION_ANIMATOR";
PositionInterpolator168.key = new MFFloat(new float[0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]);
PositionInterpolator168.keyValue = new MFVec3f(new float[0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0]);
//IS> <connect nodeField='value_changed' protoField='HumanoidRoot_translation_changed'/> </IS
Group166.children[1] = PositionInterpolator168;

//ROUTE information for HUMANOIDROOT_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
let OrientationInterpolator169 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator169.DEF = "HUMANOIDROOT_ANIMATOR";
OrientationInterpolator169.key = new MFFloat(new float[0,1]);
OrientationInterpolator169.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,0]);
//IS> <connect nodeField='value_changed' protoField='HumanoidRoot_rotation_changed'/> </IS
Group166.children[2] = OrientationInterpolator169;

//ROUTE information for SACROILIAC_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
let OrientationInterpolator170 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator170.DEF = "SACROILIAC_ANIMATOR";
OrientationInterpolator170.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator170.keyValue = new MFRotation(new float[0,0,-1,0.1056,0,0,1,0.09018,0,0,-1,0.1056]);
//IS> <connect nodeField='value_changed' protoField='lower_body_rotation_changed'/> </IS
Group166.children[3] = OrientationInterpolator170;

//ROUTE information for L_HIP_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
let OrientationInterpolator171 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator171.DEF = "L_HIP_ANIMATOR";
OrientationInterpolator171.key = new MFFloat(new float[0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator171.keyValue = new MFRotation(new float[-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865]);
//IS> <connect nodeField='value_changed' protoField='l_hip_rotation_changed'/> </IS
Group166.children[4] = OrientationInterpolator171;

//ROUTE information for L_KNEE_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
let OrientationInterpolator172 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator172.DEF = "L_KNEE_ANIMATOR";
OrientationInterpolator172.key = new MFFloat(new float[0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator172.keyValue = new MFRotation(new float[1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226]);
//IS> <connect nodeField='value_changed' protoField='l_knee_rotation_changed'/> </IS
Group166.children[5] = OrientationInterpolator172;

//ROUTE information for L_ANKLE_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
let OrientationInterpolator173 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator173.DEF = "L_ANKLE_ANIMATOR";
OrientationInterpolator173.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.6667,0.9167,1]);
OrientationInterpolator173.keyValue = new MFRotation(new float[-1,0,0,0.06714,-1,0,0,0.2152,-1,0,0,0.3184,-1,0,0,0.4717,-1,0,0,0.2912,1,0,0,0.1222,-1,0,0,0.06714]);
//IS> <connect nodeField='value_changed' protoField='l_ankle_rotation_changed'/> </IS
Group166.children[6] = OrientationInterpolator173;

//ROUTE information for L_MIDTARSAL_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
let OrientationInterpolator174 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator174.DEF = "L_MIDTARSAL_ANIMATOR";
OrientationInterpolator174.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator174.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,-0.2,1,0,0,0]);
//IS> <connect nodeField='value_changed' protoField='l_midtarsal_rotation_changed'/> </IS
Group166.children[7] = OrientationInterpolator174;

//ROUTE information for R_HIP_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
let OrientationInterpolator175 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator175.DEF = "R_HIP_ANIMATOR";
OrientationInterpolator175.key = new MFFloat(new float[0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator175.keyValue = new MFRotation(new float[-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481]);
//IS> <connect nodeField='value_changed' protoField='r_hip_rotation_changed'/> </IS
Group166.children[8] = OrientationInterpolator175;

//ROUTE information for R_KNEE_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
let OrientationInterpolator176 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator176.DEF = "R_KNEE_ANIMATOR";
OrientationInterpolator176.key = new MFFloat(new float[0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator176.keyValue = new MFRotation(new float[1,0,0,0.8573,1,0,0,0.8926,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,-1.176e-8,-4.971e-9,0.09354,1,0,0,0.08558,1,0,0,0.2475,1,0,0,0.8573]);
//IS> <connect nodeField='value_changed' protoField='r_knee_rotation_changed'/> <IS
Group166.children[9] = OrientationInterpolator176;

//ROUTE information for R_ANKLE_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
let OrientationInterpolator177 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator177.DEF = "R_ANKLE_ANIMATOR";
OrientationInterpolator177.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator177.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.3533,-1,0,0,0.1072,1,0,0,0.2612,1,-1.641e-7,1.827e-8,0.1268,-1,0,0,0.01793,-1,0,0,0.05824,-1,0,0,0.2398,-1,0,0,0.35,-1,0,0,0.3322,0,0,1,0]);
//IS> <connect nodeField='value_changed' protoField='r_ankle_rotation_changed'/> <IS
Group166.children[10] = OrientationInterpolator177;

//ROUTE information for R_MIDTARSAL_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
let OrientationInterpolator178 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator178.DEF = "R_MIDTARSAL_ANIMATOR";
OrientationInterpolator178.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator178.keyValue = new MFRotation(new float[1,0,0,-0.2,1,0,0,0,1,0,0,-0.2]);
//IS> <connect nodeField='value_changed' protoField='r_midtarsal_rotation_changed'/> <IS
Group166.children[11] = OrientationInterpolator178;

//ROUTE information for VL5_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
let OrientationInterpolator179 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator179.DEF = "VL5_ANIMATOR";
OrientationInterpolator179.key = new MFFloat(new float[0,0.2083,0.375,0.75,0.8333,1]);
OrientationInterpolator179.keyValue = new MFRotation(new float[0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826]);
//IS> <connect nodeField='value_changed' protoField='vl5_rotation_changed'/> <IS
Group166.children[12] = OrientationInterpolator179;

//ROUTE information for SKULLBASE_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
let OrientationInterpolator180 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator180.DEF = "SKULLBASE_ANIMATOR";
OrientationInterpolator180.key = new MFFloat(new float[0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]);
OrientationInterpolator180.keyValue = new MFRotation(new float[0,-1,0,0.08642,0,1,0,0.1825,0,1,0,0.1505,0,1,0,0.1053,0,1,0,0.04391,0,-1,0,0.03119,0,-1,0,0.07936,0,-1,0,0.1616,0,-1,0,0.155,0,-1,0,0.08642]);
//IS> <connect nodeField='value_changed' protoField='skullbase_rotation_changed'/> <IS
Group166.children[13] = OrientationInterpolator180;

//ROUTE information for L_SHOULDER_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
let OrientationInterpolator181 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator181.DEF = "L_SHOULDER_ANIMATOR";
OrientationInterpolator181.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator181.keyValue = new MFRotation(new float[1,0,0,0.1189,-1,-5.928e-7,1.525e-7,0.1861,1,-2.038e-7,-1.257e-7,0.3357,1,0,0,0.1189]);
//IS> <connect nodeField='value_changed' protoField='l_shoulder_rotation_changed'/> <IS
Group166.children[14] = OrientationInterpolator181;

//ROUTE information for L_ELBOW_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
let OrientationInterpolator182 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator182.DEF = "L_ELBOW_ANIMATOR";
OrientationInterpolator182.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator182.keyValue = new MFRotation(new float[-1,-1.58298e-7,8.15967e-8,0.0659878,-1,-3.28826e-8,-2.31665e-8,0.488383,-1,0.00000306462,-0.00000311947,0.0177536,-1,-1.58298e-7,8.15967e-8,0.0659878]);
//IS> <connect nodeField='value_changed' protoField='l_elbow_rotation_changed'/> <IS
Group166.children[15] = OrientationInterpolator182;

//ROUTE information for L_WRIST_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
let OrientationInterpolator183 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator183.DEF = "L_WRIST_ANIMATOR";
OrientationInterpolator183.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator183.keyValue = new MFRotation(new float[0.00000151276,-1,0.0000017724,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,0.00000151276,-1,0.0000017724,0.461076]);
//IS> <connect nodeField='value_changed' protoField='l_wrist_rotation_changed'/> <IS
Group166.children[16] = OrientationInterpolator183;

//ROUTE information for R_SHOULDER_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
let OrientationInterpolator184 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator184.DEF = "R_SHOULDER_ANIMATOR";
OrientationInterpolator184.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator184.keyValue = new MFRotation(new float[-1,-7.689e-7,-1.48e-7,0.09346,1,5.004e-8,2.254e-8,0.3197,-1,-1.104e-7,5.267e-10,0.1564,-1,-7.689e-7,-1.48e-7,0.09346]);
//IS> <connect nodeField='value_changed' protoField='r_shoulder_rotation_changed'/> <IS
Group166.children[17] = OrientationInterpolator184;

//ROUTE information for R_ELBOW_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
let OrientationInterpolator185 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator185.DEF = "R_ELBOW_ANIMATOR";
OrientationInterpolator185.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator185.keyValue = new MFRotation(new float[-1,-4.45619e-8,2.70318e-8,0.411508,-1,8.16742e-7,-1.09556e-7,0.0925011,-1,-2.47628e-8,-7.02862e-9,0.572568,-1,-4.45619e-8,2.70318e-8,0.411508]);
//IS> <connect nodeField='value_changed' protoField='r_elbow_rotation_changed'/> <IS
Group166.children[18] = OrientationInterpolator185;

//ROUTE information for R_WRIST_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
let OrientationInterpolator186 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator186.DEF = "R_WRIST_ANIMATOR";
OrientationInterpolator186.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator186.keyValue = new MFRotation(new float[-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346]);
//IS> <connect nodeField='value_changed' protoField='r_wrist_rotation_changed'/> <IS
Group166.children[19] = OrientationInterpolator186;

browser.currentScene.children[3] = Group166;

let ROUTE187 = browser.currentScene.createNode("ROUTE");
ROUTE187.fromNode = "TIMER";
ROUTE187.fromField = "fraction_changed";
ROUTE187.toNode = "HUMANOIDROOT_POSITION_ANIMATOR";
ROUTE187.toField = "set_fraction";
browser.currentScene.children[4] = ROUTE187;

let ROUTE188 = browser.currentScene.createNode("ROUTE");
ROUTE188.fromNode = "TIMER";
ROUTE188.fromField = "fraction_changed";
ROUTE188.toNode = "HUMANOIDROOT_ANIMATOR";
ROUTE188.toField = "set_fraction";
browser.currentScene.children[5] = ROUTE188;

let ROUTE189 = browser.currentScene.createNode("ROUTE");
ROUTE189.fromNode = "TIMER";
ROUTE189.fromField = "fraction_changed";
ROUTE189.toNode = "SACROILIAC_ANIMATOR";
ROUTE189.toField = "set_fraction";
browser.currentScene.children[6] = ROUTE189;

let ROUTE190 = browser.currentScene.createNode("ROUTE");
ROUTE190.fromNode = "TIMER";
ROUTE190.fromField = "fraction_changed";
ROUTE190.toNode = "L_HIP_ANIMATOR";
ROUTE190.toField = "set_fraction";
browser.currentScene.children[7] = ROUTE190;

let ROUTE191 = browser.currentScene.createNode("ROUTE");
ROUTE191.fromNode = "TIMER";
ROUTE191.fromField = "fraction_changed";
ROUTE191.toNode = "L_KNEE_ANIMATOR";
ROUTE191.toField = "set_fraction";
browser.currentScene.children[8] = ROUTE191;

let ROUTE192 = browser.currentScene.createNode("ROUTE");
ROUTE192.fromNode = "TIMER";
ROUTE192.fromField = "fraction_changed";
ROUTE192.toNode = "L_ANKLE_ANIMATOR";
ROUTE192.toField = "set_fraction";
browser.currentScene.children[9] = ROUTE192;

let ROUTE193 = browser.currentScene.createNode("ROUTE");
ROUTE193.fromNode = "TIMER";
ROUTE193.fromField = "fraction_changed";
ROUTE193.toNode = "L_MIDTARSAL_ANIMATOR";
ROUTE193.toField = "set_fraction";
browser.currentScene.children[10] = ROUTE193;

let ROUTE194 = browser.currentScene.createNode("ROUTE");
ROUTE194.fromNode = "TIMER";
ROUTE194.fromField = "fraction_changed";
ROUTE194.toNode = "R_HIP_ANIMATOR";
ROUTE194.toField = "set_fraction";
browser.currentScene.children[11] = ROUTE194;

let ROUTE195 = browser.currentScene.createNode("ROUTE");
ROUTE195.fromNode = "TIMER";
ROUTE195.fromField = "fraction_changed";
ROUTE195.toNode = "R_KNEE_ANIMATOR";
ROUTE195.toField = "set_fraction";
browser.currentScene.children[12] = ROUTE195;

let ROUTE196 = browser.currentScene.createNode("ROUTE");
ROUTE196.fromNode = "TIMER";
ROUTE196.fromField = "fraction_changed";
ROUTE196.toNode = "R_ANKLE_ANIMATOR";
ROUTE196.toField = "set_fraction";
browser.currentScene.children[13] = ROUTE196;

let ROUTE197 = browser.currentScene.createNode("ROUTE");
ROUTE197.fromNode = "TIMER";
ROUTE197.fromField = "fraction_changed";
ROUTE197.toNode = "R_MIDTARSAL_ANIMATOR";
ROUTE197.toField = "set_fraction";
browser.currentScene.children[14] = ROUTE197;

let ROUTE198 = browser.currentScene.createNode("ROUTE");
ROUTE198.fromNode = "TIMER";
ROUTE198.fromField = "fraction_changed";
ROUTE198.toNode = "VL5_ANIMATOR";
ROUTE198.toField = "set_fraction";
browser.currentScene.children[15] = ROUTE198;

let ROUTE199 = browser.currentScene.createNode("ROUTE");
ROUTE199.fromNode = "TIMER";
ROUTE199.fromField = "fraction_changed";
ROUTE199.toNode = "SKULLBASE_ANIMATOR";
ROUTE199.toField = "set_fraction";
browser.currentScene.children[16] = ROUTE199;

let ROUTE200 = browser.currentScene.createNode("ROUTE");
ROUTE200.fromNode = "TIMER";
ROUTE200.fromField = "fraction_changed";
ROUTE200.toNode = "L_SHOULDER_ANIMATOR";
ROUTE200.toField = "set_fraction";
browser.currentScene.children[17] = ROUTE200;

let ROUTE201 = browser.currentScene.createNode("ROUTE");
ROUTE201.fromNode = "TIMER";
ROUTE201.fromField = "fraction_changed";
ROUTE201.toNode = "L_ELBOW_ANIMATOR";
ROUTE201.toField = "set_fraction";
browser.currentScene.children[18] = ROUTE201;

let ROUTE202 = browser.currentScene.createNode("ROUTE");
ROUTE202.fromNode = "TIMER";
ROUTE202.fromField = "fraction_changed";
ROUTE202.toNode = "L_WRIST_ANIMATOR";
ROUTE202.toField = "set_fraction";
browser.currentScene.children[19] = ROUTE202;

let ROUTE203 = browser.currentScene.createNode("ROUTE");
ROUTE203.fromNode = "TIMER";
ROUTE203.fromField = "fraction_changed";
ROUTE203.toNode = "R_SHOULDER_ANIMATOR";
ROUTE203.toField = "set_fraction";
browser.currentScene.children[20] = ROUTE203;

let ROUTE204 = browser.currentScene.createNode("ROUTE");
ROUTE204.fromNode = "TIMER";
ROUTE204.fromField = "fraction_changed";
ROUTE204.toNode = "R_ELBOW_ANIMATOR";
ROUTE204.toField = "set_fraction";
browser.currentScene.children[21] = ROUTE204;

let ROUTE205 = browser.currentScene.createNode("ROUTE");
ROUTE205.fromNode = "TIMER";
ROUTE205.fromField = "fraction_changed";
ROUTE205.toNode = "R_WRIST_ANIMATOR";
ROUTE205.toField = "set_fraction";
browser.currentScene.children[22] = ROUTE205;

//Animation ROUTEs
let ROUTE206 = browser.currentScene.createNode("ROUTE");
ROUTE206.fromField = "value_changed";
ROUTE206.fromNode = "HUMANOIDROOT_POSITION_ANIMATOR";
ROUTE206.toField = "set_translation";
ROUTE206.toNode = "hanim_HumanoidRoot";
browser.currentScene.children[23] = ROUTE206;

let ROUTE207 = browser.currentScene.createNode("ROUTE");
ROUTE207.fromField = "value_changed";
ROUTE207.fromNode = "HUMANOIDROOT_ANIMATOR";
ROUTE207.toField = "set_rotation";
ROUTE207.toNode = "hanim_HumanoidRoot";
browser.currentScene.children[24] = ROUTE207;

let ROUTE208 = browser.currentScene.createNode("ROUTE");
ROUTE208.fromField = "value_changed";
ROUTE208.fromNode = "L_HIP_ANIMATOR";
ROUTE208.toField = "set_rotation";
ROUTE208.toNode = "hanim_l_hip";
browser.currentScene.children[25] = ROUTE208;

let ROUTE209 = browser.currentScene.createNode("ROUTE");
ROUTE209.fromField = "value_changed";
ROUTE209.fromNode = "L_KNEE_ANIMATOR";
ROUTE209.toField = "set_rotation";
ROUTE209.toNode = "hanim_l_knee";
browser.currentScene.children[26] = ROUTE209;

let ROUTE210 = browser.currentScene.createNode("ROUTE");
ROUTE210.fromField = "value_changed";
ROUTE210.fromNode = "L_ANKLE_ANIMATOR";
ROUTE210.toField = "set_rotation";
ROUTE210.toNode = "hanim_l_ankle";
browser.currentScene.children[27] = ROUTE210;

let ROUTE211 = browser.currentScene.createNode("ROUTE");
ROUTE211.fromField = "value_changed";
ROUTE211.fromNode = "L_MIDTARSAL_ANIMATOR";
ROUTE211.toField = "set_rotation";
ROUTE211.toNode = "hanim_l_midtarsal";
browser.currentScene.children[28] = ROUTE211;

let ROUTE212 = browser.currentScene.createNode("ROUTE");
ROUTE212.fromField = "value_changed";
ROUTE212.fromNode = "R_HIP_ANIMATOR";
ROUTE212.toField = "set_rotation";
ROUTE212.toNode = "hanim_r_hip";
browser.currentScene.children[29] = ROUTE212;

let ROUTE213 = browser.currentScene.createNode("ROUTE");
ROUTE213.fromField = "value_changed";
ROUTE213.fromNode = "R_KNEE_ANIMATOR";
ROUTE213.toField = "set_rotation";
ROUTE213.toNode = "hanim_r_knee";
browser.currentScene.children[30] = ROUTE213;

let ROUTE214 = browser.currentScene.createNode("ROUTE");
ROUTE214.fromField = "value_changed";
ROUTE214.fromNode = "R_ANKLE_ANIMATOR";
ROUTE214.toField = "set_rotation";
ROUTE214.toNode = "hanim_r_ankle";
browser.currentScene.children[31] = ROUTE214;

let ROUTE215 = browser.currentScene.createNode("ROUTE");
ROUTE215.fromField = "value_changed";
ROUTE215.fromNode = "R_MIDTARSAL_ANIMATOR";
ROUTE215.toField = "set_rotation";
ROUTE215.toNode = "hanim_r_midtarsal";
browser.currentScene.children[32] = ROUTE215;

let ROUTE216 = browser.currentScene.createNode("ROUTE");
ROUTE216.fromField = "value_changed";
ROUTE216.fromNode = "VL5_ANIMATOR";
ROUTE216.toField = "set_rotation";
ROUTE216.toNode = "hanim_vl5";
browser.currentScene.children[33] = ROUTE216;

let ROUTE217 = browser.currentScene.createNode("ROUTE");
ROUTE217.fromField = "value_changed";
ROUTE217.fromNode = "SKULLBASE_ANIMATOR";
ROUTE217.toField = "set_rotation";
ROUTE217.toNode = "hanim_skullbase";
browser.currentScene.children[34] = ROUTE217;

let ROUTE218 = browser.currentScene.createNode("ROUTE");
ROUTE218.fromField = "value_changed";
ROUTE218.fromNode = "L_SHOULDER_ANIMATOR";
ROUTE218.toField = "set_rotation";
ROUTE218.toNode = "hanim_l_shoulder";
browser.currentScene.children[35] = ROUTE218;

let ROUTE219 = browser.currentScene.createNode("ROUTE");
ROUTE219.fromField = "value_changed";
ROUTE219.fromNode = "L_ELBOW_ANIMATOR";
ROUTE219.toField = "set_rotation";
ROUTE219.toNode = "hanim_l_elbow";
browser.currentScene.children[36] = ROUTE219;

let ROUTE220 = browser.currentScene.createNode("ROUTE");
ROUTE220.fromField = "value_changed";
ROUTE220.fromNode = "L_WRIST_ANIMATOR";
ROUTE220.toField = "set_rotation";
ROUTE220.toNode = "hanim_l_wrist";
browser.currentScene.children[37] = ROUTE220;

let ROUTE221 = browser.currentScene.createNode("ROUTE");
ROUTE221.fromField = "value_changed";
ROUTE221.fromNode = "R_SHOULDER_ANIMATOR";
ROUTE221.toField = "set_rotation";
ROUTE221.toNode = "hanim_r_shoulder";
browser.currentScene.children[38] = ROUTE221;

let ROUTE222 = browser.currentScene.createNode("ROUTE");
ROUTE222.fromField = "value_changed";
ROUTE222.fromNode = "R_ELBOW_ANIMATOR";
ROUTE222.toField = "set_rotation";
ROUTE222.toNode = "hanim_r_elbow";
browser.currentScene.children[39] = ROUTE222;

let ROUTE223 = browser.currentScene.createNode("ROUTE");
ROUTE223.fromField = "value_changed";
ROUTE223.fromNode = "R_WRIST_ANIMATOR";
ROUTE223.toField = "set_rotation";
ROUTE223.toNode = "hanim_r_wrist";
browser.currentScene.children[40] = ROUTE223;

let ROUTE224 = browser.currentScene.createNode("ROUTE");
ROUTE224.fromNode = "TIMER";
ROUTE224.fromField = "fraction_changed";
ROUTE224.toNode = "hanim_skullbase_displacer";
ROUTE224.toField = "weight";
browser.currentScene.children[41] = ROUTE224;

