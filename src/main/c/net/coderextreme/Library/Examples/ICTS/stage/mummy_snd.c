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
meta3.content = "Thu, 23 Apr 2015 06:07:15 GMT";
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
meta6.content = "Thu, 23 Apr 2015 06:07:15 GMT";
head1.meta[4] = meta6;

head = head1;

ExternProtoDeclare ExternProtoDeclare8 = createNode("ExternProtoDeclare");
ExternProtoDeclare8.name = "Random";
ExternProtoDeclare8.url = new MFString(new java.lang.String["Random_proto.x3d"]);
field field9 = createNode("field");
field9.name = "minValue";
field9.accessType = "inputOutput";
field9.type = "SFFloat";
ExternProtoDeclare8.field = new MFNode();

ExternProtoDeclare8.field[0] = field9;

field field10 = createNode("field");
field10.name = "maxValue";
field10.accessType = "inputOutput";
field10.type = "SFFloat";
ExternProtoDeclare8.field[1] = field10;

field field11 = createNode("field");
field11.name = "startTime";
field11.accessType = "inputOutput";
field11.type = "SFTime";
ExternProtoDeclare8.field[2] = field11;

field field12 = createNode("field");
field12.name = "fraction_changed";
field12.accessType = "outputOnly";
field12.type = "SFFloat";
ExternProtoDeclare8.field[3] = field12;

children = new MFNode();

children[0] = ExternProtoDeclare8;

ExternProtoDeclare ExternProtoDeclare13 = createNode("ExternProtoDeclare");
ExternProtoDeclare13.name = "RandomSwitcher";
ExternProtoDeclare13.url = new MFString(new java.lang.String["RandomSwitcher_proto.x3d"]);
field field14 = createNode("field");
field14.name = "minValue";
field14.accessType = "inputOutput";
field14.type = "SFInt32";
ExternProtoDeclare13.field = new MFNode();

ExternProtoDeclare13.field[0] = field14;

field field15 = createNode("field");
field15.name = "maxValue";
field15.accessType = "inputOutput";
field15.type = "SFInt32";
ExternProtoDeclare13.field[1] = field15;

field field16 = createNode("field");
field16.name = "startTime";
field16.accessType = "inputOutput";
field16.type = "SFTime";
ExternProtoDeclare13.field[2] = field16;

field field17 = createNode("field");
field17.name = "whichChoice_changed";
field17.accessType = "outputOnly";
field17.type = "SFInt32";
ExternProtoDeclare13.field[3] = field17;

children[1] = ExternProtoDeclare13;

ExternProtoDeclare ExternProtoDeclare18 = createNode("ExternProtoDeclare");
ExternProtoDeclare18.name = "MediaCtrl";
ExternProtoDeclare18.url = new MFString(new java.lang.String["MediaCtrl_proto.x3d"]);
field field19 = createNode("field");
field19.name = "reset";
field19.accessType = "inputOutput";
field19.type = "SFBool";
ExternProtoDeclare18.field = new MFNode();

ExternProtoDeclare18.field[0] = field19;

field field20 = createNode("field");
field20.name = "startTime";
field20.accessType = "inputOutput";
field20.type = "SFTime";
ExternProtoDeclare18.field[1] = field20;

field field21 = createNode("field");
field21.name = "stopTime";
field21.accessType = "inputOutput";
field21.type = "SFTime";
ExternProtoDeclare18.field[2] = field21;

field field22 = createNode("field");
field22.name = "set_isActive";
field22.accessType = "inputOnly";
field22.type = "SFBool";
ExternProtoDeclare18.field[3] = field22;

field field23 = createNode("field");
field23.name = "source";
field23.accessType = "initializeOnly";
field23.type = "SFNode";
ExternProtoDeclare18.field[4] = field23;

children[2] = ExternProtoDeclare18;

WorldInfo WorldInfo24 = createNode("WorldInfo");
WorldInfo24.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children[3] = WorldInfo24;

