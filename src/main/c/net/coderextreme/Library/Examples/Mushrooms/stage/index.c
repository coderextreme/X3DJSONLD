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
meta3.content = "Fri, 25 Sep 2015 17:43:15 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V1.1.1, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Fri, 25 Sep 2015 17:43:15 GMT";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "title";
meta7.content = "Mushrooms";
head1.meta[5] = meta7;

head = head1;

Group Group9 = createNode("Group");
WorldInfo WorldInfo10 = createNode("WorldInfo");
WorldInfo10.info = new MFString(new java.lang.String[", ","Created in Titania, ","Packaged by CosmoPackagePackaged by CosmoPackage"]);
Group9.children = new MFNode();

Group9.children[0] = WorldInfo10;

Transform Transform11 = createNode("Transform");
Transform11.translation = new SFVec3f(new float[52.4723,0,11.8231]);
Transform11.rotation = new SFRotation(new float[0,1,0,1.49907]);
Transform Transform12 = createNode("Transform");
Inline Inline13 = createNode("Inline");
Inline13.url = new MFString(new java.lang.String["hupfpilz.x3d"]);
Inline13.bboxSize = new SFVec3f(new float[5.41069,6.87135,5.41068]);
Inline13.bboxCenter = new SFVec3f(new float[31.5365,106.54,-26.9564]);
Transform12.children = new MFNode();

Transform12.children[0] = Inline13;

Transform11.children = new MFNode();

Transform11.children[0] = Transform12;

Group9.children[1] = Transform11;

Transform Transform14 = createNode("Transform");
Transform14.translation = new SFVec3f(new float[35.6884,0,14.5356]);
Transform14.rotation = new SFRotation(new float[0,1,0,1.22763]);
Transform Transform15 = createNode("Transform");
Inline Inline16 = createNode("Inline");
Inline16.url = new MFString(new java.lang.String["hupfpilz.x3d"]);
Inline16.bboxSize = new SFVec3f(new float[5.41069,6.87135,5.41068]);
Inline16.bboxCenter = new SFVec3f(new float[31.5365,106.54,-26.9564]);
Transform15.children = new MFNode();

Transform15.children[0] = Inline16;

Transform14.children = new MFNode();

Transform14.children[0] = Transform15;

Group9.children[2] = Transform14;

Transform Transform17 = createNode("Transform");
Transform17.translation = new SFVec3f(new float[6.59897,0,10.7292]);
Transform17.rotation = new SFRotation(new float[0,1,0,0.61945]);
Transform Transform18 = createNode("Transform");
Inline Inline19 = createNode("Inline");
Inline19.url = new MFString(new java.lang.String["hupfpilz.x3d"]);
Inline19.bboxSize = new SFVec3f(new float[5.41069,6.87135,5.41068]);
Inline19.bboxCenter = new SFVec3f(new float[31.5365,106.54,-26.9564]);
Transform18.children = new MFNode();

Transform18.children[0] = Inline19;

Transform17.children = new MFNode();

Transform17.children[0] = Transform18;

Group9.children[3] = Transform17;

Transform Transform20 = createNode("Transform");
Transform20.translation = new SFVec3f(new float[-12.4465,0,-2.34085]);
Transform20.rotation = new SFRotation(new float[0,1,0,0.200959]);
Transform Transform21 = createNode("Transform");
Inline Inline22 = createNode("Inline");
Inline22.url = new MFString(new java.lang.String["hupfpilz.x3d"]);
Inline22.bboxSize = new SFVec3f(new float[5.41069,6.87135,5.41068]);
Inline22.bboxCenter = new SFVec3f(new float[31.5365,106.54,-26.9564]);
Transform21.children = new MFNode();

Transform21.children[0] = Inline22;

Transform20.children = new MFNode();

Transform20.children[0] = Transform21;

Group9.children[4] = Transform20;

Transform Transform23 = createNode("Transform");
Transform23.translation = new SFVec3f(new float[-24.2654,0,-22.5612]);
Transform23.rotation = new SFRotation(new float[0,-1,0,0.203997]);
Transform Transform24 = createNode("Transform");
Inline Inline25 = createNode("Inline");
Inline25.url = new MFString(new java.lang.String["hupfpilz.x3d"]);
Inline25.bboxSize = new SFVec3f(new float[5.41069,6.87135,5.41068]);
Inline25.bboxCenter = new SFVec3f(new float[31.5365,106.54,-26.9564]);
Transform24.children = new MFNode();

Transform24.children[0] = Inline25;

Transform23.children = new MFNode();

Transform23.children[0] = Transform24;

Group9.children[5] = Transform23;

Transform Transform26 = createNode("Transform");
Transform26.translation = new SFVec3f(new float[-26.8513,0,-39.5722]);
Transform26.rotation = new SFRotation(new float[0,-1,0,0.455394]);
Transform Transform27 = createNode("Transform");
Inline Inline28 = createNode("Inline");
Inline28.url = new MFString(new java.lang.String["hupfpilz.x3d"]);
Inline28.bboxSize = new SFVec3f(new float[5.41069,6.87135,5.41068]);
Inline28.bboxCenter = new SFVec3f(new float[31.5365,106.54,-26.9564]);
Transform27.children = new MFNode();

Transform27.children[0] = Inline28;

Transform26.children = new MFNode();

Transform26.children[0] = Transform27;

Group9.children[6] = Transform26;

Transform Transform29 = createNode("Transform");
Transform29.translation = new SFVec3f(new float[-13.6717,0,-73.6618]);
Transform29.rotation = new SFRotation(new float[0,-1,0,1.20026]);
Transform Transform30 = createNode("Transform");
Inline Inline31 = createNode("Inline");
Inline31.url = new MFString(new java.lang.String["hupfpilz.x3d"]);
Inline31.bboxSize = new SFVec3f(new float[5.41069,6.87135,5.41068]);
Inline31.bboxCenter = new SFVec3f(new float[31.5365,106.54,-26.9564]);
Transform30.children = new MFNode();

Transform30.children[0] = Inline31;

Transform29.children = new MFNode();

Transform29.children[0] = Transform30;

Group9.children[7] = Transform29;

Inline Inline32 = createNode("Inline");
Inline32.url = new MFString(new java.lang.String["pilzhaus.x3d"]);
Inline32.bboxSize = new SFVec3f(new float[1161.95,580.974,1161.95]);
Inline32.bboxCenter = new SFVec3f(new float[4.58313,143.655,1.2912]);
Group9.children[8] = Inline32;

PointLight PointLight33 = createNode("PointLight");
PointLight33.DEF = "Light2";
PointLight33.color = new SFColor(new float[0.341451,1,0.269661]);
PointLight33.intensity = 0.592233;
PointLight33.location = new SFVec3f(new float[36.7051,113.084,-43.2249]);
Group9.children[9] = PointLight33;

children = new MFNode();

children[0] = Group9;

}
