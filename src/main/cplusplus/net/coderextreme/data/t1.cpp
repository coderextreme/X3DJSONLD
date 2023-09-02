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
X3D0->setProfile("Interchange");
X3D0->setVersion("3.0");
Chead* head1 = new Chead();
Cmeta* meta2 = new Cmeta();
meta2->setName("generator");
meta2->setContent("tovrmlx3d, http://castle-engine.sourceforge.net/view3dscene.php#section_converting");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("source");
meta3->setContent("t1.wrl");
head1->addMeta(*meta3);

X3D0->setHead(*head1);

CScene* Scene4 = new CScene();
CNavigationInfo* NavigationInfo5 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo5->setType(new CString[3]{"EXAMINE","FLY","WALK"}, 3);
NavigationInfo5->setSpeed(3);
NavigationInfo5->setAvatarSize(new float[3]{200,200,120}, 3);
group->addChildren(*NavigationInfo5);

CWorldInfo* WorldInfo6 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo6->setTitle("Arts Mapper");
group->addChildren(*WorldInfo6);

CViewpoint* Viewpoint7 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint7->setDescription("looking North");
Viewpoint7->setPosition(new float[3]{0,60,110});
Viewpoint7->setOrientation(new float[4]{1,0,0,-0.699999988079071});
Viewpoint7->setFieldOfView(0.7853981256484985);
group->addChildren(*Viewpoint7);

CViewpoint* Viewpoint8 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint8->setDescription("looking East");
Viewpoint8->setPosition(new float[3]{-140,30,0});
Viewpoint8->setOrientation(new float[4]{0,0.4000000059604645,0,-1.399999976158142});
Viewpoint8->setFieldOfView(0.7853981256484985);
group->addChildren(*Viewpoint8);

CViewpoint* Viewpoint9 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint9->setDescription("Overhead");
Viewpoint9->setPosition(new float[3]{0,150,0});
Viewpoint9->setOrientation(new float[4]{1,0,0,-1.5700000524520874});
Viewpoint9->setFieldOfView(0.7853981256484985);
group->addChildren(*Viewpoint9);

CProtoDeclare ProtoDeclare10 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="school" ><ProtoInterface><field name="pos" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Transform><Shape><Appearance><Material transparency="0.20000000298023224" diffuseColor="0.5 0 1"></Material>
</Appearance>
<IndexedFaceSet coordIndex="0 1 4 -1 1 2 4 -1 2 3 4 -1 3 0 4 -1 0 3 2 1 -1"><Coordinate containerField="coord" point="-0.3499999940395355 -0.3499999940395355 0.3499999940395355 0.3499999940395355 -0.3499999940395355 0.3499999940395355 0.3499999940395355 -0.3499999940395355 -0.3499999940395355 -0.3499999940395355 -0.3499999940395355 -0.3499999940395355 0 0.3499999940395355 0"></Coordinate>
</IndexedFaceSet>
</Shape>
<IS><connect nodeField="translation" protoField="pos"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare10->setName("school");
CProtoInterface* ProtoInterface11 = new CProtoInterface();
Cfield* field12 = new Cfield();
field12->setName("pos");
field12->setAccessType("initializeOnly");
field12->setType("SFVec3f");
field12->setValue("0 0 0");
ProtoInterface11->addField(*field12);

ProtoDeclare10->setProtoInterface(*ProtoInterface11);

CProtoBody* ProtoBody13 = new CProtoBody();
CTransform* Transform14 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape15 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance16 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material17 = (CMaterial *)(m_pScene.createNode("Material"));
Material17->setTransparency(0.20000000298023224);
Material17->setDiffuseColor(new float[3]{0.5,0,1});
Appearance16->setMaterial(*Material17);

Shape15->setAppearance(*Appearance16);

CIndexedFaceSet* IndexedFaceSet18 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet18->setCoordIndex(new int[21]{0,1,4,-1,1,2,4,-1,2,3,4,-1,3,0,4,-1,0,3,2,1,-1});
CCoordinate* Coordinate19 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate19->setPoint(new float[15]{-0.3499999940395355,-0.3499999940395355,0.3499999940395355,0.3499999940395355,-0.3499999940395355,0.3499999940395355,0.3499999940395355,-0.3499999940395355,-0.3499999940395355,-0.3499999940395355,-0.3499999940395355,-0.3499999940395355,0,0.3499999940395355,0});
IndexedFaceSet18->setCoord(*Coordinate19);

Shape15->setGeometry(IndexedFaceSet18);

Transform14->addChild(*Shape15);

CIS* IS20 = new CIS();
Cconnect* connect21 = new Cconnect();
connect21->setNodeField("translation");
connect21->setProtoField("pos");
IS20->addConnect(*connect21);

Transform14->setIS(*IS20);

ProtoBody13->addChildren(*Transform14);

ProtoDeclare10->setProtoBody(*ProtoBody13);

group->addChildren(*ProtoDeclare10);

CProtoDeclare ProtoDeclare22 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="institute" ><ProtoInterface><field name="pos" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Transform><Shape><Appearance><Material transparency="0.20000000298023224" diffuseColor="1 1 0"></Material>
</Appearance>
<Box size="0.699999988079071 0.699999988079071 0.699999988079071"></Box>
</Shape>
<IS><connect nodeField="translation" protoField="pos"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare22->setName("institute");
CProtoInterface* ProtoInterface23 = new CProtoInterface();
Cfield* field24 = new Cfield();
field24->setName("pos");
field24->setAccessType("initializeOnly");
field24->setType("SFVec3f");
field24->setValue("0 0 0");
ProtoInterface23->addField(*field24);

ProtoDeclare22->setProtoInterface(*ProtoInterface23);

CProtoBody* ProtoBody25 = new CProtoBody();
CTransform* Transform26 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape27 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance28 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material29 = (CMaterial *)(m_pScene.createNode("Material"));
Material29->setTransparency(0.20000000298023224);
Material29->setDiffuseColor(new float[3]{1,1,0});
Appearance28->setMaterial(*Material29);

Shape27->setAppearance(*Appearance28);

CBox* Box30 = (CBox *)(m_pScene.createNode("Box"));
Box30->setSize(new float[3]{0.699999988079071,0.699999988079071,0.699999988079071});
Shape27->setGeometry(Box30);

Transform26->addChild(*Shape27);

CIS* IS31 = new CIS();
Cconnect* connect32 = new Cconnect();
connect32->setNodeField("translation");
connect32->setProtoField("pos");
IS31->addConnect(*connect32);

Transform26->setIS(*IS31);

ProtoBody25->addChildren(*Transform26);

