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
meta3.content = "NancyDiving.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "description";
meta4.content = "Nancy having fun scuba diving!";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "creator";
meta5.content = "Etsuko Lippi";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "translator";
meta6.content = "Tom Miller";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "translator";
meta7.content = "Don Brutzman";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "created";
meta8.content = "17 December 2001";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "modified";
meta9.content = "Tue, 09 Sep 2025 19:39:12 GMT";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "TODO";
meta10.content = "convert to HAnim 2.0";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "error";
meta11.content = "Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "hint";
meta12.content = "Default orientation along X axis (vice HAnim required Y axis) since diving posture is typically prone.";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "warning";
meta13.content = "problem with left arm animation";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "warning";
meta14.content = "Viewpoint nodes need to be made child nodes under HAnimHumanoid with containerField='viewpoints'.";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "identifier";
meta15.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/NancyDiving.x3d";
head1.meta[13] = meta15;

head = head1;

Background Background17 = createNode("Background");
Background17.skyColor = new MFColor(new float[0,0.4,1]);
Background17.groundColor = new MFColor(new float[0,0.4,1]);
children = new MFNode();

children[0] = Background17;

Viewpoint Viewpoint18 = createNode("Viewpoint");
Viewpoint18.DEF = "DefaultViewpoint";
Viewpoint18.description = "Nancy diving, view from right side";
Viewpoint18.position = new SFVec3f(new float[0,0,3]);
children[1] = Viewpoint18;

Group Group19 = createNode("Group");
Group19.DEF = "HighResolution";
Transform Transform20 = createNode("Transform");
Transform20.rotation = new SFRotation(new float[1,0,0,1.57]);
Transform Transform21 = createNode("Transform");
Transform21.rotation = new SFRotation(new float[0,0,1,-1.57]);
Group Group22 = createNode("Group");
Group22.DEF = "Viewpoints";
Viewpoint Viewpoint23 = createNode("Viewpoint");
Viewpoint23.description = "Nancy diving, view from below";
Viewpoint23.position = new SFVec3f(new float[0,0,4]);
Group22.children = new MFNode();

Group22.children[0] = Viewpoint23;

Viewpoint Viewpoint24 = createNode("Viewpoint");
Viewpoint24.description = "Nancy diving, view from ahead";
Viewpoint24.position = new SFVec3f(new float[0,3,0]);
Viewpoint24.orientation = new SFRotation(new float[1,0,0,-1.57]);
Group22.children[1] = Viewpoint24;

Viewpoint Viewpoint25 = createNode("Viewpoint");
Viewpoint25.description = "Nancy diving, view from left side";
Viewpoint25.position = new SFVec3f(new float[3,0,0]);
Viewpoint25.orientation = new SFRotation(new float[-0.58,0.58,-0.58,2.09]);
Group22.children[2] = Viewpoint25;

Transform Transform26 = createNode("Transform");
Transform26.translation = new SFVec3f(new float[0,-3,-0.8]);
Transform26.rotation = new SFRotation(new float[1,0,0,1.57]);
Viewpoint Viewpoint27 = createNode("Viewpoint");
Viewpoint27.description = "Nancy diving view from behind";
Viewpoint27.position = new SFVec3f(new float[0,0,0]);
Viewpoint27.orientation = new SFRotation(new float[0,0,1,3.14]);
Transform26.children = new MFNode();

Transform26.children[0] = Viewpoint27;

Group22.children[3] = Transform26;

Viewpoint Viewpoint28 = createNode("Viewpoint");
Viewpoint28.description = "Nancy diving view from above";
Viewpoint28.position = new SFVec3f(new float[0,0,-4]);
Viewpoint28.orientation = new SFRotation(new float[0,1,0,3.14]);
Group22.children[4] = Viewpoint28;

Transform Transform29 = createNode("Transform");
Transform29.translation = new SFVec3f(new float[0,0.45,-0.04]);
Transform29.rotation = new SFRotation(new float[1,0,0,1.57]);
Viewpoint Viewpoint30 = createNode("Viewpoint");
Viewpoint30.description = "Nancy diving, view through her goggles";
Viewpoint30.position = new SFVec3f(new float[0,0,0]);
Viewpoint30.orientation = new SFRotation(new float[0,0,1,3.14]);
Transform29.children = new MFNode();

Transform29.children[0] = Viewpoint30;

Group22.children[5] = Transform29;

Transform21.children = new MFNode();

Transform21.children[0] = Group22;

Transform Transform31 = createNode("Transform");
Transform31.translation = new SFVec3f(new float[0,-1,0]);
HAnimHumanoid HAnimHumanoid32 = createNode("HAnimHumanoid");
HAnimHumanoid32.DEF = "hanim_Nancy";
HAnimHumanoid32.name = "Nancy";
HAnimHumanoid32.version = "1.0";
HAnimJoint HAnimJoint33 = createNode("HAnimJoint");
HAnimJoint33.DEF = "hanim_humanoid_root";
HAnimJoint33.name = "humanoid_root";
HAnimJoint33.center = new SFVec3f(new float[-0.00405,0.855,-0.000113]);
HAnimJoint HAnimJoint34 = createNode("HAnimJoint");
HAnimJoint34.DEF = "hanim_sacroiliac";
HAnimJoint34.name = "sacroiliac";
HAnimJoint34.center = new SFVec3f(new float[0,1.01,-0.0204]);
HAnimSegment HAnimSegment35 = createNode("HAnimSegment");
HAnimSegment35.DEF = "hanim_pelvis";
HAnimSegment35.name = "pelvis";
Shape Shape36 = createNode("Shape");
Appearance Appearance37 = createNode("Appearance");
Material Material38 = createNode("Material");
Material38.DEF = "Pants_Color";
Material38.diffuseColor = new SFColor(new float[0,0,0.502]);
Appearance37.material = Material38;

Shape36.appearance = Appearance37;

IndexedFaceSet IndexedFaceSet39 = createNode("IndexedFaceSet");
IndexedFaceSet39.creaseAngle = 1.14;
IndexedFaceSet39.coordIndex = new MFInt32(new int[0,1,40,-1,1,2,40,-1,2,3,40,-1,3,4,40,-1,4,5,40,-1,5,4,9,-1,4,3,8,-1,3,2,8,-1,2,1,6,-1,0,7,1,-1,7,6,1,-1,6,8,2,-1,9,4,10,-1,4,8,10,-1,8,6,12,-1,7,0,47,-1,50,5,9,-1,7,47,55,-1,55,13,7,-1,50,9,56,-1,9,10,14,-1,10,11,15,-1,11,12,16,-1,12,13,19,-1,13,55,17,-1,60,17,55,-1,17,19,13,-1,19,16,12,-1,16,15,11,-1,15,18,10,-1,14,56,9,-1,56,14,64,-1,17,60,20,-1,20,19,17,-1,21,64,14,-1,14,22,21,-1,15,16,24,-1,16,19,24,-1,19,20,26,-1,24,23,15,-1,64,21,69,-1,21,22,29,-1,19,26,25,-1,20,63,27,-1,27,26,20,-1,25,24,19,-1,30,29,22,-1,29,28,21,-1,28,69,21,-1,27,34,26,-1,69,28,79,-1,29,30,32,-1,30,23,33,-1,23,24,37,-1,25,26,34,-1,83,27,77,-1,37,33,23,-1,33,32,30,-1,31,79,28,-1,79,31,84,-1,32,33,36,-1,24,25,37,-1,34,27,83,-1,83,38,34,-1,34,37,25,-1,37,36,33,-1,36,35,32,-1,84,31,89,-1,31,35,89,-1,35,36,39,-1,36,37,39,-1,38,83,89,-1,89,39,38,-1,39,89,35,-1,40,41,0,-1,40,42,41,-1,40,43,42,-1,40,44,43,-1,40,45,44,-1,49,44,45,-1,48,43,44,-1,48,42,43,-1,46,41,42,-1,41,47,0,-1,41,46,47,-1,42,48,46,-1,51,44,49,-1,51,48,44,-1,48,52,53,-1,49,45,50,-1,56,49,50,-1,57,51,49,-1,58,53,52,-1,59,54,53,-1,62,55,54,-1,55,62,60,-1,54,59,62,-1,53,58,59,-1,51,61,58,-1,49,56,57,-1,64,57,56,-1,67,59,58,-1,68,62,59,-1,60,63,20,-1,60,62,63,-1,59,67,68,-1,58,61,67,-1,57,64,65,-1,65,66,57,-1,71,63,62,-1,69,65,64,-1,74,66,65,-1,78,68,67,-1,70,71,62,-1,63,72,27,-1,63,71,72,-1,68,78,76,-1,67,75,78,-1,66,74,75,-1,65,73,74,-1,65,69,73,-1,77,27,72,-1,71,82,72,-1,79,73,69,-1,81,75,74,-1,82,71,70,-1,77,72,83,-1,73,79,80,-1,84,80,79,-1,86,75,81,-1,83,72,82,-1,82,88,83,-1,70,87,82,-1,81,85,86,-1,89,80,84,-1,89,85,80,-1,90,86,85,-1,90,87,86,-1,89,83,88,-1,88,90,89,-1,85,89,90,-1,50,45,5,-1,45,40,5,-1,10,8,11,-1,8,12,11,-1,18,22,10,-1,22,14,10,-1,57,66,51,-1,66,61,51,-1,51,58,48,-1,58,52,48,-1,48,53,46,-1,53,54,46,-1,76,70,68,-1,70,62,68,-1,29,32,28,-1,28,32,31,-1,32,35,31,-1,85,81,80,-1,81,73,80,-1,81,74,73,-1,39,37,38,-1,37,34,38,-1,82,87,88,-1,87,90,88,-1,87,78,86,-1,78,75,86,-1,61,66,67,-1,66,75,67,-1,22,18,15,-1,23,30,15,-1,30,22,15,-1,13,12,7,-1,12,6,7,-1,46,54,47,-1,54,55,47,-1,87,76,78,-1,87,70,76,-1]);
Coordinate Coordinate40 = createNode("Coordinate");
Coordinate40.point = new MFVec3f(new float[0,1.06,0.0218,0.0561,1.07,0.00726,0.0851,1.07,-0.0115,0.104,1.07,-0.0497,0.0851,1.07,-0.0851,0.032,1.06,-0.0985,0.0873,1.04,0.0078,0.033,1.04,0.0395,0.123,1.05,-0.0405,0.0609,1.02,-0.106,0.0894,0.996,-0.106,0.143,1,-0.0309,0.117,1,0.0164,0.0314,0.999,0.0502,0.0314,0.96,-0.13,0.156,0.966,-0.0405,0.156,0.968,-0.00724,0.0341,0.954,0.0513,0.115,0.96,-0.0916,0.121,0.926,0.0352,0.0357,0.92,0.0497,0.0314,0.91,-0.146,0.0991,0.91,-0.131,0.169,0.883,-0.0448,0.169,0.885,-0.00939,0.123,0.873,0.0384,0.0926,0.872,0.047,0.0325,0.873,0.0287,0.0293,0.866,-0.142,0.102,0.869,-0.131,0.129,0.868,-0.103,0.0314,0.84,-0.125,0.101,0.844,-0.122,0.133,0.846,-0.0878,0.0653,0.835,0.0132,0.0615,0.824,-0.111,0.0985,0.823,-0.101,0.132,0.826,-0.0448,0.0609,0.821,-0.0158,0.0599,0.812,-0.0545,0,1.08,-0.0266,-0.0561,1.07,0.00726,-0.0851,1.07,-0.0115,-0.104,1.07,-0.0497,-0.0851,1.07,-0.0851,-0.032,1.06,-0.0985,-0.0873,1.04,0.0078,-0.033,1.04,0.0395,-0.123,1.05,-0.0405,-0.0609,1.02,-0.106,0,1.02,-0.108,-0.0894,0.996,-0.106,-0.143,1,-0.0309,-0.144,1,-0.011,-0.117,1,0.0164,-0.0314,0.999,0.0502,0,0.961,-0.123,-0.0314,0.96,-0.13,-0.156,0.966,-0.0405,-0.156,0.968,-0.00724,-0.0341,0.954,0.0513,-0.115,0.96,-0.0916,-0.121,0.926,0.0352,-0.0357,0.92,0.0497,0,0.91,-0.127,-0.0314,0.91,-0.146,-0.0991,0.91,-0.131,-0.167,0.911,-0.0448,-0.167,0.912,-0.00671,0,0.883,-0.129,-0.123,0.873,0.0384,-0.0926,0.872,0.047,-0.0325,0.873,0.0287,-0.0293,0.866,-0.142,-0.102,0.869,-0.131,-0.129,0.868,-0.103,-0.166,0.863,-0.0148,0,0.863,-0.00456,-0.166,0.862,-0.0459,0,0.858,-0.1,-0.0314,0.84,-0.125,-0.101,0.844,-0.122,-0.0653,0.835,0.0132,0,0.839,-0.0217,0,0.835,-0.0867,-0.0615,0.824,-0.111,-0.0985,0.823,-0.101,-0.132,0.826,-0.0448,-0.0609,0.821,-0.0158,0,0.831,-0.0626,-0.0599,0.812,-0.0545]);
IndexedFaceSet39.coord = Coordinate40;

Shape36.geometry = IndexedFaceSet39;

HAnimSegment35.children = new MFNode();

HAnimSegment35.children[0] = Shape36;

HAnimJoint34.children = new MFNode();

HAnimJoint34.children[0] = HAnimSegment35;

HAnimJoint HAnimJoint41 = createNode("HAnimJoint");
HAnimJoint41.DEF = "hanim_l_hip";
HAnimJoint41.name = "l_hip";
HAnimJoint41.center = new SFVec3f(new float[0.122,0.888271,-0.0693267]);
HAnimSegment HAnimSegment42 = createNode("HAnimSegment");
HAnimSegment42.DEF = "hanim_l_thigh";
HAnimSegment42.name = "l_thigh";
Shape Shape43 = createNode("Shape");
Appearance Appearance44 = createNode("Appearance");
Material Material45 = createNode("Material");
Material45.USE = "Pants_Color";
Appearance44.material = Material45;

Shape43.appearance = Appearance44;

IndexedFaceSet IndexedFaceSet46 = createNode("IndexedFaceSet");
IndexedFaceSet46.creaseAngle = 1.32;
IndexedFaceSet46.coordIndex = new MFInt32(new int[0,4,5,-1,3,4,0,-1,0,7,1,-1,0,8,7,-1,0,6,8,-1,0,5,6,-1,0,2,3,-1,0,1,2,-1,9,2,1,-1,10,3,2,-1,11,4,3,-1,12,5,4,-1,13,6,5,-1,15,7,8,-1,9,1,7,-1,7,15,9,-1,8,14,15,-1,5,16,13,-1,5,12,16,-1,4,11,12,-1,3,10,11,-1,2,9,10,-1,20,13,16,-1,18,11,10,-1,19,12,11,-1,20,16,12,-1,23,15,14,-1,15,23,24,-1,12,19,20,-1,11,18,19,-1,10,17,18,-1,26,18,17,-1,27,19,18,-1,27,20,19,-1,28,21,20,-1,29,23,22,-1,23,29,30,-1,20,32,28,-1,20,27,32,-1,18,26,27,-1,17,25,26,-1,25,31,30,-1,30,29,26,-1,30,26,25,-1,29,28,27,-1,29,27,26,-1,28,32,27,-1,22,23,14,-1,20,21,13,-1,21,22,13,-1,22,14,13,-1,9,15,24,-1,10,9,17,-1,9,24,17,-1,6,13,8,-1,13,14,8,-1,28,29,21,-1,29,22,21,-1,24,31,17,-1,31,25,17,-1,30,31,23,-1,31,24,23,-1]);
Coordinate Coordinate47 = createNode("Coordinate");
Coordinate47.point = new MFVec3f(new float[0.0969,0.804,-0.0486,0.101,0.876,0.0336,0.17,0.894,-0.00778,0.17,0.891,-0.076,0.124,0.858,-0.129,0.076,0.843,-0.143,0.025,0.819,-0.0889,0.0507,0.847,0.0196,0.00349,0.826,-0.0287,0.0991,0.808,0.0406,0.161,0.814,-0.00187,0.165,0.808,-0.0755,0.122,0.788,-0.126,0.00993,0.762,-0.0937,0.00993,0.762,-0.0309,0.0491,0.777,0.0185,0.0755,0.766,-0.139,0.13,0.597,-0.00618,0.132,0.6,-0.0593,0.108,0.603,-0.105,0.0722,0.601,-0.118,0.0314,0.59,-0.0953,0.0239,0.566,-0.0427,0.047,0.566,0.0051,0.0878,0.581,0.0217,0.114,0.499,-0.0132,0.116,0.488,-0.061,0.103,0.567,-0.0991,0.0362,0.557,-0.0926,0.025,0.486,-0.047,0.0507,0.497,-0.00188,0.0862,0.513,0.018,0.0733,0.579,-0.108]);
IndexedFaceSet46.coord = Coordinate47;

Shape43.geometry = IndexedFaceSet46;

HAnimSegment42.children = new MFNode();

HAnimSegment42.children[0] = Shape43;

HAnimJoint41.children = new MFNode();

HAnimJoint41.children[0] = HAnimSegment42;

HAnimJoint HAnimJoint48 = createNode("HAnimJoint");
HAnimJoint48.DEF = "hanim_l_knee";
HAnimJoint48.name = "l_knee";
HAnimJoint48.center = new SFVec3f(new float[0.0738,0.517,-0.0284]);
HAnimSegment HAnimSegment49 = createNode("HAnimSegment");
HAnimSegment49.DEF = "hanim_l_calf";
HAnimSegment49.name = "l_calf";
Shape Shape50 = createNode("Shape");
Appearance Appearance51 = createNode("Appearance");
Material Material52 = createNode("Material");
Material52.USE = "Pants_Color";
Appearance51.material = Material52;

Shape50.appearance = Appearance51;

IndexedFaceSet IndexedFaceSet53 = createNode("IndexedFaceSet");
IndexedFaceSet53.creaseAngle = 1.57;
IndexedFaceSet53.coordIndex = new MFInt32(new int[2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,7,6,-1,2,8,7,-1,2,0,8,-1,9,8,0,-1,10,6,7,-1,11,5,6,-1,12,4,5,-1,12,3,4,-1,13,1,3,-1,1,13,14,-1,3,12,13,-1,5,11,12,-1,6,10,11,-1,8,9,15,-1,22,13,12,-1,13,22,14,-1,17,15,9,-1,20,12,11,-1,21,22,12,-1,23,9,14,-1,9,23,16,-1,14,22,23,-1,12,20,21,-1,15,17,18,-1,9,16,17,-1,24,17,16,-1,25,18,17,-1,26,19,18,-1,27,20,19,-1,28,21,20,-1,29,22,21,-1,30,23,22,-1,31,16,23,-1,23,30,31,-1,22,29,30,-1,21,28,29,-1,20,27,28,-1,19,26,27,-1,18,25,26,-1,17,24,25,-1,16,31,24,-1,33,26,25,-1,36,29,28,-1,37,31,30,-1,29,36,30,-1,25,24,33,-1,31,37,24,-1,32,33,24,-1,24,37,32,-1,38,37,30,-1,30,36,38,-1,41,33,32,-1,42,39,34,-1,44,36,35,-1,45,38,36,-1,46,37,38,-1,38,45,46,-1,36,44,45,-1,35,43,44,-1,39,42,47,-1,32,40,41,-1,40,46,45,-1,41,40,45,-1,41,45,44,-1,44,43,42,-1,44,42,41,-1,43,47,42,-1,39,35,28,-1,35,36,28,-1,34,39,27,-1,39,28,27,-1,33,34,26,-1,34,27,26,-1,33,41,34,-1,41,42,34,-1,40,32,46,-1,32,37,46,-1,10,19,11,-1,19,20,11,-1,14,9,1,-1,9,0,1,-1,8,15,7,-1,7,15,10,-1,15,19,10,-1,15,18,19,-1,43,35,47,-1,35,39,47,-1]);
Coordinate Coordinate54 = createNode("Coordinate");
Coordinate54.point = new MFVec3f(new float[0.0883,0.532,-0.00349,0.0609,0.533,-0.00833,0.0814,0.55,-0.0395,0.0529,0.536,-0.0368,0.0577,0.544,-0.0577,0.0722,0.546,-0.0717,0.0975,0.54,-0.0647,0.105,0.539,-0.0438,0.104,0.539,-0.0223,0.0862,0.506,0.0158,0.101,0.51,-0.0798,0.0706,0.51,-0.101,0.0406,0.513,-0.0744,0.0368,0.51,-0.0357,0.0556,0.506,-0.000272,0.117,0.508,-0.0169,0.0878,0.361,-0.0126,0.123,0.363,-0.04,0.123,0.363,-0.0663,0.107,0.367,-0.107,0.0588,0.365,-0.122,0.0228,0.358,-0.0926,0.0239,0.358,-0.0475,0.0497,0.358,-0.0234,0.118,0.311,-0.0411,0.118,0.309,-0.0685,0.105,0.31,-0.108,0.0572,0.308,-0.123,0.0201,0.309,-0.0937,0.0191,0.311,-0.0508,0.0475,0.307,-0.0282,0.0883,0.309,-0.018,0.0959,0.124,-0.04,0.0905,0.12,-0.0647,0.0738,0.117,-0.0814,0.0373,0.121,-0.0636,0.0416,0.124,-0.0416,0.0744,0.13,-0.0212,0.0561,0.13,-0.0245,0.0529,0.121,-0.0873,0.0948,0.0897,-0.0368,0.0916,0.0779,-0.0604,0.0717,0.0854,-0.0765,0.0406,0.0918,-0.0626,0.0384,0.0881,-0.0363,0.054,0.0972,-0.0175,0.0765,0.11,-0.0169,0.0486,0.0999,-0.0835]);
IndexedFaceSet53.coord = Coordinate54;

