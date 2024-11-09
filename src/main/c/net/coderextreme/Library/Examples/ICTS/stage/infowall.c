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
meta3.content = "Thu, 23 Apr 2015 06:07:08 GMT";
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
meta6.content = "Thu, 23 Apr 2015 06:07:08 GMT";
head1.meta[4] = meta6;

head = head1;

WorldInfo WorldInfo8 = createNode("WorldInfo");
WorldInfo8.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children = new MFNode();

children[0] = WorldInfo8;

Transform Transform9 = createNode("Transform");
Transform9.translation = new SFVec3f(new float[0,-0.13131,-4.24642]);
Anchor Anchor10 = createNode("Anchor");
Anchor10.description = "Klicken Sie hier fr mehr Informationen.";
Anchor10.url = new MFString(new java.lang.String["javascript: function tmt_winLaunch(theURL,winName,targetName,features) { eval(winName+\"=window.open('\"+theURL+\"','\"+targetName+\"','\"+features+\"')\") } tmt_winLaunch('/3D/html/mbenz/placeholder.html', 'place','place','resizable=yes,width=623,height=454,left=0,top=0');"]);
Transform Transform11 = createNode("Transform");
Transform11.translation = new SFVec3f(new float[0,0,4.24642]);
Transform Transform12 = createNode("Transform");
Transform12.translation = new SFVec3f(new float[0.849871,1.24305,0.438164]);
Transform12.rotation = new SFRotation(new float[0,1,0,4.40104]);
Transform12.scale = new SFVec3f(new float[0.0166332,0.0166332,0.0166331]);
Transform12.scaleOrientation = new SFRotation(new float[0,-1,0,0.0475829]);
Shape Shape13 = createNode("Shape");
Appearance Appearance14 = createNode("Appearance");
Material Material15 = createNode("Material");
Material15.ambientIntensity = 0;
Material15.diffuseColor = new SFColor(new float[0,0,0]);
Material15.emissiveColor = new SFColor(new float[0.0105023,0,0.255319]);
Appearance14.material = Material15;

Shape13.appearance = Appearance14;

Text Text16 = createNode("Text");
Text16.string = new MFString(new java.lang.String["Klicken Sie hier für mehr Informationen"]);
Text16.length = new MFFloat(new float[0]);
FontStyle FontStyle17 = createNode("FontStyle");
FontStyle17.family = new MFString(new java.lang.String["SANS"]);
FontStyle17.size = 14;
FontStyle17.justify = new MFString(new java.lang.String["MIDDLE"]);
Text16.fontStyle = FontStyle17;

Shape13.geometry = Text16;

Transform12.child = new undefined();

Transform12.child[0] = Shape13;

Transform11.children = new MFNode();

Transform11.children[0] = Transform12;

Transform Transform18 = createNode("Transform");
Transform18.translation = new SFVec3f(new float[0.87594,1.32607,0.433684]);
Transform18.rotation = new SFRotation(new float[0,1,0,4.40105]);
Transform18.scale = new SFVec3f(new float[1.04406,0.312523,0.572791]);
Shape Shape19 = createNode("Shape");
Appearance Appearance20 = createNode("Appearance");
ImageTexture ImageTexture21 = createNode("ImageTexture");
ImageTexture21.DEF = "_1";
ImageTexture21.url = new MFString(new java.lang.String["reflect1.png"]);
Appearance20.texture = ImageTexture21;

Shape19.appearance = Appearance20;

IndexedFaceSet IndexedFaceSet22 = createNode("IndexedFaceSet");
IndexedFaceSet22.texCoordIndex = new MFInt32(new int[8,2,3,9,-1,0,1,10,11,-1,6,4,5,7,-1]);
IndexedFaceSet22.coordIndex = new MFInt32(new int[4,2,3,5,-1,0,1,6,7,-1,6,4,5,7,-1]);
TextureCoordinate TextureCoordinate23 = createNode("TextureCoordinate");
TextureCoordinate23.point = new MFVec2f(new float[0,0,0.817739,0.049106,0.806606,0.16361,-0.0111324,0.114504,0.285304,0.614504,0.047491,0.614504,0.275742,0.535128,0.0379284,0.535128,0.817739,0.049106,0,0,0.799982,0.181014,-0.0177568,0.131908]);
IndexedFaceSet22.texCoord = TextureCoordinate23;