LOD LOD25 = createNode("LOD");
LOD25.range = new MFFloat(new float[20]);
Transform Transform26 = createNode("Transform");
Transform26.DEF = "sound";
TimeSensor TimeSensor27 = createNode("TimeSensor");
TimeSensor27.DEF = "_1";
TimeSensor27.cycleInterval = 5;
TimeSensor27.loop = True;
Transform26.children = new MFNode();

Transform26.children[0] = TimeSensor27;

Transform Transform28 = createNode("Transform");
Transform28.DEF = "RandomPitch";
ProtoInstance ProtoInstance29 = createNode("ProtoInstance");
ProtoInstance29.name = "Random";
ProtoInstance29.DEF = "_2";
fieldValue fieldValue30 = createNode("fieldValue");
fieldValue30.name = "minValue";
fieldValue30.value = "0.6";
ProtoInstance29.fieldValue = new MFNode();

ProtoInstance29.fieldValue[0] = fieldValue30;

fieldValue fieldValue31 = createNode("fieldValue");
fieldValue31.name = "maxValue";
fieldValue31.value = "1.2";
ProtoInstance29.fieldValue[1] = fieldValue31;

Transform28.children = new MFNode();

Transform28.children[0] = ProtoInstance29;

Transform26.children[1] = Transform28;

Transform Transform32 = createNode("Transform");
Transform32.DEF = "RandomVSens";
ProtoInstance ProtoInstance33 = createNode("ProtoInstance");
ProtoInstance33.name = "RandomSwitcher";
ProtoInstance33.DEF = "_3";
fieldValue fieldValue34 = createNode("fieldValue");
fieldValue34.name = "maxValue";
fieldValue34.value = "4";
ProtoInstance33.fieldValue = new MFNode();

ProtoInstance33.fieldValue[0] = fieldValue34;

Transform32.children = new MFNode();

Transform32.children[0] = ProtoInstance33;

Transform26.children[2] = Transform32;

Transform Transform35 = createNode("Transform");
Transform35.DEF = "vSwitch";
Switch Switch36 = createNode("Switch");
Switch36.DEF = "_4";
Switch36.whichChoice = 4;
Transform Transform37 = createNode("Transform");
Transform37.DEF = "vSens1";
VisibilitySensor VisibilitySensor38 = createNode("VisibilitySensor");
VisibilitySensor38.DEF = "_5";
VisibilitySensor38.size = new SFVec3f(new float[1,1,1]);
Transform37.children = new MFNode();

Transform37.children[0] = VisibilitySensor38;

Switch36.children = new MFNode();

Switch36.children[0] = Transform37;

Transform Transform39 = createNode("Transform");
Transform39.DEF = "vSens2";
VisibilitySensor VisibilitySensor40 = createNode("VisibilitySensor");
VisibilitySensor40.DEF = "_6";
VisibilitySensor40.size = new SFVec3f(new float[1,1,1]);
Transform39.children = new MFNode();

Transform39.children[0] = VisibilitySensor40;

Switch36.children[1] = Transform39;

Transform Transform41 = createNode("Transform");
Transform41.DEF = "vSens3";
VisibilitySensor VisibilitySensor42 = createNode("VisibilitySensor");
VisibilitySensor42.DEF = "_7";
VisibilitySensor42.size = new SFVec3f(new float[1,1,1]);
Transform41.children = new MFNode();

Transform41.children[0] = VisibilitySensor42;

Switch36.children[2] = Transform41;

Transform Transform43 = createNode("Transform");
Transform43.DEF = "vSens4";
VisibilitySensor VisibilitySensor44 = createNode("VisibilitySensor");
VisibilitySensor44.DEF = "_8";
VisibilitySensor44.size = new SFVec3f(new float[1,1,1]);
Transform43.children = new MFNode();

Transform43.children[0] = VisibilitySensor44;

Switch36.children[3] = Transform43;

