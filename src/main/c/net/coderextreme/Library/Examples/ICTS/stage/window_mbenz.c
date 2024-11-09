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
meta3.content = "Thu, 23 Apr 2015 06:07:18 GMT";
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
meta6.content = "Thu, 23 Apr 2015 06:07:18 GMT";
head1.meta[4] = meta6;

head = head1;

ExternProtoDeclare ExternProtoDeclare8 = createNode("ExternProtoDeclare");
ExternProtoDeclare8.name = "BoolSwitch";
ExternProtoDeclare8.url = new MFString(new java.lang.String["BoolSwitch_proto.x3d"]);
field field9 = createNode("field");
field9.name = "isActive";
field9.accessType = "inputOnly";
field9.type = "SFBool";
ExternProtoDeclare8.field = new MFNode();

ExternProtoDeclare8.field[0] = field9;

field field10 = createNode("field");
field10.name = "wichChoice_changed";
field10.accessType = "outputOnly";
field10.type = "SFInt32";
ExternProtoDeclare8.field[1] = field10;

children = new MFNode();

children[0] = ExternProtoDeclare8;

ExternProtoDeclare ExternProtoDeclare11 = createNode("ExternProtoDeclare");
ExternProtoDeclare11.name = "isOver";
ExternProtoDeclare11.url = new MFString(new java.lang.String["isOver_proto.x3d"]);
field field12 = createNode("field");
field12.name = "set_isOver";
field12.accessType = "inputOnly";
field12.type = "SFBool";
ExternProtoDeclare11.field = new MFNode();

ExternProtoDeclare11.field[0] = field12;

field field13 = createNode("field");
field13.name = "set_hitPoint";
field13.accessType = "inputOnly";
field13.type = "SFVec3f";
ExternProtoDeclare11.field[1] = field13;

field field14 = createNode("field");
field14.name = "isOver_changed";
field14.accessType = "outputOnly";
field14.type = "SFBool";
ExternProtoDeclare11.field[2] = field14;

children[1] = ExternProtoDeclare11;

ExternProtoDeclare ExternProtoDeclare15 = createNode("ExternProtoDeclare");
ExternProtoDeclare15.name = "True";
ExternProtoDeclare15.url = new MFString(new java.lang.String["True_proto.x3d"]);
field field16 = createNode("field");
field16.name = "set_SFBool";
field16.accessType = "inputOnly";
field16.type = "SFBool";
ExternProtoDeclare15.field = new MFNode();

ExternProtoDeclare15.field[0] = field16;

field field17 = createNode("field");
field17.name = "startTime";
field17.accessType = "outputOnly";
field17.type = "SFTime";
ExternProtoDeclare15.field[1] = field17;

children[2] = ExternProtoDeclare15;

ExternProtoDeclare ExternProtoDeclare18 = createNode("ExternProtoDeclare");
ExternProtoDeclare18.name = "Switcher";
ExternProtoDeclare18.url = new MFString(new java.lang.String["Switcher_proto.x3d"]);
field field19 = createNode("field");
field19.name = "minValue";
field19.accessType = "inputOutput";
field19.type = "SFInt32";
ExternProtoDeclare18.field = new MFNode();

ExternProtoDeclare18.field[0] = field19;

field field20 = createNode("field");
field20.name = "maxValue";
field20.accessType = "inputOutput";
field20.type = "SFInt32";
ExternProtoDeclare18.field[1] = field20;

field field21 = createNode("field");
field21.name = "prev";
field21.accessType = "inputOutput";
field21.type = "SFTime";
ExternProtoDeclare18.field[2] = field21;

field field22 = createNode("field");
field22.name = "next";
field22.accessType = "inputOutput";
field22.type = "SFTime";
ExternProtoDeclare18.field[3] = field22;

field field23 = createNode("field");
field23.name = "offset";
field23.accessType = "inputOutput";
field23.type = "SFInt32";
ExternProtoDeclare18.field[4] = field23;

field field24 = createNode("field");
field24.name = "whichChoice_changed";
field24.accessType = "outputOnly";
field24.type = "SFInt32";
ExternProtoDeclare18.field[5] = field24;

children[3] = ExternProtoDeclare18;

ExternProtoDeclare ExternProtoDeclare25 = createNode("ExternProtoDeclare");
ExternProtoDeclare25.name = "Gate";
ExternProtoDeclare25.url = new MFString(new java.lang.String["Gate_proto.x3d"]);
field field26 = createNode("field");
field26.name = "offset";
field26.accessType = "inputOutput";
field26.type = "SFBool";
ExternProtoDeclare25.field = new MFNode();

ExternProtoDeclare25.field[0] = field26;

field field27 = createNode("field");
field27.name = "startTime";
field27.accessType = "inputOutput";
field27.type = "SFTime";
ExternProtoDeclare25.field[1] = field27;

field field28 = createNode("field");
field28.name = "isActive";
field28.accessType = "outputOnly";
field28.type = "SFBool";
ExternProtoDeclare25.field[2] = field28;

