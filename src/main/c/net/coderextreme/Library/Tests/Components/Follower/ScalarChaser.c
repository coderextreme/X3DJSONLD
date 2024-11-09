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
meta3.content = "Mon, 04 Jan 2016 05:18:49 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V4.0.6a, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "identifier";
meta6.content = "file:///home/holger/Projekte/Library/Tests/Components/Follower/ScalarChaser.x3d";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "Thu, 08 Mar 2018 09:10:36 GMT";
head1.meta[5] = meta7;

head = head1;

ExternProtoDeclare ExternProtoDeclare9 = createNode("ExternProtoDeclare");
ExternProtoDeclare9.name = "LineTrail";
ExternProtoDeclare9.url = new MFString(new java.lang.String["LineTrail.x3dv"]);
field field10 = createNode("field");
field10.name = "enabled";
field10.accessType = "inputOutput";
field10.type = "SFBool";
ExternProtoDeclare9.field = new MFNode();

ExternProtoDeclare9.field[0] = field10;

field field11 = createNode("field");
field11.name = "cycleInterval";
field11.accessType = "inputOutput";
field11.type = "SFTime";
ExternProtoDeclare9.field[1] = field11;

field field12 = createNode("field");
field12.name = "resetTime";
field12.accessType = "inputOutput";
field12.type = "SFTime";
ExternProtoDeclare9.field[2] = field12;

field field13 = createNode("field");
field13.name = "point";
field13.accessType = "inputOutput";
field13.type = "SFVec3f";
ExternProtoDeclare9.field[3] = field13;

field field14 = createNode("field");
field14.name = "dimension";
field14.accessType = "initializeOnly";
field14.type = "SFInt32";
ExternProtoDeclare9.field[4] = field14;

children = new MFNode();

children[0] = ExternProtoDeclare9;

ExternProtoDeclare ExternProtoDeclare15 = createNode("ExternProtoDeclare");
ExternProtoDeclare15.name = "SFVec3f";
ExternProtoDeclare15.url = new MFString(new java.lang.String["SFVec3f.x3dv"]);
field field16 = createNode("field");
field16.name = "set_triggerTime";
field16.accessType = "inputOnly";
field16.type = "SFTime";
ExternProtoDeclare15.field = new MFNode();

ExternProtoDeclare15.field[0] = field16;

field field17 = createNode("field");
field17.name = "keyValue";
field17.accessType = "inputOutput";
field17.type = "SFVec3f";
ExternProtoDeclare15.field[1] = field17;

field field18 = createNode("field");
field18.name = "value_changed";
field18.accessType = "outputOnly";
field18.type = "SFVec3f";
ExternProtoDeclare15.field[2] = field18;

children[1] = ExternProtoDeclare15;

ExternProtoDeclare ExternProtoDeclare19 = createNode("ExternProtoDeclare");
ExternProtoDeclare19.name = "SFVec2f";
ExternProtoDeclare19.url = new MFString(new java.lang.String["SFVec2f.x3dv"]);
field field20 = createNode("field");
field20.name = "set_triggerTime";
field20.accessType = "inputOnly";
field20.type = "SFTime";
ExternProtoDeclare19.field = new MFNode();

ExternProtoDeclare19.field[0] = field20;

field field21 = createNode("field");
field21.name = "keyValue";
field21.accessType = "inputOutput";
field21.type = "SFVec2f";
ExternProtoDeclare19.field[1] = field21;

field field22 = createNode("field");
field22.name = "value_changed";
field22.accessType = "outputOnly";
field22.type = "SFVec2f";
ExternProtoDeclare19.field[2] = field22;

children[2] = ExternProtoDeclare19;

ExternProtoDeclare ExternProtoDeclare23 = createNode("ExternProtoDeclare");
ExternProtoDeclare23.name = "SFFloat";
ExternProtoDeclare23.url = new MFString(new java.lang.String["SFFloat.x3dv"]);
field field24 = createNode("field");
field24.name = "set_triggerTime";
field24.accessType = "inputOnly";
field24.type = "SFTime";
ExternProtoDeclare23.field = new MFNode();

ExternProtoDeclare23.field[0] = field24;

field field25 = createNode("field");
field25.name = "keyValue";
field25.accessType = "inputOutput";
field25.type = "SFFloat";
ExternProtoDeclare23.field[1] = field25;

field field26 = createNode("field");
field26.name = "value_changed";
field26.accessType = "outputOnly";
field26.type = "SFFloat";
ExternProtoDeclare23.field[2] = field26;