Shape50.geometry = IndexedFaceSet53;

HAnimSegment49.children = new MFNode();

HAnimSegment49.children[0] = Shape50;

HAnimJoint48.children = new MFNode();

HAnimJoint48.children[0] = HAnimSegment49;

HAnimJoint HAnimJoint55 = createNode("HAnimJoint");
HAnimJoint55.DEF = "hanim_l_ankle";
HAnimJoint55.name = "l_ankle";
HAnimJoint55.center = new SFVec3f(new float[0.0645,0.0719,-0.048]);
HAnimSegment HAnimSegment56 = createNode("HAnimSegment");
HAnimSegment56.DEF = "hanim_l_hindfoot";
HAnimSegment56.name = "l_hindfoot";
Shape Shape57 = createNode("Shape");
Appearance Appearance58 = createNode("Appearance");
Material Material59 = createNode("Material");
Material59.DEF = "Shoe_Color";
Material59.ambientIntensity = 0.25;
Material59.diffuseColor = new SFColor(new float[0.753,1,0.243]);
Appearance58.material = Material59;

Shape57.appearance = Appearance58;

IndexedFaceSet IndexedFaceSet60 = createNode("IndexedFaceSet");
IndexedFaceSet60.creaseAngle = 1.57;
IndexedFaceSet60.coordIndex = new MFInt32(new int[2,1,0,-1,4,3,1,-1,2,4,1,-1,3,6,5,-1,1,3,5,-1,6,8,7,-1,5,6,7,-1,8,10,9,-1,7,8,9,-1,10,12,11,-1,9,10,11,-1,12,14,13,-1,11,12,13,-1,14,16,15,-1,13,14,15,-1,16,18,17,-1,15,16,17,-1,18,20,19,-1,17,18,19,-1,20,22,21,-1,19,20,21,-1,22,24,23,-1,21,22,23,-1,24,25,0,-1,23,24,0,-1,25,4,2,-1,0,25,2,-1,18,26,20,-1,16,26,18,-1,27,26,16,-1,14,27,16,-1,12,27,14,-1,28,27,12,-1,29,28,12,-1,10,29,12,-1,8,29,10,-1,6,37,8,-1,24,30,25,-1,31,30,24,-1,22,31,24,-1,32,31,22,-1,20,32,22,-1,33,32,20,-1,26,33,20,-1,34,33,26,-1,27,34,26,-1,35,34,27,-1,28,35,27,-1,29,35,28,-1,36,35,29,-1,8,36,29,-1,37,36,8,-1,6,38,37,-1,3,38,6,-1,39,38,3,-1,30,39,25,-1,41,40,30,-1,31,41,30,-1,42,41,31,-1,32,42,31,-1,43,42,32,-1,33,43,32,-1,44,43,33,-1,34,44,33,-1,45,44,34,-1,35,45,34,-1,46,45,35,-1,36,46,35,-1,47,46,36,-1,37,47,36,-1,38,47,37,-1,48,47,38,-1,49,48,38,-1,39,49,38,-1,40,49,39,-1,30,40,39,-1,48,49,50,-1,47,48,50,-1,46,47,50,-1,45,46,50,-1,44,45,50,-1,43,44,50,-1,42,43,50,-1,41,42,50,-1,40,41,50,-1,49,40,50,-1,11,13,15,-1,11,15,17,-1,9,11,17,-1,9,17,19,-1,7,9,19,-1,7,19,21,-1,5,7,21,-1,5,21,23,-1,5,23,0,-1,1,5,0,-1,3,4,39,-1,4,25,39,-1]);
Coordinate Coordinate61 = createNode("Coordinate");
Coordinate61.point = new MFVec3f(new float[0.0529,0,-0.0923,0.0863,0,-0.0862,0.0727,0,-0.0994,0.0863,0.0219,-0.0862,0.0727,0.0219,-0.0994,0.1,0,-0.0594,0.1,0.0219,-0.0594,0.113,0,0.0645,0.113,0.0219,0.0645,0.112,0,0.117,0.112,0.0156,0.117,0.0701,0,0.146,0.0701,0.0156,0.146,0.0468,0,0.153,0.0468,0.0156,0.153,0.0215,0,0.146,0.0215,0.0156,0.146,0.0165,0,0.125,0.0165,0.0156,0.125,0.0211,0,0.0377,0.0211,0.0219,0.0377,0.0393,0,-0.0129,0.0393,0.0219,-0.0129,0.0433,0,-0.0534,0.0433,0.0219,-0.0534,0.0529,0.0219,-0.0923,0.0305,0.0253,0.0938,0.0505,0.0253,0.099,0.0854,0.0253,0.0834,0.102,0.0253,0.0707,0.0568,0.0573,-0.0918,0.0492,0.0573,-0.0497,0.0435,0.0573,-0.0225,0.0442,0.0573,0.0235,0.0623,0.0573,0.0366,0.0911,0.0573,0.0159,0.0962,0.0573,-0.0121,0.0911,0.0573,-0.0482,0.0758,0.0573,-0.0899,0.0676,0.0573,-0.0962,0.0578,0.0953,-0.0896,0.0489,0.0953,-0.0757,0.0447,0.0953,-0.0432,0.0451,0.0953,-0.0128,0.0624,0.0953,-0.00466,0.0857,0.0953,-0.0134,0.0953,0.0953,-0.038,0.0843,0.0953,-0.0803,0.0761,0.0953,-0.0889,0.0682,0.0953,-0.0929,0.0675,0.13,-0.0608]);
IndexedFaceSet60.coord = Coordinate61;

Shape57.geometry = IndexedFaceSet60;

HAnimSegment56.children = new MFNode();

HAnimSegment56.children[0] = Shape57;

Transform Transform62 = createNode("Transform");
Transform62.scale = new SFVec3f(new float[0.015,0.015,0.015]);
Transform Transform63 = createNode("Transform");
Transform63.translation = new SFVec3f(new float[6,-0.5,-7.5]);
Transform63.rotation = new SFRotation(new float[0,0,1,1.57]);
Shape Shape64 = createNode("Shape");
Appearance Appearance65 = createNode("Appearance");
Material Material66 = createNode("Material");
Material66.diffuseColor = new SFColor(new float[0.753,1,0.243]);
Appearance65.material = Material66;

Shape64.appearance = Appearance65;

Extrusion Extrusion67 = createNode("Extrusion");
Extrusion67.DEF = "FinExtrusionLeft";
Extrusion67.ccw = False;
Extrusion67.creaseAngle = 3.14;
Extrusion67.crossSection = new MFVec2f(new float[-1,0,-0.8,2,-0.7,3,0,5.2,0.7,3,0.8,2,1,0,0.8,-2,0.7,-3,0,-5.2,-0.7,-3,-0.8,-2,-1,0]);
Extrusion67.scale = new MFVec2f(new float[0.25,0.25,0.5,0.75,0.5,1.2,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35]);
Extrusion67.spine = new MFVec3f(new float[0,0,1,0,0,5,0,0,8,0,0,12,0,0,15,0.5,0,18,1.5,0,25,2.5,0,30,4,0,34]);
Shape64.geometry = Extrusion67;

Transform63.child = new undefined();

Transform63.child[0] = Shape64;

Transform62.children = new MFNode();

Transform62.children[0] = Transform63;

HAnimSegment56.children[1] = Transform62;

HAnimJoint55.children = new MFNode();

HAnimJoint55.children[0] = HAnimSegment56;

HAnimJoint48.children[1] = HAnimJoint55;

HAnimJoint41.children[1] = HAnimJoint48;

HAnimJoint34.children[1] = HAnimJoint41;

HAnimJoint HAnimJoint68 = createNode("HAnimJoint");
HAnimJoint68.DEF = "hanim_r_hip";
HAnimJoint68.name = "r_hip";
HAnimJoint68.center = new SFVec3f(new float[-0.11,0.892362,-0.0732533]);
HAnimSegment HAnimSegment69 = createNode("HAnimSegment");
HAnimSegment69.DEF = "hanim_r_thigh";
HAnimSegment69.name = "r_thigh";
Shape Shape70 = createNode("Shape");
Appearance Appearance71 = createNode("Appearance");
Material Material72 = createNode("Material");
Material72.USE = "Pants_Color";
Appearance71.material = Material72;

Shape70.appearance = Appearance71;

IndexedFaceSet IndexedFaceSet73 = createNode("IndexedFaceSet");
IndexedFaceSet73.creaseAngle = 1.61;
IndexedFaceSet73.coordIndex = new MFInt32(new int[5,4,0,-1,0,4,3,-1,1,7,0,-1,7,8,0,-1,8,6,0,-1,6,5,0,-1,3,2,0,-1,2,1,0,-1,1,2,9,-1,2,3,10,-1,3,4,11,-1,4,5,12,-1,5,6,13,-1,8,7,15,-1,7,1,9,-1,9,15,7,-1,15,14,8,-1,13,16,5,-1,16,12,5,-1,12,11,4,-1,11,10,3,-1,10,9,2,-1,12,16,20,-1,13,14,22,-1,14,15,23,-1,24,23,15,-1,23,22,14,-1,20,19,12,-1,17,18,26,-1,18,19,27,-1,19,20,27,-1,20,21,28,-1,22,23,29,-1,30,29,23,-1,27,26,18,-1,26,25,17,-1,30,31,25,-1,25,26,29,-1,25,29,30,-1,26,27,28,-1,26,28,29,-1,27,20,28,-1,24,15,9,-1,22,21,13,-1,29,28,22,-1,28,21,22,-1,24,31,23,-1,31,30,23,-1,25,31,17,-1,31,24,17,-1,17,24,10,-1,24,9,10,-1,18,10,11,-1,18,17,10,-1,18,12,19,-1,18,11,12,-1,21,20,13,-1,20,16,13,-1,14,13,8,-1,13,6,8,-1]);
Coordinate Coordinate74 = createNode("Coordinate");
Coordinate74.point = new MFVec3f(new float[-0.0969,0.804,-0.0486,-0.101,0.876,0.0336,-0.17,0.894,-0.00778,-0.17,0.891,-0.076,-0.124,0.858,-0.129,-0.076,0.843,-0.143,-0.025,0.819,-0.0889,-0.0507,0.847,0.0196,-0.00349,0.826,-0.0287,-0.0991,0.808,0.0406,-0.161,0.814,-0.00187,-0.165,0.808,-0.0755,-0.122,0.788,-0.126,-0.00993,0.762,-0.0937,-0.00993,0.762,-0.0309,-0.0491,0.777,0.0185,-0.0755,0.766,-0.139,-0.13,0.597,-0.00618,-0.132,0.6,-0.0593,-0.108,0.603,-0.105,-0.0722,0.601,-0.118,-0.0314,0.59,-0.0953,-0.0239,0.566,-0.0427,-0.047,0.566,0.0051,-0.0878,0.581,0.0217,-0.114,0.499,-0.0132,-0.116,0.488,-0.061,-0.103,0.567,-0.0991,-0.0362,0.557,-0.0926,-0.025,0.486,-0.047,-0.0507,0.497,-0.00188,-0.0862,0.513,0.018]);
IndexedFaceSet73.coord = Coordinate74;

Shape70.geometry = IndexedFaceSet73;

HAnimSegment69.children = new MFNode();

HAnimSegment69.children[0] = Shape70;

HAnimJoint68.children = new MFNode();

HAnimJoint68.children[0] = HAnimSegment69;

HAnimJoint HAnimJoint75 = createNode("HAnimJoint");
HAnimJoint75.DEF = "hanim_r_knee";
HAnimJoint75.name = "r_knee";
HAnimJoint75.center = new SFVec3f(new float[-0.0699,0.51,-0.0166]);
HAnimSegment HAnimSegment76 = createNode("HAnimSegment");
HAnimSegment76.DEF = "hanim_r_calf";
HAnimSegment76.name = "r_calf";
Shape Shape77 = createNode("Shape");
Appearance Appearance78 = createNode("Appearance");
Material Material79 = createNode("Material");
Material79.USE = "Pants_Color";
Appearance78.material = Material79;

Shape77.appearance = Appearance78;

IndexedFaceSet IndexedFaceSet80 = createNode("IndexedFaceSet");
IndexedFaceSet80.creaseAngle = 1.57;
IndexedFaceSet80.coordIndex = new MFInt32(new int[14,25,18,-1,25,32,18,-1,32,27,18,-1,27,22,18,-1,22,10,18,-1,10,6,18,-1,6,8,18,-1,8,14,18,-1,14,8,17,-1,6,10,9,-1,10,22,24,-1,22,27,39,-1,27,32,39,-1,32,25,42,-1,25,14,30,-1,17,30,14,-1,30,42,25,-1,42,39,32,-1,39,24,22,-1,24,9,10,-1,4,17,8,-1,39,42,43,-1,30,43,42,-1,17,4,1,-1,24,39,26,-1,39,43,44,-1,30,17,34,-1,16,34,17,-1,34,43,30,-1,44,26,39,-1,0,1,4,-1,1,16,17,-1,16,1,3,-1,1,0,2,-1,0,5,7,-1,5,26,28,-1,26,44,45,-1,44,43,46,-1,43,34,36,-1,34,16,15,-1,15,36,34,-1,36,46,43,-1,46,45,44,-1,45,28,26,-1,28,7,5,-1,7,2,0,-1,2,3,1,-1,3,15,16,-1,45,46,37,-1,36,15,20,-1,36,37,46,-1,13,2,7,-1,3,20,15,-1,3,2,13,-1,36,20,29,-1,29,37,36,-1,13,21,23,-1,21,33,23,-1,41,37,40,-1,37,29,31,-1,29,20,19,-1,19,31,29,-1,31,40,37,-1,40,38,41,-1,35,23,33,-1,23,12,13,-1,12,11,13,-1,31,19,11,-1,40,31,11,-1,40,11,12,-1,12,23,38,-1,12,38,40,-1,23,35,38,-1,28,21,7,-1,21,13,7,-1,45,33,28,-1,33,21,28,-1,33,45,41,-1,45,37,41,-1,33,41,35,-1,41,38,35,-1,20,3,47,-1,11,19,47,-1,19,20,47,-1,13,47,3,-1,13,11,47,-1,4,8,6,-1,26,5,24,-1,5,9,24,-1,6,9,4,-1,9,0,4,-1,9,5,0,-1]);
Coordinate Coordinate81 = createNode("Coordinate");
Coordinate81.point = new MFVec3f(new float[-0.123,0.363,-0.0663,-0.123,0.363,-0.04,-0.118,0.309,-0.0685,-0.118,0.311,-0.0411,-0.117,0.508,-0.0169,-0.107,0.367,-0.107,-0.105,0.539,-0.0438,-0.105,0.31,-0.108,-0.104,0.539,-0.0223,-0.101,0.51,-0.0798,-0.0975,0.54,-0.0647,-0.0948,0.0897,-0.0368,-0.0916,0.0779,-0.0604,-0.0905,0.12,-0.0647,-0.0883,0.532,-0.00349,-0.0883,0.309,-0.018,-0.0878,0.361,-0.0126,-0.0862,0.506,0.0158,-0.0814,0.55,-0.0395,-0.0765,0.11,-0.0169,-0.0744,0.13,-0.0212,-0.0738,0.117,-0.0814,-0.0722,0.546,-0.0717,-0.0717,0.0854,-0.0765,-0.0706,0.51,-0.101,-0.0609,0.533,-0.00833,-0.0588,0.365,-0.122,-0.0577,0.544,-0.0577,-0.0572,0.308,-0.123,-0.0561,0.13,-0.0245,-0.0556,0.506,-0.000272,-0.054,0.0972,-0.0175,-0.0529,0.536,-0.0368,-0.0529,0.121,-0.0873,-0.0497,0.358,-0.0234,-0.0486,0.0999,-0.0835,-0.0475,0.307,-0.0282,-0.0416,0.124,-0.0416,-0.0406,0.0918,-0.0626,-0.0406,0.513,-0.0744,-0.0384,0.0881,-0.0363,-0.0373,0.121,-0.0636,-0.0368,0.51,-0.0357,-0.0239,0.358,-0.0475,-0.0228,0.358,-0.0926,-0.0201,0.309,-0.0937,-0.0191,0.311,-0.0508,-0.0985,0.125,-0.0375]);
IndexedFaceSet80.coord = Coordinate81;

Shape77.geometry = IndexedFaceSet80;

HAnimSegment76.children = new MFNode();

HAnimSegment76.children[0] = Shape77;

HAnimJoint75.children = new MFNode();

HAnimJoint75.children[0] = HAnimSegment76;

HAnimJoint HAnimJoint82 = createNode("HAnimJoint");
HAnimJoint82.DEF = "hanim_r_ankle";
HAnimJoint82.name = "r_ankle";
HAnimJoint82.center = new SFVec3f(new float[-0.064,0.0753,-0.0412]);
HAnimSegment HAnimSegment83 = createNode("HAnimSegment");
HAnimSegment83.DEF = "hanim_r_hindfoot";
HAnimSegment83.name = "r_hindfoot";
Shape Shape84 = createNode("Shape");
Appearance Appearance85 = createNode("Appearance");
Material Material86 = createNode("Material");
Material86.USE = "Shoe_Color";
Appearance85.material = Material86;

Shape84.appearance = Appearance85;

IndexedFaceSet IndexedFaceSet87 = createNode("IndexedFaceSet");
IndexedFaceSet87.creaseAngle = 1.57;
IndexedFaceSet87.coordIndex = new MFInt32(new int[6,50,0,-1,50,8,7,-1,50,7,0,-1,1,9,8,-1,1,8,50,-1,49,10,9,-1,49,9,1,-1,46,11,10,-1,46,10,49,-1,2,12,11,-1,2,11,46,-1,3,13,12,-1,3,12,2,-1,4,14,13,-1,4,13,3,-1,45,14,4,-1,47,15,45,-1,19,15,47,-1,48,18,19,-1,5,16,18,-1,5,18,48,-1,6,17,16,-1,6,16,5,-1,0,7,17,-1,0,17,6,-1,14,20,21,-1,14,21,13,-1,13,21,12,-1,12,21,22,-1,12,22,11,-1,11,22,10,-1,17,23,16,-1,16,23,24,-1,16,24,18,-1,18,24,25,-1,18,25,19,-1,19,25,26,-1,19,26,15,-1,15,26,20,-1,20,26,27,-1,20,27,21,-1,21,27,28,-1,21,28,22,-1,22,28,29,-1,10,30,9,-1,9,30,31,-1,9,31,8,-1,8,31,32,-1,17,32,23,-1,23,33,34,-1,23,34,35,-1,23,35,24,-1,24,35,36,-1,24,36,25,-1,25,36,37,-1,25,37,26,-1,26,37,38,-1,26,38,27,-1,27,38,39,-1,27,39,28,-1,28,39,40,-1,28,40,29,-1,29,40,41,-1,29,41,30,-1,30,41,42,-1,30,42,31,-1,31,42,43,-1,31,43,32,-1,32,43,33,-1,32,33,23,-1,44,43,42,-1,44,42,41,-1,44,41,40,-1,44,40,39,-1,44,39,38,-1,44,38,37,-1,44,37,36,-1,44,36,35,-1,44,35,34,-1,44,34,33,-1,44,33,43,-1,4,3,2,-1,45,4,2,-1,45,2,46,-1,47,45,46,-1,48,46,49,-1,5,48,49,-1,5,49,1,-1,6,5,1,-1,6,1,50,-1,30,10,29,-1,10,22,29,-1,17,7,32,-1,7,8,32,-1,19,47,48,-1,47,46,48,-1,20,14,15,-1,14,45,15,-1]);
Coordinate Coordinate88 = createNode("Coordinate");
Coordinate88.point = new MFVec3f(new float[-0.0727,0,-0.0994,-0.1,0,-0.0594,-0.0701,0,0.146,-0.0468,0,0.153,-0.0215,0,0.146,-0.0433,0,-0.0534,-0.0529,0,-0.0923,-0.0727,0.0219,-0.0994,-0.0863,0.0219,-0.0862,-0.1,0.0219,-0.0594,-0.108,0.0219,-0.00479,-0.112,0.0156,0.117,-0.0701,0.0156,0.146,-0.0468,0.0156,0.153,-0.0215,0.0156,0.146,-0.0165,0.017,0.0777,-0.0433,0.0219,-0.0534,-0.0529,0.0219,-0.0923,-0.0445,0.0273,-0.0189,-0.0265,0.0253,0.0549,-0.0305,0.0253,0.0938,-0.069,0.0253,0.0938,-0.102,0.0253,0.0707,-0.0568,0.0573,-0.0918,-0.0492,0.0573,-0.0497,-0.0424,0.0573,-0.00142,-0.0478,0.0573,0.0341,-0.0623,0.0573,0.0366,-0.0864,0.0573,0.0245,-0.0962,0.0573,-0.0121,-0.0845,0.0573,-0.0764,-0.0758,0.0573,-0.0899,-0.0676,0.0573,-0.0962,-0.0578,0.0953,-0.0896,-0.0489,0.0953,-0.0757,-0.0459,0.0953,-0.0615,-0.0435,0.0953,-0.0292,-0.0485,0.0953,-0.00582,-0.0624,0.0953,-0.00466,-0.0857,0.0953,-0.0134,-0.0953,0.0953,-0.038,-0.0843,0.0953,-0.0803,-0.0761,0.0953,-0.0889,-0.0682,0.0953,-0.0929,-0.0675,0.13,-0.0608,-0.0165,0,0.125,-0.112,0,0.117,-0.0165,0,0.0777,-0.0393,0,-0.0129,-0.108,0,-0.00479,-0.0863,0,-0.0862]);
IndexedFaceSet87.coord = Coordinate88;

