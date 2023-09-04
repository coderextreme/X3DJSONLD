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
meta5->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/rubikFurnace.x3d");
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
<Sphere></Sphere>
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

CSphere* Sphere27 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape24->setGeometry(Sphere27);

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

CProtoDeclare ProtoDeclare43 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="nine" ><ProtoInterface><field accessType="inputOutput" type="SFVec3f" name="ztranslation"></field>
<field accessType="inputOutput" type="MFNode" name="myShape"><Shape DEF="_2"><Appearance><Material diffuseColor="1 1 1"></Material>
</Appearance>
<Sphere></Sphere>
</Shape>
</field>
</ProtoInterface>
<ProtoBody><Transform><ProtoInstance name="three"><IS><connect nodeField="myShape" protoField="myShape"></connect>
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
<IS><connect nodeField="translation" protoField="ztranslation"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare43->setName("nine");
CProtoInterface* ProtoInterface44 = new CProtoInterface();
Cfield* field45 = new Cfield();
field45->setAccessType("inputOutput");
field45->setType("SFVec3f");
field45->setName("ztranslation");
ProtoInterface44->addField(*field45);

Cfield* field46 = new Cfield();
field46->setAccessType("inputOutput");
field46->setType("MFNode");
field46->setName("myShape");
CShape* Shape47 = (CShape *)(m_pScene.createNode("Shape"));
Shape47->setDEF("_2");
CAppearance* Appearance48 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material49 = (CMaterial *)(m_pScene.createNode("Material"));
Material49->setDiffuseColor(new float[3]{1,1,1});
Appearance48->setMaterial(*Material49);

Shape47->setAppearance(*Appearance48);

CSphere* Sphere50 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape47->setGeometry(Sphere50);

field46->addChildren(*Shape47);

ProtoInterface44->addField(*field46);

ProtoDeclare43->setProtoInterface(*ProtoInterface44);

CProtoBody* ProtoBody51 = new CProtoBody();
CTransform* Transform52 = (CTransform *)(m_pScene.createNode("Transform"));
CProtoInstance* ProtoInstance53 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance53->setName("three");
CIS* IS54 = new CIS();
Cconnect* connect55 = new Cconnect();
connect55->setNodeField("myShape");
connect55->setProtoField("myShape");
IS54->addConnect(*connect55);

ProtoInstance53->setIS(*IS54);

Transform52->addChildren(*ProtoInstance53);

CProtoInstance* ProtoInstance56 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance56->setName("three");
CfieldValue* fieldValue57 = new CfieldValue();
fieldValue57->setName("ytranslation");
fieldValue57->setValue("0 2 0");
ProtoInstance56->addFieldValue(*fieldValue57);

CIS* IS58 = new CIS();
Cconnect* connect59 = new Cconnect();
connect59->setNodeField("myShape");
connect59->setProtoField("myShape");
IS58->addConnect(*connect59);

ProtoInstance56->setIS(*IS58);

Transform52->addChildren(*ProtoInstance56);

CProtoInstance* ProtoInstance60 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance60->setName("three");
CfieldValue* fieldValue61 = new CfieldValue();
fieldValue61->setName("ytranslation");
fieldValue61->setValue("0 -2 0");
ProtoInstance60->addFieldValue(*fieldValue61);

CIS* IS62 = new CIS();
Cconnect* connect63 = new Cconnect();
connect63->setNodeField("myShape");
connect63->setProtoField("myShape");
IS62->addConnect(*connect63);

ProtoInstance60->setIS(*IS62);

Transform52->addChildren(*ProtoInstance60);

CIS* IS64 = new CIS();
Cconnect* connect65 = new Cconnect();
connect65->setNodeField("translation");
connect65->setProtoField("ztranslation");
IS64->addConnect(*connect65);

Transform52->setIS(*IS64);

ProtoBody51->addChildren(*Transform52);

ProtoDeclare43->setProtoBody(*ProtoBody51);

group->addChildren(*ProtoDeclare43);