field field29 = createNode("field");
field29.name = "enterTime";
field29.accessType = "outputOnly";
field29.type = "SFTime";
ExternProtoDeclare25.field[3] = field29;

field field30 = createNode("field");
field30.name = "exitTime";
field30.accessType = "outputOnly";
field30.type = "SFTime";
ExternProtoDeclare25.field[4] = field30;

children[4] = ExternProtoDeclare25;

ExternProtoDeclare ExternProtoDeclare31 = createNode("ExternProtoDeclare");
ExternProtoDeclare31.name = "Not";
ExternProtoDeclare31.url = new MFString(new java.lang.String["Not_proto.x3d"]);
field field32 = createNode("field");
field32.name = "set_SFBool";
field32.accessType = "inputOnly";
field32.type = "SFBool";
ExternProtoDeclare31.field = new MFNode();

ExternProtoDeclare31.field[0] = field32;

field field33 = createNode("field");
field33.name = "value_changed";
field33.accessType = "outputOnly";
field33.type = "SFBool";
ExternProtoDeclare31.field[1] = field33;

children[5] = ExternProtoDeclare31;

WorldInfo WorldInfo34 = createNode("WorldInfo");
WorldInfo34.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children[6] = WorldInfo34;

Transform Transform35 = createNode("Transform");
Transform35.bboxSize = new SFVec3f(new float[1.288,0.8863,0.060779]);
Transform35.bboxCenter = new SFVec3f(new float[5.06639e-7,-2.23517e-7,-0.320511]);
children[7] = Transform35;

Transform Transform36 = createNode("Transform");
Transform36.DEF = "Window";
Switch Switch37 = createNode("Switch");
Switch37.DEF = "_1";
Switch37.whichChoice = 1;
Transform Transform38 = createNode("Transform");
TouchSensor TouchSensor39 = createNode("TouchSensor");
TouchSensor39.DEF = "_2";
Transform38.children = new MFNode();

Transform38.children[0] = TouchSensor39;

Inline Inline40 = createNode("Inline");
Inline40.url = new MFString(new java.lang.String["else.x3d"]);
Inline40.bboxSize = new SFVec3f(new float[0.0412831,0.0412831,0]);
Inline40.bboxCenter = new SFVec3f(new float[-0.240425,-0.171864,-0.297753]);
Transform38.children[1] = Inline40;

Switch37.children = new MFNode();

Switch37.children[0] = Transform38;

Transform Transform41 = createNode("Transform");
Transform41.DEF = "on_1";
Transform Transform42 = createNode("Transform");
Transform42.DEF = "Zoom";
PlaneSensor PlaneSensor43 = createNode("PlaneSensor");
PlaneSensor43.DEF = "_3";
PlaneSensor43.minPosition = new SFVec2f(new float[-0.17,0]);
PlaneSensor43.maxPosition = new SFVec2f(new float[0.1488,0]);
Transform42.children = new MFNode();

Transform42.children[0] = PlaneSensor43;

TouchSensor TouchSensor44 = createNode("TouchSensor");
TouchSensor44.DEF = "_4";
Transform42.children[1] = TouchSensor44;

Transform Transform45 = createNode("Transform");
Transform45.DEF = "button_1";
Transform45.translation = new SFVec3f(new float[-0.0746069,-0.133511,0]);
Transform45.center = new SFVec3f(new float[-0.183921,-0.0639503,-0.296896]);
Transform Transform46 = createNode("Transform");
Transform46.DEF = "Zoom-Button";
Inline Inline47 = createNode("Inline");
Inline47.url = new MFString(new java.lang.String["zoom-button.gif.x3d"]);
Inline47.bboxSize = new SFVec3f(new float[0.0111772,0.0107642,0]);
Inline47.bboxCenter = new SFVec3f(new float[0.18564,-0.0653136,-0.29764]);
Transform46.children = new MFNode();

Transform46.children[0] = Inline47;

Transform45.children = new MFNode();

Transform45.children[0] = Transform46;

Transform Transform48 = createNode("Transform");
Transform48.DEF = "help_1";
Switch Switch49 = createNode("Switch");
Switch49.DEF = "_5";
Switch49.whichChoice = 1;
Transform Transform50 = createNode("Transform");
Transform50.DEF = "isOver_1";
Switch Switch51 = createNode("Switch");
Switch51.DEF = "_6";
Switch51.whichChoice = 1;
Transform Transform52 = createNode("Transform");
Switch51.children = new MFNode();

Switch51.children[0] = Transform52;

Transform Transform53 = createNode("Transform");
Transform53.DEF = "on_2";
Transform53.translation = new SFVec3f(new float[0.185434,-0.0657812,-0.303274]);
Transform Transform54 = createNode("Transform");
Transform54.DEF = "Zoom_1";
Inline Inline55 = createNode("Inline");
Inline55.url = new MFString(new java.lang.String["zoom.x3d"]);
Inline55.bboxSize = new SFVec3f(new float[0.000743108,0.000743108,0]);
Inline55.bboxCenter = new SFVec3f(new float[0,0,0.00636301]);
Transform54.children = new MFNode();

