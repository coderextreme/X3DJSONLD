#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "3.3";
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

meta meta9 = createNode("meta");
meta9.name = "license";
meta9.content = "../license.html";
head1.meta[7] = meta9;

head = head1;

WorldInfo WorldInfo11 = createNode("WorldInfo");
WorldInfo11.title = "MaskAndSnorkel.x3d";
children = new MFNode();

children[0] = WorldInfo11;

Background Background12 = createNode("Background");
Background12.skyColor = new MFColor(new float[0,0,0.9]);
children[1] = Background12;

Transform Transform13 = createNode("Transform");
Transform13.DEF = "maskAndSnorkel";
Transform Transform14 = createNode("Transform");
Shape Shape15 = createNode("Shape");
Shape15.DEF = "maskFrame";
Appearance Appearance16 = createNode("Appearance");
Material Material17 = createNode("Material");
Material17.DEF = "frameColor";
Material17.diffuseColor = new SFColor(new float[0,0,0]);
Appearance16.material = Material17;

Shape15.appearance = Appearance16;

IndexedFaceSet IndexedFaceSet18 = createNode("IndexedFaceSet");
IndexedFaceSet18.coordIndex = new MFInt32(new int[0,1,13,12,0,-1,1,2,14,13,1,-1,2,3,15,14,2,-1,3,4,16,15,3,-1,4,5,17,16,4,-1,5,6,18,17,5,-1,18,6,25,19,0,12,18,-1,0,19,20,11,0,-1,10,11,20,21,10,-1,9,10,21,22,9,-1,8,9,22,23,8,-1,23,24,7,8,23,-1,6,7,24,25,6,-1]);
IndexedFaceSet18.creaseAngle = 1.45;
IndexedFaceSet18.solid = False;
Coordinate Coordinate19 = createNode("Coordinate");
Coordinate19.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0]);
IndexedFaceSet18.coord = Coordinate19;

Shape15.geometry = IndexedFaceSet18;

Transform14.children = new MFNode();

Transform14.children[0] = Shape15;

Transform13.children = new MFNode();

Transform13.children[0] = Transform14;

Transform Transform20 = createNode("Transform");
Transform20.DEF = "snorkelHoldRing";
Transform20.translation = new SFVec3f(new float[0.075,0.075,-0.02]);
Shape Shape21 = createNode("Shape");
Appearance Appearance22 = createNode("Appearance");
Material Material23 = createNode("Material");
Material23.USE = "frameColor";
Appearance22.material = Material23;

Shape21.appearance = Appearance22;

Cylinder Cylinder24 = createNode("Cylinder");
Cylinder24.height = 0.003;
Cylinder24.radius = 0.015;
Shape21.geometry = Cylinder24;

Transform20.children = new MFNode();

Transform20.children[0] = Shape21;

Transform13.children[1] = Transform20;

Group Group25 = createNode("Group");
Group25.DEF = "snorkel";
Transform Transform26 = createNode("Transform");
Transform26.translation = new SFVec3f(new float[0,-0.02,0]);
Transform Transform27 = createNode("Transform");
Transform27.scale = new SFVec3f(new float[0.9,0.9,0.9]);
Transform27.translation = new SFVec3f(new float[0.035,-0.07,-0.02]);
Shape Shape28 = createNode("Shape");
Appearance Appearance29 = createNode("Appearance");
Material Material30 = createNode("Material");
Material30.DEF = "snorkelTube";
Material30.diffuseColor = new SFColor(new float[0.678,1,0.184]);
Material30.transparency = 0.4;
Appearance29.material = Material30;

Shape28.appearance = Appearance29;

Extrusion Extrusion31 = createNode("Extrusion");
Extrusion31.crossSection = new MFVec2f(new float[0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013]);
Extrusion31.spine = new MFVec3f(new float[-0.01,-0.04,0,0,0,0,0.03,0.05,0,0.05,0.2,0,0.03,0.4,0.03]);
Shape28.geometry = Extrusion31;

Transform27.children = new MFNode();

Transform27.children[0] = Shape28;

Transform26.children = new MFNode();

Transform26.children[0] = Transform27;

