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
meta3.content = "Thu, 23 Apr 2015 06:07:17 GMT";
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
meta6.content = "Thu, 23 Apr 2015 06:07:17 GMT";
head1.meta[4] = meta6;

head = head1;

ExternProtoDeclare ExternProtoDeclare8 = createNode("ExternProtoDeclare");
ExternProtoDeclare8.name = "isOver";
ExternProtoDeclare8.url = new MFString(new java.lang.String["isOver_proto.x3d"]);
field field9 = createNode("field");
field9.name = "set_isOver";
field9.accessType = "inputOnly";
field9.type = "SFBool";
ExternProtoDeclare8.field = new MFNode();

ExternProtoDeclare8.field[0] = field9;

field field10 = createNode("field");
field10.name = "set_hitPoint";
field10.accessType = "inputOnly";
field10.type = "SFVec3f";
ExternProtoDeclare8.field[1] = field10;

field field11 = createNode("field");
field11.name = "isOver_changed";
field11.accessType = "outputOnly";
field11.type = "SFBool";
ExternProtoDeclare8.field[2] = field11;

children = new MFNode();

children[0] = ExternProtoDeclare8;

ExternProtoDeclare ExternProtoDeclare12 = createNode("ExternProtoDeclare");
ExternProtoDeclare12.name = "True";
ExternProtoDeclare12.url = new MFString(new java.lang.String["True_proto.x3d"]);
field field13 = createNode("field");
field13.name = "set_SFBool";
field13.accessType = "inputOnly";
field13.type = "SFBool";
ExternProtoDeclare12.field = new MFNode();

ExternProtoDeclare12.field[0] = field13;

field field14 = createNode("field");
field14.name = "startTime";
field14.accessType = "outputOnly";
field14.type = "SFTime";
ExternProtoDeclare12.field[1] = field14;

children[1] = ExternProtoDeclare12;

ExternProtoDeclare ExternProtoDeclare15 = createNode("ExternProtoDeclare");
ExternProtoDeclare15.name = "Int";
ExternProtoDeclare15.url = new MFString(new java.lang.String["Int_proto.x3d"]);
field field16 = createNode("field");
field16.name = "startTime";
field16.accessType = "inputOnly";
field16.type = "SFTime";
ExternProtoDeclare15.field = new MFNode();

ExternProtoDeclare15.field[0] = field16;

field field17 = createNode("field");
field17.name = "value_changed";
field17.accessType = "outputOnly";
field17.type = "SFInt32";
ExternProtoDeclare15.field[1] = field17;

field field18 = createNode("field");
field18.name = "keyValue";
field18.accessType = "inputOutput";
field18.type = "SFInt32";
ExternProtoDeclare15.field[2] = field18;

children[2] = ExternProtoDeclare15;

ExternProtoDeclare ExternProtoDeclare19 = createNode("ExternProtoDeclare");
ExternProtoDeclare19.name = "BoolSwitch";
ExternProtoDeclare19.url = new MFString(new java.lang.String["BoolSwitch_proto.x3d"]);
field field20 = createNode("field");
field20.name = "isActive";
field20.accessType = "inputOnly";
field20.type = "SFBool";
ExternProtoDeclare19.field = new MFNode();

ExternProtoDeclare19.field[0] = field20;

field field21 = createNode("field");
field21.name = "wichChoice_changed";
field21.accessType = "outputOnly";
field21.type = "SFInt32";
ExternProtoDeclare19.field[1] = field21;

children[3] = ExternProtoDeclare19;

WorldInfo WorldInfo22 = createNode("WorldInfo");
WorldInfo22.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children[4] = WorldInfo22;

Transform Transform23 = createNode("Transform");
Transform23.DEF = "bbox";
Transform23.bboxSize = new SFVec3f(new float[3.5,3.5,3.5]);
children[5] = Transform23;

Transform Transform24 = createNode("Transform");
Transform24.DEF = "bil";
Billboard Billboard25 = createNode("Billboard");
Transform Transform26 = createNode("Transform");
Transform26.DEF = "ps";
Transform26.center = new SFVec3f(new float[0,0.747102,5.96046e-7]);
Transform Transform27 = createNode("Transform");
Transform27.DEF = "actionsLOD";
LOD LOD28 = createNode("LOD");
LOD28.range = new MFFloat(new float[2.5]);
Transform Transform29 = createNode("Transform");
Transform Transform30 = createNode("Transform");
Transform30.DEF = "actions_1";
Switch Switch31 = createNode("Switch");
Switch31.DEF = "_1";
Switch31.whichChoice = 0;
Transform Transform32 = createNode("Transform");
Transform32.DEF = "actions";
Transform Transform33 = createNode("Transform");
Transform33.DEF = "pfeil";
Transform Transform34 = createNode("Transform");
Transform34.DEF = "arrow";
Transform34.translation = new SFVec3f(new float[-0.0060057,1.29494,0.000878274]);
Transform34.rotation = new SFRotation(new float[-0.478323,0.873766,-0.0879755,0.414935]);
Transform34.scale = new SFVec3f(new float[1,0.330698,1]);
Transform34.scaleOrientation = new SFRotation(new float[-5.60701e-8,-1,-4.77046e-8,0.160876]);
Transform34.center = new SFVec3f(new float[-0.00409863,0.00184226,0.0630002]);
Group Group35 = createNode("Group");
Group Group36 = createNode("Group");
Group36.DEF = "silberpfeil";
TimeSensor TimeSensor37 = createNode("TimeSensor");
TimeSensor37.DEF = "Time_1";
TimeSensor37.cycleInterval = 5;
TimeSensor37.loop = True;
TimeSensor37.startTime = 974241991.931775;
TimeSensor37.stopTime = 1;
Group36.children = new MFNode();

