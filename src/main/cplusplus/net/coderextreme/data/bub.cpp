/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/CylinderExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/CylinderExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/XML_PARSER.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/X3DLib.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/Abstracts.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/Concretes.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/glMath.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/glut.h"
int main(int argc, char ** argv) {
X3D* X3D0 = new X3D();
X3D0->setProfile("Immersive");
X3D0->setVersion("4.0");
head* head1 = new head();
component* component2 = new component();
component2->setName("Scripting");
component2->setLevel(1);
head1->addComponent(component2);

component* component3 = new component();
component3->setName("EnvironmentalEffects");
component3->setLevel(3);
head1->addComponent(component3);

component* component4 = new component();
component4->setName("Shaders");
component4->setLevel(1);
head1->addComponent(component4);

component* component5 = new component();
component5->setName("CubeMapTexturing");
component5->setLevel(1);
head1->addComponent(component5);

component* component6 = new component();
component6->setName("Texturing");
component6->setLevel(1);
head1->addComponent(component6);

component* component7 = new component();
component7->setName("Rendering");
component7->setLevel(1);
head1->addComponent(component7);

component* component8 = new component();
component8->setName("Grouping");
component8->setLevel(3);
head1->addComponent(component8);

component* component9 = new component();
component9->setName("Core");
component9->setLevel(1);
head1->addComponent(component9);

//<component name='Shape' level='4'></component>
meta* meta10 = new meta();
meta10->setName("title");
meta10->setContent("bub.x3d");
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName("creator");
meta11->setContent("John Carlson");
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName("description");
meta12->setContent("3 prismatic spheres");
head1->addMeta(meta12);

meta* meta13 = new meta();
meta13->setName("generator");
meta13->setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit");
head1->addMeta(meta13);

meta* meta14 = new meta();
meta14->setName("identifier");
meta14->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/bub.x3d");
head1->addMeta(meta14);

X3D0->setHead(head1);

Scene* Scene15 = new Scene();
NavigationInfo* NavigationInfo16 = new NavigationInfo();
Scene15->addChild(NavigationInfo16);

Background* Background17 = new Background();
Background17->setBackUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
Background17->setBottomUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
Background17->setFrontUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
Background17->setLeftUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
Background17->setRightUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
Background17->setTopUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
Scene15->addChild(Background17);

Viewpoint* Viewpoint18 = new Viewpoint();
Viewpoint18->setPosition(new float[3]{0,0,20});
Viewpoint18->setDescription("Look at the bubbles flying");
Scene15->addChild(Viewpoint18);

ProtoDeclare* ProtoDeclare19 = new ProtoDeclare();
ProtoDeclare19->setName("Bubble");
ProtoBody* ProtoBody20 = new ProtoBody();
Transform* Transform21 = new Transform();
Transform21->setDEF("transform");
Shape* Shape22 = new Shape();
Shape22->setDEF("myShape");
Appearance* Appearance23 = new Appearance();
Material* Material24 = new Material();
Material24->setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material24->setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance23->setMaterial(Material24);

ComposedCubeMapTexture* ComposedCubeMapTexture25 = new ComposedCubeMapTexture();
ComposedCubeMapTexture25->setDEF("texture");
ImageTexture* ImageTexture26 = new ImageTexture();
ImageTexture26->setUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
ComposedCubeMapTexture25->setBackTexture(ImageTexture26);

ImageTexture* ImageTexture27 = new ImageTexture();
ImageTexture27->setUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
ComposedCubeMapTexture25->setBottomTexture(ImageTexture27);

ImageTexture* ImageTexture28 = new ImageTexture();
ImageTexture28->setUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
ComposedCubeMapTexture25->setFrontTexture(ImageTexture28);

ImageTexture* ImageTexture29 = new ImageTexture();
ImageTexture29->setUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
ComposedCubeMapTexture25->setLeftTexture(ImageTexture29);

ImageTexture* ImageTexture30 = new ImageTexture();
ImageTexture30->setUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
ComposedCubeMapTexture25->setRightTexture(ImageTexture30);

ImageTexture* ImageTexture31 = new ImageTexture();
ImageTexture31->setUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
ComposedCubeMapTexture25->setTopTexture(ImageTexture31);

Appearance23->setTexture(ComposedCubeMapTexture25);

//<ComposedShader DEF='gl' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/gl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/gl.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader> <ComposedShader DEF='freewrl' language=\"GLSL\"> <field name='fw_textureCoodGenType' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/freewrl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>
//<ComposedShader DEF='instant' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/instant.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/instant.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>
ComposedShader* ComposedShader32 = new ComposedShader();
ComposedShader32->setDEF("x3dom");
ComposedShader32->setLanguage("GLSL");
field* field33 = new field();
field33->setName("cube");
field33->setType("SFInt32");
field33->setAccessType("inputOutput");
field33->setValue("0");
ComposedShader32->addField(field33);

field* field34 = new field();
field34->setName("chromaticDispertion");
field34->setType("SFVec3f");
field34->setAccessType("inputOutput");
field34->setValue("0.98 1 1.033");
ComposedShader32->addField(field34);

field* field35 = new field();
field35->setName("bias");
field35->setType("SFFloat");
field35->setAccessType("inputOutput");
field35->setValue("0.5");
ComposedShader32->addField(field35);

field* field36 = new field();
field36->setName("scale");
field36->setType("SFFloat");
field36->setAccessType("inputOutput");
field36->setValue("0.5");
ComposedShader32->addField(field36);

field* field37 = new field();
field37->setName("power");
field37->setType("SFFloat");
field37->setAccessType("inputOutput");
field37->setValue("2");
ComposedShader32->addField(field37);

ShaderPart* ShaderPart38 = new ShaderPart();
ShaderPart38->setUrl(new String[2]{"../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"}, 2);
ShaderPart38->setType("VERTEX");
ComposedShader32->addParts(ShaderPart38);

ShaderPart* ShaderPart39 = new ShaderPart();
ShaderPart39->setUrl(new String[2]{"../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"}, 2);
ShaderPart39->setType("FRAGMENT");
ComposedShader32->addParts(ShaderPart39);

Appearance23->addShaders(ComposedShader32);

ComposedShader* ComposedShader40 = new ComposedShader();
ComposedShader40->setDEF("x_ite");
ComposedShader40->setLanguage("GLSL");
field* field41 = new field();
field41->setName("cube");
field41->setType("SFNode");
field41->setAccessType("inputOutput");
ComposedCubeMapTexture* ComposedCubeMapTexture42 = new ComposedCubeMapTexture();
ComposedCubeMapTexture42->setUSE("texture");
field41->addChild(ComposedCubeMapTexture42);

ComposedShader40->addField(field41);

field* field43 = new field();
field43->setName("chromaticDispertion");
field43->setType("SFVec3f");
field43->setAccessType("inputOutput");
field43->setValue("0.98 1 1.033");
ComposedShader40->addField(field43);

field* field44 = new field();
field44->setName("bias");
field44->setType("SFFloat");
field44->setAccessType("inputOutput");
field44->setValue("0.5");
ComposedShader40->addField(field44);

field* field45 = new field();
field45->setName("scale");
field45->setType("SFFloat");
field45->setAccessType("inputOutput");
field45->setValue("0.5");
ComposedShader40->addField(field45);

field* field46 = new field();
field46->setName("power");
field46->setType("SFFloat");
field46->setAccessType("inputOutput");
field46->setValue("2");
ComposedShader40->addField(field46);

ShaderPart* ShaderPart47 = new ShaderPart();
ShaderPart47->setUrl(new String[2]{"../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"}, 2);
ShaderPart47->setType("VERTEX");
ComposedShader40->addParts(ShaderPart47);

ShaderPart* ShaderPart48 = new ShaderPart();
ShaderPart48->setUrl(new String[2]{"../shaders/x_itebubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs"}, 2);
ShaderPart48->setType("FRAGMENT");
ComposedShader40->addParts(ShaderPart48);

Appearance23->addShaders(ComposedShader40);

Shape22->setAppearance(Appearance23);

Sphere* Sphere49 = new Sphere();
Shape22->setGeometry(Sphere49);

Transform21->addChild(Shape22);

ProtoBody20->addChild(Transform21);

Script* Script50 = new Script();
Script50->setDEF("Bounce");
field* field51 = new field();
field51->setName("translation");
field51->setAccessType("inputOutput");
field51->setType("SFVec3f");
field51->setValue("0 0 0");
Script50->addField(field51);

field* field52 = new field();
field52->setName("velocity");
field52->setAccessType("inputOutput");
field52->setType("SFVec3f");
field52->setValue("0 0 0");
Script50->addField(field52);

field* field53 = new field();
field53->setName("set_fraction");
field53->setAccessType("inputOnly");
field53->setType("SFTime");
Script50->addField(field53);


Script50.setSourceCode(`ecmascript:\n"+
"			function initialize() {\n"+
"			    translation = new SFVec3f(0, 0, 0);\n"+
"			    velocity = new SFVec3f(\n"+
"			    	Math.random() - 0.5,\n"+
"				Math.random() - 0.5,\n"+
"				Math.random() - 0.5);\n"+
"			}\n"+
"			function set_fraction() {\n"+
"			    translation = new SFVec3f(\n"+
"			    	translation.x + velocity.x,\n"+
"				translation.y + velocity.y,\n"+
"				translation.z + velocity.z);\n"+
"			    if (Math.abs(translation.x) > 10) {\n"+
"				initialize();\n"+
"			    } else if (Math.abs(translation.y) > 10) {\n"+
"				initialize();\n"+
"			    } else if (Math.abs(translation.z) > 10) {\n"+
"				initialize();\n"+
"			    } else {\n"+
"				velocity.x += Math.random() * 0.2 - 0.1;\n"+
"				velocity.y += Math.random() * 0.2 - 0.1;\n"+
"				velocity.z += Math.random() * 0.2 - 0.1;\n"+
"			    }\n"+
"			}`)
ProtoBody20->addChild(Script50);

TimeSensor* TimeSensor54 = new TimeSensor();
TimeSensor54->setDEF("TourTime");
TimeSensor54->setCycleInterval(0.15);
TimeSensor54->setLoop(True);
ProtoBody20->addChild(TimeSensor54);

ROUTE* ROUTE55 = new ROUTE();
ROUTE55->setFromNode("TourTime");
ROUTE55->setFromField("cycleTime");
ROUTE55->setToNode("Bounce");
ROUTE55->setToField("set_fraction");
ProtoBody20->addChild(ROUTE55);

ROUTE* ROUTE56 = new ROUTE();
ROUTE56->setFromNode("Bounce");
ROUTE56->setFromField("translation_changed");
ROUTE56->setToNode("transform");
ROUTE56->setToField("set_translation");
ProtoBody20->addChild(ROUTE56);

ProtoDeclare19->setProtoBody(ProtoBody20);

Scene15->addChild(ProtoDeclare19);

ProtoInstance* ProtoInstance57 = new ProtoInstance();
ProtoInstance57->setName("Bubble");
Scene15->addChild(ProtoInstance57);

ProtoInstance* ProtoInstance58 = new ProtoInstance();
ProtoInstance58->setName("Bubble");
Scene15->addChild(ProtoInstance58);

ProtoInstance* ProtoInstance59 = new ProtoInstance();
ProtoInstance59->setName("Bubble");
Scene15->addChild(ProtoInstance59);

X3D0->setScene(Scene15);

X3D0->toXMLString();
}
