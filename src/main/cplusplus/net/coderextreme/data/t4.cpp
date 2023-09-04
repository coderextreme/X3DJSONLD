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
meta2->setContent("t4.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("identifier");
meta3->setContent("http://coderextreme.net/X3DJSONLD/src/main/data/t4.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("generator");
meta4->setContent("view3dscene, https://castle-engine.io/view3dscene.php");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("creator");
meta5->setContent("Andreas Plesch and John Carlson");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("source");
meta6->setContent("t1.wrl");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("description");
meta7->setContent("Test Case for Proto Expander");
head1->addMeta(*meta7);

Ccomponent* component8 = new Ccomponent();
component8->setName("Networking");
component8->setLevel(2);
head1->addComponent(*component8);

Ccomponent* component9 = new Ccomponent();
component9->setName("Core");
component9->setLevel(2);
head1->addComponent(*component9);

X3D0->setHead(*head1);

CScene* Scene10 = new CScene();
CProtoDeclare ProtoDeclare11 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="org" ><ProtoInterface><field accessType="initializeOnly" type="SFVec3f" name="posi"></field>
<field accessType="initializeOnly" type="SFColor" name="col"></field>
</ProtoInterface>
<ProtoBody><Transform><Shape><Appearance><Material diffuseColor="1 1 1"><IS><connect nodeField="emissiveColor" protoField="col"></connect>
</IS>
</Material>
</Appearance>
<Sphere radius="5.1"></Sphere>
</Shape>
<IS><connect nodeField="translation" protoField="posi"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare11->setName("org");
CProtoInterface* ProtoInterface12 = new CProtoInterface();
Cfield* field13 = new Cfield();
field13->setAccessType("initializeOnly");
field13->setType("SFVec3f");
field13->setName("posi");
ProtoInterface12->addField(*field13);

Cfield* field14 = new Cfield();
field14->setAccessType("initializeOnly");
field14->setType("SFColor");
field14->setName("col");
ProtoInterface12->addField(*field14);

ProtoDeclare11->setProtoInterface(*ProtoInterface12);

CProtoBody* ProtoBody15 = new CProtoBody();
CTransform* Transform16 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape17 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance18 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material19 = (CMaterial *)(m_pScene.createNode("Material"));
Material19->setDiffuseColor(new float[3]{1,1,1});
CIS* IS20 = new CIS();
Cconnect* connect21 = new Cconnect();
connect21->setNodeField("emissiveColor");
connect21->setProtoField("col");
IS20->addConnect(*connect21);

Material19->setIS(*IS20);

Appearance18->setMaterial(*Material19);

Shape17->setAppearance(*Appearance18);

CSphere* Sphere22 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere22->setRadius(5.1);
Shape17->setGeometry(Sphere22);

Transform16->addChild(*Shape17);

CIS* IS23 = new CIS();
Cconnect* connect24 = new Cconnect();
connect24->setNodeField("translation");
connect24->setProtoField("posi");
IS23->addConnect(*connect24);

Transform16->setIS(*IS23);

ProtoBody15->addChildren(*Transform16);

ProtoDeclare11->setProtoBody(*ProtoBody15);

group->addChildren(*ProtoDeclare11);

CProtoDeclare ProtoDeclare25 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="r" ><ProtoInterface><field accessType="initializeOnly" type="SFVec3f" name="pos"></field>
</ProtoInterface>
<ProtoBody><ProtoInstance name="org"><fieldValue name="col" value="0 0.3 1"></fieldValue>
<IS><connect nodeField="posi" protoField="pos"></connect>
</IS>
</ProtoInstance>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare25->setName("r");
CProtoInterface* ProtoInterface26 = new CProtoInterface();
Cfield* field27 = new Cfield();
field27->setAccessType("initializeOnly");
field27->setType("SFVec3f");
field27->setName("pos");
ProtoInterface26->addField(*field27);

ProtoDeclare25->setProtoInterface(*ProtoInterface26);

CProtoBody* ProtoBody28 = new CProtoBody();
CProtoInstance* ProtoInstance29 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance29->setName("org");
CfieldValue* fieldValue30 = new CfieldValue();
fieldValue30->setName("col");
fieldValue30->setValue("0 0.3 1");
ProtoInstance29->addFieldValue(*fieldValue30);

CIS* IS31 = new CIS();
Cconnect* connect32 = new Cconnect();
connect32->setNodeField("posi");
connect32->setProtoField("pos");
IS31->addConnect(*connect32);

ProtoInstance29->setIS(*IS31);

ProtoBody28->addChildren(*ProtoInstance29);

ProtoDeclare25->setProtoBody(*ProtoBody28);

group->addChildren(*ProtoDeclare25);

CProtoDeclare ProtoDeclare33 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="n" ><ProtoInterface><field accessType="initializeOnly" type="SFVec3f" name="pos"></field>
</ProtoInterface>
<ProtoBody><ProtoInstance name="org"><fieldValue name="col" value="1 0 0.2"></fieldValue>
<IS><connect nodeField="posi" protoField="pos"></connect>
</IS>
</ProtoInstance>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare33->setName("n");
CProtoInterface* ProtoInterface34 = new CProtoInterface();
Cfield* field35 = new Cfield();
field35->setAccessType("initializeOnly");
field35->setType("SFVec3f");
field35->setName("pos");
ProtoInterface34->addField(*field35);

ProtoDeclare33->setProtoInterface(*ProtoInterface34);

CProtoBody* ProtoBody36 = new CProtoBody();
CProtoInstance* ProtoInstance37 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance37->setName("org");
CfieldValue* fieldValue38 = new CfieldValue();
fieldValue38->setName("col");
fieldValue38->setValue("1 0 0.2");
ProtoInstance37->addFieldValue(*fieldValue38);

CIS* IS39 = new CIS();
Cconnect* connect40 = new Cconnect();
connect40->setNodeField("posi");
connect40->setProtoField("pos");
IS39->addConnect(*connect40);

ProtoInstance37->setIS(*IS39);

ProtoBody36->addChildren(*ProtoInstance37);

ProtoDeclare33->setProtoBody(*ProtoBody36);

group->addChildren(*ProtoDeclare33);

CProtoDeclare ProtoDeclare41 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="i" ><ProtoInterface><field accessType="initializeOnly" type="SFVec3f" name="pos"></field>
</ProtoInterface>
<ProtoBody><ProtoInstance name="org"><fieldValue name="col" value="0.6 0 0.6"></fieldValue>
<IS><connect nodeField="posi" protoField="pos"></connect>
</IS>
</ProtoInstance>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare41->setName("i");
CProtoInterface* ProtoInterface42 = new CProtoInterface();
Cfield* field43 = new Cfield();
field43->setAccessType("initializeOnly");
field43->setType("SFVec3f");
field43->setName("pos");
ProtoInterface42->addField(*field43);

ProtoDeclare41->setProtoInterface(*ProtoInterface42);

CProtoBody* ProtoBody44 = new CProtoBody();
CProtoInstance* ProtoInstance45 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance45->setName("org");
CfieldValue* fieldValue46 = new CfieldValue();
fieldValue46->setName("col");
fieldValue46->setValue("0.6 0 0.6");
ProtoInstance45->addFieldValue(*fieldValue46);

CIS* IS47 = new CIS();
Cconnect* connect48 = new Cconnect();
connect48->setNodeField("posi");
connect48->setProtoField("pos");
IS47->addConnect(*connect48);

ProtoInstance45->setIS(*IS47);

ProtoBody44->addChildren(*ProtoInstance45);

ProtoDeclare41->setProtoBody(*ProtoBody44);

group->addChildren(*ProtoDeclare41);

CNavigationInfo* NavigationInfo49 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo49->setType(new CString[3]{"EXAMINE","FLY","WALK"}, 3);
NavigationInfo49->setAvatarSize(new float[3]{200,200,120}, 3);
NavigationInfo49->setSpeed(3);
group->addChildren(*NavigationInfo49);

CWorldInfo* WorldInfo50 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo50->setTitle("Arts Mapper");
group->addChildren(*WorldInfo50);

CViewpoint* Viewpoint51 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint51->setDescription("looking North");
Viewpoint51->setPosition(new float[3]{0,60,110});
Viewpoint51->setOrientation(new float[4]{1,0,0,-0.699999988079071});
Viewpoint51->setFieldOfView(0.7853981);
group->addChildren(*Viewpoint51);

CTransform* Transform52 = (CTransform *)(m_pScene.createNode("Transform"));
Transform52->setTranslation(new float[3]{-468,0,315});
CAnchor* Anchor53 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor53->setDescription("High Peak Community Arts");
Anchor53->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
CProtoInstance* ProtoInstance54 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance54->setName("r");
CfieldValue* fieldValue55 = new CfieldValue();
fieldValue55->setName("pos");
fieldValue55->setValue("400 0.1 -385");
ProtoInstance54->addFieldValue(*fieldValue55);

Anchor53->addChildren(*ProtoInstance54);

Transform52->addChildren(*Anchor53);

CAnchor* Anchor56 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor56->setDescription("People Express");
Anchor56->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
CProtoInstance* ProtoInstance57 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance57->setName("i");
CfieldValue* fieldValue58 = new CfieldValue();
fieldValue58->setName("pos");
fieldValue58->setValue("429.9 0.1 -319.6");
ProtoInstance57->addFieldValue(*fieldValue58);

Anchor56->addChildren(*ProtoInstance57);

Transform52->addChildren(*Anchor56);

CAnchor* Anchor59 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor59->setDescription("QArts/Studios");
Anchor59->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
CProtoInstance* ProtoInstance60 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance60->setName("i");
CfieldValue* fieldValue61 = new CfieldValue();
fieldValue61->setName("pos");
fieldValue61->setValue("430 0.1 -335");
ProtoInstance60->addFieldValue(*fieldValue61);

Anchor59->addChildren(*ProtoInstance60);

Transform52->addChildren(*Anchor59);

CAnchor* Anchor62 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor62->setDescription("First Movement");
Anchor62->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
CProtoInstance* ProtoInstance63 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance63->setName("n");
CfieldValue* fieldValue64 = new CfieldValue();
fieldValue64->setName("pos");
fieldValue64->setValue("429.9 0.1 -360.3");
ProtoInstance63->addFieldValue(*fieldValue64);

Anchor62->addChildren(*ProtoInstance63);

Transform52->addChildren(*Anchor62);

CAnchor* Anchor65 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor65->setDescription("City Arts");
Anchor65->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
CProtoInstance* ProtoInstance66 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance66->setName("i");
CfieldValue* fieldValue67 = new CfieldValue();
fieldValue67->setName("pos");
fieldValue67->setValue("455.9 0.1 -341.3");
ProtoInstance66->addFieldValue(*fieldValue67);

Anchor65->addChildren(*ProtoInstance66);

Transform52->addChildren(*Anchor65);

CAnchor* Anchor68 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor68->setDescription("Indigo Dance Group (Salamanda Tandem)");
Anchor68->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
CProtoInstance* ProtoInstance69 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance69->setName("r");
CfieldValue* fieldValue70 = new CfieldValue();
fieldValue70->setName("pos");
fieldValue70->setValue("456.1 0.1 -341.5");
ProtoInstance69->addFieldValue(*fieldValue70);

Anchor68->addChildren(*ProtoInstance69);

Transform52->addChildren(*Anchor68);

CAnchor* Anchor71 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor71->setDescription("Watering Seeds");
Anchor71->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
CProtoInstance* ProtoInstance72 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance72->setName("r");
CfieldValue* fieldValue73 = new CfieldValue();
fieldValue73->setName("pos");
fieldValue73->setValue("454 0.1 -361.3");
ProtoInstance72->addFieldValue(*fieldValue73);

Anchor71->addChildren(*ProtoInstance72);

Transform52->addChildren(*Anchor71);

CAnchor* Anchor74 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor74->setDescription("Fased In The Arts");
Anchor74->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
CProtoInstance* ProtoInstance75 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance75->setName("r");
CfieldValue* fieldValue76 = new CfieldValue();
fieldValue76->setName("pos");
fieldValue76->setValue("440 0.1 -350");
ProtoInstance75->addFieldValue(*fieldValue76);

Anchor74->addChildren(*ProtoInstance75);

Transform52->addChildren(*Anchor74);

CAnchor* Anchor77 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor77->setDescription("27a Access Artspace");
Anchor77->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
CProtoInstance* ProtoInstance78 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance78->setName("n");
CfieldValue* fieldValue79 = new CfieldValue();
fieldValue79->setName("pos");
fieldValue79->setValue("458.9 0.1 -304.3");
ProtoInstance78->addFieldValue(*fieldValue79);

Anchor77->addChildren(*ProtoInstance78);

Transform52->addChildren(*Anchor77);

CAnchor* Anchor80 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor80->setDescription("Bamboozle Theatre Company");
Anchor80->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
CProtoInstance* ProtoInstance81 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance81->setName("r");
CfieldValue* fieldValue82 = new CfieldValue();
fieldValue82->setName("pos");
fieldValue82->setValue("457.1 0.1 -300.8");
ProtoInstance81->addFieldValue(*fieldValue82);

Anchor80->addChildren(*ProtoInstance81);

Transform52->addChildren(*Anchor80);

CAnchor* Anchor83 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor83->setDescription("Mantle Community Arts");
Anchor83->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
CProtoInstance* ProtoInstance84 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance84->setName("r");
CfieldValue* fieldValue85 = new CfieldValue();
fieldValue85->setName("pos");
fieldValue85->setValue("442.4 0.1 -314.5");
ProtoInstance84->addFieldValue(*fieldValue85);

Anchor83->addChildren(*ProtoInstance84);

Transform52->addChildren(*Anchor83);

CAnchor* Anchor86 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor86->setDescription("Artlink East");
Anchor86->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
CProtoInstance* ProtoInstance87 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance87->setName("r");
CfieldValue* fieldValue88 = new CfieldValue();
fieldValue88->setName("pos");
fieldValue88->setValue("491.6 0.1 -335.7");
ProtoInstance87->addFieldValue(*fieldValue88);

Anchor86->addChildren(*ProtoInstance87);

Transform52->addChildren(*Anchor86);

CAnchor* Anchor89 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor89->setDescription("Creations");
Anchor89->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
CProtoInstance* ProtoInstance90 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance90->setName("r");
CfieldValue* fieldValue91 = new CfieldValue();
fieldValue91->setName("pos");
fieldValue91->setValue("467 0.1 -243.9");
ProtoInstance90->addFieldValue(*fieldValue91);

Anchor89->addChildren(*ProtoInstance90);

Transform52->addChildren(*Anchor89);

CAnchor* Anchor92 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor92->setDescription("New Perspectives");
Anchor92->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
CProtoInstance* ProtoInstance93 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance93->setName("n");
CfieldValue* fieldValue94 = new CfieldValue();
fieldValue94->setName("pos");
fieldValue94->setValue("457.4 0.1 -262.7");
ProtoInstance93->addFieldValue(*fieldValue94);

Anchor92->addChildren(*ProtoInstance93);

Transform52->addChildren(*Anchor92);

CAnchor* Anchor95 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor95->setDescription("UKan2");
Anchor95->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
CProtoInstance* ProtoInstance96 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance96->setName("r");
CfieldValue* fieldValue97 = new CfieldValue();
fieldValue97->setName("pos");
fieldValue97->setValue("458.7 0.1 -262.7");
ProtoInstance96->addFieldValue(*fieldValue97);

Anchor95->addChildren(*ProtoInstance96);

Transform52->addChildren(*Anchor95);

group->addChildren(*Transform52);

X3D0->setScene(*Scene10);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
