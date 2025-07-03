#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "localrotation.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "creator";
meta3.content = "John Carlson";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "generator";
meta4.content = "manual";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "identifier";
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/personal/localrotation.x3d";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "description";
meta6.content = "chained boxes";
head1.meta[4] = meta6;

head = head1;

WorldInfo WorldInfo8 = createNode("WorldInfo");
WorldInfo8.title = "localrotation.x3d";
children = new MFNode();

children[0] = WorldInfo8;

NavigationInfo NavigationInfo9 = createNode("NavigationInfo");
NavigationInfo9.type = new MFString(new java.lang.String["ANY","EXAMINE","FLY","LOOKAT"]);
children[1] = NavigationInfo9;

Viewpoint Viewpoint10 = createNode("Viewpoint");
Viewpoint10.description = "Tour Views";
Viewpoint10.position = new SFVec3f(new float[0,0,20]);
children[2] = Viewpoint10;

Transform Transform11 = createNode("Transform");
Transform11.translation = new SFVec3f(new float[-4,0,0]);
Shape Shape12 = createNode("Shape");
Box Box13 = createNode("Box");
Shape12.geometry = Box13;

Transform11.child = new undefined();

Transform11.child[0] = Shape12;

Transform Transform14 = createNode("Transform");
Transform14.DEF = "TransformTargetParent";
Transform14.translation = new SFVec3f(new float[4,0,0]);
Shape Shape15 = createNode("Shape");
Box Box16 = createNode("Box");
Shape15.geometry = Box16;

Transform14.child = new undefined();

Transform14.child[0] = Shape15;

Transform Transform17 = createNode("Transform");
Transform17.DEF = "TransformTargetChild";
Transform17.translation = new SFVec3f(new float[4,0,0]);
Shape Shape18 = createNode("Shape");
Box Box19 = createNode("Box");
Shape18.geometry = Box19;

Transform17.child = new undefined();

Transform17.child[0] = Shape18;

Transform14.children[1] = Transform17;

Transform11.children[1] = Transform14;

children[3] = Transform11;

ProximitySensor ProximitySensor20 = createNode("ProximitySensor");
ProximitySensor20.DEF = "ActivateSensor";
ProximitySensor20.size = new SFVec3f(new float[1000000,1000000,1000000]);
children[4] = ProximitySensor20;

TimeSensor TimeSensor21 = createNode("TimeSensor");
TimeSensor21.DEF = "Clock";
children[5] = TimeSensor21;

ROUTE ROUTE22 = createNode("ROUTE");
ROUTE22.fromNode = "ActivateSensor";
ROUTE22.fromField = "enterTime";
ROUTE22.toNode = "Clock";
ROUTE22.toField = "set_startTime";
children[6] = ROUTE22;

OrientationInterpolator OrientationInterpolator23 = createNode("OrientationInterpolator");
OrientationInterpolator23.DEF = "Rotater";
OrientationInterpolator23.key = new MFFloat(new float[0,1]);
OrientationInterpolator23.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.57]);
children[7] = OrientationInterpolator23;

ROUTE ROUTE24 = createNode("ROUTE");
ROUTE24.fromNode = "Clock";
ROUTE24.fromField = "fraction_changed";
ROUTE24.toNode = "Rotater";
ROUTE24.toField = "set_fraction";
children[8] = ROUTE24;

ROUTE ROUTE25 = createNode("ROUTE");
ROUTE25.fromNode = "Rotater";
ROUTE25.fromField = "value_changed";
ROUTE25.toNode = "TransformTargetParent";
ROUTE25.toField = "set_rotation";
children[9] = ROUTE25;

ROUTE ROUTE26 = createNode("ROUTE");
ROUTE26.fromNode = "Rotater";
ROUTE26.fromField = "value_changed";
ROUTE26.toNode = "TransformTargetChild";
ROUTE26.toField = "set_rotation";
children[10] = ROUTE26;

}
