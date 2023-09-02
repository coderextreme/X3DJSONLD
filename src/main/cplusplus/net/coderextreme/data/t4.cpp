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
Ccomponent* component2 = new Ccomponent();
component2->setName("Networking");
component2->setLevel(2);
head1->addComponent(*component2);

Ccomponent* component3 = new Ccomponent();
component3->setName("Core");
component3->setLevel(2);
head1->addComponent(*component3);

Cmeta* meta4 = new Cmeta();
meta4->setName("title");
meta4->setContent("t4.x3d");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("identifier");
meta5->setContent("http://coderextreme.net/X3DJSONLD/src/main/data/t4.x3d");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("generator");
meta6->setContent("view3dscene, https://castle-engine.io/view3dscene.php");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("creator");
meta7->setContent("Andreas Plesch and John Carlson");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("source");
meta8->setContent("t1.wrl");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("description");
meta9->setContent("Test Case for Proto Expander");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("license");
meta10->setContent("https://www.web3d.org/x3d/content/examples/license.html");
head1->addMeta(*meta10);

X3D0->setHead(*head1);

CScene* Scene11 = new CScene();
CNavigationInfo* NavigationInfo12 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo12->setType(new CString[3]{"EXAMINE","FLY","WALK"}, 3);
NavigationInfo12->setSpeed(3);
NavigationInfo12->setAvatarSize(new float[3]{200,200,120}, 3);
group->addChildren(*NavigationInfo12);

CWorldInfo* WorldInfo13 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo13->setTitle("Arts Mapper");
group->addChildren(*WorldInfo13);

CViewpoint* Viewpoint14 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint14->setDescription("looking North");
Viewpoint14->setPosition(new float[3]{0,60,110});
Viewpoint14->setOrientation(new float[4]{1,0,0,-0.699999988079071});
Viewpoint14->setFieldOfView(0.785398125648499);
group->addChildren(*Viewpoint14);

CProtoDeclare ProtoDeclare15 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="org" ><ProtoInterface><field name="posi" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
<field name="col" accessType="initializeOnly" type="SFColor" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="posi"></connect>
</IS>
<Shape><Appearance><Material diffuseColor="1 1 1"><IS><connect nodeField="emissiveColor" protoField="col"></connect>
</IS>
</Material>
</Appearance>
<Sphere radius="5.10000002384186"></Sphere>
</Shape>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare15->setName("org");
CProtoInterface* ProtoInterface16 = new CProtoInterface();
Cfield* field17 = new Cfield();
field17->setName("posi");
field17->setAccessType("initializeOnly");
field17->setType("SFVec3f");
field17->setValue("0 0 0");
ProtoInterface16->addField(*field17);

Cfield* field18 = new Cfield();
field18->setName("col");
field18->setAccessType("initializeOnly");
field18->setType("SFColor");
field18->setValue("0 0 0");
ProtoInterface16->addField(*field18);

ProtoDeclare15->setProtoInterface(*ProtoInterface16);

CProtoBody* ProtoBody19 = new CProtoBody();
CTransform* Transform20 = (CTransform *)(m_pScene.createNode("Transform"));
CIS* IS21 = new CIS();
Cconnect* connect22 = new Cconnect();
connect22->setNodeField("translation");
connect22->setProtoField("posi");
IS21->addConnect(*connect22);

Transform20->setIS(*IS21);

CShape* Shape23 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance24 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material25 = (CMaterial *)(m_pScene.createNode("Material"));
Material25->setDiffuseColor(new float[3]{1,1,1});
CIS* IS26 = new CIS();
Cconnect* connect27 = new Cconnect();
connect27->setNodeField("emissiveColor");
connect27->setProtoField("col");
IS26->addConnect(*connect27);

Material25->setIS(*IS26);

Appearance24->setMaterial(*Material25);

Shape23->setAppearance(*Appearance24);

CSphere* Sphere28 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere28->setRadius(5.10000002384186);
Shape23->setGeometry(Sphere28);

Transform20->addChild(*Shape23);

ProtoBody19->addChildren(*Transform20);

ProtoDeclare15->setProtoBody(*ProtoBody19);

group->addChildren(*ProtoDeclare15);

