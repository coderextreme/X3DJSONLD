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
meta2->setContent("rubik.x3d");
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
meta5->setContent("https://coderextreme.net/X3DJSONLD/rubik.x3d");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("description");
meta6->setContent("a kind of rubik cube with spheres");
head1->addMeta(*meta6);

X3D0->setHead(*head1);

CScene* Scene7 = new CScene();
CNavigationInfo* NavigationInfo8 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo8->setType(new CString[1]{"EXAMINE"}, 1);
group->addChildren(*NavigationInfo8);

CViewpoint* Viewpoint9 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint9->setDescription("Rubiks Cube");
Viewpoint9->setPosition(new float[3]{0,0,12});
group->addChildren(*Viewpoint9);

CProtoDeclare ProtoDeclare10 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="sphereproto" ><ProtoInterface><field name="xtranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="xtranslation"></connect>
</IS>
<Shape><Sphere containerField="geometry"></Sphere>
<Appearance><Material diffuseColor="1 1 1"></Material>
</Appearance>
</Shape>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare10->setName("sphereproto");
CProtoInterface* ProtoInterface11 = new CProtoInterface();
Cfield* field12 = new Cfield();
field12->setName("xtranslation");
field12->setAccessType("inputOutput");
field12->setType("SFVec3f");
field12->setValue("0 0 0");
ProtoInterface11->addField(*field12);

ProtoDeclare10->setProtoInterface(*ProtoInterface11);

CProtoBody* ProtoBody13 = new CProtoBody();
CTransform* Transform14 = (CTransform *)(m_pScene.createNode("Transform"));
CIS* IS15 = new CIS();
Cconnect* connect16 = new Cconnect();
connect16->setNodeField("translation");
connect16->setProtoField("xtranslation");
IS15->addConnect(*connect16);

Transform14->setIS(*IS15);

CShape* Shape17 = (CShape *)(m_pScene.createNode("Shape"));
CSphere* Sphere18 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape17->setGeometry(Sphere18);

CAppearance* Appearance19 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material20 = (CMaterial *)(m_pScene.createNode("Material"));
Material20->setDiffuseColor(new float[3]{1,1,1});
Appearance19->setMaterial(*Material20);

Shape17->setAppearance(*Appearance19);

Transform14->addChildren(*Shape17);

ProtoBody13->addChildren(*Transform14);

ProtoDeclare10->setProtoBody(*ProtoBody13);

group->addChildren(*ProtoDeclare10);

CProtoDeclare ProtoDeclare21 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="three" ><ProtoInterface><field name="ytranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="ytranslation"></connect>
</IS>
<ProtoInstance name="sphereproto"><fieldValue name="xtranslation" value="0 0 0"></fieldValue>
</ProtoInstance>
<ProtoInstance name="sphereproto"><fieldValue name="xtranslation" value="2 0 0"></fieldValue>
</ProtoInstance>
<ProtoInstance name="sphereproto"><fieldValue name="xtranslation" value="-2 0 0"></fieldValue>
</ProtoInstance>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare21->setName("three");
CProtoInterface* ProtoInterface22 = new CProtoInterface();
Cfield* field23 = new Cfield();
field23->setName("ytranslation");
field23->setAccessType("inputOutput");
field23->setType("SFVec3f");
field23->setValue("0 0 0");
ProtoInterface22->addField(*field23);

ProtoDeclare21->setProtoInterface(*ProtoInterface22);

CProtoBody* ProtoBody24 = new CProtoBody();
CTransform* Transform25 = (CTransform *)(m_pScene.createNode("Transform"));
CIS* IS26 = new CIS();
Cconnect* connect27 = new Cconnect();
connect27->setNodeField("translation");
connect27->setProtoField("ytranslation");
IS26->addConnect(*connect27);

Transform25->setIS(*IS26);

CProtoInstance* ProtoInstance28 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance28->setName("sphereproto");
CfieldValue* fieldValue29 = new CfieldValue();
fieldValue29->setName("xtranslation");
fieldValue29->setValue("0 0 0");
ProtoInstance28->addFieldValue(*fieldValue29);

Transform25->addChildren(*ProtoInstance28);

CProtoInstance* ProtoInstance30 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance30->setName("sphereproto");
CfieldValue* fieldValue31 = new CfieldValue();
fieldValue31->setName("xtranslation");
fieldValue31->setValue("2 0 0");
ProtoInstance30->addFieldValue(*fieldValue31);

Transform25->addChildren(*ProtoInstance30);

CProtoInstance* ProtoInstance32 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance32->setName("sphereproto");
CfieldValue* fieldValue33 = new CfieldValue();
fieldValue33->setName("xtranslation");
fieldValue33->setValue("-2 0 0");
ProtoInstance32->addFieldValue(*fieldValue33);

Transform25->addChildren(*ProtoInstance32);

ProtoBody24->addChildren(*Transform25);

ProtoDeclare21->setProtoBody(*ProtoBody24);

group->addChildren(*ProtoDeclare21);

