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
meta3.content = "Thu, 23 Apr 2015 06:07:15 GMT";
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
meta6.content = "Thu, 23 Apr 2015 06:07:15 GMT";
head1.meta[4] = meta6;

head = head1;

WorldInfo WorldInfo8 = createNode("WorldInfo");
WorldInfo8.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children = new MFNode();

children[0] = WorldInfo8;

Collision Collision9 = createNode("Collision");
Collision9.enabled = False;
Transform Transform10 = createNode("Transform");
Transform10.bboxSize = new SFVec3f(new float[4.9,4.9,4.9]);
Transform Transform11 = createNode("Transform");
Billboard Billboard12 = createNode("Billboard");
Transform Transform13 = createNode("Transform");
Transform Transform14 = createNode("Transform");
Transform14.DEF = "vSens";
VisibilitySensor VisibilitySensor15 = createNode("VisibilitySensor");
VisibilitySensor15.DEF = "_1";
VisibilitySensor15.size = new SFVec3f(new float[2,2,2]);
VisibilitySensor15.center = new SFVec3f(new float[0,1,0]);
Transform14.children = new MFNode();

Transform14.children[0] = VisibilitySensor15;

Transform13.children = new MFNode();

Transform13.children[0] = Transform14;

Transform Transform16 = createNode("Transform");
Transform16.DEF = "feuerring_1";
Transform16.translation = new SFVec3f(new float[0,1.01373,-0.00000266663]);
Transform16.scale = new SFVec3f(new float[1.36804,1.36804,1.36804]);
Group Group17 = createNode("Group");
Group Group18 = createNode("Group");
Group18.DEF = "feuerring";
TimeSensor TimeSensor19 = createNode("TimeSensor");
TimeSensor19.DEF = "Time_1";
TimeSensor19.cycleInterval = 2;
TimeSensor19.loop = True;
TimeSensor19.startTime = 968923801.489069;
TimeSensor19.stopTime = 1;
Group18.children = new MFNode();

Group18.children[0] = TimeSensor19;

Group17.children = new MFNode();

Group17.children[0] = Group18;

Group Group20 = createNode("Group");
ScalarInterpolator ScalarInterpolator21 = createNode("ScalarInterpolator");
ScalarInterpolator21.DEF = "_2";
ScalarInterpolator21.key = new MFFloat(new float[0,1]);
ScalarInterpolator21.keyValue = new MFFloat(new float[1,-1]);
Group20.children = new MFNode();

Group20.children[0] = ScalarInterpolator21;

ScalarInterpolator ScalarInterpolator22 = createNode("ScalarInterpolator");
ScalarInterpolator22.DEF = "_3";
ScalarInterpolator22.key = new MFFloat(new float[0,1]);
ScalarInterpolator22.keyValue = new MFFloat(new float[0,0]);
Group20.children[1] = ScalarInterpolator22;

Script Script23 = createNode("Script");
Script23.DEF = "_4";
field field24 = createNode("field");
field24.name = "vec";
field24.accessType = "outputOnly";
field24.type = "SFVec2f";
Script23.field = new MFNode();

Script23.field[0] = field24;

field field25 = createNode("field");
field25.name = "xIn";
field25.accessType = "inputOnly";
field25.type = "SFFloat";
Script23.field[1] = field25;

field field26 = createNode("field");
field26.name = "yIn";
field26.accessType = "inputOnly";
field26.type = "SFFloat";
Script23.field[2] = field26;

field field27 = createNode("field");
field27.name = "xBuf";
field27.accessType = "initializeOnly";
field27.type = "SFFloat";
Script23.field[3] = field27;

field field28 = createNode("field");
field28.name = "yBuf";
field28.accessType = "initializeOnly";
field28.type = "SFFloat";
Script23.field[4] = field28;


Script23.setSourceCode(`vrmlscript: function xIn(value) { xBuf = value; vec[0] = xBuf; vec[1] = yBuf; } function yIn(value) { yBuf = value; vec[0] = xBuf; vec[1] = yBuf; }`)
Group20.children[2] = Script23;

Group17.children[1] = Group20;

Transform16.children = new MFNode();

Transform16.children[0] = Group17;

Group Group29 = createNode("Group");
Group Group30 = createNode("Group");
Group30.DEF = "fireAnim";
TimeSensor TimeSensor31 = createNode("TimeSensor");
TimeSensor31.DEF = "Time_2";
TimeSensor31.cycleInterval = 10;
TimeSensor31.loop = True;
TimeSensor31.startTime = 968923801.489069;
TimeSensor31.stopTime = 1;
Group30.children = new MFNode();

Group30.children[0] = TimeSensor31;

Group29.children = new MFNode();

Group29.children[0] = Group30;

PositionInterpolator PositionInterpolator32 = createNode("PositionInterpolator");
PositionInterpolator32.DEF = "feuerringTranslationInterp";
PositionInterpolator32.key = new MFFloat(new float[0,0.1,0.2,0.4,0.6,0.8,0.9,0.95,1]);
PositionInterpolator32.keyValue = new MFVec3f(new float[0,1.01373,-0.00000266663,0,0.721592,-0.00000266663,0,0.784905,-0.00000266663,0,0.817842,-0.00000266663,0,1.12452,-0.00000266663,0,0.478494,-0.00000266663,0,0.943791,-0.00000266663,0,0.349177,-0.00000266663,0,0.943791,-0.00000266663]);
Group29.children[1] = PositionInterpolator32;

PositionInterpolator PositionInterpolator33 = createNode("PositionInterpolator");
PositionInterpolator33.DEF = "feuerringScaleFactorInterp";
PositionInterpolator33.key = new MFFloat(new float[0,0.1,0.2,0.4,0.6,0.8,0.9,0.95,1]);
PositionInterpolator33.keyValue = new MFVec3f(new float[1.36804,1.36804,1.36804,7.21592,7.21592,7.21592,7.83104,7.83104,7.83104,6.95249,6.95249,6.95249,8.29699,8.29699,8.29699,6.9222,4.30184,6.9222,4.08144,2.53644,4.08144,4.83704,3.01807,4.83704,0.571008,0.354858,0.571008]);
Group29.children[2] = PositionInterpolator33;

Transform16.children[1] = Group29;

Shape Shape34 = createNode("Shape");
Appearance Appearance35 = createNode("Appearance");
ImageTexture ImageTexture36 = createNode("ImageTexture");
ImageTexture36.url = new MFString(new java.lang.String["torch.7.png"]);
Appearance35.texture = ImageTexture36;

TextureTransform TextureTransform37 = createNode("TextureTransform");
TextureTransform37.DEF = "_5";
Appearance35.textureTransform = TextureTransform37;

Shape34.appearance = Appearance35;

IndexedFaceSet IndexedFaceSet38 = createNode("IndexedFaceSet");
IndexedFaceSet38.solid = False;
IndexedFaceSet38.creaseAngle = 0.5;
IndexedFaceSet38.texCoordIndex = new MFInt32(new int[0,1,3,2,-1,2,3,5,4,-1,4,5,7,6,-1,6,7,9,8,-1,8,9,11,10,-1,10,11,13,12,-1,12,13,15,14,-1,14,15,17,16,-1,16,17,19,18,-1,18,19,21,20,-1,20,21,23,22,-1,22,23,25,24,-1,24,25,27,26,-1,26,27,29,28,-1,28,29,31,30,-1,30,31,33,32,-1]);
IndexedFaceSet38.coordIndex = new MFInt32(new int[0,1,3,2,-1,2,3,5,4,-1,4,5,7,6,-1,6,7,9,8,-1,8,9,11,10,-1,10,11,13,12,-1,12,13,15,14,-1,14,15,17,16,-1,16,17,19,18,-1,18,19,21,20,-1,20,21,23,22,-1,22,23,25,24,-1,24,25,27,26,-1,26,27,29,28,-1,28,29,31,30,-1,30,31,1,0,-1]);
TextureCoordinate TextureCoordinate39 = createNode("TextureCoordinate");
TextureCoordinate39.point = new MFVec2f(new float[1,0,1,1,0.9375,0,0.9375,1,0.875,0,0.875,1,0.8125,0,0.8125,1,0.75,0,0.75,1,0.6875,0,0.6875,1,0.625,0,0.625,1,0.5625,0,0.5625,1,0.5,0,0.5,1,0.4375,0,0.4375,1,0.375,0,0.375,1,0.3125,0,0.3125,1,0.25,0,0.25,1,0.1875,0,0.1875,1,0.125,0,0.125,1,0.0625,0,0.0625,1,0,0,0,1]);
IndexedFaceSet38.texCoord = TextureCoordinate39;

