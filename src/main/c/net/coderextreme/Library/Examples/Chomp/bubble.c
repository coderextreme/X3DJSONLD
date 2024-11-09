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
meta3.content = "Mon, 09 Nov 2015 13:19:33 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V1.2.1, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Mon, 09 Nov 2015 13:19:33 GMT";
head1.meta[4] = meta6;

head = head1;

Group Group8 = createNode("Group");
Group Group9 = createNode("Group");
TimeSensor TimeSensor10 = createNode("TimeSensor");
TimeSensor10.DEF = "TimeSensor_bubble01-TIMER";
TimeSensor10.cycleInterval = 2.133;
TimeSensor10.loop = True;
TimeSensor10.startTime = 1;
Group9.children = new MFNode();

Group9.children[0] = TimeSensor10;

Transform Transform11 = createNode("Transform");
Transform11.DEF = "Billboard_bubble01-ROOT";
TimeSensor TimeSensor12 = createNode("TimeSensor");
TimeSensor12.DEF = "Billboard_bubble01-TIMER";
TimeSensor12.cycleInterval = 2.133;
Transform11.children = new MFNode();

Transform11.children[0] = TimeSensor12;

Billboard Billboard13 = createNode("Billboard");
Billboard13.DEF = "Billboard_bubble01";
Billboard13.axisOfRotation = new SFVec3f(new float[0,0,0]);
Transform Transform14 = createNode("Transform");
Transform14.DEF = "Bubble01-ROOT";
Transform14.rotation = new SFRotation(new float[0.9506,-0.2195,-0.2195,1.621]);
Transform14.scale = new SFVec3f(new float[0.4926,0.4926,0.4926]);
Transform14.scaleOrientation = new SFRotation(new float[-0.0215597,0.997188,-0.0717691,0.6209]);
PositionInterpolator PositionInterpolator15 = createNode("PositionInterpolator");
PositionInterpolator15.DEF = "Bubble01-POS-INTERP";
PositionInterpolator15.key = new MFFloat(new float[0,0.09375,0.1875,0.2813,0.375,0.4687,0.5625,0.6562,0.75,0.8437,0.9375,1]);
PositionInterpolator15.keyValue = new MFVec3f(new float[0,0,0,0.5973,1.123,0,0.09513,2.519,0,-0.24,3.984,0,0.533,5.336,0,-0.04356,6.729,0,0.1768,8.286,0,0.4477,9.871,0,-0.02732,11.37,0,0.4801,13.07,0,0.6285,14.78,0,0.4446,15.91,0]);
Transform14.children = new MFNode();

Transform14.children[0] = PositionInterpolator15;

Shape Shape16 = createNode("Shape");
Appearance Appearance17 = createNode("Appearance");
Material Material18 = createNode("Material");
Material18.diffuseColor = new SFColor(new float[0.4745,0.6784,0.7961]);
Material18.shininess = 0.25;
Appearance17.material = Material18;

Shape16.appearance = Appearance17;

IndexedFaceSet IndexedFaceSet19 = createNode("IndexedFaceSet");
IndexedFaceSet19.DEF = "Bubble01-FACES";
IndexedFaceSet19.creaseAngle = 3;
IndexedFaceSet19.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1]);
Coordinate Coordinate20 = createNode("Coordinate");
Coordinate20.DEF = "Bubble01-COORD";
Coordinate20.point = new MFVec3f(new float[0,0.6564,0,0,0.3282,-0.5685,-0.4923,0.3282,-0.2842,-0.4923,0.3282,0.2842,0,0.3282,0.5685,0.4923,0.3282,0.2842,0.4923,0.3282,-0.2842]);
IndexedFaceSet19.coord = Coordinate20;

Shape16.geometry = IndexedFaceSet19;

Transform14.child[1] = Shape16;

Billboard13.children = new MFNode();

Billboard13.children[0] = Transform14;

Transform11.children[1] = Billboard13;

Group9.children[1] = Transform11;

Group8.children = new MFNode();

Group8.children[0] = Group9;

children = new MFNode();

children[0] = Group8;

ROUTE ROUTE21 = createNode("ROUTE");
ROUTE21.fromNode = "Billboard_bubble01-TIMER";
ROUTE21.fromField = "fraction_changed";
ROUTE21.toNode = "Bubble01-POS-INTERP";
ROUTE21.toField = "set_fraction";
children[1] = ROUTE21;

ROUTE ROUTE22 = createNode("ROUTE");
ROUTE22.fromNode = "TimeSensor_bubble01-TIMER";
ROUTE22.fromField = "fraction_changed";
ROUTE22.toNode = "Bubble01-POS-INTERP";
ROUTE22.toField = "set_fraction";
children[2] = ROUTE22;

ROUTE ROUTE23 = createNode("ROUTE");
ROUTE23.fromNode = "Bubble01-POS-INTERP";
ROUTE23.fromField = "value_changed";
ROUTE23.toNode = "Bubble01-ROOT";
ROUTE23.toField = "set_translation";
children[3] = ROUTE23;

}
