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

X3D0->setHead(*head1);

CScene* Scene6 = new CScene();
CProtoDeclare ProtoDeclare7 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="anyShape" ><ProtoInterface><field accessType="inputOutput" type="SFVec3f" name="xtranslation"></field>
<field accessType="inputOutput" type="SFNode" name="myShape"><Sphere></Sphere>
</field>
</ProtoInterface>
<ProtoBody><Transform><Shape><Appearance><Material diffuseColor="1 1 1"></Material>
</Appearance>
<IS><connect nodeField="geometry" protoField="myShape"></connect>
</IS>
</Shape>
<IS><connect nodeField="translation" protoField="xtranslation"></connect>
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
field10->setType("SFNode");
field10->setName("myShape");
CSphere* Sphere11 = (CSphere *)(m_pScene.createNode("Sphere"));
field10->addChildren(*Sphere11);

ProtoInterface8->addField(*field10);

ProtoDeclare7->setProtoInterface(*ProtoInterface8);

CProtoBody* ProtoBody12 = new CProtoBody();
CTransform* Transform13 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape14 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance15 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material16 = (CMaterial *)(m_pScene.createNode("Material"));
Material16->setDiffuseColor(new float[3]{1,1,1});
Appearance15->setMaterial(*Material16);

Shape14->setAppearance(*Appearance15);

CIS* IS17 = new CIS();
Cconnect* connect18 = new Cconnect();
connect18->setNodeField("geometry");
connect18->setProtoField("myShape");
IS17->addConnect(*connect18);

Shape14->setIS(*IS17);

Transform13->addChild(*Shape14);

CIS* IS19 = new CIS();
Cconnect* connect20 = new Cconnect();
connect20->setNodeField("translation");
connect20->setProtoField("xtranslation");
IS19->addConnect(*connect20);

Transform13->setIS(*IS19);

ProtoBody12->addChildren(*Transform13);

ProtoDeclare7->setProtoBody(*ProtoBody12);

group->addChildren(*ProtoDeclare7);

CProtoDeclare ProtoDeclare21 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="three" ><ProtoInterface><field accessType="inputOutput" type="SFVec3f" name="ytranslation"></field>
<field accessType="inputOutput" type="SFNode" name="myShape"><Sphere DEF="_1"></Sphere>
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
ProtoDeclare21->setName("three");
CProtoInterface* ProtoInterface22 = new CProtoInterface();
Cfield* field23 = new Cfield();
field23->setAccessType("inputOutput");
field23->setType("SFVec3f");
field23->setName("ytranslation");
ProtoInterface22->addField(*field23);

Cfield* field24 = new Cfield();
field24->setAccessType("inputOutput");
field24->setType("SFNode");
field24->setName("myShape");
CSphere* Sphere25 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere25->setDEF("_1");
field24->addChildren(*Sphere25);

ProtoInterface22->addField(*field24);

ProtoDeclare21->setProtoInterface(*ProtoInterface22);

CProtoBody* ProtoBody26 = new CProtoBody();
CTransform* Transform27 = (CTransform *)(m_pScene.createNode("Transform"));
CProtoInstance* ProtoInstance28 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance28->setName("anyShape");
CIS* IS29 = new CIS();
Cconnect* connect30 = new Cconnect();
connect30->setNodeField("myShape");
connect30->setProtoField("myShape");
IS29->addConnect(*connect30);

ProtoInstance28->setIS(*IS29);

Transform27->addChildren(*ProtoInstance28);

CProtoInstance* ProtoInstance31 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance31->setName("anyShape");
CfieldValue* fieldValue32 = new CfieldValue();
fieldValue32->setName("xtranslation");
fieldValue32->setValue("2 0 0");
ProtoInstance31->addFieldValue(*fieldValue32);

CIS* IS33 = new CIS();
Cconnect* connect34 = new Cconnect();
connect34->setNodeField("myShape");
connect34->setProtoField("myShape");
IS33->addConnect(*connect34);

ProtoInstance31->setIS(*IS33);

