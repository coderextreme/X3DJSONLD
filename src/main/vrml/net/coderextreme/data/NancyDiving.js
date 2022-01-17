let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let component2 = browser.currentScene.createNode("component");
component2.name = "H-Anim";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "title";
meta3.content = "NancyDiving.x3d";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "description";
meta4.content = "Nancy having fun scuba diving!";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "creator";
meta5.content = "Etsuko Lippi";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "translators";
meta6.content = "Tom Miller and Don Brutzman, NPS";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "created";
meta7.content = "17 December 2001";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "modified";
meta8.content = "4 July 2020";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "hint";
meta9.content = "Default orientation along X axis (vice HAnim required Y axis) since diving posture is typically prone.";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "warning";
meta10.content = "problem with left arm animation";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "warning";
meta11.content = "Viewpoint nodes need to be made child nodes under HAnimHumanoid with containerField='viewpoints'.";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "identifier";
meta12.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/NancyDiving.x3d";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "generator";
meta13.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "license";
meta14.content = "../license.html";
head1.meta[12] = meta14;

head = head1;

let Background16 = browser.currentScene.createNode("Background");
Background16.groundColor = new MFColor(new float[0,0.4,1]);
Background16.skyColor = new MFColor(new float[0,0.4,1]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Background16;

let Viewpoint17 = browser.currentScene.createNode("Viewpoint");
Viewpoint17.DEF = "DefaultViewpoint";
Viewpoint17.description = "Nancy diving, view from right side";
Viewpoint17.position = new SFVec3f(new float[0,0,3]);
browser.currentScene.children[1] = Viewpoint17;

let Group18 = browser.currentScene.createNode("Group");
Group18.DEF = "HighResolution";
let Transform19 = browser.currentScene.createNode("Transform");
Transform19.rotation = new SFRotation(new float[1,0,0,1.57]);
let Transform20 = browser.currentScene.createNode("Transform");
Transform20.rotation = new SFRotation(new float[0,0,1,-1.57]);
let Group21 = browser.currentScene.createNode("Group");
Group21.DEF = "Viewpoints";
let Viewpoint22 = browser.currentScene.createNode("Viewpoint");
Viewpoint22.description = "Nancy diving, view from below";
Viewpoint22.position = new SFVec3f(new float[0,0,4]);
Group21.children = new MFNode();

Group21.children[0] = Viewpoint22;

let Viewpoint23 = browser.currentScene.createNode("Viewpoint");
Viewpoint23.description = "Nancy diving, view from ahead";
Viewpoint23.orientation = new SFRotation(new float[1,0,0,-1.57]);
Viewpoint23.position = new SFVec3f(new float[0,3,0]);
Group21.children[1] = Viewpoint23;

let Viewpoint24 = browser.currentScene.createNode("Viewpoint");
Viewpoint24.description = "Nancy diving, view from left side";
Viewpoint24.orientation = new SFRotation(new float[-0.58,0.58,-0.58,2.09]);
Viewpoint24.position = new SFVec3f(new float[3,0,0]);
Group21.children[2] = Viewpoint24;

let Transform25 = browser.currentScene.createNode("Transform");
Transform25.rotation = new SFRotation(new float[1,0,0,1.57]);
Transform25.translation = new SFVec3f(new float[0,-3,-0.8]);
let Viewpoint26 = browser.currentScene.createNode("Viewpoint");
Viewpoint26.description = "Nancy diving view from behind";
Viewpoint26.orientation = new SFRotation(new float[0,0,1,3.14]);
Viewpoint26.position = new SFVec3f(new float[0,0,0]);
Transform25.children = new MFNode();

Transform25.children[0] = Viewpoint26;

Group21.children[3] = Transform25;

let Viewpoint27 = browser.currentScene.createNode("Viewpoint");
Viewpoint27.description = "Nancy diving view from above";
Viewpoint27.orientation = new SFRotation(new float[0,1,0,3.14]);
Viewpoint27.position = new SFVec3f(new float[0,0,-4]);
Group21.children[4] = Viewpoint27;

let Transform28 = browser.currentScene.createNode("Transform");
Transform28.rotation = new SFRotation(new float[1,0,0,1.57]);
Transform28.translation = new SFVec3f(new float[0,0.45,-0.04]);
let Viewpoint29 = browser.currentScene.createNode("Viewpoint");
Viewpoint29.description = "Nancy diving, view through her goggles";
Viewpoint29.orientation = new SFRotation(new float[0,0,1,3.14]);
Viewpoint29.position = new SFVec3f(new float[0,0,0]);
Transform28.children = new MFNode();

Transform28.children[0] = Viewpoint29;

Group21.children[5] = Transform28;

Transform20.children = new MFNode();

Transform20.children[0] = Group21;

let Transform30 = browser.currentScene.createNode("Transform");
Transform30.translation = new SFVec3f(new float[0,-1,0]);
let HAnimHumanoid31 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid31.name = "Nancy";
HAnimHumanoid31.DEF = "hanim_Nancy";
HAnimHumanoid31.version = "1.0";
let HAnimJoint32 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint32.name = "humanoid_root";
HAnimJoint32.DEF = "hanim_humanoid_root";
HAnimJoint32.center = new SFVec3f(new float[-0.00405,0.855,-0.000113]);
HAnimJoint32.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint32.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint33 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint33.name = "sacroiliac";
HAnimJoint33.DEF = "hanim_sacroiliac";
HAnimJoint33.center = new SFVec3f(new float[0,1.01,-0.0204]);
HAnimJoint33.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint33.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment34 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment34.name = "pelvis";
HAnimSegment34.DEF = "hanim_pelvis";
let Shape35 = browser.currentScene.createNode("Shape");
let Appearance36 = browser.currentScene.createNode("Appearance");
let Material37 = browser.currentScene.createNode("Material");
Material37.DEF = "Pants_Color";
Material37.diffuseColor = new SFColor(new float[0,0,0.502]);
Appearance36.material = Material37;

Shape35.appearance = Appearance36;

let IndexedFaceSet38 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet38.coordIndex = new MFInt32(new int[0,1,40,-1,1,2,40,-1,2,3,40,-1,3,4,40,-1,4,5,40,-1,5,4,9,-1,4,3,8,-1,3,2,8,-1,2,1,6,-1,0,7,1,-1,7,6,1,-1,6,8,2,-1,9,4,10,-1,4,8,10,-1,8,6,12,-1,7,0,47,-1,50,5,9,-1,7,47,55,-1,55,13,7,-1,50,9,56,-1,9,10,14,-1,10,11,15,-1,11,12,16,-1,12,13,19,-1,13,55,17,-1,60,17,55,-1,17,19,13,-1,19,16,12,-1,16,15,11,-1,15,18,10,-1,14,56,9,-1,56,14,64,-1,17,60,20,-1,20,19,17,-1,21,64,14,-1,14,22,21,-1,15,16,24,-1,16,19,24,-1,19,20,26,-1,24,23,15,-1,64,21,69,-1,21,22,29,-1,19,26,25,-1,20,63,27,-1,27,26,20,-1,25,24,19,-1,30,29,22,-1,29,28,21,-1,28,69,21,-1,27,34,26,-1,69,28,79,-1,29,30,32,-1,30,23,33,-1,23,24,37,-1,25,26,34,-1,83,27,77,-1,37,33,23,-1,33,32,30,-1,31,79,28,-1,79,31,84,-1,32,33,36,-1,24,25,37,-1,34,27,83,-1,83,38,34,-1,34,37,25,-1,37,36,33,-1,36,35,32,-1,84,31,89,-1,31,35,89,-1,35,36,39,-1,36,37,39,-1,38,83,89,-1,89,39,38,-1,39,89,35,-1,40,41,0,-1,40,42,41,-1,40,43,42,-1,40,44,43,-1,40,45,44,-1,49,44,45,-1,48,43,44,-1,48,42,43,-1,46,41,42,-1,41,47,0,-1,41,46,47,-1,42,48,46,-1,51,44,49,-1,51,48,44,-1,48,52,53,-1,49,45,50,-1,56,49,50,-1,57,51,49,-1,58,53,52,-1,59,54,53,-1,62,55,54,-1,55,62,60,-1,54,59,62,-1,53,58,59,-1,51,61,58,-1,49,56,57,-1,64,57,56,-1,67,59,58,-1,68,62,59,-1,60,63,20,-1,60,62,63,-1,59,67,68,-1,58,61,67,-1,57,64,65,-1,65,66,57,-1,71,63,62,-1,69,65,64,-1,74,66,65,-1,78,68,67,-1,70,71,62,-1,63,72,27,-1,63,71,72,-1,68,78,76,-1,67,75,78,-1,66,74,75,-1,65,73,74,-1,65,69,73,-1,77,27,72,-1,71,82,72,-1,79,73,69,-1,81,75,74,-1,82,71,70,-1,77,72,83,-1,73,79,80,-1,84,80,79,-1,86,75,81,-1,83,72,82,-1,82,88,83,-1,70,87,82,-1,81,85,86,-1,89,80,84,-1,89,85,80,-1,90,86,85,-1,90,87,86,-1,89,83,88,-1,88,90,89,-1,85,89,90,-1,50,45,5,-1,45,40,5,-1,10,8,11,-1,8,12,11,-1,18,22,10,-1,22,14,10,-1,57,66,51,-1,66,61,51,-1,51,58,48,-1,58,52,48,-1,48,53,46,-1,53,54,46,-1,76,70,68,-1,70,62,68,-1,29,32,28,-1,28,32,31,-1,32,35,31,-1,85,81,80,-1,81,73,80,-1,81,74,73,-1,39,37,38,-1,37,34,38,-1,82,87,88,-1,87,90,88,-1,87,78,86,-1,78,75,86,-1,61,66,67,-1,66,75,67,-1,22,18,15,-1,23,30,15,-1,30,22,15,-1,13,12,7,-1,12,6,7,-1,46,54,47,-1,54,55,47,-1,87,76,78,-1,87,70,76,-1]);
IndexedFaceSet38.creaseAngle = 1.14;
let Coordinate39 = browser.currentScene.createNode("Coordinate");
Coordinate39.point = new MFVec3f(new float[0,1.06,0.0218,0.0561,1.07,0.00726,0.0851,1.07,-0.0115,0.104,1.07,-0.0497,0.0851,1.07,-0.0851,0.032,1.06,-0.0985,0.0873,1.04,0.0078,0.033,1.04,0.0395,0.123,1.05,-0.0405,0.0609,1.02,-0.106,0.0894,0.996,-0.106,0.143,1,-0.0309,0.117,1,0.0164,0.0314,0.999,0.0502,0.0314,0.96,-0.13,0.156,0.966,-0.0405,0.156,0.968,-0.00724,0.0341,0.954,0.0513,0.115,0.96,-0.0916,0.121,0.926,0.0352,0.0357,0.92,0.0497,0.0314,0.91,-0.146,0.0991,0.91,-0.131,0.169,0.883,-0.0448,0.169,0.885,-0.00939,0.123,0.873,0.0384,0.0926,0.872,0.047,0.0325,0.873,0.0287,0.0293,0.866,-0.142,0.102,0.869,-0.131,0.129,0.868,-0.103,0.0314,0.84,-0.125,0.101,0.844,-0.122,0.133,0.846,-0.0878,0.0653,0.835,0.0132,0.0615,0.824,-0.111,0.0985,0.823,-0.101,0.132,0.826,-0.0448,0.0609,0.821,-0.0158,0.0599,0.812,-0.0545,0,1.08,-0.0266,-0.0561,1.07,0.00726,-0.0851,1.07,-0.0115,-0.104,1.07,-0.0497,-0.0851,1.07,-0.0851,-0.032,1.06,-0.0985,-0.0873,1.04,0.0078,-0.033,1.04,0.0395,-0.123,1.05,-0.0405,-0.0609,1.02,-0.106,0,1.02,-0.108,-0.0894,0.996,-0.106,-0.143,1,-0.0309,-0.144,1,-0.011,-0.117,1,0.0164,-0.0314,0.999,0.0502,0,0.961,-0.123,-0.0314,0.96,-0.13,-0.156,0.966,-0.0405,-0.156,0.968,-0.00724,-0.0341,0.954,0.0513,-0.115,0.96,-0.0916,-0.121,0.926,0.0352,-0.0357,0.92,0.0497,0,0.91,-0.127,-0.0314,0.91,-0.146,-0.0991,0.91,-0.131,-0.167,0.911,-0.0448,-0.167,0.912,-0.00671,0,0.883,-0.129,-0.123,0.873,0.0384,-0.0926,0.872,0.047,-0.0325,0.873,0.0287,-0.0293,0.866,-0.142,-0.102,0.869,-0.131,-0.129,0.868,-0.103,-0.166,0.863,-0.0148,0,0.863,-0.00456,-0.166,0.862,-0.0459,0,0.858,-0.1,-0.0314,0.84,-0.125,-0.101,0.844,-0.122,-0.0653,0.835,0.0132,0,0.839,-0.0217,0,0.835,-0.0867,-0.0615,0.824,-0.111,-0.0985,0.823,-0.101,-0.132,0.826,-0.0448,-0.0609,0.821,-0.0158,0,0.831,-0.0626,-0.0599,0.812,-0.0545]);
IndexedFaceSet38.coord = Coordinate39;

Shape35.geometry = IndexedFaceSet38;

HAnimSegment34.children = new MFNode();

HAnimSegment34.children[0] = Shape35;

HAnimJoint33.children = new MFNode();

HAnimJoint33.children[0] = HAnimSegment34;

let HAnimJoint40 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint40.name = "l_hip";
HAnimJoint40.DEF = "hanim_l_hip";
HAnimJoint40.center = new SFVec3f(new float[0.122,0.888271,-0.0693267]);
HAnimJoint40.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint40.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment41 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment41.name = "l_thigh";
HAnimSegment41.DEF = "hanim_l_thigh";
let Shape42 = browser.currentScene.createNode("Shape");
let Appearance43 = browser.currentScene.createNode("Appearance");
let Material44 = browser.currentScene.createNode("Material");
Material44.USE = "Pants_Color";
Appearance43.material = Material44;

Shape42.appearance = Appearance43;

let IndexedFaceSet45 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet45.coordIndex = new MFInt32(new int[0,4,5,-1,3,4,0,-1,0,7,1,-1,0,8,7,-1,0,6,8,-1,0,5,6,-1,0,2,3,-1,0,1,2,-1,9,2,1,-1,10,3,2,-1,11,4,3,-1,12,5,4,-1,13,6,5,-1,15,7,8,-1,9,1,7,-1,7,15,9,-1,8,14,15,-1,5,16,13,-1,5,12,16,-1,4,11,12,-1,3,10,11,-1,2,9,10,-1,20,13,16,-1,18,11,10,-1,19,12,11,-1,20,16,12,-1,23,15,14,-1,15,23,24,-1,12,19,20,-1,11,18,19,-1,10,17,18,-1,26,18,17,-1,27,19,18,-1,27,20,19,-1,28,21,20,-1,29,23,22,-1,23,29,30,-1,20,32,28,-1,20,27,32,-1,18,26,27,-1,17,25,26,-1,25,31,30,-1,30,29,26,-1,30,26,25,-1,29,28,27,-1,29,27,26,-1,28,32,27,-1,22,23,14,-1,20,21,13,-1,21,22,13,-1,22,14,13,-1,9,15,24,-1,10,9,17,-1,9,24,17,-1,6,13,8,-1,13,14,8,-1,28,29,21,-1,29,22,21,-1,24,31,17,-1,31,25,17,-1,30,31,23,-1,31,24,23,-1]);
IndexedFaceSet45.creaseAngle = 1.32;
let Coordinate46 = browser.currentScene.createNode("Coordinate");
Coordinate46.point = new MFVec3f(new float[0.0969,0.804,-0.0486,0.101,0.876,0.0336,0.17,0.894,-0.00778,0.17,0.891,-0.076,0.124,0.858,-0.129,0.076,0.843,-0.143,0.025,0.819,-0.0889,0.0507,0.847,0.0196,0.00349,0.826,-0.0287,0.0991,0.808,0.0406,0.161,0.814,-0.00187,0.165,0.808,-0.0755,0.122,0.788,-0.126,0.00993,0.762,-0.0937,0.00993,0.762,-0.0309,0.0491,0.777,0.0185,0.0755,0.766,-0.139,0.13,0.597,-0.00618,0.132,0.6,-0.0593,0.108,0.603,-0.105,0.0722,0.601,-0.118,0.0314,0.59,-0.0953,0.0239,0.566,-0.0427,0.047,0.566,0.0051,0.0878,0.581,0.0217,0.114,0.499,-0.0132,0.116,0.488,-0.061,0.103,0.567,-0.0991,0.0362,0.557,-0.0926,0.025,0.486,-0.047,0.0507,0.497,-0.00188,0.0862,0.513,0.018,0.0733,0.579,-0.108]);
IndexedFaceSet45.coord = Coordinate46;

Shape42.geometry = IndexedFaceSet45;

HAnimSegment41.children = new MFNode();

HAnimSegment41.children[0] = Shape42;

HAnimJoint40.children = new MFNode();

HAnimJoint40.children[0] = HAnimSegment41;

let HAnimJoint47 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint47.name = "l_knee";
HAnimJoint47.DEF = "hanim_l_knee";
HAnimJoint47.center = new SFVec3f(new float[0.0738,0.517,-0.0284]);
HAnimJoint47.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint47.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment48 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment48.name = "l_calf";
HAnimSegment48.DEF = "hanim_l_calf";
let Shape49 = browser.currentScene.createNode("Shape");
let Appearance50 = browser.currentScene.createNode("Appearance");
let Material51 = browser.currentScene.createNode("Material");
Material51.USE = "Pants_Color";
Appearance50.material = Material51;

Shape49.appearance = Appearance50;

let IndexedFaceSet52 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet52.coordIndex = new MFInt32(new int[2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,7,6,-1,2,8,7,-1,2,0,8,-1,9,8,0,-1,10,6,7,-1,11,5,6,-1,12,4,5,-1,12,3,4,-1,13,1,3,-1,1,13,14,-1,3,12,13,-1,5,11,12,-1,6,10,11,-1,8,9,15,-1,22,13,12,-1,13,22,14,-1,17,15,9,-1,20,12,11,-1,21,22,12,-1,23,9,14,-1,9,23,16,-1,14,22,23,-1,12,20,21,-1,15,17,18,-1,9,16,17,-1,24,17,16,-1,25,18,17,-1,26,19,18,-1,27,20,19,-1,28,21,20,-1,29,22,21,-1,30,23,22,-1,31,16,23,-1,23,30,31,-1,22,29,30,-1,21,28,29,-1,20,27,28,-1,19,26,27,-1,18,25,26,-1,17,24,25,-1,16,31,24,-1,33,26,25,-1,36,29,28,-1,37,31,30,-1,29,36,30,-1,25,24,33,-1,31,37,24,-1,32,33,24,-1,24,37,32,-1,38,37,30,-1,30,36,38,-1,41,33,32,-1,42,39,34,-1,44,36,35,-1,45,38,36,-1,46,37,38,-1,38,45,46,-1,36,44,45,-1,35,43,44,-1,39,42,47,-1,32,40,41,-1,40,46,45,-1,41,40,45,-1,41,45,44,-1,44,43,42,-1,44,42,41,-1,43,47,42,-1,39,35,28,-1,35,36,28,-1,34,39,27,-1,39,28,27,-1,33,34,26,-1,34,27,26,-1,33,41,34,-1,41,42,34,-1,40,32,46,-1,32,37,46,-1,10,19,11,-1,19,20,11,-1,14,9,1,-1,9,0,1,-1,8,15,7,-1,7,15,10,-1,15,19,10,-1,15,18,19,-1,43,35,47,-1,35,39,47,-1]);
IndexedFaceSet52.creaseAngle = 1.57;
let Coordinate53 = browser.currentScene.createNode("Coordinate");
Coordinate53.point = new MFVec3f(new float[0.0883,0.532,-0.00349,0.0609,0.533,-0.00833,0.0814,0.55,-0.0395,0.0529,0.536,-0.0368,0.0577,0.544,-0.0577,0.0722,0.546,-0.0717,0.0975,0.54,-0.0647,0.105,0.539,-0.0438,0.104,0.539,-0.0223,0.0862,0.506,0.0158,0.101,0.51,-0.0798,0.0706,0.51,-0.101,0.0406,0.513,-0.0744,0.0368,0.51,-0.0357,0.0556,0.506,-0.000272,0.117,0.508,-0.0169,0.0878,0.361,-0.0126,0.123,0.363,-0.04,0.123,0.363,-0.0663,0.107,0.367,-0.107,0.0588,0.365,-0.122,0.0228,0.358,-0.0926,0.0239,0.358,-0.0475,0.0497,0.358,-0.0234,0.118,0.311,-0.0411,0.118,0.309,-0.0685,0.105,0.31,-0.108,0.0572,0.308,-0.123,0.0201,0.309,-0.0937,0.0191,0.311,-0.0508,0.0475,0.307,-0.0282,0.0883,0.309,-0.018,0.0959,0.124,-0.04,0.0905,0.12,-0.0647,0.0738,0.117,-0.0814,0.0373,0.121,-0.0636,0.0416,0.124,-0.0416,0.0744,0.13,-0.0212,0.0561,0.13,-0.0245,0.0529,0.121,-0.0873,0.0948,0.0897,-0.0368,0.0916,0.0779,-0.0604,0.0717,0.0854,-0.0765,0.0406,0.0918,-0.0626,0.0384,0.0881,-0.0363,0.054,0.0972,-0.0175,0.0765,0.11,-0.0169,0.0486,0.0999,-0.0835]);
IndexedFaceSet52.coord = Coordinate53;

Shape49.geometry = IndexedFaceSet52;

HAnimSegment48.children = new MFNode();

HAnimSegment48.children[0] = Shape49;

HAnimJoint47.children = new MFNode();

HAnimJoint47.children[0] = HAnimSegment48;

let HAnimJoint54 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint54.name = "l_ankle";
HAnimJoint54.DEF = "hanim_l_ankle";
HAnimJoint54.center = new SFVec3f(new float[0.0645,0.0719,-0.048]);
HAnimJoint54.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint54.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment55 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment55.name = "l_hindfoot";
HAnimSegment55.DEF = "hanim_l_hindfoot";
let Shape56 = browser.currentScene.createNode("Shape");
let Appearance57 = browser.currentScene.createNode("Appearance");
let Material58 = browser.currentScene.createNode("Material");
Material58.DEF = "Shoe_Color";
Material58.ambientIntensity = 0.25;
Material58.diffuseColor = new SFColor(new float[0.753,1,0.243]);
Appearance57.material = Material58;

Shape56.appearance = Appearance57;

let IndexedFaceSet59 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet59.coordIndex = new MFInt32(new int[2,1,0,-1,4,3,1,-1,2,4,1,-1,3,6,5,-1,1,3,5,-1,6,8,7,-1,5,6,7,-1,8,10,9,-1,7,8,9,-1,10,12,11,-1,9,10,11,-1,12,14,13,-1,11,12,13,-1,14,16,15,-1,13,14,15,-1,16,18,17,-1,15,16,17,-1,18,20,19,-1,17,18,19,-1,20,22,21,-1,19,20,21,-1,22,24,23,-1,21,22,23,-1,24,25,0,-1,23,24,0,-1,25,4,2,-1,0,25,2,-1,18,26,20,-1,16,26,18,-1,27,26,16,-1,14,27,16,-1,12,27,14,-1,28,27,12,-1,29,28,12,-1,10,29,12,-1,8,29,10,-1,6,37,8,-1,24,30,25,-1,31,30,24,-1,22,31,24,-1,32,31,22,-1,20,32,22,-1,33,32,20,-1,26,33,20,-1,34,33,26,-1,27,34,26,-1,35,34,27,-1,28,35,27,-1,29,35,28,-1,36,35,29,-1,8,36,29,-1,37,36,8,-1,6,38,37,-1,3,38,6,-1,39,38,3,-1,30,39,25,-1,41,40,30,-1,31,41,30,-1,42,41,31,-1,32,42,31,-1,43,42,32,-1,33,43,32,-1,44,43,33,-1,34,44,33,-1,45,44,34,-1,35,45,34,-1,46,45,35,-1,36,46,35,-1,47,46,36,-1,37,47,36,-1,38,47,37,-1,48,47,38,-1,49,48,38,-1,39,49,38,-1,40,49,39,-1,30,40,39,-1,48,49,50,-1,47,48,50,-1,46,47,50,-1,45,46,50,-1,44,45,50,-1,43,44,50,-1,42,43,50,-1,41,42,50,-1,40,41,50,-1,49,40,50,-1,11,13,15,-1,11,15,17,-1,9,11,17,-1,9,17,19,-1,7,9,19,-1,7,19,21,-1,5,7,21,-1,5,21,23,-1,5,23,0,-1,1,5,0,-1,3,4,39,-1,4,25,39,-1]);
IndexedFaceSet59.creaseAngle = 1.57;
let Coordinate60 = browser.currentScene.createNode("Coordinate");
Coordinate60.point = new MFVec3f(new float[0.0529,0,-0.0923,0.0863,0,-0.0862,0.0727,0,-0.0994,0.0863,0.0219,-0.0862,0.0727,0.0219,-0.0994,0.1,0,-0.0594,0.1,0.0219,-0.0594,0.113,0,0.0645,0.113,0.0219,0.0645,0.112,0,0.117,0.112,0.0156,0.117,0.0701,0,0.146,0.0701,0.0156,0.146,0.0468,0,0.153,0.0468,0.0156,0.153,0.0215,0,0.146,0.0215,0.0156,0.146,0.0165,0,0.125,0.0165,0.0156,0.125,0.0211,0,0.0377,0.0211,0.0219,0.0377,0.0393,0,-0.0129,0.0393,0.0219,-0.0129,0.0433,0,-0.0534,0.0433,0.0219,-0.0534,0.0529,0.0219,-0.0923,0.0305,0.0253,0.0938,0.0505,0.0253,0.099,0.0854,0.0253,0.0834,0.102,0.0253,0.0707,0.0568,0.0573,-0.0918,0.0492,0.0573,-0.0497,0.0435,0.0573,-0.0225,0.0442,0.0573,0.0235,0.0623,0.0573,0.0366,0.0911,0.0573,0.0159,0.0962,0.0573,-0.0121,0.0911,0.0573,-0.0482,0.0758,0.0573,-0.0899,0.0676,0.0573,-0.0962,0.0578,0.0953,-0.0896,0.0489,0.0953,-0.0757,0.0447,0.0953,-0.0432,0.0451,0.0953,-0.0128,0.0624,0.0953,-0.00466,0.0857,0.0953,-0.0134,0.0953,0.0953,-0.038,0.0843,0.0953,-0.0803,0.0761,0.0953,-0.0889,0.0682,0.0953,-0.0929,0.0675,0.13,-0.0608]);
IndexedFaceSet59.coord = Coordinate60;

Shape56.geometry = IndexedFaceSet59;

HAnimSegment55.children = new MFNode();

HAnimSegment55.children[0] = Shape56;

let Transform61 = browser.currentScene.createNode("Transform");
Transform61.scale = new SFVec3f(new float[0.015,0.015,0.015]);
let Transform62 = browser.currentScene.createNode("Transform");
Transform62.rotation = new SFRotation(new float[0,0,1,1.57]);
Transform62.translation = new SFVec3f(new float[6,-0.5,-7.5]);
let Shape63 = browser.currentScene.createNode("Shape");
let Appearance64 = browser.currentScene.createNode("Appearance");
let Material65 = browser.currentScene.createNode("Material");
Material65.diffuseColor = new SFColor(new float[0.753,1,0.243]);
Appearance64.material = Material65;

Shape63.appearance = Appearance64;

let Extrusion66 = browser.currentScene.createNode("Extrusion");
Extrusion66.DEF = "FinExtrusionLeft";
Extrusion66.ccw = False;
Extrusion66.creaseAngle = 3.14;
Extrusion66.crossSection = new MFVec2f(new float[-1,0,-0.8,2,-0.7,3,0,5.2,0.7,3,0.8,2,1,0,0.8,-2,0.7,-3,0,-5.2,-0.7,-3,-0.8,-2,-1,0]);
Extrusion66.scale = new MFVec2f(new float[0.25,0.25,0.5,0.75,0.5,1.2,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35]);
Extrusion66.spine = new MFVec3f(new float[0,0,1,0,0,5,0,0,8,0,0,12,0,0,15,0.5,0,18,1.5,0,25,2.5,0,30,4,0,34]);
Shape63.geometry = Extrusion66;

Transform62.children = new MFNode();

Transform62.children[0] = Shape63;

Transform61.children = new MFNode();

Transform61.children[0] = Transform62;

HAnimSegment55.children[1] = Transform61;

HAnimJoint54.children = new MFNode();

HAnimJoint54.children[0] = HAnimSegment55;

HAnimJoint47.children[1] = HAnimJoint54;

HAnimJoint40.children[1] = HAnimJoint47;

HAnimJoint33.children[1] = HAnimJoint40;

let HAnimJoint67 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint67.name = "r_hip";
HAnimJoint67.DEF = "hanim_r_hip";
HAnimJoint67.center = new SFVec3f(new float[-0.11,0.892362,-0.0732533]);
HAnimJoint67.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint67.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment68 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment68.name = "r_thigh";
HAnimSegment68.DEF = "hanim_r_thigh";
let Shape69 = browser.currentScene.createNode("Shape");
let Appearance70 = browser.currentScene.createNode("Appearance");
let Material71 = browser.currentScene.createNode("Material");
Material71.USE = "Pants_Color";
Appearance70.material = Material71;

Shape69.appearance = Appearance70;

let IndexedFaceSet72 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet72.coordIndex = new MFInt32(new int[5,4,0,-1,0,4,3,-1,1,7,0,-1,7,8,0,-1,8,6,0,-1,6,5,0,-1,3,2,0,-1,2,1,0,-1,1,2,9,-1,2,3,10,-1,3,4,11,-1,4,5,12,-1,5,6,13,-1,8,7,15,-1,7,1,9,-1,9,15,7,-1,15,14,8,-1,13,16,5,-1,16,12,5,-1,12,11,4,-1,11,10,3,-1,10,9,2,-1,12,16,20,-1,13,14,22,-1,14,15,23,-1,24,23,15,-1,23,22,14,-1,20,19,12,-1,17,18,26,-1,18,19,27,-1,19,20,27,-1,20,21,28,-1,22,23,29,-1,30,29,23,-1,27,26,18,-1,26,25,17,-1,30,31,25,-1,25,26,29,-1,25,29,30,-1,26,27,28,-1,26,28,29,-1,27,20,28,-1,24,15,9,-1,22,21,13,-1,29,28,22,-1,28,21,22,-1,24,31,23,-1,31,30,23,-1,25,31,17,-1,31,24,17,-1,17,24,10,-1,24,9,10,-1,18,10,11,-1,18,17,10,-1,18,12,19,-1,18,11,12,-1,21,20,13,-1,20,16,13,-1,14,13,8,-1,13,6,8,-1]);
IndexedFaceSet72.creaseAngle = 1.61;
let Coordinate73 = browser.currentScene.createNode("Coordinate");
Coordinate73.point = new MFVec3f(new float[-0.0969,0.804,-0.0486,-0.101,0.876,0.0336,-0.17,0.894,-0.00778,-0.17,0.891,-0.076,-0.124,0.858,-0.129,-0.076,0.843,-0.143,-0.025,0.819,-0.0889,-0.0507,0.847,0.0196,-0.00349,0.826,-0.0287,-0.0991,0.808,0.0406,-0.161,0.814,-0.00187,-0.165,0.808,-0.0755,-0.122,0.788,-0.126,-0.00993,0.762,-0.0937,-0.00993,0.762,-0.0309,-0.0491,0.777,0.0185,-0.0755,0.766,-0.139,-0.13,0.597,-0.00618,-0.132,0.6,-0.0593,-0.108,0.603,-0.105,-0.0722,0.601,-0.118,-0.0314,0.59,-0.0953,-0.0239,0.566,-0.0427,-0.047,0.566,0.0051,-0.0878,0.581,0.0217,-0.114,0.499,-0.0132,-0.116,0.488,-0.061,-0.103,0.567,-0.0991,-0.0362,0.557,-0.0926,-0.025,0.486,-0.047,-0.0507,0.497,-0.00188,-0.0862,0.513,0.018]);
IndexedFaceSet72.coord = Coordinate73;

Shape69.geometry = IndexedFaceSet72;

HAnimSegment68.children = new MFNode();

HAnimSegment68.children[0] = Shape69;

HAnimJoint67.children = new MFNode();

HAnimJoint67.children[0] = HAnimSegment68;

let HAnimJoint74 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint74.name = "r_knee";
HAnimJoint74.DEF = "hanim_r_knee";
HAnimJoint74.center = new SFVec3f(new float[-0.0699,0.51,-0.0166]);
HAnimJoint74.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint74.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment75 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment75.name = "r_calf";
HAnimSegment75.DEF = "hanim_r_calf";
let Shape76 = browser.currentScene.createNode("Shape");
let Appearance77 = browser.currentScene.createNode("Appearance");
let Material78 = browser.currentScene.createNode("Material");
Material78.USE = "Pants_Color";
Appearance77.material = Material78;

Shape76.appearance = Appearance77;

let IndexedFaceSet79 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet79.coordIndex = new MFInt32(new int[14,25,18,-1,25,32,18,-1,32,27,18,-1,27,22,18,-1,22,10,18,-1,10,6,18,-1,6,8,18,-1,8,14,18,-1,14,8,17,-1,6,10,9,-1,10,22,24,-1,22,27,39,-1,27,32,39,-1,32,25,42,-1,25,14,30,-1,17,30,14,-1,30,42,25,-1,42,39,32,-1,39,24,22,-1,24,9,10,-1,4,17,8,-1,39,42,43,-1,30,43,42,-1,17,4,1,-1,24,39,26,-1,39,43,44,-1,30,17,34,-1,16,34,17,-1,34,43,30,-1,44,26,39,-1,0,1,4,-1,1,16,17,-1,16,1,3,-1,1,0,2,-1,0,5,7,-1,5,26,28,-1,26,44,45,-1,44,43,46,-1,43,34,36,-1,34,16,15,-1,15,36,34,-1,36,46,43,-1,46,45,44,-1,45,28,26,-1,28,7,5,-1,7,2,0,-1,2,3,1,-1,3,15,16,-1,45,46,37,-1,36,15,20,-1,36,37,46,-1,13,2,7,-1,3,20,15,-1,3,2,13,-1,36,20,29,-1,29,37,36,-1,13,21,23,-1,21,33,23,-1,41,37,40,-1,37,29,31,-1,29,20,19,-1,19,31,29,-1,31,40,37,-1,40,38,41,-1,35,23,33,-1,23,12,13,-1,12,11,13,-1,31,19,11,-1,40,31,11,-1,40,11,12,-1,12,23,38,-1,12,38,40,-1,23,35,38,-1,28,21,7,-1,21,13,7,-1,45,33,28,-1,33,21,28,-1,33,45,41,-1,45,37,41,-1,33,41,35,-1,41,38,35,-1,20,3,47,-1,11,19,47,-1,19,20,47,-1,13,47,3,-1,13,11,47,-1,4,8,6,-1,26,5,24,-1,5,9,24,-1,6,9,4,-1,9,0,4,-1,9,5,0,-1]);
IndexedFaceSet79.creaseAngle = 1.57;
let Coordinate80 = browser.currentScene.createNode("Coordinate");
Coordinate80.point = new MFVec3f(new float[-0.123,0.363,-0.0663,-0.123,0.363,-0.04,-0.118,0.309,-0.0685,-0.118,0.311,-0.0411,-0.117,0.508,-0.0169,-0.107,0.367,-0.107,-0.105,0.539,-0.0438,-0.105,0.31,-0.108,-0.104,0.539,-0.0223,-0.101,0.51,-0.0798,-0.0975,0.54,-0.0647,-0.0948,0.0897,-0.0368,-0.0916,0.0779,-0.0604,-0.0905,0.12,-0.0647,-0.0883,0.532,-0.00349,-0.0883,0.309,-0.018,-0.0878,0.361,-0.0126,-0.0862,0.506,0.0158,-0.0814,0.55,-0.0395,-0.0765,0.11,-0.0169,-0.0744,0.13,-0.0212,-0.0738,0.117,-0.0814,-0.0722,0.546,-0.0717,-0.0717,0.0854,-0.0765,-0.0706,0.51,-0.101,-0.0609,0.533,-0.00833,-0.0588,0.365,-0.122,-0.0577,0.544,-0.0577,-0.0572,0.308,-0.123,-0.0561,0.13,-0.0245,-0.0556,0.506,-0.000272,-0.054,0.0972,-0.0175,-0.0529,0.536,-0.0368,-0.0529,0.121,-0.0873,-0.0497,0.358,-0.0234,-0.0486,0.0999,-0.0835,-0.0475,0.307,-0.0282,-0.0416,0.124,-0.0416,-0.0406,0.0918,-0.0626,-0.0406,0.513,-0.0744,-0.0384,0.0881,-0.0363,-0.0373,0.121,-0.0636,-0.0368,0.51,-0.0357,-0.0239,0.358,-0.0475,-0.0228,0.358,-0.0926,-0.0201,0.309,-0.0937,-0.0191,0.311,-0.0508,-0.0985,0.125,-0.0375]);
IndexedFaceSet79.coord = Coordinate80;

Shape76.geometry = IndexedFaceSet79;

HAnimSegment75.children = new MFNode();

HAnimSegment75.children[0] = Shape76;

HAnimJoint74.children = new MFNode();

HAnimJoint74.children[0] = HAnimSegment75;

let HAnimJoint81 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint81.name = "r_ankle";
HAnimJoint81.DEF = "hanim_r_ankle";
HAnimJoint81.center = new SFVec3f(new float[-0.064,0.0753,-0.0412]);
HAnimJoint81.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint81.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment82 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment82.name = "r_hindfoot";
HAnimSegment82.DEF = "hanim_r_hindfoot";
let Shape83 = browser.currentScene.createNode("Shape");
let Appearance84 = browser.currentScene.createNode("Appearance");
let Material85 = browser.currentScene.createNode("Material");
Material85.USE = "Shoe_Color";
Appearance84.material = Material85;

Shape83.appearance = Appearance84;

let IndexedFaceSet86 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet86.coordIndex = new MFInt32(new int[6,50,0,-1,50,8,7,-1,50,7,0,-1,1,9,8,-1,1,8,50,-1,49,10,9,-1,49,9,1,-1,46,11,10,-1,46,10,49,-1,2,12,11,-1,2,11,46,-1,3,13,12,-1,3,12,2,-1,4,14,13,-1,4,13,3,-1,45,14,4,-1,47,15,45,-1,19,15,47,-1,48,18,19,-1,5,16,18,-1,5,18,48,-1,6,17,16,-1,6,16,5,-1,0,7,17,-1,0,17,6,-1,14,20,21,-1,14,21,13,-1,13,21,12,-1,12,21,22,-1,12,22,11,-1,11,22,10,-1,17,23,16,-1,16,23,24,-1,16,24,18,-1,18,24,25,-1,18,25,19,-1,19,25,26,-1,19,26,15,-1,15,26,20,-1,20,26,27,-1,20,27,21,-1,21,27,28,-1,21,28,22,-1,22,28,29,-1,10,30,9,-1,9,30,31,-1,9,31,8,-1,8,31,32,-1,17,32,23,-1,23,33,34,-1,23,34,35,-1,23,35,24,-1,24,35,36,-1,24,36,25,-1,25,36,37,-1,25,37,26,-1,26,37,38,-1,26,38,27,-1,27,38,39,-1,27,39,28,-1,28,39,40,-1,28,40,29,-1,29,40,41,-1,29,41,30,-1,30,41,42,-1,30,42,31,-1,31,42,43,-1,31,43,32,-1,32,43,33,-1,32,33,23,-1,44,43,42,-1,44,42,41,-1,44,41,40,-1,44,40,39,-1,44,39,38,-1,44,38,37,-1,44,37,36,-1,44,36,35,-1,44,35,34,-1,44,34,33,-1,44,33,43,-1,4,3,2,-1,45,4,2,-1,45,2,46,-1,47,45,46,-1,48,46,49,-1,5,48,49,-1,5,49,1,-1,6,5,1,-1,6,1,50,-1,30,10,29,-1,10,22,29,-1,17,7,32,-1,7,8,32,-1,19,47,48,-1,47,46,48,-1,20,14,15,-1,14,45,15,-1]);
IndexedFaceSet86.creaseAngle = 1.57;
let Coordinate87 = browser.currentScene.createNode("Coordinate");
Coordinate87.point = new MFVec3f(new float[-0.0727,0,-0.0994,-0.1,0,-0.0594,-0.0701,0,0.146,-0.0468,0,0.153,-0.0215,0,0.146,-0.0433,0,-0.0534,-0.0529,0,-0.0923,-0.0727,0.0219,-0.0994,-0.0863,0.0219,-0.0862,-0.1,0.0219,-0.0594,-0.108,0.0219,-0.00479,-0.112,0.0156,0.117,-0.0701,0.0156,0.146,-0.0468,0.0156,0.153,-0.0215,0.0156,0.146,-0.0165,0.017,0.0777,-0.0433,0.0219,-0.0534,-0.0529,0.0219,-0.0923,-0.0445,0.0273,-0.0189,-0.0265,0.0253,0.0549,-0.0305,0.0253,0.0938,-0.069,0.0253,0.0938,-0.102,0.0253,0.0707,-0.0568,0.0573,-0.0918,-0.0492,0.0573,-0.0497,-0.0424,0.0573,-0.00142,-0.0478,0.0573,0.0341,-0.0623,0.0573,0.0366,-0.0864,0.0573,0.0245,-0.0962,0.0573,-0.0121,-0.0845,0.0573,-0.0764,-0.0758,0.0573,-0.0899,-0.0676,0.0573,-0.0962,-0.0578,0.0953,-0.0896,-0.0489,0.0953,-0.0757,-0.0459,0.0953,-0.0615,-0.0435,0.0953,-0.0292,-0.0485,0.0953,-0.00582,-0.0624,0.0953,-0.00466,-0.0857,0.0953,-0.0134,-0.0953,0.0953,-0.038,-0.0843,0.0953,-0.0803,-0.0761,0.0953,-0.0889,-0.0682,0.0953,-0.0929,-0.0675,0.13,-0.0608,-0.0165,0,0.125,-0.112,0,0.117,-0.0165,0,0.0777,-0.0393,0,-0.0129,-0.108,0,-0.00479,-0.0863,0,-0.0862]);
IndexedFaceSet86.coord = Coordinate87;

Shape83.geometry = IndexedFaceSet86;

HAnimSegment82.children = new MFNode();

HAnimSegment82.children[0] = Shape83;

let Transform88 = browser.currentScene.createNode("Transform");
Transform88.scale = new SFVec3f(new float[0.015,0.015,0.015]);
let Transform89 = browser.currentScene.createNode("Transform");
Transform89.rotation = new SFRotation(new float[0,0,1,1.57]);
Transform89.translation = new SFVec3f(new float[-5,-0.5,-7.5]);
let Shape90 = browser.currentScene.createNode("Shape");
let Appearance91 = browser.currentScene.createNode("Appearance");
let Material92 = browser.currentScene.createNode("Material");
Material92.diffuseColor = new SFColor(new float[0.753,1,0.243]);
Appearance91.material = Material92;

Shape90.appearance = Appearance91;

let Extrusion93 = browser.currentScene.createNode("Extrusion");
Extrusion93.DEF = "FinExtrusionRight";
Extrusion93.ccw = False;
Extrusion93.creaseAngle = 3.14;
Extrusion93.crossSection = new MFVec2f(new float[-1,0,-0.8,2,-0.7,3,0,5.2,0.7,3,0.8,2,1,0,0.8,-2,0.7,-3,0,-5.2,-0.7,-3,-0.8,-2,-1,0]);
Extrusion93.scale = new MFVec2f(new float[0.25,0.25,0.5,0.75,0.5,1.2,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35]);
Extrusion93.spine = new MFVec3f(new float[0,0,1,0,0,5,0,0,8,0,0,12,0,0,15,0.5,0,18,1.5,0,25,2.5,0,30,4,0,34]);
Shape90.geometry = Extrusion93;

Transform89.children = new MFNode();

Transform89.children[0] = Shape90;

Transform88.children = new MFNode();

Transform88.children[0] = Transform89;

HAnimSegment82.children[1] = Transform88;

HAnimJoint81.children = new MFNode();

HAnimJoint81.children[0] = HAnimSegment82;

HAnimJoint74.children[1] = HAnimJoint81;

HAnimJoint67.children[1] = HAnimJoint74;

HAnimJoint33.children[2] = HAnimJoint67;

HAnimJoint32.children = new MFNode();

HAnimJoint32.children[0] = HAnimJoint33;

let HAnimJoint94 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint94.name = "vl1";
HAnimJoint94.DEF = "hanim_vl1";
HAnimJoint94.center = new SFVec3f(new float[-0.00405,1.07,-0.0275]);
HAnimJoint94.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint94.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment95 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment95.name = "l1";
HAnimSegment95.DEF = "hanim_l1";
let Transform96 = browser.currentScene.createNode("Transform");
Transform96.scale = new SFVec3f(new float[1.05,1.05,1.05]);
Transform96.translation = new SFVec3f(new float[-0.00405,1.07,-0.0275]);
let Shape97 = browser.currentScene.createNode("Shape");
let Appearance98 = browser.currentScene.createNode("Appearance");
let Material99 = browser.currentScene.createNode("Material");
Material99.DEF = "WetShirtColor";
Material99.ambientIntensity = 0.25;
Material99.diffuseColor = new SFColor(new float[0,0,0.502]);
Appearance98.material = Material99;

let ImageTexture100 = browser.currentScene.createNode("ImageTexture");
ImageTexture100.DEF = "small_logo_Tex";
ImageTexture100.url = new MFString(new java.lang.String["small_logo.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/small_logo.gif"]);
Appearance98.texture = ImageTexture100;

Shape97.appearance = Appearance98;

let IndexedFaceSet101 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet101.coordIndex = new MFInt32(new int[0,1,2,-1,3,0,2,-1,4,5,6,-1,6,7,4,-1,8,7,6,-1,6,9,8,-1,9,10,8,-1,6,5,11,-1,9,6,12,-1,11,12,6,-1,12,10,9,-1,7,8,13,-1,13,4,7,-1,14,15,16,-1,15,17,13,-1,4,13,17,-1,17,15,18,-1,13,19,15,-1,19,13,8,-1,19,16,15,-1,16,19,8,-1,17,20,4,-1,5,4,20,-1,18,21,17,-1,20,17,21,-1,16,22,14,-1,22,16,23,-1,8,23,16,-1,23,8,10,-1,24,25,26,-1,26,27,24,-1,25,28,26,-1,28,29,30,-1,30,26,28,-1,31,32,33,-1,32,25,33,-1,25,24,34,-1,33,25,34,-1,24,35,34,-1,27,35,24,-1,33,36,31,-1,27,26,37,-1,37,26,30,-1,38,37,30,-1,33,34,39,-1,39,34,35,-1,39,35,40,-1,41,38,30,-1,35,27,42,-1,37,42,27,-1,40,35,42,-1,42,37,43,-1,37,38,44,-1,44,43,37,-1,36,45,46,-1,36,33,45,-1,40,42,47,-1,43,47,42,-1,47,48,40,-1,39,40,48,-1,47,43,49,-1,43,44,49,-1,50,49,44,-1,51,46,52,-1,46,45,52,-1,52,45,53,-1,33,53,45,-1,33,39,53,-1,49,54,47,-1,48,47,54,-1,55,56,52,-1,57,52,53,-1,57,55,52,-1,58,57,53,-1,59,58,53,-1,53,39,59,-1,39,48,59,-1,59,48,54,-1,58,59,60,-1,54,49,61,-1,59,54,61,-1,60,59,61,-1,49,50,62,-1,63,62,50,-1,62,61,49,-1,64,63,50,-1,63,64,65,-1,65,62,63,-1,66,60,61,-1,62,65,67,-1,68,67,65,-1,64,69,70,-1,64,70,65,-1,70,68,65,-1,69,71,72,-1,72,70,69,-1,73,74,75,-1,66,76,60,-1,67,77,62,-1,62,77,61,-1,77,66,61,-1,66,77,78,-1,77,67,79,-1,79,67,68,-1,79,78,77,-1,68,70,80,-1,70,72,80,-1,80,79,68,-1,74,73,81,-1,73,76,82,-1,82,81,73,-1,76,66,83,-1,78,83,66,-1,83,82,76,-1,78,79,84,-1,79,80,84,-1,84,85,78,-1,86,84,80,-1,81,82,87,-1,87,88,81,-1,82,83,89,-1,83,78,89,-1,89,87,82,-1,78,85,89,-1,90,91,92,-1,92,93,90,-1,90,94,91,-1,95,96,94,-1,94,90,95,-1,29,96,97,-1,96,95,97,-1,97,30,29,-1,30,97,41,-1,41,97,95,-1,98,99,100,-1,98,91,99,-1,101,92,91,-1,98,101,91,-1,101,102,92,-1,92,102,93,-1,36,103,31,-1,51,103,36,46,-1,103,100,31,-1,100,103,98,-1,104,90,93,-1,90,104,95,-1,95,105,41,-1,104,105,95,-1,106,101,98,-1,102,101,106,-1,107,93,102,-1,93,107,104,-1,108,104,107,-1,107,109,108,-1,110,105,104,-1,104,108,110,-1,109,107,111,-1,107,102,111,-1,111,102,106,-1,111,112,109,-1,106,112,111,-1,113,110,108,-1,110,113,114,-1,51,52,115,-1,116,115,117,-1,117,106,116,-1,118,109,112,-1,119,108,109,-1,108,119,113,-1,109,118,119,-1,120,113,119,-1,119,121,120,-1,52,56,122,-1,122,115,52,-1,115,122,123,-1,117,124,125,-1,106,117,125,-1,118,112,106,125,-1,119,118,125,-1,121,119,125,-1,126,124,123,-1,127,114,113,-1,114,127,128,-1,113,120,127,-1,114,128,129,-1,130,126,123,-1,122,130,123,-1,131,120,121,-1,131,127,120,-1,132,129,128,-1,128,127,132,-1,74,81,133,-1,81,134,133,-1,121,135,131,-1,136,132,127,-1,132,136,137,-1,138,71,129,-1,138,129,132,-1,137,138,132,-1,139,72,71,-1,72,139,80,-1,71,138,139,-1,140,135,121,-1,140,121,125,-1,141,127,131,-1,127,141,136,-1,131,135,141,-1,142,141,135,-1,143,136,141,-1,136,143,137,-1,141,142,143,-1,144,138,137,-1,144,139,138,-1,143,144,137,-1,145,146,134,-1,145,140,146,-1,134,81,145,-1,147,135,140,-1,135,147,142,-1,140,145,147,-1,148,80,139,-1,80,148,86,-1,139,144,148,-1,149,143,142,-1,149,144,143,-1,142,150,149,-1,151,148,144,-1,144,149,151,-1,152,145,81,-1,81,88,152,-1,153,147,145,-1,153,142,147,-1,145,152,153,-1,153,150,142,-1,154,86,148,-1,148,151,154,-1,155,28,25,-1,155,29,28,-1,155,25,32,-1,155,32,31,-1,155,31,100,-1,155,100,99,-1,155,99,91,-1,155,91,94,-1,155,94,96,-1,155,96,29,-1,156,151,149,-1,156,154,151,-1,156,149,150,-1,156,150,153,-1,156,153,152,-1,156,152,88,-1,156,88,87,-1,156,87,89,-1,156,89,85,-1,156,85,84,-1,156,84,86,-1,156,86,154,-1,76,157,60,-1,76,73,158,157,-1,159,158,73,75,160,-1,161,56,55,-1,60,162,58,-1,162,60,157,-1,161,55,163,-1,57,164,163,55,-1,160,163,164,-1,160,164,159,-1,164,57,165,-1,164,165,159,-1,57,58,166,165,-1,166,58,162,-1,165,166,159,-1,166,162,157,158,159,-1,140,125,167,-1,124,168,125,-1,168,167,125,-1,124,169,168,-1,146,140,167,170,-1,168,170,167,-1,168,169,170,-1,146,170,171,-1,169,171,170,-1,172,134,146,171,-1,134,172,130,-1,169,124,126,173,-1,173,126,130,-1,169,173,172,171,-1,173,130,172,-1,122,74,133,174,-1,133,134,174,-1,130,122,174,-1,134,130,174,-1,122,56,175,74,-1,74,175,176,-1,175,56,161,176,-1,74,176,75,-1,176,161,163,-1,176,160,75,-1,176,163,160,-1,115,116,177,51,-1,106,98,177,116,-1,51,177,103,-1,177,98,103,-1]);
IndexedFaceSet101.creaseAngle = 1.59;
let Coordinate102 = browser.currentScene.createNode("Coordinate");
Coordinate102.DEF = "pointValues";
Coordinate102.point = new MFVec3f(new float[0.043,1.25,0.0614,0.101,1.25,0.0614,0.103,1.31,0.0195,0.021,1.32,0.0276,0.0572,1.27,-0.153,0.0524,1.15,-0.134,0,1.19,-0.14,0,1.26,-0.147,-0.0572,1.27,-0.153,-0.0228,1.18,-0.14,-0.0524,1.15,-0.134,0,1.13,-0.126,-0.0228,1.13,-0.124,0,1.31,-0.146,-0.0545,1.35,-0.138,0,1.35,-0.136,-0.0593,1.3,-0.151,0.0593,1.3,-0.151,0.0545,1.35,-0.138,-0.0255,1.3,-0.146,0.0975,1.26,-0.15,0.1,1.3,-0.148,-0.1,1.3,-0.148,-0.0975,1.26,-0.15,-0.117,1.41,-0.0395,-0.0674,1.45,-0.0314,-0.0926,1.41,-0.0937,-0.124,1.4,-0.0706,-0.0583,1.44,-0.0615,-0.0228,1.46,-0.0872,-0.0534,1.42,-0.112,-0.0228,1.42,0.00351,-0.0593,1.43,-0.0185,-0.0787,1.39,-0.00293,-0.112,1.4,-0.0131,-0.164,1.39,-0.0373,-0.0153,1.39,0.0159,-0.0953,1.35,-0.136,-0.0545,1.35,-0.138,-0.139,1.34,0.00297,-0.137,1.34,-0.0368,0,1.35,-0.136,-0.156,1.35,-0.0915,-0.132,1.29,-0.127,-0.1,1.3,-0.148,-0.0418,1.35,0.0168,-0.013,1.37,0.0167,-0.151,1.28,-0.0878,-0.136,1.32,-0.0406,-0.124,1.26,-0.125,-0.0975,1.26,-0.15,0.00228,1.37,0.0167,-0.00959,1.32,0.0276,-0.0918,1.31,0.0195,-0.141,1.25,-0.0744,-0.0316,1.25,0.0614,-0.00261,1.25,0.0458,-0.0611,1.25,0.0668,-0.0896,1.25,0.0614,-0.126,1.24,0.012,-0.126,1.22,0.0141,-0.129,1.17,-0.0523,-0.115,1.16,-0.105,-0.0851,1.18,-0.134,-0.0524,1.15,-0.134,-0.083,1.13,-0.122,-0.117,1.15,-0.018,-0.11,1.1,-0.0846,-0.0808,1.1,-0.111,-0.0228,1.13,-0.124,-0.0524,1.1,-0.119,0,1.13,-0.126,-0.0228,1.1,-0.116,-0.0563,1.15,0.0377,-0.00476,1.18,0.0458,-0.0343,1.18,0.0485,-0.0966,1.15,-0.00413,-0.12,1.1,-0.0373,-0.121,1.07,-0.0356,-0.106,1.07,-0.0711,-0.0475,1.06,-0.105,0,1.08,0.0556,-0.0787,1.08,0.0347,-0.103,1.08,0.00296,-0.0975,1.01,-0.0873,-0.134,0.998,-0.0314,-0.0475,1.02,-0.109,-0.0325,1.02,0.0529,0,1.02,0.0422,-0.0975,1.02,0.0132,0.0926,1.41,-0.0937,0.0674,1.45,-0.0314,0.117,1.41,-0.0395,0.124,1.4,-0.0706,0.0583,1.44,-0.0615,0.0534,1.42,-0.112,0.0228,1.46,-0.0872,0,1.4,-0.112,0.0787,1.39,-0.00293,0.0593,1.43,-0.0185,0.0228,1.42,0.00351,0.112,1.4,-0.0131,0.164,1.39,-0.0373,0.0153,1.39,0.0159,0.0953,1.35,-0.136,0.0545,1.35,-0.138,0.139,1.34,0.00297,0.156,1.35,-0.0915,0.132,1.29,-0.127,0.151,1.28,-0.0878,0.1,1.3,-0.148,0.137,1.34,-0.0368,0.147,1.32,-0.0406,0.124,1.26,-0.125,0.0975,1.26,-0.15,0.021,1.32,0.0276,0.0532,1.35,0.0168,0.103,1.31,0.0195,0.135,1.29,-0.0406,0.141,1.25,-0.0744,0.132,1.18,-0.083,0.134,1.19,-0.0572,0.014,1.25,0.0458,0.043,1.25,0.0614,0.101,1.25,0.0614,0.138,1.24,0.012,0.065,1.23,0.0743,0.115,1.16,-0.105,0.0851,1.18,-0.134,0.0524,1.15,-0.134,0.043,1.2,0.0641,0.127,1.14,-0.0427,0.083,1.13,-0.122,0.0162,1.18,0.0458,0.0457,1.18,0.0485,0.117,1.15,-0.018,0.11,1.1,-0.0846,0.0808,1.1,-0.111,0.0524,1.1,-0.119,0.0228,1.1,-0.116,0.108,1.15,-0.00413,0.12,1.1,-0.0373,0.121,1.07,-0.0356,0.106,1.07,-0.0711,0.0475,1.06,-0.105,0.0787,1.08,0.0347,0.0844,1.15,0.0297,0.103,1.08,0.00296,0,1.07,-0.11,0.0975,1.01,-0.0873,0.134,0.998,-0.0475,0.0475,1.02,-0.109,0.0325,1.02,0.0529,0.0975,1.02,0.0132,0,1.02,-0.117,0,1.44,-0.0389,0,1.01,-0.0259,-0.104,1.19,0.0423,-0.0778,1.19,0.0642,-0.078,1.19,0.0644,-0.0493,1.2,0.0664,-0.0281,1.22,0.0587,-0.104,1.2,0.0568,-0.0484,1.21,0.0692,-0.0549,1.21,0.0708,-0.0806,1.21,0.0713,-0.0852,1.21,0.0703,0.116,1.19,0.043,0.114,1.21,0.0572,0.0967,1.21,0.0701,0.11,1.19,0.0502,0.093,1.19,0.0622,0.0832,1.19,0.0662,0.0863,1.21,0.0728,0.0154,1.21,0.0458,-0.00393,1.21,0.0458,-0.0145,1.2,0.0512,0.0534,1.35,0.0168]);
IndexedFaceSet101.coord = Coordinate102;

let TextureCoordinate103 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate103.point = new MFVec2f(new float[0.1611,-0.02056,0.9468,-0.02056,0.9739,0.9344,-0.137,1.094,0.1973,0.6424,0.2231,0.04876,0.5054,0.2466,0.5054,0.5929,0.8135,0.6424,0.6282,0.1972,0.7876,0.04876,0.5054,-0.05018,0.6282,-0.05018,0.5054,0.8403,0.7989,1.038,0.5054,1.038,0.8248,0.7908,0.186,0.7908,0.2118,1.038,0.6427,0.7908,-0.01977,0.5929,-0.03324,0.7908,1.044,0.7908,1.031,0.5929,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]);
IndexedFaceSet101.texCoord = TextureCoordinate103;

Shape97.geometry = IndexedFaceSet101;

Transform96.children = new MFNode();

Transform96.children[0] = Shape97;

HAnimSegment95.children = new MFNode();

HAnimSegment95.children[0] = Transform96;

let Transform104 = browser.currentScene.createNode("Transform");
Transform104.scale = new SFVec3f(new float[1.25,1.1,1.3]);
Transform104.translation = new SFVec3f(new float[-0.00405,1.07,-0.0275]);
let Group105 = browser.currentScene.createNode("Group");
let Transform106 = browser.currentScene.createNode("Transform");
Transform106.translation = new SFVec3f(new float[0,-1.2,0]);
let Shape107 = browser.currentScene.createNode("Shape");
let Appearance108 = browser.currentScene.createNode("Appearance");
let Material109 = browser.currentScene.createNode("Material");
Material109.DEF = "BCLColor";
Material109.ambientIntensity = 0.25;
Material109.diffuseColor = new SFColor(new float[0.0588,0.0588,0.0588]);
Material109.shininess = 0.5;
Appearance108.material = Material109;

Shape107.appearance = Appearance108;

let IndexedFaceSet110 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet110.coordIndex = new MFInt32(new int[4,5,6,-1,6,7,4,-1,8,7,6,-1,6,9,8,-1,9,10,8,-1,6,5,11,-1,9,6,12,-1,11,12,6,-1,12,10,9,-1,7,8,13,-1,13,4,7,-1,14,15,16,-1,15,17,13,-1,4,13,17,-1,17,15,18,-1,13,19,15,-1,19,13,8,-1,19,16,15,-1,16,19,8,-1,17,20,4,-1,5,4,20,-1,18,21,17,-1,20,17,21,-1,16,22,14,-1,22,16,23,-1,8,23,16,-1,23,8,10,-1,24,25,26,-1,26,27,24,-1,25,28,26,-1,28,29,30,-1,30,26,28,-1,25,24,34,-1,33,25,34,-1,24,35,34,-1,27,35,24,-1,27,26,37,-1,37,26,30,-1,38,37,30,-1,33,34,39,-1,39,34,35,-1,41,38,30,-1,35,27,42,-1,37,42,27,-1,42,37,43,-1,37,38,44,-1,44,43,37,-1,43,47,42,-1,47,43,49,-1,43,44,49,-1,50,49,44,-1,33,39,53,-1,49,54,47,-1,59,58,53,-1,53,39,59,-1,58,59,60,-1,54,49,61,-1,49,50,62,-1,63,62,50,-1,62,61,49,-1,64,63,50,-1,63,64,65,-1,65,62,63,-1,66,60,61,-1,62,65,67,-1,68,67,65,-1,64,69,70,-1,64,70,65,-1,70,68,65,-1,69,71,72,-1,72,70,69,-1,66,76,60,-1,67,77,62,-1,62,77,61,-1,77,66,61,-1,66,77,78,-1,77,67,79,-1,79,67,68,-1,79,78,77,-1,68,70,80,-1,70,72,80,-1,80,79,68,-1,73,76,82,-1,76,66,83,-1,78,83,66,-1,83,82,76,-1,78,79,84,-1,79,80,84,-1,84,85,78,-1,86,84,80,-1,82,83,89,-1,83,78,89,-1,89,87,82,-1,78,85,89,-1,90,91,92,-1,92,93,90,-1,90,94,91,-1,95,96,94,-1,94,90,95,-1,29,96,97,-1,96,95,97,-1,97,30,29,-1,30,97,41,-1,41,97,95,-1,101,92,91,-1,98,101,91,-1,101,102,92,-1,92,102,93,-1,104,90,93,-1,90,104,95,-1,95,105,41,-1,104,105,95,-1,106,101,98,-1,102,101,106,-1,107,93,102,-1,93,107,104,-1,108,104,107,-1,107,109,108,-1,110,105,104,-1,104,108,110,-1,113,110,108,-1,110,113,114,-1,119,108,109,-1,108,119,113,-1,120,113,119,-1,119,121,120,-1,117,124,125,-1,106,117,125,-1,127,114,113,-1,114,127,128,-1,113,120,127,-1,114,128,129,-1,131,120,121,-1,131,127,120,-1,132,129,128,-1,128,127,132,-1,121,135,131,-1,136,132,127,-1,132,136,137,-1,138,71,129,-1,138,129,132,-1,137,138,132,-1,139,72,71,-1,72,139,80,-1,71,138,139,-1,140,135,121,-1,140,121,125,-1,141,127,131,-1,127,141,136,-1,131,135,141,-1,142,141,135,-1,143,136,141,-1,136,143,137,-1,141,142,143,-1,144,138,137,-1,144,139,138,-1,143,144,137,-1,145,140,146,-1,147,135,140,-1,135,147,142,-1,140,145,147,-1,148,80,139,-1,80,148,86,-1,139,144,148,-1,149,143,142,-1,149,144,143,-1,142,150,149,-1,151,148,144,-1,144,149,151,-1,153,147,145,-1,153,142,147,-1,145,152,153,-1,153,150,142,-1,154,86,148,-1,148,151,154,-1,76,157,60,-1,76,73,158,157,-1,60,162,58,-1,162,60,157,-1,166,58,162,-1,165,166,159,-1,166,162,157,158,159,-1,140,125,167,-1,124,168,125,-1,168,167,125,-1,124,169,168,-1,146,140,167,170,-1,168,170,167,-1,168,169,170,-1,146,170,171,-1,169,171,170,-1,98,117,106,-1]);
IndexedFaceSet110.creaseAngle = 1.59;
IndexedFaceSet110.solid = False;
let Coordinate111 = browser.currentScene.createNode("Coordinate");
Coordinate111.USE = "pointValues";
IndexedFaceSet110.coord = Coordinate111;

let TextureCoordinate112 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate112.point = new MFVec2f(new float[0.1611,-0.02056,0.9468,-0.02056,0.9739,0.9344,-0.137,1.094,0.1973,0.6424,0.2231,0.04876,0.5054,0.2466,0.5054,0.5929,0.8135,0.6424,0.6282,0.1972,0.7876,0.04876,0.5054,-0.05018,0.6282,-0.05018,0.5054,0.8403,0.7989,1.038,0.5054,1.038,0.8248,0.7908,0.186,0.7908,0.2118,1.038,0.6427,0.7908,-0.01977,0.5929,-0.03324,0.7908,1.044,0.7908,1.031,0.5929,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]);
IndexedFaceSet110.texCoord = TextureCoordinate112;

Shape107.geometry = IndexedFaceSet110;

Transform106.children = new MFNode();

Transform106.children[0] = Shape107;

Group105.children = new MFNode();

Group105.children[0] = Transform106;

let Transform113 = browser.currentScene.createNode("Transform");
Transform113.rotation = new SFRotation(new float[0,0,1,1.57]);
Transform113.scale = new SFVec3f(new float[2,1.5,1.5]);
Transform113.translation = new SFVec3f(new float[0.13,0.22,-0.1]);
let Transform114 = browser.currentScene.createNode("Transform");
Transform114.rotation = new SFRotation(new float[1,0,0,1.4]);
let Shape115 = browser.currentScene.createNode("Shape");
Shape115.DEF = "BCLSnorkelPad";
let Appearance116 = browser.currentScene.createNode("Appearance");
let Material117 = browser.currentScene.createNode("Material");
Material117.USE = "BCLColor";
Appearance116.material = Material117;

Shape115.appearance = Appearance116;

let Extrusion118 = browser.currentScene.createNode("Extrusion");
Extrusion118.crossSection = new MFVec2f(new float[0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013]);
Extrusion118.spine = new MFVec3f(new float[-0.03,0.01,0,-0.005,0.04,0,0,0.06,0,-0.01,0.075,0]);
Shape115.geometry = Extrusion118;

Transform114.children = new MFNode();

Transform114.children[0] = Shape115;

Transform113.children = new MFNode();

Transform113.children[0] = Transform114;

Group105.children[1] = Transform113;

let Transform119 = browser.currentScene.createNode("Transform");
Transform119.rotation = new SFRotation(new float[-1,0,0,0.8]);
Transform119.translation = new SFVec3f(new float[0.07,0.08,0.125]);
let Shape120 = browser.currentScene.createNode("Shape");
let Appearance121 = browser.currentScene.createNode("Appearance");
let Material122 = browser.currentScene.createNode("Material");
Material122.DEF = "BCLSnorkel";
Material122.diffuseColor = new SFColor(new float[0.25,0.25,0.25]);
Material122.shininess = 0.5;
Material122.transparency = 0.1;
Appearance121.material = Material122;

Shape120.appearance = Appearance121;

let Extrusion123 = browser.currentScene.createNode("Extrusion");
Extrusion123.crossSection = new MFVec2f(new float[0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013]);
Extrusion123.scale = new MFVec2f(new float[0.8,0.8,1,1]);
Extrusion123.spine = new MFVec3f(new float[0.03,0.03,-0.05,0.05,0.2,0]);
Shape120.geometry = Extrusion123;

Transform119.children = new MFNode();

Transform119.children[0] = Shape120;

Group105.children[2] = Transform119;

let Group124 = browser.currentScene.createNode("Group");
Group124.DEF = "buckle";
let Transform125 = browser.currentScene.createNode("Transform");
Transform125.rotation = new SFRotation(new float[-1,0,0,0.68]);
Transform125.translation = new SFVec3f(new float[-0.08,0.1,0.029]);
let Shape126 = browser.currentScene.createNode("Shape");
let Appearance127 = browser.currentScene.createNode("Appearance");
Appearance127.DEF = "buckleHolder";
let Material128 = browser.currentScene.createNode("Material");
Material128.diffuseColor = new SFColor(new float[0.25,0.25,0.25]);
Appearance127.material = Material128;

Shape126.appearance = Appearance127;

let Box129 = browser.currentScene.createNode("Box");
Box129.size = new SFVec3f(new float[0.03,0.03,0.005]);
Shape126.geometry = Box129;

Transform125.children = new MFNode();

Transform125.children[0] = Shape126;

Group124.children = new MFNode();

Group124.children[0] = Transform125;

let Transform130 = browser.currentScene.createNode("Transform");
Transform130.rotation = new SFRotation(new float[-1,0,0,0.68]);
Transform130.translation = new SFVec3f(new float[0.03,0.1,0.027]);
let Shape131 = browser.currentScene.createNode("Shape");
let Appearance132 = browser.currentScene.createNode("Appearance");
Appearance132.USE = "buckleHolder";
Shape131.appearance = Appearance132;

let Box133 = browser.currentScene.createNode("Box");
Box133.size = new SFVec3f(new float[0.15,0.03,0.001]);
Shape131.geometry = Box133;

Transform130.children = new MFNode();

Transform130.children[0] = Shape131;

Group124.children[1] = Transform130;

let Transform134 = browser.currentScene.createNode("Transform");
Transform134.rotation = new SFRotation(new float[-1,0,0,0.68]);
Transform134.translation = new SFVec3f(new float[-0.045,0.1,0.028]);
let Shape135 = browser.currentScene.createNode("Shape");
let Appearance136 = browser.currentScene.createNode("Appearance");
Appearance136.DEF = "pin";
let Material137 = browser.currentScene.createNode("Material");
Appearance136.material = Material137;

Shape135.appearance = Appearance136;

let Box138 = browser.currentScene.createNode("Box");
Box138.size = new SFVec3f(new float[0.02,0.028,0.005]);
Shape135.geometry = Box138;

Transform134.children = new MFNode();

Transform134.children[0] = Shape135;

Group124.children[2] = Transform134;

let Transform139 = browser.currentScene.createNode("Transform");
Transform139.rotation = new SFRotation(new float[0,0,1,1.57]);
Transform139.translation = new SFVec3f(new float[-0.06,0.1,0.029]);
let Shape140 = browser.currentScene.createNode("Shape");
let Appearance141 = browser.currentScene.createNode("Appearance");
Appearance141.USE = "pin";
Shape140.appearance = Appearance141;

let Cylinder142 = browser.currentScene.createNode("Cylinder");
Cylinder142.height = 0.02;
Cylinder142.radius = 0.0024;
Shape140.geometry = Cylinder142;

Transform139.children = new MFNode();

Transform139.children[0] = Shape140;

Group124.children[3] = Transform139;

let Transform143 = browser.currentScene.createNode("Transform");
Transform143.rotation = new SFRotation(new float[0,0,1,1.57]);
Transform143.translation = new SFVec3f(new float[-0.06,0.109,0.0217]);
let Shape144 = browser.currentScene.createNode("Shape");
let Appearance145 = browser.currentScene.createNode("Appearance");
Appearance145.USE = "pin";
Shape144.appearance = Appearance145;

let Cylinder146 = browser.currentScene.createNode("Cylinder");
Cylinder146.height = 0.02;
Cylinder146.radius = 0.0024;
Shape144.geometry = Cylinder146;

Transform143.children = new MFNode();

Transform143.children[0] = Shape144;

Group124.children[4] = Transform143;

let Transform147 = browser.currentScene.createNode("Transform");
Transform147.rotation = new SFRotation(new float[0,0,1,1.57]);
Transform147.translation = new SFVec3f(new float[-0.06,0.091,0.036]);
let Shape148 = browser.currentScene.createNode("Shape");
let Appearance149 = browser.currentScene.createNode("Appearance");
Appearance149.USE = "pin";
Shape148.appearance = Appearance149;

let Cylinder150 = browser.currentScene.createNode("Cylinder");
Cylinder150.height = 0.02;
Cylinder150.radius = 0.0024;
Shape148.geometry = Cylinder150;

Transform147.children = new MFNode();

Transform147.children[0] = Shape148;

Group124.children[5] = Transform147;

Group105.children[3] = Group124;

let Group151 = browser.currentScene.createNode("Group");
Group151.DEF = "buckleBelt";
let Transform152 = browser.currentScene.createNode("Transform");
Transform152.rotation = new SFRotation(new float[0,1,0,-0.68]);
Transform152.translation = new SFVec3f(new float[-0.07,-0.12,0.038]);
let Shape153 = browser.currentScene.createNode("Shape");
let Appearance154 = browser.currentScene.createNode("Appearance");
Appearance154.USE = "buckleHolder";
Shape153.appearance = Appearance154;

let Box155 = browser.currentScene.createNode("Box");
Box155.size = new SFVec3f(new float[0.04,0.1,0.005]);
Shape153.geometry = Box155;

Transform152.children = new MFNode();

Transform152.children[0] = Shape153;

Group151.children = new MFNode();

Group151.children[0] = Transform152;

let Transform156 = browser.currentScene.createNode("Transform");
Transform156.translation = new SFVec3f(new float[0.005,-0.12,0.053]);
let Shape157 = browser.currentScene.createNode("Shape");
let Appearance158 = browser.currentScene.createNode("Appearance");
Appearance158.USE = "buckleHolder";
Shape157.appearance = Appearance158;

let Box159 = browser.currentScene.createNode("Box");
Box159.size = new SFVec3f(new float[0.12,0.11,0.001]);
Shape157.geometry = Box159;

Transform156.children = new MFNode();

Transform156.children[0] = Shape157;

Group151.children[1] = Transform156;

let Transform160 = browser.currentScene.createNode("Transform");
Transform160.rotation = new SFRotation(new float[0,1,0,0.68]);
Transform160.translation = new SFVec3f(new float[0.075,-0.12,0.038]);
let Shape161 = browser.currentScene.createNode("Shape");
let Appearance162 = browser.currentScene.createNode("Appearance");
Appearance162.USE = "buckleHolder";
Shape161.appearance = Appearance162;

let Box163 = browser.currentScene.createNode("Box");
Box163.size = new SFVec3f(new float[0.04,0.1,0.005]);
Shape161.geometry = Box163;

Transform160.children = new MFNode();

Transform160.children[0] = Shape161;

Group151.children[2] = Transform160;

Group105.children[4] = Group151;

Transform104.children = new MFNode();

Transform104.children[0] = Group105;

HAnimSegment95.children[1] = Transform104;

let Transform164 = browser.currentScene.createNode("Transform");
Transform164.DEF = "ScubaTank";
Transform164.rotation = new SFRotation(new float[0,1,0,3.14]);
Transform164.scale = new SFVec3f(new float[0.8,0.8,0.8]);
Transform164.translation = new SFVec3f(new float[-0.00405,1.07,-0.0275]);
let Inline165 = browser.currentScene.createNode("Inline");
Inline165.url = new MFString(new java.lang.String["ScubaTank.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/ScubaTank.x3d","ScubaTank.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/ScubaTank.wrl"]);
Transform164.children = new MFNode();

Transform164.children[0] = Inline165;

HAnimSegment95.children[2] = Transform164;

HAnimJoint94.children = new MFNode();

HAnimJoint94.children[0] = HAnimSegment95;

let HAnimJoint166 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint166.name = "l_shoulder";
HAnimJoint166.DEF = "hanim_l_shoulder";
HAnimJoint166.center = new SFVec3f(new float[0.167,1.36,-0.0518]);
HAnimJoint166.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint166.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment167 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment167.name = "l_upperarm";
HAnimSegment167.DEF = "hanim_l_upperarm";
let Transform168 = browser.currentScene.createNode("Transform");
Transform168.DEF = "l_upperarm_adjust";
Transform168.center = new SFVec3f(new float[0.182,1.22,-0.047]);
Transform168.rotation = new SFRotation(new float[1,0,0,0.119]);
Transform168.translation = new SFVec3f(new float[0.167,1.36,-0.0518]);
let Shape169 = browser.currentScene.createNode("Shape");
let Appearance170 = browser.currentScene.createNode("Appearance");
let Material171 = browser.currentScene.createNode("Material");
Material171.USE = "WetShirtColor";
Appearance170.material = Material171;

Shape169.appearance = Appearance170;

let IndexedFaceSet172 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet172.coordIndex = new MFInt32(new int[2,1,0,-1,2,3,1,-1,2,4,3,-1,2,0,5,-1,6,5,0,-1,7,2,5,-1,8,4,2,-1,8,3,4,-1,9,1,3,-1,10,0,1,-1,0,10,6,-1,1,9,10,-1,3,8,9,-1,2,7,8,-1,5,6,7,-1,11,7,6,-1,14,9,8,-1,15,10,9,-1,11,6,10,-1,10,15,11,-1,9,14,15,-1,8,13,14,-1,8,16,13,-1,7,11,12,-1,21,15,14,-1,15,17,11,-1,15,21,17,-1,16,19,13,-1,13,19,20,-1,21,14,20,-1,14,13,20,-1,12,17,18,-1,12,11,17,-1,12,18,16,-1,18,19,16,-1,12,16,7,-1,16,8,7,-1,19,18,17,-1,20,19,21,-1,19,17,21,-1]);
IndexedFaceSet172.creaseAngle = 1.65;
let Coordinate173 = browser.currentScene.createNode("Coordinate");
Coordinate173.point = new MFVec3f(new float[0.174,1.37,-0.0625,0.185,1.38,-0.0395,0.156,1.39,-0.0464,0.174,1.37,-0.0158,0.154,1.37,-0.0185,0.157,1.38,-0.0733,0.182,1.33,-0.0728,0.151,1.33,-0.0937,0.15,1.34,-0.000787,0.185,1.33,-0.00025,0.201,1.33,-0.0411,0.189,1.26,-0.0808,0.155,1.26,-0.0867,0.151,1.26,-0.000789,0.19,1.26,-0.00401,0.209,1.26,-0.0427,0.141,1.26,-0.0421,0.203,1.08,-0.0744,0.162,1.05,-0.0561,0.169,1.08,-0.00885,0.208,1.07,-0.00133,0.221,1.08,-0.0352]);
IndexedFaceSet172.coord = Coordinate173;

Shape169.geometry = IndexedFaceSet172;

Transform168.children = new MFNode();

Transform168.children[0] = Shape169;

HAnimSegment167.children = new MFNode();

HAnimSegment167.children[0] = Transform168;

HAnimJoint166.children = new MFNode();

HAnimJoint166.children[0] = HAnimSegment167;

let HAnimJoint174 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint174.name = "l_elbow";
HAnimJoint174.DEF = "hanim_l_elbow";
HAnimJoint174.center = new SFVec3f(new float[0.196,1.07,-0.0518]);
HAnimJoint174.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint174.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment175 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment175.name = "l_forearm";
HAnimSegment175.DEF = "hanim_l_forearm";
let Transform176 = browser.currentScene.createNode("Transform");
Transform176.DEF = "l_forearm_adjust";
Transform176.center = new SFVec3f(new float[0.198,0.961,-0.0405]);
Transform176.rotation = new SFRotation(new float[-1,0,0,0.1]);
Transform176.translation = new SFVec3f(new float[0.196,1.07,-0.0518]);
let Shape177 = browser.currentScene.createNode("Shape");
let Appearance178 = browser.currentScene.createNode("Appearance");
let Material179 = browser.currentScene.createNode("Material");
Material179.USE = "WetShirtColor";
Appearance178.material = Material179;

Shape177.appearance = Appearance178;

let IndexedFaceSet180 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet180.coordIndex = new MFInt32(new int[2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,0,6,-1,7,6,0,-1,8,5,6,-1,9,4,5,-1,9,3,4,-1,10,1,3,-1,11,0,1,-1,0,11,7,-1,1,10,11,-1,3,9,10,-1,5,12,9,-1,5,8,12,-1,6,7,8,-1,17,16,15,-1,14,17,15,-1,14,18,17,-1,13,18,14,-1,16,17,10,-1,16,10,9,-1,15,16,9,-1,15,9,12,-1,18,13,7,-1,18,7,11,-1,13,14,8,-1,13,8,7,-1,14,15,8,-1,15,12,8,-1,17,18,10,-1,18,11,10,-1]);
IndexedFaceSet180.creaseAngle = 1.75;
let Coordinate181 = browser.currentScene.createNode("Coordinate");
Coordinate181.point = new MFVec3f(new float[0.177,1.09,-0.0609,0.202,1.1,-0.0566,0.189,1.1,-0.0395,0.213,1.1,-0.025,0.203,1.1,-0.0158,0.182,1.09,-0.00563,0.167,1.09,-0.0325,0.176,1.08,-0.0781,0.16,1.06,-0.0373,0.214,1.07,-0.00402,0.228,1.07,-0.0319,0.208,1.08,-0.0765,0.179,1.07,-0.00294,0.21,0.818,-0.0615,0.201,0.82,-0.0405,0.205,0.819,-0.00832,0.224,0.818,-0.00778,0.237,0.82,-0.0282,0.231,0.819,-0.0609]);
IndexedFaceSet180.coord = Coordinate181;

Shape177.geometry = IndexedFaceSet180;

Transform176.children = new MFNode();

Transform176.children[0] = Shape177;

HAnimSegment175.children = new MFNode();

HAnimSegment175.children[0] = Transform176;

HAnimJoint174.children = new MFNode();

HAnimJoint174.children[0] = HAnimSegment175;

let HAnimJoint182 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint182.name = "l_wrist";
HAnimJoint182.DEF = "hanim_l_wrist";
HAnimJoint182.center = new SFVec3f(new float[0.213,0.811,-0.0338]);
HAnimJoint182.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint182.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment183 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment183.name = "l_hand";
HAnimSegment183.DEF = "hanim_l_hand";
let Transform184 = browser.currentScene.createNode("Transform");
Transform184.DEF = "l_hand_adjust";
Transform184.center = new SFVec3f(new float[0.213,0.811,-0.0338]);
Transform184.rotation = new SFRotation(new float[-0.06361,-0.9967,0.04988,1.333]);
Transform184.translation = new SFVec3f(new float[0.213,0.811,-0.0338]);
let Shape185 = browser.currentScene.createNode("Shape");
let Appearance186 = browser.currentScene.createNode("Appearance");
let Material187 = browser.currentScene.createNode("Material");
Material187.DEF = "Skin_Color";
Material187.ambientIntensity = 0.25;
Material187.diffuseColor = new SFColor(new float[0.749,0.601,0.462]);
Appearance186.material = Material187;

Shape185.appearance = Appearance186;

let IndexedFaceSet188 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet188.coordIndex = new MFInt32(new int[2,1,0,-1,5,4,3,-1,3,7,6,-1,2,3,6,-1,7,9,8,-1,6,7,8,-1,9,11,10,-1,8,9,10,-1,11,13,12,-1,10,11,12,-1,13,15,14,-1,12,13,14,-1,15,17,16,-1,14,15,16,-1,17,19,18,-1,16,17,18,-1,19,21,20,-1,18,19,20,-1,31,4,1,-1,4,5,0,-1,1,4,0,-1,5,3,2,-1,0,5,2,-1,26,25,24,-1,26,24,23,-1,27,26,23,-1,28,27,23,-1,28,23,22,-1,29,28,22,-1,29,22,21,-1,30,29,21,-1,15,13,11,-1,17,15,11,-1,19,17,11,-1,19,11,9,-1,31,19,9,-1,31,9,7,-1,4,31,7,-1,4,7,3,-1,30,21,19,-1,31,30,19,-1,12,14,16,-1,10,12,16,-1,10,16,18,-1,8,10,18,-1,6,8,1,-1,2,6,1,-1,39,38,37,-1,37,38,40,-1,37,40,36,-1,36,40,41,-1,36,41,35,-1,35,41,42,-1,35,42,34,-1,34,42,43,-1,34,43,33,-1,33,43,44,-1,33,44,32,-1,20,32,44,-1,20,44,45,-1,20,45,46,-1,47,8,18,-1,47,18,20,-1,47,20,46,-1,8,47,1,-1,22,33,32,-1,23,35,34,-1,23,36,35,-1,37,24,25,-1,40,38,27,-1,29,43,42,-1,45,44,30,-1,47,31,1,-1,47,46,31,-1,29,30,43,-1,30,44,43,-1,45,31,46,-1,45,30,31,-1,28,29,41,-1,29,42,41,-1,28,40,27,-1,28,41,40,-1,26,27,39,-1,27,38,39,-1,25,39,37,-1,25,26,39,-1,24,36,23,-1,24,37,36,-1,23,34,22,-1,34,33,22,-1,22,32,21,-1,32,20,21,-1]);
IndexedFaceSet188.creaseAngle = 1.48;
let Coordinate189 = browser.currentScene.createNode("Coordinate");
Coordinate189.point = new MFVec3f(new float[0.211,0.828,-0.0434,0.194,0.81,-0.0445,0.237,0.82,-0.0425,0.236,0.82,-0.0237,0.194,0.81,-0.0254,0.21,0.828,-0.0247,0.252,0.801,-0.0424,0.252,0.801,-0.0231,0.269,0.765,-0.0426,0.268,0.765,-0.0225,0.273,0.732,-0.0395,0.272,0.732,-0.0223,0.27,0.704,-0.0342,0.27,0.704,-0.0224,0.262,0.703,-0.0345,0.261,0.703,-0.0227,0.256,0.717,-0.0389,0.256,0.717,-0.023,0.255,0.738,-0.0408,0.255,0.738,-0.023,0.251,0.734,-0.0406,0.251,0.734,-0.0232,0.251,0.692,-0.0232,0.248,0.657,-0.0233,0.24,0.645,-0.0236,0.226,0.637,-0.0241,0.213,0.639,-0.0246,0.197,0.652,-0.0253,0.188,0.669,-0.0256,0.184,0.697,-0.0258,0.183,0.73,-0.0258,0.187,0.77,-0.0257,0.244,0.696,-0.0375,0.244,0.692,-0.0372,0.242,0.661,-0.0345,0.241,0.658,-0.0343,0.241,0.656,-0.0341,0.231,0.646,-0.0336,0.206,0.65,-0.0349,0.218,0.644,-0.034,0.205,0.652,-0.0352,0.198,0.667,-0.0367,0.195,0.691,-0.039,0.194,0.696,-0.0395,0.193,0.725,-0.042,0.193,0.731,-0.0425,0.197,0.765,-0.0449,0.197,0.77,-0.0453]);
IndexedFaceSet188.coord = Coordinate189;

Shape185.geometry = IndexedFaceSet188;

Transform184.children = new MFNode();

Transform184.children[0] = Shape185;

HAnimSegment183.children = new MFNode();

HAnimSegment183.children[0] = Transform184;

HAnimJoint182.children = new MFNode();

HAnimJoint182.children[0] = HAnimSegment183;

HAnimJoint174.children[1] = HAnimJoint182;

HAnimJoint166.children[1] = HAnimJoint174;

HAnimJoint94.children[1] = HAnimJoint166;

let HAnimJoint190 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint190.name = "r_shoulder";
HAnimJoint190.DEF = "hanim_r_shoulder";
HAnimJoint190.center = new SFVec3f(new float[-0.167,1.36,-0.0458]);
HAnimJoint190.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint190.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment191 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment191.name = "r_upperarm";
HAnimSegment191.DEF = "hanim_r_upperarm";
let Transform192 = browser.currentScene.createNode("Transform");
Transform192.DEF = "r_upperarm_adjust";
Transform192.center = new SFVec3f(new float[-0.182,1.22,-0.047]);
Transform192.rotation = new SFRotation(new float[1,0,0,0.0836]);
Transform192.translation = new SFVec3f(new float[-0.167,1.36,-0.0458]);
let Shape193 = browser.currentScene.createNode("Shape");
let Appearance194 = browser.currentScene.createNode("Appearance");
let Material195 = browser.currentScene.createNode("Material");
Material195.USE = "WetShirtColor";
Appearance194.material = Material195;

Shape193.appearance = Appearance194;

let IndexedFaceSet196 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet196.coordIndex = new MFInt32(new int[14,10,20,-1,10,13,20,-1,13,22,20,-1,19,14,20,-1,14,19,12,-1,19,20,24,-1,20,22,25,-1,22,13,25,-1,13,10,11,-1,10,14,5,-1,12,5,14,-1,5,11,10,-1,11,25,13,-1,25,24,20,-1,24,12,19,-1,12,24,9,-1,25,11,8,-1,11,5,2,-1,5,12,9,-1,9,2,5,-1,2,8,11,-1,8,23,25,-1,23,27,25,-1,21,9,24,-1,9,21,7,-1,27,23,18,-1,23,8,18,-1,8,2,6,-1,2,9,7,-1,7,1,2,-1,1,6,2,-1,6,18,8,-1,18,26,27,-1,16,7,21,-1,7,16,4,-1,16,26,17,-1,26,18,15,-1,18,6,3,-1,6,1,0,-1,1,7,0,-1,4,0,7,-1,0,3,6,-1,3,15,18,-1,15,17,26,-1,17,4,16,-1,3,0,15,-1,15,0,4,-1,15,4,17,-1,25,27,24,-1,27,21,24,-1,27,26,21,-1,26,16,21,-1]);
IndexedFaceSet196.creaseAngle = 1.53;
let Coordinate197 = browser.currentScene.createNode("Coordinate");
Coordinate197.point = new MFVec3f(new float[-0.221,1.08,-0.0352,-0.214,1.14,-0.0405,-0.209,1.26,-0.0427,-0.208,1.07,-0.00133,-0.203,1.08,-0.0744,-0.201,1.33,-0.0411,-0.198,1.14,-0.0024,-0.198,1.13,-0.076,-0.19,1.26,-0.00401,-0.189,1.26,-0.0808,-0.185,1.38,-0.0395,-0.185,1.33,-0.00025,-0.182,1.33,-0.0728,-0.174,1.37,-0.0158,-0.174,1.37,-0.0625,-0.169,1.08,-0.00885,-0.167,1.13,-0.0744,-0.162,1.05,-0.0561,-0.16,1.13,-0.000793,-0.157,1.38,-0.0733,-0.156,1.39,-0.0464,-0.155,1.26,-0.0867,-0.154,1.37,-0.0185,-0.151,1.26,-0.000789,-0.151,1.33,-0.0937,-0.15,1.34,-0.000787,-0.15,1.13,-0.0411,-0.141,1.26,-0.0421]);
IndexedFaceSet196.coord = Coordinate197;

Shape193.geometry = IndexedFaceSet196;

Transform192.children = new MFNode();

Transform192.children[0] = Shape193;

HAnimSegment191.children = new MFNode();

HAnimSegment191.children[0] = Transform192;

HAnimJoint190.children = new MFNode();

HAnimJoint190.children[0] = HAnimSegment191;

let HAnimJoint198 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint198.name = "r_elbow";
HAnimJoint198.DEF = "hanim_r_elbow";
HAnimJoint198.center = new SFVec3f(new float[-0.192,1.07,-0.0498]);
HAnimJoint198.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint198.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment199 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment199.name = "r_forearm";
HAnimSegment199.DEF = "hanim_r_forearm";
let Transform200 = browser.currentScene.createNode("Transform");
Transform200.DEF = "r_forearm_adjust";
Transform200.center = new SFVec3f(new float[-0.198,0.961,-0.0397]);
Transform200.rotation = new SFRotation(new float[-1,0,0,0.1254]);
Transform200.translation = new SFVec3f(new float[-0.192,1.07,-0.0498]);
let Shape201 = browser.currentScene.createNode("Shape");
let Appearance202 = browser.currentScene.createNode("Appearance");
let Material203 = browser.currentScene.createNode("Material");
Material203.USE = "WetShirtColor";
Appearance202.material = Material203;

Shape201.appearance = Appearance202;

let IndexedFaceSet204 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet204.coordIndex = new MFInt32(new int[20,13,15,-1,13,8,15,-1,8,12,15,-1,12,18,15,-1,18,22,15,-1,22,20,15,-1,20,22,21,-1,22,18,24,-1,18,12,7,-1,12,8,7,-1,8,13,3,-1,13,20,10,-1,21,10,20,-1,10,3,13,-1,3,7,8,-1,7,19,18,-1,19,24,18,-1,24,21,22,-1,21,24,23,-1,24,19,16,-1,19,7,6,-1,7,3,1,-1,3,10,5,-1,10,21,17,-1,17,5,10,-1,5,1,3,-1,1,6,7,-1,6,16,19,-1,16,23,24,-1,23,17,21,-1,1,5,2,-1,5,17,9,-1,9,2,5,-1,1,4,6,-1,4,16,6,-1,23,9,17,-1,9,23,14,-1,23,16,11,-1,4,11,16,-1,11,14,23,-1,11,4,0,-1,11,0,14,-1,0,2,14,-1,14,2,9,-1,2,0,1,-1,0,4,1,-1]);
IndexedFaceSet204.creaseAngle = 1.73;
let Coordinate205 = browser.currentScene.createNode("Coordinate");
Coordinate205.point = new MFVec3f(new float[-0.237,0.82,-0.0282,-0.235,1.02,-0.033,-0.231,0.819,-0.0609,-0.228,1.07,-0.0319,-0.224,0.818,-0.00778,-0.221,1.01,-0.0744,-0.218,1.01,-0.00133,-0.214,1.07,-0.00402,-0.213,1.1,-0.025,-0.21,0.818,-0.0615,-0.208,1.08,-0.0765,-0.205,0.819,-0.00832,-0.203,1.1,-0.0158,-0.202,1.1,-0.0566,-0.201,0.82,-0.0405,-0.189,1.1,-0.0395,-0.183,1.01,-0.00831,-0.183,1.01,-0.0781,-0.182,1.09,-0.00563,-0.179,1.07,-0.00294,-0.177,1.09,-0.0609,-0.176,1.08,-0.0781,-0.167,1.09,-0.0325,-0.166,1,-0.0405,-0.16,1.06,-0.0373]);
IndexedFaceSet204.coord = Coordinate205;

Shape201.geometry = IndexedFaceSet204;

Transform200.children = new MFNode();

Transform200.children[0] = Shape201;

HAnimSegment199.children = new MFNode();

HAnimSegment199.children[0] = Transform200;

HAnimJoint198.children = new MFNode();

HAnimJoint198.children[0] = HAnimSegment199;

let HAnimJoint206 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint206.name = "r_wrist";
HAnimJoint206.DEF = "hanim_r_wrist";
HAnimJoint206.center = new SFVec3f(new float[-0.217,0.811,-0.0338]);
HAnimJoint206.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint206.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment207 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment207.name = "r_hand";
HAnimSegment207.DEF = "hanim_r_hand";
let Transform208 = browser.currentScene.createNode("Transform");
Transform208.DEF = "r_hand_adjust";
Transform208.center = new SFVec3f(new float[-0.217,0.811,-0.0338]);
Transform208.rotation = new SFRotation(new float[-0.09024,0.994,-0.0624,1.216]);
let Shape209 = browser.currentScene.createNode("Shape");
let Appearance210 = browser.currentScene.createNode("Appearance");
let Material211 = browser.currentScene.createNode("Material");
Material211.USE = "Skin_Color";
Appearance210.material = Material211;

Shape209.appearance = Appearance210;

let IndexedFaceSet212 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet212.coordIndex = new MFInt32(new int[10,9,0,-1,11,30,31,-1,1,12,11,-1,1,11,0,-1,2,13,12,-1,2,12,1,-1,3,14,13,-1,3,13,2,-1,4,15,14,-1,4,14,3,-1,5,16,15,-1,5,15,4,-1,6,17,16,-1,6,16,5,-1,7,18,17,-1,7,17,6,-1,8,19,18,-1,8,18,7,-1,10,31,30,-1,10,30,9,-1,0,11,31,-1,0,31,10,-1,22,23,24,-1,21,22,24,-1,21,24,25,-1,21,25,26,-1,20,21,26,-1,20,26,27,-1,19,20,27,-1,19,27,28,-1,14,15,16,-1,14,16,17,-1,14,17,18,-1,13,14,18,-1,13,18,29,-1,12,13,29,-1,12,29,30,-1,11,12,30,-1,18,19,28,-1,18,28,29,-1,6,5,4,-1,6,4,3,-1,7,6,3,-1,7,3,2,-1,9,2,1,-1,9,1,0,-1,32,38,33,-1,33,38,39,-1,33,39,34,-1,34,39,40,-1,34,40,35,-1,35,40,41,-1,35,41,36,-1,36,41,42,-1,36,42,37,-1,37,42,43,-1,37,43,44,-1,44,43,8,-1,44,8,45,-1,45,8,46,-1,46,8,7,-1,46,7,2,-1,46,2,47,-1,9,47,2,-1,25,34,35,-1,25,33,34,-1,25,24,33,-1,24,32,33,-1,32,24,23,-1,40,39,21,-1,41,40,21,-1,43,19,8,-1,43,20,19,-1,43,42,20,-1,21,20,41,-1,20,42,41,-1,38,22,39,-1,22,21,39,-1,32,23,38,-1,23,22,38,-1,26,25,35,-1,27,36,37,-1,27,37,28,-1,37,44,28,-1,26,35,27,-1,35,36,27,-1,28,44,45,-1,29,46,47,-1,29,9,30,-1,29,47,9,-1,28,45,29,-1,45,46,29,-1]);
IndexedFaceSet212.creaseAngle = 1.57;
let Coordinate213 = browser.currentScene.createNode("Coordinate");
Coordinate213.point = new MFVec3f(new float[-0.237,0.82,-0.0425,-0.252,0.801,-0.0424,-0.269,0.765,-0.0426,-0.273,0.732,-0.0395,-0.27,0.704,-0.0342,-0.262,0.703,-0.0345,-0.256,0.717,-0.0389,-0.255,0.738,-0.0408,-0.251,0.734,-0.0406,-0.194,0.81,-0.0445,-0.211,0.828,-0.0434,-0.236,0.82,-0.0237,-0.252,0.801,-0.0231,-0.268,0.765,-0.0225,-0.272,0.732,-0.0223,-0.27,0.704,-0.0224,-0.261,0.703,-0.0227,-0.256,0.717,-0.023,-0.255,0.738,-0.023,-0.251,0.734,-0.0232,-0.251,0.692,-0.0232,-0.248,0.657,-0.0233,-0.24,0.645,-0.0236,-0.226,0.637,-0.0241,-0.213,0.639,-0.0246,-0.197,0.652,-0.0253,-0.188,0.669,-0.0256,-0.184,0.697,-0.0258,-0.183,0.73,-0.0258,-0.187,0.77,-0.0257,-0.194,0.81,-0.0254,-0.21,0.828,-0.0247,-0.221,0.641,-0.0336,-0.21,0.65,-0.0348,-0.206,0.652,-0.0352,-0.198,0.667,-0.0368,-0.193,0.692,-0.0392,-0.192,0.696,-0.0396,-0.231,0.646,-0.0336,-0.238,0.656,-0.0342,-0.24,0.658,-0.0344,-0.24,0.662,-0.0347,-0.243,0.692,-0.0372,-0.243,0.696,-0.0376,-0.192,0.725,-0.0421,-0.192,0.73,-0.0426,-0.195,0.766,-0.0451,-0.196,0.77,-0.0454]);
IndexedFaceSet212.coord = Coordinate213;

Shape209.geometry = IndexedFaceSet212;

Transform208.children = new MFNode();

Transform208.children[0] = Shape209;

HAnimSegment207.children = new MFNode();

HAnimSegment207.children[0] = Transform208;

HAnimJoint206.children = new MFNode();

HAnimJoint206.children[0] = HAnimSegment207;

HAnimJoint198.children[1] = HAnimJoint206;

HAnimJoint190.children[1] = HAnimJoint198;

HAnimJoint94.children[2] = HAnimJoint190;

let HAnimJoint214 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint214.name = "vc4";
HAnimJoint214.DEF = "hanim_vc4";
HAnimJoint214.center = new SFVec3f(new float[0,1.43,-0.0458]);
HAnimJoint214.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint214.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment215 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment215.name = "c4";
HAnimSegment215.DEF = "hanim_c4";
let Shape216 = browser.currentScene.createNode("Shape");
let Appearance217 = browser.currentScene.createNode("Appearance");
let Material218 = browser.currentScene.createNode("Material");
Material218.USE = "WetShirtColor";
Appearance217.material = Material218;

Shape216.appearance = Appearance217;

let IndexedFaceSet219 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet219.DEF = "neck";
IndexedFaceSet219.coordIndex = new MFInt32(new int[6,5,2,-1,6,2,3,-1,5,4,1,-1,5,1,2,-1,4,7,0,-1,4,0,1,-1,11,10,9,-1,11,9,8,-1,10,13,12,-1,10,12,9,-1,13,15,14,-1,13,14,12,-1,6,3,11,-1,6,11,8,-1,7,14,15,-1,7,15,0,-1,2,10,11,-1,2,11,3,-1,2,1,13,-1,2,13,10,-1,1,0,15,-1,1,15,13,-1,9,5,6,-1,9,6,8,-1,9,12,4,-1,9,4,5,-1,12,14,7,-1,12,7,4,-1]);
IndexedFaceSet219.creaseAngle = 1.91;
let Coordinate220 = browser.currentScene.createNode("Coordinate");
Coordinate220.point = new MFVec3f(new float[0.0105,1.54,-0.1,0.0357,1.54,-0.0685,0.0382,1.55,-0.0474,0.0105,1.55,-0.0204,0.0373,1.4,-0.0593,0.0577,1.4,-0.0266,0.0158,1.4,0.00512,0.0132,1.41,-0.0824,-0.0158,1.4,0.00512,-0.0577,1.4,-0.0266,-0.0382,1.55,-0.0474,-0.0105,1.55,-0.0204,-0.0373,1.4,-0.0593,-0.0357,1.54,-0.0685,-0.0132,1.41,-0.0824,-0.0105,1.54,-0.1]);
IndexedFaceSet219.coord = Coordinate220;

Shape216.geometry = IndexedFaceSet219;

HAnimSegment215.children = new MFNode();

HAnimSegment215.children[0] = Shape216;

HAnimJoint214.children = new MFNode();

HAnimJoint214.children[0] = HAnimSegment215;

let HAnimJoint221 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint221.name = "skullbase";
HAnimJoint221.DEF = "hanim_skullbase";
HAnimJoint221.center = new SFVec3f(new float[0,1.54,-0.0409]);
HAnimJoint221.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint221.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment222 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment222.name = "skull";
HAnimSegment222.DEF = "hanim_skull";
let Shape223 = browser.currentScene.createNode("Shape");
let Appearance224 = browser.currentScene.createNode("Appearance");
let Material225 = browser.currentScene.createNode("Material");
Material225.USE = "Skin_Color";
Appearance224.material = Material225;

Shape223.appearance = Appearance224;

let IndexedFaceSet226 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet226.DEF = "headIFS";
IndexedFaceSet226.colorIndex = new MFInt32(new int[1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1]);
IndexedFaceSet226.coordIndex = new MFInt32(new int[48,87,58,-1,91,92,59,-1,59,92,88,-1,88,93,231,-1,232,86,233,-1,86,89,233,-1,89,57,56,-1,49,55,57,-1,102,86,96,-1,86,90,96,-1,97,95,96,-1,97,127,95,-1,41,96,154,-1,41,102,96,-1,99,102,41,-1,153,99,41,-1,102,40,86,-1,234,235,236,-1,87,237,58,-1,56,57,91,-1,87,234,237,-1,234,236,237,-1,89,49,57,-1,49,50,55,-1,40,89,86,-1,89,56,233,-1,232,90,86,-1,90,97,96,-1,92,93,88,-1,93,94,231,-1,232,231,94,-1,97,90,232,-1,96,42,154,-1,95,42,96,-1,53,46,45,-1,53,45,51,-1,53,51,92,-1,92,51,52,-1,92,52,93,-1,94,93,52,-1,94,52,4,-1,97,232,94,-1,54,47,46,-1,54,46,53,-1,55,47,54,-1,50,47,55,-1,34,33,50,-1,34,50,49,-1,35,34,49,-1,35,49,89,-1,35,89,40,-1,99,39,102,-1,39,35,40,-1,31,34,35,-1,31,35,32,-1,14,32,35,-1,14,35,39,-1,14,39,98,-1,137,38,153,-1,38,99,153,-1,38,98,99,-1,37,238,239,-1,11,238,37,-1,101,37,36,-1,241,141,242,-1,10,12,242,-1,12,13,14,-1,12,14,243,-1,13,15,32,-1,13,32,14,-1,15,16,31,-1,15,31,32,-1,2,70,10,-1,2,10,141,-1,70,69,12,-1,70,12,10,-1,69,68,13,-1,69,13,12,-1,68,67,15,-1,68,15,13,-1,67,66,16,-1,67,16,15,-1,98,39,99,-1,101,11,37,-1,100,101,36,-1,36,244,240,-1,141,10,242,-1,12,243,242,-1,36,37,239,-1,36,239,244,-1,57,55,91,-1,55,54,91,-1,39,40,102,-1,123,103,120,-1,114,122,104,-1,115,122,114,-1,208,105,115,-1,210,119,211,-1,210,106,119,-1,116,107,106,-1,107,108,117,-1,126,119,109,-1,126,110,119,-1,126,95,125,-1,95,127,125,-1,154,126,111,-1,126,109,111,-1,111,109,112,-1,111,112,153,-1,119,113,109,-1,207,213,214,-1,123,209,103,-1,213,212,214,-1,209,214,103,-1,209,207,214,-1,107,117,106,-1,108,118,117,-1,119,106,113,-1,210,116,106,-1,119,110,211,-1,126,125,110,-1,115,105,122,-1,208,124,105,-1,124,208,211,-1,211,110,125,-1,154,42,126,-1,126,42,95,-1,168,128,121,-1,170,168,121,-1,122,170,121,-1,172,170,122,-1,105,172,122,-1,172,105,124,-1,4,172,124,-1,124,211,125,-1,128,130,129,-1,121,128,129,-1,129,130,108,-1,108,130,118,-1,118,131,132,-1,117,118,132,-1,117,132,133,-1,106,117,133,-1,113,106,133,-1,109,152,112,-1,113,133,152,-1,133,132,134,-1,135,133,134,-1,133,135,136,-1,152,133,136,-1,148,152,136,-1,153,138,137,-1,153,112,138,-1,112,148,138,-1,219,217,139,-1,36,240,149,-1,139,217,140,-1,149,139,151,-1,36,149,100,-1,220,141,241,-1,220,150,142,-1,136,143,150,-1,221,136,150,-1,135,144,143,-1,136,135,143,-1,134,158,144,-1,135,134,144,-1,142,161,2,-1,141,142,2,-1,150,145,161,-1,142,150,161,-1,143,146,145,-1,150,143,145,-1,144,147,146,-1,143,144,146,-1,158,160,147,-1,144,158,147,-1,112,152,148,-1,139,140,151,-1,149,151,100,-1,240,218,149,-1,220,142,141,-1,220,221,150,-1,219,139,149,-1,218,219,149,-1,104,108,107,-1,104,129,108,-1,109,113,152,-1,153,41,111,-1,129,104,122,-1,129,122,121,-1,91,54,92,-1,54,53,92,-1,97,94,127,-1,127,94,4,-1,125,127,124,-1,127,4,124,-1,154,111,41,-1,31,30,33,-1,31,33,34,-1,16,17,30,-1,16,30,31,-1,66,65,17,-1,66,17,16,-1,2,73,156,-1,2,156,70,-1,156,72,66,-1,156,66,67,-1,156,67,68,-1,156,68,69,-1,156,69,70,-1,72,71,65,-1,72,65,66,-1,17,18,30,-1,45,44,51,-1,51,44,43,-1,51,43,52,-1,52,43,1,-1,52,1,4,-1,245,246,27,-1,245,27,3,-1,246,247,28,-1,246,28,27,-1,248,22,29,-1,248,29,28,-1,248,28,247,-1,27,26,0,-1,27,0,3,-1,27,28,25,-1,27,25,26,-1,29,24,25,-1,29,25,28,-1,22,23,24,-1,22,24,29,-1,249,250,22,-1,249,22,248,-1,250,60,23,-1,250,23,22,-1,17,254,18,-1,65,254,17,-1,71,64,65,-1,63,74,75,-1,63,75,61,-1,64,255,254,-1,75,62,61,-1,62,76,60,-1,76,77,23,-1,76,23,60,-1,77,24,23,-1,77,78,25,-1,77,25,24,-1,78,84,26,-1,78,26,25,-1,84,192,0,-1,84,0,26,-1,84,83,193,-1,84,193,192,-1,79,83,84,-1,79,84,78,-1,76,79,78,-1,76,78,77,-1,80,83,79,-1,80,204,83,-1,75,81,80,-1,81,85,204,-1,81,204,80,-1,74,81,75,-1,74,82,81,-1,82,5,85,-1,82,85,81,-1,155,8,71,-1,155,71,72,-1,8,6,64,-1,8,64,71,-1,6,7,255,-1,6,255,64,-1,7,9,256,-1,7,256,255,-1,9,257,256,-1,73,155,156,-1,155,72,156,-1,204,193,83,-1,64,254,65,-1,131,157,134,-1,132,131,134,-1,157,159,158,-1,134,157,158,-1,159,206,160,-1,158,159,160,-1,203,73,2,-1,161,203,2,-1,160,162,203,-1,147,160,203,-1,146,147,203,-1,145,146,203,-1,161,145,203,-1,206,163,162,-1,160,206,162,-1,157,164,159,-1,170,169,168,-1,171,169,170,-1,172,171,170,-1,1,171,172,-1,4,1,172,-1,173,227,245,-1,3,173,245,-1,174,226,227,-1,173,174,227,-1,176,175,215,-1,174,176,215,-1,226,174,215,-1,0,177,173,-1,3,0,173,-1,178,174,173,-1,177,178,173,-1,178,179,176,-1,174,178,176,-1,179,180,175,-1,176,179,175,-1,175,225,216,-1,215,175,216,-1,180,181,225,-1,175,180,225,-1,164,228,159,-1,159,228,206,-1,206,185,163,-1,187,186,184,-1,183,187,184,-1,228,229,185,-1,183,182,187,-1,181,188,182,-1,180,189,188,-1,181,180,188,-1,180,179,189,-1,178,190,189,-1,179,178,189,-1,177,191,190,-1,178,177,190,-1,0,192,191,-1,177,0,191,-1,193,205,191,-1,192,193,191,-1,191,205,194,-1,190,191,194,-1,190,194,188,-1,189,190,188,-1,194,205,195,-1,205,204,195,-1,195,196,187,-1,204,85,196,-1,195,204,196,-1,187,196,186,-1,196,197,186,-1,85,5,197,-1,196,85,197,-1,163,198,202,-1,162,163,202,-1,185,199,198,-1,163,185,198,-1,229,200,199,-1,185,229,199,-1,230,201,200,-1,229,230,200,-1,230,257,201,-1,203,202,73,-1,203,162,202,-1,205,193,204,-1,206,228,185,-1,198,8,155,-1,198,155,202,-1,155,73,202,-1,199,6,8,-1,199,8,198,-1,7,6,199,-1,7,199,200,-1,201,9,7,-1,201,7,200,-1,201,257,9,-1,188,194,195,-1,188,195,182,-1,195,187,182,-1,80,79,76,-1,80,62,75,-1,80,76,62,-1,47,50,33,-1,131,118,130,-1,20,21,47,-1,21,46,47,-1,20,33,19,-1,20,47,33,-1,33,30,19,-1,30,18,19,-1,62,60,251,-1,60,250,251,-1,252,61,251,-1,61,62,251,-1,252,63,61,-1,252,253,63,-1,166,130,167,-1,130,128,167,-1,166,131,130,-1,166,165,131,-1,165,157,131,-1,165,164,157,-1,224,181,182,-1,224,225,181,-1,224,183,223,-1,224,182,183,-1,183,184,223,-1,184,222,223,-1]);
let Coordinate227 = browser.currentScene.createNode("Coordinate");
Coordinate227.DEF = "Face";
Coordinate227.point = new MFVec3f(new float[0,1.708,-0.0435,0,1.655,0.04322,0,1.486,0.02335,0,1.694,0.007789,0,1.631,0.051,0,1.524,-0.102,0.04,1.51,-0.07278,0.04029,1.514,-0.08254,0.03528,1.502,-0.05013,0.03479,1.517,-0.09269,0.0116,1.494,0.03382,0.01946,1.52,0.03421,0.02204,1.494,0.0272,0.02734,1.498,0.02215,0.02788,1.528,0.03084,0.0338,1.503,0.0124,0.04008,1.509,0.002821,0.05122,1.518,-0.02784,0.05867,1.544,-0.03316,0.06433,1.563,-0.03678,0.06732,1.583,-0.03683,0.06769,1.617,-0.03436,0.06641,1.637,-0.03046,0.06818,1.637,-0.04285,0.06308,1.666,-0.04036,0.05305,1.685,-0.03987,0.03136,1.7,-0.0413,0.02919,1.688,0.0091,0.05272,1.674,-0.001657,0.06061,1.66,-0.0101,0.05254,1.541,-0.01363,0.04099,1.527,0.008832,0.03528,1.524,0.02097,0.05792,1.557,-0.004307,0.04413,1.539,0.0149,0.03746,1.539,0.02656,0.003407,1.524,0.04155,0.01481,1.526,0.03912,0.005112,1.532,0.04358,0.02438,1.542,0.03578,0.02636,1.55,0.03808,0.006135,1.55,0.0545,0,1.559,0.05502,0.02958,1.651,0.03965,0.04847,1.643,0.02895,0.05856,1.63,0.01803,0.06182,1.614,0.008199,0.06194,1.6,0.002668,0.01489,1.583,0.04109,0.05282,1.569,0.02821,0.05767,1.58,0.0184,0.04643,1.625,0.03705,0.0264,1.628,0.04807,0.0556,1.609,0.02579,0.05467,1.599,0.02153,0.05316,1.589,0.0207,0.03603,1.58,0.03536,0.04597,1.586,0.02904,0.02106,1.592,0.03748,0.03428,1.595,0.03294,0.06808,1.617,-0.06112,0.06714,1.564,-0.07003,0.06993,1.594,-0.08238,0.05324,1.536,-0.05922,0.04904,1.521,-0.05132,0.04758,1.514,-0.03107,0.03539,1.503,-0.00093,0.02999,1.498,0.006194,0.02308,1.492,0.01628,0.01772,1.488,0.02135,0.01378,1.488,0.02484,0.04349,1.512,-0.03987,0.02308,1.499,-0.02088,0,1.487,-0.018,0.04795,1.531,-0.08973,0.05739,1.555,-0.0982,0.06815,1.622,-0.107,0.06872,1.655,-0.08466,0.05233,1.678,-0.09642,0.05334,1.631,-0.1239,0.05011,1.581,-0.1193,0.04359,1.551,-0.1067,0.03839,1.528,-0.09652,0.03399,1.636,-0.1304,0.03224,1.685,-0.1024,0,1.557,-0.1126,0.01864,1.566,0.04105,0.0249,1.58,0.0387,0.02735,1.596,0.03552,0.04317,1.564,0.03643,0.01246,1.577,0.04276,0.04354,1.59,0.02822,0.04557,1.601,0.03652,0.0291,1.603,0.04274,0.01856,1.6,0.04349,0,1.579,0.04893,0.01064,1.558,0.04476,0.005501,1.578,0.04574,0.01405,1.531,0.04152,0.01037,1.544,0.04266,0,1.515,0.03836,0.00797,1.515,0.03774,0.01824,1.55,0.04063,-0.0249,1.58,0.0387,-0.04354,1.59,0.02822,-0.0291,1.603,0.04274,-0.04317,1.564,0.03643,-0.04597,1.586,0.02904,-0.05316,1.589,0.0207,-0.01824,1.55,0.04063,-0.01246,1.577,0.04276,-0.006135,1.55,0.0545,-0.01037,1.544,0.04266,-0.02636,1.55,0.03808,-0.03428,1.595,0.03294,-0.02735,1.596,0.03552,-0.03603,1.58,0.03536,-0.05282,1.569,0.02821,-0.05767,1.58,0.0184,-0.01864,1.566,0.04105,-0.01489,1.583,0.04109,-0.0556,1.609,0.02579,-0.04557,1.601,0.03652,-0.02106,1.592,0.03748,-0.01856,1.6,0.04349,-0.005501,1.578,0.04574,-0.01064,1.558,0.04476,0,1.592,0.04694,-0.06182,1.614,0.008199,-0.05467,1.599,0.02153,-0.06194,1.6,0.002668,-0.05792,1.557,-0.004307,-0.04413,1.539,0.0149,-0.03746,1.539,0.02656,-0.04099,1.527,0.008832,-0.03528,1.524,0.02097,-0.02788,1.528,0.03084,0,1.53,0.04236,-0.005112,1.532,0.04358,-0.01481,1.526,0.03912,-0.01946,1.52,0.03421,0,1.495,0.0348,-0.0116,1.494,0.03382,-0.02734,1.498,0.02215,-0.0338,1.503,0.0124,-0.01772,1.488,0.02135,-0.02308,1.492,0.01628,-0.02999,1.498,0.006194,-0.01405,1.531,0.04152,-0.003407,1.524,0.04155,-0.02204,1.494,0.0272,-0.00797,1.515,0.03774,-0.02438,1.542,0.03578,0,1.543,0.04432,0,1.555,0.05692,0.02295,1.492,-0.02694,0.007322,1.489,-0.01677,-0.05254,1.541,-0.01363,-0.04008,1.509,0.002821,-0.05122,1.518,-0.02784,-0.03539,1.503,-0.00093,-0.01378,1.488,0.02484,-0.02308,1.499,-0.02088,-0.04349,1.512,-0.03987,-0.05867,1.544,-0.03316,-0.06433,1.563,-0.03678,-0.06732,1.583,-0.03683,-0.06769,1.617,-0.03436,-0.05856,1.63,0.01803,-0.04847,1.643,0.02895,-0.04643,1.625,0.03705,-0.02958,1.651,0.03965,-0.0264,1.628,0.04807,-0.02919,1.688,0.0091,-0.05272,1.674,-0.001657,-0.06641,1.637,-0.03046,-0.06061,1.66,-0.0101,-0.03136,1.7,-0.0413,-0.05305,1.685,-0.03987,-0.06308,1.666,-0.04036,-0.06818,1.637,-0.04285,-0.06808,1.617,-0.06112,-0.06993,1.594,-0.08238,-0.06714,1.564,-0.07003,-0.05324,1.536,-0.05922,-0.04904,1.521,-0.05132,-0.04795,1.531,-0.08973,-0.05739,1.555,-0.0982,-0.06815,1.622,-0.107,-0.06872,1.655,-0.08466,-0.05233,1.678,-0.09642,-0.03224,1.685,-0.1024,0,1.69,-0.1047,0,1.64,-0.1342,-0.05334,1.631,-0.1239,-0.05011,1.581,-0.1193,-0.04359,1.551,-0.1067,-0.03839,1.528,-0.09652,-0.03528,1.502,-0.05013,-0.04,1.51,-0.07278,-0.04029,1.514,-0.08254,-0.03479,1.517,-0.09269,-0.02295,1.492,-0.02694,-0.007322,1.489,-0.01677,0,1.588,-0.1329,-0.03399,1.636,-0.1304,-0.04758,1.514,-0.03107,-0.03428,1.595,0.03294,-0.02106,1.592,0.03748,-0.02735,1.596,0.03552,-0.0249,1.58,0.0387,-0.01489,1.583,0.04109,-0.04597,1.586,0.02904,-0.04354,1.59,0.02822,-0.03603,1.58,0.03536,-0.05856,1.63,0.01803,-0.06182,1.614,0.008199,-0.02788,1.528,0.03084,-0.005112,1.532,0.04358,-0.01405,1.531,0.04152,-0.00797,1.515,0.03774,-0.01946,1.52,0.03421,-0.05867,1.544,-0.03316,-0.06433,1.563,-0.03678,-0.06732,1.583,-0.03683,-0.06769,1.617,-0.03436,-0.04847,1.643,0.02895,-0.02958,1.651,0.03965,-0.05324,1.536,-0.05922,-0.04795,1.531,-0.08973,-0.03839,1.528,-0.09652,0.02106,1.592,0.03748,0.01489,1.583,0.04109,0.0249,1.58,0.0387,0.03603,1.58,0.03536,0.04354,1.59,0.02822,0.03428,1.595,0.03294,0.02735,1.596,0.03552,0.02788,1.528,0.03084,0.01405,1.531,0.04152,0,1.53,0.04236,0,1.515,0.03836,0.00797,1.515,0.03774,0.01946,1.52,0.03421,0.005112,1.532,0.04358,0,1.655,0.04322,0.02958,1.651,0.03965,0.04847,1.643,0.02895,0.05856,1.63,0.01803,0.06182,1.614,0.008199,0.06769,1.617,-0.03436,0.06732,1.583,-0.03683,0.06433,1.563,-0.03678,0.05867,1.544,-0.03316,0.05324,1.536,-0.05922,0.04795,1.531,-0.08973,0.03839,1.528,-0.09652,0,1.524,-0.102]);
IndexedFaceSet226.coord = Coordinate227;

let Color228 = browser.currentScene.createNode("Color");
Color228.color = new MFColor(new float[0.749,0.601,0.462,0.1735,0.2602,0.749,0.6364,0.133,0.1526,0.4545,0.2759,0.1902,0,0,0.502]);
IndexedFaceSet226.color = Color228;

Shape223.geometry = IndexedFaceSet226;

HAnimSegment222.children = new MFNode();

HAnimSegment222.children[0] = Shape223;

let Transform229 = browser.currentScene.createNode("Transform");
Transform229.DEF = "maskAndSnorkel";
Transform229.translation = new SFVec3f(new float[0,1.54,-0.0409]);
let Inline230 = browser.currentScene.createNode("Inline");
Inline230.DEF = "MaskAndSnorkel";
Inline230.url = new MFString(new java.lang.String["MaskAndSnorkel.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/MaskAndSnorkel.x3d","MaskAndSnorkel.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/MaskAndSnorkel.wrl"]);
Transform229.children = new MFNode();

Transform229.children[0] = Inline230;

HAnimSegment222.children[1] = Transform229;

let Transform231 = browser.currentScene.createNode("Transform");
Transform231.DEF = "mouthpiece";
Transform231.rotation = new SFRotation(new float[0.86,-0.58,-0.58,2.09]);
Transform231.translation = new SFVec3f(new float[0,1.54,-0.0409]);
let Transform232 = browser.currentScene.createNode("Transform");
Transform232.translation = new SFVec3f(new float[0,0.0018,0]);
let Shape233 = browser.currentScene.createNode("Shape");
let Appearance234 = browser.currentScene.createNode("Appearance");
let Material235 = browser.currentScene.createNode("Material");
Material235.DEF = "gray";
Material235.ambientIntensity = 0.3;
Material235.diffuseColor = new SFColor(new float[0.9,0.9,0.89]);
Material235.shininess = 0.1;
Material235.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance234.material = Material235;

Shape233.appearance = Appearance234;

let Cylinder236 = browser.currentScene.createNode("Cylinder");
Cylinder236.height = 0.006;
Cylinder236.radius = 0.015;
Shape233.geometry = Cylinder236;

Transform232.children = new MFNode();

Transform232.children[0] = Shape233;

Transform231.children = new MFNode();

Transform231.children[0] = Transform232;

let Transform237 = browser.currentScene.createNode("Transform");
let Shape238 = browser.currentScene.createNode("Shape");
let Appearance239 = browser.currentScene.createNode("Appearance");
let Material240 = browser.currentScene.createNode("Material");
Material240.DEF = "black";
Material240.diffuseColor = new SFColor(new float[0,0,0]);
Appearance239.material = Material240;

Shape238.appearance = Appearance239;

let Cone241 = browser.currentScene.createNode("Cone");
Cone241.bottomRadius = 0.03;
Cone241.height = 0.01;
Shape238.geometry = Cone241;

Transform237.children = new MFNode();

Transform237.children[0] = Shape238;

Transform231.children[1] = Transform237;

let Transform242 = browser.currentScene.createNode("Transform");
Transform242.translation = new SFVec3f(new float[0,-0.015,0]);
let Shape243 = browser.currentScene.createNode("Shape");
let Appearance244 = browser.currentScene.createNode("Appearance");
let Material245 = browser.currentScene.createNode("Material");
Material245.USE = "black";
Appearance244.material = Material245;

Shape243.appearance = Appearance244;

let Cylinder246 = browser.currentScene.createNode("Cylinder");
Cylinder246.height = 0.02;
Cylinder246.radius = 0.03;
Shape243.geometry = Cylinder246;

Transform242.children = new MFNode();

Transform242.children[0] = Shape243;

Transform231.children[2] = Transform242;

let Transform247 = browser.currentScene.createNode("Transform");
Transform247.translation = new SFVec3f(new float[0,-0.025,0]);
let Shape248 = browser.currentScene.createNode("Shape");
let Appearance249 = browser.currentScene.createNode("Appearance");
let Material250 = browser.currentScene.createNode("Material");
Material250.USE = "black";
Appearance249.material = Material250;

Shape248.appearance = Appearance249;

let Cylinder251 = browser.currentScene.createNode("Cylinder");
Cylinder251.height = 0.02;
Cylinder251.radius = 0.015;
Shape248.geometry = Cylinder251;

Transform247.children = new MFNode();

Transform247.children[0] = Shape248;

Transform231.children[3] = Transform247;

let Transform252 = browser.currentScene.createNode("Transform");
Transform252.rotation = new SFRotation(new float[0,0,1,0.9]);
Transform252.translation = new SFVec3f(new float[0,-0.04,0]);
let Shape253 = browser.currentScene.createNode("Shape");
Shape253.DEF = "mouthpiecePlastic";
let Appearance254 = browser.currentScene.createNode("Appearance");
let Material255 = browser.currentScene.createNode("Material");
Material255.diffuseColor = new SFColor(new float[1,1,1]);
Material255.emissiveColor = new SFColor(new float[1,1,1]);
Appearance254.material = Material255;

Shape253.appearance = Appearance254;

let Box256 = browser.currentScene.createNode("Box");
Box256.size = new SFVec3f(new float[0.002,0.03,0.018]);
Shape253.geometry = Box256;

Transform252.children = new MFNode();

Transform252.children[0] = Shape253;

Transform231.children[4] = Transform252;

let Transform257 = browser.currentScene.createNode("Transform");
Transform257.rotation = new SFRotation(new float[0,0,1,-0.9]);
Transform257.translation = new SFVec3f(new float[0,-0.04,0]);
let Shape258 = browser.currentScene.createNode("Shape");
Shape258.USE = "mouthpiecePlastic";
Transform257.children = new MFNode();

Transform257.children[0] = Shape258;

Transform231.children[5] = Transform257;

let Transform259 = browser.currentScene.createNode("Transform");
Transform259.rotation = new SFRotation(new float[1,0,0,1.57]);
Transform259.translation = new SFVec3f(new float[0,-0.015,0.03]);
let Shape260 = browser.currentScene.createNode("Shape");
let Appearance261 = browser.currentScene.createNode("Appearance");
let Material262 = browser.currentScene.createNode("Material");
Material262.USE = "gray";
Appearance261.material = Material262;

Shape260.appearance = Appearance261;

let Cylinder263 = browser.currentScene.createNode("Cylinder");
Cylinder263.height = 0.02;
Cylinder263.radius = 0.0075;
Shape260.geometry = Cylinder263;

Transform259.children = new MFNode();

Transform259.children[0] = Shape260;

Transform231.children[6] = Transform259;

//x = 0, y = 50, z = -270
let Transform264 = browser.currentScene.createNode("Transform");
Transform264.DEF = "airTube";
Transform264.rotation = new SFRotation(new float[0,1,0,1.57]);
Transform264.scale = new SFVec3f(new float[0.7,0.7,0.7]);
Transform264.translation = new SFVec3f(new float[0,-0.02,0.055]);
let Transform265 = browser.currentScene.createNode("Transform");
Transform265.rotation = new SFRotation(new float[-0.21,0.21,-0.95,4.67]);
let Shape266 = browser.currentScene.createNode("Shape");
let Appearance267 = browser.currentScene.createNode("Appearance");
let Material268 = browser.currentScene.createNode("Material");
Material268.diffuseColor = new SFColor(new float[0,0,0]);
Appearance267.material = Material268;

Shape266.appearance = Appearance267;

let Extrusion269 = browser.currentScene.createNode("Extrusion");
Extrusion269.crossSection = new MFVec2f(new float[0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013]);
Extrusion269.spine = new MFVec3f(new float[0.005,-0.03,0,-0.01,0.02,0,-0.03,0.08,0,-0.05,0.14,0,-0.08,0.19,0,-0.1,0.22,0,-0.12,0.25,0,-0.15,0.27,0,-0.18,0.28,0,-0.21,0.29,0,-0.26,0.28,0,-0.28,0.26,0,-0.305,0.23,0,-0.32,0.2,0,-0.34,0.16,0,-0.35,0.12,0,-0.37,0.04,0,-0.385,0,0,-0.39,-0.07,0]);
Shape266.geometry = Extrusion269;

Transform265.children = new MFNode();

Transform265.children[0] = Shape266;

Transform264.children = new MFNode();

Transform264.children[0] = Transform265;

Transform231.children[7] = Transform264;

HAnimSegment222.children[2] = Transform231;

let Transform270 = browser.currentScene.createNode("Transform");
Transform270.DEF = "Bubbles";
Transform270.scale = new SFVec3f(new float[0.35,0.35,0.35]);
Transform270.translation = new SFVec3f(new float[0,1.54,-0.0409]);
let Inline271 = browser.currentScene.createNode("Inline");
Inline271.DEF = "bubbles";
Inline271.url = new MFString(new java.lang.String["Bubbles.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/Bubbles.x3d","Bubbles.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/Bubbles.wrl"]);
Transform270.children = new MFNode();

Transform270.children[0] = Inline271;

HAnimSegment222.children[3] = Transform270;

HAnimJoint221.children = new MFNode();

HAnimJoint221.children[0] = HAnimSegment222;

HAnimJoint214.children[1] = HAnimJoint221;

HAnimJoint94.children[3] = HAnimJoint214;

HAnimJoint32.children[1] = HAnimJoint94;

HAnimHumanoid31.joints = new MFNode();

HAnimHumanoid31.joints[0] = HAnimJoint32;

let HAnimJoint272 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint272.USE = "hanim_humanoid_root";
HAnimHumanoid31.joints[1] = HAnimJoint272;

let HAnimJoint273 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint273.USE = "hanim_sacroiliac";
HAnimHumanoid31.joints[2] = HAnimJoint273;

let HAnimJoint274 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint274.USE = "hanim_vl1";
HAnimHumanoid31.joints[3] = HAnimJoint274;

let HAnimJoint275 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint275.USE = "hanim_vc4";
HAnimHumanoid31.joints[4] = HAnimJoint275;

let HAnimJoint276 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint276.USE = "hanim_skullbase";
HAnimHumanoid31.joints[5] = HAnimJoint276;

let HAnimJoint277 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint277.USE = "hanim_l_ankle";
HAnimHumanoid31.joints[6] = HAnimJoint277;

let HAnimJoint278 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint278.USE = "hanim_r_ankle";
HAnimHumanoid31.joints[7] = HAnimJoint278;

let HAnimJoint279 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint279.USE = "hanim_l_elbow";
HAnimHumanoid31.joints[8] = HAnimJoint279;

let HAnimJoint280 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint280.USE = "hanim_r_elbow";
HAnimHumanoid31.joints[9] = HAnimJoint280;

let HAnimJoint281 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint281.USE = "hanim_l_hip";
HAnimHumanoid31.joints[10] = HAnimJoint281;

let HAnimJoint282 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint282.USE = "hanim_r_hip";
HAnimHumanoid31.joints[11] = HAnimJoint282;

let HAnimJoint283 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint283.USE = "hanim_l_knee";
HAnimHumanoid31.joints[12] = HAnimJoint283;

let HAnimJoint284 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint284.USE = "hanim_r_knee";
HAnimHumanoid31.joints[13] = HAnimJoint284;

let HAnimJoint285 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint285.USE = "hanim_l_shoulder";
HAnimHumanoid31.joints[14] = HAnimJoint285;

let HAnimJoint286 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint286.USE = "hanim_r_shoulder";
HAnimHumanoid31.joints[15] = HAnimJoint286;

let HAnimJoint287 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint287.USE = "hanim_l_wrist";
HAnimHumanoid31.joints[16] = HAnimJoint287;

let HAnimJoint288 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint288.USE = "hanim_r_wrist";
HAnimHumanoid31.joints[17] = HAnimJoint288;

let HAnimSegment289 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment289.USE = "hanim_pelvis";
HAnimHumanoid31.segments[18] = HAnimSegment289;

let HAnimSegment290 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment290.USE = "hanim_l1";
HAnimHumanoid31.segments[19] = HAnimSegment290;

let HAnimSegment291 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment291.USE = "hanim_c4";
HAnimHumanoid31.segments[20] = HAnimSegment291;

let HAnimSegment292 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment292.USE = "hanim_skull";
HAnimHumanoid31.segments[21] = HAnimSegment292;

let HAnimSegment293 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment293.USE = "hanim_l_calf";
HAnimHumanoid31.segments[22] = HAnimSegment293;

let HAnimSegment294 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment294.USE = "hanim_r_calf";
HAnimHumanoid31.segments[23] = HAnimSegment294;

let HAnimSegment295 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment295.USE = "hanim_l_forearm";
HAnimHumanoid31.segments[24] = HAnimSegment295;

let HAnimSegment296 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment296.USE = "hanim_r_forearm";
HAnimHumanoid31.segments[25] = HAnimSegment296;

let HAnimSegment297 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment297.USE = "hanim_l_hand";
HAnimHumanoid31.segments[26] = HAnimSegment297;

let HAnimSegment298 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment298.USE = "hanim_r_hand";
HAnimHumanoid31.segments[27] = HAnimSegment298;

let HAnimSegment299 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment299.USE = "hanim_l_hindfoot";
HAnimHumanoid31.segments[28] = HAnimSegment299;

let HAnimSegment300 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment300.USE = "hanim_r_hindfoot";
HAnimHumanoid31.segments[29] = HAnimSegment300;

let HAnimSegment301 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment301.USE = "hanim_l_thigh";
HAnimHumanoid31.segments[30] = HAnimSegment301;

let HAnimSegment302 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment302.USE = "hanim_r_thigh";
HAnimHumanoid31.segments[31] = HAnimSegment302;

let HAnimSegment303 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment303.USE = "hanim_l_upperarm";
HAnimHumanoid31.segments[32] = HAnimSegment303;

let HAnimSegment304 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment304.USE = "hanim_r_upperarm";
HAnimHumanoid31.segments[33] = HAnimSegment304;

Transform30.children = new MFNode();

Transform30.children[0] = HAnimHumanoid31;

Transform20.children[1] = Transform30;

Transform19.children = new MFNode();

Transform19.children[0] = Transform20;

Group18.children = new MFNode();

Group18.children[0] = Transform19;

browser.currentScene.children[2] = Group18;

let Script305 = browser.currentScene.createNode("Script");
Script305.DEF = "finWarpScript";
let field306 = browser.currentScene.createNode("field");
field306.name = "set_rotationLeft";
field306.accessType = "inputOnly";
field306.type = "SFRotation";
Script305.field = new MFNode();

Script305.field[0] = field306;

let field307 = browser.currentScene.createNode("field");
field307.name = "set_rotationRight";
field307.accessType = "inputOnly";
field307.type = "SFRotation";
Script305.field[1] = field307;

let field308 = browser.currentScene.createNode("field");
field308.name = "finWarpLeft";
field308.accessType = "outputOnly";
field308.type = "SFBool";
Script305.field[2] = field308;

let field309 = browser.currentScene.createNode("field");
field309.name = "finWarpRight";
field309.accessType = "outputOnly";
field309.type = "SFBool";
Script305.field[3] = field309;


Script305.setSourceCode(`ecmascript:\n"+
"function set_rotationLeft(rotationValue, timeStamp)\n"+
"{\n"+
"	if (rotationValue[0] <= 0)\n"+
"	{\n"+
"		finWarpLeft = false;\n"+
"	}\n"+
"	else\n"+
"	{\n"+
"		finWarpLeft = true;\n"+
"	}\n"+
"//	print ('Left  rotationValue[0] ' + rotationValue[0] + ', finWarpLeft=' + finWarpLeft);\n"+
"}\n"+
"\n"+
"function set_rotationRight(rotationValue, timeStamp)\n"+
"{\n"+
"	if (rotationValue[0] <= 0)\n"+
"	{\n"+
"		finWarpRight = false;\n"+
"	}\n"+
"	else\n"+
"	{\n"+
"		finWarpRight = true;\n"+
"	}\n"+
"//	print ('Right rotationValue[0] ' + rotationValue[0] + ', finWarpRight=' + finWarpRight);\n"+
"}`)
browser.currentScene.children[3] = Script305;

//Fins animation
let ProximitySensor310 = browser.currentScene.createNode("ProximitySensor");
ProximitySensor310.DEF = "FinTriggerProximitySensor";
ProximitySensor310.size = new SFVec3f(new float[15,15,15]);
browser.currentScene.children[4] = ProximitySensor310;

let TimeSensor311 = browser.currentScene.createNode("TimeSensor");
TimeSensor311.DEF = "FinClock";
TimeSensor311.cycleInterval = 7;
TimeSensor311.loop = True;
browser.currentScene.children[5] = TimeSensor311;

let Group312 = browser.currentScene.createNode("Group");
let Script313 = browser.currentScene.createNode("Script");
Script313.DEF = "FinScript";
let field314 = browser.currentScene.createNode("field");
field314.name = "keyValueRight";
field314.accessType = "outputOnly";
field314.type = "MFVec3f";
Script313.field = new MFNode();

Script313.field[0] = field314;

let field315 = browser.currentScene.createNode("field");
field315.name = "keyValueLeft";
field315.accessType = "outputOnly";
field315.type = "MFVec3f";
Script313.field[1] = field315;

let field316 = browser.currentScene.createNode("field");
field316.name = "set_fraction";
field316.accessType = "inputOnly";
field316.type = "SFFloat";
Script313.field[2] = field316;

let field317 = browser.currentScene.createNode("field");
field317.name = "finL";
field317.accessType = "inputOnly";
field317.type = "SFBool";
Script313.field[3] = field317;

let field318 = browser.currentScene.createNode("field");
field318.name = "finR";
field318.accessType = "inputOnly";
field318.type = "SFBool";
Script313.field[4] = field318;

let field319 = browser.currentScene.createNode("field");
field319.name = "finWarpL";
field319.accessType = "initializeOnly";
field319.type = "SFInt32";
field319.value = "0";
Script313.field[5] = field319;

let field320 = browser.currentScene.createNode("field");
field320.name = "finWarpR";
field320.accessType = "initializeOnly";
field320.type = "SFInt32";
field320.value = "0";
Script313.field[6] = field320;

let field321 = browser.currentScene.createNode("field");
field321.name = "traceEnabled";
field321.accessType = "initializeOnly";
field321.type = "SFBool";
field321.value = "false";
Script313.field[7] = field321;


Script313.setSourceCode(`ecmascript:\n"+
"function finL(value, timeStamp)\n"+
"{\n"+
"	if (value == 0)\n"+
"	{\n"+
"		finWarpL = 0;\n"+
"	}\n"+
"	else\n"+
"	{\n"+
"		finWarpL = 1;\n"+
"	}\n"+
"	//print ('finWarpL' + finWarpL);\n"+
"}\n"+
"\n"+
"function finR(value, timeStamp)\n"+
"{\n"+
"	if (value == 0)\n"+
"	{\n"+
"		finWarpR = 0;\n"+
"	}\n"+
"	else\n"+
"	{\n"+
"		finWarpR = 1;\n"+
"	}\n"+
"	//print ('finWarpR' + finWarpR);\n"+
"}\n"+
"function finMove(fraction, timeStamp)\n"+
" {\n"+
"	if (finWarpL == 1)\n"+
"	{\n"+
"		// level 3 (warp outside) Left\n"+
"		kVL7 = new SFVec3f(1.25, 0, 25);\n"+
"		kVL8 = new SFVec3f(2.5, 0, 30);\n"+
" 		kVL9 = new SFVec3f(3.25, 0, 34);\n"+
"	}\n"+
"	else\n"+
"	{\n"+
"		// level -2 (warp inside) Left\n"+
"		kVL7 = new SFVec3f(-1.25, 0, 25);\n"+
"		kVL8 = new SFVec3f(-2.5, 0, 30);\n"+
" 		kVL9 = new SFVec3f(-3.25, 0, 34);\n"+
"	}\n"+
"\n"+
"	if (finWarpR == 0)\n"+
"	{\n"+
"		// level  1 (warp outside ) Right\n"+
"		kVR7 = new SFVec3f(1.25, 0, 25);\n"+
"		kVR8 = new SFVec3f(2.5, 0, 30);\n"+
" 		kVR9 = new SFVec3f(3.25, 0, 34);\n"+
"\n"+
"	}\n"+
"	else\n"+
"	{\n"+
"		// level  -2 ( warp inside) Right\n"+
"		kVR7 = new SFVec3f(-1.25, 0, 25);\n"+
"		kVR8 = new SFVec3f(-2.5, 0, 30);\n"+
" 		kVR9 = new SFVec3f(-3.25, 0, 34);\n"+
"	}\n"+
"\n"+
"	// Left Fin (fixed spine)\n"+
"	kVL1 = new SFVec3f(0, 0, 1);\n"+
"	kVL2 = new SFVec3f(0, 0, 5);\n"+
"	kVL3 = new SFVec3f(0, 0, 8);\n"+
"	kVL4 = new SFVec3f(0, 0, 12);\n"+
"	kVL5 = new SFVec3f(0, 0, 15);\n"+
"	kVL6 = new SFVec3f(0, 0, 18);\n"+
"	keyValueLeft = new MFVec3f(kVL1, kVL2, kVL3, kVL4, kVL5, kVL6, kVL7, kVL8, kVL9);\n"+
"\n"+
"	// Right Fin (fixed spine)\n"+
"	kVR1 = new SFVec3f(0, 0, 1);\n"+
"	kVR2 = new SFVec3f(0, 0, 5);\n"+
"	kVR3 = new SFVec3f(0, 0, 8);\n"+
"	kVR4 = new SFVec3f(0, 0, 12);\n"+
"	kVR5 = new SFVec3f(0, 0, 15);\n"+
"	kVR6 = new SFVec3f(0, 0, 18);\n"+
"	keyValueRight = new MFVec3f(kVR1, kVR2, kVR3, kVR4, kVR5, kVR6, kVR7, kVR8, kVR9);\n"+
"\n"+
"	//tracePrint ('keyValueLeft =' + keyValueLeft);\n"+
"	//tracePrint ('keyValueRight=' + keyValueRight);\n"+
"}\n"+
"\n"+
"function set_fraction (value, timeStamp)\n"+
"{\n"+
"	finMove(value);\n"+
"	//tracePrint('time fraction =' + value);\n"+
"}\n"+
"\n"+
"function tracePrint (outputString)\n"+
"{\n"+
"	if (traceEnabled) Browser.print ('[Fin Move]' + outputString);\n"+
"}`)
Group312.children = new MFNode();

Group312.children[0] = Script313;

let ROUTE322 = browser.currentScene.createNode("ROUTE");
ROUTE322.fromField = "finWarpLeft";
ROUTE322.fromNode = "finWarpScript";
ROUTE322.toField = "finL";
ROUTE322.toNode = "FinScript";
Group312.children[1] = ROUTE322;

let ROUTE323 = browser.currentScene.createNode("ROUTE");
ROUTE323.fromField = "finWarpRight";
ROUTE323.fromNode = "finWarpScript";
ROUTE323.toField = "finR";
ROUTE323.toNode = "FinScript";
Group312.children[2] = ROUTE323;

let ROUTE324 = browser.currentScene.createNode("ROUTE");
ROUTE324.fromField = "isActive";
ROUTE324.fromNode = "FinTriggerProximitySensor";
ROUTE324.toField = "enabled";
ROUTE324.toNode = "FinClock";
Group312.children[3] = ROUTE324;

let ROUTE325 = browser.currentScene.createNode("ROUTE");
ROUTE325.fromField = "fraction_changed";
ROUTE325.fromNode = "FinClock";
ROUTE325.toField = "set_fraction";
ROUTE325.toNode = "FinScript";
Group312.children[4] = ROUTE325;

let ROUTE326 = browser.currentScene.createNode("ROUTE");
ROUTE326.fromField = "keyValueRight";
ROUTE326.fromNode = "FinScript";
ROUTE326.toField = "set_spine";
ROUTE326.toNode = "FinExtrusionRight";
Group312.children[5] = ROUTE326;

let ROUTE327 = browser.currentScene.createNode("ROUTE");
ROUTE327.fromField = "keyValueLeft";
ROUTE327.fromNode = "FinScript";
ROUTE327.toField = "set_spine";
ROUTE327.toNode = "FinExtrusionLeft";
Group312.children[6] = ROUTE327;

browser.currentScene.children[6] = Group312;

let NavigationInfo328 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo328.avatarSize = new MFFloat(new float[0.15,1.53,0.75]);
NavigationInfo328.speed = 0.5;
browser.currentScene.children[7] = NavigationInfo328;

let WorldInfo329 = browser.currentScene.createNode("WorldInfo");
WorldInfo329.info = new MFString(new java.lang.String["Copyright (c) 1997. 3Name3D / Yglesias Wallock Divekar, Inc."]);
WorldInfo329.title = "Nancy - an HAnim compliant avatar by 3Name3D";
browser.currentScene.children[8] = WorldInfo329;

let Group330 = browser.currentScene.createNode("Group");
Group330.DEF = "Animations";
let Group331 = browser.currentScene.createNode("Group");
Group331.DEF = "Dive_Animation";
let OrientationInterpolator332 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator332.DEF = "r_ankle_RotationInterpolator_BasicDive";
OrientationInterpolator332.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator332.keyValue = new MFRotation(new float[1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.86001]);
Group331.children = new MFNode();

Group331.children[0] = OrientationInterpolator332;

let OrientationInterpolator333 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator333.DEF = "r_knee_RotationInterpolator_BasicDive";
OrientationInterpolator333.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.5,0.6667,0.9167,1]);
OrientationInterpolator333.keyValue = new MFRotation(new float[1,0,0,0.8573,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.8573]);
Group331.children[1] = OrientationInterpolator333;

