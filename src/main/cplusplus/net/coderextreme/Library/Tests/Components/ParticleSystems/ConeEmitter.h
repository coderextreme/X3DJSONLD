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
meta4.setContent(CString("Fri, 22 Apr 2016 02:56:52 GMT"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("creator"));
meta5.setContent(CString("Holger Seelig"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("generator"));
meta6.setContent(CString("Titania V1.4.1, http://titania.create3000.de"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("generator"));
meta7.setContent(CString("Sunrize X3D Editor V1.6.11, https://create3000.github.io/sunrize/"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("identifier"));
meta8.setContent(CString("file:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/ConeEmitter.x3d"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("modified"));
meta9.setContent(CString("Tue, 30 Apr 2024 04:21:26 GMT"));
head1.addMeta(&meta9);

X3D0.setHead(&head1);

Scene& Scene10 =  Scene();
ExternProtoDeclare& ExternProtoDeclare11 =  ExternProtoDeclare();
ExternProtoDeclare11.setName(CString("Grid"));
ExternProtoDeclare11.setUrl(new CString[]{CString(", "), CString("GridTool.x3dv#Gridfile:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/GridTool.x3dv#Grid")}, 2);
field& field12 =  field();
field12.setName(CString("translation"));
field12.setAccessType(CString("inputOutput"));
field12.setType(CString("SFVec3f"));
ExternProtoDeclare11.addChild(&field12);

field& field13 =  field();
field13.setName(CString("rotation"));
field13.setAccessType(CString("inputOutput"));
field13.setType(CString("SFRotation"));
ExternProtoDeclare11.addChild(&field13);

field& field14 =  field();
field14.setName(CString("scale"));
field14.setAccessType(CString("inputOutput"));
field14.setType(CString("SFVec3f"));
ExternProtoDeclare11.addChild(&field14);

field& field15 =  field();
field15.setName(CString("dimension"));
field15.setAccessType(CString("inputOutput"));
field15.setType(CString("MFInt32"));
ExternProtoDeclare11.addChild(&field15);

field& field16 =  field();
field16.setName(CString("majorLineEvery"));
field16.setAccessType(CString("inputOutput"));
field16.setType(CString("MFInt32"));
ExternProtoDeclare11.addChild(&field16);

field& field17 =  field();
field17.setName(CString("majorLineOffset"));
field17.setAccessType(CString("inputOutput"));
field17.setType(CString("MFInt32"));
ExternProtoDeclare11.addChild(&field17);

field& field18 =  field();
field18.setName(CString("color"));
field18.setAccessType(CString("inputOutput"));
field18.setType(CString("SFColor"));
ExternProtoDeclare11.addChild(&field18);

field& field19 =  field();
field19.setName(CString("transparency"));
field19.setAccessType(CString("inputOutput"));
field19.setType(CString("SFFloat"));
ExternProtoDeclare11.addChild(&field19);

field& field20 =  field();
field20.setName(CString("lineColor"));
field20.setAccessType(CString("inputOutput"));
field20.setType(CString("SFColor"));
ExternProtoDeclare11.addChild(&field20);

field& field21 =  field();
field21.setName(CString("lineTransparency"));
field21.setAccessType(CString("inputOutput"));
field21.setType(CString("SFFloat"));
ExternProtoDeclare11.addChild(&field21);

field& field22 =  field();
field22.setName(CString("majorLineColor"));
field22.setAccessType(CString("inputOutput"));
field22.setType(CString("SFColor"));
ExternProtoDeclare11.addChild(&field22);

field& field23 =  field();
field23.setName(CString("majorLineTransparency"));
field23.setAccessType(CString("inputOutput"));
field23.setType(CString("SFFloat"));
ExternProtoDeclare11.addChild(&field23);

field& field24 =  field();
field24.setName(CString("solid"));
field24.setAccessType(CString("initializeOnly"));
field24.setType(CString("SFBool"));
ExternProtoDeclare11.addChild(&field24);

Scene10.addChild(&ExternProtoDeclare11);

Background& Background25 =  Background();
Background25.setDEF(CString("Gray"));
Background25.setSkyColor(new float[]{0.2,0.2,0.2}, 3);
Scene10.addChild(&Background25);

Viewpoint& Viewpoint26 =  Viewpoint();
Viewpoint26.setDescription(CString("Viewpoint"));
Viewpoint26.setPosition(new float[]{0.0,0.0,4.0});
Scene10.addChild(&Viewpoint26);

ParticleSystem& ParticleSystem27 =  ParticleSystem();
ParticleSystem27.setGeometryType(CString("POINT"));
ParticleSystem27.setMaxParticles(1000);
ParticleSystem27.setParticleLifetime(10);
ParticleSystem27.setLifetimeVariation(0.01);
ParticleSystem27.setParticleSize(new float[]{0.1,0.1});
ParticleSystem27.setColorKey(new float[]{0.0,0.1,0.4,1.0}, 4);
ConeEmitter& ConeEmitter28 =  ConeEmitter();
ConeEmitter28.setDirection(new float[]{1.0,1.0,0.0});
ParticleSystem27.setEmitter(ConeEmitter28);

ColorRGBA& ColorRGBA29 =  ColorRGBA();
ColorRGBA29.setColor(new float[]{1.0,0.38,0.0,1.0,1.0,0.58,0.06,1.0,1.0,0.37,0.0,1.0,1.0,0.05,0.0,1.0}, 16);
ParticleSystem27.addChild(&ColorRGBA29);

Appearance& Appearance30 =  Appearance();
PointProperties& PointProperties31 =  PointProperties();
PointProperties31.setPointSizeScaleFactor(2);
PointProperties31.setPointSizeMinValue(2);
PointProperties31.setPointSizeMaxValue(2);
Appearance30.setPointProperties(PointProperties31);

ParticleSystem27.addChildren(&Appearance30);

Scene10.addChild(&ParticleSystem27);

Transform& Transform32 =  Transform();
Transform32.setDEF(CString("IndexedLineSet"));
Shape& Shape33 =  Shape();
IndexedLineSet& IndexedLineSet34 =  IndexedLineSet();
IndexedLineSet34.setColorPerVertex(false);
IndexedLineSet34.setColorIndex(new int[]{0,1,2}, 3);
IndexedLineSet34.setCoordIndex(new int32_t[]{0,1,-1,2,3,-1,4,5,-1}, 9);
CColor& Color35 =  CColor();
Color35.setColor(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0}, 9);
IndexedLineSet34.setColor(&Color35);

Coordinate& Coordinate36 =  Coordinate();
Coordinate36.setPoint(new float[]{-1.0,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,0.0,0.0,1.0}, 18);
IndexedLineSet34.setCoord(&Coordinate36);

Shape33.setGeometry(&IndexedLineSet34);

Transform32.addChild(&Shape33);

Scene10.addChild(&Transform32);

ProtoInstance& ProtoInstance37 =  ProtoInstance();
ProtoInstance37.setName(CString("Grid"));
Scene10.addChild(&ProtoInstance37);

X3D0.setScene(&Scene10);

//}
