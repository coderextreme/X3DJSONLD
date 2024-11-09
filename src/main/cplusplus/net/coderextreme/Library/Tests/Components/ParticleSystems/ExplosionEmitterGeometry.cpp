#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Core"));
X3D0.setVersion(CString("3.3"));
head& head1 =  head();
component& component2 =  component();
component2.setName(CString("EnvironmentalEffects"));
component2.setLevel(4);
head1.addChild(&component2);

component& component3 =  component();
component3.setName(CString("Navigation"));
component3.setLevel(3);
head1.addChild(&component3);

component& component4 =  component();
component4.setName(CString("ParticleSystems"));
component4.setLevel(3);
head1.addChild(&component4);

component& component5 =  component();
component5.setName(CString("Rendering"));
component5.setLevel(5);
head1.addChild(&component5);

component& component6 =  component();
component6.setName(CString("Shape"));
component6.setLevel(5);
head1.addChild(&component6);

component& component7 =  component();
component7.setName(CString("Geometry3D"));
component7.setLevel(4);
head1.addChild(&component7);

component& component8 =  component();
component8.setName(CString("Grouping"));
component8.setLevel(3);
head1.addChild(&component8);

component& component9 =  component();
component9.setName(CString("Layering"));
component9.setLevel(1);
head1.addChild(&component9);

component& component10 =  component();
component10.setName(CString("Text"));
component10.setLevel(1);
head1.addChild(&component10);

component& component11 =  component();
component11.setName(CString("Geometry2D"));
component11.setLevel(2);
head1.addChild(&component11);

component& component12 =  component();
component12.setName(CString("PointingDeviceSensor"));
component12.setLevel(1);
head1.addChild(&component12);

component& component13 =  component();
component13.setName(CString("Scripting"));
component13.setLevel(1);
head1.addChild(&component13);

component& component14 =  component();
component14.setName(CString("Time"));
component14.setLevel(2);
head1.addChild(&component14);

