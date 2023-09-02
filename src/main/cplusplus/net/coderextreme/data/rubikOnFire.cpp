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
meta2->setContent("rubikOnFire.x3d");
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
meta5->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/rubikOnFire.x3d");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("description");
meta6->setContent("a white rubik cube");
head1->addMeta(*meta6);

X3D0->setHead(*head1);

CScene* Scene7 = new CScene();
CNavigationInfo* NavigationInfo8 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo8->setType(new CString[1]{"EXAMINE"}, 1);
group->addChildren(*NavigationInfo8);

CViewpoint* Viewpoint9 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint9->setDescription("Rubiks Cube on Fire");
Viewpoint9->setPosition(new float[3]{0,0,12});
group->addChildren(*Viewpoint9);

CProtoDeclare ProtoDeclare10 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="anyShape" ><ProtoInterface><field name="xtranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="myShape" accessType="inputOutput" type="SFNode"><Sphere></Sphere>
</field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="xtranslation"></connect>
</IS>
<Shape><IS><connect nodeField="geometry" protoField="myShape"></connect>
</IS>
<Appearance><Material diffuseColor="1 1 1"></Material>
</Appearance>
</Shape>
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
field13->setType("SFNode");
CSphere* Sphere14 = (CSphere *)(m_pScene.createNode("Sphere"));
field13->addChildren(*Sphere14);

ProtoInterface11->addField(*field13);

ProtoDeclare10->setProtoInterface(*ProtoInterface11);

CProtoBody* ProtoBody15 = new CProtoBody();
CTransform* Transform16 = (CTransform *)(m_pScene.createNode("Transform"));
CIS* IS17 = new CIS();
Cconnect* connect18 = new Cconnect();
connect18->setNodeField("translation");
connect18->setProtoField("xtranslation");
IS17->addConnect(*connect18);

Transform16->setIS(*IS17);

CShape* Shape19 = (CShape *)(m_pScene.createNode("Shape"));
CIS* IS20 = new CIS();
Cconnect* connect21 = new Cconnect();
connect21->setNodeField("geometry");
connect21->setProtoField("myShape");
IS20->addConnect(*connect21);

Shape19->setIS(*IS20);

CAppearance* Appearance22 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material23 = (CMaterial *)(m_pScene.createNode("Material"));
Material23->setDiffuseColor(new float[3]{1,1,1});
Appearance22->setMaterial(*Material23);

Shape19->setAppearance(*Appearance22);

Transform16->addChild(*Shape19);

ProtoBody15->addChildren(*Transform16);

ProtoDeclare10->setProtoBody(*ProtoBody15);

group->addChildren(*ProtoDeclare10);

CProtoDeclare ProtoDeclare24 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="three" ><ProtoInterface><field name="ytranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="myShape" accessType="inputOutput" type="SFNode"><Sphere></Sphere>
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
ProtoDeclare24->setName("three");
CProtoInterface* ProtoInterface25 = new CProtoInterface();
Cfield* field26 = new Cfield();
field26->setName("ytranslation");
field26->setAccessType("inputOutput");
field26->setType("SFVec3f");
field26->setValue("0 0 0");
ProtoInterface25->addField(*field26);

Cfield* field27 = new Cfield();
field27->setName("myShape");
field27->setAccessType("inputOutput");
field27->setType("SFNode");
CSphere* Sphere28 = (CSphere *)(m_pScene.createNode("Sphere"));
field27->addChildren(*Sphere28);

ProtoInterface25->addField(*field27);

ProtoDeclare24->setProtoInterface(*ProtoInterface25);

CProtoBody* ProtoBody29 = new CProtoBody();
CTransform* Transform30 = (CTransform *)(m_pScene.createNode("Transform"));
CIS* IS31 = new CIS();
Cconnect* connect32 = new Cconnect();
connect32->setNodeField("translation");
connect32->setProtoField("ytranslation");
IS31->addConnect(*connect32);

Transform30->setIS(*IS31);

CProtoInstance* ProtoInstance33 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance33->setName("anyShape");
CfieldValue* fieldValue34 = new CfieldValue();
fieldValue34->setName("xtranslation");
fieldValue34->setValue("0 0 0");
ProtoInstance33->addFieldValue(*fieldValue34);

CIS* IS35 = new CIS();
Cconnect* connect36 = new Cconnect();
connect36->setNodeField("myShape");
connect36->setProtoField("myShape");
IS35->addConnect(*connect36);

ProtoInstance33->setIS(*IS35);

Transform30->addChildren(*ProtoInstance33);

CProtoInstance* ProtoInstance37 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance37->setName("anyShape");
CfieldValue* fieldValue38 = new CfieldValue();
fieldValue38->setName("xtranslation");
fieldValue38->setValue("2 0 0");
ProtoInstance37->addFieldValue(*fieldValue38);