Coordinate Coordinate24 = createNode("Coordinate");
Coordinate24.point = new MFVec3f(new float[-2,-0.590364,0,2,-0.590364,0,2,0.5,0,-2,0.5,0,2,0.405434,0,-2,0.405434,0,2,-0.475578,0,-2,-0.475578,0]);
IndexedFaceSet22.coord = Coordinate24;

Shape19.geometry = IndexedFaceSet22;

Transform18.child = new undefined();

Transform18.child[0] = Shape19;

Transform11.children[1] = Transform18;

Anchor10.children = new MFNode();

Anchor10.children[0] = Transform11;

Transform9.children = new MFNode();

Transform9.children[0] = Anchor10;

children[1] = Transform9;

Transform Transform25 = createNode("Transform");
Transform25.translation = new SFVec3f(new float[0.680146,3.24833,0.131503]);
Transform25.rotation = new SFRotation(new float[0,1,0,4.40104]);
Transform25.scale = new SFVec3f(new float[0.0166332,0.0166332,0.0166331]);
Transform25.scaleOrientation = new SFRotation(new float[0,-1,0,0.0411904]);
Shape Shape26 = createNode("Shape");
Appearance Appearance27 = createNode("Appearance");
Material Material28 = createNode("Material");
Material28.ambientIntensity = 0;
Material28.diffuseColor = new SFColor(new float[0,0,0]);
Material28.emissiveColor = new SFColor(new float[0.0105023,0,0.255319]);
Appearance27.material = Material28;

Shape26.appearance = Appearance27;

Text Text29 = createNode("Text");
Text29.string = new MFString(new java.lang.String["Wir zeigen Ihnen, wo es langgeht!"]);
Text29.length = new MFFloat(new float[0]);
FontStyle FontStyle30 = createNode("FontStyle");
FontStyle30.family = new MFString(new java.lang.String["SANS"]);
FontStyle30.size = 24;
FontStyle30.justify = new MFString(new java.lang.String["MIDDLE"]);
Text29.fontStyle = FontStyle30;

Shape26.geometry = Text29;

Transform25.child = new undefined();

Transform25.child[0] = Shape26;

children[2] = Transform25;

Transform Transform31 = createNode("Transform");
Transform31.translation = new SFVec3f(new float[1.62071,1.56621,-2.5691]);
Transform31.rotation = new SFRotation(new float[0,-1,0,1.43136]);
Transform31.scale = new SFVec3f(new float[1.83524,1.83524,1.83524]);
Shape Shape32 = createNode("Shape");
Appearance Appearance33 = createNode("Appearance");
ImageTexture ImageTexture34 = createNode("ImageTexture");
ImageTexture34.url = new MFString(new java.lang.String["nposter7.jpg"]);
Appearance33.texture = ImageTexture34;

TextureTransform TextureTransform35 = createNode("TextureTransform");
Appearance33.textureTransform = TextureTransform35;

Shape32.appearance = Appearance33;

IndexedFaceSet IndexedFaceSet36 = createNode("IndexedFaceSet");
IndexedFaceSet36.coordIndex = new MFInt32(new int[3,2,1,0,-1,4,5,6,7,-1]);
TextureCoordinate TextureCoordinate37 = createNode("TextureCoordinate");
TextureCoordinate37.point = new MFVec2f(new float[0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1]);
IndexedFaceSet36.texCoord = TextureCoordinate37;

Coordinate Coordinate38 = createNode("Coordinate");
Coordinate38.point = new MFVec3f(new float[-0.5,-1.21971,0,0.5,-1.21971,0,0.5,-2.19099,0,-0.5,-2.19099,0,-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0]);
IndexedFaceSet36.coord = Coordinate38;

