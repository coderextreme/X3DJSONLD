#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Interchange";
X3D0.version = "4.0";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "Geometry2D";
component2.level = 2;
head1.component = new MFNode();

head1.component[0] = component2;

component component3 = createNode("component");
component3.name = "Layering";
component3.level = 1;
head1.component[1] = component3;

component component4 = createNode("component");
component4.name = "ParticleSystems";
component4.level = 3;
head1.component[2] = component4;

component component5 = createNode("component");
component5.name = "PointingDeviceSensor";
component5.level = 1;
head1.component[3] = component5;

component component6 = createNode("component");
component6.name = "Scripting";
component6.level = 1;
head1.component[4] = component6;

component component7 = createNode("component");
component7.name = "Text";
component7.level = 1;
head1.component[5] = component7;

meta meta8 = createNode("meta");
meta8.name = "comment";
meta8.content = "World of Titania";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "created";
meta9.content = "Fri, 22 Apr 2016 03:51:27 GMT";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "creator";
meta10.content = "Holger Seelig";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "generator";
meta11.content = "Titania V1.4.1, http://titania.create3000.de";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "generator";
meta12.content = "Sunrize X3D Editor V1.6.11, https://create3000.github.io/sunrize/";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "identifier";
meta13.content = "file:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/ExplosionEmitter.x3d";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "modified";
meta14.content = "Tue, 30 Apr 2024 04:23:56 GMT";
head1.meta[12] = meta14;

head = head1;

ExternProtoDeclare ExternProtoDeclare16 = createNode("ExternProtoDeclare");
ExternProtoDeclare16.name = "Grid";
ExternProtoDeclare16.url = new MFString(new java.lang.String[", ","GridTool.x3dv#Gridfile:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/GridTool.x3dv#Grid"]);
field field17 = createNode("field");
field17.name = "translation";
field17.accessType = "inputOutput";
field17.type = "SFVec3f";
ExternProtoDeclare16.field = new MFNode();

ExternProtoDeclare16.field[0] = field17;

field field18 = createNode("field");
field18.name = "rotation";
field18.accessType = "inputOutput";
field18.type = "SFRotation";
ExternProtoDeclare16.field[1] = field18;

field field19 = createNode("field");
field19.name = "scale";
field19.accessType = "inputOutput";
field19.type = "SFVec3f";
ExternProtoDeclare16.field[2] = field19;

field field20 = createNode("field");
field20.name = "dimension";
field20.accessType = "inputOutput";
field20.type = "MFInt32";
ExternProtoDeclare16.field[3] = field20;

field field21 = createNode("field");
field21.name = "majorLineEvery";
field21.accessType = "inputOutput";
field21.type = "MFInt32";
ExternProtoDeclare16.field[4] = field21;

field field22 = createNode("field");
field22.name = "majorLineOffset";
field22.accessType = "inputOutput";
field22.type = "MFInt32";
ExternProtoDeclare16.field[5] = field22;

field field23 = createNode("field");
field23.name = "color";
field23.accessType = "inputOutput";
field23.type = "SFColor";
ExternProtoDeclare16.field[6] = field23;

field field24 = createNode("field");
field24.name = "transparency";
field24.accessType = "inputOutput";
field24.type = "SFFloat";
ExternProtoDeclare16.field[7] = field24;

field field25 = createNode("field");
field25.name = "lineColor";
field25.accessType = "inputOutput";
field25.type = "SFColor";
ExternProtoDeclare16.field[8] = field25;

field field26 = createNode("field");
field26.name = "lineTransparency";
field26.accessType = "inputOutput";
field26.type = "SFFloat";
ExternProtoDeclare16.field[9] = field26;

field field27 = createNode("field");
field27.name = "majorLineColor";
field27.accessType = "inputOutput";
field27.type = "SFColor";
ExternProtoDeclare16.field[10] = field27;

field field28 = createNode("field");
field28.name = "majorLineTransparency";
field28.accessType = "inputOutput";
field28.type = "SFFloat";
ExternProtoDeclare16.field[11] = field28;

field field29 = createNode("field");
field29.name = "solid";
field29.accessType = "initializeOnly";
field29.type = "SFBool";
ExternProtoDeclare16.field[12] = field29;

children = new MFNode();

children[0] = ExternProtoDeclare16;

