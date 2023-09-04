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
meta2->setContent("ThreeDTexture.x3d");
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
meta5->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/ThreeDTexture.x3d");
head1->addMeta(*meta5);

X3D0->setHead(*head1);

CScene* Scene6 = new CScene();
CProtoDeclare ProtoDeclare7 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="sphereproto" ><ProtoInterface><field accessType="inputOutput" type="SFVec3f" name="xtranslation"></field>
</ProtoInterface>
<ProtoBody><Transform><Shape><Appearance><Material diffuseColor="1 1 1"></Material>
</Appearance>
<Sphere></Sphere>
</Shape>
<IS><connect nodeField="translation" protoField="xtranslation"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare7->setName("sphereproto");
CProtoInterface* ProtoInterface8 = new CProtoInterface();
Cfield* field9 = new Cfield();
field9->setAccessType("inputOutput");
field9->setType("SFVec3f");
field9->setName("xtranslation");
ProtoInterface8->addField(*field9);

ProtoDeclare7->setProtoInterface(*ProtoInterface8);

CProtoBody* ProtoBody10 = new CProtoBody();
CTransform* Transform11 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape12 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance13 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material14 = (CMaterial *)(m_pScene.createNode("Material"));
Material14->setDiffuseColor(new float[3]{1,1,1});
Appearance13->setMaterial(*Material14);

Shape12->setAppearance(*Appearance13);

CSphere* Sphere15 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape12->setGeometry(Sphere15);

Transform11->addChild(*Shape12);

CIS* IS16 = new CIS();
Cconnect* connect17 = new Cconnect();
connect17->setNodeField("translation");
connect17->setProtoField("xtranslation");
IS16->addConnect(*connect17);

Transform11->setIS(*IS16);

ProtoBody10->addChildren(*Transform11);

ProtoDeclare7->setProtoBody(*ProtoBody10);

group->addChildren(*ProtoDeclare7);

CProtoDeclare ProtoDeclare18 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="three" ><ProtoInterface><field accessType="inputOutput" type="SFVec3f" name="ytranslation"></field>
</ProtoInterface>
<ProtoBody><Transform><ProtoInstance name="sphereproto"></ProtoInstance>
<ProtoInstance name="sphereproto"><fieldValue name="xtranslation" value="2 0 0"></fieldValue>
</ProtoInstance>
<ProtoInstance name="sphereproto"><fieldValue name="xtranslation" value="-2 0 0"></fieldValue>
</ProtoInstance>
<IS><connect nodeField="translation" protoField="ytranslation"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare18->setName("three");
CProtoInterface* ProtoInterface19 = new CProtoInterface();
Cfield* field20 = new Cfield();
field20->setAccessType("inputOutput");
field20->setType("SFVec3f");
field20->setName("ytranslation");
ProtoInterface19->addField(*field20);

ProtoDeclare18->setProtoInterface(*ProtoInterface19);

CProtoBody* ProtoBody21 = new CProtoBody();
CTransform* Transform22 = (CTransform *)(m_pScene.createNode("Transform"));
CProtoInstance* ProtoInstance23 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance23->setName("sphereproto");
Transform22->addChildren(*ProtoInstance23);

CProtoInstance* ProtoInstance24 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance24->setName("sphereproto");
CfieldValue* fieldValue25 = new CfieldValue();
fieldValue25->setName("xtranslation");
fieldValue25->setValue("2 0 0");
ProtoInstance24->addFieldValue(*fieldValue25);

Transform22->addChildren(*ProtoInstance24);

CProtoInstance* ProtoInstance26 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance26->setName("sphereproto");
CfieldValue* fieldValue27 = new CfieldValue();
fieldValue27->setName("xtranslation");
fieldValue27->setValue("-2 0 0");
ProtoInstance26->addFieldValue(*fieldValue27);

Transform22->addChildren(*ProtoInstance26);

CIS* IS28 = new CIS();
Cconnect* connect29 = new Cconnect();
connect29->setNodeField("translation");
connect29->setProtoField("ytranslation");
IS28->addConnect(*connect29);

Transform22->setIS(*IS28);

ProtoBody21->addChildren(*Transform22);

ProtoDeclare18->setProtoBody(*ProtoBody21);

group->addChildren(*ProtoDeclare18);

CProtoDeclare ProtoDeclare30 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="nine" ><ProtoInterface><field accessType="inputOutput" type="SFVec3f" name="ztranslation"></field>
</ProtoInterface>
<ProtoBody><Transform><ProtoInstance name="three"></ProtoInstance>
<ProtoInstance name="three"><fieldValue name="ytranslation" value="0 2 0"></fieldValue>
</ProtoInstance>
<ProtoInstance name="three"><fieldValue name="ytranslation" value="0 -2 0"></fieldValue>
</ProtoInstance>
<IS><connect nodeField="translation" protoField="ztranslation"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare30->setName("nine");
CProtoInterface* ProtoInterface31 = new CProtoInterface();
Cfield* field32 = new Cfield();
field32->setAccessType("inputOutput");
field32->setType("SFVec3f");
field32->setName("ztranslation");
ProtoInterface31->addField(*field32);

