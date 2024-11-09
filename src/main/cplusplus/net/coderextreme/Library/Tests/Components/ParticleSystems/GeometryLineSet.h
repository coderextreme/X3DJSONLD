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
meta4.setContent(CString("Sun, 15 May 2016 00:15:37 GMT"));
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
meta7.setContent(CString("Titania V1.4.3, http://titania.create3000.de"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("generator"));
meta8.setContent(CString("Sunrize X3D Editor V1.6.10, https://create3000.github.io/sunrize/"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("identifier"));
meta9.setContent(CString("file:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/GeometryLine.x3d"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("modified"));
meta10.setContent(CString("Tue, 23 Apr 2024 10:21:55 GMT"));
head1.addMeta(&meta10);

X3D0.setHead(&head1);

Scene& Scene11 =  Scene();
ExternProtoDeclare& ExternProtoDeclare12 =  ExternProtoDeclare();
ExternProtoDeclare12.setName(CString("Grid"));
ExternProtoDeclare12.setUrl(new CString[]{CString(", "), CString("GridTool.x3dv#Gridfile:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/GridTool.x3dv#Grid")}, 2);
field& field13 =  field();
field13.setName(CString("translation"));
field13.setAccessType(CString("inputOutput"));
field13.setType(CString("SFVec3f"));
ExternProtoDeclare12.addChild(&field13);

field& field14 =  field();
field14.setName(CString("rotation"));
field14.setAccessType(CString("inputOutput"));
field14.setType(CString("SFRotation"));
ExternProtoDeclare12.addChild(&field14);

field& field15 =  field();
field15.setName(CString("scale"));
field15.setAccessType(CString("inputOutput"));
field15.setType(CString("SFVec3f"));
ExternProtoDeclare12.addChild(&field15);

field& field16 =  field();
field16.setName(CString("dimension"));
field16.setAccessType(CString("inputOutput"));
field16.setType(CString("MFInt32"));
ExternProtoDeclare12.addChild(&field16);

field& field17 =  field();
field17.setName(CString("majorLineEvery"));
field17.setAccessType(CString("inputOutput"));
field17.setType(CString("MFInt32"));
ExternProtoDeclare12.addChild(&field17);

field& field18 =  field();
field18.setName(CString("majorLineOffset"));
field18.setAccessType(CString("inputOutput"));
field18.setType(CString("MFInt32"));
ExternProtoDeclare12.addChild(&field18);

field& field19 =  field();
field19.setName(CString("color"));
field19.setAccessType(CString("inputOutput"));
field19.setType(CString("SFColor"));
ExternProtoDeclare12.addChild(&field19);

field& field20 =  field();
field20.setName(CString("transparency"));
field20.setAccessType(CString("inputOutput"));
field20.setType(CString("SFFloat"));
ExternProtoDeclare12.addChild(&field20);

field& field21 =  field();
field21.setName(CString("lineColor"));
field21.setAccessType(CString("inputOutput"));
field21.setType(CString("SFColor"));
ExternProtoDeclare12.addChild(&field21);

field& field22 =  field();
field22.setName(CString("lineTransparency"));
field22.setAccessType(CString("inputOutput"));
field22.setType(CString("SFFloat"));
ExternProtoDeclare12.addChild(&field22);

field& field23 =  field();
field23.setName(CString("majorLineColor"));
field23.setAccessType(CString("inputOutput"));
field23.setType(CString("SFColor"));
ExternProtoDeclare12.addChild(&field23);

field& field24 =  field();
field24.setName(CString("majorLineTransparency"));
field24.setAccessType(CString("inputOutput"));
field24.setType(CString("SFFloat"));
ExternProtoDeclare12.addChild(&field24);

field& field25 =  field();
field25.setName(CString("solid"));
field25.setAccessType(CString("initializeOnly"));
field25.setType(CString("SFBool"));
ExternProtoDeclare12.addChild(&field25);

Scene11.addChild(&ExternProtoDeclare12);

Background& Background26 =  Background();
Background26.setDEF(CString("Gray"));
Background26.setSkyColor(new float[]{0.2,0.2,0.2}, 3);
Scene11.addChild(&Background26);

Viewpoint& Viewpoint27 =  Viewpoint();
Viewpoint27.setDescription(CString("Viewpoint"));
Viewpoint27.setPosition(new float[]{0.0,20.0,55.0});
Scene11.addChild(&Viewpoint27);

ParticleSystem& ParticleSystem28 =  ParticleSystem();
ParticleSystem28.setGeometryType(CString("GEOMETRY"));
ParticleSystem28.setMaxParticles(10);
ParticleSystem28.setParticleLifetime(4);
ParticleSystem28.setLifetimeVariation(0.5);
ParticleSystem28.setParticleSize(new float[]{1.0,1.0});
PointEmitter& PointEmitter29 =  PointEmitter();
PointEmitter29.setDEF(CString("_1"));
PointEmitter29.setDirection(new float[]{0.0,0.0,0.0});
PointEmitter29.setSpeed(0.5);
PointEmitter29.setVariation(0.5);
PointEmitter29.setMass(0.1);
PointEmitter29.setSurfaceArea(0.1);
ParticleSystem28.setEmitter(PointEmitter29);

WindPhysicsModel& WindPhysicsModel30 =  WindPhysicsModel();
WindPhysicsModel30.setDEF(CString("_2"));
WindPhysicsModel30.setDirection(new float[]{0.0,1.0,0.0});
WindPhysicsModel30.setSpeed(0.7);
WindPhysicsModel30.setGustiness(1.7);
WindPhysicsModel30.setTurbulence(0.3);
ParticleSystem28.addPhysics(WindPhysicsModel30);

WindPhysicsModel& WindPhysicsModel31 =  WindPhysicsModel();
WindPhysicsModel31.setDEF(CString("_3"));
WindPhysicsModel31.setSpeed(0.5);
WindPhysicsModel31.setGustiness(2);
ParticleSystem28.addPhysics(WindPhysicsModel31);

IndexedLineSet& IndexedLineSet32 =  IndexedLineSet();
IndexedLineSet32.setDEF(CString("_4"));
IndexedLineSet32.setColorPerVertex(false);
IndexedLineSet32.setColorIndex(new int[]{0,1,2}, 3);
IndexedLineSet32.setCoordIndex(new int32_t[]{0,1,-1,2,3,-1,4,5,-1}, 9);
CColor& Color33 =  CColor();
Color33.setColor(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0}, 9);
IndexedLineSet32.setColor(&Color33);

Coordinate& Coordinate34 =  Coordinate();
Coordinate34.setPoint(new float[]{-1.0,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,0.0,0.0,1.0}, 18);
IndexedLineSet32.setCoord(&Coordinate34);

ParticleSystem28.setGeometry(&IndexedLineSet32);

Scene11.addChild(&ParticleSystem28);

ParticleSystem& ParticleSystem35 =  ParticleSystem();
ParticleSystem35.setGeometryType(CString("GEOMETRY"));
ParticleSystem35.setMaxParticles(10);
ParticleSystem35.setParticleLifetime(4);
ParticleSystem35.setLifetimeVariation(0.5);
ParticleSystem35.setParticleSize(new float[]{1.0,1.0});
PointEmitter& PointEmitter36 =  PointEmitter();
PointEmitter36.setUSE(CString("_1"));
ParticleSystem35.setEmitter(PointEmitter36);

WindPhysicsModel& WindPhysicsModel37 =  WindPhysicsModel();
WindPhysicsModel37.setUSE(CString("_2"));
ParticleSystem35.addPhysics(WindPhysicsModel37);

WindPhysicsModel& WindPhysicsModel38 =  WindPhysicsModel();
WindPhysicsModel38.setUSE(CString("_3"));
ParticleSystem35.addPhysics(WindPhysicsModel38);

Appearance& Appearance39 =  Appearance();
LineProperties& LineProperties40 =  LineProperties();
LineProperties40.setLinewidthScaleFactor(2);
Appearance39.setLineProperties(LineProperties40);

ParticleSystem35.addChildren(&Appearance39);

IndexedLineSet& IndexedLineSet41 =  IndexedLineSet();
IndexedLineSet41.setUSE(CString("_4"));
ParticleSystem35.setGeometry(&IndexedLineSet41);

Scene11.addChild(&ParticleSystem35);

Transform& Transform42 =  Transform();
Transform42.setDEF(CString("IndexedLineSet"));
Shape& Shape43 =  Shape();
IndexedLineSet& IndexedLineSet44 =  IndexedLineSet();
IndexedLineSet44.setUSE(CString("_4"));
Shape43.setGeometry(&IndexedLineSet44);

Transform42.addChild(&Shape43);

Scene11.addChild(&Transform42);

ProtoInstance& ProtoInstance45 =  ProtoInstance();
ProtoInstance45.setName(CString("Grid"));
Scene11.addChild(&ProtoInstance45);

X3D0.setScene(&Scene11);

//}
