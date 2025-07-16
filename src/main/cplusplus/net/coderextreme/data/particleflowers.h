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

meta& meta14 =  meta();
meta14.setName(CString("generator"));
meta14.setContent(CString("Vim"));
head1.addMeta(&meta14);

X3D0.setHead(&head1);

Scene& Scene15 =  Scene();
WorldInfo& WorldInfo16 =  WorldInfo();
WorldInfo16.setTitle(CString("particleflowers.x3d"));
Scene15.addChild(&WorldInfo16);

NavigationInfo& NavigationInfo17 =  NavigationInfo();
NavigationInfo17.setType(new CString[]{CString("ANY"), CString("EXAMINE"), CString("FLY"), CString("LOOKAT")}, 4);
Scene15.addChild(&NavigationInfo17);

Viewpoint& Viewpoint18 =  Viewpoint();
Viewpoint18.setDescription(CString("Tour Views"));
Viewpoint18.setPosition(new float[]{0.0,0.0,12.0});
Scene15.addChild(&Viewpoint18);

Background& Background19 =  Background();
Background19.setBackUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"), CString("../resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
Background19.setBottomUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), CString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
Background19.setFrontUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"), CString("../resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
Background19.setLeftUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"), CString("../resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
Background19.setRightUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"), CString("../resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
Background19.setTopUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"), CString("../resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
Scene15.addChild(&Background19);

Group& Group20 =  Group();
ParticleSystem& ParticleSystem21 =  ParticleSystem();
ParticleSystem21.setMaxParticles(20);
ParticleSystem21.setGeometryType(CString("GEOMETRY"));
BoundedPhysicsModel& BoundedPhysicsModel22 =  BoundedPhysicsModel();
Sphere& Sphere23 =  Sphere();
Sphere23.setRadius(100);
BoundedPhysicsModel22.setGeometry(&Sphere23);

ParticleSystem21.addPhysics(BoundedPhysicsModel22);

ExplosionEmitter& ExplosionEmitter24 =  ExplosionEmitter();
ExplosionEmitter24.setSpeed(2);
ExplosionEmitter24.setVariation(0.75);
ParticleSystem21.setEmitter(ExplosionEmitter24);

Appearance& Appearance25 =  Appearance();
Material& Material26 =  Material();
Material26.setDiffuseColor(new float[]{0.7,0.7,0.7});
Material26.setSpecularColor(new float[]{0.5,0.5,0.5});
Appearance25.addChild(&Material26);

ComposedCubeMapTexture& ComposedCubeMapTexture27 =  ComposedCubeMapTexture();
ComposedCubeMapTexture27.setDEF(CString("texture"));
ImageTexture& ImageTexture28 =  ImageTexture();
ImageTexture28.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"), CString("../resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
ComposedCubeMapTexture27.setBack(ImageTexture28);

ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), CString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
ComposedCubeMapTexture27.setBottom(ImageTexture29);

ImageTexture& ImageTexture30 =  ImageTexture();
ImageTexture30.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"), CString("../resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
ComposedCubeMapTexture27.setFront(ImageTexture30);

ImageTexture& ImageTexture31 =  ImageTexture();
ImageTexture31.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"), CString("../resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
ComposedCubeMapTexture27.setLeft(ImageTexture31);

ImageTexture& ImageTexture32 =  ImageTexture();
ImageTexture32.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"), CString("../resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
ComposedCubeMapTexture27.setRight(ImageTexture32);

ImageTexture& ImageTexture33 =  ImageTexture();
ImageTexture33.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"), CString("../resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
ComposedCubeMapTexture27.setTop(ImageTexture33);

Appearance25.addChild(&ComposedCubeMapTexture27);

ComposedShader& ComposedShader34 =  ComposedShader();
ComposedShader34.setDEF(CString("x_ite"));
ComposedShader34.setLanguage(CString("GLSL"));
field& field35 =  field();
field35.setName(CString("chromaticDispertion"));
field35.setAccessType(CString("initializeOnly"));
field35.setType(CString("SFVec3f"));
field35.setValue(CString("0.98 1 1.033"));
ComposedShader34.addChild(&field35);

