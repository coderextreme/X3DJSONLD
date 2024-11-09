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
meta3.content = "Sat, 25 Apr 2015 12:38:25 GMT";
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
meta6.content = "Sat, 25 Apr 2015 12:38:25 GMT";
head1.meta[4] = meta6;

head = head1;

ExternProtoDeclare ExternProtoDeclare8 = createNode("ExternProtoDeclare");
ExternProtoDeclare8.name = "CheckBox";
ExternProtoDeclare8.url = new MFString(new java.lang.String["CheckBox_proto.x3d"]);
field field9 = createNode("field");
field9.name = "enabled";
field9.accessType = "inputOutput";
field9.type = "SFBool";
ExternProtoDeclare8.field = new MFNode();

ExternProtoDeclare8.field[0] = field9;

field field10 = createNode("field");
field10.name = "on";
field10.accessType = "inputOutput";
field10.type = "SFBool";
ExternProtoDeclare8.field[1] = field10;

field field11 = createNode("field");
field11.name = "touchTime";
field11.accessType = "inputOutput";
field11.type = "SFTime";
ExternProtoDeclare8.field[2] = field11;

field field12 = createNode("field");
field12.name = "isActive";
field12.accessType = "outputOnly";
field12.type = "SFBool";
ExternProtoDeclare8.field[3] = field12;

field field13 = createNode("field");
field13.name = "whichChoice";
field13.accessType = "inputOutput";
field13.type = "SFInt32";
ExternProtoDeclare8.field[4] = field13;

field field14 = createNode("field");
field14.name = "choice";
field14.accessType = "inputOutput";
field14.type = "MFNode";
ExternProtoDeclare8.field[5] = field14;

children = new MFNode();

children[0] = ExternProtoDeclare8;

ExternProtoDeclare ExternProtoDeclare15 = createNode("ExternProtoDeclare");
ExternProtoDeclare15.name = "Button";
ExternProtoDeclare15.url = new MFString(new java.lang.String["Button_proto.x3d"]);
field field16 = createNode("field");
field16.name = "enabled";
field16.accessType = "inputOutput";
field16.type = "SFBool";
ExternProtoDeclare15.field = new MFNode();

ExternProtoDeclare15.field[0] = field16;

field field17 = createNode("field");
field17.name = "isActive";
field17.accessType = "outputOnly";
field17.type = "SFBool";
ExternProtoDeclare15.field[1] = field17;

field field18 = createNode("field");
field18.name = "isOver";
field18.accessType = "outputOnly";
field18.type = "SFBool";
ExternProtoDeclare15.field[2] = field18;

field field19 = createNode("field");
field19.name = "isOut";
field19.accessType = "outputOnly";
field19.type = "SFBool";
ExternProtoDeclare15.field[3] = field19;

field field20 = createNode("field");
field20.name = "hitNormal_changed";
field20.accessType = "outputOnly";
field20.type = "SFVec3f";
ExternProtoDeclare15.field[4] = field20;

field field21 = createNode("field");
field21.name = "hitPoint_changed";
field21.accessType = "outputOnly";
field21.type = "SFVec3f";
ExternProtoDeclare15.field[5] = field21;

field field22 = createNode("field");
field22.name = "hitTexCoord_changed";
field22.accessType = "outputOnly";
field22.type = "SFVec2f";
ExternProtoDeclare15.field[6] = field22;

field field23 = createNode("field");
field23.name = "touchTime";
field23.accessType = "outputOnly";
field23.type = "SFTime";
ExternProtoDeclare15.field[7] = field23;

field field24 = createNode("field");
field24.name = "downTime";
field24.accessType = "outputOnly";
field24.type = "SFTime";
ExternProtoDeclare15.field[8] = field24;

field field25 = createNode("field");
field25.name = "overTime";
field25.accessType = "outputOnly";
field25.type = "SFTime";
ExternProtoDeclare15.field[9] = field25;

field field26 = createNode("field");
field26.name = "outTime";
field26.accessType = "outputOnly";
field26.type = "SFTime";
ExternProtoDeclare15.field[10] = field26;

field field27 = createNode("field");
field27.name = "whichChoice";
field27.accessType = "inputOutput";
field27.type = "SFInt32";
ExternProtoDeclare15.field[11] = field27;

field field28 = createNode("field");
field28.name = "choice";
field28.accessType = "inputOutput";
field28.type = "MFNode";
ExternProtoDeclare15.field[12] = field28;

children[1] = ExternProtoDeclare15;

ExternProtoDeclare ExternProtoDeclare29 = createNode("ExternProtoDeclare");
ExternProtoDeclare29.name = "RadioButton";
ExternProtoDeclare29.url = new MFString(new java.lang.String["RadioButton_proto.x3d"]);
field field30 = createNode("field");
field30.name = "enabled";
field30.accessType = "inputOutput";
field30.type = "SFBool";
ExternProtoDeclare29.field = new MFNode();

ExternProtoDeclare29.field[0] = field30;

field field31 = createNode("field");
field31.name = "touchTime";
field31.accessType = "outputOnly";
field31.type = "SFTime";
ExternProtoDeclare29.field[1] = field31;

field field32 = createNode("field");
field32.name = "whichChoice";
field32.accessType = "inputOutput";
field32.type = "SFInt32";
ExternProtoDeclare29.field[2] = field32;

field field33 = createNode("field");
field33.name = "choice";
field33.accessType = "inputOutput";
field33.type = "MFNode";
ExternProtoDeclare29.field[3] = field33;

children[2] = ExternProtoDeclare29;

ExternProtoDeclare ExternProtoDeclare34 = createNode("ExternProtoDeclare");
ExternProtoDeclare34.name = "Delay";
ExternProtoDeclare34.url = new MFString(new java.lang.String["Delay_proto.x3d"]);
field field35 = createNode("field");
field35.name = "cycleInterval";
field35.accessType = "inputOutput";
field35.type = "SFTime";
ExternProtoDeclare34.field = new MFNode();

ExternProtoDeclare34.field[0] = field35;

field field36 = createNode("field");
field36.name = "enabled";
field36.accessType = "inputOutput";
field36.type = "SFBool";
ExternProtoDeclare34.field[1] = field36;

field field37 = createNode("field");
field37.name = "startTime";
field37.accessType = "inputOutput";
field37.type = "SFTime";
ExternProtoDeclare34.field[2] = field37;

field field38 = createNode("field");
field38.name = "stopTime";
field38.accessType = "inputOutput";
field38.type = "SFTime";
ExternProtoDeclare34.field[3] = field38;

field field39 = createNode("field");
field39.name = "isActive";
field39.accessType = "outputOnly";
field39.type = "SFBool";
ExternProtoDeclare34.field[4] = field39;

field field40 = createNode("field");
field40.name = "exitTime";
field40.accessType = "outputOnly";
field40.type = "SFTime";
ExternProtoDeclare34.field[5] = field40;

children[3] = ExternProtoDeclare34;

ExternProtoDeclare ExternProtoDeclare41 = createNode("ExternProtoDeclare");
ExternProtoDeclare41.name = "Random";
ExternProtoDeclare41.url = new MFString(new java.lang.String["Random_proto.x3d"]);
field field42 = createNode("field");
field42.name = "minValue";
field42.accessType = "inputOutput";
field42.type = "SFInt32";
ExternProtoDeclare41.field = new MFNode();

ExternProtoDeclare41.field[0] = field42;

field field43 = createNode("field");
field43.name = "maxValue";
field43.accessType = "inputOutput";
field43.type = "SFInt32";
ExternProtoDeclare41.field[1] = field43;

field field44 = createNode("field");
field44.name = "numValues";
field44.accessType = "inputOutput";
field44.type = "SFInt32";
ExternProtoDeclare41.field[2] = field44;

field field45 = createNode("field");
field45.name = "startTime";
field45.accessType = "inputOutput";
field45.type = "SFTime";
ExternProtoDeclare41.field[3] = field45;

field field46 = createNode("field");
field46.name = "stopTime";
field46.accessType = "inputOutput";
field46.type = "SFTime";
ExternProtoDeclare41.field[4] = field46;

field field47 = createNode("field");
field47.name = "whichChoice_changed";
field47.accessType = "outputOnly";
field47.type = "SFInt32";
ExternProtoDeclare41.field[5] = field47;

field field48 = createNode("field");
field48.name = "fraction_changed";
field48.accessType = "outputOnly";
field48.type = "SFFloat";
ExternProtoDeclare41.field[6] = field48;

children[4] = ExternProtoDeclare41;

ExternProtoDeclare ExternProtoDeclare49 = createNode("ExternProtoDeclare");
ExternProtoDeclare49.name = "RandomDelay";
ExternProtoDeclare49.url = new MFString(new java.lang.String["RandomDelay_proto.x3d"]);
field field50 = createNode("field");
field50.name = "minInterval";
field50.accessType = "inputOutput";
field50.type = "SFTime";
ExternProtoDeclare49.field = new MFNode();

ExternProtoDeclare49.field[0] = field50;

field field51 = createNode("field");
field51.name = "maxInterval";
field51.accessType = "inputOutput";
field51.type = "SFTime";
ExternProtoDeclare49.field[1] = field51;

field field52 = createNode("field");
field52.name = "enabled";
field52.accessType = "inputOutput";
field52.type = "SFBool";
ExternProtoDeclare49.field[2] = field52;

field field53 = createNode("field");
field53.name = "startTime";
field53.accessType = "inputOutput";
field53.type = "SFTime";
ExternProtoDeclare49.field[3] = field53;

field field54 = createNode("field");
field54.name = "stopTime";
field54.accessType = "inputOutput";
field54.type = "SFTime";
ExternProtoDeclare49.field[4] = field54;

