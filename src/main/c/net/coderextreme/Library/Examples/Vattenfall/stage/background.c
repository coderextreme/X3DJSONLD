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
meta3.content = "Sat, 25 Apr 2015 12:38:17 GMT";
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
meta6.content = "Sat, 25 Apr 2015 12:38:17 GMT";
head1.meta[4] = meta6;

head = head1;

WorldInfo WorldInfo8 = createNode("WorldInfo");
WorldInfo8.info = new MFString(new java.lang.String[", ","Created in CosmoWorldsPackaged by CosmoPackage"]);
children = new MFNode();

children[0] = WorldInfo8;

Background Background9 = createNode("Background");
Background9.DEF = "city";
Background9.frontUrl = new MFString(new java.lang.String["night.png"]);
Background9.backUrl = new MFString(new java.lang.String["night.png"]);
Background9.leftUrl = new MFString(new java.lang.String["night.png"]);
Background9.rightUrl = new MFString(new java.lang.String["night.png"]);
Background9.topUrl = new MFString(new java.lang.String["night.png"]);
Background9.bottomUrl = new MFString(new java.lang.String["night.png"]);
children[1] = Background9;

Transform Transform10 = createNode("Transform");
Transform10.DEF = "vs_handle";
Transform10.scale = new SFVec3f(new float[19.4378,19.4378,19.4378]);
Switch Switch11 = createNode("Switch");
Switch11.whichChoice = 0;
Transform Transform12 = createNode("Transform");
Switch11.children = new MFNode();

Switch11.children[0] = Transform12;

Inline Inline13 = createNode("Inline");
Inline13.url = new MFString(new java.lang.String["cube.x3d"]);
Inline13.bboxSize = new SFVec3f(new float[1,1,1]);
Switch11.children[1] = Inline13;

Transform10.children = new MFNode();

Transform10.children[0] = Switch11;

children[2] = Transform10;

Transform Transform14 = createNode("Transform");
Transform14.DEF = "vs";
VisibilitySensor VisibilitySensor15 = createNode("VisibilitySensor");
VisibilitySensor15.DEF = "_1";
VisibilitySensor15.size = new SFVec3f(new float[19.4378,19.4378,19.4378]);
Transform14.children = new MFNode();

Transform14.children[0] = VisibilitySensor15;

children[3] = Transform14;

ROUTE ROUTE16 = createNode("ROUTE");
ROUTE16.fromNode = "_1";
ROUTE16.fromField = "isActive";
ROUTE16.toNode = "city";
ROUTE16.toField = "set_bind";
children[4] = ROUTE16;

ROUTE ROUTE17 = createNode("ROUTE");
ROUTE17.fromNode = "vs_handle";
ROUTE17.fromField = "translation_changed";
ROUTE17.toNode = "_1";
ROUTE17.toField = "set_center";
children[5] = ROUTE17;

ROUTE ROUTE18 = createNode("ROUTE");
ROUTE18.fromNode = "vs_handle";
ROUTE18.fromField = "scale_changed";
ROUTE18.toNode = "_1";
ROUTE18.toField = "set_size";
children[6] = ROUTE18;

}