CProtoDeclare ProtoDeclare66 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="twentyseven" ><ProtoInterface><field accessType="inputOutput" type="SFVec3f" name="ttranslation"></field>
<field accessType="inputOutput" type="MFNode" name="myShape"><Shape DEF="_3"><Appearance><Material diffuseColor="1 1 1"></Material>
</Appearance>
<Sphere></Sphere>
</Shape>
</field>
</ProtoInterface>
<ProtoBody><Transform><ProtoInstance name="nine"><IS><connect nodeField="myShape" protoField="myShape"></connect>
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
<IS><connect nodeField="translation" protoField="ttranslation"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare66->setName("twentyseven");
CProtoInterface* ProtoInterface67 = new CProtoInterface();
Cfield* field68 = new Cfield();
field68->setAccessType("inputOutput");
field68->setType("SFVec3f");
field68->setName("ttranslation");
ProtoInterface67->addField(*field68);

Cfield* field69 = new Cfield();
field69->setAccessType("inputOutput");
field69->setType("MFNode");
field69->setName("myShape");
CShape* Shape70 = (CShape *)(m_pScene.createNode("Shape"));
Shape70->setDEF("_3");
CAppearance* Appearance71 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material72 = (CMaterial *)(m_pScene.createNode("Material"));
Material72->setDiffuseColor(new float[3]{1,1,1});
Appearance71->setMaterial(*Material72);

Shape70->setAppearance(*Appearance71);

CSphere* Sphere73 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape70->setGeometry(Sphere73);

field69->addChildren(*Shape70);

ProtoInterface67->addField(*field69);

ProtoDeclare66->setProtoInterface(*ProtoInterface67);

CProtoBody* ProtoBody74 = new CProtoBody();
CTransform* Transform75 = (CTransform *)(m_pScene.createNode("Transform"));
CProtoInstance* ProtoInstance76 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance76->setName("nine");
CIS* IS77 = new CIS();
Cconnect* connect78 = new Cconnect();
connect78->setNodeField("myShape");
connect78->setProtoField("myShape");
IS77->addConnect(*connect78);

ProtoInstance76->setIS(*IS77);

Transform75->addChildren(*ProtoInstance76);

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

Transform75->addChildren(*ProtoInstance79);

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

Transform75->addChildren(*ProtoInstance83);

CIS* IS87 = new CIS();
Cconnect* connect88 = new Cconnect();
connect88->setNodeField("translation");
connect88->setProtoField("ttranslation");
IS87->addConnect(*connect88);

Transform75->setIS(*IS87);

ProtoBody74->addChildren(*Transform75);

ProtoDeclare66->setProtoBody(*ProtoBody74);

group->addChildren(*ProtoDeclare66);

CNavigationInfo* NavigationInfo89 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo89->setType(new CString[1]{"EXAMINE"}, 1);
group->addChildren(*NavigationInfo89);

CViewpoint* Viewpoint90 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint90->setDescription("Rubiks Cube on Fire");
Viewpoint90->setPosition(new float[3]{0,0,12});
group->addChildren(*Viewpoint90);

CProtoInstance* ProtoInstance91 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance91->setName("twentyseven");
CfieldValue* fieldValue92 = new CfieldValue();
fieldValue92->setName("myShape");
CShape* Shape93 = (CShape *)(m_pScene.createNode("Shape"));
Shape93->setDEF("_4");
CAppearance* Appearance94 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material95 = (CMaterial *)(m_pScene.createNode("Material"));
Material95->setDiffuseColor(new float[3]{0,1,0});
Appearance94->setMaterial(*Material95);

Shape93->setAppearance(*Appearance94);

CBox* Box96 = (CBox *)(m_pScene.createNode("Box"));
Box96->setSize(new float[3]{1,1,1});
Shape93->setGeometry(Box96);

fieldValue92->addChildren(*Shape93);

ProtoInstance91->addFieldValue(*fieldValue92);

group->addChildren(*ProtoInstance91);

X3D0->setScene(*Scene6);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