ProtoDeclare22->setProtoBody(*ProtoBody25);

group->addChildren(*ProtoDeclare22);

CProtoDeclare ProtoDeclare33 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="disart_org" ><ProtoInterface><field name="pos" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Transform><Shape><Appearance><Material diffuseColor="1 1 0"></Material>
</Appearance>
<Sphere radius="0.699999988079071"></Sphere>
</Shape>
<IS><connect nodeField="translation" protoField="pos"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare33->setName("disart_org");
CProtoInterface* ProtoInterface34 = new CProtoInterface();
Cfield* field35 = new Cfield();
field35->setName("pos");
field35->setAccessType("initializeOnly");
field35->setType("SFVec3f");
field35->setValue("0 0 0");
ProtoInterface34->addField(*field35);

ProtoDeclare33->setProtoInterface(*ProtoInterface34);

CProtoBody* ProtoBody36 = new CProtoBody();
CTransform* Transform37 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape38 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance39 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material40 = (CMaterial *)(m_pScene.createNode("Material"));
Material40->setDiffuseColor(new float[3]{1,1,0});
Appearance39->setMaterial(*Material40);

Shape38->setAppearance(*Appearance39);

CSphere* Sphere41 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere41->setRadius(0.699999988079071);
Shape38->setGeometry(Sphere41);

Transform37->addChild(*Shape38);

CIS* IS42 = new CIS();
Cconnect* connect43 = new Cconnect();
connect43->setNodeField("translation");
connect43->setProtoField("pos");
IS42->addConnect(*connect43);

Transform37->setIS(*IS42);

ProtoBody36->addChildren(*Transform37);

ProtoDeclare33->setProtoBody(*ProtoBody36);

group->addChildren(*ProtoDeclare33);

CProtoDeclare ProtoDeclare44 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="org" ><ProtoInterface><field name="posi" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
<field name="col" accessType="initializeOnly" type="SFColor" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Transform><Shape><Appearance><Material transparency="0.4000000059604645"><IS><connect nodeField="emissiveColor" protoField="col"></connect>
</IS>
</Material>
</Appearance>
<Sphere radius="1.100000023841858"></Sphere>
</Shape>
<IS><connect nodeField="translation" protoField="posi"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare44->setName("org");
CProtoInterface* ProtoInterface45 = new CProtoInterface();
Cfield* field46 = new Cfield();
field46->setName("posi");
field46->setAccessType("initializeOnly");
field46->setType("SFVec3f");
field46->setValue("0 0 0");
ProtoInterface45->addField(*field46);

Cfield* field47 = new Cfield();
field47->setName("col");
field47->setAccessType("initializeOnly");
field47->setType("SFColor");
field47->setValue("0 0 0");
ProtoInterface45->addField(*field47);

ProtoDeclare44->setProtoInterface(*ProtoInterface45);

CProtoBody* ProtoBody48 = new CProtoBody();
CTransform* Transform49 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape50 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance51 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material52 = (CMaterial *)(m_pScene.createNode("Material"));
Material52->setTransparency(0.4000000059604645);
CIS* IS53 = new CIS();
Cconnect* connect54 = new Cconnect();
connect54->setNodeField("emissiveColor");
connect54->setProtoField("col");
IS53->addConnect(*connect54);

Material52->setIS(*IS53);

Appearance51->setMaterial(*Material52);

Shape50->setAppearance(*Appearance51);

CSphere* Sphere55 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere55->setRadius(1.100000023841858);
Shape50->setGeometry(Sphere55);

Transform49->addChild(*Shape50);

CIS* IS56 = new CIS();
Cconnect* connect57 = new Cconnect();
connect57->setNodeField("translation");
connect57->setProtoField("posi");
IS56->addConnect(*connect57);

Transform49->setIS(*IS56);

ProtoBody48->addChildren(*Transform49);

ProtoDeclare44->setProtoBody(*ProtoBody48);

group->addChildren(*ProtoDeclare44);

CProtoDeclare ProtoDeclare58 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="l" ><ProtoInterface><field name="pos" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><ProtoInstance name="org"><fieldValue name="col" value="0 0.6000000238418579 0"></fieldValue>
<IS><connect nodeField="posi" protoField="pos"></connect>
</IS>
</ProtoInstance>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare58->setName("l");
CProtoInterface* ProtoInterface59 = new CProtoInterface();
Cfield* field60 = new Cfield();
field60->setName("pos");
field60->setAccessType("initializeOnly");
field60->setType("SFVec3f");
field60->setValue("0 0 0");
ProtoInterface59->addField(*field60);

ProtoDeclare58->setProtoInterface(*ProtoInterface59);

CProtoBody* ProtoBody61 = new CProtoBody();
CProtoInstance* ProtoInstance62 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance62->setName("org");
CfieldValue* fieldValue63 = new CfieldValue();
fieldValue63->setName("col");
fieldValue63->setValue("0 0.6000000238418579 0");
ProtoInstance62->addFieldValue(*fieldValue63);

CIS* IS64 = new CIS();
Cconnect* connect65 = new Cconnect();
connect65->setNodeField("posi");
connect65->setProtoField("pos");
IS64->addConnect(*connect65);

ProtoInstance62->setIS(*IS64);

ProtoBody61->addChildren(*ProtoInstance62);

ProtoDeclare58->setProtoBody(*ProtoBody61);

group->addChildren(*ProtoDeclare58);

CProtoDeclare ProtoDeclare66 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="r" ><ProtoInterface><field name="pos" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><ProtoInstance name="org"><fieldValue name="col" value="0 0.30000001192092896 1"></fieldValue>
<IS><connect nodeField="posi" protoField="pos"></connect>
</IS>
</ProtoInstance>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare66->setName("r");
CProtoInterface* ProtoInterface67 = new CProtoInterface();
Cfield* field68 = new Cfield();
field68->setName("pos");
field68->setAccessType("initializeOnly");
field68->setType("SFVec3f");
field68->setValue("0 0 0");
ProtoInterface67->addField(*field68);

ProtoDeclare66->setProtoInterface(*ProtoInterface67);

CProtoBody* ProtoBody69 = new CProtoBody();
CProtoInstance* ProtoInstance70 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance70->setName("org");
CfieldValue* fieldValue71 = new CfieldValue();
fieldValue71->setName("col");
fieldValue71->setValue("0 0.30000001192092896 1");
ProtoInstance70->addFieldValue(*fieldValue71);

CIS* IS72 = new CIS();
Cconnect* connect73 = new Cconnect();
connect73->setNodeField("posi");
connect73->setProtoField("pos");
IS72->addConnect(*connect73);

