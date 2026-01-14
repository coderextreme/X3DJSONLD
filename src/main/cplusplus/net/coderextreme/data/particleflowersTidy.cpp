#ifndef WIN32
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#define WINGDIAPI
#define APIENTRY
#endif
#define FALSE false
#define TRUE true
#define BOOL bool
#define False false
#define True true
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
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
component5.setName(CString("Grouping"));
component5.setLevel(3);
head1.addChild(&component5);

component& component6 =  component();
component6.setName(CString("ParticleSystems"));
component6.setLevel(3);
head1.addChild(&component6);

meta& meta7 =  meta();
meta7.setName(CString("title"));
meta7.setContent(CString("particleflowers.x3d"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("creator"));
meta8.setContent(CString("John Carlson"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("description"));
meta9.setContent(CString("A flower particle system"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("identifier"));
meta10.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("generator"));
meta11.setContent(CString("Vim"));
head1.addMeta(&meta11);

X3D0.setHead(&head1);

Scene& Scene12 =  Scene();
WorldInfo& WorldInfo13 =  WorldInfo();
WorldInfo13.setTitle(CString("particleflowers.x3d"));
Scene12.addChild(&WorldInfo13);

NavigationInfo& NavigationInfo14 =  NavigationInfo();
NavigationInfo14.setType(new CString[]{CString("ANY"), CString("EXAMINE"), CString("FLY"), CString("LOOKAT")}, 4);
Scene12.addChild(&NavigationInfo14);

Viewpoint& Viewpoint15 =  Viewpoint();
Viewpoint15.setDescription(CString("Tour Views"));
Viewpoint15.setPosition(new float[]{0,0,12});
Scene12.addChild(&Viewpoint15);

Background& Background16 =  Background();
Background16.setFrontUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"), CString("../resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
Background16.setBackUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"), CString("../resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
Background16.setLeftUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"), CString("../resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
Background16.setRightUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"), CString("../resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
Background16.setTopUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"), CString("../resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
Background16.setBottomUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), CString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
Scene12.addChild(&Background16);

Group& Group17 =  Group();
ParticleSystem& ParticleSystem18 =  ParticleSystem();
ParticleSystem18.setGeometryType(CString("GEOMETRY"));
ParticleSystem18.setMaxParticles(20);
ExplosionEmitter& ExplosionEmitter19 =  ExplosionEmitter();
ExplosionEmitter19.setSpeed(2);
ExplosionEmitter19.setVariation(0.75);
ParticleSystem18.setEmitter(ExplosionEmitter19);

BoundedPhysicsModel& BoundedPhysicsModel20 =  BoundedPhysicsModel();
Sphere& Sphere21 =  Sphere();
Sphere21.setRadius(100);
BoundedPhysicsModel20.setGeometry(&Sphere21);

ParticleSystem18.addPhysics(BoundedPhysicsModel20);

Appearance& Appearance22 =  Appearance();
Material& Material23 =  Material();
Material23.setDiffuseColor(new float[]{0.7,0.7,0.7});
Material23.setSpecularColor(new float[]{0.5,0.5,0.5});
Appearance22.addChild(&Material23);

ComposedCubeMapTexture& ComposedCubeMapTexture24 =  ComposedCubeMapTexture();
ComposedCubeMapTexture24.setDEF(CString("texture"));
ImageTexture& ImageTexture25 =  ImageTexture();
ImageTexture25.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"), CString("../resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
ComposedCubeMapTexture24.setFront(ImageTexture25);

ImageTexture& ImageTexture26 =  ImageTexture();
ImageTexture26.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"), CString("../resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
ComposedCubeMapTexture24.setBack(ImageTexture26);

ImageTexture& ImageTexture27 =  ImageTexture();
ImageTexture27.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"), CString("../resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
ComposedCubeMapTexture24.setLeft(ImageTexture27);

ImageTexture& ImageTexture28 =  ImageTexture();
ImageTexture28.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"), CString("../resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
ComposedCubeMapTexture24.setRight(ImageTexture28);

ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"), CString("../resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
ComposedCubeMapTexture24.setTop(ImageTexture29);

ImageTexture& ImageTexture30 =  ImageTexture();
ImageTexture30.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), CString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
ComposedCubeMapTexture24.setBottom(ImageTexture30);

Appearance22.addChild(&ComposedCubeMapTexture24);

ComposedShader& ComposedShader31 =  ComposedShader();
ComposedShader31.setDEF(CString("x_ite"));
ComposedShader31.setLanguage(CString("GLSL"));
ShaderPart& ShaderPart32 =  ShaderPart();
ShaderPart32.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flower_particles.vs"), CString("../shaders/x_ite_flower_particles.vs")}, 2);
ComposedShader31.setParts(&ShaderPart32);

ShaderPart& ShaderPart33 =  ShaderPart();
ShaderPart33.setType(CString("FRAGMENT"));
ShaderPart33.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs"), CString("../shaders/commonnew.fs")}, 2);
ComposedShader31.setParts(&ShaderPart33);