Transform Transform45 = createNode("Transform");
Transform45.DEF = "vSens5";
VisibilitySensor VisibilitySensor46 = createNode("VisibilitySensor");
VisibilitySensor46.DEF = "_9";
VisibilitySensor46.size = new SFVec3f(new float[1,1,1]);
Transform45.children = new MFNode();

Transform45.children[0] = VisibilitySensor46;

Switch36.children[4] = Transform45;

Transform35.children = new MFNode();

Transform35.children[0] = Switch36;

Transform26.children[3] = Transform35;

Transform Transform47 = createNode("Transform");
Transform47.DEF = "sounds";
Transform Transform48 = createNode("Transform");
Transform48.DEF = "s1";
Transform Transform49 = createNode("Transform");
Transform49.DEF = "SoundCtrl_1";
ProtoInstance ProtoInstance50 = createNode("ProtoInstance");
ProtoInstance50.name = "MediaCtrl";
ProtoInstance50.DEF = "_10";
fieldValue fieldValue51 = createNode("fieldValue");
fieldValue51.name = "startTime";
fieldValue51.value = "968631646.59428";
ProtoInstance50.fieldValue = new MFNode();

ProtoInstance50.fieldValue[0] = fieldValue51;

fieldValue fieldValue52 = createNode("fieldValue");
fieldValue52.name = "source";
AudioClip AudioClip53 = createNode("AudioClip");
AudioClip53.DEF = "_11";
AudioClip53.url = new MFString(new java.lang.String["mummy01.wav"]);
AudioClip53.pitch = 0.755888;
fieldValue52.children = new MFNode();

fieldValue52.children[0] = AudioClip53;

ProtoInstance50.fieldValue[1] = fieldValue52;

Transform49.children = new MFNode();

Transform49.children[0] = ProtoInstance50;

Transform48.children = new MFNode();

Transform48.children[0] = Transform49;

Sound Sound54 = createNode("Sound");
Sound54.location = new SFVec3f(new float[0,0.5,0]);
Sound54.minBack = 1.7;
Sound54.minFront = 1.7;
Sound54.maxBack = 17;
Sound54.maxFront = 17;
AudioClip AudioClip55 = createNode("AudioClip");
AudioClip55.USE = "_11";
Sound54.source = AudioClip55;

Transform48.children[1] = Sound54;

Transform47.children = new MFNode();

Transform47.children[0] = Transform48;

Transform Transform56 = createNode("Transform");
Transform56.DEF = "s2";
Sound Sound57 = createNode("Sound");
Sound57.location = new SFVec3f(new float[0,0.5,0]);
Sound57.minBack = 1.7;
Sound57.minFront = 1.7;
Sound57.maxBack = 17;
Sound57.maxFront = 17;
AudioClip AudioClip58 = createNode("AudioClip");
AudioClip58.DEF = "_12";
AudioClip58.url = new MFString(new java.lang.String["mummy02.wav"]);
Sound57.source = AudioClip58;

Transform56.children = new MFNode();

Transform56.children[0] = Sound57;

Transform Transform59 = createNode("Transform");
Transform59.DEF = "SoundCtrl_2";
ProtoInstance ProtoInstance60 = createNode("ProtoInstance");
ProtoInstance60.name = "MediaCtrl";
ProtoInstance60.DEF = "_13";
fieldValue fieldValue61 = createNode("fieldValue");
fieldValue61.name = "startTime";
fieldValue61.value = "968634529.591305";
ProtoInstance60.fieldValue = new MFNode();

ProtoInstance60.fieldValue[0] = fieldValue61;

fieldValue fieldValue62 = createNode("fieldValue");
fieldValue62.name = "source";
AudioClip AudioClip63 = createNode("AudioClip");
AudioClip63.USE = "_12";
fieldValue62.children = new MFNode();

fieldValue62.children[0] = AudioClip63;

ProtoInstance60.fieldValue[1] = fieldValue62;

Transform59.children = new MFNode();

Transform59.children[0] = ProtoInstance60;

Transform56.children[1] = Transform59;

Transform47.children[1] = Transform56;

