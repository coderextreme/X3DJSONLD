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
meta3.content = "Sun, 03 Jan 2016 08:35:00 GMT";
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
meta6.content = "file:///home/holger/Projekte/Library/Tests/Components/Follower/ScalarDamper.x3d";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "Thu, 08 Mar 2018 09:21:55 GMT";
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
ExternProtoDeclare15.name = "SFFloat";
ExternProtoDeclare15.url = new MFString(new java.lang.String["SFFloat.x3dv"]);
field field16 = createNode("field");
field16.name = "set_triggerTime";
field16.accessType = "inputOnly";
field16.type = "SFTime";
ExternProtoDeclare15.field = new MFNode();

ExternProtoDeclare15.field[0] = field16;

field field17 = createNode("field");
field17.name = "keyValue";
field17.accessType = "inputOutput";
field17.type = "SFFloat";
ExternProtoDeclare15.field[1] = field17;

field field18 = createNode("field");
field18.name = "value_changed";
field18.accessType = "outputOnly";
field18.type = "SFFloat";
ExternProtoDeclare15.field[2] = field18;

children[1] = ExternProtoDeclare15;

WorldInfo WorldInfo19 = createNode("WorldInfo");
WorldInfo19.title = "PositionDamper2D";
MetadataSet MetadataSet20 = createNode("MetadataSet");
MetadataSet20.name = "Titania";
MetadataSet20.DEF = "Titania";
MetadataSet20.reference = "http://titania.create3000.de";
MetadataSet MetadataSet21 = createNode("MetadataSet");
MetadataSet21.name = "NavigationInfo";
MetadataSet21.DEF = "NavigationInfo";
MetadataSet21.reference = "http://titania.create3000.de";
MetadataString MetadataString22 = createNode("MetadataString");
MetadataString22.name = "type";
MetadataString22.DEF = "type";
MetadataString22.reference = "http://titania.create3000.de";
MetadataString22.value = new MFString(new java.lang.String["NONE"]);
MetadataSet21.value = new MFNode();

MetadataSet21.value[0] = MetadataString22;

MetadataSet20.value = new MFNode();

MetadataSet20.value[0] = MetadataSet21;

MetadataSet MetadataSet23 = createNode("MetadataSet");
MetadataSet23.name = "Viewpoint";
MetadataSet23.DEF = "Viewpoint";
MetadataSet23.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble24 = createNode("MetadataDouble");
MetadataDouble24.name = "position";
MetadataDouble24.DEF = "position";
MetadataDouble24.reference = "http://titania.create3000.de";
MetadataDouble24.value = new MFDouble(new double[0,0,10]);
MetadataSet23.value = new MFNode();

MetadataSet23.value[0] = MetadataDouble24;

MetadataDouble MetadataDouble25 = createNode("MetadataDouble");
MetadataDouble25.name = "orientation";
MetadataDouble25.DEF = "orientation";
MetadataDouble25.reference = "http://titania.create3000.de";
MetadataDouble25.value = new MFDouble(new double[0,0,1,0]);
MetadataSet23.value[1] = MetadataDouble25;

MetadataDouble MetadataDouble26 = createNode("MetadataDouble");
MetadataDouble26.name = "centerOfRotation";
MetadataDouble26.DEF = "centerOfRotation";
MetadataDouble26.reference = "http://titania.create3000.de";
MetadataDouble26.value = new MFDouble(new double[0,0,0]);
MetadataSet23.value[2] = MetadataDouble26;

MetadataSet20.value[1] = MetadataSet23;

MetadataSet MetadataSet27 = createNode("MetadataSet");
MetadataSet27.name = "Selection";
MetadataSet27.DEF = "Selection";
MetadataSet27.reference = "http://titania.create3000.de";
MetadataBoolean MetadataBoolean28 = createNode("MetadataBoolean");
MetadataBoolean28.name = "selectGeometry";
MetadataBoolean28.DEF = "selectGeometry";
MetadataBoolean28.reference = "http://titania.create3000.de";
MetadataBoolean28.value = new MFBool(new boolean[False]);
MetadataSet27.value = new MFNode();

MetadataSet27.value[0] = MetadataBoolean28;

MetadataSet MetadataSet29 = createNode("MetadataSet");
MetadataSet29.name = "nodes";
MetadataSet29.DEF = "nodes";
MetadataSet29.reference = "http://titania.create3000.de";
Transform Transform30 = createNode("Transform");
Transform30.DEF = "ResetBox_1";
Transform30.translation = new SFVec3f(new float[4.43603,-0.67719,0]);
Transform30.scale = new SFVec3f(new float[0.167946,0.167946,0.167946]);
Shape Shape31 = createNode("Shape");
Appearance Appearance32 = createNode("Appearance");
Material Material33 = createNode("Material");
Appearance32.material = Material33;