Group36.children[0] = TimeSensor37;

Group35.children = new MFNode();

Group35.children[0] = Group36;

Group Group38 = createNode("Group");
ScalarInterpolator ScalarInterpolator39 = createNode("ScalarInterpolator");
ScalarInterpolator39.DEF = "_2";
ScalarInterpolator39.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
ScalarInterpolator39.keyValue = new MFFloat(new float[-1,-0.6,-0.2,0.2,0.6,1]);
Group38.children = new MFNode();

Group38.children[0] = ScalarInterpolator39;

ScalarInterpolator ScalarInterpolator40 = createNode("ScalarInterpolator");
ScalarInterpolator40.DEF = "_3";
ScalarInterpolator40.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
ScalarInterpolator40.keyValue = new MFFloat(new float[0,0,0,0,0,0]);
Group38.children[1] = ScalarInterpolator40;

Script Script41 = createNode("Script");
Script41.DEF = "_4";
field field42 = createNode("field");
field42.name = "vec";
field42.accessType = "outputOnly";
field42.type = "SFVec2f";
Script41.field = new MFNode();

Script41.field[0] = field42;

field field43 = createNode("field");
field43.name = "xIn";
field43.accessType = "inputOnly";
field43.type = "SFFloat";
Script41.field[1] = field43;

field field44 = createNode("field");
field44.name = "yIn";
field44.accessType = "inputOnly";
field44.type = "SFFloat";
Script41.field[2] = field44;

field field45 = createNode("field");
field45.name = "xBuf";
field45.accessType = "initializeOnly";
field45.type = "SFFloat";
Script41.field[3] = field45;

field field46 = createNode("field");
field46.name = "yBuf";
field46.accessType = "initializeOnly";
field46.type = "SFFloat";
Script41.field[4] = field46;


Script41.setSourceCode(`vrmlscript: function xIn(value) { xBuf = value; vec[0] = xBuf; vec[1] = yBuf; } function yIn(value) { yBuf = value; vec[0] = xBuf; vec[1] = yBuf; }`)
Group38.children[2] = Script41;

Group35.children[1] = Group38;

Transform34.children = new MFNode();

Transform34.children[0] = Group35;

TouchSensor TouchSensor47 = createNode("TouchSensor");
TouchSensor47.DEF = "DefaultTouchSensor";
TouchSensor47.enabled = False;
Transform34.children[1] = TouchSensor47;

Group Group48 = createNode("Group");
Group Group49 = createNode("Group");
Group49.USE = "silberpfeil";
Group48.children = new MFNode();

Group48.children[0] = Group49;

Group Group50 = createNode("Group");
ScalarInterpolator ScalarInterpolator51 = createNode("ScalarInterpolator");
ScalarInterpolator51.DEF = "_5";
ScalarInterpolator51.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
ScalarInterpolator51.keyValue = new MFFloat(new float[-1,-0.8,-0.6,-0.4,-0.2,0,0.2,0.4,0.6,0.8,1]);
Group50.children = new MFNode();

Group50.children[0] = ScalarInterpolator51;

ScalarInterpolator ScalarInterpolator52 = createNode("ScalarInterpolator");
ScalarInterpolator52.DEF = "_6";
ScalarInterpolator52.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
ScalarInterpolator52.keyValue = new MFFloat(new float[0,0,0,0,0,0,0,0,0,0,0]);
Group50.children[1] = ScalarInterpolator52;

Script Script53 = createNode("Script");
Script53.DEF = "_7";
field field54 = createNode("field");
field54.name = "vec";
field54.accessType = "outputOnly";
field54.type = "SFVec2f";
Script53.field = new MFNode();

Script53.field[0] = field54;

field field55 = createNode("field");
field55.name = "xIn";
field55.accessType = "inputOnly";
field55.type = "SFFloat";
Script53.field[1] = field55;

field field56 = createNode("field");
field56.name = "yIn";
field56.accessType = "inputOnly";
field56.type = "SFFloat";
Script53.field[2] = field56;

field field57 = createNode("field");
field57.name = "xBuf";
field57.accessType = "initializeOnly";
field57.type = "SFFloat";
Script53.field[3] = field57;

field field58 = createNode("field");
field58.name = "yBuf";
field58.accessType = "initializeOnly";
field58.type = "SFFloat";
Script53.field[4] = field58;


