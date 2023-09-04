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
X3D0->setVersion("4.0");
Chead* head1 = new Chead();
Cmeta* meta2 = new Cmeta();
meta2->setName("generator");
meta2->setContent("tovrmlx3d, http://castle-engine.sourceforge.net/view3dscene.php#section_converting");
head1->addMeta(*meta2);

X3D0->setHead(*head1);

CScene* Scene3 = new CScene();
CProtoDeclare ProtoDeclare4 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="school" ><ProtoInterface><field accessType="initializeOnly" type="SFVec3f" name="pos"></field>
</ProtoInterface>
<ProtoBody><Transform><Shape><Appearance><Material diffuseColor="0.5 0 1" transparency="0.2"></Material>
</Appearance>
<IndexedFaceSet coordIndex="0 1 4 -1 1 2 4 -1 2 3 4 -1 3 0 4 -1 0 3 2 1 -1"><Coordinate containerField="coord" point="-0.35 -0.35 0.35 0.35 -0.35 0.35 0.35 -0.35 -0.35 -0.35 -0.35 -0.35 0 0.35 0"></Coordinate>
</IndexedFaceSet>
</Shape>
<IS><connect nodeField="translation" protoField="pos"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare4->setName("school");
CProtoInterface* ProtoInterface5 = new CProtoInterface();
Cfield* field6 = new Cfield();
field6->setAccessType("initializeOnly");
field6->setType("SFVec3f");
field6->setName("pos");
ProtoInterface5->addField(*field6);

ProtoDeclare4->setProtoInterface(*ProtoInterface5);

CProtoBody* ProtoBody7 = new CProtoBody();
CTransform* Transform8 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape9 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance10 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material11 = (CMaterial *)(m_pScene.createNode("Material"));
Material11->setDiffuseColor(new float[3]{0.5,0,1});
Material11->setTransparency(0.2);
Appearance10->setMaterial(*Material11);

Shape9->setAppearance(*Appearance10);

CIndexedFaceSet* IndexedFaceSet12 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet12->setCoordIndex(new int[21]{0,1,4,-1,1,2,4,-1,2,3,4,-1,3,0,4,-1,0,3,2,1,-1});
CCoordinate* Coordinate13 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate13->setPoint(new float[15]{-0.35,-0.35,0.35,0.35,-0.35,0.35,0.35,-0.35,-0.35,-0.35,-0.35,-0.35,0,0.35,0});
IndexedFaceSet12->setCoord(*Coordinate13);

Shape9->setGeometry(IndexedFaceSet12);

Transform8->addChild(*Shape9);

CIS* IS14 = new CIS();
Cconnect* connect15 = new Cconnect();
connect15->setNodeField("translation");
connect15->setProtoField("pos");
IS14->addConnect(*connect15);

Transform8->setIS(*IS14);

ProtoBody7->addChildren(*Transform8);

ProtoDeclare4->setProtoBody(*ProtoBody7);

group->addChildren(*ProtoDeclare4);

CProtoDeclare ProtoDeclare16 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="institute" ><ProtoInterface><field accessType="initializeOnly" type="SFVec3f" name="pos"></field>
</ProtoInterface>
<ProtoBody><Transform><Shape><Appearance><Material diffuseColor="1 1 0" transparency="0.2"></Material>
</Appearance>
<Box size="0.7 0.7 0.7"></Box>
</Shape>
<IS><connect nodeField="translation" protoField="pos"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare16->setName("institute");
CProtoInterface* ProtoInterface17 = new CProtoInterface();
Cfield* field18 = new Cfield();
field18->setAccessType("initializeOnly");
field18->setType("SFVec3f");
field18->setName("pos");
ProtoInterface17->addField(*field18);

ProtoDeclare16->setProtoInterface(*ProtoInterface17);

CProtoBody* ProtoBody19 = new CProtoBody();
CTransform* Transform20 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape21 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance22 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material23 = (CMaterial *)(m_pScene.createNode("Material"));
Material23->setDiffuseColor(new float[3]{1,1,0});
Material23->setTransparency(0.2);
Appearance22->setMaterial(*Material23);

Shape21->setAppearance(*Appearance22);

CBox* Box24 = (CBox *)(m_pScene.createNode("Box"));
Box24->setSize(new float[3]{0.7,0.7,0.7});
Shape21->setGeometry(Box24);

Transform20->addChild(*Shape21);

CIS* IS25 = new CIS();
Cconnect* connect26 = new Cconnect();
connect26->setNodeField("translation");
connect26->setProtoField("pos");
IS25->addConnect(*connect26);

Transform20->setIS(*IS25);

ProtoBody19->addChildren(*Transform20);

ProtoDeclare16->setProtoBody(*ProtoBody19);

group->addChildren(*ProtoDeclare16);

CProtoDeclare ProtoDeclare27 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="disart_org" ><ProtoInterface><field accessType="initializeOnly" type="SFVec3f" name="pos"></field>
</ProtoInterface>
<ProtoBody><Transform><Shape><Appearance><Material diffuseColor="1 1 0"></Material>
</Appearance>
<Sphere radius="0.7"></Sphere>
</Shape>
<IS><connect nodeField="translation" protoField="pos"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare27->setName("disart_org");
CProtoInterface* ProtoInterface28 = new CProtoInterface();
Cfield* field29 = new Cfield();
field29->setAccessType("initializeOnly");
field29->setType("SFVec3f");
field29->setName("pos");
ProtoInterface28->addField(*field29);

ProtoDeclare27->setProtoInterface(*ProtoInterface28);

CProtoBody* ProtoBody30 = new CProtoBody();
CTransform* Transform31 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape32 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance33 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material34 = (CMaterial *)(m_pScene.createNode("Material"));
Material34->setDiffuseColor(new float[3]{1,1,0});
Appearance33->setMaterial(*Material34);

Shape32->setAppearance(*Appearance33);

CSphere* Sphere35 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere35->setRadius(0.7);
Shape32->setGeometry(Sphere35);

