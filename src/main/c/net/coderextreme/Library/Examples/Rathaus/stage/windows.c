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
meta3.content = "Sun, 15 Mar 2015 09:35:18 GMT";
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
meta6.content = "Sun, 15 Mar 2015 09:35:18 GMT";
head1.meta[4] = meta6;

head = head1;

WorldInfo WorldInfo8 = createNode("WorldInfo");
WorldInfo8.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children = new MFNode();

children[0] = WorldInfo8;

Transform Transform9 = createNode("Transform");
Transform9.DEF = "wins";
Transform Transform10 = createNode("Transform");
Transform10.DEF = "left";
Shape Shape11 = createNode("Shape");
Shape11.DEF = "_1";
Appearance Appearance12 = createNode("Appearance");
Material Material13 = createNode("Material");
Material13.DEF = "_2";
Material13.diffuseColor = new SFColor(new float[1,0.946965,0.745643]);
Appearance12.material = Material13;

ImageTexture ImageTexture14 = createNode("ImageTexture");
ImageTexture14.DEF = "_3";
ImageTexture14.url = new MFString(new java.lang.String["w_win_grid.jpg"]);
Appearance12.texture = ImageTexture14;

Shape11.appearance = Appearance12;

IndexedFaceSet IndexedFaceSet15 = createNode("IndexedFaceSet");
IndexedFaceSet15.coordIndex = new MFInt32(new int[0,1,2,-1,3,0,2,-1]);
TextureCoordinate TextureCoordinate16 = createNode("TextureCoordinate");
TextureCoordinate16.point = new MFVec2f(new float[0.0214319,0.986819,0.629956,0.974442,0.648521,0.0255575,0.0049296,0.021432]);
IndexedFaceSet15.texCoord = TextureCoordinate16;

Coordinate Coordinate17 = createNode("Coordinate");
Coordinate17.point = new MFVec3f(new float[-1.142,3.274,-7.786,-1.144,3.275,-9.158,-1.143,2.221,-9.158,-1.142,2.221,-7.784]);
IndexedFaceSet15.coord = Coordinate17;

Shape11.geometry = IndexedFaceSet15;

Transform10.child = new undefined();

Transform10.child[0] = Shape11;

Transform Transform18 = createNode("Transform");
Transform18.translation = new SFVec3f(new float[0.025,-0.00100017,1.5535]);
Shape Shape19 = createNode("Shape");
Shape19.USE = "_1";
Transform18.child = new undefined();

Transform18.child[0] = Shape19;

Transform10.children[1] = Transform18;

Transform Transform20 = createNode("Transform");
Transform20.translation = new SFVec3f(new float[0.0270001,-0.00250006,3.4015]);
Shape Shape21 = createNode("Shape");
Shape21.USE = "_1";
Transform20.child = new undefined();

Transform20.child[0] = Shape21;

Transform10.children[2] = Transform20;

Transform Transform22 = createNode("Transform");
Transform22.translation = new SFVec3f(new float[0.0300001,-0.00400019,5.344]);
Shape Shape23 = createNode("Shape");
Shape23.USE = "_1";
Transform22.child = new undefined();

Transform22.child[0] = Shape23;

Transform10.children[3] = Transform22;

Transform Transform24 = createNode("Transform");
Transform24.translation = new SFVec3f(new float[0.0330001,-0.00500011,7.366]);
Shape Shape25 = createNode("Shape");
Shape25.USE = "_1";
Transform24.child = new undefined();

Transform24.child[0] = Shape25;

Transform10.children[4] = Transform24;

Transform Transform26 = createNode("Transform");
Transform26.translation = new SFVec3f(new float[0.035,-0.00600004,8.8935]);
Shape Shape27 = createNode("Shape");
Shape27.USE = "_1";
Transform26.child = new undefined();

Transform26.child[0] = Shape27;

Transform10.children[5] = Transform26;

Transform9.children = new MFNode();

Transform9.children[0] = Transform10;

Transform Transform28 = createNode("Transform");
Transform28.DEF = "mid";
Transform Transform29 = createNode("Transform");
Transform29.translation = new SFVec3f(new float[0.0419999,-0.00950003,13.868]);
Shape Shape30 = createNode("Shape");
Shape30.USE = "_1";
Transform29.child = new undefined();

Transform29.child[0] = Shape30;

Transform28.children = new MFNode();

Transform28.children[0] = Transform29;

Transform Transform31 = createNode("Transform");
Transform31.translation = new SFVec3f(new float[0.044,-0.0105,15.475]);
Shape Shape32 = createNode("Shape");
Shape32.USE = "_1";
Transform31.child = new undefined();

Transform31.child[0] = Shape32;