Transform54.children[0] = Inline55;

Transform53.children = new MFNode();

Transform53.children[0] = Transform54;

Switch51.children[1] = Transform53;

Transform Transform56 = createNode("Transform");
Transform56.DEF = "BoolSwitch_1";
ProtoInstance ProtoInstance57 = createNode("ProtoInstance");
ProtoInstance57.name = "BoolSwitch";
ProtoInstance57.DEF = "_7";
Transform56.children = new MFNode();

Transform56.children[0] = ProtoInstance57;

Switch51.children[2] = Transform56;

Transform50.children = new MFNode();

Transform50.children[0] = Switch51;

Switch49.children = new MFNode();

Switch49.children[0] = Transform50;

Transform Transform58 = createNode("Transform");
Switch49.children[1] = Transform58;

Transform48.children = new MFNode();

Transform48.children[0] = Switch49;

Transform45.children[1] = Transform48;

Transform42.children[2] = Transform45;

Transform Transform59 = createNode("Transform");
Transform59.DEF = "mouse_1";
Switch Switch60 = createNode("Switch");
Switch60.DEF = "_8";
Switch60.whichChoice = 0;
Transform Transform61 = createNode("Transform");
Switch60.children = new MFNode();

Switch60.children[0] = Transform61;

Transform Transform62 = createNode("Transform");
Transform62.DEF = "on_3";
Transform62.translation = new SFVec3f(new float[-0.07,0.06,-0.30099]);
Transform Transform63 = createNode("Transform");
Transform63.USE = "Zoom_1";
Transform62.children = new MFNode();

Transform62.children[0] = Transform63;

Switch60.children[1] = Transform62;

Transform Transform64 = createNode("Transform");
Transform64.DEF = "BoolSwitch_2";
ProtoInstance ProtoInstance65 = createNode("ProtoInstance");
ProtoInstance65.name = "BoolSwitch";
ProtoInstance65.DEF = "_9";
Transform64.children = new MFNode();

Transform64.children[0] = ProtoInstance65;

Switch60.children[2] = Transform64;

Transform59.children = new MFNode();

Transform59.children[0] = Switch60;

Transform42.children[3] = Transform59;

Transform41.children = new MFNode();

Transform41.children[0] = Transform42;

Transform Transform66 = createNode("Transform");
Transform66.DEF = "Move_1";
PlaneSensor PlaneSensor67 = createNode("PlaneSensor");
PlaneSensor67.DEF = "_10";
PlaneSensor67.offset = new SFVec3f(new float[-0.0746069,-0.133511,0]);
PlaneSensor67.minPosition = new SFVec2f(new float[-0.0825515,-0.133799]);
PlaneSensor67.maxPosition = new SFVec2f(new float[0.0756775,0.134533]);
Transform66.children = new MFNode();

Transform66.children[0] = PlaneSensor67;

TouchSensor TouchSensor68 = createNode("TouchSensor");
TouchSensor68.DEF = "_11";
Transform66.children[1] = TouchSensor68;

Transform Transform69 = createNode("Transform");
Transform69.DEF = "button_2";
Transform69.translation = new SFVec3f(new float[-0.0746069,-0.133511,0]);
Transform69.center = new SFVec3f(new float[-0.183921,-0.0639503,-0.296896]);
Transform Transform70 = createNode("Transform");
Transform70.DEF = "Content";
Inline Inline71 = createNode("Inline");
Inline71.url = new MFString(new java.lang.String["mbenz.x3d"]);
Inline71.bboxSize = new SFVec3f(new float[0.360011,0.120031,0.00349]);
Inline71.bboxCenter = new SFVec3f(new float[3.7998e-7,-4.65661e-7,-0.298245]);
Transform70.children = new MFNode();

Transform70.children[0] = Inline71;

Transform69.children = new MFNode();

Transform69.children[0] = Transform70;

Transform Transform72 = createNode("Transform");
Transform72.DEF = "Rahmen";
Switch Switch73 = createNode("Switch");
Switch73.DEF = "_12";
Switch73.whichChoice = 0;
Transform Transform74 = createNode("Transform");
Transform74.DEF = "mouseOut";
TouchSensor TouchSensor75 = createNode("TouchSensor");
TouchSensor75.DEF = "_13";
Transform74.children = new MFNode();

Transform74.children[0] = TouchSensor75;

Transform Transform76 = createNode("Transform");
Transform76.DEF = "isOver_2";
ProtoInstance ProtoInstance77 = createNode("ProtoInstance");
ProtoInstance77.name = "isOver";
ProtoInstance77.DEF = "_14";
Transform76.children = new MFNode();

Transform76.children[0] = ProtoInstance77;

