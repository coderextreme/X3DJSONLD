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
meta2->setContent("rubikFurnace.x3d");
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
meta5->setContent("https://coderextreme.net/X3DJSONLD/rubikFurnace.x3d");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("description");
meta6->setContent("a green rubik cube");
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

CProtoDeclare ProtoDeclare10 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="anyShape" ><ProtoInterface><field name="xtranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="myShape" accessType="inputOutput" type="MFNode"><Shape><Sphere containerField="geometry"></Sphere>
<Appearance><Material diffuseColor="1 1 1"></Material>
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

CProtoDeclare ProtoDeclare23 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="three" ><ProtoInterface><field name="ytranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="myShape" accessType="inputOutput" type="MFNode"><Shape><Sphere containerField="geometry"></Sphere>
<Appearance><Material diffuseColor="1 1 1"></Material>
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
CSphere* Sphere28 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape27->setGeometry(Sphere28);

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

CProtoDeclare ProtoDeclare47 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="nine" ><ProtoInterface><field name="ztranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="myShape" accessType="inputOutput" type="MFNode"><Shape><Sphere containerField="geometry"></Sphere>
<Appearance><Material diffuseColor="1 1 1"></Material>
</Appearance>
</Shape>
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
ProtoDeclare47->setName("nine");
CProtoInterface* ProtoInterface48 = new CProtoInterface();
Cfield* field49 = new Cfield();
field49->setName("ztranslation");
field49->setAccessType("inputOutput");
field49->setType("SFVec3f");
field49->setValue("0 0 0");
ProtoInterface48->addField(*field49);

Cfield* field50 = new Cfield();
field50->setName("myShape");
field50->setAccessType("inputOutput");
field50->setType("MFNode");
CShape* Shape51 = (CShape *)(m_pScene.createNode("Shape"));
CSphere* Sphere52 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape51->setGeometry(Sphere52);

CAppearance* Appearance53 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material54 = (CMaterial *)(m_pScene.createNode("Material"));
Material54->setDiffuseColor(new float[3]{1,1,1});
Appearance53->setMaterial(*Material54);

Shape51->setAppearance(*Appearance53);

field50->addChildren(*Shape51);

ProtoInterface48->addField(*field50);

ProtoDeclare47->setProtoInterface(*ProtoInterface48);

CProtoBody* ProtoBody55 = new CProtoBody();
CTransform* Transform56 = (CTransform *)(m_pScene.createNode("Transform"));
CIS* IS57 = new CIS();
Cconnect* connect58 = new Cconnect();
connect58->setNodeField("translation");
connect58->setProtoField("ztranslation");
IS57->addConnect(*connect58);

Transform56->setIS(*IS57);

CProtoInstance* ProtoInstance59 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance59->setName("three");
CfieldValue* fieldValue60 = new CfieldValue();
fieldValue60->setName("ytranslation");
fieldValue60->setValue("0 0 0");
ProtoInstance59->addFieldValue(*fieldValue60);

CIS* IS61 = new CIS();
Cconnect* connect62 = new Cconnect();
connect62->setNodeField("myShape");
connect62->setProtoField("myShape");
IS61->addConnect(*connect62);

ProtoInstance59->setIS(*IS61);

Transform56->addChildren(*ProtoInstance59);

CProtoInstance* ProtoInstance63 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance63->setName("three");
CfieldValue* fieldValue64 = new CfieldValue();
fieldValue64->setName("ytranslation");
fieldValue64->setValue("0 2 0");
ProtoInstance63->addFieldValue(*fieldValue64);

CIS* IS65 = new CIS();
Cconnect* connect66 = new Cconnect();
connect66->setNodeField("myShape");
connect66->setProtoField("myShape");
IS65->addConnect(*connect66);

ProtoInstance63->setIS(*IS65);

Transform56->addChildren(*ProtoInstance63);

CProtoInstance* ProtoInstance67 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance67->setName("three");
CfieldValue* fieldValue68 = new CfieldValue();
fieldValue68->setName("ytranslation");
fieldValue68->setValue("0 -2 0");
ProtoInstance67->addFieldValue(*fieldValue68);

CIS* IS69 = new CIS();
Cconnect* connect70 = new Cconnect();
connect70->setNodeField("myShape");
connect70->setProtoField("myShape");
IS69->addConnect(*connect70);

ProtoInstance67->setIS(*IS69);

Transform56->addChildren(*ProtoInstance67);

ProtoBody55->addChildren(*Transform56);

ProtoDeclare47->setProtoBody(*ProtoBody55);

group->addChildren(*ProtoDeclare47);