Coordinate Coordinate40 = createNode("Coordinate");
Coordinate40.point = new MFVec3f(new float[0,-0.1,-0.1,0,0.1,-0.1,0.0382683,-0.1,-0.092388,0.0382683,0.1,-0.092388,0.0707107,-0.1,-0.0707107,0.0707107,0.1,-0.0707107,0.092388,-0.1,-0.0382683,0.092388,0.1,-0.0382683,0.1,-0.1,4.37114e-9,0.1,0.1,4.37114e-9,0.092388,-0.1,0.0382684,0.092388,0.1,0.0382684,0.0707107,-0.1,0.0707107,0.0707107,0.1,0.0707107,0.0382683,-0.1,0.092388,0.0382683,0.1,0.092388,1.50996e-8,-0.1,0.1,1.50996e-8,0.1,0.1,-0.0382683,-0.1,0.092388,-0.0382683,0.1,0.092388,-0.0707107,-0.1,0.0707107,-0.0707107,0.1,0.0707107,-0.092388,-0.1,0.0382684,-0.092388,0.1,0.0382684,-0.1,-0.1,-1.19249e-9,-0.1,0.1,-1.19249e-9,-0.0923879,-0.1,-0.0382684,-0.0923879,0.1,-0.0382684,-0.0707107,-0.1,-0.0707107,-0.0707107,0.1,-0.0707107,-0.0382683,-0.1,-0.092388,-0.0382683,0.1,-0.092388]);
IndexedFaceSet38.coord = Coordinate40;

Shape34.geometry = IndexedFaceSet38;

Transform16.child[2] = Shape34;

Transform13.children[1] = Transform16;

Transform Transform41 = createNode("Transform");
Transform41.DEF = "mummy";
Transform41.center = new SFVec3f(new float[0.00168931,0.707016,-0.00628802]);
Group Group42 = createNode("Group");
Group Group43 = createNode("Group");
Group43.DEF = "mummy_freezeAnim";
TimeSensor TimeSensor44 = createNode("TimeSensor");
TimeSensor44.DEF = "Time_3";
TimeSensor44.cycleInterval = 2;
TimeSensor44.loop = True;
TimeSensor44.startTime = 968923801.489069;
TimeSensor44.stopTime = 1;
Group43.children = new MFNode();

Group43.children[0] = TimeSensor44;

Group42.children = new MFNode();

Group42.children[0] = Group43;

PositionInterpolator PositionInterpolator45 = createNode("PositionInterpolator");
PositionInterpolator45.DEF = "mummyTranslationInterp";
PositionInterpolator45.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator45.keyValue = new MFVec3f(new float[0,0,0,0,0.283851,0,0,0,0]);
Group42.children[1] = PositionInterpolator45;

Transform41.children = new MFNode();

Transform41.children[0] = Group42;

Transform Transform46 = createNode("Transform");
Transform46.DEF = "head_mat";
Transform46.center = new SFVec3f(new float[-0.0130462,0.94049,0.227249]);
Transform Transform47 = createNode("Transform");
Transform47.DEF = "zahn";
Transform47.translation = new SFVec3f(new float[-0.00593141,0.996158,0.100081]);
Transform47.rotation = new SFRotation(new float[0,-1,0,1.5708]);
Transform47.scale = new SFVec3f(new float[1.09518,0.879304,1.09518]);
Shape Shape48 = createNode("Shape");
Appearance Appearance49 = createNode("Appearance");
Material Material50 = createNode("Material");
Material50.ambientIntensity = 0.0744681;
Material50.diffuseColor = new SFColor(new float[1,1,1]);
Material50.emissiveColor = new SFColor(new float[0.0957447,0,0.0042168]);
Material50.shininess = 0;
Appearance49.material = Material50;

Shape48.appearance = Appearance49;

IndexedFaceSet IndexedFaceSet51 = createNode("IndexedFaceSet");
IndexedFaceSet51.creaseAngle = 0.5;
IndexedFaceSet51.colorIndex = new MFInt32(new int[0,0,3,3,-1,0,0,4,4,-1,2,0,0,-1,4,4,0,0,-1,0,0,1,-1,0,1,1,-1,0,0,0,-1,0,0,0,-1,0,1,0,-1,1,0,0,-1,0,1,0,-1,0,0,2,-1,0,2,1,-1]);
IndexedFaceSet51.coordIndex = new MFInt32(new int[3,8,7,4,-1,6,11,10,5,-1,1,2,3,-1,9,0,8,6,-1,12,13,14,-1,12,14,15,-1,16,17,18,-1,17,16,19,-1,16,20,19,-1,21,16,22,-1,23,21,22,-1,22,12,24,-1,22,24,25,-1]);
Color Color52 = createNode("Color");
Color52.color = new MFColor(new float[0.224599,0.160817,0.0878982,0.684492,0.412885,0.205546,0.684492,0.26341,0.124808,0.368984,0.141994,0.0672791,0.716578,0.513084,0.280437]);
IndexedFaceSet51.color = Color52;

Coordinate Coordinate53 = createNode("Coordinate");
Coordinate53.point = new MFVec3f(new float[0.122705,-0.132246,-0.00507867,0.107891,-0.108316,0.0673736,0.0918505,-0.160744,0.0683898,0.101676,-0.160744,0.042715,0.117936,-0.127003,0.026548,0.11412,-0.112316,-0.047721,0.107581,-0.161594,-0.0215389,0.120585,-0.127003,0.0196248,0.114766,-0.160744,0.00850913,0.120532,-0.129341,-0.0124131,0.109898,-0.119365,-0.0527671,0.0971547,-0.160744,-0.0551543,0.123746,-0.0851264,0.040235,0.113085,-0.0774798,0.0615809,0.107074,-0.119086,0.0598431,0.113578,-0.127236,0.0457755,0.124451,-0.0964741,-0.0232305,0.11733,-0.0895643,-0.0392173,0.114356,-0.0731526,-0.0393097,0.112725,-0.11873,-0.0406891,0.115279,-0.124799,-0.0340097,0.116114,-0.131178,-0.0225959,0.136476,-0.0966331,0.00232054,0.116016,-0.138903,-0.014559,0.120435,-0.135401,0.0327874,0.122567,-0.138441,0.0247979]);
IndexedFaceSet51.coord = Coordinate53;

Shape48.geometry = IndexedFaceSet51;

Transform47.child = new undefined();

Transform47.child[0] = Shape48;

Transform46.children = new MFNode();

Transform46.children[0] = Transform47;

Transform Transform54 = createNode("Transform");
Transform54.DEF = "eyes";
Transform54.translation = new SFVec3f(new float[-0.00591775,1.10264,0.106955]);
Transform54.rotation = new SFRotation(new float[0,-1,0,1.5708]);
Transform54.scale = new SFVec3f(new float[1.03797,1.35831,1.11957]);
Shape Shape55 = createNode("Shape");
Appearance Appearance56 = createNode("Appearance");
Material Material57 = createNode("Material");
Material57.ambientIntensity = 0;
Material57.diffuseColor = new SFColor(new float[0,0,0]);
Material57.emissiveColor = new SFColor(new float[1,0,0.0440421]);
Material57.shininess = 0;
Appearance56.material = Material57;

Shape55.appearance = Appearance56;

IndexedFaceSet IndexedFaceSet58 = createNode("IndexedFaceSet");
IndexedFaceSet58.solid = False;
IndexedFaceSet58.colorPerVertex = False;
IndexedFaceSet58.coordIndex = new MFInt32(new int[0,1,2,3,4,5,-1,6,7,8,9,10,11,-1]);
Coordinate Coordinate59 = createNode("Coordinate");
Coordinate59.point = new MFVec3f(new float[0.108833,-0.0851155,-0.0465847,0.100853,-0.0703176,-0.0623187,0.100083,-0.0566806,-0.0626526,0.117645,-0.066655,-0.0325433,0.130948,-0.0873769,-0.00913626,0.121978,-0.091989,-0.0240754,0.141496,-0.0935758,0.00895859,0.11581,-0.0626916,0.0556524,0.105427,-0.0557512,0.0747794,0.108342,-0.0782308,0.075386,0.116612,-0.0938373,0.0555542,0.127064,-0.0974542,0.0361599]);
IndexedFaceSet58.coord = Coordinate59;

Shape55.geometry = IndexedFaceSet58;

Transform54.child = new undefined();

Transform54.child[0] = Shape55;

Transform46.children[1] = Transform54;

Transform41.children[1] = Transform46;

Transform Transform60 = createNode("Transform");
Transform60.DEF = "mummyMat";
Transform60.translation = new SFVec3f(new float[-0.00421786,-0.686282,0.0109095]);
Transform60.center = new SFVec3f(new float[0.00590718,1.3933,-0.0171975]);
Group Group61 = createNode("Group");
Group Group62 = createNode("Group");
Group62.USE = "fireAnim";
Group61.children = new MFNode();