CProtoDeclare ProtoDeclare29 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="r" ><ProtoInterface><field name="pos" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><ProtoInstance name="org"><fieldValue name="col" value="0 0.300000011920929 1"></fieldValue>
<IS><connect nodeField="posi" protoField="pos"></connect>
</IS>
</ProtoInstance>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare29->setName("r");
CProtoInterface* ProtoInterface30 = new CProtoInterface();
Cfield* field31 = new Cfield();
field31->setName("pos");
field31->setAccessType("initializeOnly");
field31->setType("SFVec3f");
field31->setValue("0 0 0");
ProtoInterface30->addField(*field31);

ProtoDeclare29->setProtoInterface(*ProtoInterface30);

CProtoBody* ProtoBody32 = new CProtoBody();
CProtoInstance* ProtoInstance33 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance33->setName("org");
CfieldValue* fieldValue34 = new CfieldValue();
fieldValue34->setName("col");
fieldValue34->setValue("0 0.300000011920929 1");
ProtoInstance33->addFieldValue(*fieldValue34);

CIS* IS35 = new CIS();
Cconnect* connect36 = new Cconnect();
connect36->setNodeField("posi");
connect36->setProtoField("pos");
IS35->addConnect(*connect36);

ProtoInstance33->setIS(*IS35);

ProtoBody32->addChildren(*ProtoInstance33);

ProtoDeclare29->setProtoBody(*ProtoBody32);

group->addChildren(*ProtoDeclare29);

CProtoDeclare ProtoDeclare37 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="n" ><ProtoInterface><field name="pos" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><ProtoInstance name="org"><fieldValue name="col" value="1 0 0.200000002980232"></fieldValue>
<IS><connect nodeField="posi" protoField="pos"></connect>
</IS>
</ProtoInstance>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare37->setName("n");
CProtoInterface* ProtoInterface38 = new CProtoInterface();
Cfield* field39 = new Cfield();
field39->setName("pos");
field39->setAccessType("initializeOnly");
field39->setType("SFVec3f");
field39->setValue("0 0 0");
ProtoInterface38->addField(*field39);

ProtoDeclare37->setProtoInterface(*ProtoInterface38);

CProtoBody* ProtoBody40 = new CProtoBody();
CProtoInstance* ProtoInstance41 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance41->setName("org");
CfieldValue* fieldValue42 = new CfieldValue();
fieldValue42->setName("col");
fieldValue42->setValue("1 0 0.200000002980232");
ProtoInstance41->addFieldValue(*fieldValue42);

CIS* IS43 = new CIS();
Cconnect* connect44 = new Cconnect();
connect44->setNodeField("posi");
connect44->setProtoField("pos");
IS43->addConnect(*connect44);

ProtoInstance41->setIS(*IS43);

ProtoBody40->addChildren(*ProtoInstance41);

ProtoDeclare37->setProtoBody(*ProtoBody40);

group->addChildren(*ProtoDeclare37);

CProtoDeclare ProtoDeclare45 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="i" ><ProtoInterface><field name="pos" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><ProtoInstance name="org"><fieldValue name="col" value="0.600000023841858 0 0.600000023841858"></fieldValue>
<IS><connect nodeField="posi" protoField="pos"></connect>
</IS>
</ProtoInstance>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare45->setName("i");
CProtoInterface* ProtoInterface46 = new CProtoInterface();
Cfield* field47 = new Cfield();
field47->setName("pos");
field47->setAccessType("initializeOnly");
field47->setType("SFVec3f");
field47->setValue("0 0 0");
ProtoInterface46->addField(*field47);

ProtoDeclare45->setProtoInterface(*ProtoInterface46);

CProtoBody* ProtoBody48 = new CProtoBody();
CProtoInstance* ProtoInstance49 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance49->setName("org");
CfieldValue* fieldValue50 = new CfieldValue();
fieldValue50->setName("col");
fieldValue50->setValue("0.600000023841858 0 0.600000023841858");
ProtoInstance49->addFieldValue(*fieldValue50);

CIS* IS51 = new CIS();
Cconnect* connect52 = new Cconnect();
connect52->setNodeField("posi");
connect52->setProtoField("pos");
IS51->addConnect(*connect52);

ProtoInstance49->setIS(*IS51);