Transform Transform64 = createNode("Transform");
Transform64.DEF = "s3";
Sound Sound65 = createNode("Sound");
Sound65.location = new SFVec3f(new float[0,0.5,0]);
Sound65.minBack = 1.7;
Sound65.minFront = 1.7;
Sound65.maxBack = 17;
Sound65.maxFront = 17;
AudioClip AudioClip66 = createNode("AudioClip");
AudioClip66.DEF = "_14";
AudioClip66.url = new MFString(new java.lang.String["mummy03.wav"]);
Sound65.source = AudioClip66;

Transform64.children = new MFNode();

Transform64.children[0] = Sound65;

Transform Transform67 = createNode("Transform");
Transform67.DEF = "SoundCtrl_3";
ProtoInstance ProtoInstance68 = createNode("ProtoInstance");
ProtoInstance68.name = "MediaCtrl";
ProtoInstance68.DEF = "_15";
fieldValue fieldValue69 = createNode("fieldValue");
fieldValue69.name = "startTime";
fieldValue69.value = "968632098.758846";
ProtoInstance68.fieldValue = new MFNode();

ProtoInstance68.fieldValue[0] = fieldValue69;

fieldValue fieldValue70 = createNode("fieldValue");
fieldValue70.name = "source";
AudioClip AudioClip71 = createNode("AudioClip");
AudioClip71.USE = "_14";
fieldValue70.children = new MFNode();

fieldValue70.children[0] = AudioClip71;

ProtoInstance68.fieldValue[1] = fieldValue70;

Transform67.children = new MFNode();

Transform67.children[0] = ProtoInstance68;

Transform64.children[1] = Transform67;

Transform47.children[2] = Transform64;

Transform Transform72 = createNode("Transform");
Transform72.DEF = "s4";
Sound Sound73 = createNode("Sound");
Sound73.location = new SFVec3f(new float[0,0.5,0]);
Sound73.minBack = 1.7;
Sound73.minFront = 1.7;
Sound73.maxBack = 17;
Sound73.maxFront = 17;
AudioClip AudioClip74 = createNode("AudioClip");
AudioClip74.DEF = "_16";
AudioClip74.url = new MFString(new java.lang.String["mummy04.wav"]);
Sound73.source = AudioClip74;

Transform72.children = new MFNode();

Transform72.children[0] = Sound73;

Transform Transform75 = createNode("Transform");
Transform75.DEF = "SoundCtrl_4";
ProtoInstance ProtoInstance76 = createNode("ProtoInstance");
ProtoInstance76.name = "MediaCtrl";
ProtoInstance76.DEF = "_17";
fieldValue fieldValue77 = createNode("fieldValue");
fieldValue77.name = "source";
AudioClip AudioClip78 = createNode("AudioClip");
AudioClip78.USE = "_16";
fieldValue77.children = new MFNode();

fieldValue77.children[0] = AudioClip78;

ProtoInstance76.fieldValue = new MFNode();

ProtoInstance76.fieldValue[0] = fieldValue77;

Transform75.children = new MFNode();

Transform75.children[0] = ProtoInstance76;

Transform72.children[1] = Transform75;

Transform47.children[3] = Transform72;

Transform Transform79 = createNode("Transform");
Transform79.DEF = "s5";
Sound Sound80 = createNode("Sound");
Sound80.location = new SFVec3f(new float[0,0.5,0]);
Sound80.minBack = 1.7;
Sound80.minFront = 1.7;
Sound80.maxBack = 17;
Sound80.maxFront = 17;
AudioClip AudioClip81 = createNode("AudioClip");
AudioClip81.DEF = "_18";
AudioClip81.url = new MFString(new java.lang.String["mummy05.wav"]);
Sound80.source = AudioClip81;

Transform79.children = new MFNode();

Transform79.children[0] = Sound80;

Transform Transform82 = createNode("Transform");
Transform82.DEF = "SoundCtrl_5";
ProtoInstance ProtoInstance83 = createNode("ProtoInstance");
ProtoInstance83.name = "MediaCtrl";
ProtoInstance83.DEF = "_19";
fieldValue fieldValue84 = createNode("fieldValue");
fieldValue84.name = "startTime";
fieldValue84.value = "968634812.486442";
ProtoInstance83.fieldValue = new MFNode();

