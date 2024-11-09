#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Interchange";
X3D0.version = "4.0";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "HAnim";
component2.level = 3;
head1.component = new MFNode();

head1.component[0] = component2;

meta meta3 = createNode("meta");
meta3.name = "created";
meta3.content = "Tue, 19 Sep 2023 11:12:51 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "comment";
meta4.content = "Rise and Shine";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "creator";
meta5.content = "Holger Seelig";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "generator";
meta6.content = "Sunrize X3D Editor V1.1.2, https://create3000.github.io/sunrize/";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "Tue, 19 Sep 2023 13:09:55 GMT";
head1.meta[5] = meta7;

head = head1;

HAnimHumanoid HAnimHumanoid9 = createNode("HAnimHumanoid");
HAnimHumanoid9.version = "2.0";
HAnimJoint HAnimJoint10 = createNode("HAnimJoint");
HAnimJoint10.DEF = "_1";
HAnimJoint10.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint10.llimit = new MFFloat(new float[0,0,0]);
HAnimDisplacer HAnimDisplacer11 = createNode("HAnimDisplacer");
HAnimDisplacer11.DEF = "_2";
HAnimDisplacer11.coordIndex = new MFInt32(new int[0]);
HAnimDisplacer11.weight = 0.756;
HAnimDisplacer11.displacements = new MFVec3f(new float[-3,0,0]);
HAnimJoint10.displacers = new MFNode();

HAnimJoint10.displacers[0] = HAnimDisplacer11;

HAnimDisplacer HAnimDisplacer12 = createNode("HAnimDisplacer");
HAnimDisplacer12.DEF = "_3";
HAnimDisplacer12.coordIndex = new MFInt32(new int[1]);
HAnimDisplacer12.weight = 0.756;
HAnimDisplacer12.displacements = new MFVec3f(new float[-1,-2,0]);
HAnimJoint10.displacers[1] = HAnimDisplacer12;

HAnimDisplacer HAnimDisplacer13 = createNode("HAnimDisplacer");
HAnimDisplacer13.DEF = "_4";
HAnimDisplacer13.coordIndex = new MFInt32(new int[2]);
HAnimDisplacer13.weight = 0.756;
HAnimDisplacer13.displacements = new MFVec3f(new float[1,0,0]);
HAnimJoint10.displacers[2] = HAnimDisplacer13;

HAnimDisplacer HAnimDisplacer14 = createNode("HAnimDisplacer");
HAnimDisplacer14.DEF = "_5";
HAnimDisplacer14.coordIndex = new MFInt32(new int[3]);
HAnimDisplacer14.weight = 0.756;
HAnimDisplacer14.displacements = new MFVec3f(new float[-1,2,0]);
HAnimJoint10.displacers[3] = HAnimDisplacer14;

HAnimDisplacer HAnimDisplacer15 = createNode("HAnimDisplacer");
HAnimDisplacer15.DEF = "_6";
HAnimDisplacer15.coordIndex = new MFInt32(new int[0]);
HAnimDisplacer15.weight = 0.756;
HAnimDisplacer15.displacements = new MFVec3f(new float[1,0,0]);
HAnimJoint10.displacers[4] = HAnimDisplacer15;

HAnimJoint HAnimJoint16 = createNode("HAnimJoint");
HAnimJoint16.DEF = "_7";
HAnimJoint16.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint16.llimit = new MFFloat(new float[0,0,0]);
HAnimDisplacer HAnimDisplacer17 = createNode("HAnimDisplacer");
HAnimDisplacer17.DEF = "_8";
HAnimDisplacer17.coordIndex = new MFInt32(new int[1]);
HAnimDisplacer17.weight = 0.756;
HAnimDisplacer17.displacements = new MFVec3f(new float[1,0,0]);
HAnimJoint16.displacers = new MFNode();

HAnimJoint16.displacers[0] = HAnimDisplacer17;

HAnimJoint HAnimJoint18 = createNode("HAnimJoint");
HAnimJoint18.DEF = "_9";
HAnimJoint18.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint18.llimit = new MFFloat(new float[0,0,0]);
HAnimDisplacer HAnimDisplacer19 = createNode("HAnimDisplacer");
HAnimDisplacer19.DEF = "_10";
HAnimDisplacer19.coordIndex = new MFInt32(new int[2]);
HAnimDisplacer19.weight = 0.756;
HAnimDisplacer19.displacements = new MFVec3f(new float[1,0,0]);
HAnimJoint18.displacers = new MFNode();

HAnimJoint18.displacers[0] = HAnimDisplacer19;

HAnimJoint HAnimJoint20 = createNode("HAnimJoint");
HAnimJoint20.DEF = "_11";
HAnimJoint20.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint20.llimit = new MFFloat(new float[0,0,0]);
HAnimDisplacer HAnimDisplacer21 = createNode("HAnimDisplacer");
HAnimDisplacer21.DEF = "_12";
HAnimDisplacer21.coordIndex = new MFInt32(new int[3]);
HAnimDisplacer21.weight = 0.756;
HAnimDisplacer21.displacements = new MFVec3f(new float[1,0,0]);
HAnimJoint20.displacers = new MFNode();