LayerSet LayerSet30 = createNode("LayerSet");
LayerSet30.activeLayer = 1;
LayerSet30.order = new MFInt32(new int[0,1,2,3]);
Layer Layer31 = createNode("Layer");
Layer31.pickable = True;
Layer31.objectType = new MFString(new java.lang.String["ALL"]);
Background Background32 = createNode("Background");
Background32.DEF = "Gray";
Background32.skyColor = new MFColor(new float[0.2,0.2,0.2]);
Layer31.children = new MFNode();

Layer31.children[0] = Background32;

Viewpoint Viewpoint33 = createNode("Viewpoint");
Viewpoint33.description = "Viewpoint";
Viewpoint33.position = new SFVec3f(new float[0,20,55]);
Layer31.children[1] = Viewpoint33;

ParticleSystem ParticleSystem34 = createNode("ParticleSystem");
ParticleSystem34.DEF = "_1";
ParticleSystem34.geometryType = "POINT";
ParticleSystem34.maxParticles = 2000;
ParticleSystem34.particleLifetime = 4;
ParticleSystem34.lifetimeVariation = 0.5;
ParticleSystem34.particleSize = new SFVec2f(new float[1,1]);
ParticleSystem34.colorKey = new MFFloat(new float[0,0.2,0.5,0.7,0.8,1]);
ExplosionEmitter ExplosionEmitter35 = createNode("ExplosionEmitter");
ExplosionEmitter35.speed = 0.5;
ExplosionEmitter35.variation = 0.5;
ExplosionEmitter35.mass = 0.1;
ExplosionEmitter35.surfaceArea = 0.1;
ParticleSystem34.emitter = ExplosionEmitter35;

WindPhysicsModel WindPhysicsModel36 = createNode("WindPhysicsModel");
WindPhysicsModel36.direction = new SFVec3f(new float[0,1,0]);
WindPhysicsModel36.speed = 0.7;
WindPhysicsModel36.gustiness = 1.7;
WindPhysicsModel36.turbulence = 0.3;
ParticleSystem34.physics = new MFNode();

ParticleSystem34.physics[0] = WindPhysicsModel36;

WindPhysicsModel WindPhysicsModel37 = createNode("WindPhysicsModel");
WindPhysicsModel37.speed = 0.5;
WindPhysicsModel37.gustiness = 2;
ParticleSystem34.physics[1] = WindPhysicsModel37;

ColorRGBA ColorRGBA38 = createNode("ColorRGBA");
ColorRGBA38.color = new MFColorRGBA(new float[1,0.38,0,0,1,0.58,0.06,0.01,1,0.37,0,0.1,1,0.05,0,0,0,0,0,0.015,0,0,0,0]);
ParticleSystem34.color = ColorRGBA38;

Appearance Appearance39 = createNode("Appearance");
PointProperties PointProperties40 = createNode("PointProperties");
PointProperties40.pointSizeScaleFactor = 10;
PointProperties40.pointSizeMinValue = 10;
PointProperties40.pointSizeMaxValue = 10;
Appearance39.pointProperties = PointProperties40;

ParticleSystem34.appearance = Appearance39;

Layer31.children[2] = ParticleSystem34;

Transform Transform41 = createNode("Transform");
Transform41.DEF = "IndexedLineSet";
Shape Shape42 = createNode("Shape");
IndexedLineSet IndexedLineSet43 = createNode("IndexedLineSet");
IndexedLineSet43.colorPerVertex = False;
IndexedLineSet43.colorIndex = new MFInt32(new int[0,1,2]);
IndexedLineSet43.coordIndex = new MFInt32(new int[0,1,-1,2,3,-1,4,5,-1]);
Color Color44 = createNode("Color");
Color44.color = new MFColor(new float[1,0,0,0,1,0,0,0,1]);
IndexedLineSet43.color = Color44;

Coordinate Coordinate45 = createNode("Coordinate");
Coordinate45.point = new MFVec3f(new float[-1,0,0,1,0,0,0,-1,0,0,1,0,0,0,-1,0,0,1]);
IndexedLineSet43.coord = Coordinate45;

Shape42.geometry = IndexedLineSet43;

Transform41.child = new undefined();

Transform41.child[0] = Shape42;

Layer31.children[3] = Transform41;

LayerSet30.layers = new MFNode();

LayerSet30.layers[0] = Layer31;