let OrientationInterpolator334 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator334.DEF = "r_hip_RotationInterpolator_BasicDive";
OrientationInterpolator334.key = new MFFloat(new float[0,0.125,0.2083,0.2917,0.5,0.7917,0.9167,1]);
OrientationInterpolator334.keyValue = new MFRotation(new float[-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9131,-0.06243,-0.403,0.3361,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481]);
Group331.children[2] = OrientationInterpolator334;

let OrientationInterpolator335 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator335.DEF = "l_ankle_RotationInterpolator_BasicDive";
OrientationInterpolator335.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator335.keyValue = new MFRotation(new float[1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001]);
Group331.children[3] = OrientationInterpolator335;

let OrientationInterpolator336 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator336.DEF = "l_knee_RotationInterpolator_BasicDive";
OrientationInterpolator336.key = new MFFloat(new float[0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator336.keyValue = new MFRotation(new float[1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226]);
Group331.children[4] = OrientationInterpolator336;

let OrientationInterpolator337 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator337.DEF = "l_hip_RotationInterpolator_BasicDive";
OrientationInterpolator337.key = new MFFloat(new float[0,0.25,0.375,0.6667,0.7917,0.9167,1]);
OrientationInterpolator337.keyValue = new MFRotation(new float[-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865]);
Group331.children[5] = OrientationInterpolator337;

let OrientationInterpolator338 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator338.DEF = "lower_body_RotationInterpolator_BasicDive";
OrientationInterpolator338.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator338.keyValue = new MFRotation(new float[0,0,-1,0.1056,0,0,1,0.09018,0,0,-1,0.1056]);
Group331.children[6] = OrientationInterpolator338;

//
let OrientationInterpolator339 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator339.DEF = "r_wrist_RotationInterpolator_BasicDive";
OrientationInterpolator339.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator339.keyValue = new MFRotation(new float[0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0]);
Group331.children[7] = OrientationInterpolator339;

let OrientationInterpolator340 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator340.DEF = "r_elbow_RotationInterpolator_BasicDive";
OrientationInterpolator340.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator340.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0]);
Group331.children[8] = OrientationInterpolator340;

