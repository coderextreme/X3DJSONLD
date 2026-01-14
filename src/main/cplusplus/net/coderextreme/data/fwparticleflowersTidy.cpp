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
meta9.setContent(CString("A flower proto with configurable shaders"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("identifier"));
meta10.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d"));
head1.addMeta(&meta10);

X3D0.setHead(&head1);

Scene& Scene11 =  Scene();
WorldInfo& WorldInfo12 =  WorldInfo();
WorldInfo12.setTitle(CString("particleflowers.x3d"));
Scene11.addChild(&WorldInfo12);

NavigationInfo& NavigationInfo13 =  NavigationInfo();
NavigationInfo13.setType(new CString[]{CString("ANY"), CString("EXAMINE"), CString("FLY"), CString("LOOKAT")}, 4);
Scene11.addChild(&NavigationInfo13);

Viewpoint& Viewpoint14 =  Viewpoint();
Viewpoint14.setDescription(CString("Tour Views"));
Viewpoint14.setPosition(new float[]{0,0,12});
Scene11.addChild(&Viewpoint14);

Background& Background15 =  Background();
Background15.setFrontUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 1);
Background15.setBackUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 1);
Background15.setLeftUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 1);
Background15.setRightUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 1);
Background15.setTopUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 1);
Background15.setBottomUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 1);
Scene11.addChild(&Background15);

Transform& Transform16 =  Transform();
ParticleSystem& ParticleSystem17 =  ParticleSystem();
ParticleSystem17.setGeometryType(CString("GEOMETRY"));
ParticleSystem17.setMaxParticles(20);
ExplosionEmitter& ExplosionEmitter18 =  ExplosionEmitter();
ExplosionEmitter18.setSpeed(2);
ExplosionEmitter18.setVariation(0.75);
ParticleSystem17.setEmitter(ExplosionEmitter18);

BoundedPhysicsModel& BoundedPhysicsModel19 =  BoundedPhysicsModel();
Sphere& Sphere20 =  Sphere();
Sphere20.setRadius(100);
BoundedPhysicsModel19.setGeometry(&Sphere20);

ParticleSystem17.addPhysics(BoundedPhysicsModel19);

Appearance& Appearance21 =  Appearance();
Material& Material22 =  Material();
Material22.setDiffuseColor(new float[]{0.7,0.7,0.7});
Material22.setSpecularColor(new float[]{0.5,0.5,0.5});
Appearance21.addChild(&Material22);

ComposedCubeMapTexture& ComposedCubeMapTexture23 =  ComposedCubeMapTexture();
ComposedCubeMapTexture23.setDEF(CString("texture"));
ImageTexture& ImageTexture24 =  ImageTexture();
ImageTexture24.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 1);
ComposedCubeMapTexture23.setFront(ImageTexture24);

ImageTexture& ImageTexture25 =  ImageTexture();
ImageTexture25.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 1);
ComposedCubeMapTexture23.setBack(ImageTexture25);

ImageTexture& ImageTexture26 =  ImageTexture();
ImageTexture26.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 1);
ComposedCubeMapTexture23.setLeft(ImageTexture26);

ImageTexture& ImageTexture27 =  ImageTexture();
ImageTexture27.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 1);
ComposedCubeMapTexture23.setRight(ImageTexture27);

ImageTexture& ImageTexture28 =  ImageTexture();
ImageTexture28.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 1);
ComposedCubeMapTexture23.setTop(ImageTexture28);

ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 1);
ComposedCubeMapTexture23.setBottom(ImageTexture29);

Appearance21.addChild(&ComposedCubeMapTexture23);

ComposedShader& ComposedShader30 =  ComposedShader();
ComposedShader30.setDEF(CString("fw"));
ComposedShader30.setLanguage(CString("GLSL"));
ShaderPart& ShaderPart31 =  ShaderPart();
ShaderPart31.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs")}, 1);
ComposedShader30.setParts(&ShaderPart31);