Shape31.appearance = Appearance32;

Box Box34 = createNode("Box");
Shape31.geometry = Box34;

Transform30.child = new undefined();

Transform30.child[0] = Shape31;

TouchSensor TouchSensor35 = createNode("TouchSensor");
TouchSensor35.DEF = "ResetTouch_2";
Transform30.children[1] = TouchSensor35;

ProtoInstance ProtoInstance36 = createNode("ProtoInstance");
ProtoInstance36.name = "SFFloat";
ProtoInstance36.DEF = "_3";
fieldValue fieldValue37 = createNode("fieldValue");
fieldValue37.name = "keyValue";
fieldValue37.value = "1";
ProtoInstance36.fieldValue = new MFNode();

ProtoInstance36.fieldValue[0] = fieldValue37;

Transform30.children[2] = ProtoInstance36;

MetadataSet29.value = Transform30;

MetadataSet27.value[1] = MetadataSet29;

MetadataSet20.value[2] = MetadataSet27;

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

MetadataSet20.value[3] = MetadataSet38;

WorldInfo19.metadata = MetadataSet20;

children[2] = WorldInfo19;

NavigationInfo NavigationInfo41 = createNode("NavigationInfo");
NavigationInfo41.type = new MFString(new java.lang.String[", ","NONEANY"]);
children[3] = NavigationInfo41;

Background Background42 = createNode("Background");
Background42.skyColor = new MFColor(new float[0.2,0.2,0.2]);
children[4] = Background42;

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

children[5] = Transform43;

Script Script50 = createNode("Script");
Script50.DEF = "DecomposeXYScript";
field field51 = createNode("field");
field51.name = "set_xy";
field51.accessType = "inputOnly";
field51.type = "SFVec2f";
Script50.field = new MFNode();

Script50.field[0] = field51;

field field52 = createNode("field");
field52.name = "x_changed";
field52.accessType = "outputOnly";
field52.type = "SFFloat";
Script50.field[1] = field52;

field field53 = createNode("field");
field53.name = "y_changed";
field53.accessType = "outputOnly";
field53.type = "SFFloat";
Script50.field[2] = field53;


Script50.setSourceCode(`ecmascript:\n"+
"\n"+
"function set_xy (value)\n"+
"{\n"+
"	x_changed = value .x;\n"+
"	y_changed = value .y;\n"+
"}`)
children[6] = Script50;

ScalarDamper ScalarDamper54 = createNode("ScalarDamper");
ScalarDamper54.DEF = "X";
ScalarDamper54.initialValue = 2;
ScalarDamper54.initialDestination = -2;
children[7] = ScalarDamper54;

ScalarDamper ScalarDamper55 = createNode("ScalarDamper");
ScalarDamper55.DEF = "Y";
ScalarDamper55.initialValue = 2;
ScalarDamper55.initialDestination = -2;
children[8] = ScalarDamper55;

Script Script56 = createNode("Script");
Script56.DEF = "ComposeXYScript";
field field57 = createNode("field");
field57.name = "set_x";
field57.accessType = "inputOnly";
field57.type = "SFFloat";
Script56.field = new MFNode();

Script56.field[0] = field57;

field field58 = createNode("field");
field58.name = "set_y";
field58.accessType = "inputOnly";
field58.type = "SFFloat";
Script56.field[1] = field58;

field field59 = createNode("field");
field59.name = "xy_changed";
field59.accessType = "outputOnly";
field59.type = "SFVec2f";
Script56.field[2] = field59;


Script56.setSourceCode(`ecmascript:\n"+
"\n"+
"function set_x (value)\n"+
"{\n"+
"	xy_changed .x = value;\n"+
"}\n"+
"\n"+
"function set_y (value)\n"+
"{\n"+
"	xy_changed .y = value;\n"+
"}`)
children[9] = Script56;

Transform Transform60 = createNode("Transform");
Transform60.DEF = "Sphere";
Transform60.translation = new SFVec3f(new float[-1.9999,-1.9999,0]);
Transform60.scale = new SFVec3f(new float[0.192862,0.192862,0.192862]);
Shape Shape61 = createNode("Shape");
Appearance Appearance62 = createNode("Appearance");
Material Material63 = createNode("Material");
Material63.DEF = "SphereMaterial";
Appearance62.material = Material63;