let OrientationInterpolator341 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator341.DEF = "r_shoulder_RotationInterpolator_BasicDive";
OrientationInterpolator341.key = new MFFloat(new float[0,0.45,0.64,0.76,0.88,1]);
OrientationInterpolator341.keyValue = new MFRotation(new float[0,0,1,0,0.9992,0.02042,0.03558,7.2,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0]);
Group331.children[9] = OrientationInterpolator341;

let OrientationInterpolator342 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator342.DEF = "l_wrist_RotationInterpolator_BasicDive";
OrientationInterpolator342.key = new MFFloat(new float[0,0.32,0.64,0.88,1]);
OrientationInterpolator342.keyValue = new MFRotation(new float[0,0,1,0,0.067,0.98,-0.128,4.15,0.067,0.98,-0.128,4.15,0.067,0.98,-0.128,4.15,0,0,1,0]);
Group331.children[10] = OrientationInterpolator342;

let OrientationInterpolator343 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator343.DEF = "l_elbow_RotationInterpolator_BasicDive";
OrientationInterpolator343.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator343.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.1229,-1,0,0,0.1229,-1,0,0,0.5976,-1,0,0,0.3917,0,0,1,0]);
Group331.children[11] = OrientationInterpolator343;

let OrientationInterpolator344 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator344.DEF = "l_shoulder_RotationInterpolator_BasicDive";
OrientationInterpolator344.key = new MFFloat(new float[0,0.25,0.375,0.6667,0.7917,0.9167,1]);
OrientationInterpolator344.keyValue = new MFRotation(new float[0,0,1,0.1,0,0,1,0.2,0,0,1,0.2,0.86,0.25,0.42,0.5,0.86,0.25,0.42,0.8,0.86,0.25,0.42,0.4,0.86,0.25,0.42,0.2]);
Group331.children[12] = OrientationInterpolator344;