ProtoInstance70->setIS(*IS72);

ProtoBody69->addChildren(*ProtoInstance70);

ProtoDeclare66->setProtoBody(*ProtoBody69);

group->addChildren(*ProtoDeclare66);

CProtoDeclare ProtoDeclare74 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="n" ><ProtoInterface><field name="pos" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><ProtoInstance name="org"><fieldValue name="col" value="1 0 0.20000000298023224"></fieldValue>
<IS><connect nodeField="posi" protoField="pos"></connect>
</IS>
</ProtoInstance>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare74->setName("n");
CProtoInterface* ProtoInterface75 = new CProtoInterface();
Cfield* field76 = new Cfield();
field76->setName("pos");
field76->setAccessType("initializeOnly");
field76->setType("SFVec3f");
field76->setValue("0 0 0");
ProtoInterface75->addField(*field76);

ProtoDeclare74->setProtoInterface(*ProtoInterface75);

CProtoBody* ProtoBody77 = new CProtoBody();
CProtoInstance* ProtoInstance78 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance78->setName("org");
CfieldValue* fieldValue79 = new CfieldValue();
fieldValue79->setName("col");
fieldValue79->setValue("1 0 0.20000000298023224");
ProtoInstance78->addFieldValue(*fieldValue79);

CIS* IS80 = new CIS();
Cconnect* connect81 = new Cconnect();
connect81->setNodeField("posi");
connect81->setProtoField("pos");
IS80->addConnect(*connect81);

ProtoInstance78->setIS(*IS80);

ProtoBody77->addChildren(*ProtoInstance78);

ProtoDeclare74->setProtoBody(*ProtoBody77);

group->addChildren(*ProtoDeclare74);

CProtoDeclare ProtoDeclare82 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="i" ><ProtoInterface><field name="pos" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><ProtoInstance name="org"><fieldValue name="col" value="0.6000000238418579 0 0.6000000238418579"></fieldValue>
<IS><connect nodeField="posi" protoField="pos"></connect>
</IS>
</ProtoInstance>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare82->setName("i");
CProtoInterface* ProtoInterface83 = new CProtoInterface();
Cfield* field84 = new Cfield();
field84->setName("pos");
field84->setAccessType("initializeOnly");
field84->setType("SFVec3f");
field84->setValue("0 0 0");
ProtoInterface83->addField(*field84);

ProtoDeclare82->setProtoInterface(*ProtoInterface83);

CProtoBody* ProtoBody85 = new CProtoBody();
CProtoInstance* ProtoInstance86 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance86->setName("org");
CfieldValue* fieldValue87 = new CfieldValue();
fieldValue87->setName("col");
fieldValue87->setValue("0.6000000238418579 0 0.6000000238418579");
ProtoInstance86->addFieldValue(*fieldValue87);

CIS* IS88 = new CIS();
Cconnect* connect89 = new Cconnect();
connect89->setNodeField("posi");
connect89->setProtoField("pos");
IS88->addConnect(*connect89);

ProtoInstance86->setIS(*IS88);

ProtoBody85->addChildren(*ProtoInstance86);

ProtoDeclare82->setProtoBody(*ProtoBody85);

group->addChildren(*ProtoDeclare82);

CTransform* Transform90 = (CTransform *)(m_pScene.createNode("Transform"));
Transform90->setTranslation(new float[3]{-468,0,315});
CInline* Inline91 = (CInline *)(m_pScene.createNode("Inline"));
Inline91->setUrl(new CString[1]{"t.wrl"}, 1);
Transform90->addChildren(*Inline91);

