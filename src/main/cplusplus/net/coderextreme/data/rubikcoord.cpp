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
meta2->setContent("rubikcoord.x3d");
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

CBackground* Background10 = (CBackground *)(m_pScene.createNode("Background"));
Background10->setSkyColor(new float[3]{1,1,1});
group->addChildren(*Background10);

CProtoDeclare ProtoDeclare11 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
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
ProtoDeclare11->setName("boxproto");
CProtoInterface* ProtoInterface12 = new CProtoInterface();
Cfield* field13 = new Cfield();
field13->setName("xtranslation");
field13->setAccessType("inputOutput");
field13->setType("SFVec3f");
field13->setValue("0 0 0");
ProtoInterface12->addField(*field13);

Cfield* field14 = new Cfield();
field14->setName("diffuseColor");
field14->setAccessType("inputOutput");
field14->setType("SFColor");
field14->setValue("1 1 1");
ProtoInterface12->addField(*field14);

ProtoDeclare11->setProtoInterface(*ProtoInterface12);

CProtoBody* ProtoBody15 = new CProtoBody();
CTransform* Transform16 = (CTransform *)(m_pScene.createNode("Transform"));
CIS* IS17 = new CIS();
Cconnect* connect18 = new Cconnect();
connect18->setNodeField("translation");
connect18->setProtoField("xtranslation");
IS17->addConnect(*connect18);

Transform16->setIS(*IS17);

CShape* Shape19 = (CShape *)(m_pScene.createNode("Shape"));
CBox* Box20 = (CBox *)(m_pScene.createNode("Box"));
Shape19->setGeometry(Box20);

CAppearance* Appearance21 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material22 = (CMaterial *)(m_pScene.createNode("Material"));
Material22->setDiffuseColor(new float[3]{1,1,1});
CIS* IS23 = new CIS();
Cconnect* connect24 = new Cconnect();
connect24->setNodeField("diffuseColor");
connect24->setProtoField("diffuseColor");
IS23->addConnect(*connect24);

Material22->setIS(*IS23);

Appearance21->setMaterial(*Material22);

Shape19->setAppearance(*Appearance21);

Transform16->addChildren(*Shape19);

ProtoBody15->addChildren(*Transform16);

ProtoDeclare11->setProtoBody(*ProtoBody15);

group->addChildren(*ProtoDeclare11);

CProtoDeclare ProtoDeclare25 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="two" ><ProtoInterface><field name="ytranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="diffuseColor" accessType="inputOutput" type="SFColor" value="1 0 0"></field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="ytranslation"></connect>
</IS>
<ProtoInstance name="boxproto"><fieldValue name="xtranslation" value="0 0 0"></fieldValue>
<fieldValue name="diffuseColor" value="1 0 0"><IS><connect nodeField="diffuseColor" protoField="diffuseColor"></connect>
</IS>
</fieldValue>
</ProtoInstance>
<ProtoInstance name="boxproto"><fieldValue name="xtranslation" value="2 0 0"></fieldValue>
<fieldValue name="diffuseColor" value="1 0 0"><IS><connect nodeField="diffuseColor" protoField="diffuseColor"></connect>
</IS>
</fieldValue>
</ProtoInstance>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare25->setName("two");
CProtoInterface* ProtoInterface26 = new CProtoInterface();
Cfield* field27 = new Cfield();
field27->setName("ytranslation");
field27->setAccessType("inputOutput");
field27->setType("SFVec3f");
field27->setValue("0 0 0");
ProtoInterface26->addField(*field27);

Cfield* field28 = new Cfield();
field28->setName("diffuseColor");
field28->setAccessType("inputOutput");
field28->setType("SFColor");
field28->setValue("1 0 0");
ProtoInterface26->addField(*field28);

ProtoDeclare25->setProtoInterface(*ProtoInterface26);

CProtoBody* ProtoBody29 = new CProtoBody();
CTransform* Transform30 = (CTransform *)(m_pScene.createNode("Transform"));
CIS* IS31 = new CIS();
Cconnect* connect32 = new Cconnect();
connect32->setNodeField("translation");
connect32->setProtoField("ytranslation");
IS31->addConnect(*connect32);

Transform30->setIS(*IS31);

CProtoInstance* ProtoInstance33 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance33->setName("boxproto");
CfieldValue* fieldValue34 = new CfieldValue();
fieldValue34->setName("xtranslation");
fieldValue34->setValue("0 0 0");
ProtoInstance33->addFieldValue(*fieldValue34);

CfieldValue* fieldValue35 = new CfieldValue();
fieldValue35->setName("diffuseColor");
fieldValue35->setValue("1 0 0");
CIS* IS36 = new CIS();
Cconnect* connect37 = new Cconnect();
connect37->setNodeField("diffuseColor");
connect37->setProtoField("diffuseColor");
IS36->addConnect(*connect37);

fieldValue35->setIS(*IS36);

ProtoInstance33->addFieldValue(*fieldValue35);

Transform30->addChildren(*ProtoInstance33);

