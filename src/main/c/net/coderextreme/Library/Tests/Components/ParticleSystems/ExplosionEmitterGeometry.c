#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Core";
X3D0.version = "3.3";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "EnvironmentalEffects";
component2.level = 4;
head1.component = new MFNode();

head1.component[0] = component2;

component component3 = createNode("component");
component3.name = "Navigation";
component3.level = 3;
head1.component[1] = component3;

component component4 = createNode("component");
component4.name = "ParticleSystems";
component4.level = 3;
head1.component[2] = component4;

component component5 = createNode("component");
component5.name = "Rendering";
component5.level = 5;
head1.component[3] = component5;

component component6 = createNode("component");
component6.name = "Shape";
component6.level = 5;
head1.component[4] = component6;

component component7 = createNode("component");
component7.name = "Geometry3D";
component7.level = 4;
head1.component[5] = component7;

component component8 = createNode("component");
component8.name = "Grouping";
component8.level = 3;
head1.component[6] = component8;

component component9 = createNode("component");
component9.name = "Layering";
component9.level = 1;
head1.component[7] = component9;

component component10 = createNode("component");
component10.name = "Text";
component10.level = 1;
head1.component[8] = component10;

component component11 = createNode("component");
component11.name = "Geometry2D";
component11.level = 2;
head1.component[9] = component11;

component component12 = createNode("component");
component12.name = "PointingDeviceSensor";
component12.level = 1;
head1.component[10] = component12;

component component13 = createNode("component");
component13.name = "Scripting";
component13.level = 1;
head1.component[11] = component13;

component component14 = createNode("component");
component14.name = "Time";
component14.level = 2;
head1.component[12] = component14;

meta meta15 = createNode("meta");
meta15.name = "created";
meta15.content = "Fri, 30 Sep 2022 17:09:57 GMT";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "comment";
meta16.content = "World of Sunrise X3D Editor";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "creator";
meta17.content = "Holger Seelig";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "generator";
meta18.content = "Sunrise X3D Editor V1.0.0, https://create3000.github.io/Sunrise/";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "identifier";
meta19.content = "file:///Users/holger/Desktop/X_ITE/x_ite/src/tests/ExplosionEmitterGeometry.x3d";
head1.meta[17] = meta19;

meta meta20 = createNode("meta");
meta20.name = "modified";
meta20.content = "Fri, 30 Sep 2022 18:26:37 GMT";
head1.meta[18] = meta20;

head = head1;

LayerSet LayerSet22 = createNode("LayerSet");
LayerSet22.activeLayer = 1;
LayerSet22.order = new MFInt32(new int[0,1,2,3]);
Layer Layer23 = createNode("Layer");
Background Background24 = createNode("Background");
Background24.DEF = "Gray";
Background24.skyColor = new MFColor(new float[0.2,0.2,0.2]);
Layer23.children = new MFNode();

Layer23.children[0] = Background24;

Viewpoint Viewpoint25 = createNode("Viewpoint");
Viewpoint25.description = "Viewpoint";
Viewpoint25.position = new SFVec3f(new float[0,20,55]);
Layer23.children[1] = Viewpoint25;

ParticleSystem ParticleSystem26 = createNode("ParticleSystem");
ParticleSystem26.DEF = "_1";
ParticleSystem26.geometryType = "GEOMETRY";
ParticleSystem26.particleLifetime = 4;
ParticleSystem26.lifetimeVariation = 0.5;
ParticleSystem26.particleSize = new SFVec2f(new float[1,1]);
ParticleSystem26.colorKey = new MFFloat(new float[0,0.2,0.5,0.7,0.8,1]);
ExplosionEmitter ExplosionEmitter27 = createNode("ExplosionEmitter");
ExplosionEmitter27.speed = 0.5;
ExplosionEmitter27.variation = 0.5;
ExplosionEmitter27.mass = 0.1;
ExplosionEmitter27.surfaceArea = 0.1;
ParticleSystem26.emitter = ExplosionEmitter27;