//
let OrientationInterpolator345 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator345.DEF = "head_RotationInterpolator_BasicDive";
OrientationInterpolator345.key = new MFFloat(new float[0,0.28,0.3,0.32,0.4,0.45,0.6,0.65,0.7,0.75,0.85,0.9,0.95,1]);
OrientationInterpolator345.keyValue = new MFRotation(new float[-1,0,0,1,-1,0,0,1,-1,0,0,0.999,-1,0,0,0.99,-1,0,0,0.99,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,1]);
Group331.children[13] = OrientationInterpolator345;

let OrientationInterpolator346 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator346.DEF = "neck_RotationInterpolator_BasicDive";
OrientationInterpolator346.key = new MFFloat(new float[0,1]);
OrientationInterpolator346.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group331.children[14] = OrientationInterpolator346;

let OrientationInterpolator347 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator347.DEF = "upper_body_RotationInterpolator_BasicDive";
OrientationInterpolator347.key = new MFFloat(new float[0,0.2083,0.375,0.75,0.8333,1]);
OrientationInterpolator347.keyValue = new MFRotation(new float[0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826]);
Group331.children[15] = OrientationInterpolator347;

let OrientationInterpolator348 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator348.DEF = "whole_body_RotationInterpolator_BasicDive";
OrientationInterpolator348.key = new MFFloat(new float[0,1]);
OrientationInterpolator348.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group331.children[16] = OrientationInterpolator348;

