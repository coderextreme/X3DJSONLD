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
meta3.content = "Sun, 15 Mar 2015 09:34:11 GMT";
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
meta6.content = "Sun, 15 Mar 2015 09:34:11 GMT";
head1.meta[4] = meta6;

head = head1;

WorldInfo WorldInfo8 = createNode("WorldInfo");
WorldInfo8.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children = new MFNode();

children[0] = WorldInfo8;

Transform Transform9 = createNode("Transform");
Transform Transform10 = createNode("Transform");
Transform10.DEF = "nurbsToPoly143";
Shape Shape11 = createNode("Shape");
Appearance Appearance12 = createNode("Appearance");
Material Material13 = createNode("Material");
Material13.ambientIntensity = 0.341818;
Material13.diffuseColor = new SFColor(new float[0.585106,0.0214792,0]);
Appearance12.material = Material13;

Shape11.appearance = Appearance12;

IndexedFaceSet IndexedFaceSet14 = createNode("IndexedFaceSet");
IndexedFaceSet14.DEF = "nurbsToPoly143_0Geo";
IndexedFaceSet14.convex = False;
IndexedFaceSet14.coordIndex = new MFInt32(new int[6,1,2,7,-1,0,4,5,3,-1,4,6,7,5,-1]);
Coordinate Coordinate15 = createNode("Coordinate");
Coordinate15.DEF = "nurbsToPoly143GeoPoints";
Coordinate15.point = new MFVec3f(new float[-0.676,4.401,0.477,-0.675,4.401,1.417,0.683,4.959,1.415,0.682,4.959,0.475,-0.676,5.02,0.477,0.682,5.579,0.475,-0.675,5.02,1.417,0.683,5.579,1.415]);
IndexedFaceSet14.coord = Coordinate15;

Shape11.geometry = IndexedFaceSet14;

Transform10.child = new undefined();

Transform10.child[0] = Shape11;

Shape Shape16 = createNode("Shape");
Appearance Appearance17 = createNode("Appearance");
Material Material18 = createNode("Material");
Material18.DEF = "_1";
Material18.diffuseColor = new SFColor(new float[1,0.794631,0.389824]);
Appearance17.material = Material18;

Shape16.appearance = Appearance17;

IndexedFaceSet IndexedFaceSet19 = createNode("IndexedFaceSet");
IndexedFaceSet19.DEF = "nurbsToPoly143_1Geo";
IndexedFaceSet19.convex = False;
IndexedFaceSet19.coordIndex = new MFInt32(new int[4,0,1,6,-1]);
Coordinate Coordinate20 = createNode("Coordinate");
Coordinate20.USE = "nurbsToPoly143GeoPoints";
IndexedFaceSet19.coord = Coordinate20;

Shape16.geometry = IndexedFaceSet19;

Transform10.child[1] = Shape16;

Transform9.children = new MFNode();

Transform9.children[0] = Transform10;

Transform Transform21 = createNode("Transform");
Transform21.DEF = "nurbsToPoly148";
Shape Shape22 = createNode("Shape");
Appearance Appearance23 = createNode("Appearance");
Material Material24 = createNode("Material");
Material24.DEF = "_2";
Material24.ambientIntensity = 0.341818;
Material24.diffuseColor = new SFColor(new float[0.585106,0.0214792,0]);
Appearance23.material = Material24;

Shape22.appearance = Appearance23;

IndexedFaceSet IndexedFaceSet25 = createNode("IndexedFaceSet");
IndexedFaceSet25.DEF = "nurbsToPoly148_0Geo";
IndexedFaceSet25.convex = False;
IndexedFaceSet25.coordIndex = new MFInt32(new int[6,1,2,7,-1,0,4,5,3,-1,4,6,7,5,-1]);
Coordinate Coordinate26 = createNode("Coordinate");
Coordinate26.DEF = "nurbsToPoly148GeoPoints";
Coordinate26.point = new MFVec3f(new float[1.165,6.286,0.746,1.165,6.286,1.113,2.222,6.72,1.111,2.222,6.72,0.744,1.165,6.768,0.746,2.222,7.203,0.744,1.165,6.768,1.113,2.222,7.203,1.111]);
IndexedFaceSet25.coord = Coordinate26;

Shape22.geometry = IndexedFaceSet25;

Transform21.child = new undefined();

Transform21.child[0] = Shape22;

Transform9.children[1] = Transform21;

Transform Transform27 = createNode("Transform");
Transform27.DEF = "nurbsToPoly147";
Shape Shape28 = createNode("Shape");
Appearance Appearance29 = createNode("Appearance");
Material Material30 = createNode("Material");
Material30.USE = "_2";
Appearance29.material = Material30;

Shape28.appearance = Appearance29;

IndexedFaceSet IndexedFaceSet31 = createNode("IndexedFaceSet");
IndexedFaceSet31.DEF = "nurbsToPoly147_0Geo";
IndexedFaceSet31.convex = False;
IndexedFaceSet31.coordIndex = new MFInt32(new int[6,1,2,7,-1,0,4,5,3,-1,4,6,7,5,-1]);
Coordinate Coordinate32 = createNode("Coordinate");
Coordinate32.DEF = "nurbsToPoly147GeoPoints";
Coordinate32.point = new MFVec3f(new float[2.061,7.648,0.746,2.061,7.648,1.113,3.118,8.083,1.111,3.118,8.083,0.744,2.061,8.13,0.746,3.118,8.565,0.744,2.061,8.13,1.113,3.118,8.565,1.111]);
IndexedFaceSet31.coord = Coordinate32;

Shape28.geometry = IndexedFaceSet31;

Transform27.child = new undefined();

Transform27.child[0] = Shape28;

Transform9.children[2] = Transform27;

Transform Transform33 = createNode("Transform");
Shape Shape34 = createNode("Shape");
Appearance Appearance35 = createNode("Appearance");
Material Material36 = createNode("Material");
Material36.USE = "_1";
Appearance35.material = Material36;

Shape34.appearance = Appearance35;

IndexedFaceSet IndexedFaceSet37 = createNode("IndexedFaceSet");
IndexedFaceSet37.convex = False;
IndexedFaceSet37.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate38 = createNode("Coordinate");
Coordinate38.point = new MFVec3f(new float[1.165,6.768,0.746,1.165,6.286,0.746,1.165,6.286,1.113,1.165,6.768,1.113]);
IndexedFaceSet37.coord = Coordinate38;

Shape34.geometry = IndexedFaceSet37;

Transform33.child = new undefined();

Transform33.child[0] = Shape34;

Transform9.children[3] = Transform33;

Transform Transform39 = createNode("Transform");
Shape Shape40 = createNode("Shape");
Appearance Appearance41 = createNode("Appearance");
Material Material42 = createNode("Material");
Material42.USE = "_1";
Appearance41.material = Material42;

Shape40.appearance = Appearance41;

IndexedFaceSet IndexedFaceSet43 = createNode("IndexedFaceSet");
IndexedFaceSet43.convex = False;
IndexedFaceSet43.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate44 = createNode("Coordinate");
Coordinate44.point = new MFVec3f(new float[2.061,8.13,0.746,2.061,7.648,0.746,2.061,7.648,1.113,2.061,8.13,1.113]);
IndexedFaceSet43.coord = Coordinate44;

Shape40.geometry = IndexedFaceSet43;

Transform39.child = new undefined();

Transform39.child[0] = Shape40;

Transform9.children[4] = Transform39;

children[1] = Transform9;

}