Shape84.geometry = IndexedFaceSet87;

HAnimSegment83.children = new MFNode();

HAnimSegment83.children[0] = Shape84;

Transform Transform89 = createNode("Transform");
Transform89.scale = new SFVec3f(new float[0.015,0.015,0.015]);
Transform Transform90 = createNode("Transform");
Transform90.translation = new SFVec3f(new float[-5,-0.5,-7.5]);
Transform90.rotation = new SFRotation(new float[0,0,1,1.57]);
Shape Shape91 = createNode("Shape");
Appearance Appearance92 = createNode("Appearance");
Material Material93 = createNode("Material");
Material93.diffuseColor = new SFColor(new float[0.753,1,0.243]);
Appearance92.material = Material93;

Shape91.appearance = Appearance92;

Extrusion Extrusion94 = createNode("Extrusion");
Extrusion94.DEF = "FinExtrusionRight";
Extrusion94.ccw = False;
Extrusion94.creaseAngle = 3.14;
Extrusion94.crossSection = new MFVec2f(new float[-1,0,-0.8,2,-0.7,3,0,5.2,0.7,3,0.8,2,1,0,0.8,-2,0.7,-3,0,-5.2,-0.7,-3,-0.8,-2,-1,0]);
Extrusion94.scale = new MFVec2f(new float[0.25,0.25,0.5,0.75,0.5,1.2,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35]);
Extrusion94.spine = new MFVec3f(new float[0,0,1,0,0,5,0,0,8,0,0,12,0,0,15,0.5,0,18,1.5,0,25,2.5,0,30,4,0,34]);
Shape91.geometry = Extrusion94;

Transform90.child = new undefined();

Transform90.child[0] = Shape91;

Transform89.children = new MFNode();

Transform89.children[0] = Transform90;

HAnimSegment83.children[1] = Transform89;

HAnimJoint82.children = new MFNode();

HAnimJoint82.children[0] = HAnimSegment83;

HAnimJoint75.children[1] = HAnimJoint82;

HAnimJoint68.children[1] = HAnimJoint75;

HAnimJoint34.children[2] = HAnimJoint68;

HAnimJoint33.children = new MFNode();

HAnimJoint33.children[0] = HAnimJoint34;

HAnimJoint HAnimJoint95 = createNode("HAnimJoint");
HAnimJoint95.DEF = "hanim_vl1";
HAnimJoint95.name = "vl1";
HAnimJoint95.center = new SFVec3f(new float[-0.00405,1.07,-0.0275]);
HAnimSegment HAnimSegment96 = createNode("HAnimSegment");
HAnimSegment96.DEF = "hanim_l1";
HAnimSegment96.name = "l1";
Transform Transform97 = createNode("Transform");
Transform97.translation = new SFVec3f(new float[-0.00405,1.07,-0.0275]);
Transform97.scale = new SFVec3f(new float[1.05,1.05,1.05]);
Shape Shape98 = createNode("Shape");
Appearance Appearance99 = createNode("Appearance");
Material Material100 = createNode("Material");
Material100.DEF = "WetShirtColor";
Material100.ambientIntensity = 0.25;
Material100.diffuseColor = new SFColor(new float[0,0,0.502]);
Appearance99.material = Material100;

ImageTexture ImageTexture101 = createNode("ImageTexture");
ImageTexture101.DEF = "small_logo_Tex";
ImageTexture101.url = new MFString(new java.lang.String["small_logo.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/small_logo.gif"]);
Appearance99.texture = ImageTexture101;

Shape98.appearance = Appearance99;

IndexedFaceSet IndexedFaceSet102 = createNode("IndexedFaceSet");
IndexedFaceSet102.creaseAngle = 1.59;
IndexedFaceSet102.coordIndex = new MFInt32(new int[0,1,2,-1,3,0,2,-1,4,5,6,-1,6,7,4,-1,8,7,6,-1,6,9,8,-1,9,10,8,-1,6,5,11,-1,9,6,12,-1,11,12,6,-1,12,10,9,-1,7,8,13,-1,13,4,7,-1,14,15,16,-1,15,17,13,-1,4,13,17,-1,17,15,18,-1,13,19,15,-1,19,13,8,-1,19,16,15,-1,16,19,8,-1,17,20,4,-1,5,4,20,-1,18,21,17,-1,20,17,21,-1,16,22,14,-1,22,16,23,-1,8,23,16,-1,23,8,10,-1,24,25,26,-1,26,27,24,-1,25,28,26,-1,28,29,30,-1,30,26,28,-1,31,32,33,-1,32,25,33,-1,25,24,34,-1,33,25,34,-1,24,35,34,-1,27,35,24,-1,33,36,31,-1,27,26,37,-1,37,26,30,-1,38,37,30,-1,33,34,39,-1,39,34,35,-1,39,35,40,-1,41,38,30,-1,35,27,42,-1,37,42,27,-1,40,35,42,-1,42,37,43,-1,37,38,44,-1,44,43,37,-1,36,45,46,-1,36,33,45,-1,40,42,47,-1,43,47,42,-1,47,48,40,-1,39,40,48,-1,47,43,49,-1,43,44,49,-1,50,49,44,-1,51,46,52,-1,46,45,52,-1,52,45,53,-1,33,53,45,-1,33,39,53,-1,49,54,47,-1,48,47,54,-1,55,56,52,-1,57,52,53,-1,57,55,52,-1,58,57,53,-1,59,58,53,-1,53,39,59,-1,39,48,59,-1,59,48,54,-1,58,59,60,-1,54,49,61,-1,59,54,61,-1,60,59,61,-1,49,50,62,-1,63,62,50,-1,62,61,49,-1,64,63,50,-1,63,64,65,-1,65,62,63,-1,66,60,61,-1,62,65,67,-1,68,67,65,-1,64,69,70,-1,64,70,65,-1,70,68,65,-1,69,71,72,-1,72,70,69,-1,73,74,75,-1,66,76,60,-1,67,77,62,-1,62,77,61,-1,77,66,61,-1,66,77,78,-1,77,67,79,-1,79,67,68,-1,79,78,77,-1,68,70,80,-1,70,72,80,-1,80,79,68,-1,74,73,81,-1,73,76,82,-1,82,81,73,-1,76,66,83,-1,78,83,66,-1,83,82,76,-1,78,79,84,-1,79,80,84,-1,84,85,78,-1,86,84,80,-1,81,82,87,-1,87,88,81,-1,82,83,89,-1,83,78,89,-1,89,87,82,-1,78,85,89,-1,90,91,92,-1,92,93,90,-1,90,94,91,-1,95,96,94,-1,94,90,95,-1,29,96,97,-1,96,95,97,-1,97,30,29,-1,30,97,41,-1,41,97,95,-1,98,99,100,-1,98,91,99,-1,101,92,91,-1,98,101,91,-1,101,102,92,-1,92,102,93,-1,36,103,31,-1,51,103,36,46,-1,103,100,31,-1,100,103,98,-1,104,90,93,-1,90,104,95,-1,95,105,41,-1,104,105,95,-1,106,101,98,-1,102,101,106,-1,107,93,102,-1,93,107,104,-1,108,104,107,-1,107,109,108,-1,110,105,104,-1,104,108,110,-1,109,107,111,-1,107,102,111,-1,111,102,106,-1,111,112,109,-1,106,112,111,-1,113,110,108,-1,110,113,114,-1,51,52,115,-1,116,115,117,-1,117,106,116,-1,118,109,112,-1,119,108,109,-1,108,119,113,-1,109,118,119,-1,120,113,119,-1,119,121,120,-1,52,56,122,-1,122,115,52,-1,115,122,123,-1,117,124,125,-1,106,117,125,-1,118,112,106,125,-1,119,118,125,-1,121,119,125,-1,126,124,123,-1,127,114,113,-1,114,127,128,-1,113,120,127,-1,114,128,129,-1,130,126,123,-1,122,130,123,-1,131,120,121,-1,131,127,120,-1,132,129,128,-1,128,127,132,-1,74,81,133,-1,81,134,133,-1,121,135,131,-1,136,132,127,-1,132,136,137,-1,138,71,129,-1,138,129,132,-1,137,138,132,-1,139,72,71,-1,72,139,80,-1,71,138,139,-1,140,135,121,-1,140,121,125,-1,141,127,131,-1,127,141,136,-1,131,135,141,-1,142,141,135,-1,143,136,141,-1,136,143,137,-1,141,142,143,-1,144,138,137,-1,144,139,138,-1,143,144,137,-1,145,146,134,-1,145,140,146,-1,134,81,145,-1,147,135,140,-1,135,147,142,-1,140,145,147,-1,148,80,139,-1,80,148,86,-1,139,144,148,-1,149,143,142,-1,149,144,143,-1,142,150,149,-1,151,148,144,-1,144,149,151,-1,152,145,81,-1,81,88,152,-1,153,147,145,-1,153,142,147,-1,145,152,153,-1,153,150,142,-1,154,86,148,-1,148,151,154,-1,155,28,25,-1,155,29,28,-1,155,25,32,-1,155,32,31,-1,155,31,100,-1,155,100,99,-1,155,99,91,-1,155,91,94,-1,155,94,96,-1,155,96,29,-1,156,151,149,-1,156,154,151,-1,156,149,150,-1,156,150,153,-1,156,153,152,-1,156,152,88,-1,156,88,87,-1,156,87,89,-1,156,89,85,-1,156,85,84,-1,156,84,86,-1,156,86,154,-1,76,157,60,-1,76,73,158,157,-1,159,158,73,75,160,-1,161,56,55,-1,60,162,58,-1,162,60,157,-1,161,55,163,-1,57,164,163,55,-1,160,163,164,-1,160,164,159,-1,164,57,165,-1,164,165,159,-1,57,58,166,165,-1,166,58,162,-1,165,166,159,-1,166,162,157,158,159,-1,140,125,167,-1,124,168,125,-1,168,167,125,-1,124,169,168,-1,146,140,167,170,-1,168,170,167,-1,168,169,170,-1,146,170,171,-1,169,171,170,-1,172,134,146,171,-1,134,172,130,-1,169,124,126,173,-1,173,126,130,-1,169,173,172,171,-1,173,130,172,-1,122,74,133,174,-1,133,134,174,-1,130,122,174,-1,134,130,174,-1,122,56,175,74,-1,74,175,176,-1,175,56,161,176,-1,74,176,75,-1,176,161,163,-1,176,160,75,-1,176,163,160,-1,115,116,177,51,-1,106,98,177,116,-1,51,177,103,-1,177,98,103,-1]);
TextureCoordinate TextureCoordinate103 = createNode("TextureCoordinate");
TextureCoordinate103.point = new MFVec2f(new float[0.1611,-0.02056,0.9468,-0.02056,0.9739,0.9344,-0.137,1.094,0.1973,0.6424,0.2231,0.04876,0.5054,0.2466,0.5054,0.5929,0.8135,0.6424,0.6282,0.1972,0.7876,0.04876,0.5054,-0.05018,0.6282,-0.05018,0.5054,0.8403,0.7989,1.038,0.5054,1.038,0.8248,0.7908,0.186,0.7908,0.2118,1.038,0.6427,0.7908,-0.01977,0.5929,-0.03324,0.7908,1.044,0.7908,1.031,0.5929,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]);
IndexedFaceSet102.texCoord = TextureCoordinate103;

Coordinate Coordinate104 = createNode("Coordinate");
Coordinate104.DEF = "pointValues";
Coordinate104.point = new MFVec3f(new float[0.043,1.25,0.0614,0.101,1.25,0.0614,0.103,1.31,0.0195,0.021,1.32,0.0276,0.0572,1.27,-0.153,0.0524,1.15,-0.134,0,1.19,-0.14,0,1.26,-0.147,-0.0572,1.27,-0.153,-0.0228,1.18,-0.14,-0.0524,1.15,-0.134,0,1.13,-0.126,-0.0228,1.13,-0.124,0,1.31,-0.146,-0.0545,1.35,-0.138,0,1.35,-0.136,-0.0593,1.3,-0.151,0.0593,1.3,-0.151,0.0545,1.35,-0.138,-0.0255,1.3,-0.146,0.0975,1.26,-0.15,0.1,1.3,-0.148,-0.1,1.3,-0.148,-0.0975,1.26,-0.15,-0.117,1.41,-0.0395,-0.0674,1.45,-0.0314,-0.0926,1.41,-0.0937,-0.124,1.4,-0.0706,-0.0583,1.44,-0.0615,-0.0228,1.46,-0.0872,-0.0534,1.42,-0.112,-0.0228,1.42,0.00351,-0.0593,1.43,-0.0185,-0.0787,1.39,-0.00293,-0.112,1.4,-0.0131,-0.164,1.39,-0.0373,-0.0153,1.39,0.0159,-0.0953,1.35,-0.136,-0.0545,1.35,-0.138,-0.139,1.34,0.00297,-0.137,1.34,-0.0368,0,1.35,-0.136,-0.156,1.35,-0.0915,-0.132,1.29,-0.127,-0.1,1.3,-0.148,-0.0418,1.35,0.0168,-0.013,1.37,0.0167,-0.151,1.28,-0.0878,-0.136,1.32,-0.0406,-0.124,1.26,-0.125,-0.0975,1.26,-0.15,0.00228,1.37,0.0167,-0.00959,1.32,0.0276,-0.0918,1.31,0.0195,-0.141,1.25,-0.0744,-0.0316,1.25,0.0614,-0.00261,1.25,0.0458,-0.0611,1.25,0.0668,-0.0896,1.25,0.0614,-0.126,1.24,0.012,-0.126,1.22,0.0141,-0.129,1.17,-0.0523,-0.115,1.16,-0.105,-0.0851,1.18,-0.134,-0.0524,1.15,-0.134,-0.083,1.13,-0.122,-0.117,1.15,-0.018,-0.11,1.1,-0.0846,-0.0808,1.1,-0.111,-0.0228,1.13,-0.124,-0.0524,1.1,-0.119,0,1.13,-0.126,-0.0228,1.1,-0.116,-0.0563,1.15,0.0377,-0.00476,1.18,0.0458,-0.0343,1.18,0.0485,-0.0966,1.15,-0.00413,-0.12,1.1,-0.0373,-0.121,1.07,-0.0356,-0.106,1.07,-0.0711,-0.0475,1.06,-0.105,0,1.08,0.0556,-0.0787,1.08,0.0347,-0.103,1.08,0.00296,-0.0975,1.01,-0.0873,-0.134,0.998,-0.0314,-0.0475,1.02,-0.109,-0.0325,1.02,0.0529,0,1.02,0.0422,-0.0975,1.02,0.0132,0.0926,1.41,-0.0937,0.0674,1.45,-0.0314,0.117,1.41,-0.0395,0.124,1.4,-0.0706,0.0583,1.44,-0.0615,0.0534,1.42,-0.112,0.0228,1.46,-0.0872,0,1.4,-0.112,0.0787,1.39,-0.00293,0.0593,1.43,-0.0185,0.0228,1.42,0.00351,0.112,1.4,-0.0131,0.164,1.39,-0.0373,0.0153,1.39,0.0159,0.0953,1.35,-0.136,0.0545,1.35,-0.138,0.139,1.34,0.00297,0.156,1.35,-0.0915,0.132,1.29,-0.127,0.151,1.28,-0.0878,0.1,1.3,-0.148,0.137,1.34,-0.0368,0.147,1.32,-0.0406,0.124,1.26,-0.125,0.0975,1.26,-0.15,0.021,1.32,0.0276,0.0532,1.35,0.0168,0.103,1.31,0.0195,0.135,1.29,-0.0406,0.141,1.25,-0.0744,0.132,1.18,-0.083,0.134,1.19,-0.0572,0.014,1.25,0.0458,0.043,1.25,0.0614,0.101,1.25,0.0614,0.138,1.24,0.012,0.065,1.23,0.0743,0.115,1.16,-0.105,0.0851,1.18,-0.134,0.0524,1.15,-0.134,0.043,1.2,0.0641,0.127,1.14,-0.0427,0.083,1.13,-0.122,0.0162,1.18,0.0458,0.0457,1.18,0.0485,0.117,1.15,-0.018,0.11,1.1,-0.0846,0.0808,1.1,-0.111,0.0524,1.1,-0.119,0.0228,1.1,-0.116,0.108,1.15,-0.00413,0.12,1.1,-0.0373,0.121,1.07,-0.0356,0.106,1.07,-0.0711,0.0475,1.06,-0.105,0.0787,1.08,0.0347,0.0844,1.15,0.0297,0.103,1.08,0.00296,0,1.07,-0.11,0.0975,1.01,-0.0873,0.134,0.998,-0.0475,0.0475,1.02,-0.109,0.0325,1.02,0.0529,0.0975,1.02,0.0132,0,1.02,-0.117,0,1.44,-0.0389,0,1.01,-0.0259,-0.104,1.19,0.0423,-0.0778,1.19,0.0642,-0.078,1.19,0.0644,-0.0493,1.2,0.0664,-0.0281,1.22,0.0587,-0.104,1.2,0.0568,-0.0484,1.21,0.0692,-0.0549,1.21,0.0708,-0.0806,1.21,0.0713,-0.0852,1.21,0.0703,0.116,1.19,0.043,0.114,1.21,0.0572,0.0967,1.21,0.0701,0.11,1.19,0.0502,0.093,1.19,0.0622,0.0832,1.19,0.0662,0.0863,1.21,0.0728,0.0154,1.21,0.0458,-0.00393,1.21,0.0458,-0.0145,1.2,0.0512,0.0534,1.35,0.0168]);
IndexedFaceSet102.coord = Coordinate104;

Shape98.geometry = IndexedFaceSet102;

Transform97.child = new undefined();

Transform97.child[0] = Shape98;

HAnimSegment96.children = new MFNode();

HAnimSegment96.children[0] = Transform97;

Transform Transform105 = createNode("Transform");
Transform105.translation = new SFVec3f(new float[-0.00405,1.07,-0.0275]);
Transform105.scale = new SFVec3f(new float[1.25,1.1,1.3]);
Group Group106 = createNode("Group");
Transform Transform107 = createNode("Transform");
Transform107.translation = new SFVec3f(new float[0,-1.2,0]);
Shape Shape108 = createNode("Shape");
Appearance Appearance109 = createNode("Appearance");
Material Material110 = createNode("Material");
Material110.DEF = "BCLColor";
Material110.ambientIntensity = 0.25;
Material110.diffuseColor = new SFColor(new float[0.0588,0.0588,0.0588]);
Material110.shininess = 0.5;
Appearance109.material = Material110;

Shape108.appearance = Appearance109;