Script53.setSourceCode(`vrmlscript: function xIn(value) { xBuf = value; vec[0] = xBuf; vec[1] = yBuf; } function yIn(value) { yBuf = value; vec[0] = xBuf; vec[1] = yBuf; }`)
Group50.children[2] = Script53;

Group48.children[1] = Group50;

Transform34.children[2] = Group48;

Shape Shape59 = createNode("Shape");
Appearance Appearance60 = createNode("Appearance");
ImageTexture ImageTexture61 = createNode("ImageTexture");
ImageTexture61.url = new MFString(new java.lang.String["reflect2.png"]);
Appearance60.texture = ImageTexture61;

TextureTransform TextureTransform62 = createNode("TextureTransform");
TextureTransform62.DEF = "_8";
TextureTransform62.translation = new SFVec2f(new float[-1,0]);
Appearance60.textureTransform = TextureTransform62;

Shape59.appearance = Appearance60;

IndexedFaceSet IndexedFaceSet63 = createNode("IndexedFaceSet");
IndexedFaceSet63.solid = False;
IndexedFaceSet63.creaseAngle = 0.5;
IndexedFaceSet63.texCoordIndex = new MFInt32(new int[38,34,9,10,8,-1,49,1,3,50,-1,0,64,65,2,-1,46,47,5,48,-1,61,62,63,4,-1,42,43,44,45,-1,51,7,52,53,-1,58,59,60,6,-1,54,55,56,57,-1,33,35,39,37,-1,29,32,36,31,-1,25,28,30,27,-1,13,22,24,26,23,-1,11,66,67,-1,40,9,10,-1,12,68,69,-1,41,8,10,-1]);
IndexedFaceSet63.coordIndex = new MFInt32(new int[23,21,9,12,8,-1,14,1,3,16,-1,0,15,17,2,-1,16,3,5,18,-1,2,17,19,4,-1,18,5,7,20,-1,20,7,9,21,-1,4,19,22,6,-1,6,22,23,8,-1,20,21,23,22,-1,18,20,22,19,-1,16,18,19,17,-1,13,14,16,17,15,-1,10,24,12,-1,24,9,12,-1,11,25,12,-1,25,8,12,-1]);
TextureCoordinate TextureCoordinate64 = createNode("TextureCoordinate");
TextureCoordinate64.point = new MFVec2f(new float[0.521061,31.8085,0.480951,49.5791,0.474634,31.8078,0.434524,49.5784,0.41987,31.807,0.379759,49.5776,0.365105,31.8062,0.324995,49.5768,0.176536,11.485,0.126262,25.3339,0.113178,17.1606,0.144382,40.0254,0.248154,2.26738,0.353782,18.4125,0.307355,18.4118,0.307355,18.4118,0.25259,18.4109,0.25259,18.4109,0.197826,18.4102,0.197826,18.4102,0.151399,18.4095,0.151399,18.4095,0.341213,21.8747,0.366351,14.9502,0.294787,21.874,0.294787,21.874,0.319923,14.9495,0.319923,14.9495,0.240022,21.8732,0.240022,21.8732,0.265159,14.9487,0.265159,14.9487,0.185257,21.8724,0.185257,21.8724,0.13883,21.8717,0.13883,21.8717,0.210395,14.9479,0.210395,14.9479,0.163967,14.9472,0.163967,14.9472,0.104728,31.2658,0.201722,4.54713,0.392328,46.1154,0.379759,49.5776,0.324995,49.5768,0.337564,46.1146,0.447093,46.1162,0.434524,49.5784,0.392328,46.1154,0.49352,46.1169,0.447093,46.1162,0.337564,46.1146,0.278568,49.5761,0.291137,46.1139,0.365105,31.8062,0.352536,35.2684,0.306109,35.2677,0.318678,31.8055,0.41987,31.807,0.407301,35.2692,0.352536,35.2684,0.474634,31.8078,0.462065,35.27,0.407301,35.2692,0.508492,35.2707,0.462065,35.27,0.165916,34.0936,0.174366,19.9884,0.222968,9.20525,0.134424,21.8187]);
IndexedFaceSet63.texCoord = TextureCoordinate64;

Coordinate Coordinate65 = createNode("Coordinate");
Coordinate65.point = new MFVec3f(new float[0.0707107,-0.0431802,0.0707107,0.0707107,0.0621705,0.0707107,0.0382683,-0.0431802,0.092388,0.0382683,0.0621705,0.092388,1.50996e-8,-0.0431802,0.1,1.50996e-8,0.0621705,0.1,-0.0382683,-0.0431802,0.092388,-0.0382683,0.0621705,0.092388,-0.0707107,-0.0431802,0.0707107,-0.0707107,0.0621705,0.0707107,-0.0707107,0.129565,0.0707107,-0.0707107,-0.124945,0.0707107,-0.100585,0,0.0260003,0.0707107,0.00949515,0.0707107,0.0707107,0.0488152,0.0707107,0.0707107,-0.0263115,0.0707107,0.0382683,0.0488152,0.092388,0.0382683,-0.0263115,0.092388,1.50996e-8,0.0488152,0.1,1.50996e-8,-0.0263115,0.1,-0.0382683,0.0488152,0.092388,-0.0707107,0.0488152,0.0707107,-0.0382683,-0.0263115,0.092388,-0.0707107,-0.0263115,0.0707107,-0.0707107,0.106162,0.0707107,-0.0707107,-0.0959576,0.0707107]);
IndexedFaceSet63.coord = Coordinate65;