Group61.children[0] = Group62;

ColorInterpolator ColorInterpolator63 = createNode("ColorInterpolator");
ColorInterpolator63.DEF = "mummyMatEmissiveColorInterp";
ColorInterpolator63.key = new MFFloat(new float[0,0.1,0.9,1]);
ColorInterpolator63.keyValue = new MFColor(new float[0.117021,0,0.00515386,0.297872,0.0635673,0,0.297872,0.0635673,0,0.117021,0,0.00515386]);
Group61.children[1] = ColorInterpolator63;

Transform60.children = new MFNode();

Transform60.children[0] = Group61;

Transform Transform64 = createNode("Transform");
Transform64.DEF = "A-okoerper";
Transform64.center = new SFVec3f(new float[0.0149619,0.983686,0.0466853]);
Transform Transform65 = createNode("Transform");
Transform65.DEF = "A-obody";
Transform65.translation = new SFVec3f(new float[0,0.162414,0]);
Transform65.center = new SFVec3f(new float[0.00202949,1.17923,0.0466853]);
Transform Transform66 = createNode("Transform");
Transform66.DEF = "L-arm";
Transform66.translation = new SFVec3f(new float[0.00000113249,6.70552e-8,0.00000154972]);
Transform66.rotation = new SFRotation(new float[-0.759166,0.452794,0.467595,1.66502]);
Transform66.scale = new SFVec3f(new float[0.999997,1,1]);
Transform66.scaleOrientation = new SFRotation(new float[0.945173,0.135668,-0.297057,0.784902]);
Transform66.center = new SFVec3f(new float[0.211556,1.61437,0.0139331]);
Transform Transform67 = createNode("Transform");
Transform67.DEF = "L-uarm";
Transform67.translation = new SFVec3f(new float[0.00000315905,-2.98023e-7,0.00000309944]);
Transform67.rotation = new SFRotation(new float[0.619125,-0.17052,-0.766555,1.15635]);
Transform67.scale = new SFVec3f(new float[0.999999,1,0.999997]);
Transform67.scaleOrientation = new SFRotation(new float[0.532414,0.827953,0.17615,0.69668]);
Transform67.center = new SFVec3f(new float[0.249103,1.31211,0.0152324]);
Transform Transform68 = createNode("Transform");
Transform68.DEF = "L-hand";
Transform68.translation = new SFVec3f(new float[0.249103,1.3134,0.0220145]);
Transform68.rotation = new SFRotation(new float[-0.38806,0.874558,0.290788,4.28822]);
Transform68.scale = new SFVec3f(new float[0.999997,1,0.999999]);
Transform68.scaleOrientation = new SFRotation(new float[0.773295,0.203963,0.600345,0.970645]);
Transform68.center = new SFVec3f(new float[0.000570012,-0.320677,0.00086822]);
Shape Shape69 = createNode("Shape");
Appearance Appearance70 = createNode("Appearance");
Material Material71 = createNode("Material");
Material71.DEF = "_6";
Material71.ambientIntensity = 0.4375;
Material71.diffuseColor = new SFColor(new float[0.170213,0.170213,0.170213]);
Material71.emissiveColor = new SFColor(new float[0.117021,0,0.00515386]);
Material71.shininess = 0;
Appearance70.material = Material71;

ImageTexture ImageTexture72 = createNode("ImageTexture");
ImageTexture72.DEF = "_7";
ImageTexture72.url = new MFString(new java.lang.String["bodybindensw.png"]);
Appearance70.texture = ImageTexture72;

Shape69.appearance = Appearance70;

IndexedFaceSet IndexedFaceSet73 = createNode("IndexedFaceSet");
IndexedFaceSet73.creaseAngle = 3.14159;
IndexedFaceSet73.texCoordIndex = new MFInt32(new int[0,1,2,-1,3,4,5,-1,5,2,3,-1,2,5,0,-1,6,7,8,-1,9,10,11,-1,8,12,6,-1,6,12,13,-1,14,15,16,-1,15,17,16,-1,16,18,14,-1,19,20,21,-1,21,22,19,-1,19,22,23,-1]);
IndexedFaceSet73.coordIndex = new MFInt32(new int[0,1,2,-1,3,4,5,-1,5,2,3,-1,2,5,0,-1,6,7,0,-1,8,7,6,-1,0,5,6,-1,6,5,4,-1,2,1,9,-1,1,8,9,-1,9,3,2,-1,9,8,6,-1,6,4,9,-1,9,4,3,-1]);
TextureCoordinate TextureCoordinate74 = createNode("TextureCoordinate");
TextureCoordinate74.point = new MFVec2f(new float[0.868548,0.707498,0.664964,0.707767,0.607865,0.446535,0.636948,0.379545,0.903768,0.379545,0.933118,0.446535,0.94726,0.135423,0.863478,0.376317,0.708723,0.376855,0.563573,0.713417,0.36031,0.713686,0.296075,0.472362,0.62174,0.115676,0.796507,0.0487696,0.637215,0.115595,0.597993,0.376855,0.311924,0.135342,0.347315,0.375778,0.462555,0.048748,0.621473,0.472362,0.563573,0.713417,0.296075,0.472362,0.32541,0.385464,0.592123,0.385464]);
IndexedFaceSet73.texCoord = TextureCoordinate74;

Coordinate Coordinate75 = createNode("Coordinate");
Coordinate75.point = new MFVec3f(new float[0.01428,-0.3194,-0.02553,0.0229,-0.3194,0.03114,0.03785,-0.4296,0.05021,-0.002194,-0.4589,0.04147,-0.002194,-0.4589,-0.03801,0.03785,-0.4296,-0.04676,-0.03671,-0.4209,-0.04676,-0.01388,-0.3194,-0.02563,-0.02267,-0.3194,0.03096,-0.03671,-0.4209,0.05021]);
IndexedFaceSet73.coord = Coordinate75;

Shape69.geometry = IndexedFaceSet73;

Transform68.child = new undefined();

Transform68.child[0] = Shape69;

Transform67.children = new MFNode();

Transform67.children[0] = Transform68;

Transform Transform76 = createNode("Transform");
Transform76.DEF = "uarm_l";
Transform76.translation = new SFVec3f(new float[0.249103,1.3134,0.0220151]);
Transform76.scale = new SFVec3f(new float[1,0.999999,1]);
Transform76.scaleOrientation = new SFRotation(new float[1.04347e-8,1,5.17544e-9,1.5708]);
Shape Shape77 = createNode("Shape");
Appearance Appearance78 = createNode("Appearance");
Material Material79 = createNode("Material");
Material79.USE = "_6";
Appearance78.material = Material79;

ImageTexture ImageTexture80 = createNode("ImageTexture");
ImageTexture80.USE = "_7";
Appearance78.texture = ImageTexture80;

Shape77.appearance = Appearance78;

IndexedFaceSet IndexedFaceSet81 = createNode("IndexedFaceSet");
IndexedFaceSet81.DEF = "Beat_Arm2_L-FACES";
IndexedFaceSet81.creaseAngle = 3.14159;
IndexedFaceSet81.texCoordIndex = new MFInt32(new int[18,19,20,-1,2,0,3,-1,3,0,4,-1,4,0,5,-1,5,0,1,-1,15,16,17,-1,12,13,14,-1,2,3,7,-1,8,7,3,-1,3,4,8,-1,11,8,4,-1,4,5,11,-1,9,11,5,-1,5,1,9,-1,6,9,1,-1,22,10,24,-1,24,10,25,-1,25,10,23,-1,10,22,21,-1,23,10,21,-1]);
IndexedFaceSet81.coordIndex = new MFInt32(new int[1,0,2,-1,2,0,3,-1,3,0,4,-1,4,0,5,-1,5,0,1,-1,1,2,7,-1,6,7,2,-1,2,3,6,-1,8,6,3,-1,3,4,8,-1,9,8,4,-1,4,5,9,-1,10,9,5,-1,5,1,10,-1,7,10,1,-1,7,12,10,-1,10,12,9,-1,9,12,8,-1,12,7,6,-1,8,12,6,-1]);
TextureCoordinate TextureCoordinate82 = createNode("TextureCoordinate");
TextureCoordinate82.DEF = "Beat_Arm2_L-TEXCOORD";
TextureCoordinate82.point = new MFVec2f(new float[0.587117,0.841086,0.335066,0.721654,0.34301,0.721654,0.68911,0.721654,0.895047,0.721656,0.676231,0.721654,0.367263,0.0993014,0.37433,0.0993014,0.68058,0.0993014,0.669206,0.0993014,0.576445,0.507567,0.86285,0.0993014,0.573534,0.088731,0.367263,0.0993014,0.644214,0.721933,0.335066,0.721654,0.644214,0.721933,0.367263,0.0993014,0.335066,0.721654,0.587117,0.841086,0.644214,0.721933,0.323786,0.572048,0.31554,0.404848,0.681165,0.650152,0.667893,0.379592,0.893865,0.531205]);
IndexedFaceSet81.texCoord = TextureCoordinate82;

