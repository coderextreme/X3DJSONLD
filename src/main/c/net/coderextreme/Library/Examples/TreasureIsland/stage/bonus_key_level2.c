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
meta3.content = "Thu, 05 Nov 2015 03:28:54 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V1.2.0, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Thu, 05 Nov 2015 03:28:54 GMT";
head1.meta[4] = meta6;

head = head1;

Group Group8 = createNode("Group");
WorldInfo WorldInfo9 = createNode("WorldInfo");
WorldInfo9.info = new MFString(new java.lang.String[", ","Created in Titania, ","Packaged by CosmoPackagePackaged by CosmoPackage"]);
Group8.children = new MFNode();

Group8.children[0] = WorldInfo9;

Transform Transform10 = createNode("Transform");
Transform10.DEF = "level2";
Transform Transform11 = createNode("Transform");
Transform11.DEF = "VisibilitySensor";
VisibilitySensor VisibilitySensor12 = createNode("VisibilitySensor");
VisibilitySensor12.DEF = "_1";
VisibilitySensor12.size = new SFVec3f(new float[0.7,0.7,0.7]);
Transform11.children = new MFNode();

Transform11.children[0] = VisibilitySensor12;

Transform10.children = new MFNode();

Transform10.children[0] = Transform11;

Transform Transform13 = createNode("Transform");
Transform13.DEF = "Bonus";
Group Group14 = createNode("Group");
Group14.DEF = "rotate";
Group Group15 = createNode("Group");
Group15.DEF = "Bonus_1";
TimeSensor TimeSensor16 = createNode("TimeSensor");
TimeSensor16.DEF = "Time";
TimeSensor16.cycleInterval = 10;
TimeSensor16.loop = True;
TimeSensor16.startTime = 952980617.71;
TimeSensor16.stopTime = 952972802.073;
Group15.children = new MFNode();

Group15.children[0] = TimeSensor16;

Group14.children = new MFNode();

Group14.children[0] = Group15;

OrientationInterpolator OrientationInterpolator17 = createNode("OrientationInterpolator");
OrientationInterpolator17.DEF = "BonusRotationInterp";
OrientationInterpolator17.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator17.keyValue = new MFRotation(new float[0,0,1,0,0,-1,0,1.57079,0,1,0,3.14159,0,1,0,1.5708,0,0,1,0]);
Group14.children[1] = OrientationInterpolator17;

Transform13.children = new MFNode();

Transform13.children[0] = Group14;

Transform Transform18 = createNode("Transform");
Transform18.DEF = "Key";
Transform18.translation = new SFVec3f(new float[0,-0.350102,0]);
Shape Shape19 = createNode("Shape");
IndexedFaceSet IndexedFaceSet20 = createNode("IndexedFaceSet");
IndexedFaceSet20.colorIndex = new MFInt32(new int[1,0,0,-1,1,0,0,-1,1,0,0,-1,1,0,0,-1,1,0,0,-1,1,0,0,-1,7,1,7,-1,1,7,7,-1,0,0,7,-1,0,1,7,-1,1,0,7,-1,0,1,7,-1,1,0,7,-1,1,1,0,-1,1,0,7,-1,0,1,7,-1,1,1,0,-1,3,3,3,3,-1,3,3,3,3,-1,1,7,0,-1,5,5,5,5,-1,1,7,7,-1,5,5,5,5,-1,7,7,1,-1,0,7,1,-1,2,2,2,2,-1,0,1,1,-1,3,3,3,3,-1,4,4,4,4,-1,5,5,5,5,-1,4,4,4,4,-1,5,5,5,5,-1,4,4,4,4,-1,3,3,3,3,-1,0,0,1,-1,0,0,1,-1,0,0,1,-1,0,0,1,-1,0,0,1,-1,6,6,6,6,-1,0,1,0,-1,3,3,3,3,-1,6,6,6,6,-1,1,0,1,-1,5,5,5,5,-1,0,7,1,-1,5,5,5,5,-1,0,1,7,-1,0,0,7,-1,0,1,7,-1,1,0,7,-1]);
IndexedFaceSet20.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,5,6,-1,0,7,5,-1,0,4,7,-1,8,9,10,-1,11,8,10,-1,6,5,12,-1,5,13,12,-1,14,6,12,-1,15,11,10,-1,13,15,12,-1,13,11,15,-1,9,16,10,-1,16,14,12,-1,9,14,16,-1,17,18,15,10,-1,19,17,10,16,-1,20,17,19,-1,21,20,9,8,-1,20,21,17,-1,22,21,8,11,-1,17,21,22,-1,18,17,22,-1,23,22,11,13,-1,18,22,23,-1,24,23,13,5,-1,25,24,5,7,-1,26,25,7,4,-1,27,26,4,3,-1,28,27,3,2,-1,29,28,2,1,-1,30,29,1,0,-1,28,29,30,-1,27,28,30,-1,26,27,30,-1,25,26,30,-1,24,25,30,-1,31,30,0,6,-1,24,30,31,-1,32,31,6,14,-1,32,14,9,20,-1,20,19,32,-1,33,19,16,12,-1,19,33,32,-1,18,33,12,15,-1,18,23,33,-1,24,31,33,-1,31,32,33,-1,23,24,33,-1]);
Color Color21 = createNode("Color");
Color21.color = new MFColor(new float[0,0.910982,0.962567,0,0.662992,0.700535,0,0.308722,0.326203,0,0.334027,0.352941,0,0.288478,0.304813,0,0.60226,0.636364,0,0.556711,0.588235,0.755923,0.969105,1]);
IndexedFaceSet20.color = Color21;