field field55 = createNode("field");
field55.name = "isActive";
field55.accessType = "outputOnly";
field55.type = "SFBool";
ExternProtoDeclare49.field[5] = field55;

field field56 = createNode("field");
field56.name = "exitTime";
field56.accessType = "outputOnly";
field56.type = "SFTime";
ExternProtoDeclare49.field[6] = field56;

children[5] = ExternProtoDeclare49;

ExternProtoDeclare ExternProtoDeclare57 = createNode("ExternProtoDeclare");
ExternProtoDeclare57.name = "Scene";
ExternProtoDeclare57.url = new MFString(new java.lang.String["Scene_proto.x3d"]);
field field58 = createNode("field");
field58.name = "enabled";
field58.accessType = "inputOutput";
field58.type = "SFBool";
ExternProtoDeclare57.field = new MFNode();

ExternProtoDeclare57.field[0] = field58;

field field59 = createNode("field");
field59.name = "startTime";
field59.accessType = "inputOutput";
field59.type = "SFTime";
ExternProtoDeclare57.field[1] = field59;

field field60 = createNode("field");
field60.name = "stopTime";
field60.accessType = "inputOutput";
field60.type = "SFTime";
ExternProtoDeclare57.field[2] = field60;

field field61 = createNode("field");
field61.name = "isActive";
field61.accessType = "outputOnly";
field61.type = "SFBool";
ExternProtoDeclare57.field[3] = field61;

field field62 = createNode("field");
field62.name = "enterTime";
field62.accessType = "outputOnly";
field62.type = "SFTime";
ExternProtoDeclare57.field[4] = field62;

field field63 = createNode("field");
field63.name = "exitTime";
field63.accessType = "outputOnly";
field63.type = "SFTime";
ExternProtoDeclare57.field[5] = field63;

field field64 = createNode("field");
field64.name = "interface";
field64.accessType = "inputOutput";
field64.type = "MFNode";
ExternProtoDeclare57.field[6] = field64;

children[6] = ExternProtoDeclare57;

ExternProtoDeclare ExternProtoDeclare65 = createNode("ExternProtoDeclare");
ExternProtoDeclare65.name = "Bool";
ExternProtoDeclare65.url = new MFString(new java.lang.String["Bool_proto.x3d"]);
field field66 = createNode("field");
field66.name = "value";
field66.accessType = "inputOutput";
field66.type = "SFBool";
ExternProtoDeclare65.field = new MFNode();

ExternProtoDeclare65.field[0] = field66;

field field67 = createNode("field");
field67.name = "startTime";
field67.accessType = "inputOutput";
field67.type = "SFTime";
ExternProtoDeclare65.field[1] = field67;

field field68 = createNode("field");
field68.name = "bool";
field68.accessType = "outputOnly";
field68.type = "SFBool";
ExternProtoDeclare65.field[2] = field68;

children[7] = ExternProtoDeclare65;

ExternProtoDeclare ExternProtoDeclare69 = createNode("ExternProtoDeclare");
ExternProtoDeclare69.name = "Int";
ExternProtoDeclare69.url = new MFString(new java.lang.String["Int_proto.x3d"]);
field field70 = createNode("field");
field70.name = "value";
field70.accessType = "inputOutput";
field70.type = "SFInt32";
ExternProtoDeclare69.field = new MFNode();

ExternProtoDeclare69.field[0] = field70;

field field71 = createNode("field");
field71.name = "startTime";
field71.accessType = "inputOutput";
field71.type = "SFTime";
ExternProtoDeclare69.field[1] = field71;

field field72 = createNode("field");
field72.name = "int";
field72.accessType = "outputOnly";
field72.type = "SFInt32";
ExternProtoDeclare69.field[2] = field72;

children[8] = ExternProtoDeclare69;

WorldInfo WorldInfo73 = createNode("WorldInfo");
WorldInfo73.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by Titania"]);
children[9] = WorldInfo73;

Transform Transform74 = createNode("Transform");
Transform74.DEF = "cams";
Group Group75 = createNode("Group");
Group Group76 = createNode("Group");
Group76.DEF = "open-cams";
TimeSensor TimeSensor77 = createNode("TimeSensor");
TimeSensor77.DEF = "Time_1";
TimeSensor77.stopTime = 1;
Group76.children = new MFNode();

Group76.children[0] = TimeSensor77;

Group75.children = new MFNode();

Group75.children[0] = Group76;

PositionInterpolator PositionInterpolator78 = createNode("PositionInterpolator");
PositionInterpolator78.DEF = "cambuttonTranslationInterp_1";
PositionInterpolator78.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
PositionInterpolator78.keyValue = new MFVec3f(new float[0,0,0,-0.0627401,0,0,-0.12548,0,0,-0.162883,0,0,-0.17485,0,0,-0.179504,0,0,-0.178839,0,0,-0.17485,0,0,-0.169531,0,0,-0.164877,0,0,-0.162883,0,0]);
Group75.children[1] = PositionInterpolator78;

ScalarInterpolator ScalarInterpolator79 = createNode("ScalarInterpolator");
ScalarInterpolator79.DEF = "fadebgTransparencyInterp";
ScalarInterpolator79.key = new MFFloat(new float[0,0.08,0.12]);
ScalarInterpolator79.keyValue = new MFFloat(new float[1,1,0.5]);
Group75.children[2] = ScalarInterpolator79;

PositionInterpolator PositionInterpolator80 = createNode("PositionInterpolator");
PositionInterpolator80.DEF = "cam-menuTranslationInterp_1";
PositionInterpolator80.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
PositionInterpolator80.keyValue = new MFVec3f(new float[0.25,0,0,0.180548,0,0,0.106415,0,0,0.041645,0,0,0.000286184,0,0,-0.0170551,0,0,-0.0219106,0,0,-0.0184424,0,0,-0.0108122,0,0,-0.00318206,0,0,0.000286184,0,0]);
Group75.children[3] = PositionInterpolator80;

Transform74.children = new MFNode();

Transform74.children[0] = Group75;

Group Group81 = createNode("Group");
Group Group82 = createNode("Group");
Group82.DEF = "close-cams";
TimeSensor TimeSensor83 = createNode("TimeSensor");
TimeSensor83.DEF = "Time_2";
TimeSensor83.cycleInterval = 0.7;
TimeSensor83.stopTime = 1;
Group82.children = new MFNode();

Group82.children[0] = TimeSensor83;

Group81.children = new MFNode();

Group81.children[0] = Group82;

PositionInterpolator PositionInterpolator84 = createNode("PositionInterpolator");
PositionInterpolator84.DEF = "cambuttonTranslationInterp_2";
PositionInterpolator84.key = new MFFloat(new float[0,0.142857,0.285714,0.428572,0.571429,0.714286,1]);
PositionInterpolator84.keyValue = new MFVec3f(new float[-0.162883,0,0,-0.133642,0,0,-0.103577,0,0,-0.0739234,0,0,-0.0459178,0,0,-0.0207953,0,0,0,0,0]);
Group81.children[1] = PositionInterpolator84;

PositionInterpolator PositionInterpolator85 = createNode("PositionInterpolator");
PositionInterpolator85.DEF = "cam-menuTranslationInterp_2";
PositionInterpolator85.key = new MFFloat(new float[0,0.142857,0.285714,0.428571,0.571429,0.714286,0.857143,1]);
PositionInterpolator85.keyValue = new MFVec3f(new float[0.000286184,0,0,0.0359596,0,0,0.071633,0,0,0.107306,0,0,0.14298,0,0,0.178653,0,0,0.214327,0,0,0.25,0,0]);
Group81.children[2] = PositionInterpolator85;

Transform74.children[1] = Group81;

Transform Transform86 = createNode("Transform");
Transform86.DEF = "button";
Transform Transform87 = createNode("Transform");
Transform87.DEF = "CheckBox";
ProtoInstance ProtoInstance88 = createNode("ProtoInstance");
ProtoInstance88.name = "CheckBox";
ProtoInstance88.DEF = "_1";
fieldValue fieldValue89 = createNode("fieldValue");
fieldValue89.name = "choice";
ProtoInstance ProtoInstance90 = createNode("ProtoInstance");
ProtoInstance90.name = "Button";
ProtoInstance90.DEF = "OffButton_1";
fieldValue fieldValue91 = createNode("fieldValue");
fieldValue91.name = "choice";
Inline Inline92 = createNode("Inline");
Inline92.DEF = "_2";
Inline92.url = new MFString(new java.lang.String["camButton.x3d"]);
Inline92.bboxSize = new SFVec3f(new float[0.0500588,0.020502,0]);
Inline92.bboxCenter = new SFVec3f(new float[0.119113,0.113344,-0.299736]);
fieldValue91.children = new MFNode();

fieldValue91.children[0] = Inline92;

ProtoInstance90.fieldValue = new MFNode();

ProtoInstance90.fieldValue[0] = fieldValue91;

fieldValue89.children = new MFNode();

fieldValue89.children[0] = ProtoInstance90;

ProtoInstance ProtoInstance93 = createNode("ProtoInstance");
ProtoInstance93.name = "Button";
ProtoInstance93.DEF = "OnButton_1";
fieldValue fieldValue94 = createNode("fieldValue");
fieldValue94.name = "choice";
Inline Inline95 = createNode("Inline");
Inline95.USE = "_2";
fieldValue94.children = new MFNode();

fieldValue94.children[0] = Inline95;

ProtoInstance93.fieldValue = new MFNode();

ProtoInstance93.fieldValue[0] = fieldValue94;

fieldValue89.children[1] = ProtoInstance93;

ProtoInstance88.fieldValue = new MFNode();

ProtoInstance88.fieldValue[0] = fieldValue89;

Transform87.children = new MFNode();

Transform87.children[0] = ProtoInstance88;

Transform86.children = new MFNode();