field& field34 =  field();
field34.setAccessType(CString("initializeOnly"));
field34.setType(CString("SFVec3f"));
field34.setName(CString("chromaticDispertion"));
field34.setValue(CString("0.98 1 1.033"));
ComposedShader31.addChild(&field34);

field& field35 =  field();
field35.setAccessType(CString("initializeOnly"));
field35.setType(CString("SFNode"));
field35.setName(CString("cube"));
ComposedCubeMapTexture& ComposedCubeMapTexture36 =  ComposedCubeMapTexture();
ComposedCubeMapTexture36.setUSE(CString("texture"));
field35.addChild(&ComposedCubeMapTexture36);

ComposedShader31.addChild(&field35);

field& field37 =  field();
field37.setAccessType(CString("initializeOnly"));
field37.setType(CString("SFFloat"));
field37.setName(CString("bias"));
field37.setValue(CString("0.5"));
ComposedShader31.addChild(&field37);

field& field38 =  field();
field38.setAccessType(CString("initializeOnly"));
field38.setType(CString("SFFloat"));
field38.setName(CString("scale"));
field38.setValue(CString("0.5"));
ComposedShader31.addChild(&field38);

field& field39 =  field();
field39.setAccessType(CString("initializeOnly"));
field39.setType(CString("SFFloat"));
field39.setName(CString("power"));
field39.setValue(CString("2"));
ComposedShader31.addChild(&field39);

field& field40 =  field();
field40.setAccessType(CString("inputOutput"));
field40.setType(CString("SFFloat"));
field40.setName(CString("a"));
field40.setValue(CString("2"));
ComposedShader31.addChild(&field40);

field& field41 =  field();
field41.setAccessType(CString("inputOutput"));
field41.setType(CString("SFFloat"));
field41.setName(CString("b"));
field41.setValue(CString("1"));
ComposedShader31.addChild(&field41);

field& field42 =  field();
field42.setAccessType(CString("inputOutput"));
field42.setType(CString("SFFloat"));
field42.setName(CString("c"));
field42.setValue(CString("5"));
ComposedShader31.addChild(&field42);

field& field43 =  field();
field43.setAccessType(CString("inputOutput"));
field43.setType(CString("SFFloat"));
field43.setName(CString("d"));
field43.setValue(CString("5"));
ComposedShader31.addChild(&field43);

field& field44 =  field();
field44.setAccessType(CString("inputOutput"));
field44.setType(CString("SFFloat"));
field44.setName(CString("tdelta"));
ComposedShader31.addChild(&field44);

field& field45 =  field();
field45.setAccessType(CString("inputOutput"));
field45.setType(CString("SFFloat"));
field45.setName(CString("pdelta"));
ComposedShader31.addChild(&field45);

Appearance22.addChild(&ComposedShader31);

ParticleSystem18.addChildren(&Appearance22);

Sphere& Sphere46 =  Sphere();
ParticleSystem18.setGeometry(&Sphere46);

Group17.addChild(&ParticleSystem18);

Script& Script47 =  Script();
Script47.setDEF(CString("Animate"));
field& field48 =  field();
field48.setAccessType(CString("inputOutput"));
field48.setType(CString("SFVec3f"));
field48.setName(CString("translation"));
Script47.addChild(&field48);

field& field49 =  field();
field49.setAccessType(CString("inputOutput"));
field49.setType(CString("SFVec3f"));
field49.setName(CString("velocity"));
Script47.addChild(&field49);

field& field50 =  field();
field50.setAccessType(CString("inputOnly"));
field50.setType(CString("SFFloat"));
field50.setName(CString("set_fraction"));
Script47.addChild(&field50);

field& field51 =  field();
field51.setAccessType(CString("inputOutput"));
field51.setType(CString("SFFloat"));
field51.setName(CString("a"));
field51.setValue(CString("0.5"));
Script47.addChild(&field51);

field& field52 =  field();
field52.setAccessType(CString("inputOutput"));
field52.setType(CString("SFFloat"));
field52.setName(CString("b"));
field52.setValue(CString("0.5"));
Script47.addChild(&field52);

field& field53 =  field();
field53.setAccessType(CString("inputOutput"));
field53.setType(CString("SFFloat"));
field53.setName(CString("c"));
field53.setValue(CString("3"));
Script47.addChild(&field53);

field& field54 =  field();
field54.setAccessType(CString("inputOutput"));
field54.setType(CString("SFFloat"));
field54.setName(CString("d"));
field54.setValue(CString("3"));
Script47.addChild(&field54);

field& field55 =  field();
field55.setAccessType(CString("inputOutput"));
field55.setType(CString("SFFloat"));
field55.setName(CString("tdelta"));
field55.setValue(CString("0.5"));
Script47.addChild(&field55);

field& field56 =  field();
field56.setAccessType(CString("inputOutput"));
field56.setType(CString("SFFloat"));
field56.setName(CString("pdelta"));
field56.setValue(CString("0.5"));
Script47.addChild(&field56);