children[3] = ExternProtoDeclare23;

WorldInfo WorldInfo27 = createNode("WorldInfo");
WorldInfo27.title = "PositionChaser";
MetadataSet MetadataSet28 = createNode("MetadataSet");
MetadataSet28.name = "Titania";
MetadataSet28.DEF = "Titania";
MetadataSet28.reference = "http://titania.create3000.de";
MetadataSet MetadataSet29 = createNode("MetadataSet");
MetadataSet29.name = "NavigationInfo";
MetadataSet29.DEF = "NavigationInfo";
MetadataSet29.reference = "http://titania.create3000.de";
MetadataString MetadataString30 = createNode("MetadataString");
MetadataString30.name = "type";
MetadataString30.DEF = "type";
MetadataString30.reference = "http://titania.create3000.de";
MetadataString30.value = new MFString(new java.lang.String["NONE"]);
MetadataSet29.value = new MFNode();

MetadataSet29.value[0] = MetadataString30;

MetadataSet28.value = new MFNode();

MetadataSet28.value[0] = MetadataSet29;

MetadataSet MetadataSet31 = createNode("MetadataSet");
MetadataSet31.name = "Viewpoint";
MetadataSet31.DEF = "Viewpoint";
MetadataSet31.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble32 = createNode("MetadataDouble");
MetadataDouble32.name = "position";
MetadataDouble32.DEF = "position";
MetadataDouble32.reference = "http://titania.create3000.de";
MetadataDouble32.value = new MFDouble(new double[0,0,10]);
MetadataSet31.value = new MFNode();

MetadataSet31.value[0] = MetadataDouble32;

MetadataDouble MetadataDouble33 = createNode("MetadataDouble");
MetadataDouble33.name = "orientation";
MetadataDouble33.DEF = "orientation";
MetadataDouble33.reference = "http://titania.create3000.de";
MetadataDouble33.value = new MFDouble(new double[0,0,1,0]);
MetadataSet31.value[1] = MetadataDouble33;

MetadataDouble MetadataDouble34 = createNode("MetadataDouble");
MetadataDouble34.name = "centerOfRotation";
MetadataDouble34.DEF = "centerOfRotation";
MetadataDouble34.reference = "http://titania.create3000.de";
MetadataDouble34.value = new MFDouble(new double[0,0,0]);
MetadataSet31.value[2] = MetadataDouble34;

MetadataSet28.value[1] = MetadataSet31;

MetadataSet MetadataSet35 = createNode("MetadataSet");
MetadataSet35.name = "Selection";
MetadataSet35.DEF = "Selection";
MetadataSet35.reference = "http://titania.create3000.de";
MetadataBoolean MetadataBoolean36 = createNode("MetadataBoolean");
MetadataBoolean36.name = "selectGeometry";
MetadataBoolean36.DEF = "selectGeometry";
MetadataBoolean36.reference = "http://titania.create3000.de";
MetadataBoolean36.value = new MFBool(new boolean[False]);
MetadataSet35.value = new MFNode();

MetadataSet35.value[0] = MetadataBoolean36;

MetadataSet MetadataSet37 = createNode("MetadataSet");
MetadataSet37.name = "nodes";
MetadataSet37.DEF = "nodes";
MetadataSet37.reference = "http://titania.create3000.de";
MetadataSet35.value[1] = MetadataSet37;

MetadataSet28.value[2] = MetadataSet35;

MetadataSet MetadataSet38 = createNode("MetadataSet");
MetadataSet38.name = "Page";
MetadataSet38.DEF = "Page";
MetadataSet38.reference = "http://titania.create3000.de";
MetadataInteger MetadataInteger39 = createNode("MetadataInteger");
MetadataInteger39.name = "activeView";
MetadataInteger39.DEF = "activeView";
MetadataInteger39.reference = "http://titania.create3000.de";
MetadataInteger39.value = new MFInt32(new int[1]);
MetadataSet38.value = new MFNode();

MetadataSet38.value[0] = MetadataInteger39;

MetadataInteger MetadataInteger40 = createNode("MetadataInteger");
MetadataInteger40.name = "multiView";
MetadataInteger40.DEF = "multiView";
MetadataInteger40.reference = "http://titania.create3000.de";
MetadataInteger40.value = new MFInt32(new int[0]);
MetadataSet38.value[1] = MetadataInteger40;

MetadataSet28.value[3] = MetadataSet38;