CProtoDeclare ProtoDeclare34 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="nine" ><ProtoInterface><field name="ztranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="ztranslation"></connect>
</IS>
<ProtoInstance name="three"><fieldValue name="ytranslation" value="0 0 0"></fieldValue>
</ProtoInstance>
<ProtoInstance name="three"><fieldValue name="ytranslation" value="0 2 0"></fieldValue>
</ProtoInstance>
<ProtoInstance name="three"><fieldValue name="ytranslation" value="0 -2 0"></fieldValue>
</ProtoInstance>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare34->setName("nine");
CProtoInterface* ProtoInterface35 = new CProtoInterface();
Cfield* field36 = new Cfield();
field36->setName("ztranslation");
field36->setAccessType("inputOutput");
field36->setType("SFVec3f");
field36->setValue("0 0 0");
ProtoInterface35->addField(*field36);

ProtoDeclare34->setProtoInterface(*ProtoInterface35);

CProtoBody* ProtoBody37 = new CProtoBody();
CTransform* Transform38 = (CTransform *)(m_pScene.createNode("Transform"));
CIS* IS39 = new CIS();
Cconnect* connect40 = new Cconnect();
connect40->setNodeField("translation");
connect40->setProtoField("ztranslation");
IS39->addConnect(*connect40);

Transform38->setIS(*IS39);

CProtoInstance* ProtoInstance41 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance41->setName("three");
CfieldValue* fieldValue42 = new CfieldValue();
fieldValue42->setName("ytranslation");
fieldValue42->setValue("0 0 0");
ProtoInstance41->addFieldValue(*fieldValue42);

Transform38->addChildren(*ProtoInstance41);

CProtoInstance* ProtoInstance43 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance43->setName("three");
CfieldValue* fieldValue44 = new CfieldValue();
fieldValue44->setName("ytranslation");
fieldValue44->setValue("0 2 0");
ProtoInstance43->addFieldValue(*fieldValue44);

Transform38->addChildren(*ProtoInstance43);

CProtoInstance* ProtoInstance45 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance45->setName("three");
CfieldValue* fieldValue46 = new CfieldValue();
fieldValue46->setName("ytranslation");
fieldValue46->setValue("0 -2 0");
ProtoInstance45->addFieldValue(*fieldValue46);

Transform38->addChildren(*ProtoInstance45);

ProtoBody37->addChildren(*Transform38);

ProtoDeclare34->setProtoBody(*ProtoBody37);

group->addChildren(*ProtoDeclare34);

CProtoDeclare ProtoDeclare47 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="twentyseven" ><ProtoInterface><field name="ttranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="ttranslation"></connect>
</IS>
<ProtoInstance name="nine"><fieldValue name="ztranslation" value="0 0 0"></fieldValue>
</ProtoInstance>
<ProtoInstance name="nine"><fieldValue name="ztranslation" value="0 0 2"></fieldValue>
</ProtoInstance>
<ProtoInstance name="nine"><fieldValue name="ztranslation" value="0 0 -2"></fieldValue>
</ProtoInstance>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare47->setName("twentyseven");
CProtoInterface* ProtoInterface48 = new CProtoInterface();
Cfield* field49 = new Cfield();
field49->setName("ttranslation");
field49->setAccessType("inputOutput");
field49->setType("SFVec3f");
field49->setValue("0 0 0");
ProtoInterface48->addField(*field49);

ProtoDeclare47->setProtoInterface(*ProtoInterface48);

CProtoBody* ProtoBody50 = new CProtoBody();
CTransform* Transform51 = (CTransform *)(m_pScene.createNode("Transform"));
CIS* IS52 = new CIS();
Cconnect* connect53 = new Cconnect();
connect53->setNodeField("translation");
connect53->setProtoField("ttranslation");
IS52->addConnect(*connect53);

Transform51->setIS(*IS52);

CProtoInstance* ProtoInstance54 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance54->setName("nine");
CfieldValue* fieldValue55 = new CfieldValue();
fieldValue55->setName("ztranslation");
fieldValue55->setValue("0 0 0");
ProtoInstance54->addFieldValue(*fieldValue55);

Transform51->addChildren(*ProtoInstance54);

CProtoInstance* ProtoInstance56 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance56->setName("nine");
CfieldValue* fieldValue57 = new CfieldValue();
fieldValue57->setName("ztranslation");
fieldValue57->setValue("0 0 2");
ProtoInstance56->addFieldValue(*fieldValue57);

Transform51->addChildren(*ProtoInstance56);

CProtoInstance* ProtoInstance58 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance58->setName("nine");
CfieldValue* fieldValue59 = new CfieldValue();
fieldValue59->setName("ztranslation");
fieldValue59->setValue("0 0 -2");
ProtoInstance58->addFieldValue(*fieldValue59);

Transform51->addChildren(*ProtoInstance58);

ProtoBody50->addChildren(*Transform51);

ProtoDeclare47->setProtoBody(*ProtoBody50);

group->addChildren(*ProtoDeclare47);

CProtoInstance* ProtoInstance60 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance60->setName("twentyseven");
CfieldValue* fieldValue61 = new CfieldValue();
fieldValue61->setName("ttranslation");
fieldValue61->setValue("0 0 0");
ProtoInstance60->addFieldValue(*fieldValue61);

group->addChildren(*ProtoInstance60);

X3D0->setScene(*Scene7);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