HAnimJoint20.displacers[0] = HAnimDisplacer21;

HAnimJoint18.children[1] = HAnimJoint20;

HAnimJoint16.children[1] = HAnimJoint18;

HAnimJoint10.children[5] = HAnimJoint16;

HAnimHumanoid9.joints = new MFNode();

HAnimHumanoid9.joints[0] = HAnimJoint10;

HAnimJoint HAnimJoint22 = createNode("HAnimJoint");
HAnimJoint22.USE = "_1";
HAnimHumanoid9.joints[1] = HAnimJoint22;

HAnimJoint HAnimJoint23 = createNode("HAnimJoint");
HAnimJoint23.USE = "_7";
HAnimHumanoid9.joints[2] = HAnimJoint23;

HAnimJoint HAnimJoint24 = createNode("HAnimJoint");
HAnimJoint24.USE = "_9";
HAnimHumanoid9.joints[3] = HAnimJoint24;

HAnimJoint HAnimJoint25 = createNode("HAnimJoint");
HAnimJoint25.USE = "_11";
HAnimHumanoid9.joints[4] = HAnimJoint25;

Coordinate Coordinate26 = createNode("Coordinate");
Coordinate26.DEF = "_13";
Coordinate26.point = new MFVec3f(new float[1,1,0,-1,1,0,-1,-1,0,1,-1,0]);
HAnimHumanoid9.skinCoord = Coordinate26;

Shape Shape27 = createNode("Shape");
Appearance Appearance28 = createNode("Appearance");
UnlitMaterial UnlitMaterial29 = createNode("UnlitMaterial");
UnlitMaterial29.emissiveColor = new SFColor(new float[0.4156863,0.1960784,0.6235294]);
UnlitMaterial29.normalScale = 0;
Appearance28.material = UnlitMaterial29;

Shape27.appearance = Appearance28;

IndexedLineSet IndexedLineSet30 = createNode("IndexedLineSet");
IndexedLineSet30.coordIndex = new MFInt32(new int[0,1,2,3,0,-1]);
Coordinate Coordinate31 = createNode("Coordinate");
Coordinate31.USE = "_13";
IndexedLineSet30.coord = Coordinate31;

Shape27.geometry = IndexedLineSet30;

HAnimHumanoid9.skin[5] = Shape27;

children = new MFNode();

children[0] = HAnimHumanoid9;

TimeSensor TimeSensor32 = createNode("TimeSensor");
TimeSensor32.DEF = "_14";
TimeSensor32.loop = True;
children[1] = TimeSensor32;

ROUTE ROUTE33 = createNode("ROUTE");
ROUTE33.fromNode = "_14";
ROUTE33.fromField = "fraction_changed";
ROUTE33.toNode = "_2";
ROUTE33.toField = "set_weight";
children[2] = ROUTE33;

ROUTE ROUTE34 = createNode("ROUTE");
ROUTE34.fromNode = "_14";
ROUTE34.fromField = "fraction_changed";
ROUTE34.toNode = "_3";
ROUTE34.toField = "set_weight";
children[3] = ROUTE34;

ROUTE ROUTE35 = createNode("ROUTE");
ROUTE35.fromNode = "_14";
ROUTE35.fromField = "fraction_changed";
ROUTE35.toNode = "_4";
ROUTE35.toField = "set_weight";
children[4] = ROUTE35;

ROUTE ROUTE36 = createNode("ROUTE");
ROUTE36.fromNode = "_14";
ROUTE36.fromField = "fraction_changed";
ROUTE36.toNode = "_5";
ROUTE36.toField = "set_weight";
children[5] = ROUTE36;

ROUTE ROUTE37 = createNode("ROUTE");
ROUTE37.fromNode = "_14";
ROUTE37.fromField = "fraction_changed";
ROUTE37.toNode = "_6";
ROUTE37.toField = "set_weight";
children[6] = ROUTE37;

ROUTE ROUTE38 = createNode("ROUTE");
ROUTE38.fromNode = "_14";
ROUTE38.fromField = "fraction_changed";
ROUTE38.toNode = "_12";
ROUTE38.toField = "set_weight";
children[7] = ROUTE38;

ROUTE ROUTE39 = createNode("ROUTE");
ROUTE39.fromNode = "_14";
ROUTE39.fromField = "fraction_changed";
ROUTE39.toNode = "_10";
ROUTE39.toField = "set_weight";
children[8] = ROUTE39;

ROUTE ROUTE40 = createNode("ROUTE");
ROUTE40.fromNode = "_14";
ROUTE40.fromField = "fraction_changed";
ROUTE40.toNode = "_8";
ROUTE40.toField = "set_weight";
children[9] = ROUTE40;

}
