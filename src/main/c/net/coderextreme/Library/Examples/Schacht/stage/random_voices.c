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
meta3.content = "Fri, 28 Aug 2015 13:01:10 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V1.0.0, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Fri, 28 Aug 2015 13:01:10 GMT";
head1.meta[4] = meta6;

head = head1;

ExternProtoDeclare ExternProtoDeclare8 = createNode("ExternProtoDeclare");
ExternProtoDeclare8.name = "Random";
ExternProtoDeclare8.url = new MFString(new java.lang.String[", ","http://vr.create3000.tv/vrml/protos1.1/Random/Random_proto.x3dRandom_proto.x3d"]);
field field9 = createNode("field");
field9.name = "value";
field9.accessType = "inputOutput";
field9.type = "SFInt32";
ExternProtoDeclare8.field = new MFNode();

ExternProtoDeclare8.field[0] = field9;

field field10 = createNode("field");
field10.name = "numValues";
field10.accessType = "inputOutput";
field10.type = "SFInt32";
ExternProtoDeclare8.field[1] = field10;

field field11 = createNode("field");
field11.name = "startTime";
field11.accessType = "inputOutput";
field11.type = "SFTime";
ExternProtoDeclare8.field[2] = field11;

field field12 = createNode("field");
field12.name = "stopTime";
field12.accessType = "inputOutput";
field12.type = "SFTime";
ExternProtoDeclare8.field[3] = field12;

field field13 = createNode("field");
field13.name = "whichChoice_changed";
field13.accessType = "outputOnly";
field13.type = "SFInt32";
ExternProtoDeclare8.field[4] = field13;

field field14 = createNode("field");
field14.name = "fraction_changed";
field14.accessType = "outputOnly";
field14.type = "SFFloat";
ExternProtoDeclare8.field[5] = field14;

children = new MFNode();

children[0] = ExternProtoDeclare8;

WorldInfo WorldInfo15 = createNode("WorldInfo");
WorldInfo15.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children[1] = WorldInfo15;

Switch Switch16 = createNode("Switch");
Switch16.DEF = "_1";
Switch16.whichChoice = 3;
Transform Transform17 = createNode("Transform");
Transform Transform18 = createNode("Transform");
Transform18.DEF = "vs_1";
VisibilitySensor VisibilitySensor19 = createNode("VisibilitySensor");
VisibilitySensor19.DEF = "_2";
VisibilitySensor19.size = new SFVec3f(new float[1,1,1]);
Transform18.children = new MFNode();

Transform18.children[0] = VisibilitySensor19;

Transform17.children = new MFNode();

Transform17.children[0] = Transform18;

Sound Sound20 = createNode("Sound");
Sound20.DEF = "create3000";
Sound20.minBack = 8.2;
Sound20.minFront = 8.2;
Sound20.maxBack = 82;
Sound20.maxFront = 82;
AudioClip AudioClip21 = createNode("AudioClip");
AudioClip21.DEF = "create3000_1";
AudioClip21.description = "create3000";
AudioClip21.url = new MFString(new java.lang.String["create3000.wav"]);
AudioClip21.startTime = 1007130771.72448;
Sound20.source = AudioClip21;

Transform17.children[1] = Sound20;

Switch16.children = new MFNode();

Switch16.children[0] = Transform17;

Transform Transform22 = createNode("Transform");
Transform Transform23 = createNode("Transform");
Transform23.DEF = "vs_2";
VisibilitySensor VisibilitySensor24 = createNode("VisibilitySensor");
VisibilitySensor24.DEF = "_3";
VisibilitySensor24.size = new SFVec3f(new float[1,1,1]);
Transform23.children = new MFNode();

Transform23.children[0] = VisibilitySensor24;

Transform22.children = new MFNode();

Transform22.children[0] = Transform23;

Sound Sound25 = createNode("Sound");
Sound25.DEF = "future-tech";
Sound25.minBack = 8.2;
Sound25.minFront = 8.2;
Sound25.maxBack = 82;
Sound25.maxFront = 82;
AudioClip AudioClip26 = createNode("AudioClip");
AudioClip26.DEF = "future-tech_1";
AudioClip26.description = "future-tech";
AudioClip26.url = new MFString(new java.lang.String["future-tech.wav"]);
AudioClip26.startTime = 1007130782.19115;
Sound25.source = AudioClip26;

Transform22.children[1] = Sound25;

Switch16.children[1] = Transform22;