CProtoInstance* ProtoInstance38 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance38->setName("boxproto");
CfieldValue* fieldValue39 = new CfieldValue();
fieldValue39->setName("xtranslation");
fieldValue39->setValue("2 0 0");
ProtoInstance38->addFieldValue(*fieldValue39);

CfieldValue* fieldValue40 = new CfieldValue();
fieldValue40->setName("diffuseColor");
fieldValue40->setValue("1 0 0");
CIS* IS41 = new CIS();
Cconnect* connect42 = new Cconnect();
connect42->setNodeField("diffuseColor");
connect42->setProtoField("diffuseColor");
IS41->addConnect(*connect42);

fieldValue40->setIS(*IS41);

ProtoInstance38->addFieldValue(*fieldValue40);

Transform30->addChildren(*ProtoInstance38);

ProtoBody29->addChildren(*Transform30);

ProtoDeclare25->setProtoBody(*ProtoBody29);

group->addChildren(*ProtoDeclare25);

CProtoDeclare ProtoDeclare43 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="four" ><ProtoInterface><field name="ztranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="x1diffuseColor" accessType="inputOutput" type="SFColor" value="1 0 0"></field>
<field name="x2diffuseColor" accessType="inputOutput" type="SFColor" value="0 1 0"></field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="ztranslation"></connect>
</IS>
<ProtoInstance name="two"><fieldValue name="ytranslation" value="0 0 0"></fieldValue>
<fieldValue name="diffuseColor" value="1 0 0"><IS><connect nodeField="diffuseColor" protoField="x1diffuseColor"></connect>
</IS>
</fieldValue>
</ProtoInstance>
<ProtoInstance name="two"><fieldValue name="ytranslation" value="0 2 0"></fieldValue>
<fieldValue name="diffuseColor" value="0 1 0"><IS><connect nodeField="diffuseColor" protoField="x2diffuseColor"></connect>
</IS>
</fieldValue>
</ProtoInstance>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare43->setName("four");
CProtoInterface* ProtoInterface44 = new CProtoInterface();
Cfield* field45 = new Cfield();
field45->setName("ztranslation");
field45->setAccessType("inputOutput");
field45->setType("SFVec3f");
field45->setValue("0 0 0");
ProtoInterface44->addField(*field45);

Cfield* field46 = new Cfield();
field46->setName("x1diffuseColor");
field46->setAccessType("inputOutput");
field46->setType("SFColor");
field46->setValue("1 0 0");
ProtoInterface44->addField(*field46);

Cfield* field47 = new Cfield();
field47->setName("x2diffuseColor");
field47->setAccessType("inputOutput");
field47->setType("SFColor");
field47->setValue("0 1 0");
ProtoInterface44->addField(*field47);

ProtoDeclare43->setProtoInterface(*ProtoInterface44);

CProtoBody* ProtoBody48 = new CProtoBody();
CTransform* Transform49 = (CTransform *)(m_pScene.createNode("Transform"));
CIS* IS50 = new CIS();
Cconnect* connect51 = new Cconnect();
connect51->setNodeField("translation");
connect51->setProtoField("ztranslation");
IS50->addConnect(*connect51);

Transform49->setIS(*IS50);

CProtoInstance* ProtoInstance52 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance52->setName("two");
CfieldValue* fieldValue53 = new CfieldValue();
fieldValue53->setName("ytranslation");
fieldValue53->setValue("0 0 0");
ProtoInstance52->addFieldValue(*fieldValue53);

CfieldValue* fieldValue54 = new CfieldValue();
fieldValue54->setName("diffuseColor");
fieldValue54->setValue("1 0 0");
CIS* IS55 = new CIS();
Cconnect* connect56 = new Cconnect();
connect56->setNodeField("diffuseColor");
connect56->setProtoField("x1diffuseColor");
IS55->addConnect(*connect56);

fieldValue54->setIS(*IS55);

ProtoInstance52->addFieldValue(*fieldValue54);

Transform49->addChildren(*ProtoInstance52);

CProtoInstance* ProtoInstance57 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance57->setName("two");
CfieldValue* fieldValue58 = new CfieldValue();
fieldValue58->setName("ytranslation");
fieldValue58->setValue("0 2 0");
ProtoInstance57->addFieldValue(*fieldValue58);

CfieldValue* fieldValue59 = new CfieldValue();
fieldValue59->setName("diffuseColor");
fieldValue59->setValue("0 1 0");
CIS* IS60 = new CIS();
Cconnect* connect61 = new Cconnect();
connect61->setNodeField("diffuseColor");
connect61->setProtoField("x2diffuseColor");
IS60->addConnect(*connect61);

fieldValue59->setIS(*IS60);

ProtoInstance57->addFieldValue(*fieldValue59);

Transform49->addChildren(*ProtoInstance57);

ProtoBody48->addChildren(*Transform49);

ProtoDeclare43->setProtoBody(*ProtoBody48);

group->addChildren(*ProtoDeclare43);

CProtoDeclare ProtoDeclare62 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
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
ProtoDeclare62->setName("eight");
CProtoInterface* ProtoInterface63 = new CProtoInterface();
Cfield* field64 = new Cfield();
field64->setName("ttranslation");
field64->setAccessType("inputOutput");
field64->setType("SFVec3f");
field64->setValue("0 0 0");
ProtoInterface63->addField(*field64);