IndexedFaceSet IndexedFaceSet111 = createNode("IndexedFaceSet");
IndexedFaceSet111.solid = False;
IndexedFaceSet111.creaseAngle = 1.59;
IndexedFaceSet111.coordIndex = new MFInt32(new int[4,5,6,-1,6,7,4,-1,8,7,6,-1,6,9,8,-1,9,10,8,-1,6,5,11,-1,9,6,12,-1,11,12,6,-1,12,10,9,-1,7,8,13,-1,13,4,7,-1,14,15,16,-1,15,17,13,-1,4,13,17,-1,17,15,18,-1,13,19,15,-1,19,13,8,-1,19,16,15,-1,16,19,8,-1,17,20,4,-1,5,4,20,-1,18,21,17,-1,20,17,21,-1,16,22,14,-1,22,16,23,-1,8,23,16,-1,23,8,10,-1,24,25,26,-1,26,27,24,-1,25,28,26,-1,28,29,30,-1,30,26,28,-1,25,24,34,-1,33,25,34,-1,24,35,34,-1,27,35,24,-1,27,26,37,-1,37,26,30,-1,38,37,30,-1,33,34,39,-1,39,34,35,-1,41,38,30,-1,35,27,42,-1,37,42,27,-1,42,37,43,-1,37,38,44,-1,44,43,37,-1,43,47,42,-1,47,43,49,-1,43,44,49,-1,50,49,44,-1,33,39,53,-1,49,54,47,-1,59,58,53,-1,53,39,59,-1,58,59,60,-1,54,49,61,-1,49,50,62,-1,63,62,50,-1,62,61,49,-1,64,63,50,-1,63,64,65,-1,65,62,63,-1,66,60,61,-1,62,65,67,-1,68,67,65,-1,64,69,70,-1,64,70,65,-1,70,68,65,-1,69,71,72,-1,72,70,69,-1,66,76,60,-1,67,77,62,-1,62,77,61,-1,77,66,61,-1,66,77,78,-1,77,67,79,-1,79,67,68,-1,79,78,77,-1,68,70,80,-1,70,72,80,-1,80,79,68,-1,73,76,82,-1,76,66,83,-1,78,83,66,-1,83,82,76,-1,78,79,84,-1,79,80,84,-1,84,85,78,-1,86,84,80,-1,82,83,89,-1,83,78,89,-1,89,87,82,-1,78,85,89,-1,90,91,92,-1,92,93,90,-1,90,94,91,-1,95,96,94,-1,94,90,95,-1,29,96,97,-1,96,95,97,-1,97,30,29,-1,30,97,41,-1,41,97,95,-1,101,92,91,-1,98,101,91,-1,101,102,92,-1,92,102,93,-1,104,90,93,-1,90,104,95,-1,95,105,41,-1,104,105,95,-1,106,101,98,-1,102,101,106,-1,107,93,102,-1,93,107,104,-1,108,104,107,-1,107,109,108,-1,110,105,104,-1,104,108,110,-1,113,110,108,-1,110,113,114,-1,119,108,109,-1,108,119,113,-1,120,113,119,-1,119,121,120,-1,117,124,125,-1,106,117,125,-1,127,114,113,-1,114,127,128,-1,113,120,127,-1,114,128,129,-1,131,120,121,-1,131,127,120,-1,132,129,128,-1,128,127,132,-1,121,135,131,-1,136,132,127,-1,132,136,137,-1,138,71,129,-1,138,129,132,-1,137,138,132,-1,139,72,71,-1,72,139,80,-1,71,138,139,-1,140,135,121,-1,140,121,125,-1,141,127,131,-1,127,141,136,-1,131,135,141,-1,142,141,135,-1,143,136,141,-1,136,143,137,-1,141,142,143,-1,144,138,137,-1,144,139,138,-1,143,144,137,-1,145,140,146,-1,147,135,140,-1,135,147,142,-1,140,145,147,-1,148,80,139,-1,80,148,86,-1,139,144,148,-1,149,143,142,-1,149,144,143,-1,142,150,149,-1,151,148,144,-1,144,149,151,-1,153,147,145,-1,153,142,147,-1,145,152,153,-1,153,150,142,-1,154,86,148,-1,148,151,154,-1,76,157,60,-1,76,73,158,157,-1,60,162,58,-1,162,60,157,-1,166,58,162,-1,165,166,159,-1,166,162,157,158,159,-1,140,125,167,-1,124,168,125,-1,168,167,125,-1,124,169,168,-1,146,140,167,170,-1,168,170,167,-1,168,169,170,-1,146,170,171,-1,169,171,170,-1,98,117,106,-1]);
TextureCoordinate TextureCoordinate112 = createNode("TextureCoordinate");
TextureCoordinate112.point = new MFVec2f(new float[0.1611,-0.02056,0.9468,-0.02056,0.9739,0.9344,-0.137,1.094,0.1973,0.6424,0.2231,0.04876,0.5054,0.2466,0.5054,0.5929,0.8135,0.6424,0.6282,0.1972,0.7876,0.04876,0.5054,-0.05018,0.6282,-0.05018,0.5054,0.8403,0.7989,1.038,0.5054,1.038,0.8248,0.7908,0.186,0.7908,0.2118,1.038,0.6427,0.7908,-0.01977,0.5929,-0.03324,0.7908,1.044,0.7908,1.031,0.5929,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]);
IndexedFaceSet111.texCoord = TextureCoordinate112;

Coordinate Coordinate113 = createNode("Coordinate");
Coordinate113.USE = "pointValues";
IndexedFaceSet111.coord = Coordinate113;

Shape108.geometry = IndexedFaceSet111;

Transform107.child = new undefined();

Transform107.child[0] = Shape108;

Group106.children = new MFNode();

Group106.children[0] = Transform107;

Transform Transform114 = createNode("Transform");
Transform114.translation = new SFVec3f(new float[0.13,0.22,-0.1]);
Transform114.rotation = new SFRotation(new float[0,0,1,1.57]);
Transform114.scale = new SFVec3f(new float[2,1.5,1.5]);
Transform Transform115 = createNode("Transform");
Transform115.rotation = new SFRotation(new float[1,0,0,1.4]);
Shape Shape116 = createNode("Shape");
Shape116.DEF = "BCLSnorkelPad";
Appearance Appearance117 = createNode("Appearance");
Material Material118 = createNode("Material");
Material118.USE = "BCLColor";
Appearance117.material = Material118;

Shape116.appearance = Appearance117;

Extrusion Extrusion119 = createNode("Extrusion");
Extrusion119.crossSection = new MFVec2f(new float[0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013]);
Extrusion119.spine = new MFVec3f(new float[-0.03,0.01,0,-0.005,0.04,0,0,0.06,0,-0.01,0.075,0]);
Shape116.geometry = Extrusion119;

Transform115.child = new undefined();

Transform115.child[0] = Shape116;

Transform114.children = new MFNode();

Transform114.children[0] = Transform115;

Group106.children[1] = Transform114;

Transform Transform120 = createNode("Transform");
Transform120.translation = new SFVec3f(new float[0.07,0.08,0.125]);
Transform120.rotation = new SFRotation(new float[-1,0,0,0.8]);
Shape Shape121 = createNode("Shape");
Appearance Appearance122 = createNode("Appearance");
Material Material123 = createNode("Material");
Material123.DEF = "BCLSnorkel";
Material123.diffuseColor = new SFColor(new float[0.25,0.25,0.25]);
Material123.shininess = 0.5;
Material123.transparency = 0.1;
Appearance122.material = Material123;

Shape121.appearance = Appearance122;

Extrusion Extrusion124 = createNode("Extrusion");
Extrusion124.crossSection = new MFVec2f(new float[0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013]);
Extrusion124.scale = new MFVec2f(new float[0.8,0.8,1,1]);
Extrusion124.spine = new MFVec3f(new float[0.03,0.03,-0.05,0.05,0.2,0]);
Shape121.geometry = Extrusion124;

Transform120.child = new undefined();

Transform120.child[0] = Shape121;

Group106.children[2] = Transform120;

Group Group125 = createNode("Group");
Group125.DEF = "buckle";
Transform Transform126 = createNode("Transform");
Transform126.translation = new SFVec3f(new float[-0.08,0.1,0.029]);
Transform126.rotation = new SFRotation(new float[-1,0,0,0.68]);
Shape Shape127 = createNode("Shape");
Appearance Appearance128 = createNode("Appearance");
Appearance128.DEF = "buckleHolder";
Material Material129 = createNode("Material");
Material129.diffuseColor = new SFColor(new float[0.25,0.25,0.25]);
Appearance128.material = Material129;

Shape127.appearance = Appearance128;

Box Box130 = createNode("Box");
Box130.size = new SFVec3f(new float[0.03,0.03,0.005]);
Shape127.geometry = Box130;

Transform126.child = new undefined();

Transform126.child[0] = Shape127;

Group125.children = new MFNode();

Group125.children[0] = Transform126;

Transform Transform131 = createNode("Transform");
Transform131.translation = new SFVec3f(new float[0.03,0.1,0.027]);
Transform131.rotation = new SFRotation(new float[-1,0,0,0.68]);
Shape Shape132 = createNode("Shape");
Appearance Appearance133 = createNode("Appearance");
Appearance133.USE = "buckleHolder";
Shape132.appearance = Appearance133;

Box Box134 = createNode("Box");
Box134.size = new SFVec3f(new float[0.15,0.03,0.001]);
Shape132.geometry = Box134;

Transform131.child = new undefined();

Transform131.child[0] = Shape132;

Group125.children[1] = Transform131;

Transform Transform135 = createNode("Transform");
Transform135.translation = new SFVec3f(new float[-0.045,0.1,0.028]);
Transform135.rotation = new SFRotation(new float[-1,0,0,0.68]);
Shape Shape136 = createNode("Shape");
Appearance Appearance137 = createNode("Appearance");
Appearance137.DEF = "pin";
Material Material138 = createNode("Material");
Appearance137.material = Material138;

Shape136.appearance = Appearance137;

Box Box139 = createNode("Box");
Box139.size = new SFVec3f(new float[0.02,0.028,0.005]);
Shape136.geometry = Box139;

Transform135.child = new undefined();

Transform135.child[0] = Shape136;

Group125.children[2] = Transform135;

Transform Transform140 = createNode("Transform");
Transform140.translation = new SFVec3f(new float[-0.06,0.1,0.029]);
Transform140.rotation = new SFRotation(new float[0,0,1,1.57]);
Shape Shape141 = createNode("Shape");
Appearance Appearance142 = createNode("Appearance");
Appearance142.USE = "pin";
Shape141.appearance = Appearance142;

Cylinder Cylinder143 = createNode("Cylinder");
Cylinder143.height = 0.02;
Cylinder143.radius = 0.0024;
Shape141.geometry = Cylinder143;

Transform140.child = new undefined();

Transform140.child[0] = Shape141;

Group125.children[3] = Transform140;

Transform Transform144 = createNode("Transform");
Transform144.translation = new SFVec3f(new float[-0.06,0.109,0.0217]);
Transform144.rotation = new SFRotation(new float[0,0,1,1.57]);
Shape Shape145 = createNode("Shape");
Appearance Appearance146 = createNode("Appearance");
Appearance146.USE = "pin";
Shape145.appearance = Appearance146;

Cylinder Cylinder147 = createNode("Cylinder");
Cylinder147.height = 0.02;
Cylinder147.radius = 0.0024;
Shape145.geometry = Cylinder147;

Transform144.child = new undefined();

Transform144.child[0] = Shape145;

Group125.children[4] = Transform144;

Transform Transform148 = createNode("Transform");
Transform148.translation = new SFVec3f(new float[-0.06,0.091,0.036]);
Transform148.rotation = new SFRotation(new float[0,0,1,1.57]);
Shape Shape149 = createNode("Shape");
Appearance Appearance150 = createNode("Appearance");
Appearance150.USE = "pin";
Shape149.appearance = Appearance150;

Cylinder Cylinder151 = createNode("Cylinder");
Cylinder151.height = 0.02;
Cylinder151.radius = 0.0024;
Shape149.geometry = Cylinder151;

Transform148.child = new undefined();

Transform148.child[0] = Shape149;

Group125.children[5] = Transform148;

Group106.children[3] = Group125;

Group Group152 = createNode("Group");
Group152.DEF = "buckleBelt";
Transform Transform153 = createNode("Transform");
Transform153.translation = new SFVec3f(new float[-0.07,-0.12,0.038]);
Transform153.rotation = new SFRotation(new float[0,1,0,-0.68]);
Shape Shape154 = createNode("Shape");
Appearance Appearance155 = createNode("Appearance");
Appearance155.USE = "buckleHolder";
Shape154.appearance = Appearance155;

Box Box156 = createNode("Box");
Box156.size = new SFVec3f(new float[0.04,0.1,0.005]);
Shape154.geometry = Box156;

Transform153.child = new undefined();

Transform153.child[0] = Shape154;

Group152.children = new MFNode();

Group152.children[0] = Transform153;

Transform Transform157 = createNode("Transform");
Transform157.translation = new SFVec3f(new float[0.005,-0.12,0.053]);
Shape Shape158 = createNode("Shape");
Appearance Appearance159 = createNode("Appearance");
Appearance159.USE = "buckleHolder";
Shape158.appearance = Appearance159;

Box Box160 = createNode("Box");
Box160.size = new SFVec3f(new float[0.12,0.11,0.001]);
Shape158.geometry = Box160;

Transform157.child = new undefined();

Transform157.child[0] = Shape158;

Group152.children[1] = Transform157;

Transform Transform161 = createNode("Transform");
Transform161.translation = new SFVec3f(new float[0.075,-0.12,0.038]);
Transform161.rotation = new SFRotation(new float[0,1,0,0.68]);
Shape Shape162 = createNode("Shape");
Appearance Appearance163 = createNode("Appearance");
Appearance163.USE = "buckleHolder";
Shape162.appearance = Appearance163;

Box Box164 = createNode("Box");
Box164.size = new SFVec3f(new float[0.04,0.1,0.005]);
Shape162.geometry = Box164;

Transform161.child = new undefined();

Transform161.child[0] = Shape162;

Group152.children[2] = Transform161;

Group106.children[4] = Group152;

Transform105.children = new MFNode();

Transform105.children[0] = Group106;

HAnimSegment96.children[1] = Transform105;

Transform Transform165 = createNode("Transform");
Transform165.DEF = "ScubaTank";
Transform165.translation = new SFVec3f(new float[-0.00405,1.07,-0.0275]);
Transform165.rotation = new SFRotation(new float[0,1,0,3.14]);
Transform165.scale = new SFVec3f(new float[0.8,0.8,0.8]);
Inline Inline166 = createNode("Inline");
Inline166.global = True;
Inline166.url = new MFString(new java.lang.String["ScubaTank.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/ScubaTank.x3d","ScubaTank.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/ScubaTank.wrl"]);
Transform165.children = new MFNode();

Transform165.children[0] = Inline166;

HAnimSegment96.children[2] = Transform165;

HAnimJoint95.children = new MFNode();

HAnimJoint95.children[0] = HAnimSegment96;

HAnimJoint HAnimJoint167 = createNode("HAnimJoint");
HAnimJoint167.DEF = "hanim_l_shoulder";
HAnimJoint167.name = "l_shoulder";
HAnimJoint167.center = new SFVec3f(new float[0.167,1.36,-0.0518]);
HAnimSegment HAnimSegment168 = createNode("HAnimSegment");
HAnimSegment168.DEF = "hanim_l_upperarm";
HAnimSegment168.name = "l_upperarm";
Transform Transform169 = createNode("Transform");
Transform169.DEF = "l_upperarm_adjust";
Transform169.translation = new SFVec3f(new float[0.167,1.36,-0.0518]);
Transform169.rotation = new SFRotation(new float[1,0,0,0.119]);
Transform169.center = new SFVec3f(new float[0.182,1.22,-0.047]);
Shape Shape170 = createNode("Shape");
Appearance Appearance171 = createNode("Appearance");
Material Material172 = createNode("Material");
Material172.USE = "WetShirtColor";
Appearance171.material = Material172;

Shape170.appearance = Appearance171;

IndexedFaceSet IndexedFaceSet173 = createNode("IndexedFaceSet");
IndexedFaceSet173.creaseAngle = 1.65;
IndexedFaceSet173.coordIndex = new MFInt32(new int[2,1,0,-1,2,3,1,-1,2,4,3,-1,2,0,5,-1,6,5,0,-1,7,2,5,-1,8,4,2,-1,8,3,4,-1,9,1,3,-1,10,0,1,-1,0,10,6,-1,1,9,10,-1,3,8,9,-1,2,7,8,-1,5,6,7,-1,11,7,6,-1,14,9,8,-1,15,10,9,-1,11,6,10,-1,10,15,11,-1,9,14,15,-1,8,13,14,-1,8,16,13,-1,7,11,12,-1,21,15,14,-1,15,17,11,-1,15,21,17,-1,16,19,13,-1,13,19,20,-1,21,14,20,-1,14,13,20,-1,12,17,18,-1,12,11,17,-1,12,18,16,-1,18,19,16,-1,12,16,7,-1,16,8,7,-1,19,18,17,-1,20,19,21,-1,19,17,21,-1]);
Coordinate Coordinate174 = createNode("Coordinate");
Coordinate174.point = new MFVec3f(new float[0.174,1.37,-0.0625,0.185,1.38,-0.0395,0.156,1.39,-0.0464,0.174,1.37,-0.0158,0.154,1.37,-0.0185,0.157,1.38,-0.0733,0.182,1.33,-0.0728,0.151,1.33,-0.0937,0.15,1.34,-0.000787,0.185,1.33,-0.00025,0.201,1.33,-0.0411,0.189,1.26,-0.0808,0.155,1.26,-0.0867,0.151,1.26,-0.000789,0.19,1.26,-0.00401,0.209,1.26,-0.0427,0.141,1.26,-0.0421,0.203,1.08,-0.0744,0.162,1.05,-0.0561,0.169,1.08,-0.00885,0.208,1.07,-0.00133,0.221,1.08,-0.0352]);
IndexedFaceSet173.coord = Coordinate174;

Shape170.geometry = IndexedFaceSet173;

Transform169.child = new undefined();

Transform169.child[0] = Shape170;

HAnimSegment168.children = new MFNode();

HAnimSegment168.children[0] = Transform169;

HAnimJoint167.children = new MFNode();

HAnimJoint167.children[0] = HAnimSegment168;

HAnimJoint HAnimJoint175 = createNode("HAnimJoint");
HAnimJoint175.DEF = "hanim_l_elbow";
HAnimJoint175.name = "l_elbow";
HAnimJoint175.center = new SFVec3f(new float[0.196,1.07,-0.0518]);
HAnimSegment HAnimSegment176 = createNode("HAnimSegment");
HAnimSegment176.DEF = "hanim_l_forearm";
HAnimSegment176.name = "l_forearm";
Transform Transform177 = createNode("Transform");
Transform177.DEF = "l_forearm_adjust";
Transform177.translation = new SFVec3f(new float[0.196,1.07,-0.0518]);
Transform177.rotation = new SFRotation(new float[-1,0,0,0.1]);
Transform177.center = new SFVec3f(new float[0.198,0.961,-0.0405]);
Shape Shape178 = createNode("Shape");
Appearance Appearance179 = createNode("Appearance");
Material Material180 = createNode("Material");
Material180.USE = "WetShirtColor";
Appearance179.material = Material180;

Shape178.appearance = Appearance179;

IndexedFaceSet IndexedFaceSet181 = createNode("IndexedFaceSet");
IndexedFaceSet181.creaseAngle = 1.75;
IndexedFaceSet181.coordIndex = new MFInt32(new int[2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,0,6,-1,7,6,0,-1,8,5,6,-1,9,4,5,-1,9,3,4,-1,10,1,3,-1,11,0,1,-1,0,11,7,-1,1,10,11,-1,3,9,10,-1,5,12,9,-1,5,8,12,-1,6,7,8,-1,17,16,15,-1,14,17,15,-1,14,18,17,-1,13,18,14,-1,16,17,10,-1,16,10,9,-1,15,16,9,-1,15,9,12,-1,18,13,7,-1,18,7,11,-1,13,14,8,-1,13,8,7,-1,14,15,8,-1,15,12,8,-1,17,18,10,-1,18,11,10,-1]);
Coordinate Coordinate182 = createNode("Coordinate");
Coordinate182.point = new MFVec3f(new float[0.177,1.09,-0.0609,0.202,1.1,-0.0566,0.189,1.1,-0.0395,0.213,1.1,-0.025,0.203,1.1,-0.0158,0.182,1.09,-0.00563,0.167,1.09,-0.0325,0.176,1.08,-0.0781,0.16,1.06,-0.0373,0.214,1.07,-0.00402,0.228,1.07,-0.0319,0.208,1.08,-0.0765,0.179,1.07,-0.00294,0.21,0.818,-0.0615,0.201,0.82,-0.0405,0.205,0.819,-0.00832,0.224,0.818,-0.00778,0.237,0.82,-0.0282,0.231,0.819,-0.0609]);
IndexedFaceSet181.coord = Coordinate182;

