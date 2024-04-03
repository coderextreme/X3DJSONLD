#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
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
component8.setName(CString("Shape"));
component8.setLevel(4);
head1.addChild(&component8);

component& component9 =  component();
component9.setName(CString("Grouping"));
component9.setLevel(3);
head1.addChild(&component9);

component& component10 =  component();
component10.setName(CString("Core"));
component10.setLevel(1);
head1.addChild(&component10);

meta& meta11 =  meta();
meta11.setName(CString("title"));
meta11.setContent(CString("bub.x3d"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("creator"));
meta12.setContent(CString("John Carlson"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("description"));
meta13.setContent(CString("3 prismatic spheres"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("generator"));
meta14.setContent(CString("X3D-Edit, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(CString("identifier"));
meta15.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/bub.x3d"));
head1.addMeta(&meta15);

X3D0.setHead(&head1);

Scene& Scene16 =  Scene();
NavigationInfo& NavigationInfo17 =  NavigationInfo();
Scene16.addChild(&NavigationInfo17);

Background& Background18 =  Background();
Background18.setBackUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
Background18.setBottomUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
Background18.setFrontUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
Background18.setLeftUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
Background18.setRightUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
Background18.setTopUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
Scene16.addChild(&Background18);

Viewpoint& Viewpoint19 =  Viewpoint();
Viewpoint19.setPosition(new float[3]{0,0,20});
Viewpoint19.setDescription(CString("Look at the bubbles flying"));
Scene16.addChild(&Viewpoint19);

ProtoDeclare& ProtoDeclare20 =  ProtoDeclare();
ProtoDeclare20.setName(CString("Bubble"));
ProtoBody& ProtoBody21 =  ProtoBody();
Transform& Transform22 =  Transform();
Transform22.setDEF(CString("transform"));
Shape& Shape23 =  Shape();
Shape23.setDEF(CString("myShape"));
Appearance& Appearance24 =  Appearance();
Material& Material25 =  Material();
Material25.setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material25.setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance24.addChild(&Material25);

ComposedCubeMapTexture& ComposedCubeMapTexture26 =  ComposedCubeMapTexture();
ComposedCubeMapTexture26.setDEF(CString("texture"));
ImageTexture& ImageTexture27 =  ImageTexture();
ImageTexture27.setUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
ComposedCubeMapTexture26.setBack(ImageTexture27);

ImageTexture& ImageTexture28 =  ImageTexture();
ImageTexture28.setUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
ComposedCubeMapTexture26.setBottom(ImageTexture28);

ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
ComposedCubeMapTexture26.setFront(ImageTexture29);

ImageTexture& ImageTexture30 =  ImageTexture();
ImageTexture30.setUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
ComposedCubeMapTexture26.setLeft(ImageTexture30);

ImageTexture& ImageTexture31 =  ImageTexture();
ImageTexture31.setUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
ComposedCubeMapTexture26.setRight(ImageTexture31);

ImageTexture& ImageTexture32 =  ImageTexture();
ImageTexture32.setUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
ComposedCubeMapTexture26.setTop(ImageTexture32);

Appearance24.addChild(&ComposedCubeMapTexture26);

//<ComposedShader DEF='gl' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/gl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/gl.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader> <ComposedShader DEF='freewrl' language=\"GLSL\"> <field name='fw_textureCoodGenType' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/freewrl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>
//<ComposedShader DEF='instant' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/instant.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/instant.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>
ComposedShader& ComposedShader33 =  ComposedShader();
ComposedShader33.setDEF(CString("x3dom"));
ComposedShader33.setLanguage(CString("GLSL"));
field& field34 =  field();
field34.setName(CString("cube"));
field34.setType(CString("SFInt32"));
field34.setAccessType(CString("inputOutput"));
field34.setValue(CString("0"));
ComposedShader33.addChild(&field34);

field& field35 =  field();
field35.setName(CString("chromaticDispertion"));
field35.setType(CString("SFVec3f"));
field35.setAccessType(CString("inputOutput"));
field35.setValue(CString("0.98 1 1.033"));
ComposedShader33.addChild(&field35);

field& field36 =  field();
field36.setName(CString("bias"));
field36.setType(CString("SFFloat"));
field36.setAccessType(CString("inputOutput"));
field36.setValue(CString("0.5"));
ComposedShader33.addChild(&field36);

field& field37 =  field();
field37.setName(CString("scale"));
field37.setType(CString("SFFloat"));
field37.setAccessType(CString("inputOutput"));
field37.setValue(CString("0.5"));
ComposedShader33.addChild(&field37);

field& field38 =  field();
field38.setName(CString("power"));
field38.setType(CString("SFFloat"));
field38.setAccessType(CString("inputOutput"));
field38.setValue(CString("2"));
ComposedShader33.addChild(&field38);

ShaderPart& ShaderPart39 =  ShaderPart();
ShaderPart39.setUrl(new CString[2]{CString("../shaders/x3dom.vs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs")}, 2);
ShaderPart39.setType(CString("VERTEX"));
ComposedShader33.setParts(&ShaderPart39);

ShaderPart& ShaderPart40 =  ShaderPart();
ShaderPart40.setUrl(new CString[2]{CString("../shaders/pc_bubbles.fs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs")}, 2);
ShaderPart40.setType(CString("FRAGMENT"));
ComposedShader33.setParts(&ShaderPart40);

Appearance24.addChild(&ComposedShader33);

ComposedShader& ComposedShader41 =  ComposedShader();
ComposedShader41.setDEF(CString("x_ite"));
ComposedShader41.setLanguage(CString("GLSL"));
field& field42 =  field();
field42.setName(CString("cube"));
field42.setType(CString("SFNode"));
field42.setAccessType(CString("inputOutput"));
ComposedCubeMapTexture& ComposedCubeMapTexture43 =  ComposedCubeMapTexture();
ComposedCubeMapTexture43.setUSE(CString("texture"));
field42.addChild(&ComposedCubeMapTexture43);

ComposedShader41.addChild(&field42);

field& field44 =  field();
field44.setName(CString("chromaticDispertion"));
field44.setType(CString("SFVec3f"));
field44.setAccessType(CString("inputOutput"));
field44.setValue(CString("0.98 1 1.033"));
ComposedShader41.addChild(&field44);

field& field45 =  field();
field45.setName(CString("bias"));
field45.setType(CString("SFFloat"));
field45.setAccessType(CString("inputOutput"));
field45.setValue(CString("0.5"));
ComposedShader41.addChild(&field45);

field& field46 =  field();
field46.setName(CString("scale"));
field46.setType(CString("SFFloat"));
field46.setAccessType(CString("inputOutput"));
field46.setValue(CString("0.5"));
ComposedShader41.addChild(&field46);

field& field47 =  field();
field47.setName(CString("power"));
field47.setType(CString("SFFloat"));
field47.setAccessType(CString("inputOutput"));
field47.setValue(CString("2"));
ComposedShader41.addChild(&field47);

ShaderPart& ShaderPart48 =  ShaderPart();
ShaderPart48.setUrl(new CString[2]{CString("../shaders/x_ite.vs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs")}, 2);
ShaderPart48.setType(CString("VERTEX"));
ComposedShader41.setParts(&ShaderPart48);

ShaderPart& ShaderPart49 =  ShaderPart();
ShaderPart49.setUrl(new CString[2]{CString("../shaders/x_itebubbles.fs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs")}, 2);
ShaderPart49.setType(CString("FRAGMENT"));
ComposedShader41.setParts(&ShaderPart49);

Appearance24.addChild(&ComposedShader41);

Shape23.addChild(&Appearance24);

Sphere& Sphere50 =  Sphere();
Shape23.setGeometry(&Sphere50);

Transform22.addChild(&Shape23);

ProtoBody21.addChild(&Transform22);

Script& Script51 =  Script();
Script51.setDEF(CString("Bounce"));
field& field52 =  field();
field52.setName(CString("translation"));
field52.setAccessType(CString("inputOutput"));
field52.setType(CString("SFVec3f"));
field52.setValue(CString("0 0 0"));
Script51.addChild(&field52);

field& field53 =  field();
field53.setName(CString("velocity"));
field53.setAccessType(CString("inputOutput"));
field53.setType(CString("SFVec3f"));
field53.setValue(CString("0 0 0"));
Script51.addChild(&field53);

field& field54 =  field();
field54.setName(CString("set_fraction"));
field54.setAccessType(CString("inputOnly"));
field54.setType(CString("SFTime"));
Script51.addChild(&field54);


Script51.setSourceCode(CString("ecmascript:")+
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
ProtoBody21.addChild(&Script51);

TimeSensor& TimeSensor55 =  TimeSensor();
TimeSensor55.setDEF(CString("TourTime"));
TimeSensor55.setCycleInterval(0.15);
TimeSensor55.setLoop(True);
ProtoBody21.addChild(&TimeSensor55);

ROUTE& ROUTE56 =  ROUTE();
ROUTE56.setFromNode(CString("TourTime"));
ROUTE56.setFromField(CString("cycleTime"));
ROUTE56.setToNode(CString("Bounce"));
ROUTE56.setToField(CString("set_fraction"));
ProtoBody21.addChild(&ROUTE56);

ROUTE& ROUTE57 =  ROUTE();
ROUTE57.setFromNode(CString("Bounce"));
ROUTE57.setFromField(CString("translation_changed"));
ROUTE57.setToNode(CString("transform"));
ROUTE57.setToField(CString("set_translation"));
ProtoBody21.addChild(&ROUTE57);

ProtoDeclare20.addChild(&ProtoBody21);

Scene16.addChild(&ProtoDeclare20);

ProtoInstance& ProtoInstance58 =  ProtoInstance();
ProtoInstance58.setName(CString("Bubble"));
Scene16.addChild(&ProtoInstance58);

ProtoInstance& ProtoInstance59 =  ProtoInstance();
ProtoInstance59.setName(CString("Bubble"));
Scene16.addChild(&ProtoInstance59);

ProtoInstance& ProtoInstance60 =  ProtoInstance();
ProtoInstance60.setName(CString("Bubble"));
Scene16.addChild(&ProtoInstance60);

X3D0.setScene(&Scene16);

}