CIS* IS39 = new CIS();
Cconnect* connect40 = new Cconnect();
connect40->setNodeField("myShape");
connect40->setProtoField("myShape");
IS39->addConnect(*connect40);

ProtoInstance37->setIS(*IS39);

Transform30->addChildren(*ProtoInstance37);

CProtoInstance* ProtoInstance41 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance41->setName("anyShape");
CfieldValue* fieldValue42 = new CfieldValue();
fieldValue42->setName("xtranslation");
fieldValue42->setValue("-2 0 0");
ProtoInstance41->addFieldValue(*fieldValue42);

CIS* IS43 = new CIS();
Cconnect* connect44 = new Cconnect();
connect44->setNodeField("myShape");
connect44->setProtoField("myShape");
IS43->addConnect(*connect44);

ProtoInstance41->setIS(*IS43);

Transform30->addChildren(*ProtoInstance41);

ProtoBody29->addChildren(*Transform30);

ProtoDeclare24->setProtoBody(*ProtoBody29);

group->addChildren(*ProtoDeclare24);

CProtoDeclare ProtoDeclare45 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="nine" ><ProtoInterface><field name="ztranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="myShape" accessType="inputOutput" type="SFNode"><Sphere></Sphere>
</field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="ztranslation"></connect>
</IS>
<ProtoInstance name="three"><fieldValue name="ytranslation" value="0 0 0"></fieldValue>
<IS><connect nodeField="myShape" protoField="myShape"></connect>
</IS>
</ProtoInstance>
<ProtoInstance name="three"><fieldValue name="ytranslation" value="0 2 0"></fieldValue>
<IS><connect nodeField="myShape" protoField="myShape"></connect>
</IS>
</ProtoInstance>
<ProtoInstance name="three"><fieldValue name="ytranslation" value="0 -2 0"></fieldValue>
<IS><connect nodeField="myShape" protoField="myShape"></connect>
</IS>
</ProtoInstance>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare45->setName("nine");
CProtoInterface* ProtoInterface46 = new CProtoInterface();
Cfield* field47 = new Cfield();
field47->setName("ztranslation");
field47->setAccessType("inputOutput");
field47->setType("SFVec3f");
field47->setValue("0 0 0");
ProtoInterface46->addField(*field47);

Cfield* field48 = new Cfield();
field48->setName("myShape");
field48->setAccessType("inputOutput");
field48->setType("SFNode");
CSphere* Sphere49 = (CSphere *)(m_pScene.createNode("Sphere"));
field48->addChildren(*Sphere49);

ProtoInterface46->addField(*field48);

ProtoDeclare45->setProtoInterface(*ProtoInterface46);

CProtoBody* ProtoBody50 = new CProtoBody();
CTransform* Transform51 = (CTransform *)(m_pScene.createNode("Transform"));
CIS* IS52 = new CIS();
Cconnect* connect53 = new Cconnect();
connect53->setNodeField("translation");
connect53->setProtoField("ztranslation");
IS52->addConnect(*connect53);

Transform51->setIS(*IS52);

CProtoInstance* ProtoInstance54 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance54->setName("three");
CfieldValue* fieldValue55 = new CfieldValue();
fieldValue55->setName("ytranslation");
fieldValue55->setValue("0 0 0");
ProtoInstance54->addFieldValue(*fieldValue55);

CIS* IS56 = new CIS();
Cconnect* connect57 = new Cconnect();
connect57->setNodeField("myShape");
connect57->setProtoField("myShape");
IS56->addConnect(*connect57);

ProtoInstance54->setIS(*IS56);

Transform51->addChildren(*ProtoInstance54);

CProtoInstance* ProtoInstance58 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance58->setName("three");
CfieldValue* fieldValue59 = new CfieldValue();
fieldValue59->setName("ytranslation");
fieldValue59->setValue("0 2 0");
ProtoInstance58->addFieldValue(*fieldValue59);

CIS* IS60 = new CIS();
Cconnect* connect61 = new Cconnect();
connect61->setNodeField("myShape");
connect61->setProtoField("myShape");
IS60->addConnect(*connect61);

ProtoInstance58->setIS(*IS60);

Transform51->addChildren(*ProtoInstance58);

CProtoInstance* ProtoInstance62 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance62->setName("three");
CfieldValue* fieldValue63 = new CfieldValue();
fieldValue63->setName("ytranslation");
fieldValue63->setValue("0 -2 0");
ProtoInstance62->addFieldValue(*fieldValue63);

CIS* IS64 = new CIS();
Cconnect* connect65 = new Cconnect();
connect65->setNodeField("myShape");
connect65->setProtoField("myShape");
IS64->addConnect(*connect65);

ProtoInstance62->setIS(*IS64);

Transform51->addChildren(*ProtoInstance62);