Shape178.geometry = IndexedFaceSet181;

Transform177.child = new undefined();

Transform177.child[0] = Shape178;

HAnimSegment176.children = new MFNode();

HAnimSegment176.children[0] = Transform177;

HAnimJoint175.children = new MFNode();

HAnimJoint175.children[0] = HAnimSegment176;

HAnimJoint HAnimJoint183 = createNode("HAnimJoint");
HAnimJoint183.DEF = "hanim_l_wrist";
HAnimJoint183.name = "l_wrist";
HAnimJoint183.center = new SFVec3f(new float[0.213,0.811,-0.0338]);
HAnimSegment HAnimSegment184 = createNode("HAnimSegment");
HAnimSegment184.DEF = "hanim_l_hand";
HAnimSegment184.name = "l_hand";
Transform Transform185 = createNode("Transform");
Transform185.DEF = "l_hand_adjust";
Transform185.translation = new SFVec3f(new float[0.213,0.811,-0.0338]);
Transform185.rotation = new SFRotation(new float[-0.06361,-0.9967,0.04988,1.333]);
Transform185.center = new SFVec3f(new float[0.213,0.811,-0.0338]);
Shape Shape186 = createNode("Shape");
Appearance Appearance187 = createNode("Appearance");
Material Material188 = createNode("Material");
Material188.DEF = "Skin_Color";
Material188.ambientIntensity = 0.25;
Material188.diffuseColor = new SFColor(new float[0.749,0.601,0.462]);
Appearance187.material = Material188;

Shape186.appearance = Appearance187;

IndexedFaceSet IndexedFaceSet189 = createNode("IndexedFaceSet");
IndexedFaceSet189.creaseAngle = 1.48;
IndexedFaceSet189.coordIndex = new MFInt32(new int[2,1,0,-1,5,4,3,-1,3,7,6,-1,2,3,6,-1,7,9,8,-1,6,7,8,-1,9,11,10,-1,8,9,10,-1,11,13,12,-1,10,11,12,-1,13,15,14,-1,12,13,14,-1,15,17,16,-1,14,15,16,-1,17,19,18,-1,16,17,18,-1,19,21,20,-1,18,19,20,-1,31,4,1,-1,4,5,0,-1,1,4,0,-1,5,3,2,-1,0,5,2,-1,26,25,24,-1,26,24,23,-1,27,26,23,-1,28,27,23,-1,28,23,22,-1,29,28,22,-1,29,22,21,-1,30,29,21,-1,15,13,11,-1,17,15,11,-1,19,17,11,-1,19,11,9,-1,31,19,9,-1,31,9,7,-1,4,31,7,-1,4,7,3,-1,30,21,19,-1,31,30,19,-1,12,14,16,-1,10,12,16,-1,10,16,18,-1,8,10,18,-1,6,8,1,-1,2,6,1,-1,39,38,37,-1,37,38,40,-1,37,40,36,-1,36,40,41,-1,36,41,35,-1,35,41,42,-1,35,42,34,-1,34,42,43,-1,34,43,33,-1,33,43,44,-1,33,44,32,-1,20,32,44,-1,20,44,45,-1,20,45,46,-1,47,8,18,-1,47,18,20,-1,47,20,46,-1,8,47,1,-1,22,33,32,-1,23,35,34,-1,23,36,35,-1,37,24,25,-1,40,38,27,-1,29,43,42,-1,45,44,30,-1,47,31,1,-1,47,46,31,-1,29,30,43,-1,30,44,43,-1,45,31,46,-1,45,30,31,-1,28,29,41,-1,29,42,41,-1,28,40,27,-1,28,41,40,-1,26,27,39,-1,27,38,39,-1,25,39,37,-1,25,26,39,-1,24,36,23,-1,24,37,36,-1,23,34,22,-1,34,33,22,-1,22,32,21,-1,32,20,21,-1]);
Coordinate Coordinate190 = createNode("Coordinate");
Coordinate190.point = new MFVec3f(new float[0.211,0.828,-0.0434,0.194,0.81,-0.0445,0.237,0.82,-0.0425,0.236,0.82,-0.0237,0.194,0.81,-0.0254,0.21,0.828,-0.0247,0.252,0.801,-0.0424,0.252,0.801,-0.0231,0.269,0.765,-0.0426,0.268,0.765,-0.0225,0.273,0.732,-0.0395,0.272,0.732,-0.0223,0.27,0.704,-0.0342,0.27,0.704,-0.0224,0.262,0.703,-0.0345,0.261,0.703,-0.0227,0.256,0.717,-0.0389,0.256,0.717,-0.023,0.255,0.738,-0.0408,0.255,0.738,-0.023,0.251,0.734,-0.0406,0.251,0.734,-0.0232,0.251,0.692,-0.0232,0.248,0.657,-0.0233,0.24,0.645,-0.0236,0.226,0.637,-0.0241,0.213,0.639,-0.0246,0.197,0.652,-0.0253,0.188,0.669,-0.0256,0.184,0.697,-0.0258,0.183,0.73,-0.0258,0.187,0.77,-0.0257,0.244,0.696,-0.0375,0.244,0.692,-0.0372,0.242,0.661,-0.0345,0.241,0.658,-0.0343,0.241,0.656,-0.0341,0.231,0.646,-0.0336,0.206,0.65,-0.0349,0.218,0.644,-0.034,0.205,0.652,-0.0352,0.198,0.667,-0.0367,0.195,0.691,-0.039,0.194,0.696,-0.0395,0.193,0.725,-0.042,0.193,0.731,-0.0425,0.197,0.765,-0.0449,0.197,0.77,-0.0453]);
IndexedFaceSet189.coord = Coordinate190;

Shape186.geometry = IndexedFaceSet189;

Transform185.child = new undefined();

Transform185.child[0] = Shape186;

HAnimSegment184.children = new MFNode();

HAnimSegment184.children[0] = Transform185;

HAnimJoint183.children = new MFNode();

HAnimJoint183.children[0] = HAnimSegment184;

HAnimJoint175.children[1] = HAnimJoint183;

HAnimJoint167.children[1] = HAnimJoint175;

HAnimJoint95.children[1] = HAnimJoint167;

HAnimJoint HAnimJoint191 = createNode("HAnimJoint");
HAnimJoint191.DEF = "hanim_r_shoulder";
HAnimJoint191.name = "r_shoulder";
HAnimJoint191.center = new SFVec3f(new float[-0.167,1.36,-0.0458]);
HAnimSegment HAnimSegment192 = createNode("HAnimSegment");
HAnimSegment192.DEF = "hanim_r_upperarm";
HAnimSegment192.name = "r_upperarm";
Transform Transform193 = createNode("Transform");
Transform193.DEF = "r_upperarm_adjust";
Transform193.translation = new SFVec3f(new float[-0.167,1.36,-0.0458]);
Transform193.rotation = new SFRotation(new float[1,0,0,0.0836]);
Transform193.center = new SFVec3f(new float[-0.182,1.22,-0.047]);
Shape Shape194 = createNode("Shape");
Appearance Appearance195 = createNode("Appearance");
Material Material196 = createNode("Material");
Material196.USE = "WetShirtColor";
Appearance195.material = Material196;

Shape194.appearance = Appearance195;

IndexedFaceSet IndexedFaceSet197 = createNode("IndexedFaceSet");
IndexedFaceSet197.creaseAngle = 1.53;
IndexedFaceSet197.coordIndex = new MFInt32(new int[14,10,20,-1,10,13,20,-1,13,22,20,-1,19,14,20,-1,14,19,12,-1,19,20,24,-1,20,22,25,-1,22,13,25,-1,13,10,11,-1,10,14,5,-1,12,5,14,-1,5,11,10,-1,11,25,13,-1,25,24,20,-1,24,12,19,-1,12,24,9,-1,25,11,8,-1,11,5,2,-1,5,12,9,-1,9,2,5,-1,2,8,11,-1,8,23,25,-1,23,27,25,-1,21,9,24,-1,9,21,7,-1,27,23,18,-1,23,8,18,-1,8,2,6,-1,2,9,7,-1,7,1,2,-1,1,6,2,-1,6,18,8,-1,18,26,27,-1,16,7,21,-1,7,16,4,-1,16,26,17,-1,26,18,15,-1,18,6,3,-1,6,1,0,-1,1,7,0,-1,4,0,7,-1,0,3,6,-1,3,15,18,-1,15,17,26,-1,17,4,16,-1,3,0,15,-1,15,0,4,-1,15,4,17,-1,25,27,24,-1,27,21,24,-1,27,26,21,-1,26,16,21,-1]);
Coordinate Coordinate198 = createNode("Coordinate");
Coordinate198.point = new MFVec3f(new float[-0.221,1.08,-0.0352,-0.214,1.14,-0.0405,-0.209,1.26,-0.0427,-0.208,1.07,-0.00133,-0.203,1.08,-0.0744,-0.201,1.33,-0.0411,-0.198,1.14,-0.0024,-0.198,1.13,-0.076,-0.19,1.26,-0.00401,-0.189,1.26,-0.0808,-0.185,1.38,-0.0395,-0.185,1.33,-0.00025,-0.182,1.33,-0.0728,-0.174,1.37,-0.0158,-0.174,1.37,-0.0625,-0.169,1.08,-0.00885,-0.167,1.13,-0.0744,-0.162,1.05,-0.0561,-0.16,1.13,-0.000793,-0.157,1.38,-0.0733,-0.156,1.39,-0.0464,-0.155,1.26,-0.0867,-0.154,1.37,-0.0185,-0.151,1.26,-0.000789,-0.151,1.33,-0.0937,-0.15,1.34,-0.000787,-0.15,1.13,-0.0411,-0.141,1.26,-0.0421]);
IndexedFaceSet197.coord = Coordinate198;

Shape194.geometry = IndexedFaceSet197;

Transform193.child = new undefined();

Transform193.child[0] = Shape194;

HAnimSegment192.children = new MFNode();

HAnimSegment192.children[0] = Transform193;

HAnimJoint191.children = new MFNode();

HAnimJoint191.children[0] = HAnimSegment192;

HAnimJoint HAnimJoint199 = createNode("HAnimJoint");
HAnimJoint199.DEF = "hanim_r_elbow";
HAnimJoint199.name = "r_elbow";
HAnimJoint199.center = new SFVec3f(new float[-0.192,1.07,-0.0498]);
HAnimSegment HAnimSegment200 = createNode("HAnimSegment");
HAnimSegment200.DEF = "hanim_r_forearm";
HAnimSegment200.name = "r_forearm";
Transform Transform201 = createNode("Transform");
Transform201.DEF = "r_forearm_adjust";
Transform201.translation = new SFVec3f(new float[-0.192,1.07,-0.0498]);
Transform201.rotation = new SFRotation(new float[-1,0,0,0.1254]);
Transform201.center = new SFVec3f(new float[-0.198,0.961,-0.0397]);
Shape Shape202 = createNode("Shape");
Appearance Appearance203 = createNode("Appearance");
Material Material204 = createNode("Material");
Material204.USE = "WetShirtColor";
Appearance203.material = Material204;

Shape202.appearance = Appearance203;

IndexedFaceSet IndexedFaceSet205 = createNode("IndexedFaceSet");
IndexedFaceSet205.creaseAngle = 1.73;
IndexedFaceSet205.coordIndex = new MFInt32(new int[20,13,15,-1,13,8,15,-1,8,12,15,-1,12,18,15,-1,18,22,15,-1,22,20,15,-1,20,22,21,-1,22,18,24,-1,18,12,7,-1,12,8,7,-1,8,13,3,-1,13,20,10,-1,21,10,20,-1,10,3,13,-1,3,7,8,-1,7,19,18,-1,19,24,18,-1,24,21,22,-1,21,24,23,-1,24,19,16,-1,19,7,6,-1,7,3,1,-1,3,10,5,-1,10,21,17,-1,17,5,10,-1,5,1,3,-1,1,6,7,-1,6,16,19,-1,16,23,24,-1,23,17,21,-1,1,5,2,-1,5,17,9,-1,9,2,5,-1,1,4,6,-1,4,16,6,-1,23,9,17,-1,9,23,14,-1,23,16,11,-1,4,11,16,-1,11,14,23,-1,11,4,0,-1,11,0,14,-1,0,2,14,-1,14,2,9,-1,2,0,1,-1,0,4,1,-1]);
Coordinate Coordinate206 = createNode("Coordinate");
Coordinate206.point = new MFVec3f(new float[-0.237,0.82,-0.0282,-0.235,1.02,-0.033,-0.231,0.819,-0.0609,-0.228,1.07,-0.0319,-0.224,0.818,-0.00778,-0.221,1.01,-0.0744,-0.218,1.01,-0.00133,-0.214,1.07,-0.00402,-0.213,1.1,-0.025,-0.21,0.818,-0.0615,-0.208,1.08,-0.0765,-0.205,0.819,-0.00832,-0.203,1.1,-0.0158,-0.202,1.1,-0.0566,-0.201,0.82,-0.0405,-0.189,1.1,-0.0395,-0.183,1.01,-0.00831,-0.183,1.01,-0.0781,-0.182,1.09,-0.00563,-0.179,1.07,-0.00294,-0.177,1.09,-0.0609,-0.176,1.08,-0.0781,-0.167,1.09,-0.0325,-0.166,1,-0.0405,-0.16,1.06,-0.0373]);
IndexedFaceSet205.coord = Coordinate206;

Shape202.geometry = IndexedFaceSet205;

Transform201.child = new undefined();

Transform201.child[0] = Shape202;

HAnimSegment200.children = new MFNode();

HAnimSegment200.children[0] = Transform201;

HAnimJoint199.children = new MFNode();

HAnimJoint199.children[0] = HAnimSegment200;

HAnimJoint HAnimJoint207 = createNode("HAnimJoint");
HAnimJoint207.DEF = "hanim_r_wrist";
HAnimJoint207.name = "r_wrist";
HAnimJoint207.center = new SFVec3f(new float[-0.217,0.811,-0.0338]);
HAnimSegment HAnimSegment208 = createNode("HAnimSegment");
HAnimSegment208.DEF = "hanim_r_hand";
HAnimSegment208.name = "r_hand";
Transform Transform209 = createNode("Transform");
Transform209.DEF = "r_hand_adjust";
Transform209.rotation = new SFRotation(new float[-0.09024,0.994,-0.0624,1.216]);
Transform209.center = new SFVec3f(new float[-0.217,0.811,-0.0338]);
Shape Shape210 = createNode("Shape");
Appearance Appearance211 = createNode("Appearance");
Material Material212 = createNode("Material");
Material212.USE = "Skin_Color";
Appearance211.material = Material212;

Shape210.appearance = Appearance211;

IndexedFaceSet IndexedFaceSet213 = createNode("IndexedFaceSet");
IndexedFaceSet213.creaseAngle = 1.57;
IndexedFaceSet213.coordIndex = new MFInt32(new int[10,9,0,-1,11,30,31,-1,1,12,11,-1,1,11,0,-1,2,13,12,-1,2,12,1,-1,3,14,13,-1,3,13,2,-1,4,15,14,-1,4,14,3,-1,5,16,15,-1,5,15,4,-1,6,17,16,-1,6,16,5,-1,7,18,17,-1,7,17,6,-1,8,19,18,-1,8,18,7,-1,10,31,30,-1,10,30,9,-1,0,11,31,-1,0,31,10,-1,22,23,24,-1,21,22,24,-1,21,24,25,-1,21,25,26,-1,20,21,26,-1,20,26,27,-1,19,20,27,-1,19,27,28,-1,14,15,16,-1,14,16,17,-1,14,17,18,-1,13,14,18,-1,13,18,29,-1,12,13,29,-1,12,29,30,-1,11,12,30,-1,18,19,28,-1,18,28,29,-1,6,5,4,-1,6,4,3,-1,7,6,3,-1,7,3,2,-1,9,2,1,-1,9,1,0,-1,32,38,33,-1,33,38,39,-1,33,39,34,-1,34,39,40,-1,34,40,35,-1,35,40,41,-1,35,41,36,-1,36,41,42,-1,36,42,37,-1,37,42,43,-1,37,43,44,-1,44,43,8,-1,44,8,45,-1,45,8,46,-1,46,8,7,-1,46,7,2,-1,46,2,47,-1,9,47,2,-1,25,34,35,-1,25,33,34,-1,25,24,33,-1,24,32,33,-1,32,24,23,-1,40,39,21,-1,41,40,21,-1,43,19,8,-1,43,20,19,-1,43,42,20,-1,21,20,41,-1,20,42,41,-1,38,22,39,-1,22,21,39,-1,32,23,38,-1,23,22,38,-1,26,25,35,-1,27,36,37,-1,27,37,28,-1,37,44,28,-1,26,35,27,-1,35,36,27,-1,28,44,45,-1,29,46,47,-1,29,9,30,-1,29,47,9,-1,28,45,29,-1,45,46,29,-1]);
Coordinate Coordinate214 = createNode("Coordinate");
Coordinate214.point = new MFVec3f(new float[-0.237,0.82,-0.0425,-0.252,0.801,-0.0424,-0.269,0.765,-0.0426,-0.273,0.732,-0.0395,-0.27,0.704,-0.0342,-0.262,0.703,-0.0345,-0.256,0.717,-0.0389,-0.255,0.738,-0.0408,-0.251,0.734,-0.0406,-0.194,0.81,-0.0445,-0.211,0.828,-0.0434,-0.236,0.82,-0.0237,-0.252,0.801,-0.0231,-0.268,0.765,-0.0225,-0.272,0.732,-0.0223,-0.27,0.704,-0.0224,-0.261,0.703,-0.0227,-0.256,0.717,-0.023,-0.255,0.738,-0.023,-0.251,0.734,-0.0232,-0.251,0.692,-0.0232,-0.248,0.657,-0.0233,-0.24,0.645,-0.0236,-0.226,0.637,-0.0241,-0.213,0.639,-0.0246,-0.197,0.652,-0.0253,-0.188,0.669,-0.0256,-0.184,0.697,-0.0258,-0.183,0.73,-0.0258,-0.187,0.77,-0.0257,-0.194,0.81,-0.0254,-0.21,0.828,-0.0247,-0.221,0.641,-0.0336,-0.21,0.65,-0.0348,-0.206,0.652,-0.0352,-0.198,0.667,-0.0368,-0.193,0.692,-0.0392,-0.192,0.696,-0.0396,-0.231,0.646,-0.0336,-0.238,0.656,-0.0342,-0.24,0.658,-0.0344,-0.24,0.662,-0.0347,-0.243,0.692,-0.0372,-0.243,0.696,-0.0376,-0.192,0.725,-0.0421,-0.192,0.73,-0.0426,-0.195,0.766,-0.0451,-0.196,0.77,-0.0454]);
IndexedFaceSet213.coord = Coordinate214;

Shape210.geometry = IndexedFaceSet213;

Transform209.child = new undefined();

Transform209.child[0] = Shape210;

HAnimSegment208.children = new MFNode();

HAnimSegment208.children[0] = Transform209;

HAnimJoint207.children = new MFNode();

HAnimJoint207.children[0] = HAnimSegment208;

HAnimJoint199.children[1] = HAnimJoint207;

HAnimJoint191.children[1] = HAnimJoint199;

HAnimJoint95.children[2] = HAnimJoint191;

HAnimJoint HAnimJoint215 = createNode("HAnimJoint");
HAnimJoint215.DEF = "hanim_vc4";
HAnimJoint215.name = "vc4";
HAnimJoint215.center = new SFVec3f(new float[0,1.43,-0.0458]);
HAnimSegment HAnimSegment216 = createNode("HAnimSegment");
HAnimSegment216.DEF = "hanim_c4";
HAnimSegment216.name = "c4";
Shape Shape217 = createNode("Shape");
Appearance Appearance218 = createNode("Appearance");
Material Material219 = createNode("Material");
Material219.USE = "WetShirtColor";
Appearance218.material = Material219;

Shape217.appearance = Appearance218;

