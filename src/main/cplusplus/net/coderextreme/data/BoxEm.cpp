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
meta2->setContent("BoxEm.x3d");
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
meta5->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/box.x3d");
head1->addMeta(*meta5);

X3D0->setHead(*head1);

CScene* Scene6 = new CScene();
CProtoDeclare ProtoDeclare7 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="anyShape" ><ProtoInterface><field accessType="inputOutput" type="SFVec3f" name="xtranslation"></field>
<field accessType="inputOutput" type="MFNode" name="myShape"><Shape><Appearance><Material diffuseColor="1 1 1"></Material>
</Appearance>
<Sphere></Sphere>
</Shape>
</field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="xtranslation"></connect>
<connect nodeField="children" protoField="myShape"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare7->setName("anyShape");
CProtoInterface* ProtoInterface8 = new CProtoInterface();
Cfield* field9 = new Cfield();
field9->setAccessType("inputOutput");
field9->setType("SFVec3f");
field9->setName("xtranslation");
ProtoInterface8->addField(*field9);

Cfield* field10 = new Cfield();
field10->setAccessType("inputOutput");
field10->setType("MFNode");
field10->setName("myShape");
CShape* Shape11 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance12 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material13 = (CMaterial *)(m_pScene.createNode("Material"));
Material13->setDiffuseColor(new float[3]{1,1,1});
Appearance12->setMaterial(*Material13);

Shape11->setAppearance(*Appearance12);

CSphere* Sphere14 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape11->setGeometry(Sphere14);

field10->addChildren(*Shape11);

ProtoInterface8->addField(*field10);

ProtoDeclare7->setProtoInterface(*ProtoInterface8);

CProtoBody* ProtoBody15 = new CProtoBody();
CTransform* Transform16 = (CTransform *)(m_pScene.createNode("Transform"));
CIS* IS17 = new CIS();
Cconnect* connect18 = new Cconnect();
connect18->setNodeField("translation");
connect18->setProtoField("xtranslation");
IS17->addConnect(*connect18);

Cconnect* connect19 = new Cconnect();
connect19->setNodeField("children");
connect19->setProtoField("myShape");
IS17->addConnect(*connect19);

Transform16->setIS(*IS17);

ProtoBody15->addChildren(*Transform16);

ProtoDeclare7->setProtoBody(*ProtoBody15);

group->addChildren(*ProtoDeclare7);

CProtoDeclare ProtoDeclare20 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="three" ><ProtoInterface><field accessType="inputOutput" type="SFVec3f" name="ytranslation"></field>
<field accessType="inputOutput" type="MFNode" name="myShape"><Shape DEF="_1"><Appearance><Material diffuseColor="1 1 1"></Material>
</Appearance>
<Cylinder></Cylinder>
</Shape>
</field>
</ProtoInterface>
<ProtoBody><Transform><ProtoInstance name="anyShape"><IS><connect nodeField="myShape" protoField="myShape"></connect>
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
<IS><connect nodeField="translation" protoField="ytranslation"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare20->setName("three");
CProtoInterface* ProtoInterface21 = new CProtoInterface();
Cfield* field22 = new Cfield();
field22->setAccessType("inputOutput");
field22->setType("SFVec3f");
field22->setName("ytranslation");
ProtoInterface21->addField(*field22);

Cfield* field23 = new Cfield();
field23->setAccessType("inputOutput");
field23->setType("MFNode");
field23->setName("myShape");
CShape* Shape24 = (CShape *)(m_pScene.createNode("Shape"));
Shape24->setDEF("_1");
CAppearance* Appearance25 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material26 = (CMaterial *)(m_pScene.createNode("Material"));
Material26->setDiffuseColor(new float[3]{1,1,1});
Appearance25->setMaterial(*Material26);

Shape24->setAppearance(*Appearance25);

CCylinder* Cylinder27 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Shape24->setGeometry(Cylinder27);

field23->addChildren(*Shape24);

