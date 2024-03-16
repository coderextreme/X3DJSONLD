#ifdef WIN32
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#endif
#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/SphereExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/SphereExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/XML_PARSER.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/X3DLib.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/glMath.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/glut.h"
int main(int argc, char ** argv) {
X3D* X3D0 = new X3D();
X3D0->setProfile(CString("Immersive"));
X3D0->setVersion(CString("3.2"));
head* head1 = new head();
component* component2 = new component();
component2->setName(CString("Shaders"));
component2->setLevel(1);
head1->addChild(component2);

meta* meta3 = new meta();
meta3->setName(CString("title"));
meta3->setContent(CString("SimpleShader.x3d"));
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName(CString("description"));
meta4->setContent(CString("Simple shader example"));
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName(CString("creator"));
meta5->setContent(CString("John Stewart"));
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName(CString("translator"));
meta6->setContent(CString("Holger Seelig, John Carlson, Don Brutzman and Jeff Malnick"));
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName(CString("created"));
meta7->setContent(CString("26 May 2009"));
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName(CString("translated"));
meta8->setContent(CString("15 October 2009"));
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName(CString("modified"));
meta9->setContent(CString("20 October 2019"));
head1->addMeta(meta9);

meta* meta10 = new meta();
meta10->setName(CString("reference"));
meta10->setContent(CString("http://www.opengl.org/wiki/Fragment_Shader"));
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName(CString("reference"));
meta11->setContent(CString("http://www.opengl.org/wiki/http://www.opengl.org/wiki/Vertex_Shader"));
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName(CString("reference"));
meta12->setContent(CString("https://www.web3d.org/x3d/wiki/index.php/X3D_Plugfest"));
head1->addMeta(meta12);

meta* meta13 = new meta();
meta13->setName(CString("subject"));
meta13->setContent(CString("X3D shader example"));
head1->addMeta(meta13);

meta* meta14 = new meta();
meta14->setName(CString("reference"));
meta14->setContent(CString("originals/simpleShader.x3dv"));
head1->addMeta(meta14);

meta* meta15 = new meta();
meta15->setName(CString("reference"));
meta15->setContent(CString("ShaderTutorialInstantReality.pdf"));
head1->addMeta(meta15);

meta* meta16 = new meta();
meta16->setName(CString("generator"));
meta16->setContent(CString("Titania V3.0.3, http://titania.create3000.de"));
head1->addMeta(meta16);

meta* meta17 = new meta();
meta17->setName(CString("info"));
meta17->setContent(CString("World of Titania"));
head1->addMeta(meta17);

meta* meta18 = new meta();
meta18->setName(CString("outputStyle"));
meta18->setContent(CString("nicest"));
head1->addMeta(meta18);

meta* meta19 = new meta();
meta19->setName(CString("generator"));
meta19->setContent(CString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1->addMeta(meta19);

meta* meta20 = new meta();
meta20->setName(CString("identifier"));
meta20->setContent(CString("https://www.web3d.org/x3d/content/examples/Basic/Shaders/SimpleShader.x3d"));
head1->addMeta(meta20);

meta* meta21 = new meta();
meta21->setName(CString("license"));
meta21->setContent(CString("../../license.html"));
head1->addMeta(meta21);

//meta content='under development' name='warning'/
X3D0->setHead(head1);

Scene* Scene22 = new Scene();
ProtoDeclare* ProtoDeclare23 = new ProtoDeclare();
ProtoDeclare23->setName(CString("myPrototype"));
ProtoInterface* ProtoInterface24 = new ProtoInterface();
field* field25 = new field();
field25->setName(CString("myInputRange"));
field25->setAccessType(CString("initializeOnly"));
field25->setType(CString("SFVec3f"));
field25->setValue(CString("0.95 0.44 0.22"));
ProtoInterface24->addChild(field25);

ProtoDeclare23->addChild(ProtoInterface24);

ProtoBody* ProtoBody26 = new ProtoBody();
Transform* Transform27 = new Transform();
Transform27->setDEF(CString("TR"));
Shape* Shape28 = new Shape();
Appearance* Appearance29 = new Appearance();
Material* Material30 = new Material();
Material30->setDiffuseColor(new float[3]{0.5,0.5,0.9});
Appearance29->addChild(Material30);

ComposedShader* ComposedShader31 = new ComposedShader();
ComposedShader31->setLanguage(CString("GLSL"));
field* field32 = new field();
field32->setName(CString("decis"));
field32->setAccessType(CString("initializeOnly"));
field32->setType(CString("SFVec3f"));
ComposedShader31->addChild(field32);

IS* IS33 = new IS();
Connect* connect34 = new Connect();
connect34->setNodeField(CString("decis"));
connect34->setProtoField(CString("myInputRange"));
IS33->addChild(connect34);

ComposedShader31->addChild(IS33);

ShaderPart* ShaderPart35 = new ShaderPart();
ShaderPart35->setType(CString("VERTEX"));
ComposedShader31->setParts(ShaderPart35);

ShaderPart* ShaderPart36 = new ShaderPart();
ShaderPart36->setType(CString("FRAGMENT"));
ComposedShader31->setParts(ShaderPart36);

Appearance29->addChild(ComposedShader31);

ComposedShader* ComposedShader37 = new ComposedShader();
ComposedShader37->setDEF(CString("Cobweb"));
ComposedShader37->setLanguage(CString("GLSL"));
field* field38 = new field();
field38->setName(CString("decis"));
field38->setAccessType(CString("initializeOnly"));
field38->setType(CString("SFVec3f"));
field38->setValue(CString("0.95 0.77 0.44"));
ComposedShader37->addChild(field38);

ShaderPart* ShaderPart39 = new ShaderPart();
ShaderPart39->setType(CString("VERTEX"));
ComposedShader37->setParts(ShaderPart39);

ShaderPart* ShaderPart40 = new ShaderPart();
ShaderPart40->setDEF(CString("_1"));
ShaderPart40->setType(CString("FRAGMENT"));
ComposedShader37->setParts(ShaderPart40);

Appearance29->addChild(ComposedShader37);

Shape28->addChild(Appearance29);

Sphere* Sphere41 = new Sphere();
Sphere41->setRadius(1.75);
Shape28->setGeometry(Sphere41);

Transform27->addChild(Shape28);

ProtoBody26->addChild(Transform27);

ProtoDeclare23->addChild(ProtoBody26);

Scene22->addChild(ProtoDeclare23);

WorldInfo* WorldInfo42 = new WorldInfo();
WorldInfo42->setTitle(CString("SimpleShader"));
MetadataSet* MetadataSet43 = new MetadataSet();
MetadataSet43->setName(CString("Titania"));
MetadataSet43->setDEF(CString("Titania"));
MetadataSet43->setReference(CString("http://titania.create3000.de"));
MetadataSet* MetadataSet44 = new MetadataSet();
MetadataSet44->setName(CString("Selection"));
MetadataSet44->setDEF(CString("Selection"));
MetadataSet44->setReference(CString("http://titania.create3000.de"));
MetadataSet* MetadataSet45 = new MetadataSet();
MetadataSet45->setName(CString("nodes"));
MetadataSet45->setDEF(CString("nodes"));
MetadataSet45->setReference(CString("http://titania.create3000.de"));
//NULL
MetadataSet44->setValue((X3DNode *)MetadataSet45);

MetadataSet43->setValue((X3DNode *)MetadataSet44);

MetadataSet* MetadataSet46 = new MetadataSet();
MetadataSet46->setName(CString("NavigationInfo"));
MetadataSet46->setDEF(CString("NavigationInfo"));
MetadataSet46->setReference(CString("http://titania.create3000.de"));
MetadataString* MetadataString47 = new MetadataString();
MetadataString47->setName(CString("type"));
MetadataString47->setDEF(CString("type"));
MetadataString47->setReference(CString("http://titania.create3000.de"));
MetadataString47->setValue(new CString[1]{CString("EXAMINE")}, 1);
MetadataSet46->setValue((X3DNode *)MetadataString47);

MetadataSet43->setValue((X3DNode *)MetadataSet46);

MetadataSet* MetadataSet48 = new MetadataSet();
MetadataSet48->setName(CString("Viewpoint"));
MetadataSet48->setDEF(CString("Viewpoint"));
MetadataSet48->setReference(CString("http://titania.create3000.de"));
MetadataDouble* MetadataDouble49 = new MetadataDouble();
MetadataDouble49->setName(CString("position"));
MetadataDouble49->setDEF(CString("position"));
MetadataDouble49->setReference(CString("http://titania.create3000.de"));
MetadataDouble49->setValue(new double[3]{6.24067728185014,0.00250837343276661,2.92117542307615}, 3);
MetadataSet48->setValue((X3DNode *)MetadataDouble49);

MetadataDouble* MetadataDouble50 = new MetadataDouble();
MetadataDouble50->setName(CString("orientation"));
MetadataDouble50->setDEF(CString("orientation"));
MetadataDouble50->setReference(CString("http://titania.create3000.de"));
MetadataDouble50->setValue(new double[4]{-0.110173424710488,0.990158061907379,-0.0863065984000336,1.21146676119191}, 4);
MetadataSet48->setValue((X3DNode *)MetadataDouble50);

MetadataDouble* MetadataDouble51 = new MetadataDouble();
MetadataDouble51->setName(CString("centerOfRotation"));
MetadataDouble51->setDEF(CString("centerOfRotation"));
MetadataDouble51->setReference(CString("http://titania.create3000.de"));
MetadataDouble51->setValue(new double[3]{-0.808320198626341,-0.358072370409949,0.22817191560906}, 3);
MetadataSet48->setValue((X3DNode *)MetadataDouble51);

MetadataSet43->setValue((X3DNode *)MetadataSet48);

WorldInfo42->setMetadata(MetadataSet43);

Scene22->addChild(WorldInfo42);

ProtoInstance* ProtoInstance52 = new ProtoInstance();
ProtoInstance52->setName(CString("myPrototype"));
Scene22->addChild(ProtoInstance52);

X3D0->setScene(Scene22);

}