Transform31->addChild(*Shape32);

CIS* IS36 = new CIS();
Cconnect* connect37 = new Cconnect();
connect37->setNodeField("translation");
connect37->setProtoField("pos");
IS36->addConnect(*connect37);

Transform31->setIS(*IS36);

ProtoBody30->addChildren(*Transform31);

ProtoDeclare27->setProtoBody(*ProtoBody30);

group->addChildren(*ProtoDeclare27);

CProtoDeclare ProtoDeclare38 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="org" ><ProtoInterface><field accessType="initializeOnly" type="SFVec3f" name="posi"></field>
<field accessType="initializeOnly" type="SFColor" name="col"></field>
</ProtoInterface>
<ProtoBody><Transform><Shape><Appearance><Material transparency="0.4"><IS><connect nodeField="emissiveColor" protoField="col"></connect>
</IS>
</Material>
</Appearance>
<Sphere radius="1.1"></Sphere>
</Shape>
<IS><connect nodeField="translation" protoField="posi"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare38->setName("org");
CProtoInterface* ProtoInterface39 = new CProtoInterface();
Cfield* field40 = new Cfield();
field40->setAccessType("initializeOnly");
field40->setType("SFVec3f");
field40->setName("posi");
ProtoInterface39->addField(*field40);

Cfield* field41 = new Cfield();
field41->setAccessType("initializeOnly");
field41->setType("SFColor");
field41->setName("col");
ProtoInterface39->addField(*field41);

ProtoDeclare38->setProtoInterface(*ProtoInterface39);

CProtoBody* ProtoBody42 = new CProtoBody();
CTransform* Transform43 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape44 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance45 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material46 = (CMaterial *)(m_pScene.createNode("Material"));
Material46->setTransparency(0.4);
CIS* IS47 = new CIS();
Cconnect* connect48 = new Cconnect();
connect48->setNodeField("emissiveColor");
connect48->setProtoField("col");
IS47->addConnect(*connect48);

Material46->setIS(*IS47);

Appearance45->setMaterial(*Material46);

Shape44->setAppearance(*Appearance45);

CSphere* Sphere49 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere49->setRadius(1.1);
Shape44->setGeometry(Sphere49);

Transform43->addChild(*Shape44);

CIS* IS50 = new CIS();
Cconnect* connect51 = new Cconnect();
connect51->setNodeField("translation");
connect51->setProtoField("posi");
IS50->addConnect(*connect51);

Transform43->setIS(*IS50);

ProtoBody42->addChildren(*Transform43);

ProtoDeclare38->setProtoBody(*ProtoBody42);

group->addChildren(*ProtoDeclare38);

CProtoDeclare ProtoDeclare52 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="l" ><ProtoInterface><field accessType="initializeOnly" type="SFVec3f" name="pos"></field>
</ProtoInterface>
<ProtoBody><ProtoInstance name="org"><fieldValue name="col" value="0 0.6 0"></fieldValue>
<IS><connect nodeField="posi" protoField="pos"></connect>
</IS>
</ProtoInstance>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare52->setName("l");
CProtoInterface* ProtoInterface53 = new CProtoInterface();
Cfield* field54 = new Cfield();
field54->setAccessType("initializeOnly");
field54->setType("SFVec3f");
field54->setName("pos");
ProtoInterface53->addField(*field54);

ProtoDeclare52->setProtoInterface(*ProtoInterface53);

CProtoBody* ProtoBody55 = new CProtoBody();
CProtoInstance* ProtoInstance56 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance56->setName("org");
CfieldValue* fieldValue57 = new CfieldValue();
fieldValue57->setName("col");
fieldValue57->setValue("0 0.6 0");
ProtoInstance56->addFieldValue(*fieldValue57);

CIS* IS58 = new CIS();
Cconnect* connect59 = new Cconnect();
connect59->setNodeField("posi");
connect59->setProtoField("pos");
IS58->addConnect(*connect59);

ProtoInstance56->setIS(*IS58);

ProtoBody55->addChildren(*ProtoInstance56);

ProtoDeclare52->setProtoBody(*ProtoBody55);

group->addChildren(*ProtoDeclare52);

CProtoDeclare ProtoDeclare60 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="r" ><ProtoInterface><field accessType="initializeOnly" type="SFVec3f" name="pos"></field>
</ProtoInterface>
<ProtoBody><ProtoInstance name="org"><fieldValue name="col" value="0 0.3 1"></fieldValue>
<IS><connect nodeField="posi" protoField="pos"></connect>
</IS>
</ProtoInstance>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare60->setName("r");
CProtoInterface* ProtoInterface61 = new CProtoInterface();
Cfield* field62 = new Cfield();
field62->setAccessType("initializeOnly");
field62->setType("SFVec3f");
field62->setName("pos");
ProtoInterface61->addField(*field62);

ProtoDeclare60->setProtoInterface(*ProtoInterface61);

CProtoBody* ProtoBody63 = new CProtoBody();
CProtoInstance* ProtoInstance64 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance64->setName("org");
CfieldValue* fieldValue65 = new CfieldValue();
fieldValue65->setName("col");
fieldValue65->setValue("0 0.3 1");
ProtoInstance64->addFieldValue(*fieldValue65);

CIS* IS66 = new CIS();
Cconnect* connect67 = new Cconnect();
connect67->setNodeField("posi");
connect67->setProtoField("pos");
IS66->addConnect(*connect67);

ProtoInstance64->setIS(*IS66);

ProtoBody63->addChildren(*ProtoInstance64);

ProtoDeclare60->setProtoBody(*ProtoBody63);

group->addChildren(*ProtoDeclare60);