Shape32.geometry = IndexedFaceSet36;

Transform31.child = new undefined();

Transform31.child[0] = Shape32;

children[3] = Transform31;

Transform Transform39 = createNode("Transform");
Transform39.DEF = "gpswall";
Transform39.translation = new SFVec3f(new float[-4.9369,0.156386,-4.67969]);
Transform39.scale = new SFVec3f(new float[0.365073,0.310739,0.365073]);
Shape Shape40 = createNode("Shape");
Appearance Appearance41 = createNode("Appearance");
ImageTexture ImageTexture42 = createNode("ImageTexture");
ImageTexture42.DEF = "_2";
ImageTexture42.url = new MFString(new java.lang.String["reflect1.png"]);
Appearance41.texture = ImageTexture42;

Shape40.appearance = Appearance41;

IndexedFaceSet IndexedFaceSet43 = createNode("IndexedFaceSet");
IndexedFaceSet43.solid = False;
IndexedFaceSet43.convex = False;
IndexedFaceSet43.creaseAngle = 1.09275;
IndexedFaceSet43.colorIndex = new MFInt32(new int[2,0,0,4,-1,5,0,0,7,-1,8,1,0,6,-1,3,0,1,9,-1,0,0,10,12,-1,10,5,7,12,-1,0,0,13,14,-1,13,2,4,14,-1,0,1,16,11,-1,16,8,6,11,-1,1,0,15,17,-1,15,3,9,17,-1]);
IndexedFaceSet43.texCoordIndex = new MFInt32(new int[10,9,7,11,-1,12,2,3,13,-1,14,5,2,12,-1,11,7,5,14,-1,0,1,15,16,-1,26,27,28,29,-1,6,8,17,18,-1,20,21,23,22,-1,1,4,19,15,-1,24,25,27,26,-1,4,6,18,19,-1,22,23,25,24,-1]);
IndexedFaceSet43.coordIndex = new MFInt32(new int[10,9,7,11,-1,12,2,3,13,-1,14,5,2,12,-1,11,7,5,14,-1,0,1,15,16,-1,15,12,13,16,-1,6,8,17,18,-1,17,10,11,18,-1,1,4,19,15,-1,19,14,12,15,-1,4,6,18,19,-1,18,11,14,19,-1]);
Color Color44 = createNode("Color");
Color44.color = new MFColor(new float[0.648936,0.634597,0.645351,1,1,1,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,1,1,1,1,1,1,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,1,1,1,1,1,1]);
IndexedFaceSet43.color = Color44;

TextureCoordinate TextureCoordinate45 = createNode("TextureCoordinate");
TextureCoordinate45.point = new MFVec2f(new float[0,0,0.380598,0.0899431,-0.535154,3.96498,-0.915752,3.87504,0.860324,0.203312,-0.0554278,4.07835,1.39199,0.328955,0.476236,4.204,1.92365,0.454598,1.0079,4.32964,1.03128,4.23073,0.499611,4.10508,-0.511779,3.86607,-0.892376,3.77613,-0.0320526,3.97944,0.353306,0.205428,-0.0272913,0.115484,1.89636,0.570083,1.3647,0.44444,0.833032,0.318797,-0.0707566,0.175867,-0.12258,0.645321,-0.122945,0.169169,-0.174768,0.638623,-0.175133,0.162471,-0.226956,0.631925,-0.222223,0.156428,-0.274046,0.625881,-0.311406,0.621087,-0.259583,0.151633]);
IndexedFaceSet43.texCoord = TextureCoordinate45;

