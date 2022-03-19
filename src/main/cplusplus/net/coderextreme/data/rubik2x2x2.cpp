/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Concretes.h"
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
meta2->setContent("rubik2x2x2.x3d");
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
meta6->setContent("a kind of 2x2x2 rubik cube");
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
<ProtoDeclare name="boxproto" ><ProtoInterface><field name="xtranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="diffuseColor" accessType="inputOutput" type="SFColor" value="1 1 1"></field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="xtranslation"></connect>
</IS>
<Shape><Box containerField="geometry"></Box>
<Appearance><Material diffuseColor="1 1 1"><IS><connect nodeField="diffuseColor" protoField="diffuseColor"></connect>
</IS>
</Material>
</Appearance>
</Shape>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare10->setName("boxproto");
CProtoInterface* ProtoInterface11 = new CProtoInterface();
Cfield* field12 = new Cfield();
field12->setName("xtranslation");
field12->setAccessType("inputOutput");
field12->setType("SFVec3f");
field12->setValue("0 0 0");
ProtoInterface11->addField(*field12);

Cfield* field13 = new Cfield();
field13->setName("diffuseColor");
field13->setAccessType("inputOutput");
field13->setType("SFColor");
field13->setValue("1 1 1");
ProtoInterface11->addField(*field13);

ProtoDeclare10->setProtoInterface(*ProtoInterface11);

CProtoBody* ProtoBody14 = new CProtoBody();
CTransform* Transform15 = (CTransform *)(m_pScene.createNode("Transform"));
CIS* IS16 = new CIS();
Cconnect* connect17 = new Cconnect();
connect17->setNodeField("translation");
connect17->setProtoField("xtranslation");
IS16->addConnect(*connect17);

Transform15->setIS(*IS16);

CShape* Shape18 = (CShape *)(m_pScene.createNode("Shape"));
CBox* Box19 = (CBox *)(m_pScene.createNode("Box"));
Shape18->setGeometry(Box19);

CAppearance* Appearance20 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material21 = (CMaterial *)(m_pScene.createNode("Material"));
Material21->setDiffuseColor(new float[3]{1,1,1});
CIS* IS22 = new CIS();
Cconnect* connect23 = new Cconnect();
connect23->setNodeField("diffuseColor");
connect23->setProtoField("diffuseColor");
IS22->addConnect(*connect23);

Material21->setIS(*IS22);

Appearance20->setMaterial(*Material21);

Shape18->setAppearance(*Appearance20);

Transform15->addChildren(*Shape18);

ProtoBody14->addChildren(*Transform15);

ProtoDeclare10->setProtoBody(*ProtoBody14);

group->addChildren(*ProtoDeclare10);

CProtoDeclare ProtoDeclare24 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="two" ><ProtoInterface><field name="ytranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="diffuseColor" accessType="inputOutput" type="SFColor" value="1 0 0"></field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="ytranslation"></connect>
</IS>
<ProtoInstance name="boxproto"><fieldValue name="xtranslation" value="0 0 0"></fieldValue>
<fieldValue name="diffuseColor"><IS><connect nodeField="diffuseColor" protoField="diffuseColor"></connect>
</IS>
</fieldValue>
</ProtoInstance>
<ProtoInstance name="boxproto"><fieldValue name="xtranslation" value="2 0 0"></fieldValue>
<fieldValue name="diffuseColor"><IS><connect nodeField="diffuseColor" protoField="diffuseColor"></connect>
</IS>
</fieldValue>
</ProtoInstance>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare24->setName("two");
CProtoInterface* ProtoInterface25 = new CProtoInterface();
Cfield* field26 = new Cfield();
field26->setName("ytranslation");
field26->setAccessType("inputOutput");
field26->setType("SFVec3f");
field26->setValue("0 0 0");
ProtoInterface25->addField(*field26);

Cfield* field27 = new Cfield();
field27->setName("diffuseColor");
field27->setAccessType("inputOutput");
field27->setType("SFColor");
field27->setValue("1 0 0");
ProtoInterface25->addField(*field27);

ProtoDeclare24->setProtoInterface(*ProtoInterface25);

CProtoBody* ProtoBody28 = new CProtoBody();
CTransform* Transform29 = (CTransform *)(m_pScene.createNode("Transform"));
CIS* IS30 = new CIS();
Cconnect* connect31 = new Cconnect();
connect31->setNodeField("translation");
connect31->setProtoField("ytranslation");
IS30->addConnect(*connect31);

Transform29->setIS(*IS30);