Layer Layer46 = createNode("Layer");
Layer46.pickable = True;
Layer46.objectType = new MFString(new java.lang.String["ALL"]);
OrthoViewpoint OrthoViewpoint47 = createNode("OrthoViewpoint");
Layer46.children = new MFNode();

Layer46.children[0] = OrthoViewpoint47;

Transform Transform48 = createNode("Transform");
Transform48.DEF = "TransparencyText";
Transform48.translation = new SFVec3f(new float[1.675,-0.95,-0.00000349096]);
Transform48.scale = new SFVec3f(new float[0.0672307,0.0672307,0.0672307]);
Shape Shape49 = createNode("Shape");
Appearance Appearance50 = createNode("Appearance");
Material Material51 = createNode("Material");
Material51.emissiveColor = new SFColor(new float[1,1,1]);
Appearance50.material = Material51;

Shape49.appearance = Appearance50;

Text Text52 = createNode("Text");
Text52.DEF = "_2";
Text52.string = new MFString(new java.lang.String["numParticles 2337"]);
Text52.solid = True;
FontStyle FontStyle53 = createNode("FontStyle");
FontStyle53.family = new MFString(new java.lang.String["SANS"]);
FontStyle53.justify = new MFString(new java.lang.String["END"]);
Text52.fontStyle = FontStyle53;

Shape49.geometry = Text52;

Transform48.child = new undefined();

Transform48.child[0] = Shape49;

Layer46.children[1] = Transform48;

Transform Transform54 = createNode("Transform");
Transform54.DEF = "TransparancySlider";
Transform54.translation = new SFVec3f(new float[0.025,-0.923,-0.00000349096]);
Transform54.center = new SFVec3f(new float[0,-0.027,0]);
Transform Transform55 = createNode("Transform");
Transform55.DEF = "IndexedLineSet_1";
Shape Shape56 = createNode("Shape");
Appearance Appearance57 = createNode("Appearance");
LineProperties LineProperties58 = createNode("LineProperties");
LineProperties58.linewidthScaleFactor = 2;
Appearance57.lineProperties = LineProperties58;

Material Material59 = createNode("Material");
Material59.DEF = "Artdeco31";
Material59.emissiveColor = new SFColor(new float[1,1,1]);
Appearance57.material = Material59;

Shape56.appearance = Appearance57;

IndexedLineSet IndexedLineSet60 = createNode("IndexedLineSet");
IndexedLineSet60.colorPerVertex = False;
IndexedLineSet60.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate61 = createNode("Coordinate");
Coordinate61.point = new MFVec3f(new float[0,0,0,1,0,0]);
IndexedLineSet60.coord = Coordinate61;

Shape56.geometry = IndexedLineSet60;

Transform55.child = new undefined();

Transform55.child[0] = Shape56;

Transform54.children = new MFNode();

Transform54.children[0] = Transform55;

Transform Transform62 = createNode("Transform");
Transform Transform63 = createNode("Transform");
Transform63.DEF = "Rectangle2D";
Transform63.translation = new SFVec3f(new float[0.0584318,0,0]);
Transform63.scale = new SFVec3f(new float[0.027,0.0267372,0.0267372]);
Shape Shape64 = createNode("Shape");
Appearance Appearance65 = createNode("Appearance");
Material Material66 = createNode("Material");
Material66.emissiveColor = new SFColor(new float[1,1,1]);
Appearance65.material = Material66;

Shape64.appearance = Appearance65;

Disk2D Disk2D67 = createNode("Disk2D");
Shape64.geometry = Disk2D67;

Transform63.child = new undefined();

Transform63.child[0] = Shape64;

Transform62.children = new MFNode();

Transform62.children[0] = Transform63;

PlaneSensor PlaneSensor68 = createNode("PlaneSensor");
PlaneSensor68.DEF = "_3";
PlaneSensor68.offset = new SFVec3f(new float[0.0584318,0,0]);
PlaneSensor68.maxPosition = new SFVec2f(new float[1,0]);
Transform62.children[1] = PlaneSensor68;

Transform54.children[1] = Transform62;

