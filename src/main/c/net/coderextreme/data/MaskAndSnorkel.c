#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "MaskAndSnorkel.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "Diving mask and snorkel tube.";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Etsuko Lippi";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "created";
meta5.content = "January 24, 2001";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "23 May 2020";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "identifier";
meta7.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/MaskAndSnorkel.x3d";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "generator";
meta8.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[6] = meta8;

head = head1;

WorldInfo WorldInfo10 = createNode("WorldInfo");
WorldInfo10.title = "MaskAndSnorkel.x3d";
children = new MFNode();

children[0] = WorldInfo10;

Background Background11 = createNode("Background");
Background11.skyColor = new MFColor(new float[0,0,0.9]);
children[1] = Background11;

Transform Transform12 = createNode("Transform");
Transform12.DEF = "maskAndSnorkel";
Transform Transform13 = createNode("Transform");
Shape Shape14 = createNode("Shape");
Shape14.DEF = "maskFrame";
Appearance Appearance15 = createNode("Appearance");
Material Material16 = createNode("Material");
Material16.DEF = "frameColor";
Material16.diffuseColor = new SFColor(new float[0,0,0]);
Appearance15.material = Material16;

Shape14.appearance = Appearance15;

IndexedFaceSet IndexedFaceSet17 = createNode("IndexedFaceSet");
IndexedFaceSet17.solid = False;
IndexedFaceSet17.creaseAngle = 1.45;
IndexedFaceSet17.coordIndex = new MFInt32(new int[0,1,13,12,0,-1,1,2,14,13,1,-1,2,3,15,14,2,-1,3,4,16,15,3,-1,4,5,17,16,4,-1,5,6,18,17,5,-1,18,6,25,19,0,12,18,-1,0,19,20,11,0,-1,10,11,20,21,10,-1,9,10,21,22,9,-1,8,9,22,23,8,-1,23,24,7,8,23,-1,6,7,24,25,6,-1]);
Coordinate Coordinate18 = createNode("Coordinate");
Coordinate18.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0]);
IndexedFaceSet17.coord = Coordinate18;

Shape14.geometry = IndexedFaceSet17;

Transform13.child = new undefined();

Transform13.child[0] = Shape14;

Transform12.children = new MFNode();

Transform12.children[0] = Transform13;

Transform Transform19 = createNode("Transform");
Transform19.DEF = "snorkelHoldRing";
Transform19.translation = new SFVec3f(new float[0.075,0.075,-0.02]);
Shape Shape20 = createNode("Shape");
Appearance Appearance21 = createNode("Appearance");
Material Material22 = createNode("Material");
Material22.USE = "frameColor";
Appearance21.material = Material22;

Shape20.appearance = Appearance21;

Cylinder Cylinder23 = createNode("Cylinder");
Cylinder23.height = 0.003;
Cylinder23.radius = 0.015;
Shape20.geometry = Cylinder23;

Transform19.child = new undefined();

Transform19.child[0] = Shape20;

Transform12.children[1] = Transform19;

Group Group24 = createNode("Group");
Group24.DEF = "snorkel";
Transform Transform25 = createNode("Transform");
Transform25.translation = new SFVec3f(new float[0,-0.02,0]);
Transform Transform26 = createNode("Transform");
Transform26.translation = new SFVec3f(new float[0.035,-0.07,-0.02]);
Transform26.scale = new SFVec3f(new float[0.9,0.9,0.9]);
Shape Shape27 = createNode("Shape");
Appearance Appearance28 = createNode("Appearance");
Material Material29 = createNode("Material");
Material29.DEF = "snorkelTube";
Material29.diffuseColor = new SFColor(new float[0.678,1,0.184]);
Material29.transparency = 0.4;
Appearance28.material = Material29;

Shape27.appearance = Appearance28;

Extrusion Extrusion30 = createNode("Extrusion");
Extrusion30.crossSection = new MFVec2f(new float[0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013]);
Extrusion30.spine = new MFVec3f(new float[-0.01,-0.04,0,0,0,0,0.03,0.05,0,0.05,0.2,0,0.03,0.4,0.03]);
Shape27.geometry = Extrusion30;