field& field36 =  field();
field36.setName(CString("cube"));
field36.setType(CString("SFNode"));
field36.setAccessType(CString("initializeOnly"));
ComposedCubeMapTexture& ComposedCubeMapTexture37 =  ComposedCubeMapTexture();
ComposedCubeMapTexture37.setUSE(CString("texture"));
field36.addChild(&ComposedCubeMapTexture37);

ComposedShader34.addChild(&field36);

field& field38 =  field();
field38.setName(CString("bias"));
field38.setAccessType(CString("initializeOnly"));
field38.setType(CString("SFFloat"));
field38.setValue(CString("0.5"));
ComposedShader34.addChild(&field38);

field& field39 =  field();
field39.setName(CString("scale"));
field39.setAccessType(CString("initializeOnly"));
field39.setType(CString("SFFloat"));
field39.setValue(CString("0.5"));
ComposedShader34.addChild(&field39);

field& field40 =  field();
field40.setName(CString("power"));
field40.setAccessType(CString("initializeOnly"));
field40.setType(CString("SFFloat"));
field40.setValue(CString("2"));
ComposedShader34.addChild(&field40);

field& field41 =  field();
field41.setName(CString("a"));
field41.setType(CString("SFFloat"));
field41.setAccessType(CString("inputOutput"));
field41.setValue(CString("2"));
ComposedShader34.addChild(&field41);

field& field42 =  field();
field42.setName(CString("b"));
field42.setType(CString("SFFloat"));
field42.setAccessType(CString("inputOutput"));
field42.setValue(CString("1"));
ComposedShader34.addChild(&field42);

field& field43 =  field();
field43.setName(CString("c"));
field43.setType(CString("SFFloat"));
field43.setAccessType(CString("inputOutput"));
field43.setValue(CString("5"));
ComposedShader34.addChild(&field43);

field& field44 =  field();
field44.setName(CString("d"));
field44.setType(CString("SFFloat"));
field44.setAccessType(CString("inputOutput"));
field44.setValue(CString("5"));
ComposedShader34.addChild(&field44);

field& field45 =  field();
field45.setName(CString("tdelta"));
field45.setType(CString("SFFloat"));
field45.setAccessType(CString("inputOutput"));
field45.setValue(CString("0"));
ComposedShader34.addChild(&field45);

field& field46 =  field();
field46.setName(CString("pdelta"));
field46.setType(CString("SFFloat"));
field46.setAccessType(CString("inputOutput"));
field46.setValue(CString("0"));
ComposedShader34.addChild(&field46);

ShaderPart& ShaderPart47 =  ShaderPart();
ShaderPart47.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flower_particles.vs"), CString("../shaders/x_ite_flower_particles.vs")}, 2);
ShaderPart47.setType(CString("VERTEX"));
ComposedShader34.setParts(&ShaderPart47);

ShaderPart& ShaderPart48 =  ShaderPart();
ShaderPart48.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs"), CString("../shaders/commonnew.fs")}, 2);
ShaderPart48.setType(CString("FRAGMENT"));
ComposedShader34.setParts(&ShaderPart48);

Appearance25.addChild(&ComposedShader34);

ParticleSystem21.addChildren(&Appearance25);

Sphere& Sphere49 =  Sphere();
ParticleSystem21.setGeometry(&Sphere49);

Group20.addChild(&ParticleSystem21);

Script& Script50 =  Script();
Script50.setDEF(CString("Animate"));
field& field51 =  field();
field51.setName(CString("translation"));
field51.setAccessType(CString("inputOutput"));
field51.setType(CString("SFVec3f"));
field51.setValue(CString("0 0 0"));
Script50.addChild(&field51);

field& field52 =  field();
field52.setName(CString("velocity"));
field52.setAccessType(CString("inputOutput"));
field52.setType(CString("SFVec3f"));
field52.setValue(CString("0 0 0"));
Script50.addChild(&field52);