CProtoDeclare ProtoDeclare68 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="n" ><ProtoInterface><field accessType="initializeOnly" type="SFVec3f" name="pos"></field>
</ProtoInterface>
<ProtoBody><ProtoInstance name="org"><fieldValue name="col" value="1 0 0.2"></fieldValue>
<IS><connect nodeField="posi" protoField="pos"></connect>
</IS>
</ProtoInstance>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare68->setName("n");
CProtoInterface* ProtoInterface69 = new CProtoInterface();
Cfield* field70 = new Cfield();
field70->setAccessType("initializeOnly");
field70->setType("SFVec3f");
field70->setName("pos");
ProtoInterface69->addField(*field70);

ProtoDeclare68->setProtoInterface(*ProtoInterface69);

CProtoBody* ProtoBody71 = new CProtoBody();
CProtoInstance* ProtoInstance72 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance72->setName("org");
CfieldValue* fieldValue73 = new CfieldValue();
fieldValue73->setName("col");
fieldValue73->setValue("1 0 0.2");
ProtoInstance72->addFieldValue(*fieldValue73);

CIS* IS74 = new CIS();
Cconnect* connect75 = new Cconnect();
connect75->setNodeField("posi");
connect75->setProtoField("pos");
IS74->addConnect(*connect75);

ProtoInstance72->setIS(*IS74);

ProtoBody71->addChildren(*ProtoInstance72);

ProtoDeclare68->setProtoBody(*ProtoBody71);

group->addChildren(*ProtoDeclare68);

CProtoDeclare ProtoDeclare76 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="i" ><ProtoInterface><field accessType="initializeOnly" type="SFVec3f" name="pos"></field>
</ProtoInterface>
<ProtoBody><ProtoInstance name="org"><fieldValue name="col" value="0.6 0 0.6"></fieldValue>
<IS><connect nodeField="posi" protoField="pos"></connect>
</IS>
</ProtoInstance>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare76->setName("i");
CProtoInterface* ProtoInterface77 = new CProtoInterface();
Cfield* field78 = new Cfield();
field78->setAccessType("initializeOnly");
field78->setType("SFVec3f");
field78->setName("pos");
ProtoInterface77->addField(*field78);

ProtoDeclare76->setProtoInterface(*ProtoInterface77);

CProtoBody* ProtoBody79 = new CProtoBody();
CProtoInstance* ProtoInstance80 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance80->setName("org");
CfieldValue* fieldValue81 = new CfieldValue();
fieldValue81->setName("col");
fieldValue81->setValue("0.6 0 0.6");
ProtoInstance80->addFieldValue(*fieldValue81);

CIS* IS82 = new CIS();
Cconnect* connect83 = new Cconnect();
connect83->setNodeField("posi");
connect83->setProtoField("pos");
IS82->addConnect(*connect83);

ProtoInstance80->setIS(*IS82);

ProtoBody79->addChildren(*ProtoInstance80);

ProtoDeclare76->setProtoBody(*ProtoBody79);

group->addChildren(*ProtoDeclare76);

CNavigationInfo* NavigationInfo84 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo84->setType(new CString[3]{"EXAMINE","FLY","WALK"}, 3);
NavigationInfo84->setAvatarSize(new float[3]{200,200,120}, 3);
NavigationInfo84->setSpeed(3);
group->addChildren(*NavigationInfo84);

CWorldInfo* WorldInfo85 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo85->setTitle("Arts Mapper");
group->addChildren(*WorldInfo85);

CViewpoint* Viewpoint86 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint86->setDescription("looking North");
Viewpoint86->setPosition(new float[3]{0,60,110});
Viewpoint86->setOrientation(new float[4]{1,0,0,-0.699999988079071});
Viewpoint86->setFieldOfView(0.7853981);
group->addChildren(*Viewpoint86);

CViewpoint* Viewpoint87 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint87->setDescription("looking East");
Viewpoint87->setPosition(new float[3]{-140,30,0});
Viewpoint87->setOrientation(new float[4]{0,0.400000005960465,0,-1.39999997615814});
Viewpoint87->setFieldOfView(0.7853981);
group->addChildren(*Viewpoint87);

CViewpoint* Viewpoint88 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint88->setDescription("Overhead");
Viewpoint88->setPosition(new float[3]{0,150,0});
Viewpoint88->setOrientation(new float[4]{1,0,0,-1.57000005245209});
Viewpoint88->setFieldOfView(0.7853981);
group->addChildren(*Viewpoint88);

CTransform* Transform89 = (CTransform *)(m_pScene.createNode("Transform"));
Transform89->setTranslation(new float[3]{-468,0,315});
CInline* Inline90 = (CInline *)(m_pScene.createNode("Inline"));
Inline90->setGlobal(True);
Inline90->setUrl(new CString[1]{"t.wrl"}, 1);
Transform89->addChildren(*Inline90);