Transform86.children[0] = Transform87;

Transform74.children[2] = Transform86;

Transform Transform96 = createNode("Transform");
Transform96.DEF = "menu_1";
Transform96.translation = new SFVec3f(new float[0.25,0,0]);
Inline Inline97 = createNode("Inline");
Inline97.url = new MFString(new java.lang.String["aminLabel.x3d"]);
Inline97.bboxSize = new SFVec3f(new float[0.0310576,0.0203932,0]);
Inline97.bboxCenter = new SFVec3f(new float[0.0201922,0.114095,-0.299906]);
Transform96.children = new MFNode();

Transform96.children[0] = Inline97;

Inline Inline98 = createNode("Inline");
Inline98.url = new MFString(new java.lang.String["viewLabel.x3d"]);
Inline98.bboxSize = new SFVec3f(new float[0.0255517,0.0203932,0]);
Inline98.bboxCenter = new SFVec3f(new float[0.0936732,0.114095,-0.299906]);
Transform96.children[1] = Inline98;

Transform Transform99 = createNode("Transform");
Transform99.DEF = "RadioButton_1";
ProtoInstance ProtoInstance100 = createNode("ProtoInstance");
ProtoInstance100.name = "RadioButton";
ProtoInstance100.DEF = "_3";
fieldValue fieldValue101 = createNode("fieldValue");
fieldValue101.name = "whichChoice";
fieldValue101.value = "-1";
ProtoInstance100.fieldValue = new MFNode();

ProtoInstance100.fieldValue[0] = fieldValue101;

fieldValue fieldValue102 = createNode("fieldValue");
fieldValue102.name = "choice";
ProtoInstance ProtoInstance103 = createNode("ProtoInstance");
ProtoInstance103.name = "CheckBox";
ProtoInstance103.DEF = "_4";
fieldValue fieldValue104 = createNode("fieldValue");
fieldValue104.name = "choice";
ProtoInstance ProtoInstance105 = createNode("ProtoInstance");
ProtoInstance105.name = "Button";
ProtoInstance105.DEF = "OffButton_2";
fieldValue fieldValue106 = createNode("fieldValue");
fieldValue106.name = "choice";
Inline Inline107 = createNode("Inline");
Inline107.DEF = "_5";
Inline107.url = new MFString(new java.lang.String["a1.x3d"]);
Inline107.bboxSize = new SFVec3f(new float[0.0150586,0.0203932,0]);
Inline107.bboxCenter = new SFVec3f(new float[0.0200617,0.113587,-0.299906]);
fieldValue106.children = new MFNode();

fieldValue106.children[0] = Inline107;

ProtoInstance105.fieldValue = new MFNode();

ProtoInstance105.fieldValue[0] = fieldValue106;

fieldValue104.children = new MFNode();

fieldValue104.children[0] = ProtoInstance105;

Inline Inline108 = createNode("Inline");
Inline108.DEF = "_6";
Inline108.url = new MFString(new java.lang.String["a1on.x3d"]);
Inline108.bboxSize = new SFVec3f(new float[0.0150586,0.0203932,0]);
Inline108.bboxCenter = new SFVec3f(new float[0.0200617,0.113587,-0.299906]);
fieldValue104.children[1] = Inline108;

ProtoInstance103.fieldValue = new MFNode();

ProtoInstance103.fieldValue[0] = fieldValue104;

fieldValue102.children = new MFNode();

fieldValue102.children[0] = ProtoInstance103;

ProtoInstance ProtoInstance109 = createNode("ProtoInstance");
ProtoInstance109.name = "CheckBox";
ProtoInstance109.DEF = "_7";
fieldValue fieldValue110 = createNode("fieldValue");
fieldValue110.name = "choice";
ProtoInstance ProtoInstance111 = createNode("ProtoInstance");
ProtoInstance111.name = "Button";
ProtoInstance111.DEF = "OffButton_3";
fieldValue fieldValue112 = createNode("fieldValue");
fieldValue112.name = "choice";
Inline Inline113 = createNode("Inline");
Inline113.DEF = "_8";
Inline113.url = new MFString(new java.lang.String["a2.x3d"]);
Inline113.bboxSize = new SFVec3f(new float[0.0150589,0.0203932,0]);
Inline113.bboxCenter = new SFVec3f(new float[0.0351205,0.113587,-0.299906]);
fieldValue112.children = new MFNode();

fieldValue112.children[0] = Inline113;

ProtoInstance111.fieldValue = new MFNode();

ProtoInstance111.fieldValue[0] = fieldValue112;

fieldValue110.children = new MFNode();

fieldValue110.children[0] = ProtoInstance111;

Inline Inline114 = createNode("Inline");
Inline114.DEF = "_9";
Inline114.url = new MFString(new java.lang.String["a2on.x3d"]);
Inline114.bboxSize = new SFVec3f(new float[0.0150589,0.0203932,0]);
Inline114.bboxCenter = new SFVec3f(new float[0.0351205,0.113587,-0.299906]);
fieldValue110.children[1] = Inline114;

ProtoInstance109.fieldValue = new MFNode();

ProtoInstance109.fieldValue[0] = fieldValue110;

fieldValue102.children[1] = ProtoInstance109;

ProtoInstance ProtoInstance115 = createNode("ProtoInstance");
ProtoInstance115.name = "CheckBox";
ProtoInstance115.DEF = "_10";
fieldValue fieldValue116 = createNode("fieldValue");
fieldValue116.name = "choice";
ProtoInstance ProtoInstance117 = createNode("ProtoInstance");
ProtoInstance117.name = "Button";
ProtoInstance117.DEF = "OffButton_4";
fieldValue fieldValue118 = createNode("fieldValue");
fieldValue118.name = "choice";
Inline Inline119 = createNode("Inline");
Inline119.DEF = "_11";
Inline119.url = new MFString(new java.lang.String["a3.x3d"]);
Inline119.bboxSize = new SFVec3f(new float[0.0150589,0.0203932,0]);
Inline119.bboxCenter = new SFVec3f(new float[0.0501794,0.113587,-0.299906]);
fieldValue118.children = new MFNode();

fieldValue118.children[0] = Inline119;

ProtoInstance117.fieldValue = new MFNode();

ProtoInstance117.fieldValue[0] = fieldValue118;

fieldValue116.children = new MFNode();

fieldValue116.children[0] = ProtoInstance117;

Inline Inline120 = createNode("Inline");
Inline120.DEF = "_12";
Inline120.url = new MFString(new java.lang.String["a3on.x3d"]);
Inline120.bboxSize = new SFVec3f(new float[0.0150589,0.0203932,0]);
Inline120.bboxCenter = new SFVec3f(new float[0.0501794,0.113587,-0.299906]);
fieldValue116.children[1] = Inline120;

ProtoInstance115.fieldValue = new MFNode();

ProtoInstance115.fieldValue[0] = fieldValue116;

fieldValue102.children[2] = ProtoInstance115;

ProtoInstance ProtoInstance121 = createNode("ProtoInstance");
ProtoInstance121.name = "CheckBox";
ProtoInstance121.DEF = "_13";
fieldValue fieldValue122 = createNode("fieldValue");
fieldValue122.name = "choice";
ProtoInstance ProtoInstance123 = createNode("ProtoInstance");
ProtoInstance123.name = "Button";
ProtoInstance123.DEF = "OffButton_5";
fieldValue fieldValue124 = createNode("fieldValue");
fieldValue124.name = "choice";
Inline Inline125 = createNode("Inline");
Inline125.DEF = "_14";
Inline125.url = new MFString(new java.lang.String["c1.x3d"]);
Inline125.bboxSize = new SFVec3f(new float[2,0.6,2]);
Inline125.bboxCenter = new SFVec3f(new float[0,-0.2,0]);
fieldValue124.children = new MFNode();

fieldValue124.children[0] = Inline125;

ProtoInstance123.fieldValue = new MFNode();

ProtoInstance123.fieldValue[0] = fieldValue124;

fieldValue122.children = new MFNode();

fieldValue122.children[0] = ProtoInstance123;

Inline Inline126 = createNode("Inline");
Inline126.DEF = "_15";
Inline126.url = new MFString(new java.lang.String["c1on.x3d"]);
Inline126.bboxSize = new SFVec3f(new float[2,0.6,2]);
Inline126.bboxCenter = new SFVec3f(new float[0,-0.2,0]);
fieldValue122.children[1] = Inline126;

ProtoInstance121.fieldValue = new MFNode();

ProtoInstance121.fieldValue[0] = fieldValue122;

fieldValue102.children[3] = ProtoInstance121;

ProtoInstance ProtoInstance127 = createNode("ProtoInstance");
ProtoInstance127.name = "CheckBox";
ProtoInstance127.DEF = "_16";
fieldValue fieldValue128 = createNode("fieldValue");
fieldValue128.name = "choice";
ProtoInstance ProtoInstance129 = createNode("ProtoInstance");
ProtoInstance129.name = "Button";
ProtoInstance129.DEF = "OffButton_6";
fieldValue fieldValue130 = createNode("fieldValue");
fieldValue130.name = "choice";
Inline Inline131 = createNode("Inline");
Inline131.DEF = "_17";
Inline131.url = new MFString(new java.lang.String["c2.x3d"]);
Inline131.bboxSize = new SFVec3f(new float[2,0.6,2]);
Inline131.bboxCenter = new SFVec3f(new float[0,-0.2,0]);
fieldValue130.children = new MFNode();

fieldValue130.children[0] = Inline131;

ProtoInstance129.fieldValue = new MFNode();

ProtoInstance129.fieldValue[0] = fieldValue130;

fieldValue128.children = new MFNode();

fieldValue128.children[0] = ProtoInstance129;