Shape61.appearance = Appearance62;

Sphere Sphere64 = createNode("Sphere");
Shape61.geometry = Sphere64;

Transform60.child = new undefined();

Transform60.child[0] = Shape61;

children[10] = Transform60;

Shape Shape65 = createNode("Shape");
Shape65.DEF = "LineTrail";
Appearance Appearance66 = createNode("Appearance");
Material Material67 = createNode("Material");
Material67.emissiveColor = new SFColor(new float[0,0.8,0.8]);
Appearance66.material = Material67;

Shape65.appearance = Appearance66;

ProtoInstance ProtoInstance68 = createNode("ProtoInstance");
ProtoInstance68.name = "LineTrail";
ProtoInstance68.DEF = "Trail";
fieldValue fieldValue69 = createNode("fieldValue");
fieldValue69.name = "enabled";
fieldValue69.value = "false";
ProtoInstance68.fieldValue = new MFNode();

ProtoInstance68.fieldValue[0] = fieldValue69;

fieldValue fieldValue70 = createNode("fieldValue");
fieldValue70.name = "cycleInterval";
fieldValue70.value = "0.1";
ProtoInstance68.fieldValue[1] = fieldValue70;

fieldValue fieldValue71 = createNode("fieldValue");
fieldValue71.name = "point";
fieldValue71.value = "-1.9999 -1.9999 0";
ProtoInstance68.fieldValue[2] = fieldValue71;

fieldValue fieldValue72 = createNode("fieldValue");
fieldValue72.name = "dimension";
fieldValue72.value = "200";
ProtoInstance68.fieldValue[3] = fieldValue72;

Shape65.geometry = ProtoInstance68;

children[11] = Shape65;

Script Script73 = createNode("Script");
Script73.DEF = "FollowerScript";
field field74 = createNode("field");
field74.name = "set_time";
field74.accessType = "inputOnly";
field74.type = "SFTime";
Script73.field = new MFNode();

Script73.field[0] = field74;

field field75 = createNode("field");
field75.name = "set_value";
field75.accessType = "inputOnly";
field75.type = "SFVec2f";
Script73.field[1] = field75;

field field76 = createNode("field");
field76.name = "set_active";
field76.accessType = "inputOnly";
field76.type = "SFBool";
Script73.field[2] = field76;

field field77 = createNode("field");
field77.name = "color_changed";
field77.accessType = "outputOnly";
field77.type = "SFColor";
Script73.field[3] = field77;

field field78 = createNode("field");
field78.name = "destination_changed";
field78.accessType = "outputOnly";
field78.type = "SFVec2f";
Script73.field[4] = field78;

field field79 = createNode("field");
field79.name = "value_changed";
field79.accessType = "outputOnly";
field79.type = "SFVec3f";
Script73.field[5] = field79;

field field80 = createNode("field");
field80.name = "touchSensor";
field80.accessType = "initializeOnly";
field80.type = "SFNode";
TouchSensor TouchSensor81 = createNode("TouchSensor");
TouchSensor81.USE = "Touch";
field80.children = new MFNode();

field80.children[0] = TouchSensor81;

Script73.field[6] = field80;


Script73.setSourceCode(`vrmlscript:\n"+
"function set_time ()\n"+
"{\n"+
"	destination_changed = new SFVec2f (touchSensor .hitPoint_changed .x, touchSensor .hitPoint_changed .y);\n"+
"}\n"+
"\n"+
"function set_value (value)\n"+
"{\n"+
"	value_changed = new SFVec3f (value .x, value .y, 0);\n"+
"}\n"+
"\n"+
"function set_active (value)\n"+
"{\n"+
"	if (value)\n"+
"		color_changed = new SFColor (0.8, 0, 0);\n"+
"	\n"+
"	else\n"+
"		color_changed = new SFColor (0.8, 0.8, 0.8);\n"+
"}`)
children[12] = Script73;

Transform Transform82 = createNode("Transform");
Transform82.DEF = "ResetBox";
Transform82.translation = new SFVec3f(new float[4.43603,0,0]);
Transform82.scale = new SFVec3f(new float[0.167946,0.167946,0.167946]);
Shape Shape83 = createNode("Shape");
Appearance Appearance84 = createNode("Appearance");
Material Material85 = createNode("Material");
Appearance84.material = Material85;

Shape83.appearance = Appearance84;

Box Box86 = createNode("Box");
Shape83.geometry = Box86;

Transform82.child = new undefined();

Transform82.child[0] = Shape83;

TouchSensor TouchSensor87 = createNode("TouchSensor");
TouchSensor87.DEF = "ResetTouch";
Transform82.children[1] = TouchSensor87;

