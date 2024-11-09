#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Full";
X3D0.version = "3.3";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "comment";
meta2.content = "World of Titania";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "created";
meta3.content = "Thu, 23 Apr 2015 06:07:05 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V0.7.8, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Thu, 23 Apr 2015 06:07:05 GMT";
head1.meta[4] = meta6;

head = head1;

WorldInfo WorldInfo8 = createNode("WorldInfo");
WorldInfo8.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children = new MFNode();

children[0] = WorldInfo8;

Transform Transform9 = createNode("Transform");
Transform9.DEF = "cheese";
Transform9.translation = new SFVec3f(new float[0,-0.0000011838,0]);
Transform9.scale = new SFVec3f(new float[1.3115,1.3115,1.3115]);
Shape Shape10 = createNode("Shape");
Appearance Appearance11 = createNode("Appearance");
Shape10.appearance = Appearance11;

IndexedFaceSet IndexedFaceSet12 = createNode("IndexedFaceSet");
IndexedFaceSet12.solid = False;
IndexedFaceSet12.convex = False;
IndexedFaceSet12.colorIndex = new MFInt32(new int[0,1,1,-1,0,1,1,-1,2,0,0,-1,0,2,0,-1,1,0,0,-1,0,1,1,-1,0,1,1,-1,1,1,1,-1,0,1,1,-1,1,1,1,-1,1,1,0,-1,1,1,1,-1,1,0,1,-1,1,1,1,-1,1,1,1,-1,1,0,1,-1,1,1,0,-1,0,0,1,-1,1,1,0,-1,1,0,1,-1,0,1,0,-1,2,0,0,-1,1,1,0,-1,0,1,0,-1,0,0,0,-1,0,0,0,-1,0,0,1,-1,0,0,2,-1,2,0,0,-1,0,0,3,-1,0,1,3,-1,0,3,0,-1,1,1,3,-1,1,0,3,-1,0,0,2,-1,0,0,1,-1,0,0,2,-1,0,0,0,-1,0,0,3,-1,0,1,3,-1,0,3,0,-1,1,1,3,-1,1,0,3,-1,0,2,0,-1,0,2,0,-1,0,0,1,-1,0,0,3,-1,0,1,3,-1,0,3,0,-1,1,1,3,-1,1,0,3,-1,0,0,0,-1,0,2,0,-1,0,0,2,-1,0,0,0,-1,0,0,3,-1,0,0,3,-1,0,3,1,-1,0,0,3,-1,0,1,3,-1]);
IndexedFaceSet12.coordIndex = new MFInt32(new int[0,1,2,-1,3,4,5,-1,6,7,8,-1,7,9,8,-1,10,11,12,-1,13,14,15,-1,0,2,16,-1,2,10,16,-1,0,16,5,-1,16,17,5,-1,5,17,3,-1,10,18,16,-1,10,12,18,-1,16,18,17,-1,18,19,17,-1,18,12,19,-1,17,19,3,-1,12,13,19,-1,19,15,3,-1,19,13,15,-1,0,5,20,-1,6,8,21,-1,10,2,21,-1,3,15,22,-1,13,12,23,-1,22,24,7,-1,24,22,15,-1,7,24,9,-1,9,24,23,-1,23,24,25,-1,24,15,25,-1,23,25,13,-1,15,14,25,-1,14,13,25,-1,20,26,6,-1,26,20,5,-1,26,7,6,-1,26,22,7,-1,22,26,27,-1,26,5,27,-1,22,27,3,-1,5,4,27,-1,4,3,27,-1,20,6,28,-1,28,6,21,-1,28,21,2,-1,20,28,29,-1,28,2,29,-1,20,29,0,-1,2,1,29,-1,1,0,29,-1,21,8,30,-1,8,9,30,-1,23,30,9,-1,30,23,12,-1,21,30,31,-1,30,12,31,-1,21,31,10,-1,12,11,31,-1,11,10,31,-1]);
Color Color13 = createNode("Color");
Color13.color = new MFColor(new float[1,0.741976,0,0.614973,0.369265,0,1,0.899544,0,0.68984,0.243298,0]);
IndexedFaceSet12.color = Color13;

Coordinate Coordinate14 = createNode("Coordinate");
Coordinate14.point = new MFVec3f(new float[-0.0229925,0.00603508,0.0689762,-0.0597941,-0.0102309,0.0597941,-0.0689762,0.00603508,0.0229925,0.0689762,0.00603508,0.0229925,0.0597941,-0.0102309,0.0597941,0.0229925,0.00603508,0.0689762,-0.0229925,0.0102385,0.0229925,0.0229925,0.0102385,0.0229925,-0.0229925,0.0102385,-0.0229925,0.0229925,0.0102385,-0.0229925,-0.0689762,0.00603508,-0.0229925,-0.0597941,-0.0102309,-0.0597941,-0.0229925,0.00603508,-0.0689762,0.0229925,0.00603508,-0.0689762,0.0597941,-0.0102309,-0.0597941,0.0689762,0.00603508,-0.0229925,-0.0229925,0.00603508,0.0229925,0.0229925,0.00603508,0.0229925,-0.0229925,0.00603508,-0.0229925,0.0229925,0.00603508,-0.0229925,-0.0236257,0.00991431,0.0696108,-0.0696108,0.00991431,-0.0236257,0.0696108,0.00991431,0.0236257,0.0236257,0.00991431,-0.0696108,0.0696108,0.00991431,-0.0236257,0.0616964,-0.00700004,-0.0616965,0.0236257,0.00991431,0.0696108,0.0616964,-0.00700004,0.0616965,-0.0696108,0.00991431,0.0236257,-0.0616964,-0.00700004,0.0616965,-0.0236257,0.00991431,-0.0696108,-0.0616964,-0.00700004,-0.0616965]);
IndexedFaceSet12.coord = Coordinate14;

Shape10.geometry = IndexedFaceSet12;

Transform9.child = new undefined();

Transform9.child[0] = Shape10;

children[1] = Transform9;

}