Inline Inline132 = createNode("Inline");
Inline132.DEF = "_18";
Inline132.url = new MFString(new java.lang.String["c2on.x3d"]);
Inline132.bboxSize = new SFVec3f(new float[2,0.6,2]);
Inline132.bboxCenter = new SFVec3f(new float[0,-0.2,0]);
fieldValue128.children[1] = Inline132;

ProtoInstance127.fieldValue = new MFNode();

ProtoInstance127.fieldValue[0] = fieldValue128;

fieldValue102.children[4] = ProtoInstance127;

ProtoInstance ProtoInstance133 = createNode("ProtoInstance");
ProtoInstance133.name = "CheckBox";
ProtoInstance133.DEF = "_19";
fieldValue fieldValue134 = createNode("fieldValue");
fieldValue134.name = "choice";
ProtoInstance ProtoInstance135 = createNode("ProtoInstance");
ProtoInstance135.name = "Button";
ProtoInstance135.DEF = "OffButton_7";
fieldValue fieldValue136 = createNode("fieldValue");
fieldValue136.name = "choice";
Inline Inline137 = createNode("Inline");
Inline137.DEF = "_20";
Inline137.url = new MFString(new java.lang.String["c3.x3d"]);
Inline137.bboxSize = new SFVec3f(new float[2,0.6,2]);
Inline137.bboxCenter = new SFVec3f(new float[0,-0.2,0]);
fieldValue136.children = new MFNode();

fieldValue136.children[0] = Inline137;

ProtoInstance135.fieldValue = new MFNode();

ProtoInstance135.fieldValue[0] = fieldValue136;

fieldValue134.children = new MFNode();

fieldValue134.children[0] = ProtoInstance135;

Inline Inline138 = createNode("Inline");
Inline138.DEF = "_21";
Inline138.url = new MFString(new java.lang.String["c3on.x3d"]);
Inline138.bboxSize = new SFVec3f(new float[2,0.6,2]);
Inline138.bboxCenter = new SFVec3f(new float[0,-0.2,0]);
fieldValue134.children[1] = Inline138;

ProtoInstance133.fieldValue = new MFNode();

ProtoInstance133.fieldValue[0] = fieldValue134;

fieldValue102.children[5] = ProtoInstance133;

ProtoInstance ProtoInstance139 = createNode("ProtoInstance");
ProtoInstance139.name = "CheckBox";
ProtoInstance139.DEF = "_22";
fieldValue fieldValue140 = createNode("fieldValue");
fieldValue140.name = "choice";
ProtoInstance ProtoInstance141 = createNode("ProtoInstance");
ProtoInstance141.name = "Button";
ProtoInstance141.DEF = "OffButton_8";
fieldValue fieldValue142 = createNode("fieldValue");
fieldValue142.name = "choice";
Inline Inline143 = createNode("Inline");
Inline143.DEF = "_23";
Inline143.url = new MFString(new java.lang.String["c4.x3d"]);
Inline143.bboxSize = new SFVec3f(new float[2,0.6,2]);
Inline143.bboxCenter = new SFVec3f(new float[0,-0.2,0]);
fieldValue142.children = new MFNode();

fieldValue142.children[0] = Inline143;

ProtoInstance141.fieldValue = new MFNode();

ProtoInstance141.fieldValue[0] = fieldValue142;

fieldValue140.children = new MFNode();

fieldValue140.children[0] = ProtoInstance141;

Inline Inline144 = createNode("Inline");
Inline144.DEF = "_24";
Inline144.url = new MFString(new java.lang.String["c4on.x3d"]);
Inline144.bboxSize = new SFVec3f(new float[2,0.6,2]);
Inline144.bboxCenter = new SFVec3f(new float[0,-0.2,0]);
fieldValue140.children[1] = Inline144;

ProtoInstance139.fieldValue = new MFNode();

ProtoInstance139.fieldValue[0] = fieldValue140;

fieldValue102.children[6] = ProtoInstance139;

ProtoInstance100.fieldValue[1] = fieldValue102;

Transform99.children = new MFNode();

Transform99.children[0] = ProtoInstance100;

Transform96.children[2] = Transform99;

Transform74.children[3] = Transform96;

Transform Transform145 = createNode("Transform");
Transform145.DEF = "Delay_1";
ProtoInstance ProtoInstance146 = createNode("ProtoInstance");
ProtoInstance146.name = "Delay";
ProtoInstance146.DEF = "_25";
fieldValue fieldValue147 = createNode("fieldValue");
fieldValue147.name = "cycleInterval";
fieldValue147.value = "60";
ProtoInstance146.fieldValue = new MFNode();

ProtoInstance146.fieldValue[0] = fieldValue147;

fieldValue fieldValue148 = createNode("fieldValue");
fieldValue148.name = "startTime";
fieldValue148.value = "1";
ProtoInstance146.fieldValue[1] = fieldValue148;

Transform145.children = new MFNode();

Transform145.children[0] = ProtoInstance146;

Transform74.children[4] = Transform145;

Transform Transform149 = createNode("Transform");
Transform149.DEF = "Random_1";
ProtoInstance ProtoInstance150 = createNode("ProtoInstance");
ProtoInstance150.name = "Random";
ProtoInstance150.DEF = "_26";
fieldValue fieldValue151 = createNode("fieldValue");
fieldValue151.name = "maxValue";
fieldValue151.value = "6";
ProtoInstance150.fieldValue = new MFNode();

ProtoInstance150.fieldValue[0] = fieldValue151;

fieldValue fieldValue152 = createNode("fieldValue");
fieldValue152.name = "numValues";
fieldValue152.value = "7";
ProtoInstance150.fieldValue[1] = fieldValue152;

Transform149.children = new MFNode();

Transform149.children[0] = ProtoInstance150;

Transform74.children[5] = Transform149;

Transform Transform153 = createNode("Transform");
Transform153.DEF = "RandomDelay";
ProtoInstance ProtoInstance154 = createNode("ProtoInstance");
ProtoInstance154.name = "RandomDelay";
ProtoInstance154.DEF = "_27";
fieldValue fieldValue155 = createNode("fieldValue");
fieldValue155.name = "minInterval";
fieldValue155.value = "10";
ProtoInstance154.fieldValue = new MFNode();

ProtoInstance154.fieldValue[0] = fieldValue155;

fieldValue fieldValue156 = createNode("fieldValue");
fieldValue156.name = "maxInterval";
fieldValue156.value = "40";
ProtoInstance154.fieldValue[1] = fieldValue156;

fieldValue fieldValue157 = createNode("fieldValue");
fieldValue157.name = "stopTime";
fieldValue157.value = "1";
ProtoInstance154.fieldValue[2] = fieldValue157;

Transform153.children = new MFNode();

Transform153.children[0] = ProtoInstance154;

Transform74.children[6] = Transform153;

children[10] = Transform74;

Transform Transform158 = createNode("Transform");
Transform158.DEF = "movs";
Group Group159 = createNode("Group");
Group Group160 = createNode("Group");
Group160.DEF = "mov-open";
TimeSensor TimeSensor161 = createNode("TimeSensor");
TimeSensor161.DEF = "Time_3";
TimeSensor161.stopTime = 1;
Group160.children = new MFNode();

Group160.children[0] = TimeSensor161;

Group159.children = new MFNode();

Group159.children[0] = Group160;

PositionInterpolator PositionInterpolator162 = createNode("PositionInterpolator");
PositionInterpolator162.DEF = "moviesTranslationInterp_1";
PositionInterpolator162.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.733333,0.866667,1]);
PositionInterpolator162.keyValue = new MFVec3f(new float[0,0,0,0,-0.0350546,0,0,-0.0723312,0,0,-0.109608,0,0,-0.144662,0,0,-0.175273,0,0,-0.199217,0,0,-0.210897,0,0,-0.204801,0,0,-0.198704,0]);
Group159.children[1] = PositionInterpolator162;

PositionInterpolator PositionInterpolator163 = createNode("PositionInterpolator");
PositionInterpolator163.DEF = "buttonTranslationInterp_1";
PositionInterpolator163.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
PositionInterpolator163.keyValue = new MFVec3f(new float[0,0,0,0,-0.0553082,0,0,-0.114345,0,0,-0.165925,0,0,-0.198861,0,0,-0.212671,0,0,-0.216538,0,0,-0.213776,0,0,-0.207699,0,0,-0.201623,0,0,-0.198861,0]);
Group159.children[2] = PositionInterpolator163;

Transform158.children = new MFNode();

Transform158.children[0] = Group159;

Group Group164 = createNode("Group");
Group Group165 = createNode("Group");
Group165.DEF = "mov-close";
TimeSensor TimeSensor166 = createNode("TimeSensor");
TimeSensor166.DEF = "Time_4";
TimeSensor166.cycleInterval = 0.5;
TimeSensor166.stopTime = 1;
Group165.children = new MFNode();

Group165.children[0] = TimeSensor166;

Group164.children = new MFNode();

Group164.children[0] = Group165;

PositionInterpolator PositionInterpolator167 = createNode("PositionInterpolator");
PositionInterpolator167.DEF = "moviesTranslationInterp_2";
PositionInterpolator167.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,0.99999,1]);
PositionInterpolator167.keyValue = new MFVec3f(new float[0,-0.198704,0,0,-0.149028,0,0,-0.099352,0,0,-0.049676,0,0,0,0,0,0,0,0,0,0]);
Group164.children[1] = PositionInterpolator167;

PositionInterpolator PositionInterpolator168 = createNode("PositionInterpolator");
PositionInterpolator168.DEF = "buttonTranslationInterp_2";
PositionInterpolator168.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
PositionInterpolator168.keyValue = new MFVec3f(new float[0,-0.198861,0,0,-0.159089,0,0,-0.119317,0,0,-0.0795444,0,0,-0.0397722,0,0,0,0]);
Group164.children[2] = PositionInterpolator168;