ProtoInstance ProtoInstance88 = createNode("ProtoInstance");
ProtoInstance88.name = "SFFloat";
Transform82.children[2] = ProtoInstance88;

children[13] = Transform82;

Transform Transform89 = createNode("Transform");
Transform89.USE = "ResetBox_1";
children[14] = Transform89;

ROUTE ROUTE90 = createNode("ROUTE");
ROUTE90.fromNode = "Touch";
ROUTE90.fromField = "touchTime";
ROUTE90.toNode = "FollowerScript";
ROUTE90.toField = "set_time";
children[15] = ROUTE90;

ROUTE ROUTE91 = createNode("ROUTE");
ROUTE91.fromNode = "FollowerScript";
ROUTE91.fromField = "color_changed";
ROUTE91.toNode = "SphereMaterial";
ROUTE91.toField = "set_diffuseColor";
children[16] = ROUTE91;

ROUTE ROUTE92 = createNode("ROUTE");
ROUTE92.fromNode = "FollowerScript";
ROUTE92.fromField = "value_changed";
ROUTE92.toNode = "Sphere";
ROUTE92.toField = "set_translation";
children[17] = ROUTE92;

ROUTE ROUTE93 = createNode("ROUTE");
ROUTE93.fromNode = "FollowerScript";
ROUTE93.fromField = "value_changed";
ROUTE93.toNode = "Trail";
ROUTE93.toField = "set_point";
children[18] = ROUTE93;

ROUTE ROUTE94 = createNode("ROUTE");
ROUTE94.fromNode = "FollowerScript";
ROUTE94.fromField = "destination_changed";
ROUTE94.toNode = "DecomposeXYScript";
ROUTE94.toField = "set_xy";
children[19] = ROUTE94;

ROUTE ROUTE95 = createNode("ROUTE");
ROUTE95.fromNode = "X";
ROUTE95.fromField = "isActive";
ROUTE95.toNode = "Trail";
ROUTE95.toField = "set_enabled";
children[20] = ROUTE95;

ROUTE ROUTE96 = createNode("ROUTE");
ROUTE96.fromNode = "X";
ROUTE96.fromField = "isActive";
ROUTE96.toNode = "FollowerScript";
ROUTE96.toField = "set_active";
children[21] = ROUTE96;

ROUTE ROUTE97 = createNode("ROUTE");
ROUTE97.fromNode = "X";
ROUTE97.fromField = "value_changed";
ROUTE97.toNode = "ComposeXYScript";
ROUTE97.toField = "set_x";
children[22] = ROUTE97;

ROUTE ROUTE98 = createNode("ROUTE");
ROUTE98.fromNode = "ComposeXYScript";
ROUTE98.fromField = "xy_changed";
ROUTE98.toNode = "FollowerScript";
ROUTE98.toField = "set_value";
children[23] = ROUTE98;

ROUTE ROUTE99 = createNode("ROUTE");
ROUTE99.fromNode = "DecomposeXYScript";
ROUTE99.fromField = "x_changed";
ROUTE99.toNode = "X";
ROUTE99.toField = "set_destination";
children[24] = ROUTE99;

ROUTE ROUTE100 = createNode("ROUTE");
ROUTE100.fromNode = "Y";
ROUTE100.fromField = "value_changed";
ROUTE100.toNode = "ComposeXYScript";
ROUTE100.toField = "set_y";
children[25] = ROUTE100;

ROUTE ROUTE101 = createNode("ROUTE");
ROUTE101.fromNode = "DecomposeXYScript";
ROUTE101.fromField = "y_changed";
ROUTE101.toNode = "Y";
ROUTE101.toField = "set_destination";
children[26] = ROUTE101;

ROUTE ROUTE102 = createNode("ROUTE");
ROUTE102.fromNode = "ResetTouch_2";
ROUTE102.fromField = "touchTime";
ROUTE102.toNode = "_3";
ROUTE102.toField = "set_triggerTime";
children[27] = ROUTE102;

ROUTE ROUTE103 = createNode("ROUTE");
ROUTE103.fromNode = "_3";
ROUTE103.fromField = "value_changed";
ROUTE103.toNode = "X";
ROUTE103.toField = "set_value";
children[28] = ROUTE103;

ROUTE ROUTE104 = createNode("ROUTE");
ROUTE104.fromNode = "_3";
ROUTE104.fromField = "value_changed";
ROUTE104.toNode = "Y";
ROUTE104.toField = "set_value";
children[29] = ROUTE104;

}