Transform74.children[1] = Transform76;

Transform Transform78 = createNode("Transform");
Transform78.DEF = "True";
ProtoInstance ProtoInstance79 = createNode("ProtoInstance");
ProtoInstance79.name = "True";
ProtoInstance79.DEF = "_15";
Transform78.children = new MFNode();

Transform78.children[0] = ProtoInstance79;

Transform74.children[2] = Transform78;

Transform Transform80 = createNode("Transform");
Transform80.DEF = "fg";
Transform80.translation = new SFVec3f(new float[0.0756268,0.159199,-0.290121]);
Transform80.scale = new SFVec3f(new float[1.11103,1.2214,1]);
Shape Shape81 = createNode("Shape");
IndexedFaceSet IndexedFaceSet82 = createNode("IndexedFaceSet");
IndexedFaceSet82.coordIndex = new MFInt32(new int[1,0,3,2,-1]);
Coordinate Coordinate83 = createNode("Coordinate");
Coordinate83.point = new MFVec3f(new float[-0.230846,-0.066663,0,-0.230846,-0.193214,0,0.101703,-0.193214,0,0.101703,-0.066663,0]);
IndexedFaceSet82.coord = Coordinate83;

Shape81.geometry = IndexedFaceSet82;

Transform80.child = new undefined();

Transform80.child[0] = Shape81;

Transform74.children[3] = Transform80;

Switch73.children = new MFNode();

Switch73.children[0] = Transform74;

Transform Transform84 = createNode("Transform");
Transform84.DEF = "mouseOver";
Transform Transform85 = createNode("Transform");
Transform85.DEF = "bg";
Transform85.translation = new SFVec3f(new float[0.0819281,0.195895,-0.310268]);
Transform85.scale = new SFVec3f(new float[1.30637,1.49261,1.06768]);
Shape Shape86 = createNode("Shape");
IndexedFaceSet IndexedFaceSet87 = createNode("IndexedFaceSet");
IndexedFaceSet87.coordIndex = new MFInt32(new int[1,0,3,2,-1]);
Coordinate Coordinate88 = createNode("Coordinate");
Coordinate88.point = new MFVec3f(new float[-0.230846,-0.066663,0,-0.230846,-0.193214,0,0.101703,-0.193214,0,0.101703,-0.066663,0]);
IndexedFaceSet87.coord = Coordinate88;

Shape86.geometry = IndexedFaceSet87;

Transform85.child = new undefined();

Transform85.child[0] = Shape86;

Transform84.children = new MFNode();

Transform84.children[0] = Transform85;

Inline Inline89 = createNode("Inline");
Inline89.url = new MFString(new java.lang.String["border.x3d"]);
Inline89.bboxSize = new SFVec3f(new float[0.37516,0.141366,0.0000585616]);
Inline89.bboxCenter = new SFVec3f(new float[0.00364155,-6.55651e-7,-0.299961]);
Transform84.children[1] = Inline89;

Transform Transform90 = createNode("Transform");
Transform90.DEF = "Close_1";
TouchSensor TouchSensor91 = createNode("TouchSensor");
TouchSensor91.DEF = "_16";
Transform90.children = new MFNode();

Transform90.children[0] = TouchSensor91;

Transform Transform92 = createNode("Transform");
Transform92.DEF = "isOver";
ProtoInstance ProtoInstance93 = createNode("ProtoInstance");
ProtoInstance93.name = "isOver";
ProtoInstance93.DEF = "_17";
Transform92.children = new MFNode();

Transform92.children[0] = ProtoInstance93;

Transform90.children[1] = Transform92;

Transform Transform94 = createNode("Transform");
Transform94.DEF = "Close-Button";
Inline Inline95 = createNode("Inline");
Inline95.url = new MFString(new java.lang.String["close-button.x3d"]);
Inline95.bboxSize = new SFVec3f(new float[0.0111772,0.0107642,0]);
Inline95.bboxCenter = new SFVec3f(new float[0.18564,0.0653424,-0.29764]);
Transform94.children = new MFNode();

Transform94.children[0] = Inline95;

Transform90.children[2] = Transform94;

Transform Transform96 = createNode("Transform");
Transform96.DEF = "help";
Switch Switch97 = createNode("Switch");
Switch97.DEF = "_18";
Switch97.whichChoice = 1;
Transform Transform98 = createNode("Transform");
Switch97.children = new MFNode();

Switch97.children[0] = Transform98;

Transform Transform99 = createNode("Transform");
Transform99.DEF = "Close";
Inline Inline100 = createNode("Inline");
Inline100.url = new MFString(new java.lang.String["close.x3d"]);
Inline100.bboxSize = new SFVec3f(new float[0.0162762,0.0162762,0]);
Inline100.bboxCenter = new SFVec3f(new float[0.183659,0.0636474,-0.296069]);
Transform99.children = new MFNode();

Transform99.children[0] = Inline100;

Switch97.children[1] = Transform99;