Coordinate Coordinate83 = createNode("Coordinate");
Coordinate83.DEF = "Beat_Arm2_L-COORD";
Coordinate83.point = new MFVec3f(new float[-0.00668162,0.058639,0.0029759,-0.06696,-0.002228,0.0543,-0.06506,-0.002228,-0.02822,0.01771,-0.002228,-0.06676,0.06696,-0.002227,-0.00806,0.01463,-0.002228,0.06676,-0.05757,-0.3194,-0.02497,-0.05926,-0.3194,0.04805,0.01567,-0.3194,-0.05908,0.05926,-0.3194,-0.007133,0.01295,-0.3194,0.05908,-0.005791,-0.3194,0.00319,-0.005791,-0.3194,0.00319]);
IndexedFaceSet81.coord = Coordinate83;

Shape77.geometry = IndexedFaceSet81;

Transform76.child = new undefined();

Transform76.child[0] = Shape77;

Transform67.children[1] = Transform76;

Transform66.children = new MFNode();

Transform66.children[0] = Transform67;

Transform Transform84 = createNode("Transform");
Transform84.DEF = "oarm_l";
Transform84.translation = new SFVec3f(new float[0.217343,1.6376,0.0220023]);
Transform84.scale = new SFVec3f(new float[1,0.999999,1]);
Transform84.scaleOrientation = new SFRotation(new float[8.9523e-9,1,7.03487e-9,1.5708]);
Shape Shape85 = createNode("Shape");
Appearance Appearance86 = createNode("Appearance");
Material Material87 = createNode("Material");
Material87.USE = "_6";
Appearance86.material = Material87;

ImageTexture ImageTexture88 = createNode("ImageTexture");
ImageTexture88.USE = "_7";
Appearance86.texture = ImageTexture88;

Shape85.appearance = Appearance86;

IndexedFaceSet IndexedFaceSet89 = createNode("IndexedFaceSet");
IndexedFaceSet89.DEF = "Beat_Arm1_L-FACES";
IndexedFaceSet89.creaseAngle = 3.14159;
IndexedFaceSet89.texCoordIndex = new MFInt32(new int[12,13,14,-1,2,0,3,-1,3,0,4,-1,4,0,5,-1,5,0,1,-1,21,22,23,-1,8,11,6,-1,9,11,8,-1,10,11,9,-1,7,11,10,-1,15,16,17,-1,18,19,20,-1,2,3,6,-1,8,6,3,-1,3,4,8,-1,9,8,4,-1,4,5,9,-1,10,9,5,-1,5,1,10,-1,7,10,1,-1]);
IndexedFaceSet89.coordIndex = new MFInt32(new int[1,0,2,-1,2,0,3,-1,3,0,4,-1,4,0,5,-1,5,0,1,-1,6,11,7,-1,8,11,6,-1,9,11,8,-1,10,11,9,-1,7,11,10,-1,1,2,7,-1,6,7,2,-1,2,3,6,-1,8,6,3,-1,3,4,8,-1,9,8,4,-1,4,5,9,-1,10,9,5,-1,5,1,10,-1,7,10,1,-1]);
TextureCoordinate TextureCoordinate90 = createNode("TextureCoordinate");
TextureCoordinate90.DEF = "Beat_Arm1_L-TEXCOORD";
TextureCoordinate90.point = new MFVec2f(new float[0.325184,1.09874,0.231841,0.792581,0.242016,0.792581,0.566441,0.842842,0.749593,1.0526,0.549947,0.842842,0.242016,0.180456,0.231841,0.180456,0.685222,0.180456,0.949025,0.180456,0.668781,0.180456,0.555356,0.0333509,0.557696,0.845657,0.350567,1.10311,0.274721,0.793778,0.557696,0.847792,0.276153,0.795682,0.657821,0.181996,0.666165,0.178081,0.267049,0.181039,0.276153,0.795682,0.657821,0.183083,0.55651,0.0333278,0.267049,0.181039]);
IndexedFaceSet89.texCoord = TextureCoordinate90;

Coordinate Coordinate91 = createNode("Coordinate");
Coordinate91.DEF = "Beat_Arm1_L-COORD";
Coordinate91.point = new MFVec3f(new float[-0.01944,0.04601,0.003605,-0.03687,-0.07582,0.0543,-0.03497,-0.07582,-0.02822,0.02561,-0.05582,-0.06676,0.05981,0.02765,-0.00806,0.02253,-0.05582,0.06676,-0.03497,-0.3194,-0.02822,-0.03687,-0.3194,0.0543,0.04779,-0.3194,-0.06676,0.09705,-0.3194,-0.00806,0.04472,-0.3194,0.06676,0.02354,-0.377937,0.003605]);
IndexedFaceSet89.coord = Coordinate91;

Shape85.geometry = IndexedFaceSet89;

Transform84.child = new undefined();

Transform84.child[0] = Shape85;

Transform66.children[1] = Transform84;

Transform65.children = new MFNode();

Transform65.children[0] = Transform66;

Transform Transform92 = createNode("Transform");
Transform92.DEF = "R-arm";
Transform92.translation = new SFVec3f(new float[3.57628e-7,-8.04663e-7,3.57628e-7]);
Transform92.rotation = new SFRotation(new float[-0.115669,0.107972,-0.987402,1.51464]);
Transform92.scale = new SFVec3f(new float[1,1,0.999999]);
Transform92.scaleOrientation = new SFRotation(new float[0.196924,0.121035,0.972919,0.39581]);
Transform92.center = new SFVec3f(new float[-0.212702,1.60456,0.0152191]);
Transform Transform93 = createNode("Transform");
Transform93.DEF = "R-uarm";
Transform93.translation = new SFVec3f(new float[-0.00000101328,0.00000107288,-0.00000274181]);
Transform93.rotation = new SFRotation(new float[-0.794359,0.438031,0.42086,1.4435]);
Transform93.scale = new SFVec3f(new float[0.999999,1,0.999997]);
Transform93.scaleOrientation = new SFRotation(new float[-0.308929,-0.000469624,0.951085,0.37506]);
Transform93.center = new SFVec3f(new float[-0.235307,1.30611,0.0135384]);
Transform Transform94 = createNode("Transform");
Transform94.DEF = "R-hand";
Transform94.translation = new SFVec3f(new float[-0.235306,1.3134,0.0218197]);
Transform94.rotation = new SFRotation(new float[0.0225404,-0.0473243,0.998625,0.890117]);
Transform94.scale = new SFVec3f(new float[0.999999,1,0.999998]);
Transform94.scaleOrientation = new SFRotation(new float[0.106092,0.960994,-0.255413,0.563833]);
Transform94.center = new SFVec3f(new float[-0.000570014,-0.319855,-0.0020311]);
Shape Shape95 = createNode("Shape");
Appearance Appearance96 = createNode("Appearance");
Material Material97 = createNode("Material");
Material97.USE = "_6";
Appearance96.material = Material97;

ImageTexture ImageTexture98 = createNode("ImageTexture");
ImageTexture98.USE = "_7";
Appearance96.texture = ImageTexture98;

Shape95.appearance = Appearance96;

IndexedFaceSet IndexedFaceSet99 = createNode("IndexedFaceSet");
IndexedFaceSet99.creaseAngle = 3.14159;
IndexedFaceSet99.texCoordIndex = new MFInt32(new int[0,1,2,-1,3,2,1,-1,2,3,4,-1,5,6,7,-1,8,9,10,-1,11,7,6,-1,11,6,12,-1,13,14,15,-1,16,17,18,-1,19,18,17,-1,19,17,20,-1,21,15,14,-1,22,4,3,-1,23,21,14,-1]);
IndexedFaceSet99.coordIndex = new MFInt32(new int[0,1,2,-1,3,2,1,-1,2,3,4,-1,5,6,4,-1,5,7,6,-1,2,4,6,-1,2,6,0,-1,1,8,3,-1,7,8,6,-1,0,6,8,-1,0,8,1,-1,9,3,8,-1,9,4,3,-1,7,9,8,-1]);
TextureCoordinate TextureCoordinate100 = createNode("TextureCoordinate");
TextureCoordinate100.point = new MFVec2f(new float[0.768024,0.220818,0.563262,0.220818,0.790548,0.257992,0.540943,0.257992,0.740995,0.402809,0.737105,0.219026,0.8014,0.0853465,0.618343,0.219325,0.350965,0.406243,0.506953,0.406094,0.301671,0.272325,0.551591,0.0743882,0.68571,0.0372599,0.42943,0.0372479,0.313833,0.0853017,0.563467,0.0743434,0.506953,0.406094,0.551386,0.272325,0.301671,0.272325,0.324182,0.224102,0.528862,0.224102,0.533367,0.219325,0.584762,0.402958,0.340993,0.218727]);
IndexedFaceSet99.texCoord = TextureCoordinate100;