Transform Transform27 = createNode("Transform");
Transform Transform28 = createNode("Transform");
Transform28.DEF = "vs_3";
VisibilitySensor VisibilitySensor29 = createNode("VisibilitySensor");
VisibilitySensor29.DEF = "_4";
VisibilitySensor29.size = new SFVec3f(new float[1,1,1]);
Transform28.children = new MFNode();

Transform28.children[0] = VisibilitySensor29;

Transform27.children = new MFNode();

Transform27.children[0] = Transform28;

Sound Sound30 = createNode("Sound");
Sound30.DEF = "neopolitics";
Sound30.minBack = 8.2;
Sound30.minFront = 8.2;
Sound30.maxBack = 82;
Sound30.maxFront = 82;
AudioClip AudioClip31 = createNode("AudioClip");
AudioClip31.DEF = "neopolitics_1";
AudioClip31.description = "neopolitics";
AudioClip31.url = new MFString(new java.lang.String["neopolitics.wav"]);
AudioClip31.startTime = 1007130785.8577;
Sound30.source = AudioClip31;

Transform27.children[1] = Sound30;

Switch16.children[2] = Transform27;

Transform Transform32 = createNode("Transform");
Transform Transform33 = createNode("Transform");
Transform33.DEF = "vs";
VisibilitySensor VisibilitySensor34 = createNode("VisibilitySensor");
VisibilitySensor34.DEF = "_5";
VisibilitySensor34.size = new SFVec3f(new float[1,1,1]);
Transform33.children = new MFNode();

Transform33.children[0] = VisibilitySensor34;

Transform32.children = new MFNode();

Transform32.children[0] = Transform33;

Sound Sound35 = createNode("Sound");
Sound35.DEF = "revolution";
Sound35.minBack = 8.2;
Sound35.minFront = 8.2;
Sound35.maxBack = 82;
Sound35.maxFront = 82;
AudioClip AudioClip36 = createNode("AudioClip");
AudioClip36.DEF = "revolution_1";
AudioClip36.description = "revolution";
AudioClip36.url = new MFString(new java.lang.String["revolution.wav"]);
AudioClip36.startTime = 1007298321.90254;
Sound35.source = AudioClip36;

Transform32.children[1] = Sound35;

Switch16.children[3] = Transform32;

children[2] = Switch16;

TimeSensor TimeSensor37 = createNode("TimeSensor");
TimeSensor37.DEF = "_6";
TimeSensor37.cycleInterval = 5;
TimeSensor37.loop = True;
children[3] = TimeSensor37;

Transform Transform38 = createNode("Transform");
Transform38.DEF = "Random";
ProtoInstance ProtoInstance39 = createNode("ProtoInstance");
ProtoInstance39.name = "Random";
ProtoInstance39.DEF = "_7";
fieldValue fieldValue40 = createNode("fieldValue");
fieldValue40.name = "value";
fieldValue40.value = "3";
ProtoInstance39.fieldValue = new MFNode();

ProtoInstance39.fieldValue[0] = fieldValue40;

Transform38.children = new MFNode();

Transform38.children[0] = ProtoInstance39;

children[4] = Transform38;

ROUTE ROUTE41 = createNode("ROUTE");
ROUTE41.fromNode = "_2";
ROUTE41.fromField = "enterTime";
ROUTE41.toNode = "create3000_1";
ROUTE41.toField = "set_startTime";
children[5] = ROUTE41;

ROUTE ROUTE42 = createNode("ROUTE");
ROUTE42.fromNode = "_3";
ROUTE42.fromField = "enterTime";
ROUTE42.toNode = "future-tech_1";
ROUTE42.toField = "set_startTime";
children[6] = ROUTE42;

ROUTE ROUTE43 = createNode("ROUTE");
ROUTE43.fromNode = "_4";
ROUTE43.fromField = "enterTime";
ROUTE43.toNode = "neopolitics_1";
ROUTE43.toField = "set_startTime";
children[7] = ROUTE43;

ROUTE ROUTE44 = createNode("ROUTE");
ROUTE44.fromNode = "_5";
ROUTE44.fromField = "enterTime";
ROUTE44.toNode = "revolution_1";
ROUTE44.toField = "set_startTime";
children[8] = ROUTE44;

ROUTE ROUTE45 = createNode("ROUTE");
ROUTE45.fromNode = "_7";
ROUTE45.fromField = "whichChoice_changed";
ROUTE45.toNode = "_1";
ROUTE45.toField = "set_whichChoice";
children[9] = ROUTE45;

ROUTE ROUTE46 = createNode("ROUTE");
ROUTE46.fromNode = "_6";
ROUTE46.fromField = "cycleTime";
ROUTE46.toNode = "_7";
ROUTE46.toField = "set_startTime";
children[10] = ROUTE46;

}
