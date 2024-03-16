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

meta* meta10 = new meta();
meta10->setName("title");
meta10->setContent("ball.x3d");
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName("creator");
meta11->setContent("John Carlson");
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName("generator");
meta12->setContent("manual");
head1->addMeta(meta12);

meta* meta13 = new meta();
meta13->setName("identifier");
meta13->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/ball.x3d");
head1->addMeta(meta13);

meta* meta14 = new meta();
meta14->setName("description");
meta14->setContent("a prismatic sphere");
head1->addMeta(meta14);

X3D0->setHead(head1);

Scene* Scene15 = new Scene();
WorldInfo* WorldInfo16 = new WorldInfo();
WorldInfo16->setTitle("ball.x3d");
Scene15->addChild(WorldInfo16);

NavigationInfo* NavigationInfo17 = new NavigationInfo();
NavigationInfo17->setType(new String[4]{"ANY","EXAMINE","FLY","LOOKAT"}, 4);
Scene15->addChild(NavigationInfo17);

Viewpoint* Viewpoint18 = new Viewpoint();
Viewpoint18->setDescription("Tour Views");
Scene15->addChild(Viewpoint18);

Background* Background19 = new Background();
Background19->setBackUrl(new String[1]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 1);
Background19->setBottomUrl(new String[1]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 1);
Background19->setFrontUrl(new String[1]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 1);
Background19->setLeftUrl(new String[1]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 1);
Background19->setRightUrl(new String[1]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 1);
Background19->setTopUrl(new String[1]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 1);
Scene15->addChild(Background19);

Transform* Transform20 = new Transform();
Shape* Shape21 = new Shape();
Sphere* Sphere22 = new Sphere();
Shape21->setGeometry(Sphere22);

Appearance* Appearance23 = new Appearance();
Material* Material24 = new Material();
Material24->setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material24->setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance23->setMaterial(Material24);

ComposedCubeMapTexture* ComposedCubeMapTexture25 = new ComposedCubeMapTexture();
ComposedCubeMapTexture25->setDEF("texture");
ImageTexture* ImageTexture26 = new ImageTexture();
ImageTexture26->setUrl(new String[1]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 1);
ComposedCubeMapTexture25->setBackTexture(ImageTexture26);

ImageTexture* ImageTexture27 = new ImageTexture();
ImageTexture27->setUrl(new String[1]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 1);
ComposedCubeMapTexture25->setBottomTexture(ImageTexture27);

ImageTexture* ImageTexture28 = new ImageTexture();
ImageTexture28->setUrl(new String[1]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 1);
ComposedCubeMapTexture25->setFrontTexture(ImageTexture28);

ImageTexture* ImageTexture29 = new ImageTexture();
ImageTexture29->setUrl(new String[1]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 1);
ComposedCubeMapTexture25->setLeftTexture(ImageTexture29);

ImageTexture* ImageTexture30 = new ImageTexture();
ImageTexture30->setUrl(new String[1]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 1);
ComposedCubeMapTexture25->setRightTexture(ImageTexture30);

ImageTexture* ImageTexture31 = new ImageTexture();
ImageTexture31->setUrl(new String[1]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 1);
ComposedCubeMapTexture25->setTopTexture(ImageTexture31);

Appearance23->setTexture(ComposedCubeMapTexture25);

//<ProgramShader DEF='ProgramShader' containerField='shaders' language='GLSL'> <ShaderProgram url='\"../shaders/freewrl.vs\"' containerField='programs' type='VERTEX'> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'/> <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'/> <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'/> <field name='power' accessType='initializeOnly' type='SFFloat' value='2'/> </ShaderProgram> <ShaderProgram url='\"../shaders/freewrl.fs\"' containerField='programs' type='FRAGMENT'/> </ProgramShader>
//<ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'></field> <field name='fw_Texture_unit0' type='SFNode' accessType=\"initializeOnly\"> <ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture> </field> <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='power' accessType='initializeOnly' type='SFFloat' value='2'></field> <ShaderPart url='\"../shaders/contact.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>
//<ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field> <field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture> </field> <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='power' accessType='inputOutput' type='SFFloat' value='2'></field> <ShaderPart url='\"../shaders/octaga.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>
//<ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'></field> <field name='cube' accessType='initializeOnly' type='SFInt32' value='0'></field> <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='power' accessType='initializeOnly' type='SFFloat' value='2'></field> <ShaderPart url='\"../shaders/instant.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>
//
ComposedShader* ComposedShader32 = new ComposedShader();
ComposedShader32->setLanguage("GLSL");
field* field33 = new field();
field33->setName("chromaticDispertion");
field33->setAccessType("inputOutput");
field33->setType("SFVec3f");
field33->setValue("0.98 1 1.033");
ComposedShader32->addField(field33);