Coordinate Coordinate101 = createNode("Coordinate");
Coordinate101.point = new MFVec3f(new float[0.002194,-0.4589,-0.03801,0.002194,-0.4589,0.04147,-0.03785,-0.4296,-0.04676,-0.03785,-0.4296,0.05021,-0.01428,-0.3194,-0.02553,0.01388,-0.3194,-0.02563,0.03671,-0.4209,-0.04676,0.02267,-0.3194,0.03096,0.03671,-0.4209,0.05021,-0.0229,-0.3194,0.03114]);
IndexedFaceSet99.coord = Coordinate101;

Shape95.geometry = IndexedFaceSet99;

Transform94.child = new undefined();

Transform94.child[0] = Shape95;

Transform93.children = new MFNode();

Transform93.children[0] = Transform94;

Transform Transform102 = createNode("Transform");
Transform102.DEF = "uarm_r";
Transform102.translation = new SFVec3f(new float[-0.235307,1.3134,0.0218195]);
Transform102.scale = new SFVec3f(new float[1,0.999999,1]);
Transform102.scaleOrientation = new SFRotation(new float[1.14369e-8,1,5.95853e-9,1.5708]);
Shape Shape103 = createNode("Shape");
Appearance Appearance104 = createNode("Appearance");
Material Material105 = createNode("Material");
Material105.USE = "_6";
Appearance104.material = Material105;

ImageTexture ImageTexture106 = createNode("ImageTexture");
ImageTexture106.USE = "_7";
Appearance104.texture = ImageTexture106;

Shape103.appearance = Appearance104;

IndexedFaceSet IndexedFaceSet107 = createNode("IndexedFaceSet");
IndexedFaceSet107.DEF = "Beat_Arm2_R-FACES";
IndexedFaceSet107.creaseAngle = 3.14159;
IndexedFaceSet107.texCoordIndex = new MFInt32(new int[18,19,20,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,1,-1,15,16,17,-1,12,13,14,-1,3,2,6,-1,6,8,3,-1,4,3,8,-1,8,11,4,-1,5,4,11,-1,11,10,5,-1,1,5,10,-1,10,7,1,-1,24,9,21,-1,21,9,22,-1,22,9,23,-1,9,24,25,-1,23,9,25,-1]);
IndexedFaceSet107.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,1,-1,2,1,7,-1,7,6,2,-1,3,2,6,-1,6,8,3,-1,4,3,8,-1,8,9,4,-1,5,4,9,-1,9,10,5,-1,1,5,10,-1,10,7,1,-1,7,12,6,-1,6,12,8,-1,8,12,9,-1,12,7,10,-1,9,12,10,-1]);
TextureCoordinate TextureCoordinate108 = createNode("TextureCoordinate");
TextureCoordinate108.DEF = "Beat_Arm2_R-TEXCOORD";
TextureCoordinate108.point = new MFVec2f(new float[0.515525,0.849081,0.742253,0.770063,0.734998,0.770063,0.418951,0.770063,0.230897,0.770063,0.430712,0.770063,0.706398,0.201751,0.712851,0.201751,0.426741,0.201751,0.69159,0.412941,0.437126,0.201751,0.260298,0.201751,0.712851,0.201751,0.553998,0.195984,0.742354,0.769851,0.529139,0.766128,0.742253,0.770063,0.712851,0.201751,0.515525,0.849081,0.742253,0.770063,0.528933,0.765431,0.935066,0.475077,0.590676,0.550343,0.385707,0.435719,0.943013,0.313954,0.603466,0.289616]);
IndexedFaceSet107.texCoord = TextureCoordinate108;

Coordinate Coordinate109 = createNode("Coordinate");
Coordinate109.DEF = "Beat_Arm2_R-COORD";
Coordinate109.point = new MFVec3f(new float[0.0075818,0.0418716,0.00372994,0.06696,-0.002228,0.0543,0.06506,-0.002228,-0.02822,-0.01771,-0.002228,-0.06676,-0.06696,-0.002228,-0.00806,-0.01463,-0.002228,0.06676,0.05757,-0.3194,-0.02497,0.05926,-0.3194,0.04805,-0.01567,-0.3194,-0.05908,-0.05926,-0.3194,-0.007133,-0.01295,-0.3194,0.05908,0.005791,-0.3194,0.00319,0.005791,-0.3194,0.00319]);
IndexedFaceSet107.coord = Coordinate109;

Shape103.geometry = IndexedFaceSet107;

Transform102.child = new undefined();

Transform102.child[0] = Shape103;

Transform93.children[1] = Transform102;

Transform92.children = new MFNode();

Transform92.children[0] = Transform93;

Transform Transform110 = createNode("Transform");
Transform110.DEF = "oarm_r";
Transform110.translation = new SFVec3f(new float[-0.212057,1.6376,0.0218289]);
Transform110.scale = new SFVec3f(new float[1,0.999999,1]);
Transform110.scaleOrientation = new SFRotation(new float[1.00532e-8,1,9.24515e-9,1.5708]);
Shape Shape111 = createNode("Shape");
Appearance Appearance112 = createNode("Appearance");
Material Material113 = createNode("Material");
Material113.USE = "_6";
Appearance112.material = Material113;

ImageTexture ImageTexture114 = createNode("ImageTexture");
ImageTexture114.USE = "_7";
Appearance112.texture = ImageTexture114;

Shape111.appearance = Appearance112;

IndexedFaceSet IndexedFaceSet115 = createNode("IndexedFaceSet");
IndexedFaceSet115.DEF = "Beat_Arm1_R-FACES";
IndexedFaceSet115.creaseAngle = 3.14159;
IndexedFaceSet115.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,1,-1,11,6,7,-1,11,8,6,-1,11,9,8,-1,11,10,9,-1,11,7,10,-1,2,1,7,-1,7,6,2,-1,3,2,6,-1,6,8,3,-1,4,3,8,-1,8,9,4,-1,5,4,9,-1,9,10,5,-1,1,5,10,-1,10,7,1,-1]);
TextureCoordinate TextureCoordinate116 = createNode("TextureCoordinate");
TextureCoordinate116.DEF = "Beat_Arm1_R-TEXCOORD";
TextureCoordinate116.point = new MFVec2f(new float[0.663162,1.14776,0.762388,0.822301,0.751572,0.822301,0.406698,0.87573,0.212002,1.09871,0.424232,0.87573,0.751572,0.171594,0.762388,0.171594,0.28043,0.171594,0,0.171594,0.297908,0.171594,0.435576,0]);
IndexedFaceSet115.texCoord = TextureCoordinate116;

Coordinate Coordinate117 = createNode("Coordinate");
Coordinate117.DEF = "Beat_Arm1_R-COORD";
Coordinate117.point = new MFVec3f(new float[0.01944,0.04601,0.003605,0.03687,-0.07582,0.0543,0.03497,-0.07582,-0.02822,-0.02561,-0.05582,-0.06676,-0.05981,0.02765,-0.00806,-0.02253,-0.05582,0.06676,0.03497,-0.3194,-0.02822,0.03687,-0.3194,0.0543,-0.04779,-0.3194,-0.06676,-0.09705,-0.3194,-0.00806,-0.04472,-0.3194,0.06676,-0.0205373,-0.383633,0.003605]);
IndexedFaceSet115.coord = Coordinate117;

Shape111.geometry = IndexedFaceSet115;

Transform110.child = new undefined();

Transform110.child[0] = Shape111;

Transform92.children[1] = Transform110;

Transform65.children[1] = Transform92;

Transform64.children = new MFNode();

Transform64.children[0] = Transform65;

Transform60.children[1] = Transform64;

Transform Transform118 = createNode("Transform");
Transform118.DEF = "lumpen";
Transform118.translation = new SFVec3f(new float[0,0.857361,0]);
Shape Shape119 = createNode("Shape");
Appearance Appearance120 = createNode("Appearance");
Material Material121 = createNode("Material");
Material121.USE = "_6";
Appearance120.material = Material121;

ImageTexture ImageTexture122 = createNode("ImageTexture");
ImageTexture122.USE = "_7";
Appearance120.texture = ImageTexture122;

