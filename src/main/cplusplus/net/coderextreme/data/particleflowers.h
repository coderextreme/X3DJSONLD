//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
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
meta10.setContent(CString("particleflowers.x3d"));
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
meta13.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d"));
head1.addMeta(&meta13);

X3D0.setHead(&head1);

Scene& Scene14 =  Scene();
WorldInfo& WorldInfo15 =  WorldInfo();
WorldInfo15.setTitle(CString("particleflowers.x3d"));
Scene14.addChild(&WorldInfo15);

NavigationInfo& NavigationInfo16 =  NavigationInfo();
NavigationInfo16.setType(new CString[]{CString("ANY"), CString("EXAMINE"), CString("FLY"), CString("LOOKAT")}, 4);
Scene14.addChild(&NavigationInfo16);

Viewpoint& Viewpoint17 =  Viewpoint();
Viewpoint17.setDescription(CString("Tour Views"));
Viewpoint17.setPosition(new float[]{0.0,0.0,12.0});
Scene14.addChild(&Viewpoint17);

Background& Background18 =  Background();
Background18.setBackUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"), CString("../resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
Background18.setBottomUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), CString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
Background18.setFrontUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"), CString("../resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
Background18.setLeftUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"), CString("../resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
Background18.setRightUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"), CString("../resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
Background18.setTopUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"), CString("../resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
Scene14.addChild(&Background18);

Group& Group19 =  Group();
ParticleSystem& ParticleSystem20 =  ParticleSystem();
ParticleSystem20.setMaxParticles(20);
ParticleSystem20.setGeometryType(CString("GEOMETRY"));
BoundedPhysicsModel& BoundedPhysicsModel21 =  BoundedPhysicsModel();
Sphere& Sphere22 =  Sphere();
Sphere22.setRadius(100);
BoundedPhysicsModel21.setGeometry(&Sphere22);

ParticleSystem20.addPhysics(BoundedPhysicsModel21);

ExplosionEmitter& ExplosionEmitter23 =  ExplosionEmitter();
ExplosionEmitter23.setSpeed(2);
ExplosionEmitter23.setVariation(0.75);
ParticleSystem20.setEmitter(ExplosionEmitter23);

Appearance& Appearance24 =  Appearance();
Material& Material25 =  Material();
Material25.setDiffuseColor(new float[]{0.7,0.7,0.7});
Material25.setSpecularColor(new float[]{0.5,0.5,0.5});
Appearance24.addChild(&Material25);

ComposedCubeMapTexture& ComposedCubeMapTexture26 =  ComposedCubeMapTexture();
ComposedCubeMapTexture26.setDEF(CString("texture"));
ImageTexture& ImageTexture27 =  ImageTexture();
ImageTexture27.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"), CString("../resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
ComposedCubeMapTexture26.setBack(ImageTexture27);

ImageTexture& ImageTexture28 =  ImageTexture();
ImageTexture28.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), CString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
ComposedCubeMapTexture26.setBottom(ImageTexture28);

ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"), CString("../resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
ComposedCubeMapTexture26.setFront(ImageTexture29);

ImageTexture& ImageTexture30 =  ImageTexture();
ImageTexture30.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"), CString("../resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
ComposedCubeMapTexture26.setLeft(ImageTexture30);

ImageTexture& ImageTexture31 =  ImageTexture();
ImageTexture31.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"), CString("../resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
ComposedCubeMapTexture26.setRight(ImageTexture31);

ImageTexture& ImageTexture32 =  ImageTexture();
ImageTexture32.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"), CString("../resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
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
field40.setName(CString("a"));
field40.setType(CString("SFFloat"));
field40.setAccessType(CString("inputOutput"));
field40.setValue(CString("2"));
ComposedShader33.addChild(&field40);

field& field41 =  field();
field41.setName(CString("b"));
field41.setType(CString("SFFloat"));
field41.setAccessType(CString("inputOutput"));
field41.setValue(CString("1"));
ComposedShader33.addChild(&field41);

field& field42 =  field();
field42.setName(CString("c"));
field42.setType(CString("SFFloat"));
field42.setAccessType(CString("inputOutput"));
field42.setValue(CString("5"));
ComposedShader33.addChild(&field42);

field& field43 =  field();
field43.setName(CString("d"));
field43.setType(CString("SFFloat"));
field43.setAccessType(CString("inputOutput"));
field43.setValue(CString("5"));
ComposedShader33.addChild(&field43);

