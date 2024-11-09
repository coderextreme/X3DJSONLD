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
meta3.content = "Thu, 23 Apr 2015 06:06:59 GMT";
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
meta6.content = "Thu, 23 Apr 2015 06:06:59 GMT";
head1.meta[4] = meta6;

head = head1;

WorldInfo WorldInfo8 = createNode("WorldInfo");
WorldInfo8.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children = new MFNode();

children[0] = WorldInfo8;

Anchor Anchor9 = createNode("Anchor");
Anchor9.url = new MFString(new java.lang.String["javascript: function tmt_winLaunch(theURL,winName,targetName,features) { eval(winName+\"=window.open('\"+theURL+\"','\"+targetName+\"','\"+features+\"')\") } tmt_winLaunch('html/cinema/clockwork.html', 'cinemaxx','cinemaxx','width=623,height=454,left=0,top=0');"]);
Collision Collision10 = createNode("Collision");
Collision10.enabled = False;
Transform Transform11 = createNode("Transform");
Transform Transform12 = createNode("Transform");
Transform12.DEF = "filmplakat";
Transform12.scale = new SFVec3f(new float[4.95,4.94926,4.94979]);
Shape Shape13 = createNode("Shape");
Appearance Appearance14 = createNode("Appearance");
ImageTexture ImageTexture15 = createNode("ImageTexture");
ImageTexture15.url = new MFString(new java.lang.String["clockwork.jpg"]);
Appearance14.texture = ImageTexture15;

Shape13.appearance = Appearance14;

IndexedFaceSet IndexedFaceSet16 = createNode("IndexedFaceSet");
IndexedFaceSet16.solid = False;
IndexedFaceSet16.coordIndex = new MFInt32(new int[0,1,2,3,-1,4,5,6,7,-1]);
TextureCoordinate TextureCoordinate17 = createNode("TextureCoordinate");
TextureCoordinate17.point = new MFVec2f(new float[0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1]);
IndexedFaceSet16.texCoord = TextureCoordinate17;

Coordinate Coordinate18 = createNode("Coordinate");
Coordinate18.point = new MFVec3f(new float[-0.5,0.337629,0,0.5,0.337629,0,0.5,1.88983,0,-0.5,1.88983,0,-0.5,-0.362414,0,0.5,-0.362414,0,0.5,-1.88649,0,-0.5,-1.88649,0]);
IndexedFaceSet16.coord = Coordinate18;

Shape13.geometry = IndexedFaceSet16;

Transform12.child = new undefined();

Transform12.child[0] = Shape13;

Transform11.children = new MFNode();

Transform11.children[0] = Transform12;

Collision10.proxy = Transform11;

LOD LOD19 = createNode("LOD");
LOD19.range = new MFFloat(new float[12]);
Transform Transform20 = createNode("Transform");
Transform20.translation = new SFVec3f(new float[0,-0.970178,0]);
Transform Transform21 = createNode("Transform");
Transform21.DEF = "b";
Transform21.translation = new SFVec3f(new float[-0.036226,2.95521,-0.941064]);
Transform21.rotation = new SFRotation(new float[1,0,0,1.5708]);
Transform21.scale = new SFVec3f(new float[6.56332,0.999999,1.20494]);
Shape Shape22 = createNode("Shape");
Appearance Appearance23 = createNode("Appearance");
Material Material24 = createNode("Material");
Material24.ambientIntensity = 0;
Material24.diffuseColor = new SFColor(new float[0,0,0]);
Material24.emissiveColor = new SFColor(new float[0.43617,0,0.0460901]);
Material24.shininess = 0;
Material24.transparency = 0.265957;
Appearance23.material = Material24;

Shape22.appearance = Appearance23;

IndexedFaceSet IndexedFaceSet25 = createNode("IndexedFaceSet");
IndexedFaceSet25.creaseAngle = 0.5;
IndexedFaceSet25.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate26 = createNode("Coordinate");
Coordinate26.point = new MFVec3f(new float[-1,1,-1,-1,1,1,1,1,1,1,1,-1]);
IndexedFaceSet25.coord = Coordinate26;

Shape22.geometry = IndexedFaceSet25;

Transform21.child = new undefined();

Transform21.child[0] = Shape22;

Transform20.children = new MFNode();

Transform20.children[0] = Transform21;

Transform Transform27 = createNode("Transform");
Transform27.DEF = "t";
Transform27.translation = new SFVec3f(new float[-0.0362264,3.40265,0.199348]);
Transform27.scale = new SFVec3f(new float[0.0304876,0.0304875,0.0304875]);
Shape Shape28 = createNode("Shape");
Appearance Appearance29 = createNode("Appearance");
Material Material30 = createNode("Material");
Material30.ambientIntensity = 0;
Material30.diffuseColor = new SFColor(new float[0,0,0]);
Material30.emissiveColor = new SFColor(new float[1,0.842126,0]);
Material30.shininess = 0;
Appearance29.material = Material30;

Shape28.appearance = Appearance29;

Text Text31 = createNode("Text");
Text31.string = new MFString(new java.lang.String["\"CLOCKWORK ORANGE\""]);
Text31.length = new MFFloat(new float[0]);
FontStyle FontStyle32 = createNode("FontStyle");
FontStyle32.family = new MFString(new java.lang.String["SANS"]);
FontStyle32.style = "BOLD";
FontStyle32.size = 24;
FontStyle32.justify = new MFString(new java.lang.String["MIDDLE"]);
Text31.fontStyle = FontStyle32;

Shape28.geometry = Text31;

Transform27.child = new undefined();

Transform27.child[0] = Shape28;

Transform20.children[1] = Transform27;

Transform Transform33 = createNode("Transform");
Transform33.DEF = "f";
Transform33.translation = new SFVec3f(new float[-6.29659,2.92385,0.195083]);
Transform33.scale = new SFVec3f(new float[0.0285384,0.0285384,0.0285383]);
Shape Shape34 = createNode("Shape");
Appearance Appearance35 = createNode("Appearance");
Material Material36 = createNode("Material");
Material36.ambientIntensity = 0;
Material36.diffuseColor = new SFColor(new float[0,0,0]);
Material36.emissiveColor = new SFColor(new float[1,1,1]);
Material36.shininess = 0;
Appearance35.material = Material36;

Shape34.appearance = Appearance35;

Text Text37 = createNode("Text");
Text37.string = new MFString(new java.lang.String["Die gefühlvolle Verfilmung des Frank-Sinatra-Hits \"," "I'm Singing In TheRain\"," "- Tanzen mit Fremden leichtgemacht...Kinostart: Herbst"]);
Text37.length = new MFFloat(new float[0]);
FontStyle FontStyle38 = createNode("FontStyle");
FontStyle38.family = new MFString(new java.lang.String["SANS"]);
FontStyle38.size = 14;
Text37.fontStyle = FontStyle38;

Shape34.geometry = Text37;

Transform33.child = new undefined();

Transform33.child[0] = Shape34;

Transform20.children[2] = Transform33;

LOD19.children = new MFNode();

LOD19.children[0] = Transform20;

Transform Transform39 = createNode("Transform");
LOD19.children[1] = Transform39;

Collision10.proxy = LOD19;

Anchor9.children = new MFNode();

Anchor9.children[0] = Collision10;

children[1] = Anchor9;

}