Transform Transform101 = createNode("Transform");
Transform101.DEF = "BoolSwitch_3";
ProtoInstance ProtoInstance102 = createNode("ProtoInstance");
ProtoInstance102.name = "BoolSwitch";
ProtoInstance102.DEF = "_19";
Transform101.children = new MFNode();

Transform101.children[0] = ProtoInstance102;

Switch97.children[2] = Transform101;

Transform96.children = new MFNode();

Transform96.children[0] = Switch97;

Transform90.children[3] = Transform96;

Transform84.children[2] = Transform90;

Switch73.children[1] = Transform84;

Transform Transform103 = createNode("Transform");
Transform103.DEF = "Switcher";
ProtoInstance ProtoInstance104 = createNode("ProtoInstance");
ProtoInstance104.name = "Switcher";
ProtoInstance104.DEF = "_20";
Transform103.children = new MFNode();

Transform103.children[0] = ProtoInstance104;

Switch73.children[2] = Transform103;

Transform72.children = new MFNode();

Transform72.children[0] = Switch73;

Transform69.children[1] = Transform72;

Transform66.children[2] = Transform69;

Transform Transform105 = createNode("Transform");
Transform105.DEF = "mouse";
Switch Switch106 = createNode("Switch");
Switch106.DEF = "_21";
Switch106.whichChoice = -1;
Transform Transform107 = createNode("Transform");
Switch106.children = new MFNode();

Switch106.children[0] = Transform107;

Transform Transform108 = createNode("Transform");
Transform108.DEF = "on_4";
Transform Transform109 = createNode("Transform");
Transform109.DEF = "Move";
Inline Inline110 = createNode("Inline");
Inline110.url = new MFString(new java.lang.String["move.x3d"]);
Inline110.bboxSize = new SFVec3f(new float[0.0313628,0.0313628,0]);
Inline110.bboxCenter = new SFVec3f(new float[0,0,0.005]);
Transform109.children = new MFNode();

Transform109.children[0] = Inline110;

Transform108.children = new MFNode();

Transform108.children[0] = Transform109;

Switch106.children[1] = Transform108;

Transform Transform111 = createNode("Transform");
Transform111.DEF = "BoolSwitch_4";
ProtoInstance ProtoInstance112 = createNode("ProtoInstance");
ProtoInstance112.name = "BoolSwitch";
ProtoInstance112.DEF = "_22";
Transform111.children = new MFNode();

Transform111.children[0] = ProtoInstance112;

Switch106.children[2] = Transform111;

Transform105.children = new MFNode();

Transform105.children[0] = Switch106;

Transform66.children[3] = Transform105;

Transform41.children[1] = Transform66;

Transform Transform113 = createNode("Transform");
Transform113.DEF = "_Script";
Script Script114 = createNode("Script");
Script114.DEF = "_scale";
field field115 = createNode("field");
field115.name = "scale_changed";
field115.accessType = "outputOnly";
field115.type = "SFVec3f";
Script114.field = new MFNode();

Script114.field[0] = field115;

field field116 = createNode("field");
field116.name = "minPosition_changed";
field116.accessType = "outputOnly";
field116.type = "SFVec2f";
Script114.field[1] = field116;

field field117 = createNode("field");
field117.name = "maxPosition_changed";
field117.accessType = "outputOnly";
field117.type = "SFVec2f";
Script114.field[2] = field117;

field field118 = createNode("field");
field118.name = "set_translation";
field118.accessType = "inputOnly";
field118.type = "SFVec3f";
Script114.field[3] = field118;

field field119 = createNode("field");
field119.name = "isActive";
field119.accessType = "inputOnly";
field119.type = "SFBool";
Script114.field[4] = field119;

field field120 = createNode("field");
field120.name = "minPosition";
field120.accessType = "initializeOnly";
field120.type = "SFVec2f";
field120.value = "-0.0825515 -0.133799";
Script114.field[5] = field120;

field field121 = createNode("field");
field121.name = "maxPosition";
field121.accessType = "initializeOnly";
field121.type = "SFVec2f";
field121.value = "0.0756775 0.134533";
Script114.field[6] = field121;

field field122 = createNode("field");
field122.name = "size";
field122.accessType = "initializeOnly";
field122.type = "SFVec2f";
field122.value = "0.3748 0.1414";
Script114.field[7] = field122;


Script114.setSourceCode(`vrmlscript:\n"+
"function initialize()\n"+
"{\n"+
"	minPosition_changed = minPosition;\n"+
"	maxPosition_changed = maxPosition;\n"+
"}\n"+
"\n"+
"function set_translation(value, time)\n"+
"{\n"+
"	scale_changed = new SFVec3f(\n"+
"		1 + value.x * 2.75,\n"+
"		1 + value.x * 2.75,\n"+
"		1\n"+
"	);\n"+
"}\n"+
"\n"+
"function isActive(value, time)\n"+
"{\n"+
"	if (!value) {\n"+
"		maxPosition_changed = new SFVec2f(\n"+
"			maxPosition.x+ size.x - (size.x * scale_changed.x),\n"+
"			maxPosition.y + size.y - (size.y * scale_changed.y)\n"+
"		);\n"+
"	}\n"+
"}`)
Transform113.children = new MFNode();