ProtoInstance83.fieldValue[0] = fieldValue84;

fieldValue fieldValue85 = createNode("fieldValue");
fieldValue85.name = "source";
AudioClip AudioClip86 = createNode("AudioClip");
AudioClip86.USE = "_18";
fieldValue85.children = new MFNode();

fieldValue85.children[0] = AudioClip86;

ProtoInstance83.fieldValue[1] = fieldValue85;

Transform82.children = new MFNode();

Transform82.children[0] = ProtoInstance83;

Transform79.children[1] = Transform82;

Transform47.children[4] = Transform79;

Transform Transform87 = createNode("Transform");
Transform87.DEF = "s6_breathe";
Sound Sound88 = createNode("Sound");
Sound88.intensity = 0.2;
Sound88.location = new SFVec3f(new float[0,0.5,0]);
Sound88.minBack = 2;
Sound88.minFront = 2;
Sound88.maxBack = 20;
Sound88.maxFront = 20;
AudioClip AudioClip89 = createNode("AudioClip");
AudioClip89.DEF = "_20";
AudioClip89.url = new MFString(new java.lang.String["mummy_breath.wav"]);
AudioClip89.loop = True;
Sound88.source = AudioClip89;

Transform87.children = new MFNode();

Transform87.children[0] = Sound88;

Transform Transform90 = createNode("Transform");
Transform90.DEF = "SoundCtrl";
ProtoInstance ProtoInstance91 = createNode("ProtoInstance");
ProtoInstance91.name = "MediaCtrl";
ProtoInstance91.DEF = "_21";
fieldValue fieldValue92 = createNode("fieldValue");
fieldValue92.name = "source";
AudioClip AudioClip93 = createNode("AudioClip");
AudioClip93.USE = "_20";
fieldValue92.children = new MFNode();

fieldValue92.children[0] = AudioClip93;

ProtoInstance91.fieldValue = new MFNode();

ProtoInstance91.fieldValue[0] = fieldValue92;

Transform90.children = new MFNode();

Transform90.children[0] = ProtoInstance91;

Transform87.children[1] = Transform90;

Transform47.children[5] = Transform87;

Transform26.children[4] = Transform47;

LOD25.children = new MFNode();

LOD25.children[0] = Transform26;

Transform Transform94 = createNode("Transform");
LOD25.children[1] = Transform94;

children[4] = LOD25;

ROUTE ROUTE95 = createNode("ROUTE");
ROUTE95.fromNode = "_1";
ROUTE95.fromField = "cycleTime";
ROUTE95.toNode = "_2";
ROUTE95.toField = "set_startTime";
children[5] = ROUTE95;

ROUTE ROUTE96 = createNode("ROUTE");
ROUTE96.fromNode = "_1";
ROUTE96.fromField = "cycleTime";
ROUTE96.toNode = "_3";
ROUTE96.toField = "set_startTime";
children[6] = ROUTE96;

ROUTE ROUTE97 = createNode("ROUTE");
ROUTE97.fromNode = "_3";
ROUTE97.fromField = "whichChoice_changed";
ROUTE97.toNode = "_4";
ROUTE97.toField = "set_whichChoice";
children[7] = ROUTE97;

ROUTE ROUTE98 = createNode("ROUTE");
ROUTE98.fromNode = "_2";
ROUTE98.fromField = "fraction_changed";
ROUTE98.toNode = "_11";
ROUTE98.toField = "set_pitch";
children[8] = ROUTE98;

ROUTE ROUTE99 = createNode("ROUTE");
ROUTE99.fromNode = "_5";
ROUTE99.fromField = "enterTime";
ROUTE99.toNode = "_10";
ROUTE99.toField = "set_startTime";
children[9] = ROUTE99;

