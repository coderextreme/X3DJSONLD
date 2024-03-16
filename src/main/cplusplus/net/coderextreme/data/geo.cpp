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
meta10->setContent("geo.x3d");
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
meta13->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/geo.x3d");
head1->addMeta(meta13);

meta* meta14 = new meta();
meta14->setName("description");
meta14->setContent("a sphere");
head1->addMeta(meta14);

X3D0->setHead(head1);

Scene* Scene15 = new Scene();
NavigationInfo* NavigationInfo16 = new NavigationInfo();
NavigationInfo16->setType(new String[4]{"ANY","EXAMINE","FLY","LOOKAT"}, 4);
Scene15->addChild(NavigationInfo16);

Viewpoint* Viewpoint17 = new Viewpoint();
Viewpoint17->setDEF("Tour");
Viewpoint17->setDescription("Tour Views");
Scene15->addChild(Viewpoint17);

//Viewpoint position='0 0 4' description='sphere in road'/
Background* Background18 = new Background();
Background18->setBackUrl(new String[2]{"../resources/images/bBK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"}, 2);
Background18->setBottomUrl(new String[2]{"../resources/images/bBT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"}, 2);
Background18->setFrontUrl(new String[2]{"../resources/images/bFR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"}, 2);
Background18->setLeftUrl(new String[2]{"../resources/images/bLF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"}, 2);
Background18->setRightUrl(new String[2]{"../resources/images/bRT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"}, 2);
Background18->setTopUrl(new String[2]{"../resources/images/bTP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"}, 2);
Scene15->addChild(Background18);

Transform* Transform19 = new Transform();
Shape* Shape20 = new Shape();
Sphere* Sphere21 = new Sphere();
Shape20->setGeometry(Sphere21);

Appearance* Appearance22 = new Appearance();
Material* Material23 = new Material();
Material23->setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material23->setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance22->setMaterial(Material23);

ComposedCubeMapTexture* ComposedCubeMapTexture24 = new ComposedCubeMapTexture();
ComposedCubeMapTexture24->setDEF("texture");
ImageTexture* ImageTexture25 = new ImageTexture();
ImageTexture25->setUrl(new String[2]{"../resources/images/bBK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"}, 2);
ComposedCubeMapTexture24->setBackTexture(ImageTexture25);

ImageTexture* ImageTexture26 = new ImageTexture();
ImageTexture26->setUrl(new String[2]{"../resources/images/bBT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"}, 2);
ComposedCubeMapTexture24->setBottomTexture(ImageTexture26);

ImageTexture* ImageTexture27 = new ImageTexture();
ImageTexture27->setUrl(new String[2]{"../resources/images/bFR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"}, 2);
ComposedCubeMapTexture24->setFrontTexture(ImageTexture27);

ImageTexture* ImageTexture28 = new ImageTexture();
ImageTexture28->setUrl(new String[2]{"../resources/images/bLF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"}, 2);
ComposedCubeMapTexture24->setLeftTexture(ImageTexture28);

ImageTexture* ImageTexture29 = new ImageTexture();
ImageTexture29->setUrl(new String[2]{"../resources/images/bRT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"}, 2);
ComposedCubeMapTexture24->setRightTexture(ImageTexture29);

ImageTexture* ImageTexture30 = new ImageTexture();
ImageTexture30->setUrl(new String[2]{"../resources/images/bTP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"}, 2);
ComposedCubeMapTexture24->setTopTexture(ImageTexture30);

Appearance22->setTexture(ComposedCubeMapTexture24);

ComposedShader* ComposedShader31 = new ComposedShader();
ComposedShader31->setLanguage("GLSL");
field* field32 = new field();
field32->setName("chromaticDispertion");
field32->setAccessType("inputOutput");
field32->setType("SFVec3f");
field32->setValue("0.98 1 1.033");
ComposedShader31->addField(field32);

field* field33 = new field();
field33->setName("cube");
field33->setType("SFNode");
field33->setAccessType("inputOutput");
ComposedCubeMapTexture* ComposedCubeMapTexture34 = new ComposedCubeMapTexture();
ComposedCubeMapTexture34->setUSE("texture");
field33->addChild(ComposedCubeMapTexture34);

ComposedShader31->addField(field33);

field* field35 = new field();
field35->setName("bias");
field35->setAccessType("inputOutput");
field35->setType("SFFloat");
field35->setValue("0.5");
ComposedShader31->addField(field35);

field* field36 = new field();
field36->setName("scale");
field36->setAccessType("inputOutput");
field36->setType("SFFloat");
field36->setValue("0.5");
ComposedShader31->addField(field36);

field* field37 = new field();
field37->setName("power");
field37->setAccessType("inputOutput");
field37->setType("SFFloat");
field37->setValue("2");
ComposedShader31->addField(field37);

ShaderPart* ShaderPart38 = new ShaderPart();
ShaderPart38->setUrl(new String[2]{"../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"}, 2);
ShaderPart38->setType("VERTEX");
ComposedShader31->addParts(ShaderPart38);

ShaderPart* ShaderPart39 = new ShaderPart();
ShaderPart39->setDEF("common");
ShaderPart39->setUrl(new String[2]{"../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"}, 2);
ShaderPart39->setType("FRAGMENT");
ComposedShader31->addParts(ShaderPart39);

Appearance22->addShaders(ComposedShader31);

ComposedShader* ComposedShader40 = new ComposedShader();
ComposedShader40->setLanguage("GLSL");
field* field41 = new field();
field41->setName("chromaticDispertion");
field41->setAccessType("initializeOnly");
field41->setType("SFVec3f");
field41->setValue("0.98 1 1.033");
ComposedShader40->addField(field41);

field* field42 = new field();
field42->setName("cube");
field42->setType("SFNode");
field42->setAccessType("initializeOnly");
ComposedCubeMapTexture* ComposedCubeMapTexture43 = new ComposedCubeMapTexture();
ComposedCubeMapTexture43->setUSE("texture");
field42->addChild(ComposedCubeMapTexture43);

ComposedShader40->addField(field42);

field* field44 = new field();
field44->setName("bias");
field44->setAccessType("initializeOnly");
field44->setType("SFFloat");
field44->setValue("0.5");
ComposedShader40->addField(field44);

field* field45 = new field();
field45->setName("scale");
field45->setAccessType("initializeOnly");
field45->setType("SFFloat");
field45->setValue("0.5");
ComposedShader40->addField(field45);

field* field46 = new field();
field46->setName("power");
field46->setAccessType("initializeOnly");
field46->setType("SFFloat");
field46->setValue("2");
ComposedShader40->addField(field46);

ShaderPart* ShaderPart47 = new ShaderPart();
ShaderPart47->setUrl(new String[2]{"../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"}, 2);
ShaderPart47->setType("VERTEX");
ComposedShader40->addParts(ShaderPart47);

ShaderPart* ShaderPart48 = new ShaderPart();
ShaderPart48->setUrl(new String[2]{"../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"}, 2);
ShaderPart48->setType("FRAGMENT");
ComposedShader40->addParts(ShaderPart48);

Appearance22->addShaders(ComposedShader40);

Shape20->setAppearance(Appearance22);

Transform19->addChild(Shape20);

Scene15->addChild(Transform19);

X3D0->setScene(Scene15);

X3D0->toXMLString();
}
