#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Interchange";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "ifscubeworks.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "identifier";
meta3.content = "http://coderextreme.net/X3DJSONLD/src/main/data/ifscubeworks.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "description";
meta4.content = "Template for an Indexed Face Set";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "creator";
meta5.content = "John Carlson";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "created";
meta6.content = "4 April 2017";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "license";
meta7.content = "https://www.web3d.org/x3d/content/examples/license.html";
head1.meta[5] = meta7;

head = head1;

WorldInfo WorldInfo9 = createNode("WorldInfo");
WorldInfo9.title = "ifscubeworks.x3d";
children = new MFNode();

children[0] = WorldInfo9;

Group Group10 = createNode("Group");
Shape Shape11 = createNode("Shape");
IndexedFaceSet IndexedFaceSet12 = createNode("IndexedFaceSet");
IndexedFaceSet12.DEF = "IndexedFaceSet";
IndexedFaceSet12.normalPerVertex = False;
IndexedFaceSet12.colorIndex = new MFInt32(new int[0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1]);
IndexedFaceSet12.normalIndex = new MFInt32(new int[0,0,1,2,3,4,5]);
IndexedFaceSet12.coordIndex = new MFInt32(new int[0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1]);
Color Color13 = createNode("Color");
Color13.color = new MFColor(new float[0,1,0]);
IndexedFaceSet12.color = Color13;

Normal Normal14 = createNode("Normal");
Normal14.vector = new MFVec3f(new float[1,0,0,-1,0,0,0,1,0,0,0,-1,0,-1,0,0,0,1]);
IndexedFaceSet12.normal = Normal14;

Coordinate Coordinate15 = createNode("Coordinate");
Coordinate15.point = new MFVec3f(new float[0,0,1,0,1,1,1,1,1,1,0,1]);
IndexedFaceSet12.coord = Coordinate15;

Shape11.geometry = IndexedFaceSet12;

Group10.children = new MFNode();

Group10.children[0] = Shape11;

children[1] = Group10;

}
