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
meta3.content = "Mon, 04 Jan 2016 06:29:42 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V4.3.3, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "identifier";
meta6.content = "https://rawgit.com/create3000/Library/master/Tests/Components/Interpolation/OrientationInterpolator.x3d";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "Sat, 27 Oct 2018 09:53:37 GMT";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "titania-output-style";
meta8.content = "Nicest";
head1.meta[6] = meta8;

head = head1;

ExternProtoDeclare ExternProtoDeclare10 = createNode("ExternProtoDeclare");
ExternProtoDeclare10.name = "LineTrail";
ExternProtoDeclare10.url = new MFString(new java.lang.String["https://cdn.rawgit.com/create3000/Titania/master/Library/Tests/Interpolation/LineTrail.wrl"]);
field field11 = createNode("field");
field11.name = "enabled";
field11.accessType = "inputOutput";
field11.type = "SFBool";
ExternProtoDeclare10.field = new MFNode();

ExternProtoDeclare10.field[0] = field11;

field field12 = createNode("field");
field12.name = "cycleInterval";
field12.accessType = "inputOutput";
field12.type = "SFTime";
ExternProtoDeclare10.field[1] = field12;

field field13 = createNode("field");
field13.name = "resetTime";
field13.accessType = "inputOutput";
field13.type = "SFTime";
ExternProtoDeclare10.field[2] = field13;

field field14 = createNode("field");
field14.name = "point";
field14.accessType = "inputOutput";
field14.type = "SFVec3f";
ExternProtoDeclare10.field[3] = field14;

field field15 = createNode("field");
field15.name = "dimension";
field15.accessType = "initializeOnly";
field15.type = "SFInt32";
ExternProtoDeclare10.field[4] = field15;

children = new MFNode();

children[0] = ExternProtoDeclare10;

WorldInfo WorldInfo16 = createNode("WorldInfo");
WorldInfo16.title = "OrientationChaser";
MetadataSet MetadataSet17 = createNode("MetadataSet");
MetadataSet17.name = "Titania";
MetadataSet17.DEF = "Titania";
MetadataSet17.reference = "http://titania.create3000.de";
MetadataSet MetadataSet18 = createNode("MetadataSet");
MetadataSet18.name = "NavigationInfo";
MetadataSet18.DEF = "NavigationInfo";
MetadataSet18.reference = "http://titania.create3000.de";
MetadataString MetadataString19 = createNode("MetadataString");
MetadataString19.name = "type";
MetadataString19.DEF = "type";
MetadataString19.reference = "http://titania.create3000.de";
MetadataString19.value = new MFString(new java.lang.String["EXAMINE"]);
MetadataSet18.value = new MFNode();

MetadataSet18.value[0] = MetadataString19;

MetadataSet17.value = new MFNode();

MetadataSet17.value[0] = MetadataSet18;

MetadataSet MetadataSet20 = createNode("MetadataSet");
MetadataSet20.name = "Viewpoint";
MetadataSet20.DEF = "Viewpoint";
MetadataSet20.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble21 = createNode("MetadataDouble");
MetadataDouble21.name = "position";
MetadataDouble21.DEF = "position";
MetadataDouble21.reference = "http://titania.create3000.de";
MetadataDouble21.value = new MFDouble(new double[-1.26207339763641,-3.20390677452087,-3.62576198577881]);
MetadataSet20.value = new MFNode();

MetadataSet20.value[0] = MetadataDouble21;

MetadataDouble MetadataDouble22 = createNode("MetadataDouble");
MetadataDouble22.name = "orientation";
MetadataDouble22.DEF = "orientation";
MetadataDouble22.reference = "http://titania.create3000.de";
MetadataDouble22.value = new MFDouble(new double[0.00718989036977291,-0.937747418880463,0.347243458032608,2.86365866661072]);
MetadataSet20.value[1] = MetadataDouble22;