WindPhysicsModel WindPhysicsModel28 = createNode("WindPhysicsModel");
WindPhysicsModel28.direction = new SFVec3f(new float[0,1,0]);
WindPhysicsModel28.speed = 0.7;
WindPhysicsModel28.gustiness = 1.7;
WindPhysicsModel28.turbulence = 0.3;
ParticleSystem26.physics = new MFNode();

ParticleSystem26.physics[0] = WindPhysicsModel28;

WindPhysicsModel WindPhysicsModel29 = createNode("WindPhysicsModel");
WindPhysicsModel29.speed = 0.5;
WindPhysicsModel29.gustiness = 2;
ParticleSystem26.physics[1] = WindPhysicsModel29;

ColorRGBA ColorRGBA30 = createNode("ColorRGBA");
ColorRGBA30.color = new MFColorRGBA(new float[1,0.38,0,0,1,0.58,0.06,0.01,1,0.37,0,0.1,1,0.05,0,0,0,0,0,0.015,0,0,0,0]);
ParticleSystem26.color = ColorRGBA30;

Appearance Appearance31 = createNode("Appearance");
Material Material32 = createNode("Material");
Material32.diffuseColor = new SFColor(new float[0.403922,0.305882,0.654902]);
Appearance31.material = Material32;

ParticleSystem26.appearance = Appearance31;

Box Box33 = createNode("Box");
Box33.size = new SFVec3f(new float[1,1,1]);
ParticleSystem26.geometry = Box33;

Layer23.children[2] = ParticleSystem26;

Transform Transform34 = createNode("Transform");
Transform34.DEF = "Box";
Transform34.translation = new SFVec3f(new float[-10,0,0]);
Shape Shape35 = createNode("Shape");
Appearance Appearance36 = createNode("Appearance");
Material Material37 = createNode("Material");
Appearance36.material = Material37;

Shape35.appearance = Appearance36;

Box Box38 = createNode("Box");
Shape35.geometry = Box38;

Transform34.child = new undefined();

Transform34.child[0] = Shape35;

Layer23.children[3] = Transform34;

Transform Transform39 = createNode("Transform");
Transform39.DEF = "IndexedLineSet";
Shape Shape40 = createNode("Shape");
IndexedLineSet IndexedLineSet41 = createNode("IndexedLineSet");
IndexedLineSet41.colorPerVertex = False;
IndexedLineSet41.colorIndex = new MFInt32(new int[0,1,2]);
IndexedLineSet41.coordIndex = new MFInt32(new int[0,1,-1,2,3,-1,4,5,-1]);
Color Color42 = createNode("Color");
Color42.color = new MFColor(new float[1,0,0,0,1,0,0,0,1]);
IndexedLineSet41.color = Color42;

Coordinate Coordinate43 = createNode("Coordinate");
Coordinate43.point = new MFVec3f(new float[-1,0,0,1,0,0,0,-1,0,0,1,0,0,0,-1,0,0,1]);
IndexedLineSet41.coord = Coordinate43;

Shape40.geometry = IndexedLineSet41;

Transform39.child = new undefined();

Transform39.child[0] = Shape40;

Layer23.children[4] = Transform39;

LayerSet22.layers = new MFNode();

LayerSet22.layers[0] = Layer23;

Layer Layer44 = createNode("Layer");
OrthoViewpoint OrthoViewpoint45 = createNode("OrthoViewpoint");
Layer44.children = new MFNode();

Layer44.children[0] = OrthoViewpoint45;

Transform Transform46 = createNode("Transform");
Transform46.DEF = "TransparencyText";
Transform46.translation = new SFVec3f(new float[1.675,-0.95,-0.00000349096]);
Transform46.scale = new SFVec3f(new float[0.0672307,0.0672307,0.0672307]);
Shape Shape47 = createNode("Shape");
Appearance Appearance48 = createNode("Appearance");
Material Material49 = createNode("Material");
Material49.emissiveColor = new SFColor(new float[1,1,1]);
Appearance48.material = Material49;

Shape47.appearance = Appearance48;

Text Text50 = createNode("Text");
Text50.DEF = "_2";
Text50.string = new MFString(new java.lang.String["numParticles 200"]);
Text50.solid = True;
FontStyle FontStyle51 = createNode("FontStyle");
FontStyle51.family = new MFString(new java.lang.String["SANS"]);
FontStyle51.justify = new MFString(new java.lang.String["END"]);
Text50.fontStyle = FontStyle51;

