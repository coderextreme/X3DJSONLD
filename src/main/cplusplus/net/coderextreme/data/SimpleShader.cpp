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
X3D0->setVersion("3.2");
head* head1 = new head();
component* component2 = new component();
component2->setName("Shaders");
component2->setLevel(1);
head1->addComponent(component2);

meta* meta3 = new meta();
meta3->setName("title");
meta3->setContent("SimpleShader.x3d");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("description");
meta4->setContent("Simple shader example");
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName("creator");
meta5->setContent("John Stewart");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("translator");
meta6->setContent("Holger Seelig, John Carlson, Don Brutzman and Jeff Malnick");
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName("created");
meta7->setContent("26 May 2009");
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName("translated");
meta8->setContent("15 October 2009");
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName("modified");
meta9->setContent("20 October 2019");
head1->addMeta(meta9);

meta* meta10 = new meta();
meta10->setName("reference");
meta10->setContent("http://www.opengl.org/wiki/Fragment_Shader");
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName("reference");
meta11->setContent("http://www.opengl.org/wiki/http://www.opengl.org/wiki/Vertex_Shader");
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName("reference");
meta12->setContent("https://www.web3d.org/x3d/wiki/index.php/X3D_Plugfest");
head1->addMeta(meta12);

meta* meta13 = new meta();
meta13->setName("subject");
meta13->setContent("X3D shader example");
head1->addMeta(meta13);

meta* meta14 = new meta();
meta14->setName("reference");
meta14->setContent("originals/simpleShader.x3dv");
head1->addMeta(meta14);

meta* meta15 = new meta();
meta15->setName("reference");
meta15->setContent("ShaderTutorialInstantReality.pdf");
head1->addMeta(meta15);

meta* meta16 = new meta();
meta16->setName("generator");
meta16->setContent("Titania V3.0.3, http://titania.create3000.de");
head1->addMeta(meta16);

meta* meta17 = new meta();
meta17->setName("info");
meta17->setContent("World of Titania");
head1->addMeta(meta17);

meta* meta18 = new meta();
meta18->setName("outputStyle");
meta18->setContent("nicest");
head1->addMeta(meta18);

meta* meta19 = new meta();
meta19->setName("generator");
meta19->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(meta19);

meta* meta20 = new meta();
meta20->setName("identifier");
meta20->setContent("https://www.web3d.org/x3d/content/examples/Basic/Shaders/SimpleShader.x3d");
head1->addMeta(meta20);

meta* meta21 = new meta();
meta21->setName("license");
meta21->setContent("../../license.html");
head1->addMeta(meta21);

//meta content='under development' name='warning'/
X3D0->setHead(head1);

Scene* Scene22 = new Scene();
ProtoDeclare* ProtoDeclare23 = new ProtoDeclare();
ProtoDeclare23->setName("myPrototype");
ProtoInterface* ProtoInterface24 = new ProtoInterface();
field* field25 = new field();
field25->setName("myInputRange");
field25->setAccessType("initializeOnly");
field25->setType("SFVec3f");
field25->setValue("0.95 0.44 0.22");
ProtoInterface24->addField(field25);

ProtoDeclare23->setProtoInterface(ProtoInterface24);

ProtoBody* ProtoBody26 = new ProtoBody();
Transform* Transform27 = new Transform();
Transform27->setDEF("TR");
Shape* Shape28 = new Shape();
Appearance* Appearance29 = new Appearance();
Material* Material30 = new Material();
Material30->setDiffuseColor(new float[3]{0.5,0.5,0.9});
Appearance29->setMaterial(Material30);

ComposedShader* ComposedShader31 = new ComposedShader();
ComposedShader31->setLanguage("GLSL");
field* field32 = new field();
field32->setName("decis");
field32->setAccessType("initializeOnly");
field32->setType("SFVec3f");
ComposedShader31->addField(field32);

IS* IS33 = new IS();
Connect* connect34 = new Connect();
connect34->setNodeField("decis");
connect34->setProtoField("myInputRange");
IS33->addConnect(connect34);

ComposedShader31->setIS(IS33);

ShaderPart* ShaderPart35 = new ShaderPart();
ShaderPart35->setType("VERTEX");
ComposedShader31->addParts(ShaderPart35);

ShaderPart* ShaderPart36 = new ShaderPart();
ShaderPart36->setType("FRAGMENT");
ComposedShader31->addParts(ShaderPart36);

Appearance29->addShaders(ComposedShader31);

