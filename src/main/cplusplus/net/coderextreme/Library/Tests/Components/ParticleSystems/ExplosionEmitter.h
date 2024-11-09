//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
MFInt32 MFInt320 =  MFInt32();
MFInt320.setValue(1, new int32_t[]{68});
MFInt32 MFInt321 =  MFInt32();
MFInt321.setValue(1, new int32_t[]{10});
MFInt32 MFInt322 =  MFInt32();
MFInt322.setValue(3, new int32_t[]{0, 34, 68});
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Interchange"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
component& component2 =  component();
component2.setName(CString("Geometry2D"));
component2.setLevel(2);
head1.addChild(&component2);

component& component3 =  component();
component3.setName(CString("Layering"));
component3.setLevel(1);
head1.addChild(&component3);

component& component4 =  component();
component4.setName(CString("ParticleSystems"));
component4.setLevel(3);
head1.addChild(&component4);

component& component5 =  component();
component5.setName(CString("PointingDeviceSensor"));
component5.setLevel(1);
head1.addChild(&component5);

component& component6 =  component();
component6.setName(CString("Scripting"));
component6.setLevel(1);
head1.addChild(&component6);

component& component7 =  component();
component7.setName(CString("Text"));
component7.setLevel(1);
head1.addChild(&component7);

meta& meta8 =  meta();
meta8.setName(CString("comment"));
meta8.setContent(CString("World of Titania"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("created"));
meta9.setContent(CString("Fri, 22 Apr 2016 03:51:27 GMT"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("creator"));
meta10.setContent(CString("Holger Seelig"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("generator"));
meta11.setContent(CString("Titania V1.4.1, http://titania.create3000.de"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("generator"));
meta12.setContent(CString("Sunrize X3D Editor V1.6.11, https://create3000.github.io/sunrize/"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("identifier"));
meta13.setContent(CString("file:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/ExplosionEmitter.x3d"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("modified"));
meta14.setContent(CString("Tue, 30 Apr 2024 04:23:56 GMT"));
head1.addMeta(&meta14);

X3D0.setHead(&head1);

Scene& Scene15 =  Scene();
ExternProtoDeclare& ExternProtoDeclare16 =  ExternProtoDeclare();
ExternProtoDeclare16.setName(CString("Grid"));
ExternProtoDeclare16.setUrl(new CString[]{CString(", "), CString("GridTool.x3dv#Gridfile:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/GridTool.x3dv#Grid")}, 2);
field& field17 =  field();
field17.setName(CString("translation"));
field17.setAccessType(CString("inputOutput"));
field17.setType(CString("SFVec3f"));
ExternProtoDeclare16.addChild(&field17);

field& field18 =  field();
field18.setName(CString("rotation"));
field18.setAccessType(CString("inputOutput"));
field18.setType(CString("SFRotation"));
ExternProtoDeclare16.addChild(&field18);

field& field19 =  field();
field19.setName(CString("scale"));
field19.setAccessType(CString("inputOutput"));
field19.setType(CString("SFVec3f"));
ExternProtoDeclare16.addChild(&field19);

field& field20 =  field();
field20.setName(CString("dimension"));
field20.setAccessType(CString("inputOutput"));
field20.setType(CString("MFInt32"));
ExternProtoDeclare16.addChild(&field20);

field& field21 =  field();
field21.setName(CString("majorLineEvery"));
field21.setAccessType(CString("inputOutput"));
field21.setType(CString("MFInt32"));
ExternProtoDeclare16.addChild(&field21);

field& field22 =  field();
field22.setName(CString("majorLineOffset"));
field22.setAccessType(CString("inputOutput"));
field22.setType(CString("MFInt32"));
ExternProtoDeclare16.addChild(&field22);

field& field23 =  field();
field23.setName(CString("color"));
field23.setAccessType(CString("inputOutput"));
field23.setType(CString("SFColor"));
ExternProtoDeclare16.addChild(&field23);

field& field24 =  field();
field24.setName(CString("transparency"));
field24.setAccessType(CString("inputOutput"));
field24.setType(CString("SFFloat"));
ExternProtoDeclare16.addChild(&field24);

field& field25 =  field();
field25.setName(CString("lineColor"));
field25.setAccessType(CString("inputOutput"));
field25.setType(CString("SFColor"));
ExternProtoDeclare16.addChild(&field25);

field& field26 =  field();
field26.setName(CString("lineTransparency"));
field26.setAccessType(CString("inputOutput"));
field26.setType(CString("SFFloat"));
ExternProtoDeclare16.addChild(&field26);

field& field27 =  field();
field27.setName(CString("majorLineColor"));
field27.setAccessType(CString("inputOutput"));
field27.setType(CString("SFColor"));
ExternProtoDeclare16.addChild(&field27);

field& field28 =  field();
field28.setName(CString("majorLineTransparency"));
field28.setAccessType(CString("inputOutput"));
field28.setType(CString("SFFloat"));
ExternProtoDeclare16.addChild(&field28);

field& field29 =  field();
field29.setName(CString("solid"));
field29.setAccessType(CString("initializeOnly"));
field29.setType(CString("SFBool"));
ExternProtoDeclare16.addChild(&field29);

Scene15.addChild(&ExternProtoDeclare16);

LayerSet& LayerSet30 =  LayerSet();
LayerSet30.setActiveLayer(1);
LayerSet30.setOrder(new int32_t[]{0,1,2,3}, 4);
Layer& Layer31 =  Layer();
Layer31.setPickable(true);
Layer31.setObjectType(new CString[]{CString("ALL")}, 1);
Background& Background32 =  Background();
Background32.setDEF(CString("Gray"));
Background32.setSkyColor(new float[]{0.2,0.2,0.2}, 3);
Layer31.addChild(&Background32);

Viewpoint& Viewpoint33 =  Viewpoint();
Viewpoint33.setDescription(CString("Viewpoint"));
Viewpoint33.setPosition(new float[]{0.0,20.0,55.0});
Layer31.addChild(&Viewpoint33);

ParticleSystem& ParticleSystem34 =  ParticleSystem();
ParticleSystem34.setDEF(CString("_1"));
ParticleSystem34.setGeometryType(CString("POINT"));
ParticleSystem34.setMaxParticles(2000);
ParticleSystem34.setParticleLifetime(4);
ParticleSystem34.setLifetimeVariation(0.5);
ParticleSystem34.setParticleSize(new float[]{1.0,1.0});
ParticleSystem34.setColorKey(new float[]{0.0,0.2,0.5,0.7,0.8,1.0}, 6);
ExplosionEmitter& ExplosionEmitter35 =  ExplosionEmitter();
ExplosionEmitter35.setSpeed(0.5);
ExplosionEmitter35.setVariation(0.5);
ExplosionEmitter35.setMass(0.1);
ExplosionEmitter35.setSurfaceArea(0.1);
ParticleSystem34.setEmitter(ExplosionEmitter35);

WindPhysicsModel& WindPhysicsModel36 =  WindPhysicsModel();
WindPhysicsModel36.setDirection(new float[]{0.0,1.0,0.0});
WindPhysicsModel36.setSpeed(0.7);
WindPhysicsModel36.setGustiness(1.7);
WindPhysicsModel36.setTurbulence(0.3);
ParticleSystem34.addPhysics(WindPhysicsModel36);

WindPhysicsModel& WindPhysicsModel37 =  WindPhysicsModel();
WindPhysicsModel37.setSpeed(0.5);
WindPhysicsModel37.setGustiness(2);
ParticleSystem34.addPhysics(WindPhysicsModel37);

ColorRGBA& ColorRGBA38 =  ColorRGBA();
ColorRGBA38.setColor(new float[]{1.0,0.38,0.0,0.0,1.0,0.58,0.06,0.01,1.0,0.37,0.0,0.1,1.0,0.05,0.0,0.0,0.0,0.0,0.0,0.015,0.0,0.0,0.0,0.0}, 24);
ParticleSystem34.addChild(&ColorRGBA38);

Appearance& Appearance39 =  Appearance();
PointProperties& PointProperties40 =  PointProperties();
PointProperties40.setPointSizeScaleFactor(10);
PointProperties40.setPointSizeMinValue(10);
PointProperties40.setPointSizeMaxValue(10);
Appearance39.setPointProperties(PointProperties40);

ParticleSystem34.addChildren(&Appearance39);

Layer31.addChild(&ParticleSystem34);

Transform& Transform41 =  Transform();
Transform41.setDEF(CString("IndexedLineSet"));
Shape& Shape42 =  Shape();
IndexedLineSet& IndexedLineSet43 =  IndexedLineSet();
IndexedLineSet43.setColorPerVertex(false);
IndexedLineSet43.setColorIndex(new int[]{0,1,2}, 3);
IndexedLineSet43.setCoordIndex(new int32_t[]{0,1,-1,2,3,-1,4,5,-1}, 9);
CColor& Color44 =  CColor();
Color44.setColor(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0}, 9);
IndexedLineSet43.setColor(&Color44);

Coordinate& Coordinate45 =  Coordinate();
Coordinate45.setPoint(new float[]{-1.0,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,0.0,0.0,1.0}, 18);
IndexedLineSet43.setCoord(&Coordinate45);

Shape42.setGeometry(&IndexedLineSet43);

Transform41.addChild(&Shape42);

Layer31.addChild(&Transform41);

LayerSet30.addChild(&Layer31);

Layer& Layer46 =  Layer();
Layer46.setPickable(true);
Layer46.setObjectType(new CString[]{CString("ALL")}, 1);
OrthoViewpoint& OrthoViewpoint47 =  OrthoViewpoint();
Layer46.addChild(&OrthoViewpoint47);

Transform& Transform48 =  Transform();
Transform48.setDEF(CString("TransparencyText"));
Transform48.setTranslation(new float[]{1.675,-0.95,-0.00000349096});
Transform48.setScale(new float[]{0.0672307,0.0672307,0.0672307});
Shape& Shape49 =  Shape();
Appearance& Appearance50 =  Appearance();
Material& Material51 =  Material();
Material51.setEmissiveColor(new float[]{1.0,1.0,1.0});
Appearance50.addChild(&Material51);

Shape49.addChild(&Appearance50);

Text& Text52 =  Text();
Text52.setDEF(CString("_2"));
Text52.setString(new CString[]{CString("numParticles 2337")}, 1);
Text52.setSolid(true);
CFontStyle& FontStyle53 =  CFontStyle();
FontStyle53.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle53.setJustify(new CString[]{CString("END")}, 1);
Text52.setFontStyle(&FontStyle53);

Shape49.setGeometry(&Text52);

Transform48.addChild(&Shape49);

Layer46.addChild(&Transform48);

Transform& Transform54 =  Transform();
Transform54.setDEF(CString("TransparancySlider"));
Transform54.setTranslation(new float[]{0.025,-0.923,-0.00000349096});
Transform54.setCenter(new float[]{0.0,-0.027,0.0});
Transform& Transform55 =  Transform();
Transform55.setDEF(CString("IndexedLineSet_1"));
Shape& Shape56 =  Shape();
Appearance& Appearance57 =  Appearance();
LineProperties& LineProperties58 =  LineProperties();
LineProperties58.setLinewidthScaleFactor(2);
Appearance57.setLineProperties(LineProperties58);

Material& Material59 =  Material();
Material59.setDEF(CString("Artdeco31"));
Material59.setEmissiveColor(new float[]{1.0,1.0,1.0});
Appearance57.addChild(&Material59);

Shape56.addChild(&Appearance57);

IndexedLineSet& IndexedLineSet60 =  IndexedLineSet();
IndexedLineSet60.setColorPerVertex(false);
IndexedLineSet60.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate61 =  Coordinate();
Coordinate61.setPoint(new float[]{0.0,0.0,0.0,1.0,0.0,0.0}, 6);
IndexedLineSet60.setCoord(&Coordinate61);

Shape56.setGeometry(&IndexedLineSet60);

Transform55.addChild(&Shape56);

Transform54.addChild(&Transform55);

Transform& Transform62 =  Transform();
Transform& Transform63 =  Transform();
Transform63.setDEF(CString("Rectangle2D"));
Transform63.setTranslation(new float[]{0.0584318,0.0,0.0});
Transform63.setScale(new float[]{0.027,0.0267372,0.0267372});
Shape& Shape64 =  Shape();
Appearance& Appearance65 =  Appearance();
Material& Material66 =  Material();
Material66.setEmissiveColor(new float[]{1.0,1.0,1.0});
Appearance65.addChild(&Material66);

Shape64.addChild(&Appearance65);

Disk2D& Disk2D67 =  Disk2D();
Shape64.setGeometry(Disk2D67);

Transform63.addChild(&Shape64);

Transform62.addChild(&Transform63);

PlaneSensor& PlaneSensor68 =  PlaneSensor();
PlaneSensor68.setDEF(CString("_3"));
PlaneSensor68.setOffset(new float[]{0.0584318,0.0,0.0});
PlaneSensor68.setMaxPosition(new float[]{1.0,0.0});
Transform62.addChild(&PlaneSensor68);

Transform54.addChild(&Transform62);

Group& Group69 =  Group();
Group& Group70 =  Group();
Group70.setDEF(CString("Animation"));
MetadataSet& MetadataSet71 =  MetadataSet();
MetadataSet71.X3DNode::setName(CString("Animation"));
MetadataSet71.setDEF(CString("Animation_1"));
MetadataSet71.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger& MetadataInteger72 =  MetadataInteger();
MetadataInteger72.X3DNode::setName(CString("duration"));
MetadataInteger72.setDEF(CString("duration"));
MetadataInteger72.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger72.setValue(MFInt320);
MetadataSet71.setValue((X3DNode *)&MetadataInteger72);

MetadataInteger& MetadataInteger73 =  MetadataInteger();
MetadataInteger73.X3DNode::setName(CString("framesPerSecond"));
MetadataInteger73.setDEF(CString("framesPerSecond"));
MetadataInteger73.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger73.setValue(MFInt321);
MetadataSet71.setValue((X3DNode *)&MetadataInteger73);

Group70.setMetadata(&MetadataSet71);

TimeSensor& TimeSensor74 =  TimeSensor();
TimeSensor74.setDEF(CString("_4"));
TimeSensor74.setCycleInterval(6.8);
TimeSensor74.setLoop(true);
TimeSensor74.setStartTime(1451028308.5169);
TimeSensor74.setResumeTime(1451028223.75739);
TimeSensor74.setPauseTime(1451028247.50596);
TimeSensor74.setStopTime(1451028309.80616);
Group70.addChild(&TimeSensor74);

PositionInterpolator& PositionInterpolator75 =  PositionInterpolator();
PositionInterpolator75.setDEF(CString("pointSizeScriptSet_translationInterpolator"));
PositionInterpolator75.setKey(new float[]{0.0,0.0147059,0.0294118,0.0441176,0.0588235,0.0735294,0.0882353,0.102941,0.117647,0.132353,0.147059,0.161765,0.176471,0.191176,0.205882,0.220588,0.235294,0.25,0.264706,0.279412,0.294118,0.308824,0.323529,0.338235,0.352941,0.367647,0.382353,0.397059,0.411765,0.426471,0.441176,0.455882,0.470588,0.485294,0.5,0.514706,0.529412,0.544118,0.558824,0.573529,0.588235,0.602941,0.617647,0.632353,0.647059,0.661765,0.676471,0.691176,0.705882,0.720588,0.735294,0.75,0.764706,0.779412,0.794118,0.808824,0.823529,0.838235,0.852941,0.867647,0.882353,0.897059,0.911765,0.926471,0.941176,0.955882,0.970588,0.985294,1.0}, 69);
PositionInterpolator75.setKeyValue(new float[]{0.200605,0.0,0.0,0.202642,0.0,0.0,0.208588,0.0,0.0,0.2182,0.0,0.0,0.231232,0.0,0.0,0.247441,0.0,0.0,0.266581,0.0,0.0,0.288408,0.0,0.0,0.312679,0.0,0.0,0.339147,0.0,0.0,0.367569,0.0,0.0,0.3977,0.0,0.0,0.429295,0.0,0.0,0.462111,0.0,0.0,0.495902,0.0,0.0,0.530424,0.0,0.0,0.565432,0.0,0.0,0.600683,0.0,0.0,0.63593,0.0,0.0,0.670931,0.0,0.0,0.70544,0.0,0.0,0.739212,0.0,0.0,0.772004,0.0,0.0,0.803571,0.0,0.0,0.833668,0.0,0.0,0.86205,0.0,0.0,0.888474,0.0,0.0,0.912694,0.0,0.0,0.934466,0.0,0.0,0.953546,0.0,0.0,0.969689,0.0,0.0,0.98265,0.0,0.0,0.992186,0.0,0.0,0.99805,0.0,0.0,1.0,0.0,0.0,0.997866,0.0,0.0,0.991808,0.0,0.0,0.982071,0.0,0.0,0.968899,0.0,0.0,0.95254,0.0,0.0,0.933237,0.0,0.0,0.911238,0.0,0.0,0.886786,0.0,0.0,0.860128,0.0,0.0,0.831508,0.0,0.0,0.801174,0.0,0.0,0.769369,0.0,0.0,0.736339,0.0,0.0,0.70233,0.0,0.0,0.667588,0.0,0.0,0.632357,0.0,0.0,0.596883,0.0,0.0,0.561412,0.0,0.0,0.526189,0.0,0.0,0.49146,0.0,0.0,0.457469,0.0,0.0,0.424463,0.0,0.0,0.392687,0.0,0.0,0.362387,0.0,0.0,0.333807,0.0,0.0,0.307193,0.0,0.0,0.282792,0.0,0.0,0.260847,0.0,0.0,0.241605,0.0,0.0,0.225311,0.0,0.0,0.212211,0.0,0.0,0.20255,0.0,0.0,0.196573,0.0,0.0,0.194526,0.0,0.0}, 207);
MetadataSet& MetadataSet76 =  MetadataSet();
MetadataSet76.X3DNode::setName(CString("Interpolator"));
MetadataSet76.setDEF(CString("Interpolator"));
MetadataSet76.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger& MetadataInteger77 =  MetadataInteger();
MetadataInteger77.X3DNode::setName(CString("key"));
MetadataInteger77.setDEF(CString("key"));
MetadataInteger77.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger77.setValue(MFInt322);
MetadataSet76.setValue((X3DNode *)&MetadataInteger77);

MetadataDouble& MetadataDouble78 =  MetadataDouble();
MetadataDouble78.X3DNode::setName(CString("keyValue"));
MetadataDouble78.setDEF(CString("keyValue"));
MetadataDouble78.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble78.setValue(new double[]{0.20060533285141,0.0,0.0,1.0,0.0,0.0,0.194526299834251,0.0,0.0}, 9);
MetadataSet76.setValue((X3DNode *)&MetadataDouble78);

MetadataString& MetadataString79 =  MetadataString();
MetadataString79.X3DNode::setName(CString("keyType"));
MetadataString79.setDEF(CString("keyType"));
MetadataString79.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString79.setValue(new CString[]{CString(", "), CString("SPLINE, "), CString("SPLINESPLINE")}, 3);
MetadataSet76.setValue((X3DNode *)&MetadataString79);

PositionInterpolator75.setMetadata(&MetadataSet76);

Group70.addChild(&PositionInterpolator75);

Group69.addChild(&Group70);

Script& Script80 =  Script();
Script80.setDEF(CString("NumParticlesyScript"));
field& field81 =  field();
field81.setName(CString("set_translation"));
field81.setAccessType(CString("inputOnly"));
field81.setType(CString("SFVec3f"));
Script80.addChild(&field81);

field& field82 =  field();
field82.setName(CString("description"));
field82.setAccessType(CString("inputOutput"));
field82.setType(CString("SFString"));
field82.setValue(CString("numParticles"));
Script80.addChild(&field82);

field& field83 =  field();
field83.setName(CString("minValue"));
field83.setAccessType(CString("inputOutput"));
field83.setType(CString("SFInt32"));
Script80.addChild(&field83);

field& field84 =  field();
field84.setName(CString("maxValue"));
field84.setAccessType(CString("inputOutput"));
field84.setType(CString("SFInt32"));
field84.setValue(CString("40000"));
Script80.addChild(&field84);

field& field85 =  field();
field85.setName(CString("value_changed"));
field85.setAccessType(CString("outputOnly"));
field85.setType(CString("SFInt32"));
Script80.addChild(&field85);

field& field86 =  field();
field86.setName(CString("string_changed"));
field86.setAccessType(CString("outputOnly"));
field86.setType(CString("MFString"));
Script80.addChild(&field86);

field& field87 =  field();
field87.setName(CString("currentValue"));
field87.setAccessType(CString("initializeOnly"));
field87.setType(CString("SFInt32"));
field87.setValue(CString("2000"));
Script80.addChild(&field87);


//Script80.setSourceCode(CString("ecmascript:")+
//_T("function initialized ()")+
//_T("{")+
//_T("	set_value (value);")+
//_T("}")+
//_T("function set_translation (value)")+
//_T("{")+
//_T("	set_value (minValue + (value .x * (maxValue - minValue)));")+
//_T("}")+
//_T("function set_value (value)")+
//_T("{")+
//_T("	var rounded = value .toFixed (0);")+
//_T("	if (rounded == currentValue)")+
//_T("		return;")+
//_T("	currentValue       = rounded;")+
//_T("	string_changed [0] = description + \" \" + rounded;")+
//_T("	value_changed      = rounded;")+
//_T("}"));
Group69.addChild(&Script80);

Transform54.addChild(&Group69);

Switch& Switch88 =  Switch();
Switch88.setWhichChoice(-1);
Transform& Transform89 =  Transform();
Transform89.setDEF(CString("Rectangle2D_1"));
Transform89.setTranslation(new float[]{-0.075,0.0,0.0});
Transform89.setScale(new float[]{0.025,0.0247567,0.0247567});
Shape& Shape90 =  Shape();
Appearance& Appearance91 =  Appearance();
Material& Material92 =  Material();
Material92.setEmissiveColor(new float[]{1.0,1.0,1.0});
Appearance91.addChild(&Material92);

Shape90.addChild(&Appearance91);

Rectangle2D& Rectangle2D93 =  Rectangle2D();
Shape90.setGeometry(Rectangle2D93);

Transform89.addChild(&Shape90);

TouchSensor& TouchSensor94 =  TouchSensor();
TouchSensor94.setDEF(CString("_5"));
TouchSensor94.setDescription(CString("Toggle Animation"));
Transform89.addChild(&TouchSensor94);

Script& Script95 =  Script();
Script95.setDEF(CString("ToggleTransparencyAnim"));
field& field96 =  field();
field96.setName(CString("set_touchTime"));
field96.setAccessType(CString("inputOnly"));
field96.setType(CString("SFTime"));
Script95.addChild(&field96);

field& field97 =  field();
field97.setName(CString("timer"));
field97.setAccessType(CString("initializeOnly"));
field97.setType(CString("SFNode"));
TimeSensor& TimeSensor98 =  TimeSensor();
TimeSensor98.setUSE(CString("_4"));
field97.addChild(&TimeSensor98);

Script95.addChild(&field97);


//Script95.setSourceCode(CString("ecmascript:")+
//_T("function set_touchTime (value, time)")+
//_T("{")+
//_T("	if (timer .isActive)")+
//_T("	{")+
//_T("		if (timer .isPaused)")+
//_T("			timer .resumeTime = time;")+
//_T("		else")+
//_T("			timer .pauseTime = time;")+
//_T("	}")+
//_T("	else")+
//_T("		timer .startTime = time;")+
//_T("}"));
Transform89.addChild(&Script95);

Switch88.addChild(&Transform89);

Transform54.addChild(&Switch88);

Layer46.addChild(&Transform54);

LayerSet30.addChild(&Layer46);

Scene15.addChild(&LayerSet30);

ROUTE& ROUTE99 =  ROUTE();
ROUTE99.setFromNode(CString("_4"));
ROUTE99.setFromField(CString("fraction_changed"));
ROUTE99.setToNode(CString("pointSizeScriptSet_translationInterpolator"));
ROUTE99.setToField(CString("set_fraction"));
Scene15.addChild(&ROUTE99);

ROUTE& ROUTE100 =  ROUTE();
ROUTE100.setFromNode(CString("pointSizeScriptSet_translationInterpolator"));
ROUTE100.setFromField(CString("value_changed"));
ROUTE100.setToNode(CString("Rectangle2D"));
ROUTE100.setToField(CString("set_translation"));
Scene15.addChild(&ROUTE100);

ROUTE& ROUTE101 =  ROUTE();
ROUTE101.setFromNode(CString("pointSizeScriptSet_translationInterpolator"));
ROUTE101.setFromField(CString("value_changed"));
ROUTE101.setToNode(CString("NumParticlesyScript"));
ROUTE101.setToField(CString("set_translation"));
Scene15.addChild(&ROUTE101);

ROUTE& ROUTE102 =  ROUTE();
ROUTE102.setFromNode(CString("_5"));
ROUTE102.setFromField(CString("touchTime"));
ROUTE102.setToNode(CString("ToggleTransparencyAnim"));
ROUTE102.setToField(CString("set_touchTime"));
Scene15.addChild(&ROUTE102);

ROUTE& ROUTE103 =  ROUTE();
ROUTE103.setFromNode(CString("_3"));
ROUTE103.setFromField(CString("translation_changed"));
ROUTE103.setToNode(CString("NumParticlesyScript"));
ROUTE103.setToField(CString("set_translation"));
Scene15.addChild(&ROUTE103);

ROUTE& ROUTE104 =  ROUTE();
ROUTE104.setFromNode(CString("_3"));
ROUTE104.setFromField(CString("translation_changed"));
ROUTE104.setToNode(CString("Rectangle2D"));
ROUTE104.setToField(CString("set_translation"));
Scene15.addChild(&ROUTE104);

ROUTE& ROUTE105 =  ROUTE();
ROUTE105.setFromNode(CString("pointSizeScriptSet_translationInterpolator"));
ROUTE105.setFromField(CString("value_changed"));
ROUTE105.setToNode(CString("_3"));
ROUTE105.setToField(CString("set_offset"));
Scene15.addChild(&ROUTE105);

ROUTE& ROUTE106 =  ROUTE();
ROUTE106.setFromNode(CString("NumParticlesyScript"));
ROUTE106.setFromField(CString("string_changed"));
ROUTE106.setToNode(CString("_2"));
ROUTE106.setToField(CString("set_string"));
Scene15.addChild(&ROUTE106);

ROUTE& ROUTE107 =  ROUTE();
ROUTE107.setFromNode(CString("NumParticlesyScript"));
ROUTE107.setFromField(CString("value_changed"));
ROUTE107.setToNode(CString("_1"));
ROUTE107.setToField(CString("set_maxParticles"));
Scene15.addChild(&ROUTE107);

X3D0.setScene(&Scene15);

//}
