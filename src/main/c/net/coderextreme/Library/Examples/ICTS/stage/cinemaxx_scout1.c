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
meta3.content = "Thu, 23 Apr 2015 06:06:58 GMT";
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
meta6.content = "Thu, 23 Apr 2015 06:06:58 GMT";
head1.meta[4] = meta6;

head = head1;

WorldInfo WorldInfo8 = createNode("WorldInfo");
WorldInfo8.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children = new MFNode();

children[0] = WorldInfo8;

Transform Transform9 = createNode("Transform");
Transform9.DEF = "else";
Inline Inline10 = createNode("Inline");
Inline10.url = new MFString(new java.lang.String["else_demo.x3d"]);
Inline10.bboxSize = new SFVec3f(new float[8.02745,8.02745,8.02745]);
Transform9.children = new MFNode();

Transform9.children[0] = Inline10;

children[1] = Transform9;

Transform Transform11 = createNode("Transform");
Transform11.DEF = "hudLOD";
LOD LOD12 = createNode("LOD");
LOD12.DEF = "HUD";
LOD12.range = new MFFloat(new float[6]);
Transform Transform13 = createNode("Transform");
Transform Transform14 = createNode("Transform");
Transform14.DEF = "HUD_obj";
Transform Transform15 = createNode("Transform");
Collision Collision16 = createNode("Collision");
Collision16.enabled = False;
LOD LOD17 = createNode("LOD");
LOD17.range = new MFFloat(new float[3]);
Transform Transform18 = createNode("Transform");
Transform18.DEF = "on";
Inline Inline19 = createNode("Inline");
Inline19.url = new MFString(new java.lang.String["window-cinemaxx.x3d"]);
Inline19.bboxSize = new SFVec3f(new float[1.288,0.8863,0.060779]);
Inline19.bboxCenter = new SFVec3f(new float[5.06639e-7,-2.23517e-7,-0.320511]);
Transform18.children = new MFNode();

Transform18.children[0] = Inline19;

LOD17.children = new MFNode();

LOD17.children[0] = Transform18;

Transform Transform20 = createNode("Transform");
Transform20.DEF = "off_1";
LOD17.children[1] = Transform20;

Collision16.proxy = LOD17;

Transform15.children = new MFNode();

Transform15.children[0] = Collision16;

Transform14.children = new MFNode();

Transform14.children[0] = Transform15;

Transform13.children = new MFNode();

Transform13.children[0] = Transform14;

Transform Transform21 = createNode("Transform");
Transform21.DEF = "prx";
ProximitySensor ProximitySensor22 = createNode("ProximitySensor");
ProximitySensor22.DEF = "_1";
ProximitySensor22.size = new SFVec3f(new float[25,25,25]);
ProximitySensor22.center = new SFVec3f(new float[0,1,0]);
Transform21.children = new MFNode();

Transform21.children[0] = ProximitySensor22;

Transform13.children[1] = Transform21;

LOD12.children = new MFNode();

LOD12.children[0] = Transform13;

Transform Transform23 = createNode("Transform");
Transform23.DEF = "off";
LOD12.children[1] = Transform23;

Transform11.children = new MFNode();

Transform11.children[0] = LOD12;

children[2] = Transform11;

Viewpoint Viewpoint24 = createNode("Viewpoint");
Viewpoint24.DEF = "VP1";
Viewpoint24.position = new SFVec3f(new float[3.71258,0.795521,3.41767]);
Viewpoint24.orientation = new SFRotation(new float[-0.0239249,0.998759,0.0436796,0.859438]);
Viewpoint24.fieldOfView = 1.2;
children[3] = Viewpoint24;

ROUTE ROUTE25 = createNode("ROUTE");
ROUTE25.fromNode = "_1";
ROUTE25.fromField = "position_changed";
ROUTE25.toNode = "on";
ROUTE25.toField = "set_translation";
children[4] = ROUTE25;

ROUTE ROUTE26 = createNode("ROUTE");
ROUTE26.fromNode = "_1";
ROUTE26.fromField = "orientation_changed";
ROUTE26.toNode = "on";
ROUTE26.toField = "set_rotation";
children[5] = ROUTE26;

}