Transform113.children[0] = Script114;

Transform41.children[2] = Transform113;

Switch37.children[1] = Transform41;

Transform Transform123 = createNode("Transform");
Transform123.DEF = "BoolSwitch";
ProtoInstance ProtoInstance124 = createNode("ProtoInstance");
ProtoInstance124.name = "BoolSwitch";
ProtoInstance124.DEF = "_23";
Transform123.children = new MFNode();

Transform123.children[0] = ProtoInstance124;

Switch37.children[2] = Transform123;

Transform Transform125 = createNode("Transform");
Transform125.DEF = "Gate";
ProtoInstance ProtoInstance126 = createNode("ProtoInstance");
ProtoInstance126.name = "Gate";
ProtoInstance126.DEF = "_24";
fieldValue fieldValue127 = createNode("fieldValue");
fieldValue127.name = "offset";
fieldValue127.value = "true";
ProtoInstance126.fieldValue = new MFNode();

ProtoInstance126.fieldValue[0] = fieldValue127;

Transform125.children = new MFNode();

Transform125.children[0] = ProtoInstance126;

Switch37.children[3] = Transform125;

Transform Transform128 = createNode("Transform");
Transform128.DEF = "OutTrue";
ProtoInstance ProtoInstance129 = createNode("ProtoInstance");
ProtoInstance129.name = "True";
ProtoInstance129.DEF = "_25";
Transform128.children = new MFNode();

Transform128.children[0] = ProtoInstance129;

Switch37.children[4] = Transform128;

Transform36.children = new MFNode();

Transform36.children[0] = Switch37;

children[8] = Transform36;

Transform Transform130 = createNode("Transform");
Transform130.DEF = "Hide";
Switch Switch131 = createNode("Switch");
Switch131.DEF = "_26";
Switch131.whichChoice = 0;
Transform Transform132 = createNode("Transform");
Switch131.children = new MFNode();

Switch131.children[0] = Transform132;

Transform Transform133 = createNode("Transform");
TouchSensor TouchSensor134 = createNode("TouchSensor");
TouchSensor134.DEF = "_27";
Transform133.children = new MFNode();

Transform133.children[0] = TouchSensor134;

Transform Transform135 = createNode("Transform");
Transform135.DEF = "Not";
ProtoInstance ProtoInstance136 = createNode("ProtoInstance");
ProtoInstance136.name = "Not";
ProtoInstance136.DEF = "_28";
Transform135.children = new MFNode();

Transform135.children[0] = ProtoInstance136;

Transform133.children[1] = Transform135;

Transform Transform137 = createNode("Transform");
Transform137.DEF = "on";
Transform137.translation = new SFVec3f(new float[0.250093,0.910024,-0.3509]);
Transform137.scale = new SFVec3f(new float[3.87311,7.0035,1.06768]);
Shape Shape138 = createNode("Shape");
IndexedFaceSet IndexedFaceSet139 = createNode("IndexedFaceSet");
IndexedFaceSet139.coordIndex = new MFInt32(new int[1,0,3,2,-1]);
Coordinate Coordinate140 = createNode("Coordinate");
Coordinate140.point = new MFVec3f(new float[-0.230846,-0.066663,0,-0.230846,-0.193214,0,0.101703,-0.193214,0,0.101703,-0.066663,0]);
IndexedFaceSet139.coord = Coordinate140;

Shape138.geometry = IndexedFaceSet139;

Transform137.child = new undefined();

Transform137.child[0] = Shape138;

Transform133.children[2] = Transform137;

Switch131.children[1] = Transform133;

Transform130.children = new MFNode();

Transform130.children[0] = Switch131;

children[9] = Transform130;

ROUTE ROUTE141 = createNode("ROUTE");
ROUTE141.fromNode = "_4";
ROUTE141.fromField = "isOver";
ROUTE141.toNode = "_7";
ROUTE141.toField = "isActive";
children[10] = ROUTE141;

ROUTE ROUTE142 = createNode("ROUTE");
ROUTE142.fromNode = "_7";
ROUTE142.fromField = "wichChoice_changed";
ROUTE142.toNode = "_6";
ROUTE142.toField = "set_whichChoice";
children[11] = ROUTE142;

ROUTE ROUTE143 = createNode("ROUTE");
ROUTE143.fromNode = "_9";
ROUTE143.fromField = "wichChoice_changed";
ROUTE143.toNode = "_5";
ROUTE143.toField = "set_whichChoice";
children[12] = ROUTE143;

ROUTE ROUTE144 = createNode("ROUTE");
ROUTE144.fromNode = "button_2";
ROUTE144.fromField = "translation_changed";
ROUTE144.toNode = "button_1";
ROUTE144.toField = "set_translation";
children[13] = ROUTE144;