Transform26.child = new undefined();

Transform26.child[0] = Shape27;

Transform25.children = new MFNode();

Transform25.children[0] = Transform26;

Transform Transform31 = createNode("Transform");
Transform31.translation = new SFVec3f(new float[0.01,-0.04,-0.02]);
Transform31.rotation = new SFRotation(new float[0,0,1,1.57]);
Transform31.scale = new SFVec3f(new float[0.9,0.9,0.9]);
Shape Shape32 = createNode("Shape");
Appearance Appearance33 = createNode("Appearance");
Material Material34 = createNode("Material");
Material34.DEF = "Mouthpiece";
Material34.diffuseColor = new SFColor(new float[0.678,1,0.8]);
Material34.transparency = 0.4;
Appearance33.material = Material34;

Shape32.appearance = Appearance33;

Extrusion Extrusion35 = createNode("Extrusion");
Extrusion35.crossSection = new MFVec2f(new float[0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013]);
Extrusion35.spine = new MFVec3f(new float[-0.01,-0.03,0,0,0,0,0.02,0.01,0]);
Shape32.geometry = Extrusion35;

Transform31.child = new undefined();

Transform31.child[0] = Shape32;

Transform25.children[1] = Transform31;

Transform Transform36 = createNode("Transform");
Transform36.translation = new SFVec3f(new float[0.005,-0.01,-0.02]);
Transform36.rotation = new SFRotation(new float[0,0,1,-0.85]);
Transform36.scale = new SFVec3f(new float[0.9,0.9,0.9]);
Shape Shape37 = createNode("Shape");
Appearance Appearance38 = createNode("Appearance");
Material Material39 = createNode("Material");
Material39.USE = "Mouthpiece";
Appearance38.material = Material39;

Shape37.appearance = Appearance38;

Extrusion Extrusion40 = createNode("Extrusion");
Extrusion40.crossSection = new MFVec2f(new float[0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013]);
Extrusion40.spine = new MFVec3f(new float[-0.02,-0.03,0,-0.01,-0.03,0,0,-0.0175,0,0,-0.0135,0,-0.01,0,0,-0.02,0,0]);
Shape37.geometry = Extrusion40;

Transform36.child = new undefined();

Transform36.child[0] = Shape37;

Transform25.children[2] = Transform36;

Group24.children = new MFNode();

Group24.children[0] = Transform25;

Transform12.children[2] = Group24;

Transform Transform41 = createNode("Transform");
Shape Shape42 = createNode("Shape");
Shape42.DEF = "maskLensR";
Appearance Appearance43 = createNode("Appearance");
Material Material44 = createNode("Material");
Material44.DEF = "plastic";
Material44.diffuseColor = new SFColor(new float[0.941,0.973,1]);
Material44.transparency = 0.8;
Appearance43.material = Material44;

Shape42.appearance = Appearance43;

IndexedFaceSet IndexedFaceSet45 = createNode("IndexedFaceSet");
IndexedFaceSet45.solid = False;
IndexedFaceSet45.creaseAngle = 1.45;
IndexedFaceSet45.coordIndex = new MFInt32(new int[12,13,14,15,16,17,18,12,-1]);
Coordinate Coordinate46 = createNode("Coordinate");
Coordinate46.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0]);
IndexedFaceSet45.coord = Coordinate46;

Shape42.geometry = IndexedFaceSet45;

Transform41.child = new undefined();

Transform41.child[0] = Shape42;

Transform12.children[3] = Transform41;

Transform Transform47 = createNode("Transform");
Shape Shape48 = createNode("Shape");
Shape48.DEF = "maskLensL";
Appearance Appearance49 = createNode("Appearance");
Material Material50 = createNode("Material");
Material50.USE = "plastic";
Appearance49.material = Material50;

Shape48.appearance = Appearance49;

IndexedFaceSet IndexedFaceSet51 = createNode("IndexedFaceSet");
IndexedFaceSet51.solid = False;
IndexedFaceSet51.creaseAngle = 1.45;
IndexedFaceSet51.coordIndex = new MFInt32(new int[19,20,21,22,23,24,25,19,-1]);
Coordinate Coordinate52 = createNode("Coordinate");
Coordinate52.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0]);
IndexedFaceSet51.coord = Coordinate52;