field& field53 =  field();
field53.setName(CString("set_fraction"));
field53.setAccessType(CString("inputOnly"));
field53.setType(CString("SFFloat"));
Script50.addChild(&field53);

field& field54 =  field();
field54.setName(CString("a"));
field54.setType(CString("SFFloat"));
field54.setAccessType(CString("inputOutput"));
field54.setValue(CString("0.5"));
Script50.addChild(&field54);

field& field55 =  field();
field55.setName(CString("b"));
field55.setType(CString("SFFloat"));
field55.setAccessType(CString("inputOutput"));
field55.setValue(CString("0.5"));
Script50.addChild(&field55);

field& field56 =  field();
field56.setName(CString("c"));
field56.setType(CString("SFFloat"));
field56.setAccessType(CString("inputOutput"));
field56.setValue(CString("3"));
Script50.addChild(&field56);

field& field57 =  field();
field57.setName(CString("d"));
field57.setType(CString("SFFloat"));
field57.setAccessType(CString("inputOutput"));
field57.setValue(CString("3"));
Script50.addChild(&field57);

field& field58 =  field();
field58.setName(CString("tdelta"));
field58.setType(CString("SFFloat"));
field58.setAccessType(CString("inputOutput"));
field58.setValue(CString("0.5"));
Script50.addChild(&field58);

field& field59 =  field();
field59.setName(CString("pdelta"));
field59.setType(CString("SFFloat"));
field59.setAccessType(CString("inputOutput"));
field59.setValue(CString("0.5"));
Script50.addChild(&field59);


//Script50.setSourceCode(CString("ecmascript:")+
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
Group20.addChild(&Script50);

TimeSensor& TimeSensor60 =  TimeSensor();
TimeSensor60.setDEF(CString("TourTime"));
TimeSensor60.setCycleInterval(5);
TimeSensor60.setLoop(true);
Group20.addChild(&TimeSensor60);

ROUTE& ROUTE61 =  ROUTE();
ROUTE61.setFromNode(CString("TourTime"));
ROUTE61.setFromField(CString("fraction_changed"));
ROUTE61.setToNode(CString("Animate"));
ROUTE61.setToField(CString("set_fraction"));
Group20.addChild(&ROUTE61);

ROUTE& ROUTE62 =  ROUTE();
ROUTE62.setFromNode(CString("Animate"));
ROUTE62.setFromField(CString("a"));
ROUTE62.setToNode(CString("x_ite"));
ROUTE62.setToField(CString("a"));
Group20.addChild(&ROUTE62);

ROUTE& ROUTE63 =  ROUTE();
ROUTE63.setFromNode(CString("Animate"));
ROUTE63.setFromField(CString("b"));
ROUTE63.setToNode(CString("x_ite"));
ROUTE63.setToField(CString("b"));
Group20.addChild(&ROUTE63);

ROUTE& ROUTE64 =  ROUTE();
ROUTE64.setFromNode(CString("Animate"));
ROUTE64.setFromField(CString("c"));
ROUTE64.setToNode(CString("x_ite"));
ROUTE64.setToField(CString("c"));
Group20.addChild(&ROUTE64);

ROUTE& ROUTE65 =  ROUTE();
ROUTE65.setFromNode(CString("Animate"));
ROUTE65.setFromField(CString("d"));
ROUTE65.setToNode(CString("x_ite"));
ROUTE65.setToField(CString("d"));
Group20.addChild(&ROUTE65);

ROUTE& ROUTE66 =  ROUTE();
ROUTE66.setFromNode(CString("Animate"));
ROUTE66.setFromField(CString("pdelta"));
ROUTE66.setToNode(CString("x_ite"));
ROUTE66.setToField(CString("pdelta"));
Group20.addChild(&ROUTE66);

ROUTE& ROUTE67 =  ROUTE();
ROUTE67.setFromNode(CString("Animate"));
ROUTE67.setFromField(CString("tdelta"));
ROUTE67.setToNode(CString("x_ite"));
ROUTE67.setToField(CString("tdelta"));
Group20.addChild(&ROUTE67);

Scene15.addChild(&Group20);

X3D0.setScene(&Scene15);

//}