ROUTE ROUTE145 = createNode("ROUTE");
ROUTE145.fromNode = "button_2";
ROUTE145.fromField = "scale_changed";
ROUTE145.toNode = "button_1";
ROUTE145.toField = "set_scale";
children[14] = ROUTE145;

ROUTE ROUTE146 = createNode("ROUTE");
ROUTE146.fromNode = "button_2";
ROUTE146.fromField = "center_changed";
ROUTE146.toNode = "button_1";
ROUTE146.toField = "set_center";
children[15] = ROUTE146;

ROUTE ROUTE147 = createNode("ROUTE");
ROUTE147.fromNode = "_3";
ROUTE147.fromField = "trackPoint_changed";
ROUTE147.toNode = "on_3";
ROUTE147.toField = "set_translation";
children[16] = ROUTE147;

ROUTE ROUTE148 = createNode("ROUTE");
ROUTE148.fromNode = "_3";
ROUTE148.fromField = "isActive";
ROUTE148.toNode = "_9";
ROUTE148.toField = "isActive";
children[17] = ROUTE148;

ROUTE ROUTE149 = createNode("ROUTE");
ROUTE149.fromNode = "_9";
ROUTE149.fromField = "wichChoice_changed";
ROUTE149.toNode = "_8";
ROUTE149.toField = "set_whichChoice";
children[18] = ROUTE149;

ROUTE ROUTE150 = createNode("ROUTE");
ROUTE150.fromNode = "_scale";
ROUTE150.fromField = "minPosition_changed";
ROUTE150.toNode = "_10";
ROUTE150.toField = "set_minPosition";
children[19] = ROUTE150;

ROUTE ROUTE151 = createNode("ROUTE");
ROUTE151.fromNode = "_scale";
ROUTE151.fromField = "maxPosition_changed";
ROUTE151.toNode = "_10";
ROUTE151.toField = "set_maxPosition";
children[20] = ROUTE151;

ROUTE ROUTE152 = createNode("ROUTE");
ROUTE152.fromNode = "button_2";
ROUTE152.fromField = "translation_changed";
ROUTE152.toNode = "_10";
ROUTE152.toField = "set_offset";
children[21] = ROUTE152;

ROUTE ROUTE153 = createNode("ROUTE");
ROUTE153.fromNode = "_13";
ROUTE153.fromField = "isOver";
ROUTE153.toNode = "_14";
ROUTE153.toField = "set_isOver";
children[22] = ROUTE153;

ROUTE ROUTE154 = createNode("ROUTE");
ROUTE154.fromNode = "_13";
ROUTE154.fromField = "hitPoint_changed";
ROUTE154.toNode = "_14";
ROUTE154.toField = "set_hitPoint";
children[23] = ROUTE154;

ROUTE ROUTE155 = createNode("ROUTE");
ROUTE155.fromNode = "_14";
ROUTE155.fromField = "isOver_changed";
ROUTE155.toNode = "_15";
ROUTE155.toField = "set_SFBool";
children[24] = ROUTE155;

ROUTE ROUTE156 = createNode("ROUTE");
ROUTE156.fromNode = "_16";
ROUTE156.fromField = "isOver";
ROUTE156.toNode = "_17";
ROUTE156.toField = "set_isOver";
children[25] = ROUTE156;

ROUTE ROUTE157 = createNode("ROUTE");
ROUTE157.fromNode = "_16";
ROUTE157.fromField = "hitPoint_changed";
ROUTE157.toNode = "_17";
ROUTE157.toField = "set_hitPoint";
children[26] = ROUTE157;

ROUTE ROUTE158 = createNode("ROUTE");
ROUTE158.fromNode = "_16";
ROUTE158.fromField = "isActive";
ROUTE158.toNode = "_19";
ROUTE158.toField = "isActive";
children[27] = ROUTE158;

ROUTE ROUTE159 = createNode("ROUTE");
ROUTE159.fromNode = "_17";
ROUTE159.fromField = "isOver_changed";
ROUTE159.toNode = "_19";
ROUTE159.toField = "isActive";
children[28] = ROUTE159;

ROUTE ROUTE160 = createNode("ROUTE");
ROUTE160.fromNode = "_19";
ROUTE160.fromField = "wichChoice_changed";
ROUTE160.toNode = "_18";
ROUTE160.toField = "set_whichChoice";
children[29] = ROUTE160;

ROUTE ROUTE161 = createNode("ROUTE");
ROUTE161.fromNode = "_16";
ROUTE161.fromField = "touchTime";
ROUTE161.toNode = "_20";
ROUTE161.toField = "set_next";
children[30] = ROUTE161;

ROUTE ROUTE162 = createNode("ROUTE");
ROUTE162.fromNode = "_15";
ROUTE162.fromField = "startTime";
ROUTE162.toNode = "_20";
ROUTE162.toField = "set_next";
children[31] = ROUTE162;