Coordinate Coordinate46 = createNode("Coordinate");
Coordinate46.point = new MFVec3f(new float[10.866,0.03,23.152,14.955,0.03,19.063,14.955,10.438,19.063,10.866,10.438,23.152,17.581,0.03,13.909,17.581,10.438,13.909,18.486,0.03,8.197,18.486,10.438,8.197,17.581,0.03,2.485,17.581,10.438,2.485,17.581,10.1723,2.485,18.486,10.1723,8.197,14.955,10.1723,19.063,10.866,10.1723,23.152,17.581,10.1723,13.909,14.955,0.340181,19.063,10.866,0.34018,23.152,17.581,0.340181,2.485,18.486,0.34018,8.197,17.581,0.340181,13.909]);
IndexedFaceSet43.coord = Coordinate46;

Shape40.geometry = IndexedFaceSet43;

Transform39.child = new undefined();

Transform39.child[0] = Shape40;

children[4] = Transform39;

Transform Transform47 = createNode("Transform");
Transform47.translation = new SFVec3f(new float[-4.9369,0.156386,-4.67969]);
Transform47.scale = new SFVec3f(new float[0.365073,0.310739,0.365073]);
Shape Shape48 = createNode("Shape");
Appearance Appearance49 = createNode("Appearance");
ImageTexture ImageTexture50 = createNode("ImageTexture");
ImageTexture50.USE = "_2";
Appearance49.texture = ImageTexture50;

Shape48.appearance = Appearance49;

IndexedFaceSet IndexedFaceSet51 = createNode("IndexedFaceSet");
IndexedFaceSet51.solid = False;
IndexedFaceSet51.convex = False;
IndexedFaceSet51.creaseAngle = 1.09275;
IndexedFaceSet51.colorIndex = new MFInt32(new int[4,0,0,2,-1,7,0,0,5,-1,6,0,1,8,-1,9,1,0,3,-1,12,10,0,0,-1,12,7,5,10,-1,14,13,0,0,-1,14,4,2,13,-1,11,16,1,0,-1,11,6,8,16,-1,17,15,0,1,-1,17,9,3,15,-1]);
IndexedFaceSet51.texCoordIndex = new MFInt32(new int[11,7,9,10,-1,13,3,2,12,-1,12,2,5,14,-1,14,5,7,11,-1,16,15,1,0,-1,29,28,27,26,-1,18,17,8,6,-1,22,23,21,20,-1,15,19,4,1,-1,26,27,25,24,-1,19,18,6,4,-1,24,25,23,22,-1]);
IndexedFaceSet51.coordIndex = new MFInt32(new int[11,7,9,10,-1,13,3,2,12,-1,12,2,5,14,-1,14,5,7,11,-1,16,15,1,0,-1,16,13,12,15,-1,18,17,8,6,-1,18,11,10,17,-1,15,19,4,1,-1,15,12,14,19,-1,19,18,6,4,-1,19,14,11,18,-1]);
Color Color52 = createNode("Color");
Color52.color = new MFColor(new float[0.648936,0.634597,0.645351,1,1,1,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,1,1,1,1,1,1,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,1,1,1,1,1,1]);
IndexedFaceSet51.color = Color52;

TextureCoordinate TextureCoordinate53 = createNode("TextureCoordinate");
TextureCoordinate53.point = new MFVec2f(new float[0,0,0.380598,0.0899431,-0.535154,3.96498,-0.915752,3.87504,0.860324,0.203312,-0.0554278,4.07835,1.39199,0.328955,0.476236,4.204,1.92365,0.454598,1.0079,4.32964,1.03128,4.23073,0.499611,4.10508,-0.511779,3.86607,-0.892376,3.77613,-0.0320526,3.97944,0.353306,0.205428,-0.0272913,0.115484,1.89636,0.570083,1.3647,0.44444,0.833032,0.318797,-0.0707566,0.175867,-0.12258,0.645321,-0.122945,0.169169,-0.174768,0.638623,-0.175133,0.162471,-0.226956,0.631925,-0.222223,0.156428,-0.274046,0.625881,-0.311406,0.621087,-0.259583,0.151633]);
IndexedFaceSet51.texCoord = TextureCoordinate53;

