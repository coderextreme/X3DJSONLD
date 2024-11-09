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
meta3.content = "Thu, 23 Apr 2015 06:07:09 GMT";
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
meta6.content = "Thu, 23 Apr 2015 06:07:09 GMT";
head1.meta[4] = meta6;

head = head1;

WorldInfo WorldInfo8 = createNode("WorldInfo");
WorldInfo8.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children = new MFNode();

children[0] = WorldInfo8;

Transform Transform9 = createNode("Transform");
Transform9.DEF = "nc";
Collision Collision10 = createNode("Collision");
Collision10.enabled = False;
Transform Transform11 = createNode("Transform");
Transform Transform12 = createNode("Transform");
Transform12.translation = new SFVec3f(new float[-1.37383,0.503751,0]);
Transform12.rotation = new SFRotation(new float[0,0,-1,1.5708]);
Transform Transform13 = createNode("Transform");
Transform13.DEF = "_1";
Transform Transform14 = createNode("Transform");
Transform14.translation = new SFVec3f(new float[0,0,6.63116]);
Transform Transform15 = createNode("Transform");
Transform15.DEF = "_2";
Transform15.scale = new SFVec3f(new float[1,2.98486,1]);
Shape Shape16 = createNode("Shape");
Appearance Appearance17 = createNode("Appearance");
Material Material18 = createNode("Material");
Material18.ambientIntensity = 0;
Material18.diffuseColor = new SFColor(new float[0,0,0]);
Material18.emissiveColor = new SFColor(new float[0.819149,0.686645,0.392914]);
Material18.shininess = 0;
Appearance17.material = Material18;

Shape16.appearance = Appearance17;

IndexedLineSet IndexedLineSet19 = createNode("IndexedLineSet");
IndexedLineSet19.coordIndex = new MFInt32(new int[0,1,3,2,-1,4,5,7,6,4,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1]);
Coordinate Coordinate20 = createNode("Coordinate");
Coordinate20.point = new MFVec3f(new float[-0.5,0.5,0.5,-0.5,-0.5,0.5,0.5,0.5,0.5,0.5,-0.5,0.5,0.5,0.5,-0.5,0.5,-0.5,-0.5,-0.5,0.5,-0.5,-0.5,-0.5,-0.5]);
IndexedLineSet19.coord = Coordinate20;

Shape16.geometry = IndexedLineSet19;

Transform15.child = new undefined();

Transform15.child[0] = Shape16;

Transform14.children = new MFNode();

Transform14.children[0] = Transform15;

Transform13.children = new MFNode();

Transform13.children[0] = Transform14;

Transform Transform21 = createNode("Transform");
Transform21.translation = new SFVec3f(new float[0,0,2.57238]);
Transform Transform22 = createNode("Transform");
Transform22.USE = "_2";
Transform21.children = new MFNode();

Transform21.children[0] = Transform22;

Transform13.children[1] = Transform21;

Transform Transform23 = createNode("Transform");
Transform23.translation = new SFVec3f(new float[0,0,-6.72781]);
Transform Transform24 = createNode("Transform");
Transform24.USE = "_2";
Transform23.children = new MFNode();

Transform23.children[0] = Transform24;

Transform13.children[2] = Transform23;

Transform Transform25 = createNode("Transform");
Transform25.translation = new SFVec3f(new float[-0.807327,1.49278,4.45628]);
Transform25.rotation = new SFRotation(new float[0.0000398219,1,-0.0000398219,4.71239]);
Transform25.scaleOrientation = new SFRotation(new float[0.0000361377,1,-0.0000237345,2.35619]);
Transform Transform26 = createNode("Transform");
Transform26.USE = "_2";
Transform25.children = new MFNode();

Transform25.children[0] = Transform26;

Transform13.children[3] = Transform25;

Transform Transform27 = createNode("Transform");
Transform27.translation = new SFVec3f(new float[-0.715973,0.800763,-2.54796]);
Transform27.rotation = new SFRotation(new float[0.0000398219,1,-0.0000398219,4.71239]);
Transform27.scaleOrientation = new SFRotation(new float[0.0000361377,1,-0.0000237345,2.35619]);
Transform Transform28 = createNode("Transform");
Transform28.USE = "_2";
Transform27.children = new MFNode();

Transform27.children[0] = Transform28;

Transform13.children[4] = Transform27;

Transform Transform29 = createNode("Transform");
Transform29.USE = "_2";
Transform13.children[5] = Transform29;

Transform12.children = new MFNode();

Transform12.children[0] = Transform13;

Transform11.children = new MFNode();

Transform11.children[0] = Transform12;

Transform Transform30 = createNode("Transform");
Transform30.USE = "_1";
Transform11.children[1] = Transform30;

Collision10.proxy = Transform11;

Transform9.children = new MFNode();

Transform9.children[0] = Collision10;

children[1] = Transform9;

}