CAnchor* Anchor92 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor92->setUrl(new CString[1]{"javascript:window.open('./data/566.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor92->setDescription("Derby Women's Centre");
CProtoInstance* ProtoInstance93 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance93->setName("institute");
CfieldValue* fieldValue94 = new CfieldValue();
fieldValue94->setName("pos");
fieldValue94->setValue("435.29998779296875 0.10000000149011612 -335.6000061035156");
ProtoInstance93->addFieldValue(*fieldValue94);

Anchor92->addChildren(*ProtoInstance93);

Transform90->addChildren(*Anchor92);

CAnchor* Anchor95 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor95->setUrl(new CString[1]{"javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor95->setDescription("High Peak Community Arts");
CProtoInstance* ProtoInstance96 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance96->setName("r");
CfieldValue* fieldValue97 = new CfieldValue();
fieldValue97->setName("pos");
fieldValue97->setValue("400 0.10000000149011612 -385");
ProtoInstance96->addFieldValue(*fieldValue97);

Anchor95->addChildren(*ProtoInstance96);

Transform90->addChildren(*Anchor95);

CAnchor* Anchor98 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor98->setUrl(new CString[1]{"javascript:window.open('./data/576.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor98->setDescription("Charlesworth Primary School");
CProtoInstance* ProtoInstance99 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance99->setName("school");
CfieldValue* fieldValue100 = new CfieldValue();
fieldValue100->setName("pos");
fieldValue100->setValue("400.6000061035156 0.10000000149011612 -392.8999938964844");
ProtoInstance99->addFieldValue(*fieldValue100);

Anchor98->addChildren(*ProtoInstance99);

Transform90->addChildren(*Anchor98);

CAnchor* Anchor101 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor101->setUrl(new CString[1]{"javascript:window.open('./data/579.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor101->setDescription("Hope Valley College");
CProtoInstance* ProtoInstance102 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance102->setName("school");
CfieldValue* fieldValue103 = new CfieldValue();
fieldValue103->setName("pos");
fieldValue103->setValue("416.70001220703125 0.10000000149011612 -383.3999938964844");
ProtoInstance102->addFieldValue(*fieldValue103);

Anchor101->addChildren(*ProtoInstance102);

Transform90->addChildren(*Anchor101);

CAnchor* Anchor104 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor104->setUrl(new CString[1]{"javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor104->setDescription("People Express");
CProtoInstance* ProtoInstance105 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance105->setName("i");
CfieldValue* fieldValue106 = new CfieldValue();
fieldValue106->setName("pos");
fieldValue106->setValue("429.8999938964844 0.10000000149011612 -319.6000061035156");
ProtoInstance105->addFieldValue(*fieldValue106);

Anchor104->addChildren(*ProtoInstance105);

Transform90->addChildren(*Anchor104);

CAnchor* Anchor107 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor107->setUrl(new CString[1]{"javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor107->setDescription("QArts/Studios");
CProtoInstance* ProtoInstance108 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance108->setName("i");
CfieldValue* fieldValue109 = new CfieldValue();
fieldValue109->setName("pos");
fieldValue109->setValue("430 0.10000000149011612 -335");
ProtoInstance108->addFieldValue(*fieldValue109);

Anchor107->addChildren(*ProtoInstance108);

Transform90->addChildren(*Anchor107);

CAnchor* Anchor110 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor110->setUrl(new CString[1]{"javascript:window.open('./data/591.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor110->setDescription("Stroke Unit, Derbyshire Royal Infirmary");
CProtoInstance* ProtoInstance111 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance111->setName("institute");
CfieldValue* fieldValue112 = new CfieldValue();
fieldValue112->setName("pos");
fieldValue112->setValue("435.79998779296875 0.10000000149011612 -335.29998779296875");
ProtoInstance111->addFieldValue(*fieldValue112);

Anchor110->addChildren(*ProtoInstance111);

Transform90->addChildren(*Anchor110);

CAnchor* Anchor113 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor113->setUrl(new CString[1]{"javascript:window.open('./data/592.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor113->setDescription("Park View Primary, Derby");
CProtoInstance* ProtoInstance114 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance114->setName("school");
CfieldValue* fieldValue115 = new CfieldValue();
fieldValue115->setName("pos");
fieldValue115->setValue("438.29998779296875 0.10000000149011612 -338.6000061035156");
ProtoInstance114->addFieldValue(*fieldValue115);

Anchor113->addChildren(*ProtoInstance114);

Transform90->addChildren(*Anchor113);

CAnchor* Anchor116 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor116->setUrl(new CString[1]{"javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor116->setDescription("First Movement");
CProtoInstance* ProtoInstance117 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance117->setName("n");
CfieldValue* fieldValue118 = new CfieldValue();
fieldValue118->setName("pos");
fieldValue118->setValue("429.8999938964844 0.10000000149011612 -360.29998779296875");
ProtoInstance117->addFieldValue(*fieldValue118);

Anchor116->addChildren(*ProtoInstance117);

Transform90->addChildren(*Anchor116);

CAnchor* Anchor119 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor119->setUrl(new CString[1]{"javascript:window.open('./data/594.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor119->setDescription("St. Benedict R.C. School, Visual Impairment Unit");
CProtoInstance* ProtoInstance120 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance120->setName("institute");
CfieldValue* fieldValue121 = new CfieldValue();
fieldValue121->setName("pos");
fieldValue121->setValue("434.6000061035156 0.10000000149011612 -338.6000061035156");
ProtoInstance120->addFieldValue(*fieldValue121);

Anchor119->addChildren(*ProtoInstance120);

Transform90->addChildren(*Anchor119);

CAnchor* Anchor122 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor122->setUrl(new CString[1]{"javascript:window.open('./data/595.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor122->setDescription("Beckett Primary, Derby");
CProtoInstance* ProtoInstance123 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance123->setName("school");
CfieldValue* fieldValue124 = new CfieldValue();
fieldValue124->setName("pos");
fieldValue124->setValue("434.79998779296875 0.10000000149011612 -336");
ProtoInstance123->addFieldValue(*fieldValue124);

Anchor122->addChildren(*ProtoInstance123);

Transform90->addChildren(*Anchor122);

CAnchor* Anchor125 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor125->setUrl(new CString[1]{"javascript:window.open('./data/597.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor125->setDescription("Brackensdale Junior School, Communty Unit");
CProtoInstance* ProtoInstance126 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance126->setName("institute");
CfieldValue* fieldValue127 = new CfieldValue();
fieldValue127->setName("pos");
fieldValue127->setValue("432.70001220703125 0.10000000149011612 -336.6000061035156");
ProtoInstance126->addFieldValue(*fieldValue127);

Anchor125->addChildren(*ProtoInstance126);

Transform90->addChildren(*Anchor125);

CAnchor* Anchor128 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor128->setUrl(new CString[1]{"javascript:window.open('./data/598.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor128->setDescription("Moorhead Primary, Derby");
CProtoInstance* ProtoInstance129 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance129->setName("school");
CfieldValue* fieldValue130 = new CfieldValue();
fieldValue130->setName("pos");
fieldValue130->setValue("437.6000061035156 0.10000000149011612 -332.6000061035156");
ProtoInstance129->addFieldValue(*fieldValue130);

Anchor128->addChildren(*ProtoInstance129);

Transform90->addChildren(*Anchor128);

CAnchor* Anchor131 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor131->setUrl(new CString[1]{"javascript:window.open('./data/600.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor131->setDescription("Derby Deaf Club");
CProtoInstance* ProtoInstance132 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance132->setName("institute");
CfieldValue* fieldValue133 = new CfieldValue();
fieldValue133->setName("pos");
fieldValue133->setValue("434.70001220703125 0.10000000149011612 -336.8999938964844");
ProtoInstance132->addFieldValue(*fieldValue133);

Anchor131->addChildren(*ProtoInstance132);

Transform90->addChildren(*Anchor131);

CAnchor* Anchor134 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor134->setUrl(new CString[1]{"javascript:window.open('./data/601.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor134->setDescription("Nightingale Junior, Derby");
CProtoInstance* ProtoInstance135 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance135->setName("school");
CfieldValue* fieldValue136 = new CfieldValue();
fieldValue136->setName("pos");
fieldValue136->setValue("436.29998779296875 0.10000000149011612 -333.3999938964844");
ProtoInstance135->addFieldValue(*fieldValue136);

Anchor134->addChildren(*ProtoInstance135);

Transform90->addChildren(*Anchor134);

CAnchor* Anchor137 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor137->setUrl(new CString[1]{"javascript:window.open('./data/603.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor137->setDescription("St Mary's Primary, Derby");
CProtoInstance* ProtoInstance138 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance138->setName("school");
CfieldValue* fieldValue139 = new CfieldValue();
fieldValue139->setName("pos");
fieldValue139->setValue("435.20001220703125 0.10000000149011612 -336.79998779296875");
ProtoInstance138->addFieldValue(*fieldValue139);

Anchor137->addChildren(*ProtoInstance138);

Transform90->addChildren(*Anchor137);

CAnchor* Anchor140 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor140->setUrl(new CString[1]{"javascript:window.open('./data/604.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor140->setDescription("Griffe Field Primary, Derby");
CProtoInstance* ProtoInstance141 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance141->setName("school");
CfieldValue* fieldValue142 = new CfieldValue();
fieldValue142->setName("pos");
fieldValue142->setValue("432.5 0.10000000149011612 -332.5");
ProtoInstance141->addFieldValue(*fieldValue142);

Anchor140->addChildren(*ProtoInstance141);

Transform90->addChildren(*Anchor140);

CAnchor* Anchor143 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor143->setUrl(new CString[1]{"javascript:window.open('./data/605.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor143->setDescription("Leicester Road Day Centre, Melton Mowbray");
CProtoInstance* ProtoInstance144 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance144->setName("institute");
CfieldValue* fieldValue145 = new CfieldValue();
fieldValue145->setName("pos");
fieldValue145->setValue("474.70001220703125 0.10000000149011612 -318.79998779296875");
ProtoInstance144->addFieldValue(*fieldValue145);

Anchor143->addChildren(*ProtoInstance144);

Transform90->addChildren(*Anchor143);

CAnchor* Anchor146 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor146->setUrl(new CString[1]{"javascript:window.open('./data/606.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor146->setDescription("Ivy House Special School, Derby");
CProtoInstance* ProtoInstance147 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance147->setName("school");
CfieldValue* fieldValue148 = new CfieldValue();
fieldValue148->setName("pos");
fieldValue148->setValue("436.1000061035156 0.10000000149011612 -334.8999938964844");
ProtoInstance147->addFieldValue(*fieldValue148);

Anchor146->addChildren(*ProtoInstance147);

Transform90->addChildren(*Anchor146);

CAnchor* Anchor149 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor149->setUrl(new CString[1]{"javascript:window.open('./data/607.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor149->setDescription("Oakham Day Centre, Rutland");
CProtoInstance* ProtoInstance150 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance150->setName("institute");
CfieldValue* fieldValue151 = new CfieldValue();
fieldValue151->setName("pos");
fieldValue151->setValue("485.6000061035156 0.10000000149011612 -309");
ProtoInstance150->addFieldValue(*fieldValue151);

Anchor149->addChildren(*ProtoInstance150);

Transform90->addChildren(*Anchor149);

CAnchor* Anchor152 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor152->setUrl(new CString[1]{"javascript:window.open('./data/608.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor152->setDescription("Parkwood School, Alfreton");
CProtoInstance* ProtoInstance153 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance153->setName("school");
CfieldValue* fieldValue154 = new CfieldValue();
fieldValue154->setName("pos");
fieldValue154->setValue("440.5 0.10000000149011612 -355.5");
ProtoInstance153->addFieldValue(*fieldValue154);

Anchor152->addChildren(*ProtoInstance153);

Transform90->addChildren(*Anchor152);

CAnchor* Anchor155 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor155->setUrl(new CString[1]{"javascript:window.open('./data/609.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor155->setDescription("Ash Green, Specialist Learning Disability Resource");
CProtoInstance* ProtoInstance156 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance156->setName("institute");
CfieldValue* fieldValue157 = new CfieldValue();
fieldValue157->setName("pos");
fieldValue157->setValue("434.79998779296875 0.10000000149011612 -371.5");
ProtoInstance156->addFieldValue(*fieldValue157);

Anchor155->addChildren(*ProtoInstance156);

Transform90->addChildren(*Anchor155);

CAnchor* Anchor158 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor158->setUrl(new CString[1]{"javascript:window.open('./data/610.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor158->setDescription("Ashgate Croft School, Chesterfield");
CProtoInstance* ProtoInstance159 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance159->setName("school");
CfieldValue* fieldValue160 = new CfieldValue();
fieldValue160->setName("pos");
fieldValue160->setValue("436.29998779296875 0.10000000149011612 -371.70001220703125");
ProtoInstance159->addFieldValue(*fieldValue160);

Anchor158->addChildren(*ProtoInstance159);

Transform90->addChildren(*Anchor158);

CAnchor* Anchor161 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor161->setUrl(new CString[1]{"javascript:window.open('./data/611.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor161->setDescription("Highfields School, Matlock");
CProtoInstance* ProtoInstance162 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance162->setName("school");
CfieldValue* fieldValue163 = new CfieldValue();
fieldValue163->setName("pos");
fieldValue163->setValue("431.20001220703125 0.10000000149011612 -361.20001220703125");
ProtoInstance162->addFieldValue(*fieldValue163);

Anchor161->addChildren(*ProtoInstance162);

Transform90->addChildren(*Anchor161);

CAnchor* Anchor164 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor164->setUrl(new CString[1]{"javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor164->setDescription("City Arts");
CProtoInstance* ProtoInstance165 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance165->setName("i");
CfieldValue* fieldValue166 = new CfieldValue();
fieldValue166->setName("pos");
fieldValue166->setValue("455.8999938964844 0.10000000149011612 -341.29998779296875");
ProtoInstance165->addFieldValue(*fieldValue166);

Anchor164->addChildren(*ProtoInstance165);

Transform90->addChildren(*Anchor164);

CAnchor* Anchor167 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor167->setUrl(new CString[1]{"javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor167->setDescription("Indigo Dance Group (Salamanda Tandem)");
CProtoInstance* ProtoInstance168 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance168->setName("r");
CfieldValue* fieldValue169 = new CfieldValue();
fieldValue169->setName("pos");
fieldValue169->setValue("456.1000061035156 0.10000000149011612 -341.5");
ProtoInstance168->addFieldValue(*fieldValue169);

Anchor167->addChildren(*ProtoInstance168);

Transform90->addChildren(*Anchor167);

CAnchor* Anchor170 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor170->setUrl(new CString[1]{"javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor170->setDescription("Watering Seeds");
CProtoInstance* ProtoInstance171 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance171->setName("r");
CfieldValue* fieldValue172 = new CfieldValue();
fieldValue172->setName("pos");
fieldValue172->setValue("454 0.10000000149011612 -361.29998779296875");
ProtoInstance171->addFieldValue(*fieldValue172);

Anchor170->addChildren(*ProtoInstance171);

Transform90->addChildren(*Anchor170);

CAnchor* Anchor173 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor173->setUrl(new CString[1]{"javascript:window.open('./data/625.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor173->setDescription("Red oaks");
CProtoInstance* ProtoInstance174 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance174->setName("institute");
CfieldValue* fieldValue175 = new CfieldValue();
fieldValue175->setName("pos");
fieldValue175->setValue("457.3999938964844 0.10000000149011612 -359.6000061035156");
ProtoInstance174->addFieldValue(*fieldValue175);

Anchor173->addChildren(*ProtoInstance174);

Transform90->addChildren(*Anchor173);

CAnchor* Anchor176 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor176->setUrl(new CString[1]{"javascript:window.open('./data/626.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor176->setDescription("West Notts College");
CProtoInstance* ProtoInstance177 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance177->setName("school");
CfieldValue* fieldValue178 = new CfieldValue();
fieldValue178->setName("pos");
fieldValue178->setValue("454.20001220703125 0.10000000149011612 -358.6000061035156");
ProtoInstance177->addFieldValue(*fieldValue178);

Anchor176->addChildren(*ProtoInstance177);

Transform90->addChildren(*Anchor176);

CAnchor* Anchor179 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor179->setUrl(new CString[1]{"javascript:window.open('./data/628.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor179->setDescription("Willow Wood Day Centre");
CProtoInstance* ProtoInstance180 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance180->setName("institute");
CfieldValue* fieldValue181 = new CfieldValue();
fieldValue181->setName("pos");
fieldValue181->setValue("450.6000061035156 0.10000000149011612 -358.6000061035156");
ProtoInstance180->addFieldValue(*fieldValue181);

Anchor179->addChildren(*ProtoInstance180);

Transform90->addChildren(*Anchor179);

CAnchor* Anchor182 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor182->setUrl(new CString[1]{"javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor182->setDescription("Fased In The Arts");
CProtoInstance* ProtoInstance183 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance183->setName("r");
CfieldValue* fieldValue184 = new CfieldValue();
fieldValue184->setName("pos");
fieldValue184->setValue("440 0.10000000149011612 -350");
ProtoInstance183->addFieldValue(*fieldValue184);

Anchor182->addChildren(*ProtoInstance183);

Transform90->addChildren(*Anchor182);

CAnchor* Anchor185 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor185->setUrl(new CString[1]{"javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor185->setDescription("27a Access Artspace");
CProtoInstance* ProtoInstance186 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance186->setName("n");
CfieldValue* fieldValue187 = new CfieldValue();
fieldValue187->setName("pos");
fieldValue187->setValue("458.8999938964844 0.10000000149011612 -304.29998779296875");
ProtoInstance186->addFieldValue(*fieldValue187);

Anchor185->addChildren(*ProtoInstance186);

Transform90->addChildren(*Anchor185);

CAnchor* Anchor188 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor188->setUrl(new CString[1]{"javascript:window.open('./data/635.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor188->setDescription("Roman Way Day Centre, Market Harborough");
CProtoInstance* ProtoInstance189 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance189->setName("institute");
CfieldValue* fieldValue190 = new CfieldValue();
fieldValue190->setName("pos");
fieldValue190->setValue("473.5 0.10000000149011612 -287.5");
ProtoInstance189->addFieldValue(*fieldValue190);

Anchor188->addChildren(*ProtoInstance189);

Transform90->addChildren(*Anchor188);

CAnchor* Anchor191 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor191->setUrl(new CString[1]{"javascript:window.open('./data/637.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor191->setDescription("Mosaic, Leicester Disability Services");
CProtoInstance* ProtoInstance192 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance192->setName("institute");
CfieldValue* fieldValue193 = new CfieldValue();
fieldValue193->setName("pos");
fieldValue193->setValue("458 0.10000000149011612 -304.5");
ProtoInstance192->addFieldValue(*fieldValue193);

Anchor191->addChildren(*ProtoInstance192);

Transform90->addChildren(*Anchor191);

CAnchor* Anchor194 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor194->setUrl(new CString[1]{"javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor194->setDescription("Bamboozle Theatre Company");
CProtoInstance* ProtoInstance195 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance195->setName("r");
CfieldValue* fieldValue196 = new CfieldValue();
fieldValue196->setName("pos");
fieldValue196->setValue("457.1000061035156 0.10000000149011612 -300.79998779296875");
ProtoInstance195->addFieldValue(*fieldValue196);

Anchor194->addChildren(*ProtoInstance195);

Transform90->addChildren(*Anchor194);

CAnchor* Anchor197 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor197->setUrl(new CString[1]{"javascript:window.open('./data/640.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor197->setDescription("Ellesmere College, Leicester");
CProtoInstance* ProtoInstance198 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance198->setName("school");
CfieldValue* fieldValue199 = new CfieldValue();
fieldValue199->setName("pos");
fieldValue199->setValue("456.79998779296875 0.10000000149011612 -302.6000061035156");
ProtoInstance198->addFieldValue(*fieldValue199);

Anchor197->addChildren(*ProtoInstance198);

Transform90->addChildren(*Anchor197);

CAnchor* Anchor200 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor200->setUrl(new CString[1]{"javascript:window.open('./data/642.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor200->setDescription("Ashmount School, Loughborough");
CProtoInstance* ProtoInstance201 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance201->setName("school");
CfieldValue* fieldValue202 = new CfieldValue();
fieldValue202->setName("pos");
fieldValue202->setValue("453.29998779296875 0.10000000149011612 -318.6000061035156");
ProtoInstance201->addFieldValue(*fieldValue202);

Anchor200->addChildren(*ProtoInstance201);

Transform90->addChildren(*Anchor200);

CAnchor* Anchor203 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor203->setUrl(new CString[1]{"javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor203->setDescription("Mantle Community Arts");
CProtoInstance* ProtoInstance204 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance204->setName("r");
CfieldValue* fieldValue205 = new CfieldValue();
fieldValue205->setName("pos");
fieldValue205->setValue("442.3999938964844 0.10000000149011612 -314.5");
ProtoInstance204->addFieldValue(*fieldValue205);

Anchor203->addChildren(*ProtoInstance204);

Transform90->addChildren(*Anchor203);

CAnchor* Anchor206 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor206->setUrl(new CString[1]{"javascript:window.open('./data/650.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor206->setDescription("Forrest Way School");
CProtoInstance* ProtoInstance207 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance207->setName("school");
CfieldValue* fieldValue208 = new CfieldValue();
fieldValue208->setName("pos");
fieldValue208->setValue("444.6000061035156 0.10000000149011612 -313.70001220703125");
ProtoInstance207->addFieldValue(*fieldValue208);

Anchor206->addChildren(*ProtoInstance207);

Transform90->addChildren(*Anchor206);

CAnchor* Anchor209 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor209->setUrl(new CString[1]{"javascript:window.open('./data/652.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor209->setDescription("Ibstock Community College");
CProtoInstance* ProtoInstance210 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance210->setName("school");
CfieldValue* fieldValue211 = new CfieldValue();
fieldValue211->setName("pos");
fieldValue211->setValue("440.6000061035156 0.10000000149011612 -310.3999938964844");
ProtoInstance210->addFieldValue(*fieldValue211);

Anchor209->addChildren(*ProtoInstance210);

Transform90->addChildren(*Anchor209);

CAnchor* Anchor212 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor212->setUrl(new CString[1]{"javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor212->setDescription("Artlink East");
CProtoInstance* ProtoInstance213 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance213->setName("r");
CfieldValue* fieldValue214 = new CfieldValue();
fieldValue214->setName("pos");
fieldValue214->setValue("491.6000061035156 0.10000000149011612 -335.70001220703125");
ProtoInstance213->addFieldValue(*fieldValue214);

Anchor212->addChildren(*ProtoInstance213);

Transform90->addChildren(*Anchor212);

CAnchor* Anchor215 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor215->setUrl(new CString[1]{"javascript:window.open('./data/660.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor215->setDescription("United Hospitals and NHS Trust Lincolnshire");
CProtoInstance* ProtoInstance216 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance216->setName("institute");
CfieldValue* fieldValue217 = new CfieldValue();
fieldValue217->setName("pos");
fieldValue217->setValue("491.3999938964844 0.10000000149011612 -336.79998779296875");
ProtoInstance216->addFieldValue(*fieldValue217);

Anchor215->addChildren(*ProtoInstance216);

Transform90->addChildren(*Anchor215);

CAnchor* Anchor218 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor218->setUrl(new CString[1]{"javascript:window.open('./data/662.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor218->setDescription("Ancaster Day Centre");
CProtoInstance* ProtoInstance219 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance219->setName("institute");
CfieldValue* fieldValue220 = new CfieldValue();
fieldValue220->setName("pos");
fieldValue220->setValue("496.8999938964844 0.10000000149011612 -368.8999938964844");
ProtoInstance219->addFieldValue(*fieldValue220);

Anchor218->addChildren(*ProtoInstance219);

Transform90->addChildren(*Anchor218);

CAnchor* Anchor221 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor221->setUrl(new CString[1]{"javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor221->setDescription("Creations");
CProtoInstance* ProtoInstance222 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance222->setName("r");
CfieldValue* fieldValue223 = new CfieldValue();
fieldValue223->setName("pos");
fieldValue223->setValue("467 0.10000000149011612 -243.89999389648438");
ProtoInstance222->addFieldValue(*fieldValue223);

Anchor221->addChildren(*ProtoInstance222);

Transform90->addChildren(*Anchor221);

CAnchor* Anchor224 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor224->setUrl(new CString[1]{"javascript:window.open('./data/667.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor224->setDescription("Nene Day Centre, Northamtpon");
CProtoInstance* ProtoInstance225 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance225->setName("institute");
CfieldValue* fieldValue226 = new CfieldValue();
fieldValue226->setName("pos");
fieldValue226->setValue("477.1000061035156 0.10000000149011612 -260");
ProtoInstance225->addFieldValue(*fieldValue226);

Anchor224->addChildren(*ProtoInstance225);

Transform90->addChildren(*Anchor224);

CAnchor* Anchor227 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor227->setUrl(new CString[1]{"javascript:window.open('./data/668.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor227->setDescription("Delapre Middle School, Northampton");
CProtoInstance* ProtoInstance228 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance228->setName("school");
CfieldValue* fieldValue229 = new CfieldValue();
fieldValue229->setName("pos");
fieldValue229->setValue("474.70001220703125 0.10000000149011612 -259.1000061035156");
ProtoInstance228->addFieldValue(*fieldValue229);

Anchor227->addChildren(*ProtoInstance228);

Transform90->addChildren(*Anchor227);

CAnchor* Anchor230 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor230->setUrl(new CString[1]{"javascript:window.open('./data/669.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor230->setDescription("The Links, Brackley");
CProtoInstance* ProtoInstance231 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance231->setName("institute");
CfieldValue* fieldValue232 = new CfieldValue();
fieldValue232->setName("pos");
fieldValue232->setValue("459 0.10000000149011612 -236.39999389648438");
ProtoInstance231->addFieldValue(*fieldValue232);

Anchor230->addChildren(*ProtoInstance231);

Transform90->addChildren(*Anchor230);

CAnchor* Anchor233 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor233->setUrl(new CString[1]{"javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor233->setDescription("New Perspectives");
CProtoInstance* ProtoInstance234 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance234->setName("n");
CfieldValue* fieldValue235 = new CfieldValue();
fieldValue235->setName("pos");
fieldValue235->setValue("457.3999938964844 0.10000000149011612 -262.70001220703125");
ProtoInstance234->addFieldValue(*fieldValue235);

Anchor233->addChildren(*ProtoInstance234);

Transform90->addChildren(*Anchor233);

CAnchor* Anchor236 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor236->setUrl(new CString[1]{"javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor236->setDescription("UKan2");
CProtoInstance* ProtoInstance237 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance237->setName("r");
CfieldValue* fieldValue238 = new CfieldValue();
fieldValue238->setName("pos");
fieldValue238->setValue("458.70001220703125 0.10000000149011612 -262.70001220703125");
ProtoInstance237->addFieldValue(*fieldValue238);

Anchor236->addChildren(*ProtoInstance237);

Transform90->addChildren(*Anchor236);

CAnchor* Anchor239 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor239->setUrl(new CString[1]{"javascript:window.open('./data/672.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor239->setDescription("Silverstone County Infants School");
CProtoInstance* ProtoInstance240 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance240->setName("school");
CfieldValue* fieldValue241 = new CfieldValue();
fieldValue241->setName("pos");
fieldValue241->setValue("466.8999938964844 0.10000000149011612 -243.8000030517578");
ProtoInstance240->addFieldValue(*fieldValue241);

Anchor239->addChildren(*ProtoInstance240);

Transform90->addChildren(*Anchor239);

CAnchor* Anchor242 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor242->setUrl(new CString[1]{"javascript:window.open('./data/677.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor242->setDescription("Riverside Resource Centre, Towcester");
CProtoInstance* ProtoInstance243 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance243->setName("institute");
CfieldValue* fieldValue244 = new CfieldValue();
fieldValue244->setName("pos");
fieldValue244->setValue("469.5 0.10000000149011612 -249.8000030517578");
ProtoInstance243->addFieldValue(*fieldValue244);

Anchor242->addChildren(*ProtoInstance243);

Transform90->addChildren(*Anchor242);

CAnchor* Anchor245 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor245->setUrl(new CString[1]{"javascript:window.open('./data/678.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor245->setDescription("Daventry Tertiary College");
CProtoInstance* ProtoInstance246 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance246->setName("school");
CfieldValue* fieldValue247 = new CfieldValue();
fieldValue247->setName("pos");
fieldValue247->setValue("456.70001220703125 0.10000000149011612 -261.79998779296875");
ProtoInstance246->addFieldValue(*fieldValue247);

Anchor245->addChildren(*ProtoInstance246);

Transform90->addChildren(*Anchor245);

CShape* Shape248 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance249 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material250 = (CMaterial *)(m_pScene.createNode("Material"));
Material250->setTransparency(0.20000000298023224);
Material250->setEmissiveColor(new float[3]{1,0,0});
Appearance249->setMaterial(*Material250);

Shape248->setAppearance(*Appearance249);

CIndexedLineSet* IndexedLineSet251 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet251->setCoordIndex(new int[54]{0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1});
CCoordinate* Coordinate252 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate252->setPoint(new float[108]{430,0.019999999552965164,-335,435.79998779296875,0.10000000149011612,-335.29998779296875,430,0.019999999552965164,-335,434.6000061035156,0.10000000149011612,-338.6000061035156,430,0.019999999552965164,-335,432.70001220703125,0.10000000149011612,-336.6000061035156,430,0.019999999552965164,-335,434.70001220703125,0.10000000149011612,-336.8999938964844,429.8999938964844,0.019999999552965164,-360.29998779296875,474.70001220703125,0.10000000149011612,-318.79998779296875,429.8999938964844,0.019999999552965164,-360.29998779296875,485.6000061035156,0.10000000149011612,-309,429.8999938964844,0.019999999552965164,-360.29998779296875,434.79998779296875,0.10000000149011612,-371.5,454,0.019999999552965164,-361.29998779296875,457.3999938964844,0.10000000149011612,-359.6000061035156,454,0.019999999552965164,-361.29998779296875,454.20001220703125,0.10000000149011612,-358.6000061035156,454,0.019999999552965164,-361.29998779296875,450.6000061035156,0.10000000149011612,-358.6000061035156,458.8999938964844,0.019999999552965164,-304.29998779296875,473.5,0.10000000149011612,-287.5,458.8999938964844,0.019999999552965164,-304.29998779296875,458,0.10000000149011612,-304.5,491.6000061035156,0.019999999552965164,-335.70001220703125,491.3999938964844,0.10000000149011612,-336.79998779296875,491.6000061035156,0.019999999552965164,-335.70001220703125,496.8999938964844,0.10000000149011612,-368.8999938964844,467,0.019999999552965164,-243.89999389648438,477.1000061035156,0.10000000149011612,-260,467,0.019999999552965164,-243.89999389648438,459,0.10000000149011612,-236.39999389648438,458.70001220703125,0.019999999552965164,-262.70001220703125,469.5,0.10000000149011612,-249.8000030517578,458.70001220703125,0.019999999552965164,-262.70001220703125,456.70001220703125,0.10000000149011612,-261.79998779296875});
IndexedLineSet251->setCoord(*Coordinate252);

Shape248->setGeometry(IndexedLineSet251);

Transform90->addChild(*Shape248);

CShape* Shape253 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance254 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material255 = (CMaterial *)(m_pScene.createNode("Material"));
Material255->setTransparency(0.20000000298023224);
Material255->setEmissiveColor(new float[3]{0,1,0});
Appearance254->setMaterial(*Material255);

Shape253->setAppearance(*Appearance254);

CIndexedLineSet* IndexedLineSet256 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet256->setCoordIndex(new int[54]{0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1});
CCoordinate* Coordinate257 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate257->setPoint(new float[108]{400,0.019999999552965164,-385,400.6000061035156,0.10000000149011612,-392.8999938964844,400,0.019999999552965164,-385,416.70001220703125,0.10000000149011612,-383.3999938964844,430,0.019999999552965164,-335,438.29998779296875,0.10000000149011612,-338.6000061035156,430,0.019999999552965164,-335,434.79998779296875,0.10000000149011612,-336,430,0.019999999552965164,-335,437.6000061035156,0.10000000149011612,-332.6000061035156,430,0.019999999552965164,-335,436.29998779296875,0.10000000149011612,-333.3999938964844,430,0.019999999552965164,-335,435.20001220703125,0.10000000149011612,-336.79998779296875,430,0.019999999552965164,-335,432.5,0.10000000149011612,-332.5,429.8999938964844,0.019999999552965164,-360.29998779296875,436.1000061035156,0.10000000149011612,-334.8999938964844,429.8999938964844,0.019999999552965164,-360.29998779296875,440.5,0.10000000149011612,-355.5,429.8999938964844,0.019999999552965164,-360.29998779296875,436.29998779296875,0.10000000149011612,-371.70001220703125,429.8999938964844,0.019999999552965164,-360.29998779296875,431.20001220703125,0.10000000149011612,-361.20001220703125,457.1000061035156,0.019999999552965164,-300.79998779296875,456.79998779296875,0.10000000149011612,-302.6000061035156,457.1000061035156,0.019999999552965164,-300.79998779296875,453.29998779296875,0.10000000149011612,-318.6000061035156,442.3999938964844,0.019999999552965164,-314.5,444.6000061035156,0.10000000149011612,-313.70001220703125,442.3999938964844,0.019999999552965164,-314.5,440.6000061035156,0.10000000149011612,-310.3999938964844,467,0.019999999552965164,-243.89999389648438,474.70001220703125,0.10000000149011612,-259.1000061035156,457.3999938964844,0.019999999552965164,-262.70001220703125,466.8999938964844,0.10000000149011612,-243.8000030517578});
IndexedLineSet256->setCoord(*Coordinate257);

Shape253->setGeometry(IndexedLineSet256);

Transform90->addChild(*Shape253);

CShape* Shape258 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance259 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material260 = (CMaterial *)(m_pScene.createNode("Material"));
Material260->setTransparency(0.20000000298023224);
Material260->setEmissiveColor(new float[3]{1,0,1});
Appearance259->setMaterial(*Material260);

Shape258->setAppearance(*Appearance259);

CIndexedLineSet* IndexedLineSet261 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet261->setCoordIndex(new int[15]{0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1});
CCoordinate* Coordinate262 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate262->setPoint(new float[30]{430,0.019999999552965164,-335,429.8999938964844,0.10000000149011612,-360.29998779296875,442.3999938964844,0.019999999552965164,-314.5,429.8999938964844,0.10000000149011612,-319.6000061035156,457.3999938964844,0.019999999552965164,-262.70001220703125,467,0.10000000149011612,-243.89999389648438,458.70001220703125,0.019999999552965164,-262.70001220703125,457.3999938964844,0.10000000149011612,-262.70001220703125,458.70001220703125,0.019999999552965164,-262.70001220703125,467,0.10000000149011612,-243.89999389648438});
IndexedLineSet261->setCoord(*Coordinate262);

Shape258->setGeometry(IndexedLineSet261);

Transform90->addChild(*Shape258);

group->addChildren(*Transform90);

X3D0->setScene(*Scene4);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