Shape59.geometry = IndexedFaceSet63;

Transform34.child[3] = Shape59;

Transform33.children = new MFNode();

Transform33.children[0] = Transform34;

Transform32.children = new MFNode();

Transform32.children[0] = Transform33;

Transform Transform66 = createNode("Transform");
Transform66.DEF = "vs";
VisibilitySensor VisibilitySensor67 = createNode("VisibilitySensor");
VisibilitySensor67.DEF = "_9";
VisibilitySensor67.size = new SFVec3f(new float[0.5,1,0.5]);
VisibilitySensor67.center = new SFVec3f(new float[0,1,0]);
Transform66.children = new MFNode();

Transform66.children[0] = VisibilitySensor67;

Transform32.children[1] = Transform66;

Transform Transform68 = createNode("Transform");
Transform68.DEF = "actionsOFF";
TouchSensor TouchSensor69 = createNode("TouchSensor");
TouchSensor69.DEF = "_10";
Transform68.children = new MFNode();

Transform68.children[0] = TouchSensor69;

Transform Transform70 = createNode("Transform");
Transform70.translation = new SFVec3f(new float[0.0903407,1.17448,-0.0168648]);
Transform70.rotation = new SFRotation(new float[-0.0996761,0.990015,-0.0996771,1.58084]);
Transform70.scale = new SFVec3f(new float[0.187675,1.55976,1.09611]);
Shape Shape71 = createNode("Shape");
Appearance Appearance72 = createNode("Appearance");
Material Material73 = createNode("Material");
Material73.ambientIntensity = 0;
Material73.diffuseColor = new SFColor(new float[0,0,0]);
Material73.emissiveColor = new SFColor(new float[0.840426,0,0.0345712]);
Material73.transparency = 1;
Appearance72.material = Material73;

Shape71.appearance = Appearance72;

IndexedFaceSet IndexedFaceSet74 = createNode("IndexedFaceSet");
IndexedFaceSet74.creaseAngle = 0.5;
IndexedFaceSet74.coordIndex = new MFInt32(new int[0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1,8,9,10,11,-1,11,10,12,13,-1,14,8,11,13,-1,13,12,15,14,-1,9,15,12,10,-1,14,15,9,8,-1]);
Coordinate Coordinate75 = createNode("Coordinate");
Coordinate75.point = new MFVec3f(new float[-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,0.1,0.1,0.1,-0.1,0.1,0.1,0.1,-0.1,0.1,-0.1,-0.1,-0.1,0.1,-0.1,-0.1,-0.1,-0.1,-0.0999994,-0.118889,-0.0337734,-0.0999994,-0.318889,-0.0337734,0.100001,-0.318889,-0.0337734,0.100001,-0.118889,-0.0337734,0.100001,-0.318889,-0.233773,0.100001,-0.118889,-0.233773,-0.0999994,-0.118889,-0.233773,-0.0999994,-0.318889,-0.233773]);
IndexedFaceSet74.coord = Coordinate75;

Shape71.geometry = IndexedFaceSet74;

Transform70.child = new undefined();

Transform70.child[0] = Shape71;

Transform68.children[1] = Transform70;

Transform Transform76 = createNode("Transform");
Transform76.DEF = "isOver_off";
ProtoInstance ProtoInstance77 = createNode("ProtoInstance");
ProtoInstance77.name = "isOver";
ProtoInstance77.DEF = "_11";
Transform76.children = new MFNode();

Transform76.children[0] = ProtoInstance77;

Transform68.children[2] = Transform76;

Transform32.children[2] = Transform68;

Switch31.children = new MFNode();

Switch31.children[0] = Transform32;

Transform Transform78 = createNode("Transform");
Transform78.DEF = "off";
Transform Transform79 = createNode("Transform");
Transform79.DEF = "actionsOn";
TouchSensor TouchSensor80 = createNode("TouchSensor");
TouchSensor80.DEF = "_12";
Transform79.children = new MFNode();

Transform79.children[0] = TouchSensor80;

Transform Transform81 = createNode("Transform");
Transform81.translation = new SFVec3f(new float[0.00357496,0.999758,0.0116803]);
Transform81.rotation = new SFRotation(new float[1,0.00000226147,-0.00000184775,1.37011]);
Transform81.scale = new SFVec3f(new float[3.61696,0.117977,5.02173]);
Shape Shape82 = createNode("Shape");
Appearance Appearance83 = createNode("Appearance");
Material Material84 = createNode("Material");
Material84.ambientIntensity = 0;
Material84.diffuseColor = new SFColor(new float[0,0,0]);
Material84.emissiveColor = new SFColor(new float[0,0.199468,0.797872]);
Material84.transparency = 1;
Appearance83.material = Material84;