Shape47.geometry = Text50;

Transform46.child = new undefined();

Transform46.child[0] = Shape47;

Layer44.children[1] = Transform46;

Transform Transform52 = createNode("Transform");
Transform52.DEF = "TransparancySlider";
Transform52.translation = new SFVec3f(new float[0.025,-0.923,-0.00000349096]);
Transform52.center = new SFVec3f(new float[0,-0.027,0]);
Transform Transform53 = createNode("Transform");
Transform53.DEF = "IndexedLineSet_1";
Shape Shape54 = createNode("Shape");
Appearance Appearance55 = createNode("Appearance");
LineProperties LineProperties56 = createNode("LineProperties");
LineProperties56.linewidthScaleFactor = 2;
Appearance55.lineProperties = LineProperties56;

Material Material57 = createNode("Material");
Material57.DEF = "Artdeco31";
Material57.emissiveColor = new SFColor(new float[1,1,1]);
Appearance55.material = Material57;

Shape54.appearance = Appearance55;

IndexedLineSet IndexedLineSet58 = createNode("IndexedLineSet");
IndexedLineSet58.colorPerVertex = False;
IndexedLineSet58.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate59 = createNode("Coordinate");
Coordinate59.point = new MFVec3f(new float[0,0,0,1,0,0]);
IndexedLineSet58.coord = Coordinate59;

Shape54.geometry = IndexedLineSet58;

Transform53.child = new undefined();

Transform53.child[0] = Shape54;

Transform52.children = new MFNode();

Transform52.children[0] = Transform53;

Transform Transform60 = createNode("Transform");
Transform Transform61 = createNode("Transform");
Transform61.DEF = "Rectangle2D";
Transform61.translation = new SFVec3f(new float[1,0,0]);
Transform61.scale = new SFVec3f(new float[0.027,0.0267372,0.0267372]);
Shape Shape62 = createNode("Shape");
Appearance Appearance63 = createNode("Appearance");
Material Material64 = createNode("Material");
Material64.emissiveColor = new SFColor(new float[1,1,1]);
Appearance63.material = Material64;

Shape62.appearance = Appearance63;

Disk2D Disk2D65 = createNode("Disk2D");
Shape62.geometry = Disk2D65;

Transform61.child = new undefined();

Transform61.child[0] = Shape62;

Transform60.children = new MFNode();

Transform60.children[0] = Transform61;

PlaneSensor PlaneSensor66 = createNode("PlaneSensor");
PlaneSensor66.DEF = "_3";
PlaneSensor66.offset = new SFVec3f(new float[1,0,0]);
PlaneSensor66.maxPosition = new SFVec2f(new float[1,0]);
Transform60.children[1] = PlaneSensor66;

Transform52.children[1] = Transform60;

Group Group67 = createNode("Group");
Script Script68 = createNode("Script");
Script68.DEF = "NumParticlesyScript";
field field69 = createNode("field");
field69.name = "set_translation";
field69.accessType = "inputOnly";
field69.type = "SFVec3f";
Script68.field = new MFNode();

Script68.field[0] = field69;

field field70 = createNode("field");
field70.name = "description";
field70.accessType = "inputOutput";
field70.type = "SFString";
field70.value = "numParticles";
Script68.field[1] = field70;

field field71 = createNode("field");
field71.name = "minValue";
field71.accessType = "inputOutput";
field71.type = "SFInt32";
Script68.field[2] = field71;

field field72 = createNode("field");
field72.name = "maxValue";
field72.accessType = "inputOutput";
field72.type = "SFInt32";
field72.value = "200";
Script68.field[3] = field72;

field field73 = createNode("field");
field73.name = "value_changed";
field73.accessType = "outputOnly";
field73.type = "SFInt32";
Script68.field[4] = field73;

field field74 = createNode("field");
field74.name = "string_changed";
field74.accessType = "outputOnly";
field74.type = "MFString";
Script68.field[5] = field74;

