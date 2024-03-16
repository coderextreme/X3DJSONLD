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
meta10->setContent("ballx_ite.x3d");
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
Background19->setBackUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
Background19->setBottomUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
Background19->setFrontUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
Background19->setLeftUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
Background19->setRightUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
Background19->setTopUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
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

ComposedShader* ComposedShader32 = new ComposedShader();
ComposedShader32->setLanguage("GLSL");
field* field33 = new field();
field33->setName("chromaticDispertion");
field33->setAccessType("initializeOnly");
field33->setType("SFVec3f");
field33->setValue("0.98 1 1.033");
ComposedShader32->addField(field33);

field* field34 = new field();
field34->setName("cube");
field34->setType("SFNode");
field34->setAccessType("initializeOnly");
ComposedCubeMapTexture* ComposedCubeMapTexture35 = new ComposedCubeMapTexture();
ComposedCubeMapTexture35->setUSE("texture");
field34->addChild(ComposedCubeMapTexture35);

ComposedShader32->addField(field34);

field* field36 = new field();
field36->setName("bias");
field36->setAccessType("initializeOnly");
field36->setType("SFFloat");
field36->setValue("0.5");
ComposedShader32->addField(field36);

field* field37 = new field();
field37->setName("scale");
field37->setAccessType("initializeOnly");
field37->setType("SFFloat");
field37->setValue("0.5");
ComposedShader32->addField(field37);

field* field38 = new field();
field38->setName("power");
field38->setAccessType("initializeOnly");
field38->setType("SFFloat");
field38->setValue("2");
ComposedShader32->addField(field38);

ShaderPart* ShaderPart39 = new ShaderPart();
ShaderPart39->setUrl(new String[2]{"../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"}, 2);
ShaderPart39->setType("VERTEX");
ComposedShader32->addParts(ShaderPart39);

ShaderPart* ShaderPart40 = new ShaderPart();
ShaderPart40->setUrl(new String[2]{"../shaders/x_itebubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs"}, 2);
ShaderPart40->setType("FRAGMENT");
ComposedShader32->addParts(ShaderPart40);

Appearance23->addShaders(ComposedShader32);

Shape21->setAppearance(Appearance23);

Transform20->addChild(Shape21);

Scene15->addChild(Transform20);

X3D0->setScene(Scene15);

X3D0->toXMLString();
}