Shape82.appearance = Appearance83;

Box Box85 = createNode("Box");
Box85.size = new SFVec3f(new float[0.2,0.2,0.2]);
Shape82.geometry = Box85;

Transform81.child = new undefined();

Transform81.child[0] = Shape82;

Transform79.children[1] = Transform81;

Transform Transform86 = createNode("Transform");
Transform86.DEF = "True";
ProtoInstance ProtoInstance87 = createNode("ProtoInstance");
ProtoInstance87.name = "True";
ProtoInstance87.DEF = "_13";
Transform86.children = new MFNode();

Transform86.children[0] = ProtoInstance87;

Transform79.children[2] = Transform86;

Transform Transform88 = createNode("Transform");
Transform88.DEF = "Int";
ProtoInstance ProtoInstance89 = createNode("ProtoInstance");
ProtoInstance89.name = "Int";
ProtoInstance89.DEF = "_14";
Transform88.children = new MFNode();

Transform88.children[0] = ProtoInstance89;

Transform79.children[3] = Transform88;

Transform Transform90 = createNode("Transform");
Transform90.DEF = "isOver";
ProtoInstance ProtoInstance91 = createNode("ProtoInstance");
ProtoInstance91.name = "isOver";
ProtoInstance91.DEF = "_15";
Transform90.children = new MFNode();

Transform90.children[0] = ProtoInstance91;

Transform79.children[4] = Transform90;

Transform78.children = new MFNode();

Transform78.children[0] = Transform79;

Switch31.children[1] = Transform78;

Transform30.children = new MFNode();

Transform30.children[0] = Switch31;

Transform29.children = new MFNode();

Transform29.children[0] = Transform30;

Transform Transform92 = createNode("Transform");
Transform92.DEF = "c";
Transform92.translation = new SFVec3f(new float[0,1.78814e-7,-0.0180891]);
Transform92.scale = new SFVec3f(new float[1,1,0.775046]);
Collision Collision93 = createNode("Collision");
Transform Transform94 = createNode("Transform");
Transform94.translation = new SFVec3f(new float[-0.012183,0.76732,0.19756]);
Transform94.scale = new SFVec3f(new float[0.423045,0.516801,0.277972]);
Shape Shape95 = createNode("Shape");
Box Box96 = createNode("Box");
Shape95.geometry = Box96;

Transform94.child = new undefined();

Transform94.child[0] = Shape95;

Collision93.proxy = Transform94;

Transform92.children = new MFNode();

Transform92.children[0] = Collision93;

Transform29.children[1] = Transform92;

LOD28.children = new MFNode();

LOD28.children[0] = Transform29;

Transform Transform97 = createNode("Transform");
LOD28.children[1] = Transform97;

Transform27.children = new MFNode();

Transform27.children[0] = LOD28;

Transform26.children = new MFNode();

Transform26.children[0] = Transform27;

Transform Transform98 = createNode("Transform");
Transform98.DEF = "pp_1";
Transform Transform99 = createNode("Transform");
Transform99.DEF = "BoolSwitch";
ProtoInstance ProtoInstance100 = createNode("ProtoInstance");
ProtoInstance100.name = "BoolSwitch";
ProtoInstance100.DEF = "_16";
Transform99.children = new MFNode();

Transform99.children[0] = ProtoInstance100;

Transform98.children = new MFNode();

Transform98.children[0] = Transform99;

Transform Transform101 = createNode("Transform");
Transform101.DEF = "pp";
Transform Transform102 = createNode("Transform");
Transform102.rotation = new SFRotation(new float[0,1,0,1.5708]);
Transform102.scale = new SFVec3f(new float[1,0.999999,1]);
Transform Transform103 = createNode("Transform");
Transform103.DEF = "book";
Transform103.translation = new SFVec3f(new float[0.00933547,1.17832,-0.0147909]);
Transform103.rotation = new SFRotation(new float[-0.534678,0.6544,-0.534678,4.30052]);
Transform103.scale = new SFVec3f(new float[0.999999,0.999999,1]);
Transform103.scaleOrientation = new SFRotation(new float[0.0595532,-0.26646,-0.962004,0.0519707]);
Inline Inline104 = createNode("Inline");
Inline104.url = new MFString(new java.lang.String["book.x3d"]);
Inline104.bboxSize = new SFVec3f(new float[0.6,0.1,0.4]);
Transform103.children = new MFNode();

Transform103.children[0] = Inline104;

Transform102.children = new MFNode();

Transform102.children[0] = Transform103;

