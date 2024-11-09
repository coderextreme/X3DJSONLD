//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Full"));
X3D0.setVersion(CString("3.3"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("comment"));
meta2.setContent(CString("World of Titania"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("created"));
meta3.setContent(CString("Sat, 30 Apr 2016 02:18:39 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("holger"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V1.4.4, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("identifier"));
meta6.setContent(CString("file:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/DolphinLineSurfaceEmitter.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("Tue, 17 May 2016 08:14:35 GMT"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
ExternProtoDeclare& ExternProtoDeclare9 =  ExternProtoDeclare();
ExternProtoDeclare9.setName(CString("Dolphin"));
ExternProtoDeclare9.setUrl(new CString[]{CString(", "), CString("Dolphin.x3d#Dolphinfile:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/Dolphin.x3d#Dolphin")}, 2);
field& field10 =  field();
field10.setName(CString("set_fraction"));
field10.setAccessType(CString("inputOnly"));
field10.setType(CString("SFFloat"));
ExternProtoDeclare9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("solid"));
field11.setAccessType(CString("initializeOnly"));
field11.setType(CString("SFBool"));
ExternProtoDeclare9.addChild(&field11);

Scene8.addChild(&ExternProtoDeclare9);

WorldInfo& WorldInfo12 =  WorldInfo();
MetadataSet& MetadataSet13 =  MetadataSet();
MetadataSet13.X3DNode::setName(CString("Titania"));
MetadataSet13.setDEF(CString("Titania"));
MetadataSet13.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet14 =  MetadataSet();
MetadataSet14.X3DNode::setName(CString("AngleGrid"));
MetadataSet14.setDEF(CString("AngleGrid"));
MetadataSet14.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean15 =  MetadataBoolean();
MetadataBoolean15.X3DNode::setName(CString("enabled"));
MetadataBoolean15.setDEF(CString("enabled"));
MetadataBoolean15.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean15.setValue(new boolean[]{false});
MetadataSet14.setValue((X3DNode *)&MetadataBoolean15);

MetadataSet13.setValue((X3DNode *)&MetadataSet14);

MetadataSet& MetadataSet16 =  MetadataSet();
MetadataSet16.X3DNode::setName(CString("Grid"));
MetadataSet16.setDEF(CString("Grid"));
MetadataSet16.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean17 =  MetadataBoolean();
MetadataBoolean17.X3DNode::setName(CString("enabled"));
MetadataBoolean17.setDEF(CString("enabled_1"));
MetadataBoolean17.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean17.setValue(new boolean[]{true});
MetadataSet16.setValue((X3DNode *)&MetadataBoolean17);

MetadataSet13.setValue((X3DNode *)&MetadataSet16);

MetadataSet& MetadataSet18 =  MetadataSet();
MetadataSet18.X3DNode::setName(CString("NavigationInfo"));
MetadataSet18.setDEF(CString("NavigationInfo"));
MetadataSet18.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString& MetadataString19 =  MetadataString();
MetadataString19.X3DNode::setName(CString("type"));
MetadataString19.setDEF(CString("type"));
MetadataString19.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString19.setValue(new CString[]{CString("EXAMINE")}, 1);
MetadataSet18.setValue((X3DNode *)&MetadataString19);

MetadataSet13.setValue((X3DNode *)&MetadataSet18);

MetadataSet& MetadataSet20 =  MetadataSet();
MetadataSet20.X3DNode::setName(CString("Viewpoint"));
MetadataSet20.setDEF(CString("Viewpoint"));
MetadataSet20.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble21 =  MetadataDouble();
MetadataDouble21.X3DNode::setName(CString("position"));
MetadataDouble21.setDEF(CString("position"));
MetadataDouble21.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble21.setValue(new double[]{209.085708618164,-284.294311523438,251.209625244141}, 3);
MetadataSet20.setValue((X3DNode *)&MetadataDouble21);

MetadataDouble& MetadataDouble22 =  MetadataDouble();
MetadataDouble22.X3DNode::setName(CString("orientation"));
MetadataDouble22.setDEF(CString("orientation"));
MetadataDouble22.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble22.setValue(new double[]{0.832041258895059,0.311619716372351,0.458912296484134,1.01485308574234}, 4);
MetadataSet20.setValue((X3DNode *)&MetadataDouble22);

MetadataDouble& MetadataDouble23 =  MetadataDouble();
MetadataDouble23.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble23.setDEF(CString("centerOfRotation"));
MetadataDouble23.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble23.setValue(new double[]{17.631872177124,-9.29712867736816,-18.6251792907715}, 3);
MetadataSet20.setValue((X3DNode *)&MetadataDouble23);

MetadataSet13.setValue((X3DNode *)&MetadataSet20);

MetadataSet& MetadataSet24 =  MetadataSet();
MetadataSet24.X3DNode::setName(CString("Selection"));
MetadataSet24.setDEF(CString("Selection"));
MetadataSet24.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet25 =  MetadataSet();
MetadataSet25.X3DNode::setName(CString("previous"));
MetadataSet25.setDEF(CString("previous"));
MetadataSet25.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet24.setValue((X3DNode *)&MetadataSet25);

MetadataSet& MetadataSet26 =  MetadataSet();
MetadataSet26.X3DNode::setName(CString("children"));
MetadataSet26.setDEF(CString("children"));
MetadataSet26.X3DNode::setReference(CString("http://titania.create3000.de"));
ParticleSystem& ParticleSystem27 =  ParticleSystem();
ParticleSystem27.setDEF(CString("_1"));
ParticleSystem27.setGeometryType(CString("LINE"));
ParticleSystem27.setMaxParticles(15000);
ParticleSystem27.setParticleSize(new float[]{6.0,6.0});
SurfaceEmitter& SurfaceEmitter28 =  SurfaceEmitter();
SurfaceEmitter28.setSpeed(2);
SurfaceEmitter28.setMass(0.01);
SurfaceEmitter28.setSurfaceArea(0.01);
ProtoInstance& ProtoInstance29 =  ProtoInstance();
ProtoInstance29.setName(CString("Dolphin"));
ProtoInstance29.setDEF(CString("_2"));
SurfaceEmitter28.setProtoInstance(&ProtoInstance29);

ParticleSystem27.setEmitter(SurfaceEmitter28);

Appearance& Appearance30 =  Appearance();
Material& Material31 =  Material();
Material31.setDEF(CString("Rococo17"));
Material31.setAmbientIntensity(0.187004);
Material31.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material31.setEmissiveColor(new float[]{0.640987,0.460097,0.748016});
Material31.setShininess(0.612121);
Appearance30.addChild(&Material31);

ParticleSystem27.addChildren(&Appearance30);

MetadataSet26.setParticleSystem(ParticleSystem27);

MetadataSet24.setValue((X3DNode *)&MetadataSet26);

MetadataSet13.setValue((X3DNode *)&MetadataSet24);

WorldInfo12.setMetadata(&MetadataSet13);

Scene8.addChild(&WorldInfo12);

Background& Background32 =  Background();
Background32.setDEF(CString("White"));
Background32.setSkyColor(new float[]{1.0,1.0,1.0}, 3);
Scene8.addChild(&Background32);

Viewpoint& Viewpoint33 =  Viewpoint();
Viewpoint33.setDescription(CString("Home"));
Viewpoint33.setPosition(new float[]{179.724,-295.826,258.352});
Viewpoint33.setOrientation(new float[]{0.851609192029354,0.229794819966725,0.47112219727749,0.997756545817209});
Viewpoint33.setCenterOfRotation(new float[]{17.6319,-9.29713,-18.6252});
Scene8.addChild(&Viewpoint33);

TimeSensor& TimeSensor34 =  TimeSensor();
TimeSensor34.setDEF(CString("_3"));
TimeSensor34.setCycleInterval(10);
TimeSensor34.setLoop(true);
Scene8.addChild(&TimeSensor34);

Transform& Transform35 =  Transform();
Transform35.setDEF(CString("Box"));
Shape& Shape36 =  Shape();
Appearance& Appearance37 =  Appearance();
Material& Material38 =  Material();
Material38.setTransparency(0.884393);
Appearance37.addChild(&Material38);

Shape36.addChild(&Appearance37);

ProtoInstance& ProtoInstance39 =  ProtoInstance();
ProtoInstance39.setName(CString("Dolphin"));
ProtoInstance39.setUSE(CString("_2"));
Shape36.setGeometry(&ProtoInstance39);

Transform35.addChild(&Shape36);

Scene8.addChild(&Transform35);

ParticleSystem& ParticleSystem40 =  ParticleSystem();
ParticleSystem40.setUSE(CString("_1"));
Scene8.addChild(&ParticleSystem40);

Background& Background41 =  Background();
Background41.setDEF(CString("Gray"));
Background41.setSkyColor(new float[]{0.2,0.2,0.2}, 3);
Scene8.addChild(&Background41);

ROUTE& ROUTE42 =  ROUTE();
ROUTE42.setFromNode(CString("_3"));
ROUTE42.setFromField(CString("fraction_changed"));
ROUTE42.setToNode(CString("_2"));
ROUTE42.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE42);

X3D0.setScene(&Scene8);

//}