Transform27->addChildren(*ProtoInstance31);

CProtoInstance* ProtoInstance35 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance35->setName("anyShape");
CfieldValue* fieldValue36 = new CfieldValue();
fieldValue36->setName("xtranslation");
fieldValue36->setValue("-2 0 0");
ProtoInstance35->addFieldValue(*fieldValue36);

CIS* IS37 = new CIS();
Cconnect* connect38 = new Cconnect();
connect38->setNodeField("myShape");
connect38->setProtoField("myShape");
IS37->addConnect(*connect38);

ProtoInstance35->setIS(*IS37);

Transform27->addChildren(*ProtoInstance35);

CIS* IS39 = new CIS();
Cconnect* connect40 = new Cconnect();
connect40->setNodeField("translation");
connect40->setProtoField("ytranslation");
IS39->addConnect(*connect40);

Transform27->setIS(*IS39);

ProtoBody26->addChildren(*Transform27);

ProtoDeclare21->setProtoBody(*ProtoBody26);

group->addChildren(*ProtoDeclare21);

CProtoDeclare ProtoDeclare41 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="nine" ><ProtoInterface><field accessType="inputOutput" type="SFVec3f" name="ztranslation"></field>
<field accessType="inputOutput" type="SFNode" name="myShape"><Sphere DEF="_2"></Sphere>
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
ProtoDeclare41->setName("nine");
CProtoInterface* ProtoInterface42 = new CProtoInterface();
Cfield* field43 = new Cfield();
field43->setAccessType("inputOutput");
field43->setType("SFVec3f");
field43->setName("ztranslation");
ProtoInterface42->addField(*field43);

Cfield* field44 = new Cfield();
field44->setAccessType("inputOutput");
field44->setType("SFNode");
field44->setName("myShape");
CSphere* Sphere45 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere45->setDEF("_2");
field44->addChildren(*Sphere45);

ProtoInterface42->addField(*field44);

ProtoDeclare41->setProtoInterface(*ProtoInterface42);

CProtoBody* ProtoBody46 = new CProtoBody();
CTransform* Transform47 = (CTransform *)(m_pScene.createNode("Transform"));
CProtoInstance* ProtoInstance48 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance48->setName("three");
CIS* IS49 = new CIS();
Cconnect* connect50 = new Cconnect();
connect50->setNodeField("myShape");
connect50->setProtoField("myShape");
IS49->addConnect(*connect50);

ProtoInstance48->setIS(*IS49);

Transform47->addChildren(*ProtoInstance48);

CProtoInstance* ProtoInstance51 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance51->setName("three");
CfieldValue* fieldValue52 = new CfieldValue();
fieldValue52->setName("ytranslation");
fieldValue52->setValue("0 2 0");
ProtoInstance51->addFieldValue(*fieldValue52);

CIS* IS53 = new CIS();
Cconnect* connect54 = new Cconnect();
connect54->setNodeField("myShape");
connect54->setProtoField("myShape");
IS53->addConnect(*connect54);

ProtoInstance51->setIS(*IS53);

Transform47->addChildren(*ProtoInstance51);

CProtoInstance* ProtoInstance55 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance55->setName("three");
CfieldValue* fieldValue56 = new CfieldValue();
fieldValue56->setName("ytranslation");
fieldValue56->setValue("0 -2 0");
ProtoInstance55->addFieldValue(*fieldValue56);

CIS* IS57 = new CIS();
Cconnect* connect58 = new Cconnect();
connect58->setNodeField("myShape");
connect58->setProtoField("myShape");
IS57->addConnect(*connect58);

ProtoInstance55->setIS(*IS57);

Transform47->addChildren(*ProtoInstance55);

CIS* IS59 = new CIS();
Cconnect* connect60 = new Cconnect();
connect60->setNodeField("translation");
connect60->setProtoField("ztranslation");
IS59->addConnect(*connect60);

Transform47->setIS(*IS59);

ProtoBody46->addChildren(*Transform47);

ProtoDeclare41->setProtoBody(*ProtoBody46);

