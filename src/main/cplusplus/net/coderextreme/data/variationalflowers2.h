//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Full"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
component& component2 =  component();
component2.setName(CString("EnvironmentalEffects"));
component2.setLevel(3);
head1.addChild(&component2);

component& component3 =  component();
component3.setName(CString("Shaders"));
component3.setLevel(1);
head1.addChild(&component3);

component& component4 =  component();
component4.setName(CString("CubeMapTexturing"));
component4.setLevel(1);
head1.addChild(&component4);

component& component5 =  component();
component5.setName(CString("Texturing"));
component5.setLevel(1);
head1.addChild(&component5);

component& component6 =  component();
component6.setName(CString("Rendering"));
component6.setLevel(1);
head1.addChild(&component6);

component& component7 =  component();
component7.setName(CString("Grouping"));
component7.setLevel(3);
head1.addChild(&component7);

component& component8 =  component();
component8.setName(CString("Core"));
component8.setLevel(1);
head1.addChild(&component8);

component& component9 =  component();
component9.setName(CString("ParticleSystems"));
component9.setLevel(3);
head1.addChild(&component9);

meta& meta10 =  meta();
meta10.setName(CString("title"));
meta10.setContent(CString("variationalflowers.x3d"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("creator"));
meta11.setContent(CString("John Carlson"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("description"));
meta12.setContent(CString("A flower particle system"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("identifier"));
meta13.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/variationalflowers.x3d"));
head1.addMeta(&meta13);

X3D0.setHead(&head1);

Scene& Scene14 =  Scene();
WorldInfo& WorldInfo15 =  WorldInfo();
WorldInfo15.setTitle(CString("variationalflowers.x3d"));
Scene14.addChild(&WorldInfo15);

NavigationInfo& NavigationInfo16 =  NavigationInfo();
NavigationInfo16.setType(new CString[]{CString("ANY"), CString("EXAMINE"), CString("FLY"), CString("LOOKAT")}, 4);
Scene14.addChild(&NavigationInfo16);

Viewpoint& Viewpoint17 =  Viewpoint();
Viewpoint17.setDescription(CString("Tour Views"));
Viewpoint17.setPosition(new float[]{0.0,0.0,12.0});
Scene14.addChild(&Viewpoint17);

Background& Background18 =  Background();
Background18.setBackUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 1);
Background18.setBottomUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 1);
Background18.setFrontUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 1);
Background18.setLeftUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 1);
Background18.setRightUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 1);
Background18.setTopUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 1);
Scene14.addChild(&Background18);

Transform& Transform19 =  Transform();
ParticleSystem& ParticleSystem20 =  ParticleSystem();
ParticleSystem20.setMaxParticles(20);
ParticleSystem20.setGeometryType(CString("GEOMETRY"));
//* values - array of MFFloats to pass to ComposedShader * variations in values - array of MFFloats to pass to ComposedShader that varies values
VariationPhysicsModel& VariationPhysicsModel21 =  VariationPhysicsModel();
VariationPhysicsModel21.setValues(new float[]{2.0,2.0,5.0,5.0,0.0,0.0}, 6);
VariationPhysicsModel21.setVariations(new float[]{0.2,0.1,0.3,0.3,0.01,0.01}, 6);
ParticleSystem20.addPhysics(VariationPhysicsModel21);

ExplosionEmitter& ExplosionEmitter22 =  ExplosionEmitter();
ExplosionEmitter22.setSpeed(1);
ExplosionEmitter22.setVariation(0.75);
ParticleSystem20.setEmitter(ExplosionEmitter22);

Sphere& Sphere23 =  Sphere();
ParticleSystem20.setGeometry(&Sphere23);

Appearance& Appearance24 =  Appearance();
Material& Material25 =  Material();
Material25.setDiffuseColor(new float[]{0.7,0.7,0.7});
Material25.setSpecularColor(new float[]{0.5,0.5,0.5});
Appearance24.addChild(&Material25);

ComposedCubeMapTexture& ComposedCubeMapTexture26 =  ComposedCubeMapTexture();
ComposedCubeMapTexture26.setDEF(CString("texture"));
ImageTexture& ImageTexture27 =  ImageTexture();
ImageTexture27.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 1);
ComposedCubeMapTexture26.setBack(ImageTexture27);

ImageTexture& ImageTexture28 =  ImageTexture();
ImageTexture28.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 1);
ComposedCubeMapTexture26.setBottom(ImageTexture28);

ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 1);
ComposedCubeMapTexture26.setFront(ImageTexture29);

ImageTexture& ImageTexture30 =  ImageTexture();
ImageTexture30.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 1);
ComposedCubeMapTexture26.setLeft(ImageTexture30);

ImageTexture& ImageTexture31 =  ImageTexture();
ImageTexture31.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 1);
ComposedCubeMapTexture26.setRight(ImageTexture31);

ImageTexture& ImageTexture32 =  ImageTexture();
ImageTexture32.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 1);
ComposedCubeMapTexture26.setTop(ImageTexture32);

Appearance24.addChild(&ComposedCubeMapTexture26);