ProtoDeclare62->setProtoInterface(*ProtoInterface63);

CProtoBody* ProtoBody65 = new CProtoBody();
CTransform* Transform66 = (CTransform *)(m_pScene.createNode("Transform"));
CIS* IS67 = new CIS();
Cconnect* connect68 = new Cconnect();
connect68->setNodeField("translation");
connect68->setProtoField("ttranslation");
IS67->addConnect(*connect68);

Transform66->setIS(*IS67);

CProtoInstance* ProtoInstance69 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance69->setName("four");
CfieldValue* fieldValue70 = new CfieldValue();
fieldValue70->setName("ztranslation");
fieldValue70->setValue("0 0 0");
ProtoInstance69->addFieldValue(*fieldValue70);

CfieldValue* fieldValue71 = new CfieldValue();
fieldValue71->setName("x1diffuseColor");
fieldValue71->setValue("1 0 0");
ProtoInstance69->addFieldValue(*fieldValue71);

CfieldValue* fieldValue72 = new CfieldValue();
fieldValue72->setName("x2diffuseColor");
fieldValue72->setValue("0 1 0");
ProtoInstance69->addFieldValue(*fieldValue72);

Transform66->addChildren(*ProtoInstance69);

CProtoInstance* ProtoInstance73 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance73->setName("four");
CfieldValue* fieldValue74 = new CfieldValue();
fieldValue74->setName("ztranslation");
fieldValue74->setValue("0 0 2");
ProtoInstance73->addFieldValue(*fieldValue74);

CfieldValue* fieldValue75 = new CfieldValue();
fieldValue75->setName("x1diffuseColor");
fieldValue75->setValue("0 0 1");
ProtoInstance73->addFieldValue(*fieldValue75);

CfieldValue* fieldValue76 = new CfieldValue();
fieldValue76->setName("x2diffuseColor");
fieldValue76->setValue("1 1 0");
ProtoInstance73->addFieldValue(*fieldValue76);

Transform66->addChildren(*ProtoInstance73);

ProtoBody65->addChildren(*Transform66);

ProtoDeclare62->setProtoBody(*ProtoBody65);

group->addChildren(*ProtoDeclare62);

CProtoInstance* ProtoInstance77 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance77->setName("eight");
CfieldValue* fieldValue78 = new CfieldValue();
fieldValue78->setName("ttranslation");
fieldValue78->setValue("0 0 0");
ProtoInstance77->addFieldValue(*fieldValue78);

group->addChildren(*ProtoInstance77);

//Axes below <Group> <Group DEF='ArrowGreen'> <Shape> <Cylinder DEF='ArrowCylinder' radius='.025' top='false'/> <Appearance DEF='Green'> <Material diffuseColor='0 0 0'/> </Appearance> </Shape> <Transform translation='0 1 0'> <Shape> <Cone DEF='ArrowCone' bottomRadius='.05' height='.1'/> <Appearance USE='Green'/> </Shape> </Transform> </Group> <Transform translation='0 1.08 0'> <Billboard> <Shape> <Appearance DEF='LABEL_APPEARANCE'> <Material diffuseColor='0 0 0'/> </Appearance> <Text string='\"Y\"'> <FontStyle DEF='LABEL_FONT' family='\"SANS\"' justify='\"MIDDLE\" \"MIDDLE\"' size='.2'/> </Text> </Shape> </Billboard> </Transform> </Group> <Transform rotation='0 0 1 -1.57079'> <Group> <Group DEF='ArrowRed'> <Shape> <Cylinder USE='ArrowCylinder'/> <Appearance DEF='Red'> <Material diffuseColor='0 0 0'/> </Appearance> </Shape> <Transform translation='0 1 0'> <Shape> <Cone USE='ArrowCone'/> <Appearance USE='Red'/> </Shape> </Transform> </Group> <Transform rotation='0 0 1 1.57079' translation='.072 1.1 0'> <Billboard> <Shape> <Appearance USE='LABEL_APPEARANCE'/> <Text string='\"X\"'> <FontStyle USE='LABEL_FONT'/> </Text> </Shape> </Billboard> </Transform> </Group> </Transform> <Transform rotation='1 0 0 1.57079'> <Group> <Group DEF='ArrowBlue'> <Shape> <Cylinder USE='ArrowCylinder'/> <Appearance DEF='Blue'> <Material diffuseColor='0 0 0'/> </Appearance> </Shape> <Transform translation='0 1 0'> <Shape> <Cone USE='ArrowCone'/> <Appearance USE='Blue'/> </Shape> </Transform> </Group> <Transform rotation='1 0 0 -1.57079' translation='0 1.1 .072'> <Billboard> <Shape> <Appearance USE='LABEL_APPEARANCE'/> <Text string='\"Z\"'> <FontStyle USE='LABEL_FONT'/> </Text> </Shape> </Billboard> </Transform> </Group> </Transform>
X3D0->setScene(*Scene7);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