IndexedFaceSet IndexedFaceSet220 = createNode("IndexedFaceSet");
IndexedFaceSet220.DEF = "neck";
IndexedFaceSet220.creaseAngle = 1.91;
IndexedFaceSet220.coordIndex = new MFInt32(new int[6,5,2,-1,6,2,3,-1,5,4,1,-1,5,1,2,-1,4,7,0,-1,4,0,1,-1,11,10,9,-1,11,9,8,-1,10,13,12,-1,10,12,9,-1,13,15,14,-1,13,14,12,-1,6,3,11,-1,6,11,8,-1,7,14,15,-1,7,15,0,-1,2,10,11,-1,2,11,3,-1,2,1,13,-1,2,13,10,-1,1,0,15,-1,1,15,13,-1,9,5,6,-1,9,6,8,-1,9,12,4,-1,9,4,5,-1,12,14,7,-1,12,7,4,-1]);
Coordinate Coordinate221 = createNode("Coordinate");
Coordinate221.point = new MFVec3f(new float[0.0105,1.54,-0.1,0.0357,1.54,-0.0685,0.0382,1.55,-0.0474,0.0105,1.55,-0.0204,0.0373,1.4,-0.0593,0.0577,1.4,-0.0266,0.0158,1.4,0.00512,0.0132,1.41,-0.0824,-0.0158,1.4,0.00512,-0.0577,1.4,-0.0266,-0.0382,1.55,-0.0474,-0.0105,1.55,-0.0204,-0.0373,1.4,-0.0593,-0.0357,1.54,-0.0685,-0.0132,1.41,-0.0824,-0.0105,1.54,-0.1]);
IndexedFaceSet220.coord = Coordinate221;

Shape217.geometry = IndexedFaceSet220;

HAnimSegment216.children = new MFNode();

HAnimSegment216.children[0] = Shape217;

HAnimJoint215.children = new MFNode();

HAnimJoint215.children[0] = HAnimSegment216;

HAnimJoint HAnimJoint222 = createNode("HAnimJoint");
HAnimJoint222.DEF = "hanim_skullbase";
HAnimJoint222.name = "skullbase";
HAnimJoint222.center = new SFVec3f(new float[0,1.54,-0.0409]);
HAnimSegment HAnimSegment223 = createNode("HAnimSegment");
HAnimSegment223.DEF = "hanim_skull";
HAnimSegment223.name = "skull";
Shape Shape224 = createNode("Shape");
Appearance Appearance225 = createNode("Appearance");
Material Material226 = createNode("Material");
Material226.USE = "Skin_Color";
Appearance225.material = Material226;

Shape224.appearance = Appearance225;

IndexedFaceSet IndexedFaceSet227 = createNode("IndexedFaceSet");
IndexedFaceSet227.DEF = "headIFS";
IndexedFaceSet227.colorIndex = new MFInt32(new int[1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1]);
IndexedFaceSet227.coordIndex = new MFInt32(new int[48,87,58,-1,91,92,59,-1,59,92,88,-1,88,93,231,-1,232,86,233,-1,86,89,233,-1,89,57,56,-1,49,55,57,-1,102,86,96,-1,86,90,96,-1,97,95,96,-1,97,127,95,-1,41,96,154,-1,41,102,96,-1,99,102,41,-1,153,99,41,-1,102,40,86,-1,234,235,236,-1,87,237,58,-1,56,57,91,-1,87,234,237,-1,234,236,237,-1,89,49,57,-1,49,50,55,-1,40,89,86,-1,89,56,233,-1,232,90,86,-1,90,97,96,-1,92,93,88,-1,93,94,231,-1,232,231,94,-1,97,90,232,-1,96,42,154,-1,95,42,96,-1,53,46,45,-1,53,45,51,-1,53,51,92,-1,92,51,52,-1,92,52,93,-1,94,93,52,-1,94,52,4,-1,97,232,94,-1,54,47,46,-1,54,46,53,-1,55,47,54,-1,50,47,55,-1,34,33,50,-1,34,50,49,-1,35,34,49,-1,35,49,89,-1,35,89,40,-1,99,39,102,-1,39,35,40,-1,31,34,35,-1,31,35,32,-1,14,32,35,-1,14,35,39,-1,14,39,98,-1,137,38,153,-1,38,99,153,-1,38,98,99,-1,37,238,239,-1,11,238,37,-1,101,37,36,-1,241,141,242,-1,10,12,242,-1,12,13,14,-1,12,14,243,-1,13,15,32,-1,13,32,14,-1,15,16,31,-1,15,31,32,-1,2,70,10,-1,2,10,141,-1,70,69,12,-1,70,12,10,-1,69,68,13,-1,69,13,12,-1,68,67,15,-1,68,15,13,-1,67,66,16,-1,67,16,15,-1,98,39,99,-1,101,11,37,-1,100,101,36,-1,36,244,240,-1,141,10,242,-1,12,243,242,-1,36,37,239,-1,36,239,244,-1,57,55,91,-1,55,54,91,-1,39,40,102,-1,123,103,120,-1,114,122,104,-1,115,122,114,-1,208,105,115,-1,210,119,211,-1,210,106,119,-1,116,107,106,-1,107,108,117,-1,126,119,109,-1,126,110,119,-1,126,95,125,-1,95,127,125,-1,154,126,111,-1,126,109,111,-1,111,109,112,-1,111,112,153,-1,119,113,109,-1,207,213,214,-1,123,209,103,-1,213,212,214,-1,209,214,103,-1,209,207,214,-1,107,117,106,-1,108,118,117,-1,119,106,113,-1,210,116,106,-1,119,110,211,-1,126,125,110,-1,115,105,122,-1,208,124,105,-1,124,208,211,-1,211,110,125,-1,154,42,126,-1,126,42,95,-1,168,128,121,-1,170,168,121,-1,122,170,121,-1,172,170,122,-1,105,172,122,-1,172,105,124,-1,4,172,124,-1,124,211,125,-1,128,130,129,-1,121,128,129,-1,129,130,108,-1,108,130,118,-1,118,131,132,-1,117,118,132,-1,117,132,133,-1,106,117,133,-1,113,106,133,-1,109,152,112,-1,113,133,152,-1,133,132,134,-1,135,133,134,-1,133,135,136,-1,152,133,136,-1,148,152,136,-1,153,138,137,-1,153,112,138,-1,112,148,138,-1,219,217,139,-1,36,240,149,-1,139,217,140,-1,149,139,151,-1,36,149,100,-1,220,141,241,-1,220,150,142,-1,136,143,150,-1,221,136,150,-1,135,144,143,-1,136,135,143,-1,134,158,144,-1,135,134,144,-1,142,161,2,-1,141,142,2,-1,150,145,161,-1,142,150,161,-1,143,146,145,-1,150,143,145,-1,144,147,146,-1,143,144,146,-1,158,160,147,-1,144,158,147,-1,112,152,148,-1,139,140,151,-1,149,151,100,-1,240,218,149,-1,220,142,141,-1,220,221,150,-1,219,139,149,-1,218,219,149,-1,104,108,107,-1,104,129,108,-1,109,113,152,-1,153,41,111,-1,129,104,122,-1,129,122,121,-1,91,54,92,-1,54,53,92,-1,97,94,127,-1,127,94,4,-1,125,127,124,-1,127,4,124,-1,154,111,41,-1,31,30,33,-1,31,33,34,-1,16,17,30,-1,16,30,31,-1,66,65,17,-1,66,17,16,-1,2,73,156,-1,2,156,70,-1,156,72,66,-1,156,66,67,-1,156,67,68,-1,156,68,69,-1,156,69,70,-1,72,71,65,-1,72,65,66,-1,17,18,30,-1,45,44,51,-1,51,44,43,-1,51,43,52,-1,52,43,1,-1,52,1,4,-1,245,246,27,-1,245,27,3,-1,246,247,28,-1,246,28,27,-1,248,22,29,-1,248,29,28,-1,248,28,247,-1,27,26,0,-1,27,0,3,-1,27,28,25,-1,27,25,26,-1,29,24,25,-1,29,25,28,-1,22,23,24,-1,22,24,29,-1,249,250,22,-1,249,22,248,-1,250,60,23,-1,250,23,22,-1,17,254,18,-1,65,254,17,-1,71,64,65,-1,63,74,75,-1,63,75,61,-1,64,255,254,-1,75,62,61,-1,62,76,60,-1,76,77,23,-1,76,23,60,-1,77,24,23,-1,77,78,25,-1,77,25,24,-1,78,84,26,-1,78,26,25,-1,84,192,0,-1,84,0,26,-1,84,83,193,-1,84,193,192,-1,79,83,84,-1,79,84,78,-1,76,79,78,-1,76,78,77,-1,80,83,79,-1,80,204,83,-1,75,81,80,-1,81,85,204,-1,81,204,80,-1,74,81,75,-1,74,82,81,-1,82,5,85,-1,82,85,81,-1,155,8,71,-1,155,71,72,-1,8,6,64,-1,8,64,71,-1,6,7,255,-1,6,255,64,-1,7,9,256,-1,7,256,255,-1,9,257,256,-1,73,155,156,-1,155,72,156,-1,204,193,83,-1,64,254,65,-1,131,157,134,-1,132,131,134,-1,157,159,158,-1,134,157,158,-1,159,206,160,-1,158,159,160,-1,203,73,2,-1,161,203,2,-1,160,162,203,-1,147,160,203,-1,146,147,203,-1,145,146,203,-1,161,145,203,-1,206,163,162,-1,160,206,162,-1,157,164,159,-1,170,169,168,-1,171,169,170,-1,172,171,170,-1,1,171,172,-1,4,1,172,-1,173,227,245,-1,3,173,245,-1,174,226,227,-1,173,174,227,-1,176,175,215,-1,174,176,215,-1,226,174,215,-1,0,177,173,-1,3,0,173,-1,178,174,173,-1,177,178,173,-1,178,179,176,-1,174,178,176,-1,179,180,175,-1,176,179,175,-1,175,225,216,-1,215,175,216,-1,180,181,225,-1,175,180,225,-1,164,228,159,-1,159,228,206,-1,206,185,163,-1,187,186,184,-1,183,187,184,-1,228,229,185,-1,183,182,187,-1,181,188,182,-1,180,189,188,-1,181,180,188,-1,180,179,189,-1,178,190,189,-1,179,178,189,-1,177,191,190,-1,178,177,190,-1,0,192,191,-1,177,0,191,-1,193,205,191,-1,192,193,191,-1,191,205,194,-1,190,191,194,-1,190,194,188,-1,189,190,188,-1,194,205,195,-1,205,204,195,-1,195,196,187,-1,204,85,196,-1,195,204,196,-1,187,196,186,-1,196,197,186,-1,85,5,197,-1,196,85,197,-1,163,198,202,-1,162,163,202,-1,185,199,198,-1,163,185,198,-1,229,200,199,-1,185,229,199,-1,230,201,200,-1,229,230,200,-1,230,257,201,-1,203,202,73,-1,203,162,202,-1,205,193,204,-1,206,228,185,-1,198,8,155,-1,198,155,202,-1,155,73,202,-1,199,6,8,-1,199,8,198,-1,7,6,199,-1,7,199,200,-1,201,9,7,-1,201,7,200,-1,201,257,9,-1,188,194,195,-1,188,195,182,-1,195,187,182,-1,80,79,76,-1,80,62,75,-1,80,76,62,-1,47,50,33,-1,131,118,130,-1,20,21,47,-1,21,46,47,-1,20,33,19,-1,20,47,33,-1,33,30,19,-1,30,18,19,-1,62,60,251,-1,60,250,251,-1,252,61,251,-1,61,62,251,-1,252,63,61,-1,252,253,63,-1,166,130,167,-1,130,128,167,-1,166,131,130,-1,166,165,131,-1,165,157,131,-1,165,164,157,-1,224,181,182,-1,224,225,181,-1,224,183,223,-1,224,182,183,-1,183,184,223,-1,184,222,223,-1]);
Color Color228 = createNode("Color");
Color228.color = new MFColor(new float[0.749,0.601,0.462,0.1735,0.2602,0.749,0.6364,0.133,0.1526,0.4545,0.2759,0.1902,0,0,0.502]);
IndexedFaceSet227.color = Color228;

Coordinate Coordinate229 = createNode("Coordinate");
Coordinate229.DEF = "Face";
Coordinate229.point = new MFVec3f(new float[0,1.708,-0.0435,0,1.655,0.04322,0,1.486,0.02335,0,1.694,0.007789,0,1.631,0.051,0,1.524,-0.102,0.04,1.51,-0.07278,0.04029,1.514,-0.08254,0.03528,1.502,-0.05013,0.03479,1.517,-0.09269,0.0116,1.494,0.03382,0.01946,1.52,0.03421,0.02204,1.494,0.0272,0.02734,1.498,0.02215,0.02788,1.528,0.03084,0.0338,1.503,0.0124,0.04008,1.509,0.002821,0.05122,1.518,-0.02784,0.05867,1.544,-0.03316,0.06433,1.563,-0.03678,0.06732,1.583,-0.03683,0.06769,1.617,-0.03436,0.06641,1.637,-0.03046,0.06818,1.637,-0.04285,0.06308,1.666,-0.04036,0.05305,1.685,-0.03987,0.03136,1.7,-0.0413,0.02919,1.688,0.0091,0.05272,1.674,-0.001657,0.06061,1.66,-0.0101,0.05254,1.541,-0.01363,0.04099,1.527,0.008832,0.03528,1.524,0.02097,0.05792,1.557,-0.004307,0.04413,1.539,0.0149,0.03746,1.539,0.02656,0.003407,1.524,0.04155,0.01481,1.526,0.03912,0.005112,1.532,0.04358,0.02438,1.542,0.03578,0.02636,1.55,0.03808,0.006135,1.55,0.0545,0,1.559,0.05502,0.02958,1.651,0.03965,0.04847,1.643,0.02895,0.05856,1.63,0.01803,0.06182,1.614,0.008199,0.06194,1.6,0.002668,0.01489,1.583,0.04109,0.05282,1.569,0.02821,0.05767,1.58,0.0184,0.04643,1.625,0.03705,0.0264,1.628,0.04807,0.0556,1.609,0.02579,0.05467,1.599,0.02153,0.05316,1.589,0.0207,0.03603,1.58,0.03536,0.04597,1.586,0.02904,0.02106,1.592,0.03748,0.03428,1.595,0.03294,0.06808,1.617,-0.06112,0.06714,1.564,-0.07003,0.06993,1.594,-0.08238,0.05324,1.536,-0.05922,0.04904,1.521,-0.05132,0.04758,1.514,-0.03107,0.03539,1.503,-0.00093,0.02999,1.498,0.006194,0.02308,1.492,0.01628,0.01772,1.488,0.02135,0.01378,1.488,0.02484,0.04349,1.512,-0.03987,0.02308,1.499,-0.02088,0,1.487,-0.018,0.04795,1.531,-0.08973,0.05739,1.555,-0.0982,0.06815,1.622,-0.107,0.06872,1.655,-0.08466,0.05233,1.678,-0.09642,0.05334,1.631,-0.1239,0.05011,1.581,-0.1193,0.04359,1.551,-0.1067,0.03839,1.528,-0.09652,0.03399,1.636,-0.1304,0.03224,1.685,-0.1024,0,1.557,-0.1126,0.01864,1.566,0.04105,0.0249,1.58,0.0387,0.02735,1.596,0.03552,0.04317,1.564,0.03643,0.01246,1.577,0.04276,0.04354,1.59,0.02822,0.04557,1.601,0.03652,0.0291,1.603,0.04274,0.01856,1.6,0.04349,0,1.579,0.04893,0.01064,1.558,0.04476,0.005501,1.578,0.04574,0.01405,1.531,0.04152,0.01037,1.544,0.04266,0,1.515,0.03836,0.00797,1.515,0.03774,0.01824,1.55,0.04063,-0.0249,1.58,0.0387,-0.04354,1.59,0.02822,-0.0291,1.603,0.04274,-0.04317,1.564,0.03643,-0.04597,1.586,0.02904,-0.05316,1.589,0.0207,-0.01824,1.55,0.04063,-0.01246,1.577,0.04276,-0.006135,1.55,0.0545,-0.01037,1.544,0.04266,-0.02636,1.55,0.03808,-0.03428,1.595,0.03294,-0.02735,1.596,0.03552,-0.03603,1.58,0.03536,-0.05282,1.569,0.02821,-0.05767,1.58,0.0184,-0.01864,1.566,0.04105,-0.01489,1.583,0.04109,-0.0556,1.609,0.02579,-0.04557,1.601,0.03652,-0.02106,1.592,0.03748,-0.01856,1.6,0.04349,-0.005501,1.578,0.04574,-0.01064,1.558,0.04476,0,1.592,0.04694,-0.06182,1.614,0.008199,-0.05467,1.599,0.02153,-0.06194,1.6,0.002668,-0.05792,1.557,-0.004307,-0.04413,1.539,0.0149,-0.03746,1.539,0.02656,-0.04099,1.527,0.008832,-0.03528,1.524,0.02097,-0.02788,1.528,0.03084,0,1.53,0.04236,-0.005112,1.532,0.04358,-0.01481,1.526,0.03912,-0.01946,1.52,0.03421,0,1.495,0.0348,-0.0116,1.494,0.03382,-0.02734,1.498,0.02215,-0.0338,1.503,0.0124,-0.01772,1.488,0.02135,-0.02308,1.492,0.01628,-0.02999,1.498,0.006194,-0.01405,1.531,0.04152,-0.003407,1.524,0.04155,-0.02204,1.494,0.0272,-0.00797,1.515,0.03774,-0.02438,1.542,0.03578,0,1.543,0.04432,0,1.555,0.05692,0.02295,1.492,-0.02694,0.007322,1.489,-0.01677,-0.05254,1.541,-0.01363,-0.04008,1.509,0.002821,-0.05122,1.518,-0.02784,-0.03539,1.503,-0.00093,-0.01378,1.488,0.02484,-0.02308,1.499,-0.02088,-0.04349,1.512,-0.03987,-0.05867,1.544,-0.03316,-0.06433,1.563,-0.03678,-0.06732,1.583,-0.03683,-0.06769,1.617,-0.03436,-0.05856,1.63,0.01803,-0.04847,1.643,0.02895,-0.04643,1.625,0.03705,-0.02958,1.651,0.03965,-0.0264,1.628,0.04807,-0.02919,1.688,0.0091,-0.05272,1.674,-0.001657,-0.06641,1.637,-0.03046,-0.06061,1.66,-0.0101,-0.03136,1.7,-0.0413,-0.05305,1.685,-0.03987,-0.06308,1.666,-0.04036,-0.06818,1.637,-0.04285,-0.06808,1.617,-0.06112,-0.06993,1.594,-0.08238,-0.06714,1.564,-0.07003,-0.05324,1.536,-0.05922,-0.04904,1.521,-0.05132,-0.04795,1.531,-0.08973,-0.05739,1.555,-0.0982,-0.06815,1.622,-0.107,-0.06872,1.655,-0.08466,-0.05233,1.678,-0.09642,-0.03224,1.685,-0.1024,0,1.69,-0.1047,0,1.64,-0.1342,-0.05334,1.631,-0.1239,-0.05011,1.581,-0.1193,-0.04359,1.551,-0.1067,-0.03839,1.528,-0.09652,-0.03528,1.502,-0.05013,-0.04,1.51,-0.07278,-0.04029,1.514,-0.08254,-0.03479,1.517,-0.09269,-0.02295,1.492,-0.02694,-0.007322,1.489,-0.01677,0,1.588,-0.1329,-0.03399,1.636,-0.1304,-0.04758,1.514,-0.03107,-0.03428,1.595,0.03294,-0.02106,1.592,0.03748,-0.02735,1.596,0.03552,-0.0249,1.58,0.0387,-0.01489,1.583,0.04109,-0.04597,1.586,0.02904,-0.04354,1.59,0.02822,-0.03603,1.58,0.03536,-0.05856,1.63,0.01803,-0.06182,1.614,0.008199,-0.02788,1.528,0.03084,-0.005112,1.532,0.04358,-0.01405,1.531,0.04152,-0.00797,1.515,0.03774,-0.01946,1.52,0.03421,-0.05867,1.544,-0.03316,-0.06433,1.563,-0.03678,-0.06732,1.583,-0.03683,-0.06769,1.617,-0.03436,-0.04847,1.643,0.02895,-0.02958,1.651,0.03965,-0.05324,1.536,-0.05922,-0.04795,1.531,-0.08973,-0.03839,1.528,-0.09652,0.02106,1.592,0.03748,0.01489,1.583,0.04109,0.0249,1.58,0.0387,0.03603,1.58,0.03536,0.04354,1.59,0.02822,0.03428,1.595,0.03294,0.02735,1.596,0.03552,0.02788,1.528,0.03084,0.01405,1.531,0.04152,0,1.53,0.04236,0,1.515,0.03836,0.00797,1.515,0.03774,0.01946,1.52,0.03421,0.005112,1.532,0.04358,0,1.655,0.04322,0.02958,1.651,0.03965,0.04847,1.643,0.02895,0.05856,1.63,0.01803,0.06182,1.614,0.008199,0.06769,1.617,-0.03436,0.06732,1.583,-0.03683,0.06433,1.563,-0.03678,0.05867,1.544,-0.03316,0.05324,1.536,-0.05922,0.04795,1.531,-0.08973,0.03839,1.528,-0.09652,0,1.524,-0.102]);
IndexedFaceSet227.coord = Coordinate229;