ShaderPart& ShaderPart32 =  ShaderPart();
ShaderPart32.setType(CString("FRAGMENT"));
ShaderPart32.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs")}, 1);
ComposedShader30.setParts(&ShaderPart32);

field& field33 =  field();
field33.setAccessType(CString("inputOutput"));
field33.setType(CString("SFVec3f"));
field33.setName(CString("chromaticDispertion"));
field33.setValue(CString("0.98 1 1.033"));
ComposedShader30.addChild(&field33);

field& field34 =  field();
field34.setAccessType(CString("inputOutput"));
field34.setType(CString("SFNode"));
field34.setName(CString("cube"));
ComposedCubeMapTexture& ComposedCubeMapTexture35 =  ComposedCubeMapTexture();
ComposedCubeMapTexture35.setUSE(CString("texture"));
field34.addChild(&ComposedCubeMapTexture35);

ComposedShader30.addChild(&field34);

field& field36 =  field();
field36.setAccessType(CString("inputOutput"));
field36.setType(CString("SFFloat"));
field36.setName(CString("bias"));
field36.setValue(CString("0.5"));
ComposedShader30.addChild(&field36);

field& field37 =  field();
field37.setAccessType(CString("inputOutput"));
field37.setType(CString("SFFloat"));
field37.setName(CString("scale"));
field37.setValue(CString("0.5"));
ComposedShader30.addChild(&field37);

field& field38 =  field();
field38.setAccessType(CString("inputOutput"));
field38.setType(CString("SFFloat"));
field38.setName(CString("power"));
field38.setValue(CString("2"));
ComposedShader30.addChild(&field38);

field& field39 =  field();
field39.setAccessType(CString("inputOutput"));
field39.setType(CString("SFFloat"));
field39.setName(CString("a"));
field39.setValue(CString("2"));
ComposedShader30.addChild(&field39);

field& field40 =  field();
field40.setAccessType(CString("inputOutput"));
field40.setType(CString("SFFloat"));
field40.setName(CString("b"));
field40.setValue(CString("1"));
ComposedShader30.addChild(&field40);

field& field41 =  field();
field41.setAccessType(CString("inputOutput"));
field41.setType(CString("SFFloat"));
field41.setName(CString("c"));
field41.setValue(CString("5"));
ComposedShader30.addChild(&field41);

field& field42 =  field();
field42.setAccessType(CString("inputOutput"));
field42.setType(CString("SFFloat"));
field42.setName(CString("d"));
field42.setValue(CString("5"));
ComposedShader30.addChild(&field42);

field& field43 =  field();
field43.setAccessType(CString("inputOutput"));
field43.setType(CString("SFFloat"));
field43.setName(CString("tdelta"));
ComposedShader30.addChild(&field43);

field& field44 =  field();
field44.setAccessType(CString("inputOutput"));
field44.setType(CString("SFFloat"));
field44.setName(CString("pdelta"));
ComposedShader30.addChild(&field44);

Appearance21.addChild(&ComposedShader30);

ParticleSystem17.addChildren(&Appearance21);

Sphere& Sphere45 =  Sphere();
ParticleSystem17.setGeometry(&Sphere45);

Transform16.addChild(&ParticleSystem17);

Script& Script46 =  Script();
Script46.setDEF(CString("Animate"));
field& field47 =  field();
field47.setAccessType(CString("inputOutput"));
field47.setType(CString("SFVec3f"));
field47.setName(CString("translation"));
Script46.addChild(&field47);

field& field48 =  field();
field48.setAccessType(CString("inputOutput"));
field48.setType(CString("SFVec3f"));
field48.setName(CString("velocity"));
Script46.addChild(&field48);

field& field49 =  field();
field49.setAccessType(CString("inputOnly"));
field49.setType(CString("SFFloat"));
field49.setName(CString("set_fraction"));
Script46.addChild(&field49);