Transform Transform105 = createNode("Transform");
Transform105.DEF = "link";
Anchor Anchor106 = createNode("Anchor");
Anchor106.description = "Klicken Sie hier fr mehr Informationen.";
Anchor106.url = new MFString(new java.lang.String["javascript: function tmt_winLaunch(theURL,winName,targetName,features) { eval(winName+\"=window.open('\"+theURL+\"','\"+targetName+\"','\"+features+\"')\") } tmt_winLaunch('/3D/html/mbenz/placeholder.html', 'place','place','resizable=yes,width=623,height=454,left=0,top=0');"]);
Anchor106.parameter = new MFString(new java.lang.String[""]);
Transform Transform107 = createNode("Transform");
Transform Transform108 = createNode("Transform");
Transform108.translation = new SFVec3f(new float[-0.0595387,0.83215,-0.0466649]);
Transform108.rotation = new SFRotation(new float[0.0996764,0.990015,0.0996764,4.70235]);
Transform108.scale = new SFVec3f(new float[0.20466,0.302438,0.312995]);
Shape Shape109 = createNode("Shape");
Appearance Appearance110 = createNode("Appearance");
Material Material111 = createNode("Material");
Material111.ambientIntensity = 0;
Material111.diffuseColor = new SFColor(new float[0,0,0]);
Material111.shininess = 0;
Material111.transparency = 0.606383;
Appearance110.material = Material111;

Shape109.appearance = Appearance110;

IndexedFaceSet IndexedFaceSet112 = createNode("IndexedFaceSet");
IndexedFaceSet112.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate113 = createNode("Coordinate");
Coordinate113.point = new MFVec3f(new float[-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0]);
IndexedFaceSet112.coord = Coordinate113;

Shape109.geometry = IndexedFaceSet112;

Transform108.child = new undefined();

Transform108.child[0] = Shape109;

Transform107.children = new MFNode();

Transform107.children[0] = Transform108;

Transform Transform114 = createNode("Transform");
Transform114.translation = new SFVec3f(new float[-0.0607254,0.839906,-0.0558341]);
Transform114.rotation = new SFRotation(new float[0.0996761,0.990015,0.099676,4.70235]);
Transform114.scale = new SFVec3f(new float[0.209212,0.312995,0.312995]);
Transform114.scaleOrientation = new SFRotation(new float[1,-9.81192e-8,-1.25691e-7,4.71239]);
Shape Shape115 = createNode("Shape");
Appearance Appearance116 = createNode("Appearance");
ImageTexture ImageTexture117 = createNode("ImageTexture");
ImageTexture117.url = new MFString(new java.lang.String["poster1.jpg"]);
Appearance116.texture = ImageTexture117;

Shape115.appearance = Appearance116;

IndexedFaceSet IndexedFaceSet118 = createNode("IndexedFaceSet");
IndexedFaceSet118.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate119 = createNode("TextureCoordinate");
TextureCoordinate119.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet118.texCoord = TextureCoordinate119;

Coordinate Coordinate120 = createNode("Coordinate");
Coordinate120.point = new MFVec3f(new float[-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0]);
IndexedFaceSet118.coord = Coordinate120;

Shape115.geometry = IndexedFaceSet118;

Transform114.child = new undefined();

Transform114.child[0] = Shape115;

Transform107.children[1] = Transform114;

Anchor106.children = new MFNode();

Anchor106.children[0] = Transform107;

Transform105.children = new MFNode();

Transform105.children[0] = Anchor106;

Transform102.children[1] = Transform105;

Transform Transform121 = createNode("Transform");
Transform121.DEF = "sta";
Transform121.translation = new SFVec3f(new float[0,0.683922,0]);
Transform121.scale = new SFVec3f(new float[0.25,0.675,0.25]);
Shape Shape122 = createNode("Shape");
Appearance Appearance123 = createNode("Appearance");
ImageTexture ImageTexture124 = createNode("ImageTexture");
ImageTexture124.url = new MFString(new java.lang.String["reflect1.png"]);
Appearance123.texture = ImageTexture124;

Shape122.appearance = Appearance123;

