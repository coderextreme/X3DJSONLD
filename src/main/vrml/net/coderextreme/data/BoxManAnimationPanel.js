var browser = X3D.getBrowser();
var X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.info = ["(C) 2000 James Smith - james@vapourtech.com","http://www.vapourtech.com/team/james/boxman.wrl","Blaxxun compatibility by Tu Lam - TuL@seamless-solutions.com"];
WorldInfo2.title = "BoxMan - A Seamless VRML Human";
browser.currentScene.children = [];

browser.currentScene.children[0] = WorldInfo2;

Background3 = browser.currentScene.createNode("Background");
Background3.groundColor = [0.6,0.6,0.6];
Background3.skyColor = [0.75,0.75,0.75];
browser.currentScene.children[1] = Background3;

HAnimHumanoid4 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid4.name = "Humanoid";
HAnimHumanoid4.DEF = "boxman_Humanoid";
HAnimHumanoid4.info = ["authorName=James Smith","authorEmail=james@vapourtech.com","copyright=(C) 2000 James Smith - james@vapourtech.com","humanoidVersion=2.0"];
HAnimHumanoid4.version = "2.0";
HAnimJoint5 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint5.name = "humanoid_root";
HAnimJoint5.DEF = "boxman_HumanoidRoot";
HAnimJoint5.center = [0,0.9723,-0.0728];
HAnimJoint5.skinCoordIndex = [0,1,2,3,4,5,6,7,8,9,10,11];
HAnimJoint5.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1,1,1];
HAnimSegment6 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment6.name = "sacrum";
HAnimSegment6.DEF = "boxman_sacrum";
Transform7 = browser.currentScene.createNode("Transform");
Transform7.translation = [0,0.9723,-0.0728];
Shape8 = browser.currentScene.createNode("Shape");
Shape8.DEF = "SphereYellow";
Appearance9 = browser.currentScene.createNode("Appearance");
Material10 = browser.currentScene.createNode("Material");
Material10.diffuseColor = [1,1,0];
Appearance9.material = Material10;

Shape8.appearance = Appearance9;

Sphere11 = browser.currentScene.createNode("Sphere");
Sphere11.radius = 0.02;
Shape8.geometry = Sphere11;

Transform7.children = [];

Transform7.children[0] = Shape8;

HAnimSegment6.children = [];

HAnimSegment6.children[0] = Transform7;

HAnimJoint5.children = [];

HAnimJoint5.children[0] = HAnimSegment6;

HAnimJoint12 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint12.name = "l_hip";
HAnimJoint12.DEF = "boxman_l_hip";
HAnimJoint12.center = [0.0956,0.9364,0];
HAnimJoint12.skinCoordIndex = [12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43];
HAnimJoint12.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5];
HAnimSegment13 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment13.name = "l_thigh";
HAnimSegment13.DEF = "boxman_l_thigh";
Transform14 = browser.currentScene.createNode("Transform");
Transform14.translation = [0.0956,0.9364,0];
Shape15 = browser.currentScene.createNode("Shape");
Shape15.USE = "SphereYellow";
Transform14.children = [];

Transform14.children[0] = Shape15;

HAnimSegment13.children = [];

HAnimSegment13.children[0] = Transform14;

HAnimJoint12.children = [];

HAnimJoint12.children[0] = HAnimSegment13;

HAnimJoint16 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint16.name = "l_knee";
HAnimJoint16.DEF = "boxman_l_knee";
HAnimJoint16.center = [0.0956,0.5095,-0.0036];
HAnimJoint16.skinCoordIndex = [36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63];
HAnimJoint16.skinCoordWeight = [0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1];
HAnimSegment17 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment17.name = "l_calf";
HAnimSegment17.DEF = "boxman_l_calf";
Transform18 = browser.currentScene.createNode("Transform");
Transform18.translation = [0.0956,0.5095,-0.0036];
Shape19 = browser.currentScene.createNode("Shape");
Shape19.USE = "SphereYellow";
Transform18.children = [];

Transform18.children[0] = Shape19;

HAnimSegment17.children = [];

HAnimSegment17.children[0] = Transform18;

HAnimJoint16.children = [];

HAnimJoint16.children[0] = HAnimSegment17;

HAnimJoint20 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint20.name = "l_ankle";
HAnimJoint20.DEF = "boxman_l_ankle";
HAnimJoint20.center = [0.0946,0.0762,-0.0261];
HAnimJoint20.skinCoordIndex = [64,65,66,67,68,69,70,71];
HAnimJoint20.skinCoordWeight = [1,1,1,1,1,1,1,1];
HAnimSegment21 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment21.name = "l_hindfoot";
HAnimSegment21.DEF = "boxman_l_hindfoot";
Transform22 = browser.currentScene.createNode("Transform");
Transform22.translation = [0.0946,0.0762,-0.0261];
Shape23 = browser.currentScene.createNode("Shape");
Shape23.USE = "SphereYellow";
Transform22.children = [];

Transform22.children[0] = Shape23;

HAnimSegment21.children = [];

HAnimSegment21.children[0] = Transform22;

HAnimJoint20.children = [];

HAnimJoint20.children[0] = HAnimSegment21;

HAnimJoint24 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint24.name = "l_midtarsal";
HAnimJoint24.DEF = "boxman_l_midtarsal";
HAnimJoint24.center = [0.1079,0.0317,0.067];
HAnimJoint24.skinCoordIndex = [72,73,74,75,76,77,78,79];
HAnimJoint24.skinCoordWeight = [1,1,1,1,1,1,1,1];
HAnimSegment25 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment25.name = "l_middistal";
HAnimSegment25.DEF = "boxman_l_middistal";
Transform26 = browser.currentScene.createNode("Transform");
Transform26.translation = [0.1079,0.0317,0.067];
Shape27 = browser.currentScene.createNode("Shape");
Shape27.USE = "SphereYellow";
Transform26.children = [];

Transform26.children[0] = Shape27;

HAnimSegment25.children = [];

HAnimSegment25.children[0] = Transform26;

HAnimSite28 = browser.currentScene.createNode("HAnimSite");
HAnimSite28.name = "l_middistal_tip";
HAnimSite28.DEF = "boxman_l_middistal_tip";
HAnimSite28.translation = [0.095,0.0005,0.1924];
Shape29 = browser.currentScene.createNode("Shape");
Shape29.DEF = "SphereRed";
Appearance30 = browser.currentScene.createNode("Appearance");
Material31 = browser.currentScene.createNode("Material");
Material31.diffuseColor = [1,0,0];
Appearance30.material = Material31;

Shape29.appearance = Appearance30;

Sphere32 = browser.currentScene.createNode("Sphere");
Sphere32.radius = 0.02;
Shape29.geometry = Sphere32;

HAnimSite28.children = [];

HAnimSite28.children[0] = Shape29;

HAnimSegment25.children[1] = HAnimSite28;

HAnimJoint24.children = [];

HAnimJoint24.children[0] = HAnimSegment25;

HAnimJoint20.children[1] = HAnimJoint24;

HAnimJoint16.children[1] = HAnimJoint20;

HAnimJoint12.children[1] = HAnimJoint16;

HAnimJoint5.children[1] = HAnimJoint12;

HAnimJoint33 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint33.name = "r_hip";
HAnimJoint33.DEF = "boxman_r_hip";
HAnimJoint33.center = [-0.0956,0.9364,0];
HAnimJoint33.skinCoordIndex = [80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111];
HAnimJoint33.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5];
HAnimSegment34 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment34.name = "r_thigh";
HAnimSegment34.DEF = "boxman_r_thigh";
Transform35 = browser.currentScene.createNode("Transform");
Transform35.translation = [-0.0956,0.9364,0];
Shape36 = browser.currentScene.createNode("Shape");
Shape36.USE = "SphereYellow";
Transform35.children = [];

Transform35.children[0] = Shape36;

HAnimSegment34.children = [];

HAnimSegment34.children[0] = Transform35;

HAnimJoint33.children = [];

HAnimJoint33.children[0] = HAnimSegment34;

HAnimJoint37 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint37.name = "r_knee";
HAnimJoint37.DEF = "boxman_r_knee";
HAnimJoint37.center = [-0.0956,0.5095,-0.0036];
HAnimJoint37.skinCoordIndex = [104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131];
HAnimJoint37.skinCoordWeight = [0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1];
HAnimSegment38 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment38.name = "r_calf";
HAnimSegment38.DEF = "boxman_r_calf";
Transform39 = browser.currentScene.createNode("Transform");
Transform39.translation = [-0.0956,0.5095,-0.0036];
Shape40 = browser.currentScene.createNode("Shape");
Shape40.USE = "SphereYellow";
Transform39.children = [];

Transform39.children[0] = Shape40;

HAnimSegment38.children = [];

HAnimSegment38.children[0] = Transform39;

HAnimJoint37.children = [];

HAnimJoint37.children[0] = HAnimSegment38;

HAnimJoint41 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint41.name = "r_ankle";
HAnimJoint41.DEF = "boxman_r_ankle";
HAnimJoint41.center = [-0.0946,0.0762,-0.0261];
HAnimJoint41.skinCoordIndex = [132,133,134,135,136,137,138,139];
HAnimJoint41.skinCoordWeight = [1,1,1,1,1,1,1,1];
HAnimSegment42 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment42.name = "r_hindfoot";
HAnimSegment42.DEF = "boxman_r_hindfoot";
Transform43 = browser.currentScene.createNode("Transform");
Transform43.translation = [-0.0946,0.0762,-0.0261];
Shape44 = browser.currentScene.createNode("Shape");
Shape44.USE = "SphereYellow";
Transform43.children = [];

Transform43.children[0] = Shape44;

HAnimSegment42.children = [];

HAnimSegment42.children[0] = Transform43;

HAnimJoint41.children = [];

HAnimJoint41.children[0] = HAnimSegment42;

HAnimJoint45 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint45.name = "r_midtarsal";
HAnimJoint45.DEF = "boxman_r_midtarsal";
HAnimJoint45.center = [-0.1079,0.0317,0.067];
HAnimJoint45.skinCoordIndex = [140,141,142,143,144,145,146,147];
HAnimJoint45.skinCoordWeight = [1,1,1,1,1,1,1,1];
HAnimSegment46 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment46.name = "r_middistal";
HAnimSegment46.DEF = "boxman_r_middistal";
Transform47 = browser.currentScene.createNode("Transform");
Transform47.translation = [-0.1079,0.0317,0.067];
Shape48 = browser.currentScene.createNode("Shape");
Shape48.USE = "SphereYellow";
Transform47.children = [];

Transform47.children[0] = Shape48;

HAnimSegment46.children = [];

HAnimSegment46.children[0] = Transform47;

HAnimSite49 = browser.currentScene.createNode("HAnimSite");
HAnimSite49.name = "r_middistal_tip";
HAnimSite49.DEF = "boxman_r_middistal_tip";
HAnimSite49.translation = [-0.095,0.0005,0.1924];
Shape50 = browser.currentScene.createNode("Shape");
Shape50.USE = "SphereRed";
HAnimSite49.children = [];

HAnimSite49.children[0] = Shape50;

HAnimSegment46.children[1] = HAnimSite49;

HAnimJoint45.children = [];

HAnimJoint45.children[0] = HAnimSegment46;

HAnimJoint41.children[1] = HAnimJoint45;

HAnimJoint37.children[1] = HAnimJoint41;

HAnimJoint33.children[1] = HAnimJoint37;

HAnimJoint5.children[2] = HAnimJoint33;

HAnimJoint51 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint51.name = "vl5";
HAnimJoint51.DEF = "boxman_vl5";
HAnimJoint51.center = [0,1.0817,-0.0728];
HAnimJoint51.skinCoordIndex = [148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167];
HAnimJoint51.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1];
HAnimSegment52 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment52.name = "l5";
HAnimSegment52.DEF = "boxman_l5";
Transform53 = browser.currentScene.createNode("Transform");
Transform53.translation = [0,1.0817,-0.0728];
Shape54 = browser.currentScene.createNode("Shape");
Shape54.USE = "SphereYellow";
Transform53.children = [];

Transform53.children[0] = Shape54;

HAnimSegment52.children = [];

HAnimSegment52.children[0] = Transform53;

HAnimJoint51.children = [];

HAnimJoint51.children[0] = HAnimSegment52;

HAnimJoint55 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint55.name = "skullbase";
HAnimJoint55.DEF = "boxman_skullbase";
HAnimJoint55.center = [0,1.644,0.036];
HAnimJoint55.skinCoordIndex = [168,169,170,171,172,173,174,175];
HAnimJoint55.skinCoordWeight = [1,1,1,1,1,1,1,1];
HAnimSegment56 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment56.name = "skull";
HAnimSegment56.DEF = "boxman_skull";
Transform57 = browser.currentScene.createNode("Transform");
Transform57.translation = [0,1.644,0.036];
Shape58 = browser.currentScene.createNode("Shape");
Shape58.USE = "SphereYellow";
Transform57.children = [];

Transform57.children[0] = Shape58;

HAnimSegment56.children = [];

HAnimSegment56.children[0] = Transform57;

HAnimSite59 = browser.currentScene.createNode("HAnimSite");
HAnimSite59.name = "skull_tip";
HAnimSite59.DEF = "boxman_skull_tip";
HAnimSite59.translation = [-0.0029,1.7771,0.0274];
Shape60 = browser.currentScene.createNode("Shape");
Shape60.USE = "SphereYellow";
HAnimSite59.children = [];

HAnimSite59.children[0] = Shape60;

HAnimSegment56.children[1] = HAnimSite59;

HAnimJoint55.children = [];

HAnimJoint55.children[0] = HAnimSegment56;

HAnimJoint51.children[1] = HAnimJoint55;

HAnimJoint61 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint61.name = "l_shoulder";
HAnimJoint61.DEF = "boxman_l_shoulder";
HAnimJoint61.center = [0.1968,1.4642,-0.0265];
HAnimJoint61.skinCoordIndex = [176,177,178,179,180,181,182,183];
HAnimJoint61.skinCoordWeight = [1,1,1,1,1,1,1,1];
HAnimSegment62 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment62.name = "l_upperarm";
HAnimSegment62.DEF = "boxman_l_upperarm";
Transform63 = browser.currentScene.createNode("Transform");
Transform63.translation = [0.1968,1.4642,-0.0265];
Shape64 = browser.currentScene.createNode("Shape");
Shape64.USE = "SphereYellow";
Transform63.children = [];

Transform63.children[0] = Shape64;

HAnimSegment62.children = [];

HAnimSegment62.children[0] = Transform63;

HAnimJoint61.children = [];

HAnimJoint61.children[0] = HAnimSegment62;

HAnimJoint65 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint65.name = "l_elbow";
HAnimJoint65.DEF = "boxman_l_elbow";
HAnimJoint65.center = [0.1982,1.1622,-0.0557];
HAnimJoint65.skinCoordIndex = [184,185,186,187,188,189,190,191];
HAnimJoint65.skinCoordWeight = [1,1,1,1,1,1,1,1];
HAnimSegment66 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment66.name = "l_forearm";
HAnimSegment66.DEF = "boxman_l_forearm";
Transform67 = browser.currentScene.createNode("Transform");
Transform67.translation = [0.1982,1.1622,-0.0557];
Shape68 = browser.currentScene.createNode("Shape");
Shape68.USE = "SphereYellow";
Transform67.children = [];

Transform67.children[0] = Shape68;

HAnimSegment66.children = [];

HAnimSegment66.children[0] = Transform67;

HAnimJoint65.children = [];

HAnimJoint65.children[0] = HAnimSegment66;

HAnimJoint69 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint69.name = "l_wrist";
HAnimJoint69.DEF = "boxman_l_wrist";
HAnimJoint69.center = [0.1972,0.8929,-0.069];
HAnimJoint69.skinCoordIndex = [192,193,194,195,196,197,198,199];
HAnimJoint69.skinCoordWeight = [1,1,1,1,1,1,1,1];
HAnimSegment70 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment70.name = "l_hand";
HAnimSegment70.DEF = "boxman_l_hand";
Transform71 = browser.currentScene.createNode("Transform");
Transform71.translation = [0.1972,0.8929,-0.069];
Shape72 = browser.currentScene.createNode("Shape");
Shape72.USE = "SphereYellow";
Transform71.children = [];

Transform71.children[0] = Shape72;

HAnimSegment70.children = [];

HAnimSegment70.children[0] = Transform71;

HAnimSite73 = browser.currentScene.createNode("HAnimSite");
HAnimSite73.name = "l_hand_tip";
HAnimSite73.DEF = "boxman_l_hand_tip";
HAnimSite73.translation = [0.1912,0.6976,-0.071];
Shape74 = browser.currentScene.createNode("Shape");
Shape74.USE = "SphereRed";
HAnimSite73.children = [];

HAnimSite73.children[0] = Shape74;

HAnimSegment70.children[1] = HAnimSite73;

HAnimJoint69.children = [];

HAnimJoint69.children[0] = HAnimSegment70;

HAnimJoint65.children[1] = HAnimJoint69;

HAnimJoint61.children[1] = HAnimJoint65;

HAnimJoint51.children[2] = HAnimJoint61;

HAnimJoint75 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint75.name = "r_shoulder";
HAnimJoint75.DEF = "boxman_r_shoulder";
HAnimJoint75.center = [-0.1968,1.4642,-0.0265];
HAnimJoint75.skinCoordIndex = [200,201,202,203,204,205,206,207];
HAnimJoint75.skinCoordWeight = [1,1,1,1,1,1,1,1];
HAnimSegment76 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment76.name = "r_upperarm";
HAnimSegment76.DEF = "boxman_r_upperarm";
Transform77 = browser.currentScene.createNode("Transform");
Transform77.translation = [-0.1968,1.4642,-0.0265];
Shape78 = browser.currentScene.createNode("Shape");
Shape78.USE = "SphereYellow";
Transform77.children = [];

Transform77.children[0] = Shape78;

HAnimSegment76.children = [];

HAnimSegment76.children[0] = Transform77;

HAnimJoint75.children = [];

HAnimJoint75.children[0] = HAnimSegment76;

HAnimJoint79 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint79.name = "r_elbow";
HAnimJoint79.DEF = "boxman_r_elbow";
HAnimJoint79.center = [-0.1982,1.1622,-0.0557];
HAnimJoint79.skinCoordIndex = [208,209,210,211,212,213,214,215];
HAnimJoint79.skinCoordWeight = [1,1,1,1,1,1,1,1];
HAnimSegment80 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment80.name = "r_forearm";
HAnimSegment80.DEF = "boxman_r_forearm";
Transform81 = browser.currentScene.createNode("Transform");
Transform81.translation = [-0.1982,1.1622,-0.0557];
Shape82 = browser.currentScene.createNode("Shape");
Shape82.USE = "SphereYellow";
Transform81.children = [];

Transform81.children[0] = Shape82;

HAnimSegment80.children = [];

HAnimSegment80.children[0] = Transform81;

HAnimJoint79.children = [];

HAnimJoint79.children[0] = HAnimSegment80;

HAnimJoint83 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint83.name = "r_wrist";
HAnimJoint83.DEF = "boxman_r_wrist";
HAnimJoint83.center = [-0.1972,0.8929,-0.069];
HAnimJoint83.skinCoordIndex = [216,217,218,219,220,221,222,223];
HAnimJoint83.skinCoordWeight = [1,1,1,1,1,1,1,1];
HAnimSegment84 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment84.name = "r_hand";
HAnimSegment84.DEF = "boxman_r_hand";
Transform85 = browser.currentScene.createNode("Transform");
Transform85.translation = [-0.1972,0.8929,-0.069];
Shape86 = browser.currentScene.createNode("Shape");
Shape86.USE = "SphereYellow";
Transform85.children = [];

Transform85.children[0] = Shape86;

HAnimSegment84.children = [];

HAnimSegment84.children[0] = Transform85;

HAnimSite87 = browser.currentScene.createNode("HAnimSite");
HAnimSite87.name = "r_hand_tip";
HAnimSite87.DEF = "boxman_r_hand_tip";
HAnimSite87.translation = [-0.1912,0.6976,-0.071];
Shape88 = browser.currentScene.createNode("Shape");
Shape88.USE = "SphereRed";
HAnimSite87.children = [];

HAnimSite87.children[0] = Shape88;

HAnimSegment84.children[1] = HAnimSite87;

HAnimJoint83.children = [];

HAnimJoint83.children[0] = HAnimSegment84;

HAnimJoint79.children[1] = HAnimJoint83;

HAnimJoint75.children[1] = HAnimJoint79;

HAnimJoint51.children[3] = HAnimJoint75;

HAnimJoint5.children[3] = HAnimJoint51;

HAnimHumanoid4.joints = [];

HAnimHumanoid4.joints[0] = HAnimJoint5;

//# sacrum (12) # l_thigh (28) # l_calf (24) # l_hindfoot (8) # l_middistal (8) # r_thigh (28) # r_calf (24) # r_hindfoot (8) # r_middistal (8) # l5 (20) # skull (8) # l_upperarm (8) # l_forearm (8) # l_hand (8) # r_upperarm (8) # r_forearm (8) # r_hand (8)
//Coordinate DEF='SKINCOORD2' containerField='skinCoord' point='-0.05 1 0.05 0.05 1 0.05 0.03 0.97 -0.1 -0.03 0.97 -0.1 0.03 0.94 -0.075 -0.03 0.94 -0.075 0 0.92 0 0 0.94 0.03 -0.12 1.06 0.05 0.12 1.06 0.05 0.12 1.06 -0.1 -0.12 1.06 -0.1 0.0456 0.9364 0.05 0.1456 0.9364 0.05 0.1456 0.9364 -0.05 0.0456 0.9364 -0.05 0.0456 0.9 0.05 0.1456 0.9 0.05 0.1456 0.9 -0.05 0.0456 0.9 -0.05 0.0456 0.8 0.05 0.1456 0.8 0.05 0.1456 0.8 -0.05 0.0456 0.8 -0.05 0.0456 0.7 0.05 0.1456 0.7 0.05 0.1456 0.7 -0.05 0.0456 0.7 -0.05 0.0456 0.6 0.05 0.1456 0.6 0.05 0.1456 0.6 -0.05 0.0456 0.6 -0.05 0.0456 0.55 0.05 0.1456 0.55 0.05 0.1456 0.55 -0.05 0.0456 0.55 -0.05 0.0456 0.52 0.05 0.1456 0.52 0.05 0.1456 0.52 -0.05 0.0456 0.52 -0.05 0.0456 0.5 0.05 0.1456 0.5 0.05 0.1456 0.5 -0.05 0.0456 0.5 -0.05 0.0454 0.43 0.045 0.1454 0.43 0.045 0.1454 0.43 -0.055 0.0454 0.43 -0.055 0.0452 0.36 0.04 0.1452 0.36 0.04 0.1452 0.36 -0.06 0.0452 0.36 -0.06 0.045 0.29 0.035 0.145 0.29 0.035 0.145 0.29 -0.065 0.045 0.29 -0.065 0.0448 0.21 0.03 0.1448 0.21 0.03 0.1448 0.21 -0.07 0.0448 0.21 -0.07 0.0446 0.1262 0.025 0.1446 0.1262 0.025 0.1446 0.1262 -0.075 0.0446 0.1262 -0.075 0.0446 0.0702038 0.02464698 0.1446 0.0702038 0.02464698 0.1446 0.006264479 -0.08360368 0.0446 0.006264479 -0.08360368 0.0446 0.046587 0.05407905 0.1446 0.046587 0.05407905 0.1446 -0.009224742 0.0474844 0.0446 -0.009224742 0.0474844 0.0446 0.04306673 0.0838718 0.1446 0.04306673 0.0838718 0.1446 -0.01274502 0.07727715 0.0446 -0.01274502 0.07727715 0.0446 0.03069882 0.1885436 0.1446 0.03069882 0.1885436 0.1446 -0.02511293 0.181949 0.0446 -0.02511293 0.181949 -0.0456 0.9861611 0.004881433 -0.1456 0.9861611 0.004881433 -0.1456 0.8866388 -0.004881474 -0.0456 0.8866388 -0.004881474 -0.0456 0.9826074 0.04110757 -0.1456 0.9826074 0.04110757 -0.1456 0.8830851 0.03134466 -0.0456 0.8830851 0.03134466 -0.0456 0.9728445 0.1406298 -0.1456 0.9728445 0.1406298 -0.1456 0.8733222 0.1308669 -0.0456 0.8733222 0.1308669 -0.0456 0.9630816 0.2401521 -0.1456 0.9630816 0.2401521 -0.1456 0.8635593 0.2303892 -0.0456 0.8635593 0.2303892 -0.0456 0.9533187 0.3396744 -0.1456 0.9533187 0.3396744 -0.1456 0.8537964 0.3299115 -0.0456 0.8537964 0.3299115 -0.0456 0.9484373 0.3894355 -0.1456 0.9484373 0.3894355 -0.1456 0.848915 0.3796726 -0.0456 0.848915 0.3796726 -0.0456 0.94468 0.4147483 -0.1456 0.94468 0.4147483 -0.1456 0.8450468 0.4134411 -0.0456 0.8450468 0.4134411 -0.0456 0.9444185 0.4346749 -0.1456 0.9444185 0.4346749 -0.1456 0.8447853 0.4333678 -0.0456 0.8447853 0.4333678 -0.0454 0.9452982 0.5003315 -0.1454 0.9452982 0.5003315 -0.1454 0.8455541 0.5074801 -0.0454 0.8455541 0.5074801 -0.0452 0.945315 0.5705098 -0.1452 0.945315 0.5705098 -0.1452 0.8455709 0.5776584 -0.0452 0.8455709 0.5776584 -0.045 0.9453319 0.6406881 -0.145 0.9453319 0.6406881 -0.145 0.8455877 0.6478368 -0.045 0.8455877 0.6478368 -0.0448 0.9460636 0.7208409 -0.1448 0.9460636 0.7208409 -0.1448 0.8463194 0.7279896 -0.0448 0.8463194 0.7279896 -0.0446 0.947067 0.8047839 -0.1446 0.947067 0.8047839 -0.1446 0.8473228 0.8119326 -0.0446 0.8473228 0.8119326 -0.0446 0.9507178 0.8606621 -0.1446 0.9507178 0.8606621 -0.1446 0.847315 0.9321763 -0.0446 0.847315 0.9321763 -0.0446 0.9817629 0.8821145 -0.1446 0.9817629 0.8821145 -0.1446 0.9791749 0.9382548 -0.0446 0.9791749 0.9382548 -0.0446 1.011731 0.883496 -0.1446 1.011731 0.883496 -0.1446 1.009143 0.9396363 -0.0446 1.009143 0.9396363 -0.0446 1.117019 0.8883496 -0.1446 1.117019 0.8883496 -0.1446 1.114431 0.94449 -0.0446 1.114431 0.94449 -0.12 1.1 0.05 0.12 1.1 0.05 0.12 1.1 -0.1 -0.12 1.1 -0.1 -0.14 1.42 0.045 0.14 1.42 0.045 0.14 1.42 -0.09 -0.14 1.42 -0.09 -0.24 1.52 0.035 0.24 1.52 0.035 0.24 1.52 -0.09 -0.24 1.52 -0.09 -0.05 1.56 0.03 0.05 1.56 0.03 0.05 1.56 -0.06 -0.05 1.56 -0.06 -0.05 1.6 0.06 0.05 1.6 0.06 0.05 1.62 -0.03 -0.05 1.62 -0.03 -0.07 1.781247 0.1236818 0.07 1.781247 0.1236818 0.07 1.77377 -0.03614335 -0.07 1.77377 -0.03614335 -0.07 1.604441 0.1319535 0.07 1.604441 0.1319535 0.07 1.656898 -0.03067561 -0.07 1.656898 -0.03067561 0.2016854 1.406894 0.015 0.2023709 1.520029 0.015 0.2023709 1.520029 -0.075 0.2016854 1.406894 -0.075 0.3774735 1.243191 -0.025 0.4201562 1.28536 -0.025 0.4201562 1.28536 -0.085 0.3774735 1.243191 -0.085 0.4055858 1.214736 -0.025 0.4482685 1.256904 -0.025 0.4482685 1.256904 -0.085 0.4055858 1.214736 -0.085 0.5743457 1.058147 -0.05 0.6028008 1.086259 -0.05 0.6028008 1.086259 -0.09 0.5743457 1.058147 -0.09 0.6024581 1.029692 -0.02 0.6309132 1.057804 -0.02 0.6309132 1.057804 -0.1 0.6024581 1.029692 -0.1 0.7236224 0.9070502 -0.02 0.7520775 0.9351625 -0.02 0.7520775 0.9351625 -0.1 0.7236224 0.9070502 -0.1 -0.2016854 1.406894 0.015 -0.2023709 1.520029 0.015 -0.2023709 1.520029 -0.075 -0.2016854 1.406894 -0.075 -0.3774735 1.243191 -0.025 -0.4201562 1.28536 -0.025 -0.4201562 1.28536 -0.085 -0.3774735 1.243191 -0.085 -0.4055858 1.214736 -0.025 -0.4482685 1.256904 -0.025 -0.4482685 1.256904 -0.085 -0.4055858 1.214736 -0.085 -0.5743457 1.058147 -0.05 -0.6028008 1.086259 -0.05 -0.6028008 1.086259 -0.09 -0.5743457 1.058147 -0.09 -0.6024581 1.029692 -0.02 -0.6309132 1.057804 -0.02 -0.6309132 1.057804 -0.1 -0.6024581 1.029692 -0.1 -0.7236224 0.9070502 -0.02 -0.7520775 0.9351625 -0.02 -0.7520775 0.9351625 -0.1 -0.7236224 0.9070502 -0.1'/
//top-level joint references
//top-level segment references
//top-level site references
Coordinate89 = browser.currentScene.createNode("Coordinate");
Coordinate89.DEF = "SKINCOORD";
Coordinate89.point = [-0.05,1,0.05,0.05,1,0.05,0.03,0.97,-0.1,-0.03,0.97,-0.1,0.03,0.94,-0.075,-0.03,0.94,-0.075,0,0.92,0,0,0.94,0.03,-0.12,1.06,0.05,0.12,1.06,0.05,0.12,1.06,-0.1,-0.12,1.06,-0.1,0.0456,0.9364,0.05,0.1456,0.9364,0.05,0.1456,0.9364,-0.05,0.0456,0.9364,-0.05,0.0456,0.9,0.05,0.1456,0.9,0.05,0.1456,0.9,-0.05,0.0456,0.9,-0.05,0.0456,0.8,0.05,0.1456,0.8,0.05,0.1456,0.8,-0.05,0.0456,0.8,-0.05,0.0456,0.7,0.05,0.1456,0.7,0.05,0.1456,0.7,-0.05,0.0456,0.7,-0.05,0.0456,0.6,0.05,0.1456,0.6,0.05,0.1456,0.6,-0.05,0.0456,0.6,-0.05,0.0456,0.55,0.05,0.1456,0.55,0.05,0.1456,0.55,-0.05,0.0456,0.55,-0.05,0.0456,0.52,0.05,0.1456,0.52,0.05,0.1456,0.52,-0.05,0.0456,0.52,-0.05,0.0456,0.5,0.05,0.1456,0.5,0.05,0.1456,0.5,-0.05,0.0456,0.5,-0.05,0.0454,0.43,0.045,0.1454,0.43,0.045,0.1454,0.43,-0.055,0.0454,0.43,-0.055,0.0452,0.36,0.04,0.1452,0.36,0.04,0.1452,0.36,-0.06,0.0452,0.36,-0.06,0.045,0.29,0.035,0.145,0.29,0.035,0.145,0.29,-0.065,0.045,0.29,-0.065,0.0448,0.21,0.03,0.1448,0.21,0.03,0.1448,0.21,-0.07,0.0448,0.21,-0.07,0.0446,0.1262,0.025,0.1446,0.1262,0.025,0.1446,0.1262,-0.075,0.0446,0.1262,-0.075,0.0446,0.0762,0.025,0.1446,0.0762,0.025,0.1446,0,-0.075,0.0446,0,-0.075,0.0446,0.0562,0.057,0.1446,0.0562,0.057,0.1446,0,0.057,0.0446,0,0.057,0.0446,0.0562,0.087,0.1446,0.0562,0.087,0.1446,0,0.087,0.0446,0,0.087,0.0446,0.0562,0.1924,0.1446,0.0562,0.1924,0.1446,0,0.1924,0.0446,0,0.1924,-0.0456,0.9364,0.05,-0.1456,0.9364,0.05,-0.1456,0.9364,-0.05,-0.0456,0.9364,-0.05,-0.0456,0.9,0.05,-0.1456,0.9,0.05,-0.1456,0.9,-0.05,-0.0456,0.9,-0.05,-0.0456,0.8,0.05,-0.1456,0.8,0.05,-0.1456,0.8,-0.05,-0.0456,0.8,-0.05,-0.0456,0.7,0.05,-0.1456,0.7,0.05,-0.1456,0.7,-0.05,-0.0456,0.7,-0.05,-0.0456,0.6,0.05,-0.1456,0.6,0.05,-0.1456,0.6,-0.05,-0.0456,0.6,-0.05,-0.0456,0.55,0.05,-0.1456,0.55,0.05,-0.1456,0.55,-0.05,-0.0456,0.55,-0.05,-0.0456,0.52,0.05,-0.1456,0.52,0.05,-0.1456,0.52,-0.05,-0.0456,0.52,-0.05,-0.0456,0.5,0.05,-0.1456,0.5,0.05,-0.1456,0.5,-0.05,-0.0456,0.5,-0.05,-0.0454,0.43,0.045,-0.1454,0.43,0.045,-0.1454,0.43,-0.055,-0.0454,0.43,-0.055,-0.0452,0.36,0.04,-0.1452,0.36,0.04,-0.1452,0.36,-0.06,-0.0452,0.36,-0.06,-0.045,0.29,0.035,-0.145,0.29,0.035,-0.145,0.29,-0.065,-0.045,0.29,-0.065,-0.0448,0.21,0.03,-0.1448,0.21,0.03,-0.1448,0.21,-0.07,-0.0448,0.21,-0.07,-0.0446,0.1262,0.025,-0.1446,0.1262,0.025,-0.1446,0.1262,-0.075,-0.0446,0.1262,-0.075,-0.0446,0.0762,0.025,-0.1446,0.0762,0.025,-0.1446,0,-0.075,-0.0446,0,-0.075,-0.0446,0.0562,0.057,-0.1446,0.0562,0.057,-0.1446,0,0.057,-0.0446,0,0.057,-0.0446,0.0562,0.087,-0.1446,0.0562,0.087,-0.1446,0,0.087,-0.0446,0,0.087,-0.0446,0.0562,0.1924,-0.1446,0.0562,0.1924,-0.1446,0,0.1924,-0.0446,0,0.1924,-0.12,1.1,0.05,0.12,1.1,0.05,0.12,1.1,-0.1,-0.12,1.1,-0.1,-0.14,1.42,0.045,0.14,1.42,0.045,0.14,1.42,-0.09,-0.14,1.42,-0.09,-0.24,1.52,0.035,0.24,1.52,0.035,0.24,1.52,-0.09,-0.24,1.52,-0.09,-0.05,1.56,0.03,0.05,1.56,0.03,0.05,1.56,-0.06,-0.05,1.56,-0.06,-0.05,1.6,0.06,0.05,1.6,0.06,0.05,1.62,-0.03,-0.05,1.62,-0.03,-0.07,1.777,0.13,0.07,1.777,0.13,0.07,1.777,-0.03,-0.07,1.777,-0.03,-0.07,1.6,0.13,0.07,1.6,0.13,0.07,1.66,-0.03,-0.07,1.66,-0.03,0.16,1.42,0.015,0.24,1.5,0.015,0.24,1.5,-0.075,0.16,1.42,-0.075,0.17,1.18,-0.025,0.23,1.18,-0.025,0.23,1.18,-0.085,0.17,1.18,-0.085,0.17,1.14,-0.025,0.23,1.14,-0.025,0.23,1.14,-0.085,0.17,1.14,-0.085,0.18,0.91,-0.05,0.22,0.91,-0.05,0.22,0.91,-0.09,0.18,0.91,-0.09,0.18,0.87,-0.02,0.22,0.87,-0.02,0.22,0.87,-0.1,0.18,0.87,-0.1,0.18,0.6976,-0.02,0.22,0.6976,-0.02,0.22,0.6976,-0.1,0.18,0.6976,-0.1,-0.16,1.42,0.015,-0.24,1.5,0.015,-0.24,1.5,-0.075,-0.16,1.42,-0.075,-0.17,1.18,-0.025,-0.23,1.18,-0.025,-0.23,1.18,-0.085,-0.17,1.18,-0.085,-0.17,1.14,-0.025,-0.23,1.14,-0.025,-0.23,1.14,-0.085,-0.17,1.14,-0.085,-0.18,0.91,-0.05,-0.22,0.91,-0.05,-0.22,0.91,-0.09,-0.18,0.91,-0.09,-0.18,0.87,-0.02,-0.22,0.87,-0.02,-0.22,0.87,-0.1,-0.18,0.87,-0.1,-0.18,0.6976,-0.02,-0.22,0.6976,-0.02,-0.22,0.6976,-0.1,-0.18,0.6976,-0.1];
HAnimHumanoid4.skinCoord = Coordinate89;

Group90 = browser.currentScene.createNode("Group");
Shape91 = browser.currentScene.createNode("Shape");
Shape91.DEF = "TrouserSkin";
Appearance92 = browser.currentScene.createNode("Appearance");
Material93 = browser.currentScene.createNode("Material");
Material93.diffuseColor = [0,0,1];
Material93.transparency = 0.5;
Appearance92.material = Material93;

Shape91.appearance = Appearance92;

//# 0: sacrum (8) # 1: l_hip joint (8) # 2: r_hip joint (8) # 3: l_thigh (48) # 4: l_knee joint (8) # 5: l_calf (40) # 10: r_thigh (48) # 11: r_knee joint (8) # 12: r_calf (40)
IndexedFaceSet94 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet94.coordIndex = [0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1];
Coordinate95 = browser.currentScene.createNode("Coordinate");
Coordinate95.USE = "SKINCOORD";
IndexedFaceSet94.coord = Coordinate95;

Shape91.geometry = IndexedFaceSet94;

Group90.children = [];

Group90.children[0] = Shape91;

Shape96 = browser.currentScene.createNode("Shape");
Shape96.DEF = "ShoeSkin";
Appearance97 = browser.currentScene.createNode("Appearance");
Material98 = browser.currentScene.createNode("Material");
Material98.diffuseColor = [0,0,0];
Material98.transparency = 0.5;
Appearance97.material = Material98;

Shape96.appearance = Appearance97;

//# 6: l_ankle joint (8) # 7: l_hindfoot (8) # 8: l_midtarsal joint (8) # 9: l_middistal (10) # 13: r_ankle joint (8) # 14: r_hindfoot (8) # 15: r_midtarsal joint (8) # 16: r_middistal (10)
IndexedFaceSet99 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet99.coordIndex = [60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1];
Coordinate100 = browser.currentScene.createNode("Coordinate");
Coordinate100.USE = "SKINCOORD";
IndexedFaceSet99.coord = Coordinate100;

Shape96.geometry = IndexedFaceSet99;

Group90.children[1] = Shape96;

Shape101 = browser.currentScene.createNode("Shape");
Shape101.DEF = "ShirtSkin";
Appearance102 = browser.currentScene.createNode("Appearance");
Material103 = browser.currentScene.createNode("Material");
Material103.diffuseColor = [1,1,0];
Material103.transparency = 0.5;
Appearance102.material = Material103;

Shape101.appearance = Appearance102;

//# 17: vl5_joint (8) # 18: l5 (28) # 21: l_shoulder joint (8) # 22: l_upperarm (8) # 23: l_elbow joint (8) # 24: l_forearm (8) # 27: r_shoulder joint (8) # 28: r_upperarm (8) # 29: r_elbow joint (8) # 30: r_forearm (8)
IndexedFaceSet104 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet104.coordIndex = [148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1];
Coordinate105 = browser.currentScene.createNode("Coordinate");
Coordinate105.USE = "SKINCOORD";
IndexedFaceSet104.coord = Coordinate105;

Shape101.geometry = IndexedFaceSet104;

Group90.children[2] = Shape101;

Shape106 = browser.currentScene.createNode("Shape");
Shape106.DEF = "HeadHandsFleshToneSkin";
Appearance107 = browser.currentScene.createNode("Appearance");
Material108 = browser.currentScene.createNode("Material");
Material108.diffuseColor = [1,0.75,0.75];
Material108.transparency = 0.5;
Appearance107.material = Material108;

Shape106.appearance = Appearance107;

//# 19: skullbase joint (8) # 20: skull (10) # 25: l_wrist joint (8) # 26: l_hand (10) # 31: r_wrist joint (8) # 32: r_hand (10)
IndexedFaceSet109 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet109.coordIndex = [172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1];
Coordinate110 = browser.currentScene.createNode("Coordinate");
Coordinate110.USE = "SKINCOORD";
IndexedFaceSet109.coord = Coordinate110;

Shape106.geometry = IndexedFaceSet109;

Group90.children[3] = Shape106;

Shape111 = browser.currentScene.createNode("Shape");
Shape111.DEF = "SkinLines";
Appearance112 = browser.currentScene.createNode("Appearance");
Material113 = browser.currentScene.createNode("Material");
Material113.diffuseColor = [0,0,0];
Appearance112.material = Material113;

Shape111.appearance = Appearance112;

//Combined set of prior IFS coordIndex values
IndexedLineSet114 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet114.coordIndex = [0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1,60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1,148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1,172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1];
Coordinate115 = browser.currentScene.createNode("Coordinate");
Coordinate115.USE = "SKINCOORD";
IndexedLineSet114.coord = Coordinate115;

Shape111.geometry = IndexedLineSet114;

Group90.children[4] = Shape111;

HAnimHumanoid4.skin[1] = Group90;

HAnimJoint116 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint116.USE = "boxman_r_wrist";
HAnimHumanoid4.joints[2] = HAnimJoint116;

HAnimJoint117 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint117.USE = "boxman_r_elbow";
HAnimHumanoid4.joints[3] = HAnimJoint117;

HAnimJoint118 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint118.USE = "boxman_r_shoulder";
HAnimHumanoid4.joints[4] = HAnimJoint118;

HAnimJoint119 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint119.USE = "boxman_l_wrist";
HAnimHumanoid4.joints[5] = HAnimJoint119;

HAnimJoint120 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint120.USE = "boxman_l_elbow";
HAnimHumanoid4.joints[6] = HAnimJoint120;

HAnimJoint121 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint121.USE = "boxman_l_shoulder";
HAnimHumanoid4.joints[7] = HAnimJoint121;

HAnimJoint122 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint122.USE = "boxman_skullbase";
HAnimHumanoid4.joints[8] = HAnimJoint122;

HAnimJoint123 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint123.USE = "boxman_vl5";
HAnimHumanoid4.joints[9] = HAnimJoint123;

HAnimJoint124 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint124.USE = "boxman_r_midtarsal";
HAnimHumanoid4.joints[10] = HAnimJoint124;

HAnimJoint125 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint125.USE = "boxman_r_ankle";
HAnimHumanoid4.joints[11] = HAnimJoint125;

HAnimJoint126 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint126.USE = "boxman_r_knee";
HAnimHumanoid4.joints[12] = HAnimJoint126;

HAnimJoint127 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint127.USE = "boxman_r_hip";
HAnimHumanoid4.joints[13] = HAnimJoint127;

HAnimJoint128 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint128.USE = "boxman_l_midtarsal";
HAnimHumanoid4.joints[14] = HAnimJoint128;

HAnimJoint129 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint129.USE = "boxman_l_ankle";
HAnimHumanoid4.joints[15] = HAnimJoint129;

HAnimJoint130 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint130.USE = "boxman_l_knee";
HAnimHumanoid4.joints[16] = HAnimJoint130;

HAnimJoint131 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint131.USE = "boxman_l_hip";
HAnimHumanoid4.joints[17] = HAnimJoint131;

HAnimJoint132 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint132.USE = "boxman_HumanoidRoot";
HAnimHumanoid4.joints[18] = HAnimJoint132;

HAnimSegment133 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment133.USE = "boxman_sacrum";
HAnimHumanoid4.segments[19] = HAnimSegment133;

HAnimSegment134 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment134.USE = "boxman_l_thigh";
HAnimHumanoid4.segments[20] = HAnimSegment134;

HAnimSegment135 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment135.USE = "boxman_l_calf";
HAnimHumanoid4.segments[21] = HAnimSegment135;

HAnimSegment136 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment136.USE = "boxman_l_hindfoot";
HAnimHumanoid4.segments[22] = HAnimSegment136;

HAnimSegment137 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment137.USE = "boxman_l_middistal";
HAnimHumanoid4.segments[23] = HAnimSegment137;

HAnimSegment138 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment138.USE = "boxman_r_thigh";
HAnimHumanoid4.segments[24] = HAnimSegment138;

HAnimSegment139 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment139.USE = "boxman_r_calf";
HAnimHumanoid4.segments[25] = HAnimSegment139;

HAnimSegment140 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment140.USE = "boxman_r_hindfoot";
HAnimHumanoid4.segments[26] = HAnimSegment140;

HAnimSegment141 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment141.USE = "boxman_r_middistal";
HAnimHumanoid4.segments[27] = HAnimSegment141;

HAnimSegment142 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment142.USE = "boxman_l5";
HAnimHumanoid4.segments[28] = HAnimSegment142;

HAnimSegment143 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment143.USE = "boxman_skull";
HAnimHumanoid4.segments[29] = HAnimSegment143;

HAnimSegment144 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment144.USE = "boxman_l_upperarm";
HAnimHumanoid4.segments[30] = HAnimSegment144;

HAnimSegment145 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment145.USE = "boxman_l_forearm";
HAnimHumanoid4.segments[31] = HAnimSegment145;

HAnimSegment146 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment146.USE = "boxman_l_hand";
HAnimHumanoid4.segments[32] = HAnimSegment146;

HAnimSegment147 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment147.USE = "boxman_r_upperarm";
HAnimHumanoid4.segments[33] = HAnimSegment147;

HAnimSegment148 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment148.USE = "boxman_r_forearm";
HAnimHumanoid4.segments[34] = HAnimSegment148;

HAnimSegment149 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment149.USE = "boxman_r_hand";
HAnimHumanoid4.segments[35] = HAnimSegment149;

HAnimSite150 = browser.currentScene.createNode("HAnimSite");
HAnimSite150.USE = "boxman_l_middistal_tip";
HAnimHumanoid4.viewpoints[36] = HAnimSite150;

HAnimSite151 = browser.currentScene.createNode("HAnimSite");
HAnimSite151.USE = "boxman_r_middistal_tip";
HAnimHumanoid4.viewpoints[37] = HAnimSite151;

HAnimSite152 = browser.currentScene.createNode("HAnimSite");
HAnimSite152.USE = "boxman_skull_tip";
HAnimHumanoid4.viewpoints[38] = HAnimSite152;

HAnimSite153 = browser.currentScene.createNode("HAnimSite");
HAnimSite153.USE = "boxman_l_hand_tip";
HAnimHumanoid4.viewpoints[39] = HAnimSite153;

HAnimSite154 = browser.currentScene.createNode("HAnimSite");
HAnimSite154.USE = "boxman_r_hand_tip";
HAnimHumanoid4.viewpoints[40] = HAnimSite154;

HAnimSite155 = browser.currentScene.createNode("HAnimSite");
HAnimSite155.name = "BoxMan_view";
Viewpoint156 = browser.currentScene.createNode("Viewpoint");
Viewpoint156.DEF = "Inclined_View";
Viewpoint156.description = "Inclined View";
Viewpoint156.orientation = [0,1,0,0.78];
Viewpoint156.position = [2,0.9,2];
HAnimSite155.children = [];

HAnimSite155.children[0] = Viewpoint156;

Viewpoint157 = browser.currentScene.createNode("Viewpoint");
Viewpoint157.DEF = "Front_View";
Viewpoint157.description = "Front View";
Viewpoint157.position = [0,1,3];
HAnimSite155.children[1] = Viewpoint157;

Viewpoint158 = browser.currentScene.createNode("Viewpoint");
Viewpoint158.DEF = "Best_View";
Viewpoint158.description = "Right-side View";
Viewpoint158.orientation = [0,1,0,-1.57];
Viewpoint158.position = [-3,1,0];
HAnimSite155.children[2] = Viewpoint158;

Viewpoint159 = browser.currentScene.createNode("Viewpoint");
Viewpoint159.DEF = "Side_View";
Viewpoint159.description = "Left-side View";
Viewpoint159.orientation = [0,1,0,1.57];
Viewpoint159.position = [3,1,0];
HAnimSite155.children[3] = Viewpoint159;

Viewpoint160 = browser.currentScene.createNode("Viewpoint");
Viewpoint160.DEF = "Top_View";
Viewpoint160.description = "Top View";
Viewpoint160.orientation = [1,0,0,-1.57];
Viewpoint160.position = [0,3,0];
HAnimSite155.children[4] = Viewpoint160;

HAnimHumanoid4.viewpoints[41] = HAnimSite155;

browser.currentScene.children[2] = HAnimHumanoid4;

Group161 = browser.currentScene.createNode("Group");
Group161.DEF = "StopAnimation";
TimeSensor162 = browser.currentScene.createNode("TimeSensor");
TimeSensor162.DEF = "StopTimer";
TimeSensor162.cycleInterval = 5.73;
TimeSensor162.loop = True;
Group161.children = [];

Group161.children[0] = TimeSensor162;

PositionInterpolator163 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator163.DEF = "Stop_HumanoidRootTransInterp";
PositionInterpolator163.key = [0,0.5,1];
PositionInterpolator163.keyValue = [0,0,0,0,0,0,0,0,0];
Group161.children[1] = PositionInterpolator163;

OrientationInterpolator164 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator164.DEF = "Stop_HumanoidRootRotInterp";
OrientationInterpolator164.key = [0,0.5,1];
OrientationInterpolator164.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[2] = OrientationInterpolator164;

OrientationInterpolator165 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator165.DEF = "Stop_sacroiliacRotInterp";
OrientationInterpolator165.key = [0,0.5,1];
OrientationInterpolator165.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[3] = OrientationInterpolator165;

OrientationInterpolator166 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator166.DEF = "Stop_l_hipRotInterp";
OrientationInterpolator166.key = [0,0.5,1];
OrientationInterpolator166.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[4] = OrientationInterpolator166;

OrientationInterpolator167 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator167.DEF = "Stop_l_kneeRotInterp";
OrientationInterpolator167.key = [0,0.5,1];
OrientationInterpolator167.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[5] = OrientationInterpolator167;

OrientationInterpolator168 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator168.DEF = "Stop_l_ankleRotInterp";
OrientationInterpolator168.key = [0,0.5,1];
OrientationInterpolator168.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[6] = OrientationInterpolator168;

OrientationInterpolator169 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator169.DEF = "Stop_l_subtalarRotInterp";
OrientationInterpolator169.key = [0,0.5,1];
OrientationInterpolator169.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[7] = OrientationInterpolator169;

OrientationInterpolator170 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator170.DEF = "Stop_l_midtarsalRotInterp";
OrientationInterpolator170.key = [0,0.5,1];
OrientationInterpolator170.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[8] = OrientationInterpolator170;

OrientationInterpolator171 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator171.DEF = "Stop_l_metatarsalRotInterp";
OrientationInterpolator171.key = [0,0.5,1];
OrientationInterpolator171.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[9] = OrientationInterpolator171;

OrientationInterpolator172 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator172.DEF = "Stop_r_hipRotInterp";
OrientationInterpolator172.key = [0,0.5,1];
OrientationInterpolator172.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[10] = OrientationInterpolator172;

OrientationInterpolator173 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator173.DEF = "Stop_r_kneeRotInterp";
OrientationInterpolator173.key = [0,0.5,1];
OrientationInterpolator173.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[11] = OrientationInterpolator173;

OrientationInterpolator174 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator174.DEF = "Stop_r_ankleRotInterp";
OrientationInterpolator174.key = [0,0.5,1];
OrientationInterpolator174.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[12] = OrientationInterpolator174;

OrientationInterpolator175 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator175.DEF = "Stop_r_subtalarRotInterp";
OrientationInterpolator175.key = [0,0.5,1];
OrientationInterpolator175.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[13] = OrientationInterpolator175;

OrientationInterpolator176 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator176.DEF = "Stop_r_midtarsalRotInterp";
OrientationInterpolator176.key = [0,0.5,1];
OrientationInterpolator176.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[14] = OrientationInterpolator176;

OrientationInterpolator177 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator177.DEF = "Stop_r_metatarsalRotInterp";
OrientationInterpolator177.key = [0,0.5,1];
OrientationInterpolator177.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[15] = OrientationInterpolator177;

OrientationInterpolator178 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator178.DEF = "Stop_vl5RotInterp";
OrientationInterpolator178.key = [0,0.5,1];
OrientationInterpolator178.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[16] = OrientationInterpolator178;

OrientationInterpolator179 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator179.DEF = "Stop_vl4RotInterp";
OrientationInterpolator179.key = [0,0.5,1];
OrientationInterpolator179.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[17] = OrientationInterpolator179;

OrientationInterpolator180 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator180.DEF = "Stop_vl3RotInterp";
OrientationInterpolator180.key = [0,0.5,1];
OrientationInterpolator180.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[18] = OrientationInterpolator180;

OrientationInterpolator181 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator181.DEF = "Stop_vl2RotInterp";
OrientationInterpolator181.key = [0,0.5,1];
OrientationInterpolator181.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[19] = OrientationInterpolator181;

OrientationInterpolator182 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator182.DEF = "Stop_vl1RotInterp";
OrientationInterpolator182.key = [0,0.5,1];
OrientationInterpolator182.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[20] = OrientationInterpolator182;

OrientationInterpolator183 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator183.DEF = "Stop_vt12RotInterp";
OrientationInterpolator183.key = [0,0.5,1];
OrientationInterpolator183.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[21] = OrientationInterpolator183;

OrientationInterpolator184 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator184.DEF = "Stop_vt11RotInterp";
OrientationInterpolator184.key = [0,0.5,1];
OrientationInterpolator184.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[22] = OrientationInterpolator184;

OrientationInterpolator185 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator185.DEF = "Stop_vt10RotInterp";
OrientationInterpolator185.key = [0,0.5,1];
OrientationInterpolator185.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[23] = OrientationInterpolator185;

OrientationInterpolator186 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator186.DEF = "Stop_vt9RotInterp";
OrientationInterpolator186.key = [0,0.5,1];
OrientationInterpolator186.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[24] = OrientationInterpolator186;

OrientationInterpolator187 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator187.DEF = "Stop_vt8RotInterp";
OrientationInterpolator187.key = [0,0.5,1];
OrientationInterpolator187.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[25] = OrientationInterpolator187;

OrientationInterpolator188 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator188.DEF = "Stop_vt7RotInterp";
OrientationInterpolator188.key = [0,0.5,1];
OrientationInterpolator188.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[26] = OrientationInterpolator188;

OrientationInterpolator189 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator189.DEF = "Stop_vt6RotInterp";
OrientationInterpolator189.key = [0,0.5,1];
OrientationInterpolator189.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[27] = OrientationInterpolator189;

OrientationInterpolator190 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator190.DEF = "Stop_vt5RotInterp";
OrientationInterpolator190.key = [0,0.5,1];
OrientationInterpolator190.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[28] = OrientationInterpolator190;

OrientationInterpolator191 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator191.DEF = "Stop_vt4RotInterp";
OrientationInterpolator191.key = [0,0.5,1];
OrientationInterpolator191.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[29] = OrientationInterpolator191;

OrientationInterpolator192 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator192.DEF = "Stop_vt3RotInterp";
OrientationInterpolator192.key = [0,0.5,1];
OrientationInterpolator192.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[30] = OrientationInterpolator192;

OrientationInterpolator193 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator193.DEF = "Stop_vt2RotInterp";
OrientationInterpolator193.key = [0,0.5,1];
OrientationInterpolator193.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[31] = OrientationInterpolator193;

OrientationInterpolator194 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator194.DEF = "Stop_vt1RotInterp";
OrientationInterpolator194.key = [0,0.5,1];
OrientationInterpolator194.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[32] = OrientationInterpolator194;

OrientationInterpolator195 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator195.DEF = "Stop_vc7RotInterp";
OrientationInterpolator195.key = [0,0.5,1];
OrientationInterpolator195.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[33] = OrientationInterpolator195;

OrientationInterpolator196 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator196.DEF = "Stop_vc6RotInterp";
OrientationInterpolator196.key = [0,0.5,1];
OrientationInterpolator196.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[34] = OrientationInterpolator196;

OrientationInterpolator197 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator197.DEF = "Stop_vc5RotInterp";
OrientationInterpolator197.key = [0,0.5,1];
OrientationInterpolator197.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[35] = OrientationInterpolator197;

OrientationInterpolator198 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator198.DEF = "Stop_vc4RotInterp";
OrientationInterpolator198.key = [0,0.5,1];
OrientationInterpolator198.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[36] = OrientationInterpolator198;

OrientationInterpolator199 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator199.DEF = "Stop_vc3RotInterp";
OrientationInterpolator199.key = [0,0.5,1];
OrientationInterpolator199.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[37] = OrientationInterpolator199;

OrientationInterpolator200 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator200.DEF = "Stop_vc2RotInterp";
OrientationInterpolator200.key = [0,0.5,1];
OrientationInterpolator200.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[38] = OrientationInterpolator200;

OrientationInterpolator201 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator201.DEF = "Stop_vc1RotInterp";
OrientationInterpolator201.key = [0,0.5,1];
OrientationInterpolator201.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[39] = OrientationInterpolator201;

OrientationInterpolator202 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator202.DEF = "Stop_skullbaseRotInterp";
OrientationInterpolator202.key = [0,0.5,1];
OrientationInterpolator202.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[40] = OrientationInterpolator202;

OrientationInterpolator203 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator203.DEF = "Stop_l_eyeball_jointRotInterp";
OrientationInterpolator203.key = [0,0.5,1];
OrientationInterpolator203.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[41] = OrientationInterpolator203;

OrientationInterpolator204 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator204.DEF = "Stop_r_eyeball_jointRotInterp";
OrientationInterpolator204.key = [0,0.5,1];
OrientationInterpolator204.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[42] = OrientationInterpolator204;

OrientationInterpolator205 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator205.DEF = "Stop_l_sternoclavicularRotInterp";
OrientationInterpolator205.key = [0,0.5,1];
OrientationInterpolator205.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[43] = OrientationInterpolator205;

OrientationInterpolator206 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator206.DEF = "Stop_l_acromioclavicularRotInterp";
OrientationInterpolator206.key = [0,0.5,1];
OrientationInterpolator206.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[44] = OrientationInterpolator206;

OrientationInterpolator207 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator207.DEF = "Stop_l_shoulderRotInterp";
OrientationInterpolator207.key = [0,0.5,1];
OrientationInterpolator207.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[45] = OrientationInterpolator207;

OrientationInterpolator208 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator208.DEF = "Stop_l_elbowRotInterp";
OrientationInterpolator208.key = [0,0.5,1];
OrientationInterpolator208.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[46] = OrientationInterpolator208;

OrientationInterpolator209 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator209.DEF = "Stop_l_wristRotInterp";
OrientationInterpolator209.key = [0,0.5,1];
OrientationInterpolator209.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[47] = OrientationInterpolator209;

OrientationInterpolator210 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator210.DEF = "Stop_l_thumb1RotInterp";
OrientationInterpolator210.key = [0,0.5,1];
OrientationInterpolator210.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[48] = OrientationInterpolator210;

OrientationInterpolator211 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator211.DEF = "Stop_l_thumb2RotInterp";
OrientationInterpolator211.key = [0,0.5,1];
OrientationInterpolator211.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[49] = OrientationInterpolator211;

OrientationInterpolator212 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator212.DEF = "Stop_l_thumb3RotInterp";
OrientationInterpolator212.key = [0,0.5,1];
OrientationInterpolator212.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[50] = OrientationInterpolator212;

OrientationInterpolator213 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator213.DEF = "Stop_l_index0RotInterp";
OrientationInterpolator213.key = [0,0.5,1];
OrientationInterpolator213.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[51] = OrientationInterpolator213;

OrientationInterpolator214 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator214.DEF = "Stop_l_index1RotInterp";
OrientationInterpolator214.key = [0,0.5,1];
OrientationInterpolator214.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[52] = OrientationInterpolator214;

OrientationInterpolator215 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator215.DEF = "Stop_l_index2RotInterp";
OrientationInterpolator215.key = [0,0.5,1];
OrientationInterpolator215.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[53] = OrientationInterpolator215;

OrientationInterpolator216 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator216.DEF = "Stop_l_index3RotInterp";
OrientationInterpolator216.key = [0,0.5,1];
OrientationInterpolator216.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[54] = OrientationInterpolator216;

OrientationInterpolator217 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator217.DEF = "Stop_l_middle0RotInterp";
OrientationInterpolator217.key = [0,0.5,1];
OrientationInterpolator217.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[55] = OrientationInterpolator217;

OrientationInterpolator218 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator218.DEF = "Stop_l_middle1RotInterp";
OrientationInterpolator218.key = [0,0.5,1];
OrientationInterpolator218.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[56] = OrientationInterpolator218;

OrientationInterpolator219 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator219.DEF = "Stop_l_middle2RotInterp";
OrientationInterpolator219.key = [0,0.5,1];
OrientationInterpolator219.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[57] = OrientationInterpolator219;

OrientationInterpolator220 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator220.DEF = "Stop_l_middle3RotInterp";
OrientationInterpolator220.key = [0,0.5,1];
OrientationInterpolator220.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[58] = OrientationInterpolator220;

OrientationInterpolator221 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator221.DEF = "Stop_l_ring0RotInterp";
OrientationInterpolator221.key = [0,0.5,1];
OrientationInterpolator221.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[59] = OrientationInterpolator221;

OrientationInterpolator222 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator222.DEF = "Stop_l_ring1RotInterp";
OrientationInterpolator222.key = [0,0.5,1];
OrientationInterpolator222.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[60] = OrientationInterpolator222;

OrientationInterpolator223 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator223.DEF = "Stop_l_ring2RotInterp";
OrientationInterpolator223.key = [0,0.5,1];
OrientationInterpolator223.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[61] = OrientationInterpolator223;

OrientationInterpolator224 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator224.DEF = "Stop_l_ring3RotInterp";
OrientationInterpolator224.key = [0,0.5,1];
OrientationInterpolator224.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[62] = OrientationInterpolator224;

OrientationInterpolator225 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator225.DEF = "Stop_l_pinky0RotInterp";
OrientationInterpolator225.key = [0,0.5,1];
OrientationInterpolator225.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[63] = OrientationInterpolator225;

OrientationInterpolator226 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator226.DEF = "Stop_l_pinky1RotInterp";
OrientationInterpolator226.key = [0,0.5,1];
OrientationInterpolator226.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[64] = OrientationInterpolator226;

OrientationInterpolator227 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator227.DEF = "Stop_l_pinky2RotInterp";
OrientationInterpolator227.key = [0,0.5,1];
OrientationInterpolator227.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[65] = OrientationInterpolator227;

OrientationInterpolator228 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator228.DEF = "Stop_l_pinky3RotInterp";
OrientationInterpolator228.key = [0,0.5,1];
OrientationInterpolator228.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[66] = OrientationInterpolator228;

OrientationInterpolator229 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator229.DEF = "Stop_r_sternoclavicularRotInterp";
OrientationInterpolator229.key = [0,0.5,1];
OrientationInterpolator229.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[67] = OrientationInterpolator229;

OrientationInterpolator230 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator230.DEF = "Stop_r_acromioclavicularRotInterp";
OrientationInterpolator230.key = [0,0.5,1];
OrientationInterpolator230.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[68] = OrientationInterpolator230;

OrientationInterpolator231 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator231.DEF = "Stop_r_shoulderRotInterp";
OrientationInterpolator231.key = [0,0.5,1];
OrientationInterpolator231.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[69] = OrientationInterpolator231;

OrientationInterpolator232 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator232.DEF = "Stop_r_elbowRotInterp";
OrientationInterpolator232.key = [0,0.5,1];
OrientationInterpolator232.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[70] = OrientationInterpolator232;

OrientationInterpolator233 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator233.DEF = "Stop_r_wristRotInterp";
OrientationInterpolator233.key = [0,0.5,1];
OrientationInterpolator233.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[71] = OrientationInterpolator233;

OrientationInterpolator234 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator234.DEF = "Stop_r_thumb1RotInterp";
OrientationInterpolator234.key = [0,0.5,1];
OrientationInterpolator234.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[72] = OrientationInterpolator234;

OrientationInterpolator235 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator235.DEF = "Stop_r_thumb2RotInterp";
OrientationInterpolator235.key = [0,0.5,1];
OrientationInterpolator235.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[73] = OrientationInterpolator235;

OrientationInterpolator236 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator236.DEF = "Stop_r_thumb3RotInterp";
OrientationInterpolator236.key = [0,0.5,1];
OrientationInterpolator236.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[74] = OrientationInterpolator236;

OrientationInterpolator237 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator237.DEF = "Stop_r_index0RotInterp";
OrientationInterpolator237.key = [0,0.5,1];
OrientationInterpolator237.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[75] = OrientationInterpolator237;

OrientationInterpolator238 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator238.DEF = "Stop_r_index1RotInterp";
OrientationInterpolator238.key = [0,0.5,1];
OrientationInterpolator238.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[76] = OrientationInterpolator238;

OrientationInterpolator239 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator239.DEF = "Stop_r_index2RotInterp";
OrientationInterpolator239.key = [0,0.5,1];
OrientationInterpolator239.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[77] = OrientationInterpolator239;

OrientationInterpolator240 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator240.DEF = "Stop_r_index3RotInterp";
OrientationInterpolator240.key = [0,0.5,1];
OrientationInterpolator240.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[78] = OrientationInterpolator240;

OrientationInterpolator241 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator241.DEF = "Stop_r_middle0RotInterp";
OrientationInterpolator241.key = [0,0.5,1];
OrientationInterpolator241.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[79] = OrientationInterpolator241;

OrientationInterpolator242 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator242.DEF = "Stop_r_middle1RotInterp";
OrientationInterpolator242.key = [0,0.5,1];
OrientationInterpolator242.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[80] = OrientationInterpolator242;

OrientationInterpolator243 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator243.DEF = "Stop_r_middle2RotInterp";
OrientationInterpolator243.key = [0,0.5,1];
OrientationInterpolator243.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[81] = OrientationInterpolator243;

OrientationInterpolator244 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator244.DEF = "Stop_r_middle3RotInterp";
OrientationInterpolator244.key = [0,0.5,1];
OrientationInterpolator244.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[82] = OrientationInterpolator244;

OrientationInterpolator245 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator245.DEF = "Stop_r_ring0RotInterp";
OrientationInterpolator245.key = [0,0.5,1];
OrientationInterpolator245.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[83] = OrientationInterpolator245;

OrientationInterpolator246 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator246.DEF = "Stop_r_ring1RotInterp";
OrientationInterpolator246.key = [0,0.5,1];
OrientationInterpolator246.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[84] = OrientationInterpolator246;

OrientationInterpolator247 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator247.DEF = "Stop_r_ring2RotInterp";
OrientationInterpolator247.key = [0,0.5,1];
OrientationInterpolator247.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[85] = OrientationInterpolator247;

OrientationInterpolator248 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator248.DEF = "Stop_r_ring3RotInterp";
OrientationInterpolator248.key = [0,0.5,1];
OrientationInterpolator248.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[86] = OrientationInterpolator248;

OrientationInterpolator249 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator249.DEF = "Stop_r_pinky0RotInterp";
OrientationInterpolator249.key = [0,0.5,1];
OrientationInterpolator249.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[87] = OrientationInterpolator249;

OrientationInterpolator250 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator250.DEF = "Stop_r_pinky1RotInterp";
OrientationInterpolator250.key = [0,0.5,1];
OrientationInterpolator250.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[88] = OrientationInterpolator250;

OrientationInterpolator251 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator251.DEF = "Stop_r_pinky2RotInterp";
OrientationInterpolator251.key = [0,0.5,1];
OrientationInterpolator251.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[89] = OrientationInterpolator251;

OrientationInterpolator252 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator252.DEF = "Stop_r_pinky3RotInterp";
OrientationInterpolator252.key = [0,0.5,1];
OrientationInterpolator252.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group161.children[90] = OrientationInterpolator252;

browser.currentScene.children[3] = Group161;

Group253 = browser.currentScene.createNode("Group");
Group253.DEF = "StandAnimation";
TimeSensor254 = browser.currentScene.createNode("TimeSensor");
TimeSensor254.DEF = "StandTimer";
TimeSensor254.cycleInterval = 5.73;
TimeSensor254.loop = True;
Group253.children = [];

Group253.children[0] = TimeSensor254;

OrientationInterpolator255 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator255.DEF = "Stand_r_metatarsalPitch";
OrientationInterpolator255.key = [0,0.2,0.4,0.6,0.7,1];
OrientationInterpolator255.keyValue = [1,0,0,0,-1,0,0,0.015,1,0,0,0.17,-1,0,0,0.025,1,0,0,0.01,1,0,0,0];
Group253.children[1] = OrientationInterpolator255;

OrientationInterpolator256 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator256.DEF = "Stand_r_ankleRotInterp";
OrientationInterpolator256.key = [0,0.5,1];
OrientationInterpolator256.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group253.children[2] = OrientationInterpolator256;

OrientationInterpolator257 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator257.DEF = "Stand_r_kneeRotInterp";
OrientationInterpolator257.key = [0,0.5,1];
OrientationInterpolator257.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group253.children[3] = OrientationInterpolator257;

OrientationInterpolator258 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator258.DEF = "Stand_r_hipRotInterp";
OrientationInterpolator258.key = [0,0.5,1];
OrientationInterpolator258.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group253.children[4] = OrientationInterpolator258;

OrientationInterpolator259 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator259.DEF = "Stand_l_ankleRotInterp";
OrientationInterpolator259.key = [0,0.5,1];
OrientationInterpolator259.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group253.children[5] = OrientationInterpolator259;

OrientationInterpolator260 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator260.DEF = "Stand_l_kneeRotInterp";
OrientationInterpolator260.key = [0,0.5,1];
OrientationInterpolator260.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group253.children[6] = OrientationInterpolator260;

OrientationInterpolator261 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator261.DEF = "Stand_l_hipRotInterp";
OrientationInterpolator261.key = [0,0.5,1];
OrientationInterpolator261.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group253.children[7] = OrientationInterpolator261;

OrientationInterpolator262 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator262.DEF = "Stand_r_wristRotInterp";
OrientationInterpolator262.key = [0,0.5,1];
OrientationInterpolator262.keyValue = [0,0,1,0,0,0,-1,0.25,0,0,1,0];
Group253.children[8] = OrientationInterpolator262;

OrientationInterpolator263 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator263.DEF = "Stand_r_elbowRotInterp";
OrientationInterpolator263.key = [0,0.5,1];
OrientationInterpolator263.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group253.children[9] = OrientationInterpolator263;

OrientationInterpolator264 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator264.DEF = "Stand_r_shoulderRotInterp";
OrientationInterpolator264.key = [0,0.5,1];
OrientationInterpolator264.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group253.children[10] = OrientationInterpolator264;

OrientationInterpolator265 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator265.DEF = "Stand_l_wristRotInterp";
OrientationInterpolator265.key = [0,0.5,1];
OrientationInterpolator265.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group253.children[11] = OrientationInterpolator265;

OrientationInterpolator266 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator266.DEF = "Stand_l_elbowRotInterp";
OrientationInterpolator266.key = [0,0.5,1];
OrientationInterpolator266.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group253.children[12] = OrientationInterpolator266;

OrientationInterpolator267 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator267.DEF = "Stand_l_shoulderRotInterp";
OrientationInterpolator267.key = [0,0.5,1];
OrientationInterpolator267.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group253.children[13] = OrientationInterpolator267;

OrientationInterpolator268 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator268.DEF = "Stand_headRotInterp";
OrientationInterpolator268.key = [0,0.5,1];
OrientationInterpolator268.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group253.children[14] = OrientationInterpolator268;

OrientationInterpolator269 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator269.DEF = "Stand_neckRotInterp";
OrientationInterpolator269.key = [0,0.5,1];
OrientationInterpolator269.keyValue = [0,0,1,0,-1,0,0,0.5,0,0,1,0];
Group253.children[15] = OrientationInterpolator269;

OrientationInterpolator270 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator270.DEF = "Stand_l_eyeballRotInterp";
OrientationInterpolator270.key = [0,0.4,0.7,1];
OrientationInterpolator270.keyValue = [0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0];
Group253.children[16] = OrientationInterpolator270;

OrientationInterpolator271 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator271.DEF = "Stand_r_eyeballRotInterp";
OrientationInterpolator271.key = [0,0.4,0.7,1];
OrientationInterpolator271.keyValue = [0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0];
Group253.children[17] = OrientationInterpolator271;

OrientationInterpolator272 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator272.DEF = "Stand_lower_bodyRotInterp";
OrientationInterpolator272.key = [0,0.5,1];
OrientationInterpolator272.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group253.children[18] = OrientationInterpolator272;

OrientationInterpolator273 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator273.DEF = "Stand_upper_bodyRotInterp";
OrientationInterpolator273.key = [0,0.5,1];
OrientationInterpolator273.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group253.children[19] = OrientationInterpolator273;

OrientationInterpolator274 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator274.DEF = "Stand_whole_bodyRotInterp";
OrientationInterpolator274.key = [0,0.5,1];
OrientationInterpolator274.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group253.children[20] = OrientationInterpolator274;

PositionInterpolator275 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator275.DEF = "Stand_whole_bodyTransInterp";
PositionInterpolator275.key = [0,0.5,1];
PositionInterpolator275.keyValue = [0,0,0,0,0,0,0,0,0];
Group253.children[21] = PositionInterpolator275;

OrientationInterpolator276 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator276.DEF = "Stand_l_sternoclavicularRoll";
OrientationInterpolator276.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator276.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group253.children[22] = OrientationInterpolator276;

OrientationInterpolator277 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator277.DEF = "Stand_l_acromioclavicularRoll";
OrientationInterpolator277.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator277.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group253.children[23] = OrientationInterpolator277;

OrientationInterpolator278 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator278.DEF = "Stand_r_sternoclavicularRoll";
OrientationInterpolator278.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator278.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group253.children[24] = OrientationInterpolator278;

OrientationInterpolator279 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator279.DEF = "Stand_r_acromioclavicularRoll";
OrientationInterpolator279.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator279.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group253.children[25] = OrientationInterpolator279;

OrientationInterpolator280 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator280.DEF = "Stand_sacroiliacYaw";
OrientationInterpolator280.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator280.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group253.children[26] = OrientationInterpolator280;

OrientationInterpolator281 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator281.DEF = "Stand_vl5Yaw";
OrientationInterpolator281.key = [0,0.2,0.4,0.5,0.6,0.8,1];
OrientationInterpolator281.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group253.children[27] = OrientationInterpolator281;

OrientationInterpolator282 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator282.DEF = "Stand_vc6Yaw";
OrientationInterpolator282.key = [0,0.2,0.4,0.5,0.6,0.8,1];
OrientationInterpolator282.keyValue = [0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,-1,0,0,0,0,-1,0,0,0,1,0,0];
Group253.children[28] = OrientationInterpolator282;

OrientationInterpolator283 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator283.DEF = "Stand_l_thumb1Pitch";
OrientationInterpolator283.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator283.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group253.children[29] = OrientationInterpolator283;

OrientationInterpolator284 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator284.DEF = "Stand_r_thumb1Pitch";
OrientationInterpolator284.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator284.keyValue = [1,0,0,0,1,0,0,0.5,1,0,0,0.1,1,0,0,0.27,1,0,0,0.2,1,0,0,0];
Group253.children[30] = OrientationInterpolator284;

OrientationInterpolator285 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator285.DEF = "Stand_r_index1Roll";
OrientationInterpolator285.key = [0,0.2,0.4,0.5,0.8,1];
OrientationInterpolator285.keyValue = [0,0,1,0,0,0,1,0.1,0,0,1,0.2,0,0,1,0.3,0,0,1,0,0,0,1,0];
Group253.children[31] = OrientationInterpolator285;

OrientationInterpolator286 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator286.DEF = "Stand_r_index2Roll";
OrientationInterpolator286.key = [0,0.2,0.4,0.5,0.8,1];
OrientationInterpolator286.keyValue = [0,0,1,0,0,0,1,0.4,0,0,1,0.32,0,0,1,0.25,0,0,1,0.2,0,0,1,0];
Group253.children[32] = OrientationInterpolator286;

OrientationInterpolator287 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator287.DEF = "Stand_r_index3Roll";
OrientationInterpolator287.key = [0,0.2,0.4,0.5,0.8,1];
OrientationInterpolator287.keyValue = [0,0,1,0,0,0,1,0.2,0,0,1,0.3,0,0,1,0.35,0,0,1,0.2,0,0,1,0];
Group253.children[33] = OrientationInterpolator287;

browser.currentScene.children[4] = Group253;

Group288 = browser.currentScene.createNode("Group");
Group288.DEF = "PitchesAnimation";
TimeSensor289 = browser.currentScene.createNode("TimeSensor");
TimeSensor289.DEF = "PitchTimer";
TimeSensor289.cycleInterval = 5.73;
TimeSensor289.loop = True;
Group288.children = [];

Group288.children[0] = TimeSensor289;

OrientationInterpolator290 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator290.DEF = "Pitch_r_metatarsalPitch";
OrientationInterpolator290.key = [0,0.2,0.4,0.6,0.7,1];
OrientationInterpolator290.keyValue = [1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0];
Group288.children[1] = OrientationInterpolator290;

OrientationInterpolator291 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator291.DEF = "Pitches_r_ankleRotInterp";
OrientationInterpolator291.key = [0,0.25,0.5,0.75,1];
OrientationInterpolator291.keyValue = [0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0];
Group288.children[2] = OrientationInterpolator291;

OrientationInterpolator292 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator292.DEF = "Pitches_r_kneeRotInterp";
OrientationInterpolator292.key = [0,0.5,1];
OrientationInterpolator292.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group288.children[3] = OrientationInterpolator292;

OrientationInterpolator293 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator293.DEF = "Pitches_r_hipRotInterp";
OrientationInterpolator293.key = [0,0.25,0.5,0.75,1];
OrientationInterpolator293.keyValue = [0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0];
Group288.children[4] = OrientationInterpolator293;

OrientationInterpolator294 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator294.DEF = "Pitches_l_ankleRotInterp";
OrientationInterpolator294.key = [0,0.25,0.5,0.75,1];
OrientationInterpolator294.keyValue = [0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0];
Group288.children[5] = OrientationInterpolator294;

OrientationInterpolator295 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator295.DEF = "Pitches_l_kneeRotInterp";
OrientationInterpolator295.key = [0,0.5,1];
OrientationInterpolator295.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group288.children[6] = OrientationInterpolator295;

OrientationInterpolator296 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator296.DEF = "Pitches_l_hipRotInterp";
OrientationInterpolator296.key = [0,0.25,0.5,0.75,1];
OrientationInterpolator296.keyValue = [0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0];
Group288.children[7] = OrientationInterpolator296;

OrientationInterpolator297 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator297.DEF = "Pitches_r_wristRotInterp";
OrientationInterpolator297.key = [0,0.5,1];
OrientationInterpolator297.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group288.children[8] = OrientationInterpolator297;

OrientationInterpolator298 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator298.DEF = "Pitches_r_elbowRotInterp";
OrientationInterpolator298.key = [0,0.5,1];
OrientationInterpolator298.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group288.children[9] = OrientationInterpolator298;

OrientationInterpolator299 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator299.DEF = "Pitches_r_shoulderRotInterp";
OrientationInterpolator299.key = [0,0.25,0.5,0.75,1];
OrientationInterpolator299.keyValue = [0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0];
Group288.children[10] = OrientationInterpolator299;

OrientationInterpolator300 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator300.DEF = "Pitches_l_wristRotInterp";
OrientationInterpolator300.key = [0,0.5,1];
OrientationInterpolator300.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group288.children[11] = OrientationInterpolator300;

OrientationInterpolator301 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator301.DEF = "Pitches_l_elbowRotInterp";
OrientationInterpolator301.key = [0,0.5,1];
OrientationInterpolator301.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group288.children[12] = OrientationInterpolator301;

OrientationInterpolator302 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator302.DEF = "Pitches_l_shoulderRotInterp";
OrientationInterpolator302.key = [0,0.25,0.5,0.75,1];
OrientationInterpolator302.keyValue = [0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0];
Group288.children[13] = OrientationInterpolator302;

OrientationInterpolator303 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator303.DEF = "Pitches_headRotInterp";
OrientationInterpolator303.key = [0,0.5,1];
OrientationInterpolator303.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group288.children[14] = OrientationInterpolator303;

OrientationInterpolator304 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator304.DEF = "Pitches_neckRotInterp";
OrientationInterpolator304.key = [0,0.25,0.55,1];
OrientationInterpolator304.keyValue = [0,0,1,0,1,0,0,0.55,-1,0,0,1.05,0,0,1,0];
Group288.children[15] = OrientationInterpolator304;

OrientationInterpolator305 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator305.DEF = "Pitches_lower_bodyRotInterp";
OrientationInterpolator305.key = [0,0.5,1];
OrientationInterpolator305.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group288.children[16] = OrientationInterpolator305;

OrientationInterpolator306 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator306.DEF = "Pitches_upper_bodyRotInterp";
OrientationInterpolator306.key = [0,0.5,1];
OrientationInterpolator306.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group288.children[17] = OrientationInterpolator306;

OrientationInterpolator307 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator307.DEF = "Pitches_whole_bodyRotInterp";
OrientationInterpolator307.key = [0,0.5,1];
OrientationInterpolator307.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group288.children[18] = OrientationInterpolator307;

PositionInterpolator308 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator308.DEF = "Pitches_whole_bodyTransInterp";
PositionInterpolator308.key = [0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1];
PositionInterpolator308.keyValue = [0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0];
Group288.children[19] = PositionInterpolator308;

OrientationInterpolator309 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator309.DEF = "Pitch_l_sternoclavicularRoll";
OrientationInterpolator309.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator309.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group288.children[20] = OrientationInterpolator309;

OrientationInterpolator310 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator310.DEF = "Pitch_l_acromioclavicularRoll";
OrientationInterpolator310.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator310.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group288.children[21] = OrientationInterpolator310;

OrientationInterpolator311 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator311.DEF = "Pitch_r_sternoclavicularRoll";
OrientationInterpolator311.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator311.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group288.children[22] = OrientationInterpolator311;

OrientationInterpolator312 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator312.DEF = "Pitch_r_acromioclavicularRoll";
OrientationInterpolator312.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator312.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group288.children[23] = OrientationInterpolator312;

OrientationInterpolator313 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator313.DEF = "Pitch_sacroiliacYaw";
OrientationInterpolator313.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator313.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group288.children[24] = OrientationInterpolator313;

OrientationInterpolator314 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator314.DEF = "Pitch_vl5Yaw";
OrientationInterpolator314.key = [0,0.2,0.4,0.5,0.6,0.8,1];
OrientationInterpolator314.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group288.children[25] = OrientationInterpolator314;

OrientationInterpolator315 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator315.DEF = "Pitch_vc6Yaw";
OrientationInterpolator315.key = [0,0.2,0.4,0.5,0.6,0.8,1];
OrientationInterpolator315.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group288.children[26] = OrientationInterpolator315;

OrientationInterpolator316 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator316.DEF = "Pitch_l_thumb1Pitch";
OrientationInterpolator316.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator316.keyValue = [1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0];
Group288.children[27] = OrientationInterpolator316;

OrientationInterpolator317 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator317.DEF = "Pitch_r_thumb1Pitch";
OrientationInterpolator317.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator317.keyValue = [1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0];
Group288.children[28] = OrientationInterpolator317;

browser.currentScene.children[5] = Group288;

Group318 = browser.currentScene.createNode("Group");
Group318.DEF = "YawsAnimation";
TimeSensor319 = browser.currentScene.createNode("TimeSensor");
TimeSensor319.DEF = "YawTimer";
TimeSensor319.cycleInterval = 5.73;
TimeSensor319.loop = True;
Group318.children = [];

Group318.children[0] = TimeSensor319;

OrientationInterpolator320 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator320.DEF = "Yaw_r_metatarsalPitch";
OrientationInterpolator320.key = [0,0.2,0.4,0.6,0.7,1];
OrientationInterpolator320.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group318.children[1] = OrientationInterpolator320;

OrientationInterpolator321 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator321.DEF = "Yaws_r_ankleRotInterp";
OrientationInterpolator321.key = [0,0.25,0.5,0.75,1];
OrientationInterpolator321.keyValue = [0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0];
Group318.children[2] = OrientationInterpolator321;

OrientationInterpolator322 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator322.DEF = "Yaws_r_kneeRotInterp";
OrientationInterpolator322.key = [0,0.25,0.5,0.75,1];
OrientationInterpolator322.keyValue = [0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0];
Group318.children[3] = OrientationInterpolator322;

OrientationInterpolator323 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator323.DEF = "Yaws_r_hipRotInterp";
OrientationInterpolator323.key = [0,0.5,1];
OrientationInterpolator323.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group318.children[4] = OrientationInterpolator323;

OrientationInterpolator324 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator324.DEF = "Yaws_l_ankleRotInterp";
OrientationInterpolator324.key = [0,0.25,0.5,0.75,1];
OrientationInterpolator324.keyValue = [0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0];
Group318.children[5] = OrientationInterpolator324;

OrientationInterpolator325 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator325.DEF = "Yaws_l_kneeRotInterp";
OrientationInterpolator325.key = [0,0.25,0.5,0.75,1];
OrientationInterpolator325.keyValue = [0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0];
Group318.children[6] = OrientationInterpolator325;

OrientationInterpolator326 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator326.DEF = "Yaws_l_hipRotInterp";
OrientationInterpolator326.key = [0,0.5,1];
OrientationInterpolator326.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group318.children[7] = OrientationInterpolator326;

OrientationInterpolator327 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator327.DEF = "Yaws_r_wristRotInterp";
OrientationInterpolator327.key = [0,0.5,1];
OrientationInterpolator327.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group318.children[8] = OrientationInterpolator327;

OrientationInterpolator328 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator328.DEF = "Yaws_r_elbowRotInterp";
OrientationInterpolator328.key = [0,0.5,1];
OrientationInterpolator328.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group318.children[9] = OrientationInterpolator328;

OrientationInterpolator329 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator329.DEF = "Yaws_r_shoulderRotInterp";
OrientationInterpolator329.key = [0,0.5,1];
OrientationInterpolator329.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group318.children[10] = OrientationInterpolator329;

OrientationInterpolator330 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator330.DEF = "Yaws_l_wristRotInterp";
OrientationInterpolator330.key = [0,0.5,1];
OrientationInterpolator330.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group318.children[11] = OrientationInterpolator330;

OrientationInterpolator331 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator331.DEF = "Yaws_l_elbowRotInterp";
OrientationInterpolator331.key = [0,0.5,1];
OrientationInterpolator331.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group318.children[12] = OrientationInterpolator331;

OrientationInterpolator332 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator332.DEF = "Yaws_l_shoulderRotInterp";
OrientationInterpolator332.key = [0,0.5,1];
OrientationInterpolator332.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group318.children[13] = OrientationInterpolator332;

OrientationInterpolator333 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator333.DEF = "Yaws_headRotInterp";
OrientationInterpolator333.key = [0,0.5,1];
OrientationInterpolator333.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group318.children[14] = OrientationInterpolator333;

OrientationInterpolator334 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator334.DEF = "Yaws_neckRotInterp";
OrientationInterpolator334.key = [0,0.25,0.5,0.75,1];
OrientationInterpolator334.keyValue = [0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0];
Group318.children[15] = OrientationInterpolator334;

OrientationInterpolator335 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator335.DEF = "Yaws_upper_bodyRotInterp";
OrientationInterpolator335.key = [0,0.25,0.5,0.75,1];
OrientationInterpolator335.keyValue = [0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0];
Group318.children[16] = OrientationInterpolator335;

OrientationInterpolator336 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator336.DEF = "Yaws_lower_bodyRotInterp";
OrientationInterpolator336.key = [0,0.5,1];
OrientationInterpolator336.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group318.children[17] = OrientationInterpolator336;

OrientationInterpolator337 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator337.DEF = "Yaws_whole_bodyRotInterp";
OrientationInterpolator337.key = [0,0.5,1];
OrientationInterpolator337.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group318.children[18] = OrientationInterpolator337;

PositionInterpolator338 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator338.DEF = "Yaws_whole_bodyTransInterp";
PositionInterpolator338.key = [0,0.5,1];
PositionInterpolator338.keyValue = [0,0,0,0,0,0,0,0,0];
Group318.children[19] = PositionInterpolator338;

OrientationInterpolator339 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator339.DEF = "Yaw_l_sternoclavicularRoll";
OrientationInterpolator339.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator339.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group318.children[20] = OrientationInterpolator339;

OrientationInterpolator340 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator340.DEF = "Yaw_l_acromioclavicularRoll";
OrientationInterpolator340.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator340.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group318.children[21] = OrientationInterpolator340;

OrientationInterpolator341 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator341.DEF = "Yaw_r_sternoclavicularRoll";
OrientationInterpolator341.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator341.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group318.children[22] = OrientationInterpolator341;

OrientationInterpolator342 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator342.DEF = "Yaw_r_acromioclavicularRoll";
OrientationInterpolator342.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator342.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group318.children[23] = OrientationInterpolator342;

OrientationInterpolator343 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator343.DEF = "Yaw_sacroiliacYaw";
OrientationInterpolator343.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator343.keyValue = [0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,0,0.24,0,-1,0,0.4,0,1,0,0];
Group318.children[24] = OrientationInterpolator343;

OrientationInterpolator344 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator344.DEF = "Yaw_vl5Yaw";
OrientationInterpolator344.key = [0,0.2,0.4,0.5,0.6,0.8,1];
OrientationInterpolator344.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group318.children[25] = OrientationInterpolator344;

OrientationInterpolator345 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator345.DEF = "Yaw_vc6Yaw";
OrientationInterpolator345.key = [0,0.2,0.4,0.5,0.6,0.8,1];
OrientationInterpolator345.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group318.children[26] = OrientationInterpolator345;

OrientationInterpolator346 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator346.DEF = "Yaw_l_thumb1Pitch";
OrientationInterpolator346.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator346.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group318.children[27] = OrientationInterpolator346;

OrientationInterpolator347 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator347.DEF = "Yaw_r_thumb1Pitch";
OrientationInterpolator347.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator347.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group318.children[28] = OrientationInterpolator347;

browser.currentScene.children[6] = Group318;

Group348 = browser.currentScene.createNode("Group");
Group348.DEF = "RollsAnimation";
TimeSensor349 = browser.currentScene.createNode("TimeSensor");
TimeSensor349.DEF = "RollTimer";
TimeSensor349.cycleInterval = 5.73;
TimeSensor349.loop = True;
Group348.children = [];

Group348.children[0] = TimeSensor349;

OrientationInterpolator350 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator350.DEF = "Roll_r_metatarsalPitch";
OrientationInterpolator350.key = [0,0.2,0.4,0.6,0.7,1];
OrientationInterpolator350.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group348.children[1] = OrientationInterpolator350;

OrientationInterpolator351 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator351.DEF = "Rolls_r_ankleRotInterp";
OrientationInterpolator351.key = [0,0.25,0.5,0.75,1];
OrientationInterpolator351.keyValue = [0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0];
Group348.children[2] = OrientationInterpolator351;

OrientationInterpolator352 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator352.DEF = "Rolls_r_kneeRotInterp";
OrientationInterpolator352.key = [0,0.5,1];
OrientationInterpolator352.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group348.children[3] = OrientationInterpolator352;

OrientationInterpolator353 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator353.DEF = "Rolls_r_hipRotInterp";
OrientationInterpolator353.key = [0,0.25,0.5,0.75,1];
OrientationInterpolator353.keyValue = [0,0,-1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0];
Group348.children[4] = OrientationInterpolator353;

OrientationInterpolator354 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator354.DEF = "Rolls_l_ankleRotInterp";
OrientationInterpolator354.key = [0,0.25,0.5,0.75,1];
OrientationInterpolator354.keyValue = [0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0];
Group348.children[5] = OrientationInterpolator354;

OrientationInterpolator355 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator355.DEF = "Rolls_l_kneeRotInterp";
OrientationInterpolator355.key = [0,0.5,1];
OrientationInterpolator355.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group348.children[6] = OrientationInterpolator355;

OrientationInterpolator356 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator356.DEF = "Rolls_l_hipRotInterp";
OrientationInterpolator356.key = [0,0.25,0.5,0.75,1];
OrientationInterpolator356.keyValue = [0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0];
Group348.children[7] = OrientationInterpolator356;

OrientationInterpolator357 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator357.DEF = "Rolls_r_wristRotInterp";
OrientationInterpolator357.key = [0,0.25,0.5,0.75,1];
OrientationInterpolator357.keyValue = [0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0];
Group348.children[8] = OrientationInterpolator357;

OrientationInterpolator358 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator358.DEF = "Rolls_r_elbowRotInterp";
OrientationInterpolator358.key = [0,0.5,1];
OrientationInterpolator358.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group348.children[9] = OrientationInterpolator358;

OrientationInterpolator359 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator359.DEF = "Rolls_r_shoulderRotInterp";
OrientationInterpolator359.key = [0,0.25,0.5,0.75,1];
OrientationInterpolator359.keyValue = [0,0,1,0,0,0,-1,1.5,0,0,-1,3,0,0,-1,1.5,0,0,1,0];
Group348.children[10] = OrientationInterpolator359;

OrientationInterpolator360 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator360.DEF = "Rolls_l_wristRotInterp";
OrientationInterpolator360.key = [0,0.25,0.5,0.75,1];
OrientationInterpolator360.keyValue = [0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0];
Group348.children[11] = OrientationInterpolator360;

OrientationInterpolator361 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator361.DEF = "Rolls_l_elbowRotInterp";
OrientationInterpolator361.key = [0,0.5,1];
OrientationInterpolator361.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group348.children[12] = OrientationInterpolator361;

OrientationInterpolator362 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator362.DEF = "Rolls_l_shoulderRotInterp";
OrientationInterpolator362.key = [0,0.25,0.5,0.75,1];
OrientationInterpolator362.keyValue = [0,0,1,0,0,0,1,1.5,0,0,1,3,0,0,1,1.5,0,0,1,0];
Group348.children[13] = OrientationInterpolator362;

OrientationInterpolator363 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator363.DEF = "Rolls_headRotInterp";
OrientationInterpolator363.key = [0,0.5,1];
OrientationInterpolator363.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group348.children[14] = OrientationInterpolator363;

OrientationInterpolator364 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator364.DEF = "Rolls_neckRotInterp";
OrientationInterpolator364.key = [0,0.25,0.5,0.75,1];
OrientationInterpolator364.keyValue = [0,0,1,0,0,0,1,1.25,0,0,1,0,0,0,-1,1.25,0,0,1,0];
Group348.children[15] = OrientationInterpolator364;

OrientationInterpolator365 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator365.DEF = "Rolls_lower_bodyRotInterp";
OrientationInterpolator365.key = [0,0.5,1];
OrientationInterpolator365.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group348.children[16] = OrientationInterpolator365;

OrientationInterpolator366 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator366.DEF = "Rolls_upper_bodyRotInterp";
OrientationInterpolator366.key = [0,0.5,1];
OrientationInterpolator366.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group348.children[17] = OrientationInterpolator366;

OrientationInterpolator367 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator367.DEF = "Rolls_whole_bodyRotInterp";
OrientationInterpolator367.key = [0,0.5,1];
OrientationInterpolator367.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group348.children[18] = OrientationInterpolator367;

PositionInterpolator368 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator368.DEF = "Rolls_whole_bodyTransInterp";
PositionInterpolator368.key = [0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1];
PositionInterpolator368.keyValue = [0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0];
Group348.children[19] = PositionInterpolator368;

OrientationInterpolator369 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator369.DEF = "Roll_l_sternoclavicularRoll";
OrientationInterpolator369.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator369.keyValue = [0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0];
Group348.children[20] = OrientationInterpolator369;

OrientationInterpolator370 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator370.DEF = "Roll_l_acromioclavicularRoll";
OrientationInterpolator370.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator370.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0];
Group348.children[21] = OrientationInterpolator370;

OrientationInterpolator371 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator371.DEF = "Roll_r_sternoclavicularRoll";
OrientationInterpolator371.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator371.keyValue = [0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0];
Group348.children[22] = OrientationInterpolator371;

OrientationInterpolator372 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator372.DEF = "Roll_r_acromioclavicularRoll";
OrientationInterpolator372.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator372.keyValue = [0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0];
Group348.children[23] = OrientationInterpolator372;

OrientationInterpolator373 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator373.DEF = "Roll_sacroiliacYaw";
OrientationInterpolator373.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator373.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group348.children[24] = OrientationInterpolator373;

OrientationInterpolator374 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator374.DEF = "Roll_vl5Yaw";
OrientationInterpolator374.key = [0,0.2,0.4,0.5,0.6,0.8,1];
OrientationInterpolator374.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group348.children[25] = OrientationInterpolator374;

OrientationInterpolator375 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator375.DEF = "Roll_vc6Yaw";
OrientationInterpolator375.key = [0,0.2,0.4,0.5,0.6,0.8,1];
OrientationInterpolator375.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group348.children[26] = OrientationInterpolator375;

OrientationInterpolator376 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator376.DEF = "Roll_l_thumb1Pitch";
OrientationInterpolator376.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator376.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group348.children[27] = OrientationInterpolator376;

OrientationInterpolator377 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator377.DEF = "Roll_r_thumb1Pitch";
OrientationInterpolator377.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator377.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group348.children[28] = OrientationInterpolator377;

browser.currentScene.children[7] = Group348;

Group378 = browser.currentScene.createNode("Group");
Group378.DEF = "WalkAnimation";
TimeSensor379 = browser.currentScene.createNode("TimeSensor");
TimeSensor379.DEF = "WalkTimer";
TimeSensor379.cycleInterval = 1.73;
TimeSensor379.loop = True;
Group378.children = [];

Group378.children[0] = TimeSensor379;

OrientationInterpolator380 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator380.DEF = "Walk_r_metatarsalPitch";
OrientationInterpolator380.key = [0,0.2,0.4,0.6,0.7,1];
OrientationInterpolator380.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group378.children[1] = OrientationInterpolator380;

OrientationInterpolator381 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator381.DEF = "Walk_r_ankleRotInterp";
OrientationInterpolator381.key = [0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1];
OrientationInterpolator381.keyValue = [0,0,1,0,-1,0,0,0.3533,-1,0,0,0.1072,1,0,0,0.2612,1,0,0,0.1268,-1,0,0,0.01793,-1,0,0,0.05824,-1,0,0,0.2398,-1,0,0,0.35,-1,0,0,0.3322,0,0,1,0];
Group378.children[2] = OrientationInterpolator381;

OrientationInterpolator382 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator382.DEF = "Walk_r_kneeRotInterp";
OrientationInterpolator382.key = [0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1];
OrientationInterpolator382.keyValue = [1,0,0,0.8573,1,0,0,0.8926,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.2475,1,0,0,0.8573];
Group378.children[3] = OrientationInterpolator382;

OrientationInterpolator383 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator383.DEF = "Walk_r_hipRotInterp";
OrientationInterpolator383.key = [0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1];
OrientationInterpolator383.keyValue = [-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481];
Group378.children[4] = OrientationInterpolator383;

OrientationInterpolator384 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator384.DEF = "Walk_l_ankleRotInterp";
OrientationInterpolator384.key = [0,0.125,0.2083,0.375,0.6667,0.9167,1];
OrientationInterpolator384.keyValue = [-1,0,0,0.06714,-1,0,0,0.2152,-1,0,0,0.3184,-1,0,0,0.4717,-1,0,0,0.2912,1,0,0,0.1222,-1,0,0,0.06714];
Group378.children[5] = OrientationInterpolator384;

OrientationInterpolator385 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator385.DEF = "Walk_l_kneeRotInterp";
OrientationInterpolator385.key = [0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1];
OrientationInterpolator385.keyValue = [1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226];
Group378.children[6] = OrientationInterpolator385;

OrientationInterpolator386 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator386.DEF = "Walk_l_hipRotInterp";
OrientationInterpolator386.key = [0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1];
OrientationInterpolator386.keyValue = [-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865];
Group378.children[7] = OrientationInterpolator386;

OrientationInterpolator387 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator387.DEF = "Walk_lower_bodyRotInterp";
OrientationInterpolator387.key = [0,0.5,1];
OrientationInterpolator387.keyValue = [0,0,-1,0.1056,0,0,1,0.09018,0,0,-1,0.1056];
Group378.children[8] = OrientationInterpolator387;

OrientationInterpolator388 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator388.DEF = "Walk_r_wristRotInterp";
OrientationInterpolator388.key = [0,0.375,0.9167,1];
OrientationInterpolator388.keyValue = [-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346];
Group378.children[9] = OrientationInterpolator388;

OrientationInterpolator389 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator389.DEF = "Walk_r_elbowRotInterp";
OrientationInterpolator389.key = [0,0.375,0.9167,1];
OrientationInterpolator389.keyValue = [-1,0,0,0.411508,-1,0,0,0.0925011,-1,0,0,0.572568,-1,0,0,0.411508];
Group378.children[10] = OrientationInterpolator389;

OrientationInterpolator390 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator390.DEF = "Walk_r_shoulderRotInterp";
OrientationInterpolator390.key = [0,0.375,0.9167,1];
OrientationInterpolator390.keyValue = [-1,0,0,0.09346,1,0,0,0.3197,-1,0,0,0.1564,-1,0,0,0.09346];
Group378.children[11] = OrientationInterpolator390;

OrientationInterpolator391 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator391.DEF = "Walk_l_wristRotInterp";
OrientationInterpolator391.key = [0,0.375,0.9167,1];
OrientationInterpolator391.keyValue = [0,-1,0,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,0,-1,0,0.461076];
Group378.children[12] = OrientationInterpolator391;

OrientationInterpolator392 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator392.DEF = "Walk_l_elbowRotInterp";
OrientationInterpolator392.key = [0,0.375,0.9167,1];
OrientationInterpolator392.keyValue = [-1,0,0,0.0659878,-1,0,0,0.488383,-1,0,0,0.0177536,-1,0,0,0.0659878];
Group378.children[13] = OrientationInterpolator392;

OrientationInterpolator393 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator393.DEF = "Walk_l_shoulderRotInterp";
OrientationInterpolator393.key = [0,0.375,0.9167,1];
OrientationInterpolator393.keyValue = [1,0,0,0.1189,-1,0,0,0.1861,1,0,0,0.3357,1,0,0,0.1189];
Group378.children[14] = OrientationInterpolator393;

OrientationInterpolator394 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator394.DEF = "Walk_headRotInterp";
OrientationInterpolator394.key = [0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1];
OrientationInterpolator394.keyValue = [0,-1,0,0.08642,0,1,0,0.1825,0,1,0,0.1505,0,1,0,0.1053,0,1,0,0.04391,0,-1,0,0.03119,0,-1,0,0.07936,0,-1,0,0.1616,0,-1,0,0.155,0,-1,0,0.08642];
Group378.children[15] = OrientationInterpolator394;

OrientationInterpolator395 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator395.DEF = "Walk_neckRotInterp";
OrientationInterpolator395.key = [0,1];
OrientationInterpolator395.keyValue = [0,0,1,0,0,0,1,0];
Group378.children[16] = OrientationInterpolator395;

OrientationInterpolator396 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator396.DEF = "Walk_upper_bodyRotInterp";
OrientationInterpolator396.key = [0,0.2083,0.375,0.75,0.8333,1];
OrientationInterpolator396.keyValue = [0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826];
Group378.children[17] = OrientationInterpolator396;

OrientationInterpolator397 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator397.DEF = "Walk_whole_bodyRotInterp";
OrientationInterpolator397.key = [0,1];
OrientationInterpolator397.keyValue = [0,0,1,0,0,0,1,0];
Group378.children[18] = OrientationInterpolator397;

PositionInterpolator398 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator398.DEF = "Walk_whole_bodyTranInterp";
PositionInterpolator398.key = [0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1];
PositionInterpolator398.keyValue = [0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0];
Group378.children[19] = PositionInterpolator398;

OrientationInterpolator399 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator399.DEF = "Walk_l_sternoclavicularRoll";
OrientationInterpolator399.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator399.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group378.children[20] = OrientationInterpolator399;

OrientationInterpolator400 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator400.DEF = "Walk_l_acromioclavicularRoll";
OrientationInterpolator400.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator400.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group378.children[21] = OrientationInterpolator400;

OrientationInterpolator401 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator401.DEF = "Walk_r_sternoclavicularRoll";
OrientationInterpolator401.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator401.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group378.children[22] = OrientationInterpolator401;

OrientationInterpolator402 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator402.DEF = "Walk_r_acromioclavicularRoll";
OrientationInterpolator402.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator402.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group378.children[23] = OrientationInterpolator402;

OrientationInterpolator403 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator403.DEF = "Walk_sacroiliacYaw";
OrientationInterpolator403.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator403.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group378.children[24] = OrientationInterpolator403;

OrientationInterpolator404 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator404.DEF = "Walk_vl5Yaw";
OrientationInterpolator404.key = [0,0.2,0.4,0.5,0.6,0.8,1];
OrientationInterpolator404.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group378.children[25] = OrientationInterpolator404;

OrientationInterpolator405 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator405.DEF = "Walk_vc6Yaw";
OrientationInterpolator405.key = [0,0.2,0.4,0.5,0.6,0.8,1];
OrientationInterpolator405.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group378.children[26] = OrientationInterpolator405;

OrientationInterpolator406 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator406.DEF = "Walk_l_thumb1Pitch";
OrientationInterpolator406.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator406.keyValue = [1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0];
Group378.children[27] = OrientationInterpolator406;

OrientationInterpolator407 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator407.DEF = "Walk_r_thumb1Pitch";
OrientationInterpolator407.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator407.keyValue = [1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0];
Group378.children[28] = OrientationInterpolator407;

browser.currentScene.children[8] = Group378;

Group408 = browser.currentScene.createNode("Group");
Group408.DEF = "RunAnimation";
TimeSensor409 = browser.currentScene.createNode("TimeSensor");
TimeSensor409.DEF = "RunTimer";
TimeSensor409.cycleInterval = 0.9;
TimeSensor409.loop = True;
Group408.children = [];

Group408.children[0] = TimeSensor409;

OrientationInterpolator410 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator410.DEF = "Run_r_metatarsalPitch";
OrientationInterpolator410.key = [0,0.2,0.4,0.6,0.7,1];
OrientationInterpolator410.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group408.children[1] = OrientationInterpolator410;

OrientationInterpolator411 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator411.DEF = "Run_l_hipRotInterp_Run";
OrientationInterpolator411.key = [0,0.2182,0.4909,0.7455,1];
OrientationInterpolator411.keyValue = [-0.99,0.033,0.04,1.42,-0.99,0.1328,0.067,0.42,0.99,0.014,0.009,0.9,-0.99,0.0703,0.05,0.7,-0.99,0.033,0.04,1.42];
Group408.children[2] = OrientationInterpolator411;

OrientationInterpolator412 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator412.DEF = "Run_l_kneeRotInterp_Run";
OrientationInterpolator412.key = [0,0.2182,0.4909,0.7455,1];
OrientationInterpolator412.keyValue = [1,0,0,1.01,1,0,0,0.426,1,0,0,0.705,1,0,0,2.179,1,0,0,1.01];
Group408.children[3] = OrientationInterpolator412;

OrientationInterpolator413 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator413.DEF = "Run_l_ankleRotInterp_Run";
OrientationInterpolator413.key = [0,0.22,0.3,0.4,1];
OrientationInterpolator413.keyValue = [1,0,0,0.0374,-1,0,0,0.1037,-1,0,0,0.4328,1,0,0,0.1929,1,0,0,0.03574];
Group408.children[4] = OrientationInterpolator413;

OrientationInterpolator414 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator414.DEF = "Run_r_hipRotInterp_Run";
OrientationInterpolator414.key = [0,0.2545,0.4909,0.7091,1];
OrientationInterpolator414.keyValue = [0.99,-0.014,0.009,0.9,-0.99,-0.0703,-0.05,0.7,-0.99,-0.033,0.04,1.42,-0.99,-0.1328,-0.067,0.42,0.99,-0.014,0.009,0.9];
Group408.children[5] = OrientationInterpolator414;

OrientationInterpolator415 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator415.DEF = "Run_r_kneeRotInterp_Run";
OrientationInterpolator415.key = [0,0.2545,0.4909,0.7091,1];
OrientationInterpolator415.keyValue = [1,0,0,0.705,1,0,0,2.179,1,0,0,1.01,1,0,0,0.426,1,0,0,0.705];
Group408.children[6] = OrientationInterpolator415;

OrientationInterpolator416 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator416.DEF = "Run_r_ankleRotInterp_Run";
OrientationInterpolator416.key = [0,0.4,0.71,0.8,0.82,1];
OrientationInterpolator416.keyValue = [1,0,0,0.2323,-1,0,0,0.07843,-1,0,0,0.32,-1,0,0,0.374,-1,0,0,0.3478,1,0,0,0.2323];
Group408.children[7] = OrientationInterpolator416;

OrientationInterpolator417 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator417.DEF = "Run_l_shoulderRotInterp_Run";
OrientationInterpolator417.key = [0,0.2182,0.4909,0.7455,1];
OrientationInterpolator417.keyValue = [0.99,-0.074,0.25,1.5,0.99,-0.092,0.44,0.3,-0.99,0.136,0.25,0.85,0.99,-0.081,0.38,0.4,0.99,-0.074,0.25,1.5];
Group408.children[8] = OrientationInterpolator417;

OrientationInterpolator418 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator418.DEF = "Run_l_elbowRotInterp_Run";
OrientationInterpolator418.key = [0,0.2182,0.4909,0.7455,1];
OrientationInterpolator418.keyValue = [-1,0,0,1.85,-0.99,-0.19,0.18,1.35,-1,0,0,0.975,-0.99,-0.09,-0.02,1.55,-1,0,0,1.85];
Group408.children[9] = OrientationInterpolator418;

OrientationInterpolator419 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator419.DEF = "Run_l_wristRotInterp_Run";
OrientationInterpolator419.key = [0,0.25,0.5,0.75,1];
OrientationInterpolator419.keyValue = [-0.25,-1,0.08,0.14,0.25,1,0.08,0.14,0,0,1,0,-0.25,1,0.08,-0.14,-0.25,1,0.08,0.14];
Group408.children[10] = OrientationInterpolator419;

OrientationInterpolator420 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator420.DEF = "Run_r_shoulderRotInterp_Run";
OrientationInterpolator420.key = [0,0.2545,0.4909,0.7091,1];
OrientationInterpolator420.keyValue = [-0.99,-0.136,-0.25,0.85,0.99,0.081,-0.38,0.4,0.99,0.074,-0.25,1.5,0.99,0.081,-0.38,0.4,-0.99,-0.136,-0.25,0.85];
Group408.children[11] = OrientationInterpolator420;

OrientationInterpolator421 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator421.DEF = "Run_r_elbowRotInterp_Run";
OrientationInterpolator421.key = [0,0.2545,0.4909,0.7091,1];
OrientationInterpolator421.keyValue = [-1,0,0,0.975,-0.99,0.09,0.02,1.55,-1,0,0,1.85,-0.99,0.19,-0.18,1.35,-1,0,0,0.975];
Group408.children[12] = OrientationInterpolator421;

OrientationInterpolator422 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator422.DEF = "Run_r_wristRotInterp_Run";
OrientationInterpolator422.key = [0,1];
OrientationInterpolator422.keyValue = [-0.917742,-0.237244,-0.318536,0.214273,-0.917742,-0.237244,-0.318536,0.214273];
Group408.children[13] = OrientationInterpolator422;

OrientationInterpolator423 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator423.DEF = "Run_lower_bodyRotInterp_Run";
OrientationInterpolator423.key = [0,0.2182,0.4909,0.7455,1];
OrientationInterpolator423.keyValue = [0,-1,0,0.125,0,0,1,0,0,1,0,0.125,0,0,1,0,0,-1,0,0.125];
Group408.children[14] = OrientationInterpolator423;

OrientationInterpolator424 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator424.DEF = "Run_headRotInterp_Run";
OrientationInterpolator424.key = [0,0.2545,0.4909,0.7091,1];
OrientationInterpolator424.keyValue = [1,0,0,0.08,1,0,0,0.12,1,0,0,0.3,1,0,0,0.3,1,0,0,0.08];
Group408.children[15] = OrientationInterpolator424;

OrientationInterpolator425 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator425.DEF = "Run_neckRotInterp_Run";
OrientationInterpolator425.key = [0,0.2545,0.4909,0.7091,1];
OrientationInterpolator425.keyValue = [0.7,0,0,0.4,-0.7,-0.7,0,0.4,0,0,0,0.4,-0.7,0.7,0,0.4,0.7,0,0,0.4];
Group408.children[16] = OrientationInterpolator425;

OrientationInterpolator426 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator426.DEF = "Run_upper_bodyRotInterp_Run";
OrientationInterpolator426.key = [0,0.2545,0.4909,0.7636,1];
OrientationInterpolator426.keyValue = [0.97,0.65,0.086,0.5,0.9,0.003,-0.02,0.38,0.95,-0.68,-0.086,0.5,0.9,0.004,-0.025,0.4,0.97,0.65,0.086,0.5];
Group408.children[17] = OrientationInterpolator426;

OrientationInterpolator427 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator427.DEF = "Run_whole_bodyRotInterp_Run";
OrientationInterpolator427.key = [0,0.25,0.5,0.75,1];
OrientationInterpolator427.keyValue = [1,0,0,0.06,1,0,0,0.167,1,0,0,0.06,1,0,0,0.168,1,0,0,0.06];
Group408.children[18] = OrientationInterpolator427;

PositionInterpolator428 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator428.DEF = "Run_whole_bodyTranInterp_Run";
PositionInterpolator428.key = [0,0.22,0.3,0.31,0.5,0.69,0.7,0.78,1];
PositionInterpolator428.keyValue = [0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0];
Group408.children[19] = PositionInterpolator428;

OrientationInterpolator429 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator429.DEF = "Run_l_sternoclavicularRoll";
OrientationInterpolator429.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator429.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group408.children[20] = OrientationInterpolator429;

OrientationInterpolator430 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator430.DEF = "Run_l_acromioclavicularRoll";
OrientationInterpolator430.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator430.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group408.children[21] = OrientationInterpolator430;

OrientationInterpolator431 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator431.DEF = "Run_r_sternoclavicularRoll";
OrientationInterpolator431.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator431.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group408.children[22] = OrientationInterpolator431;

OrientationInterpolator432 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator432.DEF = "Run_r_acromioclavicularRoll";
OrientationInterpolator432.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator432.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group408.children[23] = OrientationInterpolator432;

OrientationInterpolator433 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator433.DEF = "Run_sacroiliacYaw";
OrientationInterpolator433.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator433.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group408.children[24] = OrientationInterpolator433;

OrientationInterpolator434 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator434.DEF = "Run_vl5Yaw";
OrientationInterpolator434.key = [0,0.2,0.4,0.5,0.6,0.8,1];
OrientationInterpolator434.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group408.children[25] = OrientationInterpolator434;

OrientationInterpolator435 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator435.DEF = "Run_vc6Yaw";
OrientationInterpolator435.key = [0,0.2,0.4,0.5,0.6,0.8,1];
OrientationInterpolator435.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group408.children[26] = OrientationInterpolator435;

OrientationInterpolator436 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator436.DEF = "Run_l_thumb1Pitch";
OrientationInterpolator436.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator436.keyValue = [1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0];
Group408.children[27] = OrientationInterpolator436;

OrientationInterpolator437 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator437.DEF = "Run_r_thumb1Pitch";
OrientationInterpolator437.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator437.keyValue = [1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0];
Group408.children[28] = OrientationInterpolator437;

browser.currentScene.children[9] = Group408;

Group438 = browser.currentScene.createNode("Group");
Group438.DEF = "JumpAnimation";
TimeSensor439 = browser.currentScene.createNode("TimeSensor");
TimeSensor439.DEF = "JumpTimer";
TimeSensor439.cycleInterval = 3.73;
TimeSensor439.loop = True;
Group438.children = [];

Group438.children[0] = TimeSensor439;

OrientationInterpolator440 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator440.DEF = "Jump_r_metatarsalPitch";
OrientationInterpolator440.key = [0,0.2,0.4,0.6,0.7,1];
OrientationInterpolator440.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group438.children[1] = OrientationInterpolator440;

OrientationInterpolator441 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator441.DEF = "Jump_r_ankleRotInterp";
OrientationInterpolator441.key = [0,0.1,0.15,0.25,0.28,0.32,0.35,0.64,0.76,0.84,0.88,0.92,0.96,1];
OrientationInterpolator441.keyValue = [0,0,1,0,-1,0,0,0.6735,-1,0,0,0.6735,-1,0,0,0.3527,-1,0,0,0.3038,-1,0,0,0.07964,1,0,0,1.3,1,0,0,0.6509,1,0,0,0.3001,-1,0,0,0.2087,-1,0,0,0.3756,-1,0,0,0.3279,-1,0,0,0.1193,0,0,1,0];
Group438.children[2] = OrientationInterpolator441;

OrientationInterpolator442 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator442.DEF = "Jump_r_kneeRotInterp";
OrientationInterpolator442.key = [0,0.2,0.25,0.3,0.64,0.76,0.88,1];
OrientationInterpolator442.keyValue = [0,0,1,0,1,0,0,2.5,1,0,0,1.7,0,0,1,0,1,0,0,0.9507,1,0,0,0.5845,1,0,0,0.9054,0,0,1,0];
Group438.children[3] = OrientationInterpolator442;

OrientationInterpolator443 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator443.DEF = "Jump_r_hipRotInterp";
OrientationInterpolator443.key = [0,0.18,0.24,0.26,0.28,0.32,0.48,0.64,0.76,0.88,1];
OrientationInterpolator443.keyValue = [0,0,1,0,-1,0,0,1.63,-1,0,0,1.7,-1,0,0,1.55,-1,0,0,0.8943,-1,0,0,0.3698,0,0,1,0,-1,0,0,0.4963,-1,0,0,0.3829,-1,0,0,0.5169,0,0,1,0];
Group438.children[4] = OrientationInterpolator443;

OrientationInterpolator444 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator444.DEF = "Jump_l_ankleRotInterp";
OrientationInterpolator444.key = [0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1];
OrientationInterpolator444.keyValue = [0,0,1,0,-1,0,0,0.625,-1,0,0,0.625,-1,0,0,0.3364,-1,0,0,0.2742,-1,0,0,0.05078,1,0,0,0.2833,1,0,0,0.6667,1,0,0,0.2833,-1,0,0,0.2108,-1,0,0,0.375,-1,0,0,0.3146,-1,0,0,0.1174,0,0,1,0];
Group438.children[5] = OrientationInterpolator444;

OrientationInterpolator445 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator445.DEF = "Jump_l_kneeRotInterp";
OrientationInterpolator445.key = [0,0.28,0.32,0.48,0.64,0.76,0.88,1];
OrientationInterpolator445.keyValue = [0,0,1,0,1,0,0,2.047,1,0,0,2.047,0,0,1,0,1,0,0,1.566,1,0,0,0.5913,1,0,0,0.9235,0,0,1,0];
Group438.children[6] = OrientationInterpolator445;

OrientationInterpolator446 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator446.DEF = "Jump_l_hipRotInterp";
OrientationInterpolator446.key = [0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1];
OrientationInterpolator446.keyValue = [0,0,1,0,1,0,0,4.349,1,0,0,4.349,1,0,0,4.615,-1,0,0,0.9136,-1,0,0,0.3614,0,0,1,0,-1,0,0,0.7869,-1,0,0,0.3918,-1,0,0,0.5433,0,0,1,0];
Group438.children[7] = OrientationInterpolator446;

OrientationInterpolator447 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator447.DEF = "Jump_lower_bodyRotInterp";
OrientationInterpolator447.key = [0,0.28,0.32,0.48,0.76,1];
OrientationInterpolator447.keyValue = [0,0,1,0,1,0,0,0.1892,1,0,0,0.1892,0,0,1,0,0,0,1,0,0,0,1,0];
Group438.children[8] = OrientationInterpolator447;

OrientationInterpolator448 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator448.DEF = "Jump_r_wristRotInterp";
OrientationInterpolator448.key = [0,0.28,0.32,0.64,0.76,1];
OrientationInterpolator448.keyValue = [0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0];
Group438.children[9] = OrientationInterpolator448;

OrientationInterpolator449 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator449.DEF = "Jump_r_elbowRotInterp";
OrientationInterpolator449.key = [0,0.28,0.32,0.64,0.76,1];
OrientationInterpolator449.keyValue = [0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0];
Group438.children[10] = OrientationInterpolator449;

OrientationInterpolator450 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator450.DEF = "Jump_r_shoulderRotInterp";
OrientationInterpolator450.key = [0,0.28,0.32,0.64,0.76,0.88,1];
OrientationInterpolator450.keyValue = [0,0,1,0,0.9992,0.02042,0.03558,4.688,0.9992,0.02042,0.03558,4.688,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0];
Group438.children[11] = OrientationInterpolator450;

OrientationInterpolator451 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator451.DEF = "Jump_l_wristRotInterp";
OrientationInterpolator451.key = [0,0.48,0.52,0.64,0.76,0.88,1];
OrientationInterpolator451.keyValue = [0,0,1,0,0.0672928,0.989475,-0.128107,4.15574,0.0672928,0.989475,-0.128107,4.15574,0.00364942,0.999901,0.0135896,4.5822,0,-1,0,0.655922,-0.00050618,-0.999999,0.0012782,1.28397,0,0,1,0];
Group438.children[12] = OrientationInterpolator451;

OrientationInterpolator452 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator452.DEF = "Jump_l_elbowRotInterp";
OrientationInterpolator452.key = [0,0.28,0.32,0.58,0.72,1];
OrientationInterpolator452.keyValue = [0,0,1,0,-1,0,0,1.13,-1,0,0,1.7,-1,0,0,1.7,-1,0,0,0.4,0,0,1,0];
Group438.children[13] = OrientationInterpolator452;

OrientationInterpolator453 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator453.DEF = "Jump_l_shoulderRotInterp";
OrientationInterpolator453.key = [0,0.28,0.32,0.64,0.76,0.88,1];
OrientationInterpolator453.keyValue = [0,0,1,0,-0.9987,0.02554,0.04498,1.57,-0.9987,0.02554,0.04498,1.57,1,0.0004113,0.003055,4.114,-0.8413,0.3238,0.4329,1.453,-0.877,0.4198,0.2337,0.6009,0,0,1,0];
Group438.children[14] = OrientationInterpolator453;

OrientationInterpolator454 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator454.DEF = "Jump_headRotInterp";
OrientationInterpolator454.key = [0,0.28,0.32,0.48,0.76,1];
OrientationInterpolator454.keyValue = [0,0,1,0,-1,0,0,0.5989,-1,0,0,0.5989,-1,0,0,0.3216,1,0,0,0.06503,0,0,1,0];
Group438.children[15] = OrientationInterpolator454;

OrientationInterpolator455 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator455.DEF = "Jump_neckRotInterp";
OrientationInterpolator455.key = [0,0.28,0.32,0.48,0.76,1];
OrientationInterpolator455.keyValue = [0,0,1,0,-1,0,0,0.1942,-1,0,0,0.1942,0,0,1,0,1,0,0,0.2284,0,0,1,0];
Group438.children[16] = OrientationInterpolator455;

OrientationInterpolator456 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator456.DEF = "Jump_upper_bodyRotInterp";
OrientationInterpolator456.key = [0,0.22,0.28,0.34,0.71,0.88,1];
OrientationInterpolator456.keyValue = [0,0,1,0,1,0,0,1.05,1,0,0,1.051,-1,0,0,0.257,1,0,0,0.2171,1,0,0,0.3465,0,0,1,0];
Group438.children[17] = OrientationInterpolator456;

OrientationInterpolator457 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator457.DEF = "Jump_whole_bodyRotInterp";
OrientationInterpolator457.key = [0,0.28,0.32,0.48,0.64,0.76,1];
OrientationInterpolator457.keyValue = [0,0,1,0,1,0,0,0.3273,1,0,0,0.3273,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group438.children[18] = OrientationInterpolator457;

PositionInterpolator458 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator458.DEF = "Jump_whole_bodyTranInterp";
PositionInterpolator458.key = [0,0.04,0.07,0.11,0.15,0.19,0.22,0.25,0.27,0.31,0.33,0.35,0.38,0.53,0.544,0.76,0.8,0.84,0.88,0.92,0.96,1];
PositionInterpolator458.keyValue = [0,0,0,0,-0.01264,-0.01289,0,-0.04712,-0.03738,-0.0003345,-0.1049,-0.05353,-0.0005712,-0.1892,-0.06561,-0.0008233,-0.286,-0.06276,-0.0009591,-0.3795,-0.05148,-0.00106,-0.4484,-0.03656,-0.00106,-0.4484,-0.03656,-0.001122,-0.25,-0.1499,-0.0008616,-0.05,-0.06358,-0.0005128,0.15,-0.05488,0.0004779,0.55,0.02732,0.0001728,1.385,0.006873,0.00017,1.395,0.0069,0,0.35,0.02148,0,-0.01299,-0.01057,0,-0.06932,-0.01064,0.0001365,-0.1037,-0.005059,0.0001279,-0.07198,-0.007596,0.000141,-0.01626,-0.004935,0,0,0];
Group438.children[19] = PositionInterpolator458;

OrientationInterpolator459 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator459.DEF = "Jump_l_sternoclavicularRoll";
OrientationInterpolator459.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator459.keyValue = [0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0];
Group438.children[20] = OrientationInterpolator459;

OrientationInterpolator460 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator460.DEF = "Jump_l_acromioclavicularRoll";
OrientationInterpolator460.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator460.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0];
Group438.children[21] = OrientationInterpolator460;

OrientationInterpolator461 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator461.DEF = "Jump_r_sternoclavicularRoll";
OrientationInterpolator461.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator461.keyValue = [0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0];
Group438.children[22] = OrientationInterpolator461;

OrientationInterpolator462 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator462.DEF = "Jump_r_acromioclavicularRoll";
OrientationInterpolator462.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator462.keyValue = [0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0];
Group438.children[23] = OrientationInterpolator462;

OrientationInterpolator463 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator463.DEF = "Jump_sacroiliacYaw";
OrientationInterpolator463.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator463.keyValue = [0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0];
Group438.children[24] = OrientationInterpolator463;

OrientationInterpolator464 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator464.DEF = "Jump_vl5Yaw";
OrientationInterpolator464.key = [0,0.2,0.4,0.5,0.6,0.8,1];
OrientationInterpolator464.keyValue = [0,1,0,0,0,1,0,-0.1,0,1,0,0,0,1,0,0,1,0,0,0.6,0,1,0,0.1,0,1,0,0];
Group438.children[25] = OrientationInterpolator464;

OrientationInterpolator465 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator465.DEF = "Jump_vc6Yaw";
OrientationInterpolator465.key = [0,0.2,0.4,0.5,0.6,0.8,1];
OrientationInterpolator465.keyValue = [0,1,0,0,0,1,0,0.8,0,1,0,0,0,1,0,0,-1,0,0,0.6,0,-1,0,0.8,0,1,0,0];
Group438.children[26] = OrientationInterpolator465;

OrientationInterpolator466 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator466.DEF = "Jump_l_thumb1Pitch";
OrientationInterpolator466.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator466.keyValue = [1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0];
Group438.children[27] = OrientationInterpolator466;

OrientationInterpolator467 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator467.DEF = "Jump_r_thumb1Pitch";
OrientationInterpolator467.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator467.keyValue = [1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0];
Group438.children[28] = OrientationInterpolator467;

browser.currentScene.children[10] = Group438;

Group468 = browser.currentScene.createNode("Group");
Group468.DEF = "KickAnimation";
TimeSensor469 = browser.currentScene.createNode("TimeSensor");
TimeSensor469.DEF = "KickTimer";
TimeSensor469.cycleInterval = 3.73;
TimeSensor469.loop = True;
Group468.children = [];

Group468.children[0] = TimeSensor469;

OrientationInterpolator470 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator470.DEF = "Kick_l_sternoclavicularRoll";
OrientationInterpolator470.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator470.keyValue = [0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0];
Group468.children[1] = OrientationInterpolator470;

OrientationInterpolator471 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator471.DEF = "Kick_l_acromioclavicularRoll";
OrientationInterpolator471.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator471.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0];
Group468.children[2] = OrientationInterpolator471;

OrientationInterpolator472 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator472.DEF = "Kick_l_shoulderRoll";
OrientationInterpolator472.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator472.keyValue = [0,0,1,0,0,0,1,1.76,-0.25,0,1,1.76,0,0,1,1.256,0,0,1,0.05,0,0,1,0];
Group468.children[3] = OrientationInterpolator472;

OrientationInterpolator473 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator473.DEF = "Kick_l_ForeArmPitch";
OrientationInterpolator473.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator473.keyValue = [1,0,0,0,1,0,0,-0.55,-1,0.25,0,2.55,1,0,0,0,1,0,0,0,1,0,0,0];
Group468.children[4] = OrientationInterpolator473;

OrientationInterpolator474 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator474.DEF = "Kick_l_wristRoll";
OrientationInterpolator474.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator474.keyValue = [0,0,1,0,0,0,1,0,0,1,0,0.55,0,0,1,0,0,0,1,0,0,0,1,0];
Group468.children[5] = OrientationInterpolator474;

OrientationInterpolator475 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator475.DEF = "Kick_l_thumb1Pitch";
OrientationInterpolator475.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator475.keyValue = [1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0];
Group468.children[6] = OrientationInterpolator475;

OrientationInterpolator476 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator476.DEF = "Kick_r_sternoclavicularRoll";
OrientationInterpolator476.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator476.keyValue = [0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0];
Group468.children[7] = OrientationInterpolator476;

OrientationInterpolator477 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator477.DEF = "Kick_r_acromioclavicularRoll";
OrientationInterpolator477.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator477.keyValue = [0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0];
Group468.children[8] = OrientationInterpolator477;

OrientationInterpolator478 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator478.DEF = "Kick_r_shoulderRoll";
OrientationInterpolator478.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator478.keyValue = [0,0,1,0,0,0,1,-1.76,0.25,0,1,-1.76,0,0,1,-1.256,0,0,1,-0.05,0,0,1,0];
Group468.children[9] = OrientationInterpolator478;

OrientationInterpolator479 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator479.DEF = "Kick_r_ForeArmPitch";
OrientationInterpolator479.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator479.keyValue = [1,0,0,0,1,0,0,-0.55,1,0.25,0,-2.55,1,0,0,0,1,0,0,0,1,0,0,0];
Group468.children[10] = OrientationInterpolator479;

OrientationInterpolator480 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator480.DEF = "Kick_r_wristRoll";
OrientationInterpolator480.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator480.keyValue = [0,0,1,0,0,0,1,0,0,1,0,-0.55,0,0,1,0,0,0,1,0,0,0,1,0];
Group468.children[11] = OrientationInterpolator480;

OrientationInterpolator481 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator481.DEF = "Kick_r_thumb1Pitch";
OrientationInterpolator481.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator481.keyValue = [1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0];
Group468.children[12] = OrientationInterpolator481;

OrientationInterpolator482 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator482.DEF = "Kick_r_hipPitch";
OrientationInterpolator482.key = [0,0.2,0.3,0.5,0.6,0.9,1];
OrientationInterpolator482.keyValue = [1,0,0,0,1,0,0,0.9,-1,0,0,1.75,-1,0,0,2.25,-1,0,0,2,1,0,0,0,1,0,0,0];
Group468.children[13] = OrientationInterpolator482;

OrientationInterpolator483 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator483.DEF = "Kick_r_kneePitch";
OrientationInterpolator483.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator483.keyValue = [0,0,1,0,1,0,0,1.95,1,0,0,1.75,-1,0,0,0.28,1,0,0,0,1,0,0,0];
Group468.children[14] = OrientationInterpolator483;

OrientationInterpolator484 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator484.DEF = "Kick_l_hipPitch";
OrientationInterpolator484.key = [0,0.2,0.3,0.5,0.6,0.9,1];
OrientationInterpolator484.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group468.children[15] = OrientationInterpolator484;

OrientationInterpolator485 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator485.DEF = "Kick_l_kneePitch";
OrientationInterpolator485.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator485.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group468.children[16] = OrientationInterpolator485;

OrientationInterpolator486 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator486.DEF = "Kick_r_anklePitch";
OrientationInterpolator486.key = [0,0.2,0.4,0.6,0.7,1];
OrientationInterpolator486.keyValue = [0,0,1,0,-1,0,0,0.9,-1,0,0,0.95,1,0,0,0.75,-1,0,0,0.05,1,0,0,0];
Group468.children[17] = OrientationInterpolator486;

OrientationInterpolator487 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator487.DEF = "Kick_r_metatarsalPitch";
OrientationInterpolator487.key = [0,0.2,0.4,0.6,0.7,1];
OrientationInterpolator487.keyValue = [1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0];
Group468.children[18] = OrientationInterpolator487;

OrientationInterpolator488 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator488.DEF = "Kick_sacroiliacYaw";
OrientationInterpolator488.key = [0,0.2,0.4,0.6,0.8,1];
OrientationInterpolator488.keyValue = [0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0];
Group468.children[19] = OrientationInterpolator488;

OrientationInterpolator489 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator489.DEF = "Kick_vl5Yaw";
OrientationInterpolator489.key = [0,0.2,0.4,0.5,0.6,0.8,1];
OrientationInterpolator489.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group468.children[20] = OrientationInterpolator489;

OrientationInterpolator490 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator490.DEF = "Kick_vc6Yaw";
OrientationInterpolator490.key = [0,0.2,0.4,0.5,0.6,0.8,1];
OrientationInterpolator490.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0];
Group468.children[21] = OrientationInterpolator490;

OrientationInterpolator491 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator491.DEF = "Kick_lower_bodyRotInterp";
OrientationInterpolator491.key = [0,0.5,1];
OrientationInterpolator491.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group468.children[22] = OrientationInterpolator491;

OrientationInterpolator492 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator492.DEF = "Kick_upper_bodyRotInterp";
OrientationInterpolator492.key = [0,0.5,1];
OrientationInterpolator492.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group468.children[23] = OrientationInterpolator492;

OrientationInterpolator493 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator493.DEF = "Kick_whole_bodyRotInterp";
OrientationInterpolator493.key = [0,0.5,1];
OrientationInterpolator493.keyValue = [0,0,1,0,0,0,1,0,0,0,1,0];
Group468.children[24] = OrientationInterpolator493;

PositionInterpolator494 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator494.DEF = "Kick_whole_bodyTransInterp";
PositionInterpolator494.key = [0,0.5,1];
PositionInterpolator494.keyValue = [0,0,0,0,0,0,0,0,0];
Group468.children[25] = PositionInterpolator494;

OrientationInterpolator495 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator495.DEF = "Kick_neckRotInterp";
OrientationInterpolator495.key = [0,0.25,0.55,1];
OrientationInterpolator495.keyValue = [0,0,1,0,1,0,0,0.7,1,0,0,0.5,0,0,1,0];
Group468.children[26] = OrientationInterpolator495;

browser.currentScene.children[11] = Group468;

Group496 = browser.currentScene.createNode("Group");
Group496.DEF = "Interface";
Transform497 = browser.currentScene.createNode("Transform");
Transform497.DEF = "CoordinateSystemFloor";
Transform497.scale = [0.1,0.1,0.1];
Shape498 = browser.currentScene.createNode("Shape");
Shape498.DEF = "AxisLinesShape";
//RGB lines showing XYZ axes
IndexedLineSet499 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet499.colorIndex = [0,1,2];
IndexedLineSet499.colorPerVertex = False;
IndexedLineSet499.coordIndex = [0,1,-1,0,2,-1,0,3,-1];
Coordinate500 = browser.currentScene.createNode("Coordinate");
Coordinate500.point = [0,0,0,1,0,0,0,1,0,0,0,1];
IndexedLineSet499.coord = Coordinate500;

Color501 = browser.currentScene.createNode("Color");
Color501.color = [1,0,0,0,0.6,0,0,0,1];
IndexedLineSet499.color = Color501;

Shape498.geometry = IndexedLineSet499;

Transform497.children = [];

Transform497.children[0] = Shape498;

Group496.children = [];

Group496.children[0] = Transform497;

ProximitySensor502 = browser.currentScene.createNode("ProximitySensor");
ProximitySensor502.DEF = "HudProx";
ProximitySensor502.size = [50,50,50];
Group496.children[1] = ProximitySensor502;

Transform503 = browser.currentScene.createNode("Transform");
Transform503.DEF = "HudXform";
Transform503.rotation = [0,1,0,0.78];
Transform503.translation = [2,1,2];
Transform504 = browser.currentScene.createNode("Transform");
Transform504.scale = [0.02,0.02,0.02];
Transform504.translation = [-0.4,-0.01,-0.75];
Transform505 = browser.currentScene.createNode("Transform");
Transform505.DEF = "Stand_Text";
Transform505.translation = [0,-0.9,0];
TouchSensor506 = browser.currentScene.createNode("TouchSensor");
TouchSensor506.DEF = "Stand_Touch";
Transform505.children = [];

Transform505.children[0] = TouchSensor506;

Shape507 = browser.currentScene.createNode("Shape");
Shape507.DEF = "StandText";
Appearance508 = browser.currentScene.createNode("Appearance");
Material509 = browser.currentScene.createNode("Material");
Material509.DEF = "text_color";
Material509.ambientIntensity = 1;
Material509.diffuseColor = [0.819,0.521,0.169];
Material509.emissiveColor = [0.819,0.521,0.169];
Material509.specularColor = [0.819,0.521,0.169];
Appearance508.material = Material509;

Shape507.appearance = Appearance508;

Text510 = browser.currentScene.createNode("Text");
Text510.string = ["Stand"];
FontStyle511 = browser.currentScene.createNode("FontStyle");
FontStyle511.family = ["SANS"];
Text510.fontStyle = FontStyle511;

Shape507.geometry = Text510;

Transform505.children[1] = Shape507;

Shape512 = browser.currentScene.createNode("Shape");
Shape512.DEF = "Stand_Back";
Appearance513 = browser.currentScene.createNode("Appearance");
Material514 = browser.currentScene.createNode("Material");
Material514.DEF = "Clear";
Material514.ambientIntensity = 1;
Material514.diffuseColor = [0,0.5,0];
Material514.emissiveColor = [0,0.5,0];
Material514.transparency = 0.8;
Appearance513.material = Material514;

Shape512.appearance = Appearance513;

IndexedFaceSet515 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet515.DEF = "Backing";
IndexedFaceSet515.coordIndex = [0,1,2,3,-1];
Coordinate516 = browser.currentScene.createNode("Coordinate");
Coordinate516.point = [-0.2,-0.25,-0.01,3,-0.25,-0.01,3,1,-0.01,-0.2,1,-0.01];
IndexedFaceSet515.coord = Coordinate516;

Shape512.geometry = IndexedFaceSet515;

Transform505.children[2] = Shape512;

Transform504.children = [];

Transform504.children[0] = Transform505;

Transform517 = browser.currentScene.createNode("Transform");
Transform517.DEF = "Pitch_Text";
Transform517.translation = [0,-2.4,0];
TouchSensor518 = browser.currentScene.createNode("TouchSensor");
TouchSensor518.DEF = "Pitch_Touch";
Transform517.children = [];

Transform517.children[0] = TouchSensor518;

Shape519 = browser.currentScene.createNode("Shape");
Shape519.DEF = "PitchText";
Appearance520 = browser.currentScene.createNode("Appearance");
Material521 = browser.currentScene.createNode("Material");
Material521.USE = "text_color";
Appearance520.material = Material521;

Shape519.appearance = Appearance520;

Text522 = browser.currentScene.createNode("Text");
Text522.string = ["Pitch"];
FontStyle523 = browser.currentScene.createNode("FontStyle");
FontStyle523.family = ["SANS"];
Text522.fontStyle = FontStyle523;

Shape519.geometry = Text522;

Transform517.children[1] = Shape519;

Shape524 = browser.currentScene.createNode("Shape");
Shape524.DEF = "Pitch_Back";
Appearance525 = browser.currentScene.createNode("Appearance");
Material526 = browser.currentScene.createNode("Material");
Material526.USE = "Clear";
Appearance525.material = Material526;

Shape524.appearance = Appearance525;

IndexedFaceSet527 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet527.USE = "Backing";
Shape524.geometry = IndexedFaceSet527;

Transform517.children[2] = Shape524;

Transform504.children[1] = Transform517;

Transform528 = browser.currentScene.createNode("Transform");
Transform528.DEF = "Yaw_Text";
Transform528.translation = [0,-3.8,0];
TouchSensor529 = browser.currentScene.createNode("TouchSensor");
TouchSensor529.DEF = "Yaw_Touch";
Transform528.children = [];

Transform528.children[0] = TouchSensor529;

Shape530 = browser.currentScene.createNode("Shape");
Shape530.DEF = "YawText";
Appearance531 = browser.currentScene.createNode("Appearance");
Material532 = browser.currentScene.createNode("Material");
Material532.USE = "text_color";
Appearance531.material = Material532;

Shape530.appearance = Appearance531;

Text533 = browser.currentScene.createNode("Text");
Text533.string = ["Yaw"];
FontStyle534 = browser.currentScene.createNode("FontStyle");
FontStyle534.family = ["SANS"];
Text533.fontStyle = FontStyle534;

Shape530.geometry = Text533;

Transform528.children[1] = Shape530;

Shape535 = browser.currentScene.createNode("Shape");
Shape535.DEF = "Yaw_Back";
Appearance536 = browser.currentScene.createNode("Appearance");
Material537 = browser.currentScene.createNode("Material");
Material537.USE = "Clear";
Appearance536.material = Material537;

Shape535.appearance = Appearance536;

IndexedFaceSet538 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet538.USE = "Backing";
Shape535.geometry = IndexedFaceSet538;

Transform528.children[2] = Shape535;

Transform504.children[2] = Transform528;

Transform539 = browser.currentScene.createNode("Transform");
Transform539.DEF = "Roll_Text";
Transform539.translation = [0,-5.2,0];
TouchSensor540 = browser.currentScene.createNode("TouchSensor");
TouchSensor540.DEF = "Roll_Touch";
Transform539.children = [];

Transform539.children[0] = TouchSensor540;

Shape541 = browser.currentScene.createNode("Shape");
Shape541.DEF = "RollText";
Appearance542 = browser.currentScene.createNode("Appearance");
Material543 = browser.currentScene.createNode("Material");
Material543.USE = "text_color";
Appearance542.material = Material543;

Shape541.appearance = Appearance542;

Text544 = browser.currentScene.createNode("Text");
Text544.string = ["Roll"];
FontStyle545 = browser.currentScene.createNode("FontStyle");
FontStyle545.family = ["SANS"];
Text544.fontStyle = FontStyle545;

Shape541.geometry = Text544;

Transform539.children[1] = Shape541;

Shape546 = browser.currentScene.createNode("Shape");
Shape546.DEF = "Roll_Back";
Appearance547 = browser.currentScene.createNode("Appearance");
Material548 = browser.currentScene.createNode("Material");
Material548.USE = "Clear";
Appearance547.material = Material548;

Shape546.appearance = Appearance547;

IndexedFaceSet549 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet549.USE = "Backing";
Shape546.geometry = IndexedFaceSet549;

Transform539.children[2] = Shape546;

Transform504.children[3] = Transform539;

Transform550 = browser.currentScene.createNode("Transform");
Transform550.DEF = "Walk_Text";
Transform550.translation = [0,-6.6,0];
TouchSensor551 = browser.currentScene.createNode("TouchSensor");
TouchSensor551.DEF = "Walk_Touch";
Transform550.children = [];

Transform550.children[0] = TouchSensor551;

Shape552 = browser.currentScene.createNode("Shape");
Shape552.DEF = "WalkText";
Appearance553 = browser.currentScene.createNode("Appearance");
Material554 = browser.currentScene.createNode("Material");
Material554.USE = "text_color";
Appearance553.material = Material554;

Shape552.appearance = Appearance553;

Text555 = browser.currentScene.createNode("Text");
Text555.string = ["Walk"];
FontStyle556 = browser.currentScene.createNode("FontStyle");
FontStyle556.family = ["SANS"];
Text555.fontStyle = FontStyle556;

Shape552.geometry = Text555;

Transform550.children[1] = Shape552;

Shape557 = browser.currentScene.createNode("Shape");
Shape557.DEF = "Walk_Back";
Appearance558 = browser.currentScene.createNode("Appearance");
Material559 = browser.currentScene.createNode("Material");
Material559.USE = "Clear";
Appearance558.material = Material559;

Shape557.appearance = Appearance558;

IndexedFaceSet560 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet560.USE = "Backing";
Shape557.geometry = IndexedFaceSet560;

Transform550.children[2] = Shape557;

Transform504.children[4] = Transform550;

Transform561 = browser.currentScene.createNode("Transform");
Transform561.DEF = "Run_Text";
Transform561.translation = [0,-8,0];
TouchSensor562 = browser.currentScene.createNode("TouchSensor");
TouchSensor562.DEF = "Run_Touch";
Transform561.children = [];

Transform561.children[0] = TouchSensor562;

Shape563 = browser.currentScene.createNode("Shape");
Shape563.DEF = "RunText";
Appearance564 = browser.currentScene.createNode("Appearance");
Material565 = browser.currentScene.createNode("Material");
Material565.USE = "text_color";
Appearance564.material = Material565;

Shape563.appearance = Appearance564;

Text566 = browser.currentScene.createNode("Text");
Text566.string = ["Run"];
FontStyle567 = browser.currentScene.createNode("FontStyle");
FontStyle567.family = ["SANS"];
Text566.fontStyle = FontStyle567;

Shape563.geometry = Text566;

Transform561.children[1] = Shape563;

Shape568 = browser.currentScene.createNode("Shape");
Shape568.DEF = "Run_Back";
Appearance569 = browser.currentScene.createNode("Appearance");
Material570 = browser.currentScene.createNode("Material");
Material570.USE = "Clear";
Appearance569.material = Material570;

Shape568.appearance = Appearance569;

IndexedFaceSet571 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet571.USE = "Backing";
Shape568.geometry = IndexedFaceSet571;

Transform561.children[2] = Shape568;

Transform504.children[5] = Transform561;

Transform572 = browser.currentScene.createNode("Transform");
Transform572.DEF = "Jump_Text";
Transform572.translation = [0,-9.4,0];
TouchSensor573 = browser.currentScene.createNode("TouchSensor");
TouchSensor573.DEF = "Jump_Touch";
Transform572.children = [];

Transform572.children[0] = TouchSensor573;

Shape574 = browser.currentScene.createNode("Shape");
Shape574.DEF = "JumpText";
Appearance575 = browser.currentScene.createNode("Appearance");
Material576 = browser.currentScene.createNode("Material");
Material576.USE = "text_color";
Appearance575.material = Material576;

Shape574.appearance = Appearance575;

Text577 = browser.currentScene.createNode("Text");
Text577.string = ["Jump"];
FontStyle578 = browser.currentScene.createNode("FontStyle");
FontStyle578.family = ["SANS"];
Text577.fontStyle = FontStyle578;

Shape574.geometry = Text577;

Transform572.children[1] = Shape574;

Shape579 = browser.currentScene.createNode("Shape");
Shape579.DEF = "Jump_Back";
Appearance580 = browser.currentScene.createNode("Appearance");
Material581 = browser.currentScene.createNode("Material");
Material581.USE = "Clear";
Appearance580.material = Material581;

Shape579.appearance = Appearance580;

IndexedFaceSet582 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet582.USE = "Backing";
Shape579.geometry = IndexedFaceSet582;

Transform572.children[2] = Shape579;

Transform504.children[6] = Transform572;

Transform583 = browser.currentScene.createNode("Transform");
Transform583.DEF = "Kick_Text";
Transform583.translation = [0,-10.8,0];
TouchSensor584 = browser.currentScene.createNode("TouchSensor");
TouchSensor584.DEF = "Kick_Touch";
Transform583.children = [];

Transform583.children[0] = TouchSensor584;

Shape585 = browser.currentScene.createNode("Shape");
Shape585.DEF = "KickText";
Appearance586 = browser.currentScene.createNode("Appearance");
Material587 = browser.currentScene.createNode("Material");
Material587.USE = "text_color";
Appearance586.material = Material587;

Shape585.appearance = Appearance586;

Text588 = browser.currentScene.createNode("Text");
Text588.string = ["Kick"];
FontStyle589 = browser.currentScene.createNode("FontStyle");
FontStyle589.family = ["SANS"];
Text588.fontStyle = FontStyle589;

Shape585.geometry = Text588;

Transform583.children[1] = Shape585;

Shape590 = browser.currentScene.createNode("Shape");
Shape590.DEF = "Kick_Back";
Appearance591 = browser.currentScene.createNode("Appearance");
Material592 = browser.currentScene.createNode("Material");
Material592.USE = "Clear";
Appearance591.material = Material592;

Shape590.appearance = Appearance591;

IndexedFaceSet593 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet593.USE = "Backing";
Shape590.geometry = IndexedFaceSet593;

Transform583.children[2] = Shape590;

Transform504.children[7] = Transform583;

Transform594 = browser.currentScene.createNode("Transform");
Transform594.DEF = "Stop_Text";
Transform594.translation = [0,0.4,0];
TouchSensor595 = browser.currentScene.createNode("TouchSensor");
TouchSensor595.DEF = "Stop_Touch";
Transform594.children = [];

Transform594.children[0] = TouchSensor595;

Shape596 = browser.currentScene.createNode("Shape");
Shape596.DEF = "StopText";
Appearance597 = browser.currentScene.createNode("Appearance");
Material598 = browser.currentScene.createNode("Material");
Material598.USE = "text_color";
Appearance597.material = Material598;

Shape596.appearance = Appearance597;

Text599 = browser.currentScene.createNode("Text");
Text599.string = ["Default"];
FontStyle600 = browser.currentScene.createNode("FontStyle");
FontStyle600.family = ["SANS"];
Text599.fontStyle = FontStyle600;

Shape596.geometry = Text599;

Transform594.children[1] = Shape596;

Shape601 = browser.currentScene.createNode("Shape");
Shape601.DEF = "Stop_Back";
Appearance602 = browser.currentScene.createNode("Appearance");
Material603 = browser.currentScene.createNode("Material");
Material603.USE = "Clear";
Appearance602.material = Material603;

Shape601.appearance = Appearance602;

IndexedFaceSet604 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet604.USE = "Backing";
Shape601.geometry = IndexedFaceSet604;

Transform594.children[2] = Shape601;

Transform504.children[8] = Transform594;

Transform605 = browser.currentScene.createNode("Transform");
Transform605.DEF = "SceneLabel";
Transform605.translation = [1.3,3,0];
Shape606 = browser.currentScene.createNode("Shape");
Shape606.DEF = "SceneLabelText";
Appearance607 = browser.currentScene.createNode("Appearance");
Material608 = browser.currentScene.createNode("Material");
Material608.USE = "text_color";
Appearance607.material = Material608;

Shape606.appearance = Appearance607;

Text609 = browser.currentScene.createNode("Text");
Text609.string = ["BoxMan","Animation"];
FontStyle610 = browser.currentScene.createNode("FontStyle");
FontStyle610.family = ["SANS"];
FontStyle610.justify = ["MIDDLE","MIDDLE"];
Text609.fontStyle = FontStyle610;

Shape606.geometry = Text609;

Transform605.children = [];

Transform605.children[0] = Shape606;

Transform504.children[9] = Transform605;

Transform503.children = [];

Transform503.children[0] = Transform504;

Group496.children[2] = Transform503;

browser.currentScene.children[12] = Group496;

ROUTE611 = browser.currentScene.createNode("ROUTE");
ROUTE611.fromField = "fraction_changed";
ROUTE611.fromNode = "StopTimer";
ROUTE611.toField = "set_fraction";
ROUTE611.toNode = "Stop_HumanoidRootTransInterp";
browser.currentScene.children[13] = ROUTE611;

ROUTE612 = browser.currentScene.createNode("ROUTE");
ROUTE612.fromField = "fraction_changed";
ROUTE612.fromNode = "StopTimer";
ROUTE612.toField = "set_fraction";
ROUTE612.toNode = "Stop_HumanoidRootRotInterp";
browser.currentScene.children[14] = ROUTE612;

ROUTE613 = browser.currentScene.createNode("ROUTE");
ROUTE613.fromField = "fraction_changed";
ROUTE613.fromNode = "StopTimer";
ROUTE613.toField = "set_fraction";
ROUTE613.toNode = "Stop_sacroiliacRotInterp";
browser.currentScene.children[15] = ROUTE613;

ROUTE614 = browser.currentScene.createNode("ROUTE");
ROUTE614.fromField = "fraction_changed";
ROUTE614.fromNode = "StopTimer";
ROUTE614.toField = "set_fraction";
ROUTE614.toNode = "Stop_l_hipRotInterp";
browser.currentScene.children[16] = ROUTE614;

ROUTE615 = browser.currentScene.createNode("ROUTE");
ROUTE615.fromField = "fraction_changed";
ROUTE615.fromNode = "StopTimer";
ROUTE615.toField = "set_fraction";
ROUTE615.toNode = "Stop_l_kneeRotInterp";
browser.currentScene.children[17] = ROUTE615;

ROUTE616 = browser.currentScene.createNode("ROUTE");
ROUTE616.fromField = "fraction_changed";
ROUTE616.fromNode = "StopTimer";
ROUTE616.toField = "set_fraction";
ROUTE616.toNode = "Stop_l_ankleRotInterp";
browser.currentScene.children[18] = ROUTE616;

ROUTE617 = browser.currentScene.createNode("ROUTE");
ROUTE617.fromField = "fraction_changed";
ROUTE617.fromNode = "StopTimer";
ROUTE617.toField = "set_fraction";
ROUTE617.toNode = "Stop_l_subtalarRotInterp";
browser.currentScene.children[19] = ROUTE617;

ROUTE618 = browser.currentScene.createNode("ROUTE");
ROUTE618.fromField = "fraction_changed";
ROUTE618.fromNode = "StopTimer";
ROUTE618.toField = "set_fraction";
ROUTE618.toNode = "Stop_l_midtarsalRotInterp";
browser.currentScene.children[20] = ROUTE618;

ROUTE619 = browser.currentScene.createNode("ROUTE");
ROUTE619.fromField = "fraction_changed";
ROUTE619.fromNode = "StopTimer";
ROUTE619.toField = "set_fraction";
ROUTE619.toNode = "Stop_l_metatarsalRotInterp";
browser.currentScene.children[21] = ROUTE619;

ROUTE620 = browser.currentScene.createNode("ROUTE");
ROUTE620.fromField = "fraction_changed";
ROUTE620.fromNode = "StopTimer";
ROUTE620.toField = "set_fraction";
ROUTE620.toNode = "Stop_r_hipRotInterp";
browser.currentScene.children[22] = ROUTE620;

ROUTE621 = browser.currentScene.createNode("ROUTE");
ROUTE621.fromField = "fraction_changed";
ROUTE621.fromNode = "StopTimer";
ROUTE621.toField = "set_fraction";
ROUTE621.toNode = "Stop_r_kneeRotInterp";
browser.currentScene.children[23] = ROUTE621;

ROUTE622 = browser.currentScene.createNode("ROUTE");
ROUTE622.fromField = "fraction_changed";
ROUTE622.fromNode = "StopTimer";
ROUTE622.toField = "set_fraction";
ROUTE622.toNode = "Stop_r_ankleRotInterp";
browser.currentScene.children[24] = ROUTE622;

ROUTE623 = browser.currentScene.createNode("ROUTE");
ROUTE623.fromField = "fraction_changed";
ROUTE623.fromNode = "StopTimer";
ROUTE623.toField = "set_fraction";
ROUTE623.toNode = "Stop_r_subtalarRotInterp";
browser.currentScene.children[25] = ROUTE623;

ROUTE624 = browser.currentScene.createNode("ROUTE");
ROUTE624.fromField = "fraction_changed";
ROUTE624.fromNode = "StopTimer";
ROUTE624.toField = "set_fraction";
ROUTE624.toNode = "Stop_r_midtarsalRotInterp";
browser.currentScene.children[26] = ROUTE624;

ROUTE625 = browser.currentScene.createNode("ROUTE");
ROUTE625.fromField = "fraction_changed";
ROUTE625.fromNode = "StopTimer";
ROUTE625.toField = "set_fraction";
ROUTE625.toNode = "Stop_r_metatarsalRotInterp";
browser.currentScene.children[27] = ROUTE625;

ROUTE626 = browser.currentScene.createNode("ROUTE");
ROUTE626.fromField = "fraction_changed";
ROUTE626.fromNode = "StopTimer";
ROUTE626.toField = "set_fraction";
ROUTE626.toNode = "Stop_vl5RotInterp";
browser.currentScene.children[28] = ROUTE626;

ROUTE627 = browser.currentScene.createNode("ROUTE");
ROUTE627.fromField = "fraction_changed";
ROUTE627.fromNode = "StopTimer";
ROUTE627.toField = "set_fraction";
ROUTE627.toNode = "Stop_vl4RotInterp";
browser.currentScene.children[29] = ROUTE627;

ROUTE628 = browser.currentScene.createNode("ROUTE");
ROUTE628.fromField = "fraction_changed";
ROUTE628.fromNode = "StopTimer";
ROUTE628.toField = "set_fraction";
ROUTE628.toNode = "Stop_vl3RotInterp";
browser.currentScene.children[30] = ROUTE628;

ROUTE629 = browser.currentScene.createNode("ROUTE");
ROUTE629.fromField = "fraction_changed";
ROUTE629.fromNode = "StopTimer";
ROUTE629.toField = "set_fraction";
ROUTE629.toNode = "Stop_vl2RotInterp";
browser.currentScene.children[31] = ROUTE629;

ROUTE630 = browser.currentScene.createNode("ROUTE");
ROUTE630.fromField = "fraction_changed";
ROUTE630.fromNode = "StopTimer";
ROUTE630.toField = "set_fraction";
ROUTE630.toNode = "Stop_vl1RotInterp";
browser.currentScene.children[32] = ROUTE630;

ROUTE631 = browser.currentScene.createNode("ROUTE");
ROUTE631.fromField = "fraction_changed";
ROUTE631.fromNode = "StopTimer";
ROUTE631.toField = "set_fraction";
ROUTE631.toNode = "Stop_vt12RotInterp";
browser.currentScene.children[33] = ROUTE631;

ROUTE632 = browser.currentScene.createNode("ROUTE");
ROUTE632.fromField = "fraction_changed";
ROUTE632.fromNode = "StopTimer";
ROUTE632.toField = "set_fraction";
ROUTE632.toNode = "Stop_vt11RotInterp";
browser.currentScene.children[34] = ROUTE632;

ROUTE633 = browser.currentScene.createNode("ROUTE");
ROUTE633.fromField = "fraction_changed";
ROUTE633.fromNode = "StopTimer";
ROUTE633.toField = "set_fraction";
ROUTE633.toNode = "Stop_vt10RotInterp";
browser.currentScene.children[35] = ROUTE633;

ROUTE634 = browser.currentScene.createNode("ROUTE");
ROUTE634.fromField = "fraction_changed";
ROUTE634.fromNode = "StopTimer";
ROUTE634.toField = "set_fraction";
ROUTE634.toNode = "Stop_vt9RotInterp";
browser.currentScene.children[36] = ROUTE634;

ROUTE635 = browser.currentScene.createNode("ROUTE");
ROUTE635.fromField = "fraction_changed";
ROUTE635.fromNode = "StopTimer";
ROUTE635.toField = "set_fraction";
ROUTE635.toNode = "Stop_vt8RotInterp";
browser.currentScene.children[37] = ROUTE635;

ROUTE636 = browser.currentScene.createNode("ROUTE");
ROUTE636.fromField = "fraction_changed";
ROUTE636.fromNode = "StopTimer";
ROUTE636.toField = "set_fraction";
ROUTE636.toNode = "Stop_vt7RotInterp";
browser.currentScene.children[38] = ROUTE636;

ROUTE637 = browser.currentScene.createNode("ROUTE");
ROUTE637.fromField = "fraction_changed";
ROUTE637.fromNode = "StopTimer";
ROUTE637.toField = "set_fraction";
ROUTE637.toNode = "Stop_vt6RotInterp";
browser.currentScene.children[39] = ROUTE637;

ROUTE638 = browser.currentScene.createNode("ROUTE");
ROUTE638.fromField = "fraction_changed";
ROUTE638.fromNode = "StopTimer";
ROUTE638.toField = "set_fraction";
ROUTE638.toNode = "Stop_vt5RotInterp";
browser.currentScene.children[40] = ROUTE638;

ROUTE639 = browser.currentScene.createNode("ROUTE");
ROUTE639.fromField = "fraction_changed";
ROUTE639.fromNode = "StopTimer";
ROUTE639.toField = "set_fraction";
ROUTE639.toNode = "Stop_vt4RotInterp";
browser.currentScene.children[41] = ROUTE639;

ROUTE640 = browser.currentScene.createNode("ROUTE");
ROUTE640.fromField = "fraction_changed";
ROUTE640.fromNode = "StopTimer";
ROUTE640.toField = "set_fraction";
ROUTE640.toNode = "Stop_vt3RotInterp";
browser.currentScene.children[42] = ROUTE640;

ROUTE641 = browser.currentScene.createNode("ROUTE");
ROUTE641.fromField = "fraction_changed";
ROUTE641.fromNode = "StopTimer";
ROUTE641.toField = "set_fraction";
ROUTE641.toNode = "Stop_vt2RotInterp";
browser.currentScene.children[43] = ROUTE641;

ROUTE642 = browser.currentScene.createNode("ROUTE");
ROUTE642.fromField = "fraction_changed";
ROUTE642.fromNode = "StopTimer";
ROUTE642.toField = "set_fraction";
ROUTE642.toNode = "Stop_vt1RotInterp";
browser.currentScene.children[44] = ROUTE642;

ROUTE643 = browser.currentScene.createNode("ROUTE");
ROUTE643.fromField = "fraction_changed";
ROUTE643.fromNode = "StopTimer";
ROUTE643.toField = "set_fraction";
ROUTE643.toNode = "Stop_vc7RotInterp";
browser.currentScene.children[45] = ROUTE643;

ROUTE644 = browser.currentScene.createNode("ROUTE");
ROUTE644.fromField = "fraction_changed";
ROUTE644.fromNode = "StopTimer";
ROUTE644.toField = "set_fraction";
ROUTE644.toNode = "Stop_vc6RotInterp";
browser.currentScene.children[46] = ROUTE644;

ROUTE645 = browser.currentScene.createNode("ROUTE");
ROUTE645.fromField = "fraction_changed";
ROUTE645.fromNode = "StopTimer";
ROUTE645.toField = "set_fraction";
ROUTE645.toNode = "Stop_vc5RotInterp";
browser.currentScene.children[47] = ROUTE645;

ROUTE646 = browser.currentScene.createNode("ROUTE");
ROUTE646.fromField = "fraction_changed";
ROUTE646.fromNode = "StopTimer";
ROUTE646.toField = "set_fraction";
ROUTE646.toNode = "Stop_vc4RotInterp";
browser.currentScene.children[48] = ROUTE646;

ROUTE647 = browser.currentScene.createNode("ROUTE");
ROUTE647.fromField = "fraction_changed";
ROUTE647.fromNode = "StopTimer";
ROUTE647.toField = "set_fraction";
ROUTE647.toNode = "Stop_vc3RotInterp";
browser.currentScene.children[49] = ROUTE647;

ROUTE648 = browser.currentScene.createNode("ROUTE");
ROUTE648.fromField = "fraction_changed";
ROUTE648.fromNode = "StopTimer";
ROUTE648.toField = "set_fraction";
ROUTE648.toNode = "Stop_vc2RotInterp";
browser.currentScene.children[50] = ROUTE648;

ROUTE649 = browser.currentScene.createNode("ROUTE");
ROUTE649.fromField = "fraction_changed";
ROUTE649.fromNode = "StopTimer";
ROUTE649.toField = "set_fraction";
ROUTE649.toNode = "Stop_vc1RotInterp";
browser.currentScene.children[51] = ROUTE649;

ROUTE650 = browser.currentScene.createNode("ROUTE");
ROUTE650.fromField = "fraction_changed";
ROUTE650.fromNode = "StopTimer";
ROUTE650.toField = "set_fraction";
ROUTE650.toNode = "Stop_skullbaseRotInterp";
browser.currentScene.children[52] = ROUTE650;

ROUTE651 = browser.currentScene.createNode("ROUTE");
ROUTE651.fromField = "fraction_changed";
ROUTE651.fromNode = "StopTimer";
ROUTE651.toField = "set_fraction";
ROUTE651.toNode = "Stop_l_eyeball_jointRotInterp";
browser.currentScene.children[53] = ROUTE651;

ROUTE652 = browser.currentScene.createNode("ROUTE");
ROUTE652.fromField = "fraction_changed";
ROUTE652.fromNode = "StopTimer";
ROUTE652.toField = "set_fraction";
ROUTE652.toNode = "Stop_r_eyeball_jointRotInterp";
browser.currentScene.children[54] = ROUTE652;

ROUTE653 = browser.currentScene.createNode("ROUTE");
ROUTE653.fromField = "fraction_changed";
ROUTE653.fromNode = "StopTimer";
ROUTE653.toField = "set_fraction";
ROUTE653.toNode = "Stop_l_sternoclavicularRotInterp";
browser.currentScene.children[55] = ROUTE653;

ROUTE654 = browser.currentScene.createNode("ROUTE");
ROUTE654.fromField = "fraction_changed";
ROUTE654.fromNode = "StopTimer";
ROUTE654.toField = "set_fraction";
ROUTE654.toNode = "Stop_l_acromioclavicularRotInterp";
browser.currentScene.children[56] = ROUTE654;

ROUTE655 = browser.currentScene.createNode("ROUTE");
ROUTE655.fromField = "fraction_changed";
ROUTE655.fromNode = "StopTimer";
ROUTE655.toField = "set_fraction";
ROUTE655.toNode = "Stop_l_shoulderRotInterp";
browser.currentScene.children[57] = ROUTE655;

ROUTE656 = browser.currentScene.createNode("ROUTE");
ROUTE656.fromField = "fraction_changed";
ROUTE656.fromNode = "StopTimer";
ROUTE656.toField = "set_fraction";
ROUTE656.toNode = "Stop_l_elbowRotInterp";
browser.currentScene.children[58] = ROUTE656;

ROUTE657 = browser.currentScene.createNode("ROUTE");
ROUTE657.fromField = "fraction_changed";
ROUTE657.fromNode = "StopTimer";
ROUTE657.toField = "set_fraction";
ROUTE657.toNode = "Stop_l_wristRotInterp";
browser.currentScene.children[59] = ROUTE657;

ROUTE658 = browser.currentScene.createNode("ROUTE");
ROUTE658.fromField = "fraction_changed";
ROUTE658.fromNode = "StopTimer";
ROUTE658.toField = "set_fraction";
ROUTE658.toNode = "Stop_l_thumb1RotInterp";
browser.currentScene.children[60] = ROUTE658;

ROUTE659 = browser.currentScene.createNode("ROUTE");
ROUTE659.fromField = "fraction_changed";
ROUTE659.fromNode = "StopTimer";
ROUTE659.toField = "set_fraction";
ROUTE659.toNode = "Stop_l_thumb2RotInterp";
browser.currentScene.children[61] = ROUTE659;

ROUTE660 = browser.currentScene.createNode("ROUTE");
ROUTE660.fromField = "fraction_changed";
ROUTE660.fromNode = "StopTimer";
ROUTE660.toField = "set_fraction";
ROUTE660.toNode = "Stop_l_thumb3RotInterp";
browser.currentScene.children[62] = ROUTE660;

ROUTE661 = browser.currentScene.createNode("ROUTE");
ROUTE661.fromField = "fraction_changed";
ROUTE661.fromNode = "StopTimer";
ROUTE661.toField = "set_fraction";
ROUTE661.toNode = "Stop_l_index0RotInterp";
browser.currentScene.children[63] = ROUTE661;

ROUTE662 = browser.currentScene.createNode("ROUTE");
ROUTE662.fromField = "fraction_changed";
ROUTE662.fromNode = "StopTimer";
ROUTE662.toField = "set_fraction";
ROUTE662.toNode = "Stop_l_index1RotInterp";
browser.currentScene.children[64] = ROUTE662;

ROUTE663 = browser.currentScene.createNode("ROUTE");
ROUTE663.fromField = "fraction_changed";
ROUTE663.fromNode = "StopTimer";
ROUTE663.toField = "set_fraction";
ROUTE663.toNode = "Stop_l_index2RotInterp";
browser.currentScene.children[65] = ROUTE663;

ROUTE664 = browser.currentScene.createNode("ROUTE");
ROUTE664.fromField = "fraction_changed";
ROUTE664.fromNode = "StopTimer";
ROUTE664.toField = "set_fraction";
ROUTE664.toNode = "Stop_l_index3RotInterp";
browser.currentScene.children[66] = ROUTE664;

ROUTE665 = browser.currentScene.createNode("ROUTE");
ROUTE665.fromField = "fraction_changed";
ROUTE665.fromNode = "StopTimer";
ROUTE665.toField = "set_fraction";
ROUTE665.toNode = "Stop_l_middle0RotInterp";
browser.currentScene.children[67] = ROUTE665;

ROUTE666 = browser.currentScene.createNode("ROUTE");
ROUTE666.fromField = "fraction_changed";
ROUTE666.fromNode = "StopTimer";
ROUTE666.toField = "set_fraction";
ROUTE666.toNode = "Stop_l_middle1RotInterp";
browser.currentScene.children[68] = ROUTE666;

ROUTE667 = browser.currentScene.createNode("ROUTE");
ROUTE667.fromField = "fraction_changed";
ROUTE667.fromNode = "StopTimer";
ROUTE667.toField = "set_fraction";
ROUTE667.toNode = "Stop_l_middle2RotInterp";
browser.currentScene.children[69] = ROUTE667;

ROUTE668 = browser.currentScene.createNode("ROUTE");
ROUTE668.fromField = "fraction_changed";
ROUTE668.fromNode = "StopTimer";
ROUTE668.toField = "set_fraction";
ROUTE668.toNode = "Stop_l_middle3RotInterp";
browser.currentScene.children[70] = ROUTE668;

ROUTE669 = browser.currentScene.createNode("ROUTE");
ROUTE669.fromField = "fraction_changed";
ROUTE669.fromNode = "StopTimer";
ROUTE669.toField = "set_fraction";
ROUTE669.toNode = "Stop_l_ring0RotInterp";
browser.currentScene.children[71] = ROUTE669;

ROUTE670 = browser.currentScene.createNode("ROUTE");
ROUTE670.fromField = "fraction_changed";
ROUTE670.fromNode = "StopTimer";
ROUTE670.toField = "set_fraction";
ROUTE670.toNode = "Stop_l_ring1RotInterp";
browser.currentScene.children[72] = ROUTE670;

ROUTE671 = browser.currentScene.createNode("ROUTE");
ROUTE671.fromField = "fraction_changed";
ROUTE671.fromNode = "StopTimer";
ROUTE671.toField = "set_fraction";
ROUTE671.toNode = "Stop_l_ring2RotInterp";
browser.currentScene.children[73] = ROUTE671;

ROUTE672 = browser.currentScene.createNode("ROUTE");
ROUTE672.fromField = "fraction_changed";
ROUTE672.fromNode = "StopTimer";
ROUTE672.toField = "set_fraction";
ROUTE672.toNode = "Stop_l_ring3RotInterp";
browser.currentScene.children[74] = ROUTE672;

ROUTE673 = browser.currentScene.createNode("ROUTE");
ROUTE673.fromField = "fraction_changed";
ROUTE673.fromNode = "StopTimer";
ROUTE673.toField = "set_fraction";
ROUTE673.toNode = "Stop_l_pinky0RotInterp";
browser.currentScene.children[75] = ROUTE673;

ROUTE674 = browser.currentScene.createNode("ROUTE");
ROUTE674.fromField = "fraction_changed";
ROUTE674.fromNode = "StopTimer";
ROUTE674.toField = "set_fraction";
ROUTE674.toNode = "Stop_l_pinky1RotInterp";
browser.currentScene.children[76] = ROUTE674;

ROUTE675 = browser.currentScene.createNode("ROUTE");
ROUTE675.fromField = "fraction_changed";
ROUTE675.fromNode = "StopTimer";
ROUTE675.toField = "set_fraction";
ROUTE675.toNode = "Stop_l_pinky2RotInterp";
browser.currentScene.children[77] = ROUTE675;

ROUTE676 = browser.currentScene.createNode("ROUTE");
ROUTE676.fromField = "fraction_changed";
ROUTE676.fromNode = "StopTimer";
ROUTE676.toField = "set_fraction";
ROUTE676.toNode = "Stop_l_pinky3RotInterp";
browser.currentScene.children[78] = ROUTE676;

ROUTE677 = browser.currentScene.createNode("ROUTE");
ROUTE677.fromField = "fraction_changed";
ROUTE677.fromNode = "StopTimer";
ROUTE677.toField = "set_fraction";
ROUTE677.toNode = "Stop_r_sternoclavicularRotInterp";
browser.currentScene.children[79] = ROUTE677;

ROUTE678 = browser.currentScene.createNode("ROUTE");
ROUTE678.fromField = "fraction_changed";
ROUTE678.fromNode = "StopTimer";
ROUTE678.toField = "set_fraction";
ROUTE678.toNode = "Stop_r_acromioclavicularRotInterp";
browser.currentScene.children[80] = ROUTE678;

ROUTE679 = browser.currentScene.createNode("ROUTE");
ROUTE679.fromField = "fraction_changed";
ROUTE679.fromNode = "StopTimer";
ROUTE679.toField = "set_fraction";
ROUTE679.toNode = "Stop_r_shoulderRotInterp";
browser.currentScene.children[81] = ROUTE679;

ROUTE680 = browser.currentScene.createNode("ROUTE");
ROUTE680.fromField = "fraction_changed";
ROUTE680.fromNode = "StopTimer";
ROUTE680.toField = "set_fraction";
ROUTE680.toNode = "Stop_r_elbowRotInterp";
browser.currentScene.children[82] = ROUTE680;

ROUTE681 = browser.currentScene.createNode("ROUTE");
ROUTE681.fromField = "fraction_changed";
ROUTE681.fromNode = "StopTimer";
ROUTE681.toField = "set_fraction";
ROUTE681.toNode = "Stop_r_wristRotInterp";
browser.currentScene.children[83] = ROUTE681;

ROUTE682 = browser.currentScene.createNode("ROUTE");
ROUTE682.fromField = "fraction_changed";
ROUTE682.fromNode = "StopTimer";
ROUTE682.toField = "set_fraction";
ROUTE682.toNode = "Stop_r_thumb1RotInterp";
browser.currentScene.children[84] = ROUTE682;

ROUTE683 = browser.currentScene.createNode("ROUTE");
ROUTE683.fromField = "fraction_changed";
ROUTE683.fromNode = "StopTimer";
ROUTE683.toField = "set_fraction";
ROUTE683.toNode = "Stop_r_thumb2RotInterp";
browser.currentScene.children[85] = ROUTE683;

ROUTE684 = browser.currentScene.createNode("ROUTE");
ROUTE684.fromField = "fraction_changed";
ROUTE684.fromNode = "StopTimer";
ROUTE684.toField = "set_fraction";
ROUTE684.toNode = "Stop_r_thumb3RotInterp";
browser.currentScene.children[86] = ROUTE684;

ROUTE685 = browser.currentScene.createNode("ROUTE");
ROUTE685.fromField = "fraction_changed";
ROUTE685.fromNode = "StopTimer";
ROUTE685.toField = "set_fraction";
ROUTE685.toNode = "Stop_r_index0RotInterp";
browser.currentScene.children[87] = ROUTE685;

ROUTE686 = browser.currentScene.createNode("ROUTE");
ROUTE686.fromField = "fraction_changed";
ROUTE686.fromNode = "StopTimer";
ROUTE686.toField = "set_fraction";
ROUTE686.toNode = "Stop_r_index1RotInterp";
browser.currentScene.children[88] = ROUTE686;

ROUTE687 = browser.currentScene.createNode("ROUTE");
ROUTE687.fromField = "fraction_changed";
ROUTE687.fromNode = "StopTimer";
ROUTE687.toField = "set_fraction";
ROUTE687.toNode = "Stop_r_index2RotInterp";
browser.currentScene.children[89] = ROUTE687;

ROUTE688 = browser.currentScene.createNode("ROUTE");
ROUTE688.fromField = "fraction_changed";
ROUTE688.fromNode = "StopTimer";
ROUTE688.toField = "set_fraction";
ROUTE688.toNode = "Stop_r_index3RotInterp";
browser.currentScene.children[90] = ROUTE688;

ROUTE689 = browser.currentScene.createNode("ROUTE");
ROUTE689.fromField = "fraction_changed";
ROUTE689.fromNode = "StopTimer";
ROUTE689.toField = "set_fraction";
ROUTE689.toNode = "Stop_r_middle0RotInterp";
browser.currentScene.children[91] = ROUTE689;

ROUTE690 = browser.currentScene.createNode("ROUTE");
ROUTE690.fromField = "fraction_changed";
ROUTE690.fromNode = "StopTimer";
ROUTE690.toField = "set_fraction";
ROUTE690.toNode = "Stop_r_middle1RotInterp";
browser.currentScene.children[92] = ROUTE690;

ROUTE691 = browser.currentScene.createNode("ROUTE");
ROUTE691.fromField = "fraction_changed";
ROUTE691.fromNode = "StopTimer";
ROUTE691.toField = "set_fraction";
ROUTE691.toNode = "Stop_r_middle2RotInterp";
browser.currentScene.children[93] = ROUTE691;

ROUTE692 = browser.currentScene.createNode("ROUTE");
ROUTE692.fromField = "fraction_changed";
ROUTE692.fromNode = "StopTimer";
ROUTE692.toField = "set_fraction";
ROUTE692.toNode = "Stop_r_middle3RotInterp";
browser.currentScene.children[94] = ROUTE692;

ROUTE693 = browser.currentScene.createNode("ROUTE");
ROUTE693.fromField = "fraction_changed";
ROUTE693.fromNode = "StopTimer";
ROUTE693.toField = "set_fraction";
ROUTE693.toNode = "Stop_r_ring0RotInterp";
browser.currentScene.children[95] = ROUTE693;

ROUTE694 = browser.currentScene.createNode("ROUTE");
ROUTE694.fromField = "fraction_changed";
ROUTE694.fromNode = "StopTimer";
ROUTE694.toField = "set_fraction";
ROUTE694.toNode = "Stop_r_ring1RotInterp";
browser.currentScene.children[96] = ROUTE694;

ROUTE695 = browser.currentScene.createNode("ROUTE");
ROUTE695.fromField = "fraction_changed";
ROUTE695.fromNode = "StopTimer";
ROUTE695.toField = "set_fraction";
ROUTE695.toNode = "Stop_r_ring2RotInterp";
browser.currentScene.children[97] = ROUTE695;

ROUTE696 = browser.currentScene.createNode("ROUTE");
ROUTE696.fromField = "fraction_changed";
ROUTE696.fromNode = "StopTimer";
ROUTE696.toField = "set_fraction";
ROUTE696.toNode = "Stop_r_ring3RotInterp";
browser.currentScene.children[98] = ROUTE696;

ROUTE697 = browser.currentScene.createNode("ROUTE");
ROUTE697.fromField = "fraction_changed";
ROUTE697.fromNode = "StopTimer";
ROUTE697.toField = "set_fraction";
ROUTE697.toNode = "Stop_r_pinky0RotInterp";
browser.currentScene.children[99] = ROUTE697;

ROUTE698 = browser.currentScene.createNode("ROUTE");
ROUTE698.fromField = "fraction_changed";
ROUTE698.fromNode = "StopTimer";
ROUTE698.toField = "set_fraction";
ROUTE698.toNode = "Stop_r_pinky1RotInterp";
browser.currentScene.children[100] = ROUTE698;

ROUTE699 = browser.currentScene.createNode("ROUTE");
ROUTE699.fromField = "fraction_changed";
ROUTE699.fromNode = "StopTimer";
ROUTE699.toField = "set_fraction";
ROUTE699.toNode = "Stop_r_pinky2RotInterp";
browser.currentScene.children[101] = ROUTE699;

ROUTE700 = browser.currentScene.createNode("ROUTE");
ROUTE700.fromField = "fraction_changed";
ROUTE700.fromNode = "StopTimer";
ROUTE700.toField = "set_fraction";
ROUTE700.toNode = "Stop_r_pinky3RotInterp";
browser.currentScene.children[102] = ROUTE700;

ROUTE701 = browser.currentScene.createNode("ROUTE");
ROUTE701.fromField = "value_changed";
ROUTE701.fromNode = "Stop_HumanoidRootTransInterp";
ROUTE701.toField = "set_translation";
ROUTE701.toNode = "boxman_HumanoidRoot";
browser.currentScene.children[103] = ROUTE701;

ROUTE702 = browser.currentScene.createNode("ROUTE");
ROUTE702.fromField = "value_changed";
ROUTE702.fromNode = "Stop_HumanoidRootRotInterp";
ROUTE702.toField = "set_rotation";
ROUTE702.toNode = "boxman_HumanoidRoot";
browser.currentScene.children[104] = ROUTE702;

ROUTE703 = browser.currentScene.createNode("ROUTE");
ROUTE703.fromField = "value_changed";
ROUTE703.fromNode = "Stop_l_hipRotInterp";
ROUTE703.toField = "set_rotation";
ROUTE703.toNode = "boxman_l_hip";
browser.currentScene.children[105] = ROUTE703;

ROUTE704 = browser.currentScene.createNode("ROUTE");
ROUTE704.fromField = "value_changed";
ROUTE704.fromNode = "Stop_l_kneeRotInterp";
ROUTE704.toField = "set_rotation";
ROUTE704.toNode = "boxman_l_knee";
browser.currentScene.children[106] = ROUTE704;

ROUTE705 = browser.currentScene.createNode("ROUTE");
ROUTE705.fromField = "value_changed";
ROUTE705.fromNode = "Stop_l_ankleRotInterp";
ROUTE705.toField = "set_rotation";
ROUTE705.toNode = "boxman_l_ankle";
browser.currentScene.children[107] = ROUTE705;

ROUTE706 = browser.currentScene.createNode("ROUTE");
ROUTE706.fromField = "value_changed";
ROUTE706.fromNode = "Stop_l_midtarsalRotInterp";
ROUTE706.toField = "set_rotation";
ROUTE706.toNode = "boxman_l_midtarsal";
browser.currentScene.children[108] = ROUTE706;

ROUTE707 = browser.currentScene.createNode("ROUTE");
ROUTE707.fromField = "value_changed";
ROUTE707.fromNode = "Stop_r_hipRotInterp";
ROUTE707.toField = "set_rotation";
ROUTE707.toNode = "boxman_r_hip";
browser.currentScene.children[109] = ROUTE707;

ROUTE708 = browser.currentScene.createNode("ROUTE");
ROUTE708.fromField = "value_changed";
ROUTE708.fromNode = "Stop_r_kneeRotInterp";
ROUTE708.toField = "set_rotation";
ROUTE708.toNode = "boxman_r_knee";
browser.currentScene.children[110] = ROUTE708;

ROUTE709 = browser.currentScene.createNode("ROUTE");
ROUTE709.fromField = "value_changed";
ROUTE709.fromNode = "Stop_r_ankleRotInterp";
ROUTE709.toField = "set_rotation";
ROUTE709.toNode = "boxman_r_ankle";
browser.currentScene.children[111] = ROUTE709;

ROUTE710 = browser.currentScene.createNode("ROUTE");
ROUTE710.fromField = "value_changed";
ROUTE710.fromNode = "Stop_r_midtarsalRotInterp";
ROUTE710.toField = "set_rotation";
ROUTE710.toNode = "boxman_r_midtarsal";
browser.currentScene.children[112] = ROUTE710;

ROUTE711 = browser.currentScene.createNode("ROUTE");
ROUTE711.fromField = "value_changed";
ROUTE711.fromNode = "Stop_vl5RotInterp";
ROUTE711.toField = "set_rotation";
ROUTE711.toNode = "boxman_vl5";
browser.currentScene.children[113] = ROUTE711;

ROUTE712 = browser.currentScene.createNode("ROUTE");
ROUTE712.fromField = "value_changed";
ROUTE712.fromNode = "Stop_skullbaseRotInterp";
ROUTE712.toField = "set_rotation";
ROUTE712.toNode = "boxman_skullbase";
browser.currentScene.children[114] = ROUTE712;

ROUTE713 = browser.currentScene.createNode("ROUTE");
ROUTE713.fromField = "value_changed";
ROUTE713.fromNode = "Stop_l_shoulderRotInterp";
ROUTE713.toField = "set_rotation";
ROUTE713.toNode = "boxman_l_shoulder";
browser.currentScene.children[115] = ROUTE713;

ROUTE714 = browser.currentScene.createNode("ROUTE");
ROUTE714.fromField = "value_changed";
ROUTE714.fromNode = "Stop_l_elbowRotInterp";
ROUTE714.toField = "set_rotation";
ROUTE714.toNode = "boxman_l_elbow";
browser.currentScene.children[116] = ROUTE714;

ROUTE715 = browser.currentScene.createNode("ROUTE");
ROUTE715.fromField = "value_changed";
ROUTE715.fromNode = "Stop_l_wristRotInterp";
ROUTE715.toField = "set_rotation";
ROUTE715.toNode = "boxman_l_wrist";
browser.currentScene.children[117] = ROUTE715;

ROUTE716 = browser.currentScene.createNode("ROUTE");
ROUTE716.fromField = "value_changed";
ROUTE716.fromNode = "Stop_r_shoulderRotInterp";
ROUTE716.toField = "set_rotation";
ROUTE716.toNode = "boxman_r_shoulder";
browser.currentScene.children[118] = ROUTE716;

ROUTE717 = browser.currentScene.createNode("ROUTE");
ROUTE717.fromField = "value_changed";
ROUTE717.fromNode = "Stop_r_elbowRotInterp";
ROUTE717.toField = "set_rotation";
ROUTE717.toNode = "boxman_r_elbow";
browser.currentScene.children[119] = ROUTE717;

ROUTE718 = browser.currentScene.createNode("ROUTE");
ROUTE718.fromField = "value_changed";
ROUTE718.fromNode = "Stop_r_wristRotInterp";
ROUTE718.toField = "set_rotation";
ROUTE718.toNode = "boxman_r_wrist";
browser.currentScene.children[120] = ROUTE718;

ROUTE719 = browser.currentScene.createNode("ROUTE");
ROUTE719.fromField = "fraction_changed";
ROUTE719.fromNode = "StandTimer";
ROUTE719.toField = "set_fraction";
ROUTE719.toNode = "Stand_r_ankleRotInterp";
browser.currentScene.children[121] = ROUTE719;

ROUTE720 = browser.currentScene.createNode("ROUTE");
ROUTE720.fromField = "fraction_changed";
ROUTE720.fromNode = "StandTimer";
ROUTE720.toField = "set_fraction";
ROUTE720.toNode = "Stand_r_kneeRotInterp";
browser.currentScene.children[122] = ROUTE720;

ROUTE721 = browser.currentScene.createNode("ROUTE");
ROUTE721.fromField = "fraction_changed";
ROUTE721.fromNode = "StandTimer";
ROUTE721.toField = "set_fraction";
ROUTE721.toNode = "Stand_r_hipRotInterp";
browser.currentScene.children[123] = ROUTE721;

ROUTE722 = browser.currentScene.createNode("ROUTE");
ROUTE722.fromField = "fraction_changed";
ROUTE722.fromNode = "StandTimer";
ROUTE722.toField = "set_fraction";
ROUTE722.toNode = "Stand_l_ankleRotInterp";
browser.currentScene.children[124] = ROUTE722;

ROUTE723 = browser.currentScene.createNode("ROUTE");
ROUTE723.fromField = "fraction_changed";
ROUTE723.fromNode = "StandTimer";
ROUTE723.toField = "set_fraction";
ROUTE723.toNode = "Stand_l_kneeRotInterp";
browser.currentScene.children[125] = ROUTE723;

ROUTE724 = browser.currentScene.createNode("ROUTE");
ROUTE724.fromField = "fraction_changed";
ROUTE724.fromNode = "StandTimer";
ROUTE724.toField = "set_fraction";
ROUTE724.toNode = "Stand_l_hipRotInterp";
browser.currentScene.children[126] = ROUTE724;

ROUTE725 = browser.currentScene.createNode("ROUTE");
ROUTE725.fromField = "fraction_changed";
ROUTE725.fromNode = "StandTimer";
ROUTE725.toField = "set_fraction";
ROUTE725.toNode = "Stand_lower_bodyRotInterp";
browser.currentScene.children[127] = ROUTE725;

ROUTE726 = browser.currentScene.createNode("ROUTE");
ROUTE726.fromField = "fraction_changed";
ROUTE726.fromNode = "StandTimer";
ROUTE726.toField = "set_fraction";
ROUTE726.toNode = "Stand_r_wristRotInterp";
browser.currentScene.children[128] = ROUTE726;

ROUTE727 = browser.currentScene.createNode("ROUTE");
ROUTE727.fromField = "fraction_changed";
ROUTE727.fromNode = "StandTimer";
ROUTE727.toField = "set_fraction";
ROUTE727.toNode = "Stand_r_elbowRotInterp";
browser.currentScene.children[129] = ROUTE727;

ROUTE728 = browser.currentScene.createNode("ROUTE");
ROUTE728.fromField = "fraction_changed";
ROUTE728.fromNode = "StandTimer";
ROUTE728.toField = "set_fraction";
ROUTE728.toNode = "Stand_r_shoulderRotInterp";
browser.currentScene.children[130] = ROUTE728;

ROUTE729 = browser.currentScene.createNode("ROUTE");
ROUTE729.fromField = "fraction_changed";
ROUTE729.fromNode = "StandTimer";
ROUTE729.toField = "set_fraction";
ROUTE729.toNode = "Stand_l_wristRotInterp";
browser.currentScene.children[131] = ROUTE729;

ROUTE730 = browser.currentScene.createNode("ROUTE");
ROUTE730.fromField = "fraction_changed";
ROUTE730.fromNode = "StandTimer";
ROUTE730.toField = "set_fraction";
ROUTE730.toNode = "Stand_l_elbowRotInterp";
browser.currentScene.children[132] = ROUTE730;

ROUTE731 = browser.currentScene.createNode("ROUTE");
ROUTE731.fromField = "fraction_changed";
ROUTE731.fromNode = "StandTimer";
ROUTE731.toField = "set_fraction";
ROUTE731.toNode = "Stand_l_shoulderRotInterp";
browser.currentScene.children[133] = ROUTE731;

ROUTE732 = browser.currentScene.createNode("ROUTE");
ROUTE732.fromField = "fraction_changed";
ROUTE732.fromNode = "StandTimer";
ROUTE732.toField = "set_fraction";
ROUTE732.toNode = "Stand_headRotInterp";
browser.currentScene.children[134] = ROUTE732;

ROUTE733 = browser.currentScene.createNode("ROUTE");
ROUTE733.fromField = "fraction_changed";
ROUTE733.fromNode = "StandTimer";
ROUTE733.toField = "set_fraction";
ROUTE733.toNode = "Stand_neckRotInterp";
browser.currentScene.children[135] = ROUTE733;

ROUTE734 = browser.currentScene.createNode("ROUTE");
ROUTE734.fromField = "fraction_changed";
ROUTE734.fromNode = "StandTimer";
ROUTE734.toField = "set_fraction";
ROUTE734.toNode = "Stand_l_eyeballRotInterp";
browser.currentScene.children[136] = ROUTE734;

ROUTE735 = browser.currentScene.createNode("ROUTE");
ROUTE735.fromField = "fraction_changed";
ROUTE735.fromNode = "StandTimer";
ROUTE735.toField = "set_fraction";
ROUTE735.toNode = "Stand_r_eyeballRotInterp";
browser.currentScene.children[137] = ROUTE735;

ROUTE736 = browser.currentScene.createNode("ROUTE");
ROUTE736.fromField = "fraction_changed";
ROUTE736.fromNode = "StandTimer";
ROUTE736.toField = "set_fraction";
ROUTE736.toNode = "Stand_upper_bodyRotInterp";
browser.currentScene.children[138] = ROUTE736;

ROUTE737 = browser.currentScene.createNode("ROUTE");
ROUTE737.fromField = "fraction_changed";
ROUTE737.fromNode = "StandTimer";
ROUTE737.toField = "set_fraction";
ROUTE737.toNode = "Stand_whole_bodyRotInterp";
browser.currentScene.children[139] = ROUTE737;

ROUTE738 = browser.currentScene.createNode("ROUTE");
ROUTE738.fromField = "fraction_changed";
ROUTE738.fromNode = "StandTimer";
ROUTE738.toField = "set_fraction";
ROUTE738.toNode = "Stand_whole_bodyTransInterp";
browser.currentScene.children[140] = ROUTE738;

ROUTE739 = browser.currentScene.createNode("ROUTE");
ROUTE739.fromField = "fraction_changed";
ROUTE739.fromNode = "StandTimer";
ROUTE739.toField = "set_fraction";
ROUTE739.toNode = "Stand_l_sternoclavicularRoll";
browser.currentScene.children[141] = ROUTE739;

ROUTE740 = browser.currentScene.createNode("ROUTE");
ROUTE740.fromField = "fraction_changed";
ROUTE740.fromNode = "StandTimer";
ROUTE740.toField = "set_fraction";
ROUTE740.toNode = "Stand_l_acromioclavicularRoll";
browser.currentScene.children[142] = ROUTE740;

ROUTE741 = browser.currentScene.createNode("ROUTE");
ROUTE741.fromField = "fraction_changed";
ROUTE741.fromNode = "StandTimer";
ROUTE741.toField = "set_fraction";
ROUTE741.toNode = "Stand_r_sternoclavicularRoll";
browser.currentScene.children[143] = ROUTE741;

ROUTE742 = browser.currentScene.createNode("ROUTE");
ROUTE742.fromField = "fraction_changed";
ROUTE742.fromNode = "StandTimer";
ROUTE742.toField = "set_fraction";
ROUTE742.toNode = "Stand_r_acromioclavicularRoll";
browser.currentScene.children[144] = ROUTE742;

ROUTE743 = browser.currentScene.createNode("ROUTE");
ROUTE743.fromField = "fraction_changed";
ROUTE743.fromNode = "StandTimer";
ROUTE743.toField = "set_fraction";
ROUTE743.toNode = "Stand_r_metatarsalPitch";
browser.currentScene.children[145] = ROUTE743;

ROUTE744 = browser.currentScene.createNode("ROUTE");
ROUTE744.fromField = "fraction_changed";
ROUTE744.fromNode = "StandTimer";
ROUTE744.toField = "set_fraction";
ROUTE744.toNode = "Stand_sacroiliacYaw";
browser.currentScene.children[146] = ROUTE744;

ROUTE745 = browser.currentScene.createNode("ROUTE");
ROUTE745.fromField = "fraction_changed";
ROUTE745.fromNode = "StandTimer";
ROUTE745.toField = "set_fraction";
ROUTE745.toNode = "Stand_vl5Yaw";
browser.currentScene.children[147] = ROUTE745;

ROUTE746 = browser.currentScene.createNode("ROUTE");
ROUTE746.fromField = "fraction_changed";
ROUTE746.fromNode = "StandTimer";
ROUTE746.toField = "set_fraction";
ROUTE746.toNode = "Stand_vc6Yaw";
browser.currentScene.children[148] = ROUTE746;

ROUTE747 = browser.currentScene.createNode("ROUTE");
ROUTE747.fromField = "fraction_changed";
ROUTE747.fromNode = "StandTimer";
ROUTE747.toField = "set_fraction";
ROUTE747.toNode = "Stand_l_thumb1Pitch";
browser.currentScene.children[149] = ROUTE747;

ROUTE748 = browser.currentScene.createNode("ROUTE");
ROUTE748.fromField = "fraction_changed";
ROUTE748.fromNode = "StandTimer";
ROUTE748.toField = "set_fraction";
ROUTE748.toNode = "Stand_r_thumb1Pitch";
browser.currentScene.children[150] = ROUTE748;

ROUTE749 = browser.currentScene.createNode("ROUTE");
ROUTE749.fromField = "fraction_changed";
ROUTE749.fromNode = "StandTimer";
ROUTE749.toField = "set_fraction";
ROUTE749.toNode = "Stand_r_index1Roll";
browser.currentScene.children[151] = ROUTE749;

ROUTE750 = browser.currentScene.createNode("ROUTE");
ROUTE750.fromField = "fraction_changed";
ROUTE750.fromNode = "StandTimer";
ROUTE750.toField = "set_fraction";
ROUTE750.toNode = "Stand_r_index2Roll";
browser.currentScene.children[152] = ROUTE750;

ROUTE751 = browser.currentScene.createNode("ROUTE");
ROUTE751.fromField = "fraction_changed";
ROUTE751.fromNode = "StandTimer";
ROUTE751.toField = "set_fraction";
ROUTE751.toNode = "Stand_r_index3Roll";
browser.currentScene.children[153] = ROUTE751;

ROUTE752 = browser.currentScene.createNode("ROUTE");
ROUTE752.fromField = "value_changed";
ROUTE752.fromNode = "Stand_r_ankleRotInterp";
ROUTE752.toField = "set_rotation";
ROUTE752.toNode = "boxman_r_ankle";
browser.currentScene.children[154] = ROUTE752;

ROUTE753 = browser.currentScene.createNode("ROUTE");
ROUTE753.fromField = "value_changed";
ROUTE753.fromNode = "Stand_r_kneeRotInterp";
ROUTE753.toField = "set_rotation";
ROUTE753.toNode = "boxman_r_knee";
browser.currentScene.children[155] = ROUTE753;

ROUTE754 = browser.currentScene.createNode("ROUTE");
ROUTE754.fromField = "value_changed";
ROUTE754.fromNode = "Stand_r_hipRotInterp";
ROUTE754.toField = "set_rotation";
ROUTE754.toNode = "boxman_r_hip";
browser.currentScene.children[156] = ROUTE754;

ROUTE755 = browser.currentScene.createNode("ROUTE");
ROUTE755.fromField = "value_changed";
ROUTE755.fromNode = "Stand_l_ankleRotInterp";
ROUTE755.toField = "set_rotation";
ROUTE755.toNode = "boxman_l_ankle";
browser.currentScene.children[157] = ROUTE755;

ROUTE756 = browser.currentScene.createNode("ROUTE");
ROUTE756.fromField = "value_changed";
ROUTE756.fromNode = "Stand_l_kneeRotInterp";
ROUTE756.toField = "set_rotation";
ROUTE756.toNode = "boxman_l_knee";
browser.currentScene.children[158] = ROUTE756;

ROUTE757 = browser.currentScene.createNode("ROUTE");
ROUTE757.fromField = "value_changed";
ROUTE757.fromNode = "Stand_l_hipRotInterp";
ROUTE757.toField = "set_rotation";
ROUTE757.toNode = "boxman_l_hip";
browser.currentScene.children[159] = ROUTE757;

ROUTE758 = browser.currentScene.createNode("ROUTE");
ROUTE758.fromField = "value_changed";
ROUTE758.fromNode = "Stand_r_wristRotInterp";
ROUTE758.toField = "set_rotation";
ROUTE758.toNode = "boxman_r_wrist";
browser.currentScene.children[160] = ROUTE758;

ROUTE759 = browser.currentScene.createNode("ROUTE");
ROUTE759.fromField = "value_changed";
ROUTE759.fromNode = "Stand_r_elbowRotInterp";
ROUTE759.toField = "set_rotation";
ROUTE759.toNode = "boxman_r_elbow";
browser.currentScene.children[161] = ROUTE759;

ROUTE760 = browser.currentScene.createNode("ROUTE");
ROUTE760.fromField = "value_changed";
ROUTE760.fromNode = "Stand_r_shoulderRotInterp";
ROUTE760.toField = "set_rotation";
ROUTE760.toNode = "boxman_r_shoulder";
browser.currentScene.children[162] = ROUTE760;

ROUTE761 = browser.currentScene.createNode("ROUTE");
ROUTE761.fromField = "value_changed";
ROUTE761.fromNode = "Stand_l_wristRotInterp";
ROUTE761.toField = "set_rotation";
ROUTE761.toNode = "boxman_l_wrist";
browser.currentScene.children[163] = ROUTE761;

ROUTE762 = browser.currentScene.createNode("ROUTE");
ROUTE762.fromField = "value_changed";
ROUTE762.fromNode = "Stand_l_elbowRotInterp";
ROUTE762.toField = "set_rotation";
ROUTE762.toNode = "boxman_l_elbow";
browser.currentScene.children[164] = ROUTE762;

ROUTE763 = browser.currentScene.createNode("ROUTE");
ROUTE763.fromField = "value_changed";
ROUTE763.fromNode = "Stand_l_shoulderRotInterp";
ROUTE763.toField = "set_rotation";
ROUTE763.toNode = "boxman_l_shoulder";
browser.currentScene.children[165] = ROUTE763;

ROUTE764 = browser.currentScene.createNode("ROUTE");
ROUTE764.fromField = "value_changed";
ROUTE764.fromNode = "Stand_headRotInterp";
ROUTE764.toField = "set_rotation";
ROUTE764.toNode = "boxman_skullbase";
browser.currentScene.children[166] = ROUTE764;

ROUTE765 = browser.currentScene.createNode("ROUTE");
ROUTE765.fromField = "value_changed";
ROUTE765.fromNode = "Stand_whole_bodyRotInterp";
ROUTE765.toField = "set_rotation";
ROUTE765.toNode = "boxman_HumanoidRoot";
browser.currentScene.children[167] = ROUTE765;

ROUTE766 = browser.currentScene.createNode("ROUTE");
ROUTE766.fromField = "value_changed";
ROUTE766.fromNode = "Stand_whole_bodyTransInterp";
ROUTE766.toField = "set_translation";
ROUTE766.toNode = "boxman_HumanoidRoot";
browser.currentScene.children[168] = ROUTE766;

ROUTE767 = browser.currentScene.createNode("ROUTE");
ROUTE767.fromField = "value_changed";
ROUTE767.fromNode = "Stand_vl5Yaw";
ROUTE767.toField = "set_rotation";
ROUTE767.toNode = "boxman_vl5";
browser.currentScene.children[169] = ROUTE767;

ROUTE768 = browser.currentScene.createNode("ROUTE");
ROUTE768.fromField = "fraction_changed";
ROUTE768.fromNode = "PitchTimer";
ROUTE768.toField = "set_fraction";
ROUTE768.toNode = "Pitches_r_ankleRotInterp";
browser.currentScene.children[170] = ROUTE768;

ROUTE769 = browser.currentScene.createNode("ROUTE");
ROUTE769.fromField = "fraction_changed";
ROUTE769.fromNode = "PitchTimer";
ROUTE769.toField = "set_fraction";
ROUTE769.toNode = "Pitches_r_kneeRotInterp";
browser.currentScene.children[171] = ROUTE769;

ROUTE770 = browser.currentScene.createNode("ROUTE");
ROUTE770.fromField = "fraction_changed";
ROUTE770.fromNode = "PitchTimer";
ROUTE770.toField = "set_fraction";
ROUTE770.toNode = "Pitches_r_hipRotInterp";
browser.currentScene.children[172] = ROUTE770;

ROUTE771 = browser.currentScene.createNode("ROUTE");
ROUTE771.fromField = "fraction_changed";
ROUTE771.fromNode = "PitchTimer";
ROUTE771.toField = "set_fraction";
ROUTE771.toNode = "Pitches_l_ankleRotInterp";
browser.currentScene.children[173] = ROUTE771;

ROUTE772 = browser.currentScene.createNode("ROUTE");
ROUTE772.fromField = "fraction_changed";
ROUTE772.fromNode = "PitchTimer";
ROUTE772.toField = "set_fraction";
ROUTE772.toNode = "Pitches_l_kneeRotInterp";
browser.currentScene.children[174] = ROUTE772;

ROUTE773 = browser.currentScene.createNode("ROUTE");
ROUTE773.fromField = "fraction_changed";
ROUTE773.fromNode = "PitchTimer";
ROUTE773.toField = "set_fraction";
ROUTE773.toNode = "Pitches_l_hipRotInterp";
browser.currentScene.children[175] = ROUTE773;

ROUTE774 = browser.currentScene.createNode("ROUTE");
ROUTE774.fromField = "fraction_changed";
ROUTE774.fromNode = "PitchTimer";
ROUTE774.toField = "set_fraction";
ROUTE774.toNode = "Pitches_lower_bodyRotInterp";
browser.currentScene.children[176] = ROUTE774;

ROUTE775 = browser.currentScene.createNode("ROUTE");
ROUTE775.fromField = "fraction_changed";
ROUTE775.fromNode = "PitchTimer";
ROUTE775.toField = "set_fraction";
ROUTE775.toNode = "Pitches_r_wristRotInterp";
browser.currentScene.children[177] = ROUTE775;

ROUTE776 = browser.currentScene.createNode("ROUTE");
ROUTE776.fromField = "fraction_changed";
ROUTE776.fromNode = "PitchTimer";
ROUTE776.toField = "set_fraction";
ROUTE776.toNode = "Pitches_r_elbowRotInterp";
browser.currentScene.children[178] = ROUTE776;

ROUTE777 = browser.currentScene.createNode("ROUTE");
ROUTE777.fromField = "fraction_changed";
ROUTE777.fromNode = "PitchTimer";
ROUTE777.toField = "set_fraction";
ROUTE777.toNode = "Pitches_r_shoulderRotInterp";
browser.currentScene.children[179] = ROUTE777;

ROUTE778 = browser.currentScene.createNode("ROUTE");
ROUTE778.fromField = "fraction_changed";
ROUTE778.fromNode = "PitchTimer";
ROUTE778.toField = "set_fraction";
ROUTE778.toNode = "Pitches_l_wristRotInterp";
browser.currentScene.children[180] = ROUTE778;

ROUTE779 = browser.currentScene.createNode("ROUTE");
ROUTE779.fromField = "fraction_changed";
ROUTE779.fromNode = "PitchTimer";
ROUTE779.toField = "set_fraction";
ROUTE779.toNode = "Pitches_l_elbowRotInterp";
browser.currentScene.children[181] = ROUTE779;

ROUTE780 = browser.currentScene.createNode("ROUTE");
ROUTE780.fromField = "fraction_changed";
ROUTE780.fromNode = "PitchTimer";
ROUTE780.toField = "set_fraction";
ROUTE780.toNode = "Pitches_l_shoulderRotInterp";
browser.currentScene.children[182] = ROUTE780;

ROUTE781 = browser.currentScene.createNode("ROUTE");
ROUTE781.fromField = "fraction_changed";
ROUTE781.fromNode = "PitchTimer";
ROUTE781.toField = "set_fraction";
ROUTE781.toNode = "Pitches_headRotInterp";
browser.currentScene.children[183] = ROUTE781;

ROUTE782 = browser.currentScene.createNode("ROUTE");
ROUTE782.fromField = "fraction_changed";
ROUTE782.fromNode = "PitchTimer";
ROUTE782.toField = "set_fraction";
ROUTE782.toNode = "Pitches_neckRotInterp";
browser.currentScene.children[184] = ROUTE782;

ROUTE783 = browser.currentScene.createNode("ROUTE");
ROUTE783.fromField = "fraction_changed";
ROUTE783.fromNode = "PitchTimer";
ROUTE783.toField = "set_fraction";
ROUTE783.toNode = "Pitches_upper_bodyRotInterp";
browser.currentScene.children[185] = ROUTE783;

ROUTE784 = browser.currentScene.createNode("ROUTE");
ROUTE784.fromField = "fraction_changed";
ROUTE784.fromNode = "PitchTimer";
ROUTE784.toField = "set_fraction";
ROUTE784.toNode = "Pitches_whole_bodyRotInterp";
browser.currentScene.children[186] = ROUTE784;

ROUTE785 = browser.currentScene.createNode("ROUTE");
ROUTE785.fromField = "fraction_changed";
ROUTE785.fromNode = "PitchTimer";
ROUTE785.toField = "set_fraction";
ROUTE785.toNode = "Pitches_whole_bodyTransInterp";
browser.currentScene.children[187] = ROUTE785;

ROUTE786 = browser.currentScene.createNode("ROUTE");
ROUTE786.fromField = "fraction_changed";
ROUTE786.fromNode = "PitchTimer";
ROUTE786.toField = "set_fraction";
ROUTE786.toNode = "Pitch_l_sternoclavicularRoll";
browser.currentScene.children[188] = ROUTE786;

ROUTE787 = browser.currentScene.createNode("ROUTE");
ROUTE787.fromField = "fraction_changed";
ROUTE787.fromNode = "PitchTimer";
ROUTE787.toField = "set_fraction";
ROUTE787.toNode = "Pitch_l_acromioclavicularRoll";
browser.currentScene.children[189] = ROUTE787;

ROUTE788 = browser.currentScene.createNode("ROUTE");
ROUTE788.fromField = "fraction_changed";
ROUTE788.fromNode = "PitchTimer";
ROUTE788.toField = "set_fraction";
ROUTE788.toNode = "Pitch_r_sternoclavicularRoll";
browser.currentScene.children[190] = ROUTE788;

ROUTE789 = browser.currentScene.createNode("ROUTE");
ROUTE789.fromField = "fraction_changed";
ROUTE789.fromNode = "PitchTimer";
ROUTE789.toField = "set_fraction";
ROUTE789.toNode = "Pitch_r_acromioclavicularRoll";
browser.currentScene.children[191] = ROUTE789;

ROUTE790 = browser.currentScene.createNode("ROUTE");
ROUTE790.fromField = "fraction_changed";
ROUTE790.fromNode = "PitchTimer";
ROUTE790.toField = "set_fraction";
ROUTE790.toNode = "Pitch_r_metatarsalPitch";
browser.currentScene.children[192] = ROUTE790;

ROUTE791 = browser.currentScene.createNode("ROUTE");
ROUTE791.fromField = "fraction_changed";
ROUTE791.fromNode = "PitchTimer";
ROUTE791.toField = "set_fraction";
ROUTE791.toNode = "Pitch_sacroiliacYaw";
browser.currentScene.children[193] = ROUTE791;

ROUTE792 = browser.currentScene.createNode("ROUTE");
ROUTE792.fromField = "fraction_changed";
ROUTE792.fromNode = "PitchTimer";
ROUTE792.toField = "set_fraction";
ROUTE792.toNode = "Pitch_vl5Yaw";
browser.currentScene.children[194] = ROUTE792;

ROUTE793 = browser.currentScene.createNode("ROUTE");
ROUTE793.fromField = "fraction_changed";
ROUTE793.fromNode = "PitchTimer";
ROUTE793.toField = "set_fraction";
ROUTE793.toNode = "Pitch_vc6Yaw";
browser.currentScene.children[195] = ROUTE793;

ROUTE794 = browser.currentScene.createNode("ROUTE");
ROUTE794.fromField = "fraction_changed";
ROUTE794.fromNode = "PitchTimer";
ROUTE794.toField = "set_fraction";
ROUTE794.toNode = "Pitch_l_thumb1Pitch";
browser.currentScene.children[196] = ROUTE794;

ROUTE795 = browser.currentScene.createNode("ROUTE");
ROUTE795.fromField = "fraction_changed";
ROUTE795.fromNode = "PitchTimer";
ROUTE795.toField = "set_fraction";
ROUTE795.toNode = "Pitch_r_thumb1Pitch";
browser.currentScene.children[197] = ROUTE795;

ROUTE796 = browser.currentScene.createNode("ROUTE");
ROUTE796.fromField = "value_changed";
ROUTE796.fromNode = "Pitches_r_ankleRotInterp";
ROUTE796.toField = "set_rotation";
ROUTE796.toNode = "boxman_r_ankle";
browser.currentScene.children[198] = ROUTE796;

ROUTE797 = browser.currentScene.createNode("ROUTE");
ROUTE797.fromField = "value_changed";
ROUTE797.fromNode = "Pitches_r_kneeRotInterp";
ROUTE797.toField = "set_rotation";
ROUTE797.toNode = "boxman_r_knee";
browser.currentScene.children[199] = ROUTE797;

ROUTE798 = browser.currentScene.createNode("ROUTE");
ROUTE798.fromField = "value_changed";
ROUTE798.fromNode = "Pitches_r_hipRotInterp";
ROUTE798.toField = "set_rotation";
ROUTE798.toNode = "boxman_r_hip";
browser.currentScene.children[200] = ROUTE798;

ROUTE799 = browser.currentScene.createNode("ROUTE");
ROUTE799.fromField = "value_changed";
ROUTE799.fromNode = "Pitches_l_ankleRotInterp";
ROUTE799.toField = "set_rotation";
ROUTE799.toNode = "boxman_l_ankle";
browser.currentScene.children[201] = ROUTE799;

ROUTE800 = browser.currentScene.createNode("ROUTE");
ROUTE800.fromField = "value_changed";
ROUTE800.fromNode = "Pitches_l_kneeRotInterp";
ROUTE800.toField = "set_rotation";
ROUTE800.toNode = "boxman_l_knee";
browser.currentScene.children[202] = ROUTE800;

ROUTE801 = browser.currentScene.createNode("ROUTE");
ROUTE801.fromField = "value_changed";
ROUTE801.fromNode = "Pitches_l_hipRotInterp";
ROUTE801.toField = "set_rotation";
ROUTE801.toNode = "boxman_l_hip";
browser.currentScene.children[203] = ROUTE801;

ROUTE802 = browser.currentScene.createNode("ROUTE");
ROUTE802.fromField = "value_changed";
ROUTE802.fromNode = "Pitches_r_wristRotInterp";
ROUTE802.toField = "set_rotation";
ROUTE802.toNode = "boxman_r_wrist";
browser.currentScene.children[204] = ROUTE802;

ROUTE803 = browser.currentScene.createNode("ROUTE");
ROUTE803.fromField = "value_changed";
ROUTE803.fromNode = "Pitches_r_elbowRotInterp";
ROUTE803.toField = "set_rotation";
ROUTE803.toNode = "boxman_r_elbow";
browser.currentScene.children[205] = ROUTE803;

ROUTE804 = browser.currentScene.createNode("ROUTE");
ROUTE804.fromField = "value_changed";
ROUTE804.fromNode = "Pitches_r_shoulderRotInterp";
ROUTE804.toField = "set_rotation";
ROUTE804.toNode = "boxman_r_shoulder";
browser.currentScene.children[206] = ROUTE804;

ROUTE805 = browser.currentScene.createNode("ROUTE");
ROUTE805.fromField = "value_changed";
ROUTE805.fromNode = "Pitches_l_wristRotInterp";
ROUTE805.toField = "set_rotation";
ROUTE805.toNode = "boxman_l_wrist";
browser.currentScene.children[207] = ROUTE805;

ROUTE806 = browser.currentScene.createNode("ROUTE");
ROUTE806.fromField = "value_changed";
ROUTE806.fromNode = "Pitches_l_elbowRotInterp";
ROUTE806.toField = "set_rotation";
ROUTE806.toNode = "boxman_l_elbow";
browser.currentScene.children[208] = ROUTE806;

ROUTE807 = browser.currentScene.createNode("ROUTE");
ROUTE807.fromField = "value_changed";
ROUTE807.fromNode = "Pitches_l_shoulderRotInterp";
ROUTE807.toField = "set_rotation";
ROUTE807.toNode = "boxman_l_shoulder";
browser.currentScene.children[209] = ROUTE807;

ROUTE808 = browser.currentScene.createNode("ROUTE");
ROUTE808.fromField = "value_changed";
ROUTE808.fromNode = "Pitches_headRotInterp";
ROUTE808.toField = "set_rotation";
ROUTE808.toNode = "boxman_skullbase";
browser.currentScene.children[210] = ROUTE808;

ROUTE809 = browser.currentScene.createNode("ROUTE");
ROUTE809.fromField = "value_changed";
ROUTE809.fromNode = "Pitches_whole_bodyRotInterp";
ROUTE809.toField = "set_rotation";
ROUTE809.toNode = "boxman_HumanoidRoot";
browser.currentScene.children[211] = ROUTE809;

ROUTE810 = browser.currentScene.createNode("ROUTE");
ROUTE810.fromField = "value_changed";
ROUTE810.fromNode = "Pitches_whole_bodyTransInterp";
ROUTE810.toField = "set_translation";
ROUTE810.toNode = "boxman_HumanoidRoot";
browser.currentScene.children[212] = ROUTE810;

ROUTE811 = browser.currentScene.createNode("ROUTE");
ROUTE811.fromField = "value_changed";
ROUTE811.fromNode = "Pitch_vl5Yaw";
ROUTE811.toField = "set_rotation";
ROUTE811.toNode = "boxman_vl5";
browser.currentScene.children[213] = ROUTE811;

ROUTE812 = browser.currentScene.createNode("ROUTE");
ROUTE812.fromField = "fraction_changed";
ROUTE812.fromNode = "YawTimer";
ROUTE812.toField = "set_fraction";
ROUTE812.toNode = "Yaws_r_ankleRotInterp";
browser.currentScene.children[214] = ROUTE812;

ROUTE813 = browser.currentScene.createNode("ROUTE");
ROUTE813.fromField = "fraction_changed";
ROUTE813.fromNode = "YawTimer";
ROUTE813.toField = "set_fraction";
ROUTE813.toNode = "Yaws_r_kneeRotInterp";
browser.currentScene.children[215] = ROUTE813;

ROUTE814 = browser.currentScene.createNode("ROUTE");
ROUTE814.fromField = "fraction_changed";
ROUTE814.fromNode = "YawTimer";
ROUTE814.toField = "set_fraction";
ROUTE814.toNode = "Yaws_r_hipRotInterp";
browser.currentScene.children[216] = ROUTE814;

ROUTE815 = browser.currentScene.createNode("ROUTE");
ROUTE815.fromField = "fraction_changed";
ROUTE815.fromNode = "YawTimer";
ROUTE815.toField = "set_fraction";
ROUTE815.toNode = "Yaws_l_ankleRotInterp";
browser.currentScene.children[217] = ROUTE815;

ROUTE816 = browser.currentScene.createNode("ROUTE");
ROUTE816.fromField = "fraction_changed";
ROUTE816.fromNode = "YawTimer";
ROUTE816.toField = "set_fraction";
ROUTE816.toNode = "Yaws_l_kneeRotInterp";
browser.currentScene.children[218] = ROUTE816;

ROUTE817 = browser.currentScene.createNode("ROUTE");
ROUTE817.fromField = "fraction_changed";
ROUTE817.fromNode = "YawTimer";
ROUTE817.toField = "set_fraction";
ROUTE817.toNode = "Yaws_l_hipRotInterp";
browser.currentScene.children[219] = ROUTE817;

ROUTE818 = browser.currentScene.createNode("ROUTE");
ROUTE818.fromField = "fraction_changed";
ROUTE818.fromNode = "YawTimer";
ROUTE818.toField = "set_fraction";
ROUTE818.toNode = "Yaws_lower_bodyRotInterp";
browser.currentScene.children[220] = ROUTE818;

ROUTE819 = browser.currentScene.createNode("ROUTE");
ROUTE819.fromField = "fraction_changed";
ROUTE819.fromNode = "YawTimer";
ROUTE819.toField = "set_fraction";
ROUTE819.toNode = "Yaws_r_wristRotInterp";
browser.currentScene.children[221] = ROUTE819;

ROUTE820 = browser.currentScene.createNode("ROUTE");
ROUTE820.fromField = "fraction_changed";
ROUTE820.fromNode = "YawTimer";
ROUTE820.toField = "set_fraction";
ROUTE820.toNode = "Yaws_r_elbowRotInterp";
browser.currentScene.children[222] = ROUTE820;

ROUTE821 = browser.currentScene.createNode("ROUTE");
ROUTE821.fromField = "fraction_changed";
ROUTE821.fromNode = "YawTimer";
ROUTE821.toField = "set_fraction";
ROUTE821.toNode = "Yaws_r_shoulderRotInterp";
browser.currentScene.children[223] = ROUTE821;

ROUTE822 = browser.currentScene.createNode("ROUTE");
ROUTE822.fromField = "fraction_changed";
ROUTE822.fromNode = "YawTimer";
ROUTE822.toField = "set_fraction";
ROUTE822.toNode = "Yaws_l_wristRotInterp";
browser.currentScene.children[224] = ROUTE822;

ROUTE823 = browser.currentScene.createNode("ROUTE");
ROUTE823.fromField = "fraction_changed";
ROUTE823.fromNode = "YawTimer";
ROUTE823.toField = "set_fraction";
ROUTE823.toNode = "Yaws_l_elbowRotInterp";
browser.currentScene.children[225] = ROUTE823;

ROUTE824 = browser.currentScene.createNode("ROUTE");
ROUTE824.fromField = "fraction_changed";
ROUTE824.fromNode = "YawTimer";
ROUTE824.toField = "set_fraction";
ROUTE824.toNode = "Yaws_l_shoulderRotInterp";
browser.currentScene.children[226] = ROUTE824;

ROUTE825 = browser.currentScene.createNode("ROUTE");
ROUTE825.fromField = "fraction_changed";
ROUTE825.fromNode = "YawTimer";
ROUTE825.toField = "set_fraction";
ROUTE825.toNode = "Yaws_headRotInterp";
browser.currentScene.children[227] = ROUTE825;

ROUTE826 = browser.currentScene.createNode("ROUTE");
ROUTE826.fromField = "fraction_changed";
ROUTE826.fromNode = "YawTimer";
ROUTE826.toField = "set_fraction";
ROUTE826.toNode = "Yaws_neckRotInterp";
browser.currentScene.children[228] = ROUTE826;

ROUTE827 = browser.currentScene.createNode("ROUTE");
ROUTE827.fromField = "fraction_changed";
ROUTE827.fromNode = "YawTimer";
ROUTE827.toField = "set_fraction";
ROUTE827.toNode = "Yaws_upper_bodyRotInterp";
browser.currentScene.children[229] = ROUTE827;

ROUTE828 = browser.currentScene.createNode("ROUTE");
ROUTE828.fromField = "fraction_changed";
ROUTE828.fromNode = "YawTimer";
ROUTE828.toField = "set_fraction";
ROUTE828.toNode = "Yaws_whole_bodyRotInterp";
browser.currentScene.children[230] = ROUTE828;

ROUTE829 = browser.currentScene.createNode("ROUTE");
ROUTE829.fromField = "fraction_changed";
ROUTE829.fromNode = "YawTimer";
ROUTE829.toField = "set_fraction";
ROUTE829.toNode = "Yaws_whole_bodyTransInterp";
browser.currentScene.children[231] = ROUTE829;

ROUTE830 = browser.currentScene.createNode("ROUTE");
ROUTE830.fromField = "fraction_changed";
ROUTE830.fromNode = "YawTimer";
ROUTE830.toField = "set_fraction";
ROUTE830.toNode = "Yaw_l_sternoclavicularRoll";
browser.currentScene.children[232] = ROUTE830;

ROUTE831 = browser.currentScene.createNode("ROUTE");
ROUTE831.fromField = "fraction_changed";
ROUTE831.fromNode = "YawTimer";
ROUTE831.toField = "set_fraction";
ROUTE831.toNode = "Yaw_l_acromioclavicularRoll";
browser.currentScene.children[233] = ROUTE831;

ROUTE832 = browser.currentScene.createNode("ROUTE");
ROUTE832.fromField = "fraction_changed";
ROUTE832.fromNode = "YawTimer";
ROUTE832.toField = "set_fraction";
ROUTE832.toNode = "Yaw_r_sternoclavicularRoll";
browser.currentScene.children[234] = ROUTE832;

ROUTE833 = browser.currentScene.createNode("ROUTE");
ROUTE833.fromField = "fraction_changed";
ROUTE833.fromNode = "YawTimer";
ROUTE833.toField = "set_fraction";
ROUTE833.toNode = "Yaw_r_acromioclavicularRoll";
browser.currentScene.children[235] = ROUTE833;

ROUTE834 = browser.currentScene.createNode("ROUTE");
ROUTE834.fromField = "fraction_changed";
ROUTE834.fromNode = "YawTimer";
ROUTE834.toField = "set_fraction";
ROUTE834.toNode = "Yaw_r_metatarsalPitch";
browser.currentScene.children[236] = ROUTE834;

ROUTE835 = browser.currentScene.createNode("ROUTE");
ROUTE835.fromField = "fraction_changed";
ROUTE835.fromNode = "YawTimer";
ROUTE835.toField = "set_fraction";
ROUTE835.toNode = "Yaw_sacroiliacYaw";
browser.currentScene.children[237] = ROUTE835;

ROUTE836 = browser.currentScene.createNode("ROUTE");
ROUTE836.fromField = "fraction_changed";
ROUTE836.fromNode = "YawTimer";
ROUTE836.toField = "set_fraction";
ROUTE836.toNode = "Yaw_vl5Yaw";
browser.currentScene.children[238] = ROUTE836;

ROUTE837 = browser.currentScene.createNode("ROUTE");
ROUTE837.fromField = "fraction_changed";
ROUTE837.fromNode = "YawTimer";
ROUTE837.toField = "set_fraction";
ROUTE837.toNode = "Yaw_vc6Yaw";
browser.currentScene.children[239] = ROUTE837;

ROUTE838 = browser.currentScene.createNode("ROUTE");
ROUTE838.fromField = "fraction_changed";
ROUTE838.fromNode = "YawTimer";
ROUTE838.toField = "set_fraction";
ROUTE838.toNode = "Yaw_l_thumb1Pitch";
browser.currentScene.children[240] = ROUTE838;

ROUTE839 = browser.currentScene.createNode("ROUTE");
ROUTE839.fromField = "fraction_changed";
ROUTE839.fromNode = "YawTimer";
ROUTE839.toField = "set_fraction";
ROUTE839.toNode = "Yaw_r_thumb1Pitch";
browser.currentScene.children[241] = ROUTE839;

ROUTE840 = browser.currentScene.createNode("ROUTE");
ROUTE840.fromField = "value_changed";
ROUTE840.fromNode = "Yaws_r_ankleRotInterp";
ROUTE840.toField = "set_rotation";
ROUTE840.toNode = "boxman_r_ankle";
browser.currentScene.children[242] = ROUTE840;

ROUTE841 = browser.currentScene.createNode("ROUTE");
ROUTE841.fromField = "value_changed";
ROUTE841.fromNode = "Yaws_r_kneeRotInterp";
ROUTE841.toField = "set_rotation";
ROUTE841.toNode = "boxman_r_knee";
browser.currentScene.children[243] = ROUTE841;

ROUTE842 = browser.currentScene.createNode("ROUTE");
ROUTE842.fromField = "value_changed";
ROUTE842.fromNode = "Yaws_r_hipRotInterp";
ROUTE842.toField = "set_rotation";
ROUTE842.toNode = "boxman_r_hip";
browser.currentScene.children[244] = ROUTE842;

ROUTE843 = browser.currentScene.createNode("ROUTE");
ROUTE843.fromField = "value_changed";
ROUTE843.fromNode = "Yaws_l_ankleRotInterp";
ROUTE843.toField = "set_rotation";
ROUTE843.toNode = "boxman_l_ankle";
browser.currentScene.children[245] = ROUTE843;

ROUTE844 = browser.currentScene.createNode("ROUTE");
ROUTE844.fromField = "value_changed";
ROUTE844.fromNode = "Yaws_l_kneeRotInterp";
ROUTE844.toField = "set_rotation";
ROUTE844.toNode = "boxman_l_knee";
browser.currentScene.children[246] = ROUTE844;

ROUTE845 = browser.currentScene.createNode("ROUTE");
ROUTE845.fromField = "value_changed";
ROUTE845.fromNode = "Yaws_l_hipRotInterp";
ROUTE845.toField = "set_rotation";
ROUTE845.toNode = "boxman_l_hip";
browser.currentScene.children[247] = ROUTE845;

ROUTE846 = browser.currentScene.createNode("ROUTE");
ROUTE846.fromField = "value_changed";
ROUTE846.fromNode = "Yaws_r_wristRotInterp";
ROUTE846.toField = "set_rotation";
ROUTE846.toNode = "boxman_r_wrist";
browser.currentScene.children[248] = ROUTE846;

ROUTE847 = browser.currentScene.createNode("ROUTE");
ROUTE847.fromField = "value_changed";
ROUTE847.fromNode = "Yaws_r_elbowRotInterp";
ROUTE847.toField = "set_rotation";
ROUTE847.toNode = "boxman_r_elbow";
browser.currentScene.children[249] = ROUTE847;

ROUTE848 = browser.currentScene.createNode("ROUTE");
ROUTE848.fromField = "value_changed";
ROUTE848.fromNode = "Yaws_r_shoulderRotInterp";
ROUTE848.toField = "set_rotation";
ROUTE848.toNode = "boxman_r_shoulder";
browser.currentScene.children[250] = ROUTE848;

ROUTE849 = browser.currentScene.createNode("ROUTE");
ROUTE849.fromField = "value_changed";
ROUTE849.fromNode = "Yaws_l_wristRotInterp";
ROUTE849.toField = "set_rotation";
ROUTE849.toNode = "boxman_l_wrist";
browser.currentScene.children[251] = ROUTE849;

ROUTE850 = browser.currentScene.createNode("ROUTE");
ROUTE850.fromField = "value_changed";
ROUTE850.fromNode = "Yaws_l_elbowRotInterp";
ROUTE850.toField = "set_rotation";
ROUTE850.toNode = "boxman_l_elbow";
browser.currentScene.children[252] = ROUTE850;

ROUTE851 = browser.currentScene.createNode("ROUTE");
ROUTE851.fromField = "value_changed";
ROUTE851.fromNode = "Yaws_l_shoulderRotInterp";
ROUTE851.toField = "set_rotation";
ROUTE851.toNode = "boxman_l_shoulder";
browser.currentScene.children[253] = ROUTE851;

ROUTE852 = browser.currentScene.createNode("ROUTE");
ROUTE852.fromField = "value_changed";
ROUTE852.fromNode = "Yaws_headRotInterp";
ROUTE852.toField = "set_rotation";
ROUTE852.toNode = "boxman_skullbase";
browser.currentScene.children[254] = ROUTE852;

ROUTE853 = browser.currentScene.createNode("ROUTE");
ROUTE853.fromField = "value_changed";
ROUTE853.fromNode = "Yaws_whole_bodyRotInterp";
ROUTE853.toField = "set_rotation";
ROUTE853.toNode = "boxman_HumanoidRoot";
browser.currentScene.children[255] = ROUTE853;

ROUTE854 = browser.currentScene.createNode("ROUTE");
ROUTE854.fromField = "value_changed";
ROUTE854.fromNode = "Yaws_whole_bodyTransInterp";
ROUTE854.toField = "set_translation";
ROUTE854.toNode = "boxman_HumanoidRoot";
browser.currentScene.children[256] = ROUTE854;

ROUTE855 = browser.currentScene.createNode("ROUTE");
ROUTE855.fromField = "value_changed";
ROUTE855.fromNode = "Yaw_vl5Yaw";
ROUTE855.toField = "set_rotation";
ROUTE855.toNode = "boxman_vl5";
browser.currentScene.children[257] = ROUTE855;

ROUTE856 = browser.currentScene.createNode("ROUTE");
ROUTE856.fromField = "fraction_changed";
ROUTE856.fromNode = "RollTimer";
ROUTE856.toField = "set_fraction";
ROUTE856.toNode = "Rolls_r_ankleRotInterp";
browser.currentScene.children[258] = ROUTE856;

ROUTE857 = browser.currentScene.createNode("ROUTE");
ROUTE857.fromField = "fraction_changed";
ROUTE857.fromNode = "RollTimer";
ROUTE857.toField = "set_fraction";
ROUTE857.toNode = "Rolls_r_kneeRotInterp";
browser.currentScene.children[259] = ROUTE857;

ROUTE858 = browser.currentScene.createNode("ROUTE");
ROUTE858.fromField = "fraction_changed";
ROUTE858.fromNode = "RollTimer";
ROUTE858.toField = "set_fraction";
ROUTE858.toNode = "Rolls_r_hipRotInterp";
browser.currentScene.children[260] = ROUTE858;

ROUTE859 = browser.currentScene.createNode("ROUTE");
ROUTE859.fromField = "fraction_changed";
ROUTE859.fromNode = "RollTimer";
ROUTE859.toField = "set_fraction";
ROUTE859.toNode = "Rolls_l_ankleRotInterp";
browser.currentScene.children[261] = ROUTE859;

ROUTE860 = browser.currentScene.createNode("ROUTE");
ROUTE860.fromField = "fraction_changed";
ROUTE860.fromNode = "RollTimer";
ROUTE860.toField = "set_fraction";
ROUTE860.toNode = "Rolls_l_kneeRotInterp";
browser.currentScene.children[262] = ROUTE860;

ROUTE861 = browser.currentScene.createNode("ROUTE");
ROUTE861.fromField = "fraction_changed";
ROUTE861.fromNode = "RollTimer";
ROUTE861.toField = "set_fraction";
ROUTE861.toNode = "Rolls_l_hipRotInterp";
browser.currentScene.children[263] = ROUTE861;

ROUTE862 = browser.currentScene.createNode("ROUTE");
ROUTE862.fromField = "fraction_changed";
ROUTE862.fromNode = "RollTimer";
ROUTE862.toField = "set_fraction";
ROUTE862.toNode = "Rolls_lower_bodyRotInterp";
browser.currentScene.children[264] = ROUTE862;

ROUTE863 = browser.currentScene.createNode("ROUTE");
ROUTE863.fromField = "fraction_changed";
ROUTE863.fromNode = "RollTimer";
ROUTE863.toField = "set_fraction";
ROUTE863.toNode = "Rolls_r_wristRotInterp";
browser.currentScene.children[265] = ROUTE863;

ROUTE864 = browser.currentScene.createNode("ROUTE");
ROUTE864.fromField = "fraction_changed";
ROUTE864.fromNode = "RollTimer";
ROUTE864.toField = "set_fraction";
ROUTE864.toNode = "Rolls_r_elbowRotInterp";
browser.currentScene.children[266] = ROUTE864;

ROUTE865 = browser.currentScene.createNode("ROUTE");
ROUTE865.fromField = "fraction_changed";
ROUTE865.fromNode = "RollTimer";
ROUTE865.toField = "set_fraction";
ROUTE865.toNode = "Rolls_r_shoulderRotInterp";
browser.currentScene.children[267] = ROUTE865;

ROUTE866 = browser.currentScene.createNode("ROUTE");
ROUTE866.fromField = "fraction_changed";
ROUTE866.fromNode = "RollTimer";
ROUTE866.toField = "set_fraction";
ROUTE866.toNode = "Rolls_l_wristRotInterp";
browser.currentScene.children[268] = ROUTE866;

ROUTE867 = browser.currentScene.createNode("ROUTE");
ROUTE867.fromField = "fraction_changed";
ROUTE867.fromNode = "RollTimer";
ROUTE867.toField = "set_fraction";
ROUTE867.toNode = "Rolls_l_elbowRotInterp";
browser.currentScene.children[269] = ROUTE867;

ROUTE868 = browser.currentScene.createNode("ROUTE");
ROUTE868.fromField = "fraction_changed";
ROUTE868.fromNode = "RollTimer";
ROUTE868.toField = "set_fraction";
ROUTE868.toNode = "Rolls_l_shoulderRotInterp";
browser.currentScene.children[270] = ROUTE868;

ROUTE869 = browser.currentScene.createNode("ROUTE");
ROUTE869.fromField = "fraction_changed";
ROUTE869.fromNode = "RollTimer";
ROUTE869.toField = "set_fraction";
ROUTE869.toNode = "Rolls_headRotInterp";
browser.currentScene.children[271] = ROUTE869;

ROUTE870 = browser.currentScene.createNode("ROUTE");
ROUTE870.fromField = "fraction_changed";
ROUTE870.fromNode = "RollTimer";
ROUTE870.toField = "set_fraction";
ROUTE870.toNode = "Rolls_neckRotInterp";
browser.currentScene.children[272] = ROUTE870;

ROUTE871 = browser.currentScene.createNode("ROUTE");
ROUTE871.fromField = "fraction_changed";
ROUTE871.fromNode = "RollTimer";
ROUTE871.toField = "set_fraction";
ROUTE871.toNode = "Rolls_upper_bodyRotInterp";
browser.currentScene.children[273] = ROUTE871;

ROUTE872 = browser.currentScene.createNode("ROUTE");
ROUTE872.fromField = "fraction_changed";
ROUTE872.fromNode = "RollTimer";
ROUTE872.toField = "set_fraction";
ROUTE872.toNode = "Rolls_whole_bodyRotInterp";
browser.currentScene.children[274] = ROUTE872;

ROUTE873 = browser.currentScene.createNode("ROUTE");
ROUTE873.fromField = "fraction_changed";
ROUTE873.fromNode = "RollTimer";
ROUTE873.toField = "set_fraction";
ROUTE873.toNode = "Rolls_whole_bodyTransInterp";
browser.currentScene.children[275] = ROUTE873;

ROUTE874 = browser.currentScene.createNode("ROUTE");
ROUTE874.fromField = "fraction_changed";
ROUTE874.fromNode = "RollTimer";
ROUTE874.toField = "set_fraction";
ROUTE874.toNode = "Roll_l_sternoclavicularRoll";
browser.currentScene.children[276] = ROUTE874;

ROUTE875 = browser.currentScene.createNode("ROUTE");
ROUTE875.fromField = "fraction_changed";
ROUTE875.fromNode = "RollTimer";
ROUTE875.toField = "set_fraction";
ROUTE875.toNode = "Roll_l_acromioclavicularRoll";
browser.currentScene.children[277] = ROUTE875;

ROUTE876 = browser.currentScene.createNode("ROUTE");
ROUTE876.fromField = "fraction_changed";
ROUTE876.fromNode = "RollTimer";
ROUTE876.toField = "set_fraction";
ROUTE876.toNode = "Roll_r_sternoclavicularRoll";
browser.currentScene.children[278] = ROUTE876;

ROUTE877 = browser.currentScene.createNode("ROUTE");
ROUTE877.fromField = "fraction_changed";
ROUTE877.fromNode = "RollTimer";
ROUTE877.toField = "set_fraction";
ROUTE877.toNode = "Roll_r_acromioclavicularRoll";
browser.currentScene.children[279] = ROUTE877;

ROUTE878 = browser.currentScene.createNode("ROUTE");
ROUTE878.fromField = "fraction_changed";
ROUTE878.fromNode = "RollTimer";
ROUTE878.toField = "set_fraction";
ROUTE878.toNode = "Roll_r_metatarsalPitch";
browser.currentScene.children[280] = ROUTE878;

ROUTE879 = browser.currentScene.createNode("ROUTE");
ROUTE879.fromField = "fraction_changed";
ROUTE879.fromNode = "RollTimer";
ROUTE879.toField = "set_fraction";
ROUTE879.toNode = "Roll_sacroiliacYaw";
browser.currentScene.children[281] = ROUTE879;

ROUTE880 = browser.currentScene.createNode("ROUTE");
ROUTE880.fromField = "fraction_changed";
ROUTE880.fromNode = "RollTimer";
ROUTE880.toField = "set_fraction";
ROUTE880.toNode = "Roll_vl5Yaw";
browser.currentScene.children[282] = ROUTE880;

ROUTE881 = browser.currentScene.createNode("ROUTE");
ROUTE881.fromField = "fraction_changed";
ROUTE881.fromNode = "RollTimer";
ROUTE881.toField = "set_fraction";
ROUTE881.toNode = "Roll_vc6Yaw";
browser.currentScene.children[283] = ROUTE881;

ROUTE882 = browser.currentScene.createNode("ROUTE");
ROUTE882.fromField = "fraction_changed";
ROUTE882.fromNode = "RollTimer";
ROUTE882.toField = "set_fraction";
ROUTE882.toNode = "Roll_l_thumb1Pitch";
browser.currentScene.children[284] = ROUTE882;

ROUTE883 = browser.currentScene.createNode("ROUTE");
ROUTE883.fromField = "fraction_changed";
ROUTE883.fromNode = "RollTimer";
ROUTE883.toField = "set_fraction";
ROUTE883.toNode = "Roll_r_thumb1Pitch";
browser.currentScene.children[285] = ROUTE883;

ROUTE884 = browser.currentScene.createNode("ROUTE");
ROUTE884.fromField = "value_changed";
ROUTE884.fromNode = "Rolls_r_ankleRotInterp";
ROUTE884.toField = "set_rotation";
ROUTE884.toNode = "boxman_r_ankle";
browser.currentScene.children[286] = ROUTE884;

ROUTE885 = browser.currentScene.createNode("ROUTE");
ROUTE885.fromField = "value_changed";
ROUTE885.fromNode = "Rolls_r_kneeRotInterp";
ROUTE885.toField = "set_rotation";
ROUTE885.toNode = "boxman_r_knee";
browser.currentScene.children[287] = ROUTE885;

ROUTE886 = browser.currentScene.createNode("ROUTE");
ROUTE886.fromField = "value_changed";
ROUTE886.fromNode = "Rolls_r_hipRotInterp";
ROUTE886.toField = "set_rotation";
ROUTE886.toNode = "boxman_r_hip";
browser.currentScene.children[288] = ROUTE886;

ROUTE887 = browser.currentScene.createNode("ROUTE");
ROUTE887.fromField = "value_changed";
ROUTE887.fromNode = "Rolls_l_ankleRotInterp";
ROUTE887.toField = "set_rotation";
ROUTE887.toNode = "boxman_l_ankle";
browser.currentScene.children[289] = ROUTE887;

ROUTE888 = browser.currentScene.createNode("ROUTE");
ROUTE888.fromField = "value_changed";
ROUTE888.fromNode = "Rolls_l_kneeRotInterp";
ROUTE888.toField = "set_rotation";
ROUTE888.toNode = "boxman_l_knee";
browser.currentScene.children[290] = ROUTE888;

ROUTE889 = browser.currentScene.createNode("ROUTE");
ROUTE889.fromField = "value_changed";
ROUTE889.fromNode = "Rolls_l_hipRotInterp";
ROUTE889.toField = "set_rotation";
ROUTE889.toNode = "boxman_l_hip";
browser.currentScene.children[291] = ROUTE889;

ROUTE890 = browser.currentScene.createNode("ROUTE");
ROUTE890.fromField = "value_changed";
ROUTE890.fromNode = "Rolls_r_wristRotInterp";
ROUTE890.toField = "set_rotation";
ROUTE890.toNode = "boxman_r_wrist";
browser.currentScene.children[292] = ROUTE890;

ROUTE891 = browser.currentScene.createNode("ROUTE");
ROUTE891.fromField = "value_changed";
ROUTE891.fromNode = "Rolls_r_elbowRotInterp";
ROUTE891.toField = "set_rotation";
ROUTE891.toNode = "boxman_r_elbow";
browser.currentScene.children[293] = ROUTE891;

ROUTE892 = browser.currentScene.createNode("ROUTE");
ROUTE892.fromField = "value_changed";
ROUTE892.fromNode = "Rolls_r_shoulderRotInterp";
ROUTE892.toField = "set_rotation";
ROUTE892.toNode = "boxman_r_shoulder";
browser.currentScene.children[294] = ROUTE892;

ROUTE893 = browser.currentScene.createNode("ROUTE");
ROUTE893.fromField = "value_changed";
ROUTE893.fromNode = "Rolls_l_wristRotInterp";
ROUTE893.toField = "set_rotation";
ROUTE893.toNode = "boxman_l_wrist";
browser.currentScene.children[295] = ROUTE893;

ROUTE894 = browser.currentScene.createNode("ROUTE");
ROUTE894.fromField = "value_changed";
ROUTE894.fromNode = "Rolls_l_elbowRotInterp";
ROUTE894.toField = "set_rotation";
ROUTE894.toNode = "boxman_l_elbow";
browser.currentScene.children[296] = ROUTE894;

ROUTE895 = browser.currentScene.createNode("ROUTE");
ROUTE895.fromField = "value_changed";
ROUTE895.fromNode = "Rolls_l_shoulderRotInterp";
ROUTE895.toField = "set_rotation";
ROUTE895.toNode = "boxman_l_shoulder";
browser.currentScene.children[297] = ROUTE895;

ROUTE896 = browser.currentScene.createNode("ROUTE");
ROUTE896.fromField = "value_changed";
ROUTE896.fromNode = "Rolls_headRotInterp";
ROUTE896.toField = "set_rotation";
ROUTE896.toNode = "boxman_skullbase";
browser.currentScene.children[298] = ROUTE896;

ROUTE897 = browser.currentScene.createNode("ROUTE");
ROUTE897.fromField = "value_changed";
ROUTE897.fromNode = "Rolls_whole_bodyRotInterp";
ROUTE897.toField = "set_rotation";
ROUTE897.toNode = "boxman_HumanoidRoot";
browser.currentScene.children[299] = ROUTE897;

ROUTE898 = browser.currentScene.createNode("ROUTE");
ROUTE898.fromField = "value_changed";
ROUTE898.fromNode = "Rolls_whole_bodyTransInterp";
ROUTE898.toField = "set_translation";
ROUTE898.toNode = "boxman_HumanoidRoot";
browser.currentScene.children[300] = ROUTE898;

ROUTE899 = browser.currentScene.createNode("ROUTE");
ROUTE899.fromField = "value_changed";
ROUTE899.fromNode = "Roll_vl5Yaw";
ROUTE899.toField = "set_rotation";
ROUTE899.toNode = "boxman_vl5";
browser.currentScene.children[301] = ROUTE899;

ROUTE900 = browser.currentScene.createNode("ROUTE");
ROUTE900.fromField = "fraction_changed";
ROUTE900.fromNode = "WalkTimer";
ROUTE900.toField = "set_fraction";
ROUTE900.toNode = "Walk_r_ankleRotInterp";
browser.currentScene.children[302] = ROUTE900;

ROUTE901 = browser.currentScene.createNode("ROUTE");
ROUTE901.fromField = "fraction_changed";
ROUTE901.fromNode = "WalkTimer";
ROUTE901.toField = "set_fraction";
ROUTE901.toNode = "Walk_r_kneeRotInterp";
browser.currentScene.children[303] = ROUTE901;

ROUTE902 = browser.currentScene.createNode("ROUTE");
ROUTE902.fromField = "fraction_changed";
ROUTE902.fromNode = "WalkTimer";
ROUTE902.toField = "set_fraction";
ROUTE902.toNode = "Walk_r_hipRotInterp";
browser.currentScene.children[304] = ROUTE902;

ROUTE903 = browser.currentScene.createNode("ROUTE");
ROUTE903.fromField = "fraction_changed";
ROUTE903.fromNode = "WalkTimer";
ROUTE903.toField = "set_fraction";
ROUTE903.toNode = "Walk_l_ankleRotInterp";
browser.currentScene.children[305] = ROUTE903;

ROUTE904 = browser.currentScene.createNode("ROUTE");
ROUTE904.fromField = "fraction_changed";
ROUTE904.fromNode = "WalkTimer";
ROUTE904.toField = "set_fraction";
ROUTE904.toNode = "Walk_l_kneeRotInterp";
browser.currentScene.children[306] = ROUTE904;

ROUTE905 = browser.currentScene.createNode("ROUTE");
ROUTE905.fromField = "fraction_changed";
ROUTE905.fromNode = "WalkTimer";
ROUTE905.toField = "set_fraction";
ROUTE905.toNode = "Walk_l_hipRotInterp";
browser.currentScene.children[307] = ROUTE905;

ROUTE906 = browser.currentScene.createNode("ROUTE");
ROUTE906.fromField = "fraction_changed";
ROUTE906.fromNode = "WalkTimer";
ROUTE906.toField = "set_fraction";
ROUTE906.toNode = "Walk_lower_bodyRotInterp";
browser.currentScene.children[308] = ROUTE906;

ROUTE907 = browser.currentScene.createNode("ROUTE");
ROUTE907.fromField = "fraction_changed";
ROUTE907.fromNode = "WalkTimer";
ROUTE907.toField = "set_fraction";
ROUTE907.toNode = "Walk_r_wristRotInterp";
browser.currentScene.children[309] = ROUTE907;

ROUTE908 = browser.currentScene.createNode("ROUTE");
ROUTE908.fromField = "fraction_changed";
ROUTE908.fromNode = "WalkTimer";
ROUTE908.toField = "set_fraction";
ROUTE908.toNode = "Walk_r_elbowRotInterp";
browser.currentScene.children[310] = ROUTE908;

ROUTE909 = browser.currentScene.createNode("ROUTE");
ROUTE909.fromField = "fraction_changed";
ROUTE909.fromNode = "WalkTimer";
ROUTE909.toField = "set_fraction";
ROUTE909.toNode = "Walk_r_shoulderRotInterp";
browser.currentScene.children[311] = ROUTE909;

ROUTE910 = browser.currentScene.createNode("ROUTE");
ROUTE910.fromField = "fraction_changed";
ROUTE910.fromNode = "WalkTimer";
ROUTE910.toField = "set_fraction";
ROUTE910.toNode = "Walk_l_wristRotInterp";
browser.currentScene.children[312] = ROUTE910;

ROUTE911 = browser.currentScene.createNode("ROUTE");
ROUTE911.fromField = "fraction_changed";
ROUTE911.fromNode = "WalkTimer";
ROUTE911.toField = "set_fraction";
ROUTE911.toNode = "Walk_l_elbowRotInterp";
browser.currentScene.children[313] = ROUTE911;

ROUTE912 = browser.currentScene.createNode("ROUTE");
ROUTE912.fromField = "fraction_changed";
ROUTE912.fromNode = "WalkTimer";
ROUTE912.toField = "set_fraction";
ROUTE912.toNode = "Walk_l_shoulderRotInterp";
browser.currentScene.children[314] = ROUTE912;

ROUTE913 = browser.currentScene.createNode("ROUTE");
ROUTE913.fromField = "fraction_changed";
ROUTE913.fromNode = "WalkTimer";
ROUTE913.toField = "set_fraction";
ROUTE913.toNode = "Walk_headRotInterp";
browser.currentScene.children[315] = ROUTE913;

ROUTE914 = browser.currentScene.createNode("ROUTE");
ROUTE914.fromField = "fraction_changed";
ROUTE914.fromNode = "WalkTimer";
ROUTE914.toField = "set_fraction";
ROUTE914.toNode = "Walk_neckRotInterp";
browser.currentScene.children[316] = ROUTE914;

ROUTE915 = browser.currentScene.createNode("ROUTE");
ROUTE915.fromField = "fraction_changed";
ROUTE915.fromNode = "WalkTimer";
ROUTE915.toField = "set_fraction";
ROUTE915.toNode = "Walk_upper_bodyRotInterp";
browser.currentScene.children[317] = ROUTE915;

ROUTE916 = browser.currentScene.createNode("ROUTE");
ROUTE916.fromField = "fraction_changed";
ROUTE916.fromNode = "WalkTimer";
ROUTE916.toField = "set_fraction";
ROUTE916.toNode = "Walk_whole_bodyRotInterp";
browser.currentScene.children[318] = ROUTE916;

ROUTE917 = browser.currentScene.createNode("ROUTE");
ROUTE917.fromField = "fraction_changed";
ROUTE917.fromNode = "WalkTimer";
ROUTE917.toField = "set_fraction";
ROUTE917.toNode = "Walk_whole_bodyTranInterp";
browser.currentScene.children[319] = ROUTE917;

ROUTE918 = browser.currentScene.createNode("ROUTE");
ROUTE918.fromField = "fraction_changed";
ROUTE918.fromNode = "WalkTimer";
ROUTE918.toField = "set_fraction";
ROUTE918.toNode = "Walk_l_sternoclavicularRoll";
browser.currentScene.children[320] = ROUTE918;

ROUTE919 = browser.currentScene.createNode("ROUTE");
ROUTE919.fromField = "fraction_changed";
ROUTE919.fromNode = "WalkTimer";
ROUTE919.toField = "set_fraction";
ROUTE919.toNode = "Walk_l_acromioclavicularRoll";
browser.currentScene.children[321] = ROUTE919;

ROUTE920 = browser.currentScene.createNode("ROUTE");
ROUTE920.fromField = "fraction_changed";
ROUTE920.fromNode = "WalkTimer";
ROUTE920.toField = "set_fraction";
ROUTE920.toNode = "Walk_r_sternoclavicularRoll";
browser.currentScene.children[322] = ROUTE920;

ROUTE921 = browser.currentScene.createNode("ROUTE");
ROUTE921.fromField = "fraction_changed";
ROUTE921.fromNode = "WalkTimer";
ROUTE921.toField = "set_fraction";
ROUTE921.toNode = "Walk_r_acromioclavicularRoll";
browser.currentScene.children[323] = ROUTE921;

ROUTE922 = browser.currentScene.createNode("ROUTE");
ROUTE922.fromField = "fraction_changed";
ROUTE922.fromNode = "WalkTimer";
ROUTE922.toField = "set_fraction";
ROUTE922.toNode = "Walk_r_metatarsalPitch";
browser.currentScene.children[324] = ROUTE922;

ROUTE923 = browser.currentScene.createNode("ROUTE");
ROUTE923.fromField = "fraction_changed";
ROUTE923.fromNode = "WalkTimer";
ROUTE923.toField = "set_fraction";
ROUTE923.toNode = "Walk_sacroiliacYaw";
browser.currentScene.children[325] = ROUTE923;

ROUTE924 = browser.currentScene.createNode("ROUTE");
ROUTE924.fromField = "fraction_changed";
ROUTE924.fromNode = "WalkTimer";
ROUTE924.toField = "set_fraction";
ROUTE924.toNode = "Walk_vl5Yaw";
browser.currentScene.children[326] = ROUTE924;

ROUTE925 = browser.currentScene.createNode("ROUTE");
ROUTE925.fromField = "fraction_changed";
ROUTE925.fromNode = "WalkTimer";
ROUTE925.toField = "set_fraction";
ROUTE925.toNode = "Walk_vc6Yaw";
browser.currentScene.children[327] = ROUTE925;

ROUTE926 = browser.currentScene.createNode("ROUTE");
ROUTE926.fromField = "fraction_changed";
ROUTE926.fromNode = "WalkTimer";
ROUTE926.toField = "set_fraction";
ROUTE926.toNode = "Walk_l_thumb1Pitch";
browser.currentScene.children[328] = ROUTE926;

ROUTE927 = browser.currentScene.createNode("ROUTE");
ROUTE927.fromField = "fraction_changed";
ROUTE927.fromNode = "WalkTimer";
ROUTE927.toField = "set_fraction";
ROUTE927.toNode = "Walk_r_thumb1Pitch";
browser.currentScene.children[329] = ROUTE927;

ROUTE928 = browser.currentScene.createNode("ROUTE");
ROUTE928.fromField = "value_changed";
ROUTE928.fromNode = "Walk_r_ankleRotInterp";
ROUTE928.toField = "set_rotation";
ROUTE928.toNode = "boxman_r_ankle";
browser.currentScene.children[330] = ROUTE928;

ROUTE929 = browser.currentScene.createNode("ROUTE");
ROUTE929.fromField = "value_changed";
ROUTE929.fromNode = "Walk_r_kneeRotInterp";
ROUTE929.toField = "set_rotation";
ROUTE929.toNode = "boxman_r_knee";
browser.currentScene.children[331] = ROUTE929;

ROUTE930 = browser.currentScene.createNode("ROUTE");
ROUTE930.fromField = "value_changed";
ROUTE930.fromNode = "Walk_r_hipRotInterp";
ROUTE930.toField = "set_rotation";
ROUTE930.toNode = "boxman_r_hip";
browser.currentScene.children[332] = ROUTE930;

ROUTE931 = browser.currentScene.createNode("ROUTE");
ROUTE931.fromField = "value_changed";
ROUTE931.fromNode = "Walk_l_ankleRotInterp";
ROUTE931.toField = "set_rotation";
ROUTE931.toNode = "boxman_l_ankle";
browser.currentScene.children[333] = ROUTE931;

ROUTE932 = browser.currentScene.createNode("ROUTE");
ROUTE932.fromField = "value_changed";
ROUTE932.fromNode = "Walk_l_kneeRotInterp";
ROUTE932.toField = "set_rotation";
ROUTE932.toNode = "boxman_l_knee";
browser.currentScene.children[334] = ROUTE932;

ROUTE933 = browser.currentScene.createNode("ROUTE");
ROUTE933.fromField = "value_changed";
ROUTE933.fromNode = "Walk_l_hipRotInterp";
ROUTE933.toField = "set_rotation";
ROUTE933.toNode = "boxman_l_hip";
browser.currentScene.children[335] = ROUTE933;

ROUTE934 = browser.currentScene.createNode("ROUTE");
ROUTE934.fromField = "value_changed";
ROUTE934.fromNode = "Walk_r_wristRotInterp";
ROUTE934.toField = "set_rotation";
ROUTE934.toNode = "boxman_r_wrist";
browser.currentScene.children[336] = ROUTE934;

ROUTE935 = browser.currentScene.createNode("ROUTE");
ROUTE935.fromField = "value_changed";
ROUTE935.fromNode = "Walk_r_elbowRotInterp";
ROUTE935.toField = "set_rotation";
ROUTE935.toNode = "boxman_r_elbow";
browser.currentScene.children[337] = ROUTE935;

ROUTE936 = browser.currentScene.createNode("ROUTE");
ROUTE936.fromField = "value_changed";
ROUTE936.fromNode = "Walk_r_shoulderRotInterp";
ROUTE936.toField = "set_rotation";
ROUTE936.toNode = "boxman_r_shoulder";
browser.currentScene.children[338] = ROUTE936;

ROUTE937 = browser.currentScene.createNode("ROUTE");
ROUTE937.fromField = "value_changed";
ROUTE937.fromNode = "Walk_l_wristRotInterp";
ROUTE937.toField = "set_rotation";
ROUTE937.toNode = "boxman_l_wrist";
browser.currentScene.children[339] = ROUTE937;

ROUTE938 = browser.currentScene.createNode("ROUTE");
ROUTE938.fromField = "value_changed";
ROUTE938.fromNode = "Walk_l_elbowRotInterp";
ROUTE938.toField = "set_rotation";
ROUTE938.toNode = "boxman_l_elbow";
browser.currentScene.children[340] = ROUTE938;

ROUTE939 = browser.currentScene.createNode("ROUTE");
ROUTE939.fromField = "value_changed";
ROUTE939.fromNode = "Walk_l_shoulderRotInterp";
ROUTE939.toField = "set_rotation";
ROUTE939.toNode = "boxman_l_shoulder";
browser.currentScene.children[341] = ROUTE939;

ROUTE940 = browser.currentScene.createNode("ROUTE");
ROUTE940.fromField = "value_changed";
ROUTE940.fromNode = "Walk_headRotInterp";
ROUTE940.toField = "set_rotation";
ROUTE940.toNode = "boxman_skullbase";
browser.currentScene.children[342] = ROUTE940;

ROUTE941 = browser.currentScene.createNode("ROUTE");
ROUTE941.fromField = "value_changed";
ROUTE941.fromNode = "Walk_whole_bodyRotInterp";
ROUTE941.toField = "set_rotation";
ROUTE941.toNode = "boxman_HumanoidRoot";
browser.currentScene.children[343] = ROUTE941;

ROUTE942 = browser.currentScene.createNode("ROUTE");
ROUTE942.fromField = "value_changed";
ROUTE942.fromNode = "Walk_whole_bodyTranInterp";
ROUTE942.toField = "set_translation";
ROUTE942.toNode = "boxman_HumanoidRoot";
browser.currentScene.children[344] = ROUTE942;

ROUTE943 = browser.currentScene.createNode("ROUTE");
ROUTE943.fromField = "value_changed";
ROUTE943.fromNode = "Walk_vl5Yaw";
ROUTE943.toField = "set_rotation";
ROUTE943.toNode = "boxman_vl5";
browser.currentScene.children[345] = ROUTE943;

ROUTE944 = browser.currentScene.createNode("ROUTE");
ROUTE944.fromField = "fraction_changed";
ROUTE944.fromNode = "RunTimer";
ROUTE944.toField = "set_fraction";
ROUTE944.toNode = "Run_r_ankleRotInterp_Run";
browser.currentScene.children[346] = ROUTE944;

ROUTE945 = browser.currentScene.createNode("ROUTE");
ROUTE945.fromField = "fraction_changed";
ROUTE945.fromNode = "RunTimer";
ROUTE945.toField = "set_fraction";
ROUTE945.toNode = "Run_r_kneeRotInterp_Run";
browser.currentScene.children[347] = ROUTE945;

ROUTE946 = browser.currentScene.createNode("ROUTE");
ROUTE946.fromField = "fraction_changed";
ROUTE946.fromNode = "RunTimer";
ROUTE946.toField = "set_fraction";
ROUTE946.toNode = "Run_r_hipRotInterp_Run";
browser.currentScene.children[348] = ROUTE946;

ROUTE947 = browser.currentScene.createNode("ROUTE");
ROUTE947.fromField = "fraction_changed";
ROUTE947.fromNode = "RunTimer";
ROUTE947.toField = "set_fraction";
ROUTE947.toNode = "Run_l_ankleRotInterp_Run";
browser.currentScene.children[349] = ROUTE947;

ROUTE948 = browser.currentScene.createNode("ROUTE");
ROUTE948.fromField = "fraction_changed";
ROUTE948.fromNode = "RunTimer";
ROUTE948.toField = "set_fraction";
ROUTE948.toNode = "Run_l_kneeRotInterp_Run";
browser.currentScene.children[350] = ROUTE948;

ROUTE949 = browser.currentScene.createNode("ROUTE");
ROUTE949.fromField = "fraction_changed";
ROUTE949.fromNode = "RunTimer";
ROUTE949.toField = "set_fraction";
ROUTE949.toNode = "Run_l_hipRotInterp_Run";
browser.currentScene.children[351] = ROUTE949;

ROUTE950 = browser.currentScene.createNode("ROUTE");
ROUTE950.fromField = "fraction_changed";
ROUTE950.fromNode = "RunTimer";
ROUTE950.toField = "set_fraction";
ROUTE950.toNode = "Run_lower_bodyRotInterp_Run";
browser.currentScene.children[352] = ROUTE950;

ROUTE951 = browser.currentScene.createNode("ROUTE");
ROUTE951.fromField = "fraction_changed";
ROUTE951.fromNode = "RunTimer";
ROUTE951.toField = "set_fraction";
ROUTE951.toNode = "Run_r_wristRotInterp_Run";
browser.currentScene.children[353] = ROUTE951;

ROUTE952 = browser.currentScene.createNode("ROUTE");
ROUTE952.fromField = "fraction_changed";
ROUTE952.fromNode = "RunTimer";
ROUTE952.toField = "set_fraction";
ROUTE952.toNode = "Run_r_elbowRotInterp_Run";
browser.currentScene.children[354] = ROUTE952;

ROUTE953 = browser.currentScene.createNode("ROUTE");
ROUTE953.fromField = "fraction_changed";
ROUTE953.fromNode = "RunTimer";
ROUTE953.toField = "set_fraction";
ROUTE953.toNode = "Run_r_shoulderRotInterp_Run";
browser.currentScene.children[355] = ROUTE953;

ROUTE954 = browser.currentScene.createNode("ROUTE");
ROUTE954.fromField = "fraction_changed";
ROUTE954.fromNode = "RunTimer";
ROUTE954.toField = "set_fraction";
ROUTE954.toNode = "Run_l_wristRotInterp_Run";
browser.currentScene.children[356] = ROUTE954;

ROUTE955 = browser.currentScene.createNode("ROUTE");
ROUTE955.fromField = "fraction_changed";
ROUTE955.fromNode = "RunTimer";
ROUTE955.toField = "set_fraction";
ROUTE955.toNode = "Run_l_elbowRotInterp_Run";
browser.currentScene.children[357] = ROUTE955;

ROUTE956 = browser.currentScene.createNode("ROUTE");
ROUTE956.fromField = "fraction_changed";
ROUTE956.fromNode = "RunTimer";
ROUTE956.toField = "set_fraction";
ROUTE956.toNode = "Run_l_shoulderRotInterp_Run";
browser.currentScene.children[358] = ROUTE956;

ROUTE957 = browser.currentScene.createNode("ROUTE");
ROUTE957.fromField = "fraction_changed";
ROUTE957.fromNode = "RunTimer";
ROUTE957.toField = "set_fraction";
ROUTE957.toNode = "Run_headRotInterp_Run";
browser.currentScene.children[359] = ROUTE957;

ROUTE958 = browser.currentScene.createNode("ROUTE");
ROUTE958.fromField = "fraction_changed";
ROUTE958.fromNode = "RunTimer";
ROUTE958.toField = "set_fraction";
ROUTE958.toNode = "Run_neckRotInterp_Run";
browser.currentScene.children[360] = ROUTE958;

ROUTE959 = browser.currentScene.createNode("ROUTE");
ROUTE959.fromField = "fraction_changed";
ROUTE959.fromNode = "RunTimer";
ROUTE959.toField = "set_fraction";
ROUTE959.toNode = "Run_upper_bodyRotInterp_Run";
browser.currentScene.children[361] = ROUTE959;

ROUTE960 = browser.currentScene.createNode("ROUTE");
ROUTE960.fromField = "fraction_changed";
ROUTE960.fromNode = "RunTimer";
ROUTE960.toField = "set_fraction";
ROUTE960.toNode = "Run_whole_bodyRotInterp_Run";
browser.currentScene.children[362] = ROUTE960;

ROUTE961 = browser.currentScene.createNode("ROUTE");
ROUTE961.fromField = "fraction_changed";
ROUTE961.fromNode = "RunTimer";
ROUTE961.toField = "set_fraction";
ROUTE961.toNode = "Run_whole_bodyTranInterp_Run";
browser.currentScene.children[363] = ROUTE961;

ROUTE962 = browser.currentScene.createNode("ROUTE");
ROUTE962.fromField = "fraction_changed";
ROUTE962.fromNode = "RunTimer";
ROUTE962.toField = "set_fraction";
ROUTE962.toNode = "Run_l_sternoclavicularRoll";
browser.currentScene.children[364] = ROUTE962;

ROUTE963 = browser.currentScene.createNode("ROUTE");
ROUTE963.fromField = "fraction_changed";
ROUTE963.fromNode = "RunTimer";
ROUTE963.toField = "set_fraction";
ROUTE963.toNode = "Run_l_acromioclavicularRoll";
browser.currentScene.children[365] = ROUTE963;

ROUTE964 = browser.currentScene.createNode("ROUTE");
ROUTE964.fromField = "fraction_changed";
ROUTE964.fromNode = "RunTimer";
ROUTE964.toField = "set_fraction";
ROUTE964.toNode = "Run_r_sternoclavicularRoll";
browser.currentScene.children[366] = ROUTE964;

ROUTE965 = browser.currentScene.createNode("ROUTE");
ROUTE965.fromField = "fraction_changed";
ROUTE965.fromNode = "RunTimer";
ROUTE965.toField = "set_fraction";
ROUTE965.toNode = "Run_r_acromioclavicularRoll";
browser.currentScene.children[367] = ROUTE965;

ROUTE966 = browser.currentScene.createNode("ROUTE");
ROUTE966.fromField = "fraction_changed";
ROUTE966.fromNode = "RunTimer";
ROUTE966.toField = "set_fraction";
ROUTE966.toNode = "Run_r_metatarsalPitch";
browser.currentScene.children[368] = ROUTE966;

ROUTE967 = browser.currentScene.createNode("ROUTE");
ROUTE967.fromField = "fraction_changed";
ROUTE967.fromNode = "RunTimer";
ROUTE967.toField = "set_fraction";
ROUTE967.toNode = "Run_sacroiliacYaw";
browser.currentScene.children[369] = ROUTE967;

ROUTE968 = browser.currentScene.createNode("ROUTE");
ROUTE968.fromField = "fraction_changed";
ROUTE968.fromNode = "RunTimer";
ROUTE968.toField = "set_fraction";
ROUTE968.toNode = "Run_vl5Yaw";
browser.currentScene.children[370] = ROUTE968;

ROUTE969 = browser.currentScene.createNode("ROUTE");
ROUTE969.fromField = "fraction_changed";
ROUTE969.fromNode = "RunTimer";
ROUTE969.toField = "set_fraction";
ROUTE969.toNode = "Run_vc6Yaw";
browser.currentScene.children[371] = ROUTE969;

ROUTE970 = browser.currentScene.createNode("ROUTE");
ROUTE970.fromField = "fraction_changed";
ROUTE970.fromNode = "RunTimer";
ROUTE970.toField = "set_fraction";
ROUTE970.toNode = "Run_l_thumb1Pitch";
browser.currentScene.children[372] = ROUTE970;

ROUTE971 = browser.currentScene.createNode("ROUTE");
ROUTE971.fromField = "fraction_changed";
ROUTE971.fromNode = "RunTimer";
ROUTE971.toField = "set_fraction";
ROUTE971.toNode = "Run_r_thumb1Pitch";
browser.currentScene.children[373] = ROUTE971;

ROUTE972 = browser.currentScene.createNode("ROUTE");
ROUTE972.fromField = "value_changed";
ROUTE972.fromNode = "Run_r_ankleRotInterp_Run";
ROUTE972.toField = "set_rotation";
ROUTE972.toNode = "boxman_r_ankle";
browser.currentScene.children[374] = ROUTE972;

ROUTE973 = browser.currentScene.createNode("ROUTE");
ROUTE973.fromField = "value_changed";
ROUTE973.fromNode = "Run_r_kneeRotInterp_Run";
ROUTE973.toField = "set_rotation";
ROUTE973.toNode = "boxman_r_knee";
browser.currentScene.children[375] = ROUTE973;

ROUTE974 = browser.currentScene.createNode("ROUTE");
ROUTE974.fromField = "value_changed";
ROUTE974.fromNode = "Run_r_hipRotInterp_Run";
ROUTE974.toField = "set_rotation";
ROUTE974.toNode = "boxman_r_hip";
browser.currentScene.children[376] = ROUTE974;

ROUTE975 = browser.currentScene.createNode("ROUTE");
ROUTE975.fromField = "value_changed";
ROUTE975.fromNode = "Run_l_ankleRotInterp_Run";
ROUTE975.toField = "set_rotation";
ROUTE975.toNode = "boxman_l_ankle";
browser.currentScene.children[377] = ROUTE975;

ROUTE976 = browser.currentScene.createNode("ROUTE");
ROUTE976.fromField = "value_changed";
ROUTE976.fromNode = "Run_l_kneeRotInterp_Run";
ROUTE976.toField = "set_rotation";
ROUTE976.toNode = "boxman_l_knee";
browser.currentScene.children[378] = ROUTE976;

ROUTE977 = browser.currentScene.createNode("ROUTE");
ROUTE977.fromField = "value_changed";
ROUTE977.fromNode = "Run_l_hipRotInterp_Run";
ROUTE977.toField = "set_rotation";
ROUTE977.toNode = "boxman_l_hip";
browser.currentScene.children[379] = ROUTE977;

ROUTE978 = browser.currentScene.createNode("ROUTE");
ROUTE978.fromField = "value_changed";
ROUTE978.fromNode = "Run_r_wristRotInterp_Run";
ROUTE978.toField = "set_rotation";
ROUTE978.toNode = "boxman_r_wrist";
browser.currentScene.children[380] = ROUTE978;

ROUTE979 = browser.currentScene.createNode("ROUTE");
ROUTE979.fromField = "value_changed";
ROUTE979.fromNode = "Run_r_elbowRotInterp_Run";
ROUTE979.toField = "set_rotation";
ROUTE979.toNode = "boxman_r_elbow";
browser.currentScene.children[381] = ROUTE979;

ROUTE980 = browser.currentScene.createNode("ROUTE");
ROUTE980.fromField = "value_changed";
ROUTE980.fromNode = "Run_r_shoulderRotInterp_Run";
ROUTE980.toField = "set_rotation";
ROUTE980.toNode = "boxman_r_shoulder";
browser.currentScene.children[382] = ROUTE980;

ROUTE981 = browser.currentScene.createNode("ROUTE");
ROUTE981.fromField = "value_changed";
ROUTE981.fromNode = "Run_l_wristRotInterp_Run";
ROUTE981.toField = "set_rotation";
ROUTE981.toNode = "boxman_l_wrist";
browser.currentScene.children[383] = ROUTE981;

ROUTE982 = browser.currentScene.createNode("ROUTE");
ROUTE982.fromField = "value_changed";
ROUTE982.fromNode = "Run_l_elbowRotInterp_Run";
ROUTE982.toField = "set_rotation";
ROUTE982.toNode = "boxman_l_elbow";
browser.currentScene.children[384] = ROUTE982;

ROUTE983 = browser.currentScene.createNode("ROUTE");
ROUTE983.fromField = "value_changed";
ROUTE983.fromNode = "Run_l_shoulderRotInterp_Run";
ROUTE983.toField = "set_rotation";
ROUTE983.toNode = "boxman_l_shoulder";
browser.currentScene.children[385] = ROUTE983;

ROUTE984 = browser.currentScene.createNode("ROUTE");
ROUTE984.fromField = "value_changed";
ROUTE984.fromNode = "Run_headRotInterp_Run";
ROUTE984.toField = "set_rotation";
ROUTE984.toNode = "boxman_skullbase";
browser.currentScene.children[386] = ROUTE984;

ROUTE985 = browser.currentScene.createNode("ROUTE");
ROUTE985.fromField = "value_changed";
ROUTE985.fromNode = "Run_whole_bodyRotInterp_Run";
ROUTE985.toField = "set_rotation";
ROUTE985.toNode = "boxman_HumanoidRoot";
browser.currentScene.children[387] = ROUTE985;

ROUTE986 = browser.currentScene.createNode("ROUTE");
ROUTE986.fromField = "value_changed";
ROUTE986.fromNode = "Run_whole_bodyTranInterp_Run";
ROUTE986.toField = "set_translation";
ROUTE986.toNode = "boxman_HumanoidRoot";
browser.currentScene.children[388] = ROUTE986;

ROUTE987 = browser.currentScene.createNode("ROUTE");
ROUTE987.fromField = "value_changed";
ROUTE987.fromNode = "Run_vl5Yaw";
ROUTE987.toField = "set_rotation";
ROUTE987.toNode = "boxman_vl5";
browser.currentScene.children[389] = ROUTE987;

ROUTE988 = browser.currentScene.createNode("ROUTE");
ROUTE988.fromField = "fraction_changed";
ROUTE988.fromNode = "JumpTimer";
ROUTE988.toField = "set_fraction";
ROUTE988.toNode = "Jump_r_ankleRotInterp";
browser.currentScene.children[390] = ROUTE988;

ROUTE989 = browser.currentScene.createNode("ROUTE");
ROUTE989.fromField = "fraction_changed";
ROUTE989.fromNode = "JumpTimer";
ROUTE989.toField = "set_fraction";
ROUTE989.toNode = "Jump_r_kneeRotInterp";
browser.currentScene.children[391] = ROUTE989;

ROUTE990 = browser.currentScene.createNode("ROUTE");
ROUTE990.fromField = "fraction_changed";
ROUTE990.fromNode = "JumpTimer";
ROUTE990.toField = "set_fraction";
ROUTE990.toNode = "Jump_r_hipRotInterp";
browser.currentScene.children[392] = ROUTE990;

ROUTE991 = browser.currentScene.createNode("ROUTE");
ROUTE991.fromField = "fraction_changed";
ROUTE991.fromNode = "JumpTimer";
ROUTE991.toField = "set_fraction";
ROUTE991.toNode = "Jump_l_ankleRotInterp";
browser.currentScene.children[393] = ROUTE991;

ROUTE992 = browser.currentScene.createNode("ROUTE");
ROUTE992.fromField = "fraction_changed";
ROUTE992.fromNode = "JumpTimer";
ROUTE992.toField = "set_fraction";
ROUTE992.toNode = "Jump_l_kneeRotInterp";
browser.currentScene.children[394] = ROUTE992;

ROUTE993 = browser.currentScene.createNode("ROUTE");
ROUTE993.fromField = "fraction_changed";
ROUTE993.fromNode = "JumpTimer";
ROUTE993.toField = "set_fraction";
ROUTE993.toNode = "Jump_l_hipRotInterp";
browser.currentScene.children[395] = ROUTE993;

ROUTE994 = browser.currentScene.createNode("ROUTE");
ROUTE994.fromField = "fraction_changed";
ROUTE994.fromNode = "JumpTimer";
ROUTE994.toField = "set_fraction";
ROUTE994.toNode = "Jump_lower_bodyRotInterp";
browser.currentScene.children[396] = ROUTE994;

ROUTE995 = browser.currentScene.createNode("ROUTE");
ROUTE995.fromField = "fraction_changed";
ROUTE995.fromNode = "JumpTimer";
ROUTE995.toField = "set_fraction";
ROUTE995.toNode = "Jump_r_wristRotInterp";
browser.currentScene.children[397] = ROUTE995;

ROUTE996 = browser.currentScene.createNode("ROUTE");
ROUTE996.fromField = "fraction_changed";
ROUTE996.fromNode = "JumpTimer";
ROUTE996.toField = "set_fraction";
ROUTE996.toNode = "Jump_r_elbowRotInterp";
browser.currentScene.children[398] = ROUTE996;

ROUTE997 = browser.currentScene.createNode("ROUTE");
ROUTE997.fromField = "fraction_changed";
ROUTE997.fromNode = "JumpTimer";
ROUTE997.toField = "set_fraction";
ROUTE997.toNode = "Jump_r_shoulderRotInterp";
browser.currentScene.children[399] = ROUTE997;

ROUTE998 = browser.currentScene.createNode("ROUTE");
ROUTE998.fromField = "fraction_changed";
ROUTE998.fromNode = "JumpTimer";
ROUTE998.toField = "set_fraction";
ROUTE998.toNode = "Jump_l_wristRotInterp";
browser.currentScene.children[400] = ROUTE998;

ROUTE999 = browser.currentScene.createNode("ROUTE");
ROUTE999.fromField = "fraction_changed";
ROUTE999.fromNode = "JumpTimer";
ROUTE999.toField = "set_fraction";
ROUTE999.toNode = "Jump_l_elbowRotInterp";
browser.currentScene.children[401] = ROUTE999;

ROUTE1000 = browser.currentScene.createNode("ROUTE");
ROUTE1000.fromField = "fraction_changed";
ROUTE1000.fromNode = "JumpTimer";
ROUTE1000.toField = "set_fraction";
ROUTE1000.toNode = "Jump_l_shoulderRotInterp";
browser.currentScene.children[402] = ROUTE1000;

ROUTE1001 = browser.currentScene.createNode("ROUTE");
ROUTE1001.fromField = "fraction_changed";
ROUTE1001.fromNode = "JumpTimer";
ROUTE1001.toField = "set_fraction";
ROUTE1001.toNode = "Jump_headRotInterp";
browser.currentScene.children[403] = ROUTE1001;

ROUTE1002 = browser.currentScene.createNode("ROUTE");
ROUTE1002.fromField = "fraction_changed";
ROUTE1002.fromNode = "JumpTimer";
ROUTE1002.toField = "set_fraction";
ROUTE1002.toNode = "Jump_neckRotInterp";
browser.currentScene.children[404] = ROUTE1002;

ROUTE1003 = browser.currentScene.createNode("ROUTE");
ROUTE1003.fromField = "fraction_changed";
ROUTE1003.fromNode = "JumpTimer";
ROUTE1003.toField = "set_fraction";
ROUTE1003.toNode = "Jump_upper_bodyRotInterp";
browser.currentScene.children[405] = ROUTE1003;

ROUTE1004 = browser.currentScene.createNode("ROUTE");
ROUTE1004.fromField = "fraction_changed";
ROUTE1004.fromNode = "JumpTimer";
ROUTE1004.toField = "set_fraction";
ROUTE1004.toNode = "Jump_whole_bodyRotInterp";
browser.currentScene.children[406] = ROUTE1004;

ROUTE1005 = browser.currentScene.createNode("ROUTE");
ROUTE1005.fromField = "fraction_changed";
ROUTE1005.fromNode = "JumpTimer";
ROUTE1005.toField = "set_fraction";
ROUTE1005.toNode = "Jump_whole_bodyTranInterp";
browser.currentScene.children[407] = ROUTE1005;

ROUTE1006 = browser.currentScene.createNode("ROUTE");
ROUTE1006.fromField = "fraction_changed";
ROUTE1006.fromNode = "JumpTimer";
ROUTE1006.toField = "set_fraction";
ROUTE1006.toNode = "Jump_l_sternoclavicularRoll";
browser.currentScene.children[408] = ROUTE1006;

ROUTE1007 = browser.currentScene.createNode("ROUTE");
ROUTE1007.fromField = "fraction_changed";
ROUTE1007.fromNode = "JumpTimer";
ROUTE1007.toField = "set_fraction";
ROUTE1007.toNode = "Jump_l_acromioclavicularRoll";
browser.currentScene.children[409] = ROUTE1007;

ROUTE1008 = browser.currentScene.createNode("ROUTE");
ROUTE1008.fromField = "fraction_changed";
ROUTE1008.fromNode = "JumpTimer";
ROUTE1008.toField = "set_fraction";
ROUTE1008.toNode = "Jump_r_sternoclavicularRoll";
browser.currentScene.children[410] = ROUTE1008;

ROUTE1009 = browser.currentScene.createNode("ROUTE");
ROUTE1009.fromField = "fraction_changed";
ROUTE1009.fromNode = "JumpTimer";
ROUTE1009.toField = "set_fraction";
ROUTE1009.toNode = "Jump_r_acromioclavicularRoll";
browser.currentScene.children[411] = ROUTE1009;

ROUTE1010 = browser.currentScene.createNode("ROUTE");
ROUTE1010.fromField = "fraction_changed";
ROUTE1010.fromNode = "JumpTimer";
ROUTE1010.toField = "set_fraction";
ROUTE1010.toNode = "Jump_r_metatarsalPitch";
browser.currentScene.children[412] = ROUTE1010;

ROUTE1011 = browser.currentScene.createNode("ROUTE");
ROUTE1011.fromField = "fraction_changed";
ROUTE1011.fromNode = "JumpTimer";
ROUTE1011.toField = "set_fraction";
ROUTE1011.toNode = "Jump_sacroiliacYaw";
browser.currentScene.children[413] = ROUTE1011;

ROUTE1012 = browser.currentScene.createNode("ROUTE");
ROUTE1012.fromField = "fraction_changed";
ROUTE1012.fromNode = "JumpTimer";
ROUTE1012.toField = "set_fraction";
ROUTE1012.toNode = "Jump_vl5Yaw";
browser.currentScene.children[414] = ROUTE1012;

ROUTE1013 = browser.currentScene.createNode("ROUTE");
ROUTE1013.fromField = "fraction_changed";
ROUTE1013.fromNode = "JumpTimer";
ROUTE1013.toField = "set_fraction";
ROUTE1013.toNode = "Jump_vc6Yaw";
browser.currentScene.children[415] = ROUTE1013;

ROUTE1014 = browser.currentScene.createNode("ROUTE");
ROUTE1014.fromField = "fraction_changed";
ROUTE1014.fromNode = "JumpTimer";
ROUTE1014.toField = "set_fraction";
ROUTE1014.toNode = "Jump_l_thumb1Pitch";
browser.currentScene.children[416] = ROUTE1014;

ROUTE1015 = browser.currentScene.createNode("ROUTE");
ROUTE1015.fromField = "fraction_changed";
ROUTE1015.fromNode = "JumpTimer";
ROUTE1015.toField = "set_fraction";
ROUTE1015.toNode = "Jump_r_thumb1Pitch";
browser.currentScene.children[417] = ROUTE1015;

ROUTE1016 = browser.currentScene.createNode("ROUTE");
ROUTE1016.fromField = "value_changed";
ROUTE1016.fromNode = "Jump_r_ankleRotInterp";
ROUTE1016.toField = "set_rotation";
ROUTE1016.toNode = "boxman_r_ankle";
browser.currentScene.children[418] = ROUTE1016;

ROUTE1017 = browser.currentScene.createNode("ROUTE");
ROUTE1017.fromField = "value_changed";
ROUTE1017.fromNode = "Jump_r_kneeRotInterp";
ROUTE1017.toField = "set_rotation";
ROUTE1017.toNode = "boxman_r_knee";
browser.currentScene.children[419] = ROUTE1017;

ROUTE1018 = browser.currentScene.createNode("ROUTE");
ROUTE1018.fromField = "value_changed";
ROUTE1018.fromNode = "Jump_r_hipRotInterp";
ROUTE1018.toField = "set_rotation";
ROUTE1018.toNode = "boxman_r_hip";
browser.currentScene.children[420] = ROUTE1018;

ROUTE1019 = browser.currentScene.createNode("ROUTE");
ROUTE1019.fromField = "value_changed";
ROUTE1019.fromNode = "Jump_l_ankleRotInterp";
ROUTE1019.toField = "set_rotation";
ROUTE1019.toNode = "boxman_l_ankle";
browser.currentScene.children[421] = ROUTE1019;

ROUTE1020 = browser.currentScene.createNode("ROUTE");
ROUTE1020.fromField = "value_changed";
ROUTE1020.fromNode = "Jump_l_kneeRotInterp";
ROUTE1020.toField = "set_rotation";
ROUTE1020.toNode = "boxman_l_knee";
browser.currentScene.children[422] = ROUTE1020;

ROUTE1021 = browser.currentScene.createNode("ROUTE");
ROUTE1021.fromField = "value_changed";
ROUTE1021.fromNode = "Jump_l_hipRotInterp";
ROUTE1021.toField = "set_rotation";
ROUTE1021.toNode = "boxman_l_hip";
browser.currentScene.children[423] = ROUTE1021;

ROUTE1022 = browser.currentScene.createNode("ROUTE");
ROUTE1022.fromField = "value_changed";
ROUTE1022.fromNode = "Jump_r_wristRotInterp";
ROUTE1022.toField = "set_rotation";
ROUTE1022.toNode = "boxman_r_wrist";
browser.currentScene.children[424] = ROUTE1022;

ROUTE1023 = browser.currentScene.createNode("ROUTE");
ROUTE1023.fromField = "value_changed";
ROUTE1023.fromNode = "Jump_r_elbowRotInterp";
ROUTE1023.toField = "set_rotation";
ROUTE1023.toNode = "boxman_r_elbow";
browser.currentScene.children[425] = ROUTE1023;

ROUTE1024 = browser.currentScene.createNode("ROUTE");
ROUTE1024.fromField = "value_changed";
ROUTE1024.fromNode = "Jump_r_shoulderRotInterp";
ROUTE1024.toField = "set_rotation";
ROUTE1024.toNode = "boxman_r_shoulder";
browser.currentScene.children[426] = ROUTE1024;

ROUTE1025 = browser.currentScene.createNode("ROUTE");
ROUTE1025.fromField = "value_changed";
ROUTE1025.fromNode = "Jump_l_wristRotInterp";
ROUTE1025.toField = "set_rotation";
ROUTE1025.toNode = "boxman_l_wrist";
browser.currentScene.children[427] = ROUTE1025;

ROUTE1026 = browser.currentScene.createNode("ROUTE");
ROUTE1026.fromField = "value_changed";
ROUTE1026.fromNode = "Jump_l_elbowRotInterp";
ROUTE1026.toField = "set_rotation";
ROUTE1026.toNode = "boxman_l_elbow";
browser.currentScene.children[428] = ROUTE1026;

ROUTE1027 = browser.currentScene.createNode("ROUTE");
ROUTE1027.fromField = "value_changed";
ROUTE1027.fromNode = "Jump_l_shoulderRotInterp";
ROUTE1027.toField = "set_rotation";
ROUTE1027.toNode = "boxman_l_shoulder";
browser.currentScene.children[429] = ROUTE1027;

ROUTE1028 = browser.currentScene.createNode("ROUTE");
ROUTE1028.fromField = "value_changed";
ROUTE1028.fromNode = "Jump_headRotInterp";
ROUTE1028.toField = "set_rotation";
ROUTE1028.toNode = "boxman_skullbase";
browser.currentScene.children[430] = ROUTE1028;

ROUTE1029 = browser.currentScene.createNode("ROUTE");
ROUTE1029.fromField = "value_changed";
ROUTE1029.fromNode = "Jump_whole_bodyRotInterp";
ROUTE1029.toField = "set_rotation";
ROUTE1029.toNode = "boxman_HumanoidRoot";
browser.currentScene.children[431] = ROUTE1029;

ROUTE1030 = browser.currentScene.createNode("ROUTE");
ROUTE1030.fromField = "value_changed";
ROUTE1030.fromNode = "Jump_whole_bodyTranInterp";
ROUTE1030.toField = "set_translation";
ROUTE1030.toNode = "boxman_HumanoidRoot";
browser.currentScene.children[432] = ROUTE1030;

ROUTE1031 = browser.currentScene.createNode("ROUTE");
ROUTE1031.fromField = "value_changed";
ROUTE1031.fromNode = "Jump_vl5Yaw";
ROUTE1031.toField = "set_rotation";
ROUTE1031.toNode = "boxman_vl5";
browser.currentScene.children[433] = ROUTE1031;

ROUTE1032 = browser.currentScene.createNode("ROUTE");
ROUTE1032.fromField = "fraction_changed";
ROUTE1032.fromNode = "KickTimer";
ROUTE1032.toField = "set_fraction";
ROUTE1032.toNode = "Kick_l_sternoclavicularRoll";
browser.currentScene.children[434] = ROUTE1032;

ROUTE1033 = browser.currentScene.createNode("ROUTE");
ROUTE1033.fromField = "fraction_changed";
ROUTE1033.fromNode = "KickTimer";
ROUTE1033.toField = "set_fraction";
ROUTE1033.toNode = "Kick_l_acromioclavicularRoll";
browser.currentScene.children[435] = ROUTE1033;

ROUTE1034 = browser.currentScene.createNode("ROUTE");
ROUTE1034.fromField = "fraction_changed";
ROUTE1034.fromNode = "KickTimer";
ROUTE1034.toField = "set_fraction";
ROUTE1034.toNode = "Kick_l_shoulderRoll";
browser.currentScene.children[436] = ROUTE1034;

ROUTE1035 = browser.currentScene.createNode("ROUTE");
ROUTE1035.fromField = "fraction_changed";
ROUTE1035.fromNode = "KickTimer";
ROUTE1035.toField = "set_fraction";
ROUTE1035.toNode = "Kick_l_ForeArmPitch";
browser.currentScene.children[437] = ROUTE1035;

ROUTE1036 = browser.currentScene.createNode("ROUTE");
ROUTE1036.fromField = "fraction_changed";
ROUTE1036.fromNode = "KickTimer";
ROUTE1036.toField = "set_fraction";
ROUTE1036.toNode = "Kick_l_wristRoll";
browser.currentScene.children[438] = ROUTE1036;

ROUTE1037 = browser.currentScene.createNode("ROUTE");
ROUTE1037.fromField = "fraction_changed";
ROUTE1037.fromNode = "KickTimer";
ROUTE1037.toField = "set_fraction";
ROUTE1037.toNode = "Kick_l_thumb1Pitch";
browser.currentScene.children[439] = ROUTE1037;

ROUTE1038 = browser.currentScene.createNode("ROUTE");
ROUTE1038.fromField = "fraction_changed";
ROUTE1038.fromNode = "KickTimer";
ROUTE1038.toField = "set_fraction";
ROUTE1038.toNode = "Kick_r_sternoclavicularRoll";
browser.currentScene.children[440] = ROUTE1038;

ROUTE1039 = browser.currentScene.createNode("ROUTE");
ROUTE1039.fromField = "fraction_changed";
ROUTE1039.fromNode = "KickTimer";
ROUTE1039.toField = "set_fraction";
ROUTE1039.toNode = "Kick_r_acromioclavicularRoll";
browser.currentScene.children[441] = ROUTE1039;

ROUTE1040 = browser.currentScene.createNode("ROUTE");
ROUTE1040.fromField = "fraction_changed";
ROUTE1040.fromNode = "KickTimer";
ROUTE1040.toField = "set_fraction";
ROUTE1040.toNode = "Kick_r_shoulderRoll";
browser.currentScene.children[442] = ROUTE1040;

ROUTE1041 = browser.currentScene.createNode("ROUTE");
ROUTE1041.fromField = "fraction_changed";
ROUTE1041.fromNode = "KickTimer";
ROUTE1041.toField = "set_fraction";
ROUTE1041.toNode = "Kick_r_ForeArmPitch";
browser.currentScene.children[443] = ROUTE1041;

ROUTE1042 = browser.currentScene.createNode("ROUTE");
ROUTE1042.fromField = "fraction_changed";
ROUTE1042.fromNode = "KickTimer";
ROUTE1042.toField = "set_fraction";
ROUTE1042.toNode = "Kick_r_wristRoll";
browser.currentScene.children[444] = ROUTE1042;

ROUTE1043 = browser.currentScene.createNode("ROUTE");
ROUTE1043.fromField = "fraction_changed";
ROUTE1043.fromNode = "KickTimer";
ROUTE1043.toField = "set_fraction";
ROUTE1043.toNode = "Kick_r_thumb1Pitch";
browser.currentScene.children[445] = ROUTE1043;

ROUTE1044 = browser.currentScene.createNode("ROUTE");
ROUTE1044.fromField = "fraction_changed";
ROUTE1044.fromNode = "KickTimer";
ROUTE1044.toField = "set_fraction";
ROUTE1044.toNode = "Kick_r_hipPitch";
browser.currentScene.children[446] = ROUTE1044;

ROUTE1045 = browser.currentScene.createNode("ROUTE");
ROUTE1045.fromField = "fraction_changed";
ROUTE1045.fromNode = "KickTimer";
ROUTE1045.toField = "set_fraction";
ROUTE1045.toNode = "Kick_r_kneePitch";
browser.currentScene.children[447] = ROUTE1045;

ROUTE1046 = browser.currentScene.createNode("ROUTE");
ROUTE1046.fromField = "fraction_changed";
ROUTE1046.fromNode = "KickTimer";
ROUTE1046.toField = "set_fraction";
ROUTE1046.toNode = "Kick_l_hipPitch";
browser.currentScene.children[448] = ROUTE1046;

ROUTE1047 = browser.currentScene.createNode("ROUTE");
ROUTE1047.fromField = "fraction_changed";
ROUTE1047.fromNode = "KickTimer";
ROUTE1047.toField = "set_fraction";
ROUTE1047.toNode = "Kick_l_kneePitch";
browser.currentScene.children[449] = ROUTE1047;

ROUTE1048 = browser.currentScene.createNode("ROUTE");
ROUTE1048.fromField = "fraction_changed";
ROUTE1048.fromNode = "KickTimer";
ROUTE1048.toField = "set_fraction";
ROUTE1048.toNode = "Kick_r_anklePitch";
browser.currentScene.children[450] = ROUTE1048;

ROUTE1049 = browser.currentScene.createNode("ROUTE");
ROUTE1049.fromField = "fraction_changed";
ROUTE1049.fromNode = "KickTimer";
ROUTE1049.toField = "set_fraction";
ROUTE1049.toNode = "Kick_r_metatarsalPitch";
browser.currentScene.children[451] = ROUTE1049;

ROUTE1050 = browser.currentScene.createNode("ROUTE");
ROUTE1050.fromField = "fraction_changed";
ROUTE1050.fromNode = "KickTimer";
ROUTE1050.toField = "set_fraction";
ROUTE1050.toNode = "Kick_sacroiliacYaw";
browser.currentScene.children[452] = ROUTE1050;

ROUTE1051 = browser.currentScene.createNode("ROUTE");
ROUTE1051.fromField = "fraction_changed";
ROUTE1051.fromNode = "KickTimer";
ROUTE1051.toField = "set_fraction";
ROUTE1051.toNode = "Kick_vl5Yaw";
browser.currentScene.children[453] = ROUTE1051;

ROUTE1052 = browser.currentScene.createNode("ROUTE");
ROUTE1052.fromField = "fraction_changed";
ROUTE1052.fromNode = "KickTimer";
ROUTE1052.toField = "set_fraction";
ROUTE1052.toNode = "Kick_vc6Yaw";
browser.currentScene.children[454] = ROUTE1052;

ROUTE1053 = browser.currentScene.createNode("ROUTE");
ROUTE1053.fromField = "fraction_changed";
ROUTE1053.fromNode = "KickTimer";
ROUTE1053.toField = "set_fraction";
ROUTE1053.toNode = "Kick_lower_bodyRotInterp";
browser.currentScene.children[455] = ROUTE1053;

ROUTE1054 = browser.currentScene.createNode("ROUTE");
ROUTE1054.fromField = "fraction_changed";
ROUTE1054.fromNode = "KickTimer";
ROUTE1054.toField = "set_fraction";
ROUTE1054.toNode = "Kick_upper_bodyRotInterp";
browser.currentScene.children[456] = ROUTE1054;

ROUTE1055 = browser.currentScene.createNode("ROUTE");
ROUTE1055.fromField = "fraction_changed";
ROUTE1055.fromNode = "KickTimer";
ROUTE1055.toField = "set_fraction";
ROUTE1055.toNode = "Kick_whole_bodyRotInterp";
browser.currentScene.children[457] = ROUTE1055;

ROUTE1056 = browser.currentScene.createNode("ROUTE");
ROUTE1056.fromField = "fraction_changed";
ROUTE1056.fromNode = "KickTimer";
ROUTE1056.toField = "set_fraction";
ROUTE1056.toNode = "Kick_whole_bodyTransInterp";
browser.currentScene.children[458] = ROUTE1056;

ROUTE1057 = browser.currentScene.createNode("ROUTE");
ROUTE1057.fromField = "fraction_changed";
ROUTE1057.fromNode = "KickTimer";
ROUTE1057.toField = "set_fraction";
ROUTE1057.toNode = "Kick_neckRotInterp";
browser.currentScene.children[459] = ROUTE1057;

ROUTE1058 = browser.currentScene.createNode("ROUTE");
ROUTE1058.fromField = "value_changed";
ROUTE1058.fromNode = "Kick_l_shoulderRoll";
ROUTE1058.toField = "set_rotation";
ROUTE1058.toNode = "boxman_l_shoulder";
browser.currentScene.children[460] = ROUTE1058;

ROUTE1059 = browser.currentScene.createNode("ROUTE");
ROUTE1059.fromField = "value_changed";
ROUTE1059.fromNode = "Kick_l_ForeArmPitch";
ROUTE1059.toField = "set_rotation";
ROUTE1059.toNode = "boxman_l_elbow";
browser.currentScene.children[461] = ROUTE1059;

ROUTE1060 = browser.currentScene.createNode("ROUTE");
ROUTE1060.fromField = "value_changed";
ROUTE1060.fromNode = "Kick_l_wristRoll";
ROUTE1060.toField = "set_rotation";
ROUTE1060.toNode = "boxman_l_wrist";
browser.currentScene.children[462] = ROUTE1060;

ROUTE1061 = browser.currentScene.createNode("ROUTE");
ROUTE1061.fromField = "value_changed";
ROUTE1061.fromNode = "Kick_r_shoulderRoll";
ROUTE1061.toField = "set_rotation";
ROUTE1061.toNode = "boxman_r_shoulder";
browser.currentScene.children[463] = ROUTE1061;

ROUTE1062 = browser.currentScene.createNode("ROUTE");
ROUTE1062.fromField = "value_changed";
ROUTE1062.fromNode = "Kick_r_ForeArmPitch";
ROUTE1062.toField = "set_rotation";
ROUTE1062.toNode = "boxman_r_elbow";
browser.currentScene.children[464] = ROUTE1062;

ROUTE1063 = browser.currentScene.createNode("ROUTE");
ROUTE1063.fromField = "value_changed";
ROUTE1063.fromNode = "Kick_r_wristRoll";
ROUTE1063.toField = "set_rotation";
ROUTE1063.toNode = "boxman_r_wrist";
browser.currentScene.children[465] = ROUTE1063;

ROUTE1064 = browser.currentScene.createNode("ROUTE");
ROUTE1064.fromField = "value_changed";
ROUTE1064.fromNode = "Kick_r_hipPitch";
ROUTE1064.toField = "set_rotation";
ROUTE1064.toNode = "boxman_r_hip";
browser.currentScene.children[466] = ROUTE1064;

ROUTE1065 = browser.currentScene.createNode("ROUTE");
ROUTE1065.fromField = "value_changed";
ROUTE1065.fromNode = "Kick_r_kneePitch";
ROUTE1065.toField = "set_rotation";
ROUTE1065.toNode = "boxman_r_knee";
browser.currentScene.children[467] = ROUTE1065;

ROUTE1066 = browser.currentScene.createNode("ROUTE");
ROUTE1066.fromField = "value_changed";
ROUTE1066.fromNode = "Kick_r_anklePitch";
ROUTE1066.toField = "set_rotation";
ROUTE1066.toNode = "boxman_r_ankle";
browser.currentScene.children[468] = ROUTE1066;

ROUTE1067 = browser.currentScene.createNode("ROUTE");
ROUTE1067.fromField = "value_changed";
ROUTE1067.fromNode = "Kick_l_hipPitch";
ROUTE1067.toField = "set_rotation";
ROUTE1067.toNode = "boxman_l_hip";
browser.currentScene.children[469] = ROUTE1067;

ROUTE1068 = browser.currentScene.createNode("ROUTE");
ROUTE1068.fromField = "value_changed";
ROUTE1068.fromNode = "Kick_l_kneePitch";
ROUTE1068.toField = "set_rotation";
ROUTE1068.toNode = "boxman_l_knee";
browser.currentScene.children[470] = ROUTE1068;

ROUTE1069 = browser.currentScene.createNode("ROUTE");
ROUTE1069.fromField = "value_changed";
ROUTE1069.fromNode = "Kick_r_anklePitch";
ROUTE1069.toField = "set_rotation";
ROUTE1069.toNode = "boxman_l_ankle";
browser.currentScene.children[471] = ROUTE1069;

ROUTE1070 = browser.currentScene.createNode("ROUTE");
ROUTE1070.fromField = "value_changed";
ROUTE1070.fromNode = "Kick_vl5Yaw";
ROUTE1070.toField = "set_rotation";
ROUTE1070.toNode = "boxman_vl5";
browser.currentScene.children[472] = ROUTE1070;

ROUTE1071 = browser.currentScene.createNode("ROUTE");
ROUTE1071.fromField = "value_changed";
ROUTE1071.fromNode = "Kick_whole_bodyRotInterp";
ROUTE1071.toField = "set_rotation";
ROUTE1071.toNode = "boxman_HumanoidRoot";
browser.currentScene.children[473] = ROUTE1071;

ROUTE1072 = browser.currentScene.createNode("ROUTE");
ROUTE1072.fromField = "value_changed";
ROUTE1072.fromNode = "Kick_whole_bodyTransInterp";
ROUTE1072.toField = "set_translation";
ROUTE1072.toNode = "boxman_HumanoidRoot";
browser.currentScene.children[474] = ROUTE1072;

ROUTE1073 = browser.currentScene.createNode("ROUTE");
ROUTE1073.fromField = "position_changed";
ROUTE1073.fromNode = "HudProx";
ROUTE1073.toField = "set_translation";
ROUTE1073.toNode = "HudXform";
browser.currentScene.children[475] = ROUTE1073;

ROUTE1074 = browser.currentScene.createNode("ROUTE");
ROUTE1074.fromField = "orientation_changed";
ROUTE1074.fromNode = "HudProx";
ROUTE1074.toField = "set_rotation";
ROUTE1074.toNode = "HudXform";
browser.currentScene.children[476] = ROUTE1074;

ROUTE1075 = browser.currentScene.createNode("ROUTE");
ROUTE1075.fromField = "touchTime";
ROUTE1075.fromNode = "Stand_Touch";
ROUTE1075.toField = "set_stopTime";
ROUTE1075.toNode = "PitchTimer";
browser.currentScene.children[477] = ROUTE1075;

ROUTE1076 = browser.currentScene.createNode("ROUTE");
ROUTE1076.fromField = "touchTime";
ROUTE1076.fromNode = "Stand_Touch";
ROUTE1076.toField = "set_stopTime";
ROUTE1076.toNode = "YawTimer";
browser.currentScene.children[478] = ROUTE1076;

ROUTE1077 = browser.currentScene.createNode("ROUTE");
ROUTE1077.fromField = "touchTime";
ROUTE1077.fromNode = "Stand_Touch";
ROUTE1077.toField = "set_stopTime";
ROUTE1077.toNode = "RollTimer";
browser.currentScene.children[479] = ROUTE1077;

ROUTE1078 = browser.currentScene.createNode("ROUTE");
ROUTE1078.fromField = "touchTime";
ROUTE1078.fromNode = "Stand_Touch";
ROUTE1078.toField = "set_stopTime";
ROUTE1078.toNode = "WalkTimer";
browser.currentScene.children[480] = ROUTE1078;

ROUTE1079 = browser.currentScene.createNode("ROUTE");
ROUTE1079.fromField = "touchTime";
ROUTE1079.fromNode = "Stand_Touch";
ROUTE1079.toField = "set_stopTime";
ROUTE1079.toNode = "RunTimer";
browser.currentScene.children[481] = ROUTE1079;

ROUTE1080 = browser.currentScene.createNode("ROUTE");
ROUTE1080.fromField = "touchTime";
ROUTE1080.fromNode = "Stand_Touch";
ROUTE1080.toField = "set_stopTime";
ROUTE1080.toNode = "JumpTimer";
browser.currentScene.children[482] = ROUTE1080;

ROUTE1081 = browser.currentScene.createNode("ROUTE");
ROUTE1081.fromField = "touchTime";
ROUTE1081.fromNode = "Stand_Touch";
ROUTE1081.toField = "set_stopTime";
ROUTE1081.toNode = "KickTimer";
browser.currentScene.children[483] = ROUTE1081;

ROUTE1082 = browser.currentScene.createNode("ROUTE");
ROUTE1082.fromField = "touchTime";
ROUTE1082.fromNode = "Stand_Touch";
ROUTE1082.toField = "set_stopTime";
ROUTE1082.toNode = "StopTimer";
browser.currentScene.children[484] = ROUTE1082;

ROUTE1083 = browser.currentScene.createNode("ROUTE");
ROUTE1083.fromField = "touchTime";
ROUTE1083.fromNode = "Stand_Touch";
ROUTE1083.toField = "set_startTime";
ROUTE1083.toNode = "StandTimer";
browser.currentScene.children[485] = ROUTE1083;

ROUTE1084 = browser.currentScene.createNode("ROUTE");
ROUTE1084.fromField = "touchTime";
ROUTE1084.fromNode = "Pitch_Touch";
ROUTE1084.toField = "set_stopTime";
ROUTE1084.toNode = "StandTimer";
browser.currentScene.children[486] = ROUTE1084;

ROUTE1085 = browser.currentScene.createNode("ROUTE");
ROUTE1085.fromField = "touchTime";
ROUTE1085.fromNode = "Pitch_Touch";
ROUTE1085.toField = "set_stopTime";
ROUTE1085.toNode = "YawTimer";
browser.currentScene.children[487] = ROUTE1085;

ROUTE1086 = browser.currentScene.createNode("ROUTE");
ROUTE1086.fromField = "touchTime";
ROUTE1086.fromNode = "Pitch_Touch";
ROUTE1086.toField = "set_stopTime";
ROUTE1086.toNode = "RollTimer";
browser.currentScene.children[488] = ROUTE1086;

ROUTE1087 = browser.currentScene.createNode("ROUTE");
ROUTE1087.fromField = "touchTime";
ROUTE1087.fromNode = "Pitch_Touch";
ROUTE1087.toField = "set_stopTime";
ROUTE1087.toNode = "WalkTimer";
browser.currentScene.children[489] = ROUTE1087;

ROUTE1088 = browser.currentScene.createNode("ROUTE");
ROUTE1088.fromField = "touchTime";
ROUTE1088.fromNode = "Pitch_Touch";
ROUTE1088.toField = "set_stopTime";
ROUTE1088.toNode = "RunTimer";
browser.currentScene.children[490] = ROUTE1088;

ROUTE1089 = browser.currentScene.createNode("ROUTE");
ROUTE1089.fromField = "touchTime";
ROUTE1089.fromNode = "Pitch_Touch";
ROUTE1089.toField = "set_stopTime";
ROUTE1089.toNode = "JumpTimer";
browser.currentScene.children[491] = ROUTE1089;

ROUTE1090 = browser.currentScene.createNode("ROUTE");
ROUTE1090.fromField = "touchTime";
ROUTE1090.fromNode = "Pitch_Touch";
ROUTE1090.toField = "set_stopTime";
ROUTE1090.toNode = "KickTimer";
browser.currentScene.children[492] = ROUTE1090;

ROUTE1091 = browser.currentScene.createNode("ROUTE");
ROUTE1091.fromField = "touchTime";
ROUTE1091.fromNode = "Pitch_Touch";
ROUTE1091.toField = "set_stopTime";
ROUTE1091.toNode = "StopTimer";
browser.currentScene.children[493] = ROUTE1091;

ROUTE1092 = browser.currentScene.createNode("ROUTE");
ROUTE1092.fromField = "touchTime";
ROUTE1092.fromNode = "Pitch_Touch";
ROUTE1092.toField = "set_startTime";
ROUTE1092.toNode = "PitchTimer";
browser.currentScene.children[494] = ROUTE1092;

ROUTE1093 = browser.currentScene.createNode("ROUTE");
ROUTE1093.fromField = "touchTime";
ROUTE1093.fromNode = "Yaw_Touch";
ROUTE1093.toField = "set_stopTime";
ROUTE1093.toNode = "StandTimer";
browser.currentScene.children[495] = ROUTE1093;

ROUTE1094 = browser.currentScene.createNode("ROUTE");
ROUTE1094.fromField = "touchTime";
ROUTE1094.fromNode = "Yaw_Touch";
ROUTE1094.toField = "set_stopTime";
ROUTE1094.toNode = "PitchTimer";
browser.currentScene.children[496] = ROUTE1094;

ROUTE1095 = browser.currentScene.createNode("ROUTE");
ROUTE1095.fromField = "touchTime";
ROUTE1095.fromNode = "Yaw_Touch";
ROUTE1095.toField = "set_stopTime";
ROUTE1095.toNode = "RollTimer";
browser.currentScene.children[497] = ROUTE1095;

ROUTE1096 = browser.currentScene.createNode("ROUTE");
ROUTE1096.fromField = "touchTime";
ROUTE1096.fromNode = "Yaw_Touch";
ROUTE1096.toField = "set_stopTime";
ROUTE1096.toNode = "WalkTimer";
browser.currentScene.children[498] = ROUTE1096;

ROUTE1097 = browser.currentScene.createNode("ROUTE");
ROUTE1097.fromField = "touchTime";
ROUTE1097.fromNode = "Yaw_Touch";
ROUTE1097.toField = "set_stopTime";
ROUTE1097.toNode = "RunTimer";
browser.currentScene.children[499] = ROUTE1097;

ROUTE1098 = browser.currentScene.createNode("ROUTE");
ROUTE1098.fromField = "touchTime";
ROUTE1098.fromNode = "Yaw_Touch";
ROUTE1098.toField = "set_stopTime";
ROUTE1098.toNode = "JumpTimer";
browser.currentScene.children[500] = ROUTE1098;

ROUTE1099 = browser.currentScene.createNode("ROUTE");
ROUTE1099.fromField = "touchTime";
ROUTE1099.fromNode = "Yaw_Touch";
ROUTE1099.toField = "set_stopTime";
ROUTE1099.toNode = "KickTimer";
browser.currentScene.children[501] = ROUTE1099;

ROUTE1100 = browser.currentScene.createNode("ROUTE");
ROUTE1100.fromField = "touchTime";
ROUTE1100.fromNode = "Yaw_Touch";
ROUTE1100.toField = "set_stopTime";
ROUTE1100.toNode = "StopTimer";
browser.currentScene.children[502] = ROUTE1100;

ROUTE1101 = browser.currentScene.createNode("ROUTE");
ROUTE1101.fromField = "touchTime";
ROUTE1101.fromNode = "Yaw_Touch";
ROUTE1101.toField = "set_startTime";
ROUTE1101.toNode = "YawTimer";
browser.currentScene.children[503] = ROUTE1101;

ROUTE1102 = browser.currentScene.createNode("ROUTE");
ROUTE1102.fromField = "touchTime";
ROUTE1102.fromNode = "Walk_Touch";
ROUTE1102.toField = "set_stopTime";
ROUTE1102.toNode = "StandTimer";
browser.currentScene.children[504] = ROUTE1102;

ROUTE1103 = browser.currentScene.createNode("ROUTE");
ROUTE1103.fromField = "touchTime";
ROUTE1103.fromNode = "Walk_Touch";
ROUTE1103.toField = "set_stopTime";
ROUTE1103.toNode = "PitchTimer";
browser.currentScene.children[505] = ROUTE1103;

ROUTE1104 = browser.currentScene.createNode("ROUTE");
ROUTE1104.fromField = "touchTime";
ROUTE1104.fromNode = "Walk_Touch";
ROUTE1104.toField = "set_stopTime";
ROUTE1104.toNode = "YawTimer";
browser.currentScene.children[506] = ROUTE1104;

ROUTE1105 = browser.currentScene.createNode("ROUTE");
ROUTE1105.fromField = "touchTime";
ROUTE1105.fromNode = "Walk_Touch";
ROUTE1105.toField = "set_stopTime";
ROUTE1105.toNode = "RollTimer";
browser.currentScene.children[507] = ROUTE1105;

ROUTE1106 = browser.currentScene.createNode("ROUTE");
ROUTE1106.fromField = "touchTime";
ROUTE1106.fromNode = "Walk_Touch";
ROUTE1106.toField = "set_stopTime";
ROUTE1106.toNode = "RunTimer";
browser.currentScene.children[508] = ROUTE1106;

ROUTE1107 = browser.currentScene.createNode("ROUTE");
ROUTE1107.fromField = "touchTime";
ROUTE1107.fromNode = "Walk_Touch";
ROUTE1107.toField = "set_stopTime";
ROUTE1107.toNode = "JumpTimer";
browser.currentScene.children[509] = ROUTE1107;

ROUTE1108 = browser.currentScene.createNode("ROUTE");
ROUTE1108.fromField = "touchTime";
ROUTE1108.fromNode = "Walk_Touch";
ROUTE1108.toField = "set_stopTime";
ROUTE1108.toNode = "KickTimer";
browser.currentScene.children[510] = ROUTE1108;

ROUTE1109 = browser.currentScene.createNode("ROUTE");
ROUTE1109.fromField = "touchTime";
ROUTE1109.fromNode = "Walk_Touch";
ROUTE1109.toField = "set_stopTime";
ROUTE1109.toNode = "StopTimer";
browser.currentScene.children[511] = ROUTE1109;

ROUTE1110 = browser.currentScene.createNode("ROUTE");
ROUTE1110.fromField = "touchTime";
ROUTE1110.fromNode = "Walk_Touch";
ROUTE1110.toField = "set_startTime";
ROUTE1110.toNode = "WalkTimer";
browser.currentScene.children[512] = ROUTE1110;

ROUTE1111 = browser.currentScene.createNode("ROUTE");
ROUTE1111.fromField = "touchTime";
ROUTE1111.fromNode = "Roll_Touch";
ROUTE1111.toField = "set_stopTime";
ROUTE1111.toNode = "StandTimer";
browser.currentScene.children[513] = ROUTE1111;

ROUTE1112 = browser.currentScene.createNode("ROUTE");
ROUTE1112.fromField = "touchTime";
ROUTE1112.fromNode = "Roll_Touch";
ROUTE1112.toField = "set_stopTime";
ROUTE1112.toNode = "PitchTimer";
browser.currentScene.children[514] = ROUTE1112;

ROUTE1113 = browser.currentScene.createNode("ROUTE");
ROUTE1113.fromField = "touchTime";
ROUTE1113.fromNode = "Roll_Touch";
ROUTE1113.toField = "set_stopTime";
ROUTE1113.toNode = "YawTimer";
browser.currentScene.children[515] = ROUTE1113;

ROUTE1114 = browser.currentScene.createNode("ROUTE");
ROUTE1114.fromField = "touchTime";
ROUTE1114.fromNode = "Roll_Touch";
ROUTE1114.toField = "set_stopTime";
ROUTE1114.toNode = "WalkTimer";
browser.currentScene.children[516] = ROUTE1114;

ROUTE1115 = browser.currentScene.createNode("ROUTE");
ROUTE1115.fromField = "touchTime";
ROUTE1115.fromNode = "Roll_Touch";
ROUTE1115.toField = "set_stopTime";
ROUTE1115.toNode = "RunTimer";
browser.currentScene.children[517] = ROUTE1115;

ROUTE1116 = browser.currentScene.createNode("ROUTE");
ROUTE1116.fromField = "touchTime";
ROUTE1116.fromNode = "Roll_Touch";
ROUTE1116.toField = "set_stopTime";
ROUTE1116.toNode = "JumpTimer";
browser.currentScene.children[518] = ROUTE1116;

ROUTE1117 = browser.currentScene.createNode("ROUTE");
ROUTE1117.fromField = "touchTime";
ROUTE1117.fromNode = "Roll_Touch";
ROUTE1117.toField = "set_stopTime";
ROUTE1117.toNode = "KickTimer";
browser.currentScene.children[519] = ROUTE1117;

ROUTE1118 = browser.currentScene.createNode("ROUTE");
ROUTE1118.fromField = "touchTime";
ROUTE1118.fromNode = "Roll_Touch";
ROUTE1118.toField = "set_stopTime";
ROUTE1118.toNode = "StopTimer";
browser.currentScene.children[520] = ROUTE1118;

ROUTE1119 = browser.currentScene.createNode("ROUTE");
ROUTE1119.fromField = "touchTime";
ROUTE1119.fromNode = "Roll_Touch";
ROUTE1119.toField = "set_startTime";
ROUTE1119.toNode = "RollTimer";
browser.currentScene.children[521] = ROUTE1119;

ROUTE1120 = browser.currentScene.createNode("ROUTE");
ROUTE1120.fromField = "touchTime";
ROUTE1120.fromNode = "Run_Touch";
ROUTE1120.toField = "set_stopTime";
ROUTE1120.toNode = "StandTimer";
browser.currentScene.children[522] = ROUTE1120;

ROUTE1121 = browser.currentScene.createNode("ROUTE");
ROUTE1121.fromField = "touchTime";
ROUTE1121.fromNode = "Run_Touch";
ROUTE1121.toField = "set_stopTime";
ROUTE1121.toNode = "PitchTimer";
browser.currentScene.children[523] = ROUTE1121;

ROUTE1122 = browser.currentScene.createNode("ROUTE");
ROUTE1122.fromField = "touchTime";
ROUTE1122.fromNode = "Run_Touch";
ROUTE1122.toField = "set_stopTime";
ROUTE1122.toNode = "YawTimer";
browser.currentScene.children[524] = ROUTE1122;

ROUTE1123 = browser.currentScene.createNode("ROUTE");
ROUTE1123.fromField = "touchTime";
ROUTE1123.fromNode = "Run_Touch";
ROUTE1123.toField = "set_stopTime";
ROUTE1123.toNode = "RollTimer";
browser.currentScene.children[525] = ROUTE1123;

ROUTE1124 = browser.currentScene.createNode("ROUTE");
ROUTE1124.fromField = "touchTime";
ROUTE1124.fromNode = "Run_Touch";
ROUTE1124.toField = "set_stopTime";
ROUTE1124.toNode = "WalkTimer";
browser.currentScene.children[526] = ROUTE1124;

ROUTE1125 = browser.currentScene.createNode("ROUTE");
ROUTE1125.fromField = "touchTime";
ROUTE1125.fromNode = "Run_Touch";
ROUTE1125.toField = "set_stopTime";
ROUTE1125.toNode = "JumpTimer";
browser.currentScene.children[527] = ROUTE1125;

ROUTE1126 = browser.currentScene.createNode("ROUTE");
ROUTE1126.fromField = "touchTime";
ROUTE1126.fromNode = "Run_Touch";
ROUTE1126.toField = "set_stopTime";
ROUTE1126.toNode = "KickTimer";
browser.currentScene.children[528] = ROUTE1126;

ROUTE1127 = browser.currentScene.createNode("ROUTE");
ROUTE1127.fromField = "touchTime";
ROUTE1127.fromNode = "Run_Touch";
ROUTE1127.toField = "set_stopTime";
ROUTE1127.toNode = "StopTimer";
browser.currentScene.children[529] = ROUTE1127;

ROUTE1128 = browser.currentScene.createNode("ROUTE");
ROUTE1128.fromField = "touchTime";
ROUTE1128.fromNode = "Run_Touch";
ROUTE1128.toField = "set_startTime";
ROUTE1128.toNode = "RunTimer";
browser.currentScene.children[530] = ROUTE1128;

ROUTE1129 = browser.currentScene.createNode("ROUTE");
ROUTE1129.fromField = "touchTime";
ROUTE1129.fromNode = "Jump_Touch";
ROUTE1129.toField = "set_stopTime";
ROUTE1129.toNode = "StandTimer";
browser.currentScene.children[531] = ROUTE1129;

ROUTE1130 = browser.currentScene.createNode("ROUTE");
ROUTE1130.fromField = "touchTime";
ROUTE1130.fromNode = "Jump_Touch";
ROUTE1130.toField = "set_stopTime";
ROUTE1130.toNode = "PitchTimer";
browser.currentScene.children[532] = ROUTE1130;

ROUTE1131 = browser.currentScene.createNode("ROUTE");
ROUTE1131.fromField = "touchTime";
ROUTE1131.fromNode = "Jump_Touch";
ROUTE1131.toField = "set_stopTime";
ROUTE1131.toNode = "YawTimer";
browser.currentScene.children[533] = ROUTE1131;

ROUTE1132 = browser.currentScene.createNode("ROUTE");
ROUTE1132.fromField = "touchTime";
ROUTE1132.fromNode = "Jump_Touch";
ROUTE1132.toField = "set_stopTime";
ROUTE1132.toNode = "RollTimer";
browser.currentScene.children[534] = ROUTE1132;

ROUTE1133 = browser.currentScene.createNode("ROUTE");
ROUTE1133.fromField = "touchTime";
ROUTE1133.fromNode = "Jump_Touch";
ROUTE1133.toField = "set_stopTime";
ROUTE1133.toNode = "WalkTimer";
browser.currentScene.children[535] = ROUTE1133;

ROUTE1134 = browser.currentScene.createNode("ROUTE");
ROUTE1134.fromField = "touchTime";
ROUTE1134.fromNode = "Jump_Touch";
ROUTE1134.toField = "set_stopTime";
ROUTE1134.toNode = "RunTimer";
browser.currentScene.children[536] = ROUTE1134;

ROUTE1135 = browser.currentScene.createNode("ROUTE");
ROUTE1135.fromField = "touchTime";
ROUTE1135.fromNode = "Jump_Touch";
ROUTE1135.toField = "set_stopTime";
ROUTE1135.toNode = "KickTimer";
browser.currentScene.children[537] = ROUTE1135;

ROUTE1136 = browser.currentScene.createNode("ROUTE");
ROUTE1136.fromField = "touchTime";
ROUTE1136.fromNode = "Jump_Touch";
ROUTE1136.toField = "set_stopTime";
ROUTE1136.toNode = "StopTimer";
browser.currentScene.children[538] = ROUTE1136;

ROUTE1137 = browser.currentScene.createNode("ROUTE");
ROUTE1137.fromField = "touchTime";
ROUTE1137.fromNode = "Jump_Touch";
ROUTE1137.toField = "set_startTime";
ROUTE1137.toNode = "JumpTimer";
browser.currentScene.children[539] = ROUTE1137;

ROUTE1138 = browser.currentScene.createNode("ROUTE");
ROUTE1138.fromField = "touchTime";
ROUTE1138.fromNode = "Kick_Touch";
ROUTE1138.toField = "set_stopTime";
ROUTE1138.toNode = "StandTimer";
browser.currentScene.children[540] = ROUTE1138;

ROUTE1139 = browser.currentScene.createNode("ROUTE");
ROUTE1139.fromField = "touchTime";
ROUTE1139.fromNode = "Kick_Touch";
ROUTE1139.toField = "set_stopTime";
ROUTE1139.toNode = "PitchTimer";
browser.currentScene.children[541] = ROUTE1139;

ROUTE1140 = browser.currentScene.createNode("ROUTE");
ROUTE1140.fromField = "touchTime";
ROUTE1140.fromNode = "Kick_Touch";
ROUTE1140.toField = "set_stopTime";
ROUTE1140.toNode = "YawTimer";
browser.currentScene.children[542] = ROUTE1140;

ROUTE1141 = browser.currentScene.createNode("ROUTE");
ROUTE1141.fromField = "touchTime";
ROUTE1141.fromNode = "Kick_Touch";
ROUTE1141.toField = "set_stopTime";
ROUTE1141.toNode = "RollTimer";
browser.currentScene.children[543] = ROUTE1141;

ROUTE1142 = browser.currentScene.createNode("ROUTE");
ROUTE1142.fromField = "touchTime";
ROUTE1142.fromNode = "Kick_Touch";
ROUTE1142.toField = "set_stopTime";
ROUTE1142.toNode = "WalkTimer";
browser.currentScene.children[544] = ROUTE1142;

ROUTE1143 = browser.currentScene.createNode("ROUTE");
ROUTE1143.fromField = "touchTime";
ROUTE1143.fromNode = "Kick_Touch";
ROUTE1143.toField = "set_stopTime";
ROUTE1143.toNode = "RunTimer";
browser.currentScene.children[545] = ROUTE1143;

ROUTE1144 = browser.currentScene.createNode("ROUTE");
ROUTE1144.fromField = "touchTime";
ROUTE1144.fromNode = "Kick_Touch";
ROUTE1144.toField = "set_stopTime";
ROUTE1144.toNode = "JumpTimer";
browser.currentScene.children[546] = ROUTE1144;

ROUTE1145 = browser.currentScene.createNode("ROUTE");
ROUTE1145.fromField = "touchTime";
ROUTE1145.fromNode = "Kick_Touch";
ROUTE1145.toField = "set_stopTime";
ROUTE1145.toNode = "StopTimer";
browser.currentScene.children[547] = ROUTE1145;

ROUTE1146 = browser.currentScene.createNode("ROUTE");
ROUTE1146.fromField = "touchTime";
ROUTE1146.fromNode = "Kick_Touch";
ROUTE1146.toField = "set_startTime";
ROUTE1146.toNode = "KickTimer";
browser.currentScene.children[548] = ROUTE1146;

ROUTE1147 = browser.currentScene.createNode("ROUTE");
ROUTE1147.fromField = "touchTime";
ROUTE1147.fromNode = "Stop_Touch";
ROUTE1147.toField = "set_stopTime";
ROUTE1147.toNode = "StandTimer";
browser.currentScene.children[549] = ROUTE1147;

ROUTE1148 = browser.currentScene.createNode("ROUTE");
ROUTE1148.fromField = "touchTime";
ROUTE1148.fromNode = "Stop_Touch";
ROUTE1148.toField = "set_stopTime";
ROUTE1148.toNode = "PitchTimer";
browser.currentScene.children[550] = ROUTE1148;

ROUTE1149 = browser.currentScene.createNode("ROUTE");
ROUTE1149.fromField = "touchTime";
ROUTE1149.fromNode = "Stop_Touch";
ROUTE1149.toField = "set_stopTime";
ROUTE1149.toNode = "YawTimer";
browser.currentScene.children[551] = ROUTE1149;

ROUTE1150 = browser.currentScene.createNode("ROUTE");
ROUTE1150.fromField = "touchTime";
ROUTE1150.fromNode = "Stop_Touch";
ROUTE1150.toField = "set_stopTime";
ROUTE1150.toNode = "RollTimer";
browser.currentScene.children[552] = ROUTE1150;

ROUTE1151 = browser.currentScene.createNode("ROUTE");
ROUTE1151.fromField = "touchTime";
ROUTE1151.fromNode = "Stop_Touch";
ROUTE1151.toField = "set_stopTime";
ROUTE1151.toNode = "WalkTimer";
browser.currentScene.children[553] = ROUTE1151;

ROUTE1152 = browser.currentScene.createNode("ROUTE");
ROUTE1152.fromField = "touchTime";
ROUTE1152.fromNode = "Stop_Touch";
ROUTE1152.toField = "set_stopTime";
ROUTE1152.toNode = "RunTimer";
browser.currentScene.children[554] = ROUTE1152;

ROUTE1153 = browser.currentScene.createNode("ROUTE");
ROUTE1153.fromField = "touchTime";
ROUTE1153.fromNode = "Stop_Touch";
ROUTE1153.toField = "set_stopTime";
ROUTE1153.toNode = "JumpTimer";
browser.currentScene.children[555] = ROUTE1153;

ROUTE1154 = browser.currentScene.createNode("ROUTE");
ROUTE1154.fromField = "touchTime";
ROUTE1154.fromNode = "Stop_Touch";
ROUTE1154.toField = "set_stopTime";
ROUTE1154.toNode = "KickTimer";
browser.currentScene.children[556] = ROUTE1154;

ROUTE1155 = browser.currentScene.createNode("ROUTE");
ROUTE1155.fromField = "touchTime";
ROUTE1155.fromNode = "Stop_Touch";
ROUTE1155.toField = "set_startTime";
ROUTE1155.toNode = "StopTimer";
browser.currentScene.children[557] = ROUTE1155;

