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
X3D0->setVersion("3.3");
Chead* head1 = new Chead();
Cmeta* meta2 = new Cmeta();
meta2->setName("title");
meta2->setContent("BoxEm2.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("creator");
meta3->setContent("John Carlson");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("generator");
meta4->setContent("manual");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("identifier");
meta5->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/BoxEm2.x3d");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("description");
meta6->setContent("3 boxes");
head1->addMeta(*meta6);

X3D0->setHead(*head1);

CScene* Scene7 = new CScene();
CNavigationInfo* NavigationInfo8 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo8->setType(new CString[1]{"EXAMINE"}, 1);
group->addChildren(*NavigationInfo8);

CViewpoint* Viewpoint9 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint9->setDescription("Cubes on Fire");
Viewpoint9->setPosition(new float[3]{0,0,12});
group->addChildren(*Viewpoint9);

CProtoDeclare ProtoDeclare10 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="anyShape" ><ProtoInterface><field name="xtranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="myShape" accessType="inputOutput" type="MFNode"><Shape><Sphere></Sphere>
<Appearance containerField="appearance"><Material containerField="material" diffuseColor="1 1 1"></Material>
</Appearance>
</Shape>
</field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="xtranslation"></connect>
<connect nodeField="children" protoField="myShape"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare10->setName("anyShape");
CProtoInterface* ProtoInterface11 = new CProtoInterface();
Cfield* field12 = new Cfield();
field12->setName("xtranslation");
field12->setAccessType("inputOutput");
field12->setType("SFVec3f");
field12->setValue("0 0 0");
ProtoInterface11->addField(*field12);

Cfield* field13 = new Cfield();
field13->setName("myShape");
field13->setAccessType("inputOutput");
field13->setType("MFNode");
CShape* Shape14 = (CShape *)(m_pScene.createNode("Shape"));
CSphere* Sphere15 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape14->setGeometry(Sphere15);

CAppearance* Appearance16 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material17 = (CMaterial *)(m_pScene.createNode("Material"));
Material17->setDiffuseColor(new float[3]{1,1,1});
Appearance16->setMaterial(*Material17);

Shape14->setAppearance(*Appearance16);

field13->addChildren(*Shape14);

ProtoInterface11->addField(*field13);

ProtoDeclare10->setProtoInterface(*ProtoInterface11);

CProtoBody* ProtoBody18 = new CProtoBody();
CTransform* Transform19 = (CTransform *)(m_pScene.createNode("Transform"));
CIS* IS20 = new CIS();
Cconnect* connect21 = new Cconnect();
connect21->setNodeField("translation");
connect21->setProtoField("xtranslation");
IS20->addConnect(*connect21);

Cconnect* connect22 = new Cconnect();
connect22->setNodeField("children");
connect22->setProtoField("myShape");
IS20->addConnect(*connect22);

Transform19->setIS(*IS20);

ProtoBody18->addChildren(*Transform19);

ProtoDeclare10->setProtoBody(*ProtoBody18);

group->addChildren(*ProtoDeclare10);

CProtoDeclare ProtoDeclare23 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="three" ><ProtoInterface><field name="ytranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="myShape" accessType="inputOutput" type="MFNode"><Shape><Cylinder></Cylinder>
<Appearance containerField="appearance"><Material containerField="material" diffuseColor="1 1 1"></Material>
</Appearance>
</Shape>
</field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="ytranslation"></connect>
</IS>
<ProtoInstance name="anyShape"><fieldValue name="xtranslation" value="0 0 0"></fieldValue>
<IS><connect nodeField="myShape" protoField="myShape"></connect>
</IS>
</ProtoInstance>
<ProtoInstance name="anyShape"><fieldValue name="xtranslation" value="2 0 0"></fieldValue>
<IS><connect nodeField="myShape" protoField="myShape"></connect>
</IS>
</ProtoInstance>
<ProtoInstance name="anyShape"><fieldValue name="xtranslation" value="-2 0 0"></fieldValue>
<IS><connect nodeField="myShape" protoField="myShape"></connect>
</IS>
</ProtoInstance>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare23->setName("three");
CProtoInterface* ProtoInterface24 = new CProtoInterface();
Cfield* field25 = new Cfield();
field25->setName("ytranslation");
field25->setAccessType("inputOutput");
field25->setType("SFVec3f");
field25->setValue("0 0 0");
ProtoInterface24->addField(*field25);

Cfield* field26 = new Cfield();
field26->setName("myShape");
field26->setAccessType("inputOutput");
field26->setType("MFNode");
CShape* Shape27 = (CShape *)(m_pScene.createNode("Shape"));
CCylinder* Cylinder28 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Shape27->setGeometry(Cylinder28);

CAppearance* Appearance29 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material30 = (CMaterial *)(m_pScene.createNode("Material"));
Material30->setDiffuseColor(new float[3]{1,1,1});
Appearance29->setMaterial(*Material30);

Shape27->setAppearance(*Appearance29);

field26->addChildren(*Shape27);

ProtoInterface24->addField(*field26);

ProtoDeclare23->setProtoInterface(*ProtoInterface24);

CProtoBody* ProtoBody31 = new CProtoBody();
CTransform* Transform32 = (CTransform *)(m_pScene.createNode("Transform"));
CIS* IS33 = new CIS();
Cconnect* connect34 = new Cconnect();
connect34->setNodeField("translation");
connect34->setProtoField("ytranslation");
IS33->addConnect(*connect34);

Transform32->setIS(*IS33);

CProtoInstance* ProtoInstance35 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance35->setName("anyShape");
CfieldValue* fieldValue36 = new CfieldValue();
fieldValue36->setName("xtranslation");
fieldValue36->setValue("0 0 0");
ProtoInstance35->addFieldValue(*fieldValue36);

CIS* IS37 = new CIS();
Cconnect* connect38 = new Cconnect();
connect38->setNodeField("myShape");
connect38->setProtoField("myShape");
IS37->addConnect(*connect38);

ProtoInstance35->setIS(*IS37);

Transform32->addChildren(*ProtoInstance35);

CProtoInstance* ProtoInstance39 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance39->setName("anyShape");
CfieldValue* fieldValue40 = new CfieldValue();
fieldValue40->setName("xtranslation");
fieldValue40->setValue("2 0 0");
ProtoInstance39->addFieldValue(*fieldValue40);

CIS* IS41 = new CIS();
Cconnect* connect42 = new Cconnect();
connect42->setNodeField("myShape");
connect42->setProtoField("myShape");
IS41->addConnect(*connect42);

ProtoInstance39->setIS(*IS41);

Transform32->addChildren(*ProtoInstance39);

CProtoInstance* ProtoInstance43 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance43->setName("anyShape");
CfieldValue* fieldValue44 = new CfieldValue();
fieldValue44->setName("xtranslation");
fieldValue44->setValue("-2 0 0");
ProtoInstance43->addFieldValue(*fieldValue44);

CIS* IS45 = new CIS();
Cconnect* connect46 = new Cconnect();
connect46->setNodeField("myShape");
connect46->setProtoField("myShape");
IS45->addConnect(*connect46);

ProtoInstance43->setIS(*IS45);

Transform32->addChildren(*ProtoInstance43);

ProtoBody31->addChildren(*Transform32);

ProtoDeclare23->setProtoBody(*ProtoBody31);

group->addChildren(*ProtoDeclare23);

CProtoInstance* ProtoInstance47 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance47->setName("three");
ProtoInstance47->setDEF("threepi");
CfieldValue* fieldValue48 = new CfieldValue();
fieldValue48->setName("ytranslation");
fieldValue48->setValue("0 0 0");
ProtoInstance47->addFieldValue(*fieldValue48);

CfieldValue* fieldValue49 = new CfieldValue();
fieldValue49->setName("myShape");
CShape* Shape50 = (CShape *)(m_pScene.createNode("Shape"));
Shape50->setDEF("box");
CBox* Box51 = (CBox *)(m_pScene.createNode("Box"));
Box51->setSize(new float[3]{1,1,1});
Shape50->setGeometry(Box51);

CAppearance* Appearance52 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material53 = (CMaterial *)(m_pScene.createNode("Material"));
Material53->setDiffuseColor(new float[3]{0,1,0});
Appearance52->setMaterial(*Material53);

Shape50->setAppearance(*Appearance52);

fieldValue49->addChildren(*Shape50);

ProtoInstance47->addFieldValue(*fieldValue49);

group->addChildren(*ProtoInstance47);

CTransform* Transform54 = (CTransform *)(m_pScene.createNode("Transform"));
Transform54->setTranslation(new float[3]{0,2,0});
CShape* Shape55 = (CShape *)(m_pScene.createNode("Shape"));
Shape55->setUSE("box");
Transform54->addChild(*Shape55);

group->addChildren(*Transform54);

X3D0->setScene(*Scene7);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
