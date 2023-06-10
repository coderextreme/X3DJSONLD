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
X3D0->setVersion("3.2");
Chead* head1 = new Chead();
Ccomponent* component2 = new Ccomponent();
component2->setName("Shaders");
component2->setLevel(1);
head1->addComponent(*component2);

Cmeta* meta3 = new Cmeta();
meta3->setName("title");
meta3->setContent("SimpleShader.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("description");
meta4->setContent("Simple shader example");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("creator");
meta5->setContent("John Stewart");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("translator");
meta6->setContent("Holger Seelig, John Carlson, Don Brutzman and Jeff Malnick");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("created");
meta7->setContent("26 May 2009");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("translated");
meta8->setContent("15 October 2009");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("modified");
meta9->setContent("20 October 2019");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("reference");
meta10->setContent("http://www.opengl.org/wiki/Fragment_Shader");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("reference");
meta11->setContent("http://www.opengl.org/wiki/http://www.opengl.org/wiki/Vertex_Shader");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("reference");
meta12->setContent("https://www.web3d.org/x3d/wiki/index.php/X3D_Plugfest");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("subject");
meta13->setContent("X3D shader example");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("reference");
meta14->setContent("originals/simpleShader.x3dv");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("reference");
meta15->setContent("ShaderTutorialInstantReality.pdf");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("generator");
meta16->setContent("Titania V3.0.3, http://titania.create3000.de");
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
meta19->setName("generator");
meta19->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta19);

Cmeta* meta20 = new Cmeta();
meta20->setName("identifier");
meta20->setContent("https://www.web3d.org/x3d/content/examples/Basic/Shaders/SimpleShader.x3d");
head1->addMeta(*meta20);

Cmeta* meta21 = new Cmeta();
meta21->setName("license");
meta21->setContent("../../license.html");
head1->addMeta(*meta21);

//meta content='under development' name='warning'/
X3D0->setHead(*head1);

CScene* Scene22 = new CScene();
CProtoDeclare ProtoDeclare23 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="myPrototype" ><ProtoInterface><field name="myInputRange" accessType="initializeOnly" type="SFVec3f" value="0.95 0.44 0.22"></field>
</ProtoInterface>
<ProtoBody><Transform DEF="TR"><Shape><Appearance><Material diffuseColor="0.5 0.5 0.9"></Material>
<ComposedShader language="GLSL"><field name="decis" accessType="initializeOnly" type="SFVec3f"></field>
<IS><connect nodeField="decis" protoField="myInputRange"></connect>
</IS>
<ShaderPart type="VERTEX"></ShaderPart>
<ShaderPart type="FRAGMENT"></ShaderPart>
</ComposedShader>
<ComposedShader DEF="Cobweb" language="GLSL"><field name="decis" accessType="initializeOnly" type="SFVec3f" value="0.95 0.77 0.44"></field>
<ShaderPart type="VERTEX"></ShaderPart>
<ShaderPart DEF="_1" type="FRAGMENT"></ShaderPart>
</ComposedShader>
</Appearance>
<Sphere containerField="geometry" radius="1.75"></Sphere>
</Shape>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare23->setName("myPrototype");
CProtoInterface* ProtoInterface24 = new CProtoInterface();
Cfield* field25 = new Cfield();
field25->setName("myInputRange");
field25->setAccessType("initializeOnly");
field25->setType("SFVec3f");
field25->setValue("0.95 0.44 0.22");
ProtoInterface24->addField(*field25);

ProtoDeclare23->setProtoInterface(*ProtoInterface24);

CProtoBody* ProtoBody26 = new CProtoBody();
CTransform* Transform27 = (CTransform *)(m_pScene.createNode("Transform"));
Transform27->setDEF("TR");
CShape* Shape28 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance29 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material30 = (CMaterial *)(m_pScene.createNode("Material"));
Material30->setDiffuseColor(new float[3]{0.5,0.5,0.9});
Appearance29->setMaterial(*Material30);

CComposedShader* ComposedShader31 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader31->setLanguage("GLSL");
Cfield* field32 = new Cfield();
field32->setName("decis");
field32->setAccessType("initializeOnly");
field32->setType("SFVec3f");
ComposedShader31->addField(*field32);

CIS* IS33 = new CIS();
Cconnect* connect34 = new Cconnect();
connect34->setNodeField("decis");
connect34->setProtoField("myInputRange");
IS33->addConnect(*connect34);

ComposedShader31->setIS(*IS33);

CShaderPart* ShaderPart35 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart35->setType("VERTEX");
ComposedShader31->addParts(*ShaderPart35);