ProtoBody50->addChildren(*Transform51);

ProtoDeclare45->setProtoBody(*ProtoBody50);

group->addChildren(*ProtoDeclare45);

CProtoDeclare ProtoDeclare66 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="twentyseven" ><ProtoInterface><field name="ttranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="myShape" accessType="inputOutput" type="SFNode"><Sphere></Sphere>
</field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="ttranslation"></connect>
</IS>
<ProtoInstance name="nine"><fieldValue name="ztranslation" value="0 0 0"></fieldValue>
<IS><connect nodeField="myShape" protoField="myShape"></connect>
</IS>
</ProtoInstance>
<ProtoInstance name="nine"><fieldValue name="ztranslation" value="0 0 2"></fieldValue>
<IS><connect nodeField="myShape" protoField="myShape"></connect>
</IS>
</ProtoInstance>
<ProtoInstance name="nine"><fieldValue name="ztranslation" value="0 0 -2"></fieldValue>
<IS><connect nodeField="myShape" protoField="myShape"></connect>
</IS>
</ProtoInstance>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare66->setName("twentyseven");
CProtoInterface* ProtoInterface67 = new CProtoInterface();
Cfield* field68 = new Cfield();
field68->setName("ttranslation");
field68->setAccessType("inputOutput");
field68->setType("SFVec3f");
field68->setValue("0 0 0");
ProtoInterface67->addField(*field68);

Cfield* field69 = new Cfield();
field69->setName("myShape");
field69->setAccessType("inputOutput");
field69->setType("SFNode");
CSphere* Sphere70 = (CSphere *)(m_pScene.createNode("Sphere"));
field69->addChildren(*Sphere70);

ProtoInterface67->addField(*field69);

ProtoDeclare66->setProtoInterface(*ProtoInterface67);

CProtoBody* ProtoBody71 = new CProtoBody();
CTransform* Transform72 = (CTransform *)(m_pScene.createNode("Transform"));
CIS* IS73 = new CIS();
Cconnect* connect74 = new Cconnect();
connect74->setNodeField("translation");
connect74->setProtoField("ttranslation");
IS73->addConnect(*connect74);

Transform72->setIS(*IS73);

CProtoInstance* ProtoInstance75 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance75->setName("nine");
CfieldValue* fieldValue76 = new CfieldValue();
fieldValue76->setName("ztranslation");
fieldValue76->setValue("0 0 0");
ProtoInstance75->addFieldValue(*fieldValue76);

CIS* IS77 = new CIS();
Cconnect* connect78 = new Cconnect();
connect78->setNodeField("myShape");
connect78->setProtoField("myShape");
IS77->addConnect(*connect78);

ProtoInstance75->setIS(*IS77);

Transform72->addChildren(*ProtoInstance75);

CProtoInstance* ProtoInstance79 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance79->setName("nine");
CfieldValue* fieldValue80 = new CfieldValue();
fieldValue80->setName("ztranslation");
fieldValue80->setValue("0 0 2");
ProtoInstance79->addFieldValue(*fieldValue80);

CIS* IS81 = new CIS();
Cconnect* connect82 = new Cconnect();
connect82->setNodeField("myShape");
connect82->setProtoField("myShape");
IS81->addConnect(*connect82);

ProtoInstance79->setIS(*IS81);

Transform72->addChildren(*ProtoInstance79);

CProtoInstance* ProtoInstance83 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance83->setName("nine");
CfieldValue* fieldValue84 = new CfieldValue();
fieldValue84->setName("ztranslation");
fieldValue84->setValue("0 0 -2");
ProtoInstance83->addFieldValue(*fieldValue84);

CIS* IS85 = new CIS();
Cconnect* connect86 = new Cconnect();
connect86->setNodeField("myShape");
connect86->setProtoField("myShape");
IS85->addConnect(*connect86);

ProtoInstance83->setIS(*IS85);

Transform72->addChildren(*ProtoInstance83);

ProtoBody71->addChildren(*Transform72);

ProtoDeclare66->setProtoBody(*ProtoBody71);

group->addChildren(*ProtoDeclare66);

CProtoInstance* ProtoInstance87 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance87->setName("twentyseven");
CfieldValue* fieldValue88 = new CfieldValue();
fieldValue88->setName("ttranslation");
fieldValue88->setValue("0 0 0");
ProtoInstance87->addFieldValue(*fieldValue88);

CfieldValue* fieldValue89 = new CfieldValue();
fieldValue89->setName("myShape");
CBox* Box90 = (CBox *)(m_pScene.createNode("Box"));
Box90->setSize(new float[3]{1,1,1});
fieldValue89->addChildren(*Box90);

ProtoInstance87->addFieldValue(*fieldValue89);

group->addChildren(*ProtoInstance87);

X3D0->setScene(*Scene7);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