MetadataDouble MetadataDouble23 = createNode("MetadataDouble");
MetadataDouble23.name = "centerOfRotation";
MetadataDouble23.DEF = "centerOfRotation";
MetadataDouble23.reference = "http://titania.create3000.de";
MetadataDouble23.value = new MFDouble(new double[0,0,0]);
MetadataSet20.value[2] = MetadataDouble23;

MetadataSet17.value[1] = MetadataSet20;

MetadataSet MetadataSet24 = createNode("MetadataSet");
MetadataSet24.name = "Page";
MetadataSet24.DEF = "Page";
MetadataSet24.reference = "http://titania.create3000.de";
MetadataInteger MetadataInteger25 = createNode("MetadataInteger");
MetadataInteger25.name = "activeView";
MetadataInteger25.DEF = "activeView";
MetadataInteger25.reference = "http://titania.create3000.de";
MetadataInteger25.value = new MFInt32(new int[1]);
MetadataSet24.value = new MFNode();

MetadataSet24.value[0] = MetadataInteger25;

MetadataInteger MetadataInteger26 = createNode("MetadataInteger");
MetadataInteger26.name = "multiView";
MetadataInteger26.DEF = "multiView";
MetadataInteger26.reference = "http://titania.create3000.de";
MetadataInteger26.value = new MFInt32(new int[0]);
MetadataSet24.value[1] = MetadataInteger26;

MetadataSet17.value[2] = MetadataSet24;

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
Script Script30 = createNode("Script");
Script30.DEF = "FollowerScript";
field field31 = createNode("field");
field31.name = "set_time";
field31.accessType = "inputOnly";
field31.type = "SFTime";
Script30.field = new MFNode();

Script30.field[0] = field31;

field field32 = createNode("field");
field32.name = "set_active";
field32.accessType = "inputOnly";
field32.type = "SFBool";
Script30.field[1] = field32;

field field33 = createNode("field");
field33.name = "set_rotation";
field33.accessType = "inputOnly";
field33.type = "SFRotation";
Script30.field[2] = field33;

field field34 = createNode("field");
field34.name = "color_changed";
field34.accessType = "outputOnly";
field34.type = "SFColor";
Script30.field[3] = field34;

field field35 = createNode("field");
field35.name = "point_changed";
field35.accessType = "outputOnly";
field35.type = "SFVec3f";
Script30.field[4] = field35;

field field36 = createNode("field");
field36.name = "touchSensor";
field36.accessType = "initializeOnly";
field36.type = "SFNode";
TouchSensor TouchSensor37 = createNode("TouchSensor");
TouchSensor37.DEF = "Touch";
field36.children = new MFNode();

field36.children[0] = TouchSensor37;

Script30.field[5] = field36;

field field38 = createNode("field");
field38.name = "timeSensor";
field38.accessType = "initializeOnly";
field38.type = "SFNode";
TimeSensor TimeSensor39 = createNode("TimeSensor");
TimeSensor39.DEF = "_1";
TimeSensor39.cycleInterval = 2;
TimeSensor39.startTime = 1540633981.11618;
TimeSensor39.stopTime = 1540633981.11618;
field38.children = new MFNode();

field38.children[0] = TimeSensor39;

Script30.field[6] = field38;

field field40 = createNode("field");
field40.name = "interpolator";
field40.accessType = "initializeOnly";
field40.type = "SFNode";
OrientationInterpolator OrientationInterpolator41 = createNode("OrientationInterpolator");
OrientationInterpolator41.DEF = "_2";
OrientationInterpolator41.key = new MFFloat(new float[0,1]);
OrientationInterpolator41.keyValue = new MFRotation(new float[0.835275572584412,-0.549831535876019,0,0.558846203626118,-0.894060667491528,0.44794589276452,0,0.919814454880826]);
field40.children = new MFNode();

field40.children[0] = OrientationInterpolator41;

Script30.field[7] = field40;