ProtoInterface21->addField(*field23);

ProtoDeclare20->setProtoInterface(*ProtoInterface21);

CProtoBody* ProtoBody28 = new CProtoBody();
CTransform* Transform29 = (CTransform *)(m_pScene.createNode("Transform"));
CProtoInstance* ProtoInstance30 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance30->setName("anyShape");
CIS* IS31 = new CIS();
Cconnect* connect32 = new Cconnect();
connect32->setNodeField("myShape");
connect32->setProtoField("myShape");
IS31->addConnect(*connect32);

ProtoInstance30->setIS(*IS31);

Transform29->addChildren(*ProtoInstance30);

CProtoInstance* ProtoInstance33 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance33->setName("anyShape");
CfieldValue* fieldValue34 = new CfieldValue();
fieldValue34->setName("xtranslation");
fieldValue34->setValue("2 0 0");
ProtoInstance33->addFieldValue(*fieldValue34);

CIS* IS35 = new CIS();
Cconnect* connect36 = new Cconnect();
connect36->setNodeField("myShape");
connect36->setProtoField("myShape");
IS35->addConnect(*connect36);

ProtoInstance33->setIS(*IS35);

Transform29->addChildren(*ProtoInstance33);

CProtoInstance* ProtoInstance37 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance37->setName("anyShape");
CfieldValue* fieldValue38 = new CfieldValue();
fieldValue38->setName("xtranslation");
fieldValue38->setValue("-2 0 0");
ProtoInstance37->addFieldValue(*fieldValue38);

CIS* IS39 = new CIS();
Cconnect* connect40 = new Cconnect();
connect40->setNodeField("myShape");
connect40->setProtoField("myShape");
IS39->addConnect(*connect40);

ProtoInstance37->setIS(*IS39);

Transform29->addChildren(*ProtoInstance37);

CIS* IS41 = new CIS();
Cconnect* connect42 = new Cconnect();
connect42->setNodeField("translation");
connect42->setProtoField("ytranslation");
IS41->addConnect(*connect42);

Transform29->setIS(*IS41);

ProtoBody28->addChildren(*Transform29);

ProtoDeclare20->setProtoBody(*ProtoBody28);

group->addChildren(*ProtoDeclare20);

CNavigationInfo* NavigationInfo43 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo43->setType(new CString[1]{"EXAMINE"}, 1);
group->addChildren(*NavigationInfo43);

CViewpoint* Viewpoint44 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint44->setDescription("Cubes on Fire");
Viewpoint44->setPosition(new float[3]{0,0,12});
group->addChildren(*Viewpoint44);

CProtoInstance* ProtoInstance45 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance45->setDEF("threepi");
ProtoInstance45->setName("three");
CfieldValue* fieldValue46 = new CfieldValue();
fieldValue46->setName("myShape");
CShape* Shape47 = (CShape *)(m_pScene.createNode("Shape"));
Shape47->setDEF("box");
CAppearance* Appearance48 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material49 = (CMaterial *)(m_pScene.createNode("Material"));
Material49->setDiffuseColor(new float[3]{0,1,0});
Appearance48->setMaterial(*Material49);

Shape47->setAppearance(*Appearance48);

CBox* Box50 = (CBox *)(m_pScene.createNode("Box"));
Box50->setSize(new float[3]{1,1,1});
Shape47->setGeometry(Box50);

fieldValue46->addChildren(*Shape47);

ProtoInstance45->addFieldValue(*fieldValue46);

group->addChildren(*ProtoInstance45);

CTransform* Transform51 = (CTransform *)(m_pScene.createNode("Transform"));
Transform51->setTranslation(new float[3]{0,2,0});
CShape* Shape52 = (CShape *)(m_pScene.createNode("Shape"));
Shape52->setUSE("box");
Transform51->addChild(*Shape52);

group->addChildren(*Transform51);

X3D0->setScene(*Scene6);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