let PositionInterpolator349 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator349.DEF = "whole_body_TranslationInterpolator_BasicDive";
PositionInterpolator349.key = new MFFloat(new float[0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]);
PositionInterpolator349.keyValue = new MFVec3f(new float[0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0]);
Group331.children[17] = PositionInterpolator349;

let TimeSensor350 = browser.currentScene.createNode("TimeSensor");
TimeSensor350.DEF = "Dive_Time";
TimeSensor350.cycleInterval = 7;
TimeSensor350.loop = True;
TimeSensor350.startTime = -1;
Group331.children[18] = TimeSensor350;

let ProximitySensor351 = browser.currentScene.createNode("ProximitySensor");
ProximitySensor351.DEF = "TriggerProximitySensor";
ProximitySensor351.size = new SFVec3f(new float[50,50,50]);
Group331.children[19] = ProximitySensor351;

Group330.children = new MFNode();

Group330.children[0] = Group331;

browser.currentScene.children[9] = Group330;

let ROUTE352 = browser.currentScene.createNode("ROUTE");
ROUTE352.fromField = "enterTime";
ROUTE352.fromNode = "TriggerProximitySensor";
ROUTE352.toField = "startTime";
ROUTE352.toNode = "Dive_Time";
browser.currentScene.children[10] = ROUTE352;