Coordinate Coordinate54 = createNode("Coordinate");
Coordinate54.point = new MFVec3f(new float[10.866,-1.09944,23.152,14.955,-1.09944,19.063,14.955,-11.5074,19.063,10.866,-11.5074,23.152,17.581,-1.09944,13.909,17.581,-11.5074,13.909,18.486,-1.09944,8.197,18.486,-11.5074,8.197,17.581,-1.09944,2.485,17.581,-11.5074,2.485,17.581,-11.2417,2.485,18.486,-11.2417,8.197,14.955,-11.2417,19.063,10.866,-11.2417,23.152,17.581,-11.2417,13.909,14.955,-1.40962,19.063,10.866,-1.40962,23.152,17.581,-1.40962,2.485,18.486,-1.40962,8.197,17.581,-1.40962,13.909]);
IndexedFaceSet51.coord = Coordinate54;

Shape48.geometry = IndexedFaceSet51;

Transform47.child = new undefined();

Transform47.child[0] = Shape48;

children[5] = Transform47;

Transform Transform55 = createNode("Transform");
Transform55.translation = new SFVec3f(new float[0.70189,3.3865,0.136921]);
Transform55.rotation = new SFRotation(new float[0,1,0,4.40105]);
Transform55.scale = new SFVec3f(new float[1.56978,0.545617,1]);
Shape Shape56 = createNode("Shape");
Appearance Appearance57 = createNode("Appearance");
ImageTexture ImageTexture58 = createNode("ImageTexture");
ImageTexture58.USE = "_1";
Appearance57.texture = ImageTexture58;

Shape56.appearance = Appearance57;

IndexedFaceSet IndexedFaceSet59 = createNode("IndexedFaceSet");
IndexedFaceSet59.solid = False;
IndexedFaceSet59.texCoordIndex = new MFInt32(new int[8,2,3,9,-1,0,1,10,11,-1,6,4,5,7,-1]);
IndexedFaceSet59.coordIndex = new MFInt32(new int[4,2,3,5,-1,0,1,6,7,-1,6,4,5,7,-1]);
TextureCoordinate TextureCoordinate60 = createNode("TextureCoordinate");
TextureCoordinate60.point = new MFVec2f(new float[0,0,0.817739,0.049106,0.806606,0.16361,-0.0111324,0.114504,0.285304,0.614504,0.047491,0.614504,0.275742,0.535128,0.0379284,0.535128,0.817739,0.049106,0,0,0.799982,0.181014,-0.0177568,0.131908]);
IndexedFaceSet59.texCoord = TextureCoordinate60;

Coordinate Coordinate61 = createNode("Coordinate");
Coordinate61.point = new MFVec3f(new float[-2,-0.590364,0,2,-0.590364,0,2,0.5,0,-2,0.5,0,2,0.405434,0,-2,0.405434,0,2,-0.475578,0,-2,-0.475578,0]);
IndexedFaceSet59.coord = Coordinate61;

Shape56.geometry = IndexedFaceSet59;

Transform55.child = new undefined();

Transform55.child[0] = Shape56;

children[6] = Transform55;

Transform Transform62 = createNode("Transform");
Transform62.translation = new SFVec3f(new float[0.857668,2.29135,0.413938]);
Transform62.rotation = new SFRotation(new float[0,1,0,4.40104]);
Transform62.scale = new SFVec3f(new float[0.0166332,0.0166332,0.0166331]);
Transform62.scaleOrientation = new SFRotation(new float[0,-1,0,0.0512221]);
Shape Shape63 = createNode("Shape");
Appearance Appearance64 = createNode("Appearance");
Material Material65 = createNode("Material");
Material65.ambientIntensity = 0;
Material65.diffuseColor = new SFColor(new float[0,0,0]);
Material65.emissiveColor = new SFColor(new float[0.0105023,0,0.255319]);
Appearance64.material = Material65;

Shape63.appearance = Appearance64;