Transform Transform32 = createNode("Transform");
Transform32.rotation = new SFRotation(new float[0,0,1,1.57]);
Transform32.scale = new SFVec3f(new float[0.9,0.9,0.9]);
Transform32.translation = new SFVec3f(new float[0.01,-0.04,-0.02]);
Shape Shape33 = createNode("Shape");
Appearance Appearance34 = createNode("Appearance");
Material Material35 = createNode("Material");
Material35.DEF = "Mouthpiece";
Material35.diffuseColor = new SFColor(new float[0.678,1,0.8]);
Material35.transparency = 0.4;
Appearance34.material = Material35;

Shape33.appearance = Appearance34;

Extrusion Extrusion36 = createNode("Extrusion");
Extrusion36.crossSection = new MFVec2f(new float[0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013]);
Extrusion36.spine = new MFVec3f(new float[-0.01,-0.03,0,0,0,0,0.02,0.01,0]);
Shape33.geometry = Extrusion36;

Transform32.children = new MFNode();

Transform32.children[0] = Shape33;

Transform26.children[1] = Transform32;

Transform Transform37 = createNode("Transform");
Transform37.rotation = new SFRotation(new float[0,0,1,-0.85]);
Transform37.scale = new SFVec3f(new float[0.9,0.9,0.9]);
Transform37.translation = new SFVec3f(new float[0.005,-0.01,-0.02]);
Shape Shape38 = createNode("Shape");
Appearance Appearance39 = createNode("Appearance");
Material Material40 = createNode("Material");
Material40.USE = "Mouthpiece";
Appearance39.material = Material40;

Shape38.appearance = Appearance39;

Extrusion Extrusion41 = createNode("Extrusion");
Extrusion41.crossSection = new MFVec2f(new float[0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013]);
Extrusion41.spine = new MFVec3f(new float[-0.02,-0.03,0,-0.01,-0.03,0,0,-0.0175,0,0,-0.0135,0,-0.01,0,0,-0.02,0,0]);
Shape38.geometry = Extrusion41;

Transform37.children = new MFNode();

Transform37.children[0] = Shape38;

Transform26.children[2] = Transform37;

Group25.children = new MFNode();

Group25.children[0] = Transform26;

Transform13.children[2] = Group25;

Transform Transform42 = createNode("Transform");
Shape Shape43 = createNode("Shape");
Shape43.DEF = "maskLensR";
Appearance Appearance44 = createNode("Appearance");
Material Material45 = createNode("Material");
Material45.DEF = "plastic";
Material45.diffuseColor = new SFColor(new float[0.941,0.973,1]);
Material45.transparency = 0.8;
Appearance44.material = Material45;

Shape43.appearance = Appearance44;

IndexedFaceSet IndexedFaceSet46 = createNode("IndexedFaceSet");
IndexedFaceSet46.coordIndex = new MFInt32(new int[12,13,14,15,16,17,18,12,-1]);
IndexedFaceSet46.creaseAngle = 1.45;
IndexedFaceSet46.solid = False;
Coordinate Coordinate47 = createNode("Coordinate");
Coordinate47.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0]);
IndexedFaceSet46.coord = Coordinate47;

Shape43.geometry = IndexedFaceSet46;

Transform42.children = new MFNode();

Transform42.children[0] = Shape43;

Transform13.children[3] = Transform42;

Transform Transform48 = createNode("Transform");
Shape Shape49 = createNode("Shape");
Shape49.DEF = "maskLensL";
Appearance Appearance50 = createNode("Appearance");
Material Material51 = createNode("Material");
Material51.USE = "plastic";
Appearance50.material = Material51;

Shape49.appearance = Appearance50;

IndexedFaceSet IndexedFaceSet52 = createNode("IndexedFaceSet");
IndexedFaceSet52.coordIndex = new MFInt32(new int[19,20,21,22,23,24,25,19,-1]);
IndexedFaceSet52.creaseAngle = 1.45;
IndexedFaceSet52.solid = False;
Coordinate Coordinate53 = createNode("Coordinate");
Coordinate53.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0]);
IndexedFaceSet52.coord = Coordinate53;