ROUTE ROUTE100 = createNode("ROUTE");
ROUTE100.fromNode = "_11";
ROUTE100.fromField = "isActive";
ROUTE100.toNode = "_10";
ROUTE100.toField = "set_isActive";
children[10] = ROUTE100;

ROUTE ROUTE101 = createNode("ROUTE");
ROUTE101.fromNode = "_2";
ROUTE101.fromField = "fraction_changed";
ROUTE101.toNode = "_12";
ROUTE101.toField = "set_pitch";
children[11] = ROUTE101;

ROUTE ROUTE102 = createNode("ROUTE");
ROUTE102.fromNode = "_6";
ROUTE102.fromField = "enterTime";
ROUTE102.toNode = "_13";
ROUTE102.toField = "set_startTime";
children[12] = ROUTE102;

ROUTE ROUTE103 = createNode("ROUTE");
ROUTE103.fromNode = "_12";
ROUTE103.fromField = "isActive";
ROUTE103.toNode = "_13";
ROUTE103.toField = "set_isActive";
children[13] = ROUTE103;

ROUTE ROUTE104 = createNode("ROUTE");
ROUTE104.fromNode = "_2";
ROUTE104.fromField = "fraction_changed";
ROUTE104.toNode = "_14";
ROUTE104.toField = "set_pitch";
children[14] = ROUTE104;

ROUTE ROUTE105 = createNode("ROUTE");
ROUTE105.fromNode = "_7";
ROUTE105.fromField = "exitTime";
ROUTE105.toNode = "_15";
ROUTE105.toField = "set_startTime";
children[15] = ROUTE105;

ROUTE ROUTE106 = createNode("ROUTE");
ROUTE106.fromNode = "_14";
ROUTE106.fromField = "isActive";
ROUTE106.toNode = "_15";
ROUTE106.toField = "set_isActive";
children[16] = ROUTE106;

ROUTE ROUTE107 = createNode("ROUTE");
ROUTE107.fromNode = "_2";
ROUTE107.fromField = "fraction_changed";
ROUTE107.toNode = "_16";
ROUTE107.toField = "set_pitch";
children[17] = ROUTE107;

ROUTE ROUTE108 = createNode("ROUTE");
ROUTE108.fromNode = "_8";
ROUTE108.fromField = "enterTime";
ROUTE108.toNode = "_17";
ROUTE108.toField = "set_startTime";
children[18] = ROUTE108;

ROUTE ROUTE109 = createNode("ROUTE");
ROUTE109.fromNode = "_16";
ROUTE109.fromField = "isActive";
ROUTE109.toNode = "_17";
ROUTE109.toField = "set_isActive";
children[19] = ROUTE109;

ROUTE ROUTE110 = createNode("ROUTE");
ROUTE110.fromNode = "_2";
ROUTE110.fromField = "fraction_changed";
ROUTE110.toNode = "_18";
ROUTE110.toField = "set_pitch";
children[20] = ROUTE110;

ROUTE ROUTE111 = createNode("ROUTE");
ROUTE111.fromNode = "_9";
ROUTE111.fromField = "enterTime";
ROUTE111.toNode = "_19";
ROUTE111.toField = "set_startTime";
children[21] = ROUTE111;

ROUTE ROUTE112 = createNode("ROUTE");
ROUTE112.fromNode = "_18";
ROUTE112.fromField = "isActive";
ROUTE112.toNode = "_19";
ROUTE112.toField = "set_isActive";
children[22] = ROUTE112;

ROUTE ROUTE113 = createNode("ROUTE");
ROUTE113.fromNode = "_1";
ROUTE113.fromField = "cycleTime";
ROUTE113.toNode = "_21";
ROUTE113.toField = "set_startTime";
children[23] = ROUTE113;

ROUTE ROUTE114 = createNode("ROUTE");
ROUTE114.fromNode = "_20";
ROUTE114.fromField = "isActive";
ROUTE114.toNode = "_21";
ROUTE114.toField = "set_isActive";
children[24] = ROUTE114;

}
