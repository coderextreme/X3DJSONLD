//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Interchange"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
component& component2 =  component();
component2.setName(CString("ParticleSystems"));
component2.setLevel(3);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(CString("comment"));
meta3.setContent(CString("World of Titania"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("created"));
meta4.setContent(CString("Sat, 30 Apr 2016 02:18:39 GMT"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("creator"));
meta5.setContent(CString("holger"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("creator"));
meta6.setContent(CString("Holger Seelig"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("generator"));
meta7.setContent(CString("Titania V1.4.2, http://titania.create3000.de"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("generator"));
meta8.setContent(CString("Sunrize X3D Editor V1.6.10, https://create3000.github.io/sunrize/"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("identifier"));
meta9.setContent(CString("file:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/DolphinPointSurfaceEmitter.x3d"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("modified"));
meta10.setContent(CString("Mon, 22 Apr 2024 19:51:08 GMT"));
head1.addMeta(&meta10);

X3D0.setHead(&head1);

Scene& Scene11 =  Scene();
ExternProtoDeclare& ExternProtoDeclare12 =  ExternProtoDeclare();
ExternProtoDeclare12.setName(CString("Dolphin"));
ExternProtoDeclare12.setUrl(new CString[]{CString(", "), CString("Dolphin.x3d#Dolphinfile:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/Dolphin.x3d#Dolphin")}, 2);
field& field13 =  field();
field13.setName(CString("set_fraction"));
field13.setAccessType(CString("inputOnly"));
field13.setType(CString("SFFloat"));
ExternProtoDeclare12.addChild(&field13);

field& field14 =  field();
field14.setName(CString("solid"));
field14.setAccessType(CString("initializeOnly"));
field14.setType(CString("SFBool"));
ExternProtoDeclare12.addChild(&field14);

Scene11.addChild(&ExternProtoDeclare12);

WorldInfo& WorldInfo15 =  WorldInfo();
MetadataSet& MetadataSet16 =  MetadataSet();
MetadataSet16.X3DNode::setName(CString("Titania"));
MetadataSet16.setDEF(CString("Titania"));
MetadataSet16.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet17 =  MetadataSet();
MetadataSet17.X3DNode::setName(CString("AngleGrid"));
MetadataSet17.setDEF(CString("AngleGrid"));
MetadataSet17.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean18 =  MetadataBoolean();
MetadataBoolean18.X3DNode::setName(CString("enabled"));
MetadataBoolean18.setDEF(CString("enabled"));
MetadataBoolean18.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean18.setValue(new boolean[]{false});
MetadataSet17.setValue((X3DNode *)&MetadataBoolean18);

MetadataSet16.setValue((X3DNode *)&MetadataSet17);

MetadataSet& MetadataSet19 =  MetadataSet();
MetadataSet19.X3DNode::setName(CString("Grid"));
MetadataSet19.setDEF(CString("Grid"));
MetadataSet19.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean20 =  MetadataBoolean();
MetadataBoolean20.X3DNode::setName(CString("enabled"));
MetadataBoolean20.setDEF(CString("enabled_1"));
MetadataBoolean20.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean20.setValue(new boolean[]{true});
MetadataSet19.setValue((X3DNode *)&MetadataBoolean20);

MetadataSet16.setValue((X3DNode *)&MetadataSet19);

MetadataSet& MetadataSet21 =  MetadataSet();
MetadataSet21.X3DNode::setName(CString("NavigationInfo"));
MetadataSet21.setDEF(CString("NavigationInfo"));
MetadataSet21.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString& MetadataString22 =  MetadataString();
MetadataString22.X3DNode::setName(CString("type"));
MetadataString22.setDEF(CString("type"));
MetadataString22.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString22.setValue(new CString[]{CString("EXAMINE")}, 1);
MetadataSet21.setValue((X3DNode *)&MetadataString22);

MetadataSet16.setValue((X3DNode *)&MetadataSet21);

MetadataSet& MetadataSet23 =  MetadataSet();
MetadataSet23.X3DNode::setName(CString("Viewpoint"));
MetadataSet23.setDEF(CString("Viewpoint"));
MetadataSet23.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble24 =  MetadataDouble();
MetadataDouble24.X3DNode::setName(CString("position"));
MetadataDouble24.setDEF(CString("position"));
MetadataDouble24.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble24.setValue(new double[]{235.02507019043,-304.458618164062,206.560821533203}, 3);
MetadataSet23.setValue((X3DNode *)&MetadataDouble24);

MetadataDouble& MetadataDouble25 =  MetadataDouble();
MetadataDouble25.X3DNode::setName(CString("orientation"));
MetadataDouble25.setDEF(CString("orientation"));
MetadataDouble25.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble25.setValue(new double[]{0.838011514790102,0.301117702286433,0.455043767619048,1.16040551972849}, 4);
MetadataSet23.setValue((X3DNode *)&MetadataDouble25);

MetadataDouble& MetadataDouble26 =  MetadataDouble();
MetadataDouble26.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble26.setDEF(CString("centerOfRotation"));
MetadataDouble26.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble26.setValue(new double[]{17.631872177124,-9.29712867736816,-18.6251792907715}, 3);
MetadataSet23.setValue((X3DNode *)&MetadataDouble26);

MetadataSet16.setValue((X3DNode *)&MetadataSet23);

MetadataSet& MetadataSet27 =  MetadataSet();
MetadataSet27.X3DNode::setName(CString("Selection"));
MetadataSet27.setDEF(CString("Selection"));
MetadataSet27.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet28 =  MetadataSet();
MetadataSet28.X3DNode::setName(CString("previous"));
MetadataSet28.setDEF(CString("previous"));
MetadataSet28.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet27.setValue((X3DNode *)&MetadataSet28);

MetadataSet& MetadataSet29 =  MetadataSet();
MetadataSet29.X3DNode::setName(CString("children"));
MetadataSet29.setDEF(CString("children"));
MetadataSet29.X3DNode::setReference(CString("http://titania.create3000.de"));
ParticleSystem& ParticleSystem30 =  ParticleSystem();
ParticleSystem30.setDEF(CString("_1"));
ParticleSystem30.setGeometryType(CString("POINT"));
ParticleSystem30.setMaxParticles(10000);
ParticleSystem30.setParticleLifetime(2);
ParticleSystem30.setParticleSize(new float[]{6.0,6.0});
SurfaceEmitter& SurfaceEmitter31 =  SurfaceEmitter();
SurfaceEmitter31.setSpeed(2);
SurfaceEmitter31.setMass(0.01);
SurfaceEmitter31.setSurfaceArea(0.01);
ProtoInstance& ProtoInstance32 =  ProtoInstance();
ProtoInstance32.setName(CString("Dolphin"));
ProtoInstance32.setDEF(CString("_2"));
SurfaceEmitter31.setProtoInstance(&ProtoInstance32);

ParticleSystem30.setEmitter(SurfaceEmitter31);

Appearance& Appearance33 =  Appearance();
PointProperties& PointProperties34 =  PointProperties();
PointProperties34.setPointSizeScaleFactor(3.24);
PointProperties34.setPointSizeMaxValue(3.24);
Appearance33.setPointProperties(PointProperties34);

Material& Material35 =  Material();
Material35.setDEF(CString("Rococo17"));
Material35.setAmbientIntensity(0.187004);
Material35.setDiffuseColor(new float[]{0.640987,0.460097,0.748016});
Material35.setSpecularColor(new float[]{0.251984,0.251984,0.251984});
Material35.setEmissiveColor(new float[]{0.640987,0.460097,0.748016});
Material35.setShininess(0.612121);
Appearance33.addChild(&Material35);

ParticleSystem30.addChildren(&Appearance33);

MetadataSet29.setParticleSystem(ParticleSystem30);

MetadataSet27.setValue((X3DNode *)&MetadataSet29);

MetadataSet16.setValue((X3DNode *)&MetadataSet27);

WorldInfo15.setMetadata(&MetadataSet16);

Scene11.addChild(&WorldInfo15);

Background& Background36 =  Background();
Background36.setDEF(CString("White"));
Background36.setSkyColor(new float[]{1.0,1.0,1.0}, 3);
Scene11.addChild(&Background36);

Viewpoint& Viewpoint37 =  Viewpoint();
Viewpoint37.setDescription(CString("Home"));
Viewpoint37.setPosition(new float[]{179.724,-295.826,258.352});
Viewpoint37.setOrientation(new float[]{0.851609192029354,0.229794819966725,0.47112219727749,0.997756545817209});
Viewpoint37.setCenterOfRotation(new float[]{17.6319,-9.29713,-18.6252});
Scene11.addChild(&Viewpoint37);

TimeSensor& TimeSensor38 =  TimeSensor();
TimeSensor38.setDEF(CString("_3"));
TimeSensor38.setCycleInterval(10);
TimeSensor38.setLoop(true);
Scene11.addChild(&TimeSensor38);

Transform& Transform39 =  Transform();
Transform39.setDEF(CString("Box"));
Shape& Shape40 =  Shape();
Appearance& Appearance41 =  Appearance();
Material& Material42 =  Material();
Material42.setTransparency(0.884393);
Appearance41.addChild(&Material42);

Shape40.addChild(&Appearance41);

ProtoInstance& ProtoInstance43 =  ProtoInstance();
ProtoInstance43.setName(CString("Dolphin"));
ProtoInstance43.setUSE(CString("_2"));
Shape40.setGeometry(&ProtoInstance43);

Transform39.addChild(&Shape40);

Scene11.addChild(&Transform39);

ParticleSystem& ParticleSystem44 =  ParticleSystem();
ParticleSystem44.setUSE(CString("_1"));
Scene11.addChild(&ParticleSystem44);

Background& Background45 =  Background();
Background45.setDEF(CString("Gray"));
Background45.setSkyColor(new float[]{0.2,0.2,0.2}, 3);
Scene11.addChild(&Background45);

ROUTE& ROUTE46 =  ROUTE();
ROUTE46.setFromNode(CString("_3"));
ROUTE46.setFromField(CString("fraction_changed"));
ROUTE46.setToNode(CString("_2"));
ROUTE46.setToField(CString("set_fraction"));
Scene11.addChild(&ROUTE46);

X3D0.setScene(&Scene11);

//}