CProtoDeclare ProtoDeclare71 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="twentyseven" ><ProtoInterface><field name="ttranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="myShape" accessType="inputOutput" type="MFNode"><Shape><Sphere containerField="geometry"></Sphere>
<Appearance><Material diffuseColor="1 1 1"></Material>
</Appearance>
</Shape>
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
ProtoDeclare71->setName("twentyseven");
CProtoInterface* ProtoInterface72 = new CProtoInterface();
Cfield* field73 = new Cfield();
field73->setName("ttranslation");
field73->setAccessType("inputOutput");
field73->setType("SFVec3f");
field73->setValue("0 0 0");
ProtoInterface72->addField(*field73);

Cfield* field74 = new Cfield();
field74->setName("myShape");
field74->setAccessType("inputOutput");
field74->setType("MFNode");
CShape* Shape75 = (CShape *)(m_pScene.createNode("Shape"));
CSphere* Sphere76 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape75->setGeometry(Sphere76);

CAppearance* Appearance77 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material78 = (CMaterial *)(m_pScene.createNode("Material"));
Material78->setDiffuseColor(new float[3]{1,1,1});
Appearance77->setMaterial(*Material78);

Shape75->setAppearance(*Appearance77);

field74->addChildren(*Shape75);

ProtoInterface72->addField(*field74);

ProtoDeclare71->setProtoInterface(*ProtoInterface72);

CProtoBody* ProtoBody79 = new CProtoBody();
CTransform* Transform80 = (CTransform *)(m_pScene.createNode("Transform"));
CIS* IS81 = new CIS();
Cconnect* connect82 = new Cconnect();
connect82->setNodeField("translation");
connect82->setProtoField("ttranslation");
IS81->addConnect(*connect82);

Transform80->setIS(*IS81);

CProtoInstance* ProtoInstance83 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance83->setName("nine");
CfieldValue* fieldValue84 = new CfieldValue();
fieldValue84->setName("ztranslation");
fieldValue84->setValue("0 0 0");
ProtoInstance83->addFieldValue(*fieldValue84);

CIS* IS85 = new CIS();
Cconnect* connect86 = new Cconnect();
connect86->setNodeField("myShape");
connect86->setProtoField("myShape");
IS85->addConnect(*connect86);

ProtoInstance83->setIS(*IS85);

Transform80->addChildren(*ProtoInstance83);

CProtoInstance* ProtoInstance87 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance87->setName("nine");
CfieldValue* fieldValue88 = new CfieldValue();
fieldValue88->setName("ztranslation");
fieldValue88->setValue("0 0 2");
ProtoInstance87->addFieldValue(*fieldValue88);

CIS* IS89 = new CIS();
Cconnect* connect90 = new Cconnect();
connect90->setNodeField("myShape");
connect90->setProtoField("myShape");
IS89->addConnect(*connect90);

ProtoInstance87->setIS(*IS89);

Transform80->addChildren(*ProtoInstance87);

CProtoInstance* ProtoInstance91 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance91->setName("nine");
CfieldValue* fieldValue92 = new CfieldValue();
fieldValue92->setName("ztranslation");
fieldValue92->setValue("0 0 -2");
ProtoInstance91->addFieldValue(*fieldValue92);

CIS* IS93 = new CIS();
Cconnect* connect94 = new Cconnect();
connect94->setNodeField("myShape");
connect94->setProtoField("myShape");
IS93->addConnect(*connect94);

ProtoInstance91->setIS(*IS93);

Transform80->addChildren(*ProtoInstance91);

ProtoBody79->addChildren(*Transform80);

ProtoDeclare71->setProtoBody(*ProtoBody79);

group->addChildren(*ProtoDeclare71);

CProtoInstance* ProtoInstance95 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance95->setName("twentyseven");
CfieldValue* fieldValue96 = new CfieldValue();
fieldValue96->setName("ttranslation");
fieldValue96->setValue("0 0 0");
ProtoInstance95->addFieldValue(*fieldValue96);

CfieldValue* fieldValue97 = new CfieldValue();
fieldValue97->setName("myShape");
CShape* Shape98 = (CShape *)(m_pScene.createNode("Shape"));
CBox* Box99 = (CBox *)(m_pScene.createNode("Box"));
Box99->setSize(new float[3]{1,1,1});
Shape98->setGeometry(Box99);

CAppearance* Appearance100 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material101 = (CMaterial *)(m_pScene.createNode("Material"));
Material101->setDiffuseColor(new float[3]{0,1,0});
Appearance100->setMaterial(*Material101);

Shape98->setAppearance(*Appearance100);

fieldValue97->addChildren(*Shape98);

ProtoInstance95->addFieldValue(*fieldValue97);

group->addChildren(*ProtoInstance95);

X3D0->setScene(*Scene7);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
