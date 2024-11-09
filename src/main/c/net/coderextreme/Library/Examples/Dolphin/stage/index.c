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
meta3.content = "Wed, 22 Apr 2015 09:04:29 GMT";
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
meta6.content = "Wed, 22 Apr 2015 09:04:29 GMT";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "title";
meta7.content = "Dolphin";
head1.meta[5] = meta7;

head = head1;

ExternProtoDeclare ExternProtoDeclare9 = createNode("ExternProtoDeclare");
ExternProtoDeclare9.name = "Dolphin";
ExternProtoDeclare9.url = new MFString(new java.lang.String["DolphinPROTO.x3d"]);
field field10 = createNode("field");
field10.name = "set_fraction";
field10.accessType = "inputOnly";
field10.type = "SFFloat";
ExternProtoDeclare9.field = new MFNode();

ExternProtoDeclare9.field[0] = field10;

field field11 = createNode("field");
field11.name = "collide";
field11.accessType = "inputOutput";
field11.type = "SFBool";
ExternProtoDeclare9.field[1] = field11;

field field12 = createNode("field");
field12.name = "collideTime";
field12.accessType = "outputOnly";
field12.type = "SFTime";
ExternProtoDeclare9.field[2] = field12;

children = new MFNode();

children[0] = ExternProtoDeclare9;

NavigationInfo NavigationInfo13 = createNode("NavigationInfo");
children[1] = NavigationInfo13;

Background Background14 = createNode("Background");
Background14.skyAngle = new MFFloat(new float[1.5708]);
Background14.skyColor = new MFColor(new float[1,1,1,0.35,0.65,0.65]);
Background14.groundAngle = new MFFloat(new float[1.5708]);
Background14.groundColor = new MFColor(new float[0.15,0.3,0.35,0.35,0.65,0.65]);
children[2] = Background14;

DirectionalLight DirectionalLight15 = createNode("DirectionalLight");
DirectionalLight15.color = new SFColor(new float[0.55,0.75,0.75]);
DirectionalLight15.ambientIntensity = 0.7;
DirectionalLight15.direction = new SFVec3f(new float[0,-1,0]);
children[3] = DirectionalLight15;

DirectionalLight DirectionalLight16 = createNode("DirectionalLight");
DirectionalLight16.color = new SFColor(new float[0.55,0.75,0.75]);
DirectionalLight16.ambientIntensity = 0.7;
DirectionalLight16.direction = new SFVec3f(new float[0,-1,0]);
children[4] = DirectionalLight16;

ProtoInstance ProtoInstance17 = createNode("ProtoInstance");
ProtoInstance17.name = "Dolphin";
ProtoInstance17.DEF = "DOLPHIN";
children[5] = ProtoInstance17;

TimeSensor TimeSensor18 = createNode("TimeSensor");
TimeSensor18.DEF = "TS";
TimeSensor18.loop = True;
children[6] = TimeSensor18;

ROUTE ROUTE19 = createNode("ROUTE");
ROUTE19.fromNode = "TS";
ROUTE19.fromField = "fraction_changed";
ROUTE19.toNode = "DOLPHIN";
ROUTE19.toField = "set_fraction";
children[7] = ROUTE19;

}