ProtoDeclare30->setProtoInterface(*ProtoInterface31);

CProtoBody* ProtoBody33 = new CProtoBody();
CTransform* Transform34 = (CTransform *)(m_pScene.createNode("Transform"));
CProtoInstance* ProtoInstance35 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance35->setName("three");
Transform34->addChildren(*ProtoInstance35);

CProtoInstance* ProtoInstance36 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance36->setName("three");
CfieldValue* fieldValue37 = new CfieldValue();
fieldValue37->setName("ytranslation");
fieldValue37->setValue("0 2 0");
ProtoInstance36->addFieldValue(*fieldValue37);

Transform34->addChildren(*ProtoInstance36);

CProtoInstance* ProtoInstance38 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance38->setName("three");
CfieldValue* fieldValue39 = new CfieldValue();
fieldValue39->setName("ytranslation");
fieldValue39->setValue("0 -2 0");
ProtoInstance38->addFieldValue(*fieldValue39);

Transform34->addChildren(*ProtoInstance38);

CIS* IS40 = new CIS();
Cconnect* connect41 = new Cconnect();
connect41->setNodeField("translation");
connect41->setProtoField("ztranslation");
IS40->addConnect(*connect41);

Transform34->setIS(*IS40);

ProtoBody33->addChildren(*Transform34);

ProtoDeclare30->setProtoBody(*ProtoBody33);

group->addChildren(*ProtoDeclare30);

CProtoDeclare ProtoDeclare42 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="twentyseven" ><ProtoInterface><field accessType="inputOutput" type="SFVec3f" name="ttranslation"></field>
</ProtoInterface>
<ProtoBody><Transform><ProtoInstance name="nine"></ProtoInstance>
<ProtoInstance name="nine"><fieldValue name="ztranslation" value="0 0 2"></fieldValue>
</ProtoInstance>
<ProtoInstance name="nine"><fieldValue name="ztranslation" value="0 0 -2"></fieldValue>
</ProtoInstance>
<IS><connect nodeField="translation" protoField="ttranslation"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare42->setName("twentyseven");
CProtoInterface* ProtoInterface43 = new CProtoInterface();
Cfield* field44 = new Cfield();
field44->setAccessType("inputOutput");
field44->setType("SFVec3f");
field44->setName("ttranslation");
ProtoInterface43->addField(*field44);

ProtoDeclare42->setProtoInterface(*ProtoInterface43);

CProtoBody* ProtoBody45 = new CProtoBody();
CTransform* Transform46 = (CTransform *)(m_pScene.createNode("Transform"));
CProtoInstance* ProtoInstance47 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance47->setName("nine");
Transform46->addChildren(*ProtoInstance47);

CProtoInstance* ProtoInstance48 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance48->setName("nine");
CfieldValue* fieldValue49 = new CfieldValue();
fieldValue49->setName("ztranslation");
fieldValue49->setValue("0 0 2");
ProtoInstance48->addFieldValue(*fieldValue49);

Transform46->addChildren(*ProtoInstance48);

CProtoInstance* ProtoInstance50 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance50->setName("nine");
CfieldValue* fieldValue51 = new CfieldValue();
fieldValue51->setName("ztranslation");
fieldValue51->setValue("0 0 -2");
ProtoInstance50->addFieldValue(*fieldValue51);

Transform46->addChildren(*ProtoInstance50);

CIS* IS52 = new CIS();
Cconnect* connect53 = new Cconnect();
connect53->setNodeField("translation");
connect53->setProtoField("ttranslation");
IS52->addConnect(*connect53);

Transform46->setIS(*IS52);

ProtoBody45->addChildren(*Transform46);

ProtoDeclare42->setProtoBody(*ProtoBody45);

group->addChildren(*ProtoDeclare42);

CNavigationInfo* NavigationInfo54 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo54->setType(new CString[1]{"EXAMINE"}, 1);
group->addChildren(*NavigationInfo54);

CViewpoint* Viewpoint55 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint55->setDescription("Rubiks Cube");
Viewpoint55->setPosition(new float[3]{0,0,12});
group->addChildren(*Viewpoint55);

CProtoInstance* ProtoInstance56 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance56->setName("twentyseven");
group->addChildren(*ProtoInstance56);

X3D0->setScene(*Scene6);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