Script30.setSourceCode(`vrmlscript:\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"	timeSensor .stopTime  = 0;\n"+
"	timeSensor .startTime = 0;\n"+
"\n"+
"	interpolator .keyValue [0] = new SFRotation ();\n"+
"	interpolator .keyValue [1] = new SFRotation ();\n"+
"}\n"+
"\n"+
"function set_time (value, time)\n"+
"{\n"+
"	timeSensor .stopTime  = time;\n"+
"	timeSensor .startTime = time;\n"+
"\n"+
"	interpolator .keyValue [0] = interpolator .value_changed;\n"+
"	interpolator .keyValue [1] = new SFRotation (new SFVec3f (0, 0, 1), touchSensor .hitPoint_changed);\n"+
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
"function set_rotation (value)\n"+
"{\n"+
"	point_changed = value .multVec (new SFVec3f (0, 0, 1));\n"+
"}`)
MetadataSet29.value = Script30;

MetadataSet27.value[1] = MetadataSet29;

MetadataSet17.value[3] = MetadataSet27;

WorldInfo16.metadata = MetadataSet17;

children[1] = WorldInfo16;

NavigationInfo NavigationInfo42 = createNode("NavigationInfo");
NavigationInfo42.type = new MFString(new java.lang.String[", ","NONEANY"]);
children[2] = NavigationInfo42;

Background Background43 = createNode("Background");
Background43.skyColor = new MFColor(new float[0.2,0.2,0.2]);
children[3] = Background43;

Viewpoint Viewpoint44 = createNode("Viewpoint");
Viewpoint44.position = new SFVec3f(new float[0,0,5]);
children[4] = Viewpoint44;

Shape Shape45 = createNode("Shape");
Shape45.DEF = "LineTrail";
Appearance Appearance46 = createNode("Appearance");
Material Material47 = createNode("Material");
Material47.emissiveColor = new SFColor(new float[0,0.8,0.8]);
Appearance46.material = Material47;

Shape45.appearance = Appearance46;

ProtoInstance ProtoInstance48 = createNode("ProtoInstance");
ProtoInstance48.name = "LineTrail";
ProtoInstance48.DEF = "Trail";
fieldValue fieldValue49 = createNode("fieldValue");
fieldValue49.name = "enabled";
fieldValue49.value = "false";
ProtoInstance48.fieldValue = new MFNode();

ProtoInstance48.fieldValue[0] = fieldValue49;

fieldValue fieldValue50 = createNode("fieldValue");
fieldValue50.name = "cycleInterval";
fieldValue50.value = "0.1";
ProtoInstance48.fieldValue[1] = fieldValue50;

fieldValue fieldValue51 = createNode("fieldValue");
fieldValue51.name = "point";
fieldValue51.value = "0.356336 0.711216 0.605968";
ProtoInstance48.fieldValue[2] = fieldValue51;

fieldValue fieldValue52 = createNode("fieldValue");
fieldValue52.name = "dimension";
fieldValue52.value = "100";
ProtoInstance48.fieldValue[3] = fieldValue52;

Shape45.geometry = ProtoInstance48;

children[5] = Shape45;

Transform Transform53 = createNode("Transform");
Transform53.DEF = "Sphere";
Shape Shape54 = createNode("Shape");
Appearance Appearance55 = createNode("Appearance");
Material Material56 = createNode("Material");
Material56.transparency = 0.5;
Appearance55.material = Material56;

Shape54.appearance = Appearance55;

Sphere Sphere57 = createNode("Sphere");
Shape54.geometry = Sphere57;

Transform53.child = new undefined();

Transform53.child[0] = Shape54;

TouchSensor TouchSensor58 = createNode("TouchSensor");
TouchSensor58.USE = "Touch";
Transform53.children[1] = TouchSensor58;

children[6] = Transform53;

Transform Transform59 = createNode("Transform");
Transform59.DEF = "Cone";
Transform59.rotation = new SFRotation(new float[-0.894060667491529,0.44794589276452,0,0.919814454880826]);
Transform Transform60 = createNode("Transform");
Transform60.DEF = "Cone_3";
Transform60.translation = new SFVec3f(new float[0,0,0.192283]);
Transform60.rotation = new SFRotation(new float[1,0,0,1.5708]);
Transform60.scale = new SFVec3f(new float[0.770473,0.770473,0.770473]);
Shape Shape61 = createNode("Shape");
Appearance Appearance62 = createNode("Appearance");
Material Material63 = createNode("Material");
Material63.DEF = "ConeMaterial";
Appearance62.material = Material63;

