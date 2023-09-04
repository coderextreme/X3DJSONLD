/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/stylesheets/cpp/concretes.h"
int main(int argc, char ** argv) {
CX3DScene m_pScene;
CBrowser browser = X3D.getBrowser();
CX3D* X3D0 = new CX3D();
CGroup* group = (CGroup*)(m_pScene.createNode("Group"));
group->addChildren(X3D0);
X3D0->setProfile("Immersive");
X3D0->setVersion("4.0");
Chead* head1 = new Chead();
Cmeta* meta2 = new Cmeta();
meta2->setName("title");
meta2->setContent("SimpleShader.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("Simple shader example");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("John Stewart");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("translator");
meta5->setContent("Holger Seelig, John Carlson, Don Brutzman and Jeff Malnick");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("created");
meta6->setContent("26 May 2009");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("translated");
meta7->setContent("15 October 2009");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("modified");
meta8->setContent("20 October 2019");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("reference");
meta9->setContent("http://www.opengl.org/wiki/Fragment_Shader");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("reference");
meta10->setContent("http://www.opengl.org/wiki/http://www.opengl.org/wiki/Vertex_Shader");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("reference");
meta11->setContent("https://www.web3d.org/x3d/wiki/index.php/X3D_Plugfest");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("reference");
meta12->setContent("originals/simpleShader.x3dv");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("reference");
meta13->setContent("ShaderTutorialInstantReality.pdf");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("subject");
meta14->setContent("X3D shader example");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("generator");
meta15->setContent("Titania V3.0.3, http://titania.create3000.de");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("generator");
meta16->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta16);

Cmeta* meta17 = new Cmeta();
meta17->setName("info");
meta17->setContent("World of Titania");
head1->addMeta(*meta17);

Cmeta* meta18 = new Cmeta();
meta18->setName("outputStyle");
meta18->setContent("nicest");
head1->addMeta(*meta18);

Cmeta* meta19 = new Cmeta();
meta19->setName("identifier");
meta19->setContent("https://www.web3d.org/x3d/content/examples/Basic/Shaders/SimpleShader.x3d");
head1->addMeta(*meta19);

Ccomponent* component20 = new Ccomponent();
component20->setName("Shaders");
component20->setLevel(1);
head1->addComponent(*component20);

X3D0->setHead(*head1);

CScene* Scene21 = new CScene();
CProtoDeclare ProtoDeclare22 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="myPrototype" ><ProtoInterface><field accessType="initializeOnly" type="SFVec3f" name="myInputRange" value="0.95 0.44 0.22"></field>
</ProtoInterface>
<ProtoBody><Transform DEF="TR"><Shape><Appearance><Material diffuseColor="0.5 0.5 0.9"></Material>
<ComposedShader language="GLSL"><ShaderPart></ShaderPart>
<ShaderPart type="FRAGMENT"></ShaderPart>
<field accessType="initializeOnly" type="SFVec3f" name="decis"></field>
<IS><connect nodeField="decis" protoField="myInputRange"></connect>
</IS>
</ComposedShader>
<ComposedShader DEF="Cobweb" language="GLSL"><ShaderPart></ShaderPart>
<ShaderPart type="FRAGMENT"></ShaderPart>
<field accessType="initializeOnly" type="SFVec3f" name="decis" value="0.95 0.77 0.44"></field>
</ComposedShader>
</Appearance>
<Sphere radius="1.75"></Sphere>
</Shape>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare22->setName("myPrototype");
CProtoInterface* ProtoInterface23 = new CProtoInterface();
Cfield* field24 = new Cfield();
field24->setAccessType("initializeOnly");
field24->setType("SFVec3f");
field24->setName("myInputRange");
field24->setValue("0.95 0.44 0.22");
ProtoInterface23->addField(*field24);

ProtoDeclare22->setProtoInterface(*ProtoInterface23);

CProtoBody* ProtoBody25 = new CProtoBody();
CTransform* Transform26 = (CTransform *)(m_pScene.createNode("Transform"));
Transform26->setDEF("TR");
CShape* Shape27 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance28 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material29 = (CMaterial *)(m_pScene.createNode("Material"));
Material29->setDiffuseColor(new float[3]{0.5,0.5,0.9});
Appearance28->setMaterial(*Material29);

CComposedShader* ComposedShader30 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader30->setLanguage("GLSL");
CShaderPart* ShaderPart31 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ComposedShader30->addParts(*ShaderPart31);

CShaderPart* ShaderPart32 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart32->setType("FRAGMENT");
ComposedShader30->addParts(*ShaderPart32);

Cfield* field33 = new Cfield();
field33->setAccessType("initializeOnly");
field33->setType("SFVec3f");
field33->setName("decis");
ComposedShader30->addField(*field33);

CIS* IS34 = new CIS();
Cconnect* connect35 = new Cconnect();
connect35->setNodeField("decis");
connect35->setProtoField("myInputRange");
IS34->addConnect(*connect35);

ComposedShader30->setIS(*IS34);

Appearance28->addShaders(*ComposedShader30);

CComposedShader* ComposedShader36 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader36->setDEF("Cobweb");
ComposedShader36->setLanguage("GLSL");
CShaderPart* ShaderPart37 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ComposedShader36->addParts(*ShaderPart37);

CShaderPart* ShaderPart38 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart38->setType("FRAGMENT");
ComposedShader36->addParts(*ShaderPart38);

Cfield* field39 = new Cfield();
field39->setAccessType("initializeOnly");
field39->setType("SFVec3f");
field39->setName("decis");
field39->setValue("0.95 0.77 0.44");
ComposedShader36->addField(*field39);

Appearance28->addShaders(*ComposedShader36);

Shape27->setAppearance(*Appearance28);

CSphere* Sphere40 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere40->setRadius(1.75);
Shape27->setGeometry(Sphere40);

Transform26->addChild(*Shape27);

ProtoBody25->addChildren(*Transform26);

ProtoDeclare22->setProtoBody(*ProtoBody25);

group->addChildren(*ProtoDeclare22);

CWorldInfo* WorldInfo41 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo41->setTitle("SimpleShader");
CMetadataSet* MetadataSet42 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet42->setDEF("Titania");
MetadataSet42->setName("Titania");
MetadataSet42->setReference("http://titania.create3000.de");
CMetadataSet* MetadataSet43 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet43->setDEF("Selection");
MetadataSet43->setName("Selection");
MetadataSet43->setReference("http://titania.create3000.de");
CMetadataSet* MetadataSet44 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet44->setDEF("nodes");
MetadataSet44->setName("nodes");
MetadataSet44->setReference("http://titania.create3000.de");
MetadataSet43->setValue(*MetadataSet44);

MetadataSet42->setValue(*MetadataSet43);

CMetadataSet* MetadataSet45 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet45->setDEF("NavigationInfo");
MetadataSet45->setName("NavigationInfo");
MetadataSet45->setReference("http://titania.create3000.de");
CMetadataString* MetadataString46 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString46->setDEF("type");
MetadataString46->setName("type");
MetadataString46->setReference("http://titania.create3000.de");
MetadataString46->setValue(new CString[1]{"EXAMINE"}, 1);
MetadataSet45->setValue(*MetadataString46);

MetadataSet42->setValue(*MetadataSet45);

CMetadataSet* MetadataSet47 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet47->setDEF("Viewpoint");
MetadataSet47->setName("Viewpoint");
MetadataSet47->setReference("http://titania.create3000.de");
CMetadataDouble* MetadataDouble48 = (CMetadataDouble *)(m_pScene.createNode("MetadataDouble"));
MetadataDouble48->setDEF("position");
MetadataDouble48->setName("position");
MetadataDouble48->setReference("http://titania.create3000.de");
MetadataDouble48->setValue(new double[3]{6.24067728185014,0.00250837343276661,2.92117542307615});
MetadataSet47->setValue(*MetadataDouble48);

CMetadataDouble* MetadataDouble49 = (CMetadataDouble *)(m_pScene.createNode("MetadataDouble"));
MetadataDouble49->setDEF("orientation");
MetadataDouble49->setName("orientation");
MetadataDouble49->setReference("http://titania.create3000.de");
MetadataDouble49->setValue(new double[4]{-0.110173424710488,0.990158061907379,-0.0863065984000336,1.21146676119191});
MetadataSet47->setValue(*MetadataDouble49);

CMetadataDouble* MetadataDouble50 = (CMetadataDouble *)(m_pScene.createNode("MetadataDouble"));
MetadataDouble50->setDEF("centerOfRotation");
MetadataDouble50->setName("centerOfRotation");
MetadataDouble50->setReference("http://titania.create3000.de");
MetadataDouble50->setValue(new double[3]{-0.808320198626341,-0.358072370409949,0.22817191560906});
MetadataSet47->setValue(*MetadataDouble50);

MetadataSet42->setValue(*MetadataSet47);

WorldInfo41->setMetadata(*MetadataSet42);

group->addChildren(*WorldInfo41);

CProtoInstance* ProtoInstance51 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance51->setName("myPrototype");
group->addChildren(*ProtoInstance51);

X3D0->setScene(*Scene21);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