Shape49.geometry = IndexedFaceSet52;

Transform48.children = new MFNode();

Transform48.children[0] = Shape49;

Transform13.children[4] = Transform48;

Transform Transform54 = createNode("Transform");
Shape Shape55 = createNode("Shape");
Shape55.DEF = "nose";
Appearance Appearance56 = createNode("Appearance");
Material Material57 = createNode("Material");
Material57.DEF = "plasticFit";
Material57.diffuseColor = new SFColor(new float[0.678,1,0.184]);
Material57.transparency = 0.7;
Appearance56.material = Material57;

Shape55.appearance = Appearance56;

IndexedFaceSet IndexedFaceSet58 = createNode("IndexedFaceSet");
IndexedFaceSet58.coordIndex = new MFInt32(new int[0,37,26,0,-1,0,36,26,0,-1,36,37,26,36,-1,0,1,37,0,-1,0,11,36,0,-1]);
IndexedFaceSet58.creaseAngle = 1.45;
IndexedFaceSet58.solid = False;
Coordinate Coordinate59 = createNode("Coordinate");
Coordinate59.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.04,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02]);
IndexedFaceSet58.coord = Coordinate59;

Shape55.geometry = IndexedFaceSet58;

Transform54.children = new MFNode();

Transform54.children[0] = Shape55;

Transform13.children[5] = Transform54;

Transform Transform60 = createNode("Transform");
Shape Shape61 = createNode("Shape");
Shape61.DEF = "faceFit";
Appearance Appearance62 = createNode("Appearance");
Material Material63 = createNode("Material");
Material63.USE = "plasticFit";
Appearance62.material = Material63;

Shape61.appearance = Appearance62;

IndexedFaceSet IndexedFaceSet64 = createNode("IndexedFaceSet");
IndexedFaceSet64.coordIndex = new MFInt32(new int[1,2,27,37,1,-1,2,3,28,27,2,-1,3,4,29,28,3,-1,4,5,30,29,4,-1,5,6,31,30,5,-1,6,7,32,31,6,-1,7,8,33,32,7,-1,8,9,34,33,8,-1,9,10,35,34,9,-1,10,11,36,35,10,-1]);
IndexedFaceSet64.creaseAngle = 1.45;
IndexedFaceSet64.solid = False;
Coordinate Coordinate65 = createNode("Coordinate");
Coordinate65.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.05,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02]);
IndexedFaceSet64.coord = Coordinate65;

Shape61.geometry = IndexedFaceSet64;

Transform60.children = new MFNode();

Transform60.children[0] = Shape61;

Transform13.children[6] = Transform60;

Transform Transform66 = createNode("Transform");
Shape Shape67 = createNode("Shape");
Shape67.DEF = "belt";
Appearance Appearance68 = createNode("Appearance");
Material Material69 = createNode("Material");
Material69.USE = "plastic";
Appearance68.material = Material69;

Shape67.appearance = Appearance68;

IndexedFaceSet IndexedFaceSet70 = createNode("IndexedFaceSet");
IndexedFaceSet70.coordIndex = new MFInt32(new int[3,4,39,38,3,-1,8,9,40,41,8,-1,38,39,42,43,38,-1,40,41,44,45,40,-1,42,43,47,46,42,-1,44,45,47,46,44,-1]);
IndexedFaceSet70.creaseAngle = 1.45;
IndexedFaceSet70.solid = False;
Coordinate Coordinate71 = createNode("Coordinate");
Coordinate71.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.05,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02,0.075,0.06,-0.135,0.075,0.09,-0.135,-0.075,0.06,-0.135,-0.075,0.09,-0.135,0.06,0.09,-0.165,0.06,0.06,-0.165,-0.06,0.09,-0.165,-0.06,0.06,-0.165,0,0.09,-0.2,0,0.06,-0.175]);
IndexedFaceSet70.coord = Coordinate71;

Shape67.geometry = IndexedFaceSet70;

Transform66.children = new MFNode();

Transform66.children[0] = Shape67;

Transform13.children[7] = Transform66;

children[2] = Transform13;

}
