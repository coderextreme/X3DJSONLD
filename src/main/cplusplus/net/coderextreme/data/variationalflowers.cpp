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
meta10.setContent(CString("particleflowers.x3d"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("creator"));
meta11.setContent(CString("John Carlson"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("description"));
meta12.setContent(CString("A flower proto with configurable shaders"));
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
Viewpoint17.setPosition(new float[]{0,0,12});
Scene14.addChild(&Viewpoint17);

Background& Background18 =  Background();
Background18.setBackUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
Background18.setBottomUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
Background18.setFrontUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
Background18.setLeftUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
Background18.setRightUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
Background18.setTopUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
Scene14.addChild(&Background18);

Transform& Transform19 =  Transform();
ParticleSystem& ParticleSystem20 =  ParticleSystem();
ParticleSystem20.setMaxParticles(100);
ParticleSystem20.setGeometryType(CString("GEOMETRY"));
//* values - array of MFFloats to pass to ComposedShader
//* variations in values - array of MFFloats to pass to ComposedShader that varies values
//* lastFrame - last frame that was rendered (0 for default)
//* updateRate - update rate is amount of time between frames
//<VariationPhysicsModel values=\"2 2 5 5 0 0\" varations=\"2 1 3 3 0.1 0.1\" lastFrame='0' updateRate='0.1'>
//</VariationPhysicsModel>
ExplosionEmitter& ExplosionEmitter21 =  ExplosionEmitter();
ExplosionEmitter21.setSpeed(1);
ExplosionEmitter21.setVariation(0.75);
ParticleSystem20.setEmitter(ExplosionEmitter21);

Sphere& Sphere22 =  Sphere();
ParticleSystem20.setGeometry(&Sphere22);

Appearance& Appearance23 =  Appearance();
Material& Material24 =  Material();
Material24.setDiffuseColor(new float[]{0.7,0.7,0.7});
Material24.setSpecularColor(new float[]{0.5,0.5,0.5});
Appearance23.addChild(&Material24);

ComposedCubeMapTexture& ComposedCubeMapTexture25 =  ComposedCubeMapTexture();
ComposedCubeMapTexture25.setDEF(CString("texture"));
ImageTexture& ImageTexture26 =  ImageTexture();
ImageTexture26.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
ComposedCubeMapTexture25.setBack(ImageTexture26);

ImageTexture& ImageTexture27 =  ImageTexture();
ImageTexture27.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
ComposedCubeMapTexture25.setBottom(ImageTexture27);

ImageTexture& ImageTexture28 =  ImageTexture();
ImageTexture28.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
ComposedCubeMapTexture25.setFront(ImageTexture28);

ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
ComposedCubeMapTexture25.setLeft(ImageTexture29);

ImageTexture& ImageTexture30 =  ImageTexture();
ImageTexture30.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
ComposedCubeMapTexture25.setRight(ImageTexture30);

ImageTexture& ImageTexture31 =  ImageTexture();
ImageTexture31.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
ComposedCubeMapTexture25.setTop(ImageTexture31);

Appearance23.addChild(&ComposedCubeMapTexture25);

//<ComposedShader language='GLSL'>
//<field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field>
//<field name='cube' type='SFNode' accessType=\"inputOutput\">
//<ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture>
//</field>
//<field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field>
//<field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field>
//<field name='power' accessType='inputOutput' type='SFFloat' value='2'></field>
//<ShaderPart url='\"../shaders/freewrl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"'></ShaderPart>
//<ShaderPart url='\"../shaders/freewrl.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\"' type='FRAGMENT'></ShaderPart>
//</ComposedShader>
//<ComposedShader DEF=\"shader\" language=\"GLSL\">
//<field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field>
//<field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field>
//<field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field>
//<field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field>
//<field name='power' type='SFFloat' accessType='inputOutput' value='2'></field>
//<ShaderPart url='\"../shaders/castle.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.vs\"'/>
//<ShaderPart type='FRAGMENT' url='\"../shaders/castle.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs\"'/>
//</ComposedShader>
ComposedShader& ComposedShader32 =  ComposedShader();
ComposedShader32.setDEF(CString("x_ite"));
ComposedShader32.setLanguage(CString("GLSL"));
field& field33 =  field();
field33.setName(CString("chromaticDispertion"));
field33.setAccessType(CString("initializeOnly"));
field33.setType(CString("SFVec3f"));
field33.setValue(CString("0.98 1 1.033"));
ComposedShader32.addChild(&field33);

field& field34 =  field();
field34.setName(CString("cube"));
field34.setType(CString("SFNode"));
field34.setAccessType(CString("initializeOnly"));
ComposedCubeMapTexture& ComposedCubeMapTexture35 =  ComposedCubeMapTexture();
ComposedCubeMapTexture35.setUSE(CString("texture"));
field34.addChild(&ComposedCubeMapTexture35);

ComposedShader32.addChild(&field34);

field& field36 =  field();
field36.setName(CString("bias"));
field36.setAccessType(CString("initializeOnly"));
field36.setType(CString("SFFloat"));
field36.setValue(CString("0.5"));
ComposedShader32.addChild(&field36);

field& field37 =  field();
field37.setName(CString("scale"));
field37.setAccessType(CString("initializeOnly"));
field37.setType(CString("SFFloat"));
field37.setValue(CString("0.5"));
ComposedShader32.addChild(&field37);

field& field38 =  field();
field38.setName(CString("power"));
field38.setAccessType(CString("initializeOnly"));
field38.setType(CString("SFFloat"));
field38.setValue(CString("2"));
ComposedShader32.addChild(&field38);

field& field39 =  field();
field39.setName(CString("x3d_ParticleValues"));
field39.setType(CString("MFFloat"));
field39.setAccessType(CString("inputOutput"));
field39.setValue(CString("2 1 4 4 0 0"));
ComposedShader32.addChild(&field39);

ShaderPart& ShaderPart40 =  ShaderPart();
ShaderPart40.setUrl(new CString[]{CString("../shaders/x_ite_variations.vs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_variations.vs")}, 2);
ShaderPart40.setType(CString("VERTEX"));
ComposedShader32.setParts(&ShaderPart40);

ShaderPart& ShaderPart41 =  ShaderPart();
ShaderPart41.setUrl(new CString[]{CString("../shaders/commonnew.fs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs")}, 2);
ShaderPart41.setType(CString("FRAGMENT"));
ComposedShader32.setParts(&ShaderPart41);

Appearance23.addChild(&ComposedShader32);

ParticleSystem20.addChildren(&Appearance23);

Transform19.addChild(&ParticleSystem20);

Script& Script42 =  Script();
Script42.setDEF(CString("Animate"));
field& field43 =  field();
field43.setName(CString("set_fraction"));
field43.setAccessType(CString("inputOnly"));
field43.setType(CString("SFFloat"));
Script42.addChild(&field43);

field& field44 =  field();
field44.setName(CString("values"));
field44.setType(CString("MFFloat"));
field44.setAccessType(CString("inputOutput"));
field44.setValue(CString("2 2 5 5 0 0"));
Script42.addChild(&field44);

field& field45 =  field();
field45.setName(CString("variations"));
field45.setType(CString("MFFloat"));
field45.setAccessType(CString("inputOutput"));
field45.setValue(CString("0.2 0.1 0.3 0.3 0.01 0.01"));
Script42.addChild(&field45);

field& field46 =  field();
field46.setName(CString("lastframe"));
field46.setType(CString("SFFloat"));
field46.setAccessType(CString("inputOutput"));
field46.setValue(CString("0"));
Script42.addChild(&field46);

field& field47 =  field();
field47.setName(CString("updaterate"));
field47.setType(CString("SFFloat"));
field47.setAccessType(CString("inputOutput"));
field47.setValue(CString("0.1"));
Script42.addChild(&field47);


Script42.setSourceCode(CString("ecmascript:")+
_T("			function set_fraction(f, tm) {")+
_T("			    if (lastframe + updaterate < tm) {")+
_T("			  	lastframe = tm;")+
_T("				for (let v in values) {")+
_T("					values[v] = values[v] + (2 * Math.random() - 1) * variations[v];")+
_T("				}")+
_T("			    }")+
_T("			}"));
Transform19.addChild(&Script42);

TimeSensor& TimeSensor48 =  TimeSensor();
TimeSensor48.setDEF(CString("TourTime"));
TimeSensor48.setCycleInterval(45);
TimeSensor48.setLoop(True);
Transform19.addChild(&TimeSensor48);

ROUTE& ROUTE49 =  ROUTE();
ROUTE49.setFromNode(CString("TourTime"));
ROUTE49.setFromField(CString("fraction_changed"));
ROUTE49.setToNode(CString("Animate"));
ROUTE49.setToField(CString("set_fraction"));
Transform19.addChild(&ROUTE49);

ROUTE& ROUTE50 =  ROUTE();
ROUTE50.setFromNode(CString("Animate"));
ROUTE50.setFromField(CString("values"));
ROUTE50.setToNode(CString("x_ite"));
ROUTE50.setToField(CString("x3d_ParticleValues"));
Transform19.addChild(&ROUTE50);

Scene14.addChild(&Transform19);

X3D0.setScene(&Scene14);

}
