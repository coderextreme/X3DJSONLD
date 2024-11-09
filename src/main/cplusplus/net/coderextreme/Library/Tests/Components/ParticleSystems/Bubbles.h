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
meta3.setContent(CString("Sun, 15 May 2016 00:16:04 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("holger"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V2.0.0, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("identifier"));
meta6.setContent(CString("file:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/Bubbles.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("Mon, 26 Sep 2016 02:51:17 GMT"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
WorldInfo& WorldInfo9 =  WorldInfo();
WorldInfo9.setTitle(CString("Bubbles"));
MetadataSet& MetadataSet10 =  MetadataSet();
MetadataSet10.X3DNode::setName(CString("Titania"));
MetadataSet10.setDEF(CString("Titania"));
MetadataSet10.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet11 =  MetadataSet();
MetadataSet11.X3DNode::setName(CString("NavigationInfo"));
MetadataSet11.setDEF(CString("NavigationInfo"));
MetadataSet11.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString& MetadataString12 =  MetadataString();
MetadataString12.X3DNode::setName(CString("type"));
MetadataString12.setDEF(CString("type"));
MetadataString12.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString12.setValue(new CString[]{CString("EXAMINE")}, 1);
MetadataSet11.setValue((X3DNode *)&MetadataString12);

MetadataSet10.setValue((X3DNode *)&MetadataSet11);

MetadataSet& MetadataSet13 =  MetadataSet();
MetadataSet13.X3DNode::setName(CString("Viewpoint"));
MetadataSet13.setDEF(CString("Viewpoint"));
MetadataSet13.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble14 =  MetadataDouble();
MetadataDouble14.X3DNode::setName(CString("position"));
MetadataDouble14.setDEF(CString("position"));
MetadataDouble14.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble14.setValue(new double[]{1.62303498729208,40.0774585689728,42.6164648005402}, 3);
MetadataSet13.setValue((X3DNode *)&MetadataDouble14);

MetadataDouble& MetadataDouble15 =  MetadataDouble();
MetadataDouble15.X3DNode::setName(CString("orientation"));
MetadataDouble15.setDEF(CString("orientation"));
MetadataDouble15.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble15.setValue(new double[]{0.948208773060804,-0.218726178841849,-0.230345352416253,5.85764824335848}, 4);
MetadataSet13.setValue((X3DNode *)&MetadataDouble15);

MetadataDouble& MetadataDouble16 =  MetadataDouble();
MetadataDouble16.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble16.setDEF(CString("centerOfRotation"));
MetadataDouble16.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble16.setValue(new double[]{0.0,0.0,0.0}, 3);
MetadataSet13.setValue((X3DNode *)&MetadataDouble16);

MetadataSet10.setValue((X3DNode *)&MetadataSet13);

MetadataSet& MetadataSet17 =  MetadataSet();
MetadataSet17.X3DNode::setName(CString("Selection"));
MetadataSet17.setDEF(CString("Selection"));
MetadataSet17.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet18 =  MetadataSet();
MetadataSet18.X3DNode::setName(CString("previous"));
MetadataSet18.setDEF(CString("previous"));
MetadataSet18.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet17.setValue((X3DNode *)&MetadataSet18);

MetadataSet& MetadataSet19 =  MetadataSet();
MetadataSet19.X3DNode::setName(CString("children"));
MetadataSet19.setDEF(CString("children"));
MetadataSet19.X3DNode::setReference(CString("http://titania.create3000.de"));
DirectionalLight& DirectionalLight20 =  DirectionalLight();
DirectionalLight20.setDEF(CString("_1"));
DirectionalLight20.setDirection(new float[]{-0.372556,-0.000038217,-0.92801});
DirectionalLight20.setShadows(true);
DirectionalLight20.setShadowIntensity(0.518717);
MetadataSet19.setDirectionalLight(&DirectionalLight20);

MetadataSet17.setValue((X3DNode *)&MetadataSet19);

MetadataSet10.setValue((X3DNode *)&MetadataSet17);

WorldInfo9.setMetadata(&MetadataSet10);

Scene8.addChild(&WorldInfo9);

Background& Background21 =  Background();
Background21.setDEF(CString("Gray"));
Background21.setSkyColor(new float[]{0.2,0.2,0.2}, 3);
Scene8.addChild(&Background21);

NavigationInfo& NavigationInfo22 =  NavigationInfo();
NavigationInfo22.setHeadlight(false);
Scene8.addChild(&NavigationInfo22);

Viewpoint& Viewpoint23 =  Viewpoint();
Viewpoint23.setDescription(CString("Viewpoint"));
Viewpoint23.setPosition(new float[]{0.0,20.0,55.0});
Scene8.addChild(&Viewpoint23);

Transform& Transform24 =  Transform();
Transform24.setDEF(CString("IndexedLineSet"));
Shape& Shape25 =  Shape();
IndexedLineSet& IndexedLineSet26 =  IndexedLineSet();
IndexedLineSet26.setColorPerVertex(false);
IndexedLineSet26.setColorIndex(new int[]{0,1,2}, 3);
IndexedLineSet26.setCoordIndex(new int32_t[]{0,1,-1,2,3,-1,4,5,-1}, 9);
CColor& Color27 =  CColor();
Color27.setColor(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0}, 9);
IndexedLineSet26.setColor(&Color27);

Coordinate& Coordinate28 =  Coordinate();
Coordinate28.setPoint(new float[]{-1.0,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,0.0,0.0,1.0}, 18);
IndexedLineSet26.setCoord(&Coordinate28);

Shape25.setGeometry(&IndexedLineSet26);

Transform24.addChild(&Shape25);

Scene8.addChild(&Transform24);

ParticleSystem& ParticleSystem29 =  ParticleSystem();
ParticleSystem29.setGeometryType(CString("GEOMETRY"));
ParticleSystem29.setMaxParticles(500);
ParticleSystem29.setParticleLifetime(8);
ParticleSystem29.setLifetimeVariation(0.8);
ParticleSystem29.setParticleSize(new float[]{1.0,1.0});
PointEmitter& PointEmitter30 =  PointEmitter();
PointEmitter30.setDirection(new float[]{0.0,0.0,0.0});
PointEmitter30.setSpeed(0.5);
PointEmitter30.setVariation(0.5);
PointEmitter30.setMass(0.1);
PointEmitter30.setSurfaceArea(0.1);
ParticleSystem29.setEmitter(PointEmitter30);

WindPhysicsModel& WindPhysicsModel31 =  WindPhysicsModel();
WindPhysicsModel31.setDirection(new float[]{0.0,1.0,0.0});
WindPhysicsModel31.setSpeed(0.6);
WindPhysicsModel31.setGustiness(1.7);
WindPhysicsModel31.setTurbulence(0.3);
ParticleSystem29.addPhysics(WindPhysicsModel31);

WindPhysicsModel& WindPhysicsModel32 =  WindPhysicsModel();
WindPhysicsModel32.setSpeed(1);
WindPhysicsModel32.setGustiness(1.5);
ParticleSystem29.addPhysics(WindPhysicsModel32);

Appearance& Appearance33 =  Appearance();
Material& Material34 =  Material();
Material34.setAmbientIntensity(0.25);
Material34.setDiffuseColor(new float[]{1.0,0.520125,0.73699});
Material34.setSpecularColor(new float[]{0.951515,0.951515,0.951515});
Material34.setShininess(0.557576);
Appearance33.addChild(&Material34);

ParticleSystem29.addChildren(&Appearance33);

Sphere& Sphere35 =  Sphere();
ParticleSystem29.setGeometry(&Sphere35);

Scene8.addChild(&ParticleSystem29);

Transform& Transform36 =  Transform();
Transform36.setDEF(CString("Rectangle2D"));
Transform36.setTranslation(new float[]{0.0,19.2591,-14.5791});
Transform36.setScale(new float[]{43.4935,20.2591,1.0});
Shape& Shape37 =  Shape();
Appearance& Appearance38 =  Appearance();
Material& Material39 =  Material();
Appearance38.addChild(&Material39);

Shape37.addChild(&Appearance38);

Rectangle2D& Rectangle2D40 =  Rectangle2D();
Shape37.setGeometry(Rectangle2D40);

Transform36.addChild(&Shape37);

Scene8.addChild(&Transform36);

DirectionalLight& DirectionalLight41 =  DirectionalLight();
DirectionalLight41.setUSE(CString("_1"));
Scene8.addChild(&DirectionalLight41);

Script& Script42 =  Script();
Script42.setDEF(CString("PhongShadingScript"));

//Script42.setSourceCode(CString("ecmascript:")+
//_T("function initialize ()")+
//_T("{")+
//_T("	Browser .setBrowserOption (\"Shading\", \"PHONG\");")+
//_T("}"));
Scene8.addChild(&Script42);

X3D0.setScene(&Scene8);

//}