WorldInfo27.metadata = MetadataSet28;

children[4] = WorldInfo27;

NavigationInfo NavigationInfo41 = createNode("NavigationInfo");
NavigationInfo41.type = new MFString(new java.lang.String[", ","NONEANY"]);
children[5] = NavigationInfo41;

Background Background42 = createNode("Background");
Background42.skyColor = new MFColor(new float[0.2,0.2,0.2]);
children[6] = Background42;

Transform Transform43 = createNode("Transform");
Transform43.DEF = "Plane";
TouchSensor TouchSensor44 = createNode("TouchSensor");
TouchSensor44.DEF = "Touch";
Transform43.children = new MFNode();

Transform43.children[0] = TouchSensor44;

Transform Transform45 = createNode("Transform");
Transform45.DEF = "Rectangle2D";
Transform45.scale = new SFVec3f(new float[4,4,1]);
Shape Shape46 = createNode("Shape");
Appearance Appearance47 = createNode("Appearance");
Material Material48 = createNode("Material");
Material48.diffuseColor = new SFColor(new float[0.5,0,0.5]);
Material48.transparency = 0.5;
Appearance47.material = Material48;

Shape46.appearance = Appearance47;

Rectangle2D Rectangle2D49 = createNode("Rectangle2D");
Shape46.geometry = Rectangle2D49;

Transform45.child = new undefined();

Transform45.child[0] = Shape46;

Transform43.children[1] = Transform45;

children[7] = Transform43;

ScalarChaser ScalarChaser50 = createNode("ScalarChaser");
ScalarChaser50.DEF = "X";
ScalarChaser50.duration = 2;
children[8] = ScalarChaser50;

ScalarChaser ScalarChaser51 = createNode("ScalarChaser");
ScalarChaser51.DEF = "Y";
ScalarChaser51.duration = 2;
children[9] = ScalarChaser51;

Transform Transform52 = createNode("Transform");
Transform52.DEF = "Sphere";
Transform52.translation = new SFVec3f(new float[2.45296,1.55582,0]);
Transform52.scale = new SFVec3f(new float[0.192862,0.192862,0.192862]);
Shape Shape53 = createNode("Shape");
Appearance Appearance54 = createNode("Appearance");
Material Material55 = createNode("Material");
Material55.DEF = "SphereMaterial";
Appearance54.material = Material55;

Shape53.appearance = Appearance54;

Sphere Sphere56 = createNode("Sphere");
Shape53.geometry = Sphere56;

Transform52.child = new undefined();

Transform52.child[0] = Shape53;

children[10] = Transform52;

Shape Shape57 = createNode("Shape");
Shape57.DEF = "LineTrail";
Appearance Appearance58 = createNode("Appearance");
Material Material59 = createNode("Material");
Material59.emissiveColor = new SFColor(new float[0,0.8,0.8]);
Appearance58.material = Material59;

Shape57.appearance = Appearance58;

ProtoInstance ProtoInstance60 = createNode("ProtoInstance");
ProtoInstance60.name = "LineTrail";
ProtoInstance60.DEF = "Trail";
fieldValue fieldValue61 = createNode("fieldValue");
fieldValue61.name = "enabled";
fieldValue61.value = "false";
ProtoInstance60.fieldValue = new MFNode();

ProtoInstance60.fieldValue[0] = fieldValue61;

fieldValue fieldValue62 = createNode("fieldValue");
fieldValue62.name = "cycleInterval";
fieldValue62.value = "0.1";
ProtoInstance60.fieldValue[1] = fieldValue62;

fieldValue fieldValue63 = createNode("fieldValue");
fieldValue63.name = "point";
fieldValue63.value = "2.45296 1.55582 0";
ProtoInstance60.fieldValue[2] = fieldValue63;

fieldValue fieldValue64 = createNode("fieldValue");
fieldValue64.name = "dimension";
fieldValue64.value = "200";
ProtoInstance60.fieldValue[3] = fieldValue64;

Shape57.geometry = ProtoInstance60;

children[11] = Shape57;

Script Script65 = createNode("Script");
Script65.DEF = "FollowerScript";
field field66 = createNode("field");
field66.name = "set_time";
field66.accessType = "inputOnly";
field66.type = "SFTime";
Script65.field = new MFNode();

Script65.field[0] = field66;

field field67 = createNode("field");
field67.name = "set_active";
field67.accessType = "inputOnly";
field67.type = "SFBool";
Script65.field[1] = field67;