Coordinate Coordinate22 = createNode("Coordinate");
Coordinate22.point = new MFVec3f(new float[-0.153333,0.0353757,0.0928724,-0.309791,0.130475,0.0513265,-0.279367,0.172506,0.0329643,-0.237645,0.147146,0.0440432,-0.207221,0.189178,0.0256809,0.0274742,0.409666,-0.0706439,0.0900571,0.371627,-0.0540255,-0.155069,0.157478,0.0395296,0.19154,0.574078,-0.14247,0.325234,0.426781,-0.0781208,0.158346,0.52822,-0.122436,-0.00854155,0.629659,-0.166752,0.0919591,0.436504,-0.0823686,-0.0749286,0.537943,-0.126684,0.258847,0.335066,-0.038053,-0.0000131198,0.558441,-0.135639,0.250318,0.406283,-0.0691658,0.158346,0.563389,-0.0419336,-0.0000131198,0.59361,-0.0551364,0.250318,0.441452,0.0113371,0.325234,0.46195,0.00238207,0.19154,0.609247,-0.0619675,-0.00854153,0.664828,-0.0862492,-0.0749286,0.573112,-0.0461814,0.0274742,0.444836,0.00985895,-0.155069,0.192647,0.120032,-0.207221,0.224347,0.106184,-0.237645,0.182315,0.124546,-0.279367,0.207675,0.113467,-0.309791,0.165644,0.131829,-0.153333,0.0705449,0.173375,0.0900571,0.406796,0.0264773,0.258847,0.370235,0.0424499,0.0919591,0.471674,-0.00186576]);
IndexedFaceSet20.coord = Coordinate22;

Shape19.geometry = IndexedFaceSet20;

Transform18.child = new undefined();

Transform18.child[0] = Shape19;

Transform13.children[1] = Transform18;

Transform10.children[1] = Transform13;

Transform Transform23 = createNode("Transform");
Transform23.DEF = "Glow2";
Transform Transform24 = createNode("Transform");
Transform24.DEF = "Glow";
Billboard Billboard25 = createNode("Billboard");
Billboard25.axisOfRotation = new SFVec3f(new float[0,0,0]);
Transform Transform26 = createNode("Transform");
Transform26.DEF = "glow";
Shape Shape27 = createNode("Shape");
Appearance Appearance28 = createNode("Appearance");
ImageTexture ImageTexture29 = createNode("ImageTexture");
ImageTexture29.url = new MFString(new java.lang.String["bk-glow.png"]);
Appearance28.texture = ImageTexture29;

Shape27.appearance = Appearance28;

IndexedFaceSet IndexedFaceSet30 = createNode("IndexedFaceSet");
IndexedFaceSet30.colorIndex = new MFInt32(new int[1,1,1,-1,1,1,1,-1]);
IndexedFaceSet30.texCoordIndex = new MFInt32(new int[1,2,0,-1,2,3,0,-1]);
IndexedFaceSet30.coordIndex = new MFInt32(new int[1,2,0,-1,2,3,0,-1]);
Color Color31 = createNode("Color");
Color31.color = new MFColor(new float[0.8,0.198115,0,1,0.0603581,0]);
IndexedFaceSet30.color = Color31;

TextureCoordinate TextureCoordinate32 = createNode("TextureCoordinate");
TextureCoordinate32.point = new MFVec2f(new float[0,0,1,0,1,1,0,1,1,0.5,0,0.5,0.5,1,0.5,0]);
IndexedFaceSet30.texCoord = TextureCoordinate32;

Coordinate Coordinate33 = createNode("Coordinate");
Coordinate33.point = new MFVec3f(new float[-0.5,-0.502186,0,0.5,-0.502186,0,0.5,0.497814,0,-0.5,0.497814,0]);
IndexedFaceSet30.coord = Coordinate33;

Shape27.geometry = IndexedFaceSet30;

Transform26.child = new undefined();

Transform26.child[0] = Shape27;

Billboard25.children = new MFNode();

Billboard25.children[0] = Transform26;

Transform24.children = new MFNode();

Transform24.children[0] = Billboard25;

Transform23.children = new MFNode();

Transform23.children[0] = Transform24;

Transform10.children[2] = Transform23;

Group8.children[1] = Transform10;

children = new MFNode();

children[0] = Group8;

ROUTE ROUTE34 = createNode("ROUTE");
ROUTE34.fromNode = "_1";
ROUTE34.fromField = "isActive";
ROUTE34.toNode = "Time";
ROUTE34.toField = "set_enabled";
children[1] = ROUTE34;

ROUTE ROUTE35 = createNode("ROUTE");
ROUTE35.fromNode = "_1";
ROUTE35.fromField = "enterTime";
ROUTE35.toNode = "Time";
ROUTE35.toField = "set_startTime";
children[2] = ROUTE35;

ROUTE ROUTE36 = createNode("ROUTE");
ROUTE36.fromNode = "_1";
ROUTE36.fromField = "exitTime";
ROUTE36.toNode = "Time";
ROUTE36.toField = "set_stopTime";
children[3] = ROUTE36;

ROUTE ROUTE37 = createNode("ROUTE");
ROUTE37.fromNode = "Time";
ROUTE37.fromField = "fraction_changed";
ROUTE37.toNode = "BonusRotationInterp";
ROUTE37.toField = "set_fraction";
children[4] = ROUTE37;

ROUTE ROUTE38 = createNode("ROUTE");
ROUTE38.fromNode = "BonusRotationInterp";
ROUTE38.fromField = "value_changed";
ROUTE38.toNode = "Bonus";
ROUTE38.toField = "set_rotation";
children[5] = ROUTE38;

}