ProtoBody48->addChildren(*ProtoInstance49);

ProtoDeclare45->setProtoBody(*ProtoBody48);

group->addChildren(*ProtoDeclare45);

CTransform* Transform53 = (CTransform *)(m_pScene.createNode("Transform"));
Transform53->setTranslation(new float[3]{-468,0,315});
CAnchor* Anchor54 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor54->setUrl(new CString[2]{", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
Anchor54->setDescription("High Peak Community Arts");
CProtoInstance* ProtoInstance55 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance55->setName("r");
CfieldValue* fieldValue56 = new CfieldValue();
fieldValue56->setName("pos");
fieldValue56->setValue("400 0.100000001490116 -385");
ProtoInstance55->addFieldValue(*fieldValue56);

Anchor54->addChildren(*ProtoInstance55);

Transform53->addChildren(*Anchor54);

CAnchor* Anchor57 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor57->setUrl(new CString[2]{", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
Anchor57->setDescription("People Express");
CProtoInstance* ProtoInstance58 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance58->setName("i");
CfieldValue* fieldValue59 = new CfieldValue();
fieldValue59->setName("pos");
fieldValue59->setValue("429.899993896484 0.100000001490116 -319.600006103516");
ProtoInstance58->addFieldValue(*fieldValue59);

Anchor57->addChildren(*ProtoInstance58);

Transform53->addChildren(*Anchor57);

CAnchor* Anchor60 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor60->setUrl(new CString[2]{", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
Anchor60->setDescription("QArts/Studios");
CProtoInstance* ProtoInstance61 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance61->setName("i");
CfieldValue* fieldValue62 = new CfieldValue();
fieldValue62->setName("pos");
fieldValue62->setValue("430 0.100000001490116 -335");
ProtoInstance61->addFieldValue(*fieldValue62);

Anchor60->addChildren(*ProtoInstance61);

Transform53->addChildren(*Anchor60);

CAnchor* Anchor63 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor63->setUrl(new CString[2]{", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
Anchor63->setDescription("First Movement");
CProtoInstance* ProtoInstance64 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance64->setName("n");
CfieldValue* fieldValue65 = new CfieldValue();
fieldValue65->setName("pos");
fieldValue65->setValue("429.899993896484 0.100000001490116 -360.299987792969");
ProtoInstance64->addFieldValue(*fieldValue65);

Anchor63->addChildren(*ProtoInstance64);

Transform53->addChildren(*Anchor63);

CAnchor* Anchor66 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor66->setUrl(new CString[2]{", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
Anchor66->setDescription("City Arts");
CProtoInstance* ProtoInstance67 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance67->setName("i");
CfieldValue* fieldValue68 = new CfieldValue();
fieldValue68->setName("pos");
fieldValue68->setValue("455.899993896484 0.100000001490116 -341.299987792969");
ProtoInstance67->addFieldValue(*fieldValue68);

Anchor66->addChildren(*ProtoInstance67);

Transform53->addChildren(*Anchor66);

CAnchor* Anchor69 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor69->setUrl(new CString[2]{", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
Anchor69->setDescription("Indigo Dance Group (Salamanda Tandem)");
CProtoInstance* ProtoInstance70 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance70->setName("r");
CfieldValue* fieldValue71 = new CfieldValue();
fieldValue71->setName("pos");
fieldValue71->setValue("456.100006103516 0.100000001490116 -341.5");
ProtoInstance70->addFieldValue(*fieldValue71);

Anchor69->addChildren(*ProtoInstance70);

Transform53->addChildren(*Anchor69);

CAnchor* Anchor72 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor72->setUrl(new CString[2]{", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
Anchor72->setDescription("Watering Seeds");
CProtoInstance* ProtoInstance73 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance73->setName("r");
CfieldValue* fieldValue74 = new CfieldValue();
fieldValue74->setName("pos");
fieldValue74->setValue("454 0.100000001490116 -361.299987792969");
ProtoInstance73->addFieldValue(*fieldValue74);

Anchor72->addChildren(*ProtoInstance73);

Transform53->addChildren(*Anchor72);

CAnchor* Anchor75 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor75->setUrl(new CString[2]{", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
Anchor75->setDescription("Fased In The Arts");
CProtoInstance* ProtoInstance76 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance76->setName("r");
CfieldValue* fieldValue77 = new CfieldValue();
fieldValue77->setName("pos");
fieldValue77->setValue("440 0.100000001490116 -350");
ProtoInstance76->addFieldValue(*fieldValue77);

Anchor75->addChildren(*ProtoInstance76);

Transform53->addChildren(*Anchor75);

CAnchor* Anchor78 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor78->setUrl(new CString[2]{", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
Anchor78->setDescription("27a Access Artspace");
CProtoInstance* ProtoInstance79 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance79->setName("n");
CfieldValue* fieldValue80 = new CfieldValue();
fieldValue80->setName("pos");
fieldValue80->setValue("458.899993896484 0.100000001490116 -304.299987792969");
ProtoInstance79->addFieldValue(*fieldValue80);

Anchor78->addChildren(*ProtoInstance79);

Transform53->addChildren(*Anchor78);

CAnchor* Anchor81 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor81->setUrl(new CString[2]{", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
Anchor81->setDescription("Bamboozle Theatre Company");
CProtoInstance* ProtoInstance82 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance82->setName("r");
CfieldValue* fieldValue83 = new CfieldValue();
fieldValue83->setName("pos");
fieldValue83->setValue("457.100006103516 0.100000001490116 -300.799987792969");
ProtoInstance82->addFieldValue(*fieldValue83);

Anchor81->addChildren(*ProtoInstance82);

Transform53->addChildren(*Anchor81);

CAnchor* Anchor84 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor84->setUrl(new CString[2]{", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
Anchor84->setDescription("Mantle Community Arts");
CProtoInstance* ProtoInstance85 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance85->setName("r");
CfieldValue* fieldValue86 = new CfieldValue();
fieldValue86->setName("pos");
fieldValue86->setValue("442.399993896484 0.100000001490116 -314.5");
ProtoInstance85->addFieldValue(*fieldValue86);

Anchor84->addChildren(*ProtoInstance85);

Transform53->addChildren(*Anchor84);

CAnchor* Anchor87 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor87->setUrl(new CString[2]{", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
Anchor87->setDescription("Artlink East");
CProtoInstance* ProtoInstance88 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance88->setName("r");
CfieldValue* fieldValue89 = new CfieldValue();
fieldValue89->setName("pos");
fieldValue89->setValue("491.600006103516 0.100000001490116 -335.700012207031");
ProtoInstance88->addFieldValue(*fieldValue89);

Anchor87->addChildren(*ProtoInstance88);

Transform53->addChildren(*Anchor87);

CAnchor* Anchor90 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor90->setUrl(new CString[2]{", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
Anchor90->setDescription("Creations");
CProtoInstance* ProtoInstance91 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance91->setName("r");
CfieldValue* fieldValue92 = new CfieldValue();
fieldValue92->setName("pos");
fieldValue92->setValue("467 0.100000001490116 -243.899993896484");
ProtoInstance91->addFieldValue(*fieldValue92);

Anchor90->addChildren(*ProtoInstance91);

Transform53->addChildren(*Anchor90);

CAnchor* Anchor93 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor93->setUrl(new CString[2]{", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
Anchor93->setDescription("New Perspectives");
CProtoInstance* ProtoInstance94 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance94->setName("n");
CfieldValue* fieldValue95 = new CfieldValue();
fieldValue95->setName("pos");
fieldValue95->setValue("457.399993896484 0.100000001490116 -262.700012207031");
ProtoInstance94->addFieldValue(*fieldValue95);

Anchor93->addChildren(*ProtoInstance94);

Transform53->addChildren(*Anchor93);

CAnchor* Anchor96 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor96->setUrl(new CString[2]{", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
Anchor96->setDescription("UKan2");
CProtoInstance* ProtoInstance97 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance97->setName("r");
CfieldValue* fieldValue98 = new CfieldValue();
fieldValue98->setName("pos");
fieldValue98->setValue("458.700012207031 0.100000001490116 -262.700012207031");
ProtoInstance97->addFieldValue(*fieldValue98);

Anchor96->addChildren(*ProtoInstance97);

Transform53->addChildren(*Anchor96);

group->addChildren(*Transform53);

X3D0->setScene(*Scene11);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