Shape224.geometry = IndexedFaceSet227;

HAnimSegment223.children = new MFNode();

HAnimSegment223.children[0] = Shape224;

Transform Transform230 = createNode("Transform");
Transform230.DEF = "maskAndSnorkel";
Transform230.translation = new SFVec3f(new float[0,1.54,-0.0409]);
Inline Inline231 = createNode("Inline");
Inline231.DEF = "MaskAndSnorkel";
Inline231.global = True;
Inline231.url = new MFString(new java.lang.String["MaskAndSnorkel.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/MaskAndSnorkel.x3d","MaskAndSnorkel.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/MaskAndSnorkel.wrl"]);
Transform230.children = new MFNode();

Transform230.children[0] = Inline231;

HAnimSegment223.children[1] = Transform230;

Transform Transform232 = createNode("Transform");
Transform232.DEF = "mouthpiece";
Transform232.translation = new SFVec3f(new float[0,1.54,-0.0409]);
Transform232.rotation = new SFRotation(new float[0.86,-0.58,-0.58,2.09]);
Transform Transform233 = createNode("Transform");
Transform233.translation = new SFVec3f(new float[0,0.0018,0]);
Shape Shape234 = createNode("Shape");
Appearance Appearance235 = createNode("Appearance");
Material Material236 = createNode("Material");
Material236.DEF = "gray";
Material236.ambientIntensity = 0.3;
Material236.diffuseColor = new SFColor(new float[0.9,0.9,0.89]);
Material236.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Material236.shininess = 0.1;
Appearance235.material = Material236;

Shape234.appearance = Appearance235;

Cylinder Cylinder237 = createNode("Cylinder");
Cylinder237.height = 0.006;
Cylinder237.radius = 0.015;
Shape234.geometry = Cylinder237;

Transform233.child = new undefined();

Transform233.child[0] = Shape234;

Transform232.children = new MFNode();

Transform232.children[0] = Transform233;

Transform Transform238 = createNode("Transform");
Shape Shape239 = createNode("Shape");
Appearance Appearance240 = createNode("Appearance");
Material Material241 = createNode("Material");
Material241.DEF = "black";
Material241.diffuseColor = new SFColor(new float[0,0,0]);
Appearance240.material = Material241;

Shape239.appearance = Appearance240;

Cone Cone242 = createNode("Cone");
Cone242.height = 0.01;
Cone242.bottomRadius = 0.03;
Shape239.geometry = Cone242;

Transform238.child = new undefined();

Transform238.child[0] = Shape239;

Transform232.children[1] = Transform238;

Transform Transform243 = createNode("Transform");
Transform243.translation = new SFVec3f(new float[0,-0.015,0]);
Shape Shape244 = createNode("Shape");
Appearance Appearance245 = createNode("Appearance");
Material Material246 = createNode("Material");
Material246.USE = "black";
Appearance245.material = Material246;

Shape244.appearance = Appearance245;

Cylinder Cylinder247 = createNode("Cylinder");
Cylinder247.height = 0.02;
Cylinder247.radius = 0.03;
Shape244.geometry = Cylinder247;

Transform243.child = new undefined();

Transform243.child[0] = Shape244;

Transform232.children[2] = Transform243;

Transform Transform248 = createNode("Transform");
Transform248.translation = new SFVec3f(new float[0,-0.025,0]);
Shape Shape249 = createNode("Shape");
Appearance Appearance250 = createNode("Appearance");
Material Material251 = createNode("Material");
Material251.USE = "black";
Appearance250.material = Material251;

Shape249.appearance = Appearance250;

Cylinder Cylinder252 = createNode("Cylinder");
Cylinder252.height = 0.02;
Cylinder252.radius = 0.015;
Shape249.geometry = Cylinder252;

Transform248.child = new undefined();

Transform248.child[0] = Shape249;

Transform232.children[3] = Transform248;

Transform Transform253 = createNode("Transform");
Transform253.translation = new SFVec3f(new float[0,-0.04,0]);
Transform253.rotation = new SFRotation(new float[0,0,1,0.9]);
Shape Shape254 = createNode("Shape");
Shape254.DEF = "mouthpiecePlastic";
Appearance Appearance255 = createNode("Appearance");
Material Material256 = createNode("Material");
Material256.diffuseColor = new SFColor(new float[1,1,1]);
Material256.emissiveColor = new SFColor(new float[1,1,1]);
Appearance255.material = Material256;

Shape254.appearance = Appearance255;

Box Box257 = createNode("Box");
Box257.size = new SFVec3f(new float[0.002,0.03,0.018]);
Shape254.geometry = Box257;

Transform253.child = new undefined();

Transform253.child[0] = Shape254;

Transform232.children[4] = Transform253;

Transform Transform258 = createNode("Transform");
Transform258.translation = new SFVec3f(new float[0,-0.04,0]);
Transform258.rotation = new SFRotation(new float[0,0,1,-0.9]);
Shape Shape259 = createNode("Shape");
Shape259.USE = "mouthpiecePlastic";
Transform258.child = new undefined();

Transform258.child[0] = Shape259;

Transform232.children[5] = Transform258;

Transform Transform260 = createNode("Transform");
Transform260.translation = new SFVec3f(new float[0,-0.015,0.03]);
Transform260.rotation = new SFRotation(new float[1,0,0,1.57]);
Shape Shape261 = createNode("Shape");
Appearance Appearance262 = createNode("Appearance");
Material Material263 = createNode("Material");
Material263.USE = "gray";
Appearance262.material = Material263;

Shape261.appearance = Appearance262;

Cylinder Cylinder264 = createNode("Cylinder");
Cylinder264.height = 0.02;
Cylinder264.radius = 0.0075;
Shape261.geometry = Cylinder264;

Transform260.child = new undefined();

Transform260.child[0] = Shape261;

Transform232.children[6] = Transform260;

Transform Transform265 = createNode("Transform");
Transform265.DEF = "airTube";
Transform265.translation = new SFVec3f(new float[0,-0.02,0.055]);
Transform265.rotation = new SFRotation(new float[0,1,0,1.57]);
Transform265.scale = new SFVec3f(new float[0.7,0.7,0.7]);
Transform Transform266 = createNode("Transform");
Transform266.rotation = new SFRotation(new float[-0.21,0.21,-0.95,4.67]);
Shape Shape267 = createNode("Shape");
Appearance Appearance268 = createNode("Appearance");
Material Material269 = createNode("Material");
Material269.diffuseColor = new SFColor(new float[0,0,0]);
Appearance268.material = Material269;

Shape267.appearance = Appearance268;

Extrusion Extrusion270 = createNode("Extrusion");
Extrusion270.crossSection = new MFVec2f(new float[0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013]);
Extrusion270.spine = new MFVec3f(new float[0.005,-0.03,0,-0.01,0.02,0,-0.03,0.08,0,-0.05,0.14,0,-0.08,0.19,0,-0.1,0.22,0,-0.12,0.25,0,-0.15,0.27,0,-0.18,0.28,0,-0.21,0.29,0,-0.26,0.28,0,-0.28,0.26,0,-0.305,0.23,0,-0.32,0.2,0,-0.34,0.16,0,-0.35,0.12,0,-0.37,0.04,0,-0.385,0,0,-0.39,-0.07,0]);
Shape267.geometry = Extrusion270;

Transform266.child = new undefined();

Transform266.child[0] = Shape267;

Transform265.children = new MFNode();

Transform265.children[0] = Transform266;

Transform232.children[7] = Transform265;

HAnimSegment223.children[2] = Transform232;

Transform Transform271 = createNode("Transform");
Transform271.DEF = "Bubbles";
Transform271.translation = new SFVec3f(new float[0,1.54,-0.0409]);
Transform271.scale = new SFVec3f(new float[0.35,0.35,0.35]);
Inline Inline272 = createNode("Inline");
Inline272.DEF = "bubbles";
Inline272.global = True;
Inline272.url = new MFString(new java.lang.String["Bubbles.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/Bubbles.x3d","Bubbles.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/Bubbles.wrl"]);
Transform271.children = new MFNode();

Transform271.children[0] = Inline272;

HAnimSegment223.children[3] = Transform271;

HAnimJoint222.children = new MFNode();

HAnimJoint222.children[0] = HAnimSegment223;

HAnimJoint215.children[1] = HAnimJoint222;

HAnimJoint95.children[3] = HAnimJoint215;

HAnimJoint33.children[1] = HAnimJoint95;

HAnimHumanoid32.joints = new MFNode();

HAnimHumanoid32.joints[0] = HAnimJoint33;

HAnimJoint HAnimJoint273 = createNode("HAnimJoint");
HAnimJoint273.USE = "hanim_humanoid_root";
HAnimHumanoid32.joints[1] = HAnimJoint273;

HAnimJoint HAnimJoint274 = createNode("HAnimJoint");
HAnimJoint274.USE = "hanim_sacroiliac";
HAnimHumanoid32.joints[2] = HAnimJoint274;

HAnimJoint HAnimJoint275 = createNode("HAnimJoint");
HAnimJoint275.USE = "hanim_vl1";
HAnimHumanoid32.joints[3] = HAnimJoint275;

HAnimJoint HAnimJoint276 = createNode("HAnimJoint");
HAnimJoint276.USE = "hanim_vc4";
HAnimHumanoid32.joints[4] = HAnimJoint276;

HAnimJoint HAnimJoint277 = createNode("HAnimJoint");
HAnimJoint277.USE = "hanim_skullbase";
HAnimHumanoid32.joints[5] = HAnimJoint277;

HAnimJoint HAnimJoint278 = createNode("HAnimJoint");
HAnimJoint278.USE = "hanim_l_ankle";
HAnimHumanoid32.joints[6] = HAnimJoint278;

HAnimJoint HAnimJoint279 = createNode("HAnimJoint");
HAnimJoint279.USE = "hanim_r_ankle";
HAnimHumanoid32.joints[7] = HAnimJoint279;

HAnimJoint HAnimJoint280 = createNode("HAnimJoint");
HAnimJoint280.USE = "hanim_l_elbow";
HAnimHumanoid32.joints[8] = HAnimJoint280;

HAnimJoint HAnimJoint281 = createNode("HAnimJoint");
HAnimJoint281.USE = "hanim_r_elbow";
HAnimHumanoid32.joints[9] = HAnimJoint281;

HAnimJoint HAnimJoint282 = createNode("HAnimJoint");
HAnimJoint282.USE = "hanim_l_hip";
HAnimHumanoid32.joints[10] = HAnimJoint282;

HAnimJoint HAnimJoint283 = createNode("HAnimJoint");
HAnimJoint283.USE = "hanim_r_hip";
HAnimHumanoid32.joints[11] = HAnimJoint283;

HAnimJoint HAnimJoint284 = createNode("HAnimJoint");
HAnimJoint284.USE = "hanim_l_knee";
HAnimHumanoid32.joints[12] = HAnimJoint284;

HAnimJoint HAnimJoint285 = createNode("HAnimJoint");
HAnimJoint285.USE = "hanim_r_knee";
HAnimHumanoid32.joints[13] = HAnimJoint285;

HAnimJoint HAnimJoint286 = createNode("HAnimJoint");
HAnimJoint286.USE = "hanim_l_shoulder";
HAnimHumanoid32.joints[14] = HAnimJoint286;

HAnimJoint HAnimJoint287 = createNode("HAnimJoint");
HAnimJoint287.USE = "hanim_r_shoulder";
HAnimHumanoid32.joints[15] = HAnimJoint287;

HAnimJoint HAnimJoint288 = createNode("HAnimJoint");
HAnimJoint288.USE = "hanim_l_wrist";
HAnimHumanoid32.joints[16] = HAnimJoint288;

HAnimJoint HAnimJoint289 = createNode("HAnimJoint");
HAnimJoint289.USE = "hanim_r_wrist";
HAnimHumanoid32.joints[17] = HAnimJoint289;

HAnimSegment HAnimSegment290 = createNode("HAnimSegment");
HAnimSegment290.USE = "hanim_pelvis";
HAnimHumanoid32.segments[18] = HAnimSegment290;

HAnimSegment HAnimSegment291 = createNode("HAnimSegment");
HAnimSegment291.USE = "hanim_l1";
HAnimHumanoid32.segments[19] = HAnimSegment291;

HAnimSegment HAnimSegment292 = createNode("HAnimSegment");
HAnimSegment292.USE = "hanim_c4";
HAnimHumanoid32.segments[20] = HAnimSegment292;

HAnimSegment HAnimSegment293 = createNode("HAnimSegment");
HAnimSegment293.USE = "hanim_skull";
HAnimHumanoid32.segments[21] = HAnimSegment293;

HAnimSegment HAnimSegment294 = createNode("HAnimSegment");
HAnimSegment294.USE = "hanim_l_calf";
HAnimHumanoid32.segments[22] = HAnimSegment294;

HAnimSegment HAnimSegment295 = createNode("HAnimSegment");
HAnimSegment295.USE = "hanim_r_calf";
HAnimHumanoid32.segments[23] = HAnimSegment295;

HAnimSegment HAnimSegment296 = createNode("HAnimSegment");
HAnimSegment296.USE = "hanim_l_forearm";
HAnimHumanoid32.segments[24] = HAnimSegment296;

HAnimSegment HAnimSegment297 = createNode("HAnimSegment");
HAnimSegment297.USE = "hanim_r_forearm";
HAnimHumanoid32.segments[25] = HAnimSegment297;

HAnimSegment HAnimSegment298 = createNode("HAnimSegment");
HAnimSegment298.USE = "hanim_l_hand";
HAnimHumanoid32.segments[26] = HAnimSegment298;

HAnimSegment HAnimSegment299 = createNode("HAnimSegment");
HAnimSegment299.USE = "hanim_r_hand";
HAnimHumanoid32.segments[27] = HAnimSegment299;

HAnimSegment HAnimSegment300 = createNode("HAnimSegment");
HAnimSegment300.USE = "hanim_l_hindfoot";
HAnimHumanoid32.segments[28] = HAnimSegment300;

HAnimSegment HAnimSegment301 = createNode("HAnimSegment");
HAnimSegment301.USE = "hanim_r_hindfoot";
HAnimHumanoid32.segments[29] = HAnimSegment301;

HAnimSegment HAnimSegment302 = createNode("HAnimSegment");
HAnimSegment302.USE = "hanim_l_thigh";
HAnimHumanoid32.segments[30] = HAnimSegment302;

HAnimSegment HAnimSegment303 = createNode("HAnimSegment");
HAnimSegment303.USE = "hanim_r_thigh";
HAnimHumanoid32.segments[31] = HAnimSegment303;

HAnimSegment HAnimSegment304 = createNode("HAnimSegment");
HAnimSegment304.USE = "hanim_l_upperarm";
HAnimHumanoid32.segments[32] = HAnimSegment304;

HAnimSegment HAnimSegment305 = createNode("HAnimSegment");
HAnimSegment305.USE = "hanim_r_upperarm";
HAnimHumanoid32.segments[33] = HAnimSegment305;

Transform31.children = new MFNode();

Transform31.children[0] = HAnimHumanoid32;

Transform21.children[1] = Transform31;

Transform20.children = new MFNode();

Transform20.children[0] = Transform21;

Group19.children = new MFNode();

Group19.children[0] = Transform20;

children[2] = Group19;

Script Script306 = createNode("Script");
Script306.DEF = "finWarpScript";
field field307 = createNode("field");
field307.accessType = "inputOnly";
field307.type = "SFRotation";
field307.name = "set_rotationLeft";
Script306.field = new MFNode();

Script306.field[0] = field307;

field field308 = createNode("field");
field308.accessType = "inputOnly";
field308.type = "SFRotation";
field308.name = "set_rotationRight";
Script306.field[1] = field308;

field field309 = createNode("field");
field309.accessType = "outputOnly";
field309.type = "SFBool";
field309.name = "finWarpLeft";
Script306.field[2] = field309;

field field310 = createNode("field");
field310.accessType = "outputOnly";
field310.type = "SFBool";
field310.name = "finWarpRight";
Script306.field[3] = field310;


Script306.setSourceCode(`ecmascript:\n"+
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
children[3] = Script306;

ProximitySensor ProximitySensor311 = createNode("ProximitySensor");
ProximitySensor311.DEF = "FinTriggerProximitySensor";
ProximitySensor311.size = new SFVec3f(new float[15,15,15]);
children[4] = ProximitySensor311;

TimeSensor TimeSensor312 = createNode("TimeSensor");
TimeSensor312.DEF = "FinClock";
TimeSensor312.cycleInterval = 7;
TimeSensor312.loop = True;
children[5] = TimeSensor312;

Group Group313 = createNode("Group");
Script Script314 = createNode("Script");
Script314.DEF = "FinScript";
field field315 = createNode("field");
field315.accessType = "outputOnly";
field315.type = "MFVec3f";
field315.name = "keyValueRight";
Script314.field = new MFNode();

Script314.field[0] = field315;

field field316 = createNode("field");
field316.accessType = "outputOnly";
field316.type = "MFVec3f";
field316.name = "keyValueLeft";
Script314.field[1] = field316;

field field317 = createNode("field");
field317.accessType = "inputOnly";
field317.type = "SFFloat";
field317.name = "set_fraction";
Script314.field[2] = field317;

field field318 = createNode("field");
field318.accessType = "inputOnly";
field318.type = "SFBool";
field318.name = "finL";
Script314.field[3] = field318;

field field319 = createNode("field");
field319.accessType = "inputOnly";
field319.type = "SFBool";
field319.name = "finR";
Script314.field[4] = field319;

field field320 = createNode("field");
field320.accessType = "initializeOnly";
field320.type = "SFInt32";
field320.name = "finWarpL";
Script314.field[5] = field320;

field field321 = createNode("field");
field321.accessType = "initializeOnly";
field321.type = "SFInt32";
field321.name = "finWarpR";
Script314.field[6] = field321;

field field322 = createNode("field");
field322.accessType = "initializeOnly";
field322.type = "SFBool";
field322.name = "traceEnabled";
Script314.field[7] = field322;


Script314.setSourceCode(`ecmascript:\n"+
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
"	if (traceEnabled) Browser.println ('[Fin Move]' + outputString);\n"+
"}`)
Group313.children = new MFNode();

Group313.children[0] = Script314;

children[6] = Group313;

NavigationInfo NavigationInfo323 = createNode("NavigationInfo");
NavigationInfo323.avatarSize = new MFFloat(new float[0.15,1.53,0.75]);
NavigationInfo323.speed = 0.5;
children[7] = NavigationInfo323;

WorldInfo WorldInfo324 = createNode("WorldInfo");
WorldInfo324.title = "Nancy - an HAnim compliant avatar by 3Name3D";
WorldInfo324.info = new MFString(new java.lang.String["Copyright (c) 1997. 3Name3D / Yglesias Wallock Divekar, Inc."]);
children[8] = WorldInfo324;

Group Group325 = createNode("Group");
Group325.DEF = "Animations";
Group Group326 = createNode("Group");
Group326.DEF = "Dive_Animation";
OrientationInterpolator OrientationInterpolator327 = createNode("OrientationInterpolator");
OrientationInterpolator327.DEF = "r_ankle_RotationInterpolator_BasicDive";
OrientationInterpolator327.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator327.keyValue = new MFRotation(new float[1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.86001]);
Group326.children = new MFNode();

Group326.children[0] = OrientationInterpolator327;

OrientationInterpolator OrientationInterpolator328 = createNode("OrientationInterpolator");
OrientationInterpolator328.DEF = "r_knee_RotationInterpolator_BasicDive";
OrientationInterpolator328.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.5,0.6667,0.9167,1]);
OrientationInterpolator328.keyValue = new MFRotation(new float[1,0,0,0.8573,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.8573]);
Group326.children[1] = OrientationInterpolator328;

OrientationInterpolator OrientationInterpolator329 = createNode("OrientationInterpolator");
OrientationInterpolator329.DEF = "r_hip_RotationInterpolator_BasicDive";
OrientationInterpolator329.key = new MFFloat(new float[0,0.125,0.2083,0.2917,0.5,0.7917,0.9167,1]);
OrientationInterpolator329.keyValue = new MFRotation(new float[-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9131,-0.06243,-0.403,0.3361,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481]);
Group326.children[2] = OrientationInterpolator329;

OrientationInterpolator OrientationInterpolator330 = createNode("OrientationInterpolator");
OrientationInterpolator330.DEF = "l_ankle_RotationInterpolator_BasicDive";
OrientationInterpolator330.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator330.keyValue = new MFRotation(new float[1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001]);
Group326.children[3] = OrientationInterpolator330;