field* field34 = new field();
field34->setName("cube");
field34->setType("SFNode");
field34->setAccessType("inputOutput");
ComposedCubeMapTexture* ComposedCubeMapTexture35 = new ComposedCubeMapTexture();
ComposedCubeMapTexture35->setUSE("texture");
field34->addChild(ComposedCubeMapTexture35);

ComposedShader32->addField(field34);

field* field36 = new field();
field36->setName("bias");
field36->setAccessType("inputOutput");
field36->setType("SFFloat");
field36->setValue("0.5");
ComposedShader32->addField(field36);

field* field37 = new field();
field37->setName("scale");
field37->setAccessType("inputOutput");
field37->setType("SFFloat");
field37->setValue("0.5");
ComposedShader32->addField(field37);

field* field38 = new field();
field38->setName("power");
field38->setAccessType("inputOutput");
field38->setType("SFFloat");
field38->setValue("2");
ComposedShader32->addField(field38);

ShaderPart* ShaderPart39 = new ShaderPart();
ShaderPart39->setUrl(new String[1]{"../shaders/x3dom.vs"}, 1);
ShaderPart39->setType("VERTEX");
ComposedShader32->addParts(ShaderPart39);

ShaderPart* ShaderPart40 = new ShaderPart();
ShaderPart40->setDEF("common");
ShaderPart40->setUrl(new String[1]{"../shaders/common.fs"}, 1);
ShaderPart40->setType("FRAGMENT");
ComposedShader32->addParts(ShaderPart40);

Appearance23->addShaders(ComposedShader32);

ComposedShader* ComposedShader41 = new ComposedShader();
ComposedShader41->setLanguage("GLSL");
field* field42 = new field();
field42->setName("chromaticDispertion");
field42->setAccessType("initializeOnly");
field42->setType("SFVec3f");
field42->setValue("0.98 1 1.033");
ComposedShader41->addField(field42);

field* field43 = new field();
field43->setName("cube");
field43->setType("SFNode");
field43->setAccessType("initializeOnly");
ComposedCubeMapTexture* ComposedCubeMapTexture44 = new ComposedCubeMapTexture();
ComposedCubeMapTexture44->setUSE("texture");
field43->addChild(ComposedCubeMapTexture44);

ComposedShader41->addField(field43);

field* field45 = new field();
field45->setName("bias");
field45->setAccessType("initializeOnly");
field45->setType("SFFloat");
field45->setValue("0.5");
ComposedShader41->addField(field45);

field* field46 = new field();
field46->setName("scale");
field46->setAccessType("initializeOnly");
field46->setType("SFFloat");
field46->setValue("0.5");
ComposedShader41->addField(field46);

field* field47 = new field();
field47->setName("power");
field47->setAccessType("initializeOnly");
field47->setType("SFFloat");
field47->setValue("2");
ComposedShader41->addField(field47);

ShaderPart* ShaderPart48 = new ShaderPart();
ShaderPart48->setUrl(new String[1]{"../shaders/x_ite.vs"}, 1);
ShaderPart48->setType("VERTEX");
ComposedShader41->addParts(ShaderPart48);

ShaderPart* ShaderPart49 = new ShaderPart();
ShaderPart49->setUrl(new String[1]{"../shaders/x_itebubbles.fs"}, 1);
ShaderPart49->setType("FRAGMENT");
ComposedShader41->addParts(ShaderPart49);

Appearance23->addShaders(ComposedShader41);

Shape21->setAppearance(Appearance23);

Transform20->addChild(Shape21);

Scene15->addChild(Transform20);

X3D0->setScene(Scene15);

X3D0->toXMLString();
}