meta& meta15 =  meta();
meta15.setName(CString("created"));
meta15.setContent(CString("Fri, 30 Sep 2022 17:09:57 GMT"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(CString("comment"));
meta16.setContent(CString("World of Sunrise X3D Editor"));
head1.addMeta(&meta16);

meta& meta17 =  meta();
meta17.setName(CString("creator"));
meta17.setContent(CString("Holger Seelig"));
head1.addMeta(&meta17);

meta& meta18 =  meta();
meta18.setName(CString("generator"));
meta18.setContent(CString("Sunrise X3D Editor V1.0.0, https://create3000.github.io/Sunrise/"));
head1.addMeta(&meta18);

meta& meta19 =  meta();
meta19.setName(CString("identifier"));
meta19.setContent(CString("file:///Users/holger/Desktop/X_ITE/x_ite/src/tests/ExplosionEmitterGeometry.x3d"));
head1.addMeta(&meta19);

meta& meta20 =  meta();
meta20.setName(CString("modified"));
meta20.setContent(CString("Fri, 30 Sep 2022 18:26:37 GMT"));
head1.addMeta(&meta20);

X3D0.setHead(&head1);

Scene& Scene21 =  Scene();
LayerSet& LayerSet22 =  LayerSet();
LayerSet22.setActiveLayer(1);
LayerSet22.setOrder(new int32_t[]{0,1,2,3}, 4);
Layer& Layer23 =  Layer();
Background& Background24 =  Background();
Background24.setDEF(CString("Gray"));
Background24.setSkyColor(new float[]{0.2,0.2,0.2}, 3);
Layer23.addChild(&Background24);

Viewpoint& Viewpoint25 =  Viewpoint();
Viewpoint25.setDescription(CString("Viewpoint"));
Viewpoint25.setPosition(new float[]{0,20,55});
Layer23.addChild(&Viewpoint25);

ParticleSystem& ParticleSystem26 =  ParticleSystem();
ParticleSystem26.setDEF(CString("_1"));
ParticleSystem26.setGeometryType(CString("GEOMETRY"));
ParticleSystem26.setParticleLifetime(4);
ParticleSystem26.setLifetimeVariation(0.5);
ParticleSystem26.setParticleSize(new float[]{1,1});
ParticleSystem26.setColorKey(new float[]{0,0.2,0.5,0.7,0.8,1}, 6);
ExplosionEmitter& ExplosionEmitter27 =  ExplosionEmitter();
ExplosionEmitter27.setSpeed(0.5);
ExplosionEmitter27.setVariation(0.5);
ExplosionEmitter27.setMass(0.1);
ExplosionEmitter27.setSurfaceArea(0.1);
ParticleSystem26.setEmitter(ExplosionEmitter27);

WindPhysicsModel& WindPhysicsModel28 =  WindPhysicsModel();
WindPhysicsModel28.setDirection(new float[]{0,1,0});
WindPhysicsModel28.setSpeed(0.7);
WindPhysicsModel28.setGustiness(1.7);
WindPhysicsModel28.setTurbulence(0.3);
ParticleSystem26.addPhysics(WindPhysicsModel28);

WindPhysicsModel& WindPhysicsModel29 =  WindPhysicsModel();
WindPhysicsModel29.setSpeed(0.5);
WindPhysicsModel29.setGustiness(2);
ParticleSystem26.addPhysics(WindPhysicsModel29);

ColorRGBA& ColorRGBA30 =  ColorRGBA();
ColorRGBA30.setColor(new float[]{1,0.38,0,0,1,0.58,0.06,0.01,1,0.37,0,0.1,1,0.05,0,0,0,0,0,0.015,0,0,0,0}, 24);
ParticleSystem26.setColorRamp(ColorRGBA30);

Appearance& Appearance31 =  Appearance();
Material& Material32 =  Material();
Material32.setDiffuseColor(new float[]{0.403922,0.305882,0.654902});
Appearance31.addChild(&Material32);

ParticleSystem26.addChildren(&Appearance31);

Box& Box33 =  Box();
Box33.setSize(new float[]{1,1,1});
ParticleSystem26.setGeometry(&Box33);

Layer23.addChild(&ParticleSystem26);

Transform& Transform34 =  Transform();
Transform34.setDEF(CString("Box"));
Transform34.setTranslation(new float[]{-10,0,0});
Shape& Shape35 =  Shape();
Appearance& Appearance36 =  Appearance();
Material& Material37 =  Material();
Appearance36.addChild(&Material37);

Shape35.addChild(&Appearance36);

Box& Box38 =  Box();
Shape35.setGeometry(&Box38);

Transform34.addChild(&Shape35);

Layer23.addChild(&Transform34);

Transform& Transform39 =  Transform();
Transform39.setDEF(CString("IndexedLineSet"));
Shape& Shape40 =  Shape();
IndexedLineSet& IndexedLineSet41 =  IndexedLineSet();
IndexedLineSet41.setColorPerVertex(False);
IndexedLineSet41.setColorIndex(new int[]{0,1,2}, 3);
IndexedLineSet41.setCoordIndex(new int32_t[]{0,1,-1,2,3,-1,4,5,-1}, 9);
CColor& Color42 =  CColor();
Color42.setColor(new float[]{1,0,0,0,1,0,0,0,1}, 9);
IndexedLineSet41.setColor(&Color42);

Coordinate& Coordinate43 =  Coordinate();
Coordinate43.setPoint(new float[]{-1,0,0,1,0,0,0,-1,0,0,1,0,0,0,-1,0,0,1}, 18);
IndexedLineSet41.setCoord(&Coordinate43);

Shape40.setGeometry(&IndexedLineSet41);

Transform39.addChild(&Shape40);

Layer23.addChild(&Transform39);

LayerSet22.addChild(&Layer23);

Layer& Layer44 =  Layer();
OrthoViewpoint& OrthoViewpoint45 =  OrthoViewpoint();
Layer44.addChild(&OrthoViewpoint45);

Transform& Transform46 =  Transform();
Transform46.setDEF(CString("TransparencyText"));
Transform46.setTranslation(new float[]{1.675,-0.95,-0.00000349096});
Transform46.setScale(new float[]{0.0672307,0.0672307,0.0672307});
Shape& Shape47 =  Shape();
Appearance& Appearance48 =  Appearance();
Material& Material49 =  Material();
Material49.setEmissiveColor(new float[]{1,1,1});
Appearance48.addChild(&Material49);

Shape47.addChild(&Appearance48);

Text& Text50 =  Text();
Text50.setDEF(CString("_2"));
Text50.setString(new CString[]{CString("numParticles 200")}, 1);
Text50.setSolid(True);
CFontStyle& FontStyle51 =  CFontStyle();
FontStyle51.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle51.setJustify(new CString[]{CString("END")}, 1);
Text50.setFontStyle(&FontStyle51);

Shape47.setGeometry(&Text50);

Transform46.addChild(&Shape47);

Layer44.addChild(&Transform46);

Transform& Transform52 =  Transform();
Transform52.setDEF(CString("TransparancySlider"));
Transform52.setTranslation(new float[]{0.025,-0.923,-0.00000349096});
Transform52.setCenter(new float[]{0,-0.027,0});
Transform& Transform53 =  Transform();
Transform53.setDEF(CString("IndexedLineSet_1"));
Shape& Shape54 =  Shape();
Appearance& Appearance55 =  Appearance();
LineProperties& LineProperties56 =  LineProperties();
LineProperties56.setLinewidthScaleFactor(2);
Appearance55.setLineProperties(LineProperties56);

Material& Material57 =  Material();
Material57.setDEF(CString("Artdeco31"));
Material57.setEmissiveColor(new float[]{1,1,1});
Appearance55.addChild(&Material57);

Shape54.addChild(&Appearance55);

IndexedLineSet& IndexedLineSet58 =  IndexedLineSet();
IndexedLineSet58.setColorPerVertex(False);
IndexedLineSet58.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate59 =  Coordinate();
Coordinate59.setPoint(new float[]{0,0,0,1,0,0}, 6);
IndexedLineSet58.setCoord(&Coordinate59);

Shape54.setGeometry(&IndexedLineSet58);

Transform53.addChild(&Shape54);

Transform52.addChild(&Transform53);

Transform& Transform60 =  Transform();
Transform& Transform61 =  Transform();
Transform61.setDEF(CString("Rectangle2D"));
Transform61.setTranslation(new float[]{1,0,0});
Transform61.setScale(new float[]{0.027,0.0267372,0.0267372});
Shape& Shape62 =  Shape();
Appearance& Appearance63 =  Appearance();
Material& Material64 =  Material();
Material64.setEmissiveColor(new float[]{1,1,1});
Appearance63.addChild(&Material64);

Shape62.addChild(&Appearance63);

Disk2D& Disk2D65 =  Disk2D();
Shape62.setGeometry(Disk2D65);

Transform61.addChild(&Shape62);

Transform60.addChild(&Transform61);

PlaneSensor& PlaneSensor66 =  PlaneSensor();
PlaneSensor66.setDEF(CString("_3"));
PlaneSensor66.setOffset(new float[]{1,0,0});
PlaneSensor66.setMaxPosition(new float[]{1,0});
Transform60.addChild(&PlaneSensor66);

Transform52.addChild(&Transform60);

Group& Group67 =  Group();
Script& Script68 =  Script();
Script68.setDEF(CString("NumParticlesyScript"));
field& field69 =  field();
field69.setName(CString("set_translation"));
field69.setAccessType(CString("inputOnly"));
field69.setType(CString("SFVec3f"));
Script68.addChild(&field69);

field& field70 =  field();
field70.setName(CString("description"));
field70.setAccessType(CString("inputOutput"));
field70.setType(CString("SFString"));
field70.setValue(CString("numParticles"));
Script68.addChild(&field70);

field& field71 =  field();
field71.setName(CString("minValue"));
field71.setAccessType(CString("inputOutput"));
field71.setType(CString("SFInt32"));
Script68.addChild(&field71);

field& field72 =  field();
field72.setName(CString("maxValue"));
field72.setAccessType(CString("inputOutput"));
field72.setType(CString("SFInt32"));
field72.setValue(CString("200"));
Script68.addChild(&field72);

field& field73 =  field();
field73.setName(CString("value_changed"));
field73.setAccessType(CString("outputOnly"));
field73.setType(CString("SFInt32"));
Script68.addChild(&field73);

field& field74 =  field();
field74.setName(CString("string_changed"));
field74.setAccessType(CString("outputOnly"));
field74.setType(CString("MFString"));
Script68.addChild(&field74);

field& field75 =  field();
field75.setName(CString("currentValue"));
field75.setAccessType(CString("initializeOnly"));
field75.setType(CString("SFInt32"));
field75.setValue(CString("200"));
Script68.addChild(&field75);


Script68.setSourceCode(CString("ecmascript:")+
_T("function initialized ()")+
_T("{")+
_T("	set_value (value);")+
_T("}")+
_T("function set_translation (value)")+
_T("{")+
_T("	set_value (minValue + (value .x * (maxValue - minValue)));")+
_T("}")+
_T("function set_value (value)")+
_T("{")+
_T("	var rounded = value .toFixed (0);")+
_T("	if (rounded == currentValue)")+
_T("		return;")+
_T("	currentValue       = rounded;")+
_T("	string_changed [0] = description + \" \" + rounded;")+
_T("	value_changed      = rounded;")+
_T("}"));
Group67.addChild(&Script68);

Transform52.addChild(&Group67);

Switch& Switch76 =  Switch();
Switch76.setWhichChoice(-1);
Transform& Transform77 =  Transform();
Transform77.setDEF(CString("Rectangle2D_1"));
Transform77.setTranslation(new float[]{-0.075,0,0});
Transform77.setScale(new float[]{0.025,0.0247567,0.0247567});
Shape& Shape78 =  Shape();
Appearance& Appearance79 =  Appearance();
Material& Material80 =  Material();
Material80.setEmissiveColor(new float[]{1,1,1});
Appearance79.addChild(&Material80);

Shape78.addChild(&Appearance79);

Rectangle2D& Rectangle2D81 =  Rectangle2D();
Shape78.setGeometry(Rectangle2D81);

Transform77.addChild(&Shape78);

TouchSensor& TouchSensor82 =  TouchSensor();
TouchSensor82.setDEF(CString("_4"));
TouchSensor82.setDescription(CString("Toggle Animation"));
Transform77.addChild(&TouchSensor82);

Script& Script83 =  Script();
Script83.setDEF(CString("ToggleTransparencyAnim"));
field& field84 =  field();
field84.setName(CString("set_touchTime"));
field84.setAccessType(CString("inputOnly"));
field84.setType(CString("SFTime"));
Script83.addChild(&field84);

field& field85 =  field();
field85.setName(CString("timer"));
field85.setAccessType(CString("initializeOnly"));
field85.setType(CString("SFNode"));
TimeSensor& TimeSensor86 =  TimeSensor();
TimeSensor86.setCycleInterval(6.8);
TimeSensor86.setLoop(True);
TimeSensor86.setStartTime(1451028308.5169);
TimeSensor86.setResumeTime(1451028223.75739);
TimeSensor86.setPauseTime(1451028247.50596);
TimeSensor86.setStopTime(1451028309.80616);
field85.addChild(&TimeSensor86);

Script83.addChild(&field85);


Script83.setSourceCode(CString("ecmascript:")+
_T("function set_touchTime (value, time)")+
_T("{")+
_T("	if (timer .isActive)")+
_T("	{")+
_T("		if (timer .isPaused)")+
_T("			timer .resumeTime = time;")+
_T("		else")+
_T("			timer .pauseTime = time;")+
_T("	}")+
_T("	else")+
_T("		timer .startTime = time;")+
_T("}"));
Transform77.addChild(&Script83);

Switch76.addChild(&Transform77);

Transform52.addChild(&Switch76);

Layer44.addChild(&Transform52);

LayerSet22.addChild(&Layer44);

Scene21.addChild(&LayerSet22);

ROUTE& ROUTE87 =  ROUTE();
ROUTE87.setFromNode(CString("NumParticlesyScript"));
ROUTE87.setFromField(CString("value_changed"));
ROUTE87.setToNode(CString("_1"));
ROUTE87.setToField(CString("set_maxParticles"));
Scene21.addChild(&ROUTE87);

ROUTE& ROUTE88 =  ROUTE();
ROUTE88.setFromNode(CString("NumParticlesyScript"));
ROUTE88.setFromField(CString("string_changed"));
ROUTE88.setToNode(CString("_2"));
ROUTE88.setToField(CString("set_string"));
Scene21.addChild(&ROUTE88);

ROUTE& ROUTE89 =  ROUTE();
ROUTE89.setFromNode(CString("_3"));
ROUTE89.setFromField(CString("translation_changed"));
ROUTE89.setToNode(CString("Rectangle2D"));
ROUTE89.setToField(CString("set_translation"));
Scene21.addChild(&ROUTE89);

ROUTE& ROUTE90 =  ROUTE();
ROUTE90.setFromNode(CString("_3"));
ROUTE90.setFromField(CString("translation_changed"));
ROUTE90.setToNode(CString("NumParticlesyScript"));
ROUTE90.setToField(CString("set_translation"));
Scene21.addChild(&ROUTE90);

ROUTE& ROUTE91 =  ROUTE();
ROUTE91.setFromNode(CString("_4"));
ROUTE91.setFromField(CString("touchTime"));
ROUTE91.setToNode(CString("ToggleTransparencyAnim"));
ROUTE91.setToField(CString("set_touchTime"));
Scene21.addChild(&ROUTE91);

X3D0.setScene(&Scene21);

}
