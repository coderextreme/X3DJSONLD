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
Transform9.DEF = "info";
Transform9.translation = new SFVec3f(new float[-0.0641994,0,0]);
Transform Transform10 = createNode("Transform");
Transform10.DEF = "link";
Anchor Anchor11 = createNode("Anchor");
Anchor11.description = "Klicken Sie hier fr eine Reservierung.";
Anchor11.url = new MFString(new java.lang.String["javascript: function tmt_winLaunch(theURL,winName,targetName,features) { eval(winName+\"=window.open('\"+theURL+\"','\"+targetName+\"','\"+features+\"')\") } tmt_winLaunch('/3D/html/mbenz/placeholder.html', 'place','place','resizable=yes,width=623,height=454,left=0,top=0');"]);
Transform Transform12 = createNode("Transform");
Anchor11.children = new MFNode();

Anchor11.children[0] = Transform12;

Transform Transform13 = createNode("Transform");
Transform13.translation = new SFVec3f(new float[14.9304,1.44228,-4.53928]);
Transform13.rotation = new SFRotation(new float[0,1,0,4.71239]);
Transform13.scale = new SFVec3f(new float[1.15231,0.684961,0.863441]);
Shape Shape14 = createNode("Shape");
Appearance Appearance15 = createNode("Appearance");
ImageTexture ImageTexture16 = createNode("ImageTexture");
ImageTexture16.DEF = "_1";
ImageTexture16.url = new MFString(new java.lang.String["reflect1.png"]);
Appearance15.texture = ImageTexture16;

Shape14.appearance = Appearance15;

IndexedFaceSet IndexedFaceSet17 = createNode("IndexedFaceSet");
IndexedFaceSet17.texCoordIndex = new MFInt32(new int[4,2,3,5,-1,0,1,6,7,-1,8,9,10,11,-1]);
IndexedFaceSet17.coordIndex = new MFInt32(new int[4,2,3,5,-1,0,1,6,7,-1,6,4,5,7,-1]);
TextureCoordinate TextureCoordinate18 = createNode("TextureCoordinate");
TextureCoordinate18.point = new MFVec2f(new float[0,0,1,0,1,1,0,1,1,0.5,0,0.5,1,0.25,0,0.25,0.271287,0.0518155,0.271287,0.418541,0.0469032,0.418541,0.0469032,0.0518155]);
IndexedFaceSet17.texCoord = TextureCoordinate18;

Coordinate Coordinate19 = createNode("Coordinate");
Coordinate19.point = new MFVec3f(new float[-2,-0.487787,0,2,-0.487787,0,2,0.575824,0,-2,0.575824,0,2,0.480384,0,-2,0.480384,0,2,-0.390195,0,-2,-0.390195,0]);
IndexedFaceSet17.coord = Coordinate19;

Shape14.geometry = IndexedFaceSet17;

Transform13.child = new undefined();

Transform13.child[0] = Shape14;

Anchor11.children[1] = Transform13;

Transform Transform20 = createNode("Transform");
Transform20.translation = new SFVec3f(new float[14.8995,1.3026,-6.67413]);
Transform20.rotation = new SFRotation(new float[0,1,0,4.71239]);
Transform20.scale = new SFVec3f(new float[0.0311052,0.0311052,0.0311052]);
Shape Shape21 = createNode("Shape");
Appearance Appearance22 = createNode("Appearance");
Material Material23 = createNode("Material");
Material23.DEF = "_2";
Material23.ambientIntensity = 0;
Material23.diffuseColor = new SFColor(new float[0,0,0]);
Material23.emissiveColor = new SFColor(new float[0.0105023,0,0.255319]);
Appearance22.material = Material23;

Shape21.appearance = Appearance22;

Text Text24 = createNode("Text");
Text24.string = new MFString(new java.lang.String[", ","Jetzt reservieren! "]);
Text24.length = new MFFloat(new float[0]);
FontStyle FontStyle25 = createNode("FontStyle");
FontStyle25.family = new MFString(new java.lang.String["SANS"]);
FontStyle25.size = 18;
Text24.fontStyle = FontStyle25;

Shape21.geometry = Text24;

Transform20.child = new undefined();

Transform20.child[0] = Shape21;

Anchor11.children[2] = Transform20;

Transform10.children = new MFNode();

Transform10.children[0] = Anchor11;

Transform9.children = new MFNode();

Transform9.children[0] = Transform10;

Transform Transform26 = createNode("Transform");
Transform26.DEF = "reservier";
Transform Transform27 = createNode("Transform");
Transform27.translation = new SFVec3f(new float[14.9236,2.66827,-5.48662]);
Transform27.rotation = new SFRotation(new float[0,-1,0,1.5708]);
Transform27.scale = new SFVec3f(new float[0.0341302,0.0341301,0.0341303]);
Shape Shape28 = createNode("Shape");
Appearance Appearance29 = createNode("Appearance");
Material Material30 = createNode("Material");
Material30.USE = "_2";
Appearance29.material = Material30;

Shape28.appearance = Appearance29;