ComposedShader* ComposedShader37 = new ComposedShader();
ComposedShader37->setDEF("Cobweb");
ComposedShader37->setLanguage("GLSL");
field* field38 = new field();
field38->setName("decis");
field38->setAccessType("initializeOnly");
field38->setType("SFVec3f");
field38->setValue("0.95 0.77 0.44");
ComposedShader37->addField(field38);

ShaderPart* ShaderPart39 = new ShaderPart();
ShaderPart39->setType("VERTEX");
ComposedShader37->addParts(ShaderPart39);

ShaderPart* ShaderPart40 = new ShaderPart();
ShaderPart40->setDEF("_1");
ShaderPart40->setType("FRAGMENT");
ComposedShader37->addParts(ShaderPart40);

Appearance29->addShaders(ComposedShader37);

Shape28->setAppearance(Appearance29);

Sphere* Sphere41 = new Sphere();
Sphere41->setRadius(1.75);
Shape28->setGeometry(Sphere41);

Transform27->addChild(Shape28);

ProtoBody26->addChild(Transform27);

ProtoDeclare23->setProtoBody(ProtoBody26);

Scene22->addChild(ProtoDeclare23);

WorldInfo* WorldInfo42 = new WorldInfo();
WorldInfo42->setTitle("SimpleShader");
MetadataSet* MetadataSet43 = new MetadataSet();
MetadataSet43->setName("Titania");
MetadataSet43->setDEF("Titania");
MetadataSet43->setReference("http://titania.create3000.de");
MetadataSet* MetadataSet44 = new MetadataSet();
MetadataSet44->setName("Selection");
MetadataSet44->setDEF("Selection");
MetadataSet44->setReference("http://titania.create3000.de");
MetadataSet* MetadataSet45 = new MetadataSet();
MetadataSet45->setName("nodes");
MetadataSet45->setDEF("nodes");
MetadataSet45->setReference("http://titania.create3000.de");
//NULL
MetadataSet44->setValue(MetadataSet45);

MetadataSet43->setValue(MetadataSet44);

MetadataSet* MetadataSet46 = new MetadataSet();
MetadataSet46->setName("NavigationInfo");
MetadataSet46->setDEF("NavigationInfo");
MetadataSet46->setReference("http://titania.create3000.de");
MetadataString* MetadataString47 = new MetadataString();
MetadataString47->setName("type");
MetadataString47->setDEF("type");
MetadataString47->setReference("http://titania.create3000.de");
MetadataString47->setValue(new String[1]{"EXAMINE"}, 1);
MetadataSet46->setValue(MetadataString47);

MetadataSet43->setValue(MetadataSet46);

MetadataSet* MetadataSet48 = new MetadataSet();
MetadataSet48->setName("Viewpoint");
MetadataSet48->setDEF("Viewpoint");
MetadataSet48->setReference("http://titania.create3000.de");
MetadataDouble* MetadataDouble49 = new MetadataDouble();
MetadataDouble49->setName("position");
MetadataDouble49->setDEF("position");
MetadataDouble49->setReference("http://titania.create3000.de");
MetadataDouble49->setValue(new double[3]{6.24067728185014,0.00250837343276661,2.92117542307615});
MetadataSet48->setValue(MetadataDouble49);

MetadataDouble* MetadataDouble50 = new MetadataDouble();
MetadataDouble50->setName("orientation");
MetadataDouble50->setDEF("orientation");
MetadataDouble50->setReference("http://titania.create3000.de");
MetadataDouble50->setValue(new double[4]{-0.110173424710488,0.990158061907379,-0.0863065984000336,1.21146676119191});
MetadataSet48->setValue(MetadataDouble50);

MetadataDouble* MetadataDouble51 = new MetadataDouble();
MetadataDouble51->setName("centerOfRotation");
MetadataDouble51->setDEF("centerOfRotation");
MetadataDouble51->setReference("http://titania.create3000.de");
MetadataDouble51->setValue(new double[3]{-0.808320198626341,-0.358072370409949,0.22817191560906});
MetadataSet48->setValue(MetadataDouble51);

MetadataSet43->setValue(MetadataSet48);

WorldInfo42->setMetadata(MetadataSet43);

Scene22->addChild(WorldInfo42);

ProtoInstance* ProtoInstance52 = new ProtoInstance();
ProtoInstance52->setName("myPrototype");
Scene22->addChild(ProtoInstance52);

X3D0->setScene(Scene22);

X3D0->toXMLString();
}
