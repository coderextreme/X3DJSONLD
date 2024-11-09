#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Full";
X3D0.version = "3.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "comment";
meta2.content = "World of Titania";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "created";
meta3.content = "Sat, 29 Aug 2015 04:01:22 GMT";
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
meta6.content = "Sat, 29 Aug 2015 04:25:15 GMT";
head1.meta[4] = meta6;

head = head1;

ExternProtoDeclare ExternProtoDeclare8 = createNode("ExternProtoDeclare");
ExternProtoDeclare8.name = "Rotor";
ExternProtoDeclare8.url = new MFString(new java.lang.String[", ","../../../Titania/share/titania/Library/Prototypes/Engines/Rotor/Rotor.x3dvfile:///usr/share/titania/Library/Prototypes/Engines/Rotor/Rotor.x3dv"]);
field field9 = createNode("field");
field9.name = "enabled";
field9.accessType = "inputOutput";
field9.type = "SFBool";
ExternProtoDeclare8.field = new MFNode();

ExternProtoDeclare8.field[0] = field9;

field field10 = createNode("field");
field10.name = "cycleInterval";
field10.accessType = "inputOutput";
field10.type = "SFTime";
ExternProtoDeclare8.field[1] = field10;

field field11 = createNode("field");
field11.name = "axis";
field11.accessType = "inputOutput";
field11.type = "SFVec3f";
ExternProtoDeclare8.field[2] = field11;

field field12 = createNode("field");
field12.name = "angle";
field12.accessType = "inputOutput";
field12.type = "SFFloat";
ExternProtoDeclare8.field[3] = field12;

field field13 = createNode("field");
field13.name = "loop";
field13.accessType = "inputOutput";
field13.type = "SFBool";
ExternProtoDeclare8.field[4] = field13;

field field14 = createNode("field");
field14.name = "startTime";
field14.accessType = "inputOutput";
field14.type = "SFTime";
ExternProtoDeclare8.field[5] = field14;

field field15 = createNode("field");
field15.name = "pauseTime";
field15.accessType = "inputOutput";
field15.type = "SFTime";
ExternProtoDeclare8.field[6] = field15;

field field16 = createNode("field");
field16.name = "resumeTime";
field16.accessType = "inputOutput";
field16.type = "SFTime";
ExternProtoDeclare8.field[7] = field16;

field field17 = createNode("field");
field17.name = "stopTime";
field17.accessType = "inputOutput";
field17.type = "SFTime";
ExternProtoDeclare8.field[8] = field17;

field field18 = createNode("field");
field18.name = "rotation_changed";
field18.accessType = "outputOnly";
field18.type = "SFRotation";
ExternProtoDeclare8.field[9] = field18;

children = new MFNode();

children[0] = ExternProtoDeclare8;

Background Background19 = createNode("Background");
Background19.DEF = "Gray";
Background19.skyColor = new MFColor(new float[0.2,0.2,0.2]);
children[1] = Background19;

Viewpoint Viewpoint20 = createNode("Viewpoint");
Viewpoint20.DEF = "_1";
Viewpoint20.description = "Start";
children[2] = Viewpoint20;

}