group->addChildren(*ProtoDeclare41);

CProtoDeclare ProtoDeclare61 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="twentyseven" ><ProtoInterface><field accessType="inputOutput" type="SFVec3f" name="ttranslation"></field>
<field accessType="inputOutput" type="SFNode" name="myShape"><Sphere DEF="_3"></Sphere>
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
ProtoDeclare61->setName("twentyseven");
CProtoInterface* ProtoInterface62 = new CProtoInterface();
Cfield* field63 = new Cfield();
field63->setAccessType("inputOutput");
field63->setType("SFVec3f");
field63->setName("ttranslation");
ProtoInterface62->addField(*field63);

Cfield* field64 = new Cfield();
field64->setAccessType("inputOutput");
field64->setType("SFNode");
field64->setName("myShape");
CSphere* Sphere65 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere65->setDEF("_3");
field64->addChildren(*Sphere65);

ProtoInterface62->addField(*field64);

ProtoDeclare61->setProtoInterface(*ProtoInterface62);

CProtoBody* ProtoBody66 = new CProtoBody();
CTransform* Transform67 = (CTransform *)(m_pScene.createNode("Transform"));
CProtoInstance* ProtoInstance68 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance68->setName("nine");
CIS* IS69 = new CIS();
Cconnect* connect70 = new Cconnect();
connect70->setNodeField("myShape");
connect70->setProtoField("myShape");
IS69->addConnect(*connect70);

ProtoInstance68->setIS(*IS69);

Transform67->addChildren(*ProtoInstance68);

CProtoInstance* ProtoInstance71 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance71->setName("nine");
CfieldValue* fieldValue72 = new CfieldValue();
fieldValue72->setName("ztranslation");
fieldValue72->setValue("0 0 2");
ProtoInstance71->addFieldValue(*fieldValue72);

CIS* IS73 = new CIS();
Cconnect* connect74 = new Cconnect();
connect74->setNodeField("myShape");
connect74->setProtoField("myShape");
IS73->addConnect(*connect74);

ProtoInstance71->setIS(*IS73);

Transform67->addChildren(*ProtoInstance71);

CProtoInstance* ProtoInstance75 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance75->setName("nine");
CfieldValue* fieldValue76 = new CfieldValue();
fieldValue76->setName("ztranslation");
fieldValue76->setValue("0 0 -2");
ProtoInstance75->addFieldValue(*fieldValue76);

CIS* IS77 = new CIS();
Cconnect* connect78 = new Cconnect();
connect78->setNodeField("myShape");
connect78->setProtoField("myShape");
IS77->addConnect(*connect78);

ProtoInstance75->setIS(*IS77);

Transform67->addChildren(*ProtoInstance75);

CIS* IS79 = new CIS();
Cconnect* connect80 = new Cconnect();
connect80->setNodeField("translation");
connect80->setProtoField("ttranslation");
IS79->addConnect(*connect80);

Transform67->setIS(*IS79);

ProtoBody66->addChildren(*Transform67);

ProtoDeclare61->setProtoBody(*ProtoBody66);

group->addChildren(*ProtoDeclare61);

CNavigationInfo* NavigationInfo81 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo81->setType(new CString[1]{"EXAMINE"}, 1);
group->addChildren(*NavigationInfo81);

CViewpoint* Viewpoint82 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint82->setDescription("Rubiks Cube on Fire");
Viewpoint82->setPosition(new float[3]{0,0,12});
group->addChildren(*Viewpoint82);

CProtoInstance* ProtoInstance83 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance83->setName("twentyseven");
CfieldValue* fieldValue84 = new CfieldValue();
fieldValue84->setName("myShape");
CBox* Box85 = (CBox *)(m_pScene.createNode("Box"));
Box85->setDEF("_4");
Box85->setSize(new float[3]{1,1,1});
fieldValue84->addChildren(*Box85);

ProtoInstance83->addFieldValue(*fieldValue84);

group->addChildren(*ProtoInstance83);

X3D0->setScene(*Scene6);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