Group Group69 = createNode("Group");
Group Group70 = createNode("Group");
Group70.DEF = "Animation";
MetadataSet MetadataSet71 = createNode("MetadataSet");
MetadataSet71.name = "Animation";
MetadataSet71.DEF = "Animation_1";
MetadataSet71.reference = "http://titania.create3000.de";
MetadataInteger MetadataInteger72 = createNode("MetadataInteger");
MetadataInteger72.name = "duration";
MetadataInteger72.DEF = "duration";
MetadataInteger72.reference = "http://titania.create3000.de";
MetadataInteger72.value = new MFInt32(new int[68]);
MetadataSet71.value = new MFNode();

MetadataSet71.value[0] = MetadataInteger72;

MetadataInteger MetadataInteger73 = createNode("MetadataInteger");
MetadataInteger73.name = "framesPerSecond";
MetadataInteger73.DEF = "framesPerSecond";
MetadataInteger73.reference = "http://titania.create3000.de";
MetadataInteger73.value = new MFInt32(new int[10]);
MetadataSet71.value[1] = MetadataInteger73;

Group70.metadata = MetadataSet71;

TimeSensor TimeSensor74 = createNode("TimeSensor");
TimeSensor74.DEF = "_4";
TimeSensor74.cycleInterval = 6.8;
TimeSensor74.loop = True;
TimeSensor74.startTime = 1451028308.5169;
TimeSensor74.resumeTime = 1451028223.75739;
TimeSensor74.pauseTime = 1451028247.50596;
TimeSensor74.stopTime = 1451028309.80616;
Group70.children = new MFNode();

Group70.children[0] = TimeSensor74;

PositionInterpolator PositionInterpolator75 = createNode("PositionInterpolator");
PositionInterpolator75.DEF = "pointSizeScriptSet_translationInterpolator";
PositionInterpolator75.key = new MFFloat(new float[0,0.0147059,0.0294118,0.0441176,0.0588235,0.0735294,0.0882353,0.102941,0.117647,0.132353,0.147059,0.161765,0.176471,0.191176,0.205882,0.220588,0.235294,0.25,0.264706,0.279412,0.294118,0.308824,0.323529,0.338235,0.352941,0.367647,0.382353,0.397059,0.411765,0.426471,0.441176,0.455882,0.470588,0.485294,0.5,0.514706,0.529412,0.544118,0.558824,0.573529,0.588235,0.602941,0.617647,0.632353,0.647059,0.661765,0.676471,0.691176,0.705882,0.720588,0.735294,0.75,0.764706,0.779412,0.794118,0.808824,0.823529,0.838235,0.852941,0.867647,0.882353,0.897059,0.911765,0.926471,0.941176,0.955882,0.970588,0.985294,1]);
PositionInterpolator75.keyValue = new MFVec3f(new float[0.200605,0,0,0.202642,0,0,0.208588,0,0,0.2182,0,0,0.231232,0,0,0.247441,0,0,0.266581,0,0,0.288408,0,0,0.312679,0,0,0.339147,0,0,0.367569,0,0,0.3977,0,0,0.429295,0,0,0.462111,0,0,0.495902,0,0,0.530424,0,0,0.565432,0,0,0.600683,0,0,0.63593,0,0,0.670931,0,0,0.70544,0,0,0.739212,0,0,0.772004,0,0,0.803571,0,0,0.833668,0,0,0.86205,0,0,0.888474,0,0,0.912694,0,0,0.934466,0,0,0.953546,0,0,0.969689,0,0,0.98265,0,0,0.992186,0,0,0.99805,0,0,1,0,0,0.997866,0,0,0.991808,0,0,0.982071,0,0,0.968899,0,0,0.95254,0,0,0.933237,0,0,0.911238,0,0,0.886786,0,0,0.860128,0,0,0.831508,0,0,0.801174,0,0,0.769369,0,0,0.736339,0,0,0.70233,0,0,0.667588,0,0,0.632357,0,0,0.596883,0,0,0.561412,0,0,0.526189,0,0,0.49146,0,0,0.457469,0,0,0.424463,0,0,0.392687,0,0,0.362387,0,0,0.333807,0,0,0.307193,0,0,0.282792,0,0,0.260847,0,0,0.241605,0,0,0.225311,0,0,0.212211,0,0,0.20255,0,0,0.196573,0,0,0.194526,0,0]);
MetadataSet MetadataSet76 = createNode("MetadataSet");
MetadataSet76.name = "Interpolator";
MetadataSet76.DEF = "Interpolator";
MetadataSet76.reference = "http://titania.create3000.de";
MetadataInteger MetadataInteger77 = createNode("MetadataInteger");
MetadataInteger77.name = "key";
MetadataInteger77.DEF = "key";
MetadataInteger77.reference = "http://titania.create3000.de";
MetadataInteger77.value = new MFInt32(new int[0,34,68]);
MetadataSet76.value = new MFNode();