field& field44 =  field();
field44.setName(CString("tdelta"));
field44.setType(CString("SFFloat"));
field44.setAccessType(CString("inputOutput"));
field44.setValue(CString("0"));
ComposedShader33.addChild(&field44);

field& field45 =  field();
field45.setName(CString("pdelta"));
field45.setType(CString("SFFloat"));
field45.setAccessType(CString("inputOutput"));
field45.setValue(CString("0"));
ComposedShader33.addChild(&field45);

ShaderPart& ShaderPart46 =  ShaderPart();
ShaderPart46.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flower_particles.vs"), CString("../shaders/x_ite_flower_particles.vs")}, 2);
ShaderPart46.setType(CString("VERTEX"));
ComposedShader33.setParts(&ShaderPart46);

ShaderPart& ShaderPart47 =  ShaderPart();
ShaderPart47.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs"), CString("../shaders/commonnew.fs")}, 2);
ShaderPart47.setType(CString("FRAGMENT"));
ComposedShader33.setParts(&ShaderPart47);

Appearance24.addChild(&ComposedShader33);

ParticleSystem20.addChildren(&Appearance24);

Sphere& Sphere48 =  Sphere();
ParticleSystem20.setGeometry(&Sphere48);

Group19.addChild(&ParticleSystem20);

Script& Script49 =  Script();
Script49.setDEF(CString("Animate"));
field& field50 =  field();
field50.setName(CString("translation"));
field50.setAccessType(CString("inputOutput"));
field50.setType(CString("SFVec3f"));
field50.setValue(CString("0 0 0"));
Script49.addChild(&field50);

field& field51 =  field();
field51.setName(CString("velocity"));
field51.setAccessType(CString("inputOutput"));
field51.setType(CString("SFVec3f"));
field51.setValue(CString("0 0 0"));
Script49.addChild(&field51);

field& field52 =  field();
field52.setName(CString("set_fraction"));
field52.setAccessType(CString("inputOnly"));
field52.setType(CString("SFFloat"));
Script49.addChild(&field52);

field& field53 =  field();
field53.setName(CString("a"));
field53.setType(CString("SFFloat"));
field53.setAccessType(CString("inputOutput"));
field53.setValue(CString("0.5"));
Script49.addChild(&field53);

field& field54 =  field();
field54.setName(CString("b"));
field54.setType(CString("SFFloat"));
field54.setAccessType(CString("inputOutput"));
field54.setValue(CString("0.5"));
Script49.addChild(&field54);

field& field55 =  field();
field55.setName(CString("c"));
field55.setType(CString("SFFloat"));
field55.setAccessType(CString("inputOutput"));
field55.setValue(CString("3"));
Script49.addChild(&field55);

field& field56 =  field();
field56.setName(CString("d"));
field56.setType(CString("SFFloat"));
field56.setAccessType(CString("inputOutput"));
field56.setValue(CString("3"));
Script49.addChild(&field56);

field& field57 =  field();
field57.setName(CString("tdelta"));
field57.setType(CString("SFFloat"));
field57.setAccessType(CString("inputOutput"));
field57.setValue(CString("0.5"));
Script49.addChild(&field57);

field& field58 =  field();
field58.setName(CString("pdelta"));
field58.setType(CString("SFFloat"));
field58.setAccessType(CString("inputOutput"));
field58.setValue(CString("0.5"));
Script49.addChild(&field58);