field& field50 =  field();
field50.setAccessType(CString("inputOutput"));
field50.setType(CString("SFFloat"));
field50.setName(CString("a"));
field50.setValue(CString("0.5"));
Script46.addChild(&field50);

field& field51 =  field();
field51.setAccessType(CString("inputOutput"));
field51.setType(CString("SFFloat"));
field51.setName(CString("b"));
field51.setValue(CString("0.5"));
Script46.addChild(&field51);

field& field52 =  field();
field52.setAccessType(CString("inputOutput"));
field52.setType(CString("SFFloat"));
field52.setName(CString("c"));
field52.setValue(CString("3"));
Script46.addChild(&field52);

field& field53 =  field();
field53.setAccessType(CString("inputOutput"));
field53.setType(CString("SFFloat"));
field53.setName(CString("d"));
field53.setValue(CString("3"));
Script46.addChild(&field53);

field& field54 =  field();
field54.setAccessType(CString("inputOutput"));
field54.setType(CString("SFFloat"));
field54.setName(CString("tdelta"));
field54.setValue(CString("0.5"));
Script46.addChild(&field54);

field& field55 =  field();
field55.setAccessType(CString("inputOutput"));
field55.setType(CString("SFFloat"));
field55.setName(CString("pdelta"));
field55.setValue(CString("0.5"));
Script46.addChild(&field55);


Script46.setSourceCode(CString("ecmascript:")+
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
Transform16.addChild(&Script46);

Scene11.addChild(&Transform16);

TimeSensor& TimeSensor56 =  TimeSensor();
TimeSensor56.setDEF(CString("TourTime"));
TimeSensor56.setCycleInterval(5);
TimeSensor56.setLoop(True);
Scene11.addChild(&TimeSensor56);

ROUTE& ROUTE57 =  ROUTE();
ROUTE57.setFromNode(CString("TourTime"));
ROUTE57.setFromField(CString("fraction_changed"));
ROUTE57.setToNode(CString("Animate"));
ROUTE57.setToField(CString("set_fraction"));
Scene11.addChild(&ROUTE57);

ROUTE& ROUTE58 =  ROUTE();
ROUTE58.setFromNode(CString("Animate"));
ROUTE58.setFromField(CString("a_changed"));
ROUTE58.setToNode(CString("fw"));
ROUTE58.setToField(CString("set_a"));
Scene11.addChild(&ROUTE58);

ROUTE& ROUTE59 =  ROUTE();
ROUTE59.setFromNode(CString("Animate"));
ROUTE59.setFromField(CString("b_changed"));
ROUTE59.setToNode(CString("fw"));
ROUTE59.setToField(CString("set_b"));
Scene11.addChild(&ROUTE59);

ROUTE& ROUTE60 =  ROUTE();
ROUTE60.setFromNode(CString("Animate"));
ROUTE60.setFromField(CString("c_changed"));
ROUTE60.setToNode(CString("fw"));
ROUTE60.setToField(CString("set_c"));
Scene11.addChild(&ROUTE60);

ROUTE& ROUTE61 =  ROUTE();
ROUTE61.setFromNode(CString("Animate"));
ROUTE61.setFromField(CString("d_changed"));
ROUTE61.setToNode(CString("fw"));
ROUTE61.setToField(CString("set_d"));
Scene11.addChild(&ROUTE61);

ROUTE& ROUTE62 =  ROUTE();
ROUTE62.setFromNode(CString("Animate"));
ROUTE62.setFromField(CString("pdelta_changed"));
ROUTE62.setToNode(CString("fw"));
ROUTE62.setToField(CString("set_pdelta"));
Scene11.addChild(&ROUTE62);

ROUTE& ROUTE63 =  ROUTE();
ROUTE63.setFromNode(CString("Animate"));
ROUTE63.setFromField(CString("tdelta_changed"));
ROUTE63.setToNode(CString("fw"));
ROUTE63.setToField(CString("set_tdelta"));
Scene11.addChild(&ROUTE63);

X3D0.setScene(&Scene11);

}