let ROUTE353 = browser.currentScene.createNode("ROUTE");
ROUTE353.fromField = "fraction_changed";
ROUTE353.fromNode = "Dive_Time";
ROUTE353.toField = "set_fraction";
ROUTE353.toNode = "r_ankle_RotationInterpolator_BasicDive";
browser.currentScene.children[11] = ROUTE353;

let ROUTE354 = browser.currentScene.createNode("ROUTE");
ROUTE354.fromField = "fraction_changed";
ROUTE354.fromNode = "Dive_Time";
ROUTE354.toField = "set_fraction";
ROUTE354.toNode = "r_knee_RotationInterpolator_BasicDive";
browser.currentScene.children[12] = ROUTE354;

let ROUTE355 = browser.currentScene.createNode("ROUTE");
ROUTE355.fromField = "fraction_changed";
ROUTE355.fromNode = "Dive_Time";
ROUTE355.toField = "set_fraction";
ROUTE355.toNode = "r_hip_RotationInterpolator_BasicDive";
browser.currentScene.children[13] = ROUTE355;

let ROUTE356 = browser.currentScene.createNode("ROUTE");
ROUTE356.fromField = "fraction_changed";
ROUTE356.fromNode = "Dive_Time";
ROUTE356.toField = "set_fraction";
ROUTE356.toNode = "l_ankle_RotationInterpolator_BasicDive";
browser.currentScene.children[14] = ROUTE356;

