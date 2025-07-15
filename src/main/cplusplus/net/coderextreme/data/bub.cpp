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
component2.setName(CString("Scripting"));
component2.setLevel(1);
head1.addChild(&component2);

component& component3 =  component();
component3.setName(CString("EnvironmentalEffects"));
component3.setLevel(3);
head1.addChild(&component3);

component& component4 =  component();
component4.setName(CString("Shaders"));
component4.setLevel(1);
head1.addChild(&component4);

component& component5 =  component();
component5.setName(CString("CubeMapTexturing"));
component5.setLevel(1);
head1.addChild(&component5);

component& component6 =  component();
component6.setName(CString("Texturing"));
component6.setLevel(1);
head1.addChild(&component6);

component& component7 =  component();
component7.setName(CString("Rendering"));
component7.setLevel(1);
head1.addChild(&component7);

component& component8 =  component();
component8.setName(CString("Grouping"));
component8.setLevel(3);
head1.addChild(&component8);

component& component9 =  component();
component9.setName(CString("Core"));
component9.setLevel(1);
head1.addChild(&component9);

//<component name='Shape' level='4'></component>
meta& meta10 =  meta();
meta10.setName(CString("title"));
meta10.setContent(CString("bub.x3d"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("creator"));
meta11.setContent(CString("John Carlson"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("description"));
meta12.setContent(CString("3 prismatic spheres"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("generator"));
meta13.setContent(CString("X3D-Edit, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("identifier"));
meta14.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/bub.x3d"));
head1.addMeta(&meta14);

X3D0.setHead(&head1);

Scene& Scene15 =  Scene();
NavigationInfo& NavigationInfo16 =  NavigationInfo();
Scene15.addChild(&NavigationInfo16);

Background& Background17 =  Background();
Background17.setBackUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
Background17.setBottomUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
Background17.setFrontUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
Background17.setLeftUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
Background17.setRightUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
Background17.setTopUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
Scene15.addChild(&Background17);

Viewpoint& Viewpoint18 =  Viewpoint();
Viewpoint18.setPosition(new float[]{0,0,20});
Viewpoint18.setDescription(CString("Look at the bubbles flying"));
Scene15.addChild(&Viewpoint18);

ProtoDeclare& ProtoDeclare19 =  ProtoDeclare();
ProtoDeclare19.setName(CString("Bubble"));
ProtoBody& ProtoBody20 =  ProtoBody();
Transform& Transform21 =  Transform();
Transform21.setDEF(CString("transform"));
Shape& Shape22 =  Shape();
Shape22.setDEF(CString("myShape"));
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

//<ComposedShader DEF='gl' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/gl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/gl.vs\"'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader> <ComposedShader DEF='freewrl' language=\"GLSL\"> <field name='fw_textureCoodGenType' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/freewrl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>
//<ComposedShader DEF='instant' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/instant.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/instant.vs\"'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>
ComposedShader& ComposedShader32 =  ComposedShader();
ComposedShader32.setDEF(CString("x3dom"));
ComposedShader32.setLanguage(CString("GLSL"));
field& field33 =  field();
field33.setName(CString("cube"));
field33.setType(CString("SFInt32"));
field33.setAccessType(CString("inputOutput"));
field33.setValue(CString("0"));
ComposedShader32.addChild(&field33);

field& field34 =  field();
field34.setName(CString("chromaticDispertion"));
field34.setType(CString("SFVec3f"));
field34.setAccessType(CString("inputOutput"));
field34.setValue(CString("0.98 1 1.033"));
ComposedShader32.addChild(&field34);

field& field35 =  field();
field35.setName(CString("bias"));
field35.setType(CString("SFFloat"));
field35.setAccessType(CString("inputOutput"));
field35.setValue(CString("0.5"));
ComposedShader32.addChild(&field35);

field& field36 =  field();
field36.setName(CString("scale"));
field36.setType(CString("SFFloat"));
field36.setAccessType(CString("inputOutput"));
field36.setValue(CString("0.5"));
ComposedShader32.addChild(&field36);

field& field37 =  field();
field37.setName(CString("power"));
field37.setType(CString("SFFloat"));
field37.setAccessType(CString("inputOutput"));
field37.setValue(CString("2"));
ComposedShader32.addChild(&field37);

ShaderPart& ShaderPart38 =  ShaderPart();
ShaderPart38.setUrl(new CString[]{CString("../shaders/x3dom.vs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs")}, 2);
ShaderPart38.setType(CString("VERTEX"));
ComposedShader32.setParts(&ShaderPart38);

ShaderPart& ShaderPart39 =  ShaderPart();
ShaderPart39.setUrl(new CString[]{CString("../shaders/pc_bubbles.fs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs")}, 2);
ShaderPart39.setType(CString("FRAGMENT"));
ComposedShader32.setParts(&ShaderPart39);

Appearance23.addChild(&ComposedShader32);

ComposedShader& ComposedShader40 =  ComposedShader();
ComposedShader40.setDEF(CString("x_ite"));
ComposedShader40.setLanguage(CString("GLSL"));
field& field41 =  field();
field41.setName(CString("cube"));
field41.setType(CString("SFNode"));
field41.setAccessType(CString("inputOutput"));
ComposedCubeMapTexture& ComposedCubeMapTexture42 =  ComposedCubeMapTexture();
ComposedCubeMapTexture42.setUSE(CString("texture"));
field41.addChild(&ComposedCubeMapTexture42);

ComposedShader40.addChild(&field41);

field& field43 =  field();
field43.setName(CString("chromaticDispertion"));
field43.setType(CString("SFVec3f"));
field43.setAccessType(CString("inputOutput"));
field43.setValue(CString("0.98 1 1.033"));
ComposedShader40.addChild(&field43);

field& field44 =  field();
field44.setName(CString("bias"));
field44.setType(CString("SFFloat"));
field44.setAccessType(CString("inputOutput"));
field44.setValue(CString("0.5"));
ComposedShader40.addChild(&field44);

field& field45 =  field();
field45.setName(CString("scale"));
field45.setType(CString("SFFloat"));
field45.setAccessType(CString("inputOutput"));
field45.setValue(CString("0.5"));
ComposedShader40.addChild(&field45);

field& field46 =  field();
field46.setName(CString("power"));
field46.setType(CString("SFFloat"));
field46.setAccessType(CString("inputOutput"));
field46.setValue(CString("2"));
ComposedShader40.addChild(&field46);

ShaderPart& ShaderPart47 =  ShaderPart();
ShaderPart47.setUrl(new CString[]{CString("../shaders/x_ite.vs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs")}, 2);
ShaderPart47.setType(CString("VERTEX"));
ComposedShader40.setParts(&ShaderPart47);

ShaderPart& ShaderPart48 =  ShaderPart();
ShaderPart48.setUrl(new CString[]{CString("../shaders/x_itebubbles.fs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs")}, 2);
ShaderPart48.setType(CString("FRAGMENT"));
ComposedShader40.setParts(&ShaderPart48);

Appearance23.addChild(&ComposedShader40);

Shape22.addChild(&Appearance23);

Sphere& Sphere49 =  Sphere();
Shape22.setGeometry(&Sphere49);

Transform21.addChild(&Shape22);

ProtoBody20.addChild(&Transform21);

Script& Script50 =  Script();
Script50.setDEF(CString("Bounce"));
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
field53.setType(CString("SFTime"));
Script50.addChild(&field53);


Script50.setSourceCode(CString("ecmascript:")+
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
_T("			    if (Math.abs(translation.x) > 10) {")+
_T("				initialize();")+
_T("			    } else if (Math.abs(translation.y) > 10) {")+
_T("				initialize();")+
_T("			    } else if (Math.abs(translation.z) > 10) {")+
_T("				initialize();")+
_T("			    } else {")+
_T("				velocity.x += Math.random() * 0.2 - 0.1;")+
_T("				velocity.y += Math.random() * 0.2 - 0.1;")+
_T("				velocity.z += Math.random() * 0.2 - 0.1;")+
_T("			    }")+
_T("			}"));
ProtoBody20.addChild(&Script50);

TimeSensor& TimeSensor54 =  TimeSensor();
TimeSensor54.setDEF(CString("TourTime"));
TimeSensor54.setCycleInterval(0.15);
TimeSensor54.setLoop(True);
ProtoBody20.addChild(&TimeSensor54);

ROUTE& ROUTE55 =  ROUTE();
ROUTE55.setFromNode(CString("TourTime"));
ROUTE55.setFromField(CString("cycleTime"));
ROUTE55.setToNode(CString("Bounce"));
ROUTE55.setToField(CString("set_fraction"));
ProtoBody20.addChild(&ROUTE55);

ROUTE& ROUTE56 =  ROUTE();
ROUTE56.setFromNode(CString("Bounce"));
ROUTE56.setFromField(CString("translation_changed"));
ROUTE56.setToNode(CString("transform"));
ROUTE56.setToField(CString("set_translation"));
ProtoBody20.addChild(&ROUTE56);

ProtoDeclare19.addChild(&ProtoBody20);

Scene15.addChild(&ProtoDeclare19);

ProtoInstance& ProtoInstance57 =  ProtoInstance();
ProtoInstance57.setName(CString("Bubble"));
Scene15.addChild(&ProtoInstance57);

ProtoInstance& ProtoInstance58 =  ProtoInstance();
ProtoInstance58.setName(CString("Bubble"));
Scene15.addChild(&ProtoInstance58);

ProtoInstance& ProtoInstance59 =  ProtoInstance();
ProtoInstance59.setName(CString("Bubble"));
Scene15.addChild(&ProtoInstance59);

X3D0.setScene(&Scene15);

}