CProtoInstance* ProtoInstance32 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance32->setName("boxproto");
CfieldValue* fieldValue33 = new CfieldValue();
fieldValue33->setName("xtranslation");
fieldValue33->setValue("0 0 0");
ProtoInstance32->addFieldValue(*fieldValue33);

CfieldValue* fieldValue34 = new CfieldValue();
fieldValue34->setName("diffuseColor");
CIS* IS35 = new CIS();
Cconnect* connect36 = new Cconnect();
connect36->setNodeField("diffuseColor");
connect36->setProtoField("diffuseColor");
IS35->addConnect(*connect36);

fieldValue34->setIS(*IS35);

ProtoInstance32->addFieldValue(*fieldValue34);

Transform29->addChildren(*ProtoInstance32);

CProtoInstance* ProtoInstance37 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance37->setName("boxproto");
CfieldValue* fieldValue38 = new CfieldValue();
fieldValue38->setName("xtranslation");
fieldValue38->setValue("2 0 0");
ProtoInstance37->addFieldValue(*fieldValue38);

CfieldValue* fieldValue39 = new CfieldValue();
fieldValue39->setName("diffuseColor");
CIS* IS40 = new CIS();
Cconnect* connect41 = new Cconnect();
connect41->setNodeField("diffuseColor");
connect41->setProtoField("diffuseColor");
IS40->addConnect(*connect41);

fieldValue39->setIS(*IS40);

ProtoInstance37->addFieldValue(*fieldValue39);

Transform29->addChildren(*ProtoInstance37);

ProtoBody28->addChildren(*Transform29);

ProtoDeclare24->setProtoBody(*ProtoBody28);

group->addChildren(*ProtoDeclare24);

CProtoDeclare ProtoDeclare42 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="four" ><ProtoInterface><field name="ztranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="x1diffuseColor" accessType="inputOutput" type="SFColor" value="1 0 0"></field>
<field name="x2diffuseColor" accessType="inputOutput" type="SFColor" value="0 1 0"></field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="ztranslation"></connect>
</IS>
<ProtoInstance name="two"><fieldValue name="ytranslation" value="0 0 0"></fieldValue>
<fieldValue name="diffuseColor"><IS><connect nodeField="diffuseColor" protoField="x1diffuseColor"></connect>
</IS>
</fieldValue>
</ProtoInstance>
<ProtoInstance name="two"><fieldValue name="ytranslation" value="0 2 0"></fieldValue>
<fieldValue name="diffuseColor"><IS><connect nodeField="diffuseColor" protoField="x2diffuseColor"></connect>
</IS>
</fieldValue>
</ProtoInstance>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare42->setName("four");
CProtoInterface* ProtoInterface43 = new CProtoInterface();
Cfield* field44 = new Cfield();
field44->setName("ztranslation");
field44->setAccessType("inputOutput");
field44->setType("SFVec3f");
field44->setValue("0 0 0");
ProtoInterface43->addField(*field44);

Cfield* field45 = new Cfield();
field45->setName("x1diffuseColor");
field45->setAccessType("inputOutput");
field45->setType("SFColor");
field45->setValue("1 0 0");
ProtoInterface43->addField(*field45);

Cfield* field46 = new Cfield();
field46->setName("x2diffuseColor");
field46->setAccessType("inputOutput");
field46->setType("SFColor");
field46->setValue("0 1 0");
ProtoInterface43->addField(*field46);

ProtoDeclare42->setProtoInterface(*ProtoInterface43);

CProtoBody* ProtoBody47 = new CProtoBody();
CTransform* Transform48 = (CTransform *)(m_pScene.createNode("Transform"));
CIS* IS49 = new CIS();
Cconnect* connect50 = new Cconnect();
connect50->setNodeField("translation");
connect50->setProtoField("ztranslation");
IS49->addConnect(*connect50);

Transform48->setIS(*IS49);

CProtoInstance* ProtoInstance51 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance51->setName("two");
CfieldValue* fieldValue52 = new CfieldValue();
fieldValue52->setName("ytranslation");
fieldValue52->setValue("0 0 0");
ProtoInstance51->addFieldValue(*fieldValue52);

CfieldValue* fieldValue53 = new CfieldValue();
fieldValue53->setName("diffuseColor");
CIS* IS54 = new CIS();
Cconnect* connect55 = new Cconnect();
connect55->setNodeField("diffuseColor");
connect55->setProtoField("x1diffuseColor");
IS54->addConnect(*connect55);

fieldValue53->setIS(*IS54);

ProtoInstance51->addFieldValue(*fieldValue53);

Transform48->addChildren(*ProtoInstance51);