field field68 = createNode("field");
field68.name = "set_valueX";
field68.accessType = "inputOnly";
field68.type = "SFFloat";
Script65.field[2] = field68;

field field69 = createNode("field");
field69.name = "set_valueY";
field69.accessType = "inputOnly";
field69.type = "SFFloat";
Script65.field[3] = field69;

field field70 = createNode("field");
field70.name = "color_changed";
field70.accessType = "outputOnly";
field70.type = "SFColor";
Script65.field[4] = field70;

field field71 = createNode("field");
field71.name = "destinationX_changed";
field71.accessType = "outputOnly";
field71.type = "SFFloat";
Script65.field[5] = field71;

field field72 = createNode("field");
field72.name = "destinationY_changed";
field72.accessType = "outputOnly";
field72.type = "SFFloat";
Script65.field[6] = field72;

field field73 = createNode("field");
field73.name = "value_changed";
field73.accessType = "outputOnly";
field73.type = "SFVec3f";
Script65.field[7] = field73;

field field74 = createNode("field");
field74.name = "touchSensor";
field74.accessType = "initializeOnly";
field74.type = "SFNode";
TouchSensor TouchSensor75 = createNode("TouchSensor");
TouchSensor75.USE = "Touch";
field74.children = new MFNode();

field74.children[0] = TouchSensor75;

Script65.field[8] = field74;


Script65.setSourceCode(`vrmlscript:\n"+
"function set_time ()\n"+
"{\n"+
"	destinationX_changed = touchSensor .hitPoint_changed .x;\n"+
"	destinationY_changed = touchSensor .hitPoint_changed .y;\n"+
"}\n"+
"\n"+
"function set_active (value)\n"+
"{\n"+
"	if (value)\n"+
"		color_changed = new SFColor (0.8, 0, 0);\n"+
"	\n"+
"	else\n"+
"		color_changed = new SFColor (0.8, 0.8, 0.8);\n"+
"}\n"+
"\n"+
"function set_valueX (value)\n"+
"{\n"+
"	value_changed .x = value;\n"+
"}\n"+
"\n"+
"function set_valueY (value)\n"+
"{\n"+
"	value_changed .y = value;\n"+
"}`)
children[12] = Script65;

Transform Transform76 = createNode("Transform");
Transform76.DEF = "ResetBox";
Transform76.translation = new SFVec3f(new float[4.43603,0,0]);
Transform76.scale = new SFVec3f(new float[0.167946,0.167946,0.167946]);
Shape Shape77 = createNode("Shape");
Appearance Appearance78 = createNode("Appearance");
Material Material79 = createNode("Material");
Appearance78.material = Material79;

Shape77.appearance = Appearance78;

Box Box80 = createNode("Box");
Shape77.geometry = Box80;

Transform76.child = new undefined();

Transform76.child[0] = Shape77;

TouchSensor TouchSensor81 = createNode("TouchSensor");
TouchSensor81.DEF = "ResetTouch";
Transform76.children[1] = TouchSensor81;

ProtoInstance ProtoInstance82 = createNode("ProtoInstance");
ProtoInstance82.name = "SFFloat";
ProtoInstance82.DEF = "_1";
Transform76.children[2] = ProtoInstance82;

children[13] = Transform76;

Transform Transform83 = createNode("Transform");
Transform83.DEF = "ResetBox_2";
Transform83.translation = new SFVec3f(new float[4.43603,-0.67719,0]);
Transform83.scale = new SFVec3f(new float[0.167946,0.167946,0.167946]);
Shape Shape84 = createNode("Shape");
Appearance Appearance85 = createNode("Appearance");
Material Material86 = createNode("Material");
Appearance85.material = Material86;

Shape84.appearance = Appearance85;

Box Box87 = createNode("Box");
Shape84.geometry = Box87;

Transform83.child = new undefined();

Transform83.child[0] = Shape84;

TouchSensor TouchSensor88 = createNode("TouchSensor");
TouchSensor88.DEF = "ResetTouch_3";
Transform83.children[1] = TouchSensor88;

ProtoInstance ProtoInstance89 = createNode("ProtoInstance");
ProtoInstance89.name = "SFFloat";
ProtoInstance89.DEF = "_4";
fieldValue fieldValue90 = createNode("fieldValue");
fieldValue90.name = "keyValue";
fieldValue90.value = "1";
ProtoInstance89.fieldValue = new MFNode();

ProtoInstance89.fieldValue[0] = fieldValue90;

