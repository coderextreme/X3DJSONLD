#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "3.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "GridXZ_20x20Fixed.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "creator";
meta3.content = "MV4204 class";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "created";
meta4.content = "3 September 2000";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "modified";
meta5.content = "28 November 2019";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "reference";
meta6.content = "GridXY_20x20Fixed.x3d";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "reference";
meta7.content = "GridYZ_20x20Fixed.x3d";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "description";
meta8.content = "Line grid authoring tool to enable precise visual measurement of objects in 3D space - fixed position. Oriented along XZ plane, size 20m by 20m, default block size 1m by 1m.";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "identifier";
meta9.content = "https://www.web3d.org/x3d/content/examples/Savage/Tools/Authoring/GridXZ_20x20Fixed.x3d";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "generator";
meta10.content = "X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "license";
meta11.content = "../../license.html";
head1.meta[9] = meta11;

head = head1;

WorldInfo WorldInfo13 = createNode("WorldInfo");
WorldInfo13.title = "GridXZ_20x20Fixed.x3d";
children = new MFNode();

children[0] = WorldInfo13;

Viewpoint Viewpoint14 = createNode("Viewpoint");
Viewpoint14.description = "XZ horizontal grid, perpendicular to Y axis (seen from 0 10 25)";
Viewpoint14.orientation = new SFRotation(new float[1,0,0,-0.4]);
Viewpoint14.position = new SFVec3f(new float[0,10,25]);
children[1] = Viewpoint14;

Transform Transform15 = createNode("Transform");
Transform15.DEF = "GridLocation";
Group Group16 = createNode("Group");
Shape Shape17 = createNode("Shape");
Shape17.DEF = "LinesAlignedAlongZ";
IndexedLineSet IndexedLineSet18 = createNode("IndexedLineSet");
IndexedLineSet18.colorIndex = new MFInt32(new int[1,0,0,0,0,2,0,0,0,0,1,0,0,0,0,2,0,0,0,0,1]);
IndexedLineSet18.colorPerVertex = False;
IndexedLineSet18.coordIndex = new MFInt32(new int[1,22,-1,2,23,-1,3,24,-1,4,25,-1,5,26,-1,6,27,-1,7,28,-1,8,29,-1,9,30,-1,10,31,-1,11,32,-1,12,33,-1,13,34,-1,14,35,-1,15,36,-1,16,37,-1,17,38,-1,18,39,-1,19,40,-1,20,41,-1,21,42,-1]);
Coordinate Coordinate19 = createNode("Coordinate");
Coordinate19.DEF = "EndPoints";
Coordinate19.point = new MFVec3f(new float[0,0,0,-10,0,10,-9,0,10,-8,0,10,-7,0,10,-6,0,10,-5,0,10,-4,0,10,-3,0,10,-2,0,10,-1,0,10,0,0,10,1,0,10,2,0,10,3,0,10,4,0,10,5,0,10,6,0,10,7,0,10,8,0,10,9,0,10,10,0,10,-10,0,-10,-9,0,-10,-8,0,-10,-7,0,-10,-6,0,-10,-5,0,-10,-4,0,-10,-3,0,-10,-2,0,-10,-1,0,-10,0,0,-10,1,0,-10,2,0,-10,3,0,-10,4,0,-10,5,0,-10,6,0,-10,7,0,-10,8,0,-10,9,0,-10,10,0,-10]);
IndexedLineSet18.coord = Coordinate19;

Color Color20 = createNode("Color");
Color20.color = new MFColor(new float[0.4,0.4,0.4,0.8,0.2,0,0.4,0.1,0.05]);
IndexedLineSet18.color = Color20;

Shape17.geometry = IndexedLineSet18;

Group16.children = new MFNode();

Group16.children[0] = Shape17;

Transform Transform21 = createNode("Transform");
Transform21.DEF = "LinesAlignedAlongX";
Transform21.rotation = new SFRotation(new float[0,1,0,1.57079]);
Shape Shape22 = createNode("Shape");
Shape22.USE = "LinesAlignedAlongZ";
Transform21.child = new undefined();

Transform21.child[0] = Shape22;

Group16.children[1] = Transform21;

