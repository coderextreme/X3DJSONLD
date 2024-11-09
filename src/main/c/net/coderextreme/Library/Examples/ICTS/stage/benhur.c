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
meta3.content = "Thu, 23 Apr 2015 06:06:57 GMT";
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
meta6.content = "Thu, 23 Apr 2015 06:06:57 GMT";
head1.meta[4] = meta6;

head = head1;

WorldInfo WorldInfo8 = createNode("WorldInfo");
WorldInfo8.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children = new MFNode();

children[0] = WorldInfo8;

Anchor Anchor9 = createNode("Anchor");
Anchor9.url = new MFString(new java.lang.String["javascript: function tmt_winLaunch(theURL,winName,targetName,features) { eval(winName+\"=window.open('\"+theURL+\"','\"+targetName+\"','\"+features+\"')\") } tmt_winLaunch('html/cinema/benhur.html', 'cinemaxx','cinemaxx','width=623,height=454,left=0,top=0');"]);
Collision Collision10 = createNode("Collision");
Collision10.enabled = False;
Transform Transform11 = createNode("Transform");
LOD LOD12 = createNode("LOD");
LOD12.range = new MFFloat(new float[12]);
Transform Transform13 = createNode("Transform");
Transform13.translation = new SFVec3f(new float[0,-0.970178,0]);
Transform Transform14 = createNode("Transform");
Transform14.DEF = "b";
Transform14.translation = new SFVec3f(new float[-0.036226,2.95521,-0.941064]);
Transform14.rotation = new SFRotation(new float[1,0,0,1.5708]);
Transform14.scale = new SFVec3f(new float[6.56332,0.999999,1.20494]);
Shape Shape15 = createNode("Shape");
Appearance Appearance16 = createNode("Appearance");
Material Material17 = createNode("Material");
Material17.ambientIntensity = 0;
Material17.diffuseColor = new SFColor(new float[0,0,0]);
Material17.emissiveColor = new SFColor(new float[0.43617,0,0.0460901]);
Material17.shininess = 0;
Material17.transparency = 0.265957;
Appearance16.material = Material17;

Shape15.appearance = Appearance16;

IndexedFaceSet IndexedFaceSet18 = createNode("IndexedFaceSet");
IndexedFaceSet18.creaseAngle = 0.5;
IndexedFaceSet18.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate19 = createNode("Coordinate");
Coordinate19.point = new MFVec3f(new float[-1,1,-1,-1,1,1,1,1,1,1,1,-1]);
IndexedFaceSet18.coord = Coordinate19;

Shape15.geometry = IndexedFaceSet18;

Transform14.child = new undefined();

Transform14.child[0] = Shape15;

Transform13.children = new MFNode();

Transform13.children[0] = Transform14;

Transform Transform20 = createNode("Transform");
Transform20.DEF = "t";
Transform20.translation = new SFVec3f(new float[-0.0362264,3.40265,0.199348]);
Transform20.scale = new SFVec3f(new float[0.0304876,0.0304875,0.0304875]);
Shape Shape21 = createNode("Shape");
Appearance Appearance22 = createNode("Appearance");
Material Material23 = createNode("Material");
Material23.ambientIntensity = 0;
Material23.diffuseColor = new SFColor(new float[0,0,0]);
Material23.emissiveColor = new SFColor(new float[1,0.842126,0]);
Material23.shininess = 0;
Appearance22.material = Material23;

Shape21.appearance = Appearance22;

Text Text24 = createNode("Text");
Text24.string = new MFString(new java.lang.String["\"BEN HUR\""]);
Text24.length = new MFFloat(new float[0]);
FontStyle FontStyle25 = createNode("FontStyle");
FontStyle25.family = new MFString(new java.lang.String["SANS"]);
FontStyle25.style = "BOLD";
FontStyle25.size = 24;
FontStyle25.justify = new MFString(new java.lang.String["MIDDLE"]);
Text24.fontStyle = FontStyle25;

Shape21.geometry = Text24;

Transform20.child = new undefined();

Transform20.child[0] = Shape21;

Transform13.children[1] = Transform20;

Transform Transform26 = createNode("Transform");
Transform26.DEF = "f";
Transform26.translation = new SFVec3f(new float[-6.29659,2.92385,0.195083]);
Transform26.scale = new SFVec3f(new float[0.0285384,0.0285384,0.0285383]);
Shape Shape27 = createNode("Shape");
Appearance Appearance28 = createNode("Appearance");
Material Material29 = createNode("Material");
Material29.ambientIntensity = 0;
Material29.diffuseColor = new SFColor(new float[0,0,0]);
Material29.emissiveColor = new SFColor(new float[1,1,1]);
Material29.shininess = 0;
Appearance28.material = Material29;

Shape27.appearance = Appearance28;

Text Text30 = createNode("Text");
Text30.string = new MFString(new java.lang.String[", ","Dieser Monumentalfilm lässt bestimmt kein Auge offen., ","Mit 18 Stunden Überlänge ist er der Film mit der grössten Filmrolledie je ein Vorführer einlegen musste... Viel Popcorn kaufen!"]);
Text30.length = new MFFloat(new float[0]);
FontStyle FontStyle31 = createNode("FontStyle");
FontStyle31.family = new MFString(new java.lang.String["SANS"]);
FontStyle31.size = 14;
Text30.fontStyle = FontStyle31;

Shape27.geometry = Text30;

Transform26.child = new undefined();

Transform26.child[0] = Shape27;

Transform13.children[2] = Transform26;

LOD12.children = new MFNode();

LOD12.children[0] = Transform13;

Transform Transform32 = createNode("Transform");
LOD12.children[1] = Transform32;

Transform11.children = new MFNode();

Transform11.children[0] = LOD12;

Transform Transform33 = createNode("Transform");
Transform Transform34 = createNode("Transform");
Transform34.DEF = "filmplakat";
Transform34.scale = new SFVec3f(new float[4.95,4.94926,4.94979]);
Shape Shape35 = createNode("Shape");
Appearance Appearance36 = createNode("Appearance");
ImageTexture ImageTexture37 = createNode("ImageTexture");
ImageTexture37.url = new MFString(new java.lang.String["benhur.jpg"]);
Appearance36.texture = ImageTexture37;

Shape35.appearance = Appearance36;

IndexedFaceSet IndexedFaceSet38 = createNode("IndexedFaceSet");
IndexedFaceSet38.solid = False;
IndexedFaceSet38.coordIndex = new MFInt32(new int[0,1,2,3,-1,4,5,6,7,-1]);
TextureCoordinate TextureCoordinate39 = createNode("TextureCoordinate");
TextureCoordinate39.point = new MFVec2f(new float[0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1]);
IndexedFaceSet38.texCoord = TextureCoordinate39;

Coordinate Coordinate40 = createNode("Coordinate");
Coordinate40.point = new MFVec3f(new float[-0.5,0.337629,0,0.5,0.337629,0,0.5,1.88983,0,-0.5,1.88983,0,-0.5,-0.362414,0,0.5,-0.362414,0,0.5,-1.88649,0,-0.5,-1.88649,0]);
IndexedFaceSet38.coord = Coordinate40;

Shape35.geometry = IndexedFaceSet38;

Transform34.child = new undefined();

Transform34.child[0] = Shape35;

Transform33.children = new MFNode();

Transform33.children[0] = Transform34;

Transform11.children[1] = Transform33;

Collision10.proxy = Transform11;

Anchor9.children = new MFNode();

Anchor9.children[0] = Collision10;

children[1] = Anchor9;

}