Shape61.appearance = Appearance62;

Cone Cone64 = createNode("Cone");
Shape61.geometry = Cone64;

Transform60.child = new undefined();

Transform60.child[0] = Shape61;

Transform59.children = new MFNode();

Transform59.children[0] = Transform60;

Transform Transform65 = createNode("Transform");
Transform65.DEF = "IndexedLineSet";
Shape Shape66 = createNode("Shape");
IndexedLineSet IndexedLineSet67 = createNode("IndexedLineSet");
IndexedLineSet67.colorPerVertex = False;
IndexedLineSet67.colorIndex = new MFInt32(new int[0,1,2]);
IndexedLineSet67.coordIndex = new MFInt32(new int[0,1,-1,2,3,-1,4,5,-1]);
Color Color68 = createNode("Color");
Color68.color = new MFColor(new float[1,0,0,0,1,0,0,0,1]);
IndexedLineSet67.color = Color68;

Coordinate Coordinate69 = createNode("Coordinate");
Coordinate69.point = new MFVec3f(new float[-1,0,0,1,0,0,0,-1,0,0,1,0,0,0,-1,0,0,1]);
IndexedLineSet67.coord = Coordinate69;

Shape66.geometry = IndexedLineSet67;

Transform65.child = new undefined();

Transform65.child[0] = Shape66;

Transform59.children[1] = Transform65;

children[7] = Transform59;

Script Script70 = createNode("Script");
Script70.USE = "FollowerScript";
children[8] = Script70;

ROUTE ROUTE71 = createNode("ROUTE");
ROUTE71.fromNode = "Touch";
ROUTE71.fromField = "touchTime";
ROUTE71.toNode = "FollowerScript";
ROUTE71.toField = "set_time";
children[9] = ROUTE71;

ROUTE ROUTE72 = createNode("ROUTE");
ROUTE72.fromNode = "FollowerScript";
ROUTE72.fromField = "color_changed";
ROUTE72.toNode = "ConeMaterial";
ROUTE72.toField = "set_diffuseColor";
children[10] = ROUTE72;

ROUTE ROUTE73 = createNode("ROUTE");
ROUTE73.fromNode = "FollowerScript";
ROUTE73.fromField = "point_changed";
ROUTE73.toNode = "Trail";
ROUTE73.toField = "set_point";
children[11] = ROUTE73;

ROUTE ROUTE74 = createNode("ROUTE");
ROUTE74.fromNode = "_2";
ROUTE74.fromField = "value_changed";
ROUTE74.toNode = "FollowerScript";
ROUTE74.toField = "set_rotation";
children[12] = ROUTE74;

ROUTE ROUTE75 = createNode("ROUTE");
ROUTE75.fromNode = "_2";
ROUTE75.fromField = "value_changed";
ROUTE75.toNode = "Cone";
ROUTE75.toField = "set_rotation";
children[13] = ROUTE75;

ROUTE ROUTE76 = createNode("ROUTE");
ROUTE76.fromNode = "_1";
ROUTE76.fromField = "isActive";
ROUTE76.toNode = "Trail";
ROUTE76.toField = "set_enabled";
children[14] = ROUTE76;

ROUTE ROUTE77 = createNode("ROUTE");
ROUTE77.fromNode = "_1";
ROUTE77.fromField = "isActive";
ROUTE77.toNode = "FollowerScript";
ROUTE77.toField = "set_active";
children[15] = ROUTE77;

ROUTE ROUTE78 = createNode("ROUTE");
ROUTE78.fromNode = "_1";
ROUTE78.fromField = "fraction_changed";
ROUTE78.toNode = "_2";
ROUTE78.toField = "set_fraction";
children[16] = ROUTE78;

}