OrientationInterpolator OrientationInterpolator331 = createNode("OrientationInterpolator");
OrientationInterpolator331.DEF = "l_knee_RotationInterpolator_BasicDive";
OrientationInterpolator331.key = new MFFloat(new float[0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator331.keyValue = new MFRotation(new float[1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226]);
Group326.children[4] = OrientationInterpolator331;

OrientationInterpolator OrientationInterpolator332 = createNode("OrientationInterpolator");
OrientationInterpolator332.DEF = "l_hip_RotationInterpolator_BasicDive";
OrientationInterpolator332.key = new MFFloat(new float[0,0.25,0.375,0.6667,0.7917,0.9167,1]);
OrientationInterpolator332.keyValue = new MFRotation(new float[-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865]);
Group326.children[5] = OrientationInterpolator332;

OrientationInterpolator OrientationInterpolator333 = createNode("OrientationInterpolator");
OrientationInterpolator333.DEF = "lower_body_RotationInterpolator_BasicDive";
OrientationInterpolator333.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator333.keyValue = new MFRotation(new float[0,0,-1,0.1056,0,0,1,0.09018,0,0,-1,0.1056]);
Group326.children[6] = OrientationInterpolator333;

OrientationInterpolator OrientationInterpolator334 = createNode("OrientationInterpolator");
OrientationInterpolator334.DEF = "r_wrist_RotationInterpolator_BasicDive";
OrientationInterpolator334.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator334.keyValue = new MFRotation(new float[0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0]);
Group326.children[7] = OrientationInterpolator334;

OrientationInterpolator OrientationInterpolator335 = createNode("OrientationInterpolator");
OrientationInterpolator335.DEF = "r_elbow_RotationInterpolator_BasicDive";
OrientationInterpolator335.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator335.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0]);
Group326.children[8] = OrientationInterpolator335;

OrientationInterpolator OrientationInterpolator336 = createNode("OrientationInterpolator");
OrientationInterpolator336.DEF = "r_shoulder_RotationInterpolator_BasicDive";
OrientationInterpolator336.key = new MFFloat(new float[0,0.45,0.64,0.76,0.88,1]);
OrientationInterpolator336.keyValue = new MFRotation(new float[0,0,1,0,0.9992,0.02042,0.03558,7.2,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0]);
Group326.children[9] = OrientationInterpolator336;

OrientationInterpolator OrientationInterpolator337 = createNode("OrientationInterpolator");
OrientationInterpolator337.DEF = "l_wrist_RotationInterpolator_BasicDive";
OrientationInterpolator337.key = new MFFloat(new float[0,0.32,0.64,0.88,1]);
OrientationInterpolator337.keyValue = new MFRotation(new float[0,0,1,0,0.067,0.98,-0.128,4.15,0.067,0.98,-0.128,4.15,0.067,0.98,-0.128,4.15,0,0,1,0]);
Group326.children[10] = OrientationInterpolator337;

OrientationInterpolator OrientationInterpolator338 = createNode("OrientationInterpolator");
OrientationInterpolator338.DEF = "l_elbow_RotationInterpolator_BasicDive";
OrientationInterpolator338.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator338.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.1229,-1,0,0,0.1229,-1,0,0,0.5976,-1,0,0,0.3917,0,0,1,0]);
Group326.children[11] = OrientationInterpolator338;

OrientationInterpolator OrientationInterpolator339 = createNode("OrientationInterpolator");
OrientationInterpolator339.DEF = "l_shoulder_RotationInterpolator_BasicDive";
OrientationInterpolator339.key = new MFFloat(new float[0,0.25,0.375,0.6667,0.7917,0.9167,1]);
OrientationInterpolator339.keyValue = new MFRotation(new float[0,0,1,0.1,0,0,1,0.2,0,0,1,0.2,0.86,0.25,0.42,0.5,0.86,0.25,0.42,0.8,0.86,0.25,0.42,0.4,0.86,0.25,0.42,0.2]);
Group326.children[12] = OrientationInterpolator339;

OrientationInterpolator OrientationInterpolator340 = createNode("OrientationInterpolator");
OrientationInterpolator340.DEF = "head_RotationInterpolator_BasicDive";
OrientationInterpolator340.key = new MFFloat(new float[0,0.28,0.3,0.32,0.4,0.45,0.6,0.65,0.7,0.75,0.85,0.9,0.95,1]);
OrientationInterpolator340.keyValue = new MFRotation(new float[-1,0,0,1,-1,0,0,1,-1,0,0,0.999,-1,0,0,0.99,-1,0,0,0.99,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,1]);
Group326.children[13] = OrientationInterpolator340;

OrientationInterpolator OrientationInterpolator341 = createNode("OrientationInterpolator");
OrientationInterpolator341.DEF = "neck_RotationInterpolator_BasicDive";
OrientationInterpolator341.key = new MFFloat(new float[0,1]);
OrientationInterpolator341.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group326.children[14] = OrientationInterpolator341;

OrientationInterpolator OrientationInterpolator342 = createNode("OrientationInterpolator");
OrientationInterpolator342.DEF = "upper_body_RotationInterpolator_BasicDive";
OrientationInterpolator342.key = new MFFloat(new float[0,0.2083,0.375,0.75,0.8333,1]);
OrientationInterpolator342.keyValue = new MFRotation(new float[0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826]);
Group326.children[15] = OrientationInterpolator342;

OrientationInterpolator OrientationInterpolator343 = createNode("OrientationInterpolator");
OrientationInterpolator343.DEF = "whole_body_RotationInterpolator_BasicDive";
OrientationInterpolator343.key = new MFFloat(new float[0,1]);
OrientationInterpolator343.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group326.children[16] = OrientationInterpolator343;

PositionInterpolator PositionInterpolator344 = createNode("PositionInterpolator");
PositionInterpolator344.DEF = "whole_body_TranslationInterpolator_BasicDive";
PositionInterpolator344.key = new MFFloat(new float[0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]);
PositionInterpolator344.keyValue = new MFVec3f(new float[0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0]);
Group326.children[17] = PositionInterpolator344;

TimeSensor TimeSensor345 = createNode("TimeSensor");
TimeSensor345.DEF = "Dive_Time";
TimeSensor345.cycleInterval = 7;
TimeSensor345.loop = True;
TimeSensor345.startTime = -1;
Group326.children[18] = TimeSensor345;

ProximitySensor ProximitySensor346 = createNode("ProximitySensor");
ProximitySensor346.DEF = "TriggerProximitySensor";
ProximitySensor346.size = new SFVec3f(new float[50,50,50]);
Group326.children[19] = ProximitySensor346;

Group325.children = new MFNode();

Group325.children[0] = Group326;

children[9] = Group325;

ROUTE ROUTE347 = createNode("ROUTE");
ROUTE347.fromNode = "finWarpScript";
ROUTE347.fromField = "finWarpLeft";
ROUTE347.toNode = "FinScript";
ROUTE347.toField = "finL";
children[10] = ROUTE347;

ROUTE ROUTE348 = createNode("ROUTE");
ROUTE348.fromNode = "finWarpScript";
ROUTE348.fromField = "finWarpRight";
ROUTE348.toNode = "FinScript";
ROUTE348.toField = "finR";
children[11] = ROUTE348;

ROUTE ROUTE349 = createNode("ROUTE");
ROUTE349.fromNode = "FinTriggerProximitySensor";
ROUTE349.fromField = "isActive";
ROUTE349.toNode = "FinClock";
ROUTE349.toField = "set_enabled";
children[12] = ROUTE349;

ROUTE ROUTE350 = createNode("ROUTE");
ROUTE350.fromNode = "FinClock";
ROUTE350.fromField = "fraction_changed";
ROUTE350.toNode = "FinScript";
ROUTE350.toField = "set_fraction";
children[13] = ROUTE350;

ROUTE ROUTE351 = createNode("ROUTE");
ROUTE351.fromNode = "FinScript";
ROUTE351.fromField = "keyValueRight";
ROUTE351.toNode = "FinExtrusionRight";
ROUTE351.toField = "set_spine";
children[14] = ROUTE351;

ROUTE ROUTE352 = createNode("ROUTE");
ROUTE352.fromNode = "FinScript";
ROUTE352.fromField = "keyValueLeft";
ROUTE352.toNode = "FinExtrusionLeft";
ROUTE352.toField = "set_spine";
children[15] = ROUTE352;

ROUTE ROUTE353 = createNode("ROUTE");
ROUTE353.fromNode = "TriggerProximitySensor";
ROUTE353.fromField = "enterTime";
ROUTE353.toNode = "Dive_Time";
ROUTE353.toField = "set_startTime";
children[16] = ROUTE353;

ROUTE ROUTE354 = createNode("ROUTE");
ROUTE354.fromNode = "Dive_Time";
ROUTE354.fromField = "fraction_changed";
ROUTE354.toNode = "r_ankle_RotationInterpolator_BasicDive";
ROUTE354.toField = "set_fraction";
children[17] = ROUTE354;

ROUTE ROUTE355 = createNode("ROUTE");
ROUTE355.fromNode = "Dive_Time";
ROUTE355.fromField = "fraction_changed";
ROUTE355.toNode = "r_knee_RotationInterpolator_BasicDive";
ROUTE355.toField = "set_fraction";
children[18] = ROUTE355;

ROUTE ROUTE356 = createNode("ROUTE");
ROUTE356.fromNode = "Dive_Time";
ROUTE356.fromField = "fraction_changed";
ROUTE356.toNode = "r_hip_RotationInterpolator_BasicDive";
ROUTE356.toField = "set_fraction";
children[19] = ROUTE356;

ROUTE ROUTE357 = createNode("ROUTE");
ROUTE357.fromNode = "Dive_Time";
ROUTE357.fromField = "fraction_changed";
ROUTE357.toNode = "l_ankle_RotationInterpolator_BasicDive";
ROUTE357.toField = "set_fraction";
children[20] = ROUTE357;

ROUTE ROUTE358 = createNode("ROUTE");
ROUTE358.fromNode = "Dive_Time";
ROUTE358.fromField = "fraction_changed";
ROUTE358.toNode = "l_knee_RotationInterpolator_BasicDive";
ROUTE358.toField = "set_fraction";
children[21] = ROUTE358;

ROUTE ROUTE359 = createNode("ROUTE");
ROUTE359.fromNode = "Dive_Time";
ROUTE359.fromField = "fraction_changed";
ROUTE359.toNode = "l_hip_RotationInterpolator_BasicDive";
ROUTE359.toField = "set_fraction";
children[22] = ROUTE359;

ROUTE ROUTE360 = createNode("ROUTE");
ROUTE360.fromNode = "Dive_Time";
ROUTE360.fromField = "fraction_changed";
ROUTE360.toNode = "lower_body_RotationInterpolator_BasicDive";
ROUTE360.toField = "set_fraction";
children[23] = ROUTE360;

ROUTE ROUTE361 = createNode("ROUTE");
ROUTE361.fromNode = "Dive_Time";
ROUTE361.fromField = "fraction_changed";
ROUTE361.toNode = "head_RotationInterpolator_BasicDive";
ROUTE361.toField = "set_fraction";
children[24] = ROUTE361;

ROUTE ROUTE362 = createNode("ROUTE");
ROUTE362.fromNode = "Dive_Time";
ROUTE362.fromField = "fraction_changed";
ROUTE362.toNode = "neck_RotationInterpolator_BasicDive";
ROUTE362.toField = "set_fraction";
children[25] = ROUTE362;

ROUTE ROUTE363 = createNode("ROUTE");
ROUTE363.fromNode = "Dive_Time";
ROUTE363.fromField = "fraction_changed";
ROUTE363.toNode = "upper_body_RotationInterpolator_BasicDive";
ROUTE363.toField = "set_fraction";
children[26] = ROUTE363;

ROUTE ROUTE364 = createNode("ROUTE");
ROUTE364.fromNode = "Dive_Time";
ROUTE364.fromField = "fraction_changed";
ROUTE364.toNode = "whole_body_RotationInterpolator_BasicDive";
ROUTE364.toField = "set_fraction";
children[27] = ROUTE364;

ROUTE ROUTE365 = createNode("ROUTE");
ROUTE365.fromNode = "Dive_Time";
ROUTE365.fromField = "fraction_changed";
ROUTE365.toNode = "whole_body_TranslationInterpolator_BasicDive";
ROUTE365.toField = "set_fraction";
children[28] = ROUTE365;

ROUTE ROUTE366 = createNode("ROUTE");
ROUTE366.fromNode = "r_ankle_RotationInterpolator_BasicDive";
ROUTE366.fromField = "value_changed";
ROUTE366.toNode = "hanim_r_ankle";
ROUTE366.toField = "set_rotation";
children[29] = ROUTE366;

ROUTE ROUTE367 = createNode("ROUTE");
ROUTE367.fromNode = "r_knee_RotationInterpolator_BasicDive";
ROUTE367.fromField = "value_changed";
ROUTE367.toNode = "hanim_r_knee";
ROUTE367.toField = "set_rotation";
children[30] = ROUTE367;

ROUTE ROUTE368 = createNode("ROUTE");
ROUTE368.fromNode = "r_hip_RotationInterpolator_BasicDive";
ROUTE368.fromField = "value_changed";
ROUTE368.toNode = "hanim_r_hip";
ROUTE368.toField = "set_rotation";
children[31] = ROUTE368;

ROUTE ROUTE369 = createNode("ROUTE");
ROUTE369.fromNode = "l_ankle_RotationInterpolator_BasicDive";
ROUTE369.fromField = "value_changed";
ROUTE369.toNode = "hanim_l_ankle";
ROUTE369.toField = "set_rotation";
children[32] = ROUTE369;

ROUTE ROUTE370 = createNode("ROUTE");
ROUTE370.fromNode = "l_knee_RotationInterpolator_BasicDive";
ROUTE370.fromField = "value_changed";
ROUTE370.toNode = "hanim_l_knee";
ROUTE370.toField = "set_rotation";
children[33] = ROUTE370;

ROUTE ROUTE371 = createNode("ROUTE");
ROUTE371.fromNode = "l_hip_RotationInterpolator_BasicDive";
ROUTE371.fromField = "value_changed";
ROUTE371.toNode = "finWarpScript";
ROUTE371.toField = "set_rotationLeft";
children[34] = ROUTE371;

ROUTE ROUTE372 = createNode("ROUTE");
ROUTE372.fromNode = "l_hip_RotationInterpolator_BasicDive";
ROUTE372.fromField = "value_changed";
ROUTE372.toNode = "finWarpScript";
ROUTE372.toField = "set_rotationRight";
children[35] = ROUTE372;

ROUTE ROUTE373 = createNode("ROUTE");
ROUTE373.fromNode = "l_hip_RotationInterpolator_BasicDive";
ROUTE373.fromField = "value_changed";
ROUTE373.toNode = "hanim_l_hip";
ROUTE373.toField = "set_rotation";
children[36] = ROUTE373;

ROUTE ROUTE374 = createNode("ROUTE");
ROUTE374.fromNode = "lower_body_RotationInterpolator_BasicDive";
ROUTE374.fromField = "value_changed";
ROUTE374.toNode = "hanim_sacroiliac";
ROUTE374.toField = "set_rotation";
children[37] = ROUTE374;

ROUTE ROUTE375 = createNode("ROUTE");
ROUTE375.fromNode = "head_RotationInterpolator_BasicDive";
ROUTE375.fromField = "value_changed";
ROUTE375.toNode = "hanim_skullbase";
ROUTE375.toField = "set_rotation";
children[38] = ROUTE375;

ROUTE ROUTE376 = createNode("ROUTE");
ROUTE376.fromNode = "neck_RotationInterpolator_BasicDive";
ROUTE376.fromField = "value_changed";
ROUTE376.toNode = "hanim_vc4";
ROUTE376.toField = "set_rotation";
children[39] = ROUTE376;

ROUTE ROUTE377 = createNode("ROUTE");
ROUTE377.fromNode = "upper_body_RotationInterpolator_BasicDive";
ROUTE377.fromField = "value_changed";
ROUTE377.toNode = "hanim_vl1";
ROUTE377.toField = "set_rotation";
children[40] = ROUTE377;

ROUTE ROUTE378 = createNode("ROUTE");
ROUTE378.fromNode = "whole_body_RotationInterpolator_BasicDive";
ROUTE378.fromField = "value_changed";
ROUTE378.toNode = "hanim_humanoid_root";
ROUTE378.toField = "set_rotation";
children[41] = ROUTE378;

ROUTE ROUTE379 = createNode("ROUTE");
ROUTE379.fromNode = "whole_body_TranslationInterpolator_BasicDive";
ROUTE379.fromField = "value_changed";
ROUTE379.toNode = "hanim_humanoid_root";
ROUTE379.toField = "set_translation";
children[42] = ROUTE379;

ROUTE ROUTE380 = createNode("ROUTE");
ROUTE380.fromNode = "Dive_Time";
ROUTE380.fromField = "fraction_changed";
ROUTE380.toNode = "r_wrist_RotationInterpolator_BasicDive";
ROUTE380.toField = "set_fraction";
children[43] = ROUTE380;

ROUTE ROUTE381 = createNode("ROUTE");
ROUTE381.fromNode = "Dive_Time";
ROUTE381.fromField = "fraction_changed";
ROUTE381.toNode = "r_elbow_RotationInterpolator_BasicDive";
ROUTE381.toField = "set_fraction";
children[44] = ROUTE381;

ROUTE ROUTE382 = createNode("ROUTE");
ROUTE382.fromNode = "Dive_Time";
ROUTE382.fromField = "fraction_changed";
ROUTE382.toNode = "r_shoulder_RotationInterpolator_BasicDive";
ROUTE382.toField = "set_fraction";
children[45] = ROUTE382;

ROUTE ROUTE383 = createNode("ROUTE");
ROUTE383.fromNode = "Dive_Time";
ROUTE383.fromField = "fraction_changed";
ROUTE383.toNode = "l_wrist_RotationInterpolator_BasicDive";
ROUTE383.toField = "set_fraction";
children[46] = ROUTE383;

ROUTE ROUTE384 = createNode("ROUTE");
ROUTE384.fromNode = "Dive_Time";
ROUTE384.fromField = "fraction_changed";
ROUTE384.toNode = "l_elbow_RotationInterpolator_BasicDive";
ROUTE384.toField = "set_fraction";
children[47] = ROUTE384;

ROUTE ROUTE385 = createNode("ROUTE");
ROUTE385.fromNode = "Dive_Time";
ROUTE385.fromField = "fraction_changed";
ROUTE385.toNode = "l_shoulder_RotationInterpolator_BasicDive";
ROUTE385.toField = "set_fraction";
children[48] = ROUTE385;

ROUTE ROUTE386 = createNode("ROUTE");
ROUTE386.fromNode = "r_wrist_RotationInterpolator_BasicDive";
ROUTE386.fromField = "value_changed";
ROUTE386.toNode = "hanim_r_wrist";
ROUTE386.toField = "set_rotation";
children[49] = ROUTE386;

ROUTE ROUTE387 = createNode("ROUTE");
ROUTE387.fromNode = "r_elbow_RotationInterpolator_BasicDive";
ROUTE387.fromField = "value_changed";
ROUTE387.toNode = "hanim_r_elbow";
ROUTE387.toField = "set_rotation";
children[50] = ROUTE387;

ROUTE ROUTE388 = createNode("ROUTE");
ROUTE388.fromNode = "r_shoulder_RotationInterpolator_BasicDive";
ROUTE388.fromField = "value_changed";
ROUTE388.toNode = "hanim_r_shoulder";
ROUTE388.toField = "set_rotation";
children[51] = ROUTE388;

ROUTE ROUTE389 = createNode("ROUTE");
ROUTE389.fromNode = "l_wrist_RotationInterpolator_BasicDive";
ROUTE389.fromField = "value_changed";
ROUTE389.toNode = "hanim_l_wrist";
ROUTE389.toField = "set_rotation";
children[52] = ROUTE389;

ROUTE ROUTE390 = createNode("ROUTE");
ROUTE390.fromNode = "l_elbow_RotationInterpolator_BasicDive";
ROUTE390.fromField = "value_changed";
ROUTE390.toNode = "hanim_l_elbow";
ROUTE390.toField = "set_rotation";
children[53] = ROUTE390;

ROUTE ROUTE391 = createNode("ROUTE");
ROUTE391.fromNode = "l_shoulder_RotationInterpolator_BasicDive";
ROUTE391.fromField = "value_changed";
ROUTE391.toNode = "hanim_l_shoulder";
ROUTE391.toField = "set_rotation";
children[54] = ROUTE391;

}