Transform158.children[1] = Group164;

Transform Transform169 = createNode("Transform");
Transform169.DEF = "CheckBox_1";
ProtoInstance ProtoInstance170 = createNode("ProtoInstance");
ProtoInstance170.name = "CheckBox";
ProtoInstance170.DEF = "_28";
fieldValue fieldValue171 = createNode("fieldValue");
fieldValue171.name = "choice";
ProtoInstance ProtoInstance172 = createNode("ProtoInstance");
ProtoInstance172.name = "Button";
ProtoInstance172.DEF = "OffButton_9";
fieldValue fieldValue173 = createNode("fieldValue");
fieldValue173.name = "choice";
Inline Inline174 = createNode("Inline");
Inline174.DEF = "_29";
Inline174.url = new MFString(new java.lang.String["movButton.x3d"]);
Inline174.bboxSize = new SFVec3f(new float[0.0497668,0.020502,0]);
Inline174.bboxCenter = new SFVec3f(new float[0.192424,0.113851,-0.299736]);
fieldValue173.children = new MFNode();

fieldValue173.children[0] = Inline174;

ProtoInstance172.fieldValue = new MFNode();

ProtoInstance172.fieldValue[0] = fieldValue173;

fieldValue171.children = new MFNode();

fieldValue171.children[0] = ProtoInstance172;

ProtoInstance ProtoInstance175 = createNode("ProtoInstance");
ProtoInstance175.name = "Button";
ProtoInstance175.DEF = "OnButton_2";
fieldValue fieldValue176 = createNode("fieldValue");
fieldValue176.name = "choice";
Inline Inline177 = createNode("Inline");
Inline177.USE = "_29";
fieldValue176.children = new MFNode();

fieldValue176.children[0] = Inline177;

ProtoInstance175.fieldValue = new MFNode();

ProtoInstance175.fieldValue[0] = fieldValue176;

fieldValue171.children[1] = ProtoInstance175;

ProtoInstance170.fieldValue = new MFNode();

ProtoInstance170.fieldValue[0] = fieldValue171;

Transform169.children = new MFNode();

Transform169.children[0] = ProtoInstance170;

Transform158.children[2] = Transform169;

Transform Transform178 = createNode("Transform");
Transform178.DEF = "menu_2";
Inline Inline179 = createNode("Inline");
Inline179.url = new MFString(new java.lang.String["m.x3d"]);
Inline179.bboxSize = new SFVec3f(new float[0.0495934,0.0223366,0]);
Inline179.bboxCenter = new SFVec3f(new float[0.192385,0.311653,-0.299671]);
Transform178.children = new MFNode();

Transform178.children[0] = Inline179;

Transform Transform180 = createNode("Transform");
Transform180.DEF = "RadioButton";
ProtoInstance ProtoInstance181 = createNode("ProtoInstance");
ProtoInstance181.name = "RadioButton";
ProtoInstance181.DEF = "_30";
fieldValue fieldValue182 = createNode("fieldValue");
fieldValue182.name = "whichChoice";
fieldValue182.value = "-1";
ProtoInstance181.fieldValue = new MFNode();

ProtoInstance181.fieldValue[0] = fieldValue182;

fieldValue fieldValue183 = createNode("fieldValue");
fieldValue183.name = "choice";
ProtoInstance ProtoInstance184 = createNode("ProtoInstance");
ProtoInstance184.name = "CheckBox";
ProtoInstance184.DEF = "_31";
fieldValue fieldValue185 = createNode("fieldValue");
fieldValue185.name = "choice";
ProtoInstance ProtoInstance186 = createNode("ProtoInstance");
ProtoInstance186.name = "Button";
ProtoInstance186.DEF = "_32";
fieldValue fieldValue187 = createNode("fieldValue");
fieldValue187.name = "choice";
Inline Inline188 = createNode("Inline");
Inline188.DEF = "_33";
Inline188.url = new MFString(new java.lang.String["m1.x3d"]);
Inline188.bboxSize = new SFVec3f(new float[0.0495934,0.0298137,0]);
Inline188.bboxCenter = new SFVec3f(new float[0.192385,0.285578,-0.299671]);
fieldValue187.children = new MFNode();

fieldValue187.children[0] = Inline188;

ProtoInstance186.fieldValue = new MFNode();

ProtoInstance186.fieldValue[0] = fieldValue187;

fieldValue185.children = new MFNode();

fieldValue185.children[0] = ProtoInstance186;

Inline Inline189 = createNode("Inline");
Inline189.DEF = "_34";
Inline189.url = new MFString(new java.lang.String["m1on.x3d"]);
Inline189.bboxSize = new SFVec3f(new float[0.0495934,0.0298137,0]);
Inline189.bboxCenter = new SFVec3f(new float[0.192385,0.285578,-0.299671]);
fieldValue185.children[1] = Inline189;

ProtoInstance184.fieldValue = new MFNode();

ProtoInstance184.fieldValue[0] = fieldValue185;

fieldValue183.children = new MFNode();

fieldValue183.children[0] = ProtoInstance184;

ProtoInstance ProtoInstance190 = createNode("ProtoInstance");
ProtoInstance190.name = "CheckBox";
ProtoInstance190.DEF = "_35";
fieldValue fieldValue191 = createNode("fieldValue");
fieldValue191.name = "choice";
ProtoInstance ProtoInstance192 = createNode("ProtoInstance");
ProtoInstance192.name = "Button";
ProtoInstance192.DEF = "_36";
fieldValue fieldValue193 = createNode("fieldValue");
fieldValue193.name = "choice";
Inline Inline194 = createNode("Inline");
Inline194.DEF = "_37";
Inline194.url = new MFString(new java.lang.String["m2.x3d"]);
Inline194.bboxSize = new SFVec3f(new float[0.0495934,0.0291023,0]);
Inline194.bboxCenter = new SFVec3f(new float[0.192385,0.25612,-0.299671]);
fieldValue193.children = new MFNode();

fieldValue193.children[0] = Inline194;

ProtoInstance192.fieldValue = new MFNode();

ProtoInstance192.fieldValue[0] = fieldValue193;

fieldValue191.children = new MFNode();

fieldValue191.children[0] = ProtoInstance192;

Inline Inline195 = createNode("Inline");
Inline195.DEF = "_38";
Inline195.url = new MFString(new java.lang.String["m2on.x3d"]);
Inline195.bboxSize = new SFVec3f(new float[0.0495934,0.0291023,0]);
Inline195.bboxCenter = new SFVec3f(new float[0.192385,0.25612,-0.299671]);
fieldValue191.children[1] = Inline195;

ProtoInstance190.fieldValue = new MFNode();

ProtoInstance190.fieldValue[0] = fieldValue191;

fieldValue183.children[1] = ProtoInstance190;

ProtoInstance ProtoInstance196 = createNode("ProtoInstance");
ProtoInstance196.name = "CheckBox";
ProtoInstance196.DEF = "_39";
fieldValue fieldValue197 = createNode("fieldValue");
fieldValue197.name = "choice";
ProtoInstance ProtoInstance198 = createNode("ProtoInstance");
ProtoInstance198.name = "Button";
ProtoInstance198.DEF = "_40";
fieldValue fieldValue199 = createNode("fieldValue");
fieldValue199.name = "choice";
Inline Inline200 = createNode("Inline");
Inline200.DEF = "_41";
Inline200.url = new MFString(new java.lang.String["m3.x3d"]);
Inline200.bboxSize = new SFVec3f(new float[0.0495934,0.0291023,0]);
Inline200.bboxCenter = new SFVec3f(new float[0.192385,0.227018,-0.299671]);
fieldValue199.children = new MFNode();

fieldValue199.children[0] = Inline200;

ProtoInstance198.fieldValue = new MFNode();

ProtoInstance198.fieldValue[0] = fieldValue199;

fieldValue197.children = new MFNode();

fieldValue197.children[0] = ProtoInstance198;

Inline Inline201 = createNode("Inline");
Inline201.DEF = "_42";
Inline201.url = new MFString(new java.lang.String["m3on.x3d"]);
Inline201.bboxSize = new SFVec3f(new float[0.0495934,0.0291023,0]);
Inline201.bboxCenter = new SFVec3f(new float[0.192385,0.227018,-0.299671]);
fieldValue197.children[1] = Inline201;

ProtoInstance196.fieldValue = new MFNode();

ProtoInstance196.fieldValue[0] = fieldValue197;

fieldValue183.children[2] = ProtoInstance196;

ProtoInstance ProtoInstance202 = createNode("ProtoInstance");
ProtoInstance202.name = "CheckBox";
ProtoInstance202.DEF = "_43";
fieldValue fieldValue203 = createNode("fieldValue");
fieldValue203.name = "choice";
ProtoInstance ProtoInstance204 = createNode("ProtoInstance");
ProtoInstance204.name = "Button";
ProtoInstance204.DEF = "_44";
fieldValue fieldValue205 = createNode("fieldValue");
fieldValue205.name = "choice";
Inline Inline206 = createNode("Inline");
Inline206.DEF = "_45";
Inline206.url = new MFString(new java.lang.String["m4.x3d"]);
Inline206.bboxSize = new SFVec3f(new float[0.0495934,0.0296559,0]);
Inline206.bboxCenter = new SFVec3f(new float[0.192385,0.197639,-0.299671]);
fieldValue205.children = new MFNode();

fieldValue205.children[0] = Inline206;

ProtoInstance204.fieldValue = new MFNode();

ProtoInstance204.fieldValue[0] = fieldValue205;

fieldValue203.children = new MFNode();

fieldValue203.children[0] = ProtoInstance204;