CProtoInstance* ProtoInstance56 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance56->setName("two");
CfieldValue* fieldValue57 = new CfieldValue();
fieldValue57->setName("ytranslation");
fieldValue57->setValue("0 2 0");
ProtoInstance56->addFieldValue(*fieldValue57);

CfieldValue* fieldValue58 = new CfieldValue();
fieldValue58->setName("diffuseColor");
CIS* IS59 = new CIS();
Cconnect* connect60 = new Cconnect();
connect60->setNodeField("diffuseColor");
connect60->setProtoField("x2diffuseColor");
IS59->addConnect(*connect60);

fieldValue58->setIS(*IS59);

ProtoInstance56->addFieldValue(*fieldValue58);

Transform48->addChildren(*ProtoInstance56);

ProtoBody47->addChildren(*Transform48);

ProtoDeclare42->setProtoBody(*ProtoBody47);

group->addChildren(*ProtoDeclare42);

CProtoDeclare ProtoDeclare61 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="eight" ><ProtoInterface><field name="ttranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="ttranslation"></connect>
</IS>
<ProtoInstance name="four"><fieldValue name="ztranslation" value="0 0 0"></fieldValue>
<fieldValue name="x1diffuseColor" value="1 0 0"></fieldValue>
<fieldValue name="x2diffuseColor" value="0 1 0"></fieldValue>
</ProtoInstance>
<ProtoInstance name="four"><fieldValue name="ztranslation" value="0 0 2"></fieldValue>
<fieldValue name="x1diffuseColor" value="0 0 1"></fieldValue>
<fieldValue name="x2diffuseColor" value="1 1 0"></fieldValue>
</ProtoInstance>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare61->setName("eight");
CProtoInterface* ProtoInterface62 = new CProtoInterface();
Cfield* field63 = new Cfield();
field63->setName("ttranslation");
field63->setAccessType("inputOutput");
field63->setType("SFVec3f");
field63->setValue("0 0 0");
ProtoInterface62->addField(*field63);

ProtoDeclare61->setProtoInterface(*ProtoInterface62);

CProtoBody* ProtoBody64 = new CProtoBody();
CTransform* Transform65 = (CTransform *)(m_pScene.createNode("Transform"));
CIS* IS66 = new CIS();
Cconnect* connect67 = new Cconnect();
connect67->setNodeField("translation");
connect67->setProtoField("ttranslation");
IS66->addConnect(*connect67);

Transform65->setIS(*IS66);

CProtoInstance* ProtoInstance68 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance68->setName("four");
CfieldValue* fieldValue69 = new CfieldValue();
fieldValue69->setName("ztranslation");
fieldValue69->setValue("0 0 0");
ProtoInstance68->addFieldValue(*fieldValue69);

CfieldValue* fieldValue70 = new CfieldValue();
fieldValue70->setName("x1diffuseColor");
fieldValue70->setValue("1 0 0");
ProtoInstance68->addFieldValue(*fieldValue70);

CfieldValue* fieldValue71 = new CfieldValue();
fieldValue71->setName("x2diffuseColor");
fieldValue71->setValue("0 1 0");
ProtoInstance68->addFieldValue(*fieldValue71);

Transform65->addChildren(*ProtoInstance68);

CProtoInstance* ProtoInstance72 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance72->setName("four");
CfieldValue* fieldValue73 = new CfieldValue();
fieldValue73->setName("ztranslation");
fieldValue73->setValue("0 0 2");
ProtoInstance72->addFieldValue(*fieldValue73);

CfieldValue* fieldValue74 = new CfieldValue();
fieldValue74->setName("x1diffuseColor");
fieldValue74->setValue("0 0 1");
ProtoInstance72->addFieldValue(*fieldValue74);

CfieldValue* fieldValue75 = new CfieldValue();
fieldValue75->setName("x2diffuseColor");
fieldValue75->setValue("1 1 0");
ProtoInstance72->addFieldValue(*fieldValue75);

Transform65->addChildren(*ProtoInstance72);

ProtoBody64->addChildren(*Transform65);

ProtoDeclare61->setProtoBody(*ProtoBody64);

group->addChildren(*ProtoDeclare61);

CProtoInstance* ProtoInstance76 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance76->setName("eight");
CfieldValue* fieldValue77 = new CfieldValue();
fieldValue77->setName("ttranslation");
fieldValue77->setValue("0 0 0");
ProtoInstance76->addFieldValue(*fieldValue77);

group->addChildren(*ProtoInstance76);

X3D0->setScene(*Scene7);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