Transform83.children[2] = ProtoInstance89;

children[14] = Transform83;

ROUTE ROUTE91 = createNode("ROUTE");
ROUTE91.fromNode = "Touch";
ROUTE91.fromField = "touchTime";
ROUTE91.toNode = "FollowerScript";
ROUTE91.toField = "set_time";
children[15] = ROUTE91;

ROUTE ROUTE92 = createNode("ROUTE");
ROUTE92.fromNode = "FollowerScript";
ROUTE92.fromField = "color_changed";
ROUTE92.toNode = "SphereMaterial";
ROUTE92.toField = "set_diffuseColor";
children[16] = ROUTE92;

ROUTE ROUTE93 = createNode("ROUTE");
ROUTE93.fromNode = "FollowerScript";
ROUTE93.fromField = "value_changed";
ROUTE93.toNode = "Trail";
ROUTE93.toField = "set_point";
children[17] = ROUTE93;

ROUTE ROUTE94 = createNode("ROUTE");
ROUTE94.fromNode = "FollowerScript";
ROUTE94.fromField = "value_changed";
ROUTE94.toNode = "Sphere";
ROUTE94.toField = "set_translation";
children[18] = ROUTE94;

ROUTE ROUTE95 = createNode("ROUTE");
ROUTE95.fromNode = "ResetTouch";
ROUTE95.fromField = "touchTime";
ROUTE95.toNode = "_1";
ROUTE95.toField = "set_triggerTime";
children[19] = ROUTE95;

ROUTE ROUTE96 = createNode("ROUTE");
ROUTE96.fromNode = "_1";
ROUTE96.fromField = "value_changed";
ROUTE96.toNode = "Y";
ROUTE96.toField = "set_value";
children[20] = ROUTE96;

ROUTE ROUTE97 = createNode("ROUTE");
ROUTE97.fromNode = "_1";
ROUTE97.fromField = "value_changed";
ROUTE97.toNode = "X";
ROUTE97.toField = "set_value";
children[21] = ROUTE97;

ROUTE ROUTE98 = createNode("ROUTE");
ROUTE98.fromNode = "Y";
ROUTE98.fromField = "isActive";
ROUTE98.toNode = "Trail";
ROUTE98.toField = "set_enabled";
children[22] = ROUTE98;

ROUTE ROUTE99 = createNode("ROUTE");
ROUTE99.fromNode = "Y";
ROUTE99.fromField = "isActive";
ROUTE99.toNode = "FollowerScript";
ROUTE99.toField = "set_active";
children[23] = ROUTE99;

ROUTE ROUTE100 = createNode("ROUTE");
ROUTE100.fromNode = "FollowerScript";
ROUTE100.fromField = "destinationX_changed";
ROUTE100.toNode = "X";
ROUTE100.toField = "set_destination";
children[24] = ROUTE100;

ROUTE ROUTE101 = createNode("ROUTE");
ROUTE101.fromNode = "FollowerScript";
ROUTE101.fromField = "destinationY_changed";
ROUTE101.toNode = "Y";
ROUTE101.toField = "set_destination";
children[25] = ROUTE101;

ROUTE ROUTE102 = createNode("ROUTE");
ROUTE102.fromNode = "X";
ROUTE102.fromField = "value_changed";
ROUTE102.toNode = "FollowerScript";
ROUTE102.toField = "set_valueX";
children[26] = ROUTE102;

ROUTE ROUTE103 = createNode("ROUTE");
ROUTE103.fromNode = "Y";
ROUTE103.fromField = "value_changed";
ROUTE103.toNode = "FollowerScript";
ROUTE103.toField = "set_valueY";
children[27] = ROUTE103;

ROUTE ROUTE104 = createNode("ROUTE");
ROUTE104.fromNode = "ResetTouch_3";
ROUTE104.fromField = "touchTime";
ROUTE104.toNode = "_4";
ROUTE104.toField = "set_triggerTime";
children[28] = ROUTE104;

ROUTE ROUTE105 = createNode("ROUTE");
ROUTE105.fromNode = "_4";
ROUTE105.fromField = "value_changed";
ROUTE105.toNode = "Y";
ROUTE105.toField = "set_value";
children[29] = ROUTE105;

ROUTE ROUTE106 = createNode("ROUTE");
ROUTE106.fromNode = "_4";
ROUTE106.fromField = "value_changed";
ROUTE106.toNode = "X";
ROUTE106.toField = "set_value";
children[30] = ROUTE106;

}