Inline Inline207 = createNode("Inline");
Inline207.DEF = "_46";
Inline207.url = new MFString(new java.lang.String["m4on.x3d"]);
Inline207.bboxSize = new SFVec3f(new float[0.0495934,0.0296559,0]);
Inline207.bboxCenter = new SFVec3f(new float[0.192385,0.197639,-0.299671]);
fieldValue203.children[1] = Inline207;

ProtoInstance202.fieldValue = new MFNode();

ProtoInstance202.fieldValue[0] = fieldValue203;

fieldValue183.children[3] = ProtoInstance202;

ProtoInstance ProtoInstance208 = createNode("ProtoInstance");
ProtoInstance208.name = "CheckBox";
ProtoInstance208.DEF = "_47";
fieldValue fieldValue209 = createNode("fieldValue");
fieldValue209.name = "choice";
ProtoInstance ProtoInstance210 = createNode("ProtoInstance");
ProtoInstance210.name = "Button";
ProtoInstance210.DEF = "_48";
fieldValue fieldValue211 = createNode("fieldValue");
fieldValue211.name = "choice";
Inline Inline212 = createNode("Inline");
Inline212.DEF = "_49";
Inline212.url = new MFString(new java.lang.String["m5.x3d"]);
Inline212.bboxSize = new SFVec3f(new float[0.0495934,0.0291813,0]);
Inline212.bboxCenter = new SFVec3f(new float[0.192385,0.16822,-0.299671]);
fieldValue211.children = new MFNode();

fieldValue211.children[0] = Inline212;

ProtoInstance210.fieldValue = new MFNode();

ProtoInstance210.fieldValue[0] = fieldValue211;

fieldValue209.children = new MFNode();

fieldValue209.children[0] = ProtoInstance210;

Inline Inline213 = createNode("Inline");
Inline213.DEF = "_50";
Inline213.url = new MFString(new java.lang.String["m5on.x3d"]);
Inline213.bboxSize = new SFVec3f(new float[0.0495934,0.0291813,0]);
Inline213.bboxCenter = new SFVec3f(new float[0.192385,0.16822,-0.299671]);
fieldValue209.children[1] = Inline213;

ProtoInstance208.fieldValue = new MFNode();

ProtoInstance208.fieldValue[0] = fieldValue209;

fieldValue183.children[4] = ProtoInstance208;

ProtoInstance ProtoInstance214 = createNode("ProtoInstance");
ProtoInstance214.name = "CheckBox";
ProtoInstance214.DEF = "_51";
fieldValue fieldValue215 = createNode("fieldValue");
fieldValue215.name = "choice";
ProtoInstance ProtoInstance216 = createNode("ProtoInstance");
ProtoInstance216.name = "Button";
ProtoInstance216.DEF = "_52";
fieldValue fieldValue217 = createNode("fieldValue");
fieldValue217.name = "choice";
Inline Inline218 = createNode("Inline");
Inline218.DEF = "_53";
Inline218.url = new MFString(new java.lang.String["m6.x3d"]);
Inline218.bboxSize = new SFVec3f(new float[0.0495934,0.0291811,0]);
Inline218.bboxCenter = new SFVec3f(new float[0.192385,0.139039,-0.299671]);
fieldValue217.children = new MFNode();

fieldValue217.children[0] = Inline218;

ProtoInstance216.fieldValue = new MFNode();

ProtoInstance216.fieldValue[0] = fieldValue217;

fieldValue215.children = new MFNode();

fieldValue215.children[0] = ProtoInstance216;

Inline Inline219 = createNode("Inline");
Inline219.DEF = "_54";
Inline219.url = new MFString(new java.lang.String["m6on.x3d"]);
Inline219.bboxSize = new SFVec3f(new float[0.0495934,0.0291811,0]);
Inline219.bboxCenter = new SFVec3f(new float[0.192385,0.139039,-0.299671]);
fieldValue215.children[1] = Inline219;

ProtoInstance214.fieldValue = new MFNode();

ProtoInstance214.fieldValue[0] = fieldValue215;

fieldValue183.children[5] = ProtoInstance214;

ProtoInstance181.fieldValue[1] = fieldValue183;

Transform180.children = new MFNode();

Transform180.children[0] = ProtoInstance181;

Transform178.children[1] = Transform180;

Transform158.children[3] = Transform178;

Transform Transform220 = createNode("Transform");
Transform220.DEF = "Delay";
ProtoInstance ProtoInstance221 = createNode("ProtoInstance");
ProtoInstance221.name = "Delay";
ProtoInstance221.DEF = "_55";
fieldValue fieldValue222 = createNode("fieldValue");
fieldValue222.name = "cycleInterval";
fieldValue222.value = "600";
ProtoInstance221.fieldValue = new MFNode();

ProtoInstance221.fieldValue[0] = fieldValue222;

Transform220.children = new MFNode();

Transform220.children[0] = ProtoInstance221;

Transform158.children[4] = Transform220;

Transform Transform223 = createNode("Transform");
Transform223.DEF = "Random";
ProtoInstance ProtoInstance224 = createNode("ProtoInstance");
ProtoInstance224.name = "Random";
ProtoInstance224.DEF = "_56";
fieldValue fieldValue225 = createNode("fieldValue");
fieldValue225.name = "maxValue";
fieldValue225.value = "5";
ProtoInstance224.fieldValue = new MFNode();

ProtoInstance224.fieldValue[0] = fieldValue225;

fieldValue fieldValue226 = createNode("fieldValue");
fieldValue226.name = "numValues";
fieldValue226.value = "6";
ProtoInstance224.fieldValue[1] = fieldValue226;

Transform223.children = new MFNode();

Transform223.children[0] = ProtoInstance224;

Transform158.children[5] = Transform223;

children[11] = Transform158;

Transform Transform227 = createNode("Transform");
Transform227.DEF = "Scene";
ProtoInstance ProtoInstance228 = createNode("ProtoInstance");
ProtoInstance228.name = "Scene";
fieldValue fieldValue229 = createNode("fieldValue");
fieldValue229.name = "interface";
ProtoInstance ProtoInstance230 = createNode("ProtoInstance");
ProtoInstance230.name = "Bool";
ProtoInstance230.DEF = "_57";
fieldValue229.children = new MFNode();

fieldValue229.children[0] = ProtoInstance230;

ProtoInstance ProtoInstance231 = createNode("ProtoInstance");
ProtoInstance231.name = "Bool";
ProtoInstance231.DEF = "_58";
fieldValue229.children[1] = ProtoInstance231;

ProtoInstance ProtoInstance232 = createNode("ProtoInstance");
ProtoInstance232.name = "Bool";
ProtoInstance232.DEF = "_59";
fieldValue229.children[2] = ProtoInstance232;

ProtoInstance ProtoInstance233 = createNode("ProtoInstance");
ProtoInstance233.name = "Bool";
ProtoInstance233.DEF = "_60";
fieldValue229.children[3] = ProtoInstance233;

ProtoInstance ProtoInstance234 = createNode("ProtoInstance");
ProtoInstance234.name = "Bool";
ProtoInstance234.DEF = "_61";
fieldValue229.children[4] = ProtoInstance234;

ProtoInstance ProtoInstance235 = createNode("ProtoInstance");
ProtoInstance235.name = "Bool";
ProtoInstance235.DEF = "_62";
fieldValue229.children[5] = ProtoInstance235;

ProtoInstance ProtoInstance236 = createNode("ProtoInstance");
ProtoInstance236.name = "Bool";
ProtoInstance236.DEF = "_63";
fieldValue229.children[6] = ProtoInstance236;

ProtoInstance ProtoInstance237 = createNode("ProtoInstance");
ProtoInstance237.name = "Int";
ProtoInstance237.DEF = "_64";
fieldValue229.children[7] = ProtoInstance237;

ProtoInstance228.fieldValue = new MFNode();

ProtoInstance228.fieldValue[0] = fieldValue229;

Transform227.children = new MFNode();

Transform227.children[0] = ProtoInstance228;

children[12] = Transform227;

Sound Sound238 = createNode("Sound");
Sound238.DEF = "open";
Sound238.minBack = 3;
Sound238.minFront = 3;
Sound238.maxBack = 30;
Sound238.maxFront = 30;
AudioClip AudioClip239 = createNode("AudioClip");
AudioClip239.DEF = "open_1";
AudioClip239.description = "open";
AudioClip239.url = new MFString(new java.lang.String[", ","open.aiffopen.wav"]);
Sound238.source = AudioClip239;

children[13] = Sound238;

Sound Sound240 = createNode("Sound");
Sound240.DEF = "close";
Sound240.minBack = 3;
Sound240.minFront = 3;
Sound240.maxBack = 30;
Sound240.maxFront = 30;
AudioClip AudioClip241 = createNode("AudioClip");
AudioClip241.DEF = "close_1";
AudioClip241.description = "close";
AudioClip241.url = new MFString(new java.lang.String[", ","close.aiffclose.wav"]);
Sound240.source = AudioClip241;

children[14] = Sound240;

Sound Sound242 = createNode("Sound");
Sound242.DEF = "ok";
Sound242.intensity = 0.5;
Sound242.minBack = 3;
Sound242.minFront = 3;
Sound242.maxBack = 30;
Sound242.maxFront = 30;
AudioClip AudioClip243 = createNode("AudioClip");
AudioClip243.DEF = "ok_1";
AudioClip243.description = "ok";
AudioClip243.url = new MFString(new java.lang.String[", ","ok.aiffok.wav"]);
Sound242.source = AudioClip243;

children[15] = Sound242;

ProtoInstance ProtoInstance244 = createNode("ProtoInstance");
ProtoInstance244.name = "Delay";
ProtoInstance244.DEF = "MovieDelay";
fieldValue fieldValue245 = createNode("fieldValue");
fieldValue245.name = "cycleInterval";
fieldValue245.value = "300";
ProtoInstance244.fieldValue = new MFNode();

