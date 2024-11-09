#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
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
meta3.setContent(CString("Wed, 20 Apr 2016 11:36:01 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V2.0.0, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("identifier"));
meta6.setContent(CString("file:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/Fire.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("Mon, 26 Sep 2016 09:18:09 GMT"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
ExternProtoDeclare& ExternProtoDeclare9 =  ExternProtoDeclare();
ExternProtoDeclare9.setName(CString("Grid"));
ExternProtoDeclare9.setUrl(new CString[]{CString(", "), CString("GridTool.x3dv#Gridfile:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/GridTool.x3dv#Grid")}, 2);
field& field10 =  field();
field10.setName(CString("translation"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("SFVec3f"));
ExternProtoDeclare9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("rotation"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("SFRotation"));
ExternProtoDeclare9.addChild(&field11);

field& field12 =  field();
field12.setName(CString("scale"));
field12.setAccessType(CString("inputOutput"));
field12.setType(CString("SFVec3f"));
ExternProtoDeclare9.addChild(&field12);

field& field13 =  field();
field13.setName(CString("dimension"));
field13.setAccessType(CString("inputOutput"));
field13.setType(CString("MFInt32"));
ExternProtoDeclare9.addChild(&field13);

field& field14 =  field();
field14.setName(CString("majorLineEvery"));
field14.setAccessType(CString("inputOutput"));
field14.setType(CString("MFInt32"));
ExternProtoDeclare9.addChild(&field14);

field& field15 =  field();
field15.setName(CString("majorLineOffset"));
field15.setAccessType(CString("inputOutput"));
field15.setType(CString("MFInt32"));
ExternProtoDeclare9.addChild(&field15);

field& field16 =  field();
field16.setName(CString("color"));
field16.setAccessType(CString("inputOutput"));
field16.setType(CString("SFColor"));
ExternProtoDeclare9.addChild(&field16);

field& field17 =  field();
field17.setName(CString("transparency"));
field17.setAccessType(CString("inputOutput"));
field17.setType(CString("SFFloat"));
ExternProtoDeclare9.addChild(&field17);

field& field18 =  field();
field18.setName(CString("lineColor"));
field18.setAccessType(CString("inputOutput"));
field18.setType(CString("SFColor"));
ExternProtoDeclare9.addChild(&field18);

field& field19 =  field();
field19.setName(CString("lineTransparency"));
field19.setAccessType(CString("inputOutput"));
field19.setType(CString("SFFloat"));
ExternProtoDeclare9.addChild(&field19);

field& field20 =  field();
field20.setName(CString("majorLineColor"));
field20.setAccessType(CString("inputOutput"));
field20.setType(CString("SFColor"));
ExternProtoDeclare9.addChild(&field20);

field& field21 =  field();
field21.setName(CString("majorLineTransparency"));
field21.setAccessType(CString("inputOutput"));
field21.setType(CString("SFFloat"));
ExternProtoDeclare9.addChild(&field21);

field& field22 =  field();
field22.setName(CString("solid"));
field22.setAccessType(CString("initializeOnly"));
field22.setType(CString("SFBool"));
ExternProtoDeclare9.addChild(&field22);

Scene8.addChild(&ExternProtoDeclare9);

WorldInfo& WorldInfo23 =  WorldInfo();
MetadataSet& MetadataSet24 =  MetadataSet();
MetadataSet24.X3DNode::setName(CString("Titania"));
MetadataSet24.setDEF(CString("Titania"));
MetadataSet24.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet25 =  MetadataSet();
MetadataSet25.X3DNode::setName(CString("AngleGrid"));
MetadataSet25.setDEF(CString("AngleGrid"));
MetadataSet25.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean26 =  MetadataBoolean();
MetadataBoolean26.X3DNode::setName(CString("enabled"));
MetadataBoolean26.setDEF(CString("enabled"));
MetadataBoolean26.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean26.setValue(new boolean[]{False});
MetadataSet25.setValue((X3DNode *)&MetadataBoolean26);

MetadataSet24.setValue((X3DNode *)&MetadataSet25);

MetadataSet& MetadataSet27 =  MetadataSet();
MetadataSet27.X3DNode::setName(CString("Grid"));
MetadataSet27.setDEF(CString("Grid"));
MetadataSet27.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean28 =  MetadataBoolean();
MetadataBoolean28.X3DNode::setName(CString("enabled"));
MetadataBoolean28.setDEF(CString("enabled_1"));
MetadataBoolean28.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean28.setValue(new boolean[]{False});
MetadataSet27.setValue((X3DNode *)&MetadataBoolean28);

MetadataSet24.setValue((X3DNode *)&MetadataSet27);

MetadataSet& MetadataSet29 =  MetadataSet();
MetadataSet29.X3DNode::setName(CString("NavigationInfo"));
MetadataSet29.setDEF(CString("NavigationInfo"));
MetadataSet29.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString& MetadataString30 =  MetadataString();
MetadataString30.X3DNode::setName(CString("type"));
MetadataString30.setDEF(CString("type"));
MetadataString30.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString30.setValue(new CString[]{CString("EXAMINE")}, 1);
MetadataSet29.setValue((X3DNode *)&MetadataString30);

MetadataSet24.setValue((X3DNode *)&MetadataSet29);

MetadataSet& MetadataSet31 =  MetadataSet();
MetadataSet31.X3DNode::setName(CString("Viewpoint"));
MetadataSet31.setDEF(CString("Viewpoint"));
MetadataSet31.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble32 =  MetadataDouble();
MetadataDouble32.X3DNode::setName(CString("position"));
MetadataDouble32.setDEF(CString("position"));
MetadataDouble32.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble32.setValue(new double[]{1.31269461177796,0.873141120607314,0.42007766929488}, 3);
MetadataSet31.setValue((X3DNode *)&MetadataDouble32);

MetadataDouble& MetadataDouble33 =  MetadataDouble();
MetadataDouble33.X3DNode::setName(CString("orientation"));
MetadataDouble33.setDEF(CString("orientation"));
MetadataDouble33.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble33.setValue(new double[]{0.353413775780365,-0.897474128965571,-0.26389181670934,4.9156754975484}, 4);
MetadataSet31.setValue((X3DNode *)&MetadataDouble33);

MetadataDouble& MetadataDouble34 =  MetadataDouble();
MetadataDouble34.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble34.setDEF(CString("centerOfRotation"));
MetadataDouble34.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble34.setValue(new double[]{-1.7763600157738e-15,-7.10542989869984e-15,3.55271007891048e-15}, 3);
MetadataSet31.setValue((X3DNode *)&MetadataDouble34);

MetadataSet24.setValue((X3DNode *)&MetadataSet31);

MetadataSet& MetadataSet35 =  MetadataSet();
MetadataSet35.X3DNode::setName(CString("Selection"));
MetadataSet35.setDEF(CString("Selection"));
MetadataSet35.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet36 =  MetadataSet();
MetadataSet36.X3DNode::setName(CString("previous"));
MetadataSet36.setDEF(CString("previous"));
MetadataSet36.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet35.setValue((X3DNode *)&MetadataSet36);

MetadataSet& MetadataSet37 =  MetadataSet();
MetadataSet37.X3DNode::setName(CString("children"));
MetadataSet37.setDEF(CString("children"));
MetadataSet37.X3DNode::setReference(CString("http://titania.create3000.de"));
Transform& Transform38 =  Transform();
Transform38.setDEF(CString("Box"));
Transform38.setTranslation(new float[]{0,-1.02384,0});
Transform38.setScale(new float[]{2,1,2});
Shape& Shape39 =  Shape();
Appearance& Appearance40 =  Appearance();
Material& Material41 =  Material();
Appearance40.addChild(&Material41);

Shape39.addChild(&Appearance40);

Box& Box42 =  Box();
Shape39.setGeometry(&Box42);

Transform38.addChild(&Shape39);

MetadataSet37.setTransform(Transform38);

MetadataSet35.setValue((X3DNode *)&MetadataSet37);

MetadataSet24.setValue((X3DNode *)&MetadataSet35);

WorldInfo23.setMetadata(&MetadataSet24);

Scene8.addChild(&WorldInfo23);

ParticleSystem& ParticleSystem43 =  ParticleSystem();
ParticleSystem43.setDEF(CString("Fire2"));
ParticleSystem43.setGeometryType(CString("SPRITE"));
ParticleSystem43.setParticleLifetime(2);
ParticleSystem43.setLifetimeVariation(0.5);
ParticleSystem43.setParticleSize(new float[]{1,1});
ParticleSystem43.setColorKey(new float[]{0}, 1);
ParticleSystem43.setTexCoordKey(new float[]{0,0.015625,0.03125,0.046875,0.0625,0.078125,0.09375,0.109375,0.125,0.140625,0.15625,0.171875,0.1875,0.203125,0.21875,0.234375,0.25,0.265625,0.28125,0.296875,0.3125,0.328125,0.34375,0.359375,0.375,0.390625,0.40625,0.421875,0.4375,0.453125,0.46875,0.484375,0.5,0.515625,0.53125,0.546875,0.5625,0.578125,0.59375,0.609375,0.625,0.640625,0.65625,0.671875,0.6875,0.703125,0.71875,0.734375,0.75,0.765625,0.78125,0.796875,0.8125,0.828125,0.84375,0.859375,0.875,0.890625,0.90625,0.921875,0.9375,0.953125,0.96875,0.984375,1}, 65);
PointEmitter& PointEmitter44 =  PointEmitter();
PointEmitter44.setDirection(new float[]{0,0,0});
PointEmitter44.setSpeed(0.2);
PointEmitter44.setVariation(0);
PointEmitter44.setMass(0.1);
PointEmitter44.setSurfaceArea(0.1);
ParticleSystem43.setEmitter(PointEmitter44);

WindPhysicsModel& WindPhysicsModel45 =  WindPhysicsModel();
WindPhysicsModel45.setDirection(new float[]{0,1,0});
WindPhysicsModel45.setSpeed(0.5);
WindPhysicsModel45.setGustiness(1.9);
ParticleSystem43.addPhysics(WindPhysicsModel45);

WindPhysicsModel& WindPhysicsModel46 =  WindPhysicsModel();
WindPhysicsModel46.setDirection(new float[]{1,-1,0});
WindPhysicsModel46.setSpeed(0.15);
WindPhysicsModel46.setGustiness(7);
ParticleSystem43.addPhysics(WindPhysicsModel46);

ColorRGBA& ColorRGBA47 =  ColorRGBA();
ColorRGBA47.setColor(new float[]{1,1,1,0.1}, 4);
ParticleSystem43.setColorRamp(ColorRGBA47);

TextureCoordinate& TextureCoordinate48 =  TextureCoordinate();
TextureCoordinate48.setPoint(new float[]{0,0,0.125,0,0.125,0.125,0,0.125,0.125,0,0.25,0,0.25,0.125,0.125,0.125,0.25,0,0.375,0,0.375,0.125,0.25,0.125,0.375,0,0.5,0,0.5,0.125,0.375,0.125,0.5,0,0.625,0,0.625,0.125,0.5,0.125,0.625,0,0.75,0,0.75,0.125,0.625,0.125,0.75,0,0.875,0,0.875,0.125,0.75,0.125,0.875,0,1,0,1,0.125,0.875,0.125,0,0.125,0.125,0.125,0.125,0.25,0,0.25,0.125,0.125,0.25,0.125,0.25,0.25,0.125,0.25,0.25,0.125,0.375,0.125,0.375,0.25,0.25,0.25,0.375,0.125,0.5,0.125,0.5,0.25,0.375,0.25,0.5,0.125,0.625,0.125,0.625,0.25,0.5,0.25,0.625,0.125,0.75,0.125,0.75,0.25,0.625,0.25,0.75,0.125,0.875,0.125,0.875,0.25,0.75,0.25,0.875,0.125,1,0.125,1,0.25,0.875,0.25,0,0.25,0.125,0.25,0.125,0.375,0,0.375,0.125,0.25,0.25,0.25,0.25,0.375,0.125,0.375,0.25,0.25,0.375,0.25,0.375,0.375,0.25,0.375,0.375,0.25,0.5,0.25,0.5,0.375,0.375,0.375,0.5,0.25,0.625,0.25,0.625,0.375,0.5,0.375,0.625,0.25,0.75,0.25,0.75,0.375,0.625,0.375,0.75,0.25,0.875,0.25,0.875,0.375,0.75,0.375,0.875,0.25,1,0.25,1,0.375,0.875,0.375,0,0.375,0.125,0.375,0.125,0.5,0,0.5,0.125,0.375,0.25,0.375,0.25,0.5,0.125,0.5,0.25,0.375,0.375,0.375,0.375,0.5,0.25,0.5,0.375,0.375,0.5,0.375,0.5,0.5,0.375,0.5,0.5,0.375,0.625,0.375,0.625,0.5,0.5,0.5,0.625,0.375,0.75,0.375,0.75,0.5,0.625,0.5,0.75,0.375,0.875,0.375,0.875,0.5,0.75,0.5,0.875,0.375,1,0.375,1,0.5,0.875,0.5,0,0.5,0.125,0.5,0.125,0.625,0,0.625,0.125,0.5,0.25,0.5,0.25,0.625,0.125,0.625,0.25,0.5,0.375,0.5,0.375,0.625,0.25,0.625,0.375,0.5,0.5,0.5,0.5,0.625,0.375,0.625,0.5,0.5,0.625,0.5,0.625,0.625,0.5,0.625,0.625,0.5,0.75,0.5,0.75,0.625,0.625,0.625,0.75,0.5,0.875,0.5,0.875,0.625,0.75,0.625,0.875,0.5,1,0.5,1,0.625,0.875,0.625,0,0.625,0.125,0.625,0.125,0.75,0,0.75,0.125,0.625,0.25,0.625,0.25,0.75,0.125,0.75,0.25,0.625,0.375,0.625,0.375,0.75,0.25,0.75,0.375,0.625,0.5,0.625,0.5,0.75,0.375,0.75,0.5,0.625,0.625,0.625,0.625,0.75,0.5,0.75,0.625,0.625,0.75,0.625,0.75,0.75,0.625,0.75,0.75,0.625,0.875,0.625,0.875,0.75,0.75,0.75,0.875,0.625,1,0.625,1,0.75,0.875,0.75,0,0.75,0.125,0.75,0.125,0.875,0,0.875,0.125,0.75,0.25,0.75,0.25,0.875,0.125,0.875,0.25,0.75,0.375,0.75,0.375,0.875,0.25,0.875,0.375,0.75,0.5,0.75,0.5,0.875,0.375,0.875,0.5,0.75,0.625,0.75,0.625,0.875,0.5,0.875,0.625,0.75,0.75,0.75,0.75,0.875,0.625,0.875,0.75,0.75,0.875,0.75,0.875,0.875,0.75,0.875,0.875,0.75,1,0.75,1,0.875,0.875,0.875,0,0.875,0.125,0.875,0.125,1,0,1,0.125,0.875,0.25,0.875,0.25,1,0.125,1,0.25,0.875,0.375,0.875,0.375,1,0.25,1,0.375,0.875,0.5,0.875,0.5,1,0.375,1,0.5,0.875,0.625,0.875,0.625,1,0.5,1,0.625,0.875,0.75,0.875,0.75,1,0.625,1,0.75,0.875,0.875,0.875,0.875,1,0.75,1,0.875,0.875,1,0.875,1,1,0.875,1,0.875,0.875,1,0.875,1,1,0.875,1}, 520);
ParticleSystem43.setTexCoordRamp(TextureCoordinate48);

Appearance& Appearance49 =  Appearance();
ImageTexture& ImageTexture50 =  ImageTexture();
ImageTexture50.setUrl(new CString[]{CString(", "), CString("http://cdn.rawgit.com/create3000/Library/master/Textures/Effects/fire2.png, "), CString("https://cdn.rawgit.com/create3000/Library/master/Textures/Effects/fire2.png, "), CString("http://rawgit.com/create3000/Library/master/Textures/Effects/fire2.pnghttps://rawgit.com/create3000/Library/master/Textures/Effects/fire2.png")}, 4);
Appearance49.addChild(&ImageTexture50);

ParticleSystem43.addChildren(&Appearance49);

Scene8.addChild(&ParticleSystem43);

Viewpoint& Viewpoint51 =  Viewpoint();
Viewpoint51.setPosition(new float[]{1.89619,2.08715,4.46876});
Viewpoint51.setOrientation(new float[]{-0.704047462871212,0.695566762376517,0.143192350010952,0.568941727555854});
Viewpoint51.setCenterOfRotation(new float[]{-1.77636e-15,-7.10543e-15,3.55271e-15});
Scene8.addChild(&Viewpoint51);

ProtoInstance& ProtoInstance52 =  ProtoInstance();
ProtoInstance52.setName(CString("Grid"));
Scene8.addChild(&ProtoInstance52);

Transform& Transform53 =  Transform();
Transform53.setUSE(CString("Box"));
Scene8.addChild(&Transform53);

DirectionalLight& DirectionalLight54 =  DirectionalLight();
DirectionalLight54.setDEF(CString("_1"));
DirectionalLight54.setDirection(new float[]{-0.531638,-0.672816,-0.51447});
DirectionalLight54.setShadows(True);
DirectionalLight54.setShadowIntensity(0.605);
Scene8.addChild(&DirectionalLight54);

NavigationInfo& NavigationInfo55 =  NavigationInfo();
NavigationInfo55.setHeadlight(False);
Scene8.addChild(&NavigationInfo55);

Script& Script56 =  Script();
Script56.setDEF(CString("PhongShadingScript"));

Script56.setSourceCode(CString("ecmascript:")+
_T("function initialize ()")+
_T("{")+
_T("	Browser .setBrowserOption (\"Shading\", \"PHONG\");")+
_T("}"));
Scene8.addChild(&Script56);

X3D0.setScene(&Scene8);

}