let ROUTE357 = browser.currentScene.createNode("ROUTE");
ROUTE357.fromField = "fraction_changed";
ROUTE357.fromNode = "Dive_Time";
ROUTE357.toField = "set_fraction";
ROUTE357.toNode = "l_knee_RotationInterpolator_BasicDive";
browser.currentScene.children[15] = ROUTE357;

let ROUTE358 = browser.currentScene.createNode("ROUTE");
ROUTE358.fromField = "fraction_changed";
ROUTE358.fromNode = "Dive_Time";
ROUTE358.toField = "set_fraction";
ROUTE358.toNode = "l_hip_RotationInterpolator_BasicDive";
browser.currentScene.children[16] = ROUTE358;

let ROUTE359 = browser.currentScene.createNode("ROUTE");
ROUTE359.fromField = "fraction_changed";
ROUTE359.fromNode = "Dive_Time";
ROUTE359.toField = "set_fraction";
ROUTE359.toNode = "lower_body_RotationInterpolator_BasicDive";
browser.currentScene.children[17] = ROUTE359;

let ROUTE360 = browser.currentScene.createNode("ROUTE");
ROUTE360.fromField = "fraction_changed";
ROUTE360.fromNode = "Dive_Time";
ROUTE360.toField = "set_fraction";
ROUTE360.toNode = "head_RotationInterpolator_BasicDive";
browser.currentScene.children[18] = ROUTE360;