Shape119.appearance = Appearance120;

IndexedFaceSet IndexedFaceSet123 = createNode("IndexedFaceSet");
IndexedFaceSet123.solid = False;
IndexedFaceSet123.convex = False;
IndexedFaceSet123.coordIndex = new MFInt32(new int[0,1,2,-1,2,1,3,-1,1,4,3,-1,5,0,2,6,-1,3,7,8,-1,3,4,7,-1,9,8,7,10,-1,7,4,11,10,-1,11,12,13,10,-1,13,14,9,10,-1,11,4,15,16,-1,15,17,18,16,-1,19,12,11,16,-1,18,20,19,16,-1,17,5,6,21,22,-1,22,21,23,24,-1,18,17,22,24,-1,25,20,18,24,-1,13,12,26,27,-1,26,28,29,27,-1,26,12,19,30,-1,31,28,26,30,-1,32,20,25,33,-1,34,35,32,33,-1,36,0,5,-1,1,0,36,-1,17,36,5,-1,1,36,4,-1,15,36,17,-1,4,36,15,-1,37,2,38,-1,38,2,3,-1,38,3,39,-1,40,3,8,-1,39,3,40,-1,41,6,2,37,-1,42,43,21,6,41,-1,9,44,40,8,-1,40,44,45,39,-1,45,46,47,39,-1,47,46,48,42,-1,48,49,43,42,-1,43,49,23,21,-1,50,44,9,14,-1,51,52,50,14,-1,45,44,50,53,-1,54,46,45,53,-1,54,55,56,57,-1,48,46,54,57,-1,58,49,48,57,-1,23,49,58,59,-1,56,60,58,57,-1,58,60,61,59,-1,62,52,51,63,-1,56,55,64,65,-1,64,55,66,67,-1,61,60,68,69,-1,70,41,37,-1,42,41,70,-1,38,70,37,-1,47,42,70,-1,38,39,70,-1,39,47,70,-1]);
Coordinate Coordinate124 = createNode("Coordinate");
Coordinate124.point = new MFVec3f(new float[0.220634,0.98391,0.0296142,0.215757,0.967902,-0.0488086,0,1.0542,0.0042659,0,0.977072,-0.136609,0.215757,0.888341,-0.0578301,0.22365,0.914243,0.0690623,0,0.973457,0.0983907,0.0783623,0.811665,-0.183735,0,0.812917,-0.19105,0,0.6412,-0.19895,0.0894125,0.637176,-0.194805,0.157003,0.641881,-0.164174,0.197211,0.457951,-0.170841,0.112621,0.458052,-0.202346,0,0.45916,-0.20726,0.193486,0.846333,-0.0486272,0.200425,0.644716,-0.0904601,0.220634,0.85518,0.0150172,0.164282,0.644958,-0.01416,0.226499,0.457847,-0.0963748,0.199347,0.460981,-0.0191746,0,0.824334,0.049135,0.0901548,0.817374,0.033742,0,0.652754,0.0326471,0.0949376,0.647628,0.0233636,0.11424,0.46665,0.0205053,0.204492,0.238432,-0.17159,0.116937,0.242278,-0.205107,0.165709,0.10804,-0.149614,0.117703,-0.050888,-0.173891,0.233539,0.234371,-0.0928045,0.235292,-0.0526715,-0.0854993,0.204489,0.241683,-0.011285,0.116917,0.250473,0.0311625,0.117696,-0.0442545,0.0123772,0.228517,-0.00292215,-0.0218347,0.260119,0.885241,-0.0373184,-0.220634,0.98391,0.0296142,-0.215757,0.967902,-0.0488086,-0.215757,0.888341,-0.0578301,-0.0783623,0.811665,-0.183735,-0.22365,0.914243,0.0690623,-0.220634,0.85518,0.0150172,-0.0901548,0.817374,0.033742,-0.0894125,0.637176,-0.194805,-0.157003,0.641881,-0.164174,-0.200425,0.644716,-0.0904601,-0.193486,0.846333,-0.0486272,-0.164282,0.644958,-0.01416,-0.0949376,0.647628,0.0233636,-0.112621,0.458052,-0.202346,0,0.241532,-0.210554,-0.116937,0.242278,-0.205107,-0.197211,0.457951,-0.170841,-0.226499,0.457847,-0.0963748,-0.233539,0.234371,-0.0928045,-0.204489,0.241683,-0.011285,-0.199347,0.460981,-0.0191746,-0.11424,0.46665,0.0205053,0,0.470345,0.0310584,-0.116917,0.250473,0.0311625,0,0.252948,0.0427871,-0.117703,-0.050888,-0.173891,0,0.109333,-0.193737,-0.235292,-0.0526715,-0.0854993,-0.228517,-0.00292215,-0.0218347,-0.204492,0.238432,-0.17159,-0.165709,0.10804,-0.149614,-0.117696,-0.0442545,0.0123772,0,0.00403711,0.031925,-0.260119,0.885241,-0.0373184]);
IndexedFaceSet123.coord = Coordinate124;

Shape119.geometry = IndexedFaceSet123;

Transform118.child = new undefined();

Transform118.child[0] = Shape119;

Transform60.children[2] = Transform118;

Transform Transform125 = createNode("Transform");
Transform125.DEF = "headchngMat";
Transform Transform126 = createNode("Transform");
Transform126.DEF = "mund";
Transform126.translation = new SFVec3f(new float[-0.00169989,1.78892,0.0960455]);
Transform126.rotation = new SFRotation(new float[0,-1,0,1.5708]);
Transform126.scale = new SFVec3f(new float[1.03797,1.35831,1.11957]);
Shape Shape127 = createNode("Shape");
Appearance Appearance128 = createNode("Appearance");
Material Material129 = createNode("Material");
Material129.USE = "_6";
Appearance128.material = Material129;

Shape127.appearance = Appearance128;

IndexedFaceSet IndexedFaceSet130 = createNode("IndexedFaceSet");
IndexedFaceSet130.solid = False;
IndexedFaceSet130.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,4,2,-1,5,3,4,6,-1,5,6,7,-1,8,5,7,-1,9,5,3,10,-1,3,1,11,10,-1]);
Coordinate Coordinate131 = createNode("Coordinate");
Coordinate131.point = new MFVec3f(new float[0.115082,-0.13295,0.0602511,0.00618318,-0.145354,0.118922,0.126331,-0.1379,0.0393701,0.00618318,-0.145354,0.000558503,0.139762,-0.145349,0.00228155,0.00618318,-0.145354,-0.117805,0.127074,-0.145246,-0.0227128,0.116422,-0.130149,-0.0384416,0.0967136,-0.127625,-0.0655306,0.0904014,-0.177903,-0.0842544,0.122631,-0.177903,-0.0000361332,0.0904014,-0.177903,0.0841821]);
IndexedFaceSet130.coord = Coordinate131;

Shape127.geometry = IndexedFaceSet130;

Transform126.child = new undefined();

Transform126.child[0] = Shape127;

Transform125.children = new MFNode();

Transform125.children[0] = Transform126;

Transform Transform132 = createNode("Transform");
Transform132.DEF = "head";
Transform132.translation = new SFVec3f(new float[-0.00169989,1.78892,0.0960455]);
Transform132.rotation = new SFRotation(new float[0,1,0,4.71239]);
Transform132.scale = new SFVec3f(new float[1.03797,1.35831,1.11957]);
Shape Shape133 = createNode("Shape");
Appearance Appearance134 = createNode("Appearance");
Material Material135 = createNode("Material");
Material135.USE = "_6";
Appearance134.material = Material135;

ImageTexture ImageTexture136 = createNode("ImageTexture");
ImageTexture136.USE = "_7";
Appearance134.texture = ImageTexture136;

Shape133.appearance = Appearance134;