MetadataSet76.value[0] = MetadataInteger77;

MetadataDouble MetadataDouble78 = createNode("MetadataDouble");
MetadataDouble78.name = "keyValue";
MetadataDouble78.DEF = "keyValue";
MetadataDouble78.reference = "http://titania.create3000.de";
MetadataDouble78.value = new MFDouble(new double[0.20060533285141,0,0,1,0,0,0.194526299834251,0,0]);
MetadataSet76.value[1] = MetadataDouble78;

MetadataString MetadataString79 = createNode("MetadataString");
MetadataString79.name = "keyType";
MetadataString79.DEF = "keyType";
MetadataString79.reference = "http://titania.create3000.de";
MetadataString79.value = new MFString(new java.lang.String[", ","SPLINE, ","SPLINESPLINE"]);
MetadataSet76.value[2] = MetadataString79;

PositionInterpolator75.metadata = MetadataSet76;

Group70.children[1] = PositionInterpolator75;

Group69.children = new MFNode();

Group69.children[0] = Group70;

Script Script80 = createNode("Script");
Script80.DEF = "NumParticlesyScript";
field field81 = createNode("field");
field81.name = "set_translation";
field81.accessType = "inputOnly";
field81.type = "SFVec3f";
Script80.field = new MFNode();

Script80.field[0] = field81;

field field82 = createNode("field");
field82.name = "description";
field82.accessType = "inputOutput";
field82.type = "SFString";
field82.value = "numParticles";
Script80.field[1] = field82;

field field83 = createNode("field");
field83.name = "minValue";
field83.accessType = "inputOutput";
field83.type = "SFInt32";
Script80.field[2] = field83;

field field84 = createNode("field");
field84.name = "maxValue";
field84.accessType = "inputOutput";
field84.type = "SFInt32";
field84.value = "40000";
Script80.field[3] = field84;

field field85 = createNode("field");
field85.name = "value_changed";
field85.accessType = "outputOnly";
field85.type = "SFInt32";
Script80.field[4] = field85;

field field86 = createNode("field");
field86.name = "string_changed";
field86.accessType = "outputOnly";
field86.type = "MFString";
Script80.field[5] = field86;

field field87 = createNode("field");
field87.name = "currentValue";
field87.accessType = "initializeOnly";
field87.type = "SFInt32";
field87.value = "2000";
Script80.field[6] = field87;


Script80.setSourceCode(`ecmascript:\n"+
"\n"+
"function initialized ()\n"+
"{\n"+
"	set_value (value);\n"+
"}\n"+
"\n"+
"function set_translation (value)\n"+
"{\n"+
"	set_value (minValue + (value .x * (maxValue - minValue)));\n"+
"}\n"+
"\n"+
"function set_value (value)\n"+
"{\n"+
"	var rounded = value .toFixed (0);\n"+
"\n"+
"	if (rounded == currentValue)\n"+
"		return;\n"+
"\n"+
"	currentValue       = rounded;\n"+
"	string_changed [0] = description + \" \" + rounded;\n"+
"	value_changed      = rounded;\n"+
"}`)
Group69.children[1] = Script80;

Transform54.children[2] = Group69;

Switch Switch88 = createNode("Switch");
Switch88.whichChoice = -1;
Transform Transform89 = createNode("Transform");
Transform89.DEF = "Rectangle2D_1";
Transform89.translation = new SFVec3f(new float[-0.075,0,0]);
Transform89.scale = new SFVec3f(new float[0.025,0.0247567,0.0247567]);
Shape Shape90 = createNode("Shape");
Appearance Appearance91 = createNode("Appearance");
Material Material92 = createNode("Material");
Material92.emissiveColor = new SFColor(new float[1,1,1]);
Appearance91.material = Material92;

Shape90.appearance = Appearance91;

Rectangle2D Rectangle2D93 = createNode("Rectangle2D");
Shape90.geometry = Rectangle2D93;

Transform89.child = new undefined();