Transform Transform23 = createNode("Transform");
Transform23.translation = new SFVec3f(new float[0,-0.5,0]);
Billboard Billboard24 = createNode("Billboard");
Shape Shape25 = createNode("Shape");
Text Text26 = createNode("Text");
Text26.DEF = "CenterTextNode";
Text26.string = new MFString(new java.lang.String["origin"]);
FontStyle FontStyle27 = createNode("FontStyle");
FontStyle27.DEF = "FS4";
FontStyle27.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle27.size = 0.4;
Text26.fontStyle = FontStyle27;

Shape25.geometry = Text26;

Appearance Appearance28 = createNode("Appearance");
Appearance28.DEF = "DefaultAppearance";
Material Material29 = createNode("Material");
Appearance28.material = Material29;

Shape25.appearance = Appearance28;

Billboard24.children = new MFNode();

Billboard24.children[0] = Shape25;

Transform23.children = new MFNode();

Transform23.children[0] = Billboard24;

Group16.children[2] = Transform23;

Transform Transform30 = createNode("Transform");
Transform30.translation = new SFVec3f(new float[10,-0.5,10]);
Billboard Billboard31 = createNode("Billboard");
Shape Shape32 = createNode("Shape");
Text Text33 = createNode("Text");
Text33.string = new MFString(new java.lang.String["10 0 10"]);
FontStyle FontStyle34 = createNode("FontStyle");
FontStyle34.USE = "FS4";
Text33.fontStyle = FontStyle34;

Shape32.geometry = Text33;

Appearance Appearance35 = createNode("Appearance");
Appearance35.USE = "DefaultAppearance";
Shape32.appearance = Appearance35;

Billboard31.children = new MFNode();

Billboard31.children[0] = Shape32;

Transform30.children = new MFNode();

Transform30.children[0] = Billboard31;

Group16.children[3] = Transform30;

Transform Transform36 = createNode("Transform");
Transform36.translation = new SFVec3f(new float[10,-0.5,-10]);
Billboard Billboard37 = createNode("Billboard");
Shape Shape38 = createNode("Shape");
Text Text39 = createNode("Text");
Text39.string = new MFString(new java.lang.String["10 0 -10"]);
FontStyle FontStyle40 = createNode("FontStyle");
FontStyle40.USE = "FS4";
Text39.fontStyle = FontStyle40;

Shape38.geometry = Text39;

Appearance Appearance41 = createNode("Appearance");
Appearance41.USE = "DefaultAppearance";
Shape38.appearance = Appearance41;

Billboard37.children = new MFNode();

Billboard37.children[0] = Shape38;

Transform36.children = new MFNode();

Transform36.children[0] = Billboard37;

Group16.children[4] = Transform36;

Transform Transform42 = createNode("Transform");
Transform42.translation = new SFVec3f(new float[-10,-0.5,10]);
Billboard Billboard43 = createNode("Billboard");
Shape Shape44 = createNode("Shape");
Text Text45 = createNode("Text");
Text45.string = new MFString(new java.lang.String["-10 0 10"]);
FontStyle FontStyle46 = createNode("FontStyle");
FontStyle46.USE = "FS4";
Text45.fontStyle = FontStyle46;

Shape44.geometry = Text45;

Appearance Appearance47 = createNode("Appearance");
Appearance47.USE = "DefaultAppearance";
Shape44.appearance = Appearance47;

Billboard43.children = new MFNode();

Billboard43.children[0] = Shape44;

Transform42.children = new MFNode();

Transform42.children[0] = Billboard43;

Group16.children[5] = Transform42;

Transform Transform48 = createNode("Transform");
Transform48.translation = new SFVec3f(new float[-10,-0.5,-10]);
Billboard Billboard49 = createNode("Billboard");
Shape Shape50 = createNode("Shape");
Text Text51 = createNode("Text");
Text51.string = new MFString(new java.lang.String["-10 0 -10"]);
FontStyle FontStyle52 = createNode("FontStyle");
FontStyle52.USE = "FS4";
Text51.fontStyle = FontStyle52;

Shape50.geometry = Text51;

Appearance Appearance53 = createNode("Appearance");
Appearance53.USE = "DefaultAppearance";
Shape50.appearance = Appearance53;

Billboard49.children = new MFNode();

Billboard49.children[0] = Shape50;

Transform48.children = new MFNode();

Transform48.children[0] = Billboard49;

Group16.children[6] = Transform48;

Transform15.children = new MFNode();

Transform15.children[0] = Group16;

children[2] = Transform15;

}