IndexedFaceSet IndexedFaceSet125 = createNode("IndexedFaceSet");
IndexedFaceSet125.solid = False;
IndexedFaceSet125.creaseAngle = 0.5;
IndexedFaceSet125.texCoordIndex = new MFInt32(new int[4,5,19,-1,5,18,19,-1,36,38,39,-1,36,37,38,-1,2,16,0,-1,16,17,0,-1,19,3,1,-1,19,18,3,-1,2,7,16,-1,7,6,16,-1,7,5,6,-1,5,4,6,-1,40,41,10,-1,41,11,10,-1,42,43,13,-1,43,12,13,-1,34,35,14,-1,35,15,14,-1,20,24,26,-1,24,25,26,-1,27,29,33,-1,27,28,29,-1]);
IndexedFaceSet125.coordIndex = new MFInt32(new int[8,9,1,-1,9,7,1,-1,2,5,4,-1,2,3,5,-1,6,0,4,-1,0,2,4,-1,1,5,3,-1,1,7,5,-1,6,11,0,-1,11,10,0,-1,11,9,10,-1,9,8,10,-1,10,11,12,-1,11,13,12,-1,8,9,15,-1,9,14,15,-1,3,5,16,-1,5,17,16,-1,18,19,21,-1,19,20,21,-1,22,24,25,-1,22,23,24,-1]);
TextureCoordinate TextureCoordinate126 = createNode("TextureCoordinate");
TextureCoordinate126.point = new MFVec2f(new float[0.145045,1.54965,0.135144,0.077854,0.145045,1.54965,0.252708,0.0454222,0.0813117,0.829969,0.198877,0.797538,0.0543957,1.20603,0.171961,1.1736,0.108228,0.453912,0.225792,0.42148,0.119832,2.42227,0.119832,3.01705,0.14019,2.95191,0.14019,2.35712,-0.217535,0.0384901,-0.217535,0.623365,0.0274798,1.58208,0.0274798,1.58208,0.252708,0.0454222,0.135144,0.077854,0.923948,6.7288,0.692961,5.0466,0.461974,3.3644,0.230987,1.6822,0,0,0.076052,0,1,6.7288,1,6.7288,0.076052,0,0,0,0.230987,1.6822,0.461974,3.3644,0.692961,5.0466,0.923948,6.7288,-0.357631,0.0384901,-0.357631,0.623365,-0.178828,0.0647557,-0.0329226,-0.00442973,-0.0312036,0.280277,-0.177109,0.349462,0.298983,1.86853,0.298983,2.46332,0.319341,1.80338,0.319341,2.39817]);
IndexedFaceSet125.texCoord = TextureCoordinate126;

Coordinate Coordinate127 = createNode("Coordinate");
Coordinate127.point = new MFVec3f(new float[0.201083,1,1,-0.897416,-1,1,0.291503,1,1,-0.806997,-1,1,0.291503,1,-1,-0.806997,-1,-1,0.201083,1,-1,-0.897416,-1,-1,-0.348167,0,1,-0.348167,0,-1,-0.0735419,0.5,1,-0.0735419,0.5,-1,-0.308407,0.5,1,-0.308407,0.5,-1,-0.583032,0,-1,-0.583032,0,1,0.76518,-1,1,0.76518,-1,-1,0.201083,1,1,-0.897416,-1,1,-0.806997,-1,1,0.291503,1,1,0.291503,1,-1,-0.806997,-1,-1,-0.897416,-1,-1,0.201083,1,-1]);
IndexedFaceSet125.coord = Coordinate127;

Shape122.geometry = IndexedFaceSet125;

Transform121.child = new undefined();

Transform121.child[0] = Shape122;

Transform102.children[2] = Transform121;

Transform101.children = new MFNode();

Transform101.children[0] = Transform102;

Transform Transform128 = createNode("Transform");
Transform128.DEF = "shadow";
Transform128.translation = new SFVec3f(new float[0,-1.86265e-8,-4.61459e-8]);
Transform128.rotation = new SFRotation(new float[1,0,0,4.71239]);
Transform128.scale = new SFVec3f(new float[1.34486,1.34486,1.34486]);
Shape Shape129 = createNode("Shape");
Appearance Appearance130 = createNode("Appearance");
ImageTexture ImageTexture131 = createNode("ImageTexture");
ImageTexture131.url = new MFString(new java.lang.String["shadow70-128.png"]);
Appearance130.texture = ImageTexture131;

Shape129.appearance = Appearance130;

IndexedFaceSet IndexedFaceSet132 = createNode("IndexedFaceSet");
IndexedFaceSet132.coordIndex = new MFInt32(new int[0,1,3,-1,1,2,3,-1]);
TextureCoordinate TextureCoordinate133 = createNode("TextureCoordinate");
TextureCoordinate133.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet132.texCoord = TextureCoordinate133;

Coordinate Coordinate134 = createNode("Coordinate");
Coordinate134.point = new MFVec3f(new float[-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0]);
IndexedFaceSet132.coord = Coordinate134;

Shape129.geometry = IndexedFaceSet132;

Transform128.child = new undefined();

Transform128.child[0] = Shape129;

Transform101.children[1] = Transform128;

Transform98.children[1] = Transform101;

Transform26.children[1] = Transform98;

Billboard25.children = new MFNode();

Billboard25.children[0] = Transform26;

Transform24.children = new MFNode();

Transform24.children[0] = Billboard25;

children[6] = Transform24;

ROUTE ROUTE135 = createNode("ROUTE");
ROUTE135.fromNode = "_9";
ROUTE135.fromField = "isActive";
ROUTE135.toNode = "Time_1";
ROUTE135.toField = "set_enabled";
children[7] = ROUTE135;

ROUTE ROUTE136 = createNode("ROUTE");
ROUTE136.fromNode = "_9";
ROUTE136.fromField = "enterTime";
ROUTE136.toNode = "Time_1";
ROUTE136.toField = "set_startTime";
children[8] = ROUTE136;