CShaderPart* ShaderPart36 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart36->setType("FRAGMENT");
ComposedShader31->addParts(*ShaderPart36);

Appearance29->addShaders(*ComposedShader31);

CComposedShader* ComposedShader37 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader37->setDEF("Cobweb");
ComposedShader37->setLanguage("GLSL");
Cfield* field38 = new Cfield();
field38->setName("decis");
field38->setAccessType("initializeOnly");
field38->setType("SFVec3f");
field38->setValue("0.95 0.77 0.44");
ComposedShader37->addField(*field38);

CShaderPart* ShaderPart39 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart39->setType("VERTEX");
ComposedShader37->addParts(*ShaderPart39);

CShaderPart* ShaderPart40 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart40->setDEF("_1");
ShaderPart40->setType("FRAGMENT");
ComposedShader37->addParts(*ShaderPart40);

Appearance29->addShaders(*ComposedShader37);

Shape28->setAppearance(*Appearance29);

CSphere* Sphere41 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere41->setRadius(1.75);
Shape28->setGeometry(Sphere41);

Transform27->addChildren(*Shape28);

ProtoBody26->addChildren(*Transform27);

ProtoDeclare23->setProtoBody(*ProtoBody26);

group->addChildren(*ProtoDeclare23);

CWorldInfo* WorldInfo42 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo42->setTitle("SimpleShader");
CMetadataSet* MetadataSet43 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet43->setName("Titania");
MetadataSet43->setDEF("Titania");
MetadataSet43->setReference("http://titania.create3000.de");
CMetadataSet* MetadataSet44 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet44->setName("Selection");
MetadataSet44->setDEF("Selection");
MetadataSet44->setReference("http://titania.create3000.de");
CMetadataSet* MetadataSet45 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet45->setName("nodes");
MetadataSet45->setDEF("nodes");
MetadataSet45->setReference("http://titania.create3000.de");
//NULL
MetadataSet44->setValue(*MetadataSet45);

MetadataSet43->setValue(*MetadataSet44);

CMetadataSet* MetadataSet46 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet46->setName("NavigationInfo");
MetadataSet46->setDEF("NavigationInfo");
MetadataSet46->setReference("http://titania.create3000.de");
CMetadataString* MetadataString47 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString47->setName("type");
MetadataString47->setDEF("type");
MetadataString47->setReference("http://titania.create3000.de");
MetadataString47->setValue(new CString[1]{"EXAMINE"}, 1);
MetadataSet46->setValue(*MetadataString47);

MetadataSet43->addValue(*MetadataSet46);

CMetadataSet* MetadataSet48 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet48->setName("Viewpoint");
MetadataSet48->setDEF("Viewpoint");
MetadataSet48->setReference("http://titania.create3000.de");
CMetadataDouble* MetadataDouble49 = (CMetadataDouble *)(m_pScene.createNode("MetadataDouble"));
MetadataDouble49->setName("position");
MetadataDouble49->setDEF("position");
MetadataDouble49->setReference("http://titania.create3000.de");
MetadataDouble49->setValue(new double[3]{6.24067728185014,0.00250837343276661,2.92117542307615});
MetadataSet48->setValue(*MetadataDouble49);

CMetadataDouble* MetadataDouble50 = (CMetadataDouble *)(m_pScene.createNode("MetadataDouble"));
MetadataDouble50->setName("orientation");
MetadataDouble50->setDEF("orientation");
MetadataDouble50->setReference("http://titania.create3000.de");
MetadataDouble50->setValue(new double[4]{-0.110173424710488,0.990158061907379,-0.0863065984000336,1.21146676119191});
MetadataSet48->addValue(*MetadataDouble50);

CMetadataDouble* MetadataDouble51 = (CMetadataDouble *)(m_pScene.createNode("MetadataDouble"));
MetadataDouble51->setName("centerOfRotation");
MetadataDouble51->setDEF("centerOfRotation");
MetadataDouble51->setReference("http://titania.create3000.de");
MetadataDouble51->setValue(new double[3]{-0.808320198626341,-0.358072370409949,0.22817191560906});
MetadataSet48->addValue(*MetadataDouble51);

MetadataSet43->addValue(*MetadataSet48);

WorldInfo42->setMetadata(*MetadataSet43);

group->addChildren(*WorldInfo42);

CProtoInstance* ProtoInstance52 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance52->setName("myPrototype");
group->addChildren(*ProtoInstance52);

X3D0->setScene(*Scene22);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