ComposedShader& ComposedShader33 =  ComposedShader();
ComposedShader33.setDEF(CString("x_ite"));
ComposedShader33.setLanguage(CString("GLSL"));
field& field34 =  field();
field34.setName(CString("chromaticDispertion"));
field34.setAccessType(CString("initializeOnly"));
field34.setType(CString("SFVec3f"));
field34.setValue(CString("0.98 1 1.033"));
ComposedShader33.addChild(&field34);

field& field35 =  field();
field35.setName(CString("cube"));
field35.setType(CString("SFNode"));
field35.setAccessType(CString("initializeOnly"));
ComposedCubeMapTexture& ComposedCubeMapTexture36 =  ComposedCubeMapTexture();
ComposedCubeMapTexture36.setUSE(CString("texture"));
field35.addChild(&ComposedCubeMapTexture36);

ComposedShader33.addChild(&field35);

field& field37 =  field();
field37.setName(CString("bias"));
field37.setAccessType(CString("initializeOnly"));
field37.setType(CString("SFFloat"));
field37.setValue(CString("0.5"));
ComposedShader33.addChild(&field37);

field& field38 =  field();
field38.setName(CString("scale"));
field38.setAccessType(CString("initializeOnly"));
field38.setType(CString("SFFloat"));
field38.setValue(CString("0.5"));
ComposedShader33.addChild(&field38);

field& field39 =  field();
field39.setName(CString("power"));
field39.setAccessType(CString("initializeOnly"));
field39.setType(CString("SFFloat"));
field39.setValue(CString("2"));
ComposedShader33.addChild(&field39);

field& field40 =  field();
field40.setName(CString("x3d_ParticleValues"));
field40.setType(CString("MFFloat"));
field40.setAccessType(CString("inputOutput"));
field40.setValue(CString("2 1 4 4 0 0"));
ComposedShader33.addChild(&field40);

ShaderPart& ShaderPart41 =  ShaderPart();
ShaderPart41.setUrl(new CString[]{CString("../shaders/x_ite_variations.vs")}, 1);
ShaderPart41.setType(CString("VERTEX"));
ComposedShader33.setParts(&ShaderPart41);

ShaderPart& ShaderPart42 =  ShaderPart();
ShaderPart42.setUrl(new CString[]{CString("../shaders/commonnew.fs")}, 1);
ShaderPart42.setType(CString("FRAGMENT"));
ComposedShader33.setParts(&ShaderPart42);

Appearance24.addChild(&ComposedShader33);

ParticleSystem20.addChildren(&Appearance24);

Transform19.addChild(&ParticleSystem20);

Script& Script43 =  Script();
Script43.setDEF(CString("Animate"));
field& field44 =  field();
field44.setName(CString("set_fraction"));
field44.setAccessType(CString("inputOnly"));
field44.setType(CString("SFFloat"));
Script43.addChild(&field44);

field& field45 =  field();
field45.setName(CString("values"));
field45.setType(CString("MFFloat"));
field45.setAccessType(CString("inputOutput"));
field45.setValue(CString("2 2 5 5 0 0"));
Script43.addChild(&field45);

field& field46 =  field();
field46.setName(CString("variations"));
field46.setType(CString("MFFloat"));
field46.setAccessType(CString("inputOutput"));
field46.setValue(CString("0.2 0.1 0.3 0.3 0.01 0.01"));
Script43.addChild(&field46);

field& field47 =  field();
field47.setName(CString("lastframe"));
field47.setType(CString("SFFloat"));
field47.setAccessType(CString("inputOutput"));
field47.setValue(CString("0"));
Script43.addChild(&field47);

field& field48 =  field();
field48.setName(CString("updaterate"));
field48.setType(CString("SFFloat"));
field48.setAccessType(CString("inputOutput"));
field48.setValue(CString("0.1"));
Script43.addChild(&field48);


//Script43.setSourceCode(CString("ecmascript:")+
//_T("			function set_fraction(f, tm) {")+
//_T("			    if (lastframe + updaterate < tm) {")+
//_T("			  	lastframe = tm;")+
//_T("				for (let v in values) {")+
//_T("					values[v] = values[v] + (2 * Math.random() - 1) * variations[v];")+
//_T("				}")+
//_T("			    }")+
//_T("			}"));
Transform19.addChild(&Script43);

TimeSensor& TimeSensor49 =  TimeSensor();
TimeSensor49.setDEF(CString("TourTime"));
TimeSensor49.setCycleInterval(45);
TimeSensor49.setLoop(true);
Transform19.addChild(&TimeSensor49);

ROUTE& ROUTE50 =  ROUTE();
ROUTE50.setFromNode(CString("TourTime"));
ROUTE50.setFromField(CString("fraction_changed"));
ROUTE50.setToNode(CString("Animate"));
ROUTE50.setToField(CString("set_fraction"));
Transform19.addChild(&ROUTE50);

ROUTE& ROUTE51 =  ROUTE();
ROUTE51.setFromNode(CString("Animate"));
ROUTE51.setFromField(CString("values"));
ROUTE51.setToNode(CString("x_ite"));
ROUTE51.setToField(CString("x3d_ParticleValues"));
Transform19.addChild(&ROUTE51);

Scene14.addChild(&Transform19);

X3D0.setScene(&Scene14);

//}