ProtoInstance244.fieldValue[0] = fieldValue245;

fieldValue fieldValue246 = createNode("fieldValue");
fieldValue246.name = "startTime";
fieldValue246.value = "1";
ProtoInstance244.fieldValue[1] = fieldValue246;

children[16] = ProtoInstance244;

ProtoInstance ProtoInstance247 = createNode("ProtoInstance");
ProtoInstance247.name = "Random";
ProtoInstance247.DEF = "MovieRandom";
fieldValue fieldValue248 = createNode("fieldValue");
fieldValue248.name = "maxValue";
fieldValue248.value = "5";
ProtoInstance247.fieldValue = new MFNode();

ProtoInstance247.fieldValue[0] = fieldValue248;

children[17] = ProtoInstance247;

ROUTE ROUTE249 = createNode("ROUTE");
ROUTE249.fromNode = "MovieDelay";
ROUTE249.fromField = "exitTime";
ROUTE249.toNode = "MovieDelay";
ROUTE249.toField = "set_startTime";
children[18] = ROUTE249;

ROUTE ROUTE250 = createNode("ROUTE");
ROUTE250.fromNode = "MovieDelay";
ROUTE250.fromField = "exitTime";
ROUTE250.toNode = "MovieRandom";
ROUTE250.toField = "set_startTime";
children[19] = ROUTE250;

ROUTE ROUTE251 = createNode("ROUTE");
ROUTE251.fromNode = "MovieRandom";
ROUTE251.fromField = "whichChoice_changed";
ROUTE251.toNode = "_30";
ROUTE251.toField = "set_whichChoice";
children[20] = ROUTE251;

ROUTE ROUTE252 = createNode("ROUTE");
ROUTE252.fromNode = "_30";
ROUTE252.fromField = "touchTime";
ROUTE252.toNode = "MovieDelay";
ROUTE252.toField = "set_startTime";
children[21] = ROUTE252;

ROUTE ROUTE253 = createNode("ROUTE");
ROUTE253.fromNode = "OffButton_1";
ROUTE253.fromField = "downTime";
ROUTE253.toNode = "Time_1";
ROUTE253.toField = "set_startTime";
children[22] = ROUTE253;

ROUTE ROUTE254 = createNode("ROUTE");
ROUTE254.fromNode = "Time_1";
ROUTE254.fromField = "fraction_changed";
ROUTE254.toNode = "cambuttonTranslationInterp_1";
ROUTE254.toField = "set_fraction";
children[23] = ROUTE254;

ROUTE ROUTE255 = createNode("ROUTE");
ROUTE255.fromNode = "Time_1";
ROUTE255.fromField = "fraction_changed";
ROUTE255.toNode = "fadebgTransparencyInterp";
ROUTE255.toField = "set_fraction";
children[24] = ROUTE255;

ROUTE ROUTE256 = createNode("ROUTE");
ROUTE256.fromNode = "Time_1";
ROUTE256.fromField = "fraction_changed";
ROUTE256.toNode = "cam-menuTranslationInterp_1";
ROUTE256.toField = "set_fraction";
children[25] = ROUTE256;

ROUTE ROUTE257 = createNode("ROUTE");
ROUTE257.fromNode = "OnButton_1";
ROUTE257.fromField = "downTime";
ROUTE257.toNode = "Time_2";
ROUTE257.toField = "set_startTime";
children[26] = ROUTE257;

ROUTE ROUTE258 = createNode("ROUTE");
ROUTE258.fromNode = "Time_2";
ROUTE258.fromField = "fraction_changed";
ROUTE258.toNode = "cambuttonTranslationInterp_2";
ROUTE258.toField = "set_fraction";
children[27] = ROUTE258;

ROUTE ROUTE259 = createNode("ROUTE");
ROUTE259.fromNode = "Time_2";
ROUTE259.fromField = "fraction_changed";
ROUTE259.toNode = "cam-menuTranslationInterp_2";
ROUTE259.toField = "set_fraction";
children[28] = ROUTE259;

ROUTE ROUTE260 = createNode("ROUTE");
ROUTE260.fromNode = "OffButton_1";
ROUTE260.fromField = "downTime";
ROUTE260.toNode = "_1";
ROUTE260.toField = "set_touchTime";
children[29] = ROUTE260;

ROUTE ROUTE261 = createNode("ROUTE");
ROUTE261.fromNode = "OnButton_1";
ROUTE261.fromField = "downTime";
ROUTE261.toNode = "_1";
ROUTE261.toField = "set_touchTime";
children[30] = ROUTE261;

ROUTE ROUTE262 = createNode("ROUTE");
ROUTE262.fromNode = "cambuttonTranslationInterp_1";
ROUTE262.fromField = "value_changed";
ROUTE262.toNode = "button";
ROUTE262.toField = "set_translation";
children[31] = ROUTE262;

ROUTE ROUTE263 = createNode("ROUTE");
ROUTE263.fromNode = "cambuttonTranslationInterp_2";
ROUTE263.fromField = "value_changed";
ROUTE263.toNode = "button";
ROUTE263.toField = "set_translation";
children[32] = ROUTE263;

ROUTE ROUTE264 = createNode("ROUTE");
ROUTE264.fromNode = "OffButton_2";
ROUTE264.fromField = "touchTime";
ROUTE264.toNode = "_4";
ROUTE264.toField = "set_touchTime";
children[33] = ROUTE264;

ROUTE ROUTE265 = createNode("ROUTE");
ROUTE265.fromNode = "OffButton_3";
ROUTE265.fromField = "touchTime";
ROUTE265.toNode = "_7";
ROUTE265.toField = "set_touchTime";
children[34] = ROUTE265;

ROUTE ROUTE266 = createNode("ROUTE");
ROUTE266.fromNode = "OffButton_4";
ROUTE266.fromField = "touchTime";
ROUTE266.toNode = "_10";
ROUTE266.toField = "set_touchTime";
children[35] = ROUTE266;

ROUTE ROUTE267 = createNode("ROUTE");
ROUTE267.fromNode = "OffButton_5";
ROUTE267.fromField = "touchTime";
ROUTE267.toNode = "_13";
ROUTE267.toField = "set_touchTime";
children[36] = ROUTE267;

ROUTE ROUTE268 = createNode("ROUTE");
ROUTE268.fromNode = "OffButton_6";
ROUTE268.fromField = "touchTime";
ROUTE268.toNode = "_16";
ROUTE268.toField = "set_touchTime";
children[37] = ROUTE268;

ROUTE ROUTE269 = createNode("ROUTE");
ROUTE269.fromNode = "OffButton_7";
ROUTE269.fromField = "touchTime";
ROUTE269.toNode = "_19";
ROUTE269.toField = "set_touchTime";
children[38] = ROUTE269;

ROUTE ROUTE270 = createNode("ROUTE");
ROUTE270.fromNode = "OffButton_8";
ROUTE270.fromField = "touchTime";
ROUTE270.toNode = "_22";
ROUTE270.toField = "set_touchTime";
children[39] = ROUTE270;

ROUTE ROUTE271 = createNode("ROUTE");
ROUTE271.fromNode = "_26";
ROUTE271.fromField = "whichChoice_changed";
ROUTE271.toNode = "_3";
ROUTE271.toField = "set_whichChoice";
children[40] = ROUTE271;

ROUTE ROUTE272 = createNode("ROUTE");
ROUTE272.fromNode = "cam-menuTranslationInterp_1";
ROUTE272.fromField = "value_changed";
ROUTE272.toNode = "menu_1";
ROUTE272.toField = "set_translation";
children[41] = ROUTE272;

ROUTE ROUTE273 = createNode("ROUTE");
ROUTE273.fromNode = "cam-menuTranslationInterp_2";
ROUTE273.fromField = "value_changed";
ROUTE273.toNode = "menu_1";
ROUTE273.toField = "set_translation";
children[42] = ROUTE273;

ROUTE ROUTE274 = createNode("ROUTE");
ROUTE274.fromNode = "_3";
ROUTE274.fromField = "touchTime";
ROUTE274.toNode = "_25";
ROUTE274.toField = "set_startTime";
children[43] = ROUTE274;

ROUTE ROUTE275 = createNode("ROUTE");
ROUTE275.fromNode = "_30";
ROUTE275.fromField = "touchTime";
ROUTE275.toNode = "_25";
ROUTE275.toField = "set_startTime";
children[44] = ROUTE275;

ROUTE ROUTE276 = createNode("ROUTE");
ROUTE276.fromNode = "_25";
ROUTE276.fromField = "exitTime";
ROUTE276.toNode = "_26";
ROUTE276.toField = "set_startTime";
children[45] = ROUTE276;

ROUTE ROUTE277 = createNode("ROUTE");
ROUTE277.fromNode = "_27";
ROUTE277.fromField = "exitTime";
ROUTE277.toNode = "_26";
ROUTE277.toField = "set_startTime";
children[46] = ROUTE277;

ROUTE ROUTE278 = createNode("ROUTE");
ROUTE278.fromNode = "_25";
ROUTE278.fromField = "exitTime";
ROUTE278.toNode = "_27";
ROUTE278.toField = "set_startTime";
children[47] = ROUTE278;

ROUTE ROUTE279 = createNode("ROUTE");
ROUTE279.fromNode = "_27";
ROUTE279.fromField = "exitTime";
ROUTE279.toNode = "_27";
ROUTE279.toField = "set_startTime";
children[48] = ROUTE279;

ROUTE ROUTE280 = createNode("ROUTE");
ROUTE280.fromNode = "_25";
ROUTE280.fromField = "startTime_changed";
ROUTE280.toNode = "_27";
ROUTE280.toField = "set_stopTime";
children[49] = ROUTE280;

