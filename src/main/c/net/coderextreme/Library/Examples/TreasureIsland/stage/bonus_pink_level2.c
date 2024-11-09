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
meta3.content = "Thu, 05 Nov 2015 03:28:55 GMT";
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
meta6.content = "Thu, 05 Nov 2015 03:28:55 GMT";
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
TimeSensor16.startTime = 952978098.016901;
TimeSensor16.stopTime = 952972802.072958;
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
Transform18.DEF = "pink";
Shape Shape19 = createNode("Shape");
Appearance Appearance20 = createNode("Appearance");
Shape19.appearance = Appearance20;

IndexedFaceSet IndexedFaceSet21 = createNode("IndexedFaceSet");
IndexedFaceSet21.colorPerVertex = False;
IndexedFaceSet21.colorIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9,10,11]);
IndexedFaceSet21.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,0,2,4,5,-1,3,6,4,2,-1,4,7,5,-1,6,7,4,-1,7,6,8,-1,6,3,8,-1,5,7,8,-1,3,1,8,-1,5,8,0,-1,1,0,8,-1]);
Color Color22 = createNode("Color");
Color22.color = new MFColor(new float[1,0,0.155583,1,0,0.370293,0.8,0,0.612321,0.8,0.0151274,0.373652,1,0,0.462642,1,0.135478,0.337722,1,0,0.596723,1,0.0156003,0.918097,0.984243,0,1,1,0,0.646092,1,0,0.561501,1,0,0.819442]);
IndexedFaceSet21.color = Color22;

Coordinate Coordinate23 = createNode("Coordinate");
Coordinate23.point = new MFVec3f(new float[-0.2,0.145225,-0.1,-0.3,0.145225,0,-0.2,0.253825,0,-0.2,0.145225,0.1,0.2,0.253825,0,0.2,0.145225,-0.1,0.2,0.145225,0.1,0.3,0.145225,0,0,-0.253825,0]);
IndexedFaceSet21.coord = Coordinate23;

Shape19.geometry = IndexedFaceSet21;

Transform18.child = new undefined();

Transform18.child[0] = Shape19;

Transform13.children[1] = Transform18;

Transform10.children[1] = Transform13;

Transform Transform24 = createNode("Transform");
Transform24.DEF = "Glow2";
Transform Transform25 = createNode("Transform");
Transform25.DEF = "Glow";
Billboard Billboard26 = createNode("Billboard");
Billboard26.axisOfRotation = new SFVec3f(new float[0,0,0]);
Transform Transform27 = createNode("Transform");
Transform27.DEF = "glow";
Shape Shape28 = createNode("Shape");
Appearance Appearance29 = createNode("Appearance");
ImageTexture ImageTexture30 = createNode("ImageTexture");
ImageTexture30.url = new MFString(new java.lang.String["bv-glow.png"]);
Appearance29.texture = ImageTexture30;

Shape28.appearance = Appearance29;

IndexedFaceSet IndexedFaceSet31 = createNode("IndexedFaceSet");
IndexedFaceSet31.colorIndex = new MFInt32(new int[1,1,1,-1,1,1,1,-1]);
IndexedFaceSet31.coordIndex = new MFInt32(new int[1,2,0,-1,2,3,0,-1]);
Color Color32 = createNode("Color");
Color32.color = new MFColor(new float[0.8,0.198115,0,1,0.0603581,0]);
IndexedFaceSet31.color = Color32;

TextureCoordinate TextureCoordinate33 = createNode("TextureCoordinate");
TextureCoordinate33.point = new MFVec2f(new float[0,0,1,0,1,1,0,1,1,0.5,0,0.5,0.5,1,0.5,0]);
IndexedFaceSet31.texCoord = TextureCoordinate33;

Coordinate Coordinate34 = createNode("Coordinate");
Coordinate34.point = new MFVec3f(new float[-0.5,-0.502186,0,0.5,-0.502186,0,0.5,0.497814,0,-0.5,0.497814,0]);
IndexedFaceSet31.coord = Coordinate34;

Shape28.geometry = IndexedFaceSet31;

Transform27.child = new undefined();

Transform27.child[0] = Shape28;

Billboard26.children = new MFNode();

Billboard26.children[0] = Transform27;

Transform25.children = new MFNode();

Transform25.children[0] = Billboard26;

Transform24.children = new MFNode();

Transform24.children[0] = Transform25;

Transform10.children[2] = Transform24;

Group8.children[1] = Transform10;

children = new MFNode();

children[0] = Group8;

ROUTE ROUTE35 = createNode("ROUTE");
ROUTE35.fromNode = "_1";
ROUTE35.fromField = "isActive";
ROUTE35.toNode = "Time";
ROUTE35.toField = "set_enabled";
children[1] = ROUTE35;

ROUTE ROUTE36 = createNode("ROUTE");
ROUTE36.fromNode = "_1";
ROUTE36.fromField = "enterTime";
ROUTE36.toNode = "Time";
ROUTE36.toField = "set_startTime";
children[2] = ROUTE36;

ROUTE ROUTE37 = createNode("ROUTE");
ROUTE37.fromNode = "_1";
ROUTE37.fromField = "exitTime";
ROUTE37.toNode = "Time";
ROUTE37.toField = "set_stopTime";
children[3] = ROUTE37;

ROUTE ROUTE38 = createNode("ROUTE");
ROUTE38.fromNode = "Time";
ROUTE38.fromField = "fraction_changed";
ROUTE38.toNode = "BonusRotationInterp";
ROUTE38.toField = "set_fraction";
children[4] = ROUTE38;

ROUTE ROUTE39 = createNode("ROUTE");
ROUTE39.fromNode = "BonusRotationInterp";
ROUTE39.fromField = "value_changed";
ROUTE39.toNode = "Bonus";
ROUTE39.toField = "set_rotation";
children[5] = ROUTE39;

}