Shape48.geometry = IndexedFaceSet51;

Transform47.child = new undefined();

Transform47.child[0] = Shape48;

Transform12.children[4] = Transform47;

Transform Transform53 = createNode("Transform");
Shape Shape54 = createNode("Shape");
Shape54.DEF = "nose";
Appearance Appearance55 = createNode("Appearance");
Material Material56 = createNode("Material");
Material56.DEF = "plasticFit";
Material56.diffuseColor = new SFColor(new float[0.678,1,0.184]);
Material56.transparency = 0.7;
Appearance55.material = Material56;

Shape54.appearance = Appearance55;

IndexedFaceSet IndexedFaceSet57 = createNode("IndexedFaceSet");
IndexedFaceSet57.solid = False;
IndexedFaceSet57.creaseAngle = 1.45;
IndexedFaceSet57.coordIndex = new MFInt32(new int[0,37,26,0,-1,0,36,26,0,-1,36,37,26,36,-1,0,1,37,0,-1,0,11,36,0,-1]);
Coordinate Coordinate58 = createNode("Coordinate");
Coordinate58.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.04,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02]);
IndexedFaceSet57.coord = Coordinate58;

Shape54.geometry = IndexedFaceSet57;

Transform53.child = new undefined();

Transform53.child[0] = Shape54;

Transform12.children[5] = Transform53;

Transform Transform59 = createNode("Transform");
Shape Shape60 = createNode("Shape");
Shape60.DEF = "faceFit";
Appearance Appearance61 = createNode("Appearance");
Material Material62 = createNode("Material");
Material62.USE = "plasticFit";
Appearance61.material = Material62;

Shape60.appearance = Appearance61;

IndexedFaceSet IndexedFaceSet63 = createNode("IndexedFaceSet");
IndexedFaceSet63.solid = False;
IndexedFaceSet63.creaseAngle = 1.45;
IndexedFaceSet63.coordIndex = new MFInt32(new int[1,2,27,37,1,-1,2,3,28,27,2,-1,3,4,29,28,3,-1,4,5,30,29,4,-1,5,6,31,30,5,-1,6,7,32,31,6,-1,7,8,33,32,7,-1,8,9,34,33,8,-1,9,10,35,34,9,-1,10,11,36,35,10,-1]);
Coordinate Coordinate64 = createNode("Coordinate");
Coordinate64.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.05,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02]);
IndexedFaceSet63.coord = Coordinate64;

Shape60.geometry = IndexedFaceSet63;

Transform59.child = new undefined();

Transform59.child[0] = Shape60;

Transform12.children[6] = Transform59;

Transform Transform65 = createNode("Transform");
Shape Shape66 = createNode("Shape");
Shape66.DEF = "belt";
Appearance Appearance67 = createNode("Appearance");
Material Material68 = createNode("Material");
Material68.USE = "plastic";
Appearance67.material = Material68;

Shape66.appearance = Appearance67;

IndexedFaceSet IndexedFaceSet69 = createNode("IndexedFaceSet");
IndexedFaceSet69.solid = False;
IndexedFaceSet69.creaseAngle = 1.45;
IndexedFaceSet69.coordIndex = new MFInt32(new int[3,4,39,38,3,-1,8,9,40,41,8,-1,38,39,42,43,38,-1,40,41,44,45,40,-1,42,43,47,46,42,-1,44,45,47,46,44,-1]);
Coordinate Coordinate70 = createNode("Coordinate");
Coordinate70.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.05,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02,0.075,0.06,-0.135,0.075,0.09,-0.135,-0.075,0.06,-0.135,-0.075,0.09,-0.135,0.06,0.09,-0.165,0.06,0.06,-0.165,-0.06,0.09,-0.165,-0.06,0.06,-0.165,0,0.09,-0.2,0,0.06,-0.175]);
IndexedFaceSet69.coord = Coordinate70;

Shape66.geometry = IndexedFaceSet69;

Transform65.child = new undefined();

Transform65.child[0] = Shape66;

Transform12.children[7] = Transform65;

children[2] = Transform12;

}