Text Text66 = createNode("Text");
Text66.string = new MFString(new java.lang.String[", ","Sicher ans Ziel mit Fahrzeugen von, ","Mercedes-Benz., ","Den besten Weg dorthin finden Siemit Hilfe unseres neuen GPS-Systems."]);
Text66.length = new MFFloat(new float[0]);
FontStyle FontStyle67 = createNode("FontStyle");
FontStyle67.family = new MFString(new java.lang.String["SANS"]);
FontStyle67.size = 14;
FontStyle67.justify = new MFString(new java.lang.String["MIDDLE"]);
Text66.fontStyle = FontStyle67;

Shape63.geometry = Text66;

Transform62.child = new undefined();

Transform62.child[0] = Shape63;

children[7] = Transform62;

Transform Transform68 = createNode("Transform");
Transform68.translation = new SFVec3f(new float[0.538423,-4.54485e-7,0.0512834]);
Transform68.rotation = new SFRotation(new float[-0.9843,-0.124808,-0.124808,1.58662]);
Transform68.scale = new SFVec3f(new float[3.84786,15.2707,3.84786]);
Transform68.scaleOrientation = new SFRotation(new float[-5.11952e-7,-1,4.71969e-9,0.0184387]);
Shape Shape69 = createNode("Shape");
Appearance Appearance70 = createNode("Appearance");
ImageTexture ImageTexture71 = createNode("ImageTexture");
ImageTexture71.url = new MFString(new java.lang.String["shadow70-128.png"]);
Appearance70.texture = ImageTexture71;

Shape69.appearance = Appearance70;

IndexedFaceSet IndexedFaceSet72 = createNode("IndexedFaceSet");
IndexedFaceSet72.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate73 = createNode("TextureCoordinate");
TextureCoordinate73.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet72.texCoord = TextureCoordinate73;

Coordinate Coordinate74 = createNode("Coordinate");
Coordinate74.point = new MFVec3f(new float[-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0]);
IndexedFaceSet72.coord = Coordinate74;

Shape69.geometry = IndexedFaceSet72;

Transform68.child = new undefined();

Transform68.child[0] = Shape69;

children[8] = Transform68;

Transform Transform75 = createNode("Transform");
Transform75.translation = new SFVec3f(new float[-0.392339,1.56621,3.17072]);
Transform75.rotation = new SFRotation(new float[0,1,0,3.92957]);
Transform75.scale = new SFVec3f(new float[1.34079,1.83524,1.83524]);
Shape Shape76 = createNode("Shape");
Appearance Appearance77 = createNode("Appearance");
ImageTexture ImageTexture78 = createNode("ImageTexture");
ImageTexture78.url = new MFString(new java.lang.String["nposter4.jpg"]);
Appearance77.texture = ImageTexture78;

TextureTransform TextureTransform79 = createNode("TextureTransform");
Appearance77.textureTransform = TextureTransform79;

Shape76.appearance = Appearance77;

IndexedFaceSet IndexedFaceSet80 = createNode("IndexedFaceSet");
IndexedFaceSet80.coordIndex = new MFInt32(new int[3,2,1,0,-1,4,5,6,7,-1]);
TextureCoordinate TextureCoordinate81 = createNode("TextureCoordinate");
TextureCoordinate81.point = new MFVec2f(new float[0.895677,0.00903876,0.480148,0.00903876,0.480148,0.990512,0.895677,0.990512,0.895677,0.00903876,0.480148,0.00903876,0.480148,0.990512,0.895677,0.990512]);
IndexedFaceSet80.texCoord = TextureCoordinate81;

Coordinate Coordinate82 = createNode("Coordinate");
Coordinate82.point = new MFVec3f(new float[-0.5,-1.21971,0,0.5,-1.21971,0,0.5,-2.19099,0,-0.5,-2.19099,0,-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0]);
IndexedFaceSet80.coord = Coordinate82;

Shape76.geometry = IndexedFaceSet80;

Transform75.child = new undefined();

Transform75.child[0] = Shape76;

children[9] = Transform75;

}
