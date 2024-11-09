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
meta3.content = "Thu, 23 Apr 2015 06:07:01 GMT";
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
meta6.content = "Thu, 23 Apr 2015 06:07:01 GMT";
head1.meta[4] = meta6;

head = head1;

WorldInfo WorldInfo8 = createNode("WorldInfo");
WorldInfo8.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children = new MFNode();

children[0] = WorldInfo8;

Anchor Anchor9 = createNode("Anchor");
Anchor9.url = new MFString(new java.lang.String["javascript: function tmt_winLaunch(theURL,winName,targetName,features) { eval(winName+\"=window.open('\"+theURL+\"','\"+targetName+\"','\"+features+\"')\") } tmt_winLaunch('html/cinema/dracula.html', 'cinemaxx','cinemaxx','width=623,height=454,left=0,top=0');"]);
Collision Collision10 = createNode("Collision");
Collision10.enabled = False;
Transform Transform11 = createNode("Transform");
Transform Transform12 = createNode("Transform");
Transform Transform13 = createNode("Transform");
Transform13.DEF = "filmplakat";
Transform13.scale = new SFVec3f(new float[4.95,4.94926,4.94979]);
Shape Shape14 = createNode("Shape");
Appearance Appearance15 = createNode("Appearance");
ImageTexture ImageTexture16 = createNode("ImageTexture");
ImageTexture16.url = new MFString(new java.lang.String["dracula.jpg"]);
Appearance15.texture = ImageTexture16;

Shape14.appearance = Appearance15;

IndexedFaceSet IndexedFaceSet17 = createNode("IndexedFaceSet");
IndexedFaceSet17.solid = False;
IndexedFaceSet17.coordIndex = new MFInt32(new int[0,1,2,3,-1,4,5,6,7,-1]);
TextureCoordinate TextureCoordinate18 = createNode("TextureCoordinate");
TextureCoordinate18.point = new MFVec2f(new float[0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1]);
IndexedFaceSet17.texCoord = TextureCoordinate18;

Coordinate Coordinate19 = createNode("Coordinate");
Coordinate19.point = new MFVec3f(new float[-0.5,0.337629,0,0.5,0.337629,0,0.5,1.88983,0,-0.5,1.88983,0,-0.5,-0.362414,0,0.5,-0.362414,0,0.5,-1.88649,0,-0.5,-1.88649,0]);
IndexedFaceSet17.coord = Coordinate19;

Shape14.geometry = IndexedFaceSet17;

Transform13.child = new undefined();

Transform13.child[0] = Shape14;

Transform12.children = new MFNode();

Transform12.children[0] = Transform13;

Transform11.children = new MFNode();

Transform11.children[0] = Transform12;

LOD LOD20 = createNode("LOD");
LOD20.range = new MFFloat(new float[12]);
Transform Transform21 = createNode("Transform");
Transform21.translation = new SFVec3f(new float[0,-0.970178,0]);
Transform Transform22 = createNode("Transform");
Transform22.DEF = "b";
Transform22.translation = new SFVec3f(new float[-0.036226,2.95521,-0.941064]);
Transform22.rotation = new SFRotation(new float[1,0,0,1.5708]);
Transform22.scale = new SFVec3f(new float[6.56332,0.999999,1.20494]);
Shape Shape23 = createNode("Shape");
Appearance Appearance24 = createNode("Appearance");
Material Material25 = createNode("Material");
Material25.ambientIntensity = 0;
Material25.diffuseColor = new SFColor(new float[0,0,0]);
Material25.emissiveColor = new SFColor(new float[0.43617,0,0.0460901]);
Material25.shininess = 0;
Material25.transparency = 0.265957;
Appearance24.material = Material25;

Shape23.appearance = Appearance24;

IndexedFaceSet IndexedFaceSet26 = createNode("IndexedFaceSet");
IndexedFaceSet26.creaseAngle = 0.5;
IndexedFaceSet26.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate27 = createNode("Coordinate");
Coordinate27.point = new MFVec3f(new float[-1,1,-1,-1,1,1,1,1,1,1,1,-1]);
IndexedFaceSet26.coord = Coordinate27;

Shape23.geometry = IndexedFaceSet26;

Transform22.child = new undefined();

Transform22.child[0] = Shape23;

Transform21.children = new MFNode();

Transform21.children[0] = Transform22;

Transform Transform28 = createNode("Transform");
Transform28.DEF = "t";
Transform28.translation = new SFVec3f(new float[-0.0362265,3.40828,0.199348]);
Transform28.scale = new SFVec3f(new float[0.0298343,0.0298342,0.0298342]);
Shape Shape29 = createNode("Shape");
Appearance Appearance30 = createNode("Appearance");
Material Material31 = createNode("Material");
Material31.ambientIntensity = 0;
Material31.diffuseColor = new SFColor(new float[0,0,0]);
Material31.emissiveColor = new SFColor(new float[1,0.842126,0]);
Material31.shininess = 0;
Appearance30.material = Material31;

Shape29.appearance = Appearance30;

Text Text32 = createNode("Text");
Text32.string = new MFString(new java.lang.String["\"DRACULA\""]);
Text32.length = new MFFloat(new float[0]);
FontStyle FontStyle33 = createNode("FontStyle");
FontStyle33.family = new MFString(new java.lang.String["SANS"]);
FontStyle33.style = "BOLD";
FontStyle33.size = 24;
FontStyle33.justify = new MFString(new java.lang.String["MIDDLE"]);
Text32.fontStyle = FontStyle33;

Shape29.geometry = Text32;

Transform28.child = new undefined();

Transform28.child[0] = Shape29;

Transform21.children[1] = Transform28;

Transform Transform34 = createNode("Transform");
Transform34.DEF = "f";
Transform34.translation = new SFVec3f(new float[-6.29659,2.92385,0.195083]);
Transform34.scale = new SFVec3f(new float[0.0285384,0.0285384,0.0285383]);
Shape Shape35 = createNode("Shape");
Appearance Appearance36 = createNode("Appearance");
Material Material37 = createNode("Material");
Material37.ambientIntensity = 0;
Material37.diffuseColor = new SFColor(new float[0,0,0]);
Material37.emissiveColor = new SFColor(new float[1,1,1]);
Material37.shininess = 0;
Appearance36.material = Material37;

Shape35.appearance = Appearance36;

Text Text38 = createNode("Text");
Text38.string = new MFString(new java.lang.String[", ","Der alte Blutsauger hat ein Problem: Seine Zähne sind stumpf und es, ","gibt keinen Zahnarzt der um Mitternacht noch arbeitet. In der Notauf-nahme der Klinik gibt es zwar lecker Blut, aber dort ist es zu hell..."]);
Text38.length = new MFFloat(new float[0]);
FontStyle FontStyle39 = createNode("FontStyle");
FontStyle39.family = new MFString(new java.lang.String["SANS"]);
FontStyle39.size = 14;
Text38.fontStyle = FontStyle39;

Shape35.geometry = Text38;

Transform34.child = new undefined();

Transform34.child[0] = Shape35;

Transform21.children[2] = Transform34;

LOD20.children = new MFNode();

LOD20.children[0] = Transform21;

Transform Transform40 = createNode("Transform");
LOD20.children[1] = Transform40;

Transform11.children[1] = LOD20;

Collision10.proxy = Transform11;

Anchor9.children = new MFNode();

Anchor9.children[0] = Collision10;

children[1] = Anchor9;

}