IndexedFaceSet IndexedFaceSet137 = createNode("IndexedFaceSet");
IndexedFaceSet137.solid = False;
IndexedFaceSet137.creaseAngle = 3.14159;
IndexedFaceSet137.colorPerVertex = False;
IndexedFaceSet137.texCoordIndex = new MFInt32(new int[4,0,3,2,46,-1,3,47,1,45,2,-1,14,45,1,13,-1,45,14,15,2,-1,18,46,2,15,-1,46,18,19,4,-1,47,20,13,1,-1,20,6,5,13,-1,6,21,12,5,-1,6,20,22,11,-1,20,47,3,22,-1,21,6,11,23,-1,24,9,10,17,-1,9,24,23,11,-1,9,25,19,10,-1,25,0,4,19,-1,0,25,22,3,-1,25,9,11,22,-1,21,36,26,12,-1,36,21,23,29,-1,14,13,5,-1,18,10,19,-1,32,41,39,34,-1,39,31,35,34,-1,30,33,44,37,-1,38,31,40,-1,31,39,40,-1,33,38,40,-1,40,39,41,-1,40,41,42,-1,43,40,42,-1,44,33,40,-1,43,44,40,-1,53,48,49,-1,50,53,49,-1,50,51,53,-1,53,64,54,-1,59,61,7,-1,61,64,7,-1,59,7,69,-1,60,59,69,-1,62,63,7,-1,62,7,64,-1,53,62,64,-1,53,51,65,-1,53,65,62,-1,51,66,65,-1,51,27,66,-1,27,67,66,-1,67,27,16,-1,68,67,16,-1,68,16,8,-1,63,70,7,-1,63,68,70,-1,70,68,8,-1,12,26,52,57,-1,14,5,60,-1,5,12,60,-1,12,58,60,-1,12,57,58,-1,57,56,58,-1,59,60,58,-1,56,59,58,-1,28,17,16,27,-1,10,18,8,-1,16,17,10,8,-1,14,60,69,-1,15,14,69,7,-1,8,18,70,-1,18,15,7,70,-1,48,53,52,-1,53,54,52,-1,54,55,52,-1,56,57,52,-1,55,56,52,-1,37,44,43,36,-1,42,41,32,26,-1,36,43,42,26,-1,24,17,28,30,-1,29,23,24,30,-1,35,31,38,28,-1,38,33,30,28,-1,54,64,72,71,-1,64,61,73,72,-1,59,61,73,74,-1,56,59,74,75,-1,54,55,76,71,-1,55,56,75,76,-1]);
IndexedFaceSet137.coordIndex = new MFInt32(new int[7,3,6,5,2,-1,6,0,4,1,5,-1,15,1,4,14,-1,1,15,16,5,-1,18,2,5,16,-1,2,18,19,7,-1,0,20,14,4,-1,20,9,8,14,-1,9,21,13,8,-1,9,20,22,12,-1,20,0,6,22,-1,21,9,12,23,-1,24,10,11,17,-1,10,24,23,12,-1,10,25,19,11,-1,25,3,7,19,-1,3,25,22,6,-1,25,10,12,22,-1,21,28,26,13,-1,28,21,23,29,-1,15,14,8,-1,18,11,19,-1,32,31,33,34,-1,33,35,36,34,-1,42,41,39,40,-1,37,35,43,-1,35,33,43,-1,41,37,43,-1,43,33,31,-1,43,31,30,-1,38,43,30,-1,39,41,43,-1,38,39,43,-1,46,45,47,-1,48,46,47,-1,48,49,46,-1,46,51,50,-1,55,57,58,-1,57,51,58,-1,55,58,59,-1,56,55,59,-1,60,61,58,-1,60,58,51,-1,46,60,51,-1,46,49,62,-1,46,62,60,-1,49,63,62,-1,49,64,63,-1,64,65,63,-1,65,64,66,-1,67,65,66,-1,67,66,68,-1,61,69,58,-1,61,67,69,-1,69,67,68,-1,13,26,44,54,-1,15,8,56,-1,8,13,56,-1,13,70,56,-1,13,54,70,-1,54,53,70,-1,55,56,70,-1,53,55,70,-1,27,17,66,64,-1,11,18,68,-1,66,17,11,68,-1,15,56,59,-1,16,15,59,58,-1,68,18,69,-1,18,16,58,69,-1,45,46,44,-1,46,50,44,-1,50,52,44,-1,53,54,44,-1,52,53,44,-1,40,39,38,28,-1,30,31,32,26,-1,28,38,30,26,-1,24,17,27,42,-1,29,23,24,42,-1,36,35,37,27,-1,37,41,42,27,-1,50,51,72,71,-1,51,57,73,72,-1,55,57,73,74,-1,53,55,74,75,-1,50,52,76,71,-1,52,53,75,76,-1]);
TextureCoordinate TextureCoordinate138 = createNode("TextureCoordinate");
TextureCoordinate138.point = new MFVec2f(new float[0.590012,0.991089,0.370199,0.991089,0.498897,0.991089,0.498897,0.991089,0.626309,0.991089,0.0588169,0.734665,0.187334,0.734665,0.480888,0.72502,0.842683,0.674144,0.81046,0.734665,0.93458,0.734665,0.498897,0.734665,0.0000176132,0.454072,0.142972,0.8902,0.246913,0.8902,0.498897,0.8902,0.889951,0.454214,0.992789,0.454072,0.750881,0.8902,0.851264,0.8902,0.246913,0.8902,0.145706,0.454072,0.498897,0.8902,0.498897,0.454072,0.852089,0.454072,0.750881,0.8902,0.0788747,0.285584,0.730345,0.342561,0.914974,0.285584,0.499025,0.285584,0.828092,0.313014,0.740864,0.0694814,0.201573,0.18098,0.740864,0.0694814,0.499025,0.18098,0.796476,0.18098,0.201573,0.285584,0.53064,0.313014,0.837156,0.0694814,0.499152,0.0694814,0.499152,0.000391888,0.25744,0.0694814,0.157736,0.0694814,0.25744,0.0694814,0.499152,0.0694814,0.407782,0.991089,0.590012,0.991089,0.407782,0.991089,0.359845,0.30954,0.490839,0.285601,0.579117,0.285932,0.634669,0.33445,0.286095,0.325448,0.462874,0.364225,0.371183,0.439523,0.302684,0.451147,0.23264,0.501302,0.152121,0.389537,0.115511,0.522707,0.234783,0.573547,0.0792985,0.654447,0.302337,0.551242,0.531165,0.471909,0.613837,0.538504,0.467256,0.451987,0.583929,0.457087,0.66343,0.479177,0.719001,0.526734,0.720181,0.57056,0.255544,0.731349,0.710998,0.760573,0.371183,0.439523,0.467256,0.451987,0.302337,0.551242,0.234783,0.573547,0.23264,0.501302,0.302684,0.451147]);
IndexedFaceSet137.texCoord = TextureCoordinate138;

Coordinate Coordinate139 = createNode("Coordinate");
Coordinate139.point = new MFVec3f(new float[-0.0114311,0.0741718,0.0257975,0.0401638,0.0741718,0.0257975,0.0401638,0.0741718,-0.0257975,-0.0114311,0.0741718,-0.0257975,0.0143664,0.0741718,0.0364387,0.0500362,0.0741718,2.86414e-10,-0.0114311,0.0741718,2.86414e-10,0.0143664,0.0741718,-0.0360745,0.00228196,-0.00561741,0.124601,-0.0859317,-0.0056174,0.0882136,-0.0859317,-0.0056174,-0.0882136,0.00228196,-0.00561741,-0.123356,-0.0859317,-0.0056174,1.43527e-10,0,-0.092927,0.141249,0.00554795,0.0427793,0.100774,0.0768928,0.0427793,0.0713448,0.104196,0.0427793,2.86414e-10,0,-0.092927,-0.139837,0.0768928,0.0427793,-0.0713448,0.00554795,0.0427793,-0.0997667,-0.0657969,0.0427793,0.0713448,-0.1,-0.092927,0.1,-0.0657969,0.0427793,2.86414e-10,-0.1,-0.092927,0,-0.1,-0.092927,-0.1,-0.0657969,0.0427793,-0.0713448,0.00618318,-0.145354,0.118922,0.00618318,-0.145354,-0.117805,-0.0780351,-0.145354,0.0841821,-0.0780351,-0.145354,-0.0000361332,0.0123664,-0.212597,0.0965938,0.0808029,-0.212597,0.0683643,0.0904014,-0.177903,0.0841821,0.106993,-0.212597,-0.0000722663,0.122631,-0.177903,-0.0000361332,0.0808029,-0.212597,-0.0685088,0.0904014,-0.177903,-0.0842544,0.0123664,-0.212597,-0.0957721,-0.0560702,-0.212597,0.0683643,-0.0560702,-0.212597,-0.0000722663,-0.0814679,-0.136819,-0.00898744,-0.0560702,-0.212597,-0.0685088,-0.0814679,-0.136819,-0.0932057,0.0254613,-0.234095,-0.0000722589,0.115082,-0.13295,0.0602511,0.126331,-0.1379,0.0393701,0.141496,-0.120884,0.0101992,0.139762,-0.145349,0.00228155,0.127074,-0.145246,-0.0227128,0.116422,-0.130149,-0.0384416,0.127064,-0.0974542,0.0361599,0.141496,-0.0935758,0.00895859,0.116612,-0.0938373,0.0555542,0.108342,-0.0782308,0.075386,0.0729219,-0.113008,0.0981837,0.105427,-0.0557512,0.0747794,0.0290983,-0.0305782,0.118802,0.11581,-0.0626916,0.0556524,0.141496,-0.00861859,0.00509905,0.107375,-0.00664914,0.0689013,0.130948,-0.0873769,-0.00913626,0.117645,-0.066655,-0.0325433,0.121978,-0.091989,-0.0240754,0.108833,-0.0851155,-0.0465847,0.0967136,-0.127625,-0.0655306,0.100853,-0.0703176,-0.0623187,0.064655,-0.0928831,-0.11072,0.100083,-0.0566806,-0.0626526,0.0749073,-0.0244491,-0.097337,0.103213,0.00244421,-0.0600527,0.0508918,-0.0715707,0.108549,0.127064,-0.0974542,0.0361599,0.141496,-0.0935758,0.00895859,0.11581,-0.0626916,0.0556524,0.105427,-0.0557512,0.0747794,0.108342,-0.0782308,0.075386,0.116612,-0.0938373,0.0555542]);
IndexedFaceSet137.coord = Coordinate139;