ROUTE ROUTE281 = createNode("ROUTE");
ROUTE281.fromNode = "OffButton_9";
ROUTE281.fromField = "downTime";
ROUTE281.toNode = "Time_3";
ROUTE281.toField = "set_startTime";
children[50] = ROUTE281;

ROUTE ROUTE282 = createNode("ROUTE");
ROUTE282.fromNode = "Time_3";
ROUTE282.fromField = "fraction_changed";
ROUTE282.toNode = "moviesTranslationInterp_1";
ROUTE282.toField = "set_fraction";
children[51] = ROUTE282;

ROUTE ROUTE283 = createNode("ROUTE");
ROUTE283.fromNode = "Time_3";
ROUTE283.fromField = "fraction_changed";
ROUTE283.toNode = "buttonTranslationInterp_1";
ROUTE283.toField = "set_fraction";
children[52] = ROUTE283;

ROUTE ROUTE284 = createNode("ROUTE");
ROUTE284.fromNode = "OnButton_2";
ROUTE284.fromField = "downTime";
ROUTE284.toNode = "Time_4";
ROUTE284.toField = "set_startTime";
children[53] = ROUTE284;

ROUTE ROUTE285 = createNode("ROUTE");
ROUTE285.fromNode = "Time_4";
ROUTE285.fromField = "fraction_changed";
ROUTE285.toNode = "moviesTranslationInterp_2";
ROUTE285.toField = "set_fraction";
children[54] = ROUTE285;

ROUTE ROUTE286 = createNode("ROUTE");
ROUTE286.fromNode = "Time_4";
ROUTE286.fromField = "fraction_changed";
ROUTE286.toNode = "buttonTranslationInterp_2";
ROUTE286.toField = "set_fraction";
children[55] = ROUTE286;

ROUTE ROUTE287 = createNode("ROUTE");
ROUTE287.fromNode = "OffButton_9";
ROUTE287.fromField = "downTime";
ROUTE287.toNode = "_28";
ROUTE287.toField = "set_touchTime";
children[56] = ROUTE287;

ROUTE ROUTE288 = createNode("ROUTE");
ROUTE288.fromNode = "OnButton_2";
ROUTE288.fromField = "downTime";
ROUTE288.toNode = "_28";
ROUTE288.toField = "set_touchTime";
children[57] = ROUTE288;

ROUTE ROUTE289 = createNode("ROUTE");
ROUTE289.fromNode = "buttonTranslationInterp_1";
ROUTE289.fromField = "value_changed";
ROUTE289.toNode = "CheckBox_1";
ROUTE289.toField = "set_translation";
children[58] = ROUTE289;

ROUTE ROUTE290 = createNode("ROUTE");
ROUTE290.fromNode = "buttonTranslationInterp_2";
ROUTE290.fromField = "value_changed";
ROUTE290.toNode = "CheckBox_1";
ROUTE290.toField = "set_translation";
children[59] = ROUTE290;

ROUTE ROUTE291 = createNode("ROUTE");
ROUTE291.fromNode = "_32";
ROUTE291.fromField = "touchTime";
ROUTE291.toNode = "_31";
ROUTE291.toField = "set_touchTime";
children[60] = ROUTE291;

ROUTE ROUTE292 = createNode("ROUTE");
ROUTE292.fromNode = "_36";
ROUTE292.fromField = "touchTime";
ROUTE292.toNode = "_35";
ROUTE292.toField = "set_touchTime";
children[61] = ROUTE292;

ROUTE ROUTE293 = createNode("ROUTE");
ROUTE293.fromNode = "_40";
ROUTE293.fromField = "touchTime";
ROUTE293.toNode = "_39";
ROUTE293.toField = "set_touchTime";
children[62] = ROUTE293;

ROUTE ROUTE294 = createNode("ROUTE");
ROUTE294.fromNode = "_44";
ROUTE294.fromField = "touchTime";
ROUTE294.toNode = "_43";
ROUTE294.toField = "set_touchTime";
children[63] = ROUTE294;

ROUTE ROUTE295 = createNode("ROUTE");
ROUTE295.fromNode = "_48";
ROUTE295.fromField = "touchTime";
ROUTE295.toNode = "_47";
ROUTE295.toField = "set_touchTime";
children[64] = ROUTE295;

ROUTE ROUTE296 = createNode("ROUTE");
ROUTE296.fromNode = "_52";
ROUTE296.fromField = "touchTime";
ROUTE296.toNode = "_51";
ROUTE296.toField = "set_touchTime";
children[65] = ROUTE296;

ROUTE ROUTE297 = createNode("ROUTE");
ROUTE297.fromNode = "_56";
ROUTE297.fromField = "whichChoice_changed";
ROUTE297.toNode = "_30";
ROUTE297.toField = "set_whichChoice";
children[66] = ROUTE297;

ROUTE ROUTE298 = createNode("ROUTE");
ROUTE298.fromNode = "moviesTranslationInterp_1";
ROUTE298.fromField = "value_changed";
ROUTE298.toNode = "menu_2";
ROUTE298.toField = "set_translation";
children[67] = ROUTE298;

ROUTE ROUTE299 = createNode("ROUTE");
ROUTE299.fromNode = "moviesTranslationInterp_2";
ROUTE299.fromField = "value_changed";
ROUTE299.toNode = "menu_2";
ROUTE299.toField = "set_translation";
children[68] = ROUTE299;

ROUTE ROUTE300 = createNode("ROUTE");
ROUTE300.fromNode = "_25";
ROUTE300.fromField = "startTime_changed";
ROUTE300.toNode = "_55";
ROUTE300.toField = "set_startTime";
children[69] = ROUTE300;

ROUTE ROUTE301 = createNode("ROUTE");
ROUTE301.fromNode = "_55";
ROUTE301.fromField = "exitTime";
ROUTE301.toNode = "_55";
ROUTE301.toField = "set_startTime";
children[70] = ROUTE301;

ROUTE ROUTE302 = createNode("ROUTE");
ROUTE302.fromNode = "_55";
ROUTE302.fromField = "exitTime";
ROUTE302.toNode = "_56";
ROUTE302.toField = "set_startTime";
children[71] = ROUTE302;

ROUTE ROUTE303 = createNode("ROUTE");
ROUTE303.fromNode = "_4";
ROUTE303.fromField = "isActive";
ROUTE303.toNode = "_57";
ROUTE303.toField = "set_value";
children[72] = ROUTE303;

ROUTE ROUTE304 = createNode("ROUTE");
ROUTE304.fromNode = "_7";
ROUTE304.fromField = "isActive";
ROUTE304.toNode = "_58";
ROUTE304.toField = "set_value";
children[73] = ROUTE304;

ROUTE ROUTE305 = createNode("ROUTE");
ROUTE305.fromNode = "_10";
ROUTE305.fromField = "isActive";
ROUTE305.toNode = "_59";
ROUTE305.toField = "set_value";
children[74] = ROUTE305;

ROUTE ROUTE306 = createNode("ROUTE");
ROUTE306.fromNode = "_13";
ROUTE306.fromField = "isActive";
ROUTE306.toNode = "_60";
ROUTE306.toField = "set_value";
children[75] = ROUTE306;

ROUTE ROUTE307 = createNode("ROUTE");
ROUTE307.fromNode = "_16";
ROUTE307.fromField = "isActive";
ROUTE307.toNode = "_61";
ROUTE307.toField = "set_value";
children[76] = ROUTE307;

ROUTE ROUTE308 = createNode("ROUTE");
ROUTE308.fromNode = "_19";
ROUTE308.fromField = "isActive";
ROUTE308.toNode = "_62";
ROUTE308.toField = "set_value";
children[77] = ROUTE308;

ROUTE ROUTE309 = createNode("ROUTE");
ROUTE309.fromNode = "_22";
ROUTE309.fromField = "isActive";
ROUTE309.toNode = "_63";
ROUTE309.toField = "set_value";
children[78] = ROUTE309;

ROUTE ROUTE310 = createNode("ROUTE");
ROUTE310.fromNode = "_30";
ROUTE310.fromField = "whichChoice_changed";
ROUTE310.toNode = "_64";
ROUTE310.toField = "set_value";
children[79] = ROUTE310;

ROUTE ROUTE311 = createNode("ROUTE");
ROUTE311.fromNode = "OffButton_1";
ROUTE311.fromField = "downTime";
ROUTE311.toNode = "open_1";
ROUTE311.toField = "set_startTime";
children[80] = ROUTE311;

ROUTE ROUTE312 = createNode("ROUTE");
ROUTE312.fromNode = "OffButton_9";
ROUTE312.fromField = "downTime";
ROUTE312.toNode = "open_1";
ROUTE312.toField = "set_startTime";
children[81] = ROUTE312;

ROUTE ROUTE313 = createNode("ROUTE");
ROUTE313.fromNode = "OnButton_1";
ROUTE313.fromField = "downTime";
ROUTE313.toNode = "close_1";
ROUTE313.toField = "set_startTime";
children[82] = ROUTE313;

ROUTE ROUTE314 = createNode("ROUTE");
ROUTE314.fromNode = "OnButton_2";
ROUTE314.fromField = "downTime";
ROUTE314.toNode = "close_1";
ROUTE314.toField = "set_startTime";
children[83] = ROUTE314;

ROUTE ROUTE315 = createNode("ROUTE");
ROUTE315.fromNode = "_3";
ROUTE315.fromField = "touchTime";
ROUTE315.toNode = "ok_1";
ROUTE315.toField = "set_startTime";
children[84] = ROUTE315;

ROUTE ROUTE316 = createNode("ROUTE");
ROUTE316.fromNode = "_30";
ROUTE316.fromField = "touchTime";
ROUTE316.toNode = "ok_1";
ROUTE316.toField = "set_startTime";
children[85] = ROUTE316;

}
