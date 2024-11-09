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
meta3.setContent(CString("Sun, 15 May 2016 00:15:37 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("holger"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V1.4.3, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("identifier"));
meta6.setContent(CString("file:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/Geometry.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("Sun, 15 May 2016 00:52:08 GMT"));
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
WorldInfo23.setTitle(CString("Geometry"));
MetadataSet& MetadataSet24 =  MetadataSet();
MetadataSet24.X3DNode::setName(CString("Titania"));
MetadataSet24.setDEF(CString("Titania"));
MetadataSet24.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet25 =  MetadataSet();
MetadataSet25.X3DNode::setName(CString("Selection"));
MetadataSet25.setDEF(CString("Selection"));
MetadataSet25.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet26 =  MetadataSet();
MetadataSet26.X3DNode::setName(CString("previous"));
MetadataSet26.setDEF(CString("previous"));
MetadataSet26.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet25.setValue((X3DNode *)&MetadataSet26);

MetadataSet& MetadataSet27 =  MetadataSet();
MetadataSet27.X3DNode::setName(CString("children"));
MetadataSet27.setDEF(CString("children"));
MetadataSet27.X3DNode::setReference(CString("http://titania.create3000.de"));
ParticleSystem& ParticleSystem28 =  ParticleSystem();
ParticleSystem28.setDEF(CString("_1"));
ParticleSystem28.setGeometryType(CString("GEOMETRY"));
ParticleSystem28.setMaxParticles(10);
ParticleSystem28.setParticleLifetime(4);
ParticleSystem28.setLifetimeVariation(0.5);
ParticleSystem28.setParticleSize(new float[]{1.0,1.0});
PointEmitter& PointEmitter29 =  PointEmitter();
PointEmitter29.setDirection(new float[]{0.0,0.0,0.0});
PointEmitter29.setSpeed(0.5);
PointEmitter29.setVariation(0.5);
PointEmitter29.setMass(0.1);
PointEmitter29.setSurfaceArea(0.1);
ParticleSystem28.setEmitter(PointEmitter29);

WindPhysicsModel& WindPhysicsModel30 =  WindPhysicsModel();
WindPhysicsModel30.setDirection(new float[]{0.0,1.0,0.0});
WindPhysicsModel30.setSpeed(0.7);
WindPhysicsModel30.setGustiness(1.7);
WindPhysicsModel30.setTurbulence(0.3);
ParticleSystem28.addPhysics(WindPhysicsModel30);

WindPhysicsModel& WindPhysicsModel31 =  WindPhysicsModel();
WindPhysicsModel31.setSpeed(0.5);
WindPhysicsModel31.setGustiness(2);
ParticleSystem28.addPhysics(WindPhysicsModel31);

Appearance& Appearance32 =  Appearance();
ImageTexture& ImageTexture33 =  ImageTexture();
ImageTexture33.setUrl(new CString[]{CString("../images/image.png")}, 1);
Appearance32.addChild(&ImageTexture33);

ParticleSystem28.addChildren(&Appearance32);

Cone& Cone34 =  Cone();
ParticleSystem28.setGeometry(&Cone34);

MetadataSet27.setParticleSystem(ParticleSystem28);

MetadataSet25.setValue((X3DNode *)&MetadataSet27);

MetadataSet24.setValue((X3DNode *)&MetadataSet25);

MetadataSet& MetadataSet35 =  MetadataSet();
MetadataSet35.X3DNode::setName(CString("NavigationInfo"));
MetadataSet35.setDEF(CString("NavigationInfo"));
MetadataSet35.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString& MetadataString36 =  MetadataString();
MetadataString36.X3DNode::setName(CString("type"));
MetadataString36.setDEF(CString("type"));
MetadataString36.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString36.setValue(new CString[]{CString("EXAMINE")}, 1);
MetadataSet35.setValue((X3DNode *)&MetadataString36);

MetadataSet24.setValue((X3DNode *)&MetadataSet35);

MetadataSet& MetadataSet37 =  MetadataSet();
MetadataSet37.X3DNode::setName(CString("Viewpoint"));
MetadataSet37.setDEF(CString("Viewpoint"));
MetadataSet37.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble38 =  MetadataDouble();
MetadataDouble38.X3DNode::setName(CString("position"));
MetadataDouble38.setDEF(CString("position"));
MetadataDouble38.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble38.setValue(new double[]{0.0,20.0,55.0}, 3);
MetadataSet37.setValue((X3DNode *)&MetadataDouble38);

MetadataDouble& MetadataDouble39 =  MetadataDouble();
MetadataDouble39.X3DNode::setName(CString("orientation"));
MetadataDouble39.setDEF(CString("orientation"));
MetadataDouble39.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble39.setValue(new double[]{0.0,0.0,1.0,0.0}, 4);
MetadataSet37.setValue((X3DNode *)&MetadataDouble39);

MetadataDouble& MetadataDouble40 =  MetadataDouble();
MetadataDouble40.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble40.setDEF(CString("centerOfRotation"));
MetadataDouble40.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble40.setValue(new double[]{0.0,0.0,0.0}, 3);
MetadataSet37.setValue((X3DNode *)&MetadataDouble40);

MetadataSet24.setValue((X3DNode *)&MetadataSet37);

WorldInfo23.setMetadata(&MetadataSet24);

Scene8.addChild(&WorldInfo23);

Background& Background41 =  Background();
Background41.setDEF(CString("Gray"));
Background41.setSkyColor(new float[]{0.2,0.2,0.2}, 3);
Scene8.addChild(&Background41);

Viewpoint& Viewpoint42 =  Viewpoint();
Viewpoint42.setDescription(CString("Viewpoint"));
Viewpoint42.setPosition(new float[]{0.0,20.0,55.0});
Scene8.addChild(&Viewpoint42);

ParticleSystem& ParticleSystem43 =  ParticleSystem();
ParticleSystem43.setUSE(CString("_1"));
Scene8.addChild(&ParticleSystem43);

Transform& Transform44 =  Transform();
Transform44.setDEF(CString("IndexedLineSet"));
Shape& Shape45 =  Shape();
IndexedLineSet& IndexedLineSet46 =  IndexedLineSet();
IndexedLineSet46.setColorPerVertex(false);
IndexedLineSet46.setColorIndex(new int[]{0,1,2}, 3);
IndexedLineSet46.setCoordIndex(new int32_t[]{0,1,-1,2,3,-1,4,5,-1}, 9);
CColor& Color47 =  CColor();
Color47.setColor(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0}, 9);
IndexedLineSet46.setColor(&Color47);

Coordinate& Coordinate48 =  Coordinate();
Coordinate48.setPoint(new float[]{-1.0,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,0.0,0.0,1.0}, 18);
IndexedLineSet46.setCoord(&Coordinate48);

Shape45.setGeometry(&IndexedLineSet46);

Transform44.addChild(&Shape45);

Scene8.addChild(&Transform44);

ProtoInstance& ProtoInstance49 =  ProtoInstance();
ProtoInstance49.setName(CString("Grid"));
Scene8.addChild(&ProtoInstance49);

X3D0.setScene(&Scene8);

//}