Shape133.geometry = IndexedFaceSet137;

Transform132.child = new undefined();

Transform132.child[0] = Shape133;

Transform125.children[1] = Transform132;

Transform60.children[3] = Transform125;

Transform41.children[2] = Transform60;

Transform13.children[2] = Transform41;

Billboard12.children = new MFNode();

Billboard12.children[0] = Transform13;

Transform11.children = new MFNode();

Transform11.children[0] = Billboard12;

Transform10.children = new MFNode();

Transform10.children[0] = Transform11;

Transform Transform140 = createNode("Transform");
Transform140.DEF = "geistShadow";
Transform140.translation = new SFVec3f(new float[2.44177e-8,-1.39698e-9,0]);
Transform140.scale = new SFVec3f(new float[0.487699,0.487699,0.487699]);
Transform140.center = new SFVec3f(new float[0,0.00560371,0]);
Transform Transform141 = createNode("Transform");
Transform141.DEF = "shadow";
Transform141.translation = new SFVec3f(new float[0,0.00560371,0]);
Transform141.rotation = new SFRotation(new float[-1,0,0,1.5708]);
Transform141.scale = new SFVec3f(new float[4.91122,4.91116,4.91116]);
Shape Shape142 = createNode("Shape");
Appearance Appearance143 = createNode("Appearance");
ImageTexture ImageTexture144 = createNode("ImageTexture");
ImageTexture144.url = new MFString(new java.lang.String["redlight.png"]);
Appearance143.texture = ImageTexture144;

Shape142.appearance = Appearance143;

IndexedFaceSet IndexedFaceSet145 = createNode("IndexedFaceSet");
IndexedFaceSet145.solid = False;
IndexedFaceSet145.creaseAngle = 3.14159;
IndexedFaceSet145.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate146 = createNode("TextureCoordinate");
TextureCoordinate146.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet145.texCoord = TextureCoordinate146;

Coordinate Coordinate147 = createNode("Coordinate");
Coordinate147.point = new MFVec3f(new float[-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0]);
IndexedFaceSet145.coord = Coordinate147;

Shape142.geometry = IndexedFaceSet145;

Transform141.child = new undefined();

Transform141.child[0] = Shape142;

Transform140.children = new MFNode();

Transform140.children[0] = Transform141;

Transform10.children[1] = Transform140;

Collision9.proxy = Transform10;

children[1] = Collision9;

ROUTE ROUTE148 = createNode("ROUTE");
ROUTE148.fromNode = "_1";
ROUTE148.fromField = "isActive";
ROUTE148.toNode = "Time_1";
ROUTE148.toField = "set_enabled";
children[2] = ROUTE148;

ROUTE ROUTE149 = createNode("ROUTE");
ROUTE149.fromNode = "_1";
ROUTE149.fromField = "enterTime";
ROUTE149.toNode = "Time_1";
ROUTE149.toField = "set_startTime";
children[3] = ROUTE149;

ROUTE ROUTE150 = createNode("ROUTE");
ROUTE150.fromNode = "Time_1";
ROUTE150.fromField = "fraction_changed";
ROUTE150.toNode = "_2";
ROUTE150.toField = "set_fraction";
children[4] = ROUTE150;

ROUTE ROUTE151 = createNode("ROUTE");
ROUTE151.fromNode = "Time_1";
ROUTE151.fromField = "fraction_changed";
ROUTE151.toNode = "_3";
ROUTE151.toField = "set_fraction";
children[5] = ROUTE151;

ROUTE ROUTE152 = createNode("ROUTE");
ROUTE152.fromNode = "_2";
ROUTE152.fromField = "value_changed";
ROUTE152.toNode = "_4";
ROUTE152.toField = "xIn";
children[6] = ROUTE152;

ROUTE ROUTE153 = createNode("ROUTE");
ROUTE153.fromNode = "_3";
ROUTE153.fromField = "value_changed";
ROUTE153.toNode = "_4";
ROUTE153.toField = "yIn";
children[7] = ROUTE153;

ROUTE ROUTE154 = createNode("ROUTE");
ROUTE154.fromNode = "_1";
ROUTE154.fromField = "isActive";
ROUTE154.toNode = "Time_2";
ROUTE154.toField = "set_enabled";
children[8] = ROUTE154;

ROUTE ROUTE155 = createNode("ROUTE");
ROUTE155.fromNode = "_1";
ROUTE155.fromField = "enterTime";
ROUTE155.toNode = "Time_2";
ROUTE155.toField = "set_startTime";
children[9] = ROUTE155;

ROUTE ROUTE156 = createNode("ROUTE");
ROUTE156.fromNode = "Time_2";
ROUTE156.fromField = "fraction_changed";
ROUTE156.toNode = "feuerringTranslationInterp";
ROUTE156.toField = "set_fraction";
children[10] = ROUTE156;

ROUTE ROUTE157 = createNode("ROUTE");
ROUTE157.fromNode = "Time_2";
ROUTE157.fromField = "fraction_changed";
ROUTE157.toNode = "feuerringScaleFactorInterp";
ROUTE157.toField = "set_fraction";
children[11] = ROUTE157;

ROUTE ROUTE158 = createNode("ROUTE");
ROUTE158.fromNode = "_4";
ROUTE158.fromField = "vec";
ROUTE158.toNode = "_5";
ROUTE158.toField = "set_translation";
children[12] = ROUTE158;

ROUTE ROUTE159 = createNode("ROUTE");
ROUTE159.fromNode = "feuerringTranslationInterp";
ROUTE159.fromField = "value_changed";
ROUTE159.toNode = "feuerring_1";
ROUTE159.toField = "set_translation";
children[13] = ROUTE159;

ROUTE ROUTE160 = createNode("ROUTE");
ROUTE160.fromNode = "feuerringScaleFactorInterp";
ROUTE160.fromField = "value_changed";
ROUTE160.toNode = "feuerring_1";
ROUTE160.toField = "set_scale";
children[14] = ROUTE160;

ROUTE ROUTE161 = createNode("ROUTE");
ROUTE161.fromNode = "_1";
ROUTE161.fromField = "isActive";
ROUTE161.toNode = "Time_3";
ROUTE161.toField = "set_enabled";
children[15] = ROUTE161;

ROUTE ROUTE162 = createNode("ROUTE");
ROUTE162.fromNode = "_1";
ROUTE162.fromField = "enterTime";
ROUTE162.toNode = "Time_3";
ROUTE162.toField = "set_startTime";
children[16] = ROUTE162;

ROUTE ROUTE163 = createNode("ROUTE");
ROUTE163.fromNode = "Time_3";
ROUTE163.fromField = "fraction_changed";
ROUTE163.toNode = "mummyTranslationInterp";
ROUTE163.toField = "set_fraction";
children[17] = ROUTE163;

ROUTE ROUTE164 = createNode("ROUTE");
ROUTE164.fromNode = "Time_2";
ROUTE164.fromField = "fraction_changed";
ROUTE164.toNode = "mummyMatEmissiveColorInterp";
ROUTE164.toField = "set_fraction";
children[18] = ROUTE164;

ROUTE ROUTE165 = createNode("ROUTE");
ROUTE165.fromNode = "mummyMatEmissiveColorInterp";
ROUTE165.fromField = "value_changed";
ROUTE165.toNode = "_6";
ROUTE165.toField = "set_emissiveColor";
children[19] = ROUTE165;

ROUTE ROUTE166 = createNode("ROUTE");
ROUTE166.fromNode = "mummyTranslationInterp";
ROUTE166.fromField = "value_changed";
ROUTE166.toNode = "mummy";
ROUTE166.toField = "set_translation";
children[20] = ROUTE166;

}