Script47.setSourceCode(CString("ecmascript:")+
_T("			function initialize() {")+
_T("			    translation = new SFVec3f(0, 0, 0);")+
_T("			    velocity = new SFVec3f(")+
_T("			    	Math.random() - 0.5,")+
_T("				Math.random() - 0.5,")+
_T("				Math.random() - 0.5);")+
_T("			}")+
_T("			function set_fraction() {")+
_T("			    translation = new SFVec3f(")+
_T("			    	translation.x + velocity.x,")+
_T("				translation.y + velocity.y,")+
_T("				translation.z + velocity.z);")+
_T("			    for (var j = 0; j <= 2; j++) {")+
_T("				    if (Math.abs(translation.x) > 10) {")+
_T("					initialize();")+
_T("				    } else if (Math.abs(translation.y) > 10) {")+
_T("					initialize();")+
_T("				    } else if (Math.abs(translation.z) > 10) {")+
_T("					initialize();")+
_T("				    } else {")+
_T("					velocity.x += Math.random() * 0.2 - 0.1;")+
_T("					velocity.y += Math.random() * 0.2 - 0.1;")+
_T("					velocity.z += Math.random() * 0.2 - 0.1;")+
_T("				    }")+
_T("			    }")+
_T("			    animate_flowers();")+
_T("			}")+
_T("			function animate_flowers(fraction, eventTime) {")+
_T("				var choice = Math.floor(Math.random() * 4);")+
_T("				switch (choice) {")+
_T("				case 0:")+
_T("					a += Math.random() * 0.2 - 0.1;")+
_T("					break;")+
_T("				case 1:")+
_T("					b += Math.random() * 0.2 - 0.1;")+
_T("					break;")+
_T("				case 2:")+
_T("					c += Math.random() * 2 - 1;")+
_T("					break;")+
_T("				case 3:")+
_T("					d += Math.random() * 2 - 1;")+
_T("					break;")+
_T("				}")+
_T("				tdelta = tdelta + 0.05;")+
_T("				pdelta = pdelta + 0.05;")+
_T("				if (a > 1) {")+
_T("					a =  0.5;")+
_T("				}")+
_T("				if (b > 1) {")+
_T("					b =  0.5;")+
_T("				}")+
_T("				if (c < 1) {")+
_T("					c =  4;")+
_T("				}")+
_T("				if (d < 1) {")+
_T("					d =  4;")+
_T("				}")+
_T("				if (c > 10) {")+
_T("					c = 4;")+
_T("				}")+
_T("				if (d > 10) {")+
_T("					d = 4;")+
_T("				}")+
_T("			}"));
Group17.addChild(&Script47);

TimeSensor& TimeSensor57 =  TimeSensor();
TimeSensor57.setDEF(CString("TourTime"));
TimeSensor57.setCycleInterval(5);
TimeSensor57.setLoop(True);
Group17.addChild(&TimeSensor57);

Scene12.addChild(&Group17);

ROUTE& ROUTE58 =  ROUTE();
ROUTE58.setFromNode(CString("TourTime"));
ROUTE58.setFromField(CString("fraction_changed"));
ROUTE58.setToNode(CString("Animate"));
ROUTE58.setToField(CString("set_fraction"));
Scene12.addChild(&ROUTE58);

ROUTE& ROUTE59 =  ROUTE();
ROUTE59.setFromNode(CString("Animate"));
ROUTE59.setFromField(CString("a_changed"));
ROUTE59.setToNode(CString("x_ite"));
ROUTE59.setToField(CString("set_a"));
Scene12.addChild(&ROUTE59);

ROUTE& ROUTE60 =  ROUTE();
ROUTE60.setFromNode(CString("Animate"));
ROUTE60.setFromField(CString("b_changed"));
ROUTE60.setToNode(CString("x_ite"));
ROUTE60.setToField(CString("set_b"));
Scene12.addChild(&ROUTE60);

ROUTE& ROUTE61 =  ROUTE();
ROUTE61.setFromNode(CString("Animate"));
ROUTE61.setFromField(CString("c_changed"));
ROUTE61.setToNode(CString("x_ite"));
ROUTE61.setToField(CString("set_c"));
Scene12.addChild(&ROUTE61);

ROUTE& ROUTE62 =  ROUTE();
ROUTE62.setFromNode(CString("Animate"));
ROUTE62.setFromField(CString("d_changed"));
ROUTE62.setToNode(CString("x_ite"));
ROUTE62.setToField(CString("set_d"));
Scene12.addChild(&ROUTE62);

ROUTE& ROUTE63 =  ROUTE();
ROUTE63.setFromNode(CString("Animate"));
ROUTE63.setFromField(CString("pdelta_changed"));
ROUTE63.setToNode(CString("x_ite"));
ROUTE63.setToField(CString("set_pdelta"));
Scene12.addChild(&ROUTE63);

ROUTE& ROUTE64 =  ROUTE();
ROUTE64.setFromNode(CString("Animate"));
ROUTE64.setFromField(CString("tdelta_changed"));
ROUTE64.setToNode(CString("x_ite"));
ROUTE64.setToField(CString("set_tdelta"));
Scene12.addChild(&ROUTE64);

X3D0.setScene(&Scene12);

}