Text Text31 = createNode("Text");
Text31.string = new MFString(new java.lang.String[", ","Mercedes-Benz lädt Sie, ","zu einer Probefahrt ein! "]);
Text31.length = new MFFloat(new float[0]);
FontStyle FontStyle32 = createNode("FontStyle");
FontStyle32.family = new MFString(new java.lang.String["SANS"]);
FontStyle32.size = 14;
FontStyle32.justify = new MFString(new java.lang.String["MIDDLE"]);
Text31.fontStyle = FontStyle32;

Shape28.geometry = Text31;

Transform27.child = new undefined();

Transform27.child[0] = Shape28;

Transform26.children = new MFNode();

Transform26.children[0] = Transform27;

Transform9.children[1] = Transform26;

Transform Transform33 = createNode("Transform");
Transform33.DEF = "slogan";
Transform33.translation = new SFVec3f(new float[14.9259,3.48694,-7.03026]);
Transform33.rotation = new SFRotation(new float[0,-1,0,1.5708]);
Transform33.scale = new SFVec3f(new float[0.0311052,0.0311052,0.0311052]);
Shape Shape34 = createNode("Shape");
Appearance Appearance35 = createNode("Appearance");
Material Material36 = createNode("Material");
Material36.USE = "_2";
Appearance35.material = Material36;

Shape34.appearance = Appearance35;

Text Text37 = createNode("Text");
Text37.string = new MFString(new java.lang.String["neues Design, neue Ausstattung, mehr Spaß"]);
Text37.length = new MFFloat(new float[0]);
FontStyle FontStyle38 = createNode("FontStyle");
FontStyle38.family = new MFString(new java.lang.String["SANS"]);
FontStyle38.size = 18;
Text37.fontStyle = FontStyle38;

Shape34.geometry = Text37;

Transform33.child = new undefined();

Transform33.child[0] = Shape34;

Transform9.children[2] = Transform33;

Transform Transform39 = createNode("Transform");
Transform39.DEF = "title";
Transform39.translation = new SFVec3f(new float[14.9259,4.16814,-8.31291]);
Transform39.rotation = new SFRotation(new float[0,-1,0,1.5708]);
Transform39.scale = new SFVec3f(new float[0.0311052,0.0311052,0.0311052]);
Shape Shape40 = createNode("Shape");
Appearance Appearance41 = createNode("Appearance");
Material Material42 = createNode("Material");
Material42.USE = "_2";
Appearance41.material = Material42;

Shape40.appearance = Appearance41;

Text Text43 = createNode("Text");
Text43.string = new MFString(new java.lang.String["Die neue A-Klasse ist da!"]);
Text43.length = new MFFloat(new float[0]);
FontStyle FontStyle44 = createNode("FontStyle");
FontStyle44.family = new MFString(new java.lang.String["SANS"]);
FontStyle44.size = 24;
Text43.fontStyle = FontStyle44;

Shape40.geometry = Text43;

Transform39.child = new undefined();

Transform39.child[0] = Shape40;

Transform9.children[3] = Transform39;

Transform Transform45 = createNode("Transform");
Transform45.translation = new SFVec3f(new float[14.9304,4.4196,-3.98687]);
Transform45.rotation = new SFRotation(new float[0,1,0,4.71239]);
Transform45.scale = new SFVec3f(new float[2.29482,0.793292,1]);
Shape Shape46 = createNode("Shape");
Appearance Appearance47 = createNode("Appearance");
ImageTexture ImageTexture48 = createNode("ImageTexture");
ImageTexture48.USE = "_1";
Appearance47.texture = ImageTexture48;

Shape46.appearance = Appearance47;

IndexedFaceSet IndexedFaceSet49 = createNode("IndexedFaceSet");
IndexedFaceSet49.texCoordIndex = new MFInt32(new int[4,2,3,5,-1,0,1,6,7,-1,8,9,10,11,-1]);
IndexedFaceSet49.coordIndex = new MFInt32(new int[4,2,3,5,-1,0,1,6,7,-1,6,4,5,7,-1]);
TextureCoordinate TextureCoordinate50 = createNode("TextureCoordinate");
TextureCoordinate50.point = new MFVec2f(new float[0,0,1,0,1,1,0,1,1,0.5,0,0.5,1,0.25,0,0.25,0.271287,0.0518155,0.271287,0.418541,0.0469032,0.418541,0.0469032,0.0518155]);
IndexedFaceSet49.texCoord = TextureCoordinate50;

Coordinate Coordinate51 = createNode("Coordinate");
Coordinate51.point = new MFVec3f(new float[-2,-0.487787,0,2,-0.487787,0,2,0.575824,0,-2,0.575824,0,2,0.480384,0,-2,0.480384,0,2,-0.390195,0,-2,-0.390195,0]);
IndexedFaceSet49.coord = Coordinate51;

Shape46.geometry = IndexedFaceSet49;

Transform45.child = new undefined();

Transform45.child[0] = Shape46;

Transform9.children[4] = Transform45;

children[1] = Transform9;

}