ROUTE ROUTE163 = createNode("ROUTE");
ROUTE163.fromNode = "_25";
ROUTE163.fromField = "startTime";
ROUTE163.toNode = "_20";
ROUTE163.toField = "set_next";
children[32] = ROUTE163;

ROUTE ROUTE164 = createNode("ROUTE");
ROUTE164.fromNode = "_20";
ROUTE164.fromField = "whichChoice_changed";
ROUTE164.toNode = "_12";
ROUTE164.toField = "set_whichChoice";
children[33] = ROUTE164;

ROUTE ROUTE165 = createNode("ROUTE");
ROUTE165.fromNode = "_10";
ROUTE165.fromField = "translation_changed";
ROUTE165.toNode = "button_2";
ROUTE165.toField = "set_translation";
children[34] = ROUTE165;

ROUTE ROUTE166 = createNode("ROUTE");
ROUTE166.fromNode = "_scale";
ROUTE166.fromField = "scale_changed";
ROUTE166.toNode = "button_2";
ROUTE166.toField = "set_scale";
children[35] = ROUTE166;

ROUTE ROUTE167 = createNode("ROUTE");
ROUTE167.fromNode = "_10";
ROUTE167.fromField = "trackPoint_changed";
ROUTE167.toNode = "on_4";
ROUTE167.toField = "set_translation";
children[36] = ROUTE167;

ROUTE ROUTE168 = createNode("ROUTE");
ROUTE168.fromNode = "_10";
ROUTE168.fromField = "isActive";
ROUTE168.toNode = "_22";
ROUTE168.toField = "isActive";
children[37] = ROUTE168;

ROUTE ROUTE169 = createNode("ROUTE");
ROUTE169.fromNode = "_22";
ROUTE169.fromField = "wichChoice_changed";
ROUTE169.toNode = "_21";
ROUTE169.toField = "set_whichChoice";
children[38] = ROUTE169;

ROUTE ROUTE170 = createNode("ROUTE");
ROUTE170.fromNode = "_3";
ROUTE170.fromField = "translation_changed";
ROUTE170.toNode = "_scale";
ROUTE170.toField = "set_translation";
children[39] = ROUTE170;

ROUTE ROUTE171 = createNode("ROUTE");
ROUTE171.fromNode = "_3";
ROUTE171.fromField = "isActive";
ROUTE171.toNode = "_scale";
ROUTE171.toField = "isActive";
children[40] = ROUTE171;

ROUTE ROUTE172 = createNode("ROUTE");
ROUTE172.fromNode = "_24";
ROUTE172.fromField = "isActive";
ROUTE172.toNode = "_23";
ROUTE172.toField = "isActive";
children[41] = ROUTE172;

ROUTE ROUTE173 = createNode("ROUTE");
ROUTE173.fromNode = "_24";
ROUTE173.fromField = "isActive";
ROUTE173.toNode = "_24";
ROUTE173.toField = "set_offset";
children[42] = ROUTE173;

ROUTE ROUTE174 = createNode("ROUTE");
ROUTE174.fromNode = "_16";
ROUTE174.fromField = "touchTime";
ROUTE174.toNode = "_24";
ROUTE174.toField = "set_startTime";
children[43] = ROUTE174;

ROUTE ROUTE175 = createNode("ROUTE");
ROUTE175.fromNode = "_2";
ROUTE175.fromField = "touchTime";
ROUTE175.toNode = "_24";
ROUTE175.toField = "set_startTime";
children[44] = ROUTE175;

ROUTE ROUTE176 = createNode("ROUTE");
ROUTE176.fromNode = "_27";
ROUTE176.fromField = "isOver";
ROUTE176.toNode = "_25";
ROUTE176.toField = "set_SFBool";
children[45] = ROUTE176;

ROUTE ROUTE177 = createNode("ROUTE");
ROUTE177.fromNode = "_23";
ROUTE177.fromField = "wichChoice_changed";
ROUTE177.toNode = "_1";
ROUTE177.toField = "set_whichChoice";
children[46] = ROUTE177;

ROUTE ROUTE178 = createNode("ROUTE");
ROUTE178.fromNode = "_28";
ROUTE178.fromField = "value_changed";
ROUTE178.toNode = "_27";
ROUTE178.toField = "set_enabled";
children[47] = ROUTE178;

ROUTE ROUTE179 = createNode("ROUTE");
ROUTE179.fromNode = "_11";
ROUTE179.fromField = "isOver";
ROUTE179.toNode = "_28";
ROUTE179.toField = "set_SFBool";
children[48] = ROUTE179;

ROUTE ROUTE180 = createNode("ROUTE");
ROUTE180.fromNode = "_20";
ROUTE180.fromField = "whichChoice_changed";
ROUTE180.toNode = "_26";
ROUTE180.toField = "set_whichChoice";
children[49] = ROUTE180;

}