Transform89.child[0] = Shape90;

TouchSensor TouchSensor94 = createNode("TouchSensor");
TouchSensor94.DEF = "_5";
TouchSensor94.description = "Toggle Animation";
Transform89.children[1] = TouchSensor94;

Script Script95 = createNode("Script");
Script95.DEF = "ToggleTransparencyAnim";
field field96 = createNode("field");
field96.name = "set_touchTime";
field96.accessType = "inputOnly";
field96.type = "SFTime";
Script95.field = new MFNode();

Script95.field[0] = field96;

field field97 = createNode("field");
field97.name = "timer";
field97.accessType = "initializeOnly";
field97.type = "SFNode";
TimeSensor TimeSensor98 = createNode("TimeSensor");
TimeSensor98.USE = "_4";
field97.children = new MFNode();

field97.children[0] = TimeSensor98;

Script95.field[1] = field97;


Script95.setSourceCode(`ecmascript:\n"+
"\n"+
"function set_touchTime (value, time)\n"+
"{\n"+
"	if (timer .isActive)\n"+
"	{\n"+
"		if (timer .isPaused)\n"+
"			timer .resumeTime = time;\n"+
"		else\n"+
"			timer .pauseTime = time;\n"+
"	}\n"+
"	else\n"+
"		timer .startTime = time;\n"+
"}`)
Transform89.children[2] = Script95;

Switch88.children = new MFNode();

Switch88.children[0] = Transform89;

Transform54.children[3] = Switch88;

Layer46.children[2] = Transform54;

LayerSet30.layers[1] = Layer46;

layerSet[1] = LayerSet30;

ROUTE ROUTE99 = createNode("ROUTE");
ROUTE99.fromNode = "_4";
ROUTE99.fromField = "fraction_changed";
ROUTE99.toNode = "pointSizeScriptSet_translationInterpolator";
ROUTE99.toField = "set_fraction";
children[2] = ROUTE99;

ROUTE ROUTE100 = createNode("ROUTE");
ROUTE100.fromNode = "pointSizeScriptSet_translationInterpolator";
ROUTE100.fromField = "value_changed";
ROUTE100.toNode = "Rectangle2D";
ROUTE100.toField = "set_translation";
children[3] = ROUTE100;

ROUTE ROUTE101 = createNode("ROUTE");
ROUTE101.fromNode = "pointSizeScriptSet_translationInterpolator";
ROUTE101.fromField = "value_changed";
ROUTE101.toNode = "NumParticlesyScript";
ROUTE101.toField = "set_translation";
children[4] = ROUTE101;

ROUTE ROUTE102 = createNode("ROUTE");
ROUTE102.fromNode = "_5";
ROUTE102.fromField = "touchTime";
ROUTE102.toNode = "ToggleTransparencyAnim";
ROUTE102.toField = "set_touchTime";
children[5] = ROUTE102;

ROUTE ROUTE103 = createNode("ROUTE");
ROUTE103.fromNode = "_3";
ROUTE103.fromField = "translation_changed";
ROUTE103.toNode = "NumParticlesyScript";
ROUTE103.toField = "set_translation";
children[6] = ROUTE103;

ROUTE ROUTE104 = createNode("ROUTE");
ROUTE104.fromNode = "_3";
ROUTE104.fromField = "translation_changed";
ROUTE104.toNode = "Rectangle2D";
ROUTE104.toField = "set_translation";
children[7] = ROUTE104;

ROUTE ROUTE105 = createNode("ROUTE");
ROUTE105.fromNode = "pointSizeScriptSet_translationInterpolator";
ROUTE105.fromField = "value_changed";
ROUTE105.toNode = "_3";
ROUTE105.toField = "set_offset";
children[8] = ROUTE105;

ROUTE ROUTE106 = createNode("ROUTE");
ROUTE106.fromNode = "NumParticlesyScript";
ROUTE106.fromField = "string_changed";
ROUTE106.toNode = "_2";
ROUTE106.toField = "set_string";
children[9] = ROUTE106;

ROUTE ROUTE107 = createNode("ROUTE");
ROUTE107.fromNode = "NumParticlesyScript";
ROUTE107.fromField = "value_changed";
ROUTE107.toNode = "_1";
ROUTE107.toField = "set_maxParticles";
children[10] = ROUTE107;

}