let ROUTE361 = browser.currentScene.createNode("ROUTE");
ROUTE361.fromField = "fraction_changed";
ROUTE361.fromNode = "Dive_Time";
ROUTE361.toField = "set_fraction";
ROUTE361.toNode = "neck_RotationInterpolator_BasicDive";
browser.currentScene.children[19] = ROUTE361;

let ROUTE362 = browser.currentScene.createNode("ROUTE");
ROUTE362.fromField = "fraction_changed";
ROUTE362.fromNode = "Dive_Time";
ROUTE362.toField = "set_fraction";
ROUTE362.toNode = "upper_body_RotationInterpolator_BasicDive";
browser.currentScene.children[20] = ROUTE362;

let ROUTE363 = browser.currentScene.createNode("ROUTE");
ROUTE363.fromField = "fraction_changed";
ROUTE363.fromNode = "Dive_Time";
ROUTE363.toField = "set_fraction";
ROUTE363.toNode = "whole_body_RotationInterpolator_BasicDive";
browser.currentScene.children[21] = ROUTE363;

let ROUTE364 = browser.currentScene.createNode("ROUTE");
ROUTE364.fromField = "fraction_changed";
ROUTE364.fromNode = "Dive_Time";
ROUTE364.toField = "set_fraction";
ROUTE364.toNode = "whole_body_TranslationInterpolator_BasicDive";
browser.currentScene.children[22] = ROUTE364;

let ROUTE365 = browser.currentScene.createNode("ROUTE");
ROUTE365.fromField = "value_changed";
ROUTE365.fromNode = "r_ankle_RotationInterpolator_BasicDive";
ROUTE365.toField = "set_rotation";
ROUTE365.toNode = "hanim_r_ankle";
browser.currentScene.children[23] = ROUTE365;

let ROUTE366 = browser.currentScene.createNode("ROUTE");
ROUTE366.fromField = "value_changed";
ROUTE366.fromNode = "r_knee_RotationInterpolator_BasicDive";
ROUTE366.toField = "set_rotation";
ROUTE366.toNode = "hanim_r_knee";
browser.currentScene.children[24] = ROUTE366;

let ROUTE367 = browser.currentScene.createNode("ROUTE");
ROUTE367.fromField = "value_changed";
ROUTE367.fromNode = "r_hip_RotationInterpolator_BasicDive";
ROUTE367.toField = "set_rotation";
ROUTE367.toNode = "hanim_r_hip";
browser.currentScene.children[25] = ROUTE367;

let ROUTE368 = browser.currentScene.createNode("ROUTE");
ROUTE368.fromField = "value_changed";
ROUTE368.fromNode = "l_ankle_RotationInterpolator_BasicDive";
ROUTE368.toField = "set_rotation";
ROUTE368.toNode = "hanim_l_ankle";
browser.currentScene.children[26] = ROUTE368;

let ROUTE369 = browser.currentScene.createNode("ROUTE");
ROUTE369.fromField = "value_changed";
ROUTE369.fromNode = "l_knee_RotationInterpolator_BasicDive";
ROUTE369.toField = "set_rotation";
ROUTE369.toNode = "hanim_l_knee";
browser.currentScene.children[27] = ROUTE369;

let ROUTE370 = browser.currentScene.createNode("ROUTE");
ROUTE370.fromField = "value_changed";
ROUTE370.fromNode = "l_hip_RotationInterpolator_BasicDive";
ROUTE370.toField = "set_rotationLeft";
ROUTE370.toNode = "finWarpScript";
browser.currentScene.children[28] = ROUTE370;

let ROUTE371 = browser.currentScene.createNode("ROUTE");
ROUTE371.fromField = "value_changed";
ROUTE371.fromNode = "l_hip_RotationInterpolator_BasicDive";
ROUTE371.toField = "set_rotationRight";
ROUTE371.toNode = "finWarpScript";
browser.currentScene.children[29] = ROUTE371;

let ROUTE372 = browser.currentScene.createNode("ROUTE");
ROUTE372.fromField = "value_changed";
ROUTE372.fromNode = "l_hip_RotationInterpolator_BasicDive";
ROUTE372.toField = "set_rotation";
ROUTE372.toNode = "hanim_l_hip";
browser.currentScene.children[30] = ROUTE372;

let ROUTE373 = browser.currentScene.createNode("ROUTE");
ROUTE373.fromField = "value_changed";
ROUTE373.fromNode = "lower_body_RotationInterpolator_BasicDive";
ROUTE373.toField = "set_rotation";
ROUTE373.toNode = "hanim_sacroiliac";
browser.currentScene.children[31] = ROUTE373;

let ROUTE374 = browser.currentScene.createNode("ROUTE");
ROUTE374.fromField = "value_changed";
ROUTE374.fromNode = "head_RotationInterpolator_BasicDive";
ROUTE374.toField = "set_rotation";
ROUTE374.toNode = "hanim_skullbase";
browser.currentScene.children[32] = ROUTE374;

let ROUTE375 = browser.currentScene.createNode("ROUTE");
ROUTE375.fromField = "value_changed";
ROUTE375.fromNode = "neck_RotationInterpolator_BasicDive";
ROUTE375.toField = "set_rotation";
ROUTE375.toNode = "hanim_vc4";
browser.currentScene.children[33] = ROUTE375;

let ROUTE376 = browser.currentScene.createNode("ROUTE");
ROUTE376.fromField = "value_changed";
ROUTE376.fromNode = "upper_body_RotationInterpolator_BasicDive";
ROUTE376.toField = "set_rotation";
ROUTE376.toNode = "hanim_vl1";
browser.currentScene.children[34] = ROUTE376;

let ROUTE377 = browser.currentScene.createNode("ROUTE");
ROUTE377.fromField = "value_changed";
ROUTE377.fromNode = "whole_body_RotationInterpolator_BasicDive";
ROUTE377.toField = "set_rotation";
ROUTE377.toNode = "hanim_humanoid_root";
browser.currentScene.children[35] = ROUTE377;

let ROUTE378 = browser.currentScene.createNode("ROUTE");
ROUTE378.fromField = "value_changed";
ROUTE378.fromNode = "whole_body_TranslationInterpolator_BasicDive";
ROUTE378.toField = "set_translation";
ROUTE378.toNode = "hanim_humanoid_root";
browser.currentScene.children[36] = ROUTE378;

let ROUTE379 = browser.currentScene.createNode("ROUTE");
ROUTE379.fromField = "fraction_changed";
ROUTE379.fromNode = "Dive_Time";
ROUTE379.toField = "set_fraction";
ROUTE379.toNode = "r_wrist_RotationInterpolator_BasicDive";
browser.currentScene.children[37] = ROUTE379;

let ROUTE380 = browser.currentScene.createNode("ROUTE");
ROUTE380.fromField = "fraction_changed";
ROUTE380.fromNode = "Dive_Time";
ROUTE380.toField = "set_fraction";
ROUTE380.toNode = "r_elbow_RotationInterpolator_BasicDive";
browser.currentScene.children[38] = ROUTE380;

let ROUTE381 = browser.currentScene.createNode("ROUTE");
ROUTE381.fromField = "fraction_changed";
ROUTE381.fromNode = "Dive_Time";
ROUTE381.toField = "set_fraction";
ROUTE381.toNode = "r_shoulder_RotationInterpolator_BasicDive";
browser.currentScene.children[39] = ROUTE381;

let ROUTE382 = browser.currentScene.createNode("ROUTE");
ROUTE382.fromField = "fraction_changed";
ROUTE382.fromNode = "Dive_Time";
ROUTE382.toField = "set_fraction";
ROUTE382.toNode = "l_wrist_RotationInterpolator_BasicDive";
browser.currentScene.children[40] = ROUTE382;

let ROUTE383 = browser.currentScene.createNode("ROUTE");
ROUTE383.fromField = "fraction_changed";
ROUTE383.fromNode = "Dive_Time";
ROUTE383.toField = "set_fraction";
ROUTE383.toNode = "l_elbow_RotationInterpolator_BasicDive";
browser.currentScene.children[41] = ROUTE383;

let ROUTE384 = browser.currentScene.createNode("ROUTE");
ROUTE384.fromField = "fraction_changed";
ROUTE384.fromNode = "Dive_Time";
ROUTE384.toField = "set_fraction";
ROUTE384.toNode = "l_shoulder_RotationInterpolator_BasicDive";
browser.currentScene.children[42] = ROUTE384;

let ROUTE385 = browser.currentScene.createNode("ROUTE");
ROUTE385.fromField = "value_changed";
ROUTE385.fromNode = "r_wrist_RotationInterpolator_BasicDive";
ROUTE385.toField = "set_rotation";
ROUTE385.toNode = "hanim_r_wrist";
browser.currentScene.children[43] = ROUTE385;

let ROUTE386 = browser.currentScene.createNode("ROUTE");
ROUTE386.fromField = "value_changed";
ROUTE386.fromNode = "r_elbow_RotationInterpolator_BasicDive";
ROUTE386.toField = "set_rotation";
ROUTE386.toNode = "hanim_r_elbow";
browser.currentScene.children[44] = ROUTE386;

let ROUTE387 = browser.currentScene.createNode("ROUTE");
ROUTE387.fromField = "value_changed";
ROUTE387.fromNode = "r_shoulder_RotationInterpolator_BasicDive";
ROUTE387.toField = "set_rotation";
ROUTE387.toNode = "hanim_r_shoulder";
browser.currentScene.children[45] = ROUTE387;

let ROUTE388 = browser.currentScene.createNode("ROUTE");
ROUTE388.fromField = "value_changed";
ROUTE388.fromNode = "l_wrist_RotationInterpolator_BasicDive";
ROUTE388.toField = "set_rotation";
ROUTE388.toNode = "hanim_l_wrist";
browser.currentScene.children[46] = ROUTE388;

let ROUTE389 = browser.currentScene.createNode("ROUTE");
ROUTE389.fromField = "value_changed";
ROUTE389.fromNode = "l_elbow_RotationInterpolator_BasicDive";
ROUTE389.toField = "set_rotation";
ROUTE389.toNode = "hanim_l_elbow";
browser.currentScene.children[47] = ROUTE389;

let ROUTE390 = browser.currentScene.createNode("ROUTE");
ROUTE390.fromField = "value_changed";
ROUTE390.fromNode = "l_shoulder_RotationInterpolator_BasicDive";
ROUTE390.toField = "set_rotation";
ROUTE390.toNode = "hanim_l_shoulder";
browser.currentScene.children[48] = ROUTE390;