CAnchor* Anchor91 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor91->setDescription("Derby Women's Centre");
Anchor91->setUrl(new CString[1]{"javascript:window.open('./data/566.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance92 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance92->setName("institute");
CfieldValue* fieldValue93 = new CfieldValue();
fieldValue93->setName("pos");
fieldValue93->setValue("435.3 0.1 -335.6");
ProtoInstance92->addFieldValue(*fieldValue93);

Anchor91->addChildren(*ProtoInstance92);

Transform89->addChildren(*Anchor91);

CAnchor* Anchor94 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor94->setDescription("High Peak Community Arts");
Anchor94->setUrl(new CString[1]{"javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance95 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance95->setName("r");
CfieldValue* fieldValue96 = new CfieldValue();
fieldValue96->setName("pos");
fieldValue96->setValue("400 0.1 -385");
ProtoInstance95->addFieldValue(*fieldValue96);

Anchor94->addChildren(*ProtoInstance95);

Transform89->addChildren(*Anchor94);

CAnchor* Anchor97 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor97->setDescription("Charlesworth Primary School");
Anchor97->setUrl(new CString[1]{"javascript:window.open('./data/576.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance98 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance98->setName("school");
CfieldValue* fieldValue99 = new CfieldValue();
fieldValue99->setName("pos");
fieldValue99->setValue("400.6 0.1 -392.9");
ProtoInstance98->addFieldValue(*fieldValue99);

Anchor97->addChildren(*ProtoInstance98);

Transform89->addChildren(*Anchor97);

CAnchor* Anchor100 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor100->setDescription("Hope Valley College");
Anchor100->setUrl(new CString[1]{"javascript:window.open('./data/579.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance101 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance101->setName("school");
CfieldValue* fieldValue102 = new CfieldValue();
fieldValue102->setName("pos");
fieldValue102->setValue("416.7 0.1 -383.4");
ProtoInstance101->addFieldValue(*fieldValue102);

Anchor100->addChildren(*ProtoInstance101);

Transform89->addChildren(*Anchor100);

CAnchor* Anchor103 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor103->setDescription("People Express");
Anchor103->setUrl(new CString[1]{"javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance104 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance104->setName("i");
CfieldValue* fieldValue105 = new CfieldValue();
fieldValue105->setName("pos");
fieldValue105->setValue("429.9 0.1 -319.6");
ProtoInstance104->addFieldValue(*fieldValue105);

Anchor103->addChildren(*ProtoInstance104);

Transform89->addChildren(*Anchor103);

CAnchor* Anchor106 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor106->setDescription("QArts/Studios");
Anchor106->setUrl(new CString[1]{"javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance107 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance107->setName("i");
CfieldValue* fieldValue108 = new CfieldValue();
fieldValue108->setName("pos");
fieldValue108->setValue("430 0.1 -335");
ProtoInstance107->addFieldValue(*fieldValue108);

Anchor106->addChildren(*ProtoInstance107);

Transform89->addChildren(*Anchor106);

CAnchor* Anchor109 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor109->setDescription("Stroke Unit, Derbyshire Royal Infirmary");
Anchor109->setUrl(new CString[1]{"javascript:window.open('./data/591.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance110 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance110->setName("institute");
CfieldValue* fieldValue111 = new CfieldValue();
fieldValue111->setName("pos");
fieldValue111->setValue("435.8 0.1 -335.3");
ProtoInstance110->addFieldValue(*fieldValue111);

Anchor109->addChildren(*ProtoInstance110);

Transform89->addChildren(*Anchor109);

CAnchor* Anchor112 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor112->setDescription("Park View Primary, Derby");
Anchor112->setUrl(new CString[1]{"javascript:window.open('./data/592.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance113 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance113->setName("school");
CfieldValue* fieldValue114 = new CfieldValue();
fieldValue114->setName("pos");
fieldValue114->setValue("438.3 0.1 -338.6");
ProtoInstance113->addFieldValue(*fieldValue114);

Anchor112->addChildren(*ProtoInstance113);

Transform89->addChildren(*Anchor112);

CAnchor* Anchor115 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor115->setDescription("First Movement");
Anchor115->setUrl(new CString[1]{"javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance116 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance116->setName("n");
CfieldValue* fieldValue117 = new CfieldValue();
fieldValue117->setName("pos");
fieldValue117->setValue("429.9 0.1 -360.3");
ProtoInstance116->addFieldValue(*fieldValue117);

Anchor115->addChildren(*ProtoInstance116);

Transform89->addChildren(*Anchor115);

CAnchor* Anchor118 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor118->setDescription("St. Benedict R.C. School, Visual Impairment Unit");
Anchor118->setUrl(new CString[1]{"javascript:window.open('./data/594.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance119 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance119->setName("institute");
CfieldValue* fieldValue120 = new CfieldValue();
fieldValue120->setName("pos");
fieldValue120->setValue("434.6 0.1 -338.6");
ProtoInstance119->addFieldValue(*fieldValue120);

Anchor118->addChildren(*ProtoInstance119);

Transform89->addChildren(*Anchor118);

CAnchor* Anchor121 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor121->setDescription("Beckett Primary, Derby");
Anchor121->setUrl(new CString[1]{"javascript:window.open('./data/595.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance122 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance122->setName("school");
CfieldValue* fieldValue123 = new CfieldValue();
fieldValue123->setName("pos");
fieldValue123->setValue("434.8 0.1 -336");
ProtoInstance122->addFieldValue(*fieldValue123);

Anchor121->addChildren(*ProtoInstance122);

Transform89->addChildren(*Anchor121);

CAnchor* Anchor124 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor124->setDescription("Brackensdale Junior School, Communty Unit");
Anchor124->setUrl(new CString[1]{"javascript:window.open('./data/597.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance125 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance125->setName("institute");
CfieldValue* fieldValue126 = new CfieldValue();
fieldValue126->setName("pos");
fieldValue126->setValue("432.7 0.1 -336.6");
ProtoInstance125->addFieldValue(*fieldValue126);

Anchor124->addChildren(*ProtoInstance125);

Transform89->addChildren(*Anchor124);

CAnchor* Anchor127 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor127->setDescription("Moorhead Primary, Derby");
Anchor127->setUrl(new CString[1]{"javascript:window.open('./data/598.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance128 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance128->setName("school");
CfieldValue* fieldValue129 = new CfieldValue();
fieldValue129->setName("pos");
fieldValue129->setValue("437.6 0.1 -332.6");
ProtoInstance128->addFieldValue(*fieldValue129);

Anchor127->addChildren(*ProtoInstance128);

Transform89->addChildren(*Anchor127);

CAnchor* Anchor130 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor130->setDescription("Derby Deaf Club");
Anchor130->setUrl(new CString[1]{"javascript:window.open('./data/600.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance131 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance131->setName("institute");
CfieldValue* fieldValue132 = new CfieldValue();
fieldValue132->setName("pos");
fieldValue132->setValue("434.7 0.1 -336.9");
ProtoInstance131->addFieldValue(*fieldValue132);

Anchor130->addChildren(*ProtoInstance131);

Transform89->addChildren(*Anchor130);

CAnchor* Anchor133 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor133->setDescription("Nightingale Junior, Derby");
Anchor133->setUrl(new CString[1]{"javascript:window.open('./data/601.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance134 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance134->setName("school");
CfieldValue* fieldValue135 = new CfieldValue();
fieldValue135->setName("pos");
fieldValue135->setValue("436.3 0.1 -333.4");
ProtoInstance134->addFieldValue(*fieldValue135);

Anchor133->addChildren(*ProtoInstance134);

Transform89->addChildren(*Anchor133);

CAnchor* Anchor136 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor136->setDescription("St Mary's Primary, Derby");
Anchor136->setUrl(new CString[1]{"javascript:window.open('./data/603.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance137 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance137->setName("school");
CfieldValue* fieldValue138 = new CfieldValue();
fieldValue138->setName("pos");
fieldValue138->setValue("435.2 0.1 -336.8");
ProtoInstance137->addFieldValue(*fieldValue138);

Anchor136->addChildren(*ProtoInstance137);

Transform89->addChildren(*Anchor136);

CAnchor* Anchor139 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor139->setDescription("Griffe Field Primary, Derby");
Anchor139->setUrl(new CString[1]{"javascript:window.open('./data/604.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance140 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance140->setName("school");
CfieldValue* fieldValue141 = new CfieldValue();
fieldValue141->setName("pos");
fieldValue141->setValue("432.5 0.1 -332.5");
ProtoInstance140->addFieldValue(*fieldValue141);

Anchor139->addChildren(*ProtoInstance140);

Transform89->addChildren(*Anchor139);

CAnchor* Anchor142 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor142->setDescription("Leicester Road Day Centre, Melton Mowbray");
Anchor142->setUrl(new CString[1]{"javascript:window.open('./data/605.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance143 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance143->setName("institute");
CfieldValue* fieldValue144 = new CfieldValue();
fieldValue144->setName("pos");
fieldValue144->setValue("474.7 0.1 -318.8");
ProtoInstance143->addFieldValue(*fieldValue144);

Anchor142->addChildren(*ProtoInstance143);

Transform89->addChildren(*Anchor142);

CAnchor* Anchor145 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor145->setDescription("Ivy House Special School, Derby");
Anchor145->setUrl(new CString[1]{"javascript:window.open('./data/606.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance146 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance146->setName("school");
CfieldValue* fieldValue147 = new CfieldValue();
fieldValue147->setName("pos");
fieldValue147->setValue("436.1 0.1 -334.9");
ProtoInstance146->addFieldValue(*fieldValue147);

Anchor145->addChildren(*ProtoInstance146);

Transform89->addChildren(*Anchor145);

CAnchor* Anchor148 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor148->setDescription("Oakham Day Centre, Rutland");
Anchor148->setUrl(new CString[1]{"javascript:window.open('./data/607.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance149 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance149->setName("institute");
CfieldValue* fieldValue150 = new CfieldValue();
fieldValue150->setName("pos");
fieldValue150->setValue("485.6 0.1 -309");
ProtoInstance149->addFieldValue(*fieldValue150);

Anchor148->addChildren(*ProtoInstance149);

Transform89->addChildren(*Anchor148);

CAnchor* Anchor151 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor151->setDescription("Parkwood School, Alfreton");
Anchor151->setUrl(new CString[1]{"javascript:window.open('./data/608.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance152 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance152->setName("school");
CfieldValue* fieldValue153 = new CfieldValue();
fieldValue153->setName("pos");
fieldValue153->setValue("440.5 0.1 -355.5");
ProtoInstance152->addFieldValue(*fieldValue153);

Anchor151->addChildren(*ProtoInstance152);

Transform89->addChildren(*Anchor151);

CAnchor* Anchor154 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor154->setDescription("Ash Green, Specialist Learning Disability Resource");
Anchor154->setUrl(new CString[1]{"javascript:window.open('./data/609.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance155 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance155->setName("institute");
CfieldValue* fieldValue156 = new CfieldValue();
fieldValue156->setName("pos");
fieldValue156->setValue("434.8 0.1 -371.5");
ProtoInstance155->addFieldValue(*fieldValue156);

Anchor154->addChildren(*ProtoInstance155);

Transform89->addChildren(*Anchor154);

CAnchor* Anchor157 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor157->setDescription("Ashgate Croft School, Chesterfield");
Anchor157->setUrl(new CString[1]{"javascript:window.open('./data/610.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance158 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance158->setName("school");
CfieldValue* fieldValue159 = new CfieldValue();
fieldValue159->setName("pos");
fieldValue159->setValue("436.3 0.1 -371.7");
ProtoInstance158->addFieldValue(*fieldValue159);

Anchor157->addChildren(*ProtoInstance158);

Transform89->addChildren(*Anchor157);

CAnchor* Anchor160 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor160->setDescription("Highfields School, Matlock");
Anchor160->setUrl(new CString[1]{"javascript:window.open('./data/611.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance161 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance161->setName("school");
CfieldValue* fieldValue162 = new CfieldValue();
fieldValue162->setName("pos");
fieldValue162->setValue("431.2 0.1 -361.2");
ProtoInstance161->addFieldValue(*fieldValue162);

Anchor160->addChildren(*ProtoInstance161);

Transform89->addChildren(*Anchor160);

CAnchor* Anchor163 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor163->setDescription("City Arts");
Anchor163->setUrl(new CString[1]{"javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance164 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance164->setName("i");
CfieldValue* fieldValue165 = new CfieldValue();
fieldValue165->setName("pos");
fieldValue165->setValue("455.9 0.1 -341.3");
ProtoInstance164->addFieldValue(*fieldValue165);

Anchor163->addChildren(*ProtoInstance164);

Transform89->addChildren(*Anchor163);

CAnchor* Anchor166 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor166->setDescription("Indigo Dance Group (Salamanda Tandem)");
Anchor166->setUrl(new CString[1]{"javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance167 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance167->setName("r");
CfieldValue* fieldValue168 = new CfieldValue();
fieldValue168->setName("pos");
fieldValue168->setValue("456.1 0.1 -341.5");
ProtoInstance167->addFieldValue(*fieldValue168);

Anchor166->addChildren(*ProtoInstance167);

Transform89->addChildren(*Anchor166);

CAnchor* Anchor169 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor169->setDescription("Watering Seeds");
Anchor169->setUrl(new CString[1]{"javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance170 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance170->setName("r");
CfieldValue* fieldValue171 = new CfieldValue();
fieldValue171->setName("pos");
fieldValue171->setValue("454 0.1 -361.3");
ProtoInstance170->addFieldValue(*fieldValue171);

Anchor169->addChildren(*ProtoInstance170);

Transform89->addChildren(*Anchor169);

CAnchor* Anchor172 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor172->setDescription("Red oaks");
Anchor172->setUrl(new CString[1]{"javascript:window.open('./data/625.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance173 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance173->setName("institute");
CfieldValue* fieldValue174 = new CfieldValue();
fieldValue174->setName("pos");
fieldValue174->setValue("457.4 0.1 -359.6");
ProtoInstance173->addFieldValue(*fieldValue174);

Anchor172->addChildren(*ProtoInstance173);

Transform89->addChildren(*Anchor172);

CAnchor* Anchor175 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor175->setDescription("West Notts College");
Anchor175->setUrl(new CString[1]{"javascript:window.open('./data/626.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance176 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance176->setName("school");
CfieldValue* fieldValue177 = new CfieldValue();
fieldValue177->setName("pos");
fieldValue177->setValue("454.2 0.1 -358.6");
ProtoInstance176->addFieldValue(*fieldValue177);

Anchor175->addChildren(*ProtoInstance176);

Transform89->addChildren(*Anchor175);

CAnchor* Anchor178 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor178->setDescription("Willow Wood Day Centre");
Anchor178->setUrl(new CString[1]{"javascript:window.open('./data/628.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance179 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance179->setName("institute");
CfieldValue* fieldValue180 = new CfieldValue();
fieldValue180->setName("pos");
fieldValue180->setValue("450.6 0.1 -358.6");
ProtoInstance179->addFieldValue(*fieldValue180);

Anchor178->addChildren(*ProtoInstance179);

Transform89->addChildren(*Anchor178);

CAnchor* Anchor181 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor181->setDescription("Fased In The Arts");
Anchor181->setUrl(new CString[1]{"javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance182 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance182->setName("r");
CfieldValue* fieldValue183 = new CfieldValue();
fieldValue183->setName("pos");
fieldValue183->setValue("440 0.1 -350");
ProtoInstance182->addFieldValue(*fieldValue183);

Anchor181->addChildren(*ProtoInstance182);

Transform89->addChildren(*Anchor181);

CAnchor* Anchor184 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor184->setDescription("27a Access Artspace");
Anchor184->setUrl(new CString[1]{"javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance185 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance185->setName("n");
CfieldValue* fieldValue186 = new CfieldValue();
fieldValue186->setName("pos");
fieldValue186->setValue("458.9 0.1 -304.3");
ProtoInstance185->addFieldValue(*fieldValue186);

Anchor184->addChildren(*ProtoInstance185);

Transform89->addChildren(*Anchor184);

CAnchor* Anchor187 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor187->setDescription("Roman Way Day Centre, Market Harborough");
Anchor187->setUrl(new CString[1]{"javascript:window.open('./data/635.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance188 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance188->setName("institute");
CfieldValue* fieldValue189 = new CfieldValue();
fieldValue189->setName("pos");
fieldValue189->setValue("473.5 0.1 -287.5");
ProtoInstance188->addFieldValue(*fieldValue189);

Anchor187->addChildren(*ProtoInstance188);

Transform89->addChildren(*Anchor187);

CAnchor* Anchor190 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor190->setDescription("Mosaic, Leicester Disability Services");
Anchor190->setUrl(new CString[1]{"javascript:window.open('./data/637.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance191 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance191->setName("institute");
CfieldValue* fieldValue192 = new CfieldValue();
fieldValue192->setName("pos");
fieldValue192->setValue("458 0.1 -304.5");
ProtoInstance191->addFieldValue(*fieldValue192);

Anchor190->addChildren(*ProtoInstance191);

Transform89->addChildren(*Anchor190);

CAnchor* Anchor193 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor193->setDescription("Bamboozle Theatre Company");
Anchor193->setUrl(new CString[1]{"javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance194 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance194->setName("r");
CfieldValue* fieldValue195 = new CfieldValue();
fieldValue195->setName("pos");
fieldValue195->setValue("457.1 0.1 -300.8");
ProtoInstance194->addFieldValue(*fieldValue195);

Anchor193->addChildren(*ProtoInstance194);

Transform89->addChildren(*Anchor193);

CAnchor* Anchor196 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor196->setDescription("Ellesmere College, Leicester");
Anchor196->setUrl(new CString[1]{"javascript:window.open('./data/640.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance197 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance197->setName("school");
CfieldValue* fieldValue198 = new CfieldValue();
fieldValue198->setName("pos");
fieldValue198->setValue("456.8 0.1 -302.6");
ProtoInstance197->addFieldValue(*fieldValue198);

Anchor196->addChildren(*ProtoInstance197);

Transform89->addChildren(*Anchor196);

CAnchor* Anchor199 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor199->setDescription("Ashmount School, Loughborough");
Anchor199->setUrl(new CString[1]{"javascript:window.open('./data/642.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance200 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance200->setName("school");
CfieldValue* fieldValue201 = new CfieldValue();
fieldValue201->setName("pos");
fieldValue201->setValue("453.3 0.1 -318.6");
ProtoInstance200->addFieldValue(*fieldValue201);

Anchor199->addChildren(*ProtoInstance200);

Transform89->addChildren(*Anchor199);

CAnchor* Anchor202 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor202->setDescription("Mantle Community Arts");
Anchor202->setUrl(new CString[1]{"javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance203 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance203->setName("r");
CfieldValue* fieldValue204 = new CfieldValue();
fieldValue204->setName("pos");
fieldValue204->setValue("442.4 0.1 -314.5");
ProtoInstance203->addFieldValue(*fieldValue204);

Anchor202->addChildren(*ProtoInstance203);

Transform89->addChildren(*Anchor202);

CAnchor* Anchor205 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor205->setDescription("Forrest Way School");
Anchor205->setUrl(new CString[1]{"javascript:window.open('./data/650.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance206 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance206->setName("school");
CfieldValue* fieldValue207 = new CfieldValue();
fieldValue207->setName("pos");
fieldValue207->setValue("444.6 0.1 -313.7");
ProtoInstance206->addFieldValue(*fieldValue207);

Anchor205->addChildren(*ProtoInstance206);

Transform89->addChildren(*Anchor205);

CAnchor* Anchor208 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor208->setDescription("Ibstock Community College");
Anchor208->setUrl(new CString[1]{"javascript:window.open('./data/652.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance209 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance209->setName("school");
CfieldValue* fieldValue210 = new CfieldValue();
fieldValue210->setName("pos");
fieldValue210->setValue("440.6 0.1 -310.4");
ProtoInstance209->addFieldValue(*fieldValue210);

Anchor208->addChildren(*ProtoInstance209);

Transform89->addChildren(*Anchor208);

CAnchor* Anchor211 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor211->setDescription("Artlink East");
Anchor211->setUrl(new CString[1]{"javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance212 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance212->setName("r");
CfieldValue* fieldValue213 = new CfieldValue();
fieldValue213->setName("pos");
fieldValue213->setValue("491.6 0.1 -335.7");
ProtoInstance212->addFieldValue(*fieldValue213);

Anchor211->addChildren(*ProtoInstance212);

Transform89->addChildren(*Anchor211);

CAnchor* Anchor214 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor214->setDescription("United Hospitals and NHS Trust Lincolnshire");
Anchor214->setUrl(new CString[1]{"javascript:window.open('./data/660.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance215 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance215->setName("institute");
CfieldValue* fieldValue216 = new CfieldValue();
fieldValue216->setName("pos");
fieldValue216->setValue("491.4 0.1 -336.8");
ProtoInstance215->addFieldValue(*fieldValue216);

Anchor214->addChildren(*ProtoInstance215);

Transform89->addChildren(*Anchor214);

CAnchor* Anchor217 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor217->setDescription("Ancaster Day Centre");
Anchor217->setUrl(new CString[1]{"javascript:window.open('./data/662.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance218 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance218->setName("institute");
CfieldValue* fieldValue219 = new CfieldValue();
fieldValue219->setName("pos");
fieldValue219->setValue("496.9 0.1 -368.9");
ProtoInstance218->addFieldValue(*fieldValue219);

Anchor217->addChildren(*ProtoInstance218);

Transform89->addChildren(*Anchor217);

CAnchor* Anchor220 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor220->setDescription("Creations");
Anchor220->setUrl(new CString[1]{"javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance221 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance221->setName("r");
CfieldValue* fieldValue222 = new CfieldValue();
fieldValue222->setName("pos");
fieldValue222->setValue("467 0.1 -243.9");
ProtoInstance221->addFieldValue(*fieldValue222);

Anchor220->addChildren(*ProtoInstance221);

Transform89->addChildren(*Anchor220);

CAnchor* Anchor223 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor223->setDescription("Nene Day Centre, Northamtpon");
Anchor223->setUrl(new CString[1]{"javascript:window.open('./data/667.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance224 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance224->setName("institute");
CfieldValue* fieldValue225 = new CfieldValue();
fieldValue225->setName("pos");
fieldValue225->setValue("477.1 0.1 -260");
ProtoInstance224->addFieldValue(*fieldValue225);

Anchor223->addChildren(*ProtoInstance224);

Transform89->addChildren(*Anchor223);

CAnchor* Anchor226 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor226->setDescription("Delapre Middle School, Northampton");
Anchor226->setUrl(new CString[1]{"javascript:window.open('./data/668.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance227 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance227->setName("school");
CfieldValue* fieldValue228 = new CfieldValue();
fieldValue228->setName("pos");
fieldValue228->setValue("474.7 0.1 -259.1");
ProtoInstance227->addFieldValue(*fieldValue228);

Anchor226->addChildren(*ProtoInstance227);

Transform89->addChildren(*Anchor226);

CAnchor* Anchor229 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor229->setDescription("The Links, Brackley");
Anchor229->setUrl(new CString[1]{"javascript:window.open('./data/669.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance230 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance230->setName("institute");
CfieldValue* fieldValue231 = new CfieldValue();
fieldValue231->setName("pos");
fieldValue231->setValue("459 0.1 -236.4");
ProtoInstance230->addFieldValue(*fieldValue231);

Anchor229->addChildren(*ProtoInstance230);

Transform89->addChildren(*Anchor229);

CAnchor* Anchor232 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor232->setDescription("New Perspectives");
Anchor232->setUrl(new CString[1]{"javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance233 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance233->setName("n");
CfieldValue* fieldValue234 = new CfieldValue();
fieldValue234->setName("pos");
fieldValue234->setValue("457.4 0.1 -262.7");
ProtoInstance233->addFieldValue(*fieldValue234);

Anchor232->addChildren(*ProtoInstance233);

Transform89->addChildren(*Anchor232);

CAnchor* Anchor235 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor235->setDescription("UKan2");
Anchor235->setUrl(new CString[1]{"javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance236 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance236->setName("r");
CfieldValue* fieldValue237 = new CfieldValue();
fieldValue237->setName("pos");
fieldValue237->setValue("458.7 0.1 -262.7");
ProtoInstance236->addFieldValue(*fieldValue237);

Anchor235->addChildren(*ProtoInstance236);

Transform89->addChildren(*Anchor235);

CAnchor* Anchor238 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor238->setDescription("Silverstone County Infants School");
Anchor238->setUrl(new CString[1]{"javascript:window.open('./data/672.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance239 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance239->setName("school");
CfieldValue* fieldValue240 = new CfieldValue();
fieldValue240->setName("pos");
fieldValue240->setValue("466.9 0.1 -243.8");
ProtoInstance239->addFieldValue(*fieldValue240);

Anchor238->addChildren(*ProtoInstance239);

Transform89->addChildren(*Anchor238);

CAnchor* Anchor241 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor241->setDescription("Riverside Resource Centre, Towcester");
Anchor241->setUrl(new CString[1]{"javascript:window.open('./data/677.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance242 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance242->setName("institute");
CfieldValue* fieldValue243 = new CfieldValue();
fieldValue243->setName("pos");
fieldValue243->setValue("469.5 0.1 -249.8");
ProtoInstance242->addFieldValue(*fieldValue243);

Anchor241->addChildren(*ProtoInstance242);

Transform89->addChildren(*Anchor241);

CAnchor* Anchor244 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor244->setDescription("Daventry Tertiary College");
Anchor244->setUrl(new CString[1]{"javascript:window.open('./data/678.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance245 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance245->setName("school");
CfieldValue* fieldValue246 = new CfieldValue();
fieldValue246->setName("pos");
fieldValue246->setValue("456.7 0.1 -261.8");
ProtoInstance245->addFieldValue(*fieldValue246);

Anchor244->addChildren(*ProtoInstance245);

Transform89->addChildren(*Anchor244);

CShape* Shape247 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance248 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material249 = (CMaterial *)(m_pScene.createNode("Material"));
Material249->setEmissiveColor(new float[3]{1,0,0});
Material249->setTransparency(0.2);
Appearance248->setMaterial(*Material249);

Shape247->setAppearance(*Appearance248);

CIndexedLineSet* IndexedLineSet250 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet250->setCoordIndex(new int[54]{0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1});
CCoordinate* Coordinate251 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate251->setPoint(new float[108]{430,0.02,-335,435.8,0.1,-335.3,430,0.02,-335,434.6,0.1,-338.6,430,0.02,-335,432.7,0.1,-336.6,430,0.02,-335,434.7,0.1,-336.9,429.9,0.02,-360.3,474.7,0.1,-318.8,429.9,0.02,-360.3,485.6,0.1,-309,429.9,0.02,-360.3,434.8,0.1,-371.5,454,0.02,-361.3,457.4,0.1,-359.6,454,0.02,-361.3,454.2,0.1,-358.6,454,0.02,-361.3,450.6,0.1,-358.6,458.9,0.02,-304.3,473.5,0.1,-287.5,458.9,0.02,-304.3,458,0.1,-304.5,491.6,0.02,-335.7,491.4,0.1,-336.8,491.6,0.02,-335.7,496.9,0.1,-368.9,467,0.02,-243.9,477.1,0.1,-260,467,0.02,-243.9,459,0.1,-236.4,458.7,0.02,-262.7,469.5,0.1,-249.8,458.7,0.02,-262.7,456.7,0.1,-261.8});
IndexedLineSet250->setCoord(*Coordinate251);

Shape247->setGeometry(IndexedLineSet250);

Transform89->addChild(*Shape247);

CShape* Shape252 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance253 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material254 = (CMaterial *)(m_pScene.createNode("Material"));
Material254->setEmissiveColor(new float[3]{0,1,0});
Material254->setTransparency(0.2);
Appearance253->setMaterial(*Material254);

Shape252->setAppearance(*Appearance253);

CIndexedLineSet* IndexedLineSet255 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet255->setCoordIndex(new int[54]{0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1});
CCoordinate* Coordinate256 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate256->setPoint(new float[108]{400,0.02,-385,400.6,0.1,-392.9,400,0.02,-385,416.7,0.1,-383.4,430,0.02,-335,438.3,0.1,-338.6,430,0.02,-335,434.8,0.1,-336,430,0.02,-335,437.6,0.1,-332.6,430,0.02,-335,436.3,0.1,-333.4,430,0.02,-335,435.2,0.1,-336.8,430,0.02,-335,432.5,0.1,-332.5,429.9,0.02,-360.3,436.1,0.1,-334.9,429.9,0.02,-360.3,440.5,0.1,-355.5,429.9,0.02,-360.3,436.3,0.1,-371.7,429.9,0.02,-360.3,431.2,0.1,-361.2,457.1,0.02,-300.8,456.8,0.1,-302.6,457.1,0.02,-300.8,453.3,0.1,-318.6,442.4,0.02,-314.5,444.6,0.1,-313.7,442.4,0.02,-314.5,440.6,0.1,-310.4,467,0.02,-243.9,474.7,0.1,-259.1,457.4,0.02,-262.7,466.9,0.1,-243.8});
IndexedLineSet255->setCoord(*Coordinate256);

Shape252->setGeometry(IndexedLineSet255);

Transform89->addChild(*Shape252);

CShape* Shape257 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance258 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material259 = (CMaterial *)(m_pScene.createNode("Material"));
Material259->setEmissiveColor(new float[3]{1,0,1});
Material259->setTransparency(0.2);
Appearance258->setMaterial(*Material259);

Shape257->setAppearance(*Appearance258);

CIndexedLineSet* IndexedLineSet260 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet260->setCoordIndex(new int[15]{0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1});
CCoordinate* Coordinate261 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate261->setPoint(new float[30]{430,0.02,-335,429.9,0.1,-360.3,442.4,0.02,-314.5,429.9,0.1,-319.6,457.4,0.02,-262.7,467,0.1,-243.9,458.7,0.02,-262.7,457.4,0.1,-262.7,458.7,0.02,-262.7,467,0.1,-243.9});
IndexedLineSet260->setCoord(*Coordinate261);

Shape257->setGeometry(IndexedLineSet260);

Transform89->addChild(*Shape257);

group->addChildren(*Transform89);

X3D0->setScene(*Scene3);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