field field75 = createNode("field");
field75.name = "currentValue";
field75.accessType = "initializeOnly";
field75.type = "SFInt32";
field75.value = "200";
Script68.field[6] = field75;


Script68.setSourceCode(`ecmascript:\n"+
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
Group67.children = new MFNode();

Group67.children[0] = Script68;

Transform52.children[2] = Group67;

Switch Switch76 = createNode("Switch");
Switch76.whichChoice = -1;
Transform Transform77 = createNode("Transform");
Transform77.DEF = "Rectangle2D_1";
Transform77.translation = new SFVec3f(new float[-0.075,0,0]);
Transform77.scale = new SFVec3f(new float[0.025,0.0247567,0.0247567]);
Shape Shape78 = createNode("Shape");
Appearance Appearance79 = createNode("Appearance");
Material Material80 = createNode("Material");
Material80.emissiveColor = new SFColor(new float[1,1,1]);
Appearance79.material = Material80;

Shape78.appearance = Appearance79;

Rectangle2D Rectangle2D81 = createNode("Rectangle2D");
Shape78.geometry = Rectangle2D81;

Transform77.child = new undefined();

Transform77.child[0] = Shape78;

TouchSensor TouchSensor82 = createNode("TouchSensor");
TouchSensor82.DEF = "_4";
TouchSensor82.description = "Toggle Animation";
Transform77.children[1] = TouchSensor82;

Script Script83 = createNode("Script");
Script83.DEF = "ToggleTransparencyAnim";
field field84 = createNode("field");
field84.name = "set_touchTime";
field84.accessType = "inputOnly";
field84.type = "SFTime";
Script83.field = new MFNode();

Script83.field[0] = field84;

field field85 = createNode("field");
field85.name = "timer";
field85.accessType = "initializeOnly";
field85.type = "SFNode";
TimeSensor TimeSensor86 = createNode("TimeSensor");
TimeSensor86.cycleInterval = 6.8;
TimeSensor86.loop = True;
TimeSensor86.startTime = 1451028308.5169;
TimeSensor86.resumeTime = 1451028223.75739;
TimeSensor86.pauseTime = 1451028247.50596;
TimeSensor86.stopTime = 1451028309.80616;
field85.children = new MFNode();

field85.children[0] = TimeSensor86;

Script83.field[1] = field85;


Script83.setSourceCode(`ecmascript:\n"+
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
Transform77.children[2] = Script83;

Switch76.children = new MFNode();

Switch76.children[0] = Transform77;

Transform52.children[3] = Switch76;

Layer44.children[2] = Transform52;

LayerSet22.layers[1] = Layer44;

layerSet = new undefined();

layerSet[0] = LayerSet22;

ROUTE ROUTE87 = createNode("ROUTE");
ROUTE87.fromNode = "NumParticlesyScript";
ROUTE87.fromField = "value_changed";
ROUTE87.toNode = "_1";
ROUTE87.toField = "set_maxParticles";
children[1] = ROUTE87;

ROUTE ROUTE88 = createNode("ROUTE");
ROUTE88.fromNode = "NumParticlesyScript";
ROUTE88.fromField = "string_changed";
ROUTE88.toNode = "_2";
ROUTE88.toField = "set_string";
children[2] = ROUTE88;

ROUTE ROUTE89 = createNode("ROUTE");
ROUTE89.fromNode = "_3";
ROUTE89.fromField = "translation_changed";
ROUTE89.toNode = "Rectangle2D";
ROUTE89.toField = "set_translation";
children[3] = ROUTE89;

ROUTE ROUTE90 = createNode("ROUTE");
ROUTE90.fromNode = "_3";
ROUTE90.fromField = "translation_changed";
ROUTE90.toNode = "NumParticlesyScript";
ROUTE90.toField = "set_translation";
children[4] = ROUTE90;

ROUTE ROUTE91 = createNode("ROUTE");
ROUTE91.fromNode = "_4";
ROUTE91.fromField = "touchTime";
ROUTE91.toNode = "ToggleTransparencyAnim";
ROUTE91.toField = "set_touchTime";
children[5] = ROUTE91;

}