Transform28.children[1] = Transform31;

Transform Transform33 = createNode("Transform");
Transform33.translation = new SFVec3f(new float[0.0470001,-0.0120001,17.301]);
Shape Shape34 = createNode("Shape");
Shape34.USE = "_1";
Transform33.child = new undefined();

Transform33.child[0] = Shape34;

Transform28.children[2] = Transform33;

Transform Transform35 = createNode("Transform");
Transform35.translation = new SFVec3f(new float[0.0500001,-0.013,19.1965]);
Shape Shape36 = createNode("Shape");
Shape36.USE = "_1";
Transform35.child = new undefined();

Transform35.child[0] = Shape36;

Transform28.children[3] = Transform35;

Transform Transform37 = createNode("Transform");
Transform37.translation = new SFVec3f(new float[0.0519999,-0.0140002,20.892]);
Shape Shape38 = createNode("Shape");
Shape38.USE = "_1";
Transform37.child = new undefined();

Transform37.child[0] = Shape38;

Transform28.children[4] = Transform37;

Transform Transform39 = createNode("Transform");
Transform39.DEF = "tx";
Shape Shape40 = createNode("Shape");
Appearance Appearance41 = createNode("Appearance");
Material Material42 = createNode("Material");
Material42.USE = "_2";
Appearance41.material = Material42;

ImageTexture ImageTexture43 = createNode("ImageTexture");
ImageTexture43.USE = "_3";
Appearance41.texture = ImageTexture43;

Shape40.appearance = Appearance41;

IndexedFaceSet IndexedFaceSet44 = createNode("IndexedFaceSet");
IndexedFaceSet44.coordIndex = new MFInt32(new int[0,1,2,-1,3,0,2,-1]);
TextureCoordinate TextureCoordinate45 = createNode("TextureCoordinate");
TextureCoordinate45.point = new MFVec2f(new float[0.649836,0.0123979,0.353507,0.00640266,0.349685,0.971128,0.629519,0.977444]);
IndexedFaceSet44.texCoord = TextureCoordinate45;

Coordinate Coordinate46 = createNode("Coordinate");
Coordinate46.point = new MFVec3f(new float[-1.089,2.207,13.548,-1.089,2.206,14.228,-1.089,3.259,14.237,-1.09,3.26,13.539]);
IndexedFaceSet44.coord = Coordinate46;

Shape40.geometry = IndexedFaceSet44;

Transform39.child = new undefined();

Transform39.child[0] = Shape40;

Transform28.children[5] = Transform39;

Transform9.children[1] = Transform28;

Transform Transform47 = createNode("Transform");
Transform47.DEF = "right";
Transform Transform48 = createNode("Transform");
Transform48.translation = new SFVec3f(new float[0.056,-0.0160003,23.924]);
Shape Shape49 = createNode("Shape");
Shape49.USE = "_1";
Transform48.child = new undefined();

Transform48.child[0] = Shape49;

Transform47.children = new MFNode();

Transform47.children[0] = Transform48;

Transform Transform50 = createNode("Transform");
Transform50.translation = new SFVec3f(new float[0.059,-0.0170002,25.8105]);
Shape Shape51 = createNode("Shape");
Shape51.USE = "_1";
Transform50.child = new undefined();

Transform50.child[0] = Shape51;

Transform47.children[1] = Transform50;

Transform Transform52 = createNode("Transform");
Transform52.translation = new SFVec3f(new float[0.0619999,-0.0190001,27.846]);
Shape Shape53 = createNode("Shape");
Shape53.USE = "_1";
Transform52.child = new undefined();

Transform52.child[0] = Shape53;

Transform47.children[2] = Transform52;

Transform Transform54 = createNode("Transform");
Transform54.translation = new SFVec3f(new float[0.064,-0.02,29.518]);
Shape Shape55 = createNode("Shape");
Shape55.USE = "_1";
Transform54.child = new undefined();

Transform54.child[0] = Shape55;

Transform47.children[3] = Transform54;

Transform Transform56 = createNode("Transform");
Transform56.translation = new SFVec3f(new float[0.0660001,-0.0210001,30.999]);
Shape Shape57 = createNode("Shape");
Shape57.USE = "_1";
Transform56.child = new undefined();

Transform56.child[0] = Shape57;

Transform47.children[4] = Transform56;

Transform Transform58 = createNode("Transform");
Transform58.translation = new SFVec3f(new float[0.068,-0.0220003,32.625]);
Shape Shape59 = createNode("Shape");
Shape59.USE = "_1";
Transform58.child = new undefined();

Transform58.child[0] = Shape59;

Transform47.children[5] = Transform58;

Transform9.children[2] = Transform47;

children[1] = Transform9;

}