ROUTE ROUTE137 = createNode("ROUTE");
ROUTE137.fromNode = "Time_1";
ROUTE137.fromField = "fraction_changed";
ROUTE137.toNode = "_2";
ROUTE137.toField = "set_fraction";
children[9] = ROUTE137;

ROUTE ROUTE138 = createNode("ROUTE");
ROUTE138.fromNode = "Time_1";
ROUTE138.fromField = "fraction_changed";
ROUTE138.toNode = "_3";
ROUTE138.toField = "set_fraction";
children[10] = ROUTE138;

ROUTE ROUTE139 = createNode("ROUTE");
ROUTE139.fromNode = "_2";
ROUTE139.fromField = "value_changed";
ROUTE139.toNode = "_4";
ROUTE139.toField = "xIn";
children[11] = ROUTE139;

ROUTE ROUTE140 = createNode("ROUTE");
ROUTE140.fromNode = "_3";
ROUTE140.fromField = "value_changed";
ROUTE140.toNode = "_4";
ROUTE140.toField = "yIn";
children[12] = ROUTE140;

ROUTE ROUTE141 = createNode("ROUTE");
ROUTE141.fromNode = "Time_1";
ROUTE141.fromField = "fraction_changed";
ROUTE141.toNode = "_5";
ROUTE141.toField = "set_fraction";
children[13] = ROUTE141;

ROUTE ROUTE142 = createNode("ROUTE");
ROUTE142.fromNode = "Time_1";
ROUTE142.fromField = "fraction_changed";
ROUTE142.toNode = "_6";
ROUTE142.toField = "set_fraction";
children[14] = ROUTE142;

ROUTE ROUTE143 = createNode("ROUTE");
ROUTE143.fromNode = "_5";
ROUTE143.fromField = "value_changed";
ROUTE143.toNode = "_7";
ROUTE143.toField = "xIn";
children[15] = ROUTE143;

ROUTE ROUTE144 = createNode("ROUTE");
ROUTE144.fromNode = "_6";
ROUTE144.fromField = "value_changed";
ROUTE144.toNode = "_7";
ROUTE144.toField = "yIn";
children[16] = ROUTE144;

ROUTE ROUTE145 = createNode("ROUTE");
ROUTE145.fromNode = "_4";
ROUTE145.fromField = "vec";
ROUTE145.toNode = "_8";
ROUTE145.toField = "set_translation";
children[17] = ROUTE145;

ROUTE ROUTE146 = createNode("ROUTE");
ROUTE146.fromNode = "_7";
ROUTE146.fromField = "vec";
ROUTE146.toNode = "_8";
ROUTE146.toField = "set_translation";
children[18] = ROUTE146;

ROUTE ROUTE147 = createNode("ROUTE");
ROUTE147.fromNode = "_10";
ROUTE147.fromField = "isOver";
ROUTE147.toNode = "_11";
ROUTE147.toField = "set_isOver";
children[19] = ROUTE147;

ROUTE ROUTE148 = createNode("ROUTE");
ROUTE148.fromNode = "_10";
ROUTE148.fromField = "hitPoint_changed";
ROUTE148.toNode = "_11";
ROUTE148.toField = "set_hitPoint";
children[20] = ROUTE148;

ROUTE ROUTE149 = createNode("ROUTE");
ROUTE149.fromNode = "_15";
ROUTE149.fromField = "isOver_changed";
ROUTE149.toNode = "_13";
ROUTE149.toField = "set_SFBool";
children[21] = ROUTE149;

ROUTE ROUTE150 = createNode("ROUTE");
ROUTE150.fromNode = "_13";
ROUTE150.fromField = "startTime";
ROUTE150.toNode = "_14";
ROUTE150.toField = "startTime";
children[22] = ROUTE150;

ROUTE ROUTE151 = createNode("ROUTE");
ROUTE151.fromNode = "_12";
ROUTE151.fromField = "isOver";
ROUTE151.toNode = "_15";
ROUTE151.toField = "set_isOver";
children[23] = ROUTE151;

ROUTE ROUTE152 = createNode("ROUTE");
ROUTE152.fromNode = "_12";
ROUTE152.fromField = "hitPoint_changed";
ROUTE152.toNode = "_15";
ROUTE152.toField = "set_hitPoint";
children[24] = ROUTE152;

ROUTE ROUTE153 = createNode("ROUTE");
ROUTE153.fromNode = "_14";
ROUTE153.fromField = "value_changed";
ROUTE153.toNode = "_1";
ROUTE153.toField = "set_whichChoice";
children[25] = ROUTE153;

ROUTE ROUTE154 = createNode("ROUTE");
ROUTE154.fromNode = "_16";
ROUTE154.fromField = "wichChoice_changed";
ROUTE154.toNode = "_1";
ROUTE154.toField = "set_whichChoice";
children[26] = ROUTE154;

ROUTE ROUTE155 = createNode("ROUTE");
ROUTE155.fromNode = "_11";
ROUTE155.fromField = "isOver_changed";
ROUTE155.toNode = "_16";
ROUTE155.toField = "isActive";
children[27] = ROUTE155;

}