//Script49.setSourceCode(CString("ecmascript:")+
//_T("			function initialize() {")+
//_T("			    translation = new SFVec3f(0, 0, 0);")+
//_T("			    velocity = new SFVec3f(")+
//_T("			    	Math.random() - 0.5,")+
//_T("				Math.random() - 0.5,")+
//_T("				Math.random() - 0.5);")+
//_T("			}")+
//_T("			function set_fraction() {")+
//_T("			    translation = new SFVec3f(")+
//_T("			    	translation.x + velocity.x,")+
//_T("				translation.y + velocity.y,")+
//_T("				translation.z + velocity.z);")+
//_T("			    for (var j = 0; j <= 2; j++) {")+
//_T("				    if (Math.abs(translation.x) > 10) {")+
//_T("					initialize();")+
//_T("				    } else if (Math.abs(translation.y) > 10) {")+
//_T("					initialize();")+
//_T("				    } else if (Math.abs(translation.z) > 10) {")+
//_T("					initialize();")+
//_T("				    } else {")+
//_T("					velocity.x += Math.random() * 0.2 - 0.1;")+
//_T("					velocity.y += Math.random() * 0.2 - 0.1;")+
//_T("					velocity.z += Math.random() * 0.2 - 0.1;")+
//_T("				    }")+
//_T("			    }")+
//_T("			    animate_flowers();")+
//_T("			}")+
//_T("			function animate_flowers(fraction, eventTime) {")+
//_T("				var choice = Math.floor(Math.random() * 4);")+
//_T("				switch (choice) {")+
//_T("				case 0:")+
//_T("					a += Math.random() * 0.2 - 0.1;")+
//_T("					break;")+
//_T("				case 1:")+
//_T("					b += Math.random() * 0.2 - 0.1;")+
//_T("					break;")+
//_T("				case 2:")+
//_T("					c += Math.random() * 2 - 1;")+
//_T("					break;")+
//_T("				case 3:")+
//_T("					d += Math.random() * 2 - 1;")+
//_T("					break;")+
//_T("				}")+
//_T("				tdelta = tdelta + 0.05;")+
//_T("				pdelta = pdelta + 0.05;")+
//_T("				if (a > 1) {")+
//_T("					a =  0.5;")+
//_T("				}")+
//_T("				if (b > 1) {")+
//_T("					b =  0.5;")+
//_T("				}")+
//_T("				if (c < 1) {")+
//_T("					c =  4;")+
//_T("				}")+
//_T("				if (d < 1) {")+
//_T("					d =  4;")+
//_T("				}")+
//_T("				if (c > 10) {")+
//_T("					c = 4;")+
//_T("				}")+
//_T("				if (d > 10) {")+
//_T("					d = 4;")+
//_T("				}")+
//_T("			}"));
Group19.addChild(&Script49);

TimeSensor& TimeSensor59 =  TimeSensor();
TimeSensor59.setDEF(CString("TourTime"));
TimeSensor59.setCycleInterval(5);
TimeSensor59.setLoop(true);
Group19.addChild(&TimeSensor59);

ROUTE& ROUTE60 =  ROUTE();
ROUTE60.setFromNode(CString("TourTime"));
ROUTE60.setFromField(CString("fraction_changed"));
ROUTE60.setToNode(CString("Animate"));
ROUTE60.setToField(CString("set_fraction"));
Group19.addChild(&ROUTE60);

ROUTE& ROUTE61 =  ROUTE();
ROUTE61.setFromNode(CString("Animate"));
ROUTE61.setFromField(CString("a"));
ROUTE61.setToNode(CString("x_ite"));
ROUTE61.setToField(CString("a"));
Group19.addChild(&ROUTE61);

ROUTE& ROUTE62 =  ROUTE();
ROUTE62.setFromNode(CString("Animate"));
ROUTE62.setFromField(CString("b"));
ROUTE62.setToNode(CString("x_ite"));
ROUTE62.setToField(CString("b"));
Group19.addChild(&ROUTE62);

ROUTE& ROUTE63 =  ROUTE();
ROUTE63.setFromNode(CString("Animate"));
ROUTE63.setFromField(CString("c"));
ROUTE63.setToNode(CString("x_ite"));
ROUTE63.setToField(CString("c"));
Group19.addChild(&ROUTE63);

ROUTE& ROUTE64 =  ROUTE();
ROUTE64.setFromNode(CString("Animate"));
ROUTE64.setFromField(CString("d"));
ROUTE64.setToNode(CString("x_ite"));
ROUTE64.setToField(CString("d"));
Group19.addChild(&ROUTE64);

ROUTE& ROUTE65 =  ROUTE();
ROUTE65.setFromNode(CString("Animate"));
ROUTE65.setFromField(CString("pdelta"));
ROUTE65.setToNode(CString("x_ite"));
ROUTE65.setToField(CString("pdelta"));
Group19.addChild(&ROUTE65);

ROUTE& ROUTE66 =  ROUTE();
ROUTE66.setFromNode(CString("Animate"));
ROUTE66.setFromField(CString("tdelta"));
ROUTE66.setToNode(CString("x_ite"));
ROUTE66.setToField(CString("tdelta"));
Group19.addChild(&ROUTE66);

Scene14.addChild(&Group19);

X3D0.setScene(&Scene14);

//}
