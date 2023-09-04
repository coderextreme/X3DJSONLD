#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Interchange";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "ifscube.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "identifier";
meta3.content = "http://coderextreme.net/X3DJSONLD/src/main/data/ifscube.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "description";
meta4.content = "Template for an Indexed Face Set";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "creator";
meta5.content = "John Carlson";
head1.meta[3] = meta5;

head = head1;

Group Group7 = createNode("Group");
Shape Shape8 = createNode("Shape");
IndexedFaceSet IndexedFaceSet9 = createNode("IndexedFaceSet");
IndexedFaceSet9.DEF = "IndexedFaceSet";
IndexedFaceSet9.creaseAngle = 1.57;
IndexedFaceSet9.normalPerVertex = False;
IndexedFaceSet9.colorIndex = new MFInt32(new int[0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1]);
IndexedFaceSet9.normalIndex = new MFInt32(new int[0,-1,0,-1,1,-1,2,-1,3,-1,4,-1,5,-1]);
IndexedFaceSet9.coordIndex = new MFInt32(new int[0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1]);
Color Color10 = createNode("Color");
Color10.color = new MFColor(new float[0,1,0]);
IndexedFaceSet9.color = Color10;

Normal Normal11 = createNode("Normal");
Normal11.vector = new MFVec3f(new float[1,0,0,-1,0,0,0,1,0,0,0,-1,0,-1,0,0,0,1]);
IndexedFaceSet9.normal = Normal11;

Coordinate Coordinate12 = createNode("Coordinate");
Coordinate12.point = new MFVec3f(new float[0,0,1,0,1,1,1,1,1,1,0,1]);
IndexedFaceSet9.coord = Coordinate12;

Shape8.geometry = IndexedFaceSet9;

Group7.children = new MFNode();

Group7.children[0] = Shape8;

children = new MFNode();

children[0] = Group7;

}
