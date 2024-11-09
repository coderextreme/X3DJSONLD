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
meta3.content = "Sun, 15 Mar 2015 09:37:03 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V0.7.6, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Sun, 15 Mar 2015 09:37:03 GMT";
head1.meta[4] = meta6;

head = head1;

WorldInfo WorldInfo8 = createNode("WorldInfo");
WorldInfo8.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children = new MFNode();

children[0] = WorldInfo8;

Transform Transform9 = createNode("Transform");
Transform9.DEF = "zierkegel";
Shape Shape10 = createNode("Shape");
Appearance Appearance11 = createNode("Appearance");
Material Material12 = createNode("Material");
Material12.ambientIntensity = 0.341818;
Material12.diffuseColor = new SFColor(new float[0.585106,0.0214792,0]);
Appearance11.material = Material12;

Shape10.appearance = Appearance11;

IndexedFaceSet IndexedFaceSet13 = createNode("IndexedFaceSet");
IndexedFaceSet13.DEF = "polySurface98_0Geo";
IndexedFaceSet13.convex = False;
IndexedFaceSet13.creaseAngle = 1.76331;
IndexedFaceSet13.coordIndex = new MFInt32(new int[11,12,2,6,-1,8,9,4,5,-1,8,5,3,7,-1,6,8,7,0,-1,8,6,2,9,-1,11,6,0,10,-1,5,11,10,3,-1,11,5,4,12,-1,14,13,4,9,-1,1,14,9,2,-1,15,1,2,12,-1,13,15,12,4,-1,20,27,26,-1,19,27,21,-1,23,16,18,-1,23,18,17,-1,16,19,21,18,-1,21,20,17,18,-1,27,20,21,-1,23,17,24,-1,23,22,16,-1,23,24,22,-1,27,19,25,-1,19,16,22,25,-1,17,20,26,24,-1,26,25,22,24,-1,27,25,26,-1]);
Coordinate Coordinate14 = createNode("Coordinate");
Coordinate14.DEF = "polySurface98GeoPoints";
Coordinate14.point = new MFVec3f(new float[-0.696,6.076,-7.18,-0.671,6.225,-7.142,-0.727,6.149,-7.227,-0.568,6.076,-7.051,-0.537,6.149,-7.004,-0.537,6.114,-7.004,-0.727,6.114,-7.227,-0.568,6.076,-7.18,-0.537,6.114,-7.227,-0.537,6.149,-7.227,-0.696,6.076,-7.052,-0.727,6.114,-7.004,-0.727,6.149,-7.004,-0.593,6.225,-7.089,-0.593,6.225,-7.142,-0.671,6.225,-7.089,-0.577,6.374,-7.167,-0.706,6.374,-7.113,-0.662,6.374,-7.211,-0.577,6.278,-7.167,-0.706,6.278,-7.113,-0.662,6.278,-7.211,-0.577,6.374,-7.058,-0.636,6.433,-7.113,-0.663,6.374,-7.014,-0.577,6.278,-7.058,-0.663,6.278,-7.014,-0.636,6.219,-7.113]);
IndexedFaceSet13.coord = Coordinate14;

Shape10.geometry = IndexedFaceSet13;

Transform9.child = new undefined();

Transform9.child[0] = Shape10;

children[1] = Transform9;

}
